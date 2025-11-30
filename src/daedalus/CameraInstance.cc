#include "zenkit-capi/daedalus/CameraInstance.h"

#include "../Internal.hh"

float ZkCameraInstance_getBestRange(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->best_range;
}

void ZkCameraInstance_setBestRange(ZkCameraInstance* slf, float bestRange) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->best_range = bestRange;
}

float ZkCameraInstance_getMinRange(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->min_range;
}

void ZkCameraInstance_setMinRange(ZkCameraInstance* slf, float minRange) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->min_range = minRange;
}

float ZkCameraInstance_getMaxRange(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->max_range;
}

void ZkCameraInstance_setMaxRange(ZkCameraInstance* slf, float maxRange) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->max_range = maxRange;
}

float ZkCameraInstance_getBestElevation(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->best_elevation;
}

void ZkCameraInstance_setBestElevation(ZkCameraInstance* slf, float bestElevation) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->best_elevation = bestElevation;
}

float ZkCameraInstance_getMinElevation(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->min_elevation;
}

void ZkCameraInstance_setMinElevation(ZkCameraInstance* slf, float minElevation) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->min_elevation = minElevation;
}

float ZkCameraInstance_getMaxElevation(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->max_elevation;
}

void ZkCameraInstance_setMaxElevation(ZkCameraInstance* slf, float maxElevation) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->max_elevation = maxElevation;
}

float ZkCameraInstance_getBestAzimuth(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->best_azimuth;
}

void ZkCameraInstance_setBestAzimuth(ZkCameraInstance* slf, float bestAzimuth) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->best_azimuth = bestAzimuth;
}

float ZkCameraInstance_getMinAzimuth(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->min_azimuth;
}

void ZkCameraInstance_setMinAzimuth(ZkCameraInstance* slf, float minAzimuth) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->min_azimuth = minAzimuth;
}

float ZkCameraInstance_getMaxAzimuth(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->max_azimuth;
}

void ZkCameraInstance_setMaxAzimuth(ZkCameraInstance* slf, float maxAzimuth) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->max_azimuth = maxAzimuth;
}

float ZkCameraInstance_getBestRotZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->best_rot_z;
}

void ZkCameraInstance_setBestRotZ(ZkCameraInstance* slf, float bestRotZ) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->best_rot_z = bestRotZ;
}

float ZkCameraInstance_getMinRotZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->min_rot_z;
}

void ZkCameraInstance_setMinRotZ(ZkCameraInstance* slf, float minRotZ) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->min_rot_z = minRotZ;
}

float ZkCameraInstance_getMaxRotZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->max_rot_z;
}

void ZkCameraInstance_setMaxRotZ(ZkCameraInstance* slf, float maxRotZ) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->max_rot_z = maxRotZ;
}

float ZkCameraInstance_getRotOffsetX(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->rot_offset_x;
}

void ZkCameraInstance_setRotOffsetX(ZkCameraInstance* slf, float rotOffsetX) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->rot_offset_x = rotOffsetX;
}

float ZkCameraInstance_getRotOffsetY(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->rot_offset_y;
}

void ZkCameraInstance_setRotOffsetY(ZkCameraInstance* slf, float rotOffsetY) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->rot_offset_y = rotOffsetY;
}

float ZkCameraInstance_getRotOffsetZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->rot_offset_z;
}

void ZkCameraInstance_setRotOffsetZ(ZkCameraInstance* slf, float rotOffsetZ) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->rot_offset_z = rotOffsetZ;
}

float ZkCameraInstance_getTargetOffsetX(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->target_offset_x;
}

void ZkCameraInstance_setTargetOffsetX(ZkCameraInstance* slf, float targetOffsetX) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->target_offset_x = targetOffsetX;
}

float ZkCameraInstance_getTargetOffsetY(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->target_offset_y;
}

void ZkCameraInstance_setTargetOffsetY(ZkCameraInstance* slf, float targetOffsetY) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->target_offset_y = targetOffsetY;
}

float ZkCameraInstance_getTargetOffsetZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->target_offset_z;
}

void ZkCameraInstance_setTargetOffsetZ(ZkCameraInstance* slf, float targetOffsetZ) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_NULLV(slf->get());
	SLF->target_offset_z = targetOffsetZ;
}

float ZkCameraInstance_getVeloTrans(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->velo_trans;
}

void ZkCameraInstance_setVeloTrans(ZkCameraInstance* slf, float veloTrans) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->velo_trans = veloTrans;
}

float ZkCameraInstance_getVeloRot(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->velo_rot;
}

void ZkCameraInstance_setVeloRot(ZkCameraInstance* slf, float veloRot) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->velo_rot = veloRot;
}

int32_t ZkCameraInstance_getTranslate(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->translate;
}

void ZkCameraInstance_setTranslate(ZkCameraInstance* slf, int32_t translate) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->translate = translate;
}

int32_t ZkCameraInstance_getRotate(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->rotate;
}

void ZkCameraInstance_setRotate(ZkCameraInstance* slf, int32_t rotate) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->rotate = rotate;
}

int32_t ZkCameraInstance_getCollision(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->collision;
}

void ZkCameraInstance_setCollision(ZkCameraInstance* slf, int32_t collision) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->collision = collision;
}
