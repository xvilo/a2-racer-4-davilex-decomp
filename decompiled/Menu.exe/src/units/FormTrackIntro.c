/* Menu.exe — units/FormTrackIntro.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049f958 TfrmTrackIntro.imgBackGroundClick ==== */

void TfrmTrackIntro_imgBackGroundClick(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_0049f9fc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar4 = &DAT_0049fa10;
  pcVar3 = "imgBackGroundClick";
  iVar5 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  TTimer_SetEnabled(param_1[0xbc],'\0');
  (**(code **)(*param_1 + 0xe8))
            (param_1,&PTR_TWinControl_virtual_000_0049999c,*param_1,pcVar3,puVar4,iVar5);
  *in_FS_OFFSET = pcVar3;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049fa34 TfrmTrackIntro.FormShow ==== */

void TfrmTrackIntro_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0049fae5;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  TGameMenuScreen_FormShow();
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)"NextTr");
  TTimer_SetEnabled(param_1[0xbc],'\x01');
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049fb28 TfrmTrackIntro.timCloseTimer ==== */

void TfrmTrackIntro_timCloseTimer(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_0049fbcc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar4 = &DAT_0049fbe0;
  pcVar3 = "timCloseTimer";
  iVar5 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  TTimer_SetEnabled(param_1[0xbc],'\0');
  (**(code **)(*param_1 + 0xe8))
            (param_1,&PTR_TWinControl_virtual_000_0049999c,*param_1,pcVar3,puVar4,iVar5);
  *in_FS_OFFSET = pcVar3;
  FUN_00403c80(&local_c,2);
  return;
}


