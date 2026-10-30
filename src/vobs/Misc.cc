// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Misc.h"

#include "../Internal.hh"

#include <cstring>
#include <zenkit/Archive.hh>

ZKC_VOB_LOADER(ZkAnimate)
ZKC_VOB_PATH_LOADER(ZkAnimate)
ZKC_DELETER(ZkAnimate)

ZkBool ZkAnimate_getStartOn(ZkAnimate const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->start_on;
}

void ZkAnimate_setStartOn(ZkAnimate* slf, ZkBool startOn) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->start_on = startOn;
}

ZkBool ZkAnimate_getIsRunning(ZkAnimate const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->s_is_running;
}

void ZkAnimate_setIsRunning(ZkAnimate* slf, ZkBool isRunning) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->s_is_running = isRunning;
}

ZKC_VOB_LOADER(ZkItem)
ZKC_VOB_PATH_LOADER(ZkItem)
ZKC_DELETER(ZkItem)

ZkString ZkItem_getInstance(ZkItem const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->instance.c_str();
}

void ZkItem_setInstance(ZkItem* slf, ZkString instance) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->instance = instance;
}

int ZkItem_getAmount(ZkItem const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->s_amount;
}

void ZkItem_setAmount(ZkItem* slf, int amount) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->s_amount = amount;
}

int ZkItem_getFlags(ZkItem const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->s_flags;
}

void ZkItem_setFlags(ZkItem* slf, int flags) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->s_flags = flags;
}

ZKC_VOB_LOADER(ZkLensFlare)
ZKC_VOB_PATH_LOADER(ZkLensFlare)
ZKC_DELETER(ZkLensFlare)

ZkString ZkLensFlare_getEffect(ZkLensFlare const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fx.c_str();
}

void ZkLensFlare_setEffect(ZkLensFlare* slf, ZkString effect) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fx = effect;
}

ZKC_VOB_LOADER(ZkParticleEffectController)
ZKC_VOB_PATH_LOADER(ZkParticleEffectController)
ZKC_DELETER(ZkParticleEffectController)

ZkString ZkParticleEffectController_getEffectName(ZkParticleEffectController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_name.c_str();
}

void ZkParticleEffectController_setEffectName(ZkParticleEffectController* slf, ZkString effectName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_name = effectName;
}

ZkBool ZkParticleEffectController_getKillWhenDone(ZkParticleEffectController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->kill_when_done;
}

void ZkParticleEffectController_setKillWhenDone(ZkParticleEffectController* slf, ZkBool killWhenDone) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->kill_when_done = killWhenDone;
}

ZkBool ZkParticleEffectController_getInitiallyRunning(ZkParticleEffectController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->initially_running;
}

void ZkParticleEffectController_setInitiallyRunning(ZkParticleEffectController* slf, ZkBool initiallyRunning) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->initially_running = initiallyRunning;
}

ZKC_VOB_LOADER(ZkMessageFilter)
ZKC_VOB_PATH_LOADER(ZkMessageFilter)
ZKC_DELETER(ZkMessageFilter)

ZkString ZkMessageFilter_getTarget(ZkMessageFilter const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->target.c_str();
}

void ZkMessageFilter_setTarget(ZkMessageFilter* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->target = target;
}

ZkMessageFilterAction ZkMessageFilter_getOnTrigger(ZkMessageFilter const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMessageFilterAction>(SLF->on_trigger);
}

void ZkMessageFilter_setOnTrigger(ZkMessageFilter* slf, ZkMessageFilterAction onTrigger) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->on_trigger = static_cast<zenkit::MessageFilterAction>(onTrigger);
}

ZkMessageFilterAction ZkMessageFilter_getOnUntrigger(ZkMessageFilter const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMessageFilterAction>(SLF->on_untrigger);
}

void ZkMessageFilter_setOnUntrigger(ZkMessageFilter* slf, ZkMessageFilterAction onUntrigger) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->on_untrigger = static_cast<zenkit::MessageFilterAction>(onUntrigger);
}

ZKC_VOB_LOADER(ZkCodeMaster)
ZKC_VOB_PATH_LOADER(ZkCodeMaster)
ZKC_DELETER(ZkCodeMaster)

ZkString ZkCodeMaster_getTarget(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->target.c_str();
}

void ZkCodeMaster_setTarget(ZkCodeMaster* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->target = target;
}

ZkBool ZkCodeMaster_getOrdered(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ordered;
}

void ZkCodeMaster_setOrdered(ZkCodeMaster* slf, ZkBool ordered) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ordered = ordered;
}

ZkBool ZkCodeMaster_getFirstFalseIsFailure(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->first_false_is_failure;
}

void ZkCodeMaster_setFirstFalseIsFailure(ZkCodeMaster* slf, ZkBool firstFalseIsFailure) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->first_false_is_failure = firstFalseIsFailure;
}

ZkString ZkCodeMaster_getFailureTarget(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->failure_target.c_str();
}

void ZkCodeMaster_setFailureTarget(ZkCodeMaster* slf, ZkString failureTarget) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->failure_target = failureTarget;
}

ZkBool ZkCodeMaster_getUntriggeredCancels(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->untriggered_cancels;
}

void ZkCodeMaster_setUntriggeredCancels(ZkCodeMaster* slf, ZkBool untriggeredCancels) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->untriggered_cancels = untriggeredCancels;
}

ZkSize ZkCodeMaster_getSlaveCount(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->slaves.size();
}

ZkString ZkCodeMaster_getSlave(ZkCodeMaster const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->slaves, i);
	return SLF->slaves[i].c_str();
}

void ZkCodeMaster_enumerateSlaves(ZkCodeMaster const* slf, ZkStringEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& it : SLF->slaves) {
		if (cb(ctx, it.c_str())) break;
	}
}

void ZkCodeMaster_addSlave(ZkCodeMaster* slf, ZkString slave) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, slave);
	SLF->slaves.push_back(slave);
}

void ZkCodeMaster_removeSlave(ZkCodeMaster* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->slaves, i);
	SLF->slaves.erase(SLF->slaves.begin() + static_cast<long>(i));
}

void ZkCodeMaster_removeSlaves(ZkCodeMaster* slf, ZkStringEnumerator pred, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, pred);

	for (auto it = SLF->slaves.begin(); it != SLF->slaves.end();) {
		if (pred(ctx, it->c_str())) {
			it = SLF->slaves.erase(it);
		} else {
			++it;
		}
	}
}

ZKC_VOB_LOADER(ZkMoverController)
ZKC_VOB_PATH_LOADER(ZkMoverController)
ZKC_DELETER(ZkMoverController)

ZkString ZkMoverController_getTarget(ZkMoverController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->target.c_str();
}

void ZkMoverController_setTarget(ZkMoverController* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->target = target;
}

ZkMoverMessageType ZkMoverController_getMessage(ZkMoverController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMoverMessageType>(SLF->message);
}

void ZkMoverController_setMessage(ZkMoverController* slf, ZkMoverMessageType message) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->message = static_cast<zenkit::MoverMessageType>(message);
}

int32_t ZkMoverController_getKey(ZkMoverController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->key;
}

void ZkMoverController_setKey(ZkMoverController* slf, int32_t key) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->key = key;
}

ZKC_VOB_LOADER(ZkTouchDamage)
ZKC_VOB_PATH_LOADER(ZkTouchDamage)
ZKC_DELETER(ZkTouchDamage)

float ZkTouchDamage_getDamage(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->damage;
}

void ZkTouchDamage_setDamage(ZkTouchDamage* slf, float damage) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->damage = damage;
}

ZkBool ZkTouchDamage_getIsBarrier(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->barrier;
}

void ZkTouchDamage_setIsBarrier(ZkTouchDamage* slf, ZkBool isBarrier) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->barrier = isBarrier;
}

ZkBool ZkTouchDamage_getIsBlunt(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->blunt;
}

void ZkTouchDamage_setIsBlunt(ZkTouchDamage* slf, ZkBool isBlunt) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->blunt = isBlunt;
}

ZkBool ZkTouchDamage_getIsEdge(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->edge;
}

void ZkTouchDamage_setIsEdge(ZkTouchDamage* slf, ZkBool isEdge) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->edge = isEdge;
}

ZkBool ZkTouchDamage_getIsFire(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fire;
}

void ZkTouchDamage_setIsFire(ZkTouchDamage* slf, ZkBool isFire) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fire = isFire;
}

ZkBool ZkTouchDamage_getIsFly(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fly;
}

void ZkTouchDamage_setIsFly(ZkTouchDamage* slf, ZkBool isFly) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fly = isFly;
}

ZkBool ZkTouchDamage_getIsMagic(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->magic;
}

void ZkTouchDamage_setIsMagic(ZkTouchDamage* slf, ZkBool isMagic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->magic = isMagic;
}

ZkBool ZkTouchDamage_getIsPoint(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->point;
}

void ZkTouchDamage_setIsPoint(ZkTouchDamage* slf, ZkBool isPoint) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->point = isPoint;
}

ZkBool ZkTouchDamage_getIsFall(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fall;
}

void ZkTouchDamage_setIsFall(ZkTouchDamage* slf, ZkBool isFall) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fall = isFall;
}

float ZkTouchDamage_getRepeatDelaySeconds(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->repeat_delay_sec;
}

void ZkTouchDamage_setRepeatDelaySeconds(ZkTouchDamage* slf, float repeatDelaySeconds) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->repeat_delay_sec = repeatDelaySeconds;
}

float ZkTouchDamage_getVolumeScale(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->volume_scale;
}

void ZkTouchDamage_setVolumeScale(ZkTouchDamage* slf, float volumeScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->volume_scale = volumeScale;
}

ZkTouchCollisionType ZkTouchDamage_getCollisionType(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkTouchCollisionType>(SLF->collision);
}

void ZkTouchDamage_setCollisionType(ZkTouchDamage* slf, ZkTouchCollisionType collisionType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->collision = static_cast<zenkit::TouchCollisionType>(collisionType);
}

ZKC_VOB_LOADER(ZkEarthquake)
ZKC_VOB_PATH_LOADER(ZkEarthquake)
ZKC_DELETER(ZkEarthquake)

float ZkEarthquake_getRadius(ZkEarthquake const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->radius;
}

void ZkEarthquake_setRadius(ZkEarthquake* slf, float radius) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->radius = radius;
}

float ZkEarthquake_getDuration(ZkEarthquake const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->duration;
}

void ZkEarthquake_setDuration(ZkEarthquake* slf, float duration) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->duration = duration;
}

ZkVec3f ZkEarthquake_getAmplitude(ZkEarthquake const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->amplitude;
}

void ZkEarthquake_setAmplitude(ZkEarthquake* slf, ZkVec3f amplitude) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->amplitude = amplitude;
}

ZkString ZkNpc_getNpcInstance(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->npc_instance.c_str();
}

ZkVec3f ZkNpc_getModelScale(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->model_scale;
}

float ZkNpc_getModelFatness(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->model_fatness;
}

int ZkNpc_getFlags(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->flags;
}

int ZkNpc_getGuild(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->guild;
}

int ZkNpc_getGuildTrue(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->guild_true;
}

int ZkNpc_getLevel(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->level;
}

int ZkNpc_getXp(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->xp;
}

int ZkNpc_getXpNextLevel(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->xp_next_level;
}

int ZkNpc_getLp(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->lp;
}

int ZkNpc_getFightTactic(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fight_tactic;
}

int ZkNpc_getFightMode(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fight_mode;
}

ZkBool ZkNpc_getWounded(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->wounded;
}

ZkBool ZkNpc_getMad(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->mad;
}

int ZkNpc_getMadTime(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->mad_time;
}

ZkBool ZkNpc_getPlayer(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->player;
}

ZkString ZkNpc_getStartAiState(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->start_ai_state.c_str();
}

ZkString ZkNpc_getScriptWaypoint(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->script_waypoint.c_str();
}

int ZkNpc_getAttitude(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->attitude;
}

int ZkNpc_getAttitudeTemp(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->attitude_temp;
}

int ZkNpc_getNameNr(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->name_nr;
}

ZkBool ZkNpc_getMoveLock(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->move_lock;
}

ZkBool ZkNpc_getCurrentStateValid(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->current_state_valid;
}

ZkString ZkNpc_getCurrentStateName(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->current_state_name.c_str();
}

int ZkNpc_getCurrentStateIndex(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->current_state_index;
}

ZkBool ZkNpc_getCurrentStateIsRoutine(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->current_state_is_routine;
}

ZkBool ZkNpc_getNextStateValid(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->next_state_valid;
}

ZkString ZkNpc_getNextStateName(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->next_state_name.c_str();
}

int ZkNpc_getNextStateIndex(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->next_state_index;
}

ZkBool ZkNpc_getNextStateIsRoutine(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->next_state_is_routine;
}

int ZkNpc_getLastAiState(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->last_ai_state;
}

ZkBool ZkNpc_getHasRoutine(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->has_routine;
}

ZkBool ZkNpc_getRoutineChanged(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->routine_changed;
}

ZkBool ZkNpc_getRoutineOverlay(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->routine_overlay;
}

int ZkNpc_getRoutineOverlayCount(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->routine_overlay_count;
}

int ZkNpc_getWalkmodeRoutine(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->walkmode_routine;
}

ZkBool ZkNpc_getWeaponmodeRoutine(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->weaponmode_routine;
}

ZkBool ZkNpc_getStartNewRoutine(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->start_new_routine;
}

int ZkNpc_getAiStateDriven(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ai_state_driven;
}

ZkVec3f ZkNpc_getAiStatePos(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ai_state_pos;
}

ZkString ZkNpc_getCurrentRoutine(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->current_routine.c_str();
}

ZkBool ZkNpc_getRespawn(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->respawn;
}

int ZkNpc_getRespawnTime(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->respawn_time;
}

int ZkNpc_getBsInterruptableOverride(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->bs_interruptable_override;
}

int ZkNpc_getNpcType(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->npc_type;
}

int ZkNpc_getSpellMana(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->spell_mana;
}

ZkVirtualObject* ZkNpc_getCarryVob(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->carry_vob ? &SLF->carry_vob : nullptr;
}

ZkVirtualObject* ZkNpc_getEnemy(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->enemy ? &SLF->enemy : nullptr;
}

void ZkNpc_setNpcInstance(ZkNpc* slf, ZkString npcInstance) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->npc_instance = npcInstance;
}

void ZkNpc_setModelScale(ZkNpc* slf, ZkVec3f modelScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->model_scale = modelScale;
}

void ZkNpc_setModelFatness(ZkNpc* slf, float modelFatness) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->model_fatness = modelFatness;
}

void ZkNpc_setFlags(ZkNpc* slf, int flags) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->flags = flags;
}

void ZkNpc_setGuild(ZkNpc* slf, int guild) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->guild = guild;
}

void ZkNpc_setGuildTrue(ZkNpc* slf, int guildTrue) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->guild_true = guildTrue;
}

void ZkNpc_setLevel(ZkNpc* slf, int level) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->level = level;
}

void ZkNpc_setXp(ZkNpc* slf, int xp) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->xp = xp;
}

void ZkNpc_setXpNextLevel(ZkNpc* slf, int xpNextLevel) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->xp_next_level = xpNextLevel;
}

void ZkNpc_setLp(ZkNpc* slf, int lp) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->lp = lp;
}

void ZkNpc_setFightTactic(ZkNpc* slf, int fightTactic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fight_tactic = fightTactic;
}

void ZkNpc_setFightMode(ZkNpc* slf, int fightMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fight_mode = fightMode;
}

void ZkNpc_setWounded(ZkNpc* slf, ZkBool wounded) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->wounded = wounded;
}

void ZkNpc_setMad(ZkNpc* slf, ZkBool mad) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->mad = mad;
}

void ZkNpc_setMadTime(ZkNpc* slf, int madTime) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->mad_time = madTime;
}

void ZkNpc_setPlayer(ZkNpc* slf, ZkBool player) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->player = player;
}

void ZkNpc_setStartAiState(ZkNpc* slf, ZkString startAiState) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->start_ai_state = startAiState;
}

void ZkNpc_setScriptWaypoint(ZkNpc* slf, ZkString scriptWaypoint) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->script_waypoint = scriptWaypoint;
}

void ZkNpc_setAttitude(ZkNpc* slf, int attitude) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->attitude = attitude;
}

void ZkNpc_setAttitudeTemp(ZkNpc* slf, int attitudeTemp) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->attitude_temp = attitudeTemp;
}

void ZkNpc_setNameNr(ZkNpc* slf, int nameNr) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->name_nr = nameNr;
}

void ZkNpc_setMoveLock(ZkNpc* slf, ZkBool moveLock) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->move_lock = moveLock;
}

void ZkNpc_setCurrentStateValid(ZkNpc* slf, ZkBool currentStateValid) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->current_state_valid = currentStateValid;
}

void ZkNpc_setCurrentStateName(ZkNpc* slf, ZkString currentStateName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->current_state_name = currentStateName;
}

void ZkNpc_setCurrentStateIndex(ZkNpc* slf, int currentStateIndex) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->current_state_index = currentStateIndex;
}

void ZkNpc_setCurrentStateIsRoutine(ZkNpc* slf, ZkBool currentStateIsRoutine) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->current_state_is_routine = currentStateIsRoutine;
}

void ZkNpc_setNextStateValid(ZkNpc* slf, ZkBool nextStateValid) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->next_state_valid = nextStateValid;
}

void ZkNpc_setNextStateName(ZkNpc* slf, ZkString nextStateName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->next_state_name = nextStateName;
}

void ZkNpc_setNextStateIndex(ZkNpc* slf, int nextStateIndex) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->next_state_index = nextStateIndex;
}

void ZkNpc_setNextStateIsRoutine(ZkNpc* slf, ZkBool nextStateIsRoutine) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->next_state_is_routine = nextStateIsRoutine;
}

void ZkNpc_setLastAiState(ZkNpc* slf, int lastAiState) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->last_ai_state = lastAiState;
}

void ZkNpc_setHasRoutine(ZkNpc* slf, ZkBool hasRoutine) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->has_routine = hasRoutine;
}

void ZkNpc_setRoutineChanged(ZkNpc* slf, ZkBool routineChanged) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->routine_changed = routineChanged;
}

void ZkNpc_setRoutineOverlay(ZkNpc* slf, ZkBool routineOverlay) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->routine_overlay = routineOverlay;
}

void ZkNpc_setRoutineOverlayCount(ZkNpc* slf, int routineOverlayCount) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->routine_overlay_count = routineOverlayCount;
}

void ZkNpc_setWalkmodeRoutine(ZkNpc* slf, int walkmodeRoutine) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->walkmode_routine = walkmodeRoutine;
}

void ZkNpc_setWeaponmodeRoutine(ZkNpc* slf, ZkBool weaponmodeRoutine) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->weaponmode_routine = weaponmodeRoutine;
}

void ZkNpc_setStartNewRoutine(ZkNpc* slf, ZkBool startNewRoutine) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->start_new_routine = startNewRoutine;
}

void ZkNpc_setAiStateDriven(ZkNpc* slf, int aiStateDriven) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ai_state_driven = aiStateDriven;
}

void ZkNpc_setAiStatePos(ZkNpc* slf, ZkVec3f aiStatePos) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ai_state_pos = aiStatePos;
}

void ZkNpc_setCurrentRoutine(ZkNpc* slf, ZkString currentRoutine) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->current_routine = currentRoutine;
}

void ZkNpc_setRespawn(ZkNpc* slf, ZkBool respawn) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->respawn = respawn;
}

void ZkNpc_setRespawnTime(ZkNpc* slf, int respawnTime) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->respawn_time = respawnTime;
}

void ZkNpc_setBsInterruptableOverride(ZkNpc* slf, int bsInterruptableOverride) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->bs_interruptable_override = bsInterruptableOverride;
}

void ZkNpc_setNpcType(ZkNpc* slf, int npcType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->npc_type = npcType;
}

void ZkNpc_setSpellMana(ZkNpc* slf, int spellMana) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->spell_mana = spellMana;
}

void ZkNpc_setCarryVob(ZkNpc* slf, ZkVirtualObject* carryVob) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->carry_vob = carryVob ? *carryVob : nullptr;
}

void ZkNpc_setEnemy(ZkNpc* slf, ZkVirtualObject* enemy) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->enemy = enemy ? *enemy : nullptr;
}

ZkSize ZkNpc_getOverlayCount(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->overlays.size();
}

ZkString ZkNpc_getOverlay(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->overlays, i);
	return SLF->overlays[i].c_str();
}

void ZkNpc_clearOverlays(ZkNpc* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->overlays.clear();
}

void ZkNpc_removeOverlay(ZkNpc* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->overlays, i);
	SLF->overlays.erase(SLF->overlays.begin() + static_cast<long>(i));
}

void ZkNpc_setOverlay(ZkNpc* slf, ZkSize i, ZkString overlay) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->overlays, i);
	SLF->overlays[i] = overlay;
}

void ZkNpc_addOverlay(ZkNpc* slf, ZkString overlay) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->overlays.push_back(overlay);
}

ZkSize ZkNpc_getTalentCount(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->talents.size();
}

ZkNpcTalent* ZkNpc_getTalent(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->talents, i);
	return &SLF->talents[i];
}

void ZkNpc_clearTalents(ZkNpc* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->talents.clear();
}

void ZkNpc_removeTalent(ZkNpc* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->talents, i);
	SLF->talents.erase(SLF->talents.begin() + static_cast<long>(i));
}

void ZkNpc_setTalent(ZkNpc* slf, ZkSize i, ZkNpcTalent* talent) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, talent);
	ZKC_CHECK_LENV(SLF->talents, i);
	SLF->talents[i] = *talent;
}

void ZkNpc_addTalent(ZkNpc* slf, ZkNpcTalent* talent) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, talent);
	SLF->talents.push_back(*talent);
}

ZkSize ZkNpc_getItemCount(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->items.size();
}

ZkItem* ZkNpc_getItem(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->items, i);
	return &SLF->items[i];
}

void ZkNpc_clearItems(ZkNpc* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->items.clear();
}

void ZkNpc_removeItem(ZkNpc* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->items, i);
	SLF->items.erase(SLF->items.begin() + static_cast<long>(i));
}

void ZkNpc_setItem(ZkNpc* slf, ZkSize i, ZkItem* item) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, item);
	ZKC_CHECK_LENV(SLF->items, i);
	SLF->items[i] = *item;
}

void ZkNpc_addItem(ZkNpc* slf, ZkItem* item) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, item);
	SLF->items.push_back(*item);
}

ZkSize ZkNpc_getSlotCount(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->slots.size();
}

ZkNpcSlot* ZkNpc_getSlot(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->slots, i);
	return SLF->slots[i].get();
}

void ZkNpc_clearSlots(ZkNpc* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->slots.clear();
}

void ZkNpc_removeSlot(ZkNpc* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->slots, i);
	SLF->slots.erase(SLF->slots.begin() + static_cast<long>(i));
}

ZkNpcSlot* ZkNpc_addSlot(ZkNpc* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	SLF->slots.push_back(std::make_unique<ZkNpcSlot>());
	return SLF->slots.back().get();
}

ZkSize ZkNpc_getNewsCount(ZkNpc const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->news.size();
}

ZkNpcNews* ZkNpc_getNews(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->news, i);
	return SLF->news[i].get();
}

void ZkNpc_clearNews(ZkNpc* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->news.clear();
}

void ZkNpc_removeNews(ZkNpc* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->news, i);
	SLF->news.erase(SLF->news.begin() + static_cast<long>(i));
}

ZkNpcNews* ZkNpc_addNews(ZkNpc* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	SLF->news.push_back(std::make_unique<ZkNpcNews>());
	return SLF->news.back().get();
}

int ZkNpc_getProtection(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(zenkit::VNpc::protection_count, i);
	return SLF->protection[i];
}

void ZkNpc_setProtection(ZkNpc* slf, ZkSize i, int v) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(zenkit::VNpc::protection_count, i);
	SLF->protection[i] = v;
}

int ZkNpc_getAttribute(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(zenkit::VNpc::attribute_count, i);
	return SLF->attributes[i];
}

void ZkNpc_setAttribute(ZkNpc* slf, ZkSize i, int v) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(zenkit::VNpc::attribute_count, i);
	SLF->attributes[i] = v;
}

int ZkNpc_getHitChance(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(zenkit::VNpc::hcs_count, i);
	return SLF->hit_chance[i];
}

void ZkNpc_setHitChance(ZkNpc* slf, ZkSize i, int v) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(zenkit::VNpc::hcs_count, i);
	SLF->hit_chance[i] = v;
}

int ZkNpc_getMission(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(zenkit::VNpc::missions_count, i);
	return SLF->missions[i];
}

void ZkNpc_setMission(ZkNpc* slf, ZkSize i, int v) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(zenkit::VNpc::missions_count, i);
	SLF->missions[i] = v;
}

int const* ZkNpc_getAiVars(ZkNpc const* slf, ZkSize* len) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	*len = zenkit::VNpc::aivar_count;
	return SLF->aivar;
}

void ZkNpc_setAiVars(ZkNpc const* slf, int const* vars, ZkSize len) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, vars);

	if (len > zenkit::VNpc::aivar_count) {
		ZKC_LOG_WARN("ZkNpc_setAiVars(): too many aivars provided. truncating to 100 elements");
		len = zenkit::VNpc::aivar_count;
	}
	
	memcpy(SLF->aivar, vars, len * sizeof(*SLF->aivar));
}

ZkString ZkNpc_getPacked(ZkNpc const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(zenkit::VNpc::packed_count, i);
	return SLF->packed[i].c_str();
}

void ZkNpc_setPacked(ZkNpc const* slf, ZkSize i, ZkString v) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENAV(zenkit::VNpc::packed_count, i);
	SLF->packed[i] = v;
}

ZkNpcTalent* ZkNpcTalent_new(void) {
	ZKC_TRACE_FN();
	return new ZkNpcTalent(std::make_shared<zenkit::VNpc::Talent>());
}

void ZkNpcTalent_del(ZkNpcTalent* slf) {
	delete slf;
}

int ZkNpcTalent_getTalent(ZkNpcTalent const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->talent;
}

int ZkNpcTalent_getValue(ZkNpcTalent const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->value;
}

int ZkNpcTalent_getSkill(ZkNpcTalent const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->skill;
}

void ZkNpcTalent_setTalent(ZkNpcTalent* slf, int v) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->talent = v;
}

void ZkNpcTalent_setValue(ZkNpcTalent* slf, int v) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->value = v;
}

void ZkNpcTalent_setSkill(ZkNpcTalent* slf, int v) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->skill = v;
}

ZkBool ZkNpcSlot_getUsed(ZkNpcSlot const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->used;
}

ZkString ZkNpcSlot_getName(ZkNpcSlot const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkItem* ZkNpcSlot_getItem(ZkNpcSlot* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->item ? &slf->item : nullptr;
}

ZkBool ZkNpcSlot_getInInventory(ZkNpcSlot const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->in_inventory;
}

void ZkNpcSlot_setUsed(ZkNpcSlot* slf, ZkBool used) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->used = used;
}

void ZkNpcSlot_setName(ZkNpcSlot* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->name = name;
}

void ZkNpcSlot_setItem(ZkNpcSlot* slf, ZkItem* item) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->item = item ? *item : nullptr;
}

void ZkNpcSlot_setInInventory(ZkNpcSlot* slf, ZkBool inInventory) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->in_inventory = inInventory;
}

ZkBool ZkNpcNews_getTold(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->told;
}

float ZkNpcNews_getSpreadTime(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->spread_time;
}

ZkNpcNewsSpread ZkNpcNews_getSpreadType(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkNpcNewsSpread>(slf->spread_type);
}

ZkNpcNewsId ZkNpcNews_getNewsId(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkNpcNewsId>(slf->news_id);
}

ZkBool ZkNpcNews_getGossip(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->gossip;
}

ZkBool ZkNpcNews_getGuildVictim(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->guild_victim;
}

ZkString ZkNpcNews_getWitnessName(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->witness_name.c_str();
}

ZkString ZkNpcNews_getOffenderName(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->offender_name.c_str();
}

ZkString ZkNpcNews_getVictimName(ZkNpcNews const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->victim_name.c_str();
}

void ZkNpcNews_setTold(ZkNpcNews* slf, ZkBool told) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->told = told;
}

void ZkNpcNews_setSpreadTime(ZkNpcNews* slf, float spreadTime) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->spread_time = spreadTime;
}

void ZkNpcNews_setSpreadType(ZkNpcNews* slf, ZkNpcNewsSpread spreadType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->spread_type = static_cast<zenkit::VNpc::NewsSpread>(spreadType);
}

void ZkNpcNews_setNewsId(ZkNpcNews* slf, ZkNpcNewsId newsId) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->news_id = static_cast<zenkit::VNpc::NewsId>(newsId);
}

void ZkNpcNews_setGossip(ZkNpcNews* slf, ZkBool gossip) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->gossip = gossip;
}

void ZkNpcNews_setGuildVictim(ZkNpcNews* slf, ZkBool guildVictim) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->guild_victim = guildVictim;
}

void ZkNpcNews_setWitnessName(ZkNpcNews* slf, ZkString witnessName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->witness_name = witnessName;
}

void ZkNpcNews_setOffenderName(ZkNpcNews* slf, ZkString offenderName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->offender_name = offenderName;
}

void ZkNpcNews_setVictimName(ZkNpcNews* slf, ZkString victimName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->victim_name = victimName;
}
