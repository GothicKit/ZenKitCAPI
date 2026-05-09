#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkEffectBaseInstance = ZkSharedHandle<zenkit::IEffectBase>;
#else
typedef struct ZkInternal_EffectBaseInstance ZkEffectBaseInstance;

#endif

ZKC_API ZkString ZkEffectBaseInstance_getVisNameS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setVisNameS(ZkEffectBaseInstance* slf, ZkString visNameS);
ZKC_API ZkString ZkEffectBaseInstance_getVisSizeS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setVisSizeS(ZkEffectBaseInstance* slf, ZkString visSizeS);
ZKC_API float ZkEffectBaseInstance_getVisAlpha(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setVisAlpha(ZkEffectBaseInstance* slf, float visAlpha);
ZKC_API ZkString ZkEffectBaseInstance_getVisAlphaBlendFuncS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setVisAlphaBlendFuncS(ZkEffectBaseInstance* slf, ZkString visAlphaBlendFuncS);
ZKC_API float ZkEffectBaseInstance_getVisTexAniFps(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setVisTexAniFps(ZkEffectBaseInstance* slf, float visTexAniFps);
ZKC_API int32_t ZkEffectBaseInstance_getVisTexAniIsLooping(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setVisTexAniIsLooping(ZkEffectBaseInstance* slf, int32_t visTexAniIsLooping);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjModeS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjModeS(ZkEffectBaseInstance* slf, ZkString emTrjModeS);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjOriginNode(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjOriginNode(ZkEffectBaseInstance* slf, ZkString emTrjOriginNode);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjTargetNode(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjTargetNode(ZkEffectBaseInstance* slf, ZkString emTrjTargetNode);
ZKC_API float ZkEffectBaseInstance_getEmTrjTargetRange(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjTargetRange(ZkEffectBaseInstance* slf, float emTrjTargetRange);
ZKC_API float ZkEffectBaseInstance_getEmTrjTargetAzi(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjTargetAzi(ZkEffectBaseInstance* slf, float emTrjTargetAzi);
ZKC_API float ZkEffectBaseInstance_getEmTrjTargetElev(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjTargetElev(ZkEffectBaseInstance* slf, float emTrjTargetElev);
ZKC_API int32_t ZkEffectBaseInstance_getEmTrjNumKeys(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjNumKeys(ZkEffectBaseInstance* slf, int32_t emTrjNumKeys);
ZKC_API int32_t ZkEffectBaseInstance_getEmTrjNumKeysVar(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjNumKeysVar(ZkEffectBaseInstance* slf, int32_t emTrjNumKeysVar);
ZKC_API float ZkEffectBaseInstance_getEmTrjAngleElevVar(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjAngleElevVar(ZkEffectBaseInstance* slf, float emTrjAngleElevVar);
ZKC_API float ZkEffectBaseInstance_getEmTrjAngleHeadVar(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjAngleHeadVar(ZkEffectBaseInstance* slf, float emTrjAngleHeadVar);
ZKC_API float ZkEffectBaseInstance_getEmTrjKeyDistVar(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjKeyDistVar(ZkEffectBaseInstance* slf, float emTrjKeyDistVar);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjLoopModeS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjLoopModeS(ZkEffectBaseInstance* slf, ZkString emTrjLoopModeS);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjEaseFuncS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjEaseFuncS(ZkEffectBaseInstance* slf, ZkString emTrjEaseFuncS);
ZKC_API float ZkEffectBaseInstance_getEmTrjEaseVel(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjEaseVel(ZkEffectBaseInstance* slf, float emTrjEaseVel);
ZKC_API float ZkEffectBaseInstance_getEmTrjDynUpdateDelay(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjDynUpdateDelay(ZkEffectBaseInstance* slf, float emTrjDynUpdateDelay);
ZKC_API int32_t ZkEffectBaseInstance_getEmTrjDynUpdateTargetOnly(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmTrjDynUpdateTargetOnly(ZkEffectBaseInstance* slf,
                                                              int32_t emTrjDynUpdateTargetOnly);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCreateS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxCreateS(ZkEffectBaseInstance* slf, ZkString emFxCreateS);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxInvestOriginS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxInvestOriginS(ZkEffectBaseInstance* slf, ZkString emFxInvestOriginS);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxInvestTargetS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxInvestTargetS(ZkEffectBaseInstance* slf, ZkString emFxInvestTargetS);
ZKC_API float ZkEffectBaseInstance_getEmFxTriggerDelay(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxTriggerDelay(ZkEffectBaseInstance* slf, float emFxTriggerDelay);
ZKC_API int32_t ZkEffectBaseInstance_getEmFxCreateDownTrj(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxCreateDownTrj(ZkEffectBaseInstance* slf, int32_t emFxCreateDownTrj);
ZKC_API ZkString ZkEffectBaseInstance_getEmActionCollDynS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmActionCollDynS(ZkEffectBaseInstance* slf, ZkString emActionCollDynS);
ZKC_API ZkString ZkEffectBaseInstance_getEmActionCollStatS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmActionCollStatS(ZkEffectBaseInstance* slf, ZkString emActionCollStatS);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollStatS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxCollStatS(ZkEffectBaseInstance* slf, ZkString emFxCollStatS);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollDynS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxCollDynS(ZkEffectBaseInstance* slf, ZkString emFxCollDynS);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollStatAlignS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxCollStatAlignS(ZkEffectBaseInstance* slf, ZkString emFxCollStatAlignS);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollDynAlignS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxCollDynAlignS(ZkEffectBaseInstance* slf, ZkString emFxCollDynAlignS);
ZKC_API float ZkEffectBaseInstance_getEmFxLifespan(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxLifespan(ZkEffectBaseInstance* slf, float emFxLifespan);
ZKC_API int32_t ZkEffectBaseInstance_getEmCheckCollision(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmCheckCollision(ZkEffectBaseInstance* slf, int32_t emCheckCollision);
ZKC_API int32_t ZkEffectBaseInstance_getEmAdjustShpToOrigin(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmAdjustShpToOrigin(ZkEffectBaseInstance* slf, int32_t emAdjustShpToOrigin);
ZKC_API float ZkEffectBaseInstance_getEmInvestNextKeyDuration(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmInvestNextKeyDuration(ZkEffectBaseInstance* slf, float emInvestNextKeyDuration);
ZKC_API float ZkEffectBaseInstance_getEmFlyGravity(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFlyGravity(ZkEffectBaseInstance* slf, float emFlyGravity);
ZKC_API ZkString ZkEffectBaseInstance_getEmSelfRotVelS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmSelfRotVelS(ZkEffectBaseInstance* slf, ZkString emSelfRotVelS);
ZKC_API ZkString ZkEffectBaseInstance_getLightPresetName(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setLightPresetName(ZkEffectBaseInstance* slf, ZkString lightPresetName);
ZKC_API ZkString ZkEffectBaseInstance_getSfxId(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setSfxId(ZkEffectBaseInstance* slf, ZkString sfxId);
ZKC_API int32_t ZkEffectBaseInstance_getSfxIsAmbient(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setSfxIsAmbient(ZkEffectBaseInstance* slf, int32_t sfxIsAmbient);
ZKC_API int32_t ZkEffectBaseInstance_getSendAssessMagic(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setSendAssessMagic(ZkEffectBaseInstance* slf, int32_t sendAssessMagic);
ZKC_API float ZkEffectBaseInstance_getSecsPerDamage(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setSecsPerDamage(ZkEffectBaseInstance* slf, float secsPerDamage);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollDynPercS(ZkEffectBaseInstance const* slf);
ZKC_API void ZkEffectBaseInstance_setEmFxCollDynPercS(ZkEffectBaseInstance* slf, ZkString emFxCollDynPercS);
ZKC_API ZkString ZkEffectBaseInstance_getUserString(ZkEffectBaseInstance const* slf, ZkSize i);
ZKC_API void ZkEffectBaseInstance_setUserString(ZkEffectBaseInstance* slf, ZkSize i, ZkString userString);
