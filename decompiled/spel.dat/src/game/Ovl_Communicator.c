/* spel.dat — game/Ovl_Communicator.cpp: 40 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004890b0 FUN_004890b0 ==== */

void FUN_004890b0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004890c0 FUN_004890c0 ==== */

void FUN_004890c0(void)

{
  FUN_005584e0(&LAB_004890d0);
  return;
}


/* ==== 004890f0 FUN_004890f0 ==== */

void FUN_004890f0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00489100 FUN_00489100 ==== */

void FUN_00489100(void)

{
  FUN_005584e0(&LAB_00489110);
  return;
}


/* ==== 004891a0 FUN_004891a0 ==== */

int FUN_004891a0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *this_val;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d63b;
  local_c = ExceptionList;
  if (DAT_0071278c == 0) {
    i = 0xffffffff;
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abaa0;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    ExceptionList = &local_c;
    FUN_00402940(local_3c,s_C__Work_A2IV_Game_prog_Ovl_Commu_005abaa0,~i - 1);
    local_4 = 0;
    uVar2 = FUN_0049df90(local_2c,s_Overlay_not_initialized_005abacc);
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar2 = FUN_004882e0(&DAT_007126e8,uVar2,local_3c,0x6f);
    FUN_00487bc0(uVar2);
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_4 = 0xffffffff;
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
    this_val = operator_new(0x3d0);
    local_4 = 2;
    if (this_val == (void *)0x0) {
      DAT_0071278c = 0;
    }
    else {
      uVar2 = FUN_004882e0(&DAT_007126e8);
      DAT_0071278c = FUN_004895e0(this_val,uVar2);
    }
    local_4 = 0xffffffff;
    FUN_004028f0(local_4c,0);
    i = 0xffffffff;
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abae4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_4c,i,1);
    if (cVar1 != '\0') {
      pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abae4;
      pcVar4 = local_48;
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
      local_48[i] = '\0';
      local_44 = i;
    }
    local_4 = 3;
    uVar2 = FUN_0049df90(local_1c,s_Cannot_create_communicator_insta_005abb10);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_00487bc0(DAT_0071278c,uVar2,local_4c,0x71);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_4 = 0xffffffff;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    if (local_48 != (char *)0x0) {
      cVar1 = local_48[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_48 + -1);
      }
      else {
        local_48[-1] = cVar1 + -1;
      }
    }
    local_48 = (char *)0x0;
    local_44 = 0;
    local_40 = 0;
    FUN_0048ae80(DAT_0071278c);
  }
  ExceptionList = local_c;
  return DAT_0071278c;
}


/* ==== 004893f0 FUN_004893f0 ==== */

void __thiscall FUN_004893f0(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  int this_val;
  
  puStack_8 = &LAB_0056d6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00576f78;
  this_val = *(int *)((int)this + 0x3cc);
  local_4 = 9;
  *(undefined ***)((int)this + 0x3c8) = &PTR_LAB_00576f68;
  if (this_val != 0) {
    FUN_00490c40(*(undefined4 *)(this_val + 4),*(undefined4 *)(this_val + 8));
    FUN_0054b339(*(undefined4 *)(this_val + 4));
    *(undefined4 *)(this_val + 4) = 0;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x3cc) = 0;
  this_val = *(int *)((int)this + 700);
  local_4._0_1_ = 8;
  *(undefined ***)((int)this + 0x2b8) = &PTR_LAB_00576f58;
  if (this_val != 0) {
    FUN_004909f0(*(int *)(this_val + 4),*(int *)(this_val + 8));
    FUN_0054b339(*(undefined4 *)(this_val + 4));
    *(undefined4 *)(this_val + 4) = 0;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 700) = 0;
  this_val = *(int *)((int)this + 0x2b4);
  local_4._0_1_ = 7;
  *(undefined ***)((int)this + 0x2b0) = &PTR_LAB_00576f48;
  if (this_val != 0) {
    FUN_0042f530(*(undefined4 *)(this_val + 4),*(undefined4 *)(this_val + 8));
    FUN_0054b339(*(undefined4 *)(this_val + 4));
    *(undefined4 *)(this_val + 4) = 0;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x2b4) = 0;
  this_val = *(int *)((int)this + 0x2ac);
  local_4._0_1_ = 6;
  *(undefined ***)((int)this + 0x2a8) = &PTR_LAB_00576f38;
  if (this_val != 0) {
    FUN_004da4d0(this_val);
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x2ac) = 0;
  this_val = *(int *)((int)this + 0x2a4);
  local_4._0_1_ = 5;
  *(undefined ***)((int)this + 0x2a0) = &PTR_LAB_00576f38;
  if (this_val != 0) {
    FUN_0042f530(*(undefined4 *)(this_val + 4),*(undefined4 *)(this_val + 8));
    FUN_0054b339(*(undefined4 *)(this_val + 4));
    *(undefined4 *)(this_val + 4) = 0;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x2a4) = 0;
  local_4._0_1_ = 4;
  FUN_0049bc50((int)this + 0x280);
  local_4._0_1_ = 3;
  FUN_0049c920((int)this + 0x1a0);
  local_4._0_1_ = 2;
  FUN_0049c920((int)this + 0x128);
  local_4._0_1_ = 1;
  FUN_0049c920((int)this + 0xb0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0049c920((int)this + 0x38);
  local_4 = 0xffffffff;
  FUN_004925f0(this);
  ExceptionList = local_c;
  return;
}


/* ==== 004895e0 FUN_004895e0 ==== */

void * __thiscall FUN_004895e0(void *this,undefined4 param_2)

{
  char cVar1;
  undefined1 *operator_new_result;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d75d;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar2 = s_OVL_COMMUNICATOR_005ab7fc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_OVL_COMMUNICATOR_005ab7fc;
    pcVar3 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_18[i] = '\0';
    local_14 = i;
  }
  local_4 = 0;
  FUN_004924a0(this,param_2,local_1c);
  local_4._0_1_ = 2;
  FUN_004028f0(local_1c,1);
  FUN_0049c910((int)this + 0x38);
  local_4._0_1_ = 3;
  FUN_0049c910((int)this + 0xb0);
  local_4._0_1_ = 4;
  FUN_0049c910((int)this + 0x128);
  local_4._0_1_ = 5;
  FUN_0049c910((int)this + 0x1a0);
  local_4._0_1_ = 6;
  FUN_0049bae0((int)this + 0x280);
  local_4._0_1_ = 7;
  *(undefined ***)((int)this + 0x2a0) = &PTR_LAB_00576f38;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_2;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x2a4) = operator_new_result;
  local_4._0_1_ = 8;
  *(undefined ***)((int)this + 0x2a8) = &PTR_LAB_00576f38;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_2;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x2ac) = operator_new_result;
  local_4._0_1_ = 9;
  *(undefined ***)((int)this + 0x2b0) = &PTR_LAB_00576f48;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_2;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x2b4) = operator_new_result;
  local_4._0_1_ = 10;
  *(undefined ***)((int)this + 0x2b8) = &PTR_LAB_00576f58;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_2;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 700) = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  *(undefined ***)((int)this + 0x3c8) = &PTR_LAB_00576f68;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_2;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x3cc) = operator_new_result;
  *(undefined ***)this = &PTR_FUN_00576f78;
  ExceptionList = local_c;
  return this;
}


/* ==== 00489800 FUN_00489800 ==== */

void FUN_00489800(int param_1)

{
  if (param_1 != -1) {
    FUN_0041be70(&DAT_005d3118,10,0,param_1);
  }
  return;
}


/* ==== 00489820 FUN_00489820 ==== */

undefined1 * FUN_00489820(undefined1 *this_val,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  uint i;
  undefined1 local_1c [4];
  int iStack_18;
  int local_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056d777;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_1c[0] = this_val._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,0);
  i = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_4 != 0) {
    do {
      if (param_3 == 0) {
        pcVar3 = "";
      }
      else {
        if ((*(char *)(param_3 + -1) != '\0') && (*(char *)(param_3 + -1) != -1)) {
          FUN_00402a00(&param_2,param_4,0);
        }
        if (param_3 != 0) {
          *(undefined1 *)(param_3 + -1) = 0xff;
        }
        pcVar3 = (char *)(param_3 + i);
      }
      cVar4 = *pcVar3;
      if (('`' < cVar4) && (cVar4 < '{')) {
        cVar4 = cVar4 + -0x20;
      }
      if (-local_14 - 1U < 2) {
        FUN_0054b1b4();
      }
      iVar1 = local_14 + 1;
      cVar2 = FUN_00402a00(local_1c,iVar1,0);
      if (cVar2 != '\0') {
        *(char *)(local_14 + iStack_18) = cVar4;
        *(undefined1 *)(iStack_18 + iVar1) = 0;
        local_14 = iVar1;
      }
      i = i + 1;
    } while (i < param_4);
  }
  *this_val = local_1c[0];
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  FUN_004093c0(this_val,local_1c,0,0xffffffff);
  if (iStack_18 != 0) {
    cVar4 = *(char *)(iStack_18 + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_0054b339(iStack_18 + -1);
    }
    else {
      *(char *)(iStack_18 + -1) = cVar4 + -1;
    }
  }
  iStack_18 = 0;
  local_14 = 0;
  uStack_10 = 0;
  if (param_3 != 0) {
    cVar4 = *(char *)(param_3 + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_0054b339(param_3 + -1);
    }
    else {
      *(char *)(param_3 + -1) = cVar4 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return this_val;
}


/* ==== 004899a0 FUN_004899a0 ==== */

void __thiscall FUN_004899a0(void *this,undefined4 this_val)

{
  int iVar1;
  undefined4 this_val_2;
  undefined4 uVar2;
  
  iVar1 = FUN_0049df30(this_val);
  if (iVar1 != 0) {
    switch(iVar1) {
    case 1:
      iVar1 = *(int *)((int)this + 0x374) + 10;
      *(int *)((int)this + 0x374) = iVar1;
      if (100 < iVar1) {
        *(undefined4 *)((int)this + 0x374) = 100;
      }
      this_val_2 = FUN_0049df20(this_val);
      *(undefined4 *)((int)this + 0x37c) = this_val_2;
      return;
    case 2:
      this_val_2 = FUN_0049df20(this_val);
      *(undefined4 *)((int)this + 0x27c) = this_val_2;
      FUN_00489b70(this,*(undefined4 *)((int)this + 0x264));
      return;
    case 3:
      this_val_2 = FUN_0049df20(this_val);
      *(undefined4 *)((int)this + 0x27c) = this_val_2;
      FUN_00489b70(this,*(undefined4 *)((int)this + 0x268));
      return;
    case 4:
      this_val_2 = FUN_0049df20(this_val);
      *(undefined4 *)((int)this + 0x27c) = this_val_2;
      FUN_00489b70(this,*(undefined4 *)((int)this + 0x26c));
      return;
    case 5:
      this_val_2 = FUN_0049df20(this_val);
      *(undefined4 *)((int)this + 0x27c) = this_val_2;
      FUN_00489b70(this,*(undefined4 *)((int)this + 0x270));
      return;
    case 6:
      this_val_2 = FUN_0049df20(this_val);
      uVar2 = 0;
      this_val_2 = FUN_0049eb50(&DAT_006fbb5c,this_val_2);
      FUN_0049e550(this_val_2,uVar2);
    }
  }
  return;
}


/* ==== 00489ac0 FUN_00489ac0 ==== */

void __thiscall FUN_00489ac0(void *this)

{
  *(undefined4 *)((int)this + 0x37c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x398) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3b4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x278) = 0xffffffff;
  *(undefined4 *)((int)this + 0x27c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x370) = 1;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined1 *)((int)this + 0x38c) = 1;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined1 *)((int)this + 0x3a8) = 1;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  FUN_00489df0((int)this + 0x364,0);
  FUN_00489df0((int)this + 0x380,0);
  FUN_00489df0((int)this + 0x39c,0);
  *(undefined1 *)((int)this + 0x238) = 1;
  FUN_0048f090(this,0);
  return;
}


/* ==== 00489b70 FUN_00489b70 ==== */

void __thiscall FUN_00489b70(void *this,int *param_2)

{
  if (*(int **)((int)this + 0x274) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x274) + 0x20))(0);
  }
  *(undefined4 *)((int)this + 0x278) = 0xffffffff;
  *(int **)((int)this + 0x274) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x20))(1);
    FUN_00489800(*(undefined4 *)((int)this + 0x27c));
    *(int *)((int)this + 0x278) = *(int *)((int)this + 0x260) + 6000;
  }
  return;
}


/* ==== 00489bd0 FUN_00489bd0 ==== */

void __thiscall FUN_00489bd0(void *this)

{
  if ((*(int *)((int)this + 0x278) != -1) &&
     (*(int *)((int)this + 0x278) <= *(int *)((int)this + 0x260))) {
    (**(code **)(**(int **)((int)this + 0x274) + 0x20))(0);
    *(undefined4 *)((int)this + 0x274) = 0;
    *(undefined4 *)((int)this + 0x278) = 0xffffffff;
  }
  return;
}


/* ==== 00489c10 FUN_00489c10 ==== */

void __thiscall FUN_00489c10(void *this)

{
  int iVar1;
  
  FUN_00489d30(this,(int)this + 0x364);
  FUN_00489df0((int)this + 0x380,0.8 <= *(float *)((int)this + 0x248));
  FUN_00489df0((int)this + 0x39c,*(float *)((int)this + 0x24c) <= 0.2);
  iVar1 = FUN_00429360(DAT_006fba58);
  if (iVar1 == 0) {
    FUN_00489b70(this,0);
    return;
  }
  FUN_00489bd0(this);
  return;
}


/* ==== 00489d30 FUN_00489d30 ==== */

void __thiscall FUN_00489d30(void *this,int param_2)

{
  undefined4 this_val;
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_2 + 0x10) != 0) || (*(char *)(param_2 + 0xc) != '\0')) {
    if (*(int *)(param_2 + 0x10) < 1) {
      FUN_00489df0(param_2,0);
      *(undefined4 *)(param_2 + 0x10) = 0;
      if (*(int *)(param_2 + 0x18) != -1) {
        this_val = FUN_0049eb50(&DAT_006fbb5c,*(int *)(param_2 + 0x18));
        FUN_0049e570(this_val);
        return;
      }
    }
    else {
      if (*(int *)(param_2 + 0x18) != -1) {
        this_val = FUN_0049eb50(&DAT_006fbb5c,*(int *)(param_2 + 0x18));
        iVar1 = FUN_0049e630(this_val);
        if (iVar1 == 0) {
          uVar2 = 1;
          this_val = FUN_0049eb50(&DAT_006fbb5c,*(undefined4 *)(param_2 + 0x18));
          FUN_0049e550(this_val,uVar2);
        }
      }
      if (*(int *)(param_2 + 0x14) <= *(int *)((int)this + 0x260)) {
        iVar1 = *(int *)((int)this + 0x260) + 500;
        *(int *)(param_2 + 0x14) = iVar1;
        FUN_00489df0(param_2,CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(param_2 + 0xc) == '\0'));
      }
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -7;
    }
  }
  return;
}


/* ==== 00489df0 FUN_00489df0 ==== */

void FUN_00489df0(undefined4 *param_1,char param_2)

{
  if (*(char *)(param_1 + 3) != param_2) {
    if (param_2 != '\0') {
      (**(code **)(*(int *)*param_1 + 0x20))(1);
      (**(code **)(*(int *)param_1[1] + 0x20))(1);
      (**(code **)(*(int *)param_1[2] + 0x20))(0);
      *(char *)(param_1 + 3) = param_2;
      return;
    }
    (**(code **)(*(int *)*param_1 + 0x20))(0);
    (**(code **)(*(int *)param_1[1] + 0x20))(0);
    (**(code **)(*(int *)param_1[2] + 0x20))(1);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


/* ==== 00489e50 FUN_00489e50 ==== */

int FUN_00489e50(int param_1)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = FUN_00558625();
    return iVar1 % param_1;
  }
  return 0;
}


/* ==== 00489e70 FUN_00489e70 ==== */

uint FUN_00489e70(uint *param_1)

{
  return *param_1 >> 0x18 & 0xffffff01;
}


/* ==== 00489e80 FUN_00489e80 ==== */

void FUN_00489e80(undefined4 this_val,int *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00489e70(param_2);
  if ((cVar1 != '\0') && (iVar2 = FUN_0049ca80(this_val), iVar2 == 1)) {
    iVar2 = *param_2;
    if (iVar2 != 0x1000001) {
      if (iVar2 == 0x1000002) {
        *param_2 = 3;
        return;
      }
      if (iVar2 != 0x1000003) {
        return;
      }
    }
    *param_2 = 2;
  }
  return;
}


/* ==== 00489ec0 FUN_00489ec0 ==== */

void __thiscall FUN_00489ec0(void *this,void *this_val,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  int i;
  int local_4;
  
  if (*(int *)((int)this + 0x360) < 10) {
    i = 0;
    local_4 = param_3;
    if (0 < *(int *)((int)this + 0x360)) {
      piVar3 = (int *)((int)this + 0x2d0);
      do {
        if ((this_val == (void *)*piVar3) && (param_3 == piVar3[2])) {
          *(undefined4 *)((int)this + i * 0xc + 0x2d4) = param_2;
          return;
        }
        iVar1 = FUN_0049d720(this_val,*piVar3);
        if (iVar1 < 1) {
          puVar2 = (undefined4 *)((int)this + (i * 3 + 0xb4) * 4);
          pvVar4 = (void *)*puVar2;
          uVar5 = puVar2[1];
          local_4 = puVar2[2];
          *puVar2 = this_val;
          puVar2[1] = param_2;
          puVar2[2] = param_3;
          i = i + 1;
          this_val = pvVar4;
          param_2 = uVar5;
          if (i < *(int *)((int)this + 0x360)) {
            puVar2 = (undefined4 *)((int)this + (i * 3 + 0xb4) * 4);
            do {
              i = i + 1;
              this_val = (void *)*puVar2;
              param_2 = puVar2[1];
              iVar1 = puVar2[2];
              *puVar2 = pvVar4;
              puVar2[1] = uVar5;
              puVar2[2] = local_4;
              puVar2 = puVar2 + 3;
              pvVar4 = this_val;
              uVar5 = param_2;
              local_4 = iVar1;
            } while (i < *(int *)((int)this + 0x360));
          }
          break;
        }
        i = i + 1;
        piVar3 = piVar3 + 3;
      } while (i < *(int *)((int)this + 0x360));
    }
    i = *(int *)((int)this + 0x360) + 0x3c;
    *(void **)((int)this + i * 0xc) = this_val;
    *(undefined4 *)((int)this + i * 0xc + 4) = param_2;
    *(int *)((int)this + i * 0xc + 8) = local_4;
    *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + 1;
  }
  return;
}


/* ==== 0048a010 FUN_0048a010 ==== */

undefined4 __thiscall FUN_0048a010(void *this)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x360) != 0) {
    *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    if ((*(char *)((int)this + 0x1a) != '\0') && (*(int *)((int)this + 0x34) == 3)) {
      FUN_0048f0d0(local_c,local_18);
      local_1c = 0x3f99999a;
      FUN_0049cb60((int)this + 0x38,local_c,local_18,&local_1c);
      *(undefined4 *)((int)this + 0x34) = 0x1000003;
    }
    uVar3 = *(undefined4 *)((int)this + 0x2d0);
    *(undefined4 *)((int)this + 0x21c) = *(undefined4 *)((int)this + 0x2d8);
    puVar2 = (undefined4 *)((int)this + 0x2d0);
    i = 1;
    if (1 < *(int *)((int)this + 0x360)) {
      do {
        i = i + 1;
        *puVar2 = puVar2[3];
        puVar2[1] = puVar2[4];
        puVar2[2] = puVar2[5];
        puVar2 = puVar2 + 3;
      } while (i < *(int *)((int)this + 0x360));
    }
    *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -1;
    return uVar3;
  }
  if (*(char *)((int)this + 0x1a) == '\0') {
    i = (*(code *)**(undefined4 **)((int)this + 0x2a0))();
    if (0 < i) {
      iVar1 = *(int *)(*(int *)((int)this + 0x2a4) + 4);
      i = FUN_00489e50(i);
      uVar3 = *(undefined4 *)(iVar1 + i * 4);
    }
    *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
    return uVar3;
  }
  if (*(int *)((int)this + 0x34) == 2) {
    if (*(int *)((int)this + 0x20) == -1) {
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x260) + *(int *)((int)this + 0x1c);
      return 0;
    }
    if (*(int *)((int)this + 0x20) <= *(int *)((int)this + 0x260)) {
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
      FUN_0048f0d0(local_18,local_c);
      local_1c = 0x40400000;
      FUN_0049cb60((int)this + 0x38,local_c,local_18,&local_1c);
      *(undefined4 *)((int)this + 0x34) = 0x1000002;
    }
  }
  return 0;
}


/* ==== 0048a190 FUN_0048a190 ==== */

void __thiscall FUN_0048a190(void *this)

{
  undefined4 *puVar1;
  int i;
  int j;
  undefined4 *puVar2;
  int iVar3;
  int local_4;
  
  i = -1;
  iVar3 = 0;
  j = 0;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x360)) {
    puVar2 = (undefined4 *)((int)this + 0x2d0);
    do {
      if (*(int *)((int)this + 0x260) < (int)puVar2[1]) {
        if (i != -1) {
          iVar3 = i * 3;
          i = i + 1;
          puVar1 = (undefined4 *)((int)this + (iVar3 + 0xb4) * 4);
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          iVar3 = local_4;
        }
      }
      else {
        if (i == -1) {
          i = j;
        }
        local_4 = iVar3 + 1;
        iVar3 = local_4;
      }
      j = j + 1;
      puVar2 = puVar2 + 3;
    } while (j < *(int *)((int)this + 0x360));
    *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) - iVar3;
    return;
  }
  *(undefined4 *)((int)this + 0x360) = *(undefined4 *)((int)this + 0x360);
  return;
}


/* ==== 0048a230 FUN_0048a230 ==== */

void __thiscall FUN_0048a230(void *this)

{
  char cVar1;
  undefined4 this_val;
  int iVar2;
  void *this_00;
  undefined4 *puVar3;
  uint i;
  uint j;
  uint uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 unaff_EDI;
  undefined4 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  float local_3c;
  float local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *puStack_2c;
  uint uStack_28;
  undefined1 auStack_20 [4];
  char *pcStack_1c;
  uint uStack_18;
  void *pvStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056d7c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_val = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
  local_3c = (float)FUN_00425300(this_val);
  local_34 = 0x3f800000;
  local_30 = (undefined4 *)0x3f800000;
  local_38 = (float)(int)local_3c * 0.0009090909;
  *(float *)((int)this + 0x248) = local_38;
  *(float *)((int)this + 0x24c) = (float)DAT_006fba74 * 0.01;
  (**(code **)(**(int **)((int)this + 0x244) + 0x24))(&local_38);
  this_val = FUN_0049ca10((int)this + 0x128,&local_30);
  FUN_0047bc90(*(undefined4 *)((int)this + 0x254),this_val);
  this_val = FUN_0049ca10((int)this + 0x1a0,&local_30);
  FUN_0047bc90(*(undefined4 *)((int)this + 600),this_val);
  if ((0 < *(int *)((int)this + 0x360)) && (*(int *)((int)this + 0x2c4) != 0)) {
    iVar2 = FUN_0049dd60();
    if (iVar2 == 100) {
      iVar2 = FUN_0049dd60(*(undefined4 *)((int)this + 0x2d0));
      if (iVar2 < 100) {
        *(int *)((int)this + 0x2c8) = *(int *)((int)this + 0x260) + -1;
      }
    }
  }
  uVar14 = (undefined1)((uint)unaff_EBX >> 0x18);
  if ((*(int *)((int)this + 0x2c4) == 0) ||
     (*(int *)((int)this + 0x2c8) <= *(int *)((int)this + 0x260))) {
    this_00 = (void *)FUN_0048a010(this);
    if (this_00 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
      *(undefined4 *)((int)this + 0x2c4) = 0;
      local_30 = (undefined4 *)CONCAT31(local_30._1_3_,uVar14);
      FUN_004028f0(&local_30,0);
      i = 0xffffffff;
      pcVar7 = (char *)&DAT_00712790;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(&local_30,i,1);
      if (cVar1 != '\0') {
        puVar3 = &DAT_00712790;
        puVar6 = puStack_2c;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(undefined1 *)((int)puStack_2c + i) = 0;
        uStack_28 = i;
      }
      puStack_8 = (undefined1 *)0x4;
      (**(code **)(**(int **)((int)this + 0x220) + 0x48))(&local_30);
      pvStack_c = (void *)0xffffffff;
      if (local_30 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)local_30 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)local_30 + -1));
        }
        else {
          *(char *)((int)local_30 + -1) = cVar1 + -1;
        }
      }
      local_34 = CONCAT31(local_34._1_3_,(char)((uint)unaff_EBP >> 0x18));
      FUN_004028f0(&local_34,0);
      i = 0xffffffff;
      pcVar7 = (char *)&DAT_00712794;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar3 = (undefined4 *)(~i - 1);
      cVar1 = FUN_00402a00(&local_34,puVar3,1);
      if (cVar1 != '\0') {
        puVar6 = &DAT_00712794;
        puVar9 = local_30;
        for (i = (uint)puVar3 >> 2; i != 0; i = i - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        for (i = (uint)puVar3 & 3; i != 0; i = i - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(undefined1 *)((int)local_30 + (int)puVar3) = 0;
        puStack_2c = puVar3;
      }
      pvStack_c = (void *)0x5;
      (**(code **)(**(int **)((int)this + 0x224) + 0x48))(&local_34);
      pvStack_10 = (void *)0xffffffff;
      FUN_004028f0(&local_38,1);
      local_38 = (float)CONCAT31(local_38._1_3_,(char)((uint)unaff_ESI >> 0x18));
      i = 0xffffffff;
      local_34 = 0;
      pcVar7 = &DAT_00712798;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_30 = (undefined4 *)0x0;
      puStack_2c = (undefined4 *)0x0;
      FUN_00402940(&local_38,&DAT_00712798,~i - 1);
      pvStack_10 = (void *)0x6;
      (**(code **)(**(int **)((int)this + 0x228) + 0x48))(&local_38);
      pvStack_14 = (void *)0xffffffff;
      if (local_38 != 0.0) {
        cVar1 = *(char *)((int)local_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)local_38 + -1));
        }
        else {
          *(char *)((int)local_38 + -1) = cVar1 + -1;
        }
      }
      local_3c = (float)CONCAT31(local_3c._1_3_,(char)((uint)unaff_EDI >> 0x18));
      i = 0xffffffff;
      local_38 = 0.0;
      pcVar7 = &DAT_0071279c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_34 = 0;
      local_30 = (undefined4 *)0x0;
      FUN_00402940(&local_3c,&DAT_0071279c,~i - 1);
      pvStack_14 = (void *)0x7;
      (**(code **)(**(int **)((int)this + 0x22c) + 0x48))(&local_3c);
      puStack_8 = (undefined1 *)0xffffffff;
      if (puStack_2c != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_2c + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)puStack_2c + -1));
        }
        else {
          *(char *)((int)puStack_2c + -1) = cVar1 + -1;
        }
      }
      FUN_0048f090(this,0);
      if (*(int **)((int)this + 0x250) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x250) + 0x20))(0);
        *(undefined4 *)((int)this + 0x250) = 0;
      }
    }
    else {
      if (*(int **)((int)this + 0x250) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x250) + 0x20))(0);
      }
      this_val = FUN_0049dd50(this_00);
      this_val = FUN_0049d230(this_val);
      *(undefined4 *)((int)this + 0x250) = this_val;
      *(undefined1 *)((int)this + 0x218) = 1;
      this_val = FUN_0049dda0(this_00,(undefined1 *)&local_30,0);
      puStack_8 = (undefined1 *)0x0;
      (**(code **)(**(int **)((int)this + 0x220) + 0x48))(this_val);
      pvStack_c = (void *)0xffffffff;
      FUN_004028f0(&local_34,1);
      this_val = FUN_0049dda0(this_00,(undefined1 *)&local_34,1);
      pvStack_c = (void *)0x1;
      (**(code **)(**(int **)((int)this + 0x224) + 0x48))(this_val);
      pvStack_10 = (void *)0xffffffff;
      if (local_34 != 0) {
        cVar1 = *(char *)(local_34 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_34 + -1));
        }
        else {
          *(char *)(local_34 + -1) = cVar1 + -1;
        }
      }
      this_val = FUN_0049dda0(this_00,(undefined1 *)&local_38,2);
      pvStack_10 = (void *)0x2;
      (**(code **)(**(int **)((int)this + 0x228) + 0x48))(this_val);
      pvStack_14 = (void *)0xffffffff;
      if (local_38 != 0.0) {
        cVar1 = *(char *)((int)local_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)local_38 + -1));
        }
        else {
          *(char *)((int)local_38 + -1) = cVar1 + -1;
        }
      }
      this_val = FUN_0049dda0(this_00,(undefined1 *)&local_3c,3);
      pvStack_14 = (void *)0x3;
      (**(code **)(**(int **)((int)this + 0x22c) + 0x48))(this_val);
      puStack_8 = (undefined1 *)0xffffffff;
      if (puStack_2c != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_2c + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)puStack_2c + -1));
        }
        else {
          *(char *)((int)puStack_2c + -1) = cVar1 + -1;
        }
      }
      *(void **)((int)this + 0x2c4) = this_00;
      iVar2 = FUN_0049dd80(this_00);
      *(int *)((int)this + 0x2c8) = iVar2 + *(int *)((int)this + 0x260);
      this_val = FUN_0049df20(this_00);
      *(undefined4 *)((int)this + 0x25c) = this_val;
    }
  }
  if ((*(char *)((int)this + 0x218) != '\0') && (*(int *)((int)this + 0x34) == 2)) {
    (**(code **)(**(int **)((int)this + 0x250) + 0x20))(1);
    iVar2 = FUN_0049df30(*(undefined4 *)((int)this + 0x2c4));
    if (iVar2 == 0) {
      auStack_20[0] = uVar14;
      FUN_004028f0(auStack_20,0);
      i = 0xffffffff;
      pcVar7 = s_system_newmessage_005abb34;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(auStack_20,i,1);
      if (cVar1 != '\0') {
        pcVar7 = s_system_newmessage_005abb34;
        pcVar10 = pcStack_1c;
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
        pcStack_1c[i] = '\0';
        uStack_18 = i;
      }
      puStack_8 = (undefined1 *)0x8;
      FUN_0048a910(this,auStack_20,0xffffffff);
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_004028f0(auStack_20,1);
    }
    FUN_00489800(*(undefined4 *)((int)this + 0x25c));
    *(undefined1 *)((int)this + 0x218) = 0;
  }
  if (*(int *)((int)this + 0x21c) != -1) {
    this_val = FUN_0049dd50(*(undefined4 *)((int)this + 0x2c4));
    iVar2 = FUN_0049d220(this_val);
    i = 0xffffffff;
    pcVar7 = s_HONNEY_005abb48;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    j = *(uint *)(iVar2 + 8);
    uVar4 = ~i - 1;
    i = j;
    if (uVar4 <= j) {
      i = uVar4;
    }
    bVar12 = false;
    iVar5 = 0;
    bVar13 = true;
    pbVar8 = *(byte **)(iVar2 + 4);
    pbVar11 = (byte *)s_HONNEY_005abb48;
    do {
      if (i == 0) break;
      i = i - 1;
      bVar12 = *pbVar8 < *pbVar11;
      bVar13 = *pbVar8 == *pbVar11;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    } while (bVar13);
    if (!bVar13) {
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
    }
    if (((iVar5 != 0) || (j < uVar4)) || (j != uVar4)) {
      this_val = FUN_0049dd50(*(undefined4 *)((int)this + 0x2c4));
      iVar2 = FUN_0049d220(this_val);
      i = 0xffffffff;
      pcVar7 = s_SHADOW_005abb50;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      j = *(uint *)(iVar2 + 8);
      uVar4 = ~i - 1;
      i = j;
      if (uVar4 <= j) {
        i = uVar4;
      }
      bVar12 = false;
      iVar5 = 0;
      bVar13 = true;
      pbVar8 = *(byte **)(iVar2 + 4);
      pbVar11 = (byte *)s_SHADOW_005abb50;
      do {
        if (i == 0) break;
        i = i - 1;
        bVar12 = *pbVar8 < *pbVar11;
        bVar13 = *pbVar8 == *pbVar11;
        pbVar8 = pbVar8 + 1;
        pbVar11 = pbVar11 + 1;
      } while (bVar13);
      if (!bVar13) {
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (((iVar5 != 0) || (j < uVar4)) || (j != uVar4)) {
        if (*(int *)((int)this + 0x34) == 2) {
          FUN_0048f090(this,1);
        }
        this_val = FUN_00426f60(&DAT_005d3460,*(undefined4 *)((int)this + 0x21c));
        iVar2 = FUN_00425300(this_val);
        local_38 = 1.0;
        local_34 = 0x3f800000;
        local_3c = (float)iVar2 * 0.0009090909;
        (**(code **)(**(int **)((int)this + 0x23c) + 0x24))(&local_3c);
        ExceptionList = pvStack_14;
        return;
      }
    }
  }
  FUN_0048f090(this,0);
  ExceptionList = pvStack_10;
  return;
}


/* ==== 0048a910 FUN_0048a910 ==== */

void __thiscall FUN_0048a910(void *this,int param_2,int param_3)

{
  void *pvVar1;
  char cVar2;
  char *pcVar3;
  int this_val;
  undefined1 *puVar4;
  int this_val_2;
  undefined4 this_val_3;
  uint uVar5;
  uint i;
  int j;
  undefined1 local_1c [4];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d7db;
  local_c = ExceptionList;
  if (*(int *)(param_2 + 8) != 0) {
    local_1c[0] = (undefined1)param_3;
    ExceptionList = &local_c;
    FUN_004028f0(local_1c,0);
    pcVar3 = *(char **)(param_2 + 4);
    local_4 = 0;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    uVar5 = (uint)(*pcVar3 == '~');
    i = uVar5;
    if (uVar5 < *(uint *)(param_2 + 8)) {
      do {
        if (*(int *)(param_2 + 4) == 0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)(*(int *)(param_2 + 4) + i);
        }
        cVar2 = *pcVar3;
        if (('`' < cVar2) && (cVar2 < '{')) {
          cVar2 = cVar2 + -0x20;
        }
        FUN_0047eab0(local_1c,1,cVar2);
        i = i + 1;
      } while (i < *(uint *)(param_2 + 8));
    }
    if (uVar5 == 0) {
      j = 0;
      this_val = (*(code *)**(undefined4 **)((int)this + 0x2a8))();
      if (0 < this_val) {
        do {
          this_val = FUN_0049dd90(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + j * 4)
                                 );
          puVar4 = puStack_18;
          if (puStack_18 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          this_val = FUN_0040fc80(this_val,0,*(undefined4 *)(this_val + 8),puVar4,uStack_14);
          if (this_val == 0) {
            this_val_3 = FUN_0049dd50(*(undefined4 *)
                                       (*(int *)(*(int *)((int)this + 0x2ac) + 4) + j * 4));
            this_val = FUN_0049d200(this_val_3);
            if (this_val != -1) {
              this_val = *(int *)((int)this + 0x260);
              pvVar1 = *(void **)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + j * 4);
              this_val_2 = FUN_0049dd70(pvVar1);
              FUN_00489ec0(this,pvVar1,this_val + this_val_2,param_3);
            }
            FUN_004899a0(this,*(undefined4 *)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + j * 4));
            if (puStack_18 == (undefined1 *)0x0) {
              ExceptionList = local_c;
              return;
            }
            cVar2 = puStack_18[-1];
            if ((cVar2 != '\0') && (cVar2 != -1)) {
              puStack_18[-1] = cVar2 + -1;
              ExceptionList = local_c;
              return;
            }
            goto LAB_0048abc1;
          }
          j = j + 1;
          this_val = (*(code *)**(undefined4 **)((int)this + 0x2a8))();
        } while (j < this_val);
      }
      if (puStack_18 != (undefined1 *)0x0) {
        cVar2 = puStack_18[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
LAB_0048abc1:
          FUN_0054b339(puStack_18 + -1);
        }
        else {
          puStack_18[-1] = cVar2 + -1;
        }
      }
    }
    else {
      j = 0;
      this_val = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
      if (0 < this_val) {
        this_val = 0;
        do {
          this_val_2 = this_val + *(int *)(*(int *)((int)this + 700) + 4);
          puVar4 = puStack_18;
          if (puStack_18 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          this_val_2 = FUN_0040fc80(this_val_2,0,*(undefined4 *)(this_val_2 + 8),puVar4,uStack_14);
          if (this_val_2 == 0) {
            this_val = *(int *)(j * 0x114 + 0x10 + *(int *)(*(int *)((int)this + 700) + 4));
            if (0 < this_val) {
              this_val = FUN_00489e50(this_val);
              pvVar1 = *(void **)(*(int *)(*(int *)((int)this + 0x2ac) + 4) +
                                 *(int *)(*(int *)(*(int *)((int)this + 700) + 4) + 0x14 +
                                         (this_val + j * 0x45) * 4) * 4);
              this_val = FUN_0049dd70(pvVar1);
              FUN_00489ec0(this,pvVar1,this_val + *(int *)((int)this + 0x260),param_3);
              FUN_004899a0(this,*(undefined4 *)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + j * 4));
            }
            break;
          }
          j = j + 1;
          this_val = this_val + 0x114;
          this_val_2 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
        } while (j < this_val_2);
      }
      local_4 = 0xffffffff;
      FUN_004028f0(local_1c,1);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0048ae80 FUN_0048ae80 ==== */

void __thiscall FUN_0048ae80(void *this)

{
  void *this_val;
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *this_val_2_2;
  int j;
  void *this_00;
  int m;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_620 [3];
  undefined1 local_61d;
  undefined1 local_61c [4];
  char *pcStack_618;
  undefined1 *local_60c;
  undefined4 this_val_3;
  undefined1 auStack_600 [16];
  undefined1 auStack_5f0 [4];
  char *pcStack_5ec;
  uint uStack_5e8;
  int iStack_5e0;
  undefined4 this_val_2;
  uint uStack_5d8;
  int i;
  undefined **local_5d0;
  undefined1 *operator_new_result;
  undefined1 auStack_5c8 [4];
  char *pcStack_5c4;
  undefined1 auStack_5bc [4];
  undefined1 local_5b8 [12];
  undefined1 auStack_5ac [4];
  undefined1 local_5a8 [16];
  int iStack_598;
  undefined1 local_594 [4];
  char *pcStack_590;
  undefined1 local_584 [16];
  undefined1 local_574 [16];
  undefined1 local_564 [16];
  undefined1 local_554 [16];
  undefined1 local_544 [16];
  undefined1 local_534 [16];
  undefined1 local_524 [16];
  undefined1 local_514 [16];
  undefined1 local_504 [16];
  undefined1 local_4f4 [16];
  undefined1 local_4e4 [16];
  undefined1 local_4d4 [16];
  undefined1 local_4c4 [16];
  undefined1 local_4b4 [16];
  undefined4 local_4a4 [4];
  undefined1 local_494 [16];
  undefined1 local_484 [16];
  undefined1 local_474 [16];
  undefined1 local_464 [16];
  undefined1 local_454 [16];
  undefined1 local_444 [16];
  undefined1 local_434 [16];
  undefined1 local_424 [16];
  undefined1 local_414 [16];
  undefined1 auStack_404 [16];
  undefined1 auStack_3f4 [12];
  undefined1 auStack_3e8 [4];
  undefined1 local_3e4 [72];
  undefined1 auStack_39c [4];
  undefined1 local_398 [4];
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [12];
  undefined1 auStack_364 [4];
  undefined1 local_360 [60];
  undefined1 auStack_324 [4];
  undefined1 local_320 [60];
  undefined1 auStack_2e4 [4];
  undefined1 local_2e0 [12];
  undefined1 auStack_2d4 [4];
  undefined1 local_2d0 [64];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [12];
  undefined1 auStack_1e4 [4];
  undefined1 local_1e0 [60];
  undefined1 auStack_1a4 [4];
  undefined1 local_1a0 [60];
  undefined1 auStack_164 [4];
  undefined1 local_160 [60];
  undefined1 auStack_124 [4];
  undefined1 local_120 [16];
  undefined4 uStack_110;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  uint k;
  char *str1;
  undefined4 this_val_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056dec2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_5b8);
  local_5a8[0] = local_61d;
  local_4 = 0;
  FUN_004028f0(local_5a8);
  local_4._0_1_ = 1;
  local_2e0[0] = local_61d;
  FUN_004028f0(local_2e0);
  local_4._0_1_ = 2;
  local_594[0] = local_61d;
  FUN_004028f0(local_594);
  local_120[0] = local_61d;
  local_4._0_1_ = 3;
  FUN_004028f0(local_120);
  local_4._0_1_ = 4;
  FUN_0049f360(local_398);
  local_4._0_1_ = 5;
  local_5d0 = &PTR_LAB_00576634;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_61d;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  local_4._0_1_ = 6;
  local_534[0] = local_61d;
  FUN_004028f0(local_534);
  j = -1;
  str1 = s_sii_005abb60;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_534);
  local_434[0] = local_61d;
  local_4._0_1_ = 7;
  FUN_004028f0(local_434);
  j = -1;
  str1 = &DAT_007127a0;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_434);
  local_4._0_1_ = 8;
  local_4a4[0]._0_1_ = local_61d;
  FUN_004028f0(local_4a4);
  j = -1;
  str1 = s_system_005abb64;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4a4);
  local_4._0_1_ = 9;
  local_554[0] = local_61d;
  FUN_004028f0(local_554);
  j = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_554);
  puVar5 = local_4a4;
  local_4._0_1_ = 10;
  this_val = (void *)((int)this + 0x280);
  this_val_2_2 = local_554;
  FUN_00499d30(local_1a0,this_val,(int)this_val_2_2,puVar5,local_434,local_534,0);
  local_4._0_1_ = 0xf;
  FUN_004028f0(local_554);
  local_4._0_1_ = 0xe;
  FUN_004028f0(local_4a4);
  local_4._0_1_ = 0xd;
  FUN_004028f0(local_434);
  local_4._0_1_ = 0xc;
  FUN_004028f0(local_534);
  local_524[0] = local_61d;
  FUN_004028f0(local_524);
  j = -1;
  str1 = &DAT_007127a4;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_524);
  local_4._0_1_ = 0x10;
  local_444[0] = local_61d;
  FUN_004028f0(local_444);
  j = -1;
  str1 = s_players_005abb78;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_444);
  local_544[0] = local_61d;
  local_4._0_1_ = 0x11;
  FUN_004028f0(local_544);
  j = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  str1 = s_communi_ini_005ab824;
  k = 0x48b1d6;
  FUN_00402940(local_544);
  uVar6 = 0;
  local_4._0_1_ = 0x12;
  local_60c = &stack0xfffff9bc;
  FUN_004900f0(&stack0xfffff9bc,s_<nobody>_005abb6c,&local_61d);
  FUN_0049c1b0(local_3e4,this_val,(int)local_544,local_444,local_524,this_val_2_2,puVar5,k,str1,
               uVar6);
  local_4._0_1_ = 0x16;
  FUN_004028f0(local_544);
  local_4._0_1_ = 0x15;
  FUN_004028f0(local_444);
  local_4._0_1_ = 0x14;
  FUN_004028f0(local_524);
  local_4e4[0] = local_61d;
  FUN_004028f0(local_4e4);
  j = -1;
  str1 = &DAT_005abb80;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4e4);
  local_414[0] = local_61d;
  local_4._0_1_ = 0x17;
  FUN_004028f0(local_414);
  j = -1;
  str1 = &DAT_007127a8;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_414);
  local_4._0_1_ = 0x18;
  local_504[0] = local_61d;
  FUN_004028f0(local_504);
  j = -1;
  str1 = &DAT_007127ac;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_504);
  local_4._0_1_ = 0x19;
  local_484[0] = local_61d;
  FUN_004028f0(local_484);
  j = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_484);
  local_4._0_1_ = 0x1a;
  FUN_00499d30(local_320,this_val,(int)local_484,local_504,local_414,local_4e4,0);
  local_4._0_1_ = 0x1f;
  FUN_004028f0(local_484);
  local_4._0_1_ = 0x1e;
  FUN_004028f0(local_504);
  local_4._0_1_ = 0x1d;
  FUN_004028f0(local_414);
  local_4._0_1_ = 0x1c;
  FUN_004028f0(local_4e4);
  local_424[0] = local_61d;
  FUN_004028f0(local_424);
  j = -1;
  str1 = s_priority_005abb8c;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_424);
  local_4._0_1_ = 0x20;
  local_4c4[0] = local_61d;
  FUN_004028f0(local_4c4);
  j = -1;
  str1 = &DAT_007127b0;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c4);
  local_464[0] = local_61d;
  local_4._0_1_ = 0x21;
  FUN_004028f0(local_464);
  j = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_464);
  local_4._0_1_ = 0x22;
  FUN_0049b940(local_160,this_val,(int)local_464,local_4c4,local_424,0,0);
  local_4._0_1_ = 0x26;
  FUN_004028f0(local_464);
  local_4._0_1_ = 0x25;
  FUN_004028f0(local_4c4);
  local_4._0_1_ = 0x24;
  FUN_004028f0(local_424);
  local_574[0] = local_61d;
  FUN_004028f0(local_574);
  j = -1;
  str1 = &DAT_007127b4;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_574);
  local_4._0_1_ = 0x27;
  local_584[0] = local_61d;
  FUN_004028f0(local_584);
  j = -1;
  str1 = s_general_005abb98;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_584);
  local_564[0] = local_61d;
  local_4._0_1_ = 0x28;
  FUN_004028f0(local_564);
  j = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_564);
  local_4._0_1_ = 0x29;
  FUN_0049b370(local_2d0,this_val,(int)local_564,local_584,local_574,0,0);
  local_4._0_1_ = 0x2d;
  FUN_004028f0(local_564);
  local_4._0_1_ = 0x2c;
  FUN_004028f0(local_584);
  local_4._0_1_ = 0x2b;
  FUN_004028f0(local_574);
  local_4d4[0] = local_61d;
  FUN_004028f0(local_4d4);
  j = -1;
  str1 = &DAT_007127b8;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4d4);
  local_4._0_1_ = 0x2e;
  local_4f4[0] = local_61d;
  FUN_004028f0(local_4f4);
  j = -1;
  str1 = s_general_005abba0;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4f4);
  local_4._0_1_ = 0x2f;
  local_514[0] = local_61d;
  FUN_004028f0(local_514);
  j = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_514);
  local_4._0_1_ = 0x30;
  FUN_0049b940(local_360,this_val,(int)local_514,local_4f4,local_4d4,0,0);
  local_4._0_1_ = 0x34;
  FUN_004028f0(local_514);
  local_4._0_1_ = 0x33;
  FUN_004028f0(local_4f4);
  local_4._0_1_ = 0x32;
  FUN_004028f0(local_4d4);
  local_454[0] = local_61d;
  FUN_004028f0(local_454);
  j = -1;
  str1 = s_sb_005abba8;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_454);
  local_4._0_1_ = 0x35;
  local_474[0] = local_61d;
  FUN_004028f0(local_474);
  j = -1;
  str1 = &DAT_007127bc;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_474);
  local_4._0_1_ = 0x36;
  local_494[0] = local_61d;
  FUN_004028f0(local_494);
  j = -1;
  str1 = s_players_005abbac;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_494);
  local_4._0_1_ = 0x37;
  local_4b4[0] = local_61d;
  FUN_004028f0(local_4b4);
  j = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4b4);
  local_4._0_1_ = 0x38;
  FUN_00499d30(local_1e0,this_val,(int)local_4b4,local_494,local_474,local_454,0);
  local_4._0_1_ = 0x3d;
  FUN_004028f0(local_4b4);
  local_4._0_1_ = 0x3c;
  FUN_004028f0(local_494);
  local_4._0_1_ = 0x3b;
  FUN_004028f0(local_474);
  local_4._0_1_ = 0x3a;
  FUN_004028f0(local_454);
  local_61c[0] = local_61d;
  *(undefined1 *)((int)this + 0x18) = 0;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_testmode_005abbb4;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x3e;
  FUN_00499220(local_2d0);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  cVar1 = FUN_004997c0(local_2d0);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b5f0(local_2d0);
    *(undefined1 *)((int)this + 0x18) = uVar2;
  }
  *(undefined1 *)((int)this + 0x1a) = 0;
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_moveaway_005abbc0;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x3f;
  FUN_00499220(local_2d0);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  cVar1 = FUN_004997c0(local_2d0);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b5f0(local_2d0);
    *(undefined1 *)((int)this + 0x1a) = uVar2;
  }
  *(undefined1 *)((int)this + 0x19) = 0;
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_testmessages_005abbcc;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x40;
  FUN_00499220(local_2d0);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  cVar1 = FUN_004997c0(local_2d0);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b5f0(local_2d0);
    *(undefined1 *)((int)this + 0x19) = uVar2;
  }
  local_61c[0] = local_61d;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_moveawaytime_005abbdc;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x41;
  FUN_00499220(local_360);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  cVar1 = FUN_004997c0(local_360);
  if (cVar1 != '\0') {
    j = FUN_0049ba70(local_360);
    *(int *)((int)this + 0x1c) = j * 1000;
  }
  if (*(int *)((int)this + 0x1c) < 0) {
    FUN_00499360(local_360);
    FUN_004c4150();
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_initwaittime_005abc50;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x42;
  FUN_00499220(local_360);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  cVar1 = FUN_004997c0(local_360);
  if (cVar1 != '\0') {
    j = FUN_0049ba70(local_360);
    *(int *)((int)this + 0x24) = j * 1000;
  }
  if (*(int *)((int)this + 0x24) < 0) {
    FUN_00499360(local_360);
    FUN_004c4150(s_ERROR____Communicator____s__must_005abc8c);
  }
  iStack_598 = 0x14;
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_chars_per_line_005abcc4;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x43;
  FUN_00499220(local_360);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  cVar1 = FUN_004997c0(local_360);
  if ((cVar1 != '\0') &&
     ((iStack_598 = FUN_0049ba70(local_360), iStack_598 < 1 || (100 < iStack_598)))) {
    FUN_004c4150();
  }
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_categories_005abd54;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x44;
  FUN_004990d0(local_3e4);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  while( true ) {
    j = FUN_0049df90(local_61c,s__d_005abd60);
    local_4._0_1_ = 0x45;
    this_val_4 = 0x48bd54;
    FUN_004093c0(local_5b8);
    local_4._0_1_ = 0x3a;
    FUN_004028f0(local_61c);
    k = 0x48bd77;
    FUN_00499220(local_3e4);
    cVar1 = FUN_004997c0(local_3e4);
    if (cVar1 == '\0') break;
    local_60c = &stack0xfffff9c0;
    uStack_110 = 0;
    FUN_0049c640(local_3e4,&stack0xfffff9c0);
    FUN_00489820(auStack_5c8,this_val_4,j,k);
    local_4._0_1_ = 0x46;
    FUN_004093c0(local_120);
    local_4 = CONCAT31(local_4._1_3_,0x3a);
    FUN_004028f0(auStack_5c8);
    FUN_00490790();
  }
  m = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_players_005abd64;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x47;
  FUN_004990d0(local_1e0);
  local_4._0_1_ = 0x3a;
  FUN_004028f0(local_61c);
  do {
    FUN_0049df90(local_61c,s__d_005abd6c);
    local_4._0_1_ = 0x48;
    FUN_004093c0(local_5b8);
    local_4._0_1_ = 0x3a;
    FUN_004028f0(local_61c);
    FUN_00499220(local_1e0);
    cVar1 = FUN_004997c0(local_1e0);
    if (cVar1 == '\0') break;
    local_60c = operator_new(0x40);
    local_4._0_1_ = 0x49;
    if (local_60c == (undefined1 *)0x0) {
      this_val_2 = 0;
    }
    else {
      this_val_2 = FUN_0049cd90(local_60c);
    }
    local_4._0_1_ = 0x3a;
    CRegVarArray_GetValue(local_1e0);
    local_4._0_1_ = 0x4a;
    FUN_0049d0b0(this_val_2);
    local_4._0_1_ = 0x3a;
    FUN_004028f0(auStack_5c8);
    this_val_4 = FUN_0049aeb0(local_1e0);
    uVar2 = FUN_0049b5f0(this_val_4);
    iStack_5e0 = CONCAT31(iStack_5e0._1_3_,uVar2);
    FUN_0049d250(this_val_2);
    if ((char)iStack_5e0 != '\0') {
      *(int *)((int)this + 0x2c0) = *(int *)((int)this + 0x2c0) + 1;
    }
    FUN_004905f0();
    m = m + 1;
  } while (m < 1000);
  j = FUN_0049ef80(&DAT_006fbb6c,s_COMMUNICATOR_SOUND_005ab810);
  uStack_394 = *(undefined4 *)(j + 4);
  uStack_390 = *(undefined4 *)(j + 8);
  uStack_38c = *(undefined4 *)(j + 0xc);
  uStack_388 = *(undefined4 *)(j + 0x10);
  uStack_384 = *(undefined4 *)(j + 0x14);
  FUN_004093c0(auStack_380);
  FUN_004093c0(auStack_370);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_samples_005abd70;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x4b;
  FUN_004990d0(local_3e4);
  local_4._0_1_ = 0x3a;
  FUN_004028f0(local_61c);
  j = 0;
  do {
    FUN_0049df90(local_61c,s__d_005abd78);
    local_4._0_1_ = 0x4c;
    FUN_004093c0(local_5b8);
    local_4._0_1_ = 0x3a;
    FUN_004028f0(local_61c);
    FUN_00499220(local_3e4);
    cVar1 = FUN_004997c0(local_3e4);
    if (cVar1 == '\0') break;
    FUN_0049c640(local_3e4,auStack_5c8);
    local_4._0_1_ = 0x4d;
    FUN_004093c0(local_594);
    local_4._0_1_ = 0x3a;
    FUN_004028f0(auStack_5c8);
    FUN_004093c0(auStack_370);
    FUN_004796b0(auStack_5f0,local_594,s__wav_005abd7c);
    local_4._0_1_ = 0x4e;
    FUN_004093c0(auStack_380);
    local_4._0_1_ = 0x3a;
    FUN_004028f0(auStack_5f0);
    FUN_0049f030(&DAT_006fbb6c);
    str1 = pcStack_590;
    if (pcStack_590 == (char *)0x0) {
      str1 = "";
    }
    i = FUN_0049ecb0(&DAT_006fbb5c,str1);
    FUN_004905f0();
    j = j + 1;
  } while (j < 1000);
  local_60c = operator_new(0x40);
  local_4._0_1_ = 0x4f;
  if (local_60c == (void *)0x0) {
    this_val_2 = 0;
  }
  else {
    this_val_2 = FUN_0049cd90(local_60c);
  }
  local_4._0_1_ = 0x3a;
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  j = -1;
  str1 = s_SYSTEM_005abd84;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x50;
  FUN_0049d0b0(this_val_2);
  local_4._0_1_ = 0x3a;
  FUN_004028f0(local_61c);
  FUN_0049cf50(this_val_2);
  FUN_004905f0();
  j = 0;
  do {
    FUN_0049df90(local_61c,s__d_005abd8c);
    local_4._0_1_ = 0x51;
    FUN_004093c0(local_5b8);
    local_4._0_1_ = 0x3a;
    FUN_004028f0(local_61c);
    FUN_00499220(local_1a0);
    cVar1 = FUN_004997c0(local_1a0);
    if (cVar1 == '\0') break;
    local_60c = operator_new(0x58);
    local_4._0_1_ = 0x52;
    if (local_60c == (void *)0x0) {
      this_val_3 = 0;
    }
    else {
      this_val_3 = FUN_0049d2b0(local_60c);
    }
    local_4._0_1_ = 0x3a;
    FUN_0049d840(this_val_3);
    m = CRegVarArray_GetValue(local_1a0);
    local_4._0_1_ = 0x53;
    FUN_004797e0(this_00,auStack_5c8,s_SYSTEM__005abd90,m);
    local_4._0_1_ = 0x54;
    FUN_0049d880(this_val_3);
    local_4._0_1_ = 0x53;
    FUN_004028f0(auStack_5c8);
    local_4 = CONCAT31(local_4._1_3_,0x3a);
    FUN_004028f0(auStack_5f0);
    FUN_0049dd30(this_val_3);
    CRegVarArray_GetValue(local_1a0);
    m = FUN_0055933d();
    FUN_004028f0(auStack_404);
    if (m != -1) {
      if (m < 0) {
LAB_0048c3d4:
        FUN_0049dd90(this_val_3);
        FUN_004c4150();
      }
      else {
        if (*(int *)(operator_new_result + 4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(operator_new_result + 8) - *(int *)(operator_new_result + 4) >> 2;
        }
        if (iVar3 < m) goto LAB_0048c3d4;
      }
      FUN_0049dd30(this_val_3);
    }
    CRegVarArray_GetValue(local_1a0);
    local_4._0_1_ = 0x55;
    FUN_0055933d();
    FUN_0049dd40(this_val_3);
    local_4._0_1_ = 0x3a;
    FUN_004028f0(auStack_3f4);
    FUN_004905f0();
    j = j + 1;
  } while (j < 1000);
  iStack_5e0 = 0;
  m = (*(code *)**(undefined4 **)((int)this + 0x2b0))();
  j = 0;
  if (0 < m + -1) {
    do {
      FUN_0049d220(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x2b4) + 4) + j * 4));
      FUN_004093c0(local_5a8);
      FUN_004990d0(local_160);
      FUN_004990d0(local_3e4);
      FUN_004990d0(local_320);
      cVar1 = FUN_004997c0(local_160);
      if (cVar1 == '\0') {
        FUN_004c4150();
      }
      m = FUN_0049ba70(local_160);
      if ((m < 0) || (300 < m)) {
        FUN_004c4150();
      }
      FUN_0049cf50(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x2b4) + 4) + j * 4));
      auStack_5f0[0] = local_61d;
      FUN_004028f0(auStack_5f0);
      k = 0xffffffff;
      str1 = s_title_005abefc;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      uStack_5d8 = ~k - 1;
      cVar1 = FUN_00402a00(auStack_5f0);
      if (cVar1 != '\0') {
        str1 = s_title_005abefc;
        pcVar4 = pcStack_5ec;
        for (k = uStack_5d8 >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)str1;
          str1 = str1 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (k = uStack_5d8 & 3; k != 0; k = k - 1) {
          *pcVar4 = *str1;
          str1 = str1 + 1;
          pcVar4 = pcVar4 + 1;
        }
        FUN_004029e0(auStack_5f0);
        j = iStack_5e0;
      }
      local_4._0_1_ = 0x56;
      FUN_00499220(local_3e4);
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      FUN_004028f0(auStack_5f0);
      cVar1 = FUN_004997c0(local_3e4);
      if (cVar1 == '\0') {
        FUN_004c4150();
      }
      FUN_0049c640(local_3e4,auStack_3f4);
      local_4._0_1_ = 0x57;
      FUN_0049cf60(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x2b4) + 4) + j * 4));
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      FUN_004028f0(auStack_3f4);
      auStack_5c8[0] = local_61d;
      FUN_004028f0(auStack_5c8);
      k = 0xffffffff;
      str1 = s_ovl_photo_005abf6c;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      uStack_5d8 = ~k - 1;
      cVar1 = FUN_00402a00(auStack_5c8);
      if (cVar1 != '\0') {
        str1 = s_ovl_photo_005abf6c;
        pcVar4 = pcStack_5c4;
        for (k = uStack_5d8 >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)str1;
          str1 = str1 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (k = uStack_5d8 & 3; k != 0; k = k - 1) {
          *pcVar4 = *str1;
          str1 = str1 + 1;
          pcVar4 = pcVar4 + 1;
        }
        FUN_004029e0(auStack_5c8);
      }
      local_4._0_1_ = 0x58;
      FUN_00499220(local_3e4);
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      FUN_004028f0(auStack_5c8);
      cVar1 = FUN_004997c0(local_3e4);
      if (cVar1 == '\0') {
        FUN_004c4150();
      }
      FUN_0049c640(local_3e4,auStack_404);
      local_4._0_1_ = 0x59;
      this_val_2_2 = (undefined1 *)FUN_00484f60();
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      local_60c = this_val_2_2;
      FUN_004028f0(auStack_404);
      local_61c[0] = local_61d;
      FUN_004028f0(local_61c);
      k = 0xffffffff;
      str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abfe4;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      uStack_5d8 = ~k - 1;
      cVar1 = FUN_00402a00(local_61c);
      if (cVar1 != '\0') {
        str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abfe4;
        pcVar4 = pcStack_618;
        for (k = uStack_5d8 >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)str1;
          str1 = str1 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (k = uStack_5d8 & 3; k != 0; k = k - 1) {
          *pcVar4 = *str1;
          str1 = str1 + 1;
          pcVar4 = pcVar4 + 1;
        }
        FUN_004029e0(local_61c);
        this_val_2_2 = local_60c;
      }
      local_4._0_1_ = 0x5a;
      FUN_0049c640(local_3e4,auStack_290);
      local_4._0_1_ = 0x5b;
      this_val_4 = FUN_0049df90(auStack_210,s_Ovl_photo_element__s_undefined_l_005ac010);
      local_4._0_1_ = 0x5c;
      FUN_00487bc0(this_val_2_2,this_val_4);
      local_4._0_1_ = 0x5b;
      FUN_004028f0(auStack_210);
      local_4._0_1_ = 0x5a;
      FUN_004028f0(auStack_290);
      local_4._0_1_ = 0x3a;
      FUN_004028f0(local_61c);
      FUN_0049d0a0(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x2b4) + 4) + iStack_5e0 * 4));
      i = 0;
      do {
        FUN_0049df90(auStack_280,s__d_005ac034);
        local_4._0_1_ = 0x5d;
        FUN_004093c0(local_5b8);
        local_4._0_1_ = 0x3a;
        FUN_004028f0(auStack_280);
        FUN_00499220(local_320);
        cVar1 = FUN_004997c0(local_320);
        if (cVar1 == '\0') break;
        local_60c = operator_new(0x58);
        local_4._0_1_ = 0x5e;
        if (local_60c == (void *)0x0) {
          this_val_3 = 0;
        }
        else {
          this_val_3 = FUN_0049d2b0(local_60c);
        }
        local_4._0_1_ = 0x3a;
        FUN_0049d840(this_val_3);
        j = CRegVarArray_GetValue(local_320);
        local_4._0_1_ = 0x5f;
        this_val_2_2 = (undefined1 *)FUN_004904e0(auStack_220,local_5a8,0x5f);
        local_4._0_1_ = 0x60;
        FUN_0047c9a0(auStack_270,this_val_2_2,j);
        local_4._0_1_ = 0x61;
        FUN_0049d880(this_val_3);
        local_4._0_1_ = 0x60;
        FUN_004028f0(auStack_270);
        local_4._0_1_ = 0x5f;
        FUN_004028f0(auStack_220);
        local_4 = CONCAT31(local_4._1_3_,0x3a);
        FUN_004028f0(auStack_1f0);
        (*(code *)**(undefined4 **)((int)this + 0x2a8))();
        local_60c = &stack0xfffff9bc;
        CRegVarArray_GetValue(local_320,&stack0xfffff9bc,1);
        FUN_0048ebe0(this);
        CRegVarArray_GetValue(local_320);
        local_60c = (undefined1 *)FUN_0055933d();
        FUN_004028f0(auStack_250);
        FUN_0049d850(this_val_3);
        FUN_0049dd30(this_val_3);
        CRegVarArray_GetValue(local_320);
        j = FUN_0055933d();
        FUN_004028f0(auStack_200);
        if (j != -1) {
          if (j < 0) {
LAB_0048cb15:
            FUN_004c4150();
          }
          else {
            if (*(int *)(operator_new_result + 4) == 0) {
              m = 0;
            }
            else {
              m = *(int *)(operator_new_result + 8) - *(int *)(operator_new_result + 4) >> 2;
            }
            if (m < j) goto LAB_0048cb15;
          }
          FUN_0049dd30(this_val_3);
        }
        CRegVarArray_GetValue(local_320);
        local_4._0_1_ = 0x62;
        FUN_0055933d();
        FUN_0049dd40(this_val_3);
        local_4._0_1_ = 0x3a;
        FUN_004028f0(auStack_260);
        CRegVarArray_GetValue(local_320);
        local_4._0_1_ = 99;
        FUN_0055933d();
        FUN_0049d870(this_val_3);
        local_4._0_1_ = 0x3a;
        FUN_004028f0(auStack_230);
        CRegVarArray_GetValue(local_320);
        local_4._0_1_ = 100;
        FUN_0055933d();
        FUN_0049d860(this_val_3);
        local_4._0_1_ = 0x3a;
        FUN_004028f0(auStack_240);
        CRegVarArray_GetValue(local_320);
        local_4._0_1_ = 0x65;
        FUN_0049dba0(this_val_3);
        local_4._0_1_ = 0x3a;
        FUN_004028f0(auStack_600);
        cVar1 = FUN_0049d7d0(this_val_3);
        if (cVar1 == '\0') {
          FUN_0049dd90(this_val_3);
          FUN_004c4150();
        }
        if (99 < (int)local_60c) {
          FUN_004905f0();
        }
        FUN_004905f0();
        i = i + 1;
      } while (i < 1000);
      iVar3 = iStack_5e0 + 1;
      iStack_5e0 = iVar3;
      m = (*(code *)**(undefined4 **)((int)this + 0x2b0))();
      j = iStack_5e0;
    } while (iVar3 < m + -1);
  }
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  local_61c[0] = local_61d;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined1 *)((int)this + 0x218) = 0;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_Communicator_005ab830;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_Communicator_005ab830;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x66;
  this_val_4 = FUN_00484fa0();
  *(undefined4 *)((int)this + 0x2c) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_Speedometer_005ab840;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_Speedometer_005ab840;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x67;
  this_val_4 = FUN_00484fa0();
  *(undefined4 *)((int)this + 0x28) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_STRING_0_COMMUNICATOR_005ab84c;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_STRING_0_COMMUNICATOR_005ab84c;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x68;
  this_val_4 = FUN_00485d50(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x220) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_STRING_1_COMMUNICATOR_005ab864;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_STRING_1_COMMUNICATOR_005ab864;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x69;
  this_val_4 = FUN_00485d50(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x224) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_STRING_2_COMMUNICATOR_005ab87c;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_STRING_2_COMMUNICATOR_005ab87c;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x6a;
  this_val_4 = FUN_00485d50(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x228) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_STRING_3_COMMUNICATOR_005ab894;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_STRING_3_COMMUNICATOR_005ab894;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x6b;
  this_val_4 = FUN_00485d50(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x22c) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_HLTH_005ab8ac;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_HLTH_005ab8ac;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x6c;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x244) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_HLTH_005ab8c4;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_HLTH_005ab8c4;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x6d;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x23c) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_HLTH_BK_005ab8dc;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_HLTH_BK_005ab8dc;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x6e;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x240) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_DIAL_005ab8f8;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_DIAL_005ab8f8;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x6f;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x254) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_TURBODIAL_005ab910;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_TURBODIAL_005ab910;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x70;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 600) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_STRING_EURO_MONEY_005aba78;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_STRING_EURO_MONEY_005aba78;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x71;
  this_val_4 = FUN_00485d50(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x230) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_STRING_DAMAGE_TXT_005aba8c;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_STRING_DAMAGE_TXT_005aba8c;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x72;
  this_val_4 = FUN_00485d50(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x234) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_DIRECTION_GOLEFT_005aba18;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_DIRECTION_GOLEFT_005aba18;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x73;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x264) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_DIRECTION_GORIGHT_005aba30;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_DIRECTION_GORIGHT_005aba30;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x74;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x268) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_DIRECTION_GOBOTH_005aba48;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_DIRECTION_GOBOTH_005aba48;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x75;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x26c) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_DIRECTION_GOZIGZAG_005aba60;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_DIRECTION_GOZIGZAG_005aba60;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x76;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x270) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac128;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac128;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x77;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac154);
  local_4._0_1_ = 0x78;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x264),this_val_4);
  local_4._0_1_ = 0x77;
  FUN_004028f0(auStack_600);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac16c;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac16c;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x79;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac198);
  local_4._0_1_ = 0x7a;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x268),this_val_4);
  local_4._0_1_ = 0x79;
  FUN_004028f0(auStack_600);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac1b0;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac1b0;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x7b;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac1dc);
  local_4._0_1_ = 0x7c;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x26c),this_val_4);
  local_4._0_1_ = 0x7b;
  FUN_004028f0(auStack_600);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac1f4;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac1f4;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x7d;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac220);
  local_4._0_1_ = 0x7e;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x270),this_val_4);
  local_4._0_1_ = 0x7d;
  FUN_004028f0(auStack_600);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_RED_GLOW_005ab948;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_RED_GLOW_005ab948;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x7f;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x364) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_RED_LED_005ab92c;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_RED_LED_005ab92c;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x80;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x368) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_RED_LUD_005ab964;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_RED_LUD_005ab964;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x81;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x36c) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac238;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac238;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x82;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac264);
  local_4._0_1_ = 0x83;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x364),this_val_4);
  local_4._0_1_ = 0x82;
  FUN_004028f0(auStack_600);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac27c;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac27c;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x84;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac2a8);
  local_4._0_1_ = 0x85;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x368),this_val_4);
  local_4._0_1_ = 0x84;
  FUN_004028f0(auStack_600);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac2c0;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac2c0;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x86;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac2ec);
  local_4._0_1_ = 0x87;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x36c),this_val_4);
  local_4._0_1_ = 0x86;
  FUN_004028f0(auStack_600);
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_RED_GLOW_005ab9e4;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_RED_GLOW_005ab9e4;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x88;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x380) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_RED_LED_005ab9cc;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_RED_LED_005ab9cc;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x89;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 900) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_RED_LUD_005aba00;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_RED_LUD_005aba00;
    pcVar4 = pcStack_618;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x8a;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x388) = this_val_4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  FUN_004028f0(local_61c);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac304;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(local_61c);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac304;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcStack_618 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcStack_618 = pcStack_618 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcStack_618 = *str1;
      str1 = str1 + 1;
      pcStack_618 = pcStack_618 + 1;
    }
    FUN_004029e0(local_61c);
  }
  local_4._0_1_ = 0x8b;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac330);
  local_4._0_1_ = 0x8c;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x380),this_val_4);
  local_4._0_1_ = 0x8b;
  FUN_004028f0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004028f0(local_61c);
  auStack_5f0[0] = local_61d;
  FUN_004028f0(auStack_5f0);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac348;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(auStack_5f0);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac348;
    pcVar4 = pcStack_5ec;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  local_4._0_1_ = 0x8d;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac374);
  local_4._0_1_ = 0x8e;
  FUN_00487bc0(*(undefined4 *)((int)this + 900),this_val_4);
  local_4._0_1_ = 0x8d;
  FUN_004028f0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004028f0(auStack_5f0);
  auStack_5f0[0] = local_61d;
  FUN_004028f0(auStack_5f0);
  k = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac38c;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(auStack_5f0);
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac38c;
    pcVar4 = pcStack_5ec;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  local_4._0_1_ = 0x8f;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac3b8);
  local_4._0_1_ = 0x90;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x388),this_val_4);
  local_4._0_1_ = 0x8f;
  FUN_004028f0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004028f0(auStack_5f0);
  auStack_5f0[0] = local_61d;
  FUN_004028f0(auStack_5f0);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_GRN_GLOW_005ab998;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(auStack_5f0);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_GRN_GLOW_005ab998;
    pcVar4 = pcStack_5ec;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  local_4._0_1_ = 0x91;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x39c) = this_val_4;
  local_4._0_1_ = 0x3a;
  FUN_004028f0(auStack_5f0);
  auStack_5f0[0] = local_61d;
  FUN_004028f0(auStack_5f0);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_GRN_LED_005ab980;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(auStack_5f0);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_GRN_LED_005ab980;
    pcVar4 = pcStack_5ec;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  local_4._0_1_ = 0x92;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x3a0) = this_val_4;
  local_4._0_1_ = 0x3a;
  FUN_004028f0(auStack_5f0);
  auStack_5f0[0] = local_61d;
  FUN_004028f0(auStack_5f0);
  k = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_GRN_LUD_005ab9b4;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  local_60c = (undefined1 *)(~k - 1);
  cVar1 = FUN_00402a00(auStack_5f0);
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_GRN_LUD_005ab9b4;
    pcVar4 = pcStack_5ec;
    for (k = (uint)local_60c >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (k = (uint)local_60c & 3; k != 0; k = k - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  local_4._0_1_ = 0x93;
  this_val_4 = FUN_00484f60();
  *(undefined4 *)((int)this + 0x3a4) = this_val_4;
  local_4._0_1_ = 0x3a;
  FUN_004028f0(auStack_5f0);
  local_61c[0] = local_61d;
  FUN_004028f0(local_61c);
  FUN_004901b0();
  FUN_00402940(local_61c);
  local_4._0_1_ = 0x94;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac3fc);
  local_4._0_1_ = 0x95;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x39c),this_val_4);
  local_4._0_1_ = 0x94;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0x96;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac440);
  local_4._0_1_ = 0x97;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x3a0),this_val_4);
  local_4._0_1_ = 0x96;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0x98;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac484);
  local_4._0_1_ = 0x99;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x3a4),this_val_4);
  local_4._0_1_ = 0x98;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0x9a;
  this_val_4 = FUN_0049df90(auStack_600,s_String__s_not_found_005ac4c8);
  local_4._0_1_ = 0x9b;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x234),this_val_4);
  local_4._0_1_ = 0x9a;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0x9c;
  this_val_4 = FUN_0049df90(auStack_600,s_String__s_not_found_005ac508);
  local_4._0_1_ = 0x9d;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x230),this_val_4);
  local_4._0_1_ = 0x9c;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0x9e;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac548);
  local_4._0_1_ = 0x9f;
  FUN_00487bc0(*(undefined4 *)((int)this + 600),this_val_4);
  local_4._0_1_ = 0x9e;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xa0;
  this_val_4 = FUN_0049df90(auStack_600,s_Composite__s_not_found_005ac58c);
  local_4._0_1_ = 0xa1;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x2c),this_val_4);
  local_4._0_1_ = 0xa0;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xa2;
  this_val_4 = FUN_0049df90(auStack_600,s_Composite__s_not_found_005ac5d0);
  local_4._0_1_ = 0xa3;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x28),this_val_4);
  local_4._0_1_ = 0xa2;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xa4;
  this_val_4 = FUN_0049df90(auStack_600,s_String__s_not_found_005ac614);
  local_4._0_1_ = 0xa5;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x220),this_val_4);
  local_4._0_1_ = 0xa4;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xa6;
  this_val_4 = FUN_0049df90(auStack_600,s_String__s_not_found_005ac654);
  local_4._0_1_ = 0xa7;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x224),this_val_4);
  local_4._0_1_ = 0xa6;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xa8;
  this_val_4 = FUN_0049df90(auStack_600,s_String__s_not_found_005ac694);
  local_4._0_1_ = 0xa9;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x228),this_val_4);
  local_4._0_1_ = 0xa8;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xaa;
  this_val_4 = FUN_0049df90(auStack_600,s_String__s_not_found_005ac6d4);
  local_4._0_1_ = 0xab;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x22c),this_val_4);
  local_4._0_1_ = 0xaa;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xac;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac714);
  local_4._0_1_ = 0xad;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x244),this_val_4);
  local_4._0_1_ = 0xac;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xae;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac758);
  local_4._0_1_ = 0xaf;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x23c),this_val_4);
  local_4._0_1_ = 0xae;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xb0;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac79c);
  local_4._0_1_ = 0xb1;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x240),this_val_4);
  local_4._0_1_ = 0xb0;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_004900f0(local_61c);
  local_4._0_1_ = 0xb2;
  this_val_4 = FUN_0049df90(auStack_600,s_Element__s_not_found_005ac7e0);
  local_4._0_1_ = 0xb3;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x254),this_val_4);
  local_4._0_1_ = 0xb2;
  FUN_004900b0(auStack_600);
  local_4._0_1_ = 0x3a;
  FUN_004900b0(local_61c);
  FUN_0048ee50(this);
  FUN_00489ac0(this);
  FUN_00458b90();
  FUN_004900f0(local_61c);
  local_4 = CONCAT31(local_4._1_3_,0xb4);
  (**(code **)(**(int **)((int)this + 0x234) + 0x48))();
  puStack_8._0_1_ = 0x3a;
  FUN_004900b0(auStack_620);
  FUN_0047cd70(*(undefined4 *)((int)this + 0x364));
  FUN_0047cd70(*(undefined4 *)((int)this + 0x380));
  FUN_0047cd70(*(undefined4 *)((int)this + 0x39c));
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined1 *)((int)this + 0x3c0) = 0;
  puStack_8._0_1_ = 0x32;
  FUN_00499e40(auStack_1e4);
  puStack_8._0_1_ = 0x2b;
  FUN_0049ba20(auStack_364);
  puStack_8._0_1_ = 0x24;
  FUN_0049b3f0(auStack_2d4);
  puStack_8._0_1_ = 0x1c;
  FUN_0049ba20(auStack_164);
  puStack_8._0_1_ = 0x14;
  FUN_00499e40(auStack_324);
  puStack_8._0_1_ = 0xc;
  FUN_0049c5b0(auStack_3e8);
  puStack_8._0_1_ = 6;
  FUN_00499e40(auStack_1a4);
  puStack_8._0_1_ = 5;
  FUN_0042f620(&i);
  puStack_8._0_1_ = 4;
  FUN_0049f4c0(auStack_39c);
  puStack_8._0_1_ = 3;
  FUN_004900b0(auStack_124);
  puStack_8._0_1_ = 2;
  FUN_004900b0(&iStack_598);
  puStack_8._0_1_ = 1;
  FUN_004900b0(auStack_2e4);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_004900b0(auStack_5ac);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004900b0(auStack_5bc);
  ExceptionList = pvStack_10;
  return;
}


/* ==== 0048ebe0 FUN_0048ebe0 ==== */

void __thiscall
FUN_0048ebe0(void *this,undefined4 param_2,char *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iStack_34;
  int i;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar4 = param_4;
  puStack_8 = &LAB_0056dee4;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (1 < (int)param_4) {
    if (param_3 == (char *)0x0) {
      pcVar5 = "";
      ExceptionList = &pvStack_c;
    }
    else {
      ExceptionList = &pvStack_c;
      FUN_00471de0(&param_2);
      pcVar5 = param_3;
    }
    if (*pcVar5 == '[') {
      if ((param_4 < uVar4 - 1) || (param_3 == (char *)0x0)) {
        pcVar5 = "";
      }
      else {
        FUN_00471de0(&param_2);
        pcVar5 = param_3 + (uVar4 - 1);
      }
      if (*pcVar5 == ']') {
        i = 0;
        iVar6 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
        if (0 < iVar6) {
          iVar6 = 0;
          iStack_34 = 0;
          do {
            FUN_0049df90(auStack_1c,s___d__005ac7f8);
            local_4._0_1_ = 1;
            pcVar5 = param_3;
            if (param_3 == (char *)0x0) {
              pcVar5 = "";
            }
            iVar7 = FUN_0040fc80(auStack_1c,0,uStack_14,pcVar5,param_4);
            if (iVar7 == 0) {
              iVar7 = *(int *)(*(int *)((int)this + 700) + 4);
              auStack_2c[0] = *(undefined1 *)(iVar6 + iVar7);
              FUN_004028f0(auStack_2c,0);
              FUN_004093c0(auStack_2c,iVar6 + iVar7,0,0xffffffff);
              local_4._0_1_ = 2;
              iVar7 = *(int *)(*(int *)((int)this + 700) + 4);
              iVar3 = *(int *)(iVar6 + 0x10 + iVar7);
              if (iVar3 < 0x40) {
                *(undefined4 *)(iVar7 + 0x14 + (iVar3 + iStack_34) * 4) = param_6;
                piVar1 = (int *)(iVar6 + 0x10 + *(int *)(*(int *)((int)this + 700) + 4));
                *piVar1 = *piVar1 + 1;
              }
              else {
                FUN_004c4150(s_ERROR___category_can_not_hold_mo_005ac82c,0x40,
                             s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac800,0x565);
              }
              if (iStack_28 != 0) {
                cVar2 = *(char *)(iStack_28 + -1);
                if ((cVar2 == '\0') || (cVar2 == -1)) {
                  FUN_0054b339((char *)(iStack_28 + -1));
                }
                else {
                  *(char *)(iStack_28 + -1) = cVar2 + -1;
                }
              }
              iStack_28 = 0;
              uStack_24 = 0;
              uStack_20 = 0;
            }
            local_4 = (uint)local_4._1_3_ << 8;
            if (iStack_18 != 0) {
              cVar2 = *(char *)(iStack_18 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_0054b339(iStack_18 + -1);
              }
              else {
                *(char *)(iStack_18 + -1) = cVar2 + -1;
              }
            }
            i = i + 1;
            iStack_34 = iStack_34 + 0x45;
            iStack_18 = 0;
            uStack_14 = 0;
            uStack_10 = 0;
            iVar6 = iVar6 + 0x114;
            iVar7 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
          } while (i < iVar7);
        }
        goto LAB_0048edfb;
      }
    }
  }
  FUN_004c4150(s_ERROR___put_correct_category_val_005ac898,s_communi_ini_005ab824,
               s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac86c,0x570);
LAB_0048edfb:
  if (param_3 != (char *)0x0) {
    cVar2 = param_3[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      param_3[-1] = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(param_3 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0048ee50 FUN_0048ee50 ==== */

void __thiscall FUN_0048ee50(void *this)

{
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0048f0d0(local_30,local_18);
  FUN_0048f140(local_24,local_c);
  local_34 = 0x3f99999a;
  FUN_0049cb60((int)this + 0x38,local_30,local_18,&local_34);
  local_34 = 0x3f99999a;
  FUN_0049cb60((int)this + 0xb0,local_24,local_c,&local_34);
  FUN_0049ca90((int)this + 0x128);
  FUN_0049cb00((int)this + 0x1a0);
  FUN_0048ef80(this,1);
  FUN_0048f040(this,1);
  FUN_0047bc50(*(undefined4 *)((int)this + 0x2c),local_30);
  FUN_0047bc50(*(undefined4 *)((int)this + 0x28),local_24);
  *(undefined4 *)((int)this + 0x30) = 0x1000001;
  if (*(char *)((int)this + 0x1a) != '\0') {
    *(undefined4 *)((int)this + 0x34) = 3;
    return;
  }
  *(undefined4 *)((int)this + 0x34) = 0x1000001;
  return;
}


/* ==== 0048ef20 FUN_0048ef20 ==== */

void __thiscall FUN_0048ef20(void *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_c [12];
  
  cVar1 = FUN_00489e70((int)this + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049c9e0((int)this + 0xb0,local_c);
    FUN_0047bc50(*(undefined4 *)((int)this + 0x28),uVar2);
  }
  cVar1 = FUN_00489e70((int)this + 0x34);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049c9e0((int)this + 0x38,local_c);
    FUN_0047bc50(*(undefined4 *)((int)this + 0x2c),uVar2);
  }
  return;
}


/* ==== 0048ef80 FUN_0048ef80 ==== */

void __thiscall FUN_0048ef80(void *this,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x2c) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x220) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x224) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x228) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x22c) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x23c) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x234) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x240) + 0x20))(param_2);
  if (*(int **)((int)this + 0x250) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x250) + 0x20))(param_2);
  }
  if ((char)param_2 == '\0') {
    (**(code **)(**(int **)((int)this + 0x264) + 0x20))(0);
    (**(code **)(**(int **)((int)this + 0x268) + 0x20))(0);
    (**(code **)(**(int **)((int)this + 0x26c) + 0x20))(0);
    (**(code **)(**(int **)((int)this + 0x270) + 0x20))(0);
  }
  return;
}


/* ==== 0048f040 FUN_0048f040 ==== */

void __thiscall FUN_0048f040(void *this,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x28) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x244) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x254) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 600) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x230) + 0x20))(param_2);
  return;
}


/* ==== 0048f090 FUN_0048f090 ==== */

void __thiscall FUN_0048f090(void *this,undefined4 param_2)

{
  if (*(char *)((int)this + 0x238) != (char)param_2) {
    (**(code **)(**(int **)((int)this + 0x23c) + 0x20))(param_2);
    (**(code **)(**(int **)((int)this + 0x240) + 0x20))(param_2);
    *(char *)((int)this + 0x238) = (char)param_2;
  }
  return;
}


/* ==== 0048f0d0 FUN_0048f0d0 ==== */

void FUN_0048f0d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0xbf800000;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_2 = 0x3c343958;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* ==== 0048f140 FUN_0048f140 ==== */

void FUN_0048f140(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* ==== 0048f1b0 FUN_0048f1b0 ==== */

void __thiscall FUN_0048f1b0(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  int i;
  
  i = 0;
  iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2b0))();
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x2b4) + 4) + i * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      i = i + 1;
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x2b4) + 4) + -4 + i * 4) = 0;
      iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2b0))();
    } while (i < iVar2);
  }
  i = 0;
  iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2a8))();
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + i * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      i = i + 1;
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + -4 + i * 4) = 0;
      iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2a8))();
    } while (i < iVar2);
  }
  return;
}


/* ==== 0048f250 FUN_0048f250 ==== */

void __thiscall FUN_0048f250(void *this)

{
  void *this_val;
  bool bVar1;
  int iVar2;
  undefined4 this_val_2;
  
  FUN_0048f380(this,*(int *)((int)this + 0x2c4));
  bVar1 = false;
  iVar2 = FUN_004c5e40(0x58);
  if (iVar2 != 0) {
    *(int *)((int)this + 0x3b8) = *(int *)((int)this + 0x3b8) + 1;
    iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2a8))();
    if (iVar2 <= *(int *)((int)this + 0x3b8)) {
      *(undefined4 *)((int)this + 0x3b8) = 0;
    }
    bVar1 = true;
  }
  iVar2 = FUN_004c5e40(0x5a);
  if (iVar2 == 0) {
    if ((!bVar1) && (*(int *)((int)this + 0x360) != 0)) {
      return;
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0x3b8) + -1;
    *(int *)((int)this + 0x3b8) = iVar2;
    if (iVar2 < 0) {
      iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2a8))();
      *(int *)((int)this + 0x3b8) = iVar2 + -1;
    }
  }
  this_val_2 = FUN_0049dd50(*(undefined4 *)
                             (*(int *)(*(int *)((int)this + 0x2ac) + 4) +
                             *(int *)((int)this + 0x3b8) * 4));
  iVar2 = FUN_0049d200(this_val_2);
  if (iVar2 != -1) {
    this_val = *(void **)(*(int *)((int)this + 0x3b8) * 4 +
                         *(int *)(*(int *)((int)this + 0x2ac) + 4));
    iVar2 = FUN_0049dd70(this_val);
    FUN_00489ec0(this,this_val,iVar2 + *(int *)((int)this + 0x260),-1);
    *(int *)((int)this + 0x2c4) = 0;
  }
  FUN_004899a0(this,*(undefined4 *)
                     (*(int *)(*(int *)((int)this + 0x2ac) + 4) + *(int *)((int)this + 0x3b8) * 4));
  return;
}


/* ==== 0048f380 FUN_0048f380 ==== */

void __thiscall FUN_0048f380(void *this,int this_val)

{
  char cVar1;
  int iVar2;
  int m;
  undefined1 *puVar3;
  undefined4 this_val_3;
  char *pcVar4;
  uint i;
  uint j;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int k;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  int this_val_2;
  
  this_val_2 = this_val;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056def6;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)this_val;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,0);
  local_4 = 0;
  FUN_004c5930(1,0x28,200,s_prev_<<__Z_X__>>_next_005ac8e8);
  if (this_val == 0) {
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,1);
    ExceptionList = local_c;
    return;
  }
  i = 0xffffffff;
  pcVar4 = s_Geen_005ac904;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Geen_005ac904;
    pcVar7 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[i] = '\0';
    local_14 = i;
  }
  k = 0;
  iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
  if (0 < iVar2) {
    this_val = 0;
    do {
      m = 0;
      iVar5 = this_val + *(int *)(*(int *)((int)this + 700) + 4);
      iVar2 = *(int *)(iVar5 + 0x10);
      if (0 < iVar2) {
        piVar6 = (int *)(iVar5 + 0x14);
        do {
          if (*piVar6 == *(int *)((int)this + 0x3b8)) {
            FUN_004093c0(local_1c,*(int *)(*(int *)((int)this + 700) + 4) + k * 0x114,0,0xffffffff);
            goto LAB_0048f4d8;
          }
          m = m + 1;
          piVar6 = piVar6 + 1;
        } while (m < iVar2);
      }
      this_val = this_val + 0x114;
      k = k + 1;
      iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
    } while (k < iVar2);
  }
LAB_0048f4d8:
  iVar2 = FUN_0049dd90(this_val_2);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c5930(1,0x14,0x14,s_Berichtnr___d____s___005ac90c,*(undefined4 *)((int)this + 0x3b8),puVar3
              );
  this_val_3 = FUN_0049dd50(this_val_2);
  iVar2 = FUN_0049d210(this_val_3);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c5930(1,0x14,0x28,s_Eigenaar___s_005ac92c,puVar3);
  iVar2 = FUN_0049dd80(this_val_2);
  FUN_004c5930(1,0x14,0x3c,s_Tijd_in_beeld___d_s_005ac944,iVar2 / 1000);
  iVar2 = FUN_0049dd70(this_val_2);
  FUN_004c5930(1,0x14,0x50,s_Tijd_in_lijst___d_s_005ac95c,iVar2 / 1000);
  pcVar4 = local_18;
  if (local_18 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004c5930(1,0x14,100,s_Categorie___s_005ac974,pcVar4);
  this_val_3 = FUN_0049dd60(this_val_2);
  this_val_3 = FUN_0049dd50(this_val_2,this_val_3);
  this_val_3 = FUN_0049d200(this_val_3);
  FUN_004c5930(1,0x14,0x78,s_Prioriteit___d__d_005ac98c,this_val_3);
  iVar2 = FUN_0049df20(this_val_2);
  if (iVar2 == -1) {
    FUN_004c5930(1,0x14,0xa0,s_Sample__Geen_005ac9a4);
  }
  else {
    this_val_3 = FUN_0049df20(this_val_2);
    FUN_004c5930(1,0x14,0xa0,s_Sample___d_005ac9bc,this_val_3);
  }
  this_val_3 = FUN_0049df30(this_val_2);
  switch(this_val_3) {
  case 1:
    FUN_004c5930(1,0x14,0x8c,s_Event__Copalert_lampje_005ac9d0);
  case 2:
    FUN_004c5930(1,0x14,0x8c,s_Event__richtingaanwijzer_naar_Li_005ac9f0);
  case 3:
    FUN_004c5930(1,0x14,0x8c,s_Event__richtingaanwijzer_naar_Re_005aca1c);
  case 4:
    FUN_004c5930(1,0x14,0x8c,s_Event__richtingaanwijzer_naar_Li_005aca48);
  case 5:
    FUN_004c5930(1,0x14,0x8c,s_Event__richtingaanwijzer_ZIGZAG_005aca7c);
  }
  FUN_004c5930(1,0x14,0x8c,s_Event__Geen_005acaa4);
  if (local_18 != (char *)0x0) {
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


/* ==== 0048f720 FUN_0048f720 ==== */

void __thiscall FUN_0048f720(void *this)

{
  char cVar1;
  char *pcVar2;
  int i;
  int iVar3;
  undefined4 this_val;
  uint j;
  uint k;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056df08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c);
  i = *(int *)((int)this + 0x34);
  local_4 = 0;
  if (i < 0x1000002) {
    if (i == 0x1000001) {
      j = 0xffffffff;
      pcVar2 = s_BUSY_INIT_005acac4;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(local_1c,j,1);
      if (cVar1 != '\0') {
        pcVar2 = s_BUSY_INIT_005acac4;
LAB_0048f8be:
        pcVar7 = local_18;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar7 = pcVar7 + 4;
        }
LAB_0048f8cb:
        for (j = j & 3; j != 0; j = j - 1) {
          *pcVar7 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_004029e0(local_1c);
      }
    }
    else if (i == 1) {
      j = 0xffffffff;
      pcVar2 = s_STATE_INIT_005acab8;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(local_1c,j,1);
      if (cVar1 != '\0') {
        pcVar2 = s_STATE_INIT_005acab8;
        pcVar7 = local_18;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar7 = pcVar7 + 4;
        }
        goto LAB_0048f8cb;
      }
    }
    else if (i == 2) {
      j = 0xffffffff;
      pcVar2 = s_STATE_ONSCREEN_005acad0;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(local_1c,j,1);
      if (cVar1 != '\0') {
        pcVar2 = s_STATE_ONSCREEN_005acad0;
        goto LAB_0048f8be;
      }
    }
    else if (i == 3) {
      j = 0xffffffff;
      pcVar2 = s_STATE_OFFSCREEN_005acaf0;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(local_1c,j,1);
      if (cVar1 != '\0') {
        pcVar2 = s_STATE_OFFSCREEN_005acaf0;
        pcVar7 = local_18;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar7 = pcVar7 + 4;
        }
        goto LAB_0048f8cb;
      }
    }
  }
  else if (i == 0x1000002) {
    j = 0xffffffff;
    pcVar2 = s_BUSY_ONSCREEN_005acae0;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(local_1c,j,1);
    if (cVar1 != '\0') {
      pcVar2 = s_BUSY_ONSCREEN_005acae0;
      goto LAB_0048f8be;
    }
  }
  else if (i == 0x1000003) {
    j = 0xffffffff;
    pcVar2 = s_BUSY_OFFSCREEN_005acb00;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(local_1c,j,1);
    if (cVar1 != '\0') {
      pcVar2 = s_BUSY_OFFSCREEN_005acb00;
      pcVar7 = local_18;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      goto LAB_0048f8cb;
    }
  }
  pcVar2 = local_18;
  if (local_18 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c5930(1,0x28,0xfa,pcVar2);
  i = *(int *)((int)this + 0x30);
  if (i < 0x1000002) {
    if (i == 0x1000001) {
      j = 0xffffffff;
      pcVar2 = s_BUSY_INIT_005acb1c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(local_1c,j,1);
      if (cVar1 == '\0') goto LAB_0048fa7a;
      pcVar2 = s_BUSY_INIT_005acb1c;
      goto LAB_0048fa5e;
    }
    if (i == 1) {
      j = 0xffffffff;
      pcVar2 = s_STATE_INIT_005acb10;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(local_1c,j,1);
      if (cVar1 == '\0') goto LAB_0048fa7a;
      pcVar2 = s_STATE_INIT_005acb10;
      pcVar7 = local_18;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
    }
    else {
      if (i == 2) {
        j = 0xffffffff;
        pcVar2 = s_STATE_ONSCREEN_005acb28;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        j = ~j - 1;
        cVar1 = FUN_00402a00(local_1c,j,1);
        if (cVar1 == '\0') goto LAB_0048fa7a;
        pcVar2 = s_STATE_ONSCREEN_005acb28;
        goto LAB_0048fa5e;
      }
      if (i != 3) goto LAB_0048fa7a;
      j = 0xffffffff;
      pcVar2 = s_STATE_OFFSCREEN_005acb48;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(local_1c,j,1);
      if (cVar1 == '\0') goto LAB_0048fa7a;
      pcVar2 = s_STATE_OFFSCREEN_005acb48;
      pcVar7 = local_18;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
    }
  }
  else {
    if (i != 0x1000002) {
      if (i != 0x1000003) goto LAB_0048fa7a;
      j = 0xffffffff;
      pcVar2 = s_BUSY_OFFSCREEN_005acb58;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(local_1c,j,1);
      if (cVar1 == '\0') goto LAB_0048fa7a;
      pcVar2 = s_BUSY_OFFSCREEN_005acb58;
      pcVar7 = local_18;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      goto LAB_0048fa6b;
    }
    j = 0xffffffff;
    pcVar2 = s_BUSY_ONSCREEN_005acb38;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(local_1c,j,1);
    if (cVar1 == '\0') goto LAB_0048fa7a;
    pcVar2 = s_BUSY_ONSCREEN_005acb38;
LAB_0048fa5e:
    pcVar7 = local_18;
    for (k = j >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
  }
LAB_0048fa6b:
  for (j = j & 3; j != 0; j = j - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_004029e0(local_1c);
LAB_0048fa7a:
  pcVar2 = local_18;
  if (local_18 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c5930(1,0x1b8,0xfa,pcVar2);
  i = *(int *)((int)this + 0x20);
  if (i != -1) {
    i = (i - *(int *)((int)this + 0x260)) / 1000;
  }
  FUN_004c5930(1,400,0xdc,s__d___d__005acb68,i,*(int *)((int)this + 0x1c) / 1000);
  FUN_004c5930(1,0x1e0,0xa0,s_CopAlert__d__d_005acb70,*(undefined4 *)((int)this + 0x374),
               *(undefined4 *)((int)this + 0x378));
  FUN_004c5930(1,0x1e0,0xb4,s_DamageAlert__d_005acb80,*(undefined4 *)((int)this + 0x390));
  FUN_004c5930(1,0x1e0,200,s_TurboAlert__f_005acb90,(double)*(float *)((int)this + 0x24c));
  if (*(int *)((int)this + 0x2c4) != 0) {
    i = FUN_0049dd90();
    puVar5 = *(undefined1 **)(i + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0057629c;
    }
    FUN_004c5930(1,10,0xf,s_SHOW__ID__s___Time__d__005acba0,puVar5,
                 (*(int *)((int)this + 0x2c8) - *(int *)((int)this + 0x260)) / 1000);
  }
  i = 0;
  if (0 < *(int *)((int)this + 0x360)) {
    iVar4 = 0x28;
    puVar6 = (undefined4 *)((int)this + 0x2d0);
    do {
      iVar3 = FUN_0049dd90(*puVar6);
      puVar5 = *(undefined1 **)(iVar3 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      this_val = FUN_0049dd60(*puVar6,(puVar6[1] - *(int *)((int)this + 0x260)) / 1000,puVar5);
      this_val = FUN_0049dd50(*puVar6,this_val);
      this_val = FUN_0049d200(this_val);
      FUN_004c5930(1,10,iVar4,s__2d__Prio__d__d__Time__d__ID__s__005acbc0,i,this_val);
      i = i + 1;
      iVar4 = iVar4 + 0x14;
      puVar6 = puVar6 + 3;
    } while (i < *(int *)((int)this + 0x360));
  }
  if (local_18 != (char *)0x0) {
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


/* ==== 0048fc90 FUN_0048fc90 ==== */

void __thiscall FUN_0048fc90(void *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *this_val;
  undefined4 *puVar4;
  int i;
  int j;
  float fVar5;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [4];
  int local_9c;
  undefined1 auStack_90 [12];
  undefined1 local_84 [120];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056df28;
  local_c = ExceptionList;
  i = 0;
  if (0 < *(int *)((int)this + 0x2c0)) {
    if (*(int *)((int)this + 0x3c4) == 0) {
      ExceptionList = &local_c;
      FUN_0049c910(local_84);
      local_4 = 0;
      local_cc = 0.3;
      local_c8 = 2.0 / (float)*(int *)((int)this + 0x2c0);
      if (*(int *)((int)this + 0x34) != 3) {
        FUN_0048f0d0(&local_b4,&local_c4);
        local_a4 = 0x40400000;
        FUN_0049cb60((int)this + 0x38,&local_c4,&local_b4,&local_a4);
        FUN_0048f140(&local_b4,&local_c4);
        local_a8 = 0x40400000;
        FUN_0049cb60((int)this + 0xb0,&local_c4,&local_b4,&local_a8);
        *(undefined4 *)((int)this + 0x34) = 0x1000002;
        *(undefined4 *)((int)this + 0x30) = 0x1000002;
        if (*(int **)((int)this + 0x250) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x250) + 0x20))(0);
          *(undefined4 *)((int)this + 0x250) = 0;
        }
      }
      i = 0;
      local_c4 = 0xc0000000;
      local_bc = 0;
      local_b4 = 0xbecccccd;
      local_ac = 0;
      local_c0 = 0.3;
      local_b0 = 0.3;
      if (0 < *(int *)((int)this + 0x2c0)) {
        do {
          FUN_0049cb60(local_84,&local_c4,&local_b4,&local_cc);
          FUN_00490a20(*(int *)((int)this + 0x3cc),*(undefined4 *)(*(int *)((int)this + 0x3cc) + 8),
                       local_84);
          local_c0 = local_c0 - local_c8;
          i = i + 1;
          local_b0 = local_b0 - local_c8;
          local_cc = local_cc + 0.5;
        } while (i < *(int *)((int)this + 0x2c0));
      }
      *(undefined4 *)((int)this + 0x3c4) = 1;
      local_4 = 0xffffffff;
      FUN_0049c920(local_84);
    }
    else if (*(int *)((int)this + 0x3c4) == 1) {
      ExceptionList = &local_c;
      FUN_004028f0(local_a0,0);
      local_4 = 1;
      if (*(int *)((int)this + 0x34) == 3) {
        if (*(int *)((int)this + 0x30) == 3) {
          iVar2 = (*(code *)**(undefined4 **)((int)this + 0x2b0))();
          j = 0;
          fVar5 = (float)(iVar2 + -1);
          local_c8 = -NAN;
          local_cc = fVar5;
          if (0 < (int)fVar5) {
            do {
              cVar1 = FUN_0049d240(*(undefined4 *)
                                    (*(int *)(*(int *)((int)this + 0x2b4) + 4) + j * 4));
              if (cVar1 != '\0') {
                uVar3 = FUN_0049d210(*(undefined4 *)
                                      (*(int *)(*(int *)((int)this + 0x2b4) + 4) + j * 4));
                FUN_004093c0(local_a0,uVar3,0,0xffffffff);
                this_val = (int *)FUN_0049d230(*(undefined4 *)
                                                (*(int *)(*(int *)((int)this + 0x2b4) + 4) + j * 4))
                ;
                (**(code **)(*this_val + 0x28))(&local_c8);
                iVar2 = FUN_0049ca80(i + *(int *)(*(int *)((int)this + 0x3cc) + 4));
                if (iVar2 != 1) {
                  puVar4 = (undefined4 *)
                           FUN_0049c9e0(i + *(int *)(*(int *)((int)this + 0x3cc) + 4),auStack_90);
                  local_c4 = *puVar4;
                  local_c0 = (float)puVar4[1];
                  local_bc = puVar4[2];
                  FUN_0047bc50(this_val,&local_c4);
                  (**(code **)(*this_val + 0x20))(1);
                }
                i = i + 0x78;
                fVar5 = local_cc;
              }
              j = j + 1;
            } while (j < (int)fVar5);
          }
          *(undefined4 *)((int)this + 0x3c4) = 2;
        }
        if (local_9c != 0) {
          cVar1 = *(char *)(local_9c + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(local_9c + -1);
          }
          else {
            *(char *)(local_9c + -1) = cVar1 + -1;
          }
        }
      }
      else {
        local_4 = 0xffffffff;
        FUN_004028f0(local_a0,1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00490030 FUN_00490030 ==== */

void FUN_00490030(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00490040 FUN_00490040 ==== */

void FUN_00490040(void)

{
  FUN_005584e0(&LAB_00490050);
  return;
}


