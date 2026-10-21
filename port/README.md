# A2 Racer 4 port

A C++ rewrite of **A2 Racer: De politie slaat terug!** (Davilex, 2000) on SDL2 and OpenGL, for Windows, Linux and macOS. It is written from the decompiled programs in `../decompiled/`; names follow the original sources (`Hud_Manager.cpp`, `TfrmMainScreen.FormShow`).

The game's own data is not included. Point the port at the original CD image, or at a copy of its files.

## Status

Working:
- **The menu**, built at run time from the player's own `Menu.exe` (its form resources and class tables): the main screen, Quick Race (track and character choice, with their pictures and the character's ratings) and its results, and the Tour: character, each track in turn with the garage before it (tune-ups for one race and turbo oil, bought with the prize money; a chase against the clock on the police tracks), the win / qualify / lose screens with the hosts' voices, and the final winner. Players: a new player's name at the first start, the player list (switch, add, delete; Annuleren undoes), each with their own save (`SaveGame<n>.RCR` in the user data folder or `--save`, byte for byte the original's format) keeping the difficulty, choices and Tour progress. Options: the controller, the keys (TfrmKeySettings, with the double-key check), joystick and wheel sensitivity, the start info shown before each race, picture quality (kept for the original; the port draws at the window's size) and the music, effects and voices volumes. Einde asks whether to go back to the main screen or stop.
- **The race**: the stage with its scenery, sky and objects; the player's car from `CAR_CFG.INI` and `VDYNS.DAT` with the port's own physics (the original used the Ipion library); a countdown, laps, times, positions and the finish; five computer rivals; traffic both ways; police that wait by the road, chase, and arrest; radar traps (and their fines); the turbo with its gauge; the pick-ups (money, turbo oil, freezing the others, fast forward); the original HUD from `overlay<n>.ini`; music, engine and effects.

Not yet: damage (the repair and invulnerability pick-ups only show their text), films (MPEG), the helper character.

Keys while driving: the arrow keys (or those in `game.ini` [INPUT]) steer, accelerate and brake/reverse; C changes the camera (chase, driver, two inspection views); R puts the car back on the road; Esc quits.

## Download

Builds of the latest commit are on the [latest release](https://github.com/xvilo/a2-racer-4-davilex-decomp/releases/tag/latest), and every version tag has its own release: Windows (x86-64), macOS (one universal executable for Apple Silicon and Intel) and Linux (x86-64, glibc 2.35 or later, e.g. Ubuntu 22.04+). Each is a single executable with SDL built in.

Put `a2racer4` next to the CD image (`A2RACER4.bin` or `.iso`) and start it, drag the image onto it, or run `a2racer4 --data /path/to/A2RACER4.bin`. A folder with a copy of the CD's files works too. The first start unpacks the CD's `Data` folder into the user's data folder (`%APPDATA%\Davilex\A2 Racer 4\disc` on Windows, `~/.local/share/Davilex/A2 Racer 4/disc` on Linux). The macOS build isn't notarised: run `xattr -dr com.apple.quarantine /path/to/a2racer4` once after unpacking.

## Build

You need CMake 3.16 or later, a C++17 compiler and SDL2. OpenGL is loaded through SDL at run time.

```bash
# Debian/Ubuntu: sudo apt install cmake libsdl2-dev
# macOS:         brew install cmake sdl2
cmake -S port -B port/build
cmake --build port/build
port/build/a2racer4 --data /path/to/A2RACER4.bin
```

For a self-contained executable, build SDL2 statically first: `tools/build_static_sdl.sh deps`, then configure with `-DCMAKE_PREFIX_PATH=$PWD/deps` (what the releases do).

| Option | Does |
|---|---|
| `--data <dir or image>` | Where the game files are (also `A2_DATA`): the CD image (`.bin` with raw 2352-byte sectors, or `.iso`), a copy of the CD, or its `Data` folder |
| `--save <dir>` | Where options and players go. Default: the user's data folder |
| `--scale N` | Opens the window at N × 800×600. The window can be resized freely and keeps 4:3 |
| `--race N` | Drives stage N (0–11) straight away; `--car N` picks the car (`CAR_CFG.INI` [league0] entry). For testing: `A2_AUTOPILOT=1` drives by itself along the lanes of the stage's drive map, `A2_TRACE=1` prints the car's state every second, `A2_START=<chunk>` starts elsewhere, `A2_LAPS`, `A2_RIVALS`, `A2_TRAFFIC`, `A2_POLICE` change the race, `A2_RACE_LIMIT=<s>` ends it early as finished, `A2_TOUR_START=<n>` begins the Tour at its n-th track |
| `--race-view N` | A fly-through along stage N's road |
| `--screenshot file.png` | Draws the main menu, saves it and exits, without a window |
| `--script file` | Scripted input for testing: keys, text, clicks and screenshots on a timeline (see `src/platform/sys.cpp`) |

## Layout

| Path | Contents |
|---|---|
| `src/main.cpp` | Entry point; takes the launcher's place (A2Racer4.exe) |
| `src/platform/` | SDL2: window, presenting the screen, OpenGL, input, time |
| `src/res/` | The CD image, the resource archives and the picture formats (TGA, BMP, PCX) |
| `src/gfx/` | PNG writer (screenshots) |
| `src/engine/` | The 3D engine's parts: models (`.d3d`), road chunks, textures, drawing, collision |
| `src/game/` | Stage description (`Raser.ini`, animations, objects, drive map), cars |
| `src/race/` | The race loop and the fly-through view |
| `src/xvga/` | INI files |
