/* Menu.exe — units/FormWinNormal.pas: 4 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a0218 TfrmWinNormal.FormShow ==== */

void TfrmWinNormal_FormShow(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_004ab694;
  TBaseFormOneWay_FormShow(param_1);
  FUN_004a0304(param_1);
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x300),(undefined4 *)"trname",
               *(int *)(iVar2 + 8));
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2dc),(undefined4 *)"win_ch",
               *(int *)(iVar2 + 0x10));
  uVar3 = 2;
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_004806b0(*(int **)puVar1,0x4a02ec,*(int *)(iVar2 + 0x10),uVar3);
  TTimer_SetInterval(*(int *)(param_1 + 0x304),0x1194);
  TTimer_SetEnabled(*(int *)(param_1 + 0x304),'\x01');
  return;
}


/* ==== 004a02f0 TfrmWinNormal.virtual_0fc ==== */

void TfrmWinNormal_virtual_0fc(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049f7c4);
  return;
}


/* ==== 004a0304 FUN_004a0304 ==== */

void FUN_004a0304(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined1 local_c;
  uint *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_1c = &LAB_004a03a4;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),
                       *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14));
  TGroupBox_SetCaption(*(int *)(param_1 + 0x2f8),*(uint **)(iVar1 + 0x38));
  local_10 = *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x2c) + 8);
  local_c = 0;
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x24),&local_10,0,(int *)&local_8);
  TGroupBox_SetCaption(*(int *)(param_1 + 0x2fc),local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004a03ab;
  puStack_1c = (undefined1 *)0x4a03a3;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004a03b0 TfrmWinNormal.timSampleTimer ==== */

void TfrmWinNormal_timSampleTimer(int param_1)

{
  TTimer_SetEnabled(*(int *)(param_1 + 0x304),'\0');
  FUN_0048063c(*(int **)PTR_DAT_004ab694,(undefined4 *)"CDW07_",
               *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14));
  return;
}


