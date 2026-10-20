/* spel.dat — game/gfx_wolk.cpp: 25 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00445f40 FUN_00445f40 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445f40(void)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  _DAT_006f4fa0 = 0xffffff;
  _DAT_006f4fc0 = 0xffffff;
  _DAT_006f4fe0 = 0xffffff;
  DAT_006f4f90 = 0xbe666666;
  _DAT_006f4f98 = 0;
  DAT_006f4f94 = 0xbe666666;
  _DAT_006f4fa4 = 0;
  _DAT_006f4fa8 = 0x3f4e8d76;
  _DAT_006f4fac = 0x3e3d744f;
  DAT_006f4fb0 = 0;
  _DAT_006f4fb8 = 0;
  DAT_006f4fb4 = 0x3e666666;
  _DAT_006f4fc4 = 0;
  _DAT_006f4fc8 = 0x3f4e8d76;
  _DAT_006f4fcc = 0;
  DAT_006f4fd0 = 0x3e666666;
  _DAT_006f4fd8 = 0;
  DAT_006f4fd4 = 0xbe666666;
  _DAT_006f4fe4 = 0;
  _DAT_006f4fe8 = 0x3f7dea89;
  _DAT_006f4fec = 0;
  puVar1 = &DAT_006f4fd0;
  puVar2 = &DAT_006f4ff0;
  for (i = 8; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = &DAT_006f4fb0;
  puVar2 = &DAT_006f5010;
  for (i = 8; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = &DAT_006f4f90;
  puVar2 = &DAT_006f5030;
  for (i = 8; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* ==== 00446020 FUN_00446020 ==== */

void __thiscall FUN_00446020(void)

{
  int iVar1;
  int iVar2;
  int k;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int j;
  undefined4 *puVar5;
  int i;
  
  i = 0;
  do {
    j = 0;
    puVar3 = &DAT_006f4f90;
    do {
      iVar1 = FUN_00445950(i);
      iVar2 = FUN_00445980(j);
      puVar4 = puVar3 + 8;
      j = j + 1;
      puVar5 = (undefined4 *)(&DAT_006ed740 + iVar1 * 0x134 + iVar2 * 0x20);
      for (k = 8; k != 0; k = k + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar3 = puVar4;
    } while ((int)puVar4 < 0x6f5050);
    j = FUN_00445950(i);
    i = i + 1;
    *(undefined4 *)(&DAT_006ed830 + j * 0x134) = 0;
  } while (i < 100);
  return;
}


/* ==== 004460a0 init_sparks ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_sparks(void)

{
  FUN_00445f40();
  FUN_00446020();
  _DAT_006ed6f8 = FUN_004b7400(&DAT_00712130,s_S_SFX_PCX_0059d910);
  return;
}


/* ==== 004462f0 FUN_004462f0 ==== */

void FUN_004462f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00446300 FUN_00446300 ==== */

void FUN_00446300(void)

{
  FUN_005584e0(&LAB_00446310);
  return;
}


/* ==== 00446330 FUN_00446330 ==== */

void FUN_00446330(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00446340 FUN_00446340 ==== */

void FUN_00446340(void)

{
  FUN_005584e0(&LAB_00446350);
  return;
}


/* ==== 004463c0 FUN_004463c0 ==== */

int FUN_004463c0(int param_1)

{
  if ((param_1 < 0) || (0x45 < param_1)) {
    FUN_004c4150(s__s___d__Cloud_index_incorrect__I_0059da14,
                 s_C__Work_A2IV_Game_prog_gfx_wolk__0059d9f0,0x5b,param_1);
  }
  return param_1;
}


/* ==== 004463f0 FUN_004463f0 ==== */

int FUN_004463f0(int param_1)

{
  if ((param_1 < 0) || (5 < param_1)) {
    FUN_004c4150(s__s___d__vertex_index_incorrect__I_0059da64,
                 s_C__Work_A2IV_Game_prog_gfx_wolk__0059da40,0x65,param_1);
  }
  return param_1;
}


/* ==== 00446420 FUN_00446420 ==== */

void FUN_00446420(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int i;
  undefined4 *puVar4;
  
  iVar2 = FUN_004463c0(param_1);
  iVar2 = *(int *)(&DAT_006f51ac + iVar2 * 300) % 5;
  if (2 < iVar2) {
    iVar2 = 4 - iVar2;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (2 < iVar2) {
    iVar2 = 2;
  }
  i = 0;
  puVar4 = &DAT_0059d964 + iVar2 * 0xc;
  do {
    iVar2 = FUN_004463c0(param_1);
    iVar3 = FUN_004463f0(i);
    *(undefined4 *)(&DAT_006f50e8 + iVar2 * 300 + iVar3 * 0x20) = puVar4[-1];
    iVar2 = FUN_004463c0(param_1);
    iVar3 = FUN_004463f0(i);
    uVar1 = *puVar4;
    i = i + 1;
    puVar4 = puVar4 + 2;
    *(undefined4 *)(&DAT_006f50ec + iVar2 * 300 + iVar3 * 0x20) = uVar1;
  } while (i < 6);
  return;
}


/* ==== 004464d0 FUN_004464d0 ==== */

void FUN_004464d0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int i;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar5 = FUN_004463c0(param_1);
  fVar1 = *(float *)(&DAT_006f51b0 + iVar5 * 300);
  iVar5 = FUN_004463c0(param_1);
  fVar2 = *(float *)(&DAT_006f51b4 + iVar5 * 300);
  iVar5 = FUN_004463c0(param_1);
  fVar1 = 33.0 / (float)*(int *)(&DAT_006f51a8 + iVar5 * 300) + fVar1;
  iVar5 = FUN_004463c0(param_1);
  fVar2 = 33.0 / (float)*(int *)(&DAT_006f51a8 + iVar5 * 300) + fVar2;
  fVar3 = fVar1 * 0.5;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(1);
  *(float *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20) = -fVar3;
  fVar4 = fVar2 * 0.5;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(1);
  *(float *)(&DAT_006f50d4 + iVar5 * 300 + iVar6 * 0x20) = -fVar4;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(2);
  *(float *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20) = -fVar3;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(2);
  *(float *)(&DAT_006f50d4 + iVar5 * 300 + iVar6 * 0x20) = fVar4;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(3);
  *(float *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20) = fVar3;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(3);
  *(float *)(&DAT_006f50d4 + iVar5 * 300 + iVar6 * 0x20) = fVar4;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(4);
  *(float *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20) = fVar3;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(4);
  *(float *)(&DAT_006f50d4 + iVar5 * 300 + iVar6 * 0x20) = -fVar4;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(1);
  iVar7 = FUN_004463c0(param_1);
  iVar8 = FUN_004463f0(5);
  puVar9 = (undefined4 *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20);
  puVar10 = (undefined4 *)(&DAT_006f50d0 + iVar7 * 300 + iVar8 * 0x20);
  for (i = 8; i != 0; i = i + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar5 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f51b0 + iVar5 * 300) = fVar1;
  iVar5 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f51b4 + iVar5 * 300) = fVar2;
  return;
}


/* ==== 00446730 FUN_00446730 ==== */

void FUN_00446730(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_004463c0(param_1);
  iVar3 = FUN_004463f0(0);
  uVar1 = *(uint *)(&DAT_006f50e0 + iVar2 * 300 + iVar3 * 0x20);
  uVar5 = DAT_006fa2f0 >> 0x18;
  iVar2 = FUN_004463c0(param_1);
  uVar5 = uVar5 / *(uint *)(&DAT_006f51a8 + iVar2 * 300);
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  uVar4 = uVar1 >> 0x18;
  if (uVar4 != 0) {
    uVar4 = uVar4 - uVar5;
  }
  iVar2 = FUN_004463c0(param_1);
  iVar3 = FUN_004463f0(0);
  *(uint *)(&DAT_006f50e0 + iVar2 * 300 + iVar3 * 0x20) = uVar1 & 0xffffff | uVar4 << 0x18;
  return;
}


/* ==== 004467d0 FUN_004467d0 ==== */

void FUN_004467d0(undefined4 param_1)

{
  FUN_00446420(param_1);
  FUN_004464d0(param_1);
  FUN_00446730(param_1);
  return;
}


/* ==== 004467f0 FUN_004467f0 ==== */

void FUN_004467f0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int i;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  
  iVar7 = FUN_004463c0(param_1);
  fVar4 = *(float *)(&DAT_006f5190 + iVar7 * 300);
  fVar5 = *(float *)(&DAT_006f5194 + iVar7 * 300);
  fVar6 = *(float *)(&DAT_006f5198 + iVar7 * 300);
  fVar12 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar12 = fVar12 * (float10)10.0;
  fVar13 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar13 = fVar13 * (float10)15.0;
  if ((float10)0.99 < fVar13) {
    fVar13 = (float10)0.99;
  }
  fVar1 = (float)fVar13;
  iVar8 = FUN_004463c0(param_1);
  iVar7 = iVar8 * 300;
  *(float *)(&DAT_006f5190 + iVar7) = fVar1 * *(float *)(&DAT_006f5190 + iVar8 * 300);
  *(float *)(&DAT_006f5194 + iVar7) = fVar1 * *(float *)(&DAT_006f5194 + iVar7);
  *(float *)(&DAT_006f5198 + iVar7) = fVar1 * *(float *)(&DAT_006f5198 + iVar7);
  iVar7 = FUN_004463c0(param_1);
  fVar1 = *(float *)(&DAT_006f50c0 + iVar7 * 300);
  iVar7 = FUN_004463c0(param_1);
  fVar2 = *(float *)(&DAT_006f50c4 + iVar7 * 300);
  iVar7 = FUN_004463c0(param_1);
  iVar8 = (&DAT_006c3518)[DAT_006c3568];
  fVar3 = *(float *)(&DAT_006f50c8 + iVar7 * 300);
  iVar7 = DAT_00719b50 + 0x14;
  iVar9 = FUN_004463c0(param_1);
  puVar10 = (undefined4 *)(iVar7 + iVar8 * 0x178);
  puVar11 = (undefined4 *)(&DAT_006f5090 + iVar9 * 300);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar7 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f50c0 + iVar7 * 300) = (float)(fVar12 * (float10)fVar4) + fVar1;
  iVar7 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f50c4 + iVar7 * 300) = (float)(fVar12 * (float10)fVar5) + fVar2;
  iVar7 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f50c8 + iVar7 * 300) = (float)(fVar12 * (float10)fVar6) + fVar3;
  return;
}


/* ==== 004469b0 FUN_004469b0 ==== */

int FUN_004469b0(void)

{
  int iVar1;
  int i;
  
  i = 0;
  do {
    iVar1 = FUN_004463c0(i);
    if (*(int *)(&DAT_006f51b8 + iVar1 * 300) == 0) {
      return i;
    }
    i = i + 1;
  } while (i < 0x46);
  return -1;
}


/* ==== 004469e0 FUN_004469e0 ==== */

void FUN_004469e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 __ftol_result;
  int i;
  int j;
  undefined4 *puVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  i = FUN_004463c0(param_1);
  puVar1 = local_40;
  puVar2 = (undefined4 *)(&DAT_006f5090 + i * 300);
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  i = FUN_004463c0(param_1);
  *(undefined4 *)(&DAT_006f51b8 + i * 300) = 1;
  FUN_004a6800(&DAT_007128b0);
  __ftol_result = __ftol();
  i = FUN_004463c0(param_1);
  *(undefined4 *)(&DAT_006f51a8 + i * 300) = __ftol_result;
  i = FUN_00558625();
  j = FUN_004463c0(param_1);
  *(int *)(&DAT_006f51ac + j * 300) = i % 3;
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  i = FUN_004463c0(param_1);
  i = i * 300;
  *(undefined4 *)(&DAT_006f5190 + i) = param_5;
  *(float *)(&DAT_006f5194 + i) = (float)(fVar3 * (float10)15.0);
  *(undefined4 *)(&DAT_006f5198 + i) = param_7;
  i = FUN_004463c0(param_1);
  *(undefined4 *)(&DAT_006f51b0 + i * 300) = 0x40400000;
  i = FUN_004463c0(param_1);
  *(undefined4 *)(&DAT_006f51b4 + i * 300) = 0x40400000;
  i = FUN_004463c0(param_1);
  j = FUN_004463f0(0);
  *(undefined4 *)(&DAT_006f50e0 + i * 300 + j * 0x20) = DAT_006fa2f0;
  return;
}


/* ==== 00446b60 FUN_00446b60 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00446b60(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_004a67f0(&DAT_007128b0);
  if (fVar1 - (float10)_DAT_006fa3cc < (float10)0.2) {
    return 0;
  }
  fVar1 = (float10)FUN_004a67f0(&DAT_007128b0);
  _DAT_006fa3cc = (float)fVar1;
  return 1;
}


/* ==== 00446bf0 FUN_00446bf0 ==== */

void FUN_00446bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  
  iVar1 = FUN_00446b60();
  if (iVar1 != 0) {
    FUN_00446c70(param_1,param_2,param_3,param_7,param_8,param_9);
    FUN_00446c70(param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


/* ==== 00446c70 FUN_00446c70 ==== */

void FUN_00446c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int i;
  float10 fVar2;
  
  if ((DAT_006fb904 != 0) &&
     (fVar2 = (float10)FUN_004a6800(&DAT_007128b0), (float10)12.0 <= (float10)1.0 / fVar2)) {
    i = 0;
    do {
      iVar1 = FUN_004469b0();
      if (iVar1 == -1) {
        return;
      }
      FUN_004469e0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6);
      i = i + 1;
    } while (i < 1);
  }
  return;
}


/* ==== 00446cf0 FUN_00446cf0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446cf0(void)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  _DAT_006fa310 = 0x10646464;
  _DAT_006fa330 = 0x10646464;
  _DAT_006fa350 = 0x10646464;
  _DAT_006fa370 = 0x10646464;
  DAT_006fa2e0 = 0;
  DAT_006fa2e4 = 0;
  _DAT_006fa2e8 = 0;
  DAT_006fa2f0 = 0x80a0a0c8;
  _DAT_006fa2f4 = 0;
  DAT_006fa300 = 0xbfc00000;
  DAT_006fa304 = 0xbfc00000;
  _DAT_006fa308 = 0;
  _DAT_006fa314 = 0;
  _DAT_006fa320 = 0xbfc00000;
  _DAT_006fa324 = 0x3fc00000;
  _DAT_006fa328 = 0;
  _DAT_006fa334 = 0;
  _DAT_006fa340 = 0x3fc00000;
  _DAT_006fa344 = 0x3fc00000;
  _DAT_006fa348 = 0;
  _DAT_006fa354 = 0;
  _DAT_006fa360 = 0x3fc00000;
  _DAT_006fa364 = 0xbfc00000;
  _DAT_006fa368 = 0;
  _DAT_006fa374 = 0;
  puVar1 = &DAT_006fa300;
  puVar2 = &DAT_006fa380;
  for (i = 8; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* ==== 00446dd0 FUN_00446dd0 ==== */

void __thiscall FUN_00446dd0(void)

{
  int iVar1;
  int iVar2;
  int k;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int j;
  undefined4 *puVar5;
  int i;
  
  i = 0;
  do {
    j = 0;
    puVar3 = &DAT_006fa2e0;
    do {
      iVar1 = FUN_004463c0(i);
      iVar2 = FUN_004463f0(j);
      puVar4 = puVar3 + 8;
      j = j + 1;
      puVar5 = (undefined4 *)(&DAT_006f50d0 + iVar1 * 300 + iVar2 * 0x20);
      for (k = 8; k != 0; k = k + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar3 = puVar4;
    } while ((int)puVar4 < 0x6fa3a0);
    j = FUN_004463c0(i);
    i = i + 1;
    *(undefined4 *)(&DAT_006f51b8 + j * 300) = 0;
  } while (i < 0x46);
  return;
}


/* ==== 00446e50 FUN_00446e50 ==== */

undefined4 FUN_00446e50(void)

{
  if (((((byte)DAT_006fb928 & 0x10) != 0) && (((byte)DAT_006fb92c & 2) != 0)) && (DAT_006fb940 != 0)
     ) {
    return 1;
  }
  return 0;
}


/* ==== 00446e80 init_clouds ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_clouds(void)

{
  int iVar1;
  float10 fVar2;
  
  FUN_004c3fa0(s_Entry_init_clouds_0059da94);
  if (DAT_006fb8d0 != 0) {
    iVar1 = FUN_00446e50();
    if (iVar1 == 0) {
      FUN_004c3fa0(s_Clouds_disabled__Hardware_doesn__0059daa8);
      DAT_006fb904 = 0;
      return;
    }
  }
  FUN_00446cf0();
  FUN_00446dd0();
  DAT_006f5088 = FUN_004b7400(&DAT_00712130,s_S_SFX_PCX_0059dae4);
  fVar2 = (float10)FUN_004a67f0(&DAT_007128b0);
  _DAT_006fa3cc = (float)fVar2;
  return;
}


/* ==== 00446fb0 FUN_00446fb0 ==== */

void FUN_00446fb0(void)

{
  int iVar1;
  int i;
  
  i = 0;
  do {
    iVar1 = FUN_004463c0(i);
    i = i + 1;
    *(undefined4 *)(&DAT_006f51b8 + iVar1 * 300) = 0;
  } while (i < 0x46);
  return;
}


/* ==== 00446fe0 FUN_00446fe0 ==== */

void FUN_00446fe0(void)

{
  int *piVar1;
  int i;
  undefined4 uVar2;
  int iVar3;
  int j;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  
  if (DAT_006fb904 != 0) {
    fVar6 = (float10)FUN_004a6800(&DAT_007128b0);
    i = DAT_006f5088;
    if ((float10)1.0 / fVar6 < (float10)10.0) {
      FUN_00446fb0();
      return;
    }
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar3 + 0x60) = DAT_006f5088;
    uVar2 = *(undefined4 *)(DAT_0073b1b0 + i * 0x48);
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x48) = uVar2;
    if (*(int *)(iVar3 + 0x5c) == 1) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
    }
    if (DAT_0073b4ec != DAT_006f5088) {
      DAT_0073b4ec = DAT_006f5088;
      i = (**(code **)(*DAT_0073b4b4 + 0x5c))
                    (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006f5088 * 0x48));
      if (i != 0) {
        uVar2 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x122,uVar2);
      }
    }
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,5);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,2);
    }
    i = 0;
    do {
      iVar3 = FUN_004463c0(i);
      if (*(int *)(&DAT_006f51b8 + iVar3 * 300) != 0) {
        FUN_004467d0(i);
      }
      i = i + 1;
    } while (i < 0x46);
    FUN_00558d5b(&DAT_006f5090,0x46,300,&LAB_00446f00);
    i = 0;
    do {
      iVar3 = FUN_004463c0(i);
      if (*(int *)(&DAT_006f51b8 + iVar3 * 300) != 0) {
        iVar3 = FUN_004463c0(i);
        puVar4 = (undefined4 *)(&DAT_006f5090 + iVar3 * 300);
        puVar5 = &DAT_0073b474;
        for (j = 0x10; j != 0; j = j + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
        if (iVar3 != 0) {
          uVar2 = FUN_004bb290(iVar3);
          FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                       s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar2);
        }
        piVar1 = DAT_0073b4b4;
        iVar3 = *DAT_0073b4b4;
        j = FUN_004463c0(i,6,1);
        iVar3 = (**(code **)(iVar3 + 0x74))(piVar1,6,2,&DAT_006f50d0 + j * 300);
        if (iVar3 != 0) {
          FUN_004c4150(s__s___d__DramPrimitive_error_0059db14,
                       s_C__Work_A2IV_Game_prog_gfx_wolk__0059daf0,0x301);
        }
        iVar3 = FUN_004463c0(i);
        *(int *)(&DAT_006f51ac + iVar3 * 300) = *(int *)(&DAT_006f51ac + iVar3 * 300) + 1;
        j = FUN_004463c0(i);
        if (*(int *)(&DAT_006f51a8 + j * 300) <= *(int *)(&DAT_006f51ac + iVar3 * 300)) {
          iVar3 = FUN_004463c0(i);
          *(undefined4 *)(&DAT_006f51b8 + iVar3 * 300) = 0;
        }
      }
      FUN_004467f0(i);
      i = i + 1;
    } while (i < 0x46);
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
  }
  return;
}


