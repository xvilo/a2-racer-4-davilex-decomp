/* The race's sounds (snd_main.cpp, car_snd.cpp, csndeng.cpp):
 *
 *   sound.ini [SndTypes] n=  name, file, ..., volume (%), ..., group; the game refers to
 *                            samples by name (cmrpm -> cmrpmm.wav)
 *   car_snd.ini [Car<n>]     a car's engine: GearA (the engine at speed), Stat (idling),
 *                            Start, MinRpm/MaxRpm
 *   Raser.ini [MUSIC]        the tunes; a stage's line in [MAPS] picks one; [SOUND] the
 *                            music and effects volumes (%)
 *
 * The original mixes per-gear cylinder samples by rpm; the port plays the idle and the
 * running samples, crossfaded and pitched by the rpm. */
#pragma once

#include <map>
#include <memory>
#include <string>

#include "audio/mixer.h"

class NamedArchive;
struct Car;

class RaceSound {
public:
	bool load(const std::string &dir, const NamedArchive &rcs, int car_sound);
	/* The player's volumes (0..1), in place of Raser.ini's; negative keeps those. */
	void volumes(float music, float sfx);
	void start_music(int music);
	/* A sample by its sound.ini name, played once. */
	void effect(const std::string &name, float volume = 1);
	/* A looping sample (e.g. a siren); its voice, for set() and stop_voice(). */
	int loop(const std::string &name);
	void set(int voice, float volume);
	void stop_voice(int voice);
	/* The player's engine, every frame. */
	void engine(const Car &car, float throttle);
	void stop();

private:
	std::shared_ptr<Sample> sample(const std::string &name);
	const NamedArchive *rcs = nullptr;
	std::map<std::string, std::pair<std::string, float>> types; /* name -> file, volume */
	std::map<std::string, std::shared_ptr<Sample>> cache;
	std::map<int, std::string> music_names;
	std::string rpm_name, idle_name;
	float min_rpm = 800, max_rpm = 5800;
	float music_volume = 0.9f, sfx_volume = 0.9f;
	int idle_voice = 0, rpm_voice = 0, music_voice = 0;
	bool on = false;
};
