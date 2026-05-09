#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkSoundEffectInstance = ZkSharedHandle<zenkit::ISoundEffect>;
#else
typedef struct ZkInternal_SoundEffectInstance ZkSoundEffectInstance;
#endif

ZKC_API ZkString ZkSoundEffectInstance_getFile(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setFile(ZkSoundEffectInstance* slf, ZkString file);
ZKC_API int32_t ZkSoundEffectInstance_getPitchOff(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setPitchOff(ZkSoundEffectInstance* slf, int32_t pitchOff);
ZKC_API int32_t ZkSoundEffectInstance_getPitchVar(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setPitchVar(ZkSoundEffectInstance* slf, int32_t pitchVar);
ZKC_API int32_t ZkSoundEffectInstance_getVolume(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setVolume(ZkSoundEffectInstance* slf, int32_t volume);
ZKC_API int32_t ZkSoundEffectInstance_getLoop(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setLoop(ZkSoundEffectInstance* slf, int32_t loop);
ZKC_API int32_t ZkSoundEffectInstance_getLoopStartOffset(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setLoopStartOffset(ZkSoundEffectInstance* slf, int32_t loopStartOffset);
ZKC_API int32_t ZkSoundEffectInstance_getLoopEndOffset(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setLoopEndOffset(ZkSoundEffectInstance* slf, int32_t loopEndOffset);
ZKC_API float ZkSoundEffectInstance_getReverbLevel(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setReverbLevel(ZkSoundEffectInstance* slf, float reverbLevel);
ZKC_API ZkString ZkSoundEffectInstance_getPfxName(ZkSoundEffectInstance const* slf);
ZKC_API void ZkSoundEffectInstance_setPfxName(ZkSoundEffectInstance* slf, ZkString pfxName);
