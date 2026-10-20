/* Menu.exe — units/FormLoseNormal.pas: 4 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049f100 FUN_0049f100 ==== */

void FUN_0049f100(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_14 = (undefined4 *)0x0;
  puStack_1c = &LAB_0049f222;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,(undefined4 *)"ProcessQualify",0);
  FUN_004085ac(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xa4),(int *)&local_c);
  FUN_00403f28(&local_8,(undefined4 *)"playerpos: ",local_c);
  iVar4 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,iVar4);
  iVar2 = FUN_0049ed24();
  iVar4 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18);
  uVar3 = FUN_00462070(iVar2,CONCAT31((int3)((uint)iVar4 >> 8),*(undefined1 *)(iVar4 + 8)));
  FUN_004085ac(uVar3,(int *)&local_14);
  FUN_00403f28(&local_10,(undefined4 *)"QualifyPos: ",local_14);
  iVar4 = local_10;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,iVar4);
  *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) = *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) | 2;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,0x49f284);
  iVar4 = FUN_0049ed44();
  if (*(int *)(iVar4 + 0xc) ==
      *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 0xc)) {
    iVar4 = FUN_0049ed44();
    FUN_0048dd00(iVar4);
  }
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0049f229;
  puStack_1c = (undefined1 *)0x49f221;
  FUN_00403c80((int *)&local_14,4);
  return;
}


/* ==== 0049f4f8 TfrmLoseNormal.virtual_0fc ==== */

void TfrmLoseNormal_virtual_0fc(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049999c);
  return;
}


/* ==== 0049f50c TfrmLoseNormal.FormShow ==== */

void TfrmLoseNormal_FormShow(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint *in_FS_OFFSET;
  undefined4 *puVar4;
  uint uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  uint *local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_120 = &stack0xfffffffc;
  local_110 = (uint *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_124 = &LAB_0049f69c;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_128;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar4 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar4,2);
  TBaseFormOneWay_FormShow((int)param_1);
  iVar3 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xc1],(undefined4 *)"trname",
               *(int *)(iVar3 + 8));
  iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_004085ac(*(undefined4 *)(iVar3 + 8),(int *)&local_110);
  TGroupBox_SetCaption(param_1[0xbf],local_110);
  iVar3 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_SetCaption(param_1[0xbe],*(uint **)(iVar3 + 0x3c));
  iVar3 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xb7],(undefined4 *)"los_ch",
               *(int *)(iVar3 + 0x10));
  uVar2 = 2;
  iVar3 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_004806b0(*(int **)puVar1,0x49f6f8,*(int *)(iVar3 + 0x10),uVar2);
  TTimer_SetInterval(param_1[0xc2],0x1194);
  TTimer_SetEnabled(param_1[0xc2],'\x01');
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  *in_FS_OFFSET = uVar2;
  FUN_00403c5c((int *)&local_110);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049f6fc TfrmLoseNormal.timSampleTimer ==== */

void TfrmLoseNormal_timSampleTimer(int param_1)

{
  TTimer_SetEnabled(*(int *)(param_1 + 0x308),'\0');
  FUN_0048063c(*(int **)PTR_DAT_004ab694,(undefined4 *)"CDL07_",
               *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14));
  return;
}


