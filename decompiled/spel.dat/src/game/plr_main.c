/* spel.dat — game/plr_main.cpp: 28 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0044f590 FUN_0044f590 ==== */

void FUN_0044f590(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int i;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  FUN_004c3fa0();
  puVar6 = param_2;
  puVar7 = param_1;
  for (i = 10; i != 0; i = i + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_004c3fa0(s_Source__object1____d__object_2___005a236c,param_2[2],param_2[3]);
  param_1[2] = param_2[3];
  param_1[3] = param_2[2];
  FUN_004066c0();
  FUN_004c3fa0();
  FUN_004c3fa0();
  __ftol();
  pfVar5 = (float *)FUN_004b2a10();
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  FUN_004c3fa0();
  i = *(int *)(param_2[2] * 0xf0 + 0x24 + DAT_00715e50);
  fVar1 = fVar1 + *(float *)(DAT_0073b0d0 + i + 0x50 + i * 0xa8);
  i = DAT_0073b0d0 + i + i * 0xa8;
  fVar2 = fVar2 + *(float *)(i + 0x54);
  fVar3 = fVar3 + *(float *)(i + 0x58);
  FUN_004c3fa0(s_Translating__position_____f___f__005a23f0,(double)*(float *)(i + 0x50),
               (double)*(float *)(i + 0x54),(double)*(float *)(i + 0x58),(double)fVar1,(double)fVar2
               ,(double)fVar3);
  iVar4 = *(int *)(param_2[3] * 0xf0 + 0x24 + DAT_00715e50);
  i = DAT_0073b0d0 + iVar4 + iVar4 * 0xa8;
  FUN_004c3fa0(s_Translating__position2_____f___f_005a2430,(double)*(float *)(i + 0x50),
               (double)*(float *)(i + 0x54),(double)*(float *)(i + 0x58),
               (double)(fVar1 - *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8)),
               (double)(fVar2 - *(float *)(i + 0x54)),(double)(fVar3 - *(float *)(i + 0x58)));
  __ftol();
  pfVar5 = (float *)FUN_004b2a10();
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  FUN_004c3fa0();
  param_1[4] = fVar1 * 0.1;
  param_1[5] = fVar2 * 0.1;
  param_1[6] = fVar3 * 0.1;
  return;
}


/* ==== 0044f970 FUN_0044f970 ==== */

undefined4 FUN_0044f970(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint i;
  uint uVar8;
  uint j;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  float10 fVar14;
  undefined1 local_58 [12];
  undefined1 local_4c [4];
  int local_48 [3];
  undefined1 local_3c [4];
  int local_38 [3];
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0056a627;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = FUN_004a2140();
  local_24 = iVar2;
  local_28 = FUN_004a2150();
  iVar2 = *(int *)(iVar2 + 0x28);
  iVar7 = *(int *)(local_28 + 0x28);
  local_2c = iVar2;
  uVar3 = FUN_004a20f0(local_38);
  uVar4 = FUN_004a20a0(local_48);
  fVar14 = (float10)FUN_00427170(iVar2,iVar7,uVar4,uVar3);
  local_20 = (float)fVar14;
  local_18 = local_20;
  uVar3 = FUN_004a20f0(local_48);
  uVar4 = FUN_004a20a0(local_38);
  fVar14 = (float10)FUN_00427170(iVar7,iVar2,uVar4,uVar3);
  local_20 = (float)fVar14;
  local_1c = local_20;
  iVar5 = FUN_0040dad0(iVar2);
  if (iVar5 != -1) {
    puVar6 = (undefined4 *)FUN_004a2050(local_48);
    FUN_0041a5b0(iVar2,iVar7,local_18,*puVar6,puVar6[1],puVar6[2]);
  }
  iVar5 = FUN_0040dad0(iVar7);
  if (iVar5 != -1) {
    puVar6 = (undefined4 *)FUN_004a2050(local_48);
    FUN_0041a5b0(iVar7,iVar2,local_1c,*puVar6,puVar6[1],puVar6[2]);
  }
  if ((iVar2 != DAT_006fba58) && (iVar7 != DAT_006fba58)) {
    ExceptionList = local_10;
    return 0;
  }
  local_20 = (float)((uint)local_20 & 0xffffff00);
  iVar2 = FUN_0044ff50(local_3c);
  i = 0xffffffff;
  pcVar10 = s_chunk_005a24a0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar8 = ~i - 1;
  i = 5;
  if (*(uint *)(iVar2 + 8) < 5) {
    i = *(uint *)(iVar2 + 8);
  }
  j = i;
  if (uVar8 <= i) {
    j = uVar8;
  }
  bVar12 = false;
  iVar7 = 0;
  bVar13 = true;
  pbVar9 = *(byte **)(iVar2 + 4);
  pbVar11 = (byte *)s_chunk_005a24a0;
  do {
    if (j == 0) break;
    j = j - 1;
    bVar12 = *pbVar9 < *pbVar11;
    bVar13 = *pbVar9 == *pbVar11;
    pbVar9 = pbVar9 + 1;
    pbVar11 = pbVar11 + 1;
  } while (bVar13);
  if (!bVar13) {
    iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
  }
  if (((iVar7 != 0) || (i < uVar8)) || (i != uVar8)) {
    iVar2 = FUN_0044ff50(local_4c);
    i = 0xffffffff;
    pcVar10 = s_chunk_005a24a8;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~i - 1;
    i = 5;
    if (*(uint *)(iVar2 + 8) < 5) {
      i = *(uint *)(iVar2 + 8);
    }
    j = i;
    if (uVar8 <= i) {
      j = uVar8;
    }
    bVar12 = false;
    iVar7 = 0;
    bVar13 = true;
    pbVar9 = *(byte **)(iVar2 + 4);
    pbVar11 = (byte *)s_chunk_005a24a8;
    do {
      if (j == 0) break;
      j = j - 1;
      bVar12 = *pbVar9 < *pbVar11;
      bVar13 = *pbVar9 == *pbVar11;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    } while (bVar13);
    if (!bVar13) {
      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
    }
    bVar12 = false;
    if (iVar7 == 0) {
      if (i < uVar8) {
        i = 0xffffffff;
      }
      else {
        i = (uint)(i != uVar8);
      }
      bVar12 = i == 0;
    }
    if (local_48[0] != 0) {
      cVar1 = *(char *)(local_48[0] + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_48[0] + -1));
      }
      else {
        *(char *)(local_48[0] + -1) = cVar1 + -1;
      }
    }
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    bVar13 = false;
    if (!bVar12) goto LAB_0044fba1;
  }
  bVar13 = true;
LAB_0044fba1:
  local_8 = local_8 & 0xffffff00;
  if (local_38[0] != 0) {
    cVar1 = *(char *)(local_38[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_38[0] + -1));
    }
    else {
      *(char *)(local_38[0] + -1) = cVar1 + -1;
    }
  }
  if (bVar13) {
    local_20 = (float)CONCAT31(local_20._1_3_,1);
  }
  if (local_2c == DAT_006fba58) {
    local_1c = local_18;
  }
  puVar6 = (undefined4 *)FUN_004a2050(local_58);
  FUN_0044fe70(DAT_006fba58,local_1c,*puVar6,puVar6[1],puVar6[2],local_20);
  ExceptionList = local_10;
  return 0;
}


/* ==== 0044fe70 FUN_0044fe70 ==== */

undefined4 FUN_0044fe70(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_00000018;
  
  FUN_00426fe0(param_1,1,param_2,&stack0x0000000c,in_stack_00000018);
  return 1;
}


/* ==== 0044feb0 FUN_0044feb0 ==== */

void FUN_0044feb0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0044fec0 FUN_0044fec0 ==== */

void FUN_0044fec0(void)

{
  FUN_005584e0(&LAB_0044fed0);
  return;
}


/* ==== 0044fef0 FUN_0044fef0 ==== */

void FUN_0044fef0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0044ff00 FUN_0044ff00 ==== */

void FUN_0044ff00(void)

{
  FUN_005584e0(&LAB_0044ff10);
  return;
}


/* ==== 0044ff50 FUN_0044ff50 ==== */

undefined1 * FUN_0044ff50(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = *(char **)(*(int *)(in_ECX + 8) + 0x14);
  *param_1 = param_1._0_1_;
  i = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pcVar4 = pcVar3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (i <= *(uint *)(param_1 + 0xc))) goto LAB_0044fff0;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return param_1;
  }
  FUN_00402b20(i);
LAB_0044fff0:
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
  *(undefined1 *)(i + *(int *)(param_1 + 4)) = 0;
  return param_1;
}


/* ==== 00450030 FUN_00450030 ==== */

void FUN_00450030(void)

{
  FUN_004505d0();
  return;
}


/* ==== 00450040 FUN_00450040 ==== */

void FUN_00450040(void)

{
  FUN_005584e0(&LAB_00450050);
  return;
}


/* ==== 00450090 FUN_00450090 ==== */

void FUN_00450090(int *param_1,int param_2,int param_3)

{
  if ((*param_1 < param_2) || (param_2 = param_3, param_3 < *param_1)) {
    *param_1 = param_2;
  }
  return;
}


/* ==== 004500b0 FUN_004500b0 ==== */

void FUN_004500b0(void)

{
  int iVar1;
  
  FUN_00450360();
  FUN_00450400();
  FUN_004502c0();
  FUN_004500f0();
  FUN_004504c0();
  DAT_006fbab4 = 0;
  iVar1 = DAT_006fba58 * 0xf0 + DAT_00715e50;
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x34);
  return;
}


/* ==== 004500f0 FUN_004500f0 ==== */

void FUN_004500f0(void)

{
  return;
}


/* ==== 00450100 FUN_00450100 ==== */

undefined4 FUN_00450100(void)

{
  return DAT_006fba74;
}


/* ==== 00450110 FUN_00450110 ==== */

void FUN_00450110(undefined4 param_1)

{
  DAT_006fba74 = param_1;
  FUN_00450090(&DAT_006fba74,0,100);
  return;
}


/* ==== 00450190 FUN_00450190 ==== */

void FUN_00450190(void)

{
  DWORD DVar1;
  
  if (DAT_006fbb48 != 0) {
    DVar1 = GetTickCount();
    if (9999 < (int)(DVar1 - DAT_006fbb30)) {
      DAT_006fbb30 = DVar1;
    }
  }
  return;
}


/* ==== 004501c0 FUN_004501c0 ==== */

int FUN_004501c0(void)

{
  int iVar1;
  int local_1c [7];
  
  local_1c[4] = 0;
  local_1c[0] = 55000;
  local_1c[5] = 0;
  local_1c[1] = 35000;
  local_1c[2] = 15000;
  local_1c[3] = 0;
  local_1c[6] = 0;
  if ((DAT_006fbaa4 < 0) || (DAT_005d2ab0 + 1 <= DAT_006fbaa4)) {
    FUN_004c4150(s__s___d__Illegal_index_player_pos_005a25b4,
                 s_C__Work_A2IV_Game_prog_plr_main__005a2590,199,DAT_006fbaa4);
  }
  iVar1 = local_1c[DAT_006fbaa4];
  if (DAT_006fb898 == DAT_006fa588 + -1) {
    iVar1 = iVar1 << 2;
  }
  if ((DAT_006fbaa4 == DAT_005d2ab0) && (DAT_006fb8d4 == 0)) {
    iVar1 = 5000;
  }
  return iVar1;
}


/* ==== 00450260 FUN_00450260 ==== */

void FUN_00450260(undefined4 param_1)

{
  DAT_006fba6c = param_1;
  FUN_00450090(&DAT_006fba6c,0,0x1e);
  return;
}


/* ==== 00450280 FUN_00450280 ==== */

undefined4 FUN_00450280(void)

{
  return DAT_006fba6c;
}


/* ==== 00450290 FUN_00450290 ==== */

void FUN_00450290(undefined4 param_1)

{
  DAT_006fba70 = param_1;
  FUN_00450090(&DAT_006fba70,0,999999);
  return;
}


/* ==== 004502b0 FUN_004502b0 ==== */

undefined4 FUN_004502b0(void)

{
  return DAT_006fba70;
}


/* ==== 004502c0 FUN_004502c0 ==== */

void FUN_004502c0(void)

{
  return;
}


/* ==== 004502d0 FUN_004502d0 ==== */

undefined4 FUN_004502d0(void)

{
  return DAT_006fba68;
}


/* ==== 004502e0 FUN_004502e0 ==== */

void FUN_004502e0(undefined4 param_1)

{
  DAT_006fba68 = param_1;
  FUN_00450090(&DAT_006fba68,0,999999);
  return;
}


/* ==== 00450330 FUN_00450330 ==== */

void FUN_00450330(int param_1)

{
  DAT_006fba68 = DAT_006fba68 - param_1;
  FUN_00450090(&DAT_006fba68,0,999999);
  return;
}


/* ==== 00450360 FUN_00450360 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450360(void)

{
  _DAT_006fba78 = 100;
  return;
}


/* ==== 00450400 FUN_00450400 ==== */

void FUN_00450400(void)

{
  return;
}


/* ==== 00450410 FUN_00450410 ==== */

undefined4 FUN_00450410(void)

{
  return DAT_006fba60;
}


