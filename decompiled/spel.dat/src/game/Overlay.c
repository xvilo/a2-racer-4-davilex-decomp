/* spel.dat — game/Overlay.cpp: 17 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00487e70 FUN_00487e70 ==== */

void FUN_00487e70(void)

{
  FUN_00487ea0();
  return;
}


/* ==== 00487e80 FUN_00487e80 ==== */

void FUN_00487e80(void)

{
  FUN_005584e0(&LAB_00487e90);
  return;
}


/* ==== 00487ea0 FUN_00487ea0 ==== */

void FUN_00487ea0(void)

{
  undefined1 *operator_new_result;
  int in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d4a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00483ed0();
  local_4 = 0;
  *(undefined ***)(in_ECX + 0x8c) = &PTR_LAB_00576e98;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_11;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)(in_ECX + 0x90) = operator_new_result;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00487f20 FUN_00487f20 ==== */

void FUN_00487f20(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_2c [4];
  char *local_28;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056d4ca;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_2c[0] = param_1._3_1_;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_004028f0(0);
  *(undefined4 *)(in_ECX + 0x94) = param_1;
  local_8 = 1;
  FUN_004840c0();
  FUN_00485d20(DAT_006fb8d0 != 0);
  FUN_00485d40(DAT_006fb940 != 0);
  switch(DAT_006fba5c) {
  case 0:
    i = 0xffffffff;
    pcVar2 = s_overlay0_ini_005ab3c4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay0_ini_005ab3c4;
    break;
  case 1:
    i = 0xffffffff;
    pcVar2 = s_overlay1_ini_005ab3d4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay1_ini_005ab3d4;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    goto LAB_00488181;
  case 2:
    i = 0xffffffff;
    pcVar2 = s_overlay2_ini_005ab3e4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay2_ini_005ab3e4;
    break;
  case 3:
    i = 0xffffffff;
    pcVar2 = s_overlay3_ini_005ab3f4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay3_ini_005ab3f4;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    goto LAB_00488181;
  case 4:
    i = 0xffffffff;
    pcVar2 = s_overlay4_ini_005ab404;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay4_ini_005ab404;
    break;
  case 5:
    i = 0xffffffff;
    pcVar2 = s_overlay5_ini_005ab414;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay5_ini_005ab414;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    goto LAB_00488181;
  case 6:
    i = 0xffffffff;
    pcVar2 = s_overlay6_ini_005ab424;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay6_ini_005ab424;
    break;
  case 7:
    i = 0xffffffff;
    pcVar2 = s_overlay7_ini_005ab434;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay7_ini_005ab434;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    goto LAB_00488181;
  default:
    i = 0xffffffff;
    pcVar2 = s_overlay5_ini_005ab444;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') goto LAB_0048818f;
    pcVar2 = s_overlay5_ini_005ab444;
  }
  pcVar3 = local_28;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
LAB_00488181:
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  FUN_004029e0(i);
LAB_0048818f:
  FUN_0047ebb0(local_18,local_2c);
  local_8._0_1_ = 2;
  FUN_0047ed10();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004028f0(1);
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_10;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00488260 FUN_00488260 ==== */

void FUN_00488260(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056d4d4;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00488420();
  ExceptionList = local_10;
  return;
}


/* ==== 004882e0 FUN_004882e0 ==== */

void FUN_004882e0(void)

{
  return;
}


/* ==== 004882f0 FUN_004882f0 ==== */

void FUN_004882f0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056d4de;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00488ef0();
  FUN_00484fc0();
  ExceptionList = local_10;
  return;
}


/* ==== 00488380 FUN_00488380 ==== */

void FUN_00488380(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056d4e8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00488770();
  FUN_004888f0();
  FUN_00488be0();
  FUN_00488ec0();
  FUN_00488d50();
  ExceptionList = local_10;
  return;
}


/* ==== 00488420 FUN_00488420 ==== */

void FUN_00488420(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint j;
  int i;
  char *pcVar4;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056d502;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (*(code *)**(undefined4 **)(in_ECX + 0x8c))();
  i = 0;
  if (0 < iVar3) {
    do {
      iStack_18 = 0;
      j = 0xffffffff;
      uStack_14 = 0;
      piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0x90) + 4) + i * 4);
      pcVar4 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab580;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uStack_10 = 0;
      FUN_00402940(s_C__Work_A2IV_Game_prog_Overlay_c_005ab580,~j - 1);
      j = 0xffffffff;
      uStack_4 = 0;
      pcVar4 = s_Invalid_element_in_element_array_005ab5a4;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      FUN_00402940(s_Invalid_element_in_element_array_005ab5a4,~j - 1);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_00487bc0(piVar2,auStack_2c,auStack_1c,0xd2);
      if (iStack_28 != 0) {
        cVar1 = *(char *)(iStack_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(iStack_28 + -1));
        }
        else {
          *(char *)(iStack_28 + -1) = cVar1 + -1;
        }
      }
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_4 = 0xffffffff;
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      (**(code **)(*piVar2 + 8))();
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)(1);
      }
      i = i + 1;
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x90) + 4) + -4 + i * 4) = 0;
    } while (i < iVar3);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004885b0 FUN_004885b0 ==== */

void FUN_004885b0(void)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_48 [4];
  char *local_44;
  uint local_40;
  undefined1 local_38 [4];
  char *local_34;
  uint local_30;
  void *operator_new_result;
  int local_20;
  int *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0056d527;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  operator_new_result = operator_new(0x20);
  local_8._0_1_ = 1;
  if (operator_new_result == (void *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = (int *)FUN_00497480(in_ECX);
  }
  local_8._0_1_ = 0;
  local_48[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab5c8;
    pcVar3 = local_44;
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
    local_44[i] = '\0';
    local_40 = i;
  }
  local_38[0] = local_15;
  local_8._0_1_ = 2;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Unable_to_create_overlay_element_005ab5ec;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_Unable_to_create_overlay_element_005ab5ec;
    pcVar3 = local_34;
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
    local_34[i] = '\0';
    local_30 = i;
  }
  local_8._0_1_ = 3;
  FUN_00487bc0(local_1c,local_38,local_48,0xe6);
  local_8._0_1_ = 2;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_44 != (char *)0x0) {
    cVar1 = local_44[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_44 + -1);
    }
    else {
      local_44[-1] = cVar1 + -1;
    }
  }
  (**(code **)(*local_1c + 4))();
  FUN_004a5620(*(undefined4 *)(*(int *)(local_20 + 0x90) + 8),1,&local_1c);
  ExceptionList = local_10;
  return;
}


/* ==== 00488770 FUN_00488770 ==== */

void FUN_00488770(void)

{
  char cVar1;
  int in_ECX;
  uint i;
  char *pcVar2;
  int *local_34;
  void *operator_new_result;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d54c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  operator_new_result = operator_new(0x4c);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    local_34 = (int *)FUN_00493130(in_ECX);
  }
  i = 0xffffffff;
  local_4 = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab64c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00402940(s_C__Work_A2IV_Game_prog_Overlay_c_005ab64c,~i - 1);
  i = 0xffffffff;
  local_4 = 1;
  pcVar2 = s_Unable_to_create_overlay_element_005ab670;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(s_Unable_to_create_overlay_element_005ab670,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(local_34,local_2c,local_1c,0x100);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (**(code **)(*local_34 + 4))();
  FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x90) + 8),1,&local_34);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004888f0 FUN_004888f0 ==== */

void FUN_004888f0(void)

{
  char cVar1;
  int in_ECX;
  uint i;
  char *pcVar2;
  int *local_34;
  void *operator_new_result;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d571;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  operator_new_result = operator_new(0x28);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    local_34 = (int *)FUN_004967c0(in_ECX);
  }
  i = 0xffffffff;
  local_4 = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00402940(s_C__Work_A2IV_Game_prog_Overlay_c_005ab694,~i - 1);
  i = 0xffffffff;
  local_4 = 1;
  pcVar2 = s_Unable_to_create_overlay_element_005ab6b8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(s_Unable_to_create_overlay_element_005ab6b8,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(local_34,local_2c,local_1c,0x111);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (**(code **)(*local_34 + 4))();
  FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x90) + 8),1,&local_34);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00488a70 FUN_00488a70 ==== */

void FUN_00488a70(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  uint i;
  char *pcVar3;
  int *operator_new_result;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d596;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  operator_new_result = operator_new(0x54);
  local_4 = 0;
  if (operator_new_result == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_004919e0(in_ECX);
  }
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab6dc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_4 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00402940(s_C__Work_A2IV_Game_prog_Overlay_c_005ab6dc,~i - 1);
  i = 0xffffffff;
  local_4 = 1;
  pcVar3 = s_Unable_to_create_overlay_element_005ab700;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(s_Unable_to_create_overlay_element_005ab700,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(piVar2,local_2c,local_1c,0x11c);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  (**(code **)(*piVar2 + 4))();
  operator_new_result = piVar2;
  FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x90) + 8),1,&operator_new_result);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00488be0 FUN_00488be0 ==== */

void FUN_00488be0(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  uint i;
  char *pcVar3;
  int *operator_new_result;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d5bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  operator_new_result = operator_new(0x60);
  local_4 = 0;
  if (operator_new_result == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00494870(in_ECX);
  }
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab724;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_4 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00402940(s_C__Work_A2IV_Game_prog_Overlay_c_005ab724,~i - 1);
  i = 0xffffffff;
  local_4 = 1;
  pcVar3 = s_Unable_to_create_overlay_element_005ab748;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(s_Unable_to_create_overlay_element_005ab748,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(piVar2,local_2c,local_1c,0x127);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  (**(code **)(*piVar2 + 4))();
  operator_new_result = piVar2;
  FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x90) + 8),1,&operator_new_result);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00488d50 FUN_00488d50 ==== */

void FUN_00488d50(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  uint i;
  char *pcVar3;
  int *operator_new_result;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d5e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  operator_new_result = operator_new(0x60);
  local_4 = 0;
  if (operator_new_result == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00495c90(in_ECX);
  }
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab76c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_4 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00402940(s_C__Work_A2IV_Game_prog_Overlay_c_005ab76c,~i - 1);
  i = 0xffffffff;
  local_4 = 1;
  pcVar3 = s_Unable_to_create_overlay_element_005ab790;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(s_Unable_to_create_overlay_element_005ab790,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(piVar2,local_2c,local_1c,0x131);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  (**(code **)(*piVar2 + 4))();
  operator_new_result = piVar2;
  FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x90) + 8),1,&operator_new_result);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00488ec0 FUN_00488ec0 ==== */

void FUN_00488ec0(void)

{
  int in_ECX;
  undefined4 local_4;
  
  local_4 = FUN_004891a0();
  FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x90) + 8),1,&local_4);
  return;
}


/* ==== 00488ef0 FUN_00488ef0 ==== */

void FUN_00488ef0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint j;
  uint k;
  char *pcVar4;
  char *pcVar5;
  int i;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056d5fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (*(code *)**(undefined4 **)(in_ECX + 0x8c))();
  i = 0;
  if (0 < iVar3) {
    do {
      j = 0xffffffff;
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x90) + 4) + i * 4);
      pcVar4 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab7b4;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      j = ~j - 1;
      uStack_20 = 0;
      cVar2 = FUN_00402a00(j,1);
      if (cVar2 != '\0') {
        pcVar4 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab7b4;
        pcVar5 = pcStack_28;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar5 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        }
        FUN_004029e0(j);
      }
      j = 0xffffffff;
      uStack_4 = 0;
      pcVar4 = s_Invalid_element_in_element_array_005ab7d8;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_00402940(s_Invalid_element_in_element_array_005ab7d8,~j - 1);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_00487bc0(piVar1,auStack_1c,auStack_2c,0x14a);
      if (iStack_18 != 0) {
        cVar2 = *(char *)(iStack_18 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar2 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 0xffffffff;
      if (pcStack_28 != (char *)0x0) {
        cVar2 = pcStack_28[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339(pcStack_28 + -1);
        }
        else {
          pcStack_28[-1] = cVar2 + -1;
        }
      }
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(in_ECX + 0x94));
      i = i + 1;
    } while (i < iVar3);
  }
  ExceptionList = pvStack_c;
  return;
}


