#!/usr/bin/env bash
# Decompile the A2 Racer 4 programs with REA (overview + snapshot) and Ghidra headless
# (full C export), with names recovered from the programs' own strings and hand-assigned
# names. Needs JAVA_HOME and GHIDRA_INSTALL_DIR.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
# The disc files stay outside this repo; point A2_DISC elsewhere if needed.
DISC="${A2_DISC:-$ROOT/../A2Racer4-dump/disc}"
[ -d "$DISC" ] || { echo "disc directory not found: $DISC (set A2_DISC)" >&2; exit 1; }
DISC="$(cd "$DISC" && pwd)"
: "${JAVA_HOME:?set JAVA_HOME to a JDK 21+}"
: "${GHIDRA_INSTALL_DIR:?set GHIDRA_INSTALL_DIR to a Ghidra 12.1.x install}"
export PATH="$JAVA_HOME/bin:$PATH"
REA="npx -y rea-agents@6.7.0"

# Module name -> path on the disc. Menu.exe and SetDebug.exe are Delphi programs; the
# others are Visual C++ 6.
declare -A PATHS=(
	[A2Racer4.exe]=Data/A2Racer4.exe
	[spel.dat]=Data/spel.dat
	[Rsc.dll]=Data/MenuData/Rsc.dll
	[Menu.exe]=Data/MenuData/Menu.exe
	[SetDebug.exe]=Data/MenuData/SetDebug.exe
)
modules=("$@")
[ ${#modules[@]} -eq 0 ] && modules=(A2Racer4.exe Rsc.dll spel.dat Menu.exe SetDebug.exe)

mkdir -p "$ROOT/build/snapshots" "$ROOT/build/ghidra" "$ROOT/build/logs" "$ROOT/build/names" \
	"$ROOT/build/structs" "$ROOT/build/recovered" "$ROOT/symbols/manual"

for m in "${modules[@]}"; do
	bin="$DISC/${PATHS[$m]}"
	out="$ROOT/decompiled/$m"
	names="$ROOT/build/names/$m.tsv"
	mkdir -p "$out"
	# Delphi programs: names from their class and form metadata, and Delphi's calling
	# convention.
	lang=()
	if [ "$m" = Menu.exe ] || [ "$m" = SetDebug.exe ]; then
		python3 -I "$ROOT/tools/delphi_names.py" "$bin" "$ROOT/symbols/$m.tsv" "$out/forms"
		lang=(delphi)
	fi
	# Recovered names (from the last run, or the Delphi metadata), then hand-assigned ones
	# (symbols/manual/<module>.tsv) over them.
	python3 -I "$ROOT/tools/merge_names.py" "$names" "$ROOT/symbols/$m.tsv" "$ROOT/symbols/$m.recovered.tsv" \
		"$ROOT/symbols/manual/$m.tsv"

	echo "== $m: REA overview"
	$REA analyze "$bin" --provider ghidra \
		--snapshot "$ROOT/build/snapshots/$m.snapshot" --format json \
		> "$out/overview.json" 2> "$ROOT/build/logs/$m.rea.log"
	# Keep machine-specific paths out of the committed evidence.
	sed -i "s|$DISC/|disc/|g" "$out/overview.json"

	echo "== $m: Ghidra full export"
	rm -rf "$ROOT/build/ghidra/$m.gpr" "$ROOT/build/ghidra/$m.rep"
	# spel.dat is a PE file; force the PE loader since the extension hides it.
	"$GHIDRA_INSTALL_DIR/support/analyzeHeadless" "$ROOT/build/ghidra" "$m" \
		-import "$bin" -loader PeLoader -scriptPath "$ROOT/tools" \
		-preScript ApplyNames.java pre "$names" "$ROOT/symbols/structs.tsv" "$ROOT/symbols/directx.h" "${lang[@]}" \
		-postScript ApplyNames.java post "$names" "${lang[@]}" \
		-postScript RecoverNames.java "$ROOT/build/recovered/$m" \
		-postScript TypeFromCalls.java \
		-postScript InferStructs.java "$ROOT/build/structs/$m.tsv" \
		-postScript AutoNameVariables.java \
		-postScript ExportDecompiled.java "$out" "$names" \
		> "$ROOT/build/logs/$m.ghidra.log" 2>&1 || true
	grep -h -E 'ApplyNames|RecoverNames:|TypeFromCalls:|InferStructs:|AutoNameVariables:|ExportDecompiled:' "$ROOT/build/logs/$m.ghidra.log" | sed 's/^INFO  //' | grep -v "claimed by several\|conflicting names" || true
	if grep -q 'SCRIPT ERROR\|ERROR REPORT' "$ROOT/build/logs/$m.ghidra.log"; then
		grep -B2 -A12 'SCRIPT ERROR\|ERROR REPORT' "$ROOT/build/logs/$m.ghidra.log" >&2
		exit 1
	fi
	# The names and source files the program's strings gave, for review and for the next run.
	cp "$ROOT/build/recovered/$m/recovered.tsv" "$ROOT/symbols/$m.recovered.tsv"
	cp "$ROOT/build/recovered/$m/files.tsv" "$out/files.tsv"
	if [ -f "$ROOT/tools/split_sources.py" ]; then
		python3 -I "$ROOT/tools/split_sources.py" "$out"
	fi
done

# Inferred structure layouts, merged across the modules.
inferred=()
for m in spel.dat A2Racer4.exe Rsc.dll Menu.exe SetDebug.exe; do
	if [ -f "$ROOT/build/structs/$m.tsv" ]; then inferred+=("$ROOT/build/structs/$m.tsv"); fi
done
python3 -I "$ROOT/tools/merge_structs.py" "$ROOT/symbols/structs.tsv" "$ROOT/symbols/structs_auto.tsv" \
	"${inferred[@]}"
