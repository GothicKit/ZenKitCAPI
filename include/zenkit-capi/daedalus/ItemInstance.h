// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "NpcInstance.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkItemInstance = ZkSharedHandle<zenkit::IItem>;
#else
typedef struct ZkInternal_ItemInstance ZkItemInstance;
#endif

typedef enum {
	ZkItemInstanceFlag_DAGGER = 1U << 13U,
	ZkItemInstanceFlag_SWORD = 1U << 14U,
	ZkItemInstanceFlag_AXE = 1U << 15U,
	ZkItemInstanceFlag_TWO_HANDED_SWORD = 1U << 16U,
	ZkItemInstanceFlag_TWO_HANDED_AXE = 1U << 17U,
	ZkItemInstanceFlag_BOW = 1U << 19U,
	ZkItemInstanceFlag_CROSSBOW = 1U << 20U,
	ZkItemInstanceFlag_AMULET = 1U << 22U,
	ZkItemInstanceFlag_RING = 1U << 11U,
	ZkItemInstanceFlag_BELT = 1U << 24U,
	ZkItemInstanceFlag_MISSION = 1U << 12U,
} ZkItemInstanceFlag;

typedef enum {
	ZkItemInstanceConditionSlot_Slot0 = 0,
	ZkItemInstanceConditionSlot_Slot1 = 1,
	ZkItemInstanceConditionSlot_Slot2 = 2,
} ZkItemInstanceConditionSlot;

typedef enum {
	ZkItemInstanceState_Slot0 = 0,
	ZkItemInstanceState_Slot1 = 1,
	ZkItemInstanceState_Slot2 = 2,
	ZkItemInstanceState_Slot3 = 3,
} ZkItemInstanceStateSlot;

typedef enum {
	ZkItemInstanceText_Slot0 = 0,
	ZkItemInstanceText_Slot1 = 1,
	ZkItemInstanceText_Slot2 = 2,
	ZkItemInstanceText_Slot3 = 3,
	ZkItemInstanceText_Slot4 = 4,
	ZkItemInstanceText_Slot5 = 5,
} ZkItemInstanceTextSlot;

ZKC_API int32_t ZkItemInstance_getId(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setId(ZkItemInstance* slf, int32_t id);
ZKC_API ZkString ZkItemInstance_getName(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setName(ZkItemInstance* slf, ZkString name);
ZKC_API ZkString ZkItemInstance_getNameId(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setNameId(ZkItemInstance* slf, ZkString nameId);
ZKC_API int32_t ZkItemInstance_getHp(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setHp(ZkItemInstance* slf, int32_t hp);
ZKC_API int32_t ZkItemInstance_getHpMax(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setHpMax(ZkItemInstance* slf, int32_t hpMax);
ZKC_API int32_t ZkItemInstance_getMainFlag(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setMainFlag(ZkItemInstance* slf, int32_t mainFlag);
ZKC_API int32_t ZkItemInstance_getFlags(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setFlags(ZkItemInstance* slf, int32_t flags);
ZKC_API int32_t ZkItemInstance_getWeight(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setWeight(ZkItemInstance* slf, int32_t weight);
ZKC_API int32_t ZkItemInstance_getValue(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setValue(ZkItemInstance* slf, int32_t value);
ZKC_API int32_t ZkItemInstance_getDamageType(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setDamageType(ZkItemInstance* slf, int32_t damageType);
ZKC_API int32_t ZkItemInstance_getDamageTotal(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setDamageTotal(ZkItemInstance* slf, int32_t damageTotal);
ZKC_API int32_t ZkItemInstance_getWear(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setWear(ZkItemInstance* slf, int32_t wear);
ZKC_API int32_t ZkItemInstance_getNutrition(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setNutrition(ZkItemInstance* slf, int32_t nutrition);
ZKC_API int32_t ZkItemInstance_getMagic(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setMagic(ZkItemInstance* slf, int32_t magic);
ZKC_API int32_t ZkItemInstance_getOnEquip(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setOnEquip(ZkItemInstance* slf, int32_t onEquip);
ZKC_API int32_t ZkItemInstance_getOnUnequip(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setOnUnequip(ZkItemInstance* slf, int32_t onUnequip);
ZKC_API int32_t ZkItemInstance_getOwner(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setOwner(ZkItemInstance* slf, int32_t owner);
ZKC_API int32_t ZkItemInstance_getOwnerGuild(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setOwnerGuild(ZkItemInstance* slf, int32_t ownerGuild);
ZKC_API int32_t ZkItemInstance_getDisguiseGuild(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setDisguiseGuild(ZkItemInstance* slf, int32_t disguiseGuild);
ZKC_API ZkString ZkItemInstance_getVisual(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setVisual(ZkItemInstance* slf, ZkString visual);
ZKC_API ZkString ZkItemInstance_getVisualChange(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setVisualChange(ZkItemInstance* slf, ZkString visualChange);
ZKC_API ZkString ZkItemInstance_getEffect(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setEffect(ZkItemInstance* slf, ZkString effect);
ZKC_API int32_t ZkItemInstance_getVisualSkin(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setVisualSkin(ZkItemInstance* slf, int32_t visualSkin);
ZKC_API ZkString ZkItemInstance_getSchemeName(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setSchemeName(ZkItemInstance* slf, ZkString schemeName);
ZKC_API int32_t ZkItemInstance_getMaterial(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setMaterial(ZkItemInstance* slf, int32_t material);
ZKC_API int32_t ZkItemInstance_getMunition(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setMunition(ZkItemInstance* slf, int32_t munition);
ZKC_API int32_t ZkItemInstance_getSpell(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setSpell(ZkItemInstance* slf, int32_t spell);
ZKC_API int32_t ZkItemInstance_getRange(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setRange(ZkItemInstance* slf, int32_t range);
ZKC_API int32_t ZkItemInstance_getMagCircle(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setMagCircle(ZkItemInstance* slf, int32_t magCircle);
ZKC_API ZkString ZkItemInstance_getDescription(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setDescription(ZkItemInstance* slf, ZkString description);
ZKC_API int32_t ZkItemInstance_getInvZBias(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setInvZBias(ZkItemInstance* slf, int32_t invZBias);
ZKC_API int32_t ZkItemInstance_getInvRotX(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setInvRotX(ZkItemInstance* slf, int32_t invRotX);
ZKC_API int32_t ZkItemInstance_getInvRotY(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setInvRotY(ZkItemInstance* slf, int32_t invRotY);
ZKC_API int32_t ZkItemInstance_getInvRotZ(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setInvRotZ(ZkItemInstance* slf, int32_t invRotZ);
ZKC_API int32_t ZkItemInstance_getInvAnimate(ZkItemInstance const* slf);
ZKC_API void ZkItemInstance_setInvAnimate(ZkItemInstance* slf, int32_t invAnimate);

ZKC_API int32_t ZkItemInstance_getDamage(ZkItemInstance const* slf, ZkDamageType type);
ZKC_API void ZkItemInstance_setDamage(ZkItemInstance* slf, ZkDamageType type, int32_t damage);
ZKC_API int32_t ZkItemInstance_getProtection(ZkItemInstance const* slf, ZkDamageType type);
ZKC_API void ZkItemInstance_setProtection(ZkItemInstance* slf, ZkDamageType type, int32_t protection);
ZKC_API int32_t ZkItemInstance_getCondAtr(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot);
ZKC_API void ZkItemInstance_setCondAtr(ZkItemInstance* slf, ZkItemInstanceConditionSlot slot, int32_t condAtr);
ZKC_API int32_t ZkItemInstance_getCondValue(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot);
ZKC_API void ZkItemInstance_setCondValue(ZkItemInstance* slf, ZkItemInstanceConditionSlot slot, int32_t condValue);
ZKC_API int32_t ZkItemInstance_getChangeAtr(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot);
ZKC_API void ZkItemInstance_setChangeAtr(ZkItemInstance* slf, ZkItemInstanceConditionSlot slot, int32_t changeAtr);
ZKC_API int32_t ZkItemInstance_getChangeValue(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot);
ZKC_API void ZkItemInstance_setChangeValue(ZkItemInstance* slf, ZkItemInstanceConditionSlot slot, int32_t changeValue);
ZKC_API int32_t ZkItemInstance_getOnState(ZkItemInstance const* slf, ZkItemInstanceStateSlot slot);
ZKC_API void ZkItemInstance_setOnState(ZkItemInstance* slf, ZkItemInstanceStateSlot slot, int32_t onState);
ZKC_API ZkString ZkItemInstance_getText(ZkItemInstance const* slf, ZkItemInstanceTextSlot slot);
ZKC_API void ZkItemInstance_setText(ZkItemInstance* slf, ZkItemInstanceTextSlot slot, ZkString text);
ZKC_API int32_t ZkItemInstance_getCount(ZkItemInstance const* slf, ZkItemInstanceTextSlot slot);
ZKC_API void ZkItemInstance_setCount(ZkItemInstance* slf, ZkItemInstanceTextSlot slot, int32_t count);
