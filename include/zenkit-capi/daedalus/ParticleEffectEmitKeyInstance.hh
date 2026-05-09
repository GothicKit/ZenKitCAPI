#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkParticleEffectEmitKeyInstance = ZkSharedHandle<zenkit::IParticleEffectEmitKey>;
#else
typedef struct ZkInternal_ParticleEffectEmitKeyInstance ZkParticleEffectEmitKeyInstance;
#endif

ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getVisNameS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setVisNameS(ZkParticleEffectEmitKeyInstance* slf, ZkString visNameS);
ZKC_API float ZkParticleEffectEmitKeyInstance_getVisSizeScale(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setVisSizeScale(ZkParticleEffectEmitKeyInstance* slf, float visSizeScale);
ZKC_API float ZkParticleEffectEmitKeyInstance_getScaleDuration(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setScaleDuration(ZkParticleEffectEmitKeyInstance* slf,
                                                              float scaleDuration);
ZKC_API float ZkParticleEffectEmitKeyInstance_getPfxPpsValue(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxPpsValue(ZkParticleEffectEmitKeyInstance* slf, float pfxPpsValue);
ZKC_API int32_t ZkParticleEffectEmitKeyInstance_getPfxPpsIsSmoothChg(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxPpsIsSmoothChg(ZkParticleEffectEmitKeyInstance* slf,
                                                                  int32_t pfxPpsIsSmoothChg);
ZKC_API int32_t ZkParticleEffectEmitKeyInstance_getPfxPpsIsLoopingChg(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxPpsIsLoopingChg(ZkParticleEffectEmitKeyInstance* slf,
                                                                   int32_t pfxPpsIsLoopingChg);
ZKC_API float ZkParticleEffectEmitKeyInstance_getPfxScTime(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxScTime(ZkParticleEffectEmitKeyInstance* slf, float pfxScTime);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getPfxFlyGravityS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxFlyGravityS(ZkParticleEffectEmitKeyInstance* slf,
                                                               ZkString pfxFlyGravityS);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getPfxShpDimS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxShpDimS(ZkParticleEffectEmitKeyInstance* slf, ZkString pfxShpDimS);
ZKC_API int32_t ZkParticleEffectEmitKeyInstance_getPfxShpIsVolumeChg(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxShpIsVolumeChg(ZkParticleEffectEmitKeyInstance* slf,
                                                                  int32_t pfxShpIsVolumeChg);
ZKC_API float ZkParticleEffectEmitKeyInstance_getPfxShpScaleFps(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxShpScaleFps(ZkParticleEffectEmitKeyInstance* slf,
                                                               float pfxShpScaleFps);
ZKC_API float ZkParticleEffectEmitKeyInstance_getPfxShpDistribWalksPeed(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxShpDistribWalksPeed(ZkParticleEffectEmitKeyInstance* slf,
                                                                       float pfxShpDistribWalksPeed);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getPfxShpOffsetVecS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxShpOffsetVecS(ZkParticleEffectEmitKeyInstance* slf,
                                                                 ZkString pfxShpOffsetVecS);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getPfxShpDistribTypeS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxShpDistribTypeS(ZkParticleEffectEmitKeyInstance* slf,
                                                                   ZkString pfxShpDistribTypeS);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxDirModeS(ZkParticleEffectEmitKeyInstance* slf, ZkString pfxDirModeS);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getPfxDirForS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxDirForS(ZkParticleEffectEmitKeyInstance* slf, ZkString pfxDirForS);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeTargetForS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxDirModeTargetForS(ZkParticleEffectEmitKeyInstance* slf,
                                                                     ZkString pfxDirModeTargetForS);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeTargetPosS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxDirModeTargetPosS(ZkParticleEffectEmitKeyInstance* slf,
                                                                     ZkString pfxDirModeTargetPosS);
ZKC_API float ZkParticleEffectEmitKeyInstance_getPfxVelAvg(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxVelAvg(ZkParticleEffectEmitKeyInstance* slf, float pfxVelAvg);
ZKC_API float ZkParticleEffectEmitKeyInstance_getPfxLspPartAvg(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxLspPartAvg(ZkParticleEffectEmitKeyInstance* slf,
                                                              float pfxLspPartAvg);
ZKC_API float ZkParticleEffectEmitKeyInstance_getPfxVisAlphaStart(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setPfxVisAlphaStart(ZkParticleEffectEmitKeyInstance* slf,
                                                                 float pfxVisAlphaStart);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getLightPresetName(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setLightPresetName(ZkParticleEffectEmitKeyInstance* slf,
                                                                ZkString lightPresetName);
ZKC_API float ZkParticleEffectEmitKeyInstance_getLightRange(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setLightRange(ZkParticleEffectEmitKeyInstance* slf, float lightRange);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getSfxId(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setSfxId(ZkParticleEffectEmitKeyInstance* slf, ZkString sfxId);
ZKC_API int32_t ZkParticleEffectEmitKeyInstance_getSfxIsAmbient(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setSfxIsAmbient(ZkParticleEffectEmitKeyInstance* slf,
                                                             int32_t sfxIsAmbient);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getEmCreateFxId(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setEmCreateFxId(ZkParticleEffectEmitKeyInstance* slf,
                                                             ZkString emCreateFxId);
ZKC_API float ZkParticleEffectEmitKeyInstance_getEmFlyGravity(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setEmFlyGravity(ZkParticleEffectEmitKeyInstance* slf, float emFlyGravity);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getEmSelfRotVelS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setEmSelfRotVelS(ZkParticleEffectEmitKeyInstance* slf,
                                                              ZkString emSelfRotVelS);
ZKC_API ZkString ZkParticleEffectEmitKeyInstance_getEmTrjModeS(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setEmTrjModeS(ZkParticleEffectEmitKeyInstance* slf, ZkString emTrjModeS);
ZKC_API float ZkParticleEffectEmitKeyInstance_getEmTrjEaseVel(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setEmTrjEaseVel(ZkParticleEffectEmitKeyInstance* slf, float emTrjEaseVel);
ZKC_API int32_t ZkParticleEffectEmitKeyInstance_getEmCheckCollision(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setEmCheckCollision(ZkParticleEffectEmitKeyInstance* slf,
                                                                 int32_t emCheckCollision);
ZKC_API float ZkParticleEffectEmitKeyInstance_getEmFxLifespan(ZkParticleEffectEmitKeyInstance const* slf);
ZKC_API void ZkParticleEffectEmitKeyInstance_setEmFxLifespan(ZkParticleEffectEmitKeyInstance* slf, float emFxLifespan);
