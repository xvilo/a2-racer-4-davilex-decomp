/* spel.dat — inputlib/CInputManager.cpp: 272 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004dc7d0 FUN_004dc7d0 ==== */

void FUN_004dc7d0(undefined4 param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00570b13;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_004d3f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x004dc7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004dca70)[iVar1 + -0x32])();
  return;
}


/* ==== 004dcac0 FUN_004dcac0 ==== */

void FUN_004dcac0(byte param_1)

{
  FUN_004dcae0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004dcae0 FUN_004dcae0 ==== */

void FUN_004dcae0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00577a40;
  return;
}


/* ==== 004dcaf0 FUN_004dcaf0 ==== */

void FUN_004dcaf0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = *(int **)(in_ECX + 8);
  if (piVar3 != *(int **)(in_ECX + 0xc)) {
    do {
      iVar1 = *piVar3;
      uVar2 = FUN_004e25d0(param_1);
      piVar3 = piVar3 + 1;
      **(undefined4 **)(iVar1 + 0x28) = uVar2;
    } while (piVar3 != *(int **)(in_ECX + 0xc));
  }
  return;
}


/* ==== 004dcb30 FUN_004dcb30 ==== */

void FUN_004dcb30(void)

{
  undefined4 *in_ECX;
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570b47;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_005778d8;
  piVar1 = (int *)in_ECX[2];
  local_4 = 0;
  if (piVar1 != (int *)in_ECX[3]) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)in_ECX[3]);
  }
  if (in_ECX == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = in_ECX + 1;
  }
  FUN_0054b339(puVar2[1]);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004dcbc0 FUN_004dcbc0 ==== */

void FUN_004dcbc0(undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e2480(param_2);
  local_4 = 0;
  FUN_004e2580(param_1);
  ExceptionList = local_c;
  return;
}


/* ==== 004dcc10 FUN_004dcc10 ==== */

void FUN_004dcc10(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *operator_new_result;
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570b93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e2520(param_1);
  local_4 = 0;
  operator_new_result = operator_new(0x2c);
  local_4._0_1_ = 1;
  if (operator_new_result == (undefined4 *)0x0) {
    operator_new_result = (undefined4 *)0x0;
  }
  else {
    param_1 = operator_new_result;
    FUN_004e24e0(local_30);
    *operator_new_result = &PTR_FUN_00577a40;
    operator_new_result[10] = param_2;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1 = operator_new_result;
  FUN_004a5620(*(undefined4 *)(param_3 + 0xc),1,&param_1);
  ExceptionList = local_c;
  return;
}


/* ==== 004dccd0 FUN_004dccd0 ==== */

/* WARNING: Removing unreachable block (ram,0x004dce4f) */
/* WARNING: Removing unreachable block (ram,0x004dce6a) */
/* WARNING: Removing unreachable block (ram,0x004dce79) */
/* WARNING: Removing unreachable block (ram,0x004dce80) */

void FUN_004dccd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined1 *in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_20;
  undefined4 *local_1c;
  void *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar3 = ExceptionList;
  puStack_8 = &LAB_00570ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = (undefined1)param_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  local_4 = 0;
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (puVar5 != *(undefined4 **)(param_1 + 8)) {
    do {
      local_20 = *puVar5;
      puVar6 = *(undefined4 **)(in_ECX + 8);
      local_1c = puVar5;
      if (*(int *)(in_ECX + 0xc) - (int)puVar6 >> 2 == 0) {
        iVar2 = *(int *)(in_ECX + 4);
        if ((iVar2 == 0) || (uVar4 = (int)puVar6 - iVar2 >> 2, uVar4 < 2)) {
          uVar4 = 1;
        }
        if (iVar2 == 0) {
          local_14 = 0;
        }
        else {
          local_14 = (int)puVar6 - iVar2 >> 2;
        }
        local_14 = local_14 + uVar4;
        iVar2 = local_14;
        if (local_14 < 0) {
          iVar2 = 0;
        }
        pvVar3 = operator_new(iVar2 << 2);
        local_18 = pvVar3;
        for (puVar5 = *(undefined4 **)(in_ECX + 4); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          FUN_004d2770(pvVar3,puVar5);
          pvVar3 = (void *)((int)pvVar3 + 4);
        }
        FUN_004de280(pvVar3,1,&local_20);
        FUN_004de170(puVar6,*(undefined4 *)(in_ECX + 8),(int)pvVar3 + 4);
        FUN_0042f530(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
        FUN_0054b339(*(undefined4 *)(in_ECX + 4));
        pvVar3 = local_18;
        *(void **)(in_ECX + 0xc) = (void *)((int)local_18 + local_14 * 4);
        iVar2 = FUN_00492480();
        *(void **)(in_ECX + 4) = pvVar3;
        *(int *)(in_ECX + 8) = (int)pvVar3 + iVar2 * 4 + 4;
        puVar5 = local_1c;
      }
      else {
        FUN_004de170(puVar6,puVar6,puVar6 + 1);
        FUN_004de280(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)puVar6 >> 2),&local_20);
        puVar1 = *(undefined4 **)(in_ECX + 8);
        for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          *puVar6 = local_20;
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 4;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_1 + 8));
    ExceptionList = local_c;
    return;
  }
  ExceptionList = pvVar3;
  return;
}


/* ==== 004dcf20 FUN_004dcf20 ==== */

void FUN_004dcf20(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x34))();
  if (cVar1 != '\0') {
    FUN_004da440();
    FUN_004da440();
    FUN_004da440();
  }
  return;
}


/* ==== 004dcf50 FUN_004dcf50 ==== */

void FUN_004dcf50(undefined4 param_1)

{
  FUN_004dc3f0(param_1);
  FUN_004da2d0(param_1);
  FUN_004ddac0(param_1);
  return;
}


/* ==== 004dcf80 FUN_004dcf80 ==== */

void FUN_004dcf80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_ECX;
  
  FUN_004dc410(param_1,param_2,param_3,param_4);
  FUN_004da320(param_1,param_2,in_ECX);
  FUN_004ddb10(param_1,param_2);
  return;
}


/* ==== 004dcfc0 FUN_004dcfc0 ==== */

undefined4 FUN_004dcfc0(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 unaff_retaddr;
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00570bc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*in_ECX + 0x30))(local_1c);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  puStack_8 = (undefined1 *)0x0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004d4cd0(unaff_retaddr,puVar3);
  uVar4 = FUN_004d4cd0(unaff_retaddr,s___005b725c,in_ECX + 10,s___005b7260,in_ECX + 0x15,
                       in_ECX + 0x10,in_ECX + 0x1a);
  uVar4 = FUN_004da280(uVar4);
  uVar4 = FUN_004d4cd0(uVar4);
  uVar4 = FUN_004da280(uVar4);
  uVar4 = FUN_004da280(uVar4);
  uVar4 = FUN_004ddee0(uVar4);
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
      ExceptionList = pvStack_10;
      return uVar4;
    }
    FUN_0054b339((char *)(local_1c[0] + -1));
  }
  ExceptionList = pvStack_10;
  return uVar4;
}


/* ==== 004dd0b0 FUN_004dd0b0 ==== */

void FUN_004dd0b0(undefined4 param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x48);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x4c)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x58))(param_1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(in_ECX + 0x4c));
  }
  return;
}


/* ==== 004dd0e0 FUN_004dd0e0 ==== */

void FUN_004dd0e0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x4c);
  if (iVar1 != *(int *)(in_ECX + 0x48)) {
    do {
      (**(code **)(**(int **)(iVar1 + -4) + 0x5c))(param_1);
      iVar1 = iVar1 + -4;
    } while (iVar1 != *(int *)(in_ECX + 0x48));
  }
  return;
}


/* ==== 004dd110 FUN_004dd110 ==== */

void FUN_004dd110(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != *(int *)(in_ECX + 0x30)) {
    do {
      FUN_004e13b0(param_1);
      iVar1 = iVar1 + -4;
    } while (iVar1 != *(int *)(in_ECX + 0x30));
  }
  return;
}


/* ==== 004dd140 FUN_004dd140 ==== */

undefined4 * FUN_004dd140(undefined4 *param_1,undefined4 param_2)

{
  int in_ECX;
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_28 [4];
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570bff;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00558643(local_24,0x18,1,&LAB_004db4f0,FUN_004d3a00);
  puVar1 = *(undefined4 **)(in_ECX + 0x48);
  local_4 = 1;
  if (puVar1 != *(undefined4 **)(in_ECX + 0x4c)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x58))(param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(in_ECX + 0x4c));
  }
  FUN_004de310(in_ECX + 0x68);
  iVar2 = *(int *)(in_ECX + 0x4c);
  if (iVar2 != *(int *)(in_ECX + 0x48)) {
    do {
      (**(code **)(**(int **)(iVar2 + -4) + 0x5c))(param_2);
      iVar2 = iVar2 + -4;
    } while (iVar2 != *(int *)(in_ECX + 0x48));
  }
  iVar2 = *(int *)(in_ECX + 0x34);
  if (iVar2 != *(int *)(in_ECX + 0x30)) {
    do {
      FUN_004e13b0(param_2);
      iVar2 = iVar2 + -4;
    } while (iVar2 != *(int *)(in_ECX + 0x30));
  }
  FUN_004cef20(local_24);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_005586c5(auStack_28,0x18,1,FUN_004d3a00);
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004dd260 FUN_004dd260 ==== */

void FUN_004dd260(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00577ad0;
  return;
}


/* ==== 004dd2a0 FUN_004dd2a0 ==== */

undefined4 * FUN_004dd2a0(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  
  operator_new_result = operator_new(0xc);
  if (operator_new_result != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result = &PTR_LAB_00577ad0;
    operator_new_result[1] = uVar1;
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *operator_new_result = &PTR_FUN_00577b34;
    return operator_new_result;
  }
  return (undefined4 *)0x0;
}


/* ==== 004dd2e0 FUN_004dd2e0 ==== */

void FUN_004dd2e0(byte param_1)

{
  FUN_004dd260();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004dd300 FUN_004dd300 ==== */

undefined4 * FUN_004dd300(void)

{
  undefined4 *operator_new_result;
  undefined4 *operator_new_result_2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570c23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x20);
  operator_new_result_2 = (undefined4 *)0x0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    *operator_new_result = &PTR_LAB_00577ad0;
    local_4 = 1;
    FUN_004cef20(in_ECX + 8);
    operator_new_result[2] = &PTR_FUN_005778c0;
    *operator_new_result = &PTR_FUN_00577aa8;
    operator_new_result_2 = operator_new_result;
  }
  ExceptionList = local_c;
  return operator_new_result_2;
}


/* ==== 004dd380 FUN_004dd380 ==== */

void FUN_004dd380(byte param_1)

{
  FUN_004dd3a0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004dd3a0 FUN_004dd3a0 ==== */

void FUN_004dd3a0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00577aa8;
  local_4 = 0;
  in_ECX[2] = &PTR_FUN_005778c0;
  FUN_004cf650();
  *in_ECX = &PTR_LAB_00577ad0;
  ExceptionList = local_c;
  return;
}


/* ==== 004dd3f0 FUN_004dd3f0 ==== */

undefined4 * FUN_004dd3f0(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  
  operator_new_result = operator_new(0xc);
  if (operator_new_result != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result = &PTR_LAB_00577ad0;
    operator_new_result[1] = uVar1;
    *(undefined2 *)(operator_new_result + 2) = *(undefined2 *)(in_ECX + 8);
    *operator_new_result = &PTR_FUN_00577a80;
    return operator_new_result;
  }
  return (undefined4 *)0x0;
}


/* ==== 004dd440 FUN_004dd440 ==== */

undefined4 * FUN_004dd440(void)

{
  undefined4 *operator_new_result_2;
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570c63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result_2 = operator_new(0x10);
  operator_new_result = (undefined4 *)0x0;
  if (operator_new_result_2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result_2 = &PTR_LAB_00577b5c;
    operator_new_result_2[1] = uVar1;
    local_4 = 1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))();
    operator_new_result_2[2] = uVar1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))();
    operator_new_result_2[3] = uVar1;
    *operator_new_result_2 = &PTR_FUN_00577af8;
    operator_new_result = operator_new_result_2;
  }
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004dd4c0 FUN_004dd4c0 ==== */

void FUN_004dd4c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00577b5c;
  return;
}


/* ==== 004dd4f0 FUN_004dd4f0 ==== */

void FUN_004dd4f0(undefined4 param_1)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 8))(1);
    *(undefined4 *)(in_ECX + 8) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = param_1;
  return;
}


/* ==== 004dd520 FUN_004dd520 ==== */

void FUN_004dd520(undefined4 param_1)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0xc))(1);
    *(undefined4 *)(in_ECX + 0xc) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  return;
}


/* ==== 004dd550 FUN_004dd550 ==== */

void FUN_004dd550(byte param_1)

{
  FUN_004dd570();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004dd570 FUN_004dd570 ==== */

void FUN_004dd570(void)

{
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570c78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00577af8;
  local_4 = 0;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
  }
  *in_ECX = &PTR_LAB_00577b5c;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004dd5e0 FUN_004dd5e0 ==== */

undefined4 * FUN_004dd5e0(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  
  operator_new_result = operator_new(0xc);
  if (operator_new_result != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result = &PTR_LAB_00577b5c;
    operator_new_result[1] = uVar1;
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *operator_new_result = &PTR_FUN_00577a44;
    return operator_new_result;
  }
  return (undefined4 *)0x0;
}


/* ==== 004dd610 FUN_004dd610 ==== */

void FUN_004dd610(byte param_1)

{
  FUN_004dd4c0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004dd630 FUN_004dd630 ==== */

void FUN_004dd630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 *in_ECX;
  uint i;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570ccc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s__none_005b715c,~i - 1);
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *in_ECX = &PTR_FUN_00577860;
  in_ECX[1] = 0x3b;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  local_4 = 0;
  FUN_004d9f00();
  *in_ECX = &PTR_FUN_0057797c;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  local_4 = 1;
  FUN_004d9f00();
  local_4._0_1_ = 2;
  FUN_004d9f00();
  *(undefined1 *)(in_ECX + 0x1b) = (undefined1)param_4;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1a] = &PTR_FUN_00577978;
  local_4._0_1_ = 4;
  if ((in_ECX[0x1c] == 0) || ((uint)((int)(in_ECX[0x1e] - in_ECX[0x1c]) >> 2) < 10)) {
    operator_new_result = operator_new(0x28);
    iVar2 = in_ECX[0x1d];
    pvVar4 = operator_new_result;
    for (iVar3 = in_ECX[0x1c]; iVar3 != iVar2; iVar3 = iVar3 + 4) {
      FUN_004d2770(pvVar4,iVar3);
      pvVar4 = (void *)((int)pvVar4 + 4);
    }
    FUN_0042f530(in_ECX[0x1c],in_ECX[0x1d]);
    FUN_0054b339(in_ECX[0x1c]);
    in_ECX[0x1e] = (int)operator_new_result + 0x28;
    iVar3 = FUN_00492480();
    in_ECX[0x1c] = operator_new_result;
    in_ECX[0x1d] = (void *)((int)operator_new_result + iVar3 * 4);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  *in_ECX = &PTR_FUN_00577930;
  FUN_004dc410(param_1,param_2,param_3,param_4);
  FUN_004da320(param_1,param_2,in_ECX);
  FUN_004ddb10(param_1,param_2);
  ExceptionList = local_c;
  return;
}


/* ==== 004dd7d0 FUN_004dd7d0 ==== */

void FUN_004dd7d0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_004dc720();
  piVar2 = *(int **)(in_ECX + 0x48);
  if (piVar2 != *(int **)(in_ECX + 0x4c)) {
    do {
      *(int *)(*piVar2 + 0x2c) = iVar3;
      iVar1 = FUN_004d9a70(*(undefined4 *)(*piVar2 + 0x20));
      iVar3 = iVar3 + iVar1;
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 0x4c));
  }
  return;
}


/* ==== 004dd830 FUN_004dd830 ==== */

/* WARNING: Removing unreachable block (ram,0x004dda49) */
/* WARNING: Removing unreachable block (ram,0x004dda64) */
/* WARNING: Removing unreachable block (ram,0x004dda73) */
/* WARNING: Removing unreachable block (ram,0x004dda7a) */

undefined4 * FUN_004dd830(int param_1)

{
  uint *puVar1;
  uint uVar2;
  void *operator_new_result;
  int iVar3;
  uint *puVar4;
  undefined4 *in_ECX;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  uint local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 1) = (undefined1)param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00577978;
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  }
  if (in_ECX[2] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(in_ECX[4] - in_ECX[2]) >> 2;
  }
  local_14 = in_ECX;
  if (uVar2 < local_1c) {
    uVar2 = local_1c;
    if ((int)local_1c < 0) {
      uVar2 = 0;
    }
    operator_new_result = operator_new(uVar2 * 4);
    iVar7 = in_ECX[2];
    local_18 = (undefined4 *)in_ECX[3];
    pvVar6 = operator_new_result;
    if ((undefined4 *)iVar7 != local_18) {
      do {
        FUN_004d2770(pvVar6,iVar7);
        iVar7 = iVar7 + 4;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while ((undefined4 *)iVar7 != local_18);
    }
    local_10 = in_ECX[2];
    FUN_0054b339(local_10);
    in_ECX[4] = (void *)((int)operator_new_result + local_1c * 4);
    iVar7 = FUN_00492480();
    in_ECX[3] = (void *)((int)operator_new_result + iVar7 * 4);
    in_ECX[2] = operator_new_result;
  }
  puVar5 = *(undefined4 **)(param_1 + 8);
  if (puVar5 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      local_18 = puVar5;
      local_1c = (**(code **)(*(int *)*puVar5 + 0x28))();
      puVar4 = (uint *)in_ECX[3];
      if (in_ECX[4] - (int)puVar4 >> 2 == 0) {
        uVar2 = FUN_00492480();
        if (uVar2 < 2) {
          iVar7 = 1;
        }
        else {
          iVar7 = FUN_00492480();
        }
        iVar3 = FUN_00492480();
        iVar3 = iVar3 + iVar7;
        iVar7 = iVar3;
        if (iVar3 < 0) {
          iVar7 = 0;
        }
        pvVar6 = operator_new(iVar7 * 4);
        local_10 = FUN_004de170(in_ECX[2],puVar4,pvVar6);
        FUN_004de280(local_10,1,&local_1c);
        FUN_004de170(puVar4,in_ECX[3],local_10 + 4);
        FUN_0042f530(in_ECX[2],in_ECX[3]);
        FUN_0054b339(in_ECX[2]);
        in_ECX[4] = (void *)((int)pvVar6 + iVar3 * 4);
        iVar7 = FUN_00492480();
        in_ECX[2] = pvVar6;
        in_ECX[3] = (int)pvVar6 + iVar7 * 4 + 4;
        puVar5 = local_18;
      }
      else {
        FUN_004de170(puVar4,puVar4,puVar4 + 1);
        FUN_004de280(in_ECX[3],1 - (in_ECX[3] - (int)puVar4 >> 2),&local_1c);
        puVar1 = (uint *)in_ECX[3];
        for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
          *puVar4 = local_1c;
        }
        in_ECX[3] = in_ECX[3] + 4;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return local_14;
}


/* ==== 004ddac0 FUN_004ddac0 ==== */

void FUN_004ddac0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(int *)(in_ECX + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  }
  FUN_004d73f0(param_1,iVar1);
  puVar2 = *(undefined4 **)(in_ECX + 8);
  if (puVar2 != *(undefined4 **)(in_ECX + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar2 + 0x34))(param_1);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(in_ECX + 0xc));
  }
  return;
}


/* ==== 004ddb10 FUN_004ddb10 ==== */

/* WARNING: Removing unreachable block (ram,0x004ddcec) */
/* WARNING: Removing unreachable block (ram,0x004ddd07) */
/* WARNING: Removing unreachable block (ram,0x004ddd16) */
/* WARNING: Removing unreachable block (ram,0x004ddd1d) */

void FUN_004ddb10(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *operator_new_result;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *operator_new_result_2;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  uint uVar7;
  short local_e;
  undefined4 uStack_c;
  int i;
  int local_4;
  
  FUN_004d74b0(param_1,&local_e);
  uVar7 = (uint)local_e;
  if (*(int *)(in_ECX + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 8) >> 2;
  }
  if (uVar1 < uVar7) {
    uVar1 = uVar7;
    if ((int)uVar7 < 0) {
      uVar1 = 0;
    }
    operator_new_result = operator_new(uVar1 * 4);
    puVar5 = *(undefined4 **)(in_ECX + 0xc);
    puVar6 = operator_new_result;
    for (puVar2 = *(undefined4 **)(in_ECX + 8); puVar2 != puVar5; puVar2 = puVar2 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar2;
      }
      puVar6 = puVar6 + 1;
    }
    local_4 = *(int *)(in_ECX + 8);
    FUN_0054b339(local_4);
    *(undefined4 **)(in_ECX + 0x10) = operator_new_result + uVar7;
    if (*(int *)(in_ECX + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    }
    *(undefined4 **)(in_ECX + 8) = operator_new_result;
    *(undefined4 **)(in_ECX + 0xc) = operator_new_result + iVar3;
  }
  i = 0;
  if (0 < local_e) {
    do {
      uStack_c = FUN_004e39d0(param_1,param_2);
      puVar5 = *(undefined4 **)(in_ECX + 0xc);
      if (*(int *)(in_ECX + 0x10) - (int)puVar5 >> 2 == 0) {
        uVar7 = FUN_00492480();
        if (uVar7 < 2) {
          iVar3 = 1;
        }
        else {
          iVar3 = FUN_00492480();
        }
        iVar4 = FUN_00492480();
        iVar4 = iVar4 + iVar3;
        iVar3 = iVar4;
        if (iVar4 < 0) {
          iVar3 = 0;
        }
        operator_new_result_2 = operator_new(iVar3 * 4);
        local_4 = FUN_004de170(*(undefined4 *)(in_ECX + 8),puVar5,operator_new_result_2);
        FUN_004de280(local_4,1,&uStack_c);
        FUN_004de170(puVar5,*(undefined4 *)(in_ECX + 0xc),local_4 + 4);
        FUN_0042f530(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
        FUN_0054b339(*(undefined4 *)(in_ECX + 8));
        *(void **)(in_ECX + 0x10) = (void *)((int)operator_new_result_2 + iVar4 * 4);
        iVar3 = FUN_00492480();
        *(void **)(in_ECX + 8) = operator_new_result_2;
        *(int *)(in_ECX + 0xc) = (int)operator_new_result_2 + iVar3 * 4 + 4;
      }
      else {
        FUN_004de170(puVar5,puVar5,puVar5 + 1);
        FUN_004de280(*(int *)(in_ECX + 0xc),1 - (*(int *)(in_ECX + 0xc) - (int)puVar5 >> 2),
                     &uStack_c);
        puVar2 = *(undefined4 **)(in_ECX + 0xc);
        for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
          *puVar5 = uStack_c;
        }
        *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 4;
      }
      i = i + 1;
    } while (i < local_e);
  }
  return;
}


/* ==== 004ddd50 FUN_004ddd50 ==== */

int * FUN_004ddd50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_18 [8];
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  iVar6 = *(int *)(in_ECX + 8);
  iVar1 = 0;
  if (iVar6 == *(int *)(in_ECX + 0xc)) {
    return param_1;
  }
  do {
    puVar2 = (undefined4 *)FUN_0054ee09(local_18,4);
    if (param_1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*param_1 + 4) + (int)param_1;
    }
    (*(code *)*puVar2)(iVar5,puVar2[1]);
    *(undefined1 *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1) = 0x30;
    puVar2 = (undefined4 *)FUN_0054eddc(auStack_10,0x80);
    if (param_1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*param_1 + 4) + (int)param_1;
    }
    (*(code *)*puVar2)(iVar5,puVar2[1]);
    pcVar7 = s__005b73d8;
    uVar3 = FUN_004d4130(iVar1);
    piVar4 = (int *)FUN_004d4cd0(uVar3,pcVar7);
    puVar2 = (undefined4 *)FUN_0054edbb(auStack_8,0x80);
    if (piVar4 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*piVar4 + 4) + (int)piVar4;
    }
    (*(code *)*puVar2)(iVar5,puVar2[1]);
    *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30 + (int)piVar4) = 0x20;
    FUN_004e3ed0(param_1);
    FUN_004d4cd0(param_1,s__005ae60c);
    iVar6 = iVar6 + 4;
    iVar1 = iVar1 + 1;
  } while (iVar6 != *(int *)(in_ECX + 0xc));
  return param_1;
}


/* ==== 004dde60 FUN_004dde60 ==== */

void FUN_004dde60(void)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570d27;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00577978;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 0;
  if (puVar1 != (undefined4 *)in_ECX[3]) {
    do {
      FUN_004e4050(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)in_ECX[3]);
  }
  if (in_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = in_ECX + 1;
  }
  FUN_0054b339(puVar1[1]);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004ddee0 FUN_004ddee0 ==== */

void FUN_004ddee0(undefined4 param_1)

{
  FUN_004ddd50(param_1);
  return;
}


/* ==== 004ddef0 FUN_004ddef0 ==== */

void FUN_004ddef0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00577bd4;
  local_4 = 0;
  if ((undefined4 *)in_ECX[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[4])(1);
  }
  *in_ECX = &PTR_LAB_00577b5c;
  ExceptionList = local_c;
  return;
}


/* ==== 004ddf40 FUN_004ddf40 ==== */

undefined4 * FUN_004ddf40(void)

{
  undefined4 *operator_new_result_2;
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570d73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result_2 = operator_new(0x14);
  operator_new_result = (undefined4 *)0x0;
  if (operator_new_result_2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result_2 = &PTR_LAB_00577b5c;
    operator_new_result_2[1] = uVar1;
    operator_new_result_2[2] = *(undefined4 *)(in_ECX + 8);
    *operator_new_result_2 = &PTR_FUN_00577a44;
    local_4 = 1;
    operator_new_result_2[3] = *(undefined4 *)(in_ECX + 0xc);
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x10))();
    operator_new_result_2[4] = uVar1;
    *operator_new_result_2 = &PTR_FUN_00577bd4;
    operator_new_result = operator_new_result_2;
  }
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004ddfd0 FUN_004ddfd0 ==== */

void FUN_004ddfd0(undefined4 param_1)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(in_ECX + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x10))(1);
    *(undefined4 *)(in_ECX + 0x10) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  return;
}


/* ==== 004de000 FUN_004de000 ==== */

void FUN_004de000(byte param_1)

{
  FUN_004ddef0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004de020 FUN_004de020 ==== */

undefined4 * FUN_004de020(void)

{
  undefined4 *operator_new_result_2;
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570d93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result_2 = operator_new(0x1c);
  operator_new_result = (undefined4 *)0x0;
  if (operator_new_result_2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result_2 = &PTR_LAB_00577b5c;
    operator_new_result_2[1] = uVar1;
    operator_new_result_2[2] = *(undefined4 *)(in_ECX + 8);
    *operator_new_result_2 = &PTR_FUN_00577a44;
    local_4 = 1;
    operator_new_result_2[3] = *(undefined4 *)(in_ECX + 0xc);
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x10))();
    operator_new_result_2[4] = uVar1;
    *operator_new_result_2 = &PTR_FUN_00577bd4;
    operator_new_result_2[5] = *(undefined4 *)(in_ECX + 0x14);
    operator_new_result_2[6] = *(undefined4 *)(in_ECX + 0x18);
    *operator_new_result_2 = &PTR_FUN_00577b98;
    operator_new_result = operator_new_result_2;
  }
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004de0b0 FUN_004de0b0 ==== */

void FUN_004de0b0(undefined4 param_1)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(in_ECX + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x18))(1);
    *(undefined4 *)(in_ECX + 0x18) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  return;
}


/* ==== 004de0e0 FUN_004de0e0 ==== */

void FUN_004de0e0(byte param_1)

{
  FUN_004de100();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004de100 FUN_004de100 ==== */

void FUN_004de100(void)

{
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570db0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00577b98;
  local_4 = 0;
  if ((undefined4 *)in_ECX[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[6])(1);
  }
  *in_ECX = &PTR_FUN_00577bd4;
  local_4 = 1;
  if ((undefined4 *)in_ECX[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[4])(1);
  }
  *in_ECX = &PTR_LAB_00577b5c;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004de170 FUN_004de170 ==== */

undefined4 * FUN_004de170(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while (param_1 != param_2);
  return param_3;
}


/* ==== 004de1a0 FUN_004de1a0 ==== */

void FUN_004de1a0(void)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_3d;
  undefined1 *local_3c;
  undefined1 local_38 [4];
  char *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined **local_28 [3];
  undefined1 local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570dd0;
  pvStack_c = ExceptionList;
  local_38[0] = local_3d;
  i = 0xffffffff;
  pcVar2 = s_invalid_vector<T>_subscript_005a9a38;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_34 = (char *)0x0;
  local_30 = 0;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_invalid_vector<T>_subscript_005a9a38;
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
  local_4 = 0;
  local_3c = &DAT_00712694;
  FUN_00558853(&local_3c);
  local_4._0_1_ = 1;
  local_1c = local_38[0];
  FUN_004028f0(0);
  FUN_004093c0(local_38,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  local_28[0] = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_0057f4e0);
}


/* ==== 004de280 FUN_004de280 ==== */

void FUN_004de280(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004de310 FUN_004de310 ==== */

void FUN_004de310(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  do {
    uVar1 = *(uint *)(in_ECX + 0x10);
    *(uint *)(in_ECX + 0x10) = uVar1 + 1;
    if ((*(int *)(param_1 + 8) == 0) ||
       ((uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2) <= uVar1)) {
      FUN_004de1a0();
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 8) + uVar1 * 4) + 0x2c))();
  } while (*(int *)(in_ECX + 0x10) != -2);
  return;
}


/* ==== 004de390 FUN_004de390 ==== */

void FUN_004de390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570df0;
  local_c = ExceptionList;
  i = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = (char *)in_ECX[4];
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
    in_ECX[5] = i;
    *(undefined1 *)(in_ECX[4] + i) = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *in_ECX = &PTR_FUN_00577860;
  in_ECX[1] = 0x3f;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  local_4 = 0;
  FUN_004d9f00();
  *(undefined1 *)(in_ECX + 0xf) = 0;
  local_4 = 1;
  *in_ECX = &PTR_FUN_00577c10;
  FUN_004dc410(param_1,param_2,param_3,param_4);
  ExceptionList = local_c;
  return;
}


/* ==== 004de480 FUN_004de480 ==== */

void FUN_004de480(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_0057797c;
  local_4 = 0;
  FUN_004da170();
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004de500 FUN_004de500 ==== */

undefined4 * FUN_004de500(void)

{
  undefined1 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570e33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x44);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *operator_new_result = &PTR_FUN_00577860;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004da020(in_ECX + 0x28);
    uVar1 = *(undefined1 *)(in_ECX + 0x3c);
    *operator_new_result = &PTR_FUN_0057797c;
    *(undefined1 *)(operator_new_result + 0xf) = uVar1;
    operator_new_result[0x10] = *(undefined4 *)(in_ECX + 0x40);
    *operator_new_result = &PTR_FUN_00577c5c;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004de5e0 FUN_004de5e0 ==== */

void FUN_004de5e0(byte param_1)

{
  FUN_004de480();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004de600 FUN_004de600 ==== */

void FUN_004de600(byte param_1)

{
  FUN_004de620();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004de620 FUN_004de620 ==== */

void FUN_004de620(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_0057797c;
  local_4 = 0;
  FUN_004da170();
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004de6f0 FUN_004de6f0 ==== */

undefined4 FUN_004de6f0(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 unaff_retaddr;
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00570e68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*in_ECX + 0x30))(local_1c);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  puStack_8 = (undefined1 *)0x0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004d4cd0(unaff_retaddr,puVar3);
  uVar4 = FUN_004d4cd0(unaff_retaddr,s___005b725c,in_ECX + 10,s___005b7260);
  uVar4 = FUN_004da280(uVar4);
  uVar4 = FUN_004d4cd0(uVar4);
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
      ExceptionList = pvStack_10;
      return uVar4;
    }
    FUN_0054b339((char *)(local_1c[0] + -1));
  }
  ExceptionList = pvStack_10;
  return uVar4;
}


/* ==== 004de7c0 FUN_004de7c0 ==== */

undefined4 FUN_004de7c0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  void *operator_new_result;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_34 [4];
  void *operator_new_result_2;
  void *local_2c;
  void *local_28;
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00570ea7;
  pvStack_c = ExceptionList;
  local_34[0] = param_2;
  operator_new_result_2 = (void *)0x0;
  local_2c = (void *)0x0;
  local_28 = (void *)0x0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((*(int *)(in_ECX + 0x30) != 0) &&
     (iVar3 = *(int *)(in_ECX + 0x34) - *(int *)(in_ECX + 0x30) >> 2, ExceptionList = &pvStack_c,
     iVar3 != 0)) {
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = 0;
    }
    ExceptionList = &pvStack_c;
    operator_new_result = operator_new(iVar1 * 0x18);
    FUN_004d2d40(operator_new_result_2,local_2c,operator_new_result);
    FUN_004d2d10(operator_new_result_2,local_2c);
    FUN_0054b339(operator_new_result_2);
    local_28 = (void *)((int)operator_new_result + iVar3 * 0x18);
    if (operator_new_result_2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)local_2c - (int)operator_new_result_2) / 0x18;
    }
    local_2c = (void *)((int)operator_new_result + iVar3 * 0x18);
    operator_new_result_2 = operator_new_result;
  }
  iVar3 = *(int *)(in_ECX + 0x34);
  if (iVar3 != *(int *)(in_ECX + 0x30)) {
    do {
      uVar2 = FUN_004d9850(local_24,*(undefined4 *)(*(int *)(iVar3 + -4) + 0x20));
      local_4._0_1_ = 2;
      FUN_004d27b0(uVar2);
      local_4 = CONCAT31(local_4._1_3_,1);
      local_24[0] = &PTR_FUN_005778c0;
      FUN_004cf650();
      iVar3 = iVar3 + -4;
    } while (iVar3 != *(int *)(in_ECX + 0x30));
  }
  FUN_004d2a00(local_34);
  local_4 = local_4 & 0xffffff00;
  FUN_004d29b0();
  ExceptionList = pvStack_c;
  return param_1;
}


/* ==== 004de940 FUN_004de940 ==== */

undefined4 * FUN_004de940(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 local_34 [12];
  undefined **ppuStack_28;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570ee7;
  pvStack_c = ExceptionList;
  uVar2 = 0;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004de7c0(local_34,param_2);
  local_4 = 1;
  uVar1 = (**(code **)(in_ECX + 0x40))(local_24,uVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004cef20(uVar1);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8._0_1_ = 1;
  ppuStack_28 = &PTR_FUN_005778c0;
  FUN_004cf650(uVar1,1,uVar2);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_004d29b0();
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004de9e0 FUN_004de9e0 ==== */

void FUN_004de9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570f10;
  local_c = ExceptionList;
  i = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = (char *)in_ECX[4];
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
    in_ECX[5] = i;
    *(undefined1 *)(in_ECX[4] + i) = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *in_ECX = &PTR_FUN_00577860;
  in_ECX[1] = 0x41;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  local_4 = 0;
  FUN_004d9f00();
  *(undefined1 *)(in_ECX + 0xf) = 0;
  local_4 = 1;
  *in_ECX = &PTR_FUN_00577c5c;
  FUN_004dc410(param_1,param_2,param_3,param_4);
  ExceptionList = local_c;
  return;
}


/* ==== 004deb20 FUN_004deb20 ==== */

undefined4 FUN_004deb20(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_004796b0(local_1c,*(int *)(in_ECX + 8) + 0xc,s___005b159c);
  local_4 = 0;
  FUN_0047c9a0(param_1,uVar2,in_ECX + 0xc);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return param_1;
}


/* ==== 004debc0 FUN_004debc0 ==== */

undefined4 FUN_004debc0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *in_ECX;
  undefined4 unaff_retaddr;
  int local_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00570f48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*in_ECX + 0x30))(local_1c);
  puStack_8 = (undefined1 *)0x0;
  uVar3 = FUN_004d4cd0(unaff_retaddr,s_Method_005b73dc);
  puVar4 = *(undefined1 **)(iVar2 + 4);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_004d4cd0(uVar3,puVar4);
  uVar3 = FUN_004d4cd0(uVar3,s___005b725c,in_ECX + 10,s___005b7260);
  uVar3 = FUN_004da280(uVar3);
  uVar3 = FUN_004d4cd0(uVar3);
  if (local_1c[0] != 0) {
    cVar1 = *(char *)(local_1c[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_1c[0] + -1));
    }
    else {
      *(char *)(local_1c[0] + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_10;
  return uVar3;
}


/* ==== 004decd0 FUN_004decd0 ==== */

undefined4 FUN_004decd0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  void *operator_new_result;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_34 [4];
  void *operator_new_result_2;
  void *local_2c;
  void *local_28;
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00570f87;
  pvStack_c = ExceptionList;
  local_34[0] = param_2;
  operator_new_result_2 = (void *)0x0;
  local_2c = (void *)0x0;
  local_28 = (void *)0x0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((*(int *)(in_ECX + 0x30) != 0) &&
     (iVar3 = *(int *)(in_ECX + 0x34) - *(int *)(in_ECX + 0x30) >> 2, ExceptionList = &pvStack_c,
     iVar3 != 0)) {
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = 0;
    }
    ExceptionList = &pvStack_c;
    operator_new_result = operator_new(iVar1 * 0x18);
    FUN_004d2d40(operator_new_result_2,local_2c,operator_new_result);
    FUN_004d2d10(operator_new_result_2,local_2c);
    FUN_0054b339(operator_new_result_2);
    local_28 = (void *)((int)operator_new_result + iVar3 * 0x18);
    iVar3 = FUN_004d2ce0();
    local_2c = (void *)((int)operator_new_result + iVar3 * 0x18);
    operator_new_result_2 = operator_new_result;
  }
  iVar3 = *(int *)(in_ECX + 0x34) + -4;
  if (iVar3 != *(int *)(in_ECX + 0x30)) {
    do {
      uVar2 = FUN_004d9850(local_24,*(undefined4 *)(*(int *)(iVar3 + -4) + 0x20));
      local_4._0_1_ = 2;
      FUN_004d27b0(uVar2);
      local_4 = CONCAT31(local_4._1_3_,1);
      local_24[0] = &PTR_FUN_005778c0;
      FUN_004cf650();
      iVar3 = iVar3 + -4;
    } while (iVar3 != *(int *)(in_ECX + 0x30));
  }
  FUN_004d2a00(local_34);
  local_4 = local_4 & 0xffffff00;
  FUN_004d29b0();
  ExceptionList = pvStack_c;
  return param_1;
}


/* ==== 004dee20 FUN_004dee20 ==== */

undefined4 * FUN_004dee20(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_44 [4];
  char *local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined1 local_34 [12];
  undefined **ppuStack_28;
  undefined1 auStack_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570fcf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 == DAT_0074b888) {
    local_44[0] = (undefined1)param_3;
    ExceptionList = &pvStack_c;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = s_Cannot_invoke_method_for_NIL_obj_005b73e4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar3 = s_Cannot_invoke_method_for_NIL_obj_005b73e4;
      pcVar4 = local_40;
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
      local_40[i] = '\0';
      local_3c = i;
    }
    local_4 = 1;
    FUN_004d6900(0xbc0,local_44,in_ECX + 0xc,*(int *)(in_ECX + 8) + 0xc);
    local_4 = local_4 & 0xffffff00;
    if (local_40 != (char *)0x0) {
      cVar1 = local_40[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_40 + -1);
      }
      else {
        local_40[-1] = cVar1 + -1;
      }
    }
    local_40 = (char *)0x0;
    local_3c = 0;
    uStack_38 = 0;
  }
  uVar2 = FUN_004decd0(local_34,param_2);
  local_4 = 2;
  uVar2 = (**(code **)(in_ECX + 0x40))(auStack_24,param_3,uVar2);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004cef20(uVar2);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8._0_1_ = 2;
  ppuStack_28 = &PTR_FUN_005778c0;
  FUN_004cf650();
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_004d29b0();
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004defc0 FUN_004defc0 ==== */

void FUN_004defc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570ff0;
  local_c = ExceptionList;
  i = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = (char *)in_ECX[4];
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
    in_ECX[5] = i;
    *(undefined1 *)(in_ECX[4] + i) = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *in_ECX = &PTR_FUN_00577860;
  in_ECX[1] = 0x3c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  local_4 = 0;
  FUN_004d9f00();
  *(undefined1 *)(in_ECX + 0xf) = 0;
  local_4 = 1;
  *in_ECX = &PTR_FUN_00577ca4;
  FUN_004dc410(param_1,param_2,param_3,param_4);
  ExceptionList = local_c;
  return;
}


/* ==== 004df0b0 FUN_004df0b0 ==== */

undefined4 * FUN_004df0b0(void)

{
  undefined1 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571013;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x44);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *operator_new_result = &PTR_FUN_00577860;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004da020(in_ECX + 0x28);
    uVar1 = *(undefined1 *)(in_ECX + 0x3c);
    *operator_new_result = &PTR_FUN_0057797c;
    *(undefined1 *)(operator_new_result + 0xf) = uVar1;
    operator_new_result[0x10] = *(undefined4 *)(in_ECX + 0x40);
    *operator_new_result = &PTR_FUN_00577ca4;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004df190 FUN_004df190 ==== */

void FUN_004df190(byte param_1)

{
  FUN_004df1b0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004df1b0 FUN_004df1b0 ==== */

void FUN_004df1b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_0057797c;
  local_4 = 0;
  FUN_004da170();
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004df250 FUN_004df250 ==== */

undefined4 * FUN_004df250(void)

{
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057104b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x34);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    operator_new_result[0xb] = *(undefined4 *)(in_ECX + 0x2c);
    operator_new_result[0xc] = *(undefined4 *)(in_ECX + 0x30);
    *operator_new_result = &PTR_FUN_00577cec;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004df310 FUN_004df310 ==== */

void FUN_004df310(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  return;
}


/* ==== 004df370 FUN_004df370 ==== */

int * FUN_004df370(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_004d4cd0(param_1,s_External_005b7408,in_ECX + 0x1c,s__005b36c4);
  uVar1 = FUN_004dbf60(uVar1);
  piVar2 = (int *)FUN_004d4cd0(uVar1);
  puVar4 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_004d4cd0(piVar2,puVar4);
  FUN_004d43a0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  return piVar2;
}


/* ==== 004df410 FUN_004df410 ==== */

undefined4 *
FUN_004df410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = (char *)in_ECX[4];
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
    in_ECX[5] = i;
    *(undefined1 *)(i + in_ECX[4]) = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x39;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00577cec;
  FUN_004d3e90(param_1,param_2,param_3,param_4);
  ExceptionList = local_c;
  return in_ECX;
}


/* ==== 004df530 FUN_004df530 ==== */

undefined4 * FUN_004df530(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057109f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(in_ECX + 0x2c))(local_24);
  uStack_4 = 1;
  FUN_004cef20(uVar1);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_004cf650(uVar1,1,&PTR_FUN_005778c0);
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004df5b0 FUN_004df5b0 ==== */

void FUN_004df5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  undefined **appuStack_3c [6];
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005710c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(in_ECX + 0x2c))(local_24);
  iStack_4 = 0;
  uVar1 = FUN_004e50e0(appuStack_3c,param_3,uVar1,param_2);
  iStack_4._0_1_ = 1;
  (**(code **)(in_ECX + 0x30))(uVar1);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  appuStack_3c[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  iStack_4 = 0xffffffff;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004df640 FUN_004df640 ==== */

int * FUN_004df640(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  uVar1 = FUN_004d4cd0(param_1,s_External_005b7408,in_ECX + 0x1c,s__005b36c4);
  uVar1 = FUN_004dbf60(uVar1);
  uVar1 = FUN_004d4cd0(uVar1);
  puVar2 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004d4cd0(uVar1,puVar2);
  piVar3 = (int *)FUN_004e5c20(uVar1,in_ECX + 0x3c);
  FUN_004d43a0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) & 6) == 0) {
    iVar4 = (**(code **)(**(int **)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) + 0x2c))();
    if (iVar4 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  return piVar3;
}


/* ==== 004df6f0 FUN_004df6f0 ==== */

void FUN_004df6f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005710e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s__none_005b715c,~i - 1);
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x3a;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  *(undefined1 *)(in_ECX + 0x10) = (undefined1)param_4;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0xf] = &PTR_FUN_00577df4;
  local_4 = 1;
  *in_ECX = &PTR_FUN_00577d9c;
  FUN_004d3e90(param_1,param_2,param_3,param_4);
  FUN_004e5850(param_1);
  ExceptionList = local_c;
  return;
}


/* ==== 004df7c0 FUN_004df7c0 ==== */

void FUN_004df7c0(byte param_1)

{
  FUN_004e5b00();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004df7e0 FUN_004df7e0 ==== */

undefined4 * FUN_004df7e0(void)

{
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571103;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x50);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    operator_new_result[0xb] = *(undefined4 *)(in_ECX + 0x2c);
    operator_new_result[0xc] = *(undefined4 *)(in_ECX + 0x30);
    *operator_new_result = &PTR_FUN_00577cec;
    operator_new_result[0xd] = *(undefined4 *)(in_ECX + 0x34);
    local_4 = CONCAT31(local_4._1_3_,1);
    operator_new_result[0xe] = *(undefined4 *)(in_ECX + 0x38);
    FUN_004e5b60(in_ECX + 0x3c);
    *operator_new_result = &PTR_FUN_00577d9c;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004df8f0 FUN_004df8f0 ==== */

void FUN_004df8f0(byte param_1)

{
  FUN_004df910();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004df910 FUN_004df910 ==== */

void FUN_004df910(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00577d9c;
  local_4 = 0;
  FUN_004e5b00();
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004dfa20 FUN_004dfa20 ==== */

undefined4 * FUN_004dfa20(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 local_34 [3];
  undefined **ppuStack_28;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571177;
  pvStack_c = ExceptionList;
  iVar1 = 0;
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x44) != 0) {
    iVar1 = *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(local_34,iVar1);
  local_4 = 1;
  FUN_004e5a30(local_34);
  uVar2 = (**(code **)(in_ECX + 0x34))(local_24,local_34);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004cef20(uVar2);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  ppuStack_28 = &PTR_FUN_005778c0;
  FUN_004cf650(uVar2,1,uVar3);
  FUN_0054b339(local_34[0]);
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004dfc30 FUN_004dfc30 ==== */

int * FUN_004dfc30(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_004d4cd0(param_1,s_Const_Obj_005b7414,in_ECX + 0x1c,s__005b36c4);
  uVar1 = FUN_004dbf60(uVar1);
  piVar2 = (int *)FUN_004d4cd0(uVar1);
  puVar4 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_004d4cd0(piVar2,puVar4);
  FUN_004d43a0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  return piVar2;
}


/* ==== 004dfcd0 FUN_004dfcd0 ==== */

undefined4 *
FUN_004dfcd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005711c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = (char *)in_ECX[4];
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
    in_ECX[5] = i;
    *(undefined1 *)(i + in_ECX[4]) = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x36;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00577df8;
  FUN_004d3e90(param_1,param_2,param_3,param_4);
  ExceptionList = local_c;
  return in_ECX;
}


/* ==== 004dfdb0 FUN_004dfdb0 ==== */

undefined4 * FUN_004dfdb0(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005711eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x30);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    uVar1 = *(undefined4 *)(in_ECX + 0x2c);
    *operator_new_result = &PTR_FUN_00577df8;
    operator_new_result[0xb] = uVar1;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004dfe70 FUN_004dfe70 ==== */

void FUN_004dfe70(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x2c);
  param_1[2] = 4;
  param_1[4] = uVar1;
  *param_1 = &PTR_FUN_005778c0;
  return;
}


/* ==== 004dff30 FUN_004dff30 ==== */

int * FUN_004dff30(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_004d4cd0(param_1,s_Var_005b7420,in_ECX + 0x1c,s__005b36c4);
  uVar1 = FUN_004dbf60(uVar1);
  piVar2 = (int *)FUN_004d4cd0(uVar1);
  puVar4 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_004d4cd0(piVar2,puVar4);
  FUN_004d43a0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  return piVar2;
}


/* ==== 004e0020 FUN_004e0020 ==== */

void FUN_004e0020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = (char *)in_ECX[4];
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
    in_ECX[5] = i;
    *(undefined1 *)(i + in_ECX[4]) = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x37;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  local_4 = 0;
  in_ECX[0xc] = 0;
  *in_ECX = &PTR_FUN_00577e50;
  FUN_004d3e90(param_1,param_2,param_3,param_4);
  FUN_004d7450(param_1,in_ECX + 0xb);
  ExceptionList = local_c;
  return;
}


/* ==== 004e0110 FUN_004e0110 ==== */

undefined4 * FUN_004e0110(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057122b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x34);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    uVar1 = *(undefined4 *)(in_ECX + 0x2c);
    operator_new_result[0xc] = 0;
    operator_new_result[0xb] = uVar1;
    *operator_new_result = &PTR_FUN_00577e50;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004e01e0 FUN_004e01e0 ==== */

void FUN_004e01e0(byte param_1)

{
  FUN_004e0fa0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e0240 FUN_004e0240 ==== */

void FUN_004e0240(int param_1,undefined4 param_2)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x44))();
  if (cVar1 != '\0') {
    FUN_004d9780(*(int *)(param_1 + 0xc) + in_ECX[0xb],param_2);
    return;
  }
  FUN_004d9780(in_ECX[0xb],param_2);
  return;
}


/* ==== 004e03c0 FUN_004e03c0 ==== */

int * FUN_004e03c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  uVar1 = FUN_004d4cd0(param_1,s_Var_005b7420,in_ECX + 0x1c,s__005b36c4);
  uVar1 = FUN_004dbf60(uVar1);
  uVar1 = FUN_004d4cd0(uVar1);
  puVar2 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004d4cd0(uVar1,puVar2);
  piVar3 = (int *)FUN_004e5c20(uVar1,in_ECX + 0x34);
  FUN_004d43a0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) & 6) == 0) {
    iVar4 = (**(code **)(**(int **)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) + 0x2c))();
    if (iVar4 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  return piVar3;
}


/* ==== 004e0470 FUN_004e0470 ==== */

void FUN_004e0470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571273;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s__none_005b715c,~i - 1);
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x38;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  in_ECX[0xb] = 0xfff0bdc0;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 0xe) = (undefined1)param_4;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0xd] = &PTR_FUN_00577df4;
  local_4 = 1;
  *in_ECX = &PTR_FUN_00577eb0;
  FUN_004d3e90(param_1,param_2,param_3,param_4);
  FUN_004d7450(param_1,in_ECX + 0xb);
  FUN_004e5850(param_1);
  ExceptionList = local_c;
  return;
}


/* ==== 004e0560 FUN_004e0560 ==== */

undefined4 * FUN_004e0560(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571293;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x48);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    uVar1 = *(undefined4 *)(in_ECX + 0x2c);
    operator_new_result[0xc] = 0;
    operator_new_result[0xb] = uVar1;
    *operator_new_result = &PTR_FUN_00577e50;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004e5b60(in_ECX + 0x34);
    *operator_new_result = &PTR_FUN_00577eb0;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004e0660 FUN_004e0660 ==== */

void FUN_004e0660(byte param_1)

{
  FUN_004e0680();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e0680 FUN_004e0680 ==== */

void FUN_004e0680(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005712b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00577eb0;
  local_4 = 0;
  FUN_004e5b00();
  *in_ECX = &PTR_FUN_00577e50;
  local_4 = 1;
  if ((undefined4 *)in_ECX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xc])(1);
  }
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e0870 FUN_004e0870 ==== */

void FUN_004e0870(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005712ff;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  if (in_ECX[0xf] != 0) {
    iVar2 = in_ECX[0x10] - in_ECX[0xf] >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(local_1c,iVar2);
  local_4 = 1;
  FUN_004e5a30(local_1c);
  cVar1 = (**(code **)(*in_ECX + 0x44))();
  iVar2 = in_ECX[0xb];
  if (cVar1 != '\0') {
    iVar2 = iVar2 + *(int *)(param_2 + 0xc);
  }
  FUN_004d9290(iVar2);
  FUN_004e5ab0(local_1c);
                    /* WARNING: Could not recover jumptable at 0x004e08f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e09ec)[in_ECX[8] + -1])();
  return;
}


/* ==== 004e0a00 FUN_004e0a00 ==== */

void FUN_004e0a00(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined1 local_104 [80];
  undefined **local_b4;
  undefined4 local_ac;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057135a;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  local_ac = 0;
  local_b4 = &PTR_FUN_005778c0;
  local_4 = 0;
  if (in_ECX[0xf] != 0) {
    iVar2 = in_ECX[0x10] - in_ECX[0xf] >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(local_104,iVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004e5a30(local_104);
  cVar1 = (**(code **)(*in_ECX + 0x44))();
  if (cVar1 == '\0') {
    iVar2 = in_ECX[0xb];
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc) + in_ECX[0xb];
  }
  FUN_004d9290(iVar2);
  FUN_004e5ab0(local_104);
                    /* WARNING: Could not recover jumptable at 0x004e0aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e0d48)[in_ECX[8] + -1])();
  return;
}


/* ==== 004e0d60 FUN_004e0d60 ==== */

void FUN_004e0d60(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = param_1;
  *in_ECX = &PTR_FUN_00576a88;
  in_ECX[2] = 1;
  in_ECX[5] = param_2;
  return;
}


/* ==== 004e0d80 FUN_004e0d80 ==== */

void FUN_004e0d80(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576a88;
  in_ECX[2] = 2;
  in_ECX[4] = param_1;
  return;
}


/* ==== 004e0da0 FUN_004e0da0 ==== */

void FUN_004e0da0(undefined1 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *operator_new_result;
  int in_ECX;
  uint j;
  uint k;
  uint i;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
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
  puStack_8 = &LAB_00571380;
  pvStack_c = ExceptionList;
  uVar1 = *(undefined4 *)(in_ECX + 0x20);
  ExceptionList = &pvStack_c;
  iVar3 = FUN_004e5a70();
  iVar4 = FUN_004d9a70(uVar1);
  i = iVar3 * iVar4;
  operator_new_result = operator_new(i);
  if (operator_new_result == (undefined4 *)0x0) {
    auStack_2c[0] = param_1;
    j = 0xffffffff;
    pcVar7 = &DAT_00712694;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    j = ~j - 1;
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    cVar2 = FUN_00402a00(j,1);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)&DAT_00712694;
      puVar6 = puStack_28;
      for (k = j >> 2; k != 0; k = k - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (k = j & 3; k != 0; k = k - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_004029e0(j);
    }
    auStack_1c[0] = param_1;
    j = 0xffffffff;
    uStack_4 = 0;
    pcVar7 = s_out_of_memory_on_allocation_of_a_005b7464;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_00402940(s_out_of_memory_on_allocation_of_a_005b7464,~j - 1);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_004d6900(0xbb9,auStack_1c,in_ECX + 0xc,auStack_2c);
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
    if (puStack_28 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)puStack_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)((int)puStack_28 + -1));
      }
      else {
        *(char *)((int)puStack_28 + -1) = cVar2 + -1;
      }
    }
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
  }
  puVar5 = operator_new_result;
  for (j = i >> 2; j != 0; j = j - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_004d92a0(operator_new_result);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e0f50 FUN_004e0f50 ==== */

void FUN_004e0f50(void)

{
  int iVar1;
  int i;
  int in_ECX;
  undefined4 *puVar2;
  
  iVar1 = FUN_004d9280();
  if (*(int *)(in_ECX + 0x20) == 3) {
    i = FUN_004e5a70();
    if (-1 < i + -1) {
      puVar2 = (undefined4 *)(iVar1 + (i + -1) * 4);
      do {
        FUN_00559d4e(*puVar2);
        puVar2 = puVar2 + -1;
        i = i + -1;
      } while (i != 0);
    }
  }
  FUN_0054b339(iVar1);
  return;
}


/* ==== 004e0fa0 FUN_004e0fa0 ==== */

void FUN_004e0fa0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571398;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00577e50;
  local_4 = 0;
  if ((undefined4 *)in_ECX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xc])(1);
  }
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e10d0 FUN_004e10d0 ==== */

void FUN_004e10d0(void)

{
  char cVar1;
  int *in_ECX;
  
  if (((char)in_ECX[10] == '\0') && (*(char *)((int)in_ECX + 0x29) == '\0')) {
    cVar1 = (**(code **)(*in_ECX + 0x3c))();
    if (cVar1 == '\0') {
      FUN_004e6ca0(&DAT_0074b8d0,in_ECX + 3,0xfa4,s_argument_not_used_005b748c);
    }
  }
  return;
}


/* ==== 004e1110 FUN_004e1110 ==== */

void FUN_004e1110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005713b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = (char *)in_ECX[4];
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
    in_ECX[5] = i;
    *(undefined1 *)(i + in_ECX[4]) = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x35;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00577f10;
  FUN_004d3e90(param_1,param_2,param_3,param_4);
  FUN_004d7450(param_1,in_ECX + 0xb);
  ExceptionList = local_c;
  return;
}


/* ==== 004e1200 FUN_004e1200 ==== */

undefined4 * FUN_004e1200(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005713db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x30);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    uVar1 = *(undefined4 *)(in_ECX + 0x2c);
    *operator_new_result = &PTR_FUN_00577f10;
    operator_new_result[0xb] = uVar1;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004e12e0 FUN_004e12e0 ==== */

void FUN_004e12e0(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined1 local_24 [8];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00571400;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(*in_ECX + 0x38))(local_24,param_1);
  pvStack_c = (void *)0x0;
  uVar1 = FUN_004e50e0(&stack0xffffffbc,param_1,uVar1,unaff_retaddr);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  (**(code **)(*in_ECX + 0x30))(param_1,uVar1);
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_004cf650(param_1,uVar1,&PTR_FUN_005778c0);
  uStack_14 = 0xffffffff;
  FUN_004cf650();
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 004e13b0 FUN_004e13b0 ==== */

void FUN_004e13b0(void)

{
  int in_ECX;
  
  FUN_004d9e70(*(undefined4 *)(in_ECX + 0x20));
  return;
}


/* ==== 004e13e0 FUN_004e13e0 ==== */

int * FUN_004e13e0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  uVar1 = FUN_004d4cd0(param_1,s_Const_005b74a4,in_ECX + 0x1c,s__005b36c4);
  uVar1 = FUN_004dbf60(uVar1);
  uVar1 = FUN_004d4cd0(uVar1);
  puVar2 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004d4cd0(uVar1,puVar2);
  uVar1 = FUN_004d4cd0(uVar1,s___005b74a0,in_ECX + 0x30);
  piVar3 = (int *)FUN_004e76a0(uVar1);
  FUN_004d43a0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) & 6) == 0) {
    iVar4 = (**(code **)(**(int **)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) + 0x2c))();
    if (iVar4 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  return piVar3;
}


/* ==== 004e14d0 FUN_004e14d0 ==== */

undefined4 * FUN_004e14d0(void)

{
  void *pvVar1;
  char cVar2;
  undefined4 *operator_new_result;
  undefined4 *operator_new_result_2;
  undefined4 *in_ECX;
  uint i;
  int extraout_ECX;
  uint j;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  char *pcVar4;
  undefined4 unaff_EDI;
  char *pcVar5;
  undefined1 local_5;
  
  *(undefined1 *)(in_ECX + 3) = local_5;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  iVar3 = extraout_ECX;
  if (cVar2 != '\0') {
    pcVar4 = s__none_005b715c;
    pcVar5 = (char *)in_ECX[4];
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    in_ECX[5] = i;
    *(undefined1 *)(i + in_ECX[4]) = 0;
    iVar3 = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x34;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xc] = &PTR_FUN_005778c0;
  *in_ECX = &PTR_FUN_00577f68;
  pvVar1 = ExceptionList;
  ExceptionList = &stack0xffffffec;
  operator_new_result = operator_new(0x50);
  operator_new_result_2 = (undefined4 *)0x0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(iVar3 + 4);
    operator_new_result[2] = *(undefined4 *)(iVar3 + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(iVar3 + 0xc);
    operator_new_result_2 = operator_new_result;
    FUN_004028f0(0);
    FUN_004093c0((undefined1 *)(iVar3 + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(iVar3 + 0x1c);
    operator_new_result[8] = *(undefined4 *)(iVar3 + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(iVar3 + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    FUN_004cef20(iVar3 + 0x30,unaff_EBP,unaff_EBX,unaff_EDI,unaff_ESI,operator_new_result_2);
    operator_new_result[0xc] = &PTR_FUN_005778c0;
    *(undefined1 *)(operator_new_result + 0x12) = *(undefined1 *)(iVar3 + 0x48);
    *operator_new_result = &PTR_FUN_00577f68;
    operator_new_result_2 = operator_new_result;
  }
  ExceptionList = pvVar1;
  return operator_new_result_2;
}


/* ==== 004e1570 FUN_004e1570 ==== */

undefined4 * FUN_004e1570(void)

{
  undefined4 *operator_new_result_2;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571423;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result_2 = operator_new(0x50);
  local_4 = 0;
  operator_new_result = (undefined4 *)0x0;
  if (operator_new_result_2 != (undefined4 *)0x0) {
    operator_new_result_2[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result_2[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result_2 + 3) = *(undefined1 *)(in_ECX + 0xc);
    FUN_004028f0(0);
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result_2[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result_2[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result_2 + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result_2 + 10) = 0;
    *(undefined1 *)((int)operator_new_result_2 + 0x29) = 0;
    *operator_new_result_2 = &PTR_FUN_00577d44;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004cef20(in_ECX + 0x30);
    operator_new_result_2[0xc] = &PTR_FUN_005778c0;
    *(undefined1 *)(operator_new_result_2 + 0x12) = *(undefined1 *)(in_ECX + 0x48);
    *operator_new_result_2 = &PTR_FUN_00577f68;
    operator_new_result = operator_new_result_2;
  }
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004e1640 FUN_004e1640 ==== */

void FUN_004e1640(undefined4 *param_1)

{
  param_1[2] = 2;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_005778c0;
  return;
}


/* ==== 004e1660 FUN_004e1660 ==== */

void FUN_004e1660(byte param_1)

{
  FUN_004e1680();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e1680 FUN_004e1680 ==== */

void FUN_004e1680(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00577f68;
  local_4 = 0;
  in_ECX[0xc] = &PTR_FUN_005778c0;
  FUN_004cf650();
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004e1720 FUN_004e1720 ==== */

int * FUN_004e1720(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_004d4cd0(param_1,s_Member_005b74bc,in_ECX + 0x1c,s__005b36c4);
  uVar1 = FUN_004dbf60(uVar1);
  piVar2 = (int *)FUN_004d4cd0(uVar1);
  puVar4 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_004d4cd0(piVar2,puVar4);
  FUN_004d43a0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  return piVar2;
}


/* ==== 004e17c0 FUN_004e17c0 ==== */

void FUN_004e17c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571458;
  local_c = ExceptionList;
  i = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = (char *)in_ECX[4];
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
    in_ECX[5] = i;
    *(undefined1 *)(in_ECX[4] + i) = 0;
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x32;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00577fc0;
  FUN_004d3e90(param_1,param_2,param_3,param_4);
  ExceptionList = local_c;
  return;
}


/* ==== 004e18a0 FUN_004e18a0 ==== */

undefined4 * FUN_004e18a0(void)

{
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057147b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x34);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    operator_new_result[0xb] = *(undefined4 *)(in_ECX + 0x2c);
    operator_new_result[0xc] = *(undefined4 *)(in_ECX + 0x30);
    *operator_new_result = &PTR_FUN_00577fc0;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004e19e0 FUN_004e19e0 ==== */

void FUN_004e19e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int in_ECX;
  undefined **appuStack_3c [6];
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005714a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(in_ECX + 0x2c))(local_24,param_3);
  iStack_4 = 0;
  uVar1 = FUN_004e50e0(appuStack_3c,param_4,uVar1,param_2);
  iStack_4._0_1_ = 1;
  (**(code **)(in_ECX + 0x30))(param_3,uVar1);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  appuStack_3c[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  iStack_4 = 0xffffffff;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e1a80 FUN_004e1a80 ==== */

void FUN_004e1a80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined **appuStack_3c [6];
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005714c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004d9280();
  uVar2 = (**(code **)(in_ECX + 0x2c))(local_24,uVar1);
  iStack_4 = 0;
  uVar2 = FUN_004e50e0(appuStack_3c,param_3,uVar2,param_2);
  iStack_4._0_1_ = 1;
  (**(code **)(in_ECX + 0x30))(uVar1,uVar2);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  appuStack_3c[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  iStack_4 = 0xffffffff;
  local_24[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e1b20 FUN_004e1b20 ==== */

undefined4 * FUN_004e1b20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005714ef;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(in_ECX + 0x2c))(local_24,param_3);
  uStack_4 = 1;
  FUN_004cef20(uVar1);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_004cf650(uVar1,1,&PTR_FUN_005778c0);
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004e1ba0 FUN_004e1ba0 ==== */

undefined4 * FUN_004e1ba0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057151f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004d9280();
  uVar1 = (**(code **)(in_ECX + 0x2c))(local_24,uVar1);
  uStack_4 = 1;
  FUN_004cef20(uVar1);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_004cf650(uVar1,1,&PTR_FUN_005778c0);
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004e1c30 FUN_004e1c30 ==== */

int * FUN_004e1c30(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  uVar1 = FUN_004d4cd0(param_1,s_Member_005b74bc,in_ECX + 0x1c,s__005b36c4);
  uVar1 = FUN_004dbf60(uVar1);
  uVar1 = FUN_004d4cd0(uVar1);
  puVar2 = *(undefined1 **)(in_ECX + 0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004d4cd0(uVar1,puVar2);
  piVar3 = (int *)FUN_004e5c20(uVar1,in_ECX + 0x3c);
  FUN_004d43a0(10);
  uVar5 = 0;
  if ((*(byte *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) & 6) == 0) {
    iVar4 = (**(code **)(**(int **)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) + 0x2c))();
    if (iVar4 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 4) | uVar5;
    if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  return piVar3;
}


/* ==== 004e1ce0 FUN_004e1ce0 ==== */

void FUN_004e1ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint i;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571543;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s__none_005b715c,~i - 1);
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[1] = 0x33;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 9) = 0xffff;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  *(undefined1 *)(in_ECX + 0x10) = (undefined1)param_4;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0xf] = &PTR_FUN_00577df4;
  local_4 = 1;
  *in_ECX = &PTR_FUN_00578024;
  FUN_004d3e90(param_1,param_2,param_3,param_4);
  FUN_004e5850(param_1);
  ExceptionList = local_c;
  return;
}


/* ==== 004e1db0 FUN_004e1db0 ==== */

undefined4 * FUN_004e1db0(void)

{
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571563;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x50);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)(in_ECX + 4);
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0((undefined1 *)(in_ECX + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)(in_ECX + 0x1c);
    operator_new_result[8] = *(undefined4 *)(in_ECX + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)(in_ECX + 0x24);
    *(undefined1 *)(operator_new_result + 10) = 0;
    *(undefined1 *)((int)operator_new_result + 0x29) = 0;
    *operator_new_result = &PTR_FUN_00577d44;
    operator_new_result[0xb] = *(undefined4 *)(in_ECX + 0x2c);
    operator_new_result[0xc] = *(undefined4 *)(in_ECX + 0x30);
    *operator_new_result = &PTR_FUN_00577fc0;
    operator_new_result[0xd] = *(undefined4 *)(in_ECX + 0x34);
    local_4 = CONCAT31(local_4._1_3_,1);
    operator_new_result[0xe] = *(undefined4 *)(in_ECX + 0x38);
    FUN_004e5b60(in_ECX + 0x3c);
    *operator_new_result = &PTR_FUN_00578024;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004e1ea0 FUN_004e1ea0 ==== */

void FUN_004e1ea0(byte param_1)

{
  FUN_004e1ec0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e1ec0 FUN_004e1ec0 ==== */

void FUN_004e1ec0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00578024;
  local_4 = 0;
  FUN_004e5b00();
  *in_ECX = &PTR_FUN_00577860;
  iVar2 = in_ECX[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004e2270 FUN_004e2270 ==== */

undefined4 * FUN_004e2270(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 local_34 [3];
  undefined **ppuStack_28;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571657;
  pvStack_c = ExceptionList;
  iVar1 = 0;
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x44) != 0) {
    iVar1 = *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(local_34,iVar1);
  local_4 = 1;
  FUN_004e5a30(local_34);
  uVar2 = (**(code **)(in_ECX + 0x34))(local_24,param_3,local_34);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004cef20(uVar2);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  ppuStack_28 = &PTR_FUN_005778c0;
  FUN_004cf650(uVar2,1,uVar3);
  FUN_0054b339(local_34[0]);
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004e2340 FUN_004e2340 ==== */

undefined4 * FUN_004e2340(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_34 [3];
  undefined **ppuStack_28;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571697;
  pvStack_c = ExceptionList;
  iVar1 = 0;
  if (*(int *)(in_ECX + 0x44) != 0) {
    iVar1 = *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_004d9aa0(local_34,iVar1);
  local_4 = 1;
  FUN_004e5a30(local_34);
  uVar2 = FUN_004d9280(local_34);
  uVar2 = (**(code **)(in_ECX + 0x34))(local_24,uVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004cef20(uVar2);
  *param_1 = &PTR_FUN_005778c0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  ppuStack_28 = &PTR_FUN_005778c0;
  FUN_004cf650();
  FUN_0054b339(local_34[0]);
  ExceptionList = pvStack_10;
  return param_1;
}


/* ==== 004e2480 FUN_004e2480 ==== */

void FUN_004e2480(int *param_1)

{
  char cVar1;
  short *in_ECX;
  
  if (param_1 != (int *)0x0) {
    *in_ECX = 0;
    cVar1 = (**(code **)(*param_1 + 0x18))();
    while (cVar1 == '\0') {
      in_ECX[*in_ECX + 0xc] = (short)param_1[9];
      *(int *)(in_ECX + *in_ECX * 2 + 2) = param_1[1];
      *in_ECX = *in_ECX + 1;
      param_1 = (int *)param_1[2];
      cVar1 = (**(code **)(*param_1 + 0x18))();
    }
    return;
  }
  *in_ECX = 0xff;
  return;
}


/* ==== 004e24e0 FUN_004e24e0 ==== */

void FUN_004e24e0(undefined2 *param_1)

{
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1 - (int)in_ECX;
  *(undefined2 *)in_ECX = *param_1;
  i = 5;
  puVar1 = in_ECX + 6;
  do {
    in_ECX = in_ECX + 1;
    *in_ECX = *(undefined4 *)(iVar2 + (int)in_ECX);
    *(undefined2 *)puVar1 = *(undefined2 *)(iVar2 + -2 + (int)puVar1 + 2);
    i = i + -1;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
  } while (i != 0);
  return;
}


/* ==== 004e2520 FUN_004e2520 ==== */

void FUN_004e2520(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *in_ECX;
  int iVar3;
  short i;
  
  sVar1 = FUN_004d4510();
  *in_ECX = sVar1;
  if ((sVar1 != 0xff) && (i = 0, 0 < sVar1)) {
    do {
      iVar3 = (int)i;
      uVar2 = FUN_004d4510();
      *(undefined4 *)(in_ECX + iVar3 * 2 + 2) = uVar2;
      sVar1 = FUN_004d74d0(param_1);
      i = i + 1;
      in_ECX[iVar3 + 0xc] = sVar1;
    } while (i < *in_ECX);
    return;
  }
  return;
}


/* ==== 004e2580 FUN_004e2580 ==== */

void FUN_004e2580(undefined4 param_1)

{
  short *in_ECX;
  undefined2 extraout_var;
  short i;
  
  FUN_004d43a0((char)*in_ECX);
  if ((*in_ECX != 0xff) && (i = 0, 0 < *in_ECX)) {
    do {
      FUN_004d43a0((char)in_ECX[i * 2 + 2]);
      FUN_004d73f0(param_1,CONCAT22(extraout_var,in_ECX[i + 0xc]));
      i = i + 1;
    } while (i < *in_ECX);
  }
  return;
}


/* ==== 004e25d0 FUN_004e25d0 ==== */

int FUN_004e25d0(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  short *in_ECX;
  uint uVar4;
  
  sVar1 = *in_ECX;
  if (sVar1 == 0xff) {
    return 0;
  }
joined_r0x004e25f2:
  sVar1 = sVar1 + -1;
  if (sVar1 < 0) {
    return param_1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0x43) {
                    /* WARNING: Could not recover jumptable at 0x004e260a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*(code *)(&PTR_LAB_004e2720)[*(int *)(in_ECX + sVar1 * 2 + 2) + -0x36])();
    return iVar3;
  }
  cVar2 = FUN_004d4020(iVar3);
  if (cVar2 == '\0') goto LAB_004e26a9;
  iVar3 = (int)sVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_004e272f)[*(int *)(in_ECX + iVar3 * 2 + 2)]) {
  case 0:
    goto switchD_004e268b_caseD_0;
  case 1:
    uVar4 = (uint)in_ECX[iVar3 + 0xc];
    iVar3 = param_1 + 0x44;
    break;
  case 2:
    uVar4 = (uint)in_ECX[iVar3 + 0xc];
    iVar3 = param_1 + 0x80;
  }
  goto LAB_004e26cf;
LAB_004e26a9:
  if (iVar3 != 0x42) goto joined_r0x004e25f2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_004e274a)[*(int *)(in_ECX + sVar1 * 2 + 2)]) {
  case 0:
switchD_004e268b_caseD_0:
    uVar4 = (uint)in_ECX[sVar1 + 0xc];
    iVar3 = param_1 + 0x2c;
LAB_004e26cf:
    if ((*(int *)(iVar3 + 4) != 0) &&
       (uVar4 < (uint)(*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2))) goto LAB_004e2706;
    break;
  case 1:
    uVar4 = (uint)in_ECX[sVar1 + 0xc];
    iVar3 = param_1 + 0x40;
    if ((*(int *)(param_1 + 0x44) != 0) &&
       (uVar4 < (uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2)))
    goto LAB_004e2706;
  }
  FUN_004e2790();
LAB_004e2706:
  param_1 = *(int *)(*(int *)(iVar3 + 4) + uVar4 * 4);
  goto joined_r0x004e25f2;
}


/* ==== 004e2790 FUN_004e2790 ==== */

void FUN_004e2790(void)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_3d;
  undefined1 *local_3c;
  undefined1 local_38 [4];
  char *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined **local_28 [3];
  undefined1 local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005716c0;
  pvStack_c = ExceptionList;
  local_38[0] = local_3d;
  i = 0xffffffff;
  pcVar2 = s_invalid_vector<T>_subscript_005a9a38;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_34 = (char *)0x0;
  local_30 = 0;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_invalid_vector<T>_subscript_005a9a38;
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
  local_4 = 0;
  local_3c = &DAT_00712694;
  FUN_00558853(&local_3c);
  local_4._0_1_ = 1;
  local_1c = local_38[0];
  FUN_004028f0(0);
  FUN_004093c0(local_38,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  local_28[0] = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_0057f4e0);
}


/* ==== 004e2930 FUN_004e2930 ==== */

undefined4 FUN_004e2930(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_ECX;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005716d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004dbc40(local_1c,*(undefined4 *)(in_ECX + 8),0);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  uStack_4 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004d7610(param_1,s__STACK___s__005b74dc,puVar3);
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_0054b339((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}


/* ==== 004e2ab0 FUN_004e2ab0 ==== */

undefined1 * FUN_004e2ab0(undefined1 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int in_ECX;
  uint j;
  uint k;
  char *pcVar4;
  char *pcVar5;
  int i;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005716f8;
  pvStack_c = ExceptionList;
  puVar2 = (undefined1 *)(*(int *)(in_ECX + 8) + 0xc);
  local_1c[0] = *puVar2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_004093c0(puVar2,0,0xffffffff);
  local_4 = 0;
  i = 0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x40))();
  if (0 < iVar3) {
    do {
      j = 0xffffffff;
      pcVar4 = s____005b74f0;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      if (-local_14 - 1U <= j) {
        FUN_0054b1b4();
      }
      if (j != 0) {
        iVar3 = local_14 + j;
        cVar1 = FUN_00402a00(iVar3,0);
        if (cVar1 != '\0') {
          pcVar4 = s____005b74f0;
          pcVar5 = (char *)(local_14 + local_18);
          for (k = j >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar5 = pcVar5 + 4;
          }
          for (j = j & 3; j != 0; j = j - 1) {
            *pcVar5 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
          }
          *(undefined1 *)(local_18 + iVar3) = 0;
          local_14 = iVar3;
        }
      }
      i = i + 1;
      iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x40))();
    } while (i < iVar3);
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


/* ==== 004e2c20 FUN_004e2c20 ==== */

void FUN_004e2c20(undefined4 param_1)

{
  int in_ECX;
  
  FUN_004d43a0(*(undefined4 *)(in_ECX + 4));
  FUN_004dcbc0(param_1,*(undefined4 *)(in_ECX + 8));
  return;
}


/* ==== 004e2c50 FUN_004e2c50 ==== */

void FUN_004e2c50(undefined4 param_1)

{
  int in_ECX;
  
  FUN_004d43a0(*(undefined4 *)(in_ECX + 4));
  FUN_004dcbc0(param_1,*(undefined4 *)(in_ECX + 8));
  FUN_004d73d0(param_1,*(undefined1 *)(in_ECX + 0xc));
  return;
}


/* ==== 004e2c80 FUN_004e2c80 ==== */

void FUN_004e2c80(undefined4 param_1)

{
  int in_ECX;
  
  FUN_004d43a0(*(undefined4 *)(in_ECX + 4));
  FUN_004e7770(param_1);
  return;
}


/* ==== 004e2cb0 FUN_004e2cb0 ==== */

void FUN_004e2cb0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_004d43a0(*(undefined4 *)(in_ECX + 4));
  FUN_004dbf40(param_1,*(undefined4 *)(in_ECX + 8));
  return;
}


/* ==== 004e2ce0 FUN_004e2ce0 ==== */

void FUN_004e2ce0(undefined4 param_1)

{
  int in_ECX;
  undefined2 extraout_var;
  
  FUN_004d43a0(*(undefined4 *)(in_ECX + 4));
  FUN_004d73f0(param_1,CONCAT22(extraout_var,*(undefined2 *)(in_ECX + 8)));
  return;
}


/* ==== 004e2d10 FUN_004e2d10 ==== */

void FUN_004e2d10(void)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057178d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_004d4610();
                    /* WARNING: Could not recover jumptable at 0x004e2d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e2f74)[iVar1])();
  return;
}


/* ==== 004e2f90 FUN_004e2f90 ==== */

undefined4 * FUN_004e2f90(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  
  operator_new_result = operator_new(0x10);
  if (operator_new_result != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result = &PTR_LAB_00577ad0;
    operator_new_result[1] = uVar1;
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)(in_ECX + 0xc);
    *operator_new_result = &PTR_FUN_00578088;
    return operator_new_result;
  }
  return (undefined4 *)0x0;
}


/* ==== 004e2fd0 FUN_004e2fd0 ==== */

undefined4 * FUN_004e2fd0(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  
  operator_new_result = operator_new(8);
  if (operator_new_result != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result = &PTR_FUN_005780b0;
    operator_new_result[1] = uVar1;
    return operator_new_result;
  }
  return (undefined4 *)0x0;
}


/* ==== 004e3000 FUN_004e3000 ==== */

undefined4 * FUN_004e3000(void)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  
  operator_new_result = operator_new(0xc);
  if (operator_new_result != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result = &PTR_LAB_00577ad0;
    operator_new_result[1] = uVar1;
    operator_new_result[2] = *(undefined4 *)(in_ECX + 8);
    *operator_new_result = &PTR_FUN_005780d8;
    return operator_new_result;
  }
  return (undefined4 *)0x0;
}


/* ==== 004e31e0 FUN_004e31e0 ==== */

void FUN_004e31e0(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined1 local_24 [8];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005717b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(*in_ECX + 8))(local_24,param_1);
  pvStack_c = (void *)0x0;
  uVar1 = FUN_004e50e0(&stack0xffffffbc,param_1,uVar1,unaff_retaddr);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  (**(code **)(*in_ECX + 0xc))(param_1,uVar1);
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_004cf650(param_1,uVar1,&PTR_FUN_005778c0);
  uStack_14 = 0xffffffff;
  FUN_004cf650();
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 004e3390 FUN_004e3390 ==== */

void FUN_004e3390(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 auStack_24 [8];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005717c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x10))();
  uVar2 = (**(code **)(*piVar1 + 8))(auStack_24,param_1);
  pvStack_c = (void *)0x0;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x14))();
  (**(code **)(*piVar1 + 0xc))(param_1,uVar2);
  uStack_14 = 0xffffffff;
  FUN_004cf650();
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 004e3660 FUN_004e3660 ==== */

void FUN_004e3660(undefined4 param_1)

{
  int *piVar1;
  int *in_ECX;
  
  FUN_004e4020(param_1);
  piVar1 = (int *)(**(code **)(*in_ECX + 0x14))();
  (**(code **)(*piVar1 + 0x20))(param_1);
  piVar1 = (int *)(**(code **)(*in_ECX + 0x10))();
  (**(code **)(*piVar1 + 0x20))(param_1);
  return;
}


/* ==== 004e36a0 FUN_004e36a0 ==== */

void FUN_004e36a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_004e4030(param_1,param_2);
  uVar1 = FUN_004e2d10(param_1,param_2);
  *(undefined4 *)(in_ECX + 0xc) = uVar1;
  uVar1 = FUN_004e2d10(param_1,param_2);
  *(undefined4 *)(in_ECX + 8) = uVar1;
  return;
}


/* ==== 004e36e0 FUN_004e36e0 ==== */

void FUN_004e36e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571828;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  in_ECX[1] = 3;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00577af8;
  FUN_004e4030(param_1,param_2);
  uVar1 = FUN_004e2d10(param_1,param_2);
  in_ECX[3] = uVar1;
  uVar1 = FUN_004e2d10(param_1,param_2);
  in_ECX[2] = uVar1;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e3770 FUN_004e3770 ==== */

void FUN_004e3770(undefined4 param_1)

{
  int in_ECX;
  
  FUN_004e4020(param_1);
  FUN_004d7430(param_1,*(undefined4 *)(in_ECX + 8));
  return;
}


/* ==== 004e3790 FUN_004e3790 ==== */

void FUN_004e3790(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_004e4030(param_1,param_2);
  FUN_004d7450(param_1,in_ECX + 8);
  return;
}


/* ==== 004e39d0 FUN_004e39d0 ==== */

void FUN_004e39d0(void)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005718d5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_004d4610();
                    /* WARNING: Could not recover jumptable at 0x004e39f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e3c38)[iVar1])();
  return;
}


/* ==== 004e3c60 FUN_004e3c60 ==== */

undefined4 * FUN_004e3c60(void)

{
  undefined4 *operator_new_result_2;
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005718fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result_2 = operator_new(0x18);
  operator_new_result = (undefined4 *)0x0;
  if (operator_new_result_2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result_2 = &PTR_LAB_00577b5c;
    operator_new_result_2[1] = uVar1;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    uVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))();
    operator_new_result_2[2] = uVar1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))();
    operator_new_result_2[3] = uVar1;
    *operator_new_result_2 = &PTR_FUN_00577af8;
    local_4 = CONCAT31(local_4._1_3_,2);
    operator_new_result_2[4] = *(undefined4 *)(in_ECX + 0x10);
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x10))();
    operator_new_result_2[5] = uVar1;
    *operator_new_result_2 = &PTR_FUN_0057813c;
    operator_new_result = operator_new_result_2;
  }
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004e3d00 FUN_004e3d00 ==== */

void FUN_004e3d00(undefined4 param_1)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(in_ECX + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x14))(1);
    *(undefined4 *)(in_ECX + 0x14) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  return;
}


/* ==== 004e3d30 FUN_004e3d30 ==== */

void FUN_004e3d30(byte param_1)

{
  FUN_004e3d50();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e3d50 FUN_004e3d50 ==== */

void FUN_004e3d50(void)

{
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571920;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_0057813c;
  local_4 = 0;
  if ((undefined4 *)in_ECX[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[5])(1);
  }
  *in_ECX = &PTR_FUN_00577af8;
  local_4 = 1;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
  }
  *in_ECX = &PTR_LAB_00577b5c;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e3dd0 FUN_004e3dd0 ==== */

undefined4 * FUN_004e3dd0(void)

{
  undefined4 *operator_new_result_2;
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571943;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result_2 = operator_new(0x14);
  operator_new_result = (undefined4 *)0x0;
  if (operator_new_result_2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result_2 = &PTR_LAB_00577b5c;
    operator_new_result_2[1] = uVar1;
    local_4 = 1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))();
    operator_new_result_2[2] = uVar1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))();
    operator_new_result_2[3] = uVar1;
    *operator_new_result_2 = &PTR_FUN_00577af8;
    uVar1 = *(undefined4 *)(in_ECX + 0x10);
    *operator_new_result_2 = &PTR_FUN_00578100;
    operator_new_result_2[4] = uVar1;
    operator_new_result = operator_new_result_2;
  }
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004e3e50 FUN_004e3e50 ==== */

void FUN_004e3e50(byte param_1)

{
  FUN_004e3e70();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e3e70 FUN_004e3e70 ==== */

void FUN_004e3e70(void)

{
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571958;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00577af8;
  local_4 = 0;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
  }
  *in_ECX = &PTR_LAB_00577b5c;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e3ed0 FUN_004e3ed0 ==== */

int * FUN_004e3ed0(undefined1 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *in_ECX;
  int iVar5;
  undefined1 auStack_3c [12];
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00571980;
  pvStack_c = ExceptionList;
  local_1c[0] = param_1;
  ExceptionList = &pvStack_c;
  FUN_004028f0(0);
  local_2c = CONCAT31(local_2c._1_3_,param_1);
  local_4 = (int *)0x0;
  FUN_004028f0(0);
  local_4 = (int *)CONCAT31(local_4._1_3_,1);
  (**(code **)(*in_ECX + 0x30))(local_1c,&local_2c);
  puVar3 = (undefined4 *)FUN_0054eddc(&stack0xffffffbc,0x40);
  piVar2 = local_4;
  if (local_4 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*local_4 + 4) + (int)local_4;
  }
  (*(code *)*puVar3)(iVar5,puVar3[1]);
  puVar3 = (undefined4 *)FUN_0054ee09(auStack_3c,0x14);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar2 + 4) + (int)piVar2;
  }
  (*(code *)*puVar3)(iVar5,puVar3[1]);
  puVar4 = puStack_20;
  if (puStack_20 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_004d4cd0(piVar2,puVar4);
  puVar4 = puStack_30;
  if (puStack_30 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  FUN_004d4cd0(piVar2,puVar4);
  if (puStack_30 != (undefined1 *)0x0) {
    cVar1 = puStack_30[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(puStack_30 + -1);
    }
    else {
      puStack_30[-1] = cVar1 + -1;
    }
  }
  puStack_30 = (undefined1 *)0x0;
  local_2c = 0;
  uStack_28 = 0;
  if (puStack_20 != (undefined1 *)0x0) {
    cVar1 = puStack_20[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(puStack_20 + -1);
    }
    else {
      puStack_20[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_14;
  return piVar2;
}


/* ==== 004e4020 FUN_004e4020 ==== */

void FUN_004e4020(void)

{
  int in_ECX;
  
  FUN_004d43a0(*(undefined1 *)(in_ECX + 4));
  return;
}


/* ==== 004e4030 FUN_004e4030 ==== */

void FUN_004e4030(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_004d4510();
  *(undefined4 *)(in_ECX + 4) = uVar1;
  return;
}


/* ==== 004e4050 FUN_004e4050 ==== */

void FUN_004e4050(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004e4057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e4074)[*(int *)(param_1 + 4)])();
  return;
}


/* ==== 004e40e0 FUN_004e40e0 ==== */

void FUN_004e40e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_004e4660(param_1,param_2);
  uVar1 = FUN_004e2d10(param_1,param_2);
  *(undefined4 *)(in_ECX + 0x18) = uVar1;
  FUN_004dbf50(param_1,in_ECX + 0x14);
  return;
}


/* ==== 004e4120 FUN_004e4120 ==== */

void FUN_004e4120(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  bool bVar3;
  undefined **ppuStack_64;
  undefined **appuStack_4c [4];
  undefined1 local_3c [8];
  undefined **appuStack_34 [6];
  void *pvStack_1c;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005719a0;
  pvStack_c = ExceptionList;
  ppuStack_64 = param_1;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)in_ECX[4] + 8))(local_3c);
  pvStack_c = (void *)0x0;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x18))();
  (**(code **)(*piVar1 + 8))(&stack0xffffffa4,param_1);
  iStack_14._0_1_ = 1;
  iVar2 = FUN_004e50e0(appuStack_34,in_ECX[5],&ppuStack_64,appuStack_4c);
  bVar3 = *(int *)(iVar2 + 0x10) == 0;
  appuStack_34[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  if (in_ECX[3] == 0) {
    if (bVar3) {
      param_1[4] = (undefined *)in_ECX[2];
    }
  }
  else if (!bVar3) {
    param_1[4] = (undefined *)in_ECX[2];
  }
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  ppuStack_64 = &PTR_FUN_005778c0;
  FUN_004cf650();
  iStack_14 = 0xffffffff;
  appuStack_4c[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 004e4580 FUN_004e4580 ==== */

undefined1 * FUN_004e4580(undefined1 *param_1,int param_2)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = param_1._0_1_;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    i = 0xffffffff;
    pcVar2 = s_Z_005b751c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') {
      return param_1;
    }
    pcVar2 = s_Z_005b751c;
  }
  else {
    *param_1 = param_1._0_1_;
    i = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar2 = s_NZ_005b7520;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 == '\0') {
      return param_1;
    }
    pcVar2 = s_NZ_005b7520;
  }
  pcVar3 = *(char **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = i;
  *(undefined1 *)(*(int *)(param_1 + 4) + i) = 0;
  return param_1;
}


/* ==== 004e4630 FUN_004e4630 ==== */

void FUN_004e4630(undefined4 param_1)

{
  int in_ECX;
  
  FUN_004e3770(param_1);
  FUN_004d43a0(*(undefined4 *)(in_ECX + 0xc));
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x20))(param_1);
  return;
}


/* ==== 004e4660 FUN_004e4660 ==== */

void FUN_004e4660(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_004e3790(param_1,param_2);
  uVar1 = FUN_004d4510();
  *(undefined4 *)(in_ECX + 0xc) = uVar1;
  uVar1 = FUN_004e2d10(param_1,param_2);
  *(undefined4 *)(in_ECX + 0x10) = uVar1;
  return;
}


/* ==== 004e48f0 FUN_004e48f0 ==== */

void FUN_004e48f0(undefined4 param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004e4901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e4ca8)[param_2])();
  return;
}


/* ==== 004e4d20 FUN_004e4d20 ==== */

void FUN_004e4d20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_004e36a0(param_1,param_2);
  uVar1 = FUN_004d4510();
  *(undefined4 *)(in_ECX + 0x10) = uVar1;
  uVar1 = FUN_004e2d10(param_1,param_2);
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  return;
}


/* ==== 004e4d60 FUN_004e4d60 ==== */

void FUN_004e4d60(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint i;
  int unaff_EBX;
  char *pcVar6;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [20];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [20];
  int iStack_24;
  undefined1 local_1c [4];
  void *pvStack_18;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00571ab9;
  pvStack_c = ExceptionList;
  i = 0xffffffff;
  pcVar6 = s_BINOP_005b7568;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_00402940(s_BINOP_005b7568,~i - 1);
  uVar2 = (**(code **)(**(int **)(in_ECX + 8) + 4))(local_1c);
  puStack_8 = (undefined1 *)0x0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar6 = s__005b36c4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s__005b36c4,~i - 1);
  puStack_8._0_1_ = 1;
  uVar3 = FUN_004e48f0(&uStack_a0,*(undefined4 *)(in_ECX + 0x10));
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  uVar4 = (**(code **)(**(int **)(in_ECX + 0x14) + 4))(auStack_40);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  uVar5 = (**(code **)(**(int **)(in_ECX + 0xc) + 4))(auStack_64);
  uStack_10 = 4;
  uVar5 = FUN_004796b0(auStack_88,uVar5,s___005b74a0);
  uStack_10 = 5;
  uVar4 = FUN_0047c9a0(auStack_58,uVar5,uVar4);
  uStack_10 = 6;
  uVar3 = FUN_0047c9a0(auStack_98,uVar4,uVar3);
  uStack_10 = 7;
  uVar3 = FUN_0047c9a0(auStack_78,uVar3,&stack0xffffff48);
  uStack_10 = 8;
  uVar2 = FUN_0047c9a0(auStack_38,uVar3,uVar2);
  uStack_10 = 9;
  FUN_004093c0(uVar2,0,0xffffffff);
  uStack_10 = 8;
  FUN_004028f0(1);
  uStack_10 = 7;
  FUN_004028f0(1);
  uStack_10 = 6;
  FUN_004028f0(1);
  uStack_10 = 5;
  FUN_004028f0(1);
  uStack_10 = 4;
  FUN_004028f0(1);
  uStack_10 = 3;
  FUN_004028f0(1);
  uStack_10 = 2;
  FUN_004028f0(1);
  if (iStack_a4 != 0) {
    cVar1 = *(char *)(iStack_a4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_a4 + -1));
    }
    else {
      *(char *)(iStack_a4 + -1) = cVar1 + -1;
    }
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  if (unaff_EBX != 0) {
    cVar1 = *(char *)(unaff_EBX + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(unaff_EBX + -1));
    }
    else {
      *(char *)(unaff_EBX + -1) = cVar1 + -1;
    }
  }
  if (iStack_24 != 0) {
    cVar1 = *(char *)(iStack_24 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_24 + -1) = cVar1 + -1;
      ExceptionList = pvStack_18;
      return;
    }
    FUN_0054b339((char *)(iStack_24 + -1));
  }
  ExceptionList = pvStack_18;
  return;
}


/* ==== 004e5020 FUN_004e5020 ==== */

void FUN_004e5020(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined ***pppuStack_64;
  undefined4 uStack_60;
  undefined **local_54 [2];
  undefined1 auStack_4c [16];
  undefined **ppuStack_3c;
  undefined1 auStack_2c [8];
  void *pvStack_24;
  int iStack_1c;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00571ae8;
  pvStack_c = ExceptionList;
  pppuStack_64 = local_54;
  uStack_60 = param_1;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(in_ECX + 8) + 8))();
  pvStack_c = (void *)0x0;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x14) + 8))(auStack_2c,param_1);
  uStack_14 = 1;
  uVar1 = FUN_004e50e0(auStack_4c,*(undefined4 *)(in_ECX + 0x10),uVar1,&pppuStack_64);
  uStack_14 = 2;
  (**(code **)(**(int **)(in_ECX + 0xc) + 0xc))(param_1,uVar1);
  iStack_1c._0_1_ = 1;
  local_54[0] = &PTR_FUN_005778c0;
  FUN_004cf650();
  iStack_1c = (uint)iStack_1c._1_3_ << 8;
  ppuStack_3c = &PTR_FUN_005778c0;
  FUN_004cf650();
  iStack_1c = 0xffffffff;
  FUN_004cf650(param_1,uVar1,&PTR_FUN_005778c0);
  ExceptionList = pvStack_24;
  return;
}


/* ==== 004e50e0 FUN_004e50e0 ==== */

void FUN_004e50e0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58 [8];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00571b3f;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_004028f0(0);
  local_c = 1;
  FUN_004028f0(0);
  local_c._0_1_ = 2;
  if (*(int *)(param_3 + 8) == 1) {
    local_58[0] = *(undefined8 *)(param_3 + 0x10);
    local_68 = *(undefined4 *)(param_4 + 0x10);
    local_64 = *(undefined4 *)(param_4 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x004e5471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_004e55e8)[param_2 + -1])();
    return;
  }
  if (*(int *)(param_3 + 8) != 2) {
    uVar1 = FUN_00479930(local_58);
    local_c._0_1_ = 3;
    FUN_004093c0(uVar1,0,0xffffffff);
    local_c._0_1_ = 2;
    FUN_004028f0(1);
    uVar1 = FUN_00479930(&local_68);
    local_c._0_1_ = 4;
    FUN_004093c0(uVar1,0,0xffffffff);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_004028f0(1);
                    /* WARNING: Could not recover jumptable at 0x004e51bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_004e5580 + (param_2 + -1) * 4))();
    return;
  }
  local_68 = *(undefined4 *)(param_3 + 0x10);
  local_58[0] = CONCAT44(local_58[0]._4_4_,*(undefined4 *)(param_4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x004e52e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e55a8)[param_2 + -1])();
  return;
}


/* ==== 004e5650 FUN_004e5650 ==== */

void FUN_004e5650(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  char *pcVar3;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571b68;
  local_c = ExceptionList;
  if ((*(char *)(in_ECX + 0xc) == '\0') &&
     ((param_1 < *(int *)(in_ECX + 4) || (*(int *)(in_ECX + 8) < param_1)))) {
    local_2c[0] = (undefined1)param_1;
    i = 0xffffffff;
    pcVar3 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &local_c;
    FUN_00402940(&DAT_00712694,~i - 1);
    local_3c[0] = (undefined1)param_1;
    i = 0xffffffff;
    local_4 = 0;
    pcVar3 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    FUN_00402940(&DAT_00712694,~i - 1);
    local_4._0_1_ = 1;
    uVar2 = FUN_004d7610(local_1c,s_array__index__d_out_of_bounds__d_005b7570,param_1,
                         *(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004d6900(0xbbf,uVar2,local_3c,local_2c);
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
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_28 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339((char *)(local_28 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004e57e0 FUN_004e57e0 ==== */

void FUN_004e57e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 4;
  }
  FUN_004d7430(param_1,iVar1);
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = *(int *)(in_ECX + 0xc);
  if (iVar1 != iVar2) {
    do {
      FUN_004d73d0(param_1,CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(iVar1 + 0xc)));
      if (*(char *)(iVar1 + 0xc) == '\0') {
        FUN_004d7430(param_1,*(undefined4 *)(iVar1 + 4));
        FUN_004d7430(param_1,*(undefined4 *)(iVar1 + 8));
      }
      iVar2 = *(int *)(in_ECX + 0xc);
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != iVar2);
  }
  return;
}


/* ==== 004e5850 FUN_004e5850 ==== */

void FUN_004e5850(undefined4 param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint i;
  uint local_34;
  void *local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [4];
  undefined **local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  char cStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00571b90;
  pvStack_c = ExceptionList;
  local_28 = 0;
  local_24 = 0;
  local_20[0] = '\x01';
  local_2c = &PTR_LAB_00578178;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004d7450(param_1,&i);
  local_34 = i;
  if (*(int *)(in_ECX + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 8) >> 4;
  }
  if (uVar4 < i) {
    uVar4 = i;
    if ((int)i < 0) {
      uVar4 = 0;
    }
    pvVar2 = operator_new(uVar4 << 4);
    iVar3 = *(int *)(in_ECX + 0xc);
    local_30 = pvVar2;
    for (iVar5 = *(int *)(in_ECX + 8); iVar5 != iVar3; iVar5 = iVar5 + 0x10) {
      FUN_004e5fc0(pvVar2,iVar5);
      pvVar2 = (void *)((int)pvVar2 + 0x10);
    }
    puVar1 = *(undefined4 **)(in_ECX + 0xc);
    for (puVar6 = *(undefined4 **)(in_ECX + 8); puVar6 != puVar1; puVar6 = puVar6 + 4) {
      (**(code **)*puVar6)(0);
    }
    FUN_0054b339(*(undefined4 *)(in_ECX + 8));
    *(void **)(in_ECX + 0x10) = (void *)(local_34 * 0x10 + (int)local_30);
    if (*(int *)(in_ECX + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 4;
    }
    *(void **)(in_ECX + 8) = local_30;
    *(void **)(in_ECX + 0xc) = (void *)(iVar3 * 0x10 + (int)local_30);
  }
  while (i != 0) {
    i = i - 1;
    local_1c = &PTR_LAB_00578178;
    FUN_004d7490(param_1,local_20);
    if (local_20[0] == '\0') {
      FUN_004d7450(param_1,&local_28);
      FUN_004d7450(param_1,&local_24);
    }
    uStack_18 = local_28;
    uStack_14 = local_24;
    cStack_10 = local_20[0];
    local_4._0_1_ = 1;
    FUN_004e5cf0(*(undefined4 *)(in_ECX + 0xc),1,&local_1c);
    local_4 = (uint)local_4._1_3_ << 8;
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e5a00 FUN_004e5a00 ==== */

void FUN_004e5a00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00578178;
  return;
}


/* ==== 004e5a30 FUN_004e5a30 ==== */

void FUN_004e5a30(int param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != *(int *)(in_ECX + 0xc)) {
    do {
      FUN_004e5650(*puVar2);
      iVar1 = iVar1 + 0x10;
      puVar2 = puVar2 + 1;
    } while (iVar1 != *(int *)(in_ECX + 0xc));
  }
  return;
}


/* ==== 004e5a70 FUN_004e5a70 ==== */

int FUN_004e5a70(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar1 = 1;
  for (iVar3 = *(int *)(in_ECX + 8); iVar3 != *(int *)(in_ECX + 0xc); iVar3 = iVar3 + 0x10) {
    if (*(char *)(iVar3 + 0xc) == '\0') {
      iVar2 = (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) + 1;
    }
    else {
      iVar2 = 0;
    }
    iVar1 = iVar2 * iVar1;
  }
  return iVar1;
}


/* ==== 004e5ab0 FUN_004e5ab0 ==== */

int FUN_004e5ab0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  iVar1 = 0;
  for (iVar3 = *(int *)(in_ECX + 8); iVar3 != *(int *)(in_ECX + 0xc); iVar3 = iVar3 + 0x10) {
    if (*(char *)(iVar3 + 0xc) == '\0') {
      iVar2 = (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) + 1;
    }
    else {
      iVar2 = 0;
    }
    iVar1 = (iVar2 * iVar1 - *(int *)(iVar3 + 4)) + *piVar4;
    piVar4 = piVar4 + 1;
  }
  return iVar1;
}


/* ==== 004e5b00 FUN_004e5b00 ==== */

void FUN_004e5b00(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = &PTR_FUN_00577df4;
  if (in_ECX == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = in_ECX + 1;
  }
  puVar1 = (undefined4 *)puVar2[2];
  for (puVar3 = (undefined4 *)puVar2[1]; puVar3 != puVar1; puVar3 = puVar3 + 4) {
    (**(code **)*puVar3)(0);
  }
  FUN_0054b339(puVar2[1]);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}


/* ==== 004e5b60 FUN_004e5b60 ==== */

void FUN_004e5b60(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00571bb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 1) = (undefined1)param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00577df4;
  uStack_3 = 0;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    do {
      local_1c = &PTR_LAB_00578178;
      local_18 = *(undefined4 *)(iVar1 + 4);
      local_14 = *(undefined4 *)(iVar1 + 8);
      local_10 = *(undefined1 *)(iVar1 + 0xc);
      local_4 = 1;
      FUN_004e5cf0(in_ECX[3],1,&local_1c);
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != *(int *)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004e5c20 FUN_004e5c20 ==== */

undefined4 FUN_004e5c20(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == *(int *)(param_2 + 0xc)) {
    return param_1;
  }
  do {
    FUN_004d4cd0(param_1,s___005b75a4);
    if (*(char *)(iVar2 + 0xc) == '\0') {
      uVar4 = *(undefined4 *)(iVar2 + 8);
      pcVar3 = s_TO_005b759c;
      uVar1 = FUN_004d4130(*(undefined4 *)(iVar2 + 4));
      FUN_004d4cd0(uVar1,pcVar3,uVar4);
      FUN_004d4130(uVar4);
    }
    FUN_004d4cd0(param_1,s___005b7598);
    iVar2 = iVar2 + 0x10;
  } while (iVar2 != *(int *)(param_2 + 0xc));
  return param_1;
}


/* ==== 004e5ca0 FUN_004e5ca0 ==== */

void FUN_004e5ca0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  for (puVar2 = *(undefined4 **)(in_ECX + 4); puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(0);
  }
  FUN_0054b339(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 004e5cf0 FUN_004e5cf0 ==== */

void FUN_004e5cf0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int i;
  void *operator_new_result;
  undefined4 *puVar4;
  int in_ECX;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar7 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar7 >> 4)) {
    if ((uint)((int)puVar7 - (int)param_1 >> 4) < param_2) {
      puVar4 = param_1 + param_2 * 4;
      for (puVar6 = param_1; puVar6 != puVar7; puVar6 = puVar6 + 4) {
        FUN_004e5fc0(puVar4,puVar6);
        puVar4 = puVar4 + 4;
      }
      iVar8 = *(int *)(in_ECX + 8);
      for (i = param_2 - (iVar8 - (int)param_1 >> 4); i != 0; i = i + -1) {
        FUN_004e5fc0(iVar8,param_3);
        iVar8 = iVar8 + 0x10;
      }
      puVar7 = *(undefined4 **)(in_ECX + 8);
      if (param_1 != puVar7) {
        puVar4 = param_1 + 1;
        do {
          if (puVar4 + -1 != param_3) {
            *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(param_3 + 3);
            *puVar4 = param_3[1];
            puVar4[1] = param_3[2];
          }
          puVar6 = puVar4 + 3;
          puVar4 = puVar4 + 4;
        } while (puVar6 != puVar7);
        *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x10;
        return;
      }
    }
    else {
      if (param_2 == 0) {
        return;
      }
      puVar4 = puVar7;
      for (puVar6 = puVar7 + param_2 * -4; puVar6 != puVar7; puVar6 = puVar6 + 4) {
        FUN_004e5fc0(puVar4,puVar6);
        puVar4 = puVar4 + 4;
      }
      puVar7 = *(undefined4 **)(in_ECX + 8);
      puVar4 = *(undefined4 **)(in_ECX + 8) + param_2 * -4;
      while (puVar1 = puVar4, puVar6 = puVar7, param_1 != puVar1) {
        puVar4 = puVar1 + -4;
        puVar7 = puVar6 + -4;
        if (puVar7 != puVar4) {
          *(undefined1 *)(puVar6 + -1) = *(undefined1 *)(puVar1 + -1);
          puVar6[-3] = puVar1[-3];
          puVar6[-2] = puVar1[-2];
        }
      }
      if (param_1 != param_1 + param_2 * 4) {
        puVar7 = param_1 + 1;
        do {
          if (puVar7 + -1 != param_3) {
            *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(param_3 + 3);
            *puVar7 = param_3[1];
            puVar7[1] = param_3[2];
          }
          puVar4 = puVar7 + 3;
          puVar7 = puVar7 + 4;
        } while (puVar4 != param_1 + param_2 * 4);
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x10;
    return;
  }
  iVar8 = *(int *)(in_ECX + 4);
  if ((iVar8 == 0) || (uVar3 = (int)puVar7 - iVar8 >> 4, uVar3 <= param_2)) {
    uVar3 = param_2;
  }
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)puVar7 - iVar8 >> 4;
  }
  iVar8 = uVar3 + iVar8;
  i = iVar8;
  if (iVar8 < 0) {
    i = 0;
  }
  operator_new_result = operator_new(i << 4);
  pvVar5 = operator_new_result;
  for (puVar7 = *(undefined4 **)(in_ECX + 4); uVar3 = param_2, pvVar2 = pvVar5, puVar7 != param_1;
      puVar7 = puVar7 + 4) {
    FUN_004e5fc0(pvVar5,puVar7);
    pvVar5 = (void *)((int)pvVar5 + 0x10);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_004e5fc0(pvVar2,param_3);
    pvVar2 = (void *)((int)pvVar2 + 0x10);
  }
  pvVar5 = (void *)(param_2 * 0x10 + (int)pvVar5);
  puVar7 = *(undefined4 **)(in_ECX + 8);
  for (; param_1 != puVar7; param_1 = param_1 + 4) {
    FUN_004e5fc0(pvVar5,param_1);
    pvVar5 = (void *)((int)pvVar5 + 0x10);
  }
  puVar7 = *(undefined4 **)(in_ECX + 8);
  for (puVar4 = *(undefined4 **)(in_ECX + 4); puVar4 != puVar7; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(0);
  }
  FUN_0054b339(*(undefined4 *)(in_ECX + 4));
  i = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)(iVar8 * 0x10 + (int)operator_new_result);
  if (i != 0) {
    *(void **)(in_ECX + 4) = operator_new_result;
    *(void **)(in_ECX + 8) =
         (void *)(((*(int *)(in_ECX + 8) - i >> 4) + param_2) * 0x10 + (int)operator_new_result);
    return;
  }
  *(void **)(in_ECX + 4) = operator_new_result;
  *(void **)(in_ECX + 8) = (void *)(param_2 * 0x10 + (int)operator_new_result);
  return;
}


/* ==== 004e5fc0 FUN_004e5fc0 ==== */

void FUN_004e5fc0(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
    *param_1 = &PTR_LAB_00578178;
  }
  return;
}


/* ==== 004e60a0 FUN_004e60a0 ==== */

void FUN_004e60a0(void)

{
  char cVar1;
  int iVar2;
  void **ppvVar3;
  int in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571bff;
  iVar2 = *(int *)(in_ECX + 0x6c);
  iVar4 = *(int *)(in_ECX + 0x68);
  local_4 = 5;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar3, iVar4 != iVar2; iVar4 = iVar4 + 0x78) {
    FUN_004e7600(0);
    ppvVar3 = ExceptionList;
  }
  FUN_0054b339(*(undefined4 *)(in_ECX + 0x68));
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(1);
  iVar2 = *(int *)(in_ECX + 0x48);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  iVar2 = *(int *)(in_ECX + 0x38);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  iVar2 = *(int *)(in_ECX + 0x28);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
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
  ExceptionList = local_c;
  return;
}


/* ==== 004e6200 FUN_004e6200 ==== */

void FUN_004e6200(void)

{
  undefined1 *in_ECX;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571c44;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = local_11;
  FUN_004028f0(0);
  in_ECX[0x10] = local_11;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  in_ECX[0x24] = local_11;
  FUN_004028f0(0);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  in_ECX[0x34] = local_11;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  in_ECX[0x44] = local_11;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  in_ECX[0x54] = local_11;
  FUN_004028f0(0);
  in_ECX[100] = local_11;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004e62b0 FUN_004e62b0 ==== */

void FUN_004e62b0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint i;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  char *pcVar11;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84 [4];
  int iStack_80;
  undefined4 uStack_74;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571cc1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00424980(&local_8b);
  local_4 = 0;
  FUN_00424980(&local_8a);
  local_4._0_1_ = 1;
  FUN_00424980(&local_89);
  local_4._0_1_ = 2;
  FUN_00424980(&local_88);
  local_4._0_1_ = 3;
  FUN_00424980(&local_87);
  local_4._0_1_ = 4;
  FUN_00424980(&local_86);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00424980(&local_85);
  local_4 = 6;
  if (((2000 < param_1) && (param_1 < 0x7d6)) || ((999 < param_1 && (param_1 < 0x417)))) {
    *(int *)(in_ECX + 0x74) = *(int *)(in_ECX + 0x74) + 1;
  }
  if (*(char *)(in_ECX + 0x78) == '\0') goto LAB_004e6609;
  iVar3 = FUN_00483e70(&DAT_00712694);
  if (iVar3 != 0) {
    puVar6 = *(undefined1 **)(in_ECX + 0x14);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d4cd0(&DAT_0074d768,puVar6);
    FUN_004d43a0(10);
    FUN_004d77a0();
  }
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 8),&DAT_00712694,~i - 1);
  if (iVar3 != 0) {
    puVar6 = *(undefined1 **)(in_ECX + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d4cd0(&DAT_0074d768,puVar6);
    uVar4 = *(undefined4 *)(in_ECX + 0x20);
    FUN_004d4cd0(&DAT_0074d768,s___005b725c,uVar4,s____005b7604);
    uVar4 = FUN_004d4130(uVar4);
    FUN_004d4cd0(uVar4);
  }
  if ((param_1 < 1000) || (0x416 < param_1)) {
    if ((param_1 < 0x7d1) || (0x7d5 < param_1)) {
      pcVar11 = s_Warning_W_005b75e0;
    }
    else {
      pcVar11 = s_Fatal_Error_F_005b75ec;
    }
  }
  else {
    pcVar11 = s_Error_C_005b75fc;
  }
  FUN_004d4cd0(&DAT_0074d768,pcVar11);
  pcVar11 = s___005b709c;
  uVar4 = FUN_004d4130(param_1);
  FUN_004d4cd0(uVar4,pcVar11);
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 0x5c),&DAT_00712694,~i - 1);
  if (iVar3 == 0) {
    i = 0xffffffff;
    pcVar11 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 0x2c),&DAT_00712694,~i - 1);
    if (iVar3 != 0) {
      puVar6 = *(undefined1 **)(in_ECX + 0x28);
      goto joined_r0x004e650b;
    }
  }
  else {
    puVar6 = *(undefined1 **)(in_ECX + 0x58);
joined_r0x004e650b:
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d4cd0(&DAT_0074d768,puVar6);
    FUN_004d4cd0(&DAT_0074d768,s___005b709c);
  }
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 0x3c),&DAT_00712694,~i - 1);
  if (iVar3 != 0) {
    puVar6 = *(undefined1 **)(in_ECX + 0x38);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d4cd0(&DAT_0074d768,puVar6);
    FUN_004d4cd0(&DAT_0074d768,s___005b709c);
  }
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 0x4c),&DAT_00712694,~i - 1);
  if (iVar3 != 0) {
    puVar6 = *(undefined1 **)(in_ECX + 0x48);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d4cd0(&DAT_0074d768,puVar6);
    FUN_004d4cd0(&DAT_0074d768,s___005b709c);
  }
  puVar6 = *(undefined1 **)(param_2 + 4);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_0057629c;
  }
  FUN_004d4cd0(&DAT_0074d768,puVar6);
  FUN_004d43a0(10);
  FUN_004d77a0();
LAB_004e6609:
  local_20 = param_1;
  FUN_004093c0(param_2,0,0xffffffff);
  FUN_004093c0(in_ECX + 0x24,0,0xffffffff);
  FUN_004093c0(in_ECX,0,0xffffffff);
  FUN_004093c0(in_ECX + 0x34,0,0xffffffff);
  FUN_004093c0(in_ECX + 0x10,0,0xffffffff);
  uStack_74 = *(undefined4 *)(in_ECX + 0x20);
  FUN_004093c0(in_ECX + 0x44,0,0xffffffff);
  FUN_004093c0(in_ECX + 0x54,0,0xffffffff);
  FUN_004e7220(*(undefined4 *)(in_ECX + 0x6c),1,local_84);
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 0x18),&DAT_00712694,~i - 1);
  if (iVar3 != 0) {
    puVar6 = *(undefined1 **)(in_ECX + 0x14);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d6730(s__s_005aeff8,puVar6);
  }
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 8),&DAT_00712694,~i - 1);
  if (iVar3 != 0) {
    puVar6 = *(undefined1 **)(in_ECX + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d6730(s__s__d___005b75d8,puVar6,*(undefined4 *)(in_ECX + 0x20));
  }
  if ((param_1 < 1000) || (0x416 < param_1)) {
    if ((param_1 < 0x7d1) || (0x7d5 < param_1)) {
      pcVar11 = s_Warning_W_005b75e0;
    }
    else {
      pcVar11 = s_Fatal_Error_F_005b75ec;
    }
  }
  else {
    pcVar11 = s_Error_C_005b75fc;
  }
  FUN_004d6730(pcVar11);
  FUN_004d6730(s__d__005b75d4,param_1);
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 0x5c),&DAT_00712694,~i - 1);
  if (iVar3 != 0) {
    puVar6 = *(undefined1 **)(in_ECX + 0x58);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d6730(s__s__005b75d0,puVar6);
  }
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040fc80(0,*(undefined4 *)(in_ECX + 0x2c),&DAT_00712694,~i - 1);
  if (iVar3 != 0) {
    puVar6 = *(undefined1 **)(in_ECX + 0x28);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d6730(s__s__005b75d0,puVar6);
  }
  i = 0xffffffff;
  pcVar11 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(in_ECX + 0x4c);
  uVar5 = ~i - 1;
  i = uVar2;
  if (uVar5 <= uVar2) {
    i = uVar5;
  }
  bVar9 = false;
  iVar3 = 0;
  bVar10 = true;
  pbVar7 = *(byte **)(in_ECX + 0x48);
  pbVar8 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    bVar9 = *pbVar7 < *pbVar8;
    bVar10 = *pbVar7 == *pbVar8;
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar10);
  if (!bVar10) {
    iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
  }
  if (((iVar3 != 0) || (uVar2 < uVar5)) || (uVar2 != uVar5)) {
    puVar6 = *(undefined1 **)(in_ECX + 0x48);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004d6730(s__s__005b75cc,puVar6);
  }
  puVar6 = *(undefined1 **)(param_2 + 4);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_0057629c;
  }
  FUN_004d6730(s__s_005aeff8,puVar6);
  if ((100 < *(int *)(in_ECX + 0x74)) && ((param_1 < 0x7d1 || (0x7d5 < param_1)))) {
    FUN_004e6c70();
  }
  local_4 = 0xc;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004028f0(1);
  if (iStack_3c != 0) {
    cVar1 = *(char *)(iStack_3c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_3c + -1));
    }
    else {
      *(char *)(iStack_3c + -1) = cVar1 + -1;
    }
  }
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (iStack_4c != 0) {
    cVar1 = *(char *)(iStack_4c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_4c + -1));
    }
    else {
      *(char *)(iStack_4c + -1) = cVar1 + -1;
    }
  }
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  if (iStack_5c != 0) {
    cVar1 = *(char *)(iStack_5c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_5c + -1));
    }
    else {
      *(char *)(iStack_5c + -1) = cVar1 + -1;
    }
  }
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  if (iStack_6c != 0) {
    cVar1 = *(char *)(iStack_6c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_6c + -1));
    }
    else {
      *(char *)(iStack_6c + -1) = cVar1 + -1;
    }
  }
  iStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  if (iStack_80 != 0) {
    cVar1 = *(char *)(iStack_80 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_80 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(iStack_80 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e6a20 FUN_004e6a20 ==== */

void FUN_004e6a20(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571d0f;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_004028f0(1);
  iVar2 = *(int *)(in_ECX + 0x58);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  iVar2 = *(int *)(in_ECX + 0x48);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  iVar2 = *(int *)(in_ECX + 0x38);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  iVar2 = *(int *)(in_ECX + 0x28);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
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
  ExceptionList = local_c;
  return;
}


/* ==== 004e6b80 FUN_004e6b80 ==== */

void FUN_004e6b80(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571d28;
  pvStack_c = ExceptionList;
  i = 0xffffffff;
  local_4 = 0;
  pcVar4 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  ExceptionList = &pvStack_c;
  if (0xfffffffd < i) {
    ExceptionList = &pvStack_c;
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 0x14);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      goto LAB_004e6c3d;
    }
    if ((0x1f < *(uint *)(in_ECX + 0x1c)) || (*(uint *)(in_ECX + 0x1c) < i)) {
      FUN_004028f0(1);
      goto LAB_004e6c0f;
    }
  }
  else {
    if (i == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(0);
      goto LAB_004e6c3d;
    }
LAB_004e6c0f:
    FUN_00402b20(i);
  }
  puVar3 = (undefined4 *)&DAT_00712694;
  puVar5 = *(undefined4 **)(in_ECX + 0x14);
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
  *(uint *)(in_ECX + 0x18) = i;
  *(undefined1 *)(*(int *)(in_ECX + 0x14) + i) = 0;
LAB_004e6c3d:
  FUN_004e62b0(param_1,&stack0x00000008);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_1,&DAT_00586d80);
}


/* ==== 004e6c70 FUN_004e6c70 ==== */

void FUN_004e6c70(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_14 [16];
  undefined1 *local_4;
  
  local_4 = auStack_14;
  FUN_004d7510(auStack_14,&stack0x0000000c);
  FUN_004e6b80(param_2);
  return;
}


/* ==== 004e6ca0 FUN_004e6ca0 ==== */

void FUN_004e6ca0(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571d50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004093c0(param_2,0,0xffffffff);
  uVar2 = FUN_004d7510(local_1c,&stack0x00000010);
  local_4 = 0;
  FUN_004e62b0(param_3,uVar2);
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
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  i = 0xffffffff;
  pcVar4 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_2c[0] = param_1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar3 = (undefined4 *)&DAT_00712694;
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
    FUN_004029e0(i);
  }
  local_4 = 1;
  FUN_004093c0(local_2c,0,0xffffffff);
  if (local_28 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_28 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)((int)local_28 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004e6df0 FUN_004e6df0 ==== */

void FUN_004e6df0(undefined1 *param_1)

{
  undefined1 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00571d9f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FUN_004028f0(0);
  FUN_004093c0(param_1,0,0xffffffff);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  local_4 = 0;
  in_ECX[0x14] = param_1[0x14];
  FUN_004028f0(0);
  FUN_004093c0(param_1 + 0x14,0,0xffffffff);
  local_4._0_1_ = 1;
  in_ECX[0x24] = param_1[0x24];
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  FUN_004093c0(param_1 + 0x24,0,0xffffffff);
  local_4._0_1_ = 2;
  in_ECX[0x34] = param_1[0x34];
  FUN_004028f0(0);
  FUN_004093c0(param_1 + 0x34,0,0xffffffff);
  local_4._0_1_ = 3;
  in_ECX[0x44] = param_1[0x44];
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  FUN_004093c0(param_1 + 0x44,0,0xffffffff);
  local_4._0_1_ = 4;
  in_ECX[0x54] = param_1[0x54];
  FUN_004028f0(0);
  FUN_004093c0(param_1 + 0x54,0,0xffffffff);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  local_4 = CONCAT31(local_4._1_3_,5);
  in_ECX[0x68] = param_1[0x68];
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  FUN_004093c0(param_1 + 0x68,0,0xffffffff);
  ExceptionList = local_c;
  return;
}


/* ==== 004e6f40 FUN_004e6f40 ==== */

/* WARNING: Removing unreachable block (ram,0x004e7079) */
/* WARNING: Removing unreachable block (ram,0x004e6fc0) */
/* WARNING: Removing unreachable block (ram,0x004e7132) */

int FUN_004e6f40(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint i;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (in_ECX == param_1) {
    return in_ECX;
  }
  FUN_004093c0(param_1 + 0x68,0,0xffffffff);
  FUN_004093c0(param_1 + 0x24,0,0xffffffff);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  FUN_004093c0(param_1,0,0xffffffff);
  FUN_004093c0(param_1 + 0x34,0,0xffffffff);
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (in_ECX + 0x54 == param_1 + 0x54) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x58);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar3 = *(undefined1 **)(param_1 + 0x58);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)(in_ECX + 0x58) = puVar3;
        *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
        *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004e7060;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_1 + 0x58);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = *(undefined4 **)(in_ECX + 0x58);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004029e0(uVar1);
    }
  }
LAB_004e7060:
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (in_ECX + 0x44 == param_1 + 0x44) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x48);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar3 = *(undefined1 **)(param_1 + 0x48);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)(in_ECX + 0x48) = puVar3;
        *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004e7119;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_1 + 0x48);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = *(undefined4 **)(in_ECX + 0x48);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004029e0(uVar1);
    }
  }
LAB_004e7119:
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (in_ECX + 0x14 == param_1 + 0x14) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
    return in_ECX;
  }
  if (uVar1 != 0) {
    puVar3 = *(undefined1 **)(param_1 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    if ((byte)puVar3[-1] < 0xfe) {
      FUN_004028f0(1);
      puVar3 = *(undefined1 **)(param_1 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      *(undefined1 **)(in_ECX + 0x18) = puVar3;
      *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
      puVar3[-1] = puVar3[-1] + '\x01';
      *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
      return in_ECX;
    }
  }
  cVar2 = FUN_00402a00(uVar1,1);
  if (cVar2 != '\0') {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_0057629c;
    }
    puVar5 = *(undefined4 **)(in_ECX + 0x18);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(uint *)(in_ECX + 0x1c) = uVar1;
    *(undefined1 *)(uVar1 + *(int *)(in_ECX + 0x18)) = 0;
  }
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return in_ECX;
}


/* ==== 004e7220 FUN_004e7220 ==== */

void FUN_004e7220(int param_1,uint param_2,int param_3)

{
  void *pvVar1;
  int i;
  void *operator_new_result;
  int in_ECX;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  iVar3 = *(int *)(in_ECX + 8);
  if ((uint)((*(int *)(in_ECX + 0xc) - iVar3) / 0x78) < param_2) {
    i = *(int *)(in_ECX + 4);
    if ((i == 0) || (uVar2 = (iVar3 - i) / 0x78, uVar2 <= param_2)) {
      uVar2 = param_2;
    }
    if (i == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (iVar3 - i) / 0x78;
    }
    iVar3 = iVar3 + uVar2;
    i = iVar3;
    if (iVar3 < 0) {
      i = 0;
    }
    operator_new_result = operator_new(i * 0x78);
    pvVar4 = operator_new_result;
    for (i = *(int *)(in_ECX + 4); uVar2 = param_2, pvVar1 = pvVar4, i != param_1; i = i + 0x78) {
      FUN_004e75b0(pvVar4,i);
      pvVar4 = (void *)((int)pvVar4 + 0x78);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_004e75b0(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0x78);
    }
    pvVar4 = (void *)((int)pvVar4 + param_2 * 0x78);
    i = *(int *)(in_ECX + 8);
    for (; param_1 != i; param_1 = param_1 + 0x78) {
      FUN_004e75b0(pvVar4,param_1);
      pvVar4 = (void *)((int)pvVar4 + 0x78);
    }
    i = *(int *)(in_ECX + 8);
    for (iVar5 = *(int *)(in_ECX + 4); iVar5 != i; iVar5 = iVar5 + 0x78) {
      FUN_004e6a20();
    }
    FUN_0054b339(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)operator_new_result + iVar3 * 0x78);
    if (*(int *)(in_ECX + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x78;
    }
    *(void **)(in_ECX + 4) = operator_new_result;
    *(void **)(in_ECX + 8) = (void *)((int)operator_new_result + (param_2 + iVar3) * 0x78);
    return;
  }
  if (param_2 <= (uint)((iVar3 - param_1) / 0x78)) {
    if (param_2 != 0) {
      i = iVar3;
      for (iVar5 = iVar3 + param_2 * -0x78; iVar5 != iVar3; iVar5 = iVar5 + 0x78) {
        FUN_004e75b0(i,iVar5);
        i = i + 0x78;
      }
      iVar3 = *(int *)(in_ECX + 8) + param_2 * -0x78;
      while (param_1 != iVar3) {
        iVar3 = iVar3 + -0x78;
        FUN_004e6f40(iVar3);
      }
      iVar3 = param_2 * 0x78 + param_1;
      if (param_1 != iVar3) {
        i = param_1 + 0x24;
        do {
          if (i + -0x24 != param_3) {
            FUN_004093c0(param_3 + 0x68,0,0xffffffff);
            FUN_004093c0(param_3 + 0x24,0,0xffffffff);
            *(undefined4 *)(i + 0x40) = *(undefined4 *)(param_3 + 100);
            FUN_004093c0(param_3,0,0xffffffff);
            FUN_004093c0(param_3 + 0x34,0,0xffffffff);
            FUN_004093c0(param_3 + 0x54,0,0xffffffff);
            FUN_004093c0(param_3 + 0x44,0,0xffffffff);
            FUN_004093c0(param_3 + 0x14,0,0xffffffff);
            *(undefined4 *)(i + -0x14) = *(undefined4 *)(param_3 + 0x10);
          }
          iVar5 = i + 0x54;
          i = i + 0x78;
        } while (iVar5 != iVar3);
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x78;
    }
    return;
  }
  i = param_2 * 0x78 + param_1;
  for (iVar5 = param_1; iVar5 != iVar3; iVar5 = iVar5 + 0x78) {
    FUN_004e75b0(i,iVar5);
    i = i + 0x78;
  }
  iVar3 = *(int *)(in_ECX + 8);
  for (i = param_2 - (iVar3 - param_1) / 0x78; i != 0; i = i + -1) {
    FUN_004e75b0(iVar3,param_3);
    iVar3 = iVar3 + 0x78;
  }
  iVar3 = *(int *)(in_ECX + 8);
  for (; param_1 != iVar3; param_1 = param_1 + 0x78) {
    FUN_004e6f40(param_3);
  }
  *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x78;
  return;
}


/* ==== 004e75b0 FUN_004e75b0 ==== */

void FUN_004e75b0(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571dc1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_004e6df0(param_2);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004e7600 FUN_004e7600 ==== */

void FUN_004e7600(byte param_1)

{
  FUN_004e6a20();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e76a0 FUN_004e76a0 ==== */

void FUN_004e76a0(undefined4 param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004e76a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e7750)[*(int *)(param_2 + 8)])();
  return;
}


/* ==== 004e7770 FUN_004e7770 ==== */

void FUN_004e7770(undefined4 param_1)

{
  int in_ECX;
  
  FUN_004dbf40(param_1,*(undefined4 *)(in_ECX + 8));
                    /* WARNING: Could not recover jumptable at 0x004e7788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e77dc)[*(int *)(in_ECX + 8)])();
  return;
}


/* ==== 004e77f0 FUN_004e77f0 ==== */

void FUN_004e77f0(undefined4 param_1)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571de3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004dbf50(param_1,(int *)(in_ECX + 8));
                    /* WARNING: Could not recover jumptable at 0x004e783c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e78f4)[*(int *)(in_ECX + 8)])();
  return;
}


/* ==== 004e7910 FUN_004e7910 ==== */

void FUN_004e7910(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00571df8;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004e7934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_LAB_004e7a4c)[*(int *)(in_ECX + 8)])(0);
  return;
}


/* ==== 004e7a60 FUN_004e7a60 ==== */

undefined1 * FUN_004e7a60(undefined1 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint i;
  uint j;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  FUN_00559400();
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  i = 0xffffffff;
  do {
    pcVar3 = pcVar2;
    if (i == 0) break;
    i = i - 1;
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar2 = pcVar3 + -i;
  pcVar3 = &stack0xffffffec;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  for (pcVar2 = (char *)FUN_00559b90(&stack0xffffffec,0x5c); pcVar2 != (char *)0x0;
      pcVar2 = (char *)FUN_00559b90(pcVar2 + i,0x5c)) {
    i = 0xffffffff;
    pcVar3 = s____005b76b8;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    j = 0xffffffff;
    pcVar3 = pcVar2;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_005580e0(pcVar2 + i,pcVar2 + 1,~j - 1);
    pcVar3 = s____005b76b8;
    pcVar5 = pcVar2;
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
  }
  for (pcVar2 = (char *)FUN_00559b90(&stack0xffffffec,0x22); pcVar2 != (char *)0x0;
      pcVar2 = (char *)FUN_00559b90(pcVar2 + i,0x22)) {
    i = 0xffffffff;
    pcVar3 = s____005b76b4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    j = 0xffffffff;
    pcVar3 = pcVar2;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_005580e0(pcVar2 + i,pcVar2 + 1,~j - 1);
    pcVar3 = s____005b76b4;
    pcVar5 = pcVar2;
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
  }
  for (pcVar2 = (char *)FUN_00559b90(&stack0xffffffec,10); pcVar2 != (char *)0x0;
      pcVar2 = (char *)FUN_00559b90(pcVar2 + i,10)) {
    i = 0xffffffff;
    pcVar3 = s__n_005b76b0;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    j = 0xffffffff;
    pcVar3 = pcVar2;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_005580e0(pcVar2 + i,pcVar2 + 1,~j - 1);
    pcVar3 = s__n_005b76b0;
    pcVar5 = pcVar2;
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
  }
  for (pcVar2 = (char *)FUN_00559b90(&stack0xffffffec,9); pcVar2 != (char *)0x0;
      pcVar2 = (char *)FUN_00559b90(pcVar2 + i,9)) {
    i = 0xffffffff;
    pcVar3 = s__t_005b76ac;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    j = 0xffffffff;
    pcVar3 = pcVar2;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_005580e0(pcVar2 + i,pcVar2 + 1,~j - 1);
    pcVar3 = s__t_005b76ac;
    pcVar5 = pcVar2;
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
  }
  for (pcVar2 = (char *)FUN_00559b90(&stack0xffffffec,0xd); pcVar2 != (char *)0x0;
      pcVar2 = (char *)FUN_00559b90(pcVar2 + i,0xd)) {
    i = 0xffffffff;
    pcVar3 = s__r_005b76a8;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    j = 0xffffffff;
    pcVar3 = pcVar2;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_005580e0(pcVar2 + i,pcVar2 + 1,~j - 1);
    pcVar3 = s__r_005b76a8;
    pcVar5 = pcVar2;
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
  }
  param_2._3_1_ = (undefined1)((uint)&stack0xffffffec >> 0x18);
  *param_1 = param_2._3_1_;
  i = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pcVar2 = &stack0xffffffec;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)&stack0xffffffec;
    puVar6 = *(undefined4 **)(param_1 + 4);
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(param_1 + 8) = i;
    *(undefined1 *)(*(int *)(param_1 + 4) + i) = 0;
  }
  return param_1;
}


/* ==== 004e7d30 FUN_004e7d30 ==== */

void FUN_004e7d30(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  facet *_Decref_result;
  undefined4 *puVar4;
  uint uVar5;
  int *in_ECX;
  int iVar6;
  undefined **local_40 [3];
  uint local_34;
  undefined4 local_30;
  char local_2c;
  void *local_24;
  facet *this_val;
  uint local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00571e33;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  local_2c = FUN_004d4c50();
  local_8 = 0;
  uVar5 = 0;
  if (local_2c != '\0') {
    FUN_004d4370(&this_val);
    local_8._0_1_ = 2;
    uVar2 = FUN_004d4350();
    piVar3 = (int *)FUN_0054ca8b(uVar2,1);
    if (piVar3 == (int *)0x0) {
      cVar1 = FUN_0054caca();
      if (cVar1 == '\0') {
        param_2 = s_missing_locale_facet_005b6f34;
        FUN_00558853(&param_2);
        local_40[0] = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_40,&DAT_00584188);
      }
      piVar3 = DAT_0074b894;
      if (DAT_0074b894 == (int *)0x0) {
        local_24 = operator_new(8);
        local_8._0_1_ = 3;
        if (local_24 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_004d4f60(0);
        }
        local_8._0_1_ = 2;
        piVar3 = (int *)FUN_004d6550(uVar2);
        DAT_0074b894 = piVar3;
      }
    }
    local_8._0_1_ = 0;
    if ((this_val != (facet *)0x0) &&
       (_Decref_result = std::locale::facet::_Decref(this_val), _Decref_result != (facet *)0x0)) {
      (*(code *)**(undefined4 **)_Decref_result)(1);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    if (in_ECX == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*in_ECX + 4) + (int)in_ECX;
    }
    local_24 = (void *)CONCAT31(local_24._1_3_,
                                *(undefined1 *)(*(int *)(*in_ECX + 4) + 0x30 + (int)in_ECX));
    local_34 = local_34 & 0xffffff00;
    puVar4 = (undefined4 *)
             (**(code **)(*piVar3 + 0xc))
                       (&param_1,local_34,
                        *(undefined4 *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x28),iVar6,local_24,
                        param_1,param_2);
    local_30 = puVar4[1];
    uVar5 = local_1c;
    if ((char)*puVar4 != '\0') {
      local_1c = 4;
      FUN_004e7e8e();
      return;
    }
  }
  local_8 = 0;
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 4) | uVar5;
    if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_0054eb4d();
  if ((cVar1 == '\0') &&
     (iVar6 = *(int *)(*in_ECX + 4), (*(byte *)((int)in_ECX + iVar6 + 0xc) & 2) != 0)) {
    uVar5 = 0;
    if (((*(byte *)((int)in_ECX + iVar6 + 4) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)((int)in_ECX + iVar6 + 0x28) + 0x2c))(), iVar6 == -1)) {
      uVar5 = 4;
    }
    if (uVar5 != 0) {
      uVar5 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 4) | uVar5;
      if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x28) == 0) {
        uVar5 = uVar5 | 4;
      }
      FUN_0054c6db(uVar5,0);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


/* ==== 004e7e8e FUN_004e7e8e ==== */

void FUN_004e7e8e(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(unaff_EBP + -0x18) != 0) {
    uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | *(uint *)(unaff_EBP + -0x18);
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_0054c6db(uVar2,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar1 = FUN_0054eb4d();
  if ((cVar1 == '\0') &&
     (iVar3 = *(int *)(*unaff_ESI + 4), (*(byte *)((int)unaff_ESI + iVar3 + 0xc) & 2) != 0)) {
    uVar2 = 0;
    if ((*(byte *)((int)unaff_ESI + iVar3 + 4) & 6) == 0) {
      iVar3 = (**(code **)(**(int **)((int)unaff_ESI + iVar3 + 0x28) + 0x2c))();
      if (iVar3 == -1) {
        uVar2 = 4;
      }
    }
    if (uVar2 != 0) {
      uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | uVar2;
      if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
        uVar2 = uVar2 | 4;
      }
      FUN_0054c6db(uVar2,0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004e7f60 FUN_004e7f60 ==== */

void FUN_004e7f60(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  facet *_Decref_result;
  undefined4 *puVar4;
  uint uVar5;
  int *in_ECX;
  int iVar6;
  undefined **local_44 [3];
  uint local_38 [2];
  char local_30;
  void *local_24;
  facet *this_val;
  uint local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00571e63;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  local_30 = FUN_004d4c50();
  local_8 = 0;
  uVar5 = 0;
  if (local_30 != '\0') {
    FUN_004d4370(&this_val);
    local_8._0_1_ = 2;
    uVar2 = FUN_004d4350();
    piVar3 = (int *)FUN_0054ca8b(uVar2,1);
    if (piVar3 == (int *)0x0) {
      cVar1 = FUN_0054caca();
      if (cVar1 == '\0') {
        param_1 = s_missing_locale_facet_005b6f34;
        FUN_00558853(&param_1);
        local_44[0] = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_44,&DAT_00584188);
      }
      piVar3 = DAT_0074b894;
      if (DAT_0074b894 == (int *)0x0) {
        local_24 = operator_new(8);
        local_8._0_1_ = 3;
        if (local_24 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_004d4f60(0);
        }
        local_8._0_1_ = 2;
        piVar3 = (int *)FUN_004d6550(uVar2);
        DAT_0074b894 = piVar3;
      }
    }
    local_8._0_1_ = 0;
    if ((this_val != (facet *)0x0) &&
       (_Decref_result = std::locale::facet::_Decref(this_val), _Decref_result != (facet *)0x0)) {
      (*(code *)**(undefined4 **)_Decref_result)(1);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    if (in_ECX == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*in_ECX + 4) + (int)in_ECX;
    }
    local_38[0] = local_38[0] & 0xffffff00;
    local_24 = (void *)CONCAT31(local_24._1_3_,
                                *(undefined1 *)(*(int *)(*in_ECX + 4) + 0x30 + (int)in_ECX));
    puVar4 = (undefined4 *)
             (**(code **)(*piVar3 + 4))
                       (local_38,local_38[0],
                        *(undefined4 *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x28),iVar6,local_24,
                        param_1);
    local_24 = (void *)puVar4[1];
    uVar5 = local_1c;
    if ((char)*puVar4 != '\0') {
      local_1c = 4;
      FUN_004e80ba();
      return;
    }
  }
  local_8 = 0;
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 4) | uVar5;
    if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_0054c6db(uVar5,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_0054eb4d();
  if ((cVar1 == '\0') &&
     (iVar6 = *(int *)(*in_ECX + 4), (*(byte *)((int)in_ECX + iVar6 + 0xc) & 2) != 0)) {
    uVar5 = 0;
    if (((*(byte *)((int)in_ECX + iVar6 + 4) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)((int)in_ECX + iVar6 + 0x28) + 0x2c))(), iVar6 == -1)) {
      uVar5 = 4;
    }
    if (uVar5 != 0) {
      uVar5 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 4) | uVar5;
      if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x28) == 0) {
        uVar5 = uVar5 | 4;
      }
      FUN_0054c6db(uVar5,0);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


/* ==== 004e80ba FUN_004e80ba ==== */

void FUN_004e80ba(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(unaff_EBP + -0x18) != 0) {
    uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | *(uint *)(unaff_EBP + -0x18);
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_0054c6db(uVar2,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar1 = FUN_0054eb4d();
  if ((cVar1 == '\0') &&
     (iVar3 = *(int *)(*unaff_ESI + 4), (*(byte *)((int)unaff_ESI + iVar3 + 0xc) & 2) != 0)) {
    uVar2 = 0;
    if ((*(byte *)((int)unaff_ESI + iVar3 + 4) & 6) == 0) {
      iVar3 = (**(code **)(**(int **)((int)unaff_ESI + iVar3 + 0x28) + 0x2c))();
      if (iVar3 == -1) {
        uVar2 = 4;
      }
    }
    if (uVar2 != 0) {
      uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | uVar2;
      if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
        uVar2 = uVar2 | 4;
      }
      FUN_0054c6db(uVar2,0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004e8200 FUN_004e8200 ==== */

void FUN_004e8200(undefined4 param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004e8211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004e880c)[param_2])();
  return;
}


/* ==== 004e88a0 FUN_004e88a0 ==== */

void FUN_004e88a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_004e36a0(param_1,param_2);
  uVar1 = FUN_004d4510();
  *(undefined4 *)(in_ECX + 0x10) = uVar1;
  return;
}


/* ==== 004e88d0 FUN_004e88d0 ==== */

void FUN_004e88d0(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 auStack_24 [8];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00571e80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x10))();
  uVar2 = (**(code **)(*piVar1 + 8))(auStack_24,param_1);
  pvStack_c = (void *)0x0;
  uVar2 = FUN_004e8bd0(&stack0xffffffbc,in_ECX[4],uVar2);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  piVar1 = (int *)(**(code **)(*in_ECX + 0x14))();
  (**(code **)(*piVar1 + 0xc))(param_1,uVar2);
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_004cf650();
  uStack_14 = 0xffffffff;
  FUN_004cf650();
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 004e8bd0 FUN_004e8bd0 ==== */

void FUN_004e8bd0(undefined4 param_1,int param_2)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00571f1e;
  pvStack_14 = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004e8bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_14;
  (*(code *)(&PTR_LAB_004e92e0)[param_2])();
  return;
}


/* ==== 004e9350 FUN_004e9350 ==== */

undefined1 * FUN_004e9350(undefined1 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00571f38;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00559400();
  pcVar2 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar2 = "";
  }
  i = 0xffffffff;
  do {
    pcVar3 = pcVar2;
    if (i == 0) break;
    i = i - 1;
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar2 = pcVar3 + -i;
  pcVar3 = &stack0xffffffe0;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  pcVar2 = (char *)FUN_005692e9(&stack0xffffffe0);
  *param_1 = param_1._3_1_;
  i = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pcVar3 = pcVar2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = *(char **)(param_1 + 4);
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
    *(uint *)(param_1 + 8) = i;
    *(undefined1 *)(i + *(int *)(param_1 + 4)) = 0;
  }
  if (param_3 != (char *)0x0) {
    cVar1 = param_3[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(param_3 + -1);
    }
    else {
      param_3[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004e9440 FUN_004e9440 ==== */

undefined1 * FUN_004e9440(undefined1 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00571f58;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00559400();
  pcVar2 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar2 = "";
  }
  i = 0xffffffff;
  do {
    pcVar3 = pcVar2;
    if (i == 0) break;
    i = i - 1;
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar2 = pcVar3 + -i;
  pcVar3 = &stack0xffffffe0;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  pcVar2 = (char *)FUN_005690b0(&stack0xffffffe0);
  *param_1 = param_1._3_1_;
  i = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pcVar3 = pcVar2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = *(char **)(param_1 + 4);
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
    *(uint *)(param_1 + 8) = i;
    *(undefined1 *)(i + *(int *)(param_1 + 4)) = 0;
  }
  if (param_3 != (char *)0x0) {
    cVar1 = param_3[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(param_3 + -1);
    }
    else {
      param_3[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004e9550 FUN_004e9550 ==== */

void FUN_004e9550(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 auStack_24 [4];
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00571f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x10))();
  uVar2 = (**(code **)(*piVar1 + 8))(auStack_24,param_1);
  pvStack_c = (void *)0x0;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x14))();
  (**(code **)(*piVar1 + 0x14))(param_1,uVar2,in_ECX[4]);
  uStack_18 = 0xffffffff;
  FUN_004cf650();
  ExceptionList = pvStack_20;
  return;
}


/* ==== 004e9840 FUN_004e9840 ==== */

void FUN_004e9840(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00571fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[1] = 6;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00578180;
  FUN_004e36a0(param_1,param_2);
  FUN_004dbf50(param_1,in_ECX + 4);
  ExceptionList = local_c;
  return;
}


/* ==== 004e98b0 FUN_004e98b0 ==== */

undefined4 * FUN_004e98b0(void)

{
  undefined4 *operator_new_result_2;
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572003;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result_2 = operator_new(0x14);
  operator_new_result = (undefined4 *)0x0;
  if (operator_new_result_2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    *operator_new_result_2 = &PTR_LAB_00577b5c;
    operator_new_result_2[1] = uVar1;
    local_4 = 1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))();
    operator_new_result_2[2] = uVar1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))();
    operator_new_result_2[3] = uVar1;
    *operator_new_result_2 = &PTR_FUN_00577af8;
    uVar1 = *(undefined4 *)(in_ECX + 0x10);
    *operator_new_result_2 = &PTR_FUN_00578180;
    operator_new_result_2[4] = uVar1;
    operator_new_result = operator_new_result_2;
  }
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004e9930 FUN_004e9930 ==== */

void FUN_004e9930(byte param_1)

{
  FUN_004e9950();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e9950 FUN_004e9950 ==== */

void FUN_004e9950(void)

{
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00572018;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00577af8;
  local_4 = 0;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
  }
  *in_ECX = &PTR_LAB_00577b5c;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004e9cc0 FUN_004e9cc0 ==== */

void FUN_004e9cc0(void)

{
  char cVar1;
  undefined1 *operator_new_result;
  undefined4 uVar2;
  undefined4 *in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_25 [5];
  undefined4 *local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057209d;
  local_c = ExceptionList;
  local_20 = in_ECX + 1;
  ExceptionList = &local_c;
  FUN_004ecd10();
  local_4 = 0;
  FUN_004ece20();
  local_4 = 1;
  FUN_004900f0(s_CBase_005af210,local_25);
  in_ECX[5] = &PTR_FUN_005781e8;
  local_4._0_1_ = 2;
  FUN_004eba50();
  in_ECX[10] = &PTR_FUN_005781e4;
  local_4._0_1_ = 3;
  FUN_004eba50();
  in_ECX[0xf] = &PTR_FUN_005781e0;
  local_4._0_1_ = 4;
  in_ECX[0x14] = &PTR_LAB_005781d0;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_25[0];
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0x15] = operator_new_result;
  local_4._0_1_ = 5;
  in_ECX[0x16] = &PTR_LAB_005781c0;
  local_20 = operator_new(0x10);
  local_4._0_1_ = 6;
  if (local_20 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00424980(local_25);
  }
  in_ECX[0x17] = uVar2;
  local_4._0_1_ = 7;
  *in_ECX = &PTR_FUN_005781bc;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  local_1c[0] = local_25[0];
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Keyboard_005b77b0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Keyboard_005b77b0,~i - 1);
  local_4._0_1_ = 8;
  FUN_004093c0(local_1c,0,0xffffffff);
  local_4._0_1_ = 7;
  FUN_004028f0(1);
  local_1c[0] = local_25[0];
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Mouse_005b77a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Mouse_005b77a8,~i - 1);
  local_4._0_1_ = 9;
  FUN_004093c0(local_1c,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_004028f0(1);
  local_1c[0] = local_25[0];
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = (char *)&DAT_005b779c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar3 = &DAT_005b779c;
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
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004093c0(local_1c,0,0xffffffff);
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


/* ==== 004e9f40 FUN_004e9f40 ==== */

void FUN_004e9f40(byte param_1)

{
  FUN_004e9f60();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004e9f60 FUN_004e9f60 ==== */

void FUN_004e9f60(void)

{
  char cVar1;
  int i;
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005720fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_005781bc;
  i = in_ECX[0x17];
  local_4 = 4;
  in_ECX[0x16] = &PTR_LAB_005781c0;
  if (i != 0) {
    FUN_0042f530(*(undefined4 *)(i + 4),*(undefined4 *)(i + 8));
    FUN_0054b339(*(undefined4 *)(i + 4));
    *(undefined4 *)(i + 4) = 0;
    *(undefined4 *)(i + 8) = 0;
    *(undefined4 *)(i + 0xc) = 0;
    FUN_0054b339(i);
  }
  in_ECX[0x17] = 0;
  i = in_ECX[0x15];
  local_4._0_1_ = 3;
  in_ECX[0x14] = &PTR_LAB_005781d0;
  if (i != 0) {
    FUN_004ec7a0();
    FUN_0054b339(i);
  }
  in_ECX[0x15] = 0;
  local_4._0_1_ = 2;
  in_ECX[0xf] = &PTR_LAB_0057820c;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[10] = &PTR_LAB_0057820c;
  FUN_004028f0(1);
  in_ECX[5] = &PTR_LAB_0057820c;
  i = in_ECX[7];
  if (i != 0) {
    cVar1 = *(char *)(i + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(i + -1));
    }
    else {
      *(char *)(i + -1) = cVar1 + -1;
    }
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  local_4 = 6;
  i = (**(code **)in_ECX[1])();
  if (0 < i) {
    do {
      FUN_004ebcb0(0);
      i = i + -1;
    } while (i != 0);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  in_ECX[3] = &PTR_LAB_005781fc;
  if (in_ECX[4] != 0) {
    FUN_004ed120(1);
  }
  in_ECX[4] = 0;
  local_4 = 0xffffffff;
  in_ECX[1] = &PTR_LAB_005781ec;
  if (in_ECX[2] != 0) {
    FUN_004ed120(1);
  }
  in_ECX[2] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004ea0c0 FUN_004ea0c0 ==== */

void FUN_004ea0c0(void)

{
  void *operator_new_result;
  undefined4 uVar1;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057212b;
  local_c = ExceptionList;
  if (DAT_0074b968 == 0) {
    ExceptionList = &local_c;
    operator_new_result = operator_new(0x6c);
    local_4 = 0;
    if (operator_new_result == (void *)0x0) {
      DAT_0074b968 = 0;
    }
    else {
      DAT_0074b968 = FUN_004e9cc0(operator_new_result);
    }
    local_4 = 0xffffffff;
    if (DAT_0074b968 == 0) {
      uVar1 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                           s_D__Work_InputLib_prog_CInputMana_005b7804,0x3c);
      local_4 = 1;
      uVar1 = FUN_004796b0(local_38,uVar1,s_Not_enough_memory_for_CInputMana_005b77bc);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_005872d0);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004ea180 FUN_004ea180 ==== */

void FUN_004ea180(void)

{
  if (DAT_0074b968 != (undefined4 *)0x0) {
    (**(code **)*DAT_0074b968)(1);
  }
  return;
}


/* ==== 004ea1a0 FUN_004ea1a0 ==== */

void FUN_004ea1a0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int i;
  
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 4))();
  i = 0;
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + i * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      i = i + 1;
    } while (i < iVar2);
  }
  return;
}


/* ==== 004ea1d0 FUN_004ea1d0 ==== */

void FUN_004ea1d0(void)

{
  FUN_004ea1a0();
  FUN_004ea180();
  return;
}


/* ==== 004ea1f0 FUN_004ea1f0 ==== */

void FUN_004ea1f0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 100) = param_2;
  *(undefined4 *)(in_ECX + 0x68) = param_1;
  FUN_004eb890(in_ECX + 0x14);
  FUN_004eb890(in_ECX + 0x28);
  FUN_004eb890(in_ECX + 0x3c);
  FUN_004eb220();
  *(undefined1 *)(in_ECX + 0x60) = 1;
  return;
}


/* ==== 004ea240 FUN_004ea240 ==== */

void FUN_004ea240(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int j;
  int i;
  int iStack_4;
  
  FUN_004eddd0();
  i = (*(code *)**(undefined4 **)(in_ECX + 4))();
  i = i + -1;
  j = (*(code *)**(undefined4 **)(param_1 + 4))();
  if (0 < j) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 4) + iVar3;
      uVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x58))();
      *(undefined4 *)(iVar2 + 0x10) = uVar1;
      iStack_4 = iVar2;
      FUN_004ecac0(*(undefined4 *)(*(int *)(in_ECX + 0x5c) + 8),1,&i);
      iVar3 = iVar3 + 0x28;
      j = j + -1;
    } while (j != 0);
  }
  return;
}


/* ==== 004ea2c0 FUN_004ea2c0 ==== */

int FUN_004ea2c0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint i;
  char *pcVar4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [32];
  undefined1 local_90 [48];
  undefined1 local_60 [56];
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057218f;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff18;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = FUN_004eced0(param_1);
  if (iVar2 != -1) {
    local_18 = (**(code **)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x10) + 4) + iVar2 * 4))();
    FUN_004ecea0(&local_18);
    local_8 = 0xffffffff;
    iVar2 = (*(code *)**(undefined4 **)(in_ECX + 4))();
    ExceptionList = local_10;
    return iVar2 + -1;
  }
  local_28[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Unable_to_find_typecreator___005af570;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Unable_to_find_typecreator___005af570,~i - 1);
  local_8._0_1_ = 1;
  uVar3 = FUN_0049df90(local_c0,s_FacMan_exception_in___s___d__005af2bc,
                       s____Libs_DaviSupportLib_include_F_005b785c,0x47);
  local_8._0_1_ = 2;
  uVar3 = FUN_0047c9a0(local_90,uVar3,local_28);
  local_8._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_b0,uVar3,param_1);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004a5260(uVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_60,&DAT_00583558);
}


/* ==== 004ea460 FUN_004ea460 ==== */

void FUN_004ea460(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [48];
  undefined1 local_4c [56];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005721e4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff2c;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffff2c;
  if (-1 < param_1) {
    ExceptionList = &local_10;
    iVar3 = (*(code *)**(undefined4 **)(in_ECX + 4))();
    puVar2 = local_14;
    if (param_1 < iVar3) {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 8) + 4) + param_1 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      FUN_004ecd90(param_1,1);
      ExceptionList = local_10;
      return;
    }
  }
  local_14 = puVar2;
  uVar4 = FUN_0049df90(local_8c,s_Illegal_object_index_to_remove___005af54c,param_1);
  local_8._0_1_ = 1;
  uVar5 = FUN_0049df90(local_7c,s_FacMan_exception_in___s___d__005af2bc,
                       s____Libs_DaviSupportLib_include_F_005b785c,0x54);
  local_8._0_1_ = 2;
  uVar4 = FUN_0047c9a0(local_9c,uVar5,uVar4);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004a5260(uVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_4c,&DAT_00583558);
}


/* ==== 004ea5b0 FUN_004ea5b0 ==== */

/* WARNING: Removing unreachable block (ram,0x004ea6d0) */

undefined4 FUN_004ea5b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  uint i;
  int unaff_ESI;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int unaff_retaddr;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572208;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar3 = FUN_004eb460(param_3);
  if (cVar3 != '\0') {
    puVar4 = *(undefined1 **)(param_3 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    uVar5 = FUN_0049df90(local_58,s_Device__s_already_exists__005b78b0,puVar4);
    local_4 = 0;
    uVar6 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputMana_005b7804,0x113);
    local_4._0_1_ = 1;
    uVar5 = FUN_0047c9a0(local_38,uVar6,uVar5);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(uVar5);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  iVar7 = FUN_004ea2c0(param_1);
  cVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar7 * 4) + 4))
                    (*(undefined4 *)(in_ECX + 0x68),*(undefined4 *)(in_ECX + 100),param_2);
  iVar1 = *(int *)(*(int *)(in_ECX + 8) + 4);
  if (cVar3 == '\0') {
    (**(code **)(**(int **)(iVar1 + iVar7 * 4) + 8))();
    FUN_004ea460(iVar7);
    ExceptionList = pvStack_18;
    return 0;
  }
  uVar2 = *(uint *)(param_3 + 8);
  iVar1 = *(int *)(iVar1 + iVar7 * 4);
  if (iVar1 + 0x90 == param_3) {
    FUN_0040f800(uVar2,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = *(undefined1 **)(param_3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar7 = *(int *)(iVar1 + 0x94);
        if (iVar7 != 0) {
          cVar3 = *(char *)(iVar7 + -1);
          if ((cVar3 == '\0') || (cVar3 == -1)) {
            FUN_0054b339((char *)(iVar7 + -1));
          }
          else {
            *(char *)(iVar7 + -1) = cVar3 + -1;
          }
        }
        *(undefined4 *)(iVar1 + 0x94) = 0;
        *(undefined4 *)(iVar1 + 0x98) = 0;
        *(undefined4 *)(iVar1 + 0x9c) = 0;
        puVar4 = *(undefined1 **)(param_3 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)(iVar1 + 0x94) = puVar4;
        *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_3 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004ea79a;
      }
    }
    cVar3 = FUN_00402a00(uVar2,1);
    if (cVar3 != '\0') {
      puVar8 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_3 + 4) != (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(param_3 + 4);
      }
      puVar9 = *(undefined4 **)(iVar1 + 0x94);
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
      FUN_004029e0(uVar2);
      in_ECX = unaff_ESI;
    }
  }
LAB_004ea79a:
  FUN_004ea240(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + 4) + unaff_retaddr * 4));
  ExceptionList = pvStack_18;
  return 1;
}


/* ==== 004ea7d0 FUN_004ea7d0 ==== */

void FUN_004ea7d0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int i;
  
  FUN_004ec720();
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 4))();
  i = 0;
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + i * 4);
      if ((char)piVar1[0x28] != '\0') {
        (**(code **)(*piVar1 + 0xc))();
      }
      i = i + 1;
    } while (i < iVar2);
  }
  return;
}


/* ==== 004ea810 FUN_004ea810 ==== */

int FUN_004ea810(int param_1)

{
  int iVar1;
  char *_Str1;
  int __strcmpi_result;
  int in_ECX;
  char *_Str2;
  int iVar2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x50))();
  i = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(in_ECX + 0x54) + 4) + iVar2 + 0x2c);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return i;
      }
      i = i + 1;
      iVar2 = iVar2 + 0x3c;
    } while (i < iVar1);
  }
  return -1;
}


/* ==== 004ea880 FUN_004ea880 ==== */

int FUN_004ea880(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  int in_ECX;
  int i;
  char *_Str2;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x58))();
  i = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x5c) + 4) + i * 8) == param_1) {
        _Str2 = "";
        if (*(char **)(param_2 + 4) != (char *)0x0) {
          _Str2 = *(char **)(param_2 + 4);
        }
        iVar2 = FUN_004ec540();
        _Str1 = *(char **)(iVar2 + 4);
        if (_Str1 == (char *)0x0) {
          _Str1 = "";
        }
        iVar2 = __strcmpi(_Str1,_Str2);
        if (iVar2 == 0) {
          return *(int *)(*(int *)(in_ECX + 0x5c) + 4) + i * 8;
        }
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004ea900 FUN_004ea900 ==== */

int FUN_004ea900(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x58))();
  i = 0;
  if (0 < iVar1) {
    do {
      FUN_004ec540();
      iVar2 = FUN_004edd30();
      if (iVar2 == param_1) {
        return *(int *)(*(int *)(in_ECX + 0x5c) + 4) + i * 8;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004ea960 FUN_004ea960 ==== */

undefined4 FUN_004ea960(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_48 [44];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004ea810(param_1);
  if (iVar2 == -1) {
    FUN_004edea0(param_1,param_2);
    local_4 = 0;
    FUN_004ec7e0(*(undefined4 *)(*(int *)(in_ECX + 0x54) + 8),1,local_48);
    local_4 = 0xffffffff;
    if (local_1c != 0) {
      cVar1 = *(char *)(local_1c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_1c + -1));
      }
      else {
        *(char *)(local_1c + -1) = cVar1 + -1;
      }
    }
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_005586c5(local_48,8,5,FUN_004ec6e0);
    ExceptionList = local_c;
    return 0;
  }
  uVar3 = FUN_004ee040(param_2);
  ExceptionList = local_c;
  return uVar3;
}


/* ==== 004eaa50 FUN_004eaa50 ==== */

void FUN_004eaa50(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x2c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  FUN_005586c5(in_ECX,8,5,FUN_004ec6e0);
  return;
}


/* ==== 004eaaa0 FUN_004eaaa0 ==== */

void FUN_004eaaa0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [28];
  undefined1 local_74 [28];
  undefined1 local_58 [28];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057228f;
  local_c = ExceptionList;
  if (*(char *)(in_ECX + 0x60) == '\0') {
    ExceptionList = &local_c;
    uVar1 = FUN_0049df90(local_b0,s_Input_exception_in___s___d__005b77e4,
                         s___CInputManager_h_005b7950,0xa3);
    local_4 = 0;
    uVar1 = FUN_004796b0(local_a0,uVar1,s_InputManager_not_initted_yet__Ca_005b7910);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_90,&DAT_005872d0);
  }
  ExceptionList = &local_c;
  iVar2 = FUN_004eb3f0(param_3);
  if (iVar2 == -1) {
    puVar3 = *(undefined1 **)(param_3 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    uVar1 = FUN_0049df90(local_a0,s_Device__s_does_not_exist__005b78f4,puVar3);
    local_4 = 2;
    uVar4 = FUN_0049df90(local_b0,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputMana_005b7804,0x203);
    local_4._0_1_ = 3;
    uVar1 = FUN_0047c9a0(local_90,uVar4,uVar1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_58,&DAT_005872d0);
  }
  iVar2 = FUN_004ea880(iVar2,param_2);
  if (iVar2 == 0) {
    puVar3 = *(undefined1 **)(param_3 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    puVar5 = *(undefined1 **)(param_2 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0057629c;
    }
    uVar1 = FUN_0049df90(local_3c,s_Command__s_of_device__s_does_not_005b78cc,puVar5,puVar3);
    local_4 = 5;
    uVar4 = FUN_0049df90(local_2c,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputMana_005b7804,0x20a);
    local_4._0_1_ = 6;
    uVar1 = FUN_0047c9a0(local_1c,uVar4,uVar1);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_74,&DAT_005872d0);
  }
  FUN_004ea960(param_1,iVar2);
  ExceptionList = local_c;
  return;
}


/* ==== 004eac80 FUN_004eac80 ==== */

float10 FUN_004eac80(undefined4 *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int i;
  float10 fVar5;
  int k;
  int j;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_10 [16];
  
  i = 0;
  j = 0;
  k = 0;
  iVar2 = (**(code **)*param_1)();
  fStack_1c = 0.0;
  fStack_20 = 0.0;
  iVar3 = (*(code *)**(undefined4 **)(in_ECX + 4))();
  if (0 < iVar2) {
    do {
      iVar1 = **(int **)(*(int *)(param_1[1] + 4) + i * 4);
      if ((iVar1 < 0) || (iVar3 <= iVar1)) {
        FUN_0049df90(auStack_10,s_Illegal_device_index___d_Current_005b7980,iVar1,iVar3);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_10,&DAT_00587530);
      }
      FUN_004ec540();
      uVar4 = FUN_004edd30();
      fVar5 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar1 * 4) +
                                   0x10))(uVar4);
      fStack_1c = (float)(fVar5 + (float10)fStack_1c);
      if ((float10)0.0 < fVar5) {
        j = j + 1;
      }
      if (param_2 != (float *)0x0) {
        fVar5 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar1 * 4) +
                                     0x14))(uVar4);
        fStack_20 = (float)(fVar5 + (float10)fStack_20);
        if ((float10)0.0 < fVar5) {
          k = k + 1;
        }
      }
      i = i + 1;
    } while (i < iVar2);
  }
  if (param_2 != (float *)0x0) {
    if (k == iVar2) {
      *param_2 = fStack_20 / (float)k;
    }
    else {
      *param_2 = 0.0;
    }
  }
  if (j != iVar2) {
    return (float10)0.0;
  }
  return (float10)fStack_1c / (float10)j;
}


/* ==== 004eadd0 FUN_004eadd0 ==== */

float10 FUN_004eadd0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int i;
  float10 fVar5;
  undefined1 local_94 [28];
  undefined1 local_78 [28];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005722c8;
  local_c = ExceptionList;
  i = 0;
  if (*(char *)(in_ECX + 0x60) == '\0') {
    ExceptionList = &local_c;
    uVar1 = FUN_0049df90(local_2c,s_Input_exception_in___s___d__005b77e4,
                         s___CInputManager_h_005b7950,0xa3);
    local_4 = 0;
    uVar1 = FUN_004796b0(local_3c,uVar1,s_InputManager_not_initted_yet__Ca_005b7910);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_78,&DAT_005872d0);
  }
  ExceptionList = &local_c;
  iVar2 = FUN_004ea810(param_1);
  if (iVar2 != -1) {
    iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 4) + 0x38 + iVar2 * 0x3c);
    if (0 < iVar2) {
      do {
        uVar1 = FUN_004ee110(i);
        fVar5 = (float10)FUN_004eac80(uVar1,param_2);
        if ((float10)0.0 < fVar5) {
          ExceptionList = local_c;
          return fVar5;
        }
        i = i + 1;
      } while (i < iVar2);
    }
    ExceptionList = local_c;
    return (float10)0.0;
  }
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  uVar1 = FUN_0049df90(local_1c,s_Action__s_does_not_exist__005b7964,puVar3);
  local_4 = 2;
  uVar4 = FUN_0049df90(local_5c,s_Input_exception_in___s___d__005b77e4,
                       s_D__Work_InputLib_prog_CInputMana_005b7804,0x318);
  local_4._0_1_ = 3;
  uVar1 = FUN_0047c9a0(local_4c,uVar4,uVar1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_94,&DAT_005872d0);
}


/* ==== 004eaf50 FUN_004eaf50 ==== */

int FUN_004eaf50(float param_1)

{
  float10 fVar1;
  undefined2 extraout_var;
  uint3 uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_004eadd0(param_1,&param_1);
  fVar1 = (float10)param_1;
  uVar2 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                           (ushort)(fVar3 == fVar1) << 0xe) >> 8);
  if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


/* ==== 004eaf80 FUN_004eaf80 ==== */

int FUN_004eaf80(float param_1)

{
  float10 fVar1;
  undefined2 extraout_var;
  uint3 uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_004eadd0(param_1,&param_1);
  fVar1 = (float10)param_1;
  uVar2 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                           (ushort)(fVar3 == fVar1) << 0xe) >> 8);
  if (fVar3 < fVar1) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


/* ==== 004eafb0 FUN_004eafb0 ==== */

void FUN_004eafb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  int j;
  int i;
  undefined1 auStack_94 [28];
  undefined1 local_78 [28];
  undefined1 local_5c [16];
  undefined1 auStack_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004ea810(param_1);
  if (iVar1 == -1) {
    puVar2 = *(undefined1 **)(param_1 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    uVar3 = FUN_0049df90(local_3c,s_Action__s_does_not_exist__005b7964,puVar2);
    local_4 = 0;
    uVar4 = FUN_0049df90(local_5c,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputMana_005b7804,0x389);
    local_4._0_1_ = 1;
    uVar3 = FUN_0047c9a0(local_1c,uVar4,uVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_78,&DAT_005872d0);
  }
  i = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 4) + 0x38 + iVar1 * 0x3c);
  if (0 < iVar1) {
    do {
      puVar5 = (undefined4 *)FUN_004ee110(i);
      iVar6 = (**(code **)*puVar5)();
      j = 0;
      if (0 < iVar6) {
        do {
          if (*(int *)(*(int *)(*(int *)(puVar5[1] + 4) + j * 4) + 4) == 0) {
            uVar3 = FUN_0049df90(auStack_2c,s_Input_exception_in___s___d__005b77e4,
                                 s___CInputCommand_h_005b79c8,0xcc);
            local_4 = 3;
            uVar3 = FUN_004796b0(auStack_4c,uVar3,s_m_InputCommand____NULL_005b79b0);
            local_4 = CONCAT31(local_4._1_3_,4);
            FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(auStack_94,&DAT_005872d0);
          }
          FUN_004eddb0(param_2,param_3,param_4);
          j = j + 1;
        } while (j < iVar6);
      }
      i = i + 1;
    } while (i < iVar1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004eb170 FUN_004eb170 ==== */

void FUN_004eb170(int param_1)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int i;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572328;
  local_c = ExceptionList;
  i = 0;
  ExceptionList = &local_c;
  do {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    uVar4 = FUN_0049df90(local_1c,s__s_d_005b79dc,puVar3,i);
    local_4 = 0;
    cVar2 = FUN_004ea5b0(param_1,i,uVar4);
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
    i = i + 1;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  } while (cVar2 != '\0');
  ExceptionList = local_c;
  return;
}


/* ==== 004eb220 FUN_004eb220 ==== */

void FUN_004eb220(void)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572358;
  local_c = ExceptionList;
  i = 0xffffffff;
  pcVar2 = s_Keyboard_005b77b0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &local_c;
  FUN_00402940(s_Keyboard_005b77b0,~i - 1);
  local_4 = 0;
  FUN_004eb170(local_2c);
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
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_Mouse_005b77a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_Mouse_005b77a8;
    pcVar4 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 1;
  FUN_004eb170(local_2c);
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
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = (char *)&DAT_005b779c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar3 = &DAT_005b779c;
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
    *(undefined1 *)((int)local_18 + i) = 0;
    local_14 = i;
  }
  local_4 = 2;
  FUN_004eb170(local_1c);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  ExceptionList = local_c;
  return;
}


/* ==== 004eb3f0 FUN_004eb3f0 ==== */

int FUN_004eb3f0(int param_1)

{
  int iVar1;
  char *_Str1;
  int __strcmpi_result;
  int in_ECX;
  char *_Str2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 4))();
  i = 0;
  if (0 < iVar1) {
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)(in_ECX + 8) + 4) + i * 4) + 0x94);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return i;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return -1;
}


/* ==== 004eb460 FUN_004eb460 ==== */

bool FUN_004eb460(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004eb3f0(param_1);
  return iVar1 != -1;
}


/* ==== 004eb480 FUN_004eb480 ==== */

undefined4 FUN_004eb480(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004ec720();
  iVar1 = FUN_004eb3f0(param_2);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_004ea880(iVar1,param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_004ec540();
  uVar2 = FUN_004edd30();
  return uVar2;
}


/* ==== 004eb4d0 FUN_004eb4d0 ==== */

void FUN_004eb4d0(int param_1,int param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined1 *puVar6;
  float10 fVar7;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [28];
  undefined1 local_64 [28];
  undefined1 local_48 [28];
  undefined1 local_2c [16];
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005723d2;
  pvStack_c = ExceptionList;
  if (*(char *)(in_ECX + 0x60) == '\0') {
    ExceptionList = &pvStack_c;
    uVar1 = FUN_0049df90(local_a0,s_Input_exception_in___s___d__005b77e4,
                         s___CInputManager_h_005b7950,0xa3);
    local_4 = 0;
    uVar1 = FUN_004796b0(local_90,uVar1,s_InputManager_not_initted_yet__Ca_005b7910);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_80,&DAT_005872d0);
  }
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004eb3f0(param_2);
  if (iVar2 == -1) {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    uVar1 = FUN_0049df90(local_90,s_Device__s_does_not_exist__005b78f4,puVar3);
    local_4 = 2;
    uVar4 = FUN_0049df90(local_a0,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputMana_005b7804,1099);
    local_4._0_1_ = 3;
    uVar1 = FUN_0047c9a0(local_80,uVar4,uVar1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_64,&DAT_005872d0);
  }
  iVar5 = FUN_004ea880(iVar2,param_1);
  if (iVar5 == 0) {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    puVar6 = *(undefined1 **)(param_1 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    uVar1 = FUN_0049df90(local_80,s_Command__s_of_device__s_does_not_005b78cc,puVar6,puVar3);
    local_4 = 5;
    uVar4 = FUN_0049df90(local_90,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputMana_005b7804,0x452);
    local_4._0_1_ = 6;
    uVar1 = FUN_0047c9a0(local_a0,uVar4,uVar1);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_64,&DAT_005872d0);
  }
  if (*(int *)(iVar5 + 4) == 0) {
    uVar1 = FUN_0049df90(local_2c,s_Input_exception_in___s___d__005b77e4,
                         s___CInputCommand_h_005b79c8,0xcc);
    local_4 = 8;
    uVar1 = FUN_004796b0(local_1c,uVar1,s_m_InputCommand____NULL_005b79b0);
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_48,&DAT_005872d0);
  }
  uVar1 = FUN_004edd30();
  if (param_3 != (float *)0x0) {
    fVar7 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar2 * 4) + 0x14)
                     )(uVar1);
    *param_3 = (float)fVar7;
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar2 * 4) + 0x10))(uVar1);
  ExceptionList = pvStack_10;
  return;
}


/* ==== 004eb740 FUN_004eb740 ==== */

float10 FUN_004eb740(undefined4 param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  float10 fVar3;
  
  piVar2 = (int *)FUN_004ea900(param_1);
  if (piVar2 == (int *)0x0) {
    return (float10)-1.0;
  }
  iVar1 = *piVar2;
  if (param_2 != (float *)0x0) {
    fVar3 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar1 * 4) + 0x14)
                     )(param_1);
    *param_2 = (float)fVar3;
  }
  fVar3 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar1 * 4) + 0x10))
                             (param_1);
  return fVar3;
}


/* ==== 004eb7a0 FUN_004eb7a0 ==== */

int FUN_004eb7a0(undefined4 param_1,float param_2)

{
  float10 fVar1;
  undefined2 extraout_var;
  uint3 uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_004eb4d0(param_1,param_2,&param_2);
  fVar1 = (float10)param_2;
  uVar2 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                           (ushort)(fVar3 == fVar1) << 0xe) >> 8);
  if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


/* ==== 004eb7d0 FUN_004eb7d0 ==== */

undefined4 FUN_004eb7d0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005723f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004eb3f0(param_1);
  if (iVar1 == -1) {
    puVar2 = *(undefined1 **)(param_1 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    uVar3 = FUN_0049df90(local_58,s_Device__s_does_not_exist__005b78f4,puVar2);
    local_4 = 0;
    uVar4 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputMana_005b7804,0x518);
    local_4._0_1_ = 1;
    uVar3 = FUN_0047c9a0(local_38,uVar4,uVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  ExceptionList = local_c;
  return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + 4) + iVar1 * 4);
}


/* ==== 004eb890 FUN_004eb890 ==== */

void FUN_004eb890(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint i;
  char *pcVar5;
  undefined1 local_9c [56];
  undefined1 local_64 [28];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0057246c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  local_8 = 0;
  local_18 = param_1;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    iVar3 = FUN_004eced0(param_1 + 4);
    if (iVar3 != -1) {
      uVar2 = FUN_004900f0(s_Trying_to_add_creator_that_alrea_005af290,(int)&param_1 + 3);
      local_8._0_1_ = 4;
      uVar4 = FUN_0049df90(local_48,s_FacMan_exception_in___s___d__005af2bc,
                           s____Libs_DaviSupportLib_include_F_005b785c,0x68);
      local_8._0_1_ = 5;
      uVar2 = FUN_0047c9a0(local_28,uVar4,uVar2);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_004a5260(uVar2);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_9c,&DAT_00583558);
    }
    FUN_004ecea0(&local_18);
    ExceptionList = local_10;
    return;
  }
  local_28[0] = 0;
  ExceptionList = &local_10;
  local_14 = &stack0xffffff0c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_NULL_pointer_passed_as_a_creator_005af314;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_NULL_pointer_passed_as_a_creator_005af314,~i - 1);
  local_8._0_1_ = 1;
  uVar2 = FUN_0049df90(local_48,s_FacMan_exception_in___s___d__005af2bc,
                       s____Libs_DaviSupportLib_include_F_005b785c,99);
  local_8._0_1_ = 2;
  uVar2 = FUN_0047c9a0(local_38,uVar2,local_28);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004a5260(uVar2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_64,&DAT_00583558);
}


/* ==== 004eba50 FUN_004eba50 ==== */

void FUN_004eba50(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_5;
  
  i = 0xffffffff;
  *(undefined1 *)(in_ECX + 1) = local_5;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  pcVar3 = s_CBase_005af210;
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
  iVar2 = in_ECX[2];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      *in_ECX = &PTR_LAB_0057820c;
      return;
    }
    if (((uint)in_ECX[4] < 0x20) && (i <= (uint)in_ECX[4])) goto LAB_004ebafc;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    *in_ECX = &PTR_LAB_0057820c;
    return;
  }
  FUN_00402b20(i);
LAB_004ebafc:
  pcVar3 = s_CBase_005af210;
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
  *in_ECX = &PTR_LAB_0057820c;
  return;
}


/* ==== 004ebb30 FUN_004ebb30 ==== */

void FUN_004ebb30(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int i;
  undefined1 uStack_5d;
  undefined4 local_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [7];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005724bb;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)*in_ECX)();
  i = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)*in_ECX)();
      if (iVar2 < 1) {
        uVar3 = FUN_0049df90(auStack_58,s_Illegal_object_index_to_remove___005af54c,0);
        local_4._0_1_ = 2;
        uVar4 = FUN_0049df90(auStack_48,s_FacMan_exception_in___s___d__005af2bc,
                             s____Libs_DaviSupportLib_include_F_005b785c,0x54);
        local_4._0_1_ = 3;
        uVar3 = FUN_0047c9a0(auStack_38,uVar4,uVar3);
        local_4._0_1_ = 4;
        FUN_00558826();
        local_4._0_1_ = 5;
        FUN_00424980(&uStack_5d);
        local_4._0_1_ = 6;
        appuStack_28[0] = &PTR_FUN_005772f4;
        FUN_004093c0(uVar3,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(appuStack_28,&DAT_00583558);
      }
      if ((undefined4 *)**(int **)(in_ECX[1] + 4) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)**(int **)(in_ECX[1] + 4))(1);
      }
      FUN_004ecd90(0,1);
      i = i + 1;
    } while (i < iVar1);
  }
  iVar1 = in_ECX[3];
  in_ECX[2] = &PTR_LAB_005781fc;
  if (iVar1 != 0) {
    local_5c = *(undefined4 *)(iVar1 + 4);
    FUN_0054b339(local_5c);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[3] = 0;
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_005781ec;
  if (iVar1 != 0) {
    local_5c = *(undefined4 *)(iVar1 + 4);
    FUN_0054b339(local_5c);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[1] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004ebcb0 FUN_004ebcb0 ==== */

void FUN_004ebcb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [3];
  undefined1 uStack_1c;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_c = *unaff_FS_OFFSET;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005724f8;
  *unaff_FS_OFFSET = &uStack_c;
  if (-1 < param_1) {
    iVar2 = (**(code **)*in_ECX)();
    if (param_1 < iVar2) {
      puVar3 = *(undefined4 **)(*(int *)(in_ECX[1] + 4) + param_1 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar2 = in_ECX[1];
      puVar1 = *(undefined4 **)(iVar2 + 8);
      iVar6 = *(int *)(iVar2 + 4) + param_1 * 4;
      puVar3 = (undefined4 *)(iVar6 + 4);
      if (puVar3 != puVar1) {
        iVar6 = iVar6 - (int)puVar3;
        do {
          *(undefined4 *)(iVar6 + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
      }
      FUN_0042f530(*(int *)(iVar2 + 8) + -4,*(int *)(iVar2 + 8));
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -4;
      *unaff_FS_OFFSET = uStack_c;
      return;
    }
  }
  uVar4 = FUN_0049df90(local_58,s_Illegal_object_index_to_remove___005af54c,param_1);
  uStack_4 = 0;
  uVar5 = FUN_0049df90(auStack_48,s_FacMan_exception_in___s___d__005af2bc,
                       s____Libs_DaviSupportLib_include_F_005b785c,0x54);
  uStack_4._0_1_ = 1;
  uVar4 = FUN_0047c9a0(auStack_38,uVar5,uVar4);
  uStack_4._0_1_ = 2;
  FUN_00558826();
  uStack_1c = (undefined1)param_1;
  FUN_004028f0(0);
  uStack_4._0_1_ = 4;
  appuStack_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(uVar4,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_28,&DAT_00583558);
}


/* ==== 004ebdf0 FUN_004ebdf0 ==== */

void FUN_004ebdf0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004ebe00 FUN_004ebe00 ==== */

void FUN_004ebe00(void)

{
  FUN_005584e0(&LAB_004ebe10);
  return;
}


/* ==== 004ebe30 FUN_004ebe30 ==== */

void FUN_004ebe30(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004ebe40 FUN_004ebe40 ==== */

void FUN_004ebe40(void)

{
  FUN_005584e0(&LAB_004ebe50);
  return;
}


/* ==== 004ebe60 FUN_004ebe60 ==== */

void FUN_004ebe60(void)

{
  char cVar1;
  void *operator_new_result;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_68 [4];
  char *local_64;
  uint local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057254b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x1dc);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004ed2f0();
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
    pcVar5 = local_64;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_64[i] = '\0';
    local_60 = i;
  }
  local_4 = 1;
  uVar3 = FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc,
                       s____Libs_DaviSupportLib_include_C_005b79e4,0x2e);
  local_4._0_1_ = 2;
  uVar3 = FUN_0047c9a0(local_48,uVar3,local_68);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_38,uVar3,in_ECX + 4);
  local_4._0_1_ = 4;
  FUN_00558826();
  FUN_004028f0(0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004ebfe0 FUN_004ebfe0 ==== */

void FUN_004ebfe0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_0057820c;
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


/* ==== 004ec030 FUN_004ec030 ==== */

void FUN_004ec030(void)

{
  char cVar1;
  void *operator_new_result;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_68 [4];
  char *local_64;
  uint local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057259b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x130);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004ee2b0();
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
    pcVar5 = local_64;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_64[i] = '\0';
    local_60 = i;
  }
  local_4 = 1;
  uVar3 = FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc,
                       s____Libs_DaviSupportLib_include_C_005b79e4,0x2e);
  local_4._0_1_ = 2;
  uVar3 = FUN_0047c9a0(local_48,uVar3,local_68);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_38,uVar3,in_ECX + 4);
  local_4._0_1_ = 4;
  FUN_00558826();
  FUN_004028f0(0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004ec1b0 FUN_004ec1b0 ==== */

void FUN_004ec1b0(void)

{
  char cVar1;
  void *operator_new_result;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_68 [4];
  char *local_64;
  uint local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005725eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x15c);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004ef2b0();
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
    pcVar5 = local_64;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_64[i] = '\0';
    local_60 = i;
  }
  local_4 = 1;
  uVar3 = FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc,
                       s____Libs_DaviSupportLib_include_C_005b79e4,0x2e);
  local_4._0_1_ = 2;
  uVar3 = FUN_0047c9a0(local_48,uVar3,local_68);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_38,uVar3,in_ECX + 4);
  local_4._0_1_ = 4;
  FUN_00558826();
  FUN_004028f0(0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004ec330 FUN_004ec330 ==== */

void FUN_004ec330(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_005781d0;
  if (iVar1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (iVar3 = *(int *)(iVar1 + 4); iVar3 != iVar2; iVar3 = iVar3 + 0x3c) {
    FUN_004eaa50();
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  in_ECX[1] = 0;
  return;
}


/* ==== 004ec3c0 FUN_004ec3c0 ==== */

/* WARNING: Removing unreachable block (ram,0x004ec414) */

void FUN_004ec3c0(int param_1)

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
  puStack_8 = &LAB_00572608;
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
        goto LAB_004ec472;
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
      *in_ECX = &PTR_FUN_00578210;
      ExceptionList = local_c;
      return;
    }
  }
LAB_004ec472:
  *in_ECX = &PTR_FUN_00578210;
  ExceptionList = local_c;
  return;
}


/* ==== 004ec520 FUN_004ec520 ==== */

int FUN_004ec520(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x3c;
}


/* ==== 004ec540 FUN_004ec540 ==== */

void FUN_004ec540(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572630;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 4) == 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                         s___CInputCommand_h_005b79c8,0xcc);
    local_4 = 0;
    uVar1 = FUN_004796b0(local_38,uVar1,s_m_InputCommand____NULL_005b79b0);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


/* ==== 004ec610 FUN_004ec610 ==== */

void FUN_004ec610(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_005781c0;
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


/* ==== 004ec670 FUN_004ec670 ==== */

int FUN_004ec670(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 8;
}


/* ==== 004ec6e0 FUN_004ec6e0 ==== */

void FUN_004ec6e0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00578218;
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


/* ==== 004ec720 FUN_004ec720 ==== */

void FUN_004ec720(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572650;
  local_c = ExceptionList;
  if (*(char *)(in_ECX + 0x60) == '\0') {
    ExceptionList = &local_c;
    uVar1 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                         s___CInputManager_h_005b7950,0xa3);
    local_4 = 0;
    uVar1 = FUN_004796b0(local_38,uVar1,s_InputManager_not_initted_yet__Ca_005b7910);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


