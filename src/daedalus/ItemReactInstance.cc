#include "zenkit-capi/daedalus/ItemReactInstance.h"
#include "../Internal.hh"

int32_t ZkItemReactInstance_getNpc(ZkItemReactInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->npc;
}

void ZkItemReactInstance_setNpc(ZkItemReactInstance* slf, int32_t npc) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->npc = npc;
}

int32_t ZkItemReactInstance_getTradeItem(ZkItemReactInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->trade_item;
}

void ZkItemReactInstance_setTradeItem(ZkItemReactInstance* slf, int32_t tradeItem) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->trade_item = tradeItem;
}

int32_t ZkItemReactInstance_getTradeAmount(ZkItemReactInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->trade_amount;
}

void ZkItemReactInstance_setTradeAmount(ZkItemReactInstance* slf, int32_t tradeAmount) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->trade_amount = tradeAmount;
}

int32_t ZkItemReactInstance_getRequestedCategory(ZkItemReactInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->requested_cat;
}

void ZkItemReactInstance_setRequestedCategory(ZkItemReactInstance* slf, int32_t requestedCategory) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->requested_cat = requestedCategory;
}

int32_t ZkItemReactInstance_getRequestedItem(ZkItemReactInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->requested_item;
}

void ZkItemReactInstance_setRequestedItem(ZkItemReactInstance* slf, int32_t requestedItem) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->requested_item = requestedItem;
}

int32_t ZkItemReactInstance_getRequestedAmount(ZkItemReactInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->requested_amount;
}

void ZkItemReactInstance_setRequestedAmount(ZkItemReactInstance* slf, int32_t requestedAmount) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->requested_amount = requestedAmount;
}

int32_t ZkItemReactInstance_getReaction(ZkItemReactInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->reaction;
}

void ZkItemReactInstance_setReaction(ZkItemReactInstance* slf, int32_t reaction) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->reaction = reaction;
}
