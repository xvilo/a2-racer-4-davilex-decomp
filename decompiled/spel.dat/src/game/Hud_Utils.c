/* spel.dat — game/Hud_Utils.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00487370 FUN_00487370 ==== */

void FUN_00487370(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00576bb8;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[1] = 0;
  return;
}


/* ==== 004873b0 FUN_004873b0 ==== */

undefined1 * FUN_004873b0(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_85;
  char local_80 [127];
  undefined1 local_1;
  
  FUN_00559677(local_80,0x7e,s__d_005ab2d0,param_2);
  i = 0xffffffff;
  local_1 = 0;
  pcVar3 = local_80;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 4) = 0;
  i = ~i - 1;
  *param_1 = local_85;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (i <= *(uint *)(param_1 + 0xc))) goto LAB_0048747c;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return param_1;
  }
  FUN_00402b20(i);
LAB_0048747c:
  pcVar3 = local_80;
  pcVar4 = *(char **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = i;
  *(undefined1 *)(*(int *)(param_1 + 4) + i) = 0;
  return param_1;
}


/* ==== 004874b0 FUN_004874b0 ==== */

undefined1 * FUN_004874b0(undefined1 *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_85;
  char local_80 [127];
  undefined1 local_1;
  
  FUN_00559677(local_80,0x7e,s__f_005ab2d4,(double)param_2);
  *param_1 = local_85;
  i = 0xffffffff;
  local_1 = 0;
  pcVar3 = local_80;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0();
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (i <= *(uint *)(param_1 + 0xc))) goto LAB_00487581;
    FUN_004028f0();
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0();
    return param_1;
  }
  FUN_00402b20();
LAB_00487581:
  pcVar3 = local_80;
  pcVar4 = *(char **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = i;
  *(undefined1 *)(*(int *)(param_1 + 4) + i) = 0;
  return param_1;
}


/* ==== 004875b0 FUN_004875b0 ==== */

void FUN_004875b0(int param_1)

{
  char cVar1;
  int i;
  char *pcVar2;
  char *pcVar3;
  char *local_84;
  char local_80 [128];
  
  FUN_004c3f10(param_1,local_80,0x7f);
  i = FUN_00558d27(local_80,s__f_005ab2d8);
  if (i != 0) {
    return;
  }
  i = -1;
  pcVar2 = local_80;
  do {
    pcVar3 = pcVar2;
    if (i == 0) break;
    i = i + -1;
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar3 + -1) = s___Bad_float_005ab2dc._0_4_;
  *(undefined4 *)(pcVar3 + 3) = s___Bad_float_005ab2dc._4_4_;
  local_84 = local_80;
  *(undefined4 *)(pcVar3 + 7) = s___Bad_float_005ab2dc._8_4_;
  pcVar3[0xb] = s___Bad_float_005ab2dc[0xc];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_84,&DAT_0057d508);
}


/* ==== 00487640 FUN_00487640 ==== */

float10 FUN_00487640(int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int i;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  float local_88;
  char *local_84;
  char local_80 [128];
  
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3d10(puVar3,puVar2,local_80,0x7f);
  i = FUN_00558d27(local_80,s__f_005ab2ec);
  if (i != 0) {
    return (float10)local_88;
  }
  i = -1;
  pcVar4 = local_80;
  do {
    pcVar5 = pcVar4;
    if (i == 0) break;
    i = i + -1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar5 + -1) = s___Bad_float_005ab2f0._0_4_;
  *(undefined4 *)(pcVar5 + 3) = s___Bad_float_005ab2f0._4_4_;
  local_84 = local_80;
  *(undefined4 *)(pcVar5 + 7) = s___Bad_float_005ab2f0._8_4_;
  pcVar5[0xb] = s___Bad_float_005ab2f0[0xc];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_84,&DAT_0057d508);
}


/* ==== 004876f0 FUN_004876f0 ==== */

undefined1 * FUN_004876f0(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_85;
  char local_80 [128];
  
  FUN_004c3f10(param_2,local_80,0x7f);
  i = 0xffffffff;
  pcVar3 = local_80;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  *param_1 = local_85;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (i <= *(uint *)(param_1 + 0xc))) goto LAB_004877af;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return param_1;
  }
  FUN_00402b20(i);
LAB_004877af:
  pcVar3 = local_80;
  pcVar4 = *(char **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = i;
  *(undefined1 *)(*(int *)(param_1 + 4) + i) = 0;
  return param_1;
}


/* ==== 004877e0 FUN_004877e0 ==== */

undefined1 * FUN_004877e0(undefined1 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint i;
  uint j;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_85;
  char local_80 [128];
  
  puVar4 = &DAT_0057629c;
  if (*(undefined1 **)(param_3 + 4) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_3 + 4);
  }
  puVar3 = *(undefined1 **)(param_2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3d10(puVar3,puVar4,local_80,0x7f);
  i = 0xffffffff;
  *param_1 = local_85;
  *(undefined4 *)(param_1 + 4) = 0;
  pcVar5 = local_80;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (i <= *(uint *)(param_1 + 0xc))) goto LAB_004878c1;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return param_1;
  }
  FUN_00402b20(i);
LAB_004878c1:
  pcVar5 = local_80;
  pcVar6 = *(char **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = i;
  *(undefined1 *)(*(int *)(param_1 + 4) + i) = 0;
  return param_1;
}


/* ==== 004878f0 FUN_004878f0 ==== */

void FUN_004878f0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint i;
  char *pcVar7;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [28];
  undefined1 local_10c [16];
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
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
  puStack_8 = &LAB_0056d3fc;
  local_c = ExceptionList;
  if ((param_2 <= param_1) && (param_1 <= param_3)) {
    return;
  }
  ExceptionList = &local_c;
  uVar2 = FUN_004873b0(local_6c,param_3);
  local_4 = 0;
  uVar3 = FUN_004873b0(local_1c,param_2);
  local_4._0_1_ = 1;
  uVar4 = FUN_004873b0(local_ec,param_1);
  local_4._0_1_ = 2;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s___005ab32c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005ab32c,~i - 1);
  local_4._0_1_ = 3;
  uVar5 = FUN_004873b0(local_4c,0xb5);
  local_4._0_1_ = 4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Utils_005ab334;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Utils_005ab334,~i - 1);
  local_4._0_1_ = 5;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005ab35c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005ab35c,~i - 1);
  local_4._0_1_ = 6;
  uVar6 = FUN_0047c9a0(local_cc,local_138,local_158);
  local_4._0_1_ = 7;
  uVar6 = FUN_004796b0(local_10c,uVar6,s__005ab330);
  local_4._0_1_ = 8;
  uVar5 = FUN_0047c9a0(local_ac,uVar6,uVar5);
  local_4._0_1_ = 9;
  uVar5 = FUN_0047c9a0(local_2c,uVar5,local_148);
  local_4._0_1_ = 10;
  uVar5 = FUN_004796b0(local_8c,uVar5,s_Illegal_value_005ab31c);
  local_4._0_1_ = 0xb;
  uVar4 = FUN_0047c9a0(local_fc,uVar5,uVar4);
  local_4._0_1_ = 0xc;
  uVar4 = FUN_004796b0(local_dc,uVar4,s_for_range___005ab30c);
  local_4._0_1_ = 0xd;
  uVar3 = FUN_0047c9a0(local_bc,uVar4,uVar3);
  local_4._0_1_ = 0xe;
  uVar3 = FUN_004796b0(local_9c,uVar3,s___005ab308);
  local_4._0_1_ = 0xf;
  uVar2 = FUN_0047c9a0(local_7c,uVar3,uVar2);
  local_4._0_1_ = 0x10;
  uVar2 = FUN_004796b0(local_5c,uVar2,s___005ab304);
  local_4._0_1_ = 0x11;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005ab300);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_00483c10(uVar2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_128,&DAT_0057f730);
}


/* ==== 00487bc0 FUN_00487bc0 ==== */

void FUN_00487bc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d43e;
  local_c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_004873b0(local_78,param_4);
    local_4 = 0;
    uVar2 = FUN_004796b0(local_68,param_2,s___Invalid_NULL_pointer_in_005ab380);
    local_4._0_1_ = 1;
    uVar2 = FUN_0047c9a0(local_58,uVar2,param_3);
    local_4._0_1_ = 2;
    uVar2 = FUN_004796b0(local_48,uVar2,s__005ab37c);
    local_4._0_1_ = 3;
    uVar1 = FUN_0047c9a0(local_38,uVar2,uVar1);
    local_4._0_1_ = 4;
    FUN_00558826();
    local_4._0_1_ = 5;
    local_1c = 0;
    FUN_004028f0(0);
    local_4._0_1_ = 6;
    local_28[0] = &PTR_FUN_00576b14;
    FUN_004093c0(uVar1,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_0057f730);
  }
  return;
}


/* ==== 00487ce0 FUN_00487ce0 ==== */

void FUN_00487ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined **local_98 [7];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d496;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004873b0(local_4c,param_3);
  local_4 = 0;
  uVar2 = FUN_004797e0(local_1c,s_Expression___005ab3b0,param_1);
  local_4._0_1_ = 1;
  uVar2 = FUN_004796b0(local_2c,uVar2,s___failed___005ab3a4);
  local_4._0_1_ = 2;
  uVar2 = FUN_0047c9a0(local_7c,uVar2,param_2);
  local_4._0_1_ = 3;
  uVar2 = FUN_004796b0(local_6c,uVar2,s__005ab3a0);
  local_4._0_1_ = 4;
  uVar1 = FUN_0047c9a0(local_5c,uVar2,uVar1);
  local_4._0_1_ = 5;
  uVar1 = FUN_004796b0(local_3c,uVar1,s___005ab39c);
  local_4._0_1_ = 6;
  FUN_00558826();
  local_4._0_1_ = 7;
  FUN_004028f0(0);
  local_4._0_1_ = 8;
  local_98[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar1,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,6);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_98,&DAT_0057f730);
}


