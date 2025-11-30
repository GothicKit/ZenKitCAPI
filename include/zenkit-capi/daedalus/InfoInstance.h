#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit-capi/Object.h>
	#include <zenkit/addon/daedalus.hh>
using ZkInfoInstance = ZkSharedHandle<zenkit::IInfo>;
#else
typedef struct ZkInternal_InfoInstance ZkInfoInstance;
#endif

ZKC_API int32_t ZkInfoInstance_getNpc(ZkInfoInstance const* slf);
ZKC_API void ZkInfoInstance_setNpc(ZkInfoInstance* slf, int32_t npc);
ZKC_API int32_t ZkInfoInstance_getNr(ZkInfoInstance const* slf);
ZKC_API void ZkInfoInstance_setNr(ZkInfoInstance* slf, int32_t nr);
ZKC_API int32_t ZkInfoInstance_getImportant(ZkInfoInstance const* slf);
ZKC_API void ZkInfoInstance_setImportant(ZkInfoInstance* slf, int32_t important);
ZKC_API int32_t ZkInfoInstance_getCondition(ZkInfoInstance const* slf);
ZKC_API void ZkInfoInstance_setCondition(ZkInfoInstance* slf, int32_t condition);
ZKC_API int32_t ZkInfoInstance_getInformation(ZkInfoInstance const* slf);
ZKC_API void ZkInfoInstance_setInformation(ZkInfoInstance* slf, int32_t information);
ZKC_API ZkString ZkInfoInstance_getDescription(ZkInfoInstance const* slf);
ZKC_API void ZkInfoInstance_setDescription(ZkInfoInstance* slf, ZkString description);
ZKC_API int32_t ZkInfoInstance_getTrade(ZkInfoInstance const* slf);
ZKC_API void ZkInfoInstance_setTrade(ZkInfoInstance* slf, int32_t trade);
ZKC_API int32_t ZkInfoInstance_getPermanent(ZkInfoInstance const* slf);
ZKC_API void ZkInfoInstance_setPermanent(ZkInfoInstance* slf, int32_t permanent);
