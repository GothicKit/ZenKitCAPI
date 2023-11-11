#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkMusicThemeInstance = zenkit::IMusicTheme;
#else
typedef struct ZkInternal_MusicThemeInstance ZkMusicThemeInstance;
#endif

typedef enum {
	ZkMusicTransitionEffect_UNKNOWN = 0,
	ZkMusicTransitionEffect_NONE = 1,
	ZkMusicTransitionEffect_GROOVE = 2,
	ZkMusicTransitionEffect_FILL = 3,
	ZkMusicTransitionEffect_BREAK = 4,
	ZkMusicTransitionEffect_INTRO = 5,
	ZkMusicTransitionEffect_END = 6,
	ZkMusicTransitionEffect_END_AND_INTO = 7,
} ZkMusicTransitionEffect;

typedef enum {
	ZkMusicTransitionType_UNKNOWN = 0,
	ZkMusicTransitionType_IMMEDIATE = 1,
	ZkMusicTransitionType_BEAT = 2,
	ZkMusicTransitionType_MEASURE = 3,
} ZkMusicTransitionType;

ZKC_API ZkString ZkMusicThemeInstance_getFile(ZkMusicThemeInstance const* slf);
ZKC_API float ZkMusicThemeInstance_getVol(ZkMusicThemeInstance const* slf);
ZKC_API int32_t ZkMusicThemeInstance_getLoop(ZkMusicThemeInstance const* slf);
ZKC_API float ZkMusicThemeInstance_getReverbmix(ZkMusicThemeInstance const* slf);
ZKC_API float ZkMusicThemeInstance_getReverbtime(ZkMusicThemeInstance const* slf);
ZKC_API ZkMusicTransitionEffect ZkMusicThemeInstance_getTranstype(ZkMusicThemeInstance const* slf);
ZKC_API ZkMusicTransitionType ZkMusicThemeInstance_getTranssubtype(ZkMusicThemeInstance const* slf);
