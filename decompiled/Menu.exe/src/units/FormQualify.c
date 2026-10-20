/* Menu.exe — units/FormQualify.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049fe54 TfrmQualify.virtual_0fc ==== */

void TfrmQualify_virtual_0fc(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049f7c4);
  return;
}


/* ==== 0049fe68 TfrmQualify.FormShow ==== */

void TfrmQualify_FormShow(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_004ab694;
  TBaseFormOneWay_FormShow(param_1);
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2fc),(undefined4 *)"trname",
               *(int *)(iVar2 + 8));
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_SetCaption(*(int *)(param_1 + 0x2f8),*(uint **)(iVar2 + 0x40));
  iVar2 = FUN_00480390(*(int *)puVar1,0);
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x2dc),(undefined4 *)"win_ch",
               *(int *)(iVar2 + 8));
  iVar2 = FUN_00480390(*(int *)puVar1,0);
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),*(int **)(param_1 + 0x308),(undefined4 *)"chara_",
               *(int *)(iVar2 + 8));
  uVar3 = 2;
  iVar2 = FUN_00480390(*(int *)puVar1,0);
  FUN_004806b0(*(int **)puVar1,0x49ff8c,*(int *)(iVar2 + 8),uVar3);
  TTimer_SetInterval(*(int *)(param_1 + 0x300),0x1194);
  TTimer_SetEnabled(*(int *)(param_1 + 0x300),'\x01');
  (**(code **)(**(int **)(param_1 + 0x2f0) + 0xb4))();
  return;
}


/* ==== 0049ff90 TfrmQualify.timSampleTimer ==== */

void TfrmQualify_timSampleTimer(int param_1)

{
  TTimer_SetEnabled(*(int *)(param_1 + 0x300),'\0');
  FUN_0048063c(*(int **)PTR_DAT_004ab694,(undefined4 *)"CDQ07_",
               *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14));
  return;
}


