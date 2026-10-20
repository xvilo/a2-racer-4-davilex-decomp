/* Menu.exe — units/GDIHintWindow.pas: 17 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00465f28 TGDIHintWindow.Destroy ==== */

void TGDIHintWindow_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x465f33;
  local_8 = FUN_004032fc(param_1,param_2);
  puStack_14 = &LAB_00465f70;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040c968(local_8 + 0x80);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00465f77;
  puStack_14 = (undefined1 *)0x465f6f;
  TCustomControl_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 00465f8c TGDIHintWindow.WMNCPaint ==== */

void TGDIHintWindow_WMNCPaint(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


/* ==== 00465f94 TGDIHintWindow.CMTextChanged ==== */

void TGDIHintWindow_CMTextChanged(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2[2];
  iVar1 = FUN_00465fd0(param_1);
  FUN_0042f720(iVar1,*param_2,param_2[1],uVar2);
  return;
}


/* ==== 00465fb8 TGDIHintWindow.virtual_0b4 ==== */

void TGDIHintWindow_virtual_0b4(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00465fd0(param_1);
  (**(code **)(*piVar1 + 0x84))();
  return;
}


/* ==== 00465fd0 FUN_00465fd0 ==== */

int FUN_00465fd0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x80] == 0) {
    iVar1 = TGDIHint_virtual_02c((int *)&PTR_TControl_virtual_000_00465d00,'\x01',param_1);
    param_1[0x80] = iVar1;
  }
  return param_1[0x80];
}


/* ==== 00465ffc FUN_00465ffc ==== */

void FUN_00465ffc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_120 = &LAB_004660d6;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  iVar4 = 0;
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_virtual_000_00466ed8);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_00466ed8);
    uVar1 = FUN_00403114(*(int **)(iVar2 + 4),(int)&PTR_TControl_virtual_000_0042a694);
    if ((char)uVar1 != '\0') {
      piVar3 = (int *)FUN_0040312c(*(int **)(iVar2 + 4),(int)&PTR_TControl_virtual_000_0042a694);
      iVar4 = FUN_0044488c(piVar3);
    }
  }
  if (iVar4 == 0) {
    FUN_00402ee4(*param_1,local_10c);
    FUN_00403e80(&local_c,local_10c);
    pcStack_134 = "Could not acquire the form for the Hint";
    FUN_00403f9c(&local_8,4);
    FUN_00403c40(local_8);
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0046616c TGDIHintWindow.virtual_0b8 ==== */

void TGDIHintWindow_virtual_0b8(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  HWND hWnd;
  int i_val;
  uint *puVar2;
  HWND hWndInsertAfter;
  int cy;
  UINT uFlags;
  uint x_val [4];
  
  puVar2 = x_val;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  piVar1 = (int *)FUN_00465fd0(param_1);
  FUN_004668a0(piVar1,x_val,param_3);
  uFlags = 0x50;
  cy = 0;
  i_val = 0;
  hWndInsertAfter = (HWND)0xffffffff;
  hWnd = (HWND)FUN_004349e0(param_1);
  SetWindowPos(hWnd,hWndInsertAfter,x_val[0],x_val[1],i_val,cy,uFlags);
  return;
}


/* ==== 004661bc TGDIHintWindow.virtual_0bc ==== */

void TGDIHintWindow_virtual_0bc(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int i_val;
  undefined4 *puVar1;
  undefined4 local_14 [4];
  
  puVar1 = local_14;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  i_val = FUN_00465fd0(param_1);
  FUN_0046678c(i_val,local_14,param_3,param_4);
  (**(code **)(*param_1 + 0xb8))(param_1,local_14,param_3);
  return;
}


/* ==== 00466204 TGDIHintWindow.virtual_0c0 ==== */

void TGDIHintWindow_virtual_0c0
               (int *param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = FUN_00465ffc(param_1,param_5);
  param_1[0x81] = iVar1;
  iVar1 = FUN_00465fd0(param_1);
  FUN_00466a44(iVar1,param_2,param_3,param_4,param_5);
  return;
}


/* ==== 00466244 TGDIHintWindow.virtual_0c4 ==== */

undefined4 TGDIHintWindow_virtual_0c4(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HWND hWnd;
  BOOL BVar3;
  
  uVar2 = THintWindow_virtual_0c4(param_1,param_2);
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    hWnd = (HWND)FUN_004349e0(param_1);
    BVar3 = IsWindowVisible(hWnd);
    if (BVar3 == 0) {
      FUN_0040c968(param_1 + 0x80);
    }
  }
  return uVar2;
}


/* ==== 00466284 TGDIHint.virtual_02c ==== */

void TGDIHint_virtual_02c(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_148;
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  undefined1 *puStackY_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte local_110 [256];
  int local_10;
  int local_c;
  undefined1 local_5;
  
  local_c = 0;
  local_10 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStackY_130 = (undefined1 *)0x4662a4;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStackY_134 = &LAB_00466373;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  puStackY_130 = &stack0xfffffffc;
  uVar1 = FUN_00403114(param_3,(int)&PTR_TWinControl_virtual_000_00465e10);
  if ((char)uVar1 == '\0') {
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80(&local_10,local_110);
    pcStackY_148 = "Object has wrong owner, it must be created by a TGDIHintWindow class.";
    FUN_00403f9c(&local_c,4);
    FUN_00403c40(local_c);
  }
  TGraphicControl_virtual_02c(param_1,'\0',param_3);
  iVar2 = FUN_0040312c(param_3,(int)&PTR_TWinControl_virtual_000_00465e10);
  param_1[0x4c] = iVar2;
  iVar2 = *(int *)(iVar2 + 0x204);
  param_1[0x4d] = iVar2;
  (**(code **)(*param_1 + 0x60))(param_1,iVar2);
  FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  *in_FS_OFFSET = pcStackY_148;
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 00466438 TGDIHint.CMTextChanged ==== */

void TGDIHint_CMTextChanged(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_c;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  puStack_18 = &LAB_004664d1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + -0x10))();
  if ((char)param_1[0x4b] == '\0') {
    TGroupBox_GetCaption((int)param_1,(int *)&local_8);
    uVar1 = FUN_00419338((int *)param_1[0x48],local_8);
    iVar2 = uVar1 + 6;
    if (SCARRY4(uVar1,6)) {
      thunk_FUN_00402808(uVar1);
      iVar2 = extraout_EDX;
    }
    TControl_SetWidth(param_1,iVar2);
    TGroupBox_GetCaption((int)param_1,(int *)&local_c);
    uVar1 = FUN_00419354((int *)param_1[0x48],local_c);
    iVar2 = uVar1 + 4;
    if (SCARRY4(uVar1,4)) {
      thunk_FUN_00402808(uVar1);
      iVar2 = extraout_EDX_00;
    }
    TControl_SetHeight(param_1,iVar2);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004664d8;
  puStack_18 = (undefined1 *)0x4664d0;
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 004664e0 TGDIHint.virtual_084 ==== */

void TGDIHint_virtual_084(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint format_val;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  undefined4 uVar10;
  tagRECT *lprc;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined *local_30;
  int local_2c [4];
  tagRECT left_val;
  int *local_c;
  int *local_8;
  int text;
  
  puStack_3c = &stack0xfffffffc;
  local_30 = (undefined *)0x0;
  puStack_40 = &LAB_0046677f;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  piVar8 = (int *)0x0;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x4a] != 0) {
    piVar8 = FUN_00466814((int)param_1);
    puVar1 = puStack_3c;
  }
  puStack_3c = puVar1;
  (**(code **)(*local_8 + 0x40))(local_8,&left_val);
  if (piVar8 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar8 + 0x1c))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*piVar8 + 0x28))();
      if ((cVar2 != '\0') || (*(char *)(local_8[0x4a] + 0x5c) != '\0')) {
        local_c = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX);
        uVar10 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffb0;
        format_val = FUN_00457194(local_c,piVar8[0x23],piVar8[0x10],0x20);
        text = left_val.bottom - left_val.top;
        if (SBORROW4(left_val.bottom,left_val.top)) {
          thunk_FUN_00402808(format_val);
          text = extraout_EDX;
        }
        iVar3 = FUN_00420cac(piVar8[0x10],text);
        piVar5 = local_2c;
        text = left_val.right - left_val.left;
        if (SBORROW4(left_val.right,left_val.left)) {
          thunk_FUN_00402808((uint)piVar5);
          text = extraout_EDX_00;
        }
        text = FUN_00420cac(piVar8[0x23],text);
        FUN_0040f804(left_val.left,left_val.top,text,piVar5,iVar3);
        piVar5 = local_2c;
        piVar4 = (int *)FUN_00456800((int)local_c,extraout_EDX_01,extraout_ECX_00);
        FUN_00418f14(piVar4,local_2c,(int *)local_8[0x48],piVar5);
        cVar2 = FUN_00454850((int)local_c,piVar8,*(char *)(local_8[0x4a] + 0x5c),
                             *(char *)(local_8[0x4a] + 0x5d));
        uVar6 = extraout_ECX_01;
        uVar7 = extraout_EDX_02;
        if (cVar2 == '\0') {
          piVar5 = (int *)FUN_00456800((int)local_c,extraout_EDX_02,extraout_ECX_01);
          FUN_00418f9c(piVar5,0,0,piVar8);
          uVar6 = extraout_ECX_02;
          uVar7 = extraout_EDX_03;
        }
        piVar8 = local_2c;
        piVar5 = (int *)FUN_00456800((int)local_c,uVar7,uVar6);
        FUN_00418f14((int *)local_8[0x48],local_2c,piVar5,piVar8);
        *in_FS_OFFSET = uVar10;
        FUN_0040c968(&local_c);
        return;
      }
      FUN_00418f9c((int *)local_8[0x48],0,0,piVar8);
      goto LAB_004666ca;
    }
  }
  piVar8 = (int *)FUN_00467d48(local_8[0x4a],5);
  cVar2 = (**(code **)(*piVar8 + 0x1c))();
  if (cVar2 == '\0') {
    FUN_00418f9c((int *)local_8[0x48],0,0,piVar8);
  }
  else {
    TBrush_SetColor(*(int **)(local_8[0x48] + 0x14),DAT_004ab068);
    FUN_004191b8((int *)local_8[0x48],left_val.left,left_val.top,left_val.bottom,left_val.right);
  }
LAB_004666ca:
  TCanvas_SetFont(local_8[0x48]);
  TBrush_SetColor(*(int **)(local_8[0x48] + 0x14),
                  *(undefined4 *)(*(int *)(local_8[0x48] + 0xc) + 0x18));
  format_val = TBrush_SetStyle(*(int **)(local_8[0x48] + 0x14),'\x01');
  bVar9 = SCARRY4(left_val.left,2);
  left_val.left = left_val.left + 2;
  if (bVar9) {
    format_val = thunk_FUN_00402808(format_val);
  }
  bVar9 = SCARRY4(left_val.top,2);
  left_val.top = left_val.top + 2;
  if (bVar9) {
    thunk_FUN_00402808(format_val);
  }
  format_val = FUN_004306a8((int)local_8);
  format_val = format_val | 0x810;
  if ((int)format_val < 0) {
    format_val = thunk_FUN_00402808(format_val);
  }
  lprc = &left_val;
  text = -1;
  TGroupBox_GetCaption((int)local_8,(int *)&local_30);
  lpchText = FUN_004040a0(local_30);
  hdc = (HDC)FUN_004194d8((int *)local_8[0x48]);
  DrawTextA(hdc,lpchText,text,lprc,format_val);
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00466786;
  puStack_40 = (undefined1 *)0x46677e;
  FUN_00403c5c((int *)&local_30);
  return;
}


/* ==== 0046678c FUN_0046678c ==== */

void FUN_0046678c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_4,(int)&PTR_TPersistent_virtual_000_00466ed8);
  if ((char)uVar1 == '\0') {
    FUN_00403c40("Assertion failure");
  }
  *(int **)(param_1 + 0x128) = param_4;
  return;
}


/* ==== 00466814 FUN_00466814 ==== */

int * FUN_00466814(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_00467d48(*(int *)(param_1 + 0x128),5);
  piVar3 = (int *)0x0;
  uVar2 = FUN_00403114(piVar1,(int)&LAB_00454aa4);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_virtual_000_0045b71c);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TPersistent_virtual_000_0045b71c);
      piVar3 = (int *)(**(code **)(*piVar1 + 0x70))(piVar1,piVar1[0xb]);
      (**(code **)(*piVar3 + 0x3c))(piVar3,(char)piVar1[0x13]);
      FUN_0045727c(piVar3,(char)piVar1[0x15]);
      FUN_00457260(piVar3,piVar1[0x14]);
    }
  }
  else {
    piVar3 = (int *)FUN_0040312c(piVar1,(int)&LAB_00454aa4);
  }
  return piVar3;
}


/* ==== 004668a0 FUN_004668a0 ==== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004668a0(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int i_val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar6;
  int extraout_EDX;
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
  int extraout_EDX_10;
  undefined4 extraout_EDX_11;
  uint *puVar7;
  uint *puVar8;
  int *in_FS_OFFSET;
  byte bVar9;
  bool bVar10;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  uint local_2c [4];
  uint local_1c [4];
  uint *local_c;
  int *local_8;
  
  bVar9 = 0;
  puStack_3c = &stack0xfffffffc;
  puVar7 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)(param_1 + 0x4b) = 1;
  puStack_40 = &LAB_00466a34;
  iStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_44;
  uVar3 = local_1c[3] - local_1c[1];
  puVar2 = &stack0xfffffffc;
  local_c = param_3;
  local_8 = param_1;
  if (SBORROW4(local_1c[3],local_1c[1])) {
    uVar3 = thunk_FUN_00402808(uVar3);
    puVar2 = puStack_3c;
  }
  puStack_3c = puVar2;
  puVar7 = local_2c;
  i_val = local_8[9];
  piVar1 = (int *)(i_val + 0x34);
  iVar6 = local_1c[1] - *piVar1;
  if (SBORROW4(local_1c[1],*piVar1)) {
    thunk_FUN_00402808((uint)local_8);
    iVar6 = extraout_EDX;
  }
  uVar5 = local_1c[0];
  piVar1 = (int *)(i_val + 0x30);
  uVar4 = local_1c[0] - *piVar1;
  if (SBORROW4(local_1c[0],*piVar1)) {
    uVar4 = thunk_FUN_00402808(uVar4);
    iVar6 = extraout_EDX_00;
  }
  i_val = local_1c[2] - uVar5;
  if (SBORROW4(local_1c[2],uVar5)) {
    uVar4 = thunk_FUN_00402808(uVar4);
    i_val = extraout_ECX;
    iVar6 = extraout_EDX_01;
  }
  FUN_0040f804(uVar4,iVar6,i_val,(int *)puVar7,uVar3);
  puVar7 = local_2c;
  puVar8 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  uVar3 = TGroupBox_SetCaption((int)local_8,local_c);
  bVar10 = SCARRY4(local_1c[3],4);
  local_1c[3] = local_1c[3] + 4;
  if (bVar10) {
    thunk_FUN_00402808(uVar3);
  }
  uVar3 = local_8[0x4d];
  i_val = *(int *)(uVar3 + 0x38) + -0x14;
  if (SBORROW4(*(int *)(uVar3 + 0x38),0x14)) {
    uVar3 = thunk_FUN_00402808(uVar3);
    i_val = extraout_EDX_02;
  }
  uVar5 = *(int *)(uVar3 + 0x3c) - 0x14;
  if (SBORROW4(*(int *)(uVar3 + 0x3c),0x14)) {
    uVar5 = thunk_FUN_00402808(uVar5);
    i_val = extraout_EDX_03;
  }
  if ((int)uVar5 < (int)local_1c[3]) {
    iVar6 = local_1c[3] - uVar5;
    if (SBORROW4(local_1c[3],uVar5)) {
      uVar5 = thunk_FUN_00402808(uVar5);
      iVar6 = extraout_ECX_00;
      i_val = extraout_EDX_04;
    }
    bVar10 = SBORROW4(local_1c[1],iVar6);
    local_1c[1] = local_1c[1] - iVar6;
    if (bVar10) {
      uVar5 = thunk_FUN_00402808(uVar5);
      i_val = extraout_EDX_05;
    }
    iVar6 = local_1c[3] - uVar5;
    if (SBORROW4(local_1c[3],uVar5)) {
      uVar5 = thunk_FUN_00402808(uVar5);
      iVar6 = extraout_ECX_01;
      i_val = extraout_EDX_06;
    }
    bVar10 = SBORROW4(local_1c[3],iVar6);
    local_1c[3] = local_1c[3] - iVar6;
    if (bVar10) {
      thunk_FUN_00402808(uVar5);
      i_val = extraout_EDX_07;
    }
  }
  if (i_val < (int)local_1c[2]) {
    uVar3 = local_1c[2] - i_val;
    if (SBORROW4(local_1c[2],i_val)) {
      uVar3 = thunk_FUN_00402808(uVar3);
      i_val = extraout_EDX_08;
    }
    bVar10 = SBORROW4(local_1c[0],uVar3);
    local_1c[0] = local_1c[0] - uVar3;
    if (bVar10) {
      thunk_FUN_00402808(uVar3);
      i_val = extraout_EDX_09;
    }
    uVar3 = local_1c[2] - i_val;
    if (SBORROW4(local_1c[2],i_val)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    bVar10 = SBORROW4(local_1c[2],uVar3);
    local_1c[2] = local_1c[2] - uVar3;
    if (bVar10) {
      thunk_FUN_00402808(uVar3);
    }
  }
  if ((int)local_1c[0] < 0) {
    local_1c[0] = 0;
  }
  if ((int)local_1c[3] < 0) {
    local_1c[3] = 0;
  }
  i_val = local_1c[2] - local_1c[0];
  if (SBORROW4(local_1c[2],local_1c[0])) {
    local_1c[0] = thunk_FUN_00402808(local_1c[0]);
    i_val = extraout_ECX_02;
  }
  iVar6 = local_1c[3] - local_1c[1];
  if (SBORROW4(local_1c[3],local_1c[1])) {
    local_1c[0] = thunk_FUN_00402808(local_1c[0]);
    iVar6 = extraout_ECX_03;
    local_1c[1] = extraout_EDX_10;
  }
  (**(code **)(*local_8 + 0x7c))(local_8,local_1c[0],local_1c[1],iVar6,i_val);
  FUN_00403178(local_8,CONCAT31((int3)((uint)extraout_EDX_11 >> 8),1),extraout_ECX_04);
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = iVar6;
  *(undefined1 *)(local_8 + 0x4b) = 0;
  return;
}


/* ==== 00466a44 FUN_00466a44 ==== */

void FUN_00466a44(int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  LONG *pLVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint format_val;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 uVar5;
  LPRECT lprc_val;
  int text;
  
  uVar3 = FUN_00403114(param_5,(int)&PTR_TPersistent_virtual_000_00466ed8);
  if ((char)uVar3 == '\0') {
    FUN_00403c40("Assertion failure");
  }
  *(int **)(param_1 + 0x128) = param_5;
  piVar4 = (int *)FUN_00467d48(*(int *)(param_1 + 0x128),5);
  cVar2 = (**(code **)(*piVar4 + 0x1c))();
  if (cVar2 == '\0') {
    uVar5 = 0;
    lprc_val = param_4;
    piVar4 = (int *)FUN_00467d48(*(int *)(param_1 + 0x128),5);
    uVar3 = (**(code **)(*piVar4 + 0x20))();
    FUN_0040f7e8(0,0,uVar3,&lprc_val->left,uVar5);
  }
  else {
    FUN_0040f7e8(0,0,param_2,&param_4->left,0);
  }
  TCanvas_SetFont(*(int *)(param_1 + 0x120));
  format_val = FUN_004306a8(param_1);
  format_val = format_val | 0xc10;
  if ((int)format_val < 0) {
    format_val = thunk_FUN_00402808(format_val);
  }
  text = -1;
  lprc_val = param_4;
  lpchText = FUN_004040a0(param_3);
  hdc = (HDC)FUN_004194d8(*(int **)(param_1 + 0x120));
  format_val = DrawTextA(hdc,lpchText,text,lprc_val,format_val);
  pLVar1 = &param_4->right;
  text = *pLVar1;
  *pLVar1 = *pLVar1 + 6;
  if (SCARRY4(text,6)) {
    format_val = thunk_FUN_00402808(format_val);
  }
  pLVar1 = &param_4->bottom;
  text = *pLVar1;
  *pLVar1 = *pLVar1 + 2;
  if (SCARRY4(text,2)) {
    thunk_FUN_00402808(format_val);
  }
  return;
}


