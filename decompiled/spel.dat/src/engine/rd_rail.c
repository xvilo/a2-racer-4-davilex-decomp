/* spel.dat — engine/rd_rail.cpp: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b2ea0 FUN_004b2ea0 ==== */

void FUN_004b2ea0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int i;
  
  puVar1 = (undefined4 *)(in_ECX + 4);
  i = 2;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 3;
    i = i + -1;
  } while (i != 0);
  return;
}


/* ==== 004b30b0 FUN_004b30b0 ==== */

void FUN_004b30b0(uint size)

{
  FUN_004b3290(size);
  return;
}


/* ==== 004b30c0 FUN_004b30c0 ==== */

int FUN_004b30c0(undefined4 param_1)

{
  int i;
  
  i = DAT_0073b048;
  if (DAT_0073b04c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,&DAT_0073b054,DAT_0073b044,
                 &DAT_0073b06d);
    i = DAT_0073b048;
  }
  for (; i < DAT_0073b044; i = i + 1) {
    if (*(char *)(DAT_0073b050 + i) == '\0') goto LAB_004b316c;
  }
  i = 0;
  if (0 < DAT_0073b048) {
    do {
      if (*(char *)(DAT_0073b050 + i) == '\0') goto LAB_004b316c;
      i = i + 1;
    } while (i < DAT_0073b048);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,&DAT_0073b054,DAT_0073b044,
               &DAT_0073b06d);
  i = -1;
LAB_004b314a:
  FUN_004b31a0(param_1);
  return i;
LAB_004b316c:
  *(undefined1 *)(DAT_0073b050 + i) = 1;
  DAT_0073b048 = i;
  goto LAB_004b314a;
}


/* ==== 004b31a0 FUN_004b31a0 ==== */

void FUN_004b31a0(uint param_1)

{
  uint uVar1;
  int in_ECX;
  int j;
  int i;
  undefined2 *puVar2;
  undefined2 local_4 [2];
  
  uVar1 = param_1;
  i = in_ECX + 8;
  j = 4;
  do {
    FUN_00558b35(i + -8,4,1,uVar1);
    FUN_00558b35(i + -4,4,1,uVar1);
    FUN_00558b35(i,4,1,uVar1);
    FUN_00558b35(i + 0x10,4,1,uVar1);
    FUN_00558b35(i + 0x14,4,1,uVar1);
    if (DAT_00715f54 == -1) {
      FUN_00558b35(&param_1,4,1,uVar1);
      *(uint *)(i + 8) =
           (uint)CONCAT11((char)param_1,(char)(param_1 >> 8)) << 8 | param_1 >> 0x10 & 0xff;
    }
    i = i + 0x20;
    j = j + -1;
  } while (j != 0);
  i = 2;
  puVar2 = (undefined2 *)(in_ECX + 0x80);
  do {
    j = 3;
    do {
      FUN_00558b35(local_4,4,1,uVar1);
      *puVar2 = local_4[0];
      puVar2 = puVar2 + 1;
      j = j + -1;
    } while (j != 0);
    i = i + -1;
  } while (i != 0);
  return;
}


/* ==== 004b3290 FUN_004b3290 ==== */

void FUN_004b3290(uint size)

{
  uint *operator_new_result;
  void *operator_new_result_2;
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f59b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (in_ECX[3] != 0) {
    ExceptionList = &pvStack_c;
    if (in_ECX[3] == 1) {
      ExceptionList = &pvStack_c;
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,
                   in_ECX[1]);
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_005586c5(iVar1,0x8c,*(undefined4 *)(iVar1 + -4),FUN_0051ed40);
        FUN_0054b339(iVar1 + -4);
      }
    }
    if (in_ECX[3] != 0) {
      FUN_0054b339(in_ECX[4]);
      in_ECX[3] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,(int)in_ECX + 0x2d,in_ECX + 5,
                 size);
  }
  operator_new_result = operator_new(size * 0x8c + 4);
  uStack_4 = 0;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0x8c,size,&LAB_004b3180,FUN_0051ed40);
  }
  uStack_4 = 0xffffffff;
  *in_ECX = (int)puVar3;
  in_ECX[1] = size;
  in_ECX[2] = 0;
  operator_new_result_2 = operator_new(size);
  in_ECX[4] = (int)operator_new_result_2;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)in_ECX + 0x2d,in_ECX + 5,in_ECX[1]);
  in_ECX[3] = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + in_ECX[4]) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004b35f0 FUN_004b35f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b35f0(char *param_1)

{
  char *pcVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  FILE *file;
  int j;
  undefined4 *puVar5;
  float10 fVar6;
  int i;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
  pcVar1 = param_1;
  file = (FILE *)FUN_004c62c0(param_1);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____File_open_failed_for_fi_005b00b4,
                 s_C__Work_A2IV_Engine_prog_rd_rail_005b0e34,0x42,pcVar1);
  }
  FUN_00558b35(&param_1,4,1,file);
  FUN_004b3850((uint)param_1);
  i = 0;
  if ((int)param_1 < 1) {
LAB_004b380a:
    FUN_004c6430(file);
    return;
  }
LAB_004b3654:
  FUN_00558b35(&uStack_24,4,1,file);
  FUN_00558b35(&uStack_20,4,1,file);
  FUN_00558b35(&uStack_1c,4,1,file);
  FUN_00558b35(&fStack_30,4,1,file);
  FUN_00558b35(&uStack_2c,4,1,file);
  FUN_00558b35(&fStack_28,4,1,file);
  fVar4 = fStack_28;
  uVar3 = uStack_2c;
  fVar2 = fStack_30;
  uStack_18 = uStack_24;
  uStack_14 = uStack_20;
  uStack_10 = uStack_1c;
  j = DAT_0073b090;
  if (DAT_0073b094 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,&DAT_0073b09c,DAT_0073b08c,
                 &DAT_0073b0b5);
    j = DAT_0073b090;
  }
  for (; j < DAT_0073b08c; j = j + 1) {
    if (*(char *)(DAT_0073b098 + j) == '\0') goto LAB_004b3819;
  }
  j = 0;
  if (0 < DAT_0073b090) {
    do {
      if (*(char *)(DAT_0073b098 + j) == '\0') goto LAB_004b3819;
      j = j + 1;
    } while (j < DAT_0073b090);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,&DAT_0073b09c,DAT_0073b08c,
               &DAT_0073b0b5);
  j = -1;
  goto LAB_004b3771;
LAB_004b3819:
  *(undefined1 *)(DAT_0073b098 + j) = 1;
  DAT_0073b090 = j;
LAB_004b3771:
  puVar5 = (undefined4 *)(j * 0x60 + DAT_0073b088);
  *puVar5 = uStack_18;
  puVar5[1] = uStack_14;
  puVar5[2] = uStack_10;
  puVar5[3] = fVar2;
  puVar5[4] = uVar3;
  puVar5[5] = fVar4;
  puVar5[0x17] = (float)SQRT((float10)fVar2 * (float10)fVar2 + (float10)fVar4 * (float10)fVar4);
  fVar6 = SQRT((float10)fVar2 * (float10)fVar2 + (float10)fVar4 * (float10)fVar4);
  fStack_c = (float)((float10)fVar2 / fVar6);
  fVar6 = (float10)fpatan((float10)fVar4 / fVar6,(float10)fStack_c);
  puVar5[6] = (float)(((fVar6 - (float10)3.1415927 * (float10)0.5) * (float10)_DAT_005b23b8) /
                     (float10)6.2831855);
  i = i + 1;
  if ((int)param_1 <= i) goto LAB_004b380a;
  goto LAB_004b3654;
}


