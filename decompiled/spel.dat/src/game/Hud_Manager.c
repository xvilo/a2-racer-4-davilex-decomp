/* spel.dat — game/Hud_Manager.cpp: 23 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00483d90 FUN_00483d90 ==== */

void FUN_00483d90(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint i;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar2 = *(int *)(param_1 + 8) - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (-*(int *)(in_ECX + 8) - 1U <= param_3) {
    FUN_0054b1b4();
  }
  if (param_3 == 0) {
    return;
  }
  uVar2 = *(int *)(in_ECX + 8) + param_3;
  if (0xfffffffd < uVar2) {
    FUN_0054b1b4();
  }
  puVar3 = *(undefined1 **)(in_ECX + 4);
  if (((puVar3 == (undefined1 *)0x0) || (cVar1 = puVar3[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (puVar3 == (undefined1 *)0x0) {
        return;
      }
      *(undefined4 *)(in_ECX + 8) = 0;
      *puVar3 = 0;
      return;
    }
    if (uVar2 <= *(uint *)(in_ECX + 0xc)) goto LAB_00483e31;
  }
  else if (uVar2 == 0) {
    puVar3[-1] = cVar1 + -1;
    FUN_004028f0(0);
    return;
  }
  FUN_00402b20(uVar2);
LAB_00483e31:
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  puVar4 = (undefined4 *)(puVar3 + param_2);
  puVar5 = (undefined4 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 4));
  for (i = param_3 >> 2; i != 0; i = i - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)(in_ECX + 8) = uVar2;
  *(undefined1 *)(*(int *)(in_ECX + 4) + uVar2) = 0;
  return;
}


/* ==== 00483e70 FUN_00483e70 ==== */

uint FUN_00483e70(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  uint i;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  i = 0xffffffff;
  uVar2 = *(uint *)(in_ECX + 8);
  pbVar5 = param_1;
  do {
    if (i == 0) break;
    i = i - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  uVar4 = ~i - 1;
  i = uVar2;
  if (uVar4 <= uVar2) {
    i = uVar4;
  }
  bVar6 = false;
  uVar3 = 0;
  bVar7 = true;
  pbVar5 = *(byte **)(in_ECX + 4);
  do {
    if (i == 0) break;
    i = i - 1;
    bVar6 = *pbVar5 < *param_1;
    bVar7 = *pbVar5 == *param_1;
    pbVar5 = pbVar5 + 1;
    param_1 = param_1 + 1;
  } while (bVar7);
  if (!bVar7) {
    uVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if (uVar3 == 0) {
    if (uVar2 < uVar4) {
      return 0xffffffff;
    }
    uVar3 = (uint)(uVar2 != uVar4);
  }
  return uVar3;
}


/* ==== 00483ed0 FUN_00483ed0 ==== */

void FUN_00483ed0(void)

{
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056cc3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[1] = 0;
  in_ECX[2] = &PTR_LAB_00576e28;
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
  in_ECX[3] = operator_new_result;
  local_4 = 0;
  in_ECX[4] = &PTR_LAB_00576e18;
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
  in_ECX[5] = operator_new_result;
  *(undefined1 *)((int)in_ECX + 0x8a) = 0;
  *(undefined1 *)((int)in_ECX + 0x8b) = 1;
  *(undefined1 *)(in_ECX + 0x22) = 1;
  *in_ECX = &PTR_FUN_00576e14;
  ExceptionList = local_c;
  return;
}


/* ==== 00483f80 FUN_00483f80 ==== */

void FUN_00483f80(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int i;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056cc5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00576e14;
  local_4 = 1;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 4))(1);
  }
  in_ECX[1] = 0;
  iVar4 = (**(code **)in_ECX[2])();
  i = 0;
  if (0 < iVar4) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX[3] + 4) + i * 4);
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x80c);
        if (iVar3 != 0) {
          cVar1 = *(char *)(iVar3 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar3 + -1));
          }
          else {
            *(char *)(iVar3 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)(iVar2 + 0x80c) = 0;
        *(undefined4 *)(iVar2 + 0x810) = 0;
        *(undefined4 *)(iVar2 + 0x814) = 0;
        FUN_0054b339(iVar2);
      }
      i = i + 1;
      *(undefined4 *)(*(int *)(in_ECX[3] + 4) + -4 + i * 4) = 0;
    } while (i < iVar4);
  }
  iVar4 = in_ECX[5];
  in_ECX[4] = &PTR_LAB_00576e18;
  if (iVar4 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar4 + 4));
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    FUN_0054b339(iVar4);
  }
  in_ECX[5] = 0;
  iVar4 = in_ECX[3];
  in_ECX[2] = &PTR_LAB_00576e28;
  if (iVar4 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar4 + 4));
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    FUN_0054b339(iVar4);
  }
  in_ECX[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004840c0 FUN_004840c0 ==== */

void FUN_004840c0(void)

{
  char cVar1;
  void *operator_new_result;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint i;
  uint j;
  int k;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_75;
  undefined4 local_6c;
  char *local_68;
  uint local_64;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056cc97;
  local_c = ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x34) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x38) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  local_6c = 0;
  local_68 = (char *)0x0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  local_64 = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x24) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x2c) = 0x3f400000;
  operator_new_result = operator_new(0x84);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    local_6c = CONCAT31(local_6c._1_3_,local_75);
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = s_Screen_005aabb0;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar5 = s_Screen_005aabb0;
      pcVar6 = local_68;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_68[i] = '\0';
      local_64 = i;
    }
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar2 = FUN_0047beb0(&local_6c);
  }
  *(undefined4 *)(in_ECX + 4) = uVar2;
  local_4 = 0xffffffff;
  if (bVar4) {
    FUN_004028f0(1);
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aabb8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005aabb8,~i - 1);
  local_4 = 3;
  local_6c = CONCAT31(local_6c._1_3_,local_75);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Unable_to_create_overlay_top_005aabe0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Unable_to_create_overlay_top_005aabe0;
    pcVar6 = local_68;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_68[i] = '\0';
    local_64 = i;
  }
  local_4._0_1_ = 4;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 4),&local_6c,local_5c,0x4f);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  if (local_58 != 0) {
    cVar1 = *(char *)(local_58 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_58 + -1));
    }
    else {
      *(char *)(local_58 + -1) = cVar1 + -1;
    }
  }
  puVar3 = (undefined4 *)FUN_004b39d0(local_4c,0x3f7d70a4,0x461c4000,0x3fc90fdb);
  puVar7 = (undefined4 *)(in_ECX + 0x48);
  for (k = 0x10; k != 0; k = k + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00484360 FUN_00484360 ==== */

undefined4 FUN_00484360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00484390(param_1,param_3);
  FUN_0047ce80(param_2);
  return uVar1;
}


/* ==== 00484390 FUN_00484390 ==== */

int FUN_00484390(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint i;
  char *pcVar5;
  undefined1 local_dd;
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  void *operator_new_result;
  undefined **local_a8 [7];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
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
  puStack_8 = &LAB_0056cd29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x50);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0047cb20(param_2);
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_00484890(param_1,iVar2);
    ExceptionList = local_c;
    return iVar2;
  }
  local_bc[0] = local_dd;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s___005aac24;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aac24,~i - 1);
  local_4 = 1;
  uVar3 = FUN_004873b0(local_1c,0x7d);
  local_4._0_1_ = 2;
  local_dc[0] = local_dd;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aac2c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005aac2c,~i - 1);
  local_4._0_1_ = 3;
  local_cc[0] = local_dd;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005aac54;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aac54,~i - 1);
  local_4._0_1_ = 4;
  uVar4 = FUN_0047c9a0(local_8c,local_cc,local_dc);
  local_4._0_1_ = 5;
  uVar4 = FUN_004796b0(local_6c,uVar4,s__005aac28);
  local_4._0_1_ = 6;
  uVar3 = FUN_0047c9a0(local_2c,uVar4,uVar3);
  local_4._0_1_ = 7;
  uVar3 = FUN_0047c9a0(local_4c,uVar3,local_bc);
  local_4._0_1_ = 8;
  uVar3 = FUN_004796b0(local_7c,uVar3,s_Unable_to_create_CHudElement_005aac04);
  local_4._0_1_ = 9;
  uVar3 = FUN_0047c9a0(local_5c,uVar3,param_2);
  local_4._0_1_ = 10;
  uVar3 = FUN_004796b0(local_3c,uVar3,s___005aac00);
  local_4._0_1_ = 0xb;
  FUN_00558826();
  local_4._0_1_ = 0xc;
  FUN_00424980(&local_dd);
  local_4._0_1_ = 0xd;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 00484610 FUN_00484610 ==== */

int FUN_00484610(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint i;
  char *pcVar5;
  undefined1 local_dd;
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  void *operator_new_result;
  undefined **local_a8 [7];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
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
  puStack_8 = &LAB_0056cdbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x84);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0047beb0(param_2);
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_00484890(param_1,iVar2);
    ExceptionList = local_c;
    return iVar2;
  }
  local_bc[0] = local_dd;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s___005aac98;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aac98,~i - 1);
  local_4 = 1;
  uVar3 = FUN_004873b0(local_1c,0x94);
  local_4._0_1_ = 2;
  local_dc[0] = local_dd;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aaca0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005aaca0,~i - 1);
  local_4._0_1_ = 3;
  local_cc[0] = local_dd;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005aacc8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aacc8,~i - 1);
  local_4._0_1_ = 4;
  uVar4 = FUN_0047c9a0(local_8c,local_cc,local_dc);
  local_4._0_1_ = 5;
  uVar4 = FUN_004796b0(local_6c,uVar4,s__005aac9c);
  local_4._0_1_ = 6;
  uVar3 = FUN_0047c9a0(local_2c,uVar4,uVar3);
  local_4._0_1_ = 7;
  uVar3 = FUN_0047c9a0(local_4c,uVar3,local_bc);
  local_4._0_1_ = 8;
  uVar3 = FUN_004796b0(local_7c,uVar3,s_Unable_to_create_CHudComposite_005aac78);
  local_4._0_1_ = 9;
  uVar3 = FUN_0047c9a0(local_5c,uVar3,param_2);
  local_4._0_1_ = 10;
  uVar3 = FUN_004796b0(local_3c,uVar3,s___005aac74);
  local_4._0_1_ = 0xb;
  FUN_00558826();
  local_4._0_1_ = 0xc;
  FUN_00424980(&local_dd);
  local_4._0_1_ = 0xd;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 00484890 FUN_00484890 ==== */

void FUN_00484890(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint i;
  char *pcVar5;
  undefined1 local_d9;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined **local_a8 [7];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ce3f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_0047bc10();
  iVar3 = FUN_00484dd0(uVar2);
  if (iVar3 == 0) {
    iVar3 = *param_2;
    uVar2 = FUN_0047bde0();
    (**(code **)(iVar3 + 0x28))(uVar2);
    FUN_0047c1d0(param_2);
    ExceptionList = pvStack_10;
    return;
  }
  local_c8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s___005aad0c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aad0c,~i - 1);
  local_4 = 0;
  uVar2 = FUN_004873b0(local_6c,0xab);
  local_4._0_1_ = 1;
  local_b8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aad14;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005aad14,~i - 1);
  local_4._0_1_ = 2;
  local_d8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005aad3c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aad3c,~i - 1);
  local_4._0_1_ = 3;
  uVar4 = FUN_0047c9a0(local_1c,local_d8,local_b8);
  local_4._0_1_ = 4;
  uVar4 = FUN_004796b0(local_8c,uVar4,s__005aad10);
  local_4._0_1_ = 5;
  uVar2 = FUN_0047c9a0(local_2c,uVar4,uVar2);
  local_4._0_1_ = 6;
  uVar2 = FUN_0047c9a0(local_4c,uVar2,local_c8);
  local_4._0_1_ = 7;
  uVar2 = FUN_004796b0(local_7c,uVar2,s_Component_name_already_exists__005aacec);
  local_4._0_1_ = 8;
  uVar4 = FUN_0047bc10();
  uVar2 = FUN_0047c9a0(local_5c,uVar2,uVar4);
  local_4._0_1_ = 9;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005aace8);
  local_4._0_1_ = 10;
  FUN_00558826();
  local_4._0_1_ = 0xb;
  FUN_00424980(&local_d9);
  local_4._0_1_ = 0xc;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 00484af0 FUN_00484af0 ==== */

bool FUN_00484af0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_2c [4];
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ce59;
  pvStack_c = ExceptionList;
  local_2c[0] = (undefined1)param_1;
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aad5c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aad5c;
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
    FUN_004029e0(i);
  }
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_4 = 0;
  pcVar3 = s_Invalid_element_m_Top_in_overlay_005aad84;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  FUN_00402940(s_Invalid_element_m_Top_in_overlay_005aad84,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00487bc0(*(undefined4 *)(in_ECX + 4),local_1c,local_2c,0xbe);
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
  local_10 = (void *)0x0;
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
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))(param_1);
  ExceptionList = local_10;
  return iVar2 != 0;
}


/* ==== 00484c60 FUN_00484c60 ==== */

void FUN_00484c60(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_2c [4];
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ce73;
  pvStack_c = ExceptionList;
  local_2c[0] = (undefined1)param_1;
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aada8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aada8;
    pcVar3 = local_28;
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
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_4 = 0;
  pcVar2 = s_Invalid_element_m_Top_in_overlay_005aadd0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  FUN_00402940(s_Invalid_element_m_Top_in_overlay_005aadd0,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00487bc0(*(undefined4 *)(in_ECX + 4),local_1c,local_2c,0xd3);
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
  local_10 = (void *)0x0;
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
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  (**(code **)(**(int **)(in_ECX + 4) + 0xc))(param_1);
  ExceptionList = local_10;
  return;
}


/* ==== 00484dd0 FUN_00484dd0 ==== */

void FUN_00484dd0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_2c [4];
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ce8d;
  pvStack_c = ExceptionList;
  local_2c[0] = (undefined1)param_1;
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aadf4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aadf4;
    pcVar3 = local_28;
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
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_4 = 0;
  pcVar2 = s_Invalid_element_m_Top_in_overlay_005aae1c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  FUN_00402940(s_Invalid_element_m_Top_in_overlay_005aae1c,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00487bc0(*(undefined4 *)(in_ECX + 4),local_1c,local_2c,0xe9);
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
  local_10 = (void *)0x0;
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
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  (**(code **)(**(int **)(in_ECX + 4) + 0xc))(param_1);
  ExceptionList = local_10;
  return;
}


/* ==== 00484f60 FUN_00484f60 ==== */

void FUN_00484f60(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00484dd0(param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x14))();
  return;
}


/* ==== 00484fa0 FUN_00484fa0 ==== */

void FUN_00484fa0(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00484dd0(param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x1c))();
  return;
}


/* ==== 00484fc0 FUN_00484fc0 ==== */

void FUN_00484fc0(void)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_c8 [64];
  undefined1 local_88 [68];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  int local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  char *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0056cea7;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00485ed0(local_c8,local_88,local_34,local_2c);
  local_44[0] = local_15;
  i = 0xffffffff;
  local_40 = 0;
  pcVar2 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aae40;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_3c = 0;
  local_38 = 0;
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005aae40,~i - 1);
  local_28[0] = local_15;
  local_8._0_1_ = 1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Uninitialized_overlay_005aae68;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_Uninitialized_overlay_005aae68;
    pcVar3 = local_24;
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
    local_24[i] = '\0';
    local_20 = i;
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00487bc0(*(undefined4 *)(local_30 + 4),local_28,local_44,0x162);
  if (local_24 != (char *)0x0) {
    cVar1 = local_24[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_24 + -1);
    }
    else {
      local_24[-1] = cVar1 + -1;
    }
  }
  local_24 = (char *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_8 = local_8 & 0xffffff00;
  if (local_40 != 0) {
    cVar1 = *(char *)(local_40 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_40 + -1));
    }
    else {
      *(char *)(local_40 + -1) = cVar1 + -1;
    }
  }
  FUN_0047bda0(local_30 + 0x18);
  FUN_00486040(local_c8,local_88,local_34,local_2c);
  ExceptionList = local_10;
  return;
}


/* ==== 00485170 FUN_00485170 ==== */

undefined4 FUN_00485170(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint j;
  uint k;
  uint m;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  int i;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056cec1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (*(code *)**(undefined4 **)(in_ECX + 8))();
  i = 0;
  if (0 < iVar3) {
    do {
      auStack_2c[0] = (undefined1)param_1;
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aae90;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      j = ~j - 1;
      cVar2 = FUN_00402a00(j,1);
      if (cVar2 != '\0') {
        pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aae90;
        pcVar8 = pcStack_28;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar8 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        }
        pcStack_28[j] = '\0';
        uStack_24 = j;
      }
      iStack_4 = 0;
      uVar4 = FUN_004797e0(auStack_1c,s_Invalid_font_while_looking_for_005aaeb8,param_1);
      iStack_4._0_1_ = 1;
      FUN_00487bc0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 4) + i * 4),uVar4,auStack_2c,
                   0x180);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_004028f0(1);
      iStack_4 = 0xffffffff;
      if (pcStack_28 != (char *)0x0) {
        cVar2 = pcStack_28[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339(pcStack_28 + -1);
        }
        else {
          pcStack_28[-1] = cVar2 + -1;
        }
      }
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 4) + i * 4);
      j = *(uint *)(param_1 + 8);
      pbVar9 = &DAT_0057629c;
      if (*(byte **)(param_1 + 4) != (byte *)0x0) {
        pbVar9 = *(byte **)(param_1 + 4);
      }
      k = *(uint *)(iVar1 + 0x810);
      m = k;
      if (j <= k) {
        m = j;
      }
      bVar10 = false;
      iVar5 = 0;
      bVar11 = true;
      pbVar7 = *(byte **)(iVar1 + 0x80c);
      do {
        if (m == 0) break;
        m = m - 1;
        bVar10 = *pbVar7 < *pbVar9;
        bVar11 = *pbVar7 == *pbVar9;
        pbVar7 = pbVar7 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar11);
      if (!bVar11) {
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      }
      if (((iVar5 == 0) && (j <= k)) && (k == j)) {
        ExceptionList = pvStack_c;
        return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 4) + i * 4);
      }
      i = i + 1;
    } while (i < iVar3);
  }
  ExceptionList = pvStack_c;
  return 0;
}


/* ==== 00485340 FUN_00485340 ==== */

undefined4 FUN_00485340(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  uint i;
  char *pcVar5;
  undefined1 local_101;
  undefined4 local_100;
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  void *operator_new_result;
  undefined1 local_c8 [16];
  undefined **local_b8 [7];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
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
  puStack_8 = &LAB_0056cf69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00485170(param_1);
  if (iVar2 == 0) {
    operator_new_result = operator_new(0x818);
    local_4 = 0xd;
    if (operator_new_result == (void *)0x0) {
      local_100 = 0;
    }
    else {
      local_100 = FUN_0047e390(param_1);
    }
    local_4 = 0xffffffff;
    local_fc[0] = local_101;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aaf54;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005aaf54,~i - 1);
    local_4 = 0xe;
    uVar3 = FUN_004797e0(local_9c,s_Unable_to_create_new_font_005aaf7c,param_1);
    local_4._0_1_ = 0xf;
    FUN_00487bc0(local_100,uVar3,local_fc,0x19b);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    FUN_004028f0(1);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    FUN_004905f0(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 8),&local_100);
    ExceptionList = local_c;
    return local_100;
  }
  local_dc[0] = local_101;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s___005aaf04;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aaf04,~i - 1);
  local_4 = 0;
  uVar3 = FUN_004873b0(local_8c,0x197);
  local_4._0_1_ = 1;
  local_ec[0] = local_101;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aaf0c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005aaf0c,~i - 1);
  local_4._0_1_ = 2;
  local_c8[0] = local_101;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005aaf34;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aaf34,~i - 1);
  local_4._0_1_ = 3;
  uVar4 = FUN_0047c9a0(local_1c,local_c8,local_ec);
  local_4._0_1_ = 4;
  uVar4 = FUN_004796b0(local_6c,uVar4,s__005aaf08);
  local_4._0_1_ = 5;
  uVar3 = FUN_0047c9a0(local_2c,uVar4,uVar3);
  local_4._0_1_ = 6;
  uVar3 = FUN_0047c9a0(local_4c,uVar3,local_dc);
  local_4._0_1_ = 7;
  uVar3 = FUN_004796b0(local_7c,uVar3,s_Trying_to_add_font_with_duplicat_005aaedc);
  local_4._0_1_ = 8;
  uVar3 = FUN_0047c9a0(local_5c,uVar3,param_1);
  local_4._0_1_ = 9;
  uVar3 = FUN_004796b0(local_3c,uVar3,s___005aaed8);
  local_4._0_1_ = 10;
  FUN_00558826();
  local_4._0_1_ = 0xb;
  FUN_00424980(&local_101);
  local_4._0_1_ = 0xc;
  local_b8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_b8,&DAT_0057f730);
}


/* ==== 00485660 FUN_00485660 ==== */

undefined4
FUN_00485660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint i;
  char *pcVar5;
  undefined4 uStack_1b0;
  int *local_1ac;
  undefined1 local_1a8 [16];
  void *operator_new_result;
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  undefined **local_174 [7];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [28];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d111;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00485d50(param_2);
  if (iVar2 != 0) {
    local_184[0] = uStack_1b0._3_1_;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = s___005aafc8;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(s___005aafc8,~i - 1);
    local_4 = 0;
    uVar3 = FUN_004873b0(local_d8,0x1b4);
    local_4._0_1_ = 1;
    local_194[0] = uStack_1b0._3_1_;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aafd0;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005aafd0,~i - 1);
    local_4._0_1_ = 2;
    local_1a8[0] = uStack_1b0._3_1_;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = s_HeadUp_Display_exception_in__005aaff8;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(s_HeadUp_Display_exception_in__005aaff8,~i - 1);
    local_4._0_1_ = 3;
    uVar4 = FUN_0047c9a0(local_c8,local_1a8,local_194);
    local_4._0_1_ = 4;
    uVar4 = FUN_004796b0(local_b8,uVar4,s__005aafcc);
    local_4._0_1_ = 5;
    uVar3 = FUN_0047c9a0(local_f8,uVar4,uVar3);
    local_4._0_1_ = 6;
    uVar3 = FUN_0047c9a0(local_128,uVar3,local_184);
    local_4._0_1_ = 7;
    uVar3 = FUN_004796b0(local_118,uVar3,s_Trying_to_add_string_with_duplic_005aaf9c);
    local_4._0_1_ = 8;
    uVar3 = FUN_0047c9a0(local_108,uVar3,param_2);
    local_4._0_1_ = 9;
    uVar3 = FUN_004796b0(local_e8,uVar3,s___005aaf98);
    local_4._0_1_ = 10;
    FUN_00558826();
    local_4._0_1_ = 0xb;
    FUN_00424980((int)&uStack_1b0 + 3);
    local_4._0_1_ = 0xc;
    local_174[0] = &PTR_FUN_00576b14;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_174,&DAT_0057f730);
  }
  if (param_5 == 0) {
    operator_new_result = operator_new(0xac);
    local_4 = 0xd;
    if (operator_new_result != (void *)0x0) {
      local_1ac = (int *)FUN_0047d710(param_2,param_3,param_4,2);
      goto LAB_00485af4;
    }
  }
  else {
    if (param_5 != 1) {
      local_194[0] = uStack_1b0._3_1_;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar5 = s___005ab038;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s___005ab038,~i - 1);
      local_4 = 0xf;
      uVar3 = FUN_004873b0(local_e8,0x1c2);
      local_4._0_1_ = 0x10;
      local_184[0] = uStack_1b0._3_1_;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005ab040;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005ab040,~i - 1);
      local_4._0_1_ = 0x11;
      local_1a8[0] = uStack_1b0._3_1_;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar5 = s_HeadUp_Display_exception_in__005ab068;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_HeadUp_Display_exception_in__005ab068,~i - 1);
      local_4._0_1_ = 0x12;
      uVar4 = FUN_0047c9a0(local_108,local_1a8,local_184);
      local_4._0_1_ = 0x13;
      uVar4 = FUN_004796b0(local_118,uVar4,s__005ab03c);
      local_4._0_1_ = 0x14;
      uVar3 = FUN_0047c9a0(local_128,uVar4,uVar3);
      local_4._0_1_ = 0x15;
      uVar3 = FUN_0047c9a0(local_f8,uVar3,local_194);
      local_4._0_1_ = 0x16;
      uVar3 = FUN_004796b0(local_b8,uVar3,s_Unknown_string_type_for_005ab01c);
      local_4._0_1_ = 0x17;
      uVar3 = FUN_0047c9a0(local_c8,uVar3,param_2);
      local_4._0_1_ = 0x18;
      uVar3 = FUN_004796b0(local_d8,uVar3,s___005ab018);
      local_4._0_1_ = 0x19;
      FUN_00558826();
      local_4._0_1_ = 0x1a;
      FUN_00424980((int)&uStack_1b0 + 3);
      local_4._0_1_ = 0x1b;
      local_174[0] = &PTR_FUN_00576b14;
      FUN_004093c0(uVar3,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0x19);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_174,&DAT_0057f730);
    }
    operator_new_result = operator_new(0xac);
    local_4 = 0xe;
    if (operator_new_result != (void *)0x0) {
      local_1ac = (int *)FUN_004862e0(param_2,param_3,param_4,0);
      goto LAB_00485af4;
    }
  }
  local_1ac = (int *)0x0;
LAB_00485af4:
  local_4 = 0xffffffff;
  if (local_1ac != (int *)0x0) {
    FUN_00484890(param_1,local_1ac);
    (**(code **)(*local_1ac + 0x44))();
    FUN_004ecea0(&uStack_1b0);
    ExceptionList = pvStack_10;
    return uStack_1b0;
  }
  local_148[0] = uStack_1b0._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s___005ab0b4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005ab0b4,~i - 1);
  local_4 = 0x1c;
  uVar3 = FUN_004873b0(local_3c,0x1c7);
  local_4._0_1_ = 0x1d;
  local_158[0] = uStack_1b0._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Manag_005ab0bc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Manag_005ab0bc,~i - 1);
  local_4._0_1_ = 0x1e;
  local_138[0] = uStack_1b0._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005ab0e4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005ab0e4,~i - 1);
  local_4._0_1_ = 0x1f;
  uVar4 = FUN_0047c9a0(local_8c,local_138,local_158);
  local_4._0_1_ = 0x20;
  uVar4 = FUN_004796b0(local_1c,uVar4,s__005ab0b8);
  local_4._0_1_ = 0x21;
  uVar3 = FUN_0047c9a0(local_6c,uVar4,uVar3);
  local_4._0_1_ = 0x22;
  uVar3 = FUN_0047c9a0(local_2c,uVar3,local_148);
  local_4._0_1_ = 0x23;
  uVar3 = FUN_004796b0(local_4c,uVar3,s_Unable_to_create_new_overlay_str_005ab08c);
  local_4._0_1_ = 0x24;
  uVar3 = FUN_0047c9a0(local_7c,uVar3,param_2);
  local_4._0_1_ = 0x25;
  uVar3 = FUN_004796b0(local_5c,uVar3,s___005ab088);
  local_4 = CONCAT31(local_4._1_3_,0x26);
  FUN_00483c10(uVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 00485d20 FUN_00485d20 ==== */

void FUN_00485d20(undefined4 param_1)

{
  int in_ECX;
  
  *(char *)(in_ECX + 0x8a) = (char)param_1;
  FUN_0047bdf0(param_1);
  return;
}


/* ==== 00485d40 FUN_00485d40 ==== */

void FUN_00485d40(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x8b) = param_1;
  return;
}


/* ==== 00485d50 FUN_00485d50 ==== */

undefined4 FUN_00485d50(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *str1;
  int in_ECX;
  uint j;
  uint k;
  int i;
  char *str2;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056d12b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x10))();
  i = 0;
  if (0 < iVar2) {
    do {
      auStack_2c[0] = (undefined1)param_1;
      FUN_004028f0(0);
      j = 0xffffffff;
      str2 = s_C__Work_A2IV_Game_prog_Hud_Manag_005ab104;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *str2;
        str2 = str2 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 != '\0') {
        str2 = s_C__Work_A2IV_Game_prog_Hud_Manag_005ab104;
        str1 = pcStack_28;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)str1 = *(undefined4 *)str2;
          str2 = str2 + 4;
          str1 = str1 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *str1 = *str2;
          str2 = str2 + 1;
          str1 = str1 + 1;
        }
        FUN_004029e0(j);
      }
      iStack_4 = 0;
      uVar3 = FUN_004797e0(auStack_1c,s_Invalid_string_while_looking_for_005ab12c,param_1);
      iStack_4._0_1_ = 1;
      FUN_00487bc0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x14) + 4) + i * 4),uVar3,auStack_2c,
                   0x209);
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_004028f0(1);
      iStack_4 = 0xffffffff;
      if (pcStack_28 != (char *)0x0) {
        cVar1 = pcStack_28[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(pcStack_28 + -1);
        }
        else {
          pcStack_28[-1] = cVar1 + -1;
        }
      }
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        str2 = *(char **)(param_1 + 4);
      }
      iVar4 = FUN_0047bc10();
      str1 = *(char **)(iVar4 + 4);
      if (str1 == (char *)0x0) {
        str1 = "";
      }
      iVar4 = __strcmpi(str1,str2);
      if (iVar4 == 0) {
        ExceptionList = pvStack_c;
        return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x14) + 4) + i * 4);
      }
      i = i + 1;
    } while (i < iVar2);
  }
  ExceptionList = pvStack_c;
  return 0;
}


/* ==== 00485ed0 FUN_00485ed0 ==== */

void FUN_00485ed0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [15];
  undefined4 *puStack_4;
  
  if (DAT_0073b515 == 0) {
    *(undefined1 *)(in_ECX + 0x89) = 0;
  }
  else {
    *(undefined1 *)(in_ECX + 0x89) = 1;
  }
  FUN_004bc200(*(char *)(in_ECX + 0x88) != '\0');
  if ((*(char *)(in_ECX + 0x8a) != '\0') && (*(char *)(in_ECX + 0x8b) != '\0')) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,5);
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,6);
  }
  puVar2 = &DAT_0073b434;
  puVar3 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  puVar2 = &DAT_0073b538;
  puVar3 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_40;
  puVar3 = &DAT_0073b434;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,2,&DAT_0073b434);
  if (i != 0) {
    uVar1 = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x36,uVar1);
  }
  puVar2 = &DAT_0073b3f4;
  puVar3 = (undefined4 *)&stack0xffffffb4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)&stack0xffffffb4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puStack_4 = *puVar2;
    puVar2 = puVar2 + 1;
    puStack_4 = puStack_4 + 1;
  }
  puVar2 = (undefined4 *)(in_ECX + 0x48);
  puVar3 = (undefined4 *)&stack0xffffffb4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)&stack0xffffffb4;
  puVar3 = &DAT_0073b3f4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
  if (i != 0) {
    uVar1 = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x59,uVar1);
  }
  return;
}


/* ==== 00486040 FUN_00486040 ==== */

void FUN_00486040(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [15];
  undefined4 *puStack_4;
  
  puVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_40;
  puVar3 = &DAT_0073b434;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,2,&DAT_0073b434);
  if (i != 0) {
    uVar1 = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x36,uVar1);
  }
  puVar2 = puStack_4;
  puVar3 = (undefined4 *)&stack0xffffffb4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)&stack0xffffffb4;
  puVar3 = &DAT_0073b3f4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
  if (i != 0) {
    uVar1 = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x59,uVar1);
  }
  if (DAT_0073b4fd != 1) {
    DAT_0073b4fd = 1;
    i = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,7,1);
    if (i != 0) {
      uVar1 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____ZBUFFER__error_setting_0059c150,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x177,uVar1);
    }
  }
  if ((*(char *)(in_ECX + 0x8a) != '\0') && (*(char *)(in_ECX + 0x8b) != '\0')) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
  }
  FUN_004bc200(*(undefined1 *)(in_ECX + 0x89));
  return;
}


