/* Menu.exe — units/FormHighScoreDlg.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00494f50 TfrmHighScoreDlg.GDIFormShow ==== */

void TfrmHighScoreDlg_GDIFormShow(int *param_1)

{
  int *piVar1;
  
  TfrmCoolDialog_GDIFormShow(param_1);
  piVar1 = (int *)param_1[0xbe];
  *(undefined1 *)(piVar1 + 0x7a) = 1;
  (**(code **)(*piVar1 + 0xb0))();
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)&DAT_00494fa8);
  TGDIButton_SetDefinition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x88));
  return;
}


/* ==== 00494fb0 TfrmHighScoreDlg.txtNameKeyDown ==== */

void TfrmHighScoreDlg_txtNameKeyDown(int param_1,undefined4 param_2,short *param_3)

{
  if (*param_3 == 0xd) {
    *(undefined4 *)(param_1 + 0x234) = 1;
  }
  return;
}


/* ==== 00494fc8 FUN_00494fc8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494fc8(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4e0 = _DAT_004ad4e0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


