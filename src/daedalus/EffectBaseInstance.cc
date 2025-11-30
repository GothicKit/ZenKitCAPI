#include "zenkit-capi/daedalus/EffectBaseInstance.hh"

#include "../Internal.hh"

ZkString ZkEffectBaseInstance_getVisNameS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vis_name_s.c_str();
}

void ZkEffectBaseInstance_setVisNameS(ZkEffectBaseInstance* slf, ZkString visNameS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vis_name_s = visNameS;
}

ZkString ZkEffectBaseInstance_getVisSizeS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vis_size_s.c_str();
}

void ZkEffectBaseInstance_setVisSizeS(ZkEffectBaseInstance* slf, ZkString visSizeS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vis_size_s = visSizeS;
}

float ZkEffectBaseInstance_getVisAlpha(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vis_alpha;
}

void ZkEffectBaseInstance_setVisAlpha(ZkEffectBaseInstance* slf, float visAlpha) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vis_alpha = visAlpha;
}

ZkString ZkEffectBaseInstance_getVisAlphaBlendFuncS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vis_alpha_blend_func_s.c_str();
}

void ZkEffectBaseInstance_setVisAlphaBlendFuncS(ZkEffectBaseInstance* slf, ZkString visAlphaBlendFuncS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vis_alpha_blend_func_s = visAlphaBlendFuncS;
}

float ZkEffectBaseInstance_getVisTexAniFps(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vis_tex_ani_fps;
}

void ZkEffectBaseInstance_setVisTexAniFps(ZkEffectBaseInstance* slf, float visTexAniFps) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vis_tex_ani_fps = visTexAniFps;
}

int32_t ZkEffectBaseInstance_getVisTexAniIsLooping(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vis_tex_ani_is_looping;
}

void ZkEffectBaseInstance_setVisTexAniIsLooping(ZkEffectBaseInstance* slf, int32_t visTexAniIsLooping) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vis_tex_ani_is_looping = visTexAniIsLooping;
}

ZkString ZkEffectBaseInstance_getEmTrjModeS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_mode_s.c_str();
}

void ZkEffectBaseInstance_setEmTrjModeS(ZkEffectBaseInstance* slf, ZkString emTrjModeS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_mode_s = emTrjModeS;
}

ZkString ZkEffectBaseInstance_getEmTrjOriginNode(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_origin_node.c_str();
}

void ZkEffectBaseInstance_setEmTrjOriginNode(ZkEffectBaseInstance* slf, ZkString emTrjOriginNode) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_origin_node = emTrjOriginNode;
}

ZkString ZkEffectBaseInstance_getEmTrjTargetNode(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_target_node.c_str();
}

void ZkEffectBaseInstance_setEmTrjTargetNode(ZkEffectBaseInstance* slf, ZkString emTrjTargetNode) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_target_node = emTrjTargetNode;
}

float ZkEffectBaseInstance_getEmTrjTargetRange(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_target_range;
}

void ZkEffectBaseInstance_setEmTrjTargetRange(ZkEffectBaseInstance* slf, float emTrjTargetRange) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_target_range = emTrjTargetRange;
}

float ZkEffectBaseInstance_getEmTrjTargetAzi(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_target_azi;
}

void ZkEffectBaseInstance_setEmTrjTargetAzi(ZkEffectBaseInstance* slf, float emTrjTargetAzi) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_target_azi = emTrjTargetAzi;
}

float ZkEffectBaseInstance_getEmTrjTargetElev(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_target_elev;
}

void ZkEffectBaseInstance_setEmTrjTargetElev(ZkEffectBaseInstance* slf, float emTrjTargetElev) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_target_elev = emTrjTargetElev;
}

int32_t ZkEffectBaseInstance_getEmTrjNumKeys(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_num_keys;
}

void ZkEffectBaseInstance_setEmTrjNumKeys(ZkEffectBaseInstance* slf, int32_t emTrjNumKeys) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_num_keys = emTrjNumKeys;
}

int32_t ZkEffectBaseInstance_getEmTrjNumKeysVar(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_num_keys_var;
}

void ZkEffectBaseInstance_setEmTrjNumKeysVar(ZkEffectBaseInstance* slf, int32_t emTrjNumKeysVar) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_num_keys_var = emTrjNumKeysVar;
}

float ZkEffectBaseInstance_getEmTrjAngleElevVar(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_angle_elev_var;
}

void ZkEffectBaseInstance_setEmTrjAngleElevVar(ZkEffectBaseInstance* slf, float emTrjAngleElevVar) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_angle_elev_var = emTrjAngleElevVar;
}

float ZkEffectBaseInstance_getEmTrjAngleHeadVar(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_angle_head_var;
}

void ZkEffectBaseInstance_setEmTrjAngleHeadVar(ZkEffectBaseInstance* slf, float emTrjAngleHeadVar) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_angle_head_var = emTrjAngleHeadVar;
}

float ZkEffectBaseInstance_getEmTrjKeyDistVar(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_key_dist_var;
}

void ZkEffectBaseInstance_setEmTrjKeyDistVar(ZkEffectBaseInstance* slf, float emTrjKeyDistVar) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_key_dist_var = emTrjKeyDistVar;
}

ZkString ZkEffectBaseInstance_getEmTrjLoopModeS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_loop_mode_s.c_str();
}

void ZkEffectBaseInstance_setEmTrjLoopModeS(ZkEffectBaseInstance* slf, ZkString emTrjLoopModeS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_loop_mode_s = emTrjLoopModeS;
}

ZkString ZkEffectBaseInstance_getEmTrjEaseFuncS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_ease_func_s.c_str();
}

void ZkEffectBaseInstance_setEmTrjEaseFuncS(ZkEffectBaseInstance* slf, ZkString emTrjEaseFuncS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_ease_func_s = emTrjEaseFuncS;
}

float ZkEffectBaseInstance_getEmTrjEaseVel(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_ease_vel;
}

void ZkEffectBaseInstance_setEmTrjEaseVel(ZkEffectBaseInstance* slf, float emTrjEaseVel) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_ease_vel = emTrjEaseVel;
}

float ZkEffectBaseInstance_getEmTrjDynUpdateDelay(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_dyn_update_delay;
}

void ZkEffectBaseInstance_setEmTrjDynUpdateDelay(ZkEffectBaseInstance* slf, float emTrjDynUpdateDelay) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_dyn_update_delay = emTrjDynUpdateDelay;
}

int32_t ZkEffectBaseInstance_getEmTrjDynUpdateTargetOnly(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_trj_dyn_update_target_only;
}

void ZkEffectBaseInstance_setEmTrjDynUpdateTargetOnly(ZkEffectBaseInstance* slf, int32_t emTrjDynUpdateTargetOnly) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_trj_dyn_update_target_only = emTrjDynUpdateTargetOnly;
}

ZkString ZkEffectBaseInstance_getEmFxCreateS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_create_s.c_str();
}

void ZkEffectBaseInstance_setEmFxCreateS(ZkEffectBaseInstance* slf, ZkString emFxCreateS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_create_s = emFxCreateS;
}

ZkString ZkEffectBaseInstance_getEmFxInvestOriginS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_invest_origin_s.c_str();
}

void ZkEffectBaseInstance_setEmFxInvestOriginS(ZkEffectBaseInstance* slf, ZkString emFxInvestOriginS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_invest_origin_s = emFxInvestOriginS;
}

ZkString ZkEffectBaseInstance_getEmFxInvestTargetS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_invest_target_s.c_str();
}

void ZkEffectBaseInstance_setEmFxInvestTargetS(ZkEffectBaseInstance* slf, ZkString emFxInvestTargetS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_invest_target_s = emFxInvestTargetS;
}

float ZkEffectBaseInstance_getEmFxTriggerDelay(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_trigger_delay;
}

void ZkEffectBaseInstance_setEmFxTriggerDelay(ZkEffectBaseInstance* slf, float emFxTriggerDelay) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_trigger_delay = emFxTriggerDelay;
}

int32_t ZkEffectBaseInstance_getEmFxCreateDownTrj(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_create_down_trj;
}

void ZkEffectBaseInstance_setEmFxCreateDownTrj(ZkEffectBaseInstance* slf, int32_t emFxCreateDownTrj) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_create_down_trj = emFxCreateDownTrj;
}

ZkString ZkEffectBaseInstance_getEmActionCollDynS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_action_coll_dyn_s.c_str();
}

void ZkEffectBaseInstance_setEmActionCollDynS(ZkEffectBaseInstance* slf, ZkString emActionCollDynS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_action_coll_dyn_s = emActionCollDynS;
}

ZkString ZkEffectBaseInstance_getEmActionCollStatS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_action_coll_stat_s.c_str();
}

void ZkEffectBaseInstance_setEmActionCollStatS(ZkEffectBaseInstance* slf, ZkString emActionCollStatS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_action_coll_stat_s = emActionCollStatS;
}

ZkString ZkEffectBaseInstance_getEmFxCollStatS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_coll_stat_s.c_str();
}

void ZkEffectBaseInstance_setEmFxCollStatS(ZkEffectBaseInstance* slf, ZkString emFxCollStatS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_coll_stat_s = emFxCollStatS;
}

ZkString ZkEffectBaseInstance_getEmFxCollDynS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_coll_dyn_s.c_str();
}

void ZkEffectBaseInstance_setEmFxCollDynS(ZkEffectBaseInstance* slf, ZkString emFxCollDynS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_coll_dyn_s = emFxCollDynS;
}

ZkString ZkEffectBaseInstance_getEmFxCollStatAlignS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_coll_stat_align_s.c_str();
}

void ZkEffectBaseInstance_setEmFxCollStatAlignS(ZkEffectBaseInstance* slf, ZkString emFxCollStatAlignS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_coll_stat_align_s = emFxCollStatAlignS;
}

ZkString ZkEffectBaseInstance_getEmFxCollDynAlignS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_coll_dyn_align_s.c_str();
}

void ZkEffectBaseInstance_setEmFxCollDynAlignS(ZkEffectBaseInstance* slf, ZkString emFxCollDynAlignS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_coll_dyn_align_s = emFxCollDynAlignS;
}

float ZkEffectBaseInstance_getEmFxLifespan(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_lifespan;
}

void ZkEffectBaseInstance_setEmFxLifespan(ZkEffectBaseInstance* slf, float emFxLifespan) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_lifespan = emFxLifespan;
}

int32_t ZkEffectBaseInstance_getEmCheckCollision(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_check_collision;
}

void ZkEffectBaseInstance_setEmCheckCollision(ZkEffectBaseInstance* slf, int32_t emCheckCollision) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_check_collision = emCheckCollision;
}

int32_t ZkEffectBaseInstance_getEmAdjustShpToOrigin(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_adjust_shp_to_origin;
}

void ZkEffectBaseInstance_setEmAdjustShpToOrigin(ZkEffectBaseInstance* slf, int32_t emAdjustShpToOrigin) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_adjust_shp_to_origin = emAdjustShpToOrigin;
}

float ZkEffectBaseInstance_getEmInvestNextKeyDuration(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_invest_next_key_duration;
}

void ZkEffectBaseInstance_setEmInvestNextKeyDuration(ZkEffectBaseInstance* slf, float emInvestNextKeyDuration) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_invest_next_key_duration = emInvestNextKeyDuration;
}

float ZkEffectBaseInstance_getEmFlyGravity(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fly_gravity;
}

void ZkEffectBaseInstance_setEmFlyGravity(ZkEffectBaseInstance* slf, float emFlyGravity) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fly_gravity = emFlyGravity;
}

ZkString ZkEffectBaseInstance_getEmSelfRotVelS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_self_rot_vel_s.c_str();
}

void ZkEffectBaseInstance_setEmSelfRotVelS(ZkEffectBaseInstance* slf, ZkString emSelfRotVelS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_self_rot_vel_s = emSelfRotVelS;
}

ZkString ZkEffectBaseInstance_getLightPresetName(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->light_preset_name.c_str();
}

void ZkEffectBaseInstance_setLightPresetName(ZkEffectBaseInstance* slf, ZkString lightPresetName) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->light_preset_name = lightPresetName;
}

ZkString ZkEffectBaseInstance_getSfxId(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->sfx_id.c_str();
}

void ZkEffectBaseInstance_setSfxId(ZkEffectBaseInstance* slf, ZkString sfxId) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->sfx_id = sfxId;
}

int32_t ZkEffectBaseInstance_getSfxIsAmbient(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->sfx_is_ambient;
}

void ZkEffectBaseInstance_setSfxIsAmbient(ZkEffectBaseInstance* slf, int32_t sfxIsAmbient) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->sfx_is_ambient = sfxIsAmbient;
}

int32_t ZkEffectBaseInstance_getSendAssessMagic(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->send_assess_magic;
}

void ZkEffectBaseInstance_setSendAssessMagic(ZkEffectBaseInstance* slf, int32_t sendAssessMagic) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->send_assess_magic = sendAssessMagic;
}

float ZkEffectBaseInstance_getSecsPerDamage(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->secs_per_damage;
}

void ZkEffectBaseInstance_setSecsPerDamage(ZkEffectBaseInstance* slf, float secsPerDamage) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->secs_per_damage = secsPerDamage;
}

ZkString ZkEffectBaseInstance_getEmFxCollDynPercS(ZkEffectBaseInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->em_fx_coll_dyn_perc_s.c_str();
}

void ZkEffectBaseInstance_setEmFxCollDynPercS(ZkEffectBaseInstance* slf, ZkString emFxCollDynPercS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->em_fx_coll_dyn_perc_s = emFxCollDynPercS;
}

ZkString ZkEffectBaseInstance_getUserString(ZkEffectBaseInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->user_string[i].c_str();
}

void ZkEffectBaseInstance_setUserString(ZkEffectBaseInstance* slf, ZkSize i, ZkString userString) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->user_string[i] = userString;
}
