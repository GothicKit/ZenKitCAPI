// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Archive.h"
#include "Library.h"
#include "Stream.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/CutsceneLibrary.hh>
using ZkCutsceneLibrary = zenkit::CutsceneLibrary;
using ZkCutsceneBlock = zenkit::CutsceneBlock;
using ZkCutsceneMessage = zenkit::CutsceneMessage;
#else
typedef struct ZkInternal_CutsceneLibrary ZkCutsceneLibrary;
typedef struct ZkInternal_CutsceneBlock ZkCutsceneBlock;
typedef struct ZkInternal_CutsceneMessage ZkCutsceneMessage;
#endif

typedef ZkBool (*ZkCutsceneBlockEnumerator)(void* ctx, ZkCutsceneBlock const* block);

ZKC_API ZkCutsceneLibrary* ZkCutsceneLibrary_load(ZkRead* buf);
ZKC_API ZkCutsceneLibrary* ZkCutsceneLibrary_loadPath(ZkString path);
ZKC_API ZkCutsceneLibrary* ZkCutsceneLibrary_loadVfs(ZkVfs const* vfs, ZkString string);

ZKC_API void ZkCutsceneLibrary_save(ZkCutsceneLibrary* slf, ZkWrite* buf, ZkArchiveFormat fmt);
ZKC_API void ZkCutsceneLibrary_savePath(ZkCutsceneLibrary* slf, ZkString path, ZkArchiveFormat fmt);

ZKC_API void ZkCutsceneLibrary_del(ZkCutsceneLibrary* slf);

ZKC_API ZkSize ZkCutsceneLibrary_getBlockCount(ZkCutsceneLibrary const* slf);
ZKC_API ZkCutsceneBlock const* ZkCutsceneLibrary_getBlock(ZkCutsceneLibrary const* slf, ZkString name);
ZKC_API ZkCutsceneBlock const* ZkCutsceneLibrary_getBlockByIndex(ZkCutsceneLibrary const* slf, ZkSize i);
ZKC_API void ZkCutsceneLibrary_enumerateBlocks(ZkCutsceneLibrary const* slf, ZkCutsceneBlockEnumerator cb, void* ctx);

ZKC_API ZkString ZkCutsceneBlock_getName(ZkCutsceneBlock const* slf);
ZKC_API ZkCutsceneMessage const* ZkCutsceneBlock_getMessage(ZkCutsceneBlock const* slf);

ZKC_API uint32_t ZkCutsceneMessage_getType(ZkCutsceneMessage const* slf);
ZKC_API ZkString ZkCutsceneMessage_getText(ZkCutsceneMessage const* slf);
ZKC_API ZkString ZkCutsceneMessage_getName(ZkCutsceneMessage const* slf);
