/* Rsc.dll — ioinit.c: 4 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10006e80 __dosmaperr ==== */

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  uint i;
  
  pDVar1 = FUN_10006f30();
  *pDVar1 = param_1;
  i = 0;
  while( true ) {
    if (0x2c < i) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          puVar2 = (undefined4 *)FUN_10006f20();
          *puVar2 = 0x16;
        }
        else {
          puVar2 = (undefined4 *)FUN_10006f20();
          *puVar2 = 8;
        }
      }
      else {
        puVar2 = (undefined4 *)FUN_10006f20();
        *puVar2 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_1002fd10 + i * 8)) break;
    i = i + 1;
  }
  puVar2 = (undefined4 *)FUN_10006f20();
  *puVar2 = *(undefined4 *)(&DAT_1002fd14 + i * 8);
  return;
}


/* ==== 10006f20 FUN_10006f20 ==== */

int FUN_10006f20(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100077b0();
  return (int)(pDVar1 + 2);
}


/* ==== 10006f30 FUN_10006f30 ==== */

DWORD * FUN_10006f30(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100077b0();
  return pDVar1 + 3;
}


/* ==== 10006f40 FUN_10006f40 ==== */

void FUN_10006f40(void)

{
  DWORD DVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  int *piVar3;
  DWORD local_70;
  UINT local_6c;
  UINT local_68;
  byte *local_64;
  int i;
  uint j;
  undefined4 *local_54;
  _STARTUPINFOA startupinfo;
  byte *local_8;
  
  local_54 = (undefined4 *)FUN_10003710((void *)0x480,2,0x1002cb64,0x81);
  if (local_54 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10031bfc = 0x20;
  DAT_10031ac0 = local_54;
  for (; local_54 < DAT_10031ac0 + 0x120; local_54 = local_54 + 9) {
    *(undefined1 *)(local_54 + 1) = 0;
    *local_54 = 0xffffffff;
    *(undefined1 *)((int)local_54 + 5) = 10;
    local_54[2] = 0;
  }
  GetStartupInfoA(&startupinfo);
  if ((startupinfo.cbReserved2 != 0) &&
     (CONCAT22(startupinfo.lpReserved2._2_2_,startupinfo.lpReserved2._0_2_) != 0)) {
    local_6c = *(UINT *)CONCAT22(startupinfo.lpReserved2._2_2_,startupinfo.lpReserved2._0_2_);
    local_8 = (byte *)(CONCAT22(startupinfo.lpReserved2._2_2_,startupinfo.lpReserved2._0_2_) + 4);
    local_64 = local_8 + local_6c;
    if (0x7ff < (int)local_6c) {
      local_6c = 0x800;
    }
    local_68 = local_6c;
    i = 1;
    while ((int)DAT_10031bfc < (int)local_6c) {
      local_54 = (undefined4 *)FUN_10003710((void *)0x480,2,0x1002cb64,0xb6);
      if (local_54 == (undefined4 *)0x0) {
        local_68 = DAT_10031bfc;
        break;
      }
      (&DAT_10031ac0)[i] = local_54;
      DAT_10031bfc = DAT_10031bfc + 0x20;
      for (; local_54 < (undefined4 *)((int)(&DAT_10031ac0)[i] + 0x480); local_54 = local_54 + 9) {
        *(undefined1 *)(local_54 + 1) = 0;
        *local_54 = 0xffffffff;
        *(undefined1 *)((int)local_54 + 5) = 10;
        local_54[2] = 0;
      }
      i = i + 1;
    }
    for (j = 0; (int)j < (int)local_68; j = j + 1) {
      if (((*(int *)local_64 != -1) && ((*local_8 & 1) != 0)) &&
         (((*local_8 & 8) != 0 || (DVar1 = GetFileType(*(HANDLE *)local_64), DVar1 != 0)))) {
        puVar2 = (undefined4 *)((int)(&DAT_10031ac0)[(int)j >> 5] + (j & 0x1f) * 0x24);
        *puVar2 = *(undefined4 *)local_64;
        *(byte *)(puVar2 + 1) = *local_8;
      }
      local_8 = local_8 + 1;
      local_64 = local_64 + 4;
    }
  }
  for (j = 0; (int)j < 3; j = j + 1) {
    piVar3 = DAT_10031ac0 + j * 9;
    if (*piVar3 == -1) {
      *(undefined1 *)(piVar3 + 1) = 0x81;
      if (j == 0) {
        local_70 = 0xfffffff6;
      }
      else {
        local_70 = 0xfffffff5 - (j != 1);
      }
      hFile = GetStdHandle(local_70);
      if ((hFile == (HANDLE)0xffffffff) || (DVar1 = GetFileType(hFile), DVar1 == 0)) {
        *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x40;
      }
      else {
        *piVar3 = (int)hFile;
        if ((DVar1 & 0xff) == 2) {
          *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x40;
        }
        else if ((DVar1 & 0xff) == 3) {
          *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x80;
    }
  }
  SetHandleCount(DAT_10031bfc);
  return;
}


