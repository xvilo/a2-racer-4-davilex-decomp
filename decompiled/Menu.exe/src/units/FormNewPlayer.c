/* Menu.exe — units/FormNewPlayer.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00494d24 TfrmNewPlayer.GDIFormShow ==== */

void TfrmNewPlayer_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  (**(code **)(*(int *)param_1[0xbe] + 0xb0))();
  return;
}


/* ==== 00494d44 TfrmNewPlayer.txtNameKeyDown ==== */

void TfrmNewPlayer_txtNameKeyDown(int param_1,undefined4 param_2,short *param_3)

{
  if (*param_3 == 0xd) {
    *(undefined4 *)(param_1 + 0x234) = 1;
  }
  return;
}


/* ==== 00494d5c FUN_00494d5c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494d5c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4dc = _DAT_004ad4dc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


