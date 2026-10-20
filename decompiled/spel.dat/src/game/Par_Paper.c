/* spel.dat — game/Par_Paper.cpp: 12 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045ef00 FUN_0045ef00 ==== */

void FUN_0045ef00(int param_1,void *param_2)

{
  undefined4 *in_ECX;
  int i;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float in_stack_0000003c;
  float in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  float in_stack_00000054;
  undefined4 auStackY_88 [14];
  undefined4 uStackY_50;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056aa23;
  local_c = ExceptionList;
  puVar2 = &param_2;
  puVar3 = auStackY_88;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590();
  uVar1 = 0;
  local_4 = 0;
  *in_ECX = &PTR_LAB_005768f8;
  i = FUN_004b75a0(s_par_paper_005a5c34);
  in_stack_00000054 = *(float *)(DAT_0073b168 + i * 9);
  FUN_004602e0();
  in_stack_00000048 = in_stack_0000003c + 0.12;
  FUN_004602e0();
  FUN_004602e0();
  uStackY_50 = 0x45f016;
  param_2 = operator_new(0x70);
  local_4._0_1_ = 1;
  if (param_2 != (void *)0x0) {
    uStackY_50 = 0x45f046;
    FUN_004602e0();
    uVar1 = FUN_0045f480();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[0x2b] = uVar1;
  in_stack_00000054 = (float)(int)in_stack_00000054 - 1.0;
  FUN_004602e0();
  __ftol();
  FUN_0045e120();
  FUN_0045e110();
  if (1 < param_1) {
    param_1 = param_1 + -1;
    do {
      FUN_004602e0();
      FUN_004602e0();
      FUN_004602e0();
      uStackY_50 = 0x45f12a;
      param_2 = operator_new(0x70);
      local_4._0_1_ = 2;
      if (param_2 != (void *)0x0) {
        uStackY_50 = 0x45f15a;
        FUN_004602e0();
        FUN_0045f480();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045dff0();
      FUN_004602e0();
      __ftol();
      FUN_0045e120();
      FUN_0045e110();
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0045f2f0 FUN_0045f2f0 ==== */

void FUN_0045f2f0(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int i;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 auStack_138 [9];
  undefined4 uStack_114;
  char *pcStack_110;
  char *pcStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  undefined4 *puStack_f8;
  undefined1 local_e8 [64];
  undefined4 local_a8 [16];
  undefined4 local_68 [12];
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_24;
  undefined4 local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056aa2d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  i = *(int *)(in_ECX + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  while (iVar3 = local_18, i != 0) {
    puStack_f8 = (undefined4 *)0x45f335;
    pfVar4 = (float *)FUN_0045e090();
    local_24 = *pfVar4;
    puStack_f8 = (undefined4 *)0x45f341;
    i = FUN_0045e090();
    local_20 = *(undefined4 *)(i + 4);
    puStack_f8 = (undefined4 *)0x45f34e;
    i = FUN_0045e090();
    uVar2 = local_20;
    fVar1 = *(float *)(i + 8);
    puVar5 = (undefined4 *)(iVar3 + 0x10);
    puVar6 = local_68;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_38 = local_38 + local_24;
    local_30 = local_30 + fVar1;
    local_34 = uVar2;
    puStack_f8 = (undefined4 *)0x45f37e;
    puStack_f8 = (undefined4 *)FUN_0045e0a0();
    puVar5 = local_68;
    puVar6 = auStack_138;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)FUN_00460730(local_e8);
    puVar6 = local_a8;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puStack_f8 = &DAT_0073b474;
    puVar5 = local_a8;
    puVar6 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uStack_fc = 1;
    piStack_100 = DAT_0073b4b4;
    iStack_104 = 0x45f3d0;
    iStack_104 = (**(code **)(*DAT_0073b4b4 + 0x68))();
    if (iStack_104 != 0) {
      uStack_108 = 0x45f3da;
      iStack_104 = FUN_004bb290();
      uStack_108 = 0x14;
      pcStack_10c = s_______Libs_Win3DLib_Include_d3de_00591314;
      pcStack_110 = s__s__d_____FOG__error_setting_tra_005912e0;
      uStack_114 = 0x45f3ef;
      FUN_004c4150();
    }
    iStack_104 = 0x45f3f9;
    FUN_0045f5f0();
    puStack_f8 = (undefined4 *)0x45f400;
    i = FUN_0045e0d0();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045f480 FUN_0045f480 ==== */

void FUN_0045f480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_0045ded0(param_1,param_2,param_3,param_4);
  *in_ECX = &PTR_LAB_00576900;
  return;
}


/* ==== 0045f4b0 FUN_0045f4b0 ==== */

undefined2 FUN_0045f4b0(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float10 fVar4;
  float10 extraout_ST0;
  
  fVar1 = param_1 + *(float *)(in_ECX + 4);
  *(float *)(in_ECX + 4) = fVar1;
  if (*(float *)(in_ECX + 8) < fVar1) {
    return 0;
  }
  if (*(float *)(in_ECX + 0x10) <= param_2 + 0.11) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    *(float *)(in_ECX + 0x10) = param_2 + 0.1;
    return 1;
  }
  fVar1 = (*(float *)(in_ECX + 0x18) / *(float *)(in_ECX + 0x30)) * param_1 +
          *(float *)(in_ECX + 0x34);
  *(float *)(in_ECX + 0x34) = fVar1;
  fVar2 = ((*(float *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x30) * 9.81) /
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
  *(float *)(in_ECX + 0x2c) = (float)(extraout_ST0 + (float10)*(float *)(in_ECX + 0x2c));
  return 1;
}


/* ==== 0045f5d0 FUN_0045f5d0 ==== */

void FUN_0045f5d0(undefined4 param_1,undefined4 param_2)

{
  FUN_0045f4b0(param_1,param_2);
  return;
}


/* ==== 0045f5f0 FUN_0045f5f0 ==== */

void FUN_0045f5f0(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0045f5f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 4))();
  return;
}


/* ==== 0045f680 FUN_0045f680 ==== */

void FUN_0045f680(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0045f690 FUN_0045f690 ==== */

void FUN_0045f690(void)

{
  FUN_005584e0(&LAB_0045f6a0);
  return;
}


/* ==== 0045f6c0 FUN_0045f6c0 ==== */

void FUN_0045f6c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0045f6d0 FUN_0045f6d0 ==== */

void FUN_0045f6d0(void)

{
  FUN_005584e0(&LAB_0045f6e0);
  return;
}


/* ==== 0045f6f0 FUN_0045f6f0 ==== */

undefined4 FUN_0045f6f0(void)

{
  void *operator_new_result;
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 auStack_80 [15];
  undefined4 uStack_44;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056aa4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b42a0();
  uStack_44 = 0x45f7af;
  operator_new_result = operator_new(0xb0);
  local_4 = 0;
  if (operator_new_result != (void *)0x0) {
    puVar2 = auStack_80;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar2 = *(undefined4 *)register0x00000010;
      puVar2 = puVar2 + 1;
    }
    uVar1 = FUN_0045f820(10);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 0045f820 FUN_0045f820 ==== */

void FUN_0045f820(int param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  void *operator_new_result;
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  float *in_stack_00000054;
  undefined4 auStackY_70 [14];
  undefined4 uStackY_38;
  undefined4 uStackY_34;
  float local_30;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pfVar1 = in_stack_00000054;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056aa89;
  local_c = ExceptionList;
  local_30 = in_stack_00000048;
  puVar3 = &param_2;
  puVar4 = auStackY_70;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590();
  local_4 = 0;
  *in_ECX = &PTR_LAB_00576908;
  in_ECX[0x25] = 0x3f800000;
  uVar2 = FUN_004b7400(s_S_SFX_PCX_005a5d0c);
  in_ECX[0x27] = uVar2;
  fVar5 = (float10)FUN_004602e0();
  in_stack_00000048 = (float)fVar5;
  in_stack_0000004c = 0.0;
  fVar5 = (float10)FUN_004602e0();
  in_stack_00000050 = (float)fVar5;
  fVar5 = (float10)FUN_004602e0();
  local_30 = 2.0;
  param_2 = (float)(fVar5 * (float10)*pfVar1);
  uStackY_34 = 0x45f921;
  fVar5 = (float10)FUN_004602e0();
  param_3 = (float)(fVar5 * (float10)pfVar1[1]);
  fVar5 = (float10)FUN_004602e0();
  param_4 = (float)(fVar5 * (float10)pfVar1[2]);
  local_30 = 6.426098e-39;
  in_stack_00000054 = operator_new(0x74);
  local_4._0_1_ = 1;
  if (in_stack_00000054 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    local_30 = 0.5;
    uStackY_34 = 0x45f984;
    FUN_004602e0();
    local_30 = 1.0;
    uStackY_34 = 0;
    uStackY_38 = 0x45f997;
    fVar5 = (float10)FUN_004602e0();
    local_30 = (float)fVar5;
    uStackY_34 = 0x45f9a5;
    uVar2 = FUN_0045ff20();
  }
  local_4._0_1_ = 0;
  in_ECX[0x2b] = uVar2;
  in_stack_00000048 = param_2 * 0.25 + in_stack_00000048;
  in_stack_0000004c = param_3 * 0.25 + in_stack_0000004c;
  in_stack_00000050 = param_4 * 0.25 + in_stack_00000050;
  fVar5 = (float10)FUN_00460220();
  param_3 = (float)(fVar5 * (float10)0.25 + (float10)param_3);
  in_stack_00000054 = operator_new(0x74);
  local_4._0_1_ = 2;
  if (in_stack_00000054 != (void *)0x0) {
    local_30 = 0.5;
    uStackY_34 = 0x45fa33;
    FUN_004602e0();
    local_30 = 6.426429e-39;
    fVar5 = (float10)FUN_0045e0c0();
    local_30 = (float)fVar5;
    uStackY_34 = 0x45fa50;
    FUN_0045ff20();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045dff0();
  FUN_0045e0d0();
  if (1 < param_1 / 2) {
    in_stack_00000054 = (float *)(param_1 / 2 + -1);
    do {
      fVar5 = (float10)FUN_004602e0();
      in_stack_00000048 = (float)fVar5;
      in_stack_0000004c = 0.0;
      fVar5 = (float10)FUN_004602e0();
      in_stack_00000050 = (float)fVar5;
      fVar5 = (float10)FUN_004602e0();
      local_30 = 2.0;
      param_2 = (float)(fVar5 * (float10)*pfVar1);
      uStackY_34 = 0x45fafc;
      fVar5 = (float10)FUN_004602e0();
      param_3 = (float)(fVar5 * (float10)pfVar1[1]);
      fVar5 = (float10)FUN_004602e0();
      param_4 = (float)(fVar5 * (float10)pfVar1[2]);
      local_30 = 6.426764e-39;
      operator_new_result = operator_new(0x74);
      local_4._0_1_ = 3;
      if (operator_new_result != (void *)0x0) {
        local_30 = 0.5;
        uStackY_34 = 0x45fb5f;
        FUN_004602e0();
        local_30 = 1.0;
        uStackY_34 = 0;
        uStackY_38 = 0x45fb72;
        fVar5 = (float10)FUN_004602e0();
        local_30 = (float)fVar5;
        uStackY_34 = 0x45fb80;
        FUN_0045ff20();
      }
      local_4._0_1_ = 0;
      FUN_0045dff0();
      FUN_0045e0d0();
      in_stack_00000048 = param_2 * 0.25 + in_stack_00000048;
      in_stack_0000004c = param_3 * 0.25 + in_stack_0000004c;
      in_stack_00000050 = param_4 * 0.25 + in_stack_00000050;
      fVar5 = (float10)FUN_00460220();
      param_3 = (float)(fVar5 * (float10)0.25 + (float10)param_3);
      operator_new_result = operator_new(0x74);
      local_4._0_1_ = 4;
      if (operator_new_result != (void *)0x0) {
        local_30 = 0.5;
        uStackY_34 = 0x45fc17;
        FUN_004602e0();
        local_30 = 6.427102e-39;
        fVar5 = (float10)FUN_0045e0c0();
        local_30 = (float)fVar5;
        uStackY_34 = 0x45fc30;
        FUN_0045ff20();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045dff0();
      FUN_0045e0d0();
      in_stack_00000054 = (float *)((int)in_stack_00000054 + -1);
    } while (in_stack_00000054 != (float *)0x0);
  }
  ExceptionList = local_c;
  return;
}


