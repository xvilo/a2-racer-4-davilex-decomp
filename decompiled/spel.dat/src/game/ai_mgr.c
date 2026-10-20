/* spel.dat — game/ai_mgr.cpp: 39 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0040e8c0 FUN_0040e8c0 ==== */

void FUN_0040e8c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0040e8d0 FUN_0040e8d0 ==== */

void FUN_0040e8d0(void)

{
  FUN_005584e0(&LAB_0040e8e0);
  return;
}


/* ==== 0040e900 FUN_0040e900 ==== */

void FUN_0040e900(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0040e910 FUN_0040e910 ==== */

void FUN_0040e910(void)

{
  FUN_005584e0(&LAB_0040e920);
  return;
}


/* ==== 0040e940 FUN_0040e940 ==== */

void FUN_0040e940(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0040e950 FUN_0040e950 ==== */

void FUN_0040e950(void)

{
  FUN_005584e0(&LAB_0040e960);
  return;
}


/* ==== 0040e980 FUN_0040e980 ==== */

void FUN_0040e980(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0040e990 FUN_0040e990 ==== */

void FUN_0040e990(void)

{
  FUN_005584e0(&LAB_0040e9a0);
  return;
}


/* ==== 0040e9b0 FUN_0040e9b0 ==== */

void FUN_0040e9b0(void)

{
  undefined1 *operator_new_result;
  undefined1 *in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005698d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[4] = local_11;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0;
  *(undefined ***)(in_ECX + 0x14) = &PTR_LAB_005763e8;
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
  *(undefined1 **)(in_ECX + 0x18) = operator_new_result;
  local_4._0_1_ = 1;
  *(undefined ***)(in_ECX + 0x1c) = &PTR_LAB_005763d8;
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
  *(undefined1 **)(in_ECX + 0x20) = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)(in_ECX + 0x24) = &PTR_LAB_005763c8;
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
  *(undefined1 **)(in_ECX + 0x28) = operator_new_result;
  *in_ECX = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 0040ea90 FUN_0040ea90 ==== */

void FUN_0040ea90(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_005698fc;
  iVar2 = *(int *)(in_ECX + 0x28);
  local_4 = 2;
  ExceptionList = &local_c;
  *(undefined ***)(in_ECX + 0x24) = &PTR_LAB_005763c8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    for (iVar4 = *(int *)(iVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0x54) {
      FUN_00411300(0);
    }
    FUN_0054b339(*(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  iVar2 = *(int *)(in_ECX + 0x20);
  local_4._0_1_ = 1;
  *(undefined ***)(in_ECX + 0x1c) = &PTR_LAB_005763d8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    for (iVar4 = *(int *)(iVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0x14) {
      FUN_004112e0(0);
    }
    FUN_0054b339(*(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  iVar2 = *(int *)(in_ECX + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(in_ECX + 0x14) = &PTR_LAB_005763e8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    for (iVar4 = *(int *)(iVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0x30) {
      FUN_004112c0(0);
    }
    FUN_0054b339(*(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
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


/* ==== 0040ebe0 FUN_0040ebe0 ==== */

int FUN_0040ebe0(void)

{
  void *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569911;
  local_c = ExceptionList;
  if (DAT_005d1b0c == 0) {
    ExceptionList = &local_c;
    operator_new_result = operator_new(0x2c);
    local_4 = 0;
    if (operator_new_result == (void *)0x0) {
      DAT_005d1b0c = 0;
    }
    else {
      DAT_005d1b0c = FUN_0040e9b0(operator_new_result);
    }
    local_4 = 0xffffffff;
    if (DAT_005d1b0c == 0) {
      FUN_004c4150(s__s__d____Cannot_create_AI_manage_005923c8,
                   s_C__Work_A2IV_Game_prog_ai_mgr_cp_005923a4,0x2b);
    }
  }
  ExceptionList = local_c;
  return DAT_005d1b0c;
}


/* ==== 0040ec60 FUN_0040ec60 ==== */

/* WARNING: Removing unreachable block (ram,0x0040ecff) */

undefined4 FUN_0040ec60(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *in_ECX;
  uint i;
  uint j;
  char *pcVar4;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569923;
  local_c = ExceptionList;
  if (*in_ECX == '\0') {
    *in_ECX = '\x01';
    return 0;
  }
  i = 0xffffffff;
  pcVar3 = s_AI_manager_already_initialized_005923f4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_AI_manager_already_initialized_005923f4;
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
  local_4 = 0;
  iVar2 = FUN_0040ebe0();
  i = local_14;
  if ((undefined1 *)(iVar2 + 4) == local_1c) {
    FUN_0040f800(local_14,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (local_14 != 0) {
      pcVar3 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar3 = "";
      }
      if ((byte)pcVar3[-1] < 0xfe) {
        FUN_004028f0(1);
        pcVar3 = local_18;
        if (local_18 == (char *)0x0) {
          pcVar3 = "";
        }
        *(char **)(iVar2 + 8) = pcVar3;
        *(uint *)(iVar2 + 0xc) = local_14;
        *(undefined4 *)(iVar2 + 0x10) = local_10;
        pcVar3[-1] = pcVar3[-1] + '\x01';
        goto LAB_0040eda4;
      }
    }
    cVar1 = FUN_00402a00(local_14,1);
    if (cVar1 != '\0') {
      pcVar3 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar3 = "";
      }
      pcVar4 = *(char **)(iVar2 + 8);
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
      FUN_004029e0(i);
    }
  }
LAB_0040eda4:
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return 1;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return 1;
}


/* ==== 0040ee10 FUN_0040ee10 ==== */

void FUN_0040ee10(void)

{
  int iVar1;
  undefined1 *in_ECX;
  
  iVar1 = DAT_005d1b0c;
  if (DAT_005d1b0c != 0) {
    FUN_0040ea90();
    FUN_0054b339(iVar1);
    DAT_005d1b0c = 0;
  }
  *in_ECX = 0;
  return;
}


/* ==== 0040eed0 FUN_0040eed0 ==== */

int FUN_0040eed0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int i;
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569935;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00416970();
  iVar2 = 0;
  local_4 = 0;
  i = 0;
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x14))();
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + *(int *)(*(int *)(in_ECX + 0x18) + 4)) == '\0') {
        local_4 = 0xffffffff;
        *(undefined1 *)(i * 0x30 + *(int *)(*(int *)(in_ECX + 0x18) + 4)) = 1;
        FUN_00416ad0();
        ExceptionList = pvStack_c;
        return i;
      }
      i = i + 1;
      iVar2 = iVar2 + 0x30;
      iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x14))();
    } while (i < iVar1);
  }
  local_3c[0] = 1;
  FUN_00410190(*(undefined4 *)(*(int *)(in_ECX + 0x18) + 8),1,local_3c);
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x14))();
  local_4 = 0xffffffff;
  FUN_00416ad0();
  ExceptionList = pvStack_c;
  return iVar1 + -1;
}


/* ==== 0040f000 FUN_0040f000 ==== */

void FUN_0040f000(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int in_ECX;
  uint j;
  int i;
  char *pcVar7;
  int k;
  undefined1 local_f8 [4];
  undefined1 *puStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [4];
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [4];
  int iStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [4];
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [56];
  undefined1 local_60 [84];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005699de;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00401000();
  local_4 = 0;
  FUN_00401280();
  local_4._0_1_ = 1;
  FUN_004028f0(0);
  local_4._0_1_ = 2;
  FUN_004028f0(0);
  local_4._0_1_ = 3;
  FUN_004028f0(0);
  local_4._0_1_ = 4;
  FUN_004028f0(0);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004489a0(s_BEHAVIOR_INI_00592444,s_AI_Behavior_Settings_0059242c);
  iVar2 = FUN_00448c90(s_AI_Behavior_Settings_00592454);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar3);
  iVar2 = FUN_004c3cd0(s_Agent_Types_0059218c,s_Count_005921bc);
  i = 0;
  if (0 < iVar2) {
    do {
      uVar4 = FUN_0049df90(local_98,s__d_0059246c,i);
      local_4._0_1_ = 6;
      FUN_004093c0(uVar4,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(1);
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar7 = s_Agent_Types_0059218c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_Agent_Types_0059218c,~j - 1);
      local_4._0_1_ = 7;
      uVar4 = FUN_004877e0(local_a8,local_c8,local_e8);
      local_4._0_1_ = 8;
      FUN_004093c0(uVar4,0,0xffffffff);
      local_4._0_1_ = 7;
      FUN_004028f0(1);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004028f0(1);
      j = 0xffffffff;
      pcVar7 = &DAT_005d1b10;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_0040fc80(0,local_d0,&DAT_005d1b10,~j - 1);
      if (iVar5 == 0) {
        FUN_004c4150(s__s__d____No_agent_type_name_foun_00592494,
                     s_C__Work_A2IV_Game_prog_ai_mgr_cp_00592470,0x123,i);
      }
      uVar4 = FUN_00401110(local_d8);
      local_4._0_1_ = 9;
      FUN_0040fcf0(*(undefined4 *)(*(int *)(in_ECX + 0x20) + 8),uVar4);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_00401240();
      i = i + 1;
    } while (i < iVar2);
  }
  iVar2 = FUN_004c3cd0(s_Behaviors_00592198,s_Count_005921bc);
  i = 0;
  if (0 < iVar2) {
    do {
      uVar4 = FUN_0049df90(local_a8,s__d_005924c4,i);
      local_4._0_1_ = 10;
      FUN_004093c0(uVar4,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(1);
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar7 = s_Behaviors_00592198;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_Behaviors_00592198,~j - 1);
      local_4._0_1_ = 0xb;
      uVar4 = FUN_004877e0(local_98,local_c8,local_e8);
      local_4._0_1_ = 0xc;
      FUN_004093c0(uVar4,0,0xffffffff);
      local_4._0_1_ = 0xb;
      FUN_004028f0(1);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004028f0(1);
      j = 0xffffffff;
      pcVar7 = &DAT_005d1b14;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_0040fc80(0,uStack_f0,&DAT_005d1b14,~j - 1);
      if (iVar5 == 0) {
        FUN_004c4150(s__s__d____No_behavior_name_found_f_005924ec,
                     s_C__Work_A2IV_Game_prog_ai_mgr_cp_005924c8,0x133,i);
      }
      if (i == 0) {
        j = 0xffffffff;
        pcVar7 = s_Default_0059251c;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar5 = FUN_0040fc80(0,uStack_f0,s_Default_0059251c,~j - 1);
        if (iVar5 != 0) {
          FUN_004c4150(s__s__d____Behavior__Default__must_00592548,
                       s_C__Work_A2IV_Game_prog_ai_mgr_cp_00592524,0x13d);
        }
      }
      iVar5 = FUN_0040f760(local_f8);
      if (iVar5 != -1) {
        puVar3 = puStack_f4;
        if (puStack_f4 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        FUN_004c4150(s__s__d____Behavior___s__already_d_005925a4,
                     s_C__Work_A2IV_Game_prog_ai_mgr_cp_00592580,0x147,puVar3,iVar5);
      }
      FUN_004093c0(local_f8,0,0xffffffff);
      if (i < 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 4);
      }
      FUN_004013f0(uVar4);
      FUN_0040ff30(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 8),local_60);
      i = i + 1;
    } while (i < iVar2);
  }
  uVar4 = FUN_0049df90(local_a8,s_Track__d_Behaviors_005921a4,DAT_006fb898);
  local_4._0_1_ = 0xd;
  FUN_004093c0(uVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004028f0(1);
  k = 0;
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x1c))();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar4 = FUN_004877e0(local_a8,local_b8,*(int *)(*(int *)(in_ECX + 0x20) + 4) + iVar2);
      local_4._0_1_ = 0xe;
      FUN_004093c0(uVar4,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004028f0(1);
      j = 0xffffffff;
      pcVar7 = &DAT_005d1b18;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      i = FUN_0040fc80(0,uStack_f0,&DAT_005d1b18,~j - 1);
      if (i != 0) {
        i = FUN_0040f760(local_f8);
        if (i == -1) {
          puVar3 = puStack_f4;
          if (puStack_f4 == (undefined1 *)0x0) {
            puVar3 = &DAT_0057629c;
          }
          puVar6 = *(undefined1 **)(iVar2 + 4 + *(int *)(*(int *)(in_ECX + 0x20) + 4));
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0057629c;
          }
          FUN_004c4150(s__s__d____Track__d__agent_type____005925fc,
                       s_C__Work_A2IV_Game_prog_ai_mgr_cp_005925d8,0x15e,DAT_006fb898,puVar6,puVar3)
          ;
        }
        *(int *)(iVar2 + 0x10 + *(int *)(*(int *)(in_ECX + 0x20) + 4)) = i;
      }
      k = k + 1;
      iVar2 = iVar2 + 0x14;
      i = (*(code *)**(undefined4 **)(in_ECX + 0x1c))();
    } while (k < i);
  }
  if (puStack_f4 != (undefined1 *)0x0) {
    cVar1 = puStack_f4[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(puStack_f4 + -1);
    }
    else {
      puStack_f4[-1] = cVar1 + -1;
    }
  }
  puStack_f4 = (undefined1 *)0x0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (iStack_d4 != 0) {
    cVar1 = *(char *)(iStack_d4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_d4 + -1));
    }
    else {
      *(char *)(iStack_d4 + -1) = cVar1 + -1;
    }
  }
  iStack_d4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  if (iStack_e4 != 0) {
    cVar1 = *(char *)(iStack_e4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_e4 + -1));
    }
    else {
      *(char *)(iStack_e4 + -1) = cVar1 + -1;
    }
  }
  iStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (iStack_b4 != 0) {
    cVar1 = *(char *)(iStack_b4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_b4 + -1));
    }
    else {
      *(char *)(iStack_b4 + -1) = cVar1 + -1;
    }
  }
  iStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004013b0();
  local_4 = 0xffffffff;
  FUN_00401240();
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0040f6f0 FUN_0040f6f0 ==== */

int FUN_0040f6f0(int param_1)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  int in_ECX;
  char *_Str2;
  int i;
  
  i = 0;
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x1c))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(in_ECX + 0x20) + 4) + iVar1 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) {
        return i;
      }
      i = i + 1;
      iVar1 = iVar1 + 0x14;
      iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x1c))();
    } while (i < iVar2);
  }
  return -1;
}


/* ==== 0040f760 FUN_0040f760 ==== */

int FUN_0040f760(int param_1)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  int in_ECX;
  char *_Str2;
  int i;
  
  i = 0;
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x24))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(in_ECX + 0x28) + 4) + iVar1 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) {
        return i;
      }
      i = i + 1;
      iVar1 = iVar1 + 0x54;
      iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x24))();
    } while (i < iVar2);
  }
  return -1;
}


/* ==== 0040f800 FUN_0040f800 ==== */

void FUN_0040f800(uint param_1,uint param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int in_ECX;
  uint i;
  uint j;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(uint *)(in_ECX + 8) < param_1) {
    FUN_0054b29c();
  }
  pcVar4 = *(char **)(in_ECX + 4);
  if (((pcVar4 != (char *)0x0) && (cVar2 = pcVar4[-1], cVar2 != '\0')) && (cVar2 != -1)) {
    pcVar4[-1] = cVar2 + -1;
    i = 0xffffffff;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    pcVar5 = pcVar4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(i,1);
    if (cVar2 != '\0') {
      pcVar5 = *(char **)(in_ECX + 4);
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
      FUN_004029e0(i);
    }
  }
  i = *(int *)(in_ECX + 8) - param_1;
  if (i < param_2) {
    param_2 = i;
  }
  if (param_2 == 0) {
    return;
  }
  iVar3 = *(int *)(in_ECX + 4) + param_1;
  FUN_005580e0(iVar3,iVar3 + param_2,i - param_2);
  param_2 = *(int *)(in_ECX + 8) - param_2;
  if (0xfffffffd < param_2) {
    FUN_0054b1b4();
  }
  puVar1 = *(undefined1 **)(in_ECX + 4);
  if (((puVar1 == (undefined1 *)0x0) || (cVar2 = puVar1[-1], cVar2 == '\0')) || (cVar2 == -1)) {
    if (param_2 == 0) {
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      *(undefined4 *)(in_ECX + 8) = 0;
      *puVar1 = 0;
      return;
    }
    if (param_2 <= *(uint *)(in_ECX + 0xc)) goto LAB_0040f904;
  }
  else if (param_2 == 0) {
    puVar1[-1] = cVar2 + -1;
    FUN_004028f0(0);
    return;
  }
  FUN_00402b20(param_2);
LAB_0040f904:
  *(uint *)(in_ECX + 8) = param_2;
  *(undefined1 *)(param_2 + *(int *)(in_ECX + 4)) = 0;
  return;
}


/* ==== 0040f920 FUN_0040f920 ==== */

void FUN_0040f920(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_005763e8;
  if (iVar1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (iVar3 = *(int *)(iVar1 + 4); iVar3 != iVar2; iVar3 = iVar3 + 0x30) {
    FUN_00416ad0();
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  in_ECX[1] = 0;
  return;
}


/* ==== 0040f9b0 FUN_0040f9b0 ==== */

int FUN_0040f9b0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x30;
}


/* ==== 0040fa50 FUN_0040fa50 ==== */

void FUN_0040fa50(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_005763d8;
  if (iVar1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (iVar3 = *(int *)(iVar1 + 4); iVar3 != iVar2; iVar3 = iVar3 + 0x14) {
    FUN_00401240();
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  in_ECX[1] = 0;
  return;
}


/* ==== 0040fae0 FUN_0040fae0 ==== */

int FUN_0040fae0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x14;
}


/* ==== 0040fb90 FUN_0040fb90 ==== */

int FUN_0040fb90(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x54;
}


/* ==== 0040fc80 FUN_0040fc80 ==== */

uint FUN_0040fc80(uint param_1,uint param_2,byte *param_3,uint param_4)

{
  uint i;
  uint uVar1;
  int in_ECX;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(uint *)(in_ECX + 8) < param_1) {
    FUN_0054b29c();
  }
  i = *(int *)(in_ECX + 8) - param_1;
  if (i < param_2) {
    param_2 = i;
  }
  i = param_2;
  if (param_4 <= param_2) {
    i = param_4;
  }
  if (*(int *)(in_ECX + 4) == 0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    pbVar2 = (byte *)(*(int *)(in_ECX + 4) + param_1);
  }
  bVar3 = false;
  uVar1 = 0;
  bVar4 = true;
  do {
    if (i == 0) break;
    i = i - 1;
    bVar3 = *pbVar2 < *param_3;
    bVar4 = *pbVar2 == *param_3;
    pbVar2 = pbVar2 + 1;
    param_3 = param_3 + 1;
  } while (bVar4);
  if (!bVar4) {
    uVar1 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
  }
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_2 != param_4);
  }
  return uVar1;
}


/* ==== 0040fcf0 FUN_0040fcf0 ==== */

int FUN_0040fcf0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *operator_new_result;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar4 = *(int *)(in_ECX + 8);
  iVar3 = *(int *)(in_ECX + 0xc) - iVar4;
  iVar2 = iVar3 >> 0x1f;
  if (iVar3 / 0x14 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar5 = (iVar4 - iVar1) / 0x14, uVar5 < 2)) {
      uVar5 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar1) / 0x14;
    }
    iVar4 = iVar4 + uVar5;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    operator_new_result = operator_new(iVar2 * 0x14);
    pvVar6 = operator_new_result;
    for (iVar2 = *(int *)(in_ECX + 4); iVar2 != param_1; iVar2 = iVar2 + 0x14) {
      FUN_00410e30(pvVar6,iVar2);
      pvVar6 = (void *)((int)pvVar6 + 0x14);
    }
    FUN_00410e30(pvVar6,param_2);
    FUN_004104f0(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar6 + 0x14);
    FUN_0040ff00(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_0054b339(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)operator_new_result + iVar4 * 0x14);
    iVar4 = FUN_0040fed0();
    *(void **)(in_ECX + 4) = operator_new_result;
    *(void **)(in_ECX + 8) = (void *)((int)operator_new_result + (iVar4 + 1) * 0x14);
  }
  else {
    iVar2 = iVar4 - param_1 >> 0x1f;
    if ((iVar4 - param_1) / 0x14 + iVar2 == iVar2) {
      FUN_004104f0(param_1,iVar4,param_1 + 0x14);
      FUN_00410530(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - param_1) / 0x14,param_2);
      FUN_004105d0(param_1,*(undefined4 *)(in_ECX + 8),param_2);
    }
    else {
      FUN_004104f0(iVar4 + -0x14,iVar4,iVar4);
      FUN_00410720(param_1,*(int *)(in_ECX + 8) + -0x14,*(int *)(in_ECX + 8));
      FUN_004105d0(param_1,param_1 + 0x14,param_2);
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0x14;
  }
  return *(int *)(in_ECX + 4) + ((param_1 - iVar1) / 0x14) * 0x14;
}


/* ==== 0040fed0 FUN_0040fed0 ==== */

int FUN_0040fed0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x14;
}


/* ==== 0040ff00 FUN_0040ff00 ==== */

void FUN_0040ff00(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_00401240();
  }
  return;
}


/* ==== 0040ff30 FUN_0040ff30 ==== */

int FUN_0040ff30(int param_1,undefined4 param_2)

{
  int iVar1;
  void *operator_new_result;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar4 = *(int *)(in_ECX + 8);
  iVar3 = *(int *)(in_ECX + 0xc) - iVar4;
  iVar2 = iVar3 >> 0x1f;
  if (iVar3 / 0x54 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar6 = (iVar4 - iVar1) / 0x54, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar1) / 0x54;
    }
    iVar4 = iVar4 + uVar6;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    operator_new_result = operator_new(iVar2 * 0x54);
    pvVar5 = operator_new_result;
    for (iVar2 = *(int *)(in_ECX + 4); iVar2 != param_1; iVar2 = iVar2 + 0x54) {
      FUN_00410f80(pvVar5,iVar2);
      pvVar5 = (void *)((int)pvVar5 + 0x54);
    }
    FUN_00410f80(pvVar5,param_2);
    FUN_00410560(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar5 + 0x54);
    FUN_00410160(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_0054b339(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)operator_new_result + iVar4 * 0x54);
    iVar4 = FUN_00410130();
    *(void **)(in_ECX + 4) = operator_new_result;
    *(void **)(in_ECX + 8) = (void *)((int)operator_new_result + (iVar4 + 1) * 0x54);
  }
  else {
    iVar2 = iVar4 - param_1 >> 0x1f;
    if ((iVar4 - param_1) / 0x54 + iVar2 == iVar2) {
      FUN_00410560(param_1,iVar4,param_1 + 0x54);
      FUN_004105a0(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - param_1) / 0x54,param_2);
      FUN_00410880(param_1,*(undefined4 *)(in_ECX + 8),param_2);
    }
    else {
      FUN_00410560(iVar4 + -0x54,iVar4,iVar4);
      FUN_00410a30(param_1,*(int *)(in_ECX + 8) + -0x54,*(int *)(in_ECX + 8));
      FUN_00410880(param_1,param_1 + 0x54,param_2);
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0x54;
  }
  return *(int *)(in_ECX + 4) + ((param_1 - iVar1) / 0x54) * 0x54;
}


/* ==== 00410130 FUN_00410130 ==== */

int FUN_00410130(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x54;
}


/* ==== 00410160 FUN_00410160 ==== */

void FUN_00410160(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    FUN_004013b0();
  }
  return;
}


/* ==== 00410190 FUN_00410190 ==== */

int FUN_00410190(undefined4 *param_1,uint param_2,undefined1 *param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  int i;
  void *operator_new_result;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  puVar9 = *(undefined4 **)(in_ECX + 8);
  if ((uint)((*(int *)(in_ECX + 0xc) - (int)puVar9) / 0x30) < param_2) {
    iVar5 = *(int *)(in_ECX + 4);
    if ((iVar5 == 0) || (uVar4 = ((int)puVar9 - iVar5) / 0x30, uVar4 <= param_2)) {
      uVar4 = param_2;
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((int)puVar9 - iVar5) / 0x30;
    }
    iVar5 = iVar5 + uVar4;
    i = iVar5;
    if (iVar5 < 0) {
      i = 0;
    }
    operator_new_result = operator_new(i * 0x30);
    pvVar6 = operator_new_result;
    for (puVar9 = *(undefined4 **)(in_ECX + 4); uVar4 = param_2, pvVar1 = pvVar6, puVar9 != param_1;
        puVar9 = puVar9 + 0xc) {
      FUN_00410bd0(pvVar6,puVar9);
      pvVar6 = (void *)((int)pvVar6 + 0x30);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_00410bd0(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0x30);
    }
    pvVar6 = (void *)(param_2 * 0x30 + (int)pvVar6);
    puVar9 = *(undefined4 **)(in_ECX + 8);
    for (; param_1 != puVar9; param_1 = param_1 + 0xc) {
      FUN_00410bd0(pvVar6,param_1);
      pvVar6 = (void *)((int)pvVar6 + 0x30);
    }
    i = *(int *)(in_ECX + 8);
    for (iVar8 = *(int *)(in_ECX + 4); iVar8 != i; iVar8 = iVar8 + 0x30) {
      FUN_00416ad0();
    }
    FUN_0054b339(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)(iVar5 * 0x30 + (int)operator_new_result);
    if (*(int *)(in_ECX + 4) == 0) {
      i = 0;
      iVar5 = 0;
    }
    else {
      i = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4);
      iVar5 = i * 0x2aaaaaab;
      i = i / 0x30;
    }
    *(void **)(in_ECX + 4) = operator_new_result;
    *(void **)(in_ECX + 8) = (void *)((param_2 + i) * 0x30 + (int)operator_new_result);
    return iVar5;
  }
  iVar5 = -((int)puVar9 - (int)param_1 >> 0x1f);
  if (param_2 <= (uint)(((int)puVar9 - (int)param_1) / 0x30)) {
    if (param_2 != 0) {
      iVar5 = param_2 * 0x30;
      puVar3 = puVar9;
      for (puVar7 = puVar9 + param_2 * -0xc; puVar7 != puVar9; puVar7 = puVar7 + 0xc) {
        FUN_00410bd0(puVar3,puVar7);
        puVar3 = puVar3 + 0xc;
      }
      puVar2 = *(undefined1 **)(in_ECX + 8);
      for (puVar9 = (undefined4 *)(*(undefined1 **)(in_ECX + 8) + param_2 * -0x30);
          param_1 != puVar9; puVar9 = puVar9 + -0xc) {
        puVar2[-0x30] = *(undefined1 *)(puVar9 + -0xc);
        FUN_004093c0(puVar9 + -0xb,0,0xffffffff);
        *(undefined4 *)(puVar2 + -0x1c) = puVar9[-7];
        FUN_00411320(puVar9 + -6);
        FUN_00411770(puVar9 + -4);
        *(undefined4 *)(puVar2 + -8) = puVar9[-2];
        *(undefined4 *)(puVar2 + -4) = puVar9[-1];
        puVar2 = puVar2 + -0x30;
      }
      if (param_1 != param_1 + param_2 * 0xc) {
        puVar9 = param_1 + 5;
        do {
          *(undefined1 *)(puVar9 + -5) = *param_3;
          FUN_004093c0(param_3 + 4,0,0xffffffff);
          *puVar9 = *(undefined4 *)(param_3 + 0x14);
          FUN_00411320(param_3 + 0x18);
          FUN_00411770(param_3 + 0x20);
          puVar9[5] = *(undefined4 *)(param_3 + 0x28);
          puVar9[6] = *(undefined4 *)(param_3 + 0x2c);
          puVar3 = puVar9 + 7;
          puVar9 = puVar9 + 0xc;
        } while (puVar3 != param_1 + param_2 * 0xc);
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + iVar5;
    }
    return iVar5;
  }
  puVar3 = param_1 + param_2 * 0xc;
  for (puVar7 = param_1; puVar7 != puVar9; puVar7 = puVar7 + 0xc) {
    FUN_00410bd0(puVar3,puVar7);
    puVar3 = puVar3 + 0xc;
  }
  iVar5 = *(int *)(in_ECX + 8);
  for (i = param_2 - (iVar5 - (int)param_1) / 0x30; i != 0; i = i + -1) {
    FUN_00410bd0(iVar5,param_3);
    iVar5 = iVar5 + 0x30;
  }
  puVar9 = *(undefined4 **)(in_ECX + 8);
  for (; param_1 != puVar9; param_1 = param_1 + 0xc) {
    FUN_00411140(param_3);
  }
  iVar5 = *(int *)(in_ECX + 8) + param_2 * 0x30;
  *(int *)(in_ECX + 8) = iVar5;
  return iVar5;
}


/* ==== 004104f0 FUN_004104f0 ==== */

int FUN_004104f0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00410e30(param_3,param_1);
    param_1 = param_1 + 0x14;
    param_3 = param_3 + 0x14;
  } while (param_1 != param_2);
  return param_3;
}


/* ==== 00410530 FUN_00410530 ==== */

void FUN_00410530(int param_1,int param_2,undefined4 param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00410e30(param_1,param_3);
    param_1 = param_1 + 0x14;
  }
  return;
}


/* ==== 00410560 FUN_00410560 ==== */

int FUN_00410560(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00410f80(param_3,param_1);
    param_1 = param_1 + 0x54;
    param_3 = param_3 + 0x54;
  } while (param_1 != param_2);
  return param_3;
}


/* ==== 004105a0 FUN_004105a0 ==== */

void FUN_004105a0(int param_1,int param_2,undefined4 param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00410f80(param_1,param_3);
    param_1 = param_1 + 0x54;
  }
  return;
}


/* ==== 004105d0 FUN_004105d0 ==== */

/* WARNING: Removing unreachable block (ram,0x004105f7) */

void FUN_004105d0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    uVar1 = *(uint *)(param_3 + 8);
    if (param_1 == param_3) {
      if (*(uint *)(param_1 + 8) < uVar1) {
        FUN_0054b29c();
      }
      FUN_00402c30();
      iVar3 = *(int *)(param_1 + 8) - uVar1;
      iVar6 = -1;
      if (iVar3 != -1) {
        iVar6 = iVar3;
      }
      if (iVar6 != 0) {
        iVar5 = uVar1 + *(int *)(param_1 + 4);
        FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
        iVar6 = *(int *)(param_1 + 8) - iVar6;
        cVar2 = FUN_00402a00(iVar6,0);
        if (cVar2 != '\0') {
          FUN_004029e0(iVar6);
        }
      }
      FUN_00402c30();
    }
    else {
      if (uVar1 != 0) {
        puVar4 = *(undefined1 **)(param_3 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          iVar6 = *(int *)(param_1 + 4);
          if (iVar6 != 0) {
            cVar2 = *(char *)(iVar6 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_0054b339((char *)(iVar6 + -1));
            }
            else {
              *(char *)(iVar6 + -1) = cVar2 + -1;
            }
          }
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          puVar4 = *(undefined1 **)(param_3 + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          *(undefined1 **)(param_1 + 4) = puVar4;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0xc);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_00410702;
        }
      }
      cVar2 = FUN_00402a00(uVar1,1);
      if (cVar2 != '\0') {
        puVar7 = *(undefined4 **)(param_3 + 4);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&DAT_0057629c;
        }
        puVar8 = *(undefined4 **)(param_1 + 4);
        for (i = uVar1 >> 2; i != 0; i = i - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (i = uVar1 & 3; i != 0; i = i - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(uint *)(param_1 + 8) = uVar1;
        *(undefined1 *)(*(int *)(param_1 + 4) + uVar1) = 0;
      }
    }
LAB_00410702:
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_1 = param_1 + 0x14;
  } while( true );
}


/* ==== 00410720 FUN_00410720 ==== */

/* WARNING: Removing unreachable block (ram,0x00410751) */

int FUN_00410720(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar1 = *(uint *)(param_2 + -0xc);
    iVar9 = param_2 + -0x14;
    iVar7 = param_3 + -0x14;
    if (iVar7 == iVar9) {
      if (*(uint *)(param_3 + -0xc) < uVar1) {
        FUN_0054b29c();
      }
      FUN_00402c30();
      iVar3 = *(int *)(param_3 + -0xc) - uVar1;
      iVar6 = -1;
      if (iVar3 != -1) {
        iVar6 = iVar3;
      }
      if (iVar6 != 0) {
        iVar5 = uVar1 + *(int *)(param_3 + -0x10);
        FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
        iVar6 = *(int *)(param_3 + -0xc) - iVar6;
        cVar2 = FUN_00402a00(iVar6,0);
        if (cVar2 != '\0') {
          FUN_004029e0(iVar6);
        }
      }
      FUN_00402c30();
    }
    else {
      if (uVar1 != 0) {
        puVar4 = *(undefined1 **)(param_2 + -0x10);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          iVar6 = *(int *)(param_3 + -0x10);
          if (iVar6 != 0) {
            cVar2 = *(char *)(iVar6 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_0054b339((char *)(iVar6 + -1));
            }
            else {
              *(char *)(iVar6 + -1) = cVar2 + -1;
            }
          }
          *(undefined4 *)(param_3 + -0x10) = 0;
          *(undefined4 *)(param_3 + -0xc) = 0;
          *(undefined4 *)(param_3 + -8) = 0;
          puVar4 = *(undefined1 **)(param_2 + -0x10);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          *(undefined1 **)(param_3 + -0x10) = puVar4;
          *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
          *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_0041085c;
        }
      }
      cVar2 = FUN_00402a00(uVar1,1);
      if (cVar2 != '\0') {
        puVar8 = *(undefined4 **)(param_2 + -0x10);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)&DAT_0057629c;
        }
        puVar10 = *(undefined4 **)(param_3 + -0x10);
        for (i = uVar1 >> 2; i != 0; i = i - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (i = uVar1 & 3; i != 0; i = i - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(uint *)(param_3 + -0xc) = uVar1;
        *(undefined1 *)(*(int *)(param_3 + -0x10) + uVar1) = 0;
      }
    }
LAB_0041085c:
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_3 = iVar7;
    param_2 = iVar9;
    if (iVar9 == param_1) {
      return iVar7;
    }
  } while( true );
}


/* ==== 00410880 FUN_00410880 ==== */

/* WARNING: Removing unreachable block (ram,0x004108b3) */

void FUN_00410880(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint j;
  undefined4 *puVar7;
  int i;
  undefined4 *puVar8;
  
  iVar2 = param_3;
  if (param_1 != param_2) {
    param_3 = param_3 - param_1;
    do {
      uVar1 = *(uint *)(iVar2 + 8);
      if (param_1 == iVar2) {
        if (*(uint *)(param_1 + 8) < uVar1) {
          FUN_0054b29c();
        }
        FUN_00402c30();
        iVar4 = *(int *)(param_1 + 8) - uVar1;
        i = -1;
        if (iVar4 != -1) {
          i = iVar4;
        }
        if (i != 0) {
          iVar6 = *(int *)(param_1 + 4) + uVar1;
          FUN_005580e0(iVar6,iVar6 + i,iVar4 - i);
          i = *(int *)(param_1 + 8) - i;
          cVar3 = FUN_00402a00(i,0);
          if (cVar3 != '\0') {
            FUN_004029e0(i);
          }
        }
        FUN_00402c30();
      }
      else {
        if (uVar1 != 0) {
          puVar5 = *(undefined1 **)(iVar2 + 4);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0057629c;
          }
          if ((byte)puVar5[-1] < 0xfe) {
            FUN_004028f0(1);
            puVar5 = *(undefined1 **)(iVar2 + 4);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_0057629c;
            }
            *(undefined1 **)(param_1 + 4) = puVar5;
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
            puVar5[-1] = puVar5[-1] + '\x01';
            goto LAB_0041099c;
          }
        }
        cVar3 = FUN_00402a00(uVar1,1);
        if (cVar3 != '\0') {
          puVar7 = *(undefined4 **)(iVar2 + 4);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&DAT_0057629c;
          }
          puVar8 = *(undefined4 **)(param_1 + 4);
          for (j = uVar1 >> 2; j != 0; j = j - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (j = uVar1 & 3; j != 0; j = j - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          *(uint *)(param_1 + 8) = uVar1;
          *(undefined1 *)(*(int *)(param_1 + 4) + uVar1) = 0;
        }
      }
LAB_0041099c:
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
      i = 3;
      puVar7 = (undefined4 *)(param_1 + 0x38);
      do {
        i = i + -1;
        *puVar7 = *(undefined4 *)(param_3 + -4 + (int)(puVar7 + 1));
        puVar7 = puVar7 + 1;
      } while (i != 0);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(iVar2 + 0x48);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
      param_3 = param_3 + -0x54;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
      param_1 = param_1 + 0x54;
    } while (param_1 != param_2);
  }
  return;
}


/* ==== 00410a30 FUN_00410a30 ==== */

/* WARNING: Removing unreachable block (ram,0x00410a61) */

int FUN_00410a30(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint j;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int i;
  undefined4 *puVar9;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar1 = *(uint *)(param_2 + -0x4c);
    iVar6 = param_2 + -0x54;
    iVar7 = param_3 + -0x54;
    if (iVar7 == iVar6) {
      if (*(uint *)(param_3 + -0x4c) < uVar1) {
        FUN_0054b29c();
      }
      FUN_00402c30();
      iVar3 = *(int *)(param_3 + -0x4c) - uVar1;
      i = -1;
      if (iVar3 != -1) {
        i = iVar3;
      }
      if (i != 0) {
        iVar5 = *(int *)(param_3 + -0x50) + uVar1;
        FUN_005580e0(iVar5,iVar5 + i,iVar3 - i);
        i = *(int *)(param_3 + -0x4c) - i;
        cVar2 = FUN_00402a00(i,0);
        if (cVar2 != '\0') {
          FUN_004029e0(i);
        }
      }
      FUN_00402c30();
    }
    else {
      if (uVar1 != 0) {
        puVar4 = *(undefined1 **)(param_2 + -0x50);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          FUN_004028f0(1);
          puVar4 = *(undefined1 **)(param_2 + -0x50);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          *(undefined1 **)(param_3 + -0x50) = puVar4;
          *(undefined4 *)(param_3 + -0x4c) = *(undefined4 *)(param_2 + -0x4c);
          *(undefined4 *)(param_3 + -0x48) = *(undefined4 *)(param_2 + -0x48);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_00410b4a;
        }
      }
      cVar2 = FUN_00402a00(uVar1,1);
      if (cVar2 != '\0') {
        puVar8 = *(undefined4 **)(param_2 + -0x50);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)&DAT_0057629c;
        }
        puVar9 = *(undefined4 **)(param_3 + -0x50);
        for (j = uVar1 >> 2; j != 0; j = j - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (j = uVar1 & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(uint *)(param_3 + -0x4c) = uVar1;
        *(undefined1 *)(*(int *)(param_3 + -0x50) + uVar1) = 0;
      }
    }
LAB_00410b4a:
    *(undefined4 *)(param_3 + -0x44) = *(undefined4 *)(param_2 + -0x44);
    *(undefined4 *)(param_3 + -0x40) = *(undefined4 *)(param_2 + -0x40);
    *(undefined4 *)(param_3 + -0x3c) = *(undefined4 *)(param_2 + -0x3c);
    *(undefined4 *)(param_3 + -0x38) = *(undefined4 *)(param_2 + -0x38);
    *(undefined4 *)(param_3 + -0x34) = *(undefined4 *)(param_2 + -0x34);
    *(undefined4 *)(param_3 + -0x30) = *(undefined4 *)(param_2 + -0x30);
    *(undefined4 *)(param_3 + -0x2c) = *(undefined4 *)(param_2 + -0x2c);
    *(undefined4 *)(param_3 + -0x28) = *(undefined4 *)(param_2 + -0x28);
    *(undefined4 *)(param_3 + -0x24) = *(undefined4 *)(param_2 + -0x24);
    *(undefined4 *)(param_3 + -0x20) = *(undefined4 *)(param_2 + -0x20);
    puVar8 = (undefined4 *)(param_3 + -0x1c);
    i = 3;
    do {
      *puVar8 = *(undefined4 *)((iVar6 - iVar7) + (int)puVar8);
      puVar8 = puVar8 + 1;
      i = i + -1;
    } while (i != 0);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined1 *)(param_3 + -0xc) = *(undefined1 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_2 = iVar6;
    param_3 = iVar7;
    if (iVar6 == param_1) {
      return iVar7;
    }
  } while( true );
}


