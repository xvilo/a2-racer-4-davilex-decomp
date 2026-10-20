/* spel.dat — game/script.cpp: 64 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004739b0 FUN_004739b0 ==== */

void FUN_004739b0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 8);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_0054b339(piVar3);
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
    piVar3 = piVar2;
  }
  return;
}


/* ==== 00473a00 FUN_00473a00 ==== */

void FUN_00473a00(void)

{
  FUN_00475840();
  return;
}


/* ==== 00473a10 FUN_00473a10 ==== */

void FUN_00473a10(void)

{
  FUN_005584e0(&LAB_00473a20);
  return;
}


/* ==== 00473a30 FUN_00473a30 ==== */

void FUN_00473a30(undefined4 *param_1,float *param_2)

{
  *(double *)(param_1 + 4) = (double)*param_2;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}


/* ==== 00473a60 FUN_00473a60 ==== */

void FUN_00473a60(undefined4 *param_1,int param_2)

{
  *(double *)(param_1 + 4) = (double)*(float *)(param_2 + 4);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}


/* ==== 00473a90 FUN_00473a90 ==== */

void FUN_00473a90(undefined4 *param_1,int param_2)

{
  *(double *)(param_1 + 4) = (double)*(float *)(param_2 + 8);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}


/* ==== 00473b50 FUN_00473b50 ==== */

void FUN_00473b50(undefined4 *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 2);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = (uint)bVar1;
  return;
}


/* ==== 00473ba0 FUN_00473ba0 ==== */

void FUN_00473ba0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 1);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = (uint)bVar1;
  return;
}


/* ==== 00473bf0 FUN_00473bf0 ==== */

void FUN_00473bf0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = uVar1 & 0xff;
  return;
}


/* ==== 00473c40 FUN_00473c40 ==== */

void FUN_00473c40(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = uVar1 >> 0x18;
  return;
}


/* ==== 00473d70 FUN_00473d70 ==== */

void FUN_00473d70(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00715e50;
  iVar1 = *param_2;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 4;
  param_1[4] = iVar1 * 0xf0 + 0x4c + iVar2;
  return;
}


/* ==== 00473ea0 FUN_00473ea0 ==== */

void FUN_00473ea0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)
           (DAT_0073b0d0 + *(int *)(*param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0xa5);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = uVar1;
  return;
}


/* ==== 00473f50 FUN_00473f50 ==== */

void FUN_00473f50(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_0073b0d0 + *(int *)(*param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 4;
  param_1[4] = iVar1 + 0x80;
  return;
}


/* ==== 00474040 FUN_00474040 ==== */

void FUN_00474040(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00715e50;
  iVar1 = *param_2;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 4;
  param_1[4] = iVar1 * 0xf0 + 200 + iVar2;
  return;
}


/* ==== 004740c0 FUN_004740c0 ==== */

void FUN_004740c0(undefined4 *param_1,int *param_2)

{
  *(double *)(param_1 + 4) = (double)*(float *)(*param_2 * 0xf0 + 0xb0 + DAT_00715e50);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}


/* ==== 00474130 FUN_00474130 ==== */

void FUN_00474130(undefined4 *param_1,int *param_2)

{
  *(double *)(param_1 + 4) = (double)*(float *)(*param_2 * 0xf0 + 0x58 + DAT_00715e50);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}


/* ==== 00474190 FUN_00474190 ==== */

void FUN_00474190(undefined4 *param_1,int *param_2)

{
  *(double *)(param_1 + 4) = (double)*(float *)(*param_2 * 0xf0 + 0xb8 + DAT_00715e50);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}


/* ==== 00474200 FUN_00474200 ==== */

void FUN_00474200(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_2 * 0xf0 + 0x54 + DAT_00715e50);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = uVar1;
  return;
}


/* ==== 00474270 FUN_00474270 ==== */

void FUN_00474270(undefined4 *param_1)

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
  iVar2 = FUN_00479a80(local_24,1);
  dVar1 = *(double *)(iVar2 + 0x10);
  local_4 = 0;
  iVar2 = FUN_00479a80(local_3c,0);
  local_4._0_1_ = 1;
  FUN_00451760((float)*(double *)(iVar2 + 0x10),(float)dVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004cf650();
  local_4 = 0xffffffff;
  FUN_004cf650();
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00474320 FUN_00474320 ==== */

void FUN_00474320(undefined4 *param_1)

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
  iVar1 = FUN_00479a80(local_24,0);
  local_4 = 0;
  FUN_00451640((float)*(double *)(iVar1 + 0x10),uVar2);
  local_4 = 0xffffffff;
  FUN_004cf650();
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004743a0 FUN_004743a0 ==== */

void FUN_004743a0(undefined4 *param_1)

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
  iVar1 = FUN_00479a80(local_24,0);
  local_4 = 0;
  FUN_004516d0((float)*(double *)(iVar1 + 0x10),uVar2);
  local_4 = 0xffffffff;
  FUN_004cf650();
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00474420 FUN_00474420 ==== */

void FUN_00474420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 4;
  param_1[4] = &DAT_006fba58;
  return;
}


/* ==== 00474500 FUN_00474500 ==== */

void FUN_00474500(undefined4 *param_1)

{
  char cVar1;
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
  FUN_00479a80(local_24,0);
  local_4 = 0;
  iVar2 = FUN_00479930(local_34);
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
  FUN_004cf650();
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00474690 FUN_00474690 ==== */

void FUN_00474690(undefined4 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int j;
  int i;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 auStack_11c [16];
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float *local_c8;
  float *pfStack_c4;
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
  local_c8 = &local_a4;
  pfStack_c4 = (float *)0x0;
  local_68 = 0;
  local_8c = 0.0;
  local_88 = 0.0;
  local_84 = 0.0;
  local_cc = 0x4746ed;
  ExceptionList = &local_c;
  iVar8 = FUN_00479a80();
  iVar8 = *(int *)(iVar8 + 0x10);
  pfStack_c4 = (float *)0x4746f9;
  FUN_004cf650();
  local_c8 = &local_a4;
  pfStack_c4 = (float *)0x1;
  local_cc = 0x474707;
  j = FUN_00479a80();
  dVar1 = *(double *)(j + 0x10);
  pfStack_c4 = (float *)0x474717;
  FUN_004cf650();
  local_c8 = &local_a4;
  pfStack_c4 = (float *)0x2;
  local_cc = 0x474725;
  j = FUN_00479a80();
  dVar2 = *(double *)(j + 0x10);
  pfStack_c4 = (float *)0x474735;
  FUN_004cf650();
  local_c8 = &local_a4;
  pfStack_c4 = (float *)0x3;
  local_cc = 0x474743;
  j = FUN_00479a80();
  dVar3 = *(double *)(j + 0x10);
  pfStack_c4 = (float *)0x474753;
  FUN_004cf650();
  local_c8 = (float *)local_80;
  pfStack_c4 = (float *)0x4;
  local_cc = 0x474761;
  j = FUN_00479a80();
  local_a4 = (float)*(double *)(j + 0x10);
  pfStack_c4 = (float *)0x474771;
  FUN_004cf650();
  local_c8 = (float *)local_80;
  pfStack_c4 = (float *)0x5;
  local_cc = 0x47477f;
  j = FUN_00479a80();
  local_a0 = (float)*(double *)(j + 0x10);
  pfStack_c4 = (float *)0x47478f;
  FUN_004cf650();
  local_c8 = (float *)local_80;
  pfStack_c4 = (float *)0x6;
  local_cc = 0x47479d;
  j = FUN_00479a80();
  local_9c = (float)*(double *)(j + 0x10);
  pfStack_c4 = (float *)0x4747ad;
  FUN_004cf650();
  iVar9 = DAT_0073b0d0 + *(int *)(i * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  puVar10 = (undefined4 *)(iVar9 + 0x10);
  puVar11 = local_64;
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if (iVar8 == 1) {
    local_84 = (float)dVar3 + *(float *)(iVar9 + 0x58);
    local_88 = (float)dVar2 + *(float *)(iVar9 + 0x54);
    local_8c = (float)dVar1 + *(float *)(iVar9 + 0x50);
    local_a0 = -local_a0;
  }
  else {
    local_34 = local_34 + (float)dVar1;
    local_30 = local_30 + (float)dVar2;
    local_2c = local_2c + (float)dVar3;
  }
  i = DAT_0073b0d0 + *(int *)(i * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  pfStack_c4 = (float *)0x0;
  local_c8 = (float *)local_24;
  uVar4 = *(undefined4 *)(i + 0x74);
  uVar5 = *(undefined4 *)(i + 0x78);
  uVar6 = *(undefined4 *)(i + 0x7c);
  local_cc = 0x47489b;
  i = FUN_00479a80();
  pfStack_c4 = &local_8c;
  uVar7 = *(undefined4 *)(i + 0x10);
  local_4 = 0;
  local_dc = local_a4;
  local_d8 = local_a0;
  local_d4 = local_9c;
  puVar10 = local_64;
  puVar11 = auStack_11c;
  local_d0 = uVar4;
  local_cc = uVar5;
  local_c8 = (float *)uVar6;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_0045d170(uVar7);
  local_4 = 0xffffffff;
  pfStack_c4 = (float *)0x47490b;
  FUN_004cf650();
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
  
  FUN_004a02e0();
  uVar1 = 0;
  i = 3;
  param_1 = param_1 * 0xf0;
  if (*(int *)(param_1 + 0x18 + DAT_00715e50) != 1) {
    FUN_004c4150(s___s___d_Can_not_add_constraint_t_005a8e68,
                 s_C__Work_A2IV_Game_prog_script_cp_005a8e44,0x187);
  }
  if (in_stack_00000024 != 0.0) {
    FUN_004a0430(in_stack_00000024);
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
  FUN_004a0390(*(undefined4 *)(param_1 + 0x10 + DAT_00715e50),&stack0x00000018,&param_3,uVar1,i);
  (**(code **)(**(int **)(param_1 + 0x10 + DAT_00715e50) + 8))(local_200);
  return;
}


/* ==== 00475690 FUN_00475690 ==== */

void FUN_00475690(undefined4 *param_1,int *param_2)

{
  char cVar1;
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
  FUN_00479a80(local_24,0);
  local_4 = 0;
  iVar2 = FUN_00479930(local_34);
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
  FUN_004cf650();
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004757c0 FUN_004757c0 ==== */

void FUN_004757c0(undefined4 *param_1,int *param_2)

{
  *(undefined4 *)(*param_2 * 0xf0 + 0x30 + DAT_00715e50) = 0xffffffff;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


/* ==== 00475810 FUN_00475810 ==== */

void FUN_00475810(void)

{
  FUN_0047a070();
  return;
}


/* ==== 00475820 FUN_00475820 ==== */

void FUN_00475820(void)

{
  FUN_005584e0(&LAB_00475830);
  return;
}


/* ==== 00475840 FUN_00475840 ==== */

void FUN_00475840(void)

{
  FUN_004cf710();
  return;
}


/* ==== 00475860 FUN_00475860 ==== */

void FUN_00475860(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *str;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
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
  str = param_2;
  if (param_2 == (char *)0x0) {
    str = "";
  }
  ExceptionList = &local_10;
  str = _strrchr(str,0x2e);
  if (str != (char *)0x0) {
    pcVar5 = param_2;
    if (param_2 == (char *)0x0) {
      pcVar5 = "";
    }
    uVar2 = FUN_00479520(local_7c,0,(int)str - (int)pcVar5);
    local_8._0_1_ = 1;
    FUN_004796b0(local_24,uVar2,&PTR_DAT_005a8ea8);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_004028f0(1);
    str = param_2;
    if (param_2 == (char *)0x0) {
      str = "";
    }
    iVar3 = FUN_005590ff(str,local_194);
    if (iVar3 == -1) {
      str = param_2;
      if (param_2 == (char *)0x0) {
        str = "";
      }
      FUN_004c4150(s_Scriptfile_not_found__s_005a8eac,str);
    }
    FUN_005591c9(iVar3);
    puVar4 = local_20;
    if (local_20 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    iVar3 = FUN_005590ff(puVar4,local_2ac);
    local_8._0_1_ = 4;
    if (iVar3 != -1) {
      FUN_004cf720(&param_1,&DAT_00712680);
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
      if (param_2 != (char *)0x0) {
        cVar1 = param_2[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          param_2[-1] = cVar1 + -1;
          ExceptionList = local_10;
          return;
        }
        FUN_0054b339(param_2 + -1);
      }
      ExceptionList = local_10;
      return;
    }
    FUN_005591c9(0xffffffff);
    FUN_004cf720(&param_1,&DAT_00712680);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(1);
  }
  local_8 = 0xffffffff;
  FUN_004028f0(1);
  ExceptionList = local_10;
  return;
}


/* ==== 00475b50 FUN_00475b50 ==== */

void FUN_00475b50(void)

{
  char cVar1;
  int i;
  uint j;
  uint k;
  char *pcVar2;
  char *pcVar3;
  char *local_48;
  char *local_38;
  char *local_28;
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b7ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_x_005a8f48;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_D3DVECTOR_005a8f4c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 1;
  FUN_004d1c10();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_y_005a8f58;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 2;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_D3DVECTOR_005a8f5c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 3;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_z_005a8f68;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 4;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_D3DVECTOR_005a8f6c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 5;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_Set_005a8f78;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 6;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_D3DVECTOR_005a8f7c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 7;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_r_005a8f88;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 8;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_D3DCOLOR_005a8f8c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 9;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_g_005a8f98;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 10;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_D3DCOLOR_005a8f9c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0xb;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_b_005a8fa8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0xc;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_D3DCOLOR_005a8fac;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0xd;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_a_005a8fb8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0xe;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_D3DCOLOR_005a8fbc;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0xf;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_damage_005a8fc8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x10;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CPlayer_005a8fd0;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x11;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x10);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_turbo_005a8fd8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x12;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CPlayer_005a8fe0;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x13;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_money_005a8fe8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x14;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CPlayer_005a8ff0;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x15;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x14);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_MakeInvulnerable_005a8ff8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x16;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CPlayer_005a900c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x17;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x16);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_FreezeRacers_005a9014;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x18;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CPlayer_005a9024;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x19;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x18);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_ChangeFOV_005a902c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x1a;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CPlayer_005a9038;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x1b;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x1a);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_FastForward_005a9040;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x1c;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CPlayer_005a904c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x1d;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x1c);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_scale_005a9054;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x1e;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a905c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x1f;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x1e);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_angle_005a9064;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x20;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a906c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x21;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x20);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_anglespeed_005a9074;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x22;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a9080;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x23;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x22);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_respawntime_005a9088;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x24;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a9094;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x25;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x24);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_fadeouttime_005a909c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x26;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a90a8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x27;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x26);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_effectduration_005a90b0;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x28;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a90c0;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x29;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x28);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_active_005a90c8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x2a;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a90d0;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x2b;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x2a);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_color_005a90d8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x2c;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a90e0;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x2d;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x2c);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_setcolor_005a90e8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x2e;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a90f4;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x2f;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x2e);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_shademode_005a90fc;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x30;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a9108;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x31;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x30);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CreateParticles_005a9110;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x32;
  FUN_004028f0();
  i = -1;
  pcVar2 = &DAT_005a9120;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x33;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x32);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_GetPlayer_005a9128;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x34;
  FUN_004d16d0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_GetSin_005a9134;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x35;
  FUN_004d16d0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_PlaySample_005a913c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x36;
  FUN_004d16d0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_PrintText_005a9148;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x37;
  FUN_004d16d0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_PerSecToPerFrame_005a9154;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x38;
  FUN_004d16d0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_color_005a9168;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x39;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CScriptedObject_005a9170;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x3a;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x39);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_shademode_005a9180;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x3b;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CScriptedObject_005a918c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x3c;
  FUN_004d1c10();
  local_4 = CONCAT31(local_4._1_3_,0x3b);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_SetColor_005a919c;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x3d;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CScriptedObject_005a91a8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x3e;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x3d);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_InitPhysics_005a91b8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x3f;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CScriptedObject_005a91c4;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x40;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x3f);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  i = -1;
  pcVar2 = s_InitPhysics2_005a91d4;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4 = 0x41;
  FUN_004028f0();
  i = -1;
  pcVar2 = s_CScriptedObject_005a91e4;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 0x42;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x41);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_InitMultiObjectPhysics_005a91f4;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_InitMultiObjectPhysics_005a91f4;
    pcVar3 = local_28;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x43;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a920c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a920c;
    pcVar3 = local_38;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x44;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x43);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_InitPiledObjectPhysics_005a921c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_InitPiledObjectPhysics_005a921c;
    pcVar3 = local_38;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x45;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a9234;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a9234;
    pcVar3 = local_28;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x46;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x45);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_InitSound3D_005a9244;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_InitSound3D_005a9244;
    pcVar3 = local_38;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x47;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a9250;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a9250;
    pcVar3 = local_28;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x48;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x47);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_PlaySound3D_005a9260;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_PlaySound3D_005a9260;
    pcVar3 = local_38;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x49;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a926c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a926c;
    pcVar3 = local_28;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x4a;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x49);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_DeleteSound3D_005a927c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_DeleteSound3D_005a927c;
    pcVar3 = local_38;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x4b;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a928c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a928c;
    pcVar3 = local_28;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x4c;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x4b);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_AddConstraint_005a929c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_AddConstraint_005a929c;
    pcVar3 = local_38;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x4d;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a92ac;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a92ac;
    pcVar3 = local_28;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x4e;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x4d);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_AddConstraintXAxis_005a92bc;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_AddConstraintXAxis_005a92bc;
    pcVar3 = local_38;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x4f;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a92d0;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a92d0;
    pcVar3 = local_28;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x50;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x4f);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_AddConstraintYAxis_005a92e0;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_AddConstraintYAxis_005a92e0;
    pcVar3 = local_38;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x51;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a92f4;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a92f4;
    pcVar3 = local_28;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x52;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x51);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_AddConstraintZAxis_005a9304;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_AddConstraintZAxis_005a9304;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_38 = local_38 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *local_38 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0();
  }
  local_4 = 0x53;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a9318;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a9318;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_28 = local_28 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *local_28 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x54;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x53);
  FUN_004028f0();
  local_4 = 0xffffffff;
  FUN_004028f0();
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CreateParticles_005a9328;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  j = ~j - 1;
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CreateParticles_005a9328;
    pcVar3 = local_48;
    for (k = j >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (k = j & 3; k != 0; k = k - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_48[j] = '\0';
  }
  local_4 = 0x55;
  FUN_004028f0();
  j = 0xffffffff;
  pcVar2 = s_CScriptedObject_005a9338;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00402a00();
  if (cVar1 != '\0') {
    pcVar2 = s_CScriptedObject_005a9338;
    for (k = ~j - 1 >> 2; k != 0; k = k - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_18 = local_18 + 4;
    }
    for (j = ~j - 1 & 3; j != 0; j = j - 1) {
      *local_18 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0();
  }
  local_4._0_1_ = 0x56;
  FUN_004d2290();
  local_4 = CONCAT31(local_4._1_3_,0x55);
  FUN_004028f0();
  local_4 = 0xffffffff;
  if (local_48 != (char *)0x0) {
    cVar1 = local_48[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      local_48[-1] = cVar1 + -1;
    }
  }
  j = 0xffffffff;
  pcVar2 = s_bonus_dso_005a9348;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_bonus_dso_005a9348,~j - 1);
  FUN_00475860();
  ExceptionList = local_c;
  return;
}


/* ==== 00477b90 FUN_00477b90 ==== */

void FUN_00477b90(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b7f8;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnInit__s_005a9354,puVar2);
  FUN_004c3fa0(s_fire_bonus_init___s__005a9360,local_17c);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_38[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CBonus_005a9378;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(&param_1,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
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

void FUN_00477df0(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b822;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnPickup__s_005a941c,puVar2);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CBonus_005a9428;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_48[0] = param_2._3_1_;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8._0_1_ = 3;
  FUN_004cfab0(&param_1,local_38,local_28,local_48);
  local_8._0_1_ = 2;
  FUN_004d29b0();
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  ExceptionList = local_10;
  return;
}


/* ==== 00478010 FUN_00478010 ==== */

void FUN_00478010(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b84c;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnFadeout__s_005a9454,puVar2);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CBonus_005a9464;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_48[0] = param_2._3_1_;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8._0_1_ = 3;
  FUN_004cfab0(&param_1,local_38,local_28,local_48);
  local_8._0_1_ = 2;
  FUN_004d29b0();
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  ExceptionList = local_10;
  return;
}


/* ==== 00478230 FUN_00478230 ==== */

void FUN_00478230(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b876;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnTurnoff__s_005a9490,puVar2);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CBonus_005a94a0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_48[0] = param_2._3_1_;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8._0_1_ = 3;
  FUN_004cfab0(&param_1,local_38,local_28,local_48);
  local_8._0_1_ = 2;
  FUN_004d29b0();
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  ExceptionList = local_10;
  return;
}


/* ==== 00478450 FUN_00478450 ==== */

void FUN_00478450(int param_1,undefined4 param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b898;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff88;
  if (*(int *)(param_1 * 0xf0 + 0x14 + DAT_00715e50) == 0) {
    local_28[0] = param_1._3_1_;
    ExceptionList = &local_10;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = s_CBonus_005a94dc;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(i,1);
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
      FUN_004029e0(i);
    }
    local_8 = 0;
    uVar3 = FUN_004797e0(local_38,s_OnFramecall__005a94cc,param_2);
    local_8._0_1_ = 1;
    iVar5 = param_1 * 0xf0 + DAT_00715e50;
    uVar3 = FUN_004cfb50(local_28,uVar3);
    *(undefined4 *)(iVar5 + 0x14) = uVar3;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(1);
    local_8 = 0xffffffff;
    FUN_004028f0(1);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_8 = 2;
  FUN_004cfb30(&param_1,*(undefined4 *)(param_1 * 0xf0 + 0x14 + DAT_00715e50));
  ExceptionList = local_10;
  return;
}


/* ==== 00478640 FUN_00478640 ==== */

void FUN_00478640(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b8c2;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnInit__s_005a9508,puVar2);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a9514;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(&param_1,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  if (cVar1 == '\0') {
    FUN_004c4150(s__s__d___CScriptedObject_Event____005a9548,
                 s_C__Work_A2IV_Game_prog_script_cp_005a9524,0x355,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00478880 FUN_00478880 ==== */

void FUN_00478880(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b8ec;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnRevive__s_005a95b4,puVar2);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a95c0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(&param_1,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  if (cVar1 == '\0') {
    FUN_004c4150(s___s___d_CScriptedObject_Event____005a95f4,
                 s_C__Work_A2IV_Game_prog_script_cp_005a95d0,0x372,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00478ac0 FUN_00478ac0 ==== */

void FUN_00478ac0(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b916;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnFramecall__s_005a9660,puVar2);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a9670;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(&param_1,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  if (cVar1 == '\0') {
    FUN_004c4150(s___s___d_CScriptedObject_Event____005a96a4,
                 s_C__Work_A2IV_Game_prog_script_cp_005a9680,0x390,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00478d00 FUN_00478d00 ==== */

void FUN_00478d00(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b940;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnFreeze__s_005a9710,puVar2);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a971c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(&param_1,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  if (cVar1 == '\0') {
    FUN_004c4150(s___s___d_CScriptedObject_Event____005a9750,
                 s_C__Work_A2IV_Game_prog_script_cp_005a972c,0x3ae,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00478f40 FUN_00478f40 ==== */

void FUN_00478f40(undefined4 param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b96a;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_005587a3(local_17c,s_OnSimulation__s_005a97bc,puVar2);
  local_8 = 0;
  local_28[0] = param_2._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = local_17c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_38[0] = param_2._3_1_;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CScriptedObject_005a97cc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
  }
  local_8._0_1_ = 2;
  cVar1 = FUN_004cfaf0(&param_1,local_38,local_28);
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  if (cVar1 == '\0') {
    FUN_004c4150(s___s___d_CScriptedObject_Event____005a9800,
                 s_C__Work_A2IV_Game_prog_script_cp_005a97dc,0x3cc,local_17c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00479180 FUN_00479180 ==== */

void FUN_00479180(int param_1,int param_2)

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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056b994;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  if (param_1 != -1) {
    puVar2 = *(undefined1 **)(param_2 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    ExceptionList = &local_10;
    FUN_005587a3(local_17c,s_OnCollision__s_005a986c,puVar2);
    local_8 = 0;
    local_28[0] = param_1._3_1_;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = local_17c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
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
      FUN_004029e0(i);
    }
    local_38[0] = param_1._3_1_;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = s_CScriptedObject_005a987c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
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
      FUN_004029e0(i);
    }
    local_8._0_1_ = 2;
    cVar1 = FUN_004cfaf0(&param_1,local_38,local_28);
    local_8._0_1_ = 1;
    FUN_004028f0(1);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(1);
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

void FUN_00479480(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x24);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  iVar2 = *(int *)(in_ECX + 0x14);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 00479520 FUN_00479520 ==== */

undefined1 * FUN_00479520(undefined1 *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *in_ECX;
  uint i;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *param_1 = param_1._0_1_;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(uint *)(in_ECX + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar4 = *(uint *)(in_ECX + 8) - param_2;
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  if (param_1 == in_ECX) {
    uVar4 = uVar4 + param_2;
    if (*(uint *)(param_1 + 8) < uVar4) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar2 = *(int *)(param_1 + 8) - uVar4;
    iVar5 = -1;
    if (iVar2 != -1) {
      iVar5 = iVar2;
    }
    if (iVar5 != 0) {
      FUN_005580e0(*(int *)(param_1 + 4) + uVar4,*(int *)(param_1 + 4) + uVar4 + iVar5,iVar2 - iVar5
                  );
      iVar2 = *(int *)(param_1 + 8);
      cVar1 = FUN_00402a00(iVar2 - iVar5,0);
      if (cVar1 != '\0') {
        FUN_004029e0(iVar2 - iVar5);
      }
    }
    FUN_00402c30();
    uVar4 = *(uint *)(param_1 + 8);
    if (uVar4 < param_2) {
      param_2 = uVar4;
    }
    if (param_2 != 0) {
      FUN_005580e0(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + param_2,uVar4 - param_2);
      iVar5 = *(int *)(param_1 + 8);
      cVar1 = FUN_00402a00(iVar5 - param_2,0);
      if (cVar1 != '\0') {
        FUN_004029e0(iVar5 - param_2);
        return param_1;
      }
    }
  }
  else {
    if ((uVar4 != 0) && (uVar4 == *(uint *)(in_ECX + 8))) {
      puVar3 = *(undefined1 **)(in_ECX + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar3 = *(undefined1 **)(in_ECX + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
        puVar3[-1] = puVar3[-1] + '\x01';
        return param_1;
      }
    }
    cVar1 = FUN_00402a00(uVar4,1);
    if (cVar1 != '\0') {
      puVar3 = *(undefined1 **)(in_ECX + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      puVar6 = (undefined4 *)(puVar3 + param_2);
      puVar7 = *(undefined4 **)(param_1 + 4);
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
      *(uint *)(param_1 + 8) = uVar4;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar4) = 0;
    }
  }
  return param_1;
}


/* ==== 004796b0 FUN_004796b0 ==== */

undefined1 * FUN_004796b0(undefined1 *param_1,undefined1 *param_2,char *param_3)

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
  FUN_004093c0(param_2,0,0xffffffff);
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
    cVar2 = FUN_00402a00(iVar1,0);
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
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}


/* ==== 004797e0 FUN_004797e0 ==== */

undefined1 * FUN_004797e0(undefined1 *param_1,char *param_2,int param_3)

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
  cVar2 = FUN_00402a00(i,1);
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
    FUN_004029e0(i);
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
    cVar2 = FUN_00402a00(iVar1,0);
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
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(local_1c,0,0xffffffff);
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
  return param_1;
}


/* ==== 00479930 FUN_00479930 ==== */

/* WARNING: Removing unreachable block (ram,0x0047995f) */

undefined1 * FUN_00479930(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  int in_ECX;
  uint i;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar2 = *(undefined1 **)(in_ECX + 0x10);
  uVar1 = *puVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = *(uint *)(puVar2 + 8);
  if (param_1 == puVar2) {
    if (uVar3 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar5 = *(int *)(param_1 + 8) - uVar3;
    iVar7 = -1;
    if (iVar5 != -1) {
      iVar7 = iVar5;
    }
    if (iVar7 != 0) {
      FUN_005580e0(uVar3 + *(int *)(param_1 + 4),uVar3 + *(int *)(param_1 + 4) + iVar7,iVar5 - iVar7
                  );
      iVar5 = *(int *)(param_1 + 8);
      cVar4 = FUN_00402a00(iVar5 - iVar7,0);
      if (cVar4 != '\0') {
        FUN_004029e0(iVar5 - iVar7);
      }
    }
    FUN_00402c30();
    return param_1;
  }
  if (uVar3 != 0) {
    puVar6 = *(undefined1 **)(puVar2 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    if ((byte)puVar6[-1] < 0xfe) {
      FUN_004028f0(1);
      puVar6 = *(undefined1 **)(puVar2 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      *(undefined1 **)(param_1 + 4) = puVar6;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
      puVar6[-1] = puVar6[-1] + '\x01';
      return param_1;
    }
  }
  cVar4 = FUN_00402a00(uVar3,1);
  if (cVar4 != '\0') {
    puVar8 = *(undefined4 **)(puVar2 + 4);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)&DAT_0057629c;
    }
    puVar9 = *(undefined4 **)(param_1 + 4);
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
    *(uint *)(param_1 + 8) = uVar3;
    *(undefined1 *)(*(int *)(param_1 + 4) + uVar3) = 0;
  }
  return param_1;
}


/* ==== 00479a60 FUN_00479a60 ==== */

void FUN_00479a60(byte param_1)

{
  FUN_004cf650();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00479a80 FUN_00479a80 ==== */

undefined4 FUN_00479a80(undefined4 param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
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
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    if (param_2 < (uint)((*(int *)(in_ECX + 8) - iVar1) / 0x18)) {
      ExceptionList = &pvStack_c;
      FUN_004cef20(iVar1 + param_2 * 0x18);
      ExceptionList = pvStack_10;
      return param_1;
    }
  }
  local_38[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_invalid_vector<T>_subscript_005a9a38;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
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
  FUN_00479b80(local_38);
  local_28[0] = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_0057f4e0);
}


/* ==== 00479b80 FUN_00479b80 ==== */

/* WARNING: Removing unreachable block (ram,0x00479bde) */

void FUN_00479b80(undefined4 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *in_ECX;
  uint i;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  local_10 = in_ECX;
  FUN_00558853(&local_14);
  uVar1 = *(undefined1 *)param_1;
  in_ECX[4] = 0;
  *(undefined1 *)(in_ECX + 3) = uVar1;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  uVar2 = param_1[2];
  local_4 = 0;
  if (in_ECX + 3 == param_1) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar4 = in_ECX[5] - uVar2;
    iVar6 = -1;
    if (iVar4 != -1) {
      iVar6 = iVar4;
    }
    if (iVar6 != 0) {
      FUN_005580e0(uVar2 + in_ECX[4],uVar2 + in_ECX[4] + iVar6,iVar4 - iVar6);
      iVar4 = in_ECX[5];
      cVar3 = FUN_00402a00(iVar4 - iVar6,0);
      if (cVar3 != '\0') {
        FUN_004029e0(iVar4 - iVar6);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar2 != 0) {
      puVar5 = (undefined1 *)param_1[1];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar5 = (undefined1 *)param_1[1];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        in_ECX[4] = puVar5;
        in_ECX[5] = param_1[2];
        in_ECX[6] = param_1[3];
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_00479c3c;
      }
    }
    cVar3 = FUN_00402a00(uVar2,1);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)param_1[1];
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = (undefined4 *)in_ECX[4];
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      in_ECX[5] = uVar2;
      *(undefined1 *)(uVar2 + in_ECX[4]) = 0;
      *local_10 = &PTR_FUN_00578e74;
      ExceptionList = local_c;
      return;
    }
  }
LAB_00479c3c:
  *in_ECX = &PTR_FUN_00578e74;
  ExceptionList = local_c;
  return;
}


/* ==== 00479d20 FUN_00479d20 ==== */

void FUN_00479d20(void)

{
  char cVar1;
  int iVar2;
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00578e74;
  iVar2 = *(int *)(in_ECX + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  exception::~exception(in_ECX);
  return;
}


/* ==== 00479d70 FUN_00479d70 ==== */

void FUN_00479d70(byte param_1)

{
  FUN_00479d20();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00479d90 FUN_00479d90 ==== */

/* WARNING: Removing unreachable block (ram,0x00479de4) */

void FUN_00479d90(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(param_1);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(param_1 + 0xc);
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (in_ECX + 3 == (undefined4 *)(param_1 + 0xc)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[5] - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + in_ECX[4],uVar1 + in_ECX[4] + iVar5,iVar3 - iVar5);
      iVar3 = in_ECX[5];
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar4 = *(undefined1 **)(param_1 + 0x10);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[4] = puVar4;
        in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
        in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00479e42;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)in_ECX[4];
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      in_ECX[5] = uVar1;
      *(undefined1 *)(in_ECX[4] + uVar1) = 0;
      *in_ECX = &PTR_FUN_00578e74;
      ExceptionList = local_c;
      return;
    }
  }
LAB_00479e42:
  *in_ECX = &PTR_FUN_00578e74;
  ExceptionList = local_c;
  return;
}


/* ==== 00479f10 FUN_00479f10 ==== */

/* WARNING: Removing unreachable block (ram,0x00479f63) */

void FUN_00479f10(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(param_1);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(param_1 + 0xc);
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (in_ECX + 3 == (undefined4 *)(param_1 + 0xc)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[5] - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + in_ECX[4],iVar5 + uVar1 + in_ECX[4],iVar3 - iVar5);
      iVar3 = in_ECX[5];
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar4 = *(undefined1 **)(param_1 + 0x10);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[4] = puVar4;
        in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
        in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00479fc1;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)in_ECX[4];
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(uVar1);
      *in_ECX = &PTR_FUN_00578e84;
      ExceptionList = local_c;
      return;
    }
  }
LAB_00479fc1:
  *in_ECX = &PTR_FUN_00578e84;
  ExceptionList = local_c;
  return;
}


/* ==== 0047a070 FUN_0047a070 ==== */

void FUN_0047a070(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  FUN_004d3180();
  return;
}


/* ==== 0047a090 FUN_0047a090 ==== */

void FUN_0047a090(void)

{
  FUN_004d31a0();
  return;
}


/* ==== 0047a130 FUN_0047a130 ==== */

void FUN_0047a130(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00576a8c;
  return;
}


/* ==== 0047a1e0 FUN_0047a1e0 ==== */

void FUN_0047a1e0(float *param_1,float *param_2,float *param_3)

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
  int in_ECX;
  
  fVar2 = *param_1;
  fVar3 = *param_2;
  fVar4 = param_1[1];
  fVar5 = param_2[1];
  fVar6 = param_1[2];
  fVar7 = param_2[2];
  fVar8 = *param_3;
  fVar9 = *param_2;
  fVar10 = param_3[1];
  fVar11 = param_2[1];
  fVar12 = param_3[2];
  fVar13 = param_2[2];
  pfVar1 = (float *)(in_ECX + 4);
  *pfVar1 = (fVar10 - fVar11) * (fVar6 - fVar7) - (fVar12 - fVar13) * (fVar4 - fVar5);
  *(float *)(in_ECX + 8) = (fVar12 - fVar13) * (fVar2 - fVar3) - (fVar6 - fVar7) * (fVar8 - fVar9);
  *(float *)(in_ECX + 0xc) = (fVar4 - fVar5) * (fVar8 - fVar9) - (fVar10 - fVar11) * (fVar2 - fVar3)
  ;
  fVar2 = SQRT(*(float *)(in_ECX + 0xc) * *(float *)(in_ECX + 0xc) +
               *(float *)(in_ECX + 8) * *(float *)(in_ECX + 8) + *pfVar1 * *pfVar1);
  *pfVar1 = *pfVar1 / fVar2;
  *(float *)(in_ECX + 8) = *(float *)(in_ECX + 8) / fVar2;
  *(float *)(in_ECX + 0xc) = *(float *)(in_ECX + 0xc) / fVar2;
  fVar2 = param_2[2];
  fVar3 = param_2[1];
  fVar4 = *param_2;
  *(undefined1 *)(in_ECX + 0x14) = 1;
  *(float *)(in_ECX + 0x10) =
       *pfVar1 * fVar4 + *(float *)(in_ECX + 8) * fVar3 + *(float *)(in_ECX + 0xc) * fVar2;
  return;
}


/* ==== 0047a310 FUN_0047a310 ==== */

undefined4 FUN_0047a310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  int in_ECX;
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
  
  if (*(char *)(in_ECX + 0x14) == '\0') {
    return 0xfffffffe;
  }
  iVar2 = FUN_0047b100();
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
      pfVar3 = (float *)FUN_0047aff0(local_168,iVar8);
      local_2a8 = (*pfVar3 * *(float *)(in_ECX + 4) +
                  pfVar3[1] * *(float *)(in_ECX + 8) + pfVar3[2] * *(float *)(in_ECX + 0xc)) -
                  *(float *)(in_ECX + 0x10);
      pfVar3 = (float *)FUN_0047aff0(local_138,iVar10);
      fVar12 = (*pfVar3 * *(float *)(in_ECX + 4) +
               pfVar3[2] * *(float *)(in_ECX + 0xc) + pfVar3[1] * *(float *)(in_ECX + 8)) -
               *(float *)(in_ECX + 0x10);
      if (0.0 < local_2a8) {
        if (fVar12 <= 0.0) {
          local_2a8 = local_2a8 / (local_2a8 - fVar12);
          pfVar3 = (float *)FUN_0047aff0(local_1ec,iVar10);
          pfVar5 = (float *)FUN_0047aff0(local_1d4,iVar8);
          fVar12 = *pfVar3;
          fVar14 = *pfVar5;
          pfVar3 = (float *)FUN_0047aff0(local_1bc,iVar8);
          local_294 = (fVar12 - fVar14) * local_2a8 + *pfVar3;
          iVar6 = FUN_0047aff0(local_1a4,iVar10);
          iVar7 = FUN_0047aff0(local_18c,iVar8);
          fVar12 = *(float *)(iVar6 + 4);
          fVar14 = *(float *)(iVar7 + 4);
          iVar6 = FUN_0047aff0(local_174,iVar8);
          local_290 = (fVar12 - fVar14) * local_2a8 + *(float *)(iVar6 + 4);
          iVar6 = FUN_0047aff0(local_15c,iVar10);
          iVar7 = FUN_0047aff0(local_144,iVar8);
          fVar12 = *(float *)(iVar6 + 8);
          fVar14 = *(float *)(iVar7 + 8);
          iVar6 = FUN_0047aff0(local_12c,iVar8);
          local_28c = (fVar12 - fVar14) * local_2a8 + *(float *)(iVar6 + 8);
          switch(param_3) {
          case 0:
            goto switchD_0047a698_caseD_0;
          case 1:
            iVar6 = FUN_0047b020(local_114,iVar8);
            local_2a0 = *(float *)(iVar6 + 4);
            local_2a4 = 0.0;
            uVar11 = *(undefined4 *)(iVar6 + 8);
            iVar10 = FUN_0047b020(local_fc,iVar10);
            puVar9 = local_e4;
            break;
          case 2:
            pfVar3 = (float *)FUN_0047b020(local_cc,iVar8);
            local_2a4 = *pfVar3;
            fVar12 = pfVar3[2];
            pfVar3 = (float *)FUN_0047b020(local_b4,iVar10);
            pfVar5 = (float *)FUN_0047b020(local_9c,iVar8);
            local_2a0 = 0.0;
            local_2a4 = (*pfVar3 - *pfVar5) * local_2a8 + local_2a4;
            goto LAB_0047aaf9;
          case 3:
            iVar6 = FUN_0047b020(local_84,iVar8);
            local_2a0 = *(float *)(iVar6 + 4);
            local_2a4 = 1.0;
            uVar11 = *(undefined4 *)(iVar6 + 8);
            iVar10 = FUN_0047b020(local_6c,iVar10);
            puVar9 = local_54;
            break;
          case 4:
            pfVar3 = (float *)FUN_0047b020(local_3c,iVar8);
            local_2a4 = *pfVar3;
            fVar12 = pfVar3[2];
            pfVar3 = (float *)FUN_0047b020(local_24,iVar10);
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
        puVar4 = (undefined4 *)FUN_0047aff0(local_258,iVar8);
        FUN_0047b060(*puVar4,puVar4[1],puVar4[2]);
        goto switchD_0047a407_default;
      case 1:
        iVar6 = FUN_0047b020(local_30,iVar8);
        fVar14 = *(float *)(iVar6 + 4);
        fVar15 = *(float *)(iVar6 + 8);
        puVar9 = local_240;
        fVar13 = local_2a8;
        break;
      case 2:
        pfVar3 = (float *)FUN_0047b020(local_120,iVar8);
        fVar15 = pfVar3[2];
        puVar9 = local_228;
        fVar13 = *pfVar3;
        fVar14 = local_2a8;
        break;
      case 3:
        pfVar3 = (float *)FUN_0047b020(local_90,iVar8);
        fVar15 = pfVar3[2];
        puVar9 = local_210;
        fVar13 = *pfVar3 / (*pfVar3 + local_2a8);
        fVar14 = pfVar3[1];
        break;
      case 4:
        pfVar3 = (float *)FUN_0047b020(local_108,iVar8);
        fVar15 = pfVar3[2];
        puVar9 = local_1f8;
        fVar13 = *pfVar3;
        fVar14 = pfVar3[1] / (pfVar3[1] + local_2a8);
        break;
      default:
        goto switchD_0047a407_default;
      }
      puVar4 = (undefined4 *)FUN_0047aff0(puVar9,iVar8);
      FUN_0047b0a0(*puVar4,puVar4[1],puVar4[2],fVar13,fVar14,fVar15);
switchD_0047a407_default:
      if (fVar12 <= 0.0) goto switchD_0047a698_default;
      local_2a8 = local_2a8 / (local_2a8 - fVar12);
      pfVar3 = (float *)FUN_0047aff0(local_48,iVar10);
      pfVar5 = (float *)FUN_0047aff0(local_1e0,iVar8);
      fVar12 = *pfVar3;
      fVar14 = *pfVar5;
      pfVar3 = (float *)FUN_0047aff0(local_f0,iVar8);
      local_294 = (fVar12 - fVar14) * local_2a8 + *pfVar3;
      iVar6 = FUN_0047aff0(local_1c8,iVar10);
      iVar7 = FUN_0047aff0(local_78,iVar8);
      fVar12 = *(float *)(iVar6 + 4);
      fVar14 = *(float *)(iVar7 + 4);
      iVar6 = FUN_0047aff0(local_1b0,iVar8);
      local_290 = (fVar12 - fVar14) * local_2a8 + *(float *)(iVar6 + 4);
      iVar6 = FUN_0047aff0(local_d8,iVar10);
      iVar7 = FUN_0047aff0(local_198,iVar8);
      fVar12 = *(float *)(iVar6 + 8);
      fVar14 = *(float *)(iVar7 + 8);
      iVar6 = FUN_0047aff0(local_18,iVar8);
      local_28c = (fVar12 - fVar14) * local_2a8 + *(float *)(iVar6 + 8);
      switch(param_3) {
      case 0:
switchD_0047a698_caseD_0:
        FUN_0047b060(local_294,local_290,local_28c);
        break;
      case 1:
        iVar6 = FUN_0047b020(local_180,iVar8);
        fVar12 = *(float *)(iVar6 + 4);
        uVar11 = *(undefined4 *)(iVar6 + 8);
        iVar10 = FUN_0047b020(local_c0,iVar10);
        iVar8 = FUN_0047b020(local_27c,iVar8);
        FUN_0047b0a0(local_294,local_290,local_28c,0,
                     (*(float *)(iVar10 + 4) - *(float *)(iVar8 + 4)) * local_2a8 + fVar12,uVar11);
        break;
      case 2:
        pfVar3 = (float *)FUN_0047b020(local_60,iVar8);
        local_2a4 = *pfVar3;
        fVar12 = pfVar3[2];
        pfVar3 = (float *)FUN_0047b020(local_150,iVar10);
        pfVar5 = (float *)FUN_0047b020(local_a8,iVar8);
        local_2a0 = 0.0;
        local_2a4 = (*pfVar3 - *pfVar5) * local_2a8 + local_2a4;
        goto LAB_0047aaf9;
      case 3:
        iVar6 = FUN_0047b020(local_270,iVar8);
        local_2a0 = *(float *)(iVar6 + 4);
        local_2a4 = 1.0;
        uVar11 = *(undefined4 *)(iVar6 + 8);
        iVar10 = FUN_0047b020(local_264,iVar10);
        puVar9 = local_24c;
LAB_0047a99e:
        iVar8 = FUN_0047b020(puVar9,iVar8);
        FUN_0047b0a0(local_294,local_290,local_28c,local_2a4,
                     (*(float *)(iVar10 + 4) - *(float *)(iVar8 + 4)) * local_2a8 + local_2a0,uVar11
                    );
        break;
      case 4:
        pfVar3 = (float *)FUN_0047b020(local_234,iVar8);
        local_2a4 = *pfVar3;
        fVar12 = pfVar3[2];
        pfVar3 = (float *)FUN_0047b020(local_21c,iVar10);
        puVar9 = local_204;
LAB_0047aad9:
        pfVar5 = (float *)FUN_0047b020(puVar9,iVar8);
        local_2a0 = 1.0;
        local_2a4 = (*pfVar3 - *pfVar5) * local_2a8 + local_2a4;
LAB_0047aaf9:
        FUN_0047b0a0(local_294,local_290,local_28c,local_2a4,local_2a0,fVar12);
      }
switchD_0047a698_default:
      iVar8 = iVar1;
    } while (iVar1 < iVar2);
  }
  return 0;
}


