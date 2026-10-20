/* Menu.exe — units/FormUnlock.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049b904 TfrmUnlock.ShowUnlockDlg ==== */

undefined4 TfrmUnlock_ShowUnlockDlg(void)

{
  uint debug;
  int *piVar1;
  undefined4 uVar2;
  
  debug = Debug();
  TDebug_InProc(debug,(undefined4 *)"ShowUnlockDlg",2);
  piVar1 = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_0049b7d4,'\x01',0);
  uVar2 = (**(code **)(*piVar1 + 0xd8))();
  System_TObject_Free(piVar1);
  return uVar2;
}


/* ==== 0049b964 TfrmUnlock.GDIFormShow ==== */

void TfrmUnlock_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  TGDIButton_SetDefinition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x88));
  return;
}


/* ==== 0049b98c FUN_0049b98c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b98c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad524 = _DAT_004ad524 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


