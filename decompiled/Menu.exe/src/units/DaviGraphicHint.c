/* Menu.exe — units/DaviGraphicHint.pas: 4 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00469004 TDaviGraphicHintWindow.virtual_0bc ==== */

void TDaviGraphicHintWindow_virtual_0bc
               (int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int i_val;
  undefined4 *puVar3;
  undefined4 local_18 [4];
  undefined4 local_8;
  
  puVar3 = local_18;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_3;
  if (param_4 == (int *)0x0) {
    System__Assert("Assertion failure");
  }
  uVar1 = System__IsClass(param_4,(int)&PTR_TPersistent_virtual_000_0045d61c);
  if ((char)uVar1 == '\0') {
    System__Assert("Assertion failure");
  }
  piVar2 = FUN_0045dd74((int)param_4,6);
  param_1[0x80] = (int)piVar2;
  param_1[0x81] = param_4[0x14];
  THintWindow_virtual_0bc(param_1,local_18,local_8);
  return;
}


/* ==== 004690e0 TDaviGraphicHintWindow.virtual_0c0 ==== */

void TDaviGraphicHintWindow_virtual_0c0
               (int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  LONG *pLVar1;
  undefined4 uVar2;
  int *piVar3;
  int text;
  uint format_val;
  LPCSTR lpchText;
  HDC hdc;
  uint uVar4;
  LPRECT lprc;
  
  if (param_5 == (int *)0x0) {
    System__Assert("Assertion failure");
  }
  uVar2 = System__IsClass(param_5,(int)&PTR_TPersistent_virtual_000_0045d61c);
  if ((char)uVar2 == '\0') {
    System__Assert("Assertion failure");
  }
  piVar3 = FUN_0045dd74((int)param_5,6);
  text = (**(code **)(*piVar3 + 0x20))();
  format_val = text - 1;
  if (SBORROW4(text,1)) {
    format_val = System__RunError(format_val);
  }
  Classes_Rect(0,0,param_2,&param_4->left,format_val);
  piVar3 = *(int **)(*(int *)(param_1 + 0x1f0) + 0xc);
  (**(code **)(*piVar3 + 8))(piVar3,param_5[0x14]);
  format_val = FUN_004306a8(param_1);
  format_val = format_val | 0xc10;
  if ((int)format_val < 0) {
    format_val = System__RunError(format_val);
  }
  text = -1;
  lprc = param_4;
  lpchText = System__LStrToPChar(param_3);
  hdc = (HDC)FUN_004194d8(*(int **)(param_1 + 0x1f0));
  format_val = DrawTextA(hdc,lpchText,text,lprc,format_val);
  pLVar1 = &param_4->right;
  text = *pLVar1;
  *pLVar1 = *pLVar1 + 6;
  if (SCARRY4(text,6)) {
    System__RunError(format_val);
  }
  piVar3 = FUN_0045dd74((int)param_5,6);
  text = (**(code **)(*piVar3 + 0x20))();
  format_val = text + param_4->top;
  if (SCARRY4(text,param_4->top)) {
    format_val = System__RunError(format_val);
  }
  uVar4 = format_val - 1;
  if (SBORROW4(format_val,1)) {
    uVar4 = System__RunError(uVar4);
  }
  param_4->bottom = uVar4;
  pLVar1 = &param_4->bottom;
  text = *pLVar1;
  *pLVar1 = *pLVar1 + -1;
  if (SBORROW4(text,1)) {
    System__RunError(uVar4);
  }
  return;
}


/* ==== 00469234 TDaviGraphicHintWindow.virtual_0b4 ==== */

void TDaviGraphicHintWindow_virtual_0b4(int *param_1)

{
  uint format_val;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_18;
  tagRECT rect;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  puStack_24 = &LAB_004692e5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00418f9c((int *)param_1[0x7c],0,0,(int *)param_1[0x80]);
  format_val = (**(code **)(*param_1 + 0x40))(param_1,&rect);
  bVar1 = SCARRY4(rect.left,2);
  rect.left = rect.left + 2;
  if (bVar1) {
    System__RunError(format_val);
  }
  (**(code **)(**(int **)(param_1[0x7c] + 0xc) + 8))(*(int **)(param_1[0x7c] + 0xc),param_1[0x81]);
  format_val = FUN_004306a8((int)param_1);
  format_val = format_val | 0x814;
  if ((int)format_val < 0) {
    format_val = System__RunError(format_val);
  }
  lprc = &rect;
  cchText = -1;
  TGroupBox_GetCaption((int)param_1,(int *)&local_18);
  lpchText = System__LStrToPChar(local_18);
  hdc = (HDC)FUN_004194d8((int *)param_1[0x7c]);
  DrawTextA(hdc,lpchText,cchText,lprc,format_val);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004692ec;
  puStack_24 = (undefined1 *)0x4692e4;
  System__LStrClr((int *)&local_18);
  return;
}


/* ==== 004692f4 TDaviGraphicHintWindow.WMNCPaint ==== */

void TDaviGraphicHintWindow_WMNCPaint(void)

{
  return;
}


