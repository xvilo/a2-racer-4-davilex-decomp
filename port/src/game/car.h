/* A car: what it is (CAR_CFG.INI, VDYNS.DAT, its animation) and how it drives.
 *
 *   CAR_CFG.INI [league<n>] / [traffic] n=  name, animation, driver, engine sound, a number
 *                     (600, 1500...), car type, a number (5000), dynamics type, damage set
 *               [wheel_positions] <car type>=  front x, y, z, rear x, y, z
 *               [light_positions] <car type>=  front x, y, z, rear x, y, z
 *   VDYNS.DAT         100 records of 616 bytes (Car_dynm.cpp), one per dynamics type; the
 *                     values used here, by offset: 0x00 mass, 0x04 centre of gravity x, y, z,
 *                     0x10 and 0x14 (35, 30: steering), 0x98 top speed in km/h per engine
 *                     upgrade level (scaled by the difficulty), 0xac and 0xc0 tyre values per
 *                     level, 0xd4 the six gear ratios per gearbox level.
 *   The animation's frames: 0 body, 1 wheel, 2 windows, 3 and 4 lights.
 *
 * The original simulates the car with the Ipion physics library. The port drives it with
 * its own model (a car on four sampled ground points, with tyre forces from slip angles),
 * fed with the same mass, gears and speeds. */
#pragma once

#include <string>

class CollisionWorld;
class IniFile;
struct Track;

struct CarSpec {
	std::string name, animation, driver, sound;
	int type = 0, dynamics = 0;
	float wheel_front[3] = { 7.5f, 0, 13 }, wheel_rear[3] = { 7.5f, 0, -15 };
	float mass = 600;
	float top_speed = 100;        /* km/h */
	float grip = 0.7f, grip_shape = 3.8f;
	float gears[6] = { 2.8f, 2.2f, 1.3f, 1.0f, 0.8f, 0 };
	int gear_count = 5;

	/* Reads entry `index` of section (e.g. "league0") from CAR_CFG.INI and its dynamics
	 * record; motor/gearbox are the upgrade levels (0 or 1). An error message, or empty. */
	std::string load(const std::string &dir, const std::string &section, int index, int motor, int gearbox);
};

struct CarInput {
	float steer = 0;    /* -1 left .. 1 right */
	float throttle = 0; /* 0..1 */
	float brake = 0;    /* 0..1 */
	bool hold = false;  /* held on the line (before the start) */
};

struct Car {
	CarSpec spec;
	/* Game units are decimetres; the model works in metres and seconds. */
	float pos[3] = {};      /* the car's origin (on the ground under its middle), game units */
	float yaw = 0;          /* radians; 0 faces +z */
	float vel[3] = {};      /* m/s, world */
	float yaw_rate = 0;     /* rad/s */
	float steer = 0;        /* front wheel angle, radians */
	float up[3] = { 0, 1, 0 };
	float wheel_spin = 0;   /* radians */
	int gear = 1;
	float rpm = 0;
	int chunk = -1;         /* where on the road it is */
	bool on_grass = false;
	bool airborne = false;
	bool touching_wall = false;

	/* Puts the car on the road at chunk, facing the next chunk. */
	void place(const CollisionWorld &world, const Track &track, int chunk, float side);
	/* Puts the car at a position (game units) facing yaw, standing still. */
	void place_at(const CollisionWorld &world, const float p[3], float yaw);
	void step(const CollisionWorld &world, const CarInput &in, float dt);
	float speed_kmh() const;
	/* The car's axes in game coordinates. */
	void axes(float right[3], float up[3], float forward[3]) const;
};
