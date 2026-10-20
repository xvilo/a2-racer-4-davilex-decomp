/* SetDebug.exe — units/StdCtrls.pas: 60 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0041f1dc TCustomLabel.virtual_02c ==== */

int * TCustomLabel_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TGraphicControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x840;
  TControl_SetWidth(param_1,0x41);
  TControl_SetHeight(param_1,0x11);
  *(undefined1 *)((int)param_1 + 0x12d) = 1;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041f248 TCustomLabel.virtual_088 ==== */

void TCustomLabel_virtual_088(int param_1,int *param_2)

{
  TLabel_GetCaption(param_1,param_2);
  return;
}


/* ==== 0041f25c TCustomLabel.dynamic_ffcc ==== */

void TCustomLabel_dynamic_ffcc(int *param_1,LPRECT lprc_val,uint param_3)

{
  char cVar1;
  uint format;
  int text;
  LPCSTR pCVar2;
  HDC pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *in_FS_OFFSET;
  LPRECT lprc;
  uint format_00;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  char *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  puStack_1c = &LAB_0041f3b2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x88))(param_1,&local_8);
  uVar4 = extraout_ECX;
  if (((param_3 & 0x400) != 0) &&
     ((local_8 == (char *)0x0 ||
      ((((char)param_1[0x4c] != '\0' && (*local_8 == '&')) && (local_8[1] == '\0')))))) {
    FUN_00403c40((int *)&local_8,(undefined4 *)&DAT_0041f3c8);
    uVar4 = extraout_ECX_00;
  }
  if ((char)param_1[0x4c] == '\0') {
    param_3 = param_3 | 0x800;
  }
  format = FUN_004266c8(param_1,param_3,uVar4);
  TCanvas_SetFont(param_1[0x48]);
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    OffsetRect(lprc_val,1,1);
    TFont_SetColor(*(int **)(param_1[0x48] + 0xc),-0x7fffffec,extraout_ECX_01);
    lprc = lprc_val;
    format_00 = format;
    text = FUN_00403c38((int)local_8);
    pCVar2 = FUN_00403dfc(local_8);
    pHVar3 = (HDC)FUN_00417430((int *)param_1[0x48]);
    DrawTextA(pHVar3,pCVar2,text,lprc,format_00);
    OffsetRect(lprc_val,-1,-1);
    TFont_SetColor(*(int **)(param_1[0x48] + 0xc),-0x7ffffff0,extraout_ECX_02);
    text = FUN_00403c38((int)local_8);
    pCVar2 = FUN_00403dfc(local_8);
    pHVar3 = (HDC)FUN_00417430((int *)param_1[0x48]);
    DrawTextA(pHVar3,pCVar2,text,lprc_val,format);
  }
  else {
    text = FUN_00403c38((int)local_8);
    pCVar2 = FUN_00403dfc(local_8);
    pHVar3 = (HDC)FUN_00417430((int *)param_1[0x48]);
    DrawTextA(pHVar3,pCVar2,text,lprc_val,format);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041f3b9;
  puStack_1c = (undefined1 *)0x41f3b1;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0041f3cc TCustomLabel.virtual_084 ==== */

void TCustomLabel_virtual_084(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int i_val;
  tagRECT *rect;
  undefined4 *puVar3;
  byte bVar4;
  tagRECT tStack_3c;
  undefined4 auStack_2c [3];
  int iStack_20;
  RECT local_1c;
  
  bVar4 = 0;
  piVar1 = (int *)param_1[0x48];
  uVar2 = TLabel_GetTransparent((int)param_1);
  if ((char)uVar2 == '\0') {
    TBrush_SetColor((int *)piVar1[5],param_1[0x18]);
    TBrush_SetStyle((int *)piVar1[5],'\0');
    (**(code **)(*param_1 + 0x40))(param_1,&local_1c);
    FUN_00417100(piVar1,&local_1c);
  }
  TBrush_SetStyle((int *)piVar1[5],'\x01');
  (**(code **)(*param_1 + 0x40))(param_1,&tStack_3c);
  uVar2 = (uint)(ushort)(*(ushort *)(&DAT_00446614 + (uint)*(byte *)((int)param_1 + 0x12f) * 2) |
                         0x40 | *(ushort *)(&DAT_0044660c + (uint)*(byte *)(param_1 + 0x4b) * 2));
  if (*(char *)((int)param_1 + 0x12e) != '\0') {
    rect = &tStack_3c;
    puVar3 = auStack_2c;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *puVar3 = rect->left;
      rect = (tagRECT *)((int)rect + ((uint)bVar4 * -2 + 1) * 4);
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    FUN_00402ef0(param_1,auStack_2c,uVar2 | 0x400);
    if (*(char *)((int)param_1 + 0x12e) == '\x02') {
      OffsetRect(&tStack_3c,0,param_1[0xf] - iStack_20);
    }
    else {
      i_val = param_1[0xf] - iStack_20 >> 1;
      if (i_val < 0) {
        i_val = i_val + (uint)((param_1[0xf] - iStack_20 & 1U) != 0);
      }
      OffsetRect(&tStack_3c,0,i_val);
    }
  }
  FUN_00402ef0(param_1,&tStack_3c,uVar2);
  return;
}


/* ==== 0041f4d0 TCustomLabel.virtual_00c ==== */

void TCustomLabel_virtual_00c(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TControl_virtual_00c(param_1);
  FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 0041f4e8 TCustomLabel.dynamic_ffcd ==== */

void TCustomLabel_dynamic_ffcd(int *param_1)

{
  char cVar1;
  HDC hDC;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar2;
  char acStack_20 [4];
  undefined1 local_1c [8];
  int iStack_14;
  undefined4 uStack_10;
  
  if (((*(byte *)(param_1 + 8) & 2) == 0) && (*(char *)((int)param_1 + 0x12d) != '\0')) {
    (**(code **)(*param_1 + 0x40))(param_1,local_1c);
    hDC = GetDC((HWND)0x0);
    FUN_004174b0((int *)param_1[0x48],(int)hDC);
    FUN_00402ef0(param_1,local_1c,
                 (uint)(*(ushort *)(&DAT_00446618 + (uint)*(byte *)((int)param_1 + 0x12f) * 2) |
                       0x440));
    FUN_004174b0((int *)param_1[0x48],0);
    ReleaseDC((HWND)0x0,hDC);
    iVar2 = param_1[0xc];
    acStack_20[0] = (char)param_1[0x4b];
    cVar1 = FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      FUN_00421940(acStack_20);
    }
    if (acStack_20[0] == '\x01') {
      iVar2 = iVar2 + (param_1[0xe] - iStack_14);
    }
    (**(code **)(*param_1 + 0x7c))(param_1,iVar2,param_1[0xd],uStack_10,iStack_14);
  }
  return;
}


/* ==== 0041f5b4 TLabel.SetAlignment ==== */

void TLabel_SetAlignment(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4b]) {
    *(char *)(param_1 + 0x4b) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0041f5c8 TCustomLabel.virtual_08c ==== */

void TCustomLabel_virtual_08c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12d)) {
    *(char *)((int)param_1 + 0x12d) = (char)param_2;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 0041f5e4 TLabel.GetTransparent ==== */

uint TLabel_GetTransparent(int param_1)

{
  return CONCAT31((int3)((uint)param_1 >> 8),(*(byte *)(param_1 + 0x40) & 0x40) != 0) ^ 1;
}


/* ==== 0041f5f0 TLabel.SetFocusControl ==== */

void TLabel_SetFocusControl(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x128) = param_2;
  if (param_2 != 0) {
    FUN_00413a98(param_2,param_1,param_3);
  }
  return;
}


/* ==== 0041f604 TLabel.SetShowAccelChar ==== */

void TLabel_SetShowAccelChar(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4c]) {
    *(char *)(param_1 + 0x4c) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0041f618 TLabel.SetTransparent ==== */

void TLabel_SetTransparent(int *param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = TLabel_GetTransparent((int)param_1);
  if (param_2 != (char)uVar1) {
    if (param_2 == '\0') {
      param_1[0x10] = param_1[0x10] | 0x40;
    }
    else {
      param_1[0x10] = param_1[0x10] & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0041f658 TLabel.SetLayout ==== */

DWORD __stdcall TLabel_SetLayout(HDC hdc,DWORD l)

{
  int *in_EAX;
  char in_DL;
  
  if (in_DL != *(char *)((int)in_EAX + 0x12e)) {
    *(char *)((int)in_EAX + 0x12e) = in_DL;
    in_EAX = (int *)(**(code **)(*in_EAX + 0x74))();
  }
  return (DWORD)in_EAX;
}


/* ==== 0041f66c TLabel.SetWordWrap ==== */

void TLabel_SetWordWrap(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12f)) {
    *(char *)((int)param_1 + 0x12f) = (char)param_2;
    FUN_00402ef0(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0041f694 TCustomLabel.virtual_010 ==== */

void TCustomLabel_virtual_010(int *param_1,int param_2,char param_3)

{
  TControl_virtual_010(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x4a])) {
    param_1[0x4a] = 0;
  }
  return;
}


/* ==== 0041f6c4 TCustomLabel.CMTextChanged ==== */

void TCustomLabel_CMTextChanged(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + 0x74))();
  FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 0041f6dc TCustomLabel.CMFontChanged ==== */

void TCustomLabel_CMFontChanged(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TControl_CMFontChanged(param_1);
  FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 0041f6f8 TCustomLabel.CMDialogChar ==== */

void TCustomLabel_CMDialogChar(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0041f785;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_1[0x4a] != 0) {
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    if ((cVar2 != '\0') && ((char)param_1[0x4c] != '\0')) {
      TLabel_GetCaption((int)param_1,&local_8);
      cVar2 = FUN_00439e44(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
      if (cVar2 != '\0') {
        piVar1 = (int *)param_1[0x4a];
        cVar2 = FUN_00402ef0(piVar1,extraout_EDX,extraout_ECX);
        if (cVar2 != '\0') {
          (**(code **)(*piVar1 + 0xb0))();
          *(undefined4 *)(param_2 + 0xc) = 1;
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041f78c;
  puStack_1c = (undefined1 *)0x41f784;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0041f794 TButtonActionLink.virtual_000 ==== */

void TButtonActionLink_virtual_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TWinControlActionLink_virtual_000(param_1,param_2);
  uVar1 = FUN_00402ea4(param_2,(int)&PTR_TWinControl_virtual_000_0041ea40);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


/* ==== 0041f7b8 TButtonActionLink.virtual_024 ==== */

undefined4 TButtonActionLink_virtual_024(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_024(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0xb4))();
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (cVar1 == *(char *)(iVar2 + 0x58)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0041f7f0 TButtonActionLink.virtual_044 ==== */

void TButtonActionLink_virtual_044(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41f802;
  cVar2 = (**(code **)(*param_1 + 0x24))();
  if (cVar2 != '\0') {
    piVar1 = (int *)param_1[10];
    *(undefined1 *)(piVar1 + 0x7c) = 1;
    puStack_14 = &LAB_0041f846;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
    *in_FS_OFFSET = uStack_18;
    *(undefined1 *)(param_1[10] + 0x1f0) = 0;
    return;
  }
  return;
}


/* ==== 0041f854 TButtonControl.virtual_02c ==== */

int * TButtonControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  if ((PTR_DAT_00446da0[8] != '\0') && (*(int *)PTR_DAT_00446d9c == 2)) {
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041f8a8 TButtonControl.dynamic_fff0 ==== */

void TButtonControl_dynamic_fff0(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  TWinControl_dynamic_fff0(param_1,param_2,param_3);
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_virtual_000_0042f24c);
  if ((char)uVar2 != '\0') {
    if ((param_3 != '\0') && (cVar1 = (**(code **)(*param_1 + 0xb4))(), cVar1 != '\0')) {
      return;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,(char)param_2[0x16]);
  }
  return;
}


/* ==== 0041f8f0 TButtonControl.dynamic_ffde ==== */

undefined1 * TButtonControl_dynamic_ffde(void)

{
  return &LAB_0041e97c;
}


/* ==== 0041f8f8 TButtonControl.virtual_0b4 ==== */

undefined4 TButtonControl_virtual_0b4(void)

{
  return 0;
}


/* ==== 0041f8fc TButtonControl.virtual_0b8 ==== */

void TButtonControl_virtual_0b8(void)

{
  return;
}


/* ==== 0041f900 TButtonControl.virtual_06c ==== */

void TButtonControl_virtual_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  
  uVar1 = *param_2;
  if ((uVar1 == 0x201) || (uVar1 == 0x203)) {
    if (((*(byte *)(param_1 + 8) & 0x10) == 0) &&
       (cVar2 = FUN_00402ef0(param_1,param_2,param_3), param_3 = extraout_ECX, cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x7c) = 1;
      hWnd = (HWND)FUN_0042a8b4(param_1);
      SetFocus(hWnd);
      *(undefined1 *)(param_1 + 0x7c) = 0;
      cVar2 = FUN_00402ef0(param_1,extraout_EDX,extraout_ECX_00);
      param_3 = extraout_ECX_01;
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  else if ((uVar1 == 0xbd11) && ((char)param_1[0x7c] != '\0')) {
    return;
  }
  TWinControl_virtual_06c(param_1,param_2,param_3);
  return;
}


/* ==== 0041f978 TButton.virtual_02c ==== */

int * TButton_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TButtonControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xe0;
  TControl_SetWidth(param_1,0x4b);
  TControl_SetHeight(param_1,0x19);
  TButton_SetTabStop((int)param_1,'\x01');
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041f9dc TButton.dynamic_ffec ==== */

void TButton_dynamic_ffec(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00439eb4(param_1);
  if (piVar1 != (int *)0x0) {
    piVar1[0x8d] = param_1[0x7f];
  }
  TControl_dynamic_ffec((int)param_1);
  return;
}


/* ==== 0041fa00 TButton.dynamic_ffce ==== */

undefined4 TButton_dynamic_ffce(void)

{
  return 0;
}


/* ==== 0041fa04 TButton.virtual_0bc ==== */

void TButton_virtual_0bc(int *param_1,char param_2)

{
  bool bVar1;
  HWND pHVar2;
  uint window_long;
  uint wParam;
  UINT Msg;
  int nIndex;
  LPARAM lParam;
  
  bVar1 = FUN_0042abb0((int)param_1);
  if (bVar1) {
    wParam = (uint)(param_2 != '\0');
    nIndex = -0x10;
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    window_long = GetWindowLongA(pHVar2,nIndex);
    if ((window_long & 0xf) != wParam) {
      lParam = 1;
      Msg = 0xf4;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
    }
  }
  return;
}


/* ==== 0041fa58 TButton.SetDefault ==== */

void TButton_SetDefault(int *param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 0x7e) = param_2;
  bVar1 = FUN_0042abb0((int)param_1);
  if (bVar1) {
    piVar2 = FUN_00439eb4(param_1);
    if (piVar2 != (int *)0x0) {
      FUN_00425780((int)piVar2,0xb007,0,piVar2[0x82]);
    }
  }
  return;
}


/* ==== 0041fa8c TButton.virtual_090 ==== */

void TButton_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  FUN_004278a4(param_1,(int)param_2,"BUTTON");
  param_2[1] = param_2[1] | *(uint *)(&DAT_0044661c + (uint)*(byte *)(param_1 + 0x7e) * 4);
  return;
}


/* ==== 0041fac8 TButton.virtual_098 ==== */

void TButton_virtual_098(int *param_1)

{
  TWinControl_virtual_098(param_1);
  *(char *)((int)param_1 + 0x1fa) = (char)param_1[0x7e];
  return;
}


/* ==== 0041fae0 TButton.CNCommand ==== */

void TButton_CNCommand(int *param_1,int param_2,undefined4 param_3)

{
  if (*(short *)(param_2 + 6) == 0) {
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 0041faf4 TButton.CMDialogKey ==== */

void TButton_CMDialogKey(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (((*(short *)(param_2 + 4) == 0xd) && (*(char *)((int)param_1 + 0x1fa) != '\0')) ||
     ((*(short *)(param_2 + 4) == 0x1b && (*(char *)((int)param_1 + 0x1f9) != '\0')))) {
    bVar1 = FUN_00439dbc(*(uint *)(param_2 + 8));
    if ((bVar1 == 0) &&
       (cVar2 = FUN_00402ef0(param_1,extraout_EDX & 0xffffff00,extraout_ECX), cVar2 != '\0')) {
      FUN_00402ef0(param_1,extraout_EDX_00,extraout_ECX_00);
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
  }
  TWinControl_CMDialogKey((int)param_1,param_2);
  return;
}


/* ==== 0041fb64 TButton.CMDialogChar ==== */

void TButton_CMDialogChar(int *param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0041fbda;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TLabel_GetCaption((int)param_1,&local_8);
  cVar1 = FUN_00439e44(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      FUN_00402ef0(param_1,extraout_EDX_00,extraout_ECX_00);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_0041fbc4;
    }
  }
  TWinControl_CMDialogChar((int)param_1,param_2);
LAB_0041fbc4:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041fbe1;
  puStack_1c = (undefined1 *)0x41fbd9;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0041fbe8 TButton.CMFocusChanged ==== */

void TButton_CMFocusChanged(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_virtual_000_0041eb94);
  if ((char)uVar2 == '\0') {
    *(char *)((int)param_1 + 0x1fa) = (char)param_1[0x7e];
  }
  else {
    *(bool *)((int)param_1 + 0x1fa) = param_1 == piVar1;
  }
  (**(code **)(*param_1 + 0xbc))(param_1,*(undefined1 *)((int)param_1 + 0x1fa));
  TWinControl_CMFocusChanged((int)param_1,param_2);
  return;
}


/* ==== 0041fc3c TButton.WMEraseBkgnd ==== */

void TButton_WMEraseBkgnd(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00423c3c TButton.GetAction ==== */

undefined4 TButton_GetAction(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10);
  }
  return 0;
}


/* ==== 00423c4c TLabel.SetAnchors ==== */

void TLabel_SetAnchors(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x51)) {
    *(char *)(param_1 + 0x51) = param_2;
    FUN_00423f38(param_1);
  }
  return;
}


/* ==== 00423c6c TButton.SetAction ==== */

void TButton_SetAction(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 == 0) {
    FUN_00402d14((int *)param_1[0x17]);
    param_1[0x17] = 0;
    param_1[0x10] = param_1[0x10] & 0xffff7fff;
  }
  else {
    param_1[0x10] = param_1[0x10] | 0x8000;
    if (param_1[0x17] == 0) {
      iVar1 = FUN_00402ef0(param_1,param_2,param_3);
      iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      param_1[0x17] = iVar1;
    }
    (**(code **)(*(int *)param_1[0x17] + 0xc))((int *)param_1[0x17],param_2);
    iVar1 = param_1[0x17];
    *(int **)(iVar1 + 0xc) = param_1;
    *(undefined1 **)(iVar1 + 8) = &LAB_004263e0;
    FUN_00402ef0(param_1,param_2,
                 CONCAT31((int3)((uint)extraout_ECX >> 8),(*(byte *)(param_2 + 0x20) & 1) != 0));
    FUN_00413a98(param_2,(int)param_1,extraout_ECX_00);
  }
  return;
}


/* ==== 00423e0c TLabel.SetAlign ==== */

void TLabel_SetAlign(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  cVar1 = *(char *)((int)param_1 + 0x4b);
  cVar3 = (char)param_2;
  uVar2 = param_2;
  if (cVar3 != cVar1) {
    *(char *)((int)param_1 + 0x4b) = cVar3;
    TLabel_SetAnchors((int)param_1,(&DAT_0044662c)[param_2 & 0xff]);
    param_3 = extraout_ECX;
    uVar2 = extraout_EDX;
    if (((*(byte *)(param_1 + 8) & 1) == 0) &&
       (((*(byte *)(param_1 + 8) & 0x10) == 0 || (param_1[9] != 0)))) {
      bVar4 = (byte)(cVar3 - 3U) < 2;
      if (((byte)(cVar1 - 1U) < 2 == bVar4) &&
         ((((cVar1 != '\0' && (cVar1 != '\x05')) && (cVar3 != '\0')) && (cVar3 != '\x05')))) {
        (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf]);
        param_3 = extraout_ECX_00;
        uVar2 = extraout_EDX_00;
      }
      else {
        FUN_00402ef0(param_1,CONCAT31((int3)(param_2 >> 8),bVar4),extraout_ECX);
        param_3 = extraout_ECX_01;
        uVar2 = extraout_EDX_01;
      }
    }
  }
  FUN_00402ef0(param_1,uVar2,param_3);
  return;
}


/* ==== 004246fc TLabel.SetVisible ==== */

void TLabel_SetVisible(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)((int)param_1 + 0x47) != (char)param_2) {
    FUN_00402ef0(param_1,param_2,param_3);
    *(char *)((int)param_1 + 0x47) = (char)param_2;
    FUN_00425780((int)param_1,0xb00b,param_2 & 0xff,0);
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00424774 FUN_00424774 ==== */

int FUN_00424774(int param_1)

{
  if (0 < *(int *)(param_1 + 0x98)) {
    return *(int *)(param_1 + 0x98);
  }
  return *(int *)(param_1 + 0x3c);
}


/* ==== 00424788 FUN_00424788 ==== */

int FUN_00424788(int param_1)

{
  if (0 < *(int *)(param_1 + 0x94)) {
    return *(int *)(param_1 + 0x94);
  }
  return *(int *)(param_1 + 0x38);
}


/* ==== 0042479c TLabel.SetPopupMenu ==== */

void TLabel_SetPopupMenu(int *param_1,int *param_2)

{
  undefined4 extraout_ECX;
  
  param_1[0x1b] = (int)param_2;
  if (param_2 != (int *)0x0) {
    FUN_00436764(param_2,param_1);
    FUN_00413a98((int)param_2,(int)param_1,extraout_ECX);
  }
  return;
}


/* ==== 004247c0 FUN_004247c0 ==== */

void FUN_004247c0(int param_1,undefined4 param_2)

{
  FUN_00425780(param_1,0xc,0,param_2);
  FUN_00425780(param_1,0xb012,0,0);
  return;
}


/* ==== 004247e4 TLabel.GetCaption ==== */

void TLabel_GetCaption(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00424758(param_1);
  FUN_00403aa0(param_2,(undefined4 *)0x0,uVar1);
  if (uVar1 != 0) {
    FUN_00424768(param_1,*param_2,uVar1 + 1);
  }
  return;
}


/* ==== 00424814 TLabel.SetCaption ==== */

void TLabel_SetCaption(int param_1,uint *param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  uVar2 = 1;
  puStack_18 = &LAB_00424869;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TLabel_GetCaption(param_1,(int *)&local_8);
  FUN_00403d48(local_8,param_2);
  if (!(bool)uVar2) {
    puVar1 = FUN_00403dfc((undefined *)param_2);
    FUN_004247c0(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00424870;
  puStack_18 = (undefined1 *)0x424868;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 004248d0 TLabel.SetFont ==== */

void TLabel_SetFont(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x58) + 8))();
  return;
}


/* ==== 00424908 TLabel.SetParentFont ==== */

void TLabel_SetParentFont(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x49)) &&
     (*(char *)(param_1 + 0x49) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb008,0,0);
  }
  return;
}


/* ==== 00424928 TLabel.SetShowHint ==== */

void TLabel_SetShowHint(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x89)) {
    *(char *)(param_1 + 0x89) = param_2;
    *(undefined1 *)(param_1 + 0x8a) = 0;
    FUN_00425780(param_1,0xb022,0,0);
  }
  return;
}


/* ==== 0042494c TLabel.SetParentShowHint ==== */

void TLabel_SetParentShowHint(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x8a)) &&
     (*(char *)(param_1 + 0x8a) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb023,0,0);
  }
  return;
}


/* ==== 00424970 TLabel.SetColor ==== */

void TLabel_SetColor(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x60) = param_2;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    FUN_00425780(param_1,0xb00d,0,0);
  }
  return;
}


/* ==== 00424994 TLabel.SetParentColor ==== */

void TLabel_SetParentColor(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x4a)) &&
     (*(char *)(param_1 + 0x4a) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb009,0,0);
  }
  return;
}


/* ==== 0042aa48 TButton.GetTabOrder ==== */

int TButton_GetTabOrder(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_0040f080(*(int *)(*(int *)(param_1 + 0x24) + 0x16c),param_1);
    return iVar1;
  }
  return -1;
}


/* ==== 0042aa6c FUN_0042aa6c ==== */

void FUN_0042aa6c(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = TButton_GetTabOrder(param_1);
  iVar3 = (int)(short)iVar3;
  if (-1 < iVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x24) + 0x16c);
    iVar2 = piVar1[2];
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = (short)iVar2 + -1;
    }
    if (iVar3 != param_2) {
      FUN_0040ef14(piVar1,iVar3);
      FUN_0040f0a0(*(int **)(*(int *)(param_1 + 0x24) + 0x16c),(int)param_2,param_1);
    }
  }
  return;
}


/* ==== 0042aac8 TButton.SetTabOrder ==== */

void TButton_SetTabOrder(int param_1,short param_2)

{
  if ((*(byte *)(param_1 + 0x44) & 8) != 0) {
    *(int *)(param_1 + 0x170) = (int)param_2;
    return;
  }
  FUN_0042aa6c(param_1,param_2);
  return;
}


/* ==== 0042aae0 TButton.SetTabStop ==== */

void TButton_SetTabStop(int param_1,char param_2)

{
  bool bVar1;
  uint new_long;
  
  if (param_2 != *(char *)(param_1 + 0x174)) {
    *(char *)(param_1 + 0x174) = param_2;
    bVar1 = FUN_0042abb0(param_1);
    if (bVar1) {
      new_long = GetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10);
      new_long = new_long & 0xfffeffff;
      if (param_2 != '\0') {
        new_long = new_long | 0x10000;
      }
      SetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10,new_long);
    }
    FUN_00425780(param_1,0xb028,0,0);
  }
  return;
}


