/* Menu.exe — units/FormTrackIntro.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049f958 TfrmTrackIntro.imgBackGroundClick ==== */

void TfrmTrackIntro_imgBackGroundClick(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
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
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  puVar3 = &DAT_0049fa10;
  pcVar2 = "imgBackGroundClick";
  iVar4 = local_c;
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,2);
  TTimer_SetEnabled(param_1[0xbc],'\0');
  (**(code **)(*param_1 + 0xe8))
            (param_1,&PTR_TWinControl_virtual_000_0049999c,*param_1,pcVar2,puVar3,iVar4);
  *in_FS_OFFSET = pcVar2;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0049fa34 TfrmTrackIntro.FormShow ==== */

void TfrmTrackIntro_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
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
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,2);
  TGameMenuScreen_FormShow();
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)"NextTr");
  TTimer_SetEnabled(param_1[0xbc],'\x01');
  *in_FS_OFFSET = "FormShow";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0049fb28 TfrmTrackIntro.timCloseTimer ==== */

void TfrmTrackIntro_timCloseTimer(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
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
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  puVar3 = &DAT_0049fbe0;
  pcVar2 = "timCloseTimer";
  iVar4 = local_c;
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,2);
  TTimer_SetEnabled(param_1[0xbc],'\0');
  (**(code **)(*param_1 + 0xe8))
            (param_1,&PTR_TWinControl_virtual_000_0049999c,*param_1,pcVar2,puVar3,iVar4);
  *in_FS_OFFSET = pcVar2;
  System__LStrArrayClr(&local_c,2);
  return;
}


