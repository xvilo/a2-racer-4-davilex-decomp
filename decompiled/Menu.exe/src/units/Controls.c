/* Menu.exe — units/Controls.pas: 527 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0042b880 FUN_0042b880 ==== */

void FUN_0042b880(char *param_1)

{
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    return;
  }
  if (*param_1 == '\x01') {
    *param_1 = '\0';
  }
  return;
}


/* ==== 0042b894 FUN_0042b894 ==== */

undefined4 FUN_0042b894(void)

{
  HANDLE pvVar1;
  uint window_long;
  LONG LVar2;
  undefined4 uVar3;
  HWND in_stack_00000004;
  
  *(HWND *)((int)DAT_004aa6f8 + 0x14c) = in_stack_00000004;
  SetWindowLongA(in_stack_00000004,-4,*(LONG *)((int)DAT_004aa6f8 + 0x15c));
  window_long = GetWindowLongA(in_stack_00000004,-0x10);
  if ((window_long & 0x40000000) != 0) {
    LVar2 = GetWindowLongA(in_stack_00000004,-0xc);
    if (LVar2 == 0) {
      SetWindowLongA(in_stack_00000004,-0xc,(LONG)in_stack_00000004);
    }
  }
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_004ac75a,DAT_004aa6f8);
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_004ac758,DAT_004aa6f8);
  pvVar1 = DAT_004aa6f8;
  DAT_004aa6f8 = (HANDLE)0x0;
  uVar3 = (**(code **)((int)pvVar1 + 0x15c))();
  return uVar3;
}


/* ==== 0042b94c FUN_0042b94c ==== */

HANDLE FUN_0042b94c(HWND wnd)

{
  HANDLE prop;
  
  prop = (HANDLE)0x0;
  if (wnd != (HWND)0x0) {
    prop = GetPropA(wnd,(LPCSTR)(uint)DAT_004ac75a);
  }
  return prop;
}


/* ==== 0042b968 FUN_0042b968 ==== */

LRESULT FUN_0042b968(UINT msg,WPARAM param,LPARAM param_3)

{
  LRESULT LVar1;
  
  if (*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24),msg,param,param_3);
    return LVar1;
  }
  return 0;
}


/* ==== 0042bb4c FUN_0042bb4c ==== */

void FUN_0042bb4c(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040c0d8(&DAT_0042bb8c,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403cb0(param_2,param_1);
  }
  else {
    FUN_004040e4((int)param_1,1,(uint)(pCVar1 + -1),param_2);
  }
  return;
}


/* ==== 0042bb90 FUN_0042bb90 ==== */

void FUN_0042bb90(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040c0d8(&DAT_0042bbd0,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403cb0(param_2,param_1);
  }
  else {
    FUN_004040e4((int)param_1,(int)(pCVar1 + 1),0x7fffffff,param_2);
  }
  return;
}


/* ==== 0042bbd4 FUN_0042bbd4 ==== */

HANDLE FUN_0042bbd4(void)

{
  HWND wnd;
  HANDLE pvVar1;
  
  wnd = GetCapture();
  pvVar1 = FUN_0042b94c(wnd);
  if (((pvVar1 != (HANDLE)0x0) && (DAT_004aa7b8 != (HANDLE)0x0)) &&
     (pvVar1 == *(HANDLE *)((int)DAT_004aa7b8 + 0x24))) {
    pvVar1 = DAT_004aa7b8;
  }
  return pvVar1;
}


/* ==== 0042bbfc FUN_0042bbfc ==== */

void FUN_0042bbfc(int *param_1)

{
  undefined4 uVar1;
  HWND hWnd;
  int *piVar2;
  
  ReleaseCapture();
  DAT_004aa7b8 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_virtual_000_0042ac0c);
    piVar2 = param_1;
    if ((char)uVar1 == '\0') {
      if (param_1[9] == 0) {
        return;
      }
      piVar2 = (int *)param_1[9];
      DAT_004aa7b8 = param_1;
    }
    hWnd = (HWND)FUN_004349e0(piVar2);
    SetCapture(hWnd);
  }
  return;
}


/* ==== 0042bca8 FUN_0042bca8 ==== */

undefined1 FUN_0042bca8(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  while( true ) {
    if ((int)param_1[2] <= *param_3) {
      return 0;
    }
    iVar1 = FUN_004102b0(param_1,*param_3);
    if (param_2 == *(int *)(iVar1 + 4)) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}


/* ==== 0042bcdc FUN_0042bcdc ==== */

HWND FUN_0042bcdc(void)

{
  HWND hWnd;
  HWND pHVar1;
  HWND pHVar2;
  int in_stack_00000004;
  
  pHVar2 = (HWND)FUN_004349e0(*(int **)(in_stack_00000004 + -4));
  pHVar1 = pHVar2;
  while (hWnd = pHVar2, hWnd != (HWND)0x0) {
    pHVar2 = GetParent(hWnd);
    pHVar1 = hWnd;
  }
  return pHVar1;
}


/* ==== 0042bd04 FUN_0042bd04 ==== */

void FUN_0042bd04(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  int local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_0040277c(8);
  *puVar2 = local_8;
  pHVar3 = FUN_0042bcdc();
  puVar2[1] = pHVar3;
  cVar1 = FUN_0042bca8(param_1,(int)pHVar3,&local_c);
  if (cVar1 == '\0') {
    FUN_00410104(param_1,(int)puVar2);
  }
  else {
    FUN_0041032c(param_1,local_c,(int)puVar2);
  }
  return;
}


/* ==== 0042bd60 TSiteList.virtual_008 ==== */

void TSiteList_virtual_008(int *param_1)

{
  int iVar1;
  int i_val;
  int j;
  
  i_val = param_1[2];
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_004102b0(param_1,j);
      FUN_00402794(iVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  TList_virtual_008(param_1);
  return;
}


/* ==== 0042bd94 FUN_0042bd94 ==== */

int FUN_0042bd94(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  HWND pHVar3;
  int iVar4;
  int local_10;
  
  iVar4 = 0;
  if (param_1[2] != 0) {
    local_10 = param_3;
    if (param_1[2] == 1) {
      piVar2 = (int *)FUN_004102b0(param_1,0);
      iVar4 = *piVar2;
    }
    else {
      pHVar3 = GetDesktopWindow();
      pHVar3 = GetTopWindow(pHVar3);
      while ((iVar4 == 0 && (pHVar3 != (HWND)0x0))) {
        cVar1 = FUN_0042bca8(param_1,(int)pHVar3,&local_10);
        if (cVar1 == '\0') {
          pHVar3 = GetWindow(pHVar3,2);
        }
        else {
          iVar4 = **(int **)(param_1[1] + local_10 * 4);
        }
      }
    }
  }
  return iVar4;
}


/* ==== 0042bdf8 TDragObject.virtual_00c ==== */

void TDragObject_virtual_00c(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  return;
}


/* ==== 0042be38 FUN_0042be38 ==== */

HWND FUN_0042be38(void)

{
  HWND hWnd;
  
  hWnd = FUN_0044463c();
  SetCapture(hWnd);
  return hWnd;
}


/* ==== 0042be50 TDragObject.virtual_000 ==== */

void TDragObject_virtual_000(void)

{
  return;
}


/* ==== 0042be58 TDragObject.virtual_010 ==== */

void TDragObject_virtual_010(int *param_1,int *param_2)

{
  byte abStack_108 [256];
  
  FUN_00402ee4(*param_1,abStack_108);
  FUN_00403e80(param_2,abStack_108);
  return;
}


/* ==== 0042be80 FUN_0042be80 ==== */

void FUN_0042be80(undefined4 param_1,HWND wnd)

{
  ReleaseCapture();
  FUN_004446f0(wnd);
  return;
}


/* ==== 0042bf84 TDragObject.virtual_008 ==== */

undefined4 TDragObject_virtual_008(void)

{
  return 0;
}


/* ==== 0042bf88 TDragObject.virtual_004 ==== */

undefined2 TDragObject_virtual_004(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0xfff3;
  }
  else {
    uVar1 = 0xfff4;
  }
  return uVar1;
}


/* ==== 0042bfa0 TDragObject.virtual_014 ==== */

void TDragObject_virtual_014(void)

{
  return;
}


/* ==== 0042bfa4 TDragObject.virtual_018 ==== */

undefined4 TDragObject_virtual_018(void)

{
  return DAT_004ac4dc;
}


/* ==== 0042bfac TDragObject.virtual_01c ==== */

void TDragObject_virtual_01c(void)

{
  return;
}


/* ==== 0042bfb0 TBaseDragControlObject.virtual_024 ==== */

void TBaseDragControlObject_virtual_024(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffff0,in_stack_fffffff4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[0xe] = param_3;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


/* ==== 0042bfd4 TBaseDragControlObject.virtual_00c ==== */

void TBaseDragControlObject_virtual_00c(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TDragObject_virtual_00c(param_1,(int)param_2);
  uVar1 = FUN_00403114(param_2,(int)&PTR_TBaseDragControlObject_virtual_000_00429b10);
  if ((char)uVar1 != '\0') {
    *(int *)(param_1 + 0x38) = param_2[0xe];
  }
  return;
}


/* ==== 0042c000 TBaseDragControlObject.virtual_020 ==== */

void TBaseDragControlObject_virtual_020(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x38),param_2,param_3);
  return;
}


/* ==== 0042c024 TBaseDragControlObject.virtual_000 ==== */

void TBaseDragControlObject_virtual_000
               (int *param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  if (param_4 == '\0') {
    FUN_00403178((int *)param_1[0xe],param_2,param_3);
    param_2 = 0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_5);
  return;
}


/* ==== 0042c058 TDragControlObject.virtual_004 ==== */

undefined2 TDragControlObject_virtual_004(int param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0xfff3;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x38) + 0x6a);
  }
  return uVar1;
}


/* ==== 0042c070 TDragControlObject.virtual_008 ==== */

void TDragControlObject_virtual_008(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
  return;
}


/* ==== 0042c07c TDragControlObject.virtual_014 ==== */

void TDragControlObject_virtual_014(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
    FUN_00436328(iVar1);
  }
  return;
}


/* ==== 0042c09c TDragControlObject.virtual_01c ==== */

void TDragControlObject_virtual_01c(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
    FUN_00436310(iVar1);
  }
  return;
}


/* ==== 0042c0bc TDragDockObject.virtual_024 ==== */

int * TDragDockObject_virtual_024(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TBaseDragControlObject_virtual_024(param_1,'\0',param_3);
  piVar1 = FUN_00418838((int *)&PTR_TPersistent_virtual_000_00416cfc,'\x01',extraout_ECX_00);
  param_1[0x10] = (int)piVar1;
  uVar2 = FUN_0041fb50(0,0xffffff);
  FUN_004189b8(piVar1,uVar2);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0042c120 TDragDockObject.Destroy ==== */

void TDragDockObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x10]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0042c150 TDragDockObject.virtual_00c ==== */

void TDragDockObject_virtual_00c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int i_val;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  
  bVar4 = 0;
  TBaseDragControlObject_virtual_00c(param_1,param_2);
  uVar1 = FUN_00403114(param_2,(int)&LAB_00429c24);
  if ((char)uVar1 != '\0') {
    *(char *)(param_1 + 0x54) = (char)param_2[0x15];
    *(int *)(param_1 + 0x58) = param_2[0x16];
    *(char *)(param_1 + 0x6c) = (char)param_2[0x1b];
    piVar2 = param_2 + 0x11;
    piVar3 = (int *)(param_1 + 0x44);
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    piVar2 = param_2 + 0x17;
    piVar3 = (int *)(param_1 + 0x5c);
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40),param_2[0x10]);
  }
  return;
}


/* ==== 0042c1b4 TDragDockObject.virtual_020 ==== */

void TDragDockObject_virtual_020(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x38),param_2,param_3);
  return;
}


/* ==== 0042c1d4 FUN_0042c1d4 ==== */

uint FUN_0042c1d4(uint param_1,uint param_2)

{
  if ((int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) <
      (int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f))) {
    return param_1;
  }
  return param_2;
}


/* ==== 0042c1f8 TDragDockObject.virtual_028 ==== */

void TDragDockObject_virtual_028(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int i_val;
  int *piVar3;
  int local_1c [4];
  
  piVar3 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  i_val = *(int *)(param_1 + 0xc);
  if ((i_val < local_1c[0]) || (local_1c[2] < i_val)) {
    uVar1 = FUN_0042c1d4(local_1c[0] - i_val,local_1c[2] - i_val);
  }
  else {
    uVar1 = 0;
  }
  i_val = *(int *)(param_1 + 0x10);
  if ((i_val < local_1c[1]) || (local_1c[3] < i_val)) {
    uVar2 = FUN_0042c1d4(local_1c[1] - i_val,local_1c[3] - i_val);
  }
  else {
    uVar2 = 0;
  }
  if ((uVar1 != 0) || (uVar2 != 0)) {
    OffsetRect((LPRECT)(param_1 + 0x44),-uVar1,-uVar2);
  }
  return;
}


/* ==== 0042c278 TDragDockObject.virtual_02c ==== */

void TDragDockObject_virtual_02c(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x38),param_1,param_3);
  return;
}


/* ==== 0042c28c TDragDockObject.virtual_030 ==== */

void TDragDockObject_virtual_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x38),param_1,param_3);
  return;
}


/* ==== 0042c2a0 TDragDockObject.virtual_004 ==== */

undefined4 TDragDockObject_virtual_004(void)

{
  return 0;
}


/* ==== 0042c2ac TDragDockObject.virtual_034 ==== */

undefined4 TDragDockObject_virtual_034(void)

{
  return 4;
}


/* ==== 0042c320 FUN_0042c320 ==== */

undefined1 FUN_0042c320(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND pHVar1;
  int *param;
  DWORD dwThreadId;
  undefined4 uVar2;
  BOOL BVar3;
  int *piVar4;
  WNDENUMPROC lpfn;
  RECT local_40;
  tagRECT local_30;
  int local_20;
  HWND local_1c;
  HWND wnd;
  undefined4 local_14;
  undefined4 local_10;
  char local_c;
  undefined1 local_5;
  
  local_5 = 1;
  wnd = FUN_0042c724((POINT *)(param_4 + -0xc));
  pHVar1 = GetWindow(wnd,4);
  if (pHVar1 != *(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24)) {
    param = FUN_0042b94c(wnd);
    if (param == (int *)0x0) {
      return local_5;
    }
    do {
      piVar4 = param;
      param = (int *)piVar4[9];
    } while (param != (int *)0x0);
    wnd = (HWND)FUN_004349e0(piVar4);
  }
  param = param_1;
  if (wnd != (HWND)0x0) {
    do {
      piVar4 = param;
      param = (int *)piVar4[9];
    } while (param != (int *)0x0);
    local_1c = (HWND)FUN_004349e0(piVar4);
    if (local_1c != wnd) {
      param = *(int **)(*(int *)(param_4 + -0x10) + 0x24);
      if (param == (int *)0x0) {
        uVar2 = FUN_00403114(*(int **)(param_4 + -0x10),(int)&PTR_TWinControl_virtual_000_0042ac0c);
        if ((char)uVar2 == '\0') {
          local_20 = 0;
        }
        else {
          local_20 = FUN_004349e0(*(int **)(param_4 + -0x10));
        }
      }
      else {
        do {
          piVar4 = param;
          param = (int *)piVar4[9];
        } while (param != (int *)0x0);
        local_20 = FUN_004349e0(piVar4);
      }
      local_c = '\0';
      local_14 = *(undefined4 *)(param_4 + -0xc);
      local_10 = *(undefined4 *)(param_4 + -8);
      param = &local_20;
      lpfn = (WNDENUMPROC)&LAB_0042c2b4;
      dwThreadId = GetCurrentThreadId();
      EnumThreadWindows(dwThreadId,lpfn,(LPARAM)param);
      if (local_c != '\0') {
        GetWindowRect(wnd,&local_30);
        FUN_00403178(param_1,*(undefined4 *)(param_4 + -0x10),&local_40);
        uVar2 = FUN_00403114(DAT_004ac760,(int)&LAB_00429c24);
        if (((((char)uVar2 == '\0') || (*(int *)(DAT_004ac760[0xe] + 0x90) == 0)) ||
            (pHVar1 = (HWND)FUN_004349e0(*(int **)(DAT_004ac760[0xe] + 0x90)), pHVar1 != wnd)) &&
           (BVar3 = IntersectRect(&local_30,&local_30,&local_40), BVar3 != 0)) {
          local_5 = 0;
        }
      }
    }
  }
  return local_5;
}


/* ==== 0042c4b8 FUN_0042c4b8 ==== */

bool FUN_0042c4b8(void)

{
  undefined4 uVar1;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_00403114(*(int **)(in_stack_00000004 + -0x10),
                       (int)&PTR_TWinControl_virtual_000_0042ac0c);
  if ((char)uVar1 != '\0') {
    hWnd = (HWND)FUN_004349e0(*(int **)(in_stack_00000004 + -0x14));
    hWndParent = (HWND)FUN_004349e0(*(int **)(in_stack_00000004 + -0x10));
    BVar2 = IsChild(hWndParent,hWnd);
    return BVar2 != 0;
  }
  return false;
}


/* ==== 0042c4fc FUN_0042c4fc ==== */

int * FUN_0042c4fc(LONG *param_1,int *param_2)

{
  POINT pt;
  char cVar1;
  bool bVar2;
  ushort key_state;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  undefined1 *puVar5;
  undefined1 *extraout_ECX_07;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 uVar6;
  undefined4 extraout_EDX_08;
  int i_val;
  int j;
  RECT local_2c;
  int *local_1c;
  int *local_18;
  int *local_14;
  LONG local_10;
  LONG local_c;
  char local_5;
  
  local_10 = *param_1;
  local_c = param_1[1];
  local_1c = (int *)0x0;
  local_14 = param_2;
  key_state = GetKeyState(0x11);
  if ((key_state & 0x8000) == 0 && DAT_004ac784 != (undefined4 *)0x0) {
    (**(code **)(*DAT_004ac788 + 8))();
    i_val = DAT_004ac784[2];
    puVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (-1 < i_val + -1) {
      j = 0;
      do {
        local_18 = (int *)FUN_004102b0(DAT_004ac784,j);
        puVar5 = extraout_ECX_00;
        uVar6 = extraout_EDX_00;
        if ((local_18 != local_14) && ((char)local_18[0x5a] != '\0')) {
          cVar1 = (**(code **)(*local_18 + 0x4c))();
          puVar5 = extraout_ECX_01;
          uVar6 = extraout_EDX_01;
          if (cVar1 != '\0') {
            hWnd = (HWND)FUN_004349e0(local_18);
            BVar3 = IsWindowVisible(hWnd);
            puVar5 = extraout_ECX_02;
            uVar6 = extraout_EDX_02;
            if (BVar3 != 0) {
              puVar5 = &stack0xfffffffc;
              bVar2 = FUN_0042c4b8();
              uVar6 = extraout_EDX_03;
              if (!bVar2) {
                if ((int *)local_14[0x24] == local_18) {
                  iVar4 = FUN_00433334((int)local_18);
                  puVar5 = extraout_ECX_03;
                  uVar6 = extraout_EDX_04;
                  if (iVar4 < 2) goto LAB_0042c603;
                }
                local_5 = '\x01';
                FUN_00403178(local_18,local_14,&local_2c);
                puVar5 = extraout_ECX_04;
                uVar6 = extraout_EDX_05;
                if (local_5 != '\0') {
                  pt.y = local_c;
                  pt.x = local_10;
                  BVar3 = PtInRect(&local_2c,pt);
                  puVar5 = extraout_ECX_05;
                  uVar6 = extraout_EDX_06;
                  if (BVar3 != 0) {
                    FUN_0042bd04(DAT_004ac788,local_18);
                    puVar5 = extraout_ECX_06;
                    uVar6 = extraout_EDX_07;
                  }
                }
              }
            }
          }
        }
LAB_0042c603:
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    if (0 < DAT_004ac788[2]) {
      local_1c = (int *)FUN_0042bd94(DAT_004ac788,uVar6,(int)puVar5);
      puVar5 = extraout_ECX_07;
      uVar6 = extraout_EDX_08;
    }
    if (local_1c != (int *)0x0) {
      cVar1 = FUN_0042c320(local_1c,uVar6,puVar5,(int)&stack0xfffffffc);
      if (cVar1 == '\0') {
        local_1c = (int *)0x0;
      }
    }
  }
  return local_1c;
}


/* ==== 0042c648 FUN_0042c648 ==== */

void FUN_0042c648(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_004ac784 == (int *)0x0) {
      DAT_004ac784 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
    }
    iVar1 = FUN_0041030c((int)DAT_004ac784,param_1);
    if (param_2 == '\0') {
      if (iVar1 != -1) {
        FUN_00410150(DAT_004ac784,iVar1);
      }
    }
    else if (iVar1 == -1) {
      FUN_00410104(DAT_004ac784,param_1);
    }
  }
  return;
}


/* ==== 0042c6a8 FUN_0042c6a8 ==== */

LRESULT FUN_0042c6a8(HWND wnd,uint param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5
                    )

{
  LRESULT LVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  LVar1 = 0;
  if (wnd != (HWND)0x0) {
    local_1c = *param_4;
    local_18 = param_4[1];
    local_10 = param_5;
    local_c = DAT_004ac77c == '\x02';
    local_14 = param_3;
    local_8 = param_3;
    LVar1 = SendMessageA(wnd,0xb02f,param_2 & 0x7f,(LPARAM)&local_1c);
  }
  return LVar1;
}


/* ==== 0042c700 FUN_0042c700 ==== */

undefined4 FUN_0042c700(HWND wnd)

{
  HANDLE prop;
  
  if (wnd != (HWND)0x0) {
    prop = GetPropA(wnd,(LPCSTR)(uint)DAT_004ac758);
    if (prop != (HANDLE)0x0) {
      return CONCAT31((int3)((uint)prop >> 8),1);
    }
  }
  return 0;
}


/* ==== 0042c724 FUN_0042c724 ==== */

HWND FUN_0042c724(POINT *point)

{
  HWND wnd;
  undefined4 uVar1;
  
  wnd = WindowFromPoint(*point);
  while ((wnd != (HWND)0x0 && (uVar1 = FUN_0042c700(wnd), (char)uVar1 == '\0'))) {
    wnd = GetParent(wnd);
  }
  return wnd;
}


/* ==== 0042c750 FUN_0042c750 ==== */

int * FUN_0042c750(POINT *point,int *param_2,char param_3,int *param_4)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_EDX;
  
  if (param_3 == '\0') {
    pHVar1 = FUN_0042c724(point);
    *param_2 = (int)pHVar1;
    piVar2 = (int *)FUN_0042c6a8((HWND)*param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),5),
                                 DAT_004ac760,&point->x,0);
  }
  else {
    piVar2 = FUN_0042c4fc(&point->x,param_4);
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_004349e0(piVar2);
      *param_2 = iVar3;
    }
  }
  return piVar2;
}


/* ==== 0042c7a0 FUN_0042c7a0 ==== */

bool FUN_0042c7a0(uint param_1)

{
  LRESULT LVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(DAT_004ac760 + 4) != 0) {
    LVar1 = FUN_0042c6a8(*(HWND *)(DAT_004ac760 + 8),param_1,DAT_004ac760,
                         (undefined4 *)(DAT_004ac760 + 0xc),*(int *)(DAT_004ac760 + 4));
    bVar2 = LVar1 != 0;
  }
  return bVar2;
}


/* ==== 0042c7dc FUN_0042c7dc ==== */

undefined4 FUN_0042c7dc(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  piVar1 = *(int **)(DAT_004ac760 + 4);
  if ((((piVar1 != (int *)0x0) && ((char)piVar1[0x5f] != '\0')) && (piVar1[0x50] != 0)) &&
     (iVar2 = FUN_004332a0((int)piVar1), iVar2 != 0)) {
    iVar2 = FUN_004332a0((int)piVar1);
    if ((iVar2 == 1) &&
       (iVar2 = FUN_004102b0((undefined4 *)piVar1[0x50],0), iVar2 == *(int *)(DAT_004ac760 + 0x38)))
    {
      return 0;
    }
    piVar3 = FUN_0042d198((POINT *)(DAT_004ac760 + 0xc),0);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      if (piVar1 == piVar3) {
        return 0;
      }
      iVar2 = FUN_0041030c(piVar1[0x50],(int)piVar3);
      if (iVar2 != -1) break;
      piVar3 = (int *)piVar3[9];
    }
    uVar4 = FUN_004332b4((int)piVar1,iVar2);
  }
  return uVar4;
}


/* ==== 0042c870 FUN_0042c870 ==== */

void FUN_0042c870(POINT *point)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  HWND pHVar7;
  HCURSOR pHVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int i_val;
  uint uVar10;
  int *piVar11;
  byte bVar12;
  LONG LVar13;
  int local_1c;
  bool local_18 [4];
  int local_14;
  int local_10;
  
  bVar12 = 0;
  if (((DAT_004ac77c == '\0') &&
      (uVar5 = tagPOINT_004ac76c.x - point->x, uVar10 = (int)uVar5 >> 0x1f,
      (int)((uVar5 ^ uVar10) - uVar10) < DAT_004ac778)) &&
     (uVar5 = tagPOINT_004ac76c.y - point->y, uVar10 = (int)uVar5 >> 0x1f,
     (int)((uVar5 ^ uVar10) - uVar10) < DAT_004ac778)) {
    return;
  }
  piVar6 = FUN_0042c750(point,&local_1c,*(char *)((int)DAT_004ac75c + 0x8b),DAT_004ac75c);
  if ((DAT_004ac77c == '\0') && (DAT_004ac780 != 0)) {
    LVar13 = tagPOINT_004ac76c.y;
    pHVar7 = GetDesktopWindow();
    FUN_004361e4(DAT_004ac780,pHVar7,tagPOINT_004ac76c.x,LVar13);
  }
  cVar1 = DAT_004ac77c;
  local_18[0] = *(char *)((int)DAT_004ac75c + 0x8b) != '\0';
  if (local_18[0]) {
    DAT_004ac77c = '\x02';
  }
  else {
    DAT_004ac77c = '\x01';
  }
  local_18[0] = local_18[0] && cVar1 != '\0';
  if (piVar6 != (int *)DAT_004ac760[1]) {
    FUN_0042c7a0(CONCAT31((int3)((uint)DAT_004ac760 >> 8),1));
    if (DAT_004ac760 == (int *)0x0) {
      return;
    }
    DAT_004ac760[1] = (int)piVar6;
    DAT_004ac760[2] = local_1c;
    piVar11 = DAT_004ac760;
    DAT_004ac760[3] = point->x;
    piVar11[4] = point->y;
    FUN_0042c7a0(0);
    if (DAT_004ac760 == (int *)0x0) {
      return;
    }
  }
  piVar11 = DAT_004ac760;
  DAT_004ac760[3] = point->x;
  piVar11[4] = point->y;
  if (DAT_004ac760[1] != 0) {
    FUN_0042e2d8((int *)DAT_004ac760[1],&point->x,&local_14);
    piVar11 = DAT_004ac760;
    DAT_004ac760[5] = local_14;
    piVar11[6] = local_10;
  }
  LVar13 = point->y;
  bVar2 = FUN_0042c7a0(CONCAT31((int3)((uint)LVar13 >> 8),2));
  sVar4 = (**(code **)(*DAT_004ac760 + 4))(DAT_004ac760,bVar2,point->x,LVar13);
  if (DAT_004ac780 != 0) {
    if ((piVar6 == (int *)0x0) || ((*(byte *)((int)piVar6 + 0x41) & 0x20) != 0)) {
      FUN_004361a0(DAT_004ac780,sVar4);
      if (*(char *)(DAT_004ac780 + 0x62) == '\0') {
        LVar13 = point->y;
        pHVar7 = GetDesktopWindow();
        FUN_004361e4(DAT_004ac780,pHVar7,point->x,LVar13);
      }
      else {
        FUN_004362cc(DAT_004ac780,point->x,point->y);
      }
    }
    else {
      FUN_00436340(DAT_004ac780);
      pHVar8 = (HCURSOR)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)sVar4);
      SetCursor(pHVar8);
    }
  }
  pHVar8 = (HCURSOR)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)sVar4);
  SetCursor(pHVar8);
  if (DAT_004ac77c == '\x02') {
    if (piVar6 == (int *)0x0) {
      FUN_00403178((int *)DAT_004ac760[0xe],DAT_004ac760,point->x);
    }
    else {
      piVar6 = (int *)FUN_0042c7dc();
      DAT_004ac760[0x16] = (int)piVar6;
      if (piVar6 == (int *)0x0) {
        uVar3 = FUN_00403178((int *)DAT_004ac760[1],DAT_004ac760 + 5,extraout_ECX);
        *(undefined1 *)(DAT_004ac760 + 0x15) = uVar3;
      }
      else {
        FUN_0042e2d8(piVar6,&point->x,(int *)local_18);
        uVar3 = FUN_00403178(piVar6,local_18,extraout_ECX_00);
        *(undefined1 *)(DAT_004ac760 + 0x15) = uVar3;
      }
    }
    if ((DAT_004ac760 != (int *)0x0) &&
       (uVar9 = FUN_00408298(DAT_004ac760 + 0x11,DAT_004ac760 + 0x17,0x10), (char)uVar9 == '\0')) {
      if ((char)local_1c != '\0') {
        (**(code **)(*DAT_004ac760 + 0x30))();
      }
      (**(code **)(*DAT_004ac760 + 0x2c))();
      piVar6 = DAT_004ac760 + 0x11;
      piVar11 = DAT_004ac760 + 0x17;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *piVar11 = *piVar6;
        piVar6 = piVar6 + (uint)bVar12 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
      }
    }
  }
  return;
}


/* ==== 0042cb44 FUN_0042cb44 ==== */

void FUN_0042cb44(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  HWND wnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  LONG LVar4;
  
  DAT_004ac760 = param_1;
  param_1[1] = 0;
  GetCursorPos(&tagPOINT_004ac76c);
  piVar2 = DAT_004ac760;
  DAT_004ac760[3] = tagPOINT_004ac76c.x;
  piVar2[4] = tagPOINT_004ac76c.y;
  DAT_004ac774 = GetCursor();
  DAT_004ac768 = FUN_0042be38();
  DAT_004ac778 = param_3;
  uVar3 = FUN_00403114(param_1,(int)&LAB_00429c24);
  if ((char)uVar3 == '\0') {
    if (param_2 == '\0') {
      DAT_004ac77c = '\0';
    }
    else {
      DAT_004ac77c = '\x01';
    }
  }
  else {
    iVar1 = param_1[0x11];
    if (param_1[0x13] == iVar1 || param_1[0x13] - iVar1 < 0) {
      param_1[8] = 0;
      param_1[9] = 0;
    }
    else {
      *(double *)(param_1 + 8) =
           (double)(param_1[3] - iVar1) / (double)(param_1[0x13] - param_1[0x11]);
    }
    if (param_1[0x14] - param_1[0x12] < 1) {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      *(double *)(param_1 + 10) =
           (double)(param_1[4] - param_1[0x12]) / (double)(param_1[0x14] - param_1[0x12]);
    }
    if (param_2 == '\0') {
      DAT_004ac77c = '\0';
    }
    else {
      DAT_004ac77c = '\x02';
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  DAT_004ac780 = (**(code **)(*DAT_004ac760 + 8))();
  uVar3 = extraout_ECX;
  if (DAT_004ac780 != 0) {
    LVar4 = tagPOINT_004ac76c.y;
    wnd = GetDesktopWindow();
    FUN_004361e4(DAT_004ac780,wnd,tagPOINT_004ac76c.x,LVar4);
    uVar3 = extraout_ECX_00;
  }
  DAT_004ac788 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0042bc8c,'\x01',uVar3);
  if (DAT_004ac77c != '\0') {
    FUN_0042c870(&tagPOINT_004ac76c);
  }
  return;
}


/* ==== 0042ccb4 FUN_0042ccb4 ==== */

void FUN_0042ccb4(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  HWND hWnd;
  int i_val;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  LPRECT lpRect;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24 [2];
  int local_1c;
  int local_18;
  tagPOINT point;
  int *local_c;
  char local_5;
  
  bVar4 = 0;
  puStack_34 = &stack0xfffffffc;
  puStack_38 = &LAB_0042ce5e;
  uStack_3c = *in_FS_OFFSET;
  DAT_004ac75c = param_1;
  *in_FS_OFFSET = &uStack_3c;
  local_c = (int *)0x0;
  DAT_004ac764 = 0;
  local_5 = param_2;
  if (*(char *)((int)param_1 + 0x8b) == '\0') {
    puStack_34 = &stack0xfffffffc;
    FUN_00403178(param_1,&local_c,param_3);
    if (DAT_004ac75c == (int *)0x0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == (int *)0x0) {
      local_c = (int *)TBaseDragControlObject_virtual_024
                                 ((int *)&PTR_TBaseDragControlObject_virtual_000_00429b9c,'\x01',
                                  (int)param_1);
      DAT_004ac764 = 1;
    }
  }
  else {
    FUN_00403178(param_1,&local_c,param_3);
    if (DAT_004ac75c == (int *)0x0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == (int *)0x0) {
      local_c = TDragDockObject_virtual_024((int *)&LAB_00429c24,'\x01',(int)param_1);
      DAT_004ac764 = 1;
    }
    piVar2 = (int *)local_c[0xe];
    uVar1 = FUN_00403114(piVar2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
    if ((char)uVar1 == '\0') {
      piVar2 = (int *)local_c[0xe];
      if ((piVar2[9] == 0) &&
         (uVar1 = FUN_00403114(piVar2,(int)&PTR_TWinControl_virtual_000_0042ac0c),
         (char)uVar1 == '\0')) {
        GetCursorPos(&point);
        local_c[0x11] = point.x;
        local_c[0x12] = point.y;
      }
      else {
        FUN_0040f7d0(0,0,local_24);
        FUN_0042e2ac(piVar2,local_24,&local_1c);
        local_c[0x11] = local_1c;
        local_c[0x12] = local_18;
      }
      FUN_0040f7d0(local_c[0x11] + *(int *)(local_c[0xe] + 0x38),
                   local_c[0x12] + *(int *)(local_c[0xe] + 0x3c),&local_1c);
      local_c[0x13] = local_1c;
      local_c[0x14] = local_18;
    }
    else {
      lpRect = (LPRECT)(local_c + 0x11);
      hWnd = (HWND)FUN_004349e0(piVar2);
      GetWindowRect(hWnd,lpRect);
    }
    piVar2 = local_c + 0x11;
    piVar3 = local_c + 0x17;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
  }
  FUN_0042cb44(local_c,local_5,param_3);
  *in_FS_OFFSET = uStack_3c;
  return;
}


/* ==== 0042ce7c FUN_0042ce7c ==== */

undefined1 FUN_0042ce7c(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_stack_00000004;
  
  uVar2 = *(int *)(DAT_004ac760 + 4) != 0;
  if ((*(char *)(in_stack_00000004 + -1) != '\0') && (DAT_004ac77c == '\x02')) {
    cVar1 = (**(code **)(*DAT_004ac75c + 0x50))();
    if ((cVar1 == '\0') && (DAT_004ac75c[0x24] != 0)) {
      if ((int *)DAT_004ac75c[0x24] != (int *)0x0) {
        uVar2 = FUN_00403178((int *)DAT_004ac75c[0x24],*(undefined4 *)(DAT_004ac760 + 4),
                             DAT_004ac75c);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* ==== 0042ceec FUN_0042ceec ==== */

void FUN_0042ceec(char param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  int *piVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  int local_14;
  undefined3 uVar7;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  piVar8 = (int *)0x0;
  if ((DAT_004ac760 == (int *)0x0) || ((char)DAT_004ac760[0xc] != '\0')) {
    return;
  }
  puStack_24 = &LAB_0042d13f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar1 = DAT_004ac760;
  puStack_30 = &LAB_0042d112;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *(undefined1 *)(DAT_004ac760 + 0xc) = 1;
  FUN_0042be80(DAT_004ac760,DAT_004ac768);
  if (DAT_004ac77c == '\x02') {
    piVar8 = (int *)FUN_0040312c(DAT_004ac760,(int)&LAB_00429c24);
    (**(code **)(*piVar8 + 0x30))();
    *(bool *)(piVar8 + 0x1b) = piVar8[1] == 0;
  }
  if (DAT_004ac760[1] == 0) {
LAB_0042cfbb:
    local_18 = DAT_004ac760[3];
    local_14 = DAT_004ac760[4];
  }
  else {
    uVar4 = FUN_00403114((int *)DAT_004ac760[1],(int)&PTR_TControl_virtual_000_0042a694);
    if ((char)uVar4 == '\0') goto LAB_0042cfbb;
    local_18 = DAT_004ac760[5];
    local_14 = DAT_004ac760[6];
  }
  cVar2 = FUN_0042ce7c();
  if (cVar2 != '\0') {
    if ((DAT_004ac77c == '\x02') && ((char)piVar8[0x1b] != '\0')) {
LAB_0042cffa:
      if (param_1 != '\0') {
        cVar2 = '\x01';
        goto LAB_0042d006;
      }
    }
    else if (DAT_004ac77c != '\0') {
      bVar3 = FUN_0042c7a0(CONCAT31(extraout_var,1));
      if (bVar3) goto LAB_0042cffa;
    }
  }
  cVar2 = '\0';
LAB_0042d006:
  if (DAT_004ac77c == '\x02') {
    if ((cVar2 != '\0') && ((char)piVar8[0x1b] != '\0')) {
      piVar5 = FUN_00444864((int *)piVar8[0xe]);
      if ((piVar5 != (int *)0x0) && (piVar5[0x82] == piVar8[0xe])) {
        TForm_SetActiveControl(piVar5,(int *)0x0,extraout_ECX);
      }
      FUN_0042f720(DAT_004ac75c,0xb03a,0,DAT_004ac760);
    }
  }
  else if (DAT_004ac780 == 0) {
    SetCursor(DAT_004ac774);
  }
  else {
    FUN_00436340(DAT_004ac780);
  }
  DAT_004ac75c = 0;
  DAT_004ac760 = (int *)0x0;
  if (piVar1[1] != 0) {
    uVar7 = (undefined3)((uint)piVar1 >> 8);
    uVar6 = CONCAT31(uVar7,3);
    if (cVar2 == '\0') {
      uVar6 = CONCAT31(uVar7,4);
      piVar1[3] = 0;
      piVar1[4] = 0;
      local_18 = 0;
      local_14 = 0;
    }
    FUN_0042c6a8((HWND)piVar1[2],uVar6,piVar1,piVar1 + 3,piVar1[1]);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0042d119;
  puStack_30 = (undefined1 *)0x42d0e4;
  FUN_00402f9c(DAT_004ac788);
  DAT_004ac788 = (int *)0x0;
  *(undefined1 *)(piVar1 + 0xc) = 0;
  puStack_30 = (undefined1 *)local_14;
  uStack_34 = CONCAT31((int3)((uint)local_14 >> 8),cVar2);
  (**(code **)*piVar1)(piVar1,piVar1[1],local_18);
  DAT_004ac760 = (int *)0x0;
  return;
}


/* ==== 0042d14c FUN_0042d14c ==== */

void FUN_0042d14c(void)

{
  if (DAT_004ac760 != 0) {
    FUN_0042ceec('\0');
  }
  DAT_004ac75c = 0;
  return;
}


/* ==== 0042d164 FUN_0042d164 ==== */

HANDLE FUN_0042d164(POINT *point)

{
  HWND wnd;
  HANDLE pvVar1;
  
  wnd = WindowFromPoint(*point);
  pvVar1 = (HANDLE)0x0;
  while ((wnd != (HWND)0x0 && (pvVar1 = FUN_0042b94c(wnd), pvVar1 == (HANDLE)0x0))) {
    wnd = GetParent(wnd);
  }
  return pvVar1;
}


/* ==== 0042d198 FUN_0042d198 ==== */

int * FUN_0042d198(POINT *point,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int local_18 [2];
  
  piVar1 = FUN_0042d164(point);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    cVar4 = '\0';
    FUN_0042e2d8(piVar1,&point->x,local_18);
    piVar2 = (int *)FUN_004320c4((int)piVar1,local_18,param_2,cVar4);
    piVar3 = piVar1;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2;
    }
  }
  return piVar3;
}


/* ==== 0042d1e0 FUN_0042d1e0 ==== */

void FUN_0042d1e0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
    *param_1 = iVar1;
  }
  FUN_00410104((int *)*param_1,param_2);
  return;
}


/* ==== 0042d208 FUN_0042d208 ==== */

void FUN_0042d208(int *param_1,int param_2)

{
  FUN_00410448((int *)*param_1,param_2);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00402f9c((int *)*param_1);
    *param_1 = 0;
  }
  return;
}


/* ==== 0042d228 FUN_0042d228 ==== */

void FUN_0042d228(HDC hdc_val,int param_2,int param_3)

{
  tagPOINT point;
  
  GetWindowOrgEx(hdc_val,&point);
  SetWindowOrgEx(hdc_val,point.x - param_2,point.y - param_3,(LPPOINT)0x0);
  return;
}


/* ==== 0042d258 FUN_0042d258 ==== */

void FUN_0042d258(void)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_14;
  int i_val;
  undefined4 *local_c;
  int j;
  
  puStack_18 = (undefined1 *)0x42d268;
  local_c = (undefined4 *)FUN_00410750(DAT_004ac78c);
  puStack_1c = &LAB_0042d308;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (-1 < local_c[2] + -1) {
    j = 0;
    puStack_18 = &stack0xfffffffc;
    i_val = local_c[2];
    do {
      puStack_24 = (undefined1 *)0x42d29a;
      local_14 = (int *)FUN_004102b0(local_c,j);
      puStack_24 = (undefined1 *)0x42d2a5;
      cVar1 = FUN_00419374((int)local_14);
      if (cVar1 != '\0') {
        puStack_28 = &LAB_0042d2e1;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        FUN_0042d494(local_14);
        FUN_00403794();
        puStack_24 = (undefined1 *)0x42d2c9;
        FUN_00403794();
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x42d30f;
  puStack_1c = (undefined1 *)0x42d307;
  FUN_004107b4(DAT_004ac78c);
  return;
}


/* ==== 0042d314 FUN_0042d314 ==== */

void FUN_0042d314(void)

{
  int iVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  undefined4 *local_c;
  int i_val;
  
  puStack_14 = (undefined1 *)0x42d324;
  local_c = (undefined4 *)FUN_00410750(DAT_004ac78c);
  puStack_18 = &LAB_0042d3b2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      i_val = iVar1;
      puStack_20 = (undefined1 *)0x42d34f;
      local_10 = (int *)FUN_004102b0(local_c,i_val);
      puStack_20 = (undefined1 *)0x42d35a;
      cVar2 = FUN_00419374((int)local_10);
      if (cVar2 != '\0') {
        puStack_24 = &LAB_0042d38a;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_0042d494(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x42d391;
        puStack_24 = (undefined1 *)0x42d389;
        FUN_004193d0((int)local_10);
        return;
      }
      i_val = i_val + -1;
      iVar1 = i_val;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042d3b9;
  puStack_18 = (undefined1 *)0x42d3b1;
  FUN_004107b4(DAT_004ac78c);
  return;
}


/* ==== 0042d3c0 TControlCanvas.Destroy ==== */

void TControlCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0042d494(piVar1);
  TCanvas_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0042d3ec TControlCanvas.virtual_014 ==== */

void TControlCanvas_virtual_014(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0x16] == 0) {
    puStack_10 = (undefined1 *)0x42d405;
    TCanvas_virtual_014();
  }
  else {
    if (param_1[0x17] == 0) {
      puStack_10 = (undefined1 *)0x42d41d;
      piVar1 = (int *)FUN_00410750(DAT_004ac78c);
      puStack_14 = &LAB_0042d471;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      if (3 < piVar1[2]) {
        puStack_10 = &stack0xfffffffc;
        FUN_0042d258();
      }
      iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],param_1 + 0x18);
      param_1[0x17] = iVar2;
      FUN_00410104(piVar1,(int)param_1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x42d478;
      puStack_14 = (undefined1 *)0x42d470;
      FUN_004107b4(DAT_004ac78c);
      return;
    }
    puStack_10 = (undefined1 *)0x42d486;
    FUN_00419558(param_1,param_1[0x17]);
    puStack_10 = (undefined1 *)0x42d48e;
    FUN_0042d4e0((int)param_1);
  }
  return;
}


/* ==== 0042d494 FUN_0042d494 ==== */

void FUN_0042d494(int *param_1)

{
  if (param_1[0x17] != 0) {
    FUN_00419558(param_1,0);
    FUN_00410764(DAT_004ac78c,(int)param_1);
    ReleaseDC((HWND)param_1[0x18],(HDC)param_1[0x17]);
    param_1[0x17] = 0;
  }
  return;
}


/* ==== 0042d4c8 FUN_0042d4c8 ==== */

void FUN_0042d4c8(int *param_1,int param_2)

{
  if (param_2 != param_1[0x16]) {
    FUN_0042d494(param_1);
    param_1[0x16] = param_2;
  }
  return;
}


/* ==== 0042d4e0 FUN_0042d4e0 ==== */

void FUN_0042d4e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = FUN_0042ed5c(*(int *)(param_1 + 0x58));
    if ((char)uVar1 == '\0') {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
    }
  }
  return;
}


/* ==== 0042d50c TSizeConstraints.virtual_00c ==== */

int * TSizeConstraints_virtual_00c(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  param_1[1] = param_3;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0042d548 TSizeConstraints.virtual_000 ==== */

void TSizeConstraints_virtual_000(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  uVar2 = FUN_00403114(param_2,(int)&PTR_TSizeConstraints_virtual_000_00429f14);
  if ((char)uVar2 != '\0') {
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    iVar1 = param_1[2];
    param_2[2] = iVar1;
    FUN_00403178(param_2,iVar1,extraout_ECX);
    return;
  }
  TPersistent_virtual_000(param_1,param_2);
  return;
}


/* ==== 0042d594 TSizeConstraints.SetMaxHeight ==== */

void TSizeConstraints_SetMaxHeight(int *param_1,int param_2,uint param_3)

{
  if (param_2 == 0) {
    if (param_3 != param_1[2]) {
      param_1[2] = param_3;
      if ((param_3 != 0) && (param_3 < (uint)param_1[4])) {
        param_1[4] = param_3;
      }
      FUN_00403178(param_1,0xffffffff,param_3);
      return;
    }
  }
  else if (param_2 == 1) {
    if (param_3 != param_1[3]) {
      param_1[3] = param_3;
      if ((param_3 != 0) && (param_3 < (uint)param_1[5])) {
        param_1[5] = param_3;
      }
      FUN_00403178(param_1,0,param_3);
      return;
    }
  }
  else if (param_2 == 2) {
    if (param_3 != param_1[4]) {
      param_1[4] = param_3;
      if ((param_1[2] != 0) && ((uint)param_1[2] < param_3)) {
        param_1[2] = param_3;
      }
      FUN_00403178(param_1,0,param_3);
      return;
    }
  }
  else if ((param_2 == 3) && (param_3 != param_1[5])) {
    param_1[5] = param_3;
    if ((param_1[3] != 0) && ((uint)param_1[3] < param_3)) {
      param_1[3] = param_3;
    }
    FUN_00403178(param_1,0,param_3);
  }
  return;
}


/* ==== 0042d63c TSizeConstraints.dynamic_fffd ==== */

void TSizeConstraints_dynamic_fffd(int param_1)

{
  if (*(short *)(param_1 + 0x1a) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_1);
  }
  return;
}


/* ==== 0042d650 TControlActionLink.virtual_000 ==== */

void TControlActionLink_virtual_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040312c(param_2,(int)&PTR_TControl_virtual_000_0042a694);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}


/* ==== 0042d66c TControlActionLink.virtual_060 ==== */

void TControlActionLink_virtual_060(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_20;
  int local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  puStack_30 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_20 = 0;
  puStack_34 = &LAB_0042d733;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_5 = 1;
  uVar2 = FUN_00403114(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_00403178(*(int **)(param_1 + 0x10),param_2,extraout_ECX);
    if ((((cVar1 != '\0') && (*(char *)(*(int *)PTR_DAT_004ab8ac + 0x6c) != '\0')) &&
        (*(short *)(*(int *)(param_1 + 0x10) + 0x68) != 0)) && (*param_2 != 0)) {
      ppuVar3 = &local_c;
      local_1c = *param_2;
      local_18 = 0xb;
      FUN_0043c90c(*(ushort *)(*(int *)(param_1 + 0x10) + 0x68),&local_20);
      local_14 = local_20;
      local_10 = 0xb;
      FUN_00409254((byte *)"%s (%s)",&local_1c,1,(int *)ppuVar3);
      FUN_00403cb0(param_2,local_c);
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0042d73a;
  puStack_34 = (undefined1 *)0x42d72a;
  FUN_00403c5c(&local_20);
  puStack_34 = (undefined1 *)0x42d732;
  FUN_00403c5c((int *)&local_c);
  return;
}


/* ==== 0042d754 TControlActionLink.virtual_020 ==== */

void TControlActionLink_virtual_020(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_14 = &LAB_0042d7bb;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = TActionLink_virtual_020(param_1);
  if (cVar2 != '\0') {
    TGroupBox_GetCaption(*(int *)(param_1 + 0x18),(int *)&local_8);
    puVar1 = local_8;
    iVar3 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    FUN_00403fec(puVar1,*(uint **)(iVar3 + 0x54));
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0042d7c2;
  puStack_14 = (undefined1 *)0x42d7ba;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0042d7c8 TControlActionLink.virtual_028 ==== */

undefined4 TControlActionLink_virtual_028(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_028(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))();
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (cVar1 == *(char *)(iVar2 + 0x59)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0042d7fc TControlActionLink.virtual_030 ==== */

undefined4 TControlActionLink_virtual_030(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  
  cVar1 = TActionLink_virtual_030(param_1);
  uVar4 = cVar1 == '\0';
  if (!(bool)uVar4) {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    puVar3 = FUN_00403fec(*(uint **)(*(int *)(param_1 + 0x18) + 0x70),*(uint **)(iVar2 + 0x60));
    if ((bool)uVar4) {
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0042d830 TControlActionLink.virtual_03c ==== */

undefined4 TControlActionLink_virtual_03c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_03c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (*(char *)(iVar2 + 0x6a) == *(char *)(*(int *)(param_1 + 0x18) + 0x47)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0042d860 TControlActionLink.virtual_008 ==== */

undefined4 TControlActionLink_virtual_008(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = TBasicActionLink_virtual_008();
  if ((cVar2 != '\0') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x108),
     iVar1 == *(int *)(*(int *)(param_1 + 0x10) + 0x30))) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0042d888 TControlActionLink.virtual_040 ==== */

void TControlActionLink_virtual_040(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    TGroupBox_SetCaption(param_1[6],param_2);
  }
  return;
}


/* ==== 0042d8a8 TControlActionLink.virtual_048 ==== */

void TControlActionLink_virtual_048(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[6] + 0x5c))((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 0042d8c8 TControlActionLink.virtual_050 ==== */

void TControlActionLink_virtual_050(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403cb0((int *)(param_1[6] + 0x70),param_2);
  }
  return;
}


/* ==== 0042d8ec TControlActionLink.virtual_05c ==== */

void TControlActionLink_virtual_05c(int *param_1,uint param_2)

{
  char cVar1;
  undefined4 extraout_ECX;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    TGroupBox_SetVisible((int *)param_1[6],param_2,extraout_ECX);
  }
  return;
}


/* ==== 0042d90c TControlActionLink.virtual_010 ==== */

void TControlActionLink_virtual_010
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 != '\0') {
    iVar1 = param_1[6];
    *(undefined4 *)(iVar1 + 0x108) = param_4;
    *(undefined4 *)(iVar1 + 0x10c) = param_5;
  }
  return;
}


/* ==== 0042d938 TControl.virtual_02c ==== */

int * TControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  param_1[0xb] = (int)param_1;
  param_1[10] = *(int *)(*param_1 + 0x6c);
  param_1[0x10] = 0xaa;
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_00);
  param_1[0x16] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_0042e7e4;
  *(undefined1 *)((int)param_1 + 0x51) = 3;
  piVar1 = TSizeConstraints_virtual_00c
                     ((int *)&PTR_TSizeConstraints_virtual_000_00429f14,'\x01',(int)param_1);
  param_1[0x19] = (int)piVar1;
  piVar1[7] = (int)param_1;
  piVar1[6] = (int)&LAB_0042f540;
  param_1[0x18] = -0x7ffffffb;
  *(undefined1 *)((int)param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x8a) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)((int)param_1 + 0x6a) = 0xfff4;
  param_1[0x29] = (int)&PTR_TWinControl_virtual_000_00443c6c;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0042da08 TControl.Destroy ==== */

void TControl_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  undefined4 auStack_18 [4];
  
  piVar2 = FUN_004032fc(param_1,param_2);
  FUN_0044c2e0(*(int *)PTR_DAT_004ab8ac,(int)piVar2);
  iVar1 = piVar2[0x24];
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x20) & 8) != 0)) {
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
  }
  else {
    FUN_0042f720(iVar1,0xb039,0,piVar2);
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
    FUN_0042e13c((int)piVar2,auStack_18);
    FUN_00403178(piVar2,0xffffffff,auStack_18);
    piVar2[0x24] = 0;
  }
  FUN_00402f9c((int *)piVar2[0x17]);
  piVar2[0x17] = 0;
  FUN_00402f9c((int *)piVar2[0x19]);
  FUN_00402f9c((int *)piVar2[0x16]);
  FUN_00408d6c(piVar2[0x15]);
  TComponent_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar2);
  }
  return;
}


/* ==== 0042dac0 TControl.virtual_048 ==== */

undefined4 TControl_virtual_048(void)

{
  return 0;
}


/* ==== 0042dac4 TControl.virtual_04c ==== */

undefined1 TControl_virtual_04c(int param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}


/* ==== 0042dac8 TControl.dynamic_ffdc ==== */

undefined4 TControl_dynamic_ffdc(void)

{
  return 0;
}


/* ==== 0042dacc TControl.dynamic_fff2 ==== */

bool TControl_dynamic_fff2(int param_1)

{
  return *(int *)(param_1 + 0x24) != 0;
}


/* ==== 0042dad4 TControl.dynamic_fff3 ==== */

undefined4 TControl_dynamic_fff3(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


/* ==== 0042dad8 TControl.dynamic_fff9 ==== */

void TControl_dynamic_fff9(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (int *)param_1[9]) {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
    if ((char)uVar1 != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1,param_2);
    }
  }
  return;
}


/* ==== 0042db00 TControl.dynamic_ffd6 ==== */

undefined1 TControl_dynamic_ffd6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  HPALETTE pHVar1;
  HDC hdc;
  UINT UVar2;
  undefined1 local_13;
  HWND pHStack_10;
  
  local_13 = 0;
  if (*(char *)((int)param_1 + 0x47) != '\0') {
    pHVar1 = (HPALETTE)FUN_00403178(param_1,param_2,param_3);
    if (pHVar1 != (HPALETTE)0x0) {
      hdc = (HDC)(**(code **)(*param_1 + 0x44))(param_1,&pHStack_10);
      pHVar1 = SelectPalette(hdc,pHVar1,-(uint)((char)param_2 != '\x01'));
      UVar2 = RealizePalette(hdc);
      if (UVar2 != 0) {
        (**(code **)(*param_1 + 0x74))();
      }
      SelectPalette(hdc,pHVar1,-1);
      ReleaseDC(pHStack_10,hdc);
      local_13 = 1;
    }
  }
  return local_13;
}


/* ==== 0042dc28 FUN_0042dc28 ==== */

bool FUN_0042dc28(int param_1)

{
  return (&DAT_004aa700)[*(byte *)(param_1 + 0x4b)] != *(char *)(param_1 + 0x51);
}


/* ==== 0042dc40 TControl.virtual_058 ==== */

void TControl_virtual_058(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x4d) = param_2;
  return;
}


/* ==== 0042dc44 TControl.dynamic_ffd5 ==== */

void TControl_dynamic_ffd5(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    FUN_00431290(*(int **)(param_1 + 0x24),param_1);
  }
  return;
}


/* ==== 0042dc54 TControl.dynamic_ffd4 ==== */

void TControl_dynamic_ffd4(int param_1)

{
  if (*(short *)(param_1 + 0xe2) != 0) {
    (**(code **)(param_1 + 0xe0))(*(undefined4 *)(param_1 + 0xe4),param_1);
  }
  return;
}


/* ==== 0042dc74 TControl.virtual_014 ==== */

void TControl_virtual_014(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar3;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 8;
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_virtual_000_0042ac0c);
  uVar3 = extraout_ECX;
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,piVar1);
    uVar3 = extraout_ECX_00;
  }
  TComponent_virtual_014(param_1,param_2,uVar3);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfff7;
  if (param_1[9] != 0) {
    FUN_0042f720((int)param_1,0xb009,0,0);
    FUN_0042f720((int)param_1,0xb008,0,0);
    FUN_0042f720((int)param_1,0xb023,0,0);
    FUN_0042f720((int)param_1,0xb035,0,0);
    FUN_0042f720((int)param_1,0xb03d,0,0);
  }
  return;
}


/* ==== 0042dd08 TControl.virtual_010 ==== */

void TControl_virtual_010(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  TComponent_virtual_010((int)param_1,param_2,param_3);
  if (param_3 == '\x01') {
    if (param_2 == param_1[0x1b]) {
      TGroupBox_SetPopupMenu(param_1,(int *)0x0);
    }
    else {
      iVar1 = TButton_GetAction((int)param_1);
      if (param_2 == iVar1) {
        TButton_SetAction(param_1,0,extraout_ECX);
      }
    }
  }
  return;
}


/* ==== 0042dde0 TControl.virtual_07c ==== */

void TControl_virtual_07c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  cVar1 = FUN_0042fbf4(param_1,&param_5,&param_4);
  if ((cVar1 != '\0') &&
     ((((param_2 != param_1[0xc] || (param_3 != param_1[0xd])) || (param_5 != param_1[0xe])) ||
      (param_4 != param_1[0xf])))) {
    FUN_0042eb70((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
    param_1[0xc] = param_2;
    param_1[0xd] = param_3;
    param_1[0xe] = param_5;
    param_1[0xf] = param_4;
    FUN_0042de78((int)param_1);
    (**(code **)(*param_1 + 0x74))();
    FUN_0042f720((int)param_1,0x47,0,0);
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      FUN_00403178(param_1,extraout_EDX_00,extraout_ECX_00);
    }
  }
  return;
}


/* ==== 0042de78 FUN_0042de78 ==== */

void FUN_0042de78(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((*(char *)(param_1 + 0x52) == '\0') && ((*(byte *)(param_1 + 0x20) & 1) == 0)) &&
     (bVar1 = *(byte *)(param_1 + 0x51), bVar1 != 3)) {
    if ((bVar1 & 4) == 0) {
      iVar3 = (int)*(uint *)(param_1 + 0x38) >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((*(uint *)(param_1 + 0x38) & 1) != 0);
      }
      *(int *)(param_1 + 0x78) = iVar3 + *(int *)(param_1 + 0x30);
    }
    else if ((bVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x38);
    }
    if ((bVar1 & 8) == 0) {
      iVar3 = (int)*(uint *)(param_1 + 0x3c) >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((*(uint *)(param_1 + 0x3c) & 1) != 0);
      }
      *(int *)(param_1 + 0x7c) = iVar3 + *(int *)(param_1 + 0x34);
    }
    else if ((bVar1 & 2) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x34);
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x3c);
    }
    iVar3 = *(int *)(param_1 + 0x24);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x20) & 2) == 0)) {
      bVar2 = FUN_00434cdc(iVar3);
      if (bVar2) {
        (**(code **)(**(int **)(param_1 + 0x24) + 0x40))(*(int **)(param_1 + 0x24),auStack_18);
        *(undefined4 *)(param_1 + 0x80) = uStack_10;
        *(undefined4 *)(param_1 + 0x84) = uStack_c;
      }
      else {
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x38);
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x3c);
      }
    }
  }
  return;
}


/* ==== 0042df54 TControl.SetLeft ==== */

void TControl_SetLeft(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_2,param_1[0xd],param_1[0xf],param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  return;
}


/* ==== 0042df74 TControl.SetTop ==== */

void TControl_SetTop(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_2,param_1[0xf],param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 2;
  return;
}


/* ==== 0042df98 TControl.SetWidth ==== */

void TControl_SetWidth(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_1[0xf],param_2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
  return;
}


/* ==== 0042dfb8 TControl.SetHeight ==== */

void TControl_SetHeight(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_2,param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
  return;
}


/* ==== 0042dfd8 TControl.dynamic_ffd1 ==== */

void TControl_dynamic_ffd1(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18 [4];
  int *local_8;
  
  puVar3 = local_18;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0;
  local_8 = param_1;
  if (param_2 != (int *)param_1[0x24]) {
    i_val = param_1[0x24];
    if ((i_val != 0) && (*(int *)(i_val + 0x140) != 0)) {
      puStack_28 = (undefined1 *)0x42e021;
      FUN_00410448(*(int **)(i_val + 0x140),(int)param_1);
      uVar2 = extraout_ECX;
    }
    if (((param_2 != (int *)0x0) && (param_2 != (int *)0xffffffff)) && (param_2[0x50] != 0)) {
      puStack_28 = (undefined1 *)0x42e041;
      FUN_00410104((int *)param_2[0x50],(int)local_8);
      uVar2 = extraout_ECX_00;
    }
  }
  *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) | 0x400;
  puStack_2c = &LAB_0042e0d6;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  if (param_2 != (int *)0xffffffff) {
    puStack_28 = &stack0xfffffffc;
    FUN_00403178(local_8,param_2,local_18);
    uVar2 = extraout_ECX_01;
  }
  piVar1 = (int *)local_8[0x24];
  if (param_2 != piVar1) {
    if (param_2 == (int *)0xffffffff) {
      local_8[0x24] = 0;
    }
    else {
      local_8[0x24] = (int)param_2;
      if (param_2 != (int *)0x0) {
        FUN_00403178(param_2,local_8,local_18);
        uVar2 = extraout_ECX_02;
      }
    }
    if (piVar1 != (int *)0x0) {
      FUN_00403178(piVar1,local_8,uVar2);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xfbff;
  return;
}


/* ==== 0042e0e4 TControl.dynamic_ffe6 ==== */

void TControl_dynamic_ffe6(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_virtual_000_0042ac0c);
  if ((char)uVar1 == '\0') {
    FUN_0042eb70((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
  }
  if (param_2 == param_1[9]) {
    FUN_0042e15c(param_1,param_3);
  }
  else {
    FUN_0042f7c4((int)param_1,param_3);
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  return;
}


/* ==== 0042e13c FUN_0042e13c ==== */

void FUN_0042e13c(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  param_2[2] = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38);
  param_2[3] = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c);
  return;
}


/* ==== 0042e15c FUN_0042e15c ==== */

void FUN_0042e15c(int *param_1,int *param_2)

{
  (**(code **)(*param_1 + 0x7c))
            (param_1,*param_2,param_2[1],param_2[3] - param_2[1],param_2[2] - *param_2);
  return;
}


/* ==== 0042e180 TControl.virtual_040 ==== */

void TControl_virtual_040(int param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  return;
}


/* ==== 0042e21c TControl.virtual_03c ==== */

void TControl_virtual_03c(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined4 *puVar3;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  puStack_20 = &LAB_0042e29d;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x24) == 0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0xb;
    puVar3 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00405808((undefined4 *)PTR_PTR_004ab8f0,(int *)&local_10);
    uVar2 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',local_10,in_stack_ffffffd4,puVar3);
    FUN_004036f4(uVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x3c))(*(int **)(param_1 + 0x24),param_2);
  *param_2 = *param_2 + *(int *)(param_1 + 0x30);
  param_2[1] = param_2[1] + *(int *)(param_1 + 0x34);
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_0042e2a4;
  FUN_00403c5c((int *)&local_10);
  return;
}


/* ==== 0042e2ac FUN_0042e2ac ==== */

void FUN_0042e2ac(int *param_1,int *param_2,int *param_3)

{
  int iStack_14;
  int iStack_10;
  
  (**(code **)(*param_1 + 0x3c))(param_1,&iStack_14);
  *param_3 = *param_2 + iStack_14;
  param_3[1] = param_2[1] + iStack_10;
  return;
}


/* ==== 0042e2d8 FUN_0042e2d8 ==== */

void FUN_0042e2d8(int *param_1,int *param_2,int *param_3)

{
  int iStack_14;
  int iStack_10;
  
  (**(code **)(*param_1 + 0x3c))(param_1,&iStack_14);
  *param_3 = *param_2 - iStack_14;
  param_3[1] = param_2[1] - iStack_10;
  return;
}


/* ==== 0042e304 FUN_0042e304 ==== */

void FUN_0042e304(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[9]) {
    uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_virtual_000_00442cf0);
    if ((char)uVar1 != '\0') {
      FUN_004486c8((int)param_1,param_2);
    }
  }
  return;
}


/* ==== 0042e334 FUN_0042e334 ==== */

void FUN_0042e334(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((*(int *)(param_1 + 0x90) != 0) && (DAT_004ac760 == 0)) &&
     ((*(ushort *)(param_1 + 0x20) & 9) == 0)) {
    local_c = param_4;
    local_14 = param_2;
    local_10 = param_3;
    local_8 = param_3;
    FUN_0042f720(*(int *)(param_1 + 0x90),0xb042,param_1,&local_14);
  }
  return;
}


/* ==== 0042e3a0 FUN_0042e3a0 ==== */

void FUN_0042e3a0(int param_1)

{
  FUN_0042f720(param_1,0xb037,0,param_1);
  return;
}


/* ==== 0042e3b0 TControl.dynamic_ffed ==== */

/* WARNING: Removing unreachable block (ram,0x0042e48a) */

void TControl_dynamic_ffed(int *param_1,int numerator,int denominator)

{
  int *piVar1;
  int number;
  int denominator_2;
  byte bVar2;
  int local_18;
  int local_14;
  
  if (numerator != denominator) {
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      bVar2 = 0x1f;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x22);
    }
    if ((bVar2 & 1) == 0) {
      number = param_1[0xc];
    }
    else {
      number = MulDiv(param_1[0xc],numerator,denominator);
    }
    if ((bVar2 & 2) == 0) {
      local_18 = param_1[0xd];
    }
    else {
      local_18 = MulDiv(param_1[0xd],numerator,denominator);
    }
    if (((bVar2 & 4) == 0) || ((*(byte *)((int)param_1 + 0x41) & 1) != 0)) {
      local_14 = param_1[0xe];
    }
    else if ((bVar2 & 1) == 0) {
      local_14 = MulDiv(param_1[0xe],numerator,denominator);
    }
    else {
      local_14 = MulDiv(param_1[0xc] + param_1[0xe],numerator,denominator);
      local_14 = local_14 - number;
    }
    if (((bVar2 & 8) == 0) || ((*(byte *)((int)param_1 + 0x41) & 2) != 0)) {
      denominator_2 = param_1[0xf];
    }
    else {
      denominator_2 = MulDiv(param_1[0xd] + param_1[0xf],numerator,denominator);
      denominator_2 = denominator_2 - local_18;
    }
    (**(code **)(*param_1 + 0x7c))(param_1,number,local_18,denominator_2,local_14);
    if ((*(char *)((int)param_1 + 0x49) == '\0') && ((bVar2 & 0x10) != 0)) {
      piVar1 = (int *)param_1[0x16];
      number = TFont_GetSize((int)piVar1);
      number = MulDiv(number,numerator,denominator_2);
      TFont_SetSize(piVar1,number);
    }
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}


/* ==== 0042e514 TControl.virtual_018 ==== */

void TControl_virtual_018(int *param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_c;
  uint *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_20 = &LAB_0042e5aa;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if (((*(byte *)(param_1 + 0x10) & 0x20) != 0) &&
     (uVar5 = (*(byte *)(param_1 + 8) & 1) == 0, puVar3 = &stack0xfffffffc, (bool)uVar5)) {
    TGroupBox_GetCaption((int)param_1,(int *)&local_c);
    FUN_00403fec((uint *)param_1[2],local_c);
    puVar3 = puStack_1c;
    if ((bool)uVar5) {
      piVar1 = (int *)param_1[1];
      if (piVar1 != (int *)0x0) {
        uVar4 = FUN_00403114(piVar1,(int)&PTR_TControl_virtual_000_0042a694);
        if (((char)uVar4 != '\0') && (puVar3 = puStack_1c, (*(byte *)(piVar1 + 8) & 1) != 0))
        goto LAB_0042e576;
      }
      bVar2 = true;
      goto LAB_0042e57c;
    }
  }
LAB_0042e576:
  puStack_1c = puVar3;
  bVar2 = false;
LAB_0042e57c:
  TComponent_virtual_018(param_1,local_8);
  if (bVar2) {
    TGroupBox_SetCaption((int)param_1,local_8);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0042e5b1;
  puStack_20 = (undefined1 *)0x42e5a9;
  FUN_00403c5c((int *)&local_c);
  return;
}


/* ==== 0042e5b8 FUN_0042e5b8 ==== */

void FUN_0042e5b8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_1c [8];
  int iStack_14;
  int iStack_10;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  (**(code **)(*param_1 + 0x40))(param_1,local_1c,*param_1,iVar1,iVar2);
  (**(code **)(*param_1 + 0x7c))
            (param_1,param_1[0xc],param_1[0xd],(param_1[0xf] - iStack_10) + iVar2,
             (param_1[0xe] - iStack_14) + iVar1);
  return;
}


/* ==== 0042e600 TControl.virtual_060 ==== */

void TControl_virtual_060(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)param_1[9]) {
    if (param_1 == param_2) {
      piVar1 = FUN_0040b694((int *)&DAT_0040ea0c,'\x01',(undefined4 *)PTR_PTR_004ab8f4);
      FUN_004036f4(piVar1);
      param_3 = extraout_ECX;
    }
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_00431704((int *)param_1[9],param_1);
      param_3 = extraout_ECX_00;
    }
    if (param_2 != (int *)0x0) {
      FUN_00431630(param_2,param_1,param_3);
      FUN_0042de78((int)param_1);
    }
  }
  return;
}


/* ==== 0042e690 TControl.virtual_05c ==== */

void TControl_virtual_05c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x48)) {
    *(char *)(param_1 + 0x48) = param_2;
    FUN_0042f720(param_1,0xb00c,0,0);
  }
  return;
}


/* ==== 0042e6a8 FUN_0042e6a8 ==== */

void FUN_0042e6a8(int param_1)

{
  FUN_0042f720(param_1,0xe,0,0);
  return;
}


/* ==== 0042e6b8 FUN_0042e6b8 ==== */

void FUN_0042e6b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0042f720(param_1,0xd,param_3,param_2);
  return;
}


/* ==== 0042e7c8 TControl.virtual_068 ==== */

void TControl_virtual_068(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4f)) {
    *(char *)(param_1 + 0x4f) = param_2;
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_0042f720(param_1,0xb03c,0,0);
  }
  return;
}


/* ==== 0042e7e4 FUN_0042e7e4 ==== */

void FUN_0042e7e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  iVar1 = TFont_GetHeight(*(int *)(param_1 + 0x58));
  if (iVar1 != *(int *)(param_1 + 0x74)) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x10;
    uVar2 = TFont_GetHeight(*(int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
  }
  FUN_0042f720(param_1,0xb00e,0,0);
  return;
}


/* ==== 0042e904 TControl.virtual_064 ==== */

void TControl_virtual_064(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x50)) &&
     (*(char *)(param_1 + 0x50) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_0042f720(param_1,0xb03d,0,0);
  }
  return;
}


/* ==== 0042e924 TControl.SetCursor ==== */

HCURSOR __stdcall TControl_SetCursor(HCURSOR hCursor)

{
  HCURSOR in_EAX;
  short in_DX;
  
  if (in_DX != (short)in_EAX[0x1a].unused) {
    *(short *)&in_EAX[0x1a].unused = in_DX;
    in_EAX = (HCURSOR)FUN_0042f720((int)in_EAX,0xb00f,0,0);
  }
  return in_EAX;
}


/* ==== 0042e940 FUN_0042e940 ==== */

bool FUN_0042e940(HANDLE param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = FUN_0042bbd4();
  return param_1 == pvVar1;
}


/* ==== 0042e950 FUN_0042e950 ==== */

void FUN_0042e950(int *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = FUN_0042e940(param_1);
  if ((bool)param_2 != bVar1) {
    if (param_2 == '\0') {
      FUN_0042bbfc((int *)0x0);
    }
    else {
      FUN_0042bbfc(param_1);
    }
  }
  return;
}


/* ==== 0042e978 FUN_0042e978 ==== */

void FUN_0042e978(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  return;
}


/* ==== 0042e988 FUN_0042e988 ==== */

void FUN_0042e988(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(param_1,0,param_3);
  return;
}


/* ==== 0042e998 FUN_0042e998 ==== */

void FUN_0042e998(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_1[9] != 0) {
    iVar2 = FUN_0041030c(*(int *)(param_1[9] + 0x134),(int)param_1);
    if (-1 < iVar2) {
      iVar1 = (*(int **)(param_1[9] + 0x134))[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (iVar2 != param_2) {
        FUN_00410150(*(int **)(param_1[9] + 0x134),iVar2);
        FUN_0041032c(*(int **)(param_1[9] + 0x134),param_2,(int)param_1);
        FUN_0042eb70((int)param_1,*(char *)((int)param_1 + 0x47),'\x01');
        piVar3 = (int *)FUN_0044488c(param_1);
        if ((*(byte *)(piVar3 + 0x11) & 4) != 0) {
          FUN_00403178(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
        }
      }
    }
  }
  return;
}


/* ==== 0042ea18 TControl.dynamic_ffd3 ==== */

void TControl_dynamic_ffd3(int *param_1,char param_2)

{
  if (param_1[9] != 0) {
    if (param_2 == '\0') {
      FUN_0042e998(param_1,0);
    }
    else {
      FUN_0042e998(param_1,*(int *)(*(int *)(param_1[9] + 0x134) + 8) + -1);
    }
  }
  return;
}


/* ==== 0042ea3c TControl.virtual_044 ==== */

void TControl_virtual_044(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined4 *puVar3;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  puStack_20 = &LAB_0042ead2;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x24) == 0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0xb;
    puVar3 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00405808((undefined4 *)PTR_PTR_004ab8f0,(int *)&local_10);
    uVar2 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',local_10,in_stack_ffffffd4,puVar3);
    FUN_004036f4(uVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  hdc = (HDC)(**(code **)(**(int **)(param_1 + 0x24) + 0x44))();
  SetViewportOrgEx(hdc,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34),(LPPOINT)0x0);
  IntersectClipRect(hdc,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_0042ead9;
  FUN_00403c5c((int *)&local_10);
  return;
}


/* ==== 0042eae4 FUN_0042eae4 ==== */

undefined1 FUN_0042eae4(void)

{
  undefined4 *puVar1;
  int i_val;
  int iVar2;
  BOOL BVar3;
  int in_stack_00000004;
  RECT local_28;
  tagRECT local_18;
  undefined1 local_5;
  
  local_5 = 1;
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x24) + 0x134);
  i_val = FUN_0041030c((int)puVar1,*(int *)(in_stack_00000004 + -4));
  do {
    do {
      if (i_val < 1) {
        return 0;
      }
      i_val = i_val + -1;
      iVar2 = FUN_004102b0(puVar1,i_val);
    } while ((*(char *)(iVar2 + 0x47) == '\0') || ((*(byte *)(iVar2 + 0x40) & 0x40) == 0));
    FUN_0042e13c(iVar2,&local_28.left);
    IntersectRect(&local_18,(RECT *)(in_stack_00000004 + -0x14),&local_28);
    BVar3 = EqualRect(&local_18,(RECT *)(in_stack_00000004 + -0x14));
  } while (BVar3 == 0);
  return local_5;
}


/* ==== 0042eb70 FUN_0042eb70 ==== */

void FUN_0042eb70(int param_1,char param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  HWND hWnd;
  RECT *lpRect;
  int bErase;
  RECT local_18;
  int local_8;
  
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x41) & 4) != 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  local_8 = param_1;
  bVar2 = FUN_00434cdc(*(int *)(param_1 + 0x24));
  if (bVar2) {
    FUN_0042e13c(local_8,&local_18.left);
    if (((param_3 == '\0') && ((*(byte *)(*(int *)(local_8 + 0x24) + 0x40) & 0x40) == 0)) &&
       (cVar3 = FUN_0042eae4(), cVar3 == '\0')) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    bErase = -(uint)bVar1;
    lpRect = &local_18;
    hWnd = (HWND)FUN_004349e0(*(int **)(local_8 + 0x24));
    InvalidateRect(hWnd,lpRect,bErase);
    return;
  }
  return;
}


/* ==== 0042ebfc TControl.virtual_074 ==== */

void TControl_virtual_074(int param_1)

{
  FUN_0042eb70(param_1,*(char *)(param_1 + 0x47),(*(byte *)(param_1 + 0x40) & 0x40) != 0);
  return;
}


/* ==== 0042ec0c FUN_0042ec0c ==== */

void FUN_0042ec0c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  TGroupBox_SetVisible(param_1,0,param_3);
  return;
}


/* ==== 0042ec14 FUN_0042ec14 ==== */

void FUN_0042ec14(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xac))(piVar1,param_1);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)) {
    TGroupBox_SetVisible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  }
  return;
}


/* ==== 0042ec44 TControl.virtual_080 ==== */

void TControl_virtual_080(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x80))();
  }
  return;
}


/* ==== 0042ec58 FUN_0042ec58 ==== */

void FUN_0042ec58(int *param_1)

{
  (**(code **)(*param_1 + 0x78))();
  return;
}


/* ==== 0042ec60 TControl.virtual_078 ==== */

void TControl_virtual_078(int *param_1)

{
  bool bVar1;
  HWND pHVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  
  if (((*(char *)((int)param_1 + 0x47) != '\0') ||
      (((*(byte *)(param_1 + 8) & 0x10) != 0 && ((*(byte *)((int)param_1 + 0x41) & 4) == 0)))) &&
     (param_1[9] != 0)) {
    bVar1 = FUN_00434cdc(param_1[9]);
    if (bVar1) {
      if ((*(byte *)(param_1 + 0x10) & 0x40) != 0) {
        pHVar2 = (HWND)FUN_004349e0((int *)param_1[9]);
        hdc = GetDC(pHVar2);
        uVar3 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffe4;
        IntersectClipRect(hdc,param_1[0xc],param_1[0xd],param_1[0xc] + param_1[0xe],
                          param_1[0xd] + param_1[0xf]);
        FUN_00432654(param_1[9],hdc,(int)param_1);
        *in_FS_OFFSET = uVar3;
        pHVar2 = (HWND)FUN_004349e0((int *)param_1[9]);
        ReleaseDC(pHVar2,hdc);
        return;
      }
      (**(code **)(*param_1 + 0x74))();
      (**(code **)(*param_1 + 0x80))();
    }
  }
  return;
}


/* ==== 0042ed58 TControl.dynamic_ffcf ==== */

undefined4 TControl_dynamic_ffcf(void)

{
  return 0;
}


/* ==== 0042ed5c FUN_0042ed5c ==== */

undefined4 FUN_0042ed5c(int param_1)

{
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)(param_1 + 0x4f) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 0042ed74 TControl.dynamic_ffce ==== */

undefined4 TControl_dynamic_ffce(int param_1)

{
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)(param_1 + 0x4f) == '\x01')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 0042ed8c FUN_0042ed8c ==== */

undefined4 FUN_0042ed8c(int param_1)

{
  int iVar1;
  
  if ((PTR_DAT_004aba14[9] != '\0') &&
     (iVar1 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4f)) + -1,
     (byte)iVar1 < 2)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0042eda8 TControl.dynamic_ffee ==== */

void TControl_dynamic_ffee(int *param_1)

{
  FUN_0042edc0(param_1,*(char *)(DAT_004ac74c + 4),*(int *)(DAT_004ac74c + 8));
  return;
}


/* ==== 0042edc0 FUN_0042edc0 ==== */

void FUN_0042edc0(int *param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  tagPOINT point;
  LONG LStack_14;
  LONG LStack_10;
  
  uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_virtual_000_00442cf0);
  if (((char)uVar1 != '\0') && (*(char *)((int)param_1 + 0x8b) != '\x01')) {
    piVar2 = FUN_0040b694((int *)&DAT_0040ea0c,'\x01',(undefined4 *)PTR_PTR_004ab8e8);
    FUN_004036f4(piVar2);
  }
  FUN_0042f754(param_1);
  if ((DAT_004ac75c == 0) || (DAT_004ac75c == -1)) {
    DAT_004ac75c = 0;
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      GetCursorPos(&point);
      FUN_0042e2d8(param_1,&point.x,&LStack_14);
      point.x = LStack_14;
      point.y = LStack_10;
      uVar1 = FUN_004070fc((undefined2 *)&point);
      FUN_0042f720((int)param_1,0x202,0,uVar1);
    }
    if (param_3 < 0) {
      param_3 = *(int *)(DAT_004ac74c + 8);
    }
    if (DAT_004ac75c != -1) {
      FUN_0042ccb4(param_1,param_2,param_3);
    }
  }
  return;
}


/* ==== 0042ee84 TControl.dynamic_ffe4 ==== */

void TControl_dynamic_ffe4(void)

{
  return;
}


/* ==== 0042ee88 FUN_0042ee88 ==== */

bool FUN_0042ee88(int param_1)

{
  return param_1 == DAT_004ac75c;
}


/* ==== 0042ee94 TControl.dynamic_ffe3 ==== */

void TControl_dynamic_ffe3
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
               undefined1 param_5,undefined4 param_6)

{
  *param_4 = 0;
  if (*(short *)(param_1 + 0xda) != 0) {
    *param_4 = 1;
    (**(code **)(param_1 + 0xd8))
              (*(undefined4 *)(param_1 + 0xdc),param_1,param_2,param_4,param_5,param_6,param_3);
  }
  return;
}


/* ==== 0042eed0 TControl.dynamic_ffd0 ==== */

void TControl_dynamic_ffd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0xd2) != 0) {
    (**(code **)(param_1 + 0xd0))(*(undefined4 *)(param_1 + 0xd4),param_1,param_2,param_4,param_3);
  }
  return;
}


/* ==== 0042eefc TControl.dynamic_ffe1 ==== */

void TControl_dynamic_ffe1(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xfa) != 0) {
    (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xfc),param_1,param_2);
  }
  return;
}


/* ==== 0042ef1c TControl.dynamic_ffe2 ==== */

void TControl_dynamic_ffe2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x102) != 0) {
    (**(code **)(param_1 + 0x100))(*(undefined4 *)(param_1 + 0x104),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}


/* ==== 0042ef48 TControl.dynamic_ffd7 ==== */

void TControl_dynamic_ffd7(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  LPRECT lpRect;
  double dVar4;
  double dVar5;
  
  if ((param_2[1] == 0) || (*(char *)(param_2[1] + 0x17c) == '\0')) {
    iVar1 = FUN_0042e6d8(param_2[0xe]);
    iVar2 = FUN_0042e6c4(param_2[0xe]);
    dVar4 = (double)param_2[3] - (double)iVar1 * *(double *)(param_2 + 8);
    dVar5 = (double)param_2[4] - (double)iVar2 * *(double *)(param_2 + 10);
    iVar3 = FUN_00402ac8();
    param_2[0x11] = iVar3;
    iVar3 = FUN_00402ac8();
    param_2[0x12] = iVar3;
    param_2[0x13] = iVar1 + param_2[0x11];
    param_2[0x14] = iVar2 + param_2[0x12];
    (**(code **)(*param_2 + 0x28))(param_2,param_2 + 0x11,*param_2,dVar4,dVar5);
  }
  else {
    lpRect = (LPRECT)(param_2 + 0x11);
    hWnd = (HWND)FUN_004349e0((int *)param_2[1]);
    GetWindowRect(hWnd,lpRect);
    iVar1 = param_2[1];
    if ((*(char *)(iVar1 + 0x17c) != '\0') && (*(int *)(iVar1 + 0x148) != 0)) {
      (**(code **)(**(int **)(iVar1 + 0x148) + 0x24))
                (*(int **)(iVar1 + 0x148),param_2[0xe],param_2[0x16],param_2 + 0x11,
                 (char)param_2[0x15]);
    }
  }
  return;
}


/* ==== 0042f018 TControl.dynamic_ffe9 ==== */

void TControl_dynamic_ffe9(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(param_1,param_2,param_3);
  return;
}


/* ==== 0042f02c TControl.dynamic_ffe7 ==== */

void TControl_dynamic_ffe7(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0xf2) != 0) {
    (**(code **)(param_1 + 0xf0))(*(undefined4 *)(param_1 + 0xf4),param_1,param_2,param_4,param_3);
  }
  return;
}


/* ==== 0042f058 TControl.dynamic_ffe5 ==== */

void TControl_dynamic_ffe5(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xea) != 0) {
    (**(code **)(param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xec),param_1,param_2);
  }
  return;
}


/* ==== 0042f078 TControl.dynamic_ffea ==== */

void TControl_dynamic_ffea(undefined4 param_1,int *param_2,char param_3)

{
  int y;
  int h;
  HGDIOBJ h_00;
  int i_val;
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 uVar4;
  int x_val;
  int y_val;
  int local_1c;
  int local_18;
  HGDIOBJ h_val;
  HDC local_10;
  HWND wnd;
  char local_5;
  
  bVar3 = 0;
  local_5 = param_3;
  h = (**(code **)(*param_2 + 0x34))();
  if (local_5 == '\0') {
    piVar1 = param_2 + 0x11;
    piVar2 = &x_val;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar3 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar3 * -2 + 1;
    }
  }
  else {
    piVar1 = param_2 + 0x17;
    piVar2 = &x_val;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar3 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar3 * -2 + 1;
    }
  }
  wnd = GetDesktopWindow();
  local_10 = GetDCEx(wnd,(HRGN)0x0,0x402);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  h_00 = (HGDIOBJ)FUN_00418a18(param_2[0x10]);
  h_val = SelectObject(local_10,h_00);
  y = y_val;
  i_val = x_val;
  PatBlt(local_10,x_val + h,y_val,(local_1c - x_val) - h,h,0x5a0049);
  PatBlt(local_10,local_1c - h,y + h,h,(local_18 - y) - h,0x5a0049);
  PatBlt(local_10,i_val,local_18 - h,(local_1c - x_val) - h,h,0x5a0049);
  PatBlt(local_10,i_val,y,h,(local_18 - y_val) - h,0x5a0049);
  SelectObject(local_10,h_val);
  *in_FS_OFFSET = uVar4;
  ReleaseDC(wnd,local_10);
  return;
}


/* ==== 0042f1a8 TControl.dynamic_ffe0 ==== */

void TControl_dynamic_ffe0(int *param_1,undefined4 param_2)

{
  FUN_00403178(param_1,param_2,0);
  return;
}


/* ==== 0042f1b8 TControl.dynamic_ffdf ==== */

void TControl_dynamic_ffdf(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),1));
  return;
}


/* ==== 0042f1c8 FUN_0042f1c8 ==== */

void FUN_0042f1c8(int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int local_18 [2];
  
  piVar2 = *(int **)(param_2 + 8);
  piVar6 = (int *)piVar2[2];
  uVar3 = FUN_00403114(piVar6,(int)&LAB_00429c24);
  cVar5 = (char)uVar3;
  if ((DAT_004ac764 != '\0') && (cVar5 == '\0')) {
    iVar4 = FUN_0040312c(piVar6,(int)&PTR_TBaseDragControlObject_virtual_000_00429b9c);
    piVar6 = *(int **)(iVar4 + 0x38);
  }
  FUN_0042e2d8(param_1,piVar2,local_18);
  if (*(byte *)(param_2 + 4) < 3) {
    if (cVar5 == '\0') {
      bVar1 = *(byte *)(param_2 + 4);
      FUN_00403178(param_1,piVar6,local_18[0]);
    }
    else {
      bVar1 = *(byte *)(param_2 + 4);
      FUN_00403178((int *)piVar2[3],piVar6,local_18[0]);
    }
    *(uint *)(param_2 + 0xc) = (uint)bVar1;
  }
  else if (*(byte *)(param_2 + 4) == 3) {
    if (cVar5 == '\0') {
      FUN_00403178(param_1,piVar6,local_18[0]);
    }
    else {
      FUN_00403178((int *)piVar2[3],piVar6,local_18[0]);
    }
  }
  return;
}


/* ==== 0042f2b8 FUN_0042f2b8 ==== */

undefined4 FUN_0042f2b8(int *param_1,int *param_2,int param_3,undefined1 param_4)

{
  HWND pHVar1;
  int i_val;
  int iVar2;
  undefined3 extraout_var;
  undefined3 uVar4;
  undefined4 uVar3;
  int *piVar5;
  tagPOINT *points;
  int *in_FS_OFFSET;
  byte bVar6;
  HWND hWndTo;
  UINT UVar7;
  int local_38 [4];
  int local_28;
  int local_24;
  tagPOINT local_20 [2];
  int *local_10;
  char local_9;
  int local_8;
  
  bVar6 = 0;
  local_8 = param_3;
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0xffffffff)) {
    i_val = param_1[0x24];
    if (((i_val == 0) || (*(char *)(i_val + 0x17c) == '\0')) || (*(int *)(i_val + 0x148) == 0)) {
      FUN_0040f7d0(param_1[0xc],param_1[0xd],&local_28);
      local_20[0].x = local_28;
      local_20[0].y = local_24;
      if ((int *)param_1[9] != (int *)0x0) {
        FUN_0042e2ac((int *)param_1[9],&local_20[0].x,&local_28);
        local_20[0].x = local_28;
        local_20[0].y = local_24;
      }
    }
    else {
      (**(code **)(**(int **)(i_val + 0x148) + 0x14))(*(int **)(i_val + 0x148),param_1,local_20);
      UVar7 = 2;
      points = local_20;
      hWndTo = (HWND)0x0;
      pHVar1 = (HWND)FUN_004349e0((int *)param_1[0x24]);
      MapWindowPoints(pHVar1,hWndTo,points,UVar7);
    }
    i_val = FUN_0042e6c4((int)param_1);
    piVar5 = local_38;
    iVar2 = FUN_0042e6d8((int)param_1);
    FUN_0040f804(local_20[0].x,local_20[0].y,iVar2,piVar5,i_val);
    piVar5 = local_38;
    points = local_20;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      points->x = *piVar5;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      points = (tagPOINT *)&points[-(uint)bVar6].y;
    }
    local_9 = FUN_0042f4a0(param_1,&local_20[0].x);
    uVar4 = extraout_var;
    goto LAB_0042f492;
  }
  i_val = FUN_0042f754(param_1);
  if (param_1[0x24] == 0) {
LAB_0042f3c2:
    uVar4 = (undefined3)((uint)i_val >> 8);
    local_9 = '\x01';
  }
  else {
    i_val = FUN_00403178((int *)param_1[0x24],param_2,param_1);
    if ((char)i_val != '\0') goto LAB_0042f3c2;
    local_9 = '\0';
    uVar4 = 0;
  }
  if (local_9 != '\0') {
    local_10 = TDragDockObject_virtual_024((int *)&LAB_00429c24,'\x01',(int)param_1);
    *in_FS_OFFSET = (int)&stack0xffffffb0;
    if ((int *)param_1[0x24] == (int *)0x0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = (HWND)FUN_004349e0((int *)param_1[0x24]);
    }
    FUN_0042e13c((int)param_1,&local_20[0].x);
    if (pHVar1 != (HWND)0x0) {
      MapWindowPoints(pHVar1,(HWND)0x0,local_20,2);
    }
    local_10[1] = (int)param_2;
    *(undefined1 *)(local_10 + 0x15) = param_4;
    local_10[0x16] = local_8;
    points = local_20;
    piVar5 = local_10 + 0x11;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *piVar5 = points->x;
      points = (tagPOINT *)&points[-(uint)bVar6].y;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    UVar7 = 1;
    points = local_20;
    pHVar1 = (HWND)FUN_004349e0(param_2);
    MapWindowPoints((HWND)0x0,pHVar1,points,UVar7);
    FUN_00403178(param_2,local_10,local_20[0].x);
    *in_FS_OFFSET = local_20[0].y;
    uVar3 = FUN_00402f9c(local_10);
    return uVar3;
  }
LAB_0042f492:
  return CONCAT31(uVar4,local_9);
}


/* ==== 0042f4a0 FUN_0042f4a0 ==== */

char FUN_0042f4a0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int i_val;
  undefined4 *puVar5;
  undefined4 local_2c [4];
  undefined4 auStack_1c [4];
  
  puVar5 = local_2c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    cVar1 = FUN_00403178((int *)param_1[0x24],0,param_1);
    if (cVar1 == '\0') {
      cVar1 = '\0';
      goto LAB_0042f4d8;
    }
  }
  cVar1 = '\x01';
LAB_0042f4d8:
  if (cVar1 != '\0') {
    piVar2 = FUN_00430118(param_1,local_2c);
    if (piVar2 == (int *)0x0) {
      FUN_00403178(param_1,0,local_2c);
    }
    else {
      uVar3 = TForm_GetClientHeight(piVar2);
      puVar5 = auStack_1c;
      uVar4 = TForm_GetClientWidth(piVar2);
      FUN_0040f7e8(0,0,uVar4,puVar5,uVar3);
      FUN_00403178(param_1,piVar2,auStack_1c);
    }
  }
  return cVar1;
}


/* ==== 0042f54c TControl.virtual_034 ==== */

undefined1 TControl_virtual_034(void)

{
  return 1;
}


/* ==== 0042f550 TControl.virtual_030 ==== */

uint TControl_virtual_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_8;
  undefined3 uStack_7;
  
  _local_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0xaa) != 0) {
    param_1 = (**(code **)(param_1 + 0xa8))
                        (*(undefined4 *)(param_1 + 0xac),param_1,param_2,&local_8,param_3);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),local_8);
}


/* ==== 0042f580 FUN_0042f580 ==== */

undefined4 FUN_0042f580(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)((int)param_1 + 0x4b) == '\x05') {
    uVar2 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  else {
    local_10 = *param_2;
    local_c = *param_3;
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1,&local_10,&local_c);
    bVar1 = *(byte *)((int)param_1 + 0x4b);
    if ((bVar1 == 0) || ((byte)(bVar1 - 3) < 2)) {
      *param_2 = local_10;
    }
    if (bVar1 < 3) {
      *param_3 = local_c;
    }
  }
  return uVar2;
}


/* ==== 0042f5ec FUN_0042f5ec ==== */

undefined4 FUN_0042f5ec(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    FUN_0042f64c(param_1,param_2,param_3);
  }
  return uVar1;
}


/* ==== 0042f61c TControl.virtual_038 ==== */

void TControl_virtual_038
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  if (*(short *)(param_1 + 0xb2) != 0) {
    (**(code **)(param_1 + 0xb0))
              (*(undefined4 *)(param_1 + 0xb4),param_1,param_2,param_4,param_5,param_3);
  }
  return;
}


/* ==== 0042f64c FUN_0042f64c ==== */

void FUN_0042f64c(int *param_1,int *param_2,int *param_3)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = *(int *)(param_1[0x19] + 0x14);
  if (local_1c == 0) {
    local_1c = 0;
  }
  local_18 = *(int *)(param_1[0x19] + 0x10);
  if (local_18 == 0) {
    local_18 = 0;
  }
  local_14 = *(int *)(param_1[0x19] + 0xc);
  if (local_14 == 0) {
    local_14 = 0;
  }
  local_10 = *(int *)(param_1[0x19] + 8);
  if (local_10 == 0) {
    local_10 = 0;
  }
  (**(code **)(*param_1 + 0x38))(param_1,&local_1c,&local_18);
  if ((local_1c < 1) || (*param_2 <= local_1c)) {
    if ((0 < (int)&local_10) && (*param_2 < (int)&local_10)) {
      *param_2 = (int)&local_10;
    }
  }
  else {
    *param_2 = local_1c;
  }
  if ((local_18 < 1) || (*param_3 <= local_18)) {
    if ((0 < (int)&local_14) && (*param_3 < (int)&local_14)) {
      *param_3 = (int)&local_14;
    }
  }
  else {
    *param_3 = local_18;
  }
  return;
}


/* ==== 0042f720 FUN_0042f720 ==== */

undefined4 FUN_0042f720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_4;
  local_8 = 0;
  if (param_1 != 0) {
    local_14 = param_2;
    local_10 = param_3;
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),&local_14);
  }
  return local_8;
}


/* ==== 0042f754 FUN_0042f754 ==== */

int FUN_0042f754(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x50))();
  if ((char)iVar2 != '\0') {
    param_1[0x26] = param_1[0xf];
    param_1[0x25] = param_1[0xe];
    return param_1[0xe];
  }
  if (param_1[0x24] != 0) {
    if (((char)param_1[0x23] == '\x02') || ((byte)(*(char *)(param_1[0x24] + 0x4b) - 1U) < 2)) {
      iVar2 = param_1[0xf];
      param_1[0x28] = iVar2;
    }
    else if (((char)param_1[0x23] == '\x01') ||
            (cVar1 = *(char *)(param_1[0x24] + 0x4b),
            iVar2 = CONCAT31((int3)((uint)param_1[0x24] >> 8),cVar1 + -5), (byte)(cVar1 - 3U) < 2))
    {
      iVar2 = param_1[0xe];
      param_1[0x27] = iVar2;
    }
  }
  return iVar2;
}


/* ==== 0042f7c4 FUN_0042f7c4 ==== */

void FUN_0042f7c4(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x30) = *param_2;
  *(int *)(param_1 + 0x34) = param_2[1];
  *(int *)(param_1 + 0x38) = param_2[2] - *param_2;
  *(int *)(param_1 + 0x3c) = param_2[3] - param_2[1];
  FUN_0042de78(param_1);
  return;
}


/* ==== 0042f7e8 TControl.dynamic_ffd2 ==== */

void TControl_dynamic_ffd2(void)

{
  return;
}


/* ==== 0042f7ec TControl.virtual_06c ==== */

void TControl_virtual_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if ((*param_2 < 0x100) || (0x108 < *param_2)) {
      uVar1 = *param_2;
      if ((uVar1 < 0x200) || (0x20a < uVar1)) {
        if (uVar1 == 0xb00b) {
          FUN_0042e334((int)param_1,0xb00b,param_2[1],param_2[2]);
        }
      }
      else {
        if (((*(byte *)(param_1 + 0x10) & 0x80) == 0) &&
           (((uVar1 == 0x203 || (uVar1 == 0x206)) || (uVar1 == 0x209)))) {
          *param_2 = *param_2 - 2;
        }
        uVar1 = *param_2;
        if (uVar1 == 0x200) {
          FUN_0044dcb8(*(int *)PTR_DAT_004ab8ac,param_1,(int)param_2);
        }
        else {
          if (uVar1 != 0x201) {
            if (uVar1 == 0x202) {
              *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffe;
              goto LAB_0042f8f7;
            }
            if (uVar1 != 0x203) goto LAB_0042f8f7;
          }
          if (*(char *)((int)param_1 + 0x4d) == '\x01') {
            FUN_00403178(param_1,param_2,param_3);
            return;
          }
          *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 1;
        }
      }
      goto LAB_0042f8f7;
    }
    piVar3 = FUN_00444864(param_1);
    if (piVar3 == (int *)0x0) goto LAB_0042f8f7;
    cVar2 = (**(code **)(*piVar3 + 0xdc))(piVar3,param_1,param_2);
  }
  else {
    piVar3 = FUN_00444864(param_1);
    if ((piVar3 == (int *)0x0) || (piVar3[0x8e] == 0)) goto LAB_0042f8f7;
    cVar2 = (**(code **)(*(int *)piVar3[0x8e] + 0x24))((int *)piVar3[0x8e],param_1,param_2);
  }
  if (cVar2 != '\0') {
    return;
  }
LAB_0042f8f7:
  (**(code **)(*param_1 + -0x14))(param_1,param_2);
  return;
}


/* ==== 0042f904 TControl.DefaultHandler ==== */

void TControl_DefaultHandler(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_2;
  if (iVar2 == 0xc) {
    uVar3 = FUN_00408d40((char *)param_2[2]);
    FUN_00408d6c(*(int *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    FUN_0042e334(param_1,*param_2,param_2[1],param_2[2]);
  }
  else if (iVar2 == 0xd) {
    pcVar1 = *(char **)(param_1 + 0x54);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    pcVar1 = FUN_00408bb4((char *)param_2[2],pcVar1,param_2[1] + -1);
    iVar2 = FUN_00408b24(pcVar1);
    param_2[3] = iVar2;
  }
  else if (iVar2 == 0xe) {
    if (*(char **)(param_1 + 0x54) == (char *)0x0) {
      param_2[3] = 0;
    }
    else {
      iVar2 = FUN_00408b24(*(char **)(param_1 + 0x54));
      param_2[3] = iVar2;
    }
  }
  return;
}


/* ==== 0042f9ac FUN_0042f9ac ==== */

undefined4 FUN_0042f9ac(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(char *)(iVar1 + 0x4e) != *(char *)(*(int *)(in_stack_00000004 + -8) + 0x4e));
  }
  return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                  *(undefined1 *)(*(int *)(in_stack_00000004 + -8) + 0x4e));
}


/* ==== 0042f9dc TControl.virtual_004 ==== */

void TControl_virtual_004(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = &LAB_0042f98c;
  puVar2 = &LAB_0042f9a0;
  uVar4 = param_1;
  uVar1 = FUN_0042f9ac();
  (**(code **)(*param_2 + 4))(param_2,"IsControl",uVar1,puVar2,param_1,puVar3,uVar4);
  return;
}


/* ==== 0042fa2c TControl.dynamic_ffec ==== */

void TControl_dynamic_ffec(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x10a) != 0) {
    iVar1 = TButton_GetAction(param_1);
    if (iVar1 != 0) {
      iVar1 = TButton_GetAction(param_1);
      if (*(int *)(iVar1 + 0x30) != *(int *)(param_1 + 0x108)) {
        (**(code **)(param_1 + 0x108))(*(undefined4 *)(param_1 + 0x10c),param_1);
        return;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))();
  }
  else if (*(short *)(param_1 + 0x10a) != 0) {
    (**(code **)(param_1 + 0x108))(*(undefined4 *)(param_1 + 0x10c),param_1);
  }
  return;
}


/* ==== 0042fa98 TControl.dynamic_ffeb ==== */

void TControl_dynamic_ffeb(int param_1)

{
  if (*(short *)(param_1 + 0x112) != 0) {
    (**(code **)(param_1 + 0x110))(*(undefined4 *)(param_1 + 0x114),param_1);
  }
  return;
}


/* ==== 0042fab8 TControl.dynamic_ffda ==== */

void TControl_dynamic_ffda
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  if (*(short *)(param_1 + 0xba) != 0) {
    (**(code **)(param_1 + 0xb8))
              (*(undefined4 *)(param_1 + 0xbc),param_1,param_2,param_4,param_5,param_3);
  }
  return;
}


/* ==== 0042faf0 FUN_0042faf0 ==== */

void FUN_0042faf0(int *param_1,int param_2,undefined1 param_3,byte param_4)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    bVar1 = FUN_00444718(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
    FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_3),
                 CONCAT31(extraout_var,bVar1 | param_4));
  }
  return;
}


/* ==== 0042fb34 TControl.WMLButtonDown ==== */

void TControl_WMLButtonDown(int *param_1,int param_2)

{
  FUN_0042e304(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_0042e950(param_1,'\x01');
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 2;
  }
  FUN_0042faf0(param_1,param_2,0,0);
  return;
}


/* ==== 0042fb80 TControl.WMNCLButtonDown ==== */

void TControl_WMNCLButtonDown(int *param_1,undefined4 param_2)

{
  FUN_0042e304(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 0042fb9c TControl.WMLButtonDblClk ==== */

void TControl_WMLButtonDblClk(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  
  FUN_0042e304(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_0042e950(param_1,'\x01');
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    FUN_00403178(param_1,uVar2,uVar1);
  }
  FUN_0042faf0(param_1,param_2,0,0x40);
  return;
}


/* ==== 0042fbf0 TControl.dynamic_ffdb ==== */

undefined4 TControl_dynamic_ffdb(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}


/* ==== 0042fbf4 FUN_0042fbf4 ==== */

char FUN_0042fbf4(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = *param_2;
  local_1c = *param_3;
  uVar1 = FUN_0042f5ec(param_1,&local_20,&local_1c);
  if ((char)uVar1 != '\0') {
    local_18 = local_20;
    local_14 = local_1c;
    if ((((char)param_1[0x13] == '\0') ||
        (((uVar1 = FUN_0042f580(param_1,&local_18,&local_14), (char)uVar1 != '\0' &&
          (local_18 == local_20)) && (local_14 == local_1c)))) ||
       (uVar1 = FUN_0042f5ec(param_1,&local_18,&local_14), (char)uVar1 != '\0')) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    if (cVar2 != '\0') {
      *param_2 = local_18;
      *param_3 = local_14;
    }
    return cVar2;
  }
  return '\0';
}


/* ==== 0042fc90 TControl.WMRButtonDown ==== */

void TControl_WMRButtonDown(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0042faf0(param_1,param_2,1,0);
  return;
}


/* ==== 0042fcb8 TControl.WMRButtonDblClk ==== */

void TControl_WMRButtonDblClk(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0042faf0(param_1,param_2,1,0x40);
  return;
}


/* ==== 0042fce0 TControl.WMMButtonDown ==== */

void TControl_WMMButtonDown(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0042faf0(param_1,param_2,2,0);
  return;
}


/* ==== 0042fd08 TControl.WMMButtonDblClk ==== */

void TControl_WMMButtonDblClk(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0042faf0(param_1,param_2,2,0x40);
  return;
}


/* ==== 0042fd30 TControl.dynamic_ffd9 ==== */

void TControl_dynamic_ffd9(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0xc2) != 0) {
    (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_1,param_2,param_4,param_3);
  }
  return;
}


/* ==== 0042fd60 TControl.WMMouseMove ==== */

void TControl_WMMouseMove(int *param_1,int param_2)

{
  byte bVar1;
  undefined3 extraout_var;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    bVar1 = FUN_00444718(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
    FUN_00403178(param_1,CONCAT31(extraout_var,bVar1),(int)*(short *)(param_2 + 8));
  }
  return;
}


/* ==== 0042fd9c TControl.dynamic_ffd8 ==== */

void TControl_dynamic_ffd8
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  if (*(short *)(param_1 + 0xca) != 0) {
    (**(code **)(param_1 + 200))
              (*(undefined4 *)(param_1 + 0xcc),param_1,param_2,param_4,param_5,param_3);
  }
  return;
}


/* ==== 0042fdd4 FUN_0042fdd4 ==== */

void FUN_0042fdd4(int *param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    bVar1 = FUN_00444718(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
    FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_3),
                 CONCAT31(extraout_var,bVar1));
  }
  return;
}


/* ==== 0042fe10 TControl.WMLButtonUp ==== */

void TControl_WMLButtonUp(int *param_1,int param_2)

{
  POINT pt;
  BOOL BVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  LONG LStack_24;
  LONG LStack_20;
  RECT RStack_1c;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_0042e950(param_1,'\0');
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffd;
    FUN_004070e8(*(undefined4 *)(param_2 + 8),&LStack_24);
    (**(code **)(*param_1 + 0x40))(param_1,&RStack_1c);
    pt.y = LStack_20;
    pt.x = LStack_24;
    BVar1 = PtInRect(&RStack_1c,pt);
    if (BVar1 != 0) {
      FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    }
  }
  FUN_0042fdd4(param_1,param_2,0);
  return;
}


/* ==== 0042fe88 TControl.WMRButtonUp ==== */

void TControl_WMRButtonUp(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0042fdd4(param_1,param_2,1);
  return;
}


/* ==== 0042fea8 TControl.WMMButtonUp ==== */

void TControl_WMMButtonUp(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0042fdd4(param_1,param_2,2);
  return;
}


/* ==== 0042fec8 TControl.message_001f ==== */

void TControl_message_001f(int *param_1)

{
  bool bVar1;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_0042e940(param_1);
  if (bVar1) {
    FUN_0042e950(param_1,'\0');
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      FUN_0042f720((int)param_1,0x202,0,0xffffffff);
      return;
    }
  }
  else {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffe;
  }
  return;
}


/* ==== 0042ff08 TControl.WMWindowPosChanged ==== */

void TControl_WMWindowPosChanged(int *param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(ushort *)(param_1 + 8) & 3) == 0) {
    iVar1 = param_1[0x19];
    if ((*(int *)(iVar1 + 0xc) == 0) || (param_1[0xe] <= *(int *)(iVar1 + 0xc))) {
      if ((*(int *)(iVar1 + 0x14) != 0) && (param_1[0xe] < *(int *)(iVar1 + 0x14))) {
        *(int *)(iVar1 + 0x14) = param_1[0xe];
      }
    }
    else {
      *(int *)(iVar1 + 0xc) = param_1[0xe];
    }
    if ((*(int *)(iVar1 + 8) == 0) || (param_1[0xf] <= *(int *)(iVar1 + 8))) {
      if ((*(int *)(iVar1 + 0x10) != 0) && (param_1[0xf] < *(int *)(iVar1 + 0x10))) {
        *(int *)(iVar1 + 0x10) = param_1[0xf];
      }
    }
    else {
      *(int *)(iVar1 + 8) = param_1[0xf];
    }
    iVar1 = *(int *)(param_2 + 8);
    if ((((iVar1 != 0) && (param_1[0x24] != 0)) && ((*(byte *)((int)param_1 + 0x45) & 4) == 0)) &&
       ((((*(byte *)(iVar1 + 0x18) & 1) == 0 && (*(int *)(iVar1 + 0x10) != 0)) &&
        (*(int *)(iVar1 + 0x14) != 0)))) {
      FUN_0042f754(param_1);
    }
  }
  return;
}


/* ==== 0042ffb8 TControl.CMVisibleChanged ==== */

void TControl_CMVisibleChanged(int param_1)

{
  char cVar1;
  
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) || ((*(byte *)(param_1 + 0x41) & 4) != 0)) {
    if ((*(char *)(param_1 + 0x47) == '\0') || ((*(byte *)(param_1 + 0x40) & 0x40) == 0)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    FUN_0042eb70(param_1,'\x01',cVar1);
  }
  return;
}


/* ==== 0042ffe0 TControl.CMEnabledChanged ==== */

void TControl_CMEnabledChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0042ffe8 TControl.CMFontChanged ==== */

void TControl_CMFontChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0042fff0 TControl.CMColorChanged ==== */

void TControl_CMColorChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0042fff8 TControl.CMParentColorChanged ==== */

void TControl_CMParentColorChanged(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x4a) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TGroupBox_SetColor(param_1,*(int *)(*(int *)(param_1 + 0x24) + 0x60));
    }
    else {
      TGroupBox_SetColor(param_1,*(int *)(param_2 + 8));
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return;
}


/* ==== 00430028 TControl.CMParentBiDiModeChanged ==== */

void TControl_CMParentBiDiModeChanged(int *param_1)

{
  if ((char)param_1[0x14] != '\0') {
    if (param_1[9] != 0) {
      (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)(param_1[9] + 0x4f));
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


/* ==== 00430048 TControl.CMBiDiModeChanged ==== */

void TControl_CMBiDiModeChanged(int *param_1,int param_2)

{
  if ((PTR_DAT_004aba14[9] != '\0') && (*(int *)(param_2 + 4) == 0)) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00430060 TControl.CMParentShowHintChanged ==== */

void TControl_CMParentShowHintChanged(int param_1)

{
  if (*(char *)(param_1 + 0x8a) != '\0') {
    TGroupBox_SetShowHint(param_1,*(char *)(*(int *)(param_1 + 0x24) + 0x89));
    *(undefined1 *)(param_1 + 0x8a) = 1;
  }
  return;
}


/* ==== 00430088 TControl.CMParentFontChanged ==== */

void TControl_CMParentFontChanged(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TGroupBox_SetFont(param_1);
    }
    else {
      TGroupBox_SetFont(param_1);
    }
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  return;
}


/* ==== 004300b8 TControl.CMSysFontChanged ==== */

void TControl_CMSysFontChanged(int param_1)

{
  if (*(char *)(param_1 + 0x46) != '\0') {
    TGroupBox_SetFont(param_1);
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  return;
}


/* ==== 004300d8 TControl.CMHitTest ==== */

void TControl_CMHitTest(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}


/* ==== 004300e0 TControl.CMMouseEnter ==== */

void TControl_CMMouseEnter(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0042f720(*(int *)(param_1 + 0x24),0xb013,0,param_1);
  }
  return;
}


/* ==== 004300f8 TControl.CMMouseLeave ==== */

void TControl_CMMouseLeave(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0042f720(*(int *)(param_1 + 0x24),0xb014,0,param_1);
  }
  return;
}


/* ==== 00430110 TControl.CMDesignHitTest ==== */

void TControl_CMDesignHitTest(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


/* ==== 00430118 FUN_00430118 ==== */

int * FUN_00430118(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int i_val;
  int *piVar2;
  int local_1c [4];
  
  piVar2 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  }
  piVar2 = (int *)0x0;
  i_val = (**(code **)(*param_1 + 0x54))();
  if (i_val != 0) {
    i_val = (**(code **)(*param_1 + 0x54))();
    iVar1 = FUN_00402ee0(param_1);
    if (i_val != iVar1) {
      i_val = (**(code **)(*param_1 + 0x54))();
      piVar2 = (int *)(**(code **)(i_val + 0x2c))(i_val,1,*(undefined4 *)PTR_DAT_004ab8ac);
      TControl_SetTop(piVar2,local_1c[1]);
      TControl_SetLeft(piVar2,local_1c[0]);
      FUN_0042e1b0(piVar2,local_1c[2] - local_1c[0]);
      FUN_0042e1f4(piVar2,local_1c[3] - local_1c[1]);
    }
  }
  return piVar2;
}


/* ==== 004301a0 FUN_004301a0 ==== */

void FUN_004301a0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_stack_00000004;
  int local_24 [4];
  int local_14 [2];
  int local_c;
  int local_8;
  
  piVar3 = (int *)(in_stack_00000004 + -4);
  FUN_0040f7d0(*(undefined4 *)(*piVar3 + 0x30),*(undefined4 *)(*piVar3 + 0x34),local_14);
  FUN_0042e2ac(*(int **)(*piVar3 + 0x24),local_14,&local_c);
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 8);
  piVar2 = *(int **)(*piVar3 + 0x24);
  FUN_0040f804((piVar2[0xc] + *(int *)(iVar1 + 0x44)) - local_c,
               (piVar2[0xd] + *(int *)(iVar1 + 0x48)) - local_8,
               ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x44)) + piVar2[0xe]) -
               *(int *)(*piVar3 + 0x38),local_24,
               ((*(int *)(iVar1 + 0x50) - *(int *)(iVar1 + 0x48)) + piVar2[0xf]) -
               *(int *)(*piVar3 + 0x3c));
  FUN_0042e15c(piVar2,local_24);
  return;
}


/* ==== 0043022c TControl.CMFloatChanged ==== */

void TControl_CMFloatChanged(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if ((cVar1 == '\0') || (param_1[9] == 0)) {
    piVar2 = FUN_00430118(param_1,(undefined4 *)(*(int *)(param_2 + 8) + 0x44));
    if (piVar2 != (int *)0x0) {
      *(int **)(*(int *)(param_2 + 8) + 4) = piVar2;
      iVar3 = FUN_004349e0(piVar2);
      *(int *)(*(int *)(param_2 + 8) + 8) = iVar3;
    }
  }
  else {
    FUN_004301a0();
  }
  return;
}


/* ==== 0043028c TControl.dynamic_fff0 ==== */

void TControl_dynamic_fff0(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = (uint *)0x0;
  puStack_20 = &LAB_00430371;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = FUN_00403114(param_2,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if ((char)uVar2 == '\0') goto LAB_00430356;
  if (param_3 == '\0') {
LAB_004302ea:
    TGroupBox_SetCaption((int)param_1,(uint *)param_2[0x15]);
  }
  else {
    TGroupBox_GetCaption((int)param_1,&local_8);
    uVar4 = local_8 == 0;
    if ((bool)uVar4) goto LAB_004302ea;
    TGroupBox_GetCaption((int)param_1,(int *)&local_c);
    FUN_00403fec(local_c,(uint *)param_1[2]);
    if ((bool)uVar4) goto LAB_004302ea;
  }
  if (param_3 == '\0') {
LAB_00430303:
    (**(code **)(*param_1 + 0x5c))(param_1,*(undefined1 *)((int)param_2 + 0x59));
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
    if (cVar1 == '\x01') goto LAB_00430303;
  }
  if ((param_3 == '\0') || (param_1[0x1c] == 0)) {
    FUN_00403cb0(param_1 + 0x1c,(undefined4 *)param_2[0x18]);
    uVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
  }
  if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x47) == '\x01')) {
    TGroupBox_SetVisible
              (param_1,CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)((int)param_2 + 0x6a)),uVar2
              );
  }
  if ((param_3 == '\0') || (*(short *)((int)param_1 + 0x10a) == 0)) {
    param_1[0x42] = param_2[0xc];
    param_1[0x43] = param_2[0xd];
  }
LAB_00430356:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00430378;
  puStack_20 = (undefined1 *)0x430370;
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 004303a4 TControl.dynamic_ffde ==== */

undefined ** TControl_dynamic_ffde(void)

{
  return &PTR_TControlActionLink_virtual_000_00429d58;
}


/* ==== 004303cc FUN_004303cc ==== */

undefined4 FUN_004303cc(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x28))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 004303ec FUN_004303ec ==== */

undefined4 FUN_004303ec(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x30))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043040c FUN_0043040c ==== */

undefined4 FUN_0043040c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x3c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043042c FUN_0043042c ==== */

undefined4 FUN_0043042c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 8))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043044c TControl.virtual_00c ==== */

void TControl_virtual_00c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  TComponent_virtual_00c((int)param_1);
  iVar1 = TButton_GetAction((int)param_1);
  if (iVar1 != 0) {
    uVar2 = TButton_GetAction((int)param_1);
    FUN_00403178(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  FUN_0042de78((int)param_1);
  return;
}


/* ==== 00430484 TControl.virtual_000 ==== */

void TControl_virtual_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_1c = &LAB_0043051d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_000(param_1,param_2);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x4c))();
    FUN_00439d30(param_2,uVar1);
    THintAction_SetHint(param_2,(uint *)param_1[0x1c]);
    TGroupBox_GetCaption((int)param_1,(int *)&local_8);
    FUN_00439c70(param_2,local_8);
    FUN_00439efc(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x47)));
    (**(code **)(*param_2 + 0x34))();
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00430524;
  puStack_1c = (undefined1 *)0x43051c;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0043052c FUN_0043052c ==== */

int FUN_0043052c(double *param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  int i_val;
  
  iVar2 = 0;
  if (0 < param_2) {
    i_val = 1;
    pdVar1 = param_1;
    do {
      pdVar1 = pdVar1 + 1;
      if (*pdVar1 < param_1[iVar2]) {
        iVar2 = i_val;
      }
      i_val = i_val + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar2;
}


/* ==== 00430568 TControl.dynamic_ffdd ==== */

undefined4 TControl_dynamic_ffdd(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = *param_2;
  local_18 = param_2[1];
  uVar2 = 0;
  if (iVar1 < 1) {
    uVar2 = 3;
  }
  else if (iVar1 < *(int *)(param_1 + 0x38)) {
    if (local_18 < 1) {
      uVar2 = 1;
    }
    else if (local_18 < *(int *)(param_1 + 0x3c)) {
      local_14 = *(int *)(param_1 + 0x3c) - local_18;
      local_1c = *(int *)(param_1 + 0x38) - iVar1;
      local_3c = (double)iVar1;
      local_34 = (double)local_1c;
      local_2c = (double)local_18;
      local_24 = (double)local_14;
      iVar1 = FUN_0043052c(&local_3c,3);
      if (iVar1 == 0) {
        uVar2 = 3;
      }
      else if (iVar1 == 1) {
        uVar2 = 4;
      }
      else if (iVar1 == 2) {
        uVar2 = 1;
      }
      else if (iVar1 == 3) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}


/* ==== 00430618 TControl.virtual_050 ==== */

undefined4 TControl_virtual_050(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x24] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    uVar2 = FUN_00403114((int *)param_1[0x24],iVar1);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00430644 TControl.virtual_054 ==== */

undefined4 TControl_virtual_054(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}


/* ==== 0043064c TControl.dynamic_ffef ==== */

void TControl_dynamic_ffef(int *param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_1[0xf],param_1[0xe]);
  }
  return;
}


/* ==== 00430668 FUN_00430668 ==== */

uint FUN_00430668(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00403178(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    if ((param_2 & 2) == 2) {
      param_2 = param_2 & 0xfffffffd;
    }
    else if ((param_2 & 1) != 1) {
      param_2 = param_2 | 2;
    }
  }
  uVar2 = FUN_004306a8((int)param_1);
  return param_2 | uVar2;
}


/* ==== 004306a8 FUN_004306a8 ==== */

undefined4 FUN_004306a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042ed5c(param_1);
  if ((char)uVar1 != '\0') {
    return 0x20000;
  }
  return 0;
}


/* ==== 004306c4 TControl.virtual_070 ==== */

void TControl_virtual_070(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x1c))();
  }
  return;
}


/* ==== 004306d4 TControl.CMHintShow ==== */

void TControl_CMHintShow(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x60))(piVar1,*(int *)(param_2 + 8) + 0x38);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}


/* ==== 00430700 TControl.WMContextMenu ==== */

void TControl_WMContextMenu(int *param_1,int param_2)

{
  POINT pt;
  BOOL BVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  LONG LVar3;
  LONG LVar4;
  int local_38;
  LONG local_34;
  LONG local_30;
  LONG local_2c;
  byte local_28 [4];
  RECT local_24;
  int aiStack_14 [2];
  
  if ((*(int *)(param_2 + 0xc) == 0) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    FUN_004070e8(*(undefined4 *)(param_2 + 8),&local_38);
    if (local_38 < 0) {
      local_30 = local_38;
      local_2c = local_34;
    }
    else {
      FUN_0042e2d8(param_1,&local_38,&local_30);
      LVar3 = local_30;
      LVar4 = local_2c;
      (**(code **)(*param_1 + 0x40))(param_1,&local_24);
      pt.y = LVar4;
      pt.x = LVar3;
      BVar1 = PtInRect(&local_24,pt);
      if (BVar1 == 0) {
        (**(code **)(*param_1 + -0x10))(param_1,param_2);
        return;
      }
    }
    local_28[0] = 0;
    FUN_00403178(param_1,&local_30,local_28);
    *(uint *)(param_2 + 0xc) = (uint)local_28[0];
    if (local_28[0] == 0) {
      piVar2 = (int *)FUN_00403178(param_1,extraout_EDX,extraout_ECX);
      if ((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x51) != '\0')) {
        FUN_0042e304(param_1,0);
        piVar2[0x15] = (int)param_1;
        if (local_38 < 0) {
          FUN_0040f7d0(0,0,aiStack_14);
          FUN_0042e2ac(param_1,aiStack_14,&local_38);
        }
        (**(code **)(*piVar2 + 0x40))(piVar2,local_38,local_34);
        *(undefined4 *)(param_2 + 0xc) = 1;
      }
      if (*(int *)(param_2 + 0xc) == 0) {
        (**(code **)(*param_1 + -0x10))(param_1,param_2);
      }
    }
  }
  return;
}


/* ==== 00430814 TControl.dynamic_ffe8 ==== */

void TControl_dynamic_ffe8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = *param_2;
  uStack_10 = param_2[1];
  if (*(short *)(param_1 + 0x11a) != 0) {
    (**(code **)(param_1 + 0x118))(*(undefined4 *)(param_1 + 0x11c),param_1,&local_14,param_3);
  }
  return;
}


/* ==== 00430848 TWinControlActionLink.virtual_000 ==== */

void TWinControlActionLink_virtual_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TControlActionLink_virtual_000(param_1,param_2);
  uVar1 = FUN_0040312c(param_2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


/* ==== 0043086c TWinControlActionLink.virtual_02c ==== */

undefined4 TWinControlActionLink_virtual_02c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_02c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (*(int *)(iVar2 + 0x5c) == *(int *)(*(int *)(param_1 + 0x20) + 0x150)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 0x5c) >> 8),1);
    }
  }
  return 0;
}


/* ==== 004308a0 TWinControlActionLink.virtual_04c ==== */

void TWinControlActionLink_virtual_04c(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[8] + 0x150) = param_2;
  }
  return;
}


/* ==== 004308c0 TWinControl.virtual_02c ==== */

void TWinControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_30;
  undefined1 *puStackY_2c;
  undefined1 *puStackY_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_c = (undefined4 *)0x0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStackY_28 = (undefined1 *)0x4308d9;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStackY_2c = &LAB_004309b2;
  uStackY_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_30;
  puStackY_28 = &stack0xfffffffc;
  TControl_virtual_02c(param_1,'\0',param_3);
  puVar1 = FUN_00444580();
  param_1[0x57] = (int)puVar1;
  piVar2 = FUN_00418838((int *)&PTR_TPersistent_virtual_000_00416cfc,'\x01',extraout_ECX_00);
  param_1[0x4c] = (int)piVar2;
  TBrush_SetColor(piVar2,param_1[0x18]);
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5c] = -1;
  *(undefined1 *)(param_1 + 0x55) = 3;
  if (*(short *)(PTR_DAT_004aba14 + 4) == 0x11) {
    FUN_00403c5c(param_1 + 0x56);
  }
  else {
    FUN_0044b568(*(int *)PTR_DAT_004ab9f8,(int *)&local_c,extraout_ECX_01);
    FUN_00403cb0(param_1 + 0x56,local_c);
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0xf;
  *(undefined1 *)((int)param_1 + 0x123) = 2;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 1;
  *in_FS_OFFSET = uStackY_30;
  puStackY_28 = &LAB_004309b9;
  puStackY_2c = (undefined1 *)0x4309b1;
  FUN_00403c5c((int *)&local_c);
  return;
}


/* ==== 004309dc TWinControl.Destroy ==== */

void TWinControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0041581c((int)piVar1);
  if ((char)piVar1[0x51] != '\0') {
    *(undefined1 *)(piVar1 + 0x51) = 0;
    FUN_0042c648((int)piVar1,'\0',extraout_ECX);
  }
  FUN_00405860(piVar1 + 0x52);
  FUN_00402f9c((int *)piVar1[0x50]);
  if (piVar1[9] != 0) {
    FUN_0043157c(piVar1,'\x01');
  }
  if (piVar1[0x53] != 0) {
    (**(code **)(*piVar1 + 0x9c))();
  }
  iVar2 = FUN_004317bc((int)piVar1);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_00431780((int)piVar1,iVar2 + -1);
    FUN_004315e8((int)piVar1,piVar3);
    (**(code **)(*piVar3 + -4))(piVar3,1);
    iVar2 = FUN_004317bc((int)piVar1);
  }
  FUN_00402f9c((int *)piVar1[0x4c]);
  if (piVar1[0x57] != 0) {
    FUN_00444618(piVar1[0x57]);
  }
  TControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00430ab0 FUN_00430ab0 ==== */

void FUN_00430ab0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int j;
  int i_val;
  int k;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    puStack_1c = (undefined1 *)0x430ad7;
    piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
    puStack_20 = &LAB_00430b74;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    i_val = *(int *)(*(int *)(param_1 + 0x180) + 8);
    puStack_1c = &stack0xfffffffc;
    FUN_004104a4(piVar2,i_val);
    if (-1 < i_val + -1) {
      k = 0;
      j = i_val;
      do {
        iVar3 = FUN_004102b0(*(undefined4 **)(param_1 + 0x180),k);
        iVar1 = *(int *)(iVar3 + 0x170);
        if ((-1 < iVar1) && (iVar1 < i_val)) {
          FUN_004103fc(piVar2,iVar1,iVar3);
        }
        k = k + 1;
        j = j + -1;
      } while (j != 0);
    }
    if (-1 < i_val + -1) {
      j = 0;
      do {
        k = FUN_004102b0(piVar2,j);
        if (k != 0) {
          FUN_00434b98(k,(short)j);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x430b7b;
    puStack_20 = (undefined1 *)0x430b73;
    FUN_00402f9c(piVar2);
    return;
  }
  return;
}


/* ==== 00430b84 TWinControl.virtual_014 ==== */

void TWinControl_virtual_014(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x430b96;
  FUN_00431324((int)param_1);
  puStack_14 = &LAB_00430bc4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  TControl_virtual_014(param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00430bcb;
  puStack_14 = (undefined1 *)0x430bc3;
  FUN_0043132c((int)param_1);
  return;
}


/* ==== 00430bfc TWinControl.virtual_084 ==== */

void TWinControl_virtual_084(void)

{
  return;
}


/* ==== 00430c00 FUN_00430c00 ==== */

uint FUN_00430c00(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_3 == '\x01') {
    uVar1 = (uint)(*(int *)(param_1 + 0x34) < *(int *)(param_2 + 0x34));
  }
  else if (param_3 == '\x02') {
    iVar2 = *(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x3c);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 <= *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c));
  }
  else if (param_3 == '\x03') {
    uVar1 = (uint)(*(int *)(param_1 + 0x30) < *(int *)(param_2 + 0x30));
  }
  else if (param_3 == '\x04') {
    iVar2 = *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x38);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 <= *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38));
  }
  return uVar1;
}


/* ==== 00430c60 FUN_00430c60 ==== */

void FUN_00430c60(int *param_1,byte param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *in_FS_OFFSET;
  undefined1 local_2c [8];
  int local_24;
  int local_20;
  int numerator;
  int numerator_2;
  uint local_14;
  uint local_10;
  byte local_9;
  int *local_8;
  
  local_9 = param_2;
  local_8 = param_1;
  if ((param_2 == 0) || ((&DAT_004aa700)[param_2] != *(char *)((int)param_1 + 0x51))) {
    if ((param_1[0x20] != 0) && (param_1[0x21] != 0)) {
      iVar4 = param_1[0xc];
      iVar6 = param_1[0xd];
      local_10 = param_1[0xe];
      local_14 = param_1[0xf];
      bVar2 = FUN_00434cdc(param_1[9]);
      if (bVar2) {
        (**(code **)(*(int *)local_8[9] + 0x40))((int *)local_8[9],local_2c);
        numerator = local_24;
        numerator_2 = local_20;
      }
      else {
        FUN_0040f7d0(*(undefined4 *)(local_8[9] + 0x38),*(undefined4 *)(local_8[9] + 0x3c),
                     &numerator);
      }
      if ((*(byte *)((int)local_8 + 0x51) & 4) == 0) {
        if ((*(byte *)((int)local_8 + 0x51) & 1) == 0) {
          iVar4 = MulDiv(local_8[0x1e],numerator,local_8[0x20]);
          iVar3 = (int)local_10 >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((local_10 & 1) != 0);
          }
          iVar4 = iVar4 - iVar3;
        }
      }
      else if ((*(byte *)((int)local_8 + 0x51) & 1) == 0) {
        iVar4 = numerator - (local_8[0x20] - local_8[0x1e]);
      }
      else {
        local_10 = numerator - (local_8[0x20] - local_8[0x1e]);
      }
      if ((*(byte *)((int)local_8 + 0x51) & 8) == 0) {
        if ((*(byte *)((int)local_8 + 0x51) & 2) == 0) {
          iVar6 = MulDiv(local_8[0x1f],numerator_2,local_8[0x21]);
          iVar3 = (int)local_14 >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((local_14 & 1) != 0);
          }
          iVar6 = iVar6 - iVar3;
        }
      }
      else if ((*(byte *)((int)local_8 + 0x51) & 2) == 0) {
        iVar6 = numerator_2 - (local_8[0x21] - local_8[0x1f]);
      }
      else {
        local_14 = numerator_2 - (local_8[0x21] - local_8[0x1f]);
      }
      *(undefined1 *)((int)local_8 + 0x52) = 1;
      *in_FS_OFFSET = (uint)&stack0xffffffbc;
      (**(code **)(*local_8 + 0x7c))(local_8,iVar4,iVar6,local_14,local_10);
      *in_FS_OFFSET = local_14;
      *(undefined1 *)((int)local_8 + 0x52) = 0;
      return;
    }
    if (param_2 == 0) {
      return;
    }
  }
  local_10 = *(int *)(*(int *)(param_4 + -4) + 8) - **(int **)(param_4 + -4);
  if (((int)local_10 < 0) || ((byte)(param_2 - 3) < 2)) {
    local_10 = param_1[0xe];
  }
  local_14 = *(int *)(*(int *)(param_4 + -4) + 0xc) - *(int *)(*(int *)(param_4 + -4) + 4);
  if (((int)local_14 < 0) || ((byte)(param_2 - 1) < 2)) {
    local_14 = param_1[0xf];
  }
  uVar5 = **(undefined4 **)(param_4 + -4);
  uVar7 = *(undefined4 *)(*(int *)(param_4 + -4) + 4);
  if (param_2 == 1) {
    piVar1 = (int *)(*(int *)(param_4 + -4) + 4);
    *piVar1 = *piVar1 + local_14;
  }
  else if (param_2 == 2) {
    piVar1 = (int *)(*(int *)(param_4 + -4) + 0xc);
    *piVar1 = *piVar1 - local_14;
    uVar7 = *(undefined4 *)(*(int *)(param_4 + -4) + 0xc);
  }
  else if (param_2 == 3) {
    **(int **)(param_4 + -4) = **(int **)(param_4 + -4) + local_10;
  }
  else if (param_2 == 4) {
    piVar1 = (int *)(*(int *)(param_4 + -4) + 8);
    *piVar1 = *piVar1 - local_10;
    uVar5 = *(undefined4 *)(*(int *)(param_4 + -4) + 8);
  }
  *(undefined1 *)((int)param_1 + 0x52) = 1;
  *in_FS_OFFSET = (uint)&stack0xffffffbc;
  (**(code **)(*param_1 + 0x7c))(param_1,uVar5,uVar7,local_14,local_10);
  *in_FS_OFFSET = local_14;
  *(undefined1 *)((int)local_8 + 0x52) = 0;
  return;
}


/* ==== 00430ffc FUN_00430ffc ==== */

void FUN_00430ffc(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int k;
  undefined4 i_val;
  undefined4 j;
  
  (**(code **)(**(int **)(param_4 + -8) + 8))();
  if (((*(int *)(param_4 + -0xc) != 0) &&
      (((param_1 == 0 || (*(char *)(*(int *)(param_4 + -0xc) + 0x47) != '\0')) ||
       (((*(byte *)(*(int *)(param_4 + -0xc) + 0x20) & 0x10) != 0 &&
        ((*(byte *)(*(int *)(param_4 + -0xc) + 0x41) & 4) == 0)))))) &&
     (param_1 == *(byte *)(*(int *)(param_4 + -0xc) + 0x4b))) {
    FUN_00410104(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc));
  }
  i_val = FUN_004317bc(*(int *)(param_4 + -0x10));
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_00431780(*(int *)(param_4 + -0x10),j);
      if (((param_1 == *(byte *)(iVar1 + 0x4b)) &&
          ((((param_1 == 0 || (*(char *)(iVar1 + 0x47) != '\0')) ||
            ((*(uint *)(iVar1 + 0x40) & 0x401) == 0x401)) ||
           (((*(byte *)(iVar1 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar1 + 0x41) & 4) == 0)))))) &&
         (iVar1 != *(int *)(param_4 + -0xc))) {
        for (k = 0; k < *(int *)(*(int *)(param_4 + -8) + 8); k = k + 1) {
          iVar2 = FUN_004102b0(*(undefined4 **)(param_4 + -8),k);
          uVar3 = FUN_00430c00(iVar1,iVar2,param_1);
          if ((char)uVar3 != '\0') break;
        }
        FUN_0041032c(*(int **)(param_4 + -8),k,iVar1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  i_val = *(int *)(*(int *)(param_4 + -8) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = param_4;
      piVar4 = (int *)FUN_004102b0(*(undefined4 **)(param_4 + -8),j);
      FUN_00430c60(piVar4,param_1,extraout_ECX,iVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00431150 FUN_00431150 ==== */

undefined4 FUN_00431150(void)

{
  int i_val;
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 uVar2;
  int *piVar3;
  int in_stack_00000004;
  
  piVar3 = (int *)(in_stack_00000004 + -0x10);
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  i_val = FUN_004317bc(*piVar3);
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      iVar1 = FUN_00431780(*piVar3,i_val);
      if (*(char *)(iVar1 + 0x4b) != '\0') {
        return uVar2;
      }
      iVar1 = FUN_00431780(*piVar3,i_val);
      if (*(char *)(iVar1 + 0x51) != '\x03') {
        return uVar2;
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return 0;
}


/* ==== 004311a4 TWinControl.virtual_088 ==== */

void TWinControl_virtual_088(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  if ((((char)param_1[0x51] != '\0') && ((char)param_1[0x5f] != '\0')) && (param_1[0x52] != 0)) {
    puStack_1c = (undefined1 *)0x4311e8;
    (**(code **)(*(int *)param_1[0x52] + 0x2c))((int *)param_1[0x52],0);
  }
  puStack_20 = (undefined1 *)0x4311ee;
  puStack_1c = &stack0xfffffffc;
  uVar2 = FUN_00431150();
  puVar1 = puStack_1c;
  if ((char)uVar2 != '\0') {
    puStack_1c = (undefined1 *)0x431201;
    (**(code **)(*param_1 + 0x84))(param_1,param_3);
    puStack_1c = (undefined1 *)0x43120d;
    piVar3 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX);
    puStack_20 = &LAB_0043126a;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00430ffc(1,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
    FUN_00430ffc(2,extraout_EDX_01,puVar4,(int)&stack0xfffffffc);
    FUN_00430ffc(3,extraout_EDX_02,puVar5,(int)&stack0xfffffffc);
    FUN_00430ffc(4,extraout_EDX_03,puVar6,(int)&stack0xfffffffc);
    FUN_00430ffc(5,extraout_EDX_04,puVar7,(int)&stack0xfffffffc);
    FUN_00430ffc(0,extraout_EDX_05,puVar8,(int)&stack0xfffffffc);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x431271;
    puStack_20 = (undefined1 *)0x431269;
    FUN_00402f9c(piVar3);
    return;
  }
  if ((char)param_1[0x5a] != '\0') {
    puStack_1c = (undefined1 *)0x431289;
    FUN_00403178(param_1,extraout_EDX,puVar1);
  }
  return;
}


/* ==== 00431290 FUN_00431290 ==== */

void FUN_00431290(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  int *local_8;
  
  puStack_20 = (undefined1 *)0x4312a4;
  local_8 = param_1;
  bVar1 = FUN_00434cdc((int)param_1);
  if ((bVar1) && ((*(byte *)(local_8 + 8) & 8) == 0)) {
    if ((short)local_8[0x48] == 0) {
      puStack_20 = (undefined1 *)0x4312d0;
      FUN_00431324((int)local_8);
      puStack_24 = &LAB_00431317;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x40))(local_8,local_18);
      (**(code **)(*local_8 + 0x88))(local_8,param_2,local_18);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x43131e;
      *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xffef;
      puStack_24 = (undefined1 *)0x431316;
      FUN_0043132c((int)local_8);
      return;
    }
    *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) | 0x10;
  }
  return;
}


/* ==== 00431324 FUN_00431324 ==== */

void FUN_00431324(int param_1)

{
  *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + 1;
  return;
}


/* ==== 0043132c FUN_0043132c ==== */

void FUN_0043132c(int param_1)

{
  *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + -1;
  if ((*(short *)(param_1 + 0x120) == 0) && ((*(byte *)(param_1 + 0x44) & 0x10) != 0)) {
    FUN_0043134c((int *)param_1);
  }
  return;
}


/* ==== 0043134c FUN_0043134c ==== */

void FUN_0043134c(int *param_1)

{
  FUN_00431290(param_1,0);
  return;
}


/* ==== 00431354 TWinControl.dynamic_ffc7 ==== */

void TWinControl_dynamic_ffc7(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int i_val;
  int j;
  int *piVar2;
  int iVar3;
  int k;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x43136c;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
  puStack_24 = &LAB_00431419;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  i_val = TForm_GetClientWidth(param_1);
  j = FUN_004317bc((int)param_1);
  if (-1 < j + -1) {
    k = 0;
    do {
      piVar2 = (int *)FUN_00431780((int)param_1,k);
      if (piVar2[1] == param_1[1]) {
        iVar3 = FUN_00431780((int)param_1,k);
        FUN_00410104(piVar1,iVar3);
        TControl_SetLeft(piVar2,(i_val - piVar2[0xe]) - piVar2[0xc]);
      }
      k = k + 1;
      j = j + -1;
    } while (j != 0);
  }
  i_val = piVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar4 = 0;
      k = FUN_004102b0(piVar1,j);
      FUN_0042f720(k,0xb03e,0,uVar4);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00431420;
  puStack_24 = (undefined1 *)0x431418;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 00431428 TWinControl.dynamic_ffba ==== */

void TWinControl_dynamic_ffba(int *param_1)

{
  int i_val;
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar4;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  undefined4 extraout_EDX_02;
  undefined3 uVar6;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x43143f;
  i_val = FUN_004317bc((int)param_1);
  if (i_val != 0) {
    puStack_20 = (undefined1 *)0x431453;
    piVar1 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX);
    puStack_20 = (undefined1 *)0x43145e;
    FUN_00431324((int)param_1);
    puStack_24 = &LAB_0043150f;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    i_val = FUN_004317bc((int)param_1);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX;
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar2 = FUN_00431780((int)param_1,j);
        uVar4 = extraout_ECX_01;
        uVar5 = extraout_EDX_00;
        if ((byte)(*(char *)(iVar2 + 0x4b) - 3U) < 2) {
          iVar2 = FUN_00431780((int)param_1,j);
          FUN_00410104(piVar1,iVar2);
          uVar4 = extraout_ECX_02;
          uVar5 = extraout_EDX_01;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_00403178(param_1,uVar5,uVar4);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &DAT_00431516;
    while (0 < piVar1[2]) {
      puStack_24 = (undefined1 *)0x4314cf;
      piVar3 = (int *)FUN_004102b0(piVar1,piVar1[2] + -1);
      uVar6 = (undefined3)((uint)extraout_EDX_02 >> 8);
      if (*(char *)((int)piVar3 + 0x4b) == '\x03') {
        puStack_24 = (undefined1 *)0x4314dc;
        TGroupBox_SetAlign(piVar3,CONCAT31(uVar6,4),extraout_ECX_03);
      }
      else {
        puStack_24 = (undefined1 *)0x4314e5;
        TGroupBox_SetAlign(piVar3,CONCAT31(uVar6,3),extraout_ECX_03);
      }
      puStack_24 = (undefined1 *)0x4314f4;
      FUN_00410150(piVar1,piVar1[2] + -1);
    }
    puStack_24 = (undefined1 *)0x431506;
    FUN_00402f9c(piVar1);
    puStack_24 = (undefined1 *)0x43150e;
    FUN_0043132c((int)param_1);
    return;
  }
  return;
}


/* ==== 00431568 thunk_FUN_0043156d ==== */

bool thunk_FUN_0043156d(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}


/* ==== 0043156d FUN_0043156d ==== */

bool FUN_0043156d(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}


/* ==== 0043157c FUN_0043157c ==== */

void FUN_0043157c(int *param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = FUN_00444864(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_00448314(piVar1,(int)param_1,param_2);
  }
  return;
}


/* ==== 0043159c FUN_0043159c ==== */

void FUN_0043159c(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
    if ((char)uVar1 == '\0') {
      FUN_0042d1e0((int *)(param_1 + 0x134),(int)param_2,extraout_ECX);
    }
    else {
      FUN_0042d1e0((int *)(param_1 + 0x180),(int)param_2,extraout_ECX);
      FUN_0042d1e0((int *)(param_1 + 0x16c),(int)param_2,extraout_ECX_00);
    }
    param_2[9] = param_1;
  }
  return;
}


/* ==== 004315e8 FUN_004315e8 ==== */

void FUN_004315e8(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
  if ((char)uVar1 == '\0') {
    FUN_0042d208((int *)(param_1 + 0x134),(int)param_2);
  }
  else {
    FUN_0042d208((int *)(param_1 + 0x16c),(int)param_2);
    FUN_0042d208((int *)(param_1 + 0x180),(int)param_2);
  }
  param_2[9] = 0;
  return;
}


/* ==== 00431630 FUN_00431630 ==== */

void FUN_00431630(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00403178(param_2,param_1,param_3);
  FUN_0042f720((int)param_1,0xb02c,param_2,1);
  FUN_0043159c((int)param_1,param_2);
  if ((*(byte *)(param_2 + 0x11) & 8) == 0) {
    FUN_0042f720((int)param_2,0xb009,0,0);
    FUN_0042f720((int)param_2,0xb008,0,0);
    FUN_0042f720((int)param_2,0xb023,0,0);
    FUN_0042f720((int)param_2,0xb03d,0,0);
    uVar2 = FUN_00403114(param_2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
    if ((char)uVar2 == '\0') {
      bVar1 = FUN_00434cdc((int)param_1);
      if (bVar1) {
        (**(code **)(*param_2 + 0x74))();
      }
    }
    else {
      FUN_0042f720((int)param_2,0xb011,0,0);
      FUN_00431f54(param_1);
    }
    FUN_00431290(param_1,param_2);
  }
  FUN_0042f720((int)param_1,0xb036,param_2,1);
  return;
}


/* ==== 00431704 FUN_00431704 ==== */

void FUN_00431704(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_0042f720((int)param_1,0xb036,param_2,0);
  uVar2 = FUN_00403114(param_2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      FUN_0042eb70((int)param_2,*(char *)((int)param_2 + 0x47),'\0');
    }
  }
  else {
    FUN_0043157c(param_2,'\x01');
    FUN_00431dbc(param_2);
  }
  FUN_004315e8((int)param_1,param_2);
  FUN_0042f720((int)param_1,0xb02c,param_2,0);
  FUN_0043134c(param_1);
  return;
}


/* ==== 00431780 FUN_00431780 ==== */

void FUN_00431780(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x134);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = puVar1[2];
  }
  if (param_2 < iVar2) {
    FUN_004102b0(puVar1,param_2);
  }
  else {
    FUN_004102b0(*(undefined4 **)(param_1 + 0x180),param_2 - iVar2);
  }
  return;
}


/* ==== 004317bc FUN_004317bc ==== */

int FUN_004317bc(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x134) + 8);
  }
  if (*(int *)(param_1 + 0x180) != 0) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_1 + 0x180) + 8);
  }
  return iVar1;
}


/* ==== 004317dc FUN_004317dc ==== */

void FUN_004317dc(int param_1,int param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_004317bc(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_00431780(param_1,j);
      (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c),param_2);
      if (*(int *)(param_2 + 0xc) != 0) {
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0043181c FUN_0043181c ==== */

void FUN_0043181c(int param_1,uint param_2)

{
  uint local_10 [4];
  
  local_10[0] = param_2 & 0xffff;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  FUN_004317dc(param_1,(int)local_10);
  return;
}


/* ==== 00431844 FUN_00431844 ==== */

void FUN_00431844(undefined4 param_1,int param_2,LPCSTR class_name)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (class_name != (LPCSTR)0x0) {
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    BVar2 = GetClassInfoA(DAT_004ac4dc,class_name,(LPWNDCLASSA)(param_2 + 0x24));
    if (BVar2 == 0) {
      BVar2 = GetClassInfoA((HINSTANCE)0x0,class_name,(LPWNDCLASSA)(param_2 + 0x24));
      if (BVar2 == 0) {
        BVar2 = GetClassInfoA(*(HINSTANCE *)PTR_DAT_004ab73c,class_name,
                              (LPWNDCLASSA)(param_2 + 0x24));
        if (BVar2 == 0) {
          GetClassInfoA(*(HINSTANCE *)(param_2 + 0x34),class_name,(LPWNDCLASSA)(param_2 + 0x24));
        }
      }
    }
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffbf1f | 3;
  }
  return;
}


/* ==== 004318b0 FUN_004318b0 ==== */

void FUN_004318b0(int *param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  
  uVar2 = FUN_0042ed5c((int)param_1);
  if ((char)uVar2 != '\0') {
    *param_2 = *param_2 | 0x2000;
  }
  uVar2 = FUN_0042ed8c((int)param_1);
  if ((char)uVar2 != '\0') {
    *param_2 = *param_2 | 0x4000;
  }
  cVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  if (cVar1 != '\0') {
    cVar1 = FUN_00403178(param_1,extraout_EDX_00,extraout_ECX_00);
    if (cVar1 == '\0') {
      *param_2 = *param_2 | 0x1000;
    }
    else {
      cVar1 = FUN_00403178(param_1,extraout_EDX_01,extraout_ECX_01);
      if (cVar1 == '\x01') {
        *param_2 = *param_2;
      }
    }
  }
  return;
}


/* ==== 00431918 TWinControl.virtual_090 ==== */

void TWinControl_virtual_090(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  HCURSOR pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_108 [256];
  undefined *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_11c = &LAB_00431a36;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402c30(param_2,0x8c,0);
  *param_2 = param_1[0x15];
  param_2[1] = 0x44000000;
  FUN_004318b0(param_1,(uint *)(param_2 + 2));
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2[1] = param_2[1] | 0x2000000;
    param_2[2] = param_2[2] | 0x10000;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 == '\0') {
      param_2[1] = param_2[1] | 0x8000000;
    }
  }
  if ((char)param_1[0x5d] != '\0') {
    param_2[1] = param_2[1] | 0x10000;
  }
  param_2[3] = param_1[0xc];
  param_2[4] = param_1[0xd];
  param_2[5] = param_1[0xe];
  param_2[6] = param_1[0xf];
  if ((int *)param_1[9] == (int *)0x0) {
    param_2[7] = param_1[0x59];
  }
  else {
    iVar2 = FUN_004349e0((int *)param_1[9]);
    param_2[7] = iVar2;
  }
  param_2[9] = 0xb;
  param_2[10] = (int)DefWindowProcA;
  pHVar3 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  param_2[0xf] = (int)pHVar3;
  param_2[0x10] = 0;
  param_2[0xd] = DAT_004ac4dc;
  FUN_00402ee4(*param_1,local_108);
  FUN_00403e80((int *)&local_8,local_108);
  FUN_00408be8((char *)(param_2 + 0x13),local_8);
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_00431a3d;
  puStack_11c = (undefined1 *)0x431a35;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00431a44 TWinControl.virtual_098 ==== */

void TWinControl_virtual_098(int *param_1)

{
  ATOM AVar1;
  undefined4 uVar2;
  BOOL BVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  byte *local_c4;
  int local_c0;
  undefined1 local_bc;
  tagWNDCLASSA wndclass;
  undefined1 local_90 [7];
  byte local_89;
  int local_74;
  WNDCLASSA wndclass_2;
  CHAR local_44 [64];
  
  puStack_d0 = &stack0xfffffffc;
  local_c4 = (byte *)0x0;
  puStack_d4 = &LAB_00431bcf;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  (**(code **)(*param_1 + 0x90))(param_1,local_90);
  if ((local_74 == 0) && ((local_89 & 0x40) != 0)) {
    piVar4 = (int *)param_1[1];
    if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 2) != 0)) {
      uVar2 = FUN_00403114(piVar4,(int)&PTR_TWinControl_virtual_000_0042ac0c);
      if ((char)uVar2 != '\0') {
        local_74 = FUN_004349e0(piVar4);
        goto LAB_00431af0;
      }
    }
    local_c0 = param_1[2];
    local_bc = 0xb;
    piVar4 = &local_c0;
    uVar2 = 0;
    FUN_00405808((undefined4 *)PTR_PTR_004ab8f0,(int *)&local_c4);
    uVar2 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',local_c4,uVar2,piVar4);
    FUN_004036f4(uVar2);
  }
LAB_00431af0:
  param_1[0x4f] = (int)wndclass_2.lpfnWndProc;
  BVar3 = GetClassInfoA(wndclass_2.hInstance,local_44,&wndclass);
  if ((BVar3 == 0) || (wndclass.lpfnWndProc != FUN_0042b894)) {
    if (BVar3 != 0) {
      UnregisterClassA(local_44,wndclass_2.hInstance);
    }
    wndclass_2.lpfnWndProc = FUN_0042b894;
    wndclass_2.lpszClassName = local_44;
    AVar1 = RegisterClassA(&wndclass_2);
    if (AVar1 == 0) {
      FUN_0040c6d4();
    }
  }
  DAT_004aa6f8 = param_1;
  (**(code **)(*param_1 + 0x94))(param_1,local_90);
  if (param_1[0x53] == 0) {
    FUN_0040c6d4();
  }
  FUN_00408d6c(param_1[0x15]);
  param_1[0x15] = 0;
  FUN_00434ce8((int)param_1);
  uVar5 = 1;
  uVar2 = FUN_00418228(param_1[0x16]);
  FUN_0042f720((int)param_1,0x30,uVar2,uVar5);
  if ((char)param_1[0x13] != '\0') {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_d8;
  puStack_d0 = &LAB_00431bd6;
  puStack_d4 = (undefined1 *)0x431bce;
  FUN_00403c5c((int *)&local_c4);
  return;
}


/* ==== 00431bdc TWinControl.virtual_094 ==== */

void TWinControl_virtual_094(int param_1,undefined4 *param_2)

{
  HWND pHVar1;
  
  pHVar1 = CreateWindowExA(param_2[2],(LPCSTR)(param_2 + 0x13),(LPCSTR)*param_2,param_2[1],
                           param_2[3],param_2[4],param_2[5],param_2[6],(HWND)param_2[7],(HMENU)0x0,
                           (HINSTANCE)param_2[0xd],(LPVOID)param_2[8]);
  *(HWND *)(param_1 + 0x14c) = pHVar1;
  return;
}


/* ==== 00431c20 TWinControl.virtual_0a0 ==== */

void TWinControl_virtual_0a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0042e6a8((int)param_1);
  if (iVar1 < 1) {
    iVar1 = FUN_00408d40("");
    param_1[0x15] = iVar1;
  }
  else {
    piVar2 = FUN_00408d20(iVar1 + 1);
    param_1[0x15] = (int)piVar2;
    iVar1 = FUN_00408d34((int)piVar2);
    FUN_0042e6b8((int)param_1,piVar2,iVar1);
  }
  FUN_0042d314();
  (**(code **)(*param_1 + 0x9c))();
  return;
}


/* ==== 00431c78 TWinControl.virtual_09c ==== */

void TWinControl_virtual_09c(int param_1)

{
  BOOL BVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  *(ushort *)(param_1 + 0x44) = *(ushort *)(param_1 + 0x44) | 0x200;
  puStack_10 = &LAB_00431cc5;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  BVar1 = DestroyWindow(*(HWND *)(param_1 + 0x14c));
  if (BVar1 == 0) {
    FUN_0040c6d4();
  }
  *in_FS_OFFSET = uStack_14;
  *(ushort *)(local_8 + 0x44) = *(ushort *)(local_8 + 0x44) & 0xfdff;
  return;
}


/* ==== 00431cdc FUN_00431cdc ==== */

int FUN_00431cdc(int param_1,int param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_0041030c(*(int *)(param_1 + 0x180),param_2);
  i_val = i_val + 1;
  j = *(int *)(*(int *)(param_1 + 0x180) + 8) + -1;
  if (i_val <= j) {
    j = (j - i_val) + 1;
    do {
      iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x180),i_val);
      if (*(int *)(iVar1 + 0x14c) != 0) {
        return *(int *)(iVar1 + 0x14c);
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  return 0;
}


/* ==== 00431d24 TWinControl.virtual_08c ==== */

void TWinControl_virtual_08c(int *data)

{
  HWND hWndInsertAfter;
  int cy;
  UINT uFlags;
  int cx_val;
  int i_val;
  int j;
  
  if (data[0x53] == 0) {
    (**(code **)(*data + 0x98))();
    SetPropA((HWND)data[0x53],(LPCSTR)(uint)DAT_004ac75a,data);
    SetPropA((HWND)data[0x53],(LPCSTR)(uint)DAT_004ac758,data);
    if (data[9] != 0) {
      uFlags = 0x13;
      cy = 0;
      cx_val = 0;
      i_val = 0;
      j = 0;
      hWndInsertAfter = (HWND)FUN_00431cdc(data[9],(int)data);
      SetWindowPos((HWND)data[0x53],hWndInsertAfter,j,i_val,cx_val,cy,uFlags);
    }
    j = FUN_004317bc((int)data);
    if (-1 < j + -1) {
      i_val = 0;
      do {
        cx_val = FUN_00431780((int)data,i_val);
        FUN_0042de78(cx_val);
        i_val = i_val + 1;
        j = j + -1;
      } while (j != 0);
    }
  }
  return;
}


/* ==== 00431dbc FUN_00431dbc ==== */

void FUN_00431dbc(int *param_1)

{
  int *piVar1;
  int i_val;
  int j;
  
  if (param_1[0x53] != 0) {
    if ((param_1[0x60] != 0) && (i_val = *(int *)(param_1[0x60] + 8), -1 < i_val + -1)) {
      j = 0;
      do {
        piVar1 = (int *)FUN_004102b0((undefined4 *)param_1[0x60],j);
        FUN_00431dbc(piVar1);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    (**(code **)(*param_1 + 0xa0))();
  }
  return;
}


/* ==== 00431e04 FUN_00431e04 ==== */

void FUN_00431e04(int param_1)

{
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_0042f720(param_1,0xb033,0,0);
  }
  return;
}


/* ==== 00431e1c TWinControl.CMRecreateWnd ==== */

void TWinControl_CMRecreateWnd(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00403178(param_1,param_2,param_3);
  FUN_00431dbc(param_1);
  FUN_00431f54(param_1);
  if ((cVar1 != '\0') && (param_1[0x53] != 0)) {
    SetFocus((HWND)param_1[0x53]);
  }
  return;
}


/* ==== 00431e58 FUN_00431e58 ==== */

void FUN_00431e58(int *param_1)

{
  char cVar1;
  int *piVar2;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (((*(char *)((int)param_1 + 0x47) == '\0') &&
      (((*(byte *)(param_1 + 8) & 0x10) == 0 || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)))) ||
     ((*(byte *)(param_1 + 0x11) & 8) != 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    if (param_1[0x53] == 0) {
      puStack_1c = (undefined1 *)0x431eae;
      (**(code **)(*param_1 + 0x8c))();
    }
    if ((param_1[0x60] != 0) && (i_val = *(int *)(param_1[0x60] + 8), -1 < i_val + -1)) {
      j = 0;
      do {
        puStack_1c = (undefined1 *)0x431ed6;
        piVar2 = (int *)FUN_004102b0((undefined4 *)param_1[0x60],j);
        puStack_1c = (undefined1 *)0x431edb;
        FUN_00431e58(piVar2);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  if ((param_1[0x53] != 0) && ((char)param_1[0x5a] != cVar1)) {
    *(char *)(param_1 + 0x5a) = cVar1;
    puStack_20 = &LAB_00431f2e;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_0042f720((int)param_1,0xb019,0,0);
    *in_FS_OFFSET = uStack_24;
  }
  return;
}


/* ==== 00431f54 FUN_00431f54 ==== */

void FUN_00431f54(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = param_1;
  while (piVar1 = (int *)piVar3[9], piVar1 != (int *)0x0) {
    piVar3 = piVar1;
    if ((char)piVar1[0x5a] == '\0') {
      return;
    }
  }
  uVar2 = FUN_00403114(piVar3,(int)&PTR_TWinControl_virtual_000_00442cf0);
  if (((char)uVar2 == '\0') && (piVar3[0x59] == 0)) {
    return;
  }
  FUN_00431e58(param_1);
  return;
}


/* ==== 0043200c FUN_0043200c ==== */

void FUN_0043200c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  POINT pt;
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  LONG LVar6;
  LONG LVar7;
  RECT local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0040f7d0(**(int **)(param_4 + -4) - param_1[0xc],
               *(int *)(*(int *)(param_4 + -4) + 4) - param_1[0xd],&local_c);
  *(undefined4 *)(param_4 + -0xc) = local_c;
  *(undefined4 *)(param_4 + -8) = local_8;
  LVar7 = *(LONG *)(param_4 + -8);
  LVar6 = *(LONG *)(param_4 + -0xc);
  (**(code **)(*param_1 + 0x40))(param_1,&local_1c);
  pt.y = LVar7;
  pt.x = LVar6;
  BVar3 = PtInRect(&local_1c,pt);
  if (BVar3 != 0) {
    if (((*(byte *)(param_1 + 8) & 0x10) != 0) &&
       ((*(char *)((int)param_1 + 0x47) != '\0' || ((*(byte *)((int)param_1 + 0x41) & 4) == 0)))) {
LAB_004320b1:
      bVar1 = true;
      goto LAB_004320b3;
    }
    if (*(char *)((int)param_1 + 0x47) != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x4c))();
      if ((cVar2 != '\0') || (*(char *)(param_4 + -0xd) != '\0')) {
        uVar4 = FUN_004070fc((undefined2 *)(param_4 + -0xc));
        iVar5 = FUN_0042f720((int)param_1,0xb00a,0,uVar4);
        if (iVar5 != 0) goto LAB_004320b1;
      }
    }
  }
  bVar1 = false;
LAB_004320b3:
  if (bVar1) {
    *(int **)(param_4 + -0x14) = param_1;
  }
  return;
}


/* ==== 004320c4 FUN_004320c4 ==== */

undefined4 FUN_004320c4(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int i_val;
  undefined1 *puVar3;
  
  if (((param_4 != '\0') && (*(int *)(param_1 + 0x180) != 0)) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x180) + 8) + -1, -1 < i_val)) {
    do {
      puVar3 = &stack0xfffffffc;
      piVar2 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x180),i_val);
      cVar1 = FUN_0043200c(piVar2,extraout_EDX,extraout_ECX,(int)puVar3);
      if (cVar1 != '\0') break;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  if ((*(int *)(param_1 + 0x134) != 0) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x134) + 8) + -1, -1 < i_val)) {
    do {
      puVar3 = &stack0xfffffffc;
      piVar2 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x134),i_val);
      cVar1 = FUN_0043200c(piVar2,extraout_EDX_00,extraout_ECX_00,(int)puVar3);
      if (cVar1 != '\0') {
        return 0;
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return 0;
}


/* ==== 00432158 FUN_00432158 ==== */

bool FUN_00432158(int *param_1,undefined4 *param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int local_1c;
  int local_18;
  int local_14 [2];
  
  pHVar1 = (HWND)FUN_004349e0(param_1);
  pHVar2 = GetCapture();
  if (pHVar1 == pHVar2) {
    iVar3 = 0;
    if ((DAT_004aa7b8 != 0) && (param_1 == *(int **)(DAT_004aa7b8 + 0x24))) {
      iVar3 = DAT_004aa7b8;
    }
  }
  else {
    cVar5 = '\0';
    FUN_004070e8(param_2[2],local_14);
    iVar3 = FUN_004320c4((int)param_1,local_14,0,cVar5);
  }
  if (iVar3 != 0) {
    local_1c = (int)*(short *)(param_2 + 2) - *(int *)(iVar3 + 0x30);
    local_18 = (int)*(short *)((int)param_2 + 10) - *(int *)(iVar3 + 0x34);
    uVar4 = FUN_004070fc((undefined2 *)&local_1c);
    uVar4 = FUN_0042f720(iVar3,*param_2,param_2[1],uVar4);
    param_2[3] = uVar4;
  }
  return iVar3 != 0;
}


/* ==== 004321ec TWinControl.virtual_06c ==== */

void TWinControl_virtual_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  HWND pHVar5;
  HWND pHVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint Msg;
  uint wParam;
  int local_124 [2];
  int local_11c [2];
  BYTE local_114 [256];
  uint local_14;
  byte local_10;
  undefined2 local_e;
  uint local_c;
  uint param;
  
  param = *param_2;
  if ((int)param < 0x85) {
    if (param == 0x84) {
      TControl_virtual_06c(param_1,param_2,param_3);
      if (param_2[3] != 0xffffffff) {
        return;
      }
      cVar1 = '\0';
      FUN_004070e8(param_2[2],local_124);
      FUN_0042e2d8(param_1,local_124,local_11c);
      iVar4 = FUN_004320c4((int)param_1,local_11c,0,cVar1);
      if (iVar4 == 0) {
        return;
      }
      param_2[3] = 1;
      return;
    }
    if (param == 7) {
      piVar3 = FUN_00444864(param_1);
      param_3 = extraout_ECX;
      if ((piVar3 != (int *)0x0) &&
         (cVar1 = (**(code **)(*piVar3 + 0xd4))(piVar3,param_1), param_3 = extraout_ECX_00,
         cVar1 == '\0')) {
        return;
      }
      goto LAB_004323ba;
    }
    if (param == 8) {
      if ((*(byte *)(param_1 + 0x11) & 0x20) != 0) {
        return;
      }
      goto LAB_004323ba;
    }
    if (param == 0x1f) {
      pHVar5 = (HWND)FUN_004349e0(param_1);
      pHVar6 = GetCapture();
      param_3 = extraout_ECX_03;
      if (((pHVar5 == pHVar6) && (DAT_004aa7b8 != 0)) && (param_1 == *(int **)(DAT_004aa7b8 + 0x24))
         ) {
        FUN_0042f720(DAT_004aa7b8,0x1f,0,0);
        param_3 = extraout_ECX_04;
      }
      goto LAB_004323ba;
    }
  }
  else {
    if (param - 0x100 < 9) {
      bVar2 = FUN_0042ee88((int)param_1);
      param_3 = extraout_ECX_02;
      if (bVar2) {
        return;
      }
      goto LAB_004323ba;
    }
    if (param - 0x200 < 0xb) {
      bVar2 = FUN_00432158(param_1,param_2);
      param_3 = extraout_ECX_01;
      if (bVar2) {
        if (param_2[3] != 0) {
          return;
        }
        param = param_2[2];
        wParam = param_2[1];
        Msg = *param_2;
        pHVar5 = (HWND)FUN_004349e0(param_1);
        DefWindowProcA(pHVar5,Msg,wParam,param);
        return;
      }
      goto LAB_004323ba;
    }
  }
  if (((*(char *)(DAT_004ac74c + 0x20) != '\0') && (*(int *)(DAT_004ac74c + 0x1c) != 0)) &&
     (*param_2 == *(uint *)(DAT_004ac74c + 0x1c))) {
    GetKeyboardState(local_114);
    local_14 = *param_2;
    local_10 = FUN_004447a8((int)local_114);
    local_e = (undefined2)param_2[1];
    local_c = param_2[2];
    FUN_00403178(param_1,&local_14,extraout_ECX_05);
    return;
  }
LAB_004323ba:
  TControl_virtual_06c(param_1,param_2,param_3);
  return;
}


/* ==== 004323cc TWinControl.DefaultHandler ==== */

void TWinControl_DefaultHandler(int param_1,UINT *param_2)

{
  UINT UVar1;
  COLORREF CVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x14c) == 0) {
    TControl_DefaultHandler(param_1,(int *)param_2);
  }
  else {
    if ((*param_2 == 0x7b) && (*(int *)(param_1 + 0x24) != 0)) {
      UVar1 = FUN_0042f720(*(int *)(param_1 + 0x24),0x7b,param_2[1],param_2[2]);
      param_2[3] = UVar1;
      if (UVar1 != 0) {
        return;
      }
    }
    UVar1 = *param_2;
    if (UVar1 - 0x132 < 7) {
      UVar1 = SendMessageA((HWND)param_2[2],UVar1 + 0xbc00,param_2[1],(LPARAM)param_2[2]);
      param_2[3] = UVar1;
    }
    else if (UVar1 - 0xbd32 < 7) {
      CVar2 = FUN_00417d54(*(uint *)(*(int *)(param_1 + 0x58) + 0x18));
      SetTextColor((HDC)param_2[1],CVar2);
      uVar3 = TBrush_GetColor(*(int *)(param_1 + 0x130));
      CVar2 = FUN_00417d54(uVar3);
      SetBkColor((HDC)param_2[1],CVar2);
      UVar1 = FUN_00418a18(*(int *)(param_1 + 0x130));
      param_2[3] = UVar1;
    }
    else {
      UVar1 = CallWindowProcA(*(WNDPROC *)(param_1 + 0x13c),*(HWND *)(param_1 + 0x14c),UVar1,
                              param_2[1],param_2[2]);
      param_2[3] = UVar1;
    }
    if (*param_2 == 0xc) {
      FUN_0042e334(param_1,0xc,param_2[1],param_2[2]);
    }
  }
  return;
}


/* ==== 004324c8 FUN_004324c8 ==== */

bool FUN_004324c8(HWND wnd,int *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  
  pvVar1 = FUN_0042b94c(wnd);
  if (pvVar1 != (HANDLE)0x0) {
    iVar2 = FUN_0042f720((int)pvVar1,*param_2 + 0xbc00,param_2[1],param_2[2]);
    param_2[3] = iVar2;
  }
  return pvVar1 != (HANDLE)0x0;
}


/* ==== 004324fc FUN_004324fc ==== */

void FUN_004324fc(int *param_1,int param_2)

{
  HWND pHVar1;
  HDC hdc;
  int iVar2;
  int j;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  tagPAINTSTRUCT local_54;
  int saved_dc;
  int local_10;
  int local_c;
  int *local_8;
  tagPAINTSTRUCT *paint;
  
  hdc = *(HDC *)(param_2 + 4);
  local_c = param_2;
  local_8 = param_1;
  if (hdc == (HDC)0x0) {
    paint = &local_54;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    hdc = BeginPaint(pHVar1,paint);
  }
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff94;
  if (local_8[0x4d] == 0) {
    (**(code **)(*local_8 + 0xa8))(local_8,hdc);
  }
  else {
    saved_dc = SaveDC(hdc);
    local_10 = 2;
    i_val = *(int *)(local_8[0x4d] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar2 = FUN_004102b0((undefined4 *)local_8[0x4d],j);
        if (((*(char *)(iVar2 + 0x47) != '\0') ||
            (((*(byte *)(iVar2 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar2 + 0x41) & 4) == 0)))) &&
           ((*(byte *)(iVar2 + 0x40) & 0x40) != 0)) {
          local_10 = ExcludeClipRect(hdc,*(int *)(iVar2 + 0x30),*(int *)(iVar2 + 0x34),
                                     *(int *)(iVar2 + 0x30) + *(int *)(iVar2 + 0x38),
                                     *(int *)(iVar2 + 0x34) + *(int *)(iVar2 + 0x3c));
          if (local_10 == 1) break;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    if (local_10 != 1) {
      (**(code **)(*local_8 + 0xa8))(local_8,hdc);
    }
    RestoreDC(hdc,saved_dc);
  }
  FUN_00432654((int)local_8,hdc,0);
  *in_FS_OFFSET = uVar3;
  if (*(int *)(local_c + 4) == 0) {
    paint = &local_54;
    pHVar1 = (HWND)FUN_004349e0(local_8);
    EndPaint(pHVar1,paint);
  }
  return;
}


/* ==== 0043262c TWinControl.virtual_0a8 ==== */

void TWinControl_virtual_0a8(int *param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0xf;
  local_8 = 0;
  local_4 = 0;
  local_c = param_2;
  (**(code **)(*param_1 + -0x10))(param_1,&local_10);
  return;
}


/* ==== 00432654 FUN_00432654 ==== */

void FUN_00432654(int param_1,HDC param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  int nSavedDC;
  int iVar3;
  COLORREF CVar4;
  HBRUSH pHVar5;
  int i_val;
  HBRUSH pHVar6;
  int j;
  RECT RStack_20;
  
  if (((*(char *)(param_1 + 0x144) != '\0') && (*(char *)(param_1 + 0x17c) != '\0')) &&
     (*(int *)(param_1 + 0x148) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x148) + 0x20))(*(int **)(param_1 + 0x148),param_2);
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    i_val = 0;
    if ((param_3 != 0) && (i_val = FUN_0041030c(*(int *)(param_1 + 0x134),param_3), i_val < 0)) {
      i_val = 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x134) + 8);
    for (; i_val < iVar3; i_val = i_val + 1) {
      iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x134),i_val);
      if ((*(char *)(iVar1 + 0x47) != '\0') ||
         (((*(byte *)(iVar1 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar1 + 0x41) & 4) == 0)))) {
        FUN_0040f7e8(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),
                     *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x38),&RStack_20.left,
                     *(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x3c));
        BVar2 = RectVisible(param_2,&RStack_20);
        if (BVar2 != 0) {
          if ((*(byte *)(param_1 + 0x44) & 0x80) != 0) {
            *(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) | 0x80;
          }
          nSavedDC = SaveDC(param_2);
          FUN_0042d228(param_2,*(int *)(iVar1 + 0x30),*(int *)(iVar1 + 0x34));
          IntersectClipRect(param_2,0,0,*(int *)(iVar1 + 0x38),*(int *)(iVar1 + 0x3c));
          FUN_0042f720(iVar1,0xf,param_2,0);
          RestoreDC(param_2,nSavedDC);
          *(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) & 0xff7f;
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x180) != 0) && (j = *(int *)(*(int *)(param_1 + 0x180) + 8), -1 < j + -1)
     ) {
    i_val = 0;
    do {
      iVar3 = FUN_004102b0(*(undefined4 **)(param_1 + 0x180),i_val);
      if (((*(char *)(iVar3 + 0x138) != '\0') && ((*(byte *)(iVar3 + 0x40) & 0x10) != 0)) &&
         ((*(char *)(iVar3 + 0x47) != '\0' ||
          (((*(byte *)(iVar3 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar3 + 0x41) & 4) == 0)))))) {
        CVar4 = FUN_00417d54(0x80000010);
        pHVar5 = CreateSolidBrush(CVar4);
        pHVar6 = pHVar5;
        FUN_0040f7e8(*(int *)(iVar3 + 0x30) + -1,*(int *)(iVar3 + 0x34) + -1,
                     *(int *)(iVar3 + 0x30) + *(int *)(iVar3 + 0x38),&RStack_20.left,
                     *(int *)(iVar3 + 0x34) + *(int *)(iVar3 + 0x3c));
        FrameRect(param_2,&RStack_20,pHVar6);
        DeleteObject(pHVar5);
        CVar4 = FUN_00417d54(0x80000014);
        pHVar5 = CreateSolidBrush(CVar4);
        pHVar6 = pHVar5;
        FUN_0040f7e8(*(undefined4 *)(iVar3 + 0x30),*(undefined4 *)(iVar3 + 0x34),
                     *(int *)(iVar3 + 0x30) + *(int *)(iVar3 + 0x38) + 1,&RStack_20.left,
                     *(int *)(iVar3 + 0x34) + *(int *)(iVar3 + 0x3c) + 1);
        FrameRect(param_2,&RStack_20,pHVar6);
        DeleteObject(pHVar5);
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  return;
}


/* ==== 00432884 FUN_00432884 ==== */

void FUN_00432884(int *param_1,HDC param_2,int param_3,int param_4)

{
  HWND pHVar1;
  uint window_long;
  int *piVar2;
  UINT grfFlags;
  tagRECT rect;
  int i_val;
  int saved_dc;
  UINT edge_val;
  int j;
  int index_val;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 0x80;
  saved_dc = SaveDC(param_2);
  FUN_0042d228(param_2,param_3,param_4);
  IntersectClipRect(param_2,0,0,param_1[0xe],param_1[0xf]);
  grfFlags = 0;
  edge_val = 0;
  index_val = -0x14;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  window_long = GetWindowLongA(pHVar1,index_val);
  if ((window_long & 0x200) == 0) {
    index_val = -0x10;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    window_long = GetWindowLongA(pHVar1,index_val);
    if ((window_long & 0x800000) != 0) {
      edge_val = 3;
      grfFlags = 0xa00f;
    }
  }
  else {
    edge_val = 10;
    grfFlags = 0x200f;
  }
  if (grfFlags != 0) {
    SetRect(&rect,0,0,param_1[0xe],param_1[0xf]);
    DrawEdge(param_2,&rect,edge_val,grfFlags);
    FUN_0042d228(param_2,rect.left,rect.top);
    IntersectClipRect(param_2,0,0,rect.right - rect.left,rect.bottom - rect.top);
  }
  FUN_0042f720((int)param_1,0x14,param_2,0);
  FUN_0042f720((int)param_1,0xf,param_2,0);
  if ((param_1[0x60] != 0) && (index_val = *(int *)(param_1[0x60] + 8), -1 < index_val + -1)) {
    j = 0;
    i_val = index_val;
    do {
      piVar2 = (int *)FUN_004102b0((undefined4 *)param_1[0x60],j);
      if (*(char *)((int)piVar2 + 0x47) != '\0') {
        FUN_00432884(piVar2,param_2,piVar2[0xc],piVar2[0xd]);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  RestoreDC(param_2,saved_dc);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xff7f;
  return;
}


/* ==== 004329d8 TWinControl.WMPaint ==== */

void TWinControl_WMPaint(int *param_1,int param_2)

{
  int iVar1;
  HDC pHVar2;
  HWND pHVar3;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  int y1;
  DWORD rop;
  undefined4 uVar4;
  undefined1 local_70 [8];
  int cx_val;
  undefined1 local_60 [12];
  int cy_val;
  tagPAINTSTRUCT local_50;
  HGDIOBJ h_val;
  HBITMAP local_c;
  HDC hdc_val;
  tagPAINTSTRUCT *paint;
  
  if (((char)param_1[0x7a] != '\0') && (*(int *)(param_2 + 4) == 0)) {
    pHVar2 = GetDC((HWND)0x0);
    (**(code **)(*param_1 + 0x40))(param_1,local_60);
    iVar1 = cy_val;
    (**(code **)(*param_1 + 0x40))(param_1,local_70);
    local_c = CreateCompatibleBitmap(pHVar2,cx_val,iVar1);
    ReleaseDC((HWND)0x0,pHVar2);
    hdc_val = CreateCompatibleDC((HDC)0x0);
    h_val = SelectObject(hdc_val,local_c);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff78;
    paint = &local_50;
    pHVar3 = (HWND)FUN_004349e0(param_1);
    hdc = BeginPaint(pHVar3,paint);
    FUN_0042f720((int)param_1,0x14,hdc_val,hdc_val);
    *(HDC *)(param_2 + 4) = hdc_val;
    TWinControl_WMPaint(param_1,param_2);
    *(undefined4 *)(param_2 + 4) = 0;
    rop = 0xcc0020;
    y1 = 0;
    iVar1 = 0;
    pHVar2 = hdc_val;
    (**(code **)(*param_1 + 0x40))(param_1,local_60);
    (**(code **)(*param_1 + 0x40))(param_1,local_70);
    BitBlt(hdc,0,0,cx_val,cy_val,pHVar2,iVar1,y1,rop);
    paint = &local_50;
    pHVar3 = (HWND)FUN_004349e0(param_1);
    EndPaint(pHVar3,paint);
    *in_FS_OFFSET = uVar4;
    SelectObject(hdc_val,h_val);
    DeleteDC(hdc_val);
    DeleteObject(local_c);
    return;
  }
  if (((*(byte *)((int)param_1 + 0x45) & 1) == 0) &&
     (iVar1 = FUN_004317bc((int)param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
    return;
  }
  FUN_004324fc(param_1,param_2);
  return;
}


/* ==== 00432b38 TWinControl.WMCommand ==== */

void TWinControl_WMCommand(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00432b58 TWinControl.WMNotify ==== */

void TWinControl_WMNotify(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8(*(HWND *)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00432b7c TWinControl.WMSysColorChange ==== */

void TWinControl_WMSysColorChange(int param_1)

{
  FUN_00417950();
  FUN_0042f720(param_1,0xb024,0,0);
  return;
}


/* ==== 00432b98 TWinControl.WMWinIniChange ==== */

void TWinControl_WMWinIniChange(int param_1,int param_2)

{
  FUN_0042f720(param_1,0xb025,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return;
}


/* ==== 00432bac TWinControl.message_001d ==== */

void TWinControl_message_001d(int param_1)

{
  FUN_0042f720(param_1,0xb026,0,0);
  return;
}


/* ==== 00432bbc TWinControl.WMTimeChange ==== */

void TWinControl_WMTimeChange(int param_1)

{
  FUN_0042f720(param_1,0xb027,0,0);
  return;
}


/* ==== 00432bcc TWinControl.WMHScroll ==== */

void TWinControl_WMHScroll(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00432bec TWinControl.WMVScroll ==== */

void TWinControl_WMVScroll(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00432c0c TWinControl.WMCompareItem ==== */

void TWinControl_WMCompareItem(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8(*(HWND *)(param_2[2] + 4),param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00432c30 TWinControl.WMDeleteItem ==== */

void TWinControl_WMDeleteItem(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8(*(HWND *)(param_2[2] + 4),param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00432c54 TWinControl.WMDrawItem ==== */

void TWinControl_WMDrawItem(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8(*(HWND *)(param_2[2] + 4),param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00432c78 TWinControl.WMMeasureItem ==== */

void TWinControl_WMMeasureItem(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8(*(HWND *)(param_2[2] + 4),param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00432c9c TWinControl.WMEraseBkgnd ==== */

void TWinControl_WMEraseBkgnd(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT local_18;
  
  if (((char)param_1[0x7a] == '\0') || (*(int *)(param_2 + 4) == *(int *)(param_2 + 8))) {
    hbr = (HBRUSH)FUN_00418a18(param_1[0x4c]);
    (**(code **)(*param_1 + 0x40))(param_1,&local_18);
    FillRect(*(HDC *)(param_2 + 4),&local_18,hbr);
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}


/* ==== 00432ce8 TWinControl.WMWindowPosChanged ==== */

void TWinControl_WMWindowPosChanged(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  BOOL BVar4;
  
  if (((((char)param_1[0x4e] == '\0') || ((*(byte *)(param_1 + 0x10) & 0x10) == 0)) ||
      (param_1[9] == 0)) || ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 8) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 2) == 0) {
    BVar4 = IsWindowVisible((HWND)param_1[0x53]);
    if (BVar4 == 0) goto LAB_00432d2d;
    bVar2 = true;
  }
  else {
LAB_00432d2d:
    bVar2 = false;
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 1) == 0) {
    BVar4 = IsWindowVisible((HWND)param_1[0x53]);
    if (BVar4 != 0) {
      bVar3 = true;
      goto LAB_00432d55;
    }
  }
  bVar3 = false;
LAB_00432d55:
  if ((bVar1) && (bVar2 || bVar3)) {
    FUN_004348e8((int)param_1);
  }
  if ((*(byte *)((int)param_1 + 0x45) & 2) == 0) {
    FUN_00434ce8((int)param_1);
  }
  TControl_WMWindowPosChanged(param_1,param_2);
  if ((bVar1) && ((bVar2 || bVar3 || ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 0xc0) != 0)))) {
    FUN_004348e8((int)param_1);
  }
  return;
}


/* ==== 00432da8 TWinControl.WMWindowPosChanging ==== */

void TWinControl_WMWindowPosChanging(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  if (((*(ushort *)(param_1 + 8) & 10) == 0) &&
     (iVar1 = *(int *)(param_2 + 8), (*(byte *)(iVar1 + 0x18) & 1) == 0)) {
    cVar2 = FUN_0042fbf4(param_1,(int *)(iVar1 + 0x10),(int *)(iVar1 + 0x14));
    if (cVar2 == '\0') {
      *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00432df8 TWinControl.WMSize ==== */

void TWinControl_WMSize(int *param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00434ce8((int)param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0043134c(param_1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00432e2c TWinControl.WMMove ==== */

void TWinControl_WMMove(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  FUN_00434ce8((int)param_1);
  return;
}


/* ==== 00432e40 TWinControl.WMSetCursor ==== */

void TWinControl_WMSetCursor(int *param_1,int param_2)

{
  int iVar1;
  HCURSOR hCursor;
  HWND pHVar2;
  HWND pHVar3;
  short sVar4;
  char cVar5;
  tagPOINT local_1c;
  int local_14 [2];
  
  if (*(int *)(param_2 + 4) == param_1[0x53]) {
    if (*(short *)(param_2 + 8) == -2) {
      if ((*(short *)(param_2 + 10) == 0x201) && (*(int *)(*(int *)PTR_DAT_004ab8ac + 0x24) != 0)) {
        pHVar2 = GetLastActivePopup(*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24));
        pHVar3 = GetForegroundWindow();
        if (pHVar2 != pHVar3) {
          FUN_0044ce24(*(int *)PTR_DAT_004ab8ac);
          return;
        }
      }
    }
    else if (*(short *)(param_2 + 8) == 1) {
      sVar4 = *(short *)(*(int *)PTR_DAT_004ab9f8 + 0x38);
      if (sVar4 == 0) {
        GetCursorPos(&local_1c);
        cVar5 = '\0';
        FUN_0042e2d8(param_1,&local_1c.x,local_14);
        iVar1 = FUN_004320c4((int)param_1,local_14,0,cVar5);
        if (iVar1 != 0) {
          if ((*(byte *)(iVar1 + 0x20) & 0x10) == 0) {
            sVar4 = *(short *)(iVar1 + 0x68);
          }
          else {
            sVar4 = -2;
          }
        }
        if (sVar4 == 0) {
          if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
            sVar4 = (short)param_1[0x1a];
          }
          else {
            sVar4 = -2;
          }
        }
      }
      if (sVar4 != 0) {
        hCursor = (HCURSOR)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)sVar4);
        SetCursor(hCursor);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00432f40 TWinControl.WMSetFocus ==== */

void TWinControl_WMSetFocus(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + -0x10))();
  FUN_00432f90(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 00432f54 TWinControl.WMKillFocus ==== */

void TWinControl_WMKillFocus(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + -0x10))();
  FUN_0043307c(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 00432f68 TWinControl.message_010d ==== */

void TWinControl_message_010d(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x1e9) = 1;
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00432f7c TWinControl.message_010e ==== */

void TWinControl_message_010e(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x1e9) = 0;
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00432f90 FUN_00432f90 ==== */

void FUN_00432f90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  HKL hkl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_1c = &LAB_0043306f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (PTR_DAT_004aba14[8] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_0044b568(*(int *)PTR_DAT_004ab9f8,(int *)&local_8,param_3);
      iVar2 = FUN_00408364((undefined *)param_1[0x56],local_8);
      puVar1 = puStack_18;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_0044b368(*(int *)PTR_DAT_004ab9f8,extraout_EDX,extraout_ECX);
        iVar2 = (**(code **)(*piVar3 + 0x14))();
        puVar1 = puStack_18;
        if (iVar2 != 0) {
          hkl = *(HKL *)(*(int *)PTR_DAT_004ab9f8 + 0x30);
          if ((char)param_1[0x55] != '\0') {
            piVar3 = (int *)FUN_0044b368(*(int *)PTR_DAT_004ab9f8,extraout_EDX_00,extraout_ECX_00);
            iVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,param_1[0x56]);
            if (-1 < iVar2) {
              piVar3 = (int *)FUN_0044b368(*(int *)PTR_DAT_004ab9f8,extraout_EDX_01,extraout_ECX_01)
              ;
              hkl = (HKL)(**(code **)(*piVar3 + 0x18))(piVar3,iVar2);
            }
          }
          ActivateKeyboardLayout(hkl,1);
          puVar1 = puStack_18;
        }
      }
    }
    puStack_18 = puVar1;
    iVar2 = FUN_004349e0(param_1);
    FUN_00438ed0(iVar2,(char)param_1[0x55]);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00433076;
  puStack_1c = (undefined1 *)0x43306e;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0043307c FUN_0043307c ==== */

void FUN_0043307c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_14 = &LAB_00433106;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (PTR_DAT_004aba14[8] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_0044b568(*(int *)PTR_DAT_004ab9f8,(int *)&local_8,param_3);
      iVar2 = FUN_00408364((undefined *)param_1[0x56],local_8);
      puVar1 = puStack_10;
      if (iVar2 != 0) {
        ActivateKeyboardLayout(*(HKL *)(*(int *)PTR_DAT_004ab9f8 + 0x30),1);
        puVar1 = puStack_10;
      }
    }
    puStack_10 = puVar1;
    if ((char)param_1[0x55] == '\0') {
      FUN_004349e0(param_1);
      FUN_00438eb4();
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0043310d;
  puStack_14 = (undefined1 *)0x433105;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00433114 TWinControl.dynamic_ffcc ==== */

void TWinControl_dynamic_ffcc(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x60))(param_2,param_1);
  return;
}


/* ==== 0043311c TWinControl.dynamic_ffc3 ==== */

void TWinControl_dynamic_ffc3(void)

{
  return;
}


/* ==== 00433120 TWinControl.dynamic_ffc9 ==== */

void TWinControl_dynamic_ffc9(int param_1)

{
  if (*(short *)(param_1 + 0x19a) != 0) {
    (**(code **)(param_1 + 0x198))(*(undefined4 *)(param_1 + 0x19c),param_1);
  }
  return;
}


/* ==== 00433140 TWinControl.dynamic_ffc8 ==== */

void TWinControl_dynamic_ffc8(int param_1)

{
  if (*(short *)(param_1 + 0x1a2) != 0) {
    (**(code **)(param_1 + 0x1a0))(*(undefined4 *)(param_1 + 0x1a4),param_1);
  }
  return;
}


/* ==== 00433160 TWinControl.dynamic_ffbb ==== */

void TWinControl_dynamic_ffbb(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040f7d8((short)param_3,(undefined2)param_4);
  iVar2 = FUN_0042f720(param_1,0xb038,param_2,uVar1);
  if ((-1 < iVar2) && (*(short *)(param_1 + 0x18a) != 0)) {
    (**(code **)(param_1 + 0x188))(*(undefined4 *)(param_1 + 0x18c),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}


/* ==== 004331b0 TWinControl.dynamic_ffca ==== */

void TWinControl_dynamic_ffca
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5,undefined4 param_6)

{
  if (*(short *)(param_1 + 0x192) != 0) {
    (**(code **)(param_1 + 400))
              (*(undefined4 *)(param_1 + 0x194),param_1,param_2,param_4,param_5,param_6,param_3);
  }
  return;
}


/* ==== 004331e4 TWinControl.dynamic_ffcb ==== */

void TWinControl_dynamic_ffcb(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(param_1,param_2,param_3);
  FUN_00403178(param_1,param_2,param_3);
  return;
}


/* ==== 00433224 TWinControl.dynamic_ffc2 ==== */

undefined1 TWinControl_dynamic_ffc2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char local_10;
  undefined3 uStack_f;
  
  _local_10 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0x1e2) != 0) {
    (**(code **)(param_1 + 0x1e0))
              (*(undefined4 *)(param_1 + 0x1e4),param_1,param_3,&local_10,param_2);
  }
  if ((local_10 != '\0') && (iVar1 = FUN_0042f720(param_1,0xb039,param_2,param_3), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* ==== 0043327c TWinControl.dynamic_ffbd ==== */

void TWinControl_dynamic_ffbd(int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00415a80(*(int *)(param_1 + 4),param_2);
  uVar2 = FUN_0040312c(piVar1,(int)&PTR_TControl_virtual_000_0042a694);
  *param_3 = uVar2;
  return;
}


/* ==== 004332a0 FUN_004332a0 ==== */

undefined4 FUN_004332a0(int param_1)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x140) + 8);
  }
  return 0;
}


/* ==== 004332b4 FUN_004332b4 ==== */

undefined4 FUN_004332b4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x140) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x140),param_2);
  }
  return uVar1;
}


/* ==== 004332d8 TWinControl.dynamic_ffc1 ==== */

void TWinControl_dynamic_ffc1
               (int *param_1,undefined4 param_2,LPRECT lprc_val,undefined4 param_4,
               undefined4 *param_5)

{
  HWND hWnd;
  LPRECT lpRect;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = *param_5;
  uStack_8 = param_5[1];
  lpRect = lprc_val;
  hWnd = (HWND)FUN_004349e0(param_1);
  GetWindowRect(hWnd,lpRect);
  InflateRect(lprc_val,10,10);
  if (*(short *)((int)param_1 + 0x1aa) != 0) {
    (*(code *)param_1[0x6a])(param_1[0x6b],param_1,param_2,param_4,&local_c,lprc_val);
  }
  return;
}


/* ==== 00433334 FUN_00433334 ==== */

int FUN_00433334(int param_1)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_004332a0(param_1);
  if ((0 < i_val) && (j = i_val + -1, -1 < j)) {
    do {
      iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x140),j);
      if (*(char *)(iVar1 + 0x47) == '\0') {
        i_val = i_val + -1;
      }
      j = j + -1;
    } while (j != -1);
  }
  return i_val;
}


/* ==== 00433370 TWinControl.dynamic_ffcd ==== */

void TWinControl_dynamic_ffcd(int param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  
  if (((*(int *)(param_1 + 0x148) == 0) && (*(char *)(param_1 + 0x144) != '\0')) &&
     (*(char *)(param_1 + 0x17c) != '\0')) {
    piVar2 = (int *)(**(code **)(PTR_PTR_004aa6fc + 0x24))(PTR_PTR_004aa6fc,1,param_1);
    if (piVar2 != (int *)0x0) {
      piVar2 = piVar2 + 0x1d;
    }
    FUN_00405878(param_2,piVar2);
  }
  else {
    FUN_00405878(param_2,*(int **)(param_1 + 0x148));
  }
  if ((*(char *)(param_1 + 0x1e8) == '\0') && (*param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x1e8) = uVar1;
  return;
}


/* ==== 00433490 TWinControl.CMDockClient ==== */

void TWinControl_CMDockClient(int *param_1,int param_2)

{
  HWND hWndTo;
  int i_val;
  LONG *pLVar1;
  tagPOINT *points;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  UINT cPoints;
  tagPOINT local_1c [2];
  int local_c;
  int *local_8;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    pLVar1 = (LONG *)(*(int *)(param_2 + 4) + 0x44);
    points = local_1c;
    local_c = param_2;
    local_8 = param_1;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      points->x = *pLVar1;
      pLVar1 = pLVar1 + 1;
      points = (tagPOINT *)&points->y;
    }
    cPoints = 2;
    points = local_1c;
    hWndTo = (HWND)FUN_004349e0(local_8);
    MapWindowPoints((HWND)0x0,hWndTo,points,cPoints);
    FUN_00431324((int)local_8);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    FUN_00403178(*(int **)(*(int *)(local_c + 4) + 0x38),local_8,local_1c);
    if (((char)local_8[0x5f] != '\0') && (local_8[0x52] != 0)) {
      i_val = *(int *)(local_c + 4);
      (**(code **)(*(int *)local_8[0x52] + 0x18))
                ((int *)local_8[0x52],*(undefined4 *)(i_val + 0x38),*(undefined1 *)(i_val + 0x54),
                 *(undefined4 *)(i_val + 0x58));
    }
    *in_FS_OFFSET = uVar2;
    FUN_0043132c((int)local_8);
    return;
  }
  return;
}


/* ==== 00433580 TWinControl.CMUndockClient ==== */

void TWinControl_CMUndockClient(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  if ((*(char *)(param_1 + 0x17c) != '\0') && (*(int *)(param_1 + 0x148) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x148) + 0x28))
              (*(int **)(param_1 + 0x148),*(undefined4 *)(param_2 + 8));
  }
  return;
}


/* ==== 004335a8 TWinControl.CMFloatChanged ==== */

void TWinControl_CMFloatChanged(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4335bd;
  iVar3 = (**(code **)(*param_1 + 0x54))();
  puStack_18 = (undefined1 *)0x4335c7;
  iVar4 = FUN_00402ee0(param_1);
  if (iVar3 == iVar4) {
    cVar1 = *(char *)((int)param_1 + 0x47);
    puStack_1c = &LAB_00433612;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00403178(param_1,0,*(int *)(param_2 + 8) + 0x44);
    puVar2 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x433623;
    if (cVar1 != '\0') {
      puStack_1c = (undefined1 *)0x433611;
      FUN_0042e978(param_1,uStack_20,puVar2);
    }
    return;
  }
  puStack_18 = (undefined1 *)0x433623;
  TControl_CMFloatChanged(param_1,param_2);
  return;
}


/* ==== 0043362c TWinControl.dynamic_ffc0 ==== */

void TWinControl_dynamic_ffc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x1b2) != 0) {
    (**(code **)(param_1 + 0x1b0))(*(undefined4 *)(param_1 + 0x1b4),param_1,param_2,param_3);
  }
  return;
}


/* ==== 00433654 FUN_00433654 ==== */

undefined1 FUN_00433654(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined3 extraout_var;
  
  piVar3 = FUN_00444864(param_1);
  if ((((piVar3 != (int *)0x0) && (param_1 != piVar3)) && (*(char *)((int)piVar3 + 0x215) != '\0'))
     && (cVar1 = FUN_00433654(piVar3,param_2), cVar1 != '\0')) {
    return 1;
  }
  bVar2 = FUN_0044476c(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     (FUN_00403178(param_1,param_2 + 4,CONCAT31(extraout_var,bVar2)), *(short *)(param_2 + 4) == 0))
  {
    return 1;
  }
  return 0;
}


/* ==== 004336bc TWinControl.WMKeyDown ==== */

void TWinControl_WMKeyDown(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00433654(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 004336dc TWinControl.WMSysKeyDown ==== */

void TWinControl_WMSysKeyDown(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00433654(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 004336fc TWinControl.dynamic_ffbf ==== */

void TWinControl_dynamic_ffbf(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x1c2) != 0) {
    (**(code **)(param_1 + 0x1c0))(*(undefined4 *)(param_1 + 0x1c4),param_1,param_2,param_3);
  }
  return;
}


/* ==== 00433724 FUN_00433724 ==== */

undefined1 FUN_00433724(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined3 extraout_var;
  
  piVar3 = FUN_00444864(param_1);
  if ((((piVar3 != (int *)0x0) && (param_1 != piVar3)) && (*(char *)((int)piVar3 + 0x215) != '\0'))
     && (cVar1 = FUN_00433724(piVar3,param_2), cVar1 != '\0')) {
    return 1;
  }
  bVar2 = FUN_0044476c(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     (FUN_00403178(param_1,param_2 + 4,CONCAT31(extraout_var,bVar2)), *(short *)(param_2 + 4) == 0))
  {
    return 1;
  }
  return 0;
}


/* ==== 0043378c TWinControl.WMKeyUp ==== */

void TWinControl_WMKeyUp(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00433724(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 004337ac TWinControl.WMSysKeyUp ==== */

void TWinControl_WMSysKeyUp(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00433724(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 004337cc TWinControl.dynamic_ffbe ==== */

void TWinControl_dynamic_ffbe(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x1ba) != 0) {
    (**(code **)(param_1 + 0x1b8))(*(undefined4 *)(param_1 + 0x1bc),param_1,param_2);
  }
  return;
}


/* ==== 004337ec FUN_004337ec ==== */

uint FUN_004337ec(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = CONCAT31((int3)((uint)param_3 >> 8),1);
  piVar1 = FUN_00444864(param_1);
  uVar2 = extraout_ECX;
  if (((piVar1 != (int *)0x0) && (param_1 != piVar1)) && (*(char *)((int)piVar1 + 0x215) != '\0')) {
    piVar1 = (int *)FUN_004337ec(piVar1,param_2,extraout_ECX);
    uVar2 = extraout_ECX_00;
    if ((char)piVar1 != '\0') goto LAB_0043384f;
  }
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    local_10._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 4),(undefined1)local_10);
    FUN_00403178(param_1,(int)&local_10 + 1,uVar2);
    piVar1 = (int *)0x0;
    *(ushort *)(param_2 + 4) = (ushort)local_10._1_1_;
    if (*(char *)(param_2 + 4) == '\0') goto LAB_0043384f;
  }
  local_10 = 0;
LAB_0043384f:
  return CONCAT31((int3)((uint)piVar1 >> 8),(undefined1)local_10);
}


/* ==== 00433858 TWinControl.WMChar ==== */

void TWinControl_WMChar(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004337ec(param_1,param_2,param_3);
  if ((char)uVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00433878 TWinControl.CMMouseWheel ==== */

void TWinControl_CMMouseWheel(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  int aiStack_14 [2];
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_004070e8(*(undefined4 *)(param_2 + 8),aiStack_14);
  cVar1 = FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 4)
                                       ),(int)*(short *)(param_2 + 6));
  if (cVar1 == '\0') {
    if (param_1[9] != 0) {
      uVar2 = FUN_0042f720(param_1[9],0xb043,*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


/* ==== 004338d4 TWinControl.WMMouseWheel ==== */

void TWinControl_WMMouseWheel(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar2 = DAT_004ac74c;
  if (*(char *)(DAT_004ac74c + 0x20) == '\0') {
    *(undefined1 *)(DAT_004ac74c + 0x20) = 1;
    iVar2 = FUN_00438be8(DAT_004ac74c,0x68);
  }
  bVar1 = FUN_00444718(CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(param_2 + 4)));
  *(byte *)(param_2 + 4) = bVar1;
  FUN_00403178(param_1,param_2,extraout_ECX);
  if (*(int *)(param_2 + 0xc) == 0) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 0043392c TWinControl.dynamic_ffb7 ==== */

void TWinControl_dynamic_ffb7(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00444864(param_1);
  if ((piVar1 == (int *)0x0) || (param_1 == piVar1)) {
    uVar2 = FUN_0042f720((int)param_1,0xb043,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  else {
    FUN_00403178(piVar1,param_2,extraout_ECX);
  }
  return;
}


/* ==== 00433970 TWinControl.dynamic_ffc6 ==== */

char TWinControl_dynamic_ffc6(int *param_1,undefined1 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int3 iVar3;
  int iVar4;
  char local_11;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined1 local_5;
  
  local_10 = *param_4;
  uStack_c = param_4[1];
  local_11 = '\0';
  local_5 = param_2;
  if (*(short *)((int)param_1 + 0x1ca) != 0) {
    (*(code *)param_1[0x72])(param_1[0x73],param_1,param_2,&local_11,&local_10,param_3);
  }
  if (local_11 == '\0') {
    param_1[0x5e] = param_1[0x5e] + param_3;
    while (uVar2 = param_1[0x5e], 0x77 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)))
    {
      uVar1 = param_1[0x5e];
      iVar4 = ((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) + -0x78;
      param_1[0x5e] = iVar4;
      iVar3 = (int3)((int)uVar1 >> 0x1f);
      if ((int)uVar2 < 0) {
        if (iVar4 != 0) {
          param_1[0x5e] = -iVar4;
        }
        local_11 = FUN_00403178(param_1,CONCAT31(iVar3,local_5),&local_10);
      }
      else {
        local_11 = FUN_00403178(param_1,CONCAT31(iVar3,local_5),&local_10);
      }
    }
  }
  return local_11;
}


/* ==== 00433a34 TWinControl.dynamic_ffc5 ==== */

undefined1 TWinControl_dynamic_ffc5(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  local_10[0] = 0;
  if (*(short *)(param_1 + 0x1d2) != 0) {
    (**(code **)(param_1 + 0x1d0))
              (*(undefined4 *)(param_1 + 0x1d4),param_1,param_2,local_10,&local_18);
  }
  return local_10[0];
}


/* ==== 00433a80 TWinControl.dynamic_ffc4 ==== */

undefined1 TWinControl_dynamic_ffc4(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  local_10[0] = 0;
  if (*(short *)(param_1 + 0x1da) != 0) {
    (**(code **)(param_1 + 0x1d8))
              (*(undefined4 *)(param_1 + 0x1dc),param_1,param_2,local_10,&local_18);
  }
  return local_10[0];
}


/* ==== 00433acc FUN_00433acc ==== */

undefined1 FUN_00433acc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int i_val;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int j;
  
  if ((*(char *)(param_1 + 0x168) != '\0') && (i_val = FUN_004317bc(param_1), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar2 = (int *)FUN_00431780(param_1,j);
      if (((*(char *)((int)piVar2 + 0x47) != '\0') &&
          (cVar1 = (**(code **)(*piVar2 + 0x4c))(), cVar1 != '\0')) &&
         ((((*(byte *)((int)piVar2 + 0x42) & 1) != 0 &&
           (iVar3 = FUN_0042f720((int)piVar2,0x112,*(undefined4 *)(*(int *)(param_4 + -4) + 4),
                                 *(undefined4 *)(*(int *)(param_4 + -4) + 8)), iVar3 != 0)) ||
          ((uVar4 = FUN_00403114(piVar2,(int)&PTR_TWinControl_virtual_000_0042ac0c),
           (char)uVar4 != '\0' &&
           (cVar1 = FUN_00433acc((int)piVar2,extraout_EDX,extraout_ECX,param_4), cVar1 != '\0'))))))
      {
        return 1;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00433b7c TWinControl.WMSysCommand ==== */

void TWinControl_WMSysCommand(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  BOOL BVar2;
  HWND pHVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar6;
  
  iVar6 = param_2;
  if ((((((*(uint *)(param_2 + 4) & 0xfff0) == 0xf100) && (*(short *)(param_2 + 8) != 0x20)) &&
       (*(short *)(param_2 + 8) != 0x2d)) &&
      ((BVar2 = IsIconic((HWND)param_1[0x53]), param_3 = extraout_ECX, iVar6 = extraout_EDX,
       BVar2 == 0 &&
       (pHVar3 = GetCapture(), param_3 = extraout_ECX_00, iVar6 = extraout_EDX_00,
       pHVar3 == (HWND)0x0)))) &&
     ((param_1 != *(int **)(*(int *)PTR_DAT_004ab8ac + 0x38) &&
      ((piVar4 = FUN_00444864(param_1), param_3 = extraout_ECX_01, iVar6 = extraout_EDX_01,
       piVar4 != (int *)0x0 &&
       (iVar5 = FUN_0042f720((int)piVar4,0xb017,0,param_2), param_3 = extraout_ECX_02,
       iVar6 = extraout_EDX_02, iVar5 != 0)))))) {
    return;
  }
  if (((*(uint *)(param_2 + 4) & 0xfff0) == 0xf100) &&
     (cVar1 = FUN_00433acc((int)param_1,iVar6,param_3,(int)&stack0xfffffffc), cVar1 != '\0')) {
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00433c24 TWinControl.message_002f ==== */

void TWinControl_message_002f(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00433c44 TWinControl.WMParentNotify ==== */

void TWinControl_WMParentNotify(int *param_1,int *param_2)

{
  bool bVar1;
  
  if ((((short)param_2[1] == 1) || ((short)param_2[1] == 2)) &&
     (bVar1 = FUN_004324c8((HWND)param_2[2],param_2), bVar1)) {
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00433c78 TWinControl.message_002e ==== */

void TWinControl_message_002e(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004324c8((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00433c98 TWinControl.WMDestroy ==== */

void TWinControl_WMDestroy(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  RemovePropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_004ac75a);
  RemovePropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_004ac758);
  return;
}


/* ==== 00433ccc TWinControl.WMNCDestroy ==== */

void TWinControl_WMNCDestroy(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}


/* ==== 00433ce8 TWinControl.WMNCHitTest ==== */

void TWinControl_WMNCHitTest(int *param_1,int param_2)

{
  if (((*(byte *)(param_1 + 8) & 0x10) != 0) && (param_1[9] != 0)) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00433d0c TWinControl.dynamic_ffd6 ==== */

undefined1 TWinControl_dynamic_ffd6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int i_val;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10;
  
  uVar1 = TControl_dynamic_ffd6(param_1,param_2,param_3);
  local_10._0_2_ = CONCAT11(uVar1,(char)param_2);
  local_10 = (uint)(ushort)local_10;
  if (*(char *)((int)param_1 + 0x47) != '\0') {
    i_val = FUN_004317bc((int)param_1);
    i_val = i_val + -1;
    if (-1 < i_val) {
      do {
        if (((byte)local_10 & local_10._1_1_) != 0) break;
        piVar3 = (int *)FUN_00431780((int)param_1,i_val);
        bVar2 = FUN_00403178(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),(byte)local_10),
                             extraout_ECX);
        local_10._0_2_ = CONCAT11(bVar2 | local_10._1_1_,(byte)local_10);
        local_10 = (uint)(ushort)local_10;
        i_val = i_val + -1;
      } while (i_val != -1);
    }
  }
  return local_10._1_1_;
}


/* ==== 00433d70 TWinControl.WMQueryNewPalette ==== */

void TWinControl_WMQueryNewPalette(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 4;
  uVar1 = FUN_00403178(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  *(uint *)(param_2 + 0xc) = uVar1 & 0x7f;
  return;
}


/* ==== 00433d94 TWinControl.WMPaletteChanged ==== */

void TWinControl_WMPaletteChanged(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00403178(param_1,0,param_3);
  *(uint *)(param_2 + 0xc) = uVar1 & 0x7f;
  return;
}


/* ==== 00433db4 TWinControl.CMShowHintChanged ==== */

void TWinControl_CMShowHintChanged(int *param_1)

{
  undefined2 extraout_var;
  
  (**(code **)(*param_1 + -0x10))();
  FUN_0043181c((int)param_1,CONCAT22(extraout_var,0xb023));
  return;
}


/* ==== 00433dcc TWinControl.CMBiDiModeChanged ==== */

void TWinControl_CMBiDiModeChanged(int *param_1,int param_2)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar1;
  
  TControl_CMBiDiModeChanged(param_1,param_2);
  uVar1 = extraout_var;
  if ((PTR_DAT_004aba14[9] != '\0') && (*(int *)(param_2 + 4) == 0)) {
    FUN_00431e04((int)param_1);
    uVar1 = extraout_var_00;
  }
  FUN_0043181c((int)param_1,CONCAT22(uVar1,0xb03d));
  return;
}


/* ==== 00433e04 TWinControl.CMEnter ==== */

void TWinControl_CMEnter(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  UINT UVar3;
  
  if (PTR_DAT_004aba14[9] != '\0') {
    uVar1 = FUN_0042ed5c((int)param_1);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    if ((char)uVar1 == '\0') {
      if (*(int *)(*(int *)PTR_DAT_004ab8ac + 0x30) != 0) {
        UVar3 = 1;
        pCVar2 = FUN_004040a0(*(undefined **)(*(int *)PTR_DAT_004ab8ac + 0x30));
        LoadKeyboardLayoutA(pCVar2,UVar3);
        param_3 = extraout_ECX_01;
        param_2 = extraout_EDX_01;
      }
    }
    else if (*(int *)(*(int *)PTR_DAT_004ab8ac + 0x2c) != 0) {
      UVar3 = 1;
      pCVar2 = FUN_004040a0(*(undefined **)(*(int *)PTR_DAT_004ab8ac + 0x2c));
      LoadKeyboardLayoutA(pCVar2,UVar3);
      param_3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
  }
  FUN_00403178(param_1,param_2,param_3);
  return;
}


/* ==== 00433e74 TWinControl.CMExit ==== */

void TWinControl_CMExit(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(param_1,param_2,param_3);
  return;
}


/* ==== 00433e80 TWinControl.CMDesignHitTest ==== */

void TWinControl_CMDesignHitTest(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00432158(param_1,param_2);
  if (!bVar1) {
    TControl_CMDesignHitTest(param_1,(int)param_2);
  }
  return;
}


/* ==== 00433ea0 TWinControl.CMChanged ==== */

void TWinControl_CMChanged(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
  }
  return;
}


/* ==== 00433eb4 TWinControl.CMChildKey ==== */

void TWinControl_CMChildKey(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
  }
  return;
}


/* ==== 00433ec8 TWinControl.CMDialogKey ==== */

void TWinControl_CMDialogKey(int param_1,int param_2)

{
  FUN_004317dc(param_1,param_2);
  return;
}


/* ==== 00433ed0 TWinControl.CMDialogChar ==== */

void TWinControl_CMDialogChar(int param_1,int param_2)

{
  FUN_004317dc(param_1,param_2);
  return;
}


/* ==== 00433ed8 TWinControl.CMFocusChanged ==== */

void TWinControl_CMFocusChanged(int param_1,int param_2)

{
  FUN_004317dc(param_1,param_2);
  return;
}


/* ==== 00433ee0 TWinControl.CMVisibleChanged ==== */

void TWinControl_CMVisibleChanged(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x47) == '\0') && (param_1[9] != 0)) {
    FUN_0043157c(param_1,'\0');
  }
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)) {
    FUN_00431f54(param_1);
  }
  return;
}


/* ==== 00433f10 TWinControl.CMShowingChanged ==== */

void TWinControl_CMShowingChanged(int param_1)

{
  SetWindowPos(*(HWND *)(param_1 + 0x14c),(HWND)0x0,0,0,0,0,
               (uint)*(ushort *)(&DAT_004aa7bc + (uint)*(byte *)(param_1 + 0x168) * 2));
  return;
}


/* ==== 00433f38 TWinControl.CMEnabledChanged ==== */

void TWinControl_CMEnabledChanged(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar1 == '\0') && (param_1[9] != 0)) {
    FUN_0043157c(param_1,'\0');
  }
  bVar2 = FUN_00434cdc((int)param_1);
  if ((bVar2) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    EnableWindow((HWND)param_1[0x53],-(uint)(cVar1 != '\0'));
  }
  return;
}


/* ==== 00433f80 TWinControl.CMColorChanged ==== */

void TWinControl_CMColorChanged(int *param_1)

{
  undefined2 extraout_var;
  
  TControl_CMColorChanged(param_1);
  TBrush_SetColor((int *)param_1[0x4c],param_1[0x18]);
  FUN_0043181c((int)param_1,CONCAT22(extraout_var,0xb009));
  return;
}


/* ==== 00433fa8 TWinControl.CMFontChanged ==== */

void TWinControl_CMFontChanged(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined4 uVar4;
  
  TControl_CMFontChanged(param_1);
  bVar1 = FUN_00434cdc((int)param_1);
  uVar3 = extraout_var;
  if (bVar1) {
    uVar4 = 0;
    uVar2 = FUN_00418228(param_1[0x16]);
    FUN_0042f720((int)param_1,0x30,uVar2,uVar4);
    uVar3 = extraout_var_00;
  }
  FUN_0043181c((int)param_1,CONCAT22(uVar3,0xb008));
  return;
}


/* ==== 00433fe4 TWinControl.CMCursorChanged ==== */

void TWinControl_CMCursorChanged(int *param_1)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  tagPOINT tStack_c;
  
  pHVar1 = GetCapture();
  if (pHVar1 == (HWND)0x0) {
    GetCursorPos(&tStack_c);
    piVar2 = FUN_0042d198(&tStack_c,0);
    if (param_1 == piVar2) {
      uVar4 = 1;
      iVar3 = FUN_004349e0(param_1);
      FUN_0042f720((int)param_1,0x20,iVar3,uVar4);
    }
  }
  return;
}


/* ==== 00434024 TWinControl.CMBorderChanged ==== */

void TWinControl_CMBorderChanged(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    uFlags = 0x37;
    cy = 0;
    cx = 0;
    Y = 0;
    X = 0;
    hWndInsertAfter = (HWND)0x0;
    hWnd = (HWND)FUN_004349e0(param_1);
    SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  }
  return;
}


/* ==== 00434054 TWinControl.CMCtl3DChanged ==== */

void TWinControl_CMCtl3DChanged(int param_1,undefined4 param_2)

{
  bool bVar1;
  BOOL BVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  
  uVar3 = (undefined2)((uint)param_2 >> 0x10);
  if (((*(byte *)(param_1 + 0x40) & 0x10) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    bVar1 = FUN_00434cdc(param_1);
    uVar3 = extraout_var;
    if (bVar1) {
      BVar2 = IsWindowVisible(*(HWND *)(param_1 + 0x14c));
      uVar3 = extraout_var_00;
      if (BVar2 != 0) {
        FUN_004348e8(param_1);
        uVar3 = extraout_var_01;
      }
    }
  }
  FUN_0043181c(param_1,CONCAT22(uVar3,0xb011));
  return;
}


/* ==== 00434094 TWinControl.CMParentCtl3DChanged ==== */

void TWinControl_CMParentCtl3DChanged(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x160) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TGroupBox_SetCtl3D(param_1,*(char *)(*(int *)(param_1 + 0x24) + 0x138));
    }
    else {
      TGroupBox_SetCtl3D(param_1,*(int *)(param_2 + 8) != 0);
    }
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  return;
}


/* ==== 004340d4 TWinControl.CMSysColorChange ==== */

void TWinControl_CMSysColorChange(int param_1,int param_2)

{
  FUN_004317dc(param_1,param_2);
  return;
}


/* ==== 004340dc TWinControl.CMWinIniChange ==== */

void TWinControl_CMWinIniChange(int param_1,int param_2)

{
  FUN_004317dc(param_1,param_2);
  return;
}


/* ==== 004340e4 TWinControl.CMFontChange ==== */

void TWinControl_CMFontChange(int param_1,int param_2)

{
  FUN_004317dc(param_1,param_2);
  return;
}


/* ==== 004340ec TWinControl.CMTimeChange ==== */

void TWinControl_CMTimeChange(int param_1,int param_2)

{
  FUN_004317dc(param_1,param_2);
  return;
}


/* ==== 004340f4 TWinControl.CMDrag ==== */

void TWinControl_CMDrag(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int local_18 [2];
  
  piVar1 = *(int **)(param_2 + 8);
  if (*(byte *)(param_2 + 4) < 4) {
    if (piVar1[3] != 0) {
      FUN_0042f1c8((int *)piVar1[3],param_2);
    }
  }
  else if (*(byte *)(param_2 + 4) == 5) {
    cVar3 = '\0';
    FUN_0042e2d8(param_1,piVar1,local_18);
    iVar2 = FUN_004320c4((int)param_1,local_18,0,cVar3);
    *(int *)(param_2 + 0xc) = iVar2;
    if (iVar2 == 0) {
      *(int **)(param_2 + 0xc) = param_1;
    }
  }
  return;
}


/* ==== 00434150 TWinControl.CMControlListChange ==== */

void TWinControl_CMControlListChange(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
  }
  return;
}


/* ==== 00434164 TWinControl.CMSysFontChanged ==== */

void TWinControl_CMSysFontChanged(int param_1,int param_2)

{
  TControl_CMSysFontChanged(param_1);
  FUN_004317dc(param_1,param_2);
  return;
}


/* ==== 00434180 FUN_00434180 ==== */

bool FUN_00434180(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  LRESULT LVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  
  piVar3 = param_1;
  iVar5 = param_2;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[9]) {
      piVar2 = (int *)FUN_00403178(piVar3,iVar5,param_3);
      param_3 = extraout_ECX;
      iVar5 = extraout_EDX;
      if (((piVar2 != (int *)0x0) && (piVar2[0xb] != 0)) &&
         (cVar1 = FUN_00403178(piVar2,param_2,extraout_ECX), param_3 = extraout_ECX_00,
         iVar5 = extraout_EDX_00, cVar1 != '\0')) {
        return true;
      }
    }
    piVar3 = FUN_00444864(param_1);
    if ((piVar3 != (int *)0x0) &&
       (cVar1 = FUN_00403178(piVar3,param_2,extraout_ECX_01), cVar1 != '\0')) {
      return true;
    }
  }
  LVar4 = FUN_0042b968(0xb016,(uint)*(ushort *)(param_2 + 4),*(LPARAM *)(param_2 + 8));
  return LVar4 != 0;
}


/* ==== 00434214 TWinControl.CNKeyDown ==== */

void TWinControl_CNKeyDown(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_2 + 0xc) = 1;
  bVar1 = FUN_00434180(param_1,param_2,param_3);
  if (bVar1) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) goto LAB_004342e1;
  iVar2 = FUN_0042f720((int)param_1,0xb02e,(uint)*(ushort *)(param_2 + 4),param_1);
  if (iVar2 != 0) {
    return;
  }
  uVar5 = 0;
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  if (uVar3 < 0x1c) {
    if ((uVar3 == 0x1b) || (uVar3 == 3)) {
LAB_00434291:
      uVar5 = 4;
    }
    else if (uVar3 == 9) {
      uVar5 = 2;
    }
    else if (uVar3 == 0xd) goto LAB_00434291;
  }
  else if (uVar3 - 0x25 < 4) {
    uVar5 = 1;
  }
  else if (uVar3 == 0x2b) goto LAB_00434291;
  if (((uVar5 != 0) &&
      (iVar2 = FUN_0042f720((int)param_1,0xb01e,(uint)*(ushort *)(param_2 + 4),0), iVar2 == 0)) &&
     (uVar3 = FUN_0042f720((int)param_1,0x87,0,0), (uVar3 & uVar5) == 0)) {
    uVar6 = *(undefined4 *)(param_2 + 8);
    piVar4 = FUN_00444864(param_1);
    iVar2 = FUN_0042f720((int)piVar4,0xb005,(uint)*(ushort *)(param_2 + 4),uVar6);
    if (iVar2 != 0) {
      return;
    }
  }
LAB_004342e1:
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


/* ==== 004342ec TWinControl.CNKeyUp ==== */

void TWinControl_CNKeyUp(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    uVar1 = (uint)*(ushort *)(param_2 + 4);
    if (uVar1 < 0x1c) {
      if ((((uVar1 != 0x1b) && (uVar1 != 3)) && (uVar1 != 9)) && (uVar1 != 0xd)) {
        return;
      }
    }
    else if ((3 < uVar1 - 0x25) && (uVar1 - 0x25 != 6)) {
      return;
    }
    uVar2 = FUN_0042f720(param_1,0xb01e,(uint)*(ushort *)(param_2 + 4),0);
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  return;
}


/* ==== 00434340 TWinControl.CNChar ==== */

void TWinControl_CNChar(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    uVar1 = FUN_0042f720((int)param_1,0x87,0,0);
    if ((uVar1 & 0x80) == 0) {
      uVar4 = *(undefined4 *)(param_2 + 8);
      piVar2 = FUN_00444864(param_1);
      iVar3 = FUN_0042f720((int)piVar2,0xb006,(uint)*(ushort *)(param_2 + 4),uVar4);
      if (iVar3 != 0) {
        return;
      }
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}


/* ==== 0043438c TWinControl.CNSysKeyDown ==== */

void TWinControl_CNSysKeyDown(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_2 + 0xc) = 1;
  bVar1 = FUN_00434180(param_1,param_2,param_3);
  if (bVar1) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    iVar2 = FUN_0042f720((int)param_1,0xb02e,(uint)*(ushort *)(param_2 + 4),param_1);
    if (iVar2 != 0) {
      return;
    }
    uVar4 = *(undefined4 *)(param_2 + 8);
    piVar3 = FUN_00444864(param_1);
    iVar2 = FUN_0042f720((int)piVar3,0xb005,(uint)*(ushort *)(param_2 + 4),uVar4);
    if (iVar2 != 0) {
      return;
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


/* ==== 004343e8 TWinControl.CNSysChar ==== */

void TWinControl_CNSysChar(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(short *)(param_2 + 4) != 0x20)) {
    uVar2 = *(undefined4 *)(param_2 + 8);
    piVar1 = FUN_00444864(param_1);
    uVar2 = FUN_0042f720((int)piVar1,0xb006,(uint)*(ushort *)(param_2 + 4),uVar2);
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  return;
}


/* ==== 0043441c TWinControl.virtual_07c ==== */

void TWinControl_virtual_07c(int *param_1,int x_val,int y_val,int cy_val,int cx_val)

{
  bool bVar1;
  BOOL BVar2;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  LONG *pLVar3;
  RECT *pRVar4;
  byte bVar5;
  LONG local_40 [4];
  WINDOWPLACEMENT windowplacement;
  
  bVar5 = 0;
  if ((((x_val == param_1[0xc]) && (y_val == param_1[0xd])) && (cx_val == param_1[0xe])) &&
     (cy_val == param_1[0xf])) {
    return;
  }
  bVar1 = FUN_00434cdc((int)param_1);
  if ((bVar1) && (BVar2 = IsIconic((HWND)param_1[0x53]), BVar2 == 0)) {
    SetWindowPos((HWND)param_1[0x53],(HWND)0x0,x_val,y_val,cx_val,cy_val,0x14);
  }
  else {
    param_1[0xc] = x_val;
    param_1[0xd] = y_val;
    param_1[0xe] = cx_val;
    param_1[0xf] = cy_val;
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      windowplacement.length = 0x2c;
      GetWindowPlacement((HWND)param_1[0x53],&windowplacement);
      FUN_0042e13c((int)param_1,local_40);
      pLVar3 = local_40;
      pRVar4 = &windowplacement.rcNormalPosition;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        pRVar4->left = *pLVar3;
        pLVar3 = pLVar3 + (uint)bVar5 * -2 + 1;
        pRVar4 = (RECT *)((int)pRVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      SetWindowPlacement((HWND)param_1[0x53],&windowplacement);
    }
  }
  FUN_0042de78((int)param_1);
  FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 004344f8 FUN_004344f8 ==== */

void FUN_004344f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int i_val;
  int *piVar1;
  int j;
  
  i_val = FUN_004317bc(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_00431780(param_1,j);
      FUN_00403178(piVar1,param_2,param_3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00434540 TWinControl.dynamic_ffed ==== */

void TWinControl_dynamic_ffed(int *param_1,int numerator,int denominator)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x434555;
  FUN_00431324((int)param_1);
  puStack_18 = &LAB_00434591;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004344f8((int)param_1,numerator,denominator);
  TControl_dynamic_ffed(param_1,numerator,denominator);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00434598;
  puStack_18 = (undefined1 *)0x434590;
  FUN_0043132c((int)param_1);
  return;
}


/* ==== 004345a0 FUN_004345a0 ==== */

void FUN_004345a0(int *param_1,int x_amount,int y_amount)

{
  bool bVar1;
  BOOL BVar2;
  int i_val;
  int *piVar3;
  undefined4 uVar4;
  int j;
  
  if ((HWND)param_1[0x53] != (HWND)0x0) {
    BVar2 = IsWindowVisible((HWND)param_1[0x53]);
    if (BVar2 != 0) {
      bVar1 = true;
      goto LAB_004345ca;
    }
  }
  bVar1 = false;
LAB_004345ca:
  if (bVar1) {
    ScrollWindow((HWND)param_1[0x53],x_amount,y_amount,(RECT *)0x0,(RECT *)0x0);
  }
  i_val = FUN_004317bc((int)param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar3 = (int *)FUN_00431780((int)param_1,j);
      uVar4 = FUN_00403114(piVar3,(int)&PTR_TWinControl_virtual_000_0042ac0c);
      if (((char)uVar4 == '\0') || (piVar3[0x53] == 0)) {
        piVar3[0xc] = piVar3[0xc] + x_amount;
        piVar3[0xd] = piVar3[0xd] + y_amount;
      }
      else if (!bVar1) {
        SetWindowPos((HWND)piVar3[0x53],(HWND)0x0,piVar3[0xc] + x_amount,piVar3[0xd] + y_amount,
                     piVar3[0xe],piVar3[0xf],0x14);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_0043134c(param_1);
  return;
}


/* ==== 00434678 TWinControl.virtual_0ac ==== */

void TWinControl_virtual_0ac(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xac))(piVar1,param_1);
  }
  return;
}


/* ==== 00434690 FUN_00434690 ==== */

void FUN_00434690(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND hWndInsertAfter;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x134) != 0) {
      param_2 = param_2 - *(int *)(*(int *)(iVar3 + 0x134) + 8);
    }
    iVar3 = FUN_0041030c(*(int *)(iVar3 + 0x180),param_1);
    if (-1 < iVar3) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x24) + 0x180);
      iVar1 = piVar4[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (iVar3 != param_2) {
        FUN_00410150(piVar4,iVar3);
        FUN_0041032c(*(int **)(*(int *)(param_1 + 0x24) + 0x180),param_2,param_1);
      }
    }
    if (*(int *)(param_1 + 0x14c) != 0) {
      if (param_2 == 0) {
        hWndInsertAfter = (HWND)0x1;
      }
      else {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x180);
        if (param_2 == puVar2[2] + -1) {
          hWndInsertAfter = (HWND)0x0;
        }
        else if (iVar3 < param_2) {
          piVar4 = (int *)FUN_004102b0(puVar2,param_2 + 1);
          hWndInsertAfter = (HWND)FUN_004349e0(piVar4);
        }
        else {
          if (iVar3 <= param_2) {
            return;
          }
          piVar4 = (int *)FUN_004102b0(puVar2,param_2);
          hWndInsertAfter = (HWND)FUN_004349e0(piVar4);
        }
      }
      SetWindowPos(*(HWND *)(param_1 + 0x14c),hWndInsertAfter,0,0,0,0,3);
    }
  }
  return;
}


/* ==== 00434768 TWinControl.dynamic_ffd3 ==== */

void TWinControl_dynamic_ffd3(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    if ((char)param_2 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x180) + 8) + -1;
    }
    iVar3 = 0;
    if (*(int *)(iVar1 + 0x134) != 0) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x134) + 8);
    }
    FUN_00434690(param_1,iVar2 + iVar3);
    return;
  }
  if (*(HWND *)(param_1 + 0x14c) != (HWND)0x0) {
    SetWindowPos(*(HWND *)(param_1 + 0x14c),
                 (HWND)(uint)*(ushort *)(&DAT_004aa7c0 + (param_2 & 0x7f) * 2),0,0,0,0,3);
  }
  return;
}


/* ==== 004347c8 TWinControl.virtual_044 ==== */

void TWinControl_virtual_044(int *param_1,int *param_2)

{
  HWND pHVar1;
  HDC pHVar2;
  int *piVar3;
  HRGN hrgnClip;
  DWORD flags;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    pHVar1 = (HWND)FUN_004349e0(param_1);
    pHVar2 = GetDC(pHVar1);
  }
  else {
    flags = 0x12;
    hrgnClip = (HRGN)0x0;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    pHVar2 = GetDCEx(pHVar1,hrgnClip,flags);
  }
  if (pHVar2 == (HDC)0x0) {
    piVar3 = FUN_0040b694((int *)&DAT_0040e9b0,'\x01',(undefined4 *)PTR_PTR_004ab88c);
    FUN_004036f4(piVar3);
  }
  *param_2 = param_1[0x53];
  return;
}


/* ==== 0043481c FUN_0043481c ==== */

int FUN_0043481c(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar1 = FUN_004349e0(*(int **)(param_1 + 0x24));
    return iVar1;
  }
  return *(int *)(param_1 + 0x164);
}


/* ==== 00434834 thunk_FUN_00434838 ==== */

int thunk_FUN_00434838(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  do {
    piVar1 = param_1;
    param_1 = (int *)piVar1[9];
  } while ((int *)piVar1[9] != (int *)0x0);
  iVar2 = piVar1[0x59];
  if (iVar2 == 0) {
    iVar2 = FUN_004349e0(piVar1);
  }
  return iVar2;
}


/* ==== 00434838 FUN_00434838 ==== */

int FUN_00434838(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  do {
    piVar1 = param_1;
    param_1 = (int *)piVar1[9];
  } while ((int *)piVar1[9] != (int *)0x0);
  iVar2 = piVar1[0x59];
  if (iVar2 == 0) {
    iVar2 = FUN_004349e0(piVar1);
  }
  return iVar2;
}


/* ==== 00434854 TWinControl.virtual_074 ==== */

void TWinControl_virtual_074(int param_1)

{
  FUN_0042f720(param_1,0xb034,0,0);
  return;
}


/* ==== 00434864 TWinControl.CMInvalidate ==== */

void TWinControl_CMInvalidate(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00434cdc(param_1);
  if (bVar1) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0042f720(*(int *)(param_1 + 0x24),0xb034,1,0);
    }
    if (*(int *)(param_2 + 4) == 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x14c),(RECT *)0x0,
                     -(uint)((*(byte *)(param_1 + 0x40) & 0x40) == 0));
    }
  }
  return;
}


/* ==== 004348b4 TWinControl.virtual_080 ==== */

void TWinControl_virtual_080(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00434cdc(param_1);
  if (bVar1) {
    UpdateWindow(*(HWND *)(param_1 + 0x14c));
  }
  return;
}


/* ==== 004348d0 TWinControl.virtual_078 ==== */

void TWinControl_virtual_078(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  (**(code **)(*param_1 + 0x80))();
  return;
}


/* ==== 004348e8 FUN_004348e8 ==== */

void FUN_004348e8(int param_1)

{
  tagRECT local_14;
  
  FUN_0042e13c(param_1,&local_14.left);
  InflateRect(&local_14,1,1);
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x24) + 0x14c),&local_14,-1);
  return;
}


/* ==== 00434920 TWinControl.dynamic_ffbc ==== */

undefined1 TWinControl_dynamic_ffbc(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 local_c;
  
  local_c = 0;
  piVar2 = FUN_00444864(param_1);
  if (piVar2 != (int *)0x0) {
    for (; piVar2 != param_1; param_1 = (int *)param_1[9]) {
      if (*(char *)((int)param_1 + 0x47) == '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*param_1 + 0x4c))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    local_c = 1;
  }
  return local_c;
}


/* ==== 00434960 TWinControl.virtual_0b0 ==== */

void TWinControl_virtual_0b0(int *param_1)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00444864(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_0044835c(piVar1,param_1,extraout_ECX);
    return;
  }
  if (param_1[0x59] == 0) {
    FUN_0044488c(param_1);
  }
  else {
    hWnd = (HWND)FUN_004349e0(param_1);
    SetFocus(hWnd);
  }
  return;
}


/* ==== 00434998 TWinControl.dynamic_ffb9 ==== */

undefined4 TWinControl_dynamic_ffb9(int param_1)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    pHVar1 = GetFocus();
    if (pHVar1 == *(HWND *)(param_1 + 0x14c)) {
      return CONCAT31((int3)((uint)pHVar1 >> 8),1);
    }
  }
  return 0;
}


/* ==== 004349bc FUN_004349bc ==== */

void FUN_004349bc(int *param_1)

{
  if (param_1[0x53] == 0) {
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_004349bc((int *)param_1[9]);
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  return;
}


/* ==== 004349e0 FUN_004349e0 ==== */

int FUN_004349e0(int *param_1)

{
  FUN_004349bc(param_1);
  return param_1[0x53];
}


/* ==== 004349f4 TWinControl.virtual_0a4 ==== */

void TWinControl_virtual_0a4(int param_1,int *param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  FUN_0040f7e8(0x7fffffff,0x7fffffff,0,param_2,0);
  i_val = FUN_004317bc(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_00431780(param_1,j);
      if ((*(char *)(iVar1 + 0x47) != '\0') ||
         (((*(byte *)(iVar1 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar1 + 0x41) & 4) == 0)))) {
        if (*(int *)(iVar1 + 0x30) < *param_2) {
          *param_2 = *(int *)(iVar1 + 0x30);
        }
        if (*(int *)(iVar1 + 0x34) < param_2[1]) {
          param_2[1] = *(int *)(iVar1 + 0x34);
        }
        if (param_2[2] < *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x38)) {
          param_2[2] = *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x38);
        }
        if (param_2[3] < *(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x3c)) {
          param_2[3] = *(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x3c);
        }
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00434a88 TWinControl.virtual_03c ==== */

void TWinControl_virtual_03c(int *param_1,LPPOINT point)

{
  HWND hWnd;
  
  point->x = 0;
  point->y = 0;
  hWnd = (HWND)FUN_004349e0(param_1);
  ClientToScreen(hWnd,point);
  return;
}


/* ==== 00434aa8 TWinControl.virtual_040 ==== */

void TWinControl_virtual_040(int *param_1,LPRECT rect)

{
  HWND hWnd;
  
  hWnd = (HWND)FUN_004349e0(param_1);
  GetClientRect(hWnd,rect);
  return;
}


/* ==== 00434ac0 TWinControl.dynamic_ffef ==== */

void TWinControl_dynamic_ffef(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      uFlags = 0x16;
      cy = param_1[0xf];
      cx = param_1[0xe];
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      hWnd = (HWND)FUN_004349e0(param_1);
      SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
      FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    }
  }
  return;
}


/* ==== 00434da0 TWinControl.dynamic_ffb8 ==== */

void TWinControl_dynamic_ffb8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  int i_val;
  undefined4 j;
  
  if ((*(int *)(param_1 + 0x16c) != 0) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x16c) + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar1 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x16c),j);
      FUN_00410104(param_2,(int)piVar1);
      FUN_00403178(piVar1,param_2,extraout_ECX);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00434df8 FUN_00434df8 ==== */

void FUN_00434df8(int *param_1,int param_2,undefined4 param_3,char param_4,char param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_14;
  int *local_10;
  
  local_10 = (int *)0x0;
  puStack_28 = (undefined1 *)0x434e1a;
  piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
  puStack_2c = &LAB_00434eee;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00403178(param_1,piVar2,extraout_ECX);
  if (0 < piVar2[2]) {
    local_14 = FUN_0041030c((int)piVar2,param_2);
    i_val = local_14;
    if (local_14 == -1) {
      if ((char)param_3 == '\0') {
        local_14 = 0;
        i_val = local_14;
      }
      else {
        local_14 = piVar2[2] + -1;
        i_val = local_14;
      }
    }
    do {
      if ((char)param_3 == '\0') {
        if (i_val == 0) {
          i_val = piVar2[2];
        }
        i_val = i_val + -1;
      }
      else {
        i_val = i_val + 1;
        if (i_val == piVar2[2]) {
          i_val = 0;
        }
      }
      piVar3 = (int *)FUN_004102b0(piVar2,i_val);
      cVar1 = FUN_00403178(piVar3,extraout_EDX,extraout_ECX_00);
      if (((cVar1 != '\0') && ((param_5 == '\0' || ((char)piVar3[0x5d] != '\0')))) &&
         ((param_4 == '\0' || ((int *)piVar3[9] == param_1)))) {
        local_10 = piVar3;
      }
    } while ((local_10 == (int *)0x0) && (i_val != local_14));
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00434ef5;
  puStack_2c = (undefined1 *)0x434eed;
  FUN_00402f9c(piVar2);
  return;
}


/* ==== 00434f04 FUN_00434f04 ==== */

void FUN_00434f04(int *param_1,int param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00434df8(param_1,param_2,param_3,param_4 ^ 1,param_4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb0))();
  }
  return;
}


/* ==== 00434f30 FUN_00434f30 ==== */

void FUN_00434f30(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  
  piVar1 = FUN_00444864(param_1);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)FUN_00434df8(param_1,0,CONCAT31((int3)((uint)extraout_ECX >> 8),1),'\0','\x01');
    uVar3 = extraout_ECX_00;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_00434df8(param_1,0,CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1),'\0',
                                   '\0');
      uVar3 = extraout_ECX_01;
    }
    if (piVar2 != (int *)0x0) {
      TForm_SetActiveControl(piVar1,piVar2,uVar3);
    }
  }
  return;
}


/* ==== 00434f74 TWinControl.dynamic_fffd ==== */

void TWinControl_dynamic_fffd
               (int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_004317bc(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_00431780(param_1,j);
      if (*(int *)(iVar1 + 4) == param_2) {
        (*(code *)param_4)(param_5,iVar1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00434fbc TWinControl.dynamic_fffa ==== */

void TWinControl_dynamic_fffa(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
  if ((char)uVar1 != '\0') {
    FUN_00434690((int)param_2,param_3);
    return;
  }
  uVar1 = FUN_00403114(param_2,(int)&PTR_TControl_virtual_000_0042a694);
  if ((char)uVar1 != '\0') {
    FUN_0042e998(param_2,param_3);
  }
  return;
}


/* ==== 00434ffc TWinControl.virtual_030 ==== */

void TWinControl_virtual_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  TControl_virtual_030(param_1,param_2,param_3);
  return;
}


/* ==== 00435004 FUN_00435004 ==== */

void FUN_00435004(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = param_1[0x19];
  if (*(int *)(iVar1 + 0x14) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(param_1[0x19] + 0x14);
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_1[0x19] + 0x10);
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    *param_5 = 0;
  }
  else {
    *param_5 = *(undefined4 *)(param_1[0x19] + 0xc);
  }
  if (*(int *)(iVar1 + 8) == 0) {
    *param_4 = 0;
  }
  else {
    *param_4 = *(undefined4 *)(param_1[0x19] + 8);
  }
  (**(code **)(*param_1 + 0x38))();
  return;
}


/* ==== 00435084 FUN_00435084 ==== */

void FUN_00435084(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int i_val;
  BOOL BVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  RECT rect;
  char local_51;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int j;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_3;
  local_8 = param_2;
  bVar1 = FUN_00434cdc((int)param_1);
  if ((bVar1) && (i_val = FUN_004317bc((int)param_1), i_val != 0)) {
    (**(code **)(*param_1 + 0x40))(param_1,&rect);
    (**(code **)(*param_1 + 0x84))(param_1,&rect);
    puStack_78 = (undefined1 *)0x4350d3;
    BVar4 = IsRectEmpty(&rect);
    if (BVar4 == 0) {
      local_18 = param_1[0xe] - (rect.right - rect.left);
      local_1c = param_1[0xf] - (rect.bottom - rect.top);
      if (0 < *local_8) {
        *local_8 = *local_8 - local_18;
      }
      if (0 < *local_c) {
        *local_c = *local_c - local_1c;
      }
      if (0 < *param_5) {
        *param_5 = *param_5 - local_18;
      }
      if (0 < *param_4) {
        *param_4 = *param_4 - local_1c;
      }
      puStack_78 = &LAB_00435446;
      uStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_7c;
      local_24 = 0;
      local_34 = 0;
      local_28 = 0;
      local_38 = 0;
      local_2c = 0;
      local_3c = 0;
      local_30 = 0;
      local_40 = 0;
      local_14 = local_1c;
      local_10 = local_18;
      i_val = FUN_004317bc((int)param_1);
      if (-1 < i_val + -1) {
        j = 0;
        do {
          piVar5 = (int *)FUN_00431780((int)param_1,j);
          if ((*(char *)((int)piVar5 + 0x47) != '\0') ||
             (((*(byte *)(piVar5 + 8) & 0x10) != 0 && ((*(byte *)((int)piVar5 + 0x41) & 4) == 0))))
          {
            FUN_00435004(piVar5,&local_44,&local_4c,&local_50,&local_48);
            cVar3 = *(char *)((int)piVar5 + 0x4b);
            if (cVar3 == '\0') {
              if ((*(byte *)((int)piVar5 + 0x51) & 5) == 5) {
                local_51 = '\x01';
                if (0 < local_44) {
                  local_44 = ((rect.right - rect.left) - piVar5[0xe]) - local_44;
                }
                if (0 < local_48) {
                  local_48 = ((rect.right - rect.left) + local_48) - piVar5[0xe];
                }
              }
              else {
                local_51 = '\0';
              }
            }
            else if ((byte)(cVar3 - 1U) < 2) {
              local_51 = '\x01';
            }
            else if (cVar3 == '\x05') {
              local_51 = '\x02';
            }
            else {
              local_51 = '\x03';
            }
            if (*(char *)((int)piVar5 + 0x4b) == '\0') {
              if ((*(byte *)((int)piVar5 + 0x51) & 10) == 10) {
                cVar3 = '\x01';
                if (0 < local_4c) {
                  local_4c = ((rect.bottom - rect.top) - piVar5[0xf]) - local_4c;
                }
                if (0 < local_50) {
                  local_50 = ((rect.bottom - rect.top) + local_50) - piVar5[0xf];
                }
              }
              else {
                cVar3 = '\0';
              }
            }
            else {
              bVar2 = *(char *)((int)piVar5 + 0x4b) - 3;
              if (bVar2 < 2) {
                cVar3 = '\x01';
              }
              else if (bVar2 == 2) {
                cVar3 = '\x02';
              }
              else {
                cVar3 = '\x03';
              }
            }
            if ((byte)(local_51 - 1U) < 2) {
              if (((0 < local_44) && (*local_8 < local_44)) &&
                 (*local_8 = local_44, local_24 < *local_8)) {
                local_24 = *local_8;
              }
              if (((0 < local_48) && (local_48 < *param_5)) &&
                 (*param_5 = local_48, local_28 < *param_5)) {
                local_28 = *param_5;
              }
            }
            else if (local_51 == '\x03') {
              local_34 = local_34 + piVar5[0xe];
              local_38 = local_38 + piVar5[0xe];
            }
            if ((byte)(cVar3 - 1U) < 2) {
              if (((0 < local_4c) && (*local_c < local_4c)) &&
                 (*local_c = local_4c, local_2c < *local_c)) {
                local_2c = *local_c;
              }
              if (((0 < local_50) && (local_50 < *param_4)) &&
                 (*param_4 = local_50, local_30 < *param_4)) {
                local_30 = *param_4;
              }
            }
            else if ((byte)(cVar3 - 1U) == 2) {
              local_3c = local_3c + piVar5[0xf];
              local_40 = local_40 + piVar5[0xf];
            }
          }
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
      if ((0 < local_24) && (*local_8 < local_24 + local_34)) {
        *local_8 = local_24 + local_34;
      }
      if ((0 < local_28) && ((*param_5 == 0 || (*param_5 < local_28 + local_38)))) {
        *param_5 = local_28 + local_38;
      }
      if ((0 < local_2c) && (*local_c < local_2c + local_3c)) {
        *local_c = local_2c + local_3c;
      }
      if ((0 < local_30) && ((*param_4 == 0 || (*param_4 < local_30 + local_40)))) {
        *param_4 = local_30 + local_40;
      }
      *in_FS_OFFSET = uStack_7c;
      if (0 < *local_8) {
        *local_8 = *local_8 + local_10;
      }
      if (0 < *local_c) {
        *local_c = *local_c + local_14;
      }
      if (0 < *param_5) {
        *param_5 = *param_5 + local_18;
      }
      if (0 < *param_4) {
        *param_4 = *param_4 + local_1c;
      }
      return;
    }
  }
  return;
}


/* ==== 00435460 TWinControl.virtual_038 ==== */

void TWinControl_virtual_038(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  FUN_00435084(param_1,param_2,param_3,param_4,param_5);
  TControl_virtual_038((int)param_1,param_2,param_3,param_4,param_5);
  return;
}


/* ==== 0043549c TWinControl.dynamic_fff0 ==== */

void TWinControl_dynamic_fff0(int *param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  
  TControl_dynamic_fff0(param_1,param_2,param_3);
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if (((char)uVar1 != '\0') && ((param_3 == '\0' || (param_1[0x54] == 0)))) {
    param_1[0x54] = param_2[0x17];
  }
  return;
}


/* ==== 004354dc TWinControl.dynamic_ffde ==== */

undefined ** TWinControl_dynamic_ffde(void)

{
  return &PTR_TWinControlActionLink_virtual_000_0042aa00;
}


/* ==== 00435504 TWinControl.virtual_000 ==== */

void TWinControl_virtual_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  TControl_virtual_000(param_1,param_2);
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if ((char)uVar1 != '\0') {
    FUN_00439d88(param_2,param_1[0x54]);
  }
  return;
}


/* ==== 00435534 TWinControl.virtual_034 ==== */

undefined1 TWinControl_virtual_034(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  int j;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  int i_val;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_11 = 1;
  puStack_48 = (undefined1 *)0x435552;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  bVar2 = FUN_00434cdc((int)param_1);
  if ((bVar2) && (*(char *)((int)local_8 + 0x4b) != '\x05')) {
    if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
      puStack_48 = (undefined1 *)0x435578;
      j = FUN_004317bc((int)local_8);
      if (j < 1) {
        return local_11;
      }
    }
    puStack_48 = (undefined1 *)0x43558e;
    (**(code **)(*local_8 + 0xa4))(local_8,&local_28);
    puStack_48 = (undefined1 *)0x435599;
    (**(code **)(*local_8 + 0x40))(local_8,&local_38);
    puStack_48 = (undefined1 *)0x4355a7;
    (**(code **)(*local_8 + 0x84))(local_8,&local_38);
    puStack_48 = (undefined1 *)0x4355af;
    FUN_00431324((int)local_8);
    puStack_4c = &LAB_00435659;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    puStack_48 = &stack0xfffffffc;
    j = FUN_004317bc((int)local_8);
    if (-1 < j + -1) {
      i_val = 0;
      do {
        piVar4 = (int *)FUN_00431780((int)local_8,i_val);
        if ((*(char *)((int)piVar4 + 0x47) != '\0') ||
           (((*(byte *)(piVar4 + 8) & 0x10) != 0 && ((*(byte *)((int)piVar4 + 0x41) & 4) == 0)))) {
          bVar1 = *(byte *)((int)local_8 + 0x4b);
          if ((bVar1 == 0) || ((byte)(bVar1 - 3) < 2)) {
            iVar6 = local_28 - local_38;
          }
          else {
            iVar6 = 0;
          }
          if (bVar1 < 3) {
            iVar5 = local_24 - local_34;
          }
          else {
            iVar5 = 0;
          }
          (**(code **)(*piVar4 + 0x7c))
                    (piVar4,piVar4[0xc] - iVar6,piVar4[0xd] - iVar5,piVar4[0xf],piVar4[0xe]);
        }
        i_val = i_val + 1;
        j = j + -1;
      } while (j != 0);
    }
    *in_FS_OFFSET = uStack_50;
    puStack_48 = &DAT_00435660;
    *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xffef;
    puStack_4c = (undefined1 *)0x435658;
    uVar3 = FUN_0043132c((int)local_8);
    return uVar3;
  }
  return local_11;
}


/* ==== 004356f8 TWinControl.WMNCCalcSize ==== */

void TWinControl_WMNCCalcSize(int *param_1,int param_2)

{
  LPRECT lprc;
  int iVar1;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  lprc = *(LPRECT *)(param_2 + 8);
  InflateRect(lprc,-param_1[0x4b],-param_1[0x4b]);
  if (*(char *)((int)param_1 + 0x125) != '\0') {
    iVar1 = 0;
    if (*(char *)((int)param_1 + 0x123) != '\0') {
      iVar1 = param_1[0x4a];
    }
    if ((char)param_1[0x49] != '\0') {
      iVar1 = iVar1 + param_1[0x4a];
    }
    if ((*(byte *)((int)param_1 + 0x122) & 1) != 0) {
      lprc->left = lprc->left + iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x122) & 2) != 0) {
      lprc->top = lprc->top + iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x122) & 4) != 0) {
      lprc->right = lprc->right - iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x122) & 8) != 0) {
      lprc->bottom = lprc->bottom - iVar1;
    }
  }
  return;
}


/* ==== 00435788 TWinControl.WMNCPaint ==== */

void TWinControl_WMNCPaint(int *param_1,undefined4 param_2)

{
  HWND pHVar1;
  uint window_long;
  HBRUSH hbr;
  int i_val;
  tagRECT *ptVar2;
  LONG *pLVar3;
  tagRECT *rect;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  UINT cPoints;
  undefined4 uVar5;
  HDC hDC;
  LONG local_40 [4];
  tagRECT left_val;
  tagRECT left_val_2;
  HDC local_10;
  undefined4 local_c;
  int *local_8;
  int index_val;
  
  bVar4 = 0;
  local_c = param_2;
  local_8 = param_1;
  if ((*(char *)((int)param_1 + 0x125) == '\0') && (param_1[0x4b] == 0)) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
    return;
  }
  pHVar1 = (HWND)FUN_004349e0(param_1);
  local_10 = GetWindowDC(pHVar1);
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa8;
  ptVar2 = &left_val_2;
  pHVar1 = (HWND)FUN_004349e0(local_8);
  GetClientRect(pHVar1,ptVar2);
  ptVar2 = &left_val;
  pHVar1 = (HWND)FUN_004349e0(local_8);
  GetWindowRect(pHVar1,ptVar2);
  cPoints = 2;
  ptVar2 = &left_val;
  pHVar1 = (HWND)FUN_004349e0(local_8);
  MapWindowPoints((HWND)0x0,pHVar1,(LPPOINT)ptVar2,cPoints);
  OffsetRect(&left_val_2,-left_val.left,-left_val.top);
  ExcludeClipRect(local_10,left_val_2.left,left_val_2.top,left_val_2.right,left_val_2.bottom);
  ptVar2 = &left_val;
  pLVar3 = local_40;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  InflateRect(&left_val_2,local_8[0x4b],local_8[0x4b]);
  ptVar2 = &left_val_2;
  rect = &left_val;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    rect->left = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    rect = (tagRECT *)((int)rect + ((uint)bVar4 * -2 + 1) * 4);
  }
  if (*(char *)((int)local_8 + 0x125) != '\0') {
    i_val = 0;
    if (*(char *)((int)local_8 + 0x123) != '\0') {
      i_val = local_8[0x4a];
    }
    if ((char)local_8[0x49] != '\0') {
      i_val = i_val + local_8[0x4a];
    }
    index_val = -0x10;
    pHVar1 = (HWND)FUN_004349e0(local_8);
    window_long = GetWindowLongA(pHVar1,index_val);
    if ((*(byte *)((int)local_8 + 0x122) & 1) != 0) {
      left_val.left = left_val.left - i_val;
    }
    if ((*(byte *)((int)local_8 + 0x122) & 2) != 0) {
      left_val.top = left_val.top - i_val;
    }
    if ((*(byte *)((int)local_8 + 0x122) & 4) != 0) {
      left_val.right = left_val.right + i_val;
    }
    if ((window_long & 0x200000) != 0) {
      index_val = (**(code **)PTR_DAT_004ab760)();
      left_val.right = left_val.right + index_val;
    }
    if ((*(byte *)((int)local_8 + 0x122) & 8) != 0) {
      left_val.bottom = left_val.bottom + i_val;
    }
    if ((window_long & 0x100000) != 0) {
      i_val = (**(code **)PTR_DAT_004ab760)();
      left_val.bottom = left_val.bottom + i_val;
    }
    DrawEdge(local_10,&left_val,
             *(uint *)(&DAT_004aa7c4 + (uint)*(byte *)((int)local_8 + 0x123) * 4) |
             *(uint *)(&DAT_004aa7d4 + (uint)*(byte *)(local_8 + 0x49) * 4),
             (uint)*(byte *)((int)local_8 + 0x122) |
             *(uint *)(&DAT_004aa7e4 + (uint)*(byte *)((int)local_8 + 0x125) * 4) |
             *(uint *)(&DAT_004aa7f4 + (uint)*(byte *)(local_8 + 0x4e) * 4) | 0x2000);
  }
  IntersectClipRect(local_10,left_val.left,left_val.top,left_val.right,left_val.bottom);
  pLVar3 = local_40;
  ptVar2 = &left_val;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    ptVar2->left = *pLVar3;
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
  }
  OffsetRect(&left_val,-left_val.left,-left_val.top);
  hbr = (HBRUSH)FUN_00418a18(local_8[0x4c]);
  FillRect(local_10,&left_val,hbr);
  *in_FS_OFFSET = uVar5;
  hDC = local_10;
  pHVar1 = (HWND)FUN_004349e0(local_8);
  ReleaseDC(pHVar1,hDC);
  return;
}


/* ==== 00435a10 TWinControl.WMContextMenu ==== */

void TWinControl_WMContextMenu(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int local_1c [2];
  int local_14 [2];
  
  if (*(int *)(param_2 + 0xc) == 0) {
    cVar3 = '\0';
    FUN_004070e8(*(undefined4 *)(param_2 + 8),local_14);
    FUN_0042e2d8(param_1,local_14,local_1c);
    iVar1 = FUN_004320c4((int)param_1,local_1c,0,cVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_0042f720(iVar1,0x7b,0,*(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = uVar2;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      TControl_WMContextMenu(param_1,param_2);
    }
  }
  return;
}


/* ==== 00435a7c TGraphicControl.virtual_02c ==== */

int * TGraphicControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TControl_virtual_02c(param_1,'\0',param_3);
  piVar1 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',extraout_ECX_00);
  param_1[0x48] = (int)piVar1;
  FUN_0042d4c8(piVar1,(int)param_1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00435ad8 TGraphicControl.Destroy ==== */

void TGraphicControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1 == DAT_004aa7b8) {
    FUN_0042bbfc((int *)0x0);
  }
  FUN_00402f9c((int *)piVar1[0x48]);
  TControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00435b18 TGraphicControl.WMPaint ==== */

void TGraphicControl_WMPaint(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(int *)(param_2 + 4) != 0) {
    puStack_10 = (undefined1 *)0x435b3a;
    FUN_0041912c(param_1[0x48]);
    puStack_14 = &LAB_00435bb3;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_1c = (undefined1 *)0x435b59;
    puStack_10 = &stack0xfffffffc;
    FUN_00419558((int *)param_1[0x48],*(int *)(param_2 + 4));
    puStack_20 = &LAB_00435b90;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x84))();
    *in_FS_OFFSET = uStack_24;
    puStack_1c = &LAB_00435b97;
    puStack_20 = (undefined1 *)0x435b8f;
    FUN_00419558((int *)param_1[0x48],0);
    return;
  }
  return;
}


/* ==== 00435bc0 TGraphicControl.virtual_084 ==== */

void TGraphicControl_virtual_084(void)

{
  return;
}


/* ==== 00435bc4 THintWindow.virtual_02c ==== */

int * THintWindow_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomControl_virtual_02c(param_1,'\0',param_3);
  TGroupBox_SetColor((int)param_1,0x80ffff);
  TCanvas_SetFont(param_1[0x7c]);
  TBrush_SetStyle(*(int **)(param_1[0x7c] + 0x14),'\x01');
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00435c2c THintWindow.virtual_090 ==== */

void THintWindow_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  param_2[1] = -0x7f800000;
  param_2[9] = param_2[9] | 0x800;
  if (DAT_004ac750 != '\0') {
    param_2[2] = 0x80;
  }
  FUN_004318b0(param_1,(uint *)(param_2 + 2));
  return;
}


/* ==== 00435c68 THintWindow.WMNCHitTest ==== */

void THintWindow_WMNCHitTest(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  return;
}


/* ==== 00435c70 THintWindow.WMNCPaint ==== */

void THintWindow_WMNCPaint(int *param_1)

{
  HWND pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  HDC hDC;
  tagRECT local_1c;
  HDC hdc_val;
  int *local_8;
  
  local_8 = param_1;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  hdc_val = GetWindowDC(pHVar1);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  FUN_0040f7e8(0,0,local_8[0xe],&local_1c.left,local_8[0xf]);
  DrawEdge(hdc_val,&local_1c,1,0xf);
  *in_FS_OFFSET = uVar2;
  hDC = hdc_val;
  pHVar1 = (HWND)FUN_004349e0(local_8);
  ReleaseDC(pHVar1,hDC);
  return;
}


/* ==== 00435cf0 THintWindow.virtual_0b4 ==== */

void THintWindow_virtual_0b4(int *param_1)

{
  uint format_val;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_18;
  tagRECT rect;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  puStack_24 = &LAB_00435d7e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  (**(code **)(*param_1 + 0x40))(param_1,&rect);
  rect.left = rect.left + 2;
  rect.top = rect.top + 2;
  TFont_SetColor(*(int **)(param_1[0x7c] + 0xc),-0x7fffffe9,extraout_ECX);
  format_val = FUN_004306a8((int)param_1);
  format_val = format_val | 0x810;
  lprc = &rect;
  cchText = -1;
  TGroupBox_GetCaption((int)param_1,(int *)&local_18);
  lpchText = FUN_004040a0(local_18);
  hdc = (HDC)FUN_004194d8((int *)param_1[0x7c]);
  DrawTextA(hdc,lpchText,cchText,lprc,format_val);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00435d85;
  puStack_24 = (undefined1 *)0x435d7d;
  FUN_00403c5c((int *)&local_18);
  return;
}


/* ==== 00435d8c THintWindow.virtual_0c4 ==== */

undefined4 THintWindow_virtual_0c4(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4);
  if ((((((uVar1 < 0x100) || (0x108 < uVar1)) && (*(int *)(param_2 + 4) != 0xb000)) &&
       ((*(int *)(param_2 + 4) != 0xb001 && (*(int *)(param_2 + 4) != 0xb016)))) &&
      ((*(int *)(param_2 + 4) != 0xb017 && (*(int *)(param_2 + 4) != 0x111)))) &&
     (((*(uint *)(param_2 + 4) < 0x201 || (0x20a < *(uint *)(param_2 + 4))) &&
      (*(int *)(param_2 + 4) != 0xa0)))) {
    return 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* ==== 00435df0 FUN_00435df0 ==== */

void FUN_00435df0(int *param_1)

{
  FUN_00431dbc(param_1);
  return;
}


/* ==== 00435df8 THintWindow.CMTextChanged ==== */

void THintWindow_CMTextChanged(int *param_1)

{
  LONG LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_c;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  puStack_18 = &LAB_00435e83;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + -0x10))();
  if ((char)param_1[0x7e] == '\0') {
    TGroupBox_GetCaption((int)param_1,(int *)&local_8);
    LVar1 = FUN_00419338((int *)param_1[0x7c],local_8);
    TControl_SetWidth(param_1,LVar1 + 6);
    TGroupBox_GetCaption((int)param_1,(int *)&local_c);
    LVar1 = FUN_00419354((int *)param_1[0x7c],local_c);
    TControl_SetHeight(param_1,LVar1 + 4);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00435e8a;
  puStack_18 = (undefined1 *)0x435e82;
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 00435e90 THintWindow.virtual_0b8 ==== */

void THintWindow_virtual_0b8(int *param_1,int *param_2,uint *param_3)

{
  HWND hWnd;
  int i_val;
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  UINT uFlags;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18 [4];
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  piVar1 = local_18;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *piVar1 = *param_2;
    param_2 = param_2 + 1;
    piVar1 = piVar1 + 1;
  }
  *(undefined1 *)(param_1 + 0x7e) = 1;
  puStack_2c = &LAB_00435f9d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  TGroupBox_SetCaption((int)param_1,param_3);
  local_18[3] = local_18[3] + 4;
  FUN_0042f7c4((int)local_8,local_18);
  i_val = FUN_0044b124();
  if (i_val < local_8[0xf] + local_18[1]) {
    local_18[1] = FUN_0044b124();
    local_18[1] = local_18[1] - local_8[0xf];
  }
  i_val = FUN_0044b130();
  if (i_val < local_8[0xe] + local_18[0]) {
    local_18[0] = FUN_0044b130();
    local_18[0] = local_18[0] - local_8[0xe];
  }
  i_val = FUN_0044b118();
  if (local_18[0] < i_val) {
    local_18[0] = FUN_0044b118();
  }
  i_val = FUN_0044b10c();
  if (local_18[3] < i_val) {
    local_18[3] = FUN_0044b10c();
  }
  uFlags = 0x50;
  i_val = local_8[0xf];
  cx = local_8[0xe];
  hWndInsertAfter = (HWND)0xffffffff;
  X = local_18[0];
  Y = local_18[1];
  hWnd = (HWND)FUN_004349e0(local_8);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,i_val,uFlags);
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = uStack_30;
  *(undefined1 *)(local_8 + 0x7e) = 0;
  return;
}


/* ==== 00435fac THintWindow.virtual_0bc ==== */

void THintWindow_virtual_0bc(int *param_1,undefined4 *param_2,undefined4 param_3)

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
  (**(code **)(*param_1 + 0xb8))(param_1,local_14,param_3);
  return;
}


/* ==== 00435fd8 THintWindow.virtual_0c0 ==== */

void THintWindow_virtual_0c0(int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4)

{
  uint format_val;
  LPCSTR lpchText;
  HDC hdc;
  int cchText;
  LPRECT lprc;
  
  FUN_0040f7e8(0,0,param_2,&param_4->left,0);
  format_val = FUN_004306a8(param_1);
  format_val = format_val | 0xc10;
  cchText = -1;
  lprc = param_4;
  lpchText = FUN_004040a0(param_3);
  hdc = (HDC)FUN_004194d8(*(int **)(param_1 + 0x1f0));
  DrawTextA(hdc,lpchText,cchText,lprc,format_val);
  param_4->right = param_4->right + 6;
  param_4->bottom = param_4->bottom + 2;
  return;
}


/* ==== 00436034 FUN_00436034 ==== */

void FUN_00436034(HWND wnd,int param_2,int param_3,int *param_4)

{
  tagRECT rect;
  tagPOINT point;
  
  point.x = param_2;
  point.y = param_3;
  ClientToScreen(wnd,&point);
  GetWindowRect(wnd,&rect);
  *param_4 = point.x - rect.left;
  param_4[1] = point.y - rect.top;
  return;
}


/* ==== 00436074 TDragImageList.virtual_034 ==== */

void TDragImageList_virtual_034(int *param_1,undefined4 param_2,undefined4 param_3)

{
  TCustomImageList_virtual_034(param_1,param_2,param_3);
  FUN_004361a0((int)param_1,-1);
  return;
}


/* ==== 0043608c FUN_0043608c ==== */

void FUN_0043608c(int param_1)

{
  UINT flags;
  int cx;
  HICON pHVar1;
  undefined4 *in_FS_OFFSET;
  int cy;
  undefined4 uVar2;
  int cInitial;
  int cGrow;
  POINT dx_hotspot;
  HIMAGELIST local_8;
  
  if (*(short *)(param_1 + 0x60) != -1) {
    cGrow = 1;
    cInitial = 0xe;
    flags = (**(code **)PTR_DAT_004ab760)();
    cy = 0xd;
    cx = (**(code **)PTR_DAT_004ab760)();
    local_8 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd8;
    pHVar1 = (HICON)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)*(short *)(param_1 + 0x60));
    FUN_00420314(local_8,pHVar1);
    pHVar1 = (HICON)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)*(short *)(param_1 + 0x60));
    FUN_00420314(local_8,pHVar1);
    ImageList_SetDragCursorImage(local_8,0,0,0);
    ImageList_GetDragImage((POINT *)0x0,&dx_hotspot);
    ImageList_SetDragCursorImage(local_8,1,dx_hotspot.x,dx_hotspot.y);
    *in_FS_OFFSET = uVar2;
    ImageList_Destroy(local_8);
    return;
  }
  return;
}


/* ==== 00436158 FUN_00436158 ==== */

bool FUN_00436158(int param_1,int track,int dx_hotspot,int dy_hotspot)

{
  bool bVar1;
  HIMAGELIST himlTrack;
  
  bVar1 = FUN_0043a3e4(param_1);
  if (bVar1) {
    *(int *)(param_1 + 0x70) = track;
    *(int *)(param_1 + 0x68) = dx_hotspot;
    *(int *)(param_1 + 0x6c) = dy_hotspot;
    himlTrack = (HIMAGELIST)FUN_0043a5b8(param_1);
    ImageList_BeginDrag(himlTrack,track,dx_hotspot,dy_hotspot);
    *(undefined1 *)(param_1 + 0x62) = 1;
  }
  return bVar1;
}


/* ==== 004361a0 FUN_004361a0 ==== */

void FUN_004361a0(int param_1,short param_2)

{
  if ((param_2 != *(short *)(param_1 + 0x60)) &&
     (*(short *)(param_1 + 0x60) = param_2, *(char *)(param_1 + 0x62) != '\0')) {
    FUN_0043608c(param_1);
  }
  return;
}


/* ==== 004361b8 TDragImageList.virtual_038 ==== */

void TDragImageList_virtual_038(int param_1,POINT *ppt_hotspot)

{
  bool bVar1;
  
  TCustomImageList_virtual_038(param_1,&ppt_hotspot->x);
  bVar1 = FUN_0043a3e4(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x62) != '\0')) {
    ImageList_GetDragImage((POINT *)0x0,ppt_hotspot);
  }
  return;
}


/* ==== 004361e4 FUN_004361e4 ==== */

bool FUN_004361e4(int param_1,HWND wnd,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = FUN_0043a3e4(param_1);
  if (bVar1) {
    if (*(char *)(param_1 + 0x62) == '\0') {
      FUN_00436158(param_1,*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x68),
                   *(int *)(param_1 + 0x6c));
    }
    FUN_0043608c(param_1);
    bVar2 = FUN_00436244(param_1,wnd,param_3,param_4);
    if (bVar2) {
      ShowCursor(0);
    }
  }
  return bVar2;
}


/* ==== 00436244 FUN_00436244 ==== */

bool FUN_00436244(int param_1,HWND wnd,int param_3,int param_4)

{
  bool bVar1;
  BOOL BVar2;
  bool bVar3;
  int x_val;
  int y_val;
  int local_8;
  
  bVar3 = false;
  local_8 = param_3;
  bVar1 = FUN_0043a3e4(param_1);
  if ((bVar1) && (wnd != *(HWND *)(param_1 + 100))) {
    FUN_004362a8(param_1);
    *(HWND *)(param_1 + 100) = wnd;
    FUN_00436034(wnd,local_8,param_4,&x_val);
    BVar2 = ImageList_DragEnter(*(HWND *)(param_1 + 100),x_val,y_val);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}


/* ==== 004362a8 FUN_004362a8 ==== */

void FUN_004362a8(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_0043a3e4(param_1);
  if ((bVar1) && (*(int *)(param_1 + 100) != 0)) {
    ImageList_DragLeave(*(HWND *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


/* ==== 004362cc FUN_004362cc ==== */

bool FUN_004362cc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int x_val;
  int y_val;
  
  bVar1 = FUN_0043a3e4(param_1);
  if (bVar1) {
    FUN_00436034(*(HWND *)(param_1 + 100),param_2,param_3,&x_val);
    BVar2 = ImageList_DragMove(x_val,y_val);
    bVar1 = BVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* ==== 00436310 FUN_00436310 ==== */

void FUN_00436310(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_0043a3e4(param_1);
  if (bVar1) {
    ImageList_DragShowNolock(-1);
  }
  return;
}


/* ==== 00436328 FUN_00436328 ==== */

void FUN_00436328(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_0043a3e4(param_1);
  if (bVar1) {
    ImageList_DragShowNolock(0);
  }
  return;
}


/* ==== 00436340 FUN_00436340 ==== */

bool FUN_00436340(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_0043a3e4(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x62) != '\0')) {
    iVar2 = FUN_004362a8(param_1);
    ImageList_EndDrag();
    bVar1 = iVar2 != 0;
    *(undefined1 *)(param_1 + 0x62) = 0;
    FUN_004361a0(param_1,-1);
    ShowCursor(-1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* ==== 00436388 TCustomControl.virtual_02c ==== */

int * TCustomControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  piVar1 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',extraout_ECX_00);
  param_1[0x7c] = (int)piVar1;
  FUN_0042d4c8(piVar1,(int)param_1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 004363e4 TCustomControl.Destroy ==== */

void TCustomControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x7c]);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00436414 TCustomControl.WMPaint ==== */

void TCustomControl_WMPaint(int *param_1,int param_2)

{
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 0x100;
  TWinControl_WMPaint(param_1,param_2);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfeff;
  return;
}


/* ==== 00436434 TCustomControl.virtual_0a8 ==== */

void TCustomControl_virtual_0a8(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x43644c;
  FUN_0041912c(param_1[0x7c]);
  puStack_14 = &LAB_004364d2;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)0x43646a;
  puStack_10 = &stack0xfffffffc;
  FUN_00419558((int *)param_1[0x7c],param_2);
  puStack_20 = &LAB_004364af;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0042d4e0(param_1[0x7c]);
  (**(code **)(*param_1 + 0xb4))();
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004364b6;
  puStack_20 = (undefined1 *)0x4364ae;
  FUN_00419558((int *)param_1[0x7c],0);
  return;
}


/* ==== 004364e0 TCustomControl.virtual_0b4 ==== */

void TCustomControl_virtual_0b4(void)

{
  return;
}


/* ==== 004364e4 FUN_004364e4 ==== */

void FUN_004364e4(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffff0,in_stack_fffffff4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[7] = param_3;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


/* ==== 00436508 FUN_00436508 ==== */

int FUN_00436508(int param_1)

{
  int iVar1;
  int i_val;
  
  i_val = 0;
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    i_val = i_val + 1;
  }
  return i_val;
}


/* ==== 0043651c FUN_0043651c ==== */

void FUN_0043651c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (*(char *)(iVar2 + 0x10) != '\x01') {
    if (*(char *)(iVar2 + 0x10) == '\x02') {
      FUN_004365ac(param_1,'\x02');
    }
    else {
      piVar1 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',(undefined4 *)0x0);
      FUN_004036f4(piVar1);
    }
    return;
  }
  FUN_004365ac(param_1,'\x01');
  return;
}


/* ==== 00436564 FUN_00436564 ==== */

void FUN_00436564(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (*(char *)(iVar2 + 0x10) != '\x01') {
    if (*(char *)(iVar2 + 0x10) == '\x02') {
      FUN_00436618(param_1,'\x02');
    }
    else {
      piVar1 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',(undefined4 *)0x0);
      FUN_004036f4(piVar1);
    }
    return;
  }
  FUN_00436618(param_1,'\x01');
  return;
}


/* ==== 004365ac FUN_004365ac ==== */

undefined4 FUN_004365ac(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = param_1;
  while (iVar3 = iVar1, iVar3 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar1 = *(int *)(iVar3 + 0x14);
    if ((param_2 == *(char *)(iVar1 + 0x10)) && (*(int *)(iVar3 + 0x18) != 0)) {
      return *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x20);
    }
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
  (**(code **)(*piVar2 + 0x40))(piVar2,&uStack_18);
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
  (**(code **)(*piVar2 + 0x84))(piVar2,&uStack_18);
  if (param_2 == '\x01') {
    return uStack_14;
  }
  if (param_2 == '\x02') {
    return uStack_18;
  }
  return 0;
}


/* ==== 00436618 FUN_00436618 ==== */

int FUN_00436618(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  if ((param_1 == *(int *)(*(int *)(param_1 + 0x1c) + 100)) ||
     (((iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 100), iVar2 = param_1,
       iVar3 == *(int *)(param_1 + 0x14) && (*(int *)(param_1 + 4) != 0)) &&
      (iVar3 = FUN_00436508(iVar3), iVar3 == 1)))) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    (**(code **)(*piVar1 + 0x40))(piVar1,&iStack_1c);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    (**(code **)(*piVar1 + 0x84))(piVar1,&iStack_1c);
    if (param_2 == '\x01') {
      iStack_10 = iStack_10 - iStack_18;
    }
    else {
      iStack_10 = iStack_14 - iStack_1c;
    }
  }
  else {
    do {
      iVar3 = iVar2;
      if (iVar3 == *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
        if (param_2 == *(char *)(iVar3 + 0x10)) {
          return *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
        }
        return *(int *)(iVar3 + 0x20);
      }
      iVar2 = *(int *)(iVar3 + 0x14);
    } while (param_2 != *(char *)(*(int *)(iVar3 + 0x14) + 0x10));
    iStack_10 = FUN_0043651c(iVar3);
    iStack_10 = *(int *)(iVar3 + 0x20) - iStack_10;
  }
  return iStack_10;
}


/* ==== 004366c0 FUN_004366c0 ==== */

void FUN_004366c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar2 = FUN_00436618(param_1,'\x01');
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      return;
    }
    iVar2 = FUN_00436618(param_1,'\x02');
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = FUN_00436508(param_1);
  iVar3 = iVar2 / iVar3;
  iVar4 = FUN_0043651c(iVar1);
  *(int *)(iVar1 + 0x20) = iVar4 + iVar3;
  FUN_00436840(iVar1);
  for (iVar1 = *(int *)(iVar1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    *(int *)(iVar1 + 0x20) = *(int *)(*(int *)(iVar1 + 0x18) + 0x20) + iVar3;
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + iVar2 % iVar3;
    }
    FUN_00436840(iVar1);
  }
  return;
}


/* ==== 00436750 FUN_00436750 ==== */

void FUN_00436750(int param_1,int *param_2)

{
  int *piVar1;
  
  FUN_00403c5c(param_2);
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 8) == 0) {
      piVar1 = FUN_0040b694((int *)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab7f4);
      FUN_004036f4(piVar1);
    }
    FUN_00403cb0(param_2,*(undefined4 **)(*(int *)(param_1 + 4) + 8));
  }
  return;
}


/* ==== 00436794 FUN_00436794 ==== */

uint FUN_00436794(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  undefined1 local_5;
  
  local_c = (int *)0x0;
  uVar1 = *(uint *)(param_1 + 0x1c);
  puStack_1c = (undefined1 *)0x4367bb;
  uVar2 = FUN_00403178(*(int **)(uVar1 + 0x14),param_2,&local_c);
  local_5 = local_c != (int *)0x0;
  if ((bool)local_5) {
    *(int *)(uVar1 + 0x38) = param_1;
    puStack_20 = &LAB_00436805;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    uVar3 = 0;
    puStack_1c = &stack0xfffffffc;
    FUN_0042f2b8(local_c,*(int **)(uVar1 + 0x14),0,0);
    *in_FS_OFFSET = uVar3;
    *(undefined4 *)(uVar1 + 0x38) = 0;
    return uVar1;
  }
  return uVar2 & 0xffffff00;
}


/* ==== 00436818 FUN_00436818 ==== */

undefined4 FUN_00436818(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x14);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) != 0) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return 1;
}


/* ==== 00436840 FUN_00436840 ==== */

void FUN_00436840(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_18 [4];
  int local_8;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x8c) = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x10)
    ;
    local_8 = param_1;
    iVar1 = FUN_00436618(param_1,'\x02');
    iVar2 = FUN_00436618(local_8,'\x01');
    uVar3 = FUN_00436818();
    if ((char)uVar3 != '\0') {
      if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) == '\x01') {
        iVar1 = iVar1 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
      }
      else {
        iVar2 = iVar2 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
      }
    }
    if (((*(int *)(local_8 + 0xc) != 0) ||
        (((*(int *)(local_8 + 0x14) != *(int *)(*(int *)(local_8 + 0x1c) + 100) &&
          (*(char *)(*(int *)(local_8 + 0x14) + 0x10) ==
           *(char *)(*(int *)(*(int *)(local_8 + 0x1c) + 100) + 0x10))) &&
         (*(int *)(local_8 + 0x20) < *(int *)(*(int *)(local_8 + 0x1c) + 0x68))))) ||
       ((iVar4 = *(int *)(*(int *)(local_8 + 0x1c) + 100),
        *(char *)(*(int *)(local_8 + 0x14) + 0x10) != *(char *)(iVar4 + 0x10) &&
        (*(int *)(local_8 + 0x20) < *(int *)(iVar4 + 0x20))))) {
      if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) == '\x01') {
        iVar2 = iVar2 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
      }
      else {
        iVar1 = iVar1 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
      }
    }
    piVar6 = local_18;
    iVar4 = FUN_004365ac(local_8,'\x01');
    iVar5 = FUN_004365ac(local_8,'\x02');
    FUN_0040f804(iVar5,iVar4,iVar1,piVar6,iVar2);
    (**(code **)**(undefined4 **)(local_8 + 0x1c))
              (*(undefined4 **)(local_8 + 0x1c),*(undefined4 *)(local_8 + 4),local_18);
    FUN_0042e15c(*(int **)(local_8 + 4),local_18);
  }
  return;
}


/* ==== 00436990 TDockTree.virtual_024 ==== */

void TDockTree_virtual_024(int *param_1,char param_2,int param_3)

{
  undefined1 uVar1;
  int i_val;
  int *piVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x4369a5;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
  }
  puStack_30 = (undefined1 *)0x4369b8;
  FUN_00402f6c(param_1,'\0',param_3);
  param_1[3] = 4;
  param_1[5] = param_3;
  param_1[0x1c] = 0x40000;
  param_1[6] = 0xc;
  if ((*(char *)(param_3 + 0x4b) == '\x01') || (*(char *)(param_3 + 0x4b) == '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 7) = uVar1;
  puStack_30 = (undefined1 *)0x436a08;
  i_val = FUN_004364e4((int *)&LAB_0042b6a8,'\x01',(int)param_1);
  param_1[0x19] = i_val;
  puStack_30 = (undefined1 *)0x436a1a;
  piVar2 = FUN_00418838((int *)&PTR_TPersistent_virtual_000_00416cfc,'\x01',extraout_ECX_00);
  param_1[4] = (int)piVar2;
  puStack_30 = (undefined1 *)0x436a2e;
  uVar3 = FUN_0041fb50(0,0xffffff);
  puStack_30 = (undefined1 *)0x436a37;
  FUN_004189b8(piVar2,uVar3);
  puStack_30 = (undefined1 *)0x436a3f;
  FUN_00436b58((int)param_1);
  puStack_34 = &LAB_00436a9c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  i_val = FUN_004317bc(param_3);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar4 = 0;
      uVar3 = FUN_00431780(param_3,j);
      (**(code **)(*param_1 + 8))(param_1,uVar3,3,uVar4);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_004366c0(param_1[0x19]);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00436aa3;
  puStack_34 = (undefined1 *)0x436a9b;
  FUN_00436b5c((int)param_1);
  return;
}


/* ==== 00436af8 TDockTree.Destroy ==== */

void TDockTree_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar2 = FUN_004032fc(param_1,param_2);
  if (piVar2[0xc] != 0) {
    iVar1 = piVar2[5];
    *(int *)(iVar1 + 0x28) = piVar2[0xc];
    *(int *)(iVar1 + 0x2c) = piVar2[0xd];
  }
  FUN_00437b1c((int)piVar2,(int *)piVar2[0x19],extraout_ECX);
  FUN_00402f9c((int *)piVar2[4]);
  TObject_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar2);
  }
  return;
}


/* ==== 00436b44 TDockTree.virtual_000 ==== */

undefined4 TDockTree_virtual_000(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),
                   *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x4b)) + -1;
  bVar1 = (byte)iVar2;
  uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),bVar1 - 2);
  if (bVar1 < 2) {
    *param_3 = *param_3 + 0xc;
    return uVar3;
  }
  param_3[1] = param_3[1] + 0xc;
  return uVar3;
}


/* ==== 00436b58 FUN_00436b58 ==== */

void FUN_00436b58(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return;
}


/* ==== 00436b5c FUN_00436b5c ==== */

void FUN_00436b5c(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  if (*(int *)(param_1 + 0x6c) < 1) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_0043833c(param_1);
  }
  return;
}


/* ==== 00436b70 FUN_00436b70 ==== */

void FUN_00436b70(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_4 + -4) == *(int *)(param_1 + 4)) {
    *(int *)(param_4 + -8) = param_1;
    return;
  }
  if ((*(int *)(param_4 + -8) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = param_4;
    FUN_00436b70(*(int *)(param_1 + 0xc),param_2,param_3,param_4);
    param_3 = iVar1;
    param_2 = extraout_EDX;
  }
  if ((*(int *)(param_4 + -8) == 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_00436b70(*(int *)(param_1 + 8),param_2,param_3,param_4);
  }
  return;
}


/* ==== 00436bc8 FUN_00436bc8 ==== */

undefined4 FUN_00436bc8(int param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 100) != 0)) {
    FUN_00436b70(*(int *)(param_1 + 100),0,param_3,(int)&stack0xfffffffc);
  }
  return 0;
}


/* ==== 00436bf4 FUN_00436bf4 ==== */

void FUN_00436bf4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_ECX;
  int iVar1;
  
  (**(code **)(param_4 + 8))(*(undefined4 *)(param_4 + 0xc),param_1);
  iVar1 = extraout_ECX;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = param_4;
    FUN_00436bf4(*(int *)(param_1 + 0xc),param_4,extraout_ECX,param_4);
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00436bf4(*(int *)(param_1 + 8),param_4,iVar1,param_4);
  }
  return;
}


/* ==== 00436c30 FUN_00436c30 ==== */

void FUN_00436c30(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 100);
  }
  FUN_00436bf4(param_2,param_2,param_3,(int)&stack0xfffffffc);
  return;
}


/* ==== 00436c48 FUN_00436c48 ==== */

void FUN_00436c48(int param_1,int param_2,undefined4 *param_3)

{
  int i_val;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int local_1c [4];
  
  bVar5 = 0;
  piVar4 = local_1c;
  i_val = FUN_00436bc8(param_1,param_2,(int)param_3);
  if (i_val == 0) {
    FUN_00402c30(param_3,0x10,0);
  }
  else {
    iVar1 = FUN_00436618(i_val,'\x01');
    iVar2 = FUN_00436618(i_val,'\x02');
    iVar3 = FUN_004365ac(i_val,'\x01');
    i_val = FUN_004365ac(i_val,'\x02');
    FUN_0040f804(i_val,iVar3,iVar2,piVar4,iVar1);
    piVar4 = local_1c;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *param_3 = *piVar4;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      param_3 = param_3 + (uint)bVar5 * -2 + 1;
    }
  }
  return;
}


/* ==== 00436cbc TDockTree.virtual_004 ==== */

undefined4 TDockTree_virtual_004(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00437370(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}


/* ==== 00436ccc TDockTree.virtual_008 ==== */

void TDockTree_virtual_008(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  char cVar3;
  int i_val;
  int *piVar4;
  byte bVar5;
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_d;
  int local_c;
  byte local_5;
  
  bVar5 = 0;
  local_5 = (byte)param_3;
  if (*(char *)((int)param_2 + 0x47) != '\0') {
    i_val = param_1[0xe];
    if (i_val == 0) {
      if (*(int *)(param_1[0x19] + 8) == 0) {
        (**(code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],&local_24);
        (**(code **)(*(int *)param_1[5] + 0x84))((int *)param_1[5],&local_24);
        i_val = local_1c - local_24;
        local_14 = local_18 - local_20;
        if (*(char *)(param_1[5] + 0x4c) != '\0') {
          if (i_val == 0) {
            i_val = FUN_0042e6d8((int)param_2);
          }
          if (local_14 == 0) {
            local_14 = FUN_0042e6c4((int)param_2);
          }
        }
        FUN_0040f804(local_24,local_20,i_val,local_34,local_14);
        piVar2 = local_34;
        piVar4 = &local_24;
        for (i_val = 4; i_val != 0; i_val = i_val + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
        }
        (**(code **)*param_1)(param_1,param_2,&local_24);
        FUN_0042e15c(param_2,&local_24);
        iVar1 = FUN_004364e4((int *)&LAB_0042b6a8,'\x01',(int)param_1);
        i_val = param_1[0x19];
        *(int *)(i_val + 8) = iVar1;
        *(int *)(iVar1 + 0x14) = i_val;
        *(int **)(iVar1 + 4) = param_2;
      }
      else {
        if ((local_5 == 0) || (local_5 == 5)) {
          local_5 = 4;
        }
        piVar2 = (int *)FUN_00436bc8((int)param_1,(int)param_2,param_3);
        i_val = extraout_ECX;
        if (piVar2 != (int *)0x0) {
          FUN_00437bb4((int)param_1,piVar2);
          i_val = extraout_ECX_00;
        }
        local_c = FUN_00436bc8((int)param_1,param_4,i_val);
        local_d = *(char *)(local_5 + 0x4aa7fc);
        i_val = FUN_00436508(param_1[0x19]);
        if (i_val == 1) {
          i_val = param_1[0x19];
          *(char *)(i_val + 0x10) = local_d;
          if (local_d == '\x01') {
            i_val = FUN_00436618(*(int *)(i_val + 8),'\x02');
            *(int *)(param_1[0x19] + 0x20) = i_val;
            i_val = FUN_00436618(*(int *)(param_1[0x19] + 8),'\x01');
            param_1[0x1a] = i_val;
          }
          else if (local_d == '\x02') {
            i_val = FUN_00436618(*(int *)(i_val + 8),'\x01');
            *(int *)(param_1[0x19] + 0x20) = i_val;
            i_val = FUN_00436618(*(int *)(param_1[0x19] + 8),'\x02');
            param_1[0x1a] = i_val;
          }
        }
        i_val = FUN_004364e4((int *)&LAB_0042b6a8,'\x01',(int)param_1);
        *(int **)(i_val + 4) = param_2;
        if (local_c == 0) {
          cVar3 = *(char *)(param_1[0x19] + 0x10);
        }
        else {
          cVar3 = *(char *)(*(int *)(local_c + 0x14) + 0x10);
        }
        if (local_d == '\0') {
          local_d = cVar3;
        }
        if (cVar3 == local_d) {
          FUN_00437064((int)param_1,i_val,local_c,*(char *)(local_5 + 0x4aa804));
        }
        else {
          FUN_00436edc((int)param_1,i_val,local_c,*(char *)(local_5 + 0x4aa804),local_d);
        }
      }
    }
    else {
      *(int **)(i_val + 4) = param_2;
      FUN_00436840(i_val);
    }
    (**(code **)(*(int *)param_1[5] + 0x74))();
  }
  return;
}


/* ==== 00436edc FUN_00436edc ==== */

void FUN_00436edc(int param_1,int param_2,int param_3,char param_4,undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar4;
  undefined4 extraout_ECX_03;
  
  iVar2 = FUN_004364e4((int *)&LAB_0042b6a8,'\x01',param_1);
  *(undefined1 *)(iVar2 + 0x10) = param_5;
  if (param_3 == 0) {
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 100) + 0x20);
    *(undefined1 *)(param_1 + 0x48) = param_5;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x3fe00000;
    if (param_4 == '\0') {
      *(int *)(iVar2 + 8) = param_2;
      iVar3 = *(int *)(param_1 + 100);
      *(int *)(iVar3 + 0x14) = iVar2;
      *(int *)(iVar3 + 0x18) = param_2;
      *(int *)(param_2 + 0xc) = iVar3;
      *(int *)(param_2 + 0x14) = iVar2;
      *(int *)(param_1 + 100) = iVar2;
      FUN_00436c30(param_1,*(int *)(iVar2 + 8),extraout_ECX);
      uVar1 = *(uint *)(*(int *)(param_1 + 100) + 0x20);
      iVar3 = (int)uVar1 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
      }
      *(int *)(param_1 + 0x4c) = iVar3;
      FUN_00436c30(param_1,*(int *)(iVar2 + 8),extraout_ECX_01);
      uVar1 = *(uint *)(*(int *)(param_1 + 100) + 0x20);
      iVar3 = (int)uVar1 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
      }
      *(int *)(param_2 + 0x20) = iVar3;
      uVar4 = extraout_ECX_02;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 100);
      iVar3 = *(int *)(param_1 + 100);
      *(int *)(iVar3 + 0x14) = iVar2;
      *(int *)(iVar3 + 0xc) = param_2;
      *(int *)(param_2 + 0x18) = iVar3;
      *(int *)(param_2 + 0x14) = iVar2;
      *(int *)(param_1 + 100) = iVar2;
      FUN_00436c30(param_1,*(int *)(iVar2 + 8),extraout_ECX);
      uVar4 = extraout_ECX_00;
    }
    FUN_00436c30(param_1,0,uVar4);
  }
  else {
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    iVar3 = *(int *)(param_3 + 0x18);
    *(int *)(iVar2 + 0x18) = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xc) = iVar2;
    }
    iVar3 = *(int *)(param_3 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x18) = iVar2;
    }
    if (param_3 == *(int *)(*(int *)(iVar2 + 0x14) + 8)) {
      *(int *)(*(int *)(iVar2 + 0x14) + 8) = iVar2;
    }
    *(int *)(param_2 + 0x14) = iVar2;
    *(int *)(param_3 + 0x14) = iVar2;
    if (param_4 == '\0') {
      *(int *)(iVar2 + 8) = param_2;
      *(int *)(param_3 + 0x18) = param_2;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(int *)(param_2 + 0xc) = param_3;
    }
    else {
      *(int *)(iVar2 + 8) = param_3;
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(int *)(param_3 + 0xc) = param_2;
      *(int *)(param_2 + 0x18) = param_3;
    }
  }
  FUN_004366c0(iVar2);
  FUN_00436c30(param_1,0,extraout_ECX_03);
  return;
}


/* ==== 00437064 FUN_00437064 ==== */

void FUN_00437064(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  
  if ((param_3 == 0) &&
     (param_3 = *(int *)(*(int *)(param_1 + 100) + 8), iVar1 = param_3, param_4 != '\0')) {
    do {
      param_3 = iVar1;
      iVar1 = *(int *)(param_3 + 0xc);
    } while (*(int *)(param_3 + 0xc) != 0);
  }
  if (param_4 == '\0') {
    *(int *)(param_2 + 0xc) = param_3;
    iVar1 = *(int *)(param_3 + 0x18);
    *(int *)(param_2 + 0x18) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc) = param_2;
    }
    *(int *)(param_3 + 0x18) = param_2;
    iVar1 = *(int *)(param_3 + 0x14);
    *(int *)(param_2 + 0x14) = iVar1;
    if (param_3 == *(int *)(iVar1 + 8)) {
      *(int *)(iVar1 + 8) = param_2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    *(int *)(param_2 + 0x18) = param_3;
    iVar1 = *(int *)(param_3 + 0xc);
    *(int *)(param_2 + 0xc) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x18) = param_2;
    }
    *(int *)(param_3 + 0xc) = param_2;
  }
  FUN_004366c0(*(int *)(param_3 + 0x14));
  return;
}


/* ==== 004370d4 FUN_004370d4 ==== */

void FUN_004370d4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x10) == '\x01') {
    iVar1 = *(int *)(*(int *)(param_4 + -4) + 4);
    param_2 = *(int *)(param_1 + 0x20);
    if (iVar1 <= param_2) {
      iVar3 = *(int *)(param_4 + -8);
      param_2 = param_2 - *(int *)(iVar3 + 0xc);
      if (param_2 <= iVar1) {
        **(undefined4 **)(param_4 + -0xc) = 0x12;
        *(int *)(param_4 + -0x10) = param_1;
        goto LAB_0043729e;
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(char *)(iVar3 + 0x10) == '\x02') {
    param_2 = *(int *)(param_1 + 0x20);
    if (**(int **)(param_4 + -4) <= param_2) {
      iVar3 = *(int *)(param_4 + -8);
      param_2 = param_2 - *(int *)(iVar3 + 0xc);
      if (param_2 <= **(int **)(param_4 + -4)) {
        **(undefined4 **)(param_4 + -0xc) = 0x12;
        *(int *)(param_4 + -0x10) = param_1;
        goto LAB_0043729e;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_004365ac(param_1,'\x01');
    iVar2 = FUN_004365ac(param_1,'\x02');
    iVar3 = extraout_ECX;
    param_2 = extraout_EDX;
    if (*(char *)(*(int *)(param_4 + -8) + 0x1c) == '\0') {
      if (((iVar2 <= **(int **)(param_4 + -4)) &&
          (param_2 = *(int *)(param_4 + -8),
          **(int **)(param_4 + -4) <= iVar2 + *(int *)(param_2 + 0x18))) &&
         (iVar1 <= *(int *)(*(int *)(param_4 + -4) + 4))) {
        iVar2 = FUN_00436618(param_1,'\x01');
        iVar3 = extraout_ECX_01;
        param_2 = extraout_EDX_01;
        if (*(int *)(*(int *)(param_4 + -4) + 4) <= iVar1 + iVar2) {
          *(int *)(param_4 + -0x10) = param_1;
          param_2 = *(int *)(*(int *)(param_1 + 4) + 0x34) + 0xf;
          if (*(int *)(*(int *)(param_4 + -4) + 4) < param_2) {
            **(undefined4 **)(param_4 + -0xc) = 0x14;
          }
          else {
            **(undefined4 **)(param_4 + -0xc) = 2;
          }
        }
      }
    }
    else if (((iVar1 <= *(int *)(*(int *)(param_4 + -4) + 4)) &&
             (param_2 = *(int *)(param_4 + -8),
             *(int *)(*(int *)(param_4 + -4) + 4) <= iVar1 + *(int *)(param_2 + 0x18))) &&
            (iVar2 <= **(int **)(param_4 + -4))) {
      iVar1 = FUN_00436618(param_1,'\x02');
      iVar3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
      if (**(int **)(param_4 + -4) <= iVar2 + iVar1) {
        *(int *)(param_4 + -0x10) = param_1;
        param_2 = *(int *)(*(int *)(param_1 + 4) + 0x30) + *(int *)(*(int *)(param_1 + 4) + 0x38) +
                  -0xf;
        if (param_2 < **(int **)(param_4 + -4)) {
          **(undefined4 **)(param_4 + -0xc) = 0x14;
        }
        else {
          **(undefined4 **)(param_4 + -0xc) = 2;
        }
      }
    }
  }
LAB_0043729e:
  if ((*(int *)(param_4 + -0x10) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = param_4;
    FUN_004370d4(*(int *)(param_1 + 0xc),param_2,iVar3,param_4);
    iVar3 = iVar1;
    param_2 = extraout_EDX_02;
  }
  if ((*(int *)(param_4 + -0x10) == 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_004370d4(*(int *)(param_1 + 8),param_2,iVar3,param_4);
  }
  return;
}


/* ==== 004372dc FUN_004372dc ==== */

int * FUN_004372dc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  POINT pt;
  int i_val;
  int *piVar1;
  undefined4 uVar2;
  BOOL BVar3;
  LONG LVar4;
  LONG LVar5;
  RECT local_1c;
  LONG local_c;
  LONG local_8;
  
  i_val = FUN_004317bc(*(int *)(*(int *)(param_4 + -8) + 0x14));
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      piVar1 = (int *)FUN_00431780(*(int *)(*(int *)(param_4 + -8) + 0x14),i_val);
      if ((*(char *)((int)piVar1 + 0x47) != '\0') &&
         ((uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_virtual_000_0042ac0c),
          (char)uVar2 == '\0' || ((char)piVar1[0x5a] != '\0')))) {
        FUN_0040f7d0(*param_1 - piVar1[0xc],param_1[1] - piVar1[0xd],&local_c);
        LVar4 = local_c;
        LVar5 = local_8;
        (**(code **)(*piVar1 + 0x40))(piVar1,&local_1c);
        pt.y = LVar5;
        pt.x = LVar4;
        BVar3 = PtInRect(&local_1c,pt);
        if (BVar3 != 0) {
          return piVar1;
        }
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return (int *)0x0;
}


/* ==== 00437370 FUN_00437370 ==== */

int FUN_00437370(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 *puVar3;
  int local_14;
  
  puVar3 = &stack0xfffffffc;
  local_14 = 0;
  *param_3 = 0;
  piVar1 = FUN_004372dc(param_2,0,param_3,(int)&stack0xfffffffc);
  if ((piVar1 == (int *)0x0) || (*(int *)(param_1 + 0x14) != piVar1[0x24])) {
    if (*(int *)(*(int *)(param_1 + 100) + 8) != 0) {
      iVar2 = FUN_00436508(*(int *)(param_1 + 100));
      if ((0 < iVar2) && (piVar1 == (int *)0x0)) {
        FUN_004370d4(*(int *)(*(int *)(param_1 + 100) + 8),extraout_EDX,extraout_ECX,
                     (int)&stack0xfffffffc);
      }
    }
  }
  else {
    local_14 = FUN_00436bc8(param_1,(int)piVar1,(int)puVar3);
    if (local_14 != 0) {
      *param_3 = 1;
    }
  }
  return local_14;
}


/* ==== 004373fc FUN_004373fc ==== */

void FUN_004373fc(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint local_8;
  
  local_8 = param_3;
  FUN_00403c5c(param_1);
  (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),&local_8,4);
  if (0 < (int)local_8) {
    FUN_00404210(param_1,local_8);
    (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),*param_1,local_8);
  }
  return;
}


/* ==== 00437444 TDockTree.virtual_00c ==== */

void TDockTree_virtual_00c(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar5;
  uint extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar6;
  undefined4 extraout_EDX_03;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24;
  int i_val;
  int k;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_10 = 0;
  puStack_38 = &LAB_0043763c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_1;
  local_8 = param_2;
  FUN_00437b1c(param_1,*(int **)(param_1 + 100),0);
  FUN_00436b58(local_c);
  uVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb8;
  (**(code **)(*local_8 + 4))(local_8,&i_val,4);
  (**(code **)(*local_8 + 4))(local_8,&local_24,4);
  if (-1 < local_24 + -1) {
    i_val = 0;
    puVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    j = local_24;
    do {
      puVar1 = &stack0xfffffffc;
      FUN_004373fc(&local_10,uVar6,(uint)puVar5,(int)&stack0xfffffffc);
      puVar5 = puVar1;
      uVar6 = extraout_EDX_00;
      if (local_10 != 0) {
        FUN_00403178(*(int **)(local_c + 0x14),local_10,&local_14);
        puVar5 = extraout_ECX_00;
        uVar6 = extraout_EDX_01;
        if (local_14 != (int *)0x0) {
          TGroupBox_SetVisible(local_14,0,extraout_ECX_00);
          uVar7 = 0;
          FUN_0042f2b8(local_14,*(int **)(local_c + 0x14),0,0);
          puVar5 = extraout_ECX_01;
          uVar6 = extraout_EDX_02;
        }
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  (**(code **)(*local_8 + 4))(local_8,local_c + 0x68,4);
  k = 0;
  piVar4 = (int *)0x0;
LAB_00437521:
  do {
    (**(code **)(*local_8 + 4))(local_8,&local_18,4);
    if (local_18 == DAT_004aa80c) {
      *in_FS_OFFSET = uVar7;
      FUN_00436b5c(local_c);
      return;
    }
    piVar2 = (int *)FUN_004364e4((int *)&LAB_0042b6a8,'\x01',local_c);
    (**(code **)(*local_8 + 4))(local_8,piVar2 + 4,1);
    (**(code **)(*local_8 + 4))(local_8,piVar2 + 8,4);
    FUN_004373fc(&local_10,extraout_EDX_03,extraout_ECX_02,(int)&stack0xfffffffc);
    if (local_10 != 0) {
      uVar3 = FUN_00436794((int)piVar2,local_10);
      if ((char)uVar3 == '\0') {
        FUN_00402f9c(piVar2);
        goto LAB_00437521;
      }
    }
    if (local_18 == 0) {
      *(int **)(local_c + 100) = piVar2;
    }
    else if (local_18 == k) {
      piVar4[3] = (int)piVar2;
      piVar2[6] = (int)piVar4;
      piVar2[5] = piVar4[5];
    }
    else if (k < local_18) {
      piVar4[2] = (int)piVar2;
      piVar2[5] = (int)piVar4;
    }
    else if (local_18 < k) {
      k = k - local_18;
      if (0 < k) {
        i_val = 1;
        do {
          piVar4 = (int *)piVar4[5];
          i_val = i_val + 1;
          k = k + -1;
        } while (k != 0);
      }
      piVar4[3] = (int)piVar2;
      piVar2[6] = (int)piVar4;
      piVar2[5] = piVar4[5];
    }
    k = local_18;
    piVar4 = piVar2;
  } while( true );
}


/* ==== 0043764c FUN_0043764c ==== */

void FUN_0043764c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  HDC pHVar2;
  UINT UVar3;
  UINT UVar4;
  tagRECT local_14;
  tagRECT *rect;
  
  UVar4 = 0;
  UVar3 = 1;
  iVar1 = *(int *)(*(int *)(param_4 + -8) + 0x18);
  FUN_0040f7e8(param_1,param_2,iVar1 + param_1 + -2,&local_14.left,iVar1 + param_2 + -2);
  rect = &local_14;
  pHVar2 = (HDC)FUN_004194d8(*(int **)(param_4 + -4));
  DrawFrameControl(pHVar2,rect,UVar3,UVar4);
  return;
}


/* ==== 004376a4 FUN_004376a4 ==== */

void FUN_004376a4(int x_val,int y_val,int x_val_2,int y_val_2,int param_5)

{
  TPen_SetColor(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000014);
  FUN_00419154(*(int **)(param_5 + -4),x_val_2,y_val);
  FUN_004190f4(*(int **)(param_5 + -4),x_val,y_val);
  FUN_004190f4(*(int **)(param_5 + -4),x_val,y_val_2);
  TPen_SetColor(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000010);
  FUN_004190f4(*(int **)(param_5 + -4),x_val_2,y_val_2);
  FUN_004190f4(*(int **)(param_5 + -4),x_val_2,y_val + -1);
  return;
}


/* ==== 0043772c TDockTree.virtual_010 ==== */

void TDockTree_virtual_010(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if ((byte)(*(char *)(*(int *)(param_1 + 0x14) + 0x4b) - 1U) < 2) {
    FUN_0043764c(*param_4 + 1,param_4[1] + 1,param_3,(int)&stack0xfffffffc);
    FUN_004376a4(*param_4 + 3,param_4[1] + *(int *)(param_1 + 0x18) + 1,*param_4 + 5,param_4[3] + -2
                 ,(int)&stack0xfffffffc);
    FUN_004376a4(*param_4 + 6,param_4[1] + *(int *)(param_1 + 0x18) + 1,*param_4 + 8,param_4[3] + -2
                 ,(int)&stack0xfffffffc);
  }
  else {
    FUN_0043764c((param_4[2] - *(int *)(param_1 + 0x18)) + 1,param_4[1] + 1,param_3,
                 (int)&stack0xfffffffc);
    FUN_004376a4(*param_4 + 2,param_4[1] + 3,(param_4[2] - *(int *)(param_1 + 0x18)) + -2,
                 param_4[1] + 5,(int)&stack0xfffffffc);
    FUN_004376a4(*param_4 + 2,param_4[1] + 6,(param_4[2] - *(int *)(param_1 + 0x18)) + -2,
                 param_4[1] + 8,(int)&stack0xfffffffc);
  }
  return;
}


/* ==== 00437808 TDockTree.virtual_028 ==== */

void TDockTree_virtual_028(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
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
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int i_val;
  int j;
  int *local_8;
  
  puStack_30 = (undefined1 *)0x437821;
  local_8 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',param_3);
  puStack_34 = &LAB_0043795e;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x43783d;
  puStack_30 = &stack0xfffffffc;
  FUN_0042d4c8(local_8,param_1[5]);
  puStack_3c = (undefined1 *)0x437845;
  FUN_0041912c((int)local_8);
  puStack_40 = &LAB_00437941;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x43785d;
  puStack_3c = &stack0xfffffffc;
  FUN_00419558(local_8,param_2);
  puStack_4c = &LAB_00437924;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  iVar1 = FUN_004317bc(param_1[5]);
  if (-1 < iVar1 + -1) {
    j = 0;
    i_val = iVar1;
    do {
      iVar1 = FUN_00431780(param_1[5],j);
      if ((*(char *)(iVar1 + 0x47) != '\0') && (*(int *)(iVar1 + 0x90) == param_1[5])) {
        FUN_0042e13c(iVar1,&local_20);
        (**(code **)*param_1)(param_1,iVar1,&local_20);
        local_20 = *(int *)(iVar1 + 0x30) * 2 - local_20;
        local_1c = *(int *)(iVar1 + 0x34) * 2 - local_1c;
        local_18 = *(int *)(iVar1 + 0x38) * -2 + local_18 * 3 + local_20 * -2;
        local_14 = *(int *)(iVar1 + 0x3c) * -2 + local_14 * 3 + local_1c * -2;
        (**(code **)(*param_1 + 0x10))(param_1,local_8,iVar1,&local_20);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_0043792b;
  puStack_4c = (undefined1 *)0x437923;
  FUN_00419558(local_8,0);
  return;
}


/* ==== 0043796c TDockTree.virtual_014 ==== */

void TDockTree_virtual_014(int param_1,undefined4 param_2,int param_3,LPPOINT points,char param_5)

{
  uint uVar1;
  int i_val;
  undefined4 uVar2;
  undefined4 uVar3;
  HWND hWndFrom;
  int j;
  int *piVar4;
  uint uVar5;
  LPPOINT ptVar6;
  byte bVar7;
  HWND hWndTo;
  UINT cPoints;
  int local_20 [4];
  int local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  i_val = FUN_00433334(*(int *)(param_1 + 0x14));
  if (((param_3 == 0) || (*(char *)(param_3 + 0x8c) == '\0')) || (i_val < 2)) {
    uVar2 = TForm_GetClientHeight(*(int **)(param_1 + 0x14));
    piVar4 = local_20;
    uVar3 = TForm_GetClientWidth(*(int **)(param_1 + 0x14));
    FUN_0040f7e8(0,0,uVar3,piVar4,uVar2);
    piVar4 = local_20;
    ptVar6 = points;
    for (j = 4; j != 0; j = j + -1) {
      ptVar6->x = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      ptVar6 = (LPPOINT)&ptVar6[-(uint)bVar7].y;
    }
    if (0 < i_val) {
      if (param_5 == '\x01') {
        i_val = points[1].y >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((points[1].y & 1U) != 0);
        }
        points[1].y = i_val;
      }
      else if (param_5 == '\x02') {
        i_val = points[1].y >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((points[1].y & 1U) != 0);
        }
        points->y = i_val;
      }
      else if (param_5 == '\x03') {
        i_val = points[1].x >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((points[1].x & 1U) != 0);
        }
        points[1].x = i_val;
      }
      else if (param_5 == '\x04') {
        i_val = points[1].x >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((points[1].x & 1U) != 0);
        }
        points->x = i_val;
      }
    }
  }
  else {
    local_8 = *(int *)(param_3 + 0x30);
    local_c = *(int *)(param_3 + 0x34);
    uVar5 = *(uint *)(param_3 + 0x38);
    local_10 = *(int *)(param_3 + 0x3c);
    if ((byte)(param_5 - 3U) < 2) {
      uVar1 = uVar5 & 1;
      uVar5 = (int)uVar5 >> 1;
      if ((int)uVar5 < 0) {
        uVar5 = uVar5 + (uVar1 != 0);
      }
    }
    else if ((byte)(param_5 - 1U) < 2) {
      local_10 = (int)*(uint *)(param_3 + 0x3c) >> 1;
      if (local_10 < 0) {
        local_10 = local_10 + (uint)((*(uint *)(param_3 + 0x3c) & 1) != 0);
      }
    }
    if (param_5 == '\x02') {
      local_c = local_c + local_10;
    }
    else if (param_5 == '\x04') {
      local_8 = local_8 + uVar5;
    }
    FUN_0040f804(local_8,local_c,uVar5,local_20,local_10);
    piVar4 = local_20;
    ptVar6 = points;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      ptVar6->x = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      ptVar6 = (LPPOINT)&ptVar6[-(uint)bVar7].y;
    }
  }
  cPoints = 2;
  hWndTo = (HWND)0x0;
  hWndFrom = (HWND)FUN_004349e0(*(int **)(param_1 + 0x14));
  MapWindowPoints(hWndFrom,hWndTo,points,cPoints);
  return;
}


/* ==== 00437ae8 FUN_00437ae8 ==== */

void FUN_00437ae8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((int *)param_1[3] != (int *)0x0) {
    uVar1 = param_4;
    FUN_00437ae8((int *)param_1[3],param_4,param_3,param_4);
    param_3 = uVar1;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_00437ae8((int *)param_1[2],param_4,param_3,param_4);
  }
  FUN_00402f9c(param_1);
  return;
}


/* ==== 00437b1c FUN_00437b1c ==== */

void FUN_00437b1c(int param_1,int *param_2,undefined4 param_3)

{
  if (param_2 != (int *)0x0) {
    if ((int *)param_2[2] != (int *)0x0) {
      FUN_00437ae8((int *)param_2[2],param_2,param_3,&stack0xfffffffc);
    }
    if (param_2[6] == 0) {
      if (param_2[5] != 0) {
        *(int *)(param_2[5] + 8) = param_2[3];
      }
    }
    else {
      *(int *)(param_2[6] + 0xc) = param_2[3];
    }
    if (param_2[3] != 0) {
      *(int *)(param_2[3] + 0x18) = param_2[6];
    }
    if (param_2 == *(int **)(param_1 + 100)) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    FUN_00402f9c(param_2);
  }
  return;
}


/* ==== 00437b78 TDockTree.virtual_018 ==== */

void TDockTree_virtual_018(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00436bc8(param_1,param_2,param_3);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == *(int **)(param_1 + 0x38)) {
      piVar1[1] = 0;
    }
    else {
      FUN_00437bb4(param_1,piVar1);
    }
    *(undefined1 *)(param_2 + 0x8c) = 0;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
  }
  return;
}


/* ==== 00437bb4 FUN_00437bb4 ==== */

void FUN_00437bb4(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_28 = &LAB_00437e0a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (param_2 == (int *)0x0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab76c,(int *)&local_8);
    FUN_00405808((undefined4 *)PTR_PTR_004ab65c,(int *)&local_c);
    FUN_00403ee4((int *)&local_8,local_c);
    piVar2 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_8);
    FUN_004036f4(piVar2);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  if (param_2[1] == 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab76c,(int *)&local_10);
    FUN_00405808((undefined4 *)PTR_PTR_004ab910,(int *)&local_14);
    FUN_00403ee4((int *)&local_10,local_14);
    piVar2 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_10);
    FUN_004036f4(piVar2);
  }
  iVar3 = FUN_00436508(param_2[5]);
  if (iVar3 == 1) {
    iVar3 = *(int *)(param_1 + 100);
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined1 *)(iVar3 + 0x10) = 0;
  }
  else if (iVar3 == 2) {
    piVar2 = (int *)param_2[6];
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)param_2[3];
    }
    if (piVar2[1] == 0) {
      if (param_2[5] == *(int *)(param_1 + 100)) {
        piVar2[8] = *(int *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 100) + 0x20);
        FUN_00402f9c(*(int **)(param_1 + 100));
        *(int **)(param_1 + 100) = piVar2;
        piVar2[3] = 0;
        piVar2[6] = 0;
        piVar2[5] = 0;
        FUN_0043833c(param_1);
      }
      else {
        iVar3 = *(int *)(param_2[5] + 0x18);
        *(int *)(piVar2[2] + 0x18) = iVar3;
        if (iVar3 == 0) {
          *(int *)(*(int *)(param_2[5] + 0x14) + 8) = piVar2[2];
        }
        else {
          *(int *)(iVar3 + 0xc) = piVar2[2];
        }
        iVar3 = piVar2[2];
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_2[5] + 0x14);
        do {
          iVar3 = *(int *)(iVar3 + 0xc);
          *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_2[5] + 0x14);
        } while (*(int *)(iVar3 + 0xc) != 0);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_2[5] + 0xc);
        if (*(int *)(iVar3 + 0xc) != 0) {
          *(int *)(*(int *)(iVar3 + 0xc) + 0x18) = iVar3;
        }
        FUN_00436c30(param_1,*(int *)(iVar3 + 0x14),extraout_ECX);
        FUN_00402f9c((int *)param_2[5]);
        FUN_00402f9c(piVar2);
      }
    }
    else {
      iVar3 = param_2[5];
      if (*(int *)(param_1 + 100) == iVar3) {
        *(int **)(*(int *)(param_1 + 100) + 8) = piVar2;
        piVar2[6] = 0;
        piVar2[3] = 0;
        iVar3 = FUN_00436564(*(int *)(param_1 + 100));
        piVar2[8] = iVar3;
        FUN_00436840((int)piVar2);
        uVar4 = extraout_ECX_00;
      }
      else {
        *(undefined1 *)(iVar3 + 0x10) = 0;
        *(int *)(iVar3 + 4) = piVar2[1];
        *(undefined4 *)(iVar3 + 8) = 0;
        FUN_00402f9c(piVar2);
        uVar4 = extraout_ECX_01;
      }
      FUN_00436c30(param_1,param_2[5],uVar4);
    }
  }
  else {
    iVar3 = param_2[6];
    if (iVar3 == 0) {
      *(int *)(param_2[5] + 8) = param_2[3];
      iVar3 = param_2[3];
      *(undefined4 *)(iVar3 + 0x18) = 0;
      FUN_00436840(iVar3);
      uVar4 = extraout_ECX_02;
    }
    else {
      *(int *)(iVar3 + 0xc) = param_2[3];
      if (param_2[3] != 0) {
        *(int *)(param_2[3] + 0x18) = iVar3;
      }
      iVar3 = param_2[6];
      *(int *)(iVar3 + 0x20) = param_2[8];
      FUN_00436840(iVar3);
      uVar4 = extraout_ECX_03;
    }
    FUN_00436c30(param_1,param_2[5],uVar4);
  }
  FUN_00402f9c(param_2);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00437e11;
  puStack_28 = (undefined1 *)0x437e09;
  FUN_00403c80((int *)&local_14,4);
  return;
}


/* ==== 0043a4bc FUN_0043a4bc ==== */

void FUN_0043a4bc(int param_1,HIMAGELIST himl_val)

{
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  local_c = *(int *)(param_1 + 0x24);
  ImageList_GetIconSize(himl_val,&local_8,&local_c);
  *(int *)(param_1 + 0x28) = local_8;
  *(int *)(param_1 + 0x24) = local_c;
  FUN_0043a3f8(param_1);
  return;
}


/* ==== 0043a4f4 TImageList.SetWidth ==== */

void TImageList_SetWidth(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 != param_1[10]) {
    param_1[10] = param_2;
    bVar1 = FUN_0043a3e4((int)param_1);
    if (bVar1) {
      ImageList_SetIconSize((HIMAGELIST)param_1[0xc],param_1[10],param_1[9]);
    }
    FUN_0043abf4(param_1);
    FUN_0043a3f8((int)param_1);
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 0043a538 TImageList.SetHeight ==== */

void TImageList_SetHeight(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 != param_1[9]) {
    param_1[9] = param_2;
    bVar1 = FUN_0043a3e4((int)param_1);
    if (bVar1) {
      ImageList_SetIconSize((HIMAGELIST)param_1[0xc],param_1[10],param_1[9]);
    }
    FUN_0043abf4(param_1);
    FUN_0043a3f8((int)param_1);
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 0043a57c FUN_0043a57c ==== */

void FUN_0043a57c(int *param_1,HIMAGELIST himl_val)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_0043a61c(param_1);
  if (himl_val != (HIMAGELIST)0x0) {
    FUN_0043a4bc((int)param_1,himl_val);
    param_1[0xc] = (int)himl_val;
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 0043a5a8 FUN_0043a5a8 ==== */

int FUN_0043a5a8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    return param_2;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
  return iVar1;
}


/* ==== 0043a5b8 FUN_0043a5b8 ==== */

undefined4 FUN_0043a5b8(int param_1)

{
  FUN_0043a3ec(param_1);
  return *(undefined4 *)(param_1 + 0x30);
}


/* ==== 0043a5c8 FUN_0043a5c8 ==== */

void FUN_0043a5c8(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  FUN_0043b1ac(param_1,param_2);
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
  }
  else {
    uVar1 = FUN_0041df80((int)param_2);
    if ((char)uVar1 == '\x01') {
      (**(code **)(*param_2 + 0x60))();
    }
    else {
      (**(code **)(*param_3 + 8))(param_3,param_2);
      (**(code **)(*param_3 + 0x68))(param_3,1);
      (**(code **)(*param_3 + 0x60))();
    }
  }
  return;
}


/* ==== 0043a61c FUN_0043a61c ==== */

void FUN_0043a61c(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  bVar1 = FUN_0043a3e4((int)param_1);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if ((bVar1) && (*(char *)((int)param_1 + 0x36) == '\0')) {
    himl = (HIMAGELIST)FUN_0043a5b8((int)param_1);
    ImageList_Destroy(himl);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  param_1[0xc] = 0;
  FUN_00403178(param_1,uVar3,uVar2);
  return;
}


/* ==== 0043a650 FUN_0043a650 ==== */

void FUN_0043a650(int param_1)

{
  HIMAGELIST p_Var1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  HDC hdc;
  undefined1 *color;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  color = &LAB_0043a6df;
  hdc = (HDC)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffe0;
  p_Var1 = ImageList_Create(*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x24),
                            *(uint *)(&DAT_004aa824 + (uint)*(byte *)(param_1 + 0x35) * 4) | 0xfe,
                            *(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x2c));
  *(HIMAGELIST *)(param_1 + 0x30) = p_Var1;
  if (p_Var1 == (HIMAGELIST)0x0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab8c4,(int *)&local_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_8);
    FUN_004036f4(piVar2);
  }
  if (*(int *)(param_1 + 0x38) != 0x1fffffff) {
    TImageList_SetBkColor(hdc,(COLORREF)color);
  }
  *in_FS_OFFSET = hdc;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0043a6ec FUN_0043a6ec ==== */

void FUN_0043a6ec(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x43a707;
  piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
  puStack_24 = &LAB_0043a79b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x43a724;
  puStack_20 = &stack0xfffffffc;
  piVar2 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX);
  puStack_30 = &LAB_0043a77e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0043a3ec(param_1);
  hbmMask = (HBITMAP)FUN_0043a5c8(param_1,param_3,piVar2);
  hbmImage = (HBITMAP)FUN_0043a5c8(param_1,param_2,piVar1);
  ImageList_Add(*(HIMAGELIST *)(param_1 + 0x30),hbmImage,hbmMask);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0043a785;
  puStack_30 = (undefined1 *)0x43a77d;
  FUN_00402f9c(piVar2);
  return;
}


/* ==== 0043a7b8 FUN_0043a7b8 ==== */

void FUN_0043a7b8(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  HBITMAP pHVar4;
  HBITMAP pHVar5;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x43a7d3;
  piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
  puStack_24 = &LAB_0043a8b7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((*(char *)(param_1 + 0x35) != '\0') && (param_3 != -1)) {
    puStack_20 = &stack0xfffffffc;
    piVar2 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX);
    uVar6 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    (**(code **)(*piVar2 + 8))(piVar2,param_2);
    FUN_0041ee30(piVar2,param_3);
    FUN_0043a3ec(param_1);
    iVar3 = (**(code **)(*piVar2 + 100))();
    pHVar4 = (HBITMAP)FUN_0043a5a8(param_1,iVar3);
    pHVar5 = (HBITMAP)FUN_0043a5c8(param_1,param_2,piVar1);
    ImageList_Add(*(HIMAGELIST *)(param_1 + 0x30),pHVar5,pHVar4);
    *in_FS_OFFSET = uVar6;
    FUN_00402f9c(piVar2);
    return;
  }
  pHVar5 = (HBITMAP)0x0;
  puStack_20 = &stack0xfffffffc;
  pHVar4 = (HBITMAP)FUN_0043a5c8(param_1,param_2,piVar1);
  himl = (HIMAGELIST)FUN_0043a5b8(param_1);
  ImageList_Add(himl,pHVar4,pHVar5);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043a8be;
  puStack_24 = (undefined1 *)0x43a8b6;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 0043a8d4 FUN_0043a8d4 ==== */

void FUN_0043a8d4(int *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  if (param_3 != (int *)0x0) {
    bVar1 = FUN_0043a3e4((int)param_1);
    if (bVar1) {
      (**(code **)(*param_3 + 0x34))(param_3,param_1[9]);
      (**(code **)(*param_3 + 0x40))(param_3,param_1[10]);
      uVar4 = 0;
      uVar3 = 1;
      iVar2 = FUN_0041df1c(param_3);
      FUN_0043ae38(param_1,iVar2,0,uVar3,param_2,uVar4);
    }
  }
  return;
}


/* ==== 0043a91c FUN_0043a91c ==== */

int FUN_0043a91c(int param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  int image_list_get_image_count;
  
  bVar1 = FUN_0043a3e4(param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_0043a5b8(param_1);
    image_list_get_image_count = ImageList_GetImageCount(himl);
    return image_list_get_image_count;
  }
  return 0;
}


/* ==== 0043a940 FUN_0043a940 ==== */

void FUN_0043a940(int *param_1,int i_val,int *param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  HDC pHVar3;
  HIMAGELIST p_Var4;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  BOOL BVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  UINT UVar8;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  int i_val_2;
  int x_val;
  int y_val;
  
  puStack_28 = &stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  puStack_2c = &LAB_0043ab57;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x43a96d;
  local_8 = param_1;
  bVar1 = FUN_0043a3e4((int)param_1);
  uVar6 = extraout_ECX;
  uVar7 = extraout_EDX;
  if (bVar1) {
    puStack_34 = (undefined1 *)0x43a97f;
    FUN_0043b1ac((int)local_8,param_3);
    puStack_34 = (undefined1 *)0x43a98c;
    local_c = FUN_0043a7b8((int)local_8,param_3,param_4);
    if (local_c != -1) {
      puStack_38 = &LAB_0043ab08;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_40 = (undefined1 *)0x43a9b3;
      puStack_34 = &stack0xfffffffc;
      local_10 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',
                                     extraout_ECX_00);
      puStack_44 = &LAB_0043aae8;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_48;
      puStack_4c = (undefined1 *)0x43a9d2;
      puStack_40 = &stack0xfffffffc;
      (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
      puStack_4c = (undefined1 *)0x43a9e0;
      (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
      puStack_4c = (undefined1 *)0x43a9ec;
      local_14 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',
                                     extraout_ECX_01);
      puStack_50 = &LAB_0043aacb;
      uStack_54 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_54;
      puStack_4c = &stack0xfffffffc;
      FUN_0041ecdc(local_14,1);
      (**(code **)(*local_14 + 0x34))(local_14,local_8[9]);
      (**(code **)(*local_14 + 0x40))(local_14,local_8[10]);
      UVar8 = 0;
      y_val = 0;
      x_val = 0;
      piVar2 = (int *)FUN_0041df1c(local_10);
      pHVar3 = (HDC)FUN_004194d8(piVar2);
      i_val_2 = local_c;
      p_Var4 = (HIMAGELIST)FUN_0043a5b8((int)local_8);
      ImageList_Draw(p_Var4,i_val_2,pHVar3,x_val,y_val,UVar8);
      UVar8 = 0x10;
      y_val = 0;
      x_val = 0;
      piVar2 = (int *)FUN_0041df1c(local_14);
      pHVar3 = (HDC)FUN_004194d8(piVar2);
      i_val_2 = local_c;
      p_Var4 = (HIMAGELIST)FUN_0043a5b8((int)local_8);
      ImageList_Draw(p_Var4,i_val_2,pHVar3,x_val,y_val,UVar8);
      hbmMask = (HBITMAP)(**(code **)(*local_14 + 0x60))();
      hbmImage = (HBITMAP)(**(code **)(*local_10 + 0x60))();
      p_Var4 = (HIMAGELIST)FUN_0043a5b8((int)local_8);
      BVar5 = ImageList_Replace(p_Var4,i_val,hbmImage,hbmMask);
      if (BVar5 == 0) {
        FUN_00405808((undefined4 *)PTR_PTR_004ab6b4,(int *)&local_18);
        piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_18);
        FUN_004036f4(piVar2);
      }
      *in_FS_OFFSET = uStack_54;
      puStack_4c = &LAB_0043aad2;
      puStack_50 = (undefined1 *)0x43aaca;
      FUN_00402f9c(local_14);
      return;
    }
    puStack_34 = (undefined1 *)0x43ab1c;
    FUN_00405808((undefined4 *)PTR_PTR_004ab6b4,(int *)&local_1c);
    puStack_34 = (undefined1 *)0x43ab2b;
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_1c);
    puStack_34 = (undefined1 *)0x43ab30;
    FUN_004036f4(piVar2);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_00;
  }
  puStack_34 = (undefined1 *)0x43ab3c;
  FUN_00403178(local_8,uVar7,uVar6);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0043ab5e;
  puStack_2c = (undefined1 *)0x43ab56;
  FUN_00403c80((int *)&local_1c,2);
  return;
}


/* ==== 0043ab68 FUN_0043ab68 ==== */

void FUN_0043ab68(int *param_1,int i_val)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0043abe7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_0043a91c((int)param_1);
  if (iVar2 <= i_val) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab718,(int *)&local_8);
    piVar3 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_8);
    FUN_004036f4(piVar3);
  }
  bVar1 = FUN_0043a3e4((int)param_1);
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (bVar1) {
    himl = (HIMAGELIST)FUN_0043a5b8((int)param_1);
    ImageList_Remove(himl,i_val);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  FUN_00403178(param_1,uVar5,uVar4);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043abee;
  puStack_18 = (undefined1 *)0x43abe6;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0043abf4 FUN_0043abf4 ==== */

void FUN_0043abf4(int *param_1)

{
  FUN_0043ab68(param_1,-1);
  return;
}


/* ==== 0043ac00 TImageList.SetBkColor ==== */

COLORREF __stdcall TImageList_SetBkColor(HDC hdc,COLORREF color)

{
  bool bVar1;
  int *in_EAX;
  COLORREF CVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  
  bVar1 = FUN_0043a3e4((int)in_EAX);
  if (bVar1) {
    CVar2 = FUN_0043a1e0(in_EDX);
    ImageList_SetBkColor((HIMAGELIST)in_EAX[0xc],CVar2);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  else {
    in_EAX[0xe] = in_EDX;
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
  }
  CVar2 = FUN_00403178(in_EAX,uVar4,uVar3);
  return CVar2;
}


/* ==== 0043ac38 TImageList.GetBkColor ==== */

COLORREF __stdcall TImageList_GetBkColor(HDC hdc)

{
  bool bVar1;
  int in_EAX;
  HIMAGELIST himl;
  COLORREF CVar2;
  
  bVar1 = FUN_0043a3e4(in_EAX);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_0043a5b8(in_EAX);
    CVar2 = ImageList_GetBkColor(himl);
    CVar2 = FUN_0043a200(CVar2);
    return CVar2;
  }
  return *(COLORREF *)(in_EAX + 0x38);
}


/* ==== 0043b1ac FUN_0043b1ac ==== */

void FUN_0043b1ac(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0043b218;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (*(int *)(param_1 + 0x24) <= iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x2c))();
      if (*(int *)(param_1 + 0x28) <= iVar1) goto LAB_0043b202;
    }
    FUN_00405808((undefined4 *)PTR_PTR_004ab708,(int *)&local_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_8);
    FUN_004036f4(piVar2);
  }
LAB_0043b202:
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043b21f;
  puStack_18 = (undefined1 *)0x43b217;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0043b224 TImageList.SetDrawingStyle ==== */

void TImageList_SetDrawingStyle(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[0xd]) {
    *(char *)(param_1 + 0xd) = (char)param_2;
    FUN_00403178(param_1,param_2,param_3);
  }
  return;
}


