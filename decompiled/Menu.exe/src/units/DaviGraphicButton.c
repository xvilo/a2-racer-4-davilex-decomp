/* Menu.exe — units/DaviGraphicButton.pas: 27 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00469764 TDaviGraphicButton.virtual_02c ==== */

int * TDaviGraphicButton_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TButton_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] & 0xffffffbf;
  piVar1 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00416dc0,'\x01',extraout_ECX_00);
  param_1[0x80] = (int)piVar1;
  param_1[0x82] = 0;
  param_1[0x83] = 0xc0c0c0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 004697e8 TDaviGraphicButton.Destroy ==== */

void TDaviGraphicButton_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[0x80]);
  TDaviGraphicButton_SetDefinition((int)piVar1,0);
  piVar1[0x85] = 0;
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00469830 TDaviGraphicButton.SetDefinition ==== */

void TDaviGraphicButton_SetDefinition(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_0045dfd4(*(int *)(param_1 + 0x208),param_1);
  }
  *(int *)(param_1 + 0x208) = param_2;
  if (param_2 != 0) {
    FUN_0045df90(param_2,param_1);
  }
  return;
}


/* ==== 00469864 FUN_00469864 ==== */

void FUN_00469864(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if (cVar1 != *(char *)(param_1 + 0x218)) {
    if (*(int *)(param_1 + 0x208) != 0) {
      FUN_0045defc(*(int *)(param_1 + 0x208),param_1,
                   CONCAT31((int3)((uint)param_2 >> 8),*(char *)(param_1 + 0x218)),cVar1);
    }
    *(char *)(param_1 + 0x218) = cVar1;
  }
  return;
}


/* ==== 00469898 TDaviGraphicButton.CNDrawItem ==== */

void TDaviGraphicButton_CNDrawItem(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0xc0))(param_1,*(undefined4 *)(param_2 + 8));
  return;
}


/* ==== 004698b0 TDaviGraphicButton.CMEnabledChanged ==== */

void TDaviGraphicButton_CMEnabledChanged(int *param_1)

{
  TWinControl_CMEnabledChanged(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004698c8 TDaviGraphicButton.CMFontChanged ==== */

void TDaviGraphicButton_CMFontChanged(int *param_1)

{
  TWinControl_CMFontChanged(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004698e0 TDaviGraphicButton.CNMeasureItem ==== */

void TDaviGraphicButton_CNMeasureItem(uint param_1,int param_2)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 < 0) {
    param_1 = System__RunError(param_1);
    iVar2 = extraout_ECX;
    iVar3 = extraout_EDX;
  }
  *(int *)(iVar3 + 0xc) = iVar2;
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((int)uVar1 < 0) {
    uVar1 = System__RunError(uVar1);
    iVar3 = extraout_EDX_00;
  }
  *(uint *)(iVar3 + 0x10) = uVar1;
  return;
}


/* ==== 00469904 TDaviGraphicButton.CMMouseEnter ==== */

void TDaviGraphicButton_CMMouseEnter(int *param_1)

{
  int iVar1;
  
  TControl_CMMouseEnter((int)param_1);
  *(undefined1 *)(param_1 + 0x84) = 1;
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  param_1[0x8c] = *(int *)(iVar1 + 0x108);
  param_1[0x8d] = *(int *)(iVar1 + 0x10c);
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  *(int **)(iVar1 + 0x10c) = param_1;
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(*param_1 + 0xc4);
  (**(code **)(*param_1 + 0x74))();
  if (*(short *)((int)param_1 + 0x222) != 0) {
    (*(code *)param_1[0x88])(param_1[0x89],param_1);
  }
  return;
}


/* ==== 00469974 TDaviGraphicButton.CMMouseLeave ==== */

void TDaviGraphicButton_CMMouseLeave(int *param_1)

{
  int iVar1;
  
  TControl_CMMouseLeave((int)param_1);
  *(undefined1 *)(param_1 + 0x84) = 0;
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  *(int *)(iVar1 + 0x108) = param_1[0x8c];
  *(int *)(iVar1 + 0x10c) = param_1[0x8d];
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  (**(code **)(*param_1 + 0x74))();
  if (*(short *)((int)param_1 + 0x22a) != 0) {
    (*(code *)param_1[0x8a])(param_1[0x8b],param_1);
  }
  return;
}


/* ==== 004699d8 TDaviGraphicButton.WMLButtonDblClk ==== */

void TDaviGraphicButton_WMLButtonDblClk(int param_1,int param_2)

{
  Controls_TControl_Perform(param_1,0x201,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8))
  ;
  return;
}


/* ==== 004699f0 TDaviGraphicButton.virtual_090 ==== */

void TDaviGraphicButton_virtual_090(int *param_1,int *param_2)

{
  HWND pHVar1;
  uint new_long;
  int index_val;
  
  TButton_virtual_090(param_1,param_2);
  param_2[1] = param_2[1] | 0xb;
  if ((param_1[0x82] != 0) && (*(char *)(param_1[0x82] + 0x54) != '\0')) {
    param_2[2] = param_2[2] | 0x20;
    index_val = -0x10;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle((int *)param_1[9]);
    new_long = GetWindowLongA(pHVar1,index_val);
    new_long = new_long & 0xfdffffff;
    index_val = -0x10;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle((int *)param_1[9]);
    SetWindowLongA(pHVar1,index_val,new_long);
  }
  return;
}


/* ==== 00469a44 TDaviGraphicButton.virtual_098 ==== */

void TDaviGraphicButton_virtual_098(int *param_1)

{
  HRGN pHVar1;
  HWND hWnd;
  BOOL bRedraw;
  
  TButton_virtual_098(param_1);
  if ((HGDIOBJ)param_1[0x85] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x85]);
    param_1[0x85] = 0;
  }
  if ((param_1[0x82] != 0) && (*(int *)(param_1[0x82] + 0x40) != 0)) {
    pHVar1 = CreateRectRgn(0,0,1,1);
    param_1[0x85] = (int)pHVar1;
    CombineRgn(pHVar1,*(HRGN *)(param_1[0x82] + 0x40),(HRGN)0x0,5);
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    bRedraw = -1;
    pHVar1 = (HRGN)param_1[0x85];
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetWindowRgn(hWnd,pHVar1,bRedraw);
  }
  return;
}


/* ==== 00469ac4 TDaviGraphicButton.virtual_0c0 ==== */

void TDaviGraphicButton_virtual_0c0(int *param_1,int param_2)

{
  HDC pHVar1;
  int *piVar2;
  LPCSTR lpchText;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int cchText;
  UINT UVar3;
  UINT UVar4;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  RECT local_38;
  undefined *local_28;
  tagRECT local_24;
  tagRECT local_14;
  tagRECT *lprc_val;
  
  puStack_44 = &stack0xfffffffc;
  local_28 = (undefined *)0x0;
  puStack_48 = &LAB_00469c27;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  FUN_00419558((int *)param_1[0x80],*(int *)(param_2 + 0x18));
  (**(code **)(*param_1 + 0x40))(param_1,&local_14);
  if (param_1[0x82] == 0) {
    UVar4 = 0x10;
    UVar3 = 4;
    lprc_val = &local_14;
    pHVar1 = (HDC)FUN_004194d8((int *)param_1[0x80]);
    DrawFrameControl(pHVar1,lprc_val,UVar3,UVar4);
  }
  else {
    FUN_00469d78(param_1,param_2);
    piVar2 = (int *)(**(code **)(*param_1 + 200))();
    FUN_00418f9c((int *)param_1[0x80],0,0,piVar2);
    TCanvas_SetFont(param_1[0x80]);
    if ((char)param_1[0x86] == '\x04') {
      TFont_SetColor(*(int **)(param_1[0x80] + 0xc),param_1[0x83],extraout_ECX);
    }
    TBrush_SetStyle(*(int **)(param_1[0x80] + 0x14),'\x01');
    FUN_0045df20(param_1[0x82],CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0x86]),
                 &local_24.left);
    UVar3 = 0x25;
    if ((char)param_1[0x8e] != '\0') {
      UVar3 = 0x15;
    }
    lprc_val = &local_24;
    cchText = -1;
    TGroupBox_GetCaption((int)param_1,(int *)&local_28);
    lpchText = System__LStrToPChar(local_28);
    pHVar1 = (HDC)FUN_004194d8((int *)param_1[0x80]);
    DrawTextA(pHVar1,lpchText,cchText,lprc_val,UVar3);
    if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
      TBrush_SetColor(*(int **)(param_1[0x80] + 0x14),0xffffff);
      (**(code **)(*param_1 + 0x40))(param_1,&local_38);
      FUN_004190b8((int *)param_1[0x80],&local_38);
    }
    FUN_00419558((int *)param_1[0x80],0);
  }
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_00469c2e;
  puStack_48 = (undefined1 *)0x469c26;
  System__LStrClr((int *)&local_28);
  return;
}


/* ==== 00469c34 TDaviGraphicButton.virtual_0bc ==== */

void TDaviGraphicButton_virtual_0bc(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x204) = param_2;
  return;
}


/* ==== 00469c3c TDaviGraphicButton.message_4400 ==== */

void TDaviGraphicButton_message_4400(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00469c48 TDaviGraphicButton.message_4401 ==== */

void TDaviGraphicButton_message_4401(int *param_1)

{
  FUN_00431e04((int)param_1);
  (**(code **)(*param_1 + 0x7c))
            (param_1,param_1[0xc],param_1[0xd],*(undefined4 *)(param_1[0x82] + 0x48),
             *(undefined4 *)(param_1[0x82] + 0x44));
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00469c7c TDaviGraphicButton.message_4403 ==== */

void TDaviGraphicButton_message_4403(int param_1)

{
  TDaviGraphicButton_SetDefinition(param_1,0);
  return;
}


/* ==== 00469c88 TDaviGraphicButton.message_4402 ==== */

void TDaviGraphicButton_message_4402(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  HRGN hRgn;
  BOOL bRedraw;
  
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if ((bVar1) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    bRedraw = -1;
    hRgn = (HRGN)0x0;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetWindowRgn(hWnd,hRgn,bRedraw);
  }
  param_1[0x85] = 0;
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],0x18,0x68);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00469cd8 TDaviGraphicButton.WMEraseBkgnd ==== */

void TDaviGraphicButton_WMEraseBkgnd(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  return;
}


/* ==== 00469ce0 TDaviGraphicButton.SetDisabledFontColor ==== */

void TDaviGraphicButton_SetDisabledFontColor(int *param_1,int param_2)

{
  if (param_2 != param_1[0x83]) {
    param_1[0x83] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00469d00 TDaviGraphicButton.SetWordWrap ==== */

void TDaviGraphicButton_SetWordWrap(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x8e]) {
    *(char *)(param_1 + 0x8e) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00469d20 TDaviGraphicButton.virtual_0c4 ==== */

void TDaviGraphicButton_virtual_0c4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x208) != 0) {
    piVar2 = (int *)FUN_0045df74(*(int *)(param_1 + 0x208),CONCAT31((int3)((uint)param_2 >> 8),6));
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      *(undefined ***)(param_4 + 4) = &PTR_TWinControl_virtual_000_00468ee4;
      *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_1 + 0x208);
    }
  }
  return;
}


/* ==== 00469d60 TDaviGraphicButton.virtual_0c8 ==== */

void TDaviGraphicButton_virtual_0c8(int param_1,undefined4 param_2)

{
  FUN_0045df74(*(int *)(param_1 + 0x208),
               CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(param_1 + 0x218)));
  return;
}


/* ==== 00469d78 FUN_00469d78 ==== */

void FUN_00469d78(int *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 extraout_EDX;
  undefined3 uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (((uVar1 & 1) == 0) || ((char)param_1[0x84] == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar3 = (**(code **)(*param_1 + 0x4c))();
  uVar4 = (undefined3)((uint)extraout_EDX >> 8);
  if (cVar3 == '\0') {
    FUN_00469864((int)param_1,CONCAT31(uVar4,4));
  }
  else if (bVar2) {
    FUN_00469864((int)param_1,CONCAT31(uVar4,1));
  }
  else if ((char)param_1[0x84] == '\0') {
    if (((uVar1 & 0x10) == 0) && ((char)param_1[0x81] == '\0')) {
      FUN_00469864((int)param_1,0);
    }
    else {
      FUN_00469864((int)param_1,CONCAT31(uVar4,2));
    }
  }
  else {
    FUN_00469864((int)param_1,CONCAT31(uVar4,3));
  }
  return;
}


/* ==== 00469e00 TDaviGraphicButton.virtual_074 ==== */

void TDaviGraphicButton_virtual_074(int param_1)

{
  bool bVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_14;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    bVar1 = Controls_TWinControl_HandleAllocated(*(int *)(param_1 + 0x24));
    if (bVar1) {
      FUN_0042e13c(param_1,&local_14.left);
      bErase = -1;
      lpRect = &local_14;
      hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0x24));
      InvalidateRect(hWnd,lpRect,bErase);
    }
  }
  TWinControl_virtual_074(param_1);
  return;
}


/* ==== 00469e48 FUN_00469e48 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469e48(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad184 = _DAT_004ad184 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


