/* Rsc.dll — _file.c: 16 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 100029d0 FUN_100029d0 ==== */

void __cdecl FUN_100029d0(uint param_1)

{
  int iVar1;
  
  iVar1 = (&DAT_10031ac0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_100073f0(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10007490(0x11);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10031ac0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


/* ==== 10002a60 __unlock_fhandle ==== */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10031ac0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}


/* ==== 10002a90 FUN_10002a90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002a90(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    DAT_100314ac = GetVersion();
    iVar1 = FUN_10008200(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_100314b8 = DAT_100314ac >> 8 & 0xff;
    DAT_100314b4 = DAT_100314ac & 0xff;
    _DAT_100314b0 = DAT_100314b4 * 0x100 + _DAT_100314b8;
    DAT_100314ac = DAT_100314ac >> 0x10;
    iVar1 = FUN_100076d0();
    if (iVar1 == 0) {
      FUN_10008250();
      return 0;
    }
    DAT_10032f64 = GetCommandLineA();
    DAT_1003141c = FUN_10007fe0();
    FUN_10006f40();
    FUN_10007ad0();
    FUN_10007980();
    FUN_100074d0();
    DAT_10031418 = DAT_10031418 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10031418 < 1) {
      return 0;
    }
    DAT_10031418 = DAT_10031418 + -1;
    if (DAT_100314e4 == 0) {
      FUN_10007550();
    }
    uVar2 = FUN_10004c20(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_10005530();
    }
    __ioterm();
    FUN_10007760();
    FUN_10008250();
  }
  else if (param_2 == 3) {
    FUN_10007850((LPVOID)0x0);
  }
  return 1;
}


/* ==== 10002bd0 entry ==== */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_10031418 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_10032f74 != (code *)0x0) {
        local_8 = (*DAT_10032f74)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_10002a90(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = FUN_100082f0();
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_10002a90(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_10002a90(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_10032f74 != (code *)0x0)) {
        local_8 = (*DAT_10032f74)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}


/* ==== 10002cd0 __amsg_exit ==== */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_10008350(param_1);
  (*(code *)PTR___exit_1002fa30)(0xff);
  return;
}


/* ==== 10002d10 FUN_10002d10 ==== */

void FUN_10002d10(void)

{
  uint i;
  
  if (DAT_10032f60 == 0) {
    DAT_10032f60 = 0x200;
  }
  else if (DAT_10032f60 < 0x14) {
    DAT_10032f60 = 0x14;
  }
  DAT_10031c18 = __calloc_dbg(DAT_10032f60,4,2,"_file.c",0x83);
  if (DAT_10031c18 == (undefined1 *)0x0) {
    DAT_10032f60 = 0x14;
    DAT_10031c18 = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_10031c18 == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (i = 0; (int)i < 0x14; i = i + 1) {
    *(undefined ***)(DAT_10031c18 + i * 4) = &PTR_DAT_1002fa38 + i * 8;
  }
  for (i = 0; (int)i < 3; i = i + 1) {
    if ((*(int *)((&DAT_10031ac0)[(int)i >> 5] + (i & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_10031ac0)[(int)i >> 5] + (i & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_1002fa48 + i * 0x20) = 0xffffffff;
    }
  }
  return;
}


/* ==== 10002e40 FUN_10002e40 ==== */

void FUN_10002e40(void)

{
  FUN_100059b0();
  if (DAT_100314e0 != '\0') {
    FUN_10008560();
  }
  return;
}


/* ==== 10002e60 FUN_10002e60 ==== */

void __cdecl FUN_10002e60(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1002fa38) || (&DAT_1002fc98 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_100073f0(((int)(param_1 + -0x400be8e) >> 5) + 0x1c);
  }
  return;
}


/* ==== 10002ea0 FUN_10002ea0 ==== */

void __cdecl FUN_10002ea0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100073f0(param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}


/* ==== 10002ed0 FUN_10002ed0 ==== */

void __cdecl FUN_10002ed0(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1002fa38) || (&DAT_1002fc98 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_10007490(((int)(param_1 + -0x400be8e) >> 5) + 0x1c);
  }
  return;
}


/* ==== 10002f10 FUN_10002f10 ==== */

void __cdecl FUN_10002f10(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10007490(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}


/* ==== 10002f40 FUN_10002f40 ==== */

void FUN_10002f40(void)

{
  DebugBreak();
  return;
}


/* ==== 10002f50 FUN_10002f50 ==== */

undefined4 __cdecl FUN_10002f50(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_1002fcbc + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_1002fcbc + param_1 * 4);
    *(uint *)(&DAT_1002fcbc + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* ==== 10002fb0 __CrtSetReportFile ==== */

/* Library Function - Single Match
    __CrtSetReportFile
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __CrtSetReportFile(int param_1,int param_2)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xfffffffe;
  }
  else if (param_2 == -6) {
    uVar1 = *(undefined4 *)(&DAT_1002fcc8 + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1002fcc8 + param_1 * 4);
    if (param_2 == -4) {
      pvVar2 = GetStdHandle(0xfffffff5);
      *(HANDLE *)(&DAT_1002fcc8 + param_1 * 4) = pvVar2;
    }
    else if (param_2 == -5) {
      pvVar2 = GetStdHandle(0xfffffff4);
      *(HANDLE *)(&DAT_1002fcc8 + param_1 * 4) = pvVar2;
    }
    else {
      *(int *)(&DAT_1002fcc8 + param_1 * 4) = param_2;
    }
  }
  return uVar1;
}


/* ==== 10003030 FUN_10003030 ==== */

undefined4 __cdecl FUN_10003030(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10031c0c;
  DAT_10031c0c = param_1;
  return uVar1;
}


/* ==== 10003050 FUN_10003050 ==== */

undefined4 __cdecl FUN_10003050(int param_1,int param_2,int value,undefined4 param_4,byte *param_5)

{
  bool bVar1;
  LONG LVar2;
  size_t nNumberOfBytesToWrite;
  undefined3 extraout_var;
  int i;
  undefined4 *puVar3;
  uint *local_302c;
  char local_3028 [20];
  DWORD local_3014;
  HMODULE local_3010;
  undefined1 local_300c;
  undefined4 local_300b;
  undefined1 local_200c;
  undefined4 local_200b;
  undefined4 local_100c;
  undefined4 *local_1008;
  undefined1 local_1004;
  undefined4 local_1003;
  undefined4 uStackY_24;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  
  FUN_10008bb0();
  local_300c = 0;
  puVar3 = &local_300b;
  for (i = 0x3ff; i != 0; i = i + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_200c = '\0';
  puVar3 = &local_200b;
  for (i = 0x3ff; i != 0; i = i + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_1004 = 0;
  puVar3 = &local_1003;
  for (i = 0x3ff; i != 0; i = i + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_1008 = (undefined4 *)&stack0x00000018;
  if ((param_1 < 0) || (2 < param_1)) {
    local_100c = 0xffffffff;
  }
  else if ((param_1 == 2) && (LVar2 = InterlockedIncrement((LONG *)&DAT_1002fcb8), 0 < LVar2)) {
    if ((DAT_10031430 == (FARPROC)0x0) &&
       ((local_3010 = LoadLibraryA("user32.dll"), local_3010 == (HMODULE)0x0 ||
        (DAT_10031430 = GetProcAddress(local_3010,"wsprintfA"), DAT_10031430 == (FARPROC)0x0)))) {
      local_100c = 0xffffffff;
    }
    else {
      (*DAT_10031430)();
      OutputDebugStringA(&local_200c);
      InterlockedDecrement((LONG *)&DAT_1002fcb8);
      FUN_10002f40();
      local_100c = 0xffffffff;
    }
  }
  else {
    if ((param_5 != (byte *)0x0) && (i = FUN_10008ab0(&local_1004,0xfed,param_5,local_1008), i < 0))
    {
      FUN_10001ec0((uint *)&local_1004,(uint *)"_CrtDbgReport: String too long or IO Error");
    }
    if (param_1 == 2) {
      if (param_5 == (byte *)0x0) {
        local_302c = (uint *)0x1002c1f4;
      }
      else {
        local_302c = (uint *)0x1002c208;
      }
      FUN_10001ec0((uint *)&local_300c,local_302c);
    }
    FUN_10001ed0((uint *)&local_300c,(uint *)&local_1004);
    if (param_1 == 2) {
      if ((uRam1002fcc4 & 1) != 0) {
        FUN_10001ed0((uint *)&local_300c,(uint *)"\r");
      }
      FUN_10001ed0((uint *)&local_300c,(uint *)"\n");
    }
    if (param_2 == 0) {
      FUN_10001ec0((uint *)&local_200c,(uint *)&local_300c);
    }
    else {
      uStackY_24 = 0x10003265;
      i = FUN_100089b0(&local_200c,0x1000,(byte *)"%s(%d) : %s");
      if (i < 0) {
        FUN_10001ec0((uint *)&local_200c,(uint *)"_CrtDbgReport: String too long or IO Error");
      }
    }
    if ((DAT_10031c0c == (code *)0x0) || (i = (*DAT_10031c0c)(), i == 0)) {
      if (((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 1) != 0) &&
         (*(int *)(&DAT_1002fcc8 + param_1 * 4) != -1)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_3014;
        nNumberOfBytesToWrite = _strlen(&local_200c);
        WriteFile(*(HANDLE *)(&DAT_1002fcc8 + param_1 * 4),&local_200c,nNumberOfBytesToWrite,
                  lpNumberOfBytesWritten,lpOverlapped);
      }
      if ((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 2) != 0) {
        OutputDebugStringA(&local_200c);
      }
      if ((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 4) == 0) {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1002fcb8);
        }
        local_100c = 0;
      }
      else {
        if (value != 0) {
          __itoa(value,local_3028,10);
        }
        bVar1 = FUN_100033e0();
        local_100c = CONCAT31(extraout_var,bVar1);
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1002fcb8);
        }
      }
    }
    else if (param_1 == 2) {
      InterlockedDecrement((LONG *)&DAT_1002fcb8);
    }
  }
  return local_100c;
}


