/* spel.dat — game/Ovl_Start.cpp: 19 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00495c20 FUN_00495c20 ==== */

void FUN_00495c20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00495c30 FUN_00495c30 ==== */

void FUN_00495c30(void)

{
  FUN_005584e0(&LAB_00495c40);
  return;
}


/* ==== 00495c60 FUN_00495c60 ==== */

void FUN_00495c60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00495c70 FUN_00495c70 ==== */

void FUN_00495c70(void)

{
  FUN_005584e0(&LAB_00495c80);
  return;
}


/* ==== 00495c90 FUN_00495c90 ==== */

void FUN_00495c90(undefined4 param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  char *pcVar2;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e2c8;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pcVar2 = s_OVL_START_005ada60;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(s_OVL_START_005ada60,~i - 1);
  local_4 = 0;
  FUN_004924a0(param_1,local_1c);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  *in_ECX = &PTR_FUN_005770e0;
  ExceptionList = local_c;
  return;
}


/* ==== 00495d40 FUN_00495d40 ==== */

void FUN_00495d40(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e2f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_OVL_START_DIGIT_1_005ada14;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_OVL_START_DIGIT_1_005ada14;
    pcVar5 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 0;
  uVar2 = FUN_00484f60(local_2c);
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_OVL_START_DIGIT_2_005ada28;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_OVL_START_DIGIT_2_005ada28;
    pcVar5 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 1;
  uVar2 = FUN_00484f60(local_2c);
  *(undefined4 *)(in_ECX + 0x1c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_OVL_START_DIGIT_3_005ada3c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_OVL_START_DIGIT_3_005ada3c;
    pcVar5 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 2;
  uVar2 = FUN_00484f60(local_2c);
  *(undefined4 *)(in_ECX + 0x20) = uVar2;
  local_4 = 0xffffffff;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_OVL_START_GO_005ada50;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_OVL_START_GO_005ada50;
    pcVar5 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_18[i] = '\0';
    local_14 = i;
  }
  local_4 = 3;
  uVar2 = FUN_00484f60(local_1c);
  *(undefined4 *)(in_ECX + 0x24) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_00496370();
  puVar3 = (undefined4 *)FUN_0047bc20();
  *(undefined4 *)(in_ECX + 0x28) = *puVar3;
  *(undefined4 *)(in_ECX + 0x2c) = puVar3[1];
  *(undefined4 *)(in_ECX + 0x30) = puVar3[2];
  puVar3 = (undefined4 *)FUN_0047bc20();
  *(undefined4 *)(in_ECX + 0x34) = *puVar3;
  *(undefined4 *)(in_ECX + 0x38) = puVar3[1];
  *(undefined4 *)(in_ECX + 0x3c) = puVar3[2];
  puVar3 = (undefined4 *)FUN_0047bc20();
  *(undefined4 *)(in_ECX + 0x40) = *puVar3;
  *(undefined4 *)(in_ECX + 0x44) = puVar3[1];
  *(undefined4 *)(in_ECX + 0x48) = puVar3[2];
  puVar3 = (undefined4 *)FUN_0047bc20();
  *(undefined4 *)(in_ECX + 0x4c) = *puVar3;
  *(undefined4 *)(in_ECX + 0x50) = puVar3[1];
  uVar2 = puVar3[2];
  *(undefined4 *)(in_ECX + 0x5c) = 1;
  *(undefined4 *)(in_ECX + 0x54) = uVar2;
  ExceptionList = local_c;
  return;
}


/* ==== 004960c0 FUN_004960c0 ==== */

void FUN_004960c0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x58) = 0;
  return;
}


/* ==== 004960d0 FUN_004960d0 ==== */

void FUN_004960d0(undefined4 param_1)

{
  int in_ECX;
  
  switch(param_1) {
  case 8:
  case 9:
  case 10:
    *(undefined4 *)(in_ECX + 0x58) = 0;
    return;
  case 0xb:
    FUN_004960c0();
  }
  return;
}


/* ==== 00496110 FUN_00496110 ==== */

void FUN_00496110(int *param_1,float param_2)

{
  int in_ECX;
  float10 fVar1;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  param_2 = *(float *)(in_ECX + 0x58) / param_2;
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  local_4 = 0x3f800000;
  local_c = param_2 * 8.0 + 1.0;
  local_8 = local_c;
  (**(code **)(*param_1 + 0x24))(&local_c);
  FUN_0047bde0();
  __ftol();
  (**(code **)(*param_1 + 0x28))(&stack0x00000000);
  fVar1 = (float10)FUN_004a6800();
  *(float *)(in_ECX + 0x58) = (float)(fVar1 + (float10)*(float *)(in_ECX + 0x58));
  return;
}


/* ==== 004961f0 FUN_004961f0 ==== */

void FUN_004961f0(undefined4 param_1)

{
  int in_ECX;
  
  switch(param_1) {
  case 8:
    FUN_004962e0(0,0,1,0);
    FUN_00496110(*(undefined4 *)(in_ECX + 0x20),0x3f666666);
    return;
  case 9:
    FUN_004962e0(0,1,0,0);
    FUN_00496110(*(undefined4 *)(in_ECX + 0x1c),0x3f666666);
    return;
  case 10:
    FUN_004962e0(1,0,0,0);
    FUN_00496110(*(undefined4 *)(in_ECX + 0x18),0x3f666666);
    return;
  case 0xb:
    FUN_004962e0(0,0,0,1);
    FUN_00496110(*(undefined4 *)(in_ECX + 0x24),0x3f800000);
    return;
  default:
    FUN_004962e0(0,0,0,0);
    return;
  }
}


/* ==== 004962c0 FUN_004962c0 ==== */

void FUN_004962c0(int param_1)

{
  int in_ECX;
  
  if (param_1 != *(int *)(in_ECX + 0x5c)) {
    FUN_004960d0(param_1);
    return;
  }
  FUN_004961f0(param_1);
  return;
}


/* ==== 004962e0 FUN_004962e0 ==== */

void FUN_004962e0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))(param_1);
  return;
}


/* ==== 00496370 FUN_00496370 ==== */

void FUN_00496370(void)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_4c [4];
  char *local_48;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e33c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Start_005ada6c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Start_005ada6c,~i - 1);
  local_4 = 0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Overlay_Digit_1_not_found_in_ove_005ada94;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Overlay_Digit_1_not_found_in_ove_005ada94,~i - 1);
  local_4._0_1_ = 1;
  FUN_00487bc0(s_OVL_START_DIGIT_1_005ada14,local_3c,local_4c,0xf6);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adabc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Start_005adabc,~i - 1);
  local_4 = 2;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Overlay_Digit_2_not_found_in_ove_005adae4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Overlay_Digit_2_not_found_in_ove_005adae4,~i - 1);
  local_4._0_1_ = 3;
  FUN_00487bc0(s_OVL_START_DIGIT_2_005ada28,local_3c,local_4c,0xf7);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adb0c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adb0c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_38 = local_38 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_38 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Overlay_Digit_3_not_found_in_ove_005adb34;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_Overlay_Digit_3_not_found_in_ove_005adb34;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_48 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_48 = local_48 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_48 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_48 = local_48 + 1;
    }
    FUN_004029e0(i);
  }
  local_4._0_1_ = 5;
  FUN_00487bc0(s_OVL_START_DIGIT_3_005ada3c,local_4c,local_3c,0xf8);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adb5c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adb5c;
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
    FUN_004029e0(i);
  }
  local_4 = 6;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Overlay_GO_object_not_found_in_o_005adb84;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_Overlay_GO_object_not_found_in_o_005adb84;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_28 = local_28 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_28 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(i);
  }
  local_4._0_1_ = 7;
  FUN_00487bc0(s_OVL_START_GO_005ada50,local_2c,local_1c,0xf9);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(1);
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


/* ==== 00496750 FUN_00496750 ==== */

void FUN_00496750(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00496760 FUN_00496760 ==== */

void FUN_00496760(void)

{
  FUN_005584e0(&LAB_00496770);
  return;
}


/* ==== 00496790 FUN_00496790 ==== */

void FUN_00496790(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004967a0 FUN_004967a0 ==== */

void FUN_004967a0(void)

{
  FUN_005584e0(&LAB_004967b0);
  return;
}


/* ==== 004967c0 FUN_004967c0 ==== */

void FUN_004967c0(undefined4 param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e358;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar2 = s_OVL_STATISTICS_005adbfc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_OVL_STATISTICS_005adbfc;
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
  FUN_004924a0(param_1,local_1c);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  *in_ECX = &PTR_FUN_0057710c;
  ExceptionList = local_c;
  return;
}


/* ==== 004968a0 FUN_004968a0 ==== */

void FUN_004968a0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e382;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_CUR_LAP_005adbac;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_CUR_LAP_005adbac;
    pcVar4 = local_28;
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
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 0;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_RACE_TIME_VALUE_005adbe4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_RACE_TIME_VALUE_005adbe4;
    pcVar4 = local_28;
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
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 1;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x20) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_CUR_POS_005adbbc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_CUR_POS_005adbbc;
    pcVar4 = local_28;
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
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 2;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x24) = uVar2;
  local_4 = 0xffffffff;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_COUNTDOWN_TIMER_005adbcc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_COUNTDOWN_TIMER_005adbcc;
    pcVar4 = local_18;
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
    local_18[i] = '\0';
    local_14 = i;
  }
  local_4 = 3;
  uVar2 = FUN_00485d50(local_1c);
  *(undefined4 *)(in_ECX + 0x1c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_00496ea0();
  FUN_00496b10();
  ExceptionList = local_c;
  return;
}


