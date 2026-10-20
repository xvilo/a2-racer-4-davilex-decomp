/* Rsc.dll — ftell.c: 4 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10006a20 FUN_10006a20 ==== */

DWORD __cdecl FUN_10006a20(uint filehandle,LONG param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  if ((filehandle < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_100029d0(filehandle);
    DVar3 = FUN_10006ab0(filehandle,param_2,param_3);
    __unlock_fhandle(filehandle);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


/* ==== 10006ab0 FUN_10006ab0 ==== */

DWORD __cdecl FUN_10006ab0(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  ulong local_8;
  
  hFile = (HANDLE)FUN_10002850(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    DVar2 = 0xffffffff;
  }
  else {
    DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar2 == 0xffffffff) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) {
      *(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
           *(byte *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    }
    else {
      __dosmaperr(local_8);
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}


/* ==== 10006b70 FUN_10006b70 ==== */

int __cdecl FUN_10006b70(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cb5c,0x32,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_10002e60(param_1);
  iVar2 = FUN_10006be0((uint *)param_1);
  FUN_10002ed0(param_1);
  return iVar2;
}


/* ==== 10006be0 FUN_10006be0 ==== */

int __cdecl FUN_10006be0(uint *param_1)

{
  uint filehandle;
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  char *pcVar5;
  DWORD local_20;
  int i;
  uint j;
  char *local_8;
  
  if ((param_1 == (uint *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cb5c,99,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  filehandle = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_20 = FUN_10006a20(filehandle,0,1);
  if ((int)local_20 < 0) {
    i = -1;
  }
  else if ((param_1[3] & 0x108) == 0) {
    i = local_20 - param_1[1];
  }
  else {
    i = *param_1 - param_1[2];
    iVar2 = (int)filehandle >> 5;
    if ((param_1[3] & 3) == 0) {
      if ((param_1[3] & 0x80) == 0) {
        puVar3 = (undefined4 *)FUN_10006f20();
        *puVar3 = 0x16;
        return -1;
      }
    }
    else if (((int)*(char *)((&DAT_10031ac0)[iVar2] + 4 + (filehandle & 0x1f) * 0x24) & 0x80U) != 0)
    {
      for (local_8 = (char *)param_1[2]; local_8 < (char *)*param_1; local_8 = local_8 + 1) {
        if (*local_8 == '\n') {
          i = i + 1;
        }
      }
    }
    if (local_20 != 0) {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          i = 0;
        }
        else {
          j = param_1[1] + (*param_1 - param_1[2]);
          if (((int)*(char *)((&DAT_10031ac0)[iVar2] + 4 + (filehandle & 0x1f) * 0x24) & 0x80U) != 0
             ) {
            DVar4 = FUN_10006a20(filehandle,0,2);
            if (DVar4 == local_20) {
              pcVar5 = (char *)(param_1[2] + j);
              for (local_8 = (char *)param_1[2]; local_8 < pcVar5; local_8 = local_8 + 1) {
                if (*local_8 == '\n') {
                  j = j + 1;
                }
              }
              if ((param_1[3] & 0x2000) != 0) {
                j = j + 1;
              }
            }
            else {
              FUN_10006a20(filehandle,local_20,0);
              if (((j < 0x201) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
                j = 0x200;
              }
              else {
                j = param_1[6];
              }
              if ((*(byte *)((&DAT_10031ac0)[iVar2] + 4 + (filehandle & 0x1f) * 0x24) & 4) != 0) {
                j = j + 1;
              }
            }
          }
          local_20 = local_20 - j;
        }
      }
      i = local_20 + i;
    }
  }
  return i;
}


