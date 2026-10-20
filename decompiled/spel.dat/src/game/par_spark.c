/* spel.dat — game/par_spark.cpp: 21 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045fd50 FUN_0045fd50 ==== */

void __thiscall FUN_0045fd50(void *this)

{
  int this_val;
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_5c [17];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056aa93;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_18 = this;
  local_8 = 0;
  ExceptionList = &local_10;
  if (DAT_006fb8d0 != 0) {
    this_val = *(int *)((int)this + 0x9c);
    i = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    ExceptionList = &local_10;
    *(int *)(i + 0x60) = this_val;
    uVar1 = *(undefined4 *)(DAT_0073b1b0 + this_val * 0x48);
    *(undefined4 *)(i + 0x58) = 1;
    *(undefined4 *)(i + 0x48) = uVar1;
    if (*(int *)(i + 0x5c) == 1) {
      *(undefined4 *)(i + 0x58) = 0;
      (**(code **)(**(int **)(i + 0x54) + 0xc))(*(int **)(i + 0x54),i);
    }
    this_val = *(int *)((int)this + 0x9c);
    if ((DAT_0073b4ec != this_val) &&
       (DAT_0073b4ec = this_val,
       this_val = (**(code **)(*DAT_0073b4b4 + 0x5c))
                            (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + this_val * 0x48)),
       this_val != 0)) {
      uVar1 = FUN_004bb290(this_val);
      FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x122,uVar1);
    }
  }
  this_val = *(int *)((int)this + 0xac);
  while (this_val != 0) {
    puVar2 = (undefined4 *)((int)this + 0x10);
    puVar3 = local_5c;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = local_5c;
    puVar3 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (i != 0) {
      uVar1 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar1);
    }
    FUN_00460060(this_val);
    i = FUN_0045e0d0(this_val);
    this_val = 0;
    this = local_18;
    if (i != 0) {
      this_val = FUN_0045e0d0(i);
      this = local_18;
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045ff20 FUN_0045ff20 ==== */

void * __thiscall
FUN_0045ff20(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_0045ded0(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_LAB_00576910;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0x3f800000;
  *(undefined4 *)((int)this + 0x4c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x70) = 0xc1200000;
  return this;
}


/* ==== 00460050 FUN_00460050 ==== */

void __thiscall FUN_00460050(void *this,undefined4 param_2)

{
  (*(code *)**(undefined4 **)this)(param_2);
  return;
}


/* ==== 00460060 FUN_00460060 ==== */

void __thiscall FUN_00460060(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00460062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 4))();
  return;
}


/* ==== 00460070 FUN_00460070 ==== */

void __thiscall FUN_00460070(void *this)

{
  int iVar1;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056aa9d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff5c;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_0045e0d0();
  local_98 = *(undefined4 *)(iVar1 + 0xc);
  local_94 = *(undefined4 *)(iVar1 + 0x10);
  local_90 = *(undefined4 *)(iVar1 + 0x14);
  local_88 = 0xffff0000;
  local_80 = 0x3f7d0000;
  local_7c = 0x3f7d0000;
  local_78 = *(float *)(iVar1 + 0xc) + 0.5;
  local_74 = *(undefined4 *)(iVar1 + 0x10);
  local_70 = *(undefined4 *)(iVar1 + 0x14);
  local_68 = 0xffffff00;
  local_60 = 0x3f7d0000;
  local_5c = 0x3f7d0000;
  if (iVar1 != 0) {
    local_58 = *(undefined4 *)((int)this + 0xc);
    local_54 = *(undefined4 *)((int)this + 0x10);
    local_50 = *(undefined4 *)((int)this + 0x14);
    local_48 = __ftol();
    local_48 = local_48 << 0x18;
    local_30 = local_90;
    local_34 = local_94;
    local_40 = 0x3f7d0000;
    local_3c = 0x3f7d0000;
    local_38 = local_98;
    local_28 = 0xffff0000;
    local_20 = 0x3f7d0000;
    local_1c = 0x3f7d0000;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,5,2,&local_98,4,0);
    if (iVar1 != 0) {
      FUN_004c4150(s__s___d__DramPrimitive_error_005a5e0c,
                   s_C__Work_A2IV_Game_prog_par_spark_005a5de4,0x155);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00460220 FUN_00460220 ==== */

float10 __thiscall FUN_00460220(void *this)

{
  return (float10)*(float *)((int)this + 0x70);
}


/* ==== 00460270 FUN_00460270 ==== */

void FUN_00460270(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00460280 FUN_00460280 ==== */

void FUN_00460280(void)

{
  FUN_005584e0(&LAB_00460290);
  return;
}


/* ==== 004602b0 FUN_004602b0 ==== */

void FUN_004602b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004602c0 FUN_004602c0 ==== */

void FUN_004602c0(void)

{
  FUN_005584e0(&LAB_004602d0);
  return;
}


/* ==== 004602e0 FUN_004602e0 ==== */

float10 __thiscall FUN_004602e0(void *this,float param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_00558625(this);
  return ((float10)param_3 - (float10)param_2) * (float10)iVar1 * (float10)3.051851e-05 +
         (float10)param_2;
}


/* ==== 00460310 FUN_00460310 ==== */

bool FUN_00460310(int this_val)

{
  int i;
  
  i = 0;
  for (; this_val != 0; this_val = FUN_0045e8b0(this_val)) {
    i = i + 1;
  }
  return i < 100;
}


/* ==== 00460340 FUN_00460340 ==== */

float10 FUN_00460340(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}


/* ==== 00460370 FUN_00460370 ==== */

void FUN_00460370(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00460340(param_1);
  if (fVar1 == (float10)0.0) {
    fVar1 = (float10)1.0;
  }
  *param_1 = (float)((float10)*param_1 / fVar1);
  param_1[1] = (float)((float10)param_1[1] / fVar1);
  param_1[2] = (float)((float10)param_1[2] / fVar1);
  return;
}


/* ==== 004603b0 FUN_004603b0 ==== */

void FUN_004603b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}


/* ==== 004603d0 FUN_004603d0 ==== */

void FUN_004603d0(undefined4 *param_1)

{
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}


/* ==== 00460410 FUN_00460410 ==== */

void FUN_00460410(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *param_1 = param_3[1] * param_2[4] + param_2[8] * param_3[2] + *param_2 * *param_3;
  param_1[1] = param_2[1] * *param_3 + param_3[1] * param_2[5] + param_2[9] * param_3[2];
  fVar1 = param_2[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_2[6];
  fVar5 = param_2[10];
  fVar6 = param_3[2];
  param_1[3] = 0.0;
  param_1[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  param_1[4] = param_3[5] * param_2[4] + param_3[4] * *param_2 + param_3[6] * param_2[8];
  param_1[5] = param_3[4] * param_2[1] + param_3[6] * param_2[9] + param_3[5] * param_2[5];
  fVar1 = param_3[6];
  fVar2 = param_2[10];
  fVar3 = param_3[4];
  fVar4 = param_2[2];
  fVar5 = param_3[5];
  fVar6 = param_2[6];
  param_1[7] = 0.0;
  param_1[6] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  param_1[8] = *param_2 * param_3[8] + param_3[9] * param_2[4] + param_2[8] * param_3[10];
  param_1[9] = param_2[1] * param_3[8] + param_2[9] * param_3[10] + param_3[9] * param_2[5];
  fVar1 = param_2[10];
  fVar2 = param_3[10];
  fVar3 = param_2[2];
  fVar4 = param_3[8];
  fVar5 = param_3[9];
  fVar6 = param_2[6];
  param_1[0xb] = 0.0;
  param_1[10] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  param_1[0xc] = param_2[4] * param_3[0xd] + param_2[8] * param_3[0xe] + param_3[0xc] * *param_2 +
                 param_2[0xc];
  param_1[0xd] = param_3[0xd] * param_2[5] + param_3[0xc] * param_2[1] + param_3[0xe] * param_2[9] +
                 param_2[0xd];
  fVar1 = param_2[6];
  fVar2 = param_3[0xd];
  fVar3 = param_2[10];
  fVar4 = param_3[0xe];
  fVar5 = param_2[2];
  fVar6 = param_3[0xc];
  fVar7 = param_2[0xe];
  param_1[0xf] = 1.0;
  param_1[0xe] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  return;
}


/* ==== 00460570 FUN_00460570 ==== */

void FUN_00460570(int param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  FUN_004603d0(param_1);
  fVar1 = (float10)fcos((float10)param_2);
  *(float *)(param_1 + 0x14) = (float)fVar1;
  fVar2 = (float10)fsin((float10)param_2);
  *(float *)(param_1 + 0x18) = (float)fVar2;
  *(float *)(param_1 + 0x24) = (float)-fVar2;
  *(float *)(param_1 + 0x28) = (float)fVar1;
  return;
}


/* ==== 004605a0 FUN_004605a0 ==== */

void FUN_004605a0(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  FUN_004603d0(param_1);
  fVar1 = (float10)fcos((float10)param_2);
  *param_1 = (float)fVar1;
  fVar2 = (float10)fsin((float10)param_2);
  param_1[2] = (float)-fVar2;
  param_1[8] = (float)fVar2;
  param_1[10] = (float)fVar1;
  return;
}


/* ==== 004605d0 FUN_004605d0 ==== */

void FUN_004605d0(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  FUN_004603d0(param_1);
  fVar1 = (float10)fcos((float10)param_2);
  *param_1 = (float)fVar1;
  fVar2 = (float10)fsin((float10)param_2);
  param_1[1] = (float)fVar2;
  param_1[4] = (float)-fVar2;
  param_1[5] = (float)fVar1;
  return;
}


/* ==== 00460730 FUN_00460730 ==== */

void FUN_00460730(undefined4 *param_1)

{
  float *pfVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *in_stack_00000048;
  undefined4 local_100 [16];
  undefined1 local_c0 [64];
  undefined1 local_80 [64];
  undefined4 local_40 [16];
  
  puVar2 = (undefined4 *)&stack0x00000008;
  puVar3 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004603d0(local_100);
  pfVar1 = in_stack_00000048;
  if (((*in_stack_00000048 == 0.0) && (in_stack_00000048[1] == 0.0)) &&
     (in_stack_00000048[2] == 0.0)) {
    puVar2 = local_40;
    for (i = 0x10; i != 0; i = i + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  FUN_00460570(local_c0,*in_stack_00000048);
  FUN_00460410(local_80,local_100,local_c0);
  FUN_004605a0(local_c0,pfVar1[1]);
  FUN_00460410(local_100,local_80,local_c0);
  FUN_004605d0(local_c0,pfVar1[2]);
  FUN_00460410(local_80,local_100,local_c0);
  FUN_00460410(local_100,local_40,local_80);
  puVar2 = local_100;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


