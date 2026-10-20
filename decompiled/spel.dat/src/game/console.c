/* spel.dat — game/console.cpp: 19 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004701d0 FUN_004701d0 ==== */

void __thiscall FUN_004701d0(void *this)

{
  undefined4 this_val;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056b0ff;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  this_val = FUN_004ea0c0();
  FUN_004eb740(this_val,*(undefined4 *)this,0);
  this_val = FUN_004ea0c0();
  FUN_004eb740(this_val,*(undefined4 *)((int)this + 4),0);
  FUN_00470284();
  return;
}


/* ==== 00470284 FUN_00470284 ==== */

void FUN_00470284(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  float10 in_ST0;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(float *)(unaff_EBP + -0x20) = (float)in_ST0;
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *puVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puVar1[1] = *(undefined4 *)(unaff_EBP + -0x20);
  puVar1[2] = *(undefined4 *)(unaff_EBP + -0x1c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004702c0 FUN_004702c0 ==== */

void __thiscall FUN_004702c0(void *this)

{
  undefined4 this_val;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056b111;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  this_val = FUN_004ea0c0();
  FUN_004eb740(this_val,*(undefined4 *)((int)this + 8),0);
  this_val = FUN_004ea0c0();
  FUN_004eb740(this_val,*(undefined4 *)((int)this + 0xc),0);
  FUN_00470375();
  return;
}


/* ==== 00470375 FUN_00470375 ==== */

void FUN_00470375(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  float10 in_ST0;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(float *)(unaff_EBP + -0x20) = (float)in_ST0;
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *puVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  puVar1[1] = *(undefined4 *)(unaff_EBP + -0x20);
  puVar1[2] = *(undefined4 *)(unaff_EBP + -0x1c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004703c0 FUN_004703c0 ==== */

void FUN_004703c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004703d0 FUN_004703d0 ==== */

void FUN_004703d0(void)

{
  FUN_005584e0(&LAB_004703e0);
  return;
}


/* ==== 00470400 FUN_00470400 ==== */

void FUN_00470400(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00470410 FUN_00470410 ==== */

void FUN_00470410(void)

{
  FUN_005584e0(&LAB_00470420);
  return;
}


/* ==== 00470460 FUN_00470460 ==== */

void __thiscall FUN_00470460(void *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x18);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  return;
}


/* ==== 004704a0 FUN_004704a0 ==== */

void * __thiscall FUN_004704a0(void *this)

{
  int iVar1;
  char cVar2;
  void *operator_new_result;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b141;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00576984;
  *(undefined1 *)((int)this + 8) = local_15;
  operator_new_result = operator_new(0x18);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 0xc) = operator_new_result;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00576974;
  this_val = (undefined1 *)((int)this + 0x14);
  *this_val = local_15;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_004730d0((int)this + 0x30);
  i = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_005769e8;
  pcVar3 = s__005a8a68;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  local_4 = CONCAT31(local_4._1_3_,2);
  cVar2 = FUN_00402a00(this_val,i,1);
  if (cVar2 != '\0') {
    pcVar3 = s__005a8a68;
    pcVar4 = *(char **)((int)this + 0x18);
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
    *(uint *)((int)this + 0x1c) = i;
    *(undefined1 *)(*(int *)((int)this + 0x18) + i) = 0;
  }
  pcVar3 = *(char **)((int)this + 0x18);
  if (((pcVar3 != (char *)0x0) && (pcVar3[-1] != '\0')) && (pcVar3[-1] != -1)) {
    FUN_004028f0(this_val,1);
    i = 0xffffffff;
    pcVar4 = pcVar3;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(this_val,pcVar3,~i - 1);
  }
  iVar1 = *(int *)((int)this + 0x1c);
  iVar5 = -1;
  if (iVar1 != -1) {
    iVar5 = iVar1;
  }
  if (iVar5 != 0) {
    FUN_005580e0(*(int *)((int)this + 0x18),*(int *)((int)this + 0x18) + iVar5,iVar1 - iVar5);
    iVar5 = *(int *)((int)this + 0x1c) - iVar5;
    cVar2 = FUN_00402a00(this_val,iVar5,0);
    if (cVar2 != '\0') {
      *(int *)((int)this + 0x1c) = iVar5;
      *(undefined1 *)(*(int *)((int)this + 0x18) + iVar5) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}


/* ==== 00470600 FUN_00470600 ==== */

void __thiscall FUN_00470600(void *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056b161;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_005769e8;
  local_4 = 1;
  FUN_00473160((int)this + 0x30);
  iVar2 = *(int *)((int)this + 0x18);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  piVar3 = *(int **)((int)this + 0xc);
  local_4 = 0xffffffff;
  piVar5 = (int *)*piVar3;
  while (piVar5 != piVar3) {
    piVar4 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_00471e60(piVar5 + 2,0);
    FUN_0054b339(piVar5);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    piVar5 = piVar4;
  }
  FUN_0054b339(*(undefined4 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004706d0 FUN_004706d0 ==== */

void FUN_004706d0(void)

{
  char cVar1;
  undefined4 this_val;
  uint i;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b22b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8a6c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,s_keyboard0_005a8a6c,~i - 1);
  local_4 = 0;
  FUN_004028f0(local_5c,0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_TILDE_005a8a78;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,s_CM_KEYB_TILDE_005a8a78,~i - 1);
  local_4._0_1_ = 1;
  FUN_004028f0(local_6c,0);
  i = 0xffffffff;
  pcVar2 = s_Console_Activate_005a8a88;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,s_Console_Activate_005a8a88,~i - 1);
  puVar5 = local_4c;
  puVar4 = local_5c;
  puVar3 = local_6c;
  local_4._0_1_ = 2;
  this_val = FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(this_val,puVar3,puVar4,puVar5);
  local_4._0_1_ = 1;
  FUN_004028f0(local_6c,1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_5c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_4c,1);
  FUN_004028f0(local_6c,0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8a9c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,s_keyboard0_005a8a9c,~i - 1);
  local_4 = 3;
  FUN_004028f0(local_5c,0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_ESC_005a8aa8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,s_CM_KEYB_ESC_005a8aa8,~i - 1);
  local_4._0_1_ = 4;
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar2 = s_Console_DeActivate_005a8ab4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,s_Console_DeActivate_005a8ab4,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 5;
  this_val = FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(this_val,puVar3,puVar4,puVar5);
  local_4._0_1_ = 4;
  FUN_004028f0(local_4c,1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(local_5c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,1);
  FUN_004028f0(local_6c,0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8ac8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,s_keyboard0_005a8ac8,~i - 1);
  local_4 = 6;
  FUN_004028f0(local_5c,0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_TILDE_005a8ad4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,s_CM_KEYB_TILDE_005a8ad4,~i - 1);
  local_4._0_1_ = 7;
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar2 = s_Console_DeActivate_005a8ae4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,s_Console_DeActivate_005a8ae4,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 8;
  this_val = FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(this_val,puVar3,puVar4,puVar5);
  local_4._0_1_ = 7;
  FUN_004028f0(local_4c,1);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(local_5c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,1);
  FUN_004028f0(local_6c,0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8af8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,s_keyboard0_005a8af8,~i - 1);
  local_4 = 9;
  FUN_004028f0(local_5c,0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_TAB_005a8b04;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,s_CM_KEYB_TAB_005a8b04,~i - 1);
  local_4._0_1_ = 10;
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar2 = s_Console_Tab_005a8b10;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,s_Console_Tab_005a8b10,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 0xb;
  this_val = FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(this_val,puVar3,puVar4,puVar5);
  local_4._0_1_ = 10;
  FUN_004028f0(local_4c,1);
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004028f0(local_5c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,1);
  FUN_004028f0(local_6c,0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8b1c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,s_keyboard0_005a8b1c,~i - 1);
  local_4 = 0xc;
  FUN_004028f0(local_5c,0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_BACK_005a8b28;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,s_CM_KEYB_BACK_005a8b28,~i - 1);
  local_4._0_1_ = 0xd;
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar2 = s_Console_Back_005a8b38;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,s_Console_Back_005a8b38,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 0xe;
  this_val = FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(this_val,puVar3,puVar4,puVar5);
  local_4._0_1_ = 0xd;
  FUN_004028f0(local_4c,1);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0(local_5c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,1);
  FUN_004028f0(local_6c,0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8b48;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,s_keyboard0_005a8b48,~i - 1);
  local_4 = 0xf;
  FUN_004028f0(local_5c,0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_RETURN_005a8b54;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,s_CM_KEYB_RETURN_005a8b54,~i - 1);
  local_4._0_1_ = 0x10;
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar2 = s_Console_Return_005a8b64;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,s_Console_Return_005a8b64,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 0x11;
  this_val = FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(this_val,puVar3,puVar4,puVar5);
  local_4._0_1_ = 0x10;
  FUN_004028f0(local_4c,1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004028f0(local_5c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,1);
  FUN_004028f0(local_6c,0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8b74;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,s_keyboard0_005a8b74,~i - 1);
  local_4 = 0x12;
  FUN_004028f0(local_5c,0);
  i = 0xffffffff;
  pcVar2 = &DAT_005a8b80;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,&DAT_005a8b80,~i - 1);
  local_4._0_1_ = 0x13;
  FUN_004028f0(local_4c,0);
  i = 0xffffffff;
  pcVar2 = s_Console_Up_005a8b8c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,s_Console_Up_005a8b8c,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 0x14;
  this_val = FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(this_val,puVar3,puVar4,puVar5);
  local_4._0_1_ = 0x13;
  FUN_004028f0(local_4c,1);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_004028f0(local_5c,1);
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,1);
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8b98;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,s_keyboard0_005a8b98,~i - 1);
  local_4 = 0x15;
  FUN_004028f0(local_2c,0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_DOWN_005a8ba4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,s_CM_KEYB_DOWN_005a8ba4,~i - 1);
  local_4._0_1_ = 0x16;
  FUN_004028f0(local_3c,0);
  i = 0xffffffff;
  pcVar2 = s_Console_Down_005a8bb4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,s_Console_Down_005a8bb4,~i - 1);
  local_4._0_1_ = 0x17;
  puVar5 = local_1c;
  puVar4 = local_2c;
  puVar3 = local_3c;
  this_val = FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(this_val,puVar3,puVar4,puVar5);
  local_4._0_1_ = 0x16;
  FUN_004028f0(local_3c,1);
  local_4 = CONCAT31(local_4._1_3_,0x15);
  FUN_004028f0(local_2c,1);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00470ea0 FUN_00470ea0 ==== */

void __thiscall FUN_00470ea0(void *this)

{
  char cVar1;
  undefined4 this_val;
  uint i;
  char *pcVar2;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0056b245;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8bc4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_8 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  FUN_00402940(local_28,s_keyboard0_005a8bc4,~i - 1);
  local_8._0_1_ = 1;
  this_val = FUN_004ea0c0();
  this_val = FUN_004eb7d0(this_val,local_28);
  *(undefined4 *)((int)this + 0x2c) = this_val;
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_24 != 0) {
    cVar1 = *(char *)(local_24 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_24 + -1));
    }
    else {
      *(char *)(local_24 + -1) = cVar1 + -1;
    }
  }
  FUN_004706d0();
  ExceptionList = local_10;
  return;
}


/* ==== 00470fb0 FUN_00470fb0 ==== */

undefined4 __thiscall FUN_00470fb0(void *this)

{
  if (*(int *)((int)this + 0x2c) == 0) {
    FUN_004c4150(s__s___d__Console__Keyboard_device_005a8bf4,
                 s_C__Work_A2IV_Game_prog_console_c_005a8bd0,0x4e);
  }
  return *(undefined4 *)((int)this + 0x2c);
}


/* ==== 00470fe0 FUN_00470fe0 ==== */

void __thiscall FUN_00470fe0(void *this)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined4 this_val;
  uint i;
  uint j;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b267;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,0);
  i = 0xffffffff;
  pcVar5 = s_Console_Activate_005a8c28;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  i = ~i - 1;
  cVar3 = FUN_00402a00(local_2c,i,1);
  if (cVar3 != '\0') {
    pcVar5 = s_Console_Activate_005a8c28;
    pcVar6 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_28[i] = '\0';
    local_24 = i;
  }
  puVar8 = local_30;
  puVar7 = local_2c;
  local_4 = 0;
  this_val = FUN_004ea0c0(puVar7,puVar8);
  FUN_004eadd0(this_val,puVar7,puVar8);
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,1);
  if (DAT_006fb950 != 0) {
    if (*(char *)((int)this + 0x28) == '\0') {
      FUN_004028f0(local_1c,0);
      i = 0xffffffff;
      pcVar5 = s_Console_Activate_005a8c50;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      i = ~i - 1;
      cVar3 = FUN_00402a00(local_1c,i,1);
      if (cVar3 != '\0') {
        pcVar5 = s_Console_Activate_005a8c50;
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)local_18 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          local_18 = local_18 + 4;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *local_18 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          local_18 = local_18 + 1;
        }
        FUN_004029e0(local_1c,i);
      }
      puVar8 = local_1c;
      local_4 = 2;
      FUN_004ea0c0(puVar8);
      cVar3 = FUN_004eaf80(puVar8);
      local_4 = 0xffffffff;
      FUN_004028f0(local_1c,1);
      if (cVar3 != '\0') {
        *(undefined1 *)((int)this + 0x28) = 1;
      }
    }
    else {
      i = 0xffffffff;
      local_28 = (char *)0x0;
      pcVar5 = s_Console_DeActivate_005a8c3c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      local_24 = 0;
      local_20 = 0;
      FUN_00402940(local_2c,s_Console_DeActivate_005a8c3c,~i - 1);
      puVar8 = local_2c;
      local_4 = 1;
      FUN_004ea0c0(puVar8);
      cVar3 = FUN_004eaf80(puVar8);
      local_4 = 0xffffffff;
      if (local_28 != (char *)0x0) {
        cVar1 = *(char *)((int)local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)local_28 + -1));
        }
        else {
          *(char *)((int)local_28 + -1) = cVar1 + -1;
        }
      }
      if (cVar3 != '\0') {
        *(undefined1 *)((int)this + 0x28) = 0;
        FUN_00402c30((int)this + 0x14);
        iVar2 = *(int *)((int)this + 0x1c);
        iVar4 = -1;
        if (iVar2 != -1) {
          iVar4 = iVar2;
        }
        if (iVar4 != 0) {
          FUN_005580e0(*(int *)((int)this + 0x18),*(int *)((int)this + 0x18) + iVar4,iVar2 - iVar4);
          iVar4 = *(int *)((int)this + 0x1c) - iVar4;
          cVar3 = FUN_00402a00((int)this + 0x14,iVar4,0);
          if (cVar3 != '\0') {
            *(int *)((int)this + 0x1c) = iVar4;
            *(undefined1 *)(*(int *)((int)this + 0x18) + iVar4) = 0;
            ExceptionList = local_c;
            return;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00471240 FUN_00471240 ==== */

void __thiscall FUN_00471240(void *this)

{
  char cVar1;
  undefined1 this_val_2;
  byte bVar2;
  int iVar3;
  undefined4 this_val;
  uint uVar4;
  char *pcVar5;
  char local_11;
  int i;
  void *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  int local_4;
  
  local_c = this;
  iVar3 = FUN_00470fb0();
  local_4 = *(int *)(iVar3 + 0x8c);
  i = 0;
  if (0 < local_4) {
    do {
      pcVar5 = &local_11;
      iVar3 = i;
      this_val = FUN_00470fb0(this,i,pcVar5);
      this_val_2 = FUN_004ed920(this_val,iVar3,pcVar5);
      _local_8 = CONCAT31(uStack_7,this_val_2);
      if (((local_11 == '\0') && (bVar2 = FUN_00559576(this_val_2,this_val_2), 0x1f < bVar2)) &&
         (bVar2 < 0x7f)) {
        if (-*(int *)((int)this + 0x1c) - 1U < 2) {
          FUN_0054b1b4();
        }
        uVar4 = *(int *)((int)this + 0x1c) + 1;
        if (0xfffffffd < uVar4) {
          FUN_0054b1b4();
        }
        iVar3 = *(int *)((int)this + 0x18);
        if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
          if (uVar4 != 0) {
            if (*(uint *)((int)this + 0x20) < uVar4) goto LAB_00471320;
            goto LAB_00471328;
          }
          if (iVar3 != 0) {
            FUN_004029e0((int)this + 0x14,0);
          }
        }
        else if (uVar4 == 0) {
          *(char *)(iVar3 + -1) = cVar1 + -1;
          *(undefined4 *)((int)this + 0x18) = 0;
          *(undefined4 *)((int)this + 0x1c) = 0;
          *(undefined4 *)((int)this + 0x20) = 0;
        }
        else {
LAB_00471320:
          FUN_00402b20((int)this + 0x14,uVar4);
LAB_00471328:
          *(byte *)(*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x18)) = bVar2;
          *(uint *)((int)this + 0x1c) = uVar4;
          *(undefined1 *)(uVar4 + *(int *)((int)this + 0x18)) = 0;
        }
      }
      i = i + 1;
      this = local_c;
    } while (i < local_4);
  }
  return;
}


/* ==== 00471360 FUN_00471360 ==== */

void __thiscall FUN_00471360(void *this,undefined1 *param_2)

{
  int *piVar1;
  undefined4 *this_00;
  int *operator_new_result;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)((int)this + 0xc);
  piVar4 = (int *)piVar1[1];
  operator_new_result = operator_new(0x18);
  piVar3 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar3 = operator_new_result;
  }
  *operator_new_result = (int)piVar3;
  if (piVar4 == (int *)0x0) {
    piVar4 = operator_new_result;
  }
  operator_new_result[1] = (int)piVar4;
  piVar1[1] = (int)operator_new_result;
  this_00 = (undefined4 *)operator_new_result[1];
  *this_00 = operator_new_result;
  FUN_00468770(this_00,(undefined1 *)(operator_new_result + 2),param_2);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  iVar2 = (*(code *)**(undefined4 **)((int)this + 4))();
  *(int *)((int)this + 0x24) = iVar2 + -1;
  return;
}


/* ==== 004713c0 FUN_004713c0 ==== */

void __thiscall FUN_004713c0(void *this)

{
  char cVar1;
  char *str;
  int iVar2;
  uint i;
  uint j;
  int iVar3;
  char *pcVar4;
  float10 fVar5;
  undefined1 local_234 [4];
  char *local_230;
  int *local_224 [2];
  undefined1 local_21c [4];
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  char local_20c [256];
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  int this_val;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b2a8;
  pvStack_c = ExceptionList;
  str = *(char **)((int)this + 0x18);
  this_val = (int)this + 0x14;
  if (str == (char *)0x0) {
    str = "";
  }
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00558d27(str,s__s__f_005a8c64);
  if (iVar2 == 2) {
    FUN_004028f0(local_234);
    i = 0xffffffff;
    str = local_20c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *str;
      str = str + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_234,i,1);
    if (cVar1 != '\0') {
      str = local_20c;
      pcVar4 = local_230;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)str;
        str = str + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar4 = *str;
        str = str + 1;
        pcVar4 = pcVar4 + 1;
      }
      FUN_004029e0(local_234);
    }
    local_4 = 0;
    cVar1 = FUN_00473430((int)this + 0x30,local_234,local_224);
    local_4 = 0xffffffff;
    FUN_004028f0(local_234);
    if (cVar1 == '\0') {
      FUN_004028f0(local_234);
      i = 0xffffffff;
      str = s_Unknown_RVar__005a8c80;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *str;
        str = str + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(local_234,i,1);
      if (cVar1 != '\0') {
        str = s_Unknown_RVar__005a8c80;
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)local_230 = *(undefined4 *)str;
          str = str + 4;
          local_230 = local_230 + 4;
        }
        for (i = i & 3; i != 0; i = i - 1) {
          *local_230 = *str;
          str = str + 1;
          local_230 = local_230 + 1;
        }
        FUN_004029e0(local_234);
      }
      local_4 = 2;
      FUN_00471360(this);
      local_4 = 0xffffffff;
      FUN_004028f0(local_234);
    }
    else {
      (**(code **)(*local_224[0] + 8))();
      FUN_0049df90(local_234,s__>__s_set_to__f_005a8c6c);
      local_4 = 1;
      FUN_00471360(this);
      local_4 = 0xffffffff;
      FUN_004028f0(local_234);
    }
  }
  else if (iVar2 < 3) {
    cVar1 = FUN_00473430((int)this + 0x30,this_val,local_224);
    if (cVar1 == '\0') {
      FUN_0049df90(local_21c,s_Unknown_command___s___005a8cac);
      local_4 = 4;
      FUN_00471360(this);
      local_4 = 0xffffffff;
      if (local_218 != 0) {
        cVar1 = *(char *)(local_218 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339();
        }
        else {
          *(char *)(local_218 + -1) = cVar1 + -1;
        }
      }
      local_218 = 0;
      local_214 = 0;
      local_210 = 0;
    }
    else {
      fVar5 = (float10)(**(code **)(*local_224[0] + 4))();
      FUN_005587a3(acStack_10c,s__f_005a8ca4,(double)fVar5);
      i = 0xffffffff;
      str = acStack_10c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *str;
        str = str + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      if (-*(int *)((int)this + 0x1c) - 1U <= i) {
        FUN_0054b1b4();
      }
      if ((i != 0) &&
         (cVar1 = FUN_00402a00(this_val,*(int *)((int)this + 0x1c) + i,0), cVar1 != '\0')) {
        str = acStack_10c;
        pcVar4 = (char *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x1c));
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)str;
          str = str + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (i = i & 3; i != 0; i = i - 1) {
          *pcVar4 = *str;
          str = str + 1;
          pcVar4 = pcVar4 + 1;
        }
        FUN_004029e0(this_val);
      }
      FUN_00471360(this);
    }
  }
  else {
    FUN_004028f0(local_234);
    i = 0xffffffff;
    str = s_Too_many_arguments__005a8c90;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *str;
      str = str + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_234,i,1);
    if (cVar1 != '\0') {
      str = s_Too_many_arguments__005a8c90;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)local_230 = *(undefined4 *)str;
        str = str + 4;
        local_230 = local_230 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *local_230 = *str;
        str = str + 1;
        local_230 = local_230 + 1;
      }
      FUN_004029e0(local_234);
    }
    local_4 = 3;
    FUN_00471360(this);
    local_4 = 0xffffffff;
    FUN_004028f0(local_234);
  }
  str = *(char **)((int)this + 0x18);
  if (((str != (char *)0x0) && (str[-1] != '\0')) && (str[-1] != -1)) {
    FUN_004028f0(this_val);
    i = 0xffffffff;
    pcVar4 = str;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(this_val,str,~i - 1);
  }
  iVar2 = *(int *)((int)this + 0x1c);
  iVar3 = -1;
  if (iVar2 != -1) {
    iVar3 = iVar2;
  }
  if (iVar3 != 0) {
    FUN_005580e0(*(int *)((int)this + 0x18),*(int *)((int)this + 0x18) + iVar3,iVar2 - iVar3);
    iVar3 = *(int *)((int)this + 0x1c) - iVar3;
    cVar1 = FUN_00402a00(this_val);
    if (cVar1 != '\0') {
      *(int *)((int)this + 0x1c) = iVar3;
      *(undefined1 *)(*(int *)((int)this + 0x18) + iVar3) = 0;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004717d0 FUN_004717d0 ==== */

void __thiscall FUN_004717d0(void *this)

{
  char cVar1;
  undefined4 uVar2;
  int j;
  int *piVar3;
  uint i;
  uint m;
  char *pcVar4;
  int k;
  char *pcVar5;
  undefined1 *puVar6;
  int this_val;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 local_1c [4];
  char *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b2da;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar4 = s_Console_Back_005a8cc4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,s_Console_Back_005a8cc4,~i - 1);
  puVar6 = local_1c;
  local_4 = 0;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,1);
  if ((cVar1 != '\0') && (*(int *)((int)this + 0x1c) != 0)) {
    j = (int)this + 0x14;
    FUN_00471de0(j);
    if (*(int *)((int)this + 0x18) == 0) {
      k = 0;
    }
    else {
      k = *(int *)((int)this + 0x1c) + *(int *)((int)this + 0x18);
    }
    k = k + -1;
    FUN_00471de0(j);
    if (k != 0) {
      k = k - *(int *)((int)this + 0x18);
    }
    FUN_0040f800(j,k,1);
  }
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar4 = s_Console_Tab_005a8cd4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Console_Tab_005a8cd4;
    pcVar5 = local_18;
    for (m = i >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = i & 3; m != 0; m = m - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  puVar6 = local_1c;
  local_4 = 1;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00473430((int)this + 0x30,(int)this + 0x14,&this_val);
    if (cVar1 != '\0') {
      uVar2 = FUN_00472920(this_val);
      FUN_004093c0((int)this + 0x14,uVar2,0,0xffffffff);
    }
  }
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar4 = s_Console_Return_005a8ce0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Console_Return_005a8ce0;
    pcVar5 = local_18;
    for (m = i >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = i & 3; m != 0; m = m - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  puVar6 = local_1c;
  local_4 = 2;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,1);
  if (cVar1 != '\0') {
    FUN_004713c0(this);
  }
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar4 = s_Console_Up_005a8cf0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Console_Up_005a8cf0;
    pcVar5 = local_18;
    for (m = i >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (m = i & 3; m != 0; m = m - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  puVar6 = local_1c;
  local_4 = 3;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,1);
  if (cVar1 != '\0') {
    j = *(int *)((int)this + 0x24) + -1;
    *(int *)((int)this + 0x24) = j;
    if (j < 0) {
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    j = (*(code *)**(undefined4 **)((int)this + 4))();
    if (j <= *(int *)((int)this + 0x24)) {
      j = (*(code *)**(undefined4 **)((int)this + 4))();
      *(int *)((int)this + 0x24) = j + -1;
    }
    j = *(int *)((int)this + 0x24);
    piVar3 = (int *)FUN_00468530((int)this + 8,auStack_28);
    this_val = *piVar3;
    if (0 < j) {
      do {
        FUN_00448fd0(&this_val,auStack_24,0);
        j = j + -1;
      } while (j != 0);
    }
    FUN_004093c0((int)this + 0x14,this_val + 8,0,0xffffffff);
  }
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar4 = s_Console_Down_005a8cfc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Console_Down_005a8cfc;
    for (m = i >> 2; m != 0; m = m - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      local_18 = local_18 + 4;
    }
    for (m = i & 3; m != 0; m = m - 1) {
      *local_18 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  puVar6 = local_1c;
  local_4 = 4;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,1);
  if (cVar1 != '\0') {
    j = *(int *)((int)this + 0x24) + 1;
    *(int *)((int)this + 0x24) = j;
    if (j < 0) {
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    j = (*(code *)**(undefined4 **)((int)this + 4))();
    if (j <= *(int *)((int)this + 0x24)) {
      j = (*(code *)**(undefined4 **)((int)this + 4))();
      *(int *)((int)this + 0x24) = j + -1;
    }
    j = *(int *)((int)this + 0x24);
    iStack_2c = **(int **)((int)this + 0xc);
    if (0 < j) {
      do {
        FUN_00448fd0(&iStack_2c,auStack_20,0);
        j = j + -1;
      } while (j != 0);
    }
    FUN_004093c0((int)this + 0x14,iStack_2c + 8,0,0xffffffff);
  }
  ExceptionList = pvStack_c;
  return;
}


