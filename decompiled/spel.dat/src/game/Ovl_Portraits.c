/* spel.dat — game/Ovl_Portraits.cpp: 53 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00492260 FUN_00492260 ==== */

void FUN_00492260(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int i;
  
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x38) + 0x20))(param_1);
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x40))();
  i = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x44) + 4) + i * 4) + 0x20))(param_1);
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 004922b0 FUN_004922b0 ==== */

void FUN_004922b0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_c [12];
  
  if ((param_1 == 0) || (param_1 == 5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00492260(uVar1);
  uVar1 = FUN_00492110(local_c);
  FUN_0047bc90(uVar1);
  uVar1 = FUN_00492180(local_c);
  FUN_0047bc90(uVar1);
  uVar1 = FUN_00492200(local_c);
  FUN_0047bc90(uVar1);
  FUN_004919b0(param_1);
  return;
}


/* ==== 00492370 FUN_00492370 ==== */

void FUN_00492370(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00492380 FUN_00492380 ==== */

void FUN_00492380(void)

{
  FUN_005584e0(&LAB_00492390);
  return;
}


/* ==== 004923b0 FUN_004923b0 ==== */

void FUN_004923b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004923c0 FUN_004923c0 ==== */

void FUN_004923c0(void)

{
  FUN_005584e0(&LAB_004923d0);
  return;
}


/* ==== 004923e0 FUN_004923e0 ==== */

void FUN_004923e0(byte param_1)

{
  FUN_00492400();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00492400 FUN_00492400 ==== */

void FUN_00492400(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x44);
  *(undefined ***)(in_ECX + 0x40) = &PTR_LAB_00576b04;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  iVar1 = *(int *)(in_ECX + 0x1c);
  *(undefined ***)(in_ECX + 0x18) = &PTR_LAB_00576bb8;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  FUN_004925f0();
  return;
}


/* ==== 00492480 FUN_00492480 ==== */

int FUN_00492480(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2;
}


/* ==== 004924a0 FUN_004924a0 ==== */

/* WARNING: Removing unreachable block (ram,0x004924d8) */

void FUN_004924a0(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 2) = *(undefined1 *)param_2;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  uVar1 = param_2[2];
  if (in_ECX + 2 == param_2) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[4] - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + in_ECX[3],uVar1 + in_ECX[3] + iVar5,iVar3 - iVar5);
      iVar3 = in_ECX[4];
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_2[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar4 = (undefined1 *)param_2[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[3] = puVar4;
        in_ECX[4] = param_2[2];
        in_ECX[5] = param_2[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        *in_ECX = &PTR_FUN_00576ff4;
        return;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)param_2[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)in_ECX[3];
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      in_ECX[4] = uVar1;
      *(undefined1 *)(in_ECX[3] + uVar1) = 0;
      *in_ECX = &PTR_FUN_00576ff4;
      return;
    }
  }
  *in_ECX = &PTR_FUN_00576ff4;
  return;
}


/* ==== 004925f0 FUN_004925f0 ==== */

void FUN_004925f0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576ff4;
  iVar2 = in_ECX[3];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  return;
}


/* ==== 00492670 FUN_00492670 ==== */

void FUN_00492670(byte param_1)

{
  FUN_004925f0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004926e0 FUN_004926e0 ==== */

void FUN_004926e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = 0xbf800000;
  *in_ECX = param_1;
  in_ECX[4] = 0xbf800000;
  in_ECX[0x15] = 0;
  in_ECX[1] = 0;
  in_ECX[5] = 0xbf800000;
  in_ECX[0x18] = 0;
  in_ECX[2] = 0;
  return;
}


/* ==== 00492730 FUN_00492730 ==== */

void FUN_00492730(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar5;
  char *pcVar6;
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
  puStack_8 = &LAB_0056e050;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00484f60(param_1);
  *(undefined4 *)(in_ECX + 4) = uVar2;
  local_2c[0] = (undefined1)param_1;
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005aceb4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005aceb4;
    pcVar6 = local_28;
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
    FUN_004029e0(i);
  }
  local_4 = 0;
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  uVar2 = FUN_0049df90(local_1c,s_Element__s_not_found_005acee0,puVar3);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00487bc0(*(undefined4 *)(in_ECX + 4),uVar2,local_2c,0x52);
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
  puVar4 = (undefined4 *)FUN_0047bc20();
  *(undefined4 *)(in_ECX + 0xc) = *puVar4;
  *(undefined4 *)(in_ECX + 0x10) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x14) = puVar4[2];
  *(undefined4 *)(in_ECX + 0x18) = *puVar4;
  *(undefined4 *)(in_ECX + 0x1c) = puVar4[1];
  *(undefined4 *)(in_ECX + 0x20) = puVar4[2];
  *(undefined4 *)(in_ECX + 0x58) = param_2;
  ExceptionList = local_c;
  return;
}


/* ==== 004928b0 FUN_004928b0 ==== */

void FUN_004928b0(void)

{
  return;
}


/* ==== 004928c0 FUN_004928c0 ==== */

void FUN_004928c0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 4) + 0x20))(param_1);
  }
  return;
}


/* ==== 004928e0 FUN_004928e0 ==== */

void FUN_004928e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    FUN_004c4150(s__s___d__Element_not_initted_yet__005acf24,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005acef8,0x6a);
  }
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  *(undefined4 *)(in_ECX + 0x1c) = param_2;
  *(undefined4 *)(in_ECX + 0x20) = param_3;
  FUN_0047bc50((undefined4 *)(in_ECX + 0x18));
  return;
}


/* ==== 00492930 FUN_00492930 ==== */

void FUN_00492930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5c) = param_1;
  *(undefined4 *)(in_ECX + 0x54) = 1;
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(in_ECX + 0x30) = param_2;
  *(undefined4 *)(in_ECX + 0x34) = param_3;
  *(undefined4 *)(in_ECX + 0x38) = param_4;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  return;
}


/* ==== 00492980 FUN_00492980 ==== */

void FUN_00492980(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  
  fVar2 = (float)param_1;
  iVar4 = DAT_005d2ab0 + 1;
  *(undefined4 *)(in_ECX + 0x54) = 2;
  *(undefined4 *)(in_ECX + 0x30) = 0xbecccccd;
  fVar3 = 0.5 - (1.5 / (float)iVar4) * fVar2;
  *(float *)(in_ECX + 0x34) = fVar3;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x5c) = param_1;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 8) = param_2;
  puVar1 = (undefined4 *)(in_ECX + 0x3c);
  *puVar1 = 0xbecccccd;
  *(float *)(in_ECX + 0x40) = fVar3;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *puVar1 = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x48) = 0xbecccccd;
  *(float *)(in_ECX + 0x4c) = fVar3;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0x3dcccccd;
  FUN_0047bc50(puVar1);
  if (param_1 == 0) {
    *(undefined4 *)(in_ECX + 0x60) = 0;
  }
  else {
    *(float *)(in_ECX + 0x60) = -1.2 - fVar2 * 0.2;
  }
  param_1 = 0xffffffff;
  FUN_004930f0(&param_1);
  return;
}


/* ==== 00492a90 FUN_00492a90 ==== */

void FUN_00492a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  if (param_1 != *(int *)(in_ECX + 0x58)) {
    FUN_00492930(param_1,param_2,param_3,param_4);
  }
  return;
}


/* ==== 00492ac0 FUN_00492ac0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492ac0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  uint __ftol_result;
  int in_ECX;
  float10 fVar10;
  
  if (*(int *)(in_ECX + 4) == 0) {
    FUN_004c4150(s__s___d__Element_not_initted_yet__005acf74,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005acf48,0xb3);
  }
  fVar2 = *(float *)(in_ECX + 0x30);
  fVar3 = *(float *)(in_ECX + 0x24);
  fVar4 = *(float *)(in_ECX + 0x34);
  fVar5 = *(float *)(in_ECX + 0x28);
  fVar6 = _DAT_005b23b8 * 0.25;
  fVar10 = (float10)FUN_004a6800();
  *(float *)(in_ECX + 100) =
       (float)((float10)fVar6 / ((float10)0.6 / fVar10) + (float10)*(float *)(in_ECX + 100));
  fVar6 = _DAT_005b23b8 * 0.5;
  fVar10 = (float10)FUN_004a6800();
  *(float *)(in_ECX + 0x68) =
       (float)((float10)fVar6 / ((float10)0.6 / fVar10) + (float10)*(float *)(in_ECX + 0x68));
  __ftol_result = __ftol();
  iVar9 = DAT_0073b530;
  uVar8 = DAT_005b23bc;
  fVar6 = *(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4);
  if (*(int *)(in_ECX + 0x5c) < *(int *)(in_ECX + 0x58)) {
    __ftol_result = __ftol();
    fVar7 = -(*(float *)(iVar9 + (__ftol_result & uVar8) * 4) * 0.03);
  }
  else {
    __ftol_result = __ftol();
    fVar7 = *(float *)(iVar9 + (__ftol_result & uVar8) * 4) * 0.03;
  }
  pfVar1 = (float *)(in_ECX + 0x18);
  *pfVar1 = (fVar2 - fVar3) * fVar6 + *(float *)(in_ECX + 0x24);
  *(float *)(in_ECX + 0x1c) = (fVar4 - fVar5) * fVar6 + *(float *)(in_ECX + 0x28);
  *(float *)(in_ECX + 0x20) = fVar7 + *(float *)(in_ECX + 0x2c);
  FUN_0047bc50(pfVar1);
  fVar10 = (float10)FUN_004a6800();
  fVar10 = fVar10 + (float10)*(float *)(in_ECX + 0x60);
  *(float *)(in_ECX + 0x60) = (float)fVar10;
  if ((float10)0.6 <= fVar10) {
    *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x5c);
    *pfVar1 = *(float *)(in_ECX + 0x30);
    *(undefined4 *)(in_ECX + 0x68) = 0;
    *(undefined4 *)(in_ECX + 100) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(in_ECX + 0x34);
    *(undefined4 *)(in_ECX + 0x54) = 0;
    *(undefined4 *)(in_ECX + 0x60) = 0;
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x38);
    FUN_0047bc50(pfVar1);
  }
  return;
}


/* ==== 00492c70 FUN_00492c70 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492c70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  char cVar7;
  uint __ftol_result;
  undefined4 *puVar8;
  uint i;
  int in_ECX;
  float fVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined1 uStack_65;
  float local_64;
  float fStack_50;
  char *pcStack_4c;
  void *pvStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  char *pcStack_30;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056e06a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 4) == 0) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s___d__Element_not_initted_yet__005acfc4,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005acf98,0xe2);
  }
  if (*(int *)(in_ECX + 0x5c) == 0) {
    local_64 = 1.2;
  }
  else {
    local_64 = 0.6;
  }
  fVar12 = (float10)FUN_004a6800();
  fVar12 = fVar12 + (float10)*(float *)(in_ECX + 0x60);
  *(float *)(in_ECX + 0x60) = (float)fVar12;
  if (fVar12 < (float10)0.0) {
    ExceptionList = pvStack_c;
    return;
  }
  if ((float10)local_64 <= fVar12) {
    FUN_0047bc50(in_ECX + 0x30);
    fStack_34 = 0.0;
    pcStack_30 = (char *)0x0;
    fStack_2c = 0.0;
    FUN_0047bc90(&fStack_34);
    ExceptionList = pvStack_c;
    return;
  }
  fVar12 = (float10)FUN_004a6800();
  fVar9 = (float)((float10)local_64 / fVar12);
  fVar1 = *(float *)(in_ECX + 0x34);
  fVar2 = *(float *)(in_ECX + 0x28);
  fVar3 = *(float *)(in_ECX + 0x30);
  fVar4 = *(float *)(in_ECX + 0x24);
  *(float *)(in_ECX + 100) = (_DAT_005b23b8 * 0.25) / fVar9 + *(float *)(in_ECX + 100);
  *(float *)(in_ECX + 0x68) = (_DAT_005b23b8 * 0.5) / fVar9 + *(float *)(in_ECX + 0x68);
  __ftol_result = __ftol();
  iVar6 = DAT_0073b530;
  i = DAT_005b23bc;
  fVar5 = *(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4);
  pcStack_4c = (char *)((fVar1 - fVar2) * fVar5);
  fStack_50 = (fVar3 - fVar4) * fVar5;
  pvStack_48 = (void *)(float)(extraout_ST0 * (float10)fVar5);
  fStack_34 = fStack_50;
  pcStack_30 = pcStack_4c;
  fStack_2c = (float)pvStack_48;
  __ftol_result = __ftol();
  pvStack_48 = (void *)(*(float *)(iVar6 + (__ftol_result & i) * 4) * 0.4 +
                       *(float *)(in_ECX + 0x2c));
  pcStack_4c = (char *)((float)pcStack_30 + *(float *)(in_ECX + 0x28));
  fStack_50 = fStack_34 + *(float *)(in_ECX + 0x24);
  *(float *)(in_ECX + 0x18) = fStack_50;
  *(char **)(in_ECX + 0x1c) = pcStack_4c;
  *(void **)(in_ECX + 0x20) = pvStack_48;
  FUN_0047bc50((float *)(in_ECX + 0x18));
  if (*(int *)(in_ECX + 0x5c) == 0) {
    puVar8 = (undefined4 *)FUN_0047bc40();
    uStack_40 = *puVar8;
    uStack_3c = puVar8[1];
    fStack_38 = (_DAT_005b23b8 + _DAT_005b23b8) / fVar9 + (float)puVar8[2];
    FUN_0047bc90(&uStack_40);
    i = __ftol();
    uStack_1c = 0x3f800000;
    fStack_24 = *(float *)(DAT_0073b530 + (i & DAT_005b23bc) * 4) * 0.3 + 1.0;
    fStack_20 = fStack_24;
    (**(code **)(**(int **)(in_ECX + 4) + 0x24))(&fStack_24);
  }
  fStack_50 = (float)CONCAT31(fStack_50._1_3_,uStack_65);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar10 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar7 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar7 != '\0');
  fVar9 = (float)(~i - 1);
  cVar7 = FUN_00402a00(fVar9,1);
  if (cVar7 != '\0') {
    pcVar10 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
    pcVar11 = pcStack_4c;
    for (i = (uint)fVar9 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (i = (uint)fVar9 & 3; i != 0; i = i - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcStack_4c[(int)fVar9] = '\0';
    pvStack_48 = (void *)fVar9;
  }
  fStack_34 = (float)CONCAT31(fStack_34._1_3_,uStack_65);
  iStack_4 = 0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar10 = s_m_FinStrElement_not_initialised_005ad014;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar7 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar7 != '\0');
  fVar9 = (float)(~i - 1);
  cVar7 = FUN_00402a00(fVar9,1);
  if (cVar7 != '\0') {
    pcVar10 = s_m_FinStrElement_not_initialised_005ad014;
    pcVar11 = pcStack_30;
    for (i = (uint)fVar9 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (i = (uint)fVar9 & 3; i != 0; i = i - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcStack_30[(int)fVar9] = '\0';
    fStack_2c = fVar9;
  }
  iStack_4._0_1_ = 1;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 8),&fStack_34,&fStack_50,0x117);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_004028f0(1);
  iStack_4 = 0xffffffff;
  if (pcStack_4c != (char *)0x0) {
    cVar7 = pcStack_4c[-1];
    if ((cVar7 == '\0') || (cVar7 == -1)) {
      FUN_0054b339(pcStack_4c + -1);
    }
    else {
      pcStack_4c[-1] = cVar7 + -1;
    }
  }
  pcStack_30 = (char *)(*(float *)(in_ECX + 0x4c) - *(float *)(in_ECX + 0x40));
  i = __ftol();
  fVar9 = *(float *)(DAT_0073b530 + (i & DAT_005b23bc) * 4);
  pcStack_30 = (char *)((float)pcStack_30 * fVar9);
  fStack_50 = (float)(extraout_ST0_00 * (float10)fVar9 + (float10)*(float *)(in_ECX + 0x3c));
  pcStack_4c = (char *)((float)pcStack_30 + *(float *)(in_ECX + 0x40));
  pvStack_48 = *(void **)(in_ECX + 0x44);
  fStack_18 = fStack_50;
  fStack_14 = (float)pcStack_4c;
  pvStack_10 = pvStack_48;
  (**(code **)(**(int **)(in_ECX + 8) + 0x20))(1);
  FUN_0047bc50(&uStack_1c);
  ExceptionList = pvStack_10;
  return;
}


/* ==== 00492d32 FUN_00492d32 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492d32(undefined4 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  char cVar7;
  uint __ftol_result;
  undefined4 *puVar8;
  uint i;
  float fVar9;
  int unaff_EBP;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float in_stack_0000001c;
  char *in_stack_00000020;
  void *in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  char *in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000048;
  float in_stack_0000004c;
  undefined4 in_stack_00000050;
  float in_stack_00000054;
  float in_stack_00000058;
  void *in_stack_0000005c;
  undefined1 uStack00000068;
  uint3 uStack00000069;
  
  fVar12 = (float10)FUN_004a6800();
  fVar9 = (float)((float10)param_2 / fVar12);
  fVar1 = *(float *)(unaff_EBP + 0x34);
  fVar2 = *(float *)(unaff_EBP + 0x28);
  fVar3 = *(float *)(unaff_EBP + 0x30);
  fVar4 = *(float *)(unaff_EBP + 0x24);
  *(float *)(unaff_EBP + 100) = (_DAT_005b23b8 * 0.25) / fVar9 + *(float *)(unaff_EBP + 100);
  *(float *)(unaff_EBP + 0x68) = (_DAT_005b23b8 * 0.5) / fVar9 + *(float *)(unaff_EBP + 0x68);
  __ftol_result = __ftol();
  iVar6 = DAT_0073b530;
  i = DAT_005b23bc;
  fVar5 = *(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4);
  in_stack_00000020 = (char *)((fVar1 - fVar2) * fVar5);
  in_stack_0000001c = (fVar3 - fVar4) * fVar5;
  in_stack_00000024 = (void *)(float)(extraout_ST0 * (float10)fVar5);
  in_stack_00000038 = in_stack_0000001c;
  in_stack_0000003c = in_stack_00000020;
  in_stack_00000040 = (float)in_stack_00000024;
  __ftol_result = __ftol();
  in_stack_00000024 =
       (void *)(*(float *)(iVar6 + (__ftol_result & i) * 4) * 0.4 + *(float *)(unaff_EBP + 0x2c));
  in_stack_00000020 = (char *)((float)in_stack_0000003c + *(float *)(unaff_EBP + 0x28));
  in_stack_0000001c = in_stack_00000038 + *(float *)(unaff_EBP + 0x24);
  *(float *)(unaff_EBP + 0x18) = in_stack_0000001c;
  *(char **)(unaff_EBP + 0x1c) = in_stack_00000020;
  *(void **)(unaff_EBP + 0x20) = in_stack_00000024;
  FUN_0047bc50((float *)(unaff_EBP + 0x18));
  if (*(int *)(unaff_EBP + 0x5c) == 0) {
    puVar8 = (undefined4 *)FUN_0047bc40();
    in_stack_0000002c = *puVar8;
    in_stack_00000030 = puVar8[1];
    in_stack_00000034 = (_DAT_005b23b8 + _DAT_005b23b8) / fVar9 + (float)puVar8[2];
    FUN_0047bc90(&stack0x0000002c);
    i = __ftol();
    in_stack_00000050 = 0x3f800000;
    in_stack_00000048 = *(float *)(DAT_0073b530 + (i & DAT_005b23bc) * 4) * 0.3 + 1.0;
    in_stack_0000004c = in_stack_00000048;
    (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(&stack0x00000048);
  }
  in_stack_0000001c = (float)CONCAT31(in_stack_0000001c._1_3_,param_1._3_1_);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar10 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar7 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar7 != '\0');
  fVar9 = (float)(~i - 1);
  cVar7 = FUN_00402a00(fVar9,1);
  if (cVar7 != '\0') {
    pcVar10 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
    pcVar11 = in_stack_00000020;
    for (i = (uint)fVar9 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (i = (uint)fVar9 & 3; i != 0; i = i - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    in_stack_00000020[(int)fVar9] = '\0';
    in_stack_00000024 = (void *)fVar9;
  }
  in_stack_00000038 = (float)CONCAT31(in_stack_00000038._1_3_,param_1._3_1_);
  _uStack00000068 = 0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar10 = s_m_FinStrElement_not_initialised_005ad014;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar7 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar7 != '\0');
  fVar9 = (float)(~i - 1);
  cVar7 = FUN_00402a00(fVar9,1);
  if (cVar7 != '\0') {
    pcVar10 = s_m_FinStrElement_not_initialised_005ad014;
    pcVar11 = in_stack_0000003c;
    for (i = (uint)fVar9 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (i = (uint)fVar9 & 3; i != 0; i = i - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    in_stack_0000003c[(int)fVar9] = '\0';
    in_stack_00000040 = fVar9;
  }
  uStack00000068 = 1;
  FUN_00487bc0(*(undefined4 *)(unaff_EBP + 8),&stack0x00000038,&stack0x0000001c,0x117);
  _uStack00000068 = (uint)uStack00000069 << 8;
  FUN_004028f0(1);
  _uStack00000068 = 0xffffffff;
  if (in_stack_00000020 != (char *)0x0) {
    cVar7 = in_stack_00000020[-1];
    if ((cVar7 == '\0') || (cVar7 == -1)) {
      FUN_0054b339(in_stack_00000020 + -1);
    }
    else {
      in_stack_00000020[-1] = cVar7 + -1;
    }
  }
  in_stack_0000003c = (char *)(*(float *)(unaff_EBP + 0x4c) - *(float *)(unaff_EBP + 0x40));
  i = __ftol();
  fVar9 = *(float *)(DAT_0073b530 + (i & DAT_005b23bc) * 4);
  in_stack_0000003c = (char *)((float)in_stack_0000003c * fVar9);
  in_stack_0000001c =
       (float)(extraout_ST0_00 * (float10)fVar9 + (float10)*(float *)(unaff_EBP + 0x3c));
  in_stack_00000020 = (char *)((float)in_stack_0000003c + *(float *)(unaff_EBP + 0x40));
  in_stack_00000024 = *(void **)(unaff_EBP + 0x44);
  in_stack_00000054 = in_stack_0000001c;
  in_stack_00000058 = (float)in_stack_00000020;
  in_stack_0000005c = in_stack_00000024;
  (**(code **)(**(int **)(unaff_EBP + 8) + 0x20))(1);
  FUN_0047bc50(&stack0x00000050);
  ExceptionList = in_stack_0000005c;
  return;
}


/* ==== 00493090 FUN_00493090 ==== */

void FUN_00493090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  if (iVar1 == 0) {
    FUN_00492a90(param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      FUN_004c4150(s__s___d__Illegal_state_for_portra_005ad060,
                   s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad034,0x134);
      return;
    }
    FUN_00492c70();
    return;
  }
  FUN_00492ac0();
  return;
}


/* ==== 004930f0 FUN_004930f0 ==== */

void FUN_004930f0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    FUN_004c4150(s__s___d__Element_not_initted_yet__005ad0b0,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad084,0x13d);
  }
  (**(code **)(**(int **)(in_ECX + 4) + 0x28))(param_1);
  return;
}


/* ==== 00493130 FUN_00493130 ==== */

void FUN_00493130(undefined4 param_1)

{
  char cVar1;
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
  uint i;
  char *pcVar2;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e09a;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pcVar2 = s_OVL_PORTRAIT_MGR_005acea0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(s_OVL_PORTRAIT_MGR_005acea0,~i - 1);
  local_4 = 0;
  FUN_004924a0(param_1,local_1c);
  local_4._0_1_ = 2;
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
  in_ECX[7] = &PTR_LAB_00577058;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[8] = operator_new_result;
  local_4._0_1_ = 3;
  in_ECX[9] = &PTR_LAB_00576e18;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[10] = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,4);
  in_ECX[0xc] = &PTR_LAB_00576b04;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0xd] = operator_new_result;
  *in_ECX = &PTR_FUN_00577048;
  in_ECX[0x12] = 0;
  in_ECX[6] = 0;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 0xe) = 1;
  in_ECX[0xf] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x10] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004932a0 FUN_004932a0 ==== */

undefined1 * FUN_004932a0(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  uint j;
  uint k;
  char *pcVar3;
  char *pcVar4;
  CHAR local_50 [16];
  char local_40 [64];
  
  FUN_004489a0(s_GAME_INI_005ad0e4,s_Game_Settings_005ad0d4);
  i = FUN_00448c90(s_Game_Settings_005ad0f0);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  wsprintfA(local_50,s__d_005ad100,param_2);
  FUN_004c3d10(s_Portraits_005ace70,local_50,local_40,0x3f);
  i = -1;
  pcVar3 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (i == -2) {
    FUN_004c4150(s__s___d__Element_name_for_car__d_n_005ad13c,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad110,0x172,param_2,s_GAME_INI_005ad104,
                 s_Portraits_005ace70);
  }
  j = 0xffffffff;
  pcVar3 = local_40;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 4) = 0;
  j = ~j - 1;
  *param_1 = (undefined1)param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < j) {
    FUN_0054b1b4();
  }
  i = *(int *)(param_1 + 4);
  if (((i == 0) || (cVar1 = *(char *)(i + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (j == 0) {
      FUN_004028f0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (j <= *(uint *)(param_1 + 0xc))) goto LAB_004933d8;
    FUN_004028f0(1);
  }
  else if (j == 0) {
    *(char *)(i + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return param_1;
  }
  FUN_00402b20(j);
LAB_004933d8:
  pcVar3 = local_40;
  pcVar4 = *(char **)(param_1 + 4);
  for (k = j >> 2; k != 0; k = k - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (k = j & 3; k != 0; k = k - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(uint *)(param_1 + 8) = j;
  *(undefined1 *)(*(int *)(param_1 + 4) + j) = 0;
  return param_1;
}


/* ==== 00493410 FUN_00493410 ==== */

void FUN_00493410(void)

{
  void *operator_new_result;
  int i;
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  i = DAT_005d2ab0 + 1;
  *(int *)(in_ECX + 0x48) = i;
  operator_new_result = operator_new(i * 0xc);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)(in_ECX + 0x44) = operator_new_result;
  if (operator_new_result == (void *)0x0) {
    FUN_004c4150(s__s___d__Not_enough_memory_for_or_005ad1a8,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad17c,0x181);
  }
  i = 0;
  if (0 < *(int *)(in_ECX + 0x48)) {
    iVar1 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x44) + iVar1);
      i = i + 1;
      iVar1 = iVar1 + 0xc;
      *puVar2 = DAT_007127d0;
      puVar2[1] = DAT_007127d4;
      puVar2[2] = DAT_007127d8;
    } while (i < *(int *)(in_ECX + 0x48));
  }
  return;
}


/* ==== 004934a0 FUN_004934a0 ==== */

void FUN_004934a0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x44) != 0) {
    FUN_0054b339(*(int *)(in_ECX + 0x44));
  }
  return;
}


/* ==== 004934b0 FUN_004934b0 ==== */

void FUN_004934b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((param_1 < 0) || (*(int *)(in_ECX + 0x48) <= param_1)) {
    FUN_004c4150(s__s___d__Illegal_index_in_OrigPos_005ad20c,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad1e0,0x1a7,param_1,
                 *(undefined4 *)(in_ECX + 0x48));
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x44) + param_1 * 0xc);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  return;
}


/* ==== 00493500 FUN_00493500 ==== */

void FUN_00493500(undefined4 *param_1,int param_2)

{
  int in_ECX;
  float *pfVar1;
  undefined4 *puVar2;
  
  if ((param_2 < 0) || (*(int *)(in_ECX + 0x48) <= param_2)) {
    FUN_004c4150(s__s___d__Illegal_index_in_OrigPos_005ad278,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad24c,0x1b2,param_2,
                 *(undefined4 *)(in_ECX + 0x48));
  }
  pfVar1 = (float *)(*(int *)(in_ECX + 0x44) + param_2 * 0xc);
  if (((*pfVar1 == DAT_007127d0) && (pfVar1[1] == DAT_007127d4)) && (pfVar1[2] == DAT_007127d8)) {
    FUN_004c4150(s__s___d__Trying_to_get_a_position_005ad2e4,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad2b8,0x1b9,param_2,
                 *(undefined4 *)(in_ECX + 0x48));
  }
  puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x44) + param_2 * 0xc);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  return;
}


/* ==== 004935b0 FUN_004935b0 ==== */

void FUN_004935b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int i;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)FUN_00493500(local_c,DAT_006fbaa4);
  FUN_004928e0(*puVar1,puVar1[1],puVar1[2]);
  i = 0;
  if (0 < DAT_005d2ab0) {
    puVar1 = &DAT_005973c8;
    do {
      puVar2 = (undefined4 *)FUN_00493500(local_c,*puVar1);
      FUN_004928e0(*puVar2,puVar2[1],puVar2[2]);
      i = i + 1;
      puVar1 = puVar1 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  return;
}


/* ==== 00493640 FUN_00493640 ==== */

void FUN_00493640(void)

{
  char cVar1;
  undefined4 uVar2;
  void *operator_new_result;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 *puVar5;
  int i;
  undefined4 uVar6;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 local_2c [4];
  int iStack_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e0bc;
  pvStack_c = ExceptionList;
  i = 0;
  ExceptionList = &pvStack_c;
  FUN_004028f0(0);
  local_4 = 0;
  uVar2 = FUN_004932a0(local_1c,DAT_006fba5c);
  local_4._0_1_ = 1;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(1);
  operator_new_result = operator_new(0x6c);
  if (operator_new_result == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004926e0(*(undefined4 *)(in_ECX + 4));
  }
  *(int *)(in_ECX + 0x18) = iVar3;
  if (iVar3 == 0) {
    FUN_004c4150(s__s___d__Not_enough_memory_for_pl_005ad344);
  }
  FUN_00492730(local_2c,DAT_006fbaa4);
  iVar3 = *(int *)(in_ECX + 0x18);
  if (DAT_006fba5c < DAT_005d2ab0 + 1) {
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    iVar3 = DAT_006fba5c;
  }
  else {
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    iVar3 = DAT_005d2ab0;
  }
  FUN_004934b0(iVar3,uVar2,uVar4,uVar6);
  uStack_34 = 0xffffffff;
  FUN_004930f0(&uStack_34);
  if (0 < DAT_005d2ab0) {
    puVar5 = &DAT_005973c8;
    do {
      uVar2 = puVar5[-2];
      uVar4 = FUN_004932a0(local_1c,uVar2);
      local_4._0_1_ = 2;
      FUN_004093c0(uVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(1);
      operator_new_result = operator_new(0x6c);
      if (operator_new_result == (void *)0x0) {
        iStack_30 = 0;
      }
      else {
        iStack_30 = FUN_004926e0(*(undefined4 *)(in_ECX + 4));
      }
      if (iStack_30 == 0) {
        FUN_004c4150(s__s___d__Not_enough_memory_for_ra_005ad3a8,
                     s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad37c,0x1f0);
      }
      FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x20) + 8),1,&iStack_30);
      FUN_00492730(local_2c,*puVar5);
      uStack_34 = 0xb4ffffff;
      FUN_004930f0(&uStack_34);
      iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x20) + 4) + i * 4);
      FUN_004934b0(uVar2,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
                   *(undefined4 *)(iVar3 + 0x14));
      i = i + 1;
      puVar5 = puVar5 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  FUN_004935b0();
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(iStack_28 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004938b0 FUN_004938b0 ==== */

void FUN_004938b0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  char *pcVar3;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e0de;
  pvStack_c = ExceptionList;
  i = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar3 = s_OVL_PLAYER_OUTLINE_005ace7c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_00402940(s_OVL_PLAYER_OUTLINE_005ace7c,~i - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(local_2c);
  *(undefined4 *)(in_ECX + 0x2c) = uVar2;
  local_4 = 0xffffffff;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad3e0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad3e0,~i - 1);
  local_4 = 1;
  uVar2 = FUN_0049df90(local_1c,s_Element__s_not_found_005ad40c,s_OVL_PLAYER_OUTLINE_005ace7c);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x2c),uVar2,local_3c,0x1ff);
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
  local_10 = (void *)0x0;
  local_4 = 0xffffffff;
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_38 + -1));
    }
    else {
      *(char *)(local_38 + -1) = cVar1 + -1;
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  (**(code **)(**(int **)(in_ECX + 0x2c) + 0x28))(&DAT_00577038);
  ExceptionList = local_10;
  return;
}


/* ==== 00493a40 FUN_00493a40 ==== */

void FUN_00493a40(void)

{
  char cVar1;
  int i;
  undefined4 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint j;
  uint k;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_54;
  int local_50;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined1 *local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e108;
  local_c = ExceptionList;
  if (DAT_006fb964 != 0) {
    ExceptionList = &local_c;
    FUN_00493410();
    FUN_00493640();
    FUN_004938b0();
    FUN_004028f0(0);
    i = 0;
    local_4 = 0;
    if (DAT_005d2ab0 != -1 && -1 < DAT_005d2ab0 + 1) {
      do {
        i = i + 1;
        local_50 = i;
        uVar2 = FUN_0049df90(local_1c,s_STRING_FINISH_POS__d_005ad424,i);
        local_4._0_1_ = 1;
        FUN_004093c0(uVar2,0,0xffffffff);
        local_4._0_1_ = 0;
        FUN_004028f0(1);
        local_54 = FUN_00485d50(local_3c);
        FUN_004028f0(0);
        j = 0xffffffff;
        pcVar4 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad43c;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        j = ~j - 1;
        cVar1 = FUN_00402a00(j,1);
        if (cVar1 != '\0') {
          pcVar4 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad43c;
          pcVar5 = local_48;
          for (k = j >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar5 = pcVar5 + 4;
          }
          for (k = j & 3; k != 0; k = k - 1) {
            *pcVar5 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
          }
          local_48[j] = '\0';
          i = local_50;
          local_44 = j;
        }
        local_4._0_1_ = 2;
        puVar3 = local_38;
        if (local_38 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        uVar2 = FUN_0049df90(local_2c,s_Finish_string__s_not_found_in_ov_005ad468,puVar3);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_00487bc0(local_54,uVar2,local_4c,0x218);
        if (local_28 != 0) {
          cVar1 = *(char *)(local_28 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(local_28 + -1));
          }
          else {
            *(char *)(local_28 + -1) = cVar1 + -1;
          }
        }
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_4 = local_4 & 0xffffff00;
        if (local_48 != (char *)0x0) {
          cVar1 = local_48[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(local_48 + -1);
          }
          else {
            local_48[-1] = cVar1 + -1;
          }
        }
        local_48 = (char *)0x0;
        local_44 = 0;
        local_40 = 0;
        FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 8),1,&local_54);
      } while (i < DAT_005d2ab0 + 1);
    }
    if (local_38 != (undefined1 *)0x0) {
      cVar1 = local_38[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_38[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339(local_38 + -1);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00493c80 FUN_00493c80 ==== */

void FUN_00493c80(void)

{
  int iVar1;
  int in_ECX;
  int i;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    FUN_0054b339(*(int *)(in_ECX + 0x18));
  }
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x1c))();
  i = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x20) + 4) + i * 4) != 0) {
        FUN_004928b0();
        FUN_0054b339(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x20) + 4) + i * 4));
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x20) + 4) + i * 4) = 0;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 00493ce0 FUN_00493ce0 ==== */

void FUN_00493ce0(void)

{
  FUN_004934a0();
  FUN_00493c80();
  return;
}


/* ==== 00493d00 FUN_00493d00 ==== */

int FUN_00493d00(undefined4 param_1,int param_2,int param_3)

{
  int __ftol_result;
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < param_3) {
    iVar1 = param_3;
    param_3 = param_2;
  }
  __ftol_result = __ftol();
  if (iVar1 <= __ftol_result) {
    __ftol_result = iVar1;
  }
  if (__ftol_result <= param_3) {
    __ftol_result = param_3;
  }
  return __ftol_result;
}


/* ==== 00493d60 FUN_00493d60 ==== */

void FUN_00493d60(void)

{
  float fVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  float10 fVar6;
  uint uStack_1c;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(in_ECX + 0x2c) == 0) {
    FUN_004c4150(s__s___d__Outline_element_not_init_005ad4c0,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad494,0x26d);
  }
  puVar2 = (uint *)FUN_0047bde0();
  uStack_1c = *puVar2;
  uStack_14 = uStack_1c >> 8 & 0xff;
  uVar3 = uStack_1c >> 0x10;
  uStack_10 = uStack_1c >> 0x18;
  uVar5 = uStack_1c & 0xff;
  fVar6 = (float10)FUN_004a6800();
  fStack_18 = (float)((float10)0.6 / fVar6);
  fVar6 = (float10)FUN_004a6800();
  fVar1 = fStack_18;
  *(float *)(in_ECX + 0x3c) = (float)(fVar6 + (float10)*(float *)(in_ECX + 0x3c));
  uVar3 = FUN_00493d00(uVar3 & 0xff,0x80,0xff,fStack_18);
  uStack_14 = FUN_00493d00(uStack_14,0x80,0xff,fVar1);
  uVar5 = FUN_00493d00(uVar5,0x80,0xff,fVar1);
  iVar4 = FUN_00493d00(uStack_10,0xff,0xff,fVar1);
  uStack_1c = ((iVar4 << 8 | uVar3) << 8 | uStack_14) << 8 | uVar5;
  if (0.6 <= *(float *)(in_ECX + 0x3c)) {
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    if (*(char *)(in_ECX + 0x38) == '\0') {
      uStack_1c = 0xff808080;
      *(undefined1 *)(in_ECX + 0x38) = 1;
    }
    else {
      uStack_1c = 0xffffffff;
      *(undefined1 *)(in_ECX + 0x38) = 0;
    }
  }
  iVar4 = *(int *)(in_ECX + 0x18);
  uStack_c = *(undefined4 *)(iVar4 + 0x18);
  uStack_8 = *(undefined4 *)(iVar4 + 0x1c);
  uStack_4 = *(undefined4 *)(iVar4 + 0x20);
  FUN_0047bc50(&uStack_c);
  (**(code **)(**(int **)(in_ECX + 0x2c) + 0x28))(&uStack_1c);
  return;
}


/* ==== 00493ed0 FUN_00493ed0 ==== */

void FUN_00493ed0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int i;
  
  FUN_004928c0(param_1);
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x1c))();
  i = 0;
  if (0 < iVar1) {
    do {
      FUN_004928c0(param_1);
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 00493f10 FUN_00493f10 ==== */

void FUN_00493f10(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int i;
  
  (**(code **)(**(int **)(in_ECX + 0x2c) + 0x20))(param_1);
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x30))();
  i = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x34) + 4) + i * 4) + 0x20))(param_1);
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 00493f50 FUN_00493f50 ==== */

undefined1 * FUN_00493f50(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_14;
  undefined4 local_10;
  char local_c [11];
  undefined1 local_1;
  
  local_10 = 0;
  FUN_00494060(param_2,&local_10,&local_14,&param_2);
  FUN_00559677(local_c,0xb,s__02d__02d__d_005ad4e8,local_10,local_14,param_2);
  *param_1 = (undefined1)param_2;
  i = 0xffffffff;
  local_1 = 0;
  pcVar3 = local_c;
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
      FUN_004028f0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (i <= *(uint *)(param_1 + 0xc))) goto LAB_00494031;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return param_1;
  }
  FUN_00402b20(i);
LAB_00494031:
  pcVar3 = local_c;
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


/* ==== 00494060 FUN_00494060 ==== */

void FUN_00494060(int param_1,int *param_2,int *param_3,int *param_4)

{
  *param_2 = param_1 / 60000;
  *param_3 = (param_1 % 60000) / 1000;
  *param_4 = ((param_1 % 60000) % 1000) / 100;
  return;
}


/* ==== 004940e0 FUN_004940e0 ==== */

void FUN_004940e0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  uint k;
  uint m;
  int i;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_69;
  int local_68;
  int *local_64;
  int j;
  undefined1 local_5c [4];
  char *pcStack_58;
  int iStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e152;
  pvStack_c = ExceptionList;
  iVar5 = 0xfffffff;
  local_68 = 0xfffffff;
  ExceptionList = &pvStack_c;
  FUN_004028f0(0);
  local_4c = CONCAT31(local_4c._1_3_,local_69);
  local_4 = 0;
  FUN_004028f0(0);
  local_4._0_1_ = 1;
  if (0 < DAT_005d2ab0) {
    piVar3 = &DAT_005973c4;
    i = DAT_005d2ab0;
    do {
      if ((piVar3[3] != 0) && (iVar1 = *piVar3, iVar1 < iVar5)) {
        iVar5 = iVar1;
        local_68 = iVar1;
      }
      piVar3 = piVar3 + 0x16;
      i = i + -1;
    } while (i != 0);
  }
  if (DAT_006fbaa0 < iVar5) {
    local_68 = DAT_006fbaa0;
    iVar5 = DAT_006fbaa0;
  }
  j = 0;
  if (0 < DAT_005d2ab0) {
    local_64 = &DAT_005973c4;
    do {
      if (local_64[3] == 0) {
        k = 0xffffffff;
        pcVar6 = s_________005ad4fc;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        k = ~k - 1;
        cVar2 = FUN_00402a00(k,1);
        if (cVar2 != '\0') {
          pcVar6 = s_________005ad4fc;
          pcVar7 = pcStack_58;
          for (m = k >> 2; m != 0; m = m - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (m = k & 3; m != 0; m = m - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          FUN_004029e0(k);
          iVar5 = local_68;
        }
      }
      else {
        i = *local_64;
        if (i == iVar5) {
          uVar4 = FUN_00493f50(local_3c,i);
          local_4._0_1_ = 2;
          FUN_004093c0(uVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(1);
        }
        else {
          uVar4 = FUN_00493f50(auStack_2c,i - iVar5);
          local_4._0_1_ = 3;
          FUN_004093c0(uVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(1);
          uVar4 = FUN_004797e0(local_1c,s___005ad4f8,&local_4c);
          local_4._0_1_ = 4;
          FUN_004093c0(uVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(1);
        }
      }
      (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x28) + 4) + local_64[1] * 4) + 0x48))
                (local_5c);
      j = j + 1;
      local_64 = local_64 + 0x16;
    } while (j < DAT_005d2ab0);
  }
  if (DAT_006fbaa0 == iVar5) {
    uVar4 = FUN_00493f50(local_1c,DAT_006fbaa0);
    local_4._0_1_ = 5;
    FUN_004093c0(uVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(1);
  }
  else {
    uVar4 = FUN_00493f50(local_1c,DAT_006fbaa0 - iVar5);
    local_4._0_1_ = 6;
    FUN_004093c0(uVar4,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004028f0(1);
    uVar4 = FUN_004797e0(local_1c,s___005ad504,&local_4c);
    local_4._0_1_ = 7;
    FUN_004093c0(uVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x48))
            (local_5c);
  FUN_004a67f0();
  iVar5 = __ftol();
  if (iVar5 % 600 < 300) {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x20))(1);
  }
  else {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x20))(0);
  }
  if (iStack_50 != 0) {
    cVar2 = *(char *)(iStack_50 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(iStack_50 + -1);
    }
    else {
      *(char *)(iStack_50 + -1) = cVar2 + -1;
    }
  }
  iStack_50 = 0;
  local_4c = 0;
  uStack_48 = 0;
  if (j != 0) {
    cVar2 = *(char *)(j + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(j + -1) = cVar2 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_0054b339(j + -1);
  }
  ExceptionList = pvStack_14;
  return;
}


/* ==== 00494480 FUN_00494480 ==== */

void FUN_00494480(void)

{
  int in_ECX;
  int *piVar1;
  int i;
  
  i = 0;
  if (0 < DAT_005d2ab0) {
    piVar1 = &DAT_005973c8;
    do {
      FUN_00492980(*piVar1,*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + 4) + *piVar1 * 4));
      i = i + 1;
      piVar1 = piVar1 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  FUN_00492980(DAT_006fbaa4,
               *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x28) + 4) + DAT_006fbaa4 * 4));
  return;
}


/* ==== 004944e0 FUN_004944e0 ==== */

void FUN_004944e0(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_00493ed0(0);
      FUN_00493f10(0);
    }
  }
  else {
    if (param_1 == 5) {
      if (*(int *)(in_ECX + 0x40) != 5) {
        FUN_00493ed0(1);
        FUN_00493f10(0);
        FUN_00494480();
      }
      FUN_004940e0();
      *(undefined4 *)(in_ECX + 0x40) = 5;
      return;
    }
    if (*(int *)(in_ECX + 0x40) != param_1) {
      FUN_00493ed0(1);
      FUN_00493f10(1);
      *(int *)(in_ECX + 0x40) = param_1;
      return;
    }
  }
  *(int *)(in_ECX + 0x40) = param_1;
  return;
}


/* ==== 00494680 FUN_00494680 ==== */

void FUN_00494680(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00494690 FUN_00494690 ==== */

void FUN_00494690(void)

{
  FUN_005584e0(&LAB_004946a0);
  return;
}


/* ==== 004946c0 FUN_004946c0 ==== */

void FUN_004946c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004946d0 FUN_004946d0 ==== */

void FUN_004946d0(void)

{
  FUN_005584e0(&LAB_004946e0);
  return;
}


/* ==== 00494720 FUN_00494720 ==== */

void FUN_00494720(byte param_1)

{
  FUN_00494740();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00494740 FUN_00494740 ==== */

void FUN_00494740(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x34);
  *(undefined ***)(in_ECX + 0x30) = &PTR_LAB_00576b04;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  iVar1 = *(int *)(in_ECX + 0x28);
  *(undefined ***)(in_ECX + 0x24) = &PTR_LAB_00576e18;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  iVar1 = *(int *)(in_ECX + 0x20);
  *(undefined ***)(in_ECX + 0x1c) = &PTR_LAB_00577058;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FUN_004925f0();
  return;
}


/* ==== 004947f0 FUN_004947f0 ==== */

void FUN_004947f0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00577058;
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


