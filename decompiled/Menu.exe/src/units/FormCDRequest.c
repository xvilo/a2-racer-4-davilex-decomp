/* Menu.exe — units/FormCDRequest.pas: 1 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00497260 TfrmCDRequest.GDIFormShow ==== */

void TfrmCDRequest_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  TGDIButton_SetDefinition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x70));
  TGDIButton_SetDefinition((int *)param_1[0xbe],*(int *)(*(int *)PTR_DAT_004ab694 + 0x74));
  return;
}


