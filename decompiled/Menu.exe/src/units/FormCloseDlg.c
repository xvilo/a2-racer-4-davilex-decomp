/* Menu.exe — units/FormCloseDlg.pas: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049e048 FUN_0049e048 ==== */

undefined4 FUN_0049e048(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_0049de64,'\x01',0);
  uVar2 = (**(code **)(*piVar1 + 0xd8))();
  FUN_00402f9c(piVar1);
  return uVar2;
}


/* ==== 0049e078 TfrmCloseDlg.btnOk1Click ==== */

void TfrmCloseDlg_btnOk1Click(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0xb8))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x234) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x234) = 3;
  return;
}


/* ==== 0049e0ac TfrmCloseDlg.GDIFormShow ==== */

void TfrmCloseDlg_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  FUN_00481698(param_1[0xc1],0x49e0e4);
  FUN_00481698(param_1[0xc2],0x49e0f4);
  return;
}


/* ==== 0049e0fc TfrmCloseDlg.gdfBigRadioBtnMainButtonStateChange ==== */

void TfrmCloseDlg_gdfBigRadioBtnMainButtonStateChange
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  TData_gdfRadioBtnButtonStateChange(*(int *)PTR_DAT_004ab694,param_2,param_3,param_4);
  return;
}


/* ==== 0049e118 FUN_0049e118 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e118(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad53c = _DAT_004ad53c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


