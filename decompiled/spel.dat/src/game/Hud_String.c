/* spel.dat — game/Hud_String.cpp: 8 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004869e0 FUN_004869e0 ==== */

void __thiscall FUN_004869e0(void *this,int param_2,float param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 this_val;
  undefined4 this_val_2;
  uint uVar3;
  uint i;
  float10 fVar4;
  float10 fVar5;
  float local_10;
  float local_c [3];
  
  i = 0;
  local_10 = 0.0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      iVar1 = FUN_00487200(this);
      this_val_2 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 4) + i * 4);
      if (*(int *)(param_2 + 4) == 0) {
        pbVar2 = &DAT_0057629c;
      }
      else {
        pbVar2 = (byte *)(*(int *)(param_2 + 4) + i);
      }
      uVar3 = (uint)*pbVar2;
      this_val = FUN_004871c0(this,uVar3);
      this_val = FUN_0047e4e0(this_val,uVar3);
      FUN_0047ce40(this_val_2,this_val);
      if (*(int *)(param_2 + 4) == 0) {
        pbVar2 = &DAT_0057629c;
      }
      else {
        pbVar2 = (byte *)(*(int *)(param_2 + 4) + i);
      }
      uVar3 = (uint)*pbVar2;
      this_val = FUN_004871c0(this,uVar3);
      fVar4 = (float10)FUN_0047e5d0(this_val,uVar3);
      local_c[1] = 0.0;
      local_c[2] = 0.0;
      local_c[0] = (float)(fVar4 * (float10)param_3 * (float10)0.5 + (float10)local_10);
      FUN_0047bc50(this_val_2,local_c);
      this_val_2 = FUN_004871c0(this);
      fVar5 = (float10)FUN_0047e6e0(this_val_2);
      i = i + 1;
      local_10 = (float)(fVar5 * (float10)param_3 + (float10)(float)(fVar4 * (float10)param_3) +
                        (float10)local_10);
    } while (i < *(uint *)(param_2 + 8));
  }
  return;
}


/* ==== 00486ad0 FUN_00486ad0 ==== */

void __thiscall FUN_00486ad0(void *this,float param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 this_val;
  byte *pbVar3;
  int i;
  undefined1 *puVar4;
  undefined4 this_val_2;
  undefined4 this_val_3;
  uint uVar5;
  uint j;
  float10 fVar6;
  float10 fVar7;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = (int)param_2;
  this_val = FUN_004871c0();
  fVar6 = (float10)FUN_0047e6e0(this_val);
  i = *(int *)((int)param_2 + 8);
  fVar6 = fVar6 * (float10)(*(int *)((int)this + 0x98) + -1) * (float10)param_3;
  while( true ) {
    i = i + -1;
    if (i < 0) break;
    if (*(int *)((int)param_2 + 4) == 0) {
      pbVar3 = &DAT_0057629c;
    }
    else {
      pbVar3 = (byte *)(*(int *)((int)param_2 + 4) + i);
    }
    j = (uint)*pbVar3;
    this_val = FUN_004871c0(this,j);
    fVar7 = (float10)FUN_0047e5d0(this_val,j);
    fVar6 = fVar7 * (float10)param_3 + (float10)(float)fVar6;
  }
  piVar1 = (int *)((int)param_2 + 8);
  j = 0;
  param_2 = (float)fVar6 * -0.5;
  if (*piVar1 != 0) {
    do {
      i = FUN_00487200(this);
      this_val = *(undefined4 *)(*(int *)(*(int *)(i + 4) + 4) + j * 4);
      if (*(int *)(iVar2 + 4) == 0) {
        puVar4 = &DAT_0057629c;
      }
      else {
        puVar4 = (undefined1 *)(*(int *)(iVar2 + 4) + j);
      }
      this_val_3 = CONCAT31((int3)((uint)puVar4 >> 8),*puVar4);
      this_val_2 = FUN_004871c0(this,this_val_3);
      this_val_3 = FUN_0047e4e0(this_val_2,this_val_3);
      FUN_0047ce40(this_val,this_val_3);
      if (*(int *)(iVar2 + 4) == 0) {
        pbVar3 = &DAT_0057629c;
      }
      else {
        pbVar3 = (byte *)(*(int *)(iVar2 + 4) + j);
      }
      uVar5 = (uint)*pbVar3;
      this_val_3 = FUN_004871c0(this,uVar5);
      fVar6 = (float10)FUN_0047e5d0(this_val_3,uVar5);
      local_8 = 0;
      local_4 = 0;
      local_c = (float)(fVar6 * (float10)param_3 * (float10)0.5 + (float10)param_2);
      FUN_0047bc50(this_val,&local_c);
      this_val = FUN_004871c0(this);
      fVar7 = (float10)FUN_0047e6e0(this_val);
      j = j + 1;
      param_2 = (float)(fVar7 * (float10)param_3 + (float10)(float)(fVar6 * (float10)param_3) +
                       (float10)param_2);
    } while (j < *(uint *)(iVar2 + 8));
  }
  return;
}


/* ==== 00486c20 FUN_00486c20 ==== */

void __thiscall FUN_00486c20(void *this,int param_2,float param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 this_val;
  undefined4 this_val_2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  int i;
  
  i = *(int *)(param_2 + 8);
  local_10 = 0.0;
  while (i = i + -1, -1 < i) {
    iVar1 = FUN_00487200(this);
    this_val_2 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 4) + i * 4);
    if (*(int *)(param_2 + 4) == 0) {
      pbVar2 = &DAT_0057629c;
    }
    else {
      pbVar2 = (byte *)(*(int *)(param_2 + 4) + i);
    }
    uVar3 = (uint)*pbVar2;
    this_val = FUN_004871c0(this,uVar3);
    this_val = FUN_0047e4e0(this_val,uVar3);
    FUN_0047ce40(this_val_2,this_val);
    if (*(int *)(param_2 + 4) == 0) {
      pbVar2 = &DAT_0057629c;
    }
    else {
      pbVar2 = (byte *)(*(int *)(param_2 + 4) + i);
    }
    uVar3 = (uint)*pbVar2;
    this_val = FUN_004871c0(this,uVar3);
    fVar4 = (float10)FUN_0047e5d0(this_val,uVar3);
    local_8 = 0;
    local_4 = 0;
    local_c = (float)((float10)local_10 - fVar4 * (float10)param_3 * (float10)0.5);
    FUN_0047bc50(this_val_2,&local_c);
    this_val_2 = FUN_004871c0(this);
    fVar5 = (float10)FUN_0047e6e0(this_val_2);
    local_10 = (float)((float10)local_10 -
                      (fVar5 * (float10)param_3 + (float10)(float)(fVar4 * (float10)param_3)));
  }
  return;
}


/* ==== 00486d30 FUN_00486d30 ==== */

void * __thiscall FUN_00486d30(void *this,byte param_2)

{
  FUN_0047e2b0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00486d50 FUN_00486d50 ==== */

void * __thiscall
FUN_00486d50(void *this,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  char *pcVar5;
  undefined1 local_e1;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  void *this_val;
  undefined1 local_bc [16];
  void *local_ac;
  undefined **local_a8 [3];
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
  puStack_8 = &LAB_0056d315;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_ac = this;
  FUN_0047beb0(this,param_2);
  local_4 = 0;
  *(undefined ***)((int)this + 0x84) = &PTR_LAB_00576bb8;
  this_val = operator_new(0x10);
  local_4._0_1_ = 1;
  if (this_val == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00424980(this_val,&local_e1);
  }
  *(undefined4 *)((int)this + 0x88) = uVar2;
  *(undefined4 *)((int)this + 0x98) = param_3;
  *(undefined4 *)((int)this + 0x8c) = param_4;
  *(undefined4 *)((int)this + 0x90) = param_5;
  *(undefined4 *)((int)this + 0x94) = 0x3f800000;
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 0x9c) = local_e1;
  FUN_004028f0((undefined1 *)((int)this + 0x9c),0);
  local_4._0_1_ = 3;
  *(undefined ***)this = &PTR_LAB_00576bc8;
  if (0 < *(int *)((int)this + 0x98)) {
    ExceptionList = local_c;
    return this;
  }
  local_bc[0] = local_e1;
  FUN_004028f0(local_bc,0);
  i = 0xffffffff;
  pcVar5 = s___005ab280;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_bc,s___005ab280,~i - 1);
  local_4._0_1_ = 4;
  iVar3 = FUN_004873b0(local_1c,0x22);
  local_4._0_1_ = 5;
  local_e0[0] = local_e1;
  FUN_004028f0(local_e0,0);
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Strin_005ab288;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e0,s_C__Work_A2IV_Game_prog_Hud_Strin_005ab288,~i - 1);
  local_4._0_1_ = 6;
  local_d0[0] = local_e1;
  FUN_004028f0(local_d0,0);
  i = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005ab2b0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d0,s_HeadUp_Display_exception_in__005ab2b0,~i - 1);
  local_4._0_1_ = 7;
  puVar4 = (undefined1 *)FUN_0047c9a0(local_8c,local_d0,(int)local_e0);
  local_4._0_1_ = 8;
  puVar4 = (undefined1 *)FUN_004796b0(local_6c,puVar4,s__005ab284);
  local_4._0_1_ = 9;
  puVar4 = (undefined1 *)FUN_0047c9a0(local_2c,puVar4,iVar3);
  local_4._0_1_ = 10;
  puVar4 = (undefined1 *)FUN_0047c9a0(local_4c,puVar4,(int)local_bc);
  local_4._0_1_ = 0xb;
  puVar4 = (undefined1 *)FUN_004796b0(local_7c,puVar4,s_Empty_string_005ab270);
  local_4._0_1_ = 0xc;
  puVar4 = (undefined1 *)FUN_0047c9a0(local_5c,puVar4,param_2);
  local_4._0_1_ = 0xd;
  uVar2 = FUN_004796b0(local_3c,puVar4,s___005ab26c);
  local_4._0_1_ = 0xe;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0xf;
  FUN_00424980(local_9c,&local_e1);
  local_4._0_1_ = 0x10;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 004871c0 FUN_004871c0 ==== */

undefined4 __thiscall FUN_004871c0(void *this)

{
  return *(undefined4 *)((int)this + 0x8c);
}


/* ==== 004871d0 FUN_004871d0 ==== */

undefined4 __thiscall FUN_004871d0(void *this)

{
  return *(undefined4 *)((int)this + 0x90);
}


/* ==== 00487200 FUN_00487200 ==== */

int __thiscall FUN_00487200(void *this)

{
  return (int)this + 0x84;
}


