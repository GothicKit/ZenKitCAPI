// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "DaedalusScript.h"
#include "Library.h"
#include "Stream.h"
#include "Vfs.h"

typedef struct ZkInternal_DaedalusVm ZkDaedalusVm;
typedef void (*ZkDaedalusVmExternalCallback)(void* ctx, ZkDaedalusVm* vm);
typedef void (*ZkDaedalusVmExternalDefaultCallback)(void* ctx, ZkDaedalusVm* vm, ZkDaedalusSymbol* sym);

ZKC_API ZkDaedalusVm* ZkDaedalusVm_load(ZkRead* buf, uint8_t flags);
ZKC_API ZkDaedalusVm* ZkDaedalusVm_loadPath(ZkString path, uint8_t flags);
ZKC_API ZkDaedalusVm* ZkDaedalusVm_loadVfs(ZkVfs* vfs, ZkString name, uint8_t flags);
ZKC_API void ZkDaedalusVm_del(ZkDaedalusVm* slf);

ZKC_API void ZkDaedalusVm_pushInt(ZkDaedalusVm* slf, int32_t value);
ZKC_API void ZkDaedalusVm_pushFloat(ZkDaedalusVm* slf, float value);
ZKC_API void ZkDaedalusVm_pushString(ZkDaedalusVm* slf, ZkString value);
ZKC_API void ZkDaedalusVm_pushInstance(ZkDaedalusVm* slf, ZkDaedalusInstance* value);

ZKC_API int32_t ZkDaedalusVm_popInt(ZkDaedalusVm* slf);
ZKC_API float ZkDaedalusVm_popFloat(ZkDaedalusVm* slf);
ZKC_API ZkString ZkDaedalusVm_popString(ZkDaedalusVm* slf);
ZKC_API ZkDaedalusInstance* ZkDaedalusVm_popInstance(ZkDaedalusVm* slf);

ZKC_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalSelf(ZkDaedalusVm* slf);
ZKC_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalOther(ZkDaedalusVm* slf);
ZKC_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalVictim(ZkDaedalusVm* slf);
ZKC_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalHero(ZkDaedalusVm* slf);
ZKC_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalItem(ZkDaedalusVm* slf);

ZKC_API void ZkDaedalusVm_setGlobalSelf(ZkDaedalusVm* slf, ZkDaedalusInstance* value);
ZKC_API void ZkDaedalusVm_setGlobalOther(ZkDaedalusVm* slf, ZkDaedalusInstance* value);
ZKC_API void ZkDaedalusVm_setGlobalVictim(ZkDaedalusVm* slf, ZkDaedalusInstance* value);
ZKC_API void ZkDaedalusVm_setGlobalHero(ZkDaedalusVm* slf, ZkDaedalusInstance* value);
ZKC_API void ZkDaedalusVm_setGlobalItem(ZkDaedalusVm* slf, ZkDaedalusInstance* value);

ZKC_API void ZkDaedalusVm_callFunction(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym);
ZKC_API ZkDaedalusInstance*
ZkDaedalusVm_allocInstance(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym, ZkDaedalusInstanceType type);
ZKC_API ZkDaedalusInstance*
ZkDaedalusVm_initInstance(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym, ZkDaedalusInstanceType type);
ZKC_API void ZkDaedalusVm_initInstanceDirect(ZkDaedalusVm* slf, ZkDaedalusInstance* sym);
ZKC_API void
ZkDaedalusVm_registerExternal(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym, ZkDaedalusVmExternalCallback cb, void* ctx);
ZKC_API void
ZkDaedalusVm_overrideFunction(ZkDaedalusVm* slf, char const* name, ZkDaedalusVmExternalCallback cb, void* ctx);
ZKC_API void
ZkDaedalusVm_overrideFunctionNaked(ZkDaedalusVm* slf, char const* name, ZkDaedalusVmExternalCallback cb, void* ctx);
ZKC_API void ZkDaedalusVm_registerExternalDefault(ZkDaedalusVm* slf, ZkDaedalusVmExternalDefaultCallback cb, void* ctx);
ZKC_API void ZkDaedalusVm_printStackTrace(ZkDaedalusVm* slf);
