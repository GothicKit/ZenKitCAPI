#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkParticleEffectInstance = zenkit::IParticleEffect;
#else
typedef struct ZkInternal_ParticleEffectInstance ZkParticleEffectInstance;
#endif

CZK_API float ZkParticleEffectInstance_getPpsValue(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getPpsScaleKeysS(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getPpsIsLooping(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getPpsIsSmooth(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getPpsFps(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getPpsCreateEmS(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getPpsCreateEmDelay(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getShpTypeS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getShpForS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getShpOffsetVecS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getShpDistribTypeS(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getShpDistribWalkSpeed(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getShpIsVolume(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getShpDimS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getShpMeshS(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getShpMeshRenderB(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getShpScaleKeysS(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getShpScaleIsLooping(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getShpScaleIsSmooth(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getShpScaleFps(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getDirModeS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getDirForS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getDirModeTargetForS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getDirModeTargetPosS(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getDirAngleHead(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getDirAngleHeadVar(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getDirAngleElev(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getDirAngleElevVar(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getVelAvg(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getVelVar(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getLspPartAvg(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getLspPartVar(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getFlyGravityS(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getFlyColldetB(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getVisNameS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getVisOrientationS(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getVisTexIsQuadpoly(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getVisTexAniFps(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getVisTexAniIsLooping(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getVisTexColorStartS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getVisTexColorEndS(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getVisSizeStartS(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getVisSizeEndScale(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getVisAlphaFuncS(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getVisAlphaStart(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getVisAlphaEnd(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getTrlFadeSpeed(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getTrlTextureS(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getTrlWidth(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getMrkFadesPeed(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getMrktExtureS(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getMrkSize(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getFlockMode(ZkParticleEffectInstance const* slf);
CZK_API float ZkParticleEffectInstance_getFlockStrength(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getUseEmittersFor(ZkParticleEffectInstance const* slf);
CZK_API ZkString ZkParticleEffectInstance_getTimeStartEndS(ZkParticleEffectInstance const* slf);
CZK_API int32_t ZkParticleEffectInstance_getMBiasAmbientPfx(ZkParticleEffectInstance const* slf);
