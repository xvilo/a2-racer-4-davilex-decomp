/* spel.dat — game/Hud_String.cpp: 8 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004869e0 FUN_004869e0 ==== */

void FUN_004869e0(int param_1,float param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  uint i;
  float10 fVar4;
  float10 fVar5;
  float local_10;
  float local_c [3];
  
  i = 0;
  local_10 = 0.0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      FUN_00487200();
      if (*(int *)(param_1 + 4) == 0) {
        pbVar1 = &DAT_0057629c;
      }
      else {
        pbVar1 = (byte *)(*(int *)(param_1 + 4) + i);
      }
      uVar3 = (uint)*pbVar1;
      FUN_004871c0(uVar3);
      uVar2 = FUN_0047e4e0(uVar3);
      FUN_0047ce40(uVar2);
      if (*(int *)(param_1 + 4) == 0) {
        pbVar1 = &DAT_0057629c;
      }
      else {
        pbVar1 = (byte *)(*(int *)(param_1 + 4) + i);
      }
      uVar3 = (uint)*pbVar1;
      FUN_004871c0(uVar3);
      fVar4 = (float10)FUN_0047e5d0(uVar3);
      local_c[1] = 0.0;
      local_c[2] = 0.0;
      local_c[0] = (float)(fVar4 * (float10)param_2 * (float10)0.5 + (float10)local_10);
      FUN_0047bc50(local_c);
      FUN_004871c0();
      fVar5 = (float10)FUN_0047e6e0();
      i = i + 1;
      local_10 = (float)(fVar5 * (float10)param_2 + (float10)(float)(fVar4 * (float10)param_2) +
                        (float10)local_10);
    } while (i < *(uint *)(param_1 + 8));
  }
  return;
}


/* ==== 00486ad0 FUN_00486ad0 ==== */

void FUN_00486ad0(float param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint j;
  float10 fVar7;
  float10 fVar8;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  int i;
  
  iVar2 = (int)param_1;
  FUN_004871c0();
  fVar7 = (float10)FUN_0047e6e0();
  i = *(int *)((int)param_1 + 8);
  fVar7 = fVar7 * (float10)(*(int *)(in_ECX + 0x98) + -1) * (float10)param_2;
  while( true ) {
    i = i + -1;
    if (i < 0) break;
    if (*(int *)((int)param_1 + 4) == 0) {
      pbVar3 = &DAT_0057629c;
    }
    else {
      pbVar3 = (byte *)(*(int *)((int)param_1 + 4) + i);
    }
    j = (uint)*pbVar3;
    FUN_004871c0(j);
    fVar8 = (float10)FUN_0047e5d0(j);
    fVar7 = fVar8 * (float10)param_2 + (float10)(float)fVar7;
  }
  piVar1 = (int *)((int)param_1 + 8);
  j = 0;
  param_1 = (float)fVar7 * -0.5;
  if (*piVar1 != 0) {
    do {
      FUN_00487200();
      if (*(int *)(iVar2 + 4) == 0) {
        puVar4 = &DAT_0057629c;
      }
      else {
        puVar4 = (undefined1 *)(*(int *)(iVar2 + 4) + j);
      }
      uVar5 = CONCAT31((int3)((uint)puVar4 >> 8),*puVar4);
      FUN_004871c0(uVar5);
      uVar5 = FUN_0047e4e0(uVar5);
      FUN_0047ce40(uVar5);
      if (*(int *)(iVar2 + 4) == 0) {
        pbVar3 = &DAT_0057629c;
      }
      else {
        pbVar3 = (byte *)(*(int *)(iVar2 + 4) + j);
      }
      uVar6 = (uint)*pbVar3;
      FUN_004871c0(uVar6);
      fVar7 = (float10)FUN_0047e5d0(uVar6);
      local_8 = 0;
      local_4 = 0;
      local_c = (float)(fVar7 * (float10)param_2 * (float10)0.5 + (float10)param_1);
      FUN_0047bc50(&local_c);
      FUN_004871c0();
      fVar8 = (float10)FUN_0047e6e0();
      j = j + 1;
      param_1 = (float)(fVar8 * (float10)param_2 + (float10)(float)(fVar7 * (float10)param_2) +
                       (float10)param_1);
    } while (j < *(uint *)(iVar2 + 8));
  }
  return;
}


/* ==== 00486c20 FUN_00486c20 ==== */

void FUN_00486c20(int param_1,float param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  int i;
  
  i = *(int *)(param_1 + 8);
  local_10 = 0.0;
  while (i = i + -1, -1 < i) {
    FUN_00487200();
    if (*(int *)(param_1 + 4) == 0) {
      pbVar1 = &DAT_0057629c;
    }
    else {
      pbVar1 = (byte *)(*(int *)(param_1 + 4) + i);
    }
    uVar3 = (uint)*pbVar1;
    FUN_004871c0(uVar3);
    uVar2 = FUN_0047e4e0(uVar3);
    FUN_0047ce40(uVar2);
    if (*(int *)(param_1 + 4) == 0) {
      pbVar1 = &DAT_0057629c;
    }
    else {
      pbVar1 = (byte *)(*(int *)(param_1 + 4) + i);
    }
    uVar3 = (uint)*pbVar1;
    FUN_004871c0(uVar3);
    fVar4 = (float10)FUN_0047e5d0(uVar3);
    local_8 = 0;
    local_4 = 0;
    local_c = (float)((float10)local_10 - fVar4 * (float10)param_2 * (float10)0.5);
    FUN_0047bc50(&local_c);
    FUN_004871c0();
    fVar5 = (float10)FUN_0047e6e0();
    local_10 = (float)((float10)local_10 -
                      (fVar5 * (float10)param_2 + (float10)(float)(fVar4 * (float10)param_2)));
  }
  return;
}


/* ==== 00486d30 FUN_00486d30 ==== */

void FUN_00486d30(byte param_1)

{
  FUN_0047e2b0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00486d50 FUN_00486d50 ==== */

void FUN_00486d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  uint i;
  char *pcVar4;
  undefined1 local_e1;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  void *operator_new_result;
  undefined1 local_bc [20];
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
  puStack_8 = &LAB_0056d315;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047beb0(param_1);
  local_4 = 0;
  in_ECX[0x21] = &PTR_LAB_00576bb8;
  operator_new_result = operator_new(0x10);
  local_4._0_1_ = 1;
  if (operator_new_result == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00424980(&local_e1);
  }
  in_ECX[0x22] = uVar2;
  in_ECX[0x26] = param_2;
  in_ECX[0x23] = param_3;
  in_ECX[0x24] = param_4;
  in_ECX[0x25] = 0x3f800000;
  local_4._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0x27) = local_e1;
  FUN_004028f0(0);
  local_4._0_1_ = 3;
  *in_ECX = &PTR_LAB_00576bc8;
  if (0 < (int)in_ECX[0x26]) {
    ExceptionList = local_c;
    return;
  }
  local_bc[0] = local_e1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s___005ab280;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005ab280,~i - 1);
  local_4._0_1_ = 4;
  uVar2 = FUN_004873b0(local_1c,0x22);
  local_4._0_1_ = 5;
  local_e0[0] = local_e1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_C__Work_A2IV_Game_prog_Hud_Strin_005ab288;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Strin_005ab288,~i - 1);
  local_4._0_1_ = 6;
  local_d0[0] = local_e1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_HeadUp_Display_exception_in__005ab2b0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005ab2b0,~i - 1);
  local_4._0_1_ = 7;
  uVar3 = FUN_0047c9a0(local_8c,local_d0,local_e0);
  local_4._0_1_ = 8;
  uVar3 = FUN_004796b0(local_6c,uVar3,s__005ab284);
  local_4._0_1_ = 9;
  uVar2 = FUN_0047c9a0(local_2c,uVar3,uVar2);
  local_4._0_1_ = 10;
  uVar2 = FUN_0047c9a0(local_4c,uVar2,local_bc);
  local_4._0_1_ = 0xb;
  uVar2 = FUN_004796b0(local_7c,uVar2,s_Empty_string_005ab270);
  local_4._0_1_ = 0xc;
  uVar2 = FUN_0047c9a0(local_5c,uVar2,param_1);
  local_4._0_1_ = 0xd;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005ab26c);
  local_4._0_1_ = 0xe;
  FUN_00558826();
  local_4._0_1_ = 0xf;
  FUN_00424980(&local_e1);
  local_4._0_1_ = 0x10;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 004871c0 FUN_004871c0 ==== */

undefined4 FUN_004871c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x8c);
}


/* ==== 004871d0 FUN_004871d0 ==== */

undefined4 FUN_004871d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x90);
}


/* ==== 00487200 FUN_00487200 ==== */

int FUN_00487200(void)

{
  int in_ECX;
  
  return in_ECX + 0x84;
}


