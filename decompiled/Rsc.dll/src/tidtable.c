/* Rsc.dll — tidtable.c: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10007570 FUN_10007570 ==== */

void FUN_10007570(void)

{
  FUN_10007590(0,1,1);
  return;
}


/* ==== 10007590 FUN_10007590 ==== */

void __cdecl FUN_10007590(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_10007680();
  if (DAT_100314e8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100314e4 = 1;
  DAT_100314e0 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_10031ab0 != (int *)0x0) {
      local_8 = DAT_10031aac;
      while (local_8 = local_8 + -1, DAT_10031ab0 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_1002f51c,(int *)&DAT_1002f724);
  }
  __initterm((int *)&DAT_1002f828,(int *)&DAT_1002f92c);
  if ((DAT_100314ec == 0) && (uVar1 = FUN_10004c20(-1), (uVar1 & 0x20) != 0)) {
    DAT_100314ec = 1;
    FUN_10005530();
  }
  if (param_3 == 0) {
    DAT_100314e8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10007690();
  return;
}


/* ==== 10007680 FUN_10007680 ==== */

void FUN_10007680(void)

{
  FUN_100073f0(0xd);
  return;
}


/* ==== 10007690 FUN_10007690 ==== */

void FUN_10007690(void)

{
  FUN_10007490(0xd);
  return;
}


/* ==== 100076a0 __initterm ==== */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2003 Debug */

void __cdecl __initterm(int *param_1,int *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/* ==== 100076d0 FUN_100076d0 ==== */

undefined4 FUN_100076d0(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10007310();
  DAT_1002ff5c = TlsAlloc();
  if (((DAT_1002ff5c != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_1002ff5c,lpTlsValue), BVar1 != 0)) {
    FUN_10007790((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}


/* ==== 10007760 FUN_10007760 ==== */

void FUN_10007760(void)

{
  FUN_10007350();
  if (DAT_1002ff5c != 0xffffffff) {
    TlsFree(DAT_1002ff5c);
    DAT_1002ff5c = 0xffffffff;
  }
  return;
}


/* ==== 10007790 FUN_10007790 ==== */

void __cdecl FUN_10007790(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10030220;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}


/* ==== 100077b0 FUN_100077b0 ==== */

DWORD * FUN_100077b0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_1002ff5c);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1002ff5c,local_8);
      if (BVar1 != 0) {
        FUN_10007790((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_10007837;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10007837:
  SetLastError(dwErrCode);
  return local_8;
}


/* ==== 10007850 FUN_10007850 ==== */

void __cdecl FUN_10007850(LPVOID dst)

{
  if (DAT_1002ff5c != 0xffffffff) {
    if (dst == (LPVOID)0x0) {
      dst = TlsGetValue(DAT_1002ff5c);
    }
    if (dst != (LPVOID)0x0) {
      if (*(int *)((int)dst + 0x24) != 0) {
        FUN_100041a0(*(void **)((int)dst + 0x24),2);
      }
      if (*(int *)((int)dst + 0x28) != 0) {
        FUN_100041a0(*(void **)((int)dst + 0x28),2);
      }
      if (*(int *)((int)dst + 0x30) != 0) {
        FUN_100041a0(*(void **)((int)dst + 0x30),2);
      }
      if (*(int *)((int)dst + 0x38) != 0) {
        FUN_100041a0(*(void **)((int)dst + 0x38),2);
      }
      if (*(int *)((int)dst + 0x40) != 0) {
        FUN_100041a0(*(void **)((int)dst + 0x40),2);
      }
      if (*(int *)((int)dst + 0x44) != 0) {
        FUN_100041a0(*(void **)((int)dst + 0x44),2);
      }
      if (*(undefined **)((int)dst + 0x50) != &DAT_10030220) {
        FUN_100041a0(*(void **)((int)dst + 0x50),2);
      }
      FUN_100041a0(dst,2);
    }
    TlsSetValue(DAT_1002ff5c,(LPVOID)0x0);
  }
  return;
}


