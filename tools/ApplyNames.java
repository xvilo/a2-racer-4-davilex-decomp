// Headless Ghidra script: recovered and hand-assigned symbols.
//
//   -preScript  ApplyNames.java pre <names.tsv> <structs.tsv> <directx.h>   before auto-analysis:
//        parses the DirectX header, defines the structures and applies names, signatures
//        and data labels
//   -postScript ApplyNames.java post <names.tsv>   after auto-analysis:
//        re-applies the symbols (analysis can drop signatures), then defines short strings
//        and floating-point constants
//
// After analysis, a Visual C++ method (it reads ECX, the this pointer, before writing it)
// gets __thiscall, so the decompiler shows it as this rather than in_ECX.
//
// A last argument "delphi" (both runs): after analysis, every function whose convention
// nothing else settled gets Delphi's "register" convention (__register in Ghidra's Delphi
// compiler spec, which the PE loader picks for Delphi programs: EAX, EDX, ECX, then the
// stack, popped by the callee).
//
// names.tsv: address, kind (function/data/label/local), name, cc, ret, params, dtype,
// mangled; see tools/merge_names.py.
//@category A2Racer4

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;

import ghidra.app.script.GhidraScript;
import ghidra.program.database.SpecExtension;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

public class ApplyNames extends GhidraScript {

	static final String SIG_TAG = "SIGNATURE";
	static final String REGISTER = "__register";

	private DataTypeManager winArchive;

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		String mode = args.length > 0 ? args[0] : "post";
		boolean delphi = args.length > 0 && args[args.length - 1].equals("delphi");
		if (delphi) {
			args = java.util.Arrays.copyOf(args, args.length - 1);
		}
		if (mode.equals("pre")) {
			if (args.length > 3) {
				parseHeader(new File(args[3]));
			}
			if (args.length > 2) {
				defineStructs(new File(args[2]));
			}
			if (args.length > 1) {
				applyNames(new File(args[1]));
			}
		}
		else {
			// Analysis can re-create functions and drop signatures applied before it ran.
			if (args.length > 1) {
				applyNames(new File(args[1]));
			}
			defineShortStrings();
			defineFloatConstants();
			if (delphi) {
				registerConvention();
			}
			else {
				thiscallConvention();
			}
		}
	}

	// ---- pre: names, signatures, data -------------------------------------------------

	private void applyNames(File tsv) throws Exception {
		openWindowsArchive();
		int funcs = 0, typed = 0, labels = 0, data = 0, failed = 0;
		Set<Address> named = new HashSet<>();
		// Start of every named data item or label: open arrays run up to the next one.
		TreeSet<Address> dataStarts = new TreeSet<>();
		try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
			String line = r.readLine();
			while ((line = r.readLine()) != null) {
				String[] c = line.split("\t", -1);
				if (c.length > 1 && (c[1].equals("data") || c[1].equals("label"))) {
					dataStarts.add(toAddr(c[0]));
				}
			}
		}
		try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
			String line = r.readLine(); // header
			while ((line = r.readLine()) != null) {
				String[] c = line.split("\t", -1);
				Address a = toAddr(c[0]);
				String kind = c[1], name = c[2], cc = c[3], ret = c[4], params = c[5], dtype = c[6];
				if (kind.equals("local")) {
					continue; // variable renames are applied by ExportDecompiled.java
				}
				try {
					if (kind.equals("function") && !named.contains(a)) {
						Function f = getFunctionAt(a);
						if (f == null && getFunctionContaining(a) != null &&
							getInstructionAt(a) != null) {
							// Analysis merged this function into its predecessor; split it off.
							Function outer = getFunctionContaining(a);
							Address end = outer.getBody().getMaxAddress();
							outer.setBody(new ghidra.program.model.address.AddressSet(
								outer.getEntryPoint(), a.previous()));
						}
						if (f == null) {
							disassemble(a);
							f = createFunction(a, name);
						}
						if (f == null) {
							failed++;
							createLabel(a, name, true, SourceType.IMPORTED);
							continue;
						}
						f.setName(name, SourceType.IMPORTED);
						named.add(a);
						funcs++;
						if (!ret.isEmpty() && !params.equals("?")) {
							setSignature(f, cc, ret, params);
							f.addTag(SIG_TAG);
							typed++;
						}
						else if (!cc.isEmpty()) {
							f.setCallingConvention(cc);
						}
					}
					else if (kind.equals("data")) {
						createLabel(a, name, !named.contains(a), SourceType.IMPORTED);
						named.add(a);
						data++;
						if (dtype.endsWith("[]")) {
							createOpenArray(a, dtype.substring(0, dtype.length() - 2), dataStarts);
						}
						else if (!dtype.isEmpty()) {
							DataType dt = resolveArray(dtype);
							if (dt != null && dt.getLength() > 0 && getDataAt(a) == null &&
								getInstructionAt(a) == null) {
								try {
									createData(a, dt);
								}
								catch (Exception e) {
									// conflicting data already defined there; keep the label only
								}
							}
						}
					}
					else {
						createLabel(a, name, !named.contains(a), SourceType.IMPORTED);
						labels++;
					}
				}
				catch (Exception e) {
					failed++;
					printerr("ApplyNames: " + c[0] + " " + name + ": " + e.getMessage());
				}
			}
		}
		println("ApplyNames names: " + funcs + " functions (" + typed + " typed), " + data + " data, " +
			labels + " labels, " + failed + " failed");
	}

	/** Builds the packed structures listed in structs.tsv (struct, offset, type, name, comment). */
	/** Parse a plain C header (symbols/directx.h) into the program's data types. */
	private void parseHeader(File h) throws Exception {
		if (winArchive == null) {
			openWindowsArchive();
		}
		ghidra.app.util.cparser.C.CParser parser = new ghidra.app.util.cparser.C.CParser(
			currentProgram.getDataTypeManager(), true,
			winArchive == null ? null : new DataTypeManager[] { winArchive });
		try (java.io.InputStream in = new java.io.FileInputStream(h)) {
			parser.parse(in);
		}
		// The parser drops "__stdcall" from function-pointer members; COM methods are all
		// __stdcall (the callee pops its arguments), and the stack depth after every COM
		// call depends on it. Name the anonymous signatures after their slot as well.
		DataTypeManager dtm = currentProgram.getDataTypeManager();
		for (DataType comp : parser.getComposites().values()) {
			DataType mine = dtm.getDataType(comp.getDataTypePath());
			if (!(mine instanceof Structure) || !mine.getName().endsWith("Vtbl")) {
				continue;
			}
			for (DataTypeComponent c : ((Structure) mine).getDefinedComponents()) {
				if (c.getDataType() instanceof Pointer &&
					((Pointer) c.getDataType()).getDataType() instanceof FunctionDefinition) {
					FunctionDefinition fd =
						(FunctionDefinition) ((Pointer) c.getDataType()).getDataType();
					fd.setCallingConvention("__stdcall");
					try {
						fd.setName(mine.getName().replace("Vtbl", "") + "_" + c.getFieldName());
					}
					catch (Exception e) {
						// keep the generated name
					}
				}
			}
		}
		println("ApplyNames: " + parser.getComposites().size() + " structures and " +
			parser.getTypes().size() + " types parsed from " + h.getName());
	}

	/**
	 * Define structures from symbols/structs.tsv and, beneath them, the layouts inferred by
	 * InferStructs.java (structs_auto.tsv next to it): an inferred field is dropped where it
	 * overlaps a hand-written one. A "__size" row sets a minimum structure size.
	 */
	private void defineStructs(File tsv) throws Exception {
		if (winArchive == null) {
			openWindowsArchive();
		}
		Map<String, List<String[]>> manual = readStructRows(tsv);
		Map<String, List<String[]>> auto = readStructRows(new File(tsv.getParentFile(), "structs_auto.tsv"));
		Set<String> names = new LinkedHashSet<>(manual.keySet());
		names.addAll(auto.keySet());
		DataTypeManager dtm = currentProgram.getDataTypeManager();
		for (String name : names) {
			int size = 0;
			List<Object[]> parsed = new ArrayList<>();
			for (String[] c : manual.getOrDefault(name, List.of())) {
				int off = Integer.parseInt(c[1], 16);
				if (c[3].equals("__size")) {
					size = Math.max(size, off);
					continue;
				}
				DataType dt = resolveArray(c[2]);
				parsed.add(new Object[] { off, dt, c[3], c.length > 4 ? c[4] : null });
				size = Math.max(size, off + dt.getLength());
			}
			int handWritten = parsed.size();
			for (String[] c : auto.getOrDefault(name, List.of())) {
				int off = Integer.parseInt(c[1], 16);
				if (c[3].equals("__size")) {
					// A hand-written layout defines the size; inferred ones may be an
					// array's extent.
					if (!manual.containsKey(name)) {
						size = Math.max(size, off);
					}
					continue;
				}
				if (manual.containsKey(name) && off >= size) {
					continue;
				}
				DataType dt = resolveArray(c[2]);
				boolean clash = false;
				for (Object[] f : parsed) {
					int o = (Integer) f[0], l = ((DataType) f[1]).getLength();
					clash |= o < off + dt.getLength() && off < o + l;
				}
				if (!clash) {
					parsed.add(new Object[] { off, dt, c[3], c.length > 4 ? c[4] : null });
					size = Math.max(size, off + dt.getLength());
				}
			}
			StructureDataType st = new StructureDataType(new CategoryPath("/A2Racer4"), name, size, dtm);
			for (Object[] f : parsed) {
				DataType dt = (DataType) f[1];
				st.replaceAtOffset((Integer) f[0], dt, dt.getLength(), (String) f[2], (String) f[3]);
			}
			dtm.addDataType(st, DataTypeConflictHandler.REPLACE_HANDLER);
			println("ApplyNames: struct " + name + " (" + size + " bytes, " + handWritten +
				" named and " + (parsed.size() - handWritten) + " inferred fields)");
		}
	}

	private Map<String, List<String[]>> readStructRows(File tsv) throws Exception {
		Map<String, List<String[]>> rows = new LinkedHashMap<>();
		if (!tsv.exists()) {
			return rows;
		}
		try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
			String line;
			while ((line = r.readLine()) != null) {
				if (line.startsWith("#") || line.startsWith("struct\t") || line.isBlank()) {
					continue;
				}
				String[] c = line.split("\t", -1);
				rows.computeIfAbsent(c[0], k -> new ArrayList<>()).add(c);
			}
		}
		return rows;
	}

	/**
	 * An array whose length the symbol does not give ("name[]"): it runs to the
	 * next symbol. Nothing is created while the element type's size is still unknown.
	 */
	private void createOpenArray(Address a, String elementType, TreeSet<Address> starts) {
		DataType el = resolve(elementType);
		if (el == null || el.getLength() <= 0) {
			return;
		}
		Address next = starts.higher(a);
		long room = next == null ? el.getLength() : next.subtract(a);
		int count = (int) Math.max(1, room / el.getLength());
		Address end = a.add((long) count * el.getLength() - 1);
		try {
			if (getInstructionContaining(end) != null) {
				return;
			}
			clearListing(a, end);
			createData(a, new ArrayDataType(el, count, el.getLength()));
		}
		catch (Exception e) {
			// overlaps something defined: keep the label only
		}
	}

	private DataType resolveArray(String t) {
		java.util.regex.Matcher m = java.util.regex.Pattern.compile("(.*)\\[(\\d+)\\]$").matcher(t);
		if (m.matches()) {
			DataType el = resolve(m.group(1));
			return new ArrayDataType(el, Integer.parseInt(m.group(2)), el.getLength());
		}
		return resolve(t);
	}

	private void setSignature(Function f, String cc, String ret, String params) throws Exception {
		List<ParameterImpl> ps = new ArrayList<>();
		int i = 1;
		boolean varargs = false;
		if (!params.isEmpty() && !params.equals("-")) {
			for (String p : params.split("\\|")) {
				if (p.equals("...")) {
					varargs = true;
					continue;
				}
				// "type:name" names the parameter; a bare type keeps param_N.
				String[] tn = p.split(":", 2);
				String pname = tn.length > 1 ? tn[1] : "param_" + i;
				ps.add(new ParameterImpl(pname, resolve(tn[0]), currentProgram,
					tn.length > 1 ? SourceType.USER_DEFINED : SourceType.DEFAULT));
				i++;
			}
		}
		f.updateFunction(cc.isEmpty() ? f.getCallingConventionName() : cc,
			new ReturnParameterImpl(resolve(ret), currentProgram), ps,
			FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.IMPORTED);
		f.setVarArgs(varargs);
	}

	private void openWindowsArchive() {
		File gdt = new File(System.getenv("GHIDRA_INSTALL_DIR"),
			"Ghidra/Features/Base/data/typeinfo/win32/windows_vs12_32.gdt");
		try {
			winArchive = FileDataTypeManager.openFileArchive(gdt, false);
		}
		catch (Exception e) {
			printerr("ApplyNames: cannot open " + gdt + ": " + e.getMessage());
		}
	}

	private DataType resolve(String t) {
		int depth = 0;
		while (t.endsWith("*")) {
			depth++;
			t = t.substring(0, t.length() - 1);
		}
		DataType dt = base(t);
		for (int k = 0; k < depth; k++) {
			dt = new PointerDataType(dt, currentProgram.getDataTypeManager());
		}
		return dt;
	}

	private DataType base(String t) {
		switch (t) {
			case "void": return VoidDataType.dataType;
			case "char": return CharDataType.dataType;
			case "uchar": return UnsignedCharDataType.dataType;
			case "short": return ShortDataType.dataType;
			case "ushort": return UnsignedShortDataType.dataType;
			case "int": return IntegerDataType.dataType;
			case "uint": return UnsignedIntegerDataType.dataType;
			case "long": return LongDataType.dataType;
			case "ulong": return UnsignedLongDataType.dataType;
			case "longlong": return LongLongDataType.dataType;
			case "ulonglong": return UnsignedLongLongDataType.dataType;
			case "float": return FloatDataType.dataType;
			case "double": return DoubleDataType.dataType;
			case "long double": return LongDoubleDataType.dataType;
			case "bool": return BooleanDataType.dataType;
			case "wchar_t": return WideCharDataType.dataType;
			case "undefined1": return Undefined1DataType.dataType;
			case "undefined2": return Undefined2DataType.dataType;
			case "undefined4": return Undefined4DataType.dataType;
			case "undefined8": return Undefined8DataType.dataType;
		}
		DataTypeManager dtm = currentProgram.getDataTypeManager();
		List<DataType> found = new ArrayList<>();
		dtm.findDataTypes(t, found);
		if (found.isEmpty() && winArchive != null) {
			winArchive.findDataTypes(t, found);
		}
		if (!found.isEmpty()) {
			return dtm.resolve(found.get(0), DataTypeConflictHandler.KEEP_HANDLER);
		}
		// Game-specific struct: placeholder until its layout is recovered.
		return dtm.addDataType(new StructureDataType(new CategoryPath("/A2Racer4"), t, 0, dtm),
			DataTypeConflictHandler.KEEP_HANDLER);
	}

	// ---- post: short strings -----------------------------------------------------------

	/**
	 * Ghidra's string analyzer skips strings shorter than five characters, so literals such as
	 * "\\", "rb" or "GAME" show up as DAT_ globals. Any undefined location that code refers to
	 * and that holds a short NUL-terminated printable string becomes a string.
	 */
	private void defineShortStrings() throws Exception {
		int n = 0;
		ghidra.program.model.mem.Memory mem = currentProgram.getMemory();
		// Candidate addresses: taken as a value (DATA, or PARAM when passed to a call) and never
		// written (a written location is a buffer, not a constant).
		Set<Address> taken = new HashSet<>(), written = new HashSet<>();
		InstructionIterator ii = currentProgram.getListing().getInstructions(true);
		while (ii.hasNext() && !monitor.isCancelled()) {
			for (ghidra.program.model.symbol.Reference r : ii.next().getReferencesFrom()) {
				ghidra.program.model.symbol.RefType t = r.getReferenceType();
				if (t == ghidra.program.model.symbol.RefType.DATA ||
					t == ghidra.program.model.symbol.RefType.PARAM) {
					taken.add(r.getToAddress());
				}
				else if (t.isWrite()) {
					written.add(r.getToAddress());
				}
			}
		}
		for (Address a : taken) {
			if (written.contains(a) || !a.isMemoryAddress() || mem.getBlock(a) == null ||
				mem.getBlock(a).isExecute() || getInstructionAt(a) != null) {
				continue;
			}
			Data d = getDataAt(a);
			boolean placeholder = d == null || !d.isDefined() ||
				d.getDataType() instanceof Undefined;
			if (!placeholder) {
				continue;
			}
			int len = 0;
			boolean ok = false;
			for (; len < 64; len++) {
				byte b;
				try {
					b = mem.getByte(a.add(len));
				}
				catch (Exception e) {
					break;
				}
				if (b == 0) {
					ok = len > 0;
					break;
				}
				if ((b < 0x20 || b > 0x7e) && b != '\t' && b != '\n' && b != '\r') {
					break;
				}
			}
			if (!ok) {
				continue;
			}
			try {
				// Only placeholder data may be replaced; real typed data stops the string.
				for (int k = 0; k <= len; k++) {
					Data x = getDataAt(a.add(k));
					if (x != null && x.isDefined() && !(x.getDataType() instanceof Undefined)) {
						throw new IllegalStateException("typed data");
					}
				}
				clearListing(a, a.add(len));
				createAsciiString(a, len + 1);
				n++;
			}
			catch (Exception e) {
				// overlaps typed data; leave it
			}
		}
		println("ApplyNames post: " + n + " short strings defined");
	}

	// ---- post: floating-point constants -------------------------------------------------

	/**
	 * A float literal the analysis left untyped prints as (float)_DAT_xxx instead of its
	 * value. A location that FPU instructions only read (never
	 * written anywhere) is typed float/double by operand size and marked constant.
	 */
	private void defineFloatConstants() throws Exception {
		Map<Address, Integer> size = new HashMap<>();
		Set<Address> written = new HashSet<>(), otherUse = new HashSet<>();
		InstructionIterator ii = currentProgram.getListing().getInstructions(true);
		while (ii.hasNext() && !monitor.isCancelled()) {
			Instruction in = ii.next();
			String m = in.getMnemonicString().toUpperCase();
			boolean fpuRead = m.startsWith("F") && !m.startsWith("FST") && !m.startsWith("FI") &&
				!m.startsWith("FN") && !m.startsWith("FLDCW") && !m.startsWith("FLDENV");
			for (ghidra.program.model.symbol.Reference r : in.getReferencesFrom()) {
				Address a = r.getToAddress();
				if (r.getReferenceType().isWrite()) {
					written.add(a);
				}
				else if (fpuRead && r.getReferenceType().isRead()) {
					String op = in.getDefaultOperandRepresentation(r.getOperandIndex()).toLowerCase();
					int sz = op.startsWith("float") || op.startsWith("dword") ? 4
							: op.startsWith("double") || op.startsWith("qword") ? 8 : 0;
					if (sz == 0 || (size.containsKey(a) && size.get(a) != sz)) {
						otherUse.add(a);
					}
					else {
						size.put(a, sz);
					}
				}
				else {
					otherUse.add(a);
				}
			}
		}
		int n = 0;
		ghidra.program.model.mem.Memory mem = currentProgram.getMemory();
		for (Map.Entry<Address, Integer> e : size.entrySet()) {
			Address a = e.getKey();
			if (written.contains(a) || otherUse.contains(a) || mem.getBlock(a) == null ||
				mem.getBlock(a).isExecute()) {
				continue;
			}
			Data d = getDataAt(a);
			if (d != null && d.isDefined() && !(d.getDataType() instanceof Undefined)) {
				continue;
			}
			try {
				clearListing(a, a.add(e.getValue() - 1));
				Data c = createData(a, e.getValue() == 4 ? FloatDataType.dataType : DoubleDataType.dataType);
				ghidra.program.model.data.MutabilitySettingsDefinition.DEF.setChoice(c,
					ghidra.program.model.data.MutabilitySettingsDefinition.CONSTANT);
				n++;
			}
			catch (Exception ex) {
				// overlaps other data; leave it
			}
		}
		println("ApplyNames post: " + n + " floating-point constants defined");
	}

	// ---- post: Delphi's convention ------------------------------------------------------

	private void registerConvention() throws Exception {
		if (currentProgram.getCompilerSpec().getCallingConvention(REGISTER) == null) {
			printerr("ApplyNames: the compiler spec has no " + REGISTER + " (not the Delphi spec?)");
			return;
		}
		int n = 0;
		for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
			if (f.isExternal() || f.isThunk() || f.getTags().stream().anyMatch(t -> t.getName().equals(SIG_TAG)) ||
				f.getSignatureSource().isHigherPriorityThan(SourceType.ANALYSIS)) {
				continue;
			}
			f.setCallingConvention(REGISTER);
			n++;
		}
		println("ApplyNames post: " + n + " functions given Delphi's register convention");
	}

	// ---- post: Visual C++ methods -------------------------------------------------------

	private void thiscallConvention() throws Exception {
		if (currentProgram.getCompilerSpec().getCallingConvention("__thiscall") == null) {
			return;
		}
		int n = 0;
		for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
			if (f.isExternal() || f.isThunk() || f.getTags().stream().anyMatch(t -> t.getName().equals(SIG_TAG)) ||
				f.getSignatureSource().isHigherPriorityThan(SourceType.ANALYSIS) ||
				"__thiscall".equals(f.getCallingConventionName()) || !readsEcxFirst(f)) {
				continue;
			}
			f.setCallingConvention("__thiscall");
			n++;
		}
		println("ApplyNames post: " + n + " functions given __thiscall (they read ECX before setting it)");
	}

	/** Whether ECX is read on the straight path from the entry before it is written or a call. */
	private boolean readsEcxFirst(Function f) {
		ghidra.program.model.lang.Register ecx = currentProgram.getRegister("ECX");
		Instruction in = getInstructionAt(f.getEntryPoint());
		for (int k = 0; in != null && k < 48; k++, in = in.getNext()) {
			if (!f.getBody().contains(in.getAddress()) || in.getFlowType().isCall()) {
				return false;
			}
			String m = in.getMnemonicString().toUpperCase();
			boolean zeroing = (m.equals("XOR") || m.equals("SUB")) && in.getNumOperands() == 2 &&
				in.getDefaultOperandRepresentation(0).equals(in.getDefaultOperandRepresentation(1));
			if (!zeroing) {
				for (Object o : in.getInputObjects()) {
					if (o instanceof ghidra.program.model.lang.Register &&
						((ghidra.program.model.lang.Register) o).getBaseRegister().equals(ecx)) {
						return true;
					}
				}
			}
			for (Object o : in.getResultObjects()) {
				if (o instanceof ghidra.program.model.lang.Register &&
					((ghidra.program.model.lang.Register) o).getBaseRegister().equals(ecx)) {
					return false;
				}
			}
			if (in.getFlowType().isJump() || in.getFlowType().isTerminal()) {
				return false;
			}
		}
		return false;
	}
}
