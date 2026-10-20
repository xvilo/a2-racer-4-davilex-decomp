/* spel.dat — dxdraw/Bmp.cpp: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ce140 FUN_004ce140 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce140(undefined4 param_1,undefined4 param_2)

{
  FILE *file;
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FILE *pFVar7;
  int j;
  int iStack_c;
  undefined2 *puStack_8;
  int i;
  
  uVar5 = param_2;
  file = (FILE *)FUN_005589a5(param_2,s_wb_005b5ea4);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d_____save_bmp__can_t_create_005b6a3c,s_D__Work_dxdraw_Bmp_cpp_005b6a68,0x3f,
                 uVar5);
  }
  _DAT_007413fa = (DAT_005b379c * DAT_005b3798 + 0x12) * 3;
  _DAT_007413f8 = 0x4d42;
  _DAT_007413fe = 0;
  _DAT_00741400 = 0;
  _DAT_00741402 = 0x36;
  _DAT_00741408 = 0x28;
  _DAT_0074140c = DAT_005b3798;
  _DAT_00741410 = DAT_005b379c;
  _DAT_00741414 = 1;
  _DAT_00741416 = 0x18;
  _DAT_00741418 = 0;
  _DAT_0074141c = 0;
  _DAT_00741420 = 0;
  _DAT_00741424 = 0;
  _DAT_00741428 = 0;
  _DAT_0074142c = 0;
  FUN_00558c1d(DAT_005b379c,&DAT_007413f8,1,0xe,file);
  uVar6 = 0x28;
  uVar5 = 1;
  puVar4 = &DAT_00741408;
  pFVar7 = file;
  FUN_00558c1d();
  FUN_004c8540(puVar4,uVar5,uVar6,pFVar7);
  iVar1 = FUN_004c48f0(DAT_007408ac,&iStack_c);
  i = 0;
  puStack_8 = (undefined2 *)(iVar1 + (DAT_005b379c + -1) * iStack_c);
  iVar1 = DAT_005b3798;
  iVar2 = DAT_005b379c;
  if (0 < DAT_005b379c) {
    do {
      j = 0;
      puVar3 = puStack_8;
      if (0 < iVar1) {
        do {
          param_2 = CONCAT31(param_2._1_3_,
                             ((byte)DAT_007409a4 & (byte)*puVar3) << ((byte)_DAT_007409b4 & 0x1f));
          FUN_00558c1d(&param_2,&param_2,1,1,file);
          FUN_00558c1d();
          FUN_00558c1d();
          puVar3 = puVar3 + 1;
          j = j + 1;
          iVar1 = DAT_005b3798;
          iVar2 = DAT_005b379c;
        } while (j < DAT_005b3798);
      }
      puStack_8 = (undefined2 *)((int)puStack_8 - iStack_c);
      i = i + 1;
    } while (i < iVar2);
  }
  FUN_004c4a20(DAT_007408ac,puStack_8);
  FUN_005588fd(file);
  return;
}


/* ==== 004ce360 FUN_004ce360 ==== */

void FUN_004ce360(void)

{
  int i;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00741430;
  for (i = 10000; i != 0; i = i + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  DAT_0074b070 = 0;
  DAT_0074b074 = 1;
  return;
}


/* ==== 004ce390 FUN_004ce390 ==== */

void FUN_004ce390(int *param_1)

{
  int iVar1;
  int k;
  int j;
  int *piVar2;
  int i;
  
  i = 0;
  j = DAT_0074b070;
  if (0 < *param_1) {
    do {
      iVar1 = *(int *)(param_1[2] + 4 + i * 8);
      k = 0;
      if (0 < j) {
        piVar2 = &DAT_00741430;
        do {
          if (*piVar2 == iVar1) goto LAB_004ce3d0;
          k = k + 1;
          piVar2 = piVar2 + 1;
        } while (k < j);
      }
      (&DAT_00741430)[j] = iVar1;
      j = j + 1;
      DAT_0074b070 = j;
LAB_004ce3d0:
      i = i + 1;
    } while (i < *param_1);
  }
  return;
}


