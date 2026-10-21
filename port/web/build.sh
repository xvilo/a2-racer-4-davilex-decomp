#!/bin/sh
# Builds the web version into port/build-web/web: index.html, a2racer4.js, a2racer4.wasm.
# Needs Emscripten (emcmake and emcc on the PATH, e.g. via emsdk_env.sh). Serve the folder
# over HTTP to play:
#   python3 -m http.server -d port/build-web/web
set -e
cd "$(dirname "$0")/.."
emcmake cmake -S . -B build-web -DCMAKE_BUILD_TYPE=Release
cmake --build build-web -j4
out=build-web/web
mkdir -p $out
cp web/index.html build-web/a2racer4.js build-web/a2racer4.wasm $out/
echo "built $out"
