/* spel.dat — game/Hud_Utils.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00487370 FUN_00487370 ==== */

void __thiscall FUN_00487370(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00576bb8;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004873b0 FUN_004873b0 ==== */

undefined1 * FUN_004873b0(undefined1 *this_val,undefined4 param_2)

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
  *(undefined4 *)(this_val + 4) = 0;
  i = ~i - 1;
  *this_val = local_85;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_0048747c;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_0048747c:
  pcVar3 = local_80;
  pcVar4 = *(char **)(this_val + 4);
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
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(*(int *)(this_val + 4) + i) = 0;
  return this_val;
}


/* ==== 004874b0 FUN_004874b0 ==== */

undefined1 * FUN_004874b0(undefined1 *this_val,float param_2)

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
  *this_val = local_85;
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
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_00487581;
    FUN_004028f0(this_val);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val);
    return this_val;
  }
  FUN_00402b20(this_val);
LAB_00487581:
  pcVar3 = local_80;
  pcVar4 = *(char **)(this_val + 4);
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
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(*(int *)(this_val + 4) + i) = 0;
  return this_val;
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

undefined1 * FUN_004876f0(undefined1 *this_val,int param_2)

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
  *this_val = local_85;
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_004877af;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_004877af:
  pcVar3 = local_80;
  pcVar4 = *(char **)(this_val + 4);
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
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(*(int *)(this_val + 4) + i) = 0;
  return this_val;
}


/* ==== 004877e0 FUN_004877e0 ==== */

undefined1 * FUN_004877e0(undefined1 *this_val,int param_2,int param_3)

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
  *this_val = local_85;
  *(undefined4 *)(this_val + 4) = 0;
  pcVar5 = local_80;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_004878c1;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_004878c1:
  pcVar5 = local_80;
  pcVar6 = *(char **)(this_val + 4);
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
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(*(int *)(this_val + 4) + i) = 0;
  return this_val;
}


/* ==== 004878f0 FUN_004878f0 ==== */

void FUN_004878f0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint i;
  char *pcVar8;
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
  iVar2 = FUN_004873b0(local_6c,param_3);
  local_4 = 0;
  iVar3 = FUN_004873b0(local_1c,param_2);
  local_4._0_1_ = 1;
  iVar4 = FUN_004873b0(local_ec,param_1);
  local_4._0_1_ = 2;
  FUN_004028f0(local_148,0);
  i = 0xffffffff;
  pcVar8 = s___005ab32c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_148,s___005ab32c,~i - 1);
  local_4._0_1_ = 3;
  iVar5 = FUN_004873b0(local_4c,0xb5);
  local_4._0_1_ = 4;
  FUN_004028f0(local_158,0);
  i = 0xffffffff;
  pcVar8 = s_C__Work_A2IV_Game_prog_Hud_Utils_005ab334;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_158,s_C__Work_A2IV_Game_prog_Hud_Utils_005ab334,~i - 1);
  local_4._0_1_ = 5;
  FUN_004028f0(local_138,0);
  i = 0xffffffff;
  pcVar8 = s_HeadUp_Display_exception_in__005ab35c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_138,s_HeadUp_Display_exception_in__005ab35c,~i - 1);
  local_4._0_1_ = 6;
  puVar6 = (undefined1 *)FUN_0047c9a0(local_cc,local_138,(int)local_158);
  local_4._0_1_ = 7;
  puVar6 = (undefined1 *)FUN_004796b0(local_10c,puVar6,s__005ab330);
  local_4._0_1_ = 8;
  puVar6 = (undefined1 *)FUN_0047c9a0(local_ac,puVar6,iVar5);
  local_4._0_1_ = 9;
  puVar6 = (undefined1 *)FUN_0047c9a0(local_2c,puVar6,(int)local_148);
  local_4._0_1_ = 10;
  puVar6 = (undefined1 *)FUN_004796b0(local_8c,puVar6,s_Illegal_value_005ab31c);
  local_4._0_1_ = 0xb;
  puVar6 = (undefined1 *)FUN_0047c9a0(local_fc,puVar6,iVar4);
  local_4._0_1_ = 0xc;
  puVar6 = (undefined1 *)FUN_004796b0(local_dc,puVar6,s_for_range___005ab30c);
  local_4._0_1_ = 0xd;
  puVar6 = (undefined1 *)FUN_0047c9a0(local_bc,puVar6,iVar3);
  local_4._0_1_ = 0xe;
  puVar6 = (undefined1 *)FUN_004796b0(local_9c,puVar6,s___005ab308);
  local_4._0_1_ = 0xf;
  puVar6 = (undefined1 *)FUN_0047c9a0(local_7c,puVar6,iVar2);
  local_4._0_1_ = 0x10;
  puVar6 = (undefined1 *)FUN_004796b0(local_5c,puVar6,s___005ab304);
  local_4._0_1_ = 0x11;
  uVar7 = FUN_004796b0(local_3c,puVar6,s___005ab300);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_00483c10(local_128,uVar7);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_128,&DAT_0057f730);
}


/* ==== 00487bc0 FUN_00487bc0 ==== */

void FUN_00487bc0(int param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d43e;
  local_c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_004873b0(local_78,param_4);
    local_4 = 0;
    puVar2 = (undefined1 *)FUN_004796b0(local_68,param_2,s___Invalid_NULL_pointer_in_005ab380);
    local_4._0_1_ = 1;
    puVar2 = (undefined1 *)FUN_0047c9a0(local_58,puVar2,param_3);
    local_4._0_1_ = 2;
    puVar2 = (undefined1 *)FUN_004796b0(local_48,puVar2,s__005ab37c);
    local_4._0_1_ = 3;
    uVar3 = FUN_0047c9a0(local_38,puVar2,iVar1);
    local_4._0_1_ = 4;
    FUN_00558826(local_28);
    local_4._0_1_ = 5;
    local_1c[0] = 0;
    FUN_004028f0(local_1c,0);
    local_4._0_1_ = 6;
    local_28[0] = &PTR_FUN_00576b14;
    FUN_004093c0(local_1c,uVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_0057f730);
  }
  return;
}


/* ==== 00487ce0 FUN_00487ce0 ==== */

void FUN_00487ce0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  void *this;
  undefined **local_98 [3];
  undefined1 local_8c [16];
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
  iVar1 = FUN_004873b0(local_4c,param_3);
  local_4 = 0;
  puVar2 = (undefined1 *)FUN_004797e0(this,local_1c,s_Expression___005ab3b0,param_1);
  local_4._0_1_ = 1;
  puVar2 = (undefined1 *)FUN_004796b0(local_2c,puVar2,s___failed___005ab3a4);
  local_4._0_1_ = 2;
  puVar2 = (undefined1 *)FUN_0047c9a0(local_7c,puVar2,param_2);
  local_4._0_1_ = 3;
  puVar2 = (undefined1 *)FUN_004796b0(local_6c,puVar2,s__005ab3a0);
  local_4._0_1_ = 4;
  puVar2 = (undefined1 *)FUN_0047c9a0(local_5c,puVar2,iVar1);
  local_4._0_1_ = 5;
  uVar3 = FUN_004796b0(local_3c,puVar2,s___005ab39c);
  local_4._0_1_ = 6;
  FUN_00558826(local_98);
  local_4._0_1_ = 7;
  FUN_004028f0(local_8c,0);
  local_4._0_1_ = 8;
  local_98[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_8c,uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,6);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_98,&DAT_0057f730);
}


