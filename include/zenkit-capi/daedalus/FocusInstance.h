#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkFocusInstance = ZkSharedHandle<zenkit::IFocus>;
#else
typedef struct ZkInternal_FocusInstance ZkFocusInstance;
#endif

ZKC_API float ZkFocusInstance_getNpcLongrange(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setNpcLongrange(ZkFocusInstance* slf, float npcLongrange);
ZKC_API float ZkFocusInstance_getNpcRange1(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setNpcRange1(ZkFocusInstance* slf, float npcRange1);
ZKC_API float ZkFocusInstance_getNpcRange2(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setNpcRange2(ZkFocusInstance* slf, float npcRange2);
ZKC_API float ZkFocusInstance_getNpcAzi(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setNpcAzi(ZkFocusInstance* slf, float npcAzi);
ZKC_API float ZkFocusInstance_getNpcElevdo(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setNpcElevdo(ZkFocusInstance* slf, float npcElevdo);
ZKC_API float ZkFocusInstance_getNpcElevup(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setNpcElevup(ZkFocusInstance* slf, float npcElevup);
ZKC_API int32_t ZkFocusInstance_getNpcPrio(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setNpcPrio(ZkFocusInstance* slf, int32_t npcPrio);
ZKC_API float ZkFocusInstance_getItemRange1(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setItemRange1(ZkFocusInstance* slf, float itemRange1);
ZKC_API float ZkFocusInstance_getItemRange2(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setItemRange2(ZkFocusInstance* slf, float itemRange2);
ZKC_API float ZkFocusInstance_getItemAzi(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setItemAzi(ZkFocusInstance* slf, float itemAzi);
ZKC_API float ZkFocusInstance_getItemElevdo(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setItemElevdo(ZkFocusInstance* slf, float itemElevdo);
ZKC_API float ZkFocusInstance_getItemElevup(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setItemElevup(ZkFocusInstance* slf, float itemElevup);
ZKC_API int32_t ZkFocusInstance_getItemPrio(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setItemPrio(ZkFocusInstance* slf, int32_t itemPrio);
ZKC_API float ZkFocusInstance_getMobRange1(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setMobRange1(ZkFocusInstance* slf, float mobRange1);
ZKC_API float ZkFocusInstance_getMobRange2(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setMobRange2(ZkFocusInstance* slf, float mobRange2);
ZKC_API float ZkFocusInstance_getMobAzi(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setMobAzi(ZkFocusInstance* slf, float mobAzi);
ZKC_API float ZkFocusInstance_getMobElevdo(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setMobElevdo(ZkFocusInstance* slf, float mobElevdo);
ZKC_API float ZkFocusInstance_getMobElevup(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setMobElevup(ZkFocusInstance* slf, float mobElevup);
ZKC_API int32_t ZkFocusInstance_getMobPrio(ZkFocusInstance const* slf);
ZKC_API void ZkFocusInstance_setMobPrio(ZkFocusInstance* slf, int32_t mobPrio);
