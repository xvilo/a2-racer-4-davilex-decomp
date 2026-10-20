/* spel.dat — game/Par_Leafs.cpp: 18 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045bd30 FUN_0045bd30 ==== */

undefined1 FUN_0045bd30(int param_1,int param_2)

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
  uVar1 = FUN_0045d170(7);
  return uVar1;
}


/* ==== 0045be20 FUN_0045be20 ==== */

void FUN_0045be20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0045be30 FUN_0045be30 ==== */

void FUN_0045be30(void)

{
  FUN_005584e0(&LAB_0045be40);
  return;
}


/* ==== 0045be60 FUN_0045be60 ==== */

void FUN_0045be60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0045be70 FUN_0045be70 ==== */

void FUN_0045be70(void)

{
  FUN_005584e0(&LAB_0045be80);
  return;
}


/* ==== 0045be90 FUN_0045be90 ==== */

void FUN_0045be90(void)

{
  float fVar1;
  float fVar2;
  uint __ftol_result_2;
  int i;
  void *this_val;
  undefined4 __ftol_result;
  undefined4 *puVar3;
  float in_stack_00000044;
  float in_stack_0000004c;
  undefined4 auStack_74 [16];
  float local_34;
  undefined4 local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a8eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result_2 = __ftol();
  i = (__ftol_result_2 & DAT_005b23bc) * 4;
  fVar1 = *(float *)(i + DAT_0073b578);
  fVar2 = *(float *)(i + DAT_0073b530);
  FUN_00460370();
  local_30 = 0x45bf6a;
  this_val = operator_new(0xb0);
  local_4 = 0;
  if (this_val != (void *)0x0) {
    local_30 = 0;
    puVar3 = auStack_74;
    local_34 = (fVar1 * in_stack_00000044 - fVar2 * in_stack_0000004c) * 11.0;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar3 = *(undefined4 *)register0x00000010;
      puVar3 = puVar3 + 1;
    }
    FUN_004a6800(&DAT_007128b0);
    __ftol_result = __ftol();
    FUN_0045bfe0(this_val,__ftol_result);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0045bfe0 FUN_0045bfe0 ==== */

void * __thiscall FUN_0045bfe0(void *this,int param_2,float param_3)

{
  float *pfVar1;
  void *this_val_2;
  undefined4 this_val;
  int i;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_stack_0000003c;
  uint in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  float *in_stack_00000054;
  undefined4 auStackY_90 [14];
  undefined4 uStackY_58;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pfVar1 = in_stack_00000054;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a913;
  local_c = ExceptionList;
  puVar3 = &param_3;
  puVar4 = auStackY_90;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_005768bc;
  i = FUN_004b75a0(&DAT_00712130,s_par_Leaf_005a5308);
  in_stack_00000048 = *(int *)(DAT_0073b168 + i * 9);
  *pfVar1 = -pfVar1[2];
  pfVar1[2] = -pfVar1[2];
  FUN_004602e0();
  FUN_004602e0();
  FUN_004602e0();
  uStackY_58 = 0x45c101;
  this_val_2 = operator_new(0x70);
  local_4._0_1_ = 1;
  if (this_val_2 == (void *)0x0) {
    in_stack_00000054 = (float *)0x0;
  }
  else {
    uStackY_58 = 0x45c134;
    in_stack_00000054 = this_val_2;
    FUN_004602e0();
    in_stack_00000054 = (float *)FUN_0045c630(this_val_2);
  }
  this_val = in_stack_00000054;
  local_4 = (uint)local_4._1_3_ << 8;
  *(float **)((int)this + 0xac) = in_stack_00000054;
  param_3 = (float)(int)in_stack_00000048 - 1.0;
  FUN_004602e0();
  __ftol();
  FUN_0045e120(this_val);
  FUN_0045e110(this_val);
  in_stack_00000048 = 1;
  if (1 < param_2) {
    do {
      FUN_004602e0();
      FUN_004602e0();
      uVar2 = in_stack_00000048 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      if (uVar2 == 0) {
        FUN_004602e0();
        FUN_004602e0();
        FUN_004602e0();
      }
      else {
        FUN_004602e0();
        FUN_004602e0();
        FUN_004602e0();
      }
      this_val_2 = operator_new(0x70);
      local_4._0_1_ = 2;
      if (this_val_2 == (void *)0x0) {
        this_val = 0;
      }
      else {
        uStackY_58 = 0x45c2fe;
        FUN_004602e0();
        this_val = FUN_0045c630(this_val_2);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045dff0(in_stack_00000054);
      FUN_004602e0();
      __ftol();
      FUN_0045e120(this_val);
      FUN_0045e110(this_val);
      in_stack_00000048 = in_stack_00000048 + 1;
    } while ((int)in_stack_00000048 < param_2);
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 0045c4a0 FUN_0045c4a0 ==== */

void __thiscall FUN_0045c4a0(void *this)

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
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a91d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  this_val = *(int *)((int)this + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = this;
  for (; pvVar3 = local_18, this_val != 0; this_val = FUN_0045e0d0(this_val)) {
    puStack_f8 = (undefined4 *)0x45c4e5;
    pfVar4 = (float *)FUN_0045e090(this_val);
    local_24 = *pfVar4;
    puStack_f8 = (undefined4 *)0x45c4f1;
    i = FUN_0045e090(this_val);
    local_20 = *(undefined4 *)(i + 4);
    puStack_f8 = (undefined4 *)0x45c4fe;
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
    puStack_f8 = (undefined4 *)0x45c52e;
    puStack_f8 = (undefined4 *)FUN_0045e0a0(this_val);
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
    iStack_104 = 0x45c580;
    iStack_104 = (**(code **)(*DAT_0073b4b4 + 0x68))();
    if (iStack_104 != 0) {
      uStack_108 = 0x45c58a;
      iStack_104 = FUN_004bb290();
      uStack_108 = 0x14;
      pcStack_10c = s_______Libs_Win3DLib_Include_d3de_00591314;
      pcStack_110 = s__s__d_____FOG__error_setting_tra_005912e0;
      uStack_114 = 0x45c59f;
      FUN_004c4150();
    }
    iStack_104 = 0x45c5a9;
    FUN_0045c7a0(this_val);
    puStack_f8 = (undefined4 *)0x45c5b0;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045c630 FUN_0045c630 ==== */

void * __thiscall
FUN_0045c630(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_0045ded0(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_LAB_005768c4;
  return this;
}


/* ==== 0045c660 FUN_0045c660 ==== */

undefined2 __thiscall FUN_0045c660(void *this,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 extraout_ST0;
  
  fVar1 = param_2 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = fVar1;
  if (*(float *)((int)this + 8) < fVar1) {
    return 0;
  }
  if (*(float *)((int)this + 0x10) <= param_3 + 0.11) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(float *)((int)this + 0x10) = param_3 + 0.1;
    return 1;
  }
  fVar1 = (*(float *)((int)this + 0x18) / *(float *)((int)this + 0x30)) * param_2 +
          *(float *)((int)this + 0x34);
  *(float *)((int)this + 0x34) = fVar1;
  fVar2 = ((*(float *)((int)this + 0x1c) - *(float *)((int)this + 0x30) * 9.81) /
          *(float *)((int)this + 0x30)) * param_2 + *(float *)((int)this + 0x38);
  *(float *)((int)this + 0x38) = fVar2;
  fVar3 = (*(float *)((int)this + 0x20) / *(float *)((int)this + 0x30)) * param_2 +
          *(float *)((int)this + 0x3c);
  *(float *)((int)this + 0x3c) = fVar3;
  *(float *)((int)this + 0xc) = fVar1 * param_2 + *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x10) = fVar2 * param_2 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = fVar3 * param_2 + *(float *)((int)this + 0x14);
  fVar4 = (float10)FUN_004602e0(this,0xbdcccccd,0x3f000000);
  *(float *)((int)this + 0x24) = (float)(fVar4 + (float10)*(float *)((int)this + 0x24));
  fVar4 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x28) = (float)(fVar4 + (float10)*(float *)((int)this + 0x28));
  FUN_004602e0();
  *(float *)((int)this + 0x2c) = (float)(extraout_ST0 + (float10)*(float *)((int)this + 0x2c));
  return 1;
}


/* ==== 0045c780 FUN_0045c780 ==== */

void FUN_0045c780(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_0045c660(in_ECX,param_1,param_2);
  return;
}


/* ==== 0045c7a0 FUN_0045c7a0 ==== */

void __thiscall FUN_0045c7a0(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0045c7a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 4))();
  return;
}


/* ==== 0045c830 FUN_0045c830 ==== */

void FUN_0045c830(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0045c840 FUN_0045c840 ==== */

void FUN_0045c840(void)

{
  FUN_005584e0(&LAB_0045c850);
  return;
}


/* ==== 0045c870 FUN_0045c870 ==== */

void FUN_0045c870(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0045c880 FUN_0045c880 ==== */

void FUN_0045c880(void)

{
  FUN_005584e0(&LAB_0045c890);
  return;
}


/* ==== 0045c8a0 FUN_0045c8a0 ==== */

void FUN_0045c8a0(void)

{
  float fVar1;
  float fVar2;
  uint __ftol_result_2;
  int i;
  void *this_val;
  undefined4 __ftol_result;
  undefined4 *puVar3;
  float in_stack_00000044;
  float in_stack_0000004c;
  undefined4 auStack_74 [16];
  float local_34;
  undefined4 local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a93b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result_2 = __ftol();
  i = (__ftol_result_2 & DAT_005b23bc) * 4;
  fVar1 = *(float *)(i + DAT_0073b578);
  fVar2 = *(float *)(i + DAT_0073b530);
  FUN_00460370();
  local_30 = 0x45c939;
  this_val = operator_new(0xb0);
  local_4 = 0;
  if (this_val != (void *)0x0) {
    local_30 = 0;
    puVar3 = auStack_74;
    local_34 = fVar1 * in_stack_00000044 - fVar2 * in_stack_0000004c;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar3 = *(undefined4 *)register0x00000010;
      puVar3 = puVar3 + 1;
    }
    FUN_004a6800(&DAT_007128b0);
    __ftol_result = __ftol();
    FUN_0045c9c0(this_val,__ftol_result);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0045c9c0 FUN_0045c9c0 ==== */

void * __thiscall FUN_0045c9c0(void *this,int param_2,void *param_3)

{
  void *this_val_3;
  undefined4 this_val_2;
  int i;
  undefined4 this_val;
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  puStack_8 = &LAB_0056a963;
  local_c = ExceptionList;
  puVar1 = &param_3;
  puVar2 = auStackY_88;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  this_val = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_005768d0;
  i = FUN_004b75a0(&DAT_00712130,s_par_mail_005a53dc);
  in_stack_00000054 = *(float *)(DAT_0073b168 + i * 9);
  FUN_004602e0();
  in_stack_00000048 = in_stack_0000003c + 0.12;
  FUN_004602e0();
  FUN_004602e0();
  uStackY_50 = 0x45cace;
  this_val_3 = operator_new(0x70);
  local_4._0_1_ = 1;
  param_3 = this_val_3;
  if (this_val_3 != (void *)0x0) {
    uStackY_50 = 0x45cafe;
    FUN_004602e0();
    this_val = FUN_0045cf00(this_val_3);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)((int)this + 0xac) = this_val;
  in_stack_00000054 = (float)(int)in_stack_00000054 - 1.0;
  FUN_004602e0();
  __ftol();
  FUN_0045e120(this_val);
  FUN_0045e110(this_val);
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      FUN_004602e0();
      FUN_004602e0();
      FUN_004602e0();
      uStackY_50 = 0x45cbda;
      this_val_3 = operator_new(0x70);
      local_4._0_1_ = 2;
      param_3 = this_val_3;
      if (this_val_3 == (void *)0x0) {
        this_val_2 = 0;
      }
      else {
        uStackY_50 = 0x45cc0a;
        FUN_004602e0();
        this_val_2 = FUN_0045cf00(this_val_3);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045dff0(this_val);
      FUN_004602e0();
      __ftol();
      FUN_0045e120(this_val_2);
      FUN_0045e110(this_val_2);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = local_c;
  return this;
}


