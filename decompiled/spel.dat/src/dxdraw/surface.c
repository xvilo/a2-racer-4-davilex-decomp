/* spel.dat — dxdraw/surface.cpp: 12 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c47a0 FUN_004c47a0 ==== */

undefined4 FUN_004c47a0(int *param_1)

{
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_6c [4];
  undefined4 uStack_5c;
  
  puVar2 = local_6c;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  FUN_004c4a60(param_1);
  i = (**(code **)(*param_1 + 100))(param_1,0,local_6c,1,0);
  if (i != 0) {
    uVar1 = FUN_004c4400(i);
    FUN_004c4150(s__s__d____could_not_lock_surface___005b41ec,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x21,uVar1);
  }
  return uStack_5c;
}


/* ==== 004c4810 FUN_004c4810 ==== */

undefined4 FUN_004c4810(int *param_1)

{
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 auStack_6c [4];
  undefined4 uStack_5c;
  
  if (param_1 == (int *)0x0) {
    param_1 = DAT_007408ac;
    if (DAT_007408bc == 0) {
      return 0;
    }
  }
  else if (param_1 == (int *)0x1) {
    param_1 = DAT_007408b0;
    if (DAT_007408c0 == 0) {
      return 0;
    }
  }
  else if (param_1 == (int *)0x2) {
    param_1 = DAT_00740890;
    if (DAT_007408c4 == 0) {
      return 0;
    }
  }
  else {
    FUN_004c4150(s__s__d____unidentified_focus_erro_005b4230,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x7d,param_1);
  }
  puVar2 = (undefined4 *)&stack0xffffff90;
  FUN_004c4a60(param_1);
  for (i = 0x1b; puVar2 = puVar2 + 1, i != 0; i = i + -1) {
    *puVar2 = 0;
  }
  auStack_6c[0] = 0x6c;
  i = (**(code **)(*param_1 + 100))(param_1,0,auStack_6c,1,0);
  if (i != 0) {
    uVar1 = FUN_004c4400(i);
    FUN_004c4150(s__s__d____could_not_lock_surface___005b41ec,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x88,uVar1);
  }
  return uStack_5c;
}


/* ==== 004c48f0 FUN_004c48f0 ==== */

undefined4 FUN_004c48f0(int *param_1)

{
  undefined4 uVar1;
  int i;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  undefined4 local_6c [4];
  undefined4 uStack_5c;
  undefined4 *puStack_c;
  
  puVar2 = local_6c;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  FUN_004c4a60(param_1);
  i = (**(code **)(*param_1 + 100))(param_1,0,local_6c,1,0);
  if (i != 0) {
    uVar1 = FUN_004c4400(i);
    FUN_004c4150(s__s__d____could_not_lock_surface___005b41ec,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x100,uVar1);
    *puStack_c = unaff_ESI;
    return uStack_5c;
  }
  *puStack_c = unaff_ESI;
  return uStack_5c;
}


/* ==== 004c4980 FUN_004c4980 ==== */

void FUN_004c4980(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_007408ac;
  iVar2 = DAT_007408bc;
  if (((param_1 == (int *)0x0) ||
      (piVar1 = DAT_007408b0, iVar2 = DAT_007408c0, param_1 == (int *)0x1)) ||
     (piVar1 = DAT_00740890, iVar2 = DAT_007408c4, param_1 == (int *)0x2)) {
    param_1 = piVar1;
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    FUN_004c4150(s__s__d____unidentified_focus_erro_005b4230,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x159,param_1);
  }
  FUN_004c4a60(param_1);
  iVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
  if (iVar2 != 0) {
    uVar3 = FUN_004c4400(iVar2);
    FUN_004c4150(s__s__d____could_not_unlock_surfac_005b425c,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x161,uVar3);
  }
  return;
}


/* ==== 004c4a20 FUN_004c4a20 ==== */

void FUN_004c4a20(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004c4a60(param_1);
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_004c4400(iVar1);
    FUN_004c4150(s__s__d____could_not_unlock_surfac_005b425c,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x178,uVar2);
  }
  return;
}


/* ==== 004c4a60 FUN_004c4a60 ==== */

void FUN_004c4a60(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x6c))(param_1);
  }
  return;
}


/* ==== 004c4a80 FUN_004c4a80 ==== */

undefined4 FUN_004c4a80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int i;
  undefined4 local_6c [24];
  undefined4 uStack_c;
  undefined4 local_4;
  
  puVar1 = local_6c;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_6c[2] = param_2;
  local_6c[3] = param_1;
  local_6c[0] = 0x6c;
  local_6c[1] = 7;
  local_4 = 0x800;
  i = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_1,0);
  if (i != 0) {
    uVar2 = FUN_004c4400(i);
    FUN_004c4150(s__s__d____could_not_create_surfac_005b4288,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x1cf,uVar2);
  }
  return uStack_c;
}


/* ==== 004c4b00 FUN_004c4b00 ==== */

undefined4 FUN_004c4b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int i;
  undefined4 local_6c [26];
  undefined4 local_4;
  
  puVar1 = local_6c;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_6c[2] = param_2;
  local_4 = param_3;
  local_6c[0] = 0x6c;
  local_6c[1] = 7;
  local_6c[3] = param_1;
  i = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_3,0);
  if (i != 0) {
    uVar2 = FUN_004c4400(i);
    FUN_004c4150(s__s__d____could_not_create_surfac_005b4288,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x21c,uVar2);
  }
  return local_4;
}


/* ==== 004c4b90 FUN_004c4b90 ==== */

undefined4
FUN_004c4b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_6c [18];
  undefined4 local_24 [8];
  undefined4 local_4;
  
  puVar2 = local_6c;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[2] = param_2;
  local_6c[3] = param_1;
  local_4 = param_3;
  local_6c[0] = 0x6c;
  local_6c[1] = 0x1007;
  puVar2 = param_4;
  puVar3 = local_24;
  for (i = 8; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  i = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_3,0);
  if (i != 0) {
    uVar1 = FUN_004c4400(i);
    FUN_004c4150(s__s__d____could_not_create_surfac_005b4288,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x341,uVar1);
  }
  return local_4;
}


/* ==== 004c4c30 FUN_004c4c30 ==== */

uint FUN_004c4c30(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_6c [6];
  undefined4 local_54;
  undefined4 local_24 [8];
  uint local_4;
  
  puVar2 = local_6c;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = param_3 | 0x401008;
  local_6c[3] = param_1;
  local_54 = param_5;
  local_6c[2] = param_2;
  local_6c[0] = 0x6c;
  local_6c[1] = 0x21007;
  puVar2 = param_4;
  puVar3 = local_24;
  for (i = 8; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  i = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_3,0);
  if (i != 0) {
    uVar1 = FUN_004c4400(i);
    FUN_004c4150(s__s__d____could_not_create_surfac_005b4288,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x3a3,uVar1);
  }
  return local_4;
}


/* ==== 004c4ce0 FUN_004c4ce0 ==== */

bool FUN_004c4ce0(int *param_1)

{
  int i;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_6c [27];
  
  if ((DAT_007408e0 != 0) && (param_1 == (int *)0x0)) {
    return false;
  }
  piVar2 = DAT_007408ac;
  if (((param_1 != (int *)0x0) && (piVar2 = DAT_007408b0, param_1 != (int *)0x1)) &&
     (piVar2 = DAT_00740890, param_1 != (int *)0x2)) {
    FUN_004c4150(s__s__d____unidentified_focus_erro_005b4230,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x440,param_1);
    piVar2 = param_1;
  }
  puVar1 = (undefined4 *)&stack0xffffff90;
  for (i = 0x1b; puVar1 = puVar1 + 1, i != 0; i = i + -1) {
    *puVar1 = 0;
  }
  local_6c[0] = 0x6c;
  FUN_004c4a60(piVar2);
  i = (**(code **)(*piVar2 + 100))(piVar2,0,local_6c,1,0);
  if (i == 0) {
    i = (**(code **)(*piVar2 + 0x80))(piVar2,0);
    return i == 0;
  }
  return false;
}


/* ==== 004c4da0 FUN_004c4da0 ==== */

void FUN_004c4da0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  local_64[0] = 100;
  local_14 = param_2;
  FUN_004c4a60(param_1);
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,0,0,0,0x1000400,local_64);
  if (iVar1 != 0) {
    uVar2 = FUN_004c4400(iVar1);
    FUN_004c4150(s__s__d____clear_surface_blt_error_005b42b4,s_C__Work_dxdraw_surface_cpp_005b4214,
                 0x469,uVar2);
  }
  return;
}


