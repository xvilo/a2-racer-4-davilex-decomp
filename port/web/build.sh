#!/bin/sh
# Builds the web version into port/build-web/web: index.html, a2racer4.js, a2racer4.wasm.
# Needs Emscripten (emcc on the PATH, e.g. via emsdk_env.sh) and Rust's
# wasm32-unknown-emscripten target; the link flags are in .cargo/config.toml. Serve the
# folder over HTTP to play:
#   python3 -m http.server -d port/build-web/web
set -e
cd "$(dirname "$0")/.."
cargo build --release --no-default-features --target wasm32-unknown-emscripten
out=build-web/web
mkdir -p $out
cp web/index.html target/wasm32-unknown-emscripten/release/a2racer4.js \
	target/wasm32-unknown-emscripten/release/a2racer4.wasm $out/
echo "built $out"
