/* Menu.exe — units/MainForm.pas: 22 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a4d20 TfrmMain.FormCreate ==== */

void TfrmMain_FormCreate(int *param_1)

{
  uint debug;
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_18 = &LAB_004a4e08;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  debug = Debug();
  TDebug_InProc(debug,(undefined4 *)"FormCreate",0);
  *(undefined1 *)(param_1 + 0xb4) = 1;
  uVar1 = FUN_0044b100();
  uVar2 = FUN_0044b0f4();
  (**(code **)(*param_1 + 0x7c))(param_1,0,0,uVar2,uVar1);
  FUN_0044cea8(*(int *)PTR_DAT_004ab8ac,*(uint **)(PTR_DAT_004ab8b4 + 0x10));
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_8);
  TGroupBox_SetCaption((int)param_1,local_8);
  pHVar3 = FindWindowA(PTR_s_Progman_004ab5bc,(LPCSTR)0x0);
  param_1[0xb5] = (int)pHVar3;
  pHVar3 = FindWindowA(PTR_s_Shell_TrayWnd_004ab5c0,(LPCSTR)0x0);
  param_1[0xb6] = (int)pHVar3;
  ShowWindow((HWND)param_1[0xb5],0);
  ShowWindow((HWND)param_1[0xb6],0);
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = uVar2;
  puStack_1c = &LAB_004a4e0f;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 004a4e2c TfrmMain.FormDestroy ==== */

void TfrmMain_FormDestroy(int *param_1)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar1;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_004a4ee3;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  ShowWindow((HWND)param_1[0xb5],9);
  ShowWindow((HWND)param_1[0xb6],9);
  FUN_00452d8c(&DAT_00452a8c);
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "FormDestroy";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a4f14 TfrmMain.FormShow ==== */

void TfrmMain_FormShow(int *param_1)

{
  uint debug;
  int system_metrics;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar1;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_004a4fb5;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  system_metrics = GetSystemMetrics(1);
  TControl_SetHeight(param_1,system_metrics);
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "FormShow";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a4fe8 TfrmMain.FormActivate ==== */

void TfrmMain_FormActivate(int *param_1)

{
  undefined4 *puVar1;
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
  puStack_118 = &LAB_004a509a;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  if ((char)param_1[0xb4] != '\0') {
    (**(code **)(*param_1 + 0x80))();
    TfrmMain_StartUp(param_1);
  }
  *(undefined1 *)(param_1 + 0xb4) = 0;
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "FormActivate";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a50d0 TfrmMain.ShowIntro ==== */

void TfrmMain_ShowIntro(undefined4 param_1)

{
  int iVar1;
  uint debug;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = &LAB_004a51cc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  debug = Debug();
  TDebug_InProc(debug,(undefined4 *)"ShowIntro",0);
  FUN_00408a30(*(undefined **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10),(int *)&local_c);
  System__LStrCat3((int *)&local_8,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),local_c);
  uVar2 = SysUtils_FileExists((undefined *)local_8);
  cVar3 = (char)uVar2;
  if (cVar3 == '\0') {
    System__LStrCat3(&local_10,(undefined4 *)"intro not found : ",local_8);
    iVar1 = local_10;
    debug = Debug();
    TDebug_Message(debug,iVar1);
    debug = Debug();
    TDebug_Message(debug,0x4a5214);
    FUN_004a5c24(param_1,(int *)&local_8);
    cVar3 = local_8 != (undefined4 *)0x0;
  }
  if (cVar3 == '\0') {
    System__LStrCat3(&local_14,(undefined4 *)"final search: intro not found : ",local_8);
    iVar1 = local_14;
    debug = Debug();
    TDebug_Message(debug,iVar1);
  }
  else {
    FUN_004a4850(local_8);
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004a51d3;
  puStack_20 = (undefined1 *)0x4a51cb;
  System__LStrArrayClr(&local_14,4);
  return;
}


/* ==== 004a525c TfrmMain.GetPlayer ==== */

void TfrmMain_GetPlayer(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint debug;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_124 = &LAB_004a5387;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puStack_12c = (undefined1 *)0x4a5291;
  local_8 = param_1;
  System_TObject_ClassName(*param_1,local_110);
  puStack_12c = (undefined1 *)0x4a529f;
  System__LStrFromString(&local_10,local_110);
  puStack_12c = (undefined1 *)local_10;
  puStack_130 = &DAT_004a53a0;
  pcStack_134 = "GetPlayer";
  puStack_138 = (undefined4 *)0x4a52b9;
  System__LStrCatN((int *)&local_c,3);
  puStack_138 = local_c;
  puStack_13c = (undefined1 *)0x4a52c2;
  debug = Debug();
  puVar2 = puStack_138;
  puStack_138 = (undefined4 *)0x4a52ce;
  TDebug_InProc(debug,puVar2,0);
  iVar4 = 1;
  iVar1 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14);
  if (iVar1 < 0) {
    puStack_138 = (undefined4 *)0x4a5340;
    iVar4 = TfrmMain_AskForNewPlayer(local_8);
  }
  else {
    puStack_13c = &LAB_004a5313;
    uStack_140 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_140;
    puStack_138 = (undefined4 *)&stack0xfffffffc;
    FUN_0047f840(*(int **)PTR_DAT_004ab694,iVar1);
    *in_FS_OFFSET = uStack_140;
  }
  if (iVar4 == 1) {
    puStack_138 = (undefined4 *)0x4a534f;
    piVar3 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_0049d4bc);
    puStack_138 = (undefined4 *)0x4a535a;
    piVar3 = (int *)System__AsClass(piVar3,(int)&PTR_TWinControl_virtual_000_0049d4bc);
    puStack_138 = (undefined4 *)0x4a5362;
    (**(code **)(*piVar3 + 0xf4))();
  }
  puStack_138 = (undefined4 *)0x4a5367;
  debug = Debug();
  puStack_138 = (undefined4 *)0x4a536c;
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = pcStack_134;
  puStack_12c = &LAB_004a538e;
  puStack_130 = (undefined *)0x4a5386;
  System__LStrArrayClr(&local_10,2);
  return;
}


/* ==== 004a53d8 TfrmMain.AskForNewPlayer ==== */

void TfrmMain_AskForNewPlayer(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_8 = (undefined4 *)0x0;
  puStack_11c = &LAB_004a54a4;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  System_TObject_ClassName(*param_1,local_110);
  System__LStrFromString(&local_10,local_110);
  System__LStrCatN((int *)&local_c,3);
  puVar1 = local_c;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  do {
    iVar2 = TfrmStartInfoKeyBoard_ShowNewPlayerDlg((int *)&local_8);
    if (iVar2 == 2) {
      FUN_0044d3f0();
      break;
    }
  } while (local_8 == (undefined4 *)0x0);
  if (local_8 != (undefined4 *)0x0) {
    FUN_0047fbd4(*(int **)PTR_DAT_004ab694,local_8);
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "AskForNewPlayer";
  System__LStrArrayClr(&local_10,3);
  return;
}


/* ==== 004a54dc TfrmMain.FillRaceResultsQR ==== */

void TfrmMain_FillRaceResultsQR(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint debug;
  int iVar3;
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
  puStack_118 = &LAB_004a55e8;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  iVar3 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  bVar2 = FUN_00461c84(iVar3);
  if (bVar2) {
    *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) = *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) | 1;
  }
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) != '\0') {
    iVar3 = FUN_0048c604(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
    bVar2 = FUN_00461c84(iVar3);
    if (!bVar2) {
      TData_FillRankResults(*(int **)PTR_DAT_004ab694);
    }
    TGameMenuScreen_CheckIfBestLap();
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "FillRaceResultsQR";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a5624 TfrmMain.FillRaceResultsTour ==== */

void TfrmMain_FillRaceResultsTour(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint debug;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_004a5849;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar2 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar2,0);
  iVar4 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  bVar3 = FUN_00461c84(iVar4);
  if (bVar3) {
    *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 1;
  }
  iVar4 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  bVar3 = FUN_00461c84(iVar4);
  if (bVar3) {
    if (*(char *)(*(int *)(*(int *)puVar1 + 200) + 0xc) != '\0') {
      iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dc38(iVar4);
      iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dca4(iVar4,*(int *)(*(int *)(*(int *)puVar1 + 200) + 8));
      iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dcb4(iVar4,*(int *)(*(int *)(*(int *)puVar1 + 200) + 0x14));
      TGameMenuScreen_CheckIfBestLap();
      TGameMenuScreen_CheckChaseQualify();
    }
  }
  else if (*(char *)(*(int *)(*(int *)puVar1 + 200) + 0xc) != '\0') {
    iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dc38(iVar4);
    iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dca4(iVar4,*(int *)(*(int *)(*(int *)puVar1 + 200) + 8));
    iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dcb4(iVar4,*(int *)(*(int *)(*(int *)puVar1 + 200) + 0x14));
    TData_FillRankResults(*(int **)puVar1);
    TGameMenuScreen_CheckIfBestLap();
    iVar4 = *(int *)(*(int *)puVar1 + 0xa4);
    if (iVar4 == 0) {
      TGameMenuScreen_Process1stPosition();
    }
    else {
      iVar5 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
      iVar6 = *(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18);
      iVar6 = FUN_00462070(iVar5,CONCAT31((int3)((uint)iVar6 >> 8),*(undefined1 *)(iVar6 + 8)));
      if (iVar4 <= iVar6) {
        TGameMenuScreen_ProcessQualify();
      }
    }
  }
  piVar7 = (int *)FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  piVar7 = (int *)(**(code **)(*piVar7 + 8))();
  debug = Debug();
  FUN_0045fd98(debug,0x4a5890,piVar7);
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "FillRaceResultsTour";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a58a4 TfrmMain.FlowQR ==== */

void TfrmMain_FlowQR(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint debug;
  int iVar3;
  int *piVar4;
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
  puStack_118 = &LAB_004a599f;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) != '\0') {
    iVar3 = FUN_0048c604(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
    bVar2 = FUN_00461c84(iVar3);
    if (!bVar2) {
      piVar4 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_004a0478);
      piVar4 = (int *)System__AsClass(piVar4,(int)&PTR_TWinControl_virtual_000_004a0478);
      (**(code **)(*piVar4 + 0xf4))();
      goto LAB_004a597a;
    }
  }
  piVar4 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_0049ba10);
  piVar4 = (int *)System__AsClass(piVar4,(int)&PTR_TWinControl_virtual_000_0049ba10);
  (**(code **)(*piVar4 + 0xf4))();
LAB_004a597a:
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "FlowQR";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a59cc TfrmMain.FlowTour ==== */

void TfrmMain_FlowTour(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  int *piVar2;
  undefined4 uVar3;
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
  puStack_118 = &LAB_004a5ba8;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) == '\0') {
    if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 1) == 0) {
      piVar2 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_0049999c);
      piVar2 = (int *)System__AsClass(piVar2,(int)&PTR_TWinControl_virtual_000_0049999c);
      (**(code **)(*piVar2 + 0xf4))();
    }
    else {
      uVar3 = FUN_0048a6ac(*(int *)(*(int *)PTR_DAT_004ab694 + 200));
      if ((char)uVar3 == '\0') {
        piVar2 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_004a0f0c);
        piVar2 = (int *)System__AsClass(piVar2,(int)&PTR_TWinControl_virtual_000_004a0f0c);
        (**(code **)(*piVar2 + 0xf4))();
      }
      else {
        piVar2 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_0049999c);
        piVar2 = (int *)System__AsClass(piVar2,(int)&PTR_TWinControl_virtual_000_0049999c);
        (**(code **)(*piVar2 + 0xf4))();
      }
    }
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 1) == 0) {
    piVar2 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_004a0478);
    piVar2 = (int *)System__AsClass(piVar2,(int)&PTR_TWinControl_virtual_000_004a0478);
    (**(code **)(*piVar2 + 0xf4))();
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 2) == 0) {
    piVar2 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_004a0f0c);
    piVar2 = (int *)System__AsClass(piVar2,(int)&PTR_TWinControl_virtual_000_004a0f0c);
    (**(code **)(*piVar2 + 0xf4))();
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 4) == 0) {
    piVar2 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_004a0c34);
    piVar2 = (int *)System__AsClass(piVar2,(int)&PTR_TWinControl_virtual_000_004a0c34);
    (**(code **)(*piVar2 + 0xf4))();
  }
  else {
    piVar2 = (int *)GetSingletonForm((int)&PTR_TWinControl_virtual_000_004a3cf8);
    piVar2 = (int *)System__AsClass(piVar2,(int)&PTR_TWinControl_virtual_000_004a3cf8);
    (**(code **)(*piVar2 + 0xf4))();
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "FlowTour";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a5bd8 FUN_004a5bd8 ==== */

void FUN_004a5bd8(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004a5c17;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004a5c24(param_1,&local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004a5c1e;
  puStack_14 = (undefined1 *)0x4a5c16;
  System__LStrClr(&local_8);
  return;
}


/* ==== 004a5c24 FUN_004a5c24 ==== */

void FUN_004a5c24(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint debug;
  undefined4 unaff_EBX;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_18;
  int local_14 [2];
  undefined3 uStack_c;
  char local_9;
  undefined4 *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  uStack_c = 0;
  local_9 = 0;
  local_14[1] = 0;
  local_14[0] = 0;
  local_18 = 0;
  puStack_28 = &LAB_004a5d07;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  System__LStrClr(param_2);
  i_val = CONCAT31((int3)((uint)unaff_EBX >> 8),99);
  cVar1 = local_9;
  do {
    local_9 = cVar1;
    System__LStrFromChar(local_14 + 1,i_val);
    uStack_2c = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10);
    System__LStrCatN((int *)&local_8,3);
    uVar2 = SysUtils_FileExists((undefined *)local_8);
    local_9 = (char)uVar2;
    if (local_9 != '\0') {
      System__LStrAsg(param_2,local_8);
      break;
    }
    i_val = i_val + 1;
    cVar1 = 0;
  } while ((char)i_val != '{');
  if (local_9 == '\0') {
    System__LStrFromChar(&local_18,i_val);
    uStack_48 = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10);
    System__LStrCatN(local_14,4);
    i_val = local_14[0];
    debug = Debug();
    TDebug_Message(debug,i_val);
  }
  *in_FS_OFFSET = uStack_48;
  System__LStrArrayClr(&local_18,3);
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 004a5d4c FUN_004a5d4c ==== */

undefined4 FUN_004a5d4c(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004a5bd8(param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_004985dc();
  return uVar2;
}


/* ==== 004a5d70 TfrmMain.StartUp ==== */

void TfrmMain_StartUp(int *param_1)

{
  char cVar1;
  uint debug;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  puStack_18 = &LAB_004a5f44;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  debug = Debug();
  TDebug_InProc(debug,(undefined4 *)"StartUp",0);
  iVar2 = FUN_004a5d4c(param_1);
  if (iVar2 == 2) {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 0;
    TData_DoExit(*(int **)PTR_DAT_004ab694);
  }
  else {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) =
         *(undefined1 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9);
    cVar1 = *(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9);
    if (cVar1 == '\0') {
      TfrmMain_ShowIntro(param_1);
      TDaviSoundBuffer_StartMusic
                (*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),
                 *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      TfrmMain_GetPlayer(param_1);
    }
    else if (cVar1 == '\x01') {
      TDaviSoundBuffer_StartMusic
                (*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),
                 *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      FUN_0047f840(*(int **)PTR_DAT_004ab694,
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14));
      TfrmMain_FillRaceResultsQR(param_1);
      TfrmMain_FlowQR(param_1);
    }
    else if (cVar1 == '\x02') {
      TDaviSoundBuffer_StartMusic
                (*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),
                 *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      FUN_0047f840(*(int **)PTR_DAT_004ab694,
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14));
      TfrmMain_FillRaceResultsTour(param_1);
      TfrmMain_FlowTour(param_1);
    }
    else {
      SysUtils_IntToStr((uint)*(byte *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9),
                        (int *)&local_c);
      System__LStrCat3(&local_8,(undefined4 *)"illegal value of Previous : ",local_c);
      iVar2 = local_8;
      debug = Debug();
      TDebug_Message(debug,iVar2);
    }
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004a5f4b;
  puStack_18 = (undefined1 *)0x4a5f43;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 004a60a4 TSettings.virtual_004 ==== */

void TSettings_virtual_004(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint debug;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_130;
  undefined1 *puStackY_12c;
  undefined1 *puStackY_128;
  undefined4 in_stack_fffffedc;
  undefined4 in_stack_fffffee0;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  if (param_2 != '\0') {
    puStackY_128 = (undefined1 *)0x4a60c3;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,0,in_stack_fffffedc,in_stack_fffffee0)
    ;
  }
  puStackY_12c = &LAB_004a615c;
  uStackY_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_130;
  puStackY_128 = &stack0xfffffffc;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  TDataObject_virtual_004(param_1,'\0',extraout_ECX);
  piVar2 = TDataObject_virtual_004
                     ((int *)&PTR_TControls_virtual_000_004a6080,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar2;
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "Create";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a61a0 TSettings.Destroy ==== */

void TSettings_Destroy(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint debug;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = (undefined1 *)0x4a61b8;
  piVar2 = System__BeforeDestruction(param_1,param_2);
  puStack_11c = &LAB_004a6252;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  System_TObject_ClassName(*piVar2,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  TDataObject_Destroy(piVar2,extraout_DL & 0xfc);
  System_TObject_Free((int *)piVar2[3]);
  piVar2[3] = 0;
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "Destroy";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a628c TSettings.virtual_00c ==== */

void TSettings_virtual_00c(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint debug;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_004a63c5;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  TDataObject_virtual_00c(param_1,param_2);
  iVar2 = System__AsClass(param_2,(int)&PTR_TSettings_virtual_000_004a6010);
  param_1[0xb] = *(int *)(iVar2 + 0x2c);
  param_1[4] = *(int *)(iVar2 + 0x10);
  param_1[5] = *(int *)(iVar2 + 0x14);
  param_1[6] = *(int *)(iVar2 + 0x18);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(iVar2 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(iVar2 + 0x1d);
  *(undefined1 *)((int)param_1 + 0x1e) = *(undefined1 *)(iVar2 + 0x1e);
  *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)(iVar2 + 0x1f);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar2 + 8);
  *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)(iVar2 + 0x35);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(iVar2 + 0x34);
  *(undefined1 *)((int)param_1 + 0x3d) = *(undefined1 *)(iVar2 + 0x3d);
  *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)(iVar2 + 0x36);
  param_1[0xc] = *(int *)(iVar2 + 0x30);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar2 + 0x3c);
  param_1[0xe] = *(int *)(iVar2 + 0x38);
  param_1[9] = *(int *)(iVar2 + 0x24);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(iVar2 + 0x28);
  param_1[8] = *(int *)(iVar2 + 0x20);
  System__AsClass(param_2,(int)&PTR_TSettings_virtual_000_004a6010);
  (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],*(undefined4 *)(iVar2 + 0xc));
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "Assign";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a63f4 TSettings.virtual_014 ==== */

void TSettings_virtual_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puStack_120 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_124 = &LAB_004a653e;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  System_TObject_ClassName(*param_1,local_114);
  System__LStrFromString(&local_14,local_114);
  System__LStrCatN((int *)&local_10,3);
  puVar1 = local_10;
  debug = Debug();
  TDebug_InProc(debug,puVar1,2);
  FUN_0045e350(param_2,local_8);
  *(undefined1 *)(param_1 + 2) = local_8[0];
  FUN_0045e350(param_2,param_1 + 0xb);
  FUN_0045e350(param_2,param_1 + 4);
  FUN_0045e350(param_2,param_1 + 6);
  FUN_0045e350(param_2,param_1 + 5);
  FUN_0045e370(param_2,param_1 + 7);
  FUN_0045e370(param_2,(int)param_1 + 0x1d);
  FUN_0045e370(param_2,(int)param_1 + 0x1e);
  FUN_0045e370(param_2,(int)param_1 + 0x1f);
  FUN_0045e370(param_2,(int)param_1 + 0x35);
  FUN_0045e370(param_2,param_1 + 0xd);
  FUN_0045e370(param_2,(int)param_1 + 0x3d);
  FUN_0045e370(param_2,(int)param_1 + 0x36);
  FUN_0045e350(param_2,param_1 + 0xc);
  FUN_0045e350(param_2,local_c);
  *(undefined1 *)(param_1 + 0xf) = local_c[0];
  FUN_0045e350(param_2,param_1 + 8);
  FUN_0045e350(param_2,param_1 + 0xe);
  (**(code **)(*(int *)param_1[3] + 0x14))((int *)param_1[3],param_2);
  *in_FS_OFFSET = "LoadFromStream";
  System__LStrArrayClr(&local_14,2);
  return;
}


/* ==== 004a6574 TSettings.virtual_010 ==== */

void TSettings_virtual_010(int *param_1,int *param_2)

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
  puStack_11c = &LAB_004a66b6;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,2);
  FUN_0045e380(param_2,(uint)*(byte *)(param_1 + 2));
  FUN_0045e380(param_2,param_1[0xb]);
  FUN_0045e380(param_2,param_1[4]);
  FUN_0045e380(param_2,param_1[6]);
  FUN_0045e380(param_2,param_1[5]);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e380(param_2,param_1[0xc]);
  FUN_0045e380(param_2,(uint)*(byte *)(param_1 + 0xf));
  FUN_0045e380(param_2,param_1[8]);
  FUN_0045e380(param_2,param_1[0xe]);
  (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],param_2);
  *in_FS_OFFSET = "SaveToStream";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004a66ec FUN_004a66ec ==== */

void FUN_004a66ec(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* ==== 004a66f0 TSettings.virtual_000 ==== */

void TSettings_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x4a67a8,*(undefined4 *)(param_1 + 0x18));
  FUN_0045ef0c(param_1,0x4a67c0,*(undefined4 *)(param_1 + 0x2c));
  FUN_0045ef0c(param_1,0x4a67d4,*(undefined4 *)(param_1 + 0x38));
  FUN_0045f038(param_1,0x4a67ec,*(char *)(param_1 + 0x1f));
  FUN_0045f038(param_1,0x4a6804,*(char *)(param_1 + 0x28));
  FUN_0045ef0c(param_1,0x4a681c,*(undefined4 *)(param_1 + 0x30));
  FUN_0045ef0c(param_1,0x4a682c,*(undefined4 *)(param_1 + 0x20));
  FUN_0045f038(param_1,0x4a6844,*(char *)(param_1 + 0x36));
  FUN_0045f038(param_1,0x4a6858,*(char *)(param_1 + 0x3d));
  FUN_0045ef0c(param_1,0x4a686c,(uint)*(byte *)(param_1 + 0x3c));
  FUN_0045efa4(param_1,(undefined4 *)"FControls",*(int **)(param_1 + 0xc));
  return;
}


