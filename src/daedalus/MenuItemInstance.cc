#include "zenkit-capi/daedalus/MenuItemInstance.h"
#include "../Internal.hh"

ZkString ZkMenuItemInstance_getFontName(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->fontname.c_str();
}

void ZkMenuItemInstance_setFontName(ZkMenuItemInstance* slf, ZkString fontName) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->fontname = fontName;
}

ZkString ZkMenuItemInstance_getBackpic(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->backpic.c_str();
}

void ZkMenuItemInstance_setBackpic(ZkMenuItemInstance* slf, ZkString backpic) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->backpic = backpic;
}

ZkString ZkMenuItemInstance_getAlphaMode(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->alphamode.c_str();
}

void ZkMenuItemInstance_setAlphaMode(ZkMenuItemInstance* slf, ZkString alphaMode) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->alphamode = alphaMode;
}

int32_t ZkMenuItemInstance_getAlpha(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->alpha;
}

void ZkMenuItemInstance_setAlpha(ZkMenuItemInstance* slf, int32_t alpha) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->alpha = alpha;
}

ZkMenuItemType ZkMenuItemInstance_getType(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return static_cast<ZkMenuItemType>(SLF->type);
}

void ZkMenuItemInstance_setType(ZkMenuItemInstance* slf, ZkMenuItemType type) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->type = static_cast<zenkit::MenuItemType>(type);
}

ZkString ZkMenuItemInstance_getOnChgSetOption(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->on_chg_set_option.c_str();
}

void ZkMenuItemInstance_setOnChgSetOption(ZkMenuItemInstance* slf, ZkString onChgSetOption) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->on_chg_set_option = onChgSetOption;
}

ZkString ZkMenuItemInstance_getOnChgSetOptionSection(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->on_chg_set_option_section.c_str();
}

void ZkMenuItemInstance_setOnChgSetOptionSection(ZkMenuItemInstance* slf, ZkString onChgSetOptionSection) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->on_chg_set_option_section = onChgSetOptionSection;
}

int32_t ZkMenuItemInstance_getPosX(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->pos_x;
}

void ZkMenuItemInstance_setPosX(ZkMenuItemInstance* slf, int32_t posX) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->pos_x = posX;
}

int32_t ZkMenuItemInstance_getPosY(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->pos_y;
}

void ZkMenuItemInstance_setPosY(ZkMenuItemInstance* slf, int32_t posY) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->pos_y = posY;
}

int32_t ZkMenuItemInstance_getDimX(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->dim_x;
}

void ZkMenuItemInstance_setDimX(ZkMenuItemInstance* slf, int32_t dimX) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->dim_x = dimX;
}

int32_t ZkMenuItemInstance_getDimY(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->dim_y;
}

void ZkMenuItemInstance_setDimY(ZkMenuItemInstance* slf, int32_t dimY) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->dim_y = dimY;
}

float ZkMenuItemInstance_getSizeStartScale(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->size_start_scale;
}

void ZkMenuItemInstance_setSizeStartScale(ZkMenuItemInstance* slf, float sizeStartScale) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->size_start_scale = sizeStartScale;
}

int32_t ZkMenuItemInstance_getFlags(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return static_cast<int32_t>(SLF->flags);
}

void ZkMenuItemInstance_setFlags(ZkMenuItemInstance* slf, int32_t flags) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->flags = static_cast<zenkit::MenuItemFlag>(flags);
}

float ZkMenuItemInstance_getOpenDelayTime(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->open_delay_time;
}

void ZkMenuItemInstance_setOpenDelayTime(ZkMenuItemInstance* slf, float openDelayTime) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->open_delay_time = openDelayTime;
}

float ZkMenuItemInstance_getOpenDuration(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->open_duration;
}

void ZkMenuItemInstance_setOpenDuration(ZkMenuItemInstance* slf, float openDuration) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->open_duration = openDuration;
}

int32_t ZkMenuItemInstance_getFramePosX(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->frame_posx;
}

void ZkMenuItemInstance_setFramePosX(ZkMenuItemInstance* slf, int32_t framePosX) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->frame_posx = framePosX;
}

int32_t ZkMenuItemInstance_getFramePosY(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->frame_posy;
}

void ZkMenuItemInstance_setFramePosY(ZkMenuItemInstance* slf, int32_t framePosY) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->frame_posy = framePosY;
}

int32_t ZkMenuItemInstance_getFrameSizeX(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->frame_sizex;
}

void ZkMenuItemInstance_setFrameSizeX(ZkMenuItemInstance* slf, int32_t frameSizeX) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->frame_sizex = frameSizeX;
}

int32_t ZkMenuItemInstance_getFrameSizeY(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->frame_sizey;
}

void ZkMenuItemInstance_setFrameSizeY(ZkMenuItemInstance* slf, int32_t frameSizeY) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->frame_sizey = frameSizeY;
}

ZkString ZkMenuItemInstance_getHideIfOptionSectionSet(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->hide_if_option_section_set.c_str();
}

void ZkMenuItemInstance_setHideIfOptionSectionSet(ZkMenuItemInstance* slf, ZkString hideIfOptionSectionSet) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->hide_if_option_section_set = hideIfOptionSectionSet;
}

ZkString ZkMenuItemInstance_getHideIfOptionSet(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->hide_if_option_set.c_str();
}

void ZkMenuItemInstance_setHideIfOptionSet(ZkMenuItemInstance* slf, ZkString hideIfOptionSet) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->hide_if_option_set = hideIfOptionSet;
}

int32_t ZkMenuItemInstance_getHideOnValue(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->hide_on_value;
}

void ZkMenuItemInstance_setHideOnValue(ZkMenuItemInstance* slf, int32_t hideOnValue) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->hide_on_value = hideOnValue;
}

ZkString ZkMenuItemInstance_getText(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(ZkMenuItemInstance_TextCount, i);
	return SLF->text[i].c_str();
}

void ZkMenuItemInstance_setText(ZkMenuItemInstance* slf, ZkSize i, ZkString text) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(ZkMenuItemInstance_TextCount, i);
	SLF->text[i] = text;
}

int32_t ZkMenuItemInstance_getOnSelAction(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(ZkMenuItemInstance_SelectActionCount, i);
	return SLF->on_sel_action[i];
}

void ZkMenuItemInstance_setOnSelAction(ZkMenuItemInstance* slf, ZkSize i, int32_t onSelAction) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(ZkMenuItemInstance_TextCount, i);
	SLF->on_sel_action[i] = onSelAction;
}

ZkString ZkMenuItemInstance_getOnSelActionS(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(ZkMenuItemInstance_SelectActionCount, i);
	return SLF->on_sel_action_s[i].c_str();
}

void ZkMenuItemInstance_setOnSelActionS(ZkMenuItemInstance* slf, ZkSize i, ZkString onSelActionS) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(ZkMenuItemInstance_SelectActionCount, i);
	SLF->on_sel_action_s[i] = onSelActionS;
}

int32_t ZkMenuItemInstance_getOnEventAction(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(ZkMenuItemInstance_EventActionCount, i);
	return SLF->on_event_action[i];
}

void ZkMenuItemInstance_setOnEventAction(ZkMenuItemInstance* slf, ZkSize i, int32_t onEventAction) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(ZkMenuItemInstance_EventActionCount, i);
	SLF->on_event_action[i] = onEventAction;
}

float ZkMenuItemInstance_getUserFloat(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(ZkMenuItemInstance_UserItemCount, i);
	return SLF->user_float[i];
}

void ZkMenuItemInstance_setUserFloat(ZkMenuItemInstance* slf, ZkSize i, float userFloat) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(ZkMenuItemInstance_UserItemCount, i);
	SLF->user_float[i] = userFloat;
}

ZkString ZkMenuItemInstance_getUserString(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(ZkMenuItemInstance_UserItemCount, i);
	return SLF->user_string[i].c_str();
}

void ZkMenuItemInstance_setUserString(ZkMenuItemInstance* slf, ZkSize i, ZkString userString) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(ZkMenuItemInstance_UserItemCount, i);
	SLF->user_string[i] = userString;
}
