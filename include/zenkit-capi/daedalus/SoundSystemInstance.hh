#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkSoundSystemInstance = ZkSharedHandle<zenkit::ISoundSystem>;
#else
typedef struct ZkInternal_SoundSystemInstance ZkSoundSystemInstance;
#endif

ZKC_API float ZkSoundSystemInstance_getVolume(ZkSoundSystemInstance const* slf);
ZKC_API void ZkSoundSystemInstance_setVolume(ZkSoundSystemInstance* slf, float volume);
ZKC_API int32_t ZkSoundSystemInstance_getBitResolution(ZkSoundSystemInstance const* slf);
ZKC_API void ZkSoundSystemInstance_setBitResolution(ZkSoundSystemInstance* slf, int32_t bitResolution);
ZKC_API int32_t ZkSoundSystemInstance_getSampleRate(ZkSoundSystemInstance const* slf);
ZKC_API void ZkSoundSystemInstance_setSampleRate(ZkSoundSystemInstance* slf, int32_t sampleRate);
ZKC_API int32_t ZkSoundSystemInstance_getUseStereo(ZkSoundSystemInstance const* slf);
ZKC_API void ZkSoundSystemInstance_setUseStereo(ZkSoundSystemInstance* slf, int32_t useStereo);
ZKC_API int32_t ZkSoundSystemInstance_getNumSfxChannels(ZkSoundSystemInstance const* slf);
ZKC_API void ZkSoundSystemInstance_setNumSfxChannels(ZkSoundSystemInstance* slf, int32_t numSfxChannels);
ZKC_API ZkString ZkSoundSystemInstance_getUsed3DProviderName(ZkSoundSystemInstance const* slf);
ZKC_API void ZkSoundSystemInstance_setUsed3DProviderName(ZkSoundSystemInstance* slf, ZkString used3DProviderName);
