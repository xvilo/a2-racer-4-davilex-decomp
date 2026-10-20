/* spel.dat — game/Hud_Font.cpp: 15 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047e240 FUN_0047e240 ==== */

void FUN_0047e240(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0047e250 FUN_0047e250 ==== */

void FUN_0047e250(void)

{
  FUN_005584e0(&LAB_0047e260);
  return;
}


/* ==== 0047e280 FUN_0047e280 ==== */

void FUN_0047e280(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0047e290 FUN_0047e290 ==== */

void FUN_0047e290(void)

{
  FUN_005584e0(&LAB_0047e2a0);
  return;
}


/* ==== 0047e2b0 FUN_0047e2b0 ==== */

void __thiscall FUN_0047e2b0(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_LAB_00576bc8;
  iVar2 = *(int *)((int)this + 0xa0);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  iVar2 = *(int *)((int)this + 0x88);
  *(undefined ***)((int)this + 0x84) = &PTR_LAB_00576bb8;
  if (iVar2 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  FUN_0047bf40(this);
  return;
}


/* ==== 0047e340 FUN_0047e340 ==== */

uint __thiscall FUN_0047e340(void *this,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint i;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = *(uint *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 4);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_0057629c;
  }
  uVar2 = *(uint *)((int)this + 8);
  i = uVar2;
  if (uVar1 <= uVar2) {
    i = uVar1;
  }
  bVar6 = false;
  uVar4 = 0;
  bVar7 = true;
  pbVar5 = *(byte **)((int)this + 4);
  do {
    if (i == 0) break;
    i = i - 1;
    bVar6 = *pbVar5 < *pbVar3;
    bVar7 = *pbVar5 == *pbVar3;
    pbVar5 = pbVar5 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar7);
  if (!bVar7) {
    uVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if (uVar4 == 0) {
    if (uVar2 < uVar1) {
      return 0xffffffff;
    }
    uVar4 = (uint)(uVar2 != uVar1);
  }
  return uVar4;
}


/* ==== 0047e390 FUN_0047e390 ==== */

/* WARNING: Removing unreachable block (ram,0x0047e3ce) */

void * __thiscall FUN_0047e390(void *this,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *this_val;
  uint j;
  int iVar5;
  int i;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x804) = 0;
  this_val = (undefined1 *)((int)this + 0x808);
  *this_val = *param_2;
  *(undefined4 *)((int)this + 0x80c) = 0;
  *(undefined4 *)((int)this + 0x810) = 0;
  *(undefined4 *)((int)this + 0x814) = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x810) - uVar1;
    i = -1;
    if (iVar3 != -1) {
      i = iVar3;
    }
    if (i != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x80c);
      FUN_005580e0(iVar5,iVar5 + i,iVar3 - i);
      i = *(int *)((int)this + 0x810) - i;
      cVar2 = FUN_00402a00(this_val,i,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,i);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = *(undefined1 **)(param_2 + 4);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x80c) = this_val;
        *(undefined4 *)((int)this + 0x810) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((int)this + 0x814) = *(undefined4 *)(param_2 + 0xc);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_0047e4b1;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_2 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = *(undefined4 **)((int)this + 0x80c);
      for (j = uVar1 >> 2; j != 0; j = j - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (j = uVar1 & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)((int)this + 0x810) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 0x80c) + uVar1) = 0;
    }
  }
LAB_0047e4b1:
  i = 0x100;
  puVar6 = this;
  do {
    *puVar6 = 0xffffffff;
    puVar6[1] = 0;
    puVar6 = puVar6 + 2;
    i = i + -1;
  } while (i != 0);
  return this;
}


/* ==== 0047e4e0 FUN_0047e4e0 ==== */

undefined4 __thiscall FUN_0047e4e0(void *this,byte param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  byte local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056be38;
  local_c = ExceptionList;
  local_1c[0] = param_2;
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Hud_Font__005a9f4c;
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
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_C__Work_A2IV_Game_prog_Hud_Font__005a9f4c;
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
  i = (uint)param_2;
  local_4 = 0;
  FUN_004878f0(i,0,0xff,local_1c,0x25);
  if (local_18 == (char *)0x0) {
    uVar2 = *(undefined4 *)((int)this + i * 8);
  }
  else {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
      uVar2 = *(undefined4 *)((int)this + i * 8);
    }
    else {
      local_18[-1] = cVar1 + -1;
      uVar2 = *(undefined4 *)((int)this + i * 8);
    }
  }
  ExceptionList = local_c;
  return uVar2;
}


/* ==== 0047e5d0 FUN_0047e5d0 ==== */

float10 __thiscall FUN_0047e5d0(void *this,byte param_2)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  float10 fVar4;
  byte local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056be4a;
  local_c = ExceptionList;
  local_1c[0] = param_2;
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Hud_Font__005a9f70;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_C__Work_A2IV_Game_prog_Hud_Font__005a9f70;
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
  i = (uint)param_2;
  local_4 = 0;
  FUN_004878f0(i,0,0xff,local_1c,0x34);
  if (local_18 == (char *)0x0) {
    fVar4 = (float10)*(float *)((int)this + i * 8 + 4);
  }
  else {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
      fVar4 = (float10)*(float *)((int)this + i * 8 + 4);
    }
    else {
      local_18[-1] = cVar1 + -1;
      fVar4 = (float10)*(float *)((int)this + i * 8 + 4);
    }
  }
  ExceptionList = local_c;
  return fVar4;
}


/* ==== 0047e6d0 FUN_0047e6d0 ==== */

float10 __thiscall FUN_0047e6d0(void *this)

{
  return (float10)*(float *)((int)this + 0x804);
}


/* ==== 0047e6e0 FUN_0047e6e0 ==== */

float10 __thiscall FUN_0047e6e0(void *this)

{
  return (float10)*(float *)((int)this + 0x800);
}


/* ==== 0047e6f0 FUN_0047e6f0 ==== */

void FUN_0047e6f0(uint param_1,undefined4 param_2,float param_3)

{
  undefined4 *puVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  void *this;
  uint i;
  char *pcVar7;
  undefined1 local_f9;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined **local_b8 [3];
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
  puStack_8 = &LAB_0056bee4;
  local_c = ExceptionList;
  if (0.0 <= param_3) {
    puVar1 = (undefined4 *)(in_ECX + (param_1 & 0xff) * 8);
    if (*(float *)(in_ECX + 4 + (param_1 & 0xff) * 8) <= param_3) {
      fVar3 = param_3;
      if (param_3 < *(float *)(in_ECX + 0x804)) {
        fVar3 = *(float *)(in_ECX + 0x804);
      }
      *(float *)(in_ECX + 0x804) = fVar3;
    }
    else {
      ExceptionList = &local_c;
      FUN_0047ea40();
    }
    *puVar1 = param_2;
    puVar1[1] = param_3;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar4 = FUN_004874b0(local_9c,param_3);
  local_4 = 0;
  puVar5 = (undefined1 *)FUN_004797e0(this,local_8c,s_Negative_value_005a9fa4,iVar4);
  local_4._0_1_ = 1;
  FUN_004796b0(local_c8,puVar5,s_for_character_005a9f94);
  local_4._0_1_ = 4;
  FUN_004028f0(local_8c,1);
  local_4._0_1_ = 3;
  FUN_004028f0(local_9c,1);
  FUN_0047eab0(local_c8,1,param_1);
  local_f8[0] = local_f9;
  FUN_004028f0(local_f8,0);
  i = 0xffffffff;
  pcVar7 = s___005a9fb8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_f8,s___005a9fb8,~i - 1);
  local_4._0_1_ = 5;
  iVar4 = FUN_004873b0(local_7c,0x65);
  local_e8[0] = local_f9;
  local_4._0_1_ = 6;
  FUN_004028f0(local_e8,0);
  i = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Font__005a9fc0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_e8,s_C__Work_A2IV_Game_prog_Hud_Font__005a9fc0,~i - 1);
  local_4._0_1_ = 7;
  local_d8[0] = local_f9;
  FUN_004028f0(local_d8,0);
  i = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005a9fe4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_d8,s_HeadUp_Display_exception_in__005a9fe4,~i - 1);
  local_4._0_1_ = 8;
  puVar5 = (undefined1 *)FUN_0047c9a0(local_1c,local_d8,(int)local_e8);
  local_4._0_1_ = 9;
  puVar5 = (undefined1 *)FUN_004796b0(local_2c,puVar5,s__005a9fbc);
  local_4._0_1_ = 10;
  puVar5 = (undefined1 *)FUN_0047c9a0(local_4c,puVar5,iVar4);
  local_4._0_1_ = 0xb;
  puVar5 = (undefined1 *)FUN_0047c9a0(local_6c,puVar5,(int)local_f8);
  local_4._0_1_ = 0xc;
  puVar5 = (undefined1 *)FUN_0047c9a0(local_5c,puVar5,(int)local_c8);
  local_4._0_1_ = 0xd;
  uVar6 = FUN_004796b0(local_3c,puVar5,s___005a9fb4);
  local_4._0_1_ = 0xe;
  FUN_00558826(local_b8);
  local_4._0_1_ = 0xf;
  FUN_00424980(local_ac,&local_f9);
  local_4._0_1_ = 0x10;
  local_b8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_ac,uVar6,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_b8,&DAT_0057f730);
}


/* ==== 0047e9f0 FUN_0047e9f0 ==== */

void __thiscall FUN_0047e9f0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x800) = param_2;
  return;
}


/* ==== 0047ea10 FUN_0047ea10 ==== */

void __thiscall FUN_0047ea10(void *this)

{
  int *piVar1;
  int i;
  
  piVar1 = (int *)((int)this + 0x308);
  i = 0x1a;
  do {
    if (*piVar1 == -1) {
      *piVar1 = piVar1[-0x40];
      piVar1[1] = piVar1[-0x3f];
    }
    piVar1 = piVar1 + 2;
    i = i + -1;
  } while (i != 0);
  return;
}


/* ==== 0047ea40 FUN_0047ea40 ==== */

void __thiscall FUN_0047ea40(void *this)

{
  float fVar1;
  float *pfVar2;
  int i;
  
  *(undefined4 *)((int)this + 0x804) = 0;
  pfVar2 = (float *)((int)this + 4);
  i = 0x100;
  do {
    if (*(float *)((int)this + 0x804) <= *pfVar2) {
      fVar1 = *pfVar2;
    }
    else {
      fVar1 = *(float *)((int)this + 0x804);
    }
    pfVar2 = pfVar2 + 2;
    i = i + -1;
    *(float *)((int)this + 0x804) = fVar1;
  } while (i != 0);
  return;
}


