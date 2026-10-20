/* spel.dat — game/Ovl_Dashboard.cpp: 40 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00490090 FUN_00490090 ==== */

void FUN_00490090(byte param_1)

{
  FUN_004893f0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004900b0 FUN_004900b0 ==== */

void FUN_004900b0(void)

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
  return;
}


/* ==== 004900f0 FUN_004900f0 ==== */

void FUN_004900f0(char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  
  *in_ECX = *param_2;
  i = 0xffffffff;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  pcVar3 = param_1;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (i <= *(uint *)(in_ECX + 0xc))) goto LAB_00490183;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return;
  }
  FUN_00402b20(i);
LAB_00490183:
  pcVar3 = *(char **)(in_ECX + 4);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar3 = *param_1;
    param_1 = param_1 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *(uint *)(in_ECX + 8) = i;
  *(undefined1 *)(*(int *)(in_ECX + 4) + i) = 0;
  return;
}


/* ==== 004901b0 FUN_004901b0 ==== */

int FUN_004901b0(char *param_1)

{
  char cVar1;
  uint i;
  
  i = 0xffffffff;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return ~i - 1;
}


/* ==== 004901d0 FUN_004901d0 ==== */

void FUN_004901d0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00576f38;
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


/* ==== 00490210 FUN_00490210 ==== */

void FUN_00490210(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00576f48;
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


/* ==== 00490250 FUN_00490250 ==== */

void FUN_00490250(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00576f58;
  if (iVar1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (iVar3 = *(int *)(iVar1 + 4); iVar3 != iVar2; iVar3 = iVar3 + 0x114) {
    FUN_004900b0();
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  in_ECX[1] = 0;
  return;
}


/* ==== 004902e0 FUN_004902e0 ==== */

int FUN_004902e0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x114;
}


/* ==== 004903b0 FUN_004903b0 ==== */

int FUN_004903b0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x78;
}


/* ==== 004904e0 FUN_004904e0 ==== */

undefined1 * FUN_004904e0(undefined1 *param_1,undefined1 *param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056df48;
  pvStack_c = ExceptionList;
  local_1c[0] = *param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_004093c0(param_2,0,0xffffffff);
  local_4 = 0;
  if (-local_14 - 1U < 2) {
    FUN_0054b1b4();
  }
  iVar1 = local_14 + 1;
  cVar2 = FUN_00402a00(iVar1,0);
  if (cVar2 != '\0') {
    *(undefined1 *)(local_14 + local_18) = param_3;
    *(undefined1 *)(local_18 + iVar1) = 0;
    local_14 = iVar1;
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


/* ==== 004905f0 FUN_004905f0 ==== */

void * FUN_004905f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *operator_new_result;
  int in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  
  iVar2 = *(int *)(in_ECX + 8);
  iVar3 = *(int *)(in_ECX + 4);
  iVar6 = (int)param_1 - iVar3 >> 2;
  if (*(int *)(in_ECX + 0xc) - iVar2 >> 2 != 0) {
    if (iVar2 - (int)param_1 >> 2 == 0) {
      FUN_004de170(param_1,iVar2,param_1 + 1);
      FUN_004de280(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)param_1 >> 2),param_2);
      puVar5 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar5; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_004de170(iVar2 + -4,iVar2,iVar2);
      puVar5 = *(undefined4 **)(in_ECX + 8);
      puVar1 = puVar5;
      while (param_1 != puVar1 + -1) {
        puVar5 = puVar5 + -1;
        *puVar5 = puVar1[-2];
        puVar1 = puVar1 + -1;
      }
      puVar5 = param_1 + 1;
      for (; param_1 != puVar5; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 4;
    return (void *)(*(int *)(in_ECX + 4) + iVar6 * 4);
  }
  if ((iVar3 == 0) || (uVar4 = iVar2 - iVar3 >> 2, uVar4 < 2)) {
    uVar4 = 1;
  }
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 - iVar3 >> 2;
  }
  iVar2 = iVar2 + uVar4;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  operator_new_result = operator_new(iVar3 * 4);
  pvVar7 = operator_new_result;
  for (puVar5 = *(undefined4 **)(in_ECX + 4); puVar5 != param_1; puVar5 = puVar5 + 1) {
    FUN_004d2770(pvVar7,puVar5);
    pvVar7 = (void *)((int)pvVar7 + 4);
  }
  FUN_004d2770(pvVar7,param_2);
  FUN_004de170(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar7 + 4);
  FUN_0042f530(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  FUN_0054b339(*(undefined4 *)(in_ECX + 4));
  *(void **)(in_ECX + 0xc) = (void *)((int)operator_new_result + iVar2 * 4);
  iVar2 = FUN_00492480();
  *(void **)(in_ECX + 4) = operator_new_result;
  *(int *)(in_ECX + 8) = (int)operator_new_result + iVar2 * 4 + 4;
  return (void *)((int)operator_new_result + iVar6 * 4);
}


/* ==== 00490790 FUN_00490790 ==== */

int FUN_00490790(int param_1,undefined4 param_2)

{
  int iVar1;
  void *operator_new_result;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar4 = *(int *)(in_ECX + 8);
  iVar3 = *(int *)(in_ECX + 0xc) - iVar4;
  iVar2 = iVar3 >> 0x1f;
  if (iVar3 / 0x114 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar6 = (iVar4 - iVar1) / 0x114, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar1) / 0x114;
    }
    iVar4 = iVar4 + uVar6;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    operator_new_result = operator_new(iVar2 * 0x114);
    pvVar5 = operator_new_result;
    for (iVar2 = *(int *)(in_ECX + 4); iVar2 != param_1; iVar2 = iVar2 + 0x114) {
      FUN_00491250(pvVar5,iVar2);
      pvVar5 = (void *)((int)pvVar5 + 0x114);
    }
    FUN_00491250(pvVar5,param_2);
    FUN_00490c70(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar5 + 0x114);
    FUN_004909f0(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_0054b339(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)operator_new_result + iVar4 * 0x114);
    iVar4 = FUN_004909c0();
    *(void **)(in_ECX + 4) = operator_new_result;
    *(void **)(in_ECX + 8) = (void *)((int)operator_new_result + (iVar4 + 1) * 0x114);
  }
  else {
    iVar2 = iVar4 - param_1 >> 0x1f;
    if ((iVar4 - param_1) / 0x114 + iVar2 == iVar2) {
      FUN_00490c70(param_1,iVar4,param_1 + 0x114);
      FUN_00490cb0(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - param_1) / 0x114,param_2);
      FUN_00490d50(param_1,*(undefined4 *)(in_ECX + 8),param_2);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0x114;
    }
    else {
      FUN_00490c70(iVar4 + -0x114,iVar4,iVar4);
      FUN_00490ed0(param_1,*(int *)(in_ECX + 8) + -0x114,*(int *)(in_ECX + 8));
      FUN_00490d50(param_1,param_1 + 0x114,param_2);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0x114;
    }
  }
  return *(int *)(in_ECX + 4) + ((param_1 - iVar1) / 0x114) * 0x114;
}


/* ==== 004909c0 FUN_004909c0 ==== */

int FUN_004909c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x114;
}


/* ==== 004909f0 FUN_004909f0 ==== */

void FUN_004909f0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x114) {
    FUN_004900b0();
  }
  return;
}


/* ==== 00490a20 FUN_00490a20 ==== */

int FUN_00490a20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *operator_new_result;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar3 = *(int *)(in_ECX + 8);
  iVar4 = *(int *)(in_ECX + 0xc) - iVar3;
  iVar2 = iVar4 >> 0x1f;
  if (iVar4 / 0x78 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar5 = (iVar3 - iVar1) / 0x78, uVar5 < 2)) {
      uVar5 = 1;
    }
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (iVar3 - iVar1) / 0x78;
    }
    iVar3 = iVar3 + uVar5;
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = 0;
    }
    operator_new_result = operator_new(iVar2 * 0x78);
    pvVar6 = operator_new_result;
    for (iVar2 = *(int *)(in_ECX + 4); iVar2 != param_1; iVar2 = iVar2 + 0x78) {
      FUN_004913b0(pvVar6,iVar2);
      pvVar6 = (void *)((int)pvVar6 + 0x78);
    }
    FUN_004913b0(pvVar6,param_2);
    FUN_00490ce0(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar6 + 0x78);
    FUN_00490c40(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_0054b339(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)operator_new_result + iVar3 * 0x78);
    iVar3 = FUN_00490c10();
    *(void **)(in_ECX + 4) = operator_new_result;
    *(void **)(in_ECX + 8) = (void *)((int)operator_new_result + (iVar3 + 1) * 0x78);
  }
  else {
    iVar2 = iVar3 - param_1 >> 0x1f;
    if ((iVar3 - param_1) / 0x78 + iVar2 == iVar2) {
      FUN_00490ce0(param_1,iVar3,param_1 + 0x78);
      FUN_00490d20(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - param_1) / 0x78,param_2);
      FUN_00491050(param_1,*(undefined4 *)(in_ECX + 8),param_2);
    }
    else {
      FUN_00490ce0(iVar3 + -0x78,iVar3,iVar3);
      FUN_00491150(param_1,*(int *)(in_ECX + 8) + -0x78,*(int *)(in_ECX + 8));
      FUN_00491050(param_1,param_1 + 0x78,param_2);
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0x78;
  }
  return *(int *)(in_ECX + 4) + ((param_1 - iVar1) / 0x78) * 0x78;
}


/* ==== 00490c10 FUN_00490c10 ==== */

int FUN_00490c10(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x78;
}


/* ==== 00490c40 FUN_00490c40 ==== */

void FUN_00490c40(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1e) {
    (**(code **)*param_1)(0);
  }
  return;
}


/* ==== 00490c70 FUN_00490c70 ==== */

int FUN_00490c70(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00491250(param_3,param_1);
    param_1 = param_1 + 0x114;
    param_3 = param_3 + 0x114;
  } while (param_1 != param_2);
  return param_3;
}


/* ==== 00490cb0 FUN_00490cb0 ==== */

void FUN_00490cb0(int param_1,int param_2,undefined4 param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00491250(param_1,param_3);
    param_1 = param_1 + 0x114;
  }
  return;
}


/* ==== 00490ce0 FUN_00490ce0 ==== */

int FUN_00490ce0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_004913b0(param_3,param_1);
    param_1 = param_1 + 0x78;
    param_3 = param_3 + 0x78;
  } while (param_1 != param_2);
  return param_3;
}


/* ==== 00490d20 FUN_00490d20 ==== */

void FUN_00490d20(int param_1,int param_2,undefined4 param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_004913b0(param_1,param_3);
    param_1 = param_1 + 0x78;
  }
  return;
}


/* ==== 00490d50 FUN_00490d50 ==== */

/* WARNING: Removing unreachable block (ram,0x00490d7f) */

void FUN_00490d50(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint j;
  int iVar5;
  int i;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    iVar6 = param_1;
    param_1 = param_3 - param_1;
    do {
      uVar1 = *(uint *)(param_3 + 8);
      if (iVar6 == param_3) {
        if (*(uint *)(iVar6 + 8) < uVar1) {
          FUN_0054b29c();
        }
        FUN_00402c30();
        iVar3 = *(int *)(iVar6 + 8) - uVar1;
        i = -1;
        if (iVar3 != -1) {
          i = iVar3;
        }
        if (i != 0) {
          iVar5 = uVar1 + *(int *)(iVar6 + 4);
          FUN_005580e0(iVar5,iVar5 + i,iVar3 - i);
          i = *(int *)(iVar6 + 8) - i;
          cVar2 = FUN_00402a00(i,0);
          if (cVar2 != '\0') {
            FUN_004029e0(i);
          }
        }
        FUN_00402c30();
      }
      else {
        if (uVar1 != 0) {
          puVar4 = *(undefined1 **)(param_3 + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          if ((byte)puVar4[-1] < 0xfe) {
            i = *(int *)(iVar6 + 4);
            if (i != 0) {
              cVar2 = *(char *)(i + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_0054b339((char *)(i + -1));
              }
              else {
                *(char *)(i + -1) = cVar2 + -1;
              }
            }
            *(undefined4 *)(iVar6 + 4) = 0;
            *(undefined4 *)(iVar6 + 8) = 0;
            *(undefined4 *)(iVar6 + 0xc) = 0;
            puVar4 = *(undefined1 **)(param_3 + 4);
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_0057629c;
            }
            *(undefined1 **)(iVar6 + 4) = puVar4;
            *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(param_3 + 8);
            *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(param_3 + 0xc);
            puVar4[-1] = puVar4[-1] + '\x01';
            goto LAB_00490e8a;
          }
        }
        cVar2 = FUN_00402a00(uVar1,1);
        if (cVar2 != '\0') {
          puVar7 = *(undefined4 **)(param_3 + 4);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&DAT_0057629c;
          }
          puVar8 = *(undefined4 **)(iVar6 + 4);
          for (j = uVar1 >> 2; j != 0; j = j - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (j = uVar1 & 3; j != 0; j = j - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          *(uint *)(iVar6 + 8) = uVar1;
          *(undefined1 *)(*(int *)(iVar6 + 4) + uVar1) = 0;
        }
      }
LAB_00490e8a:
      puVar7 = (undefined4 *)(iVar6 + 0x14);
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      i = 0x40;
      do {
        *puVar7 = *(undefined4 *)(param_1 + (int)puVar7);
        puVar7 = puVar7 + 1;
        i = i + -1;
      } while (i != 0);
      iVar6 = iVar6 + 0x114;
      param_1 = param_1 + -0x114;
    } while (iVar6 != param_2);
  }
  return;
}


/* ==== 00490ed0 FUN_00490ed0 ==== */

/* WARNING: Removing unreachable block (ram,0x00490f0a) */

int FUN_00490ed0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint j;
  int iVar5;
  int i;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar1 = *(uint *)(param_2 + -0x10c);
    iVar8 = param_2 + -0x114;
    iVar6 = param_3 + -0x114;
    if (iVar6 == iVar8) {
      if (*(uint *)(param_3 + -0x10c) < uVar1) {
        FUN_0054b29c();
      }
      FUN_00402c30();
      iVar3 = *(int *)(param_3 + -0x10c) - uVar1;
      i = -1;
      if (iVar3 != -1) {
        i = iVar3;
      }
      if (i != 0) {
        iVar5 = uVar1 + *(int *)(param_3 + -0x110);
        FUN_005580e0(iVar5,iVar5 + i,iVar3 - i);
        i = *(int *)(param_3 + -0x10c) - i;
        cVar2 = FUN_00402a00(i,0);
        if (cVar2 != '\0') {
          FUN_004029e0(i);
        }
      }
      FUN_00402c30();
    }
    else {
      if (uVar1 != 0) {
        puVar4 = *(undefined1 **)(param_2 + -0x110);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          i = *(int *)(param_3 + -0x110);
          if (i != 0) {
            cVar2 = *(char *)(i + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_0054b339((char *)(i + -1));
            }
            else {
              *(char *)(i + -1) = cVar2 + -1;
            }
          }
          *(undefined4 *)(param_3 + -0x110) = 0;
          *(undefined4 *)(param_3 + -0x10c) = 0;
          *(undefined4 *)(param_3 + -0x108) = 0;
          puVar4 = *(undefined1 **)(param_2 + -0x110);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          *(undefined1 **)(param_3 + -0x110) = puVar4;
          *(undefined4 *)(param_3 + -0x10c) = *(undefined4 *)(param_2 + -0x10c);
          *(undefined4 *)(param_3 + -0x108) = *(undefined4 *)(param_2 + -0x108);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_00491015;
        }
      }
      cVar2 = FUN_00402a00(uVar1,1);
      if (cVar2 != '\0') {
        puVar7 = *(undefined4 **)(param_2 + -0x110);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&DAT_0057629c;
        }
        puVar9 = *(undefined4 **)(param_3 + -0x110);
        for (j = uVar1 >> 2; j != 0; j = j - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (j = uVar1 & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(uint *)(param_3 + -0x10c) = uVar1;
        *(undefined1 *)(*(int *)(param_3 + -0x110) + uVar1) = 0;
      }
    }
LAB_00491015:
    *(undefined4 *)(param_3 + -0x104) = *(undefined4 *)(param_2 + -0x104);
    puVar7 = (undefined4 *)(param_3 + -0x100);
    i = 0x40;
    do {
      *puVar7 = *(undefined4 *)((iVar8 - iVar6) + (int)puVar7);
      puVar7 = puVar7 + 1;
      i = i + -1;
    } while (i != 0);
    param_3 = iVar6;
    param_2 = iVar8;
    if (iVar8 == param_1) {
      return iVar6;
    }
  } while( true );
}


/* ==== 00491050 FUN_00491050 ==== */

void FUN_00491050(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != param_2) {
    do {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x34);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x40);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 0x48);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_3 + 0x4c);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 0x50);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_3 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_3 + 0x5c);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0x60);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_3 + 100);
      iVar1 = param_1 + 0x78;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_3 + 0x68);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 0x70);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_3 + 0x74);
      param_1 = iVar1;
    } while (iVar1 != param_2);
  }
  return;
}


/* ==== 00491150 FUN_00491150 ==== */

int FUN_00491150(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = param_2 + -0x78;
    iVar1 = param_3 + -0x78;
    *(undefined4 *)(param_3 + -0x74) = *(undefined4 *)(param_2 + -0x74);
    *(undefined4 *)(param_3 + -0x70) = *(undefined4 *)(param_2 + -0x70);
    *(undefined4 *)(param_3 + -0x6c) = *(undefined4 *)(param_2 + -0x6c);
    *(undefined4 *)(param_3 + -0x68) = *(undefined4 *)(param_2 + -0x68);
    *(undefined4 *)(param_3 + -100) = *(undefined4 *)(param_2 + -100);
    *(undefined4 *)(param_3 + -0x60) = *(undefined4 *)(param_2 + -0x60);
    *(undefined4 *)(param_3 + -0x5c) = *(undefined4 *)(param_2 + -0x5c);
    *(undefined4 *)(param_3 + -0x58) = *(undefined4 *)(param_2 + -0x58);
    *(undefined4 *)(param_3 + -0x54) = *(undefined4 *)(param_2 + -0x54);
    *(undefined4 *)(param_3 + -0x50) = *(undefined4 *)(param_2 + -0x50);
    *(undefined4 *)(param_3 + -0x4c) = *(undefined4 *)(param_2 + -0x4c);
    *(undefined4 *)(param_3 + -0x48) = *(undefined4 *)(param_2 + -0x48);
    *(undefined4 *)(param_3 + -0x44) = *(undefined4 *)(param_2 + -0x44);
    *(undefined4 *)(param_3 + -0x40) = *(undefined4 *)(param_2 + -0x40);
    *(undefined4 *)(param_3 + -0x3c) = *(undefined4 *)(param_2 + -0x3c);
    *(undefined4 *)(param_3 + -0x38) = *(undefined4 *)(param_2 + -0x38);
    *(undefined4 *)(param_3 + -0x34) = *(undefined4 *)(param_2 + -0x34);
    *(undefined4 *)(param_3 + -0x30) = *(undefined4 *)(param_2 + -0x30);
    *(undefined4 *)(param_3 + -0x2c) = *(undefined4 *)(param_2 + -0x2c);
    *(undefined4 *)(param_3 + -0x28) = *(undefined4 *)(param_2 + -0x28);
    *(undefined4 *)(param_3 + -0x24) = *(undefined4 *)(param_2 + -0x24);
    *(undefined4 *)(param_3 + -0x20) = *(undefined4 *)(param_2 + -0x20);
    *(undefined4 *)(param_3 + -0x1c) = *(undefined4 *)(param_2 + -0x1c);
    *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_3 = iVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return iVar1;
}


/* ==== 00491250 FUN_00491250 ==== */

/* WARNING: Removing unreachable block (ram,0x004912a0) */

void FUN_00491250(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  uint j;
  int i;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056df71;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  uVar1 = *param_2;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if (param_1 == param_2) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar4 = *(int *)(param_1 + 8) - uVar2;
    i = -1;
    if (iVar4 != -1) {
      i = iVar4;
    }
    if (i != 0) {
      FUN_005580e0(uVar2 + *(int *)(param_1 + 4),i + uVar2 + *(int *)(param_1 + 4),iVar4 - i);
      iVar4 = *(int *)(param_1 + 8);
      cVar3 = FUN_00402a00(iVar4 - i,0);
      if (cVar3 != '\0') {
        FUN_004029e0(iVar4 - i);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar2 != 0) {
      puVar5 = *(undefined1 **)(param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar5 = *(undefined1 **)(param_2 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)(param_1 + 4) = puVar5;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_00491384;
      }
    }
    cVar3 = FUN_00402a00(uVar2,1);
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(param_2 + 4);
      }
      puVar7 = *(undefined4 **)(param_1 + 4);
      for (j = uVar2 >> 2; j != 0; j = j - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (j = uVar2 & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(uVar2);
    }
  }
LAB_00491384:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  puVar6 = (undefined4 *)(param_2 + 0x14);
  puVar7 = (undefined4 *)(param_1 + 0x14);
  for (i = 0x40; i != 0; i = i + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004913b0 FUN_004913b0 ==== */

void FUN_004913b0(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = *(undefined4 *)(param_2 + 0x14);
    param_1[6] = *(undefined4 *)(param_2 + 0x18);
    param_1[7] = *(undefined4 *)(param_2 + 0x1c);
    param_1[8] = *(undefined4 *)(param_2 + 0x20);
    param_1[9] = *(undefined4 *)(param_2 + 0x24);
    param_1[10] = *(undefined4 *)(param_2 + 0x28);
    param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
    param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
    param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
    param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
    param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
    param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
    param_1[0x11] = *(undefined4 *)(param_2 + 0x44);
    param_1[0x12] = *(undefined4 *)(param_2 + 0x48);
    param_1[0x13] = *(undefined4 *)(param_2 + 0x4c);
    param_1[0x14] = *(undefined4 *)(param_2 + 0x50);
    param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
    param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
    param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
    param_1[0x18] = *(undefined4 *)(param_2 + 0x60);
    param_1[0x19] = *(undefined4 *)(param_2 + 100);
    param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
    param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
    param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
    param_1[0x1d] = *(undefined4 *)(param_2 + 0x74);
    *param_1 = &PTR_FUN_00576f8c;
  }
  return;
}


/* ==== 004914a0 FUN_004914a0 ==== */

void FUN_004914a0(byte param_1)

{
  FUN_0049c920();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004914c0 FUN_004914c0 ==== */

void FUN_004914c0(void)

{
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
  undefined1 local_1;
  
  *in_ECX = &PTR_LAB_00576bb8;
  operator_new_result = operator_new(0x10);
  if (operator_new_result != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)in_ECX >> 0x18);
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
    in_ECX[1] = operator_new_result;
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    in_ECX[6] = 0;
    return;
  }
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  return;
}


/* ==== 00491510 FUN_00491510 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00491510(undefined1 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined **local_48;
  undefined4 local_44;
  int local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056df98;
  local_c = ExceptionList;
  local_48 = &PTR_s_OVL_SPEED_SUN_DIGIT_1_00576f90;
  ExceptionList = &local_c;
  local_40 = in_ECX;
  do {
    local_2c[0] = param_1;
    pcVar3 = *local_48;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = pcVar3;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar4 = local_28;
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
      local_28[i] = '\0';
      local_24 = i;
    }
    local_4 = 0;
    local_44 = FUN_00484f60(local_2c);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    i = 0xffffffff;
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acd14;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_3c[0] = param_1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    FUN_00402940(s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acd14,~i - 1);
    local_4 = 1;
    uVar2 = FUN_0049df90(local_1c,s_Element__s_not_found_005acd40,*local_48);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00487bc0(local_44,uVar2,local_3c,0x67);
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
    local_4 = 0xffffffff;
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    FUN_004a5620(*(undefined4 *)(*(int *)(local_40 + 4) + 8),1,&local_44);
    local_48 = local_48 + 1;
    if (0x576f9f < (int)local_48) {
      uVar2 = FUN_0049ecb0(s_SUNNIES_005acc48);
      *(undefined4 *)(local_40 + 0x14) = uVar2;
      *(float *)(local_40 + 8) = _DAT_005b23b8 * 0.1;
      FUN_00491700(DAT_006fba68);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


/* ==== 00491700 FUN_00491700 ==== */

void FUN_00491700(int param_1)

{
  char cVar1;
  int in_ECX;
  uint j;
  uint i;
  char *pcVar2;
  CHAR local_38 [12];
  float local_2c [3];
  CHAR local_20 [32];
  
  *(int *)(in_ECX + 0xc) = param_1;
  local_2c[0] = 0.0;
  local_2c[1] = 0.0;
  local_2c[2] = 0.0;
  wsprintfA(local_20,s__04d_005acd58,param_1);
  i = 0;
  do {
    j = 0xffffffff;
    pcVar2 = local_20;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (~j - 2 < i) {
      param_1 = 0;
    }
    else {
      local_38[0] = local_20[i];
      local_38[1] = 0;
      param_1 = FUN_0055933d(local_38);
    }
    local_2c[0] = (float)param_1 * *(float *)(in_ECX + 8);
    FUN_0047bc90(local_2c);
    i = i + 1;
    if (3 < (int)i) {
      return;
    }
  } while( true );
}


/* ==== 004917b0 FUN_004917b0 ==== */

void FUN_004917b0(void)

{
  float *pfVar1;
  int in_ECX;
  float10 fVar2;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0049eb50(*(undefined4 *)(in_ECX + 0x14));
  if (*(int *)(in_ECX + 0xc) < *(int *)(in_ECX + 0x10)) {
    fVar2 = (float10)FUN_004a6800();
    fVar2 = (float10)*(float *)(in_ECX + 8) / ((float10)0.25 / fVar2);
    local_10 = (float)fVar2;
    fVar2 = fVar2 + (float10)*(float *)(in_ECX + 0x18);
    *(float *)(in_ECX + 0x18) = (float)fVar2;
    if ((float10)*(float *)(in_ECX + 8) < fVar2) {
      local_10 = (float)((float10)local_10 - (fVar2 - (float10)*(float *)(in_ECX + 8)));
    }
    pfVar1 = (float *)FUN_0047bc40();
    local_8 = pfVar1[1];
    local_c = *pfVar1 + local_10;
    local_4 = pfVar1[2];
    FUN_0047bc90(&local_c);
    if (((*(int *)(in_ECX + 0xc) + 1) % 10 == 0) && (*(int *)(in_ECX + 0xc) != 0)) {
      pfVar1 = (float *)FUN_0047bc40();
      local_8 = pfVar1[1];
      local_c = *pfVar1 + local_10;
      local_4 = pfVar1[2];
      FUN_0047bc90(&local_c);
    }
    if (((*(int *)(in_ECX + 0xc) + 1) % 100 == 0) && (*(int *)(in_ECX + 0xc) != 0)) {
      pfVar1 = (float *)FUN_0047bc40();
      local_8 = pfVar1[1];
      local_c = *pfVar1 + local_10;
      local_4 = pfVar1[2];
      FUN_0047bc90(&local_c);
    }
    if (((*(int *)(in_ECX + 0xc) + 1) % 1000 == 0) && (*(int *)(in_ECX + 0xc) != 0)) {
      pfVar1 = (float *)FUN_0047bc40();
      local_8 = pfVar1[1];
      local_c = *pfVar1 + local_10;
      local_4 = pfVar1[2];
      FUN_0047bc90(&local_c);
    }
    if (*(float *)(in_ECX + 8) <= *(float *)(in_ECX + 0x18)) {
      *(undefined4 *)(in_ECX + 0x18) = 0;
      *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
      FUN_0049e550(0);
    }
  }
  return;
}


/* ==== 00491980 FUN_00491980 ==== */

void FUN_00491980(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 4) + 4) + iVar1) + 0x20))(param_1);
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x10);
  return;
}


/* ==== 004919b0 FUN_004919b0 ==== */

void FUN_004919b0(int param_1)

{
  int in_ECX;
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_1 == 5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00491980(uVar1);
  *(undefined4 *)(in_ECX + 0x10) = DAT_006fba68;
  FUN_004917b0();
  return;
}


/* ==== 004919e0 FUN_004919e0 ==== */

void FUN_004919e0(undefined4 param_1)

{
  char cVar1;
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056dfbd;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar2 = s_OVL_DASHBOARD_005acd04;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_OVL_DASHBOARD_005acd04;
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
  local_4 = 0;
  FUN_004924a0(param_1,local_1c);
  local_4._0_1_ = 2;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_004914c0();
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x10] = &PTR_LAB_00576b04;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0x11] = operator_new_result;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *in_ECX = &PTR_FUN_00576fe4;
  ExceptionList = local_c;
  return;
}


/* ==== 00491b10 FUN_00491b10 ==== */

void FUN_00491b10(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined4 local_44;
  undefined **local_40;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056dfdf;
  local_c = ExceptionList;
  local_40 = &PTR_s_OVL_SPEED_CIJFERS_00576fa8;
  ExceptionList = &local_c;
  do {
    ppuVar4 = local_40;
    i = 0xffffffff;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    pcVar3 = *local_40;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(*local_40,~i - 1);
    local_4 = 0;
    local_44 = FUN_00484dd0(local_2c);
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
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acd60;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acd60;
      pcVar5 = local_38;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar5 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      }
      local_38[i] = '\0';
      ppuVar4 = local_40;
      local_34 = i;
    }
    local_4 = 1;
    uVar2 = FUN_0049df90(local_1c,s_Element__s_not_found_005acd8c,*ppuVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00487bc0(local_44,uVar2,local_3c,0x100);
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
    local_4 = 0xffffffff;
    if (local_38 != (char *)0x0) {
      cVar1 = local_38[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_38 + -1);
      }
      else {
        local_38[-1] = cVar1 + -1;
      }
    }
    local_38 = (char *)0x0;
    local_34 = 0;
    local_30 = 0;
    FUN_004905f0(*(undefined4 *)(*(int *)(in_ECX + 0x44) + 8),&local_44);
    local_40 = ppuVar4 + 1;
    if (0x576fc3 < (int)local_40) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


/* ==== 00491d00 FUN_00491d00 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00491d00(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e031;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_OVL_SPEED_DAMAGE_005acccc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_OVL_SPEED_DAMAGE_005acccc,~i - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(local_3c);
  *(undefined4 *)(in_ECX + 0x34) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_OVL_SPEED_TURBO_005acce0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_OVL_SPEED_TURBO_005acce0,~i - 1);
  local_4 = 1;
  uVar2 = FUN_00484f60(local_3c);
  *(undefined4 *)(in_ECX + 0x38) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_OVL_SPEED_INDICATOR_005accf0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_OVL_SPEED_INDICATOR_005accf0;
    pcVar4 = local_38;
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
    FUN_004029e0(i);
  }
  local_4 = 2;
  uVar2 = FUN_00484f60(local_3c);
  *(undefined4 *)(in_ECX + 0x3c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acda4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acda4;
    pcVar4 = local_38;
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
    FUN_004029e0(i);
  }
  local_4 = 3;
  uVar2 = FUN_0049df90(local_1c,s_Element__s_not_found_005acdd0,s_OVL_SPEED_DAMAGE_005acccc);
  local_4._0_1_ = 4;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x34),uVar2,local_3c,0x10c);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acde8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acde8;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_38 = local_38 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_38 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 5;
  uVar2 = FUN_0049df90(local_1c,s_Element__s_not_found_005ace14,s_OVL_SPEED_TURBO_005acce0);
  local_4._0_1_ = 6;
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x38),uVar2,local_3c,0x10d);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005ace2c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005ace2c;
    pcVar4 = local_48;
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
    local_48[i] = '\0';
    local_44 = i;
  }
  local_4 = 7;
  uVar2 = FUN_0049df90(local_2c,s_Element__s_not_found_005ace58,s_OVL_SPEED_INDICATOR_005accf0);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00487bc0(*(undefined4 *)(in_ECX + 0x3c),uVar2,local_4c,0x10e);
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
  if (local_48 != (char *)0x0) {
    cVar1 = local_48[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_48 + -1);
    }
    else {
      local_48[-1] = cVar1 + -1;
    }
  }
  local_48 = (char *)0x0;
  local_44 = 0;
  local_40 = 0;
  FUN_00491b10();
  *(float *)(in_ECX + 0x48) = _DAT_005b23b8 * 0.0027777778 * 160.0;
  *(float *)(in_ECX + 0x4c) = _DAT_005b23b8 * 0.5;
  *(float *)(in_ECX + 0x50) = _DAT_005b23b8 * 0.5;
  FUN_00491510(*(undefined4 *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


/* ==== 00492110 FUN_00492110 ==== */

void FUN_00492110(undefined4 *param_1)

{
  int in_ECX;
  float local_4;
  
  local_4 = 0.0;
  if ((0.0 <= (float)DAT_006fba64) &&
     (local_4 = ((float)DAT_006fba64 / 200.0) * *(float *)(in_ECX + 0x48),
     *(float *)(in_ECX + 0x48) <= local_4)) {
    local_4 = *(float *)(in_ECX + 0x48);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = local_4;
  return;
}


/* ==== 00492180 FUN_00492180 ==== */

void FUN_00492180(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  float local_4;
  
  local_4 = 0.0;
  FUN_00426f60(DAT_006fba58);
  iVar1 = FUN_00425300();
  if (0.0 <= (float)iVar1) {
    local_4 = ((float)iVar1 / 100.0) * *(float *)(in_ECX + 0x4c);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = local_4;
  return;
}


/* ==== 00492200 FUN_00492200 ==== */

void FUN_00492200(undefined4 *param_1)

{
  int in_ECX;
  float local_4;
  
  local_4 = 0.0;
  if (0.0 <= (float)DAT_006fba74) {
    local_4 = ((float)DAT_006fba74 / 100.0) * *(float *)(in_ECX + 0x50);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = local_4;
  return;
}


