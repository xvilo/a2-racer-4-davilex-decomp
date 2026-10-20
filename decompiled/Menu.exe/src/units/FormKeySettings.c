/* Menu.exe — units/FormKeySettings.pas: 19 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00491c7c FUN_00491c7c ==== */

void FUN_00491c7c(int *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_ECX;
  int iVar3;
  int iVar4;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined3 in_register_00000009;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *piVar5;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  
  *(char *)(param_1 + 0xca) = param_2;
  if (param_2 == '\x01') {
    uVar1 = param_1[0xcb];
    piVar5 = (int *)param_1[0xbe];
    uVar2 = *(int *)(uVar1 + 0x38) - piVar5[0xe];
    if (SBORROW4(*(int *)(uVar1 + 0x38),piVar5[0xe])) {
      uVar1 = thunk_FUN_00402808(uVar1);
      uVar2 = extraout_ECX;
      piVar5 = extraout_EDX;
    }
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    iVar4 = iVar3 + *(int *)(uVar1 + 0x30);
    if (SCARRY4(iVar3,*(int *)(uVar1 + 0x30))) {
      thunk_FUN_00402808(uVar1);
      iVar4 = extraout_ECX_00;
      piVar5 = extraout_EDX_00;
    }
    TControl_SetLeft(piVar5,iVar4);
    uVar1 = param_1[0xcb];
    piVar5 = (int *)param_1[0xbe];
    uVar2 = *(int *)(uVar1 + 0x3c) - piVar5[0xf];
    if (SBORROW4(*(int *)(uVar1 + 0x3c),piVar5[0xf])) {
      uVar1 = thunk_FUN_00402808(uVar1);
      uVar2 = extraout_ECX_01;
      piVar5 = extraout_EDX_01;
    }
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    iVar4 = iVar3 + *(int *)(uVar1 + 0x34);
    if (SCARRY4(iVar3,*(int *)(uVar1 + 0x34))) {
      thunk_FUN_00402808(uVar1);
      iVar4 = extraout_ECX_02;
      piVar5 = extraout_EDX_02;
    }
    TControl_SetTop(piVar5,iVar4);
    TGroupBox_SetCaption(param_1[0xbe],(uint *)0x0);
    TGroupBox_SetVisible
              ((int *)param_1[0xbe],CONCAT31((int3)((uint)extraout_EDX_03 >> 8),1),extraout_ECX_03);
    FUN_0042e978((int *)param_1[0xbe],extraout_EDX_04,extraout_ECX_04);
    TForm_SetActiveControl(param_1,(int *)param_1[0xbe],extraout_ECX_05);
    TGroupBox_SetCaption(param_1[0xcb],(uint *)0x0);
    (**(code **)(*(int *)param_1[0xcb] + 0x5c))((int *)param_1[0xcb],0);
    return;
  }
  if (param_2 == '\0') {
    (**(code **)(*(int *)param_1[0xcb] + 0x5c))
              ((int *)param_1[0xcb],CONCAT31(in_register_00000009,1));
    (**(code **)(*(int *)param_1[0xcb] + 0xb4))();
    param_1[0xcb] = 0;
    TGroupBox_SetVisible((int *)param_1[0xbe],0,extraout_ECX_06);
  }
  return;
}


/* ==== 00491d7c TfrmKeySettings.WMGetDlgCode ==== */

void TfrmKeySettings_WMGetDlgCode(undefined4 param_1,int param_2)

{
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 4;
  return;
}


/* ==== 00491d84 TfrmKeySettings.btnClick ==== */

void TfrmKeySettings_btnClick(int *param_1,int param_2)

{
  param_1[0xcb] = param_2;
  FUN_00491c7c(param_1,'\x01');
  return;
}


/* ==== 00491d98 FUN_00491d98 ==== */

void FUN_00491d98(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int i_val;
  int j;
  
  FUN_00403c5c(param_3);
  i_val = *(int *)(*(uint *)(param_1 + 0x330) + 8);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 0x330));
  }
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_0041ff40(*(undefined4 **)(param_1 + 0x330),j);
      iVar2 = FUN_0040312c(piVar1,(int)&DAT_0049198c);
      if (*(int *)(iVar2 + 4) == param_2) {
        FUN_00403cb0(param_3,*(undefined4 **)(iVar2 + 8));
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00491e0c FUN_00491e0c ==== */

void FUN_00491e0c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_18 = &LAB_00491e58;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(int *)(param_1 + 0xc) = param_2;
  FUN_00491d98(*(int *)(param_4 + -4),param_2,(int *)&local_8);
  TGroupBox_SetCaption(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00491e5f;
  puStack_18 = (undefined1 *)0x491e57;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00491e64 TfrmKeySettings.FormKeyDown ==== */

void TfrmKeySettings_FormKeyDown(int *param_1,undefined4 param_2,ushort *param_3)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_00491ee7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  if ((char)param_1[0xca] == '\x01') {
    FUN_00491d98((int)param_1,(uint)*param_3,&local_c);
    if (local_c == 0) {
      FUN_0040be6c();
      FUN_00491c7c(local_8,'\0');
    }
    else {
      FUN_00491e0c(local_8[0xcb],(uint)*param_3,extraout_ECX,(int)&stack0xfffffffc);
      FUN_00491c7c(local_8,'\0');
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00491eee;
  puStack_18 = (undefined1 *)0x491ee6;
  FUN_00403c5c(&local_c);
  return;
}


/* ==== 00491ef8 TfrmKeySettings.txtKeyExit ==== */

void TfrmKeySettings_txtKeyExit(int *param_1)

{
  if ((char)param_1[0xca] == '\x01') {
    FUN_00491c7c(param_1,'\0');
  }
  return;
}


/* ==== 00491f10 TfrmKeySettings.GDIFormShow ==== */

void TfrmKeySettings_GDIFormShow(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TfrmCoolDialog_GDIFormShow(param_1);
  FUN_0049245c((int)param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 00491f28 TfrmKeySettings.btnOkClick ==== */

void TfrmKeySettings_btnOkClick(int param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00491f96;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00492524(param_1);
  uVar1 = FUN_004925dc(param_1);
  if (uVar1 == 0) {
    FUN_00492580(param_1);
    *(undefined4 *)(param_1 + 0x234) = 1;
  }
  else {
    uVar1 = FUN_004925dc(param_1);
    FUN_00491d98(param_1,uVar1,(int *)&local_8);
    TfrmStartInfoKeyBoard_ShowDoubleKeysDlg(param_1,local_8);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00491f9d;
  puStack_14 = (undefined1 *)0x491f95;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00491fa4 FUN_00491fa4 ==== */

void FUN_00491fa4(void)

{
  uint i_val;
  undefined4 extraout_ECX;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_00492097;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x491fd9;
  FUN_00403f28((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"menu.ini");
  puStack_34 = (undefined1 *)0x491fe8;
  local_c = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_10);
  puStack_38 = &LAB_00492075;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_8 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  i_val = (**(code **)(*local_c + 8))(local_c,"CONTROLKEYS","count");
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      uVar2 = 0;
      puVar1 = &local_14;
      FUN_004085ac(j,&local_18);
      (**(code **)*local_c)(local_c,"CONTROLKEYS",local_18,puVar1,uVar2);
      (**(code **)(*local_8 + 0x34))(local_8,local_14);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = 0;
  puStack_38 = &LAB_0049207c;
  uStack_3c = 0x492074;
  FUN_0040c968(&local_c);
  return;
}


/* ==== 004920e0 FUN_004920e0 ==== */

void FUN_004920e0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  char **ppcVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  char *local_c;
  int local_8;
  
  local_c = (char *)0x0;
  local_10 = 0;
  puStack_1c = (undefined1 *)0x4920f8;
  local_8 = param_1;
  FUN_00404090(param_1);
  puStack_20 = &LAB_004921a9;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00403cf4((int *)&local_c,local_8);
  (**(code **)(*param_2 + 0x40))();
  iVar1 = FUN_004041c8(",",local_c);
  while (iVar1 != 0) {
    piVar4 = &local_10;
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      thunk_FUN_00402808((uint)piVar4);
      uVar2 = extraout_ECX;
    }
    FUN_004040e4((int)local_c,0,uVar2,piVar4);
    (**(code **)(*param_2 + 0x34))(param_2,local_10);
    ppcVar5 = &local_c;
    uVar2 = FUN_00403edc((int)local_c);
    iVar3 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402808(uVar2);
      uVar2 = extraout_ECX_00;
      iVar3 = extraout_EDX;
    }
    FUN_004040e4((int)local_c,iVar3,uVar2,(int *)ppcVar5);
    iVar1 = FUN_004041c8(",",local_c);
  }
  (**(code **)(*param_2 + 0x34))(param_2,local_c);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004921b0;
  puStack_20 = (undefined1 *)0x4921a8;
  FUN_00403c80(&local_10,3);
  return;
}


/* ==== 004921c4 TfrmKeySettings.FormCreate ==== */

void TfrmKeySettings_FormCreate(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 *local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_20 = (byte *)0x0;
  local_1c = 0;
  puStack_34 = &LAB_00492362;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x4921f4;
  local_8 = param_1;
  piVar1 = TDataObject_virtual_004((int *)&PTR_TControls_virtual_000_004a6080,'\x01',0);
  *(int **)(local_8 + 0x338) = piVar1;
  puStack_3c = (undefined1 *)0x492210;
  FUN_00481698(*(int *)(local_8 + 0x324),0x492378);
  puStack_3c = (undefined1 *)0x492223;
  FUN_00481698(*(int *)(local_8 + 0x304),0x492388);
  puStack_3c = (undefined1 *)0x492231;
  piVar1 = FUN_0041fefc((int *)&PTR_TList_virtual_000_0041fda4,'\x01',
                        CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  *(int **)(local_8 + 0x330) = piVar1;
  local_c = (int *)0x0;
  puStack_40 = &LAB_00492340;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x492252;
  puStack_3c = &stack0xfffffffc;
  local_c = (int *)FUN_00491fa4();
  puStack_48 = (undefined1 *)0x49225d;
  iVar2 = (**(code **)(*local_c + 0x14))();
  uVar3 = iVar2 - 1;
  uVar4 = extraout_ECX_00;
  if (SBORROW4(iVar2,1)) {
    puStack_48 = (undefined1 *)0x492267;
    uVar3 = thunk_FUN_00402808(uVar3);
    uVar4 = extraout_ECX_01;
  }
  if (-1 < (int)uVar3) {
    local_18 = uVar3 + 1;
    local_10 = 0;
    puStack_48 = (undefined1 *)0x492286;
    local_14 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',uVar4);
    puStack_4c = &LAB_00492317;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    puStack_48 = &stack0xfffffffc;
    (**(code **)(*local_c + 0xc))(local_c,local_10,&local_1c);
    FUN_004920e0(local_1c,local_14);
    iVar2 = FUN_00402f6c((int *)&DAT_0049198c,'\x01',extraout_ECX_02);
    (**(code **)(*local_14 + 0xc))(local_14,0,&local_20);
    uVar4 = FUN_00408618(local_20);
    *(undefined4 *)(iVar2 + 4) = uVar4;
    (**(code **)(*local_14 + 0xc))(local_14,1,&local_24);
    FUN_00403cb0((int *)(iVar2 + 8),local_24);
    FUN_0041fef4(*(int **)(local_8 + 0x330),iVar2);
    *in_FS_OFFSET = uStack_50;
    puStack_48 = &DAT_0049231e;
    puStack_4c = (undefined1 *)0x492316;
    FUN_0040c968(&local_14);
    return;
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00492347;
  puStack_40 = (undefined1 *)0x49233f;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 0049238c FUN_0049238c ==== */

void FUN_0049238c(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int i_val;
  int j;
  
  FUN_00403c5c(param_2);
  uVar1 = *(uint *)(*(int *)(param_4 + -4) + 0x330);
  i_val = *(int *)(uVar1 + 8);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0041ff40(*(undefined4 **)(*(int *)(param_4 + -4) + 0x330),j);
      iVar3 = FUN_0040312c(piVar2,(int)&DAT_0049198c);
      if (*(int *)(iVar3 + 4) == param_1) {
        FUN_00403cb0(param_2,*(undefined4 **)(iVar3 + 8));
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00492404 FUN_00492404 ==== */

void FUN_00492404(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_18 = &LAB_0049244f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(int *)(param_1 + 0xc) = param_2;
  FUN_0049238c(param_2,(int *)&local_8,param_3,param_4);
  TGroupBox_SetCaption(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00492456;
  puStack_18 = (undefined1 *)0x49244e;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0049245c FUN_0049245c ==== */

void FUN_0049245c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  FUN_00492404(*(int *)(param_1 + 0x310),*(int *)(*(int *)(param_1 + 0x334) + 8),param_3,
               (int)&stack0xfffffffc);
  FUN_00492404(*(int *)(param_1 + 0x300),*(int *)(*(int *)(param_1 + 0x334) + 0xc),puVar1,
               (int)&stack0xfffffffc);
  FUN_00492404(*(int *)(param_1 + 0x308),*(int *)(*(int *)(param_1 + 0x334) + 0x10),puVar2,
               (int)&stack0xfffffffc);
  FUN_00492404(*(int *)(param_1 + 0x30c),*(int *)(*(int *)(param_1 + 0x334) + 0x14),puVar3,
               (int)&stack0xfffffffc);
  FUN_00492404(*(int *)(param_1 + 0x318),*(int *)(*(int *)(param_1 + 0x334) + 0x1c),puVar4,
               (int)&stack0xfffffffc);
  FUN_00492404(*(int *)(param_1 + 0x314),*(int *)(*(int *)(param_1 + 0x334) + 0x18),puVar5,
               (int)&stack0xfffffffc);
  FUN_00492404(*(int *)(param_1 + 0x31c),*(int *)(*(int *)(param_1 + 0x334) + 0x20),puVar6,
               (int)&stack0xfffffffc);
  return;
}


/* ==== 00492524 FUN_00492524 ==== */

void FUN_00492524(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x338);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x310) + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x300) + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x308) + 0xc);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x30c) + 0xc);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x318) + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x314) + 0xc);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x31c) + 0xc);
  return;
}


/* ==== 00492580 FUN_00492580 ==== */

void FUN_00492580(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x334);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x338) + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x338) + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x338) + 0x10);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x338) + 0x14);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x338) + 0x1c);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x338) + 0x18);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x338) + 0x20);
  return;
}


/* ==== 004925dc FUN_004925dc ==== */

uint FUN_004925dc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int j;
  int i_val;
  undefined4 local_8;
  
  uVar1 = 0;
  local_8 = 0;
  i_val = 0;
  do {
    j = i_val + 1;
    if (SCARRY4(i_val,1)) {
      uVar1 = thunk_FUN_00402808(uVar1);
    }
    if (j < 7) {
      do {
        uVar2 = FUN_004a6a80(*(int *)(param_1 + 0x338),j);
        uVar1 = FUN_004a6a80(*(int *)(param_1 + 0x338),i_val);
        if (uVar2 == uVar1) {
          uVar1 = FUN_004a6a80(*(int *)(param_1 + 0x338),i_val);
          local_8 = uVar1;
          break;
        }
        j = j + 1;
      } while (j != 7);
    }
    i_val = i_val + 1;
    if (i_val == 6) {
      return local_8;
    }
  } while( true );
}


/* ==== 00492644 TfrmKeySettings.btnDefaultsClick ==== */

void TfrmKeySettings_btnDefaultsClick(int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(**(int **)(param_1 + 0x334) + 0xc))
            (*(int **)(param_1 + 0x334),
             *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0xc));
  FUN_0049245c(param_1,extraout_EDX,extraout_ECX);
  return;
}


