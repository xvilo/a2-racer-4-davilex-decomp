/* spel.dat — game/ev_cops.cpp: 35 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00439760 FUN_00439760 ==== */

void FUN_00439760(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00439770 FUN_00439770 ==== */

void FUN_00439770(void)

{
  FUN_005584e0(&LAB_00439780);
  return;
}


/* ==== 004397a0 FUN_004397a0 ==== */

void FUN_004397a0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004397b0 FUN_004397b0 ==== */

void FUN_004397b0(void)

{
  FUN_005584e0(&LAB_004397c0);
  return;
}


/* ==== 004397f0 FUN_004397f0 ==== */

void FUN_004397f0(void)

{
  int i;
  int j;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_9c [12];
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_40 [16];
  
  iVar1 = (&DAT_006c3518)[DAT_006c3568] * 0x178;
  j = *(int *)(DAT_00719b50 + 0xb8 + iVar1);
  puVar2 = (undefined4 *)(DAT_00719b50 + 0x14 + iVar1);
  puVar3 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (0 < j) {
    DAT_006c359c = j;
  }
  DAT_006c3594 = 0;
  DAT_006c3590 = 0;
  i = DAT_006c3534 * 0x178;
  DAT_006c3598 = 0;
  local_60 = 0x439880;
  FUN_004b1260();
  local_60 = 0x43988e;
  FUN_004b1310();
  puVar2 = local_40;
  puVar3 = auStack_9c;
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004b10b0();
  j = DAT_00719b50 + 8 + iVar1;
  local_68 = *(undefined4 *)(DAT_00719b50 + 8 + iVar1);
  local_64 = *(undefined4 *)(j + 4);
  local_60 = *(undefined4 *)(j + 8);
  uStack_6c = 0x4398d3;
  FUN_004b1060();
  *(undefined4 *)(i + 0x80 + DAT_00719b50) = 1;
  local_60 = 0x4398f1;
  FUN_004b1380();
  local_60 = 7;
  *(undefined4 *)(i + DAT_00719b50) = 0xffffffff;
  local_64 = 0x439905;
  FUN_00438410();
  return;
}


/* ==== 00439910 FUN_00439910 ==== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00439910(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int j;
  float *pfVar4;
  int k;
  float *pfVar5;
  undefined4 *puVar6;
  int i;
  float *pfVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float afStack_22c [5];
  undefined4 uStack_218;
  undefined1 *puStack_214;
  undefined1 *puStack_210;
  float *pfStack_20c;
  undefined1 *puStack_208;
  undefined4 *puStack_204;
  float *pfStack_200;
  float *pfStack_1fc;
  float *pfStack_1f8;
  float *pfStack_1f4;
  float *pfStack_1f0;
  float *pfStack_1ec;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184 [12];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 uStack_144;
  undefined1 local_140 [64];
  float local_100 [15];
  undefined1 auStack_c4 [4];
  float local_c0 [15];
  undefined1 auStack_84 [64];
  float afStack_44 [17];
  
  i = (&DAT_006c3518)[DAT_006c3568];
  pfStack_1ec = (float *)0x55;
  pfStack_1f0 = (float *)0x43992d;
  j = FUN_004c5e40();
  if (j != 0) {
    pfStack_1ec = (float *)0x55;
    pfStack_1f0 = (float *)0x43993f;
    j = FUN_004c5e40();
    while (j != 0) {
      pfStack_1ec = (float *)0x55;
      pfStack_1f0 = (float *)0x43994d;
      j = FUN_004c5e40();
    }
    DAT_00599c88 = DAT_00599c88 ^ 1;
    if (DAT_00599c88 == 0) {
      j = DAT_00719b50 + 8 + i * 0x178;
      DAT_006c3590 = *(float *)(DAT_00719b50 + 8 + i * 0x178);
      DAT_006c3594 = *(float *)(j + 4);
      DAT_006c3598 = *(float *)(j + 8);
    }
    else {
      j = DAT_00719b50 + 8 + i * 0x178;
      local_1b0 = *(float *)(DAT_00719b50 + 8 + i * 0x178);
      local_1ac = *(float *)(j + 4);
      local_1a8 = *(float *)(j + 8);
      DAT_006c3590 = local_1b0 -
                     *(float *)(DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8);
      j = DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8;
      DAT_006c3594 = local_1ac - *(float *)(j + 4);
      DAT_006c3598 = local_1a8 - *(float *)(j + 8);
      local_198 = DAT_006c3590;
      local_194 = DAT_006c3594;
      local_190 = DAT_006c3598;
    }
  }
  local_1cc = DAT_006c3590;
  i = i * 0x178;
  local_1a0 = DAT_006c3594;
  pfVar4 = (float *)(i + 0x14 + DAT_00719b50);
  pfVar5 = local_c0;
  for (j = 0x10; j != 0; j = j + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  local_19c = DAT_006c3598;
  pfStack_1ec = local_c0;
  pfStack_1f0 = &local_1bc;
  local_1a4 = DAT_006c3590;
  pfStack_1f4 = (float *)0x439a60;
  pfVar4 = (float *)FUN_004b3ff0();
  local_198 = *pfVar4;
  pfStack_1f4 = local_c0;
  local_194 = pfVar4[1];
  pfStack_1f8 = &local_1bc;
  local_190 = pfVar4[2];
  pfStack_1fc = (float *)0x439a86;
  pfVar4 = (float *)FUN_004b4030();
  local_1b0 = *pfVar4;
  pfStack_1fc = local_c0;
  local_1ac = pfVar4[1];
  pfStack_200 = &local_1bc;
  local_1a8 = pfVar4[2];
  puStack_204 = (undefined4 *)0x439aac;
  pfVar4 = (float *)FUN_004b4070();
  local_18c = *pfVar4;
  local_188 = pfVar4[1];
  local_1c8 = local_1a0;
  local_184[0] = pfVar4[2];
  pfStack_1ec = (float *)0x439ae1;
  FUN_004a6800();
  fVar2 = DAT_00599720;
  pfStack_1ec = (float *)0x439af7;
  j = __ftol();
  pfStack_1ec = (float *)0x49;
  pfStack_1f0 = (float *)0x439b00;
  k = FUN_004c5e40();
  if (k != 0) {
    local_1b8 = local_188 * fVar2;
    local_1b4 = local_184[0] * fVar2;
    local_1cc = local_1a4 + local_18c * fVar2;
    local_1c8 = local_1a0 + local_1b8;
    local_1d0 = local_19c + local_1b4;
  }
  pfStack_1ec = (float *)0x4a;
  pfStack_1f0 = (float *)0x439b6a;
  k = FUN_004c5e40();
  if (k != 0) {
    fVar1 = -fVar2;
    local_1bc = local_198 * fVar1;
    local_1b8 = local_194 * fVar1;
    local_1cc = local_1bc + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = fVar1 * local_190 + local_19c;
  }
  pfStack_1ec = (float *)0x4b;
  pfStack_1f0 = (float *)0x439bce;
  k = FUN_004c5e40();
  if (k != 0) {
    fVar1 = -fVar2;
    local_1bc = local_18c * fVar1;
    local_1b8 = local_188 * fVar1;
    local_1cc = local_1bc + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = fVar1 * local_184[0] + local_19c;
  }
  pfStack_1ec = (float *)0x4c;
  pfStack_1f0 = (float *)0x439c32;
  k = FUN_004c5e40();
  if (k != 0) {
    local_1b8 = local_194 * fVar2;
    local_1b4 = local_190 * fVar2;
    local_1cc = local_198 * fVar2 + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = local_1b4 + local_19c;
  }
  pfStack_1ec = (float *)0x41;
  pfStack_1f0 = (float *)0x439c98;
  k = FUN_004c5e40();
  if (k != 0) {
    local_1b8 = local_1ac * fVar2;
    local_1b4 = local_1a8 * fVar2;
    local_1cc = local_1b0 * fVar2 + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = local_1b4 + local_19c;
  }
  pfStack_1ec = (float *)0x5a;
  pfStack_1f0 = (float *)0x439cfe;
  k = FUN_004c5e40();
  if (k != 0) {
    fVar2 = -fVar2;
    local_1bc = local_1b0 * fVar2;
    local_1b8 = local_1ac * fVar2;
    local_1cc = local_1bc + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = fVar2 * local_1a8 + local_19c;
  }
  pfStack_1ec = (float *)0x21;
  pfStack_1f0 = (float *)0x439d62;
  k = FUN_004c5e40();
  if (k != 0) {
    pfStack_1f0 = (float *)local_140;
    pfStack_1f4 = (float *)0x439d77;
    pfStack_1ec = (float *)j;
    pfVar4 = (float *)FUN_004b3ea0();
    pfStack_1f4 = local_100;
    pfVar5 = local_100;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfStack_1f8 = local_c0;
    pfStack_1fc = (float *)local_140;
    pfStack_200 = (float *)0x439da4;
    pfVar5 = (float *)FUN_004b4110();
    pfVar4 = local_184;
    pfVar7 = pfVar5;
    for (k = 0x10; pfVar4 = pfVar4 + 1, k != 0; k = k + -1) {
      *pfVar4 = *pfVar7;
      pfVar7 = pfVar7 + 1;
    }
    pfVar4 = afStack_22c + 1;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
    }
    afStack_22c[0] = 6.209586e-39;
    FUN_004b10b0();
  }
  pfStack_1ec = (float *)0x22;
  pfStack_1f0 = (float *)0x439dd4;
  k = FUN_004c5e40();
  if (k != 0) {
    pfStack_1f0 = (float *)local_140;
    pfStack_1ec = (float *)-j;
    pfStack_1f4 = (float *)0x439ded;
    pfVar4 = (float *)FUN_004b3ea0();
    pfStack_1f4 = local_100;
    pfVar5 = local_100;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfStack_1f8 = local_c0;
    pfStack_1fc = (float *)local_140;
    pfStack_200 = (float *)0x439e1a;
    pfVar5 = (float *)FUN_004b4110();
    pfVar4 = local_184;
    pfVar7 = pfVar5;
    for (k = 0x10; pfVar4 = pfVar4 + 1, k != 0; k = k + -1) {
      *pfVar4 = *pfVar7;
      pfVar7 = pfVar7 + 1;
    }
    pfVar4 = afStack_22c + 1;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
    }
    afStack_22c[0] = 6.209752e-39;
    FUN_004b10b0();
  }
  pfStack_1ec = (float *)0x24;
  pfStack_1f0 = (float *)0x439e4a;
  k = FUN_004c5e40();
  if (k != 0) {
    pfStack_1f0 = (float *)local_140;
    pfStack_1f4 = (float *)0x439e5f;
    pfStack_1ec = (float *)j;
    pfVar4 = (float *)FUN_004b3f10();
    pfStack_1f8 = local_c0;
    pfVar5 = local_100;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfStack_1f4 = local_100;
    pfStack_1fc = (float *)local_140;
    pfStack_200 = (float *)0x439e8c;
    pfVar5 = (float *)FUN_004b4110();
    pfVar4 = local_184;
    pfVar7 = pfVar5;
    for (k = 0x10; pfVar4 = pfVar4 + 1, k != 0; k = k + -1) {
      *pfVar4 = *pfVar7;
      pfVar7 = pfVar7 + 1;
    }
    pfVar4 = afStack_22c + 1;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
    }
    afStack_22c[0] = 6.20991e-39;
    FUN_004b10b0();
  }
  pfStack_1ec = (float *)0x23;
  pfStack_1f0 = (float *)0x439ebb;
  k = FUN_004c5e40();
  if (k != 0) {
    pfStack_1f0 = (float *)local_140;
    pfStack_1ec = (float *)-j;
    pfStack_1f4 = (float *)0x439ed4;
    pfVar4 = (float *)FUN_004b3f10();
    pfStack_1f8 = local_c0;
    pfVar5 = local_100;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfStack_1f4 = local_100;
    pfStack_1fc = (float *)local_140;
    pfStack_200 = (float *)0x439f01;
    pfVar5 = (float *)FUN_004b4110();
    pfVar4 = local_184;
    pfVar7 = pfVar5;
    for (k = 0x10; pfVar4 = pfVar4 + 1, k != 0; k = k + -1) {
      *pfVar4 = *pfVar7;
      pfVar7 = pfVar7 + 1;
    }
    pfVar4 = afStack_22c + 1;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
    }
    afStack_22c[0] = 6.210074e-39;
    FUN_004b10b0();
  }
  pfStack_1ec = (float *)0x2d;
  pfStack_1f0 = (float *)0x439f30;
  k = FUN_004c5e40();
  if (k != 0) {
    pfStack_1f0 = (float *)local_140;
    pfStack_1f4 = (float *)0x439f45;
    pfStack_1ec = (float *)j;
    pfVar4 = (float *)FUN_004b3f80();
    pfStack_1f4 = local_100;
    pfVar5 = local_100;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfStack_1f8 = local_c0;
    pfStack_1fc = (float *)local_140;
    pfStack_200 = (float *)0x439f72;
    pfVar5 = (float *)FUN_004b4110();
    pfVar4 = local_184;
    pfVar7 = pfVar5;
    for (k = 0x10; pfVar4 = pfVar4 + 1, k != 0; k = k + -1) {
      *pfVar4 = *pfVar7;
      pfVar7 = pfVar7 + 1;
    }
    pfVar4 = afStack_22c + 1;
    for (k = 0x10; k != 0; k = k + -1) {
      *pfVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
    }
    afStack_22c[0] = 6.210232e-39;
    FUN_004b10b0();
  }
  pfStack_1ec = (float *)0x2e;
  pfStack_1f0 = (float *)0x439fa1;
  k = FUN_004c5e40();
  if (k != 0) {
    pfStack_1ec = (float *)-j;
    pfStack_1f0 = (float *)local_140;
    pfStack_1f4 = (float *)0x439fb8;
    pfVar4 = (float *)FUN_004b3f80();
    pfStack_1f4 = local_100;
    pfVar5 = local_100;
    for (j = 0x10; j != 0; j = j + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfStack_1f8 = local_c0;
    pfStack_1fc = (float *)local_140;
    pfStack_200 = (float *)0x439fe5;
    pfVar5 = (float *)FUN_004b4110();
    pfVar4 = local_184;
    pfVar7 = pfVar5;
    for (j = 0x10; pfVar4 = pfVar4 + 1, j != 0; j = j + -1) {
      *pfVar4 = *pfVar7;
      pfVar7 = pfVar7 + 1;
    }
    pfVar4 = afStack_22c + 1;
    for (j = 0x10; j != 0; j = j + -1) {
      *pfVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
    }
    afStack_22c[0] = 6.210395e-39;
    FUN_004b10b0();
  }
  pfStack_1ec = &local_1bc;
  pfStack_1f0 = (float *)0x43a018;
  FUN_00469fa0();
  pfStack_1f0 = (float *)0x43a01f;
  pfVar4 = (float *)FUN_004701d0();
  local_1b4 = *pfVar4;
  local_1b0 = pfVar4[1];
  local_1ac = pfVar4[2];
  pfStack_1f0 = (float *)0x43a03d;
  fVar9 = (float10)FUN_004a6800();
  local_1b4 = (float)(fVar9 * (float10)3000.0 * (float10)local_1b4);
  pfStack_1f0 = (float *)0x43a055;
  fVar9 = (float10)FUN_004a6800();
  if ((local_1b4 != 0.0) || (fVar9 * (float10)1400.0 * (float10)local_1b0 != (float10)0.0)) {
    pfStack_1f0 = (float *)0x43a086;
    pfStack_1f0 = (float *)__ftol();
    pfStack_1f4 = (float *)auStack_84;
    pfStack_1f8 = (float *)0x43a094;
    puVar6 = (undefined4 *)FUN_004b3ea0();
    puVar8 = &uStack_144;
    for (j = 0x10; j != 0; j = j + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    pfStack_1f8 = (float *)0x43a0af;
    pfStack_1f8 = (float *)__ftol();
    pfStack_1fc = (float *)auStack_84;
    pfStack_200 = (float *)0x43a0bd;
    pfVar4 = (float *)FUN_004b3f10();
    pfStack_200 = afStack_44;
    pfVar5 = afStack_44;
    for (j = 0x10; j != 0; j = j + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puStack_204 = &uStack_144;
    puStack_208 = auStack_84;
    pfStack_20c = (float *)0x43a0ea;
    pfVar4 = (float *)FUN_004b4110();
    pfStack_20c = local_184;
    pfVar5 = local_184;
    for (j = 0x10; j != 0; j = j + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puStack_210 = auStack_c4;
    puStack_214 = auStack_84;
    uStack_218 = 0x43a117;
    pfVar4 = (float *)FUN_004b4110();
    pfVar5 = pfVar4;
    pfVar7 = local_184;
    for (j = 0x10; j != 0; j = j + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    pfVar5 = afStack_22c;
    for (j = 0x10; j != 0; j = j + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    FUN_004b10b0();
  }
  DAT_006c3590 = local_1d0;
  DAT_006c3594 = local_1cc;
  DAT_006c3598 = local_1c8;
  if (DAT_00599c88 == 0) {
    pfStack_1f8 = (float *)local_1d0;
    pfStack_1f4 = (float *)local_1cc;
    pfStack_1f0 = (float *)local_1c8;
  }
  else {
    pfStack_1f8 = (float *)(local_1d0 +
                           *(float *)(DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8));
    j = DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8;
    pfStack_1f4 = (float *)(local_1cc + *(float *)(j + 4));
    pfStack_1f0 = (float *)(local_1c8 + *(float *)(j + 8));
  }
  pfStack_1fc = (float *)0x43a1e9;
  FUN_004b1060();
  pfStack_1f0 = (float *)0x52;
  pfStack_1f4 = (float *)0x43a1f0;
  j = FUN_004c5e40();
  if (j != 0) {
    pfStack_1f0 = (float *)auStack_84;
    pfStack_1f4 = (float *)0x43a208;
    pfVar4 = (float *)FUN_00437b10();
    pfVar5 = local_184;
    for (j = 0x10; fVar3 = fStack_14c, fVar1 = fStack_150, fVar2 = fStack_154, j != 0; j = j + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    fStack_154 = 0.0;
    fStack_150 = 0.0;
    fStack_14c = 0.0;
    if (DAT_00599c88 == 0) {
      DAT_006c3590 = fVar2;
      DAT_006c3594 = fVar1;
      DAT_006c3598 = fVar3;
    }
    else {
      DAT_006c3590 = fVar2 - *(float *)(DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8);
      j = DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8;
      DAT_006c3594 = fVar1 - *(float *)(j + 4);
      DAT_006c3598 = fVar3 - *(float *)(j + 8);
    }
    pfVar4 = local_184;
    pfVar5 = afStack_22c;
    for (j = 0x10; j != 0; j = j + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    FUN_004b10b0();
    pfStack_1f8 = (float *)fVar2;
    pfStack_1f4 = (float *)fVar1;
    pfStack_1f0 = (float *)fVar3;
    pfStack_1fc = (float *)0x43a320;
    FUN_004b1060();
  }
  pfStack_1f0 = (float *)0x54;
  pfStack_1f4 = (float *)0x43a327;
  j = FUN_004c5e40();
  if (j != 0) {
    pfVar4 = (float *)(i + 0x14 + DAT_00719b50);
    pfVar5 = local_184;
    for (j = 0x10; j != 0; j = j + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puVar6 = (undefined4 *)(i + 8 + DAT_00719b50);
    fStack_154 = (float)*puVar6;
    fStack_14c = (float)puVar6[2];
    fStack_150 = (float)puVar6[1];
    pfVar4 = local_184;
    pfVar5 = afStack_22c;
    for (i = 0x10; i != 0; i = i + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    FUN_00437d60();
  }
  return;
}


/* ==== 0043a3e0 FUN_0043a3e0 ==== */

void FUN_0043a3e0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043a3f0 FUN_0043a3f0 ==== */

void FUN_0043a3f0(void)

{
  FUN_005584e0(&LAB_0043a400);
  return;
}


/* ==== 0043a420 FUN_0043a420 ==== */

void FUN_0043a420(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043a430 FUN_0043a430 ==== */

void FUN_0043a430(void)

{
  FUN_005584e0(&LAB_0043a440);
  return;
}


/* ==== 0043a4d0 FUN_0043a4d0 ==== */

void FUN_0043a4d0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043a4e0 FUN_0043a4e0 ==== */

void FUN_0043a4e0(void)

{
  FUN_005584e0(&LAB_0043a4f0);
  return;
}


/* ==== 0043a510 FUN_0043a510 ==== */

void FUN_0043a510(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043a520 FUN_0043a520 ==== */

void FUN_0043a520(void)

{
  FUN_005584e0(&LAB_0043a530);
  return;
}


/* ==== 0043a540 FUN_0043a540 ==== */

void FUN_0043a540(void)

{
  if (DAT_006c35c0 == 1) {
    DAT_0059becc = 0x31;
  }
  else if (DAT_006c35c0 == 2) {
    DAT_0059becc = 0x32;
    return;
  }
  return;
}


/* ==== 0043a5b0 FUN_0043a5b0 ==== */

undefined4 FUN_0043a5b0(void)

{
  return 0xffffffff;
}


/* ==== 0043a5c0 FUN_0043a5c0 ==== */

void FUN_0043a5c0(void)

{
  FUN_0041be70(3,0,0xffffffff);
  return;
}


/* ==== 0043a5e0 FUN_0043a5e0 ==== */

undefined4 FUN_0043a5e0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_004475d0();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (DAT_006c35c0 == 1) {
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    uVar3 = *(undefined4 *)(&DAT_00599cd0 + uVar2 * 0x44);
  }
  else if (DAT_006c35c0 == 2) {
    FUN_00558625();
    uVar3 = DAT_00599d58;
  }
  else {
    if (DAT_006c35c0 != 3) {
      FUN_004c4150(s__s___d__Illegal_value_for_g_time_0059a028,
                   s_C__Work_A2IV_Game_prog_ev_cops_c_0059a004,0x107,DAT_006c35c0);
      return 0xffffffff;
    }
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    uVar3 = *(undefined4 *)(&DAT_00599da0 + uVar2 * 0x44);
  }
  uVar4 = 0;
  FUN_0049eb50(uVar3);
  FUN_0049e550(uVar4);
  return uVar3;
}


/* ==== 0043a690 FUN_0043a690 ==== */

void FUN_0043a690(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_18 = 0.0;
  local_14 = 20.0;
  local_10 = 0.0;
  iVar5 = DAT_006c3530 * 0x178;
  FUN_004b1290(*(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50),0,0x41a00000,0);
  iVar2 = FUN_004072b0(DAT_006fba58);
  if (iVar2 == -1) {
    iVar1 = *(int *)(DAT_00715254 + 4 + *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50) * 4);
    iVar2 = DAT_00715f00 + 0x34 + iVar1 * 0x994;
    fVar6 = *(float *)(DAT_00715f00 + 0x34 + iVar1 * 0x994);
    fVar7 = *(float *)(iVar2 + 8);
    local_8 = *(float *)(iVar2 + 4) + 20.0;
  }
  else {
    iVar4 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
    iVar1 = *(int *)(iVar2 * 0xf0 + 0x24 + DAT_00715e50);
    local_24 = *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8) - *(float *)(iVar4 + 0x50);
    iVar1 = DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8;
    local_20 = *(float *)(iVar1 + 4) - *(float *)(iVar4 + 0x54);
    local_1c = *(float *)(iVar1 + 8) - *(float *)(iVar4 + 0x58);
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
    fVar8 = (float10)FUN_0041e120(&local_24);
    fVar8 = SQRT(fVar8);
    pfVar3 = (float *)FUN_004066c0((float)((float10)local_24 / fVar8),
                                   (float)((float10)local_20 / fVar8),
                                   (float)((float10)local_1c / fVar8));
    local_24 = *pfVar3;
    local_20 = pfVar3[1];
    local_1c = pfVar3[2];
    iVar2 = *(int *)(iVar2 * 0xf0 + 0x24 + DAT_00715e50);
    local_4 = local_1c * 40.0;
    fVar6 = local_24 * 40.0 + *(float *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8);
    iVar2 = DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8;
    local_14 = local_20 * 40.0 + *(float *)(iVar2 + 4);
    fVar7 = local_4 + *(float *)(iVar2 + 8);
    local_8 = local_14 + 30.0;
    local_18 = fVar6;
    local_10 = fVar7;
  }
  if (*(int *)(DAT_00719b50 + 0x74 + iVar5) != 0) {
    FUN_004b1260();
  }
  FUN_004b1060(fVar6,local_8,fVar7);
  FUN_004b1380();
  FUN_00438410(6);
  return;
}


/* ==== 0043aa20 FUN_0043aa20 ==== */

void FUN_0043aa20(int param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    do {
      iVar1 = FUN_00450900(param_1);
      *(int *)(param_1 + 0x40) = iVar1;
      if (iVar1 == -1) {
        FUN_004c4150(s__s___d__Static_sample__s_not_fou_0059a0d4,
                     s_C__Work_A2IV_Game_prog_ev_cops_c_0059a0b0,0x1d7,param_1);
      }
      param_1 = param_1 + 0x44;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* ==== 0043aa70 FUN_0043aa70 ==== */

void FUN_0043aa70(void)

{
  FUN_0043aa20(s_ARREST_1A_00599c90,2);
  FUN_0043aa20(s_ARREST_2A_00599d18,1);
  FUN_0043aa20(s_ARREST_3A_00599d60,2);
  FUN_0043aa20(DAT_006c35c4,0);
  FUN_0043aa20(DAT_006c35c8,0);
  return;
}


/* ==== 0043ab00 FUN_0043ab00 ==== */

void FUN_0043ab00(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043ab10 FUN_0043ab10 ==== */

void FUN_0043ab10(void)

{
  FUN_005584e0(&LAB_0043ab20);
  return;
}


/* ==== 0043ab40 FUN_0043ab40 ==== */

void FUN_0043ab40(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043ab50 FUN_0043ab50 ==== */

void FUN_0043ab50(void)

{
  FUN_005584e0(&LAB_0043ab60);
  return;
}


/* ==== 0043ada0 FUN_0043ada0 ==== */

void FUN_0043ada0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043adb0 FUN_0043adb0 ==== */

void FUN_0043adb0(void)

{
  FUN_005584e0(&LAB_0043adc0);
  return;
}


/* ==== 0043ade0 FUN_0043ade0 ==== */

void FUN_0043ade0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043adf0 FUN_0043adf0 ==== */

void FUN_0043adf0(void)

{
  FUN_005584e0(&LAB_0043ae00);
  return;
}


/* ==== 0043b200 FUN_0043b200 ==== */

void FUN_0043b200(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043b210 FUN_0043b210 ==== */

void FUN_0043b210(void)

{
  FUN_005584e0(&LAB_0043b220);
  return;
}


/* ==== 0043b240 FUN_0043b240 ==== */

void FUN_0043b240(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043b250 FUN_0043b250 ==== */

void FUN_0043b250(void)

{
  FUN_005584e0(&LAB_0043b260);
  return;
}


/* ==== 0043b470 FUN_0043b470 ==== */

void FUN_0043b470(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043b480 FUN_0043b480 ==== */

void FUN_0043b480(void)

{
  FUN_005584e0(&LAB_0043b490);
  return;
}


