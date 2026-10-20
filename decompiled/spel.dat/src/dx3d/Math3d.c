/* spel.dat — dx3d/Math3d.cpp: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004bc430 FUN_004bc430 ==== */

bool FUN_004bc430(uint param_1)

{
  uint uVar1;
  int j;
  int i;
  
  i = 0;
  uVar1 = 1;
  j = 0;
  while (((param_1 & uVar1) == 0 || (i = i + 1, i < 2))) {
    uVar1 = uVar1 << 1;
    j = j + 1;
    if (0x1f < j) {
      return i == 1;
    }
  }
  return false;
}


/* ==== 004bc460 FUN_004bc460 ==== */

void FUN_004bc460(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int i;
  undefined4 local_40 [16];
  
  i = 4;
  puVar1 = local_40;
  puVar2 = local_40;
  do {
    *puVar1 = 0;
    i = i + -1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar2 = 0x3f800000;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 5;
  } while (i != 0);
  puVar1 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004bc4b0 FUN_004bc4b0 ==== */

void FUN_004bc4b0(undefined4 *param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_40 [16];
  
  puVar1 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004bc4e0 FUN_004bc4e0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc4e0(int param_1)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 auStack_40 [64];
  
  i = FUN_004bc430(param_1);
  if (i == 0) {
    FUN_004c4150(s_nb_table_entries___d__moet_een_m_005b2404,param_1);
  }
  _DAT_005b23b8 = (float)param_1;
  DAT_005b23b4 = param_1;
  DAT_005b23bc = param_1 + -1;
  DAT_0073b530 = LocalAlloc(0x40,param_1 * 4);
  if (DAT_0073b530 == (HLOCAL)0x0) {
    FUN_004c4150(s__s__d____error_allocating_cos_si_005b23c0,s_D__Work_DX3D_Math3d_cpp_005b23ec,0x6f
                );
  }
  DAT_0073b578 = LocalAlloc(0x40,DAT_005b23b4 * 4);
  if (DAT_0073b578 == (HLOCAL)0x0) {
    FUN_004c4150(s__s__d____error_allocating_cos_si_005b23c0,s_D__Work_DX3D_Math3d_cpp_005b23ec,0x73
                );
  }
  param_1 = 0;
  if (0 < DAT_005b23b4) {
    do {
      fVar3 = (float10)param_1;
      param_1 = param_1 + 1;
      fVar4 = (float10)fsin((fVar3 / (float10)DAT_005b23b4) * (float10)6.2831855);
      *(float *)((int)DAT_0073b530 + param_1 * 4 + -4) = (float)fVar4;
      fVar3 = (float10)fcos((fVar3 / (float10)DAT_005b23b4) * (float10)6.2831855);
      *(float *)((int)DAT_0073b578 + param_1 * 4 + -4) = (float)fVar3;
    } while (param_1 < DAT_005b23b4);
  }
  _DAT_0073b5c0 = 1;
  puVar1 = (undefined4 *)FUN_004bc460(auStack_40);
  puVar2 = &DAT_0073b538;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined4 *)FUN_004bc4b0(auStack_40);
  puVar2 = &DAT_0073b580;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* ==== 004bc620 FUN_004bc620 ==== */

void FUN_004bc620(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2 * *param_3 + param_3[4] * param_2[1] + param_3[8] * param_2[2] + param_3[0xc];
  param_1[1] = param_3[1] * *param_2 + param_3[5] * param_2[1] + param_3[9] * param_2[2] +
               param_3[0xd];
  param_1[2] = param_3[2] * *param_2 + param_3[6] * param_2[1] + param_3[10] * param_2[2] +
               param_3[0xe];
  return;
}


/* ==== 004bc690 FUN_004bc690 ==== */

void FUN_004bc690(void)

{
  int iVar1;
  
  DAT_0073b5d4 = 0;
  _strncpy(&DAT_0073b5dc,s_c_mesh_005b2460,0x19);
  _strncpy(&DAT_0073b5f5,s__d3d_mesh_ptr_005b2450,0x19);
  if (DAT_0073b5d4 != 0) {
    if (DAT_0073b5d4 == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b5f5,&DAT_0073b5dc,
                   DAT_0073b5cc);
      if (DAT_0073b5c8 != 0) {
        iVar1 = DAT_0073b5c8 + -4;
        FUN_005586c5(DAT_0073b5c8,0xac,*(undefined4 *)(DAT_0073b5c8 + -4),FUN_004bd590);
        FUN_0054b339(iVar1);
      }
    }
    if (DAT_0073b5d4 != 0) {
      FUN_0054b339(DAT_0073b5d8);
      DAT_0073b5d4 = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b5c8 = 0;
  DAT_0073b5cc = 0;
  DAT_0073b5d0 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b5f5,&DAT_0073b5dc,0);
  DAT_0073b5d8 = 0;
  DAT_0073b5d4 = 0;
  return;
}


