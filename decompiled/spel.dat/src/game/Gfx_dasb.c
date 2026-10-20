/* spel.dat — game/Gfx_dasb.cpp: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0043f640 FUN_0043f640 ==== */

int FUN_0043f640(int param_1)

{
  int i;
  int *piVar1;
  
  if (param_1 == DAT_006fbaa4) {
    FUN_004c4150(s__s___d__Trying_to_get_position_o_0059c044,
                 s_C__Work_A2IV_Game_prog_Gfx_dasb__0059c020,0x243);
  }
  i = 0;
  if (0 < DAT_005d2ab0) {
    piVar1 = &DAT_005973c8;
    do {
      if (*piVar1 == param_1) {
        return i;
      }
      i = i + 1;
      piVar1 = piVar1 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  return -1;
}


/* ==== 0043f690 FUN_0043f690 ==== */

void FUN_0043f690(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,0);
  local_4 = 0;
  if (DAT_006fb964 == 0) {
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,1);
    ExceptionList = local_c;
    return;
  }
  if (-1 < DAT_006fbaa4 + -1) {
    iVar2 = FUN_0043f640(DAT_006fbaa4 + -1);
    if (iVar2 == -1) {
      FUN_004c5930(1,0,400,s___0059c084);
    }
    else {
      uVar3 = FUN_0049df90(local_1c,s_Racer__d_0059c088);
      local_4._0_1_ = 1;
      iVar2 = FUN_00424660(&DAT_005d3458,uVar3);
      FUN_004093c0(local_2c,iVar2 + 0x20,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_1c,1);
      puVar4 = local_28;
      if (local_28 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c5930(1,0,400,&PTR_DAT_0059c094,puVar4);
    }
  }
  if (DAT_006fbaa4 + 1 < DAT_005d2ab0 + 1) {
    iVar2 = FUN_0043f640(DAT_006fbaa4 + 1);
    if (iVar2 == -1) {
      FUN_004c5930(1,0,0x1a4,s___0059c098);
    }
    else {
      uVar3 = FUN_0049df90(local_1c,s_Racer__d_0059c09c);
      local_4._0_1_ = 2;
      iVar2 = FUN_00424660(&DAT_005d3458,uVar3);
      FUN_004093c0(local_2c,iVar2 + 0x20,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
      puVar4 = local_28;
      if (local_28 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c5930(1,0,0x1a4,&PTR_DAT_0059c0a8,puVar4);
    }
  }
  if (local_28 != (undefined1 *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0043f8a0 FUN_0043f8a0 ==== */

void FUN_0043f8a0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 this_val;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 local_2c [4];
  char *local_28;
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
  puStack_8 = &LAB_0056a3e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c3fa0(s_draw_dashboard___0059c0ac);
  uVar2 = FUN_00447820();
  if (DAT_006fb8d8 != 0) {
    FUN_0043e120(uVar2);
  }
  if (DAT_006fb950 != 0) {
    i = 0xffffffff;
    pcVar3 = s_keyboard0_0059c0c0;
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
    cVar1 = FUN_00402a00(local_2c,i,1);
    if (cVar1 != '\0') {
      pcVar3 = s_keyboard0_0059c0c0;
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
    i = 0xffffffff;
    local_4 = 0;
    pcVar3 = &DAT_0059c0cc;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_00402940(local_1c,&DAT_0059c0cc,~i - 1);
    puVar7 = local_2c;
    uVar8 = 0;
    puVar6 = local_1c;
    local_4 = CONCAT31(local_4._1_3_,1);
    this_val = FUN_004ea0c0(puVar6,puVar7,0);
    fVar5 = (float10)FUN_004eb4d0(this_val,puVar6,puVar7,uVar8);
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
    if ((float)fVar5 != 0.0) {
      FUN_0043fc90(uVar2);
    }
  }
  FUN_004c3fa0(s_end_of_draw_dashboard___0059c0d8);
  ExceptionList = local_c;
  return;
}


