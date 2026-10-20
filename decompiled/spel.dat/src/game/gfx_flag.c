/* spel.dat — game/gfx_flag.cpp: 18 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0043fc90 FUN_0043fc90 ==== */

void FUN_0043fc90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar2 = FUN_0043cd70(0xb);
  FUN_004ca110(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  FUN_004ca3d0(param_1,0,100,s__d_0059c0fc,DAT_006fba7c);
  return;
}


/* ==== 0043fd20 FUN_0043fd20 ==== */

void FUN_0043fd20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043fd30 FUN_0043fd30 ==== */

void FUN_0043fd30(void)

{
  FUN_005584e0(&LAB_0043fd40);
  return;
}


/* ==== 0043fd60 FUN_0043fd60 ==== */

void FUN_0043fd60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043fd70 FUN_0043fd70 ==== */

void FUN_0043fd70(void)

{
  FUN_005584e0(&LAB_0043fd80);
  return;
}


/* ==== 0043fdd0 FUN_0043fdd0 ==== */

void FUN_0043fdd0(undefined4 param_1)

{
  FUN_004a6800();
  DAT_006cbee8 = __ftol();
  if (DAT_006cbee8 <= DAT_006cbeec) {
    DAT_006cbeec = 0;
    DAT_006cbef0 = param_1;
    return;
  }
  DAT_006cbef0 = param_1;
  return;
}


/* ==== 0043fe20 FUN_0043fe20 ==== */

void FUN_0043fe20(void)

{
  int __ftol_result;
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int i;
  
  puVar2 = &DAT_006c9478;
  do {
    i = 0x11;
    puVar3 = puVar2;
    do {
      __ftol_result = __ftol();
      uVar1 = 0x100 - __ftol_result;
      if ((int)uVar1 < 0x80) {
        uVar1 = 0x80;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
      puVar3[-2] = (uint)(float)(extraout_ST0 + (float10)5.0);
      *puVar3 = ((uVar1 | 0x6400) << 8 | uVar1) << 8 | uVar1;
      __ftol_result = __ftol();
      uVar1 = 0x100 - __ftol_result;
      if ((int)uVar1 < 0x80) {
        uVar1 = 0x80;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
      puVar3[6] = (uint)(float)(extraout_ST0_00 + (float10)5.0);
      puVar2 = puVar3 + 0x10;
      i = i + -1;
      puVar3[8] = ((uVar1 | 0x6400) << 8 | uVar1) << 8 | uVar1;
      puVar3 = puVar2;
    } while (i != 0);
  } while ((int)puVar2 < 0x6cbef8);
  return;
}


/* ==== 0043ff60 FUN_0043ff60 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ff60(void)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178;
  puVar2 = (undefined4 *)(iVar1 + 0x14);
  puVar3 = &DAT_006c9428;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  _DAT_006c9458 = *(undefined4 *)(iVar1 + 8);
  _DAT_006c945c = *(undefined4 *)(iVar1 + 0xc);
  _DAT_006c9460 = *(undefined4 *)(iVar1 + 0x10);
  FUN_0043fe20();
  DAT_006cbeec = DAT_006cbeec + 1;
  if (DAT_006cbee8 <= DAT_006cbeec) {
    DAT_006cbeec = 0;
  }
  return;
}


/* ==== 0043fff0 FUN_0043fff0 ==== */

void FUN_0043fff0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int j;
  int i;
  
  i = 0;
  pfVar4 = (float *)&DAT_006c948c;
  do {
    fVar1 = (float)i;
    i = i + 1;
    j = 0;
    pfVar5 = pfVar4;
    do {
      fVar2 = (float)j;
      j = j + 1;
      pfVar4 = pfVar5 + 0x10;
      fVar3 = fVar2 * 0.625 - 5.0;
      pfVar5[-9] = fVar3;
      pfVar5[-8] = fVar1 * 0.75 - 3.75;
      pfVar5[-7] = 5.0;
      pfVar5[-5] = -NAN;
      pfVar5[-4] = 0.0;
      fVar2 = fVar2 * 0.06249997 * 0.0625 + 0.445313;
      pfVar5[-3] = fVar2;
      pfVar5[-2] = 0.046875 - fVar1 * 0.046875 * 0.1;
      pfVar5[-1] = fVar3;
      *pfVar5 = (float)i * 0.75 - 3.75;
      pfVar5[1] = 5.0;
      pfVar5[3] = -NAN;
      pfVar5[4] = 0.0;
      pfVar5[5] = fVar2;
      pfVar5[6] = 0.046875 - (float)i * 0.046875 * 0.1;
      pfVar5 = pfVar4;
    } while (j < 0x11);
  } while ((int)pfVar4 < 0x6cbf0c);
  return;
}


/* ==== 00440100 FUN_00440100 ==== */

void FUN_00440100(void)

{
  FUN_004a6800();
  DAT_006cbee8 = __ftol();
  DAT_006cbeec = 0;
  DAT_006cbef0 = 0;
  return;
}


/* ==== 00440130 init_finish_flag ==== */

void init_finish_flag(void)

{
  FUN_0043fff0();
  FUN_00440100();
  DAT_006c9424 = FUN_004b7400(s_S_SFX_PCX_0059c100);
  return;
}


/* ==== 00440150 FUN_00440150 ==== */

void FUN_00440150(void)

{
  return;
}


/* ==== 00440160 FUN_00440160 ==== */

void FUN_00440160(void)

{
  int iVar1;
  int i;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_40 [16];
  
  i = DAT_006c9424;
  if ((DAT_006fb908 != 0) && (DAT_006cbef0 != 0)) {
    iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar1 + 0x60) = DAT_006c9424;
    uVar2 = *(undefined4 *)(DAT_0073b1b0 + i * 0x48);
    *(undefined4 *)(iVar1 + 0x58) = 1;
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    if (*(int *)(iVar1 + 0x5c) == 1) {
      FUN_00440430();
    }
    if (DAT_0073b4ec != DAT_006c9424) {
      DAT_0073b4ec = DAT_006c9424;
      i = (**(code **)(*DAT_0073b4b4 + 0x5c))
                    (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006c9424 * 0x48));
      if (i != 0) {
        uVar2 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x122,uVar2);
      }
    }
    if ((DAT_006fb894 == 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,5);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,6);
    }
    if ((DAT_006fb900 == 2) && (DAT_006fb8d0 != 0)) {
      FUN_004bc200(0);
    }
    FUN_0043ff60();
    puVar3 = &DAT_006c9428;
    puVar4 = auStack_40;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = auStack_40;
    puVar4 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (i != 0) {
      uVar2 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar2);
    }
    puVar3 = &DAT_006c9468;
    do {
      i = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,5,2,puVar3,0x22,1);
      if (i != 0) {
        FUN_004c4150(s__s___d__DramPrimitive_error_0059c130,
                     s_C__Work_A2IV_Game_prog_gfx_flag__0059c10c,0x166);
      }
      puVar3 = puVar3 + 0x110;
    } while ((int)puVar3 < 0x6cbee8);
    if ((DAT_006fb894 == 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
    if ((DAT_006fb900 == 2) && (DAT_006fb8d0 != 0)) {
      FUN_004bc200(1);
    }
    if (DAT_0073b4fd != 1) {
      DAT_0073b4fd = 1;
      i = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,7,1);
      if (i != 0) {
        uVar2 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____ZBUFFER__error_setting_0059c150,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x177,uVar2);
      }
    }
  }
  return;
}


/* ==== 004403c0 FUN_004403c0 ==== */

void FUN_004403c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004403d0 FUN_004403d0 ==== */

void FUN_004403d0(void)

{
  FUN_005584e0(&LAB_004403e0);
  return;
}


/* ==== 00440400 FUN_00440400 ==== */

void FUN_00440400(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00440410 FUN_00440410 ==== */

void FUN_00440410(void)

{
  FUN_005584e0(&LAB_00440420);
  return;
}


/* ==== 00440430 FUN_00440430 ==== */

undefined4 FUN_00440430(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x58) != 0) {
    *(undefined4 *)(in_ECX + 0x58) = 0;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x54) + 0xc))(*(int **)(in_ECX + 0x54));
    return uVar1;
  }
  return 0;
}


