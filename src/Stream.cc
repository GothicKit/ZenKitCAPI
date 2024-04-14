// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Stream.h"

#include "Internal.hh"

#ifdef _WIN32
typedef std::ptrdiff_t ssize_t;
#endif

class ZkReadExtImpl final : public zenkit::Read {
public:
	ZkReadExtImpl(ZkReadExt ext, void* ctx) : _m_ctx(ctx), _m_ext(ext) {}
	ZkReadExtImpl(ZkReadExtImpl const&) = delete;
	ZkReadExtImpl(ZkReadExtImpl&&) = delete;

	~ZkReadExtImpl() noexcept override {
		if (_m_ctx && _m_ext.del) {
			_m_ext.del(_m_ctx);
		}

		_m_ctx = nullptr;
	}

	size_t read(void* buf, size_t len) noexcept override {
		return _m_ext.read(_m_ctx, buf, len);
	}

	void seek(ssize_t off, zenkit::Whence whence) noexcept override {
		_m_ext.seek(_m_ctx, off, static_cast<ZkWhence>(whence));
	}

	[[nodiscard]] size_t tell() const noexcept override {
		return _m_ext.tell(_m_ctx);
	}

	[[nodiscard]] bool eof() const noexcept override {
		return _m_ext.eof(_m_ctx);
	}

private:
	void* _m_ctx;
	ZkReadExt _m_ext;
};

ZkRead* ZkRead_newFile(FILE* stream) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(stream);
	return zenkit::Read::from(stream).release();
}

ZkRead* ZkRead_newMem(ZkByte const* bytes, ZkSize length) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(bytes);
	return zenkit::Read::from(reinterpret_cast<std::byte const*>(bytes), length).release();
}

ZkRead* ZkRead_newPath(ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(path);

	try {
		return zenkit::Read::from(path).release();
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkRead_newPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkRead* ZkRead_newExt(ZkReadExt ext, void* ctx) {
	ZKC_TRACE_FN();
	return new ZkReadExtImpl {ext, ctx};
}

void ZkRead_del(ZkRead* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

ZkSize ZkRead_getSize(ZkRead* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	auto off = slf->tell();
	slf->seek(0, zenkit::Whence::END);
	auto size = slf->tell();
	slf->seek(static_cast<ssize_t>(off), zenkit::Whence::BEG);
	return size;
}

ZkSize ZkRead_getBytes(ZkRead* slf, void* buf, ZkSize length) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	auto off = slf->tell();
	slf->seek(0, zenkit::Whence::BEG);
	auto count = slf->read(buf, length);
	slf->seek(static_cast<ssize_t>(off), zenkit::Whence::BEG);
	return count;
}

class ZkWriteExtImpl final : public zenkit::Write {
public:
	ZkWriteExtImpl(ZkWriteExt ext, void* ctx) : _m_ctx(ctx), _m_ext(ext) {}
	ZkWriteExtImpl(ZkWriteExtImpl const&) = delete;
	ZkWriteExtImpl(ZkWriteExtImpl&&) = delete;

	~ZkWriteExtImpl() noexcept override {
		if (_m_ctx && _m_ext.del) {
			_m_ext.del(_m_ctx);
		}

		_m_ctx = nullptr;
	}

	size_t write(void const* buf, size_t len) noexcept override {
		return _m_ext.write(_m_ctx, buf, len);
	}

	void seek(ssize_t off, zenkit::Whence whence) noexcept override {
		_m_ext.seek(_m_ctx, off, static_cast<ZkWhence>(whence));
	}

	[[nodiscard]] size_t tell() const noexcept override {
		return _m_ext.tell(_m_ctx);
	}

private:
	void* _m_ctx;
	ZkWriteExt _m_ext;
};

ZkWrite* ZkWrite_newFile(FILE* stream) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(stream);
	return zenkit::Write::to(stream).release();
}

ZkWrite* ZkWrite_newMem(ZkByte* bytes, ZkSize length) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(bytes);
	return zenkit::Write::to(reinterpret_cast<std::byte*>(bytes), length).release();
}

ZkWrite* ZkWrite_newPath(ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(path);

	try {
		return zenkit::Write::to(path).release();
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkWrite_newPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkWrite* ZkWrite_newExt(ZkWriteExt ext, void* ctx) {
	ZKC_TRACE_FN();
	return new ZkWriteExtImpl {ext, ctx};
}

void ZkWrite_del(ZkWrite* slf) {
	ZKC_TRACE_FN();
	delete slf;
}
