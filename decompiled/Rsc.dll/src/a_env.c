/* Rsc.dll — a_env.c: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10007fe0 FUN_10007fe0 ==== */

LPSTR FUN_10007fe0(void)

{
  char *pcVar1;
  LPWCH pWVar2;
  void *cbMultiByte;
  LPSTR pCVar3;
  int iVar4;
  LPCH dst;
  LPWCH local_18;
  char *local_10;
  LPWCH local_c;
  
  local_18 = (LPWCH)0x0;
  dst = (LPCH)0x0;
  if (DAT_100315f4 == 0) {
    local_18 = GetEnvironmentStringsW();
    if (local_18 == (LPWCH)0x0) {
      dst = GetEnvironmentStrings();
      if (dst == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_100315f4 = 2;
    }
    else {
      DAT_100315f4 = 1;
    }
  }
  if (DAT_100315f4 == 1) {
    if ((local_18 == (LPWCH)0x0) && (local_18 = GetEnvironmentStringsW(), local_18 == (LPWCH)0x0)) {
      pCVar3 = (LPSTR)0x0;
    }
    else {
      local_c = local_18;
      pWVar2 = local_c;
      while (local_c = pWVar2, *local_c != L'\0') {
        pWVar2 = local_c + 1;
        if (local_c[1] == L'\0') {
          pWVar2 = local_c + 2;
        }
      }
      iVar4 = ((int)local_c - (int)local_18 >> 1) + 1;
      cbMultiByte = (void *)WideCharToMultiByte(0,0,local_18,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,
                                                (LPBOOL)0x0);
      if ((cbMultiByte == (void *)0x0) ||
         (dst = (LPCH)FUN_10003710(cbMultiByte,2,0x1002cb9c,100), dst == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(local_18);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_18,iVar4,dst,(int)cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
        if (iVar4 == 0) {
          FUN_100041a0(dst,2);
          dst = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(local_18);
        pCVar3 = dst;
      }
    }
  }
  else if (DAT_100315f4 == 2) {
    if ((dst == (LPCH)0x0) && (dst = GetEnvironmentStrings(), dst == (LPCH)0x0)) {
      pCVar3 = (LPSTR)0x0;
    }
    else {
      local_10 = dst;
      pcVar1 = local_10;
      while (local_10 = pcVar1, *local_10 != '\0') {
        pcVar1 = local_10 + 1;
        if (local_10[1] == '\0') {
          pcVar1 = local_10 + 2;
        }
      }
      pCVar3 = (LPSTR)FUN_10003710(local_10 + (1 - (int)dst),2,0x1002cb9c,0x8f);
      if (pCVar3 == (LPSTR)0x0) {
        FreeEnvironmentStringsA(dst);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        FUN_100061d0((undefined4 *)pCVar3,(undefined4 *)dst,(uint)(local_10 + (1 - (int)dst)));
        FreeEnvironmentStringsA(dst);
      }
    }
  }
  else {
    pCVar3 = (LPSTR)0x0;
  }
  return pCVar3;
}


/* ==== 10008200 FUN_10008200 ==== */

undefined4 __cdecl FUN_10008200(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  DAT_10031a8c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10031a8c == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_100098d0();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      HeapDestroy(DAT_10031a8c);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* ==== 10008250 FUN_10008250 ==== */

void FUN_10008250(void)

{
  undefined4 local_c;
  undefined4 i;
  
  local_c = DAT_10031a88;
  for (i = 0; i < DAT_10031a84; i = i + 1) {
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
    HeapFree(DAT_10031a8c,0,*(LPVOID *)((int)local_c + 0x10));
    local_c = (LPVOID)((int)local_c + 0x14);
  }
  HeapFree(DAT_10031a8c,0,DAT_10031a88);
  HeapDestroy(DAT_10031a8c);
  return;
}


/* ==== 100082f0 FUN_100082f0 ==== */

undefined4 FUN_100082f0(void)

{
  return 1;
}


/* ==== 10008300 __FF_MSGBANNER ==== */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
    FUN_10008350(0xfc);
    if (DAT_100315f8 != (code *)0x0) {
      (*DAT_100315f8)();
    }
    FUN_10008350(0xff);
  }
  return;
}


/* ==== 10008350 FUN_10008350 ==== */

void __cdecl FUN_10008350(int param_1)

{
  code *pcVar1;
  int iVar2;
  size_t _strlen_result;
  HANDLE hFile;
  DWORD DVar3;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  uint local_1b4 [40];
  uint local_114 [65];
  uint *local_10;
  uint i;
  DWORD local_8;
  
  for (i = 0; (i < 0x12 && (param_1 != *(int *)(&DAT_1002ff68 + i * 8))); i = i + 1) {
  }
  if (param_1 == *(int *)(&DAT_1002ff68 + i * 8)) {
    if ((param_1 != 0xfc) &&
       (iVar2 = FUN_10003050(1,0,0,0,(&PTR_s_R6002___floating_point_not_loade_1002ff6c)[i * 2]),
       iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_8;
      _strlen_result = _strlen((&PTR_s_R6002___floating_point_not_loade_1002ff6c)[i * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_1002ff6c)[i * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,_strlen_result,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_114,0x104);
      if (DVar3 == 0) {
        FUN_10001ec0(local_114,(uint *)"<program name unknown>");
      }
      local_10 = local_114;
      _strlen_result = _strlen((char *)local_10);
      if (0x3c < _strlen_result + 1) {
        _strlen_result = _strlen((char *)local_114);
        local_10 = (uint *)((int)local_10 + (_strlen_result - 0x3b));
        _strncpy((char *)local_10,"...",3);
      }
      FUN_10001ec0(local_1b4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10001ed0(local_1b4,local_10);
      FUN_10001ed0(local_1b4,(uint *)"\n\n");
      FUN_10001ed0(local_1b4,(uint *)(&PTR_s_R6002___floating_point_not_loade_1002ff6c)[i * 2]);
      FUN_10009170(local_1b4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


