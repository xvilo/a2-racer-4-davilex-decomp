// Headless Ghidra script: names functions from the program's own strings, and records which
// source file each function's diagnostics name.
//
//   -postScript RecoverNames.java <out_dir>
//
// The game reports and traces through a few helpers, and their arguments name things:
//   error(fmt, __FILE__, __LINE__, "init_radar()")   names the function making the call;
//   trace("init_radar()\n"); init_radar();          names the function called next (when that
//                                                   is its only call site);
//   "***** Entry init_game *****"                   names the function it is in;
//   "Unknown error in CRaceOverlay::Init %s (%d)"   names the function it is in;
//   a named stub (an incrementally linked export: JMP xvga_init_fileio) names the function
//   it jumps to.
// Only functions that still have Ghidra's default name are renamed, and a name claimed by two
// different functions is given to neither.
//
// Writes <out_dir>/recovered.tsv (names, the columns of tools/merge_names.py plus evidence)
// and <out_dir>/files.tsv (function, source file, lowest __LINE__ seen with it).
//@category A2Racer4

import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

public class RecoverNames extends GhidraScript {

	/** A path ending in a C/C++ source or header name: __FILE__. */
	static final Pattern FILE = Pattern.compile("(?i)^(?:[a-z]:)?[\\\\/\\w .-]*?([\\w-]+\\.(?:cpp|c|h|hpp))$");
	/** "init_radar()", "init_radar()\n", "set_game_display() ...". */
	static final Pattern CALL = Pattern.compile("^\\s*([A-Za-z_]\\w*)\\(\\)[\\s.]*$");
	static final Pattern ENTRY = Pattern.compile("\\bEntry\\s+([A-Za-z_]\\w*)\\b");
	static final Pattern MEMBER = Pattern.compile(
		"(?:\\bin|\\berror in|while parsing in|^\\s*\\*{0,3}\\s*)\\s*((?:[A-Za-z_]\\w*::)+~?[A-Za-z_]\\w*)(?:\\(\\))?(?:\\s|:|$)");

	static class Claim {
		final String name, evidence;

		Claim(String name, String evidence) {
			this.name = name;
			this.evidence = evidence;
		}
	}

	/** Function entry -> the names claimed for it. */
	private final Map<Address, List<Claim>> claims = new TreeMap<>();
	/** Function entry -> file -> lowest line. */
	private final Map<Address, Map<String, Integer>> files = new TreeMap<>();

	@Override
	protected void run() throws Exception {
		File out = new File(getScriptArgs().length > 0 ? getScriptArgs()[0] : ".");
		out.mkdirs();
		Map<Address, String> strings = new HashMap<>();
		DataIterator di = currentProgram.getListing().getDefinedData(true);
		while (di.hasNext() && !monitor.isCancelled()) {
			Data d = di.next();
			if (d.hasStringValue() && d.getValue() != null) {
				strings.put(d.getAddress(), d.getValue().toString());
			}
		}
		for (Map.Entry<Address, String> e : strings.entrySet()) {
			String s = e.getValue();
			Matcher fm = FILE.matcher(s.trim());
			Matcher cm = CALL.matcher(s);
			Matcher em = ENTRY.matcher(s);
			Matcher mm = MEMBER.matcher(s);
			for (Reference r : getReferencesTo(e.getKey())) {
				Instruction in = getInstructionAt(r.getFromAddress());
				Function f = in == null ? null : getFunctionContaining(in.getAddress());
				if (f == null) {
					continue;
				}
				if (fm.matches()) {
					recordFile(f, fm.group(1), lineBefore(in));
				}
				if (cm.matches()) {
					nameFromCall(f, in, cm.group(1), strings);
				}
				if (em.find()) {
					claim(f.getEntryPoint(), em.group(1), "entry message");
				}
				if (mm.find()) {
					claim(f.getEntryPoint(), mm.group(1).replace("::", "_"), "message names " + mm.group(1));
				}
			}
		}
		for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
			Function t = f.isThunk() ? f.getThunkedFunction(false) : null;
			if (t != null && !t.isExternal() && f.getSymbol().getSource() != SourceType.DEFAULT &&
				t.getSymbol().getSource() == SourceType.DEFAULT) {
				claim(t.getEntryPoint(), f.getName(), "named stub jumps here");
			}
		}
		apply(new File(out, "recovered.tsv"));
		try (PrintWriter w = new PrintWriter(new File(out, "files.tsv"))) {
			w.println("address\tfile\tline");
			for (Map.Entry<Address, Map<String, Integer>> e : files.entrySet()) {
				for (Map.Entry<String, Integer> f : e.getValue().entrySet()) {
					w.println(hex(e.getKey()) + "\t" + f.getKey() + "\t" + (f.getValue() == Integer.MAX_VALUE ? "" : f.getValue()));
				}
			}
		}
		println("RecoverNames: " + files.size() + " functions placed in source files");
	}

	/** The pushes before the call that consumes the string at `in`, and the call. */
	private void nameFromCall(Function f, Instruction in, String name, Map<Address, String> strings) {
		Instruction call = nextCall(in, 12);
		if (call == null) {
			return;
		}
		// The string arguments of that call: a __FILE__ among them makes it an error report
		// naming the function it is made from.
		boolean report = false;
		int args = 0;
		for (Instruction p = in.getPrevious(); p != null && !isCall(p) && in.getAddress().subtract(p.getAddress()) < 64; p = p.getPrevious()) {
			args += isPush(p) ? 1 : 0;
			report |= pushesFileString(p, strings);
		}
		for (Instruction p = in.getNext(); p != null && p != call; p = p.getNext()) {
			args += isPush(p) ? 1 : 0;
			report |= pushesFileString(p, strings);
		}
		if (report) {
			claim(f.getEntryPoint(), name, "error report names its function");
			return;
		}
		if (args > 0) {
			return; // a trace takes the name alone
		}
		// A trace: the next call is the function it announces.
		Instruction next = nextCall(call.getNext(), 40);
		if (next == null) {
			return;
		}
		Address target = callTarget(next);
		if (target == null) {
			return;
		}
		Function t = getFunctionAt(target);
		if (t == null || t.isThunk() || t.isExternal()) {
			return;
		}
		int sites = 0;
		for (Reference r : getReferencesTo(target)) {
			sites += r.getReferenceType().isCall() ? 1 : 0;
		}
		if (sites == 1) {
			claim(target, name, "traced before its call in " + f.getName());
		}
	}

	private boolean pushesFileString(Instruction p, Map<Address, String> strings) {
		if (!isPush(p)) {
			return false;
		}
		for (Reference r : p.getReferencesFrom()) {
			String s = strings.get(r.getToAddress());
			if (s != null && FILE.matcher(s.trim()).matches()) {
				return true;
			}
		}
		return false;
	}

	/** The __LINE__ pushed right before a __FILE__ (arguments go right to left). */
	private int lineBefore(Instruction in) {
		Instruction p = in.getPrevious();
		if (p != null && isPush(p) && p.getNumOperands() == 1 && p.getOpObjects(0).length == 1 &&
			p.getOpObjects(0)[0] instanceof Scalar) {
			long v = ((Scalar) p.getOpObjects(0)[0]).getValue();
			if (v > 0 && v < 100000) {
				return (int) v;
			}
		}
		return Integer.MAX_VALUE;
	}

	private void recordFile(Function f, String file, int line) {
		files.computeIfAbsent(f.getEntryPoint(), k -> new LinkedHashMap<>()).merge(file, line, Math::min);
	}

	private Instruction nextCall(Instruction from, int limit) {
		Instruction i = from;
		for (int n = 0; i != null && n < limit; n++, i = i.getNext()) {
			if (isCall(i)) {
				return i;
			}
			if (i.getFlowType().isTerminal() || i.getFlowType().isJump()) {
				return null;
			}
		}
		return null;
	}

	private static boolean isCall(Instruction i) {
		return i.getFlowType().isCall();
	}

	private static boolean isPush(Instruction i) {
		return i.getMnemonicString().equalsIgnoreCase("PUSH");
	}

	private Address callTarget(Instruction call) {
		Address[] flows = call.getFlows();
		return flows.length == 1 ? flows[0] : null;
	}

	private void claim(Address fn, String name, String evidence) {
		claims.computeIfAbsent(fn, k -> new ArrayList<>()).add(new Claim(name, evidence));
	}

	private void apply(File tsv) throws Exception {
		// A name claimed for two different functions (or a function with two different names)
		// is left out.
		Map<String, Integer> owners = new HashMap<>();
		Map<Address, Claim> chosen = new TreeMap<>();
		for (Map.Entry<Address, List<Claim>> e : claims.entrySet()) {
			String first = e.getValue().get(0).name;
			boolean agree = e.getValue().stream().allMatch(c -> c.name.equals(first));
			if (agree) {
				chosen.put(e.getKey(), e.getValue().get(0));
				owners.merge(first, 1, Integer::sum);
			}
			else {
				println("RecoverNames: conflicting names at " + e.getKey() + ": " +
					e.getValue().stream().map(c -> c.name).distinct().toList());
			}
		}
		int named = 0, kept = 0, clashes = 0;
		try (PrintWriter w = new PrintWriter(tsv)) {
			w.println("address\tkind\tname\tcc\tret\tparams\tdtype\tmangled\tevidence");
			for (Map.Entry<Address, Claim> e : chosen.entrySet()) {
				Claim c = e.getValue();
				if (owners.get(c.name) > 1) {
					clashes++;
					println("RecoverNames: " + c.name + " claimed by several functions; skipped at " + e.getKey());
					continue;
				}
				Function f = getFunctionAt(e.getKey());
				if (f == null) {
					continue;
				}
				w.println(hex(e.getKey()) + "\tfunction\t" + c.name + "\t\t\t?\t\t\t" + c.evidence);
				if (f.getSymbol().getSource() == SourceType.DEFAULT) {
					f.setName(c.name, SourceType.ANALYSIS);
					named++;
				}
				else {
					kept++;
				}
			}
		}
		println("RecoverNames: " + named + " functions named, " + kept + " already named, " + clashes + " clashing names skipped");
	}

	private static String hex(Address a) {
		return String.format("%08x", a.getOffset());
	}
}
