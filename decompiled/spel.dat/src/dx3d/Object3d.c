/* spel.dat — dx3d/Object3d.cpp: 30 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b4030 FUN_004b4030 ==== */

void FUN_004b4030(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


/* ==== 004b4070 FUN_004b4070 ==== */

void FUN_004b4070(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


/* ==== 004b40b0 FUN_004b40b0 ==== */

void FUN_004b40b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}


/* ==== 004b40d0 FUN_004b40d0 ==== */

void FUN_004b40d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  return;
}


/* ==== 004b40f0 FUN_004b40f0 ==== */

void FUN_004b40f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  return;
}


/* ==== 004b4110 FUN_004b4110 ==== */

void FUN_004b4110(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int i;
  float *pfVar2;
  float *pfVar3;
  float local_40 [5];
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  fVar1 = param_2[8];
  pfVar2 = (float *)&DAT_0073b580;
  pfVar3 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  local_40[3] = 0.0;
  local_24 = 0;
  local_40[0] = *param_2 * *param_3 + param_3[1] * param_2[4] + fVar1 * param_3[2];
  local_40[1] = param_2[1] * *param_3 + param_2[5] * param_3[1] + param_2[9] * param_3[2];
  local_40[2] = param_3[1] * param_2[6] + param_2[10] * param_3[2] + param_2[2] * *param_3;
  local_40[4] = param_3[4] * *param_2 + param_3[5] * param_2[4] + param_3[6] * param_2[8];
  local_2c = param_3[4] * param_2[1] + param_3[6] * param_2[9] + param_3[5] * param_2[5];
  local_28 = param_3[5] * param_2[6] + param_3[4] * param_2[2] + param_3[6] * param_2[10];
  local_20 = *param_2 * param_3[8] + param_2[8] * param_3[10] + param_3[9] * param_2[4];
  local_1c = param_2[1] * param_3[8] + param_3[9] * param_2[5] + param_2[9] * param_3[10];
  local_14 = 0;
  local_4 = 0x3f800000;
  local_18 = param_3[9] * param_2[6] + param_2[2] * param_3[8] + param_2[10] * param_3[10];
  local_10 = param_3[0xd] * param_2[4] + param_2[8] * param_3[0xe] + param_3[0xc] * *param_2 +
             param_2[0xc];
  local_c = param_2[1] * param_3[0xc] + param_2[9] * param_3[0xe] + param_2[5] * param_3[0xd] +
            param_2[0xd];
  local_8 = param_2[2] * param_3[0xc] + param_2[10] * param_3[0xe] + param_2[6] * param_3[0xd] +
            param_2[0xe];
  pfVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b42a0 FUN_004b42a0 ==== */

void FUN_004b42a0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int i;
  int j;
  float local_c [3];
  
  pfVar6 = local_c;
  i = 3;
  do {
    *pfVar6 = 0.0;
    fVar1 = *pfVar6;
    pfVar4 = (float *)((param_3 - (int)local_c) + (int)pfVar6);
    j = 3;
    pfVar5 = param_2;
    do {
      fVar2 = *pfVar5;
      fVar3 = *pfVar4;
      pfVar4 = pfVar4 + 4;
      pfVar5 = pfVar5 + 1;
      j = j + -1;
      fVar1 = fVar2 * fVar3 + fVar1;
    } while (j != 0);
    *pfVar6 = fVar1;
    pfVar6 = pfVar6 + 1;
    i = i + -1;
  } while (i != 0);
  *param_1 = local_c[0];
  param_1[1] = local_c[1];
  param_1[2] = local_c[2];
  return;
}


/* ==== 004b4310 FUN_004b4310 ==== */

void FUN_004b4310(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int j;
  int i;
  undefined4 local_40 [16];
  
  puVar2 = local_40;
  i = 4;
  do {
    j = 4;
    puVar3 = param_2;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 4;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      j = j + -1;
    } while (j != 0);
    param_2 = param_2 + 1;
    i = i + -1;
  } while (i != 0);
  puVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004b4360 FUN_004b4360 ==== */

void FUN_004b4360(float *param_1,float param_2,float param_3,float param_4)

{
  *param_1 = param_2 * *param_1;
  param_1[4] = param_3 * param_1[4];
  param_1[8] = param_4 * param_1[8];
  param_1[1] = param_2 * param_1[1];
  param_1[5] = param_3 * param_1[5];
  param_1[9] = param_4 * param_1[9];
  param_1[2] = param_2 * param_1[2];
  param_1[6] = param_3 * param_1[6];
  param_1[10] = param_4 * param_1[10];
  return;
}


/* ==== 004b43d0 FUN_004b43d0 ==== */

void FUN_004b43d0(void)

{
  int iVar1;
  
  DAT_0073b0dc = 0;
  _strncpy(&DAT_0073b0e4,s__d3d_objects_005b0eac,0x19);
  _strncpy(&DAT_0073b0fd,s_c_3dobject_005b0ea0,0x19);
  if (DAT_0073b0dc != 0) {
    if (DAT_0073b0dc == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b0fd,&DAT_0073b0e4,
                   DAT_0073b0d4);
      if (DAT_0073b0d0 != 0) {
        iVar1 = DAT_0073b0d0 + -4;
        FUN_005586c5(DAT_0073b0d0,0xa9,*(undefined4 *)(DAT_0073b0d0 + -4),FUN_0051ed40);
        FUN_0054b339(iVar1);
      }
    }
    if (DAT_0073b0dc != 0) {
      FUN_0054b339(DAT_0073b0e0);
      DAT_0073b0dc = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b0d0 = 0;
  DAT_0073b0d4 = 0;
  DAT_0073b0d8 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b0fd,&DAT_0073b0e4,0);
  DAT_0073b0e0 = 0;
  DAT_0073b0dc = 0;
  return;
}


/* ==== 004b44c0 FUN_004b44c0 ==== */

void FUN_004b44c0(void)

{
  FUN_005584e0(&LAB_004b44d0);
  return;
}


/* ==== 004b4550 FUN_004b4550 ==== */

void FUN_004b4550(undefined4 param_1)

{
  DAT_005b0e9c = param_1;
  return;
}


/* ==== 004b4560 FUN_004b4560 ==== */

undefined4 FUN_004b4560(uint size)

{
  FUN_004b5e90(&DAT_0073b0d0,size);
  FUN_004c1950(1000);
  return 0;
}


/* ==== 004b4580 FUN_004b4580 ==== */

void FUN_004b4580(int param_1)

{
  int iVar1;
  
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((param_1 < 0) || (DAT_0073b0d4 <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b0e4,param_1,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b0e4,param_1);
  }
  iVar1 = param_1 * 0xa9;
  *(undefined4 *)(iVar1 + 0x91 + DAT_0073b0d0) = 0xffffffff;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((param_1 < 0) || (DAT_0073b0d4 <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b0e4,param_1,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b0e4,param_1);
  }
  *(undefined4 *)(iVar1 + 0xa1 + DAT_0073b0d0) = 1;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x42,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((param_1 < 0) || (DAT_0073b0d4 <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x42,&DAT_0073b0e4,param_1,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x42,&DAT_0073b0e4,param_1);
  }
  *(undefined4 *)(iVar1 + 0x99 + DAT_0073b0d0) = 0xffffffff;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x43,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((param_1 < 0) || (DAT_0073b0d4 <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x43,&DAT_0073b0e4,param_1,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x43,&DAT_0073b0e4,param_1);
  }
  *(undefined4 *)(iVar1 + 0x95 + DAT_0073b0d0) = 0xffffffff;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__free__s__d__of_005b0f00,s___array_hpp_005b1044,0xd7,
                 &DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((-1 < param_1) && (param_1 < DAT_0073b0d4)) {
    *(undefined1 *)(DAT_0073b0e0 + param_1) = 0;
    return;
  }
  FUN_004c4150(s__s__d____T_ARRAY__free_illegal_i_005b0ebc,s___array_hpp_005b1044,0xdb,param_1,
               &DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  *(undefined1 *)(DAT_0073b0e0 + param_1) = 0;
  return;
}


/* ==== 004b4850 FUN_004b4850 ==== */

void FUN_004b4850(void)

{
  int iVar1;
  
  if (DAT_0073b0dc == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b0fd,&DAT_0073b0e4,
                 DAT_0073b0d4);
    if (DAT_0073b0d0 != 0) {
      iVar1 = DAT_0073b0d0 + -4;
      FUN_005586c5(DAT_0073b0d0,0xa9,*(undefined4 *)(DAT_0073b0d0 + -4),FUN_0051ed40);
      FUN_0054b339(iVar1);
    }
  }
  if (DAT_0073b0dc != 0) {
    FUN_0054b339(DAT_0073b0e0);
    DAT_0073b0dc = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  FUN_004c1a50();
  return;
}


/* ==== 004b48e0 FUN_004b48e0 ==== */

int FUN_004b48e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004b4bd0();
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x54,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x54,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x54,&DAT_0073b0e4,iVar2);
  }
  iVar1 = iVar2 * 0xa9;
  *(undefined4 *)(iVar1 + DAT_0073b0d0) = 1;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x56,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x56,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x56,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar1 + 0x99 + DAT_0073b0d0) = param_1;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x57,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x57,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x57,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar1 + 0x95 + DAT_0073b0d0) = param_2;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x59,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x59,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x59,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar1 + 0x9d + DAT_0073b0d0) = param_3;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x5a,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x5a,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x5a,&DAT_0073b0e4,iVar2);
    *(undefined4 *)(iVar1 + 0x91 + DAT_0073b0d0) = 1;
    return iVar2;
  }
  *(undefined4 *)(iVar1 + 0x91 + DAT_0073b0d0) = 1;
  return iVar2;
}


/* ==== 004b4bd0 FUN_004b4bd0 ==== */

int FUN_004b4bd0(void)

{
  int i;
  
  i = DAT_0073b0d8;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 &DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
    i = DAT_0073b0d8;
  }
  for (; i < DAT_0073b0d4; i = i + 1) {
    if (*(char *)(DAT_0073b0e0 + i) == '\0') goto LAB_004b4c5c;
  }
  i = 0;
  if (0 < DAT_0073b0d8) {
    do {
      if (*(char *)(DAT_0073b0e0 + i) == '\0') {
LAB_004b4c5c:
        *(undefined1 *)(DAT_0073b0e0 + i) = 1;
        DAT_0073b0d8 = i;
        return i;
      }
      i = i + 1;
    } while (i < DAT_0073b0d8);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,&DAT_0073b0e4
               ,DAT_0073b0d4,&DAT_0073b0fd);
  return -1;
}


/* ==== 004b4c70 FUN_004b4c70 ==== */

int FUN_004b4c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004b4bd0();
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x73,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x73,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x73,&DAT_0073b0e4,iVar2);
  }
  iVar3 = iVar2 * 0xa9;
  *(undefined4 *)(iVar3 + DAT_0073b0d0) = 1;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x75,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x75,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x75,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar3 + 0x99 + DAT_0073b0d0) = param_7;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x76,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x76,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x76,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar3 + 0x95 + DAT_0073b0d0) = param_8;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x77,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x77,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x77,&DAT_0073b0e4,iVar2);
  }
  puVar1 = (undefined4 *)(iVar3 + 0x50 + DAT_0073b0d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x78,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x78,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x78,&DAT_0073b0e4,iVar2);
  }
  puVar1 = (undefined4 *)(iVar3 + 0x74 + DAT_0073b0d0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  iVar3 = FUN_004b5ff0(&DAT_0073b0d0,iVar2,s_C__Work_DX3D_Object3d_cpp_005b0f7c,0x7a);
  *(undefined4 *)(iVar3 + 0x9d) = param_9;
  iVar3 = FUN_004b5ff0(&DAT_0073b0d0,iVar2,s_C__Work_DX3D_Object3d_cpp_005b0f7c,0x7b);
  *(undefined4 *)(iVar3 + 0x91) = 1;
  return iVar2;
}


/* ==== 004b4fa0 FUN_004b4fa0 ==== */

int FUN_004b4fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004b4bd0();
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x84,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x84,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x84,&DAT_0073b0e4,iVar2);
  }
  iVar1 = iVar2 * 0xa9;
  *(undefined4 *)(iVar1 + DAT_0073b0d0) = 2;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x85,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x85,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x85,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar1 + 4 + DAT_0073b0d0) = param_1;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x86,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x86,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x86,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar1 + 8 + DAT_0073b0d0) = param_2;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x88,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x88,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x88,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar1 + 0x9d + DAT_0073b0d0) = param_3;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x89,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x89,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0x89,&DAT_0073b0e4,iVar2);
    *(undefined4 *)(iVar1 + 0x91 + DAT_0073b0d0) = 1;
    return iVar2;
  }
  *(undefined4 *)(iVar1 + 0x91 + DAT_0073b0d0) = 1;
  return iVar2;
}


/* ==== 004b52c0 FUN_004b52c0 ==== */

int FUN_004b52c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004b4bd0();
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa2,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa2,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa2,&DAT_0073b0e4,iVar2);
  }
  iVar3 = iVar2 * 0xa9;
  *(undefined4 *)(iVar3 + DAT_0073b0d0) = 2;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa3,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa3,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa3,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar3 + 4 + DAT_0073b0d0) = param_7;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa4,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa4,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa4,&DAT_0073b0e4,iVar2);
  }
  *(undefined4 *)(iVar3 + 8 + DAT_0073b0d0) = param_8;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa6,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa6,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa6,&DAT_0073b0e4,iVar2);
  }
  puVar1 = (undefined4 *)(iVar3 + 0x50 + DAT_0073b0d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  if (DAT_0073b0dc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa7,&DAT_0073b0e4,DAT_0073b0d4,&DAT_0073b0fd);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa7,&DAT_0073b0e4,iVar2,DAT_0073b0d4);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                 0xa7,&DAT_0073b0e4,iVar2);
  }
  puVar1 = (undefined4 *)(iVar3 + 0x74 + DAT_0073b0d0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  iVar3 = FUN_004b5ff0(&DAT_0073b0d0,iVar2,s_C__Work_DX3D_Object3d_cpp_005b0f7c,0xa9);
  *(undefined4 *)(iVar3 + 0x9d) = param_9;
  iVar3 = FUN_004b5ff0(&DAT_0073b0d0,iVar2,s_C__Work_DX3D_Object3d_cpp_005b0f7c,0xaa);
  *(undefined4 *)(iVar3 + 0x91) = 1;
  return iVar2;
}


/* ==== 004b5760 FUN_004b5760 ==== */

void __thiscall FUN_004b5760(void *this)

{
  if (*(int *)((int)this + 0xa1) == 1) {
    FUN_004b5770();
    return;
  }
  return;
}


/* ==== 004b5770 FUN_004b5770 ==== */

void __thiscall FUN_004b5770(void *this)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int i;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 local_600 [64];
  undefined1 local_5c0 [64];
  undefined1 local_580 [64];
  undefined1 local_540 [64];
  undefined1 local_500 [64];
  undefined1 local_4c0 [64];
  undefined1 local_480 [64];
  undefined1 local_440 [64];
  undefined1 local_400 [64];
  undefined1 local_3c0 [64];
  undefined1 local_380 [64];
  undefined1 local_340 [64];
  undefined1 local_300 [64];
  undefined1 local_2c0 [64];
  undefined1 local_280 [64];
  undefined1 local_240 [64];
  undefined1 local_200 [64];
  undefined1 local_1c0 [64];
  undefined1 local_180 [64];
  undefined1 local_140 [64];
  undefined1 local_100 [64];
  undefined1 local_c0 [64];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  puVar1 = (undefined4 *)((int)this + 0x10);
  puVar4 = &DAT_0073b538;
  puVar6 = puVar1;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (DAT_005b0e9c == 0) {
    if (*(float *)((int)this + 0x7c) != 0.0) {
      uVar3 = __ftol(puVar1);
      uVar3 = FUN_004b3f80(local_2c0,uVar3);
      puVar4 = (undefined4 *)FUN_004b4110(local_240,uVar3);
      puVar6 = puVar1;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if (*(float *)((int)this + 0x74) != 0.0) {
      uVar3 = __ftol(puVar1);
      uVar3 = FUN_004b3ea0(local_1c0,uVar3);
      puVar4 = (undefined4 *)FUN_004b4110(local_140,uVar3);
      puVar6 = puVar1;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if (*(float *)((int)this + 0x78) == 0.0) goto LAB_004b5abf;
    uVar3 = __ftol(puVar1);
    uVar3 = FUN_004b3f10(local_c0,uVar3);
    puVar5 = local_40;
  }
  else if (DAT_005b0e9c == 1) {
    if (*(float *)((int)this + 0x7c) != 0.0) {
      uVar3 = __ftol(puVar1);
      uVar3 = FUN_004b3f80(local_5c0,uVar3);
      puVar4 = (undefined4 *)FUN_004b4110(local_540,uVar3);
      puVar6 = puVar1;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if (*(float *)((int)this + 0x78) != 0.0) {
      uVar3 = __ftol(puVar1);
      uVar3 = FUN_004b3f10(local_4c0,uVar3);
      puVar4 = (undefined4 *)FUN_004b4110(local_440,uVar3);
      puVar6 = puVar1;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    if (*(float *)((int)this + 0x74) == 0.0) goto LAB_004b5abf;
    uVar3 = __ftol(puVar1);
    uVar3 = FUN_004b3ea0(local_3c0,uVar3);
    puVar5 = local_340;
  }
  else {
    bVar2 = *(float *)((int)this + 0x74) != 0.0;
    if (DAT_005b0e9c == 2) {
      if (bVar2) {
        uVar3 = __ftol(puVar1);
        uVar3 = FUN_004b3ea0(local_80,uVar3);
        puVar4 = (undefined4 *)FUN_004b4110(local_400,uVar3);
        puVar6 = puVar1;
        for (i = 0x10; i != 0; i = i + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      if (*(float *)((int)this + 0x78) != 0.0) {
        uVar3 = __ftol(puVar1);
        uVar3 = FUN_004b3f10(local_200,uVar3);
        puVar4 = (undefined4 *)FUN_004b4110(local_380,uVar3);
        puVar6 = puVar1;
        for (i = 0x10; i != 0; i = i + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      if (*(float *)((int)this + 0x7c) == 0.0) goto LAB_004b5abf;
      uVar3 = __ftol(puVar1);
      uVar3 = FUN_004b3f80(local_100,uVar3);
      puVar5 = local_600;
    }
    else {
      if (bVar2) {
        uVar3 = __ftol(puVar1);
        uVar3 = FUN_004b3ea0(local_300,uVar3);
        puVar4 = (undefined4 *)FUN_004b4110(local_580,uVar3);
        puVar6 = puVar1;
        for (i = 0x10; i != 0; i = i + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      if (*(float *)((int)this + 0x78) != 0.0) {
        uVar3 = __ftol(puVar1);
        uVar3 = FUN_004b3f10(local_180,uVar3);
        puVar4 = (undefined4 *)FUN_004b4110(local_500,uVar3);
        puVar6 = puVar1;
        for (i = 0x10; i != 0; i = i + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      if (*(float *)((int)this + 0x7c) == 0.0) goto LAB_004b5abf;
      uVar3 = __ftol(puVar1);
      uVar3 = FUN_004b3f80(local_280,uVar3);
      puVar5 = local_480;
    }
  }
  puVar4 = (undefined4 *)FUN_004b4110(puVar5,uVar3);
  puVar6 = puVar1;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_004b5abf:
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x58);
  FUN_004b4360(puVar1,*(undefined4 *)((int)this + 0x80),*(undefined4 *)((int)this + 0x84),
               *(undefined4 *)((int)this + 0x88));
  return;
}


/* ==== 004b5b10 FUN_004b5b10 ==== */

void __thiscall FUN_004b5b10(void *this)

{
  undefined4 uVar1;
  int i;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  undefined4 *puVar4;
  undefined4 auStack_40 [16];
  
  FUN_004b5760();
  if (*(int *)((int)this + 0x95) == -1) {
    iVar2 = *(int *)((int)this + 4);
    if (DAT_0073b174 == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   400,&DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
    }
    if ((iVar2 < 0) || (DAT_0073b16c <= iVar2)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   400,&DAT_0073b17c,iVar2,DAT_0073b16c);
    }
    if (*(char *)(DAT_0073b178 + iVar2) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   400,&DAT_0073b17c,iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 * 9 + 4 + DAT_0073b168) + *(int *)((int)this + 8) * 4);
    if (DAT_0073b12c == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   400,&DAT_0073b134,DAT_0073b124,&DAT_0073b14d);
    }
    if ((iVar2 < 0) || (DAT_0073b124 <= iVar2)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   400,&DAT_0073b134,iVar2,DAT_0073b124);
    }
    if (*(char *)(DAT_0073b130 + iVar2) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   400,&DAT_0073b134,iVar2);
    }
  }
  iVar2 = *(int *)((int)this + 0x99);
  if (iVar2 == -1) {
    iVar2 = *(int *)((int)this + 4);
    if (DAT_0073b174 == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   0x197,&DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
    }
    if ((iVar2 < 0) || (DAT_0073b16c <= iVar2)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   0x197,&DAT_0073b17c,iVar2,DAT_0073b16c);
    }
    if (*(char *)(DAT_0073b178 + iVar2) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   0x197,&DAT_0073b17c,iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 * 9 + 4 + DAT_0073b168) + *(int *)((int)this + 8) * 4);
    if (DAT_0073b12c == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   0x197,&DAT_0073b134,DAT_0073b124,&DAT_0073b14d);
    }
    if ((iVar2 < 0) || (DAT_0073b124 <= iVar2)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   0x197,&DAT_0073b134,iVar2,DAT_0073b124);
    }
    if (*(char *)(DAT_0073b130 + iVar2) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_Object3d_cpp_005b0f7c,
                   0x197,&DAT_0073b134,iVar2);
    }
    iVar2 = *(int *)(iVar2 * 0x10 + DAT_0073b120);
  }
  puVar3 = (undefined4 *)((int)this + 0x10);
  puVar4 = auStack_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (DAT_0073b4cc != 1) {
    FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
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
    uVar1 = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,s___d3dev_inl_005b1060,0x14,uVar1);
  }
  DAT_0073b11c = DAT_0073b11c + 1;
  if (*(int *)(unaff_ESI + 0xa5) == 0) {
    if (DAT_0073b529 != 0) {
      DAT_0073b529 = 0;
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
  }
  else if (DAT_0073b529 == 0) {
    DAT_0073b529 = 1;
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
  }
  FUN_004bd070(iVar2,unaff_EDI);
  return;
}


/* ==== 004b5e90 FUN_004b5e90 ==== */

void __thiscall FUN_004b5e90(void *this,uint size)

{
  uint *operator_new_result;
  void *operator_new_result_2;
  int iVar1;
  int iVar2;
  uint *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f5db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    if (*(int *)((int)this + 0xc) == 1) {
      ExceptionList = &pvStack_c;
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x2d,(int)this + 0x14,
                   *(undefined4 *)((int)this + 4));
      iVar1 = *(int *)this;
      if (iVar1 != 0) {
        FUN_005586c5(iVar1,0xa9,*(undefined4 *)(iVar1 + -4),FUN_0051ed40);
        FUN_0054b339(iVar1 + -4);
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 (int)this + 0x2d,(int)this + 0x14,size);
  }
  operator_new_result = operator_new(size * 0xa9 + 4);
  uStack_4 = 0;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0xa9,size,&LAB_004b5630,FUN_0051ed40);
  }
  uStack_4 = 0xffffffff;
  *(uint **)this = puVar3;
  *(uint *)((int)this + 4) = size;
  *(undefined4 *)((int)this + 8) = 0;
  operator_new_result_2 = operator_new(size);
  *(void **)((int)this + 0x10) = operator_new_result_2;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)this + 0x2d,(int)this + 0x14,
               *(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0xc) = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + *(int *)((int)this + 0x10)) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004b5ff0 FUN_004b5ff0 ==== */

int __thiscall FUN_004b5ff0(void *this,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,param_3,param_4,(int)this + 0x14,
                 *(undefined4 *)((int)this + 4),(int)this + 0x2d);
  }
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,param_3,param_4,(int)this + 0x14,
                 param_2,*(undefined4 *)((int)this + 4));
  }
  if (*(char *)(*(int *)((int)this + 0x10) + param_2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,param_3,param_4,(int)this + 0x14,
                 param_2);
  }
  return param_2 * 0xa9 + *(int *)this;
}


/* ==== 004b6080 FUN_004b6080 ==== */

int __thiscall FUN_004b6080(void *this,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,param_3,param_4,(int)this + 0x14,
                 *(undefined4 *)((int)this + 4),(int)this + 0x2d);
  }
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,param_3,param_4,(int)this + 0x14,
                 param_2,*(undefined4 *)((int)this + 4));
  }
  if (*(char *)(*(int *)((int)this + 0x10) + param_2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,param_3,param_4,(int)this + 0x14,
                 param_2);
  }
  return *(int *)this + param_2 * 0xac;
}


/* ==== 004b6110 FUN_004b6110 ==== */

int __thiscall FUN_004b6110(void *this,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,param_3,param_4,(int)this + 0x14,
                 *(undefined4 *)((int)this + 4),(int)this + 0x2d);
  }
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,param_3,param_4,(int)this + 0x14,
                 param_2,*(undefined4 *)((int)this + 4));
  }
  if (*(char *)(*(int *)((int)this + 0x10) + param_2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,param_3,param_4,(int)this + 0x14,
                 param_2);
  }
  return *(int *)this + param_2 * 4;
}


/* ==== 004b61a0 FUN_004b61a0 ==== */

void FUN_004b61a0(void)

{
  DAT_0073b12c = 0;
  _strncpy(&DAT_0073b134,s_frame3d_ptr_005b10ac,0x19);
  _strncpy(&DAT_0073b14d,s_frame3d_t_005b10a0,0x19);
  if (DAT_0073b12c != 0) {
    if (DAT_0073b12c == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b14d,&DAT_0073b134,
                   DAT_0073b124);
      FUN_0054b339(DAT_0073b120);
    }
    if (DAT_0073b12c != 0) {
      FUN_0054b339(DAT_0073b130);
      DAT_0073b12c = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b120 = 0;
  DAT_0073b124 = 0;
  DAT_0073b128 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b14d,&DAT_0073b134,0);
  DAT_0073b130 = 0;
  DAT_0073b12c = 0;
  return;
}


/* ==== 004b6270 FUN_004b6270 ==== */

void FUN_004b6270(void)

{
  FUN_005584e0(&LAB_004b6280);
  return;
}


/* ==== 004b62f0 FUN_004b62f0 ==== */

void FUN_004b62f0(void)

{
  DAT_0073b174 = 0;
  _strncpy(&DAT_0073b17c,s_anims3d_ptr_005b10c4,0x19);
  _strncpy(&DAT_0073b195,s_anim3d_t_005b10b8,0x19);
  if (DAT_0073b174 != 0) {
    if (DAT_0073b174 == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b195,&DAT_0073b17c,
                   DAT_0073b16c);
      FUN_0054b339(DAT_0073b168);
    }
    if (DAT_0073b174 != 0) {
      FUN_0054b339(DAT_0073b178);
      DAT_0073b174 = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b168 = 0;
  DAT_0073b16c = 0;
  DAT_0073b170 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b195,&DAT_0073b17c,0);
  DAT_0073b178 = 0;
  DAT_0073b174 = 0;
  return;
}


