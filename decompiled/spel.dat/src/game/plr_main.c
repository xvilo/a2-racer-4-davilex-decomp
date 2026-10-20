/* spel.dat — game/plr_main.cpp: 28 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0044f590 FUN_0044f590 ==== */

void FUN_0044f590(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  int i;
  undefined4 *puVar3;
  double local_30 [2];
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_004c3fa0();
  puVar1 = param_2;
  puVar3 = param_1;
  for (i = 10; i != 0; i = i + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004c3fa0(s_Source__object1____d__object_2___005a236c,param_2[2],param_2[3]);
  param_1[2] = param_2[3];
  param_1[3] = param_2[2];
  puVar1 = (undefined4 *)FUN_004066c0(local_30);
  local_20 = (float)*puVar1;
  local_1c = (float)puVar1[1];
  local_18 = (float)puVar1[2];
  FUN_004c3fa0();
  FUN_004c3fa0();
  __ftol();
  pfVar2 = (float *)FUN_004b2a10();
  local_20 = *pfVar2;
  local_1c = pfVar2[1];
  local_18 = pfVar2[2];
  FUN_004c3fa0();
  i = *(int *)(param_2[2] * 0xf0 + 0x24 + DAT_00715e50);
  local_20 = local_20 + *(float *)(DAT_0073b0d0 + i + 0x50 + i * 0xa8);
  i = DAT_0073b0d0 + i + i * 0xa8;
  local_1c = local_1c + *(float *)(i + 0x54);
  local_18 = local_18 + *(float *)(i + 0x58);
  FUN_004c3fa0(s_Translating__position_____f___f__005a23f0,(double)*(float *)(i + 0x50),
               (double)*(float *)(i + 0x54),(double)*(float *)(i + 0x58),(double)local_20,
               (double)local_1c,(double)local_18);
  i = *(int *)(param_2[3] * 0xf0 + 0x24 + DAT_00715e50);
  local_20 = local_20 - *(float *)(DAT_0073b0d0 + i + 0x50 + i * 0xa8);
  i = DAT_0073b0d0 + i + i * 0xa8;
  local_1c = local_1c - *(float *)(i + 0x54);
  local_18 = local_18 - *(float *)(i + 0x58);
  local_30[0] = (double)local_18;
  FUN_004c3fa0(s_Translating__position2_____f___f_005a2430,(double)*(float *)(i + 0x50),
               (double)*(float *)(i + 0x54),(double)*(float *)(i + 0x58),(double)local_20,
               (double)local_1c,local_30[0]);
  __ftol();
  pfVar2 = (float *)FUN_004b2a10();
  local_20 = *pfVar2;
  local_1c = pfVar2[1];
  local_18 = pfVar2[2];
  FUN_004c3fa0();
  param_1[4] = local_20 * 0.1;
  param_1[5] = local_1c * 0.1;
  param_1[6] = local_18 * 0.1;
  return;
}


/* ==== 0044f970 FUN_0044f970 ==== */

undefined4 FUN_0044f970(undefined4 this_val)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint i;
  uint uVar9;
  uint j;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  float10 fVar15;
  undefined1 local_58 [12];
  undefined1 local_4c [4];
  int local_48 [3];
  undefined1 local_3c [4];
  int local_38 [3];
  int local_2c;
  void *this_val_2;
  void *this_val_3;
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
  pvVar2 = (void *)FUN_004a2140(this_val);
  this_val_3 = pvVar2;
  this_val_2 = (void *)FUN_004a2150(this_val);
  iVar7 = *(int *)((int)pvVar2 + 0x28);
  iVar8 = *(int *)((int)this_val_2 + 0x28);
  local_2c = iVar7;
  uVar3 = FUN_004a20f0(this_val,local_38);
  uVar4 = FUN_004a20a0(this_val,local_48);
  fVar15 = (float10)FUN_00427170(iVar7,iVar8,uVar4,uVar3);
  local_20 = (float)fVar15;
  local_18 = local_20;
  uVar3 = FUN_004a20f0(this_val,local_48);
  uVar4 = FUN_004a20a0(this_val,local_38);
  fVar15 = (float10)FUN_00427170(iVar8,iVar7,uVar4,uVar3);
  local_20 = (float)fVar15;
  local_1c = local_20;
  iVar5 = FUN_0040dad0(iVar7);
  if (iVar5 != -1) {
    puVar6 = (undefined4 *)FUN_004a2050(this_val,local_48);
    FUN_0041a5b0(iVar7,iVar8,local_18,*puVar6,puVar6[1],puVar6[2]);
  }
  iVar5 = FUN_0040dad0(iVar8);
  if (iVar5 != -1) {
    puVar6 = (undefined4 *)FUN_004a2050(this_val,local_48);
    FUN_0041a5b0(iVar8,iVar7,local_1c,*puVar6,puVar6[1],puVar6[2]);
  }
  if ((iVar7 != DAT_006fba58) && (iVar8 != DAT_006fba58)) {
    ExceptionList = local_10;
    return 0;
  }
  local_20 = (float)((uint)local_20 & 0xffffff00);
  iVar7 = FUN_0044ff50(this_val_3,local_3c);
  i = 0xffffffff;
  pcVar11 = s_chunk_005a24a0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar9 = ~i - 1;
  i = 5;
  if (*(uint *)(iVar7 + 8) < 5) {
    i = *(uint *)(iVar7 + 8);
  }
  j = i;
  if (uVar9 <= i) {
    j = uVar9;
  }
  bVar13 = false;
  iVar8 = 0;
  bVar14 = true;
  pbVar10 = *(byte **)(iVar7 + 4);
  pbVar12 = (byte *)s_chunk_005a24a0;
  do {
    if (j == 0) break;
    j = j - 1;
    bVar13 = *pbVar10 < *pbVar12;
    bVar14 = *pbVar10 == *pbVar12;
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar12 + 1;
  } while (bVar14);
  if (!bVar14) {
    iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
  }
  if (((iVar8 != 0) || (i < uVar9)) || (i != uVar9)) {
    iVar7 = FUN_0044ff50(this_val_2,local_4c);
    i = 0xffffffff;
    pcVar11 = s_chunk_005a24a8;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~i - 1;
    i = 5;
    if (*(uint *)(iVar7 + 8) < 5) {
      i = *(uint *)(iVar7 + 8);
    }
    j = i;
    if (uVar9 <= i) {
      j = uVar9;
    }
    bVar13 = false;
    iVar8 = 0;
    bVar14 = true;
    pbVar10 = *(byte **)(iVar7 + 4);
    pbVar12 = (byte *)s_chunk_005a24a8;
    do {
      if (j == 0) break;
      j = j - 1;
      bVar13 = *pbVar10 < *pbVar12;
      bVar14 = *pbVar10 == *pbVar12;
      pbVar10 = pbVar10 + 1;
      pbVar12 = pbVar12 + 1;
    } while (bVar14);
    if (!bVar14) {
      iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
    }
    bVar13 = false;
    if (iVar8 == 0) {
      if (i < uVar9) {
        i = 0xffffffff;
      }
      else {
        i = (uint)(i != uVar9);
      }
      bVar13 = i == 0;
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
    bVar14 = false;
    if (!bVar13) goto LAB_0044fba1;
  }
  bVar14 = true;
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
  if (bVar14) {
    local_20 = (float)CONCAT31(local_20._1_3_,1);
  }
  if (local_2c == DAT_006fba58) {
    local_1c = local_18;
  }
  puVar6 = (undefined4 *)FUN_004a2050(this_val,local_58);
  FUN_0044fe70(DAT_006fba58,local_1c,*puVar6,puVar6[1],puVar6[2],local_20);
  ExceptionList = local_10;
  return 0;
}


/* ==== 0044fe70 FUN_0044fe70 ==== */

undefined4 FUN_0044fe70(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_00000018;
  
  FUN_00426fe0(&DAT_005d3460,param_1,1,param_2,&stack0x0000000c,in_stack_00000018);
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

undefined1 * __thiscall FUN_0044ff50(void *this,undefined1 *this_val)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = *(char **)(*(int *)((int)this + 8) + 0x14);
  *this_val = this_val._0_1_;
  i = 0xffffffff;
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
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
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_0044fff0;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_0044fff0:
  pcVar4 = *(char **)(this_val + 4);
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
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(i + *(int *)(this_val + 4)) = 0;
  return this_val;
}


/* ==== 00450030 FUN_00450030 ==== */

void FUN_00450030(void)

{
  FUN_004505d0(&DAT_006fba58);
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


