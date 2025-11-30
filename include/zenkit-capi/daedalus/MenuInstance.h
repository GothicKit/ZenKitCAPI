#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkMenuInstance = ZkSharedHandle<zenkit::IMenu>;
#else
typedef struct ZkInternal_MenuInstance ZkMenuInstance;
#endif

#define ZkMenuInstance_ItemCount 150

typedef enum {
	ZkMenuFlag_OVERTOP = 1 << 0,
	ZkMenuFlag_EXCLUSIVE = 1 << 1,
	ZkMenuFlag_NO_ANIMATION = 1 << 2,
	ZkMenuFlag_DONT_SCALE_DIMENSION = 1 << 3,
	ZkMenuFlag_DONT_SCALE_POSITION = 1 << 4,
	ZkMenuFlag_ALIGN_CENTER = 1 << 5,
	ZkMenuFlag_SHOW_INFO = 1 << 6,
} ZkMenuFlag;

ZKC_API ZkString ZkMenuInstance_getBackPic(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setBackPic(ZkMenuInstance* slf, ZkString backPic);
ZKC_API ZkString ZkMenuInstance_getBackWorld(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setBackWorld(ZkMenuInstance* slf, ZkString backWorld);
ZKC_API int32_t ZkMenuInstance_getPosX(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setPosX(ZkMenuInstance* slf, int32_t posX);
ZKC_API int32_t ZkMenuInstance_getPosY(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setPosY(ZkMenuInstance* slf, int32_t posY);
ZKC_API int32_t ZkMenuInstance_getDimX(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setDimX(ZkMenuInstance* slf, int32_t dimX);
ZKC_API int32_t ZkMenuInstance_getDimY(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setDimY(ZkMenuInstance* slf, int32_t dimY);
ZKC_API int32_t ZkMenuInstance_getAlpha(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setAlpha(ZkMenuInstance* slf, int32_t alpha);
ZKC_API ZkString ZkMenuInstance_getMusicTheme(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setMusicTheme(ZkMenuInstance* slf, ZkString musicTheme);
ZKC_API int32_t ZkMenuInstance_getEventTimerMsec(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setEventTimerMsec(ZkMenuInstance* slf, int32_t eventTimerMsec);
ZKC_API int32_t ZkMenuInstance_getFlags(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setFlags(ZkMenuInstance* slf, int32_t flags);
ZKC_API int32_t ZkMenuInstance_getDefaultOutgame(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setDefaultOutgame(ZkMenuInstance* slf, int32_t defaultOutgame);
ZKC_API int32_t ZkMenuInstance_getDefaultIngame(ZkMenuInstance const* slf);
ZKC_API void ZkMenuInstance_setDefaultIngame(ZkMenuInstance* slf, int32_t defaultIngame);
ZKC_API ZkString ZkMenuInstance_getItem(ZkMenuInstance const* slf, ZkSize i);
ZKC_API void ZkMenuInstance_setItem(ZkMenuInstance* slf, ZkSize i, ZkString item);
