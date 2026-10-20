/* spel.dat — game/ai_radio.cpp: 16 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0041a830 FUN_0041a830 ==== */

void FUN_0041a830(void)

{
  FUN_0041a860();
  return;
}


/* ==== 0041a840 FUN_0041a840 ==== */

void FUN_0041a840(void)

{
  FUN_005584e0(&LAB_0041a850);
  return;
}


/* ==== 0041a860 FUN_0041a860 ==== */

void FUN_0041a860(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041c530();
  local_4 = 0;
  FUN_0041c530();
  local_4._0_1_ = 1;
  FUN_0041c530();
  local_4._0_1_ = 2;
  FUN_0041c530();
  local_4._0_1_ = 3;
  FUN_0041c530();
  local_4._0_1_ = 4;
  FUN_0041c530();
  local_4._0_1_ = 5;
  FUN_0041c530();
  local_4._0_1_ = 6;
  FUN_00558643(in_ECX + 0x7c,0x10,7,FUN_0041c530,FUN_0041c540);
  local_4._0_1_ = 7;
  FUN_00558643(in_ECX + 0xec,0x10,7,FUN_0041c530,FUN_0041c540);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00558643(in_ECX + 0x15c,0x10,7,FUN_0041c530,FUN_0041c540);
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  *(undefined4 *)(in_ECX + 0x1dc) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 0041a960 FUN_0041a960 ==== */

void FUN_0041a960(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00569cda;
  local_c = ExceptionList;
  local_4 = 8;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  FUN_005586c5(in_ECX + 0x15c,0x10,7,FUN_0041c540);
  local_4._0_1_ = 7;
  FUN_005586c5(in_ECX + 0xec,0x10,7,FUN_0041c540);
  local_4._0_1_ = 6;
  FUN_005586c5(in_ECX + 0x7c,0x10,7,FUN_0041c540);
  local_4._0_1_ = 5;
  FUN_0041c540();
  local_4._0_1_ = 4;
  FUN_0041c540();
  local_4._0_1_ = 3;
  FUN_0041c540();
  local_4._0_1_ = 2;
  FUN_0041c540();
  local_4._0_1_ = 1;
  FUN_0041c540();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0041c540();
  local_4 = 0xffffffff;
  FUN_0041c540();
  ExceptionList = local_c;
  return;
}


/* ==== 0041aa60 FUN_0041aa60 ==== */

void FUN_0041aa60(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0041ae70(param_1);
  if (iVar1 != -1) {
    *(int *)(in_ECX + 0x1d0) = iVar1;
  }
  return;
}


/* ==== 0041aa80 FUN_0041aa80 ==== */

void FUN_0041aa80(int param_1)

{
  char cVar1;
  int i;
  undefined4 *puVar2;
  uint j;
  undefined4 uVar3;
  uint m;
  uint k;
  code *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_17d;
  undefined1 local_17c;
  undefined4 *local_178;
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_164 [4];
  char *local_160;
  undefined1 local_154 [4];
  char *local_150;
  undefined **local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [32];
  char local_10c [64];
  char local_cc [64];
  undefined4 local_8c [16];
  CHAR local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569d1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041c660(8);
  pcVar4 = wsprintfA_exref;
  local_16c = *(undefined4 *)(param_1 + 0x44);
  wsprintfA(local_4c,s_RACER__d_005941a0,local_16c);
  i = FUN_0049eec0(local_4c);
  if (i != -1) {
    i = FUN_0049ef80(local_4c);
    local_140 = *(undefined4 *)(i + 4);
    local_13c = *(undefined4 *)(i + 8);
    local_138 = *(undefined4 *)(i + 0xc);
    local_134 = *(undefined4 *)(i + 0x10);
    local_130 = *(undefined4 *)(i + 0x14);
    FUN_0041c870(i + 0x18);
    local_4 = 0;
    FUN_0041c870(i + 0x28);
    local_144 = &PTR_LAB_005764c0;
    local_17c = local_12c[0];
    local_4 = 1;
    FUN_004028f0(0);
    FUN_004093c0(local_12c,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar2 = local_178;
    if (local_178 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)&DAT_0057629c;
    }
    FUN_004c3fa0(s_COPRADIO_original_wav____s_005941ac,puVar2);
    local_17d = 0x31;
    j = FUN_0041c990(&local_17d,0,1);
    puVar2 = local_178;
    if (local_178 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)&DAT_0057629c;
    }
    FUN_004a6980((int)j < 0x40,s__s___d__illegal_wav_name_for_car_005941ec,puVar2,
                 s_C__Work_A2IV_Game_prog_ai_radio__005941c8,0x7b);
    FUN_004c3fa0(s_COPRADIO_index___d_00594214,j);
    k = j;
    if (local_174 < j) {
      k = local_174;
    }
    if (k != 0) {
      puVar2 = local_178;
      puVar6 = local_8c;
      for (m = k >> 2; m != 0; m = m - 1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      for (k = k & 3; k != 0; k = k - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    *(undefined1 *)((int)local_8c + j) = 0;
    FUN_004c3fa0(s_COPRADIO_carname___s_00594228,local_8c);
    i = 0;
    do {
      (*pcVar4)(local_10c,s_R_d_d_00594240,local_16c,i);
      FUN_004c3fa0(s_COPRADIO__new_typename___s_00594248,local_10c);
      i = i + 1;
      (*pcVar4)(local_cc,s__s_d_wav_00594264,local_8c,i);
      FUN_004c3fa0(s_COPRADIO_new_wavname___s_00594270,local_cc);
      local_154[0] = local_17d;
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar5 = local_10c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 != '\0') {
        pcVar5 = local_10c;
        pcVar7 = local_150;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_004029e0(j);
      }
      local_4._0_1_ = 3;
      FUN_004093c0(local_154,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004028f0(1);
      local_164[0] = local_17d;
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar5 = local_cc;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(j,1);
      if (cVar1 != '\0') {
        pcVar5 = local_cc;
        pcVar7 = local_160;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_004029e0(j);
      }
      local_4._0_1_ = 4;
      FUN_004093c0(local_164,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004028f0(1);
      FUN_004c3fa0(s_COPRADIO_Adding_new_cartype_0059428c);
      FUN_0049f030(&local_144);
      FUN_004c3fa0(s_COPRADIO_Creating_soundsource_005942ac);
      uVar3 = FUN_0049ecb0(local_10c);
      cVar1 = FUN_0041c570(uVar3);
    } while ((cVar1 != '\0') && (pcVar4 = wsprintfA_exref, i < 8));
    if (local_178 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_178 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)((int)local_178 + -1));
      }
      else {
        *(char *)((int)local_178 + -1) = cVar1 + -1;
      }
    }
    local_178 = (undefined4 *)0x0;
    local_174 = 0;
    local_170 = 0;
    local_4 = 0xffffffff;
    FUN_0049f4c0();
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0041ae70 FUN_0041ae70 ==== */

undefined4 FUN_0041ae70(undefined4 param_1)

{
  switch(param_1) {
  case 0x30:
    return 0;
  case 0x31:
    return 1;
  case 0x32:
    return 2;
  case 0x33:
    return 3;
  case 0x34:
    return 4;
  case 0x35:
    return 5;
  case 0x36:
    return 6;
  case 0x37:
    return 7;
  case 0x38:
    return 8;
  case 0x39:
    return 9;
  default:
    return 0xffffffff;
  }
}


/* ==== 0041af00 FUN_0041af00 ==== */

void FUN_0041af00(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint i;
  uint j;
  CHAR *pCVar4;
  char *pcVar5;
  CHAR *pCVar6;
  undefined1 auStack_d8 [4];
  CHAR *pCStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined **ppuStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  CHAR aCStack_8c [64];
  CHAR aCStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569d51;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (ExceptionList = &pvStack_c, 0x31 < param_1)) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s___d___Location___d__out_of_ra_005942cc,param_1,0x32);
  }
  local_c8 = in_ECX + 0x30;
  cVar1 = FUN_0041c5f0(param_1);
  if (cVar1 == '\0') {
    wsprintfA(aCStack_8c,s_CE_dL_d_0059431c,DAT_006fb898,param_1);
    wsprintfA(aCStack_4c,s_CE_dL_d_wav_00594324,DAT_006fb898,param_1);
    FUN_004c3fa0(s_COPRADIO_Loading_location_type___00594330,aCStack_8c,aCStack_4c);
    iVar2 = FUN_0049ef80(s_COPRADIO_00594360);
    uStack_c0 = *(undefined4 *)(iVar2 + 4);
    uStack_bc = *(undefined4 *)(iVar2 + 8);
    uStack_b8 = *(undefined4 *)(iVar2 + 0xc);
    uStack_b4 = *(undefined4 *)(iVar2 + 0x10);
    uStack_b0 = *(undefined4 *)(iVar2 + 0x14);
    uStack_ac = *(undefined1 *)(iVar2 + 0x18);
    FUN_004028f0(0);
    FUN_004093c0((undefined1 *)(iVar2 + 0x18),0,0xffffffff);
    uStack_4 = 0;
    FUN_0041c870(iVar2 + 0x28);
    ppuStack_c4 = &PTR_LAB_005764c0;
    uStack_4 = 1;
    FUN_004c3fa0(s_COPRADIO_Got_default_type_0059436c);
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = aCStack_8c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pCVar4 = aCStack_8c;
      pCVar6 = pCStack_d4;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pCVar6 = *(undefined4 *)pCVar4;
        pCVar4 = pCVar4 + 4;
        pCVar6 = pCVar6 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pCVar6 = *pCVar4;
        pCVar4 = pCVar4 + 1;
        pCVar6 = pCVar6 + 1;
      }
      FUN_004029e0(i);
    }
    uStack_4._0_1_ = 2;
    FUN_004093c0(auStack_d8,0,0xffffffff);
    uStack_4._0_1_ = 1;
    FUN_004028f0(1);
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = aCStack_4c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pCVar4 = aCStack_4c;
      pCVar6 = pCStack_d4;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pCVar6 = *(undefined4 *)pCVar4;
        pCVar4 = pCVar4 + 4;
        pCVar6 = pCVar6 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pCVar6 = *pCVar4;
        pCVar4 = pCVar4 + 1;
        pCVar6 = pCVar6 + 1;
      }
      pCStack_d4[i] = '\0';
      uStack_d0 = i;
    }
    uStack_4._0_1_ = 3;
    FUN_004093c0(auStack_d8,0,0xffffffff);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (pCStack_d4 != (CHAR *)0x0) {
      cVar1 = pCStack_d4[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(pCStack_d4 + -1);
      }
      else {
        pCStack_d4[-1] = cVar1 + -1;
      }
    }
    pCStack_d4 = (CHAR *)0x0;
    uStack_d0 = 0;
    uStack_cc = 0;
    FUN_004c3fa0(s_COPRADIO_Adding_new_type_00594388);
    FUN_0049f030(&ppuStack_c4);
    FUN_004c3fa0(s_COPRADIO_Creating_soundsource_005943a4);
    uVar3 = FUN_0049ecb0(aCStack_8c);
    cVar1 = FUN_0041c5a0(param_1,uVar3);
    if (cVar1 == '\0') {
      FUN_004c3fa0(s_COPRADIO_Too_many_location_sampl_005943c4,param_1);
    }
    FUN_004c3fa0(s_COPRADIO_done_with_location__d_00594400,param_1);
    uStack_4 = 0xffffffff;
    FUN_0049f4c0();
  }
  else {
    FUN_004c3fa0(s_COPRADIO__location_allready_load_005942f8);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0041b220 FUN_0041b220 ==== */

void FUN_0041b220(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int i;
  undefined1 *local_28;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = DAT_00715258;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  local_4 = 0;
  FUN_004c3fa0(s_COPRADIO__Init_00594420);
  FUN_0041c660(8);
  FUN_0041c660(6);
  FUN_0041c660(0x32);
  FUN_0041c660(3);
  FUN_0041c660(6);
  FUN_0041c660(8);
  i = 0;
  do {
    uVar3 = FUN_0049df90(local_1c,s_START_PURSUIT__d_00594430,i);
    local_4._0_1_ = 1;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(1);
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    FUN_004c3fa0(s_COPRADIO_Looking_for_sample__s_00594444,puVar4);
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    uVar3 = FUN_00450900(puVar4);
    cVar2 = FUN_0041c570(uVar3);
  } while ((cVar2 != '\0') && (i = i + 1, i < 8));
  i = 0;
  do {
    uVar3 = FUN_0049df90(local_1c,s_CSTAY__d_00594464,i);
    local_4._0_1_ = 2;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(1);
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    FUN_004c3fa0(s_COPRADIO_Looking_for_sample__s_00594470,puVar4);
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    uVar3 = FUN_00450900(puVar4);
    cVar2 = FUN_0041c570(uVar3);
  } while ((cVar2 != '\0') && (i = i + 1, i < 6));
  i = 0;
  do {
    uVar3 = FUN_0049df90(local_1c,s_BLOCK__d_00594490,i);
    local_4._0_1_ = 3;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(1);
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    FUN_004c3fa0(s_COPRADIO_Looking_for_sample__s_0059449c,puVar4);
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    uVar3 = FUN_00450900(puVar4);
    cVar2 = FUN_0041c570(uVar3);
  } while ((cVar2 != '\0') && (i = i + 1, i < 3));
  i = 0;
  do {
    uVar3 = FUN_0049df90(local_1c,s_CBLOK__d_005944bc,i);
    local_4._0_1_ = 4;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar2 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    FUN_004c3fa0(s_COPRADIO_Looking_for_sample__s_005944c8,puVar4);
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    uVar3 = FUN_00450900(puVar4);
    cVar2 = FUN_0041c570(uVar3);
  } while ((cVar2 != '\0') && (i = i + 1, i < 6));
  i = 0;
  do {
    uVar3 = FUN_0049df90(local_1c,s_MEGA__d_005944e8,i);
    local_4._0_1_ = 5;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar2 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    FUN_004c3fa0(s_COPRADIO_Looking_for_sample__s_005944f0,puVar4);
    puVar4 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    uVar3 = FUN_00450900(puVar4);
    cVar2 = FUN_0041c570(uVar3);
  } while ((cVar2 != '\0') && (i = i + 1, i < 8));
  i = 0;
  if (0 < iVar1) {
    do {
      uVar3 = *(undefined4 *)(DAT_00715f00 + 0xfc + *(int *)(DAT_00715254 + i * 4) * 0x994);
      iVar5 = FUN_0041ae70(uVar3);
      FUN_004c3fa0(s_COPRADIO_found_trigger__d_which_i_00594510,uVar3,iVar5);
      if (iVar5 != -1) {
        FUN_004c3fa0(s_COPRADIO_Creating_sound_00594540);
        FUN_0041af00(iVar5);
      }
      i = i + 1;
    } while (i < iVar1);
  }
  FUN_0041bde0();
  FUN_0041aa60(0x30);
  uVar3 = FUN_004475f0();
  uVar6 = FUN_0049f9a0(s_COPS_0059455c);
  FUN_0049ff90(uVar6,uVar3);
  if (local_28 != (undefined1 *)0x0) {
    cVar2 = local_28[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      local_28[-1] = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0041b690 FUN_0041b690 ==== */

undefined4 FUN_0041b690(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_74 [4];
  char *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [4];
  char *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [16];
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569dbd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f360();
  local_4 = 0;
  local_64[0] = (undefined1)param_2;
  FUN_004028f0(0);
  local_74[0] = (undefined1)param_2;
  local_4._0_1_ = 1;
  FUN_004028f0(0);
  local_4._0_1_ = 2;
  iVar2 = FUN_0049ef80(PTR_s_RACER_COLLISION_00593ee8);
  local_40 = *(undefined4 *)(iVar2 + 4);
  local_3c = *(undefined4 *)(iVar2 + 8);
  local_38 = *(undefined4 *)(iVar2 + 0xc);
  local_34 = *(undefined4 *)(iVar2 + 0x10);
  local_30 = *(undefined4 *)(iVar2 + 0x14);
  FUN_004093c0(iVar2 + 0x18,0,0xffffffff);
  FUN_004093c0(iVar2 + 0x28,0,0xffffffff);
  uVar3 = FUN_0049df90(local_54,PTR_s_CCO_02d__02d_00593ed0,param_1,param_2);
  local_4._0_1_ = 3;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004028f0(1);
  uVar3 = FUN_0049df90(local_54,PTR_s_CCO_02d__02d_WAV_00593ed4,param_1,param_2);
  local_4._0_1_ = 4;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004028f0(1);
  pcVar4 = local_70;
  if (local_70 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar2 = FUN_004c64d0(pcVar4);
  if (iVar2 == 0) {
    local_4._0_1_ = 1;
    FUN_004028f0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(1);
    local_4 = 0xffffffff;
    FUN_0049f4c0();
    ExceptionList = local_c;
    return 0xffffffff;
  }
  FUN_004093c0(local_64,0,0xffffffff);
  FUN_004093c0(local_74,0,0xffffffff);
  FUN_0049f030(local_44);
  pcVar4 = local_60;
  if (local_60 == (char *)0x0) {
    pcVar4 = "";
  }
  uVar3 = FUN_0049ecb0(pcVar4);
  cVar1 = FUN_0041c570(uVar3);
  if (cVar1 == '\0') {
    if (local_70 != (char *)0x0) {
      cVar1 = local_70[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_70 + -1);
      }
      else {
        local_70[-1] = cVar1 + -1;
      }
    }
    local_70 = (char *)0x0;
    local_6c = 0;
    local_68 = 0;
    if (local_60 != (char *)0x0) {
      cVar1 = local_60[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_60 + -1);
      }
      else {
        local_60[-1] = cVar1 + -1;
      }
    }
    local_60 = (char *)0x0;
    local_5c = 0;
    local_58 = 0;
    local_4 = 0xffffffff;
    FUN_0049f4c0();
    ExceptionList = local_c;
    return 0xffffffff;
  }
  if (local_70 != (char *)0x0) {
    cVar1 = local_70[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_70 + -1);
    }
    else {
      local_70[-1] = cVar1 + -1;
    }
  }
  local_70 = (char *)0x0;
  local_6c = 0;
  local_68 = 0;
  if (local_60 != (char *)0x0) {
    cVar1 = local_60[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_60 + -1);
    }
    else {
      local_60[-1] = cVar1 + -1;
    }
  }
  local_60 = (char *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_4 = 0xffffffff;
  FUN_0049f4c0();
  ExceptionList = local_c;
  return 0;
}


/* ==== 0041b9d0 FUN_0041b9d0 ==== */

undefined4 FUN_0041b9d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_74 [4];
  char *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [4];
  char *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [16];
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569dff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f360();
  local_4 = 0;
  local_74[0] = (undefined1)param_2;
  FUN_004028f0(0);
  local_64[0] = (undefined1)param_2;
  local_4._0_1_ = 1;
  FUN_004028f0(0);
  local_4._0_1_ = 2;
  iVar2 = FUN_0049ef80(PTR_s_POSITION_SWITCH_00593eec);
  local_40 = *(undefined4 *)(iVar2 + 4);
  local_3c = *(undefined4 *)(iVar2 + 8);
  local_38 = *(undefined4 *)(iVar2 + 0xc);
  local_34 = *(undefined4 *)(iVar2 + 0x10);
  local_30 = *(undefined4 *)(iVar2 + 0x14);
  FUN_004093c0(iVar2 + 0x18,0,0xffffffff);
  FUN_004093c0(iVar2 + 0x28,0,0xffffffff);
  if (param_3 == 1) {
    uVar3 = FUN_0049df90(local_54,PTR_s_CPA_02d__02d_00593ed8,param_1,param_2);
    local_4._0_1_ = 3;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_004028f0(1);
    uVar3 = FUN_0049df90(local_54,PTR_s_CPA_02d__02d_WAV_00593edc,param_1,param_2);
    local_4._0_1_ = 4;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(1);
  }
  else {
    uVar3 = FUN_0049df90(local_54,PTR_s_CBP_02d__02d_00593ee0,param_1,param_2);
    local_4._0_1_ = 5;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_004028f0(1);
    uVar3 = FUN_0049df90(local_54,PTR_s_CBP_02d__02d_WAV_00593ee4,param_1,param_2);
    local_4._0_1_ = 6;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(1);
  }
  pcVar4 = local_60;
  if (local_60 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar2 = FUN_004c64d0(pcVar4);
  if (iVar2 == 0) {
    local_4._0_1_ = 1;
    FUN_004028f0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(1);
    local_4 = 0xffffffff;
    FUN_0049f4c0();
    ExceptionList = local_c;
    return 0xffffffff;
  }
  FUN_004093c0(local_74,0,0xffffffff);
  FUN_004093c0(local_64,0,0xffffffff);
  FUN_0049f030(local_44);
  pcVar4 = local_70;
  if (local_70 == (char *)0x0) {
    pcVar4 = "";
  }
  uVar3 = FUN_0049ecb0(pcVar4);
  if (param_3 == 1) {
    cVar1 = FUN_0041c570(uVar3);
    if (cVar1 != '\0') {
LAB_0041bd47:
      if (local_60 != (char *)0x0) {
        cVar1 = local_60[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_60 + -1);
        }
        else {
          local_60[-1] = cVar1 + -1;
        }
      }
      local_60 = (char *)0x0;
      local_5c = 0;
      local_58 = 0;
      if (local_70 != (char *)0x0) {
        cVar1 = local_70[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_70 + -1);
        }
        else {
          local_70[-1] = cVar1 + -1;
        }
      }
      local_70 = (char *)0x0;
      local_6c = 0;
      local_68 = 0;
      local_4 = 0xffffffff;
      FUN_0049f4c0();
      ExceptionList = local_c;
      return 0;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(1);
  }
  else {
    cVar1 = FUN_0041c570(uVar3);
    if (cVar1 != '\0') goto LAB_0041bd47;
    if (local_60 != (char *)0x0) {
      cVar1 = local_60[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_60 + -1);
      }
      else {
        local_60[-1] = cVar1 + -1;
      }
    }
    local_60 = (char *)0x0;
    local_5c = 0;
    local_58 = 0;
  }
  if (local_70 != (char *)0x0) {
    cVar1 = local_70[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_70 + -1);
    }
    else {
      local_70[-1] = cVar1 + -1;
    }
  }
  local_70 = (char *)0x0;
  local_6c = 0;
  local_68 = 0;
  local_4 = 0xffffffff;
  FUN_0049f4c0();
  ExceptionList = local_c;
  return 0xffffffff;
}


/* ==== 0041bde0 FUN_0041bde0 ==== */

void FUN_0041bde0(void)

{
  int iVar1;
  int i;
  int j;
  
  i = 0;
  if (-1 < DAT_005d2ab0) {
    do {
      FUN_0041c660(0x10);
      FUN_0041c660(0x10);
      FUN_0041c660(0x10);
      j = 0;
      do {
        if (0xf < j) break;
        iVar1 = FUN_0041b690(i,j);
        j = j + 1;
      } while (iVar1 != -1);
      j = 0;
      do {
        if (0xf < j) break;
        iVar1 = FUN_0041b9d0(i,j,1);
        j = j + 1;
      } while (iVar1 != -1);
      j = 0;
      do {
        if (0xf < j) break;
        iVar1 = FUN_0041b9d0(i,j,2);
        j = j + 1;
      } while (iVar1 != -1);
      i = i + 1;
    } while (i <= DAT_005d2ab0);
  }
  return;
}


/* ==== 0041be70 FUN_0041be70 ==== */

void FUN_0041be70(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1dc) == 0) {
    *(undefined4 *)(in_ECX + 0x1d4) = param_2;
    *(undefined4 *)(in_ECX + 0x1dc) = param_1;
  }
  switch(*(undefined4 *)(in_ECX + 0x1dc)) {
  case 1:
    if (*(int *)(in_ECX + 0x1d8) == 0) {
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(undefined4 *)(in_ECX + 0x1d8) = 1;
      return;
    }
    break;
  case 2:
    if (*(int *)(in_ECX + 0x1d8) == 0) {
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(undefined4 *)(in_ECX + 0x1d8) = 8;
      return;
    }
    break;
  case 3:
    if (*(int *)(in_ECX + 0x1d8) == 0) {
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(undefined4 *)(in_ECX + 0x1d8) = 9;
      return;
    }
    break;
  case 4:
    if (*(int *)(in_ECX + 0x1d8) == 0) {
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(undefined4 *)(in_ECX + 0x1d8) = 0xb;
      return;
    }
    break;
  case 5:
    if (*(int *)(in_ECX + 0x1d8) == 0) {
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(undefined4 *)(in_ECX + 0x1d8) = 0xe;
      return;
    }
    break;
  case 6:
    iVar1 = FUN_0040dad0(param_2);
    if (((iVar1 != -1) && (iVar1 < DAT_005d2ab0)) && (*(int *)(in_ECX + 0x1d8) == 0)) {
      *(undefined4 *)(in_ECX + 0x1d8) = 0xf;
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(int *)(in_ECX + 0x70) = (&DAT_005973c0)[iVar1 * 0x16] * 0x10 + 0x7c + in_ECX;
      return;
    }
    break;
  case 7:
    iVar1 = FUN_0040dad0(param_2);
    if (((iVar1 != -1) && (iVar1 < DAT_005d2ab0)) && (*(int *)(in_ECX + 0x1d8) == 0)) {
      *(undefined4 *)(in_ECX + 0x1d8) = 0x11;
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(int *)(in_ECX + 0x74) = (&DAT_005973c0)[iVar1 * 0x16] * 0x10 + 0xec + in_ECX;
      return;
    }
    break;
  case 8:
    iVar1 = FUN_0040dad0(param_2);
    if (((iVar1 != -1) && (iVar1 < DAT_005d2ab0)) && (*(int *)(in_ECX + 0x1d8) == 0)) {
      *(undefined4 *)(in_ECX + 0x1d8) = 0x13;
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(int *)(in_ECX + 0x78) = (&DAT_005973c0)[iVar1 * 0x16] * 0x10 + 0x15c + in_ECX;
      return;
    }
    break;
  case 9:
    if (*(int *)(in_ECX + 0x1d8) == 0) {
      *(undefined4 *)(in_ECX + 0x1d8) = 0x15;
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(int *)(in_ECX + 0x74) = DAT_006fba5c * 0x10 + 0xec + in_ECX;
      return;
    }
    break;
  case 10:
    if (param_3 != -1) {
      *(undefined4 *)(in_ECX + 0x1d8) = 0x17;
      *(int *)(in_ECX + 0x1cc) = param_3;
    }
  }
  return;
}


/* ==== 0041c0d0 FUN_0041c0d0 ==== */

void FUN_0041c0d0(void)

{
  int in_ECX;
  
  FUN_00450870();
  FUN_004508a0();
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  *(undefined4 *)(in_ECX + 0x1dc) = 0;
  return;
}


/* ==== 0041c0f0 FUN_0041c0f0 ==== */

void FUN_0041c0f0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_004475d0();
  iVar1 = iVar1 + -0x1e;
  iVar2 = FUN_004475b0();
  iVar2 = iVar2 + -0x1e;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_0049f9a0(s_MUSIC_COPS_00594564);
  FUN_0049ff90(~uVar3,iVar1);
  uVar4 = FUN_0049f9a0(s_MUSIC_00594570);
  FUN_0049ff90(uVar4,iVar2);
  return;
}


/* ==== 0041c150 FUN_0041c150 ==== */

void FUN_0041c150(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  bool bVar3;
  undefined4 uVar4;
  
  switch(*(undefined4 *)(in_ECX + 0x1d8)) {
  case 1:
    cVar1 = FUN_0041c6d0(in_ECX + 0x1cc);
    if (cVar1 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)(in_ECX + 0x1d8) = 2;
      return;
    }
    break;
  case 2:
    cVar1 = FUN_0041c790();
    if (cVar1 != '\0') {
      return;
    }
    *(undefined4 *)(in_ECX + 0x1d8) = 3;
    return;
  case 3:
    cVar1 = FUN_0041c6d0(in_ECX + 0x1cc);
    if (cVar1 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)(in_ECX + 0x1d8) = 4;
      return;
    }
    break;
  case 4:
    cVar1 = FUN_0041c790();
    if (cVar1 != '\0') {
      return;
    }
    *(undefined4 *)(in_ECX + 0x1d8) = 5;
    return;
  case 5:
    cVar1 = FUN_0041c720(*(undefined4 *)(in_ECX + 0x1d0),in_ECX + 0x1cc);
    if (cVar1 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)(in_ECX + 0x1d8) = 6;
      return;
    }
    break;
  case 6:
    cVar1 = FUN_0041c790();
    if (cVar1 != '\0') {
      return;
    }
    *(undefined4 *)(in_ECX + 0x1d8) = 7;
    return;
  case 7:
    goto LAB_0041c33b;
  case 8:
    iVar2 = FUN_0043a5b0(*(undefined4 *)(in_ECX + 0x1d4));
    *(int *)(in_ECX + 0x1cc) = iVar2;
    bVar3 = iVar2 == -1;
    goto LAB_0041c342;
  case 9:
    iVar2 = FUN_0043a5e0();
    *(int *)(in_ECX + 0x1cc) = iVar2;
    bVar3 = iVar2 == -1;
    goto LAB_0041c342;
  case 10:
    FUN_0049eb50(*(undefined4 *)(in_ECX + 0x1cc));
    iVar2 = FUN_0049e630();
    if (iVar2 != 0) {
      return;
    }
    break;
  case 0xb:
    cVar1 = FUN_0041c6d0(in_ECX + 0x1cc);
    if (cVar1 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)(in_ECX + 0x1d8) = 0xc;
      return;
    }
    break;
  case 0xc:
    cVar1 = FUN_0041c790();
    if (cVar1 != '\0') {
      return;
    }
    *(undefined4 *)(in_ECX + 0x1d8) = 0xd;
    return;
  case 0xd:
    cVar1 = FUN_0041c6d0(in_ECX + 0x1cc);
    if (cVar1 != '\0') {
      FUN_0041c0f0();
      *(undefined4 *)(in_ECX + 0x1d8) = 10;
      return;
    }
    break;
  case 0xe:
    iVar2 = FUN_004072b0(DAT_006fba58);
    if (iVar2 != -1) {
      cVar1 = FUN_0041c610((undefined4 *)(in_ECX + 0x1cc));
      if (cVar1 != '\0') {
        FUN_0041c0f0();
        FUN_00450c90(iVar2,*(undefined4 *)(in_ECX + 0x1cc),0);
        *(undefined4 *)(in_ECX + 0x1d8) = 10;
        return;
      }
      break;
    }
LAB_0041c33b:
    cVar1 = FUN_0041c6d0(in_ECX + 0x1cc);
    bVar3 = cVar1 == '\0';
LAB_0041c342:
    if (!bVar3) {
      FUN_0041c0f0();
      *(undefined4 *)(in_ECX + 0x1d8) = 10;
      return;
    }
    break;
  case 0xf:
    cVar1 = FUN_0041c6d0(in_ECX + 0x1cc);
    if (cVar1 != '\0') {
      *(undefined4 *)(in_ECX + 0x1d8) = 0x10;
      return;
    }
    break;
  case 0x10:
    cVar1 = FUN_0041c790();
    bVar3 = cVar1 == '\0';
    goto LAB_0041c4b3;
  case 0x11:
    cVar1 = FUN_0041c6d0(in_ECX + 0x1cc);
    if (cVar1 != '\0') {
      *(undefined4 *)(in_ECX + 0x1d8) = 0x12;
      return;
    }
    break;
  case 0x12:
  case 0x16:
    cVar1 = FUN_0041c790();
    bVar3 = cVar1 == '\0';
    goto LAB_0041c4b3;
  case 0x13:
    cVar1 = FUN_0041c610((undefined4 *)(in_ECX + 0x1cc));
    if (cVar1 != '\0') {
      iVar2 = FUN_00412c60();
      if (iVar2 == -1) {
        return;
      }
      *(undefined4 *)(in_ECX + 0x1d8) = 0x14;
      FUN_00450c90(iVar2,*(undefined4 *)(in_ECX + 0x1cc),0);
      return;
    }
    break;
  case 0x14:
    cVar1 = FUN_0041c790();
    bVar3 = cVar1 == '\0';
    goto LAB_0041c4b3;
  case 0x15:
    cVar1 = FUN_0041c6d0(in_ECX + 0x1cc);
    if (cVar1 != '\0') {
      *(undefined4 *)(in_ECX + 0x1d8) = 0x16;
      return;
    }
    break;
  case 0x17:
    uVar4 = 0;
    FUN_0049eb50(*(undefined4 *)(in_ECX + 0x1cc));
    FUN_0049e550(uVar4);
    *(undefined4 *)(in_ECX + 0x1d8) = 0x18;
    return;
  case 0x18:
    FUN_0049eb50(*(undefined4 *)(in_ECX + 0x1cc));
    iVar2 = FUN_0049e630();
    bVar3 = iVar2 == 0;
LAB_0041c4b3:
    if (!bVar3) {
      return;
    }
    *(undefined4 *)(in_ECX + 0x1d8) = 10;
    return;
  }
  FUN_0041c0d0();
  return;
}


