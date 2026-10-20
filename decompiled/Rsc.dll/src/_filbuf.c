/* Rsc.dll — _filbuf.c: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 100059b0 FUN_100059b0 ==== */

void FUN_100059b0(void)

{
  FUN_100059c0(1);
  return;
}


/* ==== 100059c0 FUN_100059c0 ==== */

int __cdecl FUN_100059c0(int param_1)

{
  int iVar1;
  int j;
  int local_c;
  int i;
  
  i = 0;
  local_c = 0;
  FUN_100073f0(2);
  for (j = 0; j < DAT_10032f60; j = j + 1) {
    if ((*(int *)(DAT_10031c18 + j * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10031c18 + j * 4) + 0xc) & 0x83) != 0)) {
      FUN_10002ea0(j,*(int *)(DAT_10031c18 + j * 4));
      if ((*(uint *)(*(int *)(DAT_10031c18 + j * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_100058a0(*(int **)(DAT_10031c18 + j * 4));
          if (iVar1 != -1) {
            i = i + 1;
          }
        }
        else if (((param_1 == 0) && ((*(uint *)(*(int *)(DAT_10031c18 + j * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_100058a0(*(int **)(DAT_10031c18 + j * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_10002f10(j,*(int *)(DAT_10031c18 + j * 4));
    }
  }
  FUN_10007490(2);
  if (param_1 == 1) {
    local_c = i;
  }
  return local_c;
}


/* ==== 10005b00 FUN_10005b00 ==== */

uint __cdecl FUN_10005b00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *local_c;
  
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cb28,0x69,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((param_1[3] & 0x83U) == 0) || ((param_1[3] & 0x40U) != 0)) {
    uVar3 = 0xffffffff;
  }
  else if ((param_1[3] & 2U) == 0) {
    param_1[3] = param_1[3] | 1;
    if ((param_1[3] & 0x10cU) == 0) {
      FUN_1000baf0(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    iVar2 = FUN_10005cf0(param_1[4],(char *)param_1[2],param_1[6]);
    param_1[1] = iVar2;
    if ((param_1[1] == 0) || (param_1[1] == -1)) {
      param_1[3] = param_1[3] | (-(uint)(param_1[1] != 0) & 0x10) + 0x10;
      param_1[1] = 0;
      uVar3 = 0xffffffff;
    }
    else {
      if ((param_1[3] & 0x82U) == 0) {
        if (param_1[4] == -1) {
          local_c = &DAT_1002fe78;
        }
        else {
          local_c = (undefined *)((&DAT_10031ac0)[param_1[4] >> 5] + (param_1[4] & 0x1fU) * 0x24);
        }
        if (((int)(char)local_c[4] & 0x82U) == 0x82) {
          param_1[3] = param_1[3] | 0x2000;
        }
      }
      if (((param_1[6] == 0x200) && ((param_1[3] & 8U) != 0)) && ((param_1[3] & 0x400U) == 0)) {
        param_1[6] = 0x1000;
      }
      param_1[1] = param_1[1] + -1;
      uVar3 = (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    param_1[3] = param_1[3] | 0x20;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* ==== 10005cf0 FUN_10005cf0 ==== */

int __cdecl FUN_10005cf0(uint filehandle,char *param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if ((filehandle < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_100029d0(filehandle);
    iVar3 = FUN_10005d80(filehandle,param_2,param_3);
    __unlock_fhandle(filehandle);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    iVar3 = -1;
  }
  return iVar3;
}


/* ==== 10005d80 FUN_10005d80 ==== */

int __cdecl FUN_10005d80(uint param_1,char *param_2,DWORD param_3)

{
  BOOL BVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  char local_20 [4];
  int local_1c;
  char *local_18;
  DWORD local_14;
  char *local_10;
  DWORD local_c;
  char *local_8;
  
  local_1c = 0;
  local_18 = param_2;
  if ((param_3 == 0) ||
     (iVar4 = (int)param_1 >> 5,
     (*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 2) != 0)) {
    local_1c = 0;
  }
  else {
    if (((*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x48) != 0) &&
       (*(char *)((&DAT_10031ac0)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) != '\n')) {
      *param_2 = *(char *)((&DAT_10031ac0)[iVar4] + 5 + (param_1 & 0x1f) * 0x24);
      local_18 = param_2 + 1;
      local_1c = 1;
      param_3 = param_3 - 1;
      *(undefined1 *)((&DAT_10031ac0)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) = 10;
    }
    BVar1 = ReadFile(*(HANDLE *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24),local_18,param_3,
                     &local_14,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      local_c = GetLastError();
      if (local_c == 5) {
        puVar2 = (undefined4 *)FUN_10006f20();
        *puVar2 = 9;
        pDVar3 = FUN_10006f30();
        *pDVar3 = local_c;
        local_1c = -1;
      }
      else if (local_c == 0x6d) {
        local_1c = 0;
      }
      else {
        __dosmaperr(local_c);
        local_1c = -1;
      }
    }
    else {
      local_1c = local_1c + local_14;
      if (((int)*(char *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) != 0) {
        if ((local_14 == 0) || (*param_2 != '\n')) {
          *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0xfb;
        }
        else {
          *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
               *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) | 4;
        }
        local_10 = param_2;
        local_8 = param_2;
        while (local_8 < param_2 + local_1c) {
          if (*local_8 == '\x1a') {
            if ((*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) {
              *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) =
                   *(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) | 2;
            }
            break;
          }
          if (*local_8 == '\r') {
            if (local_8 < param_2 + local_1c + -1) {
              if (local_8[1] == '\n') {
                local_8 = local_8 + 2;
                *local_10 = '\n';
              }
              else {
                *local_10 = *local_8;
                local_8 = local_8 + 1;
              }
              local_10 = local_10 + 1;
            }
            else {
              local_8 = local_8 + 1;
              local_c = 0;
              BVar1 = ReadFile(*(HANDLE *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24),
                               local_20,1,&local_14,(LPOVERLAPPED)0x0);
              if (BVar1 == 0) {
                local_c = GetLastError();
              }
              if ((local_c == 0) && (local_14 != 0)) {
                if ((*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x48) == 0) {
                  if ((local_10 == param_2) && (local_20[0] == '\n')) {
                    *local_10 = '\n';
                    local_10 = local_10 + 1;
                  }
                  else {
                    FUN_10006ab0(param_1,-1,1);
                    if (local_20[0] != '\n') {
                      *local_10 = '\r';
                      local_10 = local_10 + 1;
                    }
                  }
                }
                else {
                  if (local_20[0] == '\n') {
                    *local_10 = '\n';
                  }
                  else {
                    *local_10 = '\r';
                    *(char *)((&DAT_10031ac0)[iVar4] + 5 + (param_1 & 0x1f) * 0x24) = local_20[0];
                  }
                  local_10 = local_10 + 1;
                }
              }
              else {
                *local_10 = '\r';
                local_10 = local_10 + 1;
              }
            }
          }
          else {
            *local_10 = *local_8;
            local_10 = local_10 + 1;
            local_8 = local_8 + 1;
          }
        }
        local_1c = (int)local_10 - (int)param_2;
      }
    }
  }
  return local_1c;
}


