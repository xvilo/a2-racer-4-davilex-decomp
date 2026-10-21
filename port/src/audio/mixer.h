/* Sound: a software mixer on SDL's audio (it takes the place of DirectSound and the
 * game's sound_lib). Samples are the game's WAV files (PCM, 8 or 16 bit, mono or
 * stereo, 8000..44100 Hz); each voice plays one with its own volume, pitch and pan, once
 * or looping. Without an audio device everything is silently ignored. */
#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

struct Sample {
	std::vector<float> data; /* mono, -1..1 */
	int rate = 22050;
};

/* Decodes a WAV file; null if it isn't one the game uses. */
std::shared_ptr<Sample> decode_wav(const std::vector<uint8_t> &bytes);

class Mixer {
public:
	static Mixer &get();
	bool open();
	void close();
	/* Starts a voice; returns its handle (0: none). */
	int play(std::shared_ptr<Sample> s, float volume = 1, bool loop = false, float pitch = 1, float pan = 0);
	void set(int voice, float volume, float pitch, float pan = 0);
	void stop(int voice);
	void stop_all();
	bool playing(int voice);
	/* The master volumes (0..1): effects and music voices. */
	float master = 1;

private:
	struct Voice;
	struct Impl;
	Impl *impl = nullptr;
};
