// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "Stream.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/DaedalusScript.hh>
using ZkDaedalusScript = zenkit::DaedalusScript;
using ZkDaedalusSymbol = zenkit::DaedalusSymbol;
using ZkDaedalusInstance = zenkit::DaedalusInstance;
#else
typedef struct ZkInternal_DaedalusScript ZkDaedalusScript;
typedef struct ZkInternal_DaedalusSymbol ZkDaedalusSymbol;
typedef struct ZkInternal_DaedalusInstance ZkDaedalusInstance;
#endif

typedef enum {
	ZkDaedalusOpcode_ADD = 0,
	ZkDaedalusOpcode_SUB = 1,
	ZkDaedalusOpcode_MUL = 2,
	ZkDaedalusOpcode_DIV = 3,
	ZkDaedalusOpcode_MOD = 4,
	ZkDaedalusOpcode_OR = 5,
	ZkDaedalusOpcode_ANDB = 6,
	ZkDaedalusOpcode_LT = 7,
	ZkDaedalusOpcode_GT = 8,
	ZkDaedalusOpcode_MOVI = 9,
	ZkDaedalusOpcode_ORR = 11,
	ZkDaedalusOpcode_AND = 12,
	ZkDaedalusOpcode_LSL = 13,
	ZkDaedalusOpcode_LSR = 14,
	ZkDaedalusOpcode_LTE = 15,
	ZkDaedalusOpcode_EQ = 16,
	ZkDaedalusOpcode_NEQ = 17,
	ZkDaedalusOpcode_GTE = 18,
	ZkDaedalusOpcode_ADDMOVI = 19,
	ZkDaedalusOpcode_SUBMOVI = 20,
	ZkDaedalusOpcode_MULMOVI = 21,
	ZkDaedalusOpcode_DIVMOVI = 22,
	ZkDaedalusOpcode_PLUS = 30,
	ZkDaedalusOpcode_NEGATE = 31,
	ZkDaedalusOpcode_NOT = 32,
	ZkDaedalusOpcode_CMPL = 33,
	ZkDaedalusOpcode_NOP = 45,
	ZkDaedalusOpcode_RSR = 60,
	ZkDaedalusOpcode_BL = 61,
	ZkDaedalusOpcode_BE = 62,
	ZkDaedalusOpcode_PUSHI = 64,
	ZkDaedalusOpcode_PUSHV = 65,
	ZkDaedalusOpcode_PUSHVI = 67,
	ZkDaedalusOpcode_MOVS = 70,
	ZkDaedalusOpcode_MOVSS = 71,
	ZkDaedalusOpcode_MOVVF = 72,
	ZkDaedalusOpcode_MOVF = 73,
	ZkDaedalusOpcode_MOVVI = 74,
	ZkDaedalusOpcode_B = 75,
	ZkDaedalusOpcode_BZ = 76,
	ZkDaedalusOpcode_GMOVI = 80,
	ZkDaedalusOpcode_PUSHVV = 245,
} ZkDaedalusOpcode;

typedef enum {
	ZkDaedalusDataType_VOID = 0U,
	ZkDaedalusDataType_FLOAT = 1U,
	ZkDaedalusDataType_INT = 2U,
	ZkDaedalusDataType_STRING = 3U,
	ZkDaedalusDataType_CLASS = 4U,
	ZkDaedalusDataType_FUNCTION = 5U,
	ZkDaedalusDataType_PROTOTYPE = 6U,
	ZkDaedalusDataType_INSTANCE = 7U,
} ZkDaedalusDataType;

typedef enum {
	ZkDaedalusInstanceType_GuildValues = 0,
	ZkDaedalusInstanceType_Npc = 1,
	ZkDaedalusInstanceType_Mission = 2,
	ZkDaedalusInstanceType_Item = 3,
	ZkDaedalusInstanceType_Focus = 4,
	ZkDaedalusInstanceType_Info = 5,
	ZkDaedalusInstanceType_ItemReact = 6,
	ZkDaedalusInstanceType_Spell = 7,
	ZkDaedalusInstanceType_Svm = 8,
	ZkDaedalusInstanceType_Menu = 9,
	ZkDaedalusInstanceType_MenuItem = 10,
	ZkDaedalusInstanceType_Camera = 11,
	ZkDaedalusInstanceType_MusicSystem = 12,
	ZkDaedalusInstanceType_MusicTheme = 13,
	ZkDaedalusInstanceType_MusicJingle = 14,
	ZkDaedalusInstanceType_ParticleEffect = 15,
	ZkDaedalusInstanceType_EffectBase = 16,
	ZkDaedalusInstanceType_ParticleEffectEmitKey = 17,
	ZkDaedalusInstanceType_FightAi = 18,
	ZkDaedalusInstanceType_SoundEffect = 19,
	ZkDaedalusInstanceType_SoundSystem = 20,
	ZkDaedalusInstanceType_Invalid = 20,
} ZkDaedalusInstanceType;

typedef struct {
	ZkDaedalusOpcode op;
	int32_t size;

	union {
		uint32_t opAddress;
		uint32_t opSymbol;
		int32_t opImmediate;
	};

	int32_t opIndex;
} ZkDaedalusInstruction;

typedef ZkBool (*ZkDaedalusSymbolEnumerator)(void* ctx, ZkDaedalusSymbol* symbol);

CZK_API ZkDaedalusScript* ZkDaedalusScript_load(ZkRead* buf);
CZK_API ZkDaedalusScript* ZkDaedalusScript_loadPath(ZkString path);
CZK_API ZkDaedalusScript* ZkDaedalusScript_loadVfs(ZkVfs* vfs, ZkString name);
CZK_API void ZkDaedalusScript_del(ZkDaedalusScript* slf);

CZK_API uint32_t ZkDaedalusScript_getSymbolCount(ZkDaedalusScript* slf);
CZK_API void ZkDaedalusScript_enumerateSymbols(ZkDaedalusScript* slf, ZkDaedalusSymbolEnumerator cb, void* ctx);
CZK_API void ZkDaedalusScript_enumerateInstanceSymbols(ZkDaedalusScript* slf, ZkString className, ZkDaedalusSymbolEnumerator cb, void* ctx);
CZK_API ZkDaedalusInstruction ZkDaedalusScript_getInstruction(ZkDaedalusScript* slf, ZkSize address);

CZK_API ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByIndex(ZkDaedalusScript* slf, uint32_t i);
CZK_API ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByAddress(ZkDaedalusScript* slf, ZkSize i);
CZK_API ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByName(ZkDaedalusScript* slf, ZkString i);

CZK_API ZkString ZkDaedalusSymbol_getString(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context);
CZK_API float ZkDaedalusSymbol_getFloat(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context);
CZK_API int32_t ZkDaedalusSymbol_getInt(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context);
CZK_API void ZkDaedalusSymbol_setString(ZkDaedalusSymbol* slf, ZkString value, uint16_t index, ZkDaedalusInstance* context);
CZK_API void ZkDaedalusSymbol_setFloat(ZkDaedalusSymbol* slf, float value, uint16_t index, ZkDaedalusInstance* context);
CZK_API void ZkDaedalusSymbol_setInt(ZkDaedalusSymbol* slf, int32_t value, uint16_t index, ZkDaedalusInstance* context);

CZK_API ZkBool ZkDaedalusSymbol_getIsConst(ZkDaedalusSymbol const* slf);
CZK_API ZkBool ZkDaedalusSymbol_getIsMember(ZkDaedalusSymbol const* slf);
CZK_API ZkBool ZkDaedalusSymbol_getIsExternal(ZkDaedalusSymbol const* slf);
CZK_API ZkBool ZkDaedalusSymbol_getIsMerged(ZkDaedalusSymbol const* slf);
CZK_API ZkBool ZkDaedalusSymbol_getIsGenerated(ZkDaedalusSymbol const* slf);
CZK_API ZkBool ZkDaedalusSymbol_getHasReturn(ZkDaedalusSymbol const* slf);

CZK_API ZkString ZkDaedalusSymbol_getName(ZkDaedalusSymbol const* slf);
CZK_API int32_t ZkDaedalusSymbol_getAddress(ZkDaedalusSymbol const* slf);
CZK_API int32_t ZkDaedalusSymbol_getParent(ZkDaedalusSymbol const* slf);
CZK_API int32_t ZkDaedalusSymbol_getSize(ZkDaedalusSymbol const* slf);
CZK_API ZkDaedalusDataType ZkDaedalusSymbol_getType(ZkDaedalusSymbol const* slf);
CZK_API uint32_t ZkDaedalusSymbol_getIndex(ZkDaedalusSymbol const* slf);
CZK_API ZkDaedalusDataType ZkDaedalusSymbol_getReturnType(ZkDaedalusSymbol const* slf);

CZK_API ZkDaedalusInstanceType ZkDaedalusInstance_getType(ZkDaedalusInstance const* slf);
CZK_API uint32_t ZkDaedalusInstance_getIndex(ZkDaedalusInstance const* slf);
