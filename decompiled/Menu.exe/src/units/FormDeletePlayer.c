/* Menu.exe — units/FormDeletePlayer.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00496d98 TfrmDeletePlayer.virtual_0e4 ==== */

void TfrmDeletePlayer_virtual_0e4(undefined4 param_1,int *param_2)

{
  System__LStrAsg(param_2,(undefined4 *)"popempty");
  return;
}


/* ==== 00496dc4 FUN_00496dc4 ==== */

void FUN_00496dc4(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = (undefined1 *)0x496dd6;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_14 = &LAB_00496e08;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  System__LStrAsg((int *)(param_1 + 0x300),local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00496e0f;
  puStack_14 = (undefined1 *)0x496e07;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00496e14 TfrmDeletePlayer.GDIFormShow ==== */

void TfrmDeletePlayer_GDIFormShow(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_10;
  undefined1 local_c;
  uint *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_1c = &LAB_00496e96;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TfrmCoolDialog_GDIFormShow(param_1);
  local_10 = param_1[0xc0];
  local_c = 0xb;
  SysUtils_Format(*(byte **)(PTR_DAT_004ab8b4 + 0xc),&local_10,0,(int *)&local_8);
  TGroupBox_SetCaption(param_1[0xbf],local_8);
  TGDIButton_SetDefinition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x9c));
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00496e9d;
  puStack_1c = (undefined1 *)0x496e95;
  System__LStrClr((int *)&local_8);
  return;
}


