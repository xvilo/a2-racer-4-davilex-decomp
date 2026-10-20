/* Menu.exe — units/FormTwoWay.pas: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00491024 FUN_00491024 ==== */

void FUN_00491024(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_ECX;
  char *extraout_EDX;
  char *pcVar4;
  undefined4 *in_FS_OFFSET;
  char **ppcVar5;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  char *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  puStack_14 = &LAB_004910d5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00490b4c((int *)&local_8);
  iVar1 = FUN_00403edc((int)local_8);
  if (2 < iVar1) {
    iVar1 = 0;
    pcVar4 = local_8;
    if (*(int *)(local_8 + -4) == 0) {
      iVar1 = thunk_FUN_00402808(0);
      pcVar4 = extraout_EDX;
    }
    if (pcVar4[iVar1] == '\"') {
      FUN_00404124((int *)&local_8,1,1);
      iVar1 = FUN_004041c8("\"",local_8);
      if (0 < iVar1) {
        ppcVar5 = &local_8;
        uVar2 = FUN_004041c8("\"",local_8);
        uVar3 = uVar2 - 1;
        if (SBORROW4(uVar2,1)) {
          thunk_FUN_00402808(uVar2);
          uVar3 = extraout_ECX;
        }
        FUN_004040e4((int)local_8,1,uVar3,(int *)ppcVar5);
      }
    }
  }
  FUN_004087a4(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004910dc;
  puStack_14 = (undefined1 *)0x4910d4;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004910f0 FUN_004910f0 ==== */

void FUN_004910f0(LPCSTR param_1)

{
  LPCSTR lpParameters;
  LPCSTR lpFile;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpDirectory;
  undefined1 *nShowCmd;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_10;
  undefined *local_c;
  LPCSTR local_8;
  
  local_c = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  puStack_18 = (undefined1 *)0x491105;
  local_8 = param_1;
  FUN_00404090((int)param_1);
  puStack_1c = &LAB_00491189;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00490e1c((int *)&local_c);
  if (local_c != (undefined *)0x0) {
    uStack_2c = DAT_004ad4ac;
    nShowCmd = &LAB_004911a0;
    lpDirectory = local_8;
    FUN_00403f9c((int *)&local_10,3);
    lpParameters = FUN_004040a0(local_10);
    lpFile = FUN_004040a0(local_c);
    ShellExecuteA(*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24),(LPCSTR)0x0,lpFile,lpParameters,
                  lpDirectory,(INT)nShowCmd);
  }
  *in_FS_OFFSET = uStack_2c;
  FUN_00403c80((int *)&local_10,3);
  return;
}


/* ==== 004913c0 TBaseFormTwoWay.btnPreviousClick ==== */

void TBaseFormTwoWay_btnPreviousClick(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_00491451;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  (**(code **)(*param_1 + 0x100))();
  *in_FS_OFFSET = "btnPreviousClick (TBaseFormOneWay)";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00491590 FUN_00491590 ==== */

int * FUN_00491590(int *param_1,char param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  iVar1 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
  param_1[1] = iVar1;
  piVar2 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX_00);
  param_1[2] = (int)piVar2;
  uVar3 = (**(code **)(*piVar2 + 8))(piVar2,param_5);
  if (SBORROW4(param_4,1)) {
    thunk_FUN_00402808(uVar3);
  }
  if (-1 < param_4 + -1) {
    do {
      piVar2 = TCustomGDIGraphic_virtual_02c
                         ((int *)&PTR_TControl_virtual_000_004638d0,'\x01',param_3);
      (**(code **)(*piVar2 + 0x60))(piVar2,param_3);
      TGroupBox_SetVisible(piVar2,0,extraout_ECX_01);
      (**(code **)(*piVar2 + 0x98))(piVar2,1);
      FUN_00410104((int *)param_1[1],(int)piVar2);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffd8;
  }
  return param_1;
}


/* ==== 00491648 TStatusIndicator.Destroy ==== */

void TStatusIndicator_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0040c968(piVar1 + 1);
  FUN_0040c968(piVar1 + 2);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00491684 FUN_00491684 ==== */

void FUN_00491684(int param_1,int param_2)

{
  FUN_004102b0(*(undefined4 **)(param_1 + 4),param_2);
  return;
}


/* ==== 0049169c FUN_0049169c ==== */

undefined4 FUN_0049169c(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}


/* ==== 004916a4 FUN_004916a4 ==== */

void FUN_004916a4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int j;
  int i_val;
  
  i_val = *(int *)(*(uint *)(param_1 + 4) + 8);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 4));
  }
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_00491684(param_1,j);
      iVar2 = (int)((longlong)j * (longlong)param_4);
      if ((longlong)iVar2 != (longlong)j * (longlong)param_4) {
        piVar1 = (int *)thunk_FUN_00402808((uint)piVar1);
        iVar2 = extraout_EDX;
      }
      iVar3 = iVar2 + param_2;
      if (SCARRY4(iVar2,param_2)) {
        piVar1 = (int *)thunk_FUN_00402808((uint)piVar1);
        iVar3 = extraout_EDX_00;
      }
      TControl_SetLeft(piVar1,iVar3);
      piVar1 = (int *)FUN_00491684(param_1,j);
      TControl_SetTop(piVar1,param_3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00491710 FUN_00491710 ==== */

void FUN_00491710(int param_1,int param_2)

{
  uint i_val;
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int j;
  
  i_val = FUN_0049169c(param_1);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      uVar1 = param_2 - 1;
      if (SBORROW4(param_2,1)) {
        uVar1 = thunk_FUN_00402808(uVar1);
      }
      if ((int)uVar1 < j) {
        piVar3 = (int *)FUN_00491684(param_1,j);
        TGroupBox_SetVisible(piVar3,0,extraout_ECX_00);
      }
      else {
        iVar2 = FUN_00491684(param_1,j);
        piVar3 = *(int **)(*(int *)(iVar2 + 300) + 0xc);
        (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_1 + 8));
        piVar3 = (int *)FUN_00491684(param_1,j);
        TGroupBox_SetVisible(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
      }
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00491790 FUN_00491790 ==== */

int * FUN_00491790(int *param_1,char param_2,int *param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00491590(param_1,'\0',param_3,param_4,param_7);
  piVar1 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX_01);
  param_1[4] = (int)piVar1;
  (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3],param_5);
  (**(code **)(*(int *)param_1[4] + 8))((int *)param_1[4],param_6);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0049180c FUN_0049180c ==== */

void FUN_0049180c(int param_1,int param_2,int param_3)

{
  uint i_val;
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int j;
  
  i_val = FUN_0049169c(param_1);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      if (j < param_2) {
        uVar1 = param_2 + param_3;
        if (SCARRY4(param_2,param_3)) {
          uVar1 = thunk_FUN_00402808(uVar1);
        }
        if (j < (int)uVar1) {
          iVar2 = FUN_00491684(param_1,j);
          piVar3 = *(int **)(*(int *)(iVar2 + 300) + 0xc);
          (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_1 + 8));
          piVar3 = (int *)FUN_00491684(param_1,j);
          TGroupBox_SetVisible
                    (piVar3,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
        }
        else {
          iVar2 = FUN_00491684(param_1,j);
          piVar3 = *(int **)(*(int *)(iVar2 + 300) + 0xc);
          (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_1 + 0xc));
          piVar3 = (int *)FUN_00491684(param_1,j);
          TGroupBox_SetVisible(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
        }
      }
      else {
        uVar1 = param_2 + param_3;
        if (SCARRY4(param_2,param_3)) {
          uVar1 = thunk_FUN_00402808(uVar1);
        }
        if (j < (int)uVar1) {
          iVar2 = FUN_00491684(param_1,j);
          piVar3 = *(int **)(*(int *)(iVar2 + 300) + 0xc);
          (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_1 + 0x10));
          piVar3 = (int *)FUN_00491684(param_1,j);
          TGroupBox_SetVisible
                    (piVar3,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),extraout_ECX_01);
        }
        else {
          piVar3 = (int *)FUN_00491684(param_1,j);
          TGroupBox_SetVisible(piVar3,0,extraout_ECX_02);
        }
      }
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  return;
}


