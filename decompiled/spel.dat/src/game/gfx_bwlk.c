/* spel.dat — game/gfx_bwlk.cpp: 23 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0043d6e0 FUN_0043d6e0 ==== */

void FUN_0043d6e0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043d6f0 FUN_0043d6f0 ==== */

void FUN_0043d6f0(void)

{
  FUN_005584e0(&LAB_0043d700);
  return;
}


/* ==== 0043d720 FUN_0043d720 ==== */

void FUN_0043d720(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043d730 FUN_0043d730 ==== */

void FUN_0043d730(void)

{
  FUN_005584e0(&LAB_0043d740);
  return;
}


/* ==== 0043d7b0 FUN_0043d7b0 ==== */

void FUN_0043d7b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int i;
  
  iVar3 = (int)(&DAT_006c4324)[param_1 * 0x4b] % 5;
  if (2 < iVar3) {
    iVar3 = 4 - iVar3;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (2 < iVar3) {
    iVar3 = 2;
  }
  puVar2 = (undefined4 *)(&DAT_006c4264 + param_1 * 300);
  i = 6;
  puVar1 = &DAT_0059bdb4 + iVar3 * 0xc;
  do {
    puVar2[-1] = puVar1[-1];
    *puVar2 = *puVar1;
    puVar2 = puVar2 + 8;
    i = i + -1;
    puVar1 = puVar1 + 2;
  } while (i != 0);
  return;
}


/* ==== 0043d820 FUN_0043d820 ==== */

void FUN_0043d820(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int i;
  float *pfVar6;
  float *pfVar7;
  
  iVar5 = param_1 * 300;
  fVar1 = 47.0 / (float)(int)(&DAT_006c4320)[param_1 * 0x4b] + *(float *)(&DAT_006c4328 + iVar5);
  fVar3 = 47.0 / (float)(int)(&DAT_006c4320)[param_1 * 0x4b] + *(float *)(&DAT_006c432c + iVar5);
  fVar2 = fVar1 * 0.5;
  *(float *)(&DAT_006c4268 + iVar5) = -fVar2;
  fVar4 = fVar3 * 0.5;
  *(float *)(&DAT_006c426c + iVar5) = -fVar4;
  *(float *)(&DAT_006c4288 + iVar5) = -fVar2;
  *(float *)(&DAT_006c428c + iVar5) = fVar4;
  *(float *)(&DAT_006c42a8 + iVar5) = fVar2;
  *(float *)(&DAT_006c42ac + iVar5) = fVar4;
  *(float *)(&DAT_006c42c8 + iVar5) = fVar2;
  *(float *)(&DAT_006c42cc + iVar5) = -fVar4;
  pfVar6 = (float *)(&DAT_006c4268 + iVar5);
  pfVar7 = (float *)(&DAT_006c42e8 + iVar5);
  for (i = 8; i != 0; i = i + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  *(float *)(&DAT_006c4328 + iVar5) = fVar1;
  *(float *)(&DAT_006c432c + iVar5) = fVar3;
  return;
}


/* ==== 0043d8f0 FUN_0043d8f0 ==== */

void FUN_0043d8f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (DAT_006c4120 >> 0x18) / (uint)(&DAT_006c4320)[param_1 * 0x4b];
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  uVar1 = *(uint *)(&DAT_006c4258 + param_1 * 300);
  iVar3 = (uVar1 >> 0x18) - uVar2;
  if (iVar3 == 0) {
    iVar3 = 1;
    (&DAT_006c4330)[param_1 * 0x4b] = 0;
  }
  *(uint *)(&DAT_006c4258 + param_1 * 300) = uVar1 & 0xffffff | iVar3 << 0x18;
  return;
}


/* ==== 0043d950 FUN_0043d950 ==== */

void FUN_0043d950(undefined4 param_1)

{
  FUN_0043d7b0(param_1);
  FUN_0043d820(param_1);
  FUN_0043d8f0(param_1);
  return;
}


/* ==== 0043d970 FUN_0043d970 ==== */

void FUN_0043d970(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int i;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  
  iVar8 = param_1 * 300;
  pfVar1 = (float *)(&DAT_006c4308 + iVar8);
  fVar5 = *pfVar1;
  fVar6 = *(float *)(&DAT_006c430c + iVar8);
  fVar7 = *(float *)(&DAT_006c4310 + iVar8);
  fVar11 = (float10)FUN_004a6800();
  fVar11 = fVar11 * (float10)10.0;
  fVar12 = (float10)FUN_004a6800();
  fVar12 = fVar12 * (float10)20.0;
  if ((float10)0.99 < fVar12) {
    fVar12 = (float10)0.99;
  }
  *pfVar1 = (float)(fVar12 * (float10)*pfVar1);
  *(float *)(&DAT_006c430c + iVar8) = (float)(fVar12 * (float10)*(float *)(&DAT_006c430c + iVar8));
  *(float *)(&DAT_006c4310 + iVar8) = (float)(fVar12 * (float10)*(float *)(&DAT_006c4310 + iVar8));
  fVar2 = *(float *)(&DAT_006c4238 + iVar8);
  fVar3 = *(float *)(&DAT_006c423c + iVar8);
  fVar4 = *(float *)(&DAT_006c4240 + iVar8);
  puVar9 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar10 = &DAT_006c4208 + param_1 * 0x4b;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(float *)(&DAT_006c4238 + iVar8) = (float)(fVar11 * (float10)fVar5) + fVar2;
  *(float *)(&DAT_006c423c + iVar8) = (float)(fVar11 * (float10)fVar6) + fVar3;
  *(float *)(&DAT_006c4240 + iVar8) = (float)(fVar11 * (float10)fVar7) + fVar4;
  return;
}


/* ==== 0043da80 FUN_0043da80 ==== */

int FUN_0043da80(void)

{
  int i;
  int *piVar1;
  
  i = 0;
  piVar1 = &DAT_006c4330;
  do {
    if (*piVar1 == 0) {
      return i;
    }
    piVar1 = piVar1 + 0x4b;
    i = i + 1;
  } while ((int)piVar1 < 0x6c9538);
  return -1;
}


/* ==== 0043daa0 FUN_0043daa0 ==== */

void FUN_0043daa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 __ftol_result;
  int i;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar3 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  iVar1 = param_1 * 300;
  puVar2 = local_40;
  puVar3 = &DAT_006c4208 + param_1 * 0x4b;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (&DAT_006c4330)[param_1 * 0x4b] = 1;
  FUN_004a6800();
  __ftol_result = __ftol();
  (&DAT_006c4320)[param_1 * 0x4b] = __ftol_result;
  i = FUN_00558625();
  (&DAT_006c4324)[param_1 * 0x4b] = i % 3;
  fVar4 = (float10)FUN_004a6800();
  *(undefined4 *)(&DAT_006c4308 + iVar1) = param_5;
  *(float *)(&DAT_006c430c + iVar1) = (float)(fVar4 * (float10)15.0);
  *(undefined4 *)(&DAT_006c4310 + iVar1) = param_7;
  __ftol_result = DAT_006c4120;
  *(undefined4 *)(&DAT_006c4328 + iVar1) = 0x40400000;
  *(undefined4 *)(&DAT_006c432c + iVar1) = 0x40400000;
  *(undefined4 *)(&DAT_006c4258 + iVar1) = __ftol_result;
  return;
}


/* ==== 0043dba0 FUN_0043dba0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043dba0(void)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  DAT_006c4130 = 0xbfc00000;
  _DAT_006c4140 = 0x323232;
  _DAT_006c4160 = 0x323232;
  _DAT_006c4180 = 0x323232;
  _DAT_006c41a0 = 0x323232;
  DAT_006c4134 = 0xbfc00000;
  _DAT_006c4154 = 0x3fc00000;
  _DAT_006c4174 = 0x3fc00000;
  _DAT_006c4150 = 0xbfc00000;
  DAT_006c4110 = 0;
  _DAT_006c4170 = 0x3fc00000;
  _DAT_006c4190 = 0x3fc00000;
  DAT_006c4114 = 0;
  _DAT_006c4118 = 0;
  DAT_006c4120 = 0x80aaaaaa;
  _DAT_006c4124 = 0;
  _DAT_006c4138 = 0;
  _DAT_006c4144 = 0;
  _DAT_006c4158 = 0;
  _DAT_006c4164 = 0;
  _DAT_006c4178 = 0;
  _DAT_006c4184 = 0;
  _DAT_006c4194 = 0xbfc00000;
  _DAT_006c4198 = 0;
  _DAT_006c41a4 = 0;
  puVar1 = &DAT_006c4130;
  puVar2 = &DAT_006c41b0;
  for (i = 8; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* ==== 0043dd40 FUN_0043dd40 ==== */

void FUN_0043dd40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0043dba0();
  DAT_006c4200 = FUN_004b7400(s_L1RACER3_PCX_0059be40);
  puVar1 = &DAT_006c4330;
  do {
    puVar2 = puVar1 + 0x4b;
    puVar3 = &DAT_006c4110;
    puVar4 = puVar1 + -0x3a;
    for (i = 0x30; i != 0; i = i + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *puVar1 = 0;
    puVar1 = puVar2;
  } while ((int)puVar2 < 0x6c9538);
  return;
}


/* ==== 0043dd90 FUN_0043dd90 ==== */

void FUN_0043dd90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  float10 fVar2;
  
  if (DAT_006fb904 != 0) {
    fVar2 = (float10)FUN_004a6800();
    if ((float10)12.0 < (float10)1.0 / fVar2) {
      iVar1 = FUN_0043da80();
      if (iVar1 != -1) {
        FUN_0043daa0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}


/* ==== 0043de00 FUN_0043de00 ==== */

void FUN_0043de00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int i;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  int j;
  
  if (DAT_006fb904 != 0) {
    fVar7 = (float10)FUN_004a6800();
    i = DAT_006c4200;
    if ((float10)1.0 / fVar7 < (float10)10.0) {
      puVar2 = &DAT_006c4330;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 0x4b;
      } while ((int)puVar2 < 0x6c9538);
      return;
    }
    iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar1 + 0x60) = DAT_006c4200;
    uVar3 = *(undefined4 *)(DAT_0073b1b0 + i * 0x48);
    *(undefined4 *)(iVar1 + 0x58) = 1;
    *(undefined4 *)(iVar1 + 0x48) = uVar3;
    if (*(int *)(iVar1 + 0x5c) == 1) {
      *(undefined4 *)(iVar1 + 0x58) = 0;
      (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
    }
    if (DAT_0073b4ec != DAT_006c4200) {
      DAT_0073b4ec = DAT_006c4200;
      i = (**(code **)(*DAT_0073b4b4 + 0x5c))
                    (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006c4200 * 0x48));
      if (i != 0) {
        uVar3 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x122,uVar3);
      }
    }
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,5);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,6);
    }
    i = 0;
    piVar4 = &DAT_006c4330;
    do {
      if (*piVar4 != 0) {
        FUN_0043d950(i);
      }
      piVar4 = piVar4 + 0x4b;
      i = i + 1;
    } while ((int)piVar4 < 0x6c9538);
    FUN_00558d5b(&DAT_006c4208,0x46,300,&LAB_0043dc90);
    j = 0;
    piVar4 = &DAT_006c4324;
    do {
      if (piVar4[3] != 0) {
        piVar5 = piVar4 + -0x47;
        piVar6 = &DAT_0073b474;
        for (i = 0x10; i != 0; i = i + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
        if (i != 0) {
          uVar3 = FUN_004bb290(i);
          FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                       s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar3);
        }
        i = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,6,2,piVar4 + -0x37,6,1);
        if (i != 0) {
          FUN_004c4150(s__s___d__DramPrimitive_error_0059be74,
                       s_C__Work_A2IV_Game_prog_gfx_bwlk__0059be50,0x26a);
        }
        i = *piVar4;
        *piVar4 = i + 1;
        if (piVar4[-1] <= i + 1) {
          piVar4[3] = 0;
        }
        if (piVar4[3] != 0) {
          FUN_0043d970(j);
        }
      }
      piVar4 = piVar4 + 0x4b;
      j = j + 1;
    } while ((int)piVar4 < 0x6c952c);
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
  }
  return;
}


/* ==== 0043e0a0 FUN_0043e0a0 ==== */

void FUN_0043e0a0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043e0b0 FUN_0043e0b0 ==== */

void FUN_0043e0b0(void)

{
  FUN_005584e0(&LAB_0043e0c0);
  return;
}


/* ==== 0043e0e0 FUN_0043e0e0 ==== */

void FUN_0043e0e0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043e0f0 FUN_0043e0f0 ==== */

void FUN_0043e0f0(void)

{
  FUN_005584e0(&LAB_0043e100);
  return;
}


/* ==== 0043e110 FUN_0043e110 ==== */

void FUN_0043e110(void)

{
  return;
}


/* ==== 0043e120 FUN_0043e120 ==== */

void FUN_0043e120(void)

{
  return;
}


/* ==== 0043e130 FUN_0043e130 ==== */

void FUN_0043e130(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00440cb0(param_1,0x3e,0,0,0,0);
  FUN_00440cb0(param_1,0x40,DAT_006fbaa4,1,0,0);
  iVar1 = FUN_00458b90(0x11);
  iVar1 = FUN_0043cda0(DAT_006c4098,0,0,0,&DAT_006fd14c + iVar1 * 0x100);
  iVar2 = FUN_0043cd70(0xe);
  FUN_00440b60(param_1,0x3f,s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  iVar1 = FUN_0043cda0(DAT_006c4098,0,0,0,s__02d__02d__d_0059bed4,(DAT_006fbe40 / 1000) / 0x3c,
                       (DAT_006fbe40 / 1000) % 0x3c,(DAT_006fbe40 / 100) % 10);
  iVar2 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x41,s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  iVar1 = FUN_0043cda0(DAT_006c4098,0,0,0,s__02d__02d__d_0059bee4,(DAT_006fbe44 / 1000) / 0x3c,
                       (DAT_006fbe44 / 1000) % 0x3c,(DAT_006fbe44 / 100) % 10);
  iVar2 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x42,s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  iVar1 = FUN_0043cda0(DAT_006c4098,0,0,0,s__02d__02d__d_0059bef4,(DAT_006fbaa0 / 1000) / 0x3c,
                       (DAT_006fbaa0 / 1000) % 0x3c,(DAT_006fbaa0 / 100) % 10);
  iVar2 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x43,s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  iVar1 = FUN_004502d0();
  iVar2 = FUN_004501c0();
  iVar5 = DAT_006fbdec * 2000;
  iVar3 = FUN_0043cda0(DAT_006c4098,0,0,0,&PTR_DAT_0059bf04,iVar1);
  iVar4 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x44,s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94);
  iVar3 = FUN_0043cda0(DAT_006c4098,0,0,0,&PTR_DAT_0059bf08,iVar2);
  iVar4 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x45,s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94);
  iVar3 = FUN_0043cda0(DAT_006c4098,0,0,0,&PTR_DAT_0059bf0c,iVar5);
  iVar4 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x46,s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94);
  iVar1 = FUN_0043cda0(DAT_006c4098,0,0,0,&PTR_DAT_0059bf10,iVar5 + iVar2 + iVar1);
  iVar2 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x47,s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  return;
}


/* ==== 0043e4c0 FUN_0043e4c0 ==== */

void FUN_0043e4c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00440cb0(param_1,0x48,0,0,0,0);
  iVar1 = FUN_00458b90(0x11);
  iVar1 = FUN_0043cda0(DAT_006c4098,0,0,0,&DAT_006fd14c + iVar1 * 0x100);
  iVar2 = FUN_0043cd70(0xe);
  FUN_00440b60(param_1,0x3f,s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  FUN_00440cb0(param_1,0x40,DAT_006fbaa4,1,0,0);
  iVar1 = FUN_0043cda0(DAT_006c4098,0,0,0,s__02d__02d__d_0059bf14,(DAT_006fbaa0 / 1000) / 0x3c,
                       (DAT_006fbaa0 / 1000) % 0x3c,(DAT_006fbaa0 / 100) % 10);
  iVar2 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x52,s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  iVar1 = FUN_004502d0();
  iVar2 = FUN_004501c0();
  iVar5 = DAT_006fbdec * 2000;
  iVar3 = FUN_0043cda0(DAT_006c4098,0,0,0,&PTR_DAT_0059bf24,iVar1);
  iVar4 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x4e,s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94);
  iVar3 = FUN_0043cda0(DAT_006c4098,0,0,0,&PTR_DAT_0059bf28,iVar2);
  iVar4 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x4f,s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94);
  iVar3 = FUN_0043cda0(DAT_006c4098,0,0,0,&PTR_DAT_0059bf2c,iVar5);
  iVar4 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x50,s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar4) * 0x94);
  iVar1 = FUN_0043cda0(DAT_006c4098,0,0,0,&PTR_DAT_0059bf30,iVar5 + iVar2 + iVar1);
  iVar2 = FUN_0043cd70(0xf);
  FUN_00440b60(param_1,0x51,s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
  return;
}


