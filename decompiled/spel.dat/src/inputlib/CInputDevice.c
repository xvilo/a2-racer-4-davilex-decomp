/* spel.dat — inputlib/CInputDevice.cpp: 18 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004f09c0 FUN_004f09c0 ==== */

void FUN_004f09c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004f09d0 FUN_004f09d0 ==== */

void FUN_004f09d0(void)

{
  FUN_005584e0(&LAB_004f09e0);
  return;
}


/* ==== 004f0a00 FUN_004f0a00 ==== */

void FUN_004f0a00(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004f0a10 FUN_004f0a10 ==== */

void FUN_004f0a10(void)

{
  FUN_005584e0(&LAB_004f0a20);
  return;
}


/* ==== 004f0a60 FUN_004f0a60 ==== */

void __thiscall FUN_004f0a60(void *this,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int i;
  undefined4 *puVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572bf0;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xa4) == 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined1 *)FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    uVar2 = FUN_004796b0(local_38,puVar1,s_Trying_to_get_DevCaps_while_DiOb_005b8c1c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_28,uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  puVar3 = (undefined4 *)((int)this + 0xac);
  for (i = 0xb; i != 0; i = i + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* ==== 004f0b00 FUN_004f0b00 ==== */

void * __thiscall FUN_004f0b00(void *this)

{
  undefined1 *operator_new_result;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572c19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00578298;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_11;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 8) = operator_new_result;
  *(undefined1 *)((int)this + 0x90) = local_11;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  local_4 = 1;
  *(undefined ***)this = &PTR_FUN_00578280;
  *(undefined1 *)((int)this + 0xa0) = 1;
  FUN_004f1240(this,0);
  ExceptionList = local_c;
  return this;
}


/* ==== 004f0ba0 FUN_004f0ba0 ==== */

void * __thiscall FUN_004f0ba0(void *this,byte param_2)

{
  FUN_004f0bc0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004f0bc0 FUN_004f0bc0 ==== */

void __thiscall FUN_004f0bc0(void *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int this_val;
  
  *(undefined ***)this = &PTR_FUN_00578280;
  iVar2 = *(int *)((int)this + 0x94);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  iVar2 = *(int *)((int)this + 8);
  *(undefined ***)((int)this + 4) = &PTR_LAB_00578298;
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  iVar3 = *(int *)(iVar2 + 8);
  for (this_val = *(int *)(iVar2 + 4); this_val != iVar3; this_val = this_val + 0x28) {
    FUN_004900b0(this_val);
  }
  FUN_0054b339(*(undefined4 *)(iVar2 + 4));
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  FUN_0054b339(iVar2);
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


/* ==== 004f0c60 FUN_004f0c60 ==== */

void __thiscall FUN_004f0c60(void *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_a4 [28];
  undefined1 local_88 [28];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572c60;
  local_c = ExceptionList;
  if ((-1 < *(int *)((int)this + 0x8c)) && (*(int *)((int)this + 0x8c) < 0x20)) {
    ExceptionList = &local_c;
    iVar1 = FUN_004f0fe0(this,param_2);
    if (iVar1 == -1) {
      iVar1 = FUN_0049df90(local_4c,s_Trying_to_add_a_command_that_doe_005b8cdc);
      local_4 = 3;
      puVar2 = (undefined1 *)FUN_0049df90(local_3c,s_Input_exception_in___s___d__005b77e4);
      local_4._0_1_ = 4;
      uVar3 = FUN_0047c9a0(local_1c,puVar2,iVar1);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004edac0(local_88,uVar3);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_88,&DAT_005872d0);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)this + 8) + 4) + 0x18 + iVar1 * 0x28) = param_3;
    *(int *)((int)this + *(int *)((int)this + 0x8c) * 4 + 0xc) = iVar1;
    *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + 1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_0049df90(local_6c,s_Illegal_index_m_NrCommands__Buff_005b8c6c);
  local_4 = 0;
  puVar2 = (undefined1 *)FUN_0049df90(local_2c,s_Input_exception_in___s___d__005b77e4);
  local_4._0_1_ = 1;
  uVar3 = FUN_0047c9a0(local_5c,puVar2,iVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(local_a4,uVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a4,&DAT_005872d0);
}


/* ==== 004f0df0 FUN_004f0df0 ==== */

void __thiscall FUN_004f0df0(void *this,undefined4 param_2,char param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_a4 [28];
  undefined1 local_88 [28];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572ca0;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0x8c) < 0) || (0x1f < *(int *)((int)this + 0x8c))) {
    ExceptionList = &local_c;
    iVar3 = FUN_0049df90(local_6c,s_Illegal_index_m_NrCommands__Buff_005b8c6c);
    local_4 = 0;
    puVar4 = (undefined1 *)FUN_0049df90(local_2c,s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 1;
    uVar5 = FUN_0047c9a0(local_5c,puVar4,iVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(local_a4,uVar5);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_a4,&DAT_005872d0);
  }
  ExceptionList = &local_c;
  iVar3 = FUN_004f0fe0(this,param_2);
  if (iVar3 == -1) {
    iVar3 = FUN_0049df90(local_4c,s_Trying_to_add_a_command_that_doe_005b8cdc);
    local_4 = 3;
    puVar4 = (undefined1 *)FUN_0049df90(local_3c,s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 4;
    uVar5 = FUN_0047c9a0(local_1c,puVar4,iVar3);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004edac0(local_88,uVar5);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_88,&DAT_005872d0);
  }
  iVar2 = *(int *)(*(int *)((int)this + 8) + 4);
  fVar1 = *(float *)(iVar2 + 0x14 + iVar3 * 0x28);
  iVar2 = iVar2 + iVar3 * 0x28;
  if (*(char *)(iVar2 + 0x24) == '\0') {
    if (param_3 == '\0') {
      fVar1 = 0.0;
      goto LAB_004f0f2b;
    }
  }
  else {
    if (param_3 == '\0') {
      fVar1 = fVar1 - *(float *)(iVar2 + 0x20);
    }
    else {
      fVar1 = fVar1 + *(float *)(iVar2 + 0x1c);
    }
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
      goto LAB_004f0f2b;
    }
    if (fVar1 <= 1.0) goto LAB_004f0f2b;
  }
  fVar1 = 1.0;
LAB_004f0f2b:
  *(float *)(iVar2 + 0x18) = fVar1;
  if (0.0 < fVar1) {
    *(int *)((int)this + *(int *)((int)this + 0x8c) * 4 + 0xc) = iVar3;
    *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + 1;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004f0fe0 FUN_004f0fe0 ==== */

int __thiscall FUN_004f0fe0(void *this,int param_2)

{
  int iVar1;
  char *_Str2;
  int __strcmpi_result;
  char *_Str1;
  int iVar2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 4))();
  i = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      _Str2 = *(char **)(*(int *)(*(int *)((int)this + 8) + 4) + iVar2 + 4);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      _Str1 = *(char **)(param_2 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return i;
      }
      i = i + 1;
      iVar2 = iVar2 + 0x28;
    } while (i < iVar1);
  }
  return -1;
}


/* ==== 004f1050 FUN_004f1050 ==== */

/* WARNING: Removing unreachable block (ram,0x004f1091) */

void __thiscall FUN_004f1050(void *this,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint i;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_34 [4];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004edcf0(local_34);
  local_4 = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (local_34 == param_2) {
    FUN_0040f800(local_34,uVar1,0xffffffff);
    FUN_0040f800(local_34,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(local_34,1);
        local_30 = *(undefined4 **)(param_2 + 4);
        if (local_30 == (undefined4 *)0x0) {
          local_30 = (undefined4 *)&DAT_0057629c;
        }
        local_2c = *(undefined4 *)(param_2 + 8);
        local_28 = *(undefined4 *)(param_2 + 0xc);
        *(char *)((int)local_30 + -1) = *(char *)((int)local_30 + -1) + '\x01';
        goto LAB_004f1141;
      }
    }
    cVar2 = FUN_00402a00(local_34,uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_2 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = local_30;
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004029e0(local_34,uVar1);
    }
  }
LAB_004f1141:
  FUN_004f1390(*(void **)((int)this + 8),*(undefined4 **)((int)*(void **)((int)this + 8) + 8),1,
               local_34);
  if (local_30 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_30 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)((int)local_30 + -1) = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((undefined1 *)((int)local_30 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004f11a0 FUN_004f11a0 ==== */

undefined1 FUN_004f11a0(void)

{
  return 1;
}


/* ==== 004f11b0 FUN_004f11b0 ==== */

void __thiscall FUN_004f11b0(void *this)

{
  int i;
  int iVar1;
  int iVar2;
  
  i = (*(code *)**(undefined4 **)((int)this + 4))();
  if (0 < i) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)((int)this + 8) + 4) + iVar2;
      iVar2 = iVar2 + 0x28;
      i = i + -1;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x18);
    } while (i != 0);
  }
  return;
}


/* ==== 004f1240 FUN_004f1240 ==== */

void __thiscall FUN_004f1240(void *this,undefined1 param_2)

{
  int i;
  int iVar1;
  
  i = (*(code *)**(undefined4 **)((int)this + 4))();
  if (0 < i) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 0x28;
      i = i + -1;
      *(undefined1 *)(*(int *)(*(int *)((int)this + 8) + 4) + -4 + iVar1) = param_2;
    } while (i != 0);
  }
  return;
}


/* ==== 004f1270 FUN_004f1270 ==== */

void __thiscall FUN_004f1270(void *this)

{
  int iVar1;
  int iVar2;
  int this_val;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00578298;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (this_val = *(int *)(iVar1 + 4); this_val != iVar2; this_val = this_val + 0x28) {
    FUN_004900b0(this_val);
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004f1300 FUN_004f1300 ==== */

int __thiscall FUN_004f1300(void *this)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)this)();
  return *(int *)(*(int *)((int)this + 4) + 4) + (iVar1 + -1) * 0x28;
}


/* ==== 004f1390 FUN_004f1390 ==== */

void __thiscall FUN_004f1390(void *this,undefined4 *this_val_2,uint param_2,undefined1 *param_3)

{
  undefined1 *this_val;
  int iVar1;
  undefined1 *this_val_4;
  undefined4 *puVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  void *extraout_ECX_03;
  int i;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int this_val_5;
  undefined4 *puVar6;
  void *this_val_3;
  
  puVar6 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)((*(int *)((int)this + 0xc) - (int)puVar6) / 0x28)) {
    if (param_2 <= (uint)(((int)puVar6 - (int)this_val_2) / 0x28)) {
      if (param_2 != 0) {
        puVar2 = puVar6;
        this_val_3 = this;
        for (puVar5 = puVar6 + param_2 * -10; puVar5 != puVar6; puVar5 = puVar5 + 10) {
          FUN_004f1750(this_val_3,(undefined1 *)puVar2,(undefined1 *)puVar5);
          puVar2 = puVar2 + 10;
          this_val_3 = extraout_ECX_03;
        }
        i = *(int *)((int)this + 8);
        puVar6 = (undefined4 *)(*(int *)((int)this + 8) + param_2 * -0x28);
        while (this_val_2 != puVar6) {
          FUN_004093c0(i + -0x28,puVar6 + -10,0,0xffffffff);
          *(undefined4 *)(i + -0x18) = puVar6[-6];
          *(undefined4 *)(i + -0x14) = puVar6[-5];
          *(undefined4 *)(i + -0x10) = puVar6[-4];
          *(undefined4 *)(i + -0xc) = puVar6[-3];
          *(undefined4 *)(i + -8) = puVar6[-2];
          *(undefined1 *)(i + -4) = *(undefined1 *)(puVar6 + -1);
          i = i + -0x28;
          puVar6 = puVar6 + -10;
        }
        if (this_val_2 != this_val_2 + param_2 * 10) {
          puVar6 = this_val_2 + 5;
          do {
            FUN_004093c0(puVar6 + -5,param_3,0,0xffffffff);
            puVar6[-1] = *(undefined4 *)(param_3 + 0x10);
            *puVar6 = *(undefined4 *)(param_3 + 0x14);
            puVar6[1] = *(undefined4 *)(param_3 + 0x18);
            puVar6[2] = *(undefined4 *)(param_3 + 0x1c);
            puVar6[3] = *(undefined4 *)(param_3 + 0x20);
            *(undefined1 *)(puVar6 + 4) = param_3[0x24];
            puVar2 = puVar6 + 5;
            puVar6 = puVar6 + 10;
          } while (puVar2 != this_val_2 + param_2 * 10);
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x28;
      }
      return;
    }
    puVar2 = this_val_2 + param_2 * 10;
    for (puVar5 = this_val_2; puVar5 != puVar6; puVar5 = puVar5 + 10) {
      FUN_004f1750(puVar2,(undefined1 *)puVar2,(undefined1 *)puVar5);
      puVar2 = puVar2 + 10;
    }
    puVar4 = *(undefined1 **)((int)this + 8);
    this_val_4 = puVar4 + -(int)this_val_2;
    for (i = param_2 - (int)this_val_4 / 0x28; i != 0; i = i + -1) {
      FUN_004f1750(this_val_4,puVar4,param_3);
      puVar4 = puVar4 + 0x28;
      this_val_4 = extraout_ECX_02;
    }
    puVar6 = *(undefined4 **)((int)this + 8);
    for (; this_val_2 != puVar6; this_val_2 = this_val_2 + 10) {
      FUN_004f18f0(this_val_2,param_3);
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x28;
    return;
  }
  i = *(int *)((int)this + 4);
  if ((i == 0) || (uVar3 = ((int)puVar6 - i) / 0x28, uVar3 <= param_2)) {
    uVar3 = param_2;
  }
  if (i == 0) {
    i = 0;
  }
  else {
    i = ((int)puVar6 - i) / 0x28;
  }
  i = i + uVar3;
  iVar1 = i;
  if (i < 0) {
    iVar1 = 0;
  }
  this_val_4 = operator_new(iVar1 * 0x28);
  puVar4 = this_val_4;
  this_val_3 = extraout_ECX;
  for (puVar6 = *(undefined4 **)((int)this + 4); uVar3 = param_2, this_val = puVar4,
      puVar6 != this_val_2; puVar6 = puVar6 + 10) {
    FUN_004f1750(this_val_3,puVar4,(undefined1 *)puVar6);
    puVar4 = puVar4 + 0x28;
    this_val_3 = extraout_ECX_00;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_004f1750(this_val_3,this_val,param_3);
    this_val = this_val + 0x28;
    this_val_3 = extraout_ECX_01;
  }
  puVar4 = puVar4 + param_2 * 0x28;
  puVar6 = *(undefined4 **)((int)this + 8);
  for (; this_val_2 != puVar6; this_val_2 = this_val_2 + 10) {
    FUN_004f1750(puVar4,puVar4,(undefined1 *)this_val_2);
    puVar4 = puVar4 + 0x28;
  }
  iVar1 = *(int *)((int)this + 8);
  for (this_val_5 = *(int *)((int)this + 4); this_val_5 != iVar1; this_val_5 = this_val_5 + 0x28) {
    FUN_004900b0(this_val_5);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  iVar1 = *(int *)((int)this + 4);
  *(undefined1 **)((int)this + 0xc) = this_val_4 + i * 0x28;
  if (iVar1 != 0) {
    *(undefined1 **)((int)this + 4) = this_val_4;
    *(undefined1 **)((int)this + 8) =
         this_val_4 + (param_2 + (*(int *)((int)this + 8) - iVar1) / 0x28) * 0x28;
    return;
  }
  *(undefined1 **)((int)this + 4) = this_val_4;
  *(undefined1 **)((int)this + 8) = this_val_4 + param_2 * 0x28;
  return;
}


