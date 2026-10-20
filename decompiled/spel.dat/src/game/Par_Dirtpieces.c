/* spel.dat — game/Par_Dirtpieces.cpp: 24 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045a500 FUN_0045a500 ==== */

void __thiscall FUN_0045a500(void *this)

{
  float *pfVar1;
  undefined4 *puVar2;
  int this_val;
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
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a892;
  local_10 = ExceptionList;
  this_val = *(int *)((int)this + 0xac);
  local_14 = &stack0xffffff1c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = this;
  for (; this_val != 0; this_val = FUN_0045e0d0(this_val)) {
    puVar2 = (undefined4 *)((int)local_18 + 0x10);
    puVar3 = local_58;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_e8 = (undefined4 *)0x45a550;
    pfVar1 = (float *)FUN_0045e090(this_val);
    local_28 = local_28 + *pfVar1;
    local_e8 = (undefined4 *)0x45a55f;
    i = FUN_0045e090(this_val);
    local_24 = *(undefined4 *)(i + 4);
    local_e8 = (undefined4 *)0x45a56c;
    i = FUN_0045e090(this_val);
    local_20 = local_20 + *(float *)(i + 8);
    local_f0 = *(int **)(this_val + 0x70);
    local_ec = *(undefined4 *)(this_val + 0x74);
    local_e8 = *(undefined4 **)(this_val + 0x78);
    puStack_f4 = local_58;
    uStack_f8 = 0x45a596;
    FUN_004b4360();
    local_e8 = (undefined4 *)0x45a5a0;
    local_e8 = (undefined4 *)FUN_0045e0a0(this_val);
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
    puStack_f4 = (undefined4 *)0x45a5f2;
    puStack_f4 = (undefined4 *)(**(code **)(*DAT_0073b4b4 + 0x68))();
    if (puStack_f4 != (undefined4 *)0x0) {
      uStack_f8 = 0x45a5fc;
      puStack_f4 = (undefined4 *)FUN_004bb290();
      uStack_f8 = 0x14;
      pcStack_fc = s_______Libs_Win3DLib_Include_d3de_00591314;
      pcStack_100 = s__s__d_____FOG__error_setting_tra_005912e0;
      uStack_104 = 0x45a611;
      FUN_004c4150();
    }
    puStack_f4 = (undefined4 *)0x45a61b;
    FUN_0045a790(this_val);
    local_e8 = (undefined4 *)0x45a622;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045a650 FUN_0045a650 ==== */

void * __thiscall
FUN_0045a650(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_0045ded0(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_LAB_00576884;
  return this;
}


/* ==== 0045a680 FUN_0045a680 ==== */

uint __thiscall FUN_0045a680(void *this,float param_2)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  
  param_2 = param_2 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = param_2;
  fVar2 = *(float *)((int)this + 8);
  if (param_2 >= fVar2 && (param_2 == fVar2) == 0) {
    return (uint)(ushort)((ushort)(param_2 < fVar2) << 8 |
                          (ushort)(NAN(param_2) || NAN(fVar2)) << 10 |
                         (ushort)(param_2 == fVar2) << 0xe);
  }
  iVar1 = DAT_006fba58 * 0xf0 + 0xbc + DAT_00715e50;
  fVar2 = ABS(*(float *)(iVar1 + 8));
  fVar3 = (float10)FUN_004602e0(*(undefined4 *)(iVar1 + 4),fVar2 * 0.02,fVar2 * 0.04);
  *(float *)((int)this + 0x70) = (float)fVar3;
  *(undefined4 *)((int)this + 0x74) = 0x3f800000;
  fVar3 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x78) = (float)fVar3;
  if (*(float *)((int)this + 0x70) < 0.1) {
    *(undefined4 *)((int)this + 0x70) = 0x3dcccccd;
  }
  if (fVar3 < (float10)0.1) {
    *(undefined4 *)((int)this + 0x78) = 0x3dcccccd;
  }
  return CONCAT31((uint3)(fVar3 < (float10)0.1),1);
}


/* ==== 0045a770 FUN_0045a770 ==== */

void FUN_0045a770(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_0045a680(in_ECX,param_1,param_2);
  return;
}


/* ==== 0045a790 FUN_0045a790 ==== */

void __thiscall FUN_0045a790(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0045a792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 4))();
  return;
}


/* ==== 0045a820 FUN_0045a820 ==== */

void FUN_0045a820(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0045a830 FUN_0045a830 ==== */

void FUN_0045a830(void)

{
  FUN_005584e0(&LAB_0045a840);
  return;
}


/* ==== 0045a860 FUN_0045a860 ==== */

void FUN_0045a860(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0045a870 FUN_0045a870 ==== */

void FUN_0045a870(void)

{
  FUN_005584e0(&LAB_0045a880);
  return;
}


/* ==== 0045a890 FUN_0045a890 ==== */

undefined4 FUN_0045a890(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint __ftol_result;
  int iVar4;
  void *this_val;
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
  puStack_8 = &LAB_0056a8ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result = __ftol();
  iVar4 = (__ftol_result & DAT_005b23bc) * 4;
  fVar1 = *(float *)(iVar4 + DAT_0073b578);
  fVar2 = *(float *)(iVar4 + DAT_0073b530);
  fVar3 = *(float *)(iVar4 + DAT_0073b530) * in_stack_00000044 +
          *(float *)(iVar4 + DAT_0073b578) * in_stack_0000004c;
  FUN_004a6800(&DAT_007128b0);
  iVar4 = __ftol();
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  local_2c = 6.397438e-39;
  this_val = operator_new(0xb0);
  local_4 = 0;
  if (this_val != (void *)0x0) {
    local_30 = 0;
    puVar6 = auStack_74;
    local_34 = (fVar1 * in_stack_00000044 - fVar2 * in_stack_0000004c) * 11.0;
    local_2c = fVar3 * 10.0 + fVar3;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar6 = *(undefined4 *)register0x00000010;
      puVar6 = puVar6 + 1;
    }
    uVar5 = FUN_0045a9f0(this_val,iVar4);
    ExceptionList = local_c;
    return uVar5;
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 0045a9f0 FUN_0045a9f0 ==== */

void * __thiscall FUN_0045a9f0(void *this,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  void *this_val;
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
  puStack_8 = &LAB_0056a8c8;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)&stack0x00000008;
  puVar5 = auStackY_ac;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  j = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00576898;
  i = FUN_004b75a0(&DAT_00712130,s_par_dirtpieces_005a5220);
  in_stack_00000054 = *(int *)(DAT_0073b168 + i * 9);
  *(undefined4 *)((int)this + 0x94) = 0x402ccccd;
  i = DAT_006fba58 * 0xf0 + 0xbc + DAT_00715e50;
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0xbc + DAT_00715e50);
  uVar2 = *(undefined4 *)(i + 4);
  fVar3 = *(float *)(i + 8);
  if (0 < param_2) {
    in_stack_00000048 = ABS(fVar3);
    do {
      FUN_004602e0();
      FUN_004602e0();
      FUN_004602e0();
      uStackY_74 = 0x45ab98;
      this_val = operator_new(0x88);
      local_4._0_1_ = 1;
      if (this_val == (void *)0x0) {
        i = 0;
      }
      else {
        uStackY_74 = 0x45abc8;
        FUN_004602e0();
        i = FUN_0045af60(this_val);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      *(undefined4 *)(i + 0x70) = 0x3f800000;
      *(undefined4 *)(i + 0x74) = 0x3f800000;
      *(undefined4 *)(i + 0x78) = 0x3f800000;
      *(undefined4 *)(i + 0x7c) = uVar1;
      *(undefined4 *)(i + 0x80) = uVar2;
      *(float *)(i + 0x84) = fVar3;
      if (j == 0) {
        *(int *)((int)this + 0xac) = i;
        in_stack_00000054 = i;
      }
      else {
        FUN_0045dff0(in_stack_00000054);
      }
      FUN_004602e0();
      __ftol();
      FUN_0045e120(i);
      FUN_0045e110(i);
      j = j + 1;
    } while (j < param_2);
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 0045ada0 FUN_0045ada0 ==== */

void __thiscall FUN_0045ada0(void *this)

{
  float fVar1;
  undefined4 uVar2;
  void *pvVar3;
  float *pfVar4;
  int i;
  undefined4 *puVar5;
  int this_val;
  undefined4 *puVar6;
  undefined4 auStack_138 [9];
  undefined4 uStack_114;
  char *pcStack_110;
  char *pcStack_10c;
  undefined4 uStack_108;
  undefined4 *puStack_104;
  int *local_100;
  undefined4 local_fc;
  undefined4 *local_f8;
  undefined1 local_e8 [64];
  undefined4 local_a8 [16];
  undefined4 local_68 [12];
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_24;
  undefined4 local_20;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a8d2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  this_val = *(int *)((int)this + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = this;
  for (; pvVar3 = local_18, this_val != 0; this_val = FUN_0045e0d0(this_val)) {
    local_f8 = (undefined4 *)0x45ade5;
    pfVar4 = (float *)FUN_0045e090(this_val);
    local_24 = *pfVar4;
    local_f8 = (undefined4 *)0x45adf1;
    i = FUN_0045e090(this_val);
    local_20 = *(undefined4 *)(i + 4);
    local_f8 = (undefined4 *)0x45adfe;
    i = FUN_0045e090(this_val);
    uVar2 = local_20;
    fVar1 = *(float *)(i + 8);
    puVar5 = (undefined4 *)((int)pvVar3 + 0x10);
    puVar6 = local_68;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_38 = local_38 + local_24;
    local_30 = local_30 + fVar1;
    local_34 = uVar2;
    local_100 = *(int **)(this_val + 0x70);
    local_fc = *(undefined4 *)(this_val + 0x74);
    local_f8 = *(undefined4 **)(this_val + 0x78);
    puStack_104 = local_68;
    uStack_108 = 0x45ae48;
    FUN_004b4360();
    local_f8 = (undefined4 *)0x45ae52;
    local_f8 = (undefined4 *)FUN_0045e0a0(this_val);
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
    local_f8 = &DAT_0073b474;
    puVar5 = local_a8;
    puVar6 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_fc = 1;
    local_100 = DAT_0073b4b4;
    puStack_104 = (undefined4 *)0x45aea4;
    puStack_104 = (undefined4 *)(**(code **)(*DAT_0073b4b4 + 0x68))();
    if (puStack_104 != (undefined4 *)0x0) {
      uStack_108 = 0x45aeae;
      puStack_104 = (undefined4 *)FUN_004bb290();
      uStack_108 = 0x14;
      pcStack_10c = s_______Libs_Win3DLib_Include_d3de_00591314;
      pcStack_110 = s__s__d_____FOG__error_setting_tra_005912e0;
      uStack_114 = 0x45aec3;
      FUN_004c4150();
    }
    puStack_104 = (undefined4 *)0x45aecd;
    FUN_0045b120(this_val);
    local_f8 = (undefined4 *)0x45aed4;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045af60 FUN_0045af60 ==== */

void * __thiscall
FUN_0045af60(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_0045ded0(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_LAB_005768a4;
  return this;
}


/* ==== 0045af90 FUN_0045af90 ==== */

undefined2 __thiscall FUN_0045af90(void *this,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST0_00;
  
  fVar1 = param_2 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = fVar1;
  if (*(float *)((int)this + 8) < fVar1) {
    return 0;
  }
  if (*(float *)((int)this + 0x10) <= param_3 + 0.11) {
    if (ABS(*(float *)((int)this + 0x38)) < 3.0) {
      *(undefined4 *)((int)this + 0x24) = 0;
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined4 *)((int)this + 0x34) = 0;
      *(undefined4 *)((int)this + 0x38) = 0;
      *(float *)((int)this + 0x10) = param_3 + 0.1;
      *(undefined4 *)((int)this + 0x3c) = 0;
      return 1;
    }
    *(float *)((int)this + 0x10) = param_3 + 0.12;
    FUN_004602e0(this,0x3f000000,0x3f666666);
    *(float *)((int)this + 0x38) = (float)-(extraout_ST0 * (float10)*(float *)((int)this + 0x38));
    return 1;
  }
  fVar1 = (*(float *)((int)this + 0x18) / *(float *)((int)this + 0x30)) * param_2 +
          *(float *)((int)this + 0x34);
  *(float *)((int)this + 0x34) = fVar1;
  fVar2 = ((*(float *)((int)this + 0x1c) - *(float *)((int)this + 0x30) * 150.0) /
          *(float *)((int)this + 0x30)) * param_2 + *(float *)((int)this + 0x38);
  *(float *)((int)this + 0x38) = fVar2;
  fVar3 = (*(float *)((int)this + 0x20) / *(float *)((int)this + 0x30)) * param_2 +
          *(float *)((int)this + 0x3c);
  *(float *)((int)this + 0x3c) = fVar3;
  *(float *)((int)this + 0xc) = fVar1 * param_2 + *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x10) = fVar2 * param_2 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = fVar3 * param_2 + *(float *)((int)this + 0x14);
  fVar4 = (float10)FUN_004602e0(this,0xbd4ccccd,0x3e800000);
  *(float *)((int)this + 0x24) = (float)(fVar4 + (float10)*(float *)((int)this + 0x24));
  fVar4 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x28) = (float)(fVar4 + (float10)*(float *)((int)this + 0x28));
  FUN_004602e0();
  *(float *)((int)this + 0x2c) = (float)(extraout_ST0_00 + (float10)*(float *)((int)this + 0x2c));
  return 1;
}


/* ==== 0045b100 FUN_0045b100 ==== */

void FUN_0045b100(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_0045af90(in_ECX,param_1,param_2);
  return;
}


/* ==== 0045b120 FUN_0045b120 ==== */

void __thiscall FUN_0045b120(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0045b122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 4))();
  return;
}


/* ==== 0045b1b0 FUN_0045b1b0 ==== */

void FUN_0045b1b0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0045b1c0 FUN_0045b1c0 ==== */

void FUN_0045b1c0(void)

{
  FUN_005584e0(&LAB_0045b1d0);
  return;
}


/* ==== 0045b1f0 FUN_0045b1f0 ==== */

void FUN_0045b1f0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0045b200 FUN_0045b200 ==== */

void FUN_0045b200(void)

{
  FUN_005584e0(&LAB_0045b210);
  return;
}


/* ==== 0045b300 FUN_0045b300 ==== */

undefined1 FUN_0045b300(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_68 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *puStack_10;
  
  puStack_10 = &DAT_00709968;
  i = param_2 * 0xf0 + DAT_00715e50;
  iVar2 = *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  local_1c = *(undefined4 *)(iVar2 + 0x74);
  local_18 = *(undefined4 *)(iVar2 + 0x78);
  local_14 = *(undefined4 *)(iVar2 + 0x7c);
  local_28 = *(undefined4 *)(i + 0xbc);
  local_24 = *(undefined4 *)(i + 0xc0);
  local_20 = *(undefined4 *)(i + 0xc4);
  puVar3 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar4 = auStack_68;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_0045d170(4);
  return uVar1;
}


/* ==== 0045b3b0 FUN_0045b3b0 ==== */

undefined1 FUN_0045b3b0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_68 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_3;
  i = param_2 * 0xf0 + DAT_00715e50;
  iVar2 = *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  local_1c = *(undefined4 *)(iVar2 + 0x74);
  local_18 = *(undefined4 *)(iVar2 + 0x78);
  local_14 = *(undefined4 *)(iVar2 + 0x7c);
  local_28 = *(undefined4 *)(i + 0xbc);
  local_24 = *(undefined4 *)(i + 0xc0);
  local_20 = *(undefined4 *)(i + 0xc4);
  puVar3 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar4 = auStack_68;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_0045d170(1);
  return uVar1;
}


/* ==== 0045b460 FUN_0045b460 ==== */

undefined1 FUN_0045b460(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_68 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *puStack_10;
  
  puStack_10 = &DAT_00709968;
  i = param_2 * 0xf0 + DAT_00715e50;
  iVar2 = *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  local_1c = *(undefined4 *)(iVar2 + 0x74);
  local_18 = *(undefined4 *)(iVar2 + 0x78);
  local_14 = *(undefined4 *)(iVar2 + 0x7c);
  local_28 = *(undefined4 *)(i + 0xbc);
  local_24 = *(undefined4 *)(i + 0xc0);
  local_20 = *(undefined4 *)(i + 0xc4);
  puVar3 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar4 = auStack_68;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_0045d170(5);
  return uVar1;
}


/* ==== 0045b5c0 FUN_0045b5c0 ==== */

undefined1 FUN_0045b5c0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_68 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *puStack_10;
  
  puStack_10 = &DAT_00709968;
  i = param_2 * 0xf0 + DAT_00715e50;
  iVar2 = *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  local_1c = *(undefined4 *)(iVar2 + 0x74);
  local_18 = *(undefined4 *)(iVar2 + 0x78);
  local_14 = *(undefined4 *)(iVar2 + 0x7c);
  local_28 = *(undefined4 *)(i + 0xbc);
  local_24 = *(undefined4 *)(i + 0xc0);
  local_20 = *(undefined4 *)(i + 0xc4);
  puVar3 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar4 = auStack_68;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_0045d170(6);
  return uVar1;
}


