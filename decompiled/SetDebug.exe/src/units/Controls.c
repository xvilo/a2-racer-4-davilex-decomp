/* SetDebug.exe — units/Controls.pas: 495 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00421940 FUN_00421940 ==== */

void FUN_00421940(char *param_1)

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


/* ==== 00421954 FUN_00421954 ==== */

undefined4 FUN_00421954(void)

{
  HANDLE pvVar1;
  uint window_long;
  LONG LVar2;
  undefined4 uVar3;
  HWND in_stack_00000004;
  
  *(HWND *)((int)DAT_00446624 + 0x14c) = in_stack_00000004;
  SetWindowLongA(in_stack_00000004,-4,*(LONG *)((int)DAT_00446624 + 0x15c));
  window_long = GetWindowLongA(in_stack_00000004,-0x10);
  if ((window_long & 0x40000000) != 0) {
    LVar2 = GetWindowLongA(in_stack_00000004,-0xc);
    if (LVar2 == 0) {
      SetWindowLongA(in_stack_00000004,-0xc,(LONG)in_stack_00000004);
    }
  }
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_0044774a,DAT_00446624);
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_00447748,DAT_00446624);
  pvVar1 = DAT_00446624;
  DAT_00446624 = (HANDLE)0x0;
  uVar3 = (**(code **)((int)pvVar1 + 0x15c))();
  return uVar3;
}


/* ==== 00421a0c FUN_00421a0c ==== */

HANDLE FUN_00421a0c(HWND wnd)

{
  HANDLE prop;
  
  prop = (HANDLE)0x0;
  if (wnd != (HWND)0x0) {
    prop = GetPropA(wnd,(LPCSTR)(uint)DAT_0044774a);
  }
  return prop;
}


/* ==== 00421a28 FUN_00421a28 ==== */

LRESULT FUN_00421a28(UINT msg,WPARAM param,LPARAM param_3)

{
  LRESULT LVar1;
  
  if (*(HWND *)(*(int *)PTR_DAT_00446c80 + 0x24) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(*(int *)PTR_DAT_00446c80 + 0x24),msg,param,param_3);
    return LVar1;
  }
  return 0;
}


/* ==== 00421c0c FUN_00421c0c ==== */

void FUN_00421c0c(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040b3e8(&DAT_00421c4c,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403a0c(param_2,param_1);
  }
  else {
    FUN_00403e40((int)param_1,1,(uint)(pCVar1 + -1),param_2);
  }
  return;
}


/* ==== 00421c50 FUN_00421c50 ==== */

void FUN_00421c50(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040b3e8(&DAT_00421c90,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403a0c(param_2,param_1);
  }
  else {
    FUN_00403e40((int)param_1,(int)(pCVar1 + 1),0x7fffffff,param_2);
  }
  return;
}


/* ==== 00421c94 FUN_00421c94 ==== */

HANDLE FUN_00421c94(void)

{
  HWND wnd;
  HANDLE pvVar1;
  
  wnd = GetCapture();
  pvVar1 = FUN_00421a0c(wnd);
  if (((pvVar1 != (HANDLE)0x0) && (DAT_004466e4 != (HANDLE)0x0)) &&
     (pvVar1 == *(HANDLE *)((int)DAT_004466e4 + 0x24))) {
    pvVar1 = DAT_004466e4;
  }
  return pvVar1;
}


/* ==== 00421cbc FUN_00421cbc ==== */

void FUN_00421cbc(int *param_1)

{
  undefined4 uVar1;
  HWND hWnd;
  int *piVar2;
  
  ReleaseCapture();
  DAT_004466e4 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_virtual_000_00420fa8);
    piVar2 = param_1;
    if ((char)uVar1 == '\0') {
      if (param_1[9] == 0) {
        return;
      }
      piVar2 = (int *)param_1[9];
      DAT_004466e4 = param_1;
    }
    hWnd = (HWND)FUN_0042a8b4(piVar2);
    SetCapture(hWnd);
  }
  return;
}


/* ==== 00421d68 FUN_00421d68 ==== */

undefined1 FUN_00421d68(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  while( true ) {
    if ((int)param_1[2] <= *param_3) {
      return 0;
    }
    iVar1 = FUN_0040f024(param_1,*param_3);
    if (param_2 == *(int *)(iVar1 + 4)) break;
    *param_3 = *param_3 + 1;
  }
  return 1;
}


/* ==== 00421d9c FUN_00421d9c ==== */

HWND FUN_00421d9c(void)

{
  HWND hWnd;
  HWND pHVar1;
  HWND pHVar2;
  int in_stack_00000004;
  
  pHVar2 = (HWND)FUN_0042a8b4(*(int **)(in_stack_00000004 + -4));
  pHVar1 = pHVar2;
  while (hWnd = pHVar2, hWnd != (HWND)0x0) {
    pHVar2 = GetParent(hWnd);
    pHVar1 = hWnd;
  }
  return pHVar1;
}


/* ==== 00421dc4 FUN_00421dc4 ==== */

void FUN_00421dc4(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  int local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_004026b8(8);
  *puVar2 = local_8;
  pHVar3 = FUN_00421d9c();
  puVar2[1] = pHVar3;
  cVar1 = FUN_00421d68(param_1,(int)pHVar3,&local_c);
  if (cVar1 == '\0') {
    FUN_0040eec8(param_1,(int)puVar2);
  }
  else {
    FUN_0040f0a0(param_1,local_c,(int)puVar2);
  }
  return;
}


/* ==== 00421e20 TSiteList.virtual_008 ==== */

void TSiteList_virtual_008(int *param_1)

{
  int iVar1;
  int i_val;
  int j;
  
  i_val = param_1[2];
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_0040f024(param_1,j);
      FUN_004026d0(iVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  TList_virtual_008(param_1);
  return;
}


/* ==== 00421e54 FUN_00421e54 ==== */

int FUN_00421e54(undefined4 *param_1,undefined4 param_2,int param_3)

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
      piVar2 = (int *)FUN_0040f024(param_1,0);
      iVar4 = *piVar2;
    }
    else {
      pHVar3 = GetDesktopWindow();
      pHVar3 = GetTopWindow(pHVar3);
      while ((iVar4 == 0 && (pHVar3 != (HWND)0x0))) {
        cVar1 = FUN_00421d68(param_1,(int)pHVar3,&local_10);
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


/* ==== 00421eb8 TDragObject.virtual_00c ==== */

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


/* ==== 00421ef8 FUN_00421ef8 ==== */

HWND FUN_00421ef8(void)

{
  HWND hWnd;
  
  hWnd = FUN_00439c8c();
  SetCapture(hWnd);
  return hWnd;
}


/* ==== 00421f10 TDragObject.virtual_000 ==== */

void TDragObject_virtual_000(void)

{
  return;
}


/* ==== 00421f18 TDragObject.virtual_010 ==== */

void TDragObject_virtual_010(int *param_1,int *param_2)

{
  byte abStack_108 [256];
  
  FUN_00402c60(*param_1,abStack_108);
  FUN_00403bdc(param_2,abStack_108);
  return;
}


/* ==== 00421f40 FUN_00421f40 ==== */

void FUN_00421f40(undefined4 param_1,HWND wnd)

{
  ReleaseCapture();
  FUN_00439d40(wnd);
  return;
}


/* ==== 00422044 TDragObject.virtual_008 ==== */

undefined4 TDragObject_virtual_008(void)

{
  return 0;
}


/* ==== 00422048 TDragObject.virtual_004 ==== */

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


/* ==== 00422060 TDragObject.virtual_014 ==== */

void TDragObject_virtual_014(void)

{
  return;
}


/* ==== 00422064 TDragObject.virtual_018 ==== */

undefined4 TDragObject_virtual_018(void)

{
  return DAT_004474d4;
}


/* ==== 0042206c TDragObject.virtual_01c ==== */

void TDragObject_virtual_01c(void)

{
  return;
}


/* ==== 00422070 TBaseDragControlObject.virtual_024 ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_fffffff0,in_stack_fffffff4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[0xe] = param_3;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


/* ==== 00422094 TBaseDragControlObject.virtual_00c ==== */

void TBaseDragControlObject_virtual_00c(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TDragObject_virtual_00c(param_1,(int)param_2);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TBaseDragControlObject_virtual_000_0041ff90);
  if ((char)uVar1 != '\0') {
    *(int *)(param_1 + 0x38) = param_2[0xe];
  }
  return;
}


/* ==== 004220c0 TBaseDragControlObject.virtual_020 ==== */

void TBaseDragControlObject_virtual_020(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(*(int **)(param_1 + 0x38),param_2,param_3);
  return;
}


/* ==== 004220e4 TBaseDragControlObject.virtual_000 ==== */

void TBaseDragControlObject_virtual_000
               (int *param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  if (param_4 == '\0') {
    FUN_00402ef0((int *)param_1[0xe],param_2,param_3);
    param_2 = 0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_5);
  return;
}


/* ==== 00422118 TDragControlObject.virtual_004 ==== */

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


/* ==== 00422130 TDragControlObject.virtual_008 ==== */

void TDragControlObject_virtual_008(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
  return;
}


/* ==== 0042213c TDragControlObject.virtual_014 ==== */

void TDragControlObject_virtual_014(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
    FUN_0042c174(iVar1);
  }
  return;
}


/* ==== 0042215c TDragControlObject.virtual_01c ==== */

void TDragControlObject_virtual_01c(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x48))();
    FUN_0042c15c(iVar1);
  }
  return;
}


/* ==== 0042217c TDragDockObject.virtual_024 ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TBaseDragControlObject_virtual_024(param_1,'\0',param_3);
  piVar1 = FUN_00416bb0((int *)&PTR_TPersistent_virtual_000_00415148,'\x01',extraout_ECX_00);
  param_1[0x10] = (int)piVar1;
  uVar2 = FUN_0041d118(0,0xffffff);
  FUN_00416d30(piVar1,uVar2);
  if (cVar3 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 004221e0 TDragDockObject.Destroy ==== */

void TDragDockObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[0x10]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00422210 TDragDockObject.virtual_00c ==== */

void TDragDockObject_virtual_00c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int i_val;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  
  bVar4 = 0;
  TBaseDragControlObject_virtual_00c(param_1,param_2);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TBaseDragControlObject_virtual_000_004200a4);
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


/* ==== 00422274 TDragDockObject.virtual_020 ==== */

void TDragDockObject_virtual_020(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(*(int **)(param_1 + 0x38),param_2,param_3);
  return;
}


/* ==== 00422294 FUN_00422294 ==== */

uint FUN_00422294(uint param_1,uint param_2)

{
  if ((int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) <
      (int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f))) {
    return param_1;
  }
  return param_2;
}


/* ==== 004222b8 TDragDockObject.virtual_028 ==== */

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
    uVar1 = FUN_00422294(local_1c[0] - i_val,local_1c[2] - i_val);
  }
  else {
    uVar1 = 0;
  }
  i_val = *(int *)(param_1 + 0x10);
  if ((i_val < local_1c[1]) || (local_1c[3] < i_val)) {
    uVar2 = FUN_00422294(local_1c[1] - i_val,local_1c[3] - i_val);
  }
  else {
    uVar2 = 0;
  }
  if ((uVar1 != 0) || (uVar2 != 0)) {
    OffsetRect((LPRECT)(param_1 + 0x44),-uVar1,-uVar2);
  }
  return;
}


/* ==== 00422338 TDragDockObject.virtual_02c ==== */

void TDragDockObject_virtual_02c(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(*(int **)(param_1 + 0x38),param_1,param_3);
  return;
}


/* ==== 0042234c TDragDockObject.virtual_030 ==== */

void TDragDockObject_virtual_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(*(int **)(param_1 + 0x38),param_1,param_3);
  return;
}


/* ==== 00422360 TDragDockObject.virtual_004 ==== */

undefined4 TDragDockObject_virtual_004(void)

{
  return 0;
}


/* ==== 0042236c TDragDockObject.virtual_034 ==== */

undefined4 TDragDockObject_virtual_034(void)

{
  return 4;
}


/* ==== 004223e0 FUN_004223e0 ==== */

undefined1 FUN_004223e0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  wnd = FUN_004227e4((POINT *)(param_4 + -0xc));
  pHVar1 = GetWindow(wnd,4);
  if (pHVar1 != *(HWND *)(*(int *)PTR_DAT_00446c80 + 0x24)) {
    param = FUN_00421a0c(wnd);
    if (param == (int *)0x0) {
      return local_5;
    }
    do {
      piVar4 = param;
      param = (int *)piVar4[9];
    } while (param != (int *)0x0);
    wnd = (HWND)FUN_0042a8b4(piVar4);
  }
  param = param_1;
  if (wnd != (HWND)0x0) {
    do {
      piVar4 = param;
      param = (int *)piVar4[9];
    } while (param != (int *)0x0);
    local_1c = (HWND)FUN_0042a8b4(piVar4);
    if (local_1c != wnd) {
      param = *(int **)(*(int *)(param_4 + -0x10) + 0x24);
      if (param == (int *)0x0) {
        uVar2 = FUN_00402e8c(*(int **)(param_4 + -0x10),(int)&PTR_TWinControl_virtual_000_00420fa8);
        if ((char)uVar2 == '\0') {
          local_20 = 0;
        }
        else {
          local_20 = FUN_0042a8b4(*(int **)(param_4 + -0x10));
        }
      }
      else {
        do {
          piVar4 = param;
          param = (int *)piVar4[9];
        } while (param != (int *)0x0);
        local_20 = FUN_0042a8b4(piVar4);
      }
      local_c = '\0';
      local_14 = *(undefined4 *)(param_4 + -0xc);
      local_10 = *(undefined4 *)(param_4 + -8);
      param = &local_20;
      lpfn = (WNDENUMPROC)&LAB_00422374;
      dwThreadId = GetCurrentThreadId();
      EnumThreadWindows(dwThreadId,lpfn,(LPARAM)param);
      if (local_c != '\0') {
        GetWindowRect(wnd,&local_30);
        FUN_00402ef0(param_1,*(undefined4 *)(param_4 + -0x10),&local_40);
        uVar2 = FUN_00402e8c(DAT_00447750,(int)&PTR_TBaseDragControlObject_virtual_000_004200a4);
        if (((((char)uVar2 == '\0') || (*(int *)(DAT_00447750[0xe] + 0x90) == 0)) ||
            (pHVar1 = (HWND)FUN_0042a8b4(*(int **)(DAT_00447750[0xe] + 0x90)), pHVar1 != wnd)) &&
           (BVar3 = IntersectRect(&local_30,&local_30,&local_40), BVar3 != 0)) {
          local_5 = 0;
        }
      }
    }
  }
  return local_5;
}


/* ==== 00422578 FUN_00422578 ==== */

bool FUN_00422578(void)

{
  undefined4 uVar1;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_00402e8c(*(int **)(in_stack_00000004 + -0x10),
                       (int)&PTR_TWinControl_virtual_000_00420fa8);
  if ((char)uVar1 != '\0') {
    hWnd = (HWND)FUN_0042a8b4(*(int **)(in_stack_00000004 + -0x14));
    hWndParent = (HWND)FUN_0042a8b4(*(int **)(in_stack_00000004 + -0x10));
    BVar2 = IsChild(hWndParent,hWnd);
    return BVar2 != 0;
  }
  return false;
}


/* ==== 004225bc FUN_004225bc ==== */

int * FUN_004225bc(LONG *param_1,int *param_2)

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
  if ((key_state & 0x8000) == 0 && DAT_00447774 != (undefined4 *)0x0) {
    (**(code **)(*DAT_00447778 + 8))();
    i_val = DAT_00447774[2];
    puVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (-1 < i_val + -1) {
      j = 0;
      do {
        local_18 = (int *)FUN_0040f024(DAT_00447774,j);
        puVar5 = extraout_ECX_00;
        uVar6 = extraout_EDX_00;
        if ((local_18 != local_14) && ((char)local_18[0x5a] != '\0')) {
          cVar1 = (**(code **)(*local_18 + 0x4c))();
          puVar5 = extraout_ECX_01;
          uVar6 = extraout_EDX_01;
          if (cVar1 != '\0') {
            hWnd = (HWND)FUN_0042a8b4(local_18);
            BVar3 = IsWindowVisible(hWnd);
            puVar5 = extraout_ECX_02;
            uVar6 = extraout_EDX_02;
            if (BVar3 != 0) {
              puVar5 = &stack0xfffffffc;
              bVar2 = FUN_00422578();
              uVar6 = extraout_EDX_03;
              if (!bVar2) {
                if ((int *)local_14[0x24] == local_18) {
                  iVar4 = FUN_00429240((int)local_18);
                  puVar5 = extraout_ECX_03;
                  uVar6 = extraout_EDX_04;
                  if (iVar4 < 2) goto LAB_004226c3;
                }
                local_5 = '\x01';
                FUN_00402ef0(local_18,local_14,&local_2c);
                puVar5 = extraout_ECX_04;
                uVar6 = extraout_EDX_05;
                if (local_5 != '\0') {
                  pt.y = local_c;
                  pt.x = local_10;
                  BVar3 = PtInRect(&local_2c,pt);
                  puVar5 = extraout_ECX_05;
                  uVar6 = extraout_EDX_06;
                  if (BVar3 != 0) {
                    FUN_00421dc4(DAT_00447778,local_18);
                    puVar5 = extraout_ECX_06;
                    uVar6 = extraout_EDX_07;
                  }
                }
              }
            }
          }
        }
LAB_004226c3:
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    if (0 < DAT_00447778[2]) {
      local_1c = (int *)FUN_00421e54(DAT_00447778,uVar6,(int)puVar5);
      puVar5 = extraout_ECX_07;
      uVar6 = extraout_EDX_08;
    }
    if (local_1c != (int *)0x0) {
      cVar1 = FUN_004223e0(local_1c,uVar6,puVar5,(int)&stack0xfffffffc);
      if (cVar1 == '\0') {
        local_1c = (int *)0x0;
      }
    }
  }
  return local_1c;
}


/* ==== 00422708 FUN_00422708 ==== */

void FUN_00422708(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_00447774 == (int *)0x0) {
      DAT_00447774 = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
    }
    iVar1 = FUN_0040f080((int)DAT_00447774,param_1);
    if (param_2 == '\0') {
      if (iVar1 != -1) {
        FUN_0040ef14(DAT_00447774,iVar1);
      }
    }
    else if (iVar1 == -1) {
      FUN_0040eec8(DAT_00447774,param_1);
    }
  }
  return;
}


/* ==== 00422768 FUN_00422768 ==== */

LRESULT FUN_00422768(HWND wnd,uint param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5
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
    local_c = DAT_0044776c == '\x02';
    local_14 = param_3;
    local_8 = param_3;
    LVar1 = SendMessageA(wnd,0xb02f,param_2 & 0x7f,(LPARAM)&local_1c);
  }
  return LVar1;
}


/* ==== 004227c0 FUN_004227c0 ==== */

undefined4 FUN_004227c0(HWND wnd)

{
  HANDLE prop;
  
  if (wnd != (HWND)0x0) {
    prop = GetPropA(wnd,(LPCSTR)(uint)DAT_00447748);
    if (prop != (HANDLE)0x0) {
      return CONCAT31((int3)((uint)prop >> 8),1);
    }
  }
  return 0;
}


/* ==== 004227e4 FUN_004227e4 ==== */

HWND FUN_004227e4(POINT *point)

{
  HWND wnd;
  undefined4 uVar1;
  
  wnd = WindowFromPoint(*point);
  while ((wnd != (HWND)0x0 && (uVar1 = FUN_004227c0(wnd), (char)uVar1 == '\0'))) {
    wnd = GetParent(wnd);
  }
  return wnd;
}


/* ==== 00422810 FUN_00422810 ==== */

int * FUN_00422810(POINT *point,int *param_2,char param_3,int *param_4)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_EDX;
  
  if (param_3 == '\0') {
    pHVar1 = FUN_004227e4(point);
    *param_2 = (int)pHVar1;
    piVar2 = (int *)FUN_00422768((HWND)*param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),5),
                                 DAT_00447750,&point->x,0);
  }
  else {
    piVar2 = FUN_004225bc(&point->x,param_4);
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_0042a8b4(piVar2);
      *param_2 = iVar3;
    }
  }
  return piVar2;
}


/* ==== 00422860 FUN_00422860 ==== */

bool FUN_00422860(uint param_1)

{
  LRESULT LVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(DAT_00447750 + 4) != 0) {
    LVar1 = FUN_00422768(*(HWND *)(DAT_00447750 + 8),param_1,DAT_00447750,
                         (undefined4 *)(DAT_00447750 + 0xc),*(int *)(DAT_00447750 + 4));
    bVar2 = LVar1 != 0;
  }
  return bVar2;
}


/* ==== 0042289c FUN_0042289c ==== */

undefined4 FUN_0042289c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  piVar1 = *(int **)(DAT_00447750 + 4);
  if ((((piVar1 != (int *)0x0) && ((char)piVar1[0x5f] != '\0')) && (piVar1[0x50] != 0)) &&
     (iVar2 = FUN_004291ac((int)piVar1), iVar2 != 0)) {
    iVar2 = FUN_004291ac((int)piVar1);
    if ((iVar2 == 1) &&
       (iVar2 = FUN_0040f024((undefined4 *)piVar1[0x50],0), iVar2 == *(int *)(DAT_00447750 + 0x38)))
    {
      return 0;
    }
    piVar3 = FUN_00423258((POINT *)(DAT_00447750 + 0xc),0);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      if (piVar1 == piVar3) {
        return 0;
      }
      iVar2 = FUN_0040f080(piVar1[0x50],(int)piVar3);
      if (iVar2 != -1) break;
      piVar3 = (int *)piVar3[9];
    }
    uVar4 = FUN_004291c0((int)piVar1,iVar2);
  }
  return uVar4;
}


/* ==== 00422930 FUN_00422930 ==== */

void FUN_00422930(POINT *point)

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
  if (((DAT_0044776c == '\0') &&
      (uVar5 = tagPOINT_0044775c.x - point->x, uVar10 = (int)uVar5 >> 0x1f,
      (int)((uVar5 ^ uVar10) - uVar10) < DAT_00447768)) &&
     (uVar5 = tagPOINT_0044775c.y - point->y, uVar10 = (int)uVar5 >> 0x1f,
     (int)((uVar5 ^ uVar10) - uVar10) < DAT_00447768)) {
    return;
  }
  piVar6 = FUN_00422810(point,&local_1c,*(char *)((int)DAT_0044774c + 0x8b),DAT_0044774c);
  if ((DAT_0044776c == '\0') && (DAT_00447770 != (int *)0x0)) {
    LVar13 = tagPOINT_0044775c.y;
    pHVar7 = GetDesktopWindow();
    FUN_0042c030(DAT_00447770,pHVar7,tagPOINT_0044775c.x,LVar13);
  }
  cVar1 = DAT_0044776c;
  local_18[0] = *(char *)((int)DAT_0044774c + 0x8b) != '\0';
  if (local_18[0]) {
    DAT_0044776c = '\x02';
  }
  else {
    DAT_0044776c = '\x01';
  }
  local_18[0] = local_18[0] && cVar1 != '\0';
  if (piVar6 != (int *)DAT_00447750[1]) {
    FUN_00422860(CONCAT31((int3)((uint)DAT_00447750 >> 8),1));
    if (DAT_00447750 == (int *)0x0) {
      return;
    }
    DAT_00447750[1] = (int)piVar6;
    DAT_00447750[2] = local_1c;
    piVar11 = DAT_00447750;
    DAT_00447750[3] = point->x;
    piVar11[4] = point->y;
    FUN_00422860(0);
    if (DAT_00447750 == (int *)0x0) {
      return;
    }
  }
  piVar11 = DAT_00447750;
  DAT_00447750[3] = point->x;
  piVar11[4] = point->y;
  if (DAT_00447750[1] != 0) {
    FUN_00424398((int *)DAT_00447750[1],&point->x,&local_14);
    piVar11 = DAT_00447750;
    DAT_00447750[5] = local_14;
    piVar11[6] = local_10;
  }
  LVar13 = point->y;
  bVar2 = FUN_00422860(CONCAT31((int3)((uint)LVar13 >> 8),2));
  sVar4 = (**(code **)(*DAT_00447750 + 4))(DAT_00447750,bVar2,point->x,LVar13);
  if (DAT_00447770 != (int *)0x0) {
    if ((piVar6 == (int *)0x0) || ((*(byte *)((int)piVar6 + 0x41) & 0x20) != 0)) {
      FUN_0042c018((int)DAT_00447770,sVar4);
      if (*(char *)((int)DAT_00447770 + 0x62) == '\0') {
        LVar13 = point->y;
        pHVar7 = GetDesktopWindow();
        FUN_0042c030(DAT_00447770,pHVar7,point->x,LVar13);
      }
      else {
        FUN_0042c118((int)DAT_00447770,point->x,point->y);
      }
    }
    else {
      FUN_0042c18c((int)DAT_00447770);
      pHVar8 = (HCURSOR)FUN_00440610(*(int *)PTR_DAT_00446d84,(int)sVar4);
      SetCursor(pHVar8);
    }
  }
  pHVar8 = (HCURSOR)FUN_00440610(*(int *)PTR_DAT_00446d84,(int)sVar4);
  SetCursor(pHVar8);
  if (DAT_0044776c == '\x02') {
    if (piVar6 == (int *)0x0) {
      FUN_00402ef0((int *)DAT_00447750[0xe],DAT_00447750,point->x);
    }
    else {
      piVar6 = (int *)FUN_0042289c();
      DAT_00447750[0x16] = (int)piVar6;
      if (piVar6 == (int *)0x0) {
        uVar3 = FUN_00402ef0((int *)DAT_00447750[1],DAT_00447750 + 5,extraout_ECX);
        *(undefined1 *)(DAT_00447750 + 0x15) = uVar3;
      }
      else {
        FUN_00424398(piVar6,&point->x,(int *)local_18);
        uVar3 = FUN_00402ef0(piVar6,local_18,extraout_ECX_00);
        *(undefined1 *)(DAT_00447750 + 0x15) = uVar3;
      }
    }
    if ((DAT_00447750 != (int *)0x0) &&
       (uVar9 = FUN_00407a5c(DAT_00447750 + 0x11,DAT_00447750 + 0x17,0x10), (char)uVar9 == '\0')) {
      if ((char)local_1c != '\0') {
        (**(code **)(*DAT_00447750 + 0x30))();
      }
      (**(code **)(*DAT_00447750 + 0x2c))();
      piVar6 = DAT_00447750 + 0x11;
      piVar11 = DAT_00447750 + 0x17;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *piVar11 = *piVar6;
        piVar6 = piVar6 + (uint)bVar12 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
      }
    }
  }
  return;
}


/* ==== 00422c04 FUN_00422c04 ==== */

void FUN_00422c04(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  HWND wnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  LONG LVar4;
  
  DAT_00447750 = param_1;
  param_1[1] = 0;
  GetCursorPos(&tagPOINT_0044775c);
  piVar2 = DAT_00447750;
  DAT_00447750[3] = tagPOINT_0044775c.x;
  piVar2[4] = tagPOINT_0044775c.y;
  DAT_00447764 = GetCursor();
  DAT_00447758 = FUN_00421ef8();
  DAT_00447768 = param_3;
  uVar3 = FUN_00402e8c(param_1,(int)&PTR_TBaseDragControlObject_virtual_000_004200a4);
  if ((char)uVar3 == '\0') {
    if (param_2 == '\0') {
      DAT_0044776c = '\0';
    }
    else {
      DAT_0044776c = '\x01';
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
      DAT_0044776c = '\0';
    }
    else {
      DAT_0044776c = '\x02';
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  DAT_00447770 = (int *)(**(code **)(*DAT_00447750 + 8))();
  uVar3 = extraout_ECX;
  if (DAT_00447770 != (int *)0x0) {
    LVar4 = tagPOINT_0044775c.y;
    wnd = GetDesktopWindow();
    FUN_0042c030(DAT_00447770,wnd,tagPOINT_0044775c.x,LVar4);
    uVar3 = extraout_ECX_00;
  }
  DAT_00447778 = FUN_00402ce4((int *)&PTR_TList_virtual_000_00421d4c,'\x01',uVar3);
  if (DAT_0044776c != '\0') {
    FUN_00422930(&tagPOINT_0044775c);
  }
  return;
}


/* ==== 00422d74 FUN_00422d74 ==== */

void FUN_00422d74(int *param_1,char param_2,undefined4 param_3)

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
  puStack_38 = &LAB_00422f1e;
  uStack_3c = *in_FS_OFFSET;
  DAT_0044774c = param_1;
  *in_FS_OFFSET = &uStack_3c;
  local_c = (int *)0x0;
  DAT_00447754 = 0;
  local_5 = param_2;
  if (*(char *)((int)param_1 + 0x8b) == '\0') {
    puStack_34 = &stack0xfffffffc;
    FUN_00402ef0(param_1,&local_c,param_3);
    if (DAT_0044774c == (int *)0x0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == (int *)0x0) {
      local_c = (int *)TBaseDragControlObject_virtual_024
                                 ((int *)&PTR_TBaseDragControlObject_virtual_000_0042001c,'\x01',
                                  (int)param_1);
      DAT_00447754 = 1;
    }
  }
  else {
    FUN_00402ef0(param_1,&local_c,param_3);
    if (DAT_0044774c == (int *)0x0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == (int *)0x0) {
      local_c = TDragDockObject_virtual_024
                          ((int *)&PTR_TBaseDragControlObject_virtual_000_004200a4,'\x01',
                           (int)param_1);
      DAT_00447754 = 1;
    }
    piVar2 = (int *)local_c[0xe];
    uVar1 = FUN_00402e8c(piVar2,(int)&PTR_TWinControl_virtual_000_00420fa8);
    if ((char)uVar1 == '\0') {
      piVar2 = (int *)local_c[0xe];
      if ((piVar2[9] == 0) &&
         (uVar1 = FUN_00402e8c(piVar2,(int)&PTR_TWinControl_virtual_000_00420fa8),
         (char)uVar1 == '\0')) {
        GetCursorPos(&point);
        local_c[0x11] = point.x;
        local_c[0x12] = point.y;
      }
      else {
        FUN_0040e594(0,0,local_24);
        FUN_0042436c(piVar2,local_24,&local_1c);
        local_c[0x11] = local_1c;
        local_c[0x12] = local_18;
      }
      FUN_0040e594(local_c[0x11] + *(int *)(local_c[0xe] + 0x38),
                   local_c[0x12] + *(int *)(local_c[0xe] + 0x3c),&local_1c);
      local_c[0x13] = local_1c;
      local_c[0x14] = local_18;
    }
    else {
      lpRect = (LPRECT)(local_c + 0x11);
      hWnd = (HWND)FUN_0042a8b4(piVar2);
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
  FUN_00422c04(local_c,local_5,param_3);
  *in_FS_OFFSET = uStack_3c;
  return;
}


/* ==== 00422f3c FUN_00422f3c ==== */

undefined1 FUN_00422f3c(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_stack_00000004;
  
  uVar2 = *(int *)(DAT_00447750 + 4) != 0;
  if ((*(char *)(in_stack_00000004 + -1) != '\0') && (DAT_0044776c == '\x02')) {
    cVar1 = (**(code **)(*DAT_0044774c + 0x50))();
    if ((cVar1 == '\0') && (DAT_0044774c[0x24] != 0)) {
      if ((int *)DAT_0044774c[0x24] != (int *)0x0) {
        uVar2 = FUN_00402ef0((int *)DAT_0044774c[0x24],*(undefined4 *)(DAT_00447750 + 4),
                             DAT_0044774c);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* ==== 00422fac FUN_00422fac ==== */

void FUN_00422fac(char param_1)

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
  if ((DAT_00447750 == (int *)0x0) || ((char)DAT_00447750[0xc] != '\0')) {
    return;
  }
  puStack_24 = &LAB_004231ff;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar1 = DAT_00447750;
  puStack_30 = &LAB_004231d2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *(undefined1 *)(DAT_00447750 + 0xc) = 1;
  FUN_00421f40(DAT_00447750,DAT_00447758);
  if (DAT_0044776c == '\x02') {
    piVar8 = (int *)FUN_00402ea4(DAT_00447750,(int)&PTR_TBaseDragControlObject_virtual_000_004200a4)
    ;
    (**(code **)(*piVar8 + 0x30))();
    *(bool *)(piVar8 + 0x1b) = piVar8[1] == 0;
  }
  if (DAT_00447750[1] == 0) {
LAB_0042307b:
    local_18 = DAT_00447750[3];
    local_14 = DAT_00447750[4];
  }
  else {
    uVar4 = FUN_00402e8c((int *)DAT_00447750[1],(int)&PTR_TControl_virtual_000_00420b14);
    if ((char)uVar4 == '\0') goto LAB_0042307b;
    local_18 = DAT_00447750[5];
    local_14 = DAT_00447750[6];
  }
  cVar2 = FUN_00422f3c();
  if (cVar2 != '\0') {
    if ((DAT_0044776c == '\x02') && ((char)piVar8[0x1b] != '\0')) {
LAB_004230ba:
      if (param_1 != '\0') {
        cVar2 = '\x01';
        goto LAB_004230c6;
      }
    }
    else if (DAT_0044776c != '\0') {
      bVar3 = FUN_00422860(CONCAT31(extraout_var,1));
      if (bVar3) goto LAB_004230ba;
    }
  }
  cVar2 = '\0';
LAB_004230c6:
  if (DAT_0044776c == '\x02') {
    if ((cVar2 != '\0') && ((char)piVar8[0x1b] != '\0')) {
      piVar5 = FUN_00439eb4((int *)piVar8[0xe]);
      if ((piVar5 != (int *)0x0) && (piVar5[0x82] == piVar8[0xe])) {
        TForm_SetActiveControl(piVar5,(int *)0x0,extraout_ECX);
      }
      FUN_00425780(DAT_0044774c,0xb03a,0,DAT_00447750);
    }
  }
  else if (DAT_00447770 == 0) {
    SetCursor(DAT_00447764);
  }
  else {
    FUN_0042c18c(DAT_00447770);
  }
  DAT_0044774c = 0;
  DAT_00447750 = (int *)0x0;
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
    FUN_00422768((HWND)piVar1[2],uVar6,piVar1,piVar1 + 3,piVar1[1]);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004231d9;
  puStack_30 = (undefined1 *)0x4231a4;
  FUN_00402d14(DAT_00447778);
  DAT_00447778 = (int *)0x0;
  *(undefined1 *)(piVar1 + 0xc) = 0;
  puStack_30 = (undefined1 *)local_14;
  uStack_34 = CONCAT31((int3)((uint)local_14 >> 8),cVar2);
  (**(code **)*piVar1)(piVar1,piVar1[1],local_18);
  DAT_00447750 = (int *)0x0;
  return;
}


/* ==== 0042320c FUN_0042320c ==== */

void FUN_0042320c(void)

{
  if (DAT_00447750 != 0) {
    FUN_00422fac('\0');
  }
  DAT_0044774c = 0;
  return;
}


/* ==== 00423224 FUN_00423224 ==== */

HANDLE FUN_00423224(POINT *point)

{
  HWND wnd;
  HANDLE pvVar1;
  
  wnd = WindowFromPoint(*point);
  pvVar1 = (HANDLE)0x0;
  while ((wnd != (HWND)0x0 && (pvVar1 = FUN_00421a0c(wnd), pvVar1 == (HANDLE)0x0))) {
    wnd = GetParent(wnd);
  }
  return pvVar1;
}


/* ==== 00423258 FUN_00423258 ==== */

int * FUN_00423258(POINT *point,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int local_18 [2];
  
  piVar1 = FUN_00423224(point);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    cVar4 = '\0';
    FUN_00424398(piVar1,&point->x,local_18);
    piVar2 = (int *)FUN_00428124((int)piVar1,local_18,param_2,cVar4);
    piVar3 = piVar1;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2;
    }
  }
  return piVar3;
}


/* ==== 004232a0 FUN_004232a0 ==== */

void FUN_004232a0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
    *param_1 = iVar1;
  }
  FUN_0040eec8((int *)*param_1,param_2);
  return;
}


/* ==== 004232c8 FUN_004232c8 ==== */

void FUN_004232c8(int *param_1,int param_2)

{
  FUN_0040f164((int *)*param_1,param_2);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00402d14((int *)*param_1);
    *param_1 = 0;
  }
  return;
}


/* ==== 004232e8 FUN_004232e8 ==== */

void FUN_004232e8(HDC hdc_val,int param_2,int param_3)

{
  tagPOINT point;
  
  GetWindowOrgEx(hdc_val,&point);
  SetWindowOrgEx(hdc_val,point.x - param_2,point.y - param_3,(LPPOINT)0x0);
  return;
}


/* ==== 00423318 FUN_00423318 ==== */

void FUN_00423318(void)

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
  
  puStack_18 = (undefined1 *)0x423328;
  local_c = (undefined4 *)FUN_0040f38c(DAT_0044777c);
  puStack_1c = &LAB_004233c8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (-1 < local_c[2] + -1) {
    j = 0;
    puStack_18 = &stack0xfffffffc;
    i_val = local_c[2];
    do {
      puStack_24 = (undefined1 *)0x42335a;
      local_14 = (int *)FUN_0040f024(local_c,j);
      puStack_24 = (undefined1 *)0x423365;
      cVar1 = FUN_004172cc((int)local_14);
      if (cVar1 != '\0') {
        puStack_28 = &LAB_004233a1;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        FUN_00423554(local_14);
        FUN_0040350c();
        puStack_24 = (undefined1 *)0x423389;
        FUN_0040350c();
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x4233cf;
  puStack_1c = (undefined1 *)0x4233c7;
  FUN_0040f3f0(DAT_0044777c);
  return;
}


/* ==== 004233d4 FUN_004233d4 ==== */

void FUN_004233d4(void)

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
  
  puStack_14 = (undefined1 *)0x4233e4;
  local_c = (undefined4 *)FUN_0040f38c(DAT_0044777c);
  puStack_18 = &LAB_00423472;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      i_val = iVar1;
      puStack_20 = (undefined1 *)0x42340f;
      local_10 = (int *)FUN_0040f024(local_c,i_val);
      puStack_20 = (undefined1 *)0x42341a;
      cVar2 = FUN_004172cc((int)local_10);
      if (cVar2 != '\0') {
        puStack_24 = &LAB_0042344a;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_00423554(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x423451;
        puStack_24 = (undefined1 *)0x423449;
        FUN_00417328((int)local_10);
        return;
      }
      i_val = i_val + -1;
      iVar1 = i_val;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00423479;
  puStack_18 = (undefined1 *)0x423471;
  FUN_0040f3f0(DAT_0044777c);
  return;
}


/* ==== 00423480 TControlCanvas.Destroy ==== */

void TControlCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00423554(piVar1);
  TCanvas_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 004234ac TControlCanvas.virtual_014 ==== */

void TControlCanvas_virtual_014(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0x16] == 0) {
    puStack_10 = (undefined1 *)0x4234c5;
    TCanvas_virtual_014();
  }
  else {
    if (param_1[0x17] == 0) {
      puStack_10 = (undefined1 *)0x4234dd;
      piVar1 = (int *)FUN_0040f38c(DAT_0044777c);
      puStack_14 = &LAB_00423531;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      if (3 < piVar1[2]) {
        puStack_10 = &stack0xfffffffc;
        FUN_00423318();
      }
      iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],param_1 + 0x18);
      param_1[0x17] = iVar2;
      FUN_0040eec8(piVar1,(int)param_1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x423538;
      puStack_14 = (undefined1 *)0x423530;
      FUN_0040f3f0(DAT_0044777c);
      return;
    }
    puStack_10 = (undefined1 *)0x423546;
    FUN_004174b0(param_1,param_1[0x17]);
    puStack_10 = (undefined1 *)0x42354e;
    FUN_004235a0((int)param_1);
  }
  return;
}


/* ==== 00423554 FUN_00423554 ==== */

void FUN_00423554(int *param_1)

{
  if (param_1[0x17] != 0) {
    FUN_004174b0(param_1,0);
    FUN_0040f3a0(DAT_0044777c,(int)param_1);
    ReleaseDC((HWND)param_1[0x18],(HDC)param_1[0x17]);
    param_1[0x17] = 0;
  }
  return;
}


/* ==== 00423588 FUN_00423588 ==== */

void FUN_00423588(int *param_1,int param_2)

{
  if (param_2 != param_1[0x16]) {
    FUN_00423554(param_1);
    param_1[0x16] = param_2;
  }
  return;
}


/* ==== 004235a0 FUN_004235a0 ==== */

void FUN_004235a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = FUN_00424dbc(*(int *)(param_1 + 0x58));
    if ((char)uVar1 == '\0') {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
    }
  }
  return;
}


/* ==== 004235cc TSizeConstraints.virtual_00c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  param_1[1] = param_3;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00423608 TSizeConstraints.virtual_000 ==== */

void TSizeConstraints_virtual_000(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TSizeConstraints_virtual_000_00420394);
  if ((char)uVar2 != '\0') {
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    iVar1 = param_1[2];
    param_2[2] = iVar1;
    FUN_00402ef0(param_2,iVar1,extraout_ECX);
    return;
  }
  TPersistent_virtual_000(param_1,param_2);
  return;
}


/* ==== 00423654 TSizeConstraints.SetMaxHeight ==== */

void TSizeConstraints_SetMaxHeight(int *param_1,int param_2,uint param_3)

{
  if (param_2 == 0) {
    if (param_3 != param_1[2]) {
      param_1[2] = param_3;
      if ((param_3 != 0) && (param_3 < (uint)param_1[4])) {
        param_1[4] = param_3;
      }
      FUN_00402ef0(param_1,0xffffffff,param_3);
      return;
    }
  }
  else if (param_2 == 1) {
    if (param_3 != param_1[3]) {
      param_1[3] = param_3;
      if ((param_3 != 0) && (param_3 < (uint)param_1[5])) {
        param_1[5] = param_3;
      }
      FUN_00402ef0(param_1,0,param_3);
      return;
    }
  }
  else if (param_2 == 2) {
    if (param_3 != param_1[4]) {
      param_1[4] = param_3;
      if ((param_1[2] != 0) && ((uint)param_1[2] < param_3)) {
        param_1[2] = param_3;
      }
      FUN_00402ef0(param_1,0,param_3);
      return;
    }
  }
  else if ((param_2 == 3) && (param_3 != param_1[5])) {
    param_1[5] = param_3;
    if ((param_1[3] != 0) && ((uint)param_1[3] < param_3)) {
      param_1[3] = param_3;
    }
    FUN_00402ef0(param_1,0,param_3);
  }
  return;
}


/* ==== 004236fc TSizeConstraints.dynamic_fffd ==== */

void TSizeConstraints_dynamic_fffd(int param_1)

{
  if (*(short *)(param_1 + 0x1a) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_1);
  }
  return;
}


/* ==== 00423710 TControlActionLink.virtual_000 ==== */

void TControlActionLink_virtual_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402ea4(param_2,(int)&PTR_TControl_virtual_000_00420b14);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}


/* ==== 0042372c TControlActionLink.virtual_060 ==== */

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
  puStack_34 = &LAB_004237f3;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_5 = 1;
  uVar2 = FUN_00402e8c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_00402ef0(*(int **)(param_1 + 0x10),param_2,extraout_ECX);
    if ((((cVar1 != '\0') && (*(char *)(*(int *)PTR_DAT_00446c80 + 0x6c) != '\0')) &&
        (*(short *)(*(int *)(param_1 + 0x10) + 0x68) != 0)) && (*param_2 != 0)) {
      ppuVar3 = &local_c;
      local_1c = *param_2;
      local_18 = 0xb;
      FUN_0043222c(*(ushort *)(*(int *)(param_1 + 0x10) + 0x68),&local_20);
      local_14 = local_20;
      local_10 = 0xb;
      FUN_0040873c((byte *)"%s (%s)",&local_1c,1,(int *)ppuVar3);
      FUN_00403a0c(param_2,local_c);
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004237fa;
  puStack_34 = (undefined1 *)0x4237ea;
  FUN_004039b8(&local_20);
  puStack_34 = (undefined1 *)0x4237f2;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 00423814 TControlActionLink.virtual_020 ==== */

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
  puStack_14 = &LAB_0042387b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = TActionLink_virtual_020(param_1);
  if (cVar2 != '\0') {
    TLabel_GetCaption(*(int *)(param_1 + 0x18),(int *)&local_8);
    puVar1 = local_8;
    iVar3 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    FUN_00403d48(puVar1,*(uint **)(iVar3 + 0x54));
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00423882;
  puStack_14 = (undefined1 *)0x42387a;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00423888 TControlActionLink.virtual_028 ==== */

undefined4 TControlActionLink_virtual_028(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_028(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))();
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (cVar1 == *(char *)(iVar2 + 0x59)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 004238bc TControlActionLink.virtual_030 ==== */

undefined4 TControlActionLink_virtual_030(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  
  cVar1 = TActionLink_virtual_030(param_1);
  uVar4 = cVar1 == '\0';
  if (!(bool)uVar4) {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    puVar3 = FUN_00403d48(*(uint **)(*(int *)(param_1 + 0x18) + 0x70),*(uint **)(iVar2 + 0x60));
    if ((bool)uVar4) {
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
  }
  return 0;
}


/* ==== 004238f0 TControlActionLink.virtual_03c ==== */

undefined4 TControlActionLink_virtual_03c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_03c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (*(char *)(iVar2 + 0x6a) == *(char *)(*(int *)(param_1 + 0x18) + 0x47)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00423920 TControlActionLink.virtual_008 ==== */

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


/* ==== 00423948 TControlActionLink.virtual_040 ==== */

void TControlActionLink_virtual_040(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    TLabel_SetCaption(param_1[6],param_2);
  }
  return;
}


/* ==== 00423968 TControlActionLink.virtual_048 ==== */

void TControlActionLink_virtual_048(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[6] + 0x5c))((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 00423988 TControlActionLink.virtual_050 ==== */

void TControlActionLink_virtual_050(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403a0c((int *)(param_1[6] + 0x70),param_2);
  }
  return;
}


/* ==== 004239ac TControlActionLink.virtual_05c ==== */

void TControlActionLink_virtual_05c(int *param_1,uint param_2)

{
  char cVar1;
  undefined4 extraout_ECX;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    TLabel_SetVisible((int *)param_1[6],param_2,extraout_ECX);
  }
  return;
}


/* ==== 004239cc TControlActionLink.virtual_010 ==== */

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


/* ==== 004239f8 TControl.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  param_1[0xb] = (int)param_1;
  param_1[10] = *(int *)(*param_1 + 0x6c);
  param_1[0x10] = 0xaa;
  piVar1 = FUN_004163b8((int *)&PTR_TPersistent_virtual_000_00414ecc,'\x01',extraout_ECX_00);
  param_1[0x16] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00424894;
  *(undefined1 *)((int)param_1 + 0x51) = 3;
  piVar1 = TSizeConstraints_virtual_00c
                     ((int *)&PTR_TSizeConstraints_virtual_000_00420394,'\x01',(int)param_1);
  param_1[0x19] = (int)piVar1;
  piVar1[7] = (int)param_1;
  piVar1[6] = (int)&LAB_004255a0;
  param_1[0x18] = -0x7ffffffb;
  *(undefined1 *)((int)param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x8a) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)((int)param_1 + 0x6a) = 0xfff4;
  param_1[0x29] = (int)&PTR_TWinControl_virtual_000_004394d0;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00423ac8 TControl.Destroy ==== */

void TControl_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  undefined4 auStack_18 [4];
  
  piVar2 = FUN_00403074(param_1,param_2);
  FUN_00441340(*(int *)PTR_DAT_00446c80,(int)piVar2);
  iVar1 = piVar2[0x24];
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x20) & 8) != 0)) {
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
  }
  else {
    FUN_00425780(iVar1,0xb039,0,piVar2);
    (**(code **)(*piVar2 + 0x60))(piVar2,0);
    FUN_004241fc((int)piVar2,auStack_18);
    FUN_00402ef0(piVar2,0xffffffff,auStack_18);
    piVar2[0x24] = 0;
  }
  FUN_00402d14((int *)piVar2[0x17]);
  piVar2[0x17] = 0;
  FUN_00402d14((int *)piVar2[0x19]);
  FUN_00402d14((int *)piVar2[0x16]);
  FUN_00408254(piVar2[0x15]);
  TComponent_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar2);
  }
  return;
}


/* ==== 00423b80 TControl.virtual_048 ==== */

undefined4 TControl_virtual_048(void)

{
  return 0;
}


/* ==== 00423b84 TControl.virtual_04c ==== */

undefined1 TControl_virtual_04c(int param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}


/* ==== 00423b88 TControl.dynamic_ffdc ==== */

undefined4 TControl_dynamic_ffdc(void)

{
  return 0;
}


/* ==== 00423b8c TControl.dynamic_fff2 ==== */

bool TControl_dynamic_fff2(int param_1)

{
  return *(int *)(param_1 + 0x24) != 0;
}


/* ==== 00423b94 TControl.dynamic_fff3 ==== */

undefined4 TControl_dynamic_fff3(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


/* ==== 00423b98 TControl.dynamic_fff9 ==== */

void TControl_dynamic_fff9(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (int *)param_1[9]) {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_virtual_000_00420fa8);
    if ((char)uVar1 != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1,param_2);
    }
  }
  return;
}


/* ==== 00423bc0 TControl.dynamic_ffd6 ==== */

undefined1 TControl_dynamic_ffd6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  HPALETTE pHVar1;
  HDC hdc;
  UINT UVar2;
  undefined1 local_13;
  HWND pHStack_10;
  
  local_13 = 0;
  if (*(char *)((int)param_1 + 0x47) != '\0') {
    pHVar1 = (HPALETTE)FUN_00402ef0(param_1,param_2,param_3);
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


/* ==== 00423ce8 FUN_00423ce8 ==== */

bool FUN_00423ce8(int param_1)

{
  return (&DAT_0044662c)[*(byte *)(param_1 + 0x4b)] != *(char *)(param_1 + 0x51);
}


/* ==== 00423d00 TControl.virtual_058 ==== */

void TControl_virtual_058(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x4d) = param_2;
  return;
}


/* ==== 00423d04 TControl.dynamic_ffd5 ==== */

void TControl_dynamic_ffd5(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    FUN_004272f0(*(int **)(param_1 + 0x24),param_1);
  }
  return;
}


/* ==== 00423d14 TControl.dynamic_ffd4 ==== */

void TControl_dynamic_ffd4(int param_1)

{
  if (*(short *)(param_1 + 0xe2) != 0) {
    (**(code **)(param_1 + 0xe0))(*(undefined4 *)(param_1 + 0xe4),param_1);
  }
  return;
}


/* ==== 00423d34 TControl.virtual_014 ==== */

void TControl_virtual_014(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar3;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 8;
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_virtual_000_00420fa8);
  uVar3 = extraout_ECX;
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,piVar1);
    uVar3 = extraout_ECX_00;
  }
  TComponent_virtual_014(param_1,param_2,uVar3);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfff7;
  if (param_1[9] != 0) {
    FUN_00425780((int)param_1,0xb009,0,0);
    FUN_00425780((int)param_1,0xb008,0,0);
    FUN_00425780((int)param_1,0xb023,0,0);
    FUN_00425780((int)param_1,0xb035,0,0);
    FUN_00425780((int)param_1,0xb03d,0,0);
  }
  return;
}


/* ==== 00423dc8 TControl.virtual_010 ==== */

void TControl_virtual_010(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  TComponent_virtual_010((int)param_1,param_2,param_3);
  if (param_3 == '\x01') {
    if (param_2 == param_1[0x1b]) {
      TLabel_SetPopupMenu(param_1,(int *)0x0);
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


/* ==== 00423ea0 TControl.virtual_07c ==== */

void TControl_virtual_07c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  cVar1 = FUN_00425c54(param_1,&param_5,&param_4);
  if ((cVar1 != '\0') &&
     ((((param_2 != param_1[0xc] || (param_3 != param_1[0xd])) || (param_5 != param_1[0xe])) ||
      (param_4 != param_1[0xf])))) {
    FUN_00424c10((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
    param_1[0xc] = param_2;
    param_1[0xd] = param_3;
    param_1[0xe] = param_5;
    param_1[0xf] = param_4;
    FUN_00423f38((int)param_1);
    (**(code **)(*param_1 + 0x74))();
    FUN_00425780((int)param_1,0x47,0,0);
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      FUN_00402ef0(param_1,extraout_EDX_00,extraout_ECX_00);
    }
  }
  return;
}


/* ==== 00423f38 FUN_00423f38 ==== */

void FUN_00423f38(int param_1)

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
      bVar2 = FUN_0042abb0(iVar3);
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


/* ==== 00424014 TControl.SetLeft ==== */

void TControl_SetLeft(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_2,param_1[0xd],param_1[0xf],param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  return;
}


/* ==== 00424034 TControl.SetTop ==== */

void TControl_SetTop(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_2,param_1[0xf],param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 2;
  return;
}


/* ==== 00424058 TControl.SetWidth ==== */

void TControl_SetWidth(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_1[0xf],param_2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
  return;
}


/* ==== 00424078 TControl.SetHeight ==== */

void TControl_SetHeight(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_2,param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
  return;
}


/* ==== 00424098 TControl.dynamic_ffd1 ==== */

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
      puStack_28 = (undefined1 *)0x4240e1;
      FUN_0040f164(*(int **)(i_val + 0x140),(int)param_1);
      uVar2 = extraout_ECX;
    }
    if (((param_2 != (int *)0x0) && (param_2 != (int *)0xffffffff)) && (param_2[0x50] != 0)) {
      puStack_28 = (undefined1 *)0x424101;
      FUN_0040eec8((int *)param_2[0x50],(int)local_8);
      uVar2 = extraout_ECX_00;
    }
  }
  *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) | 0x400;
  puStack_2c = &LAB_00424196;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  if (param_2 != (int *)0xffffffff) {
    puStack_28 = &stack0xfffffffc;
    FUN_00402ef0(local_8,param_2,local_18);
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
        FUN_00402ef0(param_2,local_8,local_18);
        uVar2 = extraout_ECX_02;
      }
    }
    if (piVar1 != (int *)0x0) {
      FUN_00402ef0(piVar1,local_8,uVar2);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xfbff;
  return;
}


/* ==== 004241a4 TControl.dynamic_ffe6 ==== */

void TControl_dynamic_ffe6(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_virtual_000_00420fa8);
  if ((char)uVar1 == '\0') {
    FUN_00424c10((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
  }
  if (param_2 == param_1[9]) {
    FUN_0042421c(param_1,param_3);
  }
  else {
    FUN_00425824((int)param_1,param_3);
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  return;
}


/* ==== 004241fc FUN_004241fc ==== */

void FUN_004241fc(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  param_2[2] = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38);
  param_2[3] = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c);
  return;
}


/* ==== 0042421c FUN_0042421c ==== */

void FUN_0042421c(int *param_1,int *param_2)

{
  (**(code **)(*param_1 + 0x7c))
            (param_1,*param_2,param_2[1],param_2[3] - param_2[1],param_2[2] - *param_2);
  return;
}


/* ==== 00424240 TControl.virtual_040 ==== */

void TControl_virtual_040(int param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  return;
}


/* ==== 004242dc TControl.virtual_03c ==== */

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
  puStack_20 = &LAB_0042435d;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x24) == 0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0xb;
    puVar3 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00405298((undefined4 *)PTR_PTR_00446ca8,(int *)&local_10);
    uVar2 = FUN_0040a974((int)&DAT_0040d94c,'\x01',local_10,in_stack_ffffffd4,puVar3);
    FUN_0040346c(uVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x3c))(*(int **)(param_1 + 0x24),param_2);
  *param_2 = *param_2 + *(int *)(param_1 + 0x30);
  param_2[1] = param_2[1] + *(int *)(param_1 + 0x34);
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_00424364;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 0042436c FUN_0042436c ==== */

void FUN_0042436c(int *param_1,int *param_2,int *param_3)

{
  int iStack_14;
  int iStack_10;
  
  (**(code **)(*param_1 + 0x3c))(param_1,&iStack_14);
  *param_3 = *param_2 + iStack_14;
  param_3[1] = param_2[1] + iStack_10;
  return;
}


/* ==== 00424398 FUN_00424398 ==== */

void FUN_00424398(int *param_1,int *param_2,int *param_3)

{
  int iStack_14;
  int iStack_10;
  
  (**(code **)(*param_1 + 0x3c))(param_1,&iStack_14);
  *param_3 = *param_2 - iStack_14;
  param_3[1] = param_2[1] - iStack_10;
  return;
}


/* ==== 004243c4 FUN_004243c4 ==== */

void FUN_004243c4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[9]) {
    uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_virtual_000_00438554);
    if ((char)uVar1 != '\0') {
      FUN_0043dd18((int)param_1,param_2);
    }
  }
  return;
}


/* ==== 004243f4 FUN_004243f4 ==== */

void FUN_004243f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((*(int *)(param_1 + 0x90) != 0) && (DAT_00447750 == 0)) &&
     ((*(ushort *)(param_1 + 0x20) & 9) == 0)) {
    local_c = param_4;
    local_14 = param_2;
    local_10 = param_3;
    local_8 = param_3;
    FUN_00425780(*(int *)(param_1 + 0x90),0xb042,param_1,&local_14);
  }
  return;
}


/* ==== 00424460 TControl.dynamic_ffed ==== */

/* WARNING: Removing unreachable block (ram,0x0042453a) */

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


/* ==== 004245c4 TControl.virtual_018 ==== */

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
  puStack_20 = &LAB_0042465a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if (((*(byte *)(param_1 + 0x10) & 0x20) != 0) &&
     (uVar5 = (*(byte *)(param_1 + 8) & 1) == 0, puVar3 = &stack0xfffffffc, (bool)uVar5)) {
    TLabel_GetCaption((int)param_1,(int *)&local_c);
    FUN_00403d48((uint *)param_1[2],local_c);
    puVar3 = puStack_1c;
    if ((bool)uVar5) {
      piVar1 = (int *)param_1[1];
      if (piVar1 != (int *)0x0) {
        uVar4 = FUN_00402e8c(piVar1,(int)&PTR_TControl_virtual_000_00420b14);
        if (((char)uVar4 != '\0') && (puVar3 = puStack_1c, (*(byte *)(piVar1 + 8) & 1) != 0))
        goto LAB_00424626;
      }
      bVar2 = true;
      goto LAB_0042462c;
    }
  }
LAB_00424626:
  puStack_1c = puVar3;
  bVar2 = false;
LAB_0042462c:
  TComponent_virtual_018(param_1,local_8);
  if (bVar2) {
    TLabel_SetCaption((int)param_1,local_8);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00424661;
  puStack_20 = (undefined1 *)0x424659;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 00424668 FUN_00424668 ==== */

void FUN_00424668(int *param_1,int *param_2)

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


/* ==== 004246b0 TControl.virtual_060 ==== */

void TControl_virtual_060(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)param_1[9]) {
    if (param_1 == param_2) {
      piVar1 = FUN_0040a9f4((int *)&DAT_0040d94c,'\x01',(undefined4 *)PTR_PTR_00446cac);
      FUN_0040346c(piVar1);
      param_3 = extraout_ECX;
    }
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_00427764((int *)param_1[9],param_1);
      param_3 = extraout_ECX_00;
    }
    if (param_2 != (int *)0x0) {
      FUN_00427690(param_2,param_1,param_3);
      FUN_00423f38((int)param_1);
    }
  }
  return;
}


/* ==== 00424740 TControl.virtual_05c ==== */

void TControl_virtual_05c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x48)) {
    *(char *)(param_1 + 0x48) = param_2;
    FUN_00425780(param_1,0xb00c,0,0);
  }
  return;
}


/* ==== 00424758 FUN_00424758 ==== */

void FUN_00424758(int param_1)

{
  FUN_00425780(param_1,0xe,0,0);
  return;
}


/* ==== 00424768 FUN_00424768 ==== */

void FUN_00424768(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00425780(param_1,0xd,param_3,param_2);
  return;
}


/* ==== 00424878 TControl.virtual_068 ==== */

void TControl_virtual_068(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4f)) {
    *(char *)(param_1 + 0x4f) = param_2;
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_00425780(param_1,0xb03c,0,0);
  }
  return;
}


/* ==== 00424894 FUN_00424894 ==== */

void FUN_00424894(int param_1)

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
  FUN_00425780(param_1,0xb00e,0,0);
  return;
}


/* ==== 004249b4 TControl.virtual_064 ==== */

void TControl_virtual_064(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x50)) &&
     (*(char *)(param_1 + 0x50) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb03d,0,0);
  }
  return;
}


/* ==== 004249d4 TControl.SetCursor ==== */

HCURSOR __stdcall TControl_SetCursor(HCURSOR hCursor)

{
  HCURSOR in_EAX;
  short in_DX;
  
  if (in_DX != (short)in_EAX[0x1a].unused) {
    *(short *)&in_EAX[0x1a].unused = in_DX;
    in_EAX = (HCURSOR)FUN_00425780((int)in_EAX,0xb00f,0,0);
  }
  return in_EAX;
}


/* ==== 004249f0 FUN_004249f0 ==== */

bool FUN_004249f0(HANDLE param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = FUN_00421c94();
  return param_1 == pvVar1;
}


/* ==== 00424a00 FUN_00424a00 ==== */

void FUN_00424a00(int *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004249f0(param_1);
  if ((bool)param_2 != bVar1) {
    if (param_2 == '\0') {
      FUN_00421cbc((int *)0x0);
    }
    else {
      FUN_00421cbc(param_1);
    }
  }
  return;
}


/* ==== 00424a28 FUN_00424a28 ==== */

void FUN_00424a28(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  return;
}


/* ==== 00424a38 FUN_00424a38 ==== */

void FUN_00424a38(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_1[9] != 0) {
    iVar2 = FUN_0040f080(*(int *)(param_1[9] + 0x134),(int)param_1);
    if (-1 < iVar2) {
      iVar1 = (*(int **)(param_1[9] + 0x134))[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (iVar2 != param_2) {
        FUN_0040ef14(*(int **)(param_1[9] + 0x134),iVar2);
        FUN_0040f0a0(*(int **)(param_1[9] + 0x134),param_2,(int)param_1);
        FUN_00424c10((int)param_1,*(char *)((int)param_1 + 0x47),'\x01');
        piVar3 = (int *)FUN_00439edc(param_1);
        if ((*(byte *)(piVar3 + 0x11) & 4) != 0) {
          FUN_00402ef0(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
        }
      }
    }
  }
  return;
}


/* ==== 00424ab8 TControl.dynamic_ffd3 ==== */

void TControl_dynamic_ffd3(int *param_1,char param_2)

{
  if (param_1[9] != 0) {
    if (param_2 == '\0') {
      FUN_00424a38(param_1,0);
    }
    else {
      FUN_00424a38(param_1,*(int *)(*(int *)(param_1[9] + 0x134) + 8) + -1);
    }
  }
  return;
}


/* ==== 00424adc TControl.virtual_044 ==== */

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
  puStack_20 = &LAB_00424b72;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x24) == 0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0xb;
    puVar3 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00405298((undefined4 *)PTR_PTR_00446ca8,(int *)&local_10);
    uVar2 = FUN_0040a974((int)&DAT_0040d94c,'\x01',local_10,in_stack_ffffffd4,puVar3);
    FUN_0040346c(uVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  hdc = (HDC)(**(code **)(**(int **)(param_1 + 0x24) + 0x44))();
  SetViewportOrgEx(hdc,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34),(LPPOINT)0x0);
  IntersectClipRect(hdc,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_00424b79;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 00424b84 FUN_00424b84 ==== */

undefined1 FUN_00424b84(void)

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
  i_val = FUN_0040f080((int)puVar1,*(int *)(in_stack_00000004 + -4));
  do {
    do {
      if (i_val < 1) {
        return 0;
      }
      i_val = i_val + -1;
      iVar2 = FUN_0040f024(puVar1,i_val);
    } while ((*(char *)(iVar2 + 0x47) == '\0') || ((*(byte *)(iVar2 + 0x40) & 0x40) == 0));
    FUN_004241fc(iVar2,&local_28.left);
    IntersectRect(&local_18,(RECT *)(in_stack_00000004 + -0x14),&local_28);
    BVar3 = EqualRect(&local_18,(RECT *)(in_stack_00000004 + -0x14));
  } while (BVar3 == 0);
  return local_5;
}


/* ==== 00424c10 FUN_00424c10 ==== */

void FUN_00424c10(int param_1,char param_2,char param_3)

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
  bVar2 = FUN_0042abb0(*(int *)(param_1 + 0x24));
  if (bVar2) {
    FUN_004241fc(local_8,&local_18.left);
    if (((param_3 == '\0') && ((*(byte *)(*(int *)(local_8 + 0x24) + 0x40) & 0x40) == 0)) &&
       (cVar3 = FUN_00424b84(), cVar3 == '\0')) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    bErase = -(uint)bVar1;
    lpRect = &local_18;
    hWnd = (HWND)FUN_0042a8b4(*(int **)(local_8 + 0x24));
    InvalidateRect(hWnd,lpRect,bErase);
    return;
  }
  return;
}


/* ==== 00424c9c TControl.virtual_074 ==== */

void TControl_virtual_074(int param_1)

{
  FUN_00424c10(param_1,*(char *)(param_1 + 0x47),(*(byte *)(param_1 + 0x40) & 0x40) != 0);
  return;
}


/* ==== 00424cac TControl.virtual_080 ==== */

void TControl_virtual_080(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x80))();
  }
  return;
}


/* ==== 00424cc0 TControl.virtual_078 ==== */

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
    bVar1 = FUN_0042abb0(param_1[9]);
    if (bVar1) {
      if ((*(byte *)(param_1 + 0x10) & 0x40) != 0) {
        pHVar2 = (HWND)FUN_0042a8b4((int *)param_1[9]);
        hdc = GetDC(pHVar2);
        uVar3 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffe4;
        IntersectClipRect(hdc,param_1[0xc],param_1[0xd],param_1[0xc] + param_1[0xe],
                          param_1[0xd] + param_1[0xf]);
        FUN_004286b4(param_1[9],hdc,(int)param_1);
        *in_FS_OFFSET = uVar3;
        pHVar2 = (HWND)FUN_0042a8b4((int *)param_1[9]);
        ReleaseDC(pHVar2,hdc);
        return;
      }
      (**(code **)(*param_1 + 0x74))();
      (**(code **)(*param_1 + 0x80))();
    }
  }
  return;
}


/* ==== 00424db8 TControl.dynamic_ffcf ==== */

undefined4 TControl_dynamic_ffcf(void)

{
  return 0;
}


/* ==== 00424dbc FUN_00424dbc ==== */

undefined4 FUN_00424dbc(int param_1)

{
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)(param_1 + 0x4f) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 00424dd4 TControl.dynamic_ffce ==== */

undefined4 TControl_dynamic_ffce(int param_1)

{
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)(param_1 + 0x4f) == '\x01')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 00424dec FUN_00424dec ==== */

undefined4 FUN_00424dec(int param_1)

{
  int iVar1;
  
  if ((PTR_DAT_00446da0[9] != '\0') &&
     (iVar1 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4f)) + -1,
     (byte)iVar1 < 2)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


/* ==== 00424e08 TControl.dynamic_ffee ==== */

void TControl_dynamic_ffee(int *param_1)

{
  FUN_00424e20(param_1,*(char *)(DAT_0044773c + 4),*(int *)(DAT_0044773c + 8));
  return;
}


/* ==== 00424e20 FUN_00424e20 ==== */

void FUN_00424e20(int *param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  tagPOINT point;
  LONG LStack_14;
  LONG LStack_10;
  
  uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_virtual_000_00438554);
  if (((char)uVar1 != '\0') && (*(char *)((int)param_1 + 0x8b) != '\x01')) {
    piVar2 = FUN_0040a9f4((int *)&DAT_0040d94c,'\x01',(undefined4 *)PTR_PTR_00446ca0);
    FUN_0040346c(piVar2);
  }
  FUN_004257b4(param_1);
  if ((DAT_0044774c == 0) || (DAT_0044774c == -1)) {
    DAT_0044774c = 0;
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      GetCursorPos(&point);
      FUN_00424398(param_1,&point.x,&LStack_14);
      point.x = LStack_14;
      point.y = LStack_10;
      uVar1 = FUN_004069e8((undefined2 *)&point);
      FUN_00425780((int)param_1,0x202,0,uVar1);
    }
    if (param_3 < 0) {
      param_3 = *(int *)(DAT_0044773c + 8);
    }
    if (DAT_0044774c != -1) {
      FUN_00422d74(param_1,param_2,param_3);
    }
  }
  return;
}


/* ==== 00424ee4 TControl.dynamic_ffe4 ==== */

void TControl_dynamic_ffe4(void)

{
  return;
}


/* ==== 00424ee8 FUN_00424ee8 ==== */

bool FUN_00424ee8(int param_1)

{
  return param_1 == DAT_0044774c;
}


/* ==== 00424ef4 TControl.dynamic_ffe3 ==== */

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


/* ==== 00424f30 TControl.dynamic_ffd0 ==== */

void TControl_dynamic_ffd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0xd2) != 0) {
    (**(code **)(param_1 + 0xd0))(*(undefined4 *)(param_1 + 0xd4),param_1,param_2,param_4,param_3);
  }
  return;
}


/* ==== 00424f5c TControl.dynamic_ffe1 ==== */

void TControl_dynamic_ffe1(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xfa) != 0) {
    (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xfc),param_1,param_2);
  }
  return;
}


/* ==== 00424f7c TControl.dynamic_ffe2 ==== */

void TControl_dynamic_ffe2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x102) != 0) {
    (**(code **)(param_1 + 0x100))(*(undefined4 *)(param_1 + 0x104),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}


/* ==== 00424fa8 TControl.dynamic_ffd7 ==== */

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
    iVar1 = FUN_00424788(param_2[0xe]);
    iVar2 = FUN_00424774(param_2[0xe]);
    dVar4 = (double)param_2[3] - (double)iVar1 * *(double *)(param_2 + 8);
    dVar5 = (double)param_2[4] - (double)iVar2 * *(double *)(param_2 + 10);
    iVar3 = FUN_004028e0();
    param_2[0x11] = iVar3;
    iVar3 = FUN_004028e0();
    param_2[0x12] = iVar3;
    param_2[0x13] = iVar1 + param_2[0x11];
    param_2[0x14] = iVar2 + param_2[0x12];
    (**(code **)(*param_2 + 0x28))(param_2,param_2 + 0x11,*param_2,dVar4,dVar5);
  }
  else {
    lpRect = (LPRECT)(param_2 + 0x11);
    hWnd = (HWND)FUN_0042a8b4((int *)param_2[1]);
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


/* ==== 00425078 TControl.dynamic_ffe9 ==== */

void TControl_dynamic_ffe9(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(param_1,param_2,param_3);
  return;
}


/* ==== 0042508c TControl.dynamic_ffe7 ==== */

void TControl_dynamic_ffe7(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0xf2) != 0) {
    (**(code **)(param_1 + 0xf0))(*(undefined4 *)(param_1 + 0xf4),param_1,param_2,param_4,param_3);
  }
  return;
}


/* ==== 004250b8 TControl.dynamic_ffe5 ==== */

void TControl_dynamic_ffe5(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xea) != 0) {
    (**(code **)(param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xec),param_1,param_2);
  }
  return;
}


/* ==== 004250d8 TControl.dynamic_ffea ==== */

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
  h_00 = (HGDIOBJ)FUN_00416d90(param_2[0x10]);
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


/* ==== 00425208 TControl.dynamic_ffe0 ==== */

void TControl_dynamic_ffe0(int *param_1,undefined4 param_2)

{
  FUN_00402ef0(param_1,param_2,0);
  return;
}


/* ==== 00425218 TControl.dynamic_ffdf ==== */

void TControl_dynamic_ffdf(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),1));
  return;
}


/* ==== 00425228 FUN_00425228 ==== */

void FUN_00425228(int *param_1,int param_2)

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
  uVar3 = FUN_00402e8c(piVar6,(int)&PTR_TBaseDragControlObject_virtual_000_004200a4);
  cVar5 = (char)uVar3;
  if ((DAT_00447754 != '\0') && (cVar5 == '\0')) {
    iVar4 = FUN_00402ea4(piVar6,(int)&PTR_TBaseDragControlObject_virtual_000_0042001c);
    piVar6 = *(int **)(iVar4 + 0x38);
  }
  FUN_00424398(param_1,piVar2,local_18);
  if (*(byte *)(param_2 + 4) < 3) {
    if (cVar5 == '\0') {
      bVar1 = *(byte *)(param_2 + 4);
      FUN_00402ef0(param_1,piVar6,local_18[0]);
    }
    else {
      bVar1 = *(byte *)(param_2 + 4);
      FUN_00402ef0((int *)piVar2[3],piVar6,local_18[0]);
    }
    *(uint *)(param_2 + 0xc) = (uint)bVar1;
  }
  else if (*(byte *)(param_2 + 4) == 3) {
    if (cVar5 == '\0') {
      FUN_00402ef0(param_1,piVar6,local_18[0]);
    }
    else {
      FUN_00402ef0((int *)piVar2[3],piVar6,local_18[0]);
    }
  }
  return;
}


/* ==== 00425318 FUN_00425318 ==== */

undefined4 FUN_00425318(int *param_1,int *param_2,int param_3,undefined1 param_4)

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
      FUN_0040e594(param_1[0xc],param_1[0xd],&local_28);
      local_20[0].x = local_28;
      local_20[0].y = local_24;
      if ((int *)param_1[9] != (int *)0x0) {
        FUN_0042436c((int *)param_1[9],&local_20[0].x,&local_28);
        local_20[0].x = local_28;
        local_20[0].y = local_24;
      }
    }
    else {
      (**(code **)(**(int **)(i_val + 0x148) + 0x14))(*(int **)(i_val + 0x148),param_1,local_20);
      UVar7 = 2;
      points = local_20;
      hWndTo = (HWND)0x0;
      pHVar1 = (HWND)FUN_0042a8b4((int *)param_1[0x24]);
      MapWindowPoints(pHVar1,hWndTo,points,UVar7);
    }
    i_val = FUN_00424774((int)param_1);
    piVar5 = local_38;
    iVar2 = FUN_00424788((int)param_1);
    FUN_0040e5c8(local_20[0].x,local_20[0].y,iVar2,piVar5,i_val);
    piVar5 = local_38;
    points = local_20;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      points->x = *piVar5;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      points = (tagPOINT *)&points[-(uint)bVar6].y;
    }
    local_9 = FUN_00425500(param_1,&local_20[0].x);
    uVar4 = extraout_var;
    goto LAB_004254f2;
  }
  i_val = FUN_004257b4(param_1);
  if (param_1[0x24] == 0) {
LAB_00425422:
    uVar4 = (undefined3)((uint)i_val >> 8);
    local_9 = '\x01';
  }
  else {
    i_val = FUN_00402ef0((int *)param_1[0x24],param_2,param_1);
    if ((char)i_val != '\0') goto LAB_00425422;
    local_9 = '\0';
    uVar4 = 0;
  }
  if (local_9 != '\0') {
    local_10 = TDragDockObject_virtual_024
                         ((int *)&PTR_TBaseDragControlObject_virtual_000_004200a4,'\x01',
                          (int)param_1);
    *in_FS_OFFSET = (int)&stack0xffffffb0;
    if ((int *)param_1[0x24] == (int *)0x0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = (HWND)FUN_0042a8b4((int *)param_1[0x24]);
    }
    FUN_004241fc((int)param_1,&local_20[0].x);
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
    pHVar1 = (HWND)FUN_0042a8b4(param_2);
    MapWindowPoints((HWND)0x0,pHVar1,points,UVar7);
    FUN_00402ef0(param_2,local_10,local_20[0].x);
    *in_FS_OFFSET = local_20[0].y;
    uVar3 = FUN_00402d14(local_10);
    return uVar3;
  }
LAB_004254f2:
  return CONCAT31(uVar4,local_9);
}


/* ==== 00425500 FUN_00425500 ==== */

char FUN_00425500(int *param_1,undefined4 *param_2)

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
    cVar1 = FUN_00402ef0((int *)param_1[0x24],0,param_1);
    if (cVar1 == '\0') {
      cVar1 = '\0';
      goto LAB_00425538;
    }
  }
  cVar1 = '\x01';
LAB_00425538:
  if (cVar1 != '\0') {
    piVar2 = FUN_00426178(param_1,local_2c);
    if (piVar2 == (int *)0x0) {
      FUN_00402ef0(param_1,0,local_2c);
    }
    else {
      uVar3 = TForm_GetClientHeight(piVar2);
      puVar5 = auStack_1c;
      uVar4 = TForm_GetClientWidth(piVar2);
      FUN_0040e5ac(0,0,uVar4,puVar5,uVar3);
      FUN_00402ef0(param_1,piVar2,auStack_1c);
    }
  }
  return cVar1;
}


/* ==== 004255ac TControl.virtual_034 ==== */

undefined1 TControl_virtual_034(void)

{
  return 1;
}


/* ==== 004255b0 TControl.virtual_030 ==== */

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


/* ==== 004255e0 FUN_004255e0 ==== */

undefined4 FUN_004255e0(int *param_1,undefined4 *param_2,undefined4 *param_3)

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


/* ==== 0042564c FUN_0042564c ==== */

undefined4 FUN_0042564c(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    FUN_004256ac(param_1,param_2,param_3);
  }
  return uVar1;
}


/* ==== 0042567c TControl.virtual_038 ==== */

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


/* ==== 004256ac FUN_004256ac ==== */

void FUN_004256ac(int *param_1,int *param_2,int *param_3)

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


/* ==== 00425780 FUN_00425780 ==== */

undefined4 FUN_00425780(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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


/* ==== 004257b4 FUN_004257b4 ==== */

int FUN_004257b4(int *param_1)

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


/* ==== 00425824 FUN_00425824 ==== */

void FUN_00425824(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x30) = *param_2;
  *(int *)(param_1 + 0x34) = param_2[1];
  *(int *)(param_1 + 0x38) = param_2[2] - *param_2;
  *(int *)(param_1 + 0x3c) = param_2[3] - param_2[1];
  FUN_00423f38(param_1);
  return;
}


/* ==== 00425848 TControl.dynamic_ffd2 ==== */

void TControl_dynamic_ffd2(void)

{
  return;
}


/* ==== 0042584c TControl.virtual_06c ==== */

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
          FUN_004243f4((int)param_1,0xb00b,param_2[1],param_2[2]);
        }
      }
      else {
        if (((*(byte *)(param_1 + 0x10) & 0x80) == 0) &&
           (((uVar1 == 0x203 || (uVar1 == 0x206)) || (uVar1 == 0x209)))) {
          *param_2 = *param_2 - 2;
        }
        uVar1 = *param_2;
        if (uVar1 == 0x200) {
          FUN_00442b2c(*(int *)PTR_DAT_00446c80,param_1,(int)param_2);
        }
        else {
          if (uVar1 != 0x201) {
            if (uVar1 == 0x202) {
              *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffe;
              goto LAB_00425957;
            }
            if (uVar1 != 0x203) goto LAB_00425957;
          }
          if (*(char *)((int)param_1 + 0x4d) == '\x01') {
            FUN_00402ef0(param_1,param_2,param_3);
            return;
          }
          *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 1;
        }
      }
      goto LAB_00425957;
    }
    piVar3 = FUN_00439eb4(param_1);
    if (piVar3 == (int *)0x0) goto LAB_00425957;
    cVar2 = (**(code **)(*piVar3 + 0xdc))(piVar3,param_1,param_2);
  }
  else {
    piVar3 = FUN_00439eb4(param_1);
    if ((piVar3 == (int *)0x0) || (piVar3[0x8e] == 0)) goto LAB_00425957;
    cVar2 = (**(code **)(*(int *)piVar3[0x8e] + 0x24))((int *)piVar3[0x8e],param_1,param_2);
  }
  if (cVar2 != '\0') {
    return;
  }
LAB_00425957:
  (**(code **)(*param_1 + -0x14))(param_1,param_2);
  return;
}


/* ==== 00425964 TControl.DefaultHandler ==== */

void TControl_DefaultHandler(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_2;
  if (iVar2 == 0xc) {
    uVar3 = FUN_00408228((char *)param_2[2]);
    FUN_00408254(*(int *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    FUN_004243f4(param_1,*param_2,param_2[1],param_2[2]);
  }
  else if (iVar2 == 0xd) {
    pcVar1 = *(char **)(param_1 + 0x54);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    pcVar1 = FUN_004080b0((char *)param_2[2],pcVar1,param_2[1] + -1);
    iVar2 = FUN_00408020(pcVar1);
    param_2[3] = iVar2;
  }
  else if (iVar2 == 0xe) {
    if (*(char **)(param_1 + 0x54) == (char *)0x0) {
      param_2[3] = 0;
    }
    else {
      iVar2 = FUN_00408020(*(char **)(param_1 + 0x54));
      param_2[3] = iVar2;
    }
  }
  return;
}


/* ==== 00425a0c FUN_00425a0c ==== */

undefined4 FUN_00425a0c(void)

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


/* ==== 00425a3c TControl.virtual_004 ==== */

void TControl_virtual_004(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = &LAB_004259ec;
  puVar2 = &LAB_00425a00;
  uVar4 = param_1;
  uVar1 = FUN_00425a0c();
  (**(code **)(*param_2 + 4))(param_2,"IsControl",uVar1,puVar2,param_1,puVar3,uVar4);
  return;
}


/* ==== 00425a8c TControl.dynamic_ffec ==== */

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


/* ==== 00425af8 TControl.dynamic_ffeb ==== */

void TControl_dynamic_ffeb(int param_1)

{
  if (*(short *)(param_1 + 0x112) != 0) {
    (**(code **)(param_1 + 0x110))(*(undefined4 *)(param_1 + 0x114),param_1);
  }
  return;
}


/* ==== 00425b18 TControl.dynamic_ffda ==== */

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


/* ==== 00425b50 FUN_00425b50 ==== */

void FUN_00425b50(int *param_1,int param_2,undefined1 param_3,byte param_4)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    bVar1 = FUN_00439d68(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
    FUN_00402ef0(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_3),
                 CONCAT31(extraout_var,bVar1 | param_4));
  }
  return;
}


/* ==== 00425b94 TControl.WMLButtonDown ==== */

void TControl_WMLButtonDown(int *param_1,int param_2)

{
  FUN_004243c4(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_00424a00(param_1,'\x01');
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 2;
  }
  FUN_00425b50(param_1,param_2,0,0);
  return;
}


/* ==== 00425be0 TControl.WMNCLButtonDown ==== */

void TControl_WMNCLButtonDown(int *param_1,undefined4 param_2)

{
  FUN_004243c4(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00425bfc TControl.WMLButtonDblClk ==== */

void TControl_WMLButtonDblClk(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  
  FUN_004243c4(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_00424a00(param_1,'\x01');
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    FUN_00402ef0(param_1,uVar2,uVar1);
  }
  FUN_00425b50(param_1,param_2,0,0x40);
  return;
}


/* ==== 00425c50 TControl.dynamic_ffdb ==== */

undefined4 TControl_dynamic_ffdb(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}


/* ==== 00425c54 FUN_00425c54 ==== */

char FUN_00425c54(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = *param_2;
  local_1c = *param_3;
  uVar1 = FUN_0042564c(param_1,&local_20,&local_1c);
  if ((char)uVar1 != '\0') {
    local_18 = local_20;
    local_14 = local_1c;
    if ((((char)param_1[0x13] == '\0') ||
        (((uVar1 = FUN_004255e0(param_1,&local_18,&local_14), (char)uVar1 != '\0' &&
          (local_18 == local_20)) && (local_14 == local_1c)))) ||
       (uVar1 = FUN_0042564c(param_1,&local_18,&local_14), (char)uVar1 != '\0')) {
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


/* ==== 00425cf0 TControl.WMRButtonDown ==== */

void TControl_WMRButtonDown(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_00425b50(param_1,param_2,1,0);
  return;
}


/* ==== 00425d18 TControl.WMRButtonDblClk ==== */

void TControl_WMRButtonDblClk(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_00425b50(param_1,param_2,1,0x40);
  return;
}


/* ==== 00425d40 TControl.WMMButtonDown ==== */

void TControl_WMMButtonDown(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_00425b50(param_1,param_2,2,0);
  return;
}


/* ==== 00425d68 TControl.WMMButtonDblClk ==== */

void TControl_WMMButtonDblClk(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_00425b50(param_1,param_2,2,0x40);
  return;
}


/* ==== 00425d90 TControl.dynamic_ffd9 ==== */

void TControl_dynamic_ffd9(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0xc2) != 0) {
    (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_1,param_2,param_4,param_3);
  }
  return;
}


/* ==== 00425dc0 TControl.WMMouseMove ==== */

void TControl_WMMouseMove(int *param_1,int param_2)

{
  byte bVar1;
  undefined3 extraout_var;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    bVar1 = FUN_00439d68(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
    FUN_00402ef0(param_1,CONCAT31(extraout_var,bVar1),(int)*(short *)(param_2 + 8));
  }
  return;
}


/* ==== 00425dfc TControl.dynamic_ffd8 ==== */

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


/* ==== 00425e34 FUN_00425e34 ==== */

void FUN_00425e34(int *param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    bVar1 = FUN_00439d68(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
    FUN_00402ef0(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_3),
                 CONCAT31(extraout_var,bVar1));
  }
  return;
}


/* ==== 00425e70 TControl.WMLButtonUp ==== */

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
    FUN_00424a00(param_1,'\0');
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffd;
    FUN_004069d4(*(undefined4 *)(param_2 + 8),&LStack_24);
    (**(code **)(*param_1 + 0x40))(param_1,&RStack_1c);
    pt.y = LStack_20;
    pt.x = LStack_24;
    BVar1 = PtInRect(&RStack_1c,pt);
    if (BVar1 != 0) {
      FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    }
  }
  FUN_00425e34(param_1,param_2,0);
  return;
}


/* ==== 00425ee8 TControl.WMRButtonUp ==== */

void TControl_WMRButtonUp(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_00425e34(param_1,param_2,1);
  return;
}


/* ==== 00425f08 TControl.WMMButtonUp ==== */

void TControl_WMMButtonUp(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_00425e34(param_1,param_2,2);
  return;
}


/* ==== 00425f28 TControl.message_001f ==== */

void TControl_message_001f(int *param_1)

{
  bool bVar1;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_004249f0(param_1);
  if (bVar1) {
    FUN_00424a00(param_1,'\0');
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      FUN_00425780((int)param_1,0x202,0,0xffffffff);
      return;
    }
  }
  else {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffe;
  }
  return;
}


/* ==== 00425f68 TControl.WMWindowPosChanged ==== */

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
      FUN_004257b4(param_1);
    }
  }
  return;
}


/* ==== 00426018 TControl.CMVisibleChanged ==== */

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
    FUN_00424c10(param_1,'\x01',cVar1);
  }
  return;
}


/* ==== 00426040 TControl.CMEnabledChanged ==== */

void TControl_CMEnabledChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00426048 TControl.CMFontChanged ==== */

void TControl_CMFontChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00426050 TControl.CMColorChanged ==== */

void TControl_CMColorChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00426058 TControl.CMParentColorChanged ==== */

void TControl_CMParentColorChanged(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x4a) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TLabel_SetColor(param_1,*(int *)(*(int *)(param_1 + 0x24) + 0x60));
    }
    else {
      TLabel_SetColor(param_1,*(int *)(param_2 + 8));
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return;
}


/* ==== 00426088 TControl.CMParentBiDiModeChanged ==== */

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


/* ==== 004260a8 TControl.CMBiDiModeChanged ==== */

void TControl_CMBiDiModeChanged(int *param_1,int param_2)

{
  if ((PTR_DAT_00446da0[9] != '\0') && (*(int *)(param_2 + 4) == 0)) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 004260c0 TControl.CMParentShowHintChanged ==== */

void TControl_CMParentShowHintChanged(int param_1)

{
  if (*(char *)(param_1 + 0x8a) != '\0') {
    TLabel_SetShowHint(param_1,*(char *)(*(int *)(param_1 + 0x24) + 0x89));
    *(undefined1 *)(param_1 + 0x8a) = 1;
  }
  return;
}


/* ==== 004260e8 TControl.CMParentFontChanged ==== */

void TControl_CMParentFontChanged(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TLabel_SetFont(param_1);
    }
    else {
      TLabel_SetFont(param_1);
    }
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  return;
}


/* ==== 00426118 TControl.CMSysFontChanged ==== */

void TControl_CMSysFontChanged(int param_1)

{
  if (*(char *)(param_1 + 0x46) != '\0') {
    TLabel_SetFont(param_1);
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  return;
}


/* ==== 00426138 TControl.CMHitTest ==== */

void TControl_CMHitTest(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}


/* ==== 00426140 TControl.CMMouseEnter ==== */

void TControl_CMMouseEnter(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00425780(*(int *)(param_1 + 0x24),0xb013,0,param_1);
  }
  return;
}


/* ==== 00426158 TControl.CMMouseLeave ==== */

void TControl_CMMouseLeave(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00425780(*(int *)(param_1 + 0x24),0xb014,0,param_1);
  }
  return;
}


/* ==== 00426170 TControl.CMDesignHitTest ==== */

void TControl_CMDesignHitTest(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


/* ==== 00426178 FUN_00426178 ==== */

int * FUN_00426178(int *param_1,undefined4 *param_2)

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
    iVar1 = FUN_00402c5c(param_1);
    if (i_val != iVar1) {
      i_val = (**(code **)(*param_1 + 0x54))();
      piVar2 = (int *)(**(code **)(i_val + 0x2c))(i_val,1,*(undefined4 *)PTR_DAT_00446c80);
      TControl_SetTop(piVar2,local_1c[1]);
      TControl_SetLeft(piVar2,local_1c[0]);
      FUN_00424270(piVar2,local_1c[2] - local_1c[0]);
      FUN_004242b4(piVar2,local_1c[3] - local_1c[1]);
    }
  }
  return piVar2;
}


/* ==== 00426200 FUN_00426200 ==== */

void FUN_00426200(void)

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
  FUN_0040e594(*(undefined4 *)(*piVar3 + 0x30),*(undefined4 *)(*piVar3 + 0x34),local_14);
  FUN_0042436c(*(int **)(*piVar3 + 0x24),local_14,&local_c);
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 8);
  piVar2 = *(int **)(*piVar3 + 0x24);
  FUN_0040e5c8((piVar2[0xc] + *(int *)(iVar1 + 0x44)) - local_c,
               (piVar2[0xd] + *(int *)(iVar1 + 0x48)) - local_8,
               ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x44)) + piVar2[0xe]) -
               *(int *)(*piVar3 + 0x38),local_24,
               ((*(int *)(iVar1 + 0x50) - *(int *)(iVar1 + 0x48)) + piVar2[0xf]) -
               *(int *)(*piVar3 + 0x3c));
  FUN_0042421c(piVar2,local_24);
  return;
}


/* ==== 0042628c TControl.CMFloatChanged ==== */

void TControl_CMFloatChanged(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if ((cVar1 == '\0') || (param_1[9] == 0)) {
    piVar2 = FUN_00426178(param_1,(undefined4 *)(*(int *)(param_2 + 8) + 0x44));
    if (piVar2 != (int *)0x0) {
      *(int **)(*(int *)(param_2 + 8) + 4) = piVar2;
      iVar3 = FUN_0042a8b4(piVar2);
      *(int *)(*(int *)(param_2 + 8) + 8) = iVar3;
    }
  }
  else {
    FUN_00426200();
  }
  return;
}


/* ==== 004262ec TControl.dynamic_fff0 ==== */

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
  puStack_20 = &LAB_004263d1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_virtual_000_0042f24c);
  if ((char)uVar2 == '\0') goto LAB_004263b6;
  if (param_3 == '\0') {
LAB_0042634a:
    TLabel_SetCaption((int)param_1,(uint *)param_2[0x15]);
  }
  else {
    TLabel_GetCaption((int)param_1,&local_8);
    uVar4 = local_8 == 0;
    if ((bool)uVar4) goto LAB_0042634a;
    TLabel_GetCaption((int)param_1,(int *)&local_c);
    FUN_00403d48(local_c,(uint *)param_1[2]);
    if ((bool)uVar4) goto LAB_0042634a;
  }
  if (param_3 == '\0') {
LAB_00426363:
    (**(code **)(*param_1 + 0x5c))(param_1,*(undefined1 *)((int)param_2 + 0x59));
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
    if (cVar1 == '\x01') goto LAB_00426363;
  }
  if ((param_3 == '\0') || (param_1[0x1c] == 0)) {
    FUN_00403a0c(param_1 + 0x1c,(undefined4 *)param_2[0x18]);
    uVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
  }
  if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x47) == '\x01')) {
    TLabel_SetVisible(param_1,CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)((int)param_2 + 0x6a)
                                      ),uVar2);
  }
  if ((param_3 == '\0') || (*(short *)((int)param_1 + 0x10a) == 0)) {
    param_1[0x42] = param_2[0xc];
    param_1[0x43] = param_2[0xd];
  }
LAB_004263b6:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004263d8;
  puStack_20 = (undefined1 *)0x4263d0;
  FUN_004039dc((int *)&local_c,2);
  return;
}


/* ==== 00426404 TControl.dynamic_ffde ==== */

undefined ** TControl_dynamic_ffde(void)

{
  return &PTR_TControlActionLink_virtual_000_004201d8;
}


/* ==== 0042642c FUN_0042642c ==== */

undefined4 FUN_0042642c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x28))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0042644c FUN_0042644c ==== */

undefined4 FUN_0042644c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x30))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0042646c FUN_0042646c ==== */

undefined4 FUN_0042646c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x3c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0042648c FUN_0042648c ==== */

undefined4 FUN_0042648c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 8))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 004264ac TControl.virtual_00c ==== */

void TControl_virtual_00c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  TComponent_virtual_00c((int)param_1);
  iVar1 = TButton_GetAction((int)param_1);
  if (iVar1 != 0) {
    uVar2 = TButton_GetAction((int)param_1);
    FUN_00402ef0(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  FUN_00423f38((int)param_1);
  return;
}


/* ==== 004264e4 TControl.virtual_000 ==== */

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
  puStack_1c = &LAB_0042657d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_virtual_000_0042f24c);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_000(param_1,param_2);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x4c))();
    FUN_0042fb40(param_2,uVar1);
    THintAction_SetHint(param_2,(uint *)param_1[0x1c]);
    TLabel_GetCaption((int)param_1,(int *)&local_8);
    FUN_0042fa80(param_2,local_8);
    FUN_0042fd0c(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x47)));
    (**(code **)(*param_2 + 0x34))();
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00426584;
  puStack_1c = (undefined1 *)0x42657c;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0042658c FUN_0042658c ==== */

int FUN_0042658c(double *param_1,int param_2)

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


/* ==== 004265c8 TControl.dynamic_ffdd ==== */

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
      iVar1 = FUN_0042658c(&local_3c,3);
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


/* ==== 00426678 TControl.virtual_050 ==== */

undefined4 TControl_virtual_050(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x24] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    uVar2 = FUN_00402e8c((int *)param_1[0x24],iVar1);
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 004266a4 TControl.virtual_054 ==== */

undefined4 TControl_virtual_054(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}


/* ==== 004266ac TControl.dynamic_ffef ==== */

void TControl_dynamic_ffef(int *param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_1[0xf],param_1[0xe]);
  }
  return;
}


/* ==== 004266c8 FUN_004266c8 ==== */

uint FUN_004266c8(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00402ef0(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    if ((param_2 & 2) == 2) {
      param_2 = param_2 & 0xfffffffd;
    }
    else if ((param_2 & 1) != 1) {
      param_2 = param_2 | 2;
    }
  }
  uVar2 = FUN_00426708((int)param_1);
  return param_2 | uVar2;
}


/* ==== 00426708 FUN_00426708 ==== */

undefined4 FUN_00426708(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00424dbc(param_1);
  if ((char)uVar1 != '\0') {
    return 0x20000;
  }
  return 0;
}


/* ==== 00426724 TControl.virtual_070 ==== */

void TControl_virtual_070(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x1c))();
  }
  return;
}


/* ==== 00426734 TControl.CMHintShow ==== */

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


/* ==== 00426760 TControl.WMContextMenu ==== */

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
    FUN_004069d4(*(undefined4 *)(param_2 + 8),&local_38);
    if (local_38 < 0) {
      local_30 = local_38;
      local_2c = local_34;
    }
    else {
      FUN_00424398(param_1,&local_38,&local_30);
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
    FUN_00402ef0(param_1,&local_30,local_28);
    *(uint *)(param_2 + 0xc) = (uint)local_28[0];
    if (local_28[0] == 0) {
      piVar2 = (int *)FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
      if ((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x51) != '\0')) {
        FUN_004243c4(param_1,0);
        piVar2[0x15] = (int)param_1;
        if (local_38 < 0) {
          FUN_0040e594(0,0,aiStack_14);
          FUN_0042436c(param_1,aiStack_14,&local_38);
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


/* ==== 00426874 TControl.dynamic_ffe8 ==== */

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


/* ==== 004268a8 TWinControlActionLink.virtual_000 ==== */

void TWinControlActionLink_virtual_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  TControlActionLink_virtual_000(param_1,param_2);
  uVar1 = FUN_00402ea4(param_2,(int)&PTR_TWinControl_virtual_000_00420fa8);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


/* ==== 004268cc TWinControlActionLink.virtual_02c ==== */

undefined4 TWinControlActionLink_virtual_02c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_02c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (*(int *)(iVar2 + 0x5c) == *(int *)(*(int *)(param_1 + 0x20) + 0x150)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 0x5c) >> 8),1);
    }
  }
  return 0;
}


/* ==== 00426900 TWinControlActionLink.virtual_04c ==== */

void TWinControlActionLink_virtual_04c(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[8] + 0x150) = param_2;
  }
  return;
}


/* ==== 00426920 TWinControl.virtual_02c ==== */

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
    puStackY_28 = (undefined1 *)0x426939;
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStackY_2c = &LAB_00426a12;
  uStackY_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_30;
  puStackY_28 = &stack0xfffffffc;
  TControl_virtual_02c(param_1,'\0',param_3);
  puVar1 = FUN_00439bd0();
  param_1[0x57] = (int)puVar1;
  piVar2 = FUN_00416bb0((int *)&PTR_TPersistent_virtual_000_00415148,'\x01',extraout_ECX_00);
  param_1[0x4c] = (int)piVar2;
  TBrush_SetColor(piVar2,param_1[0x18]);
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5c] = -1;
  *(undefined1 *)(param_1 + 0x55) = 3;
  if (*(short *)(PTR_DAT_00446da0 + 4) == 0x11) {
    FUN_004039b8(param_1 + 0x56);
  }
  else {
    FUN_004405c8(*(int *)PTR_DAT_00446d84,(int *)&local_c,extraout_ECX_01);
    FUN_00403a0c(param_1 + 0x56,local_c);
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0xf;
  *(undefined1 *)((int)param_1 + 0x123) = 2;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 1;
  *in_FS_OFFSET = uStackY_30;
  puStackY_28 = &LAB_00426a19;
  puStackY_2c = (undefined1 *)0x426a11;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 00426a3c TWinControl.Destroy ==== */

void TWinControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00413c68((int)piVar1);
  if ((char)piVar1[0x51] != '\0') {
    *(undefined1 *)(piVar1 + 0x51) = 0;
    FUN_00422708((int)piVar1,'\0',extraout_ECX);
  }
  FUN_004052f0(piVar1 + 0x52);
  FUN_00402d14((int *)piVar1[0x50]);
  if (piVar1[9] != 0) {
    FUN_004275dc(piVar1,'\x01');
  }
  if (piVar1[0x53] != 0) {
    (**(code **)(*piVar1 + 0x9c))();
  }
  iVar2 = FUN_0042781c((int)piVar1);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_004277e0((int)piVar1,iVar2 + -1);
    FUN_00427648((int)piVar1,piVar3);
    (**(code **)(*piVar3 + -4))(piVar3,1);
    iVar2 = FUN_0042781c((int)piVar1);
  }
  FUN_00402d14((int *)piVar1[0x4c]);
  if (piVar1[0x57] != 0) {
    FUN_00439c68(piVar1[0x57]);
  }
  TControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00426b10 FUN_00426b10 ==== */

void FUN_00426b10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int k;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    puStack_1c = (undefined1 *)0x426b37;
    piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
    puStack_20 = &LAB_00426bd4;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    i_val = *(int *)(*(int *)(param_1 + 0x180) + 8);
    puStack_1c = &stack0xfffffffc;
    FUN_0040f1c0(piVar2,i_val);
    if (-1 < i_val + -1) {
      j = 0;
      k = i_val;
      do {
        iVar3 = FUN_0040f024(*(undefined4 **)(param_1 + 0x180),j);
        iVar1 = *(int *)(iVar3 + 0x170);
        if ((-1 < iVar1) && (iVar1 < i_val)) {
          FUN_0040f118(piVar2,iVar1,iVar3);
        }
        j = j + 1;
        k = k + -1;
      } while (k != 0);
    }
    if (-1 < i_val + -1) {
      k = 0;
      do {
        j = FUN_0040f024(piVar2,k);
        if (j != 0) {
          FUN_0042aa6c(j,(short)k);
        }
        k = k + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x426bdb;
    puStack_20 = (undefined1 *)0x426bd3;
    FUN_00402d14(piVar2);
    return;
  }
  return;
}


/* ==== 00426be4 TWinControl.virtual_014 ==== */

void TWinControl_virtual_014(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x426bf6;
  FUN_00427384((int)param_1);
  puStack_14 = &LAB_00426c24;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  TControl_virtual_014(param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00426c2b;
  puStack_14 = (undefined1 *)0x426c23;
  FUN_0042738c((int)param_1);
  return;
}


/* ==== 00426c5c TWinControl.virtual_084 ==== */

void TWinControl_virtual_084(void)

{
  return;
}


/* ==== 00426c60 FUN_00426c60 ==== */

uint FUN_00426c60(int param_1,int param_2,char param_3)

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


/* ==== 00426cc0 FUN_00426cc0 ==== */

void FUN_00426cc0(int *param_1,byte param_2,undefined4 param_3,int param_4)

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
  if ((param_2 == 0) || ((&DAT_0044662c)[param_2] != *(char *)((int)param_1 + 0x51))) {
    if ((param_1[0x20] != 0) && (param_1[0x21] != 0)) {
      iVar4 = param_1[0xc];
      iVar6 = param_1[0xd];
      local_10 = param_1[0xe];
      local_14 = param_1[0xf];
      bVar2 = FUN_0042abb0(param_1[9]);
      if (bVar2) {
        (**(code **)(*(int *)local_8[9] + 0x40))((int *)local_8[9],local_2c);
        numerator = local_24;
        numerator_2 = local_20;
      }
      else {
        FUN_0040e594(*(undefined4 *)(local_8[9] + 0x38),*(undefined4 *)(local_8[9] + 0x3c),
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


/* ==== 0042705c FUN_0042705c ==== */

void FUN_0042705c(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
    FUN_0040eec8(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc));
  }
  i_val = FUN_0042781c(*(int *)(param_4 + -0x10));
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_004277e0(*(int *)(param_4 + -0x10),j);
      if (((param_1 == *(byte *)(iVar1 + 0x4b)) &&
          ((((param_1 == 0 || (*(char *)(iVar1 + 0x47) != '\0')) ||
            ((*(uint *)(iVar1 + 0x40) & 0x401) == 0x401)) ||
           (((*(byte *)(iVar1 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar1 + 0x41) & 4) == 0)))))) &&
         (iVar1 != *(int *)(param_4 + -0xc))) {
        for (k = 0; k < *(int *)(*(int *)(param_4 + -8) + 8); k = k + 1) {
          iVar2 = FUN_0040f024(*(undefined4 **)(param_4 + -8),k);
          uVar3 = FUN_00426c60(iVar1,iVar2,param_1);
          if ((char)uVar3 != '\0') break;
        }
        FUN_0040f0a0(*(int **)(param_4 + -8),k,iVar1);
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
      piVar4 = (int *)FUN_0040f024(*(undefined4 **)(param_4 + -8),j);
      FUN_00426cc0(piVar4,param_1,extraout_ECX,iVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 004271b0 FUN_004271b0 ==== */

undefined4 FUN_004271b0(void)

{
  int i_val;
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 uVar2;
  int *piVar3;
  int in_stack_00000004;
  
  piVar3 = (int *)(in_stack_00000004 + -0x10);
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  i_val = FUN_0042781c(*piVar3);
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      iVar1 = FUN_004277e0(*piVar3,i_val);
      if (*(char *)(iVar1 + 0x4b) != '\0') {
        return uVar2;
      }
      iVar1 = FUN_004277e0(*piVar3,i_val);
      if (*(char *)(iVar1 + 0x51) != '\x03') {
        return uVar2;
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return 0;
}


/* ==== 00427204 TWinControl.virtual_088 ==== */

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
    puStack_1c = (undefined1 *)0x427248;
    (**(code **)(*(int *)param_1[0x52] + 0x2c))((int *)param_1[0x52],0);
  }
  puStack_20 = (undefined1 *)0x42724e;
  puStack_1c = &stack0xfffffffc;
  uVar2 = FUN_004271b0();
  puVar1 = puStack_1c;
  if ((char)uVar2 != '\0') {
    puStack_1c = (undefined1 *)0x427261;
    (**(code **)(*param_1 + 0x84))(param_1,param_3);
    puStack_1c = (undefined1 *)0x42726d;
    piVar3 = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX);
    puStack_20 = &LAB_004272ca;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_0042705c(1,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
    FUN_0042705c(2,extraout_EDX_01,puVar4,(int)&stack0xfffffffc);
    FUN_0042705c(3,extraout_EDX_02,puVar5,(int)&stack0xfffffffc);
    FUN_0042705c(4,extraout_EDX_03,puVar6,(int)&stack0xfffffffc);
    FUN_0042705c(5,extraout_EDX_04,puVar7,(int)&stack0xfffffffc);
    FUN_0042705c(0,extraout_EDX_05,puVar8,(int)&stack0xfffffffc);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4272d1;
    puStack_20 = (undefined1 *)0x4272c9;
    FUN_00402d14(piVar3);
    return;
  }
  if ((char)param_1[0x5a] != '\0') {
    puStack_1c = (undefined1 *)0x4272e9;
    FUN_00402ef0(param_1,extraout_EDX,puVar1);
  }
  return;
}


/* ==== 004272f0 FUN_004272f0 ==== */

void FUN_004272f0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  int *local_8;
  
  puStack_20 = (undefined1 *)0x427304;
  local_8 = param_1;
  bVar1 = FUN_0042abb0((int)param_1);
  if ((bVar1) && ((*(byte *)(local_8 + 8) & 8) == 0)) {
    if ((short)local_8[0x48] == 0) {
      puStack_20 = (undefined1 *)0x427330;
      FUN_00427384((int)local_8);
      puStack_24 = &LAB_00427377;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x40))(local_8,local_18);
      (**(code **)(*local_8 + 0x88))(local_8,param_2,local_18);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x42737e;
      *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xffef;
      puStack_24 = (undefined1 *)0x427376;
      FUN_0042738c((int)local_8);
      return;
    }
    *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) | 0x10;
  }
  return;
}


/* ==== 00427384 FUN_00427384 ==== */

void FUN_00427384(int param_1)

{
  *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + 1;
  return;
}


/* ==== 0042738c FUN_0042738c ==== */

void FUN_0042738c(int param_1)

{
  *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + -1;
  if ((*(short *)(param_1 + 0x120) == 0) && ((*(byte *)(param_1 + 0x44) & 0x10) != 0)) {
    FUN_004273ac((int *)param_1);
  }
  return;
}


/* ==== 004273ac FUN_004273ac ==== */

void FUN_004273ac(int *param_1)

{
  FUN_004272f0(param_1,0);
  return;
}


/* ==== 004273b4 TWinControl.dynamic_ffc7 ==== */

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
  
  puStack_20 = (undefined1 *)0x4273cc;
  piVar1 = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
  puStack_24 = &LAB_00427479;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  i_val = TForm_GetClientWidth(param_1);
  j = FUN_0042781c((int)param_1);
  if (-1 < j + -1) {
    k = 0;
    do {
      piVar2 = (int *)FUN_004277e0((int)param_1,k);
      if (piVar2[1] == param_1[1]) {
        iVar3 = FUN_004277e0((int)param_1,k);
        FUN_0040eec8(piVar1,iVar3);
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
      k = FUN_0040f024(piVar1,j);
      FUN_00425780(k,0xb03e,0,uVar4);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00427480;
  puStack_24 = (undefined1 *)0x427478;
  FUN_00402d14(piVar1);
  return;
}


/* ==== 00427488 TWinControl.dynamic_ffba ==== */

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
  
  puStack_20 = (undefined1 *)0x42749f;
  i_val = FUN_0042781c((int)param_1);
  if (i_val != 0) {
    puStack_20 = (undefined1 *)0x4274b3;
    piVar1 = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX);
    puStack_20 = (undefined1 *)0x4274be;
    FUN_00427384((int)param_1);
    puStack_24 = &LAB_0042756f;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    i_val = FUN_0042781c((int)param_1);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX;
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar2 = FUN_004277e0((int)param_1,j);
        uVar4 = extraout_ECX_01;
        uVar5 = extraout_EDX_00;
        if ((byte)(*(char *)(iVar2 + 0x4b) - 3U) < 2) {
          iVar2 = FUN_004277e0((int)param_1,j);
          FUN_0040eec8(piVar1,iVar2);
          uVar4 = extraout_ECX_02;
          uVar5 = extraout_EDX_01;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_00402ef0(param_1,uVar5,uVar4);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &DAT_00427576;
    while (0 < piVar1[2]) {
      puStack_24 = (undefined1 *)0x42752f;
      piVar3 = (int *)FUN_0040f024(piVar1,piVar1[2] + -1);
      uVar6 = (undefined3)((uint)extraout_EDX_02 >> 8);
      if (*(char *)((int)piVar3 + 0x4b) == '\x03') {
        puStack_24 = (undefined1 *)0x42753c;
        TLabel_SetAlign(piVar3,CONCAT31(uVar6,4),extraout_ECX_03);
      }
      else {
        puStack_24 = (undefined1 *)0x427545;
        TLabel_SetAlign(piVar3,CONCAT31(uVar6,3),extraout_ECX_03);
      }
      puStack_24 = (undefined1 *)0x427554;
      FUN_0040ef14(piVar1,piVar1[2] + -1);
    }
    puStack_24 = (undefined1 *)0x427566;
    FUN_00402d14(piVar1);
    puStack_24 = (undefined1 *)0x42756e;
    FUN_0042738c((int)param_1);
    return;
  }
  return;
}


/* ==== 004275c8 thunk_FUN_004275cd ==== */

bool thunk_FUN_004275cd(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}


/* ==== 004275cd FUN_004275cd ==== */

bool FUN_004275cd(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}


/* ==== 004275dc FUN_004275dc ==== */

void FUN_004275dc(int *param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = FUN_00439eb4(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_0043d964(piVar1,(int)param_1,param_2);
  }
  return;
}


/* ==== 004275fc FUN_004275fc ==== */

void FUN_004275fc(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_virtual_000_00420fa8);
    if ((char)uVar1 == '\0') {
      FUN_004232a0((int *)(param_1 + 0x134),(int)param_2,extraout_ECX);
    }
    else {
      FUN_004232a0((int *)(param_1 + 0x180),(int)param_2,extraout_ECX);
      FUN_004232a0((int *)(param_1 + 0x16c),(int)param_2,extraout_ECX_00);
    }
    param_2[9] = param_1;
  }
  return;
}


/* ==== 00427648 FUN_00427648 ==== */

void FUN_00427648(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_virtual_000_00420fa8);
  if ((char)uVar1 == '\0') {
    FUN_004232c8((int *)(param_1 + 0x134),(int)param_2);
  }
  else {
    FUN_004232c8((int *)(param_1 + 0x16c),(int)param_2);
    FUN_004232c8((int *)(param_1 + 0x180),(int)param_2);
  }
  param_2[9] = 0;
  return;
}


/* ==== 00427690 FUN_00427690 ==== */

void FUN_00427690(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00402ef0(param_2,param_1,param_3);
  FUN_00425780((int)param_1,0xb02c,param_2,1);
  FUN_004275fc((int)param_1,param_2);
  if ((*(byte *)(param_2 + 0x11) & 8) == 0) {
    FUN_00425780((int)param_2,0xb009,0,0);
    FUN_00425780((int)param_2,0xb008,0,0);
    FUN_00425780((int)param_2,0xb023,0,0);
    FUN_00425780((int)param_2,0xb03d,0,0);
    uVar2 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_virtual_000_00420fa8);
    if ((char)uVar2 == '\0') {
      bVar1 = FUN_0042abb0((int)param_1);
      if (bVar1) {
        (**(code **)(*param_2 + 0x74))();
      }
    }
    else {
      FUN_00425780((int)param_2,0xb011,0,0);
      FUN_00427fb4(param_1);
    }
    FUN_004272f0(param_1,param_2);
  }
  FUN_00425780((int)param_1,0xb036,param_2,1);
  return;
}


/* ==== 00427764 FUN_00427764 ==== */

void FUN_00427764(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00425780((int)param_1,0xb036,param_2,0);
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_virtual_000_00420fa8);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_0042abb0((int)param_1);
    if (bVar1) {
      FUN_00424c10((int)param_2,*(char *)((int)param_2 + 0x47),'\0');
    }
  }
  else {
    FUN_004275dc(param_2,'\x01');
    FUN_00427e1c(param_2);
  }
  FUN_00427648((int)param_1,param_2);
  FUN_00425780((int)param_1,0xb02c,param_2,0);
  FUN_004273ac(param_1);
  return;
}


/* ==== 004277e0 FUN_004277e0 ==== */

void FUN_004277e0(int param_1,int param_2)

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
    FUN_0040f024(puVar1,param_2);
  }
  else {
    FUN_0040f024(*(undefined4 **)(param_1 + 0x180),param_2 - iVar2);
  }
  return;
}


/* ==== 0042781c FUN_0042781c ==== */

int FUN_0042781c(int param_1)

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


/* ==== 0042783c FUN_0042783c ==== */

void FUN_0042783c(int param_1,int param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_0042781c(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_004277e0(param_1,j);
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


/* ==== 0042787c FUN_0042787c ==== */

void FUN_0042787c(int param_1,uint param_2)

{
  uint local_10 [4];
  
  local_10[0] = param_2 & 0xffff;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  FUN_0042783c(param_1,(int)local_10);
  return;
}


/* ==== 004278a4 FUN_004278a4 ==== */

void FUN_004278a4(undefined4 param_1,int param_2,LPCSTR class_name)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (class_name != (LPCSTR)0x0) {
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    BVar2 = GetClassInfoA(DAT_004474d4,class_name,(LPWNDCLASSA)(param_2 + 0x24));
    if (BVar2 == 0) {
      BVar2 = GetClassInfoA((HINSTANCE)0x0,class_name,(LPWNDCLASSA)(param_2 + 0x24));
      if (BVar2 == 0) {
        BVar2 = GetClassInfoA(*(HINSTANCE *)PTR_DAT_00446b5c,class_name,
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


/* ==== 00427910 FUN_00427910 ==== */

void FUN_00427910(int *param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  
  uVar2 = FUN_00424dbc((int)param_1);
  if ((char)uVar2 != '\0') {
    *param_2 = *param_2 | 0x2000;
  }
  uVar2 = FUN_00424dec((int)param_1);
  if ((char)uVar2 != '\0') {
    *param_2 = *param_2 | 0x4000;
  }
  cVar1 = FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  if (cVar1 != '\0') {
    cVar1 = FUN_00402ef0(param_1,extraout_EDX_00,extraout_ECX_00);
    if (cVar1 == '\0') {
      *param_2 = *param_2 | 0x1000;
    }
    else {
      cVar1 = FUN_00402ef0(param_1,extraout_EDX_01,extraout_ECX_01);
      if (cVar1 == '\x01') {
        *param_2 = *param_2;
      }
    }
  }
  return;
}


/* ==== 00427978 TWinControl.virtual_090 ==== */

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
  puStack_11c = &LAB_00427a96;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402a2c(param_2,0x8c,0);
  *param_2 = param_1[0x15];
  param_2[1] = 0x44000000;
  FUN_00427910(param_1,(uint *)(param_2 + 2));
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
    iVar2 = FUN_0042a8b4((int *)param_1[9]);
    param_2[7] = iVar2;
  }
  param_2[9] = 0xb;
  param_2[10] = (int)DefWindowProcA;
  pHVar3 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  param_2[0xf] = (int)pHVar3;
  param_2[0x10] = 0;
  param_2[0xd] = DAT_004474d4;
  FUN_00402c60(*param_1,local_108);
  FUN_00403bdc((int *)&local_8,local_108);
  FUN_004080e4((char *)(param_2 + 0x13),local_8);
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_00427a9d;
  puStack_11c = (undefined1 *)0x427a95;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00427aa4 TWinControl.virtual_098 ==== */

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
  puStack_d4 = &LAB_00427c2f;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  (**(code **)(*param_1 + 0x90))(param_1,local_90);
  if ((local_74 == 0) && ((local_89 & 0x40) != 0)) {
    piVar4 = (int *)param_1[1];
    if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 2) != 0)) {
      uVar2 = FUN_00402e8c(piVar4,(int)&PTR_TWinControl_virtual_000_00420fa8);
      if ((char)uVar2 != '\0') {
        local_74 = FUN_0042a8b4(piVar4);
        goto LAB_00427b50;
      }
    }
    local_c0 = param_1[2];
    local_bc = 0xb;
    piVar4 = &local_c0;
    uVar2 = 0;
    FUN_00405298((undefined4 *)PTR_PTR_00446ca8,(int *)&local_c4);
    uVar2 = FUN_0040a974((int)&DAT_0040d94c,'\x01',local_c4,uVar2,piVar4);
    FUN_0040346c(uVar2);
  }
LAB_00427b50:
  param_1[0x4f] = (int)wndclass_2.lpfnWndProc;
  BVar3 = GetClassInfoA(wndclass_2.hInstance,local_44,&wndclass);
  if ((BVar3 == 0) || (wndclass.lpfnWndProc != FUN_00421954)) {
    if (BVar3 != 0) {
      UnregisterClassA(local_44,wndclass_2.hInstance);
    }
    wndclass_2.lpfnWndProc = FUN_00421954;
    wndclass_2.lpszClassName = local_44;
    AVar1 = RegisterClassA(&wndclass_2);
    if (AVar1 == 0) {
      FUN_0040b9e4();
    }
  }
  DAT_00446624 = param_1;
  (**(code **)(*param_1 + 0x94))(param_1,local_90);
  if (param_1[0x53] == 0) {
    FUN_0040b9e4();
  }
  FUN_00408254(param_1[0x15]);
  param_1[0x15] = 0;
  FUN_0042abbc((int)param_1);
  uVar5 = 1;
  uVar2 = FUN_004165a0(param_1[0x16]);
  FUN_00425780((int)param_1,0x30,uVar2,uVar5);
  if ((char)param_1[0x13] != '\0') {
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_d8;
  puStack_d0 = &LAB_00427c36;
  puStack_d4 = (undefined1 *)0x427c2e;
  FUN_004039b8((int *)&local_c4);
  return;
}


/* ==== 00427c3c TWinControl.virtual_094 ==== */

void TWinControl_virtual_094(int param_1,undefined4 *param_2)

{
  HWND pHVar1;
  
  pHVar1 = CreateWindowExA(param_2[2],(LPCSTR)(param_2 + 0x13),(LPCSTR)*param_2,param_2[1],
                           param_2[3],param_2[4],param_2[5],param_2[6],(HWND)param_2[7],(HMENU)0x0,
                           (HINSTANCE)param_2[0xd],(LPVOID)param_2[8]);
  *(HWND *)(param_1 + 0x14c) = pHVar1;
  return;
}


/* ==== 00427c80 TWinControl.virtual_0a0 ==== */

void TWinControl_virtual_0a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00424758((int)param_1);
  if (iVar1 < 1) {
    iVar1 = FUN_00408228("");
    param_1[0x15] = iVar1;
  }
  else {
    piVar2 = FUN_00408208(iVar1 + 1);
    param_1[0x15] = (int)piVar2;
    iVar1 = FUN_0040821c((int)piVar2);
    FUN_00424768((int)param_1,piVar2,iVar1);
  }
  FUN_004233d4();
  (**(code **)(*param_1 + 0x9c))();
  return;
}


/* ==== 00427cd8 TWinControl.virtual_09c ==== */

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
  puStack_10 = &LAB_00427d25;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  BVar1 = DestroyWindow(*(HWND *)(param_1 + 0x14c));
  if (BVar1 == 0) {
    FUN_0040b9e4();
  }
  *in_FS_OFFSET = uStack_14;
  *(ushort *)(local_8 + 0x44) = *(ushort *)(local_8 + 0x44) & 0xfdff;
  return;
}


/* ==== 00427d3c FUN_00427d3c ==== */

int FUN_00427d3c(int param_1,int param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_0040f080(*(int *)(param_1 + 0x180),param_2);
  i_val = i_val + 1;
  j = *(int *)(*(int *)(param_1 + 0x180) + 8) + -1;
  if (i_val <= j) {
    j = (j - i_val) + 1;
    do {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x180),i_val);
      if (*(int *)(iVar1 + 0x14c) != 0) {
        return *(int *)(iVar1 + 0x14c);
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  return 0;
}


/* ==== 00427d84 TWinControl.virtual_08c ==== */

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
    SetPropA((HWND)data[0x53],(LPCSTR)(uint)DAT_0044774a,data);
    SetPropA((HWND)data[0x53],(LPCSTR)(uint)DAT_00447748,data);
    if (data[9] != 0) {
      uFlags = 0x13;
      cy = 0;
      cx_val = 0;
      i_val = 0;
      j = 0;
      hWndInsertAfter = (HWND)FUN_00427d3c(data[9],(int)data);
      SetWindowPos((HWND)data[0x53],hWndInsertAfter,j,i_val,cx_val,cy,uFlags);
    }
    j = FUN_0042781c((int)data);
    if (-1 < j + -1) {
      i_val = 0;
      do {
        cx_val = FUN_004277e0((int)data,i_val);
        FUN_00423f38(cx_val);
        i_val = i_val + 1;
        j = j + -1;
      } while (j != 0);
    }
  }
  return;
}


/* ==== 00427e1c FUN_00427e1c ==== */

void FUN_00427e1c(int *param_1)

{
  int *piVar1;
  int i_val;
  int j;
  
  if (param_1[0x53] != 0) {
    if ((param_1[0x60] != 0) && (i_val = *(int *)(param_1[0x60] + 8), -1 < i_val + -1)) {
      j = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x60],j);
        FUN_00427e1c(piVar1);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    (**(code **)(*param_1 + 0xa0))();
  }
  return;
}


/* ==== 00427e64 FUN_00427e64 ==== */

void FUN_00427e64(int param_1)

{
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_00425780(param_1,0xb033,0,0);
  }
  return;
}


/* ==== 00427e7c TWinControl.CMRecreateWnd ==== */

void TWinControl_CMRecreateWnd(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00402ef0(param_1,param_2,param_3);
  FUN_00427e1c(param_1);
  FUN_00427fb4(param_1);
  if ((cVar1 != '\0') && (param_1[0x53] != 0)) {
    SetFocus((HWND)param_1[0x53]);
  }
  return;
}


/* ==== 00427eb8 FUN_00427eb8 ==== */

void FUN_00427eb8(int *param_1)

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
      puStack_1c = (undefined1 *)0x427f0e;
      (**(code **)(*param_1 + 0x8c))();
    }
    if ((param_1[0x60] != 0) && (i_val = *(int *)(param_1[0x60] + 8), -1 < i_val + -1)) {
      j = 0;
      do {
        puStack_1c = (undefined1 *)0x427f36;
        piVar2 = (int *)FUN_0040f024((undefined4 *)param_1[0x60],j);
        puStack_1c = (undefined1 *)0x427f3b;
        FUN_00427eb8(piVar2);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  if ((param_1[0x53] != 0) && ((char)param_1[0x5a] != cVar1)) {
    *(char *)(param_1 + 0x5a) = cVar1;
    puStack_20 = &LAB_00427f8e;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00425780((int)param_1,0xb019,0,0);
    *in_FS_OFFSET = uStack_24;
  }
  return;
}


/* ==== 00427fb4 FUN_00427fb4 ==== */

void FUN_00427fb4(int *param_1)

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
  uVar2 = FUN_00402e8c(piVar3,(int)&PTR_TWinControl_virtual_000_00438554);
  if (((char)uVar2 == '\0') && (piVar3[0x59] == 0)) {
    return;
  }
  FUN_00427eb8(param_1);
  return;
}


/* ==== 0042806c FUN_0042806c ==== */

void FUN_0042806c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  
  FUN_0040e594(**(int **)(param_4 + -4) - param_1[0xc],
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
LAB_00428111:
      bVar1 = true;
      goto LAB_00428113;
    }
    if (*(char *)((int)param_1 + 0x47) != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x4c))();
      if ((cVar2 != '\0') || (*(char *)(param_4 + -0xd) != '\0')) {
        uVar4 = FUN_004069e8((undefined2 *)(param_4 + -0xc));
        iVar5 = FUN_00425780((int)param_1,0xb00a,0,uVar4);
        if (iVar5 != 0) goto LAB_00428111;
      }
    }
  }
  bVar1 = false;
LAB_00428113:
  if (bVar1) {
    *(int **)(param_4 + -0x14) = param_1;
  }
  return;
}


/* ==== 00428124 FUN_00428124 ==== */

undefined4 FUN_00428124(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

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
      piVar2 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x180),i_val);
      cVar1 = FUN_0042806c(piVar2,extraout_EDX,extraout_ECX,(int)puVar3);
      if (cVar1 != '\0') break;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  if ((*(int *)(param_1 + 0x134) != 0) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x134) + 8) + -1, -1 < i_val)) {
    do {
      puVar3 = &stack0xfffffffc;
      piVar2 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x134),i_val);
      cVar1 = FUN_0042806c(piVar2,extraout_EDX_00,extraout_ECX_00,(int)puVar3);
      if (cVar1 != '\0') {
        return 0;
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return 0;
}


/* ==== 004281b8 FUN_004281b8 ==== */

bool FUN_004281b8(int *param_1,undefined4 *param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int local_1c;
  int local_18;
  int local_14 [2];
  
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  pHVar2 = GetCapture();
  if (pHVar1 == pHVar2) {
    iVar3 = 0;
    if ((DAT_004466e4 != 0) && (param_1 == *(int **)(DAT_004466e4 + 0x24))) {
      iVar3 = DAT_004466e4;
    }
  }
  else {
    cVar5 = '\0';
    FUN_004069d4(param_2[2],local_14);
    iVar3 = FUN_00428124((int)param_1,local_14,0,cVar5);
  }
  if (iVar3 != 0) {
    local_1c = (int)*(short *)(param_2 + 2) - *(int *)(iVar3 + 0x30);
    local_18 = (int)*(short *)((int)param_2 + 10) - *(int *)(iVar3 + 0x34);
    uVar4 = FUN_004069e8((undefined2 *)&local_1c);
    uVar4 = FUN_00425780(iVar3,*param_2,param_2[1],uVar4);
    param_2[3] = uVar4;
  }
  return iVar3 != 0;
}


/* ==== 0042824c TWinControl.virtual_06c ==== */

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
      FUN_004069d4(param_2[2],local_124);
      FUN_00424398(param_1,local_124,local_11c);
      iVar4 = FUN_00428124((int)param_1,local_11c,0,cVar1);
      if (iVar4 == 0) {
        return;
      }
      param_2[3] = 1;
      return;
    }
    if (param == 7) {
      piVar3 = FUN_00439eb4(param_1);
      param_3 = extraout_ECX;
      if ((piVar3 != (int *)0x0) &&
         (cVar1 = (**(code **)(*piVar3 + 0xd4))(piVar3,param_1), param_3 = extraout_ECX_00,
         cVar1 == '\0')) {
        return;
      }
      goto LAB_0042841a;
    }
    if (param == 8) {
      if ((*(byte *)(param_1 + 0x11) & 0x20) != 0) {
        return;
      }
      goto LAB_0042841a;
    }
    if (param == 0x1f) {
      pHVar5 = (HWND)FUN_0042a8b4(param_1);
      pHVar6 = GetCapture();
      param_3 = extraout_ECX_03;
      if (((pHVar5 == pHVar6) && (DAT_004466e4 != 0)) && (param_1 == *(int **)(DAT_004466e4 + 0x24))
         ) {
        FUN_00425780(DAT_004466e4,0x1f,0,0);
        param_3 = extraout_ECX_04;
      }
      goto LAB_0042841a;
    }
  }
  else {
    if (param - 0x100 < 9) {
      bVar2 = FUN_00424ee8((int)param_1);
      param_3 = extraout_ECX_02;
      if (bVar2) {
        return;
      }
      goto LAB_0042841a;
    }
    if (param - 0x200 < 0xb) {
      bVar2 = FUN_004281b8(param_1,param_2);
      param_3 = extraout_ECX_01;
      if (bVar2) {
        if (param_2[3] != 0) {
          return;
        }
        param = param_2[2];
        wParam = param_2[1];
        Msg = *param_2;
        pHVar5 = (HWND)FUN_0042a8b4(param_1);
        DefWindowProcA(pHVar5,Msg,wParam,param);
        return;
      }
      goto LAB_0042841a;
    }
  }
  if (((*(char *)(DAT_0044773c + 0x20) != '\0') && (*(int *)(DAT_0044773c + 0x1c) != 0)) &&
     (*param_2 == *(uint *)(DAT_0044773c + 0x1c))) {
    GetKeyboardState(local_114);
    local_14 = *param_2;
    local_10 = FUN_00439df8((int)local_114);
    local_e = (undefined2)param_2[1];
    local_c = param_2[2];
    FUN_00402ef0(param_1,&local_14,extraout_ECX_05);
    return;
  }
LAB_0042841a:
  TControl_virtual_06c(param_1,param_2,param_3);
  return;
}


/* ==== 0042842c TWinControl.DefaultHandler ==== */

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
      UVar1 = FUN_00425780(*(int *)(param_1 + 0x24),0x7b,param_2[1],param_2[2]);
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
      CVar2 = FUN_004160cc(*(uint *)(*(int *)(param_1 + 0x58) + 0x18));
      SetTextColor((HDC)param_2[1],CVar2);
      uVar3 = TBrush_GetColor(*(int *)(param_1 + 0x130));
      CVar2 = FUN_004160cc(uVar3);
      SetBkColor((HDC)param_2[1],CVar2);
      UVar1 = FUN_00416d90(*(int *)(param_1 + 0x130));
      param_2[3] = UVar1;
    }
    else {
      UVar1 = CallWindowProcA(*(WNDPROC *)(param_1 + 0x13c),*(HWND *)(param_1 + 0x14c),UVar1,
                              param_2[1],param_2[2]);
      param_2[3] = UVar1;
    }
    if (*param_2 == 0xc) {
      FUN_004243f4(param_1,0xc,param_2[1],param_2[2]);
    }
  }
  return;
}


/* ==== 00428528 FUN_00428528 ==== */

bool FUN_00428528(HWND wnd,int *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  
  pvVar1 = FUN_00421a0c(wnd);
  if (pvVar1 != (HANDLE)0x0) {
    iVar2 = FUN_00425780((int)pvVar1,*param_2 + 0xbc00,param_2[1],param_2[2]);
    param_2[3] = iVar2;
  }
  return pvVar1 != (HANDLE)0x0;
}


/* ==== 0042855c FUN_0042855c ==== */

void FUN_0042855c(int *param_1,int param_2)

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
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
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
        iVar2 = FUN_0040f024((undefined4 *)local_8[0x4d],j);
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
  FUN_004286b4((int)local_8,hdc,0);
  *in_FS_OFFSET = uVar3;
  if (*(int *)(local_c + 4) == 0) {
    paint = &local_54;
    pHVar1 = (HWND)FUN_0042a8b4(local_8);
    EndPaint(pHVar1,paint);
  }
  return;
}


/* ==== 0042868c TWinControl.virtual_0a8 ==== */

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


/* ==== 004286b4 FUN_004286b4 ==== */

void FUN_004286b4(int param_1,HDC param_2,int param_3)

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
    if ((param_3 != 0) && (i_val = FUN_0040f080(*(int *)(param_1 + 0x134),param_3), i_val < 0)) {
      i_val = 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x134) + 8);
    for (; i_val < iVar3; i_val = i_val + 1) {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x134),i_val);
      if ((*(char *)(iVar1 + 0x47) != '\0') ||
         (((*(byte *)(iVar1 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar1 + 0x41) & 4) == 0)))) {
        FUN_0040e5ac(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),
                     *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x38),&RStack_20.left,
                     *(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x3c));
        BVar2 = RectVisible(param_2,&RStack_20);
        if (BVar2 != 0) {
          if ((*(byte *)(param_1 + 0x44) & 0x80) != 0) {
            *(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) | 0x80;
          }
          nSavedDC = SaveDC(param_2);
          FUN_004232e8(param_2,*(int *)(iVar1 + 0x30),*(int *)(iVar1 + 0x34));
          IntersectClipRect(param_2,0,0,*(int *)(iVar1 + 0x38),*(int *)(iVar1 + 0x3c));
          FUN_00425780(iVar1,0xf,param_2,0);
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
      iVar3 = FUN_0040f024(*(undefined4 **)(param_1 + 0x180),i_val);
      if (((*(char *)(iVar3 + 0x138) != '\0') && ((*(byte *)(iVar3 + 0x40) & 0x10) != 0)) &&
         ((*(char *)(iVar3 + 0x47) != '\0' ||
          (((*(byte *)(iVar3 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar3 + 0x41) & 4) == 0)))))) {
        CVar4 = FUN_004160cc(0x80000010);
        pHVar5 = CreateSolidBrush(CVar4);
        pHVar6 = pHVar5;
        FUN_0040e5ac(*(int *)(iVar3 + 0x30) + -1,*(int *)(iVar3 + 0x34) + -1,
                     *(int *)(iVar3 + 0x30) + *(int *)(iVar3 + 0x38),&RStack_20.left,
                     *(int *)(iVar3 + 0x34) + *(int *)(iVar3 + 0x3c));
        FrameRect(param_2,&RStack_20,pHVar6);
        DeleteObject(pHVar5);
        CVar4 = FUN_004160cc(0x80000014);
        pHVar5 = CreateSolidBrush(CVar4);
        pHVar6 = pHVar5;
        FUN_0040e5ac(*(undefined4 *)(iVar3 + 0x30),*(undefined4 *)(iVar3 + 0x34),
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


/* ==== 004288e4 TWinControl.WMPaint ==== */

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
    pHVar3 = (HWND)FUN_0042a8b4(param_1);
    hdc = BeginPaint(pHVar3,paint);
    FUN_00425780((int)param_1,0x14,hdc_val,hdc_val);
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
    pHVar3 = (HWND)FUN_0042a8b4(param_1);
    EndPaint(pHVar3,paint);
    *in_FS_OFFSET = uVar4;
    SelectObject(hdc_val,h_val);
    DeleteDC(hdc_val);
    DeleteObject(local_c);
    return;
  }
  if (((*(byte *)((int)param_1 + 0x45) & 1) == 0) &&
     (iVar1 = FUN_0042781c((int)param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
    return;
  }
  FUN_0042855c(param_1,param_2);
  return;
}


/* ==== 00428a44 TWinControl.WMCommand ==== */

void TWinControl_WMCommand(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00428a64 TWinControl.WMNotify ==== */

void TWinControl_WMNotify(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528(*(HWND *)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00428a88 TWinControl.WMSysColorChange ==== */

void TWinControl_WMSysColorChange(int param_1)

{
  FUN_00415cc8();
  FUN_00425780(param_1,0xb024,0,0);
  return;
}


/* ==== 00428aa4 TWinControl.WMWinIniChange ==== */

void TWinControl_WMWinIniChange(int param_1,int param_2)

{
  FUN_00425780(param_1,0xb025,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return;
}


/* ==== 00428ab8 TWinControl.message_001d ==== */

void TWinControl_message_001d(int param_1)

{
  FUN_00425780(param_1,0xb026,0,0);
  return;
}


/* ==== 00428ac8 TWinControl.WMTimeChange ==== */

void TWinControl_WMTimeChange(int param_1)

{
  FUN_00425780(param_1,0xb027,0,0);
  return;
}


/* ==== 00428ad8 TWinControl.WMHScroll ==== */

void TWinControl_WMHScroll(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00428af8 TWinControl.WMVScroll ==== */

void TWinControl_WMVScroll(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00428b18 TWinControl.WMCompareItem ==== */

void TWinControl_WMCompareItem(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528(*(HWND *)(param_2[2] + 4),param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00428b3c TWinControl.WMDeleteItem ==== */

void TWinControl_WMDeleteItem(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528(*(HWND *)(param_2[2] + 4),param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00428b60 TWinControl.WMDrawItem ==== */

void TWinControl_WMDrawItem(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528(*(HWND *)(param_2[2] + 4),param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00428b84 TWinControl.WMMeasureItem ==== */

void TWinControl_WMMeasureItem(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528(*(HWND *)(param_2[2] + 4),param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00428ba8 TWinControl.WMEraseBkgnd ==== */

void TWinControl_WMEraseBkgnd(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT local_18;
  
  if (((char)param_1[0x7a] == '\0') || (*(int *)(param_2 + 4) == *(int *)(param_2 + 8))) {
    hbr = (HBRUSH)FUN_00416d90(param_1[0x4c]);
    (**(code **)(*param_1 + 0x40))(param_1,&local_18);
    FillRect(*(HDC *)(param_2 + 4),&local_18,hbr);
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}


/* ==== 00428bf4 TWinControl.WMWindowPosChanged ==== */

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
    if (BVar4 == 0) goto LAB_00428c39;
    bVar2 = true;
  }
  else {
LAB_00428c39:
    bVar2 = false;
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 1) == 0) {
    BVar4 = IsWindowVisible((HWND)param_1[0x53]);
    if (BVar4 != 0) {
      bVar3 = true;
      goto LAB_00428c61;
    }
  }
  bVar3 = false;
LAB_00428c61:
  if ((bVar1) && (bVar2 || bVar3)) {
    FUN_0042a7bc((int)param_1);
  }
  if ((*(byte *)((int)param_1 + 0x45) & 2) == 0) {
    FUN_0042abbc((int)param_1);
  }
  TControl_WMWindowPosChanged(param_1,param_2);
  if ((bVar1) && ((bVar2 || bVar3 || ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 0xc0) != 0)))) {
    FUN_0042a7bc((int)param_1);
  }
  return;
}


/* ==== 00428cb4 TWinControl.WMWindowPosChanging ==== */

void TWinControl_WMWindowPosChanging(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  if (((*(ushort *)(param_1 + 8) & 10) == 0) &&
     (iVar1 = *(int *)(param_2 + 8), (*(byte *)(iVar1 + 0x18) & 1) == 0)) {
    cVar2 = FUN_00425c54(param_1,(int *)(iVar1 + 0x10),(int *)(iVar1 + 0x14));
    if (cVar2 == '\0') {
      *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00428d04 TWinControl.WMSize ==== */

void TWinControl_WMSize(int *param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_0042abbc((int)param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_004273ac(param_1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00428d38 TWinControl.WMMove ==== */

void TWinControl_WMMove(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  FUN_0042abbc((int)param_1);
  return;
}


/* ==== 00428d4c TWinControl.WMSetCursor ==== */

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
      if ((*(short *)(param_2 + 10) == 0x201) && (*(int *)(*(int *)PTR_DAT_00446c80 + 0x24) != 0)) {
        pHVar2 = GetLastActivePopup(*(HWND *)(*(int *)PTR_DAT_00446c80 + 0x24));
        pHVar3 = GetForegroundWindow();
        if (pHVar2 != pHVar3) {
          FUN_00441e84(*(int *)PTR_DAT_00446c80);
          return;
        }
      }
    }
    else if (*(short *)(param_2 + 8) == 1) {
      sVar4 = *(short *)(*(int *)PTR_DAT_00446d84 + 0x38);
      if (sVar4 == 0) {
        GetCursorPos(&local_1c);
        cVar5 = '\0';
        FUN_00424398(param_1,&local_1c.x,local_14);
        iVar1 = FUN_00428124((int)param_1,local_14,0,cVar5);
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
        hCursor = (HCURSOR)FUN_00440610(*(int *)PTR_DAT_00446d84,(int)sVar4);
        SetCursor(hCursor);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00428e4c TWinControl.WMSetFocus ==== */

void TWinControl_WMSetFocus(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + -0x10))();
  FUN_00428e9c(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 00428e60 TWinControl.WMKillFocus ==== */

void TWinControl_WMKillFocus(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + -0x10))();
  FUN_00428f88(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 00428e74 TWinControl.message_010d ==== */

void TWinControl_message_010d(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x1e9) = 1;
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00428e88 TWinControl.message_010e ==== */

void TWinControl_message_010e(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x1e9) = 0;
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00428e9c FUN_00428e9c ==== */

void FUN_00428e9c(int *param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_1c = &LAB_00428f7b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (PTR_DAT_00446da0[8] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_004405c8(*(int *)PTR_DAT_00446d84,(int *)&local_8,param_3);
      iVar2 = FUN_00407b28((undefined *)param_1[0x56],local_8);
      puVar1 = puStack_18;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_004403c8(*(int *)PTR_DAT_00446d84,extraout_EDX,extraout_ECX);
        iVar2 = (**(code **)(*piVar3 + 0x14))();
        puVar1 = puStack_18;
        if (iVar2 != 0) {
          hkl = *(HKL *)(*(int *)PTR_DAT_00446d84 + 0x30);
          if ((char)param_1[0x55] != '\0') {
            piVar3 = (int *)FUN_004403c8(*(int *)PTR_DAT_00446d84,extraout_EDX_00,extraout_ECX_00);
            iVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,param_1[0x56]);
            if (-1 < iVar2) {
              piVar3 = (int *)FUN_004403c8(*(int *)PTR_DAT_00446d84,extraout_EDX_01,extraout_ECX_01)
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
    iVar2 = FUN_0042a8b4(param_1);
    FUN_0042ed1c(iVar2,(char)param_1[0x55]);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00428f82;
  puStack_1c = (undefined1 *)0x428f7a;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00428f88 FUN_00428f88 ==== */

void FUN_00428f88(int *param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_14 = &LAB_00429012;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (PTR_DAT_00446da0[8] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_004405c8(*(int *)PTR_DAT_00446d84,(int *)&local_8,param_3);
      iVar2 = FUN_00407b28((undefined *)param_1[0x56],local_8);
      puVar1 = puStack_10;
      if (iVar2 != 0) {
        ActivateKeyboardLayout(*(HKL *)(*(int *)PTR_DAT_00446d84 + 0x30),1);
        puVar1 = puStack_10;
      }
    }
    puStack_10 = puVar1;
    if ((char)param_1[0x55] == '\0') {
      FUN_0042a8b4(param_1);
      FUN_0042ed00();
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00429019;
  puStack_14 = (undefined1 *)0x429011;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00429020 TWinControl.dynamic_ffcc ==== */

void TWinControl_dynamic_ffcc(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x60))(param_2,param_1);
  return;
}


/* ==== 00429028 TWinControl.dynamic_ffc3 ==== */

void TWinControl_dynamic_ffc3(void)

{
  return;
}


/* ==== 0042902c TWinControl.dynamic_ffc9 ==== */

void TWinControl_dynamic_ffc9(int param_1)

{
  if (*(short *)(param_1 + 0x19a) != 0) {
    (**(code **)(param_1 + 0x198))(*(undefined4 *)(param_1 + 0x19c),param_1);
  }
  return;
}


/* ==== 0042904c TWinControl.dynamic_ffc8 ==== */

void TWinControl_dynamic_ffc8(int param_1)

{
  if (*(short *)(param_1 + 0x1a2) != 0) {
    (**(code **)(param_1 + 0x1a0))(*(undefined4 *)(param_1 + 0x1a4),param_1);
  }
  return;
}


/* ==== 0042906c TWinControl.dynamic_ffbb ==== */

void TWinControl_dynamic_ffbb(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040e59c((short)param_3,(undefined2)param_4);
  iVar2 = FUN_00425780(param_1,0xb038,param_2,uVar1);
  if ((-1 < iVar2) && (*(short *)(param_1 + 0x18a) != 0)) {
    (**(code **)(param_1 + 0x188))(*(undefined4 *)(param_1 + 0x18c),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}


/* ==== 004290bc TWinControl.dynamic_ffca ==== */

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


/* ==== 004290f0 TWinControl.dynamic_ffcb ==== */

void TWinControl_dynamic_ffcb(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(param_1,param_2,param_3);
  FUN_00402ef0(param_1,param_2,param_3);
  return;
}


/* ==== 00429130 TWinControl.dynamic_ffc2 ==== */

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
  if ((local_10 != '\0') && (iVar1 = FUN_00425780(param_1,0xb039,param_2,param_3), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* ==== 00429188 TWinControl.dynamic_ffbd ==== */

void TWinControl_dynamic_ffbd(int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00413ecc(*(int *)(param_1 + 4),param_2);
  uVar2 = FUN_00402ea4(piVar1,(int)&PTR_TControl_virtual_000_00420b14);
  *param_3 = uVar2;
  return;
}


/* ==== 004291ac FUN_004291ac ==== */

undefined4 FUN_004291ac(int param_1)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x140) + 8);
  }
  return 0;
}


/* ==== 004291c0 FUN_004291c0 ==== */

undefined4 FUN_004291c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x140) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x140),param_2);
  }
  return uVar1;
}


/* ==== 004291e4 TWinControl.dynamic_ffc1 ==== */

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
  hWnd = (HWND)FUN_0042a8b4(param_1);
  GetWindowRect(hWnd,lpRect);
  InflateRect(lprc_val,10,10);
  if (*(short *)((int)param_1 + 0x1aa) != 0) {
    (*(code *)param_1[0x6a])(param_1[0x6b],param_1,param_2,param_4,&local_c,lprc_val);
  }
  return;
}


/* ==== 00429240 FUN_00429240 ==== */

int FUN_00429240(int param_1)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_004291ac(param_1);
  if ((0 < i_val) && (j = i_val + -1, -1 < j)) {
    do {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x140),j);
      if (*(char *)(iVar1 + 0x47) == '\0') {
        i_val = i_val + -1;
      }
      j = j + -1;
    } while (j != -1);
  }
  return i_val;
}


/* ==== 0042927c TWinControl.dynamic_ffcd ==== */

void TWinControl_dynamic_ffcd(int param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  
  if (((*(int *)(param_1 + 0x148) == 0) && (*(char *)(param_1 + 0x144) != '\0')) &&
     (*(char *)(param_1 + 0x17c) != '\0')) {
    piVar2 = (int *)(**(code **)(PTR_PTR_00446628 + 0x24))(PTR_PTR_00446628,1,param_1);
    if (piVar2 != (int *)0x0) {
      piVar2 = piVar2 + 0x1d;
    }
    FUN_00405308(param_2,piVar2);
  }
  else {
    FUN_00405308(param_2,*(int **)(param_1 + 0x148));
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


/* ==== 0042939c TWinControl.CMDockClient ==== */

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
    hWndTo = (HWND)FUN_0042a8b4(local_8);
    MapWindowPoints((HWND)0x0,hWndTo,points,cPoints);
    FUN_00427384((int)local_8);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    FUN_00402ef0(*(int **)(*(int *)(local_c + 4) + 0x38),local_8,local_1c);
    if (((char)local_8[0x5f] != '\0') && (local_8[0x52] != 0)) {
      i_val = *(int *)(local_c + 4);
      (**(code **)(*(int *)local_8[0x52] + 0x18))
                ((int *)local_8[0x52],*(undefined4 *)(i_val + 0x38),*(undefined1 *)(i_val + 0x54),
                 *(undefined4 *)(i_val + 0x58));
    }
    *in_FS_OFFSET = uVar2;
    FUN_0042738c((int)local_8);
    return;
  }
  return;
}


/* ==== 0042948c TWinControl.CMUndockClient ==== */

void TWinControl_CMUndockClient(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  if ((*(char *)(param_1 + 0x17c) != '\0') && (*(int *)(param_1 + 0x148) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x148) + 0x28))
              (*(int **)(param_1 + 0x148),*(undefined4 *)(param_2 + 8));
  }
  return;
}


/* ==== 004294b4 TWinControl.CMFloatChanged ==== */

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
  
  puStack_18 = (undefined1 *)0x4294c9;
  iVar3 = (**(code **)(*param_1 + 0x54))();
  puStack_18 = (undefined1 *)0x4294d3;
  iVar4 = FUN_00402c5c(param_1);
  if (iVar3 == iVar4) {
    cVar1 = *(char *)((int)param_1 + 0x47);
    puStack_1c = &LAB_0042951e;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00402ef0(param_1,0,*(int *)(param_2 + 8) + 0x44);
    puVar2 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x42952f;
    if (cVar1 != '\0') {
      puStack_1c = (undefined1 *)0x42951d;
      FUN_00424a28(param_1,uStack_20,puVar2);
    }
    return;
  }
  puStack_18 = (undefined1 *)0x42952f;
  TControl_CMFloatChanged(param_1,param_2);
  return;
}


/* ==== 00429538 TWinControl.dynamic_ffc0 ==== */

void TWinControl_dynamic_ffc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x1b2) != 0) {
    (**(code **)(param_1 + 0x1b0))(*(undefined4 *)(param_1 + 0x1b4),param_1,param_2,param_3);
  }
  return;
}


/* ==== 00429560 FUN_00429560 ==== */

undefined1 FUN_00429560(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined3 extraout_var;
  
  piVar3 = FUN_00439eb4(param_1);
  if ((((piVar3 != (int *)0x0) && (param_1 != piVar3)) && (*(char *)((int)piVar3 + 0x215) != '\0'))
     && (cVar1 = FUN_00429560(piVar3,param_2), cVar1 != '\0')) {
    return 1;
  }
  bVar2 = FUN_00439dbc(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     (FUN_00402ef0(param_1,param_2 + 4,CONCAT31(extraout_var,bVar2)), *(short *)(param_2 + 4) == 0))
  {
    return 1;
  }
  return 0;
}


/* ==== 004295c8 TWinControl.WMKeyDown ==== */

void TWinControl_WMKeyDown(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00429560(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 004295e8 TWinControl.WMSysKeyDown ==== */

void TWinControl_WMSysKeyDown(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00429560(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00429608 TWinControl.dynamic_ffbf ==== */

void TWinControl_dynamic_ffbf(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x1c2) != 0) {
    (**(code **)(param_1 + 0x1c0))(*(undefined4 *)(param_1 + 0x1c4),param_1,param_2,param_3);
  }
  return;
}


/* ==== 00429630 FUN_00429630 ==== */

undefined1 FUN_00429630(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined3 extraout_var;
  
  piVar3 = FUN_00439eb4(param_1);
  if ((((piVar3 != (int *)0x0) && (param_1 != piVar3)) && (*(char *)((int)piVar3 + 0x215) != '\0'))
     && (cVar1 = FUN_00429630(piVar3,param_2), cVar1 != '\0')) {
    return 1;
  }
  bVar2 = FUN_00439dbc(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     (FUN_00402ef0(param_1,param_2 + 4,CONCAT31(extraout_var,bVar2)), *(short *)(param_2 + 4) == 0))
  {
    return 1;
  }
  return 0;
}


/* ==== 00429698 TWinControl.WMKeyUp ==== */

void TWinControl_WMKeyUp(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00429630(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 004296b8 TWinControl.WMSysKeyUp ==== */

void TWinControl_WMSysKeyUp(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00429630(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 004296d8 TWinControl.dynamic_ffbe ==== */

void TWinControl_dynamic_ffbe(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x1ba) != 0) {
    (**(code **)(param_1 + 0x1b8))(*(undefined4 *)(param_1 + 0x1bc),param_1,param_2);
  }
  return;
}


/* ==== 004296f8 FUN_004296f8 ==== */

uint FUN_004296f8(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = CONCAT31((int3)((uint)param_3 >> 8),1);
  piVar1 = FUN_00439eb4(param_1);
  uVar2 = extraout_ECX;
  if (((piVar1 != (int *)0x0) && (param_1 != piVar1)) && (*(char *)((int)piVar1 + 0x215) != '\0')) {
    piVar1 = (int *)FUN_004296f8(piVar1,param_2,extraout_ECX);
    uVar2 = extraout_ECX_00;
    if ((char)piVar1 != '\0') goto LAB_0042975b;
  }
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    local_10._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 4),(undefined1)local_10);
    FUN_00402ef0(param_1,(int)&local_10 + 1,uVar2);
    piVar1 = (int *)0x0;
    *(ushort *)(param_2 + 4) = (ushort)local_10._1_1_;
    if (*(char *)(param_2 + 4) == '\0') goto LAB_0042975b;
  }
  local_10 = 0;
LAB_0042975b:
  return CONCAT31((int3)((uint)piVar1 >> 8),(undefined1)local_10);
}


/* ==== 00429764 TWinControl.WMChar ==== */

void TWinControl_WMChar(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004296f8(param_1,param_2,param_3);
  if ((char)uVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00429784 TWinControl.CMMouseWheel ==== */

void TWinControl_CMMouseWheel(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  int aiStack_14 [2];
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_004069d4(*(undefined4 *)(param_2 + 8),aiStack_14);
  cVar1 = FUN_00402ef0(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 4)
                                       ),(int)*(short *)(param_2 + 6));
  if (cVar1 == '\0') {
    if (param_1[9] != 0) {
      uVar2 = FUN_00425780(param_1[9],0xb043,*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = uVar2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


/* ==== 004297e0 TWinControl.WMMouseWheel ==== */

void TWinControl_WMMouseWheel(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar2 = DAT_0044773c;
  if (*(char *)(DAT_0044773c + 0x20) == '\0') {
    *(undefined1 *)(DAT_0044773c + 0x20) = 1;
    iVar2 = FUN_0042ea34(DAT_0044773c,0x68);
  }
  bVar1 = FUN_00439d68(CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(param_2 + 4)));
  *(byte *)(param_2 + 4) = bVar1;
  FUN_00402ef0(param_1,param_2,extraout_ECX);
  if (*(int *)(param_2 + 0xc) == 0) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00429838 TWinControl.dynamic_ffb7 ==== */

void TWinControl_dynamic_ffb7(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00439eb4(param_1);
  if ((piVar1 == (int *)0x0) || (param_1 == piVar1)) {
    uVar2 = FUN_00425780((int)param_1,0xb043,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  else {
    FUN_00402ef0(piVar1,param_2,extraout_ECX);
  }
  return;
}


/* ==== 0042987c TWinControl.dynamic_ffc6 ==== */

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
        local_11 = FUN_00402ef0(param_1,CONCAT31(iVar3,local_5),&local_10);
      }
      else {
        local_11 = FUN_00402ef0(param_1,CONCAT31(iVar3,local_5),&local_10);
      }
    }
  }
  return local_11;
}


/* ==== 00429940 TWinControl.dynamic_ffc5 ==== */

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


/* ==== 0042998c TWinControl.dynamic_ffc4 ==== */

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


/* ==== 004299d8 FUN_004299d8 ==== */

undefined1 FUN_004299d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int i_val;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int j;
  
  if ((*(char *)(param_1 + 0x168) != '\0') && (i_val = FUN_0042781c(param_1), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar2 = (int *)FUN_004277e0(param_1,j);
      if (((*(char *)((int)piVar2 + 0x47) != '\0') &&
          (cVar1 = (**(code **)(*piVar2 + 0x4c))(), cVar1 != '\0')) &&
         ((((*(byte *)((int)piVar2 + 0x42) & 1) != 0 &&
           (iVar3 = FUN_00425780((int)piVar2,0x112,*(undefined4 *)(*(int *)(param_4 + -4) + 4),
                                 *(undefined4 *)(*(int *)(param_4 + -4) + 8)), iVar3 != 0)) ||
          ((uVar4 = FUN_00402e8c(piVar2,(int)&PTR_TWinControl_virtual_000_00420fa8),
           (char)uVar4 != '\0' &&
           (cVar1 = FUN_004299d8((int)piVar2,extraout_EDX,extraout_ECX,param_4), cVar1 != '\0'))))))
      {
        return 1;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00429a88 TWinControl.WMSysCommand ==== */

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
     ((param_1 != *(int **)(*(int *)PTR_DAT_00446c80 + 0x38) &&
      ((piVar4 = FUN_00439eb4(param_1), param_3 = extraout_ECX_01, iVar6 = extraout_EDX_01,
       piVar4 != (int *)0x0 &&
       (iVar5 = FUN_00425780((int)piVar4,0xb017,0,param_2), param_3 = extraout_ECX_02,
       iVar6 = extraout_EDX_02, iVar5 != 0)))))) {
    return;
  }
  if (((*(uint *)(param_2 + 4) & 0xfff0) == 0xf100) &&
     (cVar1 = FUN_004299d8((int)param_1,iVar6,param_3,(int)&stack0xfffffffc), cVar1 != '\0')) {
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00429b30 TWinControl.message_002f ==== */

void TWinControl_message_002f(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00429b50 TWinControl.WMParentNotify ==== */

void TWinControl_WMParentNotify(int *param_1,int *param_2)

{
  bool bVar1;
  
  if ((((short)param_2[1] == 1) || ((short)param_2[1] == 2)) &&
     (bVar1 = FUN_00428528((HWND)param_2[2],param_2), bVar1)) {
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00429b84 TWinControl.message_002e ==== */

void TWinControl_message_002e(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00428528((HWND)param_2[2],param_2);
  if (!bVar1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00429ba4 TWinControl.WMDestroy ==== */

void TWinControl_WMDestroy(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  RemovePropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_0044774a);
  RemovePropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_00447748);
  return;
}


/* ==== 00429bd8 TWinControl.WMNCDestroy ==== */

void TWinControl_WMNCDestroy(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}


/* ==== 00429bf4 TWinControl.WMNCHitTest ==== */

void TWinControl_WMNCHitTest(int *param_1,int param_2)

{
  if (((*(byte *)(param_1 + 8) & 0x10) != 0) && (param_1[9] != 0)) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00429c18 TWinControl.dynamic_ffd6 ==== */

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
    i_val = FUN_0042781c((int)param_1);
    i_val = i_val + -1;
    if (-1 < i_val) {
      do {
        if (((byte)local_10 & local_10._1_1_) != 0) break;
        piVar3 = (int *)FUN_004277e0((int)param_1,i_val);
        bVar2 = FUN_00402ef0(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),(byte)local_10),
                             extraout_ECX);
        local_10._0_2_ = CONCAT11(bVar2 | local_10._1_1_,(byte)local_10);
        local_10 = (uint)(ushort)local_10;
        i_val = i_val + -1;
      } while (i_val != -1);
    }
  }
  return local_10._1_1_;
}


/* ==== 00429c7c TWinControl.WMQueryNewPalette ==== */

void TWinControl_WMQueryNewPalette(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 4;
  uVar1 = FUN_00402ef0(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  *(uint *)(param_2 + 0xc) = uVar1 & 0x7f;
  return;
}


/* ==== 00429ca0 TWinControl.WMPaletteChanged ==== */

void TWinControl_WMPaletteChanged(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00402ef0(param_1,0,param_3);
  *(uint *)(param_2 + 0xc) = uVar1 & 0x7f;
  return;
}


/* ==== 00429cc0 TWinControl.CMShowHintChanged ==== */

void TWinControl_CMShowHintChanged(int *param_1)

{
  undefined2 extraout_var;
  
  (**(code **)(*param_1 + -0x10))();
  FUN_0042787c((int)param_1,CONCAT22(extraout_var,0xb023));
  return;
}


/* ==== 00429cd8 TWinControl.CMBiDiModeChanged ==== */

void TWinControl_CMBiDiModeChanged(int *param_1,int param_2)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar1;
  
  TControl_CMBiDiModeChanged(param_1,param_2);
  uVar1 = extraout_var;
  if ((PTR_DAT_00446da0[9] != '\0') && (*(int *)(param_2 + 4) == 0)) {
    FUN_00427e64((int)param_1);
    uVar1 = extraout_var_00;
  }
  FUN_0042787c((int)param_1,CONCAT22(uVar1,0xb03d));
  return;
}


/* ==== 00429d10 TWinControl.CMEnter ==== */

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
  
  if (PTR_DAT_00446da0[9] != '\0') {
    uVar1 = FUN_00424dbc((int)param_1);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    if ((char)uVar1 == '\0') {
      if (*(int *)(*(int *)PTR_DAT_00446c80 + 0x30) != 0) {
        UVar3 = 1;
        pCVar2 = FUN_00403dfc(*(undefined **)(*(int *)PTR_DAT_00446c80 + 0x30));
        LoadKeyboardLayoutA(pCVar2,UVar3);
        param_3 = extraout_ECX_01;
        param_2 = extraout_EDX_01;
      }
    }
    else if (*(int *)(*(int *)PTR_DAT_00446c80 + 0x2c) != 0) {
      UVar3 = 1;
      pCVar2 = FUN_00403dfc(*(undefined **)(*(int *)PTR_DAT_00446c80 + 0x2c));
      LoadKeyboardLayoutA(pCVar2,UVar3);
      param_3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
  }
  FUN_00402ef0(param_1,param_2,param_3);
  return;
}


/* ==== 00429d80 TWinControl.CMExit ==== */

void TWinControl_CMExit(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(param_1,param_2,param_3);
  return;
}


/* ==== 00429d8c TWinControl.CMDesignHitTest ==== */

void TWinControl_CMDesignHitTest(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_004281b8(param_1,param_2);
  if (!bVar1) {
    TControl_CMDesignHitTest(param_1,(int)param_2);
  }
  return;
}


/* ==== 00429dac TWinControl.CMChanged ==== */

void TWinControl_CMChanged(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
  }
  return;
}


/* ==== 00429dc0 TWinControl.CMChildKey ==== */

void TWinControl_CMChildKey(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
  }
  return;
}


/* ==== 00429dd4 TWinControl.CMDialogKey ==== */

void TWinControl_CMDialogKey(int param_1,int param_2)

{
  FUN_0042783c(param_1,param_2);
  return;
}


/* ==== 00429ddc TWinControl.CMDialogChar ==== */

void TWinControl_CMDialogChar(int param_1,int param_2)

{
  FUN_0042783c(param_1,param_2);
  return;
}


/* ==== 00429de4 TWinControl.CMFocusChanged ==== */

void TWinControl_CMFocusChanged(int param_1,int param_2)

{
  FUN_0042783c(param_1,param_2);
  return;
}


/* ==== 00429dec TWinControl.CMVisibleChanged ==== */

void TWinControl_CMVisibleChanged(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x47) == '\0') && (param_1[9] != 0)) {
    FUN_004275dc(param_1,'\0');
  }
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)) {
    FUN_00427fb4(param_1);
  }
  return;
}


/* ==== 00429e1c TWinControl.CMShowingChanged ==== */

void TWinControl_CMShowingChanged(int param_1)

{
  SetWindowPos(*(HWND *)(param_1 + 0x14c),(HWND)0x0,0,0,0,0,
               (uint)*(ushort *)(&DAT_004466e8 + (uint)*(byte *)(param_1 + 0x168) * 2));
  return;
}


/* ==== 00429e44 TWinControl.CMEnabledChanged ==== */

void TWinControl_CMEnabledChanged(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar1 == '\0') && (param_1[9] != 0)) {
    FUN_004275dc(param_1,'\0');
  }
  bVar2 = FUN_0042abb0((int)param_1);
  if ((bVar2) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    EnableWindow((HWND)param_1[0x53],-(uint)(cVar1 != '\0'));
  }
  return;
}


/* ==== 00429e8c TWinControl.CMColorChanged ==== */

void TWinControl_CMColorChanged(int *param_1)

{
  undefined2 extraout_var;
  
  TControl_CMColorChanged(param_1);
  TBrush_SetColor((int *)param_1[0x4c],param_1[0x18]);
  FUN_0042787c((int)param_1,CONCAT22(extraout_var,0xb009));
  return;
}


/* ==== 00429eb4 TWinControl.CMFontChanged ==== */

void TWinControl_CMFontChanged(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined4 uVar4;
  
  TControl_CMFontChanged(param_1);
  bVar1 = FUN_0042abb0((int)param_1);
  uVar3 = extraout_var;
  if (bVar1) {
    uVar4 = 0;
    uVar2 = FUN_004165a0(param_1[0x16]);
    FUN_00425780((int)param_1,0x30,uVar2,uVar4);
    uVar3 = extraout_var_00;
  }
  FUN_0042787c((int)param_1,CONCAT22(uVar3,0xb008));
  return;
}


/* ==== 00429ef0 TWinControl.CMCursorChanged ==== */

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
    piVar2 = FUN_00423258(&tStack_c,0);
    if (param_1 == piVar2) {
      uVar4 = 1;
      iVar3 = FUN_0042a8b4(param_1);
      FUN_00425780((int)param_1,0x20,iVar3,uVar4);
    }
  }
  return;
}


/* ==== 00429f30 TWinControl.CMBorderChanged ==== */

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
  bVar1 = FUN_0042abb0((int)param_1);
  if (bVar1) {
    uFlags = 0x37;
    cy = 0;
    cx = 0;
    Y = 0;
    X = 0;
    hWndInsertAfter = (HWND)0x0;
    hWnd = (HWND)FUN_0042a8b4(param_1);
    SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  }
  return;
}


/* ==== 00429f60 TWinControl.CMCtl3DChanged ==== */

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
    bVar1 = FUN_0042abb0(param_1);
    uVar3 = extraout_var;
    if (bVar1) {
      BVar2 = IsWindowVisible(*(HWND *)(param_1 + 0x14c));
      uVar3 = extraout_var_00;
      if (BVar2 != 0) {
        FUN_0042a7bc(param_1);
        uVar3 = extraout_var_01;
      }
    }
  }
  FUN_0042787c(param_1,CONCAT22(uVar3,0xb011));
  return;
}


/* ==== 00429fa0 TWinControl.CMParentCtl3DChanged ==== */

void TWinControl_CMParentCtl3DChanged(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x160) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TScrollBox_SetCtl3D(param_1,*(char *)(*(int *)(param_1 + 0x24) + 0x138));
    }
    else {
      TScrollBox_SetCtl3D(param_1,*(int *)(param_2 + 8) != 0);
    }
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  return;
}


/* ==== 00429fe0 TWinControl.CMSysColorChange ==== */

void TWinControl_CMSysColorChange(int param_1,int param_2)

{
  FUN_0042783c(param_1,param_2);
  return;
}


/* ==== 00429fe8 TWinControl.CMWinIniChange ==== */

void TWinControl_CMWinIniChange(int param_1,int param_2)

{
  FUN_0042783c(param_1,param_2);
  return;
}


/* ==== 00429ff0 TWinControl.CMFontChange ==== */

void TWinControl_CMFontChange(int param_1,int param_2)

{
  FUN_0042783c(param_1,param_2);
  return;
}


/* ==== 00429ff8 TWinControl.CMTimeChange ==== */

void TWinControl_CMTimeChange(int param_1,int param_2)

{
  FUN_0042783c(param_1,param_2);
  return;
}


/* ==== 0042a000 TWinControl.CMDrag ==== */

void TWinControl_CMDrag(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int local_18 [2];
  
  piVar1 = *(int **)(param_2 + 8);
  if (*(byte *)(param_2 + 4) < 4) {
    if (piVar1[3] != 0) {
      FUN_00425228((int *)piVar1[3],param_2);
    }
  }
  else if (*(byte *)(param_2 + 4) == 5) {
    cVar3 = '\0';
    FUN_00424398(param_1,piVar1,local_18);
    iVar2 = FUN_00428124((int)param_1,local_18,0,cVar3);
    *(int *)(param_2 + 0xc) = iVar2;
    if (iVar2 == 0) {
      *(int **)(param_2 + 0xc) = param_1;
    }
  }
  return;
}


/* ==== 0042a05c TWinControl.CMControlListChange ==== */

void TWinControl_CMControlListChange(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
  }
  return;
}


/* ==== 0042a070 TWinControl.CMSysFontChanged ==== */

void TWinControl_CMSysFontChanged(int param_1,int param_2)

{
  TControl_CMSysFontChanged(param_1);
  FUN_0042783c(param_1,param_2);
  return;
}


/* ==== 0042a08c FUN_0042a08c ==== */

bool FUN_0042a08c(int *param_1,int param_2,undefined4 param_3)

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
      piVar2 = (int *)FUN_00402ef0(piVar3,iVar5,param_3);
      param_3 = extraout_ECX;
      iVar5 = extraout_EDX;
      if (((piVar2 != (int *)0x0) && (piVar2[0xb] != 0)) &&
         (cVar1 = FUN_00402ef0(piVar2,param_2,extraout_ECX), param_3 = extraout_ECX_00,
         iVar5 = extraout_EDX_00, cVar1 != '\0')) {
        return true;
      }
    }
    piVar3 = FUN_00439eb4(param_1);
    if ((piVar3 != (int *)0x0) &&
       (cVar1 = FUN_00402ef0(piVar3,param_2,extraout_ECX_01), cVar1 != '\0')) {
      return true;
    }
  }
  LVar4 = FUN_00421a28(0xb016,(uint)*(ushort *)(param_2 + 4),*(LPARAM *)(param_2 + 8));
  return LVar4 != 0;
}


/* ==== 0042a120 TWinControl.CNKeyDown ==== */

void TWinControl_CNKeyDown(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_2 + 0xc) = 1;
  bVar1 = FUN_0042a08c(param_1,param_2,param_3);
  if (bVar1) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) goto LAB_0042a1ed;
  iVar2 = FUN_00425780((int)param_1,0xb02e,(uint)*(ushort *)(param_2 + 4),param_1);
  if (iVar2 != 0) {
    return;
  }
  uVar5 = 0;
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  if (uVar3 < 0x1c) {
    if ((uVar3 == 0x1b) || (uVar3 == 3)) {
LAB_0042a19d:
      uVar5 = 4;
    }
    else if (uVar3 == 9) {
      uVar5 = 2;
    }
    else if (uVar3 == 0xd) goto LAB_0042a19d;
  }
  else if (uVar3 - 0x25 < 4) {
    uVar5 = 1;
  }
  else if (uVar3 == 0x2b) goto LAB_0042a19d;
  if (((uVar5 != 0) &&
      (iVar2 = FUN_00425780((int)param_1,0xb01e,(uint)*(ushort *)(param_2 + 4),0), iVar2 == 0)) &&
     (uVar3 = FUN_00425780((int)param_1,0x87,0,0), (uVar3 & uVar5) == 0)) {
    uVar6 = *(undefined4 *)(param_2 + 8);
    piVar4 = FUN_00439eb4(param_1);
    iVar2 = FUN_00425780((int)piVar4,0xb005,(uint)*(ushort *)(param_2 + 4),uVar6);
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0042a1ed:
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


/* ==== 0042a1f8 TWinControl.CNKeyUp ==== */

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
    uVar2 = FUN_00425780(param_1,0xb01e,(uint)*(ushort *)(param_2 + 4),0);
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  return;
}


/* ==== 0042a24c TWinControl.CNChar ==== */

void TWinControl_CNChar(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    uVar1 = FUN_00425780((int)param_1,0x87,0,0);
    if ((uVar1 & 0x80) == 0) {
      uVar4 = *(undefined4 *)(param_2 + 8);
      piVar2 = FUN_00439eb4(param_1);
      iVar3 = FUN_00425780((int)piVar2,0xb006,(uint)*(ushort *)(param_2 + 4),uVar4);
      if (iVar3 != 0) {
        return;
      }
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}


/* ==== 0042a298 TWinControl.CNSysKeyDown ==== */

void TWinControl_CNSysKeyDown(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_2 + 0xc) = 1;
  bVar1 = FUN_0042a08c(param_1,param_2,param_3);
  if (bVar1) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    iVar2 = FUN_00425780((int)param_1,0xb02e,(uint)*(ushort *)(param_2 + 4),param_1);
    if (iVar2 != 0) {
      return;
    }
    uVar4 = *(undefined4 *)(param_2 + 8);
    piVar3 = FUN_00439eb4(param_1);
    iVar2 = FUN_00425780((int)piVar3,0xb005,(uint)*(ushort *)(param_2 + 4),uVar4);
    if (iVar2 != 0) {
      return;
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


/* ==== 0042a2f4 TWinControl.CNSysChar ==== */

void TWinControl_CNSysChar(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(short *)(param_2 + 4) != 0x20)) {
    uVar2 = *(undefined4 *)(param_2 + 8);
    piVar1 = FUN_00439eb4(param_1);
    uVar2 = FUN_00425780((int)piVar1,0xb006,(uint)*(ushort *)(param_2 + 4),uVar2);
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  return;
}


/* ==== 0042a328 TWinControl.virtual_07c ==== */

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
  bVar1 = FUN_0042abb0((int)param_1);
  if ((bVar1) && (BVar2 = IsIconic((HWND)param_1[0x53]), BVar2 == 0)) {
    SetWindowPos((HWND)param_1[0x53],(HWND)0x0,x_val,y_val,cx_val,cy_val,0x14);
  }
  else {
    param_1[0xc] = x_val;
    param_1[0xd] = y_val;
    param_1[0xe] = cx_val;
    param_1[0xf] = cy_val;
    bVar1 = FUN_0042abb0((int)param_1);
    if (bVar1) {
      windowplacement.length = 0x2c;
      GetWindowPlacement((HWND)param_1[0x53],&windowplacement);
      FUN_004241fc((int)param_1,local_40);
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
  FUN_00423f38((int)param_1);
  FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 0042a404 FUN_0042a404 ==== */

void FUN_0042a404(int param_1,undefined4 param_2,undefined4 param_3)

{
  int i_val;
  int *piVar1;
  int j;
  
  i_val = FUN_0042781c(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_004277e0(param_1,j);
      FUN_00402ef0(piVar1,param_2,param_3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0042a44c TWinControl.dynamic_ffed ==== */

void TWinControl_dynamic_ffed(int *param_1,int numerator,int denominator)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x42a461;
  FUN_00427384((int)param_1);
  puStack_18 = &LAB_0042a49d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0042a404((int)param_1,numerator,denominator);
  TControl_dynamic_ffed(param_1,numerator,denominator);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042a4a4;
  puStack_18 = (undefined1 *)0x42a49c;
  FUN_0042738c((int)param_1);
  return;
}


/* ==== 0042a4ac FUN_0042a4ac ==== */

void FUN_0042a4ac(int *param_1,int x_amount,int y_amount)

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
      goto LAB_0042a4d6;
    }
  }
  bVar1 = false;
LAB_0042a4d6:
  if (bVar1) {
    ScrollWindow((HWND)param_1[0x53],x_amount,y_amount,(RECT *)0x0,(RECT *)0x0);
  }
  i_val = FUN_0042781c((int)param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar3 = (int *)FUN_004277e0((int)param_1,j);
      uVar4 = FUN_00402e8c(piVar3,(int)&PTR_TWinControl_virtual_000_00420fa8);
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
  FUN_004273ac(param_1);
  return;
}


/* ==== 0042a584 TWinControl.virtual_0ac ==== */

void TWinControl_virtual_0ac(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xac))(piVar1,param_1);
  }
  return;
}


/* ==== 0042a59c FUN_0042a59c ==== */

void FUN_0042a59c(int param_1,int param_2)

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
    iVar3 = FUN_0040f080(*(int *)(iVar3 + 0x180),param_1);
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
        FUN_0040ef14(piVar4,iVar3);
        FUN_0040f0a0(*(int **)(*(int *)(param_1 + 0x24) + 0x180),param_2,param_1);
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
          piVar4 = (int *)FUN_0040f024(puVar2,param_2 + 1);
          hWndInsertAfter = (HWND)FUN_0042a8b4(piVar4);
        }
        else {
          if (iVar3 <= param_2) {
            return;
          }
          piVar4 = (int *)FUN_0040f024(puVar2,param_2);
          hWndInsertAfter = (HWND)FUN_0042a8b4(piVar4);
        }
      }
      SetWindowPos(*(HWND *)(param_1 + 0x14c),hWndInsertAfter,0,0,0,0,3);
    }
  }
  return;
}


/* ==== 0042a674 TWinControl.dynamic_ffd3 ==== */

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
    FUN_0042a59c(param_1,iVar2 + iVar3);
    return;
  }
  if (*(HWND *)(param_1 + 0x14c) != (HWND)0x0) {
    SetWindowPos(*(HWND *)(param_1 + 0x14c),
                 (HWND)(uint)*(ushort *)(&DAT_004466ec + (param_2 & 0x7f) * 2),0,0,0,0,3);
  }
  return;
}


/* ==== 0042a6d4 TWinControl.virtual_044 ==== */

void TWinControl_virtual_044(int *param_1,int *param_2)

{
  HWND pHVar1;
  HDC pHVar2;
  int *piVar3;
  HRGN hrgnClip;
  DWORD flags;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    pHVar2 = GetDC(pHVar1);
  }
  else {
    flags = 0x12;
    hrgnClip = (HRGN)0x0;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    pHVar2 = GetDCEx(pHVar1,hrgnClip,flags);
  }
  if (pHVar2 == (HDC)0x0) {
    piVar3 = FUN_0040a9f4((int *)&DAT_0040d8f0,'\x01',(undefined4 *)PTR_PTR_00446c68);
    FUN_0040346c(piVar3);
  }
  *param_2 = param_1[0x53];
  return;
}


/* ==== 0042a728 TWinControl.virtual_074 ==== */

void TWinControl_virtual_074(int param_1)

{
  FUN_00425780(param_1,0xb034,0,0);
  return;
}


/* ==== 0042a738 TWinControl.CMInvalidate ==== */

void TWinControl_CMInvalidate(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = FUN_0042abb0(param_1);
  if (bVar1) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00425780(*(int *)(param_1 + 0x24),0xb034,1,0);
    }
    if (*(int *)(param_2 + 4) == 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x14c),(RECT *)0x0,
                     -(uint)((*(byte *)(param_1 + 0x40) & 0x40) == 0));
    }
  }
  return;
}


/* ==== 0042a788 TWinControl.virtual_080 ==== */

void TWinControl_virtual_080(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_0042abb0(param_1);
  if (bVar1) {
    UpdateWindow(*(HWND *)(param_1 + 0x14c));
  }
  return;
}


/* ==== 0042a7a4 TWinControl.virtual_078 ==== */

void TWinControl_virtual_078(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  (**(code **)(*param_1 + 0x80))();
  return;
}


/* ==== 0042a7bc FUN_0042a7bc ==== */

void FUN_0042a7bc(int param_1)

{
  tagRECT local_14;
  
  FUN_004241fc(param_1,&local_14.left);
  InflateRect(&local_14,1,1);
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x24) + 0x14c),&local_14,-1);
  return;
}


/* ==== 0042a7f4 TWinControl.dynamic_ffbc ==== */

undefined1 TWinControl_dynamic_ffbc(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 local_c;
  
  local_c = 0;
  piVar2 = FUN_00439eb4(param_1);
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


/* ==== 0042a834 TWinControl.virtual_0b0 ==== */

void TWinControl_virtual_0b0(int *param_1)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00439eb4(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_0043d9ac(piVar1,param_1,extraout_ECX);
    return;
  }
  if (param_1[0x59] == 0) {
    FUN_00439edc(param_1);
  }
  else {
    hWnd = (HWND)FUN_0042a8b4(param_1);
    SetFocus(hWnd);
  }
  return;
}


/* ==== 0042a86c TWinControl.dynamic_ffb9 ==== */

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


/* ==== 0042a890 FUN_0042a890 ==== */

void FUN_0042a890(int *param_1)

{
  if (param_1[0x53] == 0) {
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_0042a890((int *)param_1[9]);
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  return;
}


/* ==== 0042a8b4 FUN_0042a8b4 ==== */

int FUN_0042a8b4(int *param_1)

{
  FUN_0042a890(param_1);
  return param_1[0x53];
}


/* ==== 0042a8c8 TWinControl.virtual_0a4 ==== */

void TWinControl_virtual_0a4(int param_1,int *param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  FUN_0040e5ac(0x7fffffff,0x7fffffff,0,param_2,0);
  i_val = FUN_0042781c(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_004277e0(param_1,j);
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


/* ==== 0042a95c TWinControl.virtual_03c ==== */

void TWinControl_virtual_03c(int *param_1,LPPOINT point)

{
  HWND hWnd;
  
  point->x = 0;
  point->y = 0;
  hWnd = (HWND)FUN_0042a8b4(param_1);
  ClientToScreen(hWnd,point);
  return;
}


/* ==== 0042a97c TWinControl.virtual_040 ==== */

void TWinControl_virtual_040(int *param_1,LPRECT rect)

{
  HWND hWnd;
  
  hWnd = (HWND)FUN_0042a8b4(param_1);
  GetClientRect(hWnd,rect);
  return;
}


/* ==== 0042a994 TWinControl.dynamic_ffef ==== */

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
    bVar1 = FUN_0042abb0((int)param_1);
    if (bVar1) {
      uFlags = 0x16;
      cy = param_1[0xf];
      cx = param_1[0xe];
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      hWnd = (HWND)FUN_0042a8b4(param_1);
      SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
      FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    }
  }
  return;
}


/* ==== 0042ac74 TWinControl.dynamic_ffb8 ==== */

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
      piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x16c),j);
      FUN_0040eec8(param_2,(int)piVar1);
      FUN_00402ef0(piVar1,param_2,extraout_ECX);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0042accc FUN_0042accc ==== */

void FUN_0042accc(int *param_1,int param_2,undefined4 param_3,char param_4,char param_5)

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
  puStack_28 = (undefined1 *)0x42acee;
  piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
  puStack_2c = &LAB_0042adc2;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00402ef0(param_1,piVar2,extraout_ECX);
  if (0 < piVar2[2]) {
    local_14 = FUN_0040f080((int)piVar2,param_2);
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
      piVar3 = (int *)FUN_0040f024(piVar2,i_val);
      cVar1 = FUN_00402ef0(piVar3,extraout_EDX,extraout_ECX_00);
      if (((cVar1 != '\0') && ((param_5 == '\0' || ((char)piVar3[0x5d] != '\0')))) &&
         ((param_4 == '\0' || ((int *)piVar3[9] == param_1)))) {
        local_10 = piVar3;
      }
    } while ((local_10 == (int *)0x0) && (i_val != local_14));
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0042adc9;
  puStack_2c = (undefined1 *)0x42adc1;
  FUN_00402d14(piVar2);
  return;
}


/* ==== 0042add8 FUN_0042add8 ==== */

void FUN_0042add8(int *param_1,int param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0042accc(param_1,param_2,param_3,param_4 ^ 1,param_4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb0))();
  }
  return;
}


/* ==== 0042ae04 TWinControl.dynamic_fffd ==== */

void TWinControl_dynamic_fffd
               (int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_0042781c(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_004277e0(param_1,j);
      if (*(int *)(iVar1 + 4) == param_2) {
        (*(code *)param_4)(param_5,iVar1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0042ae4c TWinControl.dynamic_fffa ==== */

void TWinControl_dynamic_fffa(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_virtual_000_00420fa8);
  if ((char)uVar1 != '\0') {
    FUN_0042a59c((int)param_2,param_3);
    return;
  }
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TControl_virtual_000_00420b14);
  if ((char)uVar1 != '\0') {
    FUN_00424a38(param_2,param_3);
  }
  return;
}


/* ==== 0042ae8c TWinControl.virtual_030 ==== */

void TWinControl_virtual_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  TControl_virtual_030(param_1,param_2,param_3);
  return;
}


/* ==== 0042ae94 FUN_0042ae94 ==== */

void FUN_0042ae94(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
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


/* ==== 0042af14 FUN_0042af14 ==== */

void FUN_0042af14(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

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
  bVar1 = FUN_0042abb0((int)param_1);
  if ((bVar1) && (i_val = FUN_0042781c((int)param_1), i_val != 0)) {
    (**(code **)(*param_1 + 0x40))(param_1,&rect);
    (**(code **)(*param_1 + 0x84))(param_1,&rect);
    puStack_78 = (undefined1 *)0x42af63;
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
      puStack_78 = &LAB_0042b2d6;
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
      i_val = FUN_0042781c((int)param_1);
      if (-1 < i_val + -1) {
        j = 0;
        do {
          piVar5 = (int *)FUN_004277e0((int)param_1,j);
          if ((*(char *)((int)piVar5 + 0x47) != '\0') ||
             (((*(byte *)(piVar5 + 8) & 0x10) != 0 && ((*(byte *)((int)piVar5 + 0x41) & 4) == 0))))
          {
            FUN_0042ae94(piVar5,&local_44,&local_4c,&local_50,&local_48);
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


/* ==== 0042b2f0 TWinControl.virtual_038 ==== */

void TWinControl_virtual_038(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  FUN_0042af14(param_1,param_2,param_3,param_4,param_5);
  TControl_virtual_038((int)param_1,param_2,param_3,param_4,param_5);
  return;
}


/* ==== 0042b32c TWinControl.dynamic_fff0 ==== */

void TWinControl_dynamic_fff0(int *param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  
  TControl_dynamic_fff0(param_1,param_2,param_3);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_virtual_000_0042f24c);
  if (((char)uVar1 != '\0') && ((param_3 == '\0' || (param_1[0x54] == 0)))) {
    param_1[0x54] = param_2[0x17];
  }
  return;
}


/* ==== 0042b36c TWinControl.dynamic_ffde ==== */

undefined ** TWinControl_dynamic_ffde(void)

{
  return &PTR_TWinControlActionLink_virtual_000_00420e80;
}


/* ==== 0042b394 TWinControl.virtual_000 ==== */

void TWinControl_virtual_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  TControl_virtual_000(param_1,param_2);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_virtual_000_0042f24c);
  if ((char)uVar1 != '\0') {
    FUN_0042fb98(param_2,param_1[0x54]);
  }
  return;
}


/* ==== 0042b3c4 TWinControl.virtual_034 ==== */

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
  puStack_48 = (undefined1 *)0x42b3e2;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  bVar2 = FUN_0042abb0((int)param_1);
  if ((bVar2) && (*(char *)((int)local_8 + 0x4b) != '\x05')) {
    if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
      puStack_48 = (undefined1 *)0x42b408;
      j = FUN_0042781c((int)local_8);
      if (j < 1) {
        return local_11;
      }
    }
    puStack_48 = (undefined1 *)0x42b41e;
    (**(code **)(*local_8 + 0xa4))(local_8,&local_28);
    puStack_48 = (undefined1 *)0x42b429;
    (**(code **)(*local_8 + 0x40))(local_8,&local_38);
    puStack_48 = (undefined1 *)0x42b437;
    (**(code **)(*local_8 + 0x84))(local_8,&local_38);
    puStack_48 = (undefined1 *)0x42b43f;
    FUN_00427384((int)local_8);
    puStack_4c = &LAB_0042b4e9;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    puStack_48 = &stack0xfffffffc;
    j = FUN_0042781c((int)local_8);
    if (-1 < j + -1) {
      i_val = 0;
      do {
        piVar4 = (int *)FUN_004277e0((int)local_8,i_val);
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
    puStack_48 = &DAT_0042b4f0;
    *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xffef;
    puStack_4c = (undefined1 *)0x42b4e8;
    uVar3 = FUN_0042738c((int)local_8);
    return uVar3;
  }
  return local_11;
}


/* ==== 0042b588 TWinControl.WMNCCalcSize ==== */

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


/* ==== 0042b618 TWinControl.WMNCPaint ==== */

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
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  local_10 = GetWindowDC(pHVar1);
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa8;
  ptVar2 = &left_val_2;
  pHVar1 = (HWND)FUN_0042a8b4(local_8);
  GetClientRect(pHVar1,ptVar2);
  ptVar2 = &left_val;
  pHVar1 = (HWND)FUN_0042a8b4(local_8);
  GetWindowRect(pHVar1,ptVar2);
  cPoints = 2;
  ptVar2 = &left_val;
  pHVar1 = (HWND)FUN_0042a8b4(local_8);
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
    pHVar1 = (HWND)FUN_0042a8b4(local_8);
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
      index_val = (**(code **)PTR_DAT_00446b78)();
      left_val.right = left_val.right + index_val;
    }
    if ((*(byte *)((int)local_8 + 0x122) & 8) != 0) {
      left_val.bottom = left_val.bottom + i_val;
    }
    if ((window_long & 0x100000) != 0) {
      i_val = (**(code **)PTR_DAT_00446b78)();
      left_val.bottom = left_val.bottom + i_val;
    }
    DrawEdge(local_10,&left_val,
             *(uint *)(&DAT_004466f0 + (uint)*(byte *)((int)local_8 + 0x123) * 4) |
             *(uint *)(&DAT_00446700 + (uint)*(byte *)(local_8 + 0x49) * 4),
             (uint)*(byte *)((int)local_8 + 0x122) |
             *(uint *)(&DAT_00446710 + (uint)*(byte *)((int)local_8 + 0x125) * 4) |
             *(uint *)(&DAT_00446720 + (uint)*(byte *)(local_8 + 0x4e) * 4) | 0x2000);
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
  hbr = (HBRUSH)FUN_00416d90(local_8[0x4c]);
  FillRect(local_10,&left_val,hbr);
  *in_FS_OFFSET = uVar5;
  hDC = local_10;
  pHVar1 = (HWND)FUN_0042a8b4(local_8);
  ReleaseDC(pHVar1,hDC);
  return;
}


/* ==== 0042b8a0 TWinControl.WMContextMenu ==== */

void TWinControl_WMContextMenu(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int local_1c [2];
  int local_14 [2];
  
  if (*(int *)(param_2 + 0xc) == 0) {
    cVar3 = '\0';
    FUN_004069d4(*(undefined4 *)(param_2 + 8),local_14);
    FUN_00424398(param_1,local_14,local_1c);
    iVar1 = FUN_00428124((int)param_1,local_1c,0,cVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_00425780(iVar1,0x7b,0,*(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = uVar2;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      TControl_WMContextMenu(param_1,param_2);
    }
  }
  return;
}


/* ==== 0042b90c TGraphicControl.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TControl_virtual_02c(param_1,'\0',param_3);
  piVar1 = FUN_00416eac((int *)&PTR_TPersistent_virtual_000_00420138,'\x01',extraout_ECX_00);
  param_1[0x48] = (int)piVar1;
  FUN_00423588(piVar1,(int)param_1);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0042b968 TGraphicControl.Destroy ==== */

void TGraphicControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1 == DAT_004466e4) {
    FUN_00421cbc((int *)0x0);
  }
  FUN_00402d14((int *)piVar1[0x48]);
  TControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0042b9a8 TGraphicControl.WMPaint ==== */

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
    puStack_10 = (undefined1 *)0x42b9ca;
    FUN_00417174(param_1[0x48]);
    puStack_14 = &LAB_0042ba43;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_1c = (undefined1 *)0x42b9e9;
    puStack_10 = &stack0xfffffffc;
    FUN_004174b0((int *)param_1[0x48],*(int *)(param_2 + 4));
    puStack_20 = &LAB_0042ba20;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x84))();
    *in_FS_OFFSET = uStack_24;
    puStack_1c = &LAB_0042ba27;
    puStack_20 = (undefined1 *)0x42ba1f;
    FUN_004174b0((int *)param_1[0x48],0);
    return;
  }
  return;
}


/* ==== 0042ba50 TGraphicControl.virtual_084 ==== */

void TGraphicControl_virtual_084(void)

{
  return;
}


/* ==== 0042ba54 THintWindow.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomControl_virtual_02c(param_1,'\0',param_3);
  TLabel_SetColor((int)param_1,0x80ffff);
  TCanvas_SetFont(param_1[0x7c]);
  TBrush_SetStyle(*(int **)(param_1[0x7c] + 0x14),'\x01');
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0042babc THintWindow.virtual_090 ==== */

void THintWindow_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  param_2[1] = -0x7f800000;
  param_2[9] = param_2[9] | 0x800;
  if (DAT_00447740 != '\0') {
    param_2[2] = 0x80;
  }
  FUN_00427910(param_1,(uint *)(param_2 + 2));
  return;
}


/* ==== 0042baf8 THintWindow.WMNCHitTest ==== */

void THintWindow_WMNCHitTest(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  return;
}


/* ==== 0042bb00 THintWindow.WMNCPaint ==== */

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
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  hdc_val = GetWindowDC(pHVar1);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  FUN_0040e5ac(0,0,local_8[0xe],&local_1c.left,local_8[0xf]);
  DrawEdge(hdc_val,&local_1c,1,0xf);
  *in_FS_OFFSET = uVar2;
  hDC = hdc_val;
  pHVar1 = (HWND)FUN_0042a8b4(local_8);
  ReleaseDC(pHVar1,hDC);
  return;
}


/* ==== 0042bb80 THintWindow.virtual_0b4 ==== */

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
  puStack_24 = &LAB_0042bc0e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  (**(code **)(*param_1 + 0x40))(param_1,&rect);
  rect.left = rect.left + 2;
  rect.top = rect.top + 2;
  TFont_SetColor(*(int **)(param_1[0x7c] + 0xc),-0x7fffffe9,extraout_ECX);
  format_val = FUN_00426708((int)param_1);
  format_val = format_val | 0x810;
  lprc = &rect;
  cchText = -1;
  TLabel_GetCaption((int)param_1,(int *)&local_18);
  lpchText = FUN_00403dfc(local_18);
  hdc = (HDC)FUN_00417430((int *)param_1[0x7c]);
  DrawTextA(hdc,lpchText,cchText,lprc,format_val);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0042bc15;
  puStack_24 = (undefined1 *)0x42bc0d;
  FUN_004039b8((int *)&local_18);
  return;
}


/* ==== 0042bc1c THintWindow.virtual_0c4 ==== */

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


/* ==== 0042bc80 FUN_0042bc80 ==== */

void FUN_0042bc80(int *param_1)

{
  FUN_00427e1c(param_1);
  return;
}


/* ==== 0042bc88 THintWindow.CMTextChanged ==== */

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
  puStack_18 = &LAB_0042bd13;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + -0x10))();
  if ((char)param_1[0x7e] == '\0') {
    TLabel_GetCaption((int)param_1,(int *)&local_8);
    LVar1 = FUN_00417290((int *)param_1[0x7c],local_8);
    TControl_SetWidth(param_1,LVar1 + 6);
    TLabel_GetCaption((int)param_1,(int *)&local_c);
    LVar1 = FUN_004172ac((int *)param_1[0x7c],local_c);
    TControl_SetHeight(param_1,LVar1 + 4);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042bd1a;
  puStack_18 = (undefined1 *)0x42bd12;
  FUN_004039dc((int *)&local_c,2);
  return;
}


/* ==== 0042bd20 THintWindow.virtual_0b8 ==== */

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
  puStack_2c = &LAB_0042be2d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  TLabel_SetCaption((int)param_1,param_3);
  local_18[3] = local_18[3] + 4;
  FUN_00425824((int)local_8,local_18);
  i_val = FUN_0044019c();
  if (i_val < local_8[0xf] + local_18[1]) {
    local_18[1] = FUN_0044019c();
    local_18[1] = local_18[1] - local_8[0xf];
  }
  i_val = FUN_004401a8();
  if (i_val < local_8[0xe] + local_18[0]) {
    local_18[0] = FUN_004401a8();
    local_18[0] = local_18[0] - local_8[0xe];
  }
  i_val = FUN_00440190();
  if (local_18[0] < i_val) {
    local_18[0] = FUN_00440190();
  }
  i_val = FUN_00440184();
  if (local_18[3] < i_val) {
    local_18[3] = FUN_00440184();
  }
  uFlags = 0x50;
  i_val = local_8[0xf];
  cx = local_8[0xe];
  hWndInsertAfter = (HWND)0xffffffff;
  X = local_18[0];
  Y = local_18[1];
  hWnd = (HWND)FUN_0042a8b4(local_8);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,i_val,uFlags);
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = uStack_30;
  *(undefined1 *)(local_8 + 0x7e) = 0;
  return;
}


/* ==== 0042be3c THintWindow.virtual_0bc ==== */

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


/* ==== 0042be68 THintWindow.virtual_0c0 ==== */

void THintWindow_virtual_0c0(int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4)

{
  uint format_val;
  LPCSTR lpchText;
  HDC hdc;
  int cchText;
  LPRECT lprc;
  
  FUN_0040e5ac(0,0,param_2,&param_4->left,0);
  format_val = FUN_00426708(param_1);
  format_val = format_val | 0xc10;
  cchText = -1;
  lprc = param_4;
  lpchText = FUN_00403dfc(param_3);
  hdc = (HDC)FUN_00417430(*(int **)(param_1 + 0x1f0));
  DrawTextA(hdc,lpchText,cchText,lprc,format_val);
  param_4->right = param_4->right + 6;
  param_4->bottom = param_4->bottom + 2;
  return;
}


/* ==== 0042bec4 FUN_0042bec4 ==== */

void FUN_0042bec4(HWND wnd,int param_2,int param_3,int *param_4)

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


/* ==== 0042bf04 FUN_0042bf04 ==== */

void FUN_0042bf04(int param_1)

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
    flags = (**(code **)PTR_DAT_00446b78)();
    cy = 0xd;
    cx = (**(code **)PTR_DAT_00446b78)();
    local_8 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd8;
    pHVar1 = (HICON)FUN_00440610(*(int *)PTR_DAT_00446d84,(int)*(short *)(param_1 + 0x60));
    FUN_0041d51c(local_8,pHVar1);
    pHVar1 = (HICON)FUN_00440610(*(int *)PTR_DAT_00446d84,(int)*(short *)(param_1 + 0x60));
    FUN_0041d51c(local_8,pHVar1);
    ImageList_SetDragCursorImage(local_8,0,0,0);
    ImageList_GetDragImage((POINT *)0x0,&dx_hotspot);
    ImageList_SetDragCursorImage(local_8,1,dx_hotspot.x,dx_hotspot.y);
    *in_FS_OFFSET = uVar2;
    ImageList_Destroy(local_8);
    return;
  }
  return;
}


/* ==== 0042bfd0 FUN_0042bfd0 ==== */

bool FUN_0042bfd0(int *param_1,int track,int dx_hotspot,int dy_hotspot)

{
  bool bVar1;
  HIMAGELIST himlTrack;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    param_1[0x1c] = track;
    param_1[0x1a] = dx_hotspot;
    param_1[0x1b] = dy_hotspot;
    himlTrack = (HIMAGELIST)FUN_00430264(param_1);
    ImageList_BeginDrag(himlTrack,track,dx_hotspot,dy_hotspot);
    *(undefined1 *)((int)param_1 + 0x62) = 1;
  }
  return bVar1;
}


/* ==== 0042c018 FUN_0042c018 ==== */

void FUN_0042c018(int param_1,short param_2)

{
  if ((param_2 != *(short *)(param_1 + 0x60)) &&
     (*(short *)(param_1 + 0x60) = param_2, *(char *)(param_1 + 0x62) != '\0')) {
    FUN_0042bf04(param_1);
  }
  return;
}


/* ==== 0042c030 FUN_0042c030 ==== */

bool FUN_0042c030(int *param_1,HWND wnd,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    if (*(char *)((int)param_1 + 0x62) == '\0') {
      FUN_0042bfd0(param_1,param_1[0x1c],param_1[0x1a],param_1[0x1b]);
    }
    FUN_0042bf04((int)param_1);
    bVar2 = FUN_0042c090((int)param_1,wnd,param_3,param_4);
    if (bVar2) {
      ShowCursor(0);
    }
  }
  return bVar2;
}


/* ==== 0042c090 FUN_0042c090 ==== */

bool FUN_0042c090(int param_1,HWND wnd,int param_3,int param_4)

{
  bool bVar1;
  BOOL BVar2;
  bool bVar3;
  int x_val;
  int y_val;
  int local_8;
  
  bVar3 = false;
  local_8 = param_3;
  bVar1 = FUN_00430128(param_1);
  if ((bVar1) && (wnd != *(HWND *)(param_1 + 100))) {
    FUN_0042c0f4(param_1);
    *(HWND *)(param_1 + 100) = wnd;
    FUN_0042bec4(wnd,local_8,param_4,&x_val);
    BVar2 = ImageList_DragEnter(*(HWND *)(param_1 + 100),x_val,y_val);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}


/* ==== 0042c0f4 FUN_0042c0f4 ==== */

void FUN_0042c0f4(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00430128(param_1);
  if ((bVar1) && (*(int *)(param_1 + 100) != 0)) {
    ImageList_DragLeave(*(HWND *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


/* ==== 0042c118 FUN_0042c118 ==== */

bool FUN_0042c118(int param_1,int param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int x_val;
  int y_val;
  
  bVar1 = FUN_00430128(param_1);
  if (bVar1) {
    FUN_0042bec4(*(HWND *)(param_1 + 100),param_2,param_3,&x_val);
    BVar2 = ImageList_DragMove(x_val,y_val);
    bVar1 = BVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* ==== 0042c15c FUN_0042c15c ==== */

void FUN_0042c15c(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00430128(param_1);
  if (bVar1) {
    ImageList_DragShowNolock(-1);
  }
  return;
}


/* ==== 0042c174 FUN_0042c174 ==== */

void FUN_0042c174(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00430128(param_1);
  if (bVar1) {
    ImageList_DragShowNolock(0);
  }
  return;
}


/* ==== 0042c18c FUN_0042c18c ==== */

bool FUN_0042c18c(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_00430128(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x62) != '\0')) {
    iVar2 = FUN_0042c0f4(param_1);
    ImageList_EndDrag();
    bVar1 = iVar2 != 0;
    *(undefined1 *)(param_1 + 0x62) = 0;
    FUN_0042c018(param_1,-1);
    ShowCursor(-1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* ==== 0042c1d4 TCustomControl.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  piVar1 = FUN_00416eac((int *)&PTR_TPersistent_virtual_000_00420138,'\x01',extraout_ECX_00);
  param_1[0x7c] = (int)piVar1;
  FUN_00423588(piVar1,(int)param_1);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0042c230 TCustomControl.Destroy ==== */

void TCustomControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[0x7c]);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0042c260 TCustomControl.WMPaint ==== */

void TCustomControl_WMPaint(int *param_1,int param_2)

{
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 0x100;
  TWinControl_WMPaint(param_1,param_2);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfeff;
  return;
}


/* ==== 0042c280 TCustomControl.virtual_0a8 ==== */

void TCustomControl_virtual_0a8(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x42c298;
  FUN_00417174(param_1[0x7c]);
  puStack_14 = &LAB_0042c31e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)0x42c2b6;
  puStack_10 = &stack0xfffffffc;
  FUN_004174b0((int *)param_1[0x7c],param_2);
  puStack_20 = &LAB_0042c2fb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004235a0(param_1[0x7c]);
  (**(code **)(*param_1 + 0xb4))();
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0042c302;
  puStack_20 = (undefined1 *)0x42c2fa;
  FUN_004174b0((int *)param_1[0x7c],0);
  return;
}


/* ==== 0042c32c TCustomControl.virtual_0b4 ==== */

void TCustomControl_virtual_0b4(void)

{
  return;
}


/* ==== 0042c330 FUN_0042c330 ==== */

void FUN_0042c330(int *param_1,char param_2,int param_3)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_fffffff0,in_stack_fffffff4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[7] = param_3;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


/* ==== 0042c354 FUN_0042c354 ==== */

int FUN_0042c354(int param_1)

{
  int iVar1;
  int i_val;
  
  i_val = 0;
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    i_val = i_val + 1;
  }
  return i_val;
}


/* ==== 0042c368 FUN_0042c368 ==== */

void FUN_0042c368(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (*(char *)(iVar2 + 0x10) != '\x01') {
    if (*(char *)(iVar2 + 0x10) == '\x02') {
      FUN_0042c3f8(param_1,'\x02');
    }
    else {
      piVar1 = FUN_0040a938((int *)&DAT_00406ed0,'\x01',(undefined4 *)0x0);
      FUN_0040346c(piVar1);
    }
    return;
  }
  FUN_0042c3f8(param_1,'\x01');
  return;
}


/* ==== 0042c3b0 FUN_0042c3b0 ==== */

void FUN_0042c3b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (*(char *)(iVar2 + 0x10) != '\x01') {
    if (*(char *)(iVar2 + 0x10) == '\x02') {
      FUN_0042c464(param_1,'\x02');
    }
    else {
      piVar1 = FUN_0040a938((int *)&DAT_00406ed0,'\x01',(undefined4 *)0x0);
      FUN_0040346c(piVar1);
    }
    return;
  }
  FUN_0042c464(param_1,'\x01');
  return;
}


/* ==== 0042c3f8 FUN_0042c3f8 ==== */

undefined4 FUN_0042c3f8(int param_1,char param_2)

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


/* ==== 0042c464 FUN_0042c464 ==== */

int FUN_0042c464(int param_1,char param_2)

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
      (iVar3 = FUN_0042c354(iVar3), iVar3 == 1)))) {
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
    iStack_10 = FUN_0042c368(iVar3);
    iStack_10 = *(int *)(iVar3 + 0x20) - iStack_10;
  }
  return iStack_10;
}


/* ==== 0042c50c FUN_0042c50c ==== */

void FUN_0042c50c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar2 = FUN_0042c464(param_1,'\x01');
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      return;
    }
    iVar2 = FUN_0042c464(param_1,'\x02');
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = FUN_0042c354(param_1);
  iVar3 = iVar2 / iVar3;
  iVar4 = FUN_0042c368(iVar1);
  *(int *)(iVar1 + 0x20) = iVar4 + iVar3;
  FUN_0042c68c(iVar1);
  for (iVar1 = *(int *)(iVar1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    *(int *)(iVar1 + 0x20) = *(int *)(*(int *)(iVar1 + 0x18) + 0x20) + iVar3;
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + iVar2 % iVar3;
    }
    FUN_0042c68c(iVar1);
  }
  return;
}


/* ==== 0042c59c FUN_0042c59c ==== */

void FUN_0042c59c(int param_1,int *param_2)

{
  int *piVar1;
  
  FUN_004039b8(param_2);
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 8) == 0) {
      piVar1 = FUN_0040a9f4((int *)&DAT_00406ed0,'\x01',(undefined4 *)PTR_PTR_00446bf8);
      FUN_0040346c(piVar1);
    }
    FUN_00403a0c(param_2,*(undefined4 **)(*(int *)(param_1 + 4) + 8));
  }
  return;
}


/* ==== 0042c5e0 FUN_0042c5e0 ==== */

uint FUN_0042c5e0(int param_1,undefined4 param_2)

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
  puStack_1c = (undefined1 *)0x42c607;
  uVar2 = FUN_00402ef0(*(int **)(uVar1 + 0x14),param_2,&local_c);
  local_5 = local_c != (int *)0x0;
  if ((bool)local_5) {
    *(int *)(uVar1 + 0x38) = param_1;
    puStack_20 = &LAB_0042c651;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    uVar3 = 0;
    puStack_1c = &stack0xfffffffc;
    FUN_00425318(local_c,*(int **)(uVar1 + 0x14),0,0);
    *in_FS_OFFSET = uVar3;
    *(undefined4 *)(uVar1 + 0x38) = 0;
    return uVar1;
  }
  return uVar2 & 0xffffff00;
}


/* ==== 0042c664 FUN_0042c664 ==== */

undefined4 FUN_0042c664(void)

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


/* ==== 0042c68c FUN_0042c68c ==== */

void FUN_0042c68c(int param_1)

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
    iVar1 = FUN_0042c464(param_1,'\x02');
    iVar2 = FUN_0042c464(local_8,'\x01');
    uVar3 = FUN_0042c664();
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
    iVar4 = FUN_0042c3f8(local_8,'\x01');
    iVar5 = FUN_0042c3f8(local_8,'\x02');
    FUN_0040e5c8(iVar5,iVar4,iVar1,piVar6,iVar2);
    (**(code **)**(undefined4 **)(local_8 + 0x1c))
              (*(undefined4 **)(local_8 + 0x1c),*(undefined4 *)(local_8 + 4),local_18);
    FUN_0042421c(*(int **)(local_8 + 4),local_18);
  }
  return;
}


/* ==== 0042c7dc TDockTree.virtual_024 ==== */

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
    puStack_30 = (undefined1 *)0x42c7f1;
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
  }
  puStack_30 = (undefined1 *)0x42c804;
  FUN_00402ce4(param_1,'\0',param_3);
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
  puStack_30 = (undefined1 *)0x42c854;
  i_val = FUN_0042c330((int *)&LAB_00421768,'\x01',(int)param_1);
  param_1[0x19] = i_val;
  puStack_30 = (undefined1 *)0x42c866;
  piVar2 = FUN_00416bb0((int *)&PTR_TPersistent_virtual_000_00415148,'\x01',extraout_ECX_00);
  param_1[4] = (int)piVar2;
  puStack_30 = (undefined1 *)0x42c87a;
  uVar3 = FUN_0041d118(0,0xffffff);
  puStack_30 = (undefined1 *)0x42c883;
  FUN_00416d30(piVar2,uVar3);
  puStack_30 = (undefined1 *)0x42c88b;
  FUN_0042c9a4((int)param_1);
  puStack_34 = &LAB_0042c8e8;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  i_val = FUN_0042781c(param_3);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar4 = 0;
      uVar3 = FUN_004277e0(param_3,j);
      (**(code **)(*param_1 + 8))(param_1,uVar3,3,uVar4);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_0042c50c(param_1[0x19]);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0042c8ef;
  puStack_34 = (undefined1 *)0x42c8e7;
  FUN_0042c9a8((int)param_1);
  return;
}


/* ==== 0042c944 TDockTree.Destroy ==== */

void TDockTree_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar2 = FUN_00403074(param_1,param_2);
  if (piVar2[0xc] != 0) {
    iVar1 = piVar2[5];
    *(int *)(iVar1 + 0x28) = piVar2[0xc];
    *(int *)(iVar1 + 0x2c) = piVar2[0xd];
  }
  FUN_0042d968((int)piVar2,(int *)piVar2[0x19],extraout_ECX);
  FUN_00402d14((int *)piVar2[4]);
  TObject_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar2);
  }
  return;
}


/* ==== 0042c990 TDockTree.virtual_000 ==== */

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


/* ==== 0042c9a4 FUN_0042c9a4 ==== */

void FUN_0042c9a4(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return;
}


/* ==== 0042c9a8 FUN_0042c9a8 ==== */

void FUN_0042c9a8(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  if (*(int *)(param_1 + 0x6c) < 1) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_0042e188(param_1);
  }
  return;
}


/* ==== 0042c9bc FUN_0042c9bc ==== */

void FUN_0042c9bc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_4 + -4) == *(int *)(param_1 + 4)) {
    *(int *)(param_4 + -8) = param_1;
    return;
  }
  if ((*(int *)(param_4 + -8) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = param_4;
    FUN_0042c9bc(*(int *)(param_1 + 0xc),param_2,param_3,param_4);
    param_3 = iVar1;
    param_2 = extraout_EDX;
  }
  if ((*(int *)(param_4 + -8) == 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_0042c9bc(*(int *)(param_1 + 8),param_2,param_3,param_4);
  }
  return;
}


/* ==== 0042ca14 FUN_0042ca14 ==== */

undefined4 FUN_0042ca14(int param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 100) != 0)) {
    FUN_0042c9bc(*(int *)(param_1 + 100),0,param_3,(int)&stack0xfffffffc);
  }
  return 0;
}


/* ==== 0042ca40 FUN_0042ca40 ==== */

void FUN_0042ca40(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_ECX;
  int iVar1;
  
  (**(code **)(param_4 + 8))(*(undefined4 *)(param_4 + 0xc),param_1);
  iVar1 = extraout_ECX;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = param_4;
    FUN_0042ca40(*(int *)(param_1 + 0xc),param_4,extraout_ECX,param_4);
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0042ca40(*(int *)(param_1 + 8),param_4,iVar1,param_4);
  }
  return;
}


/* ==== 0042ca7c FUN_0042ca7c ==== */

void FUN_0042ca7c(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 100);
  }
  FUN_0042ca40(param_2,param_2,param_3,(int)&stack0xfffffffc);
  return;
}


/* ==== 0042ca94 FUN_0042ca94 ==== */

void FUN_0042ca94(int param_1,int param_2,undefined4 *param_3)

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
  i_val = FUN_0042ca14(param_1,param_2,(int)param_3);
  if (i_val == 0) {
    FUN_00402a2c(param_3,0x10,0);
  }
  else {
    iVar1 = FUN_0042c464(i_val,'\x01');
    iVar2 = FUN_0042c464(i_val,'\x02');
    iVar3 = FUN_0042c3f8(i_val,'\x01');
    i_val = FUN_0042c3f8(i_val,'\x02');
    FUN_0040e5c8(i_val,iVar3,iVar2,piVar4,iVar1);
    piVar4 = local_1c;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *param_3 = *piVar4;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      param_3 = param_3 + (uint)bVar5 * -2 + 1;
    }
  }
  return;
}


/* ==== 0042cb08 TDockTree.virtual_004 ==== */

undefined4 TDockTree_virtual_004(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0042d1bc(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}


/* ==== 0042cb18 TDockTree.virtual_008 ==== */

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
            i_val = FUN_00424788((int)param_2);
          }
          if (local_14 == 0) {
            local_14 = FUN_00424774((int)param_2);
          }
        }
        FUN_0040e5c8(local_24,local_20,i_val,local_34,local_14);
        piVar2 = local_34;
        piVar4 = &local_24;
        for (i_val = 4; i_val != 0; i_val = i_val + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
          piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
        }
        (**(code **)*param_1)(param_1,param_2,&local_24);
        FUN_0042421c(param_2,&local_24);
        iVar1 = FUN_0042c330((int *)&LAB_00421768,'\x01',(int)param_1);
        i_val = param_1[0x19];
        *(int *)(i_val + 8) = iVar1;
        *(int *)(iVar1 + 0x14) = i_val;
        *(int **)(iVar1 + 4) = param_2;
      }
      else {
        if ((local_5 == 0) || (local_5 == 5)) {
          local_5 = 4;
        }
        piVar2 = (int *)FUN_0042ca14((int)param_1,(int)param_2,param_3);
        i_val = extraout_ECX;
        if (piVar2 != (int *)0x0) {
          FUN_0042da00((int)param_1,piVar2);
          i_val = extraout_ECX_00;
        }
        local_c = FUN_0042ca14((int)param_1,param_4,i_val);
        local_d = *(char *)(local_5 + 0x446728);
        i_val = FUN_0042c354(param_1[0x19]);
        if (i_val == 1) {
          i_val = param_1[0x19];
          *(char *)(i_val + 0x10) = local_d;
          if (local_d == '\x01') {
            i_val = FUN_0042c464(*(int *)(i_val + 8),'\x02');
            *(int *)(param_1[0x19] + 0x20) = i_val;
            i_val = FUN_0042c464(*(int *)(param_1[0x19] + 8),'\x01');
            param_1[0x1a] = i_val;
          }
          else if (local_d == '\x02') {
            i_val = FUN_0042c464(*(int *)(i_val + 8),'\x01');
            *(int *)(param_1[0x19] + 0x20) = i_val;
            i_val = FUN_0042c464(*(int *)(param_1[0x19] + 8),'\x02');
            param_1[0x1a] = i_val;
          }
        }
        i_val = FUN_0042c330((int *)&LAB_00421768,'\x01',(int)param_1);
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
          FUN_0042ceb0((int)param_1,i_val,local_c,*(char *)(local_5 + 0x446730));
        }
        else {
          FUN_0042cd28((int)param_1,i_val,local_c,*(char *)(local_5 + 0x446730),local_d);
        }
      }
    }
    else {
      *(int **)(i_val + 4) = param_2;
      FUN_0042c68c(i_val);
    }
    (**(code **)(*(int *)param_1[5] + 0x74))();
  }
  return;
}


/* ==== 0042cd28 FUN_0042cd28 ==== */

void FUN_0042cd28(int param_1,int param_2,int param_3,char param_4,undefined1 param_5)

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
  
  iVar2 = FUN_0042c330((int *)&LAB_00421768,'\x01',param_1);
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
      FUN_0042ca7c(param_1,*(int *)(iVar2 + 8),extraout_ECX);
      uVar1 = *(uint *)(*(int *)(param_1 + 100) + 0x20);
      iVar3 = (int)uVar1 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
      }
      *(int *)(param_1 + 0x4c) = iVar3;
      FUN_0042ca7c(param_1,*(int *)(iVar2 + 8),extraout_ECX_01);
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
      FUN_0042ca7c(param_1,*(int *)(iVar2 + 8),extraout_ECX);
      uVar4 = extraout_ECX_00;
    }
    FUN_0042ca7c(param_1,0,uVar4);
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
  FUN_0042c50c(iVar2);
  FUN_0042ca7c(param_1,0,extraout_ECX_03);
  return;
}


/* ==== 0042ceb0 FUN_0042ceb0 ==== */

void FUN_0042ceb0(int param_1,int param_2,int param_3,char param_4)

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
  FUN_0042c50c(*(int *)(param_3 + 0x14));
  return;
}


/* ==== 0042cf20 FUN_0042cf20 ==== */

void FUN_0042cf20(int param_1,int param_2,undefined4 param_3,int param_4)

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
        goto LAB_0042d0ea;
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
        goto LAB_0042d0ea;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_0042c3f8(param_1,'\x01');
    iVar2 = FUN_0042c3f8(param_1,'\x02');
    iVar3 = extraout_ECX;
    param_2 = extraout_EDX;
    if (*(char *)(*(int *)(param_4 + -8) + 0x1c) == '\0') {
      if (((iVar2 <= **(int **)(param_4 + -4)) &&
          (param_2 = *(int *)(param_4 + -8),
          **(int **)(param_4 + -4) <= iVar2 + *(int *)(param_2 + 0x18))) &&
         (iVar1 <= *(int *)(*(int *)(param_4 + -4) + 4))) {
        iVar2 = FUN_0042c464(param_1,'\x01');
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
      iVar1 = FUN_0042c464(param_1,'\x02');
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
LAB_0042d0ea:
  if ((*(int *)(param_4 + -0x10) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = param_4;
    FUN_0042cf20(*(int *)(param_1 + 0xc),param_2,iVar3,param_4);
    iVar3 = iVar1;
    param_2 = extraout_EDX_02;
  }
  if ((*(int *)(param_4 + -0x10) == 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_0042cf20(*(int *)(param_1 + 8),param_2,iVar3,param_4);
  }
  return;
}


/* ==== 0042d128 FUN_0042d128 ==== */

int * FUN_0042d128(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  
  i_val = FUN_0042781c(*(int *)(*(int *)(param_4 + -8) + 0x14));
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      piVar1 = (int *)FUN_004277e0(*(int *)(*(int *)(param_4 + -8) + 0x14),i_val);
      if ((*(char *)((int)piVar1 + 0x47) != '\0') &&
         ((uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_virtual_000_00420fa8),
          (char)uVar2 == '\0' || ((char)piVar1[0x5a] != '\0')))) {
        FUN_0040e594(*param_1 - piVar1[0xc],param_1[1] - piVar1[0xd],&local_c);
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


/* ==== 0042d1bc FUN_0042d1bc ==== */

int FUN_0042d1bc(int param_1,int *param_2,undefined4 *param_3)

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
  piVar1 = FUN_0042d128(param_2,0,param_3,(int)&stack0xfffffffc);
  if ((piVar1 == (int *)0x0) || (*(int *)(param_1 + 0x14) != piVar1[0x24])) {
    if (*(int *)(*(int *)(param_1 + 100) + 8) != 0) {
      iVar2 = FUN_0042c354(*(int *)(param_1 + 100));
      if ((0 < iVar2) && (piVar1 == (int *)0x0)) {
        FUN_0042cf20(*(int *)(*(int *)(param_1 + 100) + 8),extraout_EDX,extraout_ECX,
                     (int)&stack0xfffffffc);
      }
    }
  }
  else {
    local_14 = FUN_0042ca14(param_1,(int)piVar1,(int)puVar3);
    if (local_14 != 0) {
      *param_3 = 1;
    }
  }
  return local_14;
}


/* ==== 0042d248 FUN_0042d248 ==== */

void FUN_0042d248(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint local_8;
  
  local_8 = param_3;
  FUN_004039b8(param_1);
  (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),&local_8,4);
  if (0 < (int)local_8) {
    FUN_00403f6c(param_1,local_8);
    (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),*param_1,local_8);
  }
  return;
}


/* ==== 0042d290 TDockTree.virtual_00c ==== */

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
  puStack_38 = &LAB_0042d488;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_1;
  local_8 = param_2;
  FUN_0042d968(param_1,*(int **)(param_1 + 100),0);
  FUN_0042c9a4(local_c);
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
      FUN_0042d248(&local_10,uVar6,(uint)puVar5,(int)&stack0xfffffffc);
      puVar5 = puVar1;
      uVar6 = extraout_EDX_00;
      if (local_10 != 0) {
        FUN_00402ef0(*(int **)(local_c + 0x14),local_10,&local_14);
        puVar5 = extraout_ECX_00;
        uVar6 = extraout_EDX_01;
        if (local_14 != (int *)0x0) {
          TLabel_SetVisible(local_14,0,extraout_ECX_00);
          uVar7 = 0;
          FUN_00425318(local_14,*(int **)(local_c + 0x14),0,0);
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
LAB_0042d36d:
  do {
    (**(code **)(*local_8 + 4))(local_8,&local_18,4);
    if (local_18 == DAT_00446738) {
      *in_FS_OFFSET = uVar7;
      FUN_0042c9a8(local_c);
      return;
    }
    piVar2 = (int *)FUN_0042c330((int *)&LAB_00421768,'\x01',local_c);
    (**(code **)(*local_8 + 4))(local_8,piVar2 + 4,1);
    (**(code **)(*local_8 + 4))(local_8,piVar2 + 8,4);
    FUN_0042d248(&local_10,extraout_EDX_03,extraout_ECX_02,(int)&stack0xfffffffc);
    if (local_10 != 0) {
      uVar3 = FUN_0042c5e0((int)piVar2,local_10);
      if ((char)uVar3 == '\0') {
        FUN_00402d14(piVar2);
        goto LAB_0042d36d;
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


/* ==== 0042d498 FUN_0042d498 ==== */

void FUN_0042d498(int param_1,int param_2,undefined4 param_3,int param_4)

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
  FUN_0040e5ac(param_1,param_2,iVar1 + param_1 + -2,&local_14.left,iVar1 + param_2 + -2);
  rect = &local_14;
  pHVar2 = (HDC)FUN_00417430(*(int **)(param_4 + -4));
  DrawFrameControl(pHVar2,rect,UVar3,UVar4);
  return;
}


/* ==== 0042d4f0 FUN_0042d4f0 ==== */

void FUN_0042d4f0(int x_val,int y_val,int x_val_2,int y_val_2,int param_5)

{
  TPen_SetColor(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000014);
  FUN_0041719c(*(int **)(param_5 + -4),x_val_2,y_val);
  FUN_0041713c(*(int **)(param_5 + -4),x_val,y_val);
  FUN_0041713c(*(int **)(param_5 + -4),x_val,y_val_2);
  TPen_SetColor(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000010);
  FUN_0041713c(*(int **)(param_5 + -4),x_val_2,y_val_2);
  FUN_0041713c(*(int **)(param_5 + -4),x_val_2,y_val + -1);
  return;
}


/* ==== 0042d578 TDockTree.virtual_010 ==== */

void TDockTree_virtual_010(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if ((byte)(*(char *)(*(int *)(param_1 + 0x14) + 0x4b) - 1U) < 2) {
    FUN_0042d498(*param_4 + 1,param_4[1] + 1,param_3,(int)&stack0xfffffffc);
    FUN_0042d4f0(*param_4 + 3,param_4[1] + *(int *)(param_1 + 0x18) + 1,*param_4 + 5,param_4[3] + -2
                 ,(int)&stack0xfffffffc);
    FUN_0042d4f0(*param_4 + 6,param_4[1] + *(int *)(param_1 + 0x18) + 1,*param_4 + 8,param_4[3] + -2
                 ,(int)&stack0xfffffffc);
  }
  else {
    FUN_0042d498((param_4[2] - *(int *)(param_1 + 0x18)) + 1,param_4[1] + 1,param_3,
                 (int)&stack0xfffffffc);
    FUN_0042d4f0(*param_4 + 2,param_4[1] + 3,(param_4[2] - *(int *)(param_1 + 0x18)) + -2,
                 param_4[1] + 5,(int)&stack0xfffffffc);
    FUN_0042d4f0(*param_4 + 2,param_4[1] + 6,(param_4[2] - *(int *)(param_1 + 0x18)) + -2,
                 param_4[1] + 8,(int)&stack0xfffffffc);
  }
  return;
}


/* ==== 0042d654 TDockTree.virtual_028 ==== */

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
  
  puStack_30 = (undefined1 *)0x42d66d;
  local_8 = FUN_00416eac((int *)&PTR_TPersistent_virtual_000_00420138,'\x01',param_3);
  puStack_34 = &LAB_0042d7aa;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x42d689;
  puStack_30 = &stack0xfffffffc;
  FUN_00423588(local_8,param_1[5]);
  puStack_3c = (undefined1 *)0x42d691;
  FUN_00417174((int)local_8);
  puStack_40 = &LAB_0042d78d;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x42d6a9;
  puStack_3c = &stack0xfffffffc;
  FUN_004174b0(local_8,param_2);
  puStack_4c = &LAB_0042d770;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  iVar1 = FUN_0042781c(param_1[5]);
  if (-1 < iVar1 + -1) {
    j = 0;
    i_val = iVar1;
    do {
      iVar1 = FUN_004277e0(param_1[5],j);
      if ((*(char *)(iVar1 + 0x47) != '\0') && (*(int *)(iVar1 + 0x90) == param_1[5])) {
        FUN_004241fc(iVar1,&local_20);
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
  puStack_48 = &LAB_0042d777;
  puStack_4c = (undefined1 *)0x42d76f;
  FUN_004174b0(local_8,0);
  return;
}


/* ==== 0042d7b8 TDockTree.virtual_014 ==== */

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
  i_val = FUN_00429240(*(int *)(param_1 + 0x14));
  if (((param_3 == 0) || (*(char *)(param_3 + 0x8c) == '\0')) || (i_val < 2)) {
    uVar2 = TForm_GetClientHeight(*(int **)(param_1 + 0x14));
    piVar4 = local_20;
    uVar3 = TForm_GetClientWidth(*(int **)(param_1 + 0x14));
    FUN_0040e5ac(0,0,uVar3,piVar4,uVar2);
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
    FUN_0040e5c8(local_8,local_c,uVar5,local_20,local_10);
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
  hWndFrom = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x14));
  MapWindowPoints(hWndFrom,hWndTo,points,cPoints);
  return;
}


/* ==== 0042d934 FUN_0042d934 ==== */

void FUN_0042d934(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((int *)param_1[3] != (int *)0x0) {
    uVar1 = param_4;
    FUN_0042d934((int *)param_1[3],param_4,param_3,param_4);
    param_3 = uVar1;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_0042d934((int *)param_1[2],param_4,param_3,param_4);
  }
  FUN_00402d14(param_1);
  return;
}


/* ==== 0042d968 FUN_0042d968 ==== */

void FUN_0042d968(int param_1,int *param_2,undefined4 param_3)

{
  if (param_2 != (int *)0x0) {
    if ((int *)param_2[2] != (int *)0x0) {
      FUN_0042d934((int *)param_2[2],param_2,param_3,&stack0xfffffffc);
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
    FUN_00402d14(param_2);
  }
  return;
}


/* ==== 0042d9c4 TDockTree.virtual_018 ==== */

void TDockTree_virtual_018(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0042ca14(param_1,param_2,param_3);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == *(int **)(param_1 + 0x38)) {
      piVar1[1] = 0;
    }
    else {
      FUN_0042da00(param_1,piVar1);
    }
    *(undefined1 *)(param_2 + 0x8c) = 0;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
  }
  return;
}


/* ==== 0042da00 FUN_0042da00 ==== */

void FUN_0042da00(int param_1,int *param_2)

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
  puStack_28 = &LAB_0042dc56;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (param_2 == (int *)0x0) {
    FUN_00405298((undefined4 *)PTR_PTR_00446b84,(int *)&local_8);
    FUN_00405298((undefined4 *)PTR_PTR_00446ab4,(int *)&local_c);
    FUN_00403c40((int *)&local_8,local_c);
    piVar2 = FUN_0040a938((int *)&DAT_00406ed0,'\x01',local_8);
    FUN_0040346c(piVar2);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  if (param_2[1] == 0) {
    FUN_00405298((undefined4 *)PTR_PTR_00446b84,(int *)&local_10);
    FUN_00405298((undefined4 *)PTR_PTR_00446cc8,(int *)&local_14);
    FUN_00403c40((int *)&local_10,local_14);
    piVar2 = FUN_0040a938((int *)&DAT_00406ed0,'\x01',local_10);
    FUN_0040346c(piVar2);
  }
  iVar3 = FUN_0042c354(param_2[5]);
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
        FUN_00402d14(*(int **)(param_1 + 100));
        *(int **)(param_1 + 100) = piVar2;
        piVar2[3] = 0;
        piVar2[6] = 0;
        piVar2[5] = 0;
        FUN_0042e188(param_1);
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
        FUN_0042ca7c(param_1,*(int *)(iVar3 + 0x14),extraout_ECX);
        FUN_00402d14((int *)param_2[5]);
        FUN_00402d14(piVar2);
      }
    }
    else {
      iVar3 = param_2[5];
      if (*(int *)(param_1 + 100) == iVar3) {
        *(int **)(*(int *)(param_1 + 100) + 8) = piVar2;
        piVar2[6] = 0;
        piVar2[3] = 0;
        iVar3 = FUN_0042c3b0(*(int *)(param_1 + 100));
        piVar2[8] = iVar3;
        FUN_0042c68c((int)piVar2);
        uVar4 = extraout_ECX_00;
      }
      else {
        *(undefined1 *)(iVar3 + 0x10) = 0;
        *(int *)(iVar3 + 4) = piVar2[1];
        *(undefined4 *)(iVar3 + 8) = 0;
        FUN_00402d14(piVar2);
        uVar4 = extraout_ECX_01;
      }
      FUN_0042ca7c(param_1,param_2[5],uVar4);
    }
  }
  else {
    iVar3 = param_2[6];
    if (iVar3 == 0) {
      *(int *)(param_2[5] + 8) = param_2[3];
      iVar3 = param_2[3];
      *(undefined4 *)(iVar3 + 0x18) = 0;
      FUN_0042c68c(iVar3);
      uVar4 = extraout_ECX_02;
    }
    else {
      *(int *)(iVar3 + 0xc) = param_2[3];
      if (param_2[3] != 0) {
        *(int *)(param_2[3] + 0x18) = iVar3;
      }
      iVar3 = param_2[6];
      *(int *)(iVar3 + 0x20) = param_2[8];
      FUN_0042c68c(iVar3);
      uVar4 = extraout_ECX_03;
    }
    FUN_0042ca7c(param_1,param_2[5],uVar4);
  }
  FUN_00402d14(param_2);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0042dc5d;
  puStack_28 = (undefined1 *)0x42dc55;
  FUN_004039dc((int *)&local_14,4);
  return;
}


