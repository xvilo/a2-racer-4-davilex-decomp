/* spel.dat — game/script.cpp: 64 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004739b0 FUN_004739b0 ==== */

void __thiscall FUN_004739b0(void *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)((int)this + 8);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_0054b339(piVar3);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
    piVar3 = piVar2;
  }
  return;
}


/* ==== 00473a00 FUN_00473a00 ==== */

void FUN_00473a00(void)

{
  FUN_00475840(&DAT_00712678);
  return;
}


/* ==== 00473a10 FUN_00473a10 ==== */

void FUN_00473a10(void)

{
  FUN_005584e0(&LAB_00473a20);
  return;
}


/* ==== 00473a30 FUN_00473a30 ==== */

void __thiscall FUN_00473a30(undefined4 param_1,undefined4 *param_2,float *param_3)

{
  *(double *)(param_2 + 4) = (double)*param_3;
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 1;
  return;
}


/* ==== 00473a60 FUN_00473a60 ==== */

void __thiscall FUN_00473a60(undefined4 param_1,undefined4 *param_2,int param_3)

{
  *(double *)(param_2 + 4) = (double)*(float *)(param_3 + 4);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 1;
  return;
}


/* ==== 00473a90 FUN_00473a90 ==== */

void __thiscall FUN_00473a90(undefined4 param_1,undefined4 *param_2,int param_3)

{
  *(double *)(param_2 + 4) = (double)*(float *)(param_3 + 8);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 1;
  return;
}


/* ==== 00473b50 FUN_00473b50 ==== */

void __thiscall FUN_00473b50(undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_3 + 2);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 2;
  param_2[4] = (uint)bVar1;
  return;
}


/* ==== 00473ba0 FUN_00473ba0 ==== */

void __thiscall FUN_00473ba0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_3 + 1);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 2;
  param_2[4] = (uint)bVar1;
  return;
}


/* ==== 00473bf0 FUN_00473bf0 ==== */

void __thiscall FUN_00473bf0(undefined4 param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 2;
  param_2[4] = uVar1 & 0xff;
  return;
}


/* ==== 00473c40 FUN_00473c40 ==== */

void __thiscall FUN_00473c40(undefined4 param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 2;
  param_2[4] = uVar1 >> 0x18;
  return;
}


/* ==== 00473d70 FUN_00473d70 ==== */

void __thiscall FUN_00473d70(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00715e50;
  iVar1 = *param_3;
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 4;
  param_2[4] = iVar1 * 0xf0 + 0x4c + iVar2;
  return;
}


/* ==== 00473ea0 FUN_00473ea0 ==== */

void __thiscall FUN_00473ea0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)
           (DAT_0073b0d0 + *(int *)(*param_3 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0xa5);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 2;
  param_2[4] = uVar1;
  return;
}


/* ==== 00473f50 FUN_00473f50 ==== */

void __thiscall FUN_00473f50(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = DAT_0073b0d0 + *(int *)(*param_3 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 4;
  param_2[4] = iVar1 + 0x80;
  return;
}


/* ==== 00474040 FUN_00474040 ==== */

void __thiscall FUN_00474040(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00715e50;
  iVar1 = *param_3;
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 4;
  param_2[4] = iVar1 * 0xf0 + 200 + iVar2;
  return;
}


/* ==== 004740c0 FUN_004740c0 ==== */

void __thiscall FUN_004740c0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  *(double *)(param_2 + 4) = (double)*(float *)(*param_3 * 0xf0 + 0xb0 + DAT_00715e50);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 1;
  return;
}


/* ==== 00474130 FUN_00474130 ==== */

void __thiscall FUN_00474130(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  *(double *)(param_2 + 4) = (double)*(float *)(*param_3 * 0xf0 + 0x58 + DAT_00715e50);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 1;
  return;
}


/* ==== 00474190 FUN_00474190 ==== */

void __thiscall FUN_00474190(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  *(double *)(param_2 + 4) = (double)*(float *)(*param_3 * 0xf0 + 0xb8 + DAT_00715e50);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 1;
  return;
}


/* ==== 00474200 FUN_00474200 ==== */

void __thiscall FUN_00474200(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_3 * 0xf0 + 0x54 + DAT_00715e50);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 2;
  param_2[4] = uVar1;
  return;
}


/* ==== 00474270 FUN_00474270 ==== */

void FUN_00474270(undefined4 *param_1,undefined4 param_2,void *this_val)

{
  double dVar1;
  int iVar2;
  undefined1 local_3c [24];
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b460;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00479a80(this_val,local_24,1);
  dVar1 = *(double *)(iVar2 + 0x10);
  local_4 = 0;
  iVar2 = FUN_00479a80(this_val,local_3c,0);
  local_4._0_1_ = 1;
  FUN_00451760((float)*(double *)(iVar2 + 0x10),(float)dVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004cf650(local_3c);
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00474320 FUN_00474320 ==== */

void FUN_00474320(undefined4 *param_1,undefined4 param_2,void *this_val)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b472;
  local_c = ExceptionList;
  uVar2 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00479a80(this_val,local_24,0);
  local_4 = 0;
  FUN_00451640((float)*(double *)(iVar1 + 0x10),uVar2);
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004743a0 FUN_004743a0 ==== */

void FUN_004743a0(undefined4 *param_1,undefined4 param_2,void *this_val)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b484;
  local_c = ExceptionList;
  uVar2 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00479a80(this_val,local_24,0);
  local_4 = 0;
  FUN_004516d0((float)*(double *)(iVar1 + 0x10),uVar2);
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00474420 FUN_00474420 ==== */

void __thiscall FUN_00474420(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 4;
  param_2[4] = &DAT_006fba58;
  return;
}


/* ==== 00474500 FUN_00474500 ==== */

void FUN_00474500(undefined4 *param_1,void *this_val)

{
  char cVar1;
  void *this;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b49e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00479a80(this_val,local_24,0);
  local_4 = 0;
  iVar2 = FUN_00479930(this,local_34);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_00450950(puVar3,0);
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_30 + -1));
    }
    else {
      *(char *)(local_30 + -1) = cVar1 + -1;
    }
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00474690 FUN_00474690 ==== */

void FUN_00474690(undefined4 *param_1,int *param_2,void *this_val)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int j;
  int i;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 auStack_11c [16];
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined4 local_64 [12];
  float local_34;
  float local_30;
  float local_2c;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b4b0;
  local_c = ExceptionList;
  i = *param_2;
  local_68 = 0;
  local_8c = 0.0;
  local_88 = 0.0;
  local_84 = 0.0;
  local_cc = 0x4746ed;
  ExceptionList = &local_c;
  iVar7 = FUN_00479a80(this_val,&local_a4,0);
  iVar7 = *(int *)(iVar7 + 0x10);
  FUN_004cf650(&local_a4);
  local_cc = 0x474707;
  j = FUN_00479a80(this_val,&local_a4,1);
  dVar1 = *(double *)(j + 0x10);
  FUN_004cf650(&local_a4);
  local_cc = 0x474725;
  j = FUN_00479a80(this_val,&local_a4,2);
  dVar2 = *(double *)(j + 0x10);
  FUN_004cf650(&local_a4);
  local_cc = 0x474743;
  j = FUN_00479a80(this_val,&local_a4,3);
  dVar3 = *(double *)(j + 0x10);
  FUN_004cf650(&local_a4);
  local_cc = 0x474761;
  j = FUN_00479a80(this_val,local_80,4);
  local_a4 = (float)*(double *)(j + 0x10);
  FUN_004cf650(local_80);
  local_cc = 0x47477f;
  j = FUN_00479a80(this_val,local_80,5);
  local_a0 = (float)*(double *)(j + 0x10);
  FUN_004cf650(local_80);
  local_cc = 0x47479d;
  j = FUN_00479a80(this_val,local_80,6);
  local_9c = (float)*(double *)(j + 0x10);
  FUN_004cf650(local_80);
  iVar8 = DAT_0073b0d0 + *(int *)(i * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  puVar9 = (undefined4 *)(iVar8 + 0x10);
  puVar10 = local_64;
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if (iVar7 == 1) {
    local_84 = (float)dVar3 + *(float *)(iVar8 + 0x58);
    local_88 = (float)dVar2 + *(float *)(iVar8 + 0x54);
    local_8c = (float)dVar1 + *(float *)(iVar8 + 0x50);
    local_a0 = -local_a0;
  }
  else {
    local_34 = local_34 + (float)dVar1;
    local_30 = local_30 + (float)dVar2;
    local_2c = local_2c + (float)dVar3;
  }
  i = DAT_0073b0d0 + *(int *)(i * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  uVar4 = *(undefined4 *)(i + 0x74);
  uVar5 = *(undefined4 *)(i + 0x78);
  local_cc = 0x47489b;
  i = FUN_00479a80(this_val,local_24,0);
  uVar6 = *(undefined4 *)(i + 0x10);
  local_4 = 0;
  local_dc = local_a4;
  local_d8 = local_a0;
  local_d4 = local_9c;
  puVar9 = local_64;
  puVar10 = auStack_11c;
  local_d0 = uVar4;
  local_cc = uVar5;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_0045d170(uVar6);
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004750c0 FUN_004750c0 ==== */

void FUN_004750c0(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  int i;
  float in_stack_00000024;
  undefined1 local_200 [512];
  
  FUN_004a02e0(local_200);
  uVar1 = 0;
  i = 3;
  param_1 = param_1 * 0xf0;
  if (*(int *)(param_1 + 0x18 + DAT_00715e50) != 1) {
    FUN_004c4150(s___s___d_Can_not_add_constraint_t_005a8e68,
                 s_C__Work_A2IV_Game_prog_script_cp_005a8e44,0x187);
  }
  if (in_stack_00000024 != 0.0) {
    FUN_004a0430(local_200,in_stack_00000024);
  }
  if (param_2 == 1) {
    uVar1 = 3;
  }
  if (param_3 != 0.0) {
    i = 2;
  }
  if (param_4 != 0.0) {
    i = i + -1;
  }
  if (param_5 != 0.0) {
    i = i + -1;
  }
  FUN_004a0390(local_200,*(undefined4 *)(param_1 + 0x10 + DAT_00715e50),&stack0x00000018,&param_3,
               uVar1,i);
  (**(code **)(**(int **)(param_1 + 0x10 + DAT_00715e50) + 8))(local_200);
  return;
}


/* ==== 00475690 FUN_00475690 ==== */

void FUN_00475690(undefined4 *param_1,int *param_2,void *this_val)

{
  char cVar1;
  void *this;
  int iVar2;
  char *str1;
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b4ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00479a80(this_val,local_24,0);
  local_4 = 0;
  iVar2 = FUN_00479930(this,local_34);
  str1 = *(char **)(iVar2 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  FUN_00450b00(*param_2,str1);
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_30 + -1));
    }
    else {
      *(char *)(local_30 + -1) = cVar1 + -1;
    }
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004757c0 FUN_004757c0 ==== */

void __thiscall FUN_004757c0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  *(undefined4 *)(*param_3 * 0xf0 + 0x30 + DAT_00715e50) = 0xffffffff;
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 0;
  return;
}


/* ==== 00475810 FUN_00475810 ==== */

void FUN_00475810(void)

{
  FUN_0047a070(&DAT_00712680);
  return;
}


/* ==== 00475820 FUN_00475820 ==== */

void FUN_00475820(void)

{
  FUN_005584e0(&LAB_00475830);
  return;
}


/* ==== 00475840 FUN_00475840 ==== */

void * __thiscall FUN_00475840(void *this)

{
  FUN_004cf710();
  return this;
}


/* ==== 00475860 FUN_00475860 ==== */

void __thiscall FUN_00475860(void *this,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *str;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_2ac [280];
  undefined1 local_194 [280];
  undefined1 local_7c [88];
  undefined1 local_24 [4];
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0056b50c;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd48;
  local_8 = 0;
  str = param_3;
  if (param_3 == (char *)0x0) {
    str = "";
  }
  ExceptionList = &local_10;
  str = _strrchr(str,0x2e);
  if (str != (char *)0x0) {
    pcVar4 = param_3;
    if (param_3 == (char *)0x0) {
      pcVar4 = "";
    }
    puVar2 = (undefined1 *)FUN_00479520(&param_2,local_7c,0,(int)str - (int)pcVar4);
    local_8._0_1_ = 1;
    FUN_004796b0(local_24,puVar2,(char *)&PTR_DAT_005a8ea8);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_004028f0(local_7c,1);
    str = param_3;
    if (param_3 == (char *)0x0) {
      str = "";
    }
    iVar3 = FUN_005590ff(str,local_194);
    if (iVar3 == -1) {
      str = param_3;
      if (param_3 == (char *)0x0) {
        str = "";
      }
      FUN_004c4150(s_Scriptfile_not_found__s_005a8eac,str);
    }
    FUN_005591c9(iVar3);
    puVar2 = local_20;
    if (local_20 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    iVar3 = FUN_005590ff(puVar2,local_2ac);
    local_8._0_1_ = 4;
    if (iVar3 != -1) {
      FUN_004cf720(this,&param_2,&DAT_00712680);
      if (local_20 != (undefined1 *)0x0) {
        cVar1 = local_20[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_20 + -1);
        }
        else {
          local_20[-1] = cVar1 + -1;
        }
      }
      local_20 = (undefined1 *)0x0;
      local_1c = 0;
      local_18 = 0;
      if (param_3 != (char *)0x0) {
        cVar1 = param_3[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          param_3[-1] = cVar1 + -1;
          ExceptionList = local_10;
          return;
        }
        FUN_0054b339(param_3 + -1);
      }
      ExceptionList = local_10;
      return;
    }
    FUN_005591c9(0xffffffff);
    FUN_004cf720(this,&param_2,&DAT_00712680);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(local_24,1);
  }
  local_8 = 0xffffffff;
  FUN_004028f0(&param_2,1);
  ExceptionList = local_10;
  return;
}


/* ==== 00475b50 FUN_00475b50 ==== */

void __thiscall FUN_00475b50(void *this)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 *local_78;
  undefined1 *local_74;
  code *local_70;
  code *local_6c;
  undefined1 local_55;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b7ce;
  local_c = ExceptionList;
  local_6c = (code *)0x0;
  local_70 = (code *)0x475b83;
  ExceptionList = &local_c;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_x_005a8f48;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_x_005a8f48;
  local_74 = (undefined1 *)0x475ba3;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0;
  local_70 = (code *)0x475bbe;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_D3DVECTOR_005a8f4c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_D3DVECTOR_005a8f4c;
  local_74 = (undefined1 *)0x475bdb;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473ac0;
  local_74 = local_3c;
  local_70 = FUN_00473a30;
  local_78 = local_2c;
  local_4._0_1_ = 1;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  local_70 = (code *)0x475c0e;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x475c1d;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x475c30;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_y_005a8f58;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_y_005a8f58;
  local_74 = (undefined1 *)0x475c4d;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 2;
  local_70 = (code *)0x475c69;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_D3DVECTOR_005a8f5c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_D3DVECTOR_005a8f5c;
  local_74 = (undefined1 *)0x475c86;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473ad0;
  local_74 = local_3c;
  local_70 = FUN_00473a60;
  local_78 = local_2c;
  local_4._0_1_ = 3;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,2);
  local_70 = (code *)0x475cb8;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x475cc7;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x475cda;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_z_005a8f68;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_z_005a8f68;
  local_74 = (undefined1 *)0x475cf7;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 4;
  local_70 = (code *)0x475d13;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_D3DVECTOR_005a8f6c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_D3DVECTOR_005a8f6c;
  local_74 = (undefined1 *)0x475d30;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473ae0;
  local_74 = local_3c;
  local_70 = FUN_00473a90;
  local_78 = local_2c;
  local_4._0_1_ = 5;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,4);
  local_70 = (code *)0x475d62;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x475d71;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x475d84;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_Set_005a8f78;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_Set_005a8f78;
  local_74 = (undefined1 *)0x475da1;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 6;
  local_70 = (code *)0x475dbd;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_D3DVECTOR_005a8f7c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_D3DVECTOR_005a8f7c;
  local_74 = (undefined1 *)0x475dda;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00473af0;
  local_74 = local_2c;
  local_4._0_1_ = 7;
  local_78 = (undefined1 *)0x475df8;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,6);
  local_70 = (code *)0x475e07;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x475e16;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x475e29;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_r_005a8f88;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_r_005a8f88;
  local_74 = (undefined1 *)0x475e46;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 8;
  local_70 = (code *)0x475e62;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_D3DCOLOR_005a8f8c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_D3DCOLOR_005a8f8c;
  local_74 = (undefined1 *)0x475e7f;
  FUN_00402940(local_2c);
  local_4._0_1_ = 9;
  local_6c = (code *)&LAB_00473b80;
  local_74 = local_3c;
  local_70 = FUN_00473b50;
  local_78 = local_2c;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,8);
  local_70 = (code *)0x475eb1;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x475ec0;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x475ed3;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_g_005a8f98;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_g_005a8f98;
  local_74 = (undefined1 *)0x475ef0;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 10;
  local_70 = (code *)0x475f0c;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_D3DCOLOR_005a8f9c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_D3DCOLOR_005a8f9c;
  local_74 = (undefined1 *)0x475f29;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473bd0;
  local_74 = local_3c;
  local_70 = FUN_00473ba0;
  local_78 = local_2c;
  local_4._0_1_ = 0xb;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,10);
  local_70 = (code *)0x475f5b;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x475f6a;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x475f7d;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_b_005a8fa8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_b_005a8fa8;
  local_74 = (undefined1 *)0x475f9a;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0xc;
  local_70 = (code *)0x475fb6;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_D3DCOLOR_005a8fac;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_D3DCOLOR_005a8fac;
  local_74 = (undefined1 *)0x475fd3;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473c20;
  local_74 = local_3c;
  local_70 = FUN_00473bf0;
  local_78 = local_2c;
  local_4._0_1_ = 0xd;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  local_70 = (code *)0x476005;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476014;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476027;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_a_005a8fb8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_a_005a8fb8;
  local_74 = (undefined1 *)0x476044;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0xe;
  local_70 = (code *)0x476060;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_D3DCOLOR_005a8fbc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_D3DCOLOR_005a8fbc;
  local_74 = (undefined1 *)0x47607d;
  FUN_00402940(local_2c);
  local_6c = (code *)&DAT_00473c70;
  local_74 = local_3c;
  local_70 = FUN_00473c40;
  local_78 = local_2c;
  local_4._0_1_ = 0xf;
  FUN_004d1c10(&DAT_00712680);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  local_6c = (code *)0x1;
  local_70 = (code *)0x4760af;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4760be;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x4760d1;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_damage_005a8fc8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_damage_005a8fc8;
  local_74 = (undefined1 *)0x4760ee;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x10;
  local_70 = (code *)0x47610a;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CPlayer_005a8fd0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CPlayer_005a8fd0;
  local_74 = (undefined1 *)0x476127;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473cc0;
  local_74 = local_3c;
  local_70 = (code *)&LAB_00473c80;
  local_78 = local_2c;
  local_4._0_1_ = 0x11;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  local_70 = (code *)0x476159;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476168;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x47617b;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_turbo_005a8fd8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_turbo_005a8fd8;
  local_74 = (undefined1 *)0x476198;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x12;
  local_70 = (code *)0x4761b4;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CPlayer_005a8fe0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CPlayer_005a8fe0;
  local_74 = (undefined1 *)0x4761d1;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473d20;
  local_74 = local_3c;
  local_70 = (code *)&LAB_00473cf0;
  local_78 = local_2c;
  local_4._0_1_ = 0x13;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x12);
  local_70 = (code *)0x476203;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476212;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476225;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_money_005a8fe8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_money_005a8fe8;
  local_74 = (undefined1 *)0x476242;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x14;
  local_70 = (code *)0x47625e;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CPlayer_005a8ff0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CPlayer_005a8ff0;
  local_74 = (undefined1 *)0x47627b;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473d60;
  local_74 = local_3c;
  local_70 = (code *)&LAB_00473d30;
  local_78 = local_2c;
  local_4._0_1_ = 0x15;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x14);
  local_70 = (code *)0x4762ad;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4762bc;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x4762cf;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_MakeInvulnerable_005a8ff8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_MakeInvulnerable_005a8ff8;
  local_74 = (undefined1 *)0x4762ec;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x16;
  local_70 = (code *)0x476308;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CPlayer_005a900c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CPlayer_005a900c;
  local_74 = (undefined1 *)0x476325;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = FUN_00474320;
  local_74 = local_2c;
  local_4._0_1_ = 0x17;
  local_78 = (undefined1 *)0x476343;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x16);
  local_70 = (code *)0x476352;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476361;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476374;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_FreezeRacers_005a9014;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_FreezeRacers_005a9014;
  local_74 = (undefined1 *)0x476391;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x18;
  local_70 = (code *)0x4763ad;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CPlayer_005a9024;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CPlayer_005a9024;
  local_74 = (undefined1 *)0x4763ca;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = FUN_004743a0;
  local_74 = local_2c;
  local_4._0_1_ = 0x19;
  local_78 = (undefined1 *)0x4763e8;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x18);
  local_70 = (code *)0x4763f7;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476406;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476419;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_ChangeFOV_005a902c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_ChangeFOV_005a902c;
  local_74 = (undefined1 *)0x476436;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x1a;
  local_70 = (code *)0x476452;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CPlayer_005a9038;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CPlayer_005a9038;
  local_74 = (undefined1 *)0x47646f;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00474940;
  local_74 = local_2c;
  local_4._0_1_ = 0x1b;
  local_78 = (undefined1 *)0x47648d;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x1a);
  local_70 = (code *)0x47649c;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4764ab;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x4764be;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_FastForward_005a9040;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_FastForward_005a9040;
  local_74 = (undefined1 *)0x4764db;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x1c;
  local_70 = (code *)0x4764f7;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CPlayer_005a904c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CPlayer_005a904c;
  local_74 = (undefined1 *)0x476514;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = FUN_00474270;
  local_74 = local_2c;
  local_4._0_1_ = 0x1d;
  local_78 = (undefined1 *)0x476532;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x1c);
  local_70 = (code *)0x476541;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476550;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476563;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_scale_005a9054;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_scale_005a9054;
  local_74 = (undefined1 *)0x476580;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x1e;
  local_70 = (code *)0x47659c;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a905c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a905c;
  local_74 = (undefined1 *)0x4765b9;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473fb0;
  local_74 = local_3c;
  local_70 = FUN_00473f50;
  local_78 = local_2c;
  local_4._0_1_ = 0x1f;
  FUN_004d1c10(&DAT_00712680);
  local_4 = CONCAT31(local_4._1_3_,0x1e);
  local_6c = (code *)0x1;
  local_70 = (code *)0x4765eb;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4765fa;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x47660d;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_angle_005a9064;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_angle_005a9064;
  local_74 = (undefined1 *)0x47662a;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x20;
  local_70 = (code *)0x476646;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a906c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a906c;
  local_74 = (undefined1 *)0x476663;
  FUN_00402940(local_2c);
  local_6c = (code *)&DAT_00474030;
  local_74 = local_3c;
  local_70 = (code *)&LAB_00474000;
  local_78 = local_2c;
  local_4._0_1_ = 0x21;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x20);
  local_70 = (code *)0x476695;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4766a4;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x4766b7;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_anglespeed_005a9074;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_anglespeed_005a9074;
  local_74 = (undefined1 *)0x4766d4;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x22;
  local_70 = (code *)0x4766f0;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a9080;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a9080;
  local_74 = (undefined1 *)0x47670d;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00474080;
  local_74 = local_3c;
  local_70 = FUN_00474040;
  local_78 = local_2c;
  local_4._0_1_ = 0x23;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x22);
  local_70 = (code *)0x47673f;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x47674e;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476761;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_respawntime_005a9088;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_respawntime_005a9088;
  local_74 = (undefined1 *)0x47677e;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x24;
  local_70 = (code *)0x47679a;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a9094;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a9094;
  local_74 = (undefined1 *)0x4767b7;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00474100;
  local_74 = local_3c;
  local_70 = FUN_004740c0;
  local_78 = local_2c;
  local_4._0_1_ = 0x25;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x24);
  local_70 = (code *)0x4767e9;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4767f8;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x47680b;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_fadeouttime_005a909c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_fadeouttime_005a909c;
  local_74 = (undefined1 *)0x476828;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x26;
  local_70 = (code *)0x476844;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a90a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a90a8;
  local_74 = (undefined1 *)0x476861;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00474170;
  local_74 = local_3c;
  local_70 = FUN_00474130;
  local_78 = local_2c;
  local_4._0_1_ = 0x27;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x26);
  local_70 = (code *)0x476893;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4768a2;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x4768b5;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_effectduration_005a90b0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_effectduration_005a90b0;
  local_74 = (undefined1 *)0x4768d2;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x28;
  local_70 = (code *)0x4768ee;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a90c0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a90c0;
  local_74 = (undefined1 *)0x47690b;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_004741d0;
  local_74 = local_3c;
  local_70 = FUN_00474190;
  local_78 = local_2c;
  local_4._0_1_ = 0x29;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x28);
  local_70 = (code *)0x47693d;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x47694c;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x47695f;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_active_005a90c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_active_005a90c8;
  local_74 = (undefined1 *)0x47697c;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x2a;
  local_70 = (code *)0x476998;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a90d0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a90d0;
  local_74 = (undefined1 *)0x4769b5;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00474240;
  local_74 = local_3c;
  local_70 = FUN_00474200;
  local_78 = local_2c;
  local_4._0_1_ = 0x2b;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x2a);
  local_70 = (code *)0x4769e7;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4769f6;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476a09;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_color_005a90d8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_color_005a90d8;
  local_74 = (undefined1 *)0x476a26;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x2c;
  local_70 = (code *)0x476a42;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a90e0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a90e0;
  local_74 = (undefined1 *)0x476a5f;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473db0;
  local_74 = local_3c;
  local_70 = FUN_00473d70;
  local_78 = local_2c;
  local_4._0_1_ = 0x2d;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x2c);
  local_70 = (code *)0x476a91;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476aa0;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476ab3;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_setcolor_005a90e8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_setcolor_005a90e8;
  local_74 = (undefined1 *)0x476ad0;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x2e;
  local_70 = (code *)0x476aec;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a90f4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a90f4;
  local_74 = (undefined1 *)0x476b09;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00473de0;
  local_74 = local_2c;
  local_4._0_1_ = 0x2f;
  local_78 = (undefined1 *)0x476b27;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x2e);
  local_70 = (code *)0x476b36;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476b45;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476b58;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_shademode_005a90fc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_shademode_005a90fc;
  local_74 = (undefined1 *)0x476b75;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x30;
  local_70 = (code *)0x476b91;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a9108;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a9108;
  local_74 = (undefined1 *)0x476bae;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473f00;
  local_74 = local_3c;
  local_70 = FUN_00473ea0;
  local_78 = local_2c;
  local_4._0_1_ = 0x31;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x30);
  local_70 = (code *)0x476be0;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476bef;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476c02;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_CreateParticles_005a9110;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CreateParticles_005a9110;
  local_74 = (undefined1 *)0x476c1f;
  FUN_00402940(local_3c);
  local_4 = 0x32;
  local_6c = (code *)0x0;
  local_70 = (code *)0x476c3b;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = &DAT_005a9120;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)&DAT_005a9120;
  local_74 = (undefined1 *)0x476c58;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = FUN_00474690;
  local_74 = local_2c;
  local_4._0_1_ = 0x33;
  local_78 = (undefined1 *)0x476c76;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x32);
  local_70 = (code *)0x476c85;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476c94;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476ca7;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_GetPlayer_005a9128;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_GetPlayer_005a9128;
  local_74 = (undefined1 *)0x476cc4;
  FUN_00402940(local_2c);
  local_70 = (code *)local_2c;
  local_6c = FUN_00474420;
  local_4 = 0x34;
  local_74 = (undefined1 *)0x476ce0;
  FUN_004d16d0(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476cef;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476d02;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_GetSin_005a9134;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_GetSin_005a9134;
  local_74 = (undefined1 *)0x476d1f;
  FUN_00402940(local_2c);
  local_70 = (code *)local_2c;
  local_6c = (code *)&LAB_00474450;
  local_4 = 0x35;
  local_74 = (undefined1 *)0x476d3b;
  FUN_004d16d0(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476d4a;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476d5d;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_PlaySample_005a913c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_PlaySample_005a913c;
  local_74 = (undefined1 *)0x476d7a;
  FUN_00402940(local_2c);
  local_70 = (code *)local_2c;
  local_6c = FUN_00474500;
  local_4 = 0x36;
  local_74 = (undefined1 *)0x476d96;
  FUN_004d16d0(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476da5;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476db8;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_PrintText_005a9148;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_PrintText_005a9148;
  local_74 = (undefined1 *)0x476dd5;
  FUN_00402940(local_2c);
  local_70 = (code *)local_2c;
  local_6c = (code *)&LAB_004745c0;
  local_4 = 0x37;
  local_74 = (undefined1 *)0x476df1;
  FUN_004d16d0(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476e00;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476e13;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_PerSecToPerFrame_005a9154;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_PerSecToPerFrame_005a9154;
  local_74 = (undefined1 *)0x476e30;
  FUN_00402940(local_2c);
  local_70 = (code *)local_2c;
  local_6c = (code *)&LAB_00474630;
  local_4 = 0x38;
  local_74 = (undefined1 *)0x476e4c;
  FUN_004d16d0(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476e5b;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476e6e;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_color_005a9168;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_color_005a9168;
  local_74 = (undefined1 *)0x476e8b;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x39;
  local_70 = (code *)0x476ea7;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a9170;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CScriptedObject_005a9170;
  local_74 = (undefined1 *)0x476ec4;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473db0;
  local_74 = local_3c;
  local_70 = FUN_00473d70;
  local_78 = local_2c;
  local_4._0_1_ = 0x3a;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x39);
  local_70 = (code *)0x476ef6;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476f05;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476f18;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_shademode_005a9180;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_shademode_005a9180;
  local_74 = (undefined1 *)0x476f35;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x3b;
  local_70 = (code *)0x476f51;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a918c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CScriptedObject_005a918c;
  local_74 = (undefined1 *)0x476f6e;
  FUN_00402940(local_2c);
  local_6c = (code *)&LAB_00473f00;
  local_74 = local_3c;
  local_70 = FUN_00473ea0;
  local_78 = local_2c;
  local_4._0_1_ = 0x3c;
  FUN_004d1c10(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x3b);
  local_70 = (code *)0x476fa0;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x476faf;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x476fc2;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_SetColor_005a919c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_SetColor_005a919c;
  local_74 = (undefined1 *)0x476fdf;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x3d;
  local_70 = (code *)0x476ffb;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a91a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CScriptedObject_005a91a8;
  local_74 = (undefined1 *)0x477018;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00473de0;
  local_74 = local_2c;
  local_4._0_1_ = 0x3e;
  local_78 = (undefined1 *)0x477036;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x3d);
  local_70 = (code *)0x477045;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477054;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477067;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_InitPhysics_005a91b8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_InitPhysics_005a91b8;
  local_74 = (undefined1 *)0x477084;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x3f;
  local_70 = (code *)0x4770a0;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a91c4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CScriptedObject_005a91c4;
  local_74 = (undefined1 *)0x4770bd;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_004749b0;
  local_74 = local_2c;
  local_4._0_1_ = 0x40;
  local_78 = (undefined1 *)0x4770db;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x3f);
  local_70 = (code *)0x4770ea;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x4770f9;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x47710c;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  pcVar2 = s_InitPhysics2_005a91d4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_InitPhysics2_005a91d4;
  local_74 = (undefined1 *)0x477129;
  FUN_00402940(local_3c);
  local_6c = (code *)0x0;
  local_4 = 0x41;
  local_70 = (code *)0x477145;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a91e4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_6c = (code *)(~i - 1);
  local_70 = (code *)s_CScriptedObject_005a91e4;
  local_74 = (undefined1 *)0x477162;
  FUN_00402940(local_2c);
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00474af0;
  local_74 = local_2c;
  local_4._0_1_ = 0x42;
  local_78 = (undefined1 *)0x477180;
  FUN_004d2290(&DAT_00712680);
  local_4 = CONCAT31(local_4._1_3_,0x41);
  local_6c = (code *)0x1;
  local_70 = (code *)0x47718f;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x47719e;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x4771b1;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_InitMultiObjectPhysics_005a91f4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4771cd;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_InitMultiObjectPhysics_005a91f4;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x4771f4;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x43;
  local_70 = (code *)0x47720f;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a920c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x47722b;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a920c;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x477252;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_70 = (code *)local_2c;
  local_6c = (code *)&DAT_00474c80;
  local_74 = local_3c;
  local_4._0_1_ = 0x44;
  local_78 = (undefined1 *)0x477270;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x43);
  local_70 = (code *)0x477280;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x47728f;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x4772a2;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_InitPiledObjectPhysics_005a921c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4772be;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_InitPiledObjectPhysics_005a921c;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x4772e5;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x45;
  local_70 = (code *)0x477300;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a9234;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x47731c;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a9234;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x477343;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_70 = (code *)local_3c;
  local_6c = (code *)&DAT_00474ea0;
  local_74 = local_2c;
  local_4._0_1_ = 0x46;
  local_78 = (undefined1 *)0x477361;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x45);
  local_70 = (code *)0x477371;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477380;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477393;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_InitSound3D_005a9244;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4773af;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_InitSound3D_005a9244;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x4773d6;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x47;
  local_70 = (code *)0x4773f1;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a9250;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x47740d;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a9250;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x477434;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_70 = (code *)local_3c;
  local_6c = FUN_00475690;
  local_74 = local_2c;
  local_4._0_1_ = 0x48;
  local_78 = (undefined1 *)0x477452;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x47);
  local_70 = (code *)0x477462;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477471;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477484;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_PlaySound3D_005a9260;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4774a0;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_PlaySound3D_005a9260;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x4774c7;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x49;
  local_70 = (code *)0x4774e2;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a926c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4774fe;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a926c;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x477525;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00475750;
  local_74 = local_2c;
  local_4._0_1_ = 0x4a;
  local_78 = (undefined1 *)0x477543;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x49);
  local_70 = (code *)0x477553;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477562;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477575;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_DeleteSound3D_005a927c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x477591;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_DeleteSound3D_005a927c;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x4775b8;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x4b;
  local_70 = (code *)0x4775d3;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a928c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4775ef;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a928c;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x477616;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_70 = (code *)local_3c;
  local_6c = FUN_004757c0;
  local_74 = local_2c;
  local_4._0_1_ = 0x4c;
  local_78 = (undefined1 *)0x477634;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x4b);
  local_70 = (code *)0x477644;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477653;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477666;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_AddConstraint_005a929c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x477682;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_AddConstraint_005a929c;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x4776a9;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x4d;
  local_70 = (code *)0x4776c4;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a92ac;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4776e0;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a92ac;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x477707;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_004751d0;
  local_74 = local_2c;
  local_4._0_1_ = 0x4e;
  local_78 = (undefined1 *)0x477725;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x4d);
  local_70 = (code *)0x477735;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477744;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477757;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_AddConstraintXAxis_005a92bc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x477773;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_AddConstraintXAxis_005a92bc;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x47779a;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x4f;
  local_70 = (code *)0x4777b5;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a92d0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4777d1;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a92d0;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x4777f8;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00475300;
  local_74 = local_2c;
  local_4._0_1_ = 0x50;
  local_78 = (undefined1 *)0x477816;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x4f);
  local_70 = (code *)0x477826;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477835;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477848;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_AddConstraintYAxis_005a92e0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x477864;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_AddConstraintYAxis_005a92e0;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x47788b;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x51;
  local_70 = (code *)0x4778a6;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a92f4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4778c2;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a92f4;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_70 = (code *)0x4778e9;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00475430;
  local_74 = local_2c;
  local_4._0_1_ = 0x52;
  local_78 = (undefined1 *)0x477907;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x51);
  local_70 = (code *)0x477917;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477926;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477939;
  FUN_004028f0(local_3c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_AddConstraintZAxis_005a9304;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x477955;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_3c);
  if (cVar1 != '\0') {
    pcVar2 = s_AddConstraintZAxis_005a9304;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_38 = local_38 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_38 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_38 = local_38 + 1;
    }
    local_70 = (code *)0x47797c;
    local_6c = (code *)i;
    FUN_004029e0(local_3c);
  }
  local_6c = (code *)0x0;
  local_4 = 0x53;
  local_70 = (code *)0x477997;
  FUN_004028f0(local_2c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a9318;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x4779b3;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_2c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a9318;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_28 = local_28 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_28 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_28 = local_28 + 1;
    }
    local_70 = (code *)0x4779da;
    local_6c = (code *)i;
    FUN_004029e0(local_2c);
  }
  local_70 = (code *)local_3c;
  local_6c = (code *)&LAB_00475560;
  local_74 = local_2c;
  local_4._0_1_ = 0x54;
  local_78 = (undefined1 *)0x4779f8;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x53);
  local_70 = (code *)0x477a08;
  FUN_004028f0(local_2c);
  local_6c = (code *)0x1;
  local_4 = 0xffffffff;
  local_70 = (code *)0x477a17;
  FUN_004028f0(local_3c);
  local_6c = (code *)0x0;
  local_70 = (code *)0x477a2a;
  FUN_004028f0(local_4c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CreateParticles_005a9328;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x477a46;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_4c);
  if (cVar1 != '\0') {
    pcVar2 = s_CreateParticles_005a9328;
    pcVar3 = local_48;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_48[i] = '\0';
    local_44 = i;
  }
  local_6c = (code *)0x0;
  local_4 = 0x55;
  local_70 = (code *)0x477a8a;
  FUN_004028f0(local_1c);
  i = 0xffffffff;
  local_6c = (code *)0x1;
  pcVar2 = s_CScriptedObject_005a9338;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_74 = (undefined1 *)0x477aa6;
  local_70 = (code *)i;
  cVar1 = FUN_00402a00(local_1c);
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a9338;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_18 = local_18 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_18 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_18 = local_18 + 1;
    }
    local_70 = (code *)0x477acd;
    local_6c = (code *)i;
    FUN_004029e0(local_1c);
  }
  local_70 = (code *)local_4c;
  local_6c = FUN_00474690;
  local_74 = local_1c;
  local_4._0_1_ = 0x56;
  local_78 = (undefined1 *)0x477aeb;
  FUN_004d2290(&DAT_00712680);
  local_6c = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,0x55);
  local_70 = (code *)0x477afb;
  FUN_004028f0(local_1c);
  local_4 = 0xffffffff;
  if (local_48 != (char *)0x0) {
    local_6c = (code *)(local_48 + -1);
    cVar1 = local_48[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      local_70 = (code *)0x477b23;
      FUN_0054b339();
    }
    else {
      *local_6c = (code)(cVar1 + -1);
    }
  }
  i = 0xffffffff;
  local_78 = (undefined1 *)CONCAT31(local_78._1_3_,local_55);
  local_74 = (undefined1 *)0x0;
  local_70 = (code *)0x0;
  local_6c = (code *)0x0;
  local_48 = (char *)0x0;
  pcVar2 = s_bonus_dso_005a9348;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_44 = 0;
  local_40 = 0;
  FUN_00402940(&local_78,s_bonus_dso_005a9348,~i - 1);
  FUN_00475860(this);
  ExceptionList = local_c;
  return;
}


/* ==== 00477b90 FUN_00477b90 ==== */

void __thiscall FUN_00477b90(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [324];
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b7f8;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnInit__s_005a9354,puVar2);
  FUN_004c3fa0(s_fire_bonus_init___s__005a9360,local_17c);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_38[0] = param_3._3_1_;
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CBonus_005a9378;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CBonus_005a9378;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(this_val,&param_2,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (cVar1 == '\0') {
    FUN_004c4150(s__s__d___CBonus_Event___s__not_fo_005a93a4,
                 s_C__Work_A2IV_Game_prog_script_cp_005a9380,0x2e7,local_17c);
  }
  local_8 = 0xffffffff;
  FUN_004c3fa0(s_Done_fire_bonus_init_005a9404);
  ExceptionList = local_10;
  return;
}


/* ==== 00477df0 FUN_00477df0 ==== */

void __thiscall FUN_00477df0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [308];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  void *this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b822;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnPickup__s_005a941c,puVar2);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_38[0] = param_3._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CBonus_005a9428;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CBonus_005a9428;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_48[0] = param_3._3_1_;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8._0_1_ = 3;
  FUN_004cfab0(this_val,&param_2,local_38,local_28,(int)local_48);
  local_8._0_1_ = 2;
  FUN_004d29b0(local_48);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  ExceptionList = local_10;
  return;
}


/* ==== 00478010 FUN_00478010 ==== */

void __thiscall FUN_00478010(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [308];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  void *this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b84c;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnFadeout__s_005a9454,puVar2);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_38[0] = param_3._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CBonus_005a9464;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CBonus_005a9464;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_48[0] = param_3._3_1_;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8._0_1_ = 3;
  FUN_004cfab0(this_val,&param_2,local_38,local_28,(int)local_48);
  local_8._0_1_ = 2;
  FUN_004d29b0(local_48);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  ExceptionList = local_10;
  return;
}


/* ==== 00478230 FUN_00478230 ==== */

void __thiscall FUN_00478230(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [308];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  void *this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b876;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnTurnoff__s_005a9490,puVar2);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_38[0] = param_3._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CBonus_005a94a0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CBonus_005a94a0;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_48[0] = param_3._3_1_;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8._0_1_ = 3;
  FUN_004cfab0(this_val,&param_2,local_38,local_28,(int)local_48);
  local_8._0_1_ = 2;
  FUN_004d29b0(local_48);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  ExceptionList = local_10;
  return;
}


/* ==== 00478450 FUN_00478450 ==== */

void __thiscall FUN_00478450(void *this,int param_1,void *this_val)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint i;
  uint j;
  char *pcVar4;
  int iVar5;
  undefined1 local_38 [16];
  undefined1 local_28 [4];
  char *local_24;
  void *this_val_2;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b898;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  ExceptionList = &local_10;
  this_val_2 = this;
  puVar1 = &stack0xffffff88;
  if (*(int *)(param_1 * 0xf0 + 0x14 + DAT_00715e50) == 0) {
    local_28[0] = param_1._3_1_;
    ExceptionList = &local_10;
    FUN_004028f0(local_28,0);
    i = 0xffffffff;
    pcVar4 = s_CBonus_005a94dc;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(local_28,i,1);
    if (cVar2 != '\0') {
      pcVar4 = s_CBonus_005a94dc;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)local_24 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        local_24 = local_24 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *local_24 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        local_24 = local_24 + 1;
      }
      FUN_004029e0(local_28,i);
    }
    local_8 = 0;
    uVar3 = FUN_004797e0(this_val,local_38,s_OnFramecall__005a94cc,(int)this_val);
    local_8._0_1_ = 1;
    iVar5 = param_1 * 0xf0 + DAT_00715e50;
    uVar3 = FUN_004cfb50(this_val_2,local_28,uVar3);
    *(undefined4 *)(iVar5 + 0x14) = uVar3;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(local_38,1);
    local_8 = 0xffffffff;
    FUN_004028f0(local_28,1);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_8 = 2;
  FUN_004cfb30(this_val_2,&param_1,*(int **)(param_1 * 0xf0 + 0x14 + DAT_00715e50));
  ExceptionList = local_10;
  return;
}


/* ==== 00478640 FUN_00478640 ==== */

void __thiscall FUN_00478640(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [324];
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b8c2;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnInit__s_005a9508,puVar2);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_38[0] = param_3._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a9514;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CScriptedObject_005a9514;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(this_val,&param_2,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (cVar1 == '\0') {
    FUN_004c4150(s__s__d___CScriptedObject_Event____005a9548,
                 s_C__Work_A2IV_Game_prog_script_cp_005a9524,0x355,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00478880 FUN_00478880 ==== */

void __thiscall FUN_00478880(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [324];
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b8ec;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnRevive__s_005a95b4,puVar2);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_38[0] = param_3._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a95c0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CScriptedObject_005a95c0;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(this_val,&param_2,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (cVar1 == '\0') {
    FUN_004c4150(s___s___d_CScriptedObject_Event____005a95f4,
                 s_C__Work_A2IV_Game_prog_script_cp_005a95d0,0x372,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00478ac0 FUN_00478ac0 ==== */

void __thiscall FUN_00478ac0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [324];
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b916;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnFramecall__s_005a9660,puVar2);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_38[0] = param_3._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a9670;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CScriptedObject_005a9670;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(this_val,&param_2,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (cVar1 == '\0') {
    FUN_004c4150(s___s___d_CScriptedObject_Event____005a96a4,
                 s_C__Work_A2IV_Game_prog_script_cp_005a9680,0x390,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00478d00 FUN_00478d00 ==== */

void __thiscall FUN_00478d00(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [324];
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b940;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnFreeze__s_005a9710,puVar2);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_38[0] = param_3._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a971c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CScriptedObject_005a971c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(this_val,&param_2,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (cVar1 == '\0') {
    FUN_004c4150(s___s___d_CScriptedObject_Event____005a9750,
                 s_C__Work_A2IV_Game_prog_script_cp_005a972c,0x3ae,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00478f40 FUN_00478f40 ==== */

void __thiscall FUN_00478f40(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [324];
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b96a;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnSimulation__s_005a97bc,puVar2);
  local_8 = 0;
  local_28[0] = param_3._3_1_;
  FUN_004028f0(local_28,0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_28,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_17c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_24 = local_24 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_24 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,i);
  }
  local_38[0] = param_3._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a97cc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_38,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CScriptedObject_005a97cc;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_34 = local_34 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_34 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_34 = local_34 + 1;
    }
    FUN_004029e0(local_38,i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(this_val,&param_2,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,1);
  if (cVar1 == '\0') {
    FUN_004c4150(s___s___d_CScriptedObject_Event____005a9800,
                 s_C__Work_A2IV_Game_prog_script_cp_005a97dc,0x3cc,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00479180 FUN_00479180 ==== */

void __thiscall FUN_00479180(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint i;
  uint j;
  char *pcVar3;
  char local_17c [324];
  undefined1 local_38 [4];
  char *local_34;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 this_val;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b994;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  if (param_2 != -1) {
    puVar2 = *(undefined1 **)(param_3 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    ExceptionList = &local_10;
    FUN_005587a3(local_17c,s_OnCollision__s_005a986c,puVar2);
    local_8 = 0;
    local_28[0] = param_2._3_1_;
    FUN_004028f0(local_28,0);
    i = 0xffffffff;
    pcVar3 = local_17c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_28,i,1);
    if (cVar1 != '\0') {
      pcVar3 = local_17c;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)local_24 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        local_24 = local_24 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *local_24 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        local_24 = local_24 + 1;
      }
      FUN_004029e0(local_28,i);
    }
    local_38[0] = param_2._3_1_;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004028f0(local_38,0);
    i = 0xffffffff;
    pcVar3 = s_CScriptedObject_005a987c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_38,i,1);
    if (cVar1 != '\0') {
      pcVar3 = s_CScriptedObject_005a987c;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)local_34 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        local_34 = local_34 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *local_34 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        local_34 = local_34 + 1;
      }
      FUN_004029e0(local_38,i);
    }
    local_8._0_1_ = 2;
    cVar1 = FUN_004cfaf0(this_val,&param_2,local_38,local_28);
    local_8._0_1_ = 1;
    FUN_004028f0(local_38,1);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(local_28,1);
    if (cVar1 == '\0') {
      FUN_004c4150(s___s___d_CScriptedObject_Event____005a98b0,
                   s_C__Work_A2IV_Game_prog_script_cp_005a988c,0x3ec,local_17c);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00479410 FUN_00479410 ==== */

void FUN_00479410(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00479420 FUN_00479420 ==== */

void FUN_00479420(void)

{
  FUN_005584e0(&LAB_00479430);
  return;
}


/* ==== 00479450 FUN_00479450 ==== */

void FUN_00479450(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00479460 FUN_00479460 ==== */

void FUN_00479460(void)

{
  FUN_005584e0(&LAB_00479470);
  return;
}


/* ==== 00479480 FUN_00479480 ==== */

void __thiscall FUN_00479480(void *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  iVar2 = *(int *)((int)this + 0x14);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 00479520 FUN_00479520 ==== */

undefined1 * __thiscall FUN_00479520(void *this,undefined1 *this_val,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint i;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *this_val = this_val._0_1_;
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  if (*(uint *)((int)this + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar4 = *(uint *)((int)this + 8) - param_2;
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  if (this_val == this) {
    uVar4 = uVar4 + param_2;
    if (*(uint *)(this_val + 8) < uVar4) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar2 = *(int *)(this_val + 8) - uVar4;
    iVar5 = -1;
    if (iVar2 != -1) {
      iVar5 = iVar2;
    }
    if (iVar5 != 0) {
      FUN_005580e0(*(int *)(this_val + 4) + uVar4,*(int *)(this_val + 4) + uVar4 + iVar5,
                   iVar2 - iVar5);
      iVar2 = *(int *)(this_val + 8);
      cVar1 = FUN_00402a00(this_val,iVar2 - iVar5,0);
      if (cVar1 != '\0') {
        FUN_004029e0(this_val,iVar2 - iVar5);
      }
    }
    FUN_00402c30(this_val);
    uVar4 = *(uint *)(this_val + 8);
    if (uVar4 < param_2) {
      param_2 = uVar4;
    }
    if (param_2 != 0) {
      FUN_005580e0(*(int *)(this_val + 4),*(int *)(this_val + 4) + param_2,uVar4 - param_2);
      iVar5 = *(int *)(this_val + 8);
      cVar1 = FUN_00402a00(this_val,iVar5 - param_2,0);
      if (cVar1 != '\0') {
        FUN_004029e0(this_val,iVar5 - param_2);
        return this_val;
      }
    }
  }
  else {
    if ((uVar4 != 0) && (uVar4 == *(uint *)((int)this + 8))) {
      puVar3 = *(undefined1 **)((int)this + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar3 = *(undefined1 **)((int)this + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)(this_val + 4) = puVar3;
        *(undefined4 *)(this_val + 8) = *(undefined4 *)((int)this + 8);
        *(undefined4 *)(this_val + 0xc) = *(undefined4 *)((int)this + 0xc);
        puVar3[-1] = puVar3[-1] + '\x01';
        return this_val;
      }
    }
    cVar1 = FUN_00402a00(this_val,uVar4,1);
    if (cVar1 != '\0') {
      puVar3 = *(undefined1 **)((int)this + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      puVar6 = (undefined4 *)(puVar3 + param_2);
      puVar7 = *(undefined4 **)(this_val + 4);
      for (i = uVar4 >> 2; i != 0; i = i - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (i = uVar4 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)(this_val + 8) = uVar4;
      *(undefined1 *)(*(int *)(this_val + 4) + uVar4) = 0;
    }
  }
  return this_val;
}


/* ==== 004796b0 FUN_004796b0 ==== */

undefined1 * FUN_004796b0(undefined1 *this_val,undefined1 *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  uint i;
  uint j;
  char *pcVar3;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b9a8;
  pvStack_c = ExceptionList;
  local_1c[0] = *param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_004093c0(local_1c,param_2,0,0xffffffff);
  i = 0xffffffff;
  pcVar3 = param_3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  local_4 = 0;
  if (-local_14 - 1U <= i) {
    FUN_0054b1b4();
  }
  if (i != 0) {
    iVar1 = local_14 + i;
    cVar2 = FUN_00402a00(local_1c,iVar1,0);
    if (cVar2 != '\0') {
      pcVar3 = (char *)(local_14 + local_18);
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)param_3;
        param_3 = param_3 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar3 = *param_3;
        param_3 = param_3 + 1;
        pcVar3 = pcVar3 + 1;
      }
      *(undefined1 *)(local_18 + iVar1) = 0;
      local_14 = iVar1;
    }
  }
  *this_val = local_1c[0];
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  FUN_004093c0(this_val,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return this_val;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return this_val;
}


/* ==== 004797e0 FUN_004797e0 ==== */

undefined1 * __thiscall FUN_004797e0(void *this,undefined1 *this_val,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_1c [4];
  char *local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b9c8;
  pvStack_c = ExceptionList;
  local_1c[0] = param_2._0_1_;
  i = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  cVar2 = FUN_00402a00(local_1c,i,1);
  if (cVar2 != '\0') {
    pcVar3 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *param_2;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  local_4 = 0;
  i = 0xffffffff;
  if (*(uint *)(param_3 + 8) != 0xffffffff) {
    i = *(uint *)(param_3 + 8);
  }
  if (-local_14 - 1U <= i) {
    FUN_0054b1b4();
  }
  if (i != 0) {
    iVar1 = local_14 + i;
    cVar2 = FUN_00402a00(local_1c,iVar1,0);
    if (cVar2 != '\0') {
      pcVar3 = *(char **)(param_3 + 4);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      pcVar4 = local_18 + local_14;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar4 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
      local_18[iVar1] = '\0';
      local_14 = iVar1;
    }
  }
  *this_val = local_1c[0];
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  FUN_004093c0(this_val,local_1c,0,0xffffffff);
  if (local_18 != (char *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return this_val;
}


/* ==== 00479930 FUN_00479930 ==== */

/* WARNING: Removing unreachable block (ram,0x0047995f) */

undefined1 * __thiscall FUN_00479930(void *this,undefined1 *this_val)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  uint i;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar2 = *(undefined1 **)((int)this + 0x10);
  uVar1 = *puVar2;
  *(undefined4 *)(this_val + 4) = 0;
  *this_val = uVar1;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  uVar3 = *(uint *)(puVar2 + 8);
  if (this_val == puVar2) {
    if (uVar3 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar5 = *(int *)(this_val + 8) - uVar3;
    iVar7 = -1;
    if (iVar5 != -1) {
      iVar7 = iVar5;
    }
    if (iVar7 != 0) {
      FUN_005580e0(uVar3 + *(int *)(this_val + 4),uVar3 + *(int *)(this_val + 4) + iVar7,
                   iVar5 - iVar7);
      iVar5 = *(int *)(this_val + 8);
      cVar4 = FUN_00402a00(this_val,iVar5 - iVar7,0);
      if (cVar4 != '\0') {
        FUN_004029e0(this_val,iVar5 - iVar7);
      }
    }
    FUN_00402c30(this_val);
    return this_val;
  }
  if (uVar3 != 0) {
    puVar6 = *(undefined1 **)(puVar2 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    if ((byte)puVar6[-1] < 0xfe) {
      FUN_004028f0(this_val,1);
      puVar6 = *(undefined1 **)(puVar2 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      *(undefined1 **)(this_val + 4) = puVar6;
      *(undefined4 *)(this_val + 8) = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(this_val + 0xc) = *(undefined4 *)(puVar2 + 0xc);
      puVar6[-1] = puVar6[-1] + '\x01';
      return this_val;
    }
  }
  cVar4 = FUN_00402a00(this_val,uVar3,1);
  if (cVar4 != '\0') {
    puVar8 = *(undefined4 **)(puVar2 + 4);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)&DAT_0057629c;
    }
    puVar9 = *(undefined4 **)(this_val + 4);
    for (i = uVar3 >> 2; i != 0; i = i - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (i = uVar3 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)(this_val + 8) = uVar3;
    *(undefined1 *)(*(int *)(this_val + 4) + uVar3) = 0;
  }
  return this_val;
}


/* ==== 00479a60 FUN_00479a60 ==== */

void * __thiscall FUN_00479a60(void *this,byte param_2)

{
  FUN_004cf650();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00479a80 FUN_00479a80 ==== */

undefined4 __thiscall FUN_00479a80(void *this,undefined4 this_val,uint param_2)

{
  int iVar1;
  char cVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_38 [4];
  char *local_34;
  uint local_30;
  undefined **local_28 [6];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b9e8;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if (param_2 < (uint)((*(int *)((int)this + 8) - iVar1) / 0x18)) {
      ExceptionList = &pvStack_c;
      FUN_004cef20(this_val,iVar1 + param_2 * 0x18);
      ExceptionList = pvStack_10;
      return this_val;
    }
  }
  local_38[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_38,0);
  i = 0xffffffff;
  pcVar3 = s_invalid_vector<T>_subscript_005a9a38;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(local_38,i,1);
  if (cVar2 != '\0') {
    pcVar3 = s_invalid_vector<T>_subscript_005a9a38;
    pcVar4 = local_34;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    local_34[i] = '\0';
    local_30 = i;
  }
  local_4 = 0;
  FUN_00479b80(local_28,local_38);
  local_28[0] = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_0057f4e0);
}


/* ==== 00479b80 FUN_00479b80 ==== */

/* WARNING: Removing unreachable block (ram,0x00479bde) */

undefined4 * __thiscall FUN_00479b80(void *this,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *this_val;
  uint i;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba08;
  local_c = ExceptionList;
  local_14 = &DAT_00712694;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00558853(this,&local_14);
  this_val = (undefined1 *)((int)this + 0xc);
  uVar1 = *param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *this_val = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar2 = *(uint *)(param_2 + 8);
  local_4 = 0;
  if (this_val == param_2) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar4 = *(int *)((int)this + 0x14) - uVar2;
    iVar7 = -1;
    if (iVar4 != -1) {
      iVar7 = iVar4;
    }
    if (iVar7 != 0) {
      iVar6 = uVar2 + *(int *)((int)this + 0x10);
      FUN_005580e0(iVar6,iVar6 + iVar7,iVar4 - iVar7);
      iVar7 = *(int *)((int)this + 0x14) - iVar7;
      cVar3 = FUN_00402a00(this_val,iVar7,0);
      if (cVar3 != '\0') {
        FUN_004029e0(this_val,iVar7);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar2 != 0) {
      puVar5 = *(undefined1 **)(param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = *(undefined1 **)(param_2 + 4);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = this_val;
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0xc);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_00479c3c;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar2,1);
    if (cVar3 != '\0') {
      puVar8 = *(undefined4 **)(param_2 + 4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0057629c;
      }
      puVar9 = *(undefined4 **)((int)this + 0x10);
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar2;
      *(undefined1 *)(uVar2 + *(int *)((int)this + 0x10)) = 0;
      *local_10 = &PTR_FUN_00578e74;
      ExceptionList = local_c;
      return local_10;
    }
  }
LAB_00479c3c:
  *(undefined ***)this = &PTR_FUN_00578e74;
  ExceptionList = local_c;
  return this;
}


/* ==== 00479d20 FUN_00479d20 ==== */

void __thiscall FUN_00479d20(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_00578e74;
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  exception::~exception(this);
  return;
}


/* ==== 00479d70 FUN_00479d70 ==== */

void * __thiscall FUN_00479d70(void *this,byte param_2)

{
  FUN_00479d20();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00479d90 FUN_00479d90 ==== */

/* WARNING: Removing unreachable block (ram,0x00479de4) */

void * __thiscall FUN_00479d90(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *this_val;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(this,param_2);
  this_val = (undefined1 *)((int)this + 0xc);
  local_4 = 0;
  *this_val = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = *(uint *)(param_2 + 0x14);
  if (this_val == (undefined1 *)(param_2 + 0xc)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x14) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x10);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0x14) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = *(undefined1 **)(param_2 + 0x10);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = this_val;
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x18);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_00479e42;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)((int)this + 0x10);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 0x10) + uVar1) = 0;
      *(undefined ***)this = &PTR_FUN_00578e74;
      ExceptionList = local_c;
      return this;
    }
  }
LAB_00479e42:
  *(undefined ***)this = &PTR_FUN_00578e74;
  ExceptionList = local_c;
  return this;
}


/* ==== 00479f10 FUN_00479f10 ==== */

/* WARNING: Removing unreachable block (ram,0x00479f63) */

void * __thiscall FUN_00479f10(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *this_val;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(this,param_2);
  this_val = (undefined1 *)((int)this + 0xc);
  local_4 = 0;
  *this_val = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = *(uint *)(param_2 + 0x14);
  if (this_val == (undefined1 *)(param_2 + 0xc)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x14) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x10);
      FUN_005580e0(iVar5,iVar6 + iVar5,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0x14) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = *(undefined1 **)(param_2 + 0x10);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = this_val;
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x18);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_00479fc1;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)((int)this + 0x10);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(this_val,uVar1);
      *(undefined ***)this = &PTR_FUN_00578e84;
      ExceptionList = local_c;
      return this;
    }
  }
LAB_00479fc1:
  *(undefined ***)this = &PTR_FUN_00578e84;
  ExceptionList = local_c;
  return this;
}


/* ==== 0047a070 FUN_0047a070 ==== */

void * __thiscall FUN_0047a070(void *this)

{
  *(undefined4 *)this = 0;
  FUN_004d3180((int)this + 4);
  return this;
}


/* ==== 0047a090 FUN_0047a090 ==== */

void __thiscall FUN_0047a090(void *this)

{
  FUN_004d31a0((int)this + 4);
  return;
}


/* ==== 0047a130 FUN_0047a130 ==== */

void __thiscall FUN_0047a130(void *this)

{
  *(undefined ***)this = &PTR_LAB_00576a8c;
  return;
}


/* ==== 0047a1e0 FUN_0047a1e0 ==== */

void __thiscall FUN_0047a1e0(void *this,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar2 = *param_2;
  fVar3 = *param_3;
  fVar4 = param_2[1];
  fVar5 = param_3[1];
  fVar6 = param_2[2];
  fVar7 = param_3[2];
  fVar8 = *param_4;
  fVar9 = *param_3;
  fVar10 = param_4[1];
  fVar11 = param_3[1];
  fVar12 = param_4[2];
  fVar13 = param_3[2];
  pfVar1 = (float *)((int)this + 4);
  *pfVar1 = (fVar10 - fVar11) * (fVar6 - fVar7) - (fVar12 - fVar13) * (fVar4 - fVar5);
  *(float *)((int)this + 8) =
       (fVar12 - fVar13) * (fVar2 - fVar3) - (fVar6 - fVar7) * (fVar8 - fVar9);
  *(float *)((int)this + 0xc) =
       (fVar4 - fVar5) * (fVar8 - fVar9) - (fVar10 - fVar11) * (fVar2 - fVar3);
  fVar2 = SQRT(*(float *)((int)this + 0xc) * *(float *)((int)this + 0xc) +
               *(float *)((int)this + 8) * *(float *)((int)this + 8) + *pfVar1 * *pfVar1);
  *pfVar1 = *pfVar1 / fVar2;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) / fVar2;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) / fVar2;
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  fVar4 = *param_3;
  *(undefined1 *)((int)this + 0x14) = 1;
  *(float *)((int)this + 0x10) =
       *pfVar1 * fVar4 + *(float *)((int)this + 8) * fVar3 + *(float *)((int)this + 0xc) * fVar2;
  return;
}


/* ==== 0047a310 FUN_0047a310 ==== */

undefined4 __thiscall
FUN_0047a310(void *this,undefined4 this_val,undefined4 this_val_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_294;
  float local_290;
  float local_28c;
  undefined1 local_27c [12];
  undefined1 local_270 [12];
  undefined1 local_264 [12];
  undefined1 local_258 [12];
  undefined1 local_24c [12];
  undefined1 local_240 [12];
  undefined1 local_234 [12];
  undefined1 local_228 [12];
  undefined1 local_21c [12];
  undefined1 local_210 [12];
  undefined1 local_204 [12];
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [12];
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (*(char *)((int)this + 0x14) == '\0') {
    return 0xfffffffe;
  }
  iVar2 = FUN_0047b100(this_val);
  if (iVar2 < 3) {
    return 0xffffffff;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = iVar8 + 1;
      iVar10 = iVar1;
      if (iVar2 <= iVar1) {
        iVar10 = iVar1 - iVar2;
      }
      pfVar3 = (float *)FUN_0047aff0(this_val,local_168,iVar8);
      local_2a8 = (*pfVar3 * *(float *)((int)this + 4) +
                  pfVar3[1] * *(float *)((int)this + 8) + pfVar3[2] * *(float *)((int)this + 0xc)) -
                  *(float *)((int)this + 0x10);
      pfVar3 = (float *)FUN_0047aff0(this_val,local_138,iVar10);
      fVar12 = (*pfVar3 * *(float *)((int)this + 4) +
               pfVar3[2] * *(float *)((int)this + 0xc) + pfVar3[1] * *(float *)((int)this + 8)) -
               *(float *)((int)this + 0x10);
      if (0.0 < local_2a8) {
        if (fVar12 <= 0.0) {
          local_2a8 = local_2a8 / (local_2a8 - fVar12);
          pfVar3 = (float *)FUN_0047aff0(this_val,local_1ec,iVar10);
          pfVar5 = (float *)FUN_0047aff0(this_val,local_1d4,iVar8);
          fVar12 = *pfVar3;
          fVar14 = *pfVar5;
          pfVar3 = (float *)FUN_0047aff0(this_val,local_1bc,iVar8);
          local_294 = (fVar12 - fVar14) * local_2a8 + *pfVar3;
          iVar6 = FUN_0047aff0(this_val,local_1a4,iVar10);
          iVar7 = FUN_0047aff0(this_val,local_18c,iVar8);
          fVar12 = *(float *)(iVar6 + 4);
          fVar14 = *(float *)(iVar7 + 4);
          iVar6 = FUN_0047aff0(this_val,local_174,iVar8);
          local_290 = (fVar12 - fVar14) * local_2a8 + *(float *)(iVar6 + 4);
          iVar6 = FUN_0047aff0(this_val,local_15c,iVar10);
          iVar7 = FUN_0047aff0(this_val,local_144,iVar8);
          fVar12 = *(float *)(iVar6 + 8);
          fVar14 = *(float *)(iVar7 + 8);
          iVar6 = FUN_0047aff0(this_val,local_12c,iVar8);
          local_28c = (fVar12 - fVar14) * local_2a8 + *(float *)(iVar6 + 8);
          switch(param_3) {
          case 0:
            goto switchD_0047a698_caseD_0;
          case 1:
            iVar6 = FUN_0047b020(this_val,local_114,iVar8);
            local_2a0 = *(float *)(iVar6 + 4);
            local_2a4 = 0.0;
            uVar11 = *(undefined4 *)(iVar6 + 8);
            iVar10 = FUN_0047b020(this_val,local_fc,iVar10);
            puVar9 = local_e4;
            break;
          case 2:
            pfVar3 = (float *)FUN_0047b020(this_val,local_cc,iVar8);
            local_2a4 = *pfVar3;
            fVar12 = pfVar3[2];
            pfVar3 = (float *)FUN_0047b020(this_val,local_b4,iVar10);
            pfVar5 = (float *)FUN_0047b020(this_val,local_9c,iVar8);
            local_2a0 = 0.0;
            local_2a4 = (*pfVar3 - *pfVar5) * local_2a8 + local_2a4;
            goto LAB_0047aaf9;
          case 3:
            iVar6 = FUN_0047b020(this_val,local_84,iVar8);
            local_2a0 = *(float *)(iVar6 + 4);
            local_2a4 = 1.0;
            uVar11 = *(undefined4 *)(iVar6 + 8);
            iVar10 = FUN_0047b020(this_val,local_6c,iVar10);
            puVar9 = local_54;
            break;
          case 4:
            pfVar3 = (float *)FUN_0047b020(this_val,local_3c,iVar8);
            local_2a4 = *pfVar3;
            fVar12 = pfVar3[2];
            pfVar3 = (float *)FUN_0047b020(this_val,local_24,iVar10);
            puVar9 = local_c;
            goto LAB_0047aad9;
          default:
            goto switchD_0047a698_default;
          }
          goto LAB_0047a99e;
        }
        goto switchD_0047a698_default;
      }
      switch(param_3) {
      case 0:
        puVar4 = (undefined4 *)FUN_0047aff0(this_val,local_258,iVar8);
        FUN_0047b060(this_val_2,*puVar4,puVar4[1],puVar4[2]);
        goto switchD_0047a407_default;
      case 1:
        iVar6 = FUN_0047b020(this_val,local_30,iVar8);
        fVar14 = *(float *)(iVar6 + 4);
        fVar15 = *(float *)(iVar6 + 8);
        puVar9 = local_240;
        fVar13 = local_2a8;
        break;
      case 2:
        pfVar3 = (float *)FUN_0047b020(this_val,local_120,iVar8);
        fVar15 = pfVar3[2];
        puVar9 = local_228;
        fVar13 = *pfVar3;
        fVar14 = local_2a8;
        break;
      case 3:
        pfVar3 = (float *)FUN_0047b020(this_val,local_90,iVar8);
        fVar15 = pfVar3[2];
        puVar9 = local_210;
        fVar13 = *pfVar3 / (*pfVar3 + local_2a8);
        fVar14 = pfVar3[1];
        break;
      case 4:
        pfVar3 = (float *)FUN_0047b020(this_val,local_108,iVar8);
        fVar15 = pfVar3[2];
        puVar9 = local_1f8;
        fVar13 = *pfVar3;
        fVar14 = pfVar3[1] / (pfVar3[1] + local_2a8);
        break;
      default:
        goto switchD_0047a407_default;
      }
      puVar4 = (undefined4 *)FUN_0047aff0(this_val,puVar9,iVar8);
      FUN_0047b0a0(this_val_2,*puVar4,puVar4[1],puVar4[2],fVar13,fVar14,fVar15);
switchD_0047a407_default:
      if (fVar12 <= 0.0) goto switchD_0047a698_default;
      local_2a8 = local_2a8 / (local_2a8 - fVar12);
      pfVar3 = (float *)FUN_0047aff0(this_val,local_48,iVar10);
      pfVar5 = (float *)FUN_0047aff0(this_val,local_1e0,iVar8);
      fVar12 = *pfVar3;
      fVar14 = *pfVar5;
      pfVar3 = (float *)FUN_0047aff0(this_val,local_f0,iVar8);
      local_294 = (fVar12 - fVar14) * local_2a8 + *pfVar3;
      iVar6 = FUN_0047aff0(this_val,local_1c8,iVar10);
      iVar7 = FUN_0047aff0(this_val,local_78,iVar8);
      fVar12 = *(float *)(iVar6 + 4);
      fVar14 = *(float *)(iVar7 + 4);
      iVar6 = FUN_0047aff0(this_val,local_1b0,iVar8);
      local_290 = (fVar12 - fVar14) * local_2a8 + *(float *)(iVar6 + 4);
      iVar6 = FUN_0047aff0(this_val,local_d8,iVar10);
      iVar7 = FUN_0047aff0(this_val,local_198,iVar8);
      fVar12 = *(float *)(iVar6 + 8);
      fVar14 = *(float *)(iVar7 + 8);
      iVar6 = FUN_0047aff0(this_val,local_18,iVar8);
      local_28c = (fVar12 - fVar14) * local_2a8 + *(float *)(iVar6 + 8);
      switch(param_3) {
      case 0:
switchD_0047a698_caseD_0:
        FUN_0047b060(this_val_2,local_294,local_290,local_28c);
        break;
      case 1:
        iVar6 = FUN_0047b020(this_val,local_180,iVar8);
        fVar12 = *(float *)(iVar6 + 4);
        uVar11 = *(undefined4 *)(iVar6 + 8);
        iVar10 = FUN_0047b020(this_val,local_c0,iVar10);
        iVar8 = FUN_0047b020(this_val,local_27c,iVar8);
        FUN_0047b0a0(this_val_2,local_294,local_290,local_28c,0,
                     (*(float *)(iVar10 + 4) - *(float *)(iVar8 + 4)) * local_2a8 + fVar12,uVar11);
        break;
      case 2:
        pfVar3 = (float *)FUN_0047b020(this_val,local_60,iVar8);
        local_2a4 = *pfVar3;
        fVar12 = pfVar3[2];
        pfVar3 = (float *)FUN_0047b020(this_val,local_150,iVar10);
        pfVar5 = (float *)FUN_0047b020(this_val,local_a8,iVar8);
        local_2a0 = 0.0;
        local_2a4 = (*pfVar3 - *pfVar5) * local_2a8 + local_2a4;
        goto LAB_0047aaf9;
      case 3:
        iVar6 = FUN_0047b020(this_val,local_270,iVar8);
        local_2a0 = *(float *)(iVar6 + 4);
        local_2a4 = 1.0;
        uVar11 = *(undefined4 *)(iVar6 + 8);
        iVar10 = FUN_0047b020(this_val,local_264,iVar10);
        puVar9 = local_24c;
LAB_0047a99e:
        iVar8 = FUN_0047b020(this_val,puVar9,iVar8);
        FUN_0047b0a0(this_val_2,local_294,local_290,local_28c,local_2a4,
                     (*(float *)(iVar10 + 4) - *(float *)(iVar8 + 4)) * local_2a8 + local_2a0,uVar11
                    );
        break;
      case 4:
        pfVar3 = (float *)FUN_0047b020(this_val,local_234,iVar8);
        local_2a4 = *pfVar3;
        fVar12 = pfVar3[2];
        pfVar3 = (float *)FUN_0047b020(this_val,local_21c,iVar10);
        puVar9 = local_204;
LAB_0047aad9:
        pfVar5 = (float *)FUN_0047b020(this_val,puVar9,iVar8);
        local_2a0 = 1.0;
        local_2a4 = (*pfVar3 - *pfVar5) * local_2a8 + local_2a4;
LAB_0047aaf9:
        FUN_0047b0a0(this_val_2,local_294,local_290,local_28c,local_2a4,local_2a0,fVar12);
      }
switchD_0047a698_default:
      iVar8 = iVar1;
    } while (iVar1 < iVar2);
  }
  return 0;
}


