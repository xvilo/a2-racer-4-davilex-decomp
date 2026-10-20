/* spel.dat — game/pth_trfc.cpp: 18 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00466220 FUN_00466220 ==== */

void FUN_00466220(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00466230 FUN_00466230 ==== */

void FUN_00466230(void)

{
  FUN_005584e0(&LAB_00466240);
  return;
}


/* ==== 00466260 FUN_00466260 ==== */

void FUN_00466260(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00466270 FUN_00466270 ==== */

void FUN_00466270(void)

{
  FUN_005584e0(&LAB_00466280);
  return;
}


/* ==== 00466400 FUN_00466400 ==== */

void FUN_00466400(int param_1)

{
  undefined4 this_val;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    this_val = FUN_0049eb50(&DAT_006fbb5c,
                            *(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x30 + DAT_00715e50));
    FUN_0049e570(this_val);
    *(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x5c + DAT_00715e50) = 0;
  }
  return;
}


/* ==== 00466650 FUN_00466650 ==== */

void FUN_00466650(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00466660 FUN_00466660 ==== */

void FUN_00466660(void)

{
  FUN_005584e0(&LAB_00466670);
  return;
}


/* ==== 00466690 FUN_00466690 ==== */

void FUN_00466690(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004666a0 FUN_004666a0 ==== */

void FUN_004666a0(void)

{
  FUN_005584e0(&LAB_004666b0);
  return;
}


/* ==== 004666c0 FUN_004666c0 ==== */

void FUN_004666c0(int param_1)

{
  char cVar1;
  int iVar2;
  char *str1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint i;
  uint j;
  char *pcVar6;
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056abc8;
  pvStack_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,0);
  local_4 = 0;
  if (DAT_005d2aa8 == 0) {
    FUN_004c4150(s__s___d__No_traffic_types_availab_005a721c,
                 s_C__Work_A2IV_Game_prog_pth_trfc__005a71f8,0x41);
  }
  iVar2 = FUN_00558625();
  iVar2 = iVar2 % DAT_005d2aa8;
  i = 0xffffffff;
  str1 = (char *)(&DAT_005d269c + iVar2 * 10);
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    str1 = (char *)(&DAT_005d269c + iVar2 * 10);
    pcVar6 = pcStack_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar6 = *str1;
      str1 = str1 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  iVar2 = FUN_00424660(&DAT_005d3458,local_1c);
  str1 = *(char **)(iVar2 + 0x14);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  uVar3 = FUN_004b75a0(&DAT_00712130,str1);
  iVar4 = FUN_004a7790(0,0,0,0,0,0,uVar3,0,0,0,0);
  FUN_00450b00(iVar4,s_HOOG4_005a7240);
  iVar5 = iVar4 * 0xf0;
  *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 0;
  *(undefined4 *)(iVar5 + 0x1c + DAT_00715e50) = 2;
  *(undefined4 *)(iVar5 + 0x50 + DAT_00715e50) = 0;
  FUN_00436170(*(undefined4 *)(iVar2 + 0x44),iVar4);
  (&DAT_0070a244)[param_1 * 0xd0] = iVar4;
  if (pcStack_18 != (char *)0x0) {
    cVar1 = pcStack_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      pcStack_18[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(pcStack_18 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00466950 FUN_00466950 ==== */

void FUN_00466950(int param_1)

{
  undefined4 this_val;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    this_val = FUN_0049eb50(&DAT_006fbb5c,
                            *(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x30 + DAT_00715e50));
    FUN_0049e570(this_val);
    *(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x5c + DAT_00715e50) = 0;
  }
  return;
}


/* ==== 00466db0 FUN_00466db0 ==== */

void FUN_00466db0(int param_1)

{
  char cVar1;
  int iVar2;
  char *str1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint i;
  uint j;
  char *pcVar6;
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056abec;
  pvStack_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,0);
  local_4 = 0;
  if (DAT_005d2aa8 == 0) {
    FUN_004c4150(s__s___d__No_traffic_types_availab_005a72b4,
                 s_C__Work_A2IV_Game_prog_pth_trfc__005a7290,0x121);
  }
  iVar2 = FUN_00558625();
  iVar2 = iVar2 % DAT_005d2aa8;
  i = 0xffffffff;
  str1 = (char *)(&DAT_005d269c + iVar2 * 10);
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    str1 = (char *)(&DAT_005d269c + iVar2 * 10);
    pcVar6 = pcStack_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar6 = *str1;
      str1 = str1 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  iVar2 = FUN_00424660(&DAT_005d3458,local_1c);
  str1 = *(char **)(iVar2 + 0x14);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  uVar3 = FUN_004b75a0(&DAT_00712130,str1);
  iVar4 = FUN_004a7790(0,0,0,0,0,0,uVar3,0,FUN_00421f50,0,0);
  FUN_004a79d0(iVar4,0,0,0,0,0xc1200000,0,0x44a28000,0x3f666666,0x3e4ccccd,0,0,0,1);
  FUN_004a7190(iVar4);
  FUN_00450b00(iVar4,s_HOOG4_005a72d8);
  iVar5 = iVar4 * 0xf0;
  *(undefined4 *)(iVar5 + 0x60 + DAT_00715e50) = 1;
  *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 0;
  *(undefined4 *)(iVar5 + 0x1c + DAT_00715e50) = 3;
  *(undefined4 *)(iVar5 + 0x34 + DAT_00715e50) = 0;
  FUN_00436170(*(undefined4 *)(iVar2 + 0x44),iVar4);
  (&DAT_0070a244)[param_1 * 0xd0] = iVar4;
  if (pcStack_18 != (char *)0x0) {
    cVar1 = pcStack_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      pcStack_18[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(pcStack_18 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004672b0 FUN_004672b0 ==== */

void FUN_004672b0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004672c0 FUN_004672c0 ==== */

void FUN_004672c0(void)

{
  FUN_005584e0(&LAB_004672d0);
  return;
}


/* ==== 004672f0 FUN_004672f0 ==== */

void FUN_004672f0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00467300 FUN_00467300 ==== */

void FUN_00467300(void)

{
  FUN_005584e0(&LAB_00467310);
  return;
}


/* ==== 00467320 FUN_00467320 ==== */

void FUN_00467320(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *param_2 / param_3;
  param_1[1] = fVar1 / param_3;
  param_1[2] = fVar2 / param_3;
  return;
}


/* ==== 00467370 FUN_00467370 ==== */

void * __thiscall FUN_00467370(void *this)

{
  void *operator_new_result;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ac29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00576984;
  *(undefined1 *)((int)this + 4) = local_11;
  operator_new_result = operator_new(0x18);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 8) = operator_new_result;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = &PTR_LAB_00576974;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00576984;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x14) = local_11;
  operator_new_result = operator_new(0x18);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 0x18) = operator_new_result;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00576974;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00576984;
  local_4._0_1_ = 1;
  *(undefined1 *)((int)this + 0x24) = local_11;
  operator_new_result = operator_new(0x18);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 0x28) = operator_new_result;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00576974;
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_00576984;
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 0x34) = local_11;
  operator_new_result = operator_new(0x18);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 0x38) = operator_new_result;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_00576974;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_00576984;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)((int)this + 0x44) = local_11;
  operator_new_result = operator_new(0x18);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 0x48) = operator_new_result;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_00576974;
  ExceptionList = local_c;
  return this;
}


