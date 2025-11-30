// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/DaedalusVm.h"

#include <zenkit/DaedalusVm.hh>
#include <zenkit/addon/daedalus.hh>

#include "Internal.hh"

struct ZkInternal_DaedalusVm {
	zenkit::DaedalusVm handle;
	std::unordered_map<uint32_t, std::function<void(ZkDaedalusVm*)>> externals;
	std::function<void(ZkDaedalusVm*, ZkDaedalusSymbol*)> externalDefault;
	std::string string_scope_workaround_cache {};
};

ZkDaedalusVm* ZkDaedalusVm_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(buf);

	try {
		ZkDaedalusScript script;
		script.load(buf);
		zenkit::register_all_script_classes(script);

		auto* vm = new ZkDaedalusVm {
		    zenkit::DaedalusVm {std::move(script), zenkit::DaedalusVmExecutionFlag::ALLOW_NULL_INSTANCE_ACCESS},
		    {},
		    nullptr};
		vm->handle.register_exception_handler(zenkit::lenient_vm_exception_handler);

		vm->handle.register_default_external_custom([vm](zenkit::DaedalusVm& v, zenkit::DaedalusSymbol& sym) {
			auto callback = vm->externals.find(sym.index());
			if (callback != vm->externals.end()) {
				callback->second(vm);
				return;
			}

			auto params = v.find_parameters_for_function(&sym);
			for (int i = static_cast<int>(params.size()) - 1; i >= 0; --i) {
				auto& par = params[static_cast<unsigned>(i)];

				if (par.type() == zenkit::DaedalusDataType::INT)
					(void) v.pop_int();
				else if (par.type() == zenkit::DaedalusDataType::FLOAT)
					(void) v.pop_float();
				else if (par.type() == zenkit::DaedalusDataType::INSTANCE ||
				         par.type() == zenkit::DaedalusDataType::STRING)
					(void) v.pop_reference();
			}

			if (sym.has_return()) {
				if (sym.rtype() == zenkit::DaedalusDataType::FLOAT)
					v.push_float(0.0f);
				else if (sym.rtype() == zenkit::DaedalusDataType::INT)
					v.push_int(0);
				else if (sym.rtype() == zenkit::DaedalusDataType::STRING)
					v.push_string("");
				else if (sym.rtype() == zenkit::DaedalusDataType::INSTANCE)
					v.push_instance(nullptr);
			}

			if (vm->externalDefault) vm->externalDefault(vm, &sym);
		});

		return vm;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkDaedalusVm_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkDaedalusVm* ZkDaedalusVm_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(path);

	try {
		auto buf = zenkit::Read::from(path);
		return ZkDaedalusVm_load(buf.get());
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkDaedalusVm_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkDaedalusVm* ZkDaedalusVm_loadVfs(ZkVfs* vfs, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(vfs, name);

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkDaedalusVm_load(rd.get());
}

ZKC_DELETER(ZkDaedalusVm)

void ZkDaedalusVm_pushInt(ZkDaedalusVm* slf, int32_t value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->handle.push_int(value));
}

void ZkDaedalusVm_pushFloat(ZkDaedalusVm* slf, float value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->handle.push_float(value));
}

void ZkDaedalusVm_pushString(ZkDaedalusVm* slf, ZkString value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->handle.push_string(value));
}

void ZkDaedalusVm_pushInstance(ZkDaedalusVm* slf, ZkDaedalusInstance* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);

	if (value == nullptr) {
		ZKC_CATCH(slf->handle.push_instance(nullptr));
		return;
	}

	ZKC_CATCH(slf->handle.push_instance(*value));
}

int32_t ZkDaedalusVm_popInt(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->handle.pop_int());
}

float ZkDaedalusVm_popFloat(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->handle.pop_float());
}

ZkString ZkDaedalusVm_popString(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	try {
		slf->string_scope_workaround_cache = slf->handle.pop_string();
	} catch (std::exception const& exc) {
		zenkit::Logger::log(zenkit::LogLevel::ERROR, "<Native>", "%s() failed: %s", __func__, exc.what());
		return nullptr;
	}

	return slf->string_scope_workaround_cache.c_str();
}

ZkDaedalusInstance* ZkDaedalusVm_popInstance(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	try {
		auto instance = slf->handle.pop_instance();
		if (instance == nullptr) {
			return nullptr;
		}
		ZKC_RETURN_CATCH(new ZkDaedalusInstance(instance));
	} catch (zenkit::DaedalusScriptError const& e) {
		ZKC_LOG_ERROR("Failed to pop instance: %s", e.what());
		return nullptr;
	}
}

ZkDaedalusInstance* ZkDaedalusVm_getGlobalSelf(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	auto& instance = slf->handle.global_self()->get_instance();
	if (instance == nullptr) {
		return nullptr;
	}
	ZKC_RETURN_CATCH(new ZkDaedalusInstance(instance));
}

ZkDaedalusInstance* ZkDaedalusVm_getGlobalOther(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	auto& instance = slf->handle.global_other()->get_instance();
	if (instance == nullptr) {
		return nullptr;
	}
	ZKC_RETURN_CATCH(new ZkDaedalusInstance(instance));
}

ZkDaedalusInstance* ZkDaedalusVm_getGlobalVictim(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	auto& instance = slf->handle.global_victim()->get_instance();
	if (instance == nullptr) {
		return nullptr;
	}
	ZKC_RETURN_CATCH(new ZkDaedalusInstance(instance));
}

ZkDaedalusInstance* ZkDaedalusVm_getGlobalHero(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	auto& instance = slf->handle.global_hero()->get_instance();
	if (instance == nullptr) {
		return nullptr;
	}
	ZKC_RETURN_CATCH(new ZkDaedalusInstance(instance));
}

ZkDaedalusInstance* ZkDaedalusVm_getGlobalItem(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	auto& instance = slf->handle.global_item()->get_instance();
	if (instance == nullptr) {
		return nullptr;
	}

	ZKC_RETURN_CATCH(new ZkDaedalusInstance(instance));
}

void ZkDaedalusVm_setGlobalSelf(ZkDaedalusVm* slf, ZkDaedalusInstance* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);

	ZKC_CATCH(slf->handle.global_self()->set_instance(value ? *value : nullptr));
}
void ZkDaedalusVm_setGlobalOther(ZkDaedalusVm* slf, ZkDaedalusInstance* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->handle.global_other()->set_instance(value ? *value : nullptr));
}
void ZkDaedalusVm_setGlobalVictim(ZkDaedalusVm* slf, ZkDaedalusInstance* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->handle.global_victim()->set_instance(value ? *value : nullptr));
}
void ZkDaedalusVm_setGlobalHero(ZkDaedalusVm* slf, ZkDaedalusInstance* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->handle.global_hero()->set_instance(value ? *value : nullptr));
}
void ZkDaedalusVm_setGlobalItem(ZkDaedalusVm* slf, ZkDaedalusInstance* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->handle.global_item()->set_instance(value ? *value : nullptr));
}

void ZkDaedalusVm_callFunction(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->handle.unsafe_call(sym);
}

ZkDaedalusInstance* ZkDaedalusVm_allocInstance(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym, ZkDaedalusInstanceType type) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, sym);

	auto* instance = new ZkDaedalusInstance;
	switch (type) {
	case ZkDaedalusInstanceType_GuildValues:
		*instance = slf->handle.allocate_instance<zenkit::IGuildValues>(sym);
		break;
	case ZkDaedalusInstanceType_Npc:
		*instance = slf->handle.allocate_instance<zenkit::INpc>(sym);
		break;
	case ZkDaedalusInstanceType_Mission:
		*instance = slf->handle.allocate_instance<zenkit::IMission>(sym);
		break;
	case ZkDaedalusInstanceType_Item:
		*instance = slf->handle.allocate_instance<zenkit::IItem>(sym);
		break;
	case ZkDaedalusInstanceType_Focus:
		*instance = slf->handle.allocate_instance<zenkit::IFocus>(sym);
		break;
	case ZkDaedalusInstanceType_Info:
		*instance = slf->handle.allocate_instance<zenkit::IInfo>(sym);
		break;
	case ZkDaedalusInstanceType_ItemReact:
		*instance = slf->handle.allocate_instance<zenkit::IItemReact>(sym);
		break;
	case ZkDaedalusInstanceType_Spell:
		*instance = slf->handle.allocate_instance<zenkit::ISpell>(sym);
		break;
	case ZkDaedalusInstanceType_Svm:
		*instance = slf->handle.allocate_instance<zenkit::ISvm>(sym);
		break;
	case ZkDaedalusInstanceType_Menu:
		*instance = slf->handle.allocate_instance<zenkit::IMenu>(sym);
		break;
	case ZkDaedalusInstanceType_MenuItem:
		*instance = slf->handle.allocate_instance<zenkit::IMenuItem>(sym);
		break;
	case ZkDaedalusInstanceType_Camera:
		*instance = slf->handle.allocate_instance<zenkit::ICamera>(sym);
		break;
	case ZkDaedalusInstanceType_MusicSystem:
		*instance = slf->handle.allocate_instance<zenkit::IMusicSystem>(sym);
		break;
	case ZkDaedalusInstanceType_MusicTheme:
		*instance = slf->handle.allocate_instance<zenkit::IMusicTheme>(sym);
		break;
	case ZkDaedalusInstanceType_MusicJingle:
		*instance = slf->handle.allocate_instance<zenkit::IMusicJingle>(sym);
		break;
	case ZkDaedalusInstanceType_ParticleEffect:
		*instance = slf->handle.allocate_instance<zenkit::IParticleEffect>(sym);
		break;
	case ZkDaedalusInstanceType_EffectBase:
		*instance = slf->handle.allocate_instance<zenkit::IEffectBase>(sym);
		break;
	case ZkDaedalusInstanceType_ParticleEffectEmitKey:
		*instance = slf->handle.allocate_instance<zenkit::IParticleEffectEmitKey>(sym);
		break;
	case ZkDaedalusInstanceType_FightAi:
		*instance = slf->handle.allocate_instance<zenkit::IFightAi>(sym);
		break;
	case ZkDaedalusInstanceType_SoundEffect:
		*instance = slf->handle.allocate_instance<zenkit::ISoundEffect>(sym);
		break;
	case ZkDaedalusInstanceType_SoundSystem:
		*instance = slf->handle.allocate_instance<zenkit::ISoundSystem>(sym);
		break;
	default:
		ZKC_LOG_ERROR("ZkDaedalusVm_allocInstance() failed: invalid instance type");
		delete instance;
		return nullptr;
	}

	return instance;
}

ZkDaedalusInstance* ZkDaedalusVm_initInstance(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym, ZkDaedalusInstanceType type) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, sym);

	auto* instance = new ZkDaedalusInstance;
	switch (type) {
	case ZkDaedalusInstanceType_GuildValues:
		*instance = slf->handle.init_instance<zenkit::IGuildValues>(sym);
		break;
	case ZkDaedalusInstanceType_Npc:
		*instance = slf->handle.init_instance<zenkit::INpc>(sym);
		break;
	case ZkDaedalusInstanceType_Mission:
		*instance = slf->handle.init_instance<zenkit::IMission>(sym);
		break;
	case ZkDaedalusInstanceType_Item:
		*instance = slf->handle.init_instance<zenkit::IItem>(sym);
		break;
	case ZkDaedalusInstanceType_Focus:
		*instance = slf->handle.init_instance<zenkit::IFocus>(sym);
		break;
	case ZkDaedalusInstanceType_Info:
		*instance = slf->handle.init_instance<zenkit::IInfo>(sym);
		break;
	case ZkDaedalusInstanceType_ItemReact:
		*instance = slf->handle.init_instance<zenkit::IItemReact>(sym);
		break;
	case ZkDaedalusInstanceType_Spell:
		*instance = slf->handle.init_instance<zenkit::ISpell>(sym);
		break;
	case ZkDaedalusInstanceType_Svm:
		*instance = slf->handle.init_instance<zenkit::ISvm>(sym);
		break;
	case ZkDaedalusInstanceType_Menu:
		*instance = slf->handle.init_instance<zenkit::IMenu>(sym);
		break;
	case ZkDaedalusInstanceType_MenuItem:
		*instance = slf->handle.init_instance<zenkit::IMenuItem>(sym);
		break;
	case ZkDaedalusInstanceType_Camera:
		*instance = slf->handle.init_instance<zenkit::ICamera>(sym);
		break;
	case ZkDaedalusInstanceType_MusicSystem:
		*instance = slf->handle.init_instance<zenkit::IMusicSystem>(sym);
		break;
	case ZkDaedalusInstanceType_MusicTheme:
		*instance = slf->handle.init_instance<zenkit::IMusicTheme>(sym);
		break;
	case ZkDaedalusInstanceType_MusicJingle:
		*instance = slf->handle.init_instance<zenkit::IMusicJingle>(sym);
		break;
	case ZkDaedalusInstanceType_ParticleEffect:
		*instance = slf->handle.init_instance<zenkit::IParticleEffect>(sym);
		break;
	case ZkDaedalusInstanceType_EffectBase:
		*instance = slf->handle.init_instance<zenkit::IEffectBase>(sym);
		break;
	case ZkDaedalusInstanceType_ParticleEffectEmitKey:
		*instance = slf->handle.init_instance<zenkit::IParticleEffectEmitKey>(sym);
		break;
	case ZkDaedalusInstanceType_FightAi:
		*instance = slf->handle.init_instance<zenkit::IFightAi>(sym);
		break;
	case ZkDaedalusInstanceType_SoundEffect:
		*instance = slf->handle.init_instance<zenkit::ISoundEffect>(sym);
		break;
	case ZkDaedalusInstanceType_SoundSystem:
		*instance = slf->handle.init_instance<zenkit::ISoundSystem>(sym);
		break;
	default:
		ZKC_LOG_ERROR("ZkDaedalusVm_initInstance() failed: invalid instance type");
		delete instance;
		return nullptr;
	}

	return instance;
}

void ZkDaedalusVm_initInstanceDirect(ZkDaedalusVm* slf, ZkDaedalusInstance* sym) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, sym);

	auto global_self = slf->handle.global_self();

	auto old_gi = slf->handle.unsafe_get_gi();
	auto old_slf = global_self != nullptr ? global_self->get_instance() : nullptr;

	slf->handle.unsafe_set_gi(*sym);
	if (global_self != nullptr) global_self->set_instance(*sym);

	auto* s = slf->handle.find_symbol_by_instance(*sym);
	s->set_instance(*sym);

	slf->handle.unsafe_call(s);

	if (global_self != nullptr) global_self->set_instance(old_slf);
	slf->handle.unsafe_set_gi(old_gi);
}

void ZkDaedalusVm_registerExternal(ZkDaedalusVm* slf,
                                   ZkDaedalusSymbol* sym,
                                   ZkDaedalusVmExternalCallback cb,
                                   void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, sym, cb);
	slf->externals.insert_or_assign(sym->index(), [cb, ctx](ZkDaedalusVm* vm) { cb(ctx, vm); });
}

void ZkDaedalusVm_overrideFunction(ZkDaedalusVm* slf, char const* name, ZkDaedalusVmExternalCallback cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, name, cb);

	try {
		slf->handle.override_function(name, [slf, ctx, cb](zenkit::DaedalusVm&) -> zenkit::DaedalusNakedCall {
			cb(ctx, slf);
			return {};
		});
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkDaedalusVm_overrideFunction() failed: %s", exc.what());
	}
}

void ZkDaedalusVm_registerExternalDefault(ZkDaedalusVm* slf, ZkDaedalusVmExternalDefaultCallback cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->externalDefault = [cb, ctx](ZkDaedalusVm* vm, ZkDaedalusSymbol* sym) { cb(ctx, vm, sym); };
}

void ZkDaedalusVm_printStackTrace(ZkDaedalusVm* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->handle.print_stack_trace();
}
