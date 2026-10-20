/* Menu.exe — units/FormCharacter.pas: 13 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049aac4 TfrmCharacter.virtual_0fc ==== */

void TfrmCharacter_virtual_0fc(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_FS_OFFSET;
  undefined4 *puVar3;
  uint uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_0049ab80;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar3 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,2);
  uVar1 = 2;
  iVar2 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_004806b0(*(int **)PTR_DAT_004ab694,0x49abb8,*(int *)(iVar2 + 0x10),uVar1);
  TTimer_SetEnabled(param_1[0xc9],'\x01');
  *in_FS_OFFSET = uVar1;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049abbc TfrmCharacter.btnPrevCharClick ==== */

void TfrmCharacter_btnPrevCharClick(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0049ac54();
  if (iVar1 == 0) {
    iVar1 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
  }
  else {
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
  }
  FUN_0049ac68(param_1,uVar2);
  return;
}


/* ==== 0049ac04 TfrmCharacter.btnNextCharClick ==== */

void TfrmCharacter_btnNextCharClick(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_0049ac54();
  iVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  if (uVar1 == uVar3) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 + 1;
    if (SCARRY4(uVar1,1)) {
      thunk_FUN_00402808(uVar3);
    }
  }
  FUN_0049ac68(param_1,iVar2);
  return;
}


/* ==== 0049ac54 FUN_0049ac54 ==== */

undefined4 FUN_0049ac54(void)

{
  return *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 8);
}


/* ==== 0049ac68 FUN_0049ac68 ==== */

void FUN_0049ac68(int *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iVar4;
  int iStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_120 = &stack0xfffffffc;
  local_10 = 0;
  puStack_124 = &LAB_0049ad9f;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_8 = 0;
  iVar4 = 0;
  local_c = param_2;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403ee4(&local_10,(undefined4 *)".SetCurrentCharIx");
  iVar3 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar3,0,iVar4);
  FUN_0048d180(*(int **)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10),param_2);
  iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_00491710(param_1[0xcc],*(int *)(iVar3 + 0xc));
  FUN_0049ae50((int)param_1);
  iVar3 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xc3],(undefined4 *)"chara_",
               *(int *)(iVar3 + 0x10));
  iVar3 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  iVar3 = *(int *)(iVar3 + 0x10);
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xb7],(undefined4 *)&DAT_0049ade8,
               iVar3);
  iVar4 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_SetCaption(param_1[0xc0],*(uint **)(iVar4 + 0x18));
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = iVar3;
  FUN_00403c5c(&local_10);
  return;
}


/* ==== 0049adec TfrmCharacter.virtual_100 ==== */

void TfrmCharacter_virtual_100(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049b288);
  return;
}


/* ==== 0049ae00 TfrmCharacter.FormShow ==== */

void TfrmCharacter_FormShow(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_0049af5c(param_1,extraout_EDX,extraout_ECX);
  FUN_0049ac68(param_1,*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 8));
  *(undefined1 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x1c) = 1;
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  return;
}


/* ==== 0049ae50 FUN_0049ae50 ==== */

void FUN_0049ae50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ac54();
  iVar1 = FUN_004625a4(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),iVar1);
  FUN_00491710(*(int *)(param_1 + 0x340),*(int *)(iVar1 + 0x28));
  iVar1 = FUN_0049ac54();
  iVar1 = FUN_004625a4(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),iVar1);
  FUN_00491710(*(int *)(param_1 + 0x338),*(int *)(iVar1 + 0x24));
  iVar1 = FUN_0049ac54();
  iVar1 = FUN_004625a4(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),iVar1);
  FUN_00491710(*(int *)(param_1 + 0x334),*(int *)(iVar1 + 0x20));
  iVar1 = FUN_0049ac54();
  iVar1 = FUN_004625a4(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),iVar1);
  FUN_00491710(*(int *)(param_1 + 0x33c),*(int *)(iVar1 + 0x2c));
  return;
}


/* ==== 0049af0c TfrmCharacter.FormDestroy ==== */

void TfrmCharacter_FormDestroy(int *param_1)

{
  FUN_0040c968(param_1 + 0xcd);
  FUN_0040c968(param_1 + 0xce);
  FUN_0040c968(param_1 + 0xcf);
  FUN_0040c968(param_1 + 0xd0);
  FUN_0040c968(param_1 + 0xcc);
  TGameMenuScreen_FormDestroy(param_1);
  return;
}


/* ==== 0049af5c FUN_0049af5c ==== */

void FUN_0049af5c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  int iVar9;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  uVar1 = param_1[0xc4];
  iVar7 = *(int *)(param_1[0xc6] + 0x30) - *(int *)(uVar1 + 0x30);
  if (SBORROW4(*(int *)(param_1[0xc6] + 0x30),*(int *)(uVar1 + 0x30))) {
    puStack_18 = (undefined1 *)0x49af7e;
    uVar1 = thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX;
  }
  iVar8 = *(int *)(param_1[0xc5] + 0x34) - *(int *)(uVar1 + 0x34);
  if (SBORROW4(*(int *)(param_1[0xc5] + 0x34),*(int *)(uVar1 + 0x34))) {
    puStack_18 = (undefined1 *)0x49af91;
    thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX_00;
  }
  puStack_18 = (undefined1 *)0x49af9d;
  piVar2 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',param_3);
  puStack_1c = &LAB_0049b156;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"butbigci",piVar2);
  piVar4 = piVar2;
  iVar3 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,iVar3,piVar4);
  param_1[0xcc] = (int)piVar4;
  iVar3 = *(int *)(param_1[200] + 0x30) - *(int *)(param_1[199] + 0x30);
  if (SBORROW4(*(int *)(param_1[200] + 0x30),*(int *)(param_1[199] + 0x30))) {
    thunk_FUN_00402808((uint)piVar4);
    iVar3 = extraout_EDX;
  }
  FUN_004916a4(param_1[0xcc],*(int *)(param_1[199] + 0x30),*(undefined4 *)(param_1[199] + 0x34),
               iVar3);
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"klrondje",piVar2);
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xcd] = (int)piVar4;
  FUN_004916a4(param_1[0xcd],*(int *)(param_1[0xc4] + 0x30),*(undefined4 *)(param_1[0xc4] + 0x34),
               iVar7);
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xce] = (int)piVar4;
  uVar1 = param_1[0xc4];
  iVar3 = *(int *)(uVar1 + 0x34) + iVar8;
  iVar6 = iVar7;
  if (SCARRY4(*(int *)(uVar1 + 0x34),iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_ECX_01;
  }
  FUN_004916a4(param_1[0xce],*(int *)(uVar1 + 0x30),iVar3,iVar6);
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xcf] = (int)piVar4;
  uVar1 = param_1[0xc4];
  iVar3 = *(int *)(uVar1 + 0x34);
  iVar6 = (int)((longlong)iVar8 * 2);
  iVar9 = iVar7;
  if ((longlong)iVar6 != (longlong)iVar8 * 2) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_ECX_02;
    iVar6 = extraout_EDX_00;
  }
  iVar5 = iVar3 + iVar6;
  if (SCARRY4(iVar3,iVar6)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar5 = extraout_ECX_03;
  }
  FUN_004916a4(param_1[0xcf],*(int *)(uVar1 + 0x30),iVar5,iVar9);
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd0] = (int)piVar4;
  uVar1 = param_1[0xc4];
  iVar3 = *(int *)(uVar1 + 0x34);
  iVar6 = (int)((longlong)iVar8 * 3);
  if ((longlong)iVar6 != (longlong)iVar8 * 3) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_ECX_04;
    iVar6 = extraout_EDX_01;
  }
  iVar8 = iVar3 + iVar6;
  if (SCARRY4(iVar3,iVar6)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar8 = extraout_ECX_05;
  }
  FUN_004916a4(param_1[0xd0],*(int *)(uVar1 + 0x30),iVar8,iVar7);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0049b15d;
  puStack_1c = (undefined1 *)0x49b155;
  FUN_00402f9c(piVar2);
  return;
}


/* ==== 0049b18c TfrmCharacter.timSelectionTimer ==== */

void TfrmCharacter_timSelectionTimer(int *param_1)

{
  TTimer_SetEnabled(param_1[0xc9],'\0');
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049999c);
  return;
}


/* ==== 0049b1b4 TfrmCharacter.imgCarClick ==== */

void TfrmCharacter_imgCarClick(int param_1)

{
  int iVar1;
  byte local_28;
  char local_27;
  
  FUN_0048b2b4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),&local_28);
  if (local_27 == 'f') {
    iVar1 = TGDIButtonDefinition_GetUpLink(*(int *)(*(int *)PTR_DAT_004ab694 + 0x94),4);
    (**(code **)(**(int **)(param_1 + 0x2dc) + 0x88))(*(int **)(param_1 + 0x2dc),iVar1);
  }
  return;
}


/* ==== 0049b204 FUN_0049b204 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b204(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad51c = _DAT_004ad51c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


