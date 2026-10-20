/* Menu.exe — units/FormWinFinal.pas: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a3b9c FUN_004a3b9c ==== */

undefined4 FUN_004a3b9c(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 2;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14;
}


/* ==== 004a3bdc FUN_004a3bdc ==== */

undefined1 FUN_004a3bdc(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined1 local_14;
  undefined4 local_10;
  
  FUN_004a2864(param_1);
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 6;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14;
}


/* ==== 004a3c24 FUN_004a3c24 ==== */

void FUN_004a3c24(int param_1,int *param_2)

{
  BOOL BVar1;
  uint uVar2;
  int local_1008 [1024];
  
  local_1008[0] = param_1;
  BVar1 = mciGetErrorStringA(*(MCIERROR *)(param_1 + 0x2ec),(LPSTR)local_1008,0x1000);
  if (BVar1 == 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab8bc,param_2);
  }
  else {
    uVar2 = FUN_00408b24((char *)local_1008);
    FUN_00403d44(param_2,local_1008,uVar2);
  }
  return;
}


/* ==== 004a3c74 FUN_004a3c74 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3c74(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad564 = _DAT_004ad564 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 004a3f44 TfrmWinFinal.FormShow ==== */

void TfrmWinFinal_FormShow(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined *puStack_150;
  int iStack_14c;
  undefined *puStack_148;
  undefined4 *puStack_144;
  char *pcStack_140;
  undefined *puStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_11c = 0;
  local_118 = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_c = (undefined4 *)0x0;
  puStack_130 = &LAB_004a41a8;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  iStack_138 = 0x4a3f8a;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_114);
  iStack_138 = 0x4a3f98;
  FUN_00403e80(&local_14,local_114);
  iStack_138 = local_14;
  puStack_13c = &DAT_004a41c0;
  pcStack_140 = "FormShow";
  puStack_144 = (undefined4 *)0x4a3fb2;
  FUN_00403f9c((int *)&local_10,3);
  puStack_144 = local_10;
  puStack_148 = (undefined *)0x4a3fbb;
  uVar4 = FUN_0045f46c();
  puVar3 = puStack_144;
  puStack_144 = (undefined4 *)0x4a3fc7;
  FUN_0045fb90(uVar4,puVar3,2);
  puStack_144 = (undefined4 *)0x4a3fd1;
  TBaseFormOneWay_FormShow((int)local_8);
  puStack_144 = (undefined4 *)0x4a3fe3;
  iVar5 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  puStack_144 = (undefined4 *)0x4a3ff4;
  TGroupBox_SetCaption(local_8[0xbf],*(uint **)(iVar5 + 0x1c));
  puStack_144 = (undefined4 *)0x4a400e;
  TControl_SetLeft((int *)local_8[0xc0],*(undefined4 *)(local_8[0xc3] + 0x30));
  puStack_144 = (undefined4 *)0x4a4028;
  TControl_SetTop((int *)local_8[0xc0],*(undefined4 *)(local_8[0xc3] + 0x34));
  piVar1 = (int *)(local_8[0xc3] + 0x30);
  iVar5 = *(int *)(local_8[0xc4] + 0x30) - *piVar1;
  if (SBORROW4(*(int *)(local_8[0xc4] + 0x30),*piVar1)) {
    puStack_144 = (undefined4 *)0x4a4047;
    thunk_FUN_00402808(local_8[0xc3]);
    iVar5 = extraout_EDX;
  }
  puStack_144 = (undefined4 *)0x4a4055;
  TControl_SetWidth((int *)local_8[0xc0],iVar5);
  piVar1 = (int *)(local_8[0xc3] + 0x34);
  iVar5 = *(int *)(local_8[0xc4] + 0x34) - *piVar1;
  if (SBORROW4(*(int *)(local_8[0xc4] + 0x34),*piVar1)) {
    puStack_144 = (undefined4 *)0x4a4074;
    thunk_FUN_00402808(local_8[0xc3]);
    iVar5 = extraout_EDX_00;
  }
  puStack_144 = (undefined4 *)0x4a4082;
  TControl_SetHeight((int *)local_8[0xc0],iVar5);
  puStack_144 = *(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8);
  puStack_148 = &DAT_004a41e4;
  iStack_14c = 0x4a40a6;
  iVar5 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  iStack_14c = 0x4a40b4;
  FUN_00480b08(*(int *)(iVar5 + 0x10),&local_118);
  iStack_14c = local_118;
  puStack_150 = &DAT_004a41f0;
  puStack_154 = (undefined1 *)0x4a40cc;
  FUN_00403f9c((int *)&local_c,4);
  puStack_158 = &LAB_004a414b;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  puStack_154 = &stack0xfffffffc;
  FUN_00403f28(&local_11c,(undefined4 *)"trying to play : ",local_c);
  iVar5 = local_11c;
  uVar4 = FUN_0045f46c();
  FUN_0045fe88(uVar4,iVar5);
  FUN_00403cb0((int *)(local_8[0xbe] + 0x300),local_c);
  FUN_004a2970((int *)local_8[0xbe]);
  FUN_004a36a4(local_8[0xbe],'\x01');
  FUN_004a2c98((int *)local_8[0xbe]);
  puVar2 = puStack_154;
  *in_FS_OFFSET = uStack_15c;
  iVar5 = *(int *)local_8[0xbc];
  puStack_154 = (undefined1 *)0x4a417d;
  (**(code **)(iVar5 + 0xb4))((int *)local_8[0xbc],iVar5,puVar2);
  *in_FS_OFFSET = puStack_150;
  puStack_148 = &LAB_004a41af;
  iStack_14c = 0x4a419a;
  FUN_00403c80(&local_11c,2);
  iStack_14c = 0x4a41a7;
  FUN_00403c80(&local_14,3);
  return;
}


/* ==== 004a4214 TfrmWinFinal.medWinnerNotify ==== */

void TfrmWinFinal_medWinnerNotify(int *param_1)

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
  puStack_118 = &LAB_004a42b1;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_004a3640(param_1[0xbe]);
  FUN_004a2c98((int *)param_1[0xbe]);
  *in_FS_OFFSET = "medWinnerNotify";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a42e8 TfrmWinFinal.virtual_0fc ==== */

void TfrmWinFinal_virtual_0fc(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar5;
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
  puStack_118 = &LAB_004a4411;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,2);
  TTimer_SetEnabled(param_1[0xc1],'\0');
  TTimer_SetEnabled(param_1[0xc2],'\0');
  cVar2 = FUN_004a3b58(param_1[0xbe]);
  if (cVar2 == '\x02') {
    FUN_004a2e80((int *)param_1[0xbe],extraout_EDX,extraout_ECX);
    FUN_004a2bd0((int *)param_1[0xbe],extraout_EDX_00,extraout_ECX_00);
  }
  else {
    cVar2 = FUN_004a3b58(param_1[0xbe]);
    iVar4 = extraout_ECX_01;
    uVar5 = extraout_EDX_01;
    if (cVar2 != '\x06') {
      cVar2 = FUN_004a3b58(param_1[0xbe]);
      iVar4 = extraout_ECX_02;
      uVar5 = extraout_EDX_02;
      if (cVar2 != '\x01') goto LAB_004a43be;
    }
    FUN_004a2bd0((int *)param_1[0xbe],uVar5,iVar4);
  }
LAB_004a43be:
  if (*(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 0x10) == '\0') {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049ba10);
  }
  else {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049a810);
  }
  *in_FS_OFFSET = "FlowToNext";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a4444 TfrmWinFinal.timSample1Timer ==== */

void TfrmWinFinal_timSample1Timer(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_20 = &LAB_004a453f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  TTimer_SetEnabled(*(int *)(param_1 + 0x304),'\0');
  iVar1 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_00480b08(*(int *)(iVar1 + 0x10),(int *)&local_c);
  FUN_00403f28((int *)&local_8,(undefined4 *)"CCW08_",local_c);
  uVar2 = FUN_00482a0c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xb0),local_8);
  iVar1 = (int)((longlong)(int)uVar2 * 1000);
  if ((longlong)iVar1 != (longlong)(int)uVar2 * 1000) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar1 = extraout_EDX;
  }
  iVar3 = iVar1 + 0x5dc;
  if (SCARRY4(iVar1,0x5dc)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_EDX_00;
  }
  if (iVar3 < 0) {
    thunk_FUN_00402808(uVar2);
    iVar3 = extraout_EDX_01;
  }
  TTimer_SetInterval(*(int *)(param_1 + 0x308),iVar3);
  TTimer_SetEnabled(*(int *)(param_1 + 0x308),'\x01');
  iVar1 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_00480b08(*(int *)(iVar1 + 0x10),(int *)&local_14);
  FUN_00403f28((int *)&local_10,(undefined4 *)"CCW08_",local_14);
  FUN_00480448(*(int **)PTR_DAT_004ab694,local_10);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004a4546;
  puStack_20 = (undefined1 *)0x4a453e;
  FUN_00403c80((int *)&local_14,4);
  return;
}


/* ==== 004a455c TfrmWinFinal.timSample2Timer ==== */

void TfrmWinFinal_timSample2Timer(int param_1)

{
  TTimer_SetEnabled(*(int *)(param_1 + 0x308),'\0');
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)"CCW08_05");
  return;
}


/* ==== 004a4594 TfrmWinFinal.FormCreate ==== */

void TfrmWinFinal_FormCreate(int *param_1)

{
  TGameMenuScreen_FormCreate(param_1);
  param_1[0xbb] = (int)param_1;
  param_1[0xba] = (int)TfrmWinFinal_FormShowScreen;
  return;
}


/* ==== 004a45b4 TfrmWinFinal.FormShowScreen ==== */

void TfrmWinFinal_FormShowScreen(int param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int extraout_EDX_01;
  
  uVar1 = FUN_00482a0c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xb0),(undefined4 *)"CDW07_04");
  iVar2 = (int)((longlong)(int)uVar1 * 1000);
  if ((longlong)iVar2 != (longlong)(int)uVar1 * 1000) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  iVar3 = iVar2 + 0x5dc;
  if (SCARRY4(iVar2,0x5dc)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_EDX_00;
  }
  if (iVar3 < 0) {
    thunk_FUN_00402808(uVar1);
    iVar3 = extraout_EDX_01;
  }
  TTimer_SetInterval(*(int *)(param_1 + 0x304),iVar3);
  TTimer_SetEnabled(*(int *)(param_1 + 0x304),'\x01');
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)"CDW07_04");
  return;
}


