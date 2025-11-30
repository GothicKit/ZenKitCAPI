// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Texture.h"

#include "Internal.hh"

ZKC_LOADER(ZkTexture);
ZKC_PATH_LOADER(ZkTexture);
ZKC_VFS_LOADER(ZkTexture);
ZKC_DELETER(ZkTexture);

ZkTextureFormat ZkTexture_getFormat(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkTextureFormat>(slf->format());
}

uint32_t ZkTexture_getWidth(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->width();
}

uint32_t ZkTexture_getHeight(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->height();
}

uint32_t ZkTexture_getWidthMipmap(ZkTexture const* slf, ZkSize level) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(slf->mipmaps(), level);
	return slf->mipmap_width(static_cast<uint32_t>(level));
}

uint32_t ZkTexture_getHeightMipmap(ZkTexture const* slf, ZkSize level) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(slf->mipmaps(), level);
	return slf->mipmap_height(static_cast<uint32_t>(level));
}

uint32_t ZkTexture_getWidthRef(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->ref_width();
}

uint32_t ZkTexture_getHeightRef(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->ref_height();
}

uint32_t ZkTexture_getMipmapCount(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->mipmaps();
}

uint32_t ZkTexture_getAverageColor(ZkTexture const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->average_color();
}

ZkSize ZkTexture_getPaletteSize(ZkTexture const*) {
	ZKC_TRACE_FN();
	return zenkit::ZTEX_PALETTE_ENTRIES;
}

ZkColor ZkTexture_getPaletteItem(ZkTexture const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(zenkit::ZTEX_PALETTE_ENTRIES, i);
	return slf->palette()[i];
}

void ZkTexture_enumeratePaletteItems(ZkTexture const* slf, ZkColorEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	auto const* pal = slf->palette();
	for (int i = 0; i < zenkit::ZTEX_PALETTE_ENTRIES; ++i) {
		if (cb(ctx, pal[i])) break;
	}
}

uint8_t const* ZkTexture_getMipmapRaw(ZkTexture const* slf, ZkSize level, ZkSize* size) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, size);

	*size = slf->data(static_cast<uint32_t>(level)).size();
	return slf->data(static_cast<uint32_t>(level)).data();
}

ZkSize ZkTexture_getMipmapRgba(ZkTexture const* slf, ZkSize level, uint8_t* buf, ZkSize size) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, buf);

	auto data = slf->as_rgba8(static_cast<uint32_t>(level));
	if (size < data.size()) {
		ZKC_LOG_WARN("ZkTexture_getMipmapRgba() returning incomplete image: buffer too small");
	} else {
		size = data.size();
	}

	std::copy_n(data.data(), size, buf);
	return size;
}

void ZkTexture_enumerateRawMipmaps(ZkTexture const* slf, ZkTextureMipmapEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto i = 0u; i < slf->mipmaps(); ++i) {
		if (cb(ctx, i, slf->data(i).data(), slf->data(i).size())) break;
	}
}

void ZkTexture_enumerateRgbaMipmaps(ZkTexture const* slf, ZkTextureMipmapEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto i = 0u; i < slf->mipmaps(); ++i) {
		auto rgba = slf->as_rgba8(i);
		if (cb(ctx, i, rgba.data(), rgba.size())) break;
	}
}

ZkTextureBuilder* ZkTextureBuilder_new(ZkSize width, ZkSize height) {
	ZKC_TRACE_FN();
	return new ZkTextureBuilder {static_cast<unsigned int>(width), static_cast<unsigned int>(height)};
}

void ZkTextureBuilder_del(ZkTextureBuilder* slf) {
	delete slf;
}

ZkBool ZkTextureBuilder_addMipmap(ZkTextureBuilder* slf, ZkByte* buf, ZkSize len, ZkTextureFormat fmt) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, buf);

	try {
		std::vector<uint8_t> dta;
		dta.assign(buf, buf + len);
		slf->add_mipmap(std::move(dta), static_cast<zenkit::TextureFormat>(fmt));
		return true;
	} catch (zenkit::Error const& exc) {
		ZKC_LOG_ERROR("ZkTextureBuilder_addMipmap() failed: %s", exc.what());
		return false;
	}
}

ZkTexture* ZkTextureBuilder_build(ZkTextureBuilder* slf, ZkTextureFormat fmt) {
	auto tex = slf->build(static_cast<zenkit::TextureFormat>(fmt));
	return ZKC_WRAP_NEW(tex);
}
