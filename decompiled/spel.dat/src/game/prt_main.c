/* spel.dat — game/prt_main.cpp: 37 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00462180 FUN_00462180 ==== */

void FUN_00462180(void)

{
  float *pfVar1;
  undefined4 *puVar2;
  int in_ECX;
  int j;
  int i;
  undefined4 *puVar3;
  undefined4 auStack_128 [9];
  undefined4 uStack_104;
  char *pcStack_100;
  char *pcStack_fc;
  undefined4 uStack_f8;
  undefined4 *puStack_f4;
  int *local_f0;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined1 local_d8 [64];
  undefined4 local_98 [16];
  undefined4 local_58 [12];
  float local_28;
  undefined4 local_24;
  float local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056ab72;
  local_10 = ExceptionList;
  i = *(int *)(in_ECX + 0xac);
  local_14 = &stack0xffffff1c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  while (i != 0) {
    puVar2 = (undefined4 *)(local_18 + 0x10);
    puVar3 = local_58;
    for (j = 0x10; j != 0; j = j + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_e8 = (undefined4 *)0x4621d0;
    pfVar1 = (float *)FUN_0045e090();
    local_28 = local_28 + *pfVar1;
    local_e8 = (undefined4 *)0x4621df;
    j = FUN_0045e090();
    local_24 = *(undefined4 *)(j + 4);
    local_e8 = (undefined4 *)0x4621ec;
    j = FUN_0045e090();
    local_20 = local_20 + *(float *)(j + 8);
    local_f0 = *(int **)(i + 0x70);
    local_ec = *(undefined4 *)(i + 0x74);
    local_e8 = *(undefined4 **)(i + 0x78);
    puStack_f4 = local_58;
    uStack_f8 = 0x462216;
    FUN_004b4360();
    local_e8 = (undefined4 *)0x462220;
    local_e8 = (undefined4 *)FUN_0045e0a0();
    puVar2 = local_58;
    puVar3 = auStack_128;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined4 *)FUN_00460730(local_d8);
    puVar3 = local_98;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_e8 = &DAT_0073b474;
    puVar2 = local_98;
    puVar3 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_ec = 1;
    local_f0 = DAT_0073b4b4;
    puStack_f4 = (undefined4 *)0x462272;
    puStack_f4 = (undefined4 *)(**(code **)(*DAT_0073b4b4 + 0x68))();
    if (puStack_f4 != (undefined4 *)0x0) {
      uStack_f8 = 0x46227c;
      puStack_f4 = (undefined4 *)FUN_004bb290();
      uStack_f8 = 0x14;
      pcStack_fc = s_______Libs_Win3DLib_Include_d3de_00591314;
      pcStack_100 = s__s__d_____FOG__error_setting_tra_005912e0;
      uStack_104 = 0x462291;
      FUN_004c4150();
    }
    puStack_f4 = (undefined4 *)0x46229b;
    FUN_00462490();
    local_e8 = (undefined4 *)0x4622a2;
    i = FUN_0045e0d0();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004622d0 FUN_004622d0 ==== */

void FUN_004622d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_0045ded0(param_1,param_2,param_3,param_4);
  *in_ECX = &PTR_LAB_00576954;
  return;
}


/* ==== 00462300 FUN_00462300 ==== */

undefined2 FUN_00462300(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST0_00;
  
  fVar1 = param_1 + *(float *)(in_ECX + 4);
  *(float *)(in_ECX + 4) = fVar1;
  if (*(float *)(in_ECX + 8) < fVar1) {
    return 0;
  }
  if (*(float *)(in_ECX + 0x10) <= param_2 + 0.11) {
    if (ABS(*(float *)(in_ECX + 0x38)) < 3.0) {
      *(undefined4 *)(in_ECX + 0x24) = 0;
      *(undefined4 *)(in_ECX + 0x2c) = 0;
      *(undefined4 *)(in_ECX + 0x34) = 0;
      *(undefined4 *)(in_ECX + 0x38) = 0;
      *(float *)(in_ECX + 0x10) = param_2 + 0.1;
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      return 1;
    }
    *(float *)(in_ECX + 0x10) = param_2 + 0.12;
    FUN_004602e0(0x3fc00000,0x4039999a);
    *(float *)(in_ECX + 0x38) = (float)-(extraout_ST0 * (float10)*(float *)(in_ECX + 0x38));
    return 1;
  }
  fVar1 = (*(float *)(in_ECX + 0x18) / *(float *)(in_ECX + 0x30)) * param_1 +
          *(float *)(in_ECX + 0x34);
  *(float *)(in_ECX + 0x34) = fVar1;
  fVar2 = ((*(float *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x30) * 160.0) /
          *(float *)(in_ECX + 0x30)) * param_1 + *(float *)(in_ECX + 0x38);
  *(float *)(in_ECX + 0x38) = fVar2;
  fVar3 = (*(float *)(in_ECX + 0x20) / *(float *)(in_ECX + 0x30)) * param_1 +
          *(float *)(in_ECX + 0x3c);
  *(float *)(in_ECX + 0x3c) = fVar3;
  *(float *)(in_ECX + 0xc) = fVar1 * param_1 + *(float *)(in_ECX + 0xc);
  *(float *)(in_ECX + 0x10) = fVar2 * param_1 + *(float *)(in_ECX + 0x10);
  *(float *)(in_ECX + 0x14) = fVar3 * param_1 + *(float *)(in_ECX + 0x14);
  fVar4 = (float10)FUN_004602e0(0xbd4ccccd,0x3e800000);
  *(float *)(in_ECX + 0x24) = (float)(fVar4 + (float10)*(float *)(in_ECX + 0x24));
  fVar4 = (float10)FUN_004602e0(0xbd4ccccd,0x3e800000);
  *(float *)(in_ECX + 0x28) = (float)(fVar4 + (float10)*(float *)(in_ECX + 0x28));
  FUN_004602e0(0xbd4ccccd,0x3e800000);
  *(float *)(in_ECX + 0x2c) = (float)(extraout_ST0_00 + (float10)*(float *)(in_ECX + 0x2c));
  return 1;
}


/* ==== 00462470 FUN_00462470 ==== */

void FUN_00462470(undefined4 param_1,undefined4 param_2)

{
  FUN_00462300(param_1,param_2);
  return;
}


/* ==== 00462490 FUN_00462490 ==== */

void FUN_00462490(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x00462492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 4))();
  return;
}


/* ==== 00462520 FUN_00462520 ==== */

void FUN_00462520(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00462530 FUN_00462530 ==== */

void FUN_00462530(void)

{
  FUN_005584e0(&LAB_00462540);
  return;
}


/* ==== 00462560 FUN_00462560 ==== */

void FUN_00462560(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00462570 FUN_00462570 ==== */

void FUN_00462570(void)

{
  FUN_005584e0(&LAB_00462580);
  return;
}


/* ==== 004625b0 init_particle_emitters ==== */

void init_particle_emitters(void)

{
  if (DAT_006fb918 != 0) {
    FUN_00462720();
    FUN_00462860(&DAT_007099d8);
    FUN_00462f70(&DAT_007099d8);
  }
  return;
}


/* ==== 00462660 FUN_00462660 ==== */

void FUN_00462660(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00462670 FUN_00462670 ==== */

void FUN_00462670(void)

{
  FUN_005584e0(&LAB_00462680);
  return;
}


/* ==== 004626a0 FUN_004626a0 ==== */

void FUN_004626a0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004626b0 FUN_004626b0 ==== */

void FUN_004626b0(void)

{
  FUN_005584e0(&LAB_004626c0);
  return;
}


/* ==== 00462720 FUN_00462720 ==== */

undefined4 FUN_00462720(void)

{
  return 1;
}


/* ==== 00462730 FUN_00462730 ==== */

undefined4 FUN_00462730(char *param_1)

{
  char cVar1;
  uint i;
  uint j;
  int k;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  i = 0xffffffff;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  pcVar4 = s_Emitter_005a5fec;
  do {
    pcVar2 = pcVar4;
    if (i == 0) break;
    i = i - 1;
    pcVar2 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar2;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar2 = pcVar2 + -i;
  pcVar4 = param_1;
  for (j = i >> 2; pcVar4 = pcVar4 + 4, j != 0; j = j - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  puVar3 = &DAT_0073b538;
  pcVar4 = param_1 + 0xd4;
  for (k = 0x10; k != 0; k = k + -1) {
    *(undefined4 *)pcVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar4 = pcVar4 + 4;
  }
  param_1[0x84] = '\x0f';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x90] = '\x0f';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = -0x80;
  param_1[0x97] = '?';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = -0x80;
  param_1[0x9b] = '?';
  param_1[0x9c] = '\0';
  param_1[0x9d] = '\0';
  param_1[0x9e] = -0x80;
  param_1[0x9f] = '?';
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  param_1[0xa8] = '\0';
  param_1[0xa9] = '\0';
  param_1[0xaa] = '\0';
  param_1[0xab] = '\0';
  param_1[0xac] = '\0';
  param_1[0xad] = '\0';
  param_1[0xae] = -0x80;
  param_1[0xaf] = '?';
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xb2] = -0x80;
  param_1[0xb3] = '?';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = -0x80;
  param_1[0xb7] = '?';
  param_1[0xb8] = '\0';
  param_1[0xb9] = '\0';
  param_1[0xba] = '\0';
  param_1[0xbb] = '\0';
  param_1[0xbc] = '\0';
  param_1[0xbd] = '\0';
  param_1[0xbe] = '\0';
  param_1[0xbf] = '\0';
  param_1[0xc0] = '\0';
  param_1[0xc1] = '\0';
  param_1[0xc2] = '\0';
  param_1[0xc3] = '\0';
  param_1[0xc4] = '\0';
  param_1[0xc5] = '\0';
  param_1[0xc6] = '\0';
  param_1[199] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xcd] = '\0';
  param_1[0xce] = '\0';
  param_1[0xcf] = '\0';
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[100] = -0x25;
  param_1[0x65] = '\x0f';
  param_1[0x66] = -0x37;
  param_1[0x67] = '@';
  param_1[0x68] = -0x25;
  param_1[0x69] = '\x0f';
  param_1[0x6a] = -0x37;
  param_1[0x6b] = '?';
  param_1[0x6c] = -0x3e;
  param_1[0x6d] = -0x48;
  param_1[0x6e] = '2';
  param_1[0x6f] = '?';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '?';
  param_1[0x74] = -0x33;
  param_1[0x75] = -0x34;
  param_1[0x76] = 'L';
  param_1[0x77] = '=';
  param_1[0x7c] = -0xc;
  param_1[0x7d] = '\x01';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x88] = '\x05';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = 'P';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[200] = 'B';
  param_1[0xc9] = '`';
  param_1[0xca] = -0x1b;
  param_1[0xcb] = -0x45;
  *(undefined1 **)(param_1 + 0x114) = &LAB_00462cf0;
  return 1;
}


/* ==== 00462860 FUN_00462860 ==== */

undefined4 FUN_00462860(int param_1)

{
  FUN_00462730(param_1);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 1;
}


/* ==== 00462b90 FUN_00462b90 ==== */

void FUN_00462b90(int param_1,undefined4 *param_2)

{
  int i;
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xd4);
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}


/* ==== 00462bb0 FUN_00462bb0 ==== */

int FUN_00462bb0(int param_1,undefined4 *param_2,int param_3)

{
  int __ftol_result_2;
  uint __ftol_result;
  uint __ftol_result_3;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 == 0) {
    FUN_004c4150(s__s___d__No_emitter__005a6018,s_C__Work_A2IV_Game_prog_prt_main__005a5ff4,0x17e);
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    return 0;
  }
  do {
    if (param_3 <= iVar1) {
      FUN_004c4150(s__s___d__Incorrect_index_current_v_005a6050,
                   s_C__Work_A2IV_Game_prog_prt_main__005a602c,0x18d,iVar1);
    }
    *param_2 = *(undefined4 *)(iVar2 + 8);
    param_2[1] = *(undefined4 *)(iVar2 + 0xc);
    param_2[2] = *(undefined4 *)(iVar2 + 0x10);
    __ftol_result_2 = __ftol();
    __ftol_result = __ftol();
    __ftol_result_3 = __ftol();
    param_2[4] = (__ftol_result_2 << 8 | __ftol_result) << 8 | __ftol_result_3;
    param_2[5] = 0;
    if (param_3 <= iVar1 + 1) {
      FUN_004c4150(s__s___d__Incorrect_index_current_v_005a60ac,
                   s_C__Work_A2IV_Game_prog_prt_main__005a6088,0x19b,iVar1 + 1);
    }
    param_2[8] = *(undefined4 *)(iVar2 + 0x14);
    param_2[9] = *(undefined4 *)(iVar2 + 0x18);
    param_2[10] = *(undefined4 *)(iVar2 + 0x1c);
    __ftol_result_2 = __ftol();
    __ftol_result = __ftol();
    __ftol_result_3 = __ftol();
    iVar1 = iVar1 + 2;
    param_2[0xc] = (__ftol_result_2 << 8 | __ftol_result) << 8 | __ftol_result_3;
    param_2[0xd] = 0;
    iVar2 = *(int *)(iVar2 + 4);
    param_2 = param_2 + 0x10;
  } while (iVar2 != 0);
  return iVar1;
}


/* ==== 00462f00 FUN_00462f00 ==== */

void FUN_00462f00(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00462f10 FUN_00462f10 ==== */

void FUN_00462f10(void)

{
  FUN_005584e0(&LAB_00462f20);
  return;
}


/* ==== 00462f40 FUN_00462f40 ==== */

void FUN_00462f40(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00462f50 FUN_00462f50 ==== */

void FUN_00462f50(void)

{
  FUN_005584e0(&LAB_00462f60);
  return;
}


/* ==== 00462f70 FUN_00462f70 ==== */

void FUN_00462f70(int param_1)

{
  *(undefined1 **)(param_1 + 0x118) = &LAB_00463050;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0x40c90fdb;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x40000000;
  *(undefined4 *)(param_1 + 0x74) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x7c) = 200;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 10;
  *(undefined4 *)(param_1 + 0x88) = 5;
  *(undefined4 *)(param_1 + 0x8c) = 0x32;
  *(undefined4 *)(param_1 + 0x90) = 0xf;
  *(undefined4 *)(param_1 + 0x94) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x98) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xa4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xa8) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xac) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xbc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xc0) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0xbdcccccd;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = DAT_006fb91c;
  return;
}


/* ==== 00463110 FUN_00463110 ==== */

void FUN_00463110(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00463120 FUN_00463120 ==== */

void FUN_00463120(void)

{
  FUN_005584e0(&LAB_00463130);
  return;
}


/* ==== 00463150 FUN_00463150 ==== */

void FUN_00463150(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00463160 FUN_00463160 ==== */

void FUN_00463160(void)

{
  FUN_005584e0(&LAB_00463170);
  return;
}


/* ==== 00463180 FUN_00463180 ==== */

void FUN_00463180(undefined4 *param_1,int param_2)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_24 [5];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = DAT_006c3530;
  local_24[0] = 1;
  local_24[3] = 0x3f000000;
  local_24[4] = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  local_8 = 0;
  local_4 = 0;
  local_c = param_2;
  *(int *)(&DAT_00709f18 + param_2 * 0x340) = *(int *)(&DAT_00709f18 + param_2 * 0x340) + 1000;
  FUN_00464b50(local_24);
  puVar1 = local_24;
  for (i = 9; i != 0; i = i + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 00463210 FUN_00463210 ==== */

void FUN_00463210(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = DAT_006c3530 * 0x178;
  FUN_004b1260();
  FUN_004b1310();
  *(undefined4 *)(iVar2 + 0x80 + DAT_00719b50) = 0;
  FUN_00438410(6);
  puVar1 = (undefined4 *)
           FUN_00464540(local_c,param_1,*(undefined4 *)(param_2 + 4),0,
                        *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x20));
  FUN_004b1060(*puVar1,puVar1[1],puVar1[2]);
  puVar1 = (undefined4 *)FUN_004b12c0(local_c);
  FUN_004b1290(*(undefined4 *)(param_2 + 0x10),*puVar1,puVar1[1],puVar1[2]);
  return;
}


/* ==== 004632e0 FUN_004632e0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004632e0(undefined4 param_1)

{
  undefined4 *puVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_48 [9];
  undefined4 local_24 [9];
  
  if (DAT_006fb8a0 != 1) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_00463180(local_48,param_1);
  puVar2 = local_48;
  for (i = 9; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = local_48;
  puVar2 = local_24;
  for (i = 9; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00463210(param_1,local_24);
  _DAT_00709b00 = GetTickCount();
  DAT_00709b08 = 0;
  return 1;
}


/* ==== 00463370 FUN_00463370 ==== */

uint FUN_00463370(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_c [12];
  
  puVar4 = (undefined4 *)
           FUN_00464540(local_c,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 4),
                        *(int *)(param_1 + 8) % *(int *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc)
                        ,*(undefined4 *)(param_1 + 0x20));
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  uVar3 = puVar4[2];
  iVar5 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar5;
  if (*(int *)(param_1 + 4) + -2 <= iVar5) {
    return CONCAT31((int3)((uint)iVar5 >> 8),1);
  }
  uVar6 = FUN_004b1060(uVar1,uVar2,uVar3);
  return uVar6 & 0xffffff00;
}


/* ==== 004633f0 FUN_004633f0 ==== */

uint FUN_004633f0(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  int i;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [4];
  float local_48;
  float local_44;
  undefined4 local_40 [16];
  
  iVar1 = DAT_006c3530;
  iVar2 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  pfVar5 = (float *)FUN_004b11c0(local_4c);
  local_70 = *pfVar5;
  local_6c = pfVar5[1];
  local_68 = pfVar5[2];
  iVar2 = iVar2 * 0xa9;
  puVar7 = (undefined4 *)(iVar2 + 0x10 + DAT_0073b0d0);
  puVar8 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  pfVar5 = (float *)FUN_004b42a0(local_4c,&local_70,local_40);
  local_70 = *pfVar5;
  local_6c = pfVar5[1];
  local_68 = pfVar5[2];
  iVar1 = DAT_00719b50 + iVar1 * 0x178;
  local_64 = *(float *)(iVar1 + 8);
  local_60 = *(float *)(iVar1 + 0xc);
  local_5c = *(float *)(iVar1 + 0x10);
  fVar3 = (local_70 + *(float *)(iVar2 + 0x50 + DAT_0073b0d0)) - local_64;
  local_48 = (local_6c + *(float *)(iVar2 + 0x54 + DAT_0073b0d0)) - local_60;
  local_44 = (local_68 + *(float *)(iVar2 + 0x58 + DAT_0073b0d0)) - local_5c;
  fVar4 = SQRT(fVar3 * fVar3 + local_48 * local_48 + local_44 * local_44);
  if (fVar4 < 1.0 != 0 || (fVar4 == 1.0) != 0) {
    return CONCAT31((int3)(CONCAT22((short)((uint)DAT_0073b0d0 >> 0x10),
                                    (ushort)(fVar4 < 1.0) << 8 | (ushort)NAN(fVar4) << 10 |
                                    (ushort)(fVar4 == 1.0) << 0xe) >> 8),1);
  }
  local_48 = local_48 * param_1;
  local_44 = local_44 * param_1;
  local_58 = fVar3 * param_1 + local_64;
  local_54 = local_48 + local_60;
  local_50 = local_44 + local_5c;
  uVar6 = FUN_004b1060(local_58,local_54,local_50);
  return uVar6 & 0xffffff00;
}


/* ==== 00463650 FUN_00463650 ==== */

void FUN_00463650(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00463660 FUN_00463660 ==== */

void FUN_00463660(void)

{
  FUN_005584e0(&LAB_00463670);
  return;
}


/* ==== 00463690 FUN_00463690 ==== */

void FUN_00463690(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004636a0 FUN_004636a0 ==== */

void FUN_004636a0(void)

{
  FUN_005584e0(&LAB_004636b0);
  return;
}


