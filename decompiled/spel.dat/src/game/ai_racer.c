/* spel.dat — game/ai_racer.cpp: 29 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00419000 FUN_00419000 ==== */

void FUN_00419000(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined *this_val;
  
  uVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  this_val = &DAT_005cea7c + param_1 * 0x294;
  FUN_00403040(this_val,1);
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  FUN_00402e20(this_val,(float)(fVar2 * (float10)75.0));
  FUN_00402ea0(this_val,0);
  FUN_00402e40(this_val,0);
  FUN_00403100(this_val,0);
  FUN_00427b90(uVar1,this_val);
  return;
}


/* ==== 00419120 FUN_00419120 ==== */

undefined4 FUN_00419120(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar1 = false;
  if (-1 < param_2) {
    iVar3 = DAT_00715eb8 + param_2 * 0x50;
    iVar2 = *(int *)(iVar3 + 0x14);
    if (((iVar2 < 0) && (iVar2 = *(int *)(iVar3 + 0x1c), iVar2 < 0)) &&
       (iVar2 = *(int *)(iVar3 + 0x18), iVar2 < 0)) {
      iVar2 = *(int *)(iVar3 + 0x20);
      if (iVar2 < 0) {
        return 1;
      }
      bVar1 = true;
    }
    FUN_00422ab0(iVar2,&local_c);
    iVar3 = FUN_00403ea0(param_1,local_c,local_8,local_4);
    iVar2 = iVar3;
    if ((bVar1) && (iVar2 = iVar3 + -0x800, iVar2 < 0)) {
      iVar2 = iVar3 + 0x800;
    }
    if ((0x3ff < iVar2) && (iVar2 < 0xc01)) {
      return 0xffffffff;
    }
  }
  return 1;
}


/* ==== 004191c0 FUN_004191c0 ==== */

void FUN_004191c0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined *this_val;
  
  uVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  this_val = &DAT_005cea7c + param_1 * 0x294;
  FUN_00403040(this_val,1);
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  FUN_00402e20(this_val,(float)(fVar2 * (float10)75.0));
  FUN_00402ea0(this_val,0);
  FUN_00402e40(this_val,0);
  FUN_00427b90(uVar1,this_val);
  return;
}


/* ==== 00419270 FUN_00419270 ==== */

void FUN_00419270(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00419280 FUN_00419280 ==== */

void FUN_00419280(void)

{
  FUN_005584e0(&LAB_00419290);
  return;
}


/* ==== 004192b0 FUN_004192b0 ==== */

void FUN_004192b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004192c0 FUN_004192c0 ==== */

void FUN_004192c0(void)

{
  FUN_005584e0(&LAB_004192d0);
  return;
}


/* ==== 00419450 FUN_00419450 ==== */

undefined4 FUN_00419450(int param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined1 local_c [12];
  undefined2 uVar4;
  
  if (*(int *)(param_1 * 0xf0 + 0x10 + DAT_00715e50) == 0) {
    FUN_004c4150(s___s___d_Test_requested_for_a_non_00593b30,
                 s_C__Work_A2IV_Game_prog_ai_racer__00593b0c,0xa4,param_1);
  }
  pfVar2 = (float *)FUN_004a1d20(*(undefined4 *)(param_1 * 0xf0 + 0x10 + DAT_00715e50),local_c);
  fVar1 = ABS(*pfVar2);
  uVar4 = (undefined2)((uint)pfVar2[2] >> 0x10);
  uVar3 = CONCAT22(uVar4,(ushort)(10.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 10.0) << 0xe);
  if (10.0 < fVar1 == 0) {
    fVar1 = ABS(pfVar2[1]);
    uVar3 = CONCAT22(uVar4,(ushort)(10.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 10.0) << 0xe);
    if (10.0 < fVar1 == 0) {
      fVar1 = ABS(pfVar2[2]);
      uVar3 = CONCAT22(uVar4,(ushort)(10.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                             (ushort)(fVar1 == 10.0) << 0xe);
      if (10.0 >= fVar1) {
        return uVar3;
      }
    }
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


/* ==== 004195e0 FUN_004195e0 ==== */

void FUN_004195e0(undefined1 param_1)

{
  DAT_005d3111 = param_1;
  return;
}


/* ==== 004195f0 FUN_004195f0 ==== */

undefined1 FUN_004195f0(void)

{
  return DAT_005d3112;
}


/* ==== 004198b0 FUN_004198b0 ==== */

void FUN_004198b0(int param_1,char *param_2)

{
  int i;
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  
  if ((DAT_005d2ab0 <= param_1) || (param_1 < 0)) {
    FUN_004c4150(s___s___d_Given_index_is_not_a_rac_00593c40);
  }
  i = 7;
  bVar3 = true;
  pcVar1 = param_2;
  pcVar2 = s_NOVICE_00593c6c;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 1;
    return;
  }
  i = 7;
  bVar3 = true;
  pcVar1 = param_2;
  pcVar2 = s_NORMAL_00593c74;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 2;
    return;
  }
  i = 8;
  bVar3 = true;
  pcVar1 = param_2;
  pcVar2 = s_SKILLED_00593c7c;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 4;
    return;
  }
  i = 0xb;
  bVar3 = true;
  pcVar1 = param_2;
  pcVar2 = s_IRRITATING_00593c84;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 8;
    return;
  }
  i = 0xb;
  bVar3 = true;
  pcVar1 = param_2;
  pcVar2 = s_AGGRESSIVE_00593c90;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 0x10;
    return;
  }
  i = 8;
  bVar3 = true;
  pcVar1 = param_2;
  pcVar2 = s_PUSHING_00593c9c;
  do {
    if (i == 0) break;
    i = i + -1;
    bVar3 = *pcVar1 == *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 0x20;
    return;
  }
  FUN_004c4150(s___s___d_Unknown_racer_parameter___00593cc8,
               s_C__Work_A2IV_Game_prog_ai_racer__00593ca4,0x252,param_2);
  return;
}


/* ==== 004199f0 FUN_004199f0 ==== */

void FUN_004199f0(int param_1,int param_2)

{
  int iVar1;
  int i;
  int *piVar2;
  
  i = 0;
  piVar2 = (int *)(&DAT_005cea0c + param_1 * 0x294);
  do {
    iVar1 = FUN_004c3ec0(i + param_2);
    *piVar2 = iVar1 + -1;
    i = i + 1;
    piVar2 = piVar2 + 1;
  } while (i < 10);
  return;
}


/* ==== 00419a30 FUN_00419a30 ==== */

void FUN_00419a30(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int m;
  int k;
  int j;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  int i;
  undefined1 local_184 [4];
  undefined1 *local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined1 local_174 [4];
  undefined1 *local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int local_164;
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c [4];
  undefined1 *local_148;
  undefined1 local_13c [16];
  char local_12c [32];
  undefined1 local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569bc2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_14c,0);
  local_4 = 0;
  FUN_004028f0(local_184,0);
  local_4._0_1_ = 1;
  FUN_004028f0(local_174,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004489a0(&DAT_006fa558,s_OPPONENT_INI_00593d00,s_AI_Racer_Settings_00593cec);
  FUN_00448c90(&DAT_006fa558,s_AI_Racer_Settings_00593d10);
  FUN_004c3b60();
  i = 0;
  if (0 < DAT_005d2ab0) {
    do {
      j = 0;
      FUN_005587a3(local_160,s__d_00593d24,DAT_006fb898);
      uVar2 = FUN_0049df90(local_15c,PTR_s_Racer__d_Level__d_005937c4);
      local_4._0_1_ = 3;
      FUN_004093c0(local_14c,uVar2,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004028f0(local_15c,1);
      puVar3 = local_148;
      if (local_148 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      FUN_004c3d10(puVar3,local_160,local_10c,0xff);
      local_164 = FUN_004c3d60(local_10c,0);
      if (0 < local_164) {
        k = 1;
        do {
          FUN_004c3f10(j,local_12c,0x1f);
          m = 10;
          bVar9 = true;
          pcVar6 = local_12c;
          pcVar7 = s_TARGETPOS_00593d28;
          do {
            if (m == 0) break;
            m = m + -1;
            bVar9 = *pcVar6 == *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar9);
          if (bVar9) {
            FUN_004199f0(i,k);
            j = j + 10;
            k = k + 10;
          }
          else {
            FUN_004198b0(i,local_12c);
          }
          j = j + 1;
          k = k + 1;
        } while (j < local_164);
      }
      i = i + 1;
    } while (i < DAT_005d2ab0);
  }
  if (0 < DAT_005d2ab0) {
    piVar5 = &DAT_005d2bb0;
    j = 0;
    do {
      uVar2 = FUN_0049df90(local_13c,PTR_s_Level__d_005937c8);
      local_4._0_1_ = 4;
      FUN_004093c0(local_184,uVar2,0,0xffffffff);
      local_4._0_1_ = 2;
      FUN_004028f0(local_13c,1);
      k = j + 1;
      uVar2 = FUN_0049df90(local_15c,PTR_s_Distance_d_d_005937cc);
      local_4._0_1_ = 5;
      FUN_004093c0(local_174,uVar2,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (local_158 != 0) {
        cVar1 = *(char *)(local_158 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_158 + -1));
        }
        else {
          *(char *)(local_158 + -1) = cVar1 + -1;
        }
      }
      local_158 = 0;
      local_154 = 0;
      local_150 = 0;
      puVar3 = local_170;
      if (local_170 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      puVar4 = local_180;
      if (local_180 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      m = FUN_004c3cd0(puVar4,puVar3);
      *piVar5 = m;
      if (m == 0) {
        FUN_004c4150(s___s___d_Could_not_find_maximum_d_00593da4,
                     s_C__Work_A2IV_Game_prog_ai_racer__00593d80,699,j,k);
      }
      piVar5 = piVar5 + 1;
      j = k;
    } while (k < DAT_005d2ab0);
  }
  puVar8 = &DAT_005d2cb0;
  for (j = 0x8c; j != 0; j = j + -1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  puVar8 = &DAT_005d2ee0;
  for (j = 0x8c; j != 0; j = j + -1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  FUN_004c3fa0(s_Ready_loading_track_specific_AI_s_00593de0);
  if (local_170 != (undefined1 *)0x0) {
    cVar1 = local_170[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_170 + -1);
    }
    else {
      local_170[-1] = cVar1 + -1;
    }
  }
  local_170 = (undefined1 *)0x0;
  uStack_16c = 0;
  uStack_168 = 0;
  if (local_180 != (undefined1 *)0x0) {
    cVar1 = local_180[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_180 + -1);
    }
    else {
      local_180[-1] = cVar1 + -1;
    }
  }
  local_180 = (undefined1 *)0x0;
  uStack_17c = 0;
  uStack_178 = 0;
  if (local_148 != (undefined1 *)0x0) {
    cVar1 = local_148[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_148[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(local_148 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00419e00 FUN_00419e00 ==== */

void FUN_00419e00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea48 + iVar3) = 0;
  iVar2 = FUN_00418890(param_1);
  puVar1 = (undefined4 *)((&DAT_005d2b78)[iVar2 * 3] * 0x50 + 8 + DAT_00715eb8);
  FUN_00403c70(param_1,iVar2,*puVar1,puVar1[1],puVar1[2]);
  FUN_00403cd0(param_1);
  fVar4 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)(&DAT_005cea54 + iVar3) = (float)(fVar4 + (float10)*(float *)(&DAT_005cea54 + iVar3));
  return;
}


/* ==== 00419e80 FUN_00419e80 ==== */

void FUN_00419e80(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1 * 0x294;
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if (2.0 <= *(float *)(&DAT_005cea54 + iVar2)) {
    FUN_00402ea0(&DAT_005cea7c + iVar2,0);
    iVar1 = FUN_00558625();
    FUN_00402de0(&DAT_005cea7c + iVar2,(float)(0x14 - iVar1 % 0x28));
    *(undefined4 *)(&DAT_005cea58 + iVar2) = 0;
    *(undefined4 *)(&DAT_005cea54 + iVar2) = 0xc0400000;
    FUN_00403cd0(param_1);
    return;
  }
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  FUN_00402e80(&DAT_005cea7c + iVar2,(float)(fVar3 * (float10)100.0));
  if (*(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50) < 2.0) {
    fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
    *(float *)(&DAT_005cea58 + iVar2) = (float)(fVar3 + (float10)*(float *)(&DAT_005cea58 + iVar2));
  }
  FUN_00403cd0(param_1);
  return;
}


/* ==== 00419f70 FUN_00419f70 ==== */

void FUN_00419f70(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
  uVar2 = FUN_004235f0(param_1);
  *(undefined4 *)(&DAT_005cea48 + iVar4) = uVar2;
  iVar3 = FUN_00418890(param_1);
  puVar1 = (undefined4 *)((&DAT_005d2b78)[iVar3 * 3] * 0x50 + 8 + DAT_00715eb8);
  FUN_00403c70(param_1,iVar3,*puVar1,puVar1[1],puVar1[2]);
  FUN_00403cd0(param_1);
  fVar5 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)(&DAT_005cea54 + iVar4) = (float)(fVar5 + (float10)*(float *)(&DAT_005cea54 + iVar4));
  return;
}


/* ==== 0041a000 FUN_0041a000 ==== */

void FUN_0041a000(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
  uVar2 = FUN_004235f0(param_1);
  *(undefined4 *)(&DAT_005cea48 + iVar4) = uVar2;
  iVar3 = FUN_00418890(param_1);
  puVar1 = (undefined4 *)((&DAT_005d2b78)[iVar3 * 3] * 0x50 + 8 + DAT_00715eb8);
  FUN_00403c70(param_1,iVar3,*puVar1,puVar1[1],puVar1[2]);
  FUN_00403cd0(param_1);
  fVar5 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)(&DAT_005cea54 + iVar4) = (float)(fVar5 + (float10)*(float *)(&DAT_005cea54 + iVar4));
  return;
}


/* ==== 0041a090 FUN_0041a090 ==== */

void FUN_0041a090(float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  
  if ((&DAT_005ce9ec)[param_2 * 0xa5] == 0x16) {
    uVar7 = 6;
  }
  else {
    uVar7 = 7;
  }
  iVar6 = FUN_00423290(param_3,uVar7);
  if (iVar6 == -1) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return;
  }
  pfVar1 = (float *)(param_3 * 0x50 + 8 + DAT_00715eb8);
  pfVar2 = (float *)(iVar6 * 0x50 + 8 + DAT_00715eb8);
  fVar4 = pfVar1[2];
  fVar5 = pfVar2[2];
  fVar3 = *(float *)(&DAT_005cea50 + param_2 * 0x294);
  *param_1 = (*pfVar2 - *pfVar1) * fVar3 * 0.4;
  param_1[1] = 0.0;
  param_1[2] = (fVar5 - fVar4) * fVar3 * 0.4;
  return;
}


/* ==== 0041a1a0 FUN_0041a1a0 ==== */

void FUN_0041a1a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  undefined1 local_c [12];
  
  iVar4 = FUN_00418890(param_1);
  pfVar5 = (float *)((&DAT_005d2b78)[iVar4 * 3] * 0x50 + 8 + DAT_00715eb8);
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  pfVar5 = (float *)FUN_0041a090(local_c,param_1,(&DAT_005d2b78)[iVar4 * 3]);
  FUN_00403c70(param_1,iVar4,fVar1 + *pfVar5,fVar2 + pfVar5[1],fVar3 + pfVar5[2]);
  FUN_00403cd0(param_1);
  param_1 = param_1 * 0x294;
  fVar6 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)(&DAT_005cea54 + param_1) =
       (float)(fVar6 + (float10)*(float *)(&DAT_005cea54 + param_1));
  fVar6 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)(&DAT_005cea50 + param_1) =
       (float)(fVar6 + (float10)*(float *)(&DAT_005cea50 + param_1));
  return;
}


/* ==== 0041a280 FUN_0041a280 ==== */

undefined4 FUN_0041a280(int param_1)

{
  int *piVar1;
  int i;
  undefined4 *puVar2;
  
  if ((param_1 < 0) || (DAT_005d2ab0 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_position_given___00593e30,
                 s_C__Work_A2IV_Game_prog_ai_racer__00593e0c,0x3f5,param_1);
  }
  if (DAT_006fbaa4 == param_1) {
    return DAT_006fba58;
  }
  i = 0;
  if (DAT_005973c8 != param_1) {
    puVar2 = &DAT_005973c8;
    do {
      if (DAT_005d2ab0 <= i) break;
      piVar1 = puVar2 + 0x16;
      puVar2 = puVar2 + 0x16;
      i = i + 1;
    } while (*piVar1 != param_1);
  }
  if (i == DAT_005d2ab0) {
    return DAT_006fba58;
  }
  return (&DAT_005ce9e8)[i * 0xa5];
}


/* ==== 0041a300 FUN_0041a300 ==== */

void FUN_0041a300(float param_1)

{
  int this_val;
  int __ftol_result;
  undefined4 this_val_2;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  iVar2 = (int)param_1 * 0x294;
  param_1 = (float)(((&DAT_005cea38)[(int)param_1 * 0xa5] * 100) / (DAT_00715f04 * DAT_006fb8fc)) *
            0.1;
  if (0.0 <= param_1) {
    if (9.5 < param_1) {
      param_1 = 9.5;
    }
  }
  else {
    param_1 = 0.0;
  }
  FUN_005589b8(DAT_00715f04 * DAT_006fb8fc,(double)param_1);
  this_val = __ftol();
  this_val = *(int *)(&DAT_005cea0c + (this_val + iVar1 * 0xa5) * 4);
  FUN_005589b8(this_val,(double)(param_1 + param_1));
  __ftol_result = __ftol();
  if ((&DAT_005d2cb0)[__ftol_result + (&DAT_005973c0)[iVar1 * 0x16] * 0x14] == -1) {
    FUN_005589b8((&DAT_005973c0)[iVar1 * 0x16] * 5,(double)(param_1 + param_1));
    __ftol_result = __ftol();
    (&DAT_005d2cb0)[__ftol_result + (&DAT_005973c0)[iVar1 * 0x16] * 0x14] =
         (&DAT_005973c8)[iVar1 * 0x16];
    this_val_2 = FUN_00426f60(&DAT_005d3460);
    this_val_2 = FUN_00425300(this_val_2);
    FUN_005589b8();
    __ftol_result = __ftol();
    (&DAT_005d2ee0)[__ftol_result + (&DAT_005973c0)[iVar1 * 0x16] * 0x14] = this_val_2;
  }
  if (this_val != -1) {
    iVar1 = (&DAT_005973c8)[iVar1 * 0x16];
    if (this_val < iVar1) {
      if (*(int *)(&DAT_005cea08 + iVar2) == 1) {
        return;
      }
      *(undefined4 *)(&DAT_005cea08 + iVar2) = 1;
      return;
    }
    if (iVar1 < this_val) {
      if (*(int *)(&DAT_005cea08 + iVar2) == 2) {
        return;
      }
      *(undefined4 *)(&DAT_005cea08 + iVar2) = 2;
      return;
    }
    if (*(int *)(&DAT_005cea08 + iVar2) == 1) {
      if (iVar1 == DAT_005d2ab0) {
        return;
      }
      FUN_0041a280(iVar1 + 1);
      iVar1 = FUN_00407d20();
      if (ABS((double)iVar1) < 5.0) {
        return;
      }
    }
  }
  *(undefined4 *)(&DAT_005cea08 + iVar2) = 0;
  return;
}


/* ==== 0041a520 FUN_0041a520 ==== */

void FUN_0041a520(int param_1)

{
  FUN_00402ea0(&DAT_005cea7c + param_1 * 0x294,0);
  FUN_00402e40(&DAT_005cea7c + param_1 * 0x294,0);
  *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) = 0;
  *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xbc + DAT_00715e50) = 0;
  *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xcc + DAT_00715e50) = 0;
  return;
}


/* ==== 0041a5b0 FUN_0041a5b0 ==== */

void FUN_0041a5b0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int i;
  undefined4 this_val;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569bd4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  i = FUN_0040dad0(param_1);
  if (i == -1) {
    FUN_004c4150(s___s___d_Racer_Cop_Collision_hand_00593e78,
                 s_C__Work_A2IV_Game_prog_ai_racer__00593e54,0x4b2);
  }
  FUN_00426fe0(&DAT_005d3460,param_1,3,param_3,&stack0x00000010,0);
  if ((param_2 == DAT_006fba58) && (i = 0, 0 < DAT_005d2ab0)) {
    do {
      if ((&DAT_005973cc)[i * 0x16] == param_1) {
        FUN_0049df90(auStack_1c,s__racer_dcollision_00593ebc);
        i = DAT_005d2ab0;
        puVar2 = auStack_1c;
        uStack_4 = 0;
        iVar3 = param_1;
        this_val = FUN_004891a0(puVar2,param_1);
        FUN_0048a910(this_val,puVar2,iVar3);
        uStack_4 = 0xffffffff;
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(iStack_18 + -1);
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
      }
      i = i + 1;
    } while (i < DAT_005d2ab0);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0041a6d0 FUN_0041a6d0 ==== */

void FUN_0041a6d0(int param_1)

{
  undefined *this_val;
  
  this_val = &DAT_005cea7c + param_1 * 0x294;
  FUN_00402e40(this_val,0);
  FUN_00402ea0(this_val,0);
  FUN_00402de0(this_val,0);
  return;
}


/* ==== 0041a720 FUN_0041a720 ==== */

void FUN_0041a720(int param_1)

{
  undefined *this_val;
  
  this_val = &DAT_005cea7c + param_1 * 0x294;
  FUN_00402e40(this_val,0);
  FUN_00402ea0(this_val,0);
  FUN_00402de0(this_val,0);
  return;
}


/* ==== 0041a780 FUN_0041a780 ==== */

void FUN_0041a780(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0041a790 FUN_0041a790 ==== */

void FUN_0041a790(void)

{
  FUN_005584e0(&LAB_0041a7a0);
  return;
}


/* ==== 0041a7c0 FUN_0041a7c0 ==== */

void FUN_0041a7c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0041a7d0 FUN_0041a7d0 ==== */

void FUN_0041a7d0(void)

{
  FUN_005584e0(&LAB_0041a7e0);
  return;
}


