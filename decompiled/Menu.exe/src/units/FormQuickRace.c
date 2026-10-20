/* Menu.exe — units/FormQuickRace.pas: 24 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049bd5c TfrmQuickRace.FormCreate ==== */

void TfrmQuickRace_FormCreate(int *param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  TGameMenuScreen_FormCreate(param_1);
  piVar1 = TBooleanList_virtual_004((int *)&LAB_0045e328,'\x01',extraout_ECX);
  param_1[0xd6] = (int)piVar1;
  FUN_0049c78c((int)param_1);
  param_1[0xbb] = (int)param_1;
  param_1[0xba] = (int)&LAB_0049c6a0;
  return;
}


/* ==== 0049bd98 TfrmQuickRace.FormDestroy ==== */

void TfrmQuickRace_FormDestroy(int *param_1)

{
  TGameMenuScreen_FormDestroy(param_1);
  FUN_0040c968(param_1 + 0xd6);
  FUN_0040c968(param_1 + 0xd2);
  FUN_0040c968(param_1 + 0xd3);
  FUN_0040c968(param_1 + 0xd4);
  FUN_0040c968(param_1 + 0xd6);
  FUN_0040c968(param_1 + 0xd5);
  return;
}


/* ==== 0049bdec TfrmQuickRace.FormShow ==== */

void TfrmQuickRace_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
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
  puStack_118 = &LAB_0049bed4;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_0049c868(param_1,extraout_EDX,extraout_ECX);
  FUN_0049c198(param_1,*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 0xc));
  FUN_0049c4d8(param_1,*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 8));
  *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 1;
  FUN_0049c3c8((int)param_1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049bf04 TfrmQuickRace.virtual_100 ==== */

void TfrmQuickRace_virtual_100(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049cca0);
  return;
}


/* ==== 0049bf18 TfrmQuickRace.virtual_0fc ==== */

void TfrmQuickRace_virtual_0fc(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x1f) == '\0') {
    FUN_0047ff64(*(int **)PTR_DAT_004ab694);
  }
  else {
    TTimer_SetEnabled(*(int *)(param_1 + 0x344),'\0');
    iVar1 = FUN_0049812c();
    if (iVar1 == 2) {
      TTimer_SetEnabled(*(int *)(param_1 + 0x344),'\x01');
      return;
    }
    FUN_0047ff64(*(int **)PTR_DAT_004ab694);
  }
  return;
}


/* ==== 0049bf7c TfrmQuickRace.btnPrevTrack1Click ==== */

void TfrmQuickRace_btnPrevTrack1Click(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
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
  puStack_118 = &LAB_0049c050;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,3);
  iVar3 = FUN_0049c3b4();
  if (iVar3 == 0) {
    iVar3 = FUN_0049c768();
    uVar2 = FUN_00462abc(iVar3);
    iVar3 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      thunk_FUN_00402808(uVar2);
      iVar3 = extraout_EDX;
    }
    FUN_0049c198(param_1,iVar3);
  }
  else {
    uVar2 = FUN_0049c3b4();
    iVar3 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      thunk_FUN_00402808(uVar2);
      iVar3 = extraout_EDX_00;
    }
    FUN_0049c198(param_1,iVar3);
  }
  FUN_0049c3c8((int)param_1);
  *in_FS_OFFSET = "btnPrevTrackClick";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049c088 TfrmQuickRace.btnNextTrack1Click ==== */

void TfrmQuickRace_btnNextTrack1Click(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
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
  puStack_11c = &LAB_0049c15f;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,3);
  uVar2 = FUN_0049c3b4();
  iVar3 = FUN_0049c768();
  iVar3 = FUN_00462abc(iVar3);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402808(uVar4);
  }
  if (uVar2 == uVar4) {
    FUN_0049c198(param_1,0);
  }
  else {
    uVar2 = FUN_0049c3b4();
    iVar3 = uVar2 + 1;
    if (SCARRY4(uVar2,1)) {
      thunk_FUN_00402808(uVar2);
      iVar3 = extraout_EDX;
    }
    FUN_0049c198(param_1,iVar3);
  }
  FUN_0049c3c8((int)param_1);
  *in_FS_OFFSET = "btnNextTrackClick";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049c198 FUN_0049c198 ==== */

void FUN_0049c198(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  int *in_FS_OFFSET;
  char *pcVar8;
  int iStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  uint *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_11c = (uint *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_130 = &LAB_0049c363;
  iStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_134;
  local_c = 0;
  local_10 = param_2;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  pcVar8 = "SetCurrentTrackIndex";
  FUN_00403f9c(&local_14,3);
  iVar3 = local_14;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar3,2,(int)pcVar8);
  FUN_0048d250(*(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc),param_2);
  iVar3 = FUN_0049c768();
  local_8 = FUN_004627d0(iVar3,param_2);
  iVar3 = FUN_0049c768();
  iVar4 = FUN_00462424(iVar3,param_2);
  *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14) = iVar4;
  iVar3 = iVar4;
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xc9],
               (undefined4 *)"trname",iVar4);
  iVar5 = FUN_0048f44c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4),iVar4);
  FUN_00481090(*(int *)(iVar5 + 4),(int *)&local_11c);
  TGroupBox_SetCaption(param_1[0xc1],local_11c);
  iVar4 = FUN_0048f44c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4),iVar4);
  TGroupBox_SetCaption(param_1[0xc2],*(uint **)(iVar4 + 8));
  TGroupBox_SetCaption(param_1[0xc0],*(uint **)(local_8 + 0x30));
  uVar2 = FUN_0049c77c((int)param_1,param_2);
  TGroupBox_SetVisible((int *)param_1[0xc3],uVar2 ^ 1,extraout_ECX);
  bVar1 = FUN_00461c84(local_8);
  if (bVar1) {
    TGroupBox_SetCaption(param_1[0xc3],*(uint **)(PTR_DAT_004ab8b4 + 0x18));
    uVar6 = extraout_ECX_00;
    uVar7 = extraout_EDX;
  }
  else {
    TGroupBox_SetCaption(param_1[0xc3],*(uint **)(PTR_DAT_004ab8b4 + 4));
    uVar6 = extraout_ECX_01;
    uVar7 = extraout_EDX_00;
  }
  FUN_0049cb94((int)param_1,uVar7,uVar6);
  *in_FS_OFFSET = iVar3;
  FUN_00403c5c((int *)&local_11c);
  FUN_00403c80(&local_18,2);
  return;
}


/* ==== 0049c3b4 FUN_0049c3b4 ==== */

undefined4 FUN_0049c3b4(void)

{
  return *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 0xc);
}


/* ==== 0049c3c8 FUN_0049c3c8 ==== */

void FUN_0049c3c8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0049c3b4();
  cVar1 = FUN_0049c77c(param_1,iVar2);
  if (cVar1 != '\0') {
    iVar2 = FUN_0049c4c4();
    cVar1 = FUN_0049ca08(param_1,iVar2);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_0049c3fc;
    }
  }
  uVar3 = 0;
LAB_0049c3fc:
  (**(code **)(**(int **)(param_1 + 0x2f0) + 0x5c))(*(int **)(param_1 + 0x2f0),uVar3);
  return;
}


/* ==== 0049c40c TfrmQuickRace.btnNextCharClick ==== */

void TfrmQuickRace_btnNextCharClick(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  
  uVar1 = FUN_0049c4c4();
  iVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  if (uVar1 == uVar3) {
    FUN_0049c4d8(param_1,0);
  }
  else {
    uVar1 = FUN_0049c4c4();
    iVar2 = uVar1 + 1;
    if (SCARRY4(uVar1,1)) {
      thunk_FUN_00402808(uVar1);
      iVar2 = extraout_EDX;
    }
    FUN_0049c4d8(param_1,iVar2);
  }
  return;
}


/* ==== 0049c468 TfrmQuickRace.btnPrevCharClick ==== */

void TfrmQuickRace_btnPrevCharClick(int *param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  
  iVar1 = FUN_0049c4c4();
  if (iVar1 == 0) {
    uVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38));
    iVar1 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      thunk_FUN_00402808(uVar2);
      iVar1 = extraout_EDX;
    }
    FUN_0049c4d8(param_1,iVar1);
    return;
  }
  uVar2 = FUN_0049c4c4();
  iVar1 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
    iVar1 = extraout_EDX_00;
  }
  FUN_0049c4d8(param_1,iVar1);
  return;
}


/* ==== 0049c4c4 FUN_0049c4c4 ==== */

undefined4 FUN_0049c4c4(void)

{
  return *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 8);
}


/* ==== 0049c4d8 FUN_0049c4d8 ==== */

void FUN_0049c4d8(int *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  char *pcVar4;
  int iStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_128 = &LAB_0049c643;
  iStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_12c;
  local_8 = 0;
  local_c = param_2;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  pcVar4 = "SetCurrentCharIx";
  FUN_00403f9c(&local_10,3);
  iVar3 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar3,2,(int)pcVar4);
  FUN_0048d180(*(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc),param_2);
  iVar3 = FUN_0048c20c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  TGroupBox_SetCaption(param_1[200],*(uint **)(iVar3 + 0x14));
  uVar1 = FUN_0049ca08(param_1,param_2);
  TGroupBox_SetVisible((int *)param_1[200],CONCAT31(extraout_var,uVar1) ^ 1,extraout_ECX);
  FUN_00491710(param_1[0xd5],*(int *)(iVar3 + 0x28));
  FUN_00491710(param_1[0xd3],*(int *)(iVar3 + 0x24));
  FUN_00491710(param_1[0xd2],*(int *)(iVar3 + 0x20));
  FUN_00491710(param_1[0xd4],*(int *)(iVar3 + 0x2c));
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xca],
               (undefined4 *)"chara_",*(int *)(iVar3 + 0x10));
  iVar3 = *(int *)(iVar3 + 0x10);
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],(undefined4 *)"qr_CH"
               ,iVar3);
  FUN_0049c3c8((int)param_1);
  *in_FS_OFFSET = iVar3;
  FUN_00403c80(&local_14,2);
  return;
}


/* ==== 0049c768 FUN_0049c768 ==== */

undefined4 FUN_0049c768(void)

{
  return *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38);
}


/* ==== 0049c77c FUN_0049c77c ==== */

void FUN_0049c77c(int param_1,int param_2)

{
  FUN_0045ec18(*(int *)(param_1 + 0x358),param_2);
  return;
}


/* ==== 0049c78c FUN_0049c78c ==== */

void FUN_0049c78c(int param_1)

{
  bool bVar1;
  char cVar2;
  int i_val;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 j;
  
  i_val = FUN_0049c768();
  i_val = FUN_00462abc(i_val);
  uVar3 = i_val - 1;
  if (SBORROW4(i_val,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  if (-1 < (int)uVar3) {
    j = uVar3 + 1;
    i_val = 0;
    do {
      iVar4 = FUN_0049c768();
      uVar5 = FUN_004627d0(iVar4,i_val);
      uVar3 = FUN_00461a4c(uVar5,*(int *)(*(int *)PTR_DAT_004ab694 + 0xb8));
      iVar4 = FUN_0049c768();
      iVar4 = FUN_004627d0(iVar4,i_val);
      bVar1 = FUN_00461c84(iVar4);
      if (bVar1) {
        iVar4 = FUN_0049c768();
        iVar4 = FUN_004627d0(iVar4,i_val);
        cVar2 = FUN_0048c644(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),iVar4);
        if (cVar2 == '\0') {
          uVar3 = 0;
        }
      }
      FUN_0045ed90(*(int *)(param_1 + 0x358),uVar3);
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x358) + 8))();
  uVar3 = FUN_0045f46c();
  FUN_0045fd98(uVar3,0x49c854,piVar6);
  return;
}


/* ==== 0049c868 FUN_0049c868 ==== */

void FUN_0049c868(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  int iVar9;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  uVar1 = param_1[0xcd];
  iVar7 = *(int *)(param_1[0xce] + 0x30) - *(int *)(uVar1 + 0x30);
  if (SBORROW4(*(int *)(param_1[0xce] + 0x30),*(int *)(uVar1 + 0x30))) {
    puStack_18 = (undefined1 *)0x49c88a;
    uVar1 = thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX;
  }
  iVar8 = *(int *)(param_1[0xcc] + 0x34) - *(int *)(uVar1 + 0x34);
  if (SBORROW4(*(int *)(param_1[0xcc] + 0x34),*(int *)(uVar1 + 0x34))) {
    puStack_18 = (undefined1 *)0x49c89d;
    thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX_00;
  }
  puStack_18 = (undefined1 *)0x49c8a9;
  piVar2 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',param_3);
  puStack_1c = &LAB_0049c9e7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"klrondje",piVar2);
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd2] = (int)piVar3;
  FUN_004916a4(param_1[0xd2],*(int *)(param_1[0xcd] + 0x30),*(undefined4 *)(param_1[0xcd] + 0x34),
               iVar7);
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd3] = (int)piVar3;
  uVar1 = param_1[0xcd];
  iVar4 = *(int *)(uVar1 + 0x34) + iVar8;
  iVar6 = iVar7;
  if (SCARRY4(*(int *)(uVar1 + 0x34),iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar4 = extraout_ECX_01;
  }
  FUN_004916a4(param_1[0xd3],*(int *)(uVar1 + 0x30),iVar4,iVar6);
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd4] = (int)piVar3;
  uVar1 = param_1[0xcd];
  iVar4 = *(int *)(uVar1 + 0x34);
  iVar6 = (int)((longlong)iVar8 * 2);
  iVar9 = iVar7;
  if ((longlong)iVar6 != (longlong)iVar8 * 2) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar4 = extraout_ECX_02;
    iVar6 = extraout_EDX;
  }
  iVar5 = iVar4 + iVar6;
  if (SCARRY4(iVar4,iVar6)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar5 = extraout_ECX_03;
  }
  FUN_004916a4(param_1[0xd4],*(int *)(uVar1 + 0x30),iVar5,iVar9);
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd5] = (int)piVar3;
  uVar1 = param_1[0xcd];
  iVar4 = *(int *)(uVar1 + 0x34);
  iVar6 = (int)((longlong)iVar8 * 3);
  if ((longlong)iVar6 != (longlong)iVar8 * 3) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar4 = extraout_ECX_04;
    iVar6 = extraout_EDX_00;
  }
  iVar8 = iVar4 + iVar6;
  if (SCARRY4(iVar4,iVar6)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar8 = extraout_ECX_05;
  }
  FUN_004916a4(param_1[0xd5],*(int *)(uVar1 + 0x30),iVar8,iVar7);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0049c9ee;
  puStack_1c = (undefined1 *)0x49c9e6;
  FUN_00402f9c(piVar2);
  return;
}


/* ==== 0049ca08 FUN_0049ca08 ==== */

undefined1 FUN_0049ca08(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0049c768();
  if (param_2 == *(int *)(iVar2 + 0x1c)) {
    iVar2 = FUN_0049c768();
    uVar1 = *(undefined1 *)(iVar2 + 0x20);
  }
  else {
    iVar2 = FUN_0049c768();
    if (param_2 == *(int *)(iVar2 + 0x28)) {
      uVar1 = *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 0x10);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* ==== 0049ca50 FUN_0049ca50 ==== */

void FUN_0049ca50(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int *in_FS_OFFSET;
  bool bVar5;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_18 = &LAB_0049cb6b;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  if (DAT_004ad52c == 5) {
    DAT_004ad52c = 0;
    puVar1 = &stack0xfffffffc;
  }
  else {
    bVar5 = SCARRY4(DAT_004ad52c,1);
    DAT_004ad52c = DAT_004ad52c + 1;
    puVar1 = &stack0xfffffffc;
    if (bVar5) {
      thunk_FUN_00402808(0);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  iVar2 = FUN_0048c604(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_004085ac(*(undefined4 *)(iVar2 + 8),&local_c);
  FUN_00403f9c((int *)&local_8,3);
  iVar2 = DAT_004ad52c;
  if (DAT_004ad530 == 0) {
    FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x340),local_8,
                 DAT_004ad52c);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  else {
    FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x33c),local_8,
                 DAT_004ad52c);
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
  }
  DAT_004ad530 = DAT_004ad530 ^ 1;
  TGroupBox_SetVisible
            (*(int **)(param_1 + 0x340),
             CONCAT31((int3)((uint)uVar4 >> 8),
                      *(undefined1 *)((int)*(int **)(param_1 + 0x340) + 0x47)) ^ 1,uVar3);
  TGroupBox_SetVisible
            (*(int **)(param_1 + 0x33c),
             CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                      *(undefined1 *)((int)*(int **)(param_1 + 0x33c) + 0x47)) ^ 1,extraout_ECX_01);
  FUN_0042e978(*(int **)(param_1 + 0x2d4),extraout_EDX_02,extraout_ECX_02);
  FUN_0042e978(*(int **)(param_1 + 0x2d8),extraout_EDX_03,extraout_ECX_03);
  *in_FS_OFFSET = iVar2;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049cb94 FUN_0049cb94 ==== */

void FUN_0049cb94(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  DAT_004ad52c = 5;
  DAT_004ad530 = 0;
  TGroupBox_SetVisible(*(int **)(param_1 + 0x340),0,param_3);
  TGroupBox_SetVisible
            (*(int **)(param_1 + 0x33c),CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  FUN_0049ca50(param_1);
  TTimer_SetEnabled(*(int *)(param_1 + 0x344),'\0');
  TTimer_SetEnabled(*(int *)(param_1 + 0x344),'\x01');
  return;
}


/* ==== 0049cbec TfrmQuickRace.timCyclerTimer ==== */

void TfrmQuickRace_timCyclerTimer(int param_1)

{
  FUN_0049ca50(param_1);
  return;
}


/* ==== 0049cbf8 TfrmQuickRace.btnCloseClick ==== */

void TfrmQuickRace_btnCloseClick(int *param_1)

{
  TTimer_SetEnabled(param_1[0xd1],'\0');
  TGameMenuScreen_btnCloseClick(param_1);
  return;
}


/* ==== 0049cc1c FUN_0049cc1c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cc1c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad528 = _DAT_004ad528 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


