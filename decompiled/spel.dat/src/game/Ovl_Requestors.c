/* spel.dat — game/Ovl_Requestors.cpp: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00494850 FUN_00494850 ==== */

int FUN_00494850(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 4;
}


/* ==== 00494870 FUN_00494870 ==== */

void FUN_00494870(undefined4 param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e168;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar2 = s_OVL_REQUESTORS_005ad548;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_OVL_REQUESTORS_005ad548;
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
  local_4 = 0;
  FUN_004924a0(param_1,local_1c);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  in_ECX[0x16] = 0;
  *in_ECX = &PTR_FUN_005770a4;
  in_ECX[0x13] = 0x3f800000;
  in_ECX[0x15] = 2;
  in_ECX[0x17] = 0xffffffff;
  ExceptionList = local_c;
  return;
}


/* ==== 00494960 FUN_00494960 ==== */

void FUN_00494960(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e1d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_OVL_REQUESTOR_BODY_005ad508;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_OVL_REQUESTOR_BODY_005ad508,~i - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(local_2c);
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_OVL_TURNAROUND_FRAME_005ad530;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_OVL_TURNAROUND_FRAME_005ad530,~i - 1);
  local_4 = 1;
  uVar2 = FUN_00484f60(local_2c);
  *(undefined4 *)(in_ECX + 0x20) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_PAUZE_HEADER_005ad558;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STRING_PAUZE_HEADER_005ad558,~i - 1);
  local_4 = 2;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x24) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_PAUZE_TEXT_005ad56c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STRING_PAUZE_TEXT_005ad56c,~i - 1);
  local_4 = 3;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x28) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_QUIT_HEADER_005ad580;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STRING_QUIT_HEADER_005ad580,~i - 1);
  local_4 = 4;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x2c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_QUIT_TEXT_005ad594;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STRING_QUIT_TEXT_005ad594,~i - 1);
  local_4 = 5;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x30) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_GAME_TEXT_005ad5a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STRING_GAME_TEXT_005ad5a8,~i - 1);
  local_4 = 6;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x34) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_RACE_OVER_005ad5bc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_RACE_OVER_005ad5bc;
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
  local_4 = 7;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x38) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_TOTAL_LOSS_005ad5d0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_TOTAL_LOSS_005ad5d0;
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
  local_4 = 8;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x3c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_ARRESTED_005ad5e4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_ARRESTED_005ad5e4;
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
  local_4 = 9;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x40) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_TIME_UP_005ad5f4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_TIME_UP_005ad5f4;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_28 = local_28 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_28 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 10;
  uVar2 = FUN_00485d50(local_2c);
  *(undefined4 *)(in_ECX + 0x44) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_STRING_FINISH_TEXT_005ad604;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_STRING_FINISH_TEXT_005ad604;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_18 = local_18 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_18 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0xb;
  uVar2 = FUN_00485d50(local_1c);
  *(undefined4 *)(in_ECX + 0x48) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_00495330();
  ExceptionList = local_c;
  return;
}


/* ==== 00494e80 FUN_00494e80 ==== */

void FUN_00494e80(void)

{
  return;
}


/* ==== 00494e90 FUN_00494e90 ==== */

void FUN_00494e90(void)

{
  return;
}


/* ==== 00494ea0 FUN_00494ea0 ==== */

void FUN_00494ea0(void)

{
  int in_ECX;
  float10 fVar1;
  
  *(undefined4 *)(in_ECX + 0x54) = 0;
  fVar1 = (float10)FUN_004a67f0();
  *(float *)(in_ECX + 0x50) = (float)fVar1;
  return;
}


/* ==== 00494ec0 FUN_00494ec0 ==== */

void FUN_00494ec0(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
    iVar1 = *(int *)(in_ECX + 0x54);
    if (iVar1 == 0) {
      FUN_00494e80();
    }
    else {
      if (iVar1 == 1) {
        FUN_00494e90();
        return;
      }
      if (iVar1 == 2) {
        cVar2 = FUN_004195f0();
        if (cVar2 != '\0') {
          FUN_00494ea0();
          return;
        }
      }
    }
  }
  return;
}


/* ==== 00494f10 FUN_00494f10 ==== */

void FUN_00494f10(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int in_ECX;
  uint i;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  float fStack_20;
  undefined1 local_1c [4];
  char *local_18;
  void *local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e1e4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0059becc != -1) {
    ExceptionList = &pvStack_c;
    fVar7 = (float10)FUN_004a67f0();
    *(float *)(in_ECX + 0x58) = (float)fVar7;
    *(int *)(in_ECX + 0x5c) = DAT_0059becc;
    DAT_0059becc = -1;
    iVar2 = FUN_00458b90(*(undefined4 *)(in_ECX + 0x5c));
    i = 0xffffffff;
    local_18 = (char *)0x0;
    local_14 = (void *)0x0;
    local_10 = (void *)0x0;
    pcVar5 = &DAT_006fd14c + iVar2 * 0x100;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pvVar4 = (void *)(~i - 1);
    cVar1 = FUN_00402a00(pvVar4,1);
    if (cVar1 != '\0') {
      pcVar5 = &DAT_006fd14c + iVar2 * 0x100;
      pcVar6 = local_18;
      for (i = (uint)pvVar4 >> 2; i != 0; i = i - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (i = (uint)pvVar4 & 3; i != 0; i = i - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_18[(int)pvVar4] = '\0';
      local_14 = pvVar4;
    }
    local_4 = 0;
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x48))(local_1c);
    local_4 = 0xffffffff;
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  fVar7 = (float10)FUN_004a67f0();
  fVar7 = fVar7 - (float10)*(float *)(in_ECX + 0x58);
  fStack_20 = (float)fVar7;
  if ((fVar7 < (float10)2.75) && (*(int *)(in_ECX + 0x5c) != -1)) {
    puVar3 = (uint *)FUN_0047bde0();
    i = *puVar3;
    iVar2 = __ftol();
    iVar2 = 0xff - iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    fStack_20 = (float)(i & 0xffffff | iVar2 << 0x18);
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x28))(&fStack_20);
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x20))(1);
    ExceptionList = local_14;
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x20))(0);
  ExceptionList = local_10;
  return;
}


/* ==== 004950c0 FUN_004950c0 ==== */

/* WARNING: Removing unreachable block (ram,0x00495142) */
/* WARNING: Removing unreachable block (ram,0x004951ae) */
/* WARNING: Removing unreachable block (ram,0x00495198) */
/* WARNING: Removing unreachable block (ram,0x00495182) */
/* WARNING: Removing unreachable block (ram,0x004951c4) */
/* WARNING: Removing unreachable block (ram,0x00495162) */
/* WARNING: Removing unreachable block (ram,0x00495149) */
/* WARNING: Removing unreachable block (ram,0x004951c7) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_004950c0(void)

{
  int __ftol_result;
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float fVar3;
  
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x28) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x2c) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x18) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x38) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x20))();
  (**(code **)(**(int **)(in_ECX + 0x40) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x44) + 0x20))(0);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x20))(0);
  FUN_00494ec0();
  fVar2 = (float10)FUN_004a67f0();
  fVar3 = (float)fVar2;
  FUN_004a67f0();
  __ftol_result = __ftol();
  iVar1 = FUN_00429360(DAT_006fba58);
  if (iVar1 == 0) {
    if (0.4 < fVar3 - (float)__ftol_result) {
      (**(code **)(**(int **)(in_ECX + 0x20) + 0x20))(1);
      FUN_00494f10();
      return;
    }
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x20))(0);
  }
  FUN_00494f10();
  return;
}


/* ==== 00495280 FUN_00495280 ==== */

void FUN_00495280(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00495330();
  FUN_004950c0(param_1);
  if (DAT_00712784 == 1) {
    if (((byte)DAT_005ab3c0 & 2) == 0) {
      (**(code **)(**(int **)(in_ECX + 0x18) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x20) + 0x20))(0);
      if (DAT_00712784 != 1) {
        return;
      }
    }
    if (((byte)DAT_005ab3c0 & 1) == 0) {
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x28) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x2c) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x30) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x34) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x38) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x40) + 0x20))(0);
      (**(code **)(**(int **)(in_ECX + 0x44) + 0x20))(0);
    }
  }
  return;
}


/* ==== 00495330 FUN_00495330 ==== */

void FUN_00495330(void)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_4c [4];
  char *local_48;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e2ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad618;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad618,~i - 1);
  local_4 = 0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Requestor_body_not_found_in_over_005ad644;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Requestor_body_not_found_in_over_005ad644,~i - 1);
  local_4._0_1_ = 1;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x18),local_4c,local_1c,0x148);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad668;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad668,~i - 1);
  local_4 = 2;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Turn_Around_Frame_not_found_in_o_005ad694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Turn_Around_Frame_not_found_in_o_005ad694,~i - 1);
  local_4._0_1_ = 3;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x20),local_1c,local_4c,0x14a);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad6bc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad6bc,~i - 1);
  local_4 = 4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Pauze_Header_string_not_found_in_005ad6e8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Pauze_Header_string_not_found_in_005ad6e8,~i - 1);
  local_4._0_1_ = 5;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x24),local_1c,local_4c,0x14c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad714;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad714,~i - 1);
  local_4 = 6;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Pauze_Text_string_not_found_in_o_005ad740;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Pauze_Text_string_not_found_in_o_005ad740,~i - 1);
  local_4._0_1_ = 7;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x28),local_1c,local_4c,0x14d);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad768;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad768,~i - 1);
  local_4 = 8;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Quit_Header_string_not_found_in_o_005ad794;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Quit_Header_string_not_found_in_o_005ad794,~i - 1);
  local_4._0_1_ = 9;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x2c),local_1c,local_4c,0x14e);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad7bc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad7bc,~i - 1);
  local_4 = 10;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Quit_Text_string_not_found_in_ov_005ad7e8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Quit_Text_string_not_found_in_ov_005ad7e8,~i - 1);
  local_4._0_1_ = 0xb;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x30),local_1c,local_4c,0x14f);
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad810;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad810,~i - 1);
  local_4 = 0xc;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Game_Text_string_not_found_in_ov_005ad83c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Game_Text_string_not_found_in_ov_005ad83c,~i - 1);
  local_4._0_1_ = 0xd;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x34),local_1c,local_4c,0x150);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad864;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad864,~i - 1);
  local_4 = 0xe;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Race_over_Text_string_not_found_i_005ad890;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Race_over_Text_string_not_found_i_005ad890,~i - 1);
  local_4._0_1_ = 0xf;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x38),local_1c,local_4c,0x152);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad8bc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad8bc,~i - 1);
  local_4 = 0x10;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Total_loss_Text_string_not_found_005ad8e8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Total_loss_Text_string_not_found_005ad8e8,~i - 1);
  local_4._0_1_ = 0x11;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x3c),local_1c,local_4c,0x153);
  local_4 = CONCAT31(local_4._1_3_,0x10);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad914;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad914,~i - 1);
  local_4 = 0x12;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Arrested_Text_string_not_found_i_005ad940;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Arrested_Text_string_not_found_i_005ad940,~i - 1);
  local_4._0_1_ = 0x13;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x40),local_1c,local_4c,0x154);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad96c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad96c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_48 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_48 = local_48 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_48 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_48 = local_48 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x14;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_TimeUp_Text_string_not_found_in_o_005ad998;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_TimeUp_Text_string_not_found_in_o_005ad998,~i - 1);
  local_4._0_1_ = 0x15;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x44),local_1c,local_4c,0x155);
  local_4 = CONCAT31(local_4._1_3_,0x14);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad9c0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_C__Work_A2IV_Game_prog_Ovl_Reque_005ad9c0;
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
  local_4 = 0x16;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Finish_Text_string_not_found_in_o_005ad9ec;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_Finish_Text_string_not_found_in_o_005ad9ec;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_38 = local_38 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_38 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0(i);
  }
  local_4._0_1_ = 0x17;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x48),local_3c,local_2c,0x158);
  local_4 = CONCAT31(local_4._1_3_,0x16);
  FUN_004028f0(1);
  if (local_28 != (char *)0x0) {
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


