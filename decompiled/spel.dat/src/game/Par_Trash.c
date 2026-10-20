/* spel.dat — game/Par_Trash.cpp: 28 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004609c0 FUN_004609c0 ==== */

void FUN_004609c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004609d0 FUN_004609d0 ==== */

void FUN_004609d0(void)

{
  FUN_005584e0(&LAB_004609e0);
  return;
}


/* ==== 00460a00 FUN_00460a00 ==== */

void FUN_00460a00(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00460a10 FUN_00460a10 ==== */

void FUN_00460a10(void)

{
  FUN_005584e0(&LAB_00460a20);
  return;
}


/* ==== 00460a30 FUN_00460a30 ==== */

undefined4 FUN_00460a30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint __ftol_result;
  int i;
  undefined4 uVar4;
  void *operator_new_result;
  undefined4 *puVar5;
  float in_stack_00000044;
  float in_stack_0000004c;
  undefined4 auStack_74 [16];
  float local_34;
  undefined4 local_30;
  float local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056aabb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result = __ftol();
  i = (__ftol_result & DAT_005b23bc) * 4;
  fVar1 = *(float *)(i + DAT_0073b578);
  fVar2 = *(float *)(i + DAT_0073b530);
  fVar3 = *(float *)(i + DAT_0073b530) * in_stack_00000044 +
          *(float *)(i + DAT_0073b578) * in_stack_0000004c;
  local_2c = 6.432442e-39;
  FUN_00460370();
  FUN_004a6800();
  uVar4 = __ftol();
  local_2c = 6.432501e-39;
  operator_new_result = operator_new(0xb0);
  local_4 = 0;
  if (operator_new_result != (void *)0x0) {
    local_30 = 0;
    puVar5 = auStack_74;
    local_34 = (fVar1 * in_stack_00000044 - fVar2 * in_stack_0000004c) * 6.0;
    local_2c = fVar3 * 5.0 + fVar3;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar5 = *(undefined4 *)register0x00000010;
      puVar5 = puVar5 + 1;
    }
    uVar4 = FUN_00460bb0(uVar4);
    ExceptionList = local_c;
    return uVar4;
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 00460bb0 FUN_00460bb0 ==== */

void FUN_00460bb0(int param_1,void *param_2)

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
  puStack_8 = &LAB_0056aae3;
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
  *in_ECX = &PTR_LAB_0057691c;
  i = FUN_004b75a0(s_par_trash_005a5ef8);
  in_stack_00000054 = *(float *)(DAT_0073b168 + i * 9);
  FUN_004602e0();
  in_stack_00000048 = in_stack_0000003c + 0.12;
  FUN_004602e0();
  FUN_004602e0();
  uStackY_50 = 0x460cbe;
  param_2 = operator_new(0x70);
  local_4._0_1_ = 1;
  if (param_2 != (void *)0x0) {
    uStackY_50 = 0x460cee;
    FUN_004602e0();
    uVar1 = FUN_00461120();
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
      uStackY_50 = 0x460dca;
      param_2 = operator_new(0x70);
      local_4._0_1_ = 2;
      if (param_2 != (void *)0x0) {
        uStackY_50 = 0x460dfa;
        FUN_004602e0();
        FUN_00461120();
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


/* ==== 00460f90 FUN_00460f90 ==== */

void FUN_00460f90(void)

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
  
  puStack_c = &LAB_0056aaed;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  i = *(int *)(in_ECX + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  while (iVar3 = local_18, i != 0) {
    puStack_f8 = (undefined4 *)0x460fd5;
    pfVar4 = (float *)FUN_0045e090();
    local_24 = *pfVar4;
    puStack_f8 = (undefined4 *)0x460fe1;
    i = FUN_0045e090();
    local_20 = *(undefined4 *)(i + 4);
    puStack_f8 = (undefined4 *)0x460fee;
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
    puStack_f8 = (undefined4 *)0x46101e;
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
    iStack_104 = 0x461070;
    iStack_104 = (**(code **)(*DAT_0073b4b4 + 0x68))();
    if (iStack_104 != 0) {
      uStack_108 = 0x46107a;
      iStack_104 = FUN_004bb290();
      uStack_108 = 0x14;
      pcStack_10c = s_______Libs_Win3DLib_Include_d3de_00591314;
      pcStack_110 = s__s__d_____FOG__error_setting_tra_005912e0;
      uStack_114 = 0x46108f;
      FUN_004c4150();
    }
    iStack_104 = 0x461099;
    FUN_004612e0();
    puStack_f8 = (undefined4 *)0x4610a0;
    i = FUN_0045e0d0();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00461120 FUN_00461120 ==== */

void FUN_00461120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_0045ded0(param_1,param_2,param_3,param_4);
  *in_ECX = &PTR_LAB_00576924;
  return;
}


/* ==== 00461150 FUN_00461150 ==== */

undefined2 FUN_00461150(float param_1,float param_2)

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
    FUN_004602e0(0x3f000000,0x3f666666);
    *(float *)(in_ECX + 0x38) = (float)-(extraout_ST0 * (float10)*(float *)(in_ECX + 0x38));
    return 1;
  }
  fVar1 = (*(float *)(in_ECX + 0x18) / *(float *)(in_ECX + 0x30)) * param_1 +
          *(float *)(in_ECX + 0x34);
  *(float *)(in_ECX + 0x34) = fVar1;
  fVar2 = ((*(float *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x30) * 150.0) /
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


/* ==== 004612c0 FUN_004612c0 ==== */

void FUN_004612c0(undefined4 param_1,undefined4 param_2)

{
  FUN_00461150(param_1,param_2);
  return;
}


/* ==== 004612e0 FUN_004612e0 ==== */

void FUN_004612e0(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x004612e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 4))();
  return;
}


/* ==== 00461370 FUN_00461370 ==== */

void FUN_00461370(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00461380 FUN_00461380 ==== */

void FUN_00461380(void)

{
  FUN_005584e0(&LAB_00461390);
  return;
}


/* ==== 004613b0 FUN_004613b0 ==== */

void FUN_004613b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004613c0 FUN_004613c0 ==== */

void FUN_004613c0(void)

{
  FUN_005584e0(&LAB_004613d0);
  return;
}


/* ==== 004613e0 FUN_004613e0 ==== */

undefined4 FUN_004613e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint __ftol_result;
  int iVar4;
  void *operator_new_result;
  undefined4 uVar5;
  int i;
  undefined4 *puVar6;
  float in_stack_00000044;
  float in_stack_0000004c;
  undefined4 auStack_74 [16];
  float local_34;
  undefined4 local_30;
  float local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ab0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result = __ftol();
  iVar4 = (__ftol_result & DAT_005b23bc) * 4;
  fVar1 = *(float *)(iVar4 + DAT_0073b578);
  fVar2 = *(float *)(iVar4 + DAT_0073b530);
  fVar3 = *(float *)(iVar4 + DAT_0073b530) * in_stack_00000044 +
          *(float *)(iVar4 + DAT_0073b578) * in_stack_0000004c;
  local_2c = 6.435917e-39;
  FUN_00460370();
  FUN_004a6800();
  iVar4 = __ftol();
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  local_2c = 6.43599e-39;
  operator_new_result = operator_new(0xb0);
  local_4 = 0;
  if (operator_new_result != (void *)0x0) {
    local_30 = 0;
    puVar6 = auStack_74;
    local_34 = (fVar1 * in_stack_00000044 - fVar2 * in_stack_0000004c) * 6.0;
    local_2c = fVar3 * 5.0 + fVar3;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar6 = *(undefined4 *)register0x00000010;
      puVar6 = puVar6 + 1;
    }
    uVar5 = FUN_00461570(iVar4);
    ExceptionList = local_c;
    return uVar5;
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 00461570 FUN_00461570 ==== */

void FUN_00461570(int param_1)

{
  void *operator_new_result;
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int j;
  float10 fVar3;
  undefined4 in_stack_0000003c;
  float in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  undefined4 auStackY_98 [14];
  undefined4 uStackY_60;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ab28;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)&stack0x00000008;
  puVar2 = auStackY_98;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590();
  j = 0;
  local_4 = 0;
  *in_ECX = &PTR_LAB_0057692c;
  i = FUN_004b75a0(s_par_water_005a5fd0);
  in_stack_00000054 = *(int *)(DAT_0073b168 + i * 9);
  in_ECX[0x25] = 0x3f333333;
  if (0 < param_1) {
    in_stack_00000048 = (float)in_stack_00000054 - 1.0;
    do {
      FUN_004602e0();
      FUN_004602e0();
      FUN_004602e0();
      uStackY_60 = 0x4616b4;
      operator_new_result = operator_new(0x7c);
      local_4._0_1_ = 1;
      if (operator_new_result == (void *)0x0) {
        i = 0;
      }
      else {
        uStackY_60 = 0x4616e4;
        FUN_004602e0();
        i = FUN_004619f0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      fVar3 = (float10)FUN_004602e0();
      *(undefined4 *)(i + 0x70) = 0x3f800000;
      *(undefined4 *)(i + 0x74) = 0x3f800000;
      *(float *)(i + 0x78) = (float)fVar3;
      if (j == 0) {
        in_ECX[0x2b] = i;
        in_stack_00000054 = i;
      }
      else {
        FUN_0045dff0();
      }
      FUN_004602e0();
      __ftol();
      FUN_0045e120();
      FUN_0045e110();
      j = j + 1;
    } while (j < param_1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004618a0 FUN_004618a0 ==== */

void FUN_004618a0(void)

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
  
  puStack_c = &LAB_0056ab32;
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
    local_e8 = (undefined4 *)0x4618f0;
    pfVar1 = (float *)FUN_0045e090();
    local_28 = local_28 + *pfVar1;
    local_e8 = (undefined4 *)0x4618ff;
    j = FUN_0045e090();
    local_24 = *(undefined4 *)(j + 4);
    local_e8 = (undefined4 *)0x46190c;
    j = FUN_0045e090();
    local_20 = local_20 + *(float *)(j + 8);
    local_f0 = *(int **)(i + 0x70);
    local_ec = *(undefined4 *)(i + 0x74);
    local_e8 = *(undefined4 **)(i + 0x78);
    puStack_f4 = local_58;
    uStack_f8 = 0x461936;
    FUN_004b4360();
    local_e8 = (undefined4 *)0x461940;
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
    puStack_f4 = (undefined4 *)0x461992;
    puStack_f4 = (undefined4 *)(**(code **)(*DAT_0073b4b4 + 0x68))();
    if (puStack_f4 != (undefined4 *)0x0) {
      uStack_f8 = 0x46199c;
      puStack_f4 = (undefined4 *)FUN_004bb290();
      uStack_f8 = 0x14;
      pcStack_fc = s_______Libs_Win3DLib_Include_d3de_00591314;
      pcStack_100 = s__s__d_____FOG__error_setting_tra_005912e0;
      uStack_104 = 0x4619b1;
      FUN_004c4150();
    }
    puStack_f4 = (undefined4 *)0x4619bb;
    FUN_00461b30();
    local_e8 = (undefined4 *)0x4619c2;
    i = FUN_0045e0d0();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004619f0 FUN_004619f0 ==== */

void FUN_004619f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_0045ded0(param_1,param_2,param_3,param_4);
  *in_ECX = &PTR_LAB_00576934;
  return;
}


/* ==== 00461a20 FUN_00461a20 ==== */

uint FUN_00461a20(float param_1)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  
  param_1 = param_1 + *(float *)(in_ECX + 4);
  *(float *)(in_ECX + 4) = param_1;
  fVar1 = *(float *)(in_ECX + 8);
  if (param_1 >= fVar1 && (param_1 == fVar1) == 0) {
    return (uint)(ushort)((ushort)(param_1 < fVar1) << 8 |
                          (ushort)(NAN(param_1) || NAN(fVar1)) << 10 |
                         (ushort)(param_1 == fVar1) << 0xe);
  }
  fVar1 = ABS(*(float *)(DAT_006fba58 * 0xf0 + DAT_00715e50 + 0xc4));
  fVar2 = (float10)FUN_004602e0(fVar1 * 0.03,fVar1 * 0.05);
  *(float *)(in_ECX + 0x70) = (float)fVar2;
  *(undefined4 *)(in_ECX + 0x74) = 0x3f800000;
  fVar2 = (float10)FUN_004602e0(fVar1 * 0.14,fVar1 * 0.18);
  *(float *)(in_ECX + 0x78) = (float)fVar2;
  if (*(float *)(in_ECX + 0x70) < 0.1) {
    *(undefined4 *)(in_ECX + 0x70) = 0x3dcccccd;
  }
  if (fVar2 < (float10)0.1) {
    *(undefined4 *)(in_ECX + 0x78) = 0x3dcccccd;
  }
  return CONCAT31((uint3)(fVar2 < (float10)0.1),1);
}


/* ==== 00461b10 FUN_00461b10 ==== */

void FUN_00461b10(undefined4 param_1,undefined4 param_2)

{
  FUN_00461a20(param_1,param_2);
  return;
}


/* ==== 00461b30 FUN_00461b30 ==== */

void FUN_00461b30(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x00461b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 4))();
  return;
}


/* ==== 00461bc0 FUN_00461bc0 ==== */

void FUN_00461bc0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00461bd0 FUN_00461bd0 ==== */

void FUN_00461bd0(void)

{
  FUN_005584e0(&LAB_00461be0);
  return;
}


/* ==== 00461c00 FUN_00461c00 ==== */

void FUN_00461c00(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00461c10 FUN_00461c10 ==== */

void FUN_00461c10(void)

{
  FUN_005584e0(&LAB_00461c20);
  return;
}


/* ==== 00461c30 FUN_00461c30 ==== */

undefined4 FUN_00461c30(void)

{
  float fVar1;
  float fVar2;
  uint __ftol_result;
  int iVar3;
  void *operator_new_result;
  undefined4 uVar4;
  int i;
  undefined4 *puVar5;
  float in_stack_00000044;
  float in_stack_0000004c;
  undefined4 auStack_78 [16];
  float local_38;
  undefined4 local_34;
  float local_30;
  float *pfStack_2c;
  float local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ab4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result = __ftol();
  iVar3 = (__ftol_result & DAT_005b23bc) * 4;
  fVar1 = *(float *)(iVar3 + DAT_0073b530) * in_stack_00000044 +
          *(float *)(iVar3 + DAT_0073b578) * in_stack_0000004c;
  local_18[1] = 0.0;
  fVar2 = (*(float *)(iVar3 + DAT_0073b578) * in_stack_00000044 -
          *(float *)(iVar3 + DAT_0073b530) * in_stack_0000004c) * 6.0;
  fVar1 = fVar1 * 5.0 + fVar1;
  pfStack_2c = (float *)0x461d08;
  local_18[0] = fVar2;
  local_18[2] = fVar1;
  FUN_00460370();
  FUN_004a6800();
  iVar3 = __ftol();
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  pfStack_2c = (float *)0x461d3c;
  operator_new_result = operator_new(0xb0);
  local_4 = 0;
  if (operator_new_result != (void *)0x0) {
    pfStack_2c = local_18;
    local_34 = 0;
    puVar5 = auStack_78;
    local_38 = fVar2;
    local_30 = fVar1;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar5 = *(undefined4 *)register0x00000010;
      puVar5 = puVar5 + 1;
    }
    uVar4 = FUN_00461dc0(iVar3);
    ExceptionList = local_c;
    return uVar4;
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 00461dc0 FUN_00461dc0 ==== */

void FUN_00461dc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  void *operator_new_result;
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int j;
  undefined4 in_stack_0000003c;
  float in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  undefined4 auStackY_ac [14];
  undefined4 uStackY_74;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ab68;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)&stack0x00000008;
  puVar5 = auStackY_ac;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590();
  j = 0;
  local_4 = 0;
  *in_ECX = &PTR_LAB_0057694c;
  i = FUN_004b75a0(s_par_waterdrops_005a5fdc);
  in_stack_00000054 = *(int *)(DAT_0073b168 + i * 9);
  in_ECX[0x25] = 0x406ccccd;
  in_ECX[0x1a] = 0x3ecccccd;
  i = DAT_006fba58 * 0xf0 + 0xbc + DAT_00715e50;
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0xbc + DAT_00715e50);
  uVar2 = *(undefined4 *)(i + 4);
  fVar3 = *(float *)(i + 8);
  if (0 < param_1) {
    in_stack_00000048 = ABS(fVar3 * 2.5);
    do {
      FUN_004602e0();
      FUN_004602e0();
      FUN_004602e0();
      uStackY_74 = 0x461f6d;
      operator_new_result = operator_new(0x88);
      local_4._0_1_ = 1;
      if (operator_new_result == (void *)0x0) {
        i = 0;
      }
      else {
        uStackY_74 = 0x461faf;
        FUN_004602e0();
        i = FUN_004622d0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      *(undefined4 *)(i + 0x70) = 0x3f800000;
      *(undefined4 *)(i + 0x74) = 0x3f800000;
      *(undefined4 *)(i + 0x78) = 0x3f800000;
      *(undefined4 *)(i + 0x7c) = uVar1;
      *(undefined4 *)(i + 0x80) = uVar2;
      *(float *)(i + 0x84) = fVar3;
      if (j == 0) {
        in_ECX[0x2b] = i;
        in_stack_00000054 = i;
      }
      else {
        FUN_0045dff0();
      }
      FUN_004602e0();
      __ftol();
      FUN_0045e120();
      FUN_0045e110();
      j = j + 1;
    } while (j < param_1);
  }
  ExceptionList = local_c;
  return;
}


