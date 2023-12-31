// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "Stream.h"
#include "Vector.h"

#ifdef __cplusplus
	#include <zenkit/Material.hh>
using ZkMaterial = zenkit::Material;
#else
typedef struct ZkInternal_Material ZkMaterial;
#endif

typedef enum {
	ZkMaterialGroup_UNDEFINED = 0,
	ZkMaterialGroup_METAL = 1,
	ZkMaterialGroup_STONE = 2,
	ZkMaterialGroup_WOOD = 3,
	ZkMaterialGroup_EARTH = 4,
	ZkMaterialGroup_WATER = 5,
	ZkMaterialGroup_SNOW = 6,
} ZkMaterialGroup;

typedef enum {
	ZkAnimationMapping_NONE = 0,
	ZkAnimationMapping_LINEAR = 1,
} ZkAnimationMapping;

typedef enum {
	ZkWaveMode_NONE = 0,
	ZkWaveMode_GROUND_AMBIENT = 1,
	ZkWaveMode_GROUND = 2,
	ZkWaveMode_WALL_AMBIENT = 3,
	ZkWaveMode_WALL = 4,
	ZkWaveMode_ENVIRONMENT = 5,
	ZkWaveMode_WIND_AMBIENT = 6,
	ZkWaveMode_WIND = 7,
} ZkWaveMode;

typedef enum {
	ZkWaveSpeed_NONE = 0,
	ZkWaveSpeed_SLOW = 1,
	ZkWaveSpeed_NORMAL = 2,
	ZkWaveSpeed_FAST = 3,
} ZkWaveSpeed;

typedef enum {
	ZkAlphaFunction_DEFAULT = 0,
	ZkAlphaFunction_NONE = 1,
	ZkAlphaFunction_BLEND = 2,
	ZkAlphaFunction_ADD = 3,
	ZkAlphaFunction_SUBTRACT = 4,
	ZkAlphaFunction_MULTIPLY = 5,
	ZkAlphaFunction_MULTIPLY_ALT = 6,
} ZkAlphaFunction;

typedef ZkBool (*ZkMaterialEnumerator)(void* ctx, ZkMaterial const* material);

ZKC_API ZkMaterial* ZkMaterial_load(ZkRead* buf);
ZKC_API ZkMaterial* ZkMaterial_loadPath(ZkString path);
ZKC_API void ZkMaterial_del(ZkMaterial* slf);

ZKC_API ZkString ZkMaterial_getName(ZkMaterial const* slf);
ZKC_API ZkMaterialGroup ZkMaterial_getGroup(ZkMaterial const* slf);
ZKC_API ZkColor ZkMaterial_getColor(ZkMaterial const* slf);
ZKC_API float ZkMaterial_getSmoothAngle(ZkMaterial const* slf);
ZKC_API ZkString ZkMaterial_getTexture(ZkMaterial const* slf);
ZKC_API ZkVec2f ZkMaterial_getTextureScale(ZkMaterial const* slf);
ZKC_API float ZkMaterial_getTextureAnimationFps(ZkMaterial const* slf);
ZKC_API ZkAnimationMapping ZkMaterial_getTextureAnimationMapping(ZkMaterial const* slf);
ZKC_API ZkVec2f ZkMaterial_getTextureAnimationMappingDirection(ZkMaterial const* slf);
ZKC_API ZkBool ZkMaterial_getDisableCollision(ZkMaterial const* slf);
ZKC_API ZkBool ZkMaterial_getDisableLightmap(ZkMaterial const* slf);
ZKC_API ZkBool ZkMaterial_getDontCollapse(ZkMaterial const* slf);
ZKC_API ZkString ZkMaterial_getDetailObject(ZkMaterial const* slf);
ZKC_API float ZkMaterial_getDetailObjectScale(ZkMaterial const* slf);
ZKC_API ZkBool ZkMaterial_getForceOccluder(ZkMaterial const* slf);
ZKC_API ZkBool ZkMaterial_getEnvironmentMapping(ZkMaterial const* slf);
ZKC_API float ZkMaterial_getEnvironmentMappingStrength(ZkMaterial const* slf);
ZKC_API ZkWaveMode ZkMaterial_getWaveMode(ZkMaterial const* slf);
ZKC_API ZkWaveSpeed ZkMaterial_getWaveSpeed(ZkMaterial const* slf);
ZKC_API float ZkMaterial_getWaveAmplitude(ZkMaterial const* slf);
ZKC_API float ZkMaterial_getWaveGridSize(ZkMaterial const* slf);
ZKC_API ZkBool ZkMaterial_getIgnoreSun(ZkMaterial const* slf);
ZKC_API ZkAlphaFunction ZkMaterial_getAlphaFunction(ZkMaterial const* slf);
ZKC_API ZkVec2f ZkMaterial_getDefaultMapping(ZkMaterial const* slf);
