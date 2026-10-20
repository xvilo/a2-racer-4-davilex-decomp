/* spel.dat — game/Gm_main.cpp: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0044cda0 FUN_0044cda0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044cda0(undefined4 param_1)

{
  DAT_006fb8a0 = param_1;
  switch(param_1) {
  case 0:
    _DAT_006fb8c4 = 0;
    DAT_006fb8c0 = 1;
    DAT_006fba9c = 1;
    return;
  case 1:
    _DAT_006fb8c4 = 0;
    FUN_0043c120(2,&LAB_0043c640,&LAB_0043c650,&DAT_0043c660);
    return;
  case 2:
    _DAT_006fb8c4 = 0;
    return;
  case 3:
    _DAT_006fb8c4 = 1;
    FUN_0043c120(4,&LAB_0043ab70,&LAB_0043ac80,&LAB_0043ad40);
    return;
  case 4:
    DAT_006fb8c0 = 0;
    DAT_006fba9c = 0;
    DAT_006fb89c = 0;
    return;
  case 6:
    _DAT_006fb8c4 = 1;
    FUN_0043c120(0xc,&LAB_0043bc20,&LAB_0043bd60,&LAB_0043be50);
    return;
  case 8:
    _DAT_006fb8c4 = 1;
    FUN_0043c120(0xb,&LAB_0043a910,&LAB_0043a980,&LAB_0043a9f0);
  }
  return;
}


/* ==== 0044ceb0 FUN_0044ceb0 ==== */

void FUN_0044ceb0(void)

{
  int *piVar1;
  int *piVar2;
  int i;
  int j;
  
  i = 0;
  piVar2 = &DAT_006fbb10;
  do {
    if (*piVar2 != -1) {
      FUN_004a8660(i,*piVar2);
    }
    piVar2 = piVar2 + 1;
    i = i + 1;
  } while ((int)piVar2 < 0x6fbb30);
  if ((DAT_006fb964 != 0) && (j = 0, 0 < DAT_005d2ab0)) {
    piVar2 = &DAT_005973f8;
    do {
      i = 0;
      piVar1 = piVar2;
      do {
        if (*piVar1 != -1) {
          FUN_004a8660(i,*piVar1);
        }
        i = i + 1;
        piVar1 = piVar1 + 1;
      } while (i < 8);
      j = j + 1;
      piVar2 = piVar2 + 0x16;
    } while (j < DAT_005d2ab0);
  }
  return;
}


/* ==== 0044cf60 FUN_0044cf60 ==== */

void FUN_0044cf60(void)

{
  FUN_0044cda0(1);
  FUN_004500b0();
  DAT_006fb89c = 1;
  DAT_006fba98 = 0;
  DAT_006fb8c0 = 0;
  DAT_006fba9c = 0;
  FUN_0044ceb0();
  return;
}


/* ==== 0044cf90 FUN_0044cf90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044cf90(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int m;
  undefined4 *puVar4;
  uint i;
  uint j;
  int k;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 local_d0 [4];
  char *local_cc;
  uint uStack_c8;
  undefined1 local_c0 [4];
  char *local_bc;
  float local_b0;
  undefined1 auStack_ac [4];
  char *pcStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [4];
  char *pcStack_98;
  uint uStack_94;
  undefined4 local_8c [16];
  undefined1 local_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a5a4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006fb950 == 0) goto LAB_0044d55a;
  ExceptionList = &pvStack_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_keyboard0_005a1ab0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_keyboard0_005a1ab0;
    pcVar7 = local_bc;
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
  local_4 = 0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_CM_KEYB_COMMA_005a1abc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_CM_KEYB_COMMA_005a1abc;
    pcVar7 = local_cc;
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
  puVar10 = local_c0;
  uVar11 = 0;
  puVar9 = local_d0;
  local_4._0_1_ = 1;
  FUN_004ea0c0(puVar9,puVar10,0);
  fVar8 = (float10)FUN_004eb4d0(puVar9,puVar10,uVar11);
  local_b0 = (float)fVar8;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (local_b0 == 0.0) {
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = s_keyboard0_005a1acc;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(i,1);
    if (cVar2 != '\0') {
      pcVar5 = s_keyboard0_005a1acc;
      pcVar7 = local_cc;
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
    local_4 = 2;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = s_CM_KEYB_PERIOD_005a1ad8;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(i,1);
    if (cVar2 != '\0') {
      pcVar5 = s_CM_KEYB_PERIOD_005a1ad8;
      pcVar7 = local_bc;
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
    puVar10 = local_d0;
    uVar11 = 0;
    puVar9 = local_c0;
    local_4._0_1_ = 3;
    FUN_004ea0c0(puVar9,puVar10,0);
    fVar8 = (float10)FUN_004eb4d0(puVar9,puVar10,uVar11);
    local_b0 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(1);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    if ((local_b0 != 0.0) && (_DAT_005afa48 = _DAT_005afa48 - 0.01, _DAT_005afa48 < -1.0)) {
      _DAT_005afa48 = -1.0;
    }
  }
  else {
    _DAT_005afa48 = _DAT_005afa48 + 0.01;
    if (10.0 < _DAT_005afa48) {
      _DAT_005afa48 = 10.0;
    }
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_keyboard0_005a1ae8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_keyboard0_005a1ae8;
    pcVar7 = local_cc;
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
  local_4 = 4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_CM_KEYB_M_005a1af4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_CM_KEYB_M_005a1af4;
    pcVar7 = local_bc;
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
  puVar10 = local_d0;
  puVar9 = local_c0;
  local_4._0_1_ = 5;
  FUN_004ea0c0(puVar9,puVar10);
  cVar2 = FUN_004eb7a0(puVar9,puVar10);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 != '\0') {
    k = DAT_006fb984 + 1;
    m = DAT_006fb984 + -0x12;
    if (k < 0x13) {
      piVar3 = &DAT_005ceab8 + k * 0xa5;
      do {
        if (((piVar3[-0x34] != -1) && (*piVar3 != 1)) &&
           (((int)piVar3 < 0x5ceab8 || ((0x5cf79c < (int)piVar3 || (k < DAT_005d2ab0)))))) break;
        piVar3 = piVar3 + 0xa5;
        k = k + 1;
      } while ((int)piVar3 < 0x5d1bb4);
      m = k + -0x13;
    }
    if (k == 0x13 || SBORROW4(k,0x13) != m < 0) {
      uVar11 = DAT_006fba58;
      DAT_006fb984 = k;
      if (k != 0x13) goto LAB_0044d3af;
    }
    else {
      DAT_006fb984 = 0;
LAB_0044d3af:
      uVar11 = (&DAT_005ce9e8)[DAT_006fb984 * 0xa5];
    }
    FUN_00438f00(uVar11);
  }
  m = FUN_004c5e40(0x6b);
  if (m != 0) {
    _DAT_006fb974 = _DAT_006fb974 * 1.1;
    if (_DAT_006fb974 <= 0.0) {
      _DAT_006fb974 = 0.01;
    }
    puVar4 = (undefined4 *)
             FUN_004b39d0(local_4c,0.5 / _DAT_006fb974,0x46435000,_DAT_006fb974 * 3.1415927);
    puVar6 = local_8c;
    for (m = 0x10; m != 0; m = m + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar4 = local_8c;
    puVar6 = &DAT_0073b3f4;
    for (m = 0x10; m != 0; m = m + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    m = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
    if (m != 0) {
      uVar11 = FUN_004bb290(m);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x59,uVar11);
    }
  }
  m = FUN_004c5e40(0x6d);
  if (m != 0) {
    _DAT_006fb974 = _DAT_006fb974 * 0.9090909;
    if (_DAT_006fb974 <= 0.0) {
      _DAT_006fb974 = -0.01;
    }
    puVar4 = (undefined4 *)
             FUN_004b39d0(local_4c,0.5 / _DAT_006fb974,0x46435000,_DAT_006fb974 * 3.1415927);
    puVar6 = local_8c;
    for (m = 0x10; m != 0; m = m + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar4 = local_8c;
    puVar6 = &DAT_0073b3f4;
    for (m = 0x10; m != 0; m = m + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    m = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
    if (m != 0) {
      uVar11 = FUN_004bb290(m);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x59,uVar11);
    }
  }
LAB_0044d55a:
  m = FUN_004c5e40(0x11);
  if ((((m != 0) && (m = FUN_004c5e40(0x20), m != 0)) && (m = FUN_004c5e40(0x54), m != 0)) &&
     ((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0)) {
    DAT_0059becc = 0x2c;
    FUN_00448570(0xb,100000);
  }
  m = FUN_004c5e40(0x11);
  if (((m != 0) && (m = FUN_004c5e40(0x20), m != 0)) && (m = FUN_004c5e40(0x49), m != 0)) {
    DAT_0059becc = 0x2e;
    DAT_006fb96c = 1;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_keyboard0_005a1b00;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_keyboard0_005a1b00;
    pcVar7 = local_cc;
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
  local_4 = 6;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_CM_KEYB_RETURN_005a1b0c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_CM_KEYB_RETURN_005a1b0c;
    pcVar7 = local_bc;
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
  puVar10 = local_d0;
  puVar9 = local_c0;
  local_4._0_1_ = 7;
  FUN_004ea0c0(puVar9,puVar10);
  cVar2 = FUN_004eb7a0(puVar9,puVar10);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if ((cVar2 != '\0') && (cVar2 = FUN_0040e5a0(DAT_006fba58,DAT_006fba7c,1), cVar2 != '\0')) {
    DAT_0059becc = 0x42;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_keyboard0_005a1b1c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_keyboard0_005a1b1c;
    pcVar7 = local_cc;
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
    local_cc[i] = '\0';
    uStack_c8 = i;
  }
  local_4 = 8;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_CM_KEYB_5_005a1b28;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_CM_KEYB_5_005a1b28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_bc = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_bc = local_bc + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_bc = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_bc = local_bc + 1;
    }
    FUN_004029e0(i);
  }
  puVar10 = local_d0;
  puVar9 = local_c0;
  local_4._0_1_ = 9;
  FUN_004ea0c0(puVar9,puVar10);
  cVar2 = FUN_004eb7a0(puVar9,puVar10);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar2 != '\0') {
    if (DAT_00712784 == 0) {
      DAT_00712784 = 1;
    }
    else if (DAT_00712784 == 1) {
      DAT_00712784 = -(uint)(DAT_006fb950 != 0) & 2;
    }
    else if (DAT_00712784 == 2) {
      DAT_00712784 = 0;
    }
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Keyboard0_005a1b34;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_Keyboard0_005a1b34;
    pcVar7 = pcStack_a8;
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
    pcStack_a8[i] = '\0';
    uStack_a4 = i;
  }
  local_4 = 10;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_CM_KEYB_D_005a1b40;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar5 = s_CM_KEYB_D_005a1b40;
    pcVar7 = pcStack_98;
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
    pcStack_98[i] = '\0';
    uStack_94 = i;
  }
  puVar10 = auStack_ac;
  puVar9 = auStack_9c;
  local_4._0_1_ = 0xb;
  FUN_004ea0c0(puVar9,puVar10);
  cVar2 = FUN_004eb7a0(puVar9,puVar10);
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  if (pcStack_a8 != (char *)0x0) {
    cVar1 = pcStack_a8[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_a8 + -1);
    }
    else {
      pcStack_a8[-1] = cVar1 + -1;
    }
  }
  pcStack_a8 = (char *)0x0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if ((cVar2 != '\0') && (DAT_006fb924 = DAT_006fb924 + 1, 1 < DAT_006fb924)) {
    DAT_006fb924 = 0;
  }
  if (DAT_006fb950 != 0) {
    FUN_00409d20();
  }
  m = FUN_004c5e40(0x1b);
  if (((m != 0) && (DAT_006fb8a0 != 6)) && (DAT_006fb8a0 != 3)) {
    _DAT_0071277c = 3;
    DAT_006fb8d8 = 2;
  }
  m = FUN_004c5e40(0x50);
  if (((m != 0) && (DAT_006fb8a0 != 6)) && (DAT_006fb8a0 != 3)) {
    _DAT_0071277c = 2;
    DAT_006fb8d8 = 1;
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0044da30 FUN_0044da30 ==== */

/* WARNING: Removing unreachable block (ram,0x0044dda5) */
/* WARNING: Removing unreachable block (ram,0x0044ddaf) */
/* WARNING: Removing unreachable block (ram,0x0044ddb9) */
/* WARNING: Removing unreachable block (ram,0x0044ddb3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044da30(void)

{
  char cVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int i;
  uint j;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  float10 fVar8;
  undefined4 auStack_80 [6];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  int *piStack_44;
  int *piStack_40;
  undefined1 auStack_24 [4];
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056a5be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006fb8e4 != 0) {
    piStack_40 = (int *)0x0;
    piStack_44 = (int *)0x4;
    uStack_4c = (double)CONCAT44(DAT_00740894,0x44da64);
    ExceptionList = &pvStack_c;
    (**(code **)(*DAT_00740894 + 0x58))();
  }
  if (DAT_006fb8d0 == 0) {
    piStack_40 = (int *)0x44da71;
    FUN_004456a0();
  }
  piStack_40 = (int *)0x0;
  piStack_44 = (int *)0x44da77;
  FUN_004c0840();
  if (DAT_006fb8d0 == 0) {
    i = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(undefined4 *)(i + 0x60) = 0;
    uVar4 = *DAT_0073b1b0;
    *(undefined4 *)(i + 0x58) = 1;
    *(undefined4 *)(i + 0x48) = uVar4;
    if (*(int *)(i + 0x5c) == 1) {
      piStack_40 = (int *)0x44dab3;
      FUN_00440430();
    }
    if (DAT_0073b4ec != 0) {
      DAT_0073b4ec = 0;
      piStack_40 = (int *)*DAT_0073b1b0;
      piStack_44 = (int *)0x1;
      uStack_4c = (double)CONCAT44(DAT_0073b4b4,0x44dad6);
      piStack_40 = (int *)(**(code **)(*DAT_0073b4b4 + 0x5c))();
      if (piStack_40 != (int *)0x0) {
        piStack_44 = (int *)0x44dae0;
        piStack_44 = (int *)FUN_004bb290();
        uStack_4c = 6.15381663531614e-312;
        uStack_54 = 5.72832933887454e-307;
        FUN_004c4150();
      }
    }
  }
  piStack_40 = DAT_0073b4b4;
  piStack_44 = (int *)0x44db0a;
  piStack_44 = (int *)(**(code **)(*DAT_0073b4b4 + 0x28))();
  if (piStack_44 != (int *)0x0) {
    uStack_4c = (double)CONCAT44(0x44db14,(undefined4)uStack_4c);
    uVar4 = FUN_004bb290();
    uStack_4c = (double)CONCAT44(uVar4,0x38b);
    uStack_54 = 5.808917647326489e-307;
    pcStack_58 = (char *)0x44db29;
    FUN_004c4150();
  }
  piStack_44 = (int *)DAT_006fb8b0;
  uStack_4c = 4.246221087742e-314;
  uVar4 = FUN_0044df70();
  uStack_4c = (double)CONCAT44(uVar4,0x44db48);
  FUN_004aec50();
  piStack_44 = (int *)0x44db4d;
  FUN_0043d4f0();
  if (DAT_006fb8d0 == 0) {
    piStack_44 = *(int **)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(undefined4 *)((int)piStack_44 + 0x60) = 0;
    uVar4 = *DAT_0073b1b0;
    *(undefined4 *)((int)piStack_44 + 0x58) = 1;
    *(undefined4 *)((int)piStack_44 + 0x48) = uVar4;
    if (*(int *)((int)piStack_44 + 0x5c) == 1) {
      *(undefined4 *)((int)piStack_44 + 0x58) = 0;
      uStack_4c = (double)CONCAT44(*(int **)((int)piStack_44 + 0x54),0x44db88);
      (**(code **)(**(int **)((int)piStack_44 + 0x54) + 0xc))();
    }
    if (DAT_0073b4ec != 0) {
      DAT_0073b4ec = 0;
      piStack_44 = (int *)*DAT_0073b1b0;
      uStack_4c = (double)CONCAT44(1,DAT_0073b4b4);
      uStack_54 = (double)CONCAT44(0x44dbab,(undefined4)uStack_54);
      piStack_44 = (int *)(**(code **)(*DAT_0073b4b4 + 0x5c))();
      if (piStack_44 != (int *)0x0) {
        uStack_4c = (double)CONCAT44(0x44dbb5,(undefined4)uStack_4c);
        uVar4 = FUN_004bb290();
        uStack_4c = (double)CONCAT44(uVar4,0x122);
        uStack_54 = 5.5792667748262715e-307;
        pcStack_58 = (char *)0x44dbca;
        FUN_004c4150();
      }
    }
  }
  piStack_44 = (int *)0x1;
  uStack_4c = (double)CONCAT44(DAT_006fb8b4,DAT_006fb8b0);
  uStack_54 = 4.24622117074503e-314;
  uVar4 = FUN_0044df70();
  uStack_54 = (double)CONCAT44(uVar4,0x44dbeb);
  FUN_004a99a0();
  puVar5 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar6 = auStack_80;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0045dce0();
  if ((DAT_006fb97d != '\0') && (DAT_006fb950 != 0)) {
    piStack_44 = (int *)DAT_006fb8b0;
    uStack_4c = 4.24622122311599e-314;
    uVar4 = FUN_0044df70();
    uStack_4c = (double)CONCAT44(uVar4,0x44dc55);
    FUN_0040aaf0();
  }
  if (DAT_006fb97c != '\0') {
    piStack_44 = (int *)DAT_006fb8b0;
    uStack_4c = 4.24622123991422e-314;
    uVar4 = FUN_0044df70();
    uStack_4c = (double)CONCAT44(uVar4,0x44dc77);
    FUN_0040a4f0();
    piStack_44 = (int *)0x44dc7f;
    FUN_0040a3d0();
    piStack_44 = (int *)0x44dc84;
    FUN_0040a260();
    piStack_44 = (int *)0x44dc89;
    FUN_0040b370();
  }
  if ((0 < DAT_006fb924) && (DAT_00712784 != 2)) {
    piStack_44 = (int *)0x44dca4;
    FUN_004882f0();
  }
  piStack_44 = (int *)0x44dca9;
  FUN_00445180();
  piStack_44 = (int *)0x44dcae;
  FUN_00446fe0();
  piStack_44 = (int *)0x44dcb3;
  FUN_00440160();
  piStack_44 = (int *)0x44dcb8;
  FUN_0043de00();
  piStack_44 = DAT_0073b4b4;
  uStack_4c = (double)CONCAT44(0x44dcc3,(undefined4)uStack_4c);
  i = (**(code **)(*DAT_0073b4b4 + 0x2c))();
  if (i != 0) {
    uStack_4c._0_4_ = 0x44dccd;
    uStack_4c._4_4_ = i;
    uVar4 = FUN_004bb290();
    uStack_4c = (double)CONCAT44(uStack_4c._4_4_,uVar4);
    uStack_54 = 2.05197284747125e-311;
    pcStack_58 = s__s__d____D3DError_End_Scene____s_005a1bbc;
    uStack_5c = 0x44dce2;
    FUN_004c4150();
  }
  if (DAT_006fb97c != '\0') {
    uStack_4c = (double)CONCAT44(0x44dcf2,(undefined4)uStack_4c);
    FUN_0040b380();
  }
  if (DAT_006fb950 != 0) {
    uStack_4c = 1.88859855128497e-312;
    i = FUN_004c5e40();
    if (i != 0) {
      uStack_4c = (double)CONCAT44(0x44dd16,(undefined4)uStack_4c);
      FUN_004a4600();
    }
    j = 0xffffffff;
    auStack_24[0] = (undefined1)((uint)unaff_ESI >> 0x18);
    pcVar7 = s_keyboard0_005a1be0;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    uStack_4c = (double)CONCAT44(~j - 1,s_keyboard0_005a1be0);
    iStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_54 = (double)CONCAT44(0x44dd48,(undefined4)uStack_54);
    FUN_00402940();
    j = 0xffffffff;
    pvStack_c = (void *)0x0;
    pcVar7 = &DAT_005a1bec;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    uStack_4c = (double)CONCAT44(~j - 1,&DAT_005a1bec);
    uStack_54 = (double)CONCAT44(0x44dd7e,(undefined4)uStack_54);
    FUN_00402940();
    uStack_4c = (double)CONCAT44(auStack_24,&stack0xffffffcc);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
    uStack_54 = (double)CONCAT44(0x44dd92,(undefined4)uStack_54);
    FUN_004ea0c0();
    uStack_54 = (double)CONCAT44(0x44dd99,(undefined4)uStack_54);
    cVar3 = FUN_004eb7a0();
    pvStack_c = (void *)0xffffffff;
    if (iStack_20 != 0) {
      cVar1 = *(char *)(iStack_20 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        uStack_4c = (double)CONCAT44((char *)(iStack_20 + -1),0x44ddf8);
        FUN_0054b339();
      }
      else {
        *(char *)(iStack_20 + -1) = cVar1 + -1;
      }
    }
    iStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    if (cVar3 != '\0') {
      DAT_006fb982 = DAT_006fb982 == '\0';
    }
    if (DAT_006fb982 != '\0') {
      if (0.0 < _DAT_007128bc) {
        fVar2 = 1.0 / _DAT_007128bc;
      }
      else {
        fVar2 = 0.0;
      }
      uStack_4c = (double)fVar2;
      uStack_54 = (double)CONCAT44(0x44de5f,(undefined4)uStack_54);
      fVar8 = (float10)FUN_004a6800();
      uStack_54 = (double)((float10)1.0 / fVar8);
      pcStack_58 = s_frameRate___f_Real___f_005a1bf8;
      uStack_5c = 0x50;
      uStack_60 = 10;
      uStack_64 = 0x44de79;
      uStack_64 = FUN_00447820();
      uStack_68 = 0x44de7f;
      FUN_004c5930();
      uStack_4c = (double)_DAT_005afa48;
      uStack_54 = (double)CONCAT44(DAT_006fb8b0,s_vchunks___d_FPSMULT__f_005a1c10);
      pcStack_58 = (char *)0x64;
      uStack_5c = 10;
      uStack_60 = 0x44de9f;
      uStack_60 = FUN_00447820();
      uStack_64 = 0x44dea5;
      FUN_004c5930();
      uStack_4c = (double)CONCAT44(DAT_007152f4,DAT_007152f0);
      uStack_54 = 5.809664585176863e-307;
      pcStack_58 = (char *)0xa;
      uStack_5c = 0x44dec3;
      uStack_5c = FUN_00447820();
      uStack_60 = 0x44dec9;
      FUN_004c5930();
      uStack_4c = (double)CONCAT44(0x44ded1,(undefined4)uStack_4c);
      uStack_4c._4_4_ = FUN_004a72e0();
      uStack_4c._0_4_ = 0x44ded7;
      uVar4 = FUN_004a72d0();
      uStack_4c = (double)CONCAT44(uStack_4c._4_4_,uVar4);
      uStack_54 = 5.809759650588314e-307;
      pcStack_58 = (char *)0xa;
      uStack_5c = 0x44dee9;
      uStack_5c = FUN_00447820();
      uStack_60 = 0x44deef;
      FUN_004c5930();
    }
  }
  ExceptionList = pvStack_14;
  return;
}


/* ==== 0044df10 FUN_0044df10 ==== */

void FUN_0044df10(void)

{
  int iVar1;
  
  iVar1 = FUN_00447820();
  if (iVar1 == 1) {
    FUN_004c41e0();
    return;
  }
  if (iVar1 != 2) {
    FUN_004c4150(s__s__d_____winmain____Illegal_ren_005a1c88,
                 s_C__Work_A2IV_Game_prog_Gm_main_c_005a1c64,0x413);
    return;
  }
  FUN_004c8b90(2,1,0,0,DAT_005b3798,DAT_005b379c,0,0,DAT_005b3798,DAT_005b379c,0);
  FUN_004c41e0();
  return;
}


/* ==== 0044df70 FUN_0044df70 ==== */

int FUN_0044df70(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar2 = (float *)(DAT_00715f00 + 0x58 + DAT_006c356c * 0x994);
  fVar3 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  iVar1 = DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178;
  fVar6 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar9 = *(float *)(iVar1 + 0x54) - *(float *)(iVar1 + 8);
  fVar10 = *(float *)(iVar1 + 0x58) - *(float *)(iVar1 + 0xc);
  fVar8 = *(float *)(iVar1 + 0x5c) - *(float *)(iVar1 + 0x10);
  fVar7 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
  fVar3 = (fVar9 / fVar7) * (fVar3 / fVar6) +
          (fVar10 / fVar7) * (fVar4 / fVar6) + (fVar8 / fVar7) * (fVar5 / fVar6);
  if (fVar3 <= 0.0) {
    if (fVar3 < -0.5736) {
      param_1 = (DAT_006c356c - DAT_006fb8b0) + param_1;
      goto LAB_0044e094;
    }
LAB_0044e088:
    param_1 = DAT_006fb8b0 / 2;
  }
  else if (fVar3 <= 0.5736) goto LAB_0044e088;
  param_1 = DAT_006c356c - param_1;
LAB_0044e094:
  if (param_1 < 0) {
    param_1 = param_1 + -1 + DAT_00715258;
  }
  return param_1;
}


/* ==== 0044e0c0 FUN_0044e0c0 ==== */

void FUN_0044e0c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0044e0d0 FUN_0044e0d0 ==== */

void FUN_0044e0d0(void)

{
  FUN_005584e0(&LAB_0044e0e0);
  return;
}


/* ==== 0044e100 FUN_0044e100 ==== */

void FUN_0044e100(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0044e110 FUN_0044e110 ==== */

void FUN_0044e110(void)

{
  FUN_005584e0(&LAB_0044e120);
  return;
}


