#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkParticleEffectEmitKeyInstance = zenkit::IParticleEffectEmitKey;
#else
typedef struct ZkInternal_ParticleEffectEmitKeyInstance ZkParticleEffectEmitKeyInstance;
#endif

CZK_API ZkString ZkParticleEffectEmitKeyInstance_getVisNameS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getVisSizeScale(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getScaleDuration(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getPfxPpsValue(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API int32_t ZkParticleEffectEmitKeyInstance_getPfxPpsIsSmoothChg(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API int32_t ZkParticleEffectEmitKeyInstance_getPfxPpsIsLoopingChg(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getPfxScTime(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getPfxFlyGravityS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getPfxShpDimS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API int32_t ZkParticleEffectEmitKeyInstance_getPfxShpIsVolumeChg(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getPfxShpScaleFps(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getPfxShpDistribWalksPeed(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getPfxShpOffsetVecS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getPfxShpDistribTypeS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getPfxDirForS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeTargetForS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeTargetPosS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getPfxVelAvg(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getPfxLspPartAvg(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getPfxVisAlphaStart(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getLightPresetName(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getLightRange(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getSfxId(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API int32_t ZkParticleEffectEmitKeyInstance_getSfxIsAmbient(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getEmCreateFxId(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getEmFlyGravity(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getEmSelfRotVelS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API ZkString ZkParticleEffectEmitKeyInstance_getEmTrjModeS(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getEmTrjEaseVel(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API int32_t ZkParticleEffectEmitKeyInstance_getEmCheckCollision(ZkParticleEffectEmitKeyInstance const* slf);
CZK_API float ZkParticleEffectEmitKeyInstance_getEmFxLifespan(ZkParticleEffectEmitKeyInstance const* slf);