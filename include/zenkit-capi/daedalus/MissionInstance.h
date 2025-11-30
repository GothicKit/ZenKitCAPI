// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkMissionInstance = ZkSharedHandle<zenkit::IMission>;
#else
typedef struct ZkInternal_MissionInstance ZkMissionInstance;
#endif

ZKC_API ZkString ZkMissionInstance_getName(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setName(ZkMissionInstance* slf, ZkString name);
ZKC_API ZkString ZkMissionInstance_getDescription(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setDescription(ZkMissionInstance* slf, ZkString description);
ZKC_API int32_t ZkMissionInstance_getDuration(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setDuration(ZkMissionInstance* slf, int32_t duration);
ZKC_API int32_t ZkMissionInstance_getImportant(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setImportant(ZkMissionInstance* slf, int32_t important);
ZKC_API int32_t ZkMissionInstance_getOfferConditions(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setOfferConditions(ZkMissionInstance* slf, int32_t offerConditions);
ZKC_API int32_t ZkMissionInstance_getOffer(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setOffer(ZkMissionInstance* slf, int32_t offer);
ZKC_API int32_t ZkMissionInstance_getSuccessConditions(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setSuccessConditions(ZkMissionInstance* slf, int32_t successConditions);
ZKC_API int32_t ZkMissionInstance_getSuccess(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setSuccess(ZkMissionInstance* slf, int32_t success);
ZKC_API int32_t ZkMissionInstance_getFailureConditions(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setFailureConditions(ZkMissionInstance* slf, int32_t failureConditions);
ZKC_API int32_t ZkMissionInstance_getFailure(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setFailure(ZkMissionInstance* slf, int32_t failure);
ZKC_API int32_t ZkMissionInstance_getObsoleteConditions(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setObsoleteConditions(ZkMissionInstance* slf, int32_t obsoleteConditions);
ZKC_API int32_t ZkMissionInstance_getObsolete(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setObsolete(ZkMissionInstance* slf, int32_t obsolete);
ZKC_API int32_t ZkMissionInstance_getRunning(ZkMissionInstance const* slf);
ZKC_API void ZkMissionInstance_setRunning(ZkMissionInstance* slf, int32_t running);
