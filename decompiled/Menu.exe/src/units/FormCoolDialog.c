/* Menu.exe — units/FormCoolDialog.pas: 41 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00488f2c TfrmCoolDialog.virtual_02c ==== */

void TfrmCoolDialog_virtual_02c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  if (param_2 != '\0') {
    puStackY_24 = (undefined1 *)0x488f3f;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  puStackY_28 = &LAB_00488fcb;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  TGDIForm_virtual_02c(param_1,'\0',param_3);
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_8);
  TGroupBox_SetCaption((int)param_1,local_8);
  TGDIButton_SetDefinition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x70));
  TGDIButton_SetDefinition((int *)param_1[0xbb],*(int *)(*(int *)PTR_DAT_004ab694 + 0x5c));
  TGDIButton_SetDefinition((int *)param_1[0xbc],*(int *)(*(int *)PTR_DAT_004ab694 + 0x84));
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_00488fd2;
  puStackY_28 = (undefined1 *)0x488fca;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00488ff0 TfrmCoolDialog.GDIFormShow ==== */

void TfrmCoolDialog_GDIFormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined4 *puStack_134;
  char *pcStack_130;
  undefined *puStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_120 = &LAB_00489162;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  iStack_128 = 0x489028;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_114);
  iStack_128 = 0x489036;
  FUN_00403e80(&local_14,local_114);
  iStack_128 = local_14;
  puStack_12c = &DAT_00489178;
  pcStack_130 = "GDIFormShow";
  puStack_134 = (undefined4 *)0x489050;
  FUN_00403f9c((int *)&local_10,3);
  puStack_134 = local_10;
  puStack_138 = (undefined1 *)0x489059;
  uVar2 = FUN_0045f46c();
  puVar1 = puStack_134;
  puStack_134 = (undefined4 *)0x489065;
  FUN_0045fb90(uVar2,puVar1,2);
  puStack_134 = (undefined4 *)0x489071;
  local_c = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX);
  puStack_138 = &LAB_004890fa;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puStack_134 = (undefined4 *)&stack0xfffffffc;
  (**(code **)(*local_8 + 0xe4))(local_8,&local_118);
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),local_118,local_c);
  (**(code **)(**(int **)(local_8[0xba] + 300) + 8))(*(int **)(local_8[0xba] + 300),local_c);
  TControl_SetWidth(local_8,local_c[0x23]);
  TControl_SetHeight(local_8,local_c[0x10]);
  *in_FS_OFFSET = uStack_13c;
  puStack_134 = (undefined4 *)&LAB_00489101;
  puStack_138 = (undefined1 *)0x4890f9;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 00489194 TfrmCoolDialog.virtual_0e4 ==== */

void TfrmCoolDialog_virtual_0e4(int *param_1,int *param_2)

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


/* ==== 004891e0 TfrmCoolDialog.btnHelpClick ==== */

void TfrmCoolDialog_btnHelpClick(int *param_1)

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
  undefined1 *in_stack_fffffec4;
  int iVar6;
  undefined1 *puStack_134;
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
  puStack_130 = &LAB_00489349;
  puStack_134 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_134;
  FUN_00480584(*(int **)puVar1,0x489360,1);
  iVar4 = *(int *)(*(int *)puVar1 + 0xa0);
  if (iVar4 == 0) {
    TfrmCoolDialog_ShowWinHelp(param_1);
  }
  else {
    iVar6 = 0;
    in_stack_fffffec4 = (undefined1 *)0x0;
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80((int *)&local_10,local_110);
    puVar2 = local_10;
    FUN_00403f28((int *)&local_114,*(undefined4 **)(*(int *)puVar1 + 0xb8),(undefined4 *)"agent.ini"
                );
    FUN_00482af8(iVar4,local_114,puVar2,in_stack_fffffec4,iVar6);
    FUN_0047e430(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0047e17c(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0040f7d0(*(undefined4 *)(param_1[0xbb] + 0x30),*(undefined4 *)(param_1[0xbb] + 0x34),
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
    iVar6 = uVar3 + local_8;
    if (SCARRY4(uVar3,local_8)) {
      uVar3 = thunk_FUN_00402808(uVar3);
      iVar6 = extraout_EDX_00;
    }
    iVar5 = iVar6 + 0x3c;
    if (SCARRY4(iVar6,0x3c)) {
      thunk_FUN_00402808(uVar3);
      iVar5 = extraout_EDX_01;
    }
    FUN_0047e388(iVar4,iVar5);
    FUN_0047e430(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0047e17c(*(int *)(*(int *)puVar1 + 0xa0));
  }
  (**(code **)(*param_1 + 0x74))();
  *in_FS_OFFSET = in_stack_fffffec4;
  puStack_134 = &LAB_00489350;
  FUN_00403c5c((int *)&local_114);
  FUN_00403c5c((int *)&local_10);
  return;
}


/* ==== 0048937c TfrmCoolDialog.GDIFormClose ==== */

void TfrmCoolDialog_GDIFormClose(void)

{
  if (*(int *)(*(int *)PTR_DAT_004ab694 + 0xa0) != 0) {
    FUN_0047e0b8(*(int *)(*(int *)PTR_DAT_004ab694 + 0xa0));
  }
  return;
}


/* ==== 004893a0 TfrmCoolDialog.ShowWinHelp ==== */

void TfrmCoolDialog_ShowWinHelp(int *param_1)

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
  puStack_12c = &LAB_00489518;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_134 = (undefined1 *)0x4893e9;
  FUN_00403f28((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"agent.ini");
  puStack_134 = (undefined1 *)0x4893f8;
  local_8 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_10);
  puStack_134 = (undefined1 *)0x489407;
  local_c = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  puStack_138 = &LAB_004894e6;
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
  puStack_138 = &LAB_004894ed;
  uStack_13c = 0x4894dd;
  FUN_00402f9c(local_8);
  uStack_13c = 0x4894e5;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 004895fc TBitmapManager.Create ==== */

void TBitmapManager_Create(int *param_1,char param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_134;
  undefined1 *puStackY_130;
  undefined1 *puStackY_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  if (param_2 != '\0') {
    puStackY_12c = (undefined1 *)0x48961c;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed8,in_stack_fffffedc);
    param_3 = extraout_ECX;
  }
  puStackY_12c = (undefined1 *)0x48962a;
  FUN_00404090((int)param_4);
  puStackY_130 = &LAB_004896cb;
  uStackY_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_134;
  puStackY_12c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  if (param_3 == 0) {
    FUN_00403c40("aResourceManager  =  nil");
  }
  param_1[1] = param_3;
  FUN_00403cb0(param_1 + 2,param_4);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&local_c,2);
  FUN_00403c5c((int *)&param_4);
  return;
}


/* ==== 00489760 FUN_00489760 ==== */

void FUN_00489760(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_16c;
  char *pcVar5;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int local_130;
  int local_12c;
  undefined *local_128;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined1 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_130 = 0;
  local_12c = 0;
  local_128 = (undefined *)0x0;
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  local_c = (undefined4 *)0x0;
  puStack_140 = (undefined1 *)0x4897a4;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_144 = &LAB_00489941;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_140 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar5 = "GetBitmapFromFile";
  FUN_00403f9c(&local_18,3);
  iVar1 = local_18;
  uVar3 = FUN_0045f46c();
  FUN_0045fa3c(uVar3,iVar1,0,(int)pcVar5);
  if (param_3 == (int *)0x0) {
    FUN_00402ee4(*param_1,local_11c);
    FUN_00403e80(&local_124,local_11c);
    pcStackY_16c = " aBitmap = nil";
    FUN_00403f9c(&local_120,4);
    FUN_00403c40(local_120);
  }
  FUN_00403f28((int *)&local_c,local_8,(undefined4 *)&DAT_004899c8);
  FUN_00403f28((int *)&local_128,(undefined4 *)param_1[2],local_c);
  uVar4 = FUN_004087a4(local_128);
  if ((char)uVar4 == '\0') {
    cVar2 = FUN_00463388(param_1[1],(undefined *)local_c);
    if (cVar2 == '\0') {
      FUN_00403f28(&local_130,(undefined4 *)"Unable to load: ",local_c);
      iVar1 = local_130;
      uVar3 = FUN_0045f46c();
      FUN_0045fe38(uVar3,iVar1);
    }
    else {
      FUN_00462d80((int *)param_1[1],(undefined *)local_c,param_3);
    }
  }
  else {
    FUN_00403f28(&local_12c,(undefined4 *)param_1[2],local_c);
    (**(code **)(*param_3 + 0x48))(param_3,local_12c);
  }
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = pcStackY_16c;
  FUN_00403c80(&local_130,5);
  FUN_00403c80(&local_1c,2);
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 004899ec FUN_004899ec ==== */

void FUN_004899ec(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_160;
  char *pcVar4;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  int local_128;
  int local_124 [3];
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_124[0] = 0;
  local_128 = 0;
  local_124[2] = 0;
  local_124[1] = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_134 = (undefined1 *)0x489a26;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  puStack_138 = &LAB_00489b92;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  local_10 = local_8;
  local_c = 0xb;
  puStack_134 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  pcVar4 = "GetImgBitmapFromFile";
  FUN_00403f9c(&local_14,3);
  iVar1 = local_14;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar4);
  if (param_1 == (int *)0x0) {
    FUN_00402ee4(iRam00000000,local_118);
    FUN_00403e80(local_124 + 1,local_118);
    pcStackY_160 = " Self = nil";
    FUN_00403f9c(local_124 + 2,4);
    FUN_00403c40(local_124[2]);
  }
  if (param_2 == 0) {
    FUN_00402ee4(*param_1,local_118);
    FUN_00403e80(&local_128,local_118);
    FUN_00403f9c(local_124,4);
    FUN_00403c40(local_124[0]);
  }
  piVar3 = (int *)FUN_0041b45c(*(int **)(param_2 + 0x128));
  FUN_00489760(param_1,local_8,piVar3);
  *in_FS_OFFSET = pcStackY_160;
  FUN_00403c80(&local_128,4);
  FUN_00403c80(&local_18,2);
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00489c28 FUN_00489c28 ==== */

void FUN_00489c28(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_168;
  undefined1 *puStackY_164;
  undefined1 *puStackY_160;
  char *pcStackY_15c;
  char *pcStackY_158;
  undefined *puStackY_154;
  int iStackY_150;
  char *pcVar4;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined1 local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_130 = (undefined1 *)0x489c56;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  puStack_134 = &LAB_00489dc2;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_130 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar4 = "GetImgTargaFromFile";
  iStackY_150 = 0x489ca9;
  FUN_00403f9c(&local_18,3);
  iStackY_150 = local_18;
  puStackY_154 = (undefined *)0x489cb2;
  uVar2 = FUN_0045f46c();
  iVar1 = iStackY_150;
  iStackY_150 = 0x489cbe;
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar4);
  uVar3 = extraout_ECX;
  if (param_2 == (int *)0x0) {
    iStackY_150 = 0x489ccf;
    FUN_00402ee4(*param_1,local_11c);
    iStackY_150 = 0x489ce0;
    FUN_00403e80(&local_124,local_11c);
    iStackY_150 = local_124;
    puStackY_154 = &DAT_00489dd8;
    pcStackY_158 = "GetImgTargaFromFile";
    pcStackY_15c = " aGDIGraphic = nil";
    puStackY_160 = (undefined1 *)0x489d05;
    FUN_00403f9c(&local_120,4);
    puStackY_160 = (undefined1 *)0x489d1a;
    FUN_00403c40(local_120);
    uVar3 = extraout_ECX_00;
  }
  puStackY_160 = (undefined1 *)0x489d26;
  local_c = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',uVar3);
  puStackY_164 = &LAB_00489d88;
  uStackY_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_168;
  puStackY_160 = &stack0xfffffffc;
  FUN_00489eb8(param_1,local_8,local_c);
  (**(code **)(**(int **)(param_2[0x4b] + 0xc) + 8))(*(int **)(param_2[0x4b] + 0xc),local_c);
  TControl_SetHeight(param_2,local_c[0x10]);
  TControl_SetWidth(param_2,local_c[0x23]);
  *in_FS_OFFSET = uStackY_168;
  puStackY_160 = &LAB_00489d8f;
  puStackY_164 = (undefined1 *)0x489d87;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 00489e40 FUN_00489e40 ==== */

void FUN_00489e40(int *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_1c = (undefined1 *)0x489e5a;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  puStack_20 = &LAB_00489ea8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00480b08(param_4,(int *)&local_10);
  FUN_00403f28((int *)&local_c,local_8,local_10);
  FUN_00489c28(param_1,param_2,local_c);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00489eaf;
  puStack_20 = (undefined1 *)0x489ea7;
  FUN_00403c80((int *)&local_10,3);
  return;
}


/* ==== 00489eb8 FUN_00489eb8 ==== */

void FUN_00489eb8(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_16c;
  char *pcVar5;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int local_130;
  int local_12c;
  undefined *local_128;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined1 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_130 = 0;
  local_12c = 0;
  local_128 = (undefined *)0x0;
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  local_c = (undefined4 *)0x0;
  puStack_140 = (undefined1 *)0x489efc;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_144 = &LAB_0048a099;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_140 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar5 = "GetTargaFromFile";
  FUN_00403f9c(&local_18,3);
  iVar1 = local_18;
  uVar3 = FUN_0045f46c();
  FUN_0045fa3c(uVar3,iVar1,0,(int)pcVar5);
  if (param_3 == (int *)0x0) {
    FUN_00402ee4(*param_1,local_11c);
    FUN_00403e80(&local_124,local_11c);
    pcStackY_16c = " Targa = nil";
    FUN_00403f9c(&local_120,4);
    FUN_00403c40(local_120);
  }
  FUN_00403f28((int *)&local_c,local_8,(undefined4 *)&DAT_0048a120);
  FUN_00403f28((int *)&local_128,(undefined4 *)param_1[2],local_c);
  uVar4 = FUN_004087a4(local_128);
  if ((char)uVar4 == '\0') {
    cVar2 = FUN_00463388(param_1[1],(undefined *)local_c);
    if (cVar2 == '\0') {
      FUN_00403f28(&local_130,(undefined4 *)"Unable to load: ",local_c);
      iVar1 = local_130;
      uVar3 = FUN_0045f46c();
      FUN_0045fe38(uVar3,iVar1);
    }
    else {
      FUN_004633dc((int *)param_1[1],(undefined *)local_c,param_3);
    }
  }
  else {
    FUN_00403f28(&local_12c,(undefined4 *)param_1[2],local_c);
    (**(code **)(*param_3 + 0x48))(param_3,local_12c);
  }
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = pcStackY_16c;
  FUN_00403c80(&local_130,5);
  FUN_00403c80(&local_1c,2);
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 0048a25c TGameIni.virtual_004 ==== */

int * TGameIni_virtual_004(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TDataObject_virtual_004(param_1,'\0',param_3);
  piVar1 = TDataList_virtual_018
                     ((int *)&PTR_TDataList_virtual_000_0045e240,'\x01',
                      (int)&PTR_TOtherRacer_virtual_000_0048a1c8);
  param_1[7] = (int)piVar1;
  piVar1 = TIntegerList_virtual_004
                     ((int *)&PTR_TIntegerList_virtual_000_0045e2b4,'\x01',extraout_ECX_00);
  param_1[6] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0048a2bc TGameIni.Destroy ==== */

void TGameIni_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0045e860(piVar1[7]);
  FUN_0040c968(piVar1 + 7);
  FUN_0040c968(piVar1 + 6);
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0048a300 TGameIni.DoLoadFromFile ==== */

void TGameIni_DoLoadFromFile(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_17c;
  undefined1 *puStackY_178;
  char *pcStackY_174;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  byte *local_130;
  byte *local_12c;
  int local_128;
  byte local_124 [256];
  int local_24;
  undefined4 *local_20;
  int *local_1c;
  int i_val [3];
  int *local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_130 = (byte *)0x0;
  local_12c = (byte *)0x0;
  local_128 = 0;
  local_20 = (undefined4 *)0x0;
  local_24 = 0;
  i_val[1] = 0;
  i_val[0] = 0;
  puStack_140 = &LAB_0048a5bd;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_124);
  FUN_00403e80(&local_24,local_124);
  FUN_00403f9c((int *)&local_20,3);
  puVar1 = local_20;
  uVar4 = FUN_0045f46c();
  FUN_0045fb90(uVar4,puVar1,0);
  iVar5 = (**(code **)(*local_c + 8))(local_c,"PLAYER","MONEY");
  local_8[2] = iVar5;
  iVar5 = (**(code **)(*local_c + 8))(local_c,"PLAYER","TURBO_AMOUNT");
  local_8[5] = iVar5;
  uVar2 = (**(code **)(*local_c + 0x10))(local_c,"PLAYER","FINISHED");
  *(undefined1 *)(local_8 + 3) = uVar2;
  uVar2 = (**(code **)(*local_c + 0x10))(local_c,"PLAYER","Out_Of_Time");
  *(undefined1 *)((int)local_8 + 0xd) = uVar2;
  uVar2 = (**(code **)(*local_c + 0x10))(local_c,"PLAYER","Total_Loss");
  *(undefined1 *)((int)local_8 + 0xe) = uVar2;
  iVar5 = (**(code **)(*local_c + 8))(local_c,"PLAYER","TRACKTIME");
  local_8[4] = iVar5;
  i_val[2] = 0;
  do {
    piVar6 = &local_128;
    uVar4 = i_val[2] + 1;
    if (SCARRY4(i_val[2],1)) {
      uVar4 = thunk_FUN_00402808(uVar4);
      piVar6 = extraout_EDX;
    }
    FUN_004085ac(uVar4,piVar6);
    pcStackY_174 = "_TIME";
    puStackY_178 = (undefined1 *)0x48a462;
    FUN_00403f9c(i_val,3);
    puStackY_178 = (undefined1 *)0x48a472;
    cVar3 = FUN_004583c4(local_c,"PLAYER",i_val[0]);
    if (cVar3 != '\0') {
      puStackY_178 = (undefined1 *)0x0;
      uStackY_17c = 0x48a488;
      iVar5 = (**(code **)(*local_c + 8))(local_c,"PLAYER",i_val[0]);
      FUN_0045eb08(local_8[6],iVar5);
    }
    i_val[2] = i_val[2] + 1;
  } while (i_val[2] != 5);
  i_val[2] = 0;
  FUN_004085ac(0,i_val);
  local_1c = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  pcStackY_174 = (char *)0x48a4d5;
  FUN_004603e0(local_c,"RACERS",i_val[0],i_val + 1,local_1c);
  pcStackY_174 = (char *)0x48a4e1;
  piVar6 = TDataObject_virtual_004
                     ((int *)&PTR_TOtherRacer_virtual_000_0048a1c8,'\x01',extraout_ECX_00);
  puStackY_178 = &LAB_0048a567;
  uStackY_17c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_17c;
  pcStackY_174 = &stack0xfffffffc;
  (**(code **)(*local_1c + 0xc))(local_1c,0,&local_12c);
  iVar5 = FUN_00408618(local_12c);
  iVar5 = TStatic_GetCharacterByGameIndex(*(int **)(*(int *)PTR_DAT_004ab694 + 0xcc),iVar5);
  piVar6[2] = iVar5;
  (**(code **)(*local_1c + 0xc))(local_1c,2,&local_130);
  iVar5 = FUN_00408618(local_130);
  piVar6[3] = iVar5;
  FUN_0045e7e4(local_8[7],piVar6);
  *in_FS_OFFSET = uStackY_17c;
  pcStackY_174 = &DAT_0048a56e;
  puStackY_178 = (undefined1 *)0x48a566;
  FUN_00402f9c(local_1c);
  return;
}


/* ==== 0048a6ac FUN_0048a6ac ==== */

undefined4 FUN_0048a6ac(int param_1)

{
  if (((*(char *)(param_1 + 0xc) == '\0') && (*(char *)(param_1 + 0xd) == '\0')) &&
     (*(char *)(param_1 + 0xe) == '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 0048a6c4 TGameIni.virtual_000 ==== */

void TGameIni_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x48a740,*(undefined4 *)(param_1 + 8));
  FUN_0045f038(param_1,0x48a758,*(char *)(param_1 + 0xc));
  FUN_0045f038(param_1,0x48a770,*(char *)(param_1 + 0xd));
  FUN_0045f038(param_1,0x48a784,*(char *)(param_1 + 0xe));
  FUN_0045ef0c(param_1,0x48a798,*(undefined4 *)(param_1 + 0x10));
  FUN_0045efa4(param_1,(undefined4 *)"FPlayerLapTimes",*(int **)(param_1 + 0x18));
  FUN_0045efa4(param_1,(undefined4 *)"FOtherRacerList",*(int **)(param_1 + 0x1c));
  return;
}


/* ==== 0048a7dc FUN_0048a7dc ==== */

void FUN_0048a7dc(int param_1,int param_2)

{
  FUN_0045e640(*(int *)(param_1 + 0x1c),param_2);
  return;
}


/* ==== 0048a7f4 FUN_0048a7f4 ==== */

void FUN_0048a7f4(int param_1,int param_2)

{
  FUN_0045e990(*(int *)(param_1 + 0x18),param_2);
  return;
}


/* ==== 0048a804 FUN_0048a804 ==== */

void FUN_0048a804(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_14c;
  undefined1 *puStackY_148;
  undefined1 *puStackY_144;
  char *pcVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined1 local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_18 = 0;
  local_1c = 0;
  puStack_124 = (undefined1 *)0x48a823;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_128 = &LAB_0048a8ff;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_124 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar3 = "LoadFromFile";
  puStackY_144 = (undefined1 *)0x48a876;
  FUN_00403f9c(&local_18,3);
  puStackY_144 = (undefined1 *)local_18;
  puStackY_148 = (undefined1 *)0x48a87f;
  uVar2 = FUN_0045f46c();
  puVar1 = puStackY_144;
  puStackY_144 = (undefined1 *)0x48a88b;
  FUN_0045fa3c(uVar2,(int)puVar1,0,(int)pcVar3);
  puStackY_144 = (undefined1 *)0x48a89a;
  local_c = FUN_00457d38((int *)&PTR_TSafeIniFile_virtual_000_0046004c,'\x01',local_8);
  puStackY_148 = &LAB_0048a8cb;
  uStackY_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_14c;
  puStackY_144 = &stack0xfffffffc;
  TGameIni_DoLoadFromFile(param_1,local_c);
  *in_FS_OFFSET = uStackY_14c;
  puStackY_144 = &LAB_0048a8d2;
  puStackY_148 = (undefined1 *)0x48a8ca;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 0048a934 TOtherRacer.virtual_000 ==== */

void TOtherRacer_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x48a964,*(undefined4 *)(param_1 + 8));
  FUN_0045ef0c(param_1,0x48a97c,*(undefined4 *)(param_1 + 0xc));
  return;
}


/* ==== 0048aa2c TSaveGame.virtual_004 ==== */

void TSaveGame_virtual_004(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
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
    puStackY_128 = (undefined1 *)0x48aa4b;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_fffffedc,in_stack_fffffee0);
  }
  puStackY_12c = &LAB_0048ab13;
  uStackY_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_130;
  puStackY_128 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TDataObject_virtual_004(param_1,'\0',extraout_ECX);
  piVar3 = FUN_0048c76c((int *)&PTR_TSaveGameHeader_virtual_000_0048c744,'\x01',(int)param_1);
  param_1[2] = (int)piVar3;
  iVar4 = TTourState_virtual_004((int *)&PTR_TTourState_virtual_000_0048cd54,'\x01');
  param_1[4] = iVar4;
  piVar3 = TDataObject_virtual_004((int *)&PTR_TQRState_virtual_000_0048cce4,'\x01',extraout_ECX_00)
  ;
  param_1[3] = (int)piVar3;
  iVar4 = TSettings_virtual_004((int *)&PTR_TSettings_virtual_000_004a6010,'\x01');
  param_1[6] = iVar4;
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048ab58 TSaveGame.Destroy ==== */

void TSaveGame_Destroy(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
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
  puStack_118 = (undefined1 *)0x48ab70;
  piVar2 = FUN_004032fc(param_1,param_2);
  puStack_11c = &LAB_0048ac1d;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  FUN_00402ee4(*piVar2,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  FUN_0040c968(piVar2 + 2);
  FUN_0040c968(piVar2 + 6);
  FUN_0040c968(piVar2 + 4);
  FUN_0040c968(piVar2 + 3);
  TDataObject_Destroy(piVar2,extraout_DL & 0xfc);
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = "Destroy";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048ac58 TSaveGame.virtual_00c ==== */

void TSaveGame_virtual_00c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_118 = &LAB_0048ace6;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c(&local_8,5);
  FUN_00403c40(local_8);
  *in_FS_OFFSET = "This method not implemented";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048ad68 TSaveGame.virtual_014 ==== */

void TSaveGame_virtual_014(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0048ae2e;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar5 = &DAT_0048ae44;
  pcVar4 = "LoadFromStream";
  iVar6 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar2 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  iVar1 = *(int *)param_1[2];
  (**(code **)(iVar1 + 0x14))((int *)param_1[2],param_2,iVar1,pcVar4,puVar5,iVar6);
  (**(code **)(*(int *)param_1[6] + 0x14))((int *)param_1[6],param_2);
  (**(code **)(*(int *)param_1[4] + 0x14))((int *)param_1[4],param_2);
  (**(code **)(*(int *)param_1[3] + 0x14))((int *)param_1[3],param_2);
  FUN_0045e350(param_2,param_1 + 5);
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = pcVar4;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048ae64 TSaveGame.virtual_010 ==== */

void TSaveGame_virtual_010(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0048af2a;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar5 = &DAT_0048af40;
  pcVar4 = "SaveToStream";
  iVar6 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar2 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  iVar1 = *(int *)param_1[2];
  (**(code **)(iVar1 + 0x10))((int *)param_1[2],param_2,iVar1,pcVar4,puVar5,iVar6);
  (**(code **)(*(int *)param_1[6] + 0x10))((int *)param_1[6],param_2);
  (**(code **)(*(int *)param_1[4] + 0x10))((int *)param_1[4],param_2);
  (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],param_2);
  FUN_0045e380(param_2,param_1[5]);
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = pcVar4;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048af60 TSaveGame.LoadFromFile ==== */

void TSaveGame_LoadFromFile(int *param_1,undefined *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined1 *puStackY_34;
  int iVar2;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_18;
  undefined1 local_14;
  int *local_10;
  undefined *local_c;
  int *local_8;
  
  puStack_1c = (undefined1 *)0x48af74;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404090((int)param_2);
  puStack_20 = &LAB_0048b055;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 == (int *)0x0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00403c40(" Self = nil: LoadFromFile");
  }
  local_18 = local_c;
  local_14 = 0xb;
  iVar2 = 0;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,0x48b0b8,0,iVar2);
  puStackY_34 = (undefined1 *)0x48afd2;
  local_10 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0045e160,'\x01',local_c,0);
  puStackY_34 = &LAB_0048b01f;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  (**(code **)(*local_8 + 0x14))(local_8,local_10);
  FUN_00482830(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),*(int *)(local_8[6] + 0x18));
  *in_FS_OFFSET = uStackY_38;
  puStackY_34 = (undefined1 *)0x48b01e;
  FUN_00402f9c(local_10);
  return;
}


/* ==== 0048b0c8 TSaveGame.SaveToFile ==== */

void TSaveGame_SaveToFile(int *param_1,undefined *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined1 *puStackY_34;
  int iVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x48b0dc;
  FUN_00404090((int)param_2);
  puStack_20 = &LAB_0048b193;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (param_1 == (int *)0x0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00403c40(" Self = nil: SaveToFile");
  }
  iVar3 = 0;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,0x48b1f4,0,iVar3);
  puStackY_34 = (undefined1 *)0x48b13b;
  piVar2 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0045e160,'\x01',param_2,0xffff);
  puStackY_34 = &LAB_0048b16c;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  (**(code **)(*param_1 + 0x10))(param_1,piVar2);
  *in_FS_OFFSET = uStackY_38;
  puStackY_34 = (undefined1 *)0x48b16b;
  FUN_00402f9c(piVar2);
  return;
}


/* ==== 0048b200 TSaveGame.virtual_000 ==== */

void TSaveGame_virtual_000(int param_1)

{
  FUN_0045efa4(param_1,(undefined4 *)"FHeader",*(int **)(param_1 + 8));
  FUN_0045ef0c(param_1,0x48b26c,*(undefined4 *)(param_1 + 0x14));
  FUN_0045efa4(param_1,(undefined4 *)"TourState",*(int **)(param_1 + 0x10));
  FUN_0045efa4(param_1,(undefined4 *)"QRState",*(int **)(param_1 + 0xc));
  FUN_0045efa4(param_1,(undefined4 *)"Settings",*(int **)(param_1 + 0x18));
  return;
}


/* ==== 0048b2b4 FUN_0048b2b4 ==== */

void FUN_0048b2b4(int param_1,byte *param_2)

{
  byte local_28 [36];
  
  FUN_0040287c((byte *)(*(int *)(param_1 + 8) + 8),1,0xc,local_28);
  FUN_00402b0c(param_2,local_28,0x20);
  return;
}


/* ==== 0048b2ec FUN_0048b2ec ==== */

void FUN_0048b2ec(int param_1,byte *param_2)

{
  byte *pbVar1;
  uint i_val;
  bool bVar2;
  byte local_4c [39];
  byte local_25;
  byte abStack_24 [32];
  
  local_25 = *param_2;
  if (0x1f < local_25) {
    local_25 = 0x20;
  }
  pbVar1 = abStack_24;
  for (i_val = (uint)local_25; param_2 = param_2 + 1, i_val != 0; i_val = i_val - 1) {
    *pbVar1 = *param_2;
    pbVar1 = pbVar1 + 1;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 8) + 8);
  i_val = *pbVar1 + 1;
  bVar2 = i_val == 0;
  FUN_00402bc0((int *)pbVar1,(int *)&local_25,i_val);
  if (!bVar2) {
    FUN_0040287c(&local_25,1,0xc,local_4c);
    FUN_00402b0c((byte *)(*(int *)(param_1 + 8) + 8),local_4c,0x20);
  }
  return;
}


/* ==== 0048b350 TSaveGame.WriteControlStuffToIni ==== */

void TSaveGame_WriteControlStuffToIni(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_0048b4dc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar5 = &DAT_0048b4f4;
  pcVar4 = "WriteControlStuffToIni";
  iVar6 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar3 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,0);
  uVar2 = FUN_004a6a38(*(int *)(param_1[6] + 0xc));
  (**(code **)(*param_2 + 0xc))(param_2,"INPUT","DEVICE",uVar2,pcVar4,puVar5,iVar6);
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT",&DAT_0048b544,*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x10));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT","RIGHT",*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x14));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT",&DAT_0048b564,*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 8));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT",&DAT_0048b570,*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0xc));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT","EXTRA1",*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x18));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT","EXTRA2",*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x1c));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT","EXTRA3",*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x20));
  uVar2 = FUN_004a6a70(*(int *)(param_1[6] + 0xc));
  (**(code **)(*param_2 + 0xc))(param_2,"INPUT","SENSITIVITY");
  uVar1 = FUN_0045f46c();
  TDebug_ExitProc(uVar1);
  *in_FS_OFFSET = uVar2;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048b5bc TSaveGame.WriteQRStuffToIni ==== */

void TSaveGame_WriteQRStuffToIni(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_0048b6f2;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar5 = &DAT_0048b708;
  pcVar4 = "WriteQRStuffToIni";
  iVar2 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar3 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,0);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","MONEY",0,pcVar4,puVar5,iVar2);
  iVar2 = FUN_0048c20c((int)param_1);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER",&DAT_0048b754,*(undefined4 *)(iVar2 + 0xc));
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","TURBO_AMOUNT",100);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","MOTOR",1);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","BANDEN",1);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER",&DAT_0048b798,1);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","VERSNELLINGSBAK",1);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","POSITION");
  uVar1 = FUN_0045f46c();
  TDebug_ExitProc(uVar1);
  *in_FS_OFFSET = 4;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048b7c8 TSaveGame.WriteVRStuffToIni ==== */

void TSaveGame_WriteVRStuffToIni(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_0048b94a;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar7 = &DAT_0048b960;
  pcVar6 = "WriteVRStuffToIni";
  iVar4 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar5 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar5,0);
  iVar3 = FUN_0048d458(param_1[4]);
  (**(code **)(*param_2 + 0xc))
            (param_2,"PLAYER","MONEY",*(undefined4 *)(iVar3 + 8),pcVar6,puVar7,iVar4);
  iVar4 = FUN_0048c22c((int)param_1);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER",&DAT_0048b9ac,*(undefined4 *)(iVar4 + 0xc));
  iVar4 = FUN_0048d458(param_1[4]);
  uVar1 = FUN_0048d8c0(iVar4,0);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","MOTOR",uVar1);
  iVar4 = FUN_0048d458(param_1[4]);
  uVar1 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","BANDEN",uVar1);
  iVar4 = FUN_0048d458(param_1[4]);
  uVar1 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),2));
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER",&DAT_0048b9d8,uVar1);
  iVar4 = FUN_0048d458(param_1[4]);
  uVar1 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),3));
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","VERSNELLINGSBAK",uVar1);
  iVar4 = FUN_0048d458(param_1[4]);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","TURBO_AMOUNT",*(undefined4 *)(iVar4 + 0x10));
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","POSITION");
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = 4;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048ba20 FUN_0048ba20 ==== */

void FUN_0048ba20(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_0048bbc8;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  (**(code **)(*param_2 + 0xc))
            (param_2,"PROGRAM","RESOLUTION",*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c));
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x1d) == '\0') {
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","MUSICVOLUME",0);
  }
  else {
    uVar2 = FUN_00480f04(*(int *)(*(int *)(param_1 + 0x18) + 0x18));
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","MUSICVOLUME",uVar2);
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x1c) == '\0') {
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","SFXVOLUME",0);
  }
  else {
    uVar2 = FUN_00480f04(*(int *)(*(int *)(param_1 + 0x18) + 0x10));
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","SFXVOLUME",uVar2);
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x1e) == '\0') {
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","POLICEVOLUME",0);
  }
  else {
    uVar2 = FUN_00480f04(*(int *)(*(int *)(param_1 + 0x18) + 0x14));
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","POLICEVOLUME",uVar2);
  }
  (**(code **)(*param_2 + 0xc))
            (param_2,"directx","index",*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20));
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x28) == '\0') {
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,0x48bca8);
  }
  else {
    FUN_0048128c(*(undefined4 **)(*(int *)(param_1 + 0x18) + 0x24),&local_8);
    (**(code **)(*param_2 + 4))(param_2,"directx",&DAT_0048bc74,local_8);
    FUN_0048128c(*(undefined4 **)(*(int *)(param_1 + 0x18) + 0x24),(int *)&local_10);
    FUN_00403f28(&local_c,(undefined4 *)"RASER.INI : [directx] guid=",local_10);
    iVar3 = local_c;
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,iVar3);
  }
  (**(code **)(*param_2 + 0xc))
            (param_2,"program","resolution",*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c));
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x38);
  (**(code **)(*param_2 + 0xc))(param_2,"program","focus");
  *in_FS_OFFSET = uVar1;
  FUN_00403c80((int *)&local_10,3);
  return;
}


/* ==== 0048bcf0 TSaveGame.WriteGeneralStuffToIni ==== */

void TSaveGame_WriteGeneralStuffToIni(int *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_0048bf21;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar8 = &DAT_0048bf38;
  pcVar7 = "WriteGeneralStuffToIni";
  iVar4 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar6 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar6,0);
  iVar3 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  (**(code **)(*param_2 + 0xc))
            (param_2,"ETAPPE","ETAPPE",*(undefined4 *)(iVar3 + 0x44),pcVar7,puVar8,iVar4);
  iVar4 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  (**(code **)(*param_2 + 0xc))(param_2,"OPTIONS","NRLAPS",*(undefined4 *)(iVar4 + 0x48));
  iVar4 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  bVar1 = FUN_00461c84(iVar4);
  (**(code **)(*param_2 + 0x14))(param_2,"OPTIONS","OPPONENTS",CONCAT31(extraout_var,bVar1) ^ 1);
  iVar4 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  (**(code **)(*param_2 + 0x14))(param_2,"ETAPPE","BRITISH",*(undefined1 *)(iVar4 + 0x4c));
  (**(code **)(*param_2 + 0xc))(param_2,"LEAGUE","LEAGUE",*(undefined1 *)(param_1[6] + 8));
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","DAMAGE",0);
  iVar4 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  bVar1 = FUN_00461c84(iVar4);
  if (bVar1) {
    uVar5 = FUN_0048e6ec(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),
                         CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_1[6] + 8)));
    (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","CHECKPOINT_SPEED",uVar5);
  }
  (**(code **)(*param_2 + 0xc))(param_2,"GFX OPTIONS","gamma",*(undefined4 *)(param_1[6] + 0x30));
  (**(code **)(*param_2 + 0x14))
            (param_2,"GFX OPTIONS","alpha_blending",
             CONCAT31((int3)((uint)param_1[6] >> 8),*(undefined1 *)(param_1[6] + 0x35)));
  uVar5 = FUN_004a7160(param_1[6]);
  (**(code **)(*param_2 + 0xc))(param_2,"GFX OPTIONS","CUSTOM_TEXTURE_MEMORY",uVar5);
  (**(code **)(*param_2 + 0x14))
            (param_2,"OPTIONS","waitvbl",
             CONCAT31((int3)((uint)param_1[6] >> 8),*(undefined1 *)(param_1[6] + 0x3d)));
  uVar5 = FUN_004a7150(param_1[6]);
  (**(code **)(*param_2 + 0xc))(param_2,"OPTIONS","filter");
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = uVar5;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048c07c TSaveGame.ReadInstalledResolution ==== */

void TSaveGame_ReadInstalledResolution(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 *local_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_114 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_124 = &LAB_0048c196;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  iStack_12c = 0x48c0b2;
  FUN_00402ee4(*param_1,local_110);
  iStack_12c = 0x48c0c0;
  FUN_00403e80(&local_10,local_110);
  iStack_12c = local_10;
  puStack_130 = &DAT_0048c1ac;
  pcStack_134 = "ReadInstalledResolution";
  puStack_138 = (undefined4 *)0x48c0da;
  FUN_00403f9c((int *)&local_c,3);
  puStack_138 = local_c;
  puStack_13c = (undefined1 *)0x48c0e3;
  uVar2 = FUN_0045f46c();
  puVar1 = puStack_138;
  puStack_138 = (undefined4 *)0x48c0ef;
  FUN_0045fb90(uVar2,puVar1,0);
  puStack_138 = (undefined4 *)0x48c10c;
  FUN_00403f28((int *)&local_114,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"raser.ini");
  puStack_138 = (undefined4 *)0x48c11e;
  local_8 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_114);
  puStack_13c = &LAB_0048c15f;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = (undefined4 *)&stack0xfffffffc;
  uVar3 = (**(code **)(*local_8 + 8))(local_8,"PROGRAM","RESOLUTION");
  *(undefined4 *)(param_1[6] + 0x2c) = uVar3;
  *in_FS_OFFSET = 3;
  puStack_13c = &LAB_0048c166;
  uStack_140 = 0x48c15e;
  FUN_00402f9c(local_8);
  return;
}


/* ==== 0048c20c FUN_0048c20c ==== */

void FUN_0048c20c(int param_1)

{
  FUN_004625a4(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38),
               *(int *)(*(int *)(param_1 + 0xc) + 8));
  return;
}


/* ==== 0048c22c FUN_0048c22c ==== */

void FUN_0048c22c(int param_1)

{
  FUN_004625a4(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),
               *(int *)(*(int *)(param_1 + 0x10) + 8));
  return;
}


/* ==== 0048c24c FUN_0048c24c ==== */

void FUN_0048c24c(int *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *extraout_ECX;
  int *in_FS_OFFSET;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 in_stack_fffffec8;
  undefined4 in_stack_fffffecc;
  byte local_120 [256];
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_1c = 0;
  local_20 = 0;
  if (param_2 != '\0') {
    puStack_13c = (undefined1 *)0x48c26b;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffec8,in_stack_fffffecc);
    param_3 = extraout_ECX;
  }
  puStack_13c = (undefined1 *)0x48c27a;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  puStack_140 = &LAB_0048c39f;
  iStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_144;
  local_18 = local_8;
  local_14 = 0xb;
  local_10 = param_4;
  local_c = 0;
  puStack_13c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_120);
  FUN_00403e80(&local_20,local_120);
  puVar5 = &DAT_0048c3d0;
  pcVar4 = "CreateNewPlayer";
  iVar6 = local_20;
  FUN_00403f9c(&local_1c,3);
  iVar1 = local_1c;
  uVar3 = FUN_0045f46c();
  FUN_0045fa3c(uVar3,iVar1,0,(int)pcVar4);
  (**(code **)(*param_1 + 4))(param_1,0,*param_1,pcVar4,puVar5,iVar6);
  FUN_00403eb8(local_120,local_8,0xff);
  FUN_0048b2ec((int)param_1,local_120);
  FUN_0048d180((int *)param_1[4],
               *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c) + 0x10));
  FUN_0048d180((int *)param_1[3],
               *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38) + 0x10));
  (**(code **)(*(int *)param_1[6] + 0xc))
            ((int *)param_1[6],*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30));
  uVar2 = TData_ReadTextureMemory();
  *(undefined1 *)(param_1[6] + 0x3c) = uVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = (int)pcVar4;
  FUN_00403c80(&local_20,2);
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0048c3f0 TSaveGame.WriteToInis ==== */

void TSaveGame_WriteToInis(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 local_11c;
  undefined4 *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_11c = 0;
  local_118 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_124 = &LAB_0048c5aa;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  iStack_12c = 0x48c42e;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_114);
  iStack_12c = 0x48c43c;
  FUN_00403e80(&local_14,local_114);
  iStack_12c = local_14;
  puStack_130 = &DAT_0048c5c0;
  pcStack_134 = "WriteToInis";
  puStack_138 = (undefined4 *)0x48c456;
  FUN_00403f9c((int *)&local_10,3);
  puStack_138 = local_10;
  puStack_13c = (undefined1 *)0x48c45f;
  uVar2 = FUN_0045f46c();
  puVar1 = puStack_138;
  puStack_138 = (undefined4 *)0x48c46b;
  FUN_0045fb90(uVar2,puVar1,0);
  puStack_138 = (undefined4 *)0x48c488;
  FUN_00403f28((int *)&local_118,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"game.ini");
  puStack_138 = (undefined4 *)0x48c49a;
  local_c = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_118);
  puStack_13c = &LAB_0048c506;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = (undefined4 *)&stack0xfffffffc;
  TSaveGame_WriteControlStuffToIni(local_8,local_c);
  TSaveGame_WriteGeneralStuffToIni(local_8,local_c);
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x01') {
    TSaveGame_WriteQRStuffToIni(local_8,local_c);
  }
  else if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x02') {
    TSaveGame_WriteVRStuffToIni(local_8,local_c);
  }
  *in_FS_OFFSET = uStack_140;
  puStack_138 = (undefined4 *)&LAB_0048c50d;
  puStack_13c = (undefined1 *)0x48c505;
  FUN_00402f9c(local_c);
  return;
}


