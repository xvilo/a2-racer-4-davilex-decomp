/* spel.dat — dxdraw/Inifile.cpp: 15 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c3b40 FUN_004c3b40 ==== */

void FUN_004c3b40(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x58) = 0;
  }
  return;
}


/* ==== 004c3b60 FUN_004c3b60 ==== */

void FUN_004c3b60(char *param_1)

{
  char cVar1;
  int i;
  uint j;
  uint k;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  i = -1;
  pcVar2 = param_1;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (i != -2) {
    j = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (~j - 1 < 0x10) goto LAB_004c3b98;
  }
  FUN_004c4150(s__set_ini_filename___s__d____file_005b3498,s_D__Work_dxdraw_Inifile_cpp_005b34d4,
               0x40);
LAB_004c3b98:
  FUN_0056914e(&DAT_007406f0,0x118);
  j = 0xffffffff;
  pcVar2 = (char *)&DAT_007406f0;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((&DAT_007406ee)[~j] != '\\') {
    j = 0xffffffff;
    pcVar2 = s___005b3494;
    do {
      pcVar4 = pcVar2;
      if (j == 0) break;
      j = j - 1;
      pcVar4 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar4;
    } while (cVar1 != '\0');
    j = ~j;
    i = -1;
    pcVar2 = (char *)&DAT_007406f0;
    do {
      pcVar3 = pcVar2;
      if (i == 0) break;
      i = i + -1;
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
    pcVar2 = pcVar4 + -j;
    pcVar4 = pcVar3 + -1;
    for (k = j >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = j & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  j = 0xffffffff;
  do {
    pcVar2 = param_1;
    if (j == 0) break;
    j = j - 1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  j = ~j;
  i = -1;
  pcVar4 = (char *)&DAT_007406f0;
  do {
    pcVar3 = pcVar4;
    if (i == 0) break;
    i = i + -1;
    pcVar3 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + -j;
  pcVar4 = pcVar3 + -1;
  for (k = j >> 2; k != 0; k = k - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (j = j & 3; j != 0; j = j - 1) {
    *pcVar4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  DAT_0074081c = 1;
  return;
}


/* ==== 004c3c30 FUN_004c3c30 ==== */

void FUN_004c3c30(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  if (DAT_0074081c == 0) {
    FUN_004c4150(s__write_ini_string_setting___s__d_005b34f0,s_D__Work_dxdraw_Inifile_cpp_005b34d4,
                 0x74);
  }
  WritePrivateProfileStringA(param_1,param_2,param_3,(LPCSTR)&DAT_007406f0);
  return;
}


/* ==== 004c3c70 FUN_004c3c70 ==== */

void FUN_004c3c70(LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

{
  CHAR local_24 [36];
  
  if (DAT_0074081c == 0) {
    FUN_004c4150(s__write_ini_value_setting___s__d__005b353c,s_D__Work_dxdraw_Inifile_cpp_005b34d4,
                 0x8c);
  }
  FUN_00567b81(param_3,local_24,10);
  WritePrivateProfileStringA(param_1,param_2,local_24,(LPCSTR)&DAT_007406f0);
  return;
}


/* ==== 004c3cd0 FUN_004c3cd0 ==== */

void FUN_004c3cd0(LPCSTR param_1,LPCSTR param_2)

{
  if (DAT_0074081c == 0) {
    FUN_004c4150(s__read_ini_value_setting___s__d____005b3588,s_D__Work_dxdraw_Inifile_cpp_005b34d4,
                 0xa4);
  }
  GetPrivateProfileIntA(param_1,param_2,0,(LPCSTR)&DAT_007406f0);
  return;
}


/* ==== 004c3d10 FUN_004c3d10 ==== */

void FUN_004c3d10(LPCSTR param_1,LPCSTR param_2,LPSTR param_3,DWORD param_4)

{
  if (DAT_0074081c == 0) {
    FUN_004c4150(s__read_ini_string_setting___s__d__005b35d4,s_D__Work_dxdraw_Inifile_cpp_005b34d4,
                 0xba);
  }
  GetPrivateProfileStringA(param_1,param_2,&DAT_00712694,param_3,param_4,(LPCSTR)&DAT_007406f0);
  return;
}


/* ==== 004c3d60 FUN_004c3d60 ==== */

int FUN_004c3d60(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint k;
  uint m;
  int i;
  byte *pbVar3;
  int j;
  byte *pbVar4;
  byte *pbVar5;
  ushort local_ce;
  undefined4 local_cc;
  byte local_c8 [200];
  
  i = 0;
  j = 0;
  local_cc = DAT_005b36c0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_cc;
  }
  bVar1 = *param_1;
  if (bVar1 != 0) {
    pbVar3 = (byte *)&DAT_0073b8d0;
    do {
      local_ce = (ushort)bVar1;
      iVar2 = FUN_00558f30(param_2,&local_ce);
      if (iVar2 == 0) {
        local_c8[j] = *param_1;
        j = j + 1;
        if (0xc6 < j) {
          FUN_004c4150(s__get_ini_arguments_online___s__d_005b3620,
                       s_D__Work_dxdraw_Inifile_cpp_005b34d4,0xf5,0xc6);
        }
      }
      else {
        k = 0xffffffff;
        local_c8[j] = 0;
        pbVar4 = local_c8;
        do {
          pbVar5 = pbVar4;
          if (k == 0) break;
          k = k - 1;
          pbVar5 = pbVar4 + 1;
          bVar1 = *pbVar4;
          pbVar4 = pbVar5;
        } while (bVar1 != 0);
        k = ~k;
        pbVar4 = pbVar5 + -k;
        pbVar5 = pbVar3;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pbVar5 = *(undefined4 *)pbVar4;
          pbVar4 = pbVar4 + 4;
          pbVar5 = pbVar5 + 4;
        }
        for (k = k & 3; k != 0; k = k - 1) {
          *pbVar5 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        }
        i = i + 1;
        if (0x7406f0 < (int)(pbVar3 + 200)) {
          FUN_004c4150(s__get_ini_arguments_online___s__d_005b3674,
                       s_D__Work_dxdraw_Inifile_cpp_005b34d4,0xe7,100);
        }
        j = 0;
        pbVar3 = pbVar3 + 200;
      }
      param_1 = param_1 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
  }
  local_c8[j] = 0;
  k = 0xffffffff;
  pbVar3 = local_c8;
  do {
    pbVar4 = pbVar3;
    if (k == 0) break;
    k = k - 1;
    pbVar4 = pbVar3 + 1;
    bVar1 = *pbVar3;
    pbVar3 = pbVar4;
  } while (bVar1 != 0);
  k = ~k;
  pbVar3 = pbVar4 + -k;
  pbVar4 = (byte *)(&DAT_0073b8d0 + i * 0x32);
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)pbVar4 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *pbVar4 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  DAT_00740820 = i + 1;
  return i + 1;
}


/* ==== 004c3ec0 FUN_004c3ec0 ==== */

void FUN_004c3ec0(int param_1)

{
  if ((param_1 < 0) || (DAT_00740820 < param_1)) {
    FUN_004c4150(s__get_ini_argument_value___s__d____005b36c8,s_D__Work_dxdraw_Inifile_cpp_005b34d4,
                 0x10f,param_1,DAT_00740820);
  }
  FUN_0055933d(&DAT_0073b8d0 + param_1 * 0x32);
  return;
}


/* ==== 004c3f10 FUN_004c3f10 ==== */

void FUN_004c3f10(int param_1,char *dest,size_t count)

{
  if ((param_1 < 0) || (DAT_00740820 < param_1)) {
    FUN_004c4150(s__get_ini_argument_value___s__d____005b36c8,s_D__Work_dxdraw_Inifile_cpp_005b34d4,
                 0x123,param_1,DAT_00740820);
  }
  _strncpy(dest,(char *)(&DAT_0073b8d0 + param_1 * 0x32),count);
  return;
}


/* ==== 004c3f60 FUN_004c3f60 ==== */

void FUN_004c3f60(undefined1 param_1)

{
  DAT_007408e4 = param_1;
  return;
}


/* ==== 004c3f70 FUN_004c3f70 ==== */

undefined1 FUN_004c3f70(void)

{
  return DAT_007408e4;
}


/* ==== 004c3f80 FUN_004c3f80 ==== */

void FUN_004c3f80(undefined4 param_1,undefined4 param_2)

{
  DAT_007408e8 = param_2;
  DAT_007408ec = param_1;
  return;
}


/* ==== 004c3fa0 FUN_004c3fa0 ==== */

void FUN_004c3fa0(undefined4 param_1)

{
  FILE *file;
  CHAR local_400 [1023];
  undefined1 local_1;
  
  if (DAT_007408e8 == 1) {
    if (DAT_007408ec == 0) {
      file = (FILE *)FUN_005589a5(s_debug_txt_005ae5f8,s_at__005af1a0);
      if (file != (FILE *)0x0) {
        local_1 = 0;
        FUN_00559854(local_400,0x3ff,param_1,&stack0x00000008);
        FUN_00558953(file,local_400);
        FUN_005588fd(file);
      }
    }
    else if (DAT_007408ec == 1) {
      OutputDebugStringA(local_400);
      return;
    }
  }
  return;
}


/* ==== 004c4030 FUN_004c4030 ==== */

void FUN_004c4030(undefined4 param_1)

{
  DAT_007408f0 = param_1;
  return;
}


/* ==== 004c4040 FUN_004c4040 ==== */

void FUN_004c4040(void)

{
  int iVar1;
  
  FUN_004ce5d0();
  FUN_004cc550();
  if (DAT_007408cc != 0) {
    FUN_004ce550();
    if (DAT_007408d0 != 0) {
      FUN_004c3fa0(s_Releasing_screen_005b39a0);
      (**(code **)(*DAT_007408ac + 8))(DAT_007408ac);
      DAT_007408ac = (int *)0x0;
      DAT_007408d0 = 0;
    }
    if ((DAT_007408d4 != 0) && (DAT_005b37a8 == 0)) {
      FUN_004c3fa0(s_Releasing_buffer_screen_005b3984);
      (**(code **)(*DAT_007408b0 + 8))(DAT_007408b0);
      DAT_007408b0 = (int *)0x0;
      DAT_007408d4 = 0;
    }
    if (DAT_007408d8 != 0) {
      FUN_004c3fa0(s_Releasing_buffer_screen_005b3984);
      (**(code **)(*DAT_00740890 + 8))(DAT_00740890);
      DAT_00740890 = (int *)0x0;
      DAT_007408d8 = 0;
    }
    FUN_004c3fa0(s_Releasing_dd_object_005b396c);
    (**(code **)(*DAT_0074088c + 8))(DAT_0074088c);
    DAT_0074088c = (int *)0x0;
    DAT_007408cc = 0;
  }
  FUN_004ce490();
  FUN_004c3fa0(s_post_quit_005b3960);
  PostMessageA(DAT_007408a4,0x10,0,0);
  iVar1 = FUN_004cd660();
  while (iVar1 != 0) {
    iVar1 = FUN_004cd660();
  }
  return;
}


