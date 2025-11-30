#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkMenuItemInstance = ZkSharedHandle<zenkit::IMenuItem>;
#else
typedef struct ZkInternal_MenuItemInstance ZkMenuItemInstance;
#endif

typedef enum {
	ZkMenuItemType_UNKNOWN = 0,
	ZkMenuItemType_TEXT = 1,
	ZkMenuItemType_SLIDER = 2,
	ZkMenuItemType_INPUT = 3,
	ZkMenuItemType_CURSOR = 4,
	ZkMenuItemType_CHOICEBOX = 5,
	ZkMenuItemType_BUTTON = 6,
	ZkMenuItemType_LISTBOX = 7,
} ZkMenuItemType;

typedef enum {
	ZkMenuItemFlag_CHROMAKEYED = 1 << 0,
	ZkMenuItemFlag_TRANSPARENT = 1 << 1,
	ZkMenuItemFlag_SELECTABLE = 1 << 2,
	ZkMenuItemFlag_MOVABLE = 1 << 3,
	ZkMenuItemFlag_CENTERED = 1 << 4,
	ZkMenuItemFlag_DISABLED = 1 << 5,
	ZkMenuItemFlag_FADE = 1 << 6,
	ZkMenuItemFlag_EFFECTS = 1 << 7,
	ZkMenuItemFlag_ONLY_OUTGAME = 1 << 8,
	ZkMenuItemFlag_ONLY_INGAME = 1 << 9,
	ZkMenuItemFlag_PERF_OPTION = 1 << 10,
	ZkMenuItemFlag_MULTILINE = 1 << 11,
	ZkMenuItemFlag_NEEDS_APPLY = 1 << 12,
	ZkMenuItemFlag_NEEDS_RESTART = 1 << 13,
	ZkMenuItemFlag_EXTENDED_MENU = 1 << 14,
	ZkMenuItemFlag_HOR_SELECTABLE = 1 << 15,
} ZkMenuItemFlag;

#define ZkMenuItemInstance_TextCount 10
#define ZkMenuItemInstance_SelectActionCount 5
#define ZkMenuItemInstance_EventActionCount 10
#define ZkMenuItemInstance_UserItemCount 4

ZKC_API ZkString ZkMenuItemInstance_getFontName(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setFontName(ZkMenuItemInstance* slf, ZkString fontName);
ZKC_API ZkString ZkMenuItemInstance_getBackpic(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setBackpic(ZkMenuItemInstance* slf, ZkString backpic);
ZKC_API ZkString ZkMenuItemInstance_getAlphaMode(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setAlphaMode(ZkMenuItemInstance* slf, ZkString alphaMode);
ZKC_API int32_t ZkMenuItemInstance_getAlpha(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setAlpha(ZkMenuItemInstance* slf, int32_t alpha);
ZKC_API ZkMenuItemType ZkMenuItemInstance_getType(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setType(ZkMenuItemInstance* slf, ZkMenuItemType type);
ZKC_API ZkString ZkMenuItemInstance_getOnChgSetOption(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setOnChgSetOption(ZkMenuItemInstance* slf, ZkString onChgSetOption);
ZKC_API ZkString ZkMenuItemInstance_getOnChgSetOptionSection(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setOnChgSetOptionSection(ZkMenuItemInstance* slf, ZkString onChgSetOptionSection);
ZKC_API int32_t ZkMenuItemInstance_getPosX(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setPosX(ZkMenuItemInstance* slf, int32_t posX);
ZKC_API int32_t ZkMenuItemInstance_getPosY(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setPosY(ZkMenuItemInstance* slf, int32_t posY);
ZKC_API int32_t ZkMenuItemInstance_getDimX(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setDimX(ZkMenuItemInstance* slf, int32_t dimX);
ZKC_API int32_t ZkMenuItemInstance_getDimY(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setDimY(ZkMenuItemInstance* slf, int32_t dimY);
ZKC_API float ZkMenuItemInstance_getSizeStartScale(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setSizeStartScale(ZkMenuItemInstance* slf, float sizeStartScale);
ZKC_API int32_t ZkMenuItemInstance_getFlags(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setFlags(ZkMenuItemInstance* slf, int32_t flags);
ZKC_API float ZkMenuItemInstance_getOpenDelayTime(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setOpenDelayTime(ZkMenuItemInstance* slf, float openDelayTime);
ZKC_API float ZkMenuItemInstance_getOpenDuration(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setOpenDuration(ZkMenuItemInstance* slf, float openDuration);
ZKC_API int32_t ZkMenuItemInstance_getFramePosX(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setFramePosX(ZkMenuItemInstance* slf, int32_t framePosX);
ZKC_API int32_t ZkMenuItemInstance_getFramePosY(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setFramePosY(ZkMenuItemInstance* slf, int32_t framePosY);
ZKC_API int32_t ZkMenuItemInstance_getFrameSizeX(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setFrameSizeX(ZkMenuItemInstance* slf, int32_t frameSizeX);
ZKC_API int32_t ZkMenuItemInstance_getFrameSizeY(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setFrameSizeY(ZkMenuItemInstance* slf, int32_t frameSizeY);
ZKC_API ZkString ZkMenuItemInstance_getHideIfOptionSectionSet(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setHideIfOptionSectionSet(ZkMenuItemInstance* slf, ZkString hideIfOptionSectionSet);
ZKC_API ZkString ZkMenuItemInstance_getHideIfOptionSet(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setHideIfOptionSet(ZkMenuItemInstance* slf, ZkString hideIfOptionSet);
ZKC_API int32_t ZkMenuItemInstance_getHideOnValue(ZkMenuItemInstance const* slf);
ZKC_API void ZkMenuItemInstance_setHideOnValue(ZkMenuItemInstance* slf, int32_t hideOnValue);
ZKC_API ZkString ZkMenuItemInstance_getText(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API void ZkMenuItemInstance_setText(ZkMenuItemInstance* slf, ZkSize i, ZkString text);
ZKC_API int32_t ZkMenuItemInstance_getOnSelAction(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API void ZkMenuItemInstance_setOnSelAction(ZkMenuItemInstance* slf, ZkSize i, int32_t onSelAction);
ZKC_API ZkString ZkMenuItemInstance_getOnSelActionS(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API void ZkMenuItemInstance_setOnSelActionS(ZkMenuItemInstance* slf, ZkSize i, ZkString onSelActionS);
ZKC_API int32_t ZkMenuItemInstance_getOnEventAction(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API void ZkMenuItemInstance_setOnEventAction(ZkMenuItemInstance* slf, ZkSize i, int32_t onEventAction);
ZKC_API float ZkMenuItemInstance_getUserFloat(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API void ZkMenuItemInstance_setUserFloat(ZkMenuItemInstance* slf, ZkSize i, float userFloat);
ZKC_API ZkString ZkMenuItemInstance_getUserString(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API void ZkMenuItemInstance_setUserString(ZkMenuItemInstance* slf, ZkSize i, ZkString userString);
