/* Menu.exe — units/BaseForm.pas: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049e394 TGameMenuScreen.FormCreate ==== */

void TGameMenuScreen_FormCreate(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  int iVar5;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_110 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_0049e53f;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar7 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar7,0);
  TGDIButton_SetDefinition((int *)param_1[0xb5],*(int *)(*(int *)PTR_DAT_004ab694 + 0x5c));
  TGDIButton_SetDefinition((int *)param_1[0xb6],*(int *)(*(int *)PTR_DAT_004ab694 + 0x60));
  *(undefined1 *)(param_1 + 0x7a) = 1;
  param_1[0xb9] = 0;
  uVar8 = 800;
  uVar6 = 600;
  iVar3 = FUN_0044b0f4();
  uVar2 = iVar3 - 600;
  if (SBORROW4(iVar3,600)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  uVar4 = FUN_0044b100();
  uVar2 = uVar4 - 800;
  if (SBORROW4(uVar4,800)) {
    thunk_FUN_00402808(uVar4);
    uVar2 = extraout_EDX;
  }
  iVar5 = (int)uVar2 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar2 & 1) != 0);
  }
  (**(code **)(*param_1 + 0x7c))(param_1,iVar5,iVar3,uVar6,uVar8);
  TGroupBox_SetAlign((int *)param_1[0xb4],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),5),
                     extraout_ECX);
  (**(code **)(*param_1 + 0xe4))(param_1,&local_110);
  cVar1 = FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),param_1[0xb4],local_110);
  uVar8 = extraout_EDX_01;
  if (cVar1 == '\0') {
    FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),param_1[0xb4],(undefined4 *)"currentc");
    uVar8 = extraout_EDX_02;
  }
  (**(code **)(*(int *)param_1[0xb5] + 0x5c))
            ((int *)param_1[0xb5],
             CONCAT31((int3)((uint)uVar8 >> 8),*(int *)(*(int *)PTR_DAT_004ab694 + 0xbc) == 0) ^ 1);
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = uVar6;
  FUN_00403c5c((int *)&local_110);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049e590 TGameMenuScreen.FormDestroy ==== */

void TGameMenuScreen_FormDestroy(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
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
  puStack_118 = &LAB_0049e621;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = "FormDestroy (baseform)";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049e660 TGameMenuScreen.FormShow ==== */

void TGameMenuScreen_FormShow(void)

{
  FUN_00482950(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0));
  return;
}


/* ==== 0049e678 TGameMenuScreen.btnHelpClick ==== */

void TGameMenuScreen_btnHelpClick(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_11c [2];
  undefined4 *local_114;
  byte local_110 [256];
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_12c = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_114 = (undefined4 *)0x0;
  puStack_130 = &LAB_0049e7e8;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  FUN_00480584(*(int **)puVar1,0x49e800,1);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  iVar4 = *(int *)(*(int *)puVar1 + 0xa0);
  if (iVar4 == 0) {
    FUN_0049eb00(param_1);
  }
  else {
    iVar7 = 0;
    puVar6 = (undefined1 *)0x0;
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80((int *)&local_10,local_110);
    puVar2 = local_10;
    FUN_00403f28((int *)&local_114,*(undefined4 **)(*(int *)puVar1 + 0xb8),(undefined4 *)"agent.ini"
                );
    FUN_00482af8(iVar4,local_114,puVar2,puVar6,iVar7);
    FUN_0047e430(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0047e17c(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0040f7d0(*(undefined4 *)(param_1[0xb5] + 0x30),*(undefined4 *)(param_1[0xb5] + 0x34),
                 local_11c);
    uVar3 = FUN_0042e2ac(param_1,local_11c,&local_c);
    iVar4 = local_c + 10;
    if (SCARRY4(local_c,10)) {
      thunk_FUN_00402808(uVar3);
      iVar4 = extraout_EDX;
    }
    FUN_0047e2e0(*(int *)(*(int *)puVar1 + 0xa0),iVar4);
    iVar4 = *(int *)(*(int *)puVar1 + 0xa0);
    uVar3 = FUN_0047e5e4(iVar4);
    iVar7 = uVar3 + local_8;
    if (SCARRY4(uVar3,local_8)) {
      uVar3 = thunk_FUN_00402808(uVar3);
      iVar7 = extraout_EDX_00;
    }
    iVar5 = iVar7 + 0x3c;
    if (SCARRY4(iVar7,0x3c)) {
      thunk_FUN_00402808(uVar3);
      iVar5 = extraout_EDX_01;
    }
    FUN_0047e388(iVar4,iVar5);
    FUN_0047e430(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0047e17c(*(int *)(*(int *)puVar1 + 0xa0));
    (**(code **)(*param_1 + 0x74))();
  }
  *in_FS_OFFSET = uStack_134;
  puStack_12c = &LAB_0049e7ef;
  puStack_130 = (undefined1 *)0x49e7df;
  FUN_00403c5c((int *)&local_114);
  puStack_130 = (undefined1 *)0x49e7e7;
  FUN_00403c5c((int *)&local_10);
  return;
}


/* ==== 0049e81c TGameMenuScreen.virtual_0e8 ==== */

void TGameMenuScreen_virtual_0e8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0048f760(param_2);
  piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TWinControl_virtual_000_0049e19c);
  iVar2 = FUN_00402ee0(param_1);
  piVar1[0xb9] = iVar2;
  (**(code **)(*param_1 + 0xf0))();
  (**(code **)(*piVar1 + 0xf4))();
  FUN_00449d0c(param_1);
  return;
}


/* ==== 0049e868 TGameMenuScreen.virtual_0ec ==== */

void TGameMenuScreen_virtual_0ec(int *param_1)

{
  int *piVar1;
  
  if (param_1[0xb9] != 0) {
    piVar1 = (int *)FUN_0048f760(param_1[0xb9]);
    piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TWinControl_virtual_000_0049e19c);
    (**(code **)(*piVar1 + 0xf4))();
    (**(code **)(*param_1 + 0xf0))();
    FUN_00449d0c(param_1);
  }
  return;
}


/* ==== 0049e8a8 TGameMenuScreen.virtual_0f0 ==== */

void TGameMenuScreen_virtual_0f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  TForm_SetVisible(param_1,0,param_3);
  (**(code **)(*param_1 + 0x60))(param_1,0);
  return;
}


/* ==== 0049e8c4 TGameMenuScreen.virtual_0f4 ==== */

void TGameMenuScreen_virtual_0f4(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
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
  puStack_118 = &LAB_0049e97d;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar4 = &DAT_0049e994;
  pcVar3 = "ShowScreen (baseform)";
  iVar5 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  (**(code **)(*param_1 + 0x60))
            (param_1,*(undefined4 *)(*(int *)PTR_DAT_004ab8ac + 0x38),*param_1,pcVar3,puVar4,iVar5);
  TForm_SetVisible(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  if (*(short *)((int)param_1 + 0x2ea) != 0) {
    (*(code *)param_1[0xba])(param_1[0xbb],param_1);
  }
  *in_FS_OFFSET = pcVar3;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049e9bc TGameMenuScreen.btnCloseClick ==== */

void TGameMenuScreen_btnCloseClick(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_0049ea7c;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar5 = &DAT_0049ea90;
  pcVar4 = "btnCloseClick";
  iVar6 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  iVar3 = FUN_0049e048();
  if (iVar3 == 3) {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 0;
    TData_DoExit(*(int **)PTR_DAT_004ab694);
  }
  else if (iVar3 == 1) {
    (**(code **)(*param_1 + 0xe8))
              (param_1,&PTR_TWinControl_virtual_000_0049d4bc,*param_1,pcVar4,puVar5,iVar6);
  }
  *in_FS_OFFSET = pcVar4;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049eab0 TGameMenuScreen.virtual_0f8 ==== */

void TGameMenuScreen_virtual_0f8(void)

{
  return;
}


/* ==== 0049eab4 TGameMenuScreen.virtual_0e4 ==== */

void TGameMenuScreen_virtual_0e4(int *param_1,int *param_2)

{
  byte *pbVar1;
  byte local_204 [256];
  byte local_104 [256];
  
  pbVar1 = local_104;
  FUN_00402ee4(*param_1,local_204);
  FUN_0040287c(local_204,5,8,pbVar1);
  FUN_00403e80(param_2,local_104);
  return;
}


/* ==== 0049eb00 FUN_0049eb00 ==== */

void FUN_0049eb00(int *param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  puStack_12c = &LAB_0049ec78;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_134 = (undefined1 *)0x49eb49;
  FUN_00403f28((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"agent.ini");
  puStack_134 = (undefined1 *)0x49eb58;
  local_8 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_10);
  puStack_134 = (undefined1 *)0x49eb67;
  local_c = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  puStack_138 = &LAB_0049ec46;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puStack_134 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  FUN_00403ee4(&local_14,(undefined4 *)"BalloonItems");
  (**(code **)(*local_8 + 0x40))(local_8,local_14,local_c);
  FUN_00411730(local_c,0,&local_118);
  iVar2 = local_118;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_11c,local_114);
  FUN_00403ee4(&local_11c,(undefined4 *)"BalloonItems");
  uVar1 = (**(code **)(*local_8 + 8))(local_8,local_11c,iVar2);
  iVar2 = uVar1 + 0x7fffffff;
  if (iVar2 == -1) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_0044d7f0(*(int *)PTR_DAT_004ab8ac,iVar2 + 0x80000001);
  *in_FS_OFFSET = 1;
  puStack_138 = &LAB_0049ec4d;
  uStack_13c = 0x49ec3d;
  FUN_00402f9c(local_8);
  uStack_13c = 0x49ec45;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 0049ecb4 TGameMenuScreen.FormClose ==== */

void TGameMenuScreen_FormClose(void)

{
  if (*(int *)(*(int *)PTR_DAT_004ab694 + 0xa0) != 0) {
    FUN_0047e0b8(*(int *)(*(int *)PTR_DAT_004ab694 + 0xa0));
  }
  return;
}


/* ==== 0049ed10 FUN_0049ed10 ==== */

undefined4 FUN_0049ed10(void)

{
  return *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14);
}


/* ==== 0049ed24 FUN_0049ed24 ==== */

void FUN_0049ed24(void)

{
  int iVar1;
  
  iVar1 = FUN_0049ed10();
  FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),iVar1);
  return;
}


/* ==== 0049ed44 FUN_0049ed44 ==== */

void FUN_0049ed44(void)

{
  FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  return;
}


/* ==== 0049ed60 TGameMenuScreen.CheckIfBestLap ==== */

void TGameMenuScreen_CheckIfBestLap(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int j;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  byte local_2c [36];
  undefined4 *local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_3c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_40 = &LAB_0049eea2;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"CheckIfBestLap",0);
  uVar2 = FUN_0049ed24();
  i_val = *(int *)(uVar2 + 0x48);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar3 = FUN_0048a7f4(*(int *)(*(int *)puVar1 + 200),j);
      iVar4 = FUN_0049ed10();
      iVar4 = FUN_0048f44c(*(int *)(*(int *)puVar1 + 0xc4),iVar4);
      if (iVar3 < *(int *)(iVar4 + 4)) {
        *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 0x20;
        uVar5 = FUN_0048a7f4(*(int *)(*(int *)puVar1 + 200),j);
        iVar3 = FUN_0049ed10();
        iVar3 = FUN_0048f44c(*(int *)(*(int *)puVar1 + 0xc4),iVar3);
        *(undefined4 *)(iVar3 + 4) = uVar5;
        uVar2 = FUN_0045f46c();
        FUN_0045fe88(uVar2,0x49eed8);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if ((*(byte *)(*(int *)puVar1 + 0xd0) & 0x20) != 0) {
    FUN_0048b2b4(*(int *)(*(int *)puVar1 + 0xc0),local_2c);
    FUN_00403e80((int *)&local_8,local_2c);
    do {
      TfrmStartInfoKeyBoard_ShowHighScoreDlg((int *)&local_8);
    } while (local_8 == (undefined4 *)0x0);
    i_val = FUN_0048f44c(*(int *)(*(int *)puVar1 + 0xc4),
                         *(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x14));
    FUN_00403cb0((int *)(i_val + 8),local_8);
  }
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0049eea9;
  puStack_40 = (undefined1 *)0x49eea1;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0049eef0 TGameMenuScreen.CheckChaseQualify ==== */

void TGameMenuScreen_CheckChaseQualify(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_004ab694;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"CheckChaseQualify",0);
  *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 2;
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,0x49efd4);
  iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_0048dd00(iVar3);
  iVar3 = FUN_00462abc(*(int *)(*(int *)(*(int *)puVar1 + 0xcc) + 0x3c));
  uVar2 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if (uVar2 == *(uint *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10) + 0xc)) {
    *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 4;
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,0x49eff8);
  }
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  return;
}


/* ==== 0049f010 TGameMenuScreen.Process1stPosition ==== */

void TGameMenuScreen_Process1stPosition(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"Process1stPosition",0);
  iVar3 = FUN_0049ed44();
  if (*(int *)(iVar3 + 0xc) ==
      *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 0xc)) {
    iVar3 = FUN_0049ed44();
    FUN_0048dd00(iVar3);
  }
  *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) = *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) | 8;
  iVar3 = FUN_0049ed44();
  piVar1 = (int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x2c) + 8);
  uVar2 = *(int *)(iVar3 + 8) + *piVar1;
  if (SCARRY4(*(int *)(iVar3 + 8),*piVar1)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  iVar3 = FUN_0049ed44();
  FUN_0048dca4(iVar3,uVar2);
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,0x49f0e8);
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  return;
}


/* ==== 0049f100 TGameMenuScreen.ProcessQualify ==== */

void TGameMenuScreen_ProcessQualify(void)

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
  TDebug_ExitProc(uVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0049f229;
  puStack_1c = (undefined1 *)0x49f221;
  FUN_00403c80((int *)&local_14,4);
  return;
}


