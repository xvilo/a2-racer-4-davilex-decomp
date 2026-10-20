/* spel.dat — game/Ovl_Statistics.cpp: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00496b10 FUN_00496b10 ==== */

void __thiscall FUN_00496b10(void *this)

{
  char cVar1;
  int i;
  undefined4 uVar2;
  uint j;
  uint k;
  int unaff_EBX;
  char *pcVar3;
  char *pcVar4;
  undefined4 uStack_130;
  undefined1 local_12c [4];
  undefined1 auStack_128 [4];
  int aiStack_124 [2];
  undefined1 local_11c [12];
  char acStack_110 [4];
  char local_10c [244];
  void *pvStack_18;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e3c3;
  pvStack_c = ExceptionList;
  local_11c[0] = uStack_130._3_1_;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_11c,0);
  local_4 = 0;
  i = FUN_00458b90(0x27);
  j = 0xffffffff;
  pcVar3 = &DAT_006fd14c + i * 0x100;
  do {
    pcVar4 = pcVar3;
    if (j == 0) break;
    j = j - 1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  j = ~j;
  pcVar3 = pcVar4 + -j;
  pcVar4 = local_10c;
  for (k = j >> 2; k != 0; k = k - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (j = j & 3; j != 0; j = j - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  i = -1;
  pcVar3 = local_10c;
  do {
    pcVar4 = pcVar3;
    if (i == 0) break;
    i = i + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar4 + -1) = DAT_005adc0c;
  *(undefined2 *)(pcVar4 + 3) = DAT_005adc10;
  pcVar4[5] = DAT_005adc12;
  uVar2 = FUN_0049df90(local_12c,local_10c);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(**(int **)((int)this + 0x18) + 0x48))(uVar2);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_004028f0(&uStack_130,1);
  i = FUN_00458b90(0x26);
  j = 0xffffffff;
  pcVar3 = &DAT_006fd14c + i * 0x100;
  do {
    pcVar4 = pcVar3;
    if (j == 0) break;
    j = j - 1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  j = ~j;
  pcVar3 = pcVar4 + -j;
  pcVar4 = acStack_110;
  for (k = j >> 2; k != 0; k = k - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (j = j & 3; j != 0; j = j - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  i = -1;
  pcVar3 = acStack_110;
  do {
    pcVar4 = pcVar3;
    if (i == 0) break;
    i = i + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar4 + -1) = DAT_005adc14;
  *(undefined2 *)(pcVar4 + 3) = DAT_005adc18;
  pcVar4[5] = DAT_005adc1a;
  uVar2 = FUN_0049df90((undefined1 *)&uStack_130,acStack_110);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  (**(code **)(**(int **)((int)this + 0x24) + 0x48))(uVar2);
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  if (uStack_130 != 0) {
    cVar1 = *(char *)(uStack_130 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(uStack_130 + -1));
    }
    else {
      *(char *)(uStack_130 + -1) = cVar1 + -1;
    }
  }
  uVar2 = FUN_00448470(0);
  uVar2 = FUN_00497230(&stack0xfffffecc,uVar2);
  pvStack_c._0_1_ = 3;
  FUN_004093c0(aiStack_124,uVar2,0,0xffffffff);
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  if (uStack_130 != 0) {
    cVar1 = *(char *)(uStack_130 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(uStack_130 + -1));
    }
    else {
      *(char *)(uStack_130 + -1) = cVar1 + -1;
    }
  }
  (**(code **)(**(int **)((int)this + 0x20) + 0x48))(aiStack_124);
  if ((&DAT_006fa61c)[DAT_006fb898 * 0x25] == 1) {
    uVar2 = FUN_00448470(0xb);
    uVar2 = FUN_00497230(&stack0xfffffec8,uVar2);
    uStack_10 = 4;
    FUN_004093c0(auStack_128,uVar2,0,0xffffffff);
    uStack_10 = 0;
    if (unaff_EBX != 0) {
      cVar1 = *(char *)(unaff_EBX + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(unaff_EBX + -1));
      }
      else {
        *(char *)(unaff_EBX + -1) = cVar1 + -1;
      }
    }
    (**(code **)(**(int **)((int)this + 0x1c) + 0x48))(auStack_128);
  }
  if (aiStack_124[0] != 0) {
    cVar1 = *(char *)(aiStack_124[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(aiStack_124[0] + -1);
    }
    else {
      *(char *)(aiStack_124[0] + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_18;
  return;
}


/* ==== 00496dd0 FUN_00496dd0 ==== */

void __thiscall FUN_00496dd0(void *this,undefined4 param_2)

{
  if ((&DAT_006fa61c)[DAT_006fb898 * 0x25] == 1) {
    (**(code **)(**(int **)((int)this + 0x1c) + 0x20))(param_2);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x1c) + 0x20))(0);
  }
  (**(code **)(**(int **)((int)this + 0x18) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x20) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x24) + 0x20))(param_2);
  return;
}


/* ==== 00496ea0 FUN_00496ea0 ==== */

void __thiscall FUN_00496ea0(void *this)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  undefined1 *this_val;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e40d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_3c,0);
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adc1c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,s_C__Work_A2IV_Game_prog_Ovl_Stati_005adc1c,~i - 1);
  local_4 = 0;
  FUN_004028f0(local_2c,0);
  i = 0xffffffff;
  pcVar3 = s_Current_Lap_string_not_found_in_o_005adc48;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,s_Current_Lap_string_not_found_in_o_005adc48,~i - 1);
  local_4._0_1_ = 1;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x18),local_2c,local_3c,0xa1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_2c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,1);
  FUN_004028f0(local_2c,0);
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adc70;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_2c,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adc70;
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
    FUN_004029e0(local_2c,i);
  }
  local_4 = 2;
  FUN_004028f0(local_3c,0);
  i = 0xffffffff;
  pcVar3 = s_RaceTimeValue_string_not_found_i_005adc9c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_3c,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_RaceTimeValue_string_not_found_i_005adc9c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_38 = local_38 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_38 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0(local_3c,i);
  }
  local_4._0_1_ = 3;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x20),local_3c,local_2c,0xa2);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(local_3c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,1);
  FUN_004028f0(local_2c,0);
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adcc8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_2c,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adcc8;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_28 = local_28 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_28 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(local_2c,i);
  }
  this_val = local_3c;
  pcVar4 = s_STRING_CUR_POS_005adbbc;
  pcVar3 = s_String__s_not_found_in_overlay_005adcf4;
  local_4 = 4;
  uVar2 = FUN_0049df90(this_val,s_String__s_not_found_in_overlay_005adcf4);
  local_4._0_1_ = 5;
  FUN_00487bc0(*(undefined4 *)((int)this + 0x24),uVar2,local_2c,0xa4,this_val,pcVar3,pcVar4);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(local_3c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,1);
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005add14;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_4c,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005add14;
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
  this_val = local_1c;
  pcVar4 = s_STRING_COUNTDOWN_TIMER_005adbcc;
  pcVar3 = s_String__s_not_found_in_overlay_005add40;
  local_4 = 6;
  uVar2 = FUN_0049df90(this_val,s_String__s_not_found_in_overlay_005add40);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_00487bc0(*(undefined4 *)((int)this + 0x1c),uVar2,local_4c,0xa5,this_val,pcVar3,pcVar4);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (local_48 != (char *)0x0) {
    cVar1 = local_48[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_48[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_48 + -1);
  }
  ExceptionList = local_c;
  return;
}


