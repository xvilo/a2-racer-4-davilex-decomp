/* Menu.exe — units/StdCtrls.pas: 208 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0042588c FUN_0042588c ==== */

undefined4 FUN_0042588c(int param_1)

{
  undefined4 in_EDX;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x6c) != 0) break;
    param_1 = *(int *)(param_1 + 0x24);
  }
  return CONCAT31((int3)((uint)in_EDX >> 8),1);
}


/* ==== 00425a94 TCustomGroupBox.virtual_02c ==== */

int * TCustomGroupBox_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = 0x8ab;
  TControl_SetWidth(param_1,0xb9);
  TControl_SetHeight(param_1,0x69);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00425af0 TCustomGroupBox.virtual_084 ==== */

void TCustomGroupBox_virtual_084(int param_1,LPRECT lprc_val)

{
  LONG LVar1;
  
  TWinControl_virtual_084();
  TCanvas_SetFont(*(int *)(param_1 + 0x1f0));
  LVar1 = FUN_00419354(*(int **)(param_1 + 0x1f0),&DAT_00425b48);
  lprc_val->top = lprc_val->top + LVar1;
  InflateRect(lprc_val,-1,-1);
  if (*(char *)(param_1 + 0x138) != '\0') {
    InflateRect(lprc_val,-1,-1);
  }
  return;
}


/* ==== 00425b4c TCustomGroupBox.virtual_090 ==== */

void TCustomGroupBox_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


/* ==== 00425b5c TCustomGroupBox.virtual_0b4 ==== */

void TCustomGroupBox_virtual_0b4(int *param_1)

{
  int *piVar1;
  char cVar2;
  LONG LVar3;
  uint format_val;
  uint format;
  LPCSTR pCVar4;
  HDC pHVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  int j;
  undefined4 extraout_EDX;
  LONG *pLVar7;
  RECT *pRVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  LONG local_2c [4];
  int local_1c;
  RECT i_val;
  uint local_8;
  
  bVar9 = 0;
  puStack_50 = &stack0xfffffffc;
  local_40 = (undefined *)0x0;
  local_3c = 0;
  local_38 = (undefined *)0x0;
  local_34 = 0;
  local_30 = (undefined *)0x0;
  local_1c = 0;
  puStack_54 = &LAB_00425d50;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  piVar1 = (int *)param_1[0x7c];
  TCanvas_SetFont((int)piVar1);
  local_8 = FUN_00419354(piVar1,&DAT_00425d68);
  j = (int)local_8 >> 1;
  if (j < 0) {
    j = j + (uint)((local_8 & 1) != 0);
  }
  Classes_Rect(0,j + -1,param_1[0xe],&i_val.left,param_1[0xf]);
  if ((char)param_1[0x4e] == '\0') {
    TBrush_SetColor((int *)piVar1[5],0x80000006);
  }
  else {
    i_val.left = i_val.left + 1;
    i_val.top = i_val.top + 1;
    TBrush_SetColor((int *)piVar1[5],0x80000014);
    FUN_004190b8(piVar1,&i_val);
    OffsetRect(&i_val,-1,-1);
    TBrush_SetColor((int *)piVar1[5],0x80000010);
  }
  FUN_004190b8(piVar1,&i_val);
  TGroupBox_GetCaption((int)param_1,&local_1c);
  if (local_1c != 0) {
    cVar2 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    if (cVar2 == '\0') {
      Classes_Rect(8,0,0,&i_val.left,local_8);
      uVar6 = extraout_ECX_00;
    }
    else {
      pLVar7 = local_2c;
      format_val = local_8;
      TGroupBox_GetCaption((int)param_1,(int *)&local_30);
      LVar3 = FUN_00419338((int *)param_1[0x7c],local_30);
      Classes_Rect((i_val.right - LVar3) + -8,0,0,pLVar7,format_val);
      pLVar7 = local_2c;
      pRVar8 = &i_val;
      for (j = 4; j != 0; j = j + -1) {
        pRVar8->left = *pLVar7;
        pLVar7 = pLVar7 + (uint)bVar9 * -2 + 1;
        pRVar8 = (RECT *)((int)pRVar8 + ((uint)bVar9 * -2 + 1) * 4);
      }
      uVar6 = 0;
    }
    format_val = FUN_00430668(param_1,0x20,uVar6);
    format = format_val | 0x400;
    pRVar8 = &i_val;
    TGroupBox_GetCaption((int)param_1,&local_34);
    j = System__LStrLen(local_34);
    TGroupBox_GetCaption((int)param_1,(int *)&local_38);
    pCVar4 = System__LStrToPChar(local_38);
    pHVar5 = (HDC)FUN_004194d8(piVar1);
    DrawTextA(pHVar5,pCVar4,j,pRVar8,format);
    TBrush_SetColor((int *)piVar1[5],param_1[0x18]);
    pRVar8 = &i_val;
    TGroupBox_GetCaption((int)param_1,&local_3c);
    j = System__LStrLen(local_3c);
    TGroupBox_GetCaption((int)param_1,(int *)&local_40);
    pCVar4 = System__LStrToPChar(local_40);
    pHVar5 = (HDC)FUN_004194d8(piVar1);
    DrawTextA(pHVar5,pCVar4,j,pRVar8,format_val);
  }
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_00425d57;
  puStack_54 = (undefined1 *)0x425d47;
  System__LStrArrayClr((int *)&local_40,5);
  puStack_54 = (undefined1 *)0x425d4f;
  System__LStrClr(&local_1c);
  return;
}


/* ==== 00425d6c TCustomGroupBox.CMDialogChar ==== */

void TCustomGroupBox_CMDialogChar(int *param_1,int param_2)

{
  char cVar1;
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
  puStack_1c = &LAB_00425dde;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TGroupBox_GetCaption((int)param_1,&local_8);
  cVar1 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      FUN_00434f30(param_1);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_00425dc8;
    }
  }
  TWinControl_CMDialogChar((int)param_1,param_2);
LAB_00425dc8:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00425de5;
  puStack_1c = (undefined1 *)0x425ddd;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00425dec TCustomGroupBox.CMTextChanged ==== */

void TCustomGroupBox_CMTextChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  FUN_0043134c(param_1);
  return;
}


/* ==== 00425e00 TCustomGroupBox.CMCtl3DChanged ==== */

void TCustomGroupBox_CMCtl3DChanged(int *param_1,undefined4 param_2)

{
  TWinControl_CMCtl3DChanged((int)param_1,param_2);
  (**(code **)(*param_1 + 0x74))();
  FUN_0043134c(param_1);
  return;
}


/* ==== 00425e1c TCustomGroupBox.WMSize ==== */

void TCustomGroupBox_WMSize(int *param_1,undefined4 param_2)

{
  TWinControl_WMSize(param_1,param_2);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00425e30 TCustomLabel.virtual_02c ==== */

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
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
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
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00425e9c TCustomLabel.virtual_088 ==== */

void TCustomLabel_virtual_088(int param_1,int *param_2)

{
  TGroupBox_GetCaption(param_1,param_2);
  return;
}


/* ==== 00425eb0 TCustomLabel.dynamic_ffcc ==== */

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
  puStack_1c = &LAB_00426006;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x88))(param_1,&local_8);
  uVar4 = extraout_ECX;
  if (((param_3 & 0x400) != 0) &&
     ((local_8 == (char *)0x0 ||
      ((((char)param_1[0x4c] != '\0' && (*local_8 == '&')) && (local_8[1] == '\0')))))) {
    System__LStrCat((int *)&local_8,(undefined4 *)&DAT_0042601c);
    uVar4 = extraout_ECX_00;
  }
  if ((char)param_1[0x4c] == '\0') {
    param_3 = param_3 | 0x800;
  }
  format = FUN_00430668(param_1,param_3,uVar4);
  TCanvas_SetFont(param_1[0x48]);
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    OffsetRect(lprc_val,1,1);
    TFont_SetColor(*(int **)(param_1[0x48] + 0xc),-0x7fffffec,extraout_ECX_01);
    lprc = lprc_val;
    format_00 = format;
    text = System__LStrLen((int)local_8);
    pCVar2 = System__LStrToPChar(local_8);
    pHVar3 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar3,pCVar2,text,lprc,format_00);
    OffsetRect(lprc_val,-1,-1);
    TFont_SetColor(*(int **)(param_1[0x48] + 0xc),-0x7ffffff0,extraout_ECX_02);
    text = System__LStrLen((int)local_8);
    pCVar2 = System__LStrToPChar(local_8);
    pHVar3 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar3,pCVar2,text,lprc_val,format);
  }
  else {
    text = System__LStrLen((int)local_8);
    pCVar2 = System__LStrToPChar(local_8);
    pHVar3 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar3,pCVar2,text,lprc_val,format);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042600d;
  puStack_1c = (undefined1 *)0x426005;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00426020 TCustomLabel.virtual_084 ==== */

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
    FUN_0041907c(piVar1,&local_1c);
  }
  TBrush_SetStyle((int *)piVar1[5],'\x01');
  (**(code **)(*param_1 + 0x40))(param_1,&tStack_3c);
  uVar2 = (uint)(ushort)(*(ushort *)(&DAT_004aa640 + (uint)*(byte *)((int)param_1 + 0x12f) * 2) |
                         0x40 | *(ushort *)(&DAT_004aa638 + (uint)*(byte *)(param_1 + 0x4b) * 2));
  if (*(char *)((int)param_1 + 0x12e) != '\0') {
    rect = &tStack_3c;
    puVar3 = auStack_2c;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *puVar3 = rect->left;
      rect = (tagRECT *)((int)rect + ((uint)bVar4 * -2 + 1) * 4);
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    System__CallDynaInst(param_1,auStack_2c,uVar2 | 0x400);
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
  System__CallDynaInst(param_1,&tStack_3c,uVar2);
  return;
}


/* ==== 00426124 TCustomLabel.virtual_00c ==== */

void TCustomLabel_virtual_00c(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TControl_virtual_00c(param_1);
  System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 0042613c TCustomLabel.dynamic_ffcd ==== */

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
    FUN_00419558((int *)param_1[0x48],(int)hDC);
    System__CallDynaInst
              (param_1,local_1c,
               (uint)(*(ushort *)(&DAT_004aa644 + (uint)*(byte *)((int)param_1 + 0x12f) * 2) | 0x440
                     ));
    FUN_00419558((int *)param_1[0x48],0);
    ReleaseDC((HWND)0x0,hDC);
    iVar2 = param_1[0xc];
    acStack_20[0] = (char)param_1[0x4b];
    cVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      FUN_0042b880(acStack_20);
    }
    if (acStack_20[0] == '\x01') {
      iVar2 = iVar2 + (param_1[0xe] - iStack_14);
    }
    (**(code **)(*param_1 + 0x7c))(param_1,iVar2,param_1[0xd],uStack_10,iStack_14);
  }
  return;
}


/* ==== 00426208 TLabel.SetAlignment ==== */

void TLabel_SetAlignment(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4b]) {
    *(char *)(param_1 + 0x4b) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0042621c TCustomLabel.virtual_08c ==== */

void TCustomLabel_virtual_08c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12d)) {
    *(char *)((int)param_1 + 0x12d) = (char)param_2;
    System__CallDynaInst(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00426238 TLabel.GetTransparent ==== */

uint TLabel_GetTransparent(int param_1)

{
  return CONCAT31((int3)((uint)param_1 >> 8),(*(byte *)(param_1 + 0x40) & 0x40) != 0) ^ 1;
}


/* ==== 00426244 TLabel.SetFocusControl ==== */

void TLabel_SetFocusControl(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x128) = param_2;
  if (param_2 != 0) {
    FUN_0041564c(param_2,param_1,param_3);
  }
  return;
}


/* ==== 00426258 TLabel.SetShowAccelChar ==== */

void TLabel_SetShowAccelChar(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4c]) {
    *(char *)(param_1 + 0x4c) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0042626c TLabel.SetTransparent ==== */

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


/* ==== 004262ac TLabel.SetLayout ==== */

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


/* ==== 004262c0 TLabel.SetWordWrap ==== */

void TLabel_SetWordWrap(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12f)) {
    *(char *)((int)param_1 + 0x12f) = (char)param_2;
    System__CallDynaInst(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 004262e8 TCustomLabel.virtual_010 ==== */

void TCustomLabel_virtual_010(int *param_1,int param_2,char param_3)

{
  TControl_virtual_010(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x4a])) {
    param_1[0x4a] = 0;
  }
  return;
}


/* ==== 00426318 TCustomLabel.CMTextChanged ==== */

void TCustomLabel_CMTextChanged(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + 0x74))();
  System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 00426330 TCustomLabel.CMFontChanged ==== */

void TCustomLabel_CMFontChanged(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TControl_CMFontChanged(param_1);
  System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 0042634c TCustomLabel.CMDialogChar ==== */

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
  puStack_1c = &LAB_004263d9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_1[0x4a] != 0) {
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    if ((cVar2 != '\0') && ((char)param_1[0x4c] != '\0')) {
      TGroupBox_GetCaption((int)param_1,&local_8);
      cVar2 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
      if (cVar2 != '\0') {
        piVar1 = (int *)param_1[0x4a];
        cVar2 = System__CallDynaInst(piVar1,extraout_EDX,extraout_ECX);
        if (cVar2 != '\0') {
          (**(code **)(*piVar1 + 0xb0))();
          *(undefined4 *)(param_2 + 0xc) = 1;
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004263e0;
  puStack_1c = (undefined1 *)0x4263d8;
  System__LStrClr(&local_8);
  return;
}


/* ==== 004263e8 TCustomEdit.virtual_02c ==== */

int * TCustomEdit_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  if (*PTR_DAT_004ab7d4 == '\0') {
    param_1[0x10] = 0x2b8;
  }
  else {
    param_1[0x10] = 0x2a8;
  }
  TControl_SetWidth(param_1,0x79);
  TControl_SetHeight(param_1,0x19);
  TGroupBox_SetTabStop((int)param_1,'\x01');
  TGroupBox_SetParentColor((int)param_1,'\0');
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)((int)param_1 + 0x1f7) = 1;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  *(undefined1 *)((int)param_1 + 0x1f9) = 1;
  FUN_00426af8(param_1);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00426490 TCustomEdit.virtual_0b4 ==== */

void TCustomEdit_virtual_0b4(int *param_1,WPARAM param)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0xc5;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,param,lParam);
  return;
}


/* ==== 004264b0 TEdit.SetAutoSize ==== */

void TEdit_SetAutoSize(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x1f7)) {
    *(char *)((int)param_1 + 0x1f7) = param_2;
    FUN_00426abc(param_1);
  }
  return;
}


/* ==== 004264c4 TEdit.SetBorderStyle ==== */

void TEdit_SetBorderStyle(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x7d]) {
    *(char *)(param_1 + 0x7d) = param_2;
    FUN_00426abc(param_1);
    FUN_00431e04((int)param_1);
  }
  return;
}


/* ==== 004264e8 TEdit.SetCharCase ==== */

void TEdit_SetCharCase(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1fb)) {
    *(char *)(param_1 + 0x1fb) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 004264fc TEdit.SetHideSelection ==== */

void TEdit_SetHideSelection(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f9)) {
    *(char *)(param_1 + 0x1f9) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00426510 TEdit.SetMaxLength ==== */

void TEdit_SetMaxLength(int *param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != param_1[0x7c]) {
    param_1[0x7c] = param_2;
    bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
    if (bVar1) {
      (**(code **)(*param_1 + 0xb4))(param_1,param_2);
    }
  }
  return;
}


/* ==== 00426540 TEdit.SetOEMConvert ==== */

void TEdit_SetOEMConvert(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1fa)) {
    *(char *)(param_1 + 0x1fa) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00426554 FUN_00426554 ==== */

undefined1 FUN_00426554(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined1 uVar3;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar3 = *(undefined1 *)((int)param_1 + 0x1fd);
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if (bVar1) {
    lParam = 0;
    wParam = 0;
    Msg = 0xb8;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    LVar2 = SendMessageA(hWnd,Msg,wParam,lParam);
    uVar3 = LVar2 != 0;
  }
  return uVar3;
}


/* ==== 0042658c FUN_0042658c ==== */

void FUN_0042658c(int *param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if (bVar1) {
    lParam = 0;
    wParam = (uint)param_2;
    Msg = 0xb9;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    SendMessageA(hWnd,Msg,wParam,lParam);
    return;
  }
  *(byte *)((int)param_1 + 0x1fd) = param_2;
  return;
}


/* ==== 004265c4 TEdit.SetPasswordChar ==== */

void TEdit_SetPasswordChar(int *param_1,char param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_14 = &LAB_00426641;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (param_2 != *(char *)((int)param_1 + 0x1f5)) {
    *(char *)((int)param_1 + 0x1f5) = param_2;
    bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
    if (bVar1) {
      lParam = 0;
      wParam = (uint)*(byte *)((int)param_1 + 0x1f5);
      Msg = 0xcc;
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
      TGroupBox_GetCaption((int)param_1,(int *)&local_8);
      puVar2 = System__LStrToPChar(local_8);
      FUN_0042e710((int)param_1,puVar2);
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00426648;
  puStack_14 = (undefined1 *)0x426640;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0042664c TEdit.SetReadOnly ==== */

void TEdit_SetReadOnly(int *param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(byte *)((int)param_1 + 0x1f6)) {
    *(byte *)((int)param_1 + 0x1f6) = param_2;
    bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
    if (bVar1) {
      lParam = 0;
      wParam = (uint)param_2;
      Msg = 0xcf;
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
  }
  return;
}


/* ==== 00426688 TCustomEdit.virtual_0bc ==== */

undefined4 TCustomEdit_virtual_0bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  UINT Msg;
  undefined4 *wParam;
  LPARAM lParam;
  undefined4 local_8;
  
  wParam = &local_8;
  lParam = 0;
  Msg = 0xb0;
  local_8 = param_3;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)wParam,lParam);
  return local_8;
}


/* ==== 004266ac TCustomEdit.virtual_0c8 ==== */

void TCustomEdit_virtual_0c8(int *param_1,WPARAM param)

{
  HWND hWnd;
  UINT Msg;
  WPARAM lParam;
  
  Msg = 0xb1;
  lParam = param;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,param,lParam);
  return;
}


/* ==== 004266cc TCustomEdit.virtual_0b8 ==== */

int TCustomEdit_virtual_0b8(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  int *wParam;
  int *lParam;
  int local_c;
  int local_8;
  
  wParam = &local_c;
  lParam = &local_8;
  Msg = 0xb0;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
  return local_8 - local_c;
}


/* ==== 004266fc TCustomEdit.virtual_0c4 ==== */

void TCustomEdit_virtual_0c4(int *param_1,int param_2)

{
  HWND pHVar1;
  int lParam;
  UINT UVar2;
  WPARAM *wParam;
  WPARAM wParam_00;
  int *lParam_00;
  LPARAM lParam_01;
  WPARAM param;
  int local_c;
  
  wParam = &param;
  lParam_00 = &local_c;
  UVar2 = 0xb0;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(pHVar1,UVar2,(WPARAM)wParam,(LPARAM)lParam_00);
  lParam = param_2 + param;
  UVar2 = 0xb1;
  local_c = lParam;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(pHVar1,UVar2,param,lParam);
  lParam_01 = 0;
  wParam_00 = 0;
  UVar2 = 0xb7;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(pHVar1,UVar2,wParam_00,lParam_01);
  return;
}


/* ==== 00426760 TCustomEdit.virtual_0cc ==== */

void TCustomEdit_virtual_0cc(int *param_1)

{
  HWND hWnd;
  LPCSTR lpString;
  
  lpString = "";
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SetWindowTextA(hWnd,lpString);
  return;
}


/* ==== 0042677c FUN_0042677c ==== */

void FUN_0042677c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = -1;
  wParam = 0;
  Msg = 0xb1;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 00426798 TCustomEdit.virtual_0d0 ==== */

void TCustomEdit_virtual_0d0(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_c;
  
  puStack_20 = (undefined1 *)0x4267b2;
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  puStack_20 = (undefined1 *)0x4267be;
  local_c = (**(code **)(*param_1 + 0xb8))();
  puStack_20 = (undefined1 *)0x4267c8;
  iVar2 = FUN_0042e6a8((int)param_1);
  puStack_20 = (undefined1 *)0x4267ce;
  piVar3 = FUN_00408d20(iVar2 + 1);
  puStack_24 = &LAB_00426822;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar2 = FUN_00408d34((int)piVar3);
  FUN_0042e6b8((int)param_1,piVar3,iVar2);
  if (param_3 <= local_c) {
    local_c = param_3 + -1;
  }
  FUN_00408bb4(param_2,(char *)((int)piVar3 + iVar1),local_c);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00426829;
  puStack_24 = (undefined1 *)0x426821;
  FUN_00408d6c((int)piVar3);
  return;
}


/* ==== 00426834 TCustomEdit.virtual_0c0 ==== */

void TCustomEdit_virtual_0c0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x42684b;
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  puStack_1c = (undefined1 *)0x426858;
  uVar2 = (**(code **)(*param_1 + 0xb8))();
  puStack_1c = (undefined1 *)0x426865;
  System__LStrFromPCharLen(param_2,(undefined4 *)0x0,uVar2);
  if (uVar2 != 0) {
    puStack_1c = (undefined1 *)0x426870;
    iVar3 = FUN_0042e6a8((int)param_1);
    puStack_1c = (undefined1 *)0x426876;
    piVar4 = FUN_00408d20(iVar3 + 1);
    puStack_20 = &LAB_004268c2;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    iVar3 = FUN_00408d34((int)piVar4);
    FUN_0042e6b8((int)param_1,piVar4,iVar3);
    System_Move((undefined4 *)((int)piVar4 + iVar1),(undefined4 *)*param_2,uVar2);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4268c9;
    puStack_20 = (undefined1 *)0x4268c1;
    FUN_00408d6c((int)piVar4);
    return;
  }
  return;
}


/* ==== 004268d0 TCustomEdit.virtual_090 ==== */

void TCustomEdit_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"EDIT");
  param_2[1] = param_2[1] | 0xc0U | *(uint *)(&DAT_004aa630 + (uint)*(byte *)(param_1 + 0x7d) * 4) |
               *(uint *)(&DAT_004aa648 + (uint)(*(char *)((int)param_1 + 0x1f5) != '\0') * 4) |
               *(uint *)(&DAT_004aa650 + (uint)*(byte *)((int)param_1 + 0x1f6) * 4) |
               *(uint *)(&DAT_004aa658 + (uint)*(byte *)((int)param_1 + 0x1fb) * 4) |
               *(uint *)(&DAT_004aa664 + (uint)*(byte *)((int)param_1 + 0x1f9) * 4) |
               *(uint *)(&DAT_004aa66c + (uint)*(byte *)((int)param_1 + 0x1fa) * 4);
  if (((*PTR_DAT_004ab7d4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x7d] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  return;
}


/* ==== 0042698c TCustomEdit.virtual_094 ==== */

void TCustomEdit_virtual_094(int param_1,undefined4 *param_2)

{
  int i_val;
  uint *puVar1;
  uint auStack_98 [35];
  
  if (((PTR_DAT_004aba14[8] == '\0') || (*(int *)PTR_DAT_004aba10 == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    TWinControl_virtual_094(param_1,param_2);
  }
  else {
    puVar1 = auStack_98;
    for (i_val = 0x23; i_val != 0; i_val = i_val + -1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
    auStack_98[1] = auStack_98[1] & 0xfffff7ff;
    TWinControl_virtual_094(param_1,auStack_98);
    if (*(HWND *)(param_1 + 0x14c) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x14c),0xcf,1,0);
    }
  }
  return;
}


/* ==== 004269fc TCustomEdit.virtual_098 ==== */

void TCustomEdit_virtual_098(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x7f) = 1;
  puStack_10 = &LAB_00426a3b;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  TWinControl_virtual_098(param_1);
  *in_FS_OFFSET = uStack_14;
  *(undefined1 *)(local_8 + 0x7f) = 0;
  return;
}


/* ==== 00426aa0 TCustomEdit.virtual_0a0 ==== */

void TCustomEdit_virtual_0a0(int *param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00426554(param_1);
  *(undefined1 *)((int)param_1 + 0x1fd) = uVar1;
  TWinControl_virtual_0a0(param_1);
  return;
}


/* ==== 00426abc FUN_00426abc ==== */

void FUN_00426abc(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x1f7) != '\0') && ((char)param_1[0x7d] == '\x01')) {
    param_1[0x10] = param_1[0x10] | 0x200;
    FUN_00426af8(param_1);
    return;
  }
  param_1[0x10] = param_1[0x10] & 0xfffffdff;
  return;
}


/* ==== 00426af8 FUN_00426af8 ==== */

void FUN_00426af8(int *param_1)

{
  HDC hdc;
  HGDIOBJ h_val;
  int iVar1;
  int iVar2;
  LONG LVar3;
  tagTEXTMETRICA textmetric;
  tagTEXTMETRICA textmetric_2;
  
  hdc = GetDC((HWND)0x0);
  GetTextMetricsA(hdc,&textmetric);
  h_val = (HGDIOBJ)FUN_00418228(param_1[0x16]);
  h_val = SelectObject(hdc,h_val);
  GetTextMetricsA(hdc,&textmetric_2);
  SelectObject(hdc,h_val);
  ReleaseDC((HWND)0x0,hdc);
  if (*PTR_DAT_004ab7d4 == '\0') {
    LVar3 = textmetric.tmHeight;
    if (textmetric_2.tmHeight < textmetric.tmHeight) {
      LVar3 = textmetric_2.tmHeight;
    }
    iVar1 = GetSystemMetrics(6);
    if (LVar3 < 0) {
      LVar3 = LVar3 + 3;
    }
    iVar1 = iVar1 * 4 + (LVar3 >> 2);
  }
  else {
    if ((char)param_1[0x4e] == '\0') {
      iVar2 = 6;
    }
    else {
      iVar2 = 8;
    }
    iVar1 = GetSystemMetrics(6);
    iVar1 = iVar1 * iVar2;
  }
  TControl_SetHeight(param_1,textmetric_2.tmHeight + iVar1);
  return;
}


/* ==== 00426ba0 TCustomEdit.dynamic_ffb6 ==== */

void TCustomEdit_dynamic_ffb6(int param_1)

{
  FUN_0042e3a0(param_1);
  if (*(short *)(param_1 + 0x202) != 0) {
    (**(code **)(param_1 + 0x200))(*(undefined4 *)(param_1 + 0x204),param_1);
  }
  return;
}


/* ==== 00426bc4 TCustomEdit.DefaultHandler ==== */

void TCustomEdit_DefaultHandler(int param_1,UINT *param_2)

{
  BOOL BVar1;
  
  if ((*param_2 == 7) && (*(int *)PTR_DAT_004aba10 == 1)) {
    BVar1 = IsWindow((HWND)param_2[1]);
    if (BVar1 == 0) {
      param_2[1] = 0;
    }
  }
  TWinControl_DefaultHandler(param_1,param_2);
  return;
}


/* ==== 00426bfc TCustomEdit.WMSetFont ==== */

void TCustomEdit_WMSetFont(int *param_1)

{
  HWND pHVar1;
  uint window_long;
  UINT Msg;
  WPARAM wParam;
  int nIndex;
  LPARAM lParam;
  
  (**(code **)(*param_1 + -0x10))();
  if (*PTR_DAT_004ab7d4 != '\0') {
    nIndex = -0x10;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    window_long = GetWindowLongA(pHVar1,nIndex);
    if ((window_long & 4) == 0) {
      lParam = 0;
      wParam = 3;
      Msg = 0xd3;
      pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(pHVar1,Msg,wParam,lParam);
    }
  }
  return;
}


/* ==== 00426c3c TCustomEdit.CMCtl3DChanged ==== */

void TCustomEdit_CMCtl3DChanged(int *param_1,undefined4 param_2)

{
  if ((*PTR_DAT_004ab7d4 != '\0') && ((char)param_1[0x7d] == '\x01')) {
    FUN_00426abc(param_1);
    FUN_00431e04((int)param_1);
  }
  TWinControl_CMCtl3DChanged((int)param_1,param_2);
  return;
}


/* ==== 00426c70 TCustomEdit.CMFontChanged ==== */

void TCustomEdit_CMFontChanged(int *param_1)

{
  TWinControl_CMFontChanged(param_1);
  if (((*(byte *)((int)param_1 + 0x41) & 2) != 0) &&
     (((*(byte *)(param_1 + 8) & 0x10) == 0 || ((*(byte *)(param_1 + 8) & 1) == 0)))) {
    FUN_00426af8(param_1);
  }
  return;
}


/* ==== 00426c98 TCustomEdit.CNCommand ==== */

void TCustomEdit_CNCommand(int *param_1,int param_2,undefined4 param_3)

{
  if ((*(short *)(param_2 + 6) == 0x300) && ((char)param_1[0x7f] == '\0')) {
    System__CallDynaInst(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00426cb8 TCustomEdit.CMEnter ==== */

void TCustomEdit_CMEnter(int *param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  uint window_long;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int nIndex;
  
  if (((char)param_1[0x7e] != '\0') && ((*(byte *)(param_1 + 0x11) & 1) == 0)) {
    nIndex = -0x10;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    window_long = GetWindowLongA(hWnd,nIndex);
    param_3 = extraout_ECX;
    if ((window_long & 4) == 0) {
      FUN_0042677c(param_1);
      param_3 = extraout_ECX_00;
    }
  }
  TWinControl_CMEnter(param_1,param_2,param_3);
  return;
}


/* ==== 00426cf4 TCustomEdit.CMTextChanged ==== */

void TCustomEdit_CMTextChanged(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  uint window_long;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  int nIndex;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if (bVar1) {
    nIndex = -0x10;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    window_long = GetWindowLongA(hWnd,nIndex);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
    if ((window_long & 4) == 0) {
      return;
    }
  }
  System__CallDynaInst(param_1,uVar3,uVar2);
  return;
}


/* ==== 00426d2c TMemoStrings.virtual_014 ==== */

LRESULT TMemoStrings_virtual_014(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  LPARAM lParam;
  
  LVar4 = 0;
  bVar1 = Controls_TWinControl_HandleAllocated(*(int *)(param_1 + 0xc));
  if (bVar1) {
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0xba;
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    LVar4 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    lParam = 0;
    LVar7 = 0;
    WVar6 = LVar4 - 1;
    UVar5 = 0xbb;
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    WVar6 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    UVar5 = 0xc1;
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar2,UVar5,WVar6,lParam);
    if (LVar3 == 0) {
      LVar4 = LVar4 + -1;
    }
  }
  return LVar4;
}


/* ==== 00426d90 TMemoStrings.virtual_00c ==== */

void TMemoStrings_virtual_00c(int param_1,WPARAM param,int *param_3)

{
  HWND hWnd;
  uint send_message;
  UINT Msg;
  undefined2 *lParam;
  undefined2 local_100c;
  undefined2 uStack_100a;
  
  lParam = &local_100c;
  _local_100c = CONCAT22((short)((uint)param_1 >> 0x10),0x1000);
  Msg = 0xc4;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  send_message = SendMessageA(hWnd,Msg,param,(LPARAM)lParam);
  System__LStrFromPCharLen(param_3,(undefined4 *)&local_100c,send_message);
  return;
}


/* ==== 00426dd4 TMemoStrings.virtual_020 ==== */

void TMemoStrings_virtual_020(int param_1,WPARAM param,undefined *param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  int lParam;
  undefined *lParam_00;
  UINT UVar4;
  WPARAM wParam;
  LPARAM LVar5;
  
  LVar5 = 0;
  UVar4 = 0xbb;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  WVar2 = SendMessageA(pHVar1,UVar4,param,LVar5);
  if (-1 < (int)WVar2) {
    LVar5 = 0;
    UVar4 = 0xc1;
    wParam = WVar2;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar1,UVar4,wParam,LVar5);
    lParam = LVar3 + WVar2;
    UVar4 = 0xb1;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar4,WVar2,lParam);
    lParam_00 = System__LStrToPChar(param_3);
    WVar2 = 0;
    UVar4 = 0xc2;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar4,WVar2,(LPARAM)lParam_00);
  }
  return;
}


/* ==== 00426e48 TMemoStrings.virtual_054 ==== */

void TMemoStrings_virtual_054(int param_1,WPARAM param_2,undefined4 *param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  undefined *lParam;
  undefined4 *in_FS_OFFSET;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_c;
  undefined4 *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_20 = &LAB_00426f33;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  if ((int)param_2 < 0) goto LAB_00426f1d;
  LVar6 = 0;
  UVar4 = 0xbb;
  WVar2 = param_2;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  WVar2 = SendMessageA(pHVar1,UVar4,WVar2,LVar6);
  if ((int)WVar2 < 0) {
    LVar6 = 0;
    WVar2 = param_2 - 1;
    UVar4 = 0xbb;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    WVar2 = SendMessageA(pHVar1,UVar4,WVar2,LVar6);
    if ((int)WVar2 < 0) goto LAB_00426f1d;
    LVar6 = 0;
    UVar4 = 0xc1;
    WVar5 = WVar2;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (LVar3 == 0) goto LAB_00426f1d;
    WVar2 = WVar2 + LVar3;
    System__LStrCat3((int *)&local_c,(undefined4 *)&DAT_00426f4c,local_8);
  }
  else {
    System__LStrCat3((int *)&local_c,local_8,(undefined4 *)&DAT_00426f4c);
  }
  UVar4 = 0xb1;
  WVar5 = WVar2;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(pHVar1,UVar4,WVar2,WVar5);
  lParam = System__LStrToPChar(local_c);
  WVar2 = 0;
  UVar4 = 0xc2;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(pHVar1,UVar4,WVar2,(LPARAM)lParam);
LAB_00426f1d:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00426f3a;
  puStack_20 = (undefined1 *)0x426f32;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 00426f54 TMemoStrings.virtual_044 ==== */

void TMemoStrings_virtual_044(int param_1,WPARAM param_2)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  WPARAM WVar4;
  UINT UVar5;
  LPARAM LVar6;
  undefined *lParam;
  
  LVar6 = 0;
  UVar5 = 0xbb;
  WVar2 = param_2;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  WVar2 = SendMessageA(pHVar1,UVar5,WVar2,LVar6);
  if (-1 < (int)WVar2) {
    LVar6 = 0;
    WVar4 = param_2 + 1;
    UVar5 = 0xbb;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar1,UVar5,WVar4,LVar6);
    if (LVar3 < 0) {
      LVar6 = 0;
      UVar5 = 0xc1;
      WVar4 = WVar2;
      pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
      LVar3 = SendMessageA(pHVar1,UVar5,WVar4,LVar6);
      LVar3 = LVar3 + WVar2;
    }
    UVar5 = 0xb1;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar5,WVar2,LVar3);
    WVar2 = 0;
    UVar5 = 0xc2;
    lParam = PTR_DAT_004aa674;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar5,WVar2,(LPARAM)lParam);
  }
  return;
}


/* ==== 00426fe4 TMemoStrings.virtual_040 ==== */

void TMemoStrings_virtual_040(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xcc))();
  return;
}


/* ==== 00426ff4 TMemoStrings.virtual_030 ==== */

void TMemoStrings_virtual_030(int param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  bVar1 = Controls_TWinControl_HandleAllocated(*(int *)(param_1 + 0xc));
  if (bVar1) {
    lParam = 0;
    wParam = (param_2 ^ 1) & 0x7f;
    Msg = 0xb;
    hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
    SendMessageA(hWnd,Msg,wParam,lParam);
    if (param_2 != 1) {
      Controls_TControl_Perform(*(int *)(param_1 + 0xc),0xb019,0,0);
      FUN_0042ec58(*(int **)(param_1 + 0xc));
    }
  }
  return;
}


/* ==== 00427044 TMemoStrings.virtual_01c ==== */

void TMemoStrings_virtual_01c(int param_1,int *param_2)

{
  TGroupBox_GetCaption(*(int *)(param_1 + 0xc),param_2);
  return;
}


/* ==== 00427058 TMemoStrings.virtual_02c ==== */

void TMemoStrings_virtual_02c(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  LRESULT LVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  uint *local_c;
  uint *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_20 = &LAB_0042711f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0040847c(param_2,(int *)&local_8);
  iVar1 = System__LStrLen((int)local_8);
  iVar2 = FUN_0042e6a8(*(int *)(param_1 + 0xc));
  uVar5 = iVar1 == iVar2;
  if ((bool)uVar5) {
    TGroupBox_GetCaption(*(int *)(param_1 + 0xc),(int *)&local_c);
    System__LStrCmp(local_8,local_c);
    if ((bool)uVar5) goto LAB_004270f9;
  }
  wParam = 0;
  Msg = 0xc;
  lParam = local_8;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar3 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar3 == 0) {
    System_LoadResString((undefined4 *)PTR_PTR_004ab914,(int *)&local_10);
    piVar4 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_10);
    System__RaiseExcept(piVar4);
  }
  Controls_TControl_Perform(*(int *)(param_1 + 0xc),0xb012,0,0);
LAB_004270f9:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00427126;
  puStack_20 = (undefined1 *)0x42710e;
  System__LStrClr((int *)&local_10);
  puStack_20 = (undefined1 *)0x427116;
  System__LStrClr((int *)&local_c);
  puStack_20 = (undefined1 *)0x42711e;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0042712c TCustomMemo.virtual_02c ==== */

int * TCustomMemo_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TCustomEdit_virtual_02c(param_1,'\0',param_3);
  TControl_SetWidth(param_1,0xb9);
  TControl_SetHeight(param_1,0x59);
  TEdit_SetAutoSize(param_1,'\0');
  *(undefined1 *)((int)param_1 + 0x20e) = 1;
  *(undefined1 *)((int)param_1 + 0x20f) = 1;
  iVar1 = System_TObject_Create((int *)&PTR_TPersistent_virtual_000_004258f0,'\x01',extraout_ECX_00)
  ;
  param_1[0x82] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 004271b0 TCustomMemo.Destroy ==== */

void TCustomMemo_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[0x82]);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004271e0 TCustomMemo.virtual_090 ==== */

void TCustomMemo_virtual_090(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TCustomEdit_virtual_090(param_1,param_2);
  uVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(&DAT_004aa678 + (uint)*(byte *)(param_1 + 0x83) * 4 + (uVar1 & 0x7f) * 0xc)
               | param_2[1] & ~*(uint *)(&DAT_004aa6a0 + (uint)*(byte *)((int)param_1 + 0x20e) * 4)
                 | 4 | *(uint *)(&DAT_004aa690 + (uint)*(byte *)((int)param_1 + 0x20d) * 4);
  return;
}


/* ==== 00427244 TCustomMemo.virtual_094 ==== */

void TCustomMemo_virtual_094(int param_1,LPARAM *param_2)

{
  HWND pHVar1;
  
  if (((PTR_DAT_004aba14[8] == '\0') || (*(int *)PTR_DAT_004aba10 == 2)) ||
     ((*(byte *)((int)param_2 + 5) & 8) == 0)) {
    pHVar1 = CreateWindowExA(param_2[2],(LPCSTR)(param_2 + 0x13),"",param_2[1],param_2[3],param_2[4]
                             ,param_2[5],param_2[6],(HWND)param_2[7],(HMENU)0x0,DAT_004ac4dc,
                             (LPVOID)param_2[8]);
    *(HWND *)(param_1 + 0x14c) = pHVar1;
  }
  else {
    pHVar1 = CreateWindowExA(param_2[2],(LPCSTR)(param_2 + 0x13),"",param_2[1] & 0xfffff7ff,
                             param_2[3],param_2[4],param_2[5],param_2[6],(HWND)param_2[7],(HMENU)0x0
                             ,DAT_004ac4dc,(LPVOID)param_2[8]);
    *(HWND *)(param_1 + 0x14c) = pHVar1;
    if (pHVar1 != (HWND)0x0) {
      SendMessageA(pHVar1,0xcf,1,0);
    }
  }
  SendMessageA(*(HWND *)(param_1 + 0x14c),0xc,0,*param_2);
  return;
}


/* ==== 00427318 TCustomMemo.virtual_0d4 ==== */

void TCustomMemo_virtual_0d4(int *param_1,uint *param_2)

{
  HWND pHVar1;
  uint param;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xb0;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  param = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  *param_2 = param >> 0x10;
  LVar5 = 0;
  param = *param_2;
  UVar3 = 0xc9;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  param = SendMessageA(pHVar1,UVar3,param,LVar5);
  param_2[1] = param;
  LVar5 = 0;
  WVar4 = 0xffffffff;
  UVar3 = 0xbb;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  *param_2 = *param_2 - LVar2;
  return;
}


/* ==== 00427374 TCustomMemo.dynamic_ffcf ==== */

undefined1 TCustomMemo_dynamic_ffcf(int param_1)

{
  return *(undefined1 *)(param_1 + 0x20c);
}


/* ==== 0042737c TCustomMemo.virtual_00c ==== */

void TCustomMemo_virtual_00c(int *param_1)

{
  TControl_virtual_00c(param_1);
  FUN_0042658c(param_1,0);
  return;
}


/* ==== 00427394 TMemo.SetAlignment ==== */

void TMemo_SetAlignment(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x20c)) {
    *(char *)(param_1 + 0x20c) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 004273a8 TMemo.SetLines ==== */

void TMemo_SetLines(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x208) + 8))();
  return;
}


/* ==== 004273b8 TMemo.SetScrollBars ==== */

void TMemo_SetScrollBars(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x20d)) {
    *(char *)(param_1 + 0x20d) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 004273cc TMemo.SetWordWrap ==== */

void TMemo_SetWordWrap(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x20e)) {
    *(char *)(param_1 + 0x20e) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 004273e0 TCustomMemo.WMGetDlgCode ==== */

void TCustomMemo_WMGetDlgCode(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((char)param_1[0x84] == '\0') {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffd;
  }
  else {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 2;
  }
  if (*(char *)((int)param_1 + 0x20f) == '\0') {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffb;
  }
  return;
}


/* ==== 00427414 TCustomMemo.WMNCDestroy ==== */

void TCustomMemo_WMNCDestroy(int *param_1)

{
  TWinControl_WMNCDestroy(param_1);
  return;
}


/* ==== 0042741c TCustomMemo.dynamic_ffbe ==== */

void TCustomMemo_dynamic_ffbe(int param_1,char *param_2)

{
  TWinControl_dynamic_ffbe(param_1,param_2);
  if ((*param_2 == '\r') && (*(char *)(param_1 + 0x20f) == '\0')) {
    *param_2 = '\0';
  }
  return;
}


/* ==== 00427440 TComboBoxStrings.virtual_014 ==== */

void TComboBoxStrings_virtual_014(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x146;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 0042745c TComboBoxStrings.virtual_00c ==== */

void TComboBoxStrings_virtual_00c(int param_1,WPARAM param,int *param_3)

{
  HWND hWnd;
  uint send_message;
  UINT Msg;
  int *lParam;
  int aiStack_100c [1024];
  
  lParam = aiStack_100c;
  Msg = 0x148;
  aiStack_100c[0] = param_1;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  send_message = SendMessageA(hWnd,Msg,param,(LPARAM)lParam);
  if (send_message == 0xffffffff) {
    send_message = 0;
  }
  System__LStrFromPCharLen(param_3,aiStack_100c,send_message);
  return;
}


/* ==== 004274a0 TComboBoxStrings.virtual_018 ==== */

void TComboBoxStrings_virtual_018(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_00427506;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = 0;
  Msg = 0x150;
  wParam = param_2;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == -1) {
    System_LoadResString((undefined4 *)PTR_PTR_004ab930,(int *)&local_8);
    FUN_004115b0(param_1,local_8,param_2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042750d;
  puStack_1c = (undefined1 *)0x427505;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00427518 TComboBoxStrings.virtual_024 ==== */

void TComboBoxStrings_virtual_024(int param_1,WPARAM param,LPARAM param_3)

{
  HWND hWnd;
  UINT Msg;
  
  Msg = 0x151;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,param,param_3);
  return;
}


/* ==== 0042753c TComboBoxStrings.virtual_034 ==== */

void TComboBoxStrings_virtual_034(int param_1,undefined *param_2)

{
  undefined *lParam;
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_004275af;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  lParam = System__LStrToPChar(param_2);
  wParam = 0;
  Msg = 0x143;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar1 < 0) {
    System_LoadResString((undefined4 *)PTR_PTR_004ab6f4,(int *)&local_8);
    piVar2 = SysUtils_Exception_Create((int *)&DAT_0040e9b0,'\x01',local_8);
    System__RaiseExcept(piVar2);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004275b6;
  puStack_18 = (undefined1 *)0x4275ae;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 004275c0 TComboBoxStrings.virtual_054 ==== */

void TComboBoxStrings_virtual_054(int param_1,WPARAM param,undefined *param_3)

{
  undefined *lParam;
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_00427633;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = System__LStrToPChar(param_3);
  Msg = 0x14a;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,param,(LPARAM)lParam);
  if (LVar1 < 0) {
    System_LoadResString((undefined4 *)PTR_PTR_004ab6f4,(int *)&local_8);
    piVar2 = SysUtils_Exception_Create((int *)&DAT_0040e9b0,'\x01',local_8);
    System__RaiseExcept(piVar2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042763a;
  puStack_1c = (undefined1 *)0x427632;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00427640 TComboBoxStrings.virtual_044 ==== */

void TComboBoxStrings_virtual_044(int param_1,WPARAM param)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x144;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,param,lParam);
  return;
}


/* ==== 00427660 TComboBoxStrings.virtual_040 ==== */

void TComboBoxStrings_virtual_040(int param_1)

{
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_14 = &LAB_004276c4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  TGroupBox_GetCaption(*(int *)(param_1 + 0xc),(int *)&local_8);
  lParam = 0;
  wParam = 0;
  Msg = 0x14b;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  TGroupBox_SetCaption(*(int *)(param_1 + 0xc),local_8);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x80))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004276cb;
  puStack_14 = (undefined1 *)0x4276c3;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 004276d0 TComboBoxStrings.virtual_030 ==== */

void TComboBoxStrings_virtual_030(int param_1,byte param_2)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  wParam = (param_2 ^ 1) & 0x7f;
  Msg = 0xb;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  if (param_2 != 1) {
    FUN_0042ec58(*(int **)(param_1 + 0xc));
  }
  return;
}


/* ==== 00427704 TComboBoxStrings.virtual_050 ==== */

void TComboBoxStrings_virtual_050(int param_1,undefined *param_2)

{
  undefined *lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  lParam = System__LStrToPChar(param_2);
  wParam = 0xffffffff;
  Msg = 0x158;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  return;
}


/* ==== 0042772c TCustomComboBox.virtual_02c ==== */

int * TCustomComboBox_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  if (*PTR_DAT_004ab7d4 == '\0') {
    param_1[0x10] = 0x42b2;
  }
  else {
    param_1[0x10] = 0x42a2;
  }
  TControl_SetWidth(param_1,0x91);
  TControl_SetHeight(param_1,0x19);
  TGroupBox_SetTabStop((int)param_1,'\x01');
  TGroupBox_SetParentColor((int)param_1,'\0');
  iVar1 = System_TObject_Create((int *)&PTR_TPersistent_virtual_000_004259e4,'\x01',extraout_ECX_00)
  ;
  param_1[0x7c] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  piVar2 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',extraout_ECX_01);
  param_1[0x7d] = (int)piVar2;
  param_1[0x7f] = 0x10;
  *(undefined1 *)((int)param_1 + 0x1fa) = 0;
  puVar3 = FUN_00444580();
  param_1[0x84] = (int)puVar3;
  puVar3 = FUN_00444580();
  param_1[0x85] = (int)puVar3;
  param_1[0x81] = 8;
  param_1[0x8a] = -1;
  if (cVar4 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00427828 TCustomComboBox.Destroy ==== */

void TCustomComboBox_Destroy(int *param_1,char param_2)

{
  bool bVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = System__BeforeDestruction(param_1,param_2);
  bVar1 = Controls_TWinControl_HandleAllocated((int)piVar2);
  if (bVar1) {
    (**(code **)(*piVar2 + 0x9c))();
  }
  FUN_00444618(piVar2[0x85]);
  FUN_00444618(piVar2[0x84]);
  System_TObject_Free((int *)piVar2[0x7d]);
  System_TObject_Free((int *)piVar2[0x7c]);
  System_TObject_Free((int *)piVar2[0x89]);
  TWinControl_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar2);
  }
  return;
}


/* ==== 0042789c FUN_0042789c ==== */

bool FUN_0042789c(int *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x157;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1 != 0;
}


/* ==== 004278c0 FUN_004278c0 ==== */

void FUN_004278c0(int *param_1,byte param_2)

{
  uint wParam;
  HWND pHVar1;
  UINT Msg;
  RECT *lpRect;
  LPARAM lParam;
  BOOL bErase;
  RECT RStack_18;
  
  lParam = 0;
  wParam = (uint)param_2;
  Msg = 0x14f;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  lpRect = &RStack_18;
  (**(code **)(*param_1 + 0x40))(param_1,&RStack_18);
  bErase = -1;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  InvalidateRect(pHVar1,lpRect,bErase);
  return;
}


/* ==== 00427908 FUN_00427908 ==== */

void FUN_00427908(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 00427924 FUN_00427924 ==== */

void FUN_00427924(int *param_1,WPARAM param)

{
  WPARAM WVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  WVar1 = FUN_00427908(param_1);
  if (param != WVar1) {
    lParam = 0;
    Msg = 0x14e;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    SendMessageA(hWnd,Msg,param,lParam);
  }
  return;
}


/* ==== 00427950 TComboBox.SetMaxLength ==== */

void TComboBox_SetMaxLength(int *param_1,WPARAM param)

{
  bool bVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if ((int)param < 0) {
    param = 0;
  }
  if (param != param_1[0x80]) {
    param_1[0x80] = param;
    bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
    if (bVar1) {
      lParam = 0;
      Msg = 0x141;
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(hWnd,Msg,param,lParam);
    }
  }
  return;
}


/* ==== 00427990 TComboBox.SetSorted ==== */

void TComboBox_SetSorted(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f9)) {
    *(char *)(param_1 + 0x1f9) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 004279a4 TCustomComboBox.virtual_0c4 ==== */

void TCustomComboBox_virtual_0c4(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1fa)) {
    *(char *)(param_1 + 0x1fa) = param_2;
    if (param_2 == '\x01') {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffdff;
    }
    else {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x200;
    }
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 004279e4 TComboBox.GetItemHeight ==== */

undefined4 TComboBox_GetItemHeight(int param_1)

{
  undefined4 uVar1;
  
  if ((byte)(*(char *)(param_1 + 0x1fa) - 3U) < 2) {
    return *(undefined4 *)(param_1 + 0x1fc);
  }
  uVar1 = Controls_TControl_Perform(param_1,0x154,0,0);
  return uVar1;
}


/* ==== 00427a08 TComboBox.SetItemHeight ==== */

void TComboBox_SetItemHeight(int param_1,int param_2)

{
  if (0 < param_2) {
    *(int *)(param_1 + 0x1fc) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00427a18 TComboBox.SetItems ==== */

void TComboBox_SetItems(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1f0) + 8))();
  return;
}


/* ==== 00427a28 TCustomComboBox.virtual_090 ==== */

void TCustomComboBox_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"COMBOBOX");
  param_2[1] = param_2[1] | 0x200240U |
               *(uint *)(&DAT_004aa6a8 + (uint)*(byte *)((int)param_1 + 0x1fa) * 4) |
               *(uint *)(&DAT_004aa6c8 + (uint)*(byte *)((int)param_1 + 0x1f9) * 4) |
               *(uint *)(&DAT_004aa6bc + (uint)*(byte *)(param_1 + 0x7e) * 4);
  return;
}


/* ==== 00427a8c TCustomComboBox.virtual_098 ==== */

void TCustomComboBox_virtual_098(int *param_1)

{
  HWND pHVar1;
  int iVar2;
  LONG LVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  TWinControl_virtual_098(param_1);
  LVar6 = 0;
  WVar5 = param_1[0x80];
  UVar4 = 0x141;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if (param_1[0x89] != 0) {
    (**(code **)(*(int *)param_1[0x7c] + 8))((int *)param_1[0x7c],param_1[0x89]);
    System_TObject_Free((int *)param_1[0x89]);
    param_1[0x89] = 0;
    if (param_1[0x8a] != -1) {
      iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
      if (iVar2 < param_1[0x8a]) {
        iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
        param_1[0x8a] = iVar2;
      }
      LVar6 = 0;
      WVar5 = param_1[0x8a];
      UVar4 = 0x14e;
      pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    }
  }
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  if (*(byte *)((int)param_1 + 0x1fa) < 2) {
    UVar4 = 5;
    pHVar1 = (HWND)(**(code **)(*param_1 + 0xbc))();
    pHVar1 = GetWindow(pHVar1,UVar4);
    if (pHVar1 != (HWND)0x0) {
      if (*(char *)((int)param_1 + 0x1fa) == '\x01') {
        param_1[0x83] = (int)pHVar1;
        LVar3 = GetWindowLongA(pHVar1,-4);
        param_1[0x87] = LVar3;
        SetWindowLongA((HWND)param_1[0x83],-4,param_1[0x85]);
        pHVar1 = GetWindow(pHVar1,2);
      }
      param_1[0x82] = (int)pHVar1;
      LVar3 = GetWindowLongA(pHVar1,-4);
      param_1[0x86] = LVar3;
      SetWindowLongA((HWND)param_1[0x82],-4,param_1[0x84]);
    }
  }
  if ((*PTR_DAT_004ab7d4 != '\0') && (param_1[0x82] != 0)) {
    SendMessageA((HWND)param_1[0x82],0xd3,3,0);
  }
  return;
}


/* ==== 00427bf0 TCustomComboBox.virtual_0a0 ==== */

void TCustomComboBox_virtual_0a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  
  iVar1 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
  if (0 < iVar1) {
    iVar1 = FUN_00427908(param_1);
    param_1[0x8a] = iVar1;
    piVar2 = (int *)System_TObject_Create
                              ((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
    param_1[0x89] = (int)piVar2;
    (**(code **)(*piVar2 + 8))(piVar2,param_1[0x7c]);
  }
  TWinControl_virtual_0a0(param_1);
  return;
}


/* ==== 00427c3c TCustomComboBox.WMCreate ==== */

void TCustomComboBox_WMCreate(int *param_1)

{
  HWND hWnd;
  LPCSTR lpString;
  
  (**(code **)(*param_1 + -0x10))();
  if (param_1[0x15] != 0) {
    lpString = (LPCSTR)param_1[0x15];
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetWindowTextA(hWnd,lpString);
  }
  return;
}


/* ==== 00427c60 TCustomComboBox.WMEraseBkgnd ==== */

void TCustomComboBox_WMEraseBkgnd(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT local_18;
  
  if (*(char *)((int)param_1 + 0x1fa) == '\x01') {
    hbr = (HBRUSH)FUN_00418a18(*(int *)(param_1[9] + 0x130));
    (**(code **)(*param_1 + 0x40))(param_1,&local_18);
    FillRect(*(HDC *)(param_2 + 4),&local_18,hbr);
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00427cb4 TCustomComboBox.WMDrawItem ==== */

void TCustomComboBox_WMDrawItem(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00427cbc TCustomComboBox.WMMeasureItem ==== */

void TCustomComboBox_WMMeasureItem(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00427cc4 TCustomComboBox.WMDeleteItem ==== */

void TCustomComboBox_WMDeleteItem(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00427ccc TCustomComboBox.WMGetDlgCode ==== */

void TCustomComboBox_WMGetDlgCode(int *param_1,int param_2)

{
  bool bVar1;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  bVar1 = FUN_0042789c(param_1);
  if (bVar1) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 4;
  }
  return;
}


/* ==== 00427cf0 TCustomComboBox.CMCancelMode ==== */

void TCustomComboBox_CMCancelMode(int param_1,int param_2)

{
  if (param_1 != *(int *)(param_2 + 8)) {
    Controls_TControl_Perform(param_1,0x14f,0,0);
  }
  return;
}


/* ==== 00427d04 TCustomComboBox.CMCtl3DChanged ==== */

void TCustomComboBox_CMCtl3DChanged(int param_1,undefined4 param_2)

{
  if (*PTR_DAT_004ab7d4 != '\0') {
    FUN_00431e04(param_1);
  }
  TWinControl_CMCtl3DChanged(param_1,param_2);
  return;
}


/* ==== 00427d28 TCustomComboBox.CMParentColorChanged ==== */

void TCustomComboBox_CMParentColorChanged(int *param_1,int param_2)

{
  TControl_CMParentColorChanged((int)param_1,param_2);
  if ((*PTR_DAT_004ab7d4 == '\0') && (*(byte *)((int)param_1 + 0x1fa) < 2)) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00427e6c TCustomComboBox.virtual_0bc ==== */

void TCustomComboBox_virtual_0bc(int *param_1)

{
  Controls_TWinControl_GetHandle(param_1);
  return;
}


/* ==== 00427e74 TCustomComboBox.virtual_0b4 ==== */

void TCustomComboBox_virtual_0b4(int *param_1,UINT *param_2,HWND param_3,WNDPROC prev_wnd_func)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  HWND hWndTo;
  UINT UVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  tagPOINT *lpPoints;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  tagPOINT point;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_24 = &LAB_0042812b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  UVar7 = *param_2;
  local_8 = param_1;
  if ((int)UVar7 < 0x105) {
    if (UVar7 != 0x104) {
      if ((int)UVar7 < 0x88) {
        if (UVar7 == 0x87) {
          puStack_20 = &stack0xfffffffc;
          bVar3 = FUN_0042789c(param_1);
          puVar1 = puStack_20;
          if (bVar3) {
            param_2[3] = 4;
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else if (UVar7 == 7) {
          puStack_20 = &stack0xfffffffc;
          piVar4 = Forms_GetParentForm(param_1);
          puVar1 = puStack_20;
          if ((piVar4 != (int *)0x0) &&
             (cVar2 = (**(code **)(*piVar4 + 0xd4))(piVar4,local_8), puVar1 = puStack_20,
             cVar2 == '\0')) {
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else if (UVar7 == 8) {
          puVar1 = &stack0xfffffffc;
          if ((*(byte *)(param_1 + 0x11) & 0x20) != 0) {
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else {
          puVar1 = &stack0xfffffffc;
          if ((UVar7 == 0x84) && (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 8) & 0x10) != 0))
          {
            param_2[3] = 0xffffffff;
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        goto LAB_004280ec;
      }
      if (UVar7 != 0x100) {
        if (UVar7 != 0x101) {
          puVar1 = &stack0xfffffffc;
          if (UVar7 == 0x102) {
            puStack_20 = &stack0xfffffffc;
            uVar5 = FUN_004337ec(param_1,(int)param_2,param_3);
            if ((char)uVar5 != '\0') {
              *in_FS_OFFSET = uStack_28;
              return;
            }
            if ((((short)param_2[1] == 0xd) || (puVar1 = puStack_20, (short)param_2[1] == 0x1b)) &&
               (bVar3 = FUN_0042789c(local_8), puVar1 = puStack_20, bVar3)) {
              FUN_004278c0(local_8,0);
              *in_FS_OFFSET = uStack_28;
              return;
            }
          }
          goto LAB_004280ec;
        }
        goto LAB_0042800f;
      }
    }
    puVar1 = &stack0xfffffffc;
    if ((param_3 != (HWND)param_1[0x83]) &&
       (puStack_20 = &stack0xfffffffc, cVar2 = FUN_00433654(param_1,(int)param_2),
       puVar1 = puStack_20, cVar2 != '\0')) {
      *in_FS_OFFSET = uStack_28;
      return;
    }
  }
  else {
    if (0xbd00 < (int)UVar7) {
      if (((UVar7 != 0xbd02) && (UVar7 != 0xbd04)) && (puVar1 = &stack0xfffffffc, UVar7 != 0xbd06))
      goto LAB_004280ec;
LAB_004280d8:
      (**(code **)(*param_1 + 0x6c))(param_1,param_2);
      *in_FS_OFFSET = uStack_28;
      return;
    }
    if (UVar7 == 0xbd00) goto LAB_004280d8;
    if (UVar7 != 0x105) {
      if (UVar7 == 0x200) {
        puStack_20 = &stack0xfffffffc;
        FUN_0044dcb8(*(int *)PTR_DAT_004ab8ac,param_1,(int)param_2);
        puVar1 = puStack_20;
      }
      else {
        puVar1 = &stack0xfffffffc;
        if ((UVar7 == 0x205) &&
           (puStack_20 = &stack0xfffffffc, uVar6 = FUN_0042588c((int)param_1), puVar1 = puStack_20,
           (char)uVar6 != '\0')) {
          point.x = (LONG)(short)param_2[2];
          point.y = (LONG)*(short *)((int)param_2 + 10);
          UVar7 = 1;
          lpPoints = &point;
          hWndTo = (HWND)Controls_TWinControl_GetHandle(local_8);
          MapWindowPoints(param_3,hWndTo,lpPoints,UVar7);
          *(undefined2 *)(param_2 + 2) = (undefined2)point.x;
          *(undefined2 *)((int)param_2 + 10) = (undefined2)point.y;
          (**(code **)(*local_8 + 0x6c))(local_8,param_2);
          *in_FS_OFFSET = uStack_28;
          return;
        }
      }
      goto LAB_004280ec;
    }
LAB_0042800f:
    puStack_20 = &stack0xfffffffc;
    cVar2 = FUN_00433724(param_1,(int)param_2);
    puVar1 = puStack_20;
    if (cVar2 != '\0') {
      *in_FS_OFFSET = uStack_28;
      return;
    }
  }
LAB_004280ec:
  puStack_20 = puVar1;
  UVar7 = CallWindowProcA(prev_wnd_func,param_3,*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar7;
  if ((*param_2 == 0x203) && ((*(byte *)(local_8 + 0x10) & 0x80) != 0)) {
    System__CallDynaInst(local_8,extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_28;
  return;
}


/* ==== 00428150 TCustomComboBox.virtual_06c ==== */

void TCustomComboBox_virtual_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  bool bVar1;
  COLORREF CVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) &&
     ((((*param_2 == 0x201 || (*param_2 == 0x203)) &&
       (bVar1 = FUN_0042ee88((int)param_1), param_3 = extraout_ECX, !bVar1)) &&
      (*(char *)((int)param_1 + 0x4d) == '\x01')))) {
    bVar1 = FUN_00432158(param_1,param_2);
    if (bVar1) {
      return;
    }
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 1;
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
    return;
  }
  uVar3 = *param_2;
  if (uVar3 == 5) {
    if ((char)param_1[0x8b] != '\0') {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
      return;
    }
  }
  else if (uVar3 == 0x102) {
    uVar3 = FUN_004337ec(param_1,(int)param_2,param_3);
    if ((char)uVar3 != '\0') {
      return;
    }
    if ((((short)param_2[1] == 0xd) || (param_3 = extraout_ECX_00, (short)param_2[1] == 0x1b)) &&
       (bVar1 = FUN_0042789c(param_1), param_3 = extraout_ECX_01, bVar1)) {
      FUN_004278c0(param_1,0);
      return;
    }
  }
  else {
    if (uVar3 - 0x132 < 7) {
      CVar2 = FUN_00417d54(*(uint *)(param_1[0x16] + 0x18));
      SetTextColor((HDC)param_2[1],CVar2);
      uVar3 = TBrush_GetColor(param_1[0x4c]);
      CVar2 = FUN_00417d54(uVar3);
      SetBkColor((HDC)param_2[1],CVar2);
      uVar3 = FUN_00418a18(param_1[0x4c]);
      param_2[3] = uVar3;
      return;
    }
    if (((uVar3 - 0xbd32 < 7) && (*PTR_DAT_004ab7d4 == '\0')) &&
       (*(byte *)((int)param_1 + 0x1fa) < 2)) {
      uVar3 = FUN_00418a18(*(int *)(param_1[9] + 0x130));
      param_2[3] = uVar3;
      return;
    }
  }
  TWinControl_virtual_06c(param_1,param_2,param_3);
  return;
}


/* ==== 0042829c FUN_0042829c ==== */

void FUN_0042829c(int *param_1)

{
  int cx_val;
  int cy_val;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int X;
  int Y;
  UINT uFlags;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4282b2;
  cx_val = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
  if (param_1[0x81] < cx_val) {
    cx_val = param_1[0x81];
  }
  if (cx_val < 1) {
    cx_val = 1;
  }
  *(undefined1 *)(param_1 + 0x8b) = 1;
  puStack_14 = &LAB_00428331;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uFlags = 0x9e;
  puStack_10 = &stack0xfffffffc;
  cy_val = TComboBox_GetItemHeight((int)param_1);
  cy_val = cy_val * cx_val + param_1[0xf] + 2;
  cx_val = param_1[0xe];
  Y = 0;
  X = 0;
  hWndInsertAfter = (HWND)0x0;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx_val,cy_val,uFlags);
  *in_FS_OFFSET = uStack_18;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  return;
}


/* ==== 00428358 TCustomComboBox.CNCommand ==== */

void TCustomComboBox_CNCommand(int *param_1,int param_2,undefined4 param_3)

{
  HWND pHVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_18 = &LAB_00428498;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  switch(*(undefined2 *)(param_2 + 6)) {
  case 1:
    puStack_14 = &stack0xfffffffc;
    uVar2 = FUN_00427908(param_1);
    (**(code **)(*(int *)param_1[0x7c] + 0xc))((int *)param_1[0x7c],uVar2,&local_8);
    TGroupBox_SetCaption((int)param_1,local_8);
    System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    System__CallDynaInst(param_1,extraout_EDX_00,extraout_ECX_00);
    break;
  case 2:
    puStack_14 = &stack0xfffffffc;
    System__CallDynaInst(param_1,param_2,param_3);
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x88) = 1;
    *(undefined1 *)((int)param_1 + 0x221) = 1;
    puStack_14 = &stack0xfffffffc;
    FUN_00432f90(param_1,param_2,param_3);
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined1 *)((int)param_1 + 0x221) = 1;
    puStack_14 = &stack0xfffffffc;
    FUN_0043307c(param_1,param_2,param_3);
    break;
  case 5:
    puStack_14 = &stack0xfffffffc;
    System__CallDynaInst(param_1,param_2,param_3);
    break;
  case 7:
    *(undefined1 *)((int)param_1 + 0x221) = 0;
    System__CallDynaInst(param_1,param_2,param_3);
    FUN_0042829c(param_1);
    if (*(char *)((int)param_1 + 0x221) != '\0') {
      LVar5 = 0;
      WVar4 = 0;
      UVar3 = 0x1f;
      pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
      PostMessageA(pHVar1,UVar3,WVar4,LVar5);
      if ((char)param_1[0x88] == '\0') {
        LVar5 = 0;
        WVar4 = 0;
        UVar3 = 0x14f;
        pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
        PostMessageA(pHVar1,UVar3,WVar4,LVar5);
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042849f;
  puStack_18 = (undefined1 *)0x428497;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 004284a4 TCustomComboBox.dynamic_ffb6 ==== */

void TCustomComboBox_dynamic_ffb6(int param_1)

{
  FUN_0042e3a0(param_1);
  if (*(short *)(param_1 + 0x232) != 0) {
    (**(code **)(param_1 + 0x230))(*(undefined4 *)(param_1 + 0x234),param_1);
  }
  return;
}


/* ==== 004284c8 TCustomComboBox.virtual_0b8 ==== */

void TCustomComboBox_virtual_0b8(int param_1,undefined4 param_2,LONG *param_3,undefined2 param_4)

{
  int i_val;
  RECT *pRVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffc8;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined *local_18;
  RECT rect;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  pRVar1 = &rect;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    pRVar1->left = *param_3;
    param_3 = param_3 + 1;
    pRVar1 = (RECT *)&pRVar1->top;
  }
  puStack_2c = &LAB_00428570;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  FUN_0042d4e0(*(int *)(param_1 + 500));
  if (*(short *)(param_1 + 0x242) == 0) {
    FUN_0041907c(*(int **)(param_1 + 500),&rect);
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0xc))(*(int **)(param_1 + 0x1f0),param_2,&local_18);
    FUN_00419268(*(int **)(param_1 + 500),rect.left + 2,rect.top,local_18);
  }
  else {
    in_stack_ffffffc8 = CONCAT22((short)((uint)&rect >> 0x10),param_4);
    (**(code **)(param_1 + 0x240))
              (*(undefined4 *)(param_1 + 0x244),param_1,param_2,in_stack_ffffffc8,&rect);
  }
  *in_FS_OFFSET = in_stack_ffffffc8;
  puStack_30 = &LAB_00428577;
  System__LStrClr((int *)&local_18);
  return;
}


/* ==== 00428580 TCustomComboBox.dynamic_ffb5 ==== */

void TCustomComboBox_dynamic_ffb5(int param_1)

{
  if (*(short *)(param_1 + 0x23a) != 0) {
    (**(code **)(param_1 + 0x238))(*(undefined4 *)(param_1 + 0x23c),param_1);
  }
  return;
}


/* ==== 004285a0 TCustomComboBox.virtual_0c0 ==== */

void TCustomComboBox_virtual_0c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x24a) != 0) {
    (**(code **)(param_1 + 0x248))(*(undefined4 *)(param_1 + 0x24c),param_1,param_2,param_3);
  }
  return;
}


/* ==== 004285c0 TCustomComboBox.CNDrawItem ==== */

void TCustomComboBox_CNDrawItem(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  ushort uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(ushort *)(iVar1 + 0x10);
  if ((*(uint *)(iVar1 + 0x10) & 0x1000) != 0) {
    uVar2 = uVar2 | 0x1000;
  }
  if ((*(uint *)(iVar1 + 0x10) & 0x20) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  FUN_00419558((int *)param_1[0x7d],*(int *)(iVar1 + 0x18));
  TCanvas_SetFont(param_1[0x7d]);
  TCanvas_SetBrush(param_1[0x7d]);
  if ((-1 < *(int *)(iVar1 + 8)) && ((uVar2 & 1) != 0)) {
    TBrush_SetColor(*(int **)(param_1[0x7d] + 0x14),0x8000000d);
    TFont_SetColor(*(int **)(param_1[0x7d] + 0xc),-0x7ffffff2,extraout_ECX);
  }
  if (*(int *)(iVar1 + 8) < 0) {
    FUN_0041907c((int *)param_1[0x7d],(RECT *)(iVar1 + 0x1c));
  }
  else {
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined4 *)(iVar1 + 8),iVar1 + 0x1c,uVar2);
  }
  if ((uVar2 & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(iVar1 + 0x18),(RECT *)(iVar1 + 0x1c));
  }
  FUN_00419558((int *)param_1[0x7d],0);
  return;
}


/* ==== 00428690 TCustomComboBox.CNMeasureItem ==== */

void TCustomComboBox_CNMeasureItem(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(iVar1 + 0x10) = param_1[0x7f];
  if (*(char *)((int)param_1 + 0x1fa) == '\x04') {
    (**(code **)(*param_1 + 0xc0))(param_1,*(undefined4 *)(iVar1 + 8),iVar1 + 0x10);
  }
  return;
}


/* ==== 004286c0 TCustomComboBox.WMLButtonDown ==== */

void TCustomComboBox_WMLButtonDown(int *param_1,int param_2)

{
  bool bVar1;
  int system_metrics;
  int *piVar2;
  
  if ((*(char *)((int)param_1 + 0x4d) == '\x01') && (*(char *)((int)param_1 + 0x1fa) == '\x02')) {
    system_metrics = GetSystemMetrics(0x15);
    if ((int)*(short *)(param_2 + 8) < param_1[0xe] - system_metrics) {
      (**(code **)(*param_1 + 0xb0))();
      FUN_0042edc0(param_1,'\0',-1);
      return;
    }
  }
  TControl_WMLButtonDown(param_1,param_2);
  bVar1 = FUN_0042e940(param_1);
  if (bVar1) {
    piVar2 = Forms_GetParentForm(param_1);
    if ((piVar2 != (int *)0x0) && (param_1 != (int *)piVar2[0x82])) {
      FUN_0042e950(param_1,'\0');
    }
  }
  return;
}


/* ==== 00428738 TCustomComboBox.dynamic_ffb9 ==== */

undefined4 TCustomComboBox_dynamic_ffb9(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = Controls_TWinControl_HandleAllocated(param_1);
  if (bVar1) {
    pHVar2 = GetFocus();
    if ((pHVar2 == *(HWND *)(param_1 + 0x208)) || (pHVar2 == *(HWND *)(param_1 + 0x20c))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* ==== 0042876c TButtonActionLink.virtual_000 ==== */

void TButtonActionLink_virtual_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TWinControlActionLink_virtual_000(param_1,param_2);
  uVar1 = System__AsClass(param_2,(int)&PTR_TWinControl_virtual_000_004240f0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


/* ==== 00428790 TButtonActionLink.virtual_024 ==== */

undefined4 TButtonActionLink_virtual_024(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_024(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0xb4))();
    iVar2 = System__AsClass(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (cVar1 == *(char *)(iVar2 + 0x58)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 004287c8 TButtonActionLink.virtual_044 ==== */

void TButtonActionLink_virtual_044(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4287da;
  cVar2 = (**(code **)(*param_1 + 0x24))();
  if (cVar2 != '\0') {
    piVar1 = (int *)param_1[10];
    *(undefined1 *)(piVar1 + 0x7c) = 1;
    puStack_14 = &LAB_0042881e;
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


/* ==== 0042882c TButtonControl.virtual_02c ==== */

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
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  if ((PTR_DAT_004aba14[8] != '\0') && (*(int *)PTR_DAT_004aba10 == 2)) {
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00428880 TButtonControl.dynamic_fff0 ==== */

void TButtonControl_dynamic_fff0(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  TWinControl_dynamic_fff0(param_1,param_2,param_3);
  uVar2 = System__IsClass(param_2,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if ((char)uVar2 != '\0') {
    if ((param_3 != '\0') && (cVar1 = (**(code **)(*param_1 + 0xb4))(), cVar1 != '\0')) {
      return;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,(char)param_2[0x16]);
  }
  return;
}


/* ==== 004288c8 TButtonControl.dynamic_ffde ==== */

undefined ** TButtonControl_dynamic_ffde(void)

{
  return &PTR_TButtonActionLink_virtual_000_0042402c;
}


/* ==== 004288d0 TButtonControl.virtual_0b4 ==== */

undefined4 TButtonControl_virtual_0b4(void)

{
  return 0;
}


/* ==== 004288d4 FUN_004288d4 ==== */

undefined4 FUN_004288d4(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x24))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 004288f4 TButtonControl.virtual_0b8 ==== */

void TButtonControl_virtual_0b8(void)

{
  return;
}


/* ==== 004288f8 TButtonControl.virtual_06c ==== */

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
       (cVar2 = System__CallDynaInst(param_1,param_2,param_3), param_3 = extraout_ECX, cVar2 == '\0'
       )) {
      *(undefined1 *)(param_1 + 0x7c) = 1;
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      SetFocus(hWnd);
      *(undefined1 *)(param_1 + 0x7c) = 0;
      cVar2 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX_00);
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


/* ==== 00428970 TButton.virtual_02c ==== */

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
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TButtonControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xe0;
  TControl_SetWidth(param_1,0x4b);
  TControl_SetHeight(param_1,0x19);
  TGroupBox_SetTabStop((int)param_1,'\x01');
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004289d4 TButton.dynamic_ffec ==== */

void TButton_dynamic_ffec(int *param_1)

{
  int *piVar1;
  
  piVar1 = Forms_GetParentForm(param_1);
  if (piVar1 != (int *)0x0) {
    piVar1[0x8d] = param_1[0x7f];
  }
  TControl_dynamic_ffec((int)param_1);
  return;
}


/* ==== 004289f8 TButton.dynamic_ffce ==== */

undefined4 TButton_dynamic_ffce(void)

{
  return 0;
}


/* ==== 004289fc TButton.virtual_0bc ==== */

void TButton_virtual_0bc(int *param_1,char param_2)

{
  bool bVar1;
  HWND pHVar2;
  uint window_long;
  uint wParam;
  UINT Msg;
  int nIndex;
  LPARAM lParam;
  
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if (bVar1) {
    wParam = (uint)(param_2 != '\0');
    nIndex = -0x10;
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
    window_long = GetWindowLongA(pHVar2,nIndex);
    if ((window_long & 0xf) != wParam) {
      lParam = 1;
      Msg = 0xf4;
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
    }
  }
  return;
}


/* ==== 00428a50 TButton.SetDefault ==== */

void TButton_SetDefault(int *param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 0x7e) = param_2;
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if (bVar1) {
    piVar2 = Forms_GetParentForm(param_1);
    if (piVar2 != (int *)0x0) {
      Controls_TControl_Perform((int)piVar2,0xb007,0,piVar2[0x82]);
    }
  }
  return;
}


/* ==== 00428a84 TButton.virtual_090 ==== */

void TButton_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"BUTTON");
  param_2[1] = param_2[1] | *(uint *)(&DAT_004aa6d0 + (uint)*(byte *)(param_1 + 0x7e) * 4);
  return;
}


/* ==== 00428ac0 TButton.virtual_098 ==== */

void TButton_virtual_098(int *param_1)

{
  TWinControl_virtual_098(param_1);
  *(char *)((int)param_1 + 0x1fa) = (char)param_1[0x7e];
  return;
}


/* ==== 00428ad8 TButton.CNCommand ==== */

void TButton_CNCommand(int *param_1,int param_2,undefined4 param_3)

{
  if (*(short *)(param_2 + 6) == 0) {
    System__CallDynaInst(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00428aec TButton.CMDialogKey ==== */

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
    bVar1 = FUN_0044476c(*(uint *)(param_2 + 8));
    if ((bVar1 == 0) &&
       (cVar2 = System__CallDynaInst(param_1,extraout_EDX & 0xffffff00,extraout_ECX), cVar2 != '\0')
       ) {
      System__CallDynaInst(param_1,extraout_EDX_00,extraout_ECX_00);
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
  }
  TWinControl_CMDialogKey((int)param_1,param_2);
  return;
}


/* ==== 00428b5c TButton.CMDialogChar ==== */

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
  puStack_1c = &LAB_00428bd2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TGroupBox_GetCaption((int)param_1,&local_8);
  cVar1 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      System__CallDynaInst(param_1,extraout_EDX_00,extraout_ECX_00);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_00428bbc;
    }
  }
  TWinControl_CMDialogChar((int)param_1,param_2);
LAB_00428bbc:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00428bd9;
  puStack_1c = (undefined1 *)0x428bd1;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00428be0 TButton.CMFocusChanged ==== */

void TButton_CMFocusChanged(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  uVar2 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_00424244);
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


/* ==== 00428c34 TButton.WMEraseBkgnd ==== */

void TButton_WMEraseBkgnd(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00428c3c TCustomCheckBox.virtual_02c ==== */

int * TCustomCheckBox_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TButtonControl_virtual_02c(param_1,'\0',param_3);
  TControl_SetWidth(param_1,0x61);
  TControl_SetHeight(param_1,0x11);
  TGroupBox_SetTabStop((int)param_1,'\x01');
  param_1[0x10] = 0xa0;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00428ca8 TCustomCheckBox.dynamic_ffcf ==== */

bool TCustomCheckBox_dynamic_ffcf(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = System__CallDynaInst(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return true;
  }
  return (char)param_1[0x7e] != '\x01';
}


/* ==== 00428cd4 TCustomCheckBox.virtual_0bc ==== */

void TCustomCheckBox_virtual_0bc(int *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x1fa);
  if (cVar1 == '\0') {
    if (*(char *)((int)param_1 + 0x1f9) == '\0') {
      TCheckBox_SetState(param_1,'\x01');
      return;
    }
    TCheckBox_SetState(param_1,'\x02');
  }
  else {
    if (cVar1 == '\x01') {
      TCheckBox_SetState(param_1,'\0');
      return;
    }
    if (cVar1 == '\x02') {
      TCheckBox_SetState(param_1,'\x01');
    }
  }
  return;
}


/* ==== 00428d14 TCustomCheckBox.dynamic_ffec ==== */

void TCustomCheckBox_dynamic_ffec(int param_1)

{
  FUN_0042e3a0(param_1);
  TControl_dynamic_ffec(param_1);
  return;
}


/* ==== 00428d28 TCustomCheckBox.virtual_0b4 ==== */

bool TCustomCheckBox_virtual_0b4(int param_1)

{
  return *(char *)(param_1 + 0x1fa) == '\x01';
}


/* ==== 00428d34 TCheckBox.SetAlignment ==== */

void TCheckBox_SetAlignment(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00428d48 TCustomCheckBox.virtual_0b8 ==== */

void TCustomCheckBox_virtual_0b8(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    TCheckBox_SetState(param_1,'\x01');
    return;
  }
  TCheckBox_SetState(param_1,'\0');
  return;
}


/* ==== 00428d5c TCheckBox.SetState ==== */

void TCheckBox_SetState(int *param_1,char param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(char *)((int)param_1 + 0x1fa)) {
    *(char *)((int)param_1 + 0x1fa) = param_2;
    bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
    if (bVar1) {
      lParam = 0;
      wParam = (uint)*(byte *)((int)param_1 + 0x1fa);
      Msg = 0xf1;
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
      uVar2 = extraout_ECX_00;
      uVar3 = extraout_EDX_00;
    }
    if ((char)param_1[0x7c] == '\0') {
      System__CallDynaInst(param_1,uVar3,uVar2);
    }
  }
  return;
}


/* ==== 00428dac TCustomCheckBox.virtual_090 ==== */

void TCustomCheckBox_virtual_090(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TWinControl_virtual_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"BUTTON");
  uVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(s__004aa6d8 + (uint)*(byte *)(param_1 + 0x7e) * 4 + (uVar1 & 0x7f) * 8) |
               param_2[1] | 5U;
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


/* ==== 00428e08 TCustomCheckBox.virtual_098 ==== */

void TCustomCheckBox_virtual_098(int *param_1)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  TWinControl_virtual_098(param_1);
  lParam = 0;
  wParam = (uint)*(byte *)((int)param_1 + 0x1fa);
  Msg = 0xf1;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 00428e34 TCustomCheckBox.WMSize ==== */

void TCustomCheckBox_WMSize(int *param_1,undefined4 param_2)

{
  TWinControl_WMSize(param_1,param_2);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00428e48 TCustomCheckBox.CMCtl3DChanged ==== */

void TCustomCheckBox_CMCtl3DChanged(int param_1)

{
  FUN_00431e04(param_1);
  return;
}


/* ==== 00428e50 TCustomCheckBox.CMDialogChar ==== */

void TCustomCheckBox_CMDialogChar(int *param_1,int param_2)

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
  puStack_1c = &LAB_00428ede;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TGroupBox_GetCaption((int)param_1,&local_8);
  cVar1 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xb0))();
      cVar1 = System__CallDynaInst(param_1,extraout_EDX_00,extraout_ECX_00);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0xbc))();
      }
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_00428ec8;
    }
  }
  TWinControl_CMDialogChar((int)param_1,param_2);
LAB_00428ec8:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00428ee5;
  puStack_1c = (undefined1 *)0x428edd;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00428eec TCustomCheckBox.CNCommand ==== */

void TCustomCheckBox_CNCommand(int *param_1,int param_2)

{
  if (*(short *)(param_2 + 6) == 0) {
    (**(code **)(*param_1 + 0xbc))();
  }
  return;
}


/* ==== 00428efc TRadioButton.virtual_02c ==== */

int * TRadioButton_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TButtonControl_virtual_02c(param_1,'\0',param_3);
  TControl_SetWidth(param_1,0x71);
  TControl_SetHeight(param_1,0x11);
  param_1[0x10] = 0xa0;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00428f5c TRadioButton.virtual_0b4 ==== */

undefined1 TRadioButton_virtual_0b4(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1f9);
}


/* ==== 00428f64 TRadioButton.dynamic_ffcf ==== */

bool TRadioButton_dynamic_ffcf(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = System__CallDynaInst(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return true;
  }
  return (char)param_1[0x7e] != '\x01';
}


/* ==== 00428f90 TRadioButton.SetAlignment ==== */

void TRadioButton_SetAlignment(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00428fa4 FUN_00428fa4 ==== */

void FUN_00428fa4(void)

{
  int iVar1;
  int i_val;
  int *piVar2;
  undefined4 uVar3;
  int j;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x24);
  if (iVar1 != 0) {
    i_val = Controls_TWinControl_GetControlCount(iVar1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar2 = (int *)Controls_TWinControl_GetControl(iVar1,j);
        if (piVar2 != *(int **)(in_stack_00000004 + -4)) {
          uVar3 = System__IsClass(piVar2,(int)&PTR_TWinControl_virtual_000_004251c4);
          if ((char)uVar3 != '\0') {
            (**(code **)(*piVar2 + 0xb8))(piVar2,0);
          }
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0042900c TRadioButton.virtual_0b8 ==== */

void TRadioButton_virtual_0b8(int *param_1,char param_2)

{
  bool bVar1;
  uint param;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(char *)((int)param_1 + 0x1f9)) {
    *(char *)((int)param_1 + 0x1f9) = param_2;
    TGroupBox_SetTabStop((int)param_1,param_2);
    bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
    if (bVar1) {
      lParam = 0;
      param = (**(code **)(*param_1 + 0xb4))();
      param = param & 0x7f;
      Msg = 0xf1;
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(hWnd,Msg,param,lParam);
    }
    if (param_2 != '\0') {
      FUN_00428fa4();
      FUN_0042e3a0((int)param_1);
      if ((char)param_1[0x7c] == '\0') {
        System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
      }
    }
  }
  return;
}


/* ==== 00429094 TRadioButton.virtual_090 ==== */

void TRadioButton_virtual_090(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TWinControl_virtual_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"BUTTON");
  uVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(s__004aa6e8 + (uint)*(byte *)(param_1 + 0x7e) * 4 + (uVar1 & 0x7f) * 8) |
               param_2[1] | 4U;
  return;
}


/* ==== 004290ec TRadioButton.virtual_098 ==== */

void TRadioButton_virtual_098(int *param_1)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  TWinControl_virtual_098(param_1);
  lParam = 0;
  wParam = (uint)*(byte *)((int)param_1 + 0x1f9);
  Msg = 0xf1;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 00429118 TRadioButton.CMCtl3DChanged ==== */

void TRadioButton_CMCtl3DChanged(int param_1)

{
  FUN_00431e04(param_1);
  return;
}


/* ==== 00429120 TRadioButton.CMDialogChar ==== */

void TRadioButton_CMDialogChar(int *param_1,int param_2)

{
  char cVar1;
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
  puStack_1c = &LAB_00429195;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TGroupBox_GetCaption((int)param_1,&local_8);
  cVar1 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xb0))();
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_0042917f;
    }
  }
  TWinControl_CMDialogChar((int)param_1,param_2);
LAB_0042917f:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042919c;
  puStack_1c = (undefined1 *)0x429194;
  System__LStrClr(&local_8);
  return;
}


/* ==== 004291a4 TRadioButton.CNCommand ==== */

void TRadioButton_CNCommand(int *param_1,int param_2,undefined4 param_3)

{
  if (*(short *)(param_2 + 6) == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1,1);
    return;
  }
  if (*(short *)(param_2 + 6) == 5) {
    System__CallDynaInst(param_1,param_2,param_3);
  }
  return;
}


/* ==== 004291d8 FUN_004291d8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004291d8(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac738 = _DAT_004ac738 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00429298 FUN_00429298 ==== */

void FUN_00429298(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)0x4292a7;
  local_8 = param_1;
  FUN_00429324(param_1);
  puStack_10 = &LAB_004292d0;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  EmptyClipboard();
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004292d7;
  puStack_10 = (undefined1 *)0x4292cf;
  FUN_004292f8(local_8);
  return;
}


/* ==== 004292dc FUN_004292dc ==== */

void FUN_004292dc(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(char *)(param_1 + 0xd) == '\0')) {
    FUN_00429298(param_1);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}


/* ==== 004292f8 FUN_004292f8 ==== */

void FUN_004292f8(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) &&
     (*(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1, *(int *)(param_1 + 4) == 0)) {
    CloseClipboard();
    if (*(char *)(param_1 + 0xc) != '\0') {
      FUN_004446f0(*(HWND *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


/* ==== 00429324 FUN_00429324 ==== */

void FUN_00429324(int param_1)

{
  int iVar1;
  HWND pHVar2;
  BOOL BVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(*(int *)PTR_DAT_004ab8ac + 0x24);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) {
      pHVar2 = FUN_0044463c();
      *(HWND *)(param_1 + 8) = pHVar2;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    BVar3 = OpenClipboard(*(HWND *)(param_1 + 8));
    if (BVar3 == 0) {
      piVar4 = SysUtils_Exception_CreateRes
                         ((int *)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab660);
      System__RaiseExcept(piVar4);
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


/* ==== 004293a0 FUN_004293a0 ==== */

void FUN_004293a0(int param_1,uint param_2,undefined4 *param_3,uint bytes)

{
  HGLOBAL hMem;
  undefined4 *global_lock;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x4293bb;
  FUN_00429324(param_1);
  puStack_20 = &LAB_00429472;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_30 = 0x4293d4;
  puStack_1c = &stack0xfffffffc;
  hMem = GlobalAlloc(0x2002,bytes);
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  global_lock = GlobalLock(hMem);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  System_Move(param_3,global_lock,bytes);
  FUN_004292dc(param_1);
  SetClipboardData(param_2 & 0xffff,hMem);
  *in_FS_OFFSET = uStack_3c;
  uStack_3c = 0x429432;
  GlobalUnlock(hMem);
  return;
}


/* ==== 0042db7c TButton.GetAction ==== */

undefined4 TButton_GetAction(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10);
  }
  return 0;
}


/* ==== 0042db8c TGroupBox.SetAnchors ==== */

void TGroupBox_SetAnchors(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x51)) {
    *(char *)(param_1 + 0x51) = param_2;
    FUN_0042de78(param_1);
  }
  return;
}


/* ==== 0042dbac TButton.SetAction ==== */

void TButton_SetAction(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 == 0) {
    System_TObject_Free((int *)param_1[0x17]);
    param_1[0x17] = 0;
    param_1[0x10] = param_1[0x10] & 0xffff7fff;
  }
  else {
    param_1[0x10] = param_1[0x10] | 0x8000;
    if (param_1[0x17] == 0) {
      iVar1 = System__CallDynaInst(param_1,param_2,param_3);
      iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      param_1[0x17] = iVar1;
    }
    (**(code **)(*(int *)param_1[0x17] + 0xc))((int *)param_1[0x17],param_2);
    iVar1 = param_1[0x17];
    *(int **)(iVar1 + 0xc) = param_1;
    *(undefined1 **)(iVar1 + 8) = &LAB_00430380;
    System__CallDynaInst
              (param_1,param_2,
               CONCAT31((int3)((uint)extraout_ECX >> 8),(*(byte *)(param_2 + 0x20) & 1) != 0));
    FUN_0041564c(param_2,(int)param_1,extraout_ECX_00);
  }
  return;
}


/* ==== 0042dd4c TGroupBox.SetAlign ==== */

void TGroupBox_SetAlign(int *param_1,uint param_2,undefined4 param_3)

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
    TGroupBox_SetAnchors((int)param_1,(&DAT_004aa700)[param_2 & 0xff]);
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
        System__CallDynaInst(param_1,CONCAT31((int3)(param_2 >> 8),bVar4),extraout_ECX);
        param_3 = extraout_ECX_01;
        uVar2 = extraout_EDX_01;
      }
    }
  }
  System__CallDynaInst(param_1,uVar2,param_3);
  return;
}


/* ==== 0042e64c TGroupBox.SetVisible ==== */

void TGroupBox_SetVisible(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)((int)param_1 + 0x47) != (char)param_2) {
    System__CallDynaInst(param_1,param_2,param_3);
    *(char *)((int)param_1 + 0x47) = (char)param_2;
    Controls_TControl_Perform((int)param_1,0xb00b,param_2 & 0xff,0);
    System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 0042e6c4 FUN_0042e6c4 ==== */

int FUN_0042e6c4(int param_1)

{
  if (0 < *(int *)(param_1 + 0x98)) {
    return *(int *)(param_1 + 0x98);
  }
  return *(int *)(param_1 + 0x3c);
}


/* ==== 0042e6d8 FUN_0042e6d8 ==== */

int FUN_0042e6d8(int param_1)

{
  if (0 < *(int *)(param_1 + 0x94)) {
    return *(int *)(param_1 + 0x94);
  }
  return *(int *)(param_1 + 0x38);
}


/* ==== 0042e6ec TGroupBox.SetPopupMenu ==== */

void TGroupBox_SetPopupMenu(int *param_1,int *param_2)

{
  undefined4 extraout_ECX;
  
  param_1[0x1b] = (int)param_2;
  if (param_2 != (int *)0x0) {
    FUN_00440e44(param_2,param_1);
    FUN_0041564c((int)param_2,(int)param_1,extraout_ECX);
  }
  return;
}


/* ==== 0042e710 FUN_0042e710 ==== */

void FUN_0042e710(int param_1,undefined4 param_2)

{
  Controls_TControl_Perform(param_1,0xc,0,param_2);
  Controls_TControl_Perform(param_1,0xb012,0,0);
  return;
}


/* ==== 0042e734 TGroupBox.GetCaption ==== */

void TGroupBox_GetCaption(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0042e6a8(param_1);
  System__LStrFromPCharLen(param_2,(undefined4 *)0x0,uVar1);
  if (uVar1 != 0) {
    FUN_0042e6b8(param_1,*param_2,uVar1 + 1);
  }
  return;
}


/* ==== 0042e764 TGroupBox.SetCaption ==== */

void TGroupBox_SetCaption(int param_1,uint *param_2)

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
  puStack_18 = &LAB_0042e7b9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TGroupBox_GetCaption(param_1,(int *)&local_8);
  System__LStrCmp(local_8,param_2);
  if (!(bool)uVar2) {
    puVar1 = System__LStrToPChar((undefined *)param_2);
    FUN_0042e710(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042e7c0;
  puStack_18 = (undefined1 *)0x42e7b8;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0042e820 TGroupBox.SetFont ==== */

void TGroupBox_SetFont(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x58) + 8))();
  return;
}


/* ==== 0042e858 TGroupBox.SetParentFont ==== */

void TGroupBox_SetParentFont(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x49)) &&
     (*(char *)(param_1 + 0x49) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    Controls_TControl_Perform(param_1,0xb008,0,0);
  }
  return;
}


/* ==== 0042e878 TGroupBox.SetShowHint ==== */

void TGroupBox_SetShowHint(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x89)) {
    *(char *)(param_1 + 0x89) = param_2;
    *(undefined1 *)(param_1 + 0x8a) = 0;
    Controls_TControl_Perform(param_1,0xb022,0,0);
  }
  return;
}


/* ==== 0042e89c TGroupBox.SetParentShowHint ==== */

void TGroupBox_SetParentShowHint(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x8a)) &&
     (*(char *)(param_1 + 0x8a) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    Controls_TControl_Perform(param_1,0xb023,0,0);
  }
  return;
}


/* ==== 0042e8c0 TGroupBox.SetColor ==== */

void TGroupBox_SetColor(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x60) = param_2;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    Controls_TControl_Perform(param_1,0xb00d,0,0);
  }
  return;
}


/* ==== 0042e8e4 TGroupBox.SetParentColor ==== */

void TGroupBox_SetParentColor(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x4a)) &&
     (*(char *)(param_1 + 0x4a) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    Controls_TControl_Perform(param_1,0xb009,0,0);
  }
  return;
}


/* ==== 004333dc TGroupBox.SetDockSite ==== */

void TGroupBox_SetDockSite(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_00433483;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != (char)param_1[0x51]) &&
     (*(char *)(param_1 + 0x51) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) {
    FUN_0042c648((int)param_1,param_2,param_3);
    if (param_2 == '\0') {
      System_TObject_Free((int *)param_1[0x50]);
      param_1[0x50] = 0;
      System__IntfClear(param_1 + 0x52);
    }
    else {
      uVar2 = extraout_ECX;
      if (param_1[0x50] == 0) {
        iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX);
        param_1[0x50] = iVar1;
        uVar2 = extraout_ECX_00;
      }
      System__CallDynaInst(param_1,&local_8,uVar2);
      FUN_00405878(param_1 + 0x52,local_8);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043348a;
  puStack_18 = (undefined1 *)0x433482;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 00434b20 TGroupBox.SetCtl3D ==== */

void TGroupBox_SetCtl3D(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x138)) {
    *(char *)(param_1 + 0x138) = param_2;
    *(undefined1 *)(param_1 + 0x160) = 0;
    Controls_TControl_Perform(param_1,0xb010,0,0);
  }
  return;
}


/* ==== 00434b50 TGroupBox.SetParentCtl3D ==== */

void TGroupBox_SetParentCtl3D(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x160)) &&
     (*(char *)(param_1 + 0x160) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    Controls_TControl_Perform(param_1,0xb011,0,0);
  }
  return;
}


/* ==== 00434b74 TGroupBox.GetTabOrder ==== */

int TGroupBox_GetTabOrder(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = Classes_TList_IndexOf(*(int *)(*(int *)(param_1 + 0x24) + 0x16c),param_1);
    return iVar1;
  }
  return -1;
}


/* ==== 00434b98 FUN_00434b98 ==== */

void FUN_00434b98(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = TGroupBox_GetTabOrder(param_1);
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
      Classes_TList_Delete(piVar1,iVar3);
      FUN_0041032c(*(int **)(*(int *)(param_1 + 0x24) + 0x16c),(int)param_2,param_1);
    }
  }
  return;
}


/* ==== 00434bf4 TGroupBox.SetTabOrder ==== */

void TGroupBox_SetTabOrder(int param_1,short param_2)

{
  if ((*(byte *)(param_1 + 0x44) & 8) != 0) {
    *(int *)(param_1 + 0x170) = (int)param_2;
    return;
  }
  FUN_00434b98(param_1,param_2);
  return;
}


/* ==== 00434c0c TGroupBox.SetTabStop ==== */

void TGroupBox_SetTabStop(int param_1,char param_2)

{
  bool bVar1;
  uint new_long;
  
  if (param_2 != *(char *)(param_1 + 0x174)) {
    *(char *)(param_1 + 0x174) = param_2;
    bVar1 = Controls_TWinControl_HandleAllocated(param_1);
    if (bVar1) {
      new_long = GetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10);
      new_long = new_long & 0xfffeffff;
      if (param_2 != '\0') {
        new_long = new_long | 0x10000;
      }
      SetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10,new_long);
    }
    Controls_TControl_Perform(param_1,0xb028,0,0);
  }
  return;
}


