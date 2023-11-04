// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "Stream.h"

#include <time.h>

#ifdef __cplusplus
	#include <zenkit/Vfs.hh>
using ZkVfs = zenkit::Vfs;
using ZkVfsNode = zenkit::VfsNode;
#else
typedef struct ZkInternal_Vfs ZkVfs;
typedef struct ZkInternal_VfsNode ZkVfsNode;
#endif

typedef enum {
	ZK_OVERWRITE_NONE = 0,
	ZK_OVERWRITE_ALL = 1,
	ZK_OVERWRITE_NEWER = 2,
	ZK_OVERWRITE_OLDER = 3,
} ZkVfsOverwriteBehavior;

typedef ZkBool (*ZkVfsNodeEnumerator)(void* ctx, ZkVfsNode const* node);


CZK_API ZkVfs* ZkVfs_new(void);
CZK_API void ZkVfs_del(ZkVfs* slf);

CZK_API ZkVfsNode const* ZkVfs_getRoot(ZkVfs const* slf);

CZK_API ZkVfsNode* ZkVfs_mkdir(ZkVfs* slf, ZkString path);
CZK_API ZkBool ZkVfs_remove(ZkVfs* slf, ZkString path);

CZK_API void ZkVfs_mount(ZkVfs* slf, ZkVfsNode* node, ZkString parent, ZkVfsOverwriteBehavior overwrite);
CZK_API void ZkVfs_mountHost(ZkVfs* slf, ZkString path, ZkString parent, ZkVfsOverwriteBehavior overwrite);
CZK_API void ZkVfs_mountDisk(ZkVfs* slf, ZkRead* buf, ZkVfsOverwriteBehavior overwrite);
CZK_API void ZkVfs_mountDiskHost(ZkVfs* slf, ZkString path, ZkVfsOverwriteBehavior overwrite);

CZK_API ZkVfsNode* ZkVfs_resolvePath(ZkVfs* slf, ZkString path);
CZK_API ZkVfsNode* ZkVfs_findNode(ZkVfs* slf, ZkString name);

CZK_API ZkVfsNode* ZkVfsNode_newFile(ZkString name, ZkByte const* buf, ZkSize size, time_t ts);
CZK_API ZkVfsNode* ZkVfsNode_newDir(ZkString name, time_t ts);
CZK_API void ZkVfsNode_del(ZkVfsNode* slf);

CZK_API ZkBool ZkVfsNode_isFile(ZkVfsNode const* slf);
CZK_API ZkBool ZkVfsNode_isDir(ZkVfsNode const* slf);
CZK_API time_t ZkVfsNode_getTime(ZkVfsNode const* slf);
CZK_API ZkString ZkVfsNode_getName(ZkVfsNode const* slf);
CZK_API ZkVfsNode* ZkVfsNode_getChild(ZkVfsNode* slf, ZkString name);

CZK_API ZkVfsNode* ZkVfsNode_create(ZkVfsNode* slf, ZkVfsNode* node);
CZK_API ZkBool ZkVfsNode_remove(ZkVfsNode* slf, ZkString name);
CZK_API ZkRead* ZkVfsNode_open(ZkVfsNode const* slf);

CZK_API void ZkVfsNode_enumerateChildren(ZkVfsNode const* slf, ZkVfsNodeEnumerator callback, void* ctx);
