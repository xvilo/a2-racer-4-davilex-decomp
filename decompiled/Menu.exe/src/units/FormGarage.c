/* Menu.exe — units/FormGarage.pas: 18 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00498d8c TfrmGarage.FormCreate ==== */

void TfrmGarage_FormCreate(int *param_1)

{
  TGameMenuScreen_FormCreate(param_1);
  FUN_00481698(param_1[0xcb],0x498dd4);
  FUN_00481698(param_1[0xcc],0x498de4);
  FUN_00481698(param_1[199],0x498df4);
  return;
}


/* ==== 00498df8 FUN_00498df8 ==== */

/* WARNING: Removing unreachable block (ram,0x00498f25) */

void FUN_00498df8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar6;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar7;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  int iVar11;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  uVar1 = param_1[200];
  iVar9 = *(int *)(param_1[0xc9] + 0x30) - *(int *)(uVar1 + 0x30);
  if (SBORROW4(*(int *)(param_1[0xc9] + 0x30),*(int *)(uVar1 + 0x30))) {
    puStack_20 = (undefined1 *)0x498e1c;
    uVar1 = thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX;
  }
  iVar10 = *(int *)(param_1[0xca] + 0x34) - *(int *)(uVar1 + 0x34);
  if (SBORROW4(*(int *)(param_1[0xca] + 0x34),*(int *)(uVar1 + 0x34))) {
    puStack_20 = (undefined1 *)0x498e2f;
    thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX_00;
  }
  puStack_20 = (undefined1 *)0x498e3b;
  piVar2 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',param_3);
  puStack_20 = (undefined1 *)0x498e4a;
  piVar3 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX_01);
  puStack_20 = (undefined1 *)0x498e59;
  piVar4 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX_02);
  puStack_24 = &LAB_00499054;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"klrondje",piVar2);
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"blind_up",piVar3);
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"redin_up",piVar4);
  piVar5 = FUN_00491790((int *)&DAT_00491580,'\x01',param_1,9,piVar4,piVar3,piVar2);
  param_1[0xce] = (int)piVar5;
  FUN_004916a4(param_1[0xce],*(int *)(param_1[200] + 0x30),*(undefined4 *)(param_1[200] + 0x34),
               iVar9);
  piVar5 = FUN_00491790((int *)&DAT_00491580,'\x01',param_1,9,piVar4,piVar3,piVar2);
  param_1[0xcf] = (int)piVar5;
  uVar1 = param_1[200];
  iVar6 = *(int *)(uVar1 + 0x34) + iVar10;
  iVar8 = iVar9;
  if (SCARRY4(*(int *)(uVar1 + 0x34),iVar10)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar6 = extraout_ECX_03;
  }
  FUN_004916a4(param_1[0xcf],*(int *)(uVar1 + 0x30),iVar6,iVar8);
  piVar5 = FUN_00491790((int *)&DAT_00491580,'\x01',param_1,9,piVar4,piVar3,piVar2);
  param_1[0xd0] = (int)piVar5;
  uVar1 = param_1[200];
  iVar6 = *(int *)(uVar1 + 0x34);
  iVar8 = (int)((longlong)iVar10 * 2);
  iVar11 = iVar9;
  if ((longlong)iVar8 != (longlong)iVar10 * 2) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar6 = extraout_ECX_04;
    iVar8 = extraout_EDX;
  }
  iVar7 = iVar6 + iVar8;
  if (SCARRY4(iVar6,iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar7 = extraout_ECX_05;
  }
  FUN_004916a4(param_1[0xd0],*(int *)(uVar1 + 0x30),iVar7,iVar11);
  piVar5 = FUN_00491790((int *)&DAT_00491580,'\x01',param_1,9,piVar4,piVar3,piVar2);
  param_1[0xd1] = (int)piVar5;
  uVar1 = param_1[200];
  iVar6 = *(int *)(uVar1 + 0x34);
  iVar8 = (int)((longlong)iVar10 * 3);
  iVar11 = iVar9;
  if ((longlong)iVar8 != (longlong)iVar10 * 3) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar6 = extraout_ECX_06;
    iVar8 = extraout_EDX_00;
  }
  iVar7 = iVar6 + iVar8;
  if (SCARRY4(iVar6,iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar7 = extraout_ECX_07;
  }
  FUN_004916a4(param_1[0xd1],*(int *)(uVar1 + 0x30),iVar7,iVar11);
  piVar5 = FUN_00491790((int *)&DAT_00491580,'\x01',param_1,9,piVar4,piVar3,piVar2);
  param_1[0xd2] = (int)piVar5;
  uVar1 = param_1[200];
  iVar6 = *(int *)(uVar1 + 0x34);
  iVar8 = (int)((longlong)iVar10 * 4);
  if ((longlong)iVar8 != (longlong)iVar10 * 4) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar6 = extraout_ECX_08;
    iVar8 = extraout_EDX_01;
  }
  iVar10 = iVar6 + iVar8;
  if (SCARRY4(iVar6,iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar10 = extraout_ECX_09;
  }
  FUN_004916a4(param_1[0xd2],*(int *)(uVar1 + 0x30),iVar10,iVar9);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0049905b;
  puStack_24 = (undefined1 *)0x499043;
  FUN_00402f9c(piVar2);
  puStack_24 = (undefined1 *)0x49904b;
  FUN_00402f9c(piVar3);
  puStack_24 = (undefined1 *)0x499053;
  FUN_00402f9c(piVar4);
  return;
}


/* ==== 004990a0 TfrmGarage.FormShow ==== */

void TfrmGarage_FormShow(int *param_1)

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
  puStack_118 = &LAB_00499179;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  TGDIButton_SetTabOrder(param_1[0xc4],3);
  TGDIButton_SetTabOrder(param_1[0xb5],4);
  TGDIButton_SetTabOrder(param_1[0xb6],5);
  FUN_00498df8(param_1,extraout_EDX,extraout_ECX);
  FUN_004993d4((int)param_1,0);
  FUN_004996a0((int)param_1);
  FUN_00499538();
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004991ac TfrmGarage.virtual_0fc ==== */

void TfrmGarage_virtual_0fc(void)

{
  int iVar1;
  
  if (*(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x1f) == '\0') {
    TData_DoExit(*(int **)PTR_DAT_004ab694);
  }
  else {
    iVar1 = TfrmStartInfoKeyBoard_ShowStartInfoDlg();
    if (iVar1 != 2) {
      TData_DoExit(*(int **)PTR_DAT_004ab694);
      return;
    }
  }
  return;
}


/* ==== 004991f4 TfrmGarage.btnBuyTuneUpClick ==== */

void TfrmGarage_btnBuyTuneUpClick(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
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
  puStack_11c = &LAB_0049936f;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,1);
  if ((char)param_1[0xd3] == '\x04') {
    iVar4 = FUN_0048e6d4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),
                         CONCAT31((int3)((uint)extraout_EDX >> 8),4));
    iVar4 = *(int *)(iVar4 + 0x30);
    iVar5 = FUN_004993b8();
    if (*(int *)(iVar5 + 8) < iVar4) {
      TfrmStartInfoKeyBoard_ShowNoMoneyDlg();
    }
    else {
      iVar4 = FUN_004993b8();
      if (*(int *)(iVar4 + 0x10) < 100) {
        FUN_004807cc(*(int *)PTR_DAT_004ab694,(undefined4 *)&DAT_004993b0);
        iVar4 = FUN_004993b8();
        FUN_0048dc4c(iVar4);
        FUN_004996a0((int)param_1);
        FUN_00499464((int)param_1);
        FUN_00499600((int)param_1);
      }
    }
  }
  else {
    iVar4 = FUN_004993b8();
    cVar2 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),(char)param_1[0xd3]));
    if (cVar2 == '\0') {
      iVar4 = FUN_004993b8();
      iVar4 = *(int *)(iVar4 + 8);
      iVar5 = FUN_004995e0((int)param_1);
      if (iVar4 < *(int *)(iVar5 + 0x30)) {
        TfrmStartInfoKeyBoard_ShowNoMoneyDlg();
      }
      else {
        FUN_004807cc(*(int *)PTR_DAT_004ab694,(undefined4 *)&DAT_004993b0);
        iVar4 = FUN_004993b8();
        FUN_0048d9d8(iVar4,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),(char)param_1[0xd3]));
        FUN_00499464((int)param_1);
        FUN_004996a0((int)param_1);
        FUN_00499600((int)param_1);
      }
    }
  }
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = "btnBuyTuneUpClick";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004993b8 FUN_004993b8 ==== */

void FUN_004993b8(void)

{
  FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  return;
}


/* ==== 004993d4 FUN_004993d4 ==== */

void FUN_004993d4(int param_1,uint param_2)

{
  *(char *)(param_1 + 0x34c) = (char)param_2;
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x318),
               (undefined4 *)"tune_",param_2 & 0x7f);
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x2dc),
               (undefined4 *)"TUNEUP",(uint)*(byte *)(param_1 + 0x34c));
  FUN_00499464(param_1);
  FUN_004996a0(param_1);
  FUN_00499600(param_1);
  return;
}


/* ==== 00499464 FUN_00499464 ==== */

void FUN_00499464(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  uint **ppuVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  uint *local_c;
  uint *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_24 = &LAB_00499517;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar1 = FUN_004993b8();
  FUN_004085ac(*(undefined4 *)(iVar1 + 8),(int *)&local_8);
  TGroupBox_SetCaption(*(int *)(param_1 + 0x304),local_8);
  iVar1 = FUN_004995e0(param_1);
  TGroupBox_SetCaption(*(int *)(param_1 + 0x300),*(uint **)(iVar1 + 0x2c));
  ppuVar2 = &local_c;
  iVar1 = FUN_004995e0(param_1);
  FUN_004085ac(*(undefined4 *)(iVar1 + 0x30),&local_18);
  local_14 = local_18;
  local_10 = CONCAT31(local_10._1_3_,0xb);
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x30),&local_14,0,(int *)ppuVar2);
  TGroupBox_SetCaption(*(int *)(param_1 + 0x308),local_c);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0049951e;
  puStack_24 = (undefined1 *)0x499509;
  FUN_00403c5c(&local_18);
  puStack_24 = (undefined1 *)0x499516;
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 00499524 TfrmGarage.virtual_100 ==== */

void TfrmGarage_virtual_100(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049999c);
  return;
}


/* ==== 00499538 FUN_00499538 ==== */

void FUN_00499538(void)

{
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9) == '\x02') {
    if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 2) == 0) {
      FUN_00480584(*(int **)PTR_DAT_004ab694,0x4995a8,6);
    }
    else {
      FUN_00480584(*(int **)PTR_DAT_004ab694,0x499598,3);
    }
  }
  return;
}


/* ==== 004995b0 TfrmGarage.btnNextTUClick ==== */

void TfrmGarage_btnNextTUClick(uint param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  
  cVar1 = *(char *)(param_1 + 0x34c);
  if (cVar1 == '\x04') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),cVar1 + '\x01');
    if (SCARRY1(cVar1,'\x01')) {
      param_1 = thunk_FUN_00402808(param_1);
      uVar2 = extraout_EDX;
    }
    if (4 < (byte)uVar2) {
      param_1 = thunk_FUN_00402808(param_1);
      uVar2 = extraout_EDX_00;
    }
  }
  FUN_004993d4(param_1,uVar2);
  return;
}


/* ==== 004995e0 FUN_004995e0 ==== */

void FUN_004995e0(int param_1)

{
  FUN_0048e6d4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),
               CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x34c)));
  return;
}


/* ==== 00499600 FUN_00499600 ==== */

void FUN_00499600(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  
  if (*(char *)(param_1 + 0x34c) == '\x04') {
    iVar2 = FUN_004993b8();
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x5c))
              (*(int **)(param_1 + 0x30c),*(int *)(iVar2 + 0x10) < 100);
    return;
  }
  iVar2 = FUN_004993b8();
  uVar1 = FUN_0048d8c0(iVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)(param_1 + 0x34c)));
  (**(code **)(**(int **)(param_1 + 0x30c) + 0x5c))
            (*(int **)(param_1 + 0x30c),CONCAT31(extraout_var,uVar1) ^ 1);
  return;
}


/* ==== 00499650 TfrmGarage.FormDestroy ==== */

void TfrmGarage_FormDestroy(int *param_1)

{
  FUN_0040c968(param_1 + 0xce);
  FUN_0040c968(param_1 + 0xcf);
  FUN_0040c968(param_1 + 0xd0);
  FUN_0040c968(param_1 + 0xd1);
  FUN_0040c968(param_1 + 0xd2);
  TGameMenuScreen_FormDestroy(param_1);
  return;
}


/* ==== 004996a0 FUN_004996a0 ==== */

void FUN_004996a0(int param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  
  iVar3 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  iVar4 = FUN_004993b8();
  cVar2 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)(param_1 + 0x34c)));
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0x34c) != '\x04')) {
    iVar4 = FUN_004995e0(param_1);
    iVar4 = *(int *)(iVar4 + 0x34);
    iVar6 = FUN_004993b8();
    uVar5 = FUN_0048d8c8(iVar6);
    iVar6 = uVar5 + *(int *)(iVar3 + 0x20);
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x20))) {
      thunk_FUN_00402808(uVar5);
      iVar6 = extraout_EDX_04;
    }
    FUN_0049180c(*(int *)(param_1 + 0x338),iVar6,iVar4);
    iVar4 = FUN_004995e0(param_1);
    iVar4 = *(int *)(iVar4 + 0x38);
    iVar6 = FUN_004993b8();
    uVar5 = FUN_0048d90c(iVar6);
    iVar6 = uVar5 + *(int *)(iVar3 + 0x24);
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x24))) {
      thunk_FUN_00402808(uVar5);
      iVar6 = extraout_EDX_05;
    }
    FUN_0049180c(*(int *)(param_1 + 0x33c),iVar6,iVar4);
    iVar4 = FUN_004995e0(param_1);
    iVar4 = *(int *)(iVar4 + 0x3c);
    iVar6 = FUN_004993b8();
    uVar5 = FUN_0048d950(iVar6);
    iVar6 = uVar5 + *(int *)(iVar3 + 0x28);
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x28))) {
      thunk_FUN_00402808(uVar5);
      iVar6 = extraout_EDX_06;
    }
    FUN_0049180c(*(int *)(param_1 + 0x344),iVar6,iVar4);
    iVar4 = FUN_004995e0(param_1);
    iVar4 = *(int *)(iVar4 + 0x40);
    iVar6 = FUN_004993b8();
    uVar5 = FUN_0048d994(iVar6);
    iVar6 = uVar5 + *(int *)(iVar3 + 0x2c);
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x2c))) {
      thunk_FUN_00402808(uVar5);
      iVar6 = extraout_EDX_07;
    }
    FUN_0049180c(*(int *)(param_1 + 0x340),iVar6,iVar4);
  }
  else {
    iVar4 = FUN_004993b8();
    uVar5 = FUN_0048d8c8(iVar4);
    iVar4 = uVar5 + *(int *)(iVar3 + 0x20);
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x20))) {
      thunk_FUN_00402808(uVar5);
      iVar4 = extraout_EDX_00;
    }
    FUN_0049180c(*(int *)(param_1 + 0x338),iVar4,0);
    iVar4 = FUN_004993b8();
    uVar5 = FUN_0048d90c(iVar4);
    iVar4 = uVar5 + *(int *)(iVar3 + 0x24);
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x24))) {
      thunk_FUN_00402808(uVar5);
      iVar4 = extraout_EDX_01;
    }
    FUN_0049180c(*(int *)(param_1 + 0x33c),iVar4,0);
    iVar4 = FUN_004993b8();
    uVar5 = FUN_0048d950(iVar4);
    iVar4 = uVar5 + *(int *)(iVar3 + 0x28);
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x28))) {
      thunk_FUN_00402808(uVar5);
      iVar4 = extraout_EDX_02;
    }
    FUN_0049180c(*(int *)(param_1 + 0x344),iVar4,0);
    iVar4 = FUN_004993b8();
    uVar5 = FUN_0048d994(iVar4);
    iVar4 = uVar5 + *(int *)(iVar3 + 0x2c);
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x2c))) {
      thunk_FUN_00402808(uVar5);
      iVar4 = extraout_EDX_03;
    }
    FUN_0049180c(*(int *)(param_1 + 0x340),iVar4,0);
  }
  if (*(char *)(param_1 + 0x34c) == '\x04') {
    iVar3 = FUN_004993b8();
    lVar1 = (longlong)*(int *)(iVar3 + 0x10) * 9;
    uVar5 = (uint)lVar1;
    if ((int)uVar5 != lVar1) {
      thunk_FUN_00402808(uVar5);
    }
    uVar5 = FUN_00402ad4();
    if ((int)uVar5 >> 0x1f != extraout_EDX_08) {
      uVar5 = thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(int *)(param_1 + 0x348),uVar5,1);
  }
  else {
    iVar3 = FUN_004993b8();
    lVar1 = (longlong)*(int *)(iVar3 + 0x10) * 9;
    uVar5 = (uint)lVar1;
    if ((int)uVar5 != lVar1) {
      thunk_FUN_00402808(uVar5);
    }
    uVar5 = FUN_00402ad4();
    if ((int)uVar5 >> 0x1f != extraout_EDX_09) {
      uVar5 = thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(int *)(param_1 + 0x348),uVar5,0);
  }
  return;
}


/* ==== 004998cc TfrmGarage.btnPrevTUClick ==== */

void TfrmGarage_btnPrevTUClick(uint param_1,undefined4 param_2)

{
  char cVar1;
  undefined3 uVar3;
  uint uVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  
  cVar1 = *(char *)(param_1 + 0x34c);
  uVar3 = (undefined3)((uint)param_2 >> 8);
  if (cVar1 == '\0') {
    uVar2 = CONCAT31(uVar3,4);
  }
  else {
    uVar2 = CONCAT31(uVar3,cVar1 + -1);
    if (SBORROW1(cVar1,'\x01')) {
      param_1 = thunk_FUN_00402808(param_1);
      uVar2 = extraout_EDX;
    }
    if (4 < (byte)uVar2) {
      param_1 = thunk_FUN_00402808(param_1);
      uVar2 = extraout_EDX_00;
    }
  }
  FUN_004993d4(param_1,uVar2);
  return;
}


/* ==== 004998fc TfrmGarage.gdfBtnPrevious3ButtonStateChange ==== */

void TfrmGarage_gdfBtnPrevious3ButtonStateChange
               (undefined4 param_1,undefined4 param_2,int *param_3,char param_4)

{
  TData_CombinedBtnStateChange(*(int *)PTR_DAT_004ab694,param_2,param_3,param_4);
  return;
}


/* ==== 00499918 FUN_00499918 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499918(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad50c = _DAT_004ad50c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


