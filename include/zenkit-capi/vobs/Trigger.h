// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "../ModelAnimation.h"
#include "../Object.h"
#include "../Stream.h"
#include "VirtualObject.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Trigger.hh>
using ZkTrigger = ZkSharedHandle<zenkit::VTrigger>;
using ZkMover = ZkSharedHandle<zenkit::VMover>;
using ZkTriggerList = ZkSharedHandle<zenkit::VTriggerList>;
using ZkTriggerListTarget = zenkit::VTriggerList::Target;
using ZkTriggerScript = ZkSharedHandle<zenkit::VTriggerScript>;
using ZkTriggerChangeLevel = ZkSharedHandle<zenkit::VTriggerChangeLevel>;
using ZkTriggerWorldStart = ZkSharedHandle<zenkit::VTriggerWorldStart>;
using ZkTriggerUntouch = ZkSharedHandle<zenkit::VTriggerUntouch>;
#else
typedef struct ZkInternal_Trigger ZkTrigger;
typedef struct ZkInternal_Mover ZkMover;
typedef struct ZkInternal_TriggerList ZkTriggerList;
typedef struct ZkInternal_TriggerUntouch ZkTriggerUntouch;
#endif

typedef ZkBool (*ZkTriggerListTargetEnumerator)(void* ctx, ZkTriggerListTarget const* target);

typedef enum {
	ZkMoverBehavior_TOGGLE = 0,
	ZkMoverBehavior_TRIGGER_CONTROL = 1,
	ZkMoverBehavior_OPEN_TIME = 2,
	ZkMoverBehavior_LOOP = 3,
	ZkMoverBehavior_SINGLE_KEYS = 4,
} ZkMoverBehavior;

typedef enum {
	ZkMoverLerpType_CURVE = 0,
	ZkMoverLerpType_LINEAR = 1,
} ZkMoverLerpType;

typedef enum {
	ZkMoverSpeedType_CONSTANT = 0,
	ZkMoverSpeedType_SLOW_START_END = 1,
	ZkMoverSpeedType_SLOW_START = 2,
	ZkMoverSpeedType_SLOW_END = 3,
	ZkMoverSpeedType_SEGMENT_SLOW_START_END = 4,
	ZkMoverSpeedType_SEGMENT_SLOW_START = 5,
	ZkMoverSpeedType_SEGMENT_SLOW_END = 6,
} ZkMoverSpeedType;

typedef enum {
	ZkTriggerBatchMode_ALL = 0,
	ZkTriggerBatchMode_NEXT = 1,
	ZkTriggerBatchMode_RANDOM = 2,
} ZkTriggerBatchMode;

ZKC_API ZkTrigger* ZkTrigger_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTrigger* ZkTrigger_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTrigger_del(ZkTrigger* slf);

ZKC_API ZkString ZkTrigger_getTarget(ZkTrigger const* slf);
ZKC_API void ZkTrigger_setTarget(ZkTrigger* slf, ZkString target);

ZKC_API ZkBool ZkTrigger_getStartEnabled(ZkTrigger const* slf);
ZKC_API ZkBool ZkTrigger_getSendUntrigger(ZkTrigger const* slf);
ZKC_API ZkBool ZkTrigger_getReactToOnTrigger(ZkTrigger const* slf);
ZKC_API ZkBool ZkTrigger_getReactToOnTouch(ZkTrigger const* slf);
ZKC_API ZkBool ZkTrigger_getReactToOnDamage(ZkTrigger const* slf);
ZKC_API ZkBool ZkTrigger_getRespondToObject(ZkTrigger const* slf);
ZKC_API ZkBool ZkTrigger_getRespondToPC(ZkTrigger const* slf);
ZKC_API ZkBool ZkTrigger_getRespondToNPC(ZkTrigger const* slf);

ZKC_API void ZkTrigger_setStartEnabled(ZkTrigger* slf, ZkBool b);
ZKC_API void ZkTrigger_setSendUntrigger(ZkTrigger* slf, ZkBool b);
ZKC_API void ZkTrigger_setReactToOnTrigger(ZkTrigger* slf, ZkBool b);
ZKC_API void ZkTrigger_setReactToOnTouch(ZkTrigger* slf, ZkBool b);
ZKC_API void ZkTrigger_setReactToOnDamage(ZkTrigger* slf, ZkBool b);
ZKC_API void ZkTrigger_setRespondToObject(ZkTrigger* slf, ZkBool b);
ZKC_API void ZkTrigger_setRespondToPC(ZkTrigger* slf, ZkBool b);
ZKC_API void ZkTrigger_setRespondToNPC(ZkTrigger* slf, ZkBool b);

ZKC_API ZkString ZkTrigger_getVobTarget(ZkTrigger const* slf);
ZKC_API void ZkTrigger_setVobTarget(ZkTrigger* slf, ZkString vobTarget);
ZKC_API int32_t ZkTrigger_getMaxActivationCount(ZkTrigger const* slf);
ZKC_API void ZkTrigger_setMaxActivationCount(ZkTrigger* slf, int32_t maxActivationCount);
ZKC_API float ZkTrigger_getRetriggerDelaySeconds(ZkTrigger const* slf);
ZKC_API void ZkTrigger_setRetriggerDelaySeconds(ZkTrigger* slf, float retriggerDelaySeconds);
ZKC_API float ZkTrigger_getDamageThreshold(ZkTrigger const* slf);
ZKC_API void ZkTrigger_setDamageThreshold(ZkTrigger* slf, float damageThreshold);
ZKC_API float ZkTrigger_getFireDelaySeconds(ZkTrigger const* slf);
ZKC_API void ZkTrigger_setFireDelaySeconds(ZkTrigger* slf, float fireDelaySeconds);

ZKC_API float ZkTrigger_getNextTimeTriggerable(ZkTrigger const* slf);
ZKC_API ZkVirtualObject* ZkTrigger_getOtherVob(ZkTrigger const* slf);
ZKC_API int ZkTrigger_getCountCanBeActivated(ZkTrigger const* slf);
ZKC_API ZkBool ZkTrigger_getIsEnabled(ZkTrigger const* slf);

ZKC_API void ZkTrigger_setNextTimeTriggerable(ZkTrigger* slf, float nextTimeTriggerable);
ZKC_API void ZkTrigger_setOtherVob(ZkTrigger* slf, ZkVirtualObject* otherVob);
ZKC_API void ZkTrigger_setCountCanBeActivated(ZkTrigger* slf, int countCanBeActivated);
ZKC_API void ZkTrigger_setIsEnabled(ZkTrigger* slf, ZkBool isEnabled);

ZKC_API ZkMover* ZkMover_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkMover* ZkMover_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkMover_del(ZkMover* slf);

ZKC_API ZkMoverBehavior ZkMover_getBehavior(ZkMover const* slf);
ZKC_API void ZkMover_setBehavior(ZkMover* slf, ZkMoverBehavior behavior);
ZKC_API float ZkMover_getTouchBlockerDamage(ZkMover const* slf);
ZKC_API void ZkMover_setTouchBlockerDamage(ZkMover* slf, float touchBlockerDamage);
ZKC_API float ZkMover_getStayOpenTimeSeconds(ZkMover const* slf);
ZKC_API void ZkMover_setStayOpenTimeSeconds(ZkMover* slf, float stayOpenTimeSeconds);
ZKC_API ZkBool ZkMover_getIsLocked(ZkMover const* slf);
ZKC_API void ZkMover_setIsLocked(ZkMover* slf, ZkBool isLocked);
ZKC_API ZkBool ZkMover_getAutoLink(ZkMover const* slf);
ZKC_API void ZkMover_setAutoLink(ZkMover* slf, ZkBool autoLink);
ZKC_API ZkBool ZkMover_getAutoRotate(ZkMover const* slf);
ZKC_API void ZkMover_setAutoRotate(ZkMover* slf, ZkBool autoRotate);
ZKC_API float ZkMover_getSpeed(ZkMover const* slf);
ZKC_API void ZkMover_setSpeed(ZkMover* slf, float speed);
ZKC_API ZkMoverLerpType ZkMover_getLerpType(ZkMover const* slf);
ZKC_API void ZkMover_setLerpType(ZkMover* slf, ZkMoverLerpType lerpType);
ZKC_API ZkMoverSpeedType ZkMover_getSpeedType(ZkMover const* slf);
ZKC_API void ZkMover_setSpeedType(ZkMover* slf, ZkMoverSpeedType speedType);

ZKC_API ZkVec3f ZkMover_getActKeyPosDelta(ZkMover const* slf);
ZKC_API float ZkMover_getActKeyframeF(ZkMover const* slf);
ZKC_API int ZkMover_getActKeyframe(ZkMover const* slf);
ZKC_API int ZkMover_getNextKeyframe(ZkMover const* slf);
ZKC_API float ZkMover_getMoveSpeedUnit(ZkMover const* slf);
ZKC_API float ZkMover_getAdvanceDir(ZkMover const* slf);
ZKC_API uint32_t ZkMover_getMoverState(ZkMover const* slf);
ZKC_API int ZkMover_getTriggerEventCount(ZkMover const* slf);
ZKC_API float ZkMover_getStayOpenTimeDest(ZkMover const* slf);

ZKC_API void ZkMover_setActKeyPosDelta(ZkMover* slf, ZkVec3f actKeyPosDelta);
ZKC_API void ZkMover_setActKeyframeF(ZkMover* slf, float actKeyframeF);
ZKC_API void ZkMover_setActKeyframe(ZkMover* slf, int actKeyframe);
ZKC_API void ZkMover_setNextKeyframe(ZkMover* slf, int nextKeyframe);
ZKC_API void ZkMover_setMoveSpeedUnit(ZkMover* slf, float moveSpeedUnit);
ZKC_API void ZkMover_setAdvanceDir(ZkMover* slf, float advanceDir);
ZKC_API void ZkMover_setMoverState(ZkMover* slf, uint32_t moverState);
ZKC_API void ZkMover_setTriggerEventCount(ZkMover* slf, int triggerEventCount);
ZKC_API void ZkMover_setStayOpenTimeDest(ZkMover* slf, float stayOpenTimeDest);

ZKC_API ZkSize ZkMover_getKeyframeCount(ZkMover const* slf);
ZKC_API ZkAnimationSample ZkMover_getKeyframe(ZkMover const* slf, ZkSize i);
ZKC_API void ZkMover_enumerateKeyframes(ZkMover const* slf, ZkAnimationSampleEnumerator cb, void* ctx);

ZKC_API ZkString ZkMover_getSfxOpenStart(ZkMover const* slf);
ZKC_API void ZkMover_setSfxOpenStart(ZkMover* slf, ZkString sfxOpenStart);
ZKC_API ZkString ZkMover_getSfxOpenEnd(ZkMover const* slf);
ZKC_API void ZkMover_setSfxOpenEnd(ZkMover* slf, ZkString sfxOpenEnd);
ZKC_API ZkString ZkMover_getSfxTransitioning(ZkMover const* slf);
ZKC_API void ZkMover_setSfxTransitioning(ZkMover* slf, ZkString sfxTransitioning);
ZKC_API ZkString ZkMover_getSfxCloseStart(ZkMover const* slf);
ZKC_API void ZkMover_setSfxCloseStart(ZkMover* slf, ZkString sfxCloseStart);
ZKC_API ZkString ZkMover_getSfxCloseEnd(ZkMover const* slf);
ZKC_API void ZkMover_setSfxCloseEnd(ZkMover* slf, ZkString sfxCloseEnd);
ZKC_API ZkString ZkMover_getSfxLock(ZkMover const* slf);
ZKC_API void ZkMover_setSfxLock(ZkMover* slf, ZkString sfxLock);
ZKC_API ZkString ZkMover_getSfxUnlock(ZkMover const* slf);
ZKC_API void ZkMover_setSfxUnlock(ZkMover* slf, ZkString sfxUnlock);
ZKC_API ZkString ZkMover_getSfxUseLocked(ZkMover const* slf);
ZKC_API void ZkMover_setSfxUseLocked(ZkMover* slf, ZkString sfxUseLocked);

ZKC_API ZkTriggerList* ZkTriggerList_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerList* ZkTriggerList_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerList_del(ZkTriggerList* slf);

ZKC_API ZkTriggerBatchMode ZkTriggerList_getMode(ZkTriggerList const* slf);
ZKC_API void ZkTriggerList_setMode(ZkTriggerList* slf, ZkTriggerBatchMode mode);
ZKC_API ZkSize ZkTriggerList_getTargetCount(ZkTriggerList const* slf);
ZKC_API ZkTriggerListTarget* ZkTriggerList_getTarget(ZkTriggerList* slf, ZkSize i);
ZKC_API void ZkTriggerList_enumerateTargets(ZkTriggerList const* slf, ZkTriggerListTargetEnumerator cb, void* ctx);
ZKC_API ZkTriggerListTarget* ZkTriggerList_addTarget(ZkTriggerList* slf);
ZKC_API void ZkTriggerList_removeTarget(ZkTriggerList* slf, ZkSize i);
ZKC_API void ZkTriggerList_removeTargets(ZkTriggerList* slf, ZkTriggerListTargetEnumerator pred, void* ctx);

ZKC_API ZkByte ZkTriggerList_getActTarget(ZkTriggerList const* slf);
ZKC_API ZkBool ZkTriggerList_getSendOnTrigger(ZkTriggerList const* slf);

ZKC_API void ZkTriggerList_setActTarget(ZkTriggerList* slf, ZkByte actTarget);
ZKC_API void ZkTriggerList_setSendOnTrigger(ZkTriggerList* slf, ZkBool sendOnTrigger);

ZKC_API ZkString ZkTriggerListTarget_getName(ZkTriggerListTarget const* slf);
ZKC_API void ZkTriggerListTarget_setName(ZkTriggerListTarget* slf, ZkString name);
ZKC_API float ZkTriggerListTarget_getDelaySeconds(ZkTriggerListTarget const* slf);
ZKC_API void ZkTriggerListTarget_setDelaySeconds(ZkTriggerListTarget* slf, float delaySeconds);

ZKC_API ZkTriggerScript* ZkTriggerScript_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerScript* ZkTriggerScript_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerScript_del(ZkTriggerScript* slf);
ZKC_API ZkString ZkTriggerScript_getFunction(ZkTriggerScript const* slf);
ZKC_API void ZkTriggerScript_setFunction(ZkTriggerScript* slf, ZkString function);

ZKC_API ZkTriggerChangeLevel* ZkTriggerChangeLevel_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerChangeLevel* ZkTriggerChangeLevel_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerChangeLevel_del(ZkTriggerChangeLevel* slf);
ZKC_API ZkString ZkTriggerChangeLevel_getLevelName(ZkTriggerChangeLevel const* slf);
ZKC_API void ZkTriggerChangeLevel_setLevelName(ZkTriggerChangeLevel* slf, ZkString levelName);
ZKC_API ZkString ZkTriggerChangeLevel_getStartVob(ZkTriggerChangeLevel const* slf);
ZKC_API void ZkTriggerChangeLevel_setStartVob(ZkTriggerChangeLevel* slf, ZkString startVob);

ZKC_API ZkTriggerWorldStart* ZkTriggerWorldStart_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerWorldStart* ZkTriggerWorldStart_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerWorldStart_del(ZkTriggerWorldStart* slf);
ZKC_API ZkString ZkTriggerWorldStart_getTarget(ZkTriggerWorldStart const* slf);
ZKC_API void ZkTriggerWorldStart_setTarget(ZkTriggerWorldStart* slf, ZkString target);
ZKC_API ZkBool ZkTriggerWorldStart_getFireOnce(ZkTriggerWorldStart const* slf);
ZKC_API void ZkTriggerWorldStart_setFireOnce(ZkTriggerWorldStart* slf, ZkBool fireOnce);

ZKC_API ZkBool ZkTriggerWorldStart_getHasFired(ZkTriggerWorldStart const* slf);
ZKC_API void ZkTriggerWorldStart_setHasFired(ZkTriggerWorldStart* slf, ZkBool hasFired);

ZKC_API ZkTriggerUntouch* ZkTriggerUntouch_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkTriggerUntouch* ZkTriggerUntouch_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkTriggerUntouch_del(ZkTriggerUntouch* slf);
ZKC_API ZkString ZkTriggerUntouch_getTarget(ZkTriggerUntouch const* slf);
ZKC_API void ZkTriggerUntouch_setTarget(ZkTriggerUntouch* slf, ZkString target);
