/* Menu.exe — units/FormCurrentChar.pas: 8 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049b4d4 TfrmCurrentChar.virtual_0fc ==== */

void TfrmCurrentChar_virtual_0fc(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049999c);
  return;
}


/* ==== 0049b4e8 TfrmCurrentChar.btnChooseCharClick ==== */

void TfrmCurrentChar_btnChooseCharClick(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049a810);
  return;
}


/* ==== 0049b4fc TfrmCurrentChar.FormShow ==== */

void TfrmCurrentChar_FormShow(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *in_FS_OFFSET;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_18 = &LAB_0049b5e2;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_1c;
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_0049b630(param_1,extraout_EDX,extraout_ECX);
  iVar2 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_004085ac(*(undefined4 *)(iVar2 + 8),(int *)&local_8);
  TGroupBox_SetCaption(param_1[0xc6],local_8);
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xc2],(undefined4 *)"chara_",
               *(int *)(iVar2 + 0x10));
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  iVar2 = *(int *)(iVar2 + 0x10);
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xb7],(undefined4 *)&DAT_0049b608,
               iVar2);
  iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_00491710(param_1[199],*(int *)(iVar3 + 0xc));
  FUN_00480448(*(int **)puVar1,(undefined4 *)&DAT_0049b614);
  *in_FS_OFFSET = iVar2;
  puStack_1c = &LAB_0049b5e9;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0049b61c TfrmCurrentChar.virtual_100 ==== */

void TfrmCurrentChar_virtual_100(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049cca0);
  return;
}


/* ==== 0049b630 FUN_0049b630 ==== */

void FUN_0049b630(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x49b644;
  piVar1 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',param_3);
  puStack_18 = &LAB_0049b6e1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"butbigci",piVar1);
  piVar3 = piVar1;
  iVar2 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,iVar2,piVar3);
  param_1[199] = (int)piVar3;
  iVar2 = *(int *)(param_1[0xc3] + 0x30);
  iVar4 = *(int *)(param_1[0xc4] + 0x30) - iVar2;
  if (SBORROW4(*(int *)(param_1[0xc4] + 0x30),iVar2)) {
    thunk_FUN_00402808((uint)piVar3);
    iVar4 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  FUN_004916a4((int)piVar3,iVar2,*(undefined4 *)(param_1[0xc3] + 0x34),iVar4);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0049b6e8;
  puStack_18 = (undefined1 *)0x49b6e0;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 0049b704 TfrmCurrentChar.FormCreate ==== */

void TfrmCurrentChar_FormCreate(int *param_1)

{
  TGameMenuScreen_FormCreate(param_1);
  FUN_00481698(param_1[0xc5],0x49b72c);
  return;
}


/* ==== 0049b734 TfrmCurrentChar.gdfBtnChooseButtonStateChange ==== */

void TfrmCurrentChar_gdfBtnChooseButtonStateChange
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  TData_BtnStateChange(*(int *)PTR_DAT_004ab694,param_2,param_3,param_4);
  return;
}


/* ==== 0049b750 FUN_0049b750 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b750(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad520 = _DAT_004ad520 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


