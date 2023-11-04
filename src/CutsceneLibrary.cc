// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/CutsceneLibrary.h"

ZkCutsceneLibrary* ZkCutsceneLibrary_load(ZkRead* buf) {
	if (buf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneLibrary_load");
		return nullptr;
	}

	try {
		ZkCutsceneLibrary obj {};
		obj.load(buf);
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkCutsceneLibrary_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkCutsceneLibrary* ZkCutsceneLibrary_loadPath(ZkString path) {
	if (path == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneLibrary_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkCutsceneLibrary obj {};
		obj.load(buf.get());
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkCutsceneLibrary_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkCutsceneLibrary* ZkCutsceneLibrary_loadVfs(ZkVfs const* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneLibrary_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkCutsceneLibrary_load(rd.get());
}

void ZkCutsceneLibrary_del(ZkCutsceneLibrary* slf) {
	delete slf;
}

ZkCutsceneBlock const* ZkCutsceneLibrary_getBlock(ZkCutsceneLibrary const* slf, ZkString name) {
	if (slf == nullptr || name == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneLibrary_getBlock");
		return nullptr;
	}

	return slf->block_by_name(name);
}

void ZkCutsceneLibrary_enumerateBlocks(ZkCutsceneLibrary const* slf, ZkCutsceneBlockEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneLibrary_enumerateBlocks");
		return;
	}

	for (auto& block : slf->blocks) {
		if (cb(ctx, &block)) break;
	}
}

ZkString ZkCutsceneBlock_getName(ZkCutsceneBlock const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneBlock_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

ZkCutsceneMessage const* ZkCutsceneBlock_getMessage(ZkCutsceneBlock const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneBlock_getMessage");
		return nullptr;
	}

	return &slf->message;
}

uint32_t ZkCutsceneMessage_getType(ZkCutsceneMessage const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneMessage_getType");
		return 0;
	}

	return slf->type;
}

ZkString ZkCutsceneMessage_getText(ZkCutsceneMessage const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneMessage_getText");
		return nullptr;
	}

	return slf->text.c_str();
}

ZkString ZkCutsceneMessage_getName(ZkCutsceneMessage const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneMessage_getName");
		return nullptr;
	}

	return slf->name.c_str();
}
