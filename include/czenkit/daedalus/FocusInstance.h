#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkFocusInstance = zenkit::IFocus;
#else
typedef struct ZkInternal_FocusInstance ZkFocusInstance;
#endif

CZK_API float ZkFocusInstance_getNpcLongrange(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getNpcRange1(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getNpcRange2(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getNpcAzi(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getNpcElevdo(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getNpcElevup(ZkFocusInstance const* slf);
CZK_API int32_t ZkFocusInstance_getNpcPrio(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getItemRange1(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getItemRange2(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getItemAzi(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getItemElevdo(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getItemElevup(ZkFocusInstance const* slf);
CZK_API int32_t ZkFocusInstance_getItemPrio(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getMobRange1(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getMobRange2(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getMobAzi(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getMobElevdo(ZkFocusInstance const* slf);
CZK_API float ZkFocusInstance_getMobElevup(ZkFocusInstance const* slf);
CZK_API int32_t ZkFocusInstance_getMobPrio(ZkFocusInstance const* slf);
