// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/CutsceneLibrary.h"

#include "Internal.hh"

ZKC_LOADER(ZkCutsceneLibrary);
ZKC_PATH_LOADER(ZkCutsceneLibrary);
ZKC_VFS_LOADER(ZkCutsceneLibrary);
ZKC_DELETER(ZkCutsceneLibrary);

ZkCutsceneBlock const* ZkCutsceneLibrary_getBlock(ZkCutsceneLibrary const* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->block_by_name(name);
}

void ZkCutsceneLibrary_enumerateBlocks(ZkCutsceneLibrary const* slf, ZkCutsceneBlockEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& block : slf->blocks) {
		if (cb(ctx, &block)) break;
	}
}

ZkString ZkCutsceneBlock_getName(ZkCutsceneBlock const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkCutsceneMessage const* ZkCutsceneBlock_getMessage(ZkCutsceneBlock const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->message;
}

uint32_t ZkCutsceneMessage_getType(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->type;
}

ZkString ZkCutsceneMessage_getText(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->text.c_str();
}

ZkString ZkCutsceneMessage_getName(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}
