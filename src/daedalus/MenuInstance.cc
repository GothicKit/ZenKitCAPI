#include "zenkit-capi/daedalus/MenuInstance.h"
#include "../Internal.hh"

ZkString ZkMenuInstance_getBackPic(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->back_pic.c_str();
}

void ZkMenuInstance_setBackPic(ZkMenuInstance* slf, ZkString backPic) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->back_pic = backPic;
}

ZkString ZkMenuInstance_getBackWorld(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->back_world.c_str();
}

void ZkMenuInstance_setBackWorld(ZkMenuInstance* slf, ZkString backWorld) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->back_world = backWorld;
}

int32_t ZkMenuInstance_getPosX(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->pos_x;
}

void ZkMenuInstance_setPosX(ZkMenuInstance* slf, int32_t posX) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->pos_x = posX;
}

int32_t ZkMenuInstance_getPosY(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->pos_y;
}

void ZkMenuInstance_setPosY(ZkMenuInstance* slf, int32_t posY) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->pos_y = posY;
}

int32_t ZkMenuInstance_getDimX(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->dim_x;
}

void ZkMenuInstance_setDimX(ZkMenuInstance* slf, int32_t dimX) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->dim_x = dimX;
}

int32_t ZkMenuInstance_getDimY(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->dim_y;
}

void ZkMenuInstance_setDimY(ZkMenuInstance* slf, int32_t dimY) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->dim_y = dimY;
}

int32_t ZkMenuInstance_getAlpha(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->alpha;
}

void ZkMenuInstance_setAlpha(ZkMenuInstance* slf, int32_t alpha) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->alpha = alpha;
}

ZkString ZkMenuInstance_getMusicTheme(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->music_theme.c_str();
}

void ZkMenuInstance_setMusicTheme(ZkMenuInstance* slf, ZkString musicTheme) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->music_theme = musicTheme;
}

int32_t ZkMenuInstance_getEventTimerMsec(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->event_timer_msec;
}

void ZkMenuInstance_setEventTimerMsec(ZkMenuInstance* slf, int32_t eventTimerMsec) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->event_timer_msec = eventTimerMsec;
}

int32_t ZkMenuInstance_getFlags(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return static_cast<int32_t>(SLF->flags);
}

void ZkMenuInstance_setFlags(ZkMenuInstance* slf, int32_t flags) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->flags = static_cast<zenkit::MenuFlag>(flags);
}

int32_t ZkMenuInstance_getDefaultOutgame(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->default_outgame;
}

void ZkMenuInstance_setDefaultOutgame(ZkMenuInstance* slf, int32_t defaultOutgame) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->default_outgame = defaultOutgame;
}

int32_t ZkMenuInstance_getDefaultIngame(ZkMenuInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->default_ingame;
}

void ZkMenuInstance_setDefaultIngame(ZkMenuInstance* slf, int32_t defaultIngame) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->default_ingame = defaultIngame;
}

ZkString ZkMenuInstance_getItem(ZkMenuInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(ZkMenuInstance_ItemCount, i);
	return SLF->items[i].c_str();
}

void ZkMenuInstance_setItem(ZkMenuInstance* slf, ZkSize i, ZkString item) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(ZkMenuInstance_ItemCount, i);
	SLF->items[i] = item;
}
