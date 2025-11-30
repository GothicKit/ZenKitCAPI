// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include <stdint.h>

#ifdef __cplusplus
	#include <zenkit/Misc.hh>
	#include <zenkit/Texture.hh>
#endif

typedef struct ZkInternal_Vec2 {
	float x;
	float y;

#ifdef __cplusplus
	ZkInternal_Vec2() : x(0), y(0) {}
	ZkInternal_Vec2(zenkit::Vec2 v) : x(v.x), y(v.y) {}

	operator zenkit::Vec2() const {
		return {x, y};
	}
#endif
} ZkVec2f;

typedef struct ZkInternal_Vec3 {
	float x;
	float y;
	float z;

#ifdef __cplusplus
	ZkInternal_Vec3() : x(0), y(0), z(0) {}
	ZkInternal_Vec3(zenkit::Vec3 v) : x(v.x), y(v.y), z(v.z) {}

	operator zenkit::Vec3() const {
		return {x, y, z};
	}
#endif
} ZkVec3f;

typedef struct ZkInternal_Vec4 {
	float x;
	float y;
	float z;
	float w;

#ifdef __cplusplus
	ZkInternal_Vec4() : x(0), y(0), z(0), w(0) {}
	ZkInternal_Vec4(zenkit::Vec4 v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	operator zenkit::Vec4() const {
		return {x, y, z, w};
	}
#endif
} ZkVec4f;

typedef struct ZkInternal_Quat {
	float x;
	float y;
	float z;
	float w;

#ifdef __cplusplus
	ZkInternal_Quat() : x(0), y(0), z(0), w(0) {}
	ZkInternal_Quat(zenkit::Quat v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	operator zenkit::Quat() const {
		return {w, x, y, z};
	}
#endif
} ZkQuat;

typedef struct ZkInternal_Color {
	uint8_t r;
	uint8_t g;
	uint8_t b;
	uint8_t a;

#ifdef __cplusplus
	ZkInternal_Color() : r(0), g(0), b(0), a(255) {}
	ZkInternal_Color(zenkit::Color v) : r(v.r), g(v.g), b(v.b), a(v.a) {}
	ZkInternal_Color(zenkit::ColorARGB v) : r(v.r), g(v.g), b(v.b), a(v.a) {}

	operator zenkit::Color() const {
		return {r, g, b, a};
	}
#endif
} ZkColor;

typedef ZkBool (*ZkVec2fEnumerator)(void* ctx, ZkVec2f v);
typedef ZkBool (*ZkVec3fEnumerator)(void* ctx, ZkVec3f v);
typedef ZkBool (*ZkVec4fEnumerator)(void* ctx, ZkVec4f v);
typedef ZkBool (*ZkQuatEnumerator)(void* ctx, ZkQuat v);
typedef ZkBool (*ZkColorEnumerator)(void* ctx, ZkColor v);
