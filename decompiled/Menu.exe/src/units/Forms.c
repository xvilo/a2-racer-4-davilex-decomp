/* Menu.exe — units/Forms.pas: 358 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0042e198 TForm.GetClientWidth ==== */

undefined4 TForm_GetClientWidth(int *param_1)

{
  undefined1 auStack_14 [8];
  undefined4 uStack_c;
  
  (**(code **)(*param_1 + 0x40))(param_1,auStack_14);
  return uStack_c;
}


/* ==== 0042e1b0 FUN_0042e1b0 ==== */

void FUN_0042e1b0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int aiStack_10 [2];
  
  uVar1 = TForm_GetClientHeight(param_1);
  Classes_Point(param_2,uVar1,aiStack_10);
  FUN_0042e5b8(param_1,aiStack_10);
  return;
}


/* ==== 0042e1dc TForm.GetClientHeight ==== */

undefined4 TForm_GetClientHeight(int *param_1)

{
  undefined1 auStack_14 [12];
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0x40))(param_1,auStack_14);
  return uStack_8;
}


/* ==== 0042e1f4 FUN_0042e1f4 ==== */

void FUN_0042e1f4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int aiStack_10 [2];
  
  uVar1 = TForm_GetClientWidth(param_1);
  Classes_Point(uVar1,param_2,aiStack_10);
  FUN_0042e5b8(param_1,aiStack_10);
  return;
}


/* ==== 0042e4f4 TScrollBox.SetAutoSize ==== */

void TScrollBox_SetAutoSize(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((cVar1 != (char)param_1[0x13]) && (*(char *)(param_1 + 0x13) = cVar1, cVar1 != '\0')) {
    System__CallDynaInst(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00434b00 TForm.SetBorderWidth ==== */

void TForm_SetBorderWidth(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = param_2;
    Controls_TControl_Perform(param_1,0xb03b,0,0);
  }
  return;
}


/* ==== 00434c6c TForm.SetUseDockManager ==== */

void TForm_SetUseDockManager(int *param_1,byte param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_00434cd0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != *(byte *)(param_1 + 0x5f)) &&
     (*(byte *)(param_1 + 0x5f) = param_2, ((*(byte *)(param_1 + 8) & 0x10) == 0 & param_2) != 0)) {
    System__CallDynaInst(param_1,&local_8,param_3);
    FUN_00405878(param_1 + 0x52,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00434cd7;
  puStack_18 = (undefined1 *)0x434ccf;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 00434cdc Controls.TWinControl.HandleAllocated ==== */

bool Controls_TWinControl_HandleAllocated(int param_1)

{
  return *(int *)(param_1 + 0x14c) != 0;
}


/* ==== 00434ce8 FUN_00434ce8 ==== */

void FUN_00434ce8(int param_1)

{
  BOOL BVar1;
  uint window_long;
  HWND hWnd;
  int i_val;
  RECT *pRVar2;
  tagRECT *rect;
  tagRECT rect_2;
  WINDOWPLACEMENT windowplacement;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x14c));
  if (BVar1 == 0) {
    GetWindowRect(*(HWND *)(param_1 + 0x14c),&rect_2);
  }
  else {
    windowplacement.length = 0x2c;
    GetWindowPlacement(*(HWND *)(param_1 + 0x14c),&windowplacement);
    pRVar2 = &windowplacement.rcNormalPosition;
    rect = &rect_2;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      rect->left = pRVar2->left;
      pRVar2 = (RECT *)&pRVar2->top;
      rect = (tagRECT *)((int)rect + 4);
    }
  }
  window_long = GetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10);
  if (((window_long & 0x40000000) != 0) &&
     (hWnd = (HWND)GetWindowLongA(*(HWND *)(param_1 + 0x14c),-8), hWnd != (HWND)0x0)) {
    ScreenToClient(hWnd,(LPPOINT)&rect_2);
    ScreenToClient(hWnd,(LPPOINT)&rect_2.right);
  }
  *(LONG *)(param_1 + 0x30) = rect_2.left;
  *(LONG *)(param_1 + 0x34) = rect_2.top;
  *(LONG *)(param_1 + 0x38) = rect_2.right - rect_2.left;
  *(LONG *)(param_1 + 0x3c) = rect_2.bottom - rect_2.top;
  FUN_0042de78(param_1);
  return;
}


/* ==== 00444208 FUN_00444208 ==== */

void FUN_00444208(HWND wnd,char param_2)

{
  uint new_long;
  
  if (wnd != (HWND)0x0) {
    new_long = GetWindowLongA(wnd,-0x14);
    if (param_2 == '\0') {
      if ((new_long & 0x200) == 0) {
        return;
      }
      new_long = new_long & 0xfffffdff;
    }
    else {
      if ((new_long & 0x200) != 0) {
        return;
      }
      new_long = new_long | 0x200;
    }
    SetWindowLongA(wnd,-0x14,new_long);
    SetWindowPos(wnd,(HWND)0x0,0,0,0,0,0x37);
  }
  return;
}


/* ==== 00444254 FUN_00444254 ==== */

void FUN_00444254(void)

{
  if ((HWND)DAT_004ac7d4[9] != (HWND)0x0) {
    ShowOwnedPopups((HWND)DAT_004ac7d4[9],0);
  }
  FUN_0044d814((int)DAT_004ac7d4,'\0');
  FUN_0041581c((int)DAT_004ac7d4);
  FUN_004157c4(DAT_004ac7d4);
  return;
}


/* ==== 004442dc FUN_004442dc ==== */

void FUN_004442dc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD dwThreadId;
  undefined4 *in_FS_OFFSET;
  WNDENUMPROC lpfn;
  LPARAM lParam;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  uVar2 = DAT_004aa948;
  uVar1 = DAT_004aa93c;
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  DAT_004aa948 = 0;
  puStack_24 = &LAB_0044437f;
  local_28 = *in_FS_OFFSET;
  DAT_004aa93c = param_1;
  *in_FS_OFFSET = &local_28;
  puStack_30 = &LAB_00444348;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  lParam = 0;
  lpfn = (WNDENUMPROC)&LAB_0044428c;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  DAT_004aa948 = uVar2;
  DAT_004aa93c = uVar1;
  return;
}


/* ==== 00444390 FUN_00444390 ==== */

void FUN_00444390(undefined4 *param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  
  while (param_1 != (undefined4 *)0x0) {
    BVar2 = IsWindow((HWND)param_1[1]);
    if (BVar2 != 0) {
      EnableWindow((HWND)param_1[1],-1);
    }
    puVar1 = (undefined4 *)*param_1;
    System__FreeMem((int)param_1);
    param_1 = puVar1;
  }
  return;
}


/* ==== 004443c8 FUN_004443c8 ==== */

undefined4 FUN_004443c8(void)

{
  BOOL BVar1;
  uint window_long;
  HWND in_stack_00000004;
  
  if ((in_stack_00000004 != DAT_004aa93c) && (in_stack_00000004 != *(HWND *)(DAT_004ac7d4 + 0x24)))
  {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        window_long = GetWindowLongA(in_stack_00000004,-0x14);
        if ((window_long & 8) == 0) {
          if (DAT_004aa940 == (HWND)0x0) {
            DAT_004aa940 = in_stack_00000004;
          }
        }
        else if (DAT_004aa944 == (HWND)0x0) {
          DAT_004aa944 = in_stack_00000004;
        }
      }
    }
  }
  return 0xffffffff;
}


/* ==== 0044442c FUN_0044442c ==== */

int FUN_0044442c(undefined4 param_1)

{
  DWORD dwThreadId;
  code *lpfn;
  LPARAM lParam;
  
  DAT_004aa940 = 0;
  DAT_004aa944 = 0;
  lParam = 0;
  lpfn = FUN_004443c8;
  DAT_004aa93c = param_1;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  if (DAT_004aa940 != 0) {
    return DAT_004aa940;
  }
  return DAT_004aa944;
}


/* ==== 00444468 FUN_00444468 ==== */

bool FUN_00444468(HWND wnd,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_004aa938;
  SendMessageA(wnd,param_2 & 0xffff,0,0);
  return iVar1 == DAT_004aa938;
}


/* ==== 00444488 FUN_00444488 ==== */

undefined4 FUN_00444488(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  uVar1 = 0xffffffff;
  if (*in_stack_00000008 == in_stack_00000004) {
    uVar1 = 0;
    *(undefined1 *)(in_stack_00000008 + 1) = 1;
  }
  return uVar1;
}


/* ==== 004444a8 FUN_004444a8 ==== */

undefined1 FUN_004444a8(void)

{
  DWORD dwThreadId;
  code *lpfn;
  HWND *lParam;
  HWND active_window;
  undefined1 local_4;
  
  active_window = GetActiveWindow();
  lParam = &active_window;
  local_4 = 0;
  lpfn = FUN_00444488;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
  return local_4;
}


/* ==== 00444554 FUN_00444554 ==== */

void FUN_00444554(void)

{
  return;
}


/* ==== 00444578 FUN_00444578 ==== */

int FUN_00444578(int param_1,int param_2)

{
  return param_2 - (param_1 + 5);
}


/* ==== 00444580 FUN_00444580 ==== */

undefined1 * FUN_00444580(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  puVar1 = DAT_004ac7e0;
  if (DAT_004ac7e4 == (undefined1 *)0x0) {
    puVar1 = VirtualAlloc((LPVOID)0x0,0x1000,0x1000,0x40);
    *puVar1 = DAT_004ac7e0;
    System_Move((undefined4 *)&DAT_004aa94c,puVar1 + 1,2);
    iVar2 = FUN_00444578((int)puVar1 + 5,0x444558);
    *(int *)((int)puVar1 + 6) = iVar2;
    puVar3 = (undefined1 *)((int)puVar1 + 10);
    do {
      puVar4 = puVar3;
      *puVar4 = 0xe8;
      iVar2 = FUN_00444578((int)puVar4,(int)(puVar1 + 1));
      *(int *)(puVar4 + 1) = iVar2;
      *(undefined1 **)(puVar4 + 5) = DAT_004ac7e4;
      puVar3 = puVar4 + 0xd;
      DAT_004ac7e4 = puVar4;
    } while ((int)(puVar4 + 0xd) - (int)puVar1 < 0xffc);
  }
  DAT_004ac7e0 = puVar1;
  puVar3 = DAT_004ac7e4;
  puVar1 = (undefined4 *)(DAT_004ac7e4 + 5);
  DAT_004ac7e4 = (undefined1 *)*(undefined4 *)(DAT_004ac7e4 + 5);
  *puVar1 = in_stack_00000004;
  *(undefined4 *)(puVar3 + 9) = in_stack_00000008;
  return puVar3;
}


/* ==== 00444618 FUN_00444618 ==== */

void FUN_00444618(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 5) = DAT_004ac7e4;
    DAT_004ac7e4 = param_1;
  }
  return;
}


/* ==== 0044463c FUN_0044463c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0044463c(void)

{
  BOOL BVar1;
  HWND hWnd;
  undefined1 *dwNewLong;
  undefined4 in_stack_00000004;
  tagWNDCLASSA wndclass;
  
  _DAT_004aa960 = DAT_004ac4dc;
  BVar1 = GetClassInfoA(DAT_004ac4dc,PTR_s_TPUtilWindow_004aa974,&wndclass);
  if ((BVar1 == 0) || (wndclass.lpfnWndProc != DefWindowProcA)) {
    if (BVar1 != 0) {
      UnregisterClassA(PTR_s_TPUtilWindow_004aa974,DAT_004ac4dc);
    }
    RegisterClassA((WNDCLASSA *)&DAT_004aa950);
  }
  hWnd = CreateWindowExA(0x80,PTR_s_TPUtilWindow_004aa974,"",0x80000000,0,0,0,0,(HWND)0x0,(HMENU)0x0
                         ,DAT_004ac4dc,(LPVOID)0x0);
  if (in_stack_00000004._2_2_ != 0) {
    dwNewLong = FUN_00444580();
    SetWindowLongA(hWnd,-4,(LONG)dwNewLong);
  }
  return hWnd;
}


/* ==== 004446f0 FUN_004446f0 ==== */

void FUN_004446f0(HWND wnd)

{
  code *window_long;
  
  window_long = (code *)GetWindowLongA(wnd,-4);
  DestroyWindow(wnd);
  if (window_long != DefWindowProcA) {
    FUN_00444618((int)window_long);
  }
  return;
}


/* ==== 00444718 FUN_00444718 ==== */

byte FUN_00444718(uint param_1)

{
  SHORT SVar1;
  byte bVar2;
  
  bVar2 = (param_1 & 4) != 0;
  if ((param_1 & 8) != 0) {
    bVar2 = bVar2 | 4;
  }
  if ((param_1 & 1) != 0) {
    bVar2 = bVar2 | 8;
  }
  if ((param_1 & 2) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  if ((param_1 & 0x10) != 0) {
    bVar2 = bVar2 | 0x20;
  }
  SVar1 = GetKeyState(0x12);
  if (SVar1 < 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}


/* ==== 0044476c FUN_0044476c ==== */

byte FUN_0044476c(uint param_1)

{
  SHORT SVar1;
  byte bVar2;
  
  SVar1 = GetKeyState(0x10);
  bVar2 = SVar1 < 0;
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    bVar2 = bVar2 | 4;
  }
  if ((param_1 & 0x20000000) != 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}


/* ==== 004447a8 FUN_004447a8 ==== */

byte FUN_004447a8(int param_1)

{
  byte bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x10) & 0x80) != 0;
  if ((*(byte *)(param_1 + 0x11) & 0x80) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((*(byte *)(param_1 + 0x12) & 0x80) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((*(byte *)(param_1 + 1) & 0x80) != 0) {
    bVar1 = bVar1 | 8;
  }
  if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  if ((*(byte *)(param_1 + 4) & 0x80) != 0) {
    bVar1 = bVar1 | 0x20;
  }
  return bVar1;
}


/* ==== 004447f4 FUN_004447f4 ==== */

void FUN_004447f4(undefined4 param_1,int param_2)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  char *local_c;
  char *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  local_c = (char *)0x0;
  puStack_1c = &LAB_00444852;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00441a00(param_2,(int *)&local_8);
  pcVar1 = local_8;
  System__LStrFromChar((int *)&local_c,param_1);
  FUN_004082b8(local_c,pcVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00444859;
  puStack_1c = (undefined1 *)0x444851;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 00444864 Forms.GetParentForm ==== */

int * Forms_GetParentForm(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  do {
    piVar2 = param_1;
    param_1 = (int *)piVar2[9];
  } while ((int *)piVar2[9] != (int *)0x0);
  uVar1 = System__IsClass(piVar2,(int)&PTR_TWinControl_virtual_000_00442cf0);
  if ((char)uVar1 == '\0') {
    return (int *)0x0;
  }
  return piVar2;
}


/* ==== 0044488c FUN_0044488c ==== */

void FUN_0044488c(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  puStack_20 = &LAB_004448fd;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  piVar1 = Forms_GetParentForm(param_1);
  if (piVar1 == (int *)0x0) {
    local_c = param_1[2];
    local_8 = 0xb;
    piVar1 = &local_c;
    in_stack_ffffffd4 = 0;
    System_LoadResString((undefined4 *)PTR_PTR_004ab8f0,(int *)&local_10);
    uVar2 = SysUtils_Exception_CreateFmt
                      ((int)&DAT_0040ea0c,'\x01',local_10,in_stack_ffffffd4,piVar1);
    System__RaiseExcept(uVar2);
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_00444904;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 0044490c FUN_0044490c ==== */

int * FUN_0044490c(int *param_1,char param_2,int param_3,undefined1 param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined2 *)((int)param_1 + 10) = 0x50;
  *(undefined2 *)(param_1 + 2) = 8;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 10;
  param_1[0x10] = 4;
  param_1[0xf] = 0xc;
  param_1[10] = -0x7fffffec;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0044499c TControlScrollBar.virtual_008 ==== */

void TControlScrollBar_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00441cd8);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_008(param_1,param_2);
  }
  else {
    TControlScrollBar_SetVisible((int)param_1,(char)param_2[7]);
    TControlScrollBar_SetRange((int)param_1,param_2[4]);
    TControlScrollBar_SetPosition((int)param_1,param_2[3]);
    *(short *)(param_1 + 2) = (short)param_2[2];
  }
  return;
}


/* ==== 004449ec FUN_004449ec ==== */

void FUN_004449ec(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = FUN_00444ba4(param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_0042ed8c(*(int *)(param_1 + 4));
      if ((char)uVar1 == '\0') {
        TControlScrollBar_SetPosition(param_1,0);
      }
      else {
        TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0x10));
      }
    }
  }
  return;
}


/* ==== 00444a24 FUN_00444a24 ==== */

void FUN_00444a24(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x47) != '\0') {
    cVar1 = *(char *)(param_1 + 0x4b);
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      if ((*(char *)(param_1 + 0x4b) == '\x03') || ((*(byte *)(param_1 + 0x51) & 5) == 1)) {
        iVar2 = FUN_00420cb4(*(int *)(param_4 + -4),
                             *(int *)(*(int *)(param_4 + -8) + 0xc) + *(int *)(param_1 + 0x30) +
                             *(int *)(param_1 + 0x38));
        *(int *)(param_4 + -4) = iVar2;
      }
    }
    else if (cVar1 == '\x04') {
      *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + *(int *)(param_1 + 0x38);
    }
  }
  return;
}


/* ==== 00444a90 FUN_00444a90 ==== */

void FUN_00444a90(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x47) != '\0') {
    if (*(byte *)(param_1 + 0x4b) < 2) {
      if ((*(char *)(param_1 + 0x4b) == '\x01') || ((*(byte *)(param_1 + 0x51) & 10) == 2)) {
        iVar1 = FUN_00420cb4(*(int *)(param_4 + -4),
                             *(int *)(*(int *)(param_4 + -8) + 0xc) + *(int *)(param_1 + 0x34) +
                             *(int *)(param_1 + 0x3c));
        *(int *)(param_4 + -4) = iVar1;
      }
    }
    else if (*(byte *)(param_1 + 0x4b) == 2) {
      *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + *(int *)(param_1 + 0x3c);
    }
  }
  return;
}


/* ==== 00444af8 FUN_00444af8 ==== */

void FUN_00444af8(int param_1)

{
  char cVar1;
  int i_val;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int j;
  undefined1 *puVar3;
  
  if ((char)(*(int **)(param_1 + 4))[0x7e] != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xb4))();
    if (cVar1 == '\0') {
      FUN_0044522c(param_1,0);
    }
    else {
      i_val = Controls_TWinControl_GetControlCount(*(int *)(param_1 + 4));
      if (-1 < i_val + -1) {
        j = 0;
        do {
          if (*(char *)(param_1 + 0x18) == '\0') {
            puVar3 = &stack0xfffffffc;
            iVar2 = Controls_TWinControl_GetControl(*(int *)(param_1 + 4),j);
            FUN_00444a24(iVar2,extraout_EDX,extraout_ECX,(int)puVar3);
          }
          else {
            puVar3 = &stack0xfffffffc;
            iVar2 = Controls_TWinControl_GetControl(*(int *)(param_1 + 4),j);
            FUN_00444a90(iVar2,extraout_EDX_00,extraout_ECX_00,(int)puVar3);
          }
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
      FUN_0044522c(param_1,(uint)*(ushort *)(param_1 + 0x1a));
    }
  }
  return;
}


/* ==== 00444ba4 FUN_00444ba4 ==== */

undefined4 FUN_00444ba4(int param_1)

{
  HWND hWnd;
  uint window_long;
  uint uVar1;
  int nIndex;
  
  uVar1 = 0x100000;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = 0x200000;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    nIndex = -0x10;
    hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 4));
    window_long = GetWindowLongA(hWnd,nIndex);
    if ((window_long & uVar1) != 0) {
      return CONCAT31((int3)(window_long >> 8),1);
    }
  }
  return 0;
}


/* ==== 00444bdc FUN_00444bdc ==== */

bool FUN_00444bdc(short param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  uint window_long;
  uint uVar1;
  int nIndex;
  
  uVar1 = 0x100000;
  if (param_1 == 1) {
    uVar1 = 0x200000;
  }
  nIndex = -0x10;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(*(int *)(param_4 + -4) + 4));
  window_long = GetWindowLongA(hWnd,nIndex);
  return (window_long & uVar1) != 0;
}


/* ==== 00444c10 FUN_00444c10 ==== */

int FUN_00444c10(short param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(param_4 + -5) == '\0') {
    if ((*(char *)(param_4 + -6) != '\0') &&
       (iVar1 = param_4, bVar2 = FUN_00444bdc(param_1,param_2,param_3,param_4), param_3 = iVar1,
       param_2 = extraout_EDX, !bVar2)) {
      iVar3 = (**(code **)PTR_DAT_004ab760)();
      return -(iVar3 - *(int *)(param_4 + -0xc));
    }
    if ((*(char *)(param_4 + -6) == '\0') &&
       (bVar2 = FUN_00444bdc(param_1,param_2,param_3,param_4), bVar2)) {
      iVar3 = (**(code **)PTR_DAT_004ab760)();
      iVar3 = iVar3 - *(int *)(param_4 + -0xc);
    }
  }
  return iVar3;
}


/* ==== 00444c8c FUN_00444c8c ==== */

int FUN_00444c8c(int param_1)

{
  HWND hWnd;
  int iVar1;
  int extraout_ECX;
  undefined2 extraout_var;
  int index_val;
  
  index_val = -0x10;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 4));
  GetWindowLongA(hWnd,index_val);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar1 = FUN_00444c10(0,CONCAT22(extraout_var,0x15),extraout_ECX,(int)&stack0xfffffffc);
    index_val = TForm_GetClientHeight(*(int **)(param_1 + 4));
    iVar1 = iVar1 + index_val;
  }
  else {
    iVar1 = FUN_00444c10(1,CONCAT22(extraout_var,0x14),extraout_ECX,(int)&stack0xfffffffc);
    index_val = TForm_GetClientWidth(*(int **)(param_1 + 4));
    iVar1 = iVar1 + index_val;
  }
  return iVar1;
}


/* ==== 00444d0c FUN_00444d0c ==== */

bool FUN_00444d0c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00444c8c(param_1);
  return iVar1 < *(int *)(param_1 + 0x10);
}


/* ==== 00444d24 FUN_00444d24 ==== */

int FUN_00444d24(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int local_8;
  
  sVar1 = *(short *)(*(int *)(in_stack_00000004 + -8) + 6);
  Controls_TWinControl_GetHandle(*(int **)(*(int *)(in_stack_00000004 + -4) + 4));
  iVar2 = (**(code **)PTR_DAT_004ab630)();
  iVar3 = (int)sVar1;
  if (iVar2 != 0) {
    iVar3 = local_8;
  }
  return iVar3;
}


/* ==== 00444d84 FUN_00444d84 ==== */

uint FUN_00444d84(uint param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int i_val;
  int local_14;
  uint local_10;
  
  if ((*(char *)(param_1 + 0x1f) == '\0') || (3 < *(ushort *)(param_2 + 4))) {
    uVar3 = (int)*(short *)(param_2 + 4);
    switch((int)*(short *)(param_2 + 4)) {
    case 0:
      uVar3 = TControlScrollBar_SetPosition
                        (param_1,*(int *)(param_1 + 0xc) - (uint)*(ushort *)(param_1 + 8));
      break;
    case 1:
      uVar3 = TControlScrollBar_SetPosition
                        (param_1,*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 8));
      break;
    case 2:
      i_val = FUN_00444c8c(param_1);
      uVar3 = TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) - i_val);
      break;
    case 3:
      i_val = FUN_00444c8c(param_1);
      uVar3 = TControlScrollBar_SetPosition(param_1,i_val + *(int *)(param_1 + 0xc));
      break;
    case 4:
      if (*(int *)(param_1 + 0x14) < 0x8000) {
        uVar3 = TControlScrollBar_SetPosition(param_1,(int)*(short *)(param_2 + 6));
      }
      else {
        i_val = FUN_00444d24();
        uVar3 = TControlScrollBar_SetPosition(param_1,i_val);
      }
      break;
    case 5:
      uVar3 = param_1;
      if (*(char *)(param_1 + 0x1d) != '\0') {
        if (*(int *)(param_1 + 0x14) < 0x8000) {
          uVar3 = TControlScrollBar_SetPosition(param_1,(int)*(short *)(param_2 + 6));
        }
        else {
          i_val = FUN_00444d24();
          uVar3 = TControlScrollBar_SetPosition(param_1,i_val);
        }
      }
      break;
    case 6:
      uVar3 = TControlScrollBar_SetPosition(param_1,0);
      break;
    case 7:
      uVar3 = TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0x14));
    }
  }
  else {
    if (*(ushort *)(param_2 + 4) < 2) {
      uVar5 = (uint)*(ushort *)(param_1 + 8);
      i_val = *(int *)(param_1 + 0x40);
      local_10 = (uint)((longlong)(ulonglong)uVar5 / (longlong)i_val);
      uVar3 = (uint)((longlong)(ulonglong)uVar5 / (longlong)i_val);
      local_14 = (int)((longlong)(ulonglong)uVar5 % (longlong)i_val);
    }
    else if ((ushort)(*(ushort *)(param_2 + 4) - 2) < 2) {
      i_val = *(int *)(param_1 + 0x3c);
      local_14 = (int)(uint)*(ushort *)(param_1 + 10) % i_val;
      uVar3 = (int)(uint)*(ushort *)(param_1 + 10) / i_val;
      local_10 = uVar3;
    }
    else {
      i_val = 0;
      local_10 = 0;
      uVar3 = 0;
      local_14 = 0;
    }
    iVar2 = 0;
    for (; 0 < i_val; i_val = i_val + -1) {
      iVar4 = FUN_00407088();
      if (iVar4 - iVar2 < *(int *)(param_1 + 0x20)) {
        Sleep(*(int *)(param_1 + 0x20) - (iVar4 - iVar2));
      }
      sVar1 = *(short *)(param_2 + 4);
      if (sVar1 == 0) {
        TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) - local_10);
      }
      else if (sVar1 == 1) {
        TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) + local_10);
      }
      else if (sVar1 == 2) {
        TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) - local_10);
      }
      else if (sVar1 == 3) {
        TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) + local_10);
      }
      uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x80))();
      iVar2 = iVar4;
    }
    if (0 < local_14) {
      sVar1 = *(short *)(param_2 + 4);
      if (sVar1 == 0) {
        uVar3 = TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) - local_14);
      }
      else if (sVar1 == 1) {
        uVar3 = TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) + local_14);
      }
      else if (sVar1 == 2) {
        uVar3 = TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) - local_14);
      }
      else {
        uVar3 = CONCAT22((short)((uint)param_2 >> 0x10),sVar1 + -3);
        if ((short)(sVar1 + -3) == 0) {
          uVar3 = TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) + local_14);
        }
      }
    }
  }
  return uVar3;
}


/* ==== 0044507c TControlScrollBar.SetButtonSize ==== */

void TControlScrollBar_SetButtonSize(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x24)) {
    iVar1 = param_2;
    if (param_2 == 0) {
      iVar1 = (**(code **)PTR_DAT_004ab760)();
    }
    *(int *)(param_1 + 0x24) = iVar1;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}


/* ==== 004450c0 TControlScrollBar.SetColor ==== */

void TControlScrollBar_SetColor(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = param_2;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
  }
  return;
}


/* ==== 004450dc TControlScrollBar.SetParentColor ==== */

void TControlScrollBar_SetParentColor(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x2c)) &&
     (*(char *)(param_1 + 0x2c) = param_2, param_2 != '\0')) {
    TControlScrollBar_SetColor(param_1,-0x7fffffec);
  }
  return;
}


/* ==== 004450f4 TControlScrollBar.SetPosition ==== */

void TControlScrollBar_SetPosition(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x20) & 2) == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if ((param_2 <= iVar3) && (iVar3 = param_2, param_2 < 0)) {
      iVar3 = 0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar3 != iVar1) {
      *(int *)(param_1 + 0xc) = iVar3;
      if (*(char *)(param_1 + 0x18) == '\0') {
        FUN_004345a0(*(int **)(param_1 + 4),iVar1 - iVar3,0);
      }
      else {
        FUN_004345a0(*(int **)(param_1 + 4),0,iVar1 - iVar3);
      }
      if ((((*(byte *)(*(int **)(param_1 + 4) + 8) & 0x10) != 0) &&
          (piVar2 = Forms_GetParentForm(*(int **)(param_1 + 4)), piVar2 != (int *)0x0)) &&
         (piVar2[0x8e] != 0)) {
        (**(code **)(*(int *)piVar2[0x8e] + 0xc))();
      }
    }
    Controls_TWinControl_GetHandle(*(int **)(param_1 + 4));
    iVar3 = (**(code **)PTR_DAT_004ab7c8)();
    if (iVar3 != *(int *)(param_1 + 0xc)) {
      Controls_TWinControl_GetHandle(*(int **)(param_1 + 4));
      (**(code **)PTR_DAT_004ab9e4)();
    }
  }
  else {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return;
}


/* ==== 004451b8 TControlScrollBar.SetSize ==== */

void TControlScrollBar_SetSize(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x30)) {
    iVar1 = param_2;
    if (param_2 == 0) {
      iVar1 = (**(code **)PTR_DAT_004ab760)();
    }
    *(int *)(param_1 + 0x30) = iVar1;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}


/* ==== 004451fc TControlScrollBar.SetStyle ==== */

void TControlScrollBar_SetStyle(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x34)) {
    *(char *)(param_1 + 0x34) = param_2;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
  }
  return;
}


/* ==== 00445214 TControlScrollBar.SetThumbSize ==== */

void TControlScrollBar_SetThumbSize(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
  }
  return;
}


/* ==== 0044522c FUN_0044522c ==== */

void FUN_0044522c(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_00445748(*(int *)(param_1 + 4));
  return;
}


/* ==== 00445244 TControlScrollBar.SetRange ==== */

void TControlScrollBar_SetRange(int param_1,int param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  FUN_0044522c(param_1,param_2);
  return;
}


/* ==== 00445264 TControlScrollBar.SetVisible ==== */

void TControlScrollBar_SetVisible(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  FUN_00445748(*(int *)(param_1 + 4));
  return;
}


/* ==== 00445270 FUN_00445270 ==== */

void FUN_00445270(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  piVar1 = (int *)(in_stack_00000004 + -4);
  Controls_TWinControl_GetHandle(*(int **)(*piVar1 + 4));
  FUN_00420d70();
  if (0 < *(int *)(*piVar1 + 0x24)) {
    Controls_TWinControl_GetHandle(*(int **)(*piVar1 + 4));
    FUN_00420d70();
  }
  if (0 < *(int *)(*piVar1 + 0x38)) {
    Controls_TWinControl_GetHandle(*(int **)(*piVar1 + 4));
    FUN_00420d70();
  }
  if (0 < *(int *)(*piVar1 + 0x30)) {
    Controls_TWinControl_GetHandle(*(int **)(*piVar1 + 4));
    FUN_00420d70();
  }
  FUN_00417d54(*(uint *)(*piVar1 + 0x28));
  Controls_TWinControl_GetHandle(*(int **)(*piVar1 + 4));
  FUN_00420d70();
  return;
}


/* ==== 00445378 FUN_00445378 ==== */

void FUN_00445378(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = FUN_00444c8c(param_1);
    iVar1 = *(int *)(param_1 + 0x10) - iVar1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  FUN_00444c8c(param_1);
  FUN_00445270();
  *(undefined1 *)(param_1 + 0x44) = 0;
  Controls_TWinControl_GetHandle(*(int **)(param_1 + 4));
  (**(code **)PTR_DAT_004ab89c)();
  TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc));
  iVar1 = FUN_00444c8c(param_1);
  uVar2 = (iVar1 * 9) / 10;
  *(short *)(param_1 + 10) = (short)uVar2;
  if (*(char *)(param_1 + 0x1f) != '\0') {
    *(short *)(param_1 + 8) = (short)((ulonglong)(uVar2 & 0xffff) / 10);
  }
  return;
}


/* ==== 00445490 TScrollingWinControl.virtual_02c ==== */

int * TScrollingWinControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  piVar1 = FUN_0044490c((int *)&PTR_TPersistent_virtual_000_00441cd8,'\x01',(int)param_1,0);
  param_1[0x7c] = (int)piVar1;
  piVar1 = FUN_0044490c((int *)&PTR_TPersistent_virtual_000_00441cd8,'\x01',(int)param_1,1);
  param_1[0x7d] = (int)piVar1;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004454f8 TScrollingWinControl.Destroy ==== */

void TScrollingWinControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[0x7c]);
  System_TObject_Free((int *)piVar1[0x7d]);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00445534 TScrollingWinControl.virtual_090 ==== */

void TScrollingWinControl_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


/* ==== 00445544 TScrollingWinControl.virtual_098 ==== */

void TScrollingWinControl_virtual_098(int *param_1)

{
  TWinControl_virtual_098(param_1);
  if (PTR_DAT_004aba14[9] == '\0') {
    Controls_TWinControl_GetHandle(param_1);
    FUN_00420da4();
  }
  FUN_00445748((int)param_1);
  return;
}


/* ==== 00445570 TScrollingWinControl.virtual_088 ==== */

void TScrollingWinControl_virtual_088(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004456c8((int)param_1);
  TWinControl_virtual_088(param_1,param_2,param_3);
  return;
}


/* ==== 00445590 TScrollingWinControl.virtual_0b4 ==== */

undefined4 TScrollingWinControl_virtual_0b4(int param_1)

{
  if ((*(char *)(param_1 + 0x4c) == '\0') &&
     ((*(char *)(param_1 + 0x144) == '\0' || (*(char *)(param_1 + 0x17c) == '\0')))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 004455b0 TScrollingWinControl.dynamic_ffc7 ==== */

void TScrollingWinControl_dynamic_ffc7(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int i_val;
  int *piVar4;
  int iVar5;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_c;
  
  puStack_24 = (undefined1 *)0x4455c8;
  piVar2 = (int *)System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
  puStack_28 = &LAB_004456b8;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  local_c = TForm_GetClientWidth(param_1);
  i_val = param_1[0x7c];
  uVar3 = FUN_00444ba4(i_val);
  if (((char)uVar3 == '\0') || (*(int *)(i_val + 0x10) <= local_c)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_c = *(int *)(i_val + 0x10);
    TControlScrollBar_SetPosition(i_val,0);
  }
  i_val = Controls_TWinControl_GetControlCount((int)param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar4 = (int *)Controls_TWinControl_GetControl((int)param_1,j);
      iVar5 = Controls_TWinControl_GetControl((int)param_1,j);
      Classes_TList_Add(piVar2,iVar5);
      TControl_SetLeft(piVar4,(local_c - piVar4[0xe]) - piVar4[0xc]);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  i_val = piVar2[2];
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar3 = 0;
      iVar5 = Classes_TList_Get(piVar2,j);
      Controls_TControl_Perform(iVar5,0xb03e,0,uVar3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if (bVar1) {
    FUN_004449ec(param_1[0x7c]);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004456bf;
  puStack_28 = (undefined1 *)0x4456b7;
  System_TObject_Free(piVar2);
  return;
}


/* ==== 004456c8 FUN_004456c8 ==== */

void FUN_004456c8(int param_1)

{
  if (*(int *)(param_1 + 0x1fc) < 1) {
    FUN_00444af8(*(int *)(param_1 + 0x1f0));
    FUN_00444af8(*(int *)(param_1 + 500));
  }
  return;
}


/* ==== 004456ec TScrollBox.SetAutoScroll ==== */

void TScrollBox_SetAutoScroll(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    if (param_2 == '\0') {
      TControlScrollBar_SetRange(*(int *)(param_1 + 0x1f0),0);
      TControlScrollBar_SetRange(*(int *)(param_1 + 500),0);
    }
    else {
      FUN_004456c8(param_1);
    }
  }
  return;
}


/* ==== 00445728 TScrollingWinControl.SetHorzScrollBar ==== */

void TScrollingWinControl_SetHorzScrollBar(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1f0) + 8))();
  return;
}


/* ==== 00445738 TScrollingWinControl.SetVertScrollBar ==== */

void TScrollingWinControl_SetVertScrollBar(int param_1)

{
  (**(code **)(**(int **)(param_1 + 500) + 8))();
  return;
}


/* ==== 00445748 FUN_00445748 ==== */

void FUN_00445748(int param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x200) == '\0') {
    puStack_c = (undefined1 *)0x445767;
    local_8 = param_1;
    bVar1 = Controls_TWinControl_HandleAllocated(param_1);
    if (bVar1) {
      puStack_10 = &LAB_00445833;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 1;
      puStack_c = &stack0xfffffffc;
      bVar1 = FUN_00444d0c(*(int *)(local_8 + 500));
      if (bVar1) {
        FUN_00445378(*(int *)(local_8 + 0x1f0));
        FUN_00445378(*(int *)(local_8 + 500));
      }
      else {
        bVar1 = FUN_00444d0c(*(int *)(local_8 + 0x1f0));
        if (bVar1) {
          FUN_00445378(*(int *)(local_8 + 500));
          FUN_00445378(*(int *)(local_8 + 0x1f0));
        }
        else {
          FUN_00445378(*(int *)(local_8 + 500));
          FUN_00445378(*(int *)(local_8 + 0x1f0));
        }
      }
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 0;
      return;
    }
  }
  return;
}


/* ==== 00445840 TScrollingWinControl.virtual_0b8 ==== */

void TScrollingWinControl_virtual_0b8(int *param_1,int *param_2)

{
  if (((param_2 != (int *)0x0) && ((*(byte *)(param_2 + 8) & 1) == 0)) &&
     ((*(byte *)(param_1 + 8) & 1) == 0)) {
    FUN_00445858(param_1,param_2);
  }
  return;
}


/* ==== 00445858 FUN_00445858 ==== */

void FUN_00445858(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int aiStack_18 [2];
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x40))(param_2,&local_30);
    local_30 = local_30 - (uint)*(ushort *)(param_1[0x7c] + 0x1a);
    local_28 = local_28 + (uint)*(ushort *)(param_1[0x7c] + 0x1a);
    local_2c = local_2c - (uint)*(ushort *)(param_1[0x7d] + 0x1a);
    local_24 = local_24 + (uint)*(ushort *)(param_1[0x7d] + 0x1a);
    FUN_0042e2ac(param_2,&local_30,aiStack_18);
    FUN_0042e2d8(param_1,aiStack_18,&iStack_20);
    local_30 = iStack_20;
    local_2c = iStack_1c;
    FUN_0042e2ac(param_2,&local_28,aiStack_18);
    FUN_0042e2d8(param_1,aiStack_18,&iStack_20);
    iVar1 = local_30;
    local_28 = iStack_20;
    local_24 = iStack_1c;
    if (local_30 < 0) {
      TControlScrollBar_SetPosition(param_1[0x7c],*(int *)(param_1[0x7c] + 0xc) + local_30);
    }
    else {
      iVar2 = TForm_GetClientWidth(param_1);
      iVar3 = local_28;
      if (iVar2 < local_28) {
        iVar2 = TForm_GetClientWidth(param_1);
        if (iVar2 < iVar3 - iVar1) {
          local_28 = TForm_GetClientWidth(param_1);
          local_28 = local_28 + local_30;
        }
        iVar1 = param_1[0x7c];
        iVar3 = TForm_GetClientWidth(param_1);
        TControlScrollBar_SetPosition(iVar1,(*(int *)(iVar1 + 0xc) + local_28) - iVar3);
      }
    }
    iVar1 = local_2c;
    if (local_2c < 0) {
      TControlScrollBar_SetPosition(param_1[0x7d],*(int *)(param_1[0x7d] + 0xc) + local_2c);
    }
    else {
      iVar2 = TForm_GetClientHeight(param_1);
      iVar3 = local_24;
      if (iVar2 < local_24) {
        iVar2 = TForm_GetClientHeight(param_1);
        if (iVar2 < iVar3 - iVar1) {
          local_24 = TForm_GetClientHeight(param_1);
          local_24 = local_24 + local_2c;
        }
        iVar1 = param_1[0x7d];
        iVar3 = TForm_GetClientHeight(param_1);
        TControlScrollBar_SetPosition(iVar1,(*(int *)(iVar1 + 0xc) + local_24) - iVar3);
      }
    }
  }
  return;
}


/* ==== 004459ac FUN_004459ac ==== */

void FUN_004459ac(int param_1,int numerator,int denominator)

{
  int iVar1;
  int mul_div;
  
  if (denominator != numerator) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1f0) + 0x1e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 500) + 0x1e) = 1;
    }
    TControlScrollBar_SetPosition(*(int *)(param_1 + 0x1f0),0);
    TControlScrollBar_SetPosition(*(int *)(param_1 + 500),0);
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      iVar1 = *(int *)(param_1 + 0x1f0);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        mul_div = MulDiv(*(int *)(iVar1 + 0x10),numerator,denominator);
        TControlScrollBar_SetRange(iVar1,mul_div);
      }
      iVar1 = *(int *)(param_1 + 500);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        mul_div = MulDiv(*(int *)(iVar1 + 0x10),numerator,denominator);
        TControlScrollBar_SetRange(iVar1,mul_div);
      }
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1f0) + 0x1e) = 0;
  *(undefined1 *)(*(int *)(param_1 + 500) + 0x1e) = 0;
  return;
}


/* ==== 00445a50 TScrollingWinControl.dynamic_ffed ==== */

void TScrollingWinControl_dynamic_ffed(int *param_1,int numerator,int param_3)

{
  FUN_004459ac((int)param_1,numerator,param_3);
  TWinControl_dynamic_ffed(param_1,numerator,param_3);
  return;
}


/* ==== 00445a74 TScrollingWinControl.virtual_0bc ==== */

void TScrollingWinControl_virtual_0bc(void)

{
  return;
}


/* ==== 00445a78 TScrollingWinControl.WMSize ==== */

void TScrollingWinControl_WMSize(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = &stack0xfffffffc;
  param_1[0x7f] = param_1[0x7f] + 1;
  puStack_14 = &LAB_00445ae2;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  TWinControl_WMSize(param_1,param_2);
  uVar2 = 0;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  (**(code **)(*param_1 + 0xbc))(param_1,uVar2);
  *in_FS_OFFSET = uStack_18;
  param_1[0x7f] = param_1[0x7f] + -1;
  return;
}


/* ==== 00445b54 TScrollingWinControl.WMHScroll ==== */

void TScrollingWinControl_WMHScroll(int *param_1,int *param_2)

{
  if ((param_2[2] == 0) && (*(char *)(param_1[0x7c] + 0x1c) != '\0')) {
    FUN_00444d84(param_1[0x7c],(int)param_2);
    return;
  }
  TWinControl_WMHScroll(param_1,param_2);
  return;
}


/* ==== 00445b78 TScrollingWinControl.WMVScroll ==== */

void TScrollingWinControl_WMVScroll(int *param_1,int *param_2)

{
  if ((param_2[2] == 0) && (*(char *)(param_1[0x7d] + 0x1c) != '\0')) {
    FUN_00444d84(param_1[0x7d],(int)param_2);
    return;
  }
  TWinControl_WMVScroll(param_1,param_2);
  return;
}


/* ==== 00445b9c TScrollingWinControl.virtual_084 ==== */

void TScrollingWinControl_virtual_084(int *param_1,undefined4 *param_2)

{
  int i_val;
  int iVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  int local_1c [4];
  
  bVar4 = 0;
  piVar3 = local_1c;
  i_val = TForm_GetClientHeight(param_1);
  iVar1 = FUN_00420cb4(i_val,*(int *)(param_1[0x7d] + 0x10));
  iVar2 = TForm_GetClientWidth(param_1);
  i_val = param_1[0x7c];
  iVar2 = FUN_00420cb4(*(int *)(i_val + 0x10),iVar2);
  FUN_0040f804(-*(int *)(i_val + 0xc),-*(int *)(param_1[0x7d] + 0xc),iVar2,piVar3,iVar1);
  piVar3 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *param_2 = *piVar3;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    param_2 = param_2 + (uint)bVar4 * -2 + 1;
  }
  TWinControl_virtual_084();
  return;
}


/* ==== 00445c10 TScrollingWinControl.CMBiDiModeChanged ==== */

void TScrollingWinControl_CMBiDiModeChanged(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = *(undefined4 *)(param_2 + 4);
  puStack_18 = &LAB_00445c71;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = System__IsClass(param_1,(int)&PTR_TWinControl_virtual_000_004421b4);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)(local_c + 4) = 1;
  }
  TWinControl_CMBiDiModeChanged(local_8,local_c);
  *in_FS_OFFSET = uStack_1c;
  *(undefined4 *)(local_c + 4) = local_10;
  return;
}


/* ==== 00445ca0 TScrollBox.virtual_02c ==== */

int * TScrollBox_virtual_02c(int *param_1,char param_2,int *param_3)

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
  TScrollingWinControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xab;
  TControl_SetWidth(param_1,0xb9);
  TControl_SetHeight(param_1,0x29);
  *(undefined1 *)(param_1 + 0x82) = 1;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00445d00 TScrollBox.virtual_090 ==== */

void TScrollBox_virtual_090(int *param_1,int *param_2)

{
  TScrollingWinControl_virtual_090(param_1,param_2);
  param_2[1] = param_2[1] | *(uint *)(&DAT_004aa9bc + (uint)*(byte *)(param_1 + 0x82) * 4);
  if (((*PTR_DAT_004ab7d4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x82] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  return;
}


/* ==== 00445d50 TScrollBox.SetBorderStyle ==== */

void TScrollBox_SetBorderStyle(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x208)) {
    *(char *)(param_1 + 0x208) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00445d64 TScrollBox.WMNCHitTest ==== */

void TScrollBox_WMNCHitTest(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00445d6c TScrollBox.CMCtl3DChanged ==== */

void TScrollBox_CMCtl3DChanged(int param_1,undefined4 param_2)

{
  if ((*PTR_DAT_004ab7d4 != '\0') && (*(char *)(param_1 + 0x208) == '\x01')) {
    FUN_00431e04(param_1);
  }
  TWinControl_CMCtl3DChanged(param_1,param_2);
  return;
}


/* ==== 00445d98 TCustomForm.virtual_02c ==== */

void TCustomForm_virtual_02c(int *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffea4;
  byte **ppbVar4;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte *local_118;
  byte local_114 [256];
  byte *local_14;
  undefined1 local_10;
  undefined1 local_9;
  int *local_8;
  
  local_118 = (byte *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_130 = (undefined1 *)0x445db6;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_fffffed4,
                                         in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_134 = &LAB_00445efc;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_13c = (undefined1 *)0x445dd8;
  puStack_130 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  puStack_140 = &LAB_00445edc;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  uStack_148 = 0;
  puStack_14c = (undefined1 *)0x445df7;
  puStack_13c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xcc))(local_8,0,param_3);
  puStack_14c = (undefined1 *)0x445dff;
  ppuVar2 = (undefined **)FUN_00402ee0(local_8);
  if ((ppuVar2 != &PTR_TWinControl_virtual_000_00442fd4) && ((*(byte *)(local_8 + 8) & 0x10) == 0))
  {
    *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 1;
    puStack_150 = &LAB_00445ea4;
    uStack_154 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_154;
    puStack_14c = &stack0xfffffffc;
    cVar1 = FUN_00410020(local_8,&PTR_TWinControl_virtual_000_00442fd4);
    if (cVar1 == '\0') {
      System_TObject_ClassName(*local_8,local_114);
      local_14 = local_114;
      local_10 = 4;
      ppbVar4 = &local_14;
      in_stack_fffffea4 = 0;
      System_LoadResString((undefined4 *)PTR_PTR_004ab7f0,(int *)&local_118);
      uVar3 = SysUtils_Exception_CreateFmt
                        ((int)&DAT_0040e7e8,'\x01',local_118,in_stack_fffffea4,ppbVar4);
      System__RaiseExcept(uVar3);
    }
    *in_FS_OFFSET = in_stack_fffffea4;
    *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) & 0xfe;
    return;
  }
  *in_FS_OFFSET = uStack_148;
  puStack_140 = &LAB_00445ee3;
  uStack_144 = 0x445edb;
  FUN_0040c944(*(int *)PTR_DAT_004ab9ec);
  return;
}


/* ==== 00445f24 TCustomForm.AfterConstruction ==== */

void TCustomForm_AfterConstruction(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((char)param_1[0x87] == '\0') {
    (**(code **)(*param_1 + 0xc0))();
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if ((*(byte *)(param_1 + 0xb3) & 0x20) != 0) {
    System__CallDynaInst(param_1,param_2,param_3);
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xdf;
  }
  return;
}


/* ==== 00445f5c TCustomForm.virtual_0cc ==== */

int * TCustomForm_virtual_0cc(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TScrollingWinControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xab;
  TControl_SetLeft(param_1,0);
  TControl_SetTop(param_1,0);
  TControl_SetWidth(param_1,0x140);
  TControl_SetHeight(param_1,0xf0);
  TForm_SetVisible(param_1,0,extraout_ECX_00);
  TGroupBox_SetParentColor((int)param_1,'\0');
  TGroupBox_SetParentFont((int)param_1,'\0');
  TGroupBox_SetCtl3D((int)param_1,'\x01');
  *(undefined1 *)(param_1 + 0x84) = 7;
  *(undefined1 *)((int)param_1 + 0x211) = 2;
  *(undefined1 *)((int)param_1 + 0x213) = 0;
  *(undefined1 *)((int)param_1 + 0x219) = 3;
  piVar1 = TIcon_virtual_00c((int *)&PTR_TPersistent_virtual_000_004174e4,'\x01',extraout_ECX_01);
  param_1[0x8a] = (int)piVar1;
  uVar5 = 0x31;
  uVar2 = (**(code **)PTR_DAT_004ab760)();
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2,*piVar1,uVar5);
  uVar2 = (**(code **)PTR_DAT_004ab760)();
  (**(code **)(*(int *)param_1[0x8a] + 0x34))((int *)param_1[0x8a],uVar2);
  iVar3 = param_1[0x8a];
  *(int **)(iVar3 + 0xc) = param_1;
  *(code **)(iVar3 + 8) = FUN_004467fc;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  piVar1 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',extraout_ECX_02);
  param_1[0x88] = (int)piVar1;
  FUN_0042d4c8(piVar1,(int)param_1);
  param_1[0x91] = *(int *)(DAT_004ac7d8 + 0x34);
  *(undefined1 *)((int)param_1 + 0x21d) = 1;
  iVar3 = FUN_00402ee0(param_1);
  param_1[0x29] = iVar3;
  FUN_0044b1f0(DAT_004ac7d8,param_1);
  if (cVar4 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = 0x32;
  }
  return param_1;
}


/* ==== 004460bc TCustomForm.BeforeDestruction ==== */

void TCustomForm_BeforeDestruction(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  
  FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  FUN_0041581c((int)param_1);
  FUN_00410448(*(int **)(DAT_004ac7d8 + 0x70),(int)param_1);
  FUN_0041316c((int)param_1,(char *)0x0);
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if (param_1[0x93] != 0) {
    (**(code **)(*(int *)param_1[0x93] + 0xc))();
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  if (*(char *)((int)param_1 + 0x217) != '\x01') {
    FUN_00449c70(param_1,uVar2,uVar1);
  }
  if ((char)param_1[0x87] == '\0') {
    (**(code **)(*param_1 + 0xc4))();
  }
  return;
}


/* ==== 00446124 TCustomForm.Destroy ==== */

void TCustomForm_Destroy(int *param_1,char param_2)

{
  bool bVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x44612f;
  local_8 = System__BeforeDestruction(param_1,param_2);
  local_9 = extraout_DL;
  if ((*(byte *)(local_8 + 8) & 8) == 0) {
    puStack_10 = (undefined1 *)0x44614a;
    FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  }
  puStack_14 = &LAB_004461ee;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if ((char)local_8[0x87] != '\0') {
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc4))();
  }
  FUN_00448718((int)local_8,'\0');
  bVar1 = Controls_TWinControl_HandleAllocated((int)local_8);
  if (bVar1) {
    (**(code **)(*local_8 + 0x9c))();
  }
  FUN_0044b228(DAT_004ac7d8,(int)local_8);
  System_TObject_Free((int *)local_8[0x88]);
  System_TObject_Free((int *)local_8[0x8a]);
  SysUtils_FreeAndNil(local_8 + 0xb2);
  TScrollingWinControl_Destroy(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004461f5;
  puStack_14 = (undefined1 *)0x4461ed;
  FUN_0040c944(*(int *)PTR_DAT_004ab9ec);
  return;
}


/* ==== 00446208 TCustomForm.virtual_0c0 ==== */

void TCustomForm_virtual_0c0(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)((int)param_1 + 0x2ba) != 0) {
    puStack_1c = &LAB_00446249;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (*(code *)param_1[0xae])(param_1[0xaf],param_1);
    *in_FS_OFFSET = uStack_20;
    param_3 = puStack_18;
    param_2 = uStack_20;
  }
  if ((*(byte *)(param_1 + 0xb3) & 2) != 0) {
    puStack_18 = (undefined1 *)0x446276;
    TForm_SetVisible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  }
  return;
}


/* ==== 0044627c TCustomForm.virtual_0c4 ==== */

void TCustomForm_virtual_0c4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x2c2) != 0) {
    puStack_1c = &LAB_004462bd;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x2c0))(*(undefined4 *)(param_1 + 0x2c4),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


/* ==== 004462dc TCustomForm.virtual_00c ==== */

void TCustomForm_virtual_00c(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  
  TControl_virtual_00c(param_1);
  piVar1 = (int *)param_1[0x82];
  if (piVar1 != (int *)0x0) {
    param_1[0x82] = 0;
    cVar2 = System__CallDynaInst(piVar1,extraout_EDX,extraout_ECX);
    if (cVar2 != '\0') {
      TForm_SetActiveControl(param_1,piVar1,extraout_ECX_00);
    }
  }
  return;
}


/* ==== 00446318 TCustomForm.virtual_010 ==== */

void TCustomForm_virtual_010(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  HWND unaff_EBP;
  HMENU unaff_EDI;
  undefined4 extraout_ECX;
  
  cVar5 = (char)param_3;
  TControl_virtual_010(param_1,(int)param_2,cVar5);
  if (cVar5 == '\0') {
    uVar2 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00439364);
    if ((char)uVar2 == '\0') {
      if (((((*(byte *)(param_1 + 8) & 1) == 0) && (param_1[0x8c] == 0)) &&
          (param_1 == (int *)param_2[1])) &&
         (uVar2 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_0043c1f8),
         (char)uVar2 != '\0')) {
        TForm_SetMenu(unaff_EBP,unaff_EDI);
      }
    }
    else {
      if (param_1[0xb2] == 0) {
        iVar3 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00)
        ;
        param_1[0xb2] = iVar3;
      }
      Classes_TList_Add((int *)param_1[0xb2],(int)param_2);
    }
  }
  else if (cVar5 == '\x01') {
    piVar1 = (int *)param_1[0xb2];
    uVar2 = extraout_ECX;
    if ((piVar1 == (int *)0x0) ||
       (uVar4 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00439364),
       uVar2 = extraout_ECX_01, (char)uVar4 == '\0')) {
      if (param_2 == (int *)param_1[0x8c]) {
        TForm_SetMenu(unaff_EBP,unaff_EDI);
        uVar2 = extraout_ECX_02;
      }
      if (param_2 == (int *)param_1[0x90]) {
        TForm_SetWindowMenu(param_1,0,uVar2);
        uVar2 = extraout_ECX_03;
      }
      if (param_2 == (int *)param_1[0x92]) {
        TForm_SetObjectMenuItem((int)param_1,(int *)0x0,uVar2);
      }
    }
    else {
      FUN_00410448(piVar1,(int)param_2);
    }
  }
  if (param_1[0x8e] != 0) {
    (**(code **)(*(int *)param_1[0x8e] + 0x10))((int *)param_1[0x8e],param_2,param_3);
  }
  return;
}


/* ==== 00446424 TCustomForm.virtual_014 ==== */

void TCustomForm_virtual_014(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int nNumber;
  int iVar3;
  int numerator;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x446437;
  FUN_00431324((int)param_1);
  puStack_18 = &LAB_00446624;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  bVar2 = false;
  *(byte *)(param_1 + 0x87) = DAT_004ac4d1 ^ 1;
  puStack_14 = &stack0xfffffffc;
  TWinControl_virtual_014(param_1,param_2);
  if ((param_1[0x91] != 0) && (0 < param_1[0x96])) {
    if (((*(byte *)(param_1 + 0x22) & 0x10) != 0) &&
       (param_1[0x91] != *(int *)(DAT_004ac7d8 + 0x34))) {
      iVar3 = param_1[0x91];
      numerator = *(int *)(DAT_004ac7d8 + 0x34);
      piVar1 = (int *)param_1[0x16];
      nNumber = TFont_GetHeight((int)piVar1);
      iVar3 = MulDiv(nNumber,numerator,iVar3);
      TFont_SetHeight(piVar1,iVar3);
    }
    param_1[0x91] = *(int *)(DAT_004ac7d8 + 0x34);
    iVar3 = FUN_00446754((int)param_1);
    if (iVar3 != param_1[0x96]) {
      bVar2 = true;
      FUN_004459ac((int)param_1,iVar3,param_1[0x96]);
      FUN_004344f8((int)param_1,iVar3,param_1[0x96]);
      if ((*(byte *)(param_1 + 0x22) & 4) != 0) {
        numerator = MulDiv(param_1[0x94],iVar3,param_1[0x96]);
        param_1[0x94] = numerator;
      }
      if ((*(byte *)(param_1 + 0x22) & 8) != 0) {
        iVar3 = MulDiv(param_1[0x95],iVar3,param_1[0x96]);
        param_1[0x95] = iVar3;
      }
    }
  }
  if (0 < param_1[0x94]) {
    FUN_0042e1b0(param_1,param_1[0x94]);
  }
  if (0 < param_1[0x95]) {
    FUN_0042e1f4(param_1,param_1[0x95]);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  if (!bVar2) {
    FUN_004459ac((int)param_1,1,1);
    FUN_004344f8((int)param_1,1,1);
  }
  Controls_TControl_Perform((int)param_1,0xb03d,0,0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0044662b;
  puStack_18 = (undefined1 *)0x446623;
  FUN_0043132c((int)param_1);
  return;
}


/* ==== 00446634 TCustomForm.virtual_004 ==== */

void TCustomForm_virtual_004(int param_1,int *param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  TControl_virtual_004(param_1,param_2);
  (**(code **)(*param_2 + 4))
            (param_2,"PixelsPerInch",
             CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1,
             &LAB_00446738,param_1,0,0);
  (**(code **)(*param_2 + 4))
            (param_2,"TextHeight",
             CONCAT31((int3)((uint)extraout_ECX_00 >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1,
             &LAB_0044671c,param_1,&LAB_00446704,param_1);
  (**(code **)(*param_2 + 4))(param_2,"IgnoreFontProperty",0,0,0,&LAB_004466e4,param_1);
  return;
}


/* ==== 00446754 FUN_00446754 ==== */

void FUN_00446754(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00447524(param_1);
  FUN_00419354(piVar1,&DAT_00446774);
  return;
}


/* ==== 00446778 TCustomForm.dynamic_ffee ==== */

void TCustomForm_dynamic_ffee(void)

{
  return;
}


/* ==== 0044677c TCustomForm.dynamic_ffed ==== */

void TCustomForm_dynamic_ffed(int *param_1,int numerator,int denominator)

{
  int *piVar1;
  uint uVar2;
  int nNumber;
  int nNumber_00;
  int iVar3;
  int nDenominator;
  
  FUN_004459ac((int)param_1,numerator,denominator);
  FUN_004344f8((int)param_1,numerator,denominator);
  uVar2 = FUN_00446858((int)param_1);
  if ((char)uVar2 != '\0') {
    nNumber = TForm_GetClientHeight(param_1);
    iVar3 = numerator;
    nDenominator = denominator;
    nNumber_00 = TForm_GetClientWidth(param_1);
    iVar3 = MulDiv(nNumber_00,iVar3,nDenominator);
    TForm_SetClientWidth(param_1,iVar3);
    iVar3 = MulDiv(nNumber,numerator,denominator);
    TForm_SetClientHeight(param_1,iVar3);
  }
  piVar1 = (int *)param_1[0x16];
  iVar3 = TFont_GetSize((int)piVar1);
  iVar3 = MulDiv(iVar3,numerator,denominator);
  TFont_SetSize(piVar1,iVar3);
  return;
}


/* ==== 004467fc FUN_004467fc ==== */

void FUN_004467fc(int *param_1)

{
  bool bVar1;
  LPARAM lParam;
  HWND pHVar2;
  BOOL BVar3;
  UINT Msg;
  WPARAM wParam;
  
  if (*PTR_DAT_004ab7d4 == '\0') {
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
    BVar3 = IsIconic(pHVar2);
    if (BVar3 != 0) {
      (**(code **)(*param_1 + 0x74))();
    }
  }
  else {
    bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
    if ((bVar1) && (*(char *)((int)param_1 + 0x211) != '\x03')) {
      lParam = FUN_0044888c((int)param_1);
      wParam = 1;
      Msg = 0x80;
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
      return;
    }
  }
  return;
}


/* ==== 00446858 FUN_00446858 ==== */

uint FUN_00446858(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00446868(param_1);
  return uVar1 ^ 1;
}


/* ==== 00446868 FUN_00446868 ==== */

undefined4 FUN_00446868(int param_1)

{
  if (((*(char *)(param_1 + 0x1f8) == '\0') && (*(int *)(*(int *)(param_1 + 0x1f0) + 0x10) == 0)) &&
     (param_1 = *(int *)(param_1 + 500), *(int *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00446890 FUN_00446890 ==== */

undefined4 FUN_00446890(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = FUN_00447538(param_1);
  if ((char)uVar2 != '\0') {
    uVar3 = (undefined3)(uVar2 >> 8);
    if ((*(char *)(param_1 + 0x211) == '\x02') || (*(char *)(param_1 + 0x211) == '\x05')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
      uVar3 = 0;
    }
    if (cVar1 != *(char *)(param_1 + 0x1f8)) {
      return CONCAT31(uVar3,1);
    }
  }
  return 0;
}


/* ==== 004468c4 TCustomForm.dynamic_ffb3 ==== */

void TCustomForm_dynamic_ffb3(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x27a) != 0) {
    (**(code **)(param_1 + 0x278))(*(undefined4 *)(param_1 + 0x27c),param_1,param_2);
  }
  return;
}


/* ==== 004468e4 TCustomForm.dynamic_ffb2 ==== */

void TCustomForm_dynamic_ffb2(int param_1)

{
  if (*(short *)(param_1 + 0x29a) != 0) {
    (**(code **)(param_1 + 0x298))(*(undefined4 *)(param_1 + 0x29c),param_1);
  }
  return;
}


/* ==== 00446904 TCustomForm.dynamic_ffb1 ==== */

void TCustomForm_dynamic_ffb1(int param_1)

{
  if (*(short *)(param_1 + 0x2b2) != 0) {
    (**(code **)(param_1 + 0x2b0))(*(undefined4 *)(param_1 + 0x2b4),param_1);
  }
  return;
}


/* ==== 00446924 TCustomForm.virtual_040 ==== */

void TCustomForm_virtual_040(int *param_1,LPRECT param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  DWORD dwExStyle;
  DWORD dwStyle;
  int nIndex;
  int iVar3;
  
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  BVar2 = IsIconic(pHVar1);
  if (BVar2 != 0) {
    SetRect(param_2,0,0,0,0);
    iVar3 = -0x14;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    dwExStyle = GetWindowLongA(pHVar1,iVar3);
    iVar3 = -(uint)(param_1[0x8c] != 0);
    nIndex = -0x10;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    dwStyle = GetWindowLongA(pHVar1,nIndex);
    AdjustWindowRectEx(param_2,dwStyle,iVar3,dwExStyle);
    SetRect(param_2,0,0,(param_1[0xe] - param_2->right) + param_2->left,
            (param_1[0xf] - param_2->bottom) + param_2->top);
    return;
  }
  TWinControl_virtual_040(param_1,param_2);
  return;
}


/* ==== 004469ac TCustomForm.dynamic_fffd ==== */

void TCustomForm_dynamic_fffd
               (int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 i_val;
  undefined4 j;
  
  TWinControl_dynamic_fffd(param_1,param_2,param_3,param_4,param_5);
  if (param_1 == param_2) {
    i_val = FUN_00415b9c(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar2 = (int *)FUN_00415b70(param_1,j);
        cVar1 = System__CallDynaInst(piVar2,extraout_EDX,extraout_ECX);
        if (cVar1 == '\0') {
          (*(code *)param_4)(param_5,piVar2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 00446a18 TCustomForm.virtual_050 ==== */

undefined4 TCustomForm_virtual_050(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x24] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    iVar2 = FUN_00402ee0(param_1);
    if (iVar1 == iVar2) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00446a44 TCustomForm.dynamic_fffa ==== */

void TCustomForm_dynamic_fffa(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int j;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int k;
  int i_val;
  
  uVar2 = System__IsClass(param_2,(int)&PTR_TControl_virtual_000_0042a694);
  if ((char)uVar2 == '\0') {
    iVar3 = Controls_TWinControl_GetControlCount(param_1);
    i_val = -1;
    j = FUN_00415b9c(param_1);
    if (-1 < j + -1) {
      k = 0;
      do {
        piVar4 = (int *)FUN_00415b70(param_1,k);
        cVar1 = System__CallDynaInst(piVar4,extraout_EDX,extraout_ECX);
        if ((cVar1 == '\0') && (i_val = i_val + 1, i_val == param_3 - iVar3)) {
          FUN_00415bac((int)param_2,k);
          return;
        }
        k = k + 1;
        j = j + -1;
      } while (j != 0);
    }
  }
  else {
    TWinControl_dynamic_fffa(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00446ad8 TCustomForm.virtual_064 ==== */

void TCustomForm_virtual_064(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x50)) {
    TControl_virtual_064(param_1,param_2);
    if (*(int *)(param_1 + 0x24) == 0) {
      Controls_TControl_Perform(param_1,0xb03d,0,0);
    }
  }
  return;
}


/* ==== 00446b00 TForm.SetClientWidth ==== */

void TForm_SetClientWidth(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    param_1[0x94] = param_2;
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
    return;
  }
  FUN_0042e1b0(param_1,param_2);
  return;
}


/* ==== 00446b30 TForm.SetClientHeight ==== */

void TForm_SetClientHeight(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    param_1[0x95] = param_2;
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
    return;
  }
  FUN_0042e1f4(param_1,param_2);
  return;
}


/* ==== 00446b60 TForm.SetVisible ==== */

void TForm_SetVisible(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((*(byte *)(param_1 + 0xb3) & 1) == 0) {
    if ((cVar1 != '\0') && (cVar1 != *(char *)((int)param_1 + 0x47))) {
      FUN_00447a14(param_1);
      param_3 = extraout_ECX;
    }
    TGroupBox_SetVisible(param_1,param_2,param_3);
  }
  else {
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xfd;
      return;
    }
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 2;
  }
  return;
}


/* ==== 00446ba4 TCustomForm.dynamic_ffd2 ==== */

void TCustomForm_dynamic_ffd2(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_00446bfd;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if ((*(char *)(param_1 + 0x217) == '\x01') && (*(char *)(param_1 + 0x47) != '\0')) {
    System_LoadResString((undefined4 *)PTR_PTR_004ab658,(int *)&local_8);
    piVar1 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_8);
    System__RaiseExcept(piVar1);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00446c04;
  puStack_10 = (undefined1 *)0x446bfc;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00446c08 TCustomForm.virtual_0dc ==== */

undefined4 TCustomForm_virtual_0dc(void)

{
  return 0;
}


/* ==== 00446c0c TCustomForm.virtual_060 ==== */

void TCustomForm_virtual_060(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  if ((param_2 != (int *)param_1[9]) && (param_1 != param_2)) {
    if ((int *)param_1[9] == (int *)0x0) {
      FUN_00431dbc(param_1);
      param_3 = extraout_ECX;
    }
    TControl_virtual_060(param_1,param_2,param_3);
    if (param_1[9] == 0) {
      FUN_00431f54(param_1);
    }
  }
  return;
}


/* ==== 00446c44 TCustomForm.virtual_020 ==== */

void TCustomForm_virtual_020(int param_1,int param_2,char *param_3,char *param_4)

{
  TComponent_virtual_020(param_1,param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x238) != 0) {
    (**(code **)(**(int **)(param_1 + 0x238) + 0x2c))
              (*(int **)(param_1 + 0x238),param_2,param_3,param_4);
  }
  return;
}


/* ==== 00446c84 TCustomForm.virtual_06c ==== */

void TCustomForm_virtual_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  HANDLE pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  HWND pHVar6;
  HDC hdc;
  int *piVar7;
  int saved_dc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  
  uVar1 = *param_2;
  if ((int)uVar1 < 0x47) {
    if (uVar1 == 0x46) {
      if ((*(ushort *)(param_1 + 8) & 0x11) == 1) {
        if (((byte)((char)param_1[0x86] - 1U) < 2) && (*(char *)((int)param_1 + 0x213) != '\x02')) {
          *(uint *)(param_2[2] + 0x18) = *(uint *)(param_2[2] + 0x18) | 2;
        }
        if ((((char)param_1[0x86] == '\x01') || ((char)param_1[0x86] == '\x03')) &&
           ((*(char *)((int)param_1 + 0x211) == '\x02' ||
            (*(char *)((int)param_1 + 0x211) == '\x05')))) {
          *(uint *)(param_2[2] + 0x18) = *(uint *)(param_2[2] + 0x18) | 1;
        }
      }
    }
    else if (uVar1 - 6 < 3) {
      if (DAT_004aa934 == '\0') {
        return;
      }
      if ((*param_2 == 7) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
        pHVar6 = (HWND)0x0;
        if (*(char *)((int)param_1 + 0x217) == '\x02') {
          pvVar2 = FUN_004473f4((int)param_1);
          param_3 = extraout_ECX;
          if (pvVar2 != (HANDLE)0x0) {
            piVar3 = FUN_004473f4((int)param_1);
            pHVar6 = (HWND)Controls_TWinControl_GetHandle(piVar3);
            param_3 = extraout_ECX_00;
          }
        }
        else {
          piVar3 = (int *)param_1[0x82];
          if ((piVar3 != (int *)0x0) && (piVar3 != param_1)) {
            pHVar6 = (HWND)Controls_TWinControl_GetHandle(piVar3);
            param_3 = extraout_ECX_01;
          }
        }
        if (pHVar6 != (HWND)0x0) {
          puStack_2c = (undefined1 *)0x446d44;
          SetFocus(pHVar6);
          return;
        }
      }
    }
    else if (uVar1 == 0x2b) {
      piVar3 = (int *)param_2[2];
      if (((*piVar3 == 1) && (param_1[0x8c] != 0)) &&
         (piVar5 = (int *)FUN_0044038c(param_1[0x8c]), param_3 = extraout_ECX_04,
         piVar5 != (int *)0x0)) {
        piVar4 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',extraout_ECX_04);
        puStack_2c = &LAB_00446ef7;
        uStack_30 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_30;
        saved_dc = SaveDC((HDC)piVar3[6]);
        uVar8 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffc4;
        FUN_00419558(piVar4,piVar3[6]);
        TCanvas_SetFont((int)piVar4);
        FUN_00441874(piVar5,(int)piVar4,piVar3 + 7,
                     CONCAT22((short)((uint)piVar3 >> 0x10),(short)piVar3[4]));
        *in_FS_OFFSET = uVar8;
        FUN_00419558(piVar4,0);
        RestoreDC((HDC)piVar3[6],saved_dc);
        return;
      }
    }
    else if (((uVar1 == 0x2c) && (piVar3 = (int *)param_2[2], *piVar3 == 1)) &&
            ((param_1[0x8c] != 0 &&
             (piVar5 = (int *)FUN_0044038c(param_1[0x8c]), param_3 = extraout_ECX_05,
             piVar5 != (int *)0x0)))) {
      pHVar6 = (HWND)Controls_TWinControl_GetHandle(param_1);
      puStack_2c = (undefined1 *)0x446f45;
      hdc = GetWindowDC(pHVar6);
      puStack_2c = &LAB_00447022;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      piVar7 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',extraout_ECX_06);
      *in_FS_OFFSET = &stack0xffffffc4;
      saved_dc = SaveDC(hdc);
      *in_FS_OFFSET = &stack0xffffffb8;
      FUN_00419558(piVar7,(int)hdc);
      TCanvas_SetFont((int)piVar7);
      piVar4 = piVar3 + 4;
      FUN_0043ec6c(piVar5,piVar7,piVar3 + 3,piVar4);
      *in_FS_OFFSET = piVar4;
      FUN_00419558(piVar7,0);
      RestoreDC(hdc,saved_dc);
      return;
    }
  }
  else if (uVar1 == 0xb01a) {
    if (param_1[0x24] != 0) {
      System__CallDynaInst(param_1,param_2,param_3);
      param_3 = extraout_ECX_03;
    }
  }
  else if ((uVar1 == 0xb01b) && (param_1[0x24] != 0)) {
    System__CallDynaInst(param_1,param_2,param_3);
    param_3 = extraout_ECX_02;
  }
  TWinControl_virtual_06c(param_1,param_2,param_3);
  return;
}


/* ==== 00447044 FUN_00447044 ==== */

void FUN_00447044(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  
  LVar1 = CallWindowProcA(*(WNDPROC *)(*(int *)(in_stack_00000004 + -4) + 0x25c),
                          *(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x23c),
                          **(UINT **)(in_stack_00000004 + -8),
                          *(WPARAM *)(*(int *)(in_stack_00000004 + -8) + 4),
                          *(LPARAM *)(*(int *)(in_stack_00000004 + -8) + 8));
  *(LRESULT *)(*(int *)(in_stack_00000004 + -8) + 0xc) = LVar1;
  return;
}


/* ==== 00447090 FUN_00447090 ==== */

undefined4 FUN_00447090(void)

{
  int i_val;
  int iVar1;
  int j;
  int in_stack_00000004;
  
  i_val = FUN_00447428(*(int *)(in_stack_00000004 + -4));
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_00447474(*(int *)(in_stack_00000004 + -4),j);
      if (*(char *)(iVar1 + 0x213) == '\x02') {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00447198 TCustomForm.virtual_088 ==== */

void TCustomForm_virtual_088(int *param_1,undefined4 param_2,int *param_3)

{
  TScrollingWinControl_virtual_088(param_1,param_2,param_3);
  if ((HWND)param_1[0x8f] != (HWND)0x0) {
    SetWindowPos((HWND)param_1[0x8f],(HWND)0x1,*param_3,param_3[1],param_3[2] - *param_3,
                 param_3[3] - param_3[1],0x14);
  }
  return;
}


/* ==== 004471d4 TCustomForm.CMBiDiModeChanged ==== */

void TCustomForm_CMBiDiModeChanged(int *param_1,int param_2,uint param_3)

{
  bool bVar1;
  HWND pHVar2;
  int *piVar3;
  undefined4 uVar4;
  int j;
  uint dwNewLong;
  uint local_10;
  int i_val;
  
  local_10 = param_3;
  TScrollingWinControl_CMBiDiModeChanged(param_1,param_2);
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if (bVar1) {
    i_val = -0x14;
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
    local_10 = GetWindowLongA(pHVar2,i_val);
    local_10 = local_10 & 0xffff8fff;
    FUN_004318b0(param_1,&local_10);
    i_val = -0x14;
    dwNewLong = local_10;
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetWindowLongA(pHVar2,i_val,dwNewLong);
  }
  i_val = FUN_00415b9c((int)param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar3 = (int *)FUN_00415b70((int)param_1,j);
      uVar4 = System__IsClass(piVar3,(int)&PTR_TPersistent_virtual_000_0043c104);
      if ((char)uVar4 != '\0') {
        piVar3 = (int *)FUN_00415b70((int)param_1,j);
        FUN_00440e1c(piVar3);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0044726c TCustomForm.CMParentBiDiModeChanged ==== */

void TCustomForm_CMParentBiDiModeChanged(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = &stack0xfffffffc;
  if ((char)param_1[0x8b] == '\0') {
    *(undefined1 *)(param_1 + 0x8b) = 1;
    puStack_10 = &LAB_004472e9;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    local_8 = param_1;
    if ((char)param_1[0x14] != '\0') {
      if (param_1[9] == 0) {
        puStack_c = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)(DAT_004ac7d4 + 0x28));
      }
      else {
        (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)(param_1[9] + 0x4f));
      }
      (**(code **)(*local_8 + 100))(local_8,1);
    }
    *in_FS_OFFSET = uStack_14;
    *(undefined1 *)(local_8 + 0x8b) = 0;
    return;
  }
  return;
}


/* ==== 004472f4 TForm.SetBorderIcons ==== */

void TForm_SetBorderIcons(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x210)) &&
     (*(char *)(param_1 + 0x210) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00447320 TForm.SetBorderStyle ==== */

void TForm_SetBorderStyle(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != *(char *)(param_1 + 0x211)) {
    *(char *)(param_1 + 0x211) = param_2;
    if ((param_2 == '\x02') || (param_2 == '\x05')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    TScrollBox_SetAutoScroll(param_1,cVar1);
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      FUN_00431e04(param_1);
    }
  }
  return;
}


/* ==== 00447358 TCustomForm.dynamic_ffd1 ==== */

void TCustomForm_dynamic_ffd1(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int i_val;
  undefined4 *puVar2;
  undefined4 local_1c [4];
  
  puVar2 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  i_val = param_1[9];
  iVar1 = param_1[0x24];
  TControl_dynamic_ffd1(param_1,param_2,local_1c);
  if (((param_1[9] != 0) && (i_val == param_1[9])) && (iVar1 != param_1[0x24])) {
    FUN_00431e04((int)param_1);
  }
  return;
}


/* ==== 004473a0 TCustomForm.dynamic_ffe6 ==== */

void TCustomForm_dynamic_ffe6(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  
  if (param_2 != param_1[0x24]) {
    if (param_2 != 0) {
      cVar1 = (**(code **)(*param_1 + 0x50))();
      if (cVar1 == '\0') goto LAB_004473e5;
    }
    if (param_2 == 0) {
      *(char *)((int)param_1 + 0x211) = (char)param_1[0x9a];
    }
    else {
      *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)((int)param_1 + 0x211);
      *(undefined1 *)((int)param_1 + 0x211) = 0;
    }
  }
LAB_004473e5:
  TControl_dynamic_ffe6(param_1,param_2,param_3);
  return;
}


/* ==== 004473f4 FUN_004473f4 ==== */

HANDLE FUN_004473f4(int param_1)

{
  HANDLE pvVar1;
  HWND wnd;
  
  pvVar1 = (HANDLE)0x0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    wnd = (HWND)SendMessageA(*(HWND *)(param_1 + 0x23c),0x229,0,0);
    pvVar1 = FUN_0042b94c(wnd);
  }
  return pvVar1;
}


/* ==== 00447428 FUN_00447428 ==== */

int FUN_00447428(int param_1)

{
  int j;
  int iVar1;
  int k;
  int i_val;
  
  i_val = 0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    j = FUN_0044b180(DAT_004ac7d8);
    if (-1 < j + -1) {
      k = 0;
      do {
        iVar1 = FUN_0044b16c(DAT_004ac7d8,k);
        if (*(char *)(iVar1 + 0x217) == '\x01') {
          i_val = i_val + 1;
        }
        k = k + 1;
        j = j + -1;
      } while (j != 0);
    }
  }
  return i_val;
}


/* ==== 00447474 FUN_00447474 ==== */

int FUN_00447474(int param_1,int param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  if (((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) &&
     (i_val = FUN_0044b180(DAT_004ac7d8), -1 < i_val + -1)) {
    j = 0;
    do {
      iVar1 = FUN_0044b16c(DAT_004ac7d8,j);
      if ((*(char *)(iVar1 + 0x217) == '\x01') && (param_2 = param_2 + -1, param_2 < 0)) {
        return iVar1;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 004474c4 FUN_004474c4 ==== */

undefined4 FUN_004474c4(int *param_1)

{
  int iVar1;
  int i_val;
  int iVar2;
  undefined4 uVar3;
  int j;
  
  Controls_TWinControl_GetHandle(param_1);
  iVar1 = (**(code **)PTR_DAT_004ab7ec)();
  i_val = FUN_0044b150(DAT_004ac7d8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar2 = FUN_0044b13c(DAT_004ac7d8,j);
      if (iVar1 == *(int *)(iVar2 + 4)) {
        uVar3 = FUN_0044b13c(DAT_004ac7d8,j);
        return uVar3;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00447524 FUN_00447524 ==== */

undefined4 FUN_00447524(int param_1)

{
  return *(undefined4 *)(param_1 + 0x220);
}


/* ==== 0044752c TForm.SetIcon ==== */

void TForm_SetIcon(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x228) + 8))();
  return;
}


/* ==== 00447538 FUN_00447538 ==== */

uint FUN_00447538(int param_1)

{
  return CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1;
}


/* ==== 00447568 TForm.SetFormStyle ==== */

void TForm_SetFormStyle(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  char cVar3;
  
  cVar3 = (char)param_2;
  if (cVar3 != *(char *)((int)param_1 + 0x217)) {
    if ((cVar3 == '\x01') && ((char)param_1[0x86] == '\0')) {
      TForm_SetPosition((int)param_1,'\x01');
      param_3 = extraout_ECX;
      param_2 = extraout_EDX;
    }
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      FUN_00431dbc(param_1);
      param_3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
    cVar1 = *(char *)((int)param_1 + 0x217);
    *(char *)((int)param_1 + 0x217) = cVar3;
    if (((cVar3 == '\x02') || (cVar1 == '\x02')) && ((char)param_1[0x4e] == '\0')) {
      iVar2 = FUN_00447938((int)param_1);
      TGroupBox_SetColor((int)param_1,iVar2);
      param_3 = extraout_ECX_01;
      param_2 = extraout_EDX_01;
    }
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      FUN_00431f54(param_1);
      param_3 = extraout_ECX_02;
      param_2 = extraout_EDX_02;
    }
    if (cVar3 == '\x01') {
      TForm_SetVisible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
    }
  }
  return;
}


/* ==== 004475e8 FUN_004475e8 ==== */

void FUN_004475e8(int *param_1)

{
  HWND pHVar1;
  HMENU pHVar2;
  HMENU wParam;
  LPARAM lParam;
  
  if ((*(char *)((int)param_1 + 0x217) == '\x02') && (param_1[0x8f] != 0)) {
    wParam = (HMENU)0x0;
    if ((int *)param_1[0x8c] != (int *)0x0) {
      wParam = (HMENU)(**(code **)(*(int *)param_1[0x8c] + 0x34))();
    }
    lParam = 0;
    if (param_1[0x90] != 0) {
      lParam = FUN_0043d6c8(param_1[0x90]);
    }
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    pHVar2 = GetMenu(pHVar1);
    SendMessageA((HWND)param_1[0x8f],0x230,(WPARAM)wParam,lParam);
    if (wParam != pHVar2) {
      pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
      DrawMenuBar(pHVar1);
    }
  }
  return;
}


/* ==== 00447664 TForm.SetObjectMenuItem ==== */

void TForm_SetObjectMenuItem(int param_1,int *param_2,undefined4 param_3)

{
  *(int **)(param_1 + 0x248) = param_2;
  if (param_2 != (int *)0x0) {
    FUN_0041564c((int)param_2,param_1,param_3);
    TMenuItem_SetEnabled(param_2,0);
  }
  return;
}


/* ==== 00447688 TForm.SetWindowMenu ==== */

void TForm_SetWindowMenu(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != param_1[0x90]) {
    param_1[0x90] = param_2;
    if (param_2 != 0) {
      FUN_0041564c(param_2,(int)param_1,param_3);
    }
    FUN_004475e8(param_1);
  }
  return;
}


/* ==== 004476b0 TForm.SetMenu ==== */

BOOL __stdcall TForm_SetMenu(HWND hWnd,HMENU hMenu)

{
  bool bVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  HMENU pHVar4;
  HWND pHVar5;
  HMENU pHVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *in_EDX;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  byte *local_14;
  int local_10;
  undefined1 local_c;
  int i_val;
  
  uVar7 = 0;
  local_14 = (byte *)0x0;
  uVar8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  if ((in_EDX != (int *)0x0) &&
     (iVar2 = FUN_0044b180(DAT_004ac7d8), uVar7 = extraout_ECX, -1 < iVar2 + -1)) {
    j = 0;
    i_val = iVar2;
    do {
      iVar2 = FUN_0044b16c(DAT_004ac7d8,j);
      uVar7 = extraout_ECX_00;
      if ((in_EDX == *(int **)(iVar2 + 0x230)) &&
         (piVar3 = (int *)FUN_0044b16c(DAT_004ac7d8,j), uVar7 = extraout_ECX_01, in_EAX != piVar3))
      {
        local_10 = in_EDX[2];
        local_c = 0xb;
        piVar3 = &local_10;
        uVar8 = 0;
        System_LoadResString((undefined4 *)PTR_PTR_004ab6f0,(int *)&local_14);
        uVar7 = SysUtils_Exception_CreateFmt((int)&DAT_0040ea0c,'\x01',local_14,uVar8,piVar3);
        System__RaiseExcept(uVar7);
        uVar7 = extraout_ECX_02;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if ((int *)in_EAX[0x8c] != (int *)0x0) {
    FUN_00440964((int *)in_EAX[0x8c],0);
    uVar7 = extraout_ECX_03;
  }
  in_EAX[0x8c] = (int)in_EDX;
  if ((in_EDX == (int *)0x0) ||
     ((FUN_0041564c((int)in_EDX,(int)in_EAX,uVar7), (*(byte *)(in_EAX + 8) & 0x10) == 0 &&
      (*(char *)((int)in_EAX + 0x211) == '\x03')))) {
    bVar1 = Controls_TWinControl_HandleAllocated((int)in_EAX);
    if (bVar1) {
      pHVar4 = (HMENU)0x0;
      pHVar5 = (HWND)Controls_TWinControl_GetHandle(in_EAX);
      SetMenu(pHVar5,pHVar4);
    }
  }
  else if (((*(char *)(in_EAX[0x8c] + 0x4c) == '\0') && (*(char *)((int)in_EAX + 0x217) != '\x01'))
          || ((*(byte *)(in_EAX + 8) & 0x10) != 0)) {
    bVar1 = Controls_TWinControl_HandleAllocated((int)in_EAX);
    if (bVar1) {
      pHVar4 = (HMENU)(**(code **)(*(int *)in_EAX[0x8c] + 0x34))();
      pHVar5 = (HWND)Controls_TWinControl_GetHandle(in_EAX);
      pHVar6 = GetMenu(pHVar5);
      if (pHVar4 != pHVar6) {
        pHVar4 = (HMENU)(**(code **)(*(int *)in_EAX[0x8c] + 0x34))();
        pHVar5 = (HWND)Controls_TWinControl_GetHandle(in_EAX);
        SetMenu(pHVar5,pHVar4);
      }
      iVar2 = Controls_TWinControl_GetHandle(in_EAX);
      FUN_00440964(in_EDX,iVar2);
    }
  }
  else if ((*(char *)((int)in_EAX + 0x217) != '\x01') &&
          (bVar1 = Controls_TWinControl_HandleAllocated((int)in_EAX), bVar1)) {
    pHVar4 = (HMENU)0x0;
    pHVar5 = (HWND)Controls_TWinControl_GetHandle(in_EAX);
    SetMenu(pHVar5,pHVar4);
  }
  if (*(char *)((int)in_EAX + 0x216) != '\0') {
    FUN_00448718((int)in_EAX,'\x01');
  }
  FUN_004475e8(in_EAX);
  *in_FS_OFFSET = uVar8;
  piVar3 = System__LStrClr((int *)&local_14);
  return (BOOL)piVar3;
}


/* ==== 00447874 TForm.GetPixelsPerInch ==== */

int TForm_GetPixelsPerInch(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x244);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_004ac7d8 + 0x34);
  }
  return iVar1;
}


/* ==== 00447888 TForm.SetPixelsPerInch ==== */

void TForm_SetPixelsPerInch(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = TForm_GetPixelsPerInch(param_1);
  if (((param_2 != iVar1) && ((param_2 == 0 || (0x23 < param_2)))) &&
     (((*(byte *)(param_1 + 0x20) & 1) == 0 || (*(int *)(param_1 + 0x244) != 0)))) {
    *(int *)(param_1 + 0x244) = param_2;
  }
  return;
}


/* ==== 004478bc TForm.SetPosition ==== */

void TForm_SetPosition(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x218)) &&
     (*(char *)(param_1 + 0x218) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 004478d8 TForm.GetScaled ==== */

bool TForm_GetScaled(int param_1)

{
  return *(int *)(param_1 + 0x244) != 0;
}


/* ==== 004478e4 TForm.SetScaled ==== */

void TForm_SetScaled(int param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = TForm_GetScaled(param_1);
  if (((bool)param_2 != bVar1) && (*(undefined4 *)(param_1 + 0x244) = 0, param_2 != '\0')) {
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(DAT_004ac7d8 + 0x34);
  }
  return;
}


/* ==== 00447914 TCustomForm.CMColorChanged ==== */

void TCustomForm_CMColorChanged(int *param_1)

{
  TWinControl_CMColorChanged(param_1);
  if (param_1[0x88] != 0) {
    TBrush_SetColor(*(int **)(param_1[0x88] + 0x14),param_1[0x18]);
  }
  return;
}


/* ==== 00447938 FUN_00447938 ==== */

undefined4 FUN_00447938(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80000005;
  if (*(char *)(param_1 + 0x217) == '\x02') {
    uVar1 = 0x8000000c;
  }
  return uVar1;
}


/* ==== 00447950 TCustomForm.CMCtl3DChanged ==== */

void TCustomForm_CMCtl3DChanged(int param_1,undefined4 param_2)

{
  int iVar1;
  
  TWinControl_CMCtl3DChanged(param_1,param_2);
  if (*(char *)(param_1 + 0x138) == '\0') {
    if (*(int *)(param_1 + 0x60) == -0x7ffffff1) {
      iVar1 = FUN_00447938(param_1);
      TGroupBox_SetColor(param_1,iVar1);
    }
  }
  else {
    iVar1 = FUN_00447938(param_1);
    if (iVar1 == *(int *)(param_1 + 0x60)) {
      TGroupBox_SetColor(param_1,-0x7ffffff1);
      return;
    }
  }
  return;
}


/* ==== 00447998 TCustomForm.CMFontChanged ==== */

void TCustomForm_CMFontChanged(int *param_1)

{
  TWinControl_CMFontChanged(param_1);
  if (param_1[0x88] != 0) {
    TCanvas_SetFont(param_1[0x88]);
  }
  return;
}


/* ==== 004479b8 TCustomForm.CMMenuChanged ==== */

void TCustomForm_CMMenuChanged(int *param_1)

{
  HWND unaff_EBX;
  HMENU in_stack_00000000;
  
  FUN_004475e8(param_1);
  TForm_SetMenu(unaff_EBX,in_stack_00000000);
  return;
}


/* ==== 004479d4 TForm.SetWindowState ==== */

void TForm_SetWindowState(int *param_1,byte param_2)

{
  HWND hWnd;
  int nCmdShow;
  
  if (((param_2 != *(byte *)((int)param_1 + 0x213)) &&
      (*(byte *)((int)param_1 + 0x213) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) &&
     ((char)param_1[0x5a] != '\0')) {
    nCmdShow = *(int *)(&DAT_004aa9c4 + (uint)param_2 * 4);
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    ShowWindow(hWnd,nCmdShow);
  }
  return;
}


/* ==== 00447a14 FUN_00447a14 ==== */

void FUN_00447a14(int *param_1)

{
  int iVar1;
  int k;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int j;
  int local_24;
  int m;
  int local_18;
  int i_val;
  
  if ((*(char *)((int)param_1 + 0x219) != '\0') && (*(int *)(DAT_004ac7d4 + 0x38) != 0)) {
    local_24 = 0;
    if (*(char *)((int)param_1 + 0x219) == '\x02') {
      iVar1 = FUN_004474c4(*(int **)(DAT_004ac7d4 + 0x38));
      local_24 = *(int *)(iVar1 + 4);
    }
    else if ((*(char *)((int)param_1 + 0x219) == '\x03') && (*(int *)(DAT_004ac7d8 + 0x5c) != 0)) {
      iVar1 = FUN_004474c4(*(int **)(DAT_004ac7d8 + 0x5c));
      local_24 = *(int *)(iVar1 + 4);
    }
    else if (*(char *)((int)param_1 + 0x219) == '\x01') {
      iVar1 = FUN_0044b13c(DAT_004ac7d8,0);
      local_24 = *(int *)(iVar1 + 4);
    }
    iVar1 = FUN_004474c4(param_1);
    iVar1 = *(int *)(iVar1 + 4);
    i_val = FUN_0044b150(DAT_004ac7d8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        k = FUN_0044b13c(DAT_004ac7d8,j);
        if ((*(int *)(k + 4) == local_24) && (local_24 != iVar1)) {
          k = FUN_0044b150(DAT_004ac7d8);
          if (-1 < k + -1) {
            m = 0;
            do {
              iVar2 = FUN_0044b13c(DAT_004ac7d8,m);
              if (*(int *)(iVar2 + 4) == iVar1) {
                if ((char)param_1[0x86] == '\x04') {
                  iVar2 = param_1[0xf];
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar3 = FUN_0044aeb0();
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar4 = FUN_0044ae8c();
                  iVar5 = iVar4 - iVar2 >> 1;
                  if (iVar5 < 0) {
                    iVar5 = iVar5 + (uint)((iVar4 - iVar2 & 1U) != 0);
                  }
                  FUN_0044b13c(DAT_004ac7d8,j);
                  puVar6 = FUN_0044ae6c();
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar2 = FUN_0044aed0();
                  iVar4 = iVar2 - param_1[0xe] >> 1;
                  if (iVar4 < 0) {
                    iVar4 = iVar4 + (uint)((iVar2 - param_1[0xe] & 1U) != 0);
                  }
                  (**(code **)(*param_1 + 0x7c))(param_1,puVar6 + iVar4,iVar3 + iVar5);
                }
                else if ((char)param_1[0x86] == '\x06') {
                  iVar2 = param_1[0xf];
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar3 = FUN_0044aeb0();
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar4 = FUN_0044ae8c();
                  iVar5 = iVar4 - iVar2 >> 1;
                  if (iVar5 < 0) {
                    iVar5 = iVar5 + (uint)((iVar4 - iVar2 & 1U) != 0);
                  }
                  FUN_0044b13c(DAT_004ac7d8,j);
                  puVar6 = FUN_0044ae6c();
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar2 = FUN_0044aed0();
                  iVar4 = iVar2 - param_1[0xe] >> 1;
                  if (iVar4 < 0) {
                    iVar4 = iVar4 + (uint)((iVar2 - param_1[0xe] & 1U) != 0);
                  }
                  (**(code **)(*param_1 + 0x7c))(param_1,puVar6 + iVar4,iVar3 + iVar5);
                }
                else {
                  FUN_0044b13c(DAT_004ac7d8,j);
                  puVar6 = FUN_0044ae6c();
                  iVar2 = param_1[0xc];
                  FUN_0044b13c(DAT_004ac7d8,m);
                  puVar7 = FUN_0044ae6c();
                  puVar6 = puVar6 + (iVar2 - (int)puVar7);
                  FUN_0044b13c(DAT_004ac7d8,j);
                  puVar7 = FUN_0044ae6c();
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar2 = FUN_0044aed0();
                  if ((int)(puVar7 + iVar2) < (int)(puVar6 + param_1[0xe])) {
                    FUN_0044b13c(DAT_004ac7d8,j);
                    puVar6 = FUN_0044ae6c();
                    FUN_0044b13c(DAT_004ac7d8,j);
                    iVar2 = FUN_0044aed0();
                    puVar6 = puVar6 + (iVar2 - param_1[0xe]);
                  }
                  FUN_0044b13c(DAT_004ac7d8,j);
                  local_18 = FUN_0044aeb0();
                  local_18 = local_18 + param_1[0xd];
                  FUN_0044b13c(DAT_004ac7d8,m);
                  iVar2 = FUN_0044aeb0();
                  local_18 = local_18 - iVar2;
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar2 = FUN_0044aeb0();
                  FUN_0044b13c(DAT_004ac7d8,j);
                  iVar3 = FUN_0044ae8c();
                  if (iVar2 + iVar3 < local_18 + param_1[0xf]) {
                    FUN_0044b13c(DAT_004ac7d8,j);
                    iVar2 = FUN_0044aeb0();
                    FUN_0044b13c(DAT_004ac7d8,j);
                    iVar3 = FUN_0044ae8c();
                    local_18 = (iVar2 + iVar3) - param_1[0xf];
                  }
                  (**(code **)(*param_1 + 0x7c))(param_1,puVar6,local_18,param_1[0xf],param_1[0xe]);
                }
              }
              m = m + 1;
              k = k + -1;
            } while (k != 0);
          }
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 00447d60 TCustomForm.virtual_090 ==== */

undefined * TCustomForm_virtual_090(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined3 uVar7;
  uint uVar8;
  
  puVar4 = (undefined *)TScrollingWinControl_virtual_090(param_1,param_2);
  if ((param_1[9] == 0) && (param_1[0x59] == 0)) {
    puVar4 = *(undefined **)(DAT_004ac7d4 + 0x24);
    param_2[7] = (int)puVar4;
    param_2[1] = param_2[1] & 0xbffcffff;
  }
  param_2[9] = 8;
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) || (param_1[9] != 0)) {
    if ((byte)((char)param_1[0x86] - 1U) < 2) {
      param_2[3] = -0x80000000;
      param_2[4] = -0x80000000;
    }
    bVar1 = *(byte *)(param_1 + 0x84);
    uVar8 = (uint)bVar1;
    bVar2 = *(byte *)((int)param_1 + 0x211);
    if ((*(char *)((int)param_1 + 0x217) == '\x01') && ((bVar2 == 0 || (bVar2 == 3)))) {
      bVar2 = 2;
    }
    uVar5 = (uint)bVar2;
    switch(uVar5) {
    case 0:
      if ((param_1[9] == 0) && (param_1[0x59] == 0)) {
        param_2[1] = param_2[1] | 0x80000000;
      }
      uVar8 = 0;
      break;
    case 1:
    case 4:
      param_2[1] = param_2[1] | 0xc00000;
      break;
    case 2:
    case 5:
      param_2[1] = param_2[1] | 0xc40000;
      if (((char)param_1[0x86] == '\x01') || (uVar5 = 0, (char)param_1[0x86] == '\x03')) {
        uVar5 = 0;
        param_2[5] = -0x80000000;
        param_2[6] = -0x80000000;
      }
      break;
    case 3:
      param_2[1] = param_2[1] | 0x80c00000;
      param_2[2] = 0x101;
      FUN_004318b0(param_1,(uint *)(param_2 + 2));
      puVar4 = PTR_DAT_004ab7d4;
      if (*PTR_DAT_004ab7d4 == '\0') {
        puVar4 = (undefined *)(param_2[1] | 0x400080);
        param_2[1] = (int)puVar4;
      }
      uVar5 = CONCAT31((int3)((uint)puVar4 >> 8),bVar1) & 0xffffff09;
      param_2[9] = 0x2808;
      uVar8 = uVar5;
    }
    uVar5 = uVar5 & 0xffffff00;
    if ((byte)(bVar2 - 4) < 2) {
      param_2[2] = 0x80;
      uVar6 = FUN_004318b0(param_1,(uint *)(param_2 + 2));
      uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),(char)uVar8) & 0xffffff01;
      uVar8 = uVar5;
    }
    uVar7 = (undefined3)(uVar5 >> 8);
    puVar4 = (undefined *)CONCAT31(uVar7,bVar2 - 3);
    if (bVar2 < 3) {
      if ((*(char *)((int)param_1 + 0x217) != '\x01') || ((uVar8 & 1) != 0)) {
        if ((uVar8 & 2) != 0) {
          param_2[1] = param_2[1] | 0x20000;
        }
        if ((uVar8 & 4) != 0) {
          param_2[1] = param_2[1] | 0x10000;
        }
      }
      cVar3 = *(char *)((int)param_1 + 0x213);
      puVar4 = (undefined *)CONCAT31(uVar7,cVar3);
      if (cVar3 == '\x01') {
        param_2[1] = param_2[1] | 0x20000000;
      }
      else if (cVar3 == '\x02') {
        param_2[1] = param_2[1] | 0x1000000;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x213) = 0;
    }
    if ((uVar8 & 1) != 0) {
      param_2[1] = param_2[1] | 0x80000;
    }
    if ((uVar8 & 8) != 0) {
      param_2[2] = param_2[2] | 0x400;
    }
    if ((*(byte *)((int)param_1 + 0x21) & 2) != 0) {
      param_2[1] = param_2[1] & 0xff3fffff;
    }
    if (*(char *)((int)param_1 + 0x217) == '\x01') {
      puVar4 = &DAT_00406bc8;
      param_2[10] = (int)&DAT_00406bc8;
    }
  }
  else {
    param_2[1] = param_2[1] | 0xcf0000;
  }
  return puVar4;
}


/* ==== 00447f74 TCustomForm.virtual_098 ==== */

void TCustomForm_virtual_098(int *param_1)

{
  LPARAM LVar1;
  HWND pHVar2;
  undefined1 *puVar3;
  LONG LVar4;
  HWND hWndInsertAfter;
  int iVar5;
  int iVar6;
  UINT UVar7;
  HMENU hMenu;
  int cx;
  WPARAM WVar8;
  HINSTANCE hInstance;
  int cy;
  undefined4 *lpParam;
  undefined4 local_10;
  undefined4 local_c;
  
  TScrollingWinControl_virtual_098(param_1);
  if (*PTR_DAT_004ab7d4 != '\0') {
    if (*(char *)((int)param_1 + 0x211) == '\x03') {
      LVar1 = 0;
      WVar8 = 1;
      UVar7 = 0x80;
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(pHVar2,UVar7,WVar8,LVar1);
    }
    else {
      LVar1 = FUN_0044888c((int)param_1);
      WVar8 = 1;
      UVar7 = 0x80;
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(pHVar2,UVar7,WVar8,LVar1);
    }
  }
  lpParam = &local_10;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if (*(char *)((int)param_1 + 0x217) == '\x02') {
      local_c = 0xff00;
      local_10 = 0;
      if (param_1[0x90] != 0) {
        local_10 = FUN_0043d6c8(param_1[0x90]);
      }
      hMenu = (HMENU)0x0;
      hInstance = DAT_004ac4dc;
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      iVar5 = TForm_GetClientHeight(param_1);
      iVar6 = TForm_GetClientWidth(param_1);
      pHVar2 = CreateWindowExA(0x200,"MDICLIENT",(LPCSTR)0x0,0x56330001,0,0,iVar6,iVar5,pHVar2,hMenu
                               ,hInstance,lpParam);
      param_1[0x8f] = (int)pHVar2;
      puVar3 = FUN_00444580();
      param_1[0x98] = (int)puVar3;
      LVar4 = GetWindowLongA((HWND)param_1[0x8f],-4);
      param_1[0x97] = LVar4;
      SetWindowLongA((HWND)param_1[0x8f],-4,param_1[0x98]);
    }
    else if (*(char *)((int)param_1 + 0x217) == '\x03') {
      UVar7 = 0x13;
      cy = 0;
      cx = 0;
      iVar6 = 0;
      iVar5 = 0;
      hWndInsertAfter = (HWND)0xffffffff;
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,iVar5,iVar6,cx,cy,UVar7);
    }
  }
  return;
}


/* ==== 004480b4 TCustomForm.virtual_094 ==== */

void TCustomForm_virtual_094(int param_1,undefined4 *param_2)

{
  int *piVar1;
  LRESULT LVar2;
  undefined4 *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  puStack_38 = &LAB_004481a6;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if ((*(char *)(param_1 + 0x217) == '\x01') && ((*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    if ((*(int *)(DAT_004ac7d4 + 0x38) == 0) ||
       (puStack_34 = &stack0xfffffffc, *(int *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c) == 0)) {
      puStack_34 = &stack0xfffffffc;
      System_LoadResString((undefined4 *)PTR_PTR_004ab960,(int *)&local_2c);
      piVar1 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_2c);
      System__RaiseExcept(piVar1);
      param_2 = extraout_EDX;
    }
    local_28 = param_2 + 0x13;
    local_24 = *param_2;
    local_20 = DAT_004ac4dc;
    local_1c = param_2[3];
    local_18 = param_2[4];
    local_14 = param_2[5];
    local_10 = param_2[6];
    local_c = param_2[1];
    local_8 = param_2[8];
    LVar2 = SendMessageA(*(HWND *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c),0x220,0,(LPARAM)&local_28)
    ;
    *(LRESULT *)(param_1 + 0x14c) = LVar2;
    *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) | 0x10;
  }
  else {
    TWinControl_virtual_094(param_1,param_2);
    *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xef;
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004481ad;
  puStack_38 = (undefined1 *)0x4481a5;
  System__LStrClr((int *)&local_2c);
  return;
}


/* ==== 004481b4 TCustomForm.virtual_09c ==== */

void TCustomForm_virtual_09c(int *param_1)

{
  WPARAM wParam;
  LPARAM lParam;
  
  if ((*(byte *)(param_1 + 0xb3) & 0x10) == 0) {
    TWinControl_virtual_09c((int)param_1);
  }
  else {
    lParam = 0;
    wParam = Controls_TWinControl_GetHandle(param_1);
    SendMessageA(*(HWND *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c),0x221,wParam,lParam);
  }
  param_1[0x8f] = 0;
  return;
}


/* ==== 004481f8 TCustomForm.DefaultHandler ==== */

void TCustomForm_DefaultHandler(int *param_1,UINT *param_2)

{
  HWND pHVar1;
  UINT UVar2;
  HWND hWnd;
  UINT UVar3;
  UINT UVar4;
  
  if (param_1[0x8f] == 0) {
    TWinControl_DefaultHandler((int)param_1,param_2);
  }
  else {
    if (*param_2 != 5) {
      UVar2 = param_2[2];
      UVar4 = param_2[1];
      UVar3 = *param_2;
      pHVar1 = (HWND)param_1[0x8f];
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      UVar2 = DefFrameProcA(hWnd,pHVar1,UVar3,UVar4,UVar2);
      param_2[3] = UVar2;
      return;
    }
    UVar2 = param_2[2];
    UVar4 = param_2[1];
    UVar3 = *param_2;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    UVar2 = DefWindowProcA(pHVar1,UVar3,UVar4,UVar2);
    param_2[3] = UVar2;
  }
  return;
}


/* ==== 0044825c TForm.SetActiveControl ==== */

void TForm_SetActiveControl(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_00448304;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_2 == (int *)param_1[0x82]) goto LAB_004482ee;
  uVar4 = 0;
  puVar1 = &stack0xfffffffc;
  if (param_2 == (int *)0x0) goto LAB_004482c7;
  puVar1 = &stack0xfffffffc;
  if (param_1 == param_2) {
LAB_004482a6:
    puStack_18 = puVar1;
    System_LoadResString((undefined4 *)PTR_PTR_004ab978,(int *)&local_8);
    piVar3 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_8);
    System__RaiseExcept(piVar3);
    param_3 = extraout_ECX_01;
    uVar4 = extraout_EDX_01;
    puVar1 = puStack_18;
  }
  else {
    piVar3 = Forms_GetParentForm(param_2);
    puVar1 = puStack_18;
    if (param_1 != piVar3) goto LAB_004482a6;
    param_3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      cVar2 = System__CallDynaInst(param_2,extraout_EDX,extraout_ECX);
      param_3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
      puVar1 = puStack_18;
      if (cVar2 == '\0') goto LAB_004482a6;
    }
  }
LAB_004482c7:
  puStack_18 = puVar1;
  param_1[0x82] = (int)param_2;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(char *)((int)param_1 + 0x216) != '\0') {
      FUN_00448614(param_1);
      param_3 = extraout_ECX_02;
      uVar4 = extraout_EDX_02;
    }
    System__CallDynaInst(param_1,uVar4,param_3);
  }
LAB_004482ee:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0044830b;
  puStack_1c = (undefined1 *)0x448303;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00448314 FUN_00448314 ==== */

void FUN_00448314(int *param_1,int param_2,char param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  
  if (param_3 != '\0') {
    bVar1 = thunk_FUN_0043156d(param_2,param_1[0x83]);
    if (bVar1) {
      param_1[0x83] = *(int *)(param_2 + 0x24);
    }
  }
  bVar1 = thunk_FUN_0043156d(param_2,param_1[0x82]);
  if (bVar1) {
    TForm_SetActiveControl(param_1,(int *)0x0,extraout_ECX);
  }
  return;
}


/* ==== 0044835c FUN_0044835c ==== */

void FUN_0044835c(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x216);
  TForm_SetActiveControl(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xb0))();
  }
  return;
}


/* ==== 00448380 TCustomForm.virtual_0d4 ==== */

int * TCustomForm_virtual_0d4(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  HWND pHVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  DAT_004aa938 = DAT_004aa938 + 1;
  if (param_1[0x8e] == 0) {
    if (param_1 == param_2) {
      param_1[0x82] = 0;
    }
    else {
      param_1[0x82] = (int)param_2;
    }
  }
  *(int **)(DAT_004ac7d8 + 0x58) = param_2;
  *(int **)(DAT_004ac7d8 + 0x5c) = param_1;
  puStack_18 = (undefined1 *)0x4483d7;
  FUN_00410448(*(int **)(DAT_004ac7d8 + 0x44),(int)param_1);
  puStack_18 = (undefined1 *)0x4483e8;
  FUN_0041032c(*(int **)(DAT_004ac7d8 + 0x44),0,(int)param_1);
  puStack_18 = (undefined1 *)0x4483f5;
  uVar3 = System__IsClass(param_1,(int)&PTR_TWinControl_virtual_000_00442fd4);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(DAT_004ac7d8 + 0x60) = 0;
  }
  else {
    *(int **)(DAT_004ac7d8 + 0x60) = param_1;
    puStack_18 = (undefined1 *)0x448410;
    FUN_00410448(*(int **)(DAT_004ac7d8 + 0x40),(int)param_1);
    puStack_18 = (undefined1 *)0x448421;
    FUN_0041032c(*(int **)(DAT_004ac7d8 + 0x40),0,(int)param_1);
  }
  if ((*(byte *)(param_2 + 0x11) & 0x20) != 0) {
    return (int *)0x0;
  }
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) | 0x20;
  puStack_1c = &LAB_004485f0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(DAT_004ac7d8 + 0x6c);
  puStack_18 = &stack0xfffffffc;
  if (param_1 != piVar1) {
    puStack_18 = &stack0xfffffffc;
    if (piVar1 != (int *)0x0) {
      puStack_18 = &stack0xfffffffc;
      pHVar4 = (HWND)Controls_TWinControl_GetHandle(piVar1);
      *(undefined4 *)(DAT_004ac7d8 + 0x6c) = 0;
      bVar2 = FUN_00444468(pHVar4,0xb001);
      if (!bVar2) {
        FUN_00403794();
        return (int *)0x0;
      }
    }
    *(int **)(DAT_004ac7d8 + 0x6c) = param_1;
    pHVar4 = (HWND)Controls_TWinControl_GetHandle(param_1);
    bVar2 = FUN_00444468(pHVar4,CONCAT22(extraout_var,0xb000));
    if (!bVar2) {
      FUN_00403794();
      return (int *)0x0;
    }
  }
  if (param_1[0x83] == 0) {
    param_1[0x83] = (int)param_1;
  }
  if ((int *)param_1[0x83] != param_2) {
    while ((param_1[0x83] != 0 && (bVar2 = thunk_FUN_0043156d(param_1[0x83],(int)param_2), !bVar2)))
    {
      pHVar4 = (HWND)Controls_TWinControl_GetHandle((int *)param_1[0x83]);
      param_1[0x83] = *(int *)(param_1[0x83] + 0x24);
      bVar2 = FUN_00444468(pHVar4,CONCAT22(extraout_var_00,0xb01b));
      if (!bVar2) {
        FUN_00403794();
        return (int *)0x0;
      }
    }
    while (piVar1 = param_2, (int *)param_1[0x83] != param_2) {
      do {
        piVar5 = piVar1;
        piVar1 = (int *)piVar5[9];
      } while ((int *)piVar5[9] != (int *)param_1[0x83]);
      param_1[0x83] = (int)piVar5;
      pHVar4 = (HWND)Controls_TWinControl_GetHandle(piVar5);
      bVar2 = FUN_00444468(pHVar4,CONCAT22(extraout_var_01,0xb01a));
      if (!bVar2) {
        FUN_00403794();
        return (int *)0x0;
      }
    }
    for (piVar1 = (int *)param_2[9]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[9]) {
      uVar3 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_00441f6c);
      if ((char)uVar3 != '\0') {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
    }
    Controls_TControl_Perform((int)param_1,0xb007,0,param_2);
    piVar1 = (int *)param_1[0x99];
    if ((piVar1 != (int *)0x0) && (piVar1 != param_2)) {
      Controls_TControl_Perform((int)piVar1,0xb02a,0,0);
    }
  }
  *in_FS_OFFSET = uStack_20;
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) & 0xffdf;
  return param_2;
}


/* ==== 00448610 TCustomForm.dynamic_ffb5 ==== */

void TCustomForm_dynamic_ffb5(void)

{
  return;
}


/* ==== 00448614 FUN_00448614 ==== */

void FUN_00448614(int *param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  
  if (((int *)param_1[0x82] != (int *)0x0) && (param_1[0x8e] == 0)) {
    param_1 = (int *)param_1[0x82];
  }
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  SetFocus(pHVar1);
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  pHVar2 = GetFocus();
  if (pHVar1 == pHVar2) {
    Controls_TControl_Perform((int)param_1,0xb029,0,0);
  }
  return;
}


/* ==== 00448664 FUN_00448664 ==== */

void FUN_00448664(int *param_1,byte param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  *(byte *)((int)param_1 + 0x216) = param_2;
  if (param_1[0x99] != 0) {
    Controls_TControl_Perform(param_1[0x99],0xb02b,(uint)param_2,0);
    param_3 = extraout_ECX;
  }
  if (param_2 != 0) {
    if ((param_1[0x82] == 0) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
      piVar1 = (int *)FUN_00434df8(param_1,0,CONCAT31((int3)((uint)param_3 >> 8),1),'\0','\x01');
      TForm_SetActiveControl(param_1,piVar1,extraout_ECX_00);
    }
    FUN_00448718((int)param_1,'\x01');
    FUN_00448614(param_1);
  }
  return;
}


/* ==== 004486c8 FUN_004486c8 ==== */

void FUN_004486c8(int param_1,undefined4 param_2)

{
  HANDLE pvVar1;
  
  if ((*(char *)(param_1 + 0x216) != '\0') && (*(int *)(param_1 + 0x208) != 0)) {
    Controls_TControl_Perform(*(int *)(param_1 + 0x208),0xb004,0,param_2);
  }
  if (*(char *)(param_1 + 0x217) == '\x02') {
    pvVar1 = FUN_004473f4(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      pvVar1 = FUN_004473f4(param_1);
      FUN_004486c8((int)pvVar1,param_2);
    }
  }
  return;
}


/* ==== 00448718 FUN_00448718 ==== */

void FUN_00448718(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((((*(byte *)(param_1 + 0x2cc) & 8) == 0) && (*(int *)(DAT_004ac7d4 + 0x38) != 0)) &&
       (*(int *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x230) != 0)) &&
      (param_1 != *(int *)(DAT_004ac7d4 + 0x38))) &&
     ((*(char *)(param_1 + 0x217) == '\x01' ||
      (*(char *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x217) != '\x02')))) {
    iVar2 = 0;
    if ((((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x230) != 0)) &&
       ((*(char *)(*(int *)(param_1 + 0x230) + 0x4c) != '\0' ||
        (*(char *)(param_1 + 0x217) == '\x01')))) {
      iVar2 = *(int *)(param_1 + 0x230);
    }
    iVar1 = *(int *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x230);
    if (param_2 == '\0') {
      FUN_00440f44(iVar1,iVar2);
    }
    else {
      FUN_00440f28(iVar1,iVar2);
    }
  }
  return;
}


/* ==== 004487c0 FUN_004487c0 ==== */

void FUN_004487c0(UINT msg,int *param_2,int *param_3)

{
  undefined4 uVar1;
  HWND hWnd;
  int *piVar2;
  WPARAM wParam;
  LPARAM lParam;
  
  if (param_2 != (int *)0x0) {
    do {
      piVar2 = param_2;
      param_2 = (int *)piVar2[9];
      if (param_2 == (int *)0x0) break;
      uVar1 = System__IsClass(piVar2,(int)&PTR_TWinControl_virtual_000_00442cf0);
    } while ((char)uVar1 == '\0');
    if ((piVar2 != (int *)0x0) && (param_3 != piVar2)) {
      lParam = 0;
      wParam = 0;
      hWnd = (HWND)Controls_TWinControl_GetHandle(piVar2);
      SendMessageA(hWnd,msg,wParam,lParam);
    }
  }
  return;
}


/* ==== 0044880c TCustomForm.dynamic_ffb6 ==== */

void TCustomForm_dynamic_ffb6(int *param_1)

{
  FUN_004487c0(0xb000,(int *)param_1[0x82],param_1);
  if (*(short *)((int)param_1 + 0x272) != 0) {
    (*(code *)param_1[0x9c])(param_1[0x9d],param_1);
  }
  return;
}


/* ==== 0044883c TCustomForm.dynamic_ffb4 ==== */

void TCustomForm_dynamic_ffb4(int *param_1)

{
  FUN_004487c0(0xb001,(int *)param_1[0x82],param_1);
  if (*(short *)((int)param_1 + 0x28a) != 0) {
    (*(code *)param_1[0xa2])(param_1[0xa3],param_1);
  }
  return;
}


/* ==== 0044886c TCustomForm.dynamic_ffb0 ==== */

void TCustomForm_dynamic_ffb0(int param_1)

{
  if (*(short *)(param_1 + 0x2a2) != 0) {
    (**(code **)(param_1 + 0x2a0))(*(undefined4 *)(param_1 + 0x2a4),param_1);
  }
  return;
}


/* ==== 0044888c FUN_0044888c ==== */

void FUN_0044888c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041f428(*(int *)(param_1 + 0x228));
  if (iVar1 == 0) {
    FUN_0044cc78(DAT_004ac7d4);
  }
  return;
}


/* ==== 004488a8 TCustomForm.virtual_0a8 ==== */

void TCustomForm_virtual_0a8(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4488c0;
  FUN_0041912c(param_1[0x88]);
  puStack_14 = &LAB_00448955;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)0x4488de;
  puStack_10 = &stack0xfffffffc;
  FUN_00419558((int *)param_1[0x88],param_2);
  puStack_20 = &LAB_00448932;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_1[0x8e] == 0) {
    puStack_1c = &stack0xfffffffc;
    System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  }
  else {
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*(int *)param_1[0x8e] + 0x28))();
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00448939;
  puStack_20 = (undefined1 *)0x448931;
  FUN_00419558((int *)param_1[0x88],0);
  return;
}


/* ==== 00448960 TCustomForm.dynamic_ffd6 ==== */

undefined4 TCustomForm_dynamic_ffd6(int *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  undefined3 uVar4;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar5;
  int *piVar6;
  undefined1 local_1b;
  undefined4 i_val;
  
  local_1b = 0;
  piVar1 = FUN_004473f4((int)param_1);
  if (piVar1 != (int *)0x0) {
    local_1b = System__CallDynaInst
                         (piVar1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),extraout_ECX);
  }
  piVar2 = (int *)FUN_00447428((int)param_1);
  uVar3 = extraout_ECX_00;
  uVar5 = extraout_EDX_00;
  if (-1 < (int)piVar2 + -1) {
    i_val = 0;
    piVar6 = piVar2;
    do {
      uVar4 = (undefined3)((uint)piVar2 >> 8);
      if ((param_2 & local_1b) != 0) goto LAB_004489fe;
      piVar2 = (int *)FUN_00447474((int)param_1,i_val);
      uVar3 = extraout_ECX_01;
      uVar5 = extraout_EDX_01;
      if (piVar2 != piVar1) {
        uVar3 = System__CallDynaInst
                          (piVar2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),param_2),
                           extraout_ECX_01);
        local_1b = (byte)uVar3 | local_1b;
        piVar2 = (int *)CONCAT31((int3)((uint)uVar3 >> 8),local_1b);
        uVar3 = extraout_ECX_02;
        uVar5 = extraout_EDX_02;
      }
      i_val = i_val + 1;
      piVar6 = (int *)((int)piVar6 + -1);
    } while (piVar6 != (int *)0x0);
  }
  uVar4 = (undefined3)((uint)piVar2 >> 8);
  if ((param_2 & local_1b) == 0) {
    local_1b = TWinControl_dynamic_ffd6(param_1,CONCAT31((int3)((uint)uVar5 >> 8),param_2),uVar3);
    uVar4 = extraout_var;
  }
LAB_004489fe:
  return CONCAT31(uVar4,local_1b);
}


/* ==== 00448a0c TCustomForm.WMPaint ==== */

void TCustomForm_WMPaint(int *param_1,int param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  HDC hDC;
  HICON hIcon;
  tagPAINTSTRUCT *ptVar3;
  tagPAINTSTRUCT tStack_48;
  
  ptVar3 = &tStack_48;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  BVar2 = IsIconic(pHVar1);
  if (BVar2 == 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 0x100;
    TWinControl_WMPaint(param_1,param_2);
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfeff;
  }
  else {
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    hDC = BeginPaint(pHVar1,ptVar3);
    ptVar3 = &tStack_48;
    hIcon = (HICON)FUN_0044888c((int)param_1);
    DrawIcon(hDC,0,0,hIcon);
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    EndPaint(pHVar1,ptVar3);
  }
  return;
}


/* ==== 00448a8c TCustomForm.WMIconEraseBkgnd ==== */

void TCustomForm_WMIconEraseBkgnd(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT local_18;
  
  if (*(char *)((int)param_1 + 0x217) == '\x01') {
    if ((*(char *)((int)param_1 + 0x217) == '\x01') && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
      hbr = (HBRUSH)FUN_00418a18(*(int *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x130));
      (**(code **)(*param_1 + 0x40))(param_1,&local_18);
      FillRect(*(HDC *)(param_2 + 4),&local_18,hbr);
    }
    else {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
    }
  }
  return;
}


/* ==== 00448aec TCustomForm.WMEraseBkgnd ==== */

void TCustomForm_WMEraseBkgnd(int *param_1,undefined4 *param_2)

{
  HWND hWnd;
  BOOL BVar1;
  
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  BVar1 = IsIconic(hWnd);
  if (BVar1 == 0) {
    TWinControl_WMEraseBkgnd(param_1,(int)param_2);
    return;
  }
  *param_2 = 0x27;
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00448b24 TCustomForm.WMQueryDragIcon ==== */

void TCustomForm_WMQueryDragIcon(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0044888c(param_1);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}


/* ==== 00448b38 FUN_00448b38 ==== */

void FUN_00448b38(void)

{
  HWND hWnd;
  HMENU hMenu;
  int in_stack_00000004;
  BOOL bRevert;
  
  if (((*(char *)(*(int *)(in_stack_00000004 + -4) + 0x211) != '\0') &&
      ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x210) & 1) != 0)) &&
     (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x217) != '\x01')) {
    bRevert = 0;
    hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(in_stack_00000004 + -4));
    hMenu = GetSystemMenu(hWnd,bRevert);
    if (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x211) == '\x03') {
      DeleteMenu(hMenu,0xf130,0);
      DeleteMenu(hMenu,7,0x400);
      DeleteMenu(hMenu,5,0x400);
      DeleteMenu(hMenu,0xf030,0);
      DeleteMenu(hMenu,0xf020,0);
      DeleteMenu(hMenu,0xf000,0);
      DeleteMenu(hMenu,0xf120,0);
    }
    else {
      if ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x210) & 2) == 0) {
        EnableMenuItem(hMenu,0xf020,1);
      }
      if ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x210) & 4) == 0) {
        EnableMenuItem(hMenu,0xf030,1);
      }
    }
  }
  return;
}


/* ==== 00448c34 TCustomForm.WMNCCreate ==== */

void TCustomForm_WMNCCreate(HWND wnd)

{
  HMENU unaff_EBP;
  
  (**(code **)(wnd->unused + -0x10))();
  TForm_SetMenu(wnd,unaff_EBP);
  if ((wnd[8].unused & 0x10) == 0) {
    FUN_00448b38();
  }
  return;
}


/* ==== 00448c68 TCustomForm.WMNCLButtonDown ==== */

void TCustomForm_WMNCLButtonDown(int *param_1,int param_2)

{
  byte bVar1;
  HWND pHVar2;
  BOOL BVar3;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  WPARAM wParam;
  UINT UVar4;
  LPARAM lParam;
  
  if (((*(int *)(param_2 + 4) == 2) && (*(char *)((int)param_1 + 0x8b) == '\x01')) &&
     ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
    BVar3 = IsIconic(pHVar2);
    if (BVar3 == 0) {
      UVar4 = 7;
      cy = 0;
      cx = 0;
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,X,Y,cx,cy,UVar4);
      lParam = *(LPARAM *)(param_2 + 8);
      wParam = *(WPARAM *)(param_2 + 4);
      UVar4 = 0xa2;
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      PostMessageA(pHVar2,UVar4,wParam,lParam);
      if (*(char *)((int)param_1 + 0x216) == '\0') {
        return;
      }
      bVar1 = (**(code **)(*param_1 + 0x50))();
      FUN_0042edc0(param_1,bVar1 ^ 1,-1);
      return;
    }
  }
  TControl_WMNCLButtonDown(param_1,param_2);
  return;
}


/* ==== 00448cf8 TCustomForm.WMDestroy ==== */

void TCustomForm_WMDestroy(int *param_1)

{
  HWND pHVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  HMENU hMenu;
  
  if (*PTR_DAT_004ab7d4 != '\0') {
    lParam = 0;
    wParam = 1;
    Msg = 0x80;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    SendMessageA(pHVar1,Msg,wParam,lParam);
  }
  if ((param_1[0x8c] != 0) && (*(char *)((int)param_1 + 0x217) != '\x01')) {
    hMenu = (HMENU)0x0;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetMenu(pHVar1,hMenu);
    FUN_00440964((int *)param_1[0x8c],0);
  }
  TWinControl_WMDestroy(param_1);
  return;
}


/* ==== 00448d58 TCustomForm.WMCommand ==== */

void TCustomForm_WMCommand(int *param_1,int *param_2)

{
  bool bVar1;
  
  if (((param_2[2] == 0) && (param_1[0x8c] != 0)) && (bVar1 = FUN_0044042c(param_1[0x8c]), bVar1)) {
    return;
  }
  TWinControl_WMCommand(param_1,param_2);
  return;
}


/* ==== 00448d8c TCustomForm.WMInitMenuPopup ==== */

void TCustomForm_WMInitMenuPopup(int param_1)

{
  if (*(int **)(param_1 + 0x230) != (int *)0x0) {
    FUN_00440448(*(int **)(param_1 + 0x230));
  }
  return;
}


/* ==== 00448da4 TCustomForm.WMMenuChar ==== */

void TCustomForm_WMMenuChar(int *param_1,int param_2)

{
  if (param_1[0x8c] == 0) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  else {
    FUN_00440bd8(param_1[0x8c],param_2);
    if (*(int *)(param_2 + 0xc) == 0) {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
      return;
    }
  }
  return;
}


/* ==== 00448ddc TCustomForm.WMMenuSelect ==== */

void TCustomForm_WMMenuSelect(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_1c = &LAB_00448e77;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(int *)(param_1 + 0x230) != 0) {
    iVar2 = 0;
    if ((*(short *)(param_2 + 6) != -1) || (puVar1 = &stack0xfffffffc, *(short *)(param_2 + 4) != 0)
       ) {
      puVar1 = &stack0xfffffffc;
      if ((*(byte *)(param_2 + 6) & 0x10) != 0) {
        GetSubMenu(*(HMENU *)(param_2 + 8),(uint)*(ushort *)(param_2 + 4));
        puVar1 = puStack_18;
      }
      puStack_18 = puVar1;
      iVar2 = FUN_0044038c(*(int *)(param_1 + 0x230));
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    if (iVar2 == 0) {
      FUN_0044dae8(DAT_004ac7d4,(uint *)0x0);
    }
    else {
      FUN_0042bb90(*(undefined4 **)(iVar2 + 0x4c),(int *)&local_8);
      FUN_0044dae8(DAT_004ac7d4,local_8);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00448e7e;
  puStack_1c = (undefined1 *)0x448e76;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00448e84 TCustomForm.WMActivate ==== */

void TCustomForm_WMActivate(int *param_1,int param_2,undefined4 param_3)

{
  if ((*(char *)((int)param_1 + 0x217) != '\x02') || ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
    FUN_00448664(param_1,*(short *)(param_2 + 4) != 0,param_3);
  }
  return;
}


/* ==== 00448ea4 TCustomForm.virtual_0bc ==== */

void TCustomForm_virtual_0bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    *(char *)((int)param_1 + 0x213) = (char)param_2;
  }
  if ((char)param_2 != '\x01') {
    System__CallDynaInst(param_1,param_2,param_3);
  }
  if (param_1[0x93] != 0) {
    (**(code **)(*(int *)param_1[0x93] + 0x10))();
  }
  return;
}


/* ==== 00448edc TCustomForm.WMClose ==== */

void TCustomForm_WMClose(int *param_1,undefined4 param_2,int param_3)

{
  FUN_00449ac0(param_1,param_2,param_3);
  return;
}


/* ==== 00448ee4 TCustomForm.WMQueryEndSession ==== */

void TCustomForm_WMQueryEndSession(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xd0))();
  if (cVar1 != '\0') {
    cVar1 = FUN_0040c77c();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_00448f07;
    }
  }
  uVar2 = 0;
LAB_00448f07:
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  return;
}


/* ==== 00448f10 TCustomForm.CMAppSysCommand ==== */

void TCustomForm_CMAppSysCommand(int param_1,int param_2)

{
  int iVar1;
  LRESULT LVar2;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (((((*(byte *)(param_1 + 0x20) & 0x10) != 0) || (*(char *)(param_1 + 0x217) == '\x01')) ||
      (*(int *)(param_1 + 0x230) == 0)) || (*(char *)(*(int *)(param_1 + 0x230) + 0x4c) != '\0')) {
    iVar1 = *(int *)(param_2 + 8);
    FUN_004486c8(param_1,0);
    LVar2 = FUN_0042b968(0xb017,*(WPARAM *)(iVar1 + 4),(uint)*(ushort *)(iVar1 + 8));
    if (LVar2 != 0) {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}


/* ==== 00448f68 TCustomForm.WMSysCommand ==== */

void TCustomForm_WMSysCommand(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *piVar1;
  
  if (((param_2[1] & 0xfff0U) == 0xf020) && (param_1 == *(int **)(DAT_004ac7d4 + 0x38))) {
    FUN_0044c5dc(DAT_004ac7d4,param_2);
    param_3 = extraout_ECX;
    piVar1 = extraout_EDX;
  }
  else if (((param_2[1] & 0xfff0U) != 0xf010) ||
          ((((*(byte *)(param_1 + 8) & 0x10) != 0 || (*(char *)((int)param_1 + 0x4b) == '\0')) ||
           (piVar1 = param_2, *(char *)((int)param_1 + 0x213) == '\x01')))) {
    TWinControl_WMSysCommand(param_1,(int)param_2,param_3);
    param_3 = extraout_ECX_00;
    piVar1 = extraout_EDX_00;
  }
  if ((((param_2[1] & 0xfff0U) == 0xf020) || ((param_2[1] & 0xfff0U) == 0xf120)) &&
     (((*(byte *)(param_1 + 8) & 0x10) == 0 && (*(char *)((int)param_1 + 0x4b) != '\0')))) {
    System__CallDynaInst(param_1,piVar1,param_3);
  }
  return;
}


/* ==== 00448ff4 TCustomForm.WMShowWindow ==== */

void TCustomForm_WMShowWindow(int *param_1,int param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  int nCmdShow;
  
  if (*(int *)(param_2 + 8) == 1) {
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
    BVar1 = IsIconic(pHVar2);
    if (BVar1 == 0) {
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      BVar1 = IsZoomed(pHVar2);
      if (BVar1 == 0) {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x85) = 3;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x85) = 2;
    }
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 8) == 3) {
    if ((char)param_1[0x85] != '\0') {
      nCmdShow = *(int *)(&DAT_004aa9cc + (uint)*(byte *)(param_1 + 0x85) * 4);
      pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
      ShowWindow(pHVar2,nCmdShow);
      *(undefined1 *)(param_1 + 0x85) = 0;
      return;
    }
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 0044908c TCustomForm.WMMDIActivate ==== */

void TCustomForm_WMMDIActivate(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  bool bVar2;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (*(char *)((int)param_1 + 0x217) == '\x01') {
    iVar1 = Controls_TWinControl_GetHandle(param_1);
    bVar2 = iVar1 == *(int *)(param_2 + 8);
    FUN_00448664(param_1,bVar2,extraout_ECX);
    if ((bVar2) && ((*(byte *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x44) & 4) != 0)) {
      System__CallDynaInst
                (*(int **)(DAT_004ac7d4 + 0x38),CONCAT31((int3)((uint)extraout_EDX >> 8),1),
                 extraout_ECX_00);
    }
  }
  return;
}


/* ==== 004490e4 TCustomForm.WMNextDlgCtl ==== */

void TCustomForm_WMNextDlgCtl(int *param_1,int param_2)

{
  if (*(short *)(param_2 + 8) != 0) {
    SetFocus(*(HWND *)(param_2 + 4));
    return;
  }
  FUN_00434f04(param_1,param_1[0x82],(uint)(*(int *)(param_2 + 4) == 0),1);
  return;
}


/* ==== 00449110 TCustomForm.WMEnterMenuLoop ==== */

void TCustomForm_WMEnterMenuLoop(int *param_1,undefined4 param_2)

{
  FUN_004486c8((int)param_1,0);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 0044912c FUN_0044912c ==== */

int FUN_0044912c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_004403bc(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 8),'\x01');
    if (iVar1 == 0) {
      iVar1 = FUN_004403bc(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 0xc),'\0');
    }
  }
  return iVar1;
}


/* ==== 0044916c TCustomForm.WMHelp ==== */

void TCustomForm_WMHelp(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  ULONG_PTR UVar2;
  undefined4 extraout_EDX;
  undefined1 *puVar3;
  int local_1c [2];
  int local_14 [2];
  ULONG_PTR local_c;
  int local_8;
  
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if (*(int *)(*(int *)(param_2 + 8) + 4) == 1) {
      for (piVar1 = FUN_0042b94c(*(HWND *)(*(int *)(param_2 + 8) + 0xc));
          (piVar1 != (int *)0x0 && (piVar1[0x54] == 0)); piVar1 = (int *)piVar1[9]) {
      }
      if (piVar1 == (int *)0x0) {
        return;
      }
      UVar2 = piVar1[0x54];
      Classes_Point(0,0,local_1c);
      FUN_0042e2ac(piVar1,local_1c,local_14);
      local_c = FUN_004070fc((undefined2 *)local_14);
    }
    else {
      UVar2 = FUN_0044912c((int *)param_1[0x8c],param_2,param_3,(int)&stack0xfffffffc);
      if (UVar2 == 0) {
        UVar2 = FUN_0044912c((int *)param_1[0x1b],extraout_EDX,puVar3,(int)&stack0xfffffffc);
      }
      Classes_Point(0,0,local_1c);
      FUN_0042e2ac(param_1,local_1c,local_14);
      local_c = FUN_004070fc((undefined2 *)local_14);
    }
    if ((*(byte *)(param_1 + 0x84) & 8) == 0) {
      FUN_0044d7f0(DAT_004ac7d4,UVar2);
    }
    else {
      FUN_0044d7fc(DAT_004ac7d4,0xd,local_c);
      FUN_0044d7fc(DAT_004ac7d4,8,UVar2);
    }
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00449270 TCustomForm.WMGetMinMaxInfo ==== */

void TCustomForm_WMGetMinMaxInfo(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 8) & 2) == 0) && (*(char *)((int)param_1 + 0x212) != '\0')) {
    iVar1 = *(int *)(param_2 + 8);
    iVar2 = param_1[0x19];
    if (*(int *)(iVar2 + 0x14) != 0) {
      *(int *)(iVar1 + 0x18) = *(int *)(iVar2 + 0x14);
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar2 + 0x10);
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar2 + 0xc);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      *(int *)(iVar1 + 0x24) = *(int *)(iVar2 + 8);
    }
    (**(code **)(*param_1 + 0x38))(param_1,iVar1 + 0x18,iVar1 + 0x1c,iVar1 + 0x24,iVar1 + 0x20);
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 004492e4 TCustomForm.WMWindowPosChanging ==== */

void TCustomForm_WMWindowPosChanging(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  iVar1 = *(int *)(param_2 + 8);
  if ((((*(ushort *)(param_1 + 8) & 10) == 0) && ((*(byte *)(iVar1 + 0x18) & 1) == 0)) &&
     ((*(int *)(iVar1 + 0x10) != param_1[0xe] || (*(int *)(iVar1 + 0x14) != param_1[0xf])))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x212) = uVar2;
  puStack_18 = &LAB_00449367;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TWinControl_WMWindowPosChanging(param_1,param_2);
  *in_FS_OFFSET = uStack_1c;
  *(undefined1 *)((int)param_1 + 0x212) = 0;
  return;
}


/* ==== 0044937c TCustomForm.CMActivate ==== */

void TCustomForm_CMActivate(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    System__CallDynaInst(param_1,param_2,param_3);
    return;
  }
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 0x20;
  return;
}


/* ==== 0044939c TCustomForm.CMDeactivate ==== */

void TCustomForm_CMDeactivate(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    System__CallDynaInst(param_1,param_2,param_3);
    return;
  }
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xdf;
  return;
}


/* ==== 004493bc TCustomForm.CMDialogKey ==== */

void TCustomForm_CMDialogKey(int *param_1,int param_2)

{
  int iVar1;
  SHORT SVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  byte bVar4;
  
  SVar2 = GetKeyState(0x12);
  if (-1 < SVar2) {
    if (*(short *)(param_2 + 4) == 9) {
      SVar2 = GetKeyState(0x11);
      if (-1 < SVar2) {
        bVar4 = 1;
        SVar2 = GetKeyState(0x10);
        FUN_00434f04(param_1,param_1[0x82],CONCAT31((int3)((uint)extraout_ECX_00 >> 8),-1 < SVar2),
                     bVar4);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
    else if ((ushort)(*(short *)(param_2 + 4) - 0x25U) < 4) {
      iVar1 = param_1[0x82];
      if (iVar1 == 0) {
        return;
      }
      if ((*(short *)(param_2 + 4) == 0x27) || (*(short *)(param_2 + 4) == 0x28)) {
        uVar3 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
      }
      else {
        uVar3 = 0;
      }
      FUN_00434f04(*(int **)(iVar1 + 0x24),iVar1,uVar3,0);
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
  }
  TWinControl_CMDialogKey((int)param_1,param_2);
  return;
}


/* ==== 00449458 TCustomForm.CMShowingChanged ==== */

void TCustomForm_CMShowingChanged(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  WPARAM WVar5;
  HWND pHVar6;
  uint param;
  BOOL BVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int y_val;
  HWND hWnd;
  int cx_val;
  undefined4 *in_FS_OFFSET;
  HWND pHVar8;
  UINT UVar9;
  LPARAM lParam;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  int *local_8;
  int cy_val;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_20 = &LAB_004499c5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) &&
     (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 0xb3) & 4) != 0)) {
    puStack_28 = (undefined1 *)0x449499;
    System_LoadResString((undefined4 *)PTR_PTR_004aba0c,(int *)&local_c);
    puStack_28 = (undefined1 *)0x4494a8;
    piVar2 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_c);
    puStack_28 = (undefined1 *)0x4494ad;
    System__RaiseExcept(piVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  puStack_28 = (undefined1 *)0x4494b7;
  FUN_0044dbd8(DAT_004ac7d4);
  *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 4;
  puStack_2c = &LAB_004499a8;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if ((*(byte *)(local_8 + 8) & 0x10) == 0) {
    if ((char)local_8[0x5a] == '\0') {
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffc4;
      puStack_28 = &stack0xfffffffc;
      System__CallDynaInst(local_8,0,extraout_ECX);
      *in_FS_OFFSET = uVar4;
      if (*(int **)(DAT_004ac7d8 + 0x60) == local_8) {
        FUN_00448718((int)local_8,'\0');
      }
      if (*(char *)((int)local_8 + 0x217) == '\x01') {
        FUN_00431dbc(local_8);
      }
      else if ((*(byte *)(local_8 + 0xb3) & 8) == 0) {
        hWnd = (HWND)0x0;
        pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
        pHVar8 = GetActiveWindow();
        if (pHVar6 == pHVar8) {
          pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
          BVar7 = IsIconic(pHVar6);
          if (BVar7 == 0) {
            iVar3 = Controls_TWinControl_GetHandle(local_8);
            hWnd = (HWND)FUN_0044442c(iVar3);
          }
        }
        if (hWnd == (HWND)0x0) {
          iVar3 = 0;
          pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
          ShowWindow(pHVar6,iVar3);
        }
        else {
          UVar9 = 0x97;
          cy_val = 0;
          cx_val = 0;
          y_val = 0;
          iVar3 = 0;
          pHVar8 = (HWND)0x0;
          pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
          SetWindowPos(pHVar6,pHVar8,iVar3,y_val,cx_val,cy_val,UVar9);
          SetActiveWindow(hWnd);
        }
      }
      else {
        UVar9 = 0x97;
        cy_val = 0;
        cx_val = 0;
        y_val = 0;
        iVar3 = 0;
        pHVar8 = (HWND)0x0;
        pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
        SetWindowPos(pHVar6,pHVar8,iVar3,y_val,cx_val,cy_val,UVar9);
      }
    }
    else {
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffc4;
      puStack_28 = &stack0xfffffffc;
      System__CallDynaInst(local_8,0,extraout_ECX);
      *in_FS_OFFSET = uVar4;
      if (((char)local_8[0x86] == '\x04') ||
         (((char)local_8[0x86] == '\x06' && (*(char *)((int)local_8 + 0x217) == '\x01')))) {
        if (*(char *)((int)local_8 + 0x217) == '\x01') {
          iVar3 = TForm_GetClientWidth(*(int **)(DAT_004ac7d4 + 0x38));
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = TForm_GetClientHeight(*(int **)(DAT_004ac7d4 + 0x38));
          cx_val = iVar3 - local_8[0xf] >> 1;
          if (cx_val < 0) {
            cx_val = cx_val + (uint)((iVar3 - local_8[0xf] & 1U) != 0);
          }
        }
        else {
          iVar3 = FUN_0044b100();
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044b0f4();
          cx_val = iVar3 - local_8[0xf] >> 1;
          if (cx_val < 0) {
            cx_val = cx_val + (uint)((iVar3 - local_8[0xf] & 1U) != 0);
          }
        }
        if (y_val < 0) {
          y_val = 0;
        }
        if (cx_val < 0) {
          cx_val = 0;
        }
        (**(code **)(*local_8 + 0x7c))(local_8,y_val,cx_val);
        if (*(char *)((int)local_8 + 0x47) != '\0') {
          FUN_00447a14(local_8);
        }
      }
      else if ((byte)((char)local_8[0x86] - 6U) < 2) {
        iVar3 = *(int *)(DAT_004ac7d4 + 0x38);
        if ((char)local_8[0x86] == '\a') {
          uVar4 = System__IsClass((int *)local_8[1],(int)&PTR_TWinControl_virtual_000_00442cf0);
          if ((char)uVar4 != '\0') {
            iVar3 = local_8[1];
          }
        }
        if (iVar3 == 0) {
          iVar3 = FUN_0044b100();
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044b0f4();
          cx_val = iVar3 - local_8[0xf] >> 1;
          if (cx_val < 0) {
            cx_val = cx_val + (uint)((iVar3 - local_8[0xf] & 1U) != 0);
          }
        }
        else {
          param = *(int *)(iVar3 + 0x38) - local_8[0xe];
          y_val = (int)param >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((param & 1) != 0);
          }
          y_val = y_val + *(int *)(iVar3 + 0x30);
          param = *(int *)(iVar3 + 0x3c) - local_8[0xf];
          cx_val = (int)param >> 1;
          if (cx_val < 0) {
            cx_val = cx_val + (uint)((param & 1) != 0);
          }
          cx_val = cx_val + *(int *)(iVar3 + 0x34);
        }
        if (y_val < 0) {
          y_val = 0;
        }
        if (cx_val < 0) {
          cx_val = 0;
        }
        (**(code **)(*local_8 + 0x7c))(local_8,y_val,cx_val);
        if (*(char *)((int)local_8 + 0x47) != '\0') {
          FUN_00447a14(local_8);
        }
      }
      else if ((char)local_8[0x86] == '\x05') {
        if (*(char *)((int)local_8 + 0x217) == '\x01') {
          iVar3 = TForm_GetClientWidth(*(int **)(DAT_004ac7d4 + 0x38));
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = TForm_GetClientHeight(*(int **)(DAT_004ac7d4 + 0x38));
          cx_val = iVar3 - local_8[0xf] >> 1;
          if (cx_val < 0) {
            cx_val = cx_val + (uint)((iVar3 - local_8[0xf] & 1U) != 0);
          }
        }
        else {
          iVar3 = FUN_0044b130();
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044b124();
          cx_val = iVar3 - local_8[0xf] >> 1;
          if (cx_val < 0) {
            cx_val = cx_val + (uint)((iVar3 - local_8[0xf] & 1U) != 0);
          }
        }
        if (y_val < 0) {
          y_val = 0;
        }
        if (cx_val < 0) {
          cx_val = 0;
        }
        (**(code **)(*local_8 + 0x7c))(local_8,y_val,cx_val);
      }
      *(undefined1 *)(local_8 + 0x86) = 0;
      if (*(char *)((int)local_8 + 0x217) == '\x01') {
        if (*(char *)((int)local_8 + 0x213) == '\x02') {
          lParam = 0;
          WVar5 = Controls_TWinControl_GetHandle(local_8);
          SendMessageA(*(HWND *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c),0x223,WVar5,lParam);
          iVar3 = 3;
          pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
          ShowWindow(pHVar6,iVar3);
        }
        else {
          iVar3 = *(int *)(&DAT_004aa9dc + (uint)*(byte *)((int)local_8 + 0x213) * 4);
          pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
          ShowWindow(pHVar6,iVar3);
          param = local_8[0xe] | local_8[0xf] << 0x10;
          WVar5 = 0;
          UVar9 = 5;
          pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
          CallWindowProcA((WNDPROC)&DAT_00406bc8,pHVar6,UVar9,WVar5,param);
          FUN_0042e978(local_8,extraout_EDX,extraout_ECX_00);
        }
        SendMessageA(*(HWND *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c),0x234,0,0);
      }
      else {
        iVar3 = *(int *)(&DAT_004aa9dc + (uint)*(byte *)((int)local_8 + 0x213) * 4);
        pHVar6 = (HWND)Controls_TWinControl_GetHandle(local_8);
        ShowWindow(pHVar6,iVar3);
      }
    }
  }
  *in_FS_OFFSET = uStack_30;
  *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) & 0xfb;
  return;
}


/* ==== 004499d4 TCustomForm.CMIconChanged ==== */

void TCustomForm_CMIconChanged(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041f428(param_1[0x8a]);
  if (iVar1 == 0) {
    FUN_004467fc(param_1);
  }
  return;
}


/* ==== 004499f4 TCustomForm.CMRelease ==== */

void TCustomForm_CMRelease(int *param_1)

{
  System_TObject_Free(param_1);
  return;
}


/* ==== 004499fc TCustomForm.CMTextChanged ==== */

void TCustomForm_CMTextChanged(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  if (((*(char *)((int)param_1 + 0x217) == '\x01') && (*(int *)(DAT_004ac7d4 + 0x38) != 0)) &&
     (*(int *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c) != 0)) {
    SendMessageA(*(HWND *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c),0x234,0,0);
  }
  return;
}


/* ==== 00449a4c TCustomForm.CMUIActivate ==== */

void TCustomForm_CMUIActivate(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 00449a54 TCustomForm.CMParentFontChanged ==== */

void TCustomForm_CMParentFontChanged(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      puStack_10 = (undefined1 *)0x449a80;
      piVar1 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',param_3);
      puStack_14 = &LAB_00449ab2;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      (**(code **)(**(int **)(param_1 + 0x58) + 8))(*(int **)(param_1 + 0x58),piVar1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x449ab9;
      puStack_14 = (undefined1 *)0x449ab1;
      System_TObject_Free(piVar1);
      return;
    }
    puStack_10 = (undefined1 *)0x449a72;
    (**(code **)(**(int **)(param_1 + 0x58) + 8))
              (*(int **)(param_1 + 0x58),*(undefined4 *)(param_2 + 8));
  }
  return;
}


/* ==== 00449ac0 FUN_00449ac0 ==== */

void FUN_00449ac0(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iStack_c;
  
  if ((*(byte *)(param_1 + 0xb3) & 8) == 0) {
    iStack_c = param_3;
    cVar1 = (**(code **)(*param_1 + 0xd0))();
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x217) == '\x01') {
        if ((*(byte *)(param_1 + 0x84) & 2) == 0) {
          iStack_c = (uint)iStack_c._1_3_ << 8;
        }
        else {
          iStack_c = CONCAT31(iStack_c._1_3_,3);
        }
      }
      else {
        iStack_c = CONCAT31(iStack_c._1_3_,1);
      }
      System__CallDynaInst(param_1,&iStack_c,extraout_ECX);
      if ((char)iStack_c != '\0') {
        if (param_1 == *(int **)(DAT_004ac7d4 + 0x38)) {
          FUN_0044d3f0();
        }
        else if ((char)iStack_c == '\x01') {
          FUN_00449c70(param_1,extraout_EDX,extraout_ECX_00);
        }
        else if ((char)iStack_c == '\x03') {
          TForm_SetWindowState(param_1,1);
        }
        else {
          FUN_00449d0c(param_1);
        }
      }
    }
  }
  else {
    param_1[0x8d] = 2;
  }
  return;
}


/* ==== 00449b64 TCustomForm.virtual_0d0 ==== */

uint TCustomForm_virtual_0d0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int j;
  int i_val;
  uint local_10;
  
  iVar1 = param_1;
  local_10 = param_3;
  if (*(char *)(param_1 + 0x217) == '\x02') {
    local_10 = param_3 & 0xffffff00;
    iVar1 = FUN_00447428(param_1);
    if (-1 < iVar1 + -1) {
      i_val = 0;
      j = iVar1;
      do {
        piVar2 = (int *)FUN_00447474(param_1,i_val);
        iVar1 = (**(code **)(*piVar2 + 0xd0))();
        if ((char)iVar1 == '\0') goto LAB_00449bbf;
        i_val = i_val + 1;
        j = j + -1;
      } while (j != 0);
    }
  }
  local_10 = CONCAT31(local_10._1_3_,1);
  if (*(short *)(param_1 + 0x282) != 0) {
    iVar1 = (**(code **)(param_1 + 0x280))(*(undefined4 *)(param_1 + 0x284),param_1,&local_10);
  }
LAB_00449bbf:
  return CONCAT31((int3)((uint)iVar1 >> 8),(undefined1)local_10);
}


/* ==== 00449bc8 FUN_00449bc8 ==== */

void FUN_00449bc8(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  char local_9;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_00449c47;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_9 = '\0';
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0xd0))();
  if ((cVar1 != '\0') && (local_9 = '\x01', *(short *)((int)local_8 + 0x27a) != 0)) {
    (*(code *)local_8[0x9e])(local_8[0x9f],local_8,&local_9);
  }
  if (local_9 == '\0') {
    local_8[0x8d] = 0;
  }
  else if (local_9 == '\x02') {
    FUN_00449d0c(local_8);
  }
  *in_FS_OFFSET = uStack_24;
  return;
}


/* ==== 00449c70 FUN_00449c70 ==== */

void FUN_00449c70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  TForm_SetVisible(param_1,0,param_3);
  return;
}


/* ==== 00449c78 FUN_00449c78 ==== */

void FUN_00449c78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TForm_SetVisible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  FUN_0042e978(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 00449c90 TCustomForm.virtual_0b0 ==== */

void TCustomForm_virtual_0b0(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00449cfe;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(char *)((int)param_1 + 0x216) != '\0') goto LAB_00449ce8;
  puVar1 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x47) == '\0') {
LAB_00449cc0:
    puStack_10 = puVar1;
    System_LoadResString((undefined4 *)PTR_PTR_004ab978,(int *)&local_8);
    piVar3 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_8);
    System__RaiseExcept(piVar3);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    puVar1 = puStack_10;
    if (cVar2 == '\0') goto LAB_00449cc0;
  }
  FUN_00448614(param_1);
LAB_00449ce8:
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00449d05;
  puStack_14 = (undefined1 *)0x449cfd;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00449d0c FUN_00449d0c ==== */

void FUN_00449d0c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xb021;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  PostMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 00449d28 TCustomForm.virtual_0d8 ==== */

void TCustomForm_virtual_0d8(int *param_1)

{
  char cVar1;
  int *piVar2;
  HWND pHVar3;
  HWND pHVar4;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puVar7;
  UINT UVar8;
  WPARAM WVar9;
  LPARAM LVar10;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 *local_24;
  HWND active_window;
  undefined4 local_1c;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  puStack_34 = &LAB_00449fb8;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_8 = param_1;
  FUN_0042d14c();
  if (*(char *)((int)local_8 + 0x47) == '\0') {
    cVar1 = (**(code **)(*local_8 + 0x4c))();
    if (((cVar1 != '\0') && ((*(byte *)(local_8 + 0xb3) & 8) == 0)) &&
       (*(char *)((int)local_8 + 0x217) != '\x01')) goto LAB_00449d9e;
  }
  System_LoadResString((undefined4 *)PTR_PTR_004ab7f8,(int *)&local_24);
  piVar2 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_24);
  System__RaiseExcept(piVar2);
LAB_00449d9e:
  pHVar3 = GetCapture();
  if (pHVar3 != (HWND)0x0) {
    LVar10 = 0;
    WVar9 = 0;
    UVar8 = 0x1f;
    pHVar3 = GetCapture();
    puStack_4c = (undefined1 *)0x449db8;
    SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  }
  ReleaseCapture();
  *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 8;
  active_window = GetActiveWindow();
  local_14 = DAT_004aa938;
  FUN_0041032c(*(int **)(DAT_004ac7d8 + 0x70),0,*(int *)(DAT_004ac7d8 + 0x6c));
  *(int **)(DAT_004ac7d8 + 0x6c) = local_8;
  local_16 = *(undefined2 *)(DAT_004ac7d8 + 0x38);
  FUN_0044b5d8(DAT_004ac7d8,0);
  local_1c = *(undefined4 *)(DAT_004ac7d8 + 0x3c);
  local_10 = FUN_004442dc(0);
  *in_FS_OFFSET = &stack0xffffffbc;
  FUN_00449c78(local_8,0,extraout_ECX);
  puStack_4c = &LAB_00449ef7;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xb000;
  pHVar3 = (HWND)Controls_TWinControl_GetHandle(local_8);
  SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  uVar6 = 0;
  local_8[0x8d] = 0;
  uVar5 = extraout_ECX_00;
  do {
    FUN_0044d1a8(DAT_004ac7d4,uVar6,uVar5);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX;
    if (*(char *)(DAT_004ac7d4 + 0x8c) == '\0') {
      if (local_8[0x8d] != 0) {
        FUN_00449bc8(local_8);
        uVar5 = extraout_ECX_02;
        uVar6 = extraout_EDX_00;
      }
    }
    else {
      local_8[0x8d] = 2;
    }
    local_c = local_8[0x8d];
  } while (local_c == 0);
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xb001;
  pHVar3 = (HWND)Controls_TWinControl_GetHandle(local_8);
  SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  pHVar3 = (HWND)Controls_TWinControl_GetHandle(local_8);
  pHVar4 = GetActiveWindow();
  if (pHVar3 != pHVar4) {
    active_window = (HWND)0x0;
  }
  *in_FS_OFFSET = uStack_50;
  puStack_4c = (undefined1 *)0x449ef6;
  FUN_00449c70(local_8,uStack_50,puVar7);
  return;
}


/* ==== 00449fc8 FUN_00449fc8 ==== */

void FUN_00449fc8(int param_1)

{
  int i_val;
  int *piVar1;
  undefined4 uVar2;
  int j;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    i_val = Controls_TWinControl_GetControlCount(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)Controls_TWinControl_GetControl(param_1,j);
        if (((*(byte *)((int)piVar1 + 0x41) & 0x80) != 0) && (*(char *)((int)piVar1 + 0x47) != '\0')
           ) {
          (**(code **)(*piVar1 + 0x70))();
        }
        uVar2 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_0042ac0c);
        if ((char)uVar2 != '\0') {
          FUN_00449fc8((int)piVar1);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0044a038 TCustomForm.virtual_0c8 ==== */

void TCustomForm_virtual_0c8(int *param_1)

{
  int i_val;
  int *piVar1;
  int j;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && ((char)param_1[0x5a] != '\0')) {
    (**(code **)(*param_1 + 0x70))();
    if (param_1[0x8c] != 0) {
      i_val = FUN_0043f018(*(int *)(param_1[0x8c] + 0x28));
      if (-1 < i_val + -1) {
        j = 0;
        do {
          piVar1 = (int *)FUN_0043f028(*(int *)(param_1[0x8c] + 0x28),j);
          if (*(char *)((int)piVar1 + 0x32) != '\0') {
            (**(code **)(*piVar1 + 0x3c))();
          }
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    }
    FUN_00449fc8((int)param_1);
  }
  return;
}


/* ==== 0044a0a0 TCustomForm.dynamic_ffd5 ==== */

void TCustomForm_dynamic_ffd5(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_0044bb88(DAT_004ac7d8,param_1);
    return;
  }
  TControl_dynamic_ffd5(param_1);
  return;
}


/* ==== 0044a0bc TCustomForm.WMWinIniChange ==== */

void TCustomForm_WMWinIniChange(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TWinControl_WMWinIniChange((int)param_1,param_2);
  if (*(int *)(param_2 + 4) == 0x2f) {
    System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 0044a0e0 FUN_0044a0e0 ==== */

undefined4 FUN_0044a0e0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     (uVar1 = System__CallDynaInst(param_1,*(undefined4 *)(*(int *)(param_4 + -4) + 8),param_3),
     (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0044a110 FUN_0044a110 ==== */

undefined4 FUN_0044a110(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int i_val;
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int j;
  
  if ((*(char *)(param_1 + 0x168) != '\0') &&
     (i_val = Controls_TWinControl_GetControlCount(param_1), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar1 = (int *)Controls_TWinControl_GetControl(param_1,j);
      if (((*(char *)((int)piVar1 + 0x47) != '\0') &&
          (uVar2 = FUN_0044a0e0(piVar1,extraout_EDX,extraout_ECX,param_4), (char)uVar2 != '\0')) ||
         ((uVar2 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_0042ac0c),
          (char)uVar2 != '\0' &&
          (uVar2 = FUN_0044a110((int)piVar1,extraout_EDX_00,extraout_ECX_00,param_4),
          (char)uVar2 != '\0')))) {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0044a18c TCustomForm.CMActionExecute ==== */

void TCustomForm_CMActionExecute(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && ((char)param_1[0x5a] != '\0')) {
    uVar1 = FUN_0044a0e0((int *)param_1[0x82],param_2,param_3,(int)&stack0xfffffffc);
    if (((char)uVar1 == '\0') &&
       ((uVar1 = FUN_0044a0e0(param_1,extraout_EDX,puVar2,(int)&stack0xfffffffc),
        (char)uVar1 == '\0' &&
        (uVar1 = FUN_0044a110((int)param_1,extraout_EDX_00,puVar3,(int)&stack0xfffffffc),
        (char)uVar1 == '\0')))) {
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


/* ==== 0044a1e0 FUN_0044a1e0 ==== */

undefined4 FUN_0044a1e0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     (uVar1 = System__CallDynaInst(param_1,*(undefined4 *)(*(int *)(param_4 + -4) + 8),param_3),
     (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0044a210 FUN_0044a210 ==== */

undefined4 FUN_0044a210(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int i_val;
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int j;
  
  if ((*(char *)(param_1 + 0x168) != '\0') &&
     (i_val = Controls_TWinControl_GetControlCount(param_1), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar1 = (int *)Controls_TWinControl_GetControl(param_1,j);
      if (((*(char *)((int)piVar1 + 0x47) != '\0') &&
          (uVar2 = FUN_0044a1e0(piVar1,extraout_EDX,extraout_ECX,param_4), (char)uVar2 != '\0')) ||
         ((uVar2 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_0042ac0c),
          (char)uVar2 != '\0' &&
          (uVar2 = FUN_0044a210((int)piVar1,extraout_EDX_00,extraout_ECX_00,param_4),
          (char)uVar2 != '\0')))) {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0044a28c TCustomForm.CMActionUpdate ==== */

void TCustomForm_CMActionUpdate(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && ((char)param_1[0x5a] != '\0')) {
    uVar1 = FUN_0044a1e0((int *)param_1[0x82],param_2,param_3,(int)&stack0xfffffffc);
    if (((char)uVar1 == '\0') &&
       ((uVar1 = FUN_0044a1e0(param_1,extraout_EDX,puVar2,(int)&stack0xfffffffc),
        (char)uVar1 == '\0' &&
        (uVar1 = FUN_0044a210((int)param_1,extraout_EDX_00,puVar3,(int)&stack0xfffffffc),
        (char)uVar1 == '\0')))) {
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


/* ==== 0044a2e0 FUN_0044a2e0 ==== */

undefined4 FUN_0044a2e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int i_val;
  int j;
  int in_stack_00000004;
  
  i_val = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x2c8);
  if ((i_val != 0) && (i_val = *(int *)(i_val + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      iVar1 = Classes_TList_Get(*(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x2c8),j);
      uVar2 = FUN_00439a14(iVar1,*(int *)(in_stack_00000004 + -8));
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0044a334 TCustomForm.dynamic_ffaf ==== */

undefined4 TCustomForm_dynamic_ffaf(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined4 extraout_ECX;
  char local_d;
  undefined4 local_c;
  int local_8;
  
  local_d = '\0';
  local_c = param_2;
  local_8 = param_1;
  if (*(short *)(param_1 + 0x2aa) != 0) {
    param_1 = (**(code **)(param_1 + 0x2a8))(*(undefined4 *)(param_1 + 0x2ac),param_2,&local_d);
    param_3 = extraout_ECX;
  }
  if (local_d == '\0') {
    piVar1 = *(int **)(local_8 + 0x230);
    if ((piVar1 != (int *)0x0) && (piVar1[0xb] != 0)) {
      param_1 = System__CallDynaInst(piVar1,local_c,param_3);
      if ((char)param_1 != '\0') goto LAB_0044a3a2;
    }
    param_1 = FUN_0044a2e0();
    if ((char)param_1 == '\0') {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_0044a3a4;
    }
  }
LAB_0044a3a2:
  uVar3 = (undefined3)((uint)param_1 >> 8);
  uVar2 = 1;
LAB_0044a3a4:
  return CONCAT31(uVar3,uVar2);
}


/* ==== 0044a3b0 TCustomForm.virtual_028 ==== */

undefined4 TCustomForm_virtual_028(void)

{
  char is_equal_guid;
  undefined4 uVar1;
  int in_stack_00000004;
  int *in_stack_0000000c;
  
  is_equal_guid = IsEqualGUID();
  if ((is_equal_guid == '\0') && (is_equal_guid = IsEqualGUID(), is_equal_guid == '\0')) {
    uVar1 = TComponent_virtual_028();
    return uVar1;
  }
  FUN_00405878(in_stack_0000000c,*(int **)(in_stack_00000004 + 0x238));
  return 0;
}


/* ==== 0044a424 TCustomForm.dynamic_ffb7 ==== */

void TCustomForm_dynamic_ffb7(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[0x83] == 0) {
    TWinControl_dynamic_ffb7(param_1,param_2);
  }
  else {
    uVar1 = Controls_TControl_Perform
                      (param_1[0x83],0xb043,*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar1;
  }
  return;
}


/* ==== 0044a45c TCustomDockForm.virtual_02c ==== */

int * TCustomDockForm_virtual_02c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    cVar1 = extraout_DL;
  }
  (**(code **)(*param_1 + 0xcc))(param_1,0);
  TScrollBox_SetAutoScroll((int)param_1,'\0');
  TForm_SetBorderStyle((int)param_1,'\x05');
  TGroupBox_SetDockSite(param_1,'\x01',extraout_ECX);
  TForm_SetFormStyle(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),3),extraout_ECX_00);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}


/* ==== 0044a4c4 TCustomDockForm.dynamic_ffcc ==== */

void TCustomDockForm_dynamic_ffcc(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int i_val;
  undefined4 uVar2;
  undefined *puVar3;
  int j;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_20 = &LAB_0044a59d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_2;
  i_val = FUN_004332a0((int)param_1);
  if (i_val == 1) {
    i_val = FUN_0042e6a8((int)local_8);
    System__LStrFromPCharLen((int *)&local_10,(undefined4 *)0x0,i_val + 1);
    uVar2 = System__LStrLen((int)local_10);
    puVar3 = System__LStrToPChar((undefined *)local_10);
    FUN_0042e6b8((int)local_8,puVar3,uVar2);
    i_val = System__LStrLen((int)local_10);
    if (0 < i_val) {
      j = 1;
      do {
        cVar1 = *(char *)((int)local_10 + j + -1);
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          FUN_00404210((int *)&local_10,j - 1);
          break;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    TGroupBox_SetCaption((int)param_1,local_10);
  }
  TWinControl_dynamic_ffcc(param_1,local_8);
  TGroupBox_SetAlign(local_8,CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    TForm_SetVisible(param_1,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0044a5a4;
  puStack_20 = (undefined1 *)0x44a59c;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 0044a5ac TCustomDockForm.dynamic_ffc3 ==== */

void TCustomDockForm_dynamic_ffc3(int *param_1)

{
  int iVar1;
  
  TWinControl_dynamic_ffc3();
  iVar1 = FUN_004332a0((int)param_1);
  if (iVar1 == 0) {
    FUN_00449d0c(param_1);
  }
  return;
}


/* ==== 0044a5cc TCustomDockForm.virtual_00c ==== */

void TCustomDockForm_virtual_00c(int *param_1)

{
  int i_val;
  int *piVar1;
  int j;
  undefined1 auStack_20 [16];
  
  i_val = Controls_TWinControl_GetControlCount((int)param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      (**(code **)(*param_1 + 0x40))(param_1,auStack_20);
      piVar1 = (int *)Controls_TWinControl_GetControl((int)param_1,j);
      System__CallDynaInst(piVar1,param_1,auStack_20);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  TCustomForm_virtual_00c(param_1);
  return;
}


/* ==== 0044a618 TCustomDockForm.dynamic_ffc1 ==== */

void TCustomDockForm_dynamic_ffc1
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004332a0(param_1);
  *(bool *)param_4 = iVar1 == 0;
  return;
}


/* ==== 0044a644 TCustomDockForm.WMNCHitTest ==== */

void TCustomDockForm_WMNCHitTest(int *param_1,int param_2)

{
  TWinControl_WMNCHitTest(param_1,param_2);
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(int *)(param_2 + 0xc) == 1)) {
    *(undefined4 *)(param_2 + 0xc) = 2;
  }
  return;
}


/* ==== 0044a66c TCustomDockForm.WMNCLButtonDown ==== */

void TCustomDockForm_WMNCLButtonDown(int *param_1,int param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  int x_val;
  int *piVar3;
  HWND hWndInsertAfter;
  int Y;
  int cx;
  int cy;
  WPARAM wParam;
  UINT UVar4;
  LPARAM lParam;
  
  if (((*(int *)(param_2 + 4) == 2) && (*(char *)((int)param_1 + 0x8b) != '\x01')) &&
     ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    BVar2 = IsIconic(pHVar1);
    if ((BVar2 == 0) && (x_val = FUN_004332a0((int)param_1), 0 < x_val)) {
      UVar4 = 7;
      cy = 0;
      cx = 0;
      Y = 0;
      x_val = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SetWindowPos(pHVar1,hWndInsertAfter,x_val,Y,cx,cy,UVar4);
      lParam = *(LPARAM *)(param_2 + 8);
      wParam = *(WPARAM *)(param_2 + 4);
      UVar4 = 0xa2;
      pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
      PostMessageA(pHVar1,UVar4,wParam,lParam);
      if (*(char *)((int)param_1 + 0x216) == '\0') {
        return;
      }
      piVar3 = (int *)FUN_004332b4((int)param_1,0);
      FUN_0042edc0(piVar3,'\x01',-1);
      return;
    }
  }
  TCustomForm_WMNCLButtonDown(param_1,param_2);
  return;
}


/* ==== 0044a704 TCustomDockForm.CMControlListChange ==== */

void TCustomDockForm_CMControlListChange(int param_1,int param_2)

{
  int *piVar1;
  undefined4 auStack_1c [4];
  
  TWinControl_CMControlListChange(param_1);
  if (*(int *)(param_2 + 8) == 0) {
    Controls_TControl_Perform(param_1,0xb039,0,*(undefined4 *)(param_2 + 4));
    piVar1 = *(int **)(param_2 + 4);
    if (param_1 == piVar1[0x24]) {
      FUN_0042e13c((int)piVar1,auStack_1c);
      System__CallDynaInst(piVar1,0xffffffff,auStack_1c);
    }
  }
  return;
}


/* ==== 0044a75c TCustomDockForm.CMDockNotification ==== */

void TCustomDockForm_CMDockNotification(int *param_1,int param_2)

{
  char cVar1;
  int i_val;
  undefined4 uVar2;
  undefined *puVar3;
  int j;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_18 = &LAB_0044a831;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (**(int **)(param_2 + 8) == 0xc) {
    i_val = FUN_0042e6a8(*(int *)(param_2 + 4));
    System__LStrFromPCharLen((int *)&local_c,(undefined4 *)0x0,i_val + 1);
    uVar2 = System__LStrLen((int)local_c);
    puVar3 = System__LStrToPChar((undefined *)local_c);
    FUN_0042e6b8(*(int *)(param_2 + 4),puVar3,uVar2);
    i_val = System__LStrLen((int)local_c);
    if (0 < i_val) {
      j = 1;
      do {
        cVar1 = *(char *)((int)local_c + j + -1);
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          FUN_00404210((int *)&local_c,j - 1);
          break;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    TGroupBox_SetCaption((int)local_8,local_c);
  }
  else if (**(int **)(param_2 + 8) == 0xb00b) {
    TForm_SetVisible(local_8,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)(*(int *)(param_2 + 4) + 0x47)),extraout_ECX);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0044a838;
  puStack_18 = (undefined1 *)0x44a830;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 0044a840 TCustomDockForm.CMUndockClient ==== */

void TCustomDockForm_CMUndockClient(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  TWinControl_CMUndockClient(param_1,param_2);
  TGroupBox_SetAlign(*(int **)(param_2 + 8),0,extraout_ECX);
  return;
}


/* ==== 0044a858 TCustomDockForm.CMVisibleChanged ==== */

void TCustomDockForm_CMVisibleChanged(int *param_1)

{
  int i_val;
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int j;
  
  TWinControl_CMVisibleChanged(param_1);
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
    i_val = FUN_004332a0((int)param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_004332b4((int)param_1,j);
        TGroupBox_SetVisible
                  (piVar1,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                   *(undefined1 *)((int)param_1 + 0x47)),extraout_ECX);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0044a894 TDataModule.virtual_02c ==== */

void TDataModule_virtual_02c(int *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  byte **ppbVar4;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte *local_118;
  byte local_114 [256];
  byte *local_14;
  undefined1 local_10;
  undefined1 local_9;
  int *local_8;
  
  local_118 = (byte *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_130 = (undefined1 *)0x44a8b2;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_fffffed4,
                                         in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_134 = &LAB_0044a9b0;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_13c = (undefined1 *)0x44a8d4;
  puStack_130 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  puStack_140 = &LAB_0044a990;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  puStack_13c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x38))(local_8,0,param_3);
  puVar2 = (undefined1 *)FUN_00402ee0(local_8);
  if ((puVar2 != &LAB_00443e30) && ((*(byte *)(local_8 + 8) & 0x10) == 0)) {
    cVar1 = FUN_00410020(local_8,&LAB_00443e30);
    if (cVar1 == '\0') {
      System_TObject_ClassName(*local_8,local_114);
      local_14 = local_114;
      local_10 = 4;
      ppbVar4 = &local_14;
      uVar3 = 0;
      System_LoadResString((undefined4 *)PTR_PTR_004ab7f0,(int *)&local_118);
      uVar3 = SysUtils_Exception_CreateFmt((int)&DAT_0040e7e8,'\x01',local_118,uVar3,ppbVar4);
      System__RaiseExcept(uVar3);
    }
    if ((char)local_8[0x12] != '\0') {
      (**(code **)(*local_8 + 0x30))();
    }
  }
  *in_FS_OFFSET = 0;
  puStack_140 = &LAB_0044a997;
  uStack_144 = 0x44a98f;
  FUN_0040c944(*(int *)PTR_DAT_004ab9ec);
  return;
}


/* ==== 0044a9d8 TDataModule.AfterConstruction ==== */

void TDataModule_AfterConstruction(int *param_1)

{
  if ((char)param_1[0x12] == '\0') {
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 0044a9e4 TDataModule.virtual_038 ==== */

int * TDataModule_virtual_038(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  FUN_0044b270(DAT_004ac7d8,(int)param_1);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0044aa2c TDataModule.BeforeDestruction ==== */

void TDataModule_BeforeDestruction(int *param_1)

{
  FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  FUN_0041581c((int)param_1);
  FUN_0041316c((int)param_1,(char *)0x0);
  if ((char)param_1[0x12] == '\0') {
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}


/* ==== 0044aa5c TDataModule.Destroy ==== */

void TDataModule_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x44aa67;
  local_8 = System__BeforeDestruction(param_1,param_2);
  local_9 = extraout_DL;
  if ((*(byte *)(local_8 + 8) & 8) == 0) {
    puStack_10 = (undefined1 *)0x44aa82;
    FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  }
  puStack_14 = &LAB_0044aad6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if ((char)local_8[0x12] != '\0') {
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x34))();
  }
  FUN_0044b27c(DAT_004ac7d8,(int)local_8);
  TComponent_Destroy(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0044aadd;
  puStack_14 = (undefined1 *)0x44aad5;
  FUN_0040c944(*(int *)PTR_DAT_004ab9ec);
  return;
}


/* ==== 0044aaf0 TDataModule.virtual_030 ==== */

void TDataModule_virtual_030(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x3a) != 0) {
    puStack_1c = &LAB_0044ab28;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


/* ==== 0044ab48 TDataModule.virtual_034 ==== */

void TDataModule_virtual_034(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x42) != 0) {
    puStack_1c = &LAB_0044ab80;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


/* ==== 0044aba0 FUN_0044aba0 ==== */

bool FUN_0044aba0(void)

{
  bool bVar1;
  int in_stack_00000004;
  
  bVar1 = true;
  if (*(int *)(in_stack_00000004 + -4) != 0) {
    bVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x24) !=
            *(int *)(*(int *)(in_stack_00000004 + -4) + 0x24);
  }
  return bVar1;
}


/* ==== 0044abc8 FUN_0044abc8 ==== */

undefined4 FUN_0044abc8(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + -4) != 0) {
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x2c);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    iVar1 != *(int *)(*(int *)(in_stack_00000004 + -4) + 0x2c));
  }
  return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                  *(int *)(*(int *)(in_stack_00000004 + -8) + 0x2c) != 0);
}


/* ==== 0044abfc FUN_0044abfc ==== */

undefined4 FUN_0044abfc(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + -4) != 0) {
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x30);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    iVar1 != *(int *)(*(int *)(in_stack_00000004 + -4) + 0x30));
  }
  return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                  *(int *)(*(int *)(in_stack_00000004 + -8) + 0x30) != 0);
}


/* ==== 0044ac30 FUN_0044ac30 ==== */

bool FUN_0044ac30(void)

{
  bool bVar1;
  int in_stack_00000004;
  
  bVar1 = true;
  if (*(int *)(in_stack_00000004 + -4) != 0) {
    bVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x28) !=
            *(int *)(*(int *)(in_stack_00000004 + -4) + 0x28);
  }
  return bVar1;
}


/* ==== 0044ac58 TDataModule.virtual_004 ==== */

void TDataModule_virtual_004(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  TComponent_virtual_004(param_1,param_2);
  puVar6 = &LAB_0044ae28;
  puVar5 = &LAB_0044ae60;
  iVar3 = param_1;
  iVar4 = param_1;
  bVar1 = FUN_0044ac30();
  (**(code **)(*param_2 + 4))(param_2,"Height",bVar1,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_0044ae00;
  puVar5 = &LAB_0044ae48;
  iVar3 = param_1;
  iVar4 = param_1;
  uVar2 = FUN_0044abc8();
  (**(code **)(*param_2 + 4))(param_2,"HorizontalOffset",uVar2,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_0044ae14;
  puVar5 = &LAB_0044ae54;
  iVar3 = param_1;
  iVar4 = param_1;
  uVar2 = FUN_0044abfc();
  (**(code **)(*param_2 + 4))(param_2,"VerticalOffset",uVar2,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_0044adec;
  puVar5 = &LAB_0044ae3c;
  iVar3 = param_1;
  bVar1 = FUN_0044aba0();
  (**(code **)(*param_2 + 4))(param_2,"Width",bVar1,puVar5,param_1,puVar6,iVar3);
  return;
}


/* ==== 0044ad6c TDataModule.dynamic_fffd ==== */

void TDataModule_dynamic_fffd
               (int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 i_val;
  undefined4 j;
  
  TComponent_dynamic_fffd();
  if (param_1 == param_2) {
    i_val = FUN_00415b9c(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar2 = (int *)FUN_00415b70(param_1,j);
        cVar1 = System__CallDynaInst(piVar2,extraout_EDX,extraout_ECX);
        if (cVar1 == '\0') {
          (*(code *)param_4)(param_5,piVar2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0044add8 TDataModule.virtual_014 ==== */

void TDataModule_virtual_014(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)param_3 >> 8),DAT_004ac4d1) ^ 1;
  *(char *)(param_1 + 0x12) = (char)uVar1;
  TComponent_virtual_014(param_1,param_2,uVar1);
  return;
}


/* ==== 0044ae6c FUN_0044ae6c ==== */

undefined1 * FUN_0044ae6c(void)

{
  undefined4 local_28 [10];
  
  local_28[0] = 0x28;
  (**(code **)PTR_DAT_004ab730)();
  return (undefined1 *)local_28;
}


/* ==== 0044ae8c FUN_0044ae8c ==== */

int FUN_0044ae8c(void)

{
  undefined4 uStack_20;
  
  (**(code **)PTR_DAT_004ab730)();
  return uStack_20 + -0x28;
}


/* ==== 0044aeb0 FUN_0044aeb0 ==== */

undefined4 FUN_0044aeb0(void)

{
  (**(code **)PTR_DAT_004ab730)();
  return 0x28;
}


/* ==== 0044aed0 FUN_0044aed0 ==== */

int FUN_0044aed0(void)

{
  undefined4 local_28;
  int iStack_24;
  
  local_28 = 0x28;
  (**(code **)PTR_DAT_004ab730)();
  return iStack_24 - (int)&local_28;
}


/* ==== 0044aef4 FUN_0044aef4 ==== */

undefined4
FUN_0044aef4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = System_TObject_Create((int *)&DAT_00443f60,'\x01',param_3);
  *(undefined4 *)(iVar1 + 4) = param_4;
  *(int *)(iVar1 + 8) = param_7[2];
  iVar1 = Classes_TList_Add(param_7,iVar1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


/* ==== 0044af24 TScreen.virtual_02c ==== */

int * TScreen_virtual_02c(int *param_1,char param_2,int *param_3)

{
  HKL pHVar1;
  int iVar2;
  HDC hdc;
  int *piVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
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
  TComponent_virtual_02c(param_1,'\0',param_3);
  FUN_0044b288((int)param_1);
  pHVar1 = GetKeyboardLayout(0);
  param_1[0xc] = (int)pHVar1;
  iVar2 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[0x10] = iVar2;
  iVar2 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_01);
  param_1[0x11] = iVar2;
  iVar2 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_02);
  param_1[0x12] = iVar2;
  iVar2 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_03);
  param_1[0x13] = iVar2;
  iVar2 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_04);
  param_1[0x1c] = iVar2;
  hdc = GetDC((HWND)0x0);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  param_1[0xd] = iVar2;
  ReleaseDC((HWND)0x0,hdc);
  (**(code **)PTR_DAT_004ab834)();
  piVar3 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_05);
  param_1[0x1e] = (int)piVar3;
  piVar3 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_06);
  param_1[0x1f] = (int)piVar3;
  piVar3 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_07);
  param_1[0x1d] = (int)piVar3;
  FUN_0044b668((int)param_1);
  iVar2 = param_1[0x1e];
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_0044b584;
  iVar2 = param_1[0x1f];
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_0044b584;
  iVar2 = param_1[0x1d];
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_0044b584;
  if (cVar4 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}


/* ==== 0044b04c TScreen.Destroy ==== */

void TScreen_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int i_val;
  int j;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[0x1d]);
  System_TObject_Free((int *)piVar1[0x1f]);
  System_TObject_Free((int *)piVar1[0x1e]);
  System_TObject_Free((int *)piVar1[0x12]);
  System_TObject_Free((int *)piVar1[0x11]);
  System_TObject_Free((int *)piVar1[0x10]);
  System_TObject_Free((int *)piVar1[9]);
  System_TObject_Free((int *)piVar1[10]);
  System_TObject_Free((int *)piVar1[0x1c]);
  if ((piVar1[0x13] != 0) && (i_val = *(int *)(piVar1[0x13] + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar2 = (int *)Classes_TList_Get((undefined4 *)piVar1[0x13],j);
      System_TObject_Free(piVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  System_TObject_Free((int *)piVar1[0x13]);
  FUN_0044b2e4((int)piVar1);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0044b0f4 FUN_0044b0f4 ==== */

void FUN_0044b0f4(void)

{
  (**(code **)PTR_DAT_004ab760)();
  return;
}


/* ==== 0044b100 FUN_0044b100 ==== */

void FUN_0044b100(void)

{
  (**(code **)PTR_DAT_004ab760)();
  return;
}


/* ==== 0044b10c FUN_0044b10c ==== */

void FUN_0044b10c(void)

{
  (**(code **)PTR_DAT_004ab760)();
  return;
}


/* ==== 0044b118 FUN_0044b118 ==== */

void FUN_0044b118(void)

{
  (**(code **)PTR_DAT_004ab760)();
  return;
}


/* ==== 0044b124 FUN_0044b124 ==== */

void FUN_0044b124(void)

{
  (**(code **)PTR_DAT_004ab760)();
  return;
}


/* ==== 0044b130 FUN_0044b130 ==== */

void FUN_0044b130(void)

{
  (**(code **)PTR_DAT_004ab760)();
  return;
}


/* ==== 0044b13c FUN_0044b13c ==== */

void FUN_0044b13c(int param_1,int param_2)

{
  Classes_TList_Get(*(undefined4 **)(param_1 + 0x4c),param_2);
  return;
}


/* ==== 0044b150 FUN_0044b150 ==== */

int FUN_0044b150(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  if (iVar1 == 0) {
    iVar1 = (**(code **)PTR_DAT_004ab760)();
    return iVar1;
  }
  return iVar1;
}


/* ==== 0044b16c FUN_0044b16c ==== */

void FUN_0044b16c(int param_1,int param_2)

{
  Classes_TList_Get(*(undefined4 **)(param_1 + 0x40),param_2);
  return;
}


/* ==== 0044b180 FUN_0044b180 ==== */

undefined4 FUN_0044b180(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
}


/* ==== 0044b188 FUN_0044b188 ==== */

void FUN_0044b188(int param_1,int param_2)

{
  Classes_TList_Get(*(undefined4 **)(param_1 + 0x44),param_2);
  return;
}


/* ==== 0044b19c FUN_0044b19c ==== */

undefined4 FUN_0044b19c(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x44) + 8);
}


/* ==== 0044b1a4 FUN_0044b1a4 ==== */

void FUN_0044b1a4(int param_1)

{
  if ((*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x68)) &&
     (*(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x5c), *(short *)(param_1 + 0x92) != 0)) {
    (**(code **)(param_1 + 0x90))(*(undefined4 *)(param_1 + 0x94),param_1);
  }
  if ((*(int *)(param_1 + 0x58) != *(int *)(param_1 + 100)) &&
     (*(int *)(param_1 + 100) = *(int *)(param_1 + 0x58), *(short *)(param_1 + 0x8a) != 0)) {
    (**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x8c),param_1);
  }
  return;
}


/* ==== 0044b1f0 FUN_0044b1f0 ==== */

void FUN_0044b1f0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  Classes_TList_Add(*(int **)(param_1 + 0x44),(int)param_2);
  uVar1 = System__IsClass(param_2,(int)&PTR_TWinControl_virtual_000_00442fd4);
  if ((char)uVar1 != '\0') {
    Classes_TList_Add(*(int **)(param_1 + 0x40),(int)param_2);
    FUN_0044dbd8(DAT_004ac7d4);
  }
  return;
}


/* ==== 0044b228 FUN_0044b228 ==== */

void FUN_0044b228(int param_1,int param_2)

{
  FUN_00410448(*(int **)(param_1 + 0x44),param_2);
  FUN_00410448(*(int **)(param_1 + 0x40),param_2);
  FUN_0044dbd8(DAT_004ac7d4);
  if ((*(int *)(*(int *)(param_1 + 0x44) + 8) == 0) && (*(int *)(DAT_004ac7d4 + 0x74) != 0)) {
    FUN_00435df0(*(int **)(DAT_004ac7d4 + 0x74));
  }
  return;
}


/* ==== 0044b270 FUN_0044b270 ==== */

void FUN_0044b270(int param_1,int param_2)

{
  Classes_TList_Add(*(int **)(param_1 + 0x48),param_2);
  return;
}


/* ==== 0044b27c FUN_0044b27c ==== */

void FUN_0044b27c(int param_1,int param_2)

{
  FUN_00410448(*(int **)(param_1 + 0x48),param_2);
  return;
}


/* ==== 0044b288 FUN_0044b288 ==== */

void FUN_0044b288(int param_1)

{
  HCURSOR pHVar1;
  int i_val;
  undefined4 *puVar2;
  HINSTANCE pHVar3;
  
  pHVar1 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  *(HCURSOR *)(param_1 + 0x54) = pHVar1;
  i_val = -0x16;
  puVar2 = &DAT_004aa9e8;
  do {
    pHVar3 = DAT_004ac4dc;
    if (((i_val < -0x11) || (-0xc < i_val)) && (i_val != -0x15)) {
      pHVar3 = (HINSTANCE)0x0;
    }
    pHVar1 = LoadCursorA(pHVar3,(LPCSTR)*puVar2);
    FUN_0044b340(param_1,i_val,pHVar1);
    i_val = i_val + 1;
    puVar2 = puVar2 + 1;
  } while (i_val != -1);
  return;
}


/* ==== 0044b2e4 FUN_0044b2e4 ==== */

void FUN_0044b2e4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  HCURSOR pHVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x50);
  while (puVar3 != (undefined4 *)0x0) {
    iVar1 = puVar3[1];
    if ((((-0x12 < iVar1) && (iVar1 < -0xb)) || (iVar1 == -0x15)) || (0 < iVar1)) {
      DestroyCursor((HCURSOR)puVar3[2]);
    }
    puVar2 = (undefined4 *)*puVar3;
    System__FreeMem((int)puVar3);
    puVar3 = puVar2;
  }
  pHVar4 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  if (pHVar4 != *(HCURSOR *)(param_1 + 0x54)) {
    DestroyCursor(*(HCURSOR *)(param_1 + 0x54));
  }
  return;
}


/* ==== 0044b340 FUN_0044b340 ==== */

void FUN_0044b340(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)System__GetMem(0xc);
  *puVar1 = *(undefined4 *)(param_1 + 0x50);
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  return;
}


/* ==== 0044b368 FUN_0044b368 ==== */

void FUN_0044b368(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int keyboard_layout_list;
  byte *lpSubKey;
  LSTATUS LVar3;
  undefined4 *in_FS_OFFSET;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  undefined4 uStack_274;
  undefined1 *puStack_270;
  undefined1 *puStack_26c;
  int local_264;
  HKL local_260;
  undefined1 local_25c;
  byte local_258 [64];
  BYTE local_218 [256];
  HKL local_118 [64];
  HKL *local_18;
  int i_val;
  HKEY key;
  DWORD local_c;
  int local_8;
  
  puStack_26c = &stack0xfffffffc;
  local_264 = 0;
  puStack_270 = &LAB_0044b513;
  uStack_274 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_274;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = System_TObject_Create((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',param_3);
    *(undefined4 *)(local_8 + 0x28) = uVar2;
    System__LStrClr((int *)(local_8 + 0x2c));
    keyboard_layout_list = GetKeyboardLayoutList(0x40,local_118);
    if (-1 < keyboard_layout_list + -1) {
      local_18 = local_118;
      i_val = keyboard_layout_list;
      do {
        uVar2 = FUN_00438fac();
        if ((char)uVar2 != '\0') {
          phkResult = &key;
          samDesired = 0x20019;
          ulOptions = 0;
          local_260 = *local_18;
          local_25c = 0;
          lpSubKey = FUN_004091ec(local_258,
                                  (byte *)
                                  "System\\CurrentControlSet\\Control\\Keyboard Layouts\\%.8x",
                                  &local_260,0);
          LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)lpSubKey,ulOptions,samDesired,phkResult);
          if (LVar3 == 0) {
            uVar2 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xfffffd80;
            local_c = 0x100;
            LVar3 = RegQueryValueExA(key,"layout text",(LPDWORD)0x0,(LPDWORD)0x0,local_218,&local_c)
            ;
            if (LVar3 == 0) {
              FUN_00403e8c(&local_264,(char *)local_218,0x100);
              (**(code **)(**(int **)(local_8 + 0x28) + 0x38))
                        (*(int **)(local_8 + 0x28),local_264,*local_18);
              if (*local_18 == *(HKL *)(local_8 + 0x30)) {
                FUN_00403e8c((int *)(local_8 + 0x2c),(char *)local_218,0x100);
              }
            }
            *in_FS_OFFSET = uVar2;
            RegCloseKey(key);
            return;
          }
        }
        local_18 = local_18 + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    piVar1 = *(int **)(local_8 + 0x28);
    *(undefined1 *)((int)piVar1 + 0x19) = 0;
    FUN_004125dc(piVar1,'\x01');
  }
  *in_FS_OFFSET = uStack_274;
  puStack_26c = &LAB_0044b51a;
  puStack_270 = (undefined1 *)0x44b512;
  System__LStrClr(&local_264);
  return;
}


/* ==== 0044b568 FUN_0044b568 ==== */

void FUN_0044b568(int param_1,int *param_2,undefined4 param_3)

{
  FUN_0044b368(param_1,param_2,param_3);
  System__LStrAsg(param_2,*(undefined4 **)(param_1 + 0x2c));
  return;
}


/* ==== 0044b594 FUN_0044b594 ==== */

void FUN_0044b594(int param_1,int param_2)

{
  Classes_TList_Get(*(undefined4 **)(param_1 + 0x48),param_2);
  return;
}


/* ==== 0044b5a8 FUN_0044b5a8 ==== */

undefined4 FUN_0044b5a8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x48) + 8);
}


/* ==== 0044b5b0 FUN_0044b5b0 ==== */

undefined4 FUN_0044b5b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (param_2 != -1) {
    for (puVar2 = *(undefined4 **)(param_1 + 0x50);
        (puVar2 != (undefined4 *)0x0 && (param_2 != puVar2[1])); puVar2 = (undefined4 *)*puVar2) {
    }
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x54);
    }
    else {
      uVar1 = puVar2[2];
    }
  }
  return uVar1;
}


/* ==== 0044b5d8 FUN_0044b5d8 ==== */

void FUN_0044b5d8(int param_1,short param_2)

{
  POINT Point;
  HWND hWnd;
  DWORD DVar1;
  DWORD DVar2;
  LPARAM lParam;
  uint param;
  HCURSOR hCursor;
  undefined2 extraout_var;
  tagPOINT point;
  
  if (param_2 != *(short *)(param_1 + 0x38)) {
    *(short *)(param_1 + 0x38) = param_2;
    if (param_2 == 0) {
      GetCursorPos(&point);
      Point.y = point.y;
      Point.x = point.x;
      hWnd = WindowFromPoint(Point);
      if (hWnd != (HWND)0x0) {
        DVar1 = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
        DVar2 = GetCurrentThreadId();
        if (DVar1 == DVar2) {
          lParam = FUN_004070fc((undefined2 *)&point);
          param = SendMessageA(hWnd,0x84,0,lParam);
          param = FUN_00407070(param,CONCAT22(extraout_var,0x200));
          SendMessageA(hWnd,0x20,(WPARAM)hWnd,param);
          return;
        }
      }
    }
    hCursor = (HCURSOR)FUN_0044b5b0(param_1,(int)param_2);
    SetCursor(hCursor);
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}


/* ==== 0044b668 FUN_0044b668 ==== */

void FUN_0044b668(int param_1)

{
  BOOL BVar1;
  HFONT pHVar2;
  HGDIOBJ h_val;
  LOGFONTA local_194;
  undefined4 local_158 [40];
  LOGFONTA local_b8;
  LOGFONTA local_7c [2];
  
  BVar1 = SystemParametersInfoA(0x1f,0x3c,&local_194,0);
  if (BVar1 == 0) {
    h_val = GetStockObject(0xd);
    FUN_004183d0(*(int **)(param_1 + 0x78),h_val);
  }
  else {
    pHVar2 = CreateFontIndirectA(&local_194);
    FUN_004183d0(*(int **)(param_1 + 0x78),pHVar2);
  }
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 == 0) {
    TFont_SetSize(*(int **)(param_1 + 0x74),8);
    h_val = GetStockObject(0xd);
    FUN_004183d0(*(int **)(param_1 + 0x7c),h_val);
  }
  else {
    pHVar2 = CreateFontIndirectA(local_7c);
    FUN_004183d0(*(int **)(param_1 + 0x74),pHVar2);
    pHVar2 = CreateFontIndirectA(&local_b8);
    FUN_004183d0(*(int **)(param_1 + 0x7c),pHVar2);
  }
  return;
}


/* ==== 0044b71c FUN_0044b71c ==== */

void FUN_0044b71c(int param_1)

{
  *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + 1;
  return;
}


/* ==== 0044b724 FUN_0044b724 ==== */

void FUN_0044b724(int param_1)

{
  *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + -1;
  if ((*(short *)(param_1 + 0x80) == 0) && ((*(byte *)(param_1 + 0x82) & 0x10) != 0)) {
    FUN_0044b744(param_1);
  }
  return;
}


/* ==== 0044b744 FUN_0044b744 ==== */

void FUN_0044b744(int param_1)

{
  FUN_0044bb88(param_1,0);
  return;
}


/* ==== 0044b74c FUN_0044b74c ==== */

uint FUN_0044b74c(int param_1,int param_2,char param_3)

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
                     iVar2 < *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c));
  }
  else if (param_3 == '\x03') {
    uVar1 = (uint)(*(int *)(param_1 + 0x30) < *(int *)(param_2 + 0x30));
  }
  else if (param_3 == '\x04') {
    iVar2 = *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x38);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 < *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38));
  }
  return uVar1;
}


/* ==== 0044b7ac FUN_0044b7ac ==== */

void FUN_0044b7ac(int *param_1,char param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  
  iVar3 = *(int *)(*(int *)(param_4 + -4) + 8) - **(int **)(param_4 + -4);
  if ((iVar3 < 0) || ((byte)(param_2 - 3U) < 2)) {
    iVar3 = param_1[0xe];
  }
  local_14 = *(int *)(*(int *)(param_4 + -4) + 0xc) - *(int *)(*(int *)(param_4 + -4) + 4);
  if ((local_14 < 0) || ((byte)(param_2 - 1U) < 2)) {
    local_14 = param_1[0xf];
  }
  if ((param_2 == '\x01') && (*(char *)((int)param_1 + 0x213) == '\x02')) {
    local_c = param_1[0xc];
    local_10 = param_1[0xd];
    iVar3 = (**(code **)PTR_DAT_004ab760)();
  }
  else {
    local_c = **(int **)(param_4 + -4);
    local_10 = *(int *)(*(int *)(param_4 + -4) + 4);
  }
  if (param_2 == '\x01') {
    piVar1 = (int *)(*(int *)(param_4 + -4) + 4);
    *piVar1 = *piVar1 + local_14;
  }
  else if (param_2 == '\x02') {
    piVar1 = (int *)(*(int *)(param_4 + -4) + 0xc);
    *piVar1 = *piVar1 - local_14;
    local_10 = *(int *)(*(int *)(param_4 + -4) + 0xc);
  }
  else if (param_2 == '\x03') {
    **(int **)(param_4 + -4) = **(int **)(param_4 + -4) + iVar3;
  }
  else if (param_2 == '\x04') {
    piVar1 = (int *)(*(int *)(param_4 + -4) + 8);
    *piVar1 = *piVar1 - iVar3;
    local_c = *(int *)(*(int *)(param_4 + -4) + 8);
  }
  (**(code **)(*param_1 + 0x7c))(param_1,local_c,local_10,local_14,iVar3);
  if (*(char *)((int)param_1 + 0x213) == '\x02') {
    iVar3 = iVar3 - local_c;
    local_14 = local_14 - local_10;
  }
  iVar2 = param_1[0xe];
  if ((iVar3 != iVar2) || (param_1[0xf] != local_14)) {
    switch(param_2) {
    case '\x01':
      piVar1 = (int *)(*(int *)(param_4 + -4) + 4);
      *piVar1 = *piVar1 - (local_14 - param_1[0xf]);
      break;
    case '\x02':
      piVar1 = (int *)(*(int *)(param_4 + -4) + 0xc);
      *piVar1 = *piVar1 + (local_14 - param_1[0xf]);
      break;
    case '\x03':
      **(int **)(param_4 + -4) = **(int **)(param_4 + -4) - (iVar3 - iVar2);
      break;
    case '\x04':
      piVar1 = (int *)(*(int *)(param_4 + -4) + 8);
      *piVar1 = *piVar1 + (iVar3 - iVar2);
      break;
    case '\x05':
      piVar1 = (int *)(*(int *)(param_4 + -4) + 8);
      *piVar1 = *piVar1 + (iVar3 - iVar2);
      piVar1 = (int *)(*(int *)(param_4 + -4) + 0xc);
      *piVar1 = *piVar1 + (local_14 - param_1[0xf]);
    }
  }
  return;
}


/* ==== 0044b95c FUN_0044b95c ==== */

void FUN_0044b95c(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int i_val;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int k;
  undefined4 j;
  
  (**(code **)(**(int **)(param_4 + -8) + 8))();
  if ((((*(int *)(param_4 + -0xc) != 0) && (*(int *)(*(int *)(param_4 + -0xc) + 0x24) == 0)) &&
      ((*(byte *)(*(int *)(param_4 + -0xc) + 0x20) & 0x10) == 0)) &&
     (((*(char *)(*(int *)(param_4 + -0xc) + 0x47) != '\0' &&
       (*(char *)(*(int *)(param_4 + -0xc) + 0x4b) == param_1)) &&
      (*(char *)(*(int *)(param_4 + -0xc) + 0x213) != '\x01')))) {
    Classes_TList_Add(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc));
  }
  i_val = FUN_0044b19c(*(int *)(param_4 + -0x10));
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_0044b188(*(int *)(param_4 + -0x10),j);
      if (((*(int *)(iVar1 + 0x24) == 0) && (*(char *)(iVar1 + 0x4b) == param_1)) &&
         (((*(byte *)(iVar1 + 0x20) & 0x10) == 0 &&
          (((*(char *)(iVar1 + 0x47) != '\0' && (*(char *)(iVar1 + 0x213) != '\x01')) &&
           (iVar1 != *(int *)(param_4 + -0xc))))))) {
        for (k = 0; k < *(int *)(*(int *)(param_4 + -8) + 8); k = k + 1) {
          iVar2 = Classes_TList_Get(*(undefined4 **)(param_4 + -8),k);
          uVar3 = FUN_0044b74c(iVar1,iVar2,param_1);
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
      piVar4 = (int *)Classes_TList_Get(*(undefined4 **)(param_4 + -8),j);
      FUN_0044b7ac(piVar4,param_1,extraout_ECX,iVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0044baa8 FUN_0044baa8 ==== */

undefined4 FUN_0044baa8(void)

{
  int i_val;
  int iVar1;
  undefined4 unaff_EBX;
  int in_stack_00000004;
  
  i_val = FUN_0044b19c(*(int *)(in_stack_00000004 + -0x10));
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      iVar1 = FUN_0044b188(*(int *)(in_stack_00000004 + -0x10),i_val);
      if ((((*(int *)(iVar1 + 0x24) == 0) && ((*(byte *)(iVar1 + 0x20) & 0x10) == 0)) &&
          (*(char *)(iVar1 + 0x4b) != '\0')) &&
         ((*(char *)(iVar1 + 0x47) != '\0' && (*(char *)(iVar1 + 0x213) != '\x01')))) {
        return CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return 0;
}


/* ==== 0044bb00 FUN_0044bb00 ==== */

void FUN_0044bb00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puStack_1c = (undefined1 *)0x44bb15;
  local_14 = param_1;
  local_10 = param_2;
  local_8 = param_3;
  uVar2 = FUN_0044baa8();
  puVar1 = puStack_18;
  if ((char)uVar2 != '\0') {
    puStack_18 = (undefined1 *)0x44bb26;
    local_c = (int *)System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',puVar1);
    puStack_1c = &LAB_0044bb7a;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_0044b95c('\x01',extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    FUN_0044b95c('\x02',extraout_EDX_00,puVar3,(int)&stack0xfffffffc);
    FUN_0044b95c('\x03',extraout_EDX_01,puVar4,(int)&stack0xfffffffc);
    FUN_0044b95c('\x04',extraout_EDX_02,puVar5,(int)&stack0xfffffffc);
    FUN_0044b95c('\x05',extraout_EDX_03,puVar6,(int)&stack0xfffffffc);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x44bb81;
    puStack_1c = (undefined1 *)0x44bb79;
    System_TObject_Free(local_c);
    return;
  }
  return;
}


/* ==== 0044bb88 FUN_0044bb88 ==== */

void FUN_0044bb88(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  int local_8;
  
  if (*(short *)(param_1 + 0x80) != 0) {
    *(ushort *)(param_1 + 0x82) = *(ushort *)(param_1 + 0x82) | 0x10;
    return;
  }
  puStack_20 = (undefined1 *)0x44bbb6;
  local_8 = param_1;
  FUN_0044b71c(param_1);
  puStack_24 = &LAB_0044bc01;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  SystemParametersInfoA(0x30,0,local_18,0);
  FUN_0044bb00(local_8,param_2,local_18);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x44bc08;
  *(ushort *)(local_8 + 0x82) = *(ushort *)(local_8 + 0x82) & 0xffef;
  puStack_24 = (undefined1 *)0x44bc00;
  FUN_0044b724(local_8);
  return;
}


/* ==== 0044bc10 FUN_0044bc10 ==== */

void FUN_0044bc10(int param_1)

{
  SysUtils_FreeAndNil((undefined4 *)(param_1 + 0x24));
  return;
}


/* ==== 0044bc1c FUN_0044bc1c ==== */

void FUN_0044bc1c(int param_1,int *param_2)

{
  while( true ) {
    if (param_1 == 0) {
      System__LStrClr(param_2);
      return;
    }
    if (*(int *)(param_1 + 0x70) != 0) break;
    param_1 = *(int *)(param_1 + 0x24);
  }
  System__LStrAsg(param_2,*(undefined4 **)(param_1 + 0x70));
  return;
}


/* ==== 0044bc4c thunk_FUN_0044bc51 ==== */

int thunk_FUN_0044bc51(int param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x89) == '\0')); param_1 = *(int *)(param_1 + 0x24))
  {
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}


/* ==== 0044bc51 FUN_0044bc51 ==== */

int FUN_0044bc51(int param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x89) == '\0')); param_1 = *(int *)(param_1 + 0x24))
  {
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}


/* ==== 0044bc6c FUN_0044bc6c ==== */

void FUN_0044bc6c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_004ac7d4 != 0) {
    puStack_18 = &LAB_0044bc9d;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    FUN_0044ddc4(DAT_004ac7d4);
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


/* ==== 0044bd1c FUN_0044bd1c ==== */

LRESULT FUN_0044bd1c(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  LPARAM in_stack_0000000c;
  
  LVar1 = CallNextHookEx(DAT_004ac7f0,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if ((-1 < in_stack_00000004) && (DAT_004ac7d4 != 0)) {
    FUN_0044d05c(DAT_004ac7d4,in_stack_0000000c);
  }
  return LVar1;
}


/* ==== 0044bd60 FUN_0044bd60 ==== */

void FUN_0044bd60(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  DWORD dwThreadId;
  DWORD DStack_4;
  
  if (*(char *)(DAT_004ac7d4 + 0x95) == '\0') {
    DStack_4 = param_3;
    if (DAT_004ac7f0 == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      DAT_004ac7f0 = SetWindowsHookExA(3,FUN_0044bd1c,(HINSTANCE)0x0,dwThreadId);
    }
    if (DAT_004ac7ec == (HANDLE)0x0) {
      DAT_004ac7ec = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    }
    if (DAT_004ac7f4 == (HANDLE)0x0) {
      DAT_004ac7f4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,1000,
                                  (LPTHREAD_START_ROUTINE)&LAB_0044bcc0,(LPVOID)0x0,0,&DStack_4);
    }
  }
  return;
}


/* ==== 0044bdd4 FUN_0044bdd4 ==== */

void FUN_0044bdd4(void)

{
  DWORD DVar1;
  
  if (DAT_004ac7f0 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_004ac7f0);
  }
  DAT_004ac7f0 = (HHOOK)0x0;
  if (DAT_004ac7f4 != (HANDLE)0x0) {
    SetEvent(DAT_004ac7ec);
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_004ac7e8) {
      WaitForSingleObject(DAT_004ac7f4,0xffffffff);
    }
    CloseHandle(DAT_004ac7f4);
    DAT_004ac7f4 = (HANDLE)0x0;
  }
  return;
}


/* ==== 0044be30 FUN_0044be30 ==== */

bool FUN_0044be30(void)

{
  BOOL BVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  BVar1 = SystemParametersInfoA(0x48,8,&local_8,0);
  if (BVar1 != 0) {
    return local_4 != 0;
  }
  return false;
}


/* ==== 0044be60 FUN_0044be60 ==== */

void FUN_0044be60(char param_1)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  local_4 = -(uint)(param_1 != '\0');
  SystemParametersInfoA(0x49,8,&local_8,0);
  return;
}


/* ==== 0044be88 FUN_0044be88 ==== */

void FUN_0044be88(HWND wnd,int cmd_show)

{
  bool bVar1;
  
  bVar1 = FUN_0044be30();
  if (bVar1) {
    FUN_0044be60('\0');
  }
  ShowWindow(wnd,cmd_show);
  if (bVar1) {
    FUN_0044be60('\x01');
  }
  return;
}


/* ==== 0044bec8 TApplication.virtual_02c ==== */

int * TApplication_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  HICON pHVar3;
  char *pcVar4;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffee0;
  undefined4 in_stack_fffffee4;
  byte local_105;
  CHAR aCStack_104 [255];
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_fffffee0,
                                         in_stack_fffffee4);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 10) = 0;
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[0x20] = iVar1;
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_01);
  param_1[0x26] = iVar1;
  param_1[0x14] = 0;
  param_1[0x1d] = 0;
  param_1[0x13] = -0x7fffffe8;
  param_1[0x1a] = 500;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1c] = 0;
  param_1[0x19] = 0x9c4;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x8d) = 1;
  piVar2 = TIcon_virtual_00c((int *)&PTR_TPersistent_virtual_000_004174e4,'\x01',extraout_ECX_02);
  param_1[0x22] = (int)piVar2;
  pHVar3 = LoadIconA(*(HINSTANCE *)PTR_DAT_004ab73c,"MAINICON");
  FUN_0041f6bc(piVar2,pHVar3);
  iVar1 = param_1[0x22];
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0044da84;
  GetModuleFileNameA(*(HMODULE *)PTR_DAT_004ab73c,(LPSTR)&local_105,0x100);
  OemToCharA((LPCSTR)&local_105,(LPSTR)&local_105);
  pcVar4 = FUN_0040c23c(&local_105,'\\');
  if (pcVar4 != (char *)0x0) {
    FUN_00408b8c((char *)&local_105,pcVar4 + 1);
  }
  pcVar4 = FUN_0040c264(&local_105,'.');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  CharLowerA(aCStack_104);
  FUN_00403e8c(param_1 + 0x1f,(char *)&local_105,0x100);
  if (*PTR_DAT_004ab5f0 == '\0') {
    FUN_0044c140((int)param_1);
  }
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x8e) = 1;
  param_1[0x24] = 0;
  if (local_5 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_fffffee0;
  }
  return param_1;
}


/* ==== 0044c060 TApplication.Destroy ==== */

void TApplication_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 extraout_EDX;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if ((HMODULE)0x20 < (HMODULE)piVar1[0x24]) {
    FreeLibrary((HMODULE)piVar1[0x24]);
  }
  if (((piVar1[9] != 0) && ((char)piVar1[0x25] != '\0')) && (piVar1[0x10] != 0)) {
    FUN_0044d7fc((int)piVar1,2,0);
  }
  *(undefined1 *)((int)piVar1 + 0x8d) = 0;
  FUN_0044de34((int)piVar1);
  FUN_0044d814((int)piVar1,'\0');
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  FUN_0044d228((int)piVar1,extraout_EDX,extraout_ECX,0x44c504,(int)piVar1);
  if (((HWND)piVar1[9] != (HWND)0x0) && ((char)piVar1[0x25] != '\0')) {
    if (*PTR_DAT_004ab7d4 != '\0') {
      SendMessageA((HWND)piVar1[9],0x80,1,0);
    }
    DestroyWindow((HWND)piVar1[9]);
  }
  if (piVar1[0xd] != 0) {
    FUN_00444618(piVar1[0xd]);
  }
  System_TObject_Free((int *)piVar1[0x26]);
  System_TObject_Free((int *)piVar1[0x20]);
  System_TObject_Free((int *)piVar1[0x22]);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0044c140 FUN_0044c140 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c140(int param_1)

{
  ATOM AVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  int *piVar4;
  uint uVar5;
  int y_val;
  LPCSTR window_name;
  undefined4 uVar6;
  LPARAM lParam;
  LONG dwNewLong;
  undefined4 *in_FS_OFFSET;
  LPVOID param;
  HINSTANCE instance;
  HMENU pHVar7;
  HWND wnd_parent;
  int height_val;
  int width_val;
  int x_val;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_30;
  tagWNDCLASSA local_2c;
  
  puStack_38 = &stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  puStack_3c = &LAB_0044c2d1;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  if ((*(char *)(param_1 + 0x94) == '\0') && (*PTR_DAT_004ab91c == '\0')) {
    puVar2 = FUN_00444580();
    *(undefined1 **)(param_1 + 0x34) = puVar2;
    BVar3 = GetClassInfoA(DAT_004ac4dc,PTR_s_TApplication_004aaa60,&local_2c);
    if (BVar3 == 0) {
      _DAT_004aaa4c = DAT_004ac4dc;
      AVar1 = RegisterClassA((WNDCLASSA *)&DAT_004aaa3c);
      if (AVar1 == 0) {
        System_LoadResString((undefined4 *)PTR_PTR_004ab68c,(int *)&local_30);
        piVar4 = SysUtils_Exception_Create((int *)&DAT_0040e9b0,'\x01',local_30);
        System__RaiseExcept(piVar4);
      }
    }
    x_val = 0;
    (**(code **)PTR_DAT_004ab760)();
    uVar5 = (**(code **)PTR_DAT_004ab760)();
    y_val = (int)uVar5 >> 1;
    if (y_val < 0) {
      y_val = y_val + (uint)((uVar5 & 1) != 0);
    }
    width_val = 0;
    height_val = 0;
    wnd_parent = (HWND)0x0;
    pHVar7 = (HMENU)0x0;
    param = (LPVOID)0x0;
    instance = DAT_004ac4dc;
    window_name = System__LStrToPChar(*(undefined **)(param_1 + 0x7c));
    uVar6 = FUN_00407114(PTR_s_TApplication_004aaa60,window_name,0x84ca0000,param,instance,pHVar7,
                         wnd_parent,height_val,width_val,y_val,x_val);
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    System__LStrClr((int *)(param_1 + 0x7c));
    *(undefined1 *)(param_1 + 0x94) = 1;
    SetWindowLongA(*(HWND *)(param_1 + 0x24),-4,*(LONG *)(param_1 + 0x34));
    if (*PTR_DAT_004ab7d4 != '\0') {
      lParam = FUN_0044cc78(param_1);
      SendMessageA(*(HWND *)(param_1 + 0x24),0x80,1,lParam);
      dwNewLong = FUN_0044cc78(param_1);
      SetClassLongA(*(HWND *)(param_1 + 0x24),-0xe,dwNewLong);
    }
    pHVar7 = GetSystemMenu(*(HWND *)(param_1 + 0x24),0);
    DeleteMenu(pHVar7,0xf030,0);
    DeleteMenu(pHVar7,0xf000,0);
    if (*PTR_DAT_004ab7d4 != '\0') {
      DeleteMenu(pHVar7,0xf010,0);
    }
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0044c2d8;
  puStack_3c = (undefined1 *)0x44c2d0;
  System__LStrClr((int *)&local_30);
  return;
}


/* ==== 0044c2e0 FUN_0044c2e0 ==== */

void FUN_0044c2e0(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 == *(int *)(DAT_004ac7d8 + 0x58)) {
    *(undefined4 *)(DAT_004ac7d8 + 0x58) = 0;
  }
  if (param_2 == *(int *)(DAT_004ac7d8 + 0x5c)) {
    *(undefined4 *)(DAT_004ac7d8 + 0x5c) = 0;
    *(undefined4 *)(DAT_004ac7d8 + 0x60) = 0;
  }
  if (param_2 == *(int *)(DAT_004ac7d8 + 0x6c)) {
    *(undefined4 *)(DAT_004ac7d8 + 0x6c) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_0044b1a4(DAT_004ac7d8);
  return;
}


/* ==== 0044c340 FUN_0044c340 ==== */

undefined4 FUN_0044c340(void)

{
  HWND pHVar1;
  uint window_long;
  undefined4 uVar2;
  HWND in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  uVar2 = 0xffffffff;
  pHVar1 = GetWindow(in_stack_00000004,4);
  if (pHVar1 == *(HWND *)(DAT_004ac7d4 + 0x24)) {
    window_long = GetWindowLongA(in_stack_00000004,-0x14);
    if (((window_long & 8) == 0) ||
       (((*(int **)(DAT_004ac7d4 + 0x38) != (int *)0x0 && (*(char *)(in_stack_00000008 + 1) == '\0')
         ) && (pHVar1 = (HWND)Controls_TWinControl_GetHandle(*(int **)(DAT_004ac7d4 + 0x38)),
              in_stack_00000004 == pHVar1)))) {
      *in_stack_00000008 = in_stack_00000004;
      uVar2 = 0;
    }
    else {
      Classes_TList_Add(*(int **)(DAT_004ac7d4 + 0x80),(int)in_stack_00000004);
    }
    return uVar2;
  }
  return 0xffffffff;
}


/* ==== 0044c3b0 FUN_0044c3b0 ==== */

void FUN_0044c3b0(int param_1,undefined1 param_2)

{
  uint window_long;
  HWND hWnd;
  int i_val;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  HWND wnd;
  undefined1 local_c;
  
  if (*(int *)(DAT_004ac7d4 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x84) == 0) {
      wnd = *(HWND *)(param_1 + 0x24);
      local_c = param_2;
      EnumWindows(FUN_0044c340,(LPARAM)&wnd);
      if (*(int *)(*(int *)(param_1 + 0x80) + 8) != 0) {
        wnd = GetWindow(wnd,3);
        window_long = GetWindowLongA(wnd,-0x14);
        if ((window_long & 8) != 0) {
          wnd = (HWND)0xfffffffe;
        }
        i_val = *(int *)(*(int *)(param_1 + 0x80) + 8) + -1;
        if (-1 < i_val) {
          do {
            uFlags = 0x13;
            cy = 0;
            cx = 0;
            Y = 0;
            X = 0;
            hWndInsertAfter = wnd;
            hWnd = (HWND)Classes_TList_Get(*(undefined4 **)(param_1 + 0x80),i_val);
            SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
            i_val = i_val + -1;
          } while (i_val != -1);
        }
      }
    }
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  return;
}


/* ==== 0044c458 FUN_0044c458 ==== */

void FUN_0044c458(int param_1)

{
  FUN_0044c3b0(param_1,0);
  return;
}


/* ==== 0044c460 FUN_0044c460 ==== */

void FUN_0044c460(int param_1)

{
  FUN_0044c3b0(param_1,1);
  return;
}


/* ==== 0044c468 FUN_0044c468 ==== */

void FUN_0044c468(int param_1)

{
  HWND hWnd;
  int i_val;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if (((*(int *)(DAT_004ac7d4 + 0x24) != 0) && (0 < *(int *)(param_1 + 0x84))) &&
     (*(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1, *(int *)(param_1 + 0x84) == 0)) {
    i_val = *(int *)(*(int *)(param_1 + 0x80) + 8) + -1;
    if (-1 < i_val) {
      do {
        uFlags = 0x13;
        cy = 0;
        cx = 0;
        Y = 0;
        X = 0;
        hWndInsertAfter = (HWND)0xffffffff;
        hWnd = (HWND)Classes_TList_Get(*(undefined4 **)(param_1 + 0x80),i_val);
        SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    (**(code **)(**(int **)(param_1 + 0x80) + 8))();
  }
  return;
}


/* ==== 0044c4d4 FUN_0044c4d4 ==== */

undefined4 FUN_0044c4d4(int param_1)

{
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)(param_1 + 0x28) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 0044c4ec FUN_0044c4ec ==== */

undefined4 FUN_0044c4ec(int param_1)

{
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 0044c504 FUN_0044c504 ==== */

undefined4 FUN_0044c504(int param_1,int *param_2)

{
  if (*param_2 == 0x1a) {
    if (*(char *)(param_1 + 0x49) != '\0') {
      SetThreadLocale(0x400);
      FUN_0040c35c();
    }
    if (*(char *)(param_1 + 0x4a) != '\0') {
      FUN_0044b668(DAT_004ac7d8);
      if (*(char *)(param_1 + 0x78) != '\0') {
        FUN_0044d814(param_1,'\0');
        FUN_0044d814(param_1,'\x01');
      }
    }
  }
  return 0;
}


/* ==== 0044c554 FUN_0044c554 ==== */

void FUN_0044c554(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  
  LVar1 = DefWindowProcA(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),
                         **(UINT **)(in_stack_00000004 + -8),
                         *(WPARAM *)(*(int *)(in_stack_00000004 + -8) + 4),
                         *(LPARAM *)(*(int *)(in_stack_00000004 + -8) + 8));
  *(LRESULT *)(*(int *)(in_stack_00000004 + -8) + 0xc) = LVar1;
  return;
}


/* ==== 0044c590 FUN_0044c590 ==== */

void FUN_0044c590(void)

{
  HDC hDC;
  HICON hIcon;
  int in_stack_00000004;
  tagPAINTSTRUCT local_44;
  
  hDC = BeginPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  hIcon = (HICON)FUN_0044cc78(*(int *)(in_stack_00000004 + -4));
  DrawIcon(hDC,0,0,hIcon);
  EndPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  return;
}


/* ==== 0044c5dc FUN_0044c5dc ==== */

/* WARNING: Heritage AFTER dead removal. Example location: EAX : 0x0044c9df */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0044c5dc(int param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  LRESULT LVar4;
  FARPROC pFVar5;
  DWORD DVar6;
  undefined4 uVar7;
  HWND pHVar8;
  BOOL BVar9;
  HWND hWnd;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_0044cc30;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  param_2[3] = 0;
  i_val = *(int *)(*(int *)(param_1 + 0x98) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      puVar3 = (undefined4 *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x98),j);
      (*(code *)*puVar3)(puVar3[1],param_2);
      if ((char)puVar3 != '\0') {
        *in_FS_OFFSET = uStack_24;
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_0044c504(param_1,param_2);
  i_val = *param_2;
  if (i_val < 0x113) {
    if (i_val == 0x112) {
      if ((param_2[1] & 0xfff0U) == 0xf020) {
        FUN_0044cc94(param_1);
      }
      else if ((param_2[1] & 0xfff0U) == 0xf120) {
        FUN_0044cd34(param_1);
      }
      else {
        FUN_0044c554();
      }
      goto LAB_0044cc26;
    }
    if (i_val < 0x17) {
      if (i_val == 0x16) {
        if (param_2[1] != 0) {
          *(undefined1 *)(param_1 + 0x8c) = 1;
        }
        goto LAB_0044cc26;
      }
      switch(i_val) {
      case 7:
        PostMessageA(*(HWND *)(param_1 + 0x24),0xb01a,0,0);
        FUN_0044c554();
        break;
      default:
        goto switchD_0044c67e_caseD_1;
      case 10:
        if (param_2[1] == 0) {
          FUN_0044c554();
          if (*(int *)(param_1 + 0x9c) == 0) {
            uVar7 = FUN_004442dc(*(undefined4 *)(param_1 + 0x24));
            *(undefined4 *)(param_1 + 0x9c) = uVar7;
          }
          FUN_0044c460(param_1);
        }
        else {
          FUN_0044c468(param_1);
          if (*(undefined4 **)(param_1 + 0x9c) != (undefined4 *)0x0) {
            FUN_00444390(*(undefined4 **)(param_1 + 0x9c));
            *(undefined4 *)(param_1 + 0x9c) = 0;
          }
          FUN_0044c554();
        }
        break;
      case 0xf:
        BVar9 = IsIconic(*(HWND *)(param_1 + 0x24));
        if (BVar9 == 0) {
          FUN_0044c554();
        }
        else {
          FUN_0044c590();
        }
        break;
      case 0x10:
        if (*(int **)(param_1 + 0x38) != (int *)0x0) {
          FUN_00449ac0(*(int **)(param_1 + 0x38),extraout_EDX,extraout_ECX);
        }
        break;
      case 0x14:
        *param_2 = 0x27;
        FUN_0044c554();
      }
      goto LAB_0044cc26;
    }
    if (i_val < 0x1e) {
      if (i_val == 0x1d) {
        FUN_0044bc10(DAT_004ac7d8);
        FUN_0044c554();
        goto LAB_0044cc26;
      }
      if (i_val == 0x1a) {
        FUN_00438be8(*(int *)PTR_DAT_004ab9d0,param_2[1]);
        FUN_0044c554();
        goto LAB_0044cc26;
      }
      if (i_val == 0x1c) {
        FUN_0044c554();
        *(bool *)(param_1 + 0x8d) = param_2[1] != 0;
        if (param_2[1] == 0) {
          FUN_0044c458(param_1);
          PostMessageA(*(HWND *)(param_1 + 0x24),0xb001,0,0);
        }
        else {
          FUN_0044c468(param_1);
          PostMessageA(*(HWND *)(param_1 + 0x24),0xb000,0,0);
        }
        goto LAB_0044cc26;
      }
    }
    else {
      if (i_val == 0x37) {
        i_val = FUN_0044cc78(param_1);
        param_2[3] = i_val;
        goto LAB_0044cc26;
      }
      if (i_val == 0x4a) {
        if ((*(int *)param_2[2] == -0x21acbbac) && (*(char *)(param_1 + 0x8e) != '\0')) {
          if (*(int *)(param_1 + 0x90) == 0) {
            i_val = FUN_0040c978("vcltest3.dll",0x8000);
            *(int *)(param_1 + 0x90) = i_val;
            if (i_val == 0) {
              DVar6 = GetLastError();
              param_2[3] = DVar6;
              *(undefined4 *)(param_1 + 0x90) = 0;
            }
            else {
              param_2[3] = 0;
              pFVar5 = GetProcAddress(*(HMODULE *)(param_1 + 0x90),"RegisterAutomation");
              if (pFVar5 != (FARPROC)0x0) {
                (*pFVar5)(pFVar5,param_2);
              }
            }
          }
          else {
            param_2[3] = 0;
          }
        }
        goto LAB_0044cc26;
      }
    }
  }
  else if (i_val < 0xb01b) {
    if (i_val == 0xb01a) {
      BVar9 = IsIconic(*(HWND *)(param_1 + 0x24));
      if (((BVar9 == 0) && (pHVar8 = GetFocus(), pHVar8 == *(HWND *)(param_1 + 0x24))) &&
         (pHVar8 = (HWND)FUN_0044442c(0), pHVar8 != (HWND)0x0)) {
        SetFocus(pHVar8);
      }
      goto LAB_0044cc26;
    }
    if (i_val < 0xb002) {
      if (i_val == 0xb001) {
        if (*(short *)(param_1 + 0xe2) != 0) {
          (**(code **)(param_1 + 0xe0))(*(undefined4 *)(param_1 + 0xe4),param_1);
        }
        goto LAB_0044cc26;
      }
      if (i_val - 0x132U < 7) {
        LVar4 = SendMessageA((HWND)param_2[2],i_val + 0xbc00,param_2[1],(LPARAM)param_2[2]);
        param_2[3] = LVar4;
        goto LAB_0044cc26;
      }
      if (i_val - 0x132U == 0xaece) {
        if (*(short *)(param_1 + 0xea) != 0) {
          (**(code **)(param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xec),param_1);
        }
        goto LAB_0044cc26;
      }
    }
    else {
      if (i_val == 0xb016) {
        uVar7 = FUN_0044d08c(param_1,param_2,extraout_ECX);
        if ((char)uVar7 != '\0') {
          param_2[3] = 1;
        }
        goto LAB_0044cc26;
      }
      if (i_val == 0xb017) {
        piVar1 = *(int **)(param_1 + 0x38);
        if ((piVar1 != (int *)0x0) && (i_val = Controls_TWinControl_GetHandle(piVar1), i_val != 0))
        {
          pHVar8 = (HWND)Controls_TWinControl_GetHandle(piVar1);
          BVar9 = IsWindowEnabled(pHVar8);
          if (BVar9 != 0) {
            pHVar8 = (HWND)Controls_TWinControl_GetHandle(piVar1);
            BVar9 = IsWindowVisible(pHVar8);
            if (BVar9 != 0) {
              DAT_004aa934 = 0;
              pHVar8 = GetFocus();
              hWnd = (HWND)Controls_TWinControl_GetHandle(piVar1);
              SetFocus(hWnd);
              Controls_TControl_Perform((int)piVar1,0x112,param_2[1],param_2[2]);
              SetFocus(pHVar8);
              DAT_004aa934 = 1;
              param_2[3] = 1;
            }
          }
        }
        goto LAB_0044cc26;
      }
    }
  }
  else {
    if (i_val == 0xb01f) {
      FUN_0044d6c4(param_1,*(ushort *)(param_2 + 1),param_2[2]);
      goto LAB_0044cc26;
    }
    if (i_val == 0xb020) {
      if (param_2[1] == 0) {
        FUN_0044d1cc(param_1,extraout_EDX,extraout_ECX,*(undefined4 *)param_2[2],
                     ((undefined4 *)param_2[2])[1]);
      }
      else {
        FUN_0044d228(param_1,extraout_EDX,extraout_ECX,*(int *)param_2[2],((int *)param_2[2])[1]);
      }
      goto LAB_0044cc26;
    }
    if (i_val == 0xb031) {
      if (param_2[1] == 1) {
        param_2[3] = *(int *)(param_1 + 0xa0);
      }
      else {
        *(int *)(param_1 + 0xa0) = param_2[2];
      }
      goto LAB_0044cc26;
    }
    if (i_val - 0xb03fU < 2) {
      bVar2 = FUN_0044e3bc(param_1,i_val,(int *)param_2[2]);
      param_2[3] = bVar2 & 0x7f;
      goto LAB_0044cc26;
    }
  }
switchD_0044c67e_caseD_1:
  FUN_0044c554();
LAB_0044cc26:
  *in_FS_OFFSET = uStack_24;
  return;
}


/* ==== 0044cc78 FUN_0044cc78 ==== */

void FUN_0044cc78(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041f428(*(int *)(param_1 + 0x88));
  if (iVar1 == 0) {
    LoadIconA((HINSTANCE)0x0,&DAT_00007f00);
  }
  return;
}


/* ==== 0044cc94 FUN_0044cc94 ==== */

void FUN_0044cc94(int param_1)

{
  BOOL BVar1;
  HWND hWndInsertAfter;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  int x_val;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x24));
  if (BVar1 == 0) {
    FUN_0044c458(param_1);
    SetActiveWindow(*(HWND *)(param_1 + 0x24));
    if ((*(int *)(param_1 + 0x38) == 0) ||
       ((*(char *)(param_1 + 0x4b) == '\0' && (*(char *)(*(int *)(param_1 + 0x38) + 0x47) == '\0')))
       ) {
      FUN_0044be88(*(HWND *)(param_1 + 0x24),6);
    }
    else {
      uFlags = 0x40;
      cy = 0;
      x_val = *(int *)(param_1 + 0x38);
      cx = *(int *)(x_val + 0x38);
      Y = *(int *)(x_val + 0x34);
      x_val = *(int *)(x_val + 0x30);
      hWndInsertAfter = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0x38));
      SetWindowPos(*(HWND *)(param_1 + 0x24),hWndInsertAfter,x_val,Y,cx,cy,uFlags);
      DefWindowProcA(*(HWND *)(param_1 + 0x24),0x112,0xf020,0);
    }
    if (*(short *)(param_1 + 0xf2) != 0) {
      (**(code **)(param_1 + 0xf0))(*(undefined4 *)(param_1 + 0xf4),param_1);
    }
  }
  return;
}


/* ==== 0044cd34 FUN_0044cd34 ==== */

void FUN_0044cd34(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  uint uVar3;
  int cx;
  int X;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int Y;
  int cy;
  UINT uFlags;
  
  BVar2 = IsIconic(*(HWND *)(param_1 + 0x24));
  if (BVar2 != 0) {
    SetActiveWindow(*(HWND *)(param_1 + 0x24));
    if ((*(int *)(param_1 + 0x38) == 0) ||
       ((*(char *)(param_1 + 0x4b) == '\0' && (*(char *)(*(int *)(param_1 + 0x38) + 0x47) == '\0')))
       ) {
      FUN_0044be88(*(HWND *)(param_1 + 0x24),9);
    }
    else {
      DefWindowProcA(*(HWND *)(param_1 + 0x24),0x112,0xf120,0);
    }
    uFlags = 0;
    cy = 1;
    uVar3 = (**(code **)PTR_DAT_004ab760)();
    cx = (int)uVar3 >> 1;
    if (cx < 0) {
      cx = cx + (uint)((uVar3 & 1) != 0);
    }
    Y = 0;
    uVar3 = (**(code **)PTR_DAT_004ab760)();
    X = (int)uVar3 >> 1;
    if (X < 0) {
      X = X + (uint)((uVar3 & 1) != 0);
    }
    SetWindowPos(*(HWND *)(param_1 + 0x24),(HWND)0x0,X,Y,cx,cy,uFlags);
    piVar1 = *(int **)(param_1 + 0x38);
    if (((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x213) == '\x01')) &&
       (*(char *)((int)piVar1 + 0x47) == '\0')) {
      TForm_SetWindowState(piVar1,0);
      FUN_00449c78(*(int **)(param_1 + 0x38),extraout_EDX,extraout_ECX);
    }
    FUN_0044c468(param_1);
    if (*(int **)(DAT_004ac7d8 + 0x58) != (int *)0x0) {
      hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(DAT_004ac7d8 + 0x58));
      SetFocus(hWnd);
    }
    if (*(short *)(param_1 + 0xfa) != 0) {
      (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xfc),param_1);
    }
  }
  return;
}


/* ==== 0044ce24 FUN_0044ce24 ==== */

void FUN_0044ce24(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  
  if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
    hWnd = GetLastActivePopup(*(HWND *)(param_1 + 0x24));
    if ((hWnd != (HWND)0x0) && (hWnd != *(HWND *)(param_1 + 0x24))) {
      BVar1 = IsWindowVisible(hWnd);
      if (BVar1 != 0) {
        BVar1 = IsWindowEnabled(hWnd);
        if (BVar1 != 0) {
          SetForegroundWindow(hWnd);
        }
      }
    }
  }
  return;
}


/* ==== 0044ce60 FUN_0044ce60 ==== */

void FUN_0044ce60(int param_1,int *param_2)

{
  uint window_text;
  CHAR local_108 [256];
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    System__LStrAsg(param_2,*(undefined4 **)(param_1 + 0x7c));
  }
  else {
    window_text = GetWindowTextA(*(HWND *)(param_1 + 0x24),local_108,0x100);
    System__LStrFromPCharLen(param_2,(undefined4 *)local_108,window_text);
  }
  return;
}


/* ==== 0044cea8 FUN_0044cea8 ==== */

void FUN_0044cea8(int param_1,uint *param_2)

{
  LPCSTR lpString;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_18 = &LAB_0044cf21;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar1 = *(char *)(param_1 + 0x94) == '\0';
  if ((bool)uVar1) {
    System__LStrAsg((int *)(param_1 + 0x7c),param_2);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    FUN_0044ce60(param_1,(int *)&local_8);
    System__LStrCmp(local_8,param_2);
    if ((!(bool)uVar1) || (*(int *)(param_1 + 0x7c) != 0)) {
      lpString = System__LStrToPChar((undefined *)param_2);
      SetWindowTextA(*(HWND *)(param_1 + 0x24),lpString);
      System__LStrClr((int *)(param_1 + 0x7c));
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0044cf28;
  puStack_18 = (undefined1 *)0x44cf20;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0044cf30 FUN_0044cf30 ==== */

bool FUN_0044cf30(int param_1,LPMSG msg)

{
  BOOL BVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
    BVar1 = IsDialogMessageA(*(HWND *)(param_1 + 0xa0),msg);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}


/* ==== 0044cf54 FUN_0044cf54 ==== */

bool FUN_0044cf54(int param_1,LPMSG msg)

{
  int iVar1;
  BOOL BVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 0x38);
  if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x217) == '\x02')) &&
      (*(int *)(DAT_004ac7d8 + 0x60) != 0)) &&
     (*(char *)(*(int *)(DAT_004ac7d8 + 0x60) + 0x217) == '\x01')) {
    BVar2 = TranslateMDISysAccel(*(HWND *)(iVar1 + 0x23c),msg);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}


/* ==== 0044cfa4 FUN_0044cfa4 ==== */

undefined4 FUN_0044cfa4(int param_1,int *param_2)

{
  int *piVar1;
  HWND pHVar2;
  HANDLE pvVar3;
  LRESULT LVar4;
  LONG LVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  if ((0xff < (uint)param_2[1]) && ((uint)param_2[1] < 0x109)) {
    pHVar2 = GetCapture();
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = (HWND)*param_2;
      piVar1 = *(int **)(param_1 + 0x38);
      if ((piVar1 == (int *)0x0) || (pHVar2 != (HWND)piVar1[0x8f])) {
        while( true ) {
          pvVar3 = FUN_0042b94c(pHVar2);
          if ((pvVar3 != (HANDLE)0x0) || (pHVar2 == (HWND)0x0)) break;
          pHVar2 = GetParent(pHVar2);
        }
        if (pHVar2 == (HWND)0x0) {
          pHVar2 = (HWND)*param_2;
        }
      }
      else {
        pHVar2 = (HWND)Controls_TWinControl_GetHandle(piVar1);
      }
      LVar4 = SendMessageA(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
      if (LVar4 != 0) {
        uVar6 = 1;
      }
    }
    else {
      LVar5 = GetWindowLongA(pHVar2,-6);
      if (LVar5 == DAT_004ac4dc) {
        LVar4 = SendMessageA(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (LVar4 != 0) {
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}


/* ==== 0044d05c FUN_0044d05c ==== */

undefined4 FUN_0044d05c(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2);
    if (cVar2 != '\0') {
      FUN_0044de34(param_1);
    }
  }
  return 0;
}


/* ==== 0044d08c FUN_0044d08c ==== */

undefined4 FUN_0044d08c(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;
  undefined3 uVar4;
  undefined4 extraout_ECX;
  uint local_14;
  
  local_14 = param_3 & 0xffffff00;
  iVar2 = param_1;
  if (*(short *)(param_1 + 0x102) != 0) {
    iVar2 = (**(code **)(param_1 + 0x100))(*(undefined4 *)(param_1 + 0x104),param_2,&local_14);
  }
  if ((char)local_14 == '\0') {
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0x38));
      BVar3 = IsWindowEnabled(hWnd);
      if (BVar3 != 0) {
        iVar2 = System__CallDynaInst(*(int **)(param_1 + 0x38),param_2,extraout_ECX);
        if ((char)iVar2 != '\0') goto LAB_0044d0e7;
      }
    }
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
LAB_0044d0e7:
    uVar4 = (undefined3)((uint)iVar2 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar4,uVar1);
}


/* ==== 0044d0f8 FUN_0044d0f8 ==== */

undefined4 FUN_0044d0f8(int param_1,LPMSG msg,uint param_3)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_10;
  
  uVar4 = 0;
  local_10 = param_3;
  BVar2 = PeekMessageA(msg,(HWND)0x0,0,0,1);
  if (BVar2 != 0) {
    uVar4 = 1;
    if (msg->message == 0x12) {
      *(undefined1 *)(param_1 + 0x8c) = 1;
    }
    else {
      local_10 = local_10 & 0xffffff00;
      if (*(short *)(param_1 + 0xc2) != 0) {
        (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),msg,&local_10);
      }
      uVar3 = FUN_0044d05c(param_1,msg);
      if (((char)uVar3 == '\0') && ((char)local_10 == '\0')) {
        bVar1 = FUN_0044cf54(param_1,msg);
        if (!bVar1) {
          uVar3 = FUN_0044cfa4(param_1,(int *)msg);
          if ((char)uVar3 == '\0') {
            bVar1 = FUN_0044cf30(param_1,msg);
            if (!bVar1) {
              TranslateMessage(msg);
              DispatchMessageA(msg);
            }
          }
        }
      }
    }
  }
  return uVar4;
}


/* ==== 0044d190 FUN_0044d190 ==== */

void FUN_0044d190(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint extraout_ECX;
  tagMSG tStack_20;
  
  do {
    uVar1 = FUN_0044d0f8(param_1,&tStack_20,param_3);
    param_3 = extraout_ECX;
  } while ((char)uVar1 != '\0');
  return;
}


/* ==== 0044d1a8 FUN_0044d1a8 ==== */

void FUN_0044d1a8(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  tagMSG tStack_20;
  
  uVar1 = FUN_0044d0f8(param_1,&tStack_20,param_3);
  if ((char)uVar1 == '\0') {
    FUN_0044d93c(param_1);
  }
  return;
}


/* ==== 0044d1cc FUN_0044d1cc ==== */

void FUN_0044d1cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x24),0xb020,0,(LPARAM)&param_4);
    }
  }
  else {
    FUN_00410290(*(undefined4 **)(param_1 + 0x98));
    puVar1 = (undefined4 *)System__GetMem(8);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    Classes_TList_Add(*(int **)(param_1 + 0x98),(int)puVar1);
  }
  return;
}


/* ==== 0044d228 FUN_0044d228 ==== */

void FUN_0044d228(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int j;
  int i_val;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x24),0xb020,1,(LPARAM)&param_4);
    }
  }
  else {
    i_val = *(int *)(*(int *)(param_1 + 0x98) + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x98),j);
        if ((*piVar1 == param_4) && (param_5 == piVar1[1])) {
          System__FreeMem((int)piVar1);
          Classes_TList_Delete(*(int **)(param_1 + 0x98),j);
          return;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0044d2a4 FUN_0044d2a4 ==== */

void FUN_0044d2a4(void)

{
  if (*(int *)PTR_DAT_004ab80c != 0) {
    (**(code **)PTR_DAT_004ab80c)();
  }
  return;
}


/* ==== 0044d2bc FUN_0044d2bc ==== */

void FUN_0044d2bc(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x44d2cf;
  piVar1 = (int *)(**(code **)(param_2 + -0xc))();
  *param_3 = piVar1;
  puStack_1c = &LAB_0044d2fa;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xffffffff,param_1);
  *in_FS_OFFSET = uStack_20;
  if (*(int *)(param_1 + 0x38) == 0) {
    puStack_18 = (undefined1 *)0x44d323;
    uVar2 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_00442fd4);
    if ((char)uVar2 != '\0') {
      puStack_18 = (undefined1 *)0x44d330;
      FUN_004349bc(piVar1);
      *(int **)(param_1 + 0x38) = piVar1;
    }
  }
  return;
}


/* ==== 0044d33c FUN_0044d33c ==== */

void FUN_0044d33c(int param_1)

{
  int *piVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar2;
  uint extraout_ECX_03;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x95) = 1;
  puStack_10 = &LAB_0044d3e6;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_004081b8(FUN_00444254);
  piVar1 = *(int **)(local_8 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*(int *)PTR_DAT_004ab86c == 3) {
      TForm_SetWindowState(piVar1,2);
      uVar2 = extraout_ECX_00;
      iVar3 = extraout_EDX;
    }
    else {
      iVar3 = *(int *)PTR_DAT_004ab86c + -7;
      uVar2 = extraout_ECX;
      if (iVar3 == 0) {
        *(undefined1 *)((int)piVar1 + 0x213) = 1;
      }
    }
    if (*(char *)(local_8 + 0x4b) != '\0') {
      if (*(char *)((int)*(int **)(local_8 + 0x38) + 0x213) == '\x01') {
        FUN_0044cc94(local_8);
        uVar2 = extraout_ECX_01;
        iVar3 = extraout_EDX_00;
      }
      else {
        TForm_SetVisible(*(int **)(local_8 + 0x38),CONCAT31((int3)((uint)iVar3 >> 8),1),uVar2);
        uVar2 = extraout_ECX_02;
        iVar3 = extraout_EDX_01;
      }
    }
    do {
      FUN_0044d1a8(local_8,iVar3,uVar2);
      uVar2 = extraout_ECX_03;
      iVar3 = extraout_EDX_02;
    } while (*(char *)(local_8 + 0x8c) == '\0');
  }
  *in_FS_OFFSET = uStack_14;
  *(undefined1 *)(local_8 + 0x95) = 0;
  return;
}


/* ==== 0044d3f0 FUN_0044d3f0 ==== */

void FUN_0044d3f0(void)

{
  char cVar1;
  
  cVar1 = FUN_0040c77c();
  if (cVar1 != '\0') {
    PostQuitMessage(0);
  }
  return;
}


/* ==== 0044d494 FUN_0044d494 ==== */

void FUN_0044d494(int param_1,LPCSTR text,LPCSTR caption,UINT type)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  tagRECT rect;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  HWND wnd;
  int message_box;
  int local_8;
  
  local_8 = param_1;
  wnd = GetActiveWindow();
  local_18 = (**(code **)PTR_DAT_004ab7ec)();
  local_1c = (**(code **)PTR_DAT_004ab7ec)();
  if (local_18 != local_1c) {
    local_44 = 0x28;
    (**(code **)PTR_DAT_004ab730)();
    GetWindowRect(*(HWND *)(local_8 + 0x24),&rect);
    iVar2 = local_34 - local_3c >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_34 - local_3c & 1U) != 0);
    }
    iVar3 = local_38 - local_40 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_38 - local_40 & 1U) != 0);
    }
    SetWindowPos(*(HWND *)(local_8 + 0x24),(HWND)0x0,iVar3 + local_40,iVar2 + local_3c,0,0,0x1d);
  }
  local_14 = (undefined4 *)FUN_004442dc(0);
  uVar1 = FUN_0044c4d4(local_8);
  if ((char)uVar1 != '\0') {
    type = type | 0x100000;
  }
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff84;
  message_box = MessageBoxA(*(HWND *)(local_8 + 0x24),text,caption,type);
  *in_FS_OFFSET = uVar1;
  if (local_18 != local_1c) {
    iVar2 = rect.bottom - rect.top >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((rect.bottom - rect.top & 1U) != 0);
    }
    iVar3 = rect.right - rect.left >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((rect.right - rect.left & 1U) != 0);
    }
    SetWindowPos(*(HWND *)(local_8 + 0x24),(HWND)0x0,iVar3 + rect.left,iVar2 + rect.top,0,0,0x1d);
  }
  FUN_00444390(local_14);
  SetActiveWindow(wnd);
  return;
}


/* ==== 0044d5ec FUN_0044d5ec ==== */

void FUN_0044d5ec(int param_1,int param_2)

{
  char *pcVar1;
  LPCSTR caption;
  LPCSTR text;
  UINT *in_FS_OFFSET;
  undefined1 uVar2;
  undefined1 uVar3;
  UINT type;
  UINT UStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined *local_10c;
  byte local_108 [256];
  undefined *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10c = (undefined *)0x0;
  local_8 = (undefined *)0x0;
  puStack_11c = &LAB_0044d6a7;
  UStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_120;
  System__LStrLAsg((int *)&local_8,*(int *)(param_2 + 4));
  uVar2 = 0;
  uVar3 = local_8 == (undefined *)0x0;
  if (!(bool)uVar3) {
    pcVar1 = FUN_00408920(local_8);
    FUN_00402d34((char *)local_108,pcVar1);
    FUN_00402b3c(local_108,&DAT_0044d6b4);
    if (!(bool)uVar2 && !(bool)uVar3) {
      System__LStrCat((int *)&local_8,(undefined4 *)&DAT_0044d6c0);
    }
  }
  type = 0x10;
  FUN_0044ce60(param_1,(int *)&local_10c);
  caption = System__LStrToPChar(local_10c);
  text = System__LStrToPChar(local_8);
  FUN_0044d494(param_1,text,caption,type);
  *in_FS_OFFSET = type;
  puStack_11c = &LAB_0044d6ae;
  UStack_120 = 0x44d69e;
  System__LStrClr((int *)&local_10c);
  UStack_120 = 0x44d6a6;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0044d6c4 FUN_0044d6c4 ==== */

uint FUN_0044d6c4(int param_1,ushort param_2,ULONG_PTR param_3)

{
  int *piVar1;
  bool bVar2;
  HWND pHVar3;
  LPCSTR pCVar4;
  BOOL BVar5;
  uint command;
  char local_10 [4];
  
  command = 0;
  local_10[0] = '\x01';
  piVar1 = *(int **)(DAT_004ac7d8 + 0x5c);
  if ((piVar1 == (int *)0x0) || (*(short *)((int)piVar1 + 0x292) == 0)) {
    if (*(short *)(param_1 + 0xca) != 0) {
      command = (**(code **)(param_1 + 200))
                          (*(undefined4 *)(param_1 + 0xcc),param_2,param_3,local_10);
    }
  }
  else {
    command = (*(code *)piVar1[0xa4])(piVar1[0xa5],param_2,param_3,local_10);
  }
  if (local_10[0] != '\0') {
    if (((piVar1 != (int *)0x0) &&
        (bVar2 = Controls_TWinControl_HandleAllocated((int)piVar1), bVar2)) && (piVar1[0x89] != 0))
    {
      pHVar3 = (HWND)Controls_TWinControl_GetHandle(piVar1);
      command = (uint)param_2;
      pCVar4 = System__LStrToPChar((undefined *)piVar1[0x89]);
      BVar5 = WinHelpA(pHVar3,pCVar4,command,param_3);
      return (uint)(BVar5 != 0);
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      if (*(char *)(param_1 + 0x94) == '\0') {
        PostMessageA(*(HWND *)(param_1 + 0x24),0xb01f,(uint)param_2,param_3);
      }
    }
    else {
      pHVar3 = *(HWND *)(param_1 + 0x24);
      if (*(int **)(param_1 + 0x38) != (int *)0x0) {
        pHVar3 = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0x38));
      }
      command = (uint)param_2;
      pCVar4 = System__LStrToPChar(*(undefined **)(param_1 + 0x40));
      BVar5 = WinHelpA(pHVar3,pCVar4,command,param_3);
      command = (uint)(BVar5 != 0);
    }
  }
  return command;
}


/* ==== 0044d7f0 FUN_0044d7f0 ==== */

void FUN_0044d7f0(int param_1,ULONG_PTR param_2)

{
  FUN_0044d6c4(param_1,1,param_2);
  return;
}


/* ==== 0044d7fc FUN_0044d7fc ==== */

void FUN_0044d7fc(int param_1,ushort param_2,ULONG_PTR param_3)

{
  FUN_0044d6c4(param_1,param_2,param_3);
  return;
}


/* ==== 0044d804 FUN_0044d804 ==== */

void FUN_0044d804(undefined4 param_1,int *param_2)

{
  FUN_004029f0(0,param_2);
  return;
}


/* ==== 0044d814 FUN_0044d814 ==== */

void FUN_0044d814(int param_1,char param_2)

{
  int iVar1;
  undefined3 in_register_00000009;
  
  if (param_2 != *(char *)(param_1 + 0x78)) {
    *(char *)(param_1 + 0x78) = param_2;
    if (param_2 == '\0') {
      System_TObject_Free(*(int **)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      iVar1 = (**(code **)(PTR_PTR_004aa930 + 0x2c))
                        (PTR_PTR_004aa930,CONCAT31(in_register_00000009,1),param_1);
      *(int *)(param_1 + 0x74) = iVar1;
      TGroupBox_SetColor(iVar1,*(int *)(param_1 + 0x4c));
    }
  }
  return;
}


/* ==== 0044d854 FUN_0044d854 ==== */

void FUN_0044d854(void)

{
  bool bVar1;
  int i_val;
  int *piVar2;
  HWND pHVar3;
  BOOL BVar4;
  int j;
  
  i_val = FUN_0044b19c(DAT_004ac7d8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0044b188(DAT_004ac7d8,j);
      bVar1 = Controls_TWinControl_HandleAllocated((int)piVar2);
      if (bVar1) {
        pHVar3 = (HWND)Controls_TWinControl_GetHandle(piVar2);
        BVar4 = IsWindowVisible(pHVar3);
        if (BVar4 != 0) {
          pHVar3 = (HWND)Controls_TWinControl_GetHandle(piVar2);
          BVar4 = IsWindowEnabled(pHVar3);
          if (BVar4 != 0) {
            (**(code **)(*piVar2 + 200))();
          }
        }
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0044d8b8 FUN_0044d8b8 ==== */

int * FUN_0044d8b8(int param_1)

{
  int *piVar1;
  HANDLE pvVar2;
  undefined4 extraout_EDX;
  tagPOINT tStack_14;
  
  GetCursorPos(&tStack_14);
  piVar1 = FUN_0042d198(&tStack_14,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
  if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 8) & 0x10) != 0)) {
    piVar1 = (int *)0x0;
  }
  pvVar2 = FUN_0042bbd4();
  if (piVar1 != *(int **)(param_1 + 0x3c)) {
    if (((*(int *)(param_1 + 0x3c) != 0) && (pvVar2 == (HANDLE)0x0)) ||
       ((pvVar2 != (HANDLE)0x0 && (pvVar2 == *(HANDLE *)(param_1 + 0x3c))))) {
      Controls_TControl_Perform(*(int *)(param_1 + 0x3c),0xb014,0,0);
    }
    *(int **)(param_1 + 0x3c) = piVar1;
    if (((*(int *)(param_1 + 0x3c) != 0) && (pvVar2 == (HANDLE)0x0)) ||
       ((pvVar2 != (HANDLE)0x0 && (pvVar2 == *(HANDLE *)(param_1 + 0x3c))))) {
      Controls_TControl_Perform(*(int *)(param_1 + 0x3c),0xb013,0,0);
    }
  }
  return piVar1;
}


/* ==== 0044d93c FUN_0044d93c ==== */

void FUN_0044d93c(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_14;
  uint *local_10;
  char local_9;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_28 = &LAB_0044da37;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x44d966;
  local_8 = param_1;
  piVar1 = FUN_0044d8b8(param_1);
  if ((*(char *)(local_8 + 0x78) != '\0') && (*(int *)(local_8 + 0x3c) == 0)) {
    puStack_30 = (undefined1 *)0x44d982;
    FUN_0044de34(local_8);
  }
  puStack_30 = (undefined1 *)0x44d98c;
  FUN_0044bc1c((int)piVar1,(int *)&local_14);
  puStack_30 = (undefined1 *)0x44d997;
  FUN_0042bb90(local_14,(int *)&local_10);
  puStack_30 = (undefined1 *)0x44d9a4;
  FUN_0044dae8(DAT_004ac7d4,local_10);
  local_9 = '\x01';
  puStack_34 = &LAB_0044d9f0;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if (*(short *)(local_8 + 0xda) != 0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(local_8 + 0xd8))(*(undefined4 *)(local_8 + 0xdc),local_8,&local_9);
  }
  if (local_9 != '\0') {
    FUN_0044d854();
  }
  *in_FS_OFFSET = uStack_38;
  if (local_9 != '\0') {
    puStack_30 = (undefined1 *)0x44da1c;
    WaitMessage();
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0044da3e;
  puStack_28 = (undefined1 *)0x44da36;
  System__LStrArrayClr((int *)&local_14,2);
  return;
}


/* ==== 0044da48 FUN_0044da48 ==== */

void FUN_0044da48(undefined4 param_1,uint param_2)

{
  int i_val;
  int iVar1;
  int j;
  undefined4 uVar2;
  
  i_val = FUN_0044b180(DAT_004ac7d8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar2 = 0;
      iVar1 = FUN_0044b16c(DAT_004ac7d8,j);
      Controls_TControl_Perform(iVar1,param_2 & 0xffff,0,uVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0044dae8 FUN_0044dae8 ==== */

void FUN_0044dae8(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 in_ZF;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x44dafc;
  System__LStrCmp((uint *)param_1[0x11],param_2);
  if (!(bool)in_ZF) {
    puStack_14 = (undefined1 *)0x44db08;
    System__LStrAsg(param_1 + 0x11,param_2);
    if (*(short *)((int)param_1 + 0xd2) == 0) {
      puStack_14 = (undefined1 *)0x44db30;
      piVar1 = THintAction_virtual_02c
                         ((int *)&PTR_TCustomAction_virtual_000_004298dc,'\x01',param_1);
      puStack_14 = (undefined1 *)0x44db3d;
      THintAction_SetHint(piVar1,param_2);
      puStack_18 = &LAB_0044db6d;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      System__CallDynaInst(piVar1,extraout_EDX,extraout_ECX);
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x44db74;
      puStack_18 = (undefined1 *)0x44db6c;
      System_TObject_Free(piVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x44db20;
    (*(code *)param_1[0x34])(param_1[0x35],param_1);
  }
  return;
}


/* ==== 0044db7c FUN_0044db7c ==== */

void FUN_0044db7c(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  BOOL BVar1;
  
  BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_4 + -4) + 0x24));
  if (((BVar1 != 0) == (bool)DAT_004aaa64) && (param_1 != DAT_004aaa64)) {
    SetWindowPos(*(HWND *)(*(int *)(param_4 + -4) + 0x24),(HWND)0x0,0,0,0,0,
                 (uint)*(ushort *)(&DAT_004aaa68 + (uint)param_1 * 2));
    DAT_004aaa64 = param_1;
  }
  return;
}


/* ==== 0044dbd8 FUN_0044dbd8 ==== */

void FUN_0044dbd8(int param_1)

{
  bool bVar1;
  int i_val;
  int *piVar2;
  HWND hWndParent;
  BOOL BVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar5;
  int j;
  HWND hWnd;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    i_val = FUN_0044b180(DAT_004ac7d8);
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar2 = (int *)FUN_0044b16c(DAT_004ac7d8,j);
        uVar4 = extraout_ECX_00;
        uVar5 = extraout_EDX_00;
        if (*(char *)((int)piVar2 + 0x47) != '\0') {
          if ((piVar2[0x59] == 0) ||
             (bVar1 = Controls_TWinControl_HandleAllocated((int)piVar2), uVar4 = extraout_ECX_01,
             uVar5 = extraout_EDX_01, bVar1)) {
LAB_0044dc3f:
            FUN_0044db7c(1,uVar5,uVar4,(int)&stack0xfffffffc);
            return;
          }
          hWnd = (HWND)piVar2[0x59];
          hWndParent = (HWND)Controls_TWinControl_GetHandle(piVar2);
          BVar3 = IsChild(hWndParent,hWnd);
          uVar4 = extraout_ECX_02;
          uVar5 = extraout_EDX_02;
          if (BVar3 == 0) goto LAB_0044dc3f;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_0044db7c(0,uVar5,uVar4,(int)&stack0xfffffffc);
  }
  return;
}


/* ==== 0044dc60 FUN_0044dc60 ==== */

void FUN_0044dc60(int param_1,UINT elapse,undefined1 param_3)

{
  UINT_PTR UVar1;
  
  FUN_0044dc98(param_1);
  UVar1 = SetTimer((HWND)0x0,0,elapse,FUN_0044bc6c);
  *(short *)(param_1 + 0x7a) = (short)UVar1;
  *(undefined1 *)(param_1 + 0x79) = param_3;
  if (*(short *)(param_1 + 0x7a) == 0) {
    FUN_0044de34(param_1);
  }
  return;
}


/* ==== 0044dc98 FUN_0044dc98 ==== */

void FUN_0044dc98(int param_1)

{
  if (*(ushort *)(param_1 + 0x7a) != 0) {
    KillTimer((HWND)0x0,(uint)*(ushort *)(param_1 + 0x7a));
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  return;
}


/* ==== 0044dcb8 FUN_0044dcb8 ==== */

void FUN_0044dcb8(int param_1,int *param_2,int param_3)

{
  POINT pt;
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 extraout_EDX;
  UINT elapse;
  byte local_2c;
  tagPOINT local_28;
  POINT point;
  int local_18 [2];
  
  FUN_004070e8(*(undefined4 *)(param_3 + 8),local_18);
  FUN_0042e2ac(param_2,local_18,&point.x);
  piVar1 = FUN_0042d198(&point,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
  iVar2 = thunk_FUN_0044bc51((int)piVar1);
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x89) == '\0')) {
    FUN_0044de34(param_1);
  }
  else {
    if (iVar2 == *(int *)(param_1 + 0x50)) {
      FUN_004070e8(*(undefined4 *)(param_3 + 8),local_18);
      FUN_0042e2ac(param_2,local_18,&point.x);
      pt.y = point.y;
      pt.x = point.x;
      BVar3 = PtInRect((RECT *)(param_1 + 0x54),pt);
      if (BVar3 != 0) {
        return;
      }
    }
    local_2c = *(byte *)(param_1 + 0x48);
    if (local_2c == 0) {
      elapse = *(UINT *)(param_1 + 0x68);
    }
    else {
      elapse = *(UINT *)(param_1 + 0x70);
    }
    Controls_TControl_Perform(iVar2,0xb041,(uint)local_2c,&elapse);
    if ((local_2c == 0) || (elapse != 0)) {
      FUN_0044de34(param_1);
      *(byte *)(param_1 + 0x48) = local_2c;
      *(int *)(param_1 + 0x50) = iVar2;
      FUN_0044dc60(param_1,elapse,0);
    }
    else {
      *(byte *)(param_1 + 0x48) = local_2c;
      *(int *)(param_1 + 0x50) = iVar2;
      GetCursorPos(&local_28);
      FUN_0044e014(param_1,&local_28.x);
    }
  }
  return;
}


