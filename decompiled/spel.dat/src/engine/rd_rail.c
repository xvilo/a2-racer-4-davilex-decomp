/* spel.dat — engine/rd_rail.cpp: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b2ea0 FUN_004b2ea0 ==== */

void __thiscall FUN_004b2ea0(void *this)

{
  undefined4 *puVar1;
  int i;
  
  puVar1 = (undefined4 *)((int)this + 4);
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
  FUN_004b3290(&DAT_0073b040,size);
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
  FUN_004b31a0(DAT_0073b040 + i * 0x8c,param_1);
  return i;
LAB_004b316c:
  *(undefined1 *)(DAT_0073b050 + i) = 1;
  DAT_0073b048 = i;
  goto LAB_004b314a;
}


/* ==== 004b31a0 FUN_004b31a0 ==== */

void __thiscall FUN_004b31a0(void *this,uint param_2)

{
  uint uVar1;
  int j;
  int i;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 local_4 [2];
  
  uVar1 = param_2;
  i = (int)this + 8;
  j = 4;
  do {
    uVar5 = 1;
    iVar3 = i + -8;
    uVar4 = 4;
    uVar6 = uVar1;
    FUN_00558b35();
    FUN_00558b35(i + -4,i + -4,4,1,uVar1,iVar3,uVar4,uVar5,uVar6);
    FUN_00558b35();
    FUN_00558b35();
    FUN_00558b35();
    if (DAT_00715f54 == -1) {
      FUN_00558b35(&param_2,&param_2,4,1,uVar1);
      *(uint *)(i + 8) =
           (uint)CONCAT11((char)param_2,(char)(param_2 >> 8)) << 8 | param_2 >> 0x10 & 0xff;
    }
    i = i + 0x20;
    j = j + -1;
  } while (j != 0);
  i = 2;
  puVar2 = (undefined2 *)((int)this + 0x80);
  do {
    j = 3;
    do {
      FUN_00558b35(local_4,local_4,4,1,uVar1);
      *puVar2 = local_4[0];
      puVar2 = puVar2 + 1;
      j = j + -1;
    } while (j != 0);
    i = i + -1;
  } while (i != 0);
  return;
}


/* ==== 004b3290 FUN_004b3290 ==== */

void __thiscall FUN_004b3290(void *this,uint size)

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
  puStack_8 = &LAB_0056f59b;
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
        FUN_005586c5(iVar1,0x8c,*(undefined4 *)(iVar1 + -4),FUN_0051ed40);
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
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,(int)this + 0x2d,(int)this + 0x14
                 ,size);
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


/* ==== 004b35f0 FUN_004b35f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b35f0(char *param_1)

{
  float fVar1;
  FILE *file;
  int j;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FILE *pFVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FILE *pFVar10;
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
  
  file = (FILE *)FUN_004c62c0(param_1);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____File_open_failed_for_fi_005b00b4,
                 s_C__Work_A2IV_Engine_prog_rd_rail_005b0e34,0x42,param_1);
  }
  FUN_00558b35();
  FUN_004b3850(&DAT_0073b088,(uint)param_1);
  i = 0;
  if ((int)param_1 < 1) {
LAB_004b380a:
    FUN_004c6430(file);
    return;
  }
LAB_004b3654:
  uVar9 = 1;
  puVar2 = &uStack_24;
  uVar8 = 4;
  pFVar10 = file;
  FUN_00558b35();
  uVar6 = 1;
  puVar4 = &uStack_20;
  uVar5 = 4;
  pFVar7 = file;
  FUN_00558b35();
  FUN_00558b35(&uStack_1c,&uStack_1c,4,1,file,puVar4,uVar5,uVar6,pFVar7,puVar2,uVar8,uVar9,pFVar10);
  FUN_00558b35();
  puVar2 = &uStack_2c;
  uVar6 = 1;
  uVar5 = 4;
  pFVar7 = file;
  FUN_00558b35();
  FUN_00558b35(&fStack_28,&fStack_28,4,1,file,puVar2,uVar5,uVar6,pFVar7);
  fVar1 = fStack_28;
  uVar5 = uStack_2c;
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
  puVar2 = (undefined4 *)(j * 0x60 + DAT_0073b088);
  *puVar2 = uStack_18;
  puVar2[1] = uStack_14;
  puVar2[2] = uStack_10;
  puVar2[3] = fStack_30;
  puVar2[4] = uVar5;
  puVar2[5] = fVar1;
  puVar2[0x17] = (float)SQRT((float10)fStack_30 * (float10)fStack_30 +
                             (float10)fVar1 * (float10)fVar1);
  fVar3 = SQRT((float10)fStack_30 * (float10)fStack_30 + (float10)fVar1 * (float10)fVar1);
  fStack_c = (float)((float10)fStack_30 / fVar3);
  fVar3 = (float10)fpatan((float10)fVar1 / fVar3,(float10)fStack_c);
  puVar2[6] = (float)(((fVar3 - (float10)3.1415927 * (float10)0.5) * (float10)_DAT_005b23b8) /
                     (float10)6.2831855);
  i = i + 1;
  if ((int)param_1 <= i) goto LAB_004b380a;
  goto LAB_004b3654;
}


