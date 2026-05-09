#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkMusicJingleInstance = ZkSharedHandle<zenkit::IMusicJingle>;
#else
typedef struct ZkInternal_MusicJingleInstance ZkMusicJingleInstance;
#endif

ZKC_API ZkString ZkMusicJingleInstance_getName(ZkMusicJingleInstance const* slf);
ZKC_API void ZkMusicJingleInstance_setName(ZkMusicJingleInstance* slf, ZkString name);
ZKC_API int32_t ZkMusicJingleInstance_getLoop(ZkMusicJingleInstance const* slf);
ZKC_API void ZkMusicJingleInstance_setLoop(ZkMusicJingleInstance* slf, int32_t loop);
ZKC_API float ZkMusicJingleInstance_getVol(ZkMusicJingleInstance const* slf);
ZKC_API void ZkMusicJingleInstance_setVol(ZkMusicJingleInstance* slf, float vol);
ZKC_API int32_t ZkMusicJingleInstance_getTranssubtype(ZkMusicJingleInstance const* slf);
ZKC_API void ZkMusicJingleInstance_setTranssubtype(ZkMusicJingleInstance* slf, int32_t transsubtype);
