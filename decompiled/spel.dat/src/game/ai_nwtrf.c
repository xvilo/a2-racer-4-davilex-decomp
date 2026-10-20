/* spel.dat — game/ai_nwtrf.cpp: 51 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00413000 FUN_00413000 ==== */

void FUN_00413000(void)

{
  FUN_0040d5d0(&DAT_005ce1e8,0,0,0x1c,1,&LAB_00405650);
  FUN_0040d5d0(&DAT_005ce1e8,1,10,0x1c,1,&LAB_00405650);
  FUN_0040d5d0(&DAT_005ce1e8,2,0x14,0x1c,1,&LAB_00405650);
  FUN_0040d5d0(&DAT_005ce1e8,3,0x15,0x1c,1,&LAB_00405650);
  FUN_0040d5d0(&DAT_005ce1e8,4,0x16,0x1c,1,&LAB_00405650);
  FUN_0040d5d0(&DAT_005ce1e8,5,0x17,0x1c,1,&LAB_00405650);
  FUN_0040d5d0(&DAT_005ce1e8,6,0x1c,0,0,&LAB_00405650);
  FUN_0040d5d0(&DAT_005ce1e8,7,0,10,1,FUN_00404c90);
  FUN_0040d5d0(&DAT_005ce1e8,8,10,0,1,FUN_00404eb0);
  FUN_0040d5d0(&DAT_005ce1e8,9,0,0x14,1,FUN_00404f30);
  FUN_0040d5d0(&DAT_005ce1e8,10,0x14,0,0,FUN_00405190);
  FUN_0040d5d0(&DAT_005ce1e8,0xb,0,0x15,2,FUN_00404f30);
  FUN_0040d5d0(&DAT_005ce1e8,0xc,0x15,0,0,FUN_00405190);
  FUN_0040d5d0(&DAT_005ce1e8,0xd,0,0x16,3,FUN_00404f30);
  FUN_0040d5d0(&DAT_005ce1e8,0xe,0x16,0,0,FUN_00405190);
  FUN_0040d5d0(&DAT_005ce1e8,0xf,0,0x17,4,FUN_00404f30);
  FUN_0040d5d0(&DAT_005ce1e8,0x10,0x17,0,0,FUN_00405190);
  FUN_0040d5d0(&DAT_005ce1e8,0x11,0,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005ce1e8,0x12,10,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005ce1e8,0x13,0x14,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005ce1e8,0x14,0x15,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005ce1e8,0x15,0x16,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005ce1e8,0x16,0x17,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005ce1e8,0x17,0x1c,0x1b,1,&LAB_00405610);
  return;
}


/* ==== 00413250 FUN_00413250 ==== */

void FUN_00413250(void)

{
  FUN_0040d5d0(&DAT_005cdde0,0,0x18,10,1,FUN_00405500);
  FUN_0040d5d0(&DAT_005cdde0,1,10,0x18,1,FUN_00404eb0);
  FUN_0040d5d0(&DAT_005cdde0,2,0x18,0x12,1,FUN_004053a0);
  FUN_0040d5d0(&DAT_005cdde0,3,0x12,0x18,0,FUN_004053a0);
  FUN_0040d5d0(&DAT_005cdde0,4,0x18,0xf,1,FUN_00405430);
  FUN_0040d5d0(&DAT_005cdde0,5,0x19,8,1,FUN_00405480);
  FUN_0040d5d0(&DAT_005cdde0,6,0x18,0xf,1,FUN_00405590);
  FUN_0040d5d0(&DAT_005cdde0,7,0xf,0x19,1,&LAB_00404ea0);
  FUN_0040d5d0(&DAT_005cdde0,8,0x18,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005cdde0,9,10,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005cdde0,10,0x12,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005cdde0,0xb,0x19,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005cdde0,0xc,0x1a,0x1b,1,&LAB_00405610);
  FUN_0040d5d0(&DAT_005cdde0,0xd,0xf,0x1b,1,&LAB_00405610);
  return;
}


/* ==== 004133b0 FUN_004133b0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004133b0(void)

{
  undefined4 this_val_2;
  undefined4 *this_val;
  int i;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  i = 0;
  if (0 < DAT_005d2ab0) {
    this_val = &DAT_005ceab8;
    do {
      FUN_0040d410(this_val + -0x34,0);
      FUN_00417e20(this_val + -0x14,i);
      *this_val = 0;
      this_val[-1] = &DAT_005ce1e8;
      FUN_0040e340(this_val[-0x34],&local_8,local_4);
      FUN_00412270(i,local_8);
      i = i + 1;
      this_val = this_val + 0xa5;
    } while (i < DAT_005d2ab0);
  }
  FUN_00419a30();
  i = 6;
  this_val = &DAT_005cf960;
  do {
    FUN_0040d410(this_val,0);
    *this_val = 0xffffffff;
    FUN_00417e20(this_val + 0x20,i);
    this_val[0x34] = 1;
    this_val[0x33] = &DAT_005cdde0;
    this_val = this_val + 0xa5;
    i = i + 1;
  } while ((int)this_val < 0x5d15bd);
  FUN_004079a0();
  FUN_00407810();
  FUN_0040d410(&DAT_005d1850,0x1d);
  DAT_005d1850 = 0xffffffff;
  FUN_00417e20(&DAT_005d18d0,0x12);
  DAT_005d1920 = 2;
  _DAT_005d191c = &DAT_005ce5e8;
  DAT_005d1924 = 0xffffffff;
  this_val_2 = FUN_0040ebe0();
  FUN_0040f000(this_val_2);
  FUN_00413000();
  FUN_00413250();
  FUN_0041e910();
  FUN_004225a0();
  return;
}


/* ==== 004134e0 FUN_004134e0 ==== */

int FUN_004134e0(int param_1)

{
  int *piVar1;
  int i;
  undefined4 *puVar2;
  
  i = 0;
  if (DAT_005ce9e8 != param_1) {
    puVar2 = &DAT_005ce9e8;
    do {
      if (DAT_005d2ab0 <= i) break;
      piVar1 = puVar2 + 0xa5;
      puVar2 = puVar2 + 0xa5;
      i = i + 1;
    } while (*piVar1 != param_1);
  }
  if (i == DAT_005d2ab0) {
    i = -1;
  }
  return i;
}


/* ==== 00413520 FUN_00413520 ==== */

void FUN_00413520(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 this_val;
  int iVar9;
  int iVar10;
  
  iVar1 = (&DAT_005cea44)[param_1 * 0xa5];
  iVar10 = *(int *)(&DAT_005cea68 + param_1 * 0x294);
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if (iVar10 < *(int *)(&DAT_00709f1c + iVar1 * 0x340)) {
    iVar9 = FUN_004641a0(iVar1);
    fVar3 = *(float *)(&DAT_00709f24 + (iVar10 + iVar9 * 0x34) * 0x10);
    iVar9 = FUN_004641a0(iVar1);
    fVar4 = *(float *)(&DAT_00709f28 + (iVar10 + iVar9 * 0x34) * 0x10);
    iVar9 = FUN_004641a0(iVar1);
    fVar5 = *(float *)(&DAT_00709f2c + (iVar10 + iVar9 * 0x34) * 0x10);
    iVar10 = DAT_0073b0d0 + *(int *)(iVar2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
    fVar6 = fVar3 - *(float *)(iVar10 + 0x50);
    fVar8 = fVar4 - *(float *)(iVar10 + 0x54);
    fVar7 = fVar5 - *(float *)(iVar10 + 0x58);
    if (SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) < 30.0) {
      *(int *)(&DAT_005cea68 + param_1 * 0x294) = *(int *)(&DAT_005cea68 + param_1 * 0x294) + 1;
    }
    FUN_004037a0(param_1,*(undefined4 *)(&DAT_00709f18 + iVar1 * 0x340),
                 *(undefined4 *)(&DAT_00709f18 + iVar1 * 0x340));
    FUN_00403a70(param_1,fVar3,fVar4,fVar5);
    FUN_00403cd0(param_1);
  }
  else if (iVar2 != -1) {
    switch((&DAT_00709f10)[iVar1 * 0xd0]) {
    case 0xd:
    case 0x10:
      FUN_00426fc0(iVar2,0);
      this_val = FUN_0049eb50(&DAT_006fbb5c,*(undefined4 *)(iVar2 * 0xf0 + 0x30 + DAT_00715e50));
      FUN_0049e570(this_val);
      FUN_004a7a50(iVar2);
      FUN_0040da60(param_1);
      return;
    case 0xe:
    case 0x11:
      FUN_004037a0(param_1,0,0);
      FUN_00403cd0(param_1);
      this_val = *(undefined4 *)(iVar2 * 0xf0 + 0x30 + DAT_00715e50);
      break;
    case 0xf:
    case 0x12:
      FUN_0040d470(&DAT_005ce9e8 + param_1 * 0xa5,0x19);
      this_val = *(undefined4 *)(iVar2 * 0xf0 + 0x30 + DAT_00715e50);
      break;
    default:
      goto switchD_00413584_default;
    }
    this_val = FUN_0049eb50(&DAT_006fbb5c,this_val);
    FUN_0049e570(this_val);
    return;
  }
switchD_00413584_default:
  return;
}


/* ==== 00413780 FUN_00413780 ==== */

void FUN_00413780(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00413790 FUN_00413790 ==== */

void FUN_00413790(void)

{
  FUN_005584e0(&LAB_004137a0);
  return;
}


/* ==== 004137c0 FUN_004137c0 ==== */

void FUN_004137c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004137d0 FUN_004137d0 ==== */

void FUN_004137d0(void)

{
  FUN_005584e0(&LAB_004137e0);
  return;
}


/* ==== 00413860 FUN_00413860 ==== */

void FUN_00413860(void)

{
  FUN_00558643(&DAT_005d1ba8,0x38,0x32,&LAB_004138b0,&DAT_004138d0);
  return;
}


/* ==== 00413880 FUN_00413880 ==== */

void FUN_00413880(void)

{
  FUN_005584e0(&LAB_00413890);
  return;
}


/* ==== 004138e0 FUN_004138e0 ==== */

uint FUN_004138e0(char *param_1)

{
  int i;
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  
  i = 9;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_TOO_SLOW_00592b6c;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 4;
  }
  i = 9;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_TOO_FAST_00592b78;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 8;
  }
  i = 0xc;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_SPEED_FREAK_00592b84;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 0x10;
  }
  i = 7;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_GRANNY_00592b90;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 0x20;
  }
  i = 7;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_SLOPPY_00592b98;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 0x40;
  }
  i = 6;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_BLIND_00592ba0;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 0x80;
  }
  i = 5;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_LEFT_00592ba8;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 0x100;
  }
  i = 6;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_RIGHT_00592bb0;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 0x200;
  }
  i = 6;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_DRUNK_00592bb8;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 0x400;
  }
  i = 10;
  bVar3 = true;
  pcVar1 = param_1;
  pcVar2 = s_RED_LIGHT_00592bc0;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    return 0x800;
  }
  i = 0xd;
  bVar3 = true;
  pcVar1 = s_VLUCHTSTROOK_00592bcc;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *param_1 == *pcVar1;
    param_1 = param_1 + 1;
    pcVar1 = pcVar1 + 1;
  } while (bVar3);
  return !bVar3 - 1 & 0x1000;
}


/* ==== 00413a10 FUN_00413a10 ==== */

void FUN_00413a10(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int j;
  int iVar4;
  uint m;
  uint n;
  int *piVar5;
  int k;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  int i;
  undefined1 local_154 [4];
  undefined1 *local_150;
  undefined1 local_144 [8];
  char local_13c [32];
  undefined1 local_11c [16];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569ac6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_154,0);
  local_4 = 0;
  FUN_004489a0(&DAT_006fa558,s_TRAFFIC_INI_00592bf0,s_AI_Traffic_Settings_00592bdc);
  FUN_00448c90(&DAT_006fa558,s_AI_Traffic_Settings_00592bfc);
  FUN_004c3b60();
  uVar2 = FUN_0049df90(local_11c,PTR_s_Traffic_Track__d_00592934);
  local_4._0_1_ = 1;
  FUN_004093c0(local_154,uVar2,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_11c,1);
  puVar3 = local_150;
  if (local_150 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  DAT_005d2aac = FUN_004c3cd0(puVar3,s_RANDOM_00592c10);
  puVar3 = local_150;
  if (local_150 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  DAT_005d2aa8 = FUN_004c3cd0(puVar3,s_COUNT_00592c18);
  puVar3 = local_150;
  if (local_150 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  DAT_005962b4 = FUN_004c3cd0(puVar3,s_MAX_TRAFFIC_RIGHT_00592c20);
  puVar3 = local_150;
  if (local_150 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  DAT_005962b8 = FUN_004c3cd0(puVar3,s_MAX_TRAFFIC_LEFT_00592c34);
  i = 0;
  if (0 < DAT_005d2aa8) {
    piVar5 = &DAT_005d2698;
    do {
      FUN_005587a3(local_144,s__d_00592c48,i);
      puVar3 = local_150;
      if (local_150 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      FUN_004c3d10(puVar3,local_144,local_10c,0xff);
      j = FUN_004c3d60(local_10c,0);
      if (j < 2) {
        FUN_004c4150(s___s___d_Not_enough_parameters_us_00592c70,
                     s_C__Work_A2IV_Game_prog_ai_nwtrf__00592c4c,0xf5);
      }
      k = 0;
      *piVar5 = 1;
      if (0 < j + -2) {
        do {
          FUN_004c3f10(k,local_13c,0x1f);
          iVar4 = FUN_004138e0(local_13c);
          k = k + 1;
          *piVar5 = *piVar5 + iVar4;
        } while (k < j + -2);
      }
      FUN_004c3f10(k,local_13c,0x1f);
      m = 0xffffffff;
      pcVar7 = local_13c;
      do {
        if (m == 0) break;
        m = m - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (~m - 1 < 0x20) {
        j = -1;
        pcVar7 = local_13c;
        do {
          if (j == 0) break;
          j = j + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (j == -2) goto LAB_00413c28;
      }
      else {
LAB_00413c28:
        m = 0xffffffff;
        pcVar7 = local_13c;
        do {
          if (m == 0) break;
          m = m - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004c4150(s__s___d__Incorrect_length_or_argu_00592cd0,
                     s_C__Work_A2IV_Game_prog_ai_nwtrf__00592cac,0x107,k,~m - 1);
      }
      m = 0xffffffff;
      pcVar7 = local_13c;
      do {
        pcVar8 = pcVar7;
        if (m == 0) break;
        m = m - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      m = ~m;
      piVar6 = (int *)(pcVar8 + -m);
      piVar9 = piVar5;
      for (n = m >> 2; piVar9 = piVar9 + 1, n != 0; n = n - 1) {
        *piVar9 = *piVar6;
        piVar6 = piVar6 + 1;
      }
      for (m = m & 3; m != 0; m = m - 1) {
        *(char *)piVar9 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
      cVar1 = FUN_004c3ec0(k + 1);
      j = DAT_005d2aa8;
      *(char *)(piVar5 + 9) = cVar1;
      i = i + 1;
      piVar5 = piVar5 + 10;
    } while (i < j);
  }
  if (local_150 != (undefined1 *)0x0) {
    cVar1 = local_150[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_150[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_150 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00413cf0 FUN_00413cf0 ==== */

int FUN_00413cf0(void)

{
  char *pcVar1;
  int iVar2;
  int i;
  int iVar3;
  undefined1 *puVar4;
  int j;
  bool bVar5;
  
  i = FUN_00558625();
  if (DAT_005d2aac == 0) {
    iVar3 = (int)DAT_005d26bc;
    i = 0;
    if (iVar3 <= DAT_005d2ab4) {
      puVar4 = &DAT_005d26bc;
      do {
        bVar5 = i == DAT_005d2aa8;
        if (DAT_005d2aa8 <= i) goto LAB_00413d99;
        pcVar1 = puVar4 + 0x28;
        puVar4 = puVar4 + 0x28;
        i = i + 1;
        iVar3 = iVar3 + *pcVar1;
        FUN_004c3fa0(s_Trying_new_entry_00592d70);
      } while (iVar3 <= DAT_005d2ab4);
    }
    bVar5 = i == DAT_005d2aa8;
LAB_00413d99:
    if (bVar5) {
      FUN_004c4150(s___s___d_Total_traffic_types_do_n_00592da8,
                   s_C__Work_A2IV_Game_prog_ai_nwtrf__00592d84,0x13e);
    }
    DAT_005d2ab4 = DAT_005d2ab4 + 1;
    FUN_004c3fa0(s_Added__d_cars_00592de0,DAT_005d2ab4);
    return i;
  }
  iVar3 = (int)DAT_005d26bc;
  j = 0;
  if (iVar3 < i % 100) {
    puVar4 = &DAT_005d26bc;
    do {
      iVar2 = j - DAT_005d2aa8;
      if (DAT_005d2aa8 <= j) goto LAB_00413d35;
      pcVar1 = puVar4 + 0x28;
      puVar4 = puVar4 + 0x28;
      iVar3 = iVar3 + *pcVar1;
      j = j + 1;
    } while (iVar3 < i % 100);
  }
  iVar2 = j - DAT_005d2aa8;
LAB_00413d35:
  if (j != DAT_005d2aa8 && SBORROW4(j,DAT_005d2aa8) == iVar2 < 0) {
    FUN_004c4150(s___s___d_Total_traffic_types_do_n_00592d3c,
                 s_C__Work_A2IV_Game_prog_ai_nwtrf__00592d18,0x12d);
  }
  return j;
}


/* ==== 00413de0 FUN_00413de0 ==== */

float10 FUN_00413de0(undefined4 param_1,byte param_2)

{
  switch(param_1) {
  case 4:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b3c - (float10)5.0;
    }
    if ((param_2 & 8) != 0) {
      return (float10)DAT_005d1b3c + (float10)5.0;
    }
    if ((param_2 & 0x10) == 0) {
      return (float10)DAT_005d1b3c;
    }
    goto LAB_00413e21;
  case 5:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b40 - (float10)10.0;
    }
    if ((param_2 & 8) != 0) {
      return (float10)DAT_005d1b40 + (float10)10.0;
    }
    break;
  case 6:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b44 - (float10)15.0;
    }
    if ((param_2 & 8) != 0) {
      return (float10)DAT_005d1b44 + (float10)15.0;
    }
    if ((param_2 & 0x10) != 0) {
      return (float10)DAT_005d1b44 + (float10)35.0;
    }
LAB_00413e21:
    return (float10)DAT_005d1b44;
  default:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b3c - (float10)5.0;
    }
    if (((param_2 & 8) == 0) && ((param_2 & 0x10) != 0)) {
      return (float10)DAT_005d1b44 + (float10)20.0;
    }
    goto LAB_00413ee0;
  case 8:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b3c - (float10)5.0;
    }
    if ((param_2 & 8) != 0) goto LAB_00413ee0;
  }
  if ((param_2 & 0x10) != 0) {
    return (float10)DAT_005d1b44 + (float10)20.0;
  }
LAB_00413ee0:
  return (float10)DAT_005d1b40;
}


/* ==== 00413f00 FUN_00413f00 ==== */

undefined4
FUN_00413f00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int i;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  i = 0;
  if (DAT_005d1ba8 != -1) {
    puVar2 = &DAT_005d1ba8;
    do {
      if (0x5d2697 < (int)puVar2) break;
      piVar1 = puVar2 + 0xe;
      puVar2 = puVar2 + 0xe;
      i = i + 1;
    } while (*piVar1 != -1);
    if (i == 0x32) {
      return 0;
    }
  }
  iVar4 = i * 0x38;
  (&DAT_005d1ba8)[i * 0xe] = param_1;
  (&DAT_005d1bac)[i * 0xe] = param_3;
  iVar3 = DAT_00715e50 + param_1 * 0xf0;
  (&DAT_005d1bb4)[i * 0xe] = *(undefined4 *)(iVar3 + 0x34);
  (&DAT_005d1bb8)[i * 0xe] = (&DAT_005d2698)[param_2 * 10];
  *(undefined4 *)(&DAT_005d1bc8 + iVar4) = 0;
  *(undefined4 *)(&DAT_005d1bbc + iVar4) = 0;
  (&DAT_005d1bc0)[i * 0xe] = param_5;
  *(undefined4 *)(&DAT_005d1bc4 + iVar4) = param_4;
  *(undefined4 *)(iVar3 + 0x60) = 1;
  FUN_0040e340(param_1,&param_1,&param_3);
  fVar5 = (float10)FUN_00413de0(param_1,(&DAT_005d1bb8)[i * 0xe]);
  i = DAT_0059293c;
  *(float *)(&DAT_005d1bcc + iVar4) = (float)fVar5;
  if (i == -1) {
    DAT_0059293c = FUN_0049ecb0(&DAT_006fbb5c,s_TOETER_00592df0);
  }
  return 1;
}


/* ==== 00414000 FUN_00414000 ==== */

uint FUN_00414000(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int i;
  
  i = 0;
  if (DAT_005d1ba8 != param_1) {
    puVar2 = &DAT_005d1ba8;
    do {
      if (0x5d2697 < (int)puVar2) break;
      piVar1 = puVar2 + 0xe;
      puVar2 = puVar2 + 0xe;
      i = i + 1;
    } while (*piVar1 != param_1);
    if (i == 0x32) {
      return (uint)puVar2 & 0xffffff00;
    }
  }
  (&DAT_005d1ba8)[i * 0xe] = 0xffffffff;
  (&DAT_005d1bac)[i * 0xe] = 0xffffffff;
  (&DAT_005d1bb8)[i * 0xe] = 0;
  (&DAT_005d1bc0)[i * 0xe] = 0;
  return CONCAT31((int3)((uint)(i * 0x38) >> 8),1);
}


/* ==== 00414070 FUN_00414070 ==== */

int FUN_00414070(int param_1)

{
  int *piVar1;
  int i;
  undefined4 *puVar2;
  
  if (-1 < param_1) {
    i = 0;
    if (DAT_005d1ba8 == param_1) {
      return 0;
    }
    puVar2 = &DAT_005d1ba8;
    do {
      if (0x5d2697 < (int)puVar2) break;
      piVar1 = puVar2 + 0xe;
      puVar2 = puVar2 + 0xe;
      i = i + 1;
    } while (*piVar1 != param_1);
    if (i != 0x32) {
      return i;
    }
  }
  return -1;
}


/* ==== 004140b0 FUN_004140b0 ==== */

void FUN_004140b0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (&DAT_005d1bac)[param_1 * 0xe];
  if ((iVar1 == 8) || (iVar1 == 10)) {
    *param_2 = 2;
    *param_3 = 1;
    *param_4 = 0;
    return;
  }
  if ((iVar1 != 7) && (iVar1 != 9)) {
    *param_2 = 1;
    *param_3 = 0;
    *param_4 = 2;
    return;
  }
  *param_2 = 0;
  *param_3 = 1;
  *param_4 = 2;
  return;
}


/* ==== 00414140 FUN_00414140 ==== */

undefined4 FUN_00414140(char *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int i;
  int local_28;
  int *local_24;
  uint this_val;
  int local_1c;
  int local_18;
  int local_14;
  char local_10 [4];
  int local_c [2];
  undefined4 local_4;
  
  uVar3 = this_val >> 8;
  this_val = this_val & 0xffffff00;
  uVar1 = (&DAT_005d1bb8)[(int)param_1 * 0xe];
  if ((uVar1 & 0x1000) != 0) {
    this_val = CONCAT31((int3)uVar3,1);
  }
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 & 0x40) == 0) {
      local_28 = (-(uint)((uVar1 & 0x80) != 0) & 0xfffffffe) + 2;
    }
    else {
      local_28 = 1;
    }
  }
  else {
    local_28 = 3;
  }
  FUN_004140b0(param_1,&local_1c,&local_18,&local_14);
  iVar2 = (&DAT_005d1ba8)[(int)param_1 * 0xe];
  i = 0;
  local_10[0] = '\0';
  local_10[1] = 0;
  local_10[2] = 0;
  local_24 = local_c;
  pcVar5 = local_10 + 2;
  local_c[0] = *(int *)(iVar2 * 0xf0 + 0x3c + DAT_00715e50);
  param_1 = local_10 + 1;
  pcVar6 = local_10;
  iVar7 = local_c[0];
  do {
    iVar4 = FUN_00422f70(iVar2,iVar7,local_1c,local_28,this_val);
    if (*pcVar6 == '\x01') {
      iVar4 = -1;
    }
    *pcVar6 = '\x01';
    if (iVar4 == -1) {
      iVar4 = FUN_00422f70(iVar2,iVar7,local_18,local_28,this_val);
      if (*param_1 == '\x01') {
        iVar4 = -1;
      }
      *pcVar6 = '\x01';
      if (iVar4 != -1) goto LAB_00414280;
      iVar4 = FUN_00422f70(iVar2,iVar7,local_14,local_28,this_val);
      if (*pcVar5 == '\x01') {
        iVar4 = -1;
      }
      *pcVar5 = '\x01';
      if (iVar4 != -1) goto LAB_00414280;
      if (i < 1) {
        return 0;
      }
      i = i + -1;
      param_1 = param_1 + -8;
      pcVar6 = pcVar6 + -8;
      pcVar5 = pcVar5 + -8;
      local_24 = local_24 + -2;
      iVar4 = iVar7;
    }
    else {
LAB_00414280:
      i = i + 1;
      param_1 = param_1 + 8;
      pcVar6 = pcVar6 + 8;
      pcVar5 = pcVar5 + 8;
      local_24 = local_24 + 2;
      if (i < 2) {
        *pcVar6 = '\0';
        *param_1 = '\0';
        *pcVar5 = '\0';
        *local_24 = iVar4;
      }
    }
    iVar7 = iVar4;
    if (1 < i) {
      *param_2 = local_4;
      *param_3 = iVar4;
      return 1;
    }
  } while( true );
}


/* ==== 00414320 FUN_00414320 ==== */

void FUN_00414320(float param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  fVar2 = 30.0 - ABS(param_4) * 0.18;
  iVar3 = (int)param_1 * 0x38;
  iVar1 = (&DAT_005d1ba8)[(int)param_1 * 0xe];
  param_1 = fVar2;
  if (fVar2 < 5.0) {
    param_1 = 5.0;
  }
  if (*(float *)(&DAT_005d1bcc + iVar3) < param_1) {
    param_1 = *(float *)(&DAT_005d1bcc + iVar3);
  }
  if (param_3 != -1) {
    fVar4 = (float10)FUN_00422c00(iVar1,param_3);
    if (fVar4 < (float10)param_1) {
      param_1 = (float)fVar4;
    }
    fVar4 = (float10)FUN_00422c00(iVar1,*(undefined4 *)(iVar1 * 0xf0 + 0x3c + DAT_00715e50));
    if (fVar4 < (float10)param_1) {
      param_1 = (float)fVar4;
    }
  }
  if (param_1 <= *(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50)) {
    if (param_1 + 4.0 <= *(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50)) {
      *(undefined4 *)(param_2 + 8) = 0x42c80000;
      *(undefined4 *)(param_2 + 4) = 0;
      return;
    }
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0x42c80000;
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0x42c80000;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}


/* ==== 00414450 FUN_00414450 ==== */

void FUN_00414450(undefined4 param_1,float *param_2,float param_3)

{
  *param_2 = param_3 * -0.6666667;
  return;
}


/* ==== 00414470 FUN_00414470 ==== */

void FUN_00414470(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = (float *)(param_3 * 0x50 + 8 + DAT_00715eb8);
  iVar5 = (&DAT_005d1ba8)[param_1 * 0xe];
  piVar3 = (int *)(iVar5 * 0xf0 + 0x24 + DAT_00715e50);
  iVar6 = *piVar3;
  local_24 = *pfVar2 - *(float *)(iVar6 + DAT_0073b0d0 + 0x50 + iVar6 * 0xa8);
  iVar6 = iVar6 + DAT_0073b0d0 + 0x50 + iVar6 * 0xa8;
  local_20 = pfVar2[1] - *(float *)(iVar6 + 4);
  local_1c = pfVar2[2] - *(float *)(iVar6 + 8);
  if (((local_24 != 0.0) || (local_20 != 0.0)) ||
     (local_18 = local_24, local_14 = local_20, local_10 = local_1c, local_1c != 0.0)) {
    local_10 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
    local_18 = local_24 / local_10;
    local_14 = local_20 / local_10;
    local_10 = local_1c / local_10;
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
  }
  puVar7 = (undefined4 *)FUN_004b4070(&local_24,DAT_0073b0d0 + *piVar3 * 0xa9 + 0x10);
  local_c = (float)*puVar7;
  local_8 = (float)puVar7[1];
  local_4 = (float)puVar7[2];
  fVar8 = (float10)FUN_00558550();
  puVar1 = &DAT_005d1bd0 + param_1 * 0x38;
  fVar4 = (float)((fVar8 - (float10)1.5707964) * (float10)0.63661975 * (float10)1024.0);
  FUN_00414450(iVar5,puVar1,fVar4);
  FUN_00414320(param_1,puVar1,param_2,fVar4);
  FUN_00428950(iVar5,puVar1);
  return;
}


/* ==== 00414640 FUN_00414640 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414640(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  iVar8 = param_1 * 0x38;
  iVar2 = (&DAT_005d1ba8)[param_1 * 0xe];
  iVar9 = iVar2 * 0xf0;
  iVar3 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar6 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  fVar1 = *(float *)(DAT_0073b0d0 + 0x50 + iVar3 * 0xa9) -
          *(float *)(&DAT_00709f24 + (*(int *)(&DAT_005d1bbc + iVar8) + iVar6 * 0x34) * 0x10);
  iVar3 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar6 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  fVar4 = *(float *)(DAT_0073b0d0 + 0x58 + iVar3 * 0xa9) -
          *(float *)(&DAT_00709f2c + (*(int *)(&DAT_005d1bbc + iVar8) + iVar6 * 0x34) * 0x10);
  fVar5 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
  FUN_004066c0(&local_18,fVar1 / fVar5,0.0 / fVar5,fVar4 / fVar5);
  puVar7 = (undefined4 *)
           FUN_004b4070(local_c,DAT_0073b0d0 + *(int *)(iVar9 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  local_18 = *puVar7;
  local_14 = puVar7[1];
  local_10 = puVar7[2];
  fVar10 = (float10)FUN_00558550();
  fVar1 = (float)((float10)_DAT_005b23b8 * (float10)0.25 *
                 (fVar10 - (float10)1.5707964) * (float10)0.63661975);
  FUN_00414450(iVar2,&DAT_005d1bd0 + iVar8,fVar1);
  fVar1 = ABS(fVar1) * 0.18;
  fVar1 = 10.0 - (fVar1 + fVar1);
  if (fVar1 < 5.0) {
    fVar1 = 5.0;
  }
  if (fVar1 <= *(float *)(iVar9 + 0xc4 + DAT_00715e50)) {
    *(undefined4 *)(&DAT_005d1bd4 + iVar8) = 0;
    *(undefined4 *)(&DAT_005d1bd8 + iVar8) = 0x42c80000;
  }
  else {
    *(undefined4 *)(&DAT_005d1bd4 + iVar8) = 0x42c80000;
    *(undefined4 *)(&DAT_005d1bd8 + iVar8) = 0;
  }
  FUN_00428950(iVar2,&DAT_005d1bd0 + iVar8);
  iVar2 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar6 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  iVar3 = *(int *)(&DAT_005d1bbc + iVar8);
  fVar1 = *(float *)(iVar2 * 0xa9 + 0x50 + DAT_0073b0d0) -
          *(float *)(&DAT_00709f24 + (iVar3 + iVar6 * 0x34) * 0x10);
  iVar2 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar6 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  fVar4 = *(float *)(iVar2 * 0xa9 + 0x58 + DAT_0073b0d0) -
          *(float *)(&DAT_00709f2c + (iVar3 + iVar6 * 0x34) * 0x10);
  if (ABS(fVar1 * fVar1 + fVar4 * fVar4) < 900.0) {
    *(int *)(&DAT_005d1bbc + iVar8) = iVar3 + 1;
  }
  return;
}


/* ==== 00414910 FUN_00414910 ==== */

void __thiscall FUN_00414910(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 local_4;
  
  uVar1 = param_2;
  cVar2 = FUN_00414140(param_2,&local_4,&param_2);
  if (cVar2 == '\x01') {
    FUN_00414470(uVar1,local_4,param_2);
  }
  return;
}


/* ==== 00414950 FUN_00414950 ==== */

/* WARNING: Removing unreachable block (ram,0x00414a86) */

void FUN_00414950(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  uint i;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [4];
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049e180(local_68);
  local_4 = 0;
  iVar1 = (&DAT_005d1ba8)[param_1 * 0xe];
  fVar9 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)(&DAT_005d1bc8 + param_1 * 0x38) =
       (float)(fVar9 + (float10)*(float *)(&DAT_005d1bc8 + param_1 * 0x38));
  FUN_00414910();
  cVar3 = FUN_004230d0(iVar1,param_1);
  cVar4 = FUN_00423210(iVar1);
  if (((cVar4 != '\0') || (cVar3 != '\0')) && (DAT_00592938 == -1)) {
    DAT_00592938 = *(int *)(iVar1 * 0xf0 + 0x30 + DAT_00715e50);
    *(int *)(iVar1 * 0xf0 + 0x30 + DAT_00715e50) = DAT_0059293c;
    goto LAB_00414b9b;
  }
  if (((*(int *)(iVar1 * 0xf0 + 0x30 + DAT_00715e50) != DAT_0059293c) || (cVar3 != '\0')) ||
     (cVar4 != '\0')) goto LAB_00414b9b;
  iVar5 = FUN_0049eb50(&DAT_006fbb5c,DAT_0059293c);
  local_64 = *(undefined4 *)(iVar5 + 4);
  local_60 = *(undefined4 *)(iVar5 + 8);
  local_5c = *(undefined4 *)(iVar5 + 0xc);
  local_58 = *(undefined4 *)(iVar5 + 0x10);
  local_54 = *(undefined4 *)(iVar5 + 0x14);
  FUN_004093c0(local_50,iVar5 + 0x18,0,0xffffffff);
  uVar2 = *(uint *)(iVar5 + 0x30);
  if (local_40 == (undefined1 *)(iVar5 + 0x28)) {
    FUN_0040f800(local_40,uVar2,0xffffffff);
    FUN_0040f800(local_40,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar6 = *(undefined1 **)(iVar5 + 0x2c);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      if ((byte)puVar6[-1] < 0xfe) {
        FUN_004028f0(local_40,1);
        local_3c = *(undefined4 **)(iVar5 + 0x2c);
        if (local_3c == (undefined4 *)0x0) {
          local_3c = (undefined4 *)&DAT_0057629c;
        }
        local_38 = *(undefined4 *)(iVar5 + 0x30);
        local_34 = *(undefined4 *)(iVar5 + 0x34);
        *(char *)((int)local_3c + -1) = *(char *)((int)local_3c + -1) + '\x01';
        goto LAB_00414b38;
      }
    }
    cVar3 = FUN_00402a00(local_40,uVar2,1);
    if (cVar3 != '\0') {
      puVar7 = *(undefined4 **)(iVar5 + 0x2c);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = local_3c;
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(local_40,uVar2);
    }
  }
LAB_00414b38:
  local_30 = *(undefined4 *)(iVar5 + 0x38);
  local_2c = *(undefined4 *)(iVar5 + 0x3c);
  local_28 = *(undefined4 *)(iVar5 + 0x40);
  local_24 = *(undefined4 *)(iVar5 + 0x44);
  local_20 = *(undefined4 *)(iVar5 + 0x48);
  local_1c = *(undefined4 *)(iVar5 + 0x4c);
  local_18 = *(undefined4 *)(iVar5 + 0x50);
  local_14 = *(undefined4 *)(iVar5 + 0x54);
  local_10 = *(undefined4 *)(iVar5 + 0x58);
  FUN_0049e570(local_68);
  *(int *)(iVar1 * 0xf0 + 0x30 + DAT_00715e50) = DAT_00592938;
  DAT_00592938 = -1;
LAB_00414b9b:
  local_4 = 0xffffffff;
  FUN_0049e200(local_68);
  ExceptionList = local_c;
  return;
}


/* ==== 00414bc0 FUN_00414bc0 ==== */

void FUN_00414bc0(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_00414910(in_ECX,param_1);
  return;
}


/* ==== 00414bd0 FUN_00414bd0 ==== */

void FUN_00414bd0(int param_1)

{
  undefined4 in_ECX;
  float10 fVar1;
  
  FUN_00414910(in_ECX,param_1);
  fVar1 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)(&DAT_005d1bc8 + param_1 * 0x38) =
       (float)((float10)*(float *)(&DAT_005d1bc8 + param_1 * 0x38) - fVar1);
  return;
}


/* ==== 00414c00 FUN_00414c00 ==== */

void FUN_00414c00(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = (&DAT_005d1ba8)[param_1 * 0xe] * 0xf0;
  pfVar1 = (float *)(iVar2 + 0xc4 + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  *pfVar1 = (float)((float10)*pfVar1 - fVar3 * (float10)*pfVar1 * (float10)3.0);
  pfVar1 = (float *)(iVar2 + 0xcc + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  *pfVar1 = (float)((float10)*pfVar1 -
                   fVar3 * (float10)*(float *)(iVar2 + 0xcc + DAT_00715e50) * (float10)3.0);
  return;
}


/* ==== 00414c80 FUN_00414c80 ==== */

void FUN_00414c80(int param_1)

{
  int iVar1;
  
  iVar1 = (&DAT_005d1ba8)[param_1 * 0xe];
  *(undefined4 *)(iVar1 * 0xf0 + 0x60 + DAT_00715e50) = 0;
  *(undefined4 *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) = 1;
  return;
}


/* ==== 00414cc0 FUN_00414cc0 ==== */

void FUN_00414cc0(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 in_ECX;
  float10 fVar3;
  
  FUN_00414910(in_ECX,param_1);
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  iVar2 = DAT_00715e50;
  *(float *)(&DAT_005d1bc8 + param_1 * 0x38) =
       (float)((float10)*(float *)(&DAT_005d1bc8 + param_1 * 0x38) - fVar3);
  pfVar1 = (float *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0xcc + iVar2);
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  *pfVar1 = (float)((float10)*pfVar1 -
                   fVar3 * (float10)*(float *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0xcc +
                                              DAT_00715e50) * (float10)3.0);
  *(undefined4 *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0x60 + DAT_00715e50) = 0;
  return;
}


/* ==== 00414d60 FUN_00414d60 ==== */

void FUN_00414d60(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 local_8;
  
  iVar5 = param_1 * 0x38;
  iVar4 = (&DAT_005d1ba8)[param_1 * 0xe];
  if ((&DAT_005d1bc0)[param_1 * 0xe] == 0) {
    iVar3 = FUN_004641a0(0);
    uVar2 = *(undefined4 *)(&DAT_00709f34 + iVar3 * 0x340);
    iVar3 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    FUN_004031f0(iVar4,uVar2,local_8,*(undefined4 *)(&DAT_00709f3c + iVar3 * 0x340));
  }
  iVar3 = *(int *)(&DAT_005d1bbc + iVar5);
  bVar6 = false;
  if (iVar3 == 0) {
    if (DAT_005a3ab4 == 0) {
      iVar3 = FUN_00448470(1);
      if (2000 < iVar3) {
        *(undefined4 *)(&DAT_005d1bbc + iVar5) = 1;
      }
    }
    iVar3 = *(int *)(&DAT_005d1bbc + iVar5);
    bVar6 = iVar3 == 0;
  }
  if (!bVar6 && -1 < iVar3) {
    FUN_00414640(param_1);
    pfVar1 = (float *)(iVar4 * 0xf0 + 0xc4 + DAT_00715e50);
    if (*(float *)(iVar4 * 0xf0 + 0xc4 + DAT_00715e50) < DAT_005d1b3c) {
      fVar7 = (float10)FUN_004a6800(&DAT_007128b0);
      *pfVar1 = (float)(fVar7 * (float10)5.0 + (float10)*pfVar1);
      return;
    }
    *pfVar1 = DAT_005d1b3c;
    return;
  }
  iVar4 = iVar4 * 0xf0;
  *(undefined4 *)(iVar4 + 0xc4 + DAT_00715e50) = 0;
  *(undefined4 *)(iVar4 + 0xbc + DAT_00715e50) = 0;
  *(undefined4 *)(iVar4 + 0xcc + DAT_00715e50) = 0;
  return;
}


/* ==== 00414ec0 FUN_00414ec0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00414ec0(float *param_1)

{
  float10 fVar1;
  
  if (*param_1 == 0.0) {
    *param_1 = 0.0001;
  }
  fVar1 = (float10)fpatan(-((float10)param_1[2] / (float10)*param_1),(float10)1);
  fVar1 = (fVar1 + (float10)1.5707964) * (float10)0.31830987 * (float10)(_DAT_005b23b8 * 0.5);
  if (fVar1 < (float10)0.0) {
    fVar1 = fVar1 + (float10)_DAT_005b23b8;
  }
  if (*param_1 < 0.0) {
    fVar1 = fVar1 + (float10)(_DAT_005b23b8 * 0.5);
  }
  return fVar1;
}


/* ==== 00414f30 FUN_00414f30 ==== */

void FUN_00414f30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c [2];
  float local_4;
  
  local_18 = 0;
  local_14 = 0.0;
  iVar4 = param_1 * 0x38;
  local_10 = 0;
  local_24 = 0;
  iVar3 = (&DAT_005d1ba8)[param_1 * 0xe];
  local_20 = 0;
  local_1c = 0;
  if (*(int *)(&DAT_005d1bbc + iVar4) == 0) {
    *(undefined4 *)(&DAT_005d1bbc + iVar4) = 1;
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    iVar2 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_c[0] = *(float *)(&DAT_00709f34 + iVar1 * 0x340) -
                 *(float *)(&DAT_00709f24 + iVar2 * 0x340);
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    iVar2 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_4 = *(float *)(&DAT_00709f3c + iVar1 * 0x340) - *(float *)(&DAT_00709f2c + iVar2 * 0x340);
    fVar5 = (float10)FUN_00414ec0(local_c);
    local_14 = (float)-fVar5;
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_24 = *(undefined4 *)(&DAT_00709f24 + iVar1 * 0x340);
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_20 = *(undefined4 *)(&DAT_00709f28 + iVar1 * 0x340);
    iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    local_1c = *(undefined4 *)(&DAT_00709f2c + iVar1 * 0x340);
    (**(code **)(**(int **)(iVar3 * 0xf0 + 0x10 + DAT_00715e50) + 0x10))(&local_24,&local_18);
  }
  iVar3 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  if (*(int *)(&DAT_005d1bbc + iVar4) < *(int *)(&DAT_00709f1c + iVar3 * 0x340)) {
    FUN_00414640(param_1);
  }
  return;
}


/* ==== 004150e0 FUN_004150e0 ==== */

void FUN_004150e0(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = (&DAT_005d1ba8)[param_1 * 0xe];
  iVar2 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  if (*(int *)(&DAT_005d1bbc + param_1 * 0x38) < *(int *)(&DAT_00709f1c + iVar2 * 0x340)) {
    FUN_00414640(param_1);
    iVar3 = iVar3 * 0xf0;
    pfVar1 = (float *)(iVar3 + 0xc4 + DAT_00715e50);
    if (DAT_005d1b3c <= *(float *)(iVar3 + 0xc4 + DAT_00715e50)) {
      *pfVar1 = DAT_005d1b3c;
    }
    else {
      fVar4 = (float10)FUN_004a6800(&DAT_007128b0);
      *pfVar1 = (float)(fVar4 * (float10)5.0 + (float10)*pfVar1);
    }
    if (*(float *)(iVar3 + 0xc4 + DAT_00715e50) < 5.0) {
      *(undefined4 *)(iVar3 + 0xc4 + DAT_00715e50) = 0x40a00000;
      return;
    }
  }
  else {
    iVar3 = iVar3 * 0xf0;
    *(undefined4 *)(iVar3 + 0xc4 + DAT_00715e50) = 0;
    *(undefined4 *)(iVar3 + 0xbc + DAT_00715e50) = 0;
    *(undefined4 *)(iVar3 + 0xcc + DAT_00715e50) = 0;
    *(undefined4 *)(iVar3 + 0x5c + DAT_00715e50) = 0;
    (&DAT_0070a240)[(&DAT_005d1bc0)[param_1 * 0xe] * 0xd0] = 0;
  }
  return;
}


/* ==== 004151f0 FUN_004151f0 ==== */

undefined4 FUN_004151f0(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int i;
  float local_14;
  
  local_14 = 3.4028235e+38;
  iVar4 = FUN_004641a0(param_1);
  i = 0;
  iVar4 = (&DAT_00709f08)[iVar4 * 0xd0];
  iVar1 = *(int *)(DAT_00715f00 + 0xf4 + iVar4 * 0x994);
  if (0 < iVar1) {
    do {
      iVar5 = FUN_004a6d70(iVar4,i,0);
      fVar2 = *(float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
      fVar3 = *(float *)(iVar5 * 0x50 + DAT_00715eb8 + 0x10);
      iVar5 = FUN_004641a0(param_1);
      fVar2 = fVar2 - *(float *)(&DAT_00709f24 + iVar5 * 0x340);
      iVar5 = FUN_004641a0(param_1);
      fVar3 = fVar3 - *(float *)(&DAT_00709f2c + iVar5 * 0x340);
      fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar2 < local_14) {
        local_14 = fVar2;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  i = 0;
  iVar1 = *(int *)(DAT_00715f00 + 0xf8 + iVar4 * 0x994);
  if (0 < iVar1) {
    do {
      iVar5 = FUN_004a6d70(iVar4,i,1);
      fVar2 = *(float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
      fVar3 = *(float *)(iVar5 * 0x50 + DAT_00715eb8 + 0x10);
      iVar5 = FUN_004641a0(param_1);
      fVar2 = fVar2 - *(float *)(&DAT_00709f24 + iVar5 * 0x340);
      iVar5 = FUN_004641a0(param_1);
      fVar3 = fVar3 - *(float *)(&DAT_00709f2c + iVar5 * 0x340);
      if (fVar2 * fVar2 + fVar3 * fVar3 < local_14) {
        return 1;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004153a0 FUN_004153a0 ==== */

uint FUN_004153a0(int param_1)

{
  int iVar1;
  int iVar2;
  int i;
  int iVar3;
  int *piVar4;
  
  i = 0;
  iVar3 = param_1 * 0x38;
  iVar1 = (&DAT_005d1ba8)[param_1 * 0xe];
  if (0 < (int)DAT_00712108) {
    piVar4 = &DAT_00709f08;
    do {
      if (piVar4[2] == 0xb) {
        iVar2 = FUN_004151f0(i);
        if ((((iVar2 == 0) && (*(int *)(&DAT_005d1bc4 + iVar3) == 0)) && (*piVar4 != 0)) &&
           ((piVar4[0xce] == 0 && (*piVar4 == (&DAT_005d1bb4)[param_1 * 0xe])))) {
          iVar2 = FUN_00558625();
          if (iVar2 % 100 < 0x32) {
            (&DAT_005d1bac)[param_1 * 0xe] = 6;
            (&DAT_005d1bc0)[param_1 * 0xe] = i;
            *(undefined4 *)(&DAT_005d1bbc + iVar3) = 0;
            (&DAT_0070a240)[i * 0xd0] = 1;
            return CONCAT31((int3)((uint)(i * 0x340) >> 8),1);
          }
        }
        if (piVar4[2] == 0xb) {
          iVar2 = FUN_004151f0(i);
          if (((iVar2 == 1) && (*(int *)(&DAT_005d1bc4 + iVar3) == 1)) &&
             ((*piVar4 != 0 && ((piVar4[0xce] == 0 && (*piVar4 == (&DAT_005d1bb4)[param_1 * 0xe]))))
             )) {
            iVar2 = FUN_00558625();
            if (iVar2 % 100 < 0x32) {
              (&DAT_005d1bac)[param_1 * 0xe] = 6;
              (&DAT_005d1bc0)[param_1 * 0xe] = i;
              *(undefined4 *)(&DAT_005d1bbc + iVar3) = 0;
              (&DAT_0070a240)[i * 0xd0] = 1;
              return CONCAT31((int3)((uint)(iVar2 / 100) >> 8),1);
            }
          }
        }
      }
      if (piVar4[2] == 0xc) {
        iVar2 = FUN_004151f0(i);
        if ((((iVar2 == 0) && (*(int *)(&DAT_005d1bc4 + iVar3) == 0)) &&
            (iVar2 = *piVar4, iVar2 != 0)) &&
           ((iVar2 == (&DAT_005d1bb4)[param_1 * 0xe] ||
            (iVar2 == *(int *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50))))) {
LAB_00415583:
          (&DAT_005d1bac)[param_1 * 0xe] = 6;
          (&DAT_005d1bc0)[param_1 * 0xe] = i;
          *(undefined4 *)(&DAT_005d1bbc + iVar3) = 0;
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
        if (piVar4[2] == 0xc) {
          iVar2 = FUN_004151f0(i);
          if (((iVar2 == 1) && (*(int *)(&DAT_005d1bc4 + iVar3) == 1)) &&
             ((iVar2 = *piVar4, iVar2 != 0 &&
              ((iVar2 == (&DAT_005d1bb4)[param_1 * 0xe] ||
               (iVar2 == *(int *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50))))))) goto LAB_00415583;
        }
      }
      i = i + 1;
      piVar4 = piVar4 + 0xd0;
    } while (i < (int)DAT_00712108);
  }
  return DAT_00712108 & 0xffffff00;
}


/* ==== 004155b0 FUN_004155b0 ==== */

int FUN_004155b0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 * 0xf0 + 0x3c + DAT_00715e50);
  iVar2 = FUN_00422f70(param_1,iVar3,0,1,0);
  if (iVar2 != -1) {
    cVar1 = FUN_00422f20(param_1,iVar2,2,0);
    if (cVar1 == '\x01') {
      return (-(uint)(param_2 != '\0') & 0xfffffffe) + 9;
    }
  }
  iVar3 = FUN_00422f70(param_1,iVar3,2,1,0);
  if (iVar3 != -1) {
    cVar1 = FUN_00422f20(param_1,iVar3,2,0);
    if (cVar1 == '\x01') {
      return (-(uint)(param_2 != '\0') & 0xfffffffe) + 10;
    }
  }
  return 0;
}


/* ==== 00415640 FUN_00415640 ==== */

void __thiscall FUN_00415640(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int i;
  int iVar6;
  float10 fVar7;
  
  iVar1 = (&DAT_005d1ba8)[param_2 * 0xe];
  if ((0 < DAT_00712108) &&
     (iVar3 = FUN_004641a0((&DAT_005d1bc0)[param_2 * 0xe]), (&DAT_00709f10)[iVar3 * 0xd0] == 10)) {
    uVar4 = FUN_00407d20(*(undefined4 *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50),
                         *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    if (DAT_006fb8b0 + -1 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
      *(undefined4 *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) = 0;
      FUN_00414000(iVar1);
      return;
    }
  }
  iVar3 = iVar1 * 0xf0;
  if (*(int *)(iVar3 + 100 + DAT_00715e50) != 1) {
    i = *(int *)(iVar3 + 0x34 + DAT_00715e50);
    iVar6 = DAT_00715e50;
    if (i != (&DAT_005d1bb4)[param_2 * 0xe]) {
      (&DAT_005d1bb4)[param_2 * 0xe] = i;
      cVar2 = FUN_004153a0(param_2);
      if (cVar2 == '\x01') {
        return;
      }
      i = 0;
      iVar6 = DAT_00715e50;
      do {
        uVar5 = *(undefined4 *)
                 (DAT_00715f00 + 0xfc + (i + *(int *)(iVar3 + 0x34 + iVar6) * 0x265) * 4);
        switch(uVar5) {
        case 4:
        case 5:
        case 6:
        case 8:
          fVar7 = (float10)FUN_00413de0(uVar5,(&DAT_005d1bb8)[param_2 * 0xe]);
          *(float *)(&DAT_005d1bcc + param_2 * 0x38) = (float)fVar7;
          iVar6 = DAT_00715e50;
          break;
        case 0x2c:
          (&DAT_005d1bac)[param_2 * 0xe] = 2;
          return;
        }
        i = i + 1;
      } while (i < 2);
    }
    if (((*(int *)(*(int *)(iVar3 + 0x3c + iVar6) * 0x50 + 4 + DAT_00715eb8) == 10) &&
        (DAT_005a3ab4 == 0)) && (((&DAT_005d1bb8)[param_2 * 0xe] & 0x800) == 0)) {
      (&DAT_005d1bac)[param_2 * 0xe] = 1;
      return;
    }
    if (((&DAT_005d1bb8)[param_2 * 0xe] & 0x20) == 0) {
      iVar3 = (-(uint)(((&DAT_005d1bb8)[param_2 * 0xe] & 0x80) != 0) & 0xfffffffe) + 5;
    }
    else {
      iVar3 = 10;
    }
    cVar2 = FUN_00423040(iVar1,iVar3);
    if (cVar2 != '\0') {
      uVar5 = FUN_004155b0((&DAT_005d1ba8)[param_2 * 0xe],1);
      (&DAT_005d1bac)[param_2 * 0xe] = uVar5;
    }
  }
  return;
}


/* ==== 00415860 FUN_00415860 ==== */

void FUN_00415860(int param_1)

{
  if (DAT_005a3ab4 != 0) {
    (&DAT_005d1bac)[param_1 * 0xe] = 0;
  }
  return;
}


/* ==== 00415890 FUN_00415890 ==== */

void FUN_00415890(int param_1)

{
  if (*(float *)(&DAT_005d1bc8 + param_1 * 0x38) < 0.0) {
    if (((&DAT_005d1bb8)[param_1 * 0xe] & 3) == 2) {
      (&DAT_005d1bac)[param_1 * 0xe] = 4;
    }
    else if (((&DAT_005d1bb8)[param_1 * 0xe] & 3) == 3) {
      (&DAT_005d1bac)[param_1 * 0xe] = 5;
    }
    else {
      (&DAT_005d1bac)[param_1 * 0xe] = *(undefined4 *)(&DAT_005d1bb0 + param_1 * 0x38);
    }
    *(undefined4 *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0x60 + DAT_00715e50) = 1;
  }
  return;
}


/* ==== 00415910 FUN_00415910 ==== */

void FUN_00415910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  if (*(int *)(&DAT_005d1bbc + param_1 * 0x38) == *(int *)(&DAT_00709f1c + iVar1 * 0x340)) {
    *(undefined4 *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0x5c + DAT_00715e50) = 0;
    FUN_00414000((&DAT_005d1ba8)[param_1 * 0xe]);
  }
  return;
}


/* ==== 00415980 FUN_00415980 ==== */

undefined4 FUN_00415980(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int i;
  
  i = 0;
  iVar4 = (&DAT_005d1ba8)[param_1 * 0xe] * 0xf0;
  iVar2 = *(int *)(DAT_00715f00 + 0xf8 + *(int *)(iVar4 + 0x34 + DAT_00715e50) * 0x994);
  if (0 < iVar2) {
    do {
      iVar1 = iVar4 + DAT_00715e50;
      iVar3 = FUN_004a6d70(*(undefined4 *)(iVar4 + 0x34 + DAT_00715e50),i,1);
      if (iVar3 == *(int *)(iVar1 + 0x3c)) {
        return 1;
      }
      i = i + 1;
    } while (i < iVar2);
  }
  return 0;
}


/* ==== 00415a10 FUN_00415a10 ==== */

void FUN_00415a10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 * 0x38;
  iVar5 = (&DAT_005d1ba8)[param_1 * 0xe];
  iVar2 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  if (*(int *)(&DAT_005d1bbc + iVar6) == *(int *)(&DAT_00709f1c + iVar2 * 0x340)) {
    iVar5 = iVar5 * 0xf0;
    piVar1 = (int *)(iVar5 + 0x3c + DAT_00715e50);
    *(undefined4 *)(iVar5 + 0xcc + DAT_00715e50) = 0;
    iVar2 = DAT_00715e50;
    iVar3 = *piVar1 * 0x50 + DAT_00715eb8;
    if ((*(int *)(iVar3 + 0x24) < 2) &&
       ((iVar3 = *(int *)(iVar3 + 0x20), iVar3 == -1 ||
        ((iVar3 = iVar3 * 0x50 + DAT_00715eb8, *(int *)(iVar3 + 0x24) < 1 &&
         ((iVar3 = *(int *)(iVar3 + 0x20), iVar3 == -1 ||
          (*(int *)(iVar3 * 0x50 + 0x24 + DAT_00715eb8) < 1)))))))) {
      (&DAT_005d1bac)[param_1 * 0xe] = 0;
      *(undefined4 *)(&DAT_005d1bc8 + iVar6) = 0;
      uVar4 = FUN_00415980(param_1);
      *(undefined4 *)(iVar5 + iVar2 + 0x50) = uVar4;
      *(undefined4 *)(&DAT_005d1bc4 + iVar6) = *(undefined4 *)(iVar5 + 0x50 + DAT_00715e50);
    }
  }
  return;
}


/* ==== 00415af0 FUN_00415af0 ==== */

void FUN_00415af0(void)

{
  return;
}


/* ==== 00415b00 FUN_00415b00 ==== */

void FUN_00415b00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00423040((&DAT_005d1ba8)[param_1 * 0xe],5);
  if (cVar1 != '\0') {
    uVar2 = FUN_004155b0((&DAT_005d1ba8)[param_1 * 0xe],1);
    (&DAT_005d1bac)[param_1 * 0xe] = uVar2;
  }
  return;
}


/* ==== 00415b40 FUN_00415b40 ==== */

void FUN_00415b40(int param_1)

{
  int iVar1;
  int i;
  
  iVar1 = *(int *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0x3c + DAT_00715e50);
  i = 0;
  do {
    if (iVar1 == *(int *)(&DAT_005d1bbc + param_1 * 0x38)) {
      return;
    }
    i = i + 1;
    iVar1 = *(int *)(iVar1 * 0x50 + 0x20 + DAT_00715eb8);
  } while ((iVar1 != -1) && (i < 5));
  (&DAT_005d1bac)[param_1 * 0xe] = 0;
  return;
}


/* ==== 00415ba0 FUN_00415ba0 ==== */

void FUN_00415ba0(int param_1)

{
  switch((&DAT_005d1bac)[param_1 * 0xe]) {
  case 0:
    FUN_00415640((&DAT_005d1bac)[param_1 * 0xe],param_1);
    return;
  case 1:
    FUN_00415860(param_1);
    return;
  case 2:
    break;
  case 3:
    FUN_00415890(param_1);
    return;
  case 4:
    FUN_00415910(param_1);
    return;
  case 5:
    FUN_00415a10(param_1);
    return;
  case 6:
    FUN_00415af0(param_1);
    return;
  case 7:
  case 8:
    FUN_00415b00(param_1);
    return;
  case 9:
  case 10:
    FUN_00415b40(param_1);
    return;
  default:
    FUN_004c4150(s___s___d_Traffic_object_has_illeg_00592e1c,
                 s_C__Work_A2IV_Game_prog_ai_nwtrf__00592df8,0x7d3);
  }
  return;
}


/* ==== 00415c60 FUN_00415c60 ==== */

void FUN_00415c60(int param_1)

{
  switch((&DAT_005d1bac)[param_1 * 0xe]) {
  case 0:
    FUN_00414950(param_1);
    return;
  case 1:
    FUN_00414c00(param_1);
    return;
  case 2:
    FUN_00414c80(param_1);
    return;
  case 3:
    FUN_00414cc0(param_1);
    return;
  case 4:
    FUN_00414d60(param_1);
    return;
  case 5:
    FUN_00414f30(param_1);
    return;
  case 6:
    FUN_004150e0(param_1);
    return;
  case 7:
  case 8:
    FUN_00414bd0(param_1);
    return;
  case 9:
  case 10:
    FUN_00414bc0(param_1);
    return;
  default:
    FUN_004c4150(s___s___d_Traffic_object_has_illeg_00592e6c,
                 s_C__Work_A2IV_Game_prog_ai_nwtrf__00592e48,0x7ff);
    return;
  }
}


/* ==== 00415d20 FUN_00415d20 ==== */

undefined4 FUN_00415d20(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_68 [92];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569aea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049e180(local_68);
  local_4 = 0;
  iVar3 = param_1 * 0xf0;
  uVar2 = FUN_00407d20(*(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50),
                       *(undefined4 *)(iVar3 + 0x34 + DAT_00715e50));
  if (DAT_006fb8b0 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
    cVar1 = FUN_004a1f10(*(undefined4 *)(iVar3 + 0x10 + DAT_00715e50));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar3 + 0x5c + DAT_00715e50) = 0;
      FUN_004f21f0(*(undefined4 *)(*(int *)(iVar3 + 0x10 + DAT_00715e50) + 8),0);
    }
  }
  else {
    iVar3 = FUN_00414070(param_1);
    if (iVar3 != -1) {
      FUN_00415c60(iVar3);
      FUN_00415ba0(iVar3);
      if (((&DAT_005d1bb8)[iVar3 * 0xe] & 0x2000) != 0) {
        FUN_00412e20();
      }
      FUN_00436510(param_1,1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0049e200(local_68);
  ExceptionList = local_c;
  return 1;
}


/* ==== 00415e40 FUN_00415e40 ==== */

void FUN_00415e40(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [8];
  float local_10;
  undefined1 local_c [12];
  
  param_1 = param_1 * 0xf0;
  if (0.9 < *(float *)(DAT_0073b0d0 + *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 + 0x24)) {
    iVar4 = FUN_004a8c50(param_1 + DAT_00715e50);
    iVar4 = iVar4 * 0xac;
    pfVar5 = (float *)FUN_004066c0(local_18,*(float *)(iVar4 + 0x4c + DAT_0073b5c8) * 0.5,
                                   *(float *)(iVar4 + 0x50 + DAT_0073b5c8) * 0.5,
                                   *(float *)(iVar4 + 0x54 + DAT_0073b5c8) * 0.5);
    local_30 = *pfVar5;
    local_2c = pfVar5[1];
    local_28 = pfVar5[2];
    pfVar5 = (float *)FUN_004066c0(&local_24,local_30 + *(float *)(iVar4 + 0x1c + DAT_0073b5c8),
                                   local_2c + *(float *)(iVar4 + 0x20 + DAT_0073b5c8),
                                   local_28 + *(float *)(iVar4 + 0x24 + DAT_0073b5c8));
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    local_10 = pfVar5[2];
    pfVar5 = (float *)FUN_004066c0(local_c,*(float *)(iVar4 + 0x40 + DAT_0073b5c8) * 0.5,
                                   *(float *)(iVar4 + 0x44 + DAT_0073b5c8) * 0.5,
                                   *(float *)(iVar4 + 0x48 + DAT_0073b5c8) * 0.5);
    local_30 = *pfVar5;
    local_2c = pfVar5[1];
    local_28 = pfVar5[2];
    local_24 = local_30 + *(float *)(iVar4 + 0x10 + DAT_0073b5c8);
    pfVar5 = (float *)(iVar4 + 0x10 + DAT_0073b5c8);
    local_20 = local_2c + pfVar5[1];
    local_1c = local_28 + pfVar5[2];
    FUN_004066c0(local_c,*(float *)(iVar4 + 0x1c + DAT_0073b5c8) * 0.5 + *pfVar5,
                 *(float *)(iVar4 + 0x20 + DAT_0073b5c8) * 0.5 + pfVar5[1],
                 *(float *)(iVar4 + 0x24 + DAT_0073b5c8) * 0.5 + pfVar5[2]);
    local_38 = 0.0;
    local_34 = 0.0;
    fVar3 = 1.0 / *(float *)(param_1 + 0xb0 + DAT_00715e50);
    if (0.0 < param_2[1]) {
      local_34 = fVar3 * 0.013 * param_2[1];
    }
    if (0.0 < param_2[2]) {
      local_34 = -(param_2[2] * 0.013 * fVar3);
    }
    local_3c = -(fVar3 * 0.0033333334 * *param_2) * 0.1;
    FUN_004a2000(*(undefined4 *)(param_1 + 0x10 + DAT_00715e50),&local_3c);
    local_34 = 0.0;
    local_3c = -(fVar3 * *(float *)(param_1 + 0xbc + DAT_00715e50));
    pfVar5 = (float *)FUN_004b42a0(local_c,&local_3c,
                                   DAT_0073b0d0 + *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 +
                                   0x10);
    local_3c = *pfVar5;
    local_38 = pfVar5[1];
    local_34 = pfVar5[2];
    fVar6 = local_1c;
    fVar7 = local_24;
    fVar8 = local_20;
    if (*(float *)(param_1 + DAT_00715e50 + 0xbc) < 0.0) {
      fVar6 = local_10;
      fVar7 = fVar1;
      fVar8 = fVar2;
    }
    FUN_004a9830(param_1 + DAT_00715e50,*pfVar5,pfVar5[1],pfVar5[2],fVar7,fVar8,fVar6);
    local_3c = 0.0;
    local_34 = 0.0;
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    local_38 = -fVar3 * ABS(*(float *)(param_1 + 0xc4 + DAT_00715e50)) * 0.12;
    FUN_004a9830(param_1 + DAT_00715e50,0,local_38,0,0,0,0);
  }
  return;
}


