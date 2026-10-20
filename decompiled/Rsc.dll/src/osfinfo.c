/* Rsc.dll — osfinfo.c: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 100024c0 FUN_100024c0 ==== */

uint FUN_100024c0(void)

{
  int i;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_100073f0(0x12);
  i = 0;
  do {
    if (0x3f < i) {
LAB_10002690:
      FUN_10007490(0x12);
      return local_c;
    }
    if ((&DAT_10031ac0)[i] == 0) {
      local_8 = (undefined4 *)FUN_10003710((void *)0x480,2,0x1002c1a8,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_10031ac0)[i] = local_8;
        DAT_10031bfc = DAT_10031bfc + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_10031ac0)[i] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = i << 5;
        FUN_100029d0(local_c);
      }
      goto LAB_10002690;
    }
    for (local_8 = (undefined4 *)(&DAT_10031ac0)[i];
        local_8 < (undefined4 *)((&DAT_10031ac0)[i] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_100073f0(0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_10007490(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = i * 0x20 + ((int)local_8 - (&DAT_10031ac0)[i]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_10002690;
    i = i + 1;
  } while( true );
}


/* ==== 100026b0 __set_osfhnd ==== */

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  
  if (((uint)param_1 < DAT_10031bfc) &&
     (*(int *)((&DAT_10031ac0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) == -1)) {
    if (DAT_10031428 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)param_2);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)param_2);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)param_2);
      }
    }
    *(intptr_t *)((&DAT_10031ac0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) = param_2;
    iVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10006f20();
    *puVar2 = 9;
    pDVar3 = FUN_10006f30();
    *pDVar3 = 0;
    iVar1 = -1;
  }
  return iVar1;
}


/* ==== 10002770 FUN_10002770 ==== */

undefined4 __cdecl FUN_10002770(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (((param_1 < DAT_10031bfc) &&
      (iVar4 = (int)param_1 >> 5,
      (*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_10031428 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
      }
    }
    *(undefined4 *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10006f20();
    *puVar2 = 9;
    pDVar3 = FUN_10006f30();
    *pDVar3 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* ==== 10002850 FUN_10002850 ==== */

undefined4 __cdecl FUN_10002850(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar3 = *(undefined4 *)((&DAT_10031ac0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* ==== 100028c0 FUN_100028c0 ==== */

uint __cdecl FUN_100028c0(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  undefined4 *puVar2;
  DWORD *pDVar3;
  byte local_10;
  
  local_10 = 0;
  if ((param_2 & 8) != 0) {
    local_10 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    local_10 = local_10 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    local_10 = local_10 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    _Filehandle = 0xffffffff;
  }
  else {
    if (DVar1 == 2) {
      local_10 = local_10 | 0x40;
    }
    else if (DVar1 == 3) {
      local_10 = local_10 | 8;
    }
    _Filehandle = FUN_100024c0();
    if (_Filehandle == 0xffffffff) {
      puVar2 = (undefined4 *)FUN_10006f20();
      *puVar2 = 0x18;
      pDVar3 = FUN_10006f30();
      *pDVar3 = 0;
      _Filehandle = 0xffffffff;
    }
    else {
      __set_osfhnd(_Filehandle,(intptr_t)param_1);
      *(byte *)((&DAT_10031ac0)[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x24) =
           local_10 | 1;
      __unlock_fhandle(_Filehandle);
    }
  }
  return _Filehandle;
}


