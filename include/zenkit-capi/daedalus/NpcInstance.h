// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkNpcInstance = ZkSharedHandle<zenkit::INpc>;
#else
typedef struct ZkInternal_NpcInstance ZkNpcInstance;
#endif

typedef enum {
	ZkDamageType_BARRIER = 0,
	ZkDamageType_BLUNT = 1,
	ZkDamageType_EDGE = 2,
	ZkDamageType_FIRE = 3,
	ZkDamageType_FLY = 4,
	ZkDamageType_MAGIC = 5,
	ZkDamageType_POINT = 6,
	ZkDamageType_FALL = 7,
} ZkDamageType;

typedef enum {
	ZkNpcAttribute_HITPOINTS = 0,
	ZkNpcAttribute_HITPOINTS_MAX = 1,
	ZkNpcAttribute_MANA = 2,
	ZkNpcAttribute_MANA_MAX = 3,
	ZkNpcAttribute_STRENGTH = 4,
	ZkNpcAttribute_DEXTERITY = 5,
	ZkNpcAttribute_REGENERATE_HP = 6,
	ZkNpcAttribute_REGENERATE_MANA = 7,
} ZkNpcInstanceAttribute;

typedef enum {
	ZkNpcTalent_UNKNOWN = 0,
	ZkNpcTalent_ONE_HANDED = 1,
	ZkNpcTalent_TWO_HANDED = 2,
	ZkNpcTalent_BOW = 3,
	ZkNpcTalent_CROSSBOW = 4,
} ZkNpcInstanceTalent;

typedef enum {
	ZkNpcType_G1_AMBIENT = 0,
	ZkNpcType_G1_MAIN = 1,
	ZkNpcType_G1_GUARD = 2,
	ZkNpcType_G1_FRIEND = 3,
	ZkNpcType_G1_MINE_AMBIENT = 4,
	ZkNpcType_G1_MINE_GUARD = 5,
	ZkNpcType_G1_OW_AMBIENT = 6,
	ZkNpcType_G1_OW_GUARD = 7,
	ZkNpcType_G1_ROGUE = 8,
	ZkNpcType_G2_AMBIENT = 0,
	ZkNpcType_G2_MAIN = 1,
	ZkNpcType_G2_FRIEND = 2,
	ZkNpcType_G2_OC_AMBIENT = 3,
	ZkNpcType_G2_OC_MAIN = 4,
	ZkNpcType_G2_BL_AMBIENT = 5,
	ZkNpcType_G2_TAL_AMBIENT = 6,
	ZkNpcType_G2_BL_MAIN = 7,
} ZkNpcInstanceType;

typedef enum {
	ZkNpcFlag_NONE = 0U,
	ZkNpcFlag_FRIENDS = 1U << 0U,
	ZkNpcFlag_IMMORTAL = 1U << 1U,
	ZkNpcFlag_GHOST = 1U << 2U,
	ZkNpcFlag_PROTECTED = 1U << 3U,
} ZkNpcInstanceFlag;

typedef enum {
	ZkNpcNameSlot_0 = 0,
	ZkNpcNameSlot_1 = 1,
	ZkNpcNameSlot_2 = 2,
	ZkNpcNameSlot_3 = 3,
	ZkNpcNameSlot_4 = 4,
} ZkNpcInstanceNameSlot;

typedef enum {
	ZkNpcMissionSlot_0 = 0,
	ZkNpcMissionSlot_1 = 1,
	ZkNpcMissionSlot_2 = 2,
	ZkNpcMissionSlot_3 = 3,
	ZkNpcMissionSlot_4 = 4,
} ZkNpcInstanceMissionSlot;

ZKC_API int32_t ZkNpcInstance_getId(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setId(ZkNpcInstance* slf, int32_t id);
ZKC_API ZkString ZkNpcInstance_getSlot(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setSlot(ZkNpcInstance* slf, ZkString slot);
ZKC_API ZkString ZkNpcInstance_getEffect(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setEffect(ZkNpcInstance* slf, ZkString effect);
ZKC_API ZkNpcInstanceType ZkNpcInstance_getType(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setType(ZkNpcInstance* slf, ZkNpcInstanceType type);
ZKC_API uint32_t ZkNpcInstance_getFlags(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setFlags(ZkNpcInstance* slf, uint32_t flags);
ZKC_API int32_t ZkNpcInstance_getDamageType(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setDamageType(ZkNpcInstance* slf, int32_t damageType);
ZKC_API int32_t ZkNpcInstance_getGuild(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setGuild(ZkNpcInstance* slf, int32_t guild);
ZKC_API int32_t ZkNpcInstance_getLevel(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setLevel(ZkNpcInstance* slf, int32_t level);
ZKC_API int32_t ZkNpcInstance_getFightTactic(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setFightTactic(ZkNpcInstance* slf, int32_t fightTactic);
ZKC_API int32_t ZkNpcInstance_getWeapon(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setWeapon(ZkNpcInstance* slf, int32_t weapon);
ZKC_API int32_t ZkNpcInstance_getVoice(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setVoice(ZkNpcInstance* slf, int32_t voice);
ZKC_API int32_t ZkNpcInstance_getVoicePitch(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setVoicePitch(ZkNpcInstance* slf, int32_t voicePitch);
ZKC_API int32_t ZkNpcInstance_getBodyMass(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setBodyMass(ZkNpcInstance* slf, int32_t bodyMass);
ZKC_API int32_t ZkNpcInstance_getDailyRoutine(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setDailyRoutine(ZkNpcInstance* slf, int32_t dailyRoutine);
ZKC_API int32_t ZkNpcInstance_getStartAiState(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setStartAiState(ZkNpcInstance* slf, int32_t startAiState);
ZKC_API ZkString ZkNpcInstance_getSpawnPoint(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setSpawnPoint(ZkNpcInstance* slf, ZkString spawnPoint);
ZKC_API int32_t ZkNpcInstance_getSpawnDelay(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setSpawnDelay(ZkNpcInstance* slf, int32_t spawnDelay);
ZKC_API int32_t ZkNpcInstance_getSenses(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setSenses(ZkNpcInstance* slf, int32_t senses);
ZKC_API int32_t ZkNpcInstance_getSensesRange(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setSensesRange(ZkNpcInstance* slf, int32_t sensesRange);
ZKC_API ZkString ZkNpcInstance_getWp(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setWp(ZkNpcInstance* slf, ZkString wp);
ZKC_API int32_t ZkNpcInstance_getExp(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setExp(ZkNpcInstance* slf, int32_t exp);
ZKC_API int32_t ZkNpcInstance_getExpNext(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setExpNext(ZkNpcInstance* slf, int32_t expNext);
ZKC_API int32_t ZkNpcInstance_getLp(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setLp(ZkNpcInstance* slf, int32_t lp);
ZKC_API int32_t ZkNpcInstance_getBodyStateInterruptableOverride(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setBodyStateInterruptableOverride(ZkNpcInstance* slf,
                                                             int32_t bodyStateInterruptableOverride);
ZKC_API int32_t ZkNpcInstance_getNoFocus(ZkNpcInstance const* slf);
ZKC_API void ZkNpcInstance_setNoFocus(ZkNpcInstance* slf, int32_t noFocus);
ZKC_API ZkString ZkNpcInstance_getName(ZkNpcInstance const* slf, ZkNpcInstanceNameSlot slot);
ZKC_API void ZkNpcInstance_setName(ZkNpcInstance* slf, ZkNpcInstanceNameSlot slot, ZkString name);
ZKC_API int32_t ZkNpcInstance_getMission(ZkNpcInstance const* slf, ZkNpcInstanceMissionSlot slot);
ZKC_API void ZkNpcInstance_setMission(ZkNpcInstance* slf, ZkNpcInstanceMissionSlot slot, int32_t mission);
ZKC_API int32_t ZkNpcInstance_getAttribute(ZkNpcInstance const* slf, ZkNpcInstanceAttribute attribute);
ZKC_API void ZkNpcInstance_setAttribute(ZkNpcInstance* slf, ZkNpcInstanceAttribute attribute, int32_t value);
ZKC_API int32_t ZkNpcInstance_getHitChance(ZkNpcInstance const* slf, ZkNpcInstanceTalent talent);
ZKC_API void ZkNpcInstance_setHitChance(ZkNpcInstance* slf, ZkNpcInstanceTalent talent, int32_t hitChance);
ZKC_API int32_t ZkNpcInstance_getProtection(ZkNpcInstance const* slf, ZkDamageType type);
ZKC_API void ZkNpcInstance_setProtection(ZkNpcInstance* slf, ZkDamageType type, int32_t protection);
ZKC_API int32_t ZkNpcInstance_getDamage(ZkNpcInstance const* slf, ZkDamageType type);
ZKC_API void ZkNpcInstance_setDamage(ZkNpcInstance* slf, ZkDamageType type, int32_t damage);
ZKC_API int32_t ZkNpcInstance_getAiVar(ZkNpcInstance const* slf, ZkSize i);
ZKC_API void ZkNpcInstance_setAiVar(ZkNpcInstance* slf, ZkSize i, int32_t aiVar);
