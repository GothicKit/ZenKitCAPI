// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/world/WayNet.h"

#include "../Internal.hh"

ZkSize ZkWayNet_getEdgeCount(ZkWayNet const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->edges.size();
}

ZkWayEdge const* ZkWayNet_getEdge(ZkWayNet const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->edges, i);
	return &slf->edges[i];
}

void ZkWayNet_enumerateEdges(ZkWayNet const* slf, ZkWayEdgeEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& edge : slf->edges) {
		if (cb(ctx, &edge)) break;
	}
}

ZkSize ZkWayNet_getPointCount(ZkWayNet const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->points.size();
}

ZkWayPoint const* ZkWayNet_getPoint(ZkWayNet const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->points, i);
	return &slf->points[i];
}

void ZkWayNet_enumeratePoints(ZkWayNet const* slf, ZkWayPointEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& point : slf->points) {
		if (cb(ctx, &point)) break;
	}
}

ZkString ZkWayPoint_getName(ZkWayPoint const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->name.c_str();
}

int32_t ZkWayPoint_getWaterDepth(ZkWayPoint const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->water_depth;
}

ZkBool ZkWayPoint_getUnderWater(ZkWayPoint const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->under_water;
}

ZkVec3f ZkWayPoint_getPosition(ZkWayPoint const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->position;
}

ZkVec3f ZkWayPoint_getDirection(ZkWayPoint const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->direction;
}

ZkBool ZkWayPoint_getFreePoint(ZkWayPoint const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->free_point;
}

ZkWayPoint const* ZkWayEdge_getStartPoint(ZkWayEdge const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->first;
}

ZkWayPoint const* ZkWayEdge_getEndPoint(ZkWayEdge const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->second;
}
