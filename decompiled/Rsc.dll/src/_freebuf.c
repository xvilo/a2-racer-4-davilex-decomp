/* Rsc.dll — _freebuf.c: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10005020 FUN_10005020 ==== */

undefined4 __cdecl FUN_10005020(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  int i;
  
  local_c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = FUN_10003050(0,0,0,0,(byte *)"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_c = 0;
  }
  else {
    for (i = 0; i < 5; i = i + 1) {
      param_1[i + 6] = *(int *)(param_3 + 0x18 + i * 4) - *(int *)(param_2 + 0x18 + i * 4);
      param_1[i + 1] = *(int *)(param_3 + 4 + i * 4) - *(int *)(param_2 + 4 + i * 4);
      if (((param_1[i + 6] != 0) || (param_1[i + 1] != 0)) &&
         ((i != 0 && ((i != 2 || ((DAT_1002fce0 & 0x10) != 0)))))) {
        local_c = 1;
      }
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_c;
}


/* ==== 10005150 FUN_10005150 ==== */

void __cdecl FUN_10005150(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_100073f0(9);
  iVar2 = FUN_10003050(0,0,0,0,(byte *)"%s");
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
  }
  local_8 = DAT_1003143c;
  do {
    if ((local_8 == (undefined4 *)0x0) || (local_8 == local_c)) {
      FUN_10007490(9);
      iVar2 = FUN_10003050(0,0,0,0,(byte *)"%s");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    if ((((local_8[5] & 0xffff) != 3) && ((local_8[5] & 0xffff) != 0)) &&
       (((local_8[5] & 0xffff) != 2 || ((DAT_1002fce0 & 0x10) != 0)))) {
      if (local_8[2] != 0) {
        iVar2 = FID_conflict_AtlIsValidAddress((void *)local_8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_10003050(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_10003050(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_10003050(0,0,0,0,(byte *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_8[5] & 0xffff) == 4) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n")
        ;
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_10031c00 == (code *)0x0) {
          FUN_10005410((int)local_8);
        }
        else {
          (*DAT_10031c00)(local_8 + 8,local_8[4]);
        }
      }
      else if (local_8[5] == 1) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_10005410((int)local_8);
      }
      else if ((local_8[5] & 0xffff) == 2) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_10005410((int)local_8);
      }
    }
    local_8 = (undefined4 *)*local_8;
  } while( true );
}


/* ==== 10005410 FUN_10005410 ==== */

void __cdecl FUN_10005410(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint local_5c;
  int local_58;
  int i;
  byte local_4c [20];
  undefined1 local_38 [52];
  
  i = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) < 0x10) {
      local_58 = *(int *)(param_1 + 0x10);
    }
    else {
      local_58 = 0x10;
    }
    if (local_58 <= i) break;
    bVar1 = *(byte *)(param_1 + i + 0x20);
    if (DAT_10030214 < 2) {
      local_5c = *(ushort *)(PTR_s__10030008 + (uint)bVar1 * 2) & 0x157;
    }
    else {
      local_5c = FUN_1000b640((uint)bVar1,0x157);
    }
    if (local_5c == 0) {
      bVar1 = 0x20;
    }
    local_4c[i] = bVar1;
    FUN_1000b540(local_38 + i * 3,(byte *)"%.2X ");
    i = i + 1;
  }
  local_4c[i] = 0;
  iVar3 = FUN_10003050(0,0,0,0,(byte *)" Data: <%s> %s\n");
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* ==== 10005530 FUN_10005530 ==== */

undefined4 FUN_10005530(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_10004eb0(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_1002fce0 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_10003050(0,0,0,0,(byte *)"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_10005150((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}


/* ==== 100055b0 FUN_100055b0 ==== */

void __cdecl FUN_100055b0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int i;
  
  if (param_1 != 0) {
    for (i = 0; i < 5; i = i + 1) {
      iVar2 = FUN_10003050(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = FUN_10003050(0,0,0,0,(byte *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_10003050(0,0,0,0,(byte *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


/* ==== 10005680 FUN_10005680 ==== */

undefined4 __cdecl FUN_10005680(uint filehandle)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 __close_lk_result;
  
  if ((filehandle < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_100029d0(filehandle);
    __close_lk_result = __close_lk(filehandle);
    __unlock_fhandle(filehandle);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    __close_lk_result = 0xffffffff;
  }
  return __close_lk_result;
}


/* ==== 10005700 __close_lk ==== */

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  ulong local_8;
  
  iVar1 = FUN_10002850(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10002850(1);
      iVar2 = FUN_10002850(2);
      if (iVar1 == iVar2) goto LAB_10005753;
    }
    hObject = (HANDLE)FUN_10002850(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_10005765;
    }
  }
LAB_10005753:
  local_8 = 0;
LAB_10005765:
  FUN_10002770(param_1);
  *(undefined1 *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


/* ==== 100057b0 FUN_100057b0 ==== */

void __cdecl FUN_100057b0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cb1c,0x30,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_100041a0((void *)param_1[2],2);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}


/* ==== 10005850 FUN_10005850 ==== */

int __cdecl FUN_10005850(undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_100059c0(0);
  }
  else {
    FUN_10002e60(param_1);
    iVar1 = FUN_100058a0((int *)param_1);
    FUN_10002ed0(param_1);
  }
  return iVar1;
}


/* ==== 100058a0 FUN_100058a0 ==== */

int __cdecl FUN_100058a0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_100058f0(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_1000b700(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


/* ==== 100058f0 FUN_100058f0 ==== */

undefined4 __cdecl FUN_100058f0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1[3] & 3U) == 2) && ((param_1[3] & 0x108U) != 0)) &&
     (uVar2 = *param_1 - param_1[2], 0 < (int)uVar2)) {
    uVar1 = FUN_1000b7e0(param_1[4],(char *)param_1[2],uVar2);
    if (uVar1 == uVar2) {
      if ((param_1[3] & 0x80U) != 0) {
        param_1[3] = param_1[3] & 0xfffffffd;
      }
    }
    else {
      param_1[3] = param_1[3] | 0x20;
      local_8 = 0xffffffff;
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return local_8;
}


