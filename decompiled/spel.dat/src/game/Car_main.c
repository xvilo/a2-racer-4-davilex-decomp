/* spel.dat — game/Car_main.cpp: 18 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00429250 FUN_00429250 ==== */

void FUN_00429250(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00429260 FUN_00429260 ==== */

void FUN_00429260(void)

{
  FUN_005584e0(&LAB_00429270);
  return;
}


/* ==== 004292e0 FUN_004292e0 ==== */

int FUN_004292e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a8c50(param_1 * 0xf0 + DAT_00715e50);
  return DAT_0073b5c8 + iVar1 * 0xac;
}


/* ==== 00429320 FUN_00429320 ==== */

int FUN_00429320(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a8c50(param_1 * 0xf0 + DAT_00715e50);
  return DAT_0073b5c8 + iVar1 * 0xac;
}


/* ==== 00429360 FUN_00429360 ==== */

undefined4 FUN_00429360(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int i;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 local_40 [8];
  float fStack_20;
  float fStack_18;
  
  uVar2 = *(undefined4 *)(DAT_00715e50 + 0x34 + param_1 * 0xf0);
  if (DAT_006fb8e8 == 0) {
    if (DAT_006fb954 == 1) {
      uVar10 = 0;
      goto LAB_0042939f;
    }
  }
  else if (DAT_006fb954 != 1) {
    uVar10 = 0;
    goto LAB_0042939f;
  }
  uVar10 = 1;
LAB_0042939f:
  iVar7 = FUN_004a6d70(uVar2,0,uVar10);
  iVar7 = iVar7 * 0x50;
  i = *(int *)(iVar7 + 0x14 + DAT_00715eb8);
  if (((i == -1) && (i = *(int *)(iVar7 + 0x18 + DAT_00715eb8), i == -1)) &&
     (i = *(int *)(iVar7 + 0x1c + DAT_00715eb8), i == -1)) {
    FUN_004c4150(s___s___d_Waypoint__d_on_chunk__d_h_00596884,
                 s_C__Work_A2IV_Game_prog_Car_main__00596860,0xb2,uVar2);
  }
  pfVar1 = (float *)(iVar7 + 8 + DAT_00715eb8);
  fVar3 = *pfVar1;
  fVar4 = pfVar1[2];
  pfVar1 = (float *)(i * 0x50 + 8 + DAT_00715eb8);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[2];
  puVar8 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + param_1 * 0xf0) * 0xa9 + 0x10);
  puVar9 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if (fStack_20 * (fVar5 - fVar3) + fStack_18 * (fVar6 - fVar4) < 0.0) {
    return 0;
  }
  return 1;
}


/* ==== 004294a0 FUN_004294a0 ==== */

void FUN_004294a0(void)

{
  undefined4 this_val;
  
  DAT_006c2f38 = FUN_004a3460();
  this_val = FUN_0042aee0();
  FUN_0042b1c0(this_val);
  FUN_0044e340();
  FUN_00427970();
  FUN_0042de60();
  FUN_004133b0();
  FUN_00423a30();
  FUN_0041e6c0();
  return;
}


/* ==== 004294e0 thunk_FUN_0042a810 ==== */

void thunk_FUN_0042a810(void)

{
  FUN_004b4580(DAT_006fb8b4);
  return;
}


/* ==== 004294f0 FUN_004294f0 ==== */

void FUN_004294f0(int this_val,int param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  int local_30;
  undefined1 local_24 [4];
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0056a188;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004028f0(local_34,0);
  local_c = 0;
  uVar2 = FUN_0049df90(local_24,s__s__d_WheelMaterial_005968b8);
  local_c._0_1_ = 1;
  FUN_004093c0(local_34,uVar2,0,0xffffffff);
  local_c = (uint)local_c._1_3_ << 8;
  if (local_20 != 0) {
    cVar1 = *(char *)(local_20 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_20 + -1));
    }
    else {
      *(char *)(local_20 + -1) = cVar1 + -1;
    }
  }
  iVar3 = FUN_004a4430(&DAT_00715f58,local_34);
  if (iVar3 == 0) {
    iVar3 = FUN_004a4510(&DAT_00715f58,local_34,0x3f333333,0x3f000000);
  }
  *(undefined4 *)(this_val + 0x18) = 0;
  *(undefined4 *)(this_val + 0x38) = 0xa0000000;
  *(int *)(this_val + 0x14) = iVar3;
  *(undefined1 *)(this_val + 0x84) = 1;
  *(undefined4 *)(this_val + 0x88) = 0x40800000;
  *(undefined4 *)(this_val + 0x1c) = 0x4062c000;
  *(undefined4 *)(this_val + 0x20) = 1;
  *(undefined4 *)(this_val + 0x3c) = 0x3fa99999;
  *(undefined4 *)(this_val + 0x40) = 0x33333333;
  *(undefined4 *)(this_val + 0x48) = 0x33333333;
  *(undefined4 *)(this_val + 0x50) = 0x33333333;
  *(undefined4 *)(this_val + 0x44) = 0x3fe33333;
  *(undefined4 *)(this_val + 0x4c) = 0x3fe33333;
  *(undefined4 *)(this_val + 0x54) = 0x3fe33333;
  *(undefined4 *)(this_val + 0xc) = 0;
  *(undefined1 *)(this_val + 0xa8) = 1;
  *(undefined4 *)(this_val + 0xb0) = 0xffffffff;
  *(undefined4 *)(this_val + 0xac) = param_5;
  FUN_0049df90(local_44,s_wheel_d_005968cc);
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_004093c0(this_val + 0x70,local_44,0,0xffffffff);
  puVar4 = *(undefined1 **)(this_val + 0x74);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_004f5480(this_val,puVar4);
  FUN_004a02a0(this_val,DAT_006c2f38 | param_4);
  *(undefined4 *)(this_val + 0x90) = 0;
  *(undefined4 *)(this_val + 0x94) = 0;
  *(undefined4 *)(this_val + 0x98) = 0;
  if (local_40 != 0) {
    cVar1 = *(char *)(local_40 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_40 + -1);
    }
    else {
      *(char *)(local_40 + -1) = cVar1 + -1;
    }
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_30 + -1) = cVar1 + -1;
      ExceptionList = local_14;
      return;
    }
    FUN_0054b339(local_30 + -1);
  }
  ExceptionList = local_14;
  return;
}


/* ==== 00429710 FUN_00429710 ==== */

void FUN_00429710(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5,
                 float param_6,float param_7,float param_8,undefined4 param_9,undefined4 param_10,
                 char param_11,char param_12,char param_13,undefined4 param_14,undefined4 param_15)

{
  char cVar1;
  int iVar2;
  int k;
  int *piVar3;
  uint i;
  uint j;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 uStack_3c4;
  undefined1 uStack_3c1;
  float local_3c0;
  char *local_3bc;
  float local_3b8;
  undefined4 uStack_3b4;
  uint local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  float local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 uStack_380;
  float local_374;
  undefined4 local_370;
  int local_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_358;
  float fStack_354;
  undefined4 uStack_350;
  undefined1 local_34c [12];
  undefined4 local_340;
  int local_338;
  double local_334;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  int iStack_2e0;
  undefined4 local_2dc;
  undefined1 *local_2d8;
  int iStack_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  char *local_2ac;
  float local_2a8;
  undefined1 local_2a4;
  undefined4 local_2a0;
  int local_29c;
  undefined1 auStack_294 [108];
  int iStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_20c;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 auStack_1dc [108];
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  int local_104;
  float local_100;
  undefined4 local_fc;
  int local_f8;
  char local_f4;
  undefined4 local_e4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [6];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a1ea;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a22a0(local_34c);
  local_4 = 0;
  if (param_12 == '\0') {
    local_3a4 = DAT_006fbb40;
    local_3ac = DAT_006fbb50;
    local_3a8 = DAT_006fbb4c;
    local_3a0 = DAT_006fbb44;
  }
  else {
    local_3a4 = 0;
    local_3ac = 0;
    local_3a8 = 0;
    local_3a0 = 0;
  }
  local_3b0 = local_3a0;
  FUN_0049df90((undefined1 *)&local_368,s_Veh_d_005968d4);
  DAT_006c2f3c = DAT_006c2f3c + 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004093c0(&local_2dc);
  if (local_2d8 == (undefined1 *)0x0) {
    local_2d8 = &DAT_0057629c;
  }
  FUN_004f5480(local_34c,local_2d8);
  iVar5 = param_2 * 0xf0;
  FUN_004a7bd0(iVar5 + DAT_00715e50);
  FUN_004a7be0(iVar5 + DAT_00715e50,&local_368);
  local_3c0 = (float)CONCAT31(local_3c0._1_3_,uStack_3c1);
  *(undefined4 *)(iVar5 + 0x18 + DAT_00715e50) = 1;
  FUN_004028f0(&local_3c0,0);
  i = 0xffffffff;
  pcVar7 = s_ObjectMaterial_005968dc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(&local_3c0,i,1);
  if (cVar1 != '\0') {
    pcVar7 = s_ObjectMaterial_005968dc;
    pcVar10 = local_3bc;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004029e0(&local_3c0,i);
  }
  local_4._0_1_ = 2;
  iVar2 = FUN_004a4430(&DAT_00715f58,&local_3c0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(&local_3c0,1);
  if (iVar2 == 0) {
    local_3c0 = (float)CONCAT31(local_3c0._1_3_,uStack_3c1);
    FUN_004028f0(&local_3c0,0);
    i = 0xffffffff;
    pcVar7 = s_ObjectMaterial_005968ec;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(&local_3c0,i,1);
    if (cVar1 != '\0') {
      pcVar7 = s_ObjectMaterial_005968ec;
      pcVar10 = local_3bc;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar10 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_004029e0(&local_3c0,i);
    }
    local_4._0_1_ = 3;
    iVar2 = FUN_004a4510(&DAT_00715f58);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(&local_3c0,1);
  }
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar6 = iVar4 * 0x268;
  local_334 = (double)(float)(&DAT_006b2bc0)[iVar4 * 0x9a];
  if (param_11 == '\0') {
    local_2b0 = (float)(&DAT_006b2bc4)[iVar4 * 0x9a];
    local_2ac = *(char **)(&DAT_006b2bc8 + iVar6);
    local_2a8 = *(float *)(&DAT_006b2bcc + iVar6);
  }
  else {
    local_3b8 = *(float *)(&DAT_006b2bcc + iVar6) * 0.4;
    local_3bc = (char *)(*(float *)(&DAT_006b2bc8 + iVar6) * 0.4);
    local_3c0 = (float)(&DAT_006b2bc4)[iVar4 * 0x9a] * 0.4;
    local_2b0 = local_3c0;
    local_2ac = local_3bc;
    local_2a8 = local_3b8;
  }
  local_74 = *(undefined4 *)(&DAT_006b2bd0 + iVar6);
  local_70 = *(undefined4 *)(&DAT_006b2bd4 + iVar6);
  local_e4 = *(undefined4 *)(&DAT_006b2bd8 + iVar6);
  iVar4 = iVar4 * 0x9a;
  k = (local_3a8 + iVar4) * 4;
  local_5c = *(undefined4 *)(&DAT_006b2bdc + k);
  local_58 = *(undefined4 *)(&DAT_006b2bf0 + k);
  local_54 = *(undefined4 *)(&DAT_006b2c04 + iVar6);
  k = (iVar4 + local_3a4) * 4;
  local_50 = *(float *)(&DAT_006b2c58 + k);
  if (param_12 == '\x01') {
    local_50 = local_50 * *(float *)(&DAT_005d1b74 + DAT_006fb958 * 4) * 0.01;
  }
  local_6c = *(undefined4 *)(&DAT_006b2c1c + k);
  local_68 = *(float *)(&DAT_006b2c30 + k);
  if (param_12 == '\x01') {
    local_68 = local_68 * *(float *)(&DAT_005d1b80 + DAT_006fb958 * 4) * 0.01;
  }
  local_64 = *(undefined4 *)(&DAT_006b2c44 + k);
  local_60 = *(undefined4 *)(&DAT_006b2c6c + k);
  local_4c = *(undefined4 *)(&DAT_006b2c80 + k);
  local_8c = 0x479c4000;
  local_88 = 0x479c4000;
  local_48 = *(undefined4 *)(&DAT_006b2c08 + (iVar4 + local_3ac) * 4);
  local_84 = 0x479c4000;
  local_80 = 0x479c4000;
  puVar8 = (undefined4 *)(&DAT_006b2c94 + local_3ac * 0x18 + iVar6);
  puVar9 = local_44;
  for (k = 6; k != 0; k = k + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  k = (iVar4 + local_3a0) * 4;
  local_bc = *(undefined4 *)(&DAT_006b2dac + k);
  local_9c = *(float *)(&DAT_006b2dc0 + k) * 0.2;
  local_ac = *(undefined4 *)(&DAT_006b2dc0 + k);
  local_b4 = *(undefined4 *)(&DAT_006b2de8 + k);
  local_a4 = *(undefined4 *)(&DAT_006b2dfc + k);
  local_7c = *(undefined4 *)(&DAT_006b2dd4 + k);
  local_78 = *(undefined4 *)(&DAT_006b2e10 + k);
  iVar4 = (iVar4 + local_3b0) * 4;
  local_94 = *(float *)(&DAT_006b2dfc + k) * 0.2;
  local_2c = *(undefined4 *)(&DAT_006b2d0c + iVar4);
  local_28 = *(undefined4 *)(&DAT_006b2d20 + iVar4);
  local_24 = *(undefined4 *)(&DAT_006b2d34 + iVar4);
  local_20 = *(undefined4 *)(&DAT_006b2d48 + iVar4);
  local_1c = *(undefined4 *)(&DAT_006b2d5c + iVar4);
  local_18 = *(undefined4 *)(&DAT_006b2d70 + iVar4);
  local_14 = *(void **)(&DAT_006b2d84 + iVar4);
  local_10 = *(undefined4 *)(&DAT_006b2d98 + iVar4);
  local_338 = iVar2;
  local_b8 = local_bc;
  local_b0 = local_b4;
  local_a8 = local_ac;
  local_a0 = local_a4;
  local_98 = local_9c;
  local_90 = local_94;
  FUN_004354e0();
  local_124 = -local_38c;
  local_120 = local_388;
  local_3c0 = -local_374;
  local_114 = local_388;
  local_3bc = (char *)local_370;
  local_11c = local_384;
  local_108 = local_370;
  local_118 = local_38c;
  local_110 = local_384;
  local_3b8 = (float)local_36c;
  local_fc = local_370;
  local_104 = local_36c;
  local_29c = param_2;
  local_100 = local_374;
  local_f8 = local_36c;
  local_f4 = param_11;
  local_32c = 1;
  local_314 = 0xa0000000;
  local_310 = 0x3fa99999;
  local_328 = 0x3f800000;
  local_324 = 0x3fd9999a;
  local_320 = 0x3fe66666;
  local_30c = 0x33333333;
  local_308 = 0x3fe33333;
  local_304 = 0x33333333;
  local_300 = 0x3fe33333;
  local_2fc = 0x33333333;
  local_2f8 = 0x3fe33333;
  local_340 = 0;
  local_2a4 = 1;
  local_2a0 = param_14;
  local_10c = local_3c0;
  if (param_13 == '\x01') {
    FUN_004a02a0(local_34c,DAT_00715b0c);
    local_3b0 = DAT_00715b0c;
  }
  else {
    local_3b0 = FUN_004a3460();
    FUN_004a02a0(local_34c,local_3b0);
  }
  local_2bc = 0;
  iVar4 = *(int *)(DAT_00715e50 + iVar5 + 0x24);
  iVar2 = DAT_0073b0d0 + iVar4 + 0x74 + iVar4 * 0xa8;
  local_3c0 = *(float *)(DAT_0073b0d0 + iVar4 + 0x74 + iVar4 * 0xa8);
  local_3bc = *(char **)(iVar2 + 4);
  local_3b8 = *(float *)(iVar2 + 8);
  local_2b4 = 0;
  local_2b8 = local_3bc;
  iVar2 = FUN_004a8c50();
  puVar8 = (undefined4 *)(iVar2 * 0xac + 0x98 + DAT_0073b5c8);
  if (*(int *)(iVar2 * 0xac + 0x9c + DAT_0073b5c8) == 0) {
    FUN_004c4150();
  }
  pcVar7 = (char *)*puVar8;
  local_39c = CONCAT31(local_39c._1_3_,uStack_3c1);
  local_398 = 0;
  local_394 = 0;
  local_390 = 0;
  i = 0xffffffff;
  pcVar10 = pcVar7;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_39c,pcVar7,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,4);
  iStack_2c0 = FUN_004a41f0(&DAT_00715f58,&local_39c);
  if (iStack_2c0 == 0) {
    iStack_2c0 = FUN_004a4330(&DAT_00715f58);
  }
  i = local_3b0;
  iVar4 = *(int *)(iVar5 + 0x24 + DAT_00715e50);
  iVar2 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
  uStack_358 = *(undefined4 *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
  uStack_350 = *(undefined4 *)(iVar2 + 8);
  fStack_354 = *(float *)(iVar2 + 4) + 20.0;
  FUN_004294f0((int)auStack_294,&local_368,0,local_3b0,param_15);
  uStack_20c = *(undefined4 *)(&DAT_006b2e24 + iVar6);
  FUN_004294f0((int)auStack_1dc,&local_368,2,i,param_15);
  uStack_154 = *(undefined4 *)(&DAT_006b2e24 + iVar6);
  uStack_148 = local_2b8;
  uStack_200 = local_2b8;
  uStack_14c = local_2bc;
  uStack_204 = local_2bc;
  local_3c0 = (float)CONCAT31(local_3c0._1_3_,uStack_3c1);
  i = 0xffffffff;
  pcVar7 = s_VehicleObject_005968fc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_3bc = (char *)0x0;
  uStack_144 = local_2b4;
  uStack_1fc = local_2b4;
  local_3b8 = 0.0;
  uStack_3b4 = 0;
  FUN_00402940(&local_3c0,s_VehicleObject_005968fc,~i - 1);
  local_4._0_1_ = 5;
  piVar3 = (int *)FUN_004a43d0(&DAT_00715f58,&local_3c0);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_3bc != (char *)0x0) {
    cVar1 = *(char *)((int)local_3bc + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_3bc + -1));
    }
    else {
      *(char *)((int)local_3bc + -1) = cVar1 + -1;
    }
  }
  local_3bc = (char *)0x0;
  local_3b8 = 0.0;
  uStack_3b4 = 0;
  (**(code **)(*piVar3 + 0x14))(local_34c,&uStack_358);
  *(int **)(iVar5 + 0x10 + DAT_00715e50) = piVar3;
  iVar2 = FUN_004a8c50(DAT_00715e50 + iVar5);
  local_3c0 = *(float *)(DAT_0073b5c8 + 0x24 + iVar2 * 0xac) +
              *(float *)(DAT_0073b5c8 + 0x18 + iVar2 * 0xac);
  local_388 = 0;
  local_384 = 0xbf800000;
  uStack_380 = 0x3f800000;
  FUN_004a1f30(*(undefined4 *)(iVar5 + 0x10 + DAT_00715e50));
  if (0.1 <= param_5) {
    *(float *)(iVar5 + 0xb0 + DAT_00715e50) = 1.0 / param_5;
    *(float *)(iVar5 + 0xb4 + DAT_00715e50) =
         1.0 / (param_5 * 0.083333336 * (param_8 * param_8 + param_7 * param_7));
  }
  else {
    *(undefined4 *)(iVar5 + 0xb0 + DAT_00715e50) = 0;
    *(undefined4 *)(iVar5 + 0xb4 + DAT_00715e50) = 0;
  }
  if ((param_6 < 0.0) || (1.0 < param_6)) {
    FUN_004c4150(s__s__d____Invalid_coef__of_restit_00596930,
                 s_C__Work_A2IV_Game_prog_Car_main__0059690c,0x1ff,(double)param_6);
  }
  *(float *)(iVar5 + 0xb8 + DAT_00715e50) = param_6;
  if (local_3a0 != 0) {
    cVar1 = *(char *)(local_3a0 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(local_3a0 + -1) = cVar1 + -1;
    }
  }
  local_3a0 = 0;
  local_39c = 0;
  local_398 = 0;
  if (local_36c != 0) {
    cVar1 = *(char *)(local_36c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(local_36c + -1) = cVar1 + -1;
    }
  }
  local_36c = 0;
  local_368 = 0;
  uStack_364 = 0;
  pvStack_c = (void *)0x7;
  if (iStack_170 != 0) {
    cVar1 = *(char *)(iStack_170 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(iStack_170 + -1) = cVar1 + -1;
    }
  }
  iStack_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  FUN_004f5510();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
  if (iStack_228 != 0) {
    cVar1 = *(char *)(iStack_228 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(iStack_228 + -1) = cVar1 + -1;
    }
  }
  iStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  FUN_004f5510();
  pvStack_c = (void *)0xffffffff;
  if (iStack_2e0 != 0) {
    cVar1 = *(char *)(iStack_2e0 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(iStack_2e0 + -1) = cVar1 + -1;
    }
  }
  iStack_2e0 = 0;
  local_2dc = 0;
  local_2d8 = (undefined1 *)0x0;
  FUN_004f5510();
  ExceptionList = local_14;
  return;
}


/* ==== 0042a3d0 FUN_0042a3d0 ==== */

int FUN_0042a3d0(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                float param_5,undefined4 param_6,undefined4 param_7,float param_8,undefined4 param_9
                ,int param_10,int param_11,undefined4 param_12)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *str1;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  float10 fVar14;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056a1fc;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00424660(&DAT_005d3458,&param_1);
  iVar5 = FUN_004245f0(&DAT_005d3458,&param_1);
  if (iVar5 == -1) {
    puVar6 = param_2;
    if (param_2 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004c4150(s__s___d__Could_not_find_vehicle___00596980,
                 s_C__Work_A2IV_Game_prog_Car_main__0059695c,0x217,puVar6);
  }
  uVar7 = FUN_004a71e0(param_5);
  puVar8 = (undefined4 *)FUN_004a6d00(auStack_18,uVar7,param_6,param_7);
  uVar12 = *puVar8;
  fVar2 = (float)puVar8[1];
  uVar3 = puVar8[2];
  fVar14 = (float10)FUN_004a6e80(uVar7,param_8);
  str1 = *(char **)(iVar4 + 0x34);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  uVar9 = FUN_0049ecb0(&DAT_006fbb5c,str1);
  str1 = *(char **)(iVar4 + 0x14);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  uVar10 = FUN_004b75a0(&DAT_00712130,str1);
  iVar11 = FUN_004a7790(uVar12,fVar2 + 5.0,uVar3,0,(float)fVar14,0,uVar10,0,param_9,0,uVar9);
  iVar5 = param_11;
  if (param_11 == 1) {
    DAT_006fba58 = iVar11;
  }
  fVar14 = (float10)FUN_00429320(iVar11);
  param_8 = (float)fVar14;
  fVar14 = (float10)FUN_004292e0(iVar11);
  param_5 = (float)fVar14;
  if (iVar5 == 1) {
    uVar12 = 0;
  }
  else {
    if (iVar5 != 3) {
      FUN_004a79d0(iVar11,0,0,0,0,0xc1200000,0,(float)*(int *)(iVar4 + 0x40),0x3f666666,0x3e4ccccd,0
                   ,param_10,0,1);
      goto LAB_0042a63d;
    }
    uVar12 = 1;
  }
  FUN_00429710(iVar4,iVar11,0,0,0,0,(float)*(int *)(iVar4 + 0x40),0x3d4ccccd,param_8,param_5,0,
               uVar12,0,param_10,param_12);
LAB_0042a63d:
  iVar13 = iVar11 * 0xf0;
  *(undefined4 *)(iVar13 + 0x38 + DAT_00715e50) = uVar7;
  *(undefined4 *)(iVar13 + 0x34 + DAT_00715e50) = uVar7;
  *(undefined4 *)(iVar13 + 0x50 + DAT_00715e50) = param_7;
  if (((iVar5 == 1) || (iVar5 == 3)) || (iVar5 == 4)) {
    *(undefined4 *)(iVar13 + 0x20 + DAT_00715e50) = 1;
  }
  param_10 = iVar13 + DAT_00715e50;
  uVar12 = FUN_004a6d70(uVar7,param_6,param_7);
  *(undefined4 *)(param_10 + 0x3c) = uVar12;
  if ((iVar5 == 3) || (iVar5 == 1)) {
    *(undefined1 **)(iVar13 + 0x70 + DAT_00715e50) = &LAB_0042c710;
  }
  else {
    *(undefined1 **)(iVar13 + 0x70 + DAT_00715e50) = &LAB_0042d820;
  }
  FUN_004a6fa0(iVar11,0);
  FUN_0042a7f0(iVar11);
  FUN_004a7190(iVar11);
  FUN_00426bb0(&DAT_005d3460,iVar11,iVar5,iVar4 + 0x50);
  if (param_2 != (undefined1 *)0x0) {
    cVar1 = param_2[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(param_2 + -1);
    }
    else {
      param_2[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return iVar11;
}


/* ==== 0042a740 FUN_0042a740 ==== */

void FUN_0042a740(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b75a0(&DAT_00712130,s_S_SHADOW_005969a4);
  DAT_006fb8b4 = FUN_004b52c0(0,0,0,0,0,0,uVar1,0,0);
  *(undefined4 *)(DAT_0073b0d0 + DAT_006fb8b4 * 0xa9 + 0xa1) = 2;
  return;
}


/* ==== 0042a7f0 FUN_0042a7f0 ==== */

void FUN_0042a7f0(int param_1)

{
  *(undefined4 *)(param_1 * 0xf0 + 0x40 + DAT_00715e50) = DAT_006fb8b4;
  return;
}


/* ==== 0042a810 FUN_0042a810 ==== */

void FUN_0042a810(void)

{
  FUN_004b4580(DAT_006fb8b4);
  return;
}


/* ==== 0042a860 FUN_0042a860 ==== */

void FUN_0042a860(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0042a870 FUN_0042a870 ==== */

void FUN_0042a870(void)

{
  FUN_005584e0(&LAB_0042a880);
  return;
}


/* ==== 0042a8a0 FUN_0042a8a0 ==== */

void FUN_0042a8a0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0042a8b0 FUN_0042a8b0 ==== */

void FUN_0042a8b0(void)

{
  FUN_005584e0(&LAB_0042a8c0);
  return;
}


/* ==== 0042a8d0 FUN_0042a8d0 ==== */

void __thiscall FUN_0042a8d0(void *this)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056a226;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)((int)this + 0x1e4);
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      ExceptionList = &pvStack_c;
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      ExceptionList = &pvStack_c;
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  FUN_004f5510();
  iVar2 = *(int *)((int)this + 300);
  local_4 = local_4 & 0xffffff00;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  FUN_004f5510();
  iVar2 = *(int *)((int)this + 0x74);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  FUN_004f5510();
  ExceptionList = pvStack_c;
  return;
}


