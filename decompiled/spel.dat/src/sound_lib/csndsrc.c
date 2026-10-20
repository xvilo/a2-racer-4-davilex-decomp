/* spel.dat — sound_lib/csndsrc.cpp: 109 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049b5f0 FUN_0049b5f0 ==== */

undefined1 FUN_0049b5f0(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x3c);
}


/* ==== 0049b640 FUN_0049b640 ==== */

void FUN_0049b640(byte param_1)

{
  FUN_0049b3f0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0049b660 FUN_0049b660 ==== */

void FUN_0049b660(void)

{
  undefined4 *in_ECX;
  
  FUN_00498a90();
  *in_ECX = &PTR_FUN_00577158;
  return;
}


/* ==== 0049b680 FUN_0049b680 ==== */

void FUN_0049b680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e8d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498ad0(param_1,param_2,param_3,param_4,param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *in_ECX = &PTR_FUN_00577158;
  in_ECX[0xf] = param_5;
  FUN_00499390(&param_6);
  ExceptionList = local_c;
  return;
}


/* ==== 0049b700 FUN_0049b700 ==== */

void FUN_0049b700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e8ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498b70(param_1,param_2,param_3,param_4,param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *in_ECX = &PTR_FUN_00577158;
  in_ECX[0xf] = param_5;
  FUN_00499390(&param_6);
  ExceptionList = local_c;
  return;
}


/* ==== 0049b7e0 FUN_0049b7e0 ==== */

void FUN_0049b7e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e8fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00577158;
  local_4 = 0;
  FUN_00498ce0(in_ECX);
  local_4 = 0xffffffff;
  FUN_00498c10();
  ExceptionList = local_c;
  return;
}


/* ==== 0049b880 FUN_0049b880 ==== */

void FUN_0049b880(byte param_1)

{
  FUN_0049b7e0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0049b8a0 FUN_0049b8a0 ==== */

void FUN_0049b8a0(void)

{
  undefined4 *in_ECX;
  
  FUN_00498a90();
  *in_ECX = &PTR_FUN_00577164;
  return;
}


/* ==== 0049b8c0 FUN_0049b8c0 ==== */

void FUN_0049b8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498ad0(param_1,param_2,param_3,param_4,param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *in_ECX = &PTR_FUN_00577164;
  in_ECX[0xf] = param_5;
  FUN_00499390(&param_6);
  ExceptionList = local_c;
  return;
}


/* ==== 0049b940 FUN_0049b940 ==== */

void FUN_0049b940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e92a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498b70(param_1,param_2,param_3,param_4,param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *in_ECX = &PTR_FUN_00577164;
  in_ECX[0xf] = param_5;
  FUN_00499390(&param_6);
  ExceptionList = local_c;
  return;
}


/* ==== 0049ba20 FUN_0049ba20 ==== */

void FUN_0049ba20(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e93c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00577164;
  local_4 = 0;
  FUN_00498ce0(in_ECX);
  local_4 = 0xffffffff;
  FUN_00498c10();
  ExceptionList = local_c;
  return;
}


/* ==== 0049ba70 FUN_0049ba70 ==== */

undefined4 FUN_0049ba70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3c);
}


/* ==== 0049bac0 FUN_0049bac0 ==== */

void FUN_0049bac0(byte param_1)

{
  FUN_0049ba20();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0049bae0 FUN_0049bae0 ==== */

void FUN_0049bae0(void)

{
  int iVar1;
  char cVar2;
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_119;
  char local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e96c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 1) = local_119;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_4 = 0;
  in_ECX[6] = &PTR_LAB_00577174;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_119;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[7] = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,1);
  *in_ECX = &PTR_FUN_00577170;
  FUN_0056914e(local_110,0x104);
  i = 0xffffffff;
  pcVar3 = local_110;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  in_ECX[5] = 0;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    pcVar3 = local_110;
    pcVar4 = (char *)in_ECX[2];
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
    in_ECX[3] = i;
    *(undefined1 *)(in_ECX[2] + i) = 0;
  }
  if (-in_ECX[3] - 1 < 2) {
    FUN_0054b1b4();
  }
  i = in_ECX[3] + 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar1 = in_ECX[2];
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (i == 0) {
      if (iVar1 == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      FUN_004029e0(0);
      ExceptionList = pvStack_c;
      return;
    }
    if (i <= (uint)in_ECX[4]) goto LAB_0049bc1b;
  }
  else if (i == 0) {
    *(char *)(iVar1 + -1) = cVar2 + -1;
    FUN_004028f0(0);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00402b20(i);
LAB_0049bc1b:
  *(undefined1 *)(in_ECX[2] + in_ECX[3]) = 0x5c;
  in_ECX[3] = i;
  *(undefined1 *)(in_ECX[2] + i) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0049bc50 FUN_0049bc50 ==== */

void FUN_0049bc50(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int i;
  int iVar5;
  
  i = 0;
  *in_ECX = &PTR_FUN_00577170;
  if (0 < (int)in_ECX[5]) {
    do {
      iVar2 = in_ECX[7];
      puVar3 = *(undefined4 **)(iVar2 + 8);
      puVar4 = (undefined4 *)(*(int *)(iVar2 + 4) + 4);
      if (puVar4 != puVar3) {
        iVar5 = *(int *)(iVar2 + 4) - (int)puVar4;
        do {
          *(undefined4 *)(iVar5 + (int)puVar4) = *puVar4;
          puVar4 = puVar4 + 1;
        } while (puVar4 != puVar3);
      }
      i = i + 1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -4;
    } while (i < (int)in_ECX[5]);
  }
  i = in_ECX[7];
  in_ECX[6] = &PTR_LAB_00577174;
  if (i != 0) {
    FUN_0054b339(*(undefined4 *)(i + 4));
    *(undefined4 *)(i + 4) = 0;
    *(undefined4 *)(i + 8) = 0;
    *(undefined4 *)(i + 0xc) = 0;
    FUN_0054b339(i);
  }
  in_ECX[7] = 0;
  i = in_ECX[2];
  if (i != 0) {
    cVar1 = *(char *)(i + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(i + -1) = cVar1 + -1;
      in_ECX[2] = 0;
      in_ECX[3] = 0;
      in_ECX[4] = 0;
      return;
    }
    FUN_0054b339((char *)(i + -1));
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


/* ==== 0049bd10 FUN_0049bd10 ==== */

undefined4 FUN_0049bd10(int param_1)

{
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x14))) {
    return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + param_1 * 4);
  }
  return 0;
}


/* ==== 0049bd30 FUN_0049bd30 ==== */

void FUN_0049bd30(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int i;
  
  uVar2 = param_1;
  bVar1 = false;
  i = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    piVar3 = *(int **)(*(int *)(in_ECX + 0x1c) + 4);
    do {
      if (*piVar3 == 0) {
        bVar1 = true;
        break;
      }
      i = i + 1;
      piVar3 = piVar3 + 1;
    } while (i < *(int *)(in_ECX + 0x14));
  }
  FUN_00499380(in_ECX);
  if (bVar1) {
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + i * 4) = uVar2;
    return;
  }
  param_1 = uVar2;
  FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x1c) + 8),1,&param_1);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
  return;
}


/* ==== 0049bda0 FUN_0049bda0 ==== */

void FUN_0049bda0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + 4);
    piVar3 = piVar1;
    while (*piVar3 != param_1) {
      i = i + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)(in_ECX + 0x14) <= i) {
        return;
      }
    }
    puVar2 = (undefined4 *)piVar1[i];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + i * 4) = 0;
  }
  return;
}


/* ==== 0049bdf0 FUN_0049bdf0 ==== */

void FUN_0049bdf0(int param_1)

{
  int *piVar1;
  int i;
  int in_ECX;
  int *piVar2;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + 4);
    piVar2 = piVar1;
    while (*piVar2 != param_1) {
      i = i + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(in_ECX + 0x14) <= i) {
        return;
      }
    }
    piVar1[i] = 0;
  }
  return;
}


/* ==== 0049be30 FUN_0049be30 ==== */

void FUN_0049be30(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  
  FUN_004093c0(param_1,0,0xffffffff);
  if (*(int *)(param_1 + 4) == 0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)(*(int *)(param_1 + 8) + -1 + *(int *)(param_1 + 4));
  }
  if (*pcVar3 == '\\') {
    return;
  }
  if (-*(int *)(in_ECX + 0xc) - 1U < 2) {
    FUN_0054b1b4();
  }
  uVar4 = *(int *)(in_ECX + 0xc) + 1;
  if (0xfffffffd < uVar4) {
    FUN_0054b1b4();
  }
  puVar2 = *(undefined1 **)(in_ECX + 8);
  if (((puVar2 == (undefined1 *)0x0) || (cVar1 = puVar2[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      *(undefined4 *)(in_ECX + 0xc) = 0;
      *puVar2 = 0;
      return;
    }
    if (uVar4 <= *(uint *)(in_ECX + 0x10)) goto LAB_0049bed2;
  }
  else if (uVar4 == 0) {
    puVar2[-1] = cVar1 + -1;
    FUN_004028f0(0);
    return;
  }
  FUN_00402b20(uVar4);
LAB_0049bed2:
  *(undefined1 *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 8)) = 0x5c;
  *(uint *)(in_ECX + 0xc) = uVar4;
  *(undefined1 *)(uVar4 + *(int *)(in_ECX + 8)) = 0;
  return;
}


/* ==== 0049bef0 FUN_0049bef0 ==== */

int FUN_0049bef0(void)

{
  int in_ECX;
  
  return in_ECX + 4;
}


/* ==== 0049bf00 FUN_0049bf00 ==== */

undefined4 FUN_0049bf00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


/* ==== 0049bf10 FUN_0049bf10 ==== */

void FUN_0049bf10(void)

{
  char cVar1;
  int in_ECX;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + i * 4) != 0) {
        cVar1 = FUN_004993b0();
        if (cVar1 != '\0') {
          FUN_00499580(in_ECX + 4);
        }
      }
      i = i + 1;
    } while (i < *(int *)(in_ECX + 0x14));
  }
  return;
}


/* ==== 0049bf50 FUN_0049bf50 ==== */

void FUN_0049bf50(void)

{
  int in_ECX;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + i * 4) != 0) {
        FUN_00499960(in_ECX + 4);
      }
      i = i + 1;
    } while (i < *(int *)(in_ECX + 0x14));
  }
  return;
}


/* ==== 0049bfb0 FUN_0049bfb0 ==== */

void FUN_0049bfb0(byte param_1)

{
  FUN_0049bc50();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0049bfd0 FUN_0049bfd0 ==== */

void FUN_0049bfd0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00577174;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[1] = 0;
  return;
}


/* ==== 0049c040 FUN_0049c040 ==== */

/* WARNING: Removing unreachable block (ram,0x0049c0b3) */

undefined4 *
FUN_0049c040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,uint param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  uint i;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e99b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00498ad0(param_1,param_2,param_3,param_4,param_9);
  uVar1 = param_7;
  puVar4 = param_6;
  *(undefined1 *)(in_ECX + 0xf) = (undefined1)param_9;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  *in_ECX = &PTR_FUN_00577184;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (in_ECX + 0xf == &param_5) {
    FUN_0040f800(param_7,0xffffffff);
    FUN_0040f800(0,0);
    puVar4 = param_6;
  }
  else {
    if (param_7 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_6 != (undefined4 *)0x0) {
        puVar3 = param_6;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(1);
        puVar3 = (undefined4 *)&DAT_0057629c;
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = puVar4;
        }
        in_ECX[0x10] = puVar3;
        in_ECX[0x11] = param_7;
        in_ECX[0x12] = param_8;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_0049c164;
      }
    }
    cVar2 = FUN_00402a00(param_7,1);
    if (cVar2 != '\0') {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar3 = (undefined4 *)in_ECX[0x10];
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      in_ECX[0x11] = uVar1;
      *(undefined1 *)(in_ECX[0x10] + uVar1) = 0;
      puVar4 = param_6;
    }
  }
LAB_0049c164:
  param_9 = param_9 & 0xffffff00;
  FUN_00499390(&param_9);
  if (puVar4 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)puVar4 + -1));
    }
    else {
      *(char *)((int)puVar4 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return in_ECX;
}


/* ==== 0049c1b0 FUN_0049c1b0 ==== */

/* WARNING: Removing unreachable block (ram,0x0049c223) */

undefined4 *
FUN_0049c1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,uint param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  uint i;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e9c0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00498b70(param_1,param_2,param_3,param_4,param_9);
  uVar1 = param_7;
  puVar4 = param_6;
  *(undefined1 *)(in_ECX + 0xf) = (undefined1)param_9;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  *in_ECX = &PTR_FUN_00577184;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (in_ECX + 0xf == &param_5) {
    FUN_0040f800(param_7,0xffffffff);
    FUN_0040f800(0,0);
    puVar4 = param_6;
  }
  else {
    if (param_7 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_6 != (undefined4 *)0x0) {
        puVar3 = param_6;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(1);
        puVar3 = (undefined4 *)&DAT_0057629c;
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = puVar4;
        }
        in_ECX[0x10] = puVar3;
        in_ECX[0x11] = param_7;
        in_ECX[0x12] = param_8;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_0049c2d4;
      }
    }
    cVar2 = FUN_00402a00(param_7,1);
    if (cVar2 != '\0') {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar3 = (undefined4 *)in_ECX[0x10];
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      in_ECX[0x11] = uVar1;
      *(undefined1 *)(in_ECX[0x10] + uVar1) = 0;
      puVar4 = param_6;
    }
  }
LAB_0049c2d4:
  param_9 = param_9 & 0xffffff00;
  FUN_00499390(&param_9);
  if (puVar4 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)puVar4 + -1));
    }
    else {
      *(char *)((int)puVar4 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return in_ECX;
}


/* ==== 0049c5b0 FUN_0049c5b0 ==== */

void FUN_0049c5b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e9dd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00577184;
  local_4 = 1;
  FUN_00498ce0(in_ECX);
  iVar2 = in_ECX[0x10];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  local_4 = 0xffffffff;
  FUN_00498c10();
  ExceptionList = local_c;
  return;
}


/* ==== 0049c640 FUN_0049c640 ==== */

/* WARNING: Removing unreachable block (ram,0x0049c670) */

undefined1 * FUN_0049c640(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *param_1 = *(undefined1 *)(in_ECX + 0x3c);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(uint *)(in_ECX + 0x44);
  if (param_1 == (undefined1 *)(in_ECX + 0x3c)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(param_1 + 8) - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + *(int *)(param_1 + 4),uVar1 + *(int *)(param_1 + 4) + iVar5,iVar3 - iVar5
                  );
      iVar3 = *(int *)(param_1 + 8);
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
    return param_1;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(in_ECX + 0x40);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      FUN_004028f0(1);
      puVar4 = *(undefined1 **)(in_ECX + 0x40);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0x48);
      puVar4[-1] = puVar4[-1] + '\x01';
      return param_1;
    }
  }
  cVar2 = FUN_00402a00(uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = *(undefined4 **)(in_ECX + 0x40);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&DAT_0057629c;
    }
    puVar7 = *(undefined4 **)(param_1 + 4);
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
    *(uint *)(param_1 + 8) = uVar1;
    *(undefined1 *)(uVar1 + *(int *)(param_1 + 4)) = 0;
  }
  return param_1;
}


/* ==== 0049c8f0 FUN_0049c8f0 ==== */

void FUN_0049c8f0(byte param_1)

{
  FUN_0049c5b0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0049c910 FUN_0049c910 ==== */

void FUN_0049c910(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576f8c;
  in_ECX[1] = 0;
  return;
}


/* ==== 0049c920 FUN_0049c920 ==== */

void FUN_0049c920(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576f8c;
  return;
}


/* ==== 0049c930 FUN_0049c930 ==== */

void FUN_0049c930(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  uVar1 = FUN_00448470(0);
  *(undefined4 *)(in_ECX + 0x30) = uVar1;
  *(undefined4 *)(in_ECX + 0x34) = uVar1;
  return;
}


/* ==== 0049c950 FUN_0049c950 ==== */

void FUN_0049c950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int in_ECX;
  
  FUN_0049c9b0();
  *param_1 = *(undefined4 *)(in_ECX + 0xc);
  param_1[1] = *(undefined4 *)(in_ECX + 0x10);
  param_1[2] = *(undefined4 *)(in_ECX + 0x14);
  *param_2 = *(undefined4 *)(in_ECX + 0x18);
  param_2[1] = *(undefined4 *)(in_ECX + 0x1c);
  param_2[2] = *(undefined4 *)(in_ECX + 0x20);
  *param_3 = *(undefined4 *)(in_ECX + 0x24);
  param_3[1] = *(undefined4 *)(in_ECX + 0x28);
  param_3[2] = *(undefined4 *)(in_ECX + 0x2c);
  return;
}


/* ==== 0049c9b0 FUN_0049c9b0 ==== */

void FUN_0049c9b0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) && (*(int *)(in_ECX + 8) == 0)) {
    if (iVar1 == 1) {
      FUN_0049cc40();
      return;
    }
    if (iVar1 == 2) {
      FUN_0049cac0();
      return;
    }
    if (iVar1 == 3) {
      FUN_0049cb30();
      return;
    }
  }
  return;
}


/* ==== 0049c9e0 FUN_0049c9e0 ==== */

void FUN_0049c9e0(undefined4 *param_1)

{
  int in_ECX;
  
  FUN_0049c9b0();
  *param_1 = *(undefined4 *)(in_ECX + 0xc);
  param_1[1] = *(undefined4 *)(in_ECX + 0x10);
  param_1[2] = *(undefined4 *)(in_ECX + 0x14);
  return;
}


/* ==== 0049ca10 FUN_0049ca10 ==== */

void FUN_0049ca10(undefined4 *param_1)

{
  int in_ECX;
  
  FUN_0049c9b0();
  *param_1 = *(undefined4 *)(in_ECX + 0x18);
  param_1[1] = *(undefined4 *)(in_ECX + 0x1c);
  param_1[2] = *(undefined4 *)(in_ECX + 0x20);
  return;
}


/* ==== 0049ca40 FUN_0049ca40 ==== */

void FUN_0049ca40(undefined4 *param_1)

{
  int in_ECX;
  
  FUN_0049c9b0();
  *param_1 = *(undefined4 *)(in_ECX + 0x24);
  param_1[1] = *(undefined4 *)(in_ECX + 0x28);
  param_1[2] = *(undefined4 *)(in_ECX + 0x2c);
  return;
}


/* ==== 0049ca80 FUN_0049ca80 ==== */

undefined4 FUN_0049ca80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


/* ==== 0049ca90 FUN_0049ca90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ca90(void)

{
  float fVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  fVar1 = _DAT_005b23b8 * 0.0027777778;
  *(undefined4 *)(in_ECX + 4) = 2;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(float *)(in_ECX + 0x38) = fVar1 * 160.0;
  return;
}


/* ==== 0049cac0 FUN_0049cac0 ==== */

void FUN_0049cac0(void)

{
  float fVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = 0;
  if ((0.0 < (float)DAT_006fba64) &&
     (fVar1 = ((float)DAT_006fba64 / 200.0) * *(float *)(in_ECX + 0x38),
     *(float *)(in_ECX + 0x20) = fVar1, *(float *)(in_ECX + 0x38) <= fVar1)) {
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0x38);
    return;
  }
  return;
}


/* ==== 0049cb00 FUN_0049cb00 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cb00(void)

{
  float fVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  fVar1 = _DAT_005b23b8 * 0.5;
  *(undefined4 *)(in_ECX + 4) = 3;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(float *)(in_ECX + 0x3c) = fVar1;
  return;
}


/* ==== 0049cb30 FUN_0049cb30 ==== */

void FUN_0049cb30(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = 0;
  if (0.0 < (float)DAT_006fba74) {
    *(float *)(in_ECX + 0x20) = ((float)DAT_006fba74 / 100.0) * *(float *)(in_ECX + 0x3c);
    return;
  }
  return;
}


/* ==== 0049cb60 FUN_0049cb60 ==== */

void FUN_0049cb60(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  int in_ECX;
  
  *(float *)(in_ECX + 0x40) = *param_2;
  *(float *)(in_ECX + 0x44) = param_2[1];
  *(float *)(in_ECX + 0x48) = param_2[2];
  pfVar1 = (float *)(in_ECX + 0x58);
  *pfVar1 = *param_1;
  *(float *)(in_ECX + 0x5c) = param_1[1];
  fVar2 = param_1[2];
  *(undefined4 *)(in_ECX + 4) = 1;
  *(float *)(in_ECX + 0x60) = fVar2;
  *(undefined4 *)(in_ECX + 0x24) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x28) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x2c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(float *)(in_ECX + 0xc) = *pfVar1;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x60);
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x40) - *pfVar1;
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x5c);
  *(float *)(in_ECX + 0x70) = *(float *)(in_ECX + 0x48) - *(float *)(in_ECX + 0x60);
  if (0.0 < *param_3) {
    *(float *)(in_ECX + 0x74) = *param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 0x74) = 0x3dcccccd;
  return;
}


/* ==== 0049cc40 FUN_0049cc40 ==== */

void FUN_0049cc40(void)

{
  float fVar1;
  uint __ftol_result;
  int in_ECX;
  float10 fVar2;
  
  __ftol_result = __ftol();
  fVar1 = *(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4);
  *(float *)(in_ECX + 0xc) = fVar1 * *(float *)(in_ECX + 0x68) + *(float *)(in_ECX + 0x58);
  *(float *)(in_ECX + 0x10) = fVar1 * *(float *)(in_ECX + 0x6c) + *(float *)(in_ECX + 0x5c);
  *(float *)(in_ECX + 0x14) = fVar1 * *(float *)(in_ECX + 0x70) + *(float *)(in_ECX + 0x60);
  fVar2 = (float10)FUN_004a6800();
  fVar2 = fVar2 + (float10)*(float *)(in_ECX + 100);
  *(float *)(in_ECX + 100) = (float)fVar2;
  if ((float10)*(float *)(in_ECX + 0x74) <= fVar2) {
    *(undefined4 *)(in_ECX + 8) = 1;
  }
  return;
}


/* ==== 0049cd20 FUN_0049cd20 ==== */

void FUN_0049cd20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0049cd30 FUN_0049cd30 ==== */

void FUN_0049cd30(void)

{
  FUN_005584e0(&LAB_0049cd40);
  return;
}


/* ==== 0049cd60 FUN_0049cd60 ==== */

void FUN_0049cd60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0049cd70 FUN_0049cd70 ==== */

void FUN_0049cd70(void)

{
  FUN_005584e0(&LAB_0049cd80);
  return;
}


/* ==== 0049cd90 FUN_0049cd90 ==== */

void FUN_0049cd90(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint i;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056ea21;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 2) = local_15;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 6) = local_15;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 10) = local_15;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  i = 0xffffffff;
  *in_ECX = &PTR_FUN_0057719c;
  pcVar5 = (char *)&DAT_00712854;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~i - 1;
  local_4 = 2;
  i = FUN_004095c0();
  if (i < uVar3) {
    FUN_0054b1b4();
  }
  iVar2 = in_ECX[3];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(1);
      goto LAB_0049ce90;
    }
    if ((0x1f < (uint)in_ECX[5]) || ((uint)in_ECX[5] < uVar3)) {
      FUN_004028f0(1);
      goto LAB_0049ce64;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(0);
      goto LAB_0049ce90;
    }
LAB_0049ce64:
    FUN_00402b20(uVar3);
  }
  puVar4 = &DAT_00712854;
  puVar6 = (undefined4 *)in_ECX[3];
  for (i = uVar3 >> 2; i != 0; i = i - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (i = uVar3 & 3; i != 0; i = i - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_004029e0(uVar3);
LAB_0049ce90:
  *(undefined1 *)(in_ECX + 0xf) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0049ceb0 FUN_0049ceb0 ==== */

void FUN_0049ceb0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0057719c;
  iVar2 = in_ECX[0xb];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  iVar2 = in_ECX[7];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  iVar2 = in_ECX[3];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      in_ECX[3] = 0;
      in_ECX[4] = 0;
      in_ECX[5] = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  return;
}


/* ==== 0049cf50 FUN_0049cf50 ==== */

void FUN_0049cf50(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}


/* ==== 0049cf60 FUN_0049cf60 ==== */

/* WARNING: Removing unreachable block (ram,0x0049cf7a) */

void FUN_0049cf60(int param_1)

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
  if (in_ECX + 0x28 == param_1) {
    if (*(uint *)(in_ECX + 0x30) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(in_ECX + 0x30) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)(in_ECX + 0x2c);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)(in_ECX + 0x30) - iVar7;
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
      iVar7 = *(int *)(in_ECX + 0x2c);
      if (iVar7 != 0) {
        cVar2 = *(char *)(iVar7 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(iVar7 + -1));
        }
        else {
          *(char *)(iVar7 + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)(in_ECX + 0x2c) = 0;
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(undefined4 *)(in_ECX + 0x34) = 0;
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(in_ECX + 0x2c) = puVar4;
      *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0xc);
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
    puVar8 = *(undefined4 **)(in_ECX + 0x2c);
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
    *(uint *)(in_ECX + 0x30) = uVar1;
    *(undefined1 *)(*(int *)(in_ECX + 0x2c) + uVar1) = 0;
  }
  return;
}


/* ==== 0049d0a0 FUN_0049d0a0 ==== */

void FUN_0049d0a0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  return;
}


/* ==== 0049d0b0 FUN_0049d0b0 ==== */

void FUN_0049d0b0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  uint i;
  
  FUN_004093c0(param_1,0,0xffffffff);
  i = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if ((*(uint *)(in_ECX + 0x10) < i) || (*(int *)(in_ECX + 0xc) == 0)) {
        pcVar4 = "";
      }
      else {
        cVar1 = *(char *)(*(int *)(in_ECX + 0xc) + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          FUN_00402a00(*(uint *)(in_ECX + 0x10),0);
        }
        if (*(int *)(in_ECX + 0xc) != 0) {
          *(undefined1 *)(*(int *)(in_ECX + 0xc) + -1) = 0xff;
        }
        pcVar4 = (char *)(*(int *)(in_ECX + 0xc) + i);
      }
      if ('`' < *pcVar4) {
        if ((*(uint *)(in_ECX + 0x10) < i) || (*(int *)(in_ECX + 0xc) == 0)) {
          pcVar4 = "";
        }
        else {
          cVar1 = *(char *)(*(int *)(in_ECX + 0xc) + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            FUN_00402a00(*(uint *)(in_ECX + 0x10),0);
          }
          if (*(int *)(in_ECX + 0xc) != 0) {
            *(undefined1 *)(*(int *)(in_ECX + 0xc) + -1) = 0xff;
          }
          pcVar4 = (char *)(*(int *)(in_ECX + 0xc) + i);
        }
        if (*pcVar4 < '{') {
          uVar2 = *(uint *)(in_ECX + 0x10);
          if ((uVar2 < i) || (*(int *)(in_ECX + 0xc) == 0)) {
            pcVar4 = "";
          }
          else {
            cVar1 = *(char *)(*(int *)(in_ECX + 0xc) + -1);
            if ((cVar1 != '\0') && (cVar1 != -1)) {
              if (0xfffffffd < uVar2) {
                FUN_0054b1b4();
              }
              iVar3 = *(int *)(in_ECX + 0xc);
              if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1))
              {
                if (uVar2 == 0) {
                  if (iVar3 != 0) {
                    FUN_004029e0(0);
                  }
                }
                else if (*(uint *)(in_ECX + 0x14) < uVar2) goto LAB_0049d1bd;
              }
              else if (uVar2 == 0) {
                *(char *)(iVar3 + -1) = cVar1 + -1;
                FUN_004028f0(0);
              }
              else {
LAB_0049d1bd:
                FUN_00402b20(uVar2);
              }
            }
            if (*(int *)(in_ECX + 0xc) != 0) {
              *(undefined1 *)(*(int *)(in_ECX + 0xc) + -1) = 0xff;
            }
            pcVar4 = (char *)(*(int *)(in_ECX + 0xc) + i);
          }
          *pcVar4 = *pcVar4 + -0x20;
        }
      }
      i = i + 1;
    } while (i < *(uint *)(param_1 + 8));
  }
  return;
}


/* ==== 0049d200 FUN_0049d200 ==== */

undefined4 FUN_0049d200(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


/* ==== 0049d210 FUN_0049d210 ==== */

int FUN_0049d210(void)

{
  int in_ECX;
  
  return in_ECX + 0x28;
}


/* ==== 0049d220 FUN_0049d220 ==== */

int FUN_0049d220(void)

{
  int in_ECX;
  
  return in_ECX + 8;
}


/* ==== 0049d230 FUN_0049d230 ==== */

undefined4 FUN_0049d230(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


/* ==== 0049d240 FUN_0049d240 ==== */

undefined1 FUN_0049d240(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x3c);
}


/* ==== 0049d250 FUN_0049d250 ==== */

void FUN_0049d250(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x3c) = param_1;
  return;
}


/* ==== 0049d290 FUN_0049d290 ==== */

void FUN_0049d290(byte param_1)

{
  FUN_0049ceb0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0049d2b0 FUN_0049d2b0 ==== */

undefined4 * FUN_0049d2b0(void)

{
  int iVar1;
  char cVar2;
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
  
  puStack_8 = &LAB_0056ea46;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 7) = local_15;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0xb) = local_15;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[2] = 0x14;
  in_ECX[3] = 0x14;
  i = 0xffffffff;
  *in_ECX = &PTR_FUN_005771a0;
  in_ECX[1] = 100;
  pcVar4 = &DAT_00712858;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  local_4 = 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)&DAT_00712858;
    puVar5 = (undefined4 *)in_ECX[0xc];
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
    in_ECX[0xd] = i;
    *(undefined1 *)(in_ECX[0xc] + i) = 0;
  }
  i = 0xffffffff;
  pcVar4 = &DAT_0071285c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar1 = in_ECX[8];
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      ExceptionList = pvStack_c;
      return in_ECX;
    }
    if (((uint)in_ECX[10] < 0x20) && (i <= (uint)in_ECX[10])) goto LAB_0049d3f7;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar1 + -1) = cVar2 + -1;
    FUN_004028f0(0);
    ExceptionList = pvStack_c;
    return in_ECX;
  }
  FUN_00402b20(i);
LAB_0049d3f7:
  puVar3 = (undefined4 *)&DAT_0071285c;
  puVar5 = (undefined4 *)in_ECX[8];
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
  in_ECX[9] = i;
  *(undefined1 *)(in_ECX[8] + i) = 0;
  ExceptionList = pvStack_c;
  return in_ECX;
}


/* ==== 0049d430 FUN_0049d430 ==== */

void FUN_0049d430(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056ea6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 7) = (undefined1)param_5;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0xb) = (undefined1)param_5;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[1] = param_5;
  *in_ECX = &PTR_FUN_005771a0;
  in_ECX[2] = param_6;
  in_ECX[3] = param_7;
  local_4 = 2;
  FUN_004093c0(param_8,0,0xffffffff);
  FUN_004093c0(&param_1,0,0xffffffff);
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(param_2 + -1);
    }
    else {
      *(char *)(param_2 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0049d500 FUN_0049d500 ==== */

/* WARNING: Removing unreachable block (ram,0x0049d597) */

void FUN_0049d500(undefined4 *param_1)

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
  
  puStack_8 = &LAB_0056ea8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 7) = param_1._0_1_;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0xb) = param_1._0_1_;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  local_4 = 1;
  *in_ECX = &PTR_FUN_005771a0;
  if (in_ECX != param_1) {
    in_ECX[1] = param_1[1];
    in_ECX[2] = param_1[2];
    in_ECX[3] = param_1[3];
    FUN_004093c0(param_1 + 7,0,0xffffffff);
    uVar1 = param_1[0xd];
    if (in_ECX + 0xb == param_1 + 0xb) {
      if ((uint)in_ECX[0xd] < uVar1) {
        FUN_0054b29c();
      }
      FUN_00402c30();
      iVar3 = in_ECX[0xd] - uVar1;
      iVar5 = -1;
      if (iVar3 != -1) {
        iVar5 = iVar3;
      }
      if (iVar5 != 0) {
        FUN_005580e0(uVar1 + in_ECX[0xc],uVar1 + in_ECX[0xc] + iVar5,iVar3 - iVar5);
        iVar3 = in_ECX[0xd];
        cVar2 = FUN_00402a00(iVar3 - iVar5,0);
        if (cVar2 != '\0') {
          FUN_004029e0(iVar3 - iVar5);
        }
      }
      FUN_0040f800(0,0);
    }
    else {
      if (uVar1 != 0) {
        puVar4 = (undefined1 *)param_1[0xc];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          FUN_004028f0(1);
          puVar4 = (undefined1 *)param_1[0xc];
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          in_ECX[0xc] = puVar4;
          in_ECX[0xd] = param_1[0xd];
          in_ECX[0xe] = param_1[0xe];
          puVar4[-1] = puVar4[-1] + '\x01';
          ExceptionList = local_c;
          return;
        }
      }
      cVar2 = FUN_00402a00(uVar1,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)param_1[0xc];
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0057629c;
        }
        puVar7 = (undefined4 *)in_ECX[0xc];
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
        in_ECX[0xd] = uVar1;
        *(undefined1 *)(in_ECX[0xc] + uVar1) = 0;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0049d6a0 FUN_0049d6a0 ==== */

void FUN_0049d6a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_005771a0;
  iVar2 = in_ECX[0xc];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  iVar2 = in_ECX[8];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      in_ECX[8] = 0;
      in_ECX[9] = 0;
      in_ECX[10] = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  return;
}


/* ==== 0049d720 FUN_0049d720 ==== */

int FUN_0049d720(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    iVar1 = FUN_0049dd50();
    if (iVar1 != 0) {
      FUN_0049dd50();
      iVar1 = FUN_0049d200();
      iVar2 = FUN_0049d200();
      if (iVar2 < iVar1) {
        return -1;
      }
      FUN_0049dd50();
      iVar1 = FUN_0049d200();
      iVar2 = FUN_0049d200();
      if (iVar1 < iVar2) {
        return 1;
      }
    }
  }
  if (*(int *)(in_ECX + 4) != *(int *)(param_1 + 4)) {
    return ((*(int *)(param_1 + 4) <= *(int *)(in_ECX + 4)) - 1 & 0xfffffffe) + 1;
  }
  if (*(int *)(in_ECX + 8) == *(int *)(param_1 + 8)) {
    return 0;
  }
  return ((*(int *)(param_1 + 8) <= *(int *)(in_ECX + 8)) - 1 & 0xfffffffe) + 1;
}


/* ==== 0049d7d0 FUN_0049d7d0 ==== */

uint FUN_0049d7d0(void)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  uint i;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = *(uint *)(in_ECX + 4);
  if ((-1 < (int)uVar2) && (uVar2 = *(uint *)(in_ECX + 8), 0 < (int)uVar2)) {
    i = 0xffffffff;
    pcVar6 = &DAT_00712860;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = *(uint *)(in_ECX + 0x24);
    uVar3 = ~i - 1;
    i = uVar2;
    if (uVar3 <= uVar2) {
      i = uVar3;
    }
    bVar8 = false;
    iVar4 = 0;
    bVar9 = true;
    pbVar5 = *(byte **)(in_ECX + 0x20);
    pbVar7 = &DAT_00712860;
    do {
      if (i == 0) break;
      i = i - 1;
      bVar8 = *pbVar5 < *pbVar7;
      bVar9 = *pbVar5 == *pbVar7;
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if ((((iVar4 != 0) || (uVar2 < uVar3)) || (uVar2 != uVar3)) &&
       (uVar2 = 0, *(int *)(in_ECX + 0x18) != 0)) {
      return CONCAT31((int3)((uint)*(int *)(in_ECX + 0x18) >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


/* ==== 0049d840 FUN_0049d840 ==== */

void FUN_0049d840(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  return;
}


/* ==== 0049d850 FUN_0049d850 ==== */

void FUN_0049d850(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}


/* ==== 0049d860 FUN_0049d860 ==== */

void FUN_0049d860(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  return;
}


/* ==== 0049d870 FUN_0049d870 ==== */

void FUN_0049d870(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  return;
}


/* ==== 0049d880 FUN_0049d880 ==== */

void FUN_0049d880(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  uint i;
  
  FUN_004093c0(param_1,0,0xffffffff);
  i = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if ((*(uint *)(in_ECX + 0x24) < i) || (*(int *)(in_ECX + 0x20) == 0)) {
        pcVar4 = "";
      }
      else {
        cVar1 = *(char *)(*(int *)(in_ECX + 0x20) + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          FUN_00402a00(*(uint *)(in_ECX + 0x24),0);
        }
        if (*(int *)(in_ECX + 0x20) != 0) {
          *(undefined1 *)(*(int *)(in_ECX + 0x20) + -1) = 0xff;
        }
        pcVar4 = (char *)(*(int *)(in_ECX + 0x20) + i);
      }
      if ('`' < *pcVar4) {
        if ((*(uint *)(in_ECX + 0x24) < i) || (*(int *)(in_ECX + 0x20) == 0)) {
          pcVar4 = "";
        }
        else {
          cVar1 = *(char *)(*(int *)(in_ECX + 0x20) + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            FUN_00402a00(*(uint *)(in_ECX + 0x24),0);
          }
          if (*(int *)(in_ECX + 0x20) != 0) {
            *(undefined1 *)(*(int *)(in_ECX + 0x20) + -1) = 0xff;
          }
          pcVar4 = (char *)(*(int *)(in_ECX + 0x20) + i);
        }
        if (*pcVar4 < '{') {
          uVar2 = *(uint *)(in_ECX + 0x24);
          if ((uVar2 < i) || (*(int *)(in_ECX + 0x20) == 0)) {
            pcVar4 = "";
          }
          else {
            cVar1 = *(char *)(*(int *)(in_ECX + 0x20) + -1);
            if ((cVar1 != '\0') && (cVar1 != -1)) {
              if (0xfffffffd < uVar2) {
                FUN_0054b1b4();
              }
              iVar3 = *(int *)(in_ECX + 0x20);
              if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1))
              {
                if (uVar2 == 0) {
                  if (iVar3 != 0) {
                    FUN_004029e0(0);
                  }
                }
                else if (*(uint *)(in_ECX + 0x28) < uVar2) goto LAB_0049d98d;
              }
              else if (uVar2 == 0) {
                *(char *)(iVar3 + -1) = cVar1 + -1;
                FUN_004028f0(0);
              }
              else {
LAB_0049d98d:
                FUN_00402b20(uVar2);
              }
            }
            if (*(int *)(in_ECX + 0x20) != 0) {
              *(undefined1 *)(*(int *)(in_ECX + 0x20) + -1) = 0xff;
            }
            pcVar4 = (char *)(*(int *)(in_ECX + 0x20) + i);
          }
          *pcVar4 = *pcVar4 + -0x20;
        }
      }
      i = i + 1;
    } while (i < *(uint *)(param_1 + 8));
  }
  return;
}


/* ==== 0049d9d0 FUN_0049d9d0 ==== */

undefined1 *
FUN_0049d9d0(undefined1 *param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint k;
  int iVar7;
  int j;
  uint local_28;
  uint local_24;
  int i;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eaa0;
  local_c = ExceptionList;
  i = 0;
  j = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  k = 0;
  local_4 = 0;
  iVar5 = 0;
  piVar6 = param_3;
  iVar7 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      iVar5 = j;
      iVar7 = i;
      if (param_6 <= j) break;
      iVar5 = *(int *)(param_2 + 4);
      pcVar4 = "";
      if (iVar5 != 0) {
        pcVar4 = (char *)(iVar5 + k);
      }
      if (*pcVar4 == '#') {
        i = i + 1;
        j = j + 1;
        *piVar6 = (k - i) + 1;
        piVar6 = piVar6 + 1;
        local_28 = k;
      }
      else {
        if (iVar5 == 0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)(iVar5 + k);
        }
        if (*pcVar4 == ' ') {
          local_24 = k;
        }
        if (param_5 <= (int)(k - local_28)) {
          local_28 = local_24;
          j = j + 1;
          *piVar6 = (local_24 - i) + 1;
          piVar6 = piVar6 + 1;
          local_24 = k;
        }
        if (*(int *)(param_2 + 4) == 0) {
          puVar3 = &DAT_0057629c;
        }
        else {
          puVar3 = (undefined1 *)(*(int *)(param_2 + 4) + k);
        }
        uVar1 = *puVar3;
        if (-local_14 - 1U < 2) {
          FUN_0054b1b4();
        }
        iVar5 = local_14 + 1;
        cVar2 = FUN_00402a00(iVar5,0);
        if (cVar2 != '\0') {
          *(undefined1 *)(local_14 + local_18) = uVar1;
          *(undefined1 *)(local_18 + iVar5) = 0;
          local_14 = iVar5;
        }
      }
      k = k + 1;
      iVar5 = j;
      iVar7 = i;
    } while (k < *(uint *)(param_2 + 8));
  }
  param_3[iVar5] = k - iVar7;
  *param_4 = iVar5;
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}


/* ==== 0049dba0 FUN_0049dba0 ==== */

/* WARNING: Removing unreachable block (ram,0x0049dbfa) */

void FUN_0049dba0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int in_ECX;
  uint i;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eab2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0049d9d0(local_1c,param_1,in_ECX + 0x40,in_ECX + 0x3c,param_2,4);
  uVar1 = *(uint *)(iVar3 + 8);
  local_4 = 0;
  if (in_ECX + 0x2c == iVar3) {
    if (*(uint *)(in_ECX + 0x34) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar4 = *(int *)(in_ECX + 0x34) - uVar1;
    iVar3 = -1;
    if (iVar4 != -1) {
      iVar3 = iVar4;
    }
    if (iVar3 != 0) {
      iVar6 = uVar1 + *(int *)(in_ECX + 0x30);
      FUN_005580e0(iVar6,iVar3 + iVar6,iVar4 - iVar3);
      iVar3 = *(int *)(in_ECX + 0x34) - iVar3;
      cVar2 = FUN_00402a00(iVar3,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3);
      }
    }
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar5 = *(undefined1 **)(iVar3 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar5 = *(undefined1 **)(iVar3 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)(in_ECX + 0x30) = puVar5;
        *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(iVar3 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_0049dcdc;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(iVar3 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(iVar3 + 4);
      }
      puVar8 = *(undefined4 **)(in_ECX + 0x30);
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
      FUN_004029e0(uVar1);
    }
  }
LAB_0049dcdc:
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0049dd30 FUN_0049dd30 ==== */

void FUN_0049dd30(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  return;
}


/* ==== 0049dd40 FUN_0049dd40 ==== */

void FUN_0049dd40(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  return;
}


/* ==== 0049dd50 FUN_0049dd50 ==== */

undefined4 FUN_0049dd50(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


/* ==== 0049dd60 FUN_0049dd60 ==== */

undefined4 FUN_0049dd60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


/* ==== 0049dd70 FUN_0049dd70 ==== */

undefined4 FUN_0049dd70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


/* ==== 0049dd80 FUN_0049dd80 ==== */

undefined4 FUN_0049dd80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


/* ==== 0049dd90 FUN_0049dd90 ==== */

int FUN_0049dd90(void)

{
  int in_ECX;
  
  return in_ECX + 0x1c;
}


/* ==== 0049dda0 FUN_0049dda0 ==== */

undefined1 * FUN_0049dda0(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ead4;
  local_c = ExceptionList;
  local_3c[0] = param_1._0_1_;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  local_4 = 0;
  if ((param_2 < 0) || (*(int *)(in_ECX + 0x3c) < param_2)) {
    *param_1 = local_3c[0];
    FUN_004028f0(0);
    FUN_004093c0(local_3c,0,0xffffffff);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x40 + param_2 * 4);
    if (param_2 == 0) {
      uVar4 = FUN_00479520(local_1c,0,iVar2);
      local_4._0_1_ = 1;
      FUN_004093c0(uVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(1);
    }
    else {
      iVar3 = *(int *)(in_ECX + 0x3c + param_2 * 4);
      uVar4 = FUN_00479520(local_2c,iVar3,iVar2 - iVar3);
      local_4._0_1_ = 2;
      FUN_004093c0(uVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
    }
    *param_1 = local_3c[0];
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_004093c0(local_3c,0,0xffffffff);
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_38 + -1);
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}


/* ==== 0049df20 FUN_0049df20 ==== */

undefined4 FUN_0049df20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


/* ==== 0049df30 FUN_0049df30 ==== */

undefined4 FUN_0049df30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


/* ==== 0049df70 FUN_0049df70 ==== */

void FUN_0049df70(byte param_1)

{
  FUN_0049d6a0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0049df90 FUN_0049df90 ==== */

undefined1 * FUN_0049df90(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_405;
  char local_400 [1024];
  
  FUN_00559854(local_400,0x400,param_2,&stack0x0000000c);
  i = 0xffffffff;
  *param_1 = local_405;
  *(undefined4 *)(param_1 + 4) = 0;
  pcVar3 = local_400;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (i <= *(uint *)(param_1 + 0xc))) goto LAB_0049e05a;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return param_1;
  }
  FUN_00402b20(i);
LAB_0049e05a:
  pcVar3 = local_400;
  pcVar4 = *(char **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = i;
  *(undefined1 *)(*(int *)(param_1 + 4) + i) = 0;
  return param_1;
}


/* ==== 0049e0c0 FUN_0049e0c0 ==== */

void FUN_0049e0c0(void)

{
  int in_ECX;
  
  FUN_004c3fa0(s_____Dump_of_object_CSndSource____005ae6a8);
  FUN_0049f2d0();
  FUN_004c3fa0(s_m_SndBuffer___d_005ae694,*(undefined4 *)(in_ECX + 0x38));
  FUN_004c3fa0(s_Original_frequency___d_005ae67c,*(undefined4 *)(in_ECX + 0x3c));
  FUN_004c3fa0(s_ID___d_005ae674,*(undefined4 *)(in_ECX + 0x40));
  FUN_004c3fa0(s_Created___d_005ae664,*(undefined4 *)(in_ECX + 0x44));
  FUN_004c3fa0(s_Current_pitch___d_005ae650,*(undefined4 *)(in_ECX + 0x4c));
  FUN_004c3fa0(s_Current_volume__d_005ae63c,*(undefined4 *)(in_ECX + 0x48));
  FUN_004c3fa0(s_PreMaster_volume__d_005ae624,*(undefined4 *)(in_ECX + 0x54));
  FUN_004c3fa0(s_Current_panning__d_005ae610,*(undefined4 *)(in_ECX + 0x50));
  return;
}


/* ==== 0049e150 FUN_0049e150 ==== */

void FUN_0049e150(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x3c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x40) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 100;
  *(undefined4 *)(in_ECX + 0x54) = 100;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return;
}


/* ==== 0049e180 FUN_0049e180 ==== */

void FUN_0049e180(void)

{
  FUN_0049f360();
  FUN_0049e150();
  return;
}


/* ==== 0049e1a0 FUN_0049e1a0 ==== */

void FUN_0049e1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f360();
  local_4 = 0;
  FUN_0049e150();
  FUN_0049e260(param_1,param_2,param_3);
  ExceptionList = local_c;
  return;
}


/* ==== 0049e200 FUN_0049e200 ==== */

void FUN_0049e200(void)

{
  int iVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056eb08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    FUN_004c6e50(*(undefined4 *)(in_ECX + 0x38));
  }
  local_4 = 0xffffffff;
  FUN_0049f4c0();
  ExceptionList = local_c;
  return;
}


/* ==== 0049e260 FUN_0049e260 ==== */

void FUN_0049e260(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  char *str2;
  
  puVar1 = *(undefined1 **)(param_2 + 0x1c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0057629c;
  }
  FUN_004a0100(*(int *)(in_ECX + 0x44) == 0,s__s___d__Sound_source_already_cre_005ae704,
               s_C__work_sound_lib_csndsrc_cpp_005ae738,0xb0,puVar1);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_2 + 0x14);
  FUN_004093c0(param_2 + 0x18,0,0xffffffff);
  FUN_004093c0(param_2 + 0x28,0,0xffffffff);
  FUN_004a0100(param_3 != -1,s__s___d__Illegal_value_for_Sound_s_005ae6cc,s___csndsrc_h_005ae6f8,
               0xe2);
  *(undefined4 *)(in_ECX + 0x58) = param_1;
  *(int *)(in_ECX + 0x40) = param_3;
  if (*(int *)(in_ECX + 4) != 0) {
    str2 = *(char **)(in_ECX + 0x1c);
    if (str2 == (char *)0x0) {
      str2 = "";
    }
    uVar2 = FUN_004c7c50(str2,0);
    *(undefined4 *)(in_ECX + 0x38) = uVar2;
  }
  *(undefined4 *)(in_ECX + 0x44) = 1;
  return;
}


/* ==== 0049e340 FUN_0049e340 ==== */

void FUN_0049e340(undefined4 param_1)

{
  int in_ECX;
  
  FUN_004a00b0(param_1,0,100,s_C__work_sound_lib_csndsrc_cpp_005ae738,0xd3);
  *(undefined4 *)(in_ECX + 0x48) = param_1;
  FUN_0049e3c0();
  return;
}


/* ==== 0049e370 FUN_0049e370 ==== */

int FUN_0049e370(int param_1)

{
  int iVar1;
  
  iVar1 = ((param_1 + -100) * 0xf3c) / 100 + -100;
  FUN_004a00b0(iVar1,0xfffff060,0xffffff9c,s_C__work_sound_lib_csndsrc_cpp_005ae738,0xf5);
  return iVar1;
}


/* ==== 0049e3c0 FUN_0049e3c0 ==== */

void FUN_0049e3c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    uVar2 = FUN_0049e660();
    uVar2 = FUN_0049e370(uVar2);
    FUN_004c75b0(*(undefined4 *)(in_ECX + 0x38),uVar2);
  }
  return;
}


/* ==== 0049e3f0 FUN_0049e3f0 ==== */

void FUN_0049e3f0(int param_1)

{
  int iVar1;
  int in_ECX;
  int local_4;
  
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    local_4 = (*(int *)(in_ECX + 0x3c) * param_1) / 100 + *(int *)(in_ECX + 0x3c);
    FUN_004a01a0(&local_4,100,100000);
    FUN_004c7460(*(undefined4 *)(in_ECX + 0x38),local_4);
    *(int *)(in_ECX + 0x4c) = param_1;
    return;
  }
  *(int *)(in_ECX + 0x4c) = param_1;
  return;
}


/* ==== 0049e460 FUN_0049e460 ==== */

void FUN_0049e460(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    FUN_004a00b0(param_1,0xffffd8f0,10000,s_C__work_sound_lib_csndsrc_cpp_005ae738,0x168);
    FUN_004c7670(*(undefined4 *)(in_ECX + 0x38),param_1);
    *(undefined4 *)(in_ECX + 0x50) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x50) = param_1;
  return;
}


/* ==== 0049e4b0 FUN_0049e4b0 ==== */

void FUN_0049e4b0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char *str2;
  
  uVar1 = FUN_0049e660();
  uVar1 = FUN_0049e370(uVar1);
  str2 = *(char **)(in_ECX + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar1 = FUN_004c7a10(str2,uVar1,(uint)(param_1 != 0));
  *(undefined4 *)(in_ECX + 0x38) = uVar1;
  FUN_004a0100(*(int *)(in_ECX + 0x40) != -1,s__s___d__ID_not_set_for_this_soun_005ae758,
               s_C__work_sound_lib_csndsrc_cpp_005ae738,0x193);
  FUN_004c7e20(*(undefined4 *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x40));
  FUN_004c7460(*(undefined4 *)(in_ECX + 0x38),0);
  uVar1 = FUN_004c7520(*(undefined4 *)(in_ECX + 0x38));
  *(undefined4 *)(in_ECX + 0x3c) = uVar1;
  FUN_0049e460(*(undefined4 *)(in_ECX + 0x50));
  FUN_0049e3f0(*(undefined4 *)(in_ECX + 0x4c));
  return;
}


/* ==== 0049e550 FUN_0049e550 ==== */

void FUN_0049e550(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049e630();
  if (iVar1 == 0) {
    FUN_0049e4b0(param_1);
  }
  return;
}


/* ==== 0049e570 FUN_0049e570 ==== */

void FUN_0049e570(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    FUN_004c6c70(*(undefined4 *)(in_ECX + 0x38));
    *(undefined4 *)(in_ECX + 0x38) = 0xffffffff;
  }
  return;
}


/* ==== 0049e5a0 FUN_0049e5a0 ==== */

undefined1 * FUN_0049e5a0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puVar3;
  undefined1 local_4 [4];
  
  if (DAT_00740950 == 0) {
    return (undefined1 *)0x0;
  }
  FUN_004a00b0(*(undefined4 *)(in_ECX + 0x38),0,DAT_00740928 + -1,
               s_C__work_sound_lib_csndsrc_cpp_005ae738,0x22a);
  if (*(int *)(DAT_00740934 + 0x30 + *(int *)(in_ECX + 0x38) * 0x44) == 0) {
    return (undefined1 *)0x0;
  }
  piVar1 = *(int **)(DAT_00740934 + *(int *)(in_ECX + 0x38) * 0x44 + 0x28);
  puVar3 = local_4;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
  FUN_004a0100(iVar2 == 0,s__s___d__Getting_sound_status_fai_005ae784,
               s_C__work_sound_lib_csndsrc_cpp_005ae738,0x234,*(undefined4 *)(in_ECX + 0x38));
  return puVar3;
}


/* ==== 0049e630 FUN_0049e630 ==== */

uint FUN_0049e630(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x38) != -1) {
    iVar1 = FUN_004c7e70(*(int *)(in_ECX + 0x38));
    if (iVar1 == *(int *)(in_ECX + 0x40)) {
      uVar2 = FUN_0049e5a0();
      return uVar2 & 1;
    }
  }
  return 0;
}


/* ==== 0049e660 FUN_0049e660 ==== */

int FUN_0049e660(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_004a0100(*(int *)(in_ECX + 0x58) != 0,s__s___d__Sound_engine_not_yet_att_005ae7ac,
               s___csndsrc_h_005ae6f8,0xcd);
  iVar1 = (((((*(int *)(in_ECX + 0x48) * *(int *)(in_ECX + 0x10)) / 100) * *(int *)(in_ECX + 0x54))
           / 100) * *(int *)(*(int *)(in_ECX + 0x58) + 0x270)) / 100;
  FUN_004a00b0(iVar1,0,100,s_C__work_sound_lib_csndsrc_cpp_005ae738,0x279);
  return iVar1;
}


/* ==== 0049e6f0 FUN_0049e6f0 ==== */

undefined4 FUN_0049e6f0(void)

{
  undefined4 __ftol_result;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x14) == 0) {
    return 0;
  }
  __ftol_result = __ftol(*(int *)(in_ECX + 0x14));
  return __ftol_result;
}


/* ==== 0049e750 FUN_0049e750 ==== */

undefined4 FUN_0049e750(float *param_1,float *param_2)

{
  param_1 = (float *)(param_1[2] * *param_2 - param_2[2] * *param_1);
  if (0.0 <= (float)param_1) {
    FUN_00559960();
  }
  else {
    FUN_00559960();
  }
  param_1 = (float *)__ftol();
  FUN_004a01a0(&param_1,0xffffd8f0,10000);
  return param_1;
}


/* ==== 0049e7d0 FUN_0049e7d0 ==== */

int FUN_0049e7d0(int param_1)

{
  int __ftol_result;
  int in_ECX;
  
  __ftol_result = __ftol();
  param_1 = 100 - (__ftol_result * 100) / *(int *)(in_ECX + 0xc);
  FUN_004a01a0(&param_1,0,100);
  return param_1;
}


/* ==== 0049e810 FUN_0049e810 ==== */

void FUN_0049e810(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int in_ECX;
  undefined1 local_40 [32];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004a0100(*(int *)(in_ECX + 0x58) != 0,s__s___d__Sound_engine_not_yet_att_005ae7ac,
               s___csndsrc_h_005ae6f8,0xcd);
  FUN_004a0000(local_40,param_3);
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  *param_2 = local_20;
  param_2[1] = local_1c;
  param_2[2] = local_18;
  return;
}


