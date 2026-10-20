/* Menu.exe — units/FormDoubleKeys.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00494a14 TfrmDoubleKeys.virtual_0e4 ==== */

void TfrmDoubleKeys_virtual_0e4(undefined4 param_1,int *param_2)

{
  FUN_00403cb0(param_2,(undefined4 *)"popempty");
  return;
}


/* ==== 00494a40 FUN_00494a40 ==== */

void FUN_00494a40(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = (undefined1 *)0x494a52;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_14 = &LAB_00494a84;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00403cb0((int *)(param_1 + 0x2fc),local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00494a8b;
  puStack_14 = (undefined1 *)0x494a83;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00494a90 TfrmDoubleKeys.GDIFormShow ==== */

void TfrmDoubleKeys_GDIFormShow(int *param_1)

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
  puStack_1c = &LAB_00494b12;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TfrmCoolDialog_GDIFormShow(param_1);
  TGDIButton_SetDefinition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x88));
  local_10 = param_1[0xbf];
  local_c = 0xb;
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x14),&local_10,0,(int *)&local_8);
  TGroupBox_SetCaption(param_1[0xbe],local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00494b19;
  puStack_1c = (undefined1 *)0x494b11;
  FUN_00403c5c((int *)&local_8);
  return;
}


