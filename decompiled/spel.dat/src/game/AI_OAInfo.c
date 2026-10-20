/* spel.dat — game/AI_OAInfo.cpp: 21 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00416610 FUN_00416610 ==== */

void FUN_00416610(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00416620 FUN_00416620 ==== */

void FUN_00416620(void)

{
  FUN_005584e0(&LAB_00416630);
  return;
}


/* ==== 00416650 FUN_00416650 ==== */

void FUN_00416650(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00416660 FUN_00416660 ==== */

void FUN_00416660(void)

{
  FUN_005584e0(&LAB_00416670);
  return;
}


/* ==== 004166b0 FUN_004166b0 ==== */

void FUN_004166b0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  return;
}


/* ==== 004166d0 FUN_004166d0 ==== */

void FUN_004166d0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0xffffffff;
  return;
}


/* ==== 004166e0 FUN_004166e0 ==== */

void FUN_004166e0(void)

{
  undefined1 *operator_new_result;
  int in_ECX;
  int i;
  undefined1 local_1;
  
  i = 3;
  do {
    FUN_004166d0();
    i = i + -1;
  } while (i != 0);
  *(undefined ***)(in_ECX + 0x18) = &PTR_LAB_00576460;
  operator_new_result = operator_new(0x10);
  if (operator_new_result != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)in_ECX >> 0x18);
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
    *(undefined1 **)(in_ECX + 0x1c) = operator_new_result;
    *(undefined4 *)(in_ECX + 0x20) = 0;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}


/* ==== 00416750 FUN_00416750 ==== */

int FUN_00416750(int param_1)

{
  int in_ECX;
  
  if (param_1 == 3) {
    FUN_004c4150(s__s___d__Illegal_eye_value_for_OA_00592ec0,
                 s_C__Work_A2IV_Game_prog_AI_OAInfo_00592e98,0x32);
  }
  return in_ECX + param_1 * 8;
}


/* ==== 00416780 FUN_00416780 ==== */

int FUN_00416780(int param_1)

{
  int in_ECX;
  
  if (param_1 != 3) {
    FUN_004c4150(s__s___d__Illegal_eye_value_for_OA_00592f0c,
                 s_C__Work_A2IV_Game_prog_AI_OAInfo_00592ee4,0x3c);
  }
  return in_ECX + param_1 * 8;
}


/* ==== 004167f0 FUN_004167f0 ==== */

void FUN_004167f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00416800 FUN_00416800 ==== */

void FUN_00416800(void)

{
  FUN_005584e0(&LAB_00416810);
  return;
}


/* ==== 00416830 FUN_00416830 ==== */

void FUN_00416830(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00416840 FUN_00416840 ==== */

void FUN_00416840(void)

{
  FUN_005584e0(&LAB_00416850);
  return;
}


/* ==== 00416880 FUN_00416880 ==== */

int FUN_00416880(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x20;
}


/* ==== 00416900 FUN_00416900 ==== */

void FUN_00416900(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00416910 FUN_00416910 ==== */

void FUN_00416910(void)

{
  FUN_005584e0(&LAB_00416920);
  return;
}


/* ==== 00416940 FUN_00416940 ==== */

void FUN_00416940(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00416950 FUN_00416950 ==== */

void FUN_00416950(void)

{
  FUN_005584e0(&LAB_00416960);
  return;
}


/* ==== 00416970 FUN_00416970 ==== */

undefined1 * FUN_00416970(void)

{
  char cVar1;
  int iVar2;
  undefined1 *operator_new_result;
  undefined1 *in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00569b21;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  in_ECX[4] = local_11;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0;
  *(undefined ***)(in_ECX + 0x18) = &PTR_LAB_00576408;
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
  *(undefined1 **)(in_ECX + 0x1c) = operator_new_result;
  local_4._0_1_ = 1;
  *(undefined ***)(in_ECX + 0x20) = &PTR_LAB_005763f8;
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
  *(undefined1 **)(in_ECX + 0x24) = operator_new_result;
  i = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar4 = &DAT_005d2ac0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 8);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      goto LAB_00416aa1;
    }
    if ((0x1f < *(uint *)(in_ECX + 0x10)) || (*(uint *)(in_ECX + 0x10) < i)) {
      FUN_004028f0(1);
      goto LAB_00416a71;
    }
  }
  else {
    if (i == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(0);
      goto LAB_00416aa1;
    }
LAB_00416a71:
    FUN_00402b20(i);
  }
  puVar3 = (undefined4 *)&DAT_005d2ac0;
  puVar5 = *(undefined4 **)(in_ECX + 8);
  for (j = i >> 2; j != 0; j = j - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)(in_ECX + 0xc) = i;
  *(undefined1 *)(*(int *)(in_ECX + 8) + i) = 0;
LAB_00416aa1:
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *in_ECX = 0;
  ExceptionList = pvStack_c;
  return in_ECX;
}


/* ==== 00416ad0 FUN_00416ad0 ==== */

void FUN_00416ad0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_00569b41;
  iVar2 = *(int *)(in_ECX + 0x24);
  local_4 = 1;
  ExceptionList = &local_c;
  *(undefined ***)(in_ECX + 0x20) = &PTR_LAB_005763f8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    for (iVar4 = *(int *)(iVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0xc) {
      FUN_0041e410();
    }
    FUN_0054b339(*(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  iVar2 = *(int *)(in_ECX + 0x1c);
  local_4 = local_4 & 0xffffff00;
  *(undefined ***)(in_ECX + 0x18) = &PTR_LAB_00576408;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    for (iVar4 = *(int *)(iVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0x18) {
      FUN_0041e3a0();
    }
    FUN_0054b339(*(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  iVar2 = *(int *)(in_ECX + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00417210 FUN_00417210 ==== */

void FUN_00417210(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_005763f8;
  if (iVar1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (iVar3 = *(int *)(iVar1 + 4); iVar3 != iVar2; iVar3 = iVar3 + 0xc) {
    FUN_0041e410();
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  in_ECX[1] = 0;
  return;
}


