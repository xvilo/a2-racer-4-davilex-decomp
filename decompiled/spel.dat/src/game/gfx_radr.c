/* spel.dat — game/gfx_radr.cpp: 22 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00441b40 FUN_00441b40 ==== */

void __thiscall FUN_00441b40(void *this)

{
  float *pfVar1;
  float *pfVar2;
  int i;
  int iVar3;
  float *pfVar4;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar1 = (float *)((int)this + 0x9c);
  pfVar2 = (float *)FUN_00441940(&local_14,0x49742400,0x49742400,0xc9742400,0xc9742400);
  pfVar4 = pfVar1;
  for (i = 5; i != 0; i = i + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  if (0 < DAT_00715258) {
    iVar3 = 0;
    i = DAT_00715258;
    do {
      pfVar2 = (float *)(iVar3 + 0x34 + DAT_00715f00);
      local_14 = *pfVar2;
      local_10 = pfVar2[1];
      local_c = pfVar2[2];
      if (local_14 < *pfVar1) {
        *pfVar1 = local_14;
        *(undefined1 *)((int)this + 0xac) = 1;
      }
      if (*(float *)((int)this + 0xa4) < local_14) {
        *(float *)((int)this + 0xa4) = local_14;
        *(undefined1 *)((int)this + 0xac) = 1;
      }
      if (local_c < *(float *)((int)this + 0xa0)) {
        *(float *)((int)this + 0xa0) = local_c;
        *(undefined1 *)((int)this + 0xac) = 1;
      }
      if (*(float *)((int)this + 0xa8) < local_c) {
        *(float *)((int)this + 0xa8) = local_c;
        *(undefined1 *)((int)this + 0xac) = 1;
      }
      iVar3 = iVar3 + 0x994;
      i = i + -1;
    } while (i != 0);
  }
  if (*(float *)((int)this + 0xa4) - *pfVar1 <=
      *(float *)((int)this + 0xa8) - *(float *)((int)this + 0xa0)) {
    i = __ftol();
    *(undefined1 *)((int)this + 0xac) = 1;
    *pfVar1 = *pfVar1 - (float)i;
    *(float *)((int)this + 0xa4) = *(float *)((int)this + 0xa4) + (float)i;
  }
  else {
    i = __ftol();
    *(undefined1 *)((int)this + 0xac) = 1;
    *(float *)((int)this + 0xa0) = *(float *)((int)this + 0xa0) - (float)i;
    *(float *)((int)this + 0xa8) = *(float *)((int)this + 0xa8) + (float)i;
  }
  *(undefined1 *)((int)this + 0xac) = 1;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(float *)((int)this + 0xbc) = (*(float *)((int)this + 0xa4) - *pfVar1) * 0.5 + *pfVar1;
  *(float *)((int)this + 0xc4) =
       (*(float *)((int)this + 0xa8) - *(float *)((int)this + 0xa0)) * 0.5 +
       *(float *)((int)this + 0xa0);
  return;
}


/* ==== 00441cf0 FUN_00441cf0 ==== */

void __thiscall FUN_00441cf0(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0xe0) != 0) {
    uVar1 = *(undefined4 *)(DAT_0073b1b0 + 4 + *(int *)((int)this + 4) * 0x48);
    uVar2 = FUN_004c81b0(0xfe,8);
    FUN_004c4da0(uVar1,uVar2);
  }
  return;
}


/* ==== 00441d30 FUN_00441d30 ==== */

void __thiscall FUN_00441d30(void *this,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (*(float *)((int)this + 0xa4) - *(float *)((int)this + 0x9c)) /
          (float)(*(int *)((int)this + 0xd0) + -10);
  fVar1 = param_3[1];
  fVar2 = *(float *)((int)this + 0xc0);
  fVar3 = param_3[2];
  fVar4 = *(float *)((int)this + 0xc4);
  fVar5 = *(float *)((int)this + 0xb4);
  fVar6 = *(float *)((int)this + 0xb8);
  *param_2 = (*param_3 - *(float *)((int)this + 0xbc)) / fVar7 + *(float *)((int)this + 0xb0);
  param_2[1] = (fVar1 - fVar2) / fVar7 + fVar5;
  param_2[2] = -(fVar3 - fVar4) / fVar7 + fVar6;
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

void __thiscall
FUN_00441e60(void *this,int param_2,int param_3,int param_4,int param_5,uint param_6,ushort param_7)

{
  int iVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  int i;
  int iVar4;
  int j;
  
  i = -4;
  param_5 = param_5 >> 1;
  iVar4 = *(int *)(DAT_0073b1b0 + 0x28 + *(int *)((int)this + 4) * 0x48) * param_5 +
          *(int *)(DAT_0073b1b0 + *(int *)((int)this + 4) * 0x48 + 0x24);
  do {
    j = 8;
    iVar1 = param_2 + (param_3 + -4) * param_5 + i;
    puVar2 = (ushort *)(param_4 + iVar1 * 2);
    do {
      if (((-1 < iVar1) && (iVar1 < iVar4)) && (*puVar2 != param_6)) {
        *puVar2 = param_7;
      }
      puVar2 = puVar2 + param_5;
      iVar1 = iVar1 + param_5;
      j = j + -1;
    } while (j != 0);
    i = i + 1;
  } while (i < 4);
  i = -2;
  do {
    j = 4;
    iVar1 = (param_3 + -2) * param_5 + i + param_2;
    puVar3 = (undefined2 *)(param_4 + iVar1 * 2);
    do {
      if ((-1 < iVar1) && (iVar1 < iVar4)) {
        *puVar3 = (undefined2)param_6;
      }
      puVar3 = puVar3 + param_5;
      iVar1 = iVar1 + param_5;
      j = j + -1;
    } while (j != 0);
    i = i + 1;
  } while (i < 2);
  return;
}


/* ==== 00441f30 FUN_00441f30 ==== */

void __thiscall
FUN_00441f30(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004c81b0(0xd,8);
  uVar2 = FUN_004c81b0(0,8);
  if (*(int *)((int)this + 0xe0) != 0) {
    FUN_00441e60(this,param_2,param_3,param_4,param_5,uVar1,uVar2);
    return;
  }
  FUN_00441e00(param_2,param_3,param_4,param_5,uVar1,uVar2);
  return;
}


/* ==== 00441fa0 FUN_00441fa0 ==== */

void __thiscall FUN_00441fa0(void *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 __ftol_result_2;
  undefined4 __ftol_result;
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
  
  uVar5 = *(undefined4 *)(DAT_0073b1b0 + 4 + *(int *)((int)this + 4) * 0x48);
  local_28 = uVar5;
  uVar2 = FUN_004c48f0(uVar5,&local_2c);
  if (*(char *)((int)this + 0xac) == '\0') {
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
      puVar3 = (undefined4 *)FUN_00441d30(this,local_c,&local_18);
      uStack_24 = *puVar3;
      uStack_20 = puVar3[1];
      uStack_1c = puVar3[2];
      uVar5 = uVar2;
      uVar6 = local_2c;
      __ftol_result_2 = __ftol(uVar2,local_2c);
      __ftol_result = __ftol(__ftol_result_2);
      FUN_00441f30(this,__ftol_result,__ftol_result_2,uVar5,uVar6);
      iVar4 = iVar4 + 0x994;
      i = i + -1;
      uVar5 = local_28;
    } while (i != 0);
  }
  FUN_004c4a20(uVar5,uVar2);
  return;
}


/* ==== 00442080 FUN_00442080 ==== */

void __thiscall FUN_00442080(void *this)

{
  FUN_00441a30();
  FUN_00441b40(this);
  FUN_00441cf0(this);
  FUN_00441fa0(this);
  FUN_004ba4c0(*(undefined4 *)((int)this + 4));
  return;
}


/* ==== 004420b0 FUN_004420b0 ==== */

void __thiscall FUN_004420b0(void *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int i;
  undefined4 *puVar3;
  undefined1 local_14 [20];
  
  uVar1 = FUN_004b7400(&DAT_00712130,s_loradar_pcx_0059d260);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)((int)this + 4) = 0;
  puVar2 = (undefined4 *)
           FUN_00441940(local_14,0x41700000,(float)(DAT_005b379c + -0x37),0x425c0000,
                        (float)(DAT_005b379c + -0xf));
  puVar3 = (undefined4 *)((int)this + 0x88);
  for (i = 5; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar1 = __ftol();
  *(undefined4 *)((int)this + 0xd0) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)((int)this + 0xd4) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)((int)this + 0xd8) = uVar1;
  i = __ftol();
  *(int *)((int)this + 0xdc) = i;
  *(float *)((int)this + 0xb0) =
       (float)(*(int *)((int)this + 0xd0) / 2) + (float)*(int *)((int)this + 0xd8);
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(float *)((int)this + 0xb8) = (float)(*(int *)((int)this + 0xd4) / 2) + (float)i;
  return;
}


/* ==== 004421f0 FUN_004421f0 ==== */

void __thiscall FUN_004421f0(void *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int i;
  undefined4 *puVar7;
  undefined1 local_14 [20];
  
  uVar5 = FUN_004b7400(&DAT_00712130,s_hiradar_pcx_0059d26c);
  *(undefined4 *)this = uVar5;
  *(undefined4 *)((int)this + 4) = uVar5;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  fVar3 = (float)DAT_005b379c;
  fVar2 = fVar3 - fVar3 * 0.0625;
  fVar4 = (float)DAT_005b3798 * 0.046875;
  puVar6 = (undefined4 *)
           FUN_00441940(local_14,fVar4,fVar2 - fVar3 * 0.16666667,
                        (float)DAT_005b3798 * 0.125 + fVar4,fVar2);
  iVar1 = *(int *)this;
  puVar7 = (undefined4 *)((int)this + 0x88);
  for (i = 5; i != 0; i = i + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  i = *(int *)(iVar1 * 0x48 + 0x24 + DAT_0073b1b0);
  *(int *)((int)this + 0xd0) = i;
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(iVar1 * 0x48 + 0x28 + DAT_0073b1b0);
  fVar2 = (float)(i / 2);
  *(float *)((int)this + 0xb0) = fVar2;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(float *)((int)this + 0xb8) = fVar2;
  return;
}


/* ==== 004422f0 init_radar ==== */

void __thiscall init_radar(void *this,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    FUN_004420b0();
  }
  else {
    FUN_004421f0();
  }
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined4 *)((int)this + 0xe8) = param_3;
  FUN_00442080(this);
  FUN_00442340(this);
  *(undefined4 *)((int)this + 0xe4) = 1;
  return;
}


/* ==== 00442340 FUN_00442340 ==== */

void __thiscall FUN_00442340(void *this)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = 1;
  if ((*(int *)((int)this + 0xe8) != 0) && (i = 0, 0 < DAT_005d2ab0)) {
    puVar1 = &DAT_005ce9e8;
    do {
      FUN_004423b0(this,*puVar1,1,local_4);
      i = i + 1;
      puVar1 = puVar1 + 0xa5;
      local_4 = 0;
    } while (i < DAT_005d2ab0);
  }
  FUN_004423b0(this,DAT_006fba58,0,1);
  return;
}


/* ==== 004423b0 FUN_004423b0 ==== */

void __thiscall FUN_004423b0(void *this,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 __ftol_result_4;
  undefined4 __ftol_result_2;
  undefined4 __ftol_result_3;
  undefined4 __ftol_result;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [140];
  
  iVar2 = *(int *)(param_2 * 0xf0 + 0x34 + DAT_00715e50);
  iVar1 = DAT_00715f00 + 0x34 + iVar2 * 0x994;
  local_a4 = *(undefined4 *)(DAT_00715f00 + 0x34 + iVar2 * 0x994);
  local_a0 = *(undefined4 *)(iVar1 + 4);
  local_9c = *(undefined4 *)(iVar1 + 8);
  FUN_00441d30(this,local_98,&local_a4);
  if (*(int *)((int)this + 0xe0) == 0) {
    __ftol_result_4 = 5;
    __ftol_result_2 = 5;
    __ftol(5,5,param_3,param_4);
    __ftol_result_3 = __ftol();
    __ftol(__ftol_result_3);
  }
  else {
    __ftol_result_4 = __ftol(param_3,param_4);
    __ftol_result_2 = __ftol(__ftol_result_4);
    __ftol(__ftol_result_2);
    __ftol_result_3 = __ftol();
    __ftol(__ftol_result_3);
  }
  __ftol_result = __ftol(__ftol_result_3);
  FUN_00442920(local_8c,__ftol_result,__ftol_result_3,__ftol_result_2,__ftol_result_4,param_3,
               param_4);
  FUN_00442d30(*(int *)((int)this + 0xcc),*(undefined4 *)(*(int *)((int)this + 0xcc) + 8),1,local_8c
              );
  return;
}


/* ==== 00442800 FUN_00442800 ==== */

void __thiscall
FUN_00442800(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  *(undefined4 *)((int)this + 0x80) = param_4;
  *(undefined4 *)((int)this + 0x84) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x50) = param_6;
  *(undefined4 *)((int)this + 0x70) = param_6;
  *(undefined4 *)((int)this + 0x14) = 0xff000000;
  *(undefined4 *)((int)this + 0x34) = 0xff000000;
  *(undefined4 *)((int)this + 0x54) = 0xff000000;
  *(undefined4 *)((int)this + 0x74) = 0xff000000;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x3f800000;
  FUN_00442870(this,param_2,param_3);
  return;
}


/* ==== 00442870 FUN_00442870 ==== */

void __thiscall FUN_00442870(void *this,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)((int)this + 0x84) / 2;
  iVar1 = *(int *)((int)this + 0x80) / 2;
  FUN_00441940(&local_14,(float)(param_2 - iVar1),(float)(param_3 - iVar2),(float)(iVar1 + param_2),
               (float)(iVar2 + param_3));
  *(undefined4 *)((int)this + 4) = local_10;
  *(undefined4 *)((int)this + 0x20) = local_c;
  *(undefined4 *)((int)this + 0x24) = local_10;
  *(undefined4 *)((int)this + 0x40) = local_c;
  *(undefined4 *)((int)this + 0x44) = local_8;
  *(undefined4 *)this = local_14;
  *(undefined4 *)((int)this + 100) = local_8;
  *(undefined4 *)((int)this + 0x60) = local_14;
  return;
}


/* ==== 00442920 FUN_00442920 ==== */

void __thiscall
FUN_00442920(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,char param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int i;
  
  FUN_00442800(this,param_2,param_3,param_4,param_5,0x80ffffff);
  iVar1 = FUN_004b75a0(&DAT_00712130,s_RadarItems_0059d2b8);
  piVar2 = (int *)(DAT_0073b120 +
                  *(int *)(*(int *)(iVar1 * 9 + 4 + DAT_0073b168) + param_6 * 4) * 0x10);
  iVar1 = *piVar2;
  *(int *)((int)this + 0x88) = piVar2[1];
  iVar1 = iVar1 * 0xac;
  i = *(int *)(iVar1 + 0x84 + DAT_0073b5c8);
  if (i != 4) {
    FUN_004c4150(s__s___d__Number_of_vertices_of_ra_0059d2e8,
                 s_C__Work_A2IV_Game_prog_gfx_radr__0059d2c4,0x23d);
  }
  if ((DAT_006fb8d0 == 0) && (param_7 != '\0')) {
    FUN_004bdcd0(iVar1 + DAT_0073b5c8,*(undefined4 *)((int)this + 0x88));
  }
  if (0 < i) {
    iVar3 = 0;
    puVar4 = (undefined4 *)((int)this + 0x1c);
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

int __thiscall FUN_00442cc0(void *this)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)this)();
  return *(int *)(*(int *)((int)this + 4) + 4) + (iVar1 + -1) * 0x8c;
}


/* ==== 00442d30 FUN_00442d30 ==== */

undefined4 * __thiscall
FUN_00442d30(void *this,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int j;
  int i;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar2) / 0x8c) < param_3) {
    i = *(int *)((int)this + 4);
    if ((i == 0) || (uVar4 = ((int)puVar2 - i) / 0x8c, uVar4 <= param_3)) {
      uVar4 = param_3;
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
    for (puVar2 = *(undefined4 **)((int)this + 4); uVar4 = param_3, puVar5 = puVar3,
        puVar2 != param_2; puVar2 = puVar2 + 0x23) {
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
        puVar2 = param_4;
        puVar6 = puVar5;
        for (j = 0x23; j != 0; j = j + -1) {
          *puVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar5 = puVar5 + 0x23;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    puVar2 = puVar3 + param_3 * 0x23;
    if (param_2 != puVar5) {
      param_2 = (undefined4 *)((int)puVar2 + (param_3 * -0x8c - (int)puVar3) + (int)param_2);
      do {
        if (puVar2 != (undefined4 *)0x0) {
          puVar3 = param_2;
          puVar6 = puVar2;
          for (j = 0x23; j != 0; j = j + -1) {
            *puVar6 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        param_2 = param_2 + 0x23;
        puVar2 = puVar2 + 0x23;
      } while (param_2 != puVar5);
    }
    FUN_0054b339(*(undefined4 *)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar1 + i * 0x23;
    if (*(int *)((int)this + 4) == 0) {
      i = 0;
    }
    else {
      i = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x8c;
    }
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 **)((int)this + 8) = puVar1 + (param_3 + i) * 0x23;
    return puVar1 + (param_3 + i) * 0x23;
  }
  puVar3 = (undefined4 *)(((int)puVar2 - (int)param_2) * -0x15f15f15);
  if ((uint)(((int)puVar2 - (int)param_2) / 0x8c) < param_3) {
    puVar3 = param_2 + param_3 * 0x23;
    if (param_2 != puVar2) {
      puVar1 = puVar3 + param_3 * -0x23;
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
    puVar2 = *(undefined4 **)((int)this + 8);
    for (i = param_3 - ((int)puVar2 - (int)param_2) / 0x8c; i != 0; i = i + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = param_4;
        puVar1 = puVar2;
        for (j = 0x23; j != 0; j = j + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
      puVar2 = puVar2 + 0x23;
    }
    puVar2 = *(undefined4 **)((int)this + 8);
    while (param_2 != puVar2) {
      puVar5 = param_2 + 0x23;
      puVar3 = param_4;
      puVar1 = param_2;
      for (i = 0x23; param_2 = puVar5, i != 0; i = i + -1) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    puVar2 = (undefined4 *)(*(int *)((int)this + 8) + param_3 * 0x8c);
    *(undefined4 **)((int)this + 8) = puVar2;
    return puVar2;
  }
  if (param_3 != 0) {
    puVar3 = puVar2;
    for (puVar1 = puVar2 + param_3 * -0x23; puVar1 != puVar2; puVar1 = puVar1 + 0x23) {
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
    puVar2 = *(undefined4 **)((int)this + 8);
    puVar3 = puVar2 + param_3 * -0x23;
    while (param_2 != puVar3) {
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
    puVar3 = param_2;
    while (puVar3 != param_2 + param_3 * 0x23) {
      puVar5 = puVar3 + 0x23;
      puVar2 = param_4;
      puVar1 = puVar3;
      for (i = 0x23; puVar3 = puVar5, i != 0; i = i + -1) {
        *puVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 0x8c;
  }
  return puVar3;
}


