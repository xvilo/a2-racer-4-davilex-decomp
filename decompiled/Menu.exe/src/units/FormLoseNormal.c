/* Menu.exe — units/FormLoseNormal.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

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
  uint debug;
  int iVar2;
  uint *in_FS_OFFSET;
  undefined4 *puVar3;
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
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar3 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar3,2);
  TBaseFormOneWay_FormShow((int)param_1);
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xc1],(undefined4 *)"trname",
               *(int *)(iVar2 + 8));
  iVar2 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  SysUtils_IntToStr(*(undefined4 *)(iVar2 + 8),(int *)&local_110);
  TGroupBox_SetCaption(param_1[0xbf],local_110);
  iVar2 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  TGroupBox_SetCaption(param_1[0xbe],*(uint **)(iVar2 + 0x3c));
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar1 + 0xb4),(int *)param_1[0xb7],(undefined4 *)"los_ch",
               *(int *)(iVar2 + 0x10));
  debug = 2;
  iVar2 = FUN_0048c22c(*(int *)(*(int *)puVar1 + 0xc0));
  FUN_004806b0(*(int **)puVar1,0x49f6f8,*(int *)(iVar2 + 0x10),debug);
  TTimer_SetInterval(param_1[0xc2],0x1194);
  TTimer_SetEnabled(param_1[0xc2],'\x01');
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  *in_FS_OFFSET = debug;
  System__LStrClr((int *)&local_110);
  System__LStrArrayClr(&local_c,2);
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


