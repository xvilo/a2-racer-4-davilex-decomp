#include "menu/agent.h"

#include <algorithm>
#include <cctype>
#include <cstdint>
#include <cstdio>

namespace {

struct Reader {
	const std::vector<uint8_t> &d;
	size_t p = 0;
	bool bad = false;

	bool need(size_t n)
	{
		if (p + n > d.size())
			bad = true;
		return !bad;
	}
	uint8_t u8() { return need(1) ? d[p++] : 0; }
	uint16_t u16()
	{
		if (!need(2))
			return 0;
		uint16_t v = (uint16_t)(d[p] | d[p + 1] << 8);
		p += 2;
		return v;
	}
	int16_t s16() { return (int16_t)u16(); }
	uint32_t u32()
	{
		if (!need(4))
			return 0;
		uint32_t v = (uint32_t)d[p] | (uint32_t)d[p + 1] << 8 | (uint32_t)d[p + 2] << 16 | (uint32_t)d[p + 3] << 24;
		p += 4;
		return v;
	}
	/* UTF-16, kept as Latin-1. */
	std::string str()
	{
		uint32_t n = u32();
		std::string s;
		if (n == 0 || !need((size_t)n * 2 + 2))
			return s;
		for (uint32_t i = 0; i < n; i++)
			s += (char)d[p + i * 2];
		p += (size_t)n * 2 + 2;
		return s;
	}
};

bool decompress(const uint8_t *src, size_t n, std::vector<uint8_t> &out)
{
	if (n < 2 || src[0] != 0)
		return false;
	size_t pos = 1;
	int bit = 0;
	bool over = false;
	auto get = [&]() {
		if (pos >= n) {
			over = true;
			return 0;
		}
		int v = src[pos] >> bit & 1;
		if (++bit == 8)
			bit = 0, pos++;
		return v;
	};
	auto bits = [&](int k) {
		uint32_t v = 0;
		for (int i = 0; i < k; i++)
			v |= (uint32_t)get() << i;
		return v;
	};
	while (!over) {
		if (!get()) {
			out.push_back((uint8_t)bits(8));
			continue;
		}
		int width = 6;
		uint32_t add = 1;
		if (get()) {
			width = 9, add = 65;
			if (get()) {
				width = 12, add = 577;
				if (get())
					width = 20, add = 4673;
			}
		}
		uint32_t offset = bits(width);
		if (width == 20 && offset == 0xFFFFF)
			return true;
		offset += add;
		uint32_t count = width == 20 ? 3 : 2;
		int k = 0;
		while (k < 11 && get())
			k++;
		count += (1u << k) - 1 + bits(k);
		if (offset > out.size())
			return false;
		for (uint32_t i = 0; i < count; i++)
			out.push_back(out[out.size() - offset]);
	}
	return false;
}

} // namespace

bool AgentCharacter::load(const std::string &path)
{
	std::vector<uint8_t> d;
	if (FILE *f = fopen(path.c_str(), "rb")) {
		uint8_t buf[65536];
		size_t got;
		while ((got = fread(buf, 1, sizeof buf, f)) > 0)
			d.insert(d.end(), buf, buf + got);
		fclose(f);
	}
	Reader r{ d };
	if (r.u32() != 0xABCDABC3u)
		return false;
	uint32_t char_at = r.u32();
	r.u32();
	uint32_t anim_at = r.u32();
	r.u32();
	uint32_t image_at = r.u32();

	r.p = char_at;
	r.p += 4 + 8 + 16;
	width = r.u16();
	height = r.u16();
	uint8_t transparent = r.u8();
	uint32_t flags = r.u32();
	r.p += 4;
	if (flags & 0x20) {
		r.p += 16 + 16 + 4 + 2;
		if (r.u8()) {
			r.p += 4;
			r.str();
			r.p += 4;
			r.str();
		}
	}
	if (flags & 0x200) {
		r.p += 2 + 12;
		r.str();
		r.p += 4 + 4 + 2;
	}
	uint32_t colours = std::min(r.u32(), 256u);
	uint32_t palette[256] = {};
	for (uint32_t i = 0; i < colours; i++) {
		uint8_t b = r.u8(), g = r.u8(), rr = r.u8();
		r.u8();
		palette[i] = rgba(rr, g, b);
	}
	palette[transparent] = 0;

	r.p = image_at;
	uint32_t count = r.u32();
	std::vector<std::pair<uint32_t, uint32_t>> where;
	for (uint32_t i = 0; i < count && !r.bad; i++) {
		uint32_t at = r.u32(), size = r.u32();
		r.u32();
		where.push_back({ at, size });
	}
	for (auto [at, size] : where) {
		auto img = std::make_shared<Image>();
		Reader ir{ d, at };
		ir.u8();
		int w = ir.u16(), h = ir.u16();
		bool packed = ir.u8() != 0;
		uint32_t n = ir.u32();
		size_t stride = (size_t)(w + 3) & ~(size_t)3;
		std::vector<uint8_t> px;
		if (ir.need(n)) {
			if (packed)
				decompress(&d[ir.p], n, px);
			else
				px.assign(d.begin() + (long)ir.p, d.begin() + (long)(ir.p + n));
		}
		if (px.size() >= stride * (size_t)h) {
			img->width = w;
			img->height = h;
			img->pixels.resize((size_t)w * h);
			for (int y = 0; y < h; y++)
				for (int x = 0; x < w; x++)
					img->pixels[(size_t)y * w + x] = palette[px[(size_t)(h - 1 - y) * stride + x]];
		}
		images.push_back(img);
	}

	r.p = anim_at;
	count = r.u32();
	for (uint32_t i = 0; i < count && !r.bad; i++) {
		std::string name = r.str();
		uint32_t at = r.u32();
		r.u32();
		for (char &c : name)
			c = (char)toupper((unsigned char)c);
		Reader ar{ d, at };
		ar.str();
		ar.u8();
		ar.str();
		Animation a;
		for (int f = 0, nf = ar.u16(); f < nf && !ar.bad; f++) {
			Frame fr;
			for (int k = 0, ni = ar.u16(); k < ni && !ar.bad; k++) {
				fr.images.push_back((int)ar.u32());
				int ox = ar.s16(), oy = ar.s16();
				fr.offsets.push_back({ ox, oy });
			}
			ar.u16();
			fr.duration_ms = ar.u16() * 10;
			fr.exit = ar.s16();
			for (int k = 0, nb = ar.u8(); k < nb; k++) {
				int to = ar.u16(), pc = ar.u16();
				fr.branches.push_back({ to, pc });
			}
			/* Mouth overlays: u8 type, u8 replace, u16 image, u8, u8 region, i16 x, y,
			 * u16 w, h, then the region if any. Her file has none; skipped all the same. */
			for (int k = 0, no = ar.u8(); k < no && !ar.bad; k++) {
				ar.p += 4;
				ar.u8();
				bool region = ar.u8() != 0;
				ar.p += 8;
				if (region)
					ar.p += ar.u32();
			}
			a.frames.push_back(fr);
		}
		if (!ar.bad)
			animations[name] = a;
	}
	return !r.bad && !images.empty();
}

unsigned AgentPlayer::random()
{
	rnd = rnd * 1103515245u + 12345u;
	return rnd >> 16;
}

void AgentPlayer::play(const char *name)
{
	playing = nullptr;
	if (!character)
		return;
	auto it = character->animations.find(name);
	if (it == character->animations.end() || it->second.frames.empty())
		return;
	playing = &it->second;
	at = 0;
	left = playing->frames[0].duration_ms / 1000.0f;
}

void AgentPlayer::show(int at_x, int at_y)
{
	x = at_x;
	y = at_y;
	if (state == SHOWING || state == IDLE)
		return;
	state = SHOWING;
	shown_for = 0;
	idle_wait = 4 + (float)(random() % 5);
	play("SHOWING");
	if (!playing)
		state = IDLE;
}

void AgentPlayer::hide()
{
	if (state == HIDDEN || state == HIDING)
		return;
	state = HIDING;
	play("HIDING");
	if (!playing)
		state = HIDDEN;
}

void AgentPlayer::update(float dt)
{
	if (state == HIDDEN)
		return;
	shown_for += dt;
	if (playing) {
		left -= dt;
		while (playing && left <= 0) {
			const AgentCharacter::Frame &f = playing->frames[at];
			size_t next = at + 1;
			if (!f.branches.empty()) {
				int roll = (int)(random() % 100), sum = 0;
				for (auto [to, pc] : f.branches)
					if (roll < (sum += pc)) {
						next = (size_t)to;
						break;
					}
			}
			if (!f.images.empty())
				rest_image = f.images[0];
			if (next >= playing->frames.size()) {
				playing = nullptr;
				if (state == HIDING)
					state = HIDDEN;
				else
					state = IDLE;
				break;
			}
			at = next;
			left += playing->frames[at].duration_ms / 1000.0f;
		}
		return;
	}
	if (state == IDLE && (idle_wait -= dt) <= 0) {
		idle_wait = 5 + (float)(random() % 6);
		play(shown_for < 30 ? "IDLINGLEVEL1" : shown_for < 60 ? "IDLINGLEVEL2" : "IDLINGLEVEL3");
	}
}

const Image *AgentPlayer::frame() const
{
	if (state == HIDDEN || !character)
		return nullptr;
	int img = playing && !playing->frames[at].images.empty() ? playing->frames[at].images[0] : rest_image;
	if (img < 0 || (size_t)img >= character->images.size())
		return nullptr;
	const Image *p = character->images[(size_t)img].get();
	return p->pixels.empty() ? nullptr : p;
}
