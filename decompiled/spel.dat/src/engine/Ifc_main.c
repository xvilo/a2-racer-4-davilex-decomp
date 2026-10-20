/* spel.dat — engine/Ifc_main.cpp: 24 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a6a10 FUN_004a6a10 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6a10(uint size,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int i;
  
  puVar1 = &DAT_00715300;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x715b00);
  puVar1 = &DAT_00714e48;
  for (i = 0x100; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  DAT_007152fc = 0;
  FUN_004a7700(size);
  puVar1 = &DAT_007128c8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x714e48);
  FUN_004c3fa0(s_Initializing_Physical_World_005af79c);
  DAT_00715b08 = FUN_004a3460();
  DAT_00715b0c = FUN_004a3460();
  FUN_004a3960(&DAT_00715f58,0x3c783e10);
  FUN_004c3fa0(s_Done_initializing_Physical_World_005af778);
  FUN_004c3fa0(s_settings_textures___d___d___d_005af758,param_2,param_4,param_3);
  _DAT_007152a4 = param_4;
  _DAT_007152a0 = param_3;
  _DAT_0071529c = param_2;
  _DAT_007152a8 = param_5;
  DAT_00715b14 = 1;
  return;
}


/* ==== 004a6ae0 FUN_004a6ae0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6ae0(undefined4 param_1)

{
  _DAT_00715b18 = param_1;
  return;
}


/* ==== 004a6af0 FUN_004a6af0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6af0(undefined4 param_1)

{
  _DAT_00715b10 = param_1;
  return;
}


/* ==== 004a6b00 FUN_004a6b00 ==== */

void FUN_004a6b00(undefined4 param_1)

{
  DAT_007152ec = param_1;
  return;
}


/* ==== 004a6b10 FUN_004a6b10 ==== */

void FUN_004a6b10(undefined4 param_1)

{
  if (DAT_00715b14 == 0) {
    FUN_004c4150(s__rceng_load_etappe__engine_not_i_005af7d4);
  }
  FUN_004c3fa0(s_loading_etappe___s_005af7bc,param_1);
  FUN_004ae490(&DAT_00715250,param_1);
  return;
}


/* ==== 004a6b50 FUN_004a6b50 ==== */

void FUN_004a6b50(void)

{
  FUN_004a7710();
  FUN_004c3fa0(s_Destroying_Physical_World_005af824);
  FUN_004a4070(&DAT_00715f58);
  FUN_004c3fa0(s_Done_destroying_Physical_World_005af800);
  return;
}


/* ==== 004a6b80 FUN_004a6b80 ==== */

void FUN_004a6b80(undefined4 param_1)

{
  DAT_007152fc = param_1;
  return;
}


/* ==== 004a6b90 FUN_004a6b90 ==== */

void FUN_004a6b90(undefined4 param_1)

{
  if (DAT_007152fc != (code *)0x0) {
    (*DAT_007152fc)(param_1);
  }
  return;
}


/* ==== 004a6bb0 FUN_004a6bb0 ==== */

void FUN_004a6bb0(int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x101)) {
    (&DAT_00715300)[param_1 * 2] = param_2;
    return;
  }
  FUN_004c4150(s___s___d_Trying_to_set_an_illegal_005af840,
               s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,0xe8,param_1);
  (&DAT_00715300)[param_1 * 2] = param_2;
  return;
}


/* ==== 004a6c00 FUN_004a6c00 ==== */

undefined4 FUN_004a6c00(int param_1)

{
  if ((param_1 < 0) || (0x100 < param_1)) {
    FUN_004c4150(s___s___d_Trying_to_get_an_illegal_005af89c,param_1,
                 s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,0xf6);
  }
  return (&DAT_00715300)[param_1 * 2];
}


/* ==== 004a6c40 FUN_004a6c40 ==== */

void FUN_004a6c40(int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x101)) {
    (&DAT_00714e48)[param_1] = param_2;
    return;
  }
  FUN_004c4150(s___s___d_Trying_to_set_an_illegal_005af8d8,
               s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,0x105,param_1);
  (&DAT_00714e48)[param_1] = param_2;
  return;
}


/* ==== 004a6c90 FUN_004a6c90 ==== */

void FUN_004a6c90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1 = param_1 * 0xf0;
  *(undefined4 *)(param_1 + 0x38 + DAT_00715e50) = *(undefined4 *)(param_1 + 0x34 + DAT_00715e50);
  iVar1 = param_1 + DAT_00715e50;
  iVar2 = DAT_0073b0d0 + *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9;
  uVar3 = FUN_004af230(&DAT_00715250,*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar2 + 0x50),
                       *(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(iVar2 + 0x58));
  *(undefined4 *)(iVar1 + 0x34) = uVar3;
  return;
}


/* ==== 004a6d00 FUN_004a6d00 ==== */

void FUN_004a6d00(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_2 < 0) || (DAT_00715f04 < param_2)) {
    FUN_004c4150(s___s___d_Illegal_chunk___d_005af910,s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,
                 0x13f,param_2);
  }
  iVar4 = FUN_004a6d70(param_2,param_3,param_4);
  puVar1 = (undefined4 *)(iVar4 * 0x50 + 8 + DAT_00715eb8);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}


/* ==== 004a6d70 FUN_004a6d70 ==== */

int FUN_004a6d70(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 < 0) || (DAT_00715f04 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_chunk___d_005af910,s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,
                 0x154,param_1);
  }
  if ((param_3 < 0) || (1 < param_3)) {
    FUN_004c4150(s___s___d_Illegal_side___d_005af948,s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,
                 0x15a,param_3);
  }
  if (param_2 < 0) {
    FUN_004c4150(s___s___d_Illegal_lane___d_005af92c,s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,
                 0x160,param_2);
  }
  if (param_3 == 0) {
    iVar1 = *(int *)(DAT_00715254 + param_1 * 4);
    if (*(int *)(DAT_00715f00 + 0xf4 + iVar1 * 0x994) <= param_2) {
      return 0;
    }
    return *(int *)(DAT_00715f00 + 0x134 + (param_2 + iVar1 * 0x265) * 4);
  }
  if (param_3 != 1) {
    return param_1;
  }
  iVar1 = *(int *)(DAT_00715254 + param_1 * 4);
  if (*(int *)(DAT_00715f00 + 0xf8 + iVar1 * 0x994) <= param_2) {
    return 0;
  }
  return *(int *)(DAT_00715f00 + 0x164 + (param_2 + iVar1 * 0x265) * 4);
}


/* ==== 004a6e80 FUN_004a6e80 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a6e80(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  if ((param_1 < 0) || (DAT_00715f04 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_chunk___d_005af910,s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,
                 0x192,param_1);
  }
  if ((param_2 < 0) || (1 < param_2)) {
    FUN_004c4150(s___s___d_Illegal_direction___d_005af964,
                 s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,0x198,param_2);
  }
  iVar1 = *(int *)(DAT_00715254 + param_1 * 4);
  fVar2 = *(float *)(DAT_00715f00 + 0x58 + iVar1 * 0x994);
  fVar3 = *(float *)(DAT_00715f00 + iVar1 * 0x994 + 0x60);
  fVar4 = SQRT((float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3);
  fVar2 = (float)((float10)fVar2 / fVar4);
  fVar4 = (float10)fVar3 / fVar4;
  if (param_2 != 0) {
    if (param_2 != 1) {
      return (float10)0.0;
    }
    fVar4 = (float10)fpatan(fVar4,(float10)fVar2);
    return ((fVar4 - (float10)3.1415927 * (float10)0.5) * (float10)_DAT_005b23b8) /
           (float10)6.2831855;
  }
  fVar4 = (float10)fpatan(fVar4,(float10)fVar2);
  return (float10)_DAT_005b23b8 * (float10)0.5 +
         ((fVar4 - (float10)3.1415927 * (float10)0.5) * (float10)_DAT_005b23b8) / (float10)6.2831855
  ;
}


/* ==== 004a6fa0 FUN_004a6fa0 ==== */

void FUN_004a6fa0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1 * 0xf0;
  if ((*(int *)(iVar2 + 0x34 + DAT_00715e50) == -1) || (*(int *)(iVar2 + 0x38 + DAT_00715e50) == -1)
     ) {
    FUN_004c4150(s___s___d_Object_not_placed_in_a_c_005af984,
                 s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,0x203);
  }
  if (*(int *)(iVar2 + 0x20 + DAT_00715e50) == 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x50 + DAT_00715e50);
  }
  else {
    uVar3 = 0xffffffff;
  }
  iVar1 = FUN_004aac20(param_1,uVar3);
  if (iVar1 != -1) {
    *(int *)(iVar2 + 0x3c + DAT_00715e50) = iVar1;
    FUN_004ab110(iVar1 * 0x50 + DAT_00715eb8,param_1);
  }
  return;
}


/* ==== 004a7020 FUN_004a7020 ==== */

void FUN_004a7020(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xf0;
  iVar1 = *(int *)(iVar2 + 0x3c + DAT_00715e50);
  if ((iVar1 < 0) || (DAT_00715ebc < iVar1)) {
    FUN_004c3fa0(s_Object_chunk____d__type____d_005af9dc,
                 *(undefined4 *)(iVar2 + 0x34 + DAT_00715e50),
                 *(undefined4 *)(iVar2 + 0x18 + DAT_00715e50));
    FUN_004c4150(s___s___d_Illegal_waypoint___d__fo_005af9ac,
                 s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,0x224,
                 *(undefined4 *)(iVar2 + 0x3c + DAT_00715e50),param_1);
  }
  FUN_004ab140(*(int *)(iVar2 + 0x3c + DAT_00715e50) * 0x50 + DAT_00715eb8,param_1);
  return;
}


/* ==== 004a70a0 FUN_004a70a0 ==== */

void FUN_004a70a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 * 0xf0;
  iVar4 = *(int *)(iVar3 + 0x34 + DAT_00715e50);
  iVar2 = *(int *)(iVar3 + 0x38 + DAT_00715e50);
  if (iVar4 == -1) {
    FUN_004c4150(s___s___d_Object_has_illegal_chunk_005af9fc,
                 s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,0x236);
  }
  iVar1 = *(int *)(iVar3 + 0x38 + DAT_00715e50);
  iVar3 = *(int *)(iVar3 + 0x34 + DAT_00715e50);
  if (((iVar1 < iVar3) && (iVar2 = iVar1, iVar4 = iVar3, iVar1 == 0)) &&
     (iVar3 == DAT_00715f04 + -1)) {
    iVar2 = iVar3;
    iVar4 = 0;
  }
  if (((iVar3 < iVar1) && (iVar2 = iVar3, iVar4 = iVar1, iVar1 == DAT_00715f04 + -1)) &&
     (iVar3 == 0)) {
    iVar2 = iVar1;
    iVar4 = 0;
  }
  if (iVar4 != iVar2) {
    if ((code *)(&DAT_00714e48)
                [*(int *)(DAT_00715f00 + 0xfc + *(int *)(DAT_00715254 + iVar4 * 4) * 0x994)] !=
        (code *)0x0) {
      (*(code *)(&DAT_00714e48)
                [*(int *)(DAT_00715f00 + 0xfc + *(int *)(DAT_00715254 + iVar4 * 4) * 0x994)])
                (param_1);
    }
    if ((code *)(&DAT_00714e48)
                [*(int *)(DAT_00715f00 + 0x100 + *(int *)(DAT_00715254 + iVar4 * 4) * 0x994)] !=
        (code *)0x0) {
      (*(code *)(&DAT_00714e48)
                [*(int *)(DAT_00715f00 + 0x100 + *(int *)(DAT_00715254 + iVar4 * 4) * 0x994)])
                (param_1);
    }
  }
  return;
}


/* ==== 004a7190 FUN_004a7190 ==== */

void FUN_004a7190(undefined4 param_1)

{
  int *piVar1;
  int i;
  
  i = 0;
  piVar1 = &DAT_007128c8;
  do {
    if (*piVar1 == 0) goto LAB_004a71c1;
    piVar1 = piVar1 + 2;
    i = i + 1;
  } while ((int)piVar1 < 0x714e48);
  FUN_004c4150(s___s___d_No_more_free_entry_s_005afa24,s_C__Work_A2IV_Engine_prog_Ifc_mai_005af874,
               0x27d);
  i = -1;
LAB_004a71c1:
  (&DAT_007128c8)[i * 2] = 1;
  (&DAT_007128cc)[i * 2] = param_1;
  return;
}


/* ==== 004a71e0 FUN_004a71e0 ==== */

uint FUN_004a71e0(uint param_1)

{
  if (DAT_00715f04 <= (int)param_1) {
    param_1 = param_1 - DAT_00715f04;
  }
  if ((int)param_1 < 0) {
    param_1 = DAT_00715f04 - ((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f));
  }
  return param_1;
}


/* ==== 004a7200 FUN_004a7200 ==== */

int FUN_004a7200(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 - param_2 >> 0x1f;
  iVar1 = (param_1 - param_2 ^ uVar2) - uVar2;
  if (DAT_00715f04 / 2 < iVar1) {
    return DAT_00715f04 - iVar1;
  }
  return iVar1;
}


/* ==== 004a7230 FUN_004a7230 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a7230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_007152f8 = param_1;
  _DAT_00715b00 = param_2;
  _DAT_00715b04 = param_3;
  return;
}


/* ==== 004a72d0 FUN_004a72d0 ==== */

undefined4 FUN_004a72d0(void)

{
  return DAT_00715e9c;
}


/* ==== 004a72e0 FUN_004a72e0 ==== */

undefined4 FUN_004a72e0(void)

{
  return DAT_00715ea0;
}


