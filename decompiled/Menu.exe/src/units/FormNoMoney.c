/* Menu.exe — units/FormNoMoney.pas: 2 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049705c TfrmNoMoney.GDIFormShow ==== */

void TfrmNoMoney_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  TGDIButton_SetDefinition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x88));
  return;
}


/* ==== 00497084 FUN_00497084 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497084(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4ec = _DAT_004ad4ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


