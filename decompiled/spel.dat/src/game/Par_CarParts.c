/* spel.dat — game/Par_CarParts.cpp: 16 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00459610 FUN_00459610 ==== */

void FUN_00459610(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00459620 FUN_00459620 ==== */

void FUN_00459620(void)

{
  FUN_005584e0(&LAB_00459630);
  return;
}


/* ==== 00459650 FUN_00459650 ==== */

void FUN_00459650(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00459660 FUN_00459660 ==== */

void FUN_00459660(void)

{
  FUN_005584e0(&LAB_00459670);
  return;
}


/* ==== 00459680 FUN_00459680 ==== */

void FUN_00459680(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar9 = FUN_00558625();
  iVar10 = FUN_00558625();
  iVar11 = __ftol();
  uVar12 = (100 - iVar9 % 200) + iVar11;
  iVar9 = (uVar12 & DAT_005b23bc) * 4;
  fVar1 = *(float *)(iVar9 + DAT_0073b578);
  fVar2 = *param_2;
  fVar3 = *(float *)(iVar9 + DAT_0073b530);
  fVar4 = param_2[2];
  iVar9 = FUN_00558625();
  iVar11 = (uVar12 & DAT_005b23bc) * 4;
  fVar5 = *(float *)(iVar11 + DAT_0073b530);
  fVar6 = *param_2;
  fVar7 = *(float *)(iVar11 + DAT_0073b578);
  fVar8 = param_2[2];
  iVar11 = FUN_00558625();
  *param_1 = ((fVar1 * fVar2 - fVar3 * fVar4) + 15.0) - (float)(iVar9 % 0x1e);
  param_1[1] = (float)(iVar10 % 0x14) + 20.0;
  param_1[2] = (fVar7 * fVar8 + fVar5 * fVar6 + 15.0) - (float)(iVar11 % 0x1e);
  return;
}


/* ==== 004597a0 FUN_004597a0 ==== */

void * __thiscall FUN_004597a0(void *this,int param_2,void *param_3)

{
  undefined4 *puVar1;
  void *this_val;
  int i;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 in_stack_0000003c;
  float in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  float in_stack_00000054;
  undefined4 auStackY_a4 [14];
  undefined4 uStackY_6c;
  undefined4 uStackY_68;
  float local_64;
  char *local_60;
  char *local_5c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  undefined4 this_val_2;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a83e;
  pvStack_c = ExceptionList;
  local_64 = in_stack_00000048;
  local_60 = (char *)in_stack_0000004c;
  local_5c = (char *)in_stack_00000050;
  puVar1 = &param_3;
  puVar2 = auStackY_a4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &pvStack_c;
  FUN_0045e590(this);
  *(undefined ***)this = &PTR_LAB_00576868;
  local_4 = 0;
  local_5c = (char *)0x459825;
  i = FUN_004b75a0(&DAT_00712130,PTR_s_Par_Damage_005a513c);
  in_stack_00000054 = *(float *)(DAT_0073b168 + i * 9);
  local_5c = (char *)&param_3;
  local_20 = in_stack_0000003c;
  local_24 = 0;
  local_1c = 0;
  local_60 = (char *)0x459869;
  puVar1 = (undefined4 *)FUN_00459680();
  local_30 = *puVar1;
  local_2c = puVar1[1];
  local_28 = puVar1[2];
  local_5c = (char *)0x459890;
  this_val = operator_new(0x70);
  local_4._0_1_ = 1;
  param_3 = this_val;
  if (this_val == (void *)0x0) {
    i = 0;
  }
  else {
    local_5c = (char *)&local_30;
    local_60 = (char *)0x3f800000;
    local_64 = 1.0;
    uStackY_68 = 0x3f000000;
    uStackY_6c = 0x4598c5;
    fVar3 = (float10)FUN_004602e0();
    local_64 = (float)fVar3;
    uStackY_68 = 0x4598d3;
    i = FUN_00459c00(this_val);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(int *)((int)this + 0xac) = i;
  if (i == 0) {
    local_5c = s_C__Work_A2IV_Game_prog_Par_CarPa_005a514c;
    local_60 = s___s___d_Not_enough_memory_to_cre_005a5174;
    local_64 = 6.391527e-39;
    FUN_004c4150();
  }
  this_val_2 = *(undefined4 *)((int)this + 0xac);
  in_stack_00000054 = (float)(int)in_stack_00000054 - 1.0;
  local_5c = (char *)0x0;
  local_60 = (char *)0x459926;
  FUN_004602e0();
  param_3 = (void *)__ftol();
  local_5c = (char *)0x45993a;
  FUN_0045e120(this_val_2);
  local_5c = (char *)0x459942;
  FUN_0045e110(this_val_2);
  if (0 < param_2) {
    do {
      local_5c = auStack_18;
      local_60 = (char *)0x459966;
      puVar1 = (undefined4 *)FUN_00459680();
      local_30 = *puVar1;
      local_2c = puVar1[1];
      local_28 = puVar1[2];
      local_5c = (char *)0x45998d;
      this_val = operator_new(0x70);
      local_4._0_1_ = 2;
      if (this_val == (void *)0x0) {
        i = 0;
      }
      else {
        local_5c = (char *)&local_30;
        local_60 = (char *)0x3f800000;
        local_64 = 1.0;
        uStackY_68 = 0x3f000000;
        uStackY_6c = 0x4599c2;
        fVar3 = (float10)FUN_004602e0();
        local_64 = (float)fVar3;
        uStackY_68 = 0x4599d0;
        i = FUN_00459c00(this_val);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (i == 0) {
        local_5c = s_C__Work_A2IV_Game_prog_Par_CarPa_005a51b4;
        local_60 = s___s___d_Not_enough_memory_to_cre_005a51dc;
        local_64 = 6.391876e-39;
        FUN_004c4150();
      }
      local_5c = (char *)0x4599fe;
      FUN_0045dff0(this_val_2);
      local_5c = (char *)0x0;
      local_60 = (char *)0x459a0d;
      FUN_004602e0();
      local_5c = (char *)0x459a1e;
      FUN_0045e120(i);
      local_5c = (char *)0x459a26;
      FUN_0045e110(i);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = pvStack_c;
  return this;
}


/* ==== 00459c00 FUN_00459c00 ==== */

void * __thiscall
FUN_00459c00(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_0045ded0(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_LAB_00576870;
  return this;
}


/* ==== 00459c30 FUN_00459c30 ==== */

void FUN_00459c30(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_00459c50(in_ECX,param_1,param_2);
  return;
}


/* ==== 00459c50 FUN_00459c50 ==== */

undefined2 __thiscall FUN_00459c50(void *this,float param_2,float param_3)

{
  int iVar1;
  float10 fVar2;
  float10 extraout_ST0;
  
  param_2 = param_2 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = param_2;
  if (*(float *)((int)this + 8) < param_2) {
    return 0;
  }
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0x38) =
       (float)((float10)*(float *)((int)this + 0x38) - fVar2 * (float10)100.0);
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar2 = fVar2 * (float10)*(float *)((int)this + 0x38) + (float10)*(float *)((int)this + 0x10);
  *(float *)((int)this + 0x10) = (float)fVar2;
  if (fVar2 < (float10)param_3) {
    *(float *)((int)this + 0x10) = param_3;
    *(float *)((int)this + 0x38) = -(*(float *)((int)this + 0x38) * 0.8);
  }
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0x34) =
       (float)((float10)*(float *)((int)this + 0x34) - fVar2 * (float10)*(float *)((int)this + 0x34)
              );
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0x3c) =
       (float)((float10)*(float *)((int)this + 0x3c) - fVar2 * (float10)*(float *)((int)this + 0x3c)
              );
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0xc) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x34) + (float10)*(float *)((int)this + 0xc))
  ;
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0x14) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x3c) + (float10)*(float *)((int)this + 0x14)
              );
  iVar1 = FUN_00558625();
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0x24) =
       (float)(fVar2 * (float10)(iVar1 % 10) + (float10)*(float *)((int)this + 0x24));
  iVar1 = FUN_00558625();
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0x28) =
       (float)(fVar2 * (float10)(iVar1 % 10) + (float10)*(float *)((int)this + 0x28));
  iVar1 = FUN_00558625();
  FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0x2c) =
       (float)(extraout_ST0 * (float10)(iVar1 % 10) + (float10)*(float *)((int)this + 0x2c));
  return 1;
}


/* ==== 00459de0 FUN_00459de0 ==== */

undefined4 FUN_00459de0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  uint __ftol_result;
  int i;
  undefined4 uVar2;
  void *this_val;
  undefined4 *puVar3;
  undefined4 auStack_8c [16];
  float local_4c;
  undefined4 local_48;
  float local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a853;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result = __ftol();
  i = (__ftol_result & DAT_005b23bc) * 4;
  fVar1 = *(float *)(i + DAT_0073b578) * *param_2 - *(float *)(i + DAT_0073b530) * param_2[2];
  local_24 = fVar1;
  if ((fVar1 == 0.0) &&
     (*(float *)(i + DAT_0073b578) * param_2[2] + *(float *)(i + DAT_0073b530) * *param_2 == 0.0)) {
    local_24 = 0.0;
  }
  FUN_00460370();
  uVar2 = __ftol();
  local_48 = 0x459f1d;
  this_val = operator_new(0xb0);
  local_4 = 0;
  if (this_val != (void *)0x0) {
    local_48 = 0;
    puVar3 = auStack_8c;
    local_4c = local_24 * 10.0 + fVar1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar2 = FUN_004597a0(this_val,uVar2);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 00459fd0 FUN_00459fd0 ==== */

void FUN_00459fd0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00459fe0 FUN_00459fe0 ==== */

void FUN_00459fe0(void)

{
  FUN_005584e0(&LAB_00459ff0);
  return;
}


/* ==== 0045a010 FUN_0045a010 ==== */

void FUN_0045a010(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0045a020 FUN_0045a020 ==== */

void FUN_0045a020(void)

{
  FUN_005584e0(&LAB_0045a030);
  return;
}


/* ==== 0045a040 FUN_0045a040 ==== */

undefined4 FUN_0045a040(void)

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
  puStack_8 = &LAB_0056a86b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result = __ftol();
  iVar4 = (__ftol_result & DAT_005b23bc) * 4;
  fVar1 = *(float *)(iVar4 + DAT_0073b578);
  fVar2 = *(float *)(iVar4 + DAT_0073b530);
  fVar3 = *(float *)(iVar4 + DAT_0073b530) * in_stack_00000044 +
          *(float *)(iVar4 + DAT_0073b578) * in_stack_0000004c;
  local_2c = 6.394439e-39;
  FUN_00460370();
  FUN_004a6800(&DAT_007128b0);
  iVar4 = __ftol();
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  local_2c = 6.394512e-39;
  this_val = operator_new(0xb0);
  local_4 = 0;
  if (this_val != (void *)0x0) {
    local_30 = 0;
    puVar6 = auStack_74;
    local_34 = (fVar1 * in_stack_00000044 - fVar2 * in_stack_0000004c) * 6.0;
    local_2c = fVar3 * 5.0 + fVar3;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar6 = *(undefined4 *)register0x00000010;
      puVar6 = puVar6 + 1;
    }
    uVar5 = FUN_0045a1d0(this_val,iVar4);
    ExceptionList = local_c;
    return uVar5;
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 0045a1d0 FUN_0045a1d0 ==== */

void * __thiscall FUN_0045a1d0(void *this,int param_2)

{
  void *this_val;
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
  puStack_8 = &LAB_0056a888;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)&stack0x00000008;
  puVar2 = auStackY_98;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  j = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_0057687c;
  i = FUN_004b75a0(&DAT_00712130,s_par_dirt_005a5214);
  in_stack_00000054 = *(int *)(DAT_0073b168 + i * 9);
  *(undefined4 *)((int)this + 0x94) = 0x3f333333;
  if (0 < param_2) {
    in_stack_00000048 = (float)in_stack_00000054 - 1.0;
    do {
      FUN_004602e0();
      FUN_004602e0();
      FUN_004602e0();
      uStackY_60 = 0x45a314;
      this_val = operator_new(0x7c);
      local_4._0_1_ = 1;
      if (this_val == (void *)0x0) {
        i = 0;
      }
      else {
        uStackY_60 = 0x45a344;
        FUN_004602e0();
        i = FUN_0045a650(this_val);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      fVar3 = (float10)FUN_004602e0();
      *(undefined4 *)(i + 0x70) = 0x3f800000;
      *(undefined4 *)(i + 0x74) = 0x3f800000;
      *(float *)(i + 0x78) = (float)fVar3;
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


