/* spel.dat — game/RaceConsole.cpp: 68 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00471bd0 FUN_00471bd0 ==== */

void FUN_00471bd0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056b2ec;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00470fe0();
  if (*(char *)(in_ECX + 0x28) != '\0') {
    FUN_00471240();
    FUN_004717d0();
    FUN_00471c90();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 00471c90 FUN_00471c90 ==== */

void FUN_00471c90(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int in_ECX;
  int j;
  int iVar4;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 4))();
  iVar4 = 0x32;
  i = iVar1;
  do {
    i = i + -1;
    if ((i < 0) || (iVar1 <= i)) break;
    puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0xc);
    j = i;
    if (0 < i) {
      do {
        puVar2 = (undefined4 *)*puVar2;
        j = j + -1;
      } while (j != 0);
    }
    puVar3 = (undefined1 *)puVar2[3];
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    FUN_004c5930(1,10,iVar4,s_COM_>_s_005a8d0c,puVar3);
    iVar4 = iVar4 + -0x10;
  } while (2 < iVar4);
  puVar3 = *(undefined1 **)(in_ECX + 0x18);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c5930(1,10,0x46,s_COM_>_s_005a8d14,puVar3);
  return;
}


/* ==== 00471d50 FUN_00471d50 ==== */

void FUN_00471d50(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00471d60 FUN_00471d60 ==== */

void FUN_00471d60(void)

{
  FUN_005584e0(&LAB_00471d70);
  return;
}


/* ==== 00471d90 FUN_00471d90 ==== */

void FUN_00471d90(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00471da0 FUN_00471da0 ==== */

void FUN_00471da0(void)

{
  FUN_005584e0(&LAB_00471db0);
  return;
}


/* ==== 00471dc0 FUN_00471dc0 ==== */

void FUN_00471dc0(byte param_1)

{
  FUN_00470600();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00471de0 FUN_00471de0 ==== */

void FUN_00471de0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 4) == 0) || (cVar1 = *(char *)(*(int *)(in_ECX + 4) + -1), cVar1 == '\0'))
     || (cVar1 == -1)) goto LAB_00471e48;
  uVar2 = *(uint *)(in_ECX + 8);
  if (0xfffffffd < uVar2) {
    FUN_0054b1b4();
  }
  iVar3 = *(int *)(in_ECX + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        FUN_004029e0(0);
      }
      goto LAB_00471e48;
    }
    if (uVar2 <= *(uint *)(in_ECX + 0xc)) goto LAB_00471e48;
  }
  else if (uVar2 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    goto LAB_00471e48;
  }
  FUN_00402b20(uVar2);
LAB_00471e48:
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined1 *)(*(int *)(in_ECX + 4) + -1) = 0xff;
  }
  return;
}


/* ==== 00471e60 FUN_00471e60 ==== */

void FUN_00471e60(byte param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00471ec0 FUN_00471ec0 ==== */

void FUN_00471ec0(void)

{
  undefined4 *in_ECX;
  undefined1 local_1;
  
  FUN_004704a0();
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *(undefined1 *)(in_ECX + 0x15) = local_1;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x14] = &PTR_FUN_00576a08;
  *(undefined1 *)(in_ECX + 0x1a) = local_1;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x19] = &PTR_FUN_00576a00;
  *(undefined1 *)(in_ECX + 0x1f) = local_1;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x1e] = &PTR_FUN_005769f8;
  *in_ECX = &PTR_FUN_005769f0;
  DAT_00712654 = 0;
  return;
}


/* ==== 00471f30 FUN_00471f30 ==== */

void FUN_00471f30(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056b31e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_005769f0;
  local_4 = 2;
  FUN_00473710();
  local_4._0_1_ = 1;
  FUN_00473710();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00473710();
  local_4 = 0xffffffff;
  FUN_00470600();
  ExceptionList = local_c;
  return;
}


/* ==== 00471fa0 FUN_00471fa0 ==== */

void FUN_00471fa0(void)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b340;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00470ea0();
  i = 0xffffffff;
  pcVar2 = &DAT_005a8d1c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(&DAT_005a8d1c,~i - 1);
  local_4 = 0;
  FUN_00473770(local_2c);
  local_4 = 0xffffffff;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  FUN_004734a0(in_ECX + 0x50);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_RFloat_005a8d24;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_RFloat_005a8d24;
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
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 1;
  FUN_00473770(local_2c);
  local_4 = 0xffffffff;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  FUN_004734a0(in_ECX + 100);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_RFunc_005a8d2c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_RFunc_005a8d2c;
    pcVar3 = local_18;
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
    local_18[i] = '\0';
    local_14 = i;
  }
  local_4 = 2;
  FUN_00473770(local_1c);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004734a0(in_ECX + 0x78);
  ExceptionList = local_c;
  return;
}


/* ==== 00472190 FUN_00472190 ==== */

void FUN_00472190(void)

{
  void *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b355;
  local_c = ExceptionList;
  if (DAT_00712654 == 0) {
    ExceptionList = &local_c;
    operator_new_result = operator_new(0x8c);
    local_4 = 0;
    if (operator_new_result == (void *)0x0) {
      DAT_00712654 = 0;
    }
    else {
      DAT_00712654 = FUN_00471ec0(operator_new_result);
    }
    local_4 = 0xffffffff;
    if (DAT_00712654 == 0) {
      FUN_004c4150(s__s___d__Could_not_create_console_005a8d5c,
                   s_C__Work_A2IV_Game_prog_RaceConso_005a8d34,0x3a);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00472210 FUN_00472210 ==== */

void FUN_00472210(void)

{
  if (DAT_00712654 != (undefined4 *)0x0) {
    (**(code **)*DAT_00712654)(1);
    DAT_00712654 = (undefined4 *)0x0;
  }
  return;
}


/* ==== 00472230 FUN_00472230 ==== */

int FUN_00472230(void)

{
  if (DAT_00712654 == 0) {
    FUN_004c4150(s__s___d__Console_not_created_yet__005a8dbc,
                 s_C__Work_A2IV_Game_prog_RaceConso_005a8d94,0x4c);
  }
  return DAT_00712654;
}


/* ==== 004722a0 FUN_004722a0 ==== */

void FUN_004722a0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004722b0 FUN_004722b0 ==== */

void FUN_004722b0(void)

{
  FUN_005584e0(&LAB_004722c0);
  return;
}


/* ==== 004722e0 FUN_004722e0 ==== */

void FUN_004722e0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004722f0 FUN_004722f0 ==== */

void FUN_004722f0(void)

{
  FUN_005584e0(&LAB_00472300);
  return;
}


/* ==== 00472310 FUN_00472310 ==== */

void FUN_00472310(byte param_1)

{
  FUN_00471f30();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00472330 thunk_FUN_00473710 ==== */

void thunk_FUN_00473710(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00576a80;
  iVar2 = in_ECX[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


/* ==== 00472340 FUN_00472340 ==== */

void FUN_00472340(void)

{
  undefined4 *in_ECX;
  
  FUN_00472650();
  *in_ECX = &PTR_FUN_00576a10;
  in_ECX[6] = 0;
  return;
}


/* ==== 00472360 FUN_00472360 ==== */

void FUN_00472360(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00472740(param_1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00576a10;
  FUN_004723d0(param_2);
  ExceptionList = local_c;
  return;
}


/* ==== 004723d0 FUN_004723d0 ==== */

void FUN_004723d0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  return;
}


/* ==== 004723f0 FUN_004723f0 ==== */

undefined4 FUN_004723f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


/* ==== 00472420 FUN_00472420 ==== */

/* WARNING: Removing unreachable block (ram,0x00472469) */

undefined4 FUN_00472420(void)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  void *operator_new_result;
  undefined4 uVar5;
  uint i;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b385;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined1 *)FUN_00472920();
  local_1c[0] = *puVar3;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  uVar1 = *(uint *)(puVar3 + 8);
  if (local_1c == puVar3) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(puVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        local_18 = *(undefined4 **)(puVar3 + 4);
        if (local_18 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)&DAT_0057629c;
        }
        local_14 = *(undefined4 *)(puVar3 + 8);
        local_10 = *(undefined4 *)(puVar3 + 0xc);
        *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + '\x01';
        goto LAB_00472517;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(puVar3 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = local_18;
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
    }
  }
LAB_00472517:
  local_4 = 0;
  operator_new_result = operator_new(0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (operator_new_result == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004723f0();
    uVar5 = FUN_00472360(local_1c,uVar5);
  }
  if (local_18 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return uVar5;
}


/* ==== 004725e0 FUN_004725e0 ==== */

void FUN_004725e0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004725f0 FUN_004725f0 ==== */

void FUN_004725f0(void)

{
  FUN_005584e0(&LAB_00472600);
  return;
}


/* ==== 00472620 FUN_00472620 ==== */

void FUN_00472620(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00472630 FUN_00472630 ==== */

void FUN_00472630(void)

{
  FUN_005584e0(&LAB_00472640);
  return;
}


/* ==== 00472650 FUN_00472650 ==== */

void FUN_00472650(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056b39b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 1) = local_15;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  i = 0xffffffff;
  *in_ECX = &PTR_FUN_00576a1c;
  pcVar4 = (char *)&DAT_0071265c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_4 = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = in_ECX[2];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      goto LAB_00472727;
    }
    if ((0x1f < (uint)in_ECX[4]) || ((uint)in_ECX[4] < i)) {
      FUN_004028f0(1);
      goto LAB_004726f9;
    }
  }
  else {
    if (i == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(0);
      goto LAB_00472727;
    }
LAB_004726f9:
    FUN_00402b20(i);
  }
  puVar3 = &DAT_0071265c;
  puVar5 = (undefined4 *)in_ECX[2];
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
  in_ECX[3] = i;
  *(undefined1 *)(in_ECX[2] + i) = 0;
LAB_00472727:
  *(undefined1 *)(in_ECX + 5) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00472740 FUN_00472740 ==== */

/* WARNING: Removing unreachable block (ram,0x00472792) */

void FUN_00472740(undefined4 *param_1)

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
  
  puStack_8 = &LAB_0056b3b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 1) = param_1._0_1_;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00576a1c;
  local_4 = 0;
  uVar1 = param_1[2];
  if (in_ECX + 1 == param_1) {
    if ((uint)in_ECX[3] < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[3] - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + in_ECX[2],uVar1 + in_ECX[2] + iVar5,iVar3 - iVar5);
      iVar3 = in_ECX[3];
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_1[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar5 = in_ECX[2];
        if (iVar5 != 0) {
          cVar2 = *(char *)(iVar5 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar5 + -1));
          }
          else {
            *(char *)(iVar5 + -1) = cVar2 + -1;
          }
        }
        in_ECX[2] = 0;
        in_ECX[3] = 0;
        in_ECX[4] = 0;
        puVar4 = (undefined1 *)param_1[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[2] = puVar4;
        in_ECX[3] = param_1[2];
        in_ECX[4] = param_1[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004727f3;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)param_1[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)in_ECX[2];
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
      *(undefined1 *)(in_ECX + 5) = 0;
      ExceptionList = local_c;
      return;
    }
  }
LAB_004727f3:
  *(undefined1 *)(in_ECX + 5) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004728d0 FUN_004728d0 ==== */

void FUN_004728d0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576a1c;
  iVar2 = in_ECX[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


/* ==== 00472920 FUN_00472920 ==== */

int FUN_00472920(void)

{
  int in_ECX;
  
  return in_ECX + 4;
}


/* ==== 00472930 FUN_00472930 ==== */

/* WARNING: Removing unreachable block (ram,0x0047294a) */

void FUN_00472930(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (in_ECX + 4 == param_1) {
    if (*(uint *)(in_ECX + 0xc) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(in_ECX + 0xc) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)(in_ECX + 8);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)(in_ECX + 0xc) - iVar7;
      cVar2 = FUN_00402a00(iVar7,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar7);
      }
    }
    FUN_00402c30();
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      iVar7 = *(int *)(in_ECX + 8);
      if (iVar7 != 0) {
        cVar2 = *(char *)(iVar7 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(iVar7 + -1));
        }
        else {
          *(char *)(iVar7 + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(in_ECX + 8) = puVar4;
      *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_1 + 4);
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)(in_ECX + 0xc) = uVar1;
    *(undefined1 *)(*(int *)(in_ECX + 8) + uVar1) = 0;
  }
  return;
}


/* ==== 00472a90 FUN_00472a90 ==== */

bool FUN_00472a90(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0057629c;
  }
  puVar3 = *(undefined1 **)(in_ECX + 8);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  iVar2 = FUN_00567c10(puVar3,puVar1,*(undefined4 *)(param_1 + 8));
  return iVar2 == 0;
}


/* ==== 00472ad0 FUN_00472ad0 ==== */

bool FUN_00472ad0(void)

{
  int iVar1;
  char *_Str2;
  int in_ECX;
  char *_Str1;
  
  iVar1 = FUN_00472920();
  _Str2 = *(char **)(iVar1 + 4);
  if (_Str2 == (char *)0x0) {
    _Str2 = "";
  }
  _Str1 = *(char **)(in_ECX + 8);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,_Str2);
  return iVar1 == 0;
}


/* ==== 00472b40 FUN_00472b40 ==== */

void FUN_00472b40(byte param_1)

{
  FUN_004728d0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00472b60 FUN_00472b60 ==== */

void FUN_00472b60(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00472740(param_1);
  *in_ECX = &PTR_FUN_00576a28;
  in_ECX[6] = param_2;
  return;
}


/* ==== 00472ba0 FUN_00472ba0 ==== */

undefined4 FUN_00472ba0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


/* ==== 00472bd0 FUN_00472bd0 ==== */

/* WARNING: Removing unreachable block (ram,0x00472c19) */

undefined4 FUN_00472bd0(void)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  void *operator_new_result;
  undefined4 uVar5;
  uint i;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b3d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined1 *)FUN_00472920();
  local_1c[0] = *puVar3;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  uVar1 = *(uint *)(puVar3 + 8);
  if (local_1c == puVar3) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(puVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        local_18 = *(undefined4 **)(puVar3 + 4);
        if (local_18 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)&DAT_0057629c;
        }
        local_14 = *(undefined4 *)(puVar3 + 8);
        local_10 = *(undefined4 *)(puVar3 + 0xc);
        *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + '\x01';
        goto LAB_00472cc7;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(puVar3 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = local_18;
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
    }
  }
LAB_00472cc7:
  local_4 = 0;
  operator_new_result = operator_new(0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (operator_new_result == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00472ba0();
    uVar5 = FUN_00472b60(local_1c,uVar5);
  }
  if (local_18 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return uVar5;
}


/* ==== 00472d90 FUN_00472d90 ==== */

void FUN_00472d90(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00472da0 FUN_00472da0 ==== */

void FUN_00472da0(void)

{
  FUN_005584e0(&LAB_00472db0);
  return;
}


/* ==== 00472dd0 FUN_00472dd0 ==== */

void FUN_00472dd0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00472de0 FUN_00472de0 ==== */

void FUN_00472de0(void)

{
  FUN_005584e0(&LAB_00472df0);
  return;
}


/* ==== 00472e00 FUN_00472e00 ==== */

void FUN_00472e00(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00472740(param_1);
  *in_ECX = &PTR_FUN_00576a34;
  in_ECX[6] = param_2;
  return;
}


/* ==== 00472e50 FUN_00472e50 ==== */

undefined4 FUN_00472e50(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


/* ==== 00472e80 FUN_00472e80 ==== */

/* WARNING: Removing unreachable block (ram,0x00472ec9) */

undefined4 FUN_00472e80(void)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  void *operator_new_result;
  undefined4 uVar5;
  uint i;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b3f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined1 *)FUN_00472920();
  local_1c[0] = *puVar3;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  uVar1 = *(uint *)(puVar3 + 8);
  if (local_1c == puVar3) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(puVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        local_18 = *(undefined4 **)(puVar3 + 4);
        if (local_18 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)&DAT_0057629c;
        }
        local_14 = *(undefined4 *)(puVar3 + 8);
        local_10 = *(undefined4 *)(puVar3 + 0xc);
        *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + '\x01';
        goto LAB_00472f77;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(puVar3 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = local_18;
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
    }
  }
LAB_00472f77:
  local_4 = 0;
  operator_new_result = operator_new(0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (operator_new_result == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00472e50();
    uVar5 = FUN_00472e00(local_1c,uVar5);
  }
  if (local_18 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return uVar5;
}


/* ==== 00473040 FUN_00473040 ==== */

void FUN_00473040(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00473050 FUN_00473050 ==== */

void FUN_00473050(void)

{
  FUN_005584e0(&LAB_00473060);
  return;
}


/* ==== 00473080 FUN_00473080 ==== */

void FUN_00473080(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00473090 FUN_00473090 ==== */

void FUN_00473090(void)

{
  FUN_005584e0(&LAB_004730a0);
  return;
}


/* ==== 004730b0 FUN_004730b0 ==== */

void FUN_004730b0(byte param_1)

{
  thunk_FUN_004728d0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004730d0 FUN_004730d0 ==== */

void FUN_004730d0(void)

{
  void *operator_new_result;
  undefined4 *in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056b408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_00576a70;
  *(undefined1 *)(in_ECX + 1) = local_11;
  operator_new_result = operator_new(0xc);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  in_ECX[2] = operator_new_result;
  in_ECX[3] = 0;
  *in_ECX = &PTR_LAB_00576a60;
  in_ECX[4] = &PTR_LAB_00576a50;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 5) = local_11;
  operator_new_result = operator_new(0xc);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  in_ECX[6] = operator_new_result;
  in_ECX[7] = 0;
  in_ECX[4] = &PTR_LAB_00576a40;
  ExceptionList = local_c;
  return;
}


/* ==== 00473160 FUN_00473160 ==== */

void FUN_00473160(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  void **ppvVar7;
  int in_ECX;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056b41a;
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  local_4 = 0;
  ppvVar7 = &local_c;
  puVar5 = (undefined4 *)*puVar1;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar7, puVar5 != puVar1) {
    puVar2 = (undefined4 *)*puVar5;
    FUN_00448f90(local_10,puVar5);
    ppvVar7 = ExceptionList;
    puVar5 = puVar2;
  }
  FUN_0054b339(*(undefined4 *)(in_ECX + 0x18));
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  piVar3 = *(int **)(in_ECX + 8);
  piVar6 = (int *)*piVar3;
  while (piVar6 != piVar3) {
    piVar4 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_0054b339(piVar6);
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
    piVar6 = piVar4;
  }
  FUN_0054b339(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00473220 FUN_00473220 ==== */

undefined4 FUN_00473220(undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int j;
  int iVar4;
  int in_ECX;
  uint k;
  int i;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056b42c;
  pvStack_c = ExceptionList;
  i = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  j = (*(code *)**(undefined4 **)(in_ECX + 0x10))();
  pbVar3 = param_3;
  if (0 < j) {
    do {
      FUN_00468530(auStack_14);
      j = i;
      if (0 < i) {
        do {
          FUN_00448fd0(auStack_10,0);
          j = j + -1;
        } while (j != 0);
      }
      j = FUN_00473760();
      pbVar6 = &DAT_0057629c;
      if (pbVar3 != (byte *)0x0) {
        pbVar6 = pbVar3;
      }
      uVar2 = *(uint *)(j + 8);
      k = param_4;
      if (uVar2 < param_4) {
        k = uVar2;
      }
      bVar7 = false;
      iVar4 = 0;
      bVar8 = true;
      pbVar5 = *(byte **)(j + 4);
      do {
        if (k == 0) break;
        k = k - 1;
        bVar7 = *pbVar5 < *pbVar6;
        bVar8 = *pbVar5 == *pbVar6;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (((iVar4 == 0) && (param_4 <= uVar2)) && (uVar2 == param_4)) {
        j = **(int **)(in_ECX + 0x18);
        if (0 < i) {
          do {
            FUN_00448fd0(auStack_10,0);
            i = i + -1;
          } while (i != 0);
        }
        uStack_18 = (**(code **)**(undefined4 **)(j + 8))(param_1);
        FUN_00448ff0(&param_1,*(undefined4 *)(in_ECX + 8),&uStack_18);
        if (pbVar3 != (byte *)0x0) {
          bVar1 = pbVar3[-1];
          if ((bVar1 != 0) && (bVar1 != 0xff)) {
            pbVar3[-1] = bVar1 - 1;
            ExceptionList = pvStack_c;
            return 1;
          }
          FUN_0054b339(pbVar3 + -1);
        }
        ExceptionList = pvStack_c;
        return 1;
      }
      i = i + 1;
      j = (*(code *)**(undefined4 **)(in_ECX + 0x10))();
    } while (i < j);
  }
  if (pbVar3 != (byte *)0x0) {
    bVar1 = pbVar3[-1];
    if ((bVar1 == 0) || (bVar1 == 0xff)) {
      FUN_0054b339(pbVar3 + -1);
    }
    else {
      pbVar3[-1] = bVar1 - 1;
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}


/* ==== 004733b0 FUN_004733b0 ==== */

void FUN_004733b0(void)

{
  char cVar1;
  int j;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_ECX;
  int i;
  
  i = 0;
  j = (**(code **)*in_ECX)();
  if (0 < j) {
    while( true ) {
      puVar2 = *(undefined4 **)in_ECX[2];
      j = i;
      if (0 < i) {
        do {
          puVar2 = (undefined4 *)*puVar2;
          j = j + -1;
        } while (j != 0);
      }
      cVar1 = FUN_00472ad0(puVar2[2]);
      if (cVar1 != '\0') break;
      i = i + 1;
      j = (**(code **)*in_ECX)();
      if (j <= i) {
        return;
      }
    }
    piVar3 = *(int **)in_ECX[2];
    if (0 < i) {
      do {
        piVar3 = (int *)*piVar3;
        i = i + -1;
      } while (i != 0);
    }
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_0054b339(piVar3);
    in_ECX[3] = in_ECX[3] + -1;
  }
  return;
}


/* ==== 00473430 FUN_00473430 ==== */

uint FUN_00473430(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int j;
  int i;
  
  i = 0;
  uVar2 = (**(code **)*in_ECX)();
  if (0 < (int)uVar2) {
    do {
      j = i;
      if (0 < i) {
        do {
          j = j + -1;
        } while (j != 0);
      }
      cVar1 = FUN_00472a90(param_1);
      if (cVar1 != '\0') {
        puVar3 = *(undefined4 **)in_ECX[2];
        if (0 < i) {
          do {
            puVar3 = (undefined4 *)*puVar3;
            i = i + -1;
          } while (i != 0);
        }
        *param_2 = puVar3[2];
        return CONCAT31((int3)((uint)puVar3 >> 8),1);
      }
      i = i + 1;
      uVar2 = (**(code **)*in_ECX)();
    } while (i < (int)uVar2);
  }
  return uVar2 & 0xffffff00;
}


/* ==== 004734a0 FUN_004734a0 ==== */

undefined4 FUN_004734a0(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int j;
  int iVar4;
  int *operator_new_result;
  int in_ECX;
  uint k;
  int *piVar5;
  int i;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  
  i = 0;
  j = (*(code *)**(undefined4 **)(in_ECX + 0x10))();
  if (0 < j) {
    do {
      j = i;
      if (0 < i) {
        do {
          j = j + -1;
        } while (j != 0);
      }
      j = FUN_00473760();
      iVar4 = FUN_00473760();
      uVar1 = *(uint *)(j + 8);
      pbVar6 = *(byte **)(j + 4);
      if (pbVar6 == (byte *)0x0) {
        pbVar6 = &DAT_0057629c;
      }
      uVar2 = *(uint *)(iVar4 + 8);
      k = uVar2;
      if (uVar1 <= uVar2) {
        k = uVar1;
      }
      bVar9 = false;
      j = 0;
      bVar10 = true;
      pbVar7 = *(byte **)(iVar4 + 4);
      do {
        if (k == 0) break;
        k = k - 1;
        bVar9 = *pbVar7 < *pbVar6;
        bVar10 = *pbVar7 == *pbVar6;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar10);
      if (!bVar10) {
        j = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (((j == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
        return 0;
      }
      i = i + 1;
      j = (*(code *)**(undefined4 **)(in_ECX + 0x10))();
    } while (i < j);
  }
  piVar3 = *(int **)(in_ECX + 0x18);
  piVar8 = (int *)piVar3[1];
  operator_new_result = operator_new(0xc);
  piVar5 = piVar3;
  if (piVar3 == (int *)0x0) {
    piVar5 = operator_new_result;
  }
  *operator_new_result = (int)piVar5;
  if (piVar8 == (int *)0x0) {
    piVar8 = operator_new_result;
  }
  operator_new_result[1] = (int)piVar8;
  piVar3[1] = (int)operator_new_result;
  *(int **)operator_new_result[1] = operator_new_result;
  FUN_004d2770(operator_new_result + 2,&stack0x00000004);
  j = *(int *)(in_ECX + 0x1c) + 1;
  *(int *)(in_ECX + 0x1c) = j;
  return CONCAT31((int3)((uint)j >> 8),1);
}


/* ==== 00473590 FUN_00473590 ==== */

/* WARNING: Removing unreachable block (ram,0x004735e2) */

undefined4 * FUN_00473590(undefined4 *param_1)

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
  
  puStack_8 = &LAB_0056b441;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 1) = param_1._0_1_;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_LAB_00576a80;
  local_4 = 0;
  uVar1 = param_1[2];
  if (in_ECX + 1 == param_1) {
    if ((uint)in_ECX[3] < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[3] - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + in_ECX[2],uVar1 + in_ECX[2] + iVar5,iVar3 - iVar5);
      iVar3 = in_ECX[3];
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_1[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar5 = in_ECX[2];
        if (iVar5 != 0) {
          cVar2 = *(char *)(iVar5 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar5 + -1));
          }
          else {
            *(char *)(iVar5 + -1) = cVar2 + -1;
          }
        }
        in_ECX[2] = 0;
        in_ECX[3] = 0;
        in_ECX[4] = 0;
        puVar4 = (undefined1 *)param_1[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[2] = puVar4;
        in_ECX[3] = param_1[2];
        in_ECX[4] = param_1[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        ExceptionList = local_c;
        return in_ECX;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)param_1[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)in_ECX[2];
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
    }
  }
  ExceptionList = local_c;
  return in_ECX;
}


/* ==== 00473710 FUN_00473710 ==== */

void FUN_00473710(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00576a80;
  iVar2 = in_ECX[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


/* ==== 00473760 FUN_00473760 ==== */

int FUN_00473760(void)

{
  int in_ECX;
  
  return in_ECX + 4;
}


/* ==== 00473770 FUN_00473770 ==== */

/* WARNING: Removing unreachable block (ram,0x0047378a) */

void FUN_00473770(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (in_ECX + 4 == param_1) {
    if (*(uint *)(in_ECX + 0xc) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(in_ECX + 0xc) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)(in_ECX + 8);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)(in_ECX + 0xc) - iVar7;
      cVar2 = FUN_00402a00(iVar7,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar7);
      }
    }
    FUN_00402c30();
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      iVar7 = *(int *)(in_ECX + 8);
      if (iVar7 != 0) {
        cVar2 = *(char *)(iVar7 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(iVar7 + -1));
        }
        else {
          *(char *)(iVar7 + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(in_ECX + 8) = puVar4;
      *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_1 + 4);
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)(in_ECX + 0xc) = uVar1;
    *(undefined1 *)(*(int *)(in_ECX + 8) + uVar1) = 0;
  }
  return;
}


/* ==== 004738f0 FUN_004738f0 ==== */

void FUN_004738f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00473900 FUN_00473900 ==== */

void FUN_00473900(void)

{
  FUN_005584e0(&LAB_00473910);
  return;
}


/* ==== 00473930 FUN_00473930 ==== */

void FUN_00473930(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00473940 FUN_00473940 ==== */

void FUN_00473940(void)

{
  FUN_005584e0(&LAB_00473950);
  return;
}


/* ==== 00473960 FUN_00473960 ==== */

void FUN_00473960(void)

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
  FUN_0054b339(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


