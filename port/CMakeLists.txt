cmake_minimum_required(VERSION 3.16)
project(a2racer4 CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
	set(CMAKE_BUILD_TYPE RelWithDebInfo)
endif()

find_package(SDL2 REQUIRED CONFIG)

add_executable(a2racer4 WIN32
	src/main.cpp
	src/platform/sys.cpp
	src/platform/gl.cpp
	src/res/archive.cpp
	src/res/discimage.cpp
	src/res/image.cpp
	src/gfx/png.cpp
	src/xvga/inifile.cpp
	src/engine/mesh.cpp
	src/engine/road.cpp
	src/engine/texture.cpp
	src/engine/render.cpp
	src/engine/collision.cpp
	src/game/car.cpp
	src/game/ai_driver.cpp
	src/game/language.cpp
	src/game/race_rules.cpp
	src/engine/font.cpp
	src/engine/overlay.cpp
	src/game/loose_objects.cpp
	src/game/police.cpp
	src/game/paths.cpp
	src/game/track.cpp
	src/race/race_view.cpp
	src/race/race.cpp
	src/race/effects.cpp
	src/race/communicator.cpp
	src/audio/mixer.cpp
	src/audio/race_sound.cpp
	src/menu/delphi.cpp
	src/menu/dfm.cpp
	src/menu/canvas.cpp
	src/menu/forms.cpp
	src/menu/menu.cpp
	src/menu/savegame.cpp
	src/menu/film.cpp
	src/menu/winhelp.cpp
)
target_include_directories(a2racer4 PRIVATE src third_party)
# SDL2main (WinMain -> main) has to come before SDL2 for MinGW's linker.
if(TARGET SDL2::SDL2main)
	target_link_libraries(a2racer4 PRIVATE SDL2::SDL2main)
endif()
# Shared libraries where there are any, else the static ones (the release builds).
if(TARGET SDL2::SDL2)
	target_link_libraries(a2racer4 PRIVATE SDL2::SDL2)
else()
	target_link_libraries(a2racer4 PRIVATE SDL2::SDL2-static)
endif()
if(MSVC)
	target_compile_options(a2racer4 PRIVATE /W3 /utf-8)
	target_compile_definitions(a2racer4 PRIVATE _CRT_SECURE_NO_WARNINGS)
	# The C runtime built in, like SDL's static build.
	set_property(TARGET a2racer4 PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
else()
	target_compile_options(a2racer4 PRIVATE -Wall -Wextra -Wno-unused-parameter)
endif()
