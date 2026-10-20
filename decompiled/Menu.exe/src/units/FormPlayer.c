/* Menu.exe — units/FormPlayer.pas: 13 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004938ac FUN_004938ac ==== */

void FUN_004938ac(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  LPCSTR lpNewFileName;
  LPCSTR lpExistingFileName;
  undefined4 *in_FS_OFFSET;
  undefined *bFailIfExists;
  undefined4 uStack_280;
  undefined1 *puStack_27c;
  undefined1 *puStack_278;
  int local_270;
  undefined *local_26c;
  undefined *local_268;
  byte local_264 [256];
  int local_164;
  undefined4 *local_160;
  WORD local_15c [6];
  undefined *local_150;
  
  local_26c = (undefined *)0x0;
  local_270 = 0;
  local_268 = (undefined *)0x0;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  puStack_278 = (undefined1 *)0x4938e9;
  FUN_00404480((int)local_15c,(int)&DAT_004075bc);
  puStack_27c = &LAB_00493a5d;
  uStack_280 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_280;
  puStack_278 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_264);
  FUN_00403e80(&local_164,local_264);
  FUN_00403f9c((int *)&local_160,3);
  puVar1 = local_160;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_00403f9c((int *)&local_268,4);
  DVar3 = FUN_00408854(local_268,0x3f,local_15c);
  while (DVar3 == 0) {
    uVar4 = FUN_00481208(local_150);
    FUN_004085ac(uVar4,&local_270);
    bFailIfExists = &DAT_00493ac4;
    FUN_00403f9c((int *)&local_26c,5);
    lpNewFileName = FUN_004040a0(local_26c);
    lpExistingFileName = FUN_004040a0(local_150);
    CopyFileA(lpExistingFileName,lpNewFileName,(BOOL)bFailIfExists);
    DVar3 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = &DAT_00493ab8;
  FUN_00403c80(&local_270,3);
  FUN_00403c80(&local_164,2);
  FUN_0040454c((int)local_15c,(int)&DAT_004075bc);
  return;
}


/* ==== 00493ac8 FUN_00493ac8 ==== */

void FUN_00493ac8(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_288;
  undefined1 *puStack_284;
  undefined1 *puStack_280;
  undefined4 *local_274;
  undefined *local_270;
  undefined *local_26c;
  undefined *local_268;
  byte local_264 [256];
  int local_164;
  undefined4 *local_160;
  WORD local_15c [6];
  undefined *local_150;
  
  local_270 = (undefined *)0x0;
  local_274 = (undefined4 *)0x0;
  local_26c = (undefined *)0x0;
  local_268 = (undefined *)0x0;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  puStack_280 = (undefined1 *)0x493b0c;
  FUN_00404480((int)local_15c,(int)&DAT_004075bc);
  puVar1 = PTR_DAT_004ab694;
  puStack_284 = &LAB_00493cc0;
  uStack_288 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_288;
  puStack_280 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_264);
  FUN_00403e80(&local_164,local_264);
  FUN_00403f9c((int *)&local_160,3);
  puVar2 = local_160;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  FUN_00403f9c((int *)&local_268,4);
  DVar4 = FUN_00408854(local_268,0x3f,local_15c);
  while (DVar4 == 0) {
    FUN_004088e4(local_150);
    DVar4 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  FUN_00403f9c((int *)&local_26c,4);
  DVar4 = FUN_00408854(local_26c,0x3f,local_15c);
  while (DVar4 == 0) {
    uVar5 = FUN_00481208(local_150);
    FUN_00481178(uVar5,(int *)&local_274);
    FUN_00403f28((int *)&local_270,*(undefined4 **)(*(int *)puVar1 + 0xb8),local_274);
    FUN_004088fc(local_150,local_270);
    DVar4 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = &DAT_00493d2c;
  FUN_00403c80((int *)&local_274,4);
  FUN_00403c80(&local_164,2);
  FUN_0040454c((int)local_15c,(int)&DAT_004075bc);
  return;
}


/* ==== 00493d30 FUN_00493d30 ==== */

void FUN_00493d30(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_278;
  undefined1 *puStack_274;
  undefined1 *puStack_270;
  undefined *local_268;
  byte local_264 [256];
  int local_164;
  undefined4 *local_160;
  WORD local_15c [6];
  undefined *local_150;
  
  local_268 = (undefined *)0x0;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  puStack_270 = (undefined1 *)0x493d61;
  FUN_00404480((int)local_15c,(int)&DAT_004075bc);
  puStack_274 = &LAB_00493e74;
  uStack_278 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_278;
  puStack_270 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_264);
  FUN_00403e80(&local_164,local_264);
  FUN_00403f9c((int *)&local_160,3);
  puVar1 = local_160;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_00403f9c((int *)&local_268,4);
  DVar3 = FUN_00408854(local_268,0x3f,local_15c);
  while (DVar3 == 0) {
    FUN_004088e4(local_150);
    DVar3 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = &DAT_00493ed0;
  FUN_00403c5c((int *)&local_268);
  FUN_00403c80(&local_164,2);
  FUN_0040454c((int)local_15c,(int)&DAT_004075bc);
  return;
}


/* ==== 00493ed4 FUN_00493ed4 ==== */

void FUN_00493ed4(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int i_val;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 **extraout_EDX;
  undefined4 **ppuVar6;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  uint *local_150;
  undefined4 *local_14c;
  char *local_148;
  undefined4 *local_144;
  int local_140;
  byte local_13c [36];
  uint *local_118;
  undefined4 *local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_160 = &stack0xfffffffc;
  local_150 = (uint *)0x0;
  local_148 = (char *)0x0;
  local_14c = (undefined4 *)0x0;
  local_140 = 0;
  local_144 = (undefined4 *)0x0;
  local_118 = (uint *)0x0;
  local_110 = 0;
  local_114 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_164 = &LAB_00494181;
  uStack_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_168;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_004085ac(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14),(int *)&local_114);
  FUN_00403f28(&local_110,(undefined4 *)"Data.MenuStuff.CurrentPlayer : ",local_114);
  i_val = local_110;
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,i_val);
  i_val = FUN_0049421c((int)param_1,
                       *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 8));
  TGDIButton_SetDefinition((int *)param_1[0xc3],i_val);
  FUN_0048b2b4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),local_13c);
  FUN_00403e80((int *)&local_118,local_13c);
  TGroupBox_SetCaption(param_1[0xc3],local_118);
  uVar3 = FUN_0045e8a0(param_1[0xcb]);
  FUN_004085ac(uVar3,(int *)&local_144);
  FUN_00403f28(&local_140,(undefined4 *)"flcount : ",local_144);
  i_val = local_140;
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,i_val);
  i_val = 0;
  do {
    ppuVar6 = &local_14c;
    uVar2 = i_val + 1;
    if (SCARRY4(i_val,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      ppuVar6 = extraout_EDX;
    }
    FUN_004085ac(uVar2,(int *)ppuVar6);
    FUN_00403f28((int *)&local_148,(undefined4 *)&DAT_004941fc,local_14c);
    piVar4 = (int *)FUN_00415a80((int)param_1,local_148);
    iVar5 = FUN_0045e8a0(param_1[0xcb]);
    if (i_val < iVar5) {
      iVar5 = FUN_00494200((int)param_1,i_val);
      iVar5 = FUN_0049421c((int)param_1,*(int *)(*(int *)(iVar5 + 0xc) + 0x3c));
      TGDIButton_SetDefinition(piVar4,iVar5);
      iVar5 = FUN_00494200((int)param_1,i_val);
      FUN_00403e80((int *)&local_150,(byte *)(*(int *)(iVar5 + 0xc) + 8));
      TGroupBox_SetCaption((int)piVar4,local_150);
      piVar4[3] = i_val;
      FUN_0042ec14(piVar4,extraout_EDX_00,extraout_ECX);
    }
    else {
      TGDIButton_SetDefinition(piVar4,param_1[0xbf]);
      TGroupBox_SetCaption((int)piVar4,*(uint **)(PTR_DAT_004ab8b4 + 0x40));
      piVar4[3] = -1;
    }
    i_val = i_val + 1;
  } while (i_val != 4);
  i_val = FUN_0045e8a0(param_1[0xcb]);
  (**(code **)(*(int *)param_1[0xbe] + 0x5c))((int *)param_1[0xbe],0 < i_val);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "UpdateScreen";
  FUN_00403c80((int *)&local_150,5);
  FUN_00403c80((int *)&local_118,3);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00494200 FUN_00494200 ==== */

void FUN_00494200(int param_1,int param_2)

{
  FUN_0045e640(*(int *)(param_1 + 0x32c),param_2);
  return;
}


/* ==== 0049421c FUN_0049421c ==== */

void FUN_0049421c(int param_1,int param_2)

{
  int iVar1;
  int i_val;
  char *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined1 *puStack_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined1 *puStack_20;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  i_val = 4;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  local_24 = &LAB_00494335;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_30 = &LAB_004942a7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  i_val = FUN_00462414(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),param_2);
  FUN_00480b08(param_2,(int *)&stack0xffffffe8);
  FUN_00403f28((int *)&stack0xffffffec,(undefined4 *)"defChar",unaff_ESI);
  iVar1 = FUN_00415a80(param_1,unaff_EBX);
  *in_FS_OFFSET = uStack_34;
  if (*(int *)(iVar1 + 0xc) == 0) {
    puStack_2c = (undefined1 *)0x4942f2;
    FUN_00480b08(i_val,(int *)&local_28);
    puStack_2c = (undefined1 *)0x494302;
    FUN_00403f28((int *)&local_24,(undefined4 *)&DAT_004943b8,local_28);
    puStack_2c = (undefined1 *)0x49430d;
    FUN_00481698(iVar1,(int)local_24);
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_0049433c;
  local_24 = (undefined1 *)0x494334;
  FUN_00403c80((int *)&local_28,6);
  return;
}


/* ==== 004943bc TfrmPlayer.btn1Click ==== */

void TfrmPlayer_btn1Click(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  char *pcVar4;
  int iStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_128 = &LAB_004944c8;
  iStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_12c;
  local_c = *(undefined4 *)(param_2 + 0xc);
  local_8 = 0;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  pcVar4 = "btn1Click";
  FUN_00403f9c(&local_10,3);
  iVar3 = local_10;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,iVar3,0,(int)pcVar4);
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 == -1) {
    FUN_00493754(param_1);
  }
  else {
    FUN_00402f9c(*(int **)(*(int *)PTR_DAT_004ab694 + 0xc0));
    uVar2 = TSaveGame_virtual_004((int *)&PTR_TSaveGame_virtual_000_0048aa08,'\x01');
    *(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xc0) = uVar2;
    iVar3 = FUN_0045e640(param_1[0xcb],iVar3);
    FUN_0047f840(*(int **)PTR_DAT_004ab694,*(undefined4 *)(iVar3 + 8));
  }
  FUN_00493338(param_1);
  FUN_00493ed4(param_1);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = (int)pcVar4;
  FUN_00403c80(&local_14,2);
  return;
}


/* ==== 004944fc TfrmPlayer.btnDeletePlayerClick ==== */

void TfrmPlayer_btnDeletePlayerClick(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  byte local_134 [36];
  undefined4 *local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_140 = &stack0xfffffffc;
  local_110 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_144 = &LAB_00494618;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,1);
  FUN_0048b2b4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),local_134);
  FUN_00403e80((int *)&local_110,local_134);
  iVar3 = FUN_00498758(param_1,local_110);
  if (iVar3 == 1) {
    FUN_0047fdc8(*(int **)PTR_DAT_004ab694,
                 *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14));
    iVar3 = param_1[0xc4];
    (**(code **)(iVar3 + 0x108))(*(undefined4 *)(iVar3 + 0x10c),iVar3);
    FUN_00493338(param_1);
    FUN_00493ed4(param_1);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "btnDeletePlayerClick";
  FUN_00403c5c((int *)&local_110);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00494658 TfrmPlayer.GDIFormCreate ==== */

void TfrmPlayer_GDIFormCreate(int *param_1)

{
  FUN_00481698(param_1[0xc1],0x4946a0);
  FUN_00481698(param_1[0xbf],0x4946b0);
  FUN_004946e8(param_1);
  *(undefined1 *)(param_1[0xc2] + 0x1e8) = 1;
  return;
}


/* ==== 004946b8 TfrmPlayer.GDIFormShow ==== */

void TfrmPlayer_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  FUN_00481990(param_1[0xc2],param_1[0xba],(int *)param_1[0xc9]);
  FUN_00493ed4(param_1);
  return;
}


/* ==== 004946e8 FUN_004946e8 ==== */

void FUN_004946e8(int *param_1)

{
  uint j;
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  int local_c;
  int i_val;
  
  puStack_20 = &stack0xfffffffc;
  i_val = 0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_004947ea;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  j = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(j,1)) {
    thunk_FUN_00402808(j);
  }
  if (-1 < (int)(j - 1)) {
    i_val = 0;
    do {
      piVar1 = TGDICustomButtonDefinition_virtual_02c
                         ((int *)&PTR_TPersistent_virtual_000_00466ed8,'\x01',param_1);
      TGDIButtonDefinition_SetTranslucent((int)piVar1,'\x01');
      FUN_00480b08(i_val,(int *)&local_10);
      FUN_00403f28(&local_c,(undefined4 *)"defChar",local_10);
      (**(code **)(*piVar1 + 0x18))(piVar1,local_c);
      TGDIButtonDefinition_SetFont((int)piVar1);
      (**(code **)(*(int *)piVar1[0x1a] + 0x2c))((int *)piVar1[0x1a],10);
      (**(code **)(*(int *)piVar1[0x1a] + 0x34))((int *)piVar1[0x1a],0x87);
      (**(code **)(*(int *)piVar1[0x1a] + 0x30))((int *)piVar1[0x1a],0x73);
      (**(code **)(*(int *)piVar1[0x1a] + 0x38))((int *)piVar1[0x1a],0x9b);
      piVar1[0x19] = (int)param_1;
      piVar1[0x18] = (int)TfrmPlayer_gdfBtnDeletePlayerButtonStateChange;
      i_val = i_val + 1;
      j = j - 1;
    } while (j != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004947f1;
  puStack_24 = (undefined1 *)0x4947e9;
  FUN_00403c80((int *)&local_10,2);
  return;
}


/* ==== 00494808 TfrmPlayer.gdfBtnDeletePlayerButtonStateChange ==== */

void TfrmPlayer_gdfBtnDeletePlayerButtonStateChange
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  TData_BtnStateChange(*(int *)PTR_DAT_004ab694,param_2,param_3,param_4);
  return;
}


/* ==== 00494824 FUN_00494824 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494824(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad4d4 = _DAT_004ad4d4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


