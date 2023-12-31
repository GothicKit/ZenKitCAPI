#include "zenkit-capi/daedalus/MusicJingleInstance.hh"
#include "../Internal.hh"

ZkString ZkMusicJingleInstance_getName(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

void ZkMusicJingleInstance_setName(ZkMusicJingleInstance* slf, ZkString name) {
	ZKC_CHECK_NULLV(slf);
	slf->name = name;
}

int32_t ZkMusicJingleInstance_getLoop(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop;
}

void ZkMusicJingleInstance_setLoop(ZkMusicJingleInstance* slf, int32_t loop) {
	ZKC_CHECK_NULLV(slf);
	slf->loop = loop;
}

float ZkMusicJingleInstance_getVol(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vol;
}

void ZkMusicJingleInstance_setVol(ZkMusicJingleInstance* slf, float vol) {
	ZKC_CHECK_NULLV(slf);
	slf->vol = vol;
}

int32_t ZkMusicJingleInstance_getTranssubtype(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->transsubtype;
}

void ZkMusicJingleInstance_setTranssubtype(ZkMusicJingleInstance* slf, int32_t transsubtype) {
	ZKC_CHECK_NULLV(slf);
	slf->transsubtype = transsubtype;
}
