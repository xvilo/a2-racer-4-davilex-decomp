#!/usr/bin/env bash
# Builds SDL2 as a static library into $1 (default ./deps), for self-contained release
# builds of the port. Extra arguments go to the CMake configure (e.g. the macOS
# architectures). Used by .github/workflows/build.yml.
set -euo pipefail
SDL2_VERSION=${SDL2_VERSION:-2.30.9}
prefix=$(mkdir -p "${1:-deps}" && cd "${1:-deps}" && pwd)
shift || true

# Each step's output goes to a log; on failure its errors become GitHub annotations,
# which can be read without logging in.
run() {
	log=$1
	shift
	if ! "$@" > "$log" 2>&1; then
		# At most 10 annotations show per step: the errors first.
		{ grep -iE -A4 "CMake Error|error:|error [A-Z]+[0-9]+" "$log" || tail -10 "$log"; } | grep -v '^--$' | head -10 | tr -d '\r' | sed 's/^/::error::/'
		tail -60 "$log"
		exit 1
	fi
}

run dl.log curl -sSfL -o sdl.tar.gz https://github.com/libsdl-org/SDL/releases/download/release-$SDL2_VERSION/SDL2-$SDL2_VERSION.tar.gz
tar xzf sdl.tar.gz
# On Windows the C runtime goes in statically as well (the port links it so), so the
# executable needs no runtime DLLs.
run sdl-cfg.log cmake -S SDL2-$SDL2_VERSION -B sdl-build -DCMAKE_BUILD_TYPE=Release \
	-DCMAKE_INSTALL_PREFIX="$prefix" -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
	-DSDL_SHARED=OFF -DSDL_STATIC=ON -DSDL_TEST=OFF -DSDL_FORCE_STATIC_VCRT=ON "$@"
run sdl-build.log cmake --build sdl-build --config Release -j 4
run sdl-install.log cmake --install sdl-build --config Release
