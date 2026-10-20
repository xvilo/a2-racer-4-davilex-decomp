/* Menu.exe — units/FormMainScreen.pas: 16 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049d888 TfrmMainScreen.btnOptionsClick ==== */

void TfrmMainScreen_btnOptionsClick(void)

{
  FUN_0049898c();
  return;
}


/* ==== 0049d894 TfrmMainScreen.FormShow ==== */

void TfrmMainScreen_FormShow(int *param_1)

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
  puStack_11c = &LAB_0049d9ab;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TBaseFormOneWay_FormShow((int)param_1);
  *(undefined1 *)(param_1 + 0xcf) = 0;
  FUN_0049dc40((int)param_1);
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x01') {
    (**(code **)(*(int *)param_1[0xc4] + 0xbc))((int *)param_1[0xc4],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)"quick");
  }
  else {
    (**(code **)(*(int *)param_1[0xc3] + 0xbc))((int *)param_1[0xc3],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)&DAT_0049d9f4);
  }
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049d9fc TfrmMainScreen.btnPlayerClick ==== */

void TfrmMainScreen_btnPlayerClick(int param_1)

{
  TfrmStartInfoKeyBoard_ShowPlayerDlg();
  FUN_0049dc40(param_1);
  return;
}


/* ==== 0049da14 TfrmMainScreen.btnInternetClick ==== */

void TfrmMainScreen_btnInternetClick(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004988f8();
  if (iVar1 == 1) {
    FUN_004910f0(*(LPCSTR *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x40));
    *(undefined1 *)(param_1 + 0x33c) = 1;
  }
  return;
}


/* ==== 0049da44 TfrmMainScreen.virtual_0fc ==== */

void TfrmMainScreen_virtual_0fc(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_0049db0b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if ((char)param_1[0xcf] != '\0') {
    FUN_00403f28((int *)&local_8,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
                 (undefined4 *)"static.ini");
    TStatic_LoadFromIniFile(*(int **)(*(int *)PTR_DAT_004ab694 + 0xcc),local_8);
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)PTR_DAT_004ab694 + 0xcc) + 8))();
    uVar4 = FUN_0045f46c();
    FUN_0045fd98(uVar4,0x49db34,piVar3);
    puVar1 = puStack_10;
  }
  puStack_10 = puVar1;
  cVar2 = (**(code **)(*(int *)param_1[0xc3] + 0xb8))();
  if (cVar2 == '\0') {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 1;
  }
  else {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 2;
  }
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049cca0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049db12;
  puStack_14 = (undefined1 *)0x49db0a;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0049db5c TfrmMainScreen.FormCreate ==== */

void TfrmMainScreen_FormCreate(int *param_1)

{
  undefined4 uVar1;
  
  TGameMenuScreen_FormCreate(param_1);
  FUN_00481698(param_1[0xca],0x49dbd8);
  FUN_00481698(param_1[0xcb],0x49dbe8);
  FUN_00481698(param_1[0xcc],0x49dbf8);
  FUN_00481698(param_1[0xce],0x49dc08);
  FUN_00481698(param_1[0xcd],0x49dc18);
  uVar1 = FUN_00491024();
  (**(code **)(*(int *)param_1[0xc2] + 0x5c))((int *)param_1[0xc2],uVar1);
  return;
}


/* ==== 0049dc20 TfrmMainScreen.btnCloseClick ==== */

void TfrmMainScreen_btnCloseClick(void)

{
  *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 0;
  TData_DoExit(*(int **)PTR_DAT_004ab694);
  return;
}


/* ==== 0049dc40 FUN_0049dc40 ==== */

void FUN_0049dc40(int param_1)

{
  undefined4 *in_FS_OFFSET;
  uint **ppuVar1;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  byte local_34 [36];
  byte *local_10;
  undefined1 local_c;
  uint *local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_40 = &LAB_0049dcb5;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  ppuVar1 = &local_8;
  FUN_0048b2b4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),local_34);
  local_10 = local_34;
  local_c = 4;
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x20),&local_10,0,(int *)ppuVar1);
  TGroupBox_SetCaption(*(int *)(param_1 + 0x304),local_8);
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0049dcbc;
  puStack_40 = (undefined1 *)0x49dcb4;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0049dcc4 TfrmMainScreen.Money3001Click ==== */

void TfrmMainScreen_Money3001Click(void)

{
  int iVar1;
  
  iVar1 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  FUN_0048dca4(iVar1,300);
  return;
}


/* ==== 0049dce8 TfrmMainScreen.Allcharslasttrack1Click ==== */

void TfrmMainScreen_Allcharslasttrack1Click(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  iVar2 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  *(uint *)(iVar2 + 0xc) = uVar1 - 1;
  return;
}


/* ==== 0049dd28 TfrmMainScreen.Unlocksupercop1Click ==== */

void TfrmMainScreen_Unlocksupercop1Click(void)

{
  *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 0x10) = 1;
  return;
}


/* ==== 0049dd40 TfrmMainScreen.optQuickRaceClick ==== */

void TfrmMainScreen_optQuickRaceClick(int param_1)

{
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x2dc),
               (undefined4 *)"quick");
  return;
}


/* ==== 0049dd74 TfrmMainScreen.optTourClick ==== */

void TfrmMainScreen_optTourClick(int param_1)

{
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x2dc),
               (undefined4 *)&DAT_0049dda0);
  return;
}


/* ==== 0049dda8 TfrmMainScreen.gdfBtnQRButtonStateChange ==== */

void TfrmMainScreen_gdfBtnQRButtonStateChange
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  TData_gdfRadioBtnButtonStateChange(*(int *)PTR_DAT_004ab694,param_2,param_3,param_4);
  return;
}


/* ==== 0049ddc4 TfrmMainScreen.gdfBtnInternetButtonStateChange ==== */

void TfrmMainScreen_gdfBtnInternetButtonStateChange
               (undefined4 param_1,undefined4 param_2,int *param_3,char param_4)

{
  TData_CombinedBtnStateChange(*(int *)PTR_DAT_004ab694,param_2,param_3,param_4);
  return;
}


/* ==== 0049dde0 FUN_0049dde0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049dde0(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad538 = _DAT_004ad538 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


