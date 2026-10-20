/* spel.dat — inputlib/CJoystickDevice.cpp: 15 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ef2b0 FUN_004ef2b0 ==== */

void FUN_004ef2b0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005729b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f1a90();
  local_4 = 0;
  *in_ECX = &PTR_FUN_00578268;
  in_ECX[0x55] = 0;
  FUN_004ef370();
  ExceptionList = local_c;
  return;
}


/* ==== 004ef300 FUN_004ef300 ==== */

void FUN_004ef300(byte param_1)

{
  FUN_004ef320();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004ef320 FUN_004ef320 ==== */

void FUN_004ef320(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005729d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00578268;
  local_4 = 0;
  FUN_004f0980();
  local_4 = 0xffffffff;
  FUN_004f1b00();
  ExceptionList = local_c;
  return;
}


/* ==== 004ef370 FUN_004ef370 ==== */

void FUN_004ef370(void)

{
  char cVar1;
  int in_ECX;
  uint j;
  uint k;
  undefined **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  int i;
  undefined **local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572a00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0xd8) = 7;
  i = 0;
  local_30 = &PTR_s_CM_JOY_X_AXIS_005b8898;
  do {
    pcVar3 = *local_30;
    FUN_004028f0(0);
    j = 0xffffffff;
    pcVar4 = pcVar3;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(j,1);
    if (cVar1 != '\0') {
      pcVar4 = local_18;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (k = j & 3; k != 0; k = k - 1) {
        *pcVar4 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
      local_18[j] = '\0';
      local_14 = j;
    }
    local_4 = 0;
    FUN_004f1050(local_1c);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    i = i + 1;
    local_30 = local_30 + 1;
  } while (i < *(int *)(in_ECX + 0xd8));
  *(undefined4 *)(in_ECX + 0xdc) = 0x20;
  i = 0;
  ppuVar2 = &PTR_s_CM_JOY_BUTTON1_005b88b4;
  do {
    j = 0xffffffff;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    pcVar3 = *ppuVar2;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(*ppuVar2,~j - 1);
    local_4 = 3;
    FUN_004f1050(local_2c);
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    i = i + 1;
    ppuVar2 = ppuVar2 + 1;
    if (*(int *)(in_ECX + 0xdc) <= i) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


/* ==== 004ef510 FUN_004ef510 ==== */

void FUN_004ef510(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iStack_94;
  int *piStack_90;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [28];
  undefined1 auStack_38 [28];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00572a33;
  pvStack_c = ExceptionList;
  piStack_90 = (int *)0x4ef531;
  ExceptionList = &pvStack_c;
  piStack_90 = (int *)FUN_004f1dc0();
  iStack_94 = 0x4ef537;
  (**(code **)(*piStack_90 + 100))();
  iStack_94 = 0x4ef53e;
  piVar1 = (int *)FUN_004f1d30();
  iStack_94 = in_ECX + 0xe0;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x50);
  if (iVar2 == -0x7ff8ffe2) {
    piVar1 = (int *)FUN_004f1d30();
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (iVar2 == 0) {
      piVar1 = (int *)FUN_004f1d30();
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x50,in_ECX + 0xe0);
      if (iVar2 != 0) {
        uVar3 = FUN_0049df90(&iStack_94,s_Input_exception_in___s___d__005b77e4,
                             s_D__Work_InputLib_prog_CJoystickD_005b8bc0,0x95);
        uStack_14 = 0;
        uVar3 = FUN_004796b0(auStack_84,uVar3,s_DIError___Failed_to_get_joystick_005b8b98);
        uStack_14 = CONCAT31(uStack_14._1_3_,1);
        FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_54,&DAT_005872d0);
      }
    }
  }
  else if (iVar2 != 0) {
    uVar3 = FUN_0049df90(auStack_74,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CJoystickD_005b8bc0,0x9d);
    uStack_14 = 2;
    uVar3 = FUN_004796b0(auStack_64,uVar3,s_DIError___Failed_to_get_joystick_005b8b98);
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_38,&DAT_005872d0);
  }
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 004ef650 FUN_004ef650 ==== */

void FUN_004ef650(void)

{
  int in_ECX;
  
  *(float *)(in_ECX + 0x148) =
       (float)*(int *)(in_ECX + 0xe0) /
       (float)((*(int *)(in_ECX + 0x134) - *(int *)(in_ECX + 0x130)) / 2) - 1.0;
  *(float *)(in_ECX + 0x14c) =
       1.0 - (float)*(int *)(in_ECX + 0xe4) /
             (float)((*(int *)(in_ECX + 0x13c) - *(int *)(in_ECX + 0x138)) / 2);
  *(float *)(in_ECX + 0x150) =
       (float)*(int *)(in_ECX + 0xe8) /
       (float)((*(int *)(in_ECX + 0x144) - *(int *)(in_ECX + 0x140)) / 2) - 1.0;
  return;
}


/* ==== 004ef6e0 FUN_004ef6e0 ==== */

void FUN_004ef6e0(void)

{
  undefined *puVar1;
  char cVar2;
  int in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = PTR_s_CM_JOY_LEFT_005b88a4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572a98;
  local_c = ExceptionList;
  if (0.0 <= *(float *)(in_ECX + 0x148)) {
    ExceptionList = &local_c;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = puVar1;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(puVar1,~i - 1);
    local_4 = 2;
    FUN_004f0c60(local_1c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    puVar1 = PTR_s_CM_JOY_RIGHT_005b88a8;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = puVar1;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(puVar1,~i - 1);
    local_4 = 3;
    FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x148));
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  else {
    ExceptionList = &local_c;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = puVar1;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(puVar1,~i - 1);
    local_4 = 0;
    FUN_004f0c60(local_1c,-*(float *)(in_ECX + 0x148));
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    puVar1 = PTR_s_CM_JOY_RIGHT_005b88a8;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = puVar1;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(puVar1,~i - 1);
    local_4 = 1;
    FUN_004f0c60(local_1c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  puVar3 = (undefined4 *)PTR_s_CM_JOY_DOWN_005b88b0;
  if (0.0 <= *(float *)(in_ECX + 0x14c)) {
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = (char *)puVar3;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(i,1);
    if (cVar2 != '\0') {
      puVar5 = local_18;
      for (j = i >> 2; j != 0; j = j - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004029e0(i);
    }
    local_4 = 6;
    FUN_004f0c60(local_1c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    puVar3 = (undefined4 *)PTR_s_CM_JOY_UP_005b88ac;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = (char *)puVar3;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(i,1);
    if (cVar2 != '\0') {
      puVar5 = local_18;
      for (j = i >> 2; j != 0; j = j - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004029e0(i);
    }
    local_4 = 7;
    FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x14c));
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  else {
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = (char *)puVar3;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(puVar3,~i - 1);
    local_4 = 4;
    FUN_004f0c60(local_1c,-*(float *)(in_ECX + 0x14c));
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    puVar1 = PTR_s_CM_JOY_UP_005b88ac;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = puVar1;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(puVar1,~i - 1);
    local_4 = 5;
    FUN_004f0c60(local_1c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  puVar3 = (undefined4 *)PTR_s_CM_JOY_X_AXIS_005b8898;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = (char *)puVar3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    puVar5 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_004029e0(i);
  }
  local_4 = 8;
  FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x148));
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  puVar3 = (undefined4 *)PTR_DAT_005b889c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = (char *)puVar3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    for (j = i >> 2; j != 0; j = j - 1) {
      *local_18 = *puVar3;
      puVar3 = puVar3 + 1;
      local_18 = local_18 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)local_18 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      local_18 = (undefined4 *)((int)local_18 + 1);
    }
    FUN_004029e0(i);
  }
  local_4 = 9;
  FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x14c));
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  puVar3 = (undefined4 *)PTR_s_CM_JOY_Z_AXIS_005b88a0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = (char *)puVar3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    puVar5 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined1 *)((int)local_28 + i) = 0;
    local_24 = i;
  }
  local_4 = 10;
  FUN_004f0c60(local_2c,*(undefined4 *)(in_ECX + 0x150));
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  ExceptionList = local_c;
  return;
}


/* ==== 004efbf0 FUN_004efbf0 ==== */

void FUN_004efbf0(void)

{
  undefined *puVar1;
  char cVar2;
  int in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  float10 fVar6;
  float local_34;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = PTR_s_CM_JOY_DOWN_005b88b0;
  puVar3 = (undefined4 *)PTR_s_CM_JOY_UP_005b88ac;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572ae8;
  local_c = ExceptionList;
  if (-0.5 <= *(float *)(in_ECX + 0x14c)) {
    if (*(float *)(in_ECX + 0x14c) <= 0.5) {
      ExceptionList = &local_c;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar5 = (char *)puVar3;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      i = ~i - 1;
      cVar2 = FUN_00402a00(i,1);
      if (cVar2 != '\0') {
        puVar4 = local_28;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        FUN_004029e0(i);
      }
      local_4 = 4;
      fVar6 = (float10)FUN_004f0df0(local_2c,0);
      local_34 = (float)fVar6;
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      puVar3 = (undefined4 *)PTR_s_CM_JOY_DOWN_005b88b0;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar5 = (char *)puVar3;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      i = ~i - 1;
      cVar2 = FUN_00402a00(i,1);
      if (cVar2 != '\0') {
        for (j = i >> 2; j != 0; j = j - 1) {
          *local_28 = *puVar3;
          puVar3 = puVar3 + 1;
          local_28 = local_28 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_004029e0(i);
      }
      local_4 = 5;
      fVar6 = (float10)FUN_004f0df0(local_2c,0);
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      if (local_34 <= 0.0) {
        if ((float)fVar6 <= 0.0) {
          local_34 = 0.0;
        }
        else {
          local_34 = -(float)fVar6;
        }
      }
    }
    else {
      ExceptionList = &local_c;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar5 = (char *)puVar3;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      i = ~i - 1;
      cVar2 = FUN_00402a00(i,1);
      if (cVar2 != '\0') {
        puVar4 = local_28;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        FUN_004029e0(i);
      }
      local_4 = 2;
      fVar6 = (float10)FUN_004f0df0(local_2c,1);
      local_34 = (float)fVar6;
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      puVar3 = (undefined4 *)PTR_s_CM_JOY_DOWN_005b88b0;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar5 = (char *)puVar3;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      i = ~i - 1;
      cVar2 = FUN_00402a00(i,1);
      if (cVar2 != '\0') {
        for (j = i >> 2; j != 0; j = j - 1) {
          *local_28 = *puVar3;
          puVar3 = puVar3 + 1;
          local_28 = local_28 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_004029e0(i);
      }
      local_4 = 3;
      FUN_004f0c60(local_2c,0);
      local_4 = 0xffffffff;
      FUN_004028f0(1);
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = puVar1;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(puVar1,~i - 1);
    local_4 = 0;
    fVar6 = (float10)FUN_004f0df0(local_2c,1);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    puVar3 = (undefined4 *)PTR_s_CM_JOY_UP_005b88ac;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar5 = (char *)puVar3;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(i,1);
    if (cVar2 != '\0') {
      for (j = i >> 2; j != 0; j = j - 1) {
        *local_28 = *puVar3;
        puVar3 = puVar3 + 1;
        local_28 = local_28 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_004029e0(i);
    }
    local_4 = 1;
    FUN_004f0c60(local_2c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    local_34 = -(float)fVar6;
  }
  puVar3 = (undefined4 *)PTR_DAT_005b889c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = (char *)puVar3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    puVar4 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_004029e0(i);
  }
  local_4 = 6;
  FUN_004f0c60(local_1c,local_34);
  if (local_18 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)((int)local_18 + -1) = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004f0020 FUN_004f0020 ==== */

void FUN_004f0020(void)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  float10 fVar5;
  float local_34;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)PTR_s_CM_JOY_LEFT_005b88a4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572b38;
  local_c = ExceptionList;
  if (-0.5 <= *(float *)(in_ECX + 0x148)) {
    if (*(float *)(in_ECX + 0x148) <= 0.5) {
      ExceptionList = &local_c;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar4 = (char *)puVar2;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(i,1);
      if (cVar1 != '\0') {
        puVar3 = local_28;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        FUN_004029e0(i);
      }
      local_4 = 4;
      fVar5 = (float10)FUN_004f0df0(local_2c,0);
      local_34 = (float)fVar5;
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      puVar2 = (undefined4 *)PTR_s_CM_JOY_RIGHT_005b88a8;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar4 = (char *)puVar2;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(i,1);
      if (cVar1 != '\0') {
        for (j = i >> 2; j != 0; j = j - 1) {
          *local_28 = *puVar2;
          puVar2 = puVar2 + 1;
          local_28 = local_28 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_004029e0(i);
      }
      local_4 = 5;
      fVar5 = (float10)FUN_004f0df0(local_2c,0);
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      if (local_34 <= 0.0) {
        if ((float)fVar5 <= 0.0) {
          local_34 = 0.0;
        }
        else {
          local_34 = -(float)fVar5;
        }
      }
    }
    else {
      ExceptionList = &local_c;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar4 = (char *)puVar2;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(i,1);
      if (cVar1 != '\0') {
        puVar3 = local_28;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        FUN_004029e0(i);
      }
      local_4 = 2;
      FUN_004f0c60(local_2c,0);
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      puVar2 = (undefined4 *)PTR_s_CM_JOY_RIGHT_005b88a8;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar4 = (char *)puVar2;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(i,1);
      if (cVar1 != '\0') {
        for (j = i >> 2; j != 0; j = j - 1) {
          *local_28 = *puVar2;
          puVar2 = puVar2 + 1;
          local_28 = local_28 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_004029e0(i);
      }
      local_4 = 3;
      fVar5 = (float10)FUN_004f0df0(local_2c,1);
      local_34 = (float)fVar5;
      local_4 = 0xffffffff;
      FUN_004028f0(1);
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = (char *)puVar2;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(puVar2,~i - 1);
    local_4 = 0;
    fVar5 = (float10)FUN_004f0df0(local_2c,1);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    puVar2 = (undefined4 *)PTR_s_CM_JOY_RIGHT_005b88a8;
    local_34 = -(float)fVar5;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = (char *)puVar2;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      for (j = i >> 2; j != 0; j = j - 1) {
        *local_28 = *puVar2;
        puVar2 = puVar2 + 1;
        local_28 = local_28 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_004029e0(i);
    }
    local_4 = 1;
    FUN_004f0c60(local_2c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  puVar2 = (undefined4 *)PTR_s_CM_JOY_X_AXIS_005b8898;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = (char *)puVar2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar3 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    FUN_004029e0(i);
  }
  local_4 = 6;
  FUN_004f0c60(local_1c,local_34);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004f0450 FUN_004f0450 ==== */

void FUN_004f0450(void)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572b58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f0020();
  FUN_004efbf0();
  puVar2 = (undefined4 *)PTR_s_CM_JOY_Z_AXIS_005b88a0;
  i = 0xffffffff;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar3 = PTR_s_CM_JOY_Z_AXIS_005b88a0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar4 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined1 *)((int)local_18 + i) = 0;
    local_14 = i;
  }
  local_4 = 0;
  FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x150));
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004f0540 FUN_004f0540 ==== */

void FUN_004f0540(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x158) == 0x404) {
    FUN_004f0450();
    return;
  }
  FUN_004ef6e0();
  return;
}


/* ==== 004f0560 FUN_004f0560 ==== */

void FUN_004f0560(void)

{
  byte bVar1;
  char cVar2;
  int in_ECX;
  uint j;
  uint k;
  char *pcVar3;
  char *pcVar4;
  int i;
  undefined **local_28;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f11b0();
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  FUN_004ef510();
  i = 0;
  if (0 < *(int *)(in_ECX + 0xdc)) {
    local_28 = &PTR_s_CM_JOY_BUTTON1_005b88b4;
    do {
      local_18 = (char *)0x0;
      local_14 = 0;
      bVar1 = *(byte *)(in_ECX + 0x110 + i);
      pcVar3 = *local_28;
      j = 0xffffffff;
      local_10 = 0;
      pcVar4 = pcVar3;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      j = ~j - 1;
      cVar2 = FUN_00402a00(j,1);
      if (cVar2 != '\0') {
        pcVar4 = local_18;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar4 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_18[j] = '\0';
        local_14 = j;
      }
      local_4 = 0;
      FUN_004f0df0(local_1c,bVar1 >> 7);
      local_4 = 0xffffffff;
      if (local_18 != (char *)0x0) {
        cVar2 = local_18[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339(local_18 + -1);
        }
        else {
          local_18[-1] = cVar2 + -1;
        }
      }
      i = i + 1;
      local_28 = local_28 + 1;
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
    } while (i < *(int *)(in_ECX + 0xdc));
  }
  FUN_004ef650();
  FUN_004f0540();
  ExceptionList = local_c;
  return;
}


/* ==== 004f06c0 FUN_004f06c0 ==== */

void FUN_004f06c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_retaddr;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined1 auStack_5c [28];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [7];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00572ba0;
  pvStack_c = ExceptionList;
  local_40 = 0x18;
  local_3c = 0x10;
  local_38 = param_1;
  local_34[0] = 1;
  puStack_64 = (undefined4 *)0x4f06fd;
  ExceptionList = &pvStack_c;
  piStack_6c = (int *)FUN_004f1d30();
  puStack_64 = &local_40;
  uStack_68 = 4;
  iVar1 = (**(code **)(*piStack_6c + 0x14))();
  if (iVar1 != 0) {
    uVar2 = FUN_0049df90(&piStack_6c,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CJoystickD_005b8bc0,0x1e5);
    uStack_10 = 0;
    uVar2 = FUN_004796b0(auStack_5c,uVar2,s_DIError___Failed_to_get_joystick_005b8bec);
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    FUN_004edac0(uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_005872d0);
  }
  *puStack_4 = local_3c;
  *unaff_retaddr = local_38;
  ExceptionList = pvStack_18;
  return;
}


/* ==== 004f0790 FUN_004f0790 ==== */

void FUN_004f0790(void)

{
  uint *puVar1;
  int in_ECX;
  int i;
  uint *puVar2;
  uint local_2c [4];
  undefined4 local_1c;
  
  puVar1 = (uint *)FUN_004f0a60(local_2c);
  puVar2 = local_2c;
  for (i = 0xb; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (local_2c[3] != 0) {
    FUN_004f06c0(0,in_ECX + 0x130,in_ECX + 0x134);
  }
  if (1 < local_2c[3]) {
    FUN_004f06c0(4,in_ECX + 0x138,in_ECX + 0x13c);
    *(undefined4 *)(in_ECX + 0x154) = local_1c;
    *(uint *)(in_ECX + 0x158) = local_2c[2];
    return;
  }
  *(undefined4 *)(in_ECX + 0x154) = local_1c;
  *(uint *)(in_ECX + 0x158) = local_2c[2];
  return;
}


/* ==== 004f0980 FUN_004f0980 ==== */

void FUN_004f0980(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_0051ed40();
  if (*(int *)(in_ECX + 0xa4) != 0) {
    piVar1 = (int *)FUN_004f1d30();
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  FUN_004f1c80();
  return;
}


