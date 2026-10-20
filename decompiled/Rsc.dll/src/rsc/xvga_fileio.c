/* Rsc.dll — rsc/xvga_fileio.c: 34 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10001005 xvga_src_fseek ==== */

void __cdecl xvga_src_fseek(undefined **param_1,int param_2,DWORD param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [16];
  DWORD DStack_8;
  
                    /* 0x1005  13  xvga_src_fseek */
  puVar3 = auStack_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    FUN_10002320(param_1,param_2,param_3);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690((int)DAT_100313f8);
    if (iVar2 == iVar1) {
      DStack_8 = param_3;
      if (param_3 == 0) {
        if ((DAT_100313f0 < DAT_10031404 + param_2) || (DAT_10031404 + param_2 < DAT_10031404)) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
        }
      }
      else if (param_3 == 1) {
        FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
      }
      else if (param_3 == 2) {
        if (DAT_100313f0 < DAT_100313f0 + param_2) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_100313f0 + param_2,0);
        }
      }
      else {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10002320(param_1,param_2,param_3);
    }
  }
  DStack_8 = 0x1000162c;
  __chkesp();
  return;
}


/* ==== 1000100a xvga_fileio_set_check_sequence ==== */

void __cdecl xvga_fileio_set_check_sequence(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  int iStack_8;
  
                    /* 0x100a  3  xvga_fileio_set_check_sequence */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iStack_8 = param_1;
  if ((param_1 < 0) || (1 < param_1)) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else {
    DAT_1003140c = param_1;
  }
  iStack_8 = 0x10001451;
  __chkesp();
  return;
}


/* ==== 1000100f xvga_src_fopen ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_src_fopen(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_58 [16];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  short sStack_c;
  int iStack_8;
  
                    /* 0x100f  12  xvga_src_fopen */
  puVar3 = auStack_58;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    uStack_10 = FUN_100022c0((LPCSTR)param_1,"rb");
  }
  else {
    for (iStack_8 = 0; iStack_8 < _DAT_100313fc; iStack_8 = iStack_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + iStack_8 * 0x1c),param_1);
      if (uVar1 == 0) {
        DAT_10031404 = *(int *)(DAT_10031400 + 0x14 + iStack_8 * 0x1c);
        DAT_100313f0 = DAT_10031404 + *(int *)(DAT_10031400 + 0x18 + iStack_8 * 0x1c);
        break;
      }
    }
    sStack_c = DAT_100313fc;
    if (iStack_8 == DAT_100313fc) {
      uStack_14 = FUN_100022c0((LPCSTR)param_1,"rb");
    }
    else {
      iStack_18 = FUN_10002320(DAT_100313f8,DAT_10031404,0);
    }
  }
  iStack_8 = 0x100018e7;
  __chkesp();
  return;
}


/* ==== 10001014 xvga_exit_fileio ==== */

void xvga_exit_fileio(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x1014  1  xvga_exit_fileio */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10031408 != 0) {
    LocalFree(DAT_10031400);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      FUN_10001d70(DAT_100313f8);
      DAT_10031408 = 0;
    }
    else {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
  }
  uStack_8 = 0x10001bcf;
  __chkesp();
  return;
}


/* ==== 10001019 xvga_rc_filepos ==== */

undefined4 __cdecl xvga_rc_filepos(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1019  8  xvga_rc_filepos */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x14 + param_1 * 0x1c);
}


/* ==== 1000101e xvga_src_filelength ==== */

void __cdecl xvga_src_filelength(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_4c [16];
  uint uStack_c;
  uint uStack_8;
  
                    /* 0x101e  11  xvga_src_filelength */
  puVar3 = auStack_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == 0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    uStack_8 = FUN_10015690(param_1);
    FUN_100155d0(uStack_8);
  }
  else {
    iVar2 = FUN_10015690(param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      uStack_c = FUN_10015690(param_1);
      FUN_100155d0(uStack_c);
    }
  }
  uStack_8 = 0x1000177c;
  __chkesp();
  return;
}


/* ==== 10001023 xvga_init_fileio ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_init_fileio(LPCSTR param_1,LPCSTR param_2)

{
  uint filehandle;
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_64 [16];
  uint auStack_24 [5];
  undefined4 uStack_10;
  int iStack_c;
  short asStack_8 [2];
  
                    /* 0x1023  5  xvga_init_fileio */
  puVar2 = auStack_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((DAT_10031408 == 0) &&
     (DAT_100313f4 = (undefined **)FUN_100022c0(param_1,"rb"), DAT_100313f4 != (undefined **)0x0)) {
    FUN_10001fb0((char *)asStack_8,2,1,DAT_100313f4);
    if (asStack_8[0] < 1) {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
    else {
      _DAT_100313fc = (int)asStack_8[0];
      LocalAlloc(0x40,_DAT_100313fc * 0x1c);
      DAT_10031400 = __chkesp();
      if (DAT_10031400 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
      else {
        for (iStack_c = 0; iStack_c < _DAT_100313fc; iStack_c = iStack_c + 1) {
          FUN_10001fb0((char *)auStack_24,0x14,1,DAT_100313f4);
          FUN_10001fb0((char *)&uStack_10,1,4,DAT_100313f4);
          FUN_10001ec0((uint *)(DAT_10031400 + iStack_c * 0x1c),auStack_24);
          *(undefined4 *)(DAT_10031400 + 0x14 + iStack_c * 0x1c) = uStack_10;
          if (((uint)DAT_100313f4[3] & 0x20) != 0) {
            MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
            __chkesp();
            goto LAB_1000132e;
          }
        }
        FUN_10001d70(DAT_100313f4);
        DAT_100313f8 = FUN_100022c0(param_2,"rb");
        if (DAT_100313f8 == 0) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          filehandle = FUN_10015690(DAT_100313f8);
          DAT_100313f0 = FUN_100155d0(filehandle);
          for (iStack_c = 0; iStack_c < _DAT_100313fc + -1; iStack_c = iStack_c + 1) {
            *(int *)(DAT_10031400 + 0x18 + iStack_c * 0x1c) =
                 *(int *)(DAT_10031400 + 0x14 + (iStack_c + 1) * 0x1c) -
                 *(int *)(DAT_10031400 + 0x14 + iStack_c * 0x1c);
          }
          *(DWORD *)(DAT_10031400 + 0x18 + iStack_c * 0x1c) =
               DAT_100313f0 - *(int *)(DAT_10031400 + 0x14 + iStack_c * 0x1c);
          DAT_10031408 = 1;
        }
      }
    }
  }
LAB_1000132e:
  asStack_8[0] = 0x133b;
  asStack_8[1] = 0x1000;
  __chkesp();
  return;
}


/* ==== 10001028 xvga_file_exist ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_file_exist(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_4c [16];
  undefined **ppuStack_c;
  int iStack_8;
  
                    /* 0x1028  2  xvga_file_exist */
  puVar3 = auStack_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    ppuStack_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (ppuStack_c != (undefined **)0x0) {
      FUN_10001d70(ppuStack_c);
    }
  }
  else {
    for (iStack_8 = 0; iStack_8 < _DAT_100313fc; iStack_8 = iStack_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + iStack_8 * 0x1c),param_1);
      if (uVar1 == 0) goto LAB_10001b01;
    }
    ppuStack_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (ppuStack_c != (undefined **)0x0) {
      FUN_10001d70(ppuStack_c);
    }
  }
LAB_10001b01:
  iStack_8 = 0x10001b0e;
  __chkesp();
  return;
}


/* ==== 1000102d xvga_get_filehandle ==== */

void __cdecl xvga_get_filehandle(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x102d  4  xvga_get_filehandle */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10002850(*(uint *)(param_1 + 0x10));
  uStack_8 = 0x10001d44;
  __chkesp();
  return;
}


/* ==== 10001032 xvga_rc_filelength ==== */

undefined4 __cdecl xvga_rc_filelength(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1032  6  xvga_rc_filelength */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x18 + param_1 * 0x1c);
}


/* ==== 10001037 xvga_rc_filename ==== */

void __cdecl xvga_rc_filename(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x1037  7  xvga_rc_filename */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10001ec0(param_2,(uint *)(DAT_10031400 + param_1 * 0x1c));
  uStack_8 = 0x10001c70;
  __chkesp();
  return;
}


/* ==== 1000103c xvga_src_fclose ==== */

void __cdecl xvga_src_fclose(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x103c  10  xvga_src_fclose */
  puVar3 = auStack_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else if (DAT_10031408 == 0) {
    FUN_10001d70(param_1);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10001d70(param_1);
    }
  }
  uStack_8 = 0x100019f8;
  __chkesp();
  return;
}


/* ==== 10001041 xvga_rc_num_files ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 xvga_rc_num_files(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1041  9  xvga_rc_num_files */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return _DAT_100313fc;
}


/* ==== 10001090 xvga_init_fileio ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_init_fileio(LPCSTR param_1,LPCSTR param_2)

{
  uint filehandle;
  int j;
  undefined4 *puVar1;
  undefined4 local_64 [16];
  uint local_24 [5];
  undefined4 local_10;
  int i;
  short local_8 [2];
  
  puVar1 = local_64;
  for (j = 0x18; j != 0; j = j + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  if ((DAT_10031408 == 0) &&
     (DAT_100313f4 = (undefined **)FUN_100022c0(param_1,"rb"), DAT_100313f4 != (undefined **)0x0)) {
    FUN_10001fb0((char *)local_8,2,1,DAT_100313f4);
    if (local_8[0] < 1) {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
    else {
      _DAT_100313fc = (int)local_8[0];
      LocalAlloc(0x40,_DAT_100313fc * 0x1c);
      DAT_10031400 = __chkesp();
      if (DAT_10031400 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
      else {
        for (i = 0; i < _DAT_100313fc; i = i + 1) {
          FUN_10001fb0((char *)local_24,0x14,1,DAT_100313f4);
          FUN_10001fb0((char *)&local_10,1,4,DAT_100313f4);
          FUN_10001ec0((uint *)(DAT_10031400 + i * 0x1c),local_24);
          *(undefined4 *)(DAT_10031400 + 0x14 + i * 0x1c) = local_10;
          if (((uint)DAT_100313f4[3] & 0x20) != 0) {
            MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
            __chkesp();
            goto LAB_1000132e;
          }
        }
        FUN_10001d70(DAT_100313f4);
        DAT_100313f8 = FUN_100022c0(param_2,"rb");
        if (DAT_100313f8 == 0) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          filehandle = FUN_10015690(DAT_100313f8);
          DAT_100313f0 = FUN_100155d0(filehandle);
          for (i = 0; i < _DAT_100313fc + -1; i = i + 1) {
            *(int *)(DAT_10031400 + 0x18 + i * 0x1c) =
                 *(int *)(DAT_10031400 + 0x14 + (i + 1) * 0x1c) -
                 *(int *)(DAT_10031400 + 0x14 + i * 0x1c);
          }
          *(DWORD *)(DAT_10031400 + 0x18 + i * 0x1c) =
               DAT_100313f0 - *(int *)(DAT_10031400 + 0x14 + i * 0x1c);
          DAT_10031408 = 1;
        }
      }
    }
  }
LAB_1000132e:
  local_8[0] = 0x133b;
  local_8[1] = 0x1000;
  __chkesp();
  return;
}


/* ==== 100013f0 xvga_fileio_set_check_sequence ==== */

void __cdecl xvga_fileio_set_check_sequence(int param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_48 [16];
  int local_8;
  
  puVar1 = local_48;
  for (i = 0x11; i != 0; i = i + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  local_8 = param_1;
  if ((param_1 < 0) || (1 < param_1)) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else {
    DAT_1003140c = param_1;
  }
  local_8 = 0x10001451;
  __chkesp();
  return;
}


/* ==== 10001470 xvga_src_fseek ==== */

void __cdecl xvga_src_fseek(undefined **param_1,int param_2,DWORD param_3)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  DWORD local_8;
  
  puVar2 = local_48;
  for (i = 0x11; i != 0; i = i + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    FUN_10002320(param_1,param_2,param_3);
  }
  else {
    i = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690((int)DAT_100313f8);
    if (i == iVar1) {
      local_8 = param_3;
      if (param_3 == 0) {
        if ((DAT_100313f0 < DAT_10031404 + param_2) || (DAT_10031404 + param_2 < DAT_10031404)) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
        }
      }
      else if (param_3 == 1) {
        FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
      }
      else if (param_3 == 2) {
        if (DAT_100313f0 < DAT_100313f0 + param_2) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_100313f0 + param_2,0);
        }
      }
      else {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10002320(param_1,param_2,param_3);
    }
  }
  local_8 = 0x1000162c;
  __chkesp();
  return;
}


/* ==== 100016a0 xvga_src_filelength ==== */

void __cdecl xvga_src_filelength(int param_1)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  uint filehandle;
  uint filehandle_2;
  
  puVar2 = local_4c;
  for (i = 0x12; i != 0; i = i + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == 0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    filehandle_2 = FUN_10015690(param_1);
    FUN_100155d0(filehandle_2);
  }
  else {
    i = FUN_10015690(param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (i == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      filehandle = FUN_10015690(param_1);
      FUN_100155d0(filehandle);
    }
  }
  filehandle_2 = 0x1000177c;
  __chkesp();
  return;
}


/* ==== 100017c0 xvga_src_fopen ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_src_fopen(byte *param_1)

{
  uint uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  int j;
  
  puVar2 = local_58;
  for (i = 0x15; i != 0; i = i + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    local_10 = FUN_100022c0((LPCSTR)param_1,"rb");
  }
  else {
    for (j = 0; j < _DAT_100313fc; j = j + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + j * 0x1c),param_1);
      if (uVar1 == 0) {
        DAT_10031404 = *(int *)(DAT_10031400 + 0x14 + j * 0x1c);
        DAT_100313f0 = DAT_10031404 + *(int *)(DAT_10031400 + 0x18 + j * 0x1c);
        break;
      }
    }
    local_c = DAT_100313fc;
    if (j == DAT_100313fc) {
      local_14 = FUN_100022c0((LPCSTR)param_1,"rb");
    }
    else {
      local_18 = FUN_10002320(DAT_100313f8,DAT_10031404,0);
    }
  }
  j = 0x100018e7;
  __chkesp();
  return;
}


/* ==== 10001940 xvga_src_fclose ==== */

void __cdecl xvga_src_fclose(undefined **param_1)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else if (DAT_10031408 == 0) {
    FUN_10001d70(param_1);
  }
  else {
    i = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (i == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10001d70(param_1);
    }
  }
  uStack_8 = 0x100019f8;
  __chkesp();
  return;
}


/* ==== 10001a30 xvga_file_exist ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl xvga_file_exist(byte *param_1)

{
  uint uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined **local_c;
  int j;
  
  puVar2 = local_4c;
  for (i = 0x12; i != 0; i = i + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    local_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (local_c != (undefined **)0x0) {
      FUN_10001d70(local_c);
    }
  }
  else {
    for (j = 0; j < _DAT_100313fc; j = j + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + j * 0x1c),param_1);
      if (uVar1 == 0) goto LAB_10001b01;
    }
    local_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (local_c != (undefined **)0x0) {
      FUN_10001d70(local_c);
    }
  }
LAB_10001b01:
  j = 0x10001b0e;
  __chkesp();
  return;
}


/* ==== 10001b50 xvga_exit_fileio ==== */

void xvga_exit_fileio(void)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar1 = local_44;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  if (DAT_10031408 != 0) {
    LocalFree(DAT_10031400);
    i = __chkesp();
    if (i == 0) {
      FUN_10001d70(DAT_100313f8);
      DAT_10031408 = 0;
    }
    else {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
  }
  uStack_8 = 0x10001bcf;
  __chkesp();
  return;
}


/* ==== 10001c00 xvga_rc_num_files ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 xvga_rc_num_files(void)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_44 [16];
  
  puVar1 = local_44;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  return _DAT_100313fc;
}


/* ==== 10001c30 xvga_rc_filename ==== */

void __cdecl xvga_rc_filename(int param_1,uint *param_2)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar1 = local_44;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  FUN_10001ec0(param_2,(uint *)(DAT_10031400 + param_1 * 0x1c));
  uStack_8 = 0x10001c70;
  __chkesp();
  return;
}


/* ==== 10001c90 xvga_rc_filepos ==== */

undefined4 __cdecl xvga_rc_filepos(int param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_44 [16];
  
  puVar1 = local_44;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x14 + param_1 * 0x1c);
}


/* ==== 10001cd0 xvga_rc_filelength ==== */

undefined4 __cdecl xvga_rc_filelength(int param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_44 [16];
  
  puVar1 = local_44;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x18 + param_1 * 0x1c);
}


/* ==== 10001d10 xvga_get_filehandle ==== */

void __cdecl xvga_get_filehandle(int param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar1 = local_44;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  FUN_10002850(*(uint *)(param_1 + 0x10));
  uStack_8 = 0x10001d44;
  __chkesp();
  return;
}


/* ==== 10001d70 FUN_10001d70 ==== */

undefined4 __cdecl FUN_10001d70(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c038,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_10002e60(param_1);
    local_8 = FUN_10001e00((int *)param_1);
    FUN_10002ed0(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}


/* ==== 10001e00 FUN_10001e00 ==== */

undefined4 __cdecl FUN_10001e00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c038,0x77,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1[3] & 0x83U) != 0) {
    local_8 = FUN_100058f0(param_1);
    FUN_100057b0(param_1);
    iVar2 = FUN_10005680(param_1[4]);
    if (iVar2 < 0) {
      local_8 = 0xffffffff;
    }
    else if (param_1[7] != 0) {
      FUN_100041a0((void *)param_1[7],2);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return local_8;
}


/* ==== 10001ec0 FUN_10001ec0 ==== */

uint * __cdecl FUN_10001ec0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10001fa8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10001fa8:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


/* ==== 10001ed0 FUN_10001ed0 ==== */

uint * __cdecl FUN_10001ed0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10001eec;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10001f1f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10001f3b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10001eec:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10001f3b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10001f3b;
    }
  }
LAB_10001f1f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10001f3b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10001fa8:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10001fa8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


/* ==== 10001fb0 FUN_10001fb0 ==== */

uint __cdecl FUN_10001fb0(char *param_1,uint param_2,uint param_3,undefined **param_4)

{
  uint uVar1;
  
  FUN_10002e60(param_4);
  uVar1 = FUN_10001ff0(param_1,param_2,param_3,(int *)param_4);
  FUN_10002ed0(param_4);
  return uVar1;
}


/* ==== 10001ff0 FUN_10001ff0 ==== */

uint __cdecl FUN_10001ff0(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  DWORD local_28;
  uint local_24;
  uint local_20;
  uint i;
  char *local_c;
  char local_8;
  
  local_c = param_1;
  uVar3 = param_2 * param_3;
  if (uVar3 == 0) {
    param_3 = 0;
  }
  else {
    i = uVar3;
    if ((param_4[3] & 0x10cU) == 0) {
      local_20 = 0x1000;
    }
    else {
      local_20 = param_4[6];
    }
    while (i != 0) {
      if (((param_4[3] & 0x10cU) == 0) || (param_4[1] == 0)) {
        if (i < local_20) {
          uVar2 = FUN_10005b00(param_4);
          if (uVar2 == 0xffffffff) {
            return (uVar3 - i) / param_2;
          }
          local_8 = (char)uVar2;
          *local_c = local_8;
          local_c = local_c + 1;
          i = i - 1;
          local_20 = param_4[6];
        }
        else {
          if (local_20 == 0) {
            local_28 = i;
          }
          else {
            local_28 = i - i % local_20;
          }
          iVar1 = FUN_10005cf0(param_4[4],local_c,local_28);
          if (iVar1 == 0) {
            param_4[3] = param_4[3] | 0x10;
            return (uVar3 - i) / param_2;
          }
          if (iVar1 == -1) {
            param_4[3] = param_4[3] | 0x20;
            return (uVar3 - i) / param_2;
          }
          i = i - iVar1;
          local_c = local_c + iVar1;
        }
      }
      else {
        if (i < (uint)param_4[1]) {
          local_24 = i;
        }
        else {
          local_24 = param_4[1];
        }
        FUN_100061d0((undefined4 *)local_c,(undefined4 *)*param_4,local_24);
        i = i - local_24;
        param_4[1] = param_4[1] - local_24;
        *param_4 = *param_4 + local_24;
        local_c = local_c + local_24;
      }
    }
  }
  return param_3;
}


/* ==== 100021c0 FUN_100021c0 ==== */

undefined4 * __cdecl FUN_100021c0(LPCSTR param_1,char *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  
  if ((param_1 == (LPCSTR)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c098,0x35,0,(byte *)"file != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((*param_1 == '\0') &&
     (iVar2 = FUN_10003050(2,0x1002c098,0x36,0,(byte *)"*file != _T(\'\\0\')"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((param_2 == (char *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c098,0x37,0,(byte *)"mode != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if ((*param_2 == '\0') &&
     (iVar2 = FUN_10003050(2,0x1002c098,0x38,0,(byte *)"*mode != _T(\'\\0\')"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  ppuVar4 = (undefined **)FUN_100068a0();
  if (ppuVar4 == (undefined **)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_10006510(param_1,param_2,param_3,ppuVar4);
    FUN_10002ed0(ppuVar4);
  }
  return puVar3;
}


/* ==== 100022c0 FUN_100022c0 ==== */

void __cdecl FUN_100022c0(LPCSTR param_1,char *param_2)

{
  FUN_100021c0(param_1,param_2,0x40);
  return;
}


