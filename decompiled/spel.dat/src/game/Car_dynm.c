/* spel.dat — game/Car_dynm.cpp: 14 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00427e60 FUN_00427e60 ==== */

float10 FUN_00427e60(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0x3dcccccd;
  if (param_2 < 2) {
    param_1 = param_1 * 0xf0;
    FUN_004f3f20(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10 + DAT_00715e50) + 8) + 0xa4),
                 &local_20,&local_10);
    local_34 = local_c;
    local_38 = local_10;
    local_30 = local_8;
    pfVar1 = (float *)FUN_004aa060(local_2c,DAT_0073b0d0 +
                                            *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 + 0x10,
                                   &local_38);
    pfVar2 = (float *)(param_1 + 0xc4 + DAT_00715e50);
    if (*pfVar2 == 0.0) {
      fVar3 = (float10)0.0;
    }
    else {
      fVar3 = (float10)fpatan((float10)*pfVar1 / (float10)*pfVar2,(float10)1);
      fVar3 = (float10)param_3 * (float10)0.004 - fVar3;
    }
  }
  else {
    param_1 = param_1 * 0xf0;
    FUN_004f3f20(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10 + DAT_00715e50) + 8) + 0xa4),
                 &local_20,&local_10);
    local_38 = local_10;
    local_34 = local_c;
    local_30 = local_8;
    pfVar1 = (float *)FUN_004aa060(local_2c,DAT_0073b0d0 +
                                            *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 + 0x10,
                                   &local_38);
    pfVar2 = (float *)(param_1 + 0xc4 + DAT_00715e50);
    if (*(float *)(param_1 + 0xc4 + DAT_00715e50) == 0.0) {
      fVar3 = (float10)0.0;
    }
    else {
      fVar3 = (float10)fpatan((float10)*pfVar1 / (float10)*pfVar2,(float10)1);
      fVar3 = -fVar3;
    }
  }
  if (*pfVar2 < 0.0) {
    fVar3 = -fVar3;
  }
  return fVar3;
}


/* ==== 00428040 FUN_00428040 ==== */

float10 __thiscall FUN_00428040(undefined4 param_1,int param_2,int param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_3 < 2) {
    iVar2 = DAT_00715e50 + param_2 * 0xf0;
    pfVar1 = (float *)(iVar2 + 0xc4);
    if (*(float *)(iVar2 + 0xc4) == 0.0) {
      fVar3 = (float10)0.0;
    }
    else {
      fVar3 = (float10)fpatan(((float10)*(float *)(iVar2 + 0xbc) -
                              (float10)*(float *)(iVar2 + 0xcc) * (float10)DAT_006b2ae0) /
                              (float10)*pfVar1,(float10)1);
      fVar3 = (float10)0.0 * (float10)param_4 * (float10)0.01 - fVar3;
    }
  }
  else {
    iVar2 = param_2 * 0xf0 + DAT_00715e50;
    pfVar1 = (float *)(iVar2 + 0xc4);
    if (*(float *)(iVar2 + 0xc4) == 0.0) {
      fVar3 = (float10)0.0;
    }
    else {
      fVar3 = (float10)fpatan(((float10)*(float *)(iVar2 + 0xcc) * (float10)DAT_006b2ae4 +
                              (float10)*(float *)(iVar2 + 0xbc)) / (float10)*pfVar1,(float10)1);
      fVar3 = -fVar3;
    }
  }
  if (*pfVar1 < 0.0) {
    fVar3 = -fVar3;
  }
  return fVar3;
}


/* ==== 00428120 FUN_00428120 ==== */

float10 FUN_00428120(int param_1,int param_2,char param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)1.0 / (float10)*(float *)(param_2 * 0xf0 + 0xb0 + DAT_00715e50);
  if (param_1 < 2) {
    return fVar1 * (float10)DAT_006b2ad4 * (float10)9.8;
  }
  fVar1 = fVar1 * (float10)0.0 * (float10)9.8;
  if (param_3 != '\0') {
    fVar1 = fVar1 * (float10)0.6;
  }
  return fVar1;
}


/* ==== 00428170 FUN_00428170 ==== */

void FUN_00428170(float *param_1,undefined4 param_2,float param_3,int param_4,float param_5,
                 undefined4 param_6)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_14;
  float local_10;
  
  if ((param_4 == 0) || (param_4 == 1)) {
    local_10 = *(float *)(&DAT_006b2b90 + DAT_006fbb44 * 4);
    local_14 = *(float *)(&DAT_006b2b9c + DAT_006fbb44 * 4);
    fVar1 = *(float *)(&DAT_006b2ba8 + DAT_006fbb44 * 4);
  }
  else {
    local_10 = *(float *)(&DAT_006b2b6c + DAT_006fbb44 * 4);
    local_14 = *(float *)(&DAT_006b2b78 + DAT_006fbb44 * 4);
    fVar1 = *(float *)(&DAT_006b2b84 + DAT_006fbb44 * 4);
  }
  fVar2 = (float10)FUN_00428120(param_4,param_2,param_6);
  fVar3 = (float10)fsin((float10)fVar1 * (float10)param_3);
  fVar4 = (float10)fcos((float10)(param_5 * 0.0 * 0.01));
  *param_1 = (float)(fVar4 * ((float10)local_10 * (float10)param_3 + fVar3 * (float10)local_14) *
                             fVar2 * (float10)0.25);
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}


/* ==== 00428250 FUN_00428250 ==== */

void FUN_00428250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (param_1 == DAT_006fba58) {
    FUN_004a97f0(param_1 * 0xf0 + DAT_00715e50,param_2,param_3,param_4,0,0,DAT_006b2ae0);
    FUN_004a97f0(param_1 * 0xf0 + DAT_00715e50,param_5,param_6,param_7,0,0,-DAT_006b2ae4);
  }
  return;
}


/* ==== 00428320 FUN_00428320 ==== */

void FUN_00428320(undefined4 param_1,uint param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float10 fVar4;
  undefined4 uVar5;
  longlong lVar6;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 local_14 [16];
  float this_val;
  
  lVar6 = (ulonglong)param_2 << 0x20;
  uVar5 = param_1;
  fVar4 = (float10)FUN_00428040();
  pfVar3 = (float *)FUN_00428170(&local_20,param_1,(float)fVar4,0,param_2,param_3,uVar5,lVar6);
  fVar1 = *pfVar3;
  this_val = pfVar3[1];
  fVar2 = pfVar3[2];
  fVar4 = (float10)FUN_00428040(this_val,param_1,2,param_2);
  pfVar3 = (float *)FUN_00428170(local_14,param_1,(float)fVar4,2,param_2,param_3);
  local_20 = *pfVar3 * 0.01;
  local_1c = pfVar3[1];
  local_18 = pfVar3[2];
  FUN_00428250(param_1,fVar1 * 0.01,this_val,fVar2,local_20,local_1c,local_18);
  FUN_004c5930(0,0,0x78,s_frontSteer___f__f__f__0059652c,(double)(fVar1 * 0.01),(double)this_val,
               (double)fVar2);
  FUN_004c5930(0,0,0xa0,s_rearSteer___f__f__f__00596544,(double)local_20,(double)local_1c,
               (double)local_18);
  return;
}


/* ==== 00428950 FUN_00428950 ==== */

void FUN_00428950(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  param_1 = param_1 * 0xf0;
  fVar2 = 1.0 / *(float *)(param_1 + 0xb0 + DAT_00715e50);
  if (0.9 <= *(float *)(DAT_0073b0d0 + *(int *)(param_1 + DAT_00715e50 + 0x24) * 0xa9 + 0x24)) {
    iVar3 = FUN_004a8c50();
    iVar1 = DAT_0073b5c8 + iVar3 * 0xac;
    local_24 = (*(float *)(DAT_0073b5c8 + 0x1c + iVar3 * 0xac) +
               *(float *)(DAT_0073b5c8 + 0x4c + iVar3 * 0xac)) * 0.5;
    local_20 = (*(float *)(iVar1 + 0x20) + *(float *)(iVar1 + 0x50)) * 0.5;
    local_1c = (*(float *)(iVar1 + 0x24) + *(float *)(iVar1 + 0x54)) * 0.5;
    local_c = *(float *)(iVar1 + 0x40) + *(float *)(iVar1 + 0x10);
    local_8 = *(float *)(iVar1 + 0x44) + *(float *)(iVar1 + 0x14);
    local_4 = *(float *)(iVar1 + 0x48) + *(float *)(iVar1 + 0x18);
    local_18 = local_c * 0.5;
    local_14 = local_8 * 0.5;
    local_10 = local_4 * 0.5;
    if (0.0 < param_2[1]) {
      local_28 = fVar2 * 0.8;
    }
    if (0.0 < param_2[2]) {
      local_28 = fVar2 * -0.25;
    }
    local_2c = 0.0;
    local_30 = -(fVar2 * 0.0033333334 * *param_2) * 0.1;
    FUN_004a2000(*(undefined4 *)(param_1 + 0x10 + DAT_00715e50),&local_30);
    local_28 = 0.0;
    local_30 = -(fVar2 * *(float *)(param_1 + 0xbc + DAT_00715e50));
    pfVar4 = (float *)FUN_004b42a0(&local_c,&local_30,
                                   DAT_0073b0d0 + *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 +
                                   0x10);
    local_30 = *pfVar4;
    local_2c = pfVar4[1];
    local_28 = pfVar4[2];
    fVar5 = local_10;
    fVar6 = local_18;
    fVar7 = local_14;
    if (*(float *)(param_1 + DAT_00715e50 + 0xbc) < 0.0) {
      fVar5 = local_1c;
      fVar6 = local_24;
      fVar7 = local_20;
    }
    FUN_004a9830(param_1 + DAT_00715e50,*pfVar4,pfVar4[1],pfVar4[2],fVar6,fVar7,fVar5);
    local_30 = 0.0;
    local_28 = 0.0;
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 0.0;
    local_2c = -fVar2 * ABS(*(float *)(param_1 + 0xc4 + DAT_00715e50)) * 0.12;
    FUN_004a9830(param_1 + DAT_00715e50,0,local_2c,0,0,0,0);
  }
  return;
}


/* ==== 00428c70 FUN_00428c70 ==== */

void FUN_00428c70(int param_1,float *this_val)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 this_val_2;
  int iVar5;
  int iVar6;
  int i;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 local_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  float *this_val_3;
  
  this_val_3 = this_val;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a150;
  pvStack_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,0);
  local_2c[0] = (undefined1)param_1;
  local_4 = 0;
  FUN_004028f0(local_2c,0);
  local_4._0_1_ = 1;
  iVar7 = param_1 * 0xf0;
  FUN_004a7bd0(iVar7 + DAT_00715e50);
  this_val_2 = FUN_0049df90((undefined1 *)&local_3c,s__s__d_WheelMaterial_0059655c);
  local_4._0_1_ = 2;
  FUN_004093c0(local_1c,this_val_2,0,0xffffffff);
  local_4._0_1_ = 1;
  FUN_004028f0(&local_3c,1);
  FUN_004a7bd0(iVar7 + DAT_00715e50);
  this_val_2 = FUN_0049df90((undefined1 *)&local_3c,s__s__d_WheelMaterial_00596570);
  local_4._0_1_ = 3;
  FUN_004093c0(local_2c,this_val_2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(&local_3c,1);
  iVar5 = FUN_004a4430(&DAT_00715f58,local_1c);
  iVar6 = FUN_004a4430(&DAT_00715f58,local_2c);
  if ((int)this_val[10] < 0) {
    FUN_004c4150(s___s___d_No_dynamics_type_specifi_005965a8,
                 s_C__Work_A2IV_Game_prog_Car_dynm__00596584,0x38e);
  }
  puVar8 = (undefined4 *)(&DAT_006c1c68 + (int)this_val[10] * 0xf0);
  puVar9 = &DAT_006b2ad0;
  for (i = 0x3c; i != 0; i = i + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  fVar2 = *this_val;
  fVar10 = (float10)FUN_00427e60(param_1,0,fVar2);
  pfVar1 = this_val + 6;
  fVar3 = *this_val;
  this_val._1_3_ = (undefined3)((uint)fVar2 >> 8);
  this_val = (float *)CONCAT31(this_val._1_3_,*(undefined1 *)pfVar1);
  fVar10 = (float10)FUN_00427dd0(param_1,(float)fVar10,0,fVar3,this_val);
  fVar10 = ABS(fVar10) + (float10)0.8;
  if (((float10)2.0 < fVar10) && (*(char *)(this_val_3 + 6) == '\x01')) {
    fVar10 = (float10)2.0;
  }
  *(double *)(iVar5 + 0x10) = (double)fVar10;
  fVar10 = (float10)FUN_00427e60(param_1,2,*this_val_3);
  this_val = (float *)CONCAT31(this_val._1_3_,*(undefined1 *)(this_val_3 + 6));
  fVar10 = (float10)FUN_00427dd0(param_1,(float)fVar10,2,*this_val_3,this_val);
  fVar10 = ABS(fVar10) + (float10)0.8;
  if (((float10)2.0 < fVar10) && (*(char *)(this_val_3 + 6) == '\x01')) {
    fVar10 = (float10)2.0;
  }
  *(double *)(iVar6 + 0x10) = (double)fVar10;
  FUN_004f21e0(*(undefined4 *)(*(int *)(iVar7 + 0x10 + DAT_00715e50) + 8));
  this_val_2 = *(undefined4 *)(iVar7 + 0x10 + DAT_00715e50);
  FUN_004a2f70(this_val_2,this_val_3[2],this_val_3[1],*(undefined1 *)(this_val_3 + 6),
               *(undefined1 *)((int)this_val_3 + 0x19));
  FUN_004a31d0(this_val_2,*this_val_3 * 0.006666667,*(undefined1 *)(this_val_3 + 6));
  if (param_1 == DAT_006fba58) {
    FUN_004c5e40(0x4f);
  }
  FUN_00403170(this_val_3,this_val_2);
  if (((*(char *)((int)this_val_3 + 0x19) == '\x01') &&
      (*(float *)(iVar7 + 0xc4 + DAT_00715e50) < 60.0)) &&
     (cVar4 = FUN_004031c0(this_val_3), cVar4 == '\0')) {
    fVar2 = *(float *)(iVar7 + 0xc4 + DAT_00715e50);
    fVar3 = *(float *)(iVar7 + 0xb0 + DAT_00715e50);
    fVar10 = (float10)FUN_004a6800(&DAT_007128b0);
    local_3c = 0;
    uStack_38 = 0;
    fStack_34 = (float)(fVar10 * (float10)((1.0 / fVar3) * (ABS(fVar2) * 0.025 + 0.5)) *
                       (float10)25.0);
    FUN_004a2000(this_val_2,&local_3c);
  }
  if (iStack_28 != 0) {
    cVar4 = *(char *)(iStack_28 + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_0054b339(iStack_28 + -1);
    }
    else {
      *(char *)(iStack_28 + -1) = cVar4 + -1;
    }
  }
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_18 != 0) {
    cVar4 = *(char *)(iStack_18 + -1);
    if ((cVar4 != '\0') && (cVar4 != -1)) {
      *(char *)(iStack_18 + -1) = cVar4 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(iStack_18 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00429080 FUN_00429080 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429080(float param_1)

{
  DAT_006c2f28 = 1;
  if (50000.0 < param_1) {
    _DAT_006c2f2c = 50000.0;
    return;
  }
  if (param_1 < 0.0) {
    _DAT_006c2f2c = 0.0;
    return;
  }
  _DAT_006c2f2c = param_1;
  return;
}


/* ==== 004290d0 FUN_004290d0 ==== */

void FUN_004290d0(void)

{
  DAT_006c2f28 = 0;
  return;
}


/* ==== 004290e0 FUN_004290e0 ==== */

undefined1 FUN_004290e0(void)

{
  return DAT_006c2f28;
}


/* ==== 004290f0 FUN_004290f0 ==== */

void FUN_004290f0(void)

{
  char cVar1;
  undefined1 *puVar2;
  FILE *file;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a162;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049df90(local_1c,PTR_s_VDYNS_DAT_005962ec);
  local_4 = 0;
  puVar2 = local_18;
  if (local_18 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  file = (FILE *)FUN_005589a5(puVar2,s_rb_005965e0);
  if (file == (FILE *)0x0) {
    puVar2 = local_18;
    if (local_18 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    FUN_004c4150(s___s___d_Could_not_open_file__s_00596608,
                 s_C__Work_A2IV_Game_prog_Car_dynm__005965e4,0x426,puVar2);
  }
  else {
    FUN_00558b35();
    FUN_005588fd(file);
  }
  if (local_18 != (undefined1 *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00429210 FUN_00429210 ==== */

void FUN_00429210(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00429220 FUN_00429220 ==== */

void FUN_00429220(void)

{
  FUN_005584e0(&LAB_00429230);
  return;
}


