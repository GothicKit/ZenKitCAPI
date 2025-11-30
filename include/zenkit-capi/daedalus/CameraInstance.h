#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkCameraInstance = ZkSharedHandle<zenkit::ICamera>;
#else
typedef struct ZkInternal_CameraInstance ZkCameraInstance;
#endif

ZKC_API float ZkCameraInstance_getBestRange(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setBestRange(ZkCameraInstance* slf, float bestRange);
ZKC_API float ZkCameraInstance_getMinRange(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setMinRange(ZkCameraInstance* slf, float minRange);
ZKC_API float ZkCameraInstance_getMaxRange(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setMaxRange(ZkCameraInstance* slf, float maxRange);
ZKC_API float ZkCameraInstance_getBestElevation(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setBestElevation(ZkCameraInstance* slf, float bestElevation);
ZKC_API float ZkCameraInstance_getMinElevation(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setMinElevation(ZkCameraInstance* slf, float minElevation);
ZKC_API float ZkCameraInstance_getMaxElevation(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setMaxElevation(ZkCameraInstance* slf, float maxElevation);
ZKC_API float ZkCameraInstance_getBestAzimuth(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setBestAzimuth(ZkCameraInstance* slf, float bestAzimuth);
ZKC_API float ZkCameraInstance_getMinAzimuth(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setMinAzimuth(ZkCameraInstance* slf, float minAzimuth);
ZKC_API float ZkCameraInstance_getMaxAzimuth(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setMaxAzimuth(ZkCameraInstance* slf, float maxAzimuth);
ZKC_API float ZkCameraInstance_getBestRotZ(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setBestRotZ(ZkCameraInstance* slf, float bestRotZ);
ZKC_API float ZkCameraInstance_getMinRotZ(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setMinRotZ(ZkCameraInstance* slf, float minRotZ);
ZKC_API float ZkCameraInstance_getMaxRotZ(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setMaxRotZ(ZkCameraInstance* slf, float maxRotZ);
ZKC_API float ZkCameraInstance_getRotOffsetX(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setRotOffsetX(ZkCameraInstance* slf, float rotOffsetX);
ZKC_API float ZkCameraInstance_getRotOffsetY(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setRotOffsetY(ZkCameraInstance* slf, float rotOffsetY);
ZKC_API float ZkCameraInstance_getRotOffsetZ(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setRotOffsetZ(ZkCameraInstance* slf, float rotOffsetZ);
ZKC_API float ZkCameraInstance_getTargetOffsetX(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setTargetOffsetX(ZkCameraInstance* slf, float targetOffsetX);
ZKC_API float ZkCameraInstance_getTargetOffsetY(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setTargetOffsetY(ZkCameraInstance* slf, float targetOffsetY);
ZKC_API float ZkCameraInstance_getTargetOffsetZ(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setTargetOffsetZ(ZkCameraInstance* slf, float targetOffsetZ);
ZKC_API float ZkCameraInstance_getVeloTrans(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setVeloTrans(ZkCameraInstance* slf, float veloTrans);
ZKC_API float ZkCameraInstance_getVeloRot(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setVeloRot(ZkCameraInstance* slf, float veloRot);
ZKC_API int32_t ZkCameraInstance_getTranslate(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setTranslate(ZkCameraInstance* slf, int32_t translate);
ZKC_API int32_t ZkCameraInstance_getRotate(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setRotate(ZkCameraInstance* slf, int32_t rotate);
ZKC_API int32_t ZkCameraInstance_getCollision(ZkCameraInstance const* slf);
ZKC_API void ZkCameraInstance_setCollision(ZkCameraInstance* slf, int32_t collision);
