/* spel.dat — dx3d/D3dutils.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b3850 FUN_004b3850 ==== */

void FUN_004b3850(uint size)

{
  uint *operator_new_result;
  void *operator_new_result_2;
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f5bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (in_ECX[3] != 0) {
    ExceptionList = &pvStack_c;
    if (in_ECX[3] == 1) {
      ExceptionList = &pvStack_c;
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,
                   in_ECX[1]);
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_005586c5(iVar1,0x60,*(undefined4 *)(iVar1 + -4),FUN_0051ed40);
        FUN_0054b339(iVar1 + -4);
      }
    }
    if (in_ECX[3] != 0) {
      FUN_0054b339(in_ECX[4]);
      in_ECX[3] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,(int)in_ECX + 0x2d,in_ECX + 5,
                 size);
  }
  operator_new_result = operator_new(size * 0x60 + 4);
  uStack_4 = 0;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0x60,size,&LAB_004b3830,FUN_0051ed40);
  }
  uStack_4 = 0xffffffff;
  *in_ECX = (int)puVar3;
  in_ECX[1] = size;
  in_ECX[2] = 0;
  operator_new_result_2 = operator_new(size);
  in_ECX[4] = (int)operator_new_result_2;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)in_ECX + 0x2d,in_ECX + 5,in_ECX[1]);
  in_ECX[3] = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + in_ECX[4]) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004b39d0 FUN_004b39d0 ==== */

void FUN_004b39d0(float *param_1,float param_2,float param_3,float param_4)

{
  int i;
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_40 [5];
  float local_2c;
  float local_18;
  float local_14;
  float local_8;
  undefined4 local_4;
  
  i = 0x10;
  fVar3 = (float10)fcos((float10)param_4 * (float10)0.5);
  pfVar1 = (float *)&DAT_0073b580;
  pfVar2 = local_40;
  for (; i != 0; i = i + -1) {
    *pfVar2 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  i = 0x10;
  local_4 = 0;
  fVar4 = (float10)fsin((float10)param_4 * (float10)0.5);
  fVar5 = (fVar4 * (float10)param_3) / ((float10)param_3 - (float10)param_2);
  local_40[0] = (float)fVar3;
  local_2c = (float)fVar3;
  local_18 = (float)fVar5;
  local_8 = (float)-((float10)param_2 * fVar5);
  local_14 = (float)fVar4;
  pfVar1 = local_40;
  for (; i != 0; i = i + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b3a60 FUN_004b3a60 ==== */

void FUN_004b3a60(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  int i;
  float *pfVar6;
  float10 fVar7;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  pfVar4 = (float *)&DAT_0073b538;
  pfVar6 = local_cc;
  for (i = 0x10; i != 0; i = i + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar6 = pfVar6 + 1;
  }
  if (((*param_3 == *param_2) && (param_3[1] == param_2[1])) && (param_3[2] == param_2[2])) {
    FUN_004c4150(s__s__d____Divide_by_zero__at__fro_005b0e5c,s_D__Work_DX3D_D3dutils_cpp_005b0e80,
                 0x4e);
  }
  pfVar4 = (float *)FUN_004066c0(*param_3 - *param_2,param_3[1] - param_2[1],param_3[2] - param_2[2]
                                );
  fStack_d8 = *pfVar4;
  fStack_d4 = pfVar4[1];
  fStack_d0 = pfVar4[2];
  fVar7 = (float10)FUN_0041e120(&fStack_d8);
  pfVar4 = (float *)FUN_00467320(auStack_8c,&fStack_d8,(float)SQRT(fVar7));
  fVar1 = *pfVar4;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  fStack_fc = fVar3 * param_4[1] - fVar2 * param_4[2];
  fStack_f8 = fVar1 * param_4[2] - fVar3 * *param_4;
  fStack_f4 = fVar2 * *param_4 - fVar1 * param_4[1];
  fStack_f0 = fStack_f4 * fVar2 - fStack_f8 * fVar3;
  fStack_ec = fStack_fc * fVar3 - fStack_f4 * fVar1;
  fStack_e8 = fStack_f8 * fVar1 - fStack_fc * fVar2;
  local_e4 = fStack_fc;
  fStack_e0 = fStack_f8;
  fStack_dc = fStack_f4;
  fStack_d8 = fStack_f0;
  fStack_d4 = fStack_ec;
  fStack_d0 = fStack_e8;
  fVar7 = (float10)FUN_0041e120(&fStack_fc);
  pfVar4 = (float *)FUN_00467320(auStack_8c,&fStack_fc,(float)SQRT(fVar7));
  fStack_fc = *pfVar4;
  fStack_f8 = pfVar4[1];
  fStack_f4 = pfVar4[2];
  fVar7 = (float10)FUN_0041e120(&fStack_f0);
  pfVar4 = (float *)FUN_00467320(auStack_8c,&fStack_f0,(float)SQRT(fVar7));
  fStack_f0 = *pfVar4;
  fStack_ec = pfVar4[1];
  fStack_e8 = pfVar4[2];
  local_cc[0] = fStack_fc;
  fStack_9c = -(fStack_f4 * param_2[2] + fStack_fc * *param_2 + fStack_f8 * param_2[1]);
  fStack_bc = fStack_f8;
  fStack_ac = fStack_f4;
  local_cc[1] = fStack_f0;
  fStack_b8 = fStack_ec;
  fStack_a8 = fStack_e8;
  local_cc[2] = fVar1;
  fStack_b4 = fVar2;
  fStack_98 = -(fStack_e8 * param_2[2] + fStack_f0 * *param_2 + fStack_ec * param_2[1]);
  fStack_a4 = fVar3;
  fStack_94 = -(fVar3 * param_2[2] + fVar1 * *param_2 + fVar2 * param_2[1]);
  if (param_5 != 0.0) {
    uVar5 = FUN_004b3e40(auStack_80,-param_5,local_cc);
    pfVar4 = (float *)FUN_004b4110(auStack_40,uVar5);
    pfVar6 = local_cc;
    for (i = 0x10; i != 0; i = i + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  pfVar4 = local_cc;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b3d80 FUN_004b3d80 ==== */

void FUN_004b3d80(undefined4 *param_1,float param_2)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_40 [5];
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  
  fVar3 = (float10)fcos((float10)param_2);
  puVar1 = &DAT_0073b538;
  puVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  i = 0x10;
  fVar4 = (float10)fsin((float10)param_2);
  local_2c = (float)fVar3;
  local_18 = (float)fVar3;
  local_1c = (float)fVar4;
  local_28 = -(float)fVar4;
  puVar1 = local_40;
  for (; i != 0; i = i + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b3de0 FUN_004b3de0 ==== */

void FUN_004b3de0(float *param_1,float param_2)

{
  int i;
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_40 [8];
  float local_20;
  float local_18;
  
  fVar3 = (float10)fcos((float10)param_2);
  pfVar1 = (float *)&DAT_0073b538;
  pfVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *pfVar2 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  i = 0x10;
  fVar4 = (float10)fsin((float10)param_2);
  local_40[0] = (float)fVar3;
  local_18 = (float)fVar3;
  local_40[2] = (float)fVar4;
  local_20 = -(float)fVar4;
  pfVar1 = local_40;
  for (; i != 0; i = i + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b3e40 FUN_004b3e40 ==== */

void FUN_004b3e40(float *param_1,float param_2)

{
  int i;
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_40 [4];
  float local_30;
  float local_2c;
  
  fVar3 = (float10)fcos((float10)param_2);
  pfVar1 = (float *)&DAT_0073b538;
  pfVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *pfVar2 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  i = 0x10;
  fVar4 = (float10)fsin((float10)param_2);
  local_40[0] = (float)fVar3;
  local_2c = (float)fVar3;
  local_30 = (float)fVar4;
  local_40[1] = -(float)fVar4;
  pfVar1 = local_40;
  for (; i != 0; i = i + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b3ea0 FUN_004b3ea0 ==== */

void FUN_004b3ea0(undefined4 *param_1,uint param_2)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_40 [5];
  undefined4 local_2c;
  float local_28;
  float local_1c;
  undefined4 local_18;
  
  puVar1 = &DAT_0073b538;
  puVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (param_2 != 0) {
    i = (DAT_005b23bc & param_2) * 4;
    local_2c = *(undefined4 *)(i + DAT_0073b578);
    local_1c = *(float *)(i + DAT_0073b530);
    local_18 = local_2c;
    local_28 = -local_1c;
  }
  puVar1 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b3f10 FUN_004b3f10 ==== */

void FUN_004b3f10(float *param_1,uint param_2)

{
  int i;
  float *pfVar1;
  float *pfVar2;
  float local_40 [8];
  float local_20;
  float local_18;
  
  pfVar1 = (float *)&DAT_0073b538;
  pfVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *pfVar2 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  if (param_2 != 0) {
    i = (DAT_005b23bc & param_2) * 4;
    local_40[0] = *(float *)(i + DAT_0073b578);
    local_40[2] = *(float *)(i + DAT_0073b530);
    local_18 = local_40[0];
    local_20 = -local_40[2];
  }
  pfVar1 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b3f80 FUN_004b3f80 ==== */

void FUN_004b3f80(float *param_1,uint param_2)

{
  int i;
  float *pfVar1;
  float *pfVar2;
  float local_40 [4];
  float local_30;
  float local_2c;
  
  pfVar1 = (float *)&DAT_0073b538;
  pfVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *pfVar2 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  if (param_2 != 0) {
    i = (DAT_005b23bc & param_2) * 4;
    local_40[0] = *(float *)(i + DAT_0073b578);
    local_30 = *(float *)(i + DAT_0073b530);
    local_2c = local_40[0];
    local_40[1] = -local_30;
  }
  pfVar1 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b3ff0 FUN_004b3ff0 ==== */

void FUN_004b3ff0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


