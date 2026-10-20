/* Menu.exe — units/FormDifficulty.pas: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049cf00 TfrmDifficulty.FormShow ==== */

void TfrmDifficulty_FormShow(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
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
  puStack_11c = &LAB_0049d08c;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar2 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar2,2);
  TBaseFormOneWay_FormShow((int)param_1);
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x02') {
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[199],
                 (undefined4 *)"headtour");
  }
  else {
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[199],
                 (undefined4 *)"headquic");
  }
  cVar1 = *(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8);
  if (cVar1 == '\0') {
    (**(code **)(*(int *)param_1[0xc1] + 0xbc))((int *)param_1[0xc1],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)"diffic00");
  }
  else if (cVar1 == '\x01') {
    (**(code **)(*(int *)param_1[0xc2] + 0xbc))((int *)param_1[0xc2],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)"diffic01");
  }
  else if (cVar1 == '\x02') {
    (**(code **)(*(int *)param_1[0xc3] + 0xbc))((int *)param_1[0xc3],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)"diffic02");
  }
  *in_FS_OFFSET = "FormShow";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0049d124 TfrmDifficulty.virtual_0fc ==== */

void TfrmDifficulty_virtual_0fc(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_0049d26d;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,2);
  cVar2 = (**(code **)(*(int *)param_1[0xc1] + 0xb8))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)param_1[0xc2] + 0xb8))();
    if (cVar2 == '\0') {
      *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8) = 2;
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8) = 1;
    }
  }
  else {
    *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8) = 0;
  }
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x01') {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049ba10);
  }
  else if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x02') {
    if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x1c) == '\x01') {
      (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049b288);
    }
    else {
      (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049a810);
    }
  }
  *in_FS_OFFSET = "FlowToNext";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0049d2a0 TfrmDifficulty.virtual_100 ==== */

void TfrmDifficulty_virtual_100(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049d4bc);
  return;
}


/* ==== 0049d2b4 TfrmDifficulty.virtual_0e4 ==== */

void TfrmDifficulty_virtual_0e4(int *param_1,int *param_2)

{
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x01') {
    System__LStrAsg(param_2,(undefined4 *)"quickdif");
  }
  else if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x02') {
    TGameMenuScreen_virtual_0e4(param_1,param_2);
  }
  return;
}


/* ==== 0049d304 TfrmDifficulty.FormCreate ==== */

void TfrmDifficulty_FormCreate(int *param_1)

{
  TGameMenuScreen_FormCreate(param_1);
  FUN_00481698(param_1[0xc4],0x49d34c);
  FUN_00481698(param_1[0xc5],0x49d35c);
  FUN_00481698(param_1[0xc6],0x49d36c);
  return;
}


/* ==== 0049d374 TfrmDifficulty.optEasyClick ==== */

void TfrmDifficulty_optEasyClick(int param_1)

{
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x2dc),
               (undefined4 *)"diffic00");
  return;
}


/* ==== 0049d3ac TfrmDifficulty.optMediumClick ==== */

void TfrmDifficulty_optMediumClick(int param_1)

{
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x2dc),
               (undefined4 *)"diffic01");
  return;
}


/* ==== 0049d3e4 TfrmDifficulty.optHardClick ==== */

void TfrmDifficulty_optHardClick(int param_1)

{
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x2dc),
               (undefined4 *)"diffic02");
  return;
}


/* ==== 0049d41c TfrmDifficulty.gdfBtnHardButtonStateChange ==== */

void TfrmDifficulty_gdfBtnHardButtonStateChange
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  TData_gdfRadioBtnButtonStateChange(*(int *)PTR_DAT_004ab694,param_2,param_3,param_4);
  return;
}


/* ==== 0049d438 FUN_0049d438 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d438(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad534 = _DAT_004ad534 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


