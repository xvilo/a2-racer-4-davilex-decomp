/* spel.dat — game/ai_behavior.cpp: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00401000 FUN_00401000 ==== */

void FUN_00401000(void)

{
  char cVar1;
  int iVar2;
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
  
  puStack_8 = &LAB_00569398;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = local_11;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  i = 0xffffffff;
  local_4 = 0;
  pcVar4 = (char *)&DAT_005c9964;
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
  iVar2 = *(int *)(in_ECX + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      *(undefined4 *)(in_ECX + 0x10) = 0;
      ExceptionList = pvStack_c;
      return;
    }
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (i <= *(uint *)(in_ECX + 0xc))) goto LAB_004010d0;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00402b20(i);
LAB_004010d0:
  puVar3 = &DAT_005c9964;
  puVar5 = *(undefined4 **)(in_ECX + 4);
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
  *(uint *)(in_ECX + 8) = i;
  *(undefined1 *)(*(int *)(in_ECX + 4) + i) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00401110 FUN_00401110 ==== */

/* WARNING: Removing unreachable block (ram,0x00401138) */

void FUN_00401110(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (in_ECX == param_1) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(in_ECX + 8) - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + *(int *)(in_ECX + 4),uVar1 + *(int *)(in_ECX + 4) + iVar5,iVar3 - iVar5);
      iVar3 = *(int *)(in_ECX + 8);
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar4 = *(undefined1 **)(param_1 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)(in_ECX + 4) = puVar4;
        *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        *(undefined4 *)(in_ECX + 0x10) = 0;
        return;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = *(undefined4 **)(in_ECX + 4);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)(in_ECX + 8) = uVar1;
      *(undefined1 *)(*(int *)(in_ECX + 4) + uVar1) = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}


/* ==== 00401240 FUN_00401240 ==== */

void FUN_00401240(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 00401280 FUN_00401280 ==== */

void FUN_00401280(void)

{
  char cVar1;
  int iVar2;
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
  
  puStack_8 = &LAB_005693aa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = local_11;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  i = 0xffffffff;
  local_4 = 0;
  pcVar4 = (char *)&DAT_005c9968;
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
  iVar2 = *(int *)(in_ECX + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      goto LAB_00401348;
    }
    if ((0x1f < *(uint *)(in_ECX + 0xc)) || (*(uint *)(in_ECX + 0xc) < i)) {
      FUN_004028f0(1);
      goto LAB_0040131c;
    }
  }
  else {
    if (i == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(0);
      goto LAB_00401348;
    }
LAB_0040131c:
    FUN_00402b20(i);
  }
  puVar3 = &DAT_005c9968;
  puVar5 = *(undefined4 **)(in_ECX + 4);
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
  *(uint *)(in_ECX + 8) = i;
  *(undefined1 *)(*(int *)(in_ECX + 4) + i) = 0;
LAB_00401348:
  *(undefined4 *)(in_ECX + 0x10) = 10;
  *(undefined4 *)(in_ECX + 0x14) = 4;
  *(undefined4 *)(in_ECX + 0x28) = 0x415e38e4;
  *(undefined4 *)(in_ECX + 0x2c) = 0x41de38e4;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0x3f000000;
  *(undefined4 *)(in_ECX + 0x18) = 0x32;
  *(undefined4 *)(in_ECX + 0x1c) = 0x32;
  *(undefined4 *)(in_ECX + 0x20) = 0xfa;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0x3f800000;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004013b0 FUN_004013b0 ==== */

void FUN_004013b0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 004013f0 FUN_004013f0 ==== */

void FUN_004013f0(int param_1)

{
  char cVar1;
  char cVar2;
  int k;
  undefined4 *puVar3;
  int in_ECX;
  uint i;
  uint j;
  undefined1 *puVar4;
  char *pcVar5;
  float *pfVar6;
  char *pcVar7;
  undefined1 local_158 [4];
  char *local_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [4];
  char *local_144;
  uint uStack_140;
  undefined4 uStack_13c;
  int local_138;
  float local_134;
  undefined1 auStack_130 [4];
  char *pcStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [4];
  char *pcStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined1 local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005694fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_FrontVisibilityRange_0058dd18;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_FrontVisibilityRange_0058dd18,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 0;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4._0_1_ = 1;
  cVar2 = FUN_00405710(local_148,local_158,&local_138);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058df30,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058df08,0x9b,s_BEHAVIOR_INI_0058def8,puVar4,
                   s_FrontVisibilityRange_0058dd18);
    }
    else {
      *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
  }
  else {
    *(int *)(in_ECX + 0x10) = local_138;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_RearVisibilityRange_0058dd30;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_RearVisibilityRange_0058dd30,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 2;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4._0_1_ = 3;
  cVar2 = FUN_00405710(local_148,local_158,&local_138);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058df9c,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058df74,0xb1,s_BEHAVIOR_INI_0058df64,puVar4,
                   s_RearVisibilityRange_0058dd30);
    }
    else {
      *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
    }
  }
  else {
    *(int *)(in_ECX + 0x14) = local_138;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_MegaphoneFrequency_0058de60;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_MegaphoneFrequency_0058de60,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 4;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4._0_1_ = 5;
  cVar2 = FUN_00405710(local_148,local_158,&local_138);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e008,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058dfe0,199,s_BEHAVIOR_INI_0058dfd0,puVar4,
                   s_MegaphoneFrequency_0058de60);
    }
    else {
      *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
    }
  }
  else {
    *(int *)(in_ECX + 0x18) = local_138;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_OvertakeBashFrequency_0058de74;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_OvertakeBashFrequency_0058de74,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 6;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4._0_1_ = 7;
  cVar2 = FUN_00405710(local_148,local_158,&local_138);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e074,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e04c,0xdd,s_BEHAVIOR_INI_0058e03c,puVar4,
                   s_OvertakeBashFrequency_0058de74);
    }
    else {
      *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
  }
  else {
    *(int *)(in_ECX + 0x1c) = local_138;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_StayInLaneDistance_0058de8c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_StayInLaneDistance_0058de8c,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 8;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4._0_1_ = 9;
  cVar2 = FUN_00405710(local_148,local_158,&local_138);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e0e0,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e0b8,0xf3,s_BEHAVIOR_INI_0058e0a8,puVar4,
                   s_StayInLaneDistance_0058de8c);
    }
    else {
      *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  else {
    *(int *)(in_ECX + 0x20) = local_138;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_PatrolSpeed_0058dd44;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_PatrolSpeed_0058dd44,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 10;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4._0_1_ = 0xb;
  cVar2 = FUN_00405850(local_148,local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e14c,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e124,0x109,s_BEHAVIOR_INI_0058e114,puVar4,
                   s_PatrolSpeed_0058dd44);
    }
    else {
      *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
    }
  }
  else {
    *(float *)(in_ECX + 0x28) = local_134 * 0.2777778;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_MaxCornerSpeed_0058dd5c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_MaxCornerSpeed_0058dd5c,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 0xc;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4._0_1_ = 0xd;
  cVar2 = FUN_00405850(local_148,local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e1b8,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e190,0x142,s_BEHAVIOR_INI_0058e180,puVar4,
                   s_MaxCornerSpeed_0058dd5c);
    }
    else {
      *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    }
  }
  else {
    *(float *)(in_ECX + 0x2c) = local_134 * 0.2777778;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Acceleration_0058dd6c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_Acceleration_0058dd6c,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 0xe;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4._0_1_ = 0xf;
  cVar2 = FUN_00405850(local_148,local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e224,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e1fc,0x158,s_BEHAVIOR_INI_0058e1ec,puVar4,
                   s_Acceleration_0058dd6c);
    }
    else {
      *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
    }
  }
  else {
    *(float *)(in_ECX + 0x30) = local_134 * 0.01;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_HandBrakeSlowDownBias_0058dea0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_HandBrakeSlowDownBias_0058dea0;
    pcVar7 = local_154;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x10;
  pcVar5 = *(char **)(in_ECX + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar7 = local_144;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4._0_1_ = 0x11;
  cVar2 = FUN_00405850(local_148,local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0x10);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e290,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e268,0x16e,s_BEHAVIOR_INI_0058e258,puVar4,
                   s_HandBrakeSlowDownBias_0058dea0);
    }
    else {
      *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  else {
    *(float *)(in_ECX + 0x24) = local_134 * 0.01;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Aggression_0058dd7c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_Aggression_0058dd7c;
    pcVar7 = local_154;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x12;
  pcVar5 = *(char **)(in_ECX + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar7 = local_144;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4._0_1_ = 0x13;
  cVar2 = FUN_00405850(local_148,local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e2fc,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e2d4,0x184,s_BEHAVIOR_INI_0058e2c4,puVar4,
                   s_Aggression_0058dd7c);
    }
    else {
      *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
    }
  }
  else {
    *(float *)(in_ECX + 0x34) = local_134 * 0.01;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_BehaviorBiases_0058de3c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_BehaviorBiases_0058de3c;
    pcVar7 = local_154;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x14;
  pcVar5 = *(char **)(in_ECX + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar7 = local_144;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4._0_1_ = 0x15;
  cVar2 = FUN_00405990(local_148,local_158,local_10c,0xff);
  local_4 = CONCAT31(local_4._1_3_,0x14);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e3f8,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e3d0,0x29c,s_BEHAVIOR_INI_0058e3c0,puVar4,
                   s_BehaviorBiases_0058de3c);
    }
    else {
      puVar3 = (undefined4 *)(in_ECX + 0x38);
      k = 3;
      do {
        *puVar3 = *(undefined4 *)((param_1 - in_ECX) + (int)puVar3);
        puVar3 = puVar3 + 1;
        k = k + -1;
      } while (k != 0);
    }
  }
  else {
    k = FUN_004c3d60(local_10c,0);
    if (k != 3) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s____In_0058e368,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e340,0x286,s_BEHAVIOR_INI_0058e330,puVar4,
                   s_BehaviorBiases_0058de3c,k,3);
    }
    k = 0;
    pfVar6 = (float *)(in_ECX + 0x38);
    do {
      iStack_110 = FUN_004c3ec0(k);
      k = k + 1;
      *pfVar6 = (float)iStack_110;
      pfVar6 = pfVar6 + 1;
    } while (k < 3);
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Risk_0058de4c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_Risk_0058de4c;
    pcVar7 = local_154;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x16;
  pcVar5 = *(char **)(in_ECX + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar7 = local_144;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4._0_1_ = 0x17;
  cVar2 = FUN_00405850(local_148,local_158,&local_134);
  local_4 = CONCAT31(local_4._1_3_,0x16);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e464,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e43c,0x2b2,s_BEHAVIOR_INI_0058e42c,puVar4,
                   s_Risk_0058de4c);
    }
    else {
      *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
    }
  }
  else {
    *(float *)(in_ECX + 0x44) = local_134 * 0.01;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Cheat_0058deb8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_Cheat_0058deb8;
    pcVar7 = local_144;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_144[i] = '\0';
    uStack_140 = i;
  }
  local_4 = 0x18;
  pcVar5 = *(char **)(in_ECX + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar7 = local_154;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_154[i] = '\0';
    uStack_150 = i;
  }
  local_4._0_1_ = 0x19;
  cVar2 = FUN_00405710(local_158,local_148,&local_138);
  local_4 = CONCAT31(local_4._1_3_,0x18);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e4d0,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e4a8,0x2df,s_BEHAVIOR_INI_0058e498,puVar4,
                   s_Cheat_0058deb8);
    }
    else {
      *(undefined1 *)(in_ECX + 0x48) = *(undefined1 *)(param_1 + 0x48);
    }
  }
  else {
    *(bool *)(in_ECX + 0x48) = local_138 != 0;
  }
  i = 0xffffffff;
  local_144 = (char *)0x0;
  uStack_140 = 0;
  uStack_13c = 0;
  pcVar5 = s_CheatThreshHoldDistance_0058dec0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_CheatThreshHoldDistance_0058dec0,~i - 1);
  pcVar5 = *(char **)(in_ECX + 4);
  local_4 = 0x1a;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  i = 0xffffffff;
  local_154 = (char *)0x0;
  uStack_150 = 0;
  uStack_14c = 0;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(pcVar5,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,0x1b);
  cVar2 = FUN_00405710(local_158,local_148,&local_138);
  if (local_154 != (char *)0x0) {
    cVar1 = *(char *)((int)local_154 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_154 + -1));
    }
    else {
      *(char *)((int)local_154 + -1) = cVar1 + -1;
    }
  }
  local_154 = (char *)0x0;
  uStack_150 = 0;
  uStack_14c = 0;
  local_4 = 0xffffffff;
  if (local_144 != (char *)0x0) {
    cVar1 = *(char *)((int)local_144 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_144 + -1));
    }
    else {
      *(char *)((int)local_144 + -1) = cVar1 + -1;
    }
  }
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e53c,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e514,0x2f5,s_BEHAVIOR_INI_0058e504,puVar4,
                   s_CheatThreshHoldDistance_0058dec0);
    }
    else {
      *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    }
  }
  else {
    *(int *)(in_ECX + 0x4c) = local_138;
  }
  i = 0xffffffff;
  pcStack_11c = (char *)0x0;
  uStack_118 = 0;
  uStack_114 = 0;
  pcVar5 = s_CheatReplaceDistance_0058ded8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_CheatReplaceDistance_0058ded8;
    pcVar7 = pcStack_11c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x1c;
  pcVar5 = "";
  if (*(char **)(in_ECX + 4) != (char *)0x0) {
    pcVar5 = *(char **)(in_ECX + 4);
  }
  i = 0xffffffff;
  pcStack_12c = (char *)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  pcVar7 = pcVar5;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar7 = pcStack_12c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    pcStack_12c[i] = '\0';
    uStack_128 = i;
  }
  local_4 = CONCAT31(local_4._1_3_,0x1d);
  cVar2 = FUN_00405710(auStack_130,auStack_120,&local_138);
  if (pcStack_12c != (char *)0x0) {
    cVar1 = pcStack_12c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_12c + -1);
    }
    else {
      pcStack_12c[-1] = cVar1 + -1;
    }
  }
  pcStack_12c = (char *)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_4 = 0xffffffff;
  if (pcStack_11c != (char *)0x0) {
    cVar1 = pcStack_11c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_11c + -1);
    }
    else {
      pcStack_11c[-1] = cVar1 + -1;
    }
  }
  pcStack_11c = (char *)0x0;
  uStack_118 = 0;
  uStack_114 = 0;
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      puVar4 = *(undefined1 **)(in_ECX + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c4150(s__s__d_____s___Behavior___s_______0058e5a8,
                   s_C__Work_A2IV_Game_prog_ai_behavi_0058e580,0x30b,s_BEHAVIOR_INI_0058e570,puVar4,
                   s_CheatReplaceDistance_0058ded8);
    }
    else {
      *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
    }
  }
  else {
    *(int *)(in_ECX + 0x50) = local_138;
  }
  ExceptionList = pvStack_c;
  return;
}


