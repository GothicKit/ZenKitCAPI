// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Material.h"
#include "../Matrix.h"
#include "../Object.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/CutsceneLibrary.hh>
	#include <zenkit/vobs/VirtualObject.hh>

using ZkVirtualObject = ZkSharedHandle<zenkit::VirtualObject>;
using ZkVisual = ZkSharedHandle<zenkit::Visual>;
using ZkVisualDecal = ZkSharedHandle<zenkit::VisualDecal>;

using ZkAi = ZkSharedHandle<zenkit::Ai>;
using ZkAiHuman = ZkSharedHandle<zenkit::AiHuman>;
using ZkAiMove = ZkSharedHandle<zenkit::AiMove>;
using ZkEventManager = ZkSharedHandle<zenkit::EventManager>;

using ZkNpc = ZkSharedHandle<zenkit::VNpc>;
using ZkCutsceneContextFwd = ZkSharedHandle<zenkit::CutsceneContext>;
#else
typedef struct ZkInternal_VirtualObject ZkVirtualObject;
typedef struct ZkInternal_Visual ZkVisual;
typedef struct ZkInternal_VisualDecal ZkVisualDecal;
typedef struct ZkInternal_Ai ZkAi;
typedef struct ZkInternal_AiHuman ZkAiHuman;
typedef struct ZkInternal_AiMove ZkAiMove;
typedef struct ZkInternal_EventManager ZkEventManager;
typedef struct ZkInternal_Npc ZkNpc;
typedef struct ZkInternal_CutsceneContext ZkCutsceneContextFwd;
#endif

typedef ZkBool (*ZkVirtualObjectEnumerator)(void* ctx, ZkVirtualObject const* vob);

typedef enum {
	ZkVobType_zCVob = 0,
	ZkVobType_zCVobLevelCompo = 1,
	ZkVobType_oCItem = 2,
	ZkVobType_oCNpc = 3,
	ZkVobType_zCMoverController = 4,
	ZkVobType_zCVobScreenFX = 5,
	ZkVobType_zCVobStair = 6,
	ZkVobType_zCPFXController = 7,
	ZkVobType_zCVobAnimate = 8,
	ZkVobType_zCVobLensFlare = 9,
	ZkVobType_zCVobLight = 10,
	ZkVobType_zCVobSpot = 11,
	ZkVobType_zCVobStartpoint = 12,
	ZkVobType_zCMessageFilter = 13,
	ZkVobType_zCCodeMaster = 14,
	ZkVobType_zCTriggerWorldStart = 15,
	ZkVobType_zCCSCamera = 16,
	ZkVobType_zCCamTrj_KeyFrame = 17,
	ZkVobType_oCTouchDamage = 18,
	ZkVobType_zCTriggerUntouch = 19,
	ZkVobType_zCEarthquake = 20,
	ZkVobType_oCMOB = 21,
	ZkVobType_oCMobInter = 22,
	ZkVobType_oCMobBed = 23,
	ZkVobType_oCMobFire = 24,
	ZkVobType_oCMobLadder = 25,
	ZkVobType_oCMobSwitch = 26,
	ZkVobType_oCMobWheel = 27,
	ZkVobType_oCMobContainer = 28,
	ZkVobType_oCMobDoor = 29,
	ZkVobType_zCTrigger = 30,
	ZkVobType_zCTriggerList = 31,
	ZkVobType_oCTriggerScript = 32,
	ZkVobType_oCTriggerChangeLevel = 33,
	ZkVobType_oCCSTrigger = 34,
	ZkVobType_zCMover = 35,
	ZkVobType_zCVobSound = 36,
	ZkVobType_zCVobSoundDaytime = 37,
	ZkVobType_oCZoneMusic = 38,
	ZkVobType_oCZoneMusicDefault = 39,
	ZkVobType_zCZoneZFog = 40,
	ZkVobType_zCZoneZFogDefault = 41,
	ZkVobType_zCZoneVobFarPlane = 42,
	ZkVobType_zCZoneVobFarPlaneDefault = 43,
	ZkVobType_ignored = 44,
	ZkVobType_unknown = 45,
} ZkVobType;

typedef enum {
	ZkSpriteAlignment_NONE = 0,
	ZkSpriteAlignment_YAW = 1,
	ZkSpriteAlignment_FULL = 2,
} ZkSpriteAlignment;

typedef enum {
	ZkShadowType_NONE = 0,
	ZkShadowType_BLOB = 1,
} ZkShadowType;

typedef enum {
	ZkAnimationType_NONE = 0,
	ZkAnimationType_WIND = 1,
	ZkAnimationType_WIND_ALT = 2,
} ZkAnimationType;

typedef enum {
	ZkVisualType_DECAL = 0,
	ZkVisualType_MESH = 1,
	ZkVisualType_MULTI_RESOLUTION_MESH = 2,
	ZkVisualType_PARTICLE_EFFECT = 3,
	ZkVisualType_CAMERA = 4,
	ZkVisualType_MODEL = 5,
	ZkVisualType_MORPH_MESH = 6,
	ZkVisualType_UNKNOWN = 7,
} ZkVisualType;

typedef enum {
	ZkAiType_HUMAN = 0,
	ZkAiType_MOVE = 1,
} ZkAiType;

ZKC_API ZkVirtualObject* ZkVirtualObject_new(ZkVobType type);
ZKC_API ZkVirtualObject* ZkVirtualObject_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkVirtualObject* ZkVirtualObject_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkVirtualObject_del(ZkVirtualObject* slf);

ZKC_API ZkVobType ZkVirtualObject_getType(ZkVirtualObject const* slf);
ZKC_API uint32_t ZkVirtualObject_getId(ZkVirtualObject const* slf);
ZKC_API ZkAxisAlignedBoundingBox ZkVirtualObject_getBbox(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setBbox(ZkVirtualObject* slf, ZkAxisAlignedBoundingBox bbox);
ZKC_API ZkVec3f ZkVirtualObject_getPosition(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setPosition(ZkVirtualObject* slf, ZkVec3f position);
ZKC_API ZkMat3x3 ZkVirtualObject_getRotation(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setRotation(ZkVirtualObject* slf, ZkMat3x3 rotation);
ZKC_API ZkBool ZkVirtualObject_getShowVisual(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setShowVisual(ZkVirtualObject* slf, ZkBool showVisual);
ZKC_API ZkSpriteAlignment ZkVirtualObject_getSpriteCameraFacingMode(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setSpriteCameraFacingMode(ZkVirtualObject* slf, ZkSpriteAlignment spriteCameraFacingMode);
ZKC_API ZkBool ZkVirtualObject_getCdStatic(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setCdStatic(ZkVirtualObject* slf, ZkBool cdStatic);
ZKC_API ZkBool ZkVirtualObject_getCdDynamic(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setCdDynamic(ZkVirtualObject* slf, ZkBool cdDynamic);
ZKC_API ZkBool ZkVirtualObject_getVobStatic(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setVobStatic(ZkVirtualObject* slf, ZkBool vobStatic);
ZKC_API ZkShadowType ZkVirtualObject_getDynamicShadows(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setDynamicShadows(ZkVirtualObject* slf, ZkShadowType dynamicShadows);
ZKC_API ZkBool ZkVirtualObject_getPhysicsEnabled(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setPhysicsEnabled(ZkVirtualObject* slf, ZkBool physicsEnabled);
ZKC_API ZkAnimationType ZkVirtualObject_getAnimMode(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setAnimMode(ZkVirtualObject* slf, ZkAnimationType animMode);
ZKC_API int32_t ZkVirtualObject_getBias(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setBias(ZkVirtualObject* slf, int32_t bias);
ZKC_API ZkBool ZkVirtualObject_getAmbient(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setAmbient(ZkVirtualObject* slf, ZkBool ambient);
ZKC_API float ZkVirtualObject_getAnimStrength(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setAnimStrength(ZkVirtualObject* slf, float animStrength);
ZKC_API float ZkVirtualObject_getFarClipScale(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setFarClipScale(ZkVirtualObject* slf, float farClipScale);
ZKC_API ZkString ZkVirtualObject_getPresetName(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setPresetName(ZkVirtualObject* slf, ZkString presetName);
ZKC_API ZkString ZkVirtualObject_getName(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setName(ZkVirtualObject* slf, ZkString name);
ZKC_API ZkVisual* ZkVirtualObject_getVisual(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setVisual(ZkVirtualObject* slf, ZkVisual* visual);
ZKC_API ZkByte ZkVirtualObject_getSleepMode(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setSleepMode(ZkVirtualObject* slf, ZkByte sleepMode);
ZKC_API float ZkVirtualObject_getNextOnTimer(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setNextOnTimer(ZkVirtualObject* slf, float nextOnTimer);
ZKC_API ZkAi* ZkVirtualObject_getAi(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setAi(ZkVirtualObject* slf, ZkAi* ai);
ZKC_API ZkEventManager* ZkVirtualObject_getEventManager(ZkVirtualObject const* slf);
ZKC_API void ZkVirtualObject_setEventManager(ZkVirtualObject* slf, ZkEventManager* em);

ZKC_API ZkSize ZkVirtualObject_getChildCount(ZkVirtualObject const* slf);
ZKC_API ZkVirtualObject* ZkVirtualObject_getChild(ZkVirtualObject const* slf, ZkSize i);
ZKC_API void ZkVirtualObject_enumerateChildren(ZkVirtualObject const* slf, ZkVirtualObjectEnumerator cb, void* ctx);
ZKC_API void ZkVirtualObject_addChild(ZkVirtualObject* slf, ZkVirtualObject* object);
ZKC_API void ZkVirtualObject_removeChild(ZkVirtualObject* slf, ZkSize i);
ZKC_API void ZkVirtualObject_removeChildren(ZkVirtualObject* slf, ZkVirtualObjectEnumerator pred, void* ctx);

ZKC_API ZkVisual* ZkVisual_new(ZkVisualType type);
ZKC_API void ZkVisual_del(ZkVisual* slf);
ZKC_API ZkString ZkVisual_getName(ZkVisual const* slf);
ZKC_API void ZkVisual_setName(ZkVisual* slf, ZkString name);
ZKC_API ZkVisualType ZkVisual_getType(ZkVisual const* slf);

ZKC_API ZkString ZkVisualDecal_getName(ZkVisualDecal const* slf);
ZKC_API void ZkVisualDecal_setName(ZkVisualDecal* slf, ZkString name);
ZKC_API ZkVec2f ZkVisualDecal_getDimension(ZkVisualDecal const* slf);
ZKC_API void ZkVisualDecal_setDimension(ZkVisualDecal* slf, ZkVec2f dimension);
ZKC_API ZkVec2f ZkVisualDecal_getOffset(ZkVisualDecal const* slf);
ZKC_API void ZkVisualDecal_setOffset(ZkVisualDecal* slf, ZkVec2f offset);
ZKC_API ZkBool ZkVisualDecal_getTwoSided(ZkVisualDecal const* slf);
ZKC_API void ZkVisualDecal_setTwoSided(ZkVisualDecal* slf, ZkBool twoSided);
ZKC_API ZkAlphaFunction ZkVisualDecal_getAlphaFunc(ZkVisualDecal const* slf);
ZKC_API void ZkVisualDecal_setAlphaFunc(ZkVisualDecal* slf, ZkAlphaFunction alphaFunc);
ZKC_API float ZkVisualDecal_getTextureAnimFps(ZkVisualDecal const* slf);
ZKC_API void ZkVisualDecal_setTextureAnimFps(ZkVisualDecal* slf, float textureAnimFps);
ZKC_API uint8_t ZkVisualDecal_getAlphaWeight(ZkVisualDecal const* slf);
ZKC_API void ZkVisualDecal_setAlphaWeight(ZkVisualDecal* slf, uint8_t alphaWeight);
ZKC_API ZkBool ZkVisualDecal_getIgnoreDaylight(ZkVisualDecal const* slf);
ZKC_API void ZkVisualDecal_setIgnoreDaylight(ZkVisualDecal* slf, ZkBool ignoreDaylight);

ZKC_API ZkAi* ZkAi_new(ZkAiType type);
ZKC_API void ZkAi_del(ZkAi* slf);
ZKC_API ZkAiType ZkAi_getType(ZkAi const* slf);

ZKC_API int ZkAiHuman_getWaterLevel(ZkAiHuman const* slf);
ZKC_API float ZkAiHuman_getFloorY(ZkAiHuman const* slf);
ZKC_API float ZkAiHuman_getWaterY(ZkAiHuman const* slf);
ZKC_API float ZkAiHuman_getCeilY(ZkAiHuman const* slf);
ZKC_API float ZkAiHuman_getFeetY(ZkAiHuman const* slf);
ZKC_API float ZkAiHuman_getHeadY(ZkAiHuman const* slf);
ZKC_API float ZkAiHuman_getFallDistY(ZkAiHuman const* slf);
ZKC_API float ZkAiHuman_getFallStartY(ZkAiHuman const* slf);
ZKC_API ZkNpc* ZkAiHuman_getNpc(ZkAiHuman const* slf);
ZKC_API int ZkAiHuman_getWalkMode(ZkAiHuman const* slf);
ZKC_API int ZkAiHuman_getWeaponMode(ZkAiHuman const* slf);
ZKC_API int ZkAiHuman_getWmodeAst(ZkAiHuman const* slf);
ZKC_API int ZkAiHuman_getWmodeSelect(ZkAiHuman const* slf);
ZKC_API ZkBool ZkAiHuman_getChangeWeapon(ZkAiHuman const* slf);
ZKC_API int ZkAiHuman_getActionMode(ZkAiHuman const* slf);

ZKC_API void ZkAiHuman_setWaterLevel(ZkAiHuman* slf, int water_level);
ZKC_API void ZkAiHuman_setFloorY(ZkAiHuman* slf, float floor_y);
ZKC_API void ZkAiHuman_setWaterY(ZkAiHuman* slf, float water_y);
ZKC_API void ZkAiHuman_setCeilY(ZkAiHuman* slf, float ceil_y);
ZKC_API void ZkAiHuman_setFeetY(ZkAiHuman* slf, float feet_y);
ZKC_API void ZkAiHuman_setHeadY(ZkAiHuman* slf, float head_y);
ZKC_API void ZkAiHuman_setFallDistY(ZkAiHuman* slf, float fall_dist_y);
ZKC_API void ZkAiHuman_setFallStartY(ZkAiHuman* slf, float fall_start_y);
ZKC_API void ZkAiHuman_setNpc(ZkAiHuman* slf, ZkNpc* npc);
ZKC_API void ZkAiHuman_setWalkMode(ZkAiHuman* slf, int walk_mode);
ZKC_API void ZkAiHuman_setWeaponMode(ZkAiHuman* slf, int weapon_mode);
ZKC_API void ZkAiHuman_setWmodeAst(ZkAiHuman* slf, int wmode_ast);
ZKC_API void ZkAiHuman_setWmodeSelect(ZkAiHuman* slf, int wmode_select);
ZKC_API void ZkAiHuman_setChangeWeapon(ZkAiHuman* slf, ZkBool change_weapon);
ZKC_API void ZkAiHuman_setActionMode(ZkAiHuman* slf, int action_mode);

ZKC_API ZkVirtualObject* ZkAiMove_getVob(ZkAiMove const* slf);
ZKC_API void ZkAiMove_setVob(ZkAiMove* slf, ZkVirtualObject* vob);
ZKC_API ZkNpc* ZkAiMove_getOwner(ZkAiMove const* slf);
ZKC_API void ZkAiMove_setOwner(ZkAiMove* slf, ZkNpc* owner);

ZKC_API ZkEventManager* ZkEventManager_new(void);
ZKC_API void ZkEventManager_del(ZkEventManager* slf);
ZKC_API ZkBool ZkEventManager_getCleared(ZkEventManager const* slf);
ZKC_API void ZkEventManager_setCleared(ZkEventManager* slf, ZkBool cleared);
ZKC_API ZkBool ZkEventManager_getActive(ZkEventManager const* slf);
ZKC_API void ZkEventManager_setActive(ZkEventManager* slf, ZkBool active);
ZKC_API ZkCutsceneContextFwd* ZkEventManager_getCutscene(ZkEventManager const* slf);
ZKC_API void ZkEventManager_setCutscene(ZkEventManager* slf, ZkCutsceneContextFwd* cutscene);
