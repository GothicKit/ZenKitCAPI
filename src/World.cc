// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/World.h"

#include "Internal.hh"

ZkWorld* ZkWorld_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(buf);

	try {
		ZkWorld* slf = new ZkWorld(std::make_shared<zenkit::World>());
		SLF->load(buf);
		return slf;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWorld_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkWorld* ZkWorld_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(path);

	try {
		auto buf = zenkit::Read::from(path);

		ZkWorld* slf = new ZkWorld(std::make_shared<zenkit::World>());
		SLF->load(buf.get());

		return slf;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWorld_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkWorld* ZkWorld_loadVfs(ZkVfs* vfs, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(vfs, name);

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;
	auto rd = node->open_read();
	return ZkWorld_load(rd.get());
}

ZkWorld* ZkWorld_loadVersioned(ZkRead* buf, ZkGameVersion version) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(buf);

	try {
		ZkWorld* slf = new ZkWorld(std::make_shared<zenkit::World>());
		SLF->load(buf, static_cast<zenkit::GameVersion>(version));
		return slf;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWorld_load() failed: %s",
					  exc.what());
		return nullptr;
	}

}

ZkWorld* ZkWorld_loadPathVersioned(ZkString path, ZkGameVersion version) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(path);

	try {
		auto buf = zenkit::Read::from(path);

		ZkWorld* slf = new ZkWorld(std::make_shared<zenkit::World>());
		SLF->load(buf.get(), static_cast<zenkit::GameVersion>(version));

		return slf;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWorld_loadPath() failed: %s",
					  exc.what());
		return nullptr;
	}
}

ZkWorld* ZkWorld_loadVfsVersioned(ZkVfs* vfs, ZkString name, ZkGameVersion version) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(vfs, name);

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;
	auto rd = node->open_read();
	return ZkWorld_loadVersioned(rd.get(), version);
}

ZKC_DELETER(ZkWorld);

void ZkWorld_save(ZkWorld* slf, ZkWrite* write, ZkGameVersion version) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, write);

	auto ar = zenkit::WriteArchive::to(write, zenkit::ArchiveFormat::BINSAFE);
	ZKC_CATCH(SLF->save(*ar, static_cast<zenkit::GameVersion>(version)));
}

ZkMesh const* ZkWorld_getMesh(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &SLF->world_mesh;
}

ZkWayNet const* ZkWorld_getWayNet(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->way_net.get();
}

ZkBspTree const* ZkWorld_getBspTree(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &SLF->world_bsp_tree;
}

ZkSize ZkWorld_getRootObjectCount(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->world_vobs.size();
}

ZkVirtualObject const* ZkWorld_getRootObject(ZkWorld const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->world_vobs, i);
	return &SLF->world_vobs[i];
}

void ZkWorld_enumerateRootObjects(ZkWorld const* slf, ZkVirtualObjectEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto obj : SLF->world_vobs) {
		if (cb(ctx, &obj)) break;
	}
}

void ZkWorld_addRootObject(ZkWorld* slf, ZkVirtualObject* val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, val);
	SLF->world_vobs.push_back(*val);
}

void ZkWorld_clearRootObjects(ZkWorld* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->world_vobs.clear();
}

ZkBool ZkWorld_getNpcSpawnEnabled(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->npc_spawn_enabled;
}

void ZkWorld_setNpcSpawnEnabled(ZkWorld* slf, ZkBool val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->npc_spawn_enabled = val;
}

int ZkWorld_getNpcSpawnFlags(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->npc_spawn_flags;
}

void ZkWorld_setNpcSpawnFlags(ZkWorld* slf, int val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->npc_spawn_flags = val;
}

ZkSize ZkWorld_getNpcCount(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->npcs.size();
}

ZkNpc* ZkWorld_getNpc(ZkWorld const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->npcs, i);
	return &SLF->npcs[i];
}

void ZkWorld_clearNpcs(ZkWorld* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->npcs.clear();
}

void ZkWorld_removeNpc(ZkWorld* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->npcs, i);
	SLF->npcs.erase(SLF->npcs.begin() + static_cast<long>(i));
}

void ZkWorld_addNpc(ZkWorld* slf, ZkNpc* npc) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->npcs.push_back(*npc);
}

ZkSize ZkWorld_getSpawnLocationCount(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->npc_spawns.size();
}

ZkSpawnLocation ZkWorld_getSpawnLocation(ZkWorld* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->npc_spawns, i);

	auto& s = SLF->npc_spawns[i];
	return {
		&s.npc,
		s.position,
		s.timer
	};
}

void ZkWorld_clearSpawnLocations(ZkWorld* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->npc_spawns.clear();
}

void ZkWorld_addSpawnLocation(ZkWorld* slf, ZkSpawnLocation val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);

	SLF->npc_spawns.push_back({
		*val.npc,
		val.position,
		val.timer,
	});
}

void ZkWorld_removeSpawnLoaction(ZkWorld* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->npc_spawns, i);
	SLF->npc_spawns.erase(SLF->npc_spawns.begin() + static_cast<long>(i));
}

ZkCutscenePlayer* ZkWorld_getCutscenePlayer(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &SLF->player;
}

void ZkWorld_setCutscenePlayer(ZkWorld* slf, ZkCutscenePlayer* val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->player = val ? *val : nullptr;
}

ZkSkyController* ZkWorld_getSkyController(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &SLF->sky_controller;
}

void ZkWorld_setSkyController(ZkWorld* slf, ZkSkyController* val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->sky_controller = val ? *val : nullptr;
}

ZkCutscenePlayer* ZkCutscenePlayer_new(void) {
	ZKC_TRACE_FN();
	return new ZkCutscenePlayer {std::make_shared<zenkit::CutscenePlayer>()};
}

void ZkCutscenePlayer_del(ZkCutscenePlayer* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

int32_t ZkCutscenePlayer_getLastProcessDay(ZkCutscenePlayer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->last_process_day;
}

int32_t ZkCutscenePlayer_getLastProcessHour(ZkCutscenePlayer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->last_process_hour;
}

int32_t ZkCutscenePlayer_getPlayListCount(ZkCutscenePlayer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return static_cast<int32_t>(SLF->playlists.size());
}

ZkCutsceneContext* ZkCutscenePlayer_getPlayListItem(ZkCutscenePlayer const* slf, uint32_t index) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LEN(SLF->playlists, index);
	return new ZkCutsceneContext {SLF->playlists[index].lock()};
}

void ZkCutscenePlayer_setLastProcessDay(ZkCutscenePlayer* slf, int32_t val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->last_process_day = val;
}

void ZkCutscenePlayer_setLastProcessHour(ZkCutscenePlayer* slf, int32_t val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->last_process_hour = val;
}

ZkSkyController* ZkSkyContoller_new(void) {
	ZKC_TRACE_FN();
	return new ZkSkyController {std::make_shared<zenkit::SkyController>()};
}

void ZkSkyContoller_del(ZkSkyController* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

float ZkSkyController_getMasterTime(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->master_time;
}

float ZkSkyController_getRainWeight(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->rain_weight;
}

float ZkSkyController_getRainStart(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->rain_start;
}

float ZkSkyController_getRainStop(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->rain_stop;
}

float ZkSkyController_getRainSctTimer(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->rain_sct_timer;
}

float ZkSkyController_getRainSndVol(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->rain_snd_vol;
}

float ZkSkyController_getDayCtr(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->day_ctr;
}

float ZkSkyController_getFadeScale(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fade_scale;
}

ZkBool ZkSkyController_getRenderLightning(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->render_lightning;
}

ZkBool ZkSkyController_getIsRaining(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->is_raining;
}

int ZkSkyController_getRainCtr(ZkSkyController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->rain_ctr;
}

void ZkSkyController_setMasterTime(ZkSkyController* slf, float val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->master_time = val;
}

void ZkSkyController_setRainWeight(ZkSkyController* slf, float val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->rain_weight = val;
}

void ZkSkyController_setRainStart(ZkSkyController* slf, float val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->rain_start = val;
}

void ZkSkyController_setRainStop(ZkSkyController* slf, float val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->rain_stop = val;
}

void ZkSkyController_setRainSctTimer(ZkSkyController* slf, float val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->rain_sct_timer = val;
}

void ZkSkyController_setRainSndVol(ZkSkyController* slf, float val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->rain_snd_vol = val;
}

void ZkSkyController_setDayCtr(ZkSkyController* slf, float val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->day_ctr = val;
}

void ZkSkyController_setFadeScale(ZkSkyController* slf, float val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fade_scale = val;
}

void ZkSkyController_setRenderLightning(ZkSkyController* slf, ZkBool val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->render_lightning = val;
}

void ZkSkyController_setIsRaining(ZkSkyController* slf, ZkBool val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->is_raining = val;
}

void ZkSkyController_setRainCtr(ZkSkyController* slf, int val) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->rain_ctr = val;
}

