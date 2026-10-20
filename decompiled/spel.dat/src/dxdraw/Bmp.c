/* spel.dat — dxdraw/Bmp.cpp: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ce140 FUN_004ce140 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce140(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  FILE *file;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  char cStack_12;
  char cStack_11;
  int i;
  int iStack_c;
  ushort *puStack_8;
  int j;
  
  uVar2 = param_2;
  file = (FILE *)FUN_005589a5(param_2,s_wb_005b5ea4);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d_____save_bmp__can_t_create_005b6a3c,s_D__Work_dxdraw_Bmp_cpp_005b6a68,0x3f,
                 uVar2);
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
  FUN_00558c1d(&DAT_007413f8,1,0xe,file);
  FUN_00558c1d(&DAT_00741408,1,0x28,file);
  FUN_004c8540();
  iVar3 = FUN_004c48f0(DAT_007408ac,&iStack_c);
  j = 0;
  puStack_8 = (ushort *)(iVar3 + (DAT_005b379c + -1) * iStack_c);
  iVar3 = DAT_005b3798;
  iVar4 = DAT_005b379c;
  if (0 < DAT_005b379c) {
    do {
      i = 0;
      puVar5 = puStack_8;
      if (0 < iVar3) {
        do {
          uVar1 = *puVar5;
          cStack_11 = (char)((int)(uVar1 & DAT_0074099c) >>
                            ((char)DAT_00740990 + (byte)DAT_00740994 & 0x1f)) <<
                      ((byte)_DAT_007409ac & 0x1f);
          cStack_12 = (char)((int)(uVar1 & DAT_007409a0) >> ((byte)DAT_00740994 & 0x1f)) <<
                      ((byte)_DAT_007409b0 & 0x1f);
          param_2 = CONCAT31(param_2._1_3_,
                             ((byte)DAT_007409a4 & (byte)uVar1) << ((byte)_DAT_007409b4 & 0x1f));
          FUN_00558c1d(&param_2,1,1,file);
          FUN_00558c1d(&cStack_12,1,1,file);
          FUN_00558c1d(&cStack_11,1,1,file);
          puVar5 = puVar5 + 1;
          i = i + 1;
          iVar3 = DAT_005b3798;
          iVar4 = DAT_005b379c;
        } while (i < DAT_005b3798);
      }
      puStack_8 = (ushort *)((int)puStack_8 - iStack_c);
      j = j + 1;
    } while (j < iVar4);
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


