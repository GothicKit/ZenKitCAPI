// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/DaedalusScript.h"
#include "Internal.hh"

#include <exception>
#include <zenkit/addon/daedalus.hh>

class ZkTransientInstance final : public zenkit::DaedalusTransientInstance {
private:
	void* _m_ctx;
	ZkDaedalusTransientInstanceIntGetter _m_get_int;
	ZkDaedalusTransientInstanceIntSetter _m_set_int;
	ZkDaedalusTransientInstanceFloatGetter _m_get_float;
	ZkDaedalusTransientInstanceFloatSetter _m_set_float;
	ZkDaedalusTransientInstanceStringGetter _m_get_string;
	ZkDaedalusTransientInstanceStringSetter _m_set_string;

public:
	ZkTransientInstance(void* m_ctx,
	                    ZkDaedalusTransientInstanceIntGetter get_int,
	                    ZkDaedalusTransientInstanceIntSetter set_int,
	                    ZkDaedalusTransientInstanceFloatGetter get_float,
	                    ZkDaedalusTransientInstanceFloatSetter set_float,
	                    ZkDaedalusTransientInstanceStringGetter get_string,
	                    ZkDaedalusTransientInstanceStringSetter set_string)
	    : _m_ctx(m_ctx), _m_get_int(get_int), _m_set_int(set_int), _m_get_float(get_float), _m_set_float(set_float),
	      _m_get_string(get_string), _m_set_string(set_string) {}

protected:
	void set_int(const zenkit::DaedalusSymbol& sym, uint16_t index, std::int32_t value) override {
		_m_set_int(_m_ctx, const_cast<zenkit::DaedalusSymbol*>(&sym), index, value);
	}

	[[nodiscard]] std::int32_t get_int(const zenkit::DaedalusSymbol& sym, uint16_t index) const override {
		return _m_get_int(_m_ctx, const_cast<zenkit::DaedalusSymbol*>(&sym), index);
	}

	void set_float(const zenkit::DaedalusSymbol& sym, uint16_t index, float value) override {
		_m_set_float(_m_ctx, const_cast<zenkit::DaedalusSymbol*>(&sym), index, value);
	}

	[[nodiscard]] float get_float(const zenkit::DaedalusSymbol& sym, uint16_t index) const override {
		return _m_get_float(_m_ctx, const_cast<zenkit::DaedalusSymbol*>(&sym), index);
	}

	void set_string(const zenkit::DaedalusSymbol& sym, uint16_t index, std::string_view value) override {
		_m_set_string(_m_ctx, const_cast<zenkit::DaedalusSymbol*>(&sym), index, value.data());
	}

	[[nodiscard]] const std::string& get_string(const zenkit::DaedalusSymbol& sym, uint16_t index) const override {
		return _m_get_string(_m_ctx, const_cast<zenkit::DaedalusSymbol*>(&sym), index);
	}
};

ZKC_LOADER(ZkDaedalusScript)
ZKC_PATH_LOADER(ZkDaedalusScript)
ZKC_VFS_LOADER(ZkDaedalusScript)
ZKC_DELETER(ZkDaedalusScript)

uint32_t ZkDaedalusScript_getSymbolCount(ZkDaedalusScript* slf) {
	ZKC_CHECK_NULL(slf);
	return (uint32_t) slf->symbols().size();
}

void ZkDaedalusScript_enumerateSymbols(ZkDaedalusScript* slf, ZkDaedalusSymbolEnumerator cb, void* ctx) {
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& symbol : slf->symbols()) {
		if (cb(ctx, const_cast<ZkDaedalusSymbol*>(&symbol))) break;
	}
}

void ZkDaedalusScript_enumerateInstanceSymbols(ZkDaedalusScript* slf,
                                               ZkString className,
                                               ZkDaedalusSymbolEnumerator cb,
                                               void* ctx) {
	ZKC_CHECK_NULLV(slf, cb);

	slf->enumerate_instances_by_class_name(className, [cb, ctx](auto& sym) { cb(ctx, &sym); });
}

ZkDaedalusInstruction ZkDaedalusScript_getInstruction(ZkDaedalusScript* slf, ZkSize address) {
	ZKC_CHECK_NULL(slf);

	auto instr = slf->instruction_at((uint32_t) address);

	ZkDaedalusInstruction instruction;
	instruction.op = static_cast<ZkDaedalusOpcode>(instr.op);
	instruction.size = 1;

	switch (instr.op) {
	case zenkit::DaedalusOpcode::BL:
	case zenkit::DaedalusOpcode::BZ:
	case zenkit::DaedalusOpcode::B:
		instruction.opAddress = instr.address;
		instruction.size += sizeof(std::uint32_t);
		break;
	case zenkit::DaedalusOpcode::PUSHI:
		instruction.opImmediate = instr.immediate;
		instruction.size += sizeof(std::uint32_t);
		break;
	case zenkit::DaedalusOpcode::BE:
	case zenkit::DaedalusOpcode::PUSHV:
	case zenkit::DaedalusOpcode::PUSHVI:
	case zenkit::DaedalusOpcode::GMOVI:
		instruction.opSymbol = instr.symbol;
		instruction.size += sizeof(std::uint32_t);
		break;
	case zenkit::DaedalusOpcode::PUSHVV:
		instruction.opSymbol = instr.symbol;
		instruction.opIndex = instr.index;
		instruction.size += sizeof(std::uint32_t) + sizeof(std::uint8_t);
		break;
	default:
		break;
	}

	return instruction;
}

ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByIndex(ZkDaedalusScript* slf, uint32_t i) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->find_symbol_by_index(i));
}

ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByAddress(ZkDaedalusScript* slf, ZkSize address) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->find_symbol_by_address((uint32_t) address));
}

ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByName(ZkDaedalusScript* slf, ZkString name) {
	ZKC_CHECK_NULL(slf, name);
	ZKC_RETURN_CATCH(slf->find_symbol_by_name(name));
}

ZkString ZkDaedalusSymbol_getString(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->get_string(index, context ? context->get() : nullptr).c_str());
}

float ZkDaedalusSymbol_getFloat(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->get_float(index, context ? context->get() : nullptr));
}

int32_t ZkDaedalusSymbol_getInt(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->get_int(index, context ? context->get() : nullptr));
}

ZkDaedalusInstance* ZkDaedalusSymbol_getInstance(ZkDaedalusSymbol* slf) {
	ZKC_CHECK_NULL(slf, slf);

	try {
		auto& instance = slf->get_instance();
		if (instance == nullptr) return nullptr;
		return new ZkDaedalusInstance(instance);
	} catch (std::exception& e) {
		return nullptr;
	}
}

void ZkDaedalusSymbol_setString(ZkDaedalusSymbol* slf, ZkString value, uint16_t index, ZkDaedalusInstance* context) {
	ZKC_CHECK_NULLV(slf, value);
	ZKC_CATCH(slf->set_string(value, index, context ? context->get() : nullptr));
}

void ZkDaedalusSymbol_setFloat(ZkDaedalusSymbol* slf, float value, uint16_t index, ZkDaedalusInstance* context) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->set_float(value, index, context ? context->get() : nullptr));
}

void ZkDaedalusSymbol_setInt(ZkDaedalusSymbol* slf, int32_t value, uint16_t index, ZkDaedalusInstance* context) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CATCH(slf->set_int(value, index, context ? context->get() : nullptr));
}

ZkBool ZkDaedalusSymbol_getIsConst(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->is_const());
}

ZkBool ZkDaedalusSymbol_getIsMember(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->is_member());
}

ZkBool ZkDaedalusSymbol_getIsExternal(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->is_external());
}

ZkBool ZkDaedalusSymbol_getIsMerged(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->is_merged());
}

ZkBool ZkDaedalusSymbol_getIsGenerated(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->is_generated());
}

ZkBool ZkDaedalusSymbol_getHasReturn(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->has_return());
}

ZkString ZkDaedalusSymbol_getName(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->name().c_str());
}

int32_t ZkDaedalusSymbol_getAddress(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(static_cast<int32_t>(slf->address()));
}

int32_t ZkDaedalusSymbol_getParent(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(static_cast<int32_t>(slf->parent()));
}

int32_t ZkDaedalusSymbol_getSize(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(static_cast<int32_t>(slf->count()));
}

ZkDaedalusDataType ZkDaedalusSymbol_getType(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(static_cast<ZkDaedalusDataType>(slf->type()));
}

uint32_t ZkDaedalusSymbol_getIndex(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(slf->index());
}

ZkDaedalusDataType ZkDaedalusSymbol_getReturnType(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_RETURN_CATCH(static_cast<ZkDaedalusDataType>(slf->rtype()));
}

ZkDaedalusInstance* ZkDaedalusInstance_newTransient(void* ctx,
                                                    ZkDaedalusTransientInstanceIntGetter getInt,
                                                    ZkDaedalusTransientInstanceIntSetter setInt,
                                                    ZkDaedalusTransientInstanceFloatGetter getFloat,
                                                    ZkDaedalusTransientInstanceFloatSetter setFloat,
                                                    ZkDaedalusTransientInstanceStringGetter getString,
                                                    ZkDaedalusTransientInstanceStringSetter setString) {
	return new ZkDaedalusInstance(new ZkTransientInstance(ctx, getInt, setInt, getFloat, setFloat, getString, setString));
}

ZKC_API ZkDaedalusInstanceType ZkDaedalusInstance_getType(ZkDaedalusInstance const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	auto type = SLF->instance_type();

	if (type == &typeid(zenkit::IGuildValues)) return ZkDaedalusInstanceType_GuildValues;
	if (type == &typeid(zenkit::INpc)) return ZkDaedalusInstanceType_Npc;
	if (type == &typeid(zenkit::IMission)) return ZkDaedalusInstanceType_Mission;
	if (type == &typeid(zenkit::IItem)) return ZkDaedalusInstanceType_Item;
	if (type == &typeid(zenkit::IFocus)) return ZkDaedalusInstanceType_Focus;
	if (type == &typeid(zenkit::IInfo)) return ZkDaedalusInstanceType_Info;
	if (type == &typeid(zenkit::IItemReact)) return ZkDaedalusInstanceType_ItemReact;
	if (type == &typeid(zenkit::ISpell)) return ZkDaedalusInstanceType_Spell;
	if (type == &typeid(zenkit::ISvm)) return ZkDaedalusInstanceType_Svm;
	if (type == &typeid(zenkit::IMenu)) return ZkDaedalusInstanceType_Menu;
	if (type == &typeid(zenkit::IMenuItem)) return ZkDaedalusInstanceType_MenuItem;
	if (type == &typeid(zenkit::ICamera)) return ZkDaedalusInstanceType_Camera;
	if (type == &typeid(zenkit::IMusicSystem)) return ZkDaedalusInstanceType_MusicSystem;
	if (type == &typeid(zenkit::IMusicTheme)) return ZkDaedalusInstanceType_MusicTheme;
	if (type == &typeid(zenkit::IMusicJingle)) return ZkDaedalusInstanceType_MusicJingle;
	if (type == &typeid(zenkit::IParticleEffect)) return ZkDaedalusInstanceType_ParticleEffect;
	if (type == &typeid(zenkit::IEffectBase)) return ZkDaedalusInstanceType_EffectBase;
	if (type == &typeid(zenkit::IParticleEffectEmitKey)) return ZkDaedalusInstanceType_ParticleEffectEmitKey;
	if (type == &typeid(zenkit::IFightAi)) return ZkDaedalusInstanceType_FightAi;
	if (type == &typeid(zenkit::ISoundEffect)) return ZkDaedalusInstanceType_SoundEffect;
	if (type == &typeid(zenkit::ISoundSystem)) return ZkDaedalusInstanceType_SoundSystem;

	return ZkDaedalusInstanceType_Invalid;
}

void ZkDaedalusInstance_release(ZkDaedalusInstance const* slf) {
	delete slf;
}

uint32_t ZkDaedalusInstance_getIndex(ZkDaedalusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->symbol_index();
}

void* ZkDaedalusInstance_getUserPointer(ZkDaedalusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->user_ptr;
}

void ZkDaedalusInstance_setUserPointer(ZkDaedalusInstance* slf, void* ptr) {
	ZKC_CHECK_NULLV(slf);
	SLF->user_ptr = ptr;
}

uint32_t ZkDaedalusSymbol_getFileIndex(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->file_index();
}

uint32_t ZkDaedalusSymbol_getOffsetAsMember(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->offset_as_member();
}

uint32_t ZkDaedalusSymbol_getLineStart(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->line_start();
}

uint32_t ZkDaedalusSymbol_getLineCount(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->line_count();
}

uint32_t ZkDaedalusSymbol_getCharStart(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->char_start();
}

uint32_t ZkDaedalusSymbol_getCharCount(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->char_count();
}

uint32_t ZkDaedalusSymbol_getClassSize(ZkDaedalusSymbol const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->class_size();
}
