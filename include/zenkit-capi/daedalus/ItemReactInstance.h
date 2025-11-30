#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkItemReactInstance = ZkSharedHandle<zenkit::IItemReact>;
#else
typedef struct ZkInternal_ItemReactInstance ZkItemReactInstance;
#endif

ZKC_API int32_t ZkItemReactInstance_getNpc(ZkItemReactInstance const* slf);
ZKC_API void ZkItemReactInstance_setNpc(ZkItemReactInstance* slf, int32_t npc);
ZKC_API int32_t ZkItemReactInstance_getTradeItem(ZkItemReactInstance const* slf);
ZKC_API void ZkItemReactInstance_setTradeItem(ZkItemReactInstance* slf, int32_t tradeItem);
ZKC_API int32_t ZkItemReactInstance_getTradeAmount(ZkItemReactInstance const* slf);
ZKC_API void ZkItemReactInstance_setTradeAmount(ZkItemReactInstance* slf, int32_t tradeAmount);
ZKC_API int32_t ZkItemReactInstance_getRequestedCategory(ZkItemReactInstance const* slf);
ZKC_API void ZkItemReactInstance_setRequestedCategory(ZkItemReactInstance* slf, int32_t requestedCategory);
ZKC_API int32_t ZkItemReactInstance_getRequestedItem(ZkItemReactInstance const* slf);
ZKC_API void ZkItemReactInstance_setRequestedItem(ZkItemReactInstance* slf, int32_t requestedItem);
ZKC_API int32_t ZkItemReactInstance_getRequestedAmount(ZkItemReactInstance const* slf);
ZKC_API void ZkItemReactInstance_setRequestedAmount(ZkItemReactInstance* slf, int32_t requestedAmount);
ZKC_API int32_t ZkItemReactInstance_getReaction(ZkItemReactInstance const* slf);
ZKC_API void ZkItemReactInstance_setReaction(ZkItemReactInstance* slf, int32_t reaction);
