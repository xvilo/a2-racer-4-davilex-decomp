/* spel.dat — game/car_trailer.cpp: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004304e0 FUN_004304e0 ==== */

void FUN_004304e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint __ftol_result;
  int *in_ECX;
  int iVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  *(int *)(*in_ECX * 0xf0 + 0x48 + DAT_00715e50) = param_1;
  param_1 = param_1 * 0xf0;
  *(int *)(param_1 + 0x44 + DAT_00715e50) = *in_ECX;
  *(undefined4 *)(*in_ECX * 0xf0 + 0x34 + DAT_00715e50) =
       *(undefined4 *)(param_1 + 0x34 + DAT_00715e50);
  iVar3 = *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  iVar4 = DAT_0073b0d0 + *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
  *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  puVar1 = (undefined4 *)(param_1 + 0xbc + DAT_00715e50);
  puVar2 = (undefined4 *)(*in_ECX * 0xf0 + 0xbc + DAT_00715e50);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  *(undefined4 *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50) =
       *(undefined4 *)(param_1 + 0xcc + DAT_00715e50);
  iVar3 = DAT_0073b0d0 + *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  __ftol_result = __ftol();
  *(float *)(iVar3 + 0x50) =
       (float)((float10)*(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4) * extraout_ST0
              + (float10)*(float *)(iVar3 + 0x50));
  iVar3 = DAT_0073b0d0 + *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  __ftol_result = __ftol();
  *(float *)(iVar3 + 0x58) =
       (float)((float10)*(float *)(iVar3 + 0x58) -
              (float10)*(float *)(DAT_0073b578 + (__ftol_result & DAT_005b23bc) * 4) *
              extraout_ST0_00);
  FUN_004b5770();
  *(undefined1 *)(in_ECX + 10) = 1;
  iVar3 = FUN_004a8600(4);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
  iVar3 = FUN_004a8600(5);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
  iVar3 = FUN_004a8600(6);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
  iVar3 = FUN_004a8600(7);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
  return;
}


/* ==== 004307f0 FUN_004307f0 ==== */

void FUN_004307f0(void)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar3 = FUN_004a80f0();
  if ((0x7f < uVar3 >> 0x18) && ((*(byte *)(*in_ECX * 0xf0 + 0x1c + DAT_00715e50) & 8) != 0)) {
    cVar2 = FUN_004b03e0(*in_ECX);
    if (cVar2 == '\x01') {
      puVar1 = (uint *)(*in_ECX * 0xf0 + 0x1c + DAT_00715e50);
      *puVar1 = *puVar1 ^ 8;
    }
  }
  return;
}


/* ==== 00430860 FUN_00430860 ==== */

void FUN_00430860(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_c [12];
  
  if (*(char *)(in_ECX + 0x28) != '\0') {
    uVar2 = *(undefined4 *)(in_ECX + 0x1c);
    uVar3 = *(undefined4 *)(in_ECX + 0x20);
    uVar4 = *(undefined4 *)(in_ECX + 0x24);
    puVar1 = (undefined4 *)FUN_004308d0(local_c);
    FUN_004a97f0(*puVar1,puVar1[1],puVar1[2],uVar2,uVar3,uVar4);
  }
  return;
}


/* ==== 004308d0 FUN_004308d0 ==== */

void FUN_004308d0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [64];
  
  pfVar4 = (float *)FUN_004b42a0(&local_98,in_ECX + 7,
                                 DAT_0073b0d0 +
                                 *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  iVar5 = *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50);
  local_64 = *pfVar4 + *(float *)(iVar5 + DAT_0073b0d0 + 0x50 + iVar5 * 0xa8);
  iVar5 = iVar5 + DAT_0073b0d0 + 0x50 + iVar5 * 0xa8;
  local_60 = pfVar4[1] + *(float *)(iVar5 + 4);
  local_5c = pfVar4[2] + *(float *)(iVar5 + 8);
  pfVar4 = (float *)FUN_004b42a0(&local_98,in_ECX + 4,
                                 DAT_0073b0d0 +
                                 *(int *)(in_ECX[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  local_7c = *pfVar4;
  iVar5 = *(int *)(in_ECX[1] * 0xf0 + 0x24 + DAT_00715e50);
  iVar7 = iVar5 + DAT_0073b0d0;
  local_70 = local_64 - (local_7c + *(float *)(iVar7 + 0x50 + iVar5 * 0xa8));
  local_6c = local_60 - (pfVar4[1] + *(float *)(iVar7 + 0x54 + iVar5 * 0xa8));
  local_78 = 0;
  local_68 = local_5c - (pfVar4[2] + *(float *)(iVar7 + iVar5 * 0xa8 + 0x58));
  local_5c = (float)in_ECX[7] * 0.1;
  local_8c = *(float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50);
  iVar5 = *in_ECX * 0xf0 + DAT_00715e50;
  local_74 = local_8c * local_5c;
  local_98 = local_8c * (float)in_ECX[9] * -0.1 + *(float *)(iVar5 + 0xbc);
  local_94 = *(float *)(iVar5 + 0xc0) + 0.0;
  local_90 = local_74 + *(float *)(iVar5 + 0xc4);
  local_4c = local_98;
  local_48 = local_94;
  local_44 = local_90;
  pfVar4 = (float *)FUN_004b42a0(&local_98,&local_4c,
                                 DAT_0073b0d0 + *(int *)(iVar5 + 0x24) * 0xa9 + 0x10);
  local_4c = *pfVar4;
  local_48 = pfVar4[1];
  local_78 = 0;
  local_44 = pfVar4[2];
  local_5c = (float)in_ECX[4] * 0.1;
  iVar5 = in_ECX[1] * 0xf0 + DAT_00715e50;
  local_8c = *(float *)(iVar5 + 0xcc);
  local_74 = local_8c * local_5c;
  local_98 = local_8c * (float)in_ECX[6] * -0.1 + *(float *)(iVar5 + 0xbc);
  local_94 = *(float *)(iVar5 + 0xc0) + 0.0;
  local_90 = local_74 + *(float *)(iVar5 + 0xc4);
  local_58 = local_98;
  local_54 = local_94;
  local_50 = local_90;
  pfVar4 = (float *)FUN_004b42a0(&local_98,&local_58,
                                 DAT_0073b0d0 + *(int *)(iVar5 + 0x24) * 0xa9 + 0x10);
  local_58 = *pfVar4;
  local_54 = pfVar4[1];
  local_98 = local_4c - local_58;
  local_50 = pfVar4[2];
  local_94 = local_48 - local_54;
  local_90 = local_44 - local_50;
  local_88 = local_98;
  local_84 = local_94;
  local_80 = local_90;
  uVar6 = FUN_004b4310(local_40,DAT_0073b0d0 + *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50) * 0xa9
                                + 0x10);
  pfVar4 = (float *)FUN_004b42a0(&local_98,&local_88,uVar6);
  local_88 = *pfVar4;
  local_84 = pfVar4[1];
  local_80 = pfVar4[2];
  uVar6 = FUN_004b4310(local_40,DAT_0073b0d0 + *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50) * 0xa9
                                + 0x10);
  pfVar4 = (float *)FUN_004b42a0(&local_98,&local_70,uVar6);
  fVar1 = (float)in_ECX[3];
  fVar2 = pfVar4[1];
  fVar3 = (float)in_ECX[2];
  local_88 = -local_88 * fVar3 - *pfVar4 * fVar1;
  local_80 = -local_80 * fVar3 - fVar1 * pfVar4[2];
  if (local_88 <= 40000.0) {
    if (local_88 < -40000.0) {
      local_88 = -40000.0;
    }
  }
  else {
    local_88 = 40000.0;
  }
  if (local_80 <= 80000.0) {
    if (local_80 < -80000.0) {
      local_80 = -80000.0;
    }
  }
  else {
    local_80 = 80000.0;
  }
  *param_1 = local_88;
  param_1[1] = -local_84 * fVar3 - fVar2 * fVar1;
  param_1[2] = local_80;
  return;
}


/* ==== 00430e10 FUN_00430e10 ==== */

void FUN_00430e10(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int i;
  
  i = 0;
  if (0 < *(int *)(DAT_00715e50 + *in_ECX * 0xf0 + 0xac)) {
    do {
      if (DAT_006fb940 != 0) {
        iVar2 = FUN_004a8600(i);
        iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + 0xa5 + iVar2 * 0xa8);
        if ((iVar1 != 2) && (iVar1 != 1)) {
          *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0xa5 + iVar2 * 0xa8) = 3;
        }
      }
      i = i + 1;
    } while (i < *(int *)(*in_ECX * 0xf0 + 0xac + DAT_00715e50));
  }
  return;
}


/* ==== 00430ea0 FUN_00430ea0 ==== */

void FUN_00430ea0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_004a80f0();
  uVar4 = uVar1 >> 8 & 0xff;
  uVar2 = uVar1 >> 0x18;
  uVar5 = uVar1 & 0xff;
  uVar1 = uVar1 >> 0x10 & 0xff;
  if ((*(byte *)(*in_ECX * 0xf0 + DAT_00715e50 + 0x1c) & 8) == 0) {
    if ((char)in_ECX[10] == '\x01') {
      FUN_004a6800();
      uVar2 = __ftol();
      if (0xfe < (int)uVar2) {
        uVar2 = 0xff;
        FUN_0042a7f0(*in_ECX);
      }
      uVar5 = ((uVar2 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
      goto LAB_0043110d;
    }
  }
  else if ((char)in_ECX[10] == '\x01') {
    if (uVar2 < 0x81) {
      if (uVar2 < 0x80) {
        FUN_004a6800();
        uVar2 = __ftol();
        if (0x80 < (int)uVar2) goto LAB_00430f6c;
      }
    }
    else {
      FUN_004a6800();
      uVar2 = __ftol();
      if ((int)uVar2 < 0x80) {
LAB_00430f6c:
        uVar2 = 0x80;
      }
    }
    uVar5 = ((uVar2 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
    goto LAB_0043110d;
  }
  iVar3 = FUN_004a8600(4);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  iVar3 = FUN_004a8600(5);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  iVar3 = FUN_004a8600(6);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  iVar3 = FUN_004a8600(7);
  *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  if ((float)in_ECX[0xb] <= 0.0) {
    return;
  }
  *(undefined4 *)(*in_ECX * 0xf0 + 0x40 + DAT_00715e50) = 0xffffffff;
  FUN_004a6800();
  uVar2 = __ftol();
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  uVar5 = ((uVar2 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
LAB_0043110d:
  FUN_004a80e0(uVar5);
  FUN_00431140(uVar2);
  return;
}


/* ==== 00431140 FUN_00431140 ==== */

void FUN_00431140(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int i;
  int in_ECX;
  int j;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_20 [4];
  uint uStack_10;
  
  if ((int)*(uint *)(in_ECX + 0x30) < (int)param_1) {
    param_1 = *(uint *)(in_ECX + 0x30);
  }
  i = FUN_004a8600(8);
  iVar3 = *(int *)(DAT_0073b0d0 + i * 0xa9 + 0x99) * 0xac;
  i = iVar3 + DAT_0073b5c8;
  if (*(int *)(iVar3 + DAT_0073b5c8) != 2) {
    FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,
                 s_______Libs_Win3DLib_Include_mesh_00597ca8,0xe1);
  }
  if (*(int *)(i + 4) != 2) {
    FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,
                 s_______Libs_Win3DLib_Include_mesh_00597ca8,0xe4);
  }
  if (*(int *)(i + 0x84) < 1) {
    FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,
                 s_______Libs_Win3DLib_Include_mesh_00597ca8,0xe7,0,*(undefined4 *)(i + 0x7c));
  }
  puVar4 = *(undefined4 **)(i + 0x80);
  puVar5 = auStack_20;
  for (j = 8; j != 0; j = j + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((param_1 != uStack_10 >> 0x18) && (*(int *)(iVar3 + DAT_0073b5c8) == 2)) {
    i = 0;
    piVar1 = (int *)(iVar3 + 0x84 + DAT_0073b5c8);
    if (0 < *(int *)(iVar3 + 0x84 + DAT_0073b5c8)) {
      piVar2 = (int *)(iVar3 + 0x80 + DAT_0073b5c8);
      iVar3 = 0;
      do {
        i = i + 1;
        *(uint *)(*piVar2 + 0x10 + iVar3) = uStack_10 & 0xffffff | param_1 << 0x18;
        iVar3 = iVar3 + 0x20;
      } while (i < *piVar1);
    }
  }
  return;
}


/* ==== 00431280 FUN_00431280 ==== */

void FUN_00431280(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  
  if (*in_ECX == -1) {
    FUN_004c4150(s___s___d_Tyre_position_requested_f_00597cf8,
                 s_C__Work_A2IV_Game_prog_car_trail_00597cd0,0x372);
  }
  if ((param_2 < 0) || (1 < param_2)) {
    FUN_004c4150(s___s___d_Illegal_tyre_index___d__r_00597d5c,
                 s_C__Work_A2IV_Game_prog_car_trail_00597d34,0x379,param_2);
  }
  iVar4 = FUN_004a8600(param_2 + 2);
  iVar1 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
  uVar2 = *(undefined4 *)(iVar1 + 4);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  *param_1 = *(undefined4 *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}


/* ==== 00431320 FUN_00431320 ==== */

uint FUN_00431320(int param_1,undefined4 param_2,char *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint i;
  uint j;
  uint k;
  char *str1;
  char *pcVar7;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056a380;
  local_c = ExceptionList;
  local_4 = 0;
  local_1c = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  local_4._0_1_ = 1;
  str1 = param_3;
  if (param_3 == (char *)0x0) {
    str1 = "";
  }
  local_2c[0] = (undefined1)param_1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = str1;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(str1,~i - 1);
  local_4._0_1_ = 2;
  FUN_00424660(local_2c);
  local_4._0_1_ = 1;
  FUN_004028f0(1);
  if (DAT_006c32f0 != -1) {
    puVar3 = &DAT_006c32f0;
    do {
      if (0x6c34f7 < (int)puVar3) break;
      piVar1 = puVar3 + 0xd;
      puVar3 = puVar3 + 0xd;
    } while (*piVar1 != -1);
  }
  iVar4 = FUN_00424660(&param_2);
  str1 = *(char **)(iVar4 + 0x14);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  uVar5 = FUN_004b75a0(str1);
  iVar4 = DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  i = FUN_004a7790(*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x54),
                   *(undefined4 *)(iVar4 + 0x58),*(undefined4 *)(iVar4 + 0x74),
                   *(undefined4 *)(iVar4 + 0x78),*(undefined4 *)(iVar4 + 0x7c),uVar5,0,&LAB_004319a0
                   ,0,0);
  if (0x7fffffff < i) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(1);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    ExceptionList = local_c;
    return 0xffffffff;
  }
  iVar4 = i * 0xf0;
  *(undefined4 *)(DAT_00715e50 + 0x1c + iVar4) = 0x1f;
  *(undefined4 *)(DAT_00715e50 + 0x34 + iVar4) =
       *(undefined4 *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
  *(undefined1 **)(DAT_00715e50 + 0x70 + iVar4) = &LAB_0042d820;
  *(undefined1 **)(DAT_00715e50 + 0x78 + iVar4) = &LAB_00431810;
  FUN_00429320(i);
  FUN_004292e0(i);
  FUN_004a7190(i);
  FUN_0042a7f0(i);
  str1 = param_3;
  if (param_3 == (char *)0x0) {
    str1 = "";
  }
  local_2c[0] = (undefined1)param_1;
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar7 = str1;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  j = ~j - 1;
  cVar2 = FUN_00402a00(j,1);
  if (cVar2 != '\0') {
    for (k = j >> 2; k != 0; k = k - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)str1;
      str1 = str1 + 4;
      local_28 = local_28 + 4;
    }
    for (k = j & 3; k != 0; k = k - 1) {
      *local_28 = *str1;
      str1 = str1 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(j);
  }
  local_4._0_1_ = 3;
  iVar6 = FUN_00424660(local_2c);
  uVar5 = *(undefined4 *)(iVar6 + 0x44);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(1);
  FUN_004353e0(uVar5,i);
  iVar6 = FUN_004a8600(0);
  *(undefined1 *)(DAT_0073b0d0 + iVar6 * 0xa9 + 0x90) = 0;
  iVar6 = FUN_004a8600(1);
  *(undefined1 *)(DAT_0073b0d0 + iVar6 * 0xa9 + 0x90) = 0;
  if ((DAT_006fb940 != 0) && (DAT_006fb8d0 != 0)) {
    *(undefined4 *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + iVar4) * 0xa9 + 0xa5) = 3;
  }
  FUN_0042faa0(i,param_1,0x467a0000,0x45fa0000);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_3 != (char *)0x0) {
    cVar2 = param_3[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(param_3 + -1);
    }
    else {
      param_3[-1] = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return i;
}


/* ==== 004316d0 FUN_004316d0 ==== */

int FUN_004316d0(int param_1)

{
  int i;
  int *piVar1;
  
  if (param_1 != -1) {
    i = 0;
    piVar1 = &DAT_006c32f0;
    do {
      if (*piVar1 == param_1) {
        return i;
      }
      piVar1 = piVar1 + 0xd;
      i = i + 1;
    } while ((int)piVar1 < 0x6c34f8);
  }
  return -1;
}


/* ==== 00431a30 FUN_00431a30 ==== */

void FUN_00431a30(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00431a40 FUN_00431a40 ==== */

void FUN_00431a40(void)

{
  FUN_005584e0(&LAB_00431a50);
  return;
}


/* ==== 00431a70 FUN_00431a70 ==== */

void FUN_00431a70(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00431a80 FUN_00431a80 ==== */

void FUN_00431a80(void)

{
  FUN_005584e0(&LAB_00431a90);
  return;
}


/* ==== 00431ad0 FUN_00431ad0 ==== */

void FUN_00431ad0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c5e40(param_1);
  while (iVar1 != 0) {
    iVar1 = FUN_004c5e40(param_1);
  }
  return;
}


/* ==== 00431b00 FUN_00431b00 ==== */

void FUN_00431b00(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_004c5930(0,0,iVar1,s__00597f6c);
    iVar1 = iVar1 + 0x14;
  } while (iVar1 < 400);
  FUN_004c5930(0,10,0x17c,s_Menu_items_signed_with_a___need_a_00597fe0);
  return;
}


/* ==== 00431b40 FUN_00431b40 ==== */

void FUN_00431b40(float *param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  FUN_00431ad0(0x20);
  FUN_00431b00();
  FUN_004c5930(0,0,0,s__s_00598018,param_4);
  iVar1 = FUN_004c5e40(0x1b);
  while (iVar1 == 0) {
    FUN_004c5930(0,0,0x28,s__s___f_0059801c,param_5,(double)*param_1);
    iVar1 = FUN_004c5e40(0x6b);
    if (iVar1 != 0) {
      *param_1 = param_2 + *param_1;
      FUN_00431ad0();
    }
    iVar1 = FUN_004c5e40();
    if (iVar1 != 0) {
      *param_1 = *param_1 - param_3;
      FUN_00431ad0();
    }
    iVar1 = FUN_004c5e40();
    if (iVar1 != 0) {
      *param_1 = 0.0;
      FUN_00431ad0();
    }
    iVar1 = FUN_004c5e40();
  }
  FUN_00431ad0(0x1b);
  return;
}


/* ==== 00431c20 FUN_00431c20 ==== */

int FUN_00431c20(int param_1)

{
  int iVar1;
  int j;
  int iVar2;
  int i;
  
  i = 0;
  iVar2 = 0x28;
  if (0 < param_1) {
    iVar1 = 0x28;
    j = param_1;
    do {
      FUN_004c5930(0,0,iVar1,s__00598024);
      iVar1 = iVar1 + 0x14;
      j = j + -1;
    } while (j != 0);
  }
  FUN_004c5930(0,0,0x28,s_>_00598028);
  j = FUN_004c5e40(0x20);
  while( true ) {
    if (j != 0) {
      FUN_00431ad0(0x20);
      return i;
    }
    j = FUN_004c5e40(0x26);
    if (j != 0) {
      FUN_004c5930(0,0,iVar2,s__0059802c);
      i = i + -1;
      iVar2 = iVar2 + -0x14;
      if (i < 0) {
        i = param_1 + -1;
        iVar2 = (i * 5 + 10) * 4;
      }
      FUN_004c5930(0,0,iVar2,s_>_00598030);
      FUN_00431ad0(0x26);
    }
    j = FUN_004c5e40(0x28);
    if (j != 0) {
      FUN_004c5930(0,0,iVar2,s__00598034);
      i = i + 1;
      iVar2 = iVar2 + 0x14;
      if (param_1 <= i) {
        i = 0;
        iVar2 = 0x28;
      }
      FUN_004c5930(0,0,iVar2,s_>_00598038);
      FUN_00431ad0(0x28);
    }
    j = FUN_004c5e40(0x1b);
    if (j != 0) break;
    j = FUN_004c5e40(0x20);
  }
  FUN_00431ad0(0x1b);
  return -1;
}


/* ==== 00431d50 FUN_00431d50 ==== */

void FUN_00431d50(void)

{
  FUN_00431b00();
  FUN_004c5930(0,0,0,s_Car_Characteristics_Menu_0059803c);
  FUN_004c5930(0,0x14,0x28,s___Car_weight_00598058);
  FUN_004c5930(0,0x14,0x3c,s___Weight_share_front_00598068);
  FUN_004c5930(0,0x14,0x50,s___Weight_share_rear_00598080);
  FUN_004c5930(0,0x14,100,s___Wheel_radius_00598094);
  FUN_004c5930(0,0x14,0x78,s___Distance_front_>CG_005980a4);
  FUN_004c5930(0,0x14,0x8c,s___Distance_rear_>CG_005980bc);
  FUN_004c5930(0,0x14,0xa0,s___Air_surface_005980d0);
  FUN_004c5930(0,0x14,0xb4,s___Max_steer_angle_005980e0);
  FUN_004c5930(0,0x14,200,s___Max_brake_force_005980f4);
  FUN_004c5930(0,0,0xf0,s_Escape_to_leave_menu_00598108);
  return;
}


/* ==== 00431e20 FUN_00431e20 ==== */

void FUN_00431e20(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_00431d50();
  iVar1 = FUN_00431c20(9);
  do {
    if (iVar1 < 0) {
      return;
    }
    switch(iVar1) {
    case 0:
      pcVar6 = s_Current_weight_00598120;
      pcVar5 = s_Adjust_car_weight_00598130;
      uVar4 = 0x42480000;
      uVar3 = 0x42480000;
      puVar2 = &DAT_006c1c68 + DAT_006fba5c * 0xf0;
      break;
    case 1:
      pcVar6 = s_Current_share_value_00598144;
      pcVar5 = s_Adjust_car_weight_share_front_00598158;
      uVar4 = 0x3d4ccccd;
      uVar3 = 0x3d4ccccd;
      puVar2 = &DAT_006c1c6c + DAT_006fba5c * 0xf0;
      break;
    case 2:
      pcVar6 = s_Current_share_value_00598178;
      pcVar5 = s_Adjust_car_weight_share_rear_0059818c;
      uVar4 = 0x3d4ccccd;
      uVar3 = 0x3d4ccccd;
      puVar2 = &DAT_006c1c70 + DAT_006fba5c * 0xf0;
      break;
    case 3:
      pcVar6 = s_Current_wheel_radius_005981ac;
      pcVar5 = s_Adjust_wheel_radius_005981c4;
      uVar4 = 0x3c23d70a;
      uVar3 = 0x3c23d70a;
      puVar2 = &DAT_006c1c74 + DAT_006fba5c * 0xf0;
      break;
    case 4:
      pcVar6 = s_Current_distance_005981d8;
      pcVar5 = s_Adjust_distance_GC_>front_wheels_005981ec;
      uVar4 = 0x3d4ccccd;
      uVar3 = 0x3d4ccccd;
      puVar2 = &DAT_006c1c78 + DAT_006fba5c * 0xf0;
      break;
    case 5:
      pcVar6 = s_Current_distance_00598210;
      pcVar5 = s_Adjust_distance_GC_>rear_wheels_00598224;
      uVar4 = 0x3d4ccccd;
      uVar3 = 0x3d4ccccd;
      puVar2 = &DAT_006c1c7c + DAT_006fba5c * 0xf0;
      break;
    case 6:
      pcVar6 = s_Current_surface_00598244;
      pcVar5 = s_Adjust_surface_exposed_to_air_fr_00598254;
      uVar4 = 0x3dcccccd;
      uVar3 = 0x3dcccccd;
      puVar2 = &DAT_006c1c80 + DAT_006fba5c * 0xf0;
      break;
    case 7:
      pcVar6 = s_Current_angle_0059827c;
      pcVar5 = s_Adjust_maximum_steering_angle_0059828c;
      uVar4 = 0x3ba3d70a;
      uVar3 = 0x3ba3d70a;
      puVar2 = &DAT_006c1c84 + DAT_006fba5c * 0xf0;
      break;
    case 8:
      pcVar6 = s_Current_force_005982ac;
      pcVar5 = s_Adjust_maximum_brake_force_005982bc;
      uVar4 = 0x437a0000;
      uVar3 = 0x437a0000;
      puVar2 = &DAT_006c1c88 + DAT_006fba5c * 0xf0;
      break;
    default:
      goto switchD_00431e40_default;
    }
    FUN_00431b40(puVar2,uVar3,uVar4,pcVar5,pcVar6);
switchD_00431e40_default:
    FUN_00431d50();
    iVar1 = FUN_00431c20(9);
  } while( true );
}


