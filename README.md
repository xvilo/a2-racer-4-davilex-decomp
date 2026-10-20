# A2 Racer: De politie slaat terug! — static decompilation

Static reverse engineering of the Dutch CD-ROM release of **A2 Racer: De politie slaat terug!** (A2 Racer 4, Davilex Entertainment, 2000), using [REA](https://github.com/morluto/rea) with Ghidra as the decompiler backend. The aim is readable source for every program on the disc, named from the programs' own metadata and by hand, and from it a cross-platform port.

This repo holds **only tooling and decompiled output**. The CD dump and the files unpacked from it are **not** committed. Keep them outside the repo, by default in `../A2Racer4-dump/`.

## The dump (not in this repo)

Expected input is `A2RACER4.bin`, a DiscImageCreator dump: SHA-256 `09fabcadfa963b8417111feecc327b4bc1aded9612741a14268ba963ec7326df` (CRC32 `27d90f0a`, MD5 `91719a3cb9540aeff673946e6440b904`), 199,496 raw 2352-byte sectors, one Mode 1 data track, no read errors.

Unpack it next to the repo:

```bash
D=../A2Racer4-dump
python3 -I tools/bin2iso.py $D/A2RACER4.bin $D/A2RACER4.iso
python3 -I tools/isoextract.py $D/A2RACER4.iso $D/disc
```

`bin2iso.py` takes the 2048-byte user data from each sector. `isoextract.py` reads the Joliet directory tree and strips the `;1` version suffixes.

## Programs

| File | Built with | Role |
|---|---|---|
| `Data/A2Racer4.exe` | Visual C++ 6 | Launcher (`C:\Work\Motor\main.cpp`): starts the menu and the race in turn |
| `Data/MenuData/Menu.exe` | Delphi | Menus: players, options, controls, garage, tracks, scores; plays the films and drives the MS Agent helper |
| `Data/spel.dat` | Visual C++ 6 | The race (`C:\Work\A2IV\Game\prog`, `…\Engine\prog`, Davilex's DirectX and sound libraries, and the Ipion Virtual Physics library) |
| `Data/MenuData/Rsc.dll` | Visual C++ 6 (debug build) | Davilex's `xvga` file library: reads the resource archives for the menu |
| `Data/MenuData/SetDebug.exe` | Delphi | Developer tool that writes `debug.ini` |

The race uses DirectX 5: `IDirectDraw2`, `IDirect3D2` with `IDirect3DDevice2::DrawPrimitive`, DirectSound with 3D buffers, DirectInput. The menu uses DirectDraw and DirectSound, AVI and MCI for its films, and MS Agent for the helper character.

## Decompile

```bash
export JAVA_HOME=~/opt/jdk-21.0.12.1+1
export GHIDRA_INSTALL_DIR=~/opt/ghidra_12.1.4_PUBLIC
tools/decompile_all.sh                 # all programs
tools/decompile_all.sh spel.dat        # one program
A2_DISC=/elsewhere/disc tools/decompile_all.sh
```

For each program the script runs `rea analyze` (Ghidra provider, with a snapshot in `build/`), then Ghidra headless with these scripts:

| Script | Does |
|---|---|
| `ApplyNames.java` | Applies names, signatures and structures from `symbols/`, and parses `symbols/directx.h` (the DirectX 3/5 interfaces and structures) so COM calls read as `obj->lpVtbl->Method(obj, …)`. For the Delphi programs it adds Delphi's `register` calling convention |
| `RecoverNames.java` | Names functions from the program's own strings (see below) and records which source file each function's diagnostics name |
| `TypeFromCalls.java` | Gives each COM call a call-site signature, and types variables passed to structure-pointer parameters |
| `InferStructs.java` | Fills in structure layouts from how the code uses them |
| `AutoNameVariables.java` | Names variables from argument roles, call results, loop counters and types |
| `ExportDecompiled.java` | Writes `decompiled.c`, `functions.tsv` (with each prototype) and `strings.tsv` |

`tools/split_sources.py` then splits each export into the original source files, `decompiled/<program>/src/`, in the original directories (`game/`, `engine/`, `dx3d/`, `dxdraw/`, `inputlib/`, `sound_lib/`, `daviipionsupport/`; the Delphi programs by unit). The linker keeps each object file's code together, so the functions that name their file anchor the ones around them; `sources.tsv` says how each function was placed. Statically linked libraries without anchors (the Ipion physics library, the C++ standard library and the C runtime in `spel.dat`) are given by address range in `symbols/<program>.regions.tsv`.

### Where the names come from

- **The race's own diagnostics.** `spel.dat` reports errors as `error("%s(%d) : Function %s : …", __FILE__, __LINE__, "init_radar()")` and traces its start-up as `trace("init_radar()\n"); init_radar();`. `RecoverNames.java` turns the first into the reporting function's name and the second into the name of the function called next (when that is its only call site). Messages such as `Unknown error in CRaceOverlay::Init` name the function they are in. The `__FILE__` paths (135 source files under `C:\Work\A2IV\…`) place functions in their original source files: `decompiled/<program>/files.tsv`.
- **Delphi metadata.** `tools/delphi_names.py` reads the menu's class tables: every class with its parent, unit and size, published methods (the forms' event handlers), message handlers, property accessors and overridden virtual methods. It also converts the 45 binary form resources to text (`decompiled/Menu.exe/forms/*.dfm`, with `events.tsv` linking each control's events to their handlers).
- **By hand.** `symbols/manual/<program>.tsv` overrides everything else.

| File | Contents |
|---|---|
| `symbols/<program>.recovered.tsv` | Names `RecoverNames.java` found, with the evidence for each (rewritten by every run) |
| `symbols/<program>.tsv`, `.classes.tsv`, `.fields.tsv` | Delphi programs: names, classes and published fields from the metadata |
| `symbols/manual/<program>.tsv` | Hand-assigned names and signatures |
| `symbols/directx.h` | DirectX interfaces and structures, parsed into every program |
| `symbols/structs.tsv` | Hand-written structure layouts; `structs_auto.tsv` holds inferred ones |

## Layout

| Path | Contents |
|---|---|
| `tools/` | Scripts to unpack the dump, to decompile the programs and to unpack the game data (`a2extract.py`) |
| `decompiled/<program>/` | Per program: `decompiled.c` (every function), `functions.tsv`, `strings.tsv`, `files.tsv` and REA's `overview.json` |
| `decompiled/<program>/src/` | The same functions split into the original source files, with `sources.tsv` |
| `build/` | Ghidra projects, REA snapshots and logs (not committed) |

## Game data

`tools/a2extract.py <disc> <out>` unpacks the resource archives and converts their images to PNG (standard library only). Keep its output out of the repo, since it is the game's own data.

| Archive | Kind | Contents |
|---|---|---|
| `Data/rcs.IND/.IMG` | named | The race: 1,971 models (`.d3d`), sounds (WAV), textures and pictures (PCX, TGA), fonts (`.fnt`) |
| `Data/RC.IND/.IMG` | sprites | 186 8-bit sprites for the race |
| `Data/MenuData/MenuRcs.IND/.IMG` | named | The menu: screens and buttons (BMP, TGA, 800×600), sounds (WAV) |

- **Named archive:** the `.IND` holds a `u16` count followed by 24-byte entries `{char name[16]; u32 unused; u32 offset}`; `*empty resitem*` entries are placeholders. The same format as A2 Racer's.
- **Sprite archive:** the `.IND` holds a `u16` count followed by `u32` offsets into the `.IMG`. Each `.IMG` entry is `{u16 width, height, center_x, center_y; u8 pixels[width*height]}`.
- **`.CHK`:** `u16` version (2), `u32` count, then a `FILETIME` per archived file.

Each stage `etappe<n>` (0–8) has a road (`.rmp`), objects (`.omp`), paths (`.pth`), settings (`.ini`) and further maps (`.cmp`, `.dmp`, `.pmp`, `.hbp`). Most game rules are in INI files: `game.ini`, `CAR_CFG.INI`, `cops.ini`, `traffic.ini`, `damage.ini`, `behavior.ini` and others.
