/* Menu.exe — units/ActnList.pas: 80 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00437e18 TDockTree.virtual_020 ==== */

void TDockTree_virtual_020(int param_1,char param_2)

{
  int i_val;
  undefined4 uVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar4 = 0;
  if ((((*(byte *)(*(int *)(param_1 + 0x14) + 0x20) & 1) == 0) && (*(int *)(param_1 + 100) != 0)) &&
     (i_val = FUN_004332a0(*(int *)(param_1 + 0x14)), 0 < i_val)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),&iStack_1c);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x84))(*(int **)(param_1 + 0x14),&iStack_1c);
    if ((param_2 != '\0') ||
       (uVar1 = FUN_00408298(&iStack_1c,(int *)(param_1 + 0x20),0x10), (char)uVar1 == '\0')) {
      piVar2 = &iStack_1c;
      puVar3 = (undefined4 *)(param_1 + 0x20);
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *puVar3 = *piVar2;
        piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      i_val = *(int *)(param_1 + 100);
      if (*(char *)(i_val + 0x10) == '\x01') {
        *(int *)(i_val + 0x20) = iStack_14 - iStack_1c;
        *(int *)(param_1 + 0x68) = iStack_10 - iStack_18;
      }
      else if (*(char *)(i_val + 0x10) == '\x02') {
        *(int *)(i_val + 0x20) = iStack_10 - iStack_18;
        *(int *)(param_1 + 0x68) = iStack_14 - iStack_1c;
      }
      i_val = FUN_004332a0(*(int *)(param_1 + 0x14));
      if ((0 < i_val) && (FUN_00438204(param_1,0,extraout_ECX), *(int *)(param_1 + 0x6c) == 0)) {
        FUN_00436c30(param_1,0,extraout_ECX_00);
      }
    }
  }
  return;
}


/* ==== 00437f20 FUN_00437f20 ==== */

void FUN_00437f20(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  int local_8;
  
  puStack_14 = (undefined1 *)0x437f32;
  local_8 = param_1;
  System__LStrAddRef(param_1);
  puStack_18 = &LAB_00437f8b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  local_c = System__LStrLen(local_8);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),&local_c,4);
  if (0 < local_c) {
    (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),local_8,local_c);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00437f92;
  puStack_18 = (undefined1 *)0x437f8a;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00437f98 FUN_00437f98 ==== */

void FUN_00437f98(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_00438047;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_2;
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),&local_8,4);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),param_1 + 0x10,1);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),param_1 + 0x20,4);
  iVar1 = param_4;
  FUN_00436750(param_1,&local_c);
  FUN_00437f20(local_c,extraout_EDX,extraout_ECX,iVar1);
  iVar2 = iVar1;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = param_4;
    FUN_00437f98(*(int *)(param_1 + 8),local_8 + 1,iVar1,param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00437f98(*(int *)(param_1 + 0xc),local_8,iVar2,param_4);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0043804e;
  puStack_1c = (undefined1 *)0x438046;
  System__LStrClr(&local_c);
  return;
}


/* ==== 00438054 TDockTree.virtual_01c ==== */

void TDockTree_virtual_01c(int param_1,int *param_2)

{
  int i_val;
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar2;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_0043818d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x438089;
  local_c = param_1;
  local_8 = param_2;
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x70,4);
  puStack_34 = (undefined1 *)0x438095;
  local_14 = (int *)System_TObject_Create
                              ((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  puStack_38 = &LAB_0043813c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  i_val = FUN_004332a0(*(int *)(local_c + 0x14));
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_004332b4(*(int *)(local_c + 0x14),j);
      if ((*(char *)(iVar1 + 0x47) == '\0') && (*(int *)(iVar1 + 8) != 0)) {
        (**(code **)(*local_14 + 0x34))(local_14,*(undefined4 *)(iVar1 + 8));
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  local_10 = (**(code **)(*local_14 + 0x14))();
  (**(code **)(*local_8 + 8))(local_8,&local_10,4);
  if (-1 < local_10 + -1) {
    j = 0;
    i_val = local_10;
    do {
      puVar2 = &stack0xfffffffc;
      (**(code **)(*local_14 + 0xc))(local_14,j,&local_18);
      FUN_00437f20(local_18,extraout_EDX,extraout_ECX_00,(int)puVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00438143;
  puStack_38 = (undefined1 *)0x43813b;
  System_TObject_Free(local_14);
  return;
}


/* ==== 0043819c FUN_0043819c ==== */

void FUN_0043819c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xc) == 0) && (param_1 != *(int *)(*(int *)(param_4 + -4) + 100))) {
      if (*(int *)(*(int *)(param_4 + -4) + 100) == *(int *)(param_1 + 0x14)) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(param_4 + -4) + 0x68);
      }
      else {
        *(undefined4 *)(param_1 + 0x20) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x14) + 0x20);
      }
    }
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = param_4;
      FUN_0043819c(*(int *)(param_1 + 8),param_4,param_3,param_4);
      param_3 = iVar1;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0043819c(*(int *)(param_1 + 0xc),param_4,param_3,param_4);
    }
  }
  return;
}


/* ==== 00438204 FUN_00438204 ==== */

void FUN_00438204(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0xfffffffc;
  if (param_2 == 0) {
    param_2 = *(int *)(*(int *)(param_1 + 100) + 8);
  }
  FUN_0043819c(param_2,param_2,param_3,(int)&stack0xfffffffc);
  iVar1 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar1 + 0x74))(*(int **)(param_1 + 0x14),iVar1,puVar2);
  return;
}


/* ==== 00438264 FUN_00438264 ==== */

void FUN_00438264(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  HDC pHVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 0x60) = param_2;
  pHVar3 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0x14));
  FUN_00438bc0(DAT_004ac74c,pHVar3);
  pHVar3 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0x14));
  *(HWND *)(param_1 + 0x5c) = pHVar3;
  pHVar4 = GetDCEx(pHVar3,(HRGN)0x0,0x412);
  *(HDC *)(param_1 + 0x58) = pHVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  FUN_00438374(param_1);
  return;
}


/* ==== 004382c4 FUN_004382c4 ==== */

void FUN_004382c4(int param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  
  FUN_00438bc0(DAT_004ac74c,(HWND)0x0);
  FUN_00438374(param_1);
  ReleaseDC(*(HWND *)(param_1 + 0x5c),*(HDC *)(param_1 + 0x58));
  iVar1 = *(int *)(param_1 + 0x60);
  if (*(char *)(*(int *)(iVar1 + 0x14) + 0x10) == '\x01') {
    iVar2 = (int)*(uint *)(param_1 + 0xc) >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
    }
    *(int *)(iVar1 + 0x20) = iVar2 + *(int *)(param_1 + 0x54);
  }
  else {
    iVar2 = (int)*(uint *)(param_1 + 0xc) >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
    }
    *(int *)(iVar1 + 0x20) = iVar2 + *(int *)(param_1 + 0x50);
  }
  FUN_00438204(param_1,*(int *)(*(int *)(param_1 + 0x60) + 0x14),extraout_ECX);
  FUN_00436c30(param_1,*(int *)(*(int *)(param_1 + 0x60) + 0x14),extraout_ECX_00);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


/* ==== 0043833c FUN_0043833c ==== */

void FUN_0043833c(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar1 = FUN_004332a0(*(int *)(param_1 + 0x14));
    if (0 < iVar1) {
      FUN_00436c30(param_1,0,extraout_ECX);
    }
  }
  return;
}


/* ==== 00438374 FUN_00438374 ==== */

void FUN_00438374(int param_1)

{
  int iVar1;
  HGDIOBJ h_val;
  undefined4 x_val;
  undefined4 y_val;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(iVar1 + 0x14) + 0x10) == '\x01') {
      x_val = FUN_004365ac(iVar1,'\x02');
      y_val = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (y_val < 0) {
        y_val = y_val + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      y_val = *(int *)(param_1 + 0x54) - y_val;
      local_10 = FUN_00436618(*(int *)(param_1 + 0x60),'\x02');
      local_10 = local_10 + x_val;
      local_c = y_val + *(int *)(param_1 + 0xc);
    }
    else {
      x_val = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (x_val < 0) {
        x_val = x_val + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      x_val = *(int *)(param_1 + 0x50) - x_val;
      y_val = FUN_004365ac(iVar1,'\x01');
      local_10 = x_val + *(int *)(param_1 + 0xc);
      local_c = FUN_00436618(*(int *)(param_1 + 0x60),'\x01');
      local_c = local_c + y_val;
    }
    h_val = (HGDIOBJ)FUN_00418a18(*(int *)(param_1 + 0x10));
    h_val = SelectObject(*(HDC *)(param_1 + 0x58),h_val);
    PatBlt(*(HDC *)(param_1 + 0x58),x_val,y_val,local_10 - x_val,local_c - y_val,0x5a0049);
    SelectObject(*(HDC *)(param_1 + 0x58),h_val);
  }
  return;
}


/* ==== 00438460 FUN_00438460 ==== */

int FUN_00438460(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 00438468 FUN_00438468 ==== */

void FUN_00438468(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  
  if ((((param_1 != *(int *)(param_4 + -4)) &&
       (param_3 = *(int *)(*(int *)(param_4 + -4) + 0x14),
       *(char *)(*(int *)(param_1 + 0x14) + 0x10) == *(char *)(param_3 + 0x10))) &&
      (*(int *)(*(int *)(param_4 + -4) + 0x20) < *(int *)(param_1 + 0x20))) &&
     ((*(int *)(param_1 + 4) == 0 ||
      ((*(int *)(param_1 + 4) != 0 && (*(char *)(*(int *)(param_1 + 4) + 0x47) != '\0')))))) {
    iVar1 = FUN_00438460(*(int *)(param_4 + -8),*(int *)(param_1 + 0x20));
    *(int *)(param_4 + -8) = iVar1;
    param_3 = extraout_ECX;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = param_4;
    FUN_00438468(*(int *)(param_1 + 0xc),param_4,param_3,param_4);
    param_3 = iVar1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00438468(*(int *)(param_1 + 8),param_4,param_3,param_4);
  }
  return;
}


/* ==== 004384e4 FUN_004384e4 ==== */

int FUN_004384e4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  int local_c;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    local_c = FUN_00436564(param_2);
    local_c = local_c + *(int *)(param_2 + 0x20);
    param_3 = extraout_ECX;
  }
  else {
    local_c = *(int *)(*(int *)(param_2 + 0xc) + 0x20);
  }
  FUN_00438468(*(int *)(*(int *)(param_1 + 100) + 8),param_2,param_3,(int)&stack0xfffffffc);
  return local_c;
}


/* ==== 00438528 FUN_00438528 ==== */

undefined4 FUN_00438528(int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 uVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined3 uVar3;
  
  uVar3 = (undefined3)((uint)unaff_EBX >> 8);
  uVar2 = CONCAT31(uVar3,4);
  if (param_2 != 0) {
    FUN_0042e13c(param_1,&local_14);
    FUN_0042e13c(param_2,&local_24);
    if (((local_20 < local_10) || (local_18 <= local_8)) || (local_c < local_1c)) {
      if (((local_24 < local_14) || (local_1c <= local_c)) || (local_8 < local_18)) {
        iVar1 = local_20 + local_18 >> 1;
        if (iVar1 < 0) {
          iVar1 = iVar1 + (uint)((local_20 + local_18 & 1U) != 0);
        }
        if (iVar1 <= local_10) {
          uVar2 = CONCAT31(uVar3,2);
        }
      }
      else {
        uVar2 = CONCAT31(uVar3,3);
      }
    }
    else {
      uVar2 = CONCAT31(uVar3,1);
    }
  }
  return uVar2;
}


/* ==== 004385a4 FUN_004385a4 ==== */

void FUN_004385a4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  int local_14 [2];
  
  if ((char)param_3 == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  else {
    iVar1 = FUN_00436bc8((int)param_1,param_2,param_3);
    if (iVar1 == 0) {
      Classes_Point(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),local_14);
      iVar1 = FUN_00437370((int)param_1,local_14,&uStack_18);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
      uVar2 = FUN_00438528(param_2,iVar1);
      (**(code **)(*param_1 + 8))(param_1,param_2,uVar2,iVar1);
    }
  }
  return;
}


/* ==== 00438610 FUN_00438610 ==== */

void FUN_00438610(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar3;
  int in_stack_00000004;
  
  piVar3 = (int *)(in_stack_00000004 + -4);
  iVar1 = *(int *)(*piVar3 + 0x18);
  if (*(char *)(*(int *)(*(int *)(*piVar3 + 0x60) + 0x14) + 0x10) == '\x01') {
    iVar2 = FUN_004365ac(*(int *)(*piVar3 + 0x60),'\x01');
    if (*(int *)(*piVar3 + 0x54) <= iVar2 + iVar1) {
      *(int *)(*piVar3 + 0x54) = iVar2 + iVar1;
    }
    iVar2 = FUN_004384e4(*piVar3,*(int *)(*piVar3 + 0x60),extraout_ECX);
    if (iVar2 - iVar1 <= *(int *)(*piVar3 + 0x54)) {
      *(int *)(*piVar3 + 0x54) = iVar2 - iVar1;
    }
  }
  else {
    iVar2 = FUN_004365ac(*(int *)(*piVar3 + 0x60),'\x02');
    if (*(int *)(*piVar3 + 0x50) <= iVar2 + iVar1) {
      *(int *)(*piVar3 + 0x50) = iVar2 + iVar1;
    }
    iVar2 = FUN_004384e4(*piVar3,*(int *)(*piVar3 + 0x60),extraout_ECX_00);
    if (iVar2 - iVar1 <= *(int *)(*piVar3 + 0x50)) {
      *(int *)(*piVar3 + 0x50) = iVar2 - iVar1;
    }
  }
  return;
}


/* ==== 00438a84 FUN_00438a84 ==== */

int * FUN_00438a84(int *param_1,char param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 5;
  if (((*(int *)PTR_DAT_004aba10 == 2) && (3 < *(int *)PTR_DAT_004ab748)) ||
     ((*(int *)PTR_DAT_004aba10 == 1 &&
      ((4 < *(int *)PTR_DAT_004ab748 ||
       ((*(int *)PTR_DAT_004ab748 == 4 && (9 < *(int *)PTR_DAT_004ab8fc)))))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0xd) = uVar1;
  FUN_00438be8((int)param_1,0);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00438b14 TMouse.Destroy ==== */

void TMouse_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00438bc0(piVar1,(HWND)0x0);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00438b44 FUN_00438b44 ==== */

void FUN_00438b44(void)

{
  GetCapture();
  return;
}


/* ==== 00438b4c FUN_00438b4c ==== */

void FUN_00438b4c(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)PTR_DAT_004ab760)();
  *(bool *)(param_1 + 0xc) = iVar1 != 0;
  return;
}


/* ==== 00438b68 FUN_00438b68 ==== */

int FUN_00438b68(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)PTR_DAT_004ab760)();
  iVar2 = -iVar1;
  *(bool *)(param_1 + 0x20) = iVar1 != 0;
  if (iVar1 != 0) {
    iVar2 = SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
  }
  return iVar2;
}


/* ==== 00438b98 FUN_00438b98 ==== */

void FUN_00438b98(int param_1,undefined4 param_2,LRESULT param_3)

{
  HWND pHVar1;
  LRESULT LStack_8;
  
  LStack_8 = param_3;
  pHVar1 = FUN_00407148((UINT *)(param_1 + 0x1c),(UINT *)(param_1 + 0x24),(UINT *)(param_1 + 0x14),
                        (LRESULT *)(param_1 + 0x10),&LStack_8);
  *(HWND *)(param_1 + 0x18) = pHVar1;
  *(bool *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c) != 0;
  return;
}


/* ==== 00438bc0 FUN_00438bc0 ==== */

void FUN_00438bc0(undefined4 param_1,HWND wnd)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)FUN_00438b44();
  if (wnd != pHVar1) {
    if (wnd == (HWND)0x0) {
      ReleaseCapture();
    }
    else {
      SetCapture(wnd);
    }
  }
  return;
}


/* ==== 00438be8 FUN_00438be8 ==== */

void FUN_00438be8(int param_1,int param_2)

{
  LRESULT LVar1;
  LRESULT extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 == 0) {
    FUN_00438b4c(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_00438b68(param_1);
      return;
    }
    FUN_00438b98(param_1,extraout_EDX,extraout_ECX);
  }
  else if ((param_2 == 0x68) && (*(char *)(param_1 + 0x20) != '\0')) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      LVar1 = SendMessageA(*(HWND *)(param_1 + 0x18),*(UINT *)(param_1 + 0x14),0,0);
      *(LRESULT *)(param_1 + 0x10) = LVar1;
    }
    else {
      SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
    }
  }
  return;
}


/* ==== 00438c4c FUN_00438c4c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438c4c(void)

{
  UINT uMode;
  HMODULE hModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  if (PTR_DAT_004aba14[8] != '\0') {
    uMode = SetErrorMode(0x8000);
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (DAT_004ac790 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("USER32");
      DAT_004ac790 = GetProcAddress(hModule,"WINNLSEnableIME");
    }
    if (DAT_004aa818 == (HMODULE)0x0) {
      DAT_004aa818 = LoadLibraryA("IMM32.DLL");
      if (DAT_004aa818 != (HMODULE)0x0) {
        DAT_004ac794 = GetProcAddress(DAT_004aa818,"ImmGetContext");
        DAT_004ac798 = GetProcAddress(DAT_004aa818,"ImmReleaseContext");
        DAT_004ac79c = GetProcAddress(DAT_004aa818,"ImmGetConversionStatus");
        DAT_004ac7a0 = GetProcAddress(DAT_004aa818,"ImmSetConversionStatus");
        DAT_004ac7a4 = GetProcAddress(DAT_004aa818,"ImmSetOpenStatus");
        _DAT_004ac7a8 = GetProcAddress(DAT_004aa818,"ImmSetCompositionWindow");
        _DAT_004ac7ac = GetProcAddress(DAT_004aa818,"ImmSetCompositionFontA");
        _DAT_004ac7b0 = GetProcAddress(DAT_004aa818,"ImmGetCompositionStringA");
        DAT_004ac7b4 = GetProcAddress(DAT_004aa818,"ImmIsIME");
        _DAT_004ac7b8 = GetProcAddress(DAT_004aa818,"ImmNotifyIME");
      }
    }
    *in_FS_OFFSET = uStack_18;
    uStack_18 = 0x438db1;
    SetErrorMode(uMode);
    return;
  }
  return;
}


/* ==== 00438eb4 FUN_00438eb4 ==== */

undefined4 FUN_00438eb4(void)

{
  undefined4 uVar1;
  
  if (DAT_004ac790 != (code *)0x0) {
    uVar1 = (*DAT_004ac790)();
    return uVar1;
  }
  return 0;
}


/* ==== 00438ed0 FUN_00438ed0 ==== */

void FUN_00438ed0(undefined4 param_1,char param_2)

{
  int iVar1;
  
  if ((PTR_DAT_004aba14[8] != '\0') && (param_2 != '\x03')) {
    if (param_2 == '\0') {
      FUN_00438eb4();
    }
    else {
      FUN_00438eb4();
      if (DAT_004aa818 != 0) {
        iVar1 = (*DAT_004ac794)();
        if (iVar1 != 0) {
          (*DAT_004ac79c)();
          if (param_2 == '\x01') {
            (*DAT_004ac7a4)();
          }
          else if (param_2 == '\x02') {
            (*DAT_004ac7a4)();
          }
          else {
            (*DAT_004ac7a4)();
            (*DAT_004ac79c)();
          }
          (*DAT_004ac7a0)();
          (*DAT_004ac798)();
        }
      }
    }
  }
  return;
}


/* ==== 00438fac FUN_00438fac ==== */

undefined4 FUN_00438fac(void)

{
  undefined4 uVar1;
  
  if (DAT_004aa818 != 0) {
    uVar1 = (*DAT_004ac7b4)();
    return uVar1;
  }
  return 0;
}


/* ==== 00438fc0 FUN_00438fc0 ==== */

void FUN_00438fc0(void)

{
  System_TObject_Free(*(int **)PTR_DAT_004ab8ac);
  *(undefined4 *)PTR_DAT_004ab8ac = 0;
  System_TObject_Free(*(int **)PTR_DAT_004ab9f8);
  *(undefined4 *)PTR_DAT_004ab9f8 = 0;
  System_TObject_Free(DAT_004ac74c);
  DAT_004ac74c = (int *)0x0;
  System_TObject_Free(DAT_004ac78c);
  GlobalDeleteAtom(DAT_004ac75a);
  GlobalDeleteAtom(DAT_004ac758);
  if (DAT_004aa818 != (HMODULE)0x0) {
    FreeLibrary(DAT_004aa818);
  }
  return;
}


/* ==== 00439034 FUN_00439034 ==== */

void FUN_00439034(void)

{
  byte *string;
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  byte local_38 [32];
  DWORD current_process_id;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  DWORD current_thread_id;
  undefined1 local_4;
  
  uVar2 = 0;
  current_process_id = GetCurrentProcessId();
  local_14 = 0;
  string = FUN_004091ec(local_38,(byte *)"Delphi%.8X",&current_process_id,uVar2);
  DAT_004ac758 = GlobalAddAtomA((LPCSTR)string);
  uVar2 = 1;
  local_10 = DAT_004ac4dc;
  local_c = 0;
  current_thread_id = GetCurrentThreadId();
  local_4 = 0;
  string = FUN_004091ec(local_38,(byte *)"ControlOfs%.8X%.8X",&local_10,uVar2);
  DAT_004ac75a = GlobalAddAtomA((LPCSTR)string);
  DAT_004ac78c = FUN_004105f8((int *)&DAT_0040ead0,'\x01',extraout_ECX);
  FUN_00438c4c();
  DAT_004ac74c = FUN_00438a84((int *)&LAB_0042b878,'\x01',extraout_ECX_00);
  piVar1 = TScreen_virtual_02c((int *)&PTR_TPersistent_virtual_000_00443fb8,'\x01',(int *)0x0);
  *(int **)PTR_DAT_004ab9f8 = piVar1;
  piVar1 = TApplication_virtual_02c((int *)&PTR_TPersistent_virtual_000_00444174,'\x01',(int *)0x0);
  *(int **)PTR_DAT_004ab8ac = piVar1;
  FUN_00444554();
  FUN_0044d814(*(int *)PTR_DAT_004ab8ac,'\x01');
  FUN_0040fcbc((int)&DAT_004299f0,0x42bb3c,0x42bb2c);
  return;
}


/* ==== 0043959c TContainedAction.Destroy ==== */

void TContainedAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if (piVar1[0x13] != 0) {
    FUN_00439990(piVar1[0x13],(int)piVar1);
  }
  TBasicAction_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004395d0 FUN_004395d0 ==== */

int FUN_004395d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = Classes_TList_IndexOf(*(int *)(*(int *)(param_1 + 0x4c) + 0x24),param_1);
    return iVar1;
  }
  return -1;
}


/* ==== 004395ec TContainedAction.dynamic_fff3 ==== */

int TContainedAction_dynamic_fff3(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    return *(int *)(param_1 + 0x4c);
  }
  iVar1 = TComponent_dynamic_fff3();
  return iVar1;
}


/* ==== 004395fc TContainedAction.dynamic_fff2 ==== */

undefined4 TContainedAction_dynamic_fff2(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  uVar1 = TComponent_dynamic_fff2();
  return uVar1;
}


/* ==== 0043960c TContainedAction.virtual_014 ==== */

void TContainedAction_virtual_014(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  TComponent_virtual_014(param_1,param_2,param_3);
  piVar1 = (int *)param_2[0xb];
  uVar2 = System__IsClass(piVar1,(int)&PTR_TPersistent_virtual_000_00439364);
  if ((char)uVar2 != '\0') {
    FUN_004396b4((int)param_1,(int)piVar1);
  }
  return;
}


/* ==== 00439640 FUN_00439640 ==== */

void FUN_00439640(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_004395d0(param_1);
  if (-1 < iVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x24);
    iVar2 = piVar1[2];
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    if (iVar3 != param_2) {
      Classes_TList_Delete(piVar1,iVar3);
      FUN_0041032c(*(int **)(*(int *)(param_1 + 0x4c) + 0x24),param_2,param_1);
    }
  }
  return;
}


/* ==== 00439688 TContainedAction.SetCategory ==== */

void TContainedAction_SetCategory(int param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  System__LStrCmp(param_2,*(uint **)(param_1 + 0x48));
  if (!(bool)in_ZF) {
    System__LStrAsg((int *)(param_1 + 0x48),param_2);
    if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x30))();
    }
  }
  return;
}


/* ==== 004396b4 FUN_004396b4 ==== */

void FUN_004396b4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_00439990(iVar1,param_1);
    }
    if (param_2 != 0) {
      FUN_00439970(param_2,param_1);
    }
  }
  return;
}


/* ==== 004396dc TContainedAction.dynamic_fff9 ==== */

void TContainedAction_dynamic_fff9(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00439364);
    if ((char)uVar1 != '\0') {
      FUN_004396b4(param_1,(int)param_2);
    }
  }
  return;
}


/* ==== 00439708 TContainedAction.dynamic_fff0 ==== */

undefined4 TContainedAction_dynamic_fff0(int param,undefined4 param_2,uint param_3)

{
  uint uVar1;
  LRESULT LVar2;
  uint extraout_ECX;
  
  if ((((*(int **)(param + 0x4c) == (int *)0x0) ||
       (uVar1 = System__CallDynaInst(*(int **)(param + 0x4c),param,param_3), param_3 = extraout_ECX,
       (char)uVar1 == '\0')) &&
      (uVar1 = FUN_0044e44c(*(int *)PTR_DAT_004ab8ac,param,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = TBasicAction_dynamic_fff0(param), (char)uVar1 == '\0')) {
    LVar2 = FUN_0042b968(0xb040,0,param);
    uVar1 = 0;
    if (LVar2 != 1) {
      return 0;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* ==== 00439760 TContainedAction.virtual_044 ==== */

undefined4 TContainedAction_virtual_044(int param,undefined4 param_2,uint param_3)

{
  uint uVar1;
  LRESULT LVar2;
  uint extraout_ECX;
  
  if ((((*(int **)(param + 0x4c) == (int *)0x0) ||
       (uVar1 = System__CallDynaInst(*(int **)(param + 0x4c),param,param_3), param_3 = extraout_ECX,
       (char)uVar1 == '\0')) &&
      (uVar1 = FUN_0044e474(*(int *)PTR_DAT_004ab8ac,param,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = TBasicAction_virtual_044(param), (char)uVar1 == '\0')) {
    LVar2 = FUN_0042b968(0xb03f,0,param);
    uVar1 = 0;
    if (LVar2 != 1) {
      return 0;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* ==== 004397b8 TCustomActionList.virtual_02c ==== */

int * TCustomActionList_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[9] = iVar1;
  iVar1 = System_TObject_Create((int *)&DAT_0043a068,'\x01',extraout_ECX_01);
  param_1[10] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0043991c;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00439820 TCustomActionList.Destroy ==== */

void TCustomActionList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[10]);
  while (0 < (int)((undefined4 *)piVar1[9])[2]) {
    piVar2 = (int *)FUN_00410398((undefined4 *)piVar1[9]);
    System_TObject_Free(piVar2);
  }
  System_TObject_Free((int *)piVar1[9]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00439870 TCustomActionList.dynamic_fffd ==== */

void TCustomActionList_dynamic_fffd
               (int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5)

{
  int iVar1;
  int i_val;
  int j;
  
  i_val = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x24),j);
      if (*(int *)(iVar1 + 4) == param_2) {
        (*(code *)param_4)(param_5,iVar1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 004398b8 TCustomActionList.dynamic_fffa ==== */

void TCustomActionList_dynamic_fffa(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = Classes_TList_IndexOf(*(int *)(param_1 + 0x24),(int)param_2);
  if (-1 < iVar1) {
    iVar1 = System__AsClass(param_2,(int)&PTR_TPersistent_virtual_000_00439204);
    FUN_00439640(iVar1,param_3);
  }
  return;
}


/* ==== 004398e8 FUN_004398e8 ==== */

void FUN_004398e8(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0043b2a0(*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_2 != 0) {
    FUN_0043b2e4(param_2,*(int *)(param_1 + 0x28));
    FUN_0041564c(*(int *)(param_1 + 0x2c),param_1,extraout_ECX);
  }
  return;
}


/* ==== 00439928 TCustomActionList.virtual_010 ==== */

void TCustomActionList_virtual_010(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  
  TComponent_virtual_010(param_1,(int)param_2,param_3);
  if (param_3 == '\x01') {
    if (param_2 == *(int **)(param_1 + 0x2c)) {
      FUN_004398e8(param_1,0);
    }
    else {
      uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00439204);
      if ((char)uVar1 != '\0') {
        FUN_00439990(param_1,(int)param_2);
      }
    }
  }
  return;
}


/* ==== 00439970 FUN_00439970 ==== */

void FUN_00439970(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  Classes_TList_Add(*(int **)(param_1 + 0x24),param_2);
  *(int *)(param_2 + 0x4c) = param_1;
  FUN_0041564c(param_2,param_1,extraout_ECX);
  return;
}


/* ==== 00439990 FUN_00439990 ==== */

void FUN_00439990(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00410448(*(int **)(param_1 + 0x24),param_2);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 0x4c) = 0;
  }
  return;
}


/* ==== 004399ac TCustomActionList.virtual_030 ==== */

void TCustomActionList_virtual_030(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int i_val;
  int j;
  
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
  }
  i_val = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x24),j);
      (**(code **)(*piVar1 + 0x30))();
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    uVar2 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_00442fd4);
    if (((char)uVar2 != '\0') && (piVar1[0x8e] != 0)) {
      (**(code **)(*(int *)piVar1[0x8e] + 0xc))();
    }
  }
  return;
}


/* ==== 00439a14 FUN_00439a14 ==== */

undefined4 FUN_00439a14(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int j;
  int i_val;
  
  bVar1 = FUN_0044476c(*(uint *)(param_2 + 8));
  sVar2 = FUN_0043c880(*(short *)(param_2 + 4),bVar1);
  i_val = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar3 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x24),j);
      if (sVar2 == *(short *)(iVar3 + 0x68)) {
        piVar4 = (int *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x24),j);
        uVar5 = System__CallDynaInst(piVar4,extraout_EDX,extraout_ECX);
        return uVar5;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00439a74 TCustomActionList.dynamic_fff4 ==== */

uint TCustomActionList_dynamic_fff4(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x3a) != 0) {
    param_1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 00439a94 TCustomActionList.dynamic_fff1 ==== */

uint TCustomActionList_dynamic_fff1(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x42) != 0) {
    param_1 = (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 00439ab4 TActionLink.virtual_020 ==== */

void TActionLink_virtual_020(int param_1)

{
  System__IsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  return;
}


/* ==== 00439ac8 TActionLink.virtual_024 ==== */

void TActionLink_virtual_024(int param_1)

{
  System__IsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  return;
}


/* ==== 00439adc TActionLink.virtual_028 ==== */

void TActionLink_virtual_028(int param_1)

{
  System__IsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  return;
}


/* ==== 00439af0 TActionLink.virtual_02c ==== */

void TActionLink_virtual_02c(int param_1)

{
  System__IsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  return;
}


/* ==== 00439b04 TActionLink.virtual_030 ==== */

void TActionLink_virtual_030(int param_1)

{
  System__IsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  return;
}


/* ==== 00439b18 TActionLink.virtual_034 ==== */

void TActionLink_virtual_034(int param_1)

{
  System__IsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  return;
}


/* ==== 00439b2c TActionLink.virtual_038 ==== */

void TActionLink_virtual_038(int param_1)

{
  System__IsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  return;
}


/* ==== 00439b40 TActionLink.virtual_03c ==== */

void TActionLink_virtual_03c(int param_1)

{
  System__IsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  return;
}


/* ==== 00439b54 TActionLink.virtual_040 ==== */

void TActionLink_virtual_040(void)

{
  return;
}


/* ==== 00439b58 TActionLink.virtual_044 ==== */

void TActionLink_virtual_044(void)

{
  return;
}


/* ==== 00439b5c TActionLink.virtual_048 ==== */

void TActionLink_virtual_048(void)

{
  return;
}


/* ==== 00439b60 TActionLink.virtual_04c ==== */

void TActionLink_virtual_04c(void)

{
  return;
}


/* ==== 00439b64 TActionLink.virtual_050 ==== */

void TActionLink_virtual_050(void)

{
  return;
}


/* ==== 00439b68 TActionLink.virtual_054 ==== */

void TActionLink_virtual_054(void)

{
  return;
}


/* ==== 00439b6c TActionLink.virtual_058 ==== */

void TActionLink_virtual_058(void)

{
  return;
}


/* ==== 00439b70 TActionLink.virtual_05c ==== */

void TActionLink_virtual_05c(void)

{
  return;
}


/* ==== 00439b74 TCustomAction.virtual_02c ==== */

int * TCustomAction_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TBasicAction_virtual_02c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x59) = 1;
  param_1[0x19] = -1;
  *(undefined1 *)((int)param_1 + 0x6a) = 1;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00439bbc TCustomAction.Destroy ==== */

void TCustomAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[0x1e]);
  System_TObject_Free((int *)piVar1[0x1f]);
  TContainedAction_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00439bf4 TCustomAction.virtual_000 ==== */

void TCustomAction_virtual_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var;
  undefined4 extraout_EDX_01;
  
  uVar1 = System__IsClass(param_2,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_000(param_1,param_2);
  }
  else {
    FUN_00439c70(param_2,(uint *)param_1[0x15]);
    FUN_00439cd8(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0x16]));
    FUN_00439d30(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x59)));
    FUN_00439d88(param_2,param_1[0x17]);
    THintAction_SetHint(param_2,(uint *)param_1[0x18]);
    FUN_00439e48(param_2,param_1[0x19]);
    FUN_00439ea0(param_2,CONCAT22(extraout_var,(short)param_1[0x1a]));
    FUN_00439efc(param_2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x6a)));
  }
  return;
}


/* ==== 00439c70 FUN_00439c70 ==== */

void FUN_00439c70(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  undefined1 in_ZF;
  
  System__LStrCmp(param_2,(uint *)param_1[0x15]);
  if (!(bool)in_ZF) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
        uVar2 = System__IsClass(piVar1,(int)&PTR_TBasicActionLink_virtual_000_00439530);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    System__LStrAsg(param_1 + 0x15,param_2);
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 00439cd8 FUN_00439cd8 ==== */

void FUN_00439cd8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  
  if ((char)param_2 != (char)param_1[0x16]) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
        uVar2 = System__IsClass(piVar1,(int)&PTR_TBasicActionLink_virtual_000_00439530);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x44))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    *(char *)(param_1 + 0x16) = (char)param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 00439ea0 FUN_00439ea0 ==== */

void FUN_00439ea0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  
  if ((short)param_2 != (short)param_1[0x1a]) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
        uVar2 = System__IsClass(piVar1,(int)&PTR_TBasicActionLink_virtual_000_00439530);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x58))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    *(short *)(param_1 + 0x1a) = (short)param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 00439efc FUN_00439efc ==== */

void FUN_00439efc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  
  if ((char)param_2 != *(char *)((int)param_1 + 0x6a)) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
        uVar2 = System__IsClass(piVar1,(int)&PTR_TBasicActionLink_virtual_000_00439530);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)Classes_TList_Get((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x5c))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    *(char *)((int)param_1 + 0x6a) = (char)param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 00439f54 TCustomAction.virtual_018 ==== */

void TCustomAction_virtual_018(int *param_1,uint *param_2)

{
  bool bVar1;
  undefined1 in_ZF;
  
  System__LStrCmp((uint *)param_1[2],(uint *)param_1[0x15]);
  if (((bool)in_ZF) && ((param_1[1] == 0 || ((*(byte *)(param_1[1] + 0x20) & 1) == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  TComponent_virtual_018(param_1,param_2);
  if ((bVar1) && (*(int *)(param_1[0x10] + 8) == 0)) {
    FUN_00439c70(param_1,param_2);
  }
  return;
}


/* ==== 00439fa0 TCustomAction.dynamic_ffef ==== */

uint TCustomAction_dynamic_ffef(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_8;
  undefined3 uStack_7;
  
  _local_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0x72) != 0) {
    param_1 = (**(code **)(param_1 + 0x70))(*(undefined4 *)(param_1 + 0x74),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),local_8);
}


/* ==== 00439fc0 TCustomAction.dynamic_fff0 ==== */

undefined4 TCustomAction_dynamic_fff0(int *param)

{
  undefined4 uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param + 0x44))();
  if (*(char *)((int)param + 0x59) != '\0') {
    uVar1 = TContainedAction_dynamic_fff0((int)param,extraout_EDX,extraout_ECX);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00439fe4 FUN_00439fe4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439fe4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac7bc = _DAT_004ac7bc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


