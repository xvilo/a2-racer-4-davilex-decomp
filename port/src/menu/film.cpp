#include "menu/film.h"

#include <algorithm>
#include <cstdio>
#include <cstring>

#include "audio/mixer.h"
#include "menu/canvas.h"
#include "platform/sys.h"
#include "res/image.h"

#define PL_MPEG_IMPLEMENTATION
#include "pl_mpeg.h"

namespace {

uint32_t le32(const uint8_t *p) { return p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24; }
uint32_t be16(const uint8_t *p) { return (uint32_t)(p[0] << 8 | p[1]); }
uint32_t be24(const uint8_t *p) { return (uint32_t)(p[0] << 16 | p[1] << 8 | p[2]); }
uint32_t be32(const uint8_t *p) { return (uint32_t)p[0] << 24 | p[1] << 16 | p[2] << 8 | p[3]; }

uint32_t rgba(int r, int g, int b)
{
	return (uint32_t)std::clamp(r, 0, 255) | (uint32_t)std::clamp(g, 0, 255) << 8 | (uint32_t)std::clamp(b, 0, 255) << 16 |
		   0xff000000u;
}

} // namespace

/* RIFF: chunks of a four-letter id and a size, lists (RIFF, LIST) of a type and chunks;
 * avih starts with the microseconds per frame, the video frames are the "00dc" (or "00db")
 * chunks inside movi. */
bool CinepakFilm::open(const std::string &path)
{
	FILE *f = fopen(path.c_str(), "rb");
	if (!f)
		return false;
	data.clear();
	uint8_t buf[65536];
	size_t n;
	while ((n = fread(buf, 1, sizeof buf, f)) > 0)
		data.insert(data.end(), buf, buf + n);
	fclose(f);
	if (data.size() < 12 || memcmp(data.data(), "RIFF", 4) || memcmp(data.data() + 8, "AVI ", 4))
		return false;
	chunks.clear();
	std::vector<std::pair<size_t, size_t>> stack = { { 12, std::min<size_t>(8 + le32(&data[4]), data.size()) } };
	while (!stack.empty()) {
		auto [at, end] = stack.back();
		stack.pop_back();
		std::vector<std::pair<size_t, size_t>> lists;
		while (at + 8 <= end) {
			const uint8_t *c = &data[at];
			size_t size = le32(c + 4);
			if (at + 8 + size > end)
				size = end - at - 8;
			if (!memcmp(c, "LIST", 4) && size >= 4)
				lists.push_back({ at + 12, at + 8 + size });
			else if (!memcmp(c, "avih", 4) && size >= 4 && le32(c + 8) > 0)
				rate = 1e6f / (float)le32(c + 8);
			else if (c[2] == 'd' && (c[3] == 'c' || c[3] == 'b'))
				chunks.push_back({ at + 8, size });
			at += 8 + size + (size & 1);
		}
		/* In file order. */
		for (auto it = lists.rbegin(); it != lists.rend(); ++it)
			stack.push_back(*it);
	}
	if (chunks.empty() || chunks[0].second < 10)
		return false;
	w = (int)be16(&data[chunks[0].first + 4]);
	h = (int)be16(&data[chunks[0].first + 6]);
	picture.assign((size_t)w * (size_t)h, 0xff000000u);
	next = 0;
	return w > 0 && h > 0;
}

void CinepakFilm::seek(size_t n, Image &out)
{
	n = std::min(n, chunks.empty() ? 0 : chunks.size() - 1);
	if (n + 1 < next) {
		next = 0;
		std::fill(picture.begin(), picture.end(), 0xff000000u);
	}
	for (; next <= n && next < chunks.size(); next++)
		decode(&data[chunks[next].first], chunks[next].second);
	out.width = w;
	out.height = h;
	out.pixels = picture;
}

/* Cinepak (Radius / SuperMac): a frame of horizontal strips; each strip has two codebooks
 * of 256 2x2 blocks (Y0..Y3 and a shared U, V), V4 for 4x4 blocks made of four 2x2 ones
 * and V1 for 4x4 blocks of one 2x2 doubled, and then which entries each 4x4 block uses.
 * Codebooks and the picture carry over from the frame before (and a strip's codebooks
 * from the strip above unless the frame's flags say otherwise). */
void CinepakFilm::decode(const uint8_t *p, size_t size)
{
	if (size < 10)
		return;
	const uint8_t *end = p + size;
	int flags = p[0];
	int count = (int)be16(p + 8);
	p += 10;
	if ((int)strips.size() < count)
		strips.resize((size_t)count);
	int y0 = 0;
	for (int i = 0; i < count && p + 12 <= end; i++) {
		uint32_t strip_size = be24(p + 1);
		int height = (int)be16(p + 8);
		const uint8_t *strip_end = std::min(p + std::max<uint32_t>(strip_size, 12), end);
		if (i > 0 && !(flags & 1))
			strips[(size_t)i] = strips[(size_t)i - 1];
		strip(strips[(size_t)i], p + 12, strip_end, y0, std::min(y0 + height, h));
		y0 += height;
		p = strip_end;
	}
}

void CinepakFilm::strip(Strip &s, const uint8_t *p, const uint8_t *end, int y1, int y2)
{
	while (p + 4 <= end) {
		int id = p[0];
		const uint8_t *q = p + 4;
		const uint8_t *chunk_end = std::min(p + std::max<uint32_t>(be24(p + 1), 4), end);
		if (id >= 0x20 && id <= 0x27) {
			/* A codebook: 0x20.. V4, 0x22.. V1; +1 only the flagged entries; +4 grey. */
			Codebook *cb = (id & 0x02) ? s.v1 : s.v4;
			int bytes = (id & 0x04) ? 4 : 6;
			uint32_t flag = 0, mask = 0;
			for (int i = 0; i < 256; i++) {
				if ((id & 0x01) && !(mask >>= 1)) {
					if (q + 4 > chunk_end)
						break;
					flag = be32(q);
					q += 4;
					mask = 0x80000000u;
				}
				if (!(id & 0x01) || (flag & mask)) {
					if (q + bytes > chunk_end)
						break;
					memcpy(cb[i].y, q, 4);
					cb[i].u = bytes == 6 ? (int8_t)q[4] : 0;
					cb[i].v = bytes == 6 ? (int8_t)q[5] : 0;
					q += bytes;
				}
			}
		}
		else if (id >= 0x30 && id <= 0x32) {
			/* The blocks: 0x30 every block V1 or V4 (by flag bits), 0x31 also skipping
			 * unchanged ones, 0x32 every block V1. */
			uint32_t flag = 0, mask = 0;
			for (int y = y1; y < y2; y += 4) {
				for (int x = 0; x < w; x += 4) {
					if ((id & 0x01) && !(mask >>= 1)) {
						if (q + 4 > chunk_end)
							return;
						flag = be32(q);
						q += 4;
						mask = 0x80000000u;
					}
					if ((id & 0x01) && !(flag & mask))
						continue;
					if (!(id & 0x02) && !(mask >>= 1)) {
						if (q + 4 > chunk_end)
							return;
						flag = be32(q);
						q += 4;
						mask = 0x80000000u;
					}
					if ((id & 0x02) || !(flag & mask)) {
						if (q + 1 > chunk_end)
							return;
						const Codebook &c = s.v1[*q++];
						for (int k = 0; k < 4; k++) {
							int bx = x + (k & 1) * 2, by = y + (k >> 1) * 2;
							for (int j = 0; j < 4; j++)
								put(bx + (j & 1), by + (j >> 1), c, k);
						}
					}
					else {
						if (q + 4 > chunk_end)
							return;
						for (int k = 0; k < 4; k++) {
							const Codebook &c = s.v4[q[k]];
							int bx = x + (k & 1) * 2, by = y + (k >> 1) * 2;
							for (int j = 0; j < 4; j++)
								put(bx + (j & 1), by + (j >> 1), c, j);
						}
						q += 4;
					}
				}
			}
			return;
		}
		p = chunk_end;
	}
}

void CinepakFilm::put(int x, int y, const Codebook &c, int k)
{
	if (x >= w || y >= h)
		return;
	int Y = c.y[k], u = c.u, v = c.v;
	picture[(size_t)y * (size_t)w + (size_t)x] = rgba(Y + v * 2, Y - u / 2 - v, Y + u * 2);
}

bool play_mpeg(const std::string &path, Canvas &cv)
{
	/* The sound first, all of it (the mixer plays whole samples), mixed to mono. */
	plm_t *sound = plm_create_with_filename(path.c_str());
	if (!sound)
		return false;
	plm_set_video_enabled(sound, 0);
	auto sample = std::make_shared<Sample>();
	sample->rate = plm_get_samplerate(sound);
	while (plm_samples_t *s = plm_decode_audio(sound)) {
		for (unsigned i = 0; i < s->count; i++)
			sample->data.push_back((s->interleaved[2 * i] + s->interleaved[2 * i + 1]) * 0.5f);
	}
	plm_destroy(sound);

	plm_t *film = plm_create_with_filename(path.c_str());
	if (!film)
		return false;
	plm_set_audio_enabled(film, 0);
	int fw = plm_get_width(film), fh = plm_get_height(film);
	if (fw <= 0 || fh <= 0) {
		plm_destroy(film);
		return false;
	}
	std::vector<uint8_t> frame((size_t)fw * (size_t)fh * 4);
	Mixer &mx = Mixer::get();
	int voice = sample->data.empty() ? 0 : mx.play(sample, 1.0f);
	uint32_t start = sys_ticks();
	SysInput in;
	bool shown = false;
	while (!sys_quit_requested()) {
		sys_poll(in);
		if (in.key != KEY_NONE || in.mouse_clicked)
			break;
		double now = (sys_ticks() - start) / 1000.0;
		bool fresh = false;
		while (plm_get_time(film) < now) {
			plm_frame_t *f = plm_decode_video(film);
			if (!f)
				break;
			plm_frame_to_rgba(f, frame.data(), fw * 4);
			fresh = true;
		}
		if (plm_has_ended(film))
			break;
		if (fresh || !shown) {
			/* Scaled to the width, the middle of the screen. */
			int dh = fh * cv.w / fw, top = (cv.h - dh) / 2;
			cv.clear(0xff000000u);
			for (int y = 0; y < dh; y++) {
				int sy = y * fh / dh, cy = top + y;
				if (cy < 0 || cy >= cv.h)
					continue;
				const uint32_t *row = (const uint32_t *)&frame[(size_t)sy * (size_t)fw * 4];
				for (int x = 0; x < cv.w; x++)
					cv.px[(size_t)cy * (size_t)cv.w + (size_t)x] = row[x * fw / cv.w] | 0xff000000u;
			}
			sys_present(cv.px.data());
			shown = true;
		}
		sys_sleep(5);
	}
	if (voice)
		mx.stop(voice);
	plm_destroy(film);
	return true;
}
