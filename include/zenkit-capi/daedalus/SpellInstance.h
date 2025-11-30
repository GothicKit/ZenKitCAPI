#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkSpellInstance = ZkSharedHandle<zenkit::ISpell>;
#else
typedef struct ZkInternal_SpellInstance ZkSpellInstance;
#endif

ZKC_API float ZkSpellInstance_getTimePerMana(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setTimePerMana(ZkSpellInstance* slf, float timePerMana);
ZKC_API int32_t ZkSpellInstance_getDamagePerLevel(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setDamagePerLevel(ZkSpellInstance* slf, int32_t damagePerLevel);
ZKC_API int32_t ZkSpellInstance_getDamageType(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setDamageType(ZkSpellInstance* slf, int32_t damageType);
ZKC_API int32_t ZkSpellInstance_getSpellType(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setSpellType(ZkSpellInstance* slf, int32_t spellType);
ZKC_API int32_t ZkSpellInstance_getCanTurnDuringInvest(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setCanTurnDuringInvest(ZkSpellInstance* slf, int32_t canTurnDuringInvest);
ZKC_API int32_t ZkSpellInstance_getCanChangeTargetDuringInvest(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setCanChangeTargetDuringInvest(ZkSpellInstance* slf, int32_t canChangeTargetDuringInvest);
ZKC_API int32_t ZkSpellInstance_getIsMultiEffect(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setIsMultiEffect(ZkSpellInstance* slf, int32_t isMultiEffect);
ZKC_API int32_t ZkSpellInstance_getTargetCollectAlgo(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setTargetCollectAlgo(ZkSpellInstance* slf, int32_t targetCollectAlgo);
ZKC_API int32_t ZkSpellInstance_getTargetCollectType(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setTargetCollectType(ZkSpellInstance* slf, int32_t targetCollectType);
ZKC_API int32_t ZkSpellInstance_getTargetCollectRange(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setTargetCollectRange(ZkSpellInstance* slf, int32_t targetCollectRange);
ZKC_API int32_t ZkSpellInstance_getTargetCollectAzi(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setTargetCollectAzi(ZkSpellInstance* slf, int32_t targetCollectAzi);
ZKC_API int32_t ZkSpellInstance_getTargetCollectElevation(ZkSpellInstance const* slf);
ZKC_API void ZkSpellInstance_setTargetCollectElevation(ZkSpellInstance* slf, int32_t targetCollectElevation);
