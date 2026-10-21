#include "audio/mixer.h"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <mutex>

#include <SDL.h>

std::shared_ptr<Sample> decode_wav(const std::vector<uint8_t> &d)
{
	if (d.size() < 44 || memcmp(d.data(), "RIFF", 4) || memcmp(&d[8], "WAVE", 4))
		return nullptr;
	auto u16 = [&](size_t p) { return (unsigned)(d[p] | d[p + 1] << 8); };
	auto u32 = [&](size_t p) { return (uint32_t)(d[p] | d[p + 1] << 8 | d[p + 2] << 16 | (uint32_t)d[p + 3] << 24); };
	int channels = 0, bits = 0, rate = 0;
	size_t data = 0, len = 0;
	for (size_t p = 12; p + 8 <= d.size();) {
		uint32_t n = u32(p + 4);
		if (!memcmp(&d[p], "fmt ", 4) && p + 24 <= d.size()) {
			if (u16(p + 8) != 1)
				return nullptr;
			channels = (int)u16(p + 10);
			rate = (int)u32(p + 12);
			bits = (int)u16(p + 22);
		}
		else if (!memcmp(&d[p], "data", 4)) {
			data = p + 8;
			len = std::min<size_t>(n, d.size() - data);
		}
		p += 8 + n + (n & 1);
	}
	if (!data || (bits != 8 && bits != 16) || channels < 1 || channels > 2 || rate <= 0)
		return nullptr;
	auto s = std::make_shared<Sample>();
	s->rate = rate;
	size_t frame = (size_t)channels * (bits / 8);
	size_t frames = len / frame;
	s->data.resize(frames);
	for (size_t i = 0; i < frames; i++) {
		float sum = 0;
		for (int c = 0; c < channels; c++) {
			size_t p = data + i * frame + (size_t)c * (bits / 8);
			sum += bits == 8 ? (d[p] - 128) / 128.0f : (int16_t)u16(p) / 32768.0f;
		}
		s->data[i] = sum / (float)channels;
	}
	return s;
}

struct Mixer::Voice {
	std::shared_ptr<Sample> s;
	double pos = 0;
	float volume = 1, pitch = 1, pan = 0;
	bool loop = false;
	int id = 0;
};

struct Mixer::Impl {
	SDL_AudioDeviceID dev = 0;
	int rate = 44100;
	std::mutex lock;
	std::vector<Voice> voices;
	int next_id = 1;
	float *master = nullptr;

	static void callback(void *user, Uint8 *stream, int bytes)
	{
		Impl *m = (Impl *)user;
		float *out = (float *)stream;
		int frames = bytes / (int)(sizeof(float) * 2);
		std::fill(out, out + frames * 2, 0.0f);
		std::lock_guard<std::mutex> g(m->lock);
		float mv = *m->master;
		for (Voice &v : m->voices) {
			const std::vector<float> &d = v.s->data;
			double step = v.pitch * v.s->rate / m->rate;
			float l = v.volume * mv * std::min(1.0f, 1 - v.pan), r = v.volume * mv * std::min(1.0f, 1 + v.pan);
			for (int i = 0; i < frames; i++) {
				if (v.pos >= (double)d.size()) {
					if (!v.loop || d.empty()) {
						v.id = 0;
						break;
					}
					v.pos = fmod(v.pos, (double)d.size());
				}
				size_t a = (size_t)v.pos;
				size_t b = a + 1 < d.size() ? a + 1 : (v.loop ? 0 : a);
				float f = (float)(v.pos - (double)a);
				float x = d[a] + (d[b] - d[a]) * f;
				out[i * 2] += x * l;
				out[i * 2 + 1] += x * r;
				v.pos += step;
			}
		}
		m->voices.erase(std::remove_if(m->voices.begin(), m->voices.end(), [](const Voice &v) { return !v.id; }),
			m->voices.end());
		for (int i = 0; i < frames * 2; i++)
			out[i] = std::clamp(out[i], -1.0f, 1.0f);
	}
};

Mixer &Mixer::get()
{
	static Mixer m;
	return m;
}

bool Mixer::open()
{
	if (impl)
		return true;
	if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0)
		return false;
	impl = new Impl;
	impl->master = &master;
	SDL_AudioSpec want = {}, have;
	want.freq = 44100;
	want.format = AUDIO_F32SYS;
	want.channels = 2;
	want.samples = 1024;
	want.callback = Impl::callback;
	want.userdata = impl;
	impl->dev = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);
	if (!impl->dev) {
		SDL_Log("no sound: %s", SDL_GetError());
		delete impl;
		impl = nullptr;
		return false;
	}
	impl->rate = have.freq;
	SDL_PauseAudioDevice(impl->dev, 0);
	return true;
}

void Mixer::close()
{
	if (!impl)
		return;
	SDL_CloseAudioDevice(impl->dev);
	delete impl;
	impl = nullptr;
}

int Mixer::play(std::shared_ptr<Sample> s, float volume, bool loop, float pitch, float pan)
{
	if (!impl || !s || s->data.empty())
		return 0;
	std::lock_guard<std::mutex> g(impl->lock);
	Voice v;
	v.s = std::move(s);
	v.volume = volume;
	v.loop = loop;
	v.pitch = pitch;
	v.pan = pan;
	v.id = impl->next_id++;
	impl->voices.push_back(v);
	return v.id;
}

void Mixer::set(int voice, float volume, float pitch, float pan)
{
	if (!impl || !voice)
		return;
	std::lock_guard<std::mutex> g(impl->lock);
	for (Voice &v : impl->voices) {
		if (v.id == voice) {
			v.volume = volume;
			v.pitch = pitch;
			v.pan = pan;
		}
	}
}

void Mixer::stop(int voice)
{
	if (!impl || !voice)
		return;
	std::lock_guard<std::mutex> g(impl->lock);
	for (Voice &v : impl->voices) {
		if (v.id == voice)
			v.id = 0;
	}
}

void Mixer::stop_all()
{
	if (!impl)
		return;
	std::lock_guard<std::mutex> g(impl->lock);
	impl->voices.clear();
}

bool Mixer::playing(int voice)
{
	if (!impl || !voice)
		return false;
	std::lock_guard<std::mutex> g(impl->lock);
	for (const Voice &v : impl->voices) {
		if (v.id == voice)
			return true;
	}
	return false;
}
