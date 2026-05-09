#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkMusicSystemInstance = ZkSharedHandle<zenkit::IMusicSystem>;
#else
typedef struct ZkInternal_MusicSystemInstance ZkMusicSystemInstance;
#endif

ZKC_API float ZkMusicSystemInstance_getVolume(ZkMusicSystemInstance const* slf);
ZKC_API void ZkMusicSystemInstance_setVolume(ZkMusicSystemInstance* slf, float volume);
ZKC_API int32_t ZkMusicSystemInstance_getBitResolution(ZkMusicSystemInstance const* slf);
ZKC_API void ZkMusicSystemInstance_setBitResolution(ZkMusicSystemInstance* slf, int32_t bitResolution);
ZKC_API int32_t ZkMusicSystemInstance_getGlobalReverbEnabled(ZkMusicSystemInstance const* slf);
ZKC_API void ZkMusicSystemInstance_setGlobalReverbEnabled(ZkMusicSystemInstance* slf, int32_t globalReverbEnabled);
ZKC_API int32_t ZkMusicSystemInstance_getSampleRate(ZkMusicSystemInstance const* slf);
ZKC_API void ZkMusicSystemInstance_setSampleRate(ZkMusicSystemInstance* slf, int32_t sampleRate);
ZKC_API int32_t ZkMusicSystemInstance_getNumChannels(ZkMusicSystemInstance const* slf);
ZKC_API void ZkMusicSystemInstance_setNumChannels(ZkMusicSystemInstance* slf, int32_t numChannels);
ZKC_API int32_t ZkMusicSystemInstance_getReverbBufferSize(ZkMusicSystemInstance const* slf);
ZKC_API void ZkMusicSystemInstance_setReverbBufferSize(ZkMusicSystemInstance* slf, int32_t reverbBufferSize);
