/* Menu.exe — units/MainForm.pas: 16 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a4d20 TfrmMain.FormCreate ==== */

void TfrmMain_FormCreate(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HWND pHVar4;
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
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,(undefined4 *)"FormCreate",0);
  *(undefined1 *)(param_1 + 0xb4) = 1;
  uVar2 = FUN_0044b100();
  uVar3 = FUN_0044b0f4();
  (**(code **)(*param_1 + 0x7c))(param_1,0,0,uVar3,uVar2);
  FUN_0044cea8(*(int *)PTR_DAT_004ab8ac,*(uint **)(PTR_DAT_004ab8b4 + 0x10));
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_8);
  TGroupBox_SetCaption((int)param_1,local_8);
  pHVar4 = FindWindowA(PTR_s_Progman_004ab5bc,(LPCSTR)0x0);
  param_1[0xb5] = (int)pHVar4;
  pHVar4 = FindWindowA(PTR_s_Shell_TrayWnd_004ab5c0,(LPCSTR)0x0);
  param_1[0xb6] = (int)pHVar4;
  ShowWindow((HWND)param_1[0xb5],0);
  ShowWindow((HWND)param_1[0xb6],0);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uVar3;
  puStack_1c = &LAB_004a4e0f;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004a4e2c TfrmMain.FormDestroy ==== */

void TfrmMain_FormDestroy(int *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
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
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar2 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar2,0);
  ShowWindow((HWND)param_1[0xb5],9);
  ShowWindow((HWND)param_1[0xb6],9);
  FUN_00452d8c(&DAT_00452a8c);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = "FormDestroy";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a4f14 TfrmMain.FormShow ==== */

void TfrmMain_FormShow(int *param_1)

{
  uint uVar1;
  int system_metrics;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
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
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar2 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar2,0);
  system_metrics = GetSystemMetrics(1);
  TControl_SetHeight(param_1,system_metrics);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a4fe8 TfrmMain.FormActivate ==== */

void TfrmMain_FormActivate(int *param_1)

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
  puStack_118 = &LAB_004a509a;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if ((char)param_1[0xb4] != '\0') {
    (**(code **)(*param_1 + 0x80))();
    FUN_004a5d70(param_1);
  }
  *(undefined1 *)(param_1 + 0xb4) = 0;
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FormActivate";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a50d0 FUN_004a50d0 ==== */

void FUN_004a50d0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
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
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"ShowIntro",0);
  FUN_00408a30(*(undefined **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10),(int *)&local_c);
  FUN_00403f28((int *)&local_8,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),local_c);
  uVar3 = FUN_004087a4((undefined *)local_8);
  cVar4 = (char)uVar3;
  if (cVar4 == '\0') {
    FUN_00403f28(&local_10,(undefined4 *)"intro not found : ",local_8);
    iVar1 = local_10;
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,iVar1);
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,0x4a5214);
    FUN_004a5c24(param_1,(int *)&local_8);
    cVar4 = local_8 != (undefined4 *)0x0;
  }
  if (cVar4 == '\0') {
    FUN_00403f28(&local_14,(undefined4 *)"final search: intro not found : ",local_8);
    iVar1 = local_14;
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,iVar1);
  }
  else {
    FUN_004a4850(local_8);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004a51d3;
  puStack_20 = (undefined1 *)0x4a51cb;
  FUN_00403c80(&local_14,4);
  return;
}


/* ==== 004a525c FUN_004a525c ==== */

void FUN_004a525c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
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
  FUN_00402ee4(*param_1,local_110);
  puStack_12c = (undefined1 *)0x4a529f;
  FUN_00403e80(&local_10,local_110);
  puStack_12c = (undefined1 *)local_10;
  puStack_130 = &DAT_004a53a0;
  pcStack_134 = "GetPlayer";
  puStack_138 = (undefined4 *)0x4a52b9;
  FUN_00403f9c((int *)&local_c,3);
  puStack_138 = local_c;
  puStack_13c = (undefined1 *)0x4a52c2;
  uVar3 = FUN_0045f46c();
  puVar2 = puStack_138;
  puStack_138 = (undefined4 *)0x4a52ce;
  FUN_0045fb90(uVar3,puVar2,0);
  iVar5 = 1;
  iVar1 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14);
  if (iVar1 < 0) {
    puStack_138 = (undefined4 *)0x4a5340;
    iVar5 = FUN_004a53d8(local_8);
  }
  else {
    puStack_13c = &LAB_004a5313;
    uStack_140 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_140;
    puStack_138 = (undefined4 *)&stack0xfffffffc;
    FUN_0047f840(*(int **)PTR_DAT_004ab694,iVar1);
    *in_FS_OFFSET = uStack_140;
  }
  if (iVar5 == 1) {
    puStack_138 = (undefined4 *)0x4a534f;
    piVar4 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_0049d4bc);
    puStack_138 = (undefined4 *)0x4a535a;
    piVar4 = (int *)FUN_0040312c(piVar4,(int)&PTR_TWinControl_virtual_000_0049d4bc);
    puStack_138 = (undefined4 *)0x4a5362;
    (**(code **)(*piVar4 + 0xf4))();
  }
  puStack_138 = (undefined4 *)0x4a5367;
  uVar3 = FUN_0045f46c();
  puStack_138 = (undefined4 *)0x4a536c;
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = pcStack_134;
  puStack_12c = &LAB_004a538e;
  puStack_130 = (undefined *)0x4a5386;
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 004a53d8 FUN_004a53d8 ==== */

void FUN_004a53d8(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
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
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar1 = local_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  do {
    iVar3 = FUN_00498414((int *)&local_8);
    if (iVar3 == 2) {
      FUN_0044d3f0();
      break;
    }
  } while (local_8 == (undefined4 *)0x0);
  if (local_8 != (undefined4 *)0x0) {
    FUN_0047fbd4(*(int **)PTR_DAT_004ab694,local_8);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "AskForNewPlayer";
  FUN_00403c80(&local_10,3);
  return;
}


/* ==== 004a54dc FUN_004a54dc ==== */

void FUN_004a54dc(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
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
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  iVar4 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  bVar2 = FUN_00461c84(iVar4);
  if (bVar2) {
    *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) = *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) | 1;
  }
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) != '\0') {
    iVar4 = FUN_0048c604(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
    bVar2 = FUN_00461c84(iVar4);
    if (!bVar2) {
      FUN_0048003c(*(int **)PTR_DAT_004ab694);
    }
    FUN_0049ed60();
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "FillRaceResultsQR";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a5624 FUN_004a5624 ==== */

void FUN_004a5624(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
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
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar2 = local_8;
  uVar4 = FUN_0045f46c();
  FUN_0045fb90(uVar4,puVar2,0);
  iVar5 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  bVar3 = FUN_00461c84(iVar5);
  if (bVar3) {
    *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 1;
  }
  iVar5 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  bVar3 = FUN_00461c84(iVar5);
  if (bVar3) {
    if (*(char *)(*(int *)(*(int *)puVar1 + 200) + 0xc) != '\0') {
      iVar5 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dc38(iVar5);
      iVar5 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dca4(iVar5,*(int *)(*(int *)(*(int *)puVar1 + 200) + 8));
      iVar5 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dcb4(iVar5,*(int *)(*(int *)(*(int *)puVar1 + 200) + 0x14));
      FUN_0049ed60();
      FUN_0049eef0();
    }
  }
  else if (*(char *)(*(int *)(*(int *)puVar1 + 200) + 0xc) != '\0') {
    iVar5 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dc38(iVar5);
    iVar5 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dca4(iVar5,*(int *)(*(int *)(*(int *)puVar1 + 200) + 8));
    iVar5 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dcb4(iVar5,*(int *)(*(int *)(*(int *)puVar1 + 200) + 0x14));
    FUN_0048003c(*(int **)puVar1);
    FUN_0049ed60();
    iVar5 = *(int *)(*(int *)puVar1 + 0xa4);
    if (iVar5 == 0) {
      FUN_0049f010();
    }
    else {
      iVar6 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
      iVar7 = *(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18);
      iVar7 = FUN_00462070(iVar6,CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(iVar7 + 8)));
      if (iVar5 <= iVar7) {
        FUN_0049f100();
      }
    }
  }
  piVar8 = (int *)FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  piVar8 = (int *)(**(code **)(*piVar8 + 8))();
  uVar4 = FUN_0045f46c();
  FUN_0045fd98(uVar4,0x4a5890,piVar8);
  uVar4 = FUN_0045f46c();
  FUN_0045fc70(uVar4);
  *in_FS_OFFSET = "FillRaceResultsTour";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a58a4 FUN_004a58a4 ==== */

void FUN_004a58a4(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
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
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) != '\0') {
    iVar4 = FUN_0048c604(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
    bVar2 = FUN_00461c84(iVar4);
    if (!bVar2) {
      piVar5 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_004a0478);
      piVar5 = (int *)FUN_0040312c(piVar5,(int)&PTR_TWinControl_virtual_000_004a0478);
      (**(code **)(*piVar5 + 0xf4))();
      goto LAB_004a597a;
    }
  }
  piVar5 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_0049ba10);
  piVar5 = (int *)FUN_0040312c(piVar5,(int)&PTR_TWinControl_virtual_000_0049ba10);
  (**(code **)(*piVar5 + 0xf4))();
LAB_004a597a:
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "FlowQR";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a59cc FUN_004a59cc ==== */

void FUN_004a59cc(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
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
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) == '\0') {
    if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 1) == 0) {
      piVar3 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_0049999c);
      piVar3 = (int *)FUN_0040312c(piVar3,(int)&PTR_TWinControl_virtual_000_0049999c);
      (**(code **)(*piVar3 + 0xf4))();
    }
    else {
      uVar4 = FUN_0048a6ac(*(int *)(*(int *)PTR_DAT_004ab694 + 200));
      if ((char)uVar4 == '\0') {
        piVar3 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_004a0f0c);
        piVar3 = (int *)FUN_0040312c(piVar3,(int)&PTR_TWinControl_virtual_000_004a0f0c);
        (**(code **)(*piVar3 + 0xf4))();
      }
      else {
        piVar3 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_0049999c);
        piVar3 = (int *)FUN_0040312c(piVar3,(int)&PTR_TWinControl_virtual_000_0049999c);
        (**(code **)(*piVar3 + 0xf4))();
      }
    }
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 1) == 0) {
    piVar3 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_004a0478);
    piVar3 = (int *)FUN_0040312c(piVar3,(int)&PTR_TWinControl_virtual_000_004a0478);
    (**(code **)(*piVar3 + 0xf4))();
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 2) == 0) {
    piVar3 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_004a0f0c);
    piVar3 = (int *)FUN_0040312c(piVar3,(int)&PTR_TWinControl_virtual_000_004a0f0c);
    (**(code **)(*piVar3 + 0xf4))();
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 4) == 0) {
    piVar3 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_004a0c34);
    piVar3 = (int *)FUN_0040312c(piVar3,(int)&PTR_TWinControl_virtual_000_004a0c34);
    (**(code **)(*piVar3 + 0xf4))();
  }
  else {
    piVar3 = (int *)FUN_0048f760((int)&PTR_TWinControl_virtual_000_004a3cf8);
    piVar3 = (int *)FUN_0040312c(piVar3,(int)&PTR_TWinControl_virtual_000_004a3cf8);
    (**(code **)(*piVar3 + 0xf4))();
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FlowTour";
  FUN_00403c80(&local_c,2);
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
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 004a5c24 FUN_004a5c24 ==== */

void FUN_004a5c24(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
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
  FUN_00403c5c(param_2);
  i_val = CONCAT31((int3)((uint)unaff_EBX >> 8),99);
  cVar1 = local_9;
  do {
    local_9 = cVar1;
    FUN_00403e04(local_14 + 1,i_val);
    uStack_2c = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10);
    FUN_00403f9c((int *)&local_8,3);
    uVar2 = FUN_004087a4((undefined *)local_8);
    local_9 = (char)uVar2;
    if (local_9 != '\0') {
      FUN_00403cb0(param_2,local_8);
      break;
    }
    i_val = i_val + 1;
    cVar1 = 0;
  } while ((char)i_val != '{');
  if (local_9 == '\0') {
    FUN_00403e04(&local_18,i_val);
    uStack_48 = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10);
    FUN_00403f9c(local_14,4);
    i_val = local_14[0];
    uVar3 = FUN_0045f46c();
    FUN_0045fe88(uVar3,i_val);
  }
  *in_FS_OFFSET = uStack_48;
  FUN_00403c80(&local_18,3);
  FUN_00403c5c((int *)&local_8);
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


/* ==== 004a5d70 FUN_004a5d70 ==== */

void FUN_004a5d70(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
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
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"StartUp",0);
  iVar3 = FUN_004a5d4c(param_1);
  if (iVar3 == 2) {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 0;
    FUN_0047ff64(*(int **)PTR_DAT_004ab694);
  }
  else {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) =
         *(undefined1 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9);
    cVar1 = *(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9);
    if (cVar1 == '\0') {
      FUN_004a50d0(param_1);
      FUN_004820d0(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),
                   *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      FUN_004a525c(param_1);
    }
    else if (cVar1 == '\x01') {
      FUN_004820d0(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),
                   *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      FUN_0047f840(*(int **)PTR_DAT_004ab694,
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14));
      FUN_004a54dc(param_1);
      FUN_004a58a4(param_1);
    }
    else if (cVar1 == '\x02') {
      FUN_004820d0(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),
                   *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      FUN_0047f840(*(int **)PTR_DAT_004ab694,
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14));
      FUN_004a5624(param_1);
      FUN_004a59cc(param_1);
    }
    else {
      FUN_004085ac((uint)*(byte *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9),(int *)&local_c);
      FUN_00403f28(&local_8,(undefined4 *)"illegal value of Previous : ",local_c);
      iVar3 = local_8;
      uVar2 = FUN_0045f46c();
      FUN_0045fe88(uVar2,iVar3);
    }
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004a5f4b;
  puStack_18 = (undefined1 *)0x4a5f43;
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 004a60a4 TSettings.virtual_004 ==== */

void TSettings_virtual_004(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
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
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_fffffedc,in_stack_fffffee0);
  }
  puStackY_12c = &LAB_004a615c;
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
  piVar3 = TDataObject_virtual_004
                     ((int *)&PTR_TControls_virtual_000_004a6080,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar3;
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&local_c,2);
  return;
}


