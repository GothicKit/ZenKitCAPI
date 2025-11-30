#include "zenkit-capi/daedalus/FightAiInstance.hh"
#include "../Internal.hh"

ZkFightAiMove ZkFightAiInstance_getMove(ZkFightAiInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(6, i);
	return static_cast<ZkFightAiMove>(SLF->move[i]);
}

void ZkFightAiInstance_setMove(ZkFightAiInstance* slf, ZkSize i, ZkFightAiMove move) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(6, i);
	SLF->move[i] = static_cast<zenkit::FightAiMove>(move);
}
