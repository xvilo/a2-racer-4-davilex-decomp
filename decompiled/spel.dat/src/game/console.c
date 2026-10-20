/* spel.dat — game/console.cpp: 19 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004701d0 FUN_004701d0 ==== */

void FUN_004701d0(void)

{
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056b0ff;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_004ea0c0();
  FUN_004eb740(*in_ECX,0);
  FUN_004ea0c0();
  FUN_004eb740(in_ECX[1],0);
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

void FUN_004702c0(void)

{
  int in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056b111;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_004ea0c0();
  FUN_004eb740(*(undefined4 *)(in_ECX + 8),0);
  FUN_004ea0c0();
  FUN_004eb740(*(undefined4 *)(in_ECX + 0xc),0);
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

void FUN_00470460(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x18);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  return;
}


/* ==== 004704a0 FUN_004704a0 ==== */

void FUN_004704a0(void)

{
  int iVar1;
  char cVar2;
  void *operator_new_result;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b141;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[1] = &PTR_LAB_00576984;
  *(undefined1 *)(in_ECX + 2) = local_15;
  operator_new_result = operator_new(0x18);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  in_ECX[3] = operator_new_result;
  in_ECX[4] = 0;
  in_ECX[1] = &PTR_LAB_00576974;
  *(undefined1 *)(in_ECX + 5) = local_15;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_004730d0();
  i = 0xffffffff;
  *in_ECX = &PTR_FUN_005769e8;
  pcVar3 = s__005a8a68;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  local_4 = CONCAT31(local_4._1_3_,2);
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar3 = s__005a8a68;
    pcVar4 = (char *)in_ECX[6];
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
    in_ECX[7] = i;
    *(undefined1 *)(in_ECX[6] + i) = 0;
  }
  pcVar3 = (char *)in_ECX[6];
  if (((pcVar3 != (char *)0x0) && (pcVar3[-1] != '\0')) && (pcVar3[-1] != -1)) {
    FUN_004028f0(1);
    i = 0xffffffff;
    pcVar4 = pcVar3;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(pcVar3,~i - 1);
  }
  iVar1 = in_ECX[7];
  iVar5 = -1;
  if (iVar1 != -1) {
    iVar5 = iVar1;
  }
  if (iVar5 != 0) {
    FUN_005580e0(in_ECX[6],in_ECX[6] + iVar5,iVar1 - iVar5);
    iVar5 = in_ECX[7] - iVar5;
    cVar2 = FUN_00402a00(iVar5,0);
    if (cVar2 != '\0') {
      in_ECX[7] = iVar5;
      *(undefined1 *)(in_ECX[6] + iVar5) = 0;
    }
  }
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00470600 FUN_00470600 ==== */

void FUN_00470600(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056b161;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_005769e8;
  local_4 = 1;
  FUN_00473160();
  iVar2 = in_ECX[6];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  piVar3 = (int *)in_ECX[3];
  local_4 = 0xffffffff;
  piVar5 = (int *)*piVar3;
  while (piVar5 != piVar3) {
    piVar4 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_00471e60(0);
    FUN_0054b339(piVar5);
    in_ECX[4] = in_ECX[4] + -1;
    piVar5 = piVar4;
  }
  FUN_0054b339(in_ECX[3]);
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004706d0 FUN_004706d0 ==== */

void FUN_004706d0(void)

{
  char cVar1;
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
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8a6c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_005a8a6c,~i - 1);
  local_4 = 0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_TILDE_005a8a78;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_CM_KEYB_TILDE_005a8a78,~i - 1);
  local_4._0_1_ = 1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Console_Activate_005a8a88;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_Activate_005a8a88,~i - 1);
  puVar5 = local_4c;
  puVar4 = local_5c;
  puVar3 = local_6c;
  local_4._0_1_ = 2;
  FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(puVar3,puVar4,puVar5);
  local_4._0_1_ = 1;
  FUN_004028f0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8a9c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_005a8a9c,~i - 1);
  local_4 = 3;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_ESC_005a8aa8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_CM_KEYB_ESC_005a8aa8,~i - 1);
  local_4._0_1_ = 4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Console_DeActivate_005a8ab4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_DeActivate_005a8ab4,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 5;
  FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(puVar3,puVar4,puVar5);
  local_4._0_1_ = 4;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8ac8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_005a8ac8,~i - 1);
  local_4 = 6;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_TILDE_005a8ad4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_CM_KEYB_TILDE_005a8ad4,~i - 1);
  local_4._0_1_ = 7;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Console_DeActivate_005a8ae4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_DeActivate_005a8ae4,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 8;
  FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(puVar3,puVar4,puVar5);
  local_4._0_1_ = 7;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8af8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_005a8af8,~i - 1);
  local_4 = 9;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_TAB_005a8b04;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_CM_KEYB_TAB_005a8b04,~i - 1);
  local_4._0_1_ = 10;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Console_Tab_005a8b10;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_Tab_005a8b10,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 0xb;
  FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(puVar3,puVar4,puVar5);
  local_4._0_1_ = 10;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8b1c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_005a8b1c,~i - 1);
  local_4 = 0xc;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_BACK_005a8b28;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_CM_KEYB_BACK_005a8b28,~i - 1);
  local_4._0_1_ = 0xd;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Console_Back_005a8b38;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_Back_005a8b38,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 0xe;
  FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(puVar3,puVar4,puVar5);
  local_4._0_1_ = 0xd;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8b48;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_005a8b48,~i - 1);
  local_4 = 0xf;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_RETURN_005a8b54;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_CM_KEYB_RETURN_005a8b54,~i - 1);
  local_4._0_1_ = 0x10;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Console_Return_005a8b64;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_Return_005a8b64,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 0x11;
  FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(puVar3,puVar4,puVar5);
  local_4._0_1_ = 0x10;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8b74;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_005a8b74,~i - 1);
  local_4 = 0x12;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = &DAT_005a8b80;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_005a8b80,~i - 1);
  local_4._0_1_ = 0x13;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Console_Up_005a8b8c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_Up_005a8b8c,~i - 1);
  puVar5 = local_6c;
  puVar4 = local_5c;
  puVar3 = local_4c;
  local_4._0_1_ = 0x14;
  FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(puVar3,puVar4,puVar5);
  local_4._0_1_ = 0x13;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_005a8b98;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_005a8b98,~i - 1);
  local_4 = 0x15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_CM_KEYB_DOWN_005a8ba4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_CM_KEYB_DOWN_005a8ba4,~i - 1);
  local_4._0_1_ = 0x16;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Console_Down_005a8bb4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_Down_005a8bb4,~i - 1);
  local_4._0_1_ = 0x17;
  puVar5 = local_1c;
  puVar4 = local_2c;
  puVar3 = local_3c;
  FUN_004ea0c0(puVar3,puVar4,puVar5);
  FUN_004eaaa0(puVar3,puVar4,puVar5);
  local_4._0_1_ = 0x16;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,0x15);
  FUN_004028f0(1);
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

void FUN_00470ea0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  char *pcVar3;
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
  pcVar3 = s_keyboard0_005a8bc4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_8 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  FUN_00402940(s_keyboard0_005a8bc4,~i - 1);
  local_8._0_1_ = 1;
  FUN_004ea0c0();
  uVar2 = FUN_004eb7d0(local_28);
  *(undefined4 *)(in_ECX + 0x2c) = uVar2;
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

undefined4 FUN_00470fb0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c) == 0) {
    FUN_004c4150(s__s___d__Console__Keyboard_device_005a8bf4,
                 s_C__Work_A2IV_Game_prog_console_c_005a8bd0,0x4e);
  }
  return *(undefined4 *)(in_ECX + 0x2c);
}


/* ==== 00470fe0 FUN_00470fe0 ==== */

void FUN_00470fe0(void)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
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
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Console_Activate_005a8c28;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  i = ~i - 1;
  cVar3 = FUN_00402a00(i,1);
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
  FUN_004ea0c0(puVar7,puVar8);
  FUN_004eadd0(puVar7,puVar8);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (DAT_006fb950 != 0) {
    if (*(char *)(in_ECX + 0x28) == '\0') {
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar5 = s_Console_Activate_005a8c50;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      i = ~i - 1;
      cVar3 = FUN_00402a00(i,1);
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
        FUN_004029e0(i);
      }
      puVar8 = local_1c;
      local_4 = 2;
      FUN_004ea0c0(puVar8);
      cVar3 = FUN_004eaf80(puVar8);
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      if (cVar3 != '\0') {
        *(undefined1 *)(in_ECX + 0x28) = 1;
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
      FUN_00402940(s_Console_DeActivate_005a8c3c,~i - 1);
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
        *(undefined1 *)(in_ECX + 0x28) = 0;
        FUN_00402c30();
        iVar2 = *(int *)(in_ECX + 0x1c);
        iVar4 = -1;
        if (iVar2 != -1) {
          iVar4 = iVar2;
        }
        if (iVar4 != 0) {
          FUN_005580e0(*(int *)(in_ECX + 0x18),*(int *)(in_ECX + 0x18) + iVar4,iVar2 - iVar4);
          iVar4 = *(int *)(in_ECX + 0x1c) - iVar4;
          cVar3 = FUN_00402a00(iVar4,0);
          if (cVar3 != '\0') {
            *(int *)(in_ECX + 0x1c) = iVar4;
            *(undefined1 *)(*(int *)(in_ECX + 0x18) + iVar4) = 0;
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

void FUN_00471240(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  char *pcVar6;
  char local_11;
  int i;
  int local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  int local_4;
  
  local_c = in_ECX;
  iVar4 = FUN_00470fb0();
  local_4 = *(int *)(iVar4 + 0x8c);
  i = 0;
  if (0 < local_4) {
    do {
      pcVar6 = &local_11;
      iVar4 = i;
      FUN_00470fb0(i,pcVar6);
      uVar2 = FUN_004ed920(iVar4,pcVar6);
      _local_8 = CONCAT31(uStack_7,uVar2);
      if (((local_11 == '\0') && (bVar3 = FUN_00559576(uVar2), 0x1f < bVar3)) && (bVar3 < 0x7f)) {
        if (-*(int *)(in_ECX + 0x1c) - 1U < 2) {
          FUN_0054b1b4();
        }
        uVar5 = *(int *)(in_ECX + 0x1c) + 1;
        if (0xfffffffd < uVar5) {
          FUN_0054b1b4();
        }
        iVar4 = *(int *)(in_ECX + 0x18);
        if (((iVar4 == 0) || (cVar1 = *(char *)(iVar4 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
          if (uVar5 != 0) {
            if (*(uint *)(in_ECX + 0x20) < uVar5) goto LAB_00471320;
            goto LAB_00471328;
          }
          if (iVar4 != 0) {
            FUN_004029e0(0);
          }
        }
        else if (uVar5 == 0) {
          *(char *)(iVar4 + -1) = cVar1 + -1;
          *(undefined4 *)(in_ECX + 0x18) = 0;
          *(undefined4 *)(in_ECX + 0x1c) = 0;
          *(undefined4 *)(in_ECX + 0x20) = 0;
        }
        else {
LAB_00471320:
          FUN_00402b20(uVar5);
LAB_00471328:
          *(byte *)(*(int *)(in_ECX + 0x1c) + *(int *)(in_ECX + 0x18)) = bVar3;
          *(uint *)(in_ECX + 0x1c) = uVar5;
          *(undefined1 *)(uVar5 + *(int *)(in_ECX + 0x18)) = 0;
        }
      }
      i = i + 1;
      in_ECX = local_c;
    } while (i < local_4);
  }
  return;
}


/* ==== 00471360 FUN_00471360 ==== */

void FUN_00471360(undefined4 param_1)

{
  int *piVar1;
  int *operator_new_result;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(in_ECX + 0xc);
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
  *(int **)operator_new_result[1] = operator_new_result;
  FUN_00468770(operator_new_result + 2,param_1);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 4))();
  *(int *)(in_ECX + 0x24) = iVar2 + -1;
  return;
}


/* ==== 004713c0 FUN_004713c0 ==== */

void FUN_004713c0(void)

{
  char cVar1;
  char *str;
  int iVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint i;
  uint j;
  int iVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_234 [4];
  char *local_230;
  int *local_224;
  float local_220;
  undefined1 local_21c [4];
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  char local_20c [256];
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b2a8;
  pvStack_c = ExceptionList;
  str = *(char **)(in_ECX + 0x18);
  if (str == (char *)0x0) {
    str = "";
  }
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00558d27(str,s__s__f_005a8c64);
  if (iVar2 == 2) {
    FUN_004028f0();
    i = 0xffffffff;
    str = local_20c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *str;
      str = str + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      str = local_20c;
      pcVar5 = local_230;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)str;
        str = str + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar5 = *str;
        str = str + 1;
        pcVar5 = pcVar5 + 1;
      }
      FUN_004029e0();
    }
    local_4 = 0;
    cVar1 = FUN_00473430(local_234,&local_224);
    local_4 = 0xffffffff;
    FUN_004028f0();
    if (cVar1 == '\0') {
      FUN_004028f0();
      i = 0xffffffff;
      str = s_Unknown_RVar__005a8c80;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *str;
        str = str + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(i,1);
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
        FUN_004029e0();
      }
      local_4 = 2;
      FUN_00471360();
      local_4 = 0xffffffff;
      FUN_004028f0();
    }
    else {
      (**(code **)(*local_224 + 8))();
      FUN_0049df90(local_234,s__>__s_set_to__f_005a8c6c,local_20c,(double)local_220);
      local_4 = 1;
      FUN_00471360();
      local_4 = 0xffffffff;
      FUN_004028f0();
    }
  }
  else if (iVar2 < 3) {
    cVar1 = FUN_00473430(in_ECX + 0x14,&local_224);
    if (cVar1 == '\0') {
      puVar3 = *(undefined1 **)(in_ECX + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      FUN_0049df90(local_21c,s_Unknown_command___s___005a8cac,puVar3);
      local_4 = 4;
      FUN_00471360();
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
      fVar6 = (float10)(**(code **)(*local_224 + 4))();
      FUN_005587a3(acStack_10c,s__f_005a8ca4,(double)fVar6);
      i = 0xffffffff;
      str = acStack_10c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *str;
        str = str + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      if (-*(int *)(in_ECX + 0x1c) - 1U <= i) {
        FUN_0054b1b4();
      }
      if ((i != 0) && (cVar1 = FUN_00402a00(*(int *)(in_ECX + 0x1c) + i,0), cVar1 != '\0')) {
        str = acStack_10c;
        pcVar5 = (char *)(*(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x1c));
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)str;
          str = str + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (i = i & 3; i != 0; i = i - 1) {
          *pcVar5 = *str;
          str = str + 1;
          pcVar5 = pcVar5 + 1;
        }
        FUN_004029e0();
      }
      FUN_00471360();
    }
  }
  else {
    FUN_004028f0();
    i = 0xffffffff;
    str = s_Too_many_arguments__005a8c90;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *str;
      str = str + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
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
      FUN_004029e0();
    }
    local_4 = 3;
    FUN_00471360();
    local_4 = 0xffffffff;
    FUN_004028f0();
  }
  str = *(char **)(in_ECX + 0x18);
  if (((str != (char *)0x0) && (str[-1] != '\0')) && (str[-1] != -1)) {
    FUN_004028f0();
    i = 0xffffffff;
    pcVar5 = str;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(str,~i - 1);
  }
  iVar2 = *(int *)(in_ECX + 0x1c);
  iVar4 = -1;
  if (iVar2 != -1) {
    iVar4 = iVar2;
  }
  if (iVar4 != 0) {
    FUN_005580e0(*(int *)(in_ECX + 0x18),*(int *)(in_ECX + 0x18) + iVar4,iVar2 - iVar4);
    iVar4 = *(int *)(in_ECX + 0x1c) - iVar4;
    cVar1 = FUN_00402a00();
    if (cVar1 != '\0') {
      *(int *)(in_ECX + 0x1c) = iVar4;
      *(undefined1 *)(*(int *)(in_ECX + 0x18) + iVar4) = 0;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004717d0 FUN_004717d0 ==== */

void FUN_004717d0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  uint i;
  uint k;
  char *pcVar4;
  int j;
  char *pcVar5;
  undefined1 *puVar6;
  int local_30;
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
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Console_Back_005a8cc4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Console_Back_005a8cc4,~i - 1);
  puVar6 = local_1c;
  local_4 = 0;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if ((cVar1 != '\0') && (*(int *)(in_ECX + 0x1c) != 0)) {
    FUN_00471de0();
    if (*(int *)(in_ECX + 0x18) == 0) {
      j = 0;
    }
    else {
      j = *(int *)(in_ECX + 0x1c) + *(int *)(in_ECX + 0x18);
    }
    j = j + -1;
    FUN_00471de0();
    if (j != 0) {
      j = j - *(int *)(in_ECX + 0x18);
    }
    FUN_0040f800(j,1);
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Console_Tab_005a8cd4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Console_Tab_005a8cd4;
    pcVar5 = local_18;
    for (k = i >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (k = i & 3; k != 0; k = k - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_004029e0(i);
  }
  puVar6 = local_1c;
  local_4 = 1;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if ((cVar1 != '\0') && (cVar1 = FUN_00473430(in_ECX + 0x14,&local_30), cVar1 != '\0')) {
    uVar2 = FUN_00472920();
    FUN_004093c0(uVar2,0,0xffffffff);
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Console_Return_005a8ce0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Console_Return_005a8ce0;
    pcVar5 = local_18;
    for (k = i >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (k = i & 3; k != 0; k = k - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_004029e0(i);
  }
  puVar6 = local_1c;
  local_4 = 2;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar1 != '\0') {
    FUN_004713c0();
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Console_Up_005a8cf0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Console_Up_005a8cf0;
    pcVar5 = local_18;
    for (k = i >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (k = i & 3; k != 0; k = k - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_004029e0(i);
  }
  puVar6 = local_1c;
  local_4 = 3;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar1 != '\0') {
    j = *(int *)(in_ECX + 0x24) + -1;
    *(int *)(in_ECX + 0x24) = j;
    if (j < 0) {
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
    j = (*(code *)**(undefined4 **)(in_ECX + 4))();
    if (j <= *(int *)(in_ECX + 0x24)) {
      j = (*(code *)**(undefined4 **)(in_ECX + 4))();
      *(int *)(in_ECX + 0x24) = j + -1;
    }
    j = *(int *)(in_ECX + 0x24);
    piVar3 = (int *)FUN_00468530(auStack_28);
    local_30 = *piVar3;
    if (0 < j) {
      do {
        FUN_00448fd0(auStack_24,0);
        j = j + -1;
      } while (j != 0);
    }
    FUN_004093c0(local_30 + 8,0,0xffffffff);
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Console_Down_005a8cfc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Console_Down_005a8cfc;
    for (k = i >> 2; k != 0; k = k - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      local_18 = local_18 + 4;
    }
    for (k = i & 3; k != 0; k = k - 1) {
      *local_18 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0(i);
  }
  puVar6 = local_1c;
  local_4 = 4;
  FUN_004ea0c0(puVar6);
  cVar1 = FUN_004eaf50(puVar6);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (cVar1 != '\0') {
    j = *(int *)(in_ECX + 0x24) + 1;
    *(int *)(in_ECX + 0x24) = j;
    if (j < 0) {
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
    j = (*(code *)**(undefined4 **)(in_ECX + 4))();
    if (j <= *(int *)(in_ECX + 0x24)) {
      j = (*(code *)**(undefined4 **)(in_ECX + 4))();
      *(int *)(in_ECX + 0x24) = j + -1;
    }
    j = *(int *)(in_ECX + 0x24);
    iStack_2c = **(int **)(in_ECX + 0xc);
    if (0 < j) {
      do {
        FUN_00448fd0(auStack_20,0);
        j = j + -1;
      } while (j != 0);
    }
    FUN_004093c0(iStack_2c + 8,0,0xffffffff);
  }
  ExceptionList = pvStack_c;
  return;
}


