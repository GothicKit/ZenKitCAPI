#include "zenkit-capi/daedalus/FocusInstance.h"
#include "../Internal.hh"

float ZkFocusInstance_getNpcLongrange(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc_longrange;
}

void ZkFocusInstance_setNpcLongrange(ZkFocusInstance* slf, float npcLongrange) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc_longrange = npcLongrange;
}

float ZkFocusInstance_getNpcRange1(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc_range1;
}

void ZkFocusInstance_setNpcRange1(ZkFocusInstance* slf, float npcRange1) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc_range1 = npcRange1;
}

float ZkFocusInstance_getNpcRange2(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc_range2;
}

void ZkFocusInstance_setNpcRange2(ZkFocusInstance* slf, float npcRange2) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc_range2 = npcRange2;
}

float ZkFocusInstance_getNpcAzi(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc_azi;
}

void ZkFocusInstance_setNpcAzi(ZkFocusInstance* slf, float npcAzi) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc_azi = npcAzi;
}

float ZkFocusInstance_getNpcElevdo(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc_elevdo;
}

void ZkFocusInstance_setNpcElevdo(ZkFocusInstance* slf, float npcElevdo) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc_elevdo = npcElevdo;
}

float ZkFocusInstance_getNpcElevup(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc_elevup;
}

void ZkFocusInstance_setNpcElevup(ZkFocusInstance* slf, float npcElevup) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc_elevup = npcElevup;
}

int32_t ZkFocusInstance_getNpcPrio(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc_prio;
}

void ZkFocusInstance_setNpcPrio(ZkFocusInstance* slf, int32_t npcPrio) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc_prio = npcPrio;
}

float ZkFocusInstance_getItemRange1(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->item_range1;
}

void ZkFocusInstance_setItemRange1(ZkFocusInstance* slf, float itemRange1) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->item_range1 = itemRange1;
}

float ZkFocusInstance_getItemRange2(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->item_range2;
}

void ZkFocusInstance_setItemRange2(ZkFocusInstance* slf, float itemRange2) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->item_range2 = itemRange2;
}

float ZkFocusInstance_getItemAzi(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->item_azi;
}

void ZkFocusInstance_setItemAzi(ZkFocusInstance* slf, float itemAzi) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->item_azi = itemAzi;
}

float ZkFocusInstance_getItemElevdo(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->item_elevdo;
}

void ZkFocusInstance_setItemElevdo(ZkFocusInstance* slf, float itemElevdo) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->item_elevdo = itemElevdo;
}

float ZkFocusInstance_getItemElevup(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->item_elevup;
}

void ZkFocusInstance_setItemElevup(ZkFocusInstance* slf, float itemElevup) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->item_elevup = itemElevup;
}

int32_t ZkFocusInstance_getItemPrio(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->item_prio;
}

void ZkFocusInstance_setItemPrio(ZkFocusInstance* slf, int32_t itemPrio) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->item_prio = itemPrio;
}

float ZkFocusInstance_getMobRange1(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->mob_range1;
}

void ZkFocusInstance_setMobRange1(ZkFocusInstance* slf, float mobRange1) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->mob_range1 = mobRange1;
}

float ZkFocusInstance_getMobRange2(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->mob_range2;
}

void ZkFocusInstance_setMobRange2(ZkFocusInstance* slf, float mobRange2) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->mob_range2 = mobRange2;
}

float ZkFocusInstance_getMobAzi(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->mob_azi;
}

void ZkFocusInstance_setMobAzi(ZkFocusInstance* slf, float mobAzi) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->mob_azi = mobAzi;
}

float ZkFocusInstance_getMobElevdo(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->mob_elevdo;
}

void ZkFocusInstance_setMobElevdo(ZkFocusInstance* slf, float mobElevdo) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->mob_elevdo = mobElevdo;
}

float ZkFocusInstance_getMobElevup(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->mob_elevup;
}

void ZkFocusInstance_setMobElevup(ZkFocusInstance* slf, float mobElevup) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->mob_elevup = mobElevup;
}

int32_t ZkFocusInstance_getMobPrio(ZkFocusInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->mob_prio;
}

void ZkFocusInstance_setMobPrio(ZkFocusInstance* slf, int32_t mobPrio) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->mob_prio = mobPrio;
}
