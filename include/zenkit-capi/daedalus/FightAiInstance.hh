#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkFightAiInstance = ZkSharedHandle<zenkit::IFightAi>;
#else
typedef struct ZkInternal_FightAiInstance ZkFightAiInstance;
#endif

typedef enum {
	ZkFightAiMove_NOP = 0,
	ZkFightAiMove_RUN = 1,
	ZkFightAiMove_RUN_BACK = 2,
	ZkFightAiMove_JUMP_BACK = 3,
	ZkFightAiMove_TURN = 4,
	ZkFightAiMove_STRAFE = 5,
	ZkFightAiMove_ATTACK = 6,
	ZkFightAiMove_ATTACK_SIDE = 7,
	ZkFightAiMove_ATTACK_FRONT = 8,
	ZkFightAiMove_ATTACK_TRIPLE = 9,
	ZkFightAiMove_ATTACK_WHIRL = 10,
	ZkFightAiMove_ATTACK_MASTER = 11,
	ZkFightAiMove_TURN_TO_HIT = 15,
	ZkFightAiMove_PARRY = 17,
	ZkFightAiMove_STAND_UP = 18,
	ZkFightAiMove_WAIT = 19,
	ZkFightAiMove_WAIT_LONGER = 23,
	ZkFightAiMove_WAIT_EXT = 24,
} ZkFightAiMove;

ZKC_API ZkFightAiMove ZkFightAiInstance_getMove(ZkFightAiInstance const* slf, ZkSize i);
ZKC_API void ZkFightAiInstance_setMove(ZkFightAiInstance* slf, ZkSize i, ZkFightAiMove move);
