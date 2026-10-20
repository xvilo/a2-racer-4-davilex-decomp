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

void FUN_004f0a60(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int i;
  undefined4 *puVar2;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572bf0;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 0xa4) == 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                         s___CDirectInputDevice_h_005b8c54,0x59);
    local_4 = 0;
    uVar1 = FUN_004796b0(local_38,uVar1,s_Trying_to_get_DevCaps_while_DiOb_005b8c1c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  puVar2 = (undefined4 *)(in_ECX + 0xac);
  for (i = 0xb; i != 0; i = i + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004f0b00 FUN_004f0b00 ==== */

void FUN_004f0b00(void)

{
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572c19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[1] = &PTR_LAB_00578298;
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
  in_ECX[2] = operator_new_result;
  *(undefined1 *)(in_ECX + 0x24) = local_11;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x23] = 0;
  local_4 = 1;
  *in_ECX = &PTR_FUN_00578280;
  *(undefined1 *)(in_ECX + 0x28) = 1;
  FUN_004f1240(0);
  ExceptionList = local_c;
  return;
}


/* ==== 004f0ba0 FUN_004f0ba0 ==== */

void FUN_004f0ba0(byte param_1)

{
  FUN_004f0bc0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004f0bc0 FUN_004f0bc0 ==== */

void FUN_004f0bc0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  *in_ECX = &PTR_FUN_00578280;
  iVar2 = in_ECX[0x25];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  iVar2 = in_ECX[2];
  in_ECX[1] = &PTR_LAB_00578298;
  if (iVar2 == 0) {
    in_ECX[2] = 0;
    return;
  }
  iVar3 = *(int *)(iVar2 + 8);
  for (iVar4 = *(int *)(iVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0x28) {
    FUN_004900b0();
  }
  FUN_0054b339(*(undefined4 *)(iVar2 + 4));
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  FUN_0054b339(iVar2);
  in_ECX[2] = 0;
  return;
}


/* ==== 004f0c60 FUN_004f0c60 ==== */

void FUN_004f0c60(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
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
  iVar1 = *(int *)(in_ECX + 0x8c);
  if ((-1 < iVar1) && (iVar1 < 0x20)) {
    ExceptionList = &local_c;
    iVar1 = FUN_004f0fe0(param_1);
    if (iVar1 == -1) {
      puVar2 = *(undefined1 **)(param_1 + 4);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_0057629c;
      }
      uVar3 = FUN_0049df90(local_4c,s_Trying_to_add_a_command_that_doe_005b8cdc,
                           s_Command___s_005b8d1c,puVar2);
      local_4 = 3;
      uVar4 = FUN_0049df90(local_3c,s_Input_exception_in___s___d__005b77e4,
                           s_D__Work_InputLib_prog_CInputDevi_005b8cb4,0x3f);
      local_4._0_1_ = 4;
      uVar3 = FUN_0047c9a0(local_1c,uVar4,uVar3);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_88,&DAT_005872d0);
    }
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + 4) + 0x18 + iVar1 * 0x28) = param_2;
    *(int *)(in_ECX + 0xc + *(int *)(in_ECX + 0x8c) * 4) = iVar1;
    *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  uVar3 = FUN_0049df90(local_6c,s_Illegal_index_m_NrCommands__Buff_005b8c6c,iVar1,0x20);
  local_4 = 0;
  uVar4 = FUN_0049df90(local_2c,s_Input_exception_in___s___d__005b77e4,
                       s_D__Work_InputLib_prog_CInputDevi_005b8cb4,0x38);
  local_4._0_1_ = 1;
  uVar3 = FUN_0047c9a0(local_5c,uVar4,uVar3);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a4,&DAT_005872d0);
}


/* ==== 004f0df0 FUN_004f0df0 ==== */

void FUN_004f0df0(int param_1,char param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
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
  iVar3 = *(int *)(in_ECX + 0x8c);
  if ((iVar3 < 0) || (0x1f < iVar3)) {
    ExceptionList = &local_c;
    uVar5 = FUN_0049df90(local_6c,s_Illegal_index_m_NrCommands__Buff_005b8c6c,iVar3,0x20);
    local_4 = 0;
    uVar6 = FUN_0049df90(local_2c,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputDevi_005b8cb4,0x62);
    local_4._0_1_ = 1;
    uVar5 = FUN_0047c9a0(local_5c,uVar6,uVar5);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(uVar5);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_a4,&DAT_005872d0);
  }
  ExceptionList = &local_c;
  iVar3 = FUN_004f0fe0(param_1);
  if (iVar3 == -1) {
    puVar4 = *(undefined1 **)(param_1 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    uVar5 = FUN_0049df90(local_4c,s_Trying_to_add_a_command_that_doe_005b8cdc,s_Command___s_005b8d1c
                         ,puVar4);
    local_4 = 3;
    uVar6 = FUN_0049df90(local_3c,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputDevi_005b8cb4,0x69);
    local_4._0_1_ = 4;
    uVar5 = FUN_0047c9a0(local_1c,uVar6,uVar5);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004edac0(uVar5);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_88,&DAT_005872d0);
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 8) + 4);
  fVar1 = *(float *)(iVar2 + 0x14 + iVar3 * 0x28);
  iVar2 = iVar2 + iVar3 * 0x28;
  if (*(char *)(iVar2 + 0x24) == '\0') {
    if (param_2 == '\0') {
      fVar1 = 0.0;
      goto LAB_004f0f2b;
    }
  }
  else {
    if (param_2 == '\0') {
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
    *(int *)(in_ECX + 0xc + *(int *)(in_ECX + 0x8c) * 4) = iVar3;
    *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004f0fe0 FUN_004f0fe0 ==== */

int FUN_004f0fe0(int param_1)

{
  int iVar1;
  char *_Str2;
  int __strcmpi_result;
  int in_ECX;
  char *_Str1;
  int iVar2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 4))();
  i = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      _Str2 = *(char **)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar2 + 4);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      _Str1 = *(char **)(param_1 + 4);
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

void FUN_004f1050(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int in_ECX;
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
  FUN_004edcf0();
  local_4 = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (local_34 == param_1) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(1);
        local_30 = *(undefined4 **)(param_1 + 4);
        if (local_30 == (undefined4 *)0x0) {
          local_30 = (undefined4 *)&DAT_0057629c;
        }
        local_2c = *(undefined4 *)(param_1 + 8);
        local_28 = *(undefined4 *)(param_1 + 0xc);
        *(char *)((int)local_30 + -1) = *(char *)((int)local_30 + -1) + '\x01';
        goto LAB_004f1141;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_1 + 4);
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
      FUN_004029e0(uVar1);
    }
  }
LAB_004f1141:
  FUN_004f1390(*(undefined4 *)(*(int *)(in_ECX + 8) + 8),1,local_34);
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

void FUN_004f11b0(void)

{
  int i;
  int iVar1;
  int in_ECX;
  int iVar2;
  
  i = (*(code *)**(undefined4 **)(in_ECX + 4))();
  if (0 < i) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 8) + 4) + iVar2;
      iVar2 = iVar2 + 0x28;
      i = i + -1;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x18);
    } while (i != 0);
  }
  return;
}


/* ==== 004f1240 FUN_004f1240 ==== */

void FUN_004f1240(undefined1 param_1)

{
  int i;
  int in_ECX;
  int iVar1;
  
  i = (*(code *)**(undefined4 **)(in_ECX + 4))();
  if (0 < i) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 0x28;
      i = i + -1;
      *(undefined1 *)(*(int *)(*(int *)(in_ECX + 8) + 4) + -4 + iVar1) = param_1;
    } while (i != 0);
  }
  return;
}


/* ==== 004f1270 FUN_004f1270 ==== */

void FUN_004f1270(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00578298;
  if (iVar1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (iVar3 = *(int *)(iVar1 + 4); iVar3 != iVar2; iVar3 = iVar3 + 0x28) {
    FUN_004900b0();
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  in_ECX[1] = 0;
  return;
}


/* ==== 004f1300 FUN_004f1300 ==== */

int FUN_004f1300(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x28;
}


/* ==== 004f1390 FUN_004f1390 ==== */

void FUN_004f1390(undefined4 *param_1,uint param_2,int param_3)

{
  void *pvVar1;
  int i;
  void *operator_new_result;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)((*(int *)(in_ECX + 0xc) - (int)puVar8) / 0x28)) {
    if (param_2 <= (uint)(((int)puVar8 - (int)param_1) / 0x28)) {
      if (param_2 != 0) {
        puVar2 = puVar8;
        for (puVar6 = puVar8 + param_2 * -10; puVar6 != puVar8; puVar6 = puVar6 + 10) {
          FUN_004f1750(puVar2,puVar6);
          puVar2 = puVar2 + 10;
        }
        iVar4 = *(int *)(in_ECX + 8);
        puVar8 = (undefined4 *)(*(int *)(in_ECX + 8) + param_2 * -0x28);
        while (param_1 != puVar8) {
          FUN_004093c0(puVar8 + -10,0,0xffffffff);
          *(undefined4 *)(iVar4 + -0x18) = puVar8[-6];
          *(undefined4 *)(iVar4 + -0x14) = puVar8[-5];
          *(undefined4 *)(iVar4 + -0x10) = puVar8[-4];
          *(undefined4 *)(iVar4 + -0xc) = puVar8[-3];
          *(undefined4 *)(iVar4 + -8) = puVar8[-2];
          *(undefined1 *)(iVar4 + -4) = *(undefined1 *)(puVar8 + -1);
          iVar4 = iVar4 + -0x28;
          puVar8 = puVar8 + -10;
        }
        if (param_1 != param_1 + param_2 * 10) {
          puVar8 = param_1 + 5;
          do {
            FUN_004093c0(param_3,0,0xffffffff);
            puVar8[-1] = *(undefined4 *)(param_3 + 0x10);
            *puVar8 = *(undefined4 *)(param_3 + 0x14);
            puVar8[1] = *(undefined4 *)(param_3 + 0x18);
            puVar8[2] = *(undefined4 *)(param_3 + 0x1c);
            puVar8[3] = *(undefined4 *)(param_3 + 0x20);
            *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(param_3 + 0x24);
            puVar2 = puVar8 + 5;
            puVar8 = puVar8 + 10;
          } while (puVar2 != param_1 + param_2 * 10);
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x28;
      }
      return;
    }
    puVar2 = param_1 + param_2 * 10;
    for (puVar6 = param_1; puVar6 != puVar8; puVar6 = puVar6 + 10) {
      FUN_004f1750(puVar2,puVar6);
      puVar2 = puVar2 + 10;
    }
    iVar4 = *(int *)(in_ECX + 8);
    for (i = param_2 - (iVar4 - (int)param_1) / 0x28; i != 0; i = i + -1) {
      FUN_004f1750(iVar4,param_3);
      iVar4 = iVar4 + 0x28;
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    for (; param_1 != puVar8; param_1 = param_1 + 10) {
      FUN_004f18f0(param_3);
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x28;
    return;
  }
  iVar4 = *(int *)(in_ECX + 4);
  if ((iVar4 == 0) || (uVar3 = ((int)puVar8 - iVar4) / 0x28, uVar3 <= param_2)) {
    uVar3 = param_2;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((int)puVar8 - iVar4) / 0x28;
  }
  iVar4 = iVar4 + uVar3;
  i = iVar4;
  if (iVar4 < 0) {
    i = 0;
  }
  operator_new_result = operator_new(i * 0x28);
  pvVar5 = operator_new_result;
  for (puVar8 = *(undefined4 **)(in_ECX + 4); uVar3 = param_2, pvVar1 = pvVar5, puVar8 != param_1;
      puVar8 = puVar8 + 10) {
    FUN_004f1750(pvVar5,puVar8);
    pvVar5 = (void *)((int)pvVar5 + 0x28);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_004f1750(pvVar1,param_3);
    pvVar1 = (void *)((int)pvVar1 + 0x28);
  }
  pvVar5 = (void *)((int)pvVar5 + param_2 * 0x28);
  puVar8 = *(undefined4 **)(in_ECX + 8);
  for (; param_1 != puVar8; param_1 = param_1 + 10) {
    FUN_004f1750(pvVar5,param_1);
    pvVar5 = (void *)((int)pvVar5 + 0x28);
  }
  i = *(int *)(in_ECX + 8);
  for (iVar7 = *(int *)(in_ECX + 4); iVar7 != i; iVar7 = iVar7 + 0x28) {
    FUN_004900b0();
  }
  FUN_0054b339(*(undefined4 *)(in_ECX + 4));
  i = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)((int)operator_new_result + iVar4 * 0x28);
  if (i != 0) {
    *(void **)(in_ECX + 4) = operator_new_result;
    *(void **)(in_ECX + 8) =
         (void *)((int)operator_new_result + (param_2 + (*(int *)(in_ECX + 8) - i) / 0x28) * 0x28);
    return;
  }
  *(void **)(in_ECX + 4) = operator_new_result;
  *(void **)(in_ECX + 8) = (void *)((int)operator_new_result + param_2 * 0x28);
  return;
}


