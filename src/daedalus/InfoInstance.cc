#include "zenkit-capi/daedalus/InfoInstance.h"
#include "../Internal.hh"

int32_t ZkInfoInstance_getNpc(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc;
}

void ZkInfoInstance_setNpc(ZkInfoInstance* slf, int32_t npc) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc = npc;
}

int32_t ZkInfoInstance_getNr(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->nr;
}

void ZkInfoInstance_setNr(ZkInfoInstance* slf, int32_t nr) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->nr = nr;
}

int32_t ZkInfoInstance_getImportant(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->important;
}

void ZkInfoInstance_setImportant(ZkInfoInstance* slf, int32_t important) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->important = important;
}

int32_t ZkInfoInstance_getCondition(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->condition;
}

void ZkInfoInstance_setCondition(ZkInfoInstance* slf, int32_t condition) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->condition = condition;
}

int32_t ZkInfoInstance_getInformation(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->information;
}

void ZkInfoInstance_setInformation(ZkInfoInstance* slf, int32_t information) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->information = information;
}

ZkString ZkInfoInstance_getDescription(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->description.c_str();
}

void ZkInfoInstance_setDescription(ZkInfoInstance* slf, ZkString description) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->description = description;
}

int32_t ZkInfoInstance_getTrade(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->trade;
}

void ZkInfoInstance_setTrade(ZkInfoInstance* slf, int32_t trade) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->trade = trade;
}

int32_t ZkInfoInstance_getPermanent(ZkInfoInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->permanent;
}

void ZkInfoInstance_setPermanent(ZkInfoInstance* slf, int32_t permanent) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->permanent = permanent;
}
