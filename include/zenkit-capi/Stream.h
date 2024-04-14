// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"

#include <stdio.h>

#ifdef __cplusplus
	#include <zenkit/Stream.hh>
using ZkRead = zenkit::Read;
using ZkWrite = zenkit::Write;
#else
typedef struct ZkInternal_Read ZkRead;
typedef struct ZkInternal_Write ZkWrite;
#endif

typedef enum {
	ZK_BEG = 0x00,
	ZKC_UR = 0x01,
	ZK_END = 0x02,
} ZkWhence;

typedef struct {
	ZkSize (*read)(void* ctx, void* buf, ZkSize len);
	ZkSize (*seek)(void* ctx, ZkOffset off, ZkWhence whence);
	ZkSize (*tell)(void const* ctx);
	ZkBool (*eof)(void const* ctx);
	void (*del)(void const* ctx);
} ZkReadExt;

ZKC_API ZkRead* ZkRead_newFile(FILE* stream);
ZKC_API ZkRead* ZkRead_newMem(ZkByte const* bytes, ZkSize length);
ZKC_API ZkRead* ZkRead_newPath(ZkString path);
ZKC_API ZkRead* ZkRead_newExt(ZkReadExt ext, void* ctx);
ZKC_API void ZkRead_del(ZkRead* slf);

ZKC_API ZkSize ZkRead_getSize(ZkRead* slf);
ZKC_API ZkSize ZkRead_getBytes(ZkRead* slf, void* buf, ZkSize length);

typedef struct {
	ZkSize (*write)(void* ctx, void const* buf, ZkSize len);
	ZkSize (*seek)(void* ctx, ZkOffset off, ZkWhence whence);
	ZkSize (*tell)(void const* ctx);
	void (*del)(void const* ctx);
} ZkWriteExt;

ZKC_API ZkWrite* ZkWrite_newFile(FILE* stream);
ZKC_API ZkWrite* ZkWrite_newMem(ZkByte* bytes, ZkSize length);
ZKC_API ZkWrite* ZkWrite_newPath(ZkString path);
ZKC_API ZkWrite* ZkWrite_newExt(ZkWriteExt ext, void* ctx);
ZKC_API void ZkWrite_del(ZkWrite* slf);
