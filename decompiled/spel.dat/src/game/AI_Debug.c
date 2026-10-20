/* spel.dat — game/AI_Debug.cpp: 14 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00409d20 FUN_00409d20 ==== */

void FUN_00409d20(void)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_28 [4];
  char *local_24;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005696ea;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_AI_DEBUG_00590ba4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_ACTION_AI_DEBUG_00590ba4;
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
    FUN_004029e0(local_28,i);
  }
  local_8._0_1_ = 1;
  FUN_004ea0c0();
  cVar1 = FUN_004eaf50(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (cVar1 != '\0') {
    FUN_0040a4e0(DAT_006fb97c == '\0');
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_BBOX_TOGGLE_00590bb4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_ACTION_BBOX_TOGGLE_00590bb4;
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
    FUN_004029e0(local_28,i);
  }
  local_8._0_1_ = 2;
  FUN_004ea0c0();
  cVar1 = FUN_004eaf50(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (cVar1 != '\0') {
    DAT_005cd9c8 = (uint)(DAT_005cd9c8 == 0);
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_WP_TOGGLE_00590bc8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_ACTION_WP_TOGGLE_00590bc8;
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
    FUN_004029e0(local_28,i);
  }
  local_8._0_1_ = 3;
  FUN_004ea0c0();
  cVar1 = FUN_004eaf50(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if ((cVar1 != '\0') && (DAT_006fb97c != '\0')) {
    DAT_006fb97d = DAT_006fb97d == '\0';
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_LINE_TOGGLE_00590bdc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_ACTION_LINE_TOGGLE_00590bdc;
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
    FUN_004029e0(local_28,i);
  }
  local_8._0_1_ = 4;
  FUN_004ea0c0();
  cVar1 = FUN_004eaf50(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if ((cVar1 != '\0') && (DAT_006fb97c != '\0')) {
    DAT_00590810 = (uint)(DAT_00590810 == 0);
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_FSM_TOGGLE_00590bf0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_ACTION_FSM_TOGGLE_00590bf0;
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
    FUN_004029e0(local_28,i);
  }
  local_8._0_1_ = 5;
  FUN_004ea0c0();
  cVar1 = FUN_004eaf50(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (((cVar1 != '\0') && (DAT_006fb97c != '\0')) &&
     (DAT_005cd9cc = DAT_005cd9cc + 1, DAT_005cd9cc == 6)) {
    DAT_005cd9cc = 0;
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_POSITIONMARKER_TOGGLE_00590c04;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_ACTION_POSITIONMARKER_TOGGLE_00590c04;
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
    FUN_004029e0(local_28,i);
  }
  local_8._0_1_ = 6;
  FUN_004ea0c0();
  cVar1 = FUN_004eaf50(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if ((cVar1 != '\0') && (DAT_006fb97c != '\0')) {
    DAT_005ccd44 = DAT_005ccd44 == '\0';
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_POLY_TOGGLE_00590c24;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_ACTION_POLY_TOGGLE_00590c24;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_8._0_1_ = 7;
  FUN_004ea0c0();
  cVar1 = FUN_004eaf50(local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if ((cVar1 != '\0') && (DAT_006fb97c != '\0')) {
    DAT_00590814 = (uint)(DAT_00590814 == 0);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0040a1c0 FUN_0040a1c0 ==== */

void FUN_0040a1c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  
  if ((DAT_006fb97c != '\0') && (DAT_005cd9d4 < 0xc5)) {
    iVar1 = DAT_005cd9d4 * 0x20;
    *(undefined4 *)(&DAT_005caf88 + iVar1) = param_1;
    *(undefined4 *)(&DAT_005caf8c + iVar1) = param_2;
    *(undefined4 *)(&DAT_005caf90 + iVar1) = param_3;
    *(undefined4 *)(&DAT_005caf98 + iVar1) = 0xffffffff;
    *(undefined4 *)(&DAT_005cafa8 + iVar1) = param_4;
    DAT_005cd9d4 = DAT_005cd9d4 + 3;
    *(undefined4 *)(&DAT_005cafac + iVar1) = param_5;
    *(undefined4 *)(&DAT_005cafb0 + iVar1) = param_6;
    *(undefined4 *)(&DAT_005cafb8 + iVar1) = 0xffffffff;
    *(undefined4 *)(&DAT_005cafc8 + iVar1) = param_7;
    *(undefined4 *)(&DAT_005cafcc + iVar1) = param_8;
    *(undefined4 *)(&DAT_005cafd0 + iVar1) = param_9;
    *(undefined4 *)(&DAT_005cafd8 + iVar1) = 0xffffffff;
  }
  return;
}


/* ==== 0040a260 FUN_0040a260 ==== */

void FUN_0040a260(void)

{
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  if (DAT_00590814 == 1) {
    puVar2 = &DAT_0073b538;
    puVar3 = local_40;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = local_40;
    puVar3 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (i != 0) {
      uVar1 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar1);
    }
    i = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(undefined4 *)(i + 0x60) = 0;
    *(undefined4 *)(i + 0x48) = *DAT_0073b1b0;
    *(undefined4 *)(i + 0x58) = 1;
    if (*(int *)(i + 0x5c) == 1) {
      *(undefined4 *)(i + 0x58) = 0;
      (**(code **)(**(int **)(i + 0x54) + 0xc))(*(int **)(i + 0x54),i);
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,4,2,&DAT_005caf88,DAT_005cd9d4,1);
    if (i != 0) {
      uVar1 = FUN_004bb290(i);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___00590c5c,
                   s_C__Work_A2IV_Game_prog_AI_Debug__00590c38,0xdf,uVar1);
    }
    DAT_005cd9d4 = 0;
    return;
  }
  DAT_005cd9d4 = 0;
  return;
}


/* ==== 0040a360 FUN_0040a360 ==== */

void FUN_0040a360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if ((DAT_006fb97c != '\0') && (DAT_005cd9d0 < 99)) {
    iVar1 = DAT_005cd9d0 * 0x20;
    *(undefined4 *)(&DAT_005ccd48 + iVar1) = param_1;
    *(undefined4 *)(&DAT_005ccd4c + iVar1) = param_2;
    *(undefined4 *)(&DAT_005ccd50 + iVar1) = param_3;
    *(undefined4 *)(&DAT_005ccd58 + iVar1) = 0xffffffff;
    *(undefined4 *)(&DAT_005ccd68 + iVar1) = param_4;
    DAT_005cd9d0 = DAT_005cd9d0 + 2;
    *(undefined4 *)(&DAT_005ccd6c + iVar1) = param_5;
    *(undefined4 *)(&DAT_005ccd70 + iVar1) = param_6;
    *(undefined4 *)(&DAT_005ccd78 + iVar1) = 0xffffffff;
  }
  return;
}


/* ==== 0040a3d0 FUN_0040a3d0 ==== */

void FUN_0040a3d0(void)

{
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  if (DAT_00590810 == 1) {
    puVar2 = &DAT_0073b538;
    puVar3 = local_40;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = local_40;
    puVar3 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (i != 0) {
      uVar1 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar1);
    }
    i = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(undefined4 *)(i + 0x60) = 0;
    *(undefined4 *)(i + 0x48) = *DAT_0073b1b0;
    *(undefined4 *)(i + 0x58) = 1;
    if (*(int *)(i + 0x5c) == 1) {
      *(undefined4 *)(i + 0x58) = 0;
      (**(code **)(**(int **)(i + 0x54) + 0xc))(*(int **)(i + 0x54),i);
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,&DAT_005ccd48,DAT_005cd9d0,1);
    if (i != 0) {
      FUN_004c3f80(0,1);
      uVar1 = FUN_004bb290(i);
      FUN_004c3fa0(s__s__d____D3DError_DrawPrimitive___00590ca8,
                   s_C__Work_A2IV_Game_prog_AI_Debug__00590c84,0x107,uVar1);
      FUN_004c3f80(0,0);
    }
    DAT_005cd9d0 = 0;
    return;
  }
  DAT_005cd9d0 = 0;
  return;
}


/* ==== 0040a4e0 FUN_0040a4e0 ==== */

void FUN_0040a4e0(undefined1 param_1)

{
  DAT_006fb97c = param_1;
  DAT_006fb97d = param_1;
  return;
}


/* ==== 0040a4f0 FUN_0040a4f0 ==== */

void FUN_0040a4f0(int param_1,int param_2)

{
  int j;
  int i;
  int local_4;
  
  j = FUN_004af520(param_1,param_2,&i,&param_2,&local_4,&param_1);
  if (i < param_2) {
    do {
      FUN_0040a950(i);
      i = i + 1;
    } while (i < param_2);
  }
  if ((j != 0) && (j = local_4, local_4 < param_1)) {
    do {
      FUN_0040a950(j);
      j = j + 1;
    } while (j < param_1);
  }
  return;
}


/* ==== 0040a570 FUN_0040a570 ==== */

void FUN_0040a570(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int i;
  int *piVar4;
  int local_360 [216];
  
  local_360[0] = 0;
  local_360[7] = 0;
  local_360[8] = 0;
  local_360[1] = 1;
  local_360[2] = 1;
  local_360[3] = 2;
  local_360[4] = 2;
  local_360[0xd] = 1;
  local_360[0x11] = 2;
  local_360[5] = 3;
  local_360[6] = 3;
  local_360[9] = 4;
  local_360[10] = 4;
  local_360[0xb] = 5;
  local_360[0xc] = 5;
  local_360[0xe] = 5;
  local_360[0x15] = 3;
  local_360[0x17] = 4;
  local_360[0xf] = 6;
  local_360[0x10] = 6;
  local_360[0x12] = 6;
  local_360[0x13] = 7;
  local_360[0x14] = 7;
  local_360[0x16] = 7;
  piVar4 = local_360;
  i = 0x18;
  piVar2 = local_360 + 0x19;
  do {
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    i = i + -1;
    piVar2[-1] = *(int *)(param_1 + 4 + iVar1 * 0xc);
    *piVar2 = *(int *)(param_1 + iVar1 * 0xc + 8);
    piVar2[1] = *(int *)(param_1 + (iVar1 * 3 + 3) * 4);
    piVar2[3] = -1;
    piVar2 = piVar2 + 8;
  } while (i != 0);
  piVar4 = (int *)(DAT_0073b0d0 + param_2 * 0xa9 + 0x10);
  piVar2 = local_360;
  for (i = 0x10; i != 0; i = i + -1) {
    *piVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
  }
  piVar4 = local_360;
  piVar2 = &DAT_0073b474;
  for (i = 0x10; i != 0; i = i + -1) {
    *piVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (i != 0) {
    uVar3 = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar3);
  }
  i = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
  *(undefined4 *)(i + 0x60) = 0;
  *(undefined4 *)(i + 0x48) = *DAT_0073b1b0;
  *(undefined4 *)(i + 0x58) = 1;
  if (*(int *)(i + 0x5c) == 1) {
    *(undefined4 *)(i + 0x58) = 0;
    (**(code **)(**(int **)(i + 0x54) + 0xc))(*(int **)(i + 0x54),i);
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,local_360 + 0x15,0x18,1);
  if (i != 0) {
    uVar3 = FUN_004bb290(i);
    FUN_004c4150(s__s__d____D3DError_DrawPrimitive___00590cf4,
                 s_C__Work_A2IV_Game_prog_AI_Debug__00590cd0,0x146,uVar3);
  }
  return;
}


/* ==== 0040a730 FUN_0040a730 ==== */

void FUN_0040a730(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int j;
  int *piVar3;
  int *piVar4;
  int i;
  int local_550 [49];
  undefined1 auStack_48c [12];
  undefined4 local_480 [288];
  
  local_550[4] = 3;
  local_550[8] = 3;
  local_550[9] = 3;
  local_550[0xd] = 3;
  local_550[1] = 2;
  local_550[5] = 2;
  local_550[0xc] = 2;
  local_550[0xf] = 2;
  local_550[0x13] = 2;
  local_550[2] = 1;
  local_550[0xb] = 7;
  local_550[0xe] = 7;
  local_550[0x10] = 7;
  local_550[0x11] = 6;
  local_550[0x12] = 1;
  local_550[0x14] = 6;
  local_550[0x15] = 6;
  local_550[0x17] = 1;
  local_550[0x19] = 6;
  local_550[0x1a] = 7;
  local_550[0x1d] = 7;
  local_550[0x1f] = 1;
  local_550[0x21] = 1;
  local_550[0] = 0;
  local_550[3] = 0;
  local_550[6] = 0;
  local_550[7] = 4;
  local_550[10] = 4;
  local_550[0x16] = 5;
  local_550[0x18] = 5;
  local_550[0x1b] = 4;
  local_550[0x1c] = 5;
  local_550[0x1e] = 0;
  local_550[0x20] = 4;
  local_550[0x22] = 5;
  local_550[0x23] = 4;
  piVar3 = local_550;
  i = 0x24;
  puVar1 = local_480 + 1;
  do {
    j = *piVar3;
    piVar3 = piVar3 + 1;
    puVar1[-1] = *(undefined4 *)(param_1 + 4 + j * 0xc);
    *puVar1 = *(undefined4 *)(param_1 + j * 0xc + 8);
    puVar1[1] = *(undefined4 *)(param_1 + (j * 3 + 3) * 4);
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    i = i + -1;
    puVar1 = puVar1 + 8;
  } while (i != 0);
  piVar3 = (int *)(DAT_0073b0d0 + param_2 * 0xa9 + 0x10);
  piVar4 = local_550 + 0x24;
  for (j = 0x10; j != 0; j = j + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = local_550 + 0x24;
  piVar4 = &DAT_0073b474;
  for (j = 0x10; j != 0; j = j + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  j = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (j != 0) {
    uVar2 = FUN_004bb290(j);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar2);
  }
  j = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
  *(undefined4 *)(j + 0x60) = 0;
  *(undefined4 *)(j + 0x48) = *DAT_0073b1b0;
  *(undefined4 *)(j + 0x58) = 1;
  if (*(int *)(j + 0x5c) == 1) {
    *(undefined4 *)(j + 0x58) = 0;
    (**(code **)(**(int **)(j + 0x54) + 0xc))(*(int **)(j + 0x54),j);
  }
  j = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,4,2,auStack_48c,0x24,1);
  if (j != 0) {
    uVar2 = FUN_004bb290(j);
    FUN_004c4150(s__s__d____D3DError_DrawPrimitive___00590d40,
                 s_C__Work_A2IV_Game_prog_AI_Debug__00590d1c,0x164,uVar2);
  }
  return;
}


/* ==== 0040a950 FUN_0040a950 ==== */

void FUN_0040a950(int param_1)

{
  int iVar1;
  int i;
  int iVar2;
  int *piVar3;
  int j;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_7c;
  undefined4 local_78 [27];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005696fc;
  pvStack_c = ExceptionList;
  iVar4 = 0;
  i = 0;
  local_7c = -1;
  if (0 < DAT_00715e54) {
    do {
      if (*(char *)(DAT_00715e60 + i) == '\x01') {
        local_7c = i;
      }
      i = i + 1;
    } while (i < DAT_00715e54);
  }
  ExceptionList = &pvStack_c;
  FUN_004bf5d0(local_78);
  i = 0;
  local_4 = 0;
  if (-1 < local_7c) {
    do {
      if (*(int *)(DAT_00715e50 + 0x5c + iVar4) != 0) {
        if ((iVar4 < 0) || (DAT_00715e54 <= i)) {
          FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                       s_______Libs_Win3DLib_Include_arra_00591388,0x43,i,&DAT_00715e64,DAT_00715e54
                       ,&DAT_00715e7d);
        }
        if ((*(char *)(DAT_00715e60 + i) != '\0') &&
           (*(int *)(DAT_00715e50 + 0x34 + iVar4) == param_1)) {
          iVar1 = *(int *)(DAT_00715e50 + 0x24 + iVar4);
          piVar3 = (int *)(DAT_0073b0d0 + iVar1 * 0xa9);
          if ((*piVar3 == 1) || (*piVar3 != 2)) {
            iVar2 = *(int *)((int)piVar3 + 0x99);
          }
          else {
            iVar2 = *(int *)(*(int *)(*(int *)(piVar3[1] * 9 + 4 + DAT_0073b168) + piVar3[2] * 4) *
                             0x10 + DAT_0073b120);
          }
          puVar5 = (undefined4 *)(DAT_0073b5c8 + 0xc + iVar2 * 0xac);
          puVar6 = local_78;
          for (j = 0x1b; j != 0; j = j + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          if (DAT_005cd9c8 == 0) {
            FUN_0040a570(local_78);
          }
          else {
            FUN_0040a730(local_78,iVar1);
          }
        }
      }
      i = i + 1;
      iVar4 = iVar4 + 0xf0;
    } while (i <= local_7c);
  }
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0040aaf0 FUN_0040aaf0 ==== */

void FUN_0040aaf0(int param_1,int param_2)

{
  int j;
  int i;
  int local_4;
  
  j = FUN_004af520(param_1,param_2,&i,&param_2,&local_4,&param_1);
  if (i < param_2) {
    do {
      FUN_0040ab70(i);
      i = i + 1;
    } while (i < param_2);
  }
  if ((j != 0) && (j = local_4, local_4 < param_1)) {
    do {
      FUN_0040ab70(j);
      j = j + 1;
    } while (j < param_1);
  }
  return;
}


/* ==== 0040ab70 FUN_0040ab70 ==== */

/* WARNING: Type propagation algorithm not settling */

void FUN_0040ab70(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int i;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  int local_18c;
  float local_188 [78];
  undefined4 local_50;
  undefined4 local_4c [19];
  
  local_188[1] = (float)(param_1 * 0x994);
  local_188[0] = *(float *)((int)local_188[1] + 0xf4 + DAT_00715f00);
  if (0 < (int)local_188[0]) {
    local_18c = (int)local_188[1] + 0x134;
    do {
      iVar5 = *(int *)(local_18c + DAT_00715f00) * 0x50;
      pfVar8 = (float *)&DAT_0073b538;
      pfVar10 = local_188 + 0x42;
      for (i = 0x10; i != 0; i = i + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      puVar9 = (undefined4 *)(iVar5 + 8 + DAT_00715eb8);
      local_198 = *puVar9;
      local_50 = local_198;
      local_194 = puVar9[1];
      local_4c[0] = local_194;
      local_190 = puVar9[2];
      local_4c[1] = local_190;
      pfVar8 = local_188 + 0x42;
      pfVar10 = (float *)&DAT_0073b474;
      for (i = 0x10; i != 0; i = i + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (i != 0) {
        uVar4 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar4);
      }
      iVar6 = 0;
      i = *(int *)(iVar5 + 0x14 + DAT_00715eb8);
      if (i != -1) {
        piVar1 = (int *)(iVar5 + 8 + DAT_00715eb8);
        local_18c = *piVar1;
        iVar6 = 2;
        local_188[1] = (float)piVar1[2];
        local_188[3] = -NAN;
        local_188[0] = (float)piVar1[1] + 5.0;
        puVar9 = (undefined4 *)(i * 0x50 + 8 + DAT_00715eb8);
        local_188[7] = (float)*puVar9;
        local_188[8] = (float)puVar9[1] + 5.0;
        local_188[9] = (float)puVar9[2];
        local_188[0xb] = -NAN;
      }
      i = *(int *)(iVar5 + 0x18 + DAT_00715eb8);
      iVar7 = iVar6;
      if (i != -1) {
        piVar1 = (int *)(iVar5 + 8 + DAT_00715eb8);
        pfVar8 = (float *)(i * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar7 = iVar6 + 2;
        (&local_18c)[iVar6 * 8] = *piVar1;
        local_188[iVar6 * 8] = fVar2 + 5.0;
        local_188[iVar6 * 8 + 1] = fVar3;
        local_188[iVar6 * 8 + 3] = -NAN;
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        local_188[iVar6 * 8 + 7] = *pfVar8;
        local_188[iVar6 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar6 * 8 + 9] = fVar3;
        local_188[iVar6 * 8 + 0xb] = -NAN;
      }
      i = *(int *)(iVar5 + 0x1c + DAT_00715eb8);
      iVar6 = iVar7;
      if (i != -1) {
        piVar1 = (int *)(iVar5 + 8 + DAT_00715eb8);
        pfVar8 = (float *)(i * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar6 = iVar7 + 2;
        (&local_18c)[iVar7 * 8] = *piVar1;
        local_188[iVar7 * 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 1] = fVar3;
        local_188[iVar7 * 8 + 3] = -NAN;
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        local_188[iVar7 * 8 + 7] = *pfVar8;
        local_188[iVar7 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 9] = fVar3;
        local_188[iVar7 * 8 + 0xb] = -NAN;
      }
      i = *(int *)(iVar5 + 0x20 + DAT_00715eb8);
      iVar7 = iVar6;
      if (i != -1) {
        piVar1 = (int *)(iVar5 + 8 + DAT_00715eb8);
        pfVar8 = (float *)(i * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar7 = iVar6 + 2;
        (&local_18c)[iVar6 * 8] = *piVar1;
        local_188[iVar6 * 8] = fVar2 + 5.0;
        local_188[iVar6 * 8 + 1] = fVar3;
        local_188[iVar6 * 8 + 3] = -NAN;
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        local_188[iVar6 * 8 + 7] = *pfVar8;
        local_188[iVar6 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar6 * 8 + 9] = fVar3;
        local_188[iVar6 * 8 + 0xb] = -NAN;
      }
      puVar9 = &DAT_0073b538;
      puVar11 = local_4c;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar9 = local_4c;
      puVar11 = &DAT_0073b474;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (i != 0) {
        uVar4 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar4);
      }
      i = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,&local_198,iVar7,1);
      if (i != 0) {
        FUN_004c3f80(0,1);
        uVar4 = FUN_004bb290(i);
        FUN_004c3fa0(s__s__d____D3DError_DrawPrimitive___00590d8c,
                     s_C__Work_A2IV_Game_prog_AI_Debug__00590d68,0x20e,uVar4);
        FUN_004c3f80(0,0);
      }
      local_18c = local_18c + 4;
      local_188[0] = (float)((int)local_188[0] + -1);
    } while (local_188[0] != 0.0);
  }
  local_188[0] = *(float *)((int)local_188[1] + 0xf8 + DAT_00715f00);
  if (0 < (int)local_188[0]) {
    local_18c = (int)local_188[1] + 0x164;
    do {
      iVar5 = *(int *)(local_18c + DAT_00715f00) * 0x50;
      pfVar8 = (float *)&DAT_0073b538;
      pfVar10 = local_188 + 0x42;
      for (i = 0x10; i != 0; i = i + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      puVar9 = (undefined4 *)(iVar5 + 8 + DAT_00715eb8);
      local_198 = *puVar9;
      local_50 = local_198;
      local_194 = puVar9[1];
      local_4c[0] = local_194;
      local_190 = puVar9[2];
      local_4c[1] = local_190;
      pfVar8 = local_188 + 0x42;
      pfVar10 = (float *)&DAT_0073b474;
      for (i = 0x10; i != 0; i = i + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (i != 0) {
        uVar4 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar4);
      }
      iVar6 = 0;
      i = *(int *)(iVar5 + 0x14 + DAT_00715eb8);
      if (i != -1) {
        piVar1 = (int *)(iVar5 + 8 + DAT_00715eb8);
        local_18c = *piVar1;
        iVar6 = 2;
        local_188[1] = (float)piVar1[2];
        local_188[3] = 2.3418052e-38;
        local_188[0] = (float)piVar1[1] + 5.0;
        puVar9 = (undefined4 *)(i * 0x50 + 8 + DAT_00715eb8);
        local_188[7] = (float)*puVar9;
        local_188[8] = (float)puVar9[1] + 5.0;
        local_188[9] = (float)puVar9[2];
        local_188[0xb] = 2.3418052e-38;
      }
      i = *(int *)(iVar5 + 0x18 + DAT_00715eb8);
      iVar7 = iVar6;
      if (i != -1) {
        piVar1 = (int *)(iVar5 + 8 + DAT_00715eb8);
        pfVar8 = (float *)(i * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar7 = iVar6 + 2;
        (&local_18c)[iVar6 * 8] = *piVar1;
        local_188[iVar6 * 8] = fVar2 + 5.0;
        local_188[iVar6 * 8 + 1] = fVar3;
        local_188[iVar6 * 8 + 3] = 2.3418052e-38;
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        local_188[iVar6 * 8 + 7] = *pfVar8;
        local_188[iVar6 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar6 * 8 + 9] = fVar3;
        local_188[iVar6 * 8 + 0xb] = 2.3418052e-38;
      }
      i = *(int *)(iVar5 + 0x1c + DAT_00715eb8);
      iVar6 = iVar7;
      if (i != -1) {
        piVar1 = (int *)(iVar5 + 8 + DAT_00715eb8);
        pfVar8 = (float *)(i * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar6 = iVar7 + 2;
        (&local_18c)[iVar7 * 8] = *piVar1;
        local_188[iVar7 * 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 1] = fVar3;
        local_188[iVar7 * 8 + 3] = 2.3418052e-38;
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        local_188[iVar7 * 8 + 7] = *pfVar8;
        local_188[iVar7 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 9] = fVar3;
        local_188[iVar7 * 8 + 0xb] = 2.3418052e-38;
      }
      i = *(int *)(iVar5 + 0x20 + DAT_00715eb8);
      iVar7 = iVar6;
      if (i != -1) {
        piVar1 = (int *)(iVar5 + 8 + DAT_00715eb8);
        pfVar8 = (float *)(i * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar7 = iVar6 + 2;
        (&local_18c)[iVar6 * 8] = *piVar1;
        local_188[iVar6 * 8] = fVar2 + 5.0;
        local_188[iVar6 * 8 + 1] = fVar3;
        local_188[iVar6 * 8 + 3] = 2.3418052e-38;
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        local_188[iVar6 * 8 + 7] = *pfVar8;
        local_188[iVar6 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar6 * 8 + 9] = fVar3;
        local_188[iVar6 * 8 + 0xb] = 2.3418052e-38;
      }
      puVar9 = &DAT_0073b538;
      puVar11 = local_4c;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar9 = local_4c;
      puVar11 = &DAT_0073b474;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (i != 0) {
        uVar4 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar4);
      }
      i = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(undefined4 *)(i + 0x60) = 0;
      uVar4 = *DAT_0073b1b0;
      *(undefined4 *)(i + 0x58) = 1;
      *(undefined4 *)(i + 0x48) = uVar4;
      if (*(int *)(i + 0x5c) == 1) {
        *(undefined4 *)(i + 0x58) = 0;
        (**(code **)(**(int **)(i + 0x54) + 0xc))(*(int **)(i + 0x54),i);
      }
      i = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,&local_198,iVar7,1);
      if (i != 0) {
        uVar4 = FUN_004bb290(i);
        FUN_004c4150(s__s__d____D3DError_DrawPrimitive___00590dd8,
                     s_C__Work_A2IV_Game_prog_AI_Debug__00590db4,0x26b,uVar4);
      }
      local_18c = local_18c + 4;
      local_188[0] = (float)((int)local_188[0] + -1);
    } while (local_188[0] != 0.0);
  }
  return;
}


/* ==== 0040b370 FUN_0040b370 ==== */

void FUN_0040b370(void)

{
  return;
}


/* ==== 0040b380 FUN_0040b380 ==== */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b380(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint j;
  uint k;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  int i;
  int local_48;
  undefined1 local_44 [4];
  char *local_40;
  uint local_3c;
  undefined1 local_34 [4];
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0056971e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004028f0(local_44);
  local_c = 0;
  FUN_004028f0(local_34);
  local_c._0_1_ = 1;
  FUN_004028f0(local_24);
  local_c = CONCAT31(local_c._1_3_,2);
  local_48 = 0x28;
  switch(DAT_005cd9cc) {
  case 1:
    uVar4 = FUN_00447820(0,0,s_AI_debug_info__Object_state_00590e00);
    FUN_004c5930(uVar4);
    i = 0;
    puVar7 = &DAT_005ceab8;
    do {
      if (puVar7[-0x34] != -1) {
        pcVar5 = (char *)FUN_0040dcf0();
        j = 0xffffffff;
        pcVar9 = pcVar5;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        j = ~j - 1;
        cVar2 = FUN_00402a00(local_44,j,1);
        if (cVar2 != '\0') {
          pcVar9 = local_40;
          for (k = j >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (k = j & 3; k != 0; k = k - 1) {
            *pcVar9 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar9 = pcVar9 + 1;
          }
          local_40[j] = '\0';
          local_3c = j;
        }
        uVar4 = FUN_0040dbb0();
        FUN_004093c0(local_34,uVar4,0,0xffffffff);
        pcVar5 = local_40;
        if (local_40 == (char *)0x0) {
          pcVar5 = "";
        }
        uVar4 = FUN_00447820(0,local_48,s___d___s____s_00590e1c,i,pcVar5);
        FUN_004c5930(uVar4);
        local_48 = local_48 + 0x10;
      }
      puVar7 = puVar7 + 0xa5;
      i = i + 1;
    } while ((int)puVar7 < 0x5d1bb4);
    break;
  case 2:
    uVar4 = FUN_00447820(0,0,s_AI_debug_info__Settings_00590e2c);
    FUN_004c5930(uVar4);
    iVar1 = DAT_005d1924;
    if (DAT_005d3310 < 1) break;
    iVar8 = FUN_0040ebe0();
    if ((iVar1 < 0) || (iVar3 = (*(code *)**(undefined4 **)(iVar8 + 0x24))(), iVar3 <= iVar1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_004a6980(uVar4,s__s__d____Invalid_object_index____0058fd14,
                 s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar1);
    iVar3 = *(int *)(*(int *)(iVar8 + 0x28) + 4);
    iVar8 = iVar3 + iVar1 * 0x54;
    uVar4 = FUN_00447820(0,0x28,s_Aggression____f_00590e44,
                         (double)*(float *)(iVar3 + 0x34 + iVar1 * 0x54));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x38,s_Acceleration____f_00590e54,(double)*(float *)(iVar8 + 0x30));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x48,s_Risk____f_00590e68,(double)*(float *)(iVar8 + 0x44));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x58,s_FrontVisibilityRange____d_00590e74,*(undefined4 *)(iVar8 + 0x10));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x68,s_RearVisibilityRange____d_00590e90,*(undefined4 *)(iVar8 + 0x14));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x78,s_MaxCornerSpeed___f_00590eac,(double)*(float *)(iVar8 + 0x2c));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x88,s_PatrolSpeed___f_00590ec0,(double)*(float *)(iVar8 + 0x28));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x98,s_MegaphoneFrequency___d_00590ed0,*(undefined4 *)(iVar8 + 0x18));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0xa8,s_OvertakeBashFrequency___d_00590ee8,*(undefined4 *)(iVar8 + 0x1c));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0xb8,s_StayInLaneDistance___d_00590f04,*(undefined4 *)(iVar8 + 0x20));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,200,s_HandBrakeSlowDownBias____f_00590f1c,
                         (double)*(float *)(iVar8 + 0x24));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0xd8,s_Cheat____d_00590f38,*(undefined1 *)(iVar8 + 0x48));
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0xe8,s_CheatThresholdDistance____d_00590f44,*(undefined4 *)(iVar8 + 0x4c)
                        );
    FUN_004c5930(uVar4);
    uVar10 = CONCAT44(*(undefined4 *)(iVar8 + 0x50),s_CheatReplaceDistance____d_00590f60);
    iVar8 = 0xf8;
    goto LAB_0040bc94;
  case 3:
    uVar4 = FUN_00447820(0,0,s_AI_debug_info__Objects_00590f7c);
    FUN_004c5930(uVar4);
    if (0 < DAT_005d3310) {
      pcVar5 = (char *)FUN_0040dcf0();
      j = 0xffffffff;
      pcVar9 = pcVar5;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      j = ~j - 1;
      cVar2 = FUN_00402a00(local_44,j,1);
      if (cVar2 != '\0') {
        pcVar9 = local_40;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar9 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_40[j] = '\0';
        local_3c = j;
      }
      uVar4 = FUN_0040dbb0();
      FUN_004093c0(local_34,uVar4,0,0xffffffff);
      puVar6 = local_30;
      if (local_30 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      pcVar5 = local_40;
      if (local_40 == (char *)0x0) {
        pcVar5 = "";
      }
      uVar4 = FUN_00447820(0,0x28,s___d___s____s_00590f94,0x12,pcVar5,puVar6);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x48,s_chunk____d_00590fa4,
                           *(undefined4 *)(DAT_005d1850 * 0xf0 + 0x34 + DAT_00715e50));
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x58,s_waypoint____d_00590fb0,
                           *(undefined4 *)(DAT_005d1850 * 0xf0 + 0x3c + DAT_00715e50));
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x68,s_side____d_00590fc0,
                           *(undefined4 *)(DAT_005d1850 * 0xf0 + 0x50 + DAT_00715e50));
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x78,s_current_lane____d_00590fcc,DAT_005d1ac0);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x88,s_preferred_lane____d_00590fe0,DAT_005d1ac4);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x98,s_num_lanes____d_00590ff4,
                           *(undefined4 *)
                            (DAT_00715f00 + 0xf8 +
                            *(int *)(DAT_005d1850 * 0xf0 + 0x34 + DAT_00715e50) * 0x994));
      FUN_004c5930(uVar4);
    }
    break;
  case 4:
    uVar4 = FUN_00447820(0,0,s_AI_debug_info__Supercop_behavior_00591004);
    FUN_004c5930(uVar4);
    iVar1 = DAT_005d1a4c;
    if (DAT_005d3310 < 1) break;
    pcVar5 = (char *)FUN_0040dcf0();
    j = 0xffffffff;
    pcVar9 = pcVar5;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    j = ~j - 1;
    cVar2 = FUN_00402a00(local_44,j,1);
    if (cVar2 != '\0') {
      pcVar9 = local_40;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (k = j & 3; k != 0; k = k - 1) {
        *pcVar9 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_40[j] = '\0';
      local_3c = j;
    }
    uVar4 = FUN_0040dbb0();
    FUN_004093c0(local_34,uVar4,0,0xffffffff);
    puVar6 = local_30;
    if (local_30 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    uVar4 = FUN_00447820(0,0x28,s_State____s_00591028,puVar6);
    FUN_004c5930(uVar4);
    uVar4 = FUN_00402760(DAT_005d1aa4);
    uVar4 = FUN_00447820(0,0x38,s_Stage____s_00591034,uVar4);
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x58,s_Damage____d_00591040,DAT_005d18b4);
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x68,s_Current_speed____f_0059104c,
                         (double)*(float *)(DAT_005d1850 * 0xf0 + 0xc4 + DAT_00715e50));
    FUN_004c5930(uVar4);
    uVar4 = __ftol();
    uVar4 = FUN_00447820(0,0x78,s_Current_speed__km_h____d_00591060,uVar4);
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x88,s_Curve_speed____f_0059107c,0);
    FUN_004c5930(uVar4);
    uVar4 = FUN_00447820(0,0x98,s_Speed_limit____f_00591090,0);
    FUN_004c5930(uVar4);
    iVar8 = 0xb8;
    if (DAT_005d1a4c != -1) {
      uVar4 = FUN_00402730(&DAT_005d1948 + DAT_005d1a4c * 4);
      uVar4 = FUN_00447820(0,0xb8,s_position_w_r_t__target____s_005910a4,uVar4);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,200,s_target_chunk_distance____d_005910c0,DAT_005d1a74);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0xd8,s_target_distance____f_005910dc,(double)DAT_005d1a7c);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0xe8,s_target_z_distance____f_005910f4,0);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0xf8,s_attack_distance____f_0059110c,0);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x108,s_target_speed____f_00591124,
                           (double)*(float *)((&DAT_005d194c)[iVar1 * 4] * 0xf0 + 0xc4 +
                                             DAT_00715e50));
      FUN_004c5930(uVar4);
      uVar4 = __ftol();
      uVar4 = FUN_00447820(0,0x118,s_TargetInactiveTimer____d_00591138,uVar4);
      FUN_004c5930(uVar4);
      iVar8 = 0x138;
    }
    uVar4 = FUN_00447820(0,iVar8,s_Steer____f_00591154,(double)DAT_005d1938);
    FUN_004c5930(uVar4);
    uVar4 = __ftol();
    uVar4 = FUN_00447820(0,iVar8 + 0x10,s_Gas____d_00591160,uVar4);
    FUN_004c5930(uVar4);
    uVar4 = __ftol();
    uVar4 = FUN_00447820(0,iVar8 + 0x20,s_Brake____d_0059116c,uVar4);
    FUN_004c5930(uVar4);
    pcVar5 = s_true_00591178;
    if (DAT_005d1944 == '\0') {
      pcVar5 = s_false_00591180;
    }
    uVar4 = FUN_00447820(0,iVar8 + 0x30,s_Handbrake____s_00591188,pcVar5);
    FUN_004c5930(uVar4);
    iVar8 = iVar8 + 0x40;
    pcVar5 = s_true_00591198;
    if (DAT_005d1945 == '\0') {
      pcVar5 = s_false_005911a0;
    }
    uVar10 = CONCAT44(pcVar5,s_Turbo____s_005911a8);
LAB_0040bc94:
    uVar4 = FUN_00447820(0,iVar8,uVar10);
    FUN_004c5930(uVar4);
    break;
  case 5:
    uVar4 = FUN_00447820(0,0,s_AI_debug_info__Custom_005911b4);
    FUN_004c5930(uVar4);
    iVar1 = DAT_005d1a4c;
    if (0 < DAT_005d3310) {
      pcVar5 = (char *)FUN_0040dcf0();
      j = 0xffffffff;
      pcVar9 = pcVar5;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      j = ~j - 1;
      cVar2 = FUN_00402a00(local_44,j,1);
      if (cVar2 != '\0') {
        pcVar9 = local_40;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar9 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_40[j] = '\0';
        local_3c = j;
      }
      uVar4 = FUN_0040dbb0();
      FUN_004093c0(local_34,uVar4,0,0xffffffff);
      puVar6 = local_30;
      if (local_30 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      uVar4 = FUN_00447820(0,0x28,s_State____s_005911cc,puVar6);
      FUN_004c5930(uVar4);
      switch(DAT_005d1854) {
      case 0x21:
      case 0x22:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
        uVar4 = FUN_00402760();
        uVar4 = FUN_00447820(0,0x38,s_Stage____s_005911d8,uVar4);
        FUN_004c5930(uVar4);
        break;
      default:
        uVar4 = FUN_00447820(0,0x38,s_Stage_____005911e4);
        FUN_004c5930(uVar4);
      }
      uVar4 = FUN_00447820(0,0x58,s_Steer____f_005911f0,(double)_DAT_005d18e4);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x68,s_Gas____f_005911fc,0);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x78,s_Brake____f_00591208,0);
      FUN_004c5930(uVar4);
      pcVar5 = s_true_00591214;
      if (DAT_005d18fc == '\0') {
        pcVar5 = s_false_0059121c;
      }
      uVar4 = FUN_00447820(0,0x88,s_Handbrake____s_00591224,pcVar5);
      FUN_004c5930(uVar4);
      pcVar5 = s_true_00591234;
      if (DAT_005d18fd == '\0') {
        pcVar5 = s_false_0059123c;
      }
      uVar4 = FUN_00447820(0,0x98,s_Turbo____s_00591244,pcVar5);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0xb8,s_Current_speed____f_00591250,
                           (double)*(float *)(DAT_005d1850 * 0xf0 + 0xc4 + DAT_00715e50));
      FUN_004c5930(uVar4);
      uVar4 = __ftol();
      uVar4 = FUN_00447820(0,200,s_Current_speed__km_h____d_00591264,uVar4);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0xe8,s_Target_speed____f_00591280,
                           (double)*(float *)((&DAT_005d194c)[iVar1 * 4] * 0xf0 + 0xc4 +
                                             DAT_00715e50));
      FUN_004c5930(uVar4);
      uVar4 = __ftol();
      uVar4 = FUN_00447820(0,0xf8,s_Target_speed__km_h____d_00591294,uVar4);
      FUN_004c5930(uVar4);
      uVar4 = FUN_00447820(0,0x118,s_Curve_angle____f_005912ac,0);
      FUN_004c5930(uVar4);
    }
  }
  if (local_20 != 0) {
    cVar2 = *(char *)(local_20 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(local_20 + -1) = cVar2 + -1;
    }
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (local_30 != (undefined1 *)0x0) {
    cVar2 = local_30[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339();
    }
    else {
      local_30[-1] = cVar2 + -1;
    }
  }
  local_30 = (undefined1 *)0x0;
  local_2c = 0;
  local_28 = 0;
  if (local_40 != (char *)0x0) {
    cVar2 = local_40[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      local_40[-1] = cVar2 + -1;
      ExceptionList = local_14;
      return;
    }
    FUN_0054b339();
  }
  ExceptionList = local_14;
  return;
}


