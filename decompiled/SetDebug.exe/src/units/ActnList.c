/* SetDebug.exe — units/ActnList.pas: 80 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0042dc64 TDockTree.virtual_020 ==== */

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
     (i_val = FUN_004291ac(*(int *)(param_1 + 0x14)), 0 < i_val)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),&iStack_1c);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x84))(*(int **)(param_1 + 0x14),&iStack_1c);
    if ((param_2 != '\0') ||
       (uVar1 = FUN_00407a5c(&iStack_1c,(int *)(param_1 + 0x20),0x10), (char)uVar1 == '\0')) {
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
      i_val = FUN_004291ac(*(int *)(param_1 + 0x14));
      if ((0 < i_val) && (FUN_0042e050(param_1,0,extraout_ECX), *(int *)(param_1 + 0x6c) == 0)) {
        FUN_0042ca7c(param_1,0,extraout_ECX_00);
      }
    }
  }
  return;
}


/* ==== 0042dd6c FUN_0042dd6c ==== */

void FUN_0042dd6c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  int local_8;
  
  puStack_14 = (undefined1 *)0x42dd7e;
  local_8 = param_1;
  FUN_00403dec(param_1);
  puStack_18 = &LAB_0042ddd7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  local_c = FUN_00403c38(local_8);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),&local_c,4);
  if (0 < local_c) {
    (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),local_8,local_c);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042ddde;
  puStack_18 = (undefined1 *)0x42ddd6;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0042dde4 FUN_0042dde4 ==== */

void FUN_0042dde4(int param_1,int param_2,undefined4 param_3,int param_4)

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
  puStack_1c = &LAB_0042de93;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_2;
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),&local_8,4);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),param_1 + 0x10,1);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),param_1 + 0x20,4);
  iVar1 = param_4;
  FUN_0042c59c(param_1,&local_c);
  FUN_0042dd6c(local_c,extraout_EDX,extraout_ECX,iVar1);
  iVar2 = iVar1;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = param_4;
    FUN_0042dde4(*(int *)(param_1 + 8),local_8 + 1,iVar1,param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0042dde4(*(int *)(param_1 + 0xc),local_8,iVar2,param_4);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042de9a;
  puStack_1c = (undefined1 *)0x42de92;
  FUN_004039b8(&local_c);
  return;
}


/* ==== 0042dea0 TDockTree.virtual_01c ==== */

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
  puStack_2c = &LAB_0042dfd9;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x42ded5;
  local_c = param_1;
  local_8 = param_2;
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x70,4);
  puStack_34 = (undefined1 *)0x42dee1;
  local_14 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_virtual_000_0040dcac,'\x01',extraout_ECX);
  puStack_38 = &LAB_0042df88;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  i_val = FUN_004291ac(*(int *)(local_c + 0x14));
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_004291c0(*(int *)(local_c + 0x14),j);
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
      FUN_0042dd6c(local_18,extraout_EDX,extraout_ECX_00,(int)puVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0042df8f;
  puStack_38 = (undefined1 *)0x42df87;
  FUN_00402d14(local_14);
  return;
}


/* ==== 0042dfe8 FUN_0042dfe8 ==== */

void FUN_0042dfe8(int param_1,undefined4 param_2,int param_3,int param_4)

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
      FUN_0042dfe8(*(int *)(param_1 + 8),param_4,param_3,param_4);
      param_3 = iVar1;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0042dfe8(*(int *)(param_1 + 0xc),param_4,param_3,param_4);
    }
  }
  return;
}


/* ==== 0042e050 FUN_0042e050 ==== */

void FUN_0042e050(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0xfffffffc;
  if (param_2 == 0) {
    param_2 = *(int *)(*(int *)(param_1 + 100) + 8);
  }
  FUN_0042dfe8(param_2,param_2,param_3,(int)&stack0xfffffffc);
  iVar1 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar1 + 0x74))(*(int **)(param_1 + 0x14),iVar1,puVar2);
  return;
}


/* ==== 0042e0b0 FUN_0042e0b0 ==== */

void FUN_0042e0b0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  HDC pHVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 0x60) = param_2;
  pHVar3 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x14));
  FUN_0042ea0c(DAT_0044773c,pHVar3);
  pHVar3 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x14));
  *(HWND *)(param_1 + 0x5c) = pHVar3;
  pHVar4 = GetDCEx(pHVar3,(HRGN)0x0,0x412);
  *(HDC *)(param_1 + 0x58) = pHVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  FUN_0042e1c0(param_1);
  return;
}


/* ==== 0042e110 FUN_0042e110 ==== */

void FUN_0042e110(int param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  
  FUN_0042ea0c(DAT_0044773c,(HWND)0x0);
  FUN_0042e1c0(param_1);
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
  FUN_0042e050(param_1,*(int *)(*(int *)(param_1 + 0x60) + 0x14),extraout_ECX);
  FUN_0042ca7c(param_1,*(int *)(*(int *)(param_1 + 0x60) + 0x14),extraout_ECX_00);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


/* ==== 0042e188 FUN_0042e188 ==== */

void FUN_0042e188(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar1 = FUN_004291ac(*(int *)(param_1 + 0x14));
    if (0 < iVar1) {
      FUN_0042ca7c(param_1,0,extraout_ECX);
    }
  }
  return;
}


/* ==== 0042e1c0 FUN_0042e1c0 ==== */

void FUN_0042e1c0(int param_1)

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
      x_val = FUN_0042c3f8(iVar1,'\x02');
      y_val = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (y_val < 0) {
        y_val = y_val + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      y_val = *(int *)(param_1 + 0x54) - y_val;
      local_10 = FUN_0042c464(*(int *)(param_1 + 0x60),'\x02');
      local_10 = local_10 + x_val;
      local_c = y_val + *(int *)(param_1 + 0xc);
    }
    else {
      x_val = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (x_val < 0) {
        x_val = x_val + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      x_val = *(int *)(param_1 + 0x50) - x_val;
      y_val = FUN_0042c3f8(iVar1,'\x01');
      local_10 = x_val + *(int *)(param_1 + 0xc);
      local_c = FUN_0042c464(*(int *)(param_1 + 0x60),'\x01');
      local_c = local_c + y_val;
    }
    h_val = (HGDIOBJ)FUN_00416d90(*(int *)(param_1 + 0x10));
    h_val = SelectObject(*(HDC *)(param_1 + 0x58),h_val);
    PatBlt(*(HDC *)(param_1 + 0x58),x_val,y_val,local_10 - x_val,local_c - y_val,0x5a0049);
    SelectObject(*(HDC *)(param_1 + 0x58),h_val);
  }
  return;
}


/* ==== 0042e2ac FUN_0042e2ac ==== */

int FUN_0042e2ac(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 0042e2b4 FUN_0042e2b4 ==== */

void FUN_0042e2b4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  
  if ((((param_1 != *(int *)(param_4 + -4)) &&
       (param_3 = *(int *)(*(int *)(param_4 + -4) + 0x14),
       *(char *)(*(int *)(param_1 + 0x14) + 0x10) == *(char *)(param_3 + 0x10))) &&
      (*(int *)(*(int *)(param_4 + -4) + 0x20) < *(int *)(param_1 + 0x20))) &&
     ((*(int *)(param_1 + 4) == 0 ||
      ((*(int *)(param_1 + 4) != 0 && (*(char *)(*(int *)(param_1 + 4) + 0x47) != '\0')))))) {
    iVar1 = FUN_0042e2ac(*(int *)(param_4 + -8),*(int *)(param_1 + 0x20));
    *(int *)(param_4 + -8) = iVar1;
    param_3 = extraout_ECX;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = param_4;
    FUN_0042e2b4(*(int *)(param_1 + 0xc),param_4,param_3,param_4);
    param_3 = iVar1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0042e2b4(*(int *)(param_1 + 8),param_4,param_3,param_4);
  }
  return;
}


/* ==== 0042e330 FUN_0042e330 ==== */

int FUN_0042e330(int param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  int local_c;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    local_c = FUN_0042c3b0(param_2);
    local_c = local_c + *(int *)(param_2 + 0x20);
    param_3 = extraout_ECX;
  }
  else {
    local_c = *(int *)(*(int *)(param_2 + 0xc) + 0x20);
  }
  FUN_0042e2b4(*(int *)(*(int *)(param_1 + 100) + 8),param_2,param_3,(int)&stack0xfffffffc);
  return local_c;
}


/* ==== 0042e374 FUN_0042e374 ==== */

undefined4 FUN_0042e374(int param_1,int param_2)

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
    FUN_004241fc(param_1,&local_14);
    FUN_004241fc(param_2,&local_24);
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


/* ==== 0042e3f0 FUN_0042e3f0 ==== */

void FUN_0042e3f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  int local_14 [2];
  
  if ((char)param_3 == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  else {
    iVar1 = FUN_0042ca14((int)param_1,param_2,param_3);
    if (iVar1 == 0) {
      FUN_0040e594(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),local_14);
      iVar1 = FUN_0042d1bc((int)param_1,local_14,&uStack_18);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
      uVar2 = FUN_0042e374(param_2,iVar1);
      (**(code **)(*param_1 + 8))(param_1,param_2,uVar2,iVar1);
    }
  }
  return;
}


/* ==== 0042e45c FUN_0042e45c ==== */

void FUN_0042e45c(void)

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
    iVar2 = FUN_0042c3f8(*(int *)(*piVar3 + 0x60),'\x01');
    if (*(int *)(*piVar3 + 0x54) <= iVar2 + iVar1) {
      *(int *)(*piVar3 + 0x54) = iVar2 + iVar1;
    }
    iVar2 = FUN_0042e330(*piVar3,*(int *)(*piVar3 + 0x60),extraout_ECX);
    if (iVar2 - iVar1 <= *(int *)(*piVar3 + 0x54)) {
      *(int *)(*piVar3 + 0x54) = iVar2 - iVar1;
    }
  }
  else {
    iVar2 = FUN_0042c3f8(*(int *)(*piVar3 + 0x60),'\x02');
    if (*(int *)(*piVar3 + 0x50) <= iVar2 + iVar1) {
      *(int *)(*piVar3 + 0x50) = iVar2 + iVar1;
    }
    iVar2 = FUN_0042e330(*piVar3,*(int *)(*piVar3 + 0x60),extraout_ECX_00);
    if (iVar2 - iVar1 <= *(int *)(*piVar3 + 0x50)) {
      *(int *)(*piVar3 + 0x50) = iVar2 - iVar1;
    }
  }
  return;
}


/* ==== 0042e8d0 FUN_0042e8d0 ==== */

int * FUN_0042e8d0(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 5;
  if (((*(int *)PTR_DAT_00446d9c == 2) && (3 < *(int *)PTR_DAT_00446b68)) ||
     ((*(int *)PTR_DAT_00446d9c == 1 &&
      ((4 < *(int *)PTR_DAT_00446b68 ||
       ((*(int *)PTR_DAT_00446b68 == 4 && (9 < *(int *)PTR_DAT_00446cb4)))))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0xd) = uVar1;
  FUN_0042ea34((int)param_1,0);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0042e960 TMouse.Destroy ==== */

void TMouse_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0042ea0c(piVar1,(HWND)0x0);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0042e990 FUN_0042e990 ==== */

void FUN_0042e990(void)

{
  GetCapture();
  return;
}


/* ==== 0042e998 FUN_0042e998 ==== */

void FUN_0042e998(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)PTR_DAT_00446b78)();
  *(bool *)(param_1 + 0xc) = iVar1 != 0;
  return;
}


/* ==== 0042e9b4 FUN_0042e9b4 ==== */

int FUN_0042e9b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)PTR_DAT_00446b78)();
  iVar2 = -iVar1;
  *(bool *)(param_1 + 0x20) = iVar1 != 0;
  if (iVar1 != 0) {
    iVar2 = SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
  }
  return iVar2;
}


/* ==== 0042e9e4 FUN_0042e9e4 ==== */

void FUN_0042e9e4(int param_1,undefined4 param_2,LRESULT param_3)

{
  HWND pHVar1;
  LRESULT LStack_8;
  
  LStack_8 = param_3;
  pHVar1 = FUN_00406a34((UINT *)(param_1 + 0x1c),(UINT *)(param_1 + 0x24),(UINT *)(param_1 + 0x14),
                        (LRESULT *)(param_1 + 0x10),&LStack_8);
  *(HWND *)(param_1 + 0x18) = pHVar1;
  *(bool *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c) != 0;
  return;
}


/* ==== 0042ea0c FUN_0042ea0c ==== */

void FUN_0042ea0c(undefined4 param_1,HWND wnd)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)FUN_0042e990();
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


/* ==== 0042ea34 FUN_0042ea34 ==== */

void FUN_0042ea34(int param_1,int param_2)

{
  LRESULT LVar1;
  LRESULT extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 == 0) {
    FUN_0042e998(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_0042e9b4(param_1);
      return;
    }
    FUN_0042e9e4(param_1,extraout_EDX,extraout_ECX);
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


/* ==== 0042ea98 FUN_0042ea98 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ea98(void)

{
  UINT uMode;
  HMODULE hModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  if (PTR_DAT_00446da0[8] != '\0') {
    uMode = SetErrorMode(0x8000);
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (DAT_00447780 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("USER32");
      DAT_00447780 = GetProcAddress(hModule,"WINNLSEnableIME");
    }
    if (DAT_00446744 == (HMODULE)0x0) {
      DAT_00446744 = LoadLibraryA("IMM32.DLL");
      if (DAT_00446744 != (HMODULE)0x0) {
        DAT_00447784 = GetProcAddress(DAT_00446744,"ImmGetContext");
        DAT_00447788 = GetProcAddress(DAT_00446744,"ImmReleaseContext");
        DAT_0044778c = GetProcAddress(DAT_00446744,"ImmGetConversionStatus");
        DAT_00447790 = GetProcAddress(DAT_00446744,"ImmSetConversionStatus");
        DAT_00447794 = GetProcAddress(DAT_00446744,"ImmSetOpenStatus");
        _DAT_00447798 = GetProcAddress(DAT_00446744,"ImmSetCompositionWindow");
        _DAT_0044779c = GetProcAddress(DAT_00446744,"ImmSetCompositionFontA");
        _DAT_004477a0 = GetProcAddress(DAT_00446744,"ImmGetCompositionStringA");
        DAT_004477a4 = GetProcAddress(DAT_00446744,"ImmIsIME");
        _DAT_004477a8 = GetProcAddress(DAT_00446744,"ImmNotifyIME");
      }
    }
    *in_FS_OFFSET = uStack_18;
    uStack_18 = 0x42ebfd;
    SetErrorMode(uMode);
    return;
  }
  return;
}


/* ==== 0042ed00 FUN_0042ed00 ==== */

undefined4 FUN_0042ed00(void)

{
  undefined4 uVar1;
  
  if (DAT_00447780 != (code *)0x0) {
    uVar1 = (*DAT_00447780)();
    return uVar1;
  }
  return 0;
}


/* ==== 0042ed1c FUN_0042ed1c ==== */

void FUN_0042ed1c(undefined4 param_1,char param_2)

{
  int iVar1;
  
  if ((PTR_DAT_00446da0[8] != '\0') && (param_2 != '\x03')) {
    if (param_2 == '\0') {
      FUN_0042ed00();
    }
    else {
      FUN_0042ed00();
      if (DAT_00446744 != 0) {
        iVar1 = (*DAT_00447784)();
        if (iVar1 != 0) {
          (*DAT_0044778c)();
          if (param_2 == '\x01') {
            (*DAT_00447794)();
          }
          else if (param_2 == '\x02') {
            (*DAT_00447794)();
          }
          else {
            (*DAT_00447794)();
            (*DAT_0044778c)();
          }
          (*DAT_00447790)();
          (*DAT_00447788)();
        }
      }
    }
  }
  return;
}


/* ==== 0042edf8 FUN_0042edf8 ==== */

undefined4 FUN_0042edf8(void)

{
  undefined4 uVar1;
  
  if (DAT_00446744 != 0) {
    uVar1 = (*DAT_004477a4)();
    return uVar1;
  }
  return 0;
}


/* ==== 0042ee0c FUN_0042ee0c ==== */

void FUN_0042ee0c(void)

{
  FUN_00402d14(*(int **)PTR_DAT_00446c80);
  *(undefined4 *)PTR_DAT_00446c80 = 0;
  FUN_00402d14(*(int **)PTR_DAT_00446d84);
  *(undefined4 *)PTR_DAT_00446d84 = 0;
  FUN_00402d14(DAT_0044773c);
  DAT_0044773c = (int *)0x0;
  FUN_00402d14(DAT_0044777c);
  GlobalDeleteAtom(DAT_0044774a);
  GlobalDeleteAtom(DAT_00447748);
  if (DAT_00446744 != (HMODULE)0x0) {
    FreeLibrary(DAT_00446744);
  }
  return;
}


/* ==== 0042ee80 FUN_0042ee80 ==== */

void FUN_0042ee80(void)

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
  string = FUN_004086d4(local_38,(byte *)"Delphi%.8X",&current_process_id,uVar2);
  DAT_00447748 = GlobalAddAtomA((LPCSTR)string);
  uVar2 = 1;
  local_10 = DAT_004474d4;
  local_c = 0;
  current_thread_id = GetCurrentThreadId();
  local_4 = 0;
  string = FUN_004086d4(local_38,(byte *)"ControlOfs%.8X%.8X",&local_10,uVar2);
  DAT_0044774a = GlobalAddAtomA((LPCSTR)string);
  DAT_0044777c = FUN_0040f234((int *)&DAT_0040da10,'\x01',extraout_ECX);
  FUN_0042ea98();
  DAT_0044773c = FUN_0042e8d0((int *)&LAB_00421938,'\x01',extraout_ECX_00);
  piVar1 = TScreen_virtual_02c((int *)&PTR_TPersistent_virtual_000_004396ec,'\x01',(int *)0x0);
  *(int **)PTR_DAT_00446d84 = piVar1;
  piVar1 = TApplication_virtual_02c((int *)&PTR_TPersistent_virtual_000_004397c4,'\x01',(int *)0x0);
  *(int **)PTR_DAT_00446c80 = piVar1;
  FUN_00439ba4();
  FUN_00442688(*(int *)PTR_DAT_00446c80,'\x01');
  FUN_0040ea80((int)&DAT_0041fe70,0x421bfc,0x421bec);
  return;
}


/* ==== 0042f3ac TContainedAction.Destroy ==== */

void TContainedAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[0x13] != 0) {
    FUN_0042f7a0(piVar1[0x13],(int)piVar1);
  }
  TBasicAction_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0042f3e0 FUN_0042f3e0 ==== */

int FUN_0042f3e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_0040f080(*(int *)(*(int *)(param_1 + 0x4c) + 0x24),param_1);
    return iVar1;
  }
  return -1;
}


/* ==== 0042f3fc TContainedAction.dynamic_fff3 ==== */

int TContainedAction_dynamic_fff3(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    return *(int *)(param_1 + 0x4c);
  }
  iVar1 = TComponent_dynamic_fff3();
  return iVar1;
}


/* ==== 0042f40c TContainedAction.dynamic_fff2 ==== */

undefined4 TContainedAction_dynamic_fff2(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  uVar1 = TComponent_dynamic_fff2();
  return uVar1;
}


/* ==== 0042f41c TContainedAction.virtual_014 ==== */

void TContainedAction_virtual_014(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  TComponent_virtual_014(param_1,param_2,param_3);
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_virtual_000_0042f174);
  if ((char)uVar2 != '\0') {
    FUN_0042f4c4((int)param_1,(int)piVar1);
  }
  return;
}


/* ==== 0042f450 FUN_0042f450 ==== */

void FUN_0042f450(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_0042f3e0(param_1);
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
      FUN_0040ef14(piVar1,iVar3);
      FUN_0040f0a0(*(int **)(*(int *)(param_1 + 0x4c) + 0x24),param_2,param_1);
    }
  }
  return;
}


/* ==== 0042f498 TContainedAction.SetCategory ==== */

void TContainedAction_SetCategory(int param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00403d48(param_2,*(uint **)(param_1 + 0x48));
  if (!(bool)in_ZF) {
    FUN_00403a0c((int *)(param_1 + 0x48),param_2);
    if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x30))();
    }
  }
  return;
}


/* ==== 0042f4c4 FUN_0042f4c4 ==== */

void FUN_0042f4c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_0042f7a0(iVar1,param_1);
    }
    if (param_2 != 0) {
      FUN_0042f780(param_2,param_1);
    }
  }
  return;
}


/* ==== 0042f4ec TContainedAction.dynamic_fff9 ==== */

void TContainedAction_dynamic_fff9(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_0042f174);
    if ((char)uVar1 != '\0') {
      FUN_0042f4c4(param_1,(int)param_2);
    }
  }
  return;
}


/* ==== 0042f518 TContainedAction.dynamic_fff0 ==== */

undefined4 TContainedAction_dynamic_fff0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  LRESULT LVar2;
  uint extraout_ECX;
  
  if ((((*(int **)(param_1 + 0x4c) == (int *)0x0) ||
       (uVar1 = FUN_00402ef0(*(int **)(param_1 + 0x4c),param_1,param_3), param_3 = extraout_ECX,
       (char)uVar1 == '\0')) &&
      (uVar1 = FUN_004432c0(*(int *)PTR_DAT_00446c80,param_1,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = TBasicAction_dynamic_fff0(param_1), (char)uVar1 == '\0')) {
    LVar2 = FUN_00421a28(0xb040,0,param_1);
    uVar1 = 0;
    if (LVar2 != 1) {
      return 0;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* ==== 0042f570 TContainedAction.virtual_044 ==== */

undefined4 TContainedAction_virtual_044(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  LRESULT LVar2;
  uint extraout_ECX;
  
  if ((((*(int **)(param_1 + 0x4c) == (int *)0x0) ||
       (uVar1 = FUN_00402ef0(*(int **)(param_1 + 0x4c),param_1,param_3), param_3 = extraout_ECX,
       (char)uVar1 == '\0')) &&
      (uVar1 = FUN_004432e8(*(int *)PTR_DAT_00446c80,param_1,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = TBasicAction_virtual_044(param_1), (char)uVar1 == '\0')) {
    LVar2 = FUN_00421a28(0xb03f,0,param_1);
    uVar1 = 0;
    if (LVar2 != 1) {
      return 0;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* ==== 0042f5c8 TCustomActionList.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[9] = iVar1;
  iVar1 = FUN_00402ce4((int *)&DAT_0042fe78,'\x01',extraout_ECX_01);
  param_1[10] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0042f72c;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0042f630 TCustomActionList.Destroy ==== */

void TCustomActionList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[10]);
  while (0 < (int)((undefined4 *)piVar1[9])[2]) {
    piVar2 = (int *)FUN_0040f10c((undefined4 *)piVar1[9]);
    FUN_00402d14(piVar2);
  }
  FUN_00402d14((int *)piVar1[9]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0042f680 TCustomActionList.dynamic_fffd ==== */

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
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x24),j);
      if (*(int *)(iVar1 + 4) == param_2) {
        (*(code *)param_4)(param_5,iVar1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0042f6c8 TCustomActionList.dynamic_fffa ==== */

void TCustomActionList_dynamic_fffa(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0040f080(*(int *)(param_1 + 0x24),(int)param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_00402ea4(param_2,(int)&PTR_TPersistent_virtual_000_0042f050);
    FUN_0042f450(iVar1,param_3);
  }
  return;
}


/* ==== 0042f6f8 FUN_0042f6f8 ==== */

void FUN_0042f6f8(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00430bc0(*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_2 != 0) {
    FUN_00430c04(param_2,*(int *)(param_1 + 0x28));
    FUN_00413a98(*(int *)(param_1 + 0x2c),param_1,extraout_ECX);
  }
  return;
}


/* ==== 0042f738 TCustomActionList.virtual_010 ==== */

void TCustomActionList_virtual_010(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  
  TComponent_virtual_010(param_1,(int)param_2,param_3);
  if (param_3 == '\x01') {
    if (param_2 == *(int **)(param_1 + 0x2c)) {
      FUN_0042f6f8(param_1,0);
    }
    else {
      uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_0042f050);
      if ((char)uVar1 != '\0') {
        FUN_0042f7a0(param_1,(int)param_2);
      }
    }
  }
  return;
}


/* ==== 0042f780 FUN_0042f780 ==== */

void FUN_0042f780(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  FUN_0040eec8(*(int **)(param_1 + 0x24),param_2);
  *(int *)(param_2 + 0x4c) = param_1;
  FUN_00413a98(param_2,param_1,extraout_ECX);
  return;
}


/* ==== 0042f7a0 FUN_0042f7a0 ==== */

void FUN_0042f7a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f164(*(int **)(param_1 + 0x24),param_2);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 0x4c) = 0;
  }
  return;
}


/* ==== 0042f7bc TCustomActionList.virtual_030 ==== */

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
      piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x24),j);
      (**(code **)(*piVar1 + 0x30))();
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_virtual_000_00438838);
    if (((char)uVar2 != '\0') && (piVar1[0x8e] != 0)) {
      (**(code **)(*(int *)piVar1[0x8e] + 0xc))();
    }
  }
  return;
}


/* ==== 0042f824 FUN_0042f824 ==== */

undefined4 FUN_0042f824(int param_1,int param_2)

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
  
  bVar1 = FUN_00439dbc(*(uint *)(param_2 + 8));
  sVar2 = FUN_004321a0(*(short *)(param_2 + 4),bVar1);
  i_val = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar3 = FUN_0040f024(*(undefined4 **)(param_1 + 0x24),j);
      if (sVar2 == *(short *)(iVar3 + 0x68)) {
        piVar4 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x24),j);
        uVar5 = FUN_00402ef0(piVar4,extraout_EDX,extraout_ECX);
        return uVar5;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0042f884 TCustomActionList.dynamic_fff4 ==== */

uint TCustomActionList_dynamic_fff4(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x3a) != 0) {
    param_1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 0042f8a4 TCustomActionList.dynamic_fff1 ==== */

uint TCustomActionList_dynamic_fff1(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x42) != 0) {
    param_1 = (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 0042f8c4 TActionLink.virtual_020 ==== */

void TActionLink_virtual_020(int param_1)

{
  FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  return;
}


/* ==== 0042f8d8 TActionLink.virtual_024 ==== */

void TActionLink_virtual_024(int param_1)

{
  FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  return;
}


/* ==== 0042f8ec TActionLink.virtual_028 ==== */

void TActionLink_virtual_028(int param_1)

{
  FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  return;
}


/* ==== 0042f900 TActionLink.virtual_02c ==== */

void TActionLink_virtual_02c(int param_1)

{
  FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  return;
}


/* ==== 0042f914 TActionLink.virtual_030 ==== */

void TActionLink_virtual_030(int param_1)

{
  FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  return;
}


/* ==== 0042f928 TActionLink.virtual_034 ==== */

void TActionLink_virtual_034(int param_1)

{
  FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  return;
}


/* ==== 0042f93c TActionLink.virtual_038 ==== */

void TActionLink_virtual_038(int param_1)

{
  FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  return;
}


/* ==== 0042f950 TActionLink.virtual_03c ==== */

void TActionLink_virtual_03c(int param_1)

{
  FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  return;
}


/* ==== 0042f964 TActionLink.virtual_040 ==== */

void TActionLink_virtual_040(void)

{
  return;
}


/* ==== 0042f968 TActionLink.virtual_044 ==== */

void TActionLink_virtual_044(void)

{
  return;
}


/* ==== 0042f96c TActionLink.virtual_048 ==== */

void TActionLink_virtual_048(void)

{
  return;
}


/* ==== 0042f970 TActionLink.virtual_04c ==== */

void TActionLink_virtual_04c(void)

{
  return;
}


/* ==== 0042f974 TActionLink.virtual_050 ==== */

void TActionLink_virtual_050(void)

{
  return;
}


/* ==== 0042f978 TActionLink.virtual_054 ==== */

void TActionLink_virtual_054(void)

{
  return;
}


/* ==== 0042f97c TActionLink.virtual_058 ==== */

void TActionLink_virtual_058(void)

{
  return;
}


/* ==== 0042f980 TActionLink.virtual_05c ==== */

void TActionLink_virtual_05c(void)

{
  return;
}


/* ==== 0042f984 TCustomAction.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TBasicAction_virtual_02c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x59) = 1;
  param_1[0x19] = -1;
  *(undefined1 *)((int)param_1 + 0x6a) = 1;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0042f9cc TCustomAction.Destroy ==== */

void TCustomAction_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[0x1e]);
  FUN_00402d14((int *)piVar1[0x1f]);
  TContainedAction_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0042fa04 TCustomAction.virtual_000 ==== */

void TCustomAction_virtual_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var;
  undefined4 extraout_EDX_01;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_virtual_000_0042f24c);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_000(param_1,param_2);
  }
  else {
    FUN_0042fa80(param_2,(uint *)param_1[0x15]);
    FUN_0042fae8(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0x16]));
    FUN_0042fb40(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x59)));
    FUN_0042fb98(param_2,param_1[0x17]);
    THintAction_SetHint(param_2,(uint *)param_1[0x18]);
    FUN_0042fc58(param_2,param_1[0x19]);
    FUN_0042fcb0(param_2,CONCAT22(extraout_var,(short)param_1[0x1a]));
    FUN_0042fd0c(param_2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x6a)));
  }
  return;
}


/* ==== 0042fa80 FUN_0042fa80 ==== */

void FUN_0042fa80(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  undefined1 in_ZF;
  
  FUN_00403d48(param_2,(uint *)param_1[0x15]);
  if (!(bool)in_ZF) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TBasicActionLink_virtual_000_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_00403a0c(param_1 + 0x15,param_2);
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 0042fae8 FUN_0042fae8 ==== */

void FUN_0042fae8(int *param_1,undefined4 param_2)

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
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TBasicActionLink_virtual_000_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
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


/* ==== 0042fcb0 FUN_0042fcb0 ==== */

void FUN_0042fcb0(int *param_1,undefined4 param_2)

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
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TBasicActionLink_virtual_000_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
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


/* ==== 0042fd0c FUN_0042fd0c ==== */

void FUN_0042fd0c(int *param_1,undefined4 param_2)

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
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TBasicActionLink_virtual_000_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
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


/* ==== 0042fd64 TCustomAction.virtual_018 ==== */

void TCustomAction_virtual_018(int *param_1,uint *param_2)

{
  bool bVar1;
  undefined1 in_ZF;
  
  FUN_00403d48((uint *)param_1[2],(uint *)param_1[0x15]);
  if (((bool)in_ZF) && ((param_1[1] == 0 || ((*(byte *)(param_1[1] + 0x20) & 1) == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  TComponent_virtual_018(param_1,param_2);
  if ((bVar1) && (*(int *)(param_1[0x10] + 8) == 0)) {
    FUN_0042fa80(param_1,param_2);
  }
  return;
}


/* ==== 0042fdb0 TCustomAction.dynamic_ffef ==== */

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


/* ==== 0042fdd0 TCustomAction.dynamic_fff0 ==== */

undefined4 TCustomAction_dynamic_fff0(int *param_1)

{
  undefined4 uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + 0x44))();
  if (*(char *)((int)param_1 + 0x59) != '\0') {
    uVar1 = TContainedAction_dynamic_fff0((int)param_1,extraout_EDX,extraout_ECX);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0042fdf4 FUN_0042fdf4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fdf4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004477ac = _DAT_004477ac + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


