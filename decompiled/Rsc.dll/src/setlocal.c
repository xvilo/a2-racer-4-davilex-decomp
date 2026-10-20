/* Rsc.dll — setlocal.c: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 1000ea52 __local_unwind2 ==== */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_1000ea30;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000eae6();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 1000eae6 FUN_1000eae6 ==== */

void FUN_1000eae6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100303d0 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100303cc = in_EAX;
  DAT_100303d4 = unaff_EBP;
  return;
}


/* ==== 1000ebc5 FUN_1000ebc5 ==== */

void FUN_1000ebc5(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


/* ==== 1000ebe0 FUN_1000ebe0 ==== */

int __cdecl FUN_1000ebe0(uint filehandle,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((filehandle < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_100029d0(filehandle);
    iVar2 = FUN_1000ec60(filehandle,param_2);
    __unlock_fhandle(filehandle);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}


/* ==== 1000ec60 FUN_1000ec60 ==== */

int __cdecl FUN_1000ec60(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (int)param_1 >> 5;
  cVar1 = *(char *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    *(byte *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar3 = (undefined4 *)FUN_10006f20();
      *puVar3 = 0x16;
      return -1;
    }
    *(byte *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_10031ac0)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) | 0x80;
  }
  return (-(uint)(((int)cVar1 & 0x80U) != 0) & 0xffffc000) + 0x8000;
}


/* ==== 1000ed30 __fptrap ==== */

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}


/* ==== 1000ed40 FUN_1000ed40 ==== */

uint * __cdecl FUN_1000ed40(int param_1,uint *param_2)

{
  byte *source;
  int iVar1;
  size_t _strlen_result;
  size_t sVar2;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *str2;
  uint local_9c [33];
  int local_18;
  int i;
  int j;
  uint *local_c;
  int local_8;
  
  if ((param_1 < 0) || (5 < param_1)) {
    local_c = (uint *)0x0;
  }
  else {
    FUN_100073f0(0x13);
    local_8 = 1;
    DAT_100317b4 = DAT_100317b4 + 1;
    while (DAT_100317c4 != 0) {
      Sleep(1);
    }
    if (param_1 == 0) {
      local_18 = 1;
      j = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_1000f2d0();
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        str2 = param_2;
        do {
          source = FUN_10010d60((byte *)str2,(byte *)"=;");
          if (((source == (byte *)0x0) || (sVar2 = (int)source - (int)str2, sVar2 == 0)) ||
             (*source == 0x3b)) {
            if (local_8 != 0) {
              FUN_10007490(0x13);
              DAT_100317b4 = DAT_100317b4 + -1;
            }
            return (uint *)0x0;
          }
          i = 1;
          while ((i < 6 && ((iVar1 = _strncmp(*(char **)(i * 0xc + 0x100304e8),(char *)str2,sVar2),
                            iVar1 != 0 ||
                            (_strlen_result = _strlen(*(char **)(i * 0xc + 0x100304e8)),
                            sVar2 != _strlen_result))))) {
            i = i + 1;
          }
          source = source + 1;
          sVar2 = FUN_10010ce0(source,(byte *)";");
          if ((sVar2 == 0) && (*source != 0x3b)) {
            if (local_8 != 0) {
              FUN_10007490(0x13);
              DAT_100317b4 = DAT_100317b4 + -1;
            }
            return (uint *)0x0;
          }
          if (i < 6) {
            _strncpy((char *)local_9c,(char *)source,sVar2);
            *(undefined1 *)((int)local_9c + sVar2) = 0;
            iVar1 = FUN_1000f130(i,local_9c);
            if (iVar1 != 0) {
              j = j + 1;
            }
          }
          str2 = (uint *)(source + sVar2);
          if ((byte)*str2 != 0) {
            str2 = (uint *)((int)str2 + 1);
          }
        } while ((byte)*str2 != 0);
        if (j == 0) {
          local_b0 = (uint *)0x0;
        }
        else {
          local_b0 = FUN_1000f2d0();
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_1000f3d0(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          for (i = 0; i < 6; i = i + 1) {
            if (i != 0) {
              iVar1 = _strcmp((char *)local_9c,(&DAT_100304ec)[i * 3]);
              if (iVar1 == 0) {
                j = j + 1;
              }
              else {
                iVar1 = FUN_1000f130(i,local_9c);
                if (iVar1 == 0) {
                  local_18 = 0;
                }
                else {
                  j = j + 1;
                }
              }
            }
          }
          if (local_18 == 0) {
            if (j == 0) {
              local_b4 = (uint *)0x0;
            }
            else {
              local_b4 = FUN_1000f2d0();
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_1000f2d0();
            FUN_100041a0(DAT_100304ec,2);
            DAT_100304ec = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_100304ec)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_1000f130(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_10007490(0x13);
      DAT_100317b4 = DAT_100317b4 + -1;
    }
  }
  return local_c;
}


/* ==== 1000f130 FUN_1000f130 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000f130(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  size_t _strlen_result;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint local_ac [2];
  undefined4 local_a4;
  uint local_a0 [33];
  undefined4 local_1c;
  undefined4 local_18 [2];
  char *dst;
  uint *dst_2;
  undefined4 local_8;
  
  puVar1 = FUN_1000f3d0(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar5 = 0x132;
    pcVar4 = "setlocal.c";
    uVar3 = 2;
    _strlen_result = _strlen((char *)local_a0);
    dst_2 = (uint *)FUN_10003710((void *)(_strlen_result + 1),uVar3,(int)pcVar4,iVar5);
    if (dst_2 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      dst = (char *)(&DAT_100304ec)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_10031634 + param_1 * 4);
      FUN_100061d0(local_18,(undefined4 *)(&DAT_10031680 + param_1 * 6),6);
      local_1c = DAT_1003164c;
      puVar1 = FUN_10001ec0(dst_2,local_a0);
      (&DAT_100304ec)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_10031634 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_100061d0((undefined4 *)(&DAT_10031680 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_1003164c = local_a4;
      }
      if (param_1 == 1) {
        _DAT_10031650 = local_a4;
      }
      iVar5 = (**(code **)(&DAT_100304f0 + param_1 * 0xc))();
      if (iVar5 == 0) {
        if (dst != s_C_100303d8) {
          FUN_100041a0(dst,2);
        }
        uVar2 = (&DAT_100304ec)[param_1 * 3];
      }
      else {
        (&DAT_100304ec)[param_1 * 3] = dst;
        FUN_100041a0(dst_2,2);
        *(undefined4 *)(&DAT_10031634 + param_1 * 4) = local_8;
        DAT_1003164c = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* ==== 1000f2d0 FUN_1000f2d0 ==== */

uint * FUN_1000f2d0(void)

{
  bool bVar1;
  int _strcmp_result;
  uint *puVar2;
  int i;
  
  bVar1 = true;
  if (DAT_100304ec == (uint *)0x0) {
    DAT_100304ec = (uint *)FUN_10003710((void *)0x351,2,0x1002d060,0x167);
  }
  *(undefined1 *)DAT_100304ec = 0;
  for (i = 1; __strcats(DAT_100304ec,3), i < 5; i = i + 1) {
    FUN_10001ed0(DAT_100304ec,(uint *)";");
    _strcmp_result = _strcmp((char *)(&DAT_100304ec)[i * 3],(char *)(&DAT_100304ec)[(i + 1) * 3]);
    if (_strcmp_result != 0) {
      bVar1 = false;
    }
  }
  puVar2 = DAT_100304ec;
  if (bVar1) {
    FUN_100041a0(DAT_100304ec,2);
    DAT_100304ec = (uint *)0x0;
    puVar2 = (uint *)PTR_s_C_10030504;
  }
  return puVar2;
}


/* ==== 1000f3d0 FUN_1000f3d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_1000f3d0(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char *pcVar1;
  int iVar2;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    pcVar1 = (char *)param_2;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar2 = _strcmp(s_C_10030460,(char *)param_1);
    if ((iVar2 != 0) && (iVar2 = _strcmp(s_C_100303dc,(char *)param_1), iVar2 != 0)) {
      iVar2 = FUN_1000f5c0((char *)local_8c,(byte *)param_1);
      if (iVar2 != 0) {
        return (uint *)0x0;
      }
      iVar2 = FUN_10010da0((char *)local_8c,(undefined2 *)&DAT_10031658,(int)local_8c);
      if (iVar2 == 0) {
        return (uint *)0x0;
      }
      _DAT_10031660 = (uint)DAT_1003165c;
      ___lc_lctostr((uint *)s_C_10030460,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_10001ec0((uint *)s_C_100303dc,(uint *)s_C_10030460);
      }
      else {
        FUN_10001ec0((uint *)s_C_100303dc,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_100061d0(param_3,(undefined4 *)&DAT_10031658,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_100061d0(param_4,(undefined4 *)&DAT_10031660,4);
    }
    FUN_10001ec0(param_2,(uint *)s_C_10030460);
    pcVar1 = s_C_10030460;
  }
  return (uint *)pcVar1;
}


