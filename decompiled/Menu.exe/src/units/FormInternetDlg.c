/* Menu.exe — units/FormInternetDlg.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004974a8 TfrmInternetDlg.virtual_0e4 ==== */

void TfrmInternetDlg_virtual_0e4(undefined4 param_1,int *param_2)

{
  System__LStrAsg(param_2,(undefined4 *)"popempty");
  return;
}


/* ==== 004974d4 TfrmInternetDlg.GDIFormShow ==== */

void TfrmInternetDlg_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  TGDIButton_SetDefinition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x9c));
  return;
}


/* ==== 004974fc FUN_004974fc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004974fc(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4f4 = _DAT_004ad4f4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


