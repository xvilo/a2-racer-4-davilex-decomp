/* spel.dat — game/gfx_radr.cpp: 22 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00441b40 FUN_00441b40 ==== */

void FUN_00441b40(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  int i;
  int iVar5;
  float *pfVar6;
  
  pfVar1 = (float *)(in_ECX + 0x9c);
  pfVar4 = (float *)FUN_00441940(0x49742400,0x49742400,0xc9742400,0xc9742400);
  pfVar6 = pfVar1;
  for (i = 5; i != 0; i = i + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar6 = pfVar6 + 1;
  }
  if (0 < DAT_00715258) {
    iVar5 = 0;
    i = DAT_00715258;
    do {
      pfVar4 = (float *)(iVar5 + 0x34 + DAT_00715f00);
      fVar2 = *pfVar4;
      fVar3 = pfVar4[2];
      if (fVar2 < *pfVar1) {
        *pfVar1 = fVar2;
        *(undefined1 *)(in_ECX + 0xac) = 1;
      }
      if (*(float *)(in_ECX + 0xa4) < fVar2) {
        *(float *)(in_ECX + 0xa4) = fVar2;
        *(undefined1 *)(in_ECX + 0xac) = 1;
      }
      if (fVar3 < *(float *)(in_ECX + 0xa0)) {
        *(float *)(in_ECX + 0xa0) = fVar3;
        *(undefined1 *)(in_ECX + 0xac) = 1;
      }
      if (*(float *)(in_ECX + 0xa8) < fVar3) {
        *(float *)(in_ECX + 0xa8) = fVar3;
        *(undefined1 *)(in_ECX + 0xac) = 1;
      }
      iVar5 = iVar5 + 0x994;
      i = i + -1;
    } while (i != 0);
  }
  if (*(float *)(in_ECX + 0xa4) - *pfVar1 <= *(float *)(in_ECX + 0xa8) - *(float *)(in_ECX + 0xa0))
  {
    i = __ftol();
    *(undefined1 *)(in_ECX + 0xac) = 1;
    *pfVar1 = *pfVar1 - (float)i;
    *(float *)(in_ECX + 0xa4) = *(float *)(in_ECX + 0xa4) + (float)i;
  }
  else {
    i = __ftol();
    *(undefined1 *)(in_ECX + 0xac) = 1;
    *(float *)(in_ECX + 0xa0) = *(float *)(in_ECX + 0xa0) - (float)i;
    *(float *)(in_ECX + 0xa8) = *(float *)(in_ECX + 0xa8) + (float)i;
  }
  *(undefined1 *)(in_ECX + 0xac) = 1;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(float *)(in_ECX + 0xbc) = (*(float *)(in_ECX + 0xa4) - *pfVar1) * 0.5 + *pfVar1;
  *(float *)(in_ECX + 0xc4) =
       (*(float *)(in_ECX + 0xa8) - *(float *)(in_ECX + 0xa0)) * 0.5 + *(float *)(in_ECX + 0xa0);
  return;
}


/* ==== 00441cf0 FUN_00441cf0 ==== */

void FUN_00441cf0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xe0) != 0) {
    uVar1 = *(undefined4 *)(DAT_0073b1b0 + 4 + *(int *)(in_ECX + 4) * 0x48);
    uVar2 = FUN_004c81b0(0xfe,8);
    FUN_004c4da0(uVar1,uVar2);
  }
  return;
}


/* ==== 00441d30 FUN_00441d30 ==== */

void FUN_00441d30(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  
  fVar7 = (*(float *)(in_ECX + 0xa4) - *(float *)(in_ECX + 0x9c)) /
          (float)(*(int *)(in_ECX + 0xd0) + -10);
  fVar1 = param_2[1];
  fVar2 = *(float *)(in_ECX + 0xc0);
  fVar3 = param_2[2];
  fVar4 = *(float *)(in_ECX + 0xc4);
  fVar5 = *(float *)(in_ECX + 0xb4);
  fVar6 = *(float *)(in_ECX + 0xb8);
  *param_1 = (*param_2 - *(float *)(in_ECX + 0xbc)) / fVar7 + *(float *)(in_ECX + 0xb0);
  param_1[1] = (fVar1 - fVar2) / fVar7 + fVar5;
  param_1[2] = -(fVar3 - fVar4) / fVar7 + fVar6;
  return;
}


/* ==== 00441e00 FUN_00441e00 ==== */

void FUN_00441e00(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int j;
  int i;
  
  iVar1 = *(int *)(DAT_0073b1b0 + 0x28);
  iVar2 = *(int *)(DAT_0073b1b0 + 0x24);
  i = -5;
  do {
    iVar3 = (param_2 + -5) * param_4 + i + param_1;
    j = 10;
    do {
      if ((-1 < iVar3) && (iVar3 < iVar1 * param_4 + iVar2)) {
        *(undefined1 *)(iVar3 + param_3) = param_5;
      }
      iVar3 = iVar3 + param_4;
      j = j + -1;
    } while (j != 0);
    i = i + 1;
  } while (i < 5);
  return;
}


/* ==== 00441e60 FUN_00441e60 ==== */

void FUN_00441e60(int param_1,int param_2,int param_3,int param_4,uint param_5,ushort param_6)

{
  int in_ECX;
  int iVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  int i;
  int iVar4;
  int j;
  
  i = -4;
  param_4 = param_4 >> 1;
  iVar4 = *(int *)(DAT_0073b1b0 + 0x28 + *(int *)(in_ECX + 4) * 0x48) * param_4 +
          *(int *)(DAT_0073b1b0 + *(int *)(in_ECX + 4) * 0x48 + 0x24);
  do {
    j = 8;
    iVar1 = param_1 + (param_2 + -4) * param_4 + i;
    puVar2 = (ushort *)(param_3 + iVar1 * 2);
    do {
      if (((-1 < iVar1) && (iVar1 < iVar4)) && (*puVar2 != param_5)) {
        *puVar2 = param_6;
      }
      puVar2 = puVar2 + param_4;
      iVar1 = iVar1 + param_4;
      j = j + -1;
    } while (j != 0);
    i = i + 1;
  } while (i < 4);
  i = -2;
  do {
    j = 4;
    iVar1 = (param_2 + -2) * param_4 + i + param_1;
    puVar3 = (undefined2 *)(param_3 + iVar1 * 2);
    do {
      if ((-1 < iVar1) && (iVar1 < iVar4)) {
        *puVar3 = (undefined2)param_5;
      }
      puVar3 = puVar3 + param_4;
      iVar1 = iVar1 + param_4;
      j = j + -1;
    } while (j != 0);
    i = i + 1;
  } while (i < 2);
  return;
}


/* ==== 00441f30 FUN_00441f30 ==== */

void FUN_00441f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = FUN_004c81b0(0xd,8);
  uVar2 = FUN_004c81b0(0,8);
  if (*(int *)(in_ECX + 0xe0) != 0) {
    FUN_00441e60(param_1,param_2,param_3,param_4,uVar1,uVar2);
    return;
  }
  FUN_00441e00(param_1,param_2,param_3,param_4,uVar1,uVar2);
  return;
}


/* ==== 00441fa0 FUN_00441fa0 ==== */

void FUN_00441fa0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 __ftol_result_2;
  undefined4 __ftol_result;
  int in_ECX;
  int i;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  uVar5 = *(undefined4 *)(DAT_0073b1b0 + 4 + *(int *)(in_ECX + 4) * 0x48);
  local_28 = uVar5;
  uVar2 = FUN_004c48f0(uVar5,&local_2c);
  if (*(char *)(in_ECX + 0xac) == '\0') {
    FUN_004c4150(s__s___d__Road_bounding_box_not_in_0059d238,
                 s_C__Work_A2IV_Game_prog_gfx_radr__0059d214,0x12d);
  }
  if (0 < DAT_00715258) {
    iVar4 = 0;
    i = DAT_00715258;
    do {
      iVar1 = iVar4 + 0x34 + DAT_00715f00;
      local_18 = *(undefined4 *)(iVar4 + 0x34 + DAT_00715f00);
      local_14 = *(undefined4 *)(iVar1 + 4);
      local_10 = *(undefined4 *)(iVar1 + 8);
      puVar3 = (undefined4 *)FUN_00441d30(local_c,&local_18);
      uStack_24 = *puVar3;
      uStack_20 = puVar3[1];
      uStack_1c = puVar3[2];
      uVar5 = uVar2;
      uVar6 = local_2c;
      __ftol_result_2 = __ftol(uVar2,local_2c);
      __ftol_result = __ftol(__ftol_result_2);
      FUN_00441f30(__ftol_result,__ftol_result_2,uVar5,uVar6);
      iVar4 = iVar4 + 0x994;
      i = i + -1;
      uVar5 = local_28;
    } while (i != 0);
  }
  FUN_004c4a20(uVar5,uVar2);
  return;
}


/* ==== 00442080 FUN_00442080 ==== */

void FUN_00442080(void)

{
  int in_ECX;
  
  FUN_00441a30();
  FUN_00441b40();
  FUN_00441cf0();
  FUN_00441fa0();
  FUN_004ba4c0(*(undefined4 *)(in_ECX + 4));
  return;
}


/* ==== 004420b0 FUN_004420b0 ==== */

void FUN_004420b0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar3;
  
  uVar1 = FUN_004b7400(s_loradar_pcx_0059d260);
  *in_ECX = uVar1;
  in_ECX[1] = 0;
  puVar2 = (undefined4 *)
           FUN_00441940(0x41700000,(float)(DAT_005b379c + -0x37),0x425c0000,
                        (float)(DAT_005b379c + -0xf));
  puVar3 = in_ECX + 0x22;
  for (i = 5; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar1 = __ftol();
  in_ECX[0x34] = uVar1;
  uVar1 = __ftol();
  in_ECX[0x35] = uVar1;
  uVar1 = __ftol();
  in_ECX[0x36] = uVar1;
  i = __ftol();
  in_ECX[0x37] = i;
  in_ECX[0x2c] = (float)((int)in_ECX[0x34] / 2) + (float)(int)in_ECX[0x36];
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = (float)((int)in_ECX[0x35] / 2) + (float)i;
  return;
}


/* ==== 004421f0 FUN_004421f0 ==== */

void FUN_004421f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int i;
  int *piVar6;
  
  iVar4 = FUN_004b7400(s_hiradar_pcx_0059d26c);
  *in_ECX = iVar4;
  in_ECX[1] = iVar4;
  in_ECX[0x37] = 0;
  in_ECX[0x36] = 0;
  fVar2 = (float)DAT_005b379c;
  fVar1 = fVar2 - fVar2 * 0.0625;
  fVar3 = (float)DAT_005b3798 * 0.046875;
  piVar5 = (int *)FUN_00441940(fVar3,fVar1 - fVar2 * 0.16666667,(float)DAT_005b3798 * 0.125 + fVar3,
                               fVar1);
  iVar4 = *in_ECX;
  piVar6 = in_ECX + 0x22;
  for (i = 5; i != 0; i = i + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  i = *(int *)(iVar4 * 0x48 + 0x24 + DAT_0073b1b0);
  in_ECX[0x34] = i;
  in_ECX[0x35] = *(int *)(iVar4 * 0x48 + 0x28 + DAT_0073b1b0);
  fVar1 = (float)(i / 2);
  in_ECX[0x2c] = (int)fVar1;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = (int)fVar1;
  return;
}


/* ==== 004422f0 init_radar ==== */

void init_radar(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (param_1 == 0) {
    FUN_004420b0();
  }
  else {
    FUN_004421f0();
  }
  *(int *)(in_ECX + 0xe0) = param_1;
  *(undefined4 *)(in_ECX + 0xe8) = param_2;
  FUN_00442080();
  FUN_00442340();
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  return;
}


/* ==== 00442340 FUN_00442340 ==== */

void FUN_00442340(void)

{
  int in_ECX;
  int i;
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = 1;
  if ((*(int *)(in_ECX + 0xe8) != 0) && (i = 0, 0 < DAT_005d2ab0)) {
    puVar1 = &DAT_005ce9e8;
    do {
      FUN_004423b0(*puVar1,1,local_4);
      i = i + 1;
      puVar1 = puVar1 + 0xa5;
      local_4 = 0;
    } while (i < DAT_005d2ab0);
  }
  FUN_004423b0(DAT_006fba58,0,1);
  return;
}


/* ==== 004423b0 FUN_004423b0 ==== */

void FUN_004423b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 __ftol_result_4;
  undefined4 __ftol_result_2;
  undefined4 __ftol_result_3;
  undefined4 __ftol_result;
  int in_ECX;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [140];
  
  iVar2 = *(int *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
  iVar1 = DAT_00715f00 + 0x34 + iVar2 * 0x994;
  local_a4 = *(undefined4 *)(DAT_00715f00 + 0x34 + iVar2 * 0x994);
  local_a0 = *(undefined4 *)(iVar1 + 4);
  local_9c = *(undefined4 *)(iVar1 + 8);
  FUN_00441d30(local_98,&local_a4);
  if (*(int *)(in_ECX + 0xe0) == 0) {
    __ftol_result_4 = 5;
    __ftol_result_2 = 5;
    __ftol(5,5,param_2,param_3);
    __ftol_result_3 = __ftol();
    __ftol(__ftol_result_3);
  }
  else {
    __ftol_result_4 = __ftol(param_2,param_3);
    __ftol_result_2 = __ftol(__ftol_result_4);
    __ftol(__ftol_result_2);
    __ftol_result_3 = __ftol();
    __ftol(__ftol_result_3);
  }
  __ftol_result = __ftol(__ftol_result_3);
  FUN_00442920(__ftol_result,__ftol_result_3,__ftol_result_2,__ftol_result_4,param_2,param_3);
  FUN_00442d30(*(undefined4 *)(*(int *)(in_ECX + 0xcc) + 8),1,local_8c);
  return;
}


/* ==== 00442800 FUN_00442800 ==== */

void FUN_00442800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x80) = param_3;
  *(undefined4 *)(in_ECX + 0x84) = param_4;
  *(undefined4 *)(in_ECX + 0x10) = param_5;
  *(undefined4 *)(in_ECX + 0x30) = param_5;
  *(undefined4 *)(in_ECX + 0x50) = param_5;
  *(undefined4 *)(in_ECX + 0x70) = param_5;
  *(undefined4 *)(in_ECX + 0x14) = 0xff000000;
  *(undefined4 *)(in_ECX + 0x34) = 0xff000000;
  *(undefined4 *)(in_ECX + 0x54) = 0xff000000;
  *(undefined4 *)(in_ECX + 0x74) = 0xff000000;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0x3f800000;
  FUN_00442870(param_1,param_2);
  return;
}


/* ==== 00442870 FUN_00442870 ==== */

void FUN_00442870(int param_1,int param_2)

{
  undefined4 *in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00441940((float)(param_1 - (int)in_ECX[0x20] / 2),(float)(param_2 - (int)in_ECX[0x21] / 2),
               (float)((int)in_ECX[0x20] / 2 + param_1),(float)((int)in_ECX[0x21] / 2 + param_2));
  in_ECX[1] = local_10;
  in_ECX[8] = local_c;
  in_ECX[9] = local_10;
  in_ECX[0x10] = local_c;
  in_ECX[0x11] = local_8;
  *in_ECX = local_14;
  in_ECX[0x19] = local_8;
  in_ECX[0x18] = local_14;
  return;
}


/* ==== 00442920 FUN_00442920 ==== */

void FUN_00442920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,char param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  int i;
  
  FUN_00442800(param_1,param_2,param_3,param_4,0x80ffffff);
  iVar1 = FUN_004b75a0(s_RadarItems_0059d2b8);
  piVar2 = (int *)(DAT_0073b120 +
                  *(int *)(*(int *)(iVar1 * 9 + 4 + DAT_0073b168) + param_5 * 4) * 0x10);
  iVar1 = *piVar2;
  *(int *)(in_ECX + 0x88) = piVar2[1];
  iVar1 = iVar1 * 0xac;
  i = *(int *)(iVar1 + 0x84 + DAT_0073b5c8);
  if (i != 4) {
    FUN_004c4150(s__s___d__Number_of_vertices_of_ra_0059d2e8,
                 s_C__Work_A2IV_Game_prog_gfx_radr__0059d2c4,0x23d);
  }
  if ((DAT_006fb8d0 == 0) && (param_6 != '\0')) {
    FUN_004bdcd0(*(undefined4 *)(in_ECX + 0x88));
  }
  if (0 < i) {
    iVar3 = 0;
    puVar4 = (undefined4 *)(in_ECX + 0x1c);
    do {
      iVar3 = iVar3 + 0x20;
      i = i + -1;
      puVar4[-1] = *(undefined4 *)(*(int *)(iVar1 + 0x80 + DAT_0073b5c8) + -8 + iVar3);
      *puVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x80 + DAT_0073b5c8) + -4 + iVar3);
      puVar4 = puVar4 + 8;
    } while (i != 0);
  }
  return;
}


/* ==== 00442bd0 FUN_00442bd0 ==== */

void FUN_00442bd0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00442be0 FUN_00442be0 ==== */

void FUN_00442be0(void)

{
  FUN_005584e0(&LAB_00442bf0);
  return;
}


/* ==== 00442c10 FUN_00442c10 ==== */

void FUN_00442c10(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00442c20 FUN_00442c20 ==== */

void FUN_00442c20(void)

{
  FUN_005584e0(&LAB_00442c30);
  return;
}


/* ==== 00442cc0 FUN_00442cc0 ==== */

int FUN_00442cc0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x8c;
}


/* ==== 00442d30 FUN_00442d30 ==== */

undefined4 * FUN_00442d30(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  int j;
  int i;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 8);
  if ((uint)((*(int *)(in_ECX + 0xc) - (int)puVar2) / 0x8c) < param_2) {
    i = *(int *)(in_ECX + 4);
    if ((i == 0) || (uVar4 = ((int)puVar2 - i) / 0x8c, uVar4 <= param_2)) {
      uVar4 = param_2;
    }
    if (i == 0) {
      i = 0;
    }
    else {
      i = ((int)puVar2 - i) / 0x8c;
    }
    i = uVar4 + i;
    j = i;
    if (i < 0) {
      j = 0;
    }
    puVar1 = operator_new(j * 0x8c);
    puVar3 = puVar1;
    for (puVar2 = *(undefined4 **)(in_ECX + 4); uVar4 = param_2, puVar5 = puVar3, puVar2 != param_1;
        puVar2 = puVar2 + 0x23) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar5 = puVar2;
        puVar6 = puVar3;
        for (j = 0x23; j != 0; j = j + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar3 = puVar3 + 0x23;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar5 != (undefined4 *)0x0) {
        puVar2 = param_3;
        puVar6 = puVar5;
        for (j = 0x23; j != 0; j = j + -1) {
          *puVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar5 = puVar5 + 0x23;
    }
    puVar5 = *(undefined4 **)(in_ECX + 8);
    puVar2 = puVar3 + param_2 * 0x23;
    if (param_1 != puVar5) {
      param_1 = (undefined4 *)((int)puVar2 + (param_2 * -0x8c - (int)puVar3) + (int)param_1);
      do {
        if (puVar2 != (undefined4 *)0x0) {
          puVar3 = param_1;
          puVar6 = puVar2;
          for (j = 0x23; j != 0; j = j + -1) {
            *puVar6 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        param_1 = param_1 + 0x23;
        puVar2 = puVar2 + 0x23;
      } while (param_1 != puVar5);
    }
    FUN_0054b339(*(undefined4 *)(in_ECX + 4));
    *(undefined4 **)(in_ECX + 0xc) = puVar1 + i * 0x23;
    if (*(int *)(in_ECX + 4) == 0) {
      i = 0;
    }
    else {
      i = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x8c;
    }
    *(undefined4 **)(in_ECX + 4) = puVar1;
    *(undefined4 **)(in_ECX + 8) = puVar1 + (param_2 + i) * 0x23;
    return puVar1 + (param_2 + i) * 0x23;
  }
  puVar3 = (undefined4 *)(((int)puVar2 - (int)param_1) * -0x15f15f15);
  if ((uint)(((int)puVar2 - (int)param_1) / 0x8c) < param_2) {
    puVar3 = param_1 + param_2 * 0x23;
    if (param_1 != puVar2) {
      puVar1 = puVar3 + param_2 * -0x23;
      do {
        if (puVar3 != (undefined4 *)0x0) {
          puVar5 = puVar1;
          puVar6 = puVar3;
          for (i = 0x23; i != 0; i = i + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        puVar1 = puVar1 + 0x23;
        puVar3 = puVar3 + 0x23;
      } while (puVar1 != puVar2);
    }
    puVar2 = *(undefined4 **)(in_ECX + 8);
    for (i = param_2 - ((int)puVar2 - (int)param_1) / 0x8c; i != 0; i = i + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = param_3;
        puVar1 = puVar2;
        for (j = 0x23; j != 0; j = j + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
      puVar2 = puVar2 + 0x23;
    }
    puVar2 = *(undefined4 **)(in_ECX + 8);
    while (param_1 != puVar2) {
      puVar5 = param_1 + 0x23;
      puVar3 = param_3;
      puVar1 = param_1;
      for (i = 0x23; param_1 = puVar5, i != 0; i = i + -1) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    puVar2 = (undefined4 *)(*(int *)(in_ECX + 8) + param_2 * 0x8c);
    *(undefined4 **)(in_ECX + 8) = puVar2;
    return puVar2;
  }
  if (param_2 != 0) {
    puVar3 = puVar2;
    for (puVar1 = puVar2 + param_2 * -0x23; puVar1 != puVar2; puVar1 = puVar1 + 0x23) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar5 = puVar1;
        puVar6 = puVar3;
        for (i = 0x23; i != 0; i = i + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar3 = puVar3 + 0x23;
    }
    puVar2 = *(undefined4 **)(in_ECX + 8);
    puVar3 = puVar2 + param_2 * -0x23;
    while (param_1 != puVar3) {
      puVar3 = puVar3 + -0x23;
      puVar2 = puVar2 + -0x23;
      puVar1 = puVar3;
      puVar5 = puVar2;
      for (i = 0x23; i != 0; i = i + -1) {
        *puVar5 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar3 = param_1;
    while (puVar3 != param_1 + param_2 * 0x23) {
      puVar5 = puVar3 + 0x23;
      puVar2 = param_3;
      puVar1 = puVar3;
      for (i = 0x23; puVar3 = puVar5, i != 0; i = i + -1) {
        *puVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x8c;
  }
  return puVar3;
}


