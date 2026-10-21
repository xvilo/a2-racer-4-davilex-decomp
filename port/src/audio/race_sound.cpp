#include "audio/race_sound.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>

#include "game/car.h"
#include "res/archive.h"
#include "xvga/inifile.h"

static std::string lower(std::string s)
{
	for (char &c : s)
		c = (char)tolower((unsigned char)c);
	return s;
}

bool RaceSound::load(const std::string &dir, const NamedArchive &archive, int car_sound)
{
	rcs = &archive;
	IniFile snd, car, raser;
	std::string p = find_file_ci(dir, "sound.ini");
	if (!p.empty() && snd.load(p)) {
		for (const std::string &k : snd.keys("SndTypes")) {
			std::vector<std::string> f = split_fields(snd.get("SndTypes", k));
			if (f.size() >= 4)
				types[lower(f[0])] = { f[1], (float)atof(f[3].c_str()) / 100 };
		}
	}
	p = find_file_ci(dir, "car_snd.ini");
	if (!p.empty() && car.load(p)) {
		std::string sec = "Car" + std::to_string(car_sound);
		rpm_name = car.get(sec, "GearA", "cmrpm");
		idle_name = car.get(sec, "Stat", "cmstat");
		min_rpm = (float)car.get_int(sec, "MinRpm", 800);
		max_rpm = (float)car.get_int(sec, "MaxRpm", 5800);
	}
	p = find_file_ci(dir, "Raser.ini");
	if (!p.empty() && raser.load(p)) {
		music_volume = raser.get_int("SOUND", "MUSICVOLUME", 90) / 100.0f;
		sfx_volume = raser.get_int("SOUND", "SFXVOLUME", 90) / 100.0f;
		on = raser.get_int("SOUND", "ON", 1) != 0;
		for (const std::string &k : raser.keys("MUSIC")) {
			if (!k.empty() && isdigit((unsigned char)k[0]))
				music_names[atoi(k.c_str())] = raser.get("MUSIC", k);
		}
	}
	/* Testing: A2_SOUND=0 keeps quiet. */
	if (const char *e = getenv("A2_SOUND"))
		on = on && *e != '0';
	if (!on || !Mixer::get().open())
		return false;
	for (const std::string &n : { rpm_name, idle_name })
		if (!sample(n))
			fprintf(stderr, "sound: no sample %s\n", n.c_str());
	return true;
}

std::shared_ptr<Sample> RaceSound::sample(const std::string &name)
{
	std::string key = lower(name);
	auto c = cache.find(key);
	if (c != cache.end())
		return c->second;
	std::shared_ptr<Sample> s;
	auto t = types.find(key);
	bool is_file = key.size() > 4 && key.compare(key.size() - 4, 4, ".wav") == 0;
	std::string file = t != types.end() ? t->second.first : is_file ? key : name + ".wav";
	std::vector<uint8_t> bytes;
	if (rcs && rcs->read(file, bytes))
		s = decode_wav(bytes);
	cache[key] = s;
	return s;
}

void RaceSound::volumes(float music, float sfx)
{
	if (music >= 0)
		music_volume = music;
	if (sfx >= 0)
		sfx_volume = sfx;
}

void RaceSound::start_music(int music)
{
	if (!on)
		return;
	auto m = music_names.find(music);
	if (m == music_names.end())
		return;
	auto t = types.find(lower(m->second));
	float v = t != types.end() ? t->second.second : 1;
	music_voice = Mixer::get().play(sample(m->second), v * music_volume * 0.6f, true);
}

void RaceSound::effect(const std::string &name, float volume)
{
	if (!on)
		return;
	auto t = types.find(lower(name));
	float v = t != types.end() ? t->second.second : 1;
	Mixer::get().play(sample(name), v * volume * sfx_volume);
}

int RaceSound::loop(const std::string &name)
{
	if (!on)
		return 0;
	return Mixer::get().play(sample(name), 0, true);
}

void RaceSound::set(int voice, float volume)
{
	Mixer::get().set(voice, volume * sfx_volume * 0.7f, 1);
}

void RaceSound::stop_voice(int voice)
{
	Mixer::get().stop(voice);
}

void RaceSound::engine(const Car &car, float throttle)
{
	if (!on)
		return;
	Mixer &mx = Mixer::get();
	if (!idle_voice)
		idle_voice = mx.play(sample(idle_name), 0, true);
	if (!rpm_voice)
		rpm_voice = mx.play(sample(rpm_name), 0, true);
	/* 0 at idle, 1 at the top of the rev range. */
	float f = std::clamp((car.rpm - min_rpm) / (max_rpm - min_rpm), 0.0f, 1.0f);
	float run = std::clamp(car.speed_kmh() / 25.0f, 0.0f, 1.0f);
	float load = 0.7f + 0.3f * throttle;
	mx.set(idle_voice, (1 - run) * 0.5f * sfx_volume, 0.9f + 0.3f * f);
	mx.set(rpm_voice, run * load * 0.55f * sfx_volume, 0.6f + 0.9f * f);
}

void RaceSound::stop()
{
	Mixer::get().stop_all();
	idle_voice = rpm_voice = music_voice = 0;
}
