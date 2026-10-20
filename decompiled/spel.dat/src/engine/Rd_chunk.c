/* spel.dat — engine/Rd_chunk.cpp: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ab550 FUN_004ab550 ==== */

void FUN_004ab550(uint size)

{
  FUN_004adbe0(size);
  FUN_004b30b0(0x98);
  return;
}


/* ==== 004ab570 FUN_004ab570 ==== */

int FUN_004ab570(undefined4 param_1,undefined4 param_2)

{
  int i;
  
  i = DAT_00715f08;
  if (DAT_00715f0c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,&DAT_00715f14,DAT_00715f04,
                 &DAT_00715f2d);
    i = DAT_00715f08;
  }
  for (; i < DAT_00715f04; i = i + 1) {
    if (*(char *)(DAT_00715f10 + i) == '\0') goto LAB_004ab646;
  }
  i = 0;
  if (0 < DAT_00715f08) {
    do {
      if (*(char *)(DAT_00715f10 + i) == '\0') goto LAB_004ab646;
      i = i + 1;
    } while (i < DAT_00715f08);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,&DAT_00715f14,DAT_00715f04,
               &DAT_00715f2d);
  i = -1;
LAB_004ab5fe:
  FUN_004c3fa0(s_loading_chunk___d_005b0344,i);
  FUN_004ab6d0(param_1);
  FUN_004aba30(param_2);
  return i;
LAB_004ab646:
  *(undefined1 *)(DAT_00715f10 + i) = 1;
  DAT_00715f08 = i;
  goto LAB_004ab5fe;
}


/* ==== 004ab690 FUN_004ab690 ==== */

void FUN_004ab690(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 004ab6d0 FUN_004ab6d0 ==== */

void FUN_004ab6d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  int i;
  int j;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  local_4 = 0;
  local_8 = 0;
  FUN_00558b35(in_ECX + 0x34,4,1,param_1);
  FUN_00558b35(in_ECX + 0x38,4,1,param_1);
  FUN_00558b35(in_ECX + 0x3c,4,1,param_1);
  i = in_ECX + 0xfc;
  j = 2;
  do {
    FUN_00558b35(i,4,1,param_1);
    i = i + 4;
    j = j + -1;
  } while (j != 0);
  piVar1 = (int *)(in_ECX + 0xf0);
  FUN_00558b35(piVar1,4,1,param_1);
  i = 0;
  if (0 < *piVar1) {
    param_1 = (undefined4 *)(in_ECX + 0x104);
    do {
      FUN_00558b35(&local_4,4,1,uVar2);
      i = i + 1;
      *param_1 = local_4;
      param_1 = param_1 + 1;
    } while (i < *piVar1);
  }
  piVar1 = (int *)(in_ECX + 0xf4);
  FUN_00558b35(piVar1,4,1,uVar2);
  if (0xc < *piVar1) {
    FUN_004c4150(s__s__d____chunk_waypoint_left_ove_005b0358,
                 s_C__Work_A2IV_Engine_prog_Rd_chun_005b0380,0x86,*piVar1,0xc);
  }
  i = 0;
  if (0 < *piVar1) {
    param_1 = (undefined4 *)(in_ECX + 0x134);
    do {
      FUN_00558b35(&local_8,4,1,uVar2);
      i = i + 1;
      *param_1 = local_8;
      param_1 = param_1 + 1;
    } while (i < *piVar1);
  }
  piVar1 = (int *)(in_ECX + 0xf8);
  FUN_00558b35(piVar1,4,1,uVar2);
  if (0xc < *piVar1) {
    FUN_004c4150(s__s__d____chunk_waypoint_left_ove_005b0358,
                 s_C__Work_A2IV_Engine_prog_Rd_chun_005b0380,0x96,*piVar1,0xc);
  }
  i = 0;
  if (0 < *piVar1) {
    param_1 = (undefined4 *)(in_ECX + 0x164);
    do {
      FUN_00558b35(&local_8,4,1,uVar2);
      i = i + 1;
      *param_1 = local_8;
      param_1 = param_1 + 1;
    } while (i < *piVar1);
  }
  *(undefined4 *)(in_ECX + 0x30) = 1;
  return;
}


/* ==== 004ab880 FUN_004ab880 ==== */

float10 FUN_004ab880(float param_1,float param_2)

{
  int in_ECX;
  
  return (((float10)*(float *)(in_ECX + 0xec) -
          (float10)param_1 * (float10)*(float *)(in_ECX + 0x4c)) -
         (float10)param_2 * (float10)*(float *)(in_ECX + 0x54)) / (float10)*(float *)(in_ECX + 0x50)
  ;
}


/* ==== 004ab8a0 FUN_004ab8a0 ==== */

void FUN_004ab8a0(void)

{
  float fVar1;
  float fVar2;
  undefined4 __ftol_result;
  undefined4 *puVar3;
  int in_ECX;
  int i;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  unkbyte10 extraout_ST0;
  float10 fVar7;
  undefined1 local_100 [64];
  undefined4 local_c0 [16];
  undefined4 local_80 [16];
  undefined4 local_40 [16];
  
  fVar1 = *(float *)(in_ECX + 0x58);
  fVar2 = *(float *)(in_ECX + 0x60);
  fVar6 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2);
  fVar1 = (float)((float10)fVar1 / fVar6);
  fpatan((float10)fVar2 / fVar6,(float10)fVar1);
  __ftol_result = __ftol();
  fVar7 = (float10)fpatan((float10)fVar1,extraout_ST0);
  *(undefined4 *)(in_ECX + 0x68) = __ftol_result;
  fVar6 = (float10)*(float *)(in_ECX + 0x58);
  fVar6 = (float10)fpatan((float10)*(float *)(in_ECX + 0x5c),
                          SQRT((float10)*(float *)(in_ECX + 0x60) *
                               (float10)*(float *)(in_ECX + 0x60) + fVar6 * fVar6));
  __ftol_result = __ftol();
  *(undefined4 *)(in_ECX + 100) = __ftol_result;
  puVar3 = (undefined4 *)FUN_004b3de0(local_100,-(float)fVar7);
  puVar4 = local_c0;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)FUN_004b3de0(local_100,(float)fVar7);
  puVar4 = local_80;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)FUN_004b3d80(local_100,(float)fVar6);
  puVar4 = (undefined4 *)(in_ECX + 0xac);
  puVar5 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = &DAT_0073b538;
  puVar5 = puVar4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)FUN_004b4110(local_100,puVar4,local_c0);
  puVar5 = puVar4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)FUN_004b4110(local_100,puVar4,local_40);
  puVar5 = puVar4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)FUN_004b4110(local_100,puVar4,local_80);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}


/* ==== 004aba30 FUN_004aba30 ==== */

void FUN_004aba30(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 *puVar3;
  int i;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int local_12c [8];
  undefined4 auStack_10c [12];
  undefined4 auStack_dc [12];
  undefined4 local_ac [16];
  undefined4 auStack_6c [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f49b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00558b35(local_12c,4,1,param_1);
  if (0x10 < local_12c[0]) {
    FUN_004c4150(s__s__d____Too_many_road_planes____005b0490,
                 s_C__Work_A2IV_Engine_prog_Rd_chun_005b0380,0xfc,local_12c[0],0x10);
  }
  i = 0;
  if (0 < local_12c[0]) {
    puVar3 = local_ac;
    do {
      uVar2 = FUN_004b30c0(param_1);
      *puVar3 = uVar2;
      i = i + 1;
      puVar3 = puVar3 + 1;
    } while (i < local_12c[0]);
  }
  FUN_00558b35(&iStack_134,4,1,param_1);
  if (0x18 < iStack_134) {
    FUN_004c4150(s__s__d____Too_many_land_planes____005b045c,
                 s_C__Work_A2IV_Engine_prog_Rd_chun_005b0380,0x10b,iStack_134,0x18);
  }
  i = 0;
  if (0 < iStack_134) {
    puVar3 = auStack_6c;
    do {
      uVar2 = FUN_004b30c0(param_1);
      *puVar3 = uVar2;
      i = i + 1;
      puVar3 = puVar3 + 1;
    } while (i < iStack_134);
  }
  FUN_00558b35(&iStack_138,4,1,param_1);
  if (0xc < iStack_138) {
    FUN_004c4150(s__s__d____Too_many_extra_planes___005b0428,
                 s_C__Work_A2IV_Engine_prog_Rd_chun_005b0380,0x11a,iStack_138,0xc);
  }
  i = 0;
  if (0 < iStack_138) {
    puVar3 = auStack_10c;
    do {
      uVar2 = FUN_004b30c0(param_1);
      *puVar3 = uVar2;
      i = i + 1;
      puVar3 = puVar3 + 1;
    } while (i < iStack_138);
  }
  FUN_00558b35(&iStack_130,4,1,param_1);
  if (0xc < iStack_130) {
    FUN_004c4150(s__s__d____Too_many_rail_planes____005b03f4,
                 s_C__Work_A2IV_Engine_prog_Rd_chun_005b0380,0x126,iStack_130,0xc);
  }
  i = 0;
  if (0 < iStack_130) {
    puVar3 = auStack_dc;
    do {
      uVar2 = FUN_004b30c0(param_1);
      *puVar3 = uVar2;
      i = i + 1;
      puVar3 = puVar3 + 1;
    } while (i < iStack_130);
  }
  uVar2 = FUN_0049df90(local_12c + 4,s_chunk__d_005b03e8,DAT_00715f48);
  uStack_4 = 0;
  FUN_004093c0(uVar2,0,0xffffffff);
  uStack_4 = 0xffffffff;
  if (local_12c[5] != 0) {
    cVar1 = *(char *)(local_12c[5] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_12c[5] + -1));
    }
    else {
      *(char *)(local_12c[5] + -1) = cVar1 + -1;
    }
  }
  local_12c[1] = 0x3f800000;
  local_12c[2] = 0x3f800000;
  local_12c[3] = 0x3f800000;
  local_12c[4] = 0x3f800000;
  local_12c[5] = 0x3f800000;
  local_12c[6] = 0x3f800000;
  uVar2 = FUN_004a4260(in_ECX,4,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  FUN_004a1050();
  FUN_004abf30(uVar2,local_ac,local_12c[0]);
  FUN_004abf30(uVar2,auStack_6c,iStack_134);
  FUN_004abf30(uVar2,auStack_10c,iStack_138);
  FUN_004abf30(uVar2,auStack_dc,iStack_130);
  FUN_004abdc0(uVar2);
  FUN_004ac020(uVar2);
  FUN_004ac310(local_ac,local_12c[0],auStack_6c,iStack_134,auStack_10c,iStack_138,auStack_dc,
               iStack_130);
  DAT_00715f48 = DAT_00715f48 + 1;
  if (DAT_0073b04c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__free_all__s__d_005b03a8,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xe6,&DAT_0073b054,DAT_0073b044,
                 &DAT_0073b06d);
  }
  i = 0;
  if (0 < DAT_0073b044) {
    do {
      i = i + 1;
      *(undefined1 *)(DAT_0073b050 + -1 + i) = 0;
    } while (i < DAT_0073b044);
  }
  DAT_0073b048 = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004abdc0 FUN_004abdc0 ==== */

void FUN_004abdc0(void)

{
  float *pfVar1;
  int in_ECX;
  int i;
  int *piVar2;
  float fStack00000004;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  i = *(int *)(in_ECX + 0xf0);
  if (0 < i) {
    piVar2 = (int *)(in_ECX + 0x104);
    do {
      pfVar1 = (float *)(DAT_0073b088 + *piVar2 * 0x60);
      local_2c = *(float *)(in_ECX + 0x38) + -25.0;
      local_30 = *pfVar1;
      local_28 = pfVar1[2];
      local_24 = pfVar1[3] + local_30;
      local_20 = pfVar1[4] + local_2c;
      fStack00000004 = pfVar1[5] + local_28;
      local_14 = *(float *)(in_ECX + 0x38) + 100.0;
      local_8 = pfVar1[4] + local_14;
      local_1c = fStack00000004;
      local_18 = local_30;
      local_10 = local_28;
      local_c = local_24;
      local_4 = fStack00000004;
      FUN_004a1180(&local_30,&local_24,&local_18);
      FUN_004a1180(&local_18,&local_24,&local_c);
      piVar2 = piVar2 + 1;
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 004abf30 FUN_004abf30 ==== */

void FUN_004abf30(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int j;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int i;
  undefined4 local_50 [8];
  undefined1 local_30 [4];
  undefined4 local_2c [11];
  
  i = (int)param_3;
  if (0 < (int)param_3) {
    param_3 = param_2;
    do {
      puVar1 = local_2c;
      param_2 = (int *)0x4;
      iVar2 = *param_3 * 0x8c;
      puVar3 = (undefined4 *)(iVar2 + DAT_0073b040);
      do {
        puVar4 = puVar3;
        puVar5 = local_50;
        for (j = 8; j != 0; j = j + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar1[-1] = local_50[0];
        *puVar1 = local_50[1];
        puVar1[1] = local_50[2];
        puVar1 = puVar1 + 3;
        param_2 = (int *)((int)param_2 + -1);
        puVar3 = puVar3 + 8;
      } while (param_2 != (int *)0x0);
      j = 2;
      do {
        FUN_004a1180(local_30 + *(short *)(iVar2 + 0x80 + DAT_0073b040) * 0xc,
                     local_30 + *(short *)(iVar2 + 0x82 + DAT_0073b040) * 0xc,
                     local_30 + *(short *)(iVar2 + 0x84 + DAT_0073b040) * 0xc);
        iVar2 = iVar2 + 6;
        j = j + -1;
      } while (j != 0);
      param_3 = param_3 + 1;
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 004ac020 FUN_004ac020 ==== */

void FUN_004ac020(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_f0 [4];
  char *local_ec;
  uint local_e8;
  undefined1 local_e0 [4];
  char *local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [12];
  undefined4 local_b8;
  int local_b0;
  int iStack_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_38;
  undefined1 local_1c;
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f4dc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a1430();
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_MapObject_005af204;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_MapObject_005af204;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_dc = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_dc = local_dc + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_dc = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_dc = local_dc + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0;
  piVar2 = (int *)FUN_004a43d0(local_e0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004a0210();
  local_4 = 1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_ChunkMaterial_005b04c4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_ChunkMaterial_005b04c4;
    pcVar4 = local_ec;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    local_ec[i] = '\0';
    local_e8 = i;
  }
  local_4._0_1_ = 2;
  local_b0 = FUN_004a4430(local_f0);
  local_4._0_1_ = 1;
  FUN_004028f0(1);
  if (local_b0 == 0) {
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = s_ChunkMaterial_005b04c4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar3 = s_ChunkMaterial_005b04c4;
      pcVar4 = local_ec;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar4 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
      local_ec[i] = '\0';
      local_e8 = i;
    }
    local_4._0_1_ = 3;
    local_b0 = FUN_004a4510(local_f0,0x3f800000,0x3dcccccd);
    local_4._0_1_ = 1;
    FUN_004028f0(1);
  }
  local_b8 = 1;
  local_1c = 1;
  FUN_004093c0(param_2,0,0xffffffff);
  if (local_50 == (undefined1 *)0x0) {
    local_50 = &DAT_0057629c;
  }
  FUN_004f5480(local_50);
  FUN_004a02a0(DAT_00715b08);
  local_38 = param_1;
  local_14 = (void *)0xffffffff;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  (**(code **)(*piVar2 + 4))(local_c4,&local_d0);
  pvStack_c = (void *)0xffffffff;
  if (iStack_58 != 0) {
    cVar1 = *(char *)(iStack_58 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_58 + -1));
    }
    else {
      *(char *)(iStack_58 + -1) = cVar1 + -1;
    }
  }
  iStack_58 = 0;
  local_54 = 0;
  local_50 = (undefined1 *)0x0;
  FUN_004f5510();
  ExceptionList = local_14;
  return;
}


/* ==== 004ac310 FUN_004ac310 ==== */

void FUN_004ac310(float *param_1,int *param_2,float *param_3,float *param_4,int *param_5,int param_6
                 ,int *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int in_ECX;
  int j;
  float *pfVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  float *local_68;
  float *local_64;
  int k;
  int i;
  undefined4 local_30 [4];
  undefined4 local_20 [8];
  
  i = (int)param_2;
  uVar9 = FUN_004ae030();
  *(undefined4 *)(in_ECX + 0x10) = uVar9;
  if (0 < (int)param_2) {
    local_68 = (float *)(in_ECX + 0x314);
    param_2 = (int *)param_1;
    local_64 = (float *)(in_ECX + 0x19c);
    do {
      puVar15 = local_30;
      param_1 = (float *)0x4;
      iVar10 = *param_2 * 0x8c;
      iVar16 = iVar10;
      do {
        puVar17 = (undefined4 *)(DAT_0073b040 + iVar16);
        puVar18 = local_20;
        for (j = 8; j != 0; j = j + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
        uVar9 = FUN_004ae2d0(local_20);
        *puVar15 = uVar9;
        iVar16 = iVar16 + 0x20;
        puVar15 = puVar15 + 1;
        param_1 = (float *)((int)param_1 + -1);
      } while (param_1 != (float *)0x0);
      param_1 = local_68;
      local_68 = local_68 + 2;
      pfVar14 = local_64 + 6;
      k = 2;
      do {
        iVar16 = FUN_004ae040(local_30[*(short *)(DAT_0073b040 + 0x80 + iVar10)],
                              local_30[*(short *)(DAT_0073b040 + 0x82 + iVar10)],
                              local_30[*(short *)(DAT_0073b040 + 0x84 + iVar10)]);
        iVar16 = iVar16 + -3;
        pfVar11 = (float *)FUN_004ae2a0(iVar16,1);
        pfVar12 = (float *)FUN_004ae2a0(iVar16,0);
        fVar1 = *pfVar11;
        fVar2 = *pfVar12;
        j = FUN_004ae2a0(iVar16,1);
        iVar13 = FUN_004ae2a0(iVar16,0);
        fVar5 = *(float *)(j + 4) - *(float *)(iVar13 + 4);
        j = FUN_004ae2a0(iVar16,1);
        iVar13 = FUN_004ae2a0(iVar16,0);
        fVar6 = *(float *)(j + 8) - *(float *)(iVar13 + 8);
        pfVar11 = (float *)FUN_004ae2a0(iVar16,2);
        pfVar12 = (float *)FUN_004ae2a0(iVar16,0);
        fVar3 = *pfVar11;
        fVar4 = *pfVar12;
        j = FUN_004ae2a0(iVar16,2);
        iVar13 = FUN_004ae2a0(iVar16,0);
        fVar7 = *(float *)(j + 4) - *(float *)(iVar13 + 4);
        j = FUN_004ae2a0(iVar16,2);
        iVar13 = FUN_004ae2a0(iVar16,0);
        fVar8 = *(float *)(j + 8) - *(float *)(iVar13 + 8);
        pfVar11 = local_64 + -2;
        *pfVar11 = fVar8 * fVar5 - fVar7 * fVar6;
        local_64[-1] = (fVar3 - fVar4) * fVar6 - fVar8 * (fVar1 - fVar2);
        fVar1 = fVar7 * (fVar1 - fVar2) - (fVar3 - fVar4) * fVar5;
        *local_64 = fVar1;
        fVar2 = SQRT(local_64[-1] * local_64[-1] + *pfVar11 * *pfVar11 + fVar1 * fVar1);
        *pfVar11 = *pfVar11 / fVar2;
        local_64[-1] = local_64[-1] / fVar2;
        *local_64 = fVar1 / fVar2;
        j = FUN_004ae2a0(iVar16,0);
        fVar1 = *(float *)(j + 8);
        fVar2 = *local_64;
        j = FUN_004ae2a0(iVar16,0);
        fVar3 = *(float *)(j + 4);
        fVar4 = local_64[-1];
        pfVar12 = (float *)FUN_004ae2a0(iVar16,0);
        local_64 = local_64 + 3;
        iVar10 = iVar10 + 6;
        *param_1 = *pfVar12 * *pfVar11 + fVar3 * fVar4 + fVar1 * fVar2;
        param_1 = param_1 + 1;
        k = k + -1;
      } while (k != 0);
      param_2 = param_2 + 1;
      i = i + -1;
      local_64 = pfVar14;
    } while (i != 0);
  }
  uVar9 = FUN_004ae030();
  *(undefined4 *)(in_ECX + 0x14) = uVar9;
  uVar9 = FUN_004ae090();
  *(undefined4 *)(in_ECX + 0x18) = uVar9;
  FUN_004c3fa0(s_Start__d_005b04dc,uVar9);
  if (0 < (int)param_4) {
    param_2 = (int *)param_3;
    k = (int)param_4;
    param_3 = (float *)(in_ECX + 0x39c);
    param_4 = (float *)(in_ECX + 0x5d4);
    do {
      puVar15 = local_30;
      param_1 = (float *)0x4;
      iVar10 = *param_2 * 0x8c;
      iVar16 = iVar10;
      do {
        puVar17 = (undefined4 *)(DAT_0073b040 + iVar16);
        puVar18 = local_20;
        for (j = 8; j != 0; j = j + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
        uVar9 = FUN_004ae220(local_20);
        *puVar15 = uVar9;
        iVar16 = iVar16 + 0x20;
        puVar15 = puVar15 + 1;
        param_1 = (float *)((int)param_1 + -1);
      } while (param_1 != (float *)0x0);
      param_1 = param_4;
      param_4 = param_4 + 2;
      pfVar14 = param_3 + 6;
      i = 2;
      do {
        iVar16 = FUN_004ae0a0(local_30[*(short *)(DAT_0073b040 + 0x80 + iVar10)],
                              local_30[*(short *)(DAT_0073b040 + 0x82 + iVar10)],
                              local_30[*(short *)(DAT_0073b040 + 0x84 + iVar10)]);
        iVar16 = iVar16 + -3;
        pfVar11 = (float *)FUN_004ae1f0(iVar16,1);
        pfVar12 = (float *)FUN_004ae1f0(iVar16,0);
        fVar1 = *pfVar11;
        fVar2 = *pfVar12;
        j = FUN_004ae1f0(iVar16,1);
        iVar13 = FUN_004ae1f0(iVar16,0);
        fVar5 = *(float *)(j + 4) - *(float *)(iVar13 + 4);
        j = FUN_004ae1f0(iVar16,1);
        iVar13 = FUN_004ae1f0(iVar16,0);
        fVar6 = *(float *)(j + 8) - *(float *)(iVar13 + 8);
        pfVar11 = (float *)FUN_004ae1f0(iVar16,2);
        pfVar12 = (float *)FUN_004ae1f0(iVar16,0);
        fVar3 = *pfVar11;
        fVar4 = *pfVar12;
        j = FUN_004ae1f0(iVar16,2);
        iVar13 = FUN_004ae1f0(iVar16,0);
        fVar7 = *(float *)(j + 4) - *(float *)(iVar13 + 4);
        j = FUN_004ae1f0(iVar16,2);
        iVar13 = FUN_004ae1f0(iVar16,0);
        fVar8 = *(float *)(j + 8) - *(float *)(iVar13 + 8);
        pfVar11 = param_3 + -2;
        *pfVar11 = fVar8 * fVar5 - fVar7 * fVar6;
        param_3[-1] = (fVar3 - fVar4) * fVar6 - fVar8 * (fVar1 - fVar2);
        fVar1 = fVar7 * (fVar1 - fVar2) - (fVar3 - fVar4) * fVar5;
        *param_3 = fVar1;
        fVar2 = SQRT(param_3[-1] * param_3[-1] + *pfVar11 * *pfVar11 + fVar1 * fVar1);
        *pfVar11 = *pfVar11 / fVar2;
        param_3[-1] = param_3[-1] / fVar2;
        *param_3 = fVar1 / fVar2;
        j = FUN_004ae1f0(iVar16,0);
        fVar1 = *(float *)(j + 4);
        fVar2 = param_3[-1];
        j = FUN_004ae1f0(iVar16,0);
        fVar3 = *(float *)(j + 8);
        fVar4 = *param_3;
        pfVar12 = (float *)FUN_004ae1f0(iVar16,0);
        param_3 = param_3 + 3;
        iVar10 = iVar10 + 6;
        *param_1 = *pfVar12 * *pfVar11 + fVar3 * fVar4 + fVar1 * fVar2;
        param_1 = param_1 + 1;
        i = i + -1;
      } while (i != 0);
      param_2 = param_2 + 1;
      k = k + -1;
      param_3 = pfVar14;
    } while (k != 0);
  }
  uVar9 = FUN_004ae090();
  *(undefined4 *)(in_ECX + 0x1c) = uVar9;
  FUN_004c3fa0(s_End__d_005b04d4,uVar9);
  uVar9 = FUN_004ae110();
  *(undefined4 *)(in_ECX + 0x20) = uVar9;
  if (0 < param_8) {
    param_4 = (float *)(in_ECX + 0x7b4);
    param_2 = param_7;
    param_7 = (int *)param_8;
    param_3 = (float *)(in_ECX + 0x69c);
    do {
      puVar15 = local_30;
      param_1 = (float *)0x4;
      iVar10 = *param_2 * 0x8c;
      iVar16 = iVar10;
      do {
        puVar17 = (undefined4 *)(DAT_0073b040 + iVar16);
        puVar18 = local_20;
        for (j = 8; j != 0; j = j + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
        uVar9 = FUN_004ae370(local_20);
        *puVar15 = uVar9;
        iVar16 = iVar16 + 0x20;
        puVar15 = puVar15 + 1;
        param_1 = (float *)((int)param_1 + -1);
      } while (param_1 != (float *)0x0);
      param_1 = param_4;
      param_4 = param_4 + 2;
      pfVar14 = param_3 + 6;
      param_8 = 2;
      do {
        iVar16 = FUN_004ae120(local_30[*(short *)(DAT_0073b040 + 0x80 + iVar10)],
                              local_30[*(short *)(DAT_0073b040 + 0x82 + iVar10)],
                              local_30[*(short *)(DAT_0073b040 + 0x84 + iVar10)]);
        iVar16 = iVar16 + -3;
        pfVar11 = (float *)FUN_004ae340(iVar16,1);
        pfVar12 = (float *)FUN_004ae340(iVar16,0);
        fVar1 = *pfVar11;
        fVar2 = *pfVar12;
        j = FUN_004ae340(iVar16,1);
        iVar13 = FUN_004ae340(iVar16,0);
        fVar5 = *(float *)(j + 4) - *(float *)(iVar13 + 4);
        j = FUN_004ae340(iVar16,1);
        iVar13 = FUN_004ae340(iVar16,0);
        fVar6 = *(float *)(j + 8) - *(float *)(iVar13 + 8);
        pfVar11 = (float *)FUN_004ae340(iVar16,2);
        pfVar12 = (float *)FUN_004ae340(iVar16,0);
        fVar3 = *pfVar11;
        fVar4 = *pfVar12;
        j = FUN_004ae340(iVar16,2);
        iVar13 = FUN_004ae340(iVar16,0);
        fVar7 = *(float *)(j + 4) - *(float *)(iVar13 + 4);
        j = FUN_004ae340(iVar16,2);
        iVar13 = FUN_004ae340(iVar16,0);
        fVar8 = *(float *)(j + 8) - *(float *)(iVar13 + 8);
        pfVar11 = param_3 + -2;
        *pfVar11 = fVar8 * fVar5 - fVar7 * fVar6;
        param_3[-1] = (fVar3 - fVar4) * fVar6 - fVar8 * (fVar1 - fVar2);
        fVar1 = fVar7 * (fVar1 - fVar2) - (fVar3 - fVar4) * fVar5;
        *param_3 = fVar1;
        fVar2 = SQRT(param_3[-1] * param_3[-1] + *pfVar11 * *pfVar11 + fVar1 * fVar1);
        *pfVar11 = *pfVar11 / fVar2;
        param_3[-1] = param_3[-1] / fVar2;
        *param_3 = fVar1 / fVar2;
        j = FUN_004ae340(iVar16,0);
        fVar1 = *(float *)(j + 8);
        fVar2 = *param_3;
        j = FUN_004ae340(iVar16,0);
        fVar3 = *(float *)(j + 4);
        fVar4 = param_3[-1];
        pfVar12 = (float *)FUN_004ae340(iVar16,0);
        param_3 = param_3 + 3;
        iVar10 = iVar10 + 6;
        *param_1 = *pfVar12 * *pfVar11 + fVar3 * fVar4 + fVar1 * fVar2;
        param_1 = param_1 + 1;
        param_8 = param_8 + -1;
      } while (param_8 != 0);
      param_2 = param_2 + 1;
      param_7 = (int *)((int)param_7 + -1);
      param_3 = pfVar14;
    } while (param_7 != (int *)0x0);
  }
  uVar9 = FUN_004ae110();
  *(undefined4 *)(in_ECX + 0x24) = uVar9;
  uVar9 = FUN_004ae170();
  *(undefined4 *)(in_ECX + 0x28) = uVar9;
  if (0 < param_6) {
    param_4 = (float *)(in_ECX + 0x934);
    param_2 = param_5;
    param_7 = (int *)param_6;
    param_3 = (float *)(in_ECX + 0x81c);
    do {
      puVar15 = local_30;
      param_1 = (float *)0x4;
      iVar10 = *param_2 * 0x8c;
      iVar16 = iVar10;
      do {
        puVar17 = (undefined4 *)(DAT_0073b040 + iVar16);
        puVar18 = local_20;
        for (j = 8; j != 0; j = j + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
        uVar9 = FUN_004ae410(local_20);
        *puVar15 = uVar9;
        iVar16 = iVar16 + 0x20;
        puVar15 = puVar15 + 1;
        param_1 = (float *)((int)param_1 + -1);
      } while (param_1 != (float *)0x0);
      param_1 = param_4;
      param_4 = param_4 + 2;
      pfVar14 = param_3 + 6;
      param_8 = 2;
      do {
        iVar16 = FUN_004ae180(local_30[*(short *)(DAT_0073b040 + 0x80 + iVar10)],
                              local_30[*(short *)(DAT_0073b040 + 0x82 + iVar10)],
                              local_30[*(short *)(DAT_0073b040 + 0x84 + iVar10)]);
        iVar16 = iVar16 + -3;
        pfVar11 = (float *)FUN_004ae3e0(iVar16,1);
        pfVar12 = (float *)FUN_004ae3e0(iVar16,0);
        fVar1 = *pfVar11;
        fVar2 = *pfVar12;
        j = FUN_004ae3e0(iVar16,1);
        iVar13 = FUN_004ae3e0(iVar16,0);
        fVar5 = *(float *)(j + 4) - *(float *)(iVar13 + 4);
        j = FUN_004ae3e0(iVar16,1);
        iVar13 = FUN_004ae3e0(iVar16,0);
        fVar6 = *(float *)(j + 8) - *(float *)(iVar13 + 8);
        pfVar11 = (float *)FUN_004ae3e0(iVar16,2);
        pfVar12 = (float *)FUN_004ae3e0(iVar16,0);
        fVar3 = *pfVar11;
        fVar4 = *pfVar12;
        j = FUN_004ae3e0(iVar16,2);
        iVar13 = FUN_004ae3e0(iVar16,0);
        fVar7 = *(float *)(j + 4) - *(float *)(iVar13 + 4);
        j = FUN_004ae3e0(iVar16,2);
        iVar13 = FUN_004ae3e0(iVar16,0);
        fVar8 = *(float *)(j + 8) - *(float *)(iVar13 + 8);
        pfVar11 = param_3 + -2;
        *pfVar11 = fVar8 * fVar5 - fVar7 * fVar6;
        param_3[-1] = (fVar3 - fVar4) * fVar6 - fVar8 * (fVar1 - fVar2);
        fVar1 = fVar7 * (fVar1 - fVar2) - (fVar3 - fVar4) * fVar5;
        *param_3 = fVar1;
        fVar2 = SQRT(param_3[-1] * param_3[-1] + *pfVar11 * *pfVar11 + fVar1 * fVar1);
        *pfVar11 = *pfVar11 / fVar2;
        param_3[-1] = param_3[-1] / fVar2;
        *param_3 = fVar1 / fVar2;
        j = FUN_004ae3e0(iVar16,0);
        fVar1 = *(float *)(j + 4);
        fVar2 = param_3[-1];
        j = FUN_004ae3e0(iVar16,0);
        fVar3 = *(float *)(j + 8);
        fVar4 = *param_3;
        pfVar12 = (float *)FUN_004ae3e0(iVar16,0);
        param_3 = param_3 + 3;
        iVar10 = iVar10 + 6;
        *param_1 = *pfVar12 * *pfVar11 + fVar3 * fVar4 + fVar1 * fVar2;
        param_1 = param_1 + 1;
        param_8 = param_8 + -1;
      } while (param_8 != 0);
      param_2 = param_2 + 1;
      param_7 = (int *)((int)param_7 + -1);
      param_3 = pfVar14;
    } while (param_7 != (int *)0x0);
  }
  uVar9 = FUN_004ae170();
  *(undefined4 *)(in_ECX + 0x2c) = uVar9;
  return;
}


