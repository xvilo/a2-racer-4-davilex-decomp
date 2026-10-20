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
  void *operator_new_result;
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
    FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Commu_005abaa0,~i - 1);
    local_4 = 0;
    uVar2 = FUN_0049df90(local_2c,s_Overlay_not_initialized_005abacc);
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar2 = FUN_004882e0(uVar2,local_3c,0x6f);
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
    operator_new_result = operator_new(0x3d0);
    local_4 = 2;
    if (operator_new_result == (void *)0x0) {
      DAT_0071278c = 0;
    }
    else {
      uVar2 = FUN_004882e0();
      DAT_0071278c = FUN_004895e0(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abae4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
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
    FUN_0048ae80();
  }
  ExceptionList = local_c;
  return DAT_0071278c;
}


/* ==== 004893f0 FUN_004893f0 ==== */

void FUN_004893f0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056d6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00576f78;
  iVar1 = in_ECX[0xf3];
  local_4 = 9;
  in_ECX[0xf2] = &PTR_LAB_00576f68;
  if (iVar1 != 0) {
    FUN_00490c40(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[0xf3] = 0;
  iVar1 = in_ECX[0xaf];
  local_4._0_1_ = 8;
  in_ECX[0xae] = &PTR_LAB_00576f58;
  if (iVar1 != 0) {
    FUN_004909f0(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[0xaf] = 0;
  iVar1 = in_ECX[0xad];
  local_4._0_1_ = 7;
  in_ECX[0xac] = &PTR_LAB_00576f48;
  if (iVar1 != 0) {
    FUN_0042f530(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[0xad] = 0;
  iVar1 = in_ECX[0xab];
  local_4._0_1_ = 6;
  in_ECX[0xaa] = &PTR_LAB_00576f38;
  if (iVar1 != 0) {
    FUN_004da4d0();
    FUN_0054b339(iVar1);
  }
  in_ECX[0xab] = 0;
  iVar1 = in_ECX[0xa9];
  local_4._0_1_ = 5;
  in_ECX[0xa8] = &PTR_LAB_00576f38;
  if (iVar1 != 0) {
    FUN_0042f530(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[0xa9] = 0;
  local_4._0_1_ = 4;
  FUN_0049bc50();
  local_4._0_1_ = 3;
  FUN_0049c920();
  local_4._0_1_ = 2;
  FUN_0049c920();
  local_4._0_1_ = 1;
  FUN_0049c920();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0049c920();
  local_4 = 0xffffffff;
  FUN_004925f0();
  ExceptionList = local_c;
  return;
}


/* ==== 004895e0 FUN_004895e0 ==== */

void FUN_004895e0(undefined4 param_1)

{
  char cVar1;
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
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
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_OVL_COMMUNICATOR_005ab7fc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
  FUN_004924a0(param_1,local_1c);
  local_4._0_1_ = 2;
  FUN_004028f0(1);
  FUN_0049c910();
  local_4._0_1_ = 3;
  FUN_0049c910();
  local_4._0_1_ = 4;
  FUN_0049c910();
  local_4._0_1_ = 5;
  FUN_0049c910();
  local_4._0_1_ = 6;
  FUN_0049bae0();
  local_4._0_1_ = 7;
  in_ECX[0xa8] = &PTR_LAB_00576f38;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0xa9] = operator_new_result;
  local_4._0_1_ = 8;
  in_ECX[0xaa] = &PTR_LAB_00576f38;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0xab] = operator_new_result;
  local_4._0_1_ = 9;
  in_ECX[0xac] = &PTR_LAB_00576f48;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0xad] = operator_new_result;
  local_4._0_1_ = 10;
  in_ECX[0xae] = &PTR_LAB_00576f58;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0xaf] = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  in_ECX[0xf2] = &PTR_LAB_00576f68;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0xf3] = operator_new_result;
  *in_ECX = &PTR_FUN_00576f78;
  ExceptionList = local_c;
  return;
}


/* ==== 00489800 FUN_00489800 ==== */

void FUN_00489800(int param_1)

{
  if (param_1 != -1) {
    FUN_0041be70(10,0,param_1);
  }
  return;
}


/* ==== 00489820 FUN_00489820 ==== */

undefined1 * FUN_00489820(undefined1 *param_1,undefined4 param_2,int param_3,uint param_4)

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
  local_1c[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004028f0(0);
  i = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_4 != 0) {
    do {
      if (param_3 == 0) {
        pcVar3 = "";
      }
      else {
        if ((*(char *)(param_3 + -1) != '\0') && (*(char *)(param_3 + -1) != -1)) {
          FUN_00402a00(param_4,0);
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
      cVar2 = FUN_00402a00(iVar1,0);
      if (cVar2 != '\0') {
        *(char *)(local_14 + iStack_18) = cVar4;
        *(undefined1 *)(iStack_18 + iVar1) = 0;
        local_14 = iVar1;
      }
      i = i + 1;
    } while (i < param_4);
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(local_1c,0,0xffffffff);
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
  return param_1;
}


/* ==== 004899a0 FUN_004899a0 ==== */

void FUN_004899a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar1 = FUN_0049df30();
  if (iVar1 != 0) {
    switch(iVar1) {
    case 1:
      iVar1 = *(int *)(in_ECX + 0x374) + 10;
      *(int *)(in_ECX + 0x374) = iVar1;
      if (100 < iVar1) {
        *(undefined4 *)(in_ECX + 0x374) = 100;
      }
      uVar2 = FUN_0049df20();
      *(undefined4 *)(in_ECX + 0x37c) = uVar2;
      return;
    case 2:
      uVar2 = FUN_0049df20();
      *(undefined4 *)(in_ECX + 0x27c) = uVar2;
      FUN_00489b70(*(undefined4 *)(in_ECX + 0x264));
      return;
    case 3:
      uVar2 = FUN_0049df20();
      *(undefined4 *)(in_ECX + 0x27c) = uVar2;
      FUN_00489b70(*(undefined4 *)(in_ECX + 0x268));
      return;
    case 4:
      uVar2 = FUN_0049df20();
      *(undefined4 *)(in_ECX + 0x27c) = uVar2;
      FUN_00489b70(*(undefined4 *)(in_ECX + 0x26c));
      return;
    case 5:
      uVar2 = FUN_0049df20();
      *(undefined4 *)(in_ECX + 0x27c) = uVar2;
      FUN_00489b70(*(undefined4 *)(in_ECX + 0x270));
      return;
    case 6:
      uVar2 = FUN_0049df20();
      uVar3 = 0;
      FUN_0049eb50(uVar2);
      FUN_0049e550(uVar3);
    }
  }
  return;
}


/* ==== 00489ac0 FUN_00489ac0 ==== */

void FUN_00489ac0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x37c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x398) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x3b4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x278) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x27c) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x370) = 1;
  *(undefined4 *)(in_ECX + 0x374) = 0;
  *(undefined4 *)(in_ECX + 0x378) = 0;
  *(undefined1 *)(in_ECX + 0x38c) = 1;
  *(undefined4 *)(in_ECX + 0x390) = 0;
  *(undefined4 *)(in_ECX + 0x394) = 0;
  *(undefined1 *)(in_ECX + 0x3a8) = 1;
  *(undefined4 *)(in_ECX + 0x3ac) = 0;
  *(undefined4 *)(in_ECX + 0x3b0) = 0;
  *(undefined4 *)(in_ECX + 0x274) = 0;
  FUN_00489df0(in_ECX + 0x364,0);
  FUN_00489df0(in_ECX + 0x380,0);
  FUN_00489df0(in_ECX + 0x39c,0);
  *(undefined1 *)(in_ECX + 0x238) = 1;
  FUN_0048f090(0);
  return;
}


/* ==== 00489b70 FUN_00489b70 ==== */

void FUN_00489b70(int *param_1)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x274) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x20))(0);
  }
  *(undefined4 *)(in_ECX + 0x278) = 0xffffffff;
  *(int **)(in_ECX + 0x274) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x20))(1);
    FUN_00489800(*(undefined4 *)(in_ECX + 0x27c));
    *(int *)(in_ECX + 0x278) = *(int *)(in_ECX + 0x260) + 6000;
  }
  return;
}


/* ==== 00489bd0 FUN_00489bd0 ==== */

void FUN_00489bd0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x278) != -1) && (*(int *)(in_ECX + 0x278) <= *(int *)(in_ECX + 0x260))) {
    (**(code **)(**(int **)(in_ECX + 0x274) + 0x20))(0);
    *(undefined4 *)(in_ECX + 0x274) = 0;
    *(undefined4 *)(in_ECX + 0x278) = 0xffffffff;
  }
  return;
}


/* ==== 00489c10 FUN_00489c10 ==== */

void FUN_00489c10(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_00489d30(in_ECX + 0x364);
  FUN_00489df0(in_ECX + 0x380,0.8 <= *(float *)(in_ECX + 0x248));
  FUN_00489df0(in_ECX + 0x39c,*(float *)(in_ECX + 0x24c) <= 0.2);
  iVar1 = FUN_00429360(DAT_006fba58);
  if (iVar1 == 0) {
    FUN_00489b70(0);
    return;
  }
  FUN_00489bd0();
  return;
}


/* ==== 00489d30 FUN_00489d30 ==== */

void FUN_00489d30(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) || (*(char *)(param_1 + 0xc) != '\0')) {
    if (*(int *)(param_1 + 0x10) < 1) {
      FUN_00489df0(param_1,0);
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (*(int *)(param_1 + 0x18) != -1) {
        FUN_0049eb50(*(int *)(param_1 + 0x18));
        FUN_0049e570();
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x18) != -1) {
        FUN_0049eb50(*(int *)(param_1 + 0x18));
        iVar1 = FUN_0049e630();
        if (iVar1 == 0) {
          uVar2 = 1;
          FUN_0049eb50(*(undefined4 *)(param_1 + 0x18));
          FUN_0049e550(uVar2);
        }
      }
      if (*(int *)(param_1 + 0x14) <= *(int *)(in_ECX + 0x260)) {
        iVar1 = *(int *)(in_ECX + 0x260) + 500;
        *(int *)(param_1 + 0x14) = iVar1;
        FUN_00489df0(param_1,CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(param_1 + 0xc) == '\0'));
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -7;
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

void FUN_00489e80(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00489e70(param_2);
  if ((cVar1 != '\0') && (iVar2 = FUN_0049ca80(), iVar2 == 1)) {
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

void FUN_00489ec0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int i;
  int local_4;
  
  if (*(int *)(in_ECX + 0x360) < 10) {
    i = 0;
    local_4 = param_3;
    if (0 < *(int *)(in_ECX + 0x360)) {
      piVar3 = (int *)(in_ECX + 0x2d0);
      do {
        if ((param_1 == *piVar3) && (param_3 == piVar3[2])) {
          *(int *)(in_ECX + 0x2d4 + i * 0xc) = param_2;
          return;
        }
        iVar2 = FUN_0049d720(*piVar3);
        if (iVar2 < 1) {
          piVar3 = (int *)(in_ECX + (i * 3 + 0xb4) * 4);
          iVar2 = *piVar3;
          iVar4 = piVar3[1];
          local_4 = piVar3[2];
          *piVar3 = param_1;
          piVar3[1] = param_2;
          piVar3[2] = param_3;
          i = i + 1;
          param_1 = iVar2;
          param_2 = iVar4;
          if (i < *(int *)(in_ECX + 0x360)) {
            piVar3 = (int *)(in_ECX + (i * 3 + 0xb4) * 4);
            do {
              i = i + 1;
              param_1 = *piVar3;
              param_2 = piVar3[1];
              iVar1 = piVar3[2];
              *piVar3 = iVar2;
              piVar3[1] = iVar4;
              piVar3[2] = local_4;
              piVar3 = piVar3 + 3;
              iVar2 = param_1;
              iVar4 = param_2;
              local_4 = iVar1;
            } while (i < *(int *)(in_ECX + 0x360));
          }
          break;
        }
        i = i + 1;
        piVar3 = piVar3 + 3;
      } while (i < *(int *)(in_ECX + 0x360));
    }
    iVar2 = *(int *)(in_ECX + 0x360) + 0x3c;
    i = in_ECX + iVar2 * 0xc;
    *(int *)(in_ECX + iVar2 * 0xc) = param_1;
    *(int *)(i + 4) = param_2;
    *(int *)(i + 8) = local_4;
    *(int *)(in_ECX + 0x360) = *(int *)(in_ECX + 0x360) + 1;
  }
  return;
}


/* ==== 0048a010 FUN_0048a010 ==== */

undefined4 FUN_0048a010(void)

{
  int iVar1;
  int i;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x360) != 0) {
    *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
    if ((*(char *)(in_ECX + 0x1a) != '\0') && (*(int *)(in_ECX + 0x34) == 3)) {
      FUN_0048f0d0(local_c,local_18);
      local_1c = 0x3f99999a;
      FUN_0049cb60(local_c,local_18,&local_1c);
      *(undefined4 *)(in_ECX + 0x34) = 0x1000003;
    }
    uVar3 = *(undefined4 *)(in_ECX + 0x2d0);
    *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(in_ECX + 0x2d8);
    puVar2 = (undefined4 *)(in_ECX + 0x2d0);
    i = 1;
    if (1 < *(int *)(in_ECX + 0x360)) {
      do {
        i = i + 1;
        *puVar2 = puVar2[3];
        puVar2[1] = puVar2[4];
        puVar2[2] = puVar2[5];
        puVar2 = puVar2 + 3;
      } while (i < *(int *)(in_ECX + 0x360));
    }
    *(int *)(in_ECX + 0x360) = *(int *)(in_ECX + 0x360) + -1;
    return uVar3;
  }
  if (*(char *)(in_ECX + 0x1a) == '\0') {
    i = (*(code *)**(undefined4 **)(in_ECX + 0x2a0))();
    if (0 < i) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x2a4) + 4);
      i = FUN_00489e50(i);
      uVar3 = *(undefined4 *)(iVar1 + i * 4);
    }
    *(undefined4 *)(in_ECX + 0x21c) = 0xffffffff;
    return uVar3;
  }
  if (*(int *)(in_ECX + 0x34) == 2) {
    if (*(int *)(in_ECX + 0x20) == -1) {
      *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x260) + *(int *)(in_ECX + 0x1c);
      return 0;
    }
    if (*(int *)(in_ECX + 0x20) <= *(int *)(in_ECX + 0x260)) {
      *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
      FUN_0048f0d0(local_18,local_c);
      local_1c = 0x40400000;
      FUN_0049cb60(local_c,local_18,&local_1c);
      *(undefined4 *)(in_ECX + 0x34) = 0x1000002;
    }
  }
  return 0;
}


/* ==== 0048a190 FUN_0048a190 ==== */

void FUN_0048a190(void)

{
  undefined4 *puVar1;
  int i;
  int in_ECX;
  int j;
  undefined4 *puVar2;
  int iVar3;
  int local_4;
  
  i = -1;
  iVar3 = 0;
  j = 0;
  local_4 = 0;
  if (0 < *(int *)(in_ECX + 0x360)) {
    puVar2 = (undefined4 *)(in_ECX + 0x2d0);
    do {
      if (*(int *)(in_ECX + 0x260) < (int)puVar2[1]) {
        if (i != -1) {
          iVar3 = i * 3;
          i = i + 1;
          puVar1 = (undefined4 *)(in_ECX + (iVar3 + 0xb4) * 4);
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
    } while (j < *(int *)(in_ECX + 0x360));
    *(int *)(in_ECX + 0x360) = *(int *)(in_ECX + 0x360) - iVar3;
    return;
  }
  *(undefined4 *)(in_ECX + 0x360) = *(undefined4 *)(in_ECX + 0x360);
  return;
}


/* ==== 0048a230 FUN_0048a230 ==== */

void FUN_0048a230(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  uint i;
  uint j;
  uint uVar5;
  int iVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 unaff_EDI;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
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
  FUN_00426f60(DAT_006fba58);
  local_3c = (float)FUN_00425300();
  local_34 = 0x3f800000;
  local_30 = (undefined4 *)0x3f800000;
  local_38 = (float)(int)local_3c * 0.0009090909;
  *(float *)(in_ECX + 0x248) = local_38;
  *(float *)(in_ECX + 0x24c) = (float)DAT_006fba74 * 0.01;
  (**(code **)(**(int **)(in_ECX + 0x244) + 0x24))(&local_38);
  uVar2 = FUN_0049ca10(&local_30);
  FUN_0047bc90(uVar2);
  uVar2 = FUN_0049ca10(&local_30);
  FUN_0047bc90(uVar2);
  if ((0 < *(int *)(in_ECX + 0x360)) && (*(int *)(in_ECX + 0x2c4) != 0)) {
    iVar3 = FUN_0049dd60();
    if (iVar3 == 100) {
      iVar3 = FUN_0049dd60();
      if (iVar3 < 100) {
        *(int *)(in_ECX + 0x2c8) = *(int *)(in_ECX + 0x260) + -1;
      }
    }
  }
  uVar15 = (undefined1)((uint)unaff_EBX >> 0x18);
  if ((*(int *)(in_ECX + 0x2c4) == 0) || (*(int *)(in_ECX + 0x2c8) <= *(int *)(in_ECX + 0x260))) {
    iVar3 = FUN_0048a010();
    if (iVar3 == 0) {
      *(undefined4 *)(in_ECX + 0x21c) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x2c4) = 0;
      local_30 = (undefined4 *)CONCAT31(local_30._1_3_,uVar15);
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = (char *)&DAT_00712790;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(i,1);
      if (cVar1 != '\0') {
        puVar4 = &DAT_00712790;
        puVar7 = puStack_2c;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(undefined1 *)((int)puStack_2c + i) = 0;
        uStack_28 = i;
      }
      puStack_8 = (undefined1 *)0x4;
      (**(code **)(**(int **)(in_ECX + 0x220) + 0x48))(&local_30);
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
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = (char *)&DAT_00712794;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      puVar4 = (undefined4 *)(~i - 1);
      cVar1 = FUN_00402a00(puVar4,1);
      if (cVar1 != '\0') {
        puVar7 = &DAT_00712794;
        puVar10 = local_30;
        for (i = (uint)puVar4 >> 2; i != 0; i = i - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (i = (uint)puVar4 & 3; i != 0; i = i - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)local_30 + (int)puVar4) = 0;
        puStack_2c = puVar4;
      }
      pvStack_c = (void *)0x5;
      (**(code **)(**(int **)(in_ECX + 0x224) + 0x48))(&local_34);
      pvStack_10 = (void *)0xffffffff;
      FUN_004028f0(1);
      local_38 = (float)CONCAT31(local_38._1_3_,(char)((uint)unaff_ESI >> 0x18));
      i = 0xffffffff;
      local_34 = 0;
      pcVar8 = &DAT_00712798;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      local_30 = (undefined4 *)0x0;
      puStack_2c = (undefined4 *)0x0;
      FUN_00402940(&DAT_00712798,~i - 1);
      pvStack_10 = (void *)0x6;
      (**(code **)(**(int **)(in_ECX + 0x228) + 0x48))(&local_38);
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
      pcVar8 = &DAT_0071279c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      local_34 = 0;
      local_30 = (undefined4 *)0x0;
      FUN_00402940(&DAT_0071279c,~i - 1);
      pvStack_14 = (void *)0x7;
      (**(code **)(**(int **)(in_ECX + 0x22c) + 0x48))(&local_3c);
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
      FUN_0048f090(0);
      if (*(int **)(in_ECX + 0x250) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x250) + 0x20))(0);
        *(undefined4 *)(in_ECX + 0x250) = 0;
      }
    }
    else {
      if (*(int **)(in_ECX + 0x250) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x250) + 0x20))(0);
      }
      FUN_0049dd50();
      uVar2 = FUN_0049d230();
      *(undefined4 *)(in_ECX + 0x250) = uVar2;
      *(undefined1 *)(in_ECX + 0x218) = 1;
      uVar2 = FUN_0049dda0(&local_30,0);
      puStack_8 = (undefined1 *)0x0;
      (**(code **)(**(int **)(in_ECX + 0x220) + 0x48))(uVar2);
      pvStack_c = (void *)0xffffffff;
      FUN_004028f0(1);
      uVar2 = FUN_0049dda0(&local_34,1);
      pvStack_c = (void *)0x1;
      (**(code **)(**(int **)(in_ECX + 0x224) + 0x48))(uVar2);
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
      uVar2 = FUN_0049dda0(&local_38,2);
      pvStack_10 = (void *)0x2;
      (**(code **)(**(int **)(in_ECX + 0x228) + 0x48))(uVar2);
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
      uVar2 = FUN_0049dda0(&local_3c,3);
      pvStack_14 = (void *)0x3;
      (**(code **)(**(int **)(in_ECX + 0x22c) + 0x48))(uVar2);
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
      *(int *)(in_ECX + 0x2c4) = iVar3;
      iVar3 = FUN_0049dd80();
      *(int *)(in_ECX + 0x2c8) = iVar3 + *(int *)(in_ECX + 0x260);
      uVar2 = FUN_0049df20();
      *(undefined4 *)(in_ECX + 0x25c) = uVar2;
    }
  }
  if ((*(char *)(in_ECX + 0x218) != '\0') && (*(int *)(in_ECX + 0x34) == 2)) {
    (**(code **)(**(int **)(in_ECX + 0x250) + 0x20))(1);
    iVar3 = FUN_0049df30();
    if (iVar3 == 0) {
      auStack_20[0] = uVar15;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s_system_newmessage_005abb34;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(i,1);
      if (cVar1 != '\0') {
        pcVar8 = s_system_newmessage_005abb34;
        pcVar11 = pcStack_1c;
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *pcVar11 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar11 = pcVar11 + 1;
        }
        pcStack_1c[i] = '\0';
        uStack_18 = i;
      }
      puStack_8 = (undefined1 *)0x8;
      FUN_0048a910(auStack_20,0xffffffff);
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_004028f0(1);
    }
    FUN_00489800(*(undefined4 *)(in_ECX + 0x25c));
    *(undefined1 *)(in_ECX + 0x218) = 0;
  }
  if (*(int *)(in_ECX + 0x21c) != -1) {
    FUN_0049dd50();
    iVar3 = FUN_0049d220();
    i = 0xffffffff;
    pcVar8 = s_HONNEY_005abb48;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    j = *(uint *)(iVar3 + 8);
    uVar5 = ~i - 1;
    i = j;
    if (uVar5 <= j) {
      i = uVar5;
    }
    bVar13 = false;
    iVar6 = 0;
    bVar14 = true;
    pbVar9 = *(byte **)(iVar3 + 4);
    pbVar12 = (byte *)s_HONNEY_005abb48;
    do {
      if (i == 0) break;
      i = i - 1;
      bVar13 = *pbVar9 < *pbVar12;
      bVar14 = *pbVar9 == *pbVar12;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    } while (bVar14);
    if (!bVar14) {
      iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
    }
    if (((iVar6 != 0) || (j < uVar5)) || (j != uVar5)) {
      FUN_0049dd50();
      iVar3 = FUN_0049d220();
      i = 0xffffffff;
      pcVar8 = s_SHADOW_005abb50;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      j = *(uint *)(iVar3 + 8);
      uVar5 = ~i - 1;
      i = j;
      if (uVar5 <= j) {
        i = uVar5;
      }
      bVar13 = false;
      iVar6 = 0;
      bVar14 = true;
      pbVar9 = *(byte **)(iVar3 + 4);
      pbVar12 = (byte *)s_SHADOW_005abb50;
      do {
        if (i == 0) break;
        i = i - 1;
        bVar13 = *pbVar9 < *pbVar12;
        bVar14 = *pbVar9 == *pbVar12;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar14);
      if (!bVar14) {
        iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      }
      if (((iVar6 != 0) || (j < uVar5)) || (j != uVar5)) {
        if (*(int *)(in_ECX + 0x34) == 2) {
          FUN_0048f090(1);
        }
        FUN_00426f60(*(undefined4 *)(in_ECX + 0x21c));
        iVar3 = FUN_00425300();
        local_38 = 1.0;
        local_34 = 0x3f800000;
        local_3c = (float)iVar3 * 0.0009090909;
        (**(code **)(**(int **)(in_ECX + 0x23c) + 0x24))(&local_3c);
        ExceptionList = pvStack_14;
        return;
      }
    }
  }
  FUN_0048f090(0);
  ExceptionList = pvStack_10;
  return;
}


/* ==== 0048a910 FUN_0048a910 ==== */

void FUN_0048a910(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  uint i;
  int j;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d7db;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) != 0) {
    ExceptionList = &local_c;
    FUN_004028f0(0);
    pcVar3 = *(char **)(param_1 + 4);
    local_4 = 0;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    uVar7 = (uint)(*pcVar3 == '~');
    i = uVar7;
    if (uVar7 < *(uint *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + 4) == 0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)(*(int *)(param_1 + 4) + i);
        }
        cVar2 = *pcVar3;
        if (('`' < cVar2) && (cVar2 < '{')) {
          cVar2 = cVar2 + -0x20;
        }
        FUN_0047eab0(1,cVar2);
        i = i + 1;
      } while (i < *(uint *)(param_1 + 8));
    }
    if (uVar7 == 0) {
      j = 0;
      iVar4 = (*(code *)**(undefined4 **)(in_ECX + 0x2a8))();
      if (0 < iVar4) {
        do {
          iVar4 = FUN_0049dd90();
          puVar5 = puStack_18;
          if (puStack_18 == (undefined1 *)0x0) {
            puVar5 = &DAT_0057629c;
          }
          iVar4 = FUN_0040fc80(0,*(undefined4 *)(iVar4 + 8),puVar5,uStack_14);
          if (iVar4 == 0) {
            FUN_0049dd50();
            iVar4 = FUN_0049d200();
            if (iVar4 != -1) {
              iVar4 = *(int *)(in_ECX + 0x260);
              uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x2ac) + 4) + j * 4);
              iVar6 = FUN_0049dd70();
              FUN_00489ec0(uVar1,iVar4 + iVar6,param_2);
            }
            FUN_004899a0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x2ac) + 4) + j * 4));
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
          iVar4 = (*(code *)**(undefined4 **)(in_ECX + 0x2a8))();
        } while (j < iVar4);
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
      iVar4 = (*(code *)**(undefined4 **)(in_ECX + 0x2b8))();
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          puVar5 = puStack_18;
          if (puStack_18 == (undefined1 *)0x0) {
            puVar5 = &DAT_0057629c;
          }
          iVar6 = FUN_0040fc80(0,*(undefined4 *)(iVar4 + *(int *)(*(int *)(in_ECX + 700) + 4) + 8),
                               puVar5,uStack_14);
          if (iVar6 == 0) {
            iVar4 = *(int *)(j * 0x114 + 0x10 + *(int *)(*(int *)(in_ECX + 700) + 4));
            if (0 < iVar4) {
              iVar4 = FUN_00489e50(iVar4);
              uVar1 = *(undefined4 *)
                       (*(int *)(*(int *)(in_ECX + 0x2ac) + 4) +
                       *(int *)(*(int *)(*(int *)(in_ECX + 700) + 4) + 0x14 + (iVar4 + j * 0x45) * 4
                               ) * 4);
              iVar4 = FUN_0049dd70();
              FUN_00489ec0(uVar1,iVar4 + *(int *)(in_ECX + 0x260),param_2);
              FUN_004899a0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x2ac) + 4) + j * 4));
            }
            break;
          }
          j = j + 1;
          iVar4 = iVar4 + 0x114;
          iVar6 = (*(code *)**(undefined4 **)(in_ECX + 0x2b8))();
        } while (j < iVar6);
      }
      local_4 = 0xffffffff;
      FUN_004028f0(1);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0048ae80 FUN_0048ae80 ==== */

void FUN_0048ae80(void)

{
  char cVar1;
  undefined1 uVar2;
  char *str1;
  undefined1 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int j;
  int k;
  uint m;
  char *pcVar5;
  char *pcStack_644;
  char *pcStack_640;
  char *pcStack_63c;
  char *pcStack_638;
  char local_61d;
  char local_61c [4];
  char *pcStack_618;
  undefined1 *local_60c;
  undefined4 uStack_604;
  undefined1 auStack_600 [16];
  char acStack_5f0 [4];
  char *pcStack_5ec;
  uint uStack_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  uint uStack_5d8;
  int i;
  undefined **local_5d0;
  char *operator_new_result;
  char acStack_5c8 [4];
  char *pcStack_5c4;
  char local_5a8 [4];
  char *pcStack_5a4;
  int iStack_598;
  char local_594 [4];
  char *pcStack_590;
  char local_584 [16];
  char local_574 [16];
  char local_564 [16];
  char local_554 [16];
  char local_544 [16];
  char local_534 [16];
  char local_524 [16];
  char local_514 [16];
  char local_504 [16];
  char local_4f4 [16];
  char local_4e4 [16];
  char local_4d4 [16];
  char local_4c4 [16];
  char local_4b4 [16];
  char local_4a4 [16];
  char local_494 [16];
  char local_484 [16];
  char local_474 [16];
  char local_464 [16];
  char local_454 [16];
  char local_444 [16];
  char local_434 [16];
  char local_424 [16];
  char local_414 [16];
  undefined1 auStack_404 [16];
  undefined1 auStack_3f4 [96];
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  char local_2e0;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [208];
  char local_120;
  undefined4 uStack_110;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056dec2;
  pvStack_c = ExceptionList;
  pcStack_638 = (char *)0x48aeb5;
  ExceptionList = &pvStack_c;
  FUN_004028f0();
  local_5a8[0] = local_61d;
  local_4 = 0;
  pcStack_638 = (char *)0x48aed4;
  FUN_004028f0();
  local_4._0_1_ = 1;
  local_2e0 = local_61d;
  pcStack_638 = (char *)0x48aef4;
  FUN_004028f0();
  local_4._0_1_ = 2;
  local_594[0] = local_61d;
  pcStack_638 = (char *)0x48af14;
  FUN_004028f0();
  local_120 = local_61d;
  local_4._0_1_ = 3;
  pcStack_638 = (char *)0x48af34;
  FUN_004028f0();
  local_4._0_1_ = 4;
  FUN_0049f360();
  local_4._0_1_ = 5;
  local_5d0 = &PTR_LAB_00576634;
  pcStack_638 = (char *)0x48af5f;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (char *)0x0) {
    operator_new_result = (char *)0x0;
  }
  else {
    operator_new_result[4] = '\0';
    operator_new_result[5] = '\0';
    operator_new_result[6] = '\0';
    operator_new_result[7] = '\0';
    *operator_new_result = local_61d;
    operator_new_result[8] = '\0';
    operator_new_result[9] = '\0';
    operator_new_result[10] = '\0';
    operator_new_result[0xb] = '\0';
    operator_new_result[0xc] = '\0';
    operator_new_result[0xd] = '\0';
    operator_new_result[0xe] = '\0';
    operator_new_result[0xf] = '\0';
  }
  local_4._0_1_ = 6;
  local_534[0] = local_61d;
  pcStack_638 = (char *)0x48af9e;
  FUN_004028f0();
  j = -1;
  str1 = s_sii_005abb60;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_sii_005abb60;
  pcStack_63c = (char *)0x48afbf;
  FUN_00402940();
  local_434[0] = local_61d;
  local_4._0_1_ = 7;
  pcStack_638 = (char *)0x48afe0;
  FUN_004028f0();
  j = -1;
  str1 = &DAT_007127a0;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_007127a0;
  pcStack_63c = (char *)0x48b001;
  FUN_00402940();
  local_4._0_1_ = 8;
  local_4a4[0] = local_61d;
  pcStack_638 = (char *)0x48b022;
  FUN_004028f0();
  j = -1;
  str1 = s_system_005abb64;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_system_005abb64;
  pcStack_63c = (char *)0x48b043;
  FUN_00402940();
  local_4._0_1_ = 9;
  local_554[0] = local_61d;
  pcStack_638 = (char *)0x48b06a;
  FUN_004028f0();
  j = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_communi_ini_005ab824;
  pcStack_63c = (char *)0x48b084;
  FUN_00402940();
  pcStack_638 = local_534;
  pcStack_63c = local_434;
  pcStack_640 = local_4a4;
  local_4._0_1_ = 10;
  j = in_ECX + 0x280;
  pcStack_644 = local_554;
  FUN_00499d30(j);
  local_4._0_1_ = 0xf;
  pcStack_638 = (char *)0x48b0d7;
  FUN_004028f0();
  local_4._0_1_ = 0xe;
  pcStack_638 = (char *)0x48b0ed;
  FUN_004028f0();
  local_4._0_1_ = 0xd;
  pcStack_638 = (char *)0x48b103;
  FUN_004028f0();
  local_4._0_1_ = 0xc;
  pcStack_638 = (char *)0x48b119;
  FUN_004028f0();
  local_524[0] = local_61d;
  pcStack_638 = (char *)0x48b132;
  FUN_004028f0();
  k = -1;
  str1 = &DAT_007127a4;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_007127a4;
  pcStack_63c = (char *)0x48b153;
  FUN_00402940();
  local_4._0_1_ = 0x10;
  local_444[0] = local_61d;
  pcStack_638 = (char *)0x48b174;
  FUN_004028f0();
  k = -1;
  str1 = s_players_005abb78;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_players_005abb78;
  pcStack_63c = (char *)0x48b195;
  FUN_00402940();
  local_544[0] = local_61d;
  local_4._0_1_ = 0x11;
  pcStack_638 = (char *)0x48b1bc;
  FUN_004028f0();
  k = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_communi_ini_005ab824;
  pcStack_63c = "j";
  FUN_00402940();
  local_4._0_1_ = 0x12;
  local_60c = (undefined1 *)&pcStack_644;
  FUN_004900f0(s_<nobody>_005abb6c,&local_61d);
  FUN_0049c1b0(j,local_544,local_444,local_524);
  local_4._0_1_ = 0x16;
  pcStack_638 = (char *)0x48b233;
  FUN_004028f0();
  local_4._0_1_ = 0x15;
  pcStack_638 = (char *)0x48b249;
  FUN_004028f0();
  local_4._0_1_ = 0x14;
  pcStack_638 = (char *)0x48b25f;
  FUN_004028f0();
  local_4e4[0] = local_61d;
  pcStack_638 = (char *)0x48b278;
  FUN_004028f0();
  k = -1;
  str1 = &DAT_005abb80;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_005abb80;
  pcStack_63c = (char *)0x48b299;
  FUN_00402940();
  local_414[0] = local_61d;
  local_4._0_1_ = 0x17;
  pcStack_638 = (char *)0x48b2ba;
  FUN_004028f0();
  k = -1;
  str1 = &DAT_007127a8;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_007127a8;
  pcStack_63c = (char *)0x48b2db;
  FUN_00402940();
  local_4._0_1_ = 0x18;
  local_504[0] = local_61d;
  pcStack_638 = (char *)0x48b2fc;
  FUN_004028f0();
  k = -1;
  str1 = &DAT_007127ac;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_007127ac;
  pcStack_63c = (char *)0x48b31d;
  FUN_00402940();
  local_4._0_1_ = 0x19;
  local_484[0] = local_61d;
  pcStack_638 = (char *)0x48b344;
  FUN_004028f0();
  k = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_communi_ini_005ab824;
  pcStack_63c = (char *)0x48b35e;
  FUN_00402940();
  pcStack_638 = local_4e4;
  pcStack_63c = local_414;
  pcStack_640 = local_504;
  pcStack_644 = local_484;
  local_4._0_1_ = 0x1a;
  FUN_00499d30(j);
  local_4._0_1_ = 0x1f;
  pcStack_638 = (char *)0x48b3ab;
  FUN_004028f0();
  local_4._0_1_ = 0x1e;
  pcStack_638 = (char *)0x48b3c1;
  FUN_004028f0();
  local_4._0_1_ = 0x1d;
  pcStack_638 = (char *)0x48b3d7;
  FUN_004028f0();
  local_4._0_1_ = 0x1c;
  pcStack_638 = (char *)0x48b3ed;
  FUN_004028f0();
  local_424[0] = local_61d;
  pcStack_638 = (char *)0x48b406;
  FUN_004028f0();
  k = -1;
  str1 = s_priority_005abb8c;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_priority_005abb8c;
  pcStack_63c = (char *)0x48b427;
  FUN_00402940();
  local_4._0_1_ = 0x20;
  local_4c4[0] = local_61d;
  pcStack_638 = (char *)0x48b448;
  FUN_004028f0();
  k = -1;
  str1 = &DAT_007127b0;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_007127b0;
  pcStack_63c = (char *)0x48b469;
  FUN_00402940();
  local_464[0] = local_61d;
  local_4._0_1_ = 0x21;
  pcStack_638 = (char *)0x48b490;
  FUN_004028f0();
  k = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_communi_ini_005ab824;
  pcStack_63c = "j";
  FUN_00402940();
  pcStack_63c = local_424;
  pcStack_638 = (char *)0x0;
  pcStack_640 = local_4c4;
  pcStack_644 = local_464;
  local_4._0_1_ = 0x22;
  FUN_0049b940(j);
  local_4._0_1_ = 0x26;
  pcStack_638 = (char *)0x48b4f1;
  FUN_004028f0();
  local_4._0_1_ = 0x25;
  pcStack_638 = (char *)0x48b507;
  FUN_004028f0();
  local_4._0_1_ = 0x24;
  pcStack_638 = (char *)0x48b51d;
  FUN_004028f0();
  local_574[0] = local_61d;
  pcStack_638 = (char *)0x48b536;
  FUN_004028f0();
  k = -1;
  str1 = &DAT_007127b4;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_007127b4;
  pcStack_63c = (char *)0x48b557;
  FUN_00402940();
  local_4._0_1_ = 0x27;
  local_584[0] = local_61d;
  pcStack_638 = (char *)0x48b578;
  FUN_004028f0();
  k = -1;
  str1 = s_general_005abb98;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_general_005abb98;
  pcStack_63c = (char *)0x48b599;
  FUN_00402940();
  local_564[0] = local_61d;
  local_4._0_1_ = 0x28;
  pcStack_638 = (char *)0x48b5c0;
  FUN_004028f0();
  k = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_communi_ini_005ab824;
  pcStack_63c = "j";
  FUN_00402940();
  pcStack_63c = local_574;
  pcStack_638 = (char *)0x0;
  pcStack_640 = local_584;
  pcStack_644 = local_564;
  local_4._0_1_ = 0x29;
  FUN_0049b370(j);
  local_4._0_1_ = 0x2d;
  pcStack_638 = (char *)0x48b621;
  FUN_004028f0();
  local_4._0_1_ = 0x2c;
  pcStack_638 = (char *)0x48b637;
  FUN_004028f0();
  local_4._0_1_ = 0x2b;
  pcStack_638 = (char *)0x48b64d;
  FUN_004028f0();
  local_4d4[0] = local_61d;
  pcStack_638 = (char *)0x48b666;
  FUN_004028f0();
  k = -1;
  str1 = &DAT_007127b8;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_007127b8;
  pcStack_63c = (char *)0x48b687;
  FUN_00402940();
  local_4._0_1_ = 0x2e;
  local_4f4[0] = local_61d;
  pcStack_638 = (char *)0x48b6a8;
  FUN_004028f0();
  k = -1;
  str1 = s_general_005abba0;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_general_005abba0;
  pcStack_63c = (char *)0x48b6c9;
  FUN_00402940();
  local_4._0_1_ = 0x2f;
  local_514[0] = local_61d;
  pcStack_638 = (char *)0x48b6f0;
  FUN_004028f0();
  k = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_communi_ini_005ab824;
  pcStack_63c = "j";
  FUN_00402940();
  pcStack_63c = local_4d4;
  pcStack_638 = (char *)0x0;
  pcStack_640 = local_4f4;
  pcStack_644 = local_514;
  local_4._0_1_ = 0x30;
  FUN_0049b940(j);
  local_4._0_1_ = 0x34;
  pcStack_638 = (char *)0x48b751;
  FUN_004028f0();
  local_4._0_1_ = 0x33;
  pcStack_638 = (char *)0x48b767;
  FUN_004028f0();
  local_4._0_1_ = 0x32;
  pcStack_638 = (char *)0x48b77d;
  FUN_004028f0();
  local_454[0] = local_61d;
  pcStack_638 = (char *)0x48b796;
  FUN_004028f0();
  k = -1;
  str1 = s_sb_005abba8;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_sb_005abba8;
  pcStack_63c = (char *)0x48b7b7;
  FUN_00402940();
  local_4._0_1_ = 0x35;
  local_474[0] = local_61d;
  pcStack_638 = (char *)0x48b7d8;
  FUN_004028f0();
  k = -1;
  str1 = &DAT_007127bc;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = &DAT_007127bc;
  pcStack_63c = (char *)0x48b7f9;
  FUN_00402940();
  local_4._0_1_ = 0x36;
  local_494[0] = local_61d;
  pcStack_638 = (char *)0x48b81a;
  FUN_004028f0();
  k = -1;
  str1 = s_players_005abbac;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_players_005abbac;
  pcStack_63c = (char *)0x48b83b;
  FUN_00402940();
  local_4._0_1_ = 0x37;
  local_4b4[0] = local_61d;
  pcStack_638 = (char *)0x48b862;
  FUN_004028f0();
  k = -1;
  str1 = s_communi_ini_005ab824;
  do {
    if (k == 0) break;
    k = k + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_communi_ini_005ab824;
  pcStack_63c = (char *)0x48b87c;
  FUN_00402940();
  pcStack_638 = local_454;
  pcStack_63c = local_474;
  pcStack_640 = local_494;
  pcStack_644 = local_4b4;
  local_4._0_1_ = 0x38;
  FUN_00499d30(j);
  local_4._0_1_ = 0x3d;
  pcStack_638 = (char *)0x48b8c9;
  FUN_004028f0();
  local_4._0_1_ = 0x3c;
  pcStack_638 = (char *)0x48b8df;
  FUN_004028f0();
  local_4._0_1_ = 0x3b;
  pcStack_638 = (char *)0x48b8f5;
  FUN_004028f0();
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48b90c;
  FUN_004028f0();
  local_61c[0] = local_61d;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  pcStack_638 = (char *)0x48b923;
  FUN_004028f0();
  j = -1;
  str1 = s_testmode_005abbb4;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_testmode_005abbb4;
  pcStack_63c = (char *)0x48b941;
  FUN_00402940();
  local_4._0_1_ = 0x3e;
  pcStack_638 = (char *)0x48b95a;
  FUN_00499220();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48b96c;
  FUN_004028f0();
  cVar1 = FUN_004997c0();
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b5f0();
    *(undefined1 *)(in_ECX + 0x18) = uVar2;
  }
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48b9a3;
  FUN_004028f0();
  j = -1;
  str1 = s_moveaway_005abbc0;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_moveaway_005abbc0;
  pcStack_63c = (char *)0x48b9c1;
  FUN_00402940();
  local_4._0_1_ = 0x3f;
  pcStack_638 = (char *)0x48b9da;
  FUN_00499220();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48b9ec;
  FUN_004028f0();
  cVar1 = FUN_004997c0();
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b5f0();
    *(undefined1 *)(in_ECX + 0x1a) = uVar2;
  }
  *(undefined1 *)(in_ECX + 0x19) = 0;
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48ba21;
  FUN_004028f0();
  j = -1;
  str1 = s_testmessages_005abbcc;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_testmessages_005abbcc;
  pcStack_63c = (char *)0x48ba3f;
  FUN_00402940();
  local_4._0_1_ = 0x40;
  pcStack_638 = (char *)0x48ba58;
  FUN_00499220();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48ba6a;
  FUN_004028f0();
  cVar1 = FUN_004997c0();
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b5f0();
    *(undefined1 *)(in_ECX + 0x19) = uVar2;
  }
  local_61c[0] = local_61d;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  pcStack_638 = (char *)0x48ba9e;
  FUN_004028f0();
  j = -1;
  str1 = s_moveawaytime_005abbdc;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_moveawaytime_005abbdc;
  pcStack_63c = (char *)0x48babc;
  FUN_00402940();
  local_4._0_1_ = 0x41;
  pcStack_638 = (char *)0x48bad5;
  FUN_00499220();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48bae7;
  FUN_004028f0();
  cVar1 = FUN_004997c0();
  if (cVar1 != '\0') {
    j = FUN_0049ba70();
    *(int *)(in_ECX + 0x1c) = j * 1000;
  }
  if (*(int *)(in_ECX + 0x1c) < 0) {
    j = FUN_00499360();
    pcStack_640 = *(char **)(j + 4);
    if (pcStack_640 == (char *)0x0) {
      pcStack_640 = "";
    }
    pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abbec;
    pcStack_63c = s_communi_ini_005ab824;
    pcStack_644 = s_ERROR____Communicator____s__must_005abc18;
    FUN_004c4150();
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48bb63;
  FUN_004028f0();
  j = -1;
  str1 = s_initwaittime_005abc50;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_initwaittime_005abc50;
  pcStack_63c = (char *)0x48bb81;
  FUN_00402940();
  local_4._0_1_ = 0x42;
  pcStack_638 = (char *)0x48bb9a;
  FUN_00499220();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48bbac;
  FUN_004028f0();
  cVar1 = FUN_004997c0();
  if (cVar1 != '\0') {
    j = FUN_0049ba70();
    *(int *)(in_ECX + 0x24) = j * 1000;
  }
  if (*(int *)(in_ECX + 0x24) < 0) {
    j = FUN_00499360();
    pcStack_644 = *(char **)(j + 4);
    if (pcStack_644 == (char *)0x0) {
      pcStack_644 = "";
    }
    pcStack_640 = *(char **)(in_ECX + 0x24);
    pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abc60;
    pcStack_63c = s_communi_ini_005ab824;
    FUN_004c4150(s_ERROR____Communicator____s__must_005abc8c);
  }
  iStack_598 = 0x14;
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48bc34;
  FUN_004028f0();
  j = -1;
  str1 = s_chars_per_line_005abcc4;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_chars_per_line_005abcc4;
  pcStack_63c = (char *)0x48bc52;
  FUN_00402940();
  local_4._0_1_ = 0x43;
  pcStack_638 = (char *)0x48bc6b;
  FUN_00499220();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48bc7d;
  FUN_004028f0();
  cVar1 = FUN_004997c0();
  if ((cVar1 != '\0') && ((iStack_598 = FUN_0049ba70(), iStack_598 < 1 || (100 < iStack_598)))) {
    pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abcd4;
    pcStack_63c = s_communi_ini_005ab824;
    pcStack_640 = s_ERROR____Communicator___chars_pe_005abd00;
    pcStack_644 = (char *)0x48bcc5;
    FUN_004c4150();
  }
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48bcdc;
  FUN_004028f0();
  j = -1;
  str1 = s_categories_005abd54;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_categories_005abd54;
  pcStack_63c = (char *)0x48bcfa;
  FUN_00402940();
  local_4._0_1_ = 0x44;
  pcStack_638 = (char *)0x48bd13;
  FUN_004990d0();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48bd25;
  FUN_004028f0();
  while( true ) {
    pcStack_63c = local_61c;
    pcStack_638 = s__d_005abd60;
    pcStack_640 = (char *)0x48bd37;
    pcStack_63c = (char *)FUN_0049df90();
    pcStack_638 = (char *)0x0;
    local_4._0_1_ = 0x45;
    pcStack_640 = (char *)0x48bd54;
    FUN_004093c0();
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48bd66;
    FUN_004028f0();
    pcStack_638 = (char *)0x48bd77;
    FUN_00499220();
    cVar1 = FUN_004997c0();
    if (cVar1 == '\0') break;
    local_60c = (undefined1 *)&pcStack_640;
    pcStack_644 = (char *)&pcStack_640;
    uStack_110 = 0;
    FUN_0049c640();
    pcStack_644 = acStack_5c8;
    pcStack_63c = (char *)FUN_00489820();
    local_4._0_1_ = 0x46;
    pcStack_638 = (char *)0x0;
    pcStack_640 = (char *)0x48bdcd;
    FUN_004093c0();
    local_4 = CONCAT31(local_4._1_3_,0x3a);
    pcStack_638 = (char *)0x48bddf;
    FUN_004028f0();
    pcStack_638 = *(char **)(*(int *)(in_ECX + 700) + 8);
    pcStack_63c = (char *)0x48bdf6;
    FUN_00490790();
  }
  k = 0;
  *(undefined4 *)(in_ECX + 0x2c0) = 0;
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48be16;
  FUN_004028f0();
  j = -1;
  str1 = s_players_005abd64;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_players_005abd64;
  pcStack_63c = (char *)0x48be34;
  FUN_00402940();
  local_4._0_1_ = 0x47;
  pcStack_638 = (char *)0x48be4d;
  FUN_004990d0();
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48be5f;
  FUN_004028f0();
  do {
    pcStack_63c = local_61c;
    pcStack_638 = s__d_005abd6c;
    pcStack_640 = (char *)0x48be6f;
    pcStack_63c = (char *)FUN_0049df90();
    local_4._0_1_ = 0x48;
    pcStack_638 = (char *)0x0;
    pcStack_640 = (char *)0x48be90;
    FUN_004093c0();
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48bea2;
    FUN_004028f0();
    pcStack_638 = (char *)0x48beb3;
    FUN_00499220();
    cVar1 = FUN_004997c0();
    if (cVar1 == '\0') break;
    pcStack_638 = (char *)0x48bece;
    local_60c = operator_new(0x40);
    local_4._0_1_ = 0x49;
    if (local_60c == (undefined1 *)0x0) {
      uStack_5dc = 0;
    }
    else {
      uStack_5dc = FUN_0049cd90();
    }
    pcStack_638 = acStack_5c8;
    local_4._0_1_ = 0x3a;
    pcStack_63c = (char *)0x48bf0a;
    CRegVarArray_GetValue();
    local_4._0_1_ = 0x4a;
    pcStack_638 = (char *)0x48bf1c;
    FUN_0049d0b0();
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48bf2e;
    FUN_004028f0();
    pcStack_638 = (char *)0x48bf3c;
    FUN_0049aeb0();
    uVar2 = FUN_0049b5f0();
    iStack_5e0 = CONCAT31(iStack_5e0._1_3_,uVar2);
    pcStack_638 = (char *)0x48bf55;
    FUN_0049d250();
    if ((char)iStack_5e0 != '\0') {
      *(int *)(in_ECX + 0x2c0) = *(int *)(in_ECX + 0x2c0) + 1;
    }
    pcStack_638 = *(char **)(*(int *)(in_ECX + 0x2b4) + 8);
    pcStack_63c = (char *)0x48bf77;
    FUN_004905f0();
    k = k + 1;
  } while (k < 1000);
  pcStack_638 = (char *)0x48bf94;
  j = FUN_0049ef80(s_COMMUNICATOR_SOUND_005ab810);
  uStack_394 = *(undefined4 *)(j + 4);
  uStack_390 = *(undefined4 *)(j + 8);
  uStack_38c = *(undefined4 *)(j + 0xc);
  uStack_388 = *(undefined4 *)(j + 0x10);
  uStack_384 = *(undefined4 *)(j + 0x14);
  pcStack_63c = (char *)(j + 0x18);
  pcStack_638 = (char *)0x0;
  pcStack_640 = (char *)0x48bfe0;
  FUN_004093c0();
  pcStack_63c = (char *)(j + 0x28);
  pcStack_638 = (char *)0x0;
  pcStack_640 = (char *)0x48bff9;
  FUN_004093c0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48c00c;
  FUN_004028f0();
  j = -1;
  str1 = s_samples_005abd70;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_samples_005abd70;
  pcStack_63c = (char *)0x48c02a;
  FUN_00402940();
  local_4._0_1_ = 0x4b;
  pcStack_638 = (char *)0x48c043;
  FUN_004990d0();
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48c055;
  FUN_004028f0();
  j = 0;
  do {
    pcStack_63c = local_61c;
    pcStack_638 = s__d_005abd78;
    pcStack_640 = (char *)0x48c067;
    pcStack_63c = (char *)FUN_0049df90();
    local_4._0_1_ = 0x4c;
    pcStack_638 = (char *)0x0;
    pcStack_640 = (char *)0x48c088;
    FUN_004093c0();
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48c09a;
    FUN_004028f0();
    pcStack_638 = (char *)0x48c0ab;
    FUN_00499220();
    cVar1 = FUN_004997c0();
    if (cVar1 == '\0') break;
    pcStack_638 = (char *)0x48c0d0;
    pcStack_63c = (char *)FUN_0049c640();
    local_4._0_1_ = 0x4d;
    pcStack_638 = (char *)0x0;
    pcStack_640 = (char *)0x48c0ee;
    FUN_004093c0();
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48c100;
    FUN_004028f0();
    pcStack_63c = local_594;
    pcStack_638 = (char *)0x0;
    pcStack_640 = (char *)0x48c11d;
    FUN_004093c0();
    pcStack_638 = local_594;
    pcStack_63c = acStack_5f0;
    pcStack_640 = (char *)0x48c134;
    pcStack_63c = (char *)FUN_004796b0();
    local_4._0_1_ = 0x4e;
    pcStack_638 = (char *)0x0;
    pcStack_640 = (char *)0x48c155;
    FUN_004093c0();
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48c167;
    FUN_004028f0();
    pcStack_638 = (char *)0x48c179;
    FUN_0049f030();
    str1 = pcStack_590;
    if (pcStack_590 == (char *)0x0) {
      str1 = "";
    }
    pcStack_638 = (char *)0x48c194;
    i = FUN_0049ecb0(str1);
    pcStack_638 = *(char **)(operator_new_result + 8);
    pcStack_63c = (char *)0x48c1aa;
    FUN_004905f0();
    j = j + 1;
  } while (j < 1000);
  pcStack_638 = (char *)0x48c1be;
  local_60c = operator_new(0x40);
  local_4._0_1_ = 0x4f;
  if (local_60c == (void *)0x0) {
    uStack_5dc = 0;
  }
  else {
    uStack_5dc = FUN_0049cd90();
  }
  local_4._0_1_ = 0x3a;
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48c1fa;
  FUN_004028f0();
  j = -1;
  str1 = s_SYSTEM_005abd84;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = s_SYSTEM_005abd84;
  pcStack_63c = (char *)0x48c218;
  FUN_00402940();
  local_4._0_1_ = 0x50;
  pcStack_638 = (char *)0x48c22e;
  FUN_0049d0b0();
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48c240;
  FUN_004028f0();
  pcStack_638 = (char *)0x48c24b;
  FUN_0049cf50();
  pcStack_638 = *(char **)(*(int *)(in_ECX + 0x2b4) + 8);
  pcStack_63c = (char *)0x48c25f;
  FUN_004905f0();
  j = 0;
  do {
    pcStack_63c = local_61c;
    pcStack_638 = s__d_005abd8c;
    pcStack_640 = (char *)0x48c271;
    pcStack_63c = (char *)FUN_0049df90();
    local_4._0_1_ = 0x51;
    pcStack_638 = (char *)0x0;
    pcStack_640 = (char *)0x48c292;
    FUN_004093c0();
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48c2a4;
    FUN_004028f0();
    pcStack_638 = (char *)0x48c2b5;
    FUN_00499220();
    cVar1 = FUN_004997c0();
    if (cVar1 == '\0') break;
    pcStack_638 = (char *)0x48c2d0;
    local_60c = operator_new(0x58);
    local_4._0_1_ = 0x52;
    if (local_60c == (void *)0x0) {
      uStack_604 = 0;
    }
    else {
      uStack_604 = FUN_0049d2b0();
    }
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48c305;
    FUN_0049d840();
    pcStack_638 = acStack_5f0;
    pcStack_63c = (char *)0x48c318;
    CRegVarArray_GetValue();
    pcStack_63c = acStack_5c8;
    pcStack_638 = s_SYSTEM__005abd90;
    local_4._0_1_ = 0x53;
    pcStack_640 = (char *)0x48c330;
    FUN_004797e0();
    local_4._0_1_ = 0x54;
    pcStack_638 = (char *)0x48c345;
    FUN_0049d880();
    local_4._0_1_ = 0x53;
    pcStack_638 = (char *)0x48c358;
    FUN_004028f0();
    local_4 = CONCAT31(local_4._1_3_,0x3a);
    pcStack_638 = (char *)0x48c36a;
    FUN_004028f0();
    pcStack_638 = (char *)0x48c375;
    FUN_0049dd30();
    pcStack_638 = auStack_404;
    pcStack_63c = (undefined1 *)0x48c38b;
    CRegVarArray_GetValue();
    pcStack_638 = (char *)0x48c39d;
    str1 = (char *)FUN_0055933d();
    pcStack_638 = (char *)0x48c3b0;
    FUN_004028f0();
    if (str1 != (char *)0xffffffff) {
      if ((int)str1 < 0) {
LAB_0048c3d4:
        k = FUN_0049dd90();
        pcStack_63c = *(char **)(k + 4);
        if (pcStack_63c == (undefined1 *)0x0) {
          pcStack_63c = &DAT_0057629c;
        }
        pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abd98;
        pcStack_644 = s_ERROR____Communicator__samplenr__005abdc4;
        pcStack_640 = str1;
        FUN_004c4150();
      }
      else {
        if (*(int *)(operator_new_result + 4) == 0) {
          k = 0;
        }
        else {
          k = *(int *)(operator_new_result + 8) - *(int *)(operator_new_result + 4) >> 2;
        }
        if (k < (int)str1) goto LAB_0048c3d4;
      }
      pcStack_638 = (char *)0x48c416;
      FUN_0049dd30();
    }
    pcStack_638 = auStack_3f4;
    pcStack_63c = (char *)0x48c42c;
    CRegVarArray_GetValue();
    local_4._0_1_ = 0x55;
    pcStack_638 = (char *)0x48c446;
    FUN_0055933d();
    pcStack_638 = (char *)0x48c453;
    FUN_0049dd40();
    local_4._0_1_ = 0x3a;
    pcStack_638 = (char *)0x48c468;
    FUN_004028f0();
    pcStack_638 = *(char **)(*(int *)(in_ECX + 0x2ac) + 8);
    pcStack_63c = (char *)0x48c47c;
    FUN_004905f0();
    j = j + 1;
  } while (j < 1000);
  iStack_5e0 = 0;
  j = (*(code *)**(undefined4 **)(in_ECX + 0x2b0))();
  if (0 < j + -1) {
    do {
      pcStack_63c = (char *)FUN_0049d220();
      pcStack_638 = (char *)0x0;
      pcStack_640 = (char *)0x48c4d3;
      FUN_004093c0();
      pcStack_638 = (char *)0x48c4e7;
      FUN_004990d0();
      pcStack_638 = (char *)0x48c4fb;
      FUN_004990d0();
      pcStack_638 = (char *)0x48c50f;
      FUN_004990d0();
      cVar1 = FUN_004997c0();
      if (cVar1 == '\0') {
        pcStack_640 = pcStack_5a4;
        if (pcStack_5a4 == (char *)0x0) {
          pcStack_640 = "";
        }
        pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abe10;
        pcStack_63c = s_communi_ini_005ab824;
        pcStack_644 = s_ERROR____Communicator____s__has_n_005abe3c;
        FUN_004c4150();
      }
      j = FUN_0049ba70();
      if ((j < 0) || (300 < j)) {
        pcStack_640 = pcStack_5a4;
        if (pcStack_5a4 == (char *)0x0) {
          pcStack_640 = "";
        }
        pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abe7c;
        pcStack_63c = s_communi_ini_005ab824;
        pcStack_644 = s_ERROR____Communicator____s__must_005abea8;
        FUN_004c4150();
      }
      pcStack_638 = (char *)0x48c5a9;
      FUN_0049cf50();
      acStack_5f0[0] = local_61d;
      pcStack_638 = (char *)0x48c5bc;
      FUN_004028f0();
      m = 0xffffffff;
      str1 = s_title_005abefc;
      do {
        if (m == 0) break;
        m = m - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      pcStack_638 = (char *)(~m - 1);
      pcStack_63c = (char *)0x48c5db;
      uStack_5d8 = (uint)pcStack_638;
      cVar1 = FUN_00402a00();
      if (cVar1 != '\0') {
        str1 = s_title_005abefc;
        pcVar5 = pcStack_5ec;
        for (m = uStack_5d8 >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)str1;
          str1 = str1 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (m = uStack_5d8 & 3; m != 0; m = m - 1) {
          *pcVar5 = *str1;
          str1 = str1 + 1;
          pcVar5 = pcVar5 + 1;
        }
        pcStack_638 = (char *)0x48c606;
        FUN_004029e0();
      }
      local_4._0_1_ = 0x56;
      pcStack_638 = (char *)0x48c623;
      FUN_00499220();
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      pcStack_638 = (char *)0x48c635;
      FUN_004028f0();
      cVar1 = FUN_004997c0();
      if (cVar1 == '\0') {
        pcStack_640 = pcStack_5a4;
        if (pcStack_5a4 == (char *)0x0) {
          pcStack_640 = "";
        }
        pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abf04;
        pcStack_63c = s_communi_ini_005ab824;
        pcStack_644 = s_ERROR____Communicator____s__has_n_005abf30;
        FUN_004c4150();
      }
      pcStack_638 = (char *)0x48c688;
      FUN_0049c640();
      local_4._0_1_ = 0x57;
      pcStack_638 = (char *)0x48c6a2;
      FUN_0049cf60();
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      pcStack_638 = (char *)0x48c6b7;
      FUN_004028f0();
      acStack_5c8[0] = local_61d;
      pcStack_638 = (char *)0x48c6ca;
      FUN_004028f0();
      m = 0xffffffff;
      str1 = s_ovl_photo_005abf6c;
      do {
        if (m == 0) break;
        m = m - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      pcStack_638 = (char *)(~m - 1);
      pcStack_63c = (char *)0x48c6e9;
      uStack_5d8 = (uint)pcStack_638;
      cVar1 = FUN_00402a00();
      if (cVar1 != '\0') {
        str1 = s_ovl_photo_005abf6c;
        pcVar5 = pcStack_5c4;
        for (m = uStack_5d8 >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)str1;
          str1 = str1 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (m = uStack_5d8 & 3; m != 0; m = m - 1) {
          *pcVar5 = *str1;
          str1 = str1 + 1;
          pcVar5 = pcVar5 + 1;
        }
        pcStack_638 = (char *)0x48c714;
        FUN_004029e0();
      }
      local_4._0_1_ = 0x58;
      pcStack_638 = (char *)0x48c72d;
      FUN_00499220();
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      pcStack_638 = (char *)0x48c73f;
      FUN_004028f0();
      cVar1 = FUN_004997c0();
      if (cVar1 == '\0') {
        pcStack_640 = pcStack_5a4;
        if (pcStack_5a4 == (char *)0x0) {
          pcStack_640 = "";
        }
        pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abf78;
        pcStack_63c = s_communi_ini_005ab824;
        pcStack_644 = s_ERROR____Communicator____s__has_n_005abfa4;
        FUN_004c4150();
      }
      pcStack_638 = (char *)0x48c792;
      FUN_0049c640();
      local_4._0_1_ = 0x59;
      pcStack_638 = (char *)0x48c7a3;
      puVar3 = (undefined1 *)FUN_00484f60();
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      pcStack_638 = (char *)0x48c7be;
      local_60c = puVar3;
      FUN_004028f0();
      local_61c[0] = local_61d;
      pcStack_638 = (char *)0x48c7d1;
      FUN_004028f0();
      m = 0xffffffff;
      str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abfe4;
      do {
        if (m == 0) break;
        m = m - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      pcStack_638 = (char *)(~m - 1);
      pcStack_63c = (char *)0x48c7f0;
      uStack_5d8 = (uint)pcStack_638;
      cVar1 = FUN_00402a00();
      if (cVar1 != '\0') {
        str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abfe4;
        pcVar5 = pcStack_618;
        for (m = uStack_5d8 >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)str1;
          str1 = str1 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (m = uStack_5d8 & 3; m != 0; m = m - 1) {
          *pcVar5 = *str1;
          str1 = str1 + 1;
          pcVar5 = pcVar5 + 1;
        }
        pcStack_638 = (char *)0x48c81b;
        FUN_004029e0();
        puVar3 = local_60c;
      }
      local_4._0_1_ = 0x5a;
      pcStack_638 = (char *)0x48c83b;
      FUN_0049c640();
      local_4._0_1_ = 0x5b;
      pcStack_63c = auStack_210;
      pcStack_638 = s_Ovl_photo_element__s_undefined_l_005ac010;
      pcStack_640 = (char *)0x48c862;
      uVar4 = FUN_0049df90();
      pcStack_644 = local_61c;
      pcStack_640 = (char *)0x49a;
      local_4._0_1_ = 0x5c;
      FUN_00487bc0(puVar3,uVar4);
      local_4._0_1_ = 0x5b;
      pcStack_638 = (char *)0x48c894;
      FUN_004028f0();
      local_4._0_1_ = 0x5a;
      pcStack_638 = (char *)0x48c8aa;
      FUN_004028f0();
      local_4._0_1_ = 0x3a;
      pcStack_638 = (char *)0x48c8bc;
      FUN_004028f0();
      pcStack_638 = (char *)0x48c8d2;
      FUN_0049d0a0();
      i = 0;
      do {
        pcStack_63c = auStack_280;
        pcStack_638 = s__d_005ac034;
        pcStack_640 = (char *)0x48c8eb;
        pcStack_63c = (char *)FUN_0049df90();
        local_4._0_1_ = 0x5d;
        pcStack_638 = (char *)0x0;
        pcStack_640 = (char *)0x48c90c;
        FUN_004093c0();
        local_4._0_1_ = 0x3a;
        pcStack_638 = (char *)0x48c921;
        FUN_004028f0();
        pcStack_638 = (char *)0x48c932;
        FUN_00499220();
        cVar1 = FUN_004997c0();
        if (cVar1 == '\0') break;
        pcStack_638 = (char *)0x48c94d;
        local_60c = operator_new(0x58);
        local_4._0_1_ = 0x5e;
        if (local_60c == (void *)0x0) {
          uStack_604 = 0;
        }
        else {
          uStack_604 = FUN_0049d2b0();
        }
        local_4._0_1_ = 0x3a;
        pcStack_638 = (char *)0x48c98e;
        FUN_0049d840();
        pcStack_638 = auStack_1f0;
        pcStack_63c = (char *)0x48c9a4;
        str1 = (char *)CRegVarArray_GetValue();
        pcStack_638 = local_5a8;
        pcStack_63c = auStack_220;
        local_4._0_1_ = 0x5f;
        pcStack_640 = (char *)0x48c9c5;
        pcStack_644 = (char *)FUN_004904e0();
        local_4._0_1_ = 0x60;
        pcStack_640 = str1;
        FUN_0047c9a0(auStack_270);
        local_4._0_1_ = 0x61;
        pcStack_638 = (char *)0x48c9f1;
        FUN_0049d880();
        local_4._0_1_ = 0x60;
        pcStack_638 = (char *)0x48ca07;
        FUN_004028f0();
        local_4._0_1_ = 0x5f;
        pcStack_638 = (char *)0x48ca1d;
        FUN_004028f0();
        local_4 = CONCAT31(local_4._1_3_,0x3a);
        pcStack_638 = (char *)0x48ca32;
        FUN_004028f0();
        (*(code *)**(undefined4 **)(in_ECX + 0x2a8))();
        local_60c = (undefined1 *)&pcStack_644;
        CRegVarArray_GetValue(&pcStack_644,1);
        FUN_0048ebe0();
        pcStack_638 = auStack_250;
        pcStack_63c = (char *)0x48ca78;
        CRegVarArray_GetValue();
        pcStack_638 = (char *)0x48ca8a;
        local_60c = (undefined1 *)FUN_0055933d();
        pcStack_638 = (char *)0x48caa1;
        FUN_004028f0();
        pcStack_638 = (char *)0x48caab;
        FUN_0049d850();
        pcStack_638 = (char *)0x48cab6;
        FUN_0049dd30();
        pcStack_638 = auStack_200;
        pcStack_63c = (char *)0x48cacc;
        CRegVarArray_GetValue();
        pcStack_638 = (char *)0x48cade;
        str1 = (char *)FUN_0055933d();
        pcStack_638 = (char *)0x48caf1;
        FUN_004028f0();
        if (str1 != (char *)0xffffffff) {
          if ((int)str1 < 0) {
LAB_0048cb15:
            pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac038;
            pcStack_63c = (char *)i;
            pcStack_644 = s_ERROR____Communicator__samplenr__005ac064;
            pcStack_640 = str1;
            FUN_004c4150();
          }
          else {
            if (*(int *)(operator_new_result + 4) == 0) {
              j = 0;
            }
            else {
              j = *(int *)(operator_new_result + 8) - *(int *)(operator_new_result + 4) >> 2;
            }
            if (j < (int)str1) goto LAB_0048cb15;
          }
          pcStack_638 = (char *)0x48cb46;
          FUN_0049dd30();
        }
        pcStack_638 = auStack_260;
        pcStack_63c = (char *)0x48cb5c;
        CRegVarArray_GetValue();
        local_4._0_1_ = 0x62;
        pcStack_638 = (char *)0x48cb76;
        FUN_0055933d();
        pcStack_638 = (char *)0x48cb83;
        FUN_0049dd40();
        local_4._0_1_ = 0x3a;
        pcStack_638 = (char *)0x48cb98;
        FUN_004028f0();
        pcStack_638 = auStack_230;
        pcStack_63c = (char *)0x48cbae;
        CRegVarArray_GetValue();
        local_4._0_1_ = 99;
        pcStack_638 = (char *)0x48cbc8;
        FUN_0055933d();
        pcStack_638 = (char *)0x48cbe1;
        FUN_0049d870();
        local_4._0_1_ = 0x3a;
        pcStack_638 = (char *)0x48cbf6;
        FUN_004028f0();
        pcStack_638 = auStack_240;
        pcStack_63c = (char *)0x48cc0c;
        CRegVarArray_GetValue();
        local_4._0_1_ = 100;
        pcStack_638 = (char *)0x48cc26;
        FUN_0055933d();
        pcStack_638 = (char *)0x48cc3f;
        FUN_0049d860();
        local_4._0_1_ = 0x3a;
        pcStack_638 = (char *)0x48cc54;
        FUN_004028f0();
        pcStack_638 = auStack_600;
        pcStack_63c = (char *)0x48cc67;
        pcStack_638 = (char *)CRegVarArray_GetValue();
        local_4._0_1_ = 0x65;
        pcStack_63c = (char *)0x48cc81;
        FUN_0049dba0();
        local_4._0_1_ = 0x3a;
        pcStack_638 = (char *)0x48cc93;
        FUN_004028f0();
        cVar1 = FUN_0049d7d0();
        if (cVar1 == '\0') {
          j = FUN_0049dd90();
          pcStack_640 = *(char **)(j + 4);
          if (pcStack_640 == (char *)0x0) {
            pcStack_640 = "";
          }
          pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac0b4;
          pcStack_63c = s_communi_ini_005ab824;
          pcStack_644 = s_ERROR____Communicator____s__has_i_005ac0e0;
          FUN_004c4150();
        }
        if (99 < (int)local_60c) {
          pcStack_638 = *(char **)(*(int *)(in_ECX + 0x2a4) + 8);
          pcStack_63c = (char *)0x48ccef;
          FUN_004905f0();
        }
        pcStack_638 = *(char **)(*(int *)(in_ECX + 0x2ac) + 8);
        pcStack_63c = (char *)0x48cd00;
        FUN_004905f0();
        i = i + 1;
      } while (i < 1000);
      k = iStack_5e0 + 1;
      iStack_5e0 = k;
      j = (*(code *)**(undefined4 **)(in_ECX + 0x2b0))();
    } while (k < j + -1);
  }
  *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x21c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x360) = 0;
  *(undefined4 *)(in_ECX + 0x250) = 0;
  *(undefined4 *)(in_ECX + 0x2c4) = 0;
  local_61c[0] = local_61d;
  *(undefined4 *)(in_ECX + 0x260) = 0;
  *(undefined1 *)(in_ECX + 0x218) = 0;
  pcStack_638 = (char *)0x48cd78;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_Communicator_005ab830;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48cd94;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_Communicator_005ab830;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48cdba;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x66;
  pcStack_638 = (char *)0x48cdcf;
  uVar4 = FUN_00484fa0();
  *(undefined4 *)(in_ECX + 0x2c) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48cde4;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48cdfd;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_Speedometer_005ab840;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48ce19;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_Speedometer_005ab840;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48ce3f;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x67;
  pcStack_638 = (char *)0x48ce54;
  uVar4 = FUN_00484fa0();
  *(undefined4 *)(in_ECX + 0x28) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48ce69;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48ce82;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_STRING_0_COMMUNICATOR_005ab84c;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48ce9e;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_STRING_0_COMMUNICATOR_005ab84c;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48cec4;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x68;
  pcStack_638 = (char *)0x48ced9;
  uVar4 = FUN_00485d50();
  *(undefined4 *)(in_ECX + 0x220) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48cef1;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48cf0a;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_STRING_1_COMMUNICATOR_005ab864;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48cf26;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_STRING_1_COMMUNICATOR_005ab864;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48cf4c;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x69;
  pcStack_638 = (char *)0x48cf61;
  uVar4 = FUN_00485d50();
  *(undefined4 *)(in_ECX + 0x224) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48cf79;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48cf92;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_STRING_2_COMMUNICATOR_005ab87c;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48cfae;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_STRING_2_COMMUNICATOR_005ab87c;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48cfd4;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x6a;
  pcStack_638 = (char *)0x48cfe9;
  uVar4 = FUN_00485d50();
  *(undefined4 *)(in_ECX + 0x228) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d001;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d01a;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_STRING_3_COMMUNICATOR_005ab894;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d036;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_STRING_3_COMMUNICATOR_005ab894;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d05c;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x6b;
  pcStack_638 = (char *)0x48d071;
  uVar4 = FUN_00485d50();
  *(undefined4 *)(in_ECX + 0x22c) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d089;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d0a2;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_HLTH_005ab8ac;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d0be;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_HLTH_005ab8ac;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d0e4;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x6c;
  pcStack_638 = (char *)0x48d0f9;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x244) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d111;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d12a;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_HLTH_005ab8c4;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d146;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_HLTH_005ab8c4;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d16c;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x6d;
  pcStack_638 = (char *)0x48d181;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x23c) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d199;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d1b2;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_HLTH_BK_005ab8dc;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d1ce;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_HLTH_BK_005ab8dc;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d1f4;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x6e;
  pcStack_638 = (char *)0x48d209;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x240) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d221;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d23a;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_DIAL_005ab8f8;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d256;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_DIAL_005ab8f8;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d27c;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x6f;
  pcStack_638 = (char *)0x48d291;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x254) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d2a9;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d2c2;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_TURBODIAL_005ab910;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d2de;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_TURBODIAL_005ab910;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d304;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x70;
  pcStack_638 = (char *)0x48d319;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 600) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d331;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d34a;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_STRING_EURO_MONEY_005aba78;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d366;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_STRING_EURO_MONEY_005aba78;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d38c;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x71;
  pcStack_638 = (char *)0x48d3a1;
  uVar4 = FUN_00485d50();
  *(undefined4 *)(in_ECX + 0x230) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d3b9;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d3d2;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_STRING_DAMAGE_TXT_005aba8c;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d3ee;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_STRING_DAMAGE_TXT_005aba8c;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d414;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x72;
  pcStack_638 = (char *)0x48d429;
  uVar4 = FUN_00485d50();
  *(undefined4 *)(in_ECX + 0x234) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d441;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d45a;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_DIRECTION_GOLEFT_005aba18;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d476;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_DIRECTION_GOLEFT_005aba18;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d49c;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x73;
  pcStack_638 = (char *)0x48d4b1;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x264) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d4c9;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d4e2;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_DIRECTION_GORIGHT_005aba30;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d4fe;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_DIRECTION_GORIGHT_005aba30;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d524;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x74;
  pcStack_638 = (char *)0x48d539;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x268) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d551;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d56a;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_DIRECTION_GOBOTH_005aba48;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d586;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_DIRECTION_GOBOTH_005aba48;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d5ac;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x75;
  pcStack_638 = (char *)0x48d5c1;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x26c) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d5d9;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d5f2;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_DIRECTION_GOZIGZAG_005aba60;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d60e;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_DIRECTION_GOZIGZAG_005aba60;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d634;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x76;
  pcStack_638 = (char *)0x48d649;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x270) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d661;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d674;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac128;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d693;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac128;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d6be;
    FUN_004029e0();
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac154;
  local_4._0_1_ = 0x77;
  pcStack_640 = (char *)0x48d6db;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4e6;
  local_4._0_1_ = 0x78;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x264),uVar4);
  local_4._0_1_ = 0x77;
  pcStack_638 = (char *)0x48d710;
  FUN_004028f0();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d722;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d735;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac16c;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d754;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac16c;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d77f;
    FUN_004029e0();
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac198;
  local_4._0_1_ = 0x79;
  pcStack_640 = (char *)0x48d79c;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4e7;
  local_4._0_1_ = 0x7a;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x268),uVar4);
  local_4._0_1_ = 0x79;
  pcStack_638 = (char *)0x48d7d1;
  FUN_004028f0();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d7e3;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d7f6;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac1b0;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d815;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac1b0;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d840;
    FUN_004029e0();
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac1dc;
  local_4._0_1_ = 0x7b;
  pcStack_640 = (char *)0x48d85d;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4e8;
  local_4._0_1_ = 0x7c;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x26c),uVar4);
  local_4._0_1_ = 0x7b;
  pcStack_638 = (char *)0x48d892;
  FUN_004028f0();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d8a4;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d8b7;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac1f4;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d8d6;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac1f4;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d901;
    FUN_004029e0();
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac220;
  local_4._0_1_ = 0x7d;
  pcStack_640 = (char *)0x48d91e;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4e9;
  local_4._0_1_ = 0x7e;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x270),uVar4);
  local_4._0_1_ = 0x7d;
  pcStack_638 = (char *)0x48d953;
  FUN_004028f0();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d965;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48d97e;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_RED_GLOW_005ab948;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48d99a;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_RED_GLOW_005ab948;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48d9c0;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x7f;
  pcStack_638 = (char *)0x48d9d5;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x364) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48d9ed;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48da06;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_RED_LED_005ab92c;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48da22;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_RED_LED_005ab92c;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48da48;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x80;
  pcStack_638 = (char *)0x48da5d;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x368) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48da75;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48da8e;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_COMMUNICATOR_RED_LUD_005ab964;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48daaa;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_COMMUNICATOR_RED_LUD_005ab964;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48dad0;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x81;
  pcStack_638 = (char *)0x48dae5;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x36c) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48dafd;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48db10;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac238;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48db2f;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac238;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48db5a;
    FUN_004029e0();
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac264;
  local_4._0_1_ = 0x82;
  pcStack_640 = (char *)0x48db77;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4ef;
  local_4._0_1_ = 0x83;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x364),uVar4);
  local_4._0_1_ = 0x82;
  pcStack_638 = (char *)0x48dbac;
  FUN_004028f0();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48dbbe;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48dbd1;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac27c;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48dbf0;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac27c;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48dc1b;
    FUN_004029e0();
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac2a8;
  local_4._0_1_ = 0x84;
  pcStack_640 = (char *)0x48dc38;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4f0;
  local_4._0_1_ = 0x85;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x368),uVar4);
  local_4._0_1_ = 0x84;
  pcStack_638 = (char *)0x48dc6d;
  FUN_004028f0();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48dc7f;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48dc92;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac2c0;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48dcb1;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac2c0;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48dcdc;
    FUN_004029e0();
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac2ec;
  local_4._0_1_ = 0x86;
  pcStack_640 = (char *)0x48dcf9;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4f1;
  local_4._0_1_ = 0x87;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x36c),uVar4);
  local_4._0_1_ = 0x86;
  pcStack_638 = (char *)0x48dd2e;
  FUN_004028f0();
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48dd40;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48dd59;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_RED_GLOW_005ab9e4;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48dd75;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_RED_GLOW_005ab9e4;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48dd9b;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x88;
  pcStack_638 = (char *)0x48ddb0;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x380) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48ddc8;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48dde1;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_RED_LED_005ab9cc;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48ddfd;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_RED_LED_005ab9cc;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48de23;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x89;
  pcStack_638 = (char *)0x48de38;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 900) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48de50;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48de69;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_RED_LUD_005aba00;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48de85;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_RED_LUD_005aba00;
    pcVar5 = pcStack_618;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcStack_638 = (char *)0x48deab;
    FUN_004029e0();
  }
  local_4._0_1_ = 0x8a;
  pcStack_638 = (char *)0x48dec0;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x388) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,0x3a);
  pcStack_638 = (char *)0x48ded8;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48deeb;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac304;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48df0a;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac304;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcStack_618 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcStack_618 = pcStack_618 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcStack_618 = *str1;
      str1 = str1 + 1;
      pcStack_618 = pcStack_618 + 1;
    }
    pcStack_638 = (char *)0x48df35;
    FUN_004029e0();
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac330;
  local_4._0_1_ = 0x8b;
  pcStack_640 = (char *)0x48df52;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4f7;
  local_4._0_1_ = 0x8c;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x380),uVar4);
  local_4._0_1_ = 0x8b;
  pcStack_638 = (char *)0x48df87;
  FUN_004028f0();
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48df99;
  FUN_004028f0();
  acStack_5f0[0] = local_61d;
  pcStack_638 = (char *)0x48dfac;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac348;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48dfcb;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac348;
    pcVar5 = pcStack_5ec;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac374;
  local_4._0_1_ = 0x8d;
  pcStack_640 = (char *)0x48e016;
  uVar4 = FUN_0049df90();
  pcStack_644 = acStack_5f0;
  pcStack_640 = (char *)0x4f8;
  local_4._0_1_ = 0x8e;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 900),uVar4);
  local_4._0_1_ = 0x8d;
  pcStack_638 = (char *)0x48e04b;
  FUN_004028f0();
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48e05d;
  FUN_004028f0();
  acStack_5f0[0] = local_61d;
  pcStack_638 = (char *)0x48e070;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac38c;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48e08f;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac38c;
    pcVar5 = pcStack_5ec;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac3b8;
  local_4._0_1_ = 0x8f;
  pcStack_640 = (char *)0x48e0da;
  uVar4 = FUN_0049df90();
  pcStack_644 = acStack_5f0;
  pcStack_640 = (char *)0x4f9;
  local_4._0_1_ = 0x90;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x388),uVar4);
  local_4._0_1_ = 0x8f;
  pcStack_638 = (char *)0x48e10f;
  FUN_004028f0();
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48e121;
  FUN_004028f0();
  acStack_5f0[0] = local_61d;
  pcStack_638 = (char *)0x48e13a;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_GRN_GLOW_005ab998;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48e156;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_GRN_GLOW_005ab998;
    pcVar5 = pcStack_5ec;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  local_4._0_1_ = 0x91;
  pcStack_638 = (char *)0x48e193;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x39c) = uVar4;
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48e1ab;
  FUN_004028f0();
  acStack_5f0[0] = local_61d;
  pcStack_638 = (char *)0x48e1c4;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_GRN_LED_005ab980;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48e1e0;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_GRN_LED_005ab980;
    pcVar5 = pcStack_5ec;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  local_4._0_1_ = 0x92;
  pcStack_638 = (char *)0x48e21d;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x3a0) = uVar4;
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48e235;
  FUN_004028f0();
  acStack_5f0[0] = local_61d;
  pcStack_638 = (char *)0x48e24e;
  FUN_004028f0();
  m = 0xffffffff;
  str1 = s_OVL_SPEEDOMETER_GRN_LUD_005ab9b4;
  do {
    if (m == 0) break;
    m = m - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  pcStack_638 = (char *)(~m - 1);
  pcStack_63c = (char *)0x48e26a;
  local_60c = pcStack_638;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    str1 = s_OVL_SPEEDOMETER_GRN_LUD_005ab9b4;
    pcVar5 = pcStack_5ec;
    for (m = (uint)local_60c >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = (uint)local_60c & 3; m != 0; m = m - 1) {
      *pcVar5 = *str1;
      str1 = str1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uStack_5e8 = (uint)local_60c;
    pcStack_5ec[(int)local_60c] = '\0';
  }
  local_4._0_1_ = 0x93;
  pcStack_638 = (char *)0x48e2a7;
  uVar4 = FUN_00484f60();
  *(undefined4 *)(in_ECX + 0x3a4) = uVar4;
  local_4._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48e2bf;
  FUN_004028f0();
  local_61c[0] = local_61d;
  pcStack_638 = (char *)0x48e2d2;
  FUN_004028f0();
  pcStack_638 = (char *)0x48e2dc;
  FUN_004901b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac3d0;
  pcStack_63c = (char *)0x48e2ee;
  FUN_00402940();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac3fc;
  local_4._0_1_ = 0x94;
  pcStack_640 = (char *)0x48e30c;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x4ff;
  local_4._0_1_ = 0x95;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x39c),uVar4);
  local_4._0_1_ = 0x94;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac414;
  pcStack_63c = (char *)0x48e362;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac440;
  local_4._0_1_ = 0x96;
  pcStack_640 = (char *)0x48e380;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x500;
  local_4._0_1_ = 0x97;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x3a0),uVar4);
  local_4._0_1_ = 0x96;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac458;
  pcStack_63c = (char *)0x48e3d6;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac484;
  local_4._0_1_ = 0x98;
  pcStack_640 = (char *)0x48e3f4;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x501;
  local_4._0_1_ = 0x99;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x3a4),uVar4);
  local_4._0_1_ = 0x98;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac49c;
  pcStack_63c = (char *)0x48e44a;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_String__s_not_found_005ac4c8;
  local_4._0_1_ = 0x9a;
  pcStack_640 = (char *)0x48e468;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x503;
  local_4._0_1_ = 0x9b;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x234),uVar4);
  local_4._0_1_ = 0x9a;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac4dc;
  pcStack_63c = (char *)0x48e4be;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_String__s_not_found_005ac508;
  local_4._0_1_ = 0x9c;
  pcStack_640 = (char *)0x48e4dc;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x504;
  local_4._0_1_ = 0x9d;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x230),uVar4);
  local_4._0_1_ = 0x9c;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac51c;
  pcStack_63c = (char *)0x48e532;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac548;
  local_4._0_1_ = 0x9e;
  pcStack_640 = (char *)0x48e550;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x505;
  local_4._0_1_ = 0x9f;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 600),uVar4);
  local_4._0_1_ = 0x9e;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac560;
  pcStack_63c = (char *)0x48e5a6;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Composite__s_not_found_005ac58c;
  local_4._0_1_ = 0xa0;
  pcStack_640 = (char *)0x48e5c4;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x506;
  local_4._0_1_ = 0xa1;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x2c),uVar4);
  local_4._0_1_ = 0xa0;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac5a4;
  pcStack_63c = (char *)0x48e617;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Composite__s_not_found_005ac5d0;
  local_4._0_1_ = 0xa2;
  pcStack_640 = (char *)0x48e635;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x507;
  local_4._0_1_ = 0xa3;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x28),uVar4);
  local_4._0_1_ = 0xa2;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac5e8;
  pcStack_63c = (char *)0x48e688;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_String__s_not_found_005ac614;
  local_4._0_1_ = 0xa4;
  pcStack_640 = (char *)0x48e6a6;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x508;
  local_4._0_1_ = 0xa5;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x220),uVar4);
  local_4._0_1_ = 0xa4;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac628;
  pcStack_63c = (char *)0x48e6fc;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_String__s_not_found_005ac654;
  local_4._0_1_ = 0xa6;
  pcStack_640 = (char *)0x48e71a;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x509;
  local_4._0_1_ = 0xa7;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x224),uVar4);
  local_4._0_1_ = 0xa6;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac668;
  pcStack_63c = (char *)0x48e770;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_String__s_not_found_005ac694;
  local_4._0_1_ = 0xa8;
  pcStack_640 = (char *)0x48e78e;
  uVar4 = FUN_0049df90();
  local_4._0_1_ = 0xa9;
  pcStack_640 = (char *)0x50a;
  pcStack_644 = local_61c;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x228),uVar4);
  local_4._0_1_ = 0xa8;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac6a8;
  pcStack_63c = (char *)0x48e7e4;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_String__s_not_found_005ac6d4;
  local_4._0_1_ = 0xaa;
  pcStack_640 = (char *)0x48e802;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x50b;
  local_4._0_1_ = 0xab;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x22c),uVar4);
  local_4._0_1_ = 0xaa;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac6e8;
  pcStack_63c = (char *)0x48e858;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac714;
  local_4._0_1_ = 0xac;
  pcStack_640 = (char *)0x48e876;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x50c;
  local_4._0_1_ = 0xad;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x244),uVar4);
  local_4._0_1_ = 0xac;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac72c;
  pcStack_63c = (char *)0x48e8cc;
  FUN_004900f0();
  local_4._0_1_ = 0xae;
  pcStack_638 = s_Element__s_not_found_005ac758;
  pcStack_63c = auStack_600;
  pcStack_640 = (char *)0x48e8ea;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x50d;
  local_4._0_1_ = 0xaf;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x23c),uVar4);
  local_4._0_1_ = 0xae;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac770;
  pcStack_63c = (char *)0x48e940;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac79c;
  local_4._0_1_ = 0xb0;
  pcStack_640 = (char *)0x48e95e;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x50e;
  local_4._0_1_ = 0xb1;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x240),uVar4);
  local_4._0_1_ = 0xb0;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  pcStack_638 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac7b4;
  pcStack_63c = (char *)0x48e9b4;
  FUN_004900f0();
  pcStack_63c = auStack_600;
  pcStack_638 = s_Element__s_not_found_005ac7e0;
  local_4._0_1_ = 0xb2;
  pcStack_640 = (char *)0x48e9d2;
  uVar4 = FUN_0049df90();
  pcStack_644 = local_61c;
  pcStack_640 = (char *)0x50f;
  local_4._0_1_ = 0xb3;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x254),uVar4);
  local_4._0_1_ = 0xb2;
  FUN_004900b0();
  local_4._0_1_ = 0x3a;
  FUN_004900b0();
  FUN_0048ee50();
  FUN_00489ac0();
  pcStack_638 = (char *)0x37;
  pcStack_63c = (char *)0x48ea2f;
  j = FUN_00458b90();
  pcStack_638 = &DAT_006fd14c + j * 0x100;
  pcStack_63c = (char *)0x48ea44;
  FUN_004900f0();
  local_4 = CONCAT31(local_4._1_3_,0xb4);
  pcStack_638 = (char *)0x48ea5c;
  (**(code **)(**(int **)(in_ECX + 0x234) + 0x48))();
  puStack_8._0_1_ = 0x3a;
  pcStack_638 = (char *)0x48ea6c;
  FUN_004900b0();
  pcStack_638 = (char *)0x4;
  pcStack_63c = (char *)0x1;
  pcStack_640 = (char *)0x48ea7b;
  FUN_0047cd70();
  pcStack_638 = (char *)0x4;
  pcStack_63c = (char *)0x1;
  pcStack_640 = (char *)0x48ea8a;
  FUN_0047cd70();
  pcStack_638 = (char *)0x4;
  pcStack_63c = (char *)0x1;
  pcStack_640 = (char *)0x48ea99;
  FUN_0047cd70();
  *(undefined4 *)(in_ECX + 0x3b8) = 0;
  *(undefined1 *)(in_ECX + 0x3c0) = 0;
  puStack_8._0_1_ = 0x32;
  pcStack_638 = (char *)0x48eabe;
  FUN_00499e40();
  puStack_8._0_1_ = 0x2b;
  pcStack_638 = (char *)0x48ead2;
  FUN_0049ba20();
  puStack_8._0_1_ = 0x24;
  pcStack_638 = (char *)0x48eae6;
  FUN_0049b3f0();
  puStack_8._0_1_ = 0x1c;
  pcStack_638 = (char *)0x48eafa;
  FUN_0049ba20();
  puStack_8._0_1_ = 0x14;
  pcStack_638 = (char *)0x48eb0e;
  FUN_00499e40();
  puStack_8._0_1_ = 0xc;
  pcStack_638 = (char *)0x48eb22;
  FUN_0049c5b0();
  puStack_8._0_1_ = 6;
  pcStack_638 = (char *)0x48eb36;
  FUN_00499e40();
  puStack_8._0_1_ = 5;
  pcStack_638 = (char *)0x48eb47;
  FUN_0042f620();
  puStack_8._0_1_ = 4;
  pcStack_638 = (char *)0x48eb5b;
  FUN_0049f4c0();
  puStack_8._0_1_ = 3;
  pcStack_638 = (char *)0x48eb6f;
  FUN_004900b0();
  puStack_8._0_1_ = 2;
  pcStack_638 = (char *)0x48eb83;
  FUN_004900b0();
  puStack_8._0_1_ = 1;
  pcStack_638 = (char *)0x48eb97;
  FUN_004900b0();
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  pcStack_638 = (char *)0x48ebab;
  FUN_004900b0();
  puStack_8 = (undefined1 *)0xffffffff;
  pcStack_638 = (char *)0x48ebbf;
  FUN_004900b0();
  ExceptionList = pvStack_10;
  return;
}


/* ==== 0048ebe0 FUN_0048ebe0 ==== */

void FUN_0048ebe0(undefined4 param_1,char *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iStack_34;
  int i;
  int iStack_28;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056dee4;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (1 < (int)param_3) {
    if (param_2 == (char *)0x0) {
      pcVar4 = "";
      ExceptionList = &pvStack_c;
    }
    else {
      ExceptionList = &pvStack_c;
      FUN_00471de0();
      pcVar4 = param_2;
    }
    if (*pcVar4 == '[') {
      if ((param_3 < param_3 - 1) || (param_2 == (char *)0x0)) {
        pcVar4 = "";
      }
      else {
        FUN_00471de0();
        pcVar4 = param_2 + (param_3 - 1);
      }
      if (*pcVar4 == ']') {
        i = 0;
        iVar5 = (*(code *)**(undefined4 **)(in_ECX + 0x2b8))();
        if (0 < iVar5) {
          iVar5 = 0;
          iStack_34 = 0;
          do {
            FUN_0049df90(auStack_1c,s___d__005ac7f8,i);
            local_4._0_1_ = 1;
            pcVar4 = param_2;
            if (param_2 == (char *)0x0) {
              pcVar4 = "";
            }
            iVar6 = FUN_0040fc80(0,uStack_14,pcVar4,param_3);
            if (iVar6 == 0) {
              iVar6 = *(int *)(*(int *)(in_ECX + 700) + 4);
              FUN_004028f0(0);
              FUN_004093c0(iVar5 + iVar6,0,0xffffffff);
              local_4._0_1_ = 2;
              iVar6 = *(int *)(*(int *)(in_ECX + 700) + 4);
              iVar3 = *(int *)(iVar5 + 0x10 + iVar6);
              if (iVar3 < 0x40) {
                *(undefined4 *)(iVar6 + 0x14 + (iVar3 + iStack_34) * 4) = param_5;
                piVar1 = (int *)(iVar5 + 0x10 + *(int *)(*(int *)(in_ECX + 700) + 4));
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
            iVar5 = iVar5 + 0x114;
            iVar6 = (*(code *)**(undefined4 **)(in_ECX + 0x2b8))();
          } while (i < iVar6);
        }
        goto LAB_0048edfb;
      }
    }
  }
  FUN_004c4150(s_ERROR___put_correct_category_val_005ac898,s_communi_ini_005ab824,
               s_C__Work_A2IV_Game_prog_Ovl_Commu_005ac86c,0x570);
LAB_0048edfb:
  if (param_2 != (char *)0x0) {
    cVar2 = param_2[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      param_2[-1] = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(param_2 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0048ee50 FUN_0048ee50 ==== */

void FUN_0048ee50(void)

{
  int in_ECX;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0048f0d0(local_30,local_18);
  FUN_0048f140(local_24,local_c);
  local_34 = 0x3f99999a;
  FUN_0049cb60(local_30,local_18,&local_34);
  local_34 = 0x3f99999a;
  FUN_0049cb60(local_24,local_c,&local_34);
  FUN_0049ca90();
  FUN_0049cb00();
  FUN_0048ef80(1);
  FUN_0048f040(1);
  FUN_0047bc50(local_30);
  FUN_0047bc50(local_24);
  *(undefined4 *)(in_ECX + 0x30) = 0x1000001;
  if (*(char *)(in_ECX + 0x1a) != '\0') {
    *(undefined4 *)(in_ECX + 0x34) = 3;
    return;
  }
  *(undefined4 *)(in_ECX + 0x34) = 0x1000001;
  return;
}


/* ==== 0048ef20 FUN_0048ef20 ==== */

void FUN_0048ef20(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_c [12];
  
  cVar1 = FUN_00489e70(in_ECX + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049c9e0(local_c);
    FUN_0047bc50(uVar2);
  }
  cVar1 = FUN_00489e70(in_ECX + 0x34);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049c9e0(local_c);
    FUN_0047bc50(uVar2);
  }
  return;
}


/* ==== 0048ef80 FUN_0048ef80 ==== */

void FUN_0048ef80(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x2c) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x220) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x224) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x228) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x22c) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x23c) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x234) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x240) + 0x20))(param_1);
  if (*(int **)(in_ECX + 0x250) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x250) + 0x20))(param_1);
  }
  if ((char)param_1 == '\0') {
    (**(code **)(**(int **)(in_ECX + 0x264) + 0x20))(0);
    (**(code **)(**(int **)(in_ECX + 0x268) + 0x20))(0);
    (**(code **)(**(int **)(in_ECX + 0x26c) + 0x20))(0);
    (**(code **)(**(int **)(in_ECX + 0x270) + 0x20))(0);
  }
  return;
}


/* ==== 0048f040 FUN_0048f040 ==== */

void FUN_0048f040(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x28) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x244) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x254) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 600) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x230) + 0x20))(param_1);
  return;
}


/* ==== 0048f090 FUN_0048f090 ==== */

void FUN_0048f090(undefined4 param_1)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x238) != (char)param_1) {
    (**(code **)(**(int **)(in_ECX + 0x23c) + 0x20))(param_1);
    (**(code **)(**(int **)(in_ECX + 0x240) + 0x20))(param_1);
    *(char *)(in_ECX + 0x238) = (char)param_1;
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

void FUN_0048f1b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int i;
  
  i = 0;
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x2b0))();
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x2b4) + 4) + i * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      i = i + 1;
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x2b4) + 4) + -4 + i * 4) = 0;
      iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x2b0))();
    } while (i < iVar2);
  }
  i = 0;
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x2a8))();
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x2ac) + 4) + i * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      i = i + 1;
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x2ac) + 4) + -4 + i * 4) = 0;
      iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x2a8))();
    } while (i < iVar2);
  }
  return;
}


/* ==== 0048f250 FUN_0048f250 ==== */

void FUN_0048f250(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int in_ECX;
  
  FUN_0048f380(*(undefined4 *)(in_ECX + 0x2c4),*(undefined4 *)(in_ECX + 0x2c8),
               *(undefined4 *)(in_ECX + 0x2cc));
  bVar2 = false;
  iVar3 = FUN_004c5e40(0x58);
  if (iVar3 != 0) {
    *(int *)(in_ECX + 0x3b8) = *(int *)(in_ECX + 0x3b8) + 1;
    iVar3 = (*(code *)**(undefined4 **)(in_ECX + 0x2a8))();
    if (iVar3 <= *(int *)(in_ECX + 0x3b8)) {
      *(undefined4 *)(in_ECX + 0x3b8) = 0;
    }
    bVar2 = true;
  }
  iVar3 = FUN_004c5e40(0x5a);
  if (iVar3 == 0) {
    if ((!bVar2) && (*(int *)(in_ECX + 0x360) != 0)) {
      return;
    }
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x3b8) + -1;
    *(int *)(in_ECX + 0x3b8) = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(code *)**(undefined4 **)(in_ECX + 0x2a8))();
      *(int *)(in_ECX + 0x3b8) = iVar3 + -1;
    }
  }
  FUN_0049dd50();
  iVar3 = FUN_0049d200();
  if (iVar3 != -1) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x3b8) * 4 + *(int *)(*(int *)(in_ECX + 0x2ac) + 4));
    iVar3 = FUN_0049dd70();
    FUN_00489ec0(uVar1,iVar3 + *(int *)(in_ECX + 0x260),0xffffffff);
    *(undefined4 *)(in_ECX + 0x2c4) = 0;
  }
  FUN_004899a0(*(undefined4 *)
                (*(int *)(*(int *)(in_ECX + 0x2ac) + 4) + *(int *)(in_ECX + 0x3b8) * 4));
  return;
}


/* ==== 0048f380 FUN_0048f380 ==== */

void FUN_0048f380(int param_1)

{
  char cVar1;
  int iVar2;
  int m;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  uint i;
  uint j;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int k;
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056def6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  local_4 = 0;
  FUN_004c5930(1,0x28,200,s_prev_<<__Z_X__>>_next_005ac8e8);
  if (param_1 == 0) {
    local_4 = 0xffffffff;
    FUN_004028f0(1);
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
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Geen_005ac904;
    pcVar8 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_18[i] = '\0';
  }
  k = 0;
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x2b8))();
  if (0 < iVar2) {
    param_1 = 0;
    do {
      m = 0;
      iVar6 = param_1 + *(int *)(*(int *)(in_ECX + 700) + 4);
      iVar2 = *(int *)(iVar6 + 0x10);
      if (0 < iVar2) {
        piVar7 = (int *)(iVar6 + 0x14);
        do {
          if (*piVar7 == *(int *)(in_ECX + 0x3b8)) {
            FUN_004093c0(*(int *)(*(int *)(in_ECX + 700) + 4) + k * 0x114,0,0xffffffff);
            goto LAB_0048f4d8;
          }
          m = m + 1;
          piVar7 = piVar7 + 1;
        } while (m < iVar2);
      }
      param_1 = param_1 + 0x114;
      k = k + 1;
      iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x2b8))();
    } while (k < iVar2);
  }
LAB_0048f4d8:
  iVar2 = FUN_0049dd90();
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c5930(1,0x14,0x14,s_Berichtnr___d____s___005ac90c,*(undefined4 *)(in_ECX + 0x3b8),puVar3);
  FUN_0049dd50();
  iVar2 = FUN_0049d210();
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c5930(1,0x14,0x28,s_Eigenaar___s_005ac92c,puVar3);
  iVar2 = FUN_0049dd80();
  FUN_004c5930(1,0x14,0x3c,s_Tijd_in_beeld___d_s_005ac944,iVar2 / 1000);
  iVar2 = FUN_0049dd70();
  FUN_004c5930(1,0x14,0x50,s_Tijd_in_lijst___d_s_005ac95c,iVar2 / 1000);
  pcVar4 = local_18;
  if (local_18 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004c5930(1,0x14,100,s_Categorie___s_005ac974,pcVar4);
  uVar5 = FUN_0049dd60();
  FUN_0049dd50(uVar5);
  uVar5 = FUN_0049d200();
  FUN_004c5930(1,0x14,0x78,s_Prioriteit___d__d_005ac98c,uVar5);
  iVar2 = FUN_0049df20();
  if (iVar2 == -1) {
    FUN_004c5930(1,0x14,0xa0,s_Sample__Geen_005ac9a4);
  }
  else {
    uVar5 = FUN_0049df20();
    FUN_004c5930(1,0x14,0xa0,s_Sample___d_005ac9bc,uVar5);
  }
  uVar5 = FUN_0049df30();
  switch(uVar5) {
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

void FUN_0048f720(void)

{
  char cVar1;
  char *pcVar2;
  int i;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint j;
  uint k;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056df08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0();
  i = *(int *)(in_ECX + 0x34);
  local_4 = 0;
  pcVar2 = local_18;
  if (i < 0x1000002) {
    if (i == 0x1000001) {
      j = 0xffffffff;
      pcVar6 = s_BUSY_INIT_005acac4;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 != '\0') {
        pcVar6 = s_BUSY_INIT_005acac4;
LAB_0048f8be:
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar2 = pcVar2 + 4;
        }
LAB_0048f8cb:
        for (j = j & 3; j != 0; j = j - 1) {
          *pcVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar2 = pcVar2 + 1;
        }
        FUN_004029e0();
      }
    }
    else if (i == 1) {
      j = 0xffffffff;
      pcVar6 = s_STATE_INIT_005acab8;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 != '\0') {
        pcVar6 = s_STATE_INIT_005acab8;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar2 = pcVar2 + 4;
        }
        goto LAB_0048f8cb;
      }
    }
    else if (i == 2) {
      j = 0xffffffff;
      pcVar6 = s_STATE_ONSCREEN_005acad0;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 != '\0') {
        pcVar6 = s_STATE_ONSCREEN_005acad0;
        goto LAB_0048f8be;
      }
    }
    else if (i == 3) {
      j = 0xffffffff;
      pcVar6 = s_STATE_OFFSCREEN_005acaf0;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 != '\0') {
        pcVar6 = s_STATE_OFFSCREEN_005acaf0;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar2 = pcVar2 + 4;
        }
        goto LAB_0048f8cb;
      }
    }
  }
  else if (i == 0x1000002) {
    j = 0xffffffff;
    pcVar6 = s_BUSY_ONSCREEN_005acae0;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(j,1);
    if (cVar1 != '\0') {
      pcVar6 = s_BUSY_ONSCREEN_005acae0;
      goto LAB_0048f8be;
    }
  }
  else if (i == 0x1000003) {
    j = 0xffffffff;
    pcVar6 = s_BUSY_OFFSCREEN_005acb00;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(j,1);
    if (cVar1 != '\0') {
      pcVar6 = s_BUSY_OFFSCREEN_005acb00;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar2 = pcVar2 + 4;
      }
      goto LAB_0048f8cb;
    }
  }
  pcVar2 = local_18;
  if (local_18 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c5930(1,0x28,0xfa,pcVar2);
  i = *(int *)(in_ECX + 0x30);
  pcVar2 = local_18;
  if (i < 0x1000002) {
    if (i == 0x1000001) {
      j = 0xffffffff;
      pcVar6 = s_BUSY_INIT_005acb1c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 == '\0') goto LAB_0048fa7a;
      pcVar6 = s_BUSY_INIT_005acb1c;
      goto LAB_0048fa5e;
    }
    if (i == 1) {
      j = 0xffffffff;
      pcVar6 = s_STATE_INIT_005acb10;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 == '\0') goto LAB_0048fa7a;
      pcVar6 = s_STATE_INIT_005acb10;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar2 = pcVar2 + 4;
      }
    }
    else {
      if (i == 2) {
        j = 0xffffffff;
        pcVar6 = s_STATE_ONSCREEN_005acb28;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        j = ~j - 1;
        cVar1 = FUN_00402a00(j,1);
        if (cVar1 == '\0') goto LAB_0048fa7a;
        pcVar6 = s_STATE_ONSCREEN_005acb28;
        goto LAB_0048fa5e;
      }
      if (i != 3) goto LAB_0048fa7a;
      j = 0xffffffff;
      pcVar6 = s_STATE_OFFSCREEN_005acb48;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 == '\0') goto LAB_0048fa7a;
      pcVar6 = s_STATE_OFFSCREEN_005acb48;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar2 = pcVar2 + 4;
      }
    }
  }
  else {
    if (i != 0x1000002) {
      if (i != 0x1000003) goto LAB_0048fa7a;
      j = 0xffffffff;
      pcVar6 = s_BUSY_OFFSCREEN_005acb58;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 == '\0') goto LAB_0048fa7a;
      pcVar6 = s_BUSY_OFFSCREEN_005acb58;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar2 = pcVar2 + 4;
      }
      goto LAB_0048fa6b;
    }
    j = 0xffffffff;
    pcVar6 = s_BUSY_ONSCREEN_005acb38;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(j,1);
    if (cVar1 == '\0') goto LAB_0048fa7a;
    pcVar6 = s_BUSY_ONSCREEN_005acb38;
LAB_0048fa5e:
    for (k = j >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
  }
LAB_0048fa6b:
  for (j = j & 3; j != 0; j = j - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_004029e0();
LAB_0048fa7a:
  pcVar2 = local_18;
  if (local_18 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c5930(1,0x1b8,0xfa,pcVar2);
  i = *(int *)(in_ECX + 0x20);
  if (i != -1) {
    i = (i - *(int *)(in_ECX + 0x260)) / 1000;
  }
  FUN_004c5930(1,400,0xdc,s__d___d__005acb68,i,*(int *)(in_ECX + 0x1c) / 1000);
  FUN_004c5930(1,0x1e0,0xa0,s_CopAlert__d__d_005acb70,*(undefined4 *)(in_ECX + 0x374),
               *(undefined4 *)(in_ECX + 0x378));
  FUN_004c5930(1,0x1e0,0xb4,s_DamageAlert__d_005acb80,*(undefined4 *)(in_ECX + 0x390));
  FUN_004c5930(1,0x1e0,200,s_TurboAlert__f_005acb90,(double)*(float *)(in_ECX + 0x24c));
  if (*(int *)(in_ECX + 0x2c4) != 0) {
    i = FUN_0049dd90();
    puVar7 = *(undefined1 **)(i + 4);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0057629c;
    }
    FUN_004c5930(1,10,0xf,s_SHOW__ID__s___Time__d__005acba0,puVar7,
                 (*(int *)(in_ECX + 0x2c8) - *(int *)(in_ECX + 0x260)) / 1000);
  }
  i = 0;
  if (0 < *(int *)(in_ECX + 0x360)) {
    iVar5 = 0x28;
    iVar8 = in_ECX + 0x2d0;
    do {
      iVar3 = FUN_0049dd90();
      puVar7 = *(undefined1 **)(iVar3 + 4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0057629c;
      }
      uVar4 = FUN_0049dd60((*(int *)(iVar8 + 4) - *(int *)(in_ECX + 0x260)) / 1000,puVar7);
      FUN_0049dd50(uVar4);
      uVar4 = FUN_0049d200();
      FUN_004c5930(1,10,iVar5,s__2d__Prio__d__d__Time__d__ID__s__005acbc0,i,uVar4);
      i = i + 1;
      iVar5 = iVar5 + 0x14;
      iVar8 = iVar8 + 0xc;
    } while (i < *(int *)(in_ECX + 0x360));
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

void FUN_0048fc90(void)

{
  char cVar1;
  int i;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
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
  undefined4 local_a4 [2];
  int local_9c;
  undefined1 auStack_90 [12];
  undefined1 local_84 [120];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056df28;
  local_c = ExceptionList;
  if (0 < *(int *)(in_ECX + 0x2c0)) {
    if (*(int *)(in_ECX + 0x3c4) == 0) {
      ExceptionList = &local_c;
      FUN_0049c910();
      local_4 = 0;
      local_cc = 0.3;
      local_c8 = 2.0 / (float)*(int *)(in_ECX + 0x2c0);
      if (*(int *)(in_ECX + 0x34) != 3) {
        FUN_0048f0d0(&local_b4,&local_c4);
        local_a4[0] = 0x40400000;
        FUN_0049cb60(&local_c4,&local_b4,local_a4);
        FUN_0048f140(&local_b4,&local_c4);
        local_a8 = 0x40400000;
        FUN_0049cb60(&local_c4,&local_b4,&local_a8);
        *(undefined4 *)(in_ECX + 0x34) = 0x1000002;
        *(undefined4 *)(in_ECX + 0x30) = 0x1000002;
        if (*(int **)(in_ECX + 0x250) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0x250) + 0x20))(0);
          *(undefined4 *)(in_ECX + 0x250) = 0;
        }
      }
      i = 0;
      local_c4 = 0xc0000000;
      local_bc = 0;
      local_b4 = 0xbecccccd;
      local_ac = 0;
      local_c0 = 0.3;
      local_b0 = 0.3;
      if (0 < *(int *)(in_ECX + 0x2c0)) {
        do {
          FUN_0049cb60(&local_c4,&local_b4,&local_cc);
          FUN_00490a20(*(undefined4 *)(*(int *)(in_ECX + 0x3cc) + 8),local_84);
          local_c0 = local_c0 - local_c8;
          i = i + 1;
          local_b0 = local_b0 - local_c8;
          local_cc = local_cc + 0.5;
        } while (i < *(int *)(in_ECX + 0x2c0));
      }
      *(undefined4 *)(in_ECX + 0x3c4) = 1;
      local_4 = 0xffffffff;
      FUN_0049c920();
    }
    else if (*(int *)(in_ECX + 0x3c4) == 1) {
      ExceptionList = &local_c;
      FUN_004028f0(0);
      local_4 = 1;
      if (*(int *)(in_ECX + 0x34) == 3) {
        if (*(int *)(in_ECX + 0x30) == 3) {
          i = (*(code *)**(undefined4 **)(in_ECX + 0x2b0))();
          j = 0;
          fVar5 = (float)(i + -1);
          local_c8 = -NAN;
          local_cc = fVar5;
          if (0 < (int)fVar5) {
            do {
              cVar1 = FUN_0049d240();
              if (cVar1 != '\0') {
                uVar2 = FUN_0049d210();
                FUN_004093c0(uVar2,0,0xffffffff);
                piVar3 = (int *)FUN_0049d230();
                (**(code **)(*piVar3 + 0x28))(&local_c8);
                i = FUN_0049ca80();
                fVar5 = local_cc;
                if (i != 1) {
                  puVar4 = (undefined4 *)FUN_0049c9e0(auStack_90);
                  local_c4 = *puVar4;
                  local_c0 = (float)puVar4[1];
                  local_bc = puVar4[2];
                  FUN_0047bc50(&local_c4);
                  (**(code **)(*piVar3 + 0x20))(1);
                  fVar5 = local_cc;
                }
              }
              j = j + 1;
            } while (j < (int)fVar5);
          }
          *(undefined4 *)(in_ECX + 0x3c4) = 2;
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
        FUN_004028f0(1);
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


