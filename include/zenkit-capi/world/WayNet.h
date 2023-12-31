// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/world/WayNet.hh>
using ZkWayNet = zenkit::WayNet;
using ZkWayPoint = zenkit::WayPoint;
using ZkWayEdge = zenkit::WayEdge;
#else
typedef struct ZkInternal_WayNet ZkWayNet;
typedef struct ZkInternal_WayPoint ZkWayPoint;

typedef struct {
	uint32_t a, b;
} ZkWayEdge;
#endif

typedef ZkBool (*ZkWayPointEnumerator)(void* ctx, ZkWayPoint const* point);

ZKC_API ZkWayEdge const* ZkWayNet_getEdges(ZkWayNet const* slf, ZkSize* count);

ZKC_API ZkSize ZkWayNet_getPointCount(ZkWayNet const* slf);
ZKC_API ZkWayPoint const* ZkWayNet_getPoint(ZkWayNet const* slf, ZkSize i);
ZKC_API void ZkWayNet_enumeratePoints(ZkWayNet const* slf, ZkWayPointEnumerator cb, void* ctx);

ZKC_API ZkString ZkWayPoint_getName(ZkWayPoint const* slf);
ZKC_API int32_t ZkWayPoint_getWaterDepth(ZkWayPoint const* slf);
ZKC_API ZkBool ZkWayPoint_getUnderWater(ZkWayPoint const* slf);
ZKC_API ZkVec3f ZkWayPoint_getPosition(ZkWayPoint const* slf);
ZKC_API ZkVec3f ZkWayPoint_getDirection(ZkWayPoint const* slf);
ZKC_API ZkBool ZkWayPoint_getFreePoint(ZkWayPoint const* slf);
