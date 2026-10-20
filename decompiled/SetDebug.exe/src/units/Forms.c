/* SetDebug.exe — units/Forms.pas: 326 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00424258 TForm.GetClientWidth ==== */

undefined4 TForm_GetClientWidth(int *param_1)

{
  undefined1 auStack_14 [8];
  undefined4 uStack_c;
  
  (**(code **)(*param_1 + 0x40))(param_1,auStack_14);
  return uStack_c;
}


/* ==== 00424270 FUN_00424270 ==== */

void FUN_00424270(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int aiStack_10 [2];
  
  uVar1 = TForm_GetClientHeight(param_1);
  FUN_0040e594(param_2,uVar1,aiStack_10);
  FUN_00424668(param_1,aiStack_10);
  return;
}


/* ==== 0042429c TForm.GetClientHeight ==== */

undefined4 TForm_GetClientHeight(int *param_1)

{
  undefined1 auStack_14 [12];
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0x40))(param_1,auStack_14);
  return uStack_8;
}


/* ==== 004242b4 FUN_004242b4 ==== */

void FUN_004242b4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int aiStack_10 [2];
  
  uVar1 = TForm_GetClientWidth(param_1);
  FUN_0040e594(uVar1,param_2,aiStack_10);
  FUN_00424668(param_1,aiStack_10);
  return;
}


/* ==== 004245a4 TScrollBox.SetAutoSize ==== */

void TScrollBox_SetAutoSize(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((cVar1 != (char)param_1[0x13]) && (*(char *)(param_1 + 0x13) = cVar1, cVar1 != '\0')) {
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 004292e8 TScrollBox.SetDockSite ==== */

void TScrollBox_SetDockSite(int *param_1,char param_2,undefined4 param_3)

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
  puStack_18 = &LAB_0042938f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != (char)param_1[0x51]) &&
     (*(char *)(param_1 + 0x51) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) {
    FUN_00422708((int)param_1,param_2,param_3);
    if (param_2 == '\0') {
      FUN_00402d14((int *)param_1[0x50]);
      param_1[0x50] = 0;
      FUN_004052f0(param_1 + 0x52);
    }
    else {
      uVar2 = extraout_ECX;
      if (param_1[0x50] == 0) {
        iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX);
        param_1[0x50] = iVar1;
        uVar2 = extraout_ECX_00;
      }
      FUN_00402ef0(param_1,&local_8,uVar2);
      FUN_00405308(param_1 + 0x52,local_8);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00429396;
  puStack_18 = (undefined1 *)0x42938e;
  FUN_004052f0((int *)&local_8);
  return;
}


/* ==== 0042a9d4 TForm.SetBorderWidth ==== */

void TForm_SetBorderWidth(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = param_2;
    FUN_00425780(param_1,0xb03b,0,0);
  }
  return;
}


/* ==== 0042a9f4 TScrollBox.SetCtl3D ==== */

void TScrollBox_SetCtl3D(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x138)) {
    *(char *)(param_1 + 0x138) = param_2;
    *(undefined1 *)(param_1 + 0x160) = 0;
    FUN_00425780(param_1,0xb010,0,0);
  }
  return;
}


/* ==== 0042aa24 TScrollBox.SetParentCtl3D ==== */

void TScrollBox_SetParentCtl3D(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x160)) &&
     (*(char *)(param_1 + 0x160) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb011,0,0);
  }
  return;
}


/* ==== 0042ab40 TForm.SetUseDockManager ==== */

void TForm_SetUseDockManager(int *param_1,byte param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_0042aba4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != *(byte *)(param_1 + 0x5f)) &&
     (*(byte *)(param_1 + 0x5f) = param_2, ((*(byte *)(param_1 + 8) & 0x10) == 0 & param_2) != 0)) {
    FUN_00402ef0(param_1,&local_8,param_3);
    FUN_00405308(param_1 + 0x52,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042abab;
  puStack_18 = (undefined1 *)0x42aba3;
  FUN_004052f0((int *)&local_8);
  return;
}


/* ==== 0042abb0 FUN_0042abb0 ==== */

bool FUN_0042abb0(int param_1)

{
  return *(int *)(param_1 + 0x14c) != 0;
}


/* ==== 0042abbc FUN_0042abbc ==== */

void FUN_0042abbc(int param_1)

{
  BOOL BVar1;
  uint window_long;
  HWND hWnd;
  int i_val;
  RECT *pRVar2;
  tagRECT *rect_2;
  tagRECT rect;
  WINDOWPLACEMENT windowplacement;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x14c));
  if (BVar1 == 0) {
    GetWindowRect(*(HWND *)(param_1 + 0x14c),&rect);
  }
  else {
    windowplacement.length = 0x2c;
    GetWindowPlacement(*(HWND *)(param_1 + 0x14c),&windowplacement);
    pRVar2 = &windowplacement.rcNormalPosition;
    rect_2 = &rect;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      rect_2->left = pRVar2->left;
      pRVar2 = (RECT *)&pRVar2->top;
      rect_2 = (tagRECT *)((int)rect_2 + 4);
    }
  }
  window_long = GetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10);
  if (((window_long & 0x40000000) != 0) &&
     (hWnd = (HWND)GetWindowLongA(*(HWND *)(param_1 + 0x14c),-8), hWnd != (HWND)0x0)) {
    ScreenToClient(hWnd,(LPPOINT)&rect);
    ScreenToClient(hWnd,(LPPOINT)&rect.right);
  }
  *(LONG *)(param_1 + 0x30) = rect.left;
  *(LONG *)(param_1 + 0x34) = rect.top;
  *(LONG *)(param_1 + 0x38) = rect.right - rect.left;
  *(LONG *)(param_1 + 0x3c) = rect.bottom - rect.top;
  FUN_00423f38(param_1);
  return;
}


/* ==== 00439858 FUN_00439858 ==== */

void FUN_00439858(HWND wnd,char param_2)

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


/* ==== 004398a4 FUN_004398a4 ==== */

void FUN_004398a4(void)

{
  if ((HWND)DAT_004477c4[9] != (HWND)0x0) {
    ShowOwnedPopups((HWND)DAT_004477c4[9],0);
  }
  FUN_00442688((int)DAT_004477c4,'\0');
  FUN_00413c68((int)DAT_004477c4);
  FUN_00413c10(DAT_004477c4);
  return;
}


/* ==== 0043992c FUN_0043992c ==== */

void FUN_0043992c(undefined4 param_1)

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
  
  uVar2 = DAT_00446874;
  uVar1 = DAT_00446868;
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  DAT_00446874 = 0;
  puStack_24 = &LAB_004399cf;
  local_28 = *in_FS_OFFSET;
  DAT_00446868 = param_1;
  *in_FS_OFFSET = &local_28;
  puStack_30 = &LAB_00439998;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  lParam = 0;
  lpfn = (WNDENUMPROC)&LAB_004398dc;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  DAT_00446874 = uVar2;
  DAT_00446868 = uVar1;
  return;
}


/* ==== 004399e0 FUN_004399e0 ==== */

void FUN_004399e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  
  while (param_1 != (undefined4 *)0x0) {
    BVar2 = IsWindow((HWND)param_1[1]);
    if (BVar2 != 0) {
      EnableWindow((HWND)param_1[1],-1);
    }
    puVar1 = (undefined4 *)*param_1;
    FUN_004026d0((int)param_1);
    param_1 = puVar1;
  }
  return;
}


/* ==== 00439a18 FUN_00439a18 ==== */

undefined4 FUN_00439a18(void)

{
  BOOL BVar1;
  uint window_long;
  HWND in_stack_00000004;
  
  if ((in_stack_00000004 != DAT_00446868) && (in_stack_00000004 != *(HWND *)(DAT_004477c4 + 0x24)))
  {
    BVar1 = IsWindowVisible(in_stack_00000004);
    if (BVar1 != 0) {
      BVar1 = IsWindowEnabled(in_stack_00000004);
      if (BVar1 != 0) {
        window_long = GetWindowLongA(in_stack_00000004,-0x14);
        if ((window_long & 8) == 0) {
          if (DAT_0044686c == (HWND)0x0) {
            DAT_0044686c = in_stack_00000004;
          }
        }
        else if (DAT_00446870 == (HWND)0x0) {
          DAT_00446870 = in_stack_00000004;
        }
      }
    }
  }
  return 0xffffffff;
}


/* ==== 00439a7c FUN_00439a7c ==== */

int FUN_00439a7c(undefined4 param_1)

{
  DWORD dwThreadId;
  code *lpfn;
  LPARAM lParam;
  
  DAT_0044686c = 0;
  DAT_00446870 = 0;
  lParam = 0;
  lpfn = FUN_00439a18;
  DAT_00446868 = param_1;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  if (DAT_0044686c != 0) {
    return DAT_0044686c;
  }
  return DAT_00446870;
}


/* ==== 00439ab8 FUN_00439ab8 ==== */

bool FUN_00439ab8(HWND wnd,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_00446864;
  SendMessageA(wnd,param_2 & 0xffff,0,0);
  return iVar1 == DAT_00446864;
}


/* ==== 00439ad8 FUN_00439ad8 ==== */

undefined4 FUN_00439ad8(void)

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


/* ==== 00439af8 FUN_00439af8 ==== */

undefined1 FUN_00439af8(void)

{
  DWORD dwThreadId;
  code *lpfn;
  HWND *lParam;
  HWND active_window;
  undefined1 local_4;
  
  active_window = GetActiveWindow();
  lParam = &active_window;
  local_4 = 0;
  lpfn = FUN_00439ad8;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
  return local_4;
}


/* ==== 00439ba4 FUN_00439ba4 ==== */

void FUN_00439ba4(void)

{
  return;
}


/* ==== 00439bc8 FUN_00439bc8 ==== */

int FUN_00439bc8(int param_1,int param_2)

{
  return param_2 - (param_1 + 5);
}


/* ==== 00439bd0 FUN_00439bd0 ==== */

undefined1 * FUN_00439bd0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  puVar1 = DAT_004477d0;
  if (DAT_004477d4 == (undefined1 *)0x0) {
    puVar1 = VirtualAlloc((LPVOID)0x0,0x1000,0x1000,0x40);
    *puVar1 = DAT_004477d0;
    FUN_004027d0((undefined4 *)&DAT_00446878,puVar1 + 1,2);
    iVar2 = FUN_00439bc8((int)puVar1 + 5,0x439ba8);
    *(int *)((int)puVar1 + 6) = iVar2;
    puVar3 = (undefined1 *)((int)puVar1 + 10);
    do {
      puVar4 = puVar3;
      *puVar4 = 0xe8;
      iVar2 = FUN_00439bc8((int)puVar4,(int)(puVar1 + 1));
      *(int *)(puVar4 + 1) = iVar2;
      *(undefined1 **)(puVar4 + 5) = DAT_004477d4;
      puVar3 = puVar4 + 0xd;
      DAT_004477d4 = puVar4;
    } while ((int)(puVar4 + 0xd) - (int)puVar1 < 0xffc);
  }
  DAT_004477d0 = puVar1;
  puVar3 = DAT_004477d4;
  puVar1 = (undefined4 *)(DAT_004477d4 + 5);
  DAT_004477d4 = (undefined1 *)*(undefined4 *)(DAT_004477d4 + 5);
  *puVar1 = in_stack_00000004;
  *(undefined4 *)(puVar3 + 9) = in_stack_00000008;
  return puVar3;
}


/* ==== 00439c68 FUN_00439c68 ==== */

void FUN_00439c68(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 5) = DAT_004477d4;
    DAT_004477d4 = param_1;
  }
  return;
}


/* ==== 00439c8c FUN_00439c8c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00439c8c(void)

{
  BOOL BVar1;
  HWND hWnd;
  undefined1 *dwNewLong;
  undefined4 in_stack_00000004;
  tagWNDCLASSA wndclass;
  
  _DAT_0044688c = DAT_004474d4;
  BVar1 = GetClassInfoA(DAT_004474d4,PTR_s_TPUtilWindow_004468a0,&wndclass);
  if ((BVar1 == 0) || (wndclass.lpfnWndProc != DefWindowProcA)) {
    if (BVar1 != 0) {
      UnregisterClassA(PTR_s_TPUtilWindow_004468a0,DAT_004474d4);
    }
    RegisterClassA((WNDCLASSA *)&DAT_0044687c);
  }
  hWnd = CreateWindowExA(0x80,PTR_s_TPUtilWindow_004468a0,"",0x80000000,0,0,0,0,(HWND)0x0,(HMENU)0x0
                         ,DAT_004474d4,(LPVOID)0x0);
  if (in_stack_00000004._2_2_ != 0) {
    dwNewLong = FUN_00439bd0();
    SetWindowLongA(hWnd,-4,(LONG)dwNewLong);
  }
  return hWnd;
}


/* ==== 00439d40 FUN_00439d40 ==== */

void FUN_00439d40(HWND wnd)

{
  code *window_long;
  
  window_long = (code *)GetWindowLongA(wnd,-4);
  DestroyWindow(wnd);
  if (window_long != DefWindowProcA) {
    FUN_00439c68((int)window_long);
  }
  return;
}


/* ==== 00439d68 FUN_00439d68 ==== */

byte FUN_00439d68(uint param_1)

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


/* ==== 00439dbc FUN_00439dbc ==== */

byte FUN_00439dbc(uint param_1)

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


/* ==== 00439df8 FUN_00439df8 ==== */

byte FUN_00439df8(int param_1)

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


/* ==== 00439e44 FUN_00439e44 ==== */

void FUN_00439e44(undefined4 param_1,int param_2)

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
  puStack_1c = &LAB_00439ea2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00437264(param_2,(int *)&local_8);
  pcVar1 = local_8;
  FUN_00403b60((int *)&local_c,param_1);
  FUN_00407a7c(local_c,pcVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00439ea9;
  puStack_1c = (undefined1 *)0x439ea1;
  FUN_004039dc((int *)&local_c,2);
  return;
}


/* ==== 00439eb4 FUN_00439eb4 ==== */

int * FUN_00439eb4(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  do {
    piVar2 = param_1;
    param_1 = (int *)piVar2[9];
  } while ((int *)piVar2[9] != (int *)0x0);
  uVar1 = FUN_00402e8c(piVar2,(int)&PTR_TWinControl_virtual_000_00438554);
  if ((char)uVar1 == '\0') {
    return (int *)0x0;
  }
  return piVar2;
}


/* ==== 00439edc FUN_00439edc ==== */

void FUN_00439edc(int *param_1)

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
  puStack_20 = &LAB_00439f4d;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  piVar1 = FUN_00439eb4(param_1);
  if (piVar1 == (int *)0x0) {
    local_c = param_1[2];
    local_8 = 0xb;
    piVar1 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00405298((undefined4 *)PTR_PTR_00446ca8,(int *)&local_10);
    uVar2 = FUN_0040a974((int)&DAT_0040d94c,'\x01',local_10,in_stack_ffffffd4,piVar1);
    FUN_0040346c(uVar2);
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_00439f54;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 00439f5c FUN_00439f5c ==== */

int * FUN_00439f5c(int *param_1,char param_2,int param_3,undefined1 param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
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
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00439fec TControlScrollBar.virtual_008 ==== */

void TControlScrollBar_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_0043753c);
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


/* ==== 0043a03c FUN_0043a03c ==== */

void FUN_0043a03c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = FUN_0043a1f4(param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_00424dec(*(int *)(param_1 + 4));
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


/* ==== 0043a074 FUN_0043a074 ==== */

void FUN_0043a074(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x47) != '\0') {
    cVar1 = *(char *)(param_1 + 0x4b);
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      if ((*(char *)(param_1 + 0x4b) == '\x03') || ((*(byte *)(param_1 + 0x51) & 5) == 1)) {
        iVar2 = FUN_0041dda4(*(int *)(param_4 + -4),
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


/* ==== 0043a0e0 FUN_0043a0e0 ==== */

void FUN_0043a0e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x47) != '\0') {
    if (*(byte *)(param_1 + 0x4b) < 2) {
      if ((*(char *)(param_1 + 0x4b) == '\x01') || ((*(byte *)(param_1 + 0x51) & 10) == 2)) {
        iVar1 = FUN_0041dda4(*(int *)(param_4 + -4),
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


/* ==== 0043a148 FUN_0043a148 ==== */

void FUN_0043a148(int param_1)

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
      FUN_0043a87c(param_1,0);
    }
    else {
      i_val = FUN_0042781c(*(int *)(param_1 + 4));
      if (-1 < i_val + -1) {
        j = 0;
        do {
          if (*(char *)(param_1 + 0x18) == '\0') {
            puVar3 = &stack0xfffffffc;
            iVar2 = FUN_004277e0(*(int *)(param_1 + 4),j);
            FUN_0043a074(iVar2,extraout_EDX,extraout_ECX,(int)puVar3);
          }
          else {
            puVar3 = &stack0xfffffffc;
            iVar2 = FUN_004277e0(*(int *)(param_1 + 4),j);
            FUN_0043a0e0(iVar2,extraout_EDX_00,extraout_ECX_00,(int)puVar3);
          }
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
      FUN_0043a87c(param_1,(uint)*(ushort *)(param_1 + 0x1a));
    }
  }
  return;
}


/* ==== 0043a1f4 FUN_0043a1f4 ==== */

undefined4 FUN_0043a1f4(int param_1)

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
    hWnd = (HWND)FUN_0042a8b4(*(int **)(param_1 + 4));
    window_long = GetWindowLongA(hWnd,nIndex);
    if ((window_long & uVar1) != 0) {
      return CONCAT31((int3)(window_long >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043a22c FUN_0043a22c ==== */

bool FUN_0043a22c(short param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  hWnd = (HWND)FUN_0042a8b4(*(int **)(*(int *)(param_4 + -4) + 4));
  window_long = GetWindowLongA(hWnd,nIndex);
  return (window_long & uVar1) != 0;
}


/* ==== 0043a260 FUN_0043a260 ==== */

int FUN_0043a260(short param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(param_4 + -5) == '\0') {
    if ((*(char *)(param_4 + -6) != '\0') &&
       (iVar1 = param_4, bVar2 = FUN_0043a22c(param_1,param_2,param_3,param_4), param_3 = iVar1,
       param_2 = extraout_EDX, !bVar2)) {
      iVar3 = (**(code **)PTR_DAT_00446b78)();
      return -(iVar3 - *(int *)(param_4 + -0xc));
    }
    if ((*(char *)(param_4 + -6) == '\0') &&
       (bVar2 = FUN_0043a22c(param_1,param_2,param_3,param_4), bVar2)) {
      iVar3 = (**(code **)PTR_DAT_00446b78)();
      iVar3 = iVar3 - *(int *)(param_4 + -0xc);
    }
  }
  return iVar3;
}


/* ==== 0043a2dc FUN_0043a2dc ==== */

int FUN_0043a2dc(int param_1)

{
  HWND hWnd;
  int iVar1;
  int extraout_ECX;
  undefined2 extraout_var;
  int index_val;
  
  index_val = -0x10;
  hWnd = (HWND)FUN_0042a8b4(*(int **)(param_1 + 4));
  GetWindowLongA(hWnd,index_val);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar1 = FUN_0043a260(0,CONCAT22(extraout_var,0x15),extraout_ECX,(int)&stack0xfffffffc);
    index_val = TForm_GetClientHeight(*(int **)(param_1 + 4));
    iVar1 = iVar1 + index_val;
  }
  else {
    iVar1 = FUN_0043a260(1,CONCAT22(extraout_var,0x14),extraout_ECX,(int)&stack0xfffffffc);
    index_val = TForm_GetClientWidth(*(int **)(param_1 + 4));
    iVar1 = iVar1 + index_val;
  }
  return iVar1;
}


/* ==== 0043a35c FUN_0043a35c ==== */

bool FUN_0043a35c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043a2dc(param_1);
  return iVar1 < *(int *)(param_1 + 0x10);
}


/* ==== 0043a374 FUN_0043a374 ==== */

int FUN_0043a374(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int local_8;
  
  sVar1 = *(short *)(*(int *)(in_stack_00000004 + -8) + 6);
  FUN_0042a8b4(*(int **)(*(int *)(in_stack_00000004 + -4) + 4));
  iVar2 = (**(code **)PTR_DAT_00446a98)();
  iVar3 = (int)sVar1;
  if (iVar2 != 0) {
    iVar3 = local_8;
  }
  return iVar3;
}


/* ==== 0043a3d4 FUN_0043a3d4 ==== */

uint FUN_0043a3d4(uint param_1,int param_2)

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
      i_val = FUN_0043a2dc(param_1);
      uVar3 = TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc) - i_val);
      break;
    case 3:
      i_val = FUN_0043a2dc(param_1);
      uVar3 = TControlScrollBar_SetPosition(param_1,i_val + *(int *)(param_1 + 0xc));
      break;
    case 4:
      if (*(int *)(param_1 + 0x14) < 0x8000) {
        uVar3 = TControlScrollBar_SetPosition(param_1,(int)*(short *)(param_2 + 6));
      }
      else {
        i_val = FUN_0043a374();
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
          i_val = FUN_0043a374();
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
      iVar4 = FUN_0040697c();
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


/* ==== 0043a6cc TControlScrollBar.SetButtonSize ==== */

void TControlScrollBar_SetButtonSize(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x24)) {
    iVar1 = param_2;
    if (param_2 == 0) {
      iVar1 = (**(code **)PTR_DAT_00446b78)();
    }
    *(int *)(param_1 + 0x24) = iVar1;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_0043ad98(*(int *)(param_1 + 4));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}


/* ==== 0043a710 TControlScrollBar.SetColor ==== */

void TControlScrollBar_SetColor(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = param_2;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_0043ad98(*(int *)(param_1 + 4));
  }
  return;
}


/* ==== 0043a72c TControlScrollBar.SetParentColor ==== */

void TControlScrollBar_SetParentColor(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x2c)) &&
     (*(char *)(param_1 + 0x2c) = param_2, param_2 != '\0')) {
    TControlScrollBar_SetColor(param_1,-0x7fffffec);
  }
  return;
}


/* ==== 0043a744 TControlScrollBar.SetPosition ==== */

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
        FUN_0042a4ac(*(int **)(param_1 + 4),iVar1 - iVar3,0);
      }
      else {
        FUN_0042a4ac(*(int **)(param_1 + 4),0,iVar1 - iVar3);
      }
      if ((((*(byte *)(*(int **)(param_1 + 4) + 8) & 0x10) != 0) &&
          (piVar2 = FUN_00439eb4(*(int **)(param_1 + 4)), piVar2 != (int *)0x0)) &&
         (piVar2[0x8e] != 0)) {
        (**(code **)(*(int *)piVar2[0x8e] + 0xc))();
      }
    }
    FUN_0042a8b4(*(int **)(param_1 + 4));
    iVar3 = (**(code **)PTR_DAT_00446bd8)();
    if (iVar3 != *(int *)(param_1 + 0xc)) {
      FUN_0042a8b4(*(int **)(param_1 + 4));
      (**(code **)PTR_DAT_00446d74)();
    }
  }
  else {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return;
}


/* ==== 0043a808 TControlScrollBar.SetSize ==== */

void TControlScrollBar_SetSize(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x30)) {
    iVar1 = param_2;
    if (param_2 == 0) {
      iVar1 = (**(code **)PTR_DAT_00446b78)();
    }
    *(int *)(param_1 + 0x30) = iVar1;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_0043ad98(*(int *)(param_1 + 4));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}


/* ==== 0043a84c TControlScrollBar.SetStyle ==== */

void TControlScrollBar_SetStyle(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x34)) {
    *(char *)(param_1 + 0x34) = param_2;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_0043ad98(*(int *)(param_1 + 4));
  }
  return;
}


/* ==== 0043a864 TControlScrollBar.SetThumbSize ==== */

void TControlScrollBar_SetThumbSize(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_0043ad98(*(int *)(param_1 + 4));
  }
  return;
}


/* ==== 0043a87c FUN_0043a87c ==== */

void FUN_0043a87c(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_0043ad98(*(int *)(param_1 + 4));
  return;
}


/* ==== 0043a894 TControlScrollBar.SetRange ==== */

void TControlScrollBar_SetRange(int param_1,int param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  FUN_0043a87c(param_1,param_2);
  return;
}


/* ==== 0043a8b4 TControlScrollBar.SetVisible ==== */

void TControlScrollBar_SetVisible(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  FUN_0043ad98(*(int *)(param_1 + 4));
  return;
}


/* ==== 0043a8c0 FUN_0043a8c0 ==== */

void FUN_0043a8c0(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  piVar1 = (int *)(in_stack_00000004 + -4);
  FUN_0042a8b4(*(int **)(*piVar1 + 4));
  FUN_0041de60();
  if (0 < *(int *)(*piVar1 + 0x24)) {
    FUN_0042a8b4(*(int **)(*piVar1 + 4));
    FUN_0041de60();
  }
  if (0 < *(int *)(*piVar1 + 0x38)) {
    FUN_0042a8b4(*(int **)(*piVar1 + 4));
    FUN_0041de60();
  }
  if (0 < *(int *)(*piVar1 + 0x30)) {
    FUN_0042a8b4(*(int **)(*piVar1 + 4));
    FUN_0041de60();
  }
  FUN_004160cc(*(uint *)(*piVar1 + 0x28));
  FUN_0042a8b4(*(int **)(*piVar1 + 4));
  FUN_0041de60();
  return;
}


/* ==== 0043a9c8 FUN_0043a9c8 ==== */

void FUN_0043a9c8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = FUN_0043a2dc(param_1);
    iVar1 = *(int *)(param_1 + 0x10) - iVar1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  FUN_0043a2dc(param_1);
  FUN_0043a8c0();
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_0042a8b4(*(int **)(param_1 + 4));
  (**(code **)PTR_DAT_00446c74)();
  TControlScrollBar_SetPosition(param_1,*(int *)(param_1 + 0xc));
  iVar1 = FUN_0043a2dc(param_1);
  uVar2 = (iVar1 * 9) / 10;
  *(short *)(param_1 + 10) = (short)uVar2;
  if (*(char *)(param_1 + 0x1f) != '\0') {
    *(short *)(param_1 + 8) = (short)((ulonglong)(uVar2 & 0xffff) / 10);
  }
  return;
}


/* ==== 0043aae0 TScrollingWinControl.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  piVar1 = FUN_00439f5c((int *)&PTR_TPersistent_virtual_000_0043753c,'\x01',(int)param_1,0);
  param_1[0x7c] = (int)piVar1;
  piVar1 = FUN_00439f5c((int *)&PTR_TPersistent_virtual_000_0043753c,'\x01',(int)param_1,1);
  param_1[0x7d] = (int)piVar1;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0043ab48 TScrollingWinControl.Destroy ==== */

void TScrollingWinControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[0x7c]);
  FUN_00402d14((int *)piVar1[0x7d]);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0043ab84 TScrollingWinControl.virtual_090 ==== */

void TScrollingWinControl_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


/* ==== 0043ab94 TScrollingWinControl.virtual_098 ==== */

void TScrollingWinControl_virtual_098(int *param_1)

{
  TWinControl_virtual_098(param_1);
  if (PTR_DAT_00446da0[9] == '\0') {
    FUN_0042a8b4(param_1);
    FUN_0041de94();
  }
  FUN_0043ad98((int)param_1);
  return;
}


/* ==== 0043abc0 TScrollingWinControl.virtual_088 ==== */

void TScrollingWinControl_virtual_088(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0043ad18((int)param_1);
  TWinControl_virtual_088(param_1,param_2,param_3);
  return;
}


/* ==== 0043abe0 TScrollingWinControl.virtual_0b4 ==== */

undefined4 TScrollingWinControl_virtual_0b4(int param_1)

{
  if ((*(char *)(param_1 + 0x4c) == '\0') &&
     ((*(char *)(param_1 + 0x144) == '\0' || (*(char *)(param_1 + 0x17c) == '\0')))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 0043ac00 TScrollingWinControl.dynamic_ffc7 ==== */

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
  
  puStack_24 = (undefined1 *)0x43ac18;
  piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
  puStack_28 = &LAB_0043ad08;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  local_c = TForm_GetClientWidth(param_1);
  i_val = param_1[0x7c];
  uVar3 = FUN_0043a1f4(i_val);
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
  i_val = FUN_0042781c((int)param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar4 = (int *)FUN_004277e0((int)param_1,j);
      iVar5 = FUN_004277e0((int)param_1,j);
      FUN_0040eec8(piVar2,iVar5);
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
      iVar5 = FUN_0040f024(piVar2,j);
      FUN_00425780(iVar5,0xb03e,0,uVar3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if (bVar1) {
    FUN_0043a03c(param_1[0x7c]);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0043ad0f;
  puStack_28 = (undefined1 *)0x43ad07;
  FUN_00402d14(piVar2);
  return;
}


/* ==== 0043ad18 FUN_0043ad18 ==== */

void FUN_0043ad18(int param_1)

{
  if (*(int *)(param_1 + 0x1fc) < 1) {
    FUN_0043a148(*(int *)(param_1 + 0x1f0));
    FUN_0043a148(*(int *)(param_1 + 500));
  }
  return;
}


/* ==== 0043ad3c TScrollBox.SetAutoScroll ==== */

void TScrollBox_SetAutoScroll(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    if (param_2 == '\0') {
      TControlScrollBar_SetRange(*(int *)(param_1 + 0x1f0),0);
      TControlScrollBar_SetRange(*(int *)(param_1 + 500),0);
    }
    else {
      FUN_0043ad18(param_1);
    }
  }
  return;
}


/* ==== 0043ad78 TScrollingWinControl.SetHorzScrollBar ==== */

void TScrollingWinControl_SetHorzScrollBar(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1f0) + 8))();
  return;
}


/* ==== 0043ad88 TScrollingWinControl.SetVertScrollBar ==== */

void TScrollingWinControl_SetVertScrollBar(int param_1)

{
  (**(code **)(**(int **)(param_1 + 500) + 8))();
  return;
}


/* ==== 0043ad98 FUN_0043ad98 ==== */

void FUN_0043ad98(int param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x200) == '\0') {
    puStack_c = (undefined1 *)0x43adb7;
    local_8 = param_1;
    bVar1 = FUN_0042abb0(param_1);
    if (bVar1) {
      puStack_10 = &LAB_0043ae83;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 1;
      puStack_c = &stack0xfffffffc;
      bVar1 = FUN_0043a35c(*(int *)(local_8 + 500));
      if (bVar1) {
        FUN_0043a9c8(*(int *)(local_8 + 0x1f0));
        FUN_0043a9c8(*(int *)(local_8 + 500));
      }
      else {
        bVar1 = FUN_0043a35c(*(int *)(local_8 + 0x1f0));
        if (bVar1) {
          FUN_0043a9c8(*(int *)(local_8 + 500));
          FUN_0043a9c8(*(int *)(local_8 + 0x1f0));
        }
        else {
          FUN_0043a9c8(*(int *)(local_8 + 500));
          FUN_0043a9c8(*(int *)(local_8 + 0x1f0));
        }
      }
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 0;
      return;
    }
  }
  return;
}


/* ==== 0043ae90 TScrollingWinControl.virtual_0b8 ==== */

void TScrollingWinControl_virtual_0b8(int *param_1,int *param_2)

{
  if (((param_2 != (int *)0x0) && ((*(byte *)(param_2 + 8) & 1) == 0)) &&
     ((*(byte *)(param_1 + 8) & 1) == 0)) {
    FUN_0043aea8(param_1,param_2);
  }
  return;
}


/* ==== 0043aea8 FUN_0043aea8 ==== */

void FUN_0043aea8(int *param_1,int *param_2)

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
    FUN_0042436c(param_2,&local_30,aiStack_18);
    FUN_00424398(param_1,aiStack_18,&iStack_20);
    local_30 = iStack_20;
    local_2c = iStack_1c;
    FUN_0042436c(param_2,&local_28,aiStack_18);
    FUN_00424398(param_1,aiStack_18,&iStack_20);
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


/* ==== 0043affc FUN_0043affc ==== */

void FUN_0043affc(int param_1,int numerator,int denominator)

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


/* ==== 0043b0a0 TScrollingWinControl.dynamic_ffed ==== */

void TScrollingWinControl_dynamic_ffed(int *param_1,int numerator,int param_3)

{
  FUN_0043affc((int)param_1,numerator,param_3);
  TWinControl_dynamic_ffed(param_1,numerator,param_3);
  return;
}


/* ==== 0043b0c4 TScrollingWinControl.virtual_0bc ==== */

void TScrollingWinControl_virtual_0bc(void)

{
  return;
}


/* ==== 0043b0c8 TScrollingWinControl.WMSize ==== */

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
  puStack_14 = &LAB_0043b132;
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


/* ==== 0043b1a4 TScrollingWinControl.WMHScroll ==== */

void TScrollingWinControl_WMHScroll(int *param_1,int *param_2)

{
  if ((param_2[2] == 0) && (*(char *)(param_1[0x7c] + 0x1c) != '\0')) {
    FUN_0043a3d4(param_1[0x7c],(int)param_2);
    return;
  }
  TWinControl_WMHScroll(param_1,param_2);
  return;
}


/* ==== 0043b1c8 TScrollingWinControl.WMVScroll ==== */

void TScrollingWinControl_WMVScroll(int *param_1,int *param_2)

{
  if ((param_2[2] == 0) && (*(char *)(param_1[0x7d] + 0x1c) != '\0')) {
    FUN_0043a3d4(param_1[0x7d],(int)param_2);
    return;
  }
  TWinControl_WMVScroll(param_1,param_2);
  return;
}


/* ==== 0043b1ec TScrollingWinControl.virtual_084 ==== */

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
  iVar1 = FUN_0041dda4(i_val,*(int *)(param_1[0x7d] + 0x10));
  iVar2 = TForm_GetClientWidth(param_1);
  i_val = param_1[0x7c];
  iVar2 = FUN_0041dda4(*(int *)(i_val + 0x10),iVar2);
  FUN_0040e5c8(-*(int *)(i_val + 0xc),-*(int *)(param_1[0x7d] + 0xc),iVar2,piVar3,iVar1);
  piVar3 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *param_2 = *piVar3;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    param_2 = param_2 + (uint)bVar4 * -2 + 1;
  }
  TWinControl_virtual_084();
  return;
}


/* ==== 0043b260 TScrollingWinControl.CMBiDiModeChanged ==== */

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
  puStack_18 = &LAB_0043b2c1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_virtual_000_00437a18);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)(local_c + 4) = 1;
  }
  TWinControl_CMBiDiModeChanged(local_8,local_c);
  *in_FS_OFFSET = uStack_1c;
  *(undefined4 *)(local_c + 4) = local_10;
  return;
}


/* ==== 0043b2f0 TScrollBox.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TScrollingWinControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xab;
  TControl_SetWidth(param_1,0xb9);
  TControl_SetHeight(param_1,0x29);
  *(undefined1 *)(param_1 + 0x82) = 1;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0043b350 TScrollBox.virtual_090 ==== */

void TScrollBox_virtual_090(int *param_1,int *param_2)

{
  TScrollingWinControl_virtual_090(param_1,param_2);
  param_2[1] = param_2[1] | *(uint *)(&DAT_004468e8 + (uint)*(byte *)(param_1 + 0x82) * 4);
  if (((*PTR_DAT_00446be0 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x82] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  return;
}


/* ==== 0043b3a0 TScrollBox.SetBorderStyle ==== */

void TScrollBox_SetBorderStyle(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x208)) {
    *(char *)(param_1 + 0x208) = param_2;
    FUN_00427e64(param_1);
  }
  return;
}


/* ==== 0043b3b4 TScrollBox.WMNCHitTest ==== */

void TScrollBox_WMNCHitTest(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 0043b3bc TScrollBox.CMCtl3DChanged ==== */

void TScrollBox_CMCtl3DChanged(int param_1,undefined4 param_2)

{
  if ((*PTR_DAT_00446be0 != '\0') && (*(char *)(param_1 + 0x208) == '\x01')) {
    FUN_00427e64(param_1);
  }
  TWinControl_CMCtl3DChanged(param_1,param_2);
  return;
}


/* ==== 0043b3e8 TCustomForm.virtual_02c ==== */

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
    puStack_130 = (undefined1 *)0x43b406;
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_134 = &LAB_0043b54c;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_13c = (undefined1 *)0x43b428;
  puStack_130 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0040bc08(*(int *)PTR_DAT_00446d7c);
  puStack_140 = &LAB_0043b52c;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  uStack_148 = 0;
  puStack_14c = (undefined1 *)0x43b447;
  puStack_13c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xcc))(local_8,0,param_3);
  puStack_14c = (undefined1 *)0x43b44f;
  ppuVar2 = (undefined **)FUN_00402c5c(local_8);
  if ((ppuVar2 != &PTR_TWinControl_virtual_000_00438838) && ((*(byte *)(local_8 + 8) & 0x10) == 0))
  {
    *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 1;
    puStack_150 = &LAB_0043b4f4;
    uStack_154 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_154;
    puStack_14c = &stack0xfffffffc;
    cVar1 = FUN_0040ede4(local_8,&PTR_TWinControl_virtual_000_00438838);
    if (cVar1 == '\0') {
      FUN_00402c60(*local_8,local_114);
      local_14 = local_114;
      local_10 = 4;
      ppbVar4 = &local_14;
      in_stack_fffffea4 = 0;
      FUN_00405298((undefined4 *)PTR_PTR_00446bf4,(int *)&local_118);
      uVar3 = FUN_0040a974((int)&DAT_0040d728,'\x01',local_118,in_stack_fffffea4,ppbVar4);
      FUN_0040346c(uVar3);
    }
    *in_FS_OFFSET = in_stack_fffffea4;
    *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) & 0xfe;
    return;
  }
  *in_FS_OFFSET = uStack_148;
  puStack_140 = &LAB_0043b533;
  uStack_144 = 0x43b52b;
  FUN_0040bc54(*(int *)PTR_DAT_00446d7c);
  return;
}


/* ==== 0043b574 TCustomForm.AfterConstruction ==== */

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
    FUN_00402ef0(param_1,param_2,param_3);
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xdf;
  }
  return;
}


/* ==== 0043b5ac TCustomForm.virtual_0cc ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
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
  TLabel_SetParentColor((int)param_1,'\0');
  TLabel_SetParentFont((int)param_1,'\0');
  TScrollBox_SetCtl3D((int)param_1,'\x01');
  *(undefined1 *)(param_1 + 0x84) = 7;
  *(undefined1 *)((int)param_1 + 0x211) = 2;
  *(undefined1 *)((int)param_1 + 0x213) = 0;
  *(undefined1 *)((int)param_1 + 0x219) = 3;
  piVar1 = TIcon_virtual_00c((int *)&LAB_0041585c,'\x01',extraout_ECX_01);
  param_1[0x8a] = (int)piVar1;
  uVar5 = 0x31;
  uVar2 = (**(code **)PTR_DAT_00446b78)();
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2,*piVar1,uVar5);
  uVar2 = (**(code **)PTR_DAT_00446b78)();
  (**(code **)(*(int *)param_1[0x8a] + 0x34))((int *)param_1[0x8a],uVar2);
  iVar3 = param_1[0x8a];
  *(int **)(iVar3 + 0xc) = param_1;
  *(code **)(iVar3 + 8) = FUN_0043be4c;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  piVar1 = FUN_00416eac((int *)&PTR_TPersistent_virtual_000_00420138,'\x01',extraout_ECX_02);
  param_1[0x88] = (int)piVar1;
  FUN_00423588(piVar1,(int)param_1);
  param_1[0x91] = *(int *)(DAT_004477c8 + 0x34);
  *(undefined1 *)((int)param_1 + 0x21d) = 1;
  iVar3 = FUN_00402c5c(param_1);
  param_1[0x29] = iVar3;
  FUN_00440268(DAT_004477c8,param_1);
  if (cVar4 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = 0x32;
  }
  return param_1;
}


/* ==== 0043b70c TCustomForm.BeforeDestruction ==== */

void TCustomForm_BeforeDestruction(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  
  FUN_0040bc08(*(int *)PTR_DAT_00446d7c);
  FUN_00413c68((int)param_1);
  FUN_0040f164(*(int **)(DAT_004477c8 + 0x70),(int)param_1);
  FUN_004115b8((int)param_1,(char *)0x0);
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if (param_1[0x93] != 0) {
    (**(code **)(*(int *)param_1[0x93] + 0xc))();
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  if (*(char *)((int)param_1 + 0x217) != '\x01') {
    FUN_0043f2c0(param_1,uVar2,uVar1);
  }
  if ((char)param_1[0x87] == '\0') {
    (**(code **)(*param_1 + 0xc4))();
  }
  return;
}


/* ==== 0043b774 TCustomForm.Destroy ==== */

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
  
  puStack_10 = (undefined1 *)0x43b77f;
  local_8 = FUN_00403074(param_1,param_2);
  local_9 = extraout_DL;
  if ((*(byte *)(local_8 + 8) & 8) == 0) {
    puStack_10 = (undefined1 *)0x43b79a;
    FUN_0040bc08(*(int *)PTR_DAT_00446d7c);
  }
  puStack_14 = &LAB_0043b83e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if ((char)local_8[0x87] != '\0') {
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc4))();
  }
  FUN_0043dd68((int)local_8,'\0');
  bVar1 = FUN_0042abb0((int)local_8);
  if (bVar1) {
    (**(code **)(*local_8 + 0x9c))();
  }
  FUN_004402a0(DAT_004477c8,(int)local_8);
  FUN_00402d14((int *)local_8[0x88]);
  FUN_00402d14((int *)local_8[0x8a]);
  FUN_0040bc78(local_8 + 0xb2);
  TScrollingWinControl_Destroy(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0043b845;
  puStack_14 = (undefined1 *)0x43b83d;
  FUN_0040bc54(*(int *)PTR_DAT_00446d7c);
  return;
}


/* ==== 0043b858 TCustomForm.virtual_0c0 ==== */

void TCustomForm_virtual_0c0(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)((int)param_1 + 0x2ba) != 0) {
    puStack_1c = &LAB_0043b899;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (*(code *)param_1[0xae])(param_1[0xaf],param_1);
    *in_FS_OFFSET = uStack_20;
    param_3 = puStack_18;
    param_2 = uStack_20;
  }
  if ((*(byte *)(param_1 + 0xb3) & 2) != 0) {
    puStack_18 = (undefined1 *)0x43b8c6;
    TForm_SetVisible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  }
  return;
}


/* ==== 0043b8cc TCustomForm.virtual_0c4 ==== */

void TCustomForm_virtual_0c4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x2c2) != 0) {
    puStack_1c = &LAB_0043b90d;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x2c0))(*(undefined4 *)(param_1 + 0x2c4),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


/* ==== 0043b92c TCustomForm.virtual_00c ==== */

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
    cVar2 = FUN_00402ef0(piVar1,extraout_EDX,extraout_ECX);
    if (cVar2 != '\0') {
      TForm_SetActiveControl(param_1,piVar1,extraout_ECX_00);
    }
  }
  return;
}


/* ==== 0043b968 TCustomForm.virtual_010 ==== */

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
    uVar2 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_0042f174);
    if ((char)uVar2 == '\0') {
      if (((((*(byte *)(param_1 + 8) & 1) == 0) && (param_1[0x8c] == 0)) &&
          (param_1 == (int *)param_2[1])) &&
         (uVar2 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_00431b18),
         (char)uVar2 != '\0')) {
        TForm_SetMenu(unaff_EBP,unaff_EDI);
      }
    }
    else {
      if (param_1[0xb2] == 0) {
        iVar3 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
        param_1[0xb2] = iVar3;
      }
      FUN_0040eec8((int *)param_1[0xb2],(int)param_2);
    }
  }
  else if (cVar5 == '\x01') {
    piVar1 = (int *)param_1[0xb2];
    uVar2 = extraout_ECX;
    if ((piVar1 == (int *)0x0) ||
       (uVar4 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_0042f174),
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
      FUN_0040f164(piVar1,(int)param_2);
    }
  }
  if (param_1[0x8e] != 0) {
    (**(code **)(*(int *)param_1[0x8e] + 0x10))((int *)param_1[0x8e],param_2,param_3);
  }
  return;
}


/* ==== 0043ba74 TCustomForm.virtual_014 ==== */

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
  
  puStack_14 = (undefined1 *)0x43ba87;
  FUN_00427384((int)param_1);
  puStack_18 = &LAB_0043bc74;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  bVar2 = false;
  *(byte *)(param_1 + 0x87) = DAT_004474c9 ^ 1;
  puStack_14 = &stack0xfffffffc;
  TWinControl_virtual_014(param_1,param_2);
  if ((param_1[0x91] != 0) && (0 < param_1[0x96])) {
    if (((*(byte *)(param_1 + 0x22) & 0x10) != 0) &&
       (param_1[0x91] != *(int *)(DAT_004477c8 + 0x34))) {
      iVar3 = param_1[0x91];
      numerator = *(int *)(DAT_004477c8 + 0x34);
      piVar1 = (int *)param_1[0x16];
      nNumber = TFont_GetHeight((int)piVar1);
      iVar3 = MulDiv(nNumber,numerator,iVar3);
      TFont_SetHeight(piVar1,iVar3);
    }
    param_1[0x91] = *(int *)(DAT_004477c8 + 0x34);
    iVar3 = FUN_0043bda4((int)param_1);
    if (iVar3 != param_1[0x96]) {
      bVar2 = true;
      FUN_0043affc((int)param_1,iVar3,param_1[0x96]);
      FUN_0042a404((int)param_1,iVar3,param_1[0x96]);
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
    FUN_00424270(param_1,param_1[0x94]);
  }
  if (0 < param_1[0x95]) {
    FUN_004242b4(param_1,param_1[0x95]);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  if (!bVar2) {
    FUN_0043affc((int)param_1,1,1);
    FUN_0042a404((int)param_1,1,1);
  }
  FUN_00425780((int)param_1,0xb03d,0,0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043bc7b;
  puStack_18 = (undefined1 *)0x43bc73;
  FUN_0042738c((int)param_1);
  return;
}


/* ==== 0043bc84 TCustomForm.virtual_004 ==== */

void TCustomForm_virtual_004(int param_1,int *param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  TControl_virtual_004(param_1,param_2);
  (**(code **)(*param_2 + 4))
            (param_2,"PixelsPerInch",
             CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1,
             &LAB_0043bd88,param_1,0,0);
  (**(code **)(*param_2 + 4))
            (param_2,"TextHeight",
             CONCAT31((int3)((uint)extraout_ECX_00 >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1,
             &LAB_0043bd6c,param_1,&LAB_0043bd54,param_1);
  (**(code **)(*param_2 + 4))(param_2,"IgnoreFontProperty",0,0,0,&LAB_0043bd34,param_1);
  return;
}


/* ==== 0043bda4 FUN_0043bda4 ==== */

void FUN_0043bda4(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0043cb74(param_1);
  FUN_004172ac(piVar1,&DAT_0043bdc4);
  return;
}


/* ==== 0043bdc8 TCustomForm.dynamic_ffee ==== */

void TCustomForm_dynamic_ffee(void)

{
  return;
}


/* ==== 0043bdcc TCustomForm.dynamic_ffed ==== */

void TCustomForm_dynamic_ffed(int *param_1,int numerator,int denominator)

{
  int *piVar1;
  uint uVar2;
  int nNumber;
  int nNumber_00;
  int iVar3;
  int nDenominator;
  
  FUN_0043affc((int)param_1,numerator,denominator);
  FUN_0042a404((int)param_1,numerator,denominator);
  uVar2 = FUN_0043bea8((int)param_1);
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


/* ==== 0043be4c FUN_0043be4c ==== */

void FUN_0043be4c(int *param_1)

{
  bool bVar1;
  LPARAM lParam;
  HWND pHVar2;
  BOOL BVar3;
  UINT Msg;
  WPARAM wParam;
  
  if (*PTR_DAT_00446be0 == '\0') {
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    BVar3 = IsIconic(pHVar2);
    if (BVar3 != 0) {
      (**(code **)(*param_1 + 0x74))();
    }
  }
  else {
    bVar1 = FUN_0042abb0((int)param_1);
    if ((bVar1) && (*(char *)((int)param_1 + 0x211) != '\x03')) {
      lParam = FUN_0043dedc((int)param_1);
      wParam = 1;
      Msg = 0x80;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
      return;
    }
  }
  return;
}


/* ==== 0043bea8 FUN_0043bea8 ==== */

uint FUN_0043bea8(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043beb8(param_1);
  return uVar1 ^ 1;
}


/* ==== 0043beb8 FUN_0043beb8 ==== */

undefined4 FUN_0043beb8(int param_1)

{
  if (((*(char *)(param_1 + 0x1f8) == '\0') && (*(int *)(*(int *)(param_1 + 0x1f0) + 0x10) == 0)) &&
     (param_1 = *(int *)(param_1 + 500), *(int *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043bee0 FUN_0043bee0 ==== */

undefined4 FUN_0043bee0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = FUN_0043cb88(param_1);
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


/* ==== 0043bf14 TCustomForm.dynamic_ffb3 ==== */

void TCustomForm_dynamic_ffb3(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x27a) != 0) {
    (**(code **)(param_1 + 0x278))(*(undefined4 *)(param_1 + 0x27c),param_1,param_2);
  }
  return;
}


/* ==== 0043bf34 TCustomForm.dynamic_ffb2 ==== */

void TCustomForm_dynamic_ffb2(int param_1)

{
  if (*(short *)(param_1 + 0x29a) != 0) {
    (**(code **)(param_1 + 0x298))(*(undefined4 *)(param_1 + 0x29c),param_1);
  }
  return;
}


/* ==== 0043bf54 TCustomForm.dynamic_ffb1 ==== */

void TCustomForm_dynamic_ffb1(int param_1)

{
  if (*(short *)(param_1 + 0x2b2) != 0) {
    (**(code **)(param_1 + 0x2b0))(*(undefined4 *)(param_1 + 0x2b4),param_1);
  }
  return;
}


/* ==== 0043bf74 TCustomForm.virtual_040 ==== */

void TCustomForm_virtual_040(int *param_1,LPRECT param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  DWORD dwExStyle;
  DWORD dwStyle;
  int nIndex;
  int iVar3;
  
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  BVar2 = IsIconic(pHVar1);
  if (BVar2 != 0) {
    SetRect(param_2,0,0,0,0);
    iVar3 = -0x14;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    dwExStyle = GetWindowLongA(pHVar1,iVar3);
    iVar3 = -(uint)(param_1[0x8c] != 0);
    nIndex = -0x10;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    dwStyle = GetWindowLongA(pHVar1,nIndex);
    AdjustWindowRectEx(param_2,dwStyle,iVar3,dwExStyle);
    SetRect(param_2,0,0,(param_1[0xe] - param_2->right) + param_2->left,
            (param_1[0xf] - param_2->bottom) + param_2->top);
    return;
  }
  TWinControl_virtual_040(param_1,param_2);
  return;
}


/* ==== 0043bffc TCustomForm.dynamic_fffd ==== */

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
    i_val = FUN_00413fe8(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar2 = (int *)FUN_00413fbc(param_1,j);
        cVar1 = FUN_00402ef0(piVar2,extraout_EDX,extraout_ECX);
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


/* ==== 0043c068 TCustomForm.virtual_050 ==== */

undefined4 TCustomForm_virtual_050(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x24] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    iVar2 = FUN_00402c5c(param_1);
    if (iVar1 == iVar2) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043c094 TCustomForm.dynamic_fffa ==== */

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
  
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TControl_virtual_000_00420b14);
  if ((char)uVar2 == '\0') {
    iVar3 = FUN_0042781c(param_1);
    i_val = -1;
    j = FUN_00413fe8(param_1);
    if (-1 < j + -1) {
      k = 0;
      do {
        piVar4 = (int *)FUN_00413fbc(param_1,k);
        cVar1 = FUN_00402ef0(piVar4,extraout_EDX,extraout_ECX);
        if ((cVar1 == '\0') && (i_val = i_val + 1, i_val == param_3 - iVar3)) {
          FUN_00413ff8((int)param_2,k);
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


/* ==== 0043c128 TCustomForm.virtual_064 ==== */

void TCustomForm_virtual_064(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x50)) {
    TControl_virtual_064(param_1,param_2);
    if (*(int *)(param_1 + 0x24) == 0) {
      FUN_00425780(param_1,0xb03d,0,0);
    }
  }
  return;
}


/* ==== 0043c150 TForm.SetClientWidth ==== */

void TForm_SetClientWidth(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    param_1[0x94] = param_2;
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
    return;
  }
  FUN_00424270(param_1,param_2);
  return;
}


/* ==== 0043c180 TForm.SetClientHeight ==== */

void TForm_SetClientHeight(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    param_1[0x95] = param_2;
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
    return;
  }
  FUN_004242b4(param_1,param_2);
  return;
}


/* ==== 0043c1b0 TForm.SetVisible ==== */

void TForm_SetVisible(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((*(byte *)(param_1 + 0xb3) & 1) == 0) {
    if ((cVar1 != '\0') && (cVar1 != *(char *)((int)param_1 + 0x47))) {
      FUN_0043d064(param_1);
      param_3 = extraout_ECX;
    }
    TLabel_SetVisible(param_1,param_2,param_3);
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


/* ==== 0043c1f4 TCustomForm.dynamic_ffd2 ==== */

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
  puStack_10 = &LAB_0043c24d;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if ((*(char *)(param_1 + 0x217) == '\x01') && (*(char *)(param_1 + 0x47) != '\0')) {
    FUN_00405298((undefined4 *)PTR_PTR_00446ab0,(int *)&local_8);
    piVar1 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar1);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0043c254;
  puStack_10 = (undefined1 *)0x43c24c;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0043c258 TCustomForm.virtual_0dc ==== */

undefined4 TCustomForm_virtual_0dc(void)

{
  return 0;
}


/* ==== 0043c25c TCustomForm.virtual_060 ==== */

void TCustomForm_virtual_060(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  if ((param_2 != (int *)param_1[9]) && (param_1 != param_2)) {
    if ((int *)param_1[9] == (int *)0x0) {
      FUN_00427e1c(param_1);
      param_3 = extraout_ECX;
    }
    TControl_virtual_060(param_1,param_2,param_3);
    if (param_1[9] == 0) {
      FUN_00427fb4(param_1);
    }
  }
  return;
}


/* ==== 0043c294 TCustomForm.virtual_020 ==== */

void TCustomForm_virtual_020(int param_1,int param_2,char *param_3,char *param_4)

{
  TComponent_virtual_020(param_1,param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x238) != 0) {
    (**(code **)(**(int **)(param_1 + 0x238) + 0x2c))
              (*(int **)(param_1 + 0x238),param_2,param_3,param_4);
  }
  return;
}


/* ==== 0043c2d4 TCustomForm.virtual_06c ==== */

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
      if (DAT_00446860 == '\0') {
        return;
      }
      if ((*param_2 == 7) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
        pHVar6 = (HWND)0x0;
        if (*(char *)((int)param_1 + 0x217) == '\x02') {
          pvVar2 = FUN_0043ca44((int)param_1);
          param_3 = extraout_ECX;
          if (pvVar2 != (HANDLE)0x0) {
            piVar3 = FUN_0043ca44((int)param_1);
            pHVar6 = (HWND)FUN_0042a8b4(piVar3);
            param_3 = extraout_ECX_00;
          }
        }
        else {
          piVar3 = (int *)param_1[0x82];
          if ((piVar3 != (int *)0x0) && (piVar3 != param_1)) {
            pHVar6 = (HWND)FUN_0042a8b4(piVar3);
            param_3 = extraout_ECX_01;
          }
        }
        if (pHVar6 != (HWND)0x0) {
          puStack_2c = (undefined1 *)0x43c394;
          SetFocus(pHVar6);
          return;
        }
      }
    }
    else if (uVar1 == 0x2b) {
      piVar3 = (int *)param_2[2];
      if (((*piVar3 == 1) && (param_1[0x8c] != 0)) &&
         (piVar5 = (int *)FUN_00435cac(param_1[0x8c]), param_3 = extraout_ECX_04,
         piVar5 != (int *)0x0)) {
        piVar4 = FUN_00416eac((int *)&PTR_TPersistent_virtual_000_00420138,'\x01',extraout_ECX_04);
        puStack_2c = &LAB_0043c547;
        uStack_30 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_30;
        saved_dc = SaveDC((HDC)piVar3[6]);
        uVar8 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffc4;
        FUN_004174b0(piVar4,piVar3[6]);
        TCanvas_SetFont((int)piVar4);
        FUN_004370d8(piVar5,(int)piVar4,piVar3 + 7,
                     CONCAT22((short)((uint)piVar3 >> 0x10),(short)piVar3[4]));
        *in_FS_OFFSET = uVar8;
        FUN_004174b0(piVar4,0);
        RestoreDC((HDC)piVar3[6],saved_dc);
        return;
      }
    }
    else if (((uVar1 == 0x2c) && (piVar3 = (int *)param_2[2], *piVar3 == 1)) &&
            ((param_1[0x8c] != 0 &&
             (piVar5 = (int *)FUN_00435cac(param_1[0x8c]), param_3 = extraout_ECX_05,
             piVar5 != (int *)0x0)))) {
      pHVar6 = (HWND)FUN_0042a8b4(param_1);
      puStack_2c = (undefined1 *)0x43c595;
      hdc = GetWindowDC(pHVar6);
      puStack_2c = &LAB_0043c672;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      piVar7 = FUN_00416eac((int *)&PTR_TPersistent_virtual_000_00420138,'\x01',extraout_ECX_06);
      *in_FS_OFFSET = &stack0xffffffc4;
      saved_dc = SaveDC(hdc);
      *in_FS_OFFSET = &stack0xffffffb8;
      FUN_004174b0(piVar7,(int)hdc);
      TCanvas_SetFont((int)piVar7);
      piVar4 = piVar3 + 4;
      FUN_0043458c(piVar5,piVar7,piVar3 + 3,piVar4);
      *in_FS_OFFSET = piVar4;
      FUN_004174b0(piVar7,0);
      RestoreDC(hdc,saved_dc);
      return;
    }
  }
  else if (uVar1 == 0xb01a) {
    if (param_1[0x24] != 0) {
      FUN_00402ef0(param_1,param_2,param_3);
      param_3 = extraout_ECX_03;
    }
  }
  else if ((uVar1 == 0xb01b) && (param_1[0x24] != 0)) {
    FUN_00402ef0(param_1,param_2,param_3);
    param_3 = extraout_ECX_02;
  }
  TWinControl_virtual_06c(param_1,param_2,param_3);
  return;
}


/* ==== 0043c694 FUN_0043c694 ==== */

void FUN_0043c694(void)

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


/* ==== 0043c6e0 FUN_0043c6e0 ==== */

undefined4 FUN_0043c6e0(void)

{
  int i_val;
  int iVar1;
  int j;
  int in_stack_00000004;
  
  i_val = FUN_0043ca78(*(int *)(in_stack_00000004 + -4));
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_0043cac4(*(int *)(in_stack_00000004 + -4),j);
      if (*(char *)(iVar1 + 0x213) == '\x02') {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0043c7e8 TCustomForm.virtual_088 ==== */

void TCustomForm_virtual_088(int *param_1,undefined4 param_2,int *param_3)

{
  TScrollingWinControl_virtual_088(param_1,param_2,param_3);
  if ((HWND)param_1[0x8f] != (HWND)0x0) {
    SetWindowPos((HWND)param_1[0x8f],(HWND)0x1,*param_3,param_3[1],param_3[2] - *param_3,
                 param_3[3] - param_3[1],0x14);
  }
  return;
}


/* ==== 0043c824 TCustomForm.CMBiDiModeChanged ==== */

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
  bVar1 = FUN_0042abb0((int)param_1);
  if (bVar1) {
    i_val = -0x14;
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    local_10 = GetWindowLongA(pHVar2,i_val);
    local_10 = local_10 & 0xffff8fff;
    FUN_00427910(param_1,&local_10);
    i_val = -0x14;
    dwNewLong = local_10;
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    SetWindowLongA(pHVar2,i_val,dwNewLong);
  }
  i_val = FUN_00413fe8((int)param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar3 = (int *)FUN_00413fbc((int)param_1,j);
      uVar4 = FUN_00402e8c(piVar3,(int)&PTR_TPersistent_virtual_000_00431a24);
      if ((char)uVar4 != '\0') {
        piVar3 = (int *)FUN_00413fbc((int)param_1,j);
        FUN_0043673c(piVar3);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0043c8bc TCustomForm.CMParentBiDiModeChanged ==== */

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
    puStack_10 = &LAB_0043c939;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    local_8 = param_1;
    if ((char)param_1[0x14] != '\0') {
      if (param_1[9] == 0) {
        puStack_c = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)(DAT_004477c4 + 0x28));
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


/* ==== 0043c944 TForm.SetBorderIcons ==== */

void TForm_SetBorderIcons(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x210)) &&
     (*(char *)(param_1 + 0x210) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00427e64(param_1);
  }
  return;
}


/* ==== 0043c970 TForm.SetBorderStyle ==== */

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
      FUN_00427e64(param_1);
    }
  }
  return;
}


/* ==== 0043c9a8 TCustomForm.dynamic_ffd1 ==== */

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
    FUN_00427e64((int)param_1);
  }
  return;
}


/* ==== 0043c9f0 TCustomForm.dynamic_ffe6 ==== */

void TCustomForm_dynamic_ffe6(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  
  if (param_2 != param_1[0x24]) {
    if (param_2 != 0) {
      cVar1 = (**(code **)(*param_1 + 0x50))();
      if (cVar1 == '\0') goto LAB_0043ca35;
    }
    if (param_2 == 0) {
      *(char *)((int)param_1 + 0x211) = (char)param_1[0x9a];
    }
    else {
      *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)((int)param_1 + 0x211);
      *(undefined1 *)((int)param_1 + 0x211) = 0;
    }
  }
LAB_0043ca35:
  TControl_dynamic_ffe6(param_1,param_2,param_3);
  return;
}


/* ==== 0043ca44 FUN_0043ca44 ==== */

HANDLE FUN_0043ca44(int param_1)

{
  HANDLE pvVar1;
  HWND wnd;
  
  pvVar1 = (HANDLE)0x0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    wnd = (HWND)SendMessageA(*(HWND *)(param_1 + 0x23c),0x229,0,0);
    pvVar1 = FUN_00421a0c(wnd);
  }
  return pvVar1;
}


/* ==== 0043ca78 FUN_0043ca78 ==== */

int FUN_0043ca78(int param_1)

{
  int j;
  int iVar1;
  int k;
  int i_val;
  
  i_val = 0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    j = FUN_004401f8(DAT_004477c8);
    if (-1 < j + -1) {
      k = 0;
      do {
        iVar1 = FUN_004401e4(DAT_004477c8,k);
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


/* ==== 0043cac4 FUN_0043cac4 ==== */

int FUN_0043cac4(int param_1,int param_2)

{
  int i_val;
  int iVar1;
  int j;
  
  if (((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) &&
     (i_val = FUN_004401f8(DAT_004477c8), -1 < i_val + -1)) {
    j = 0;
    do {
      iVar1 = FUN_004401e4(DAT_004477c8,j);
      if ((*(char *)(iVar1 + 0x217) == '\x01') && (param_2 = param_2 + -1, param_2 < 0)) {
        return iVar1;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0043cb14 FUN_0043cb14 ==== */

undefined4 FUN_0043cb14(int *param_1)

{
  int iVar1;
  int i_val;
  int iVar2;
  undefined4 uVar3;
  int j;
  
  FUN_0042a8b4(param_1);
  iVar1 = (**(code **)PTR_DAT_00446bf0)();
  i_val = FUN_004401c8(DAT_004477c8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar2 = FUN_004401b4(DAT_004477c8,j);
      if (iVar1 == *(int *)(iVar2 + 4)) {
        uVar3 = FUN_004401b4(DAT_004477c8,j);
        return uVar3;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0043cb74 FUN_0043cb74 ==== */

undefined4 FUN_0043cb74(int param_1)

{
  return *(undefined4 *)(param_1 + 0x220);
}


/* ==== 0043cb7c TForm.SetIcon ==== */

void TForm_SetIcon(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x228) + 8))();
  return;
}


/* ==== 0043cb88 FUN_0043cb88 ==== */

uint FUN_0043cb88(int param_1)

{
  return CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1;
}


/* ==== 0043cbb8 TForm.SetFormStyle ==== */

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
      FUN_00427e1c(param_1);
      param_3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
    cVar1 = *(char *)((int)param_1 + 0x217);
    *(char *)((int)param_1 + 0x217) = cVar3;
    if (((cVar3 == '\x02') || (cVar1 == '\x02')) && ((char)param_1[0x4e] == '\0')) {
      iVar2 = FUN_0043cf88((int)param_1);
      TLabel_SetColor((int)param_1,iVar2);
      param_3 = extraout_ECX_01;
      param_2 = extraout_EDX_01;
    }
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      FUN_00427fb4(param_1);
      param_3 = extraout_ECX_02;
      param_2 = extraout_EDX_02;
    }
    if (cVar3 == '\x01') {
      TForm_SetVisible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
    }
  }
  return;
}


/* ==== 0043cc38 FUN_0043cc38 ==== */

void FUN_0043cc38(int *param_1)

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
      lParam = FUN_00432fe8(param_1[0x90]);
    }
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    pHVar2 = GetMenu(pHVar1);
    SendMessageA((HWND)param_1[0x8f],0x230,(WPARAM)wParam,lParam);
    if (wParam != pHVar2) {
      pHVar1 = (HWND)FUN_0042a8b4(param_1);
      DrawMenuBar(pHVar1);
    }
  }
  return;
}


/* ==== 0043ccb4 TForm.SetObjectMenuItem ==== */

void TForm_SetObjectMenuItem(int param_1,int *param_2,undefined4 param_3)

{
  *(int **)(param_1 + 0x248) = param_2;
  if (param_2 != (int *)0x0) {
    FUN_00413a98((int)param_2,param_1,param_3);
    TMenuItem_SetEnabled(param_2,0);
  }
  return;
}


/* ==== 0043ccd8 TForm.SetWindowMenu ==== */

void TForm_SetWindowMenu(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != param_1[0x90]) {
    param_1[0x90] = param_2;
    if (param_2 != 0) {
      FUN_00413a98(param_2,(int)param_1,param_3);
    }
    FUN_0043cc38(param_1);
  }
  return;
}


/* ==== 0043cd00 TForm.SetMenu ==== */

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
     (iVar2 = FUN_004401f8(DAT_004477c8), uVar7 = extraout_ECX, -1 < iVar2 + -1)) {
    j = 0;
    i_val = iVar2;
    do {
      iVar2 = FUN_004401e4(DAT_004477c8,j);
      uVar7 = extraout_ECX_00;
      if ((in_EDX == *(int **)(iVar2 + 0x230)) &&
         (piVar3 = (int *)FUN_004401e4(DAT_004477c8,j), uVar7 = extraout_ECX_01, in_EAX != piVar3))
      {
        local_10 = in_EDX[2];
        local_c = 0xb;
        piVar3 = &local_10;
        uVar8 = 0;
        FUN_00405298((undefined4 *)PTR_PTR_00446b18,(int *)&local_14);
        uVar7 = FUN_0040a974((int)&DAT_0040d94c,'\x01',local_14,uVar8,piVar3);
        FUN_0040346c(uVar7);
        uVar7 = extraout_ECX_02;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if ((int *)in_EAX[0x8c] != (int *)0x0) {
    FUN_00436284((int *)in_EAX[0x8c],0);
    uVar7 = extraout_ECX_03;
  }
  in_EAX[0x8c] = (int)in_EDX;
  if ((in_EDX == (int *)0x0) ||
     ((FUN_00413a98((int)in_EDX,(int)in_EAX,uVar7), (*(byte *)(in_EAX + 8) & 0x10) == 0 &&
      (*(char *)((int)in_EAX + 0x211) == '\x03')))) {
    bVar1 = FUN_0042abb0((int)in_EAX);
    if (bVar1) {
      pHVar4 = (HMENU)0x0;
      pHVar5 = (HWND)FUN_0042a8b4(in_EAX);
      SetMenu(pHVar5,pHVar4);
    }
  }
  else if (((*(char *)(in_EAX[0x8c] + 0x4c) == '\0') && (*(char *)((int)in_EAX + 0x217) != '\x01'))
          || ((*(byte *)(in_EAX + 8) & 0x10) != 0)) {
    bVar1 = FUN_0042abb0((int)in_EAX);
    if (bVar1) {
      pHVar4 = (HMENU)(**(code **)(*(int *)in_EAX[0x8c] + 0x34))();
      pHVar5 = (HWND)FUN_0042a8b4(in_EAX);
      pHVar6 = GetMenu(pHVar5);
      if (pHVar4 != pHVar6) {
        pHVar4 = (HMENU)(**(code **)(*(int *)in_EAX[0x8c] + 0x34))();
        pHVar5 = (HWND)FUN_0042a8b4(in_EAX);
        SetMenu(pHVar5,pHVar4);
      }
      iVar2 = FUN_0042a8b4(in_EAX);
      FUN_00436284(in_EDX,iVar2);
    }
  }
  else if ((*(char *)((int)in_EAX + 0x217) != '\x01') && (bVar1 = FUN_0042abb0((int)in_EAX), bVar1))
  {
    pHVar4 = (HMENU)0x0;
    pHVar5 = (HWND)FUN_0042a8b4(in_EAX);
    SetMenu(pHVar5,pHVar4);
  }
  if (*(char *)((int)in_EAX + 0x216) != '\0') {
    FUN_0043dd68((int)in_EAX,'\x01');
  }
  FUN_0043cc38(in_EAX);
  *in_FS_OFFSET = uVar8;
  piVar3 = FUN_004039b8((int *)&local_14);
  return (BOOL)piVar3;
}


/* ==== 0043cec4 TForm.GetPixelsPerInch ==== */

int TForm_GetPixelsPerInch(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x244);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_004477c8 + 0x34);
  }
  return iVar1;
}


/* ==== 0043ced8 TForm.SetPixelsPerInch ==== */

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


/* ==== 0043cf0c TForm.SetPosition ==== */

void TForm_SetPosition(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x218)) &&
     (*(char *)(param_1 + 0x218) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00427e64(param_1);
  }
  return;
}


/* ==== 0043cf28 TForm.GetScaled ==== */

bool TForm_GetScaled(int param_1)

{
  return *(int *)(param_1 + 0x244) != 0;
}


/* ==== 0043cf34 TForm.SetScaled ==== */

void TForm_SetScaled(int param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = TForm_GetScaled(param_1);
  if (((bool)param_2 != bVar1) && (*(undefined4 *)(param_1 + 0x244) = 0, param_2 != '\0')) {
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(DAT_004477c8 + 0x34);
  }
  return;
}


/* ==== 0043cf64 TCustomForm.CMColorChanged ==== */

void TCustomForm_CMColorChanged(int *param_1)

{
  TWinControl_CMColorChanged(param_1);
  if (param_1[0x88] != 0) {
    TBrush_SetColor(*(int **)(param_1[0x88] + 0x14),param_1[0x18]);
  }
  return;
}


/* ==== 0043cf88 FUN_0043cf88 ==== */

undefined4 FUN_0043cf88(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80000005;
  if (*(char *)(param_1 + 0x217) == '\x02') {
    uVar1 = 0x8000000c;
  }
  return uVar1;
}


/* ==== 0043cfa0 TCustomForm.CMCtl3DChanged ==== */

void TCustomForm_CMCtl3DChanged(int param_1,undefined4 param_2)

{
  int iVar1;
  
  TWinControl_CMCtl3DChanged(param_1,param_2);
  if (*(char *)(param_1 + 0x138) == '\0') {
    if (*(int *)(param_1 + 0x60) == -0x7ffffff1) {
      iVar1 = FUN_0043cf88(param_1);
      TLabel_SetColor(param_1,iVar1);
    }
  }
  else {
    iVar1 = FUN_0043cf88(param_1);
    if (iVar1 == *(int *)(param_1 + 0x60)) {
      TLabel_SetColor(param_1,-0x7ffffff1);
      return;
    }
  }
  return;
}


/* ==== 0043cfe8 TCustomForm.CMFontChanged ==== */

void TCustomForm_CMFontChanged(int *param_1)

{
  TWinControl_CMFontChanged(param_1);
  if (param_1[0x88] != 0) {
    TCanvas_SetFont(param_1[0x88]);
  }
  return;
}


/* ==== 0043d008 TCustomForm.CMMenuChanged ==== */

void TCustomForm_CMMenuChanged(int *param_1)

{
  HWND unaff_EBX;
  HMENU in_stack_00000000;
  
  FUN_0043cc38(param_1);
  TForm_SetMenu(unaff_EBX,in_stack_00000000);
  return;
}


/* ==== 0043d024 TForm.SetWindowState ==== */

void TForm_SetWindowState(int *param_1,byte param_2)

{
  HWND hWnd;
  int nCmdShow;
  
  if (((param_2 != *(byte *)((int)param_1 + 0x213)) &&
      (*(byte *)((int)param_1 + 0x213) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) &&
     ((char)param_1[0x5a] != '\0')) {
    nCmdShow = *(int *)(&DAT_004468f0 + (uint)param_2 * 4);
    hWnd = (HWND)FUN_0042a8b4(param_1);
    ShowWindow(hWnd,nCmdShow);
  }
  return;
}


/* ==== 0043d064 FUN_0043d064 ==== */

void FUN_0043d064(int *param_1)

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
  
  if ((*(char *)((int)param_1 + 0x219) != '\0') && (*(int *)(DAT_004477c4 + 0x38) != 0)) {
    local_24 = 0;
    if (*(char *)((int)param_1 + 0x219) == '\x02') {
      iVar1 = FUN_0043cb14(*(int **)(DAT_004477c4 + 0x38));
      local_24 = *(int *)(iVar1 + 4);
    }
    else if ((*(char *)((int)param_1 + 0x219) == '\x03') && (*(int *)(DAT_004477c8 + 0x5c) != 0)) {
      iVar1 = FUN_0043cb14(*(int **)(DAT_004477c8 + 0x5c));
      local_24 = *(int *)(iVar1 + 4);
    }
    else if (*(char *)((int)param_1 + 0x219) == '\x01') {
      iVar1 = FUN_004401b4(DAT_004477c8,0);
      local_24 = *(int *)(iVar1 + 4);
    }
    iVar1 = FUN_0043cb14(param_1);
    iVar1 = *(int *)(iVar1 + 4);
    i_val = FUN_004401c8(DAT_004477c8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        k = FUN_004401b4(DAT_004477c8,j);
        if ((*(int *)(k + 4) == local_24) && (local_24 != iVar1)) {
          k = FUN_004401c8(DAT_004477c8);
          if (-1 < k + -1) {
            m = 0;
            do {
              iVar2 = FUN_004401b4(DAT_004477c8,m);
              if (*(int *)(iVar2 + 4) == iVar1) {
                if ((char)param_1[0x86] == '\x04') {
                  iVar2 = param_1[0xf];
                  FUN_004401b4(DAT_004477c8,j);
                  iVar3 = FUN_0043ff28();
                  FUN_004401b4(DAT_004477c8,j);
                  iVar4 = FUN_0043ff04();
                  iVar5 = iVar4 - iVar2 >> 1;
                  if (iVar5 < 0) {
                    iVar5 = iVar5 + (uint)((iVar4 - iVar2 & 1U) != 0);
                  }
                  FUN_004401b4(DAT_004477c8,j);
                  puVar6 = FUN_0043fee4();
                  FUN_004401b4(DAT_004477c8,j);
                  iVar2 = FUN_0043ff48();
                  iVar4 = iVar2 - param_1[0xe] >> 1;
                  if (iVar4 < 0) {
                    iVar4 = iVar4 + (uint)((iVar2 - param_1[0xe] & 1U) != 0);
                  }
                  (**(code **)(*param_1 + 0x7c))(param_1,puVar6 + iVar4,iVar3 + iVar5);
                }
                else if ((char)param_1[0x86] == '\x06') {
                  iVar2 = param_1[0xf];
                  FUN_004401b4(DAT_004477c8,j);
                  iVar3 = FUN_0043ff28();
                  FUN_004401b4(DAT_004477c8,j);
                  iVar4 = FUN_0043ff04();
                  iVar5 = iVar4 - iVar2 >> 1;
                  if (iVar5 < 0) {
                    iVar5 = iVar5 + (uint)((iVar4 - iVar2 & 1U) != 0);
                  }
                  FUN_004401b4(DAT_004477c8,j);
                  puVar6 = FUN_0043fee4();
                  FUN_004401b4(DAT_004477c8,j);
                  iVar2 = FUN_0043ff48();
                  iVar4 = iVar2 - param_1[0xe] >> 1;
                  if (iVar4 < 0) {
                    iVar4 = iVar4 + (uint)((iVar2 - param_1[0xe] & 1U) != 0);
                  }
                  (**(code **)(*param_1 + 0x7c))(param_1,puVar6 + iVar4,iVar3 + iVar5);
                }
                else {
                  FUN_004401b4(DAT_004477c8,j);
                  puVar6 = FUN_0043fee4();
                  iVar2 = param_1[0xc];
                  FUN_004401b4(DAT_004477c8,m);
                  puVar7 = FUN_0043fee4();
                  puVar6 = puVar6 + (iVar2 - (int)puVar7);
                  FUN_004401b4(DAT_004477c8,j);
                  puVar7 = FUN_0043fee4();
                  FUN_004401b4(DAT_004477c8,j);
                  iVar2 = FUN_0043ff48();
                  if ((int)(puVar7 + iVar2) < (int)(puVar6 + param_1[0xe])) {
                    FUN_004401b4(DAT_004477c8,j);
                    puVar6 = FUN_0043fee4();
                    FUN_004401b4(DAT_004477c8,j);
                    iVar2 = FUN_0043ff48();
                    puVar6 = puVar6 + (iVar2 - param_1[0xe]);
                  }
                  FUN_004401b4(DAT_004477c8,j);
                  local_18 = FUN_0043ff28();
                  local_18 = local_18 + param_1[0xd];
                  FUN_004401b4(DAT_004477c8,m);
                  iVar2 = FUN_0043ff28();
                  local_18 = local_18 - iVar2;
                  FUN_004401b4(DAT_004477c8,j);
                  iVar2 = FUN_0043ff28();
                  FUN_004401b4(DAT_004477c8,j);
                  iVar3 = FUN_0043ff04();
                  if (iVar2 + iVar3 < local_18 + param_1[0xf]) {
                    FUN_004401b4(DAT_004477c8,j);
                    iVar2 = FUN_0043ff28();
                    FUN_004401b4(DAT_004477c8,j);
                    iVar3 = FUN_0043ff04();
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


/* ==== 0043d3b0 TCustomForm.virtual_090 ==== */

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
    puVar4 = *(undefined **)(DAT_004477c4 + 0x24);
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
      FUN_00427910(param_1,(uint *)(param_2 + 2));
      puVar4 = PTR_DAT_00446be0;
      if (*PTR_DAT_00446be0 == '\0') {
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
      uVar6 = FUN_00427910(param_1,(uint *)(param_2 + 2));
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
      puVar4 = &DAT_00406528;
      param_2[10] = (int)&DAT_00406528;
    }
  }
  else {
    param_2[1] = param_2[1] | 0xcf0000;
  }
  return puVar4;
}


/* ==== 0043d5c4 TCustomForm.virtual_098 ==== */

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
  if (*PTR_DAT_00446be0 != '\0') {
    if (*(char *)((int)param_1 + 0x211) == '\x03') {
      LVar1 = 0;
      WVar8 = 1;
      UVar7 = 0x80;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SendMessageA(pHVar2,UVar7,WVar8,LVar1);
    }
    else {
      LVar1 = FUN_0043dedc((int)param_1);
      WVar8 = 1;
      UVar7 = 0x80;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SendMessageA(pHVar2,UVar7,WVar8,LVar1);
    }
  }
  lpParam = &local_10;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if (*(char *)((int)param_1 + 0x217) == '\x02') {
      local_c = 0xff00;
      local_10 = 0;
      if (param_1[0x90] != 0) {
        local_10 = FUN_00432fe8(param_1[0x90]);
      }
      hMenu = (HMENU)0x0;
      hInstance = DAT_004474d4;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      iVar5 = TForm_GetClientHeight(param_1);
      iVar6 = TForm_GetClientWidth(param_1);
      pHVar2 = CreateWindowExA(0x200,"MDICLIENT",(LPCSTR)0x0,0x56330001,0,0,iVar6,iVar5,pHVar2,hMenu
                               ,hInstance,lpParam);
      param_1[0x8f] = (int)pHVar2;
      puVar3 = FUN_00439bd0();
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
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,iVar5,iVar6,cx,cy,UVar7);
    }
  }
  return;
}


/* ==== 0043d704 TCustomForm.virtual_094 ==== */

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
  puStack_38 = &LAB_0043d7f6;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if ((*(char *)(param_1 + 0x217) == '\x01') && ((*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    if ((*(int *)(DAT_004477c4 + 0x38) == 0) ||
       (puStack_34 = &stack0xfffffffc, *(int *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c) == 0)) {
      puStack_34 = &stack0xfffffffc;
      FUN_00405298((undefined4 *)PTR_PTR_00446cfc,(int *)&local_2c);
      piVar1 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_2c);
      FUN_0040346c(piVar1);
      param_2 = extraout_EDX;
    }
    local_28 = param_2 + 0x13;
    local_24 = *param_2;
    local_20 = DAT_004474d4;
    local_1c = param_2[3];
    local_18 = param_2[4];
    local_14 = param_2[5];
    local_10 = param_2[6];
    local_c = param_2[1];
    local_8 = param_2[8];
    LVar2 = SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x220,0,(LPARAM)&local_28)
    ;
    *(LRESULT *)(param_1 + 0x14c) = LVar2;
    *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) | 0x10;
  }
  else {
    TWinControl_virtual_094(param_1,param_2);
    *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xef;
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0043d7fd;
  puStack_38 = (undefined1 *)0x43d7f5;
  FUN_004039b8((int *)&local_2c);
  return;
}


/* ==== 0043d804 TCustomForm.virtual_09c ==== */

void TCustomForm_virtual_09c(int *param_1)

{
  WPARAM wParam;
  LPARAM lParam;
  
  if ((*(byte *)(param_1 + 0xb3) & 0x10) == 0) {
    TWinControl_virtual_09c((int)param_1);
  }
  else {
    lParam = 0;
    wParam = FUN_0042a8b4(param_1);
    SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x221,wParam,lParam);
  }
  param_1[0x8f] = 0;
  return;
}


/* ==== 0043d848 TCustomForm.DefaultHandler ==== */

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
      hWnd = (HWND)FUN_0042a8b4(param_1);
      UVar2 = DefFrameProcA(hWnd,pHVar1,UVar3,UVar4,UVar2);
      param_2[3] = UVar2;
      return;
    }
    UVar2 = param_2[2];
    UVar4 = param_2[1];
    UVar3 = *param_2;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    UVar2 = DefWindowProcA(pHVar1,UVar3,UVar4,UVar2);
    param_2[3] = UVar2;
  }
  return;
}


/* ==== 0043d8ac TForm.SetActiveControl ==== */

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
  puStack_1c = &LAB_0043d954;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_2 == (int *)param_1[0x82]) goto LAB_0043d93e;
  uVar4 = 0;
  puVar1 = &stack0xfffffffc;
  if (param_2 == (int *)0x0) goto LAB_0043d917;
  puVar1 = &stack0xfffffffc;
  if (param_1 == param_2) {
LAB_0043d8f6:
    puStack_18 = puVar1;
    FUN_00405298((undefined4 *)PTR_PTR_00446d14,(int *)&local_8);
    piVar3 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar3);
    param_3 = extraout_ECX_01;
    uVar4 = extraout_EDX_01;
    puVar1 = puStack_18;
  }
  else {
    piVar3 = FUN_00439eb4(param_2);
    puVar1 = puStack_18;
    if (param_1 != piVar3) goto LAB_0043d8f6;
    param_3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      cVar2 = FUN_00402ef0(param_2,extraout_EDX,extraout_ECX);
      param_3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
      puVar1 = puStack_18;
      if (cVar2 == '\0') goto LAB_0043d8f6;
    }
  }
LAB_0043d917:
  puStack_18 = puVar1;
  param_1[0x82] = (int)param_2;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(char *)((int)param_1 + 0x216) != '\0') {
      FUN_0043dc64(param_1);
      param_3 = extraout_ECX_02;
      uVar4 = extraout_EDX_02;
    }
    FUN_00402ef0(param_1,uVar4,param_3);
  }
LAB_0043d93e:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0043d95b;
  puStack_1c = (undefined1 *)0x43d953;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0043d964 FUN_0043d964 ==== */

void FUN_0043d964(int *param_1,int param_2,char param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  
  if (param_3 != '\0') {
    bVar1 = thunk_FUN_004275cd(param_2,param_1[0x83]);
    if (bVar1) {
      param_1[0x83] = *(int *)(param_2 + 0x24);
    }
  }
  bVar1 = thunk_FUN_004275cd(param_2,param_1[0x82]);
  if (bVar1) {
    TForm_SetActiveControl(param_1,(int *)0x0,extraout_ECX);
  }
  return;
}


/* ==== 0043d9ac FUN_0043d9ac ==== */

void FUN_0043d9ac(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x216);
  TForm_SetActiveControl(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xb0))();
  }
  return;
}


/* ==== 0043d9d0 TCustomForm.virtual_0d4 ==== */

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
  
  DAT_00446864 = DAT_00446864 + 1;
  if (param_1[0x8e] == 0) {
    if (param_1 == param_2) {
      param_1[0x82] = 0;
    }
    else {
      param_1[0x82] = (int)param_2;
    }
  }
  *(int **)(DAT_004477c8 + 0x58) = param_2;
  *(int **)(DAT_004477c8 + 0x5c) = param_1;
  puStack_18 = (undefined1 *)0x43da27;
  FUN_0040f164(*(int **)(DAT_004477c8 + 0x44),(int)param_1);
  puStack_18 = (undefined1 *)0x43da38;
  FUN_0040f0a0(*(int **)(DAT_004477c8 + 0x44),0,(int)param_1);
  puStack_18 = (undefined1 *)0x43da45;
  uVar3 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_virtual_000_00438838);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(DAT_004477c8 + 0x60) = 0;
  }
  else {
    *(int **)(DAT_004477c8 + 0x60) = param_1;
    puStack_18 = (undefined1 *)0x43da60;
    FUN_0040f164(*(int **)(DAT_004477c8 + 0x40),(int)param_1);
    puStack_18 = (undefined1 *)0x43da71;
    FUN_0040f0a0(*(int **)(DAT_004477c8 + 0x40),0,(int)param_1);
  }
  if ((*(byte *)(param_2 + 0x11) & 0x20) != 0) {
    return (int *)0x0;
  }
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) | 0x20;
  puStack_1c = &LAB_0043dc40;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(DAT_004477c8 + 0x6c);
  puStack_18 = &stack0xfffffffc;
  if (param_1 != piVar1) {
    puStack_18 = &stack0xfffffffc;
    if (piVar1 != (int *)0x0) {
      puStack_18 = &stack0xfffffffc;
      pHVar4 = (HWND)FUN_0042a8b4(piVar1);
      *(undefined4 *)(DAT_004477c8 + 0x6c) = 0;
      bVar2 = FUN_00439ab8(pHVar4,0xb001);
      if (!bVar2) {
        FUN_0040350c();
        return (int *)0x0;
      }
    }
    *(int **)(DAT_004477c8 + 0x6c) = param_1;
    pHVar4 = (HWND)FUN_0042a8b4(param_1);
    bVar2 = FUN_00439ab8(pHVar4,CONCAT22(extraout_var,0xb000));
    if (!bVar2) {
      FUN_0040350c();
      return (int *)0x0;
    }
  }
  if (param_1[0x83] == 0) {
    param_1[0x83] = (int)param_1;
  }
  if ((int *)param_1[0x83] != param_2) {
    while ((param_1[0x83] != 0 && (bVar2 = thunk_FUN_004275cd(param_1[0x83],(int)param_2), !bVar2)))
    {
      pHVar4 = (HWND)FUN_0042a8b4((int *)param_1[0x83]);
      param_1[0x83] = *(int *)(param_1[0x83] + 0x24);
      bVar2 = FUN_00439ab8(pHVar4,CONCAT22(extraout_var_00,0xb01b));
      if (!bVar2) {
        FUN_0040350c();
        return (int *)0x0;
      }
    }
    while (piVar1 = param_2, (int *)param_1[0x83] != param_2) {
      do {
        piVar5 = piVar1;
        piVar1 = (int *)piVar5[9];
      } while ((int *)piVar5[9] != (int *)param_1[0x83]);
      param_1[0x83] = (int)piVar5;
      pHVar4 = (HWND)FUN_0042a8b4(piVar5);
      bVar2 = FUN_00439ab8(pHVar4,CONCAT22(extraout_var_01,0xb01a));
      if (!bVar2) {
        FUN_0040350c();
        return (int *)0x0;
      }
    }
    for (piVar1 = (int *)param_2[9]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[9]) {
      uVar3 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_virtual_000_004377d0);
      if ((char)uVar3 != '\0') {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
    }
    FUN_00425780((int)param_1,0xb007,0,param_2);
    piVar1 = (int *)param_1[0x99];
    if ((piVar1 != (int *)0x0) && (piVar1 != param_2)) {
      FUN_00425780((int)piVar1,0xb02a,0,0);
    }
  }
  *in_FS_OFFSET = uStack_20;
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) & 0xffdf;
  return param_2;
}


/* ==== 0043dc60 TCustomForm.dynamic_ffb5 ==== */

void TCustomForm_dynamic_ffb5(void)

{
  return;
}


/* ==== 0043dc64 FUN_0043dc64 ==== */

void FUN_0043dc64(int *param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  
  if (((int *)param_1[0x82] != (int *)0x0) && (param_1[0x8e] == 0)) {
    param_1 = (int *)param_1[0x82];
  }
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  SetFocus(pHVar1);
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  pHVar2 = GetFocus();
  if (pHVar1 == pHVar2) {
    FUN_00425780((int)param_1,0xb029,0,0);
  }
  return;
}


/* ==== 0043dcb4 FUN_0043dcb4 ==== */

void FUN_0043dcb4(int *param_1,byte param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  *(byte *)((int)param_1 + 0x216) = param_2;
  if (param_1[0x99] != 0) {
    FUN_00425780(param_1[0x99],0xb02b,(uint)param_2,0);
    param_3 = extraout_ECX;
  }
  if (param_2 != 0) {
    if ((param_1[0x82] == 0) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
      piVar1 = (int *)FUN_0042accc(param_1,0,CONCAT31((int3)((uint)param_3 >> 8),1),'\0','\x01');
      TForm_SetActiveControl(param_1,piVar1,extraout_ECX_00);
    }
    FUN_0043dd68((int)param_1,'\x01');
    FUN_0043dc64(param_1);
  }
  return;
}


/* ==== 0043dd18 FUN_0043dd18 ==== */

void FUN_0043dd18(int param_1,undefined4 param_2)

{
  HANDLE pvVar1;
  
  if ((*(char *)(param_1 + 0x216) != '\0') && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_00425780(*(int *)(param_1 + 0x208),0xb004,0,param_2);
  }
  if (*(char *)(param_1 + 0x217) == '\x02') {
    pvVar1 = FUN_0043ca44(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      pvVar1 = FUN_0043ca44(param_1);
      FUN_0043dd18((int)pvVar1,param_2);
    }
  }
  return;
}


/* ==== 0043dd68 FUN_0043dd68 ==== */

void FUN_0043dd68(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((((*(byte *)(param_1 + 0x2cc) & 8) == 0) && (*(int *)(DAT_004477c4 + 0x38) != 0)) &&
       (*(int *)(*(int *)(DAT_004477c4 + 0x38) + 0x230) != 0)) &&
      (param_1 != *(int *)(DAT_004477c4 + 0x38))) &&
     ((*(char *)(param_1 + 0x217) == '\x01' ||
      (*(char *)(*(int *)(DAT_004477c4 + 0x38) + 0x217) != '\x02')))) {
    iVar2 = 0;
    if ((((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x230) != 0)) &&
       ((*(char *)(*(int *)(param_1 + 0x230) + 0x4c) != '\0' ||
        (*(char *)(param_1 + 0x217) == '\x01')))) {
      iVar2 = *(int *)(param_1 + 0x230);
    }
    iVar1 = *(int *)(*(int *)(DAT_004477c4 + 0x38) + 0x230);
    if (param_2 == '\0') {
      FUN_00436864(iVar1,iVar2);
    }
    else {
      FUN_00436848(iVar1,iVar2);
    }
  }
  return;
}


/* ==== 0043de10 FUN_0043de10 ==== */

void FUN_0043de10(UINT msg,int *param_2,int *param_3)

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
      uVar1 = FUN_00402e8c(piVar2,(int)&PTR_TWinControl_virtual_000_00438554);
    } while ((char)uVar1 == '\0');
    if ((piVar2 != (int *)0x0) && (param_3 != piVar2)) {
      lParam = 0;
      wParam = 0;
      hWnd = (HWND)FUN_0042a8b4(piVar2);
      SendMessageA(hWnd,msg,wParam,lParam);
    }
  }
  return;
}


/* ==== 0043de5c TCustomForm.dynamic_ffb6 ==== */

void TCustomForm_dynamic_ffb6(int *param_1)

{
  FUN_0043de10(0xb000,(int *)param_1[0x82],param_1);
  if (*(short *)((int)param_1 + 0x272) != 0) {
    (*(code *)param_1[0x9c])(param_1[0x9d],param_1);
  }
  return;
}


/* ==== 0043de8c TCustomForm.dynamic_ffb4 ==== */

void TCustomForm_dynamic_ffb4(int *param_1)

{
  FUN_0043de10(0xb001,(int *)param_1[0x82],param_1);
  if (*(short *)((int)param_1 + 0x28a) != 0) {
    (*(code *)param_1[0xa2])(param_1[0xa3],param_1);
  }
  return;
}


/* ==== 0043debc TCustomForm.dynamic_ffb0 ==== */

void TCustomForm_dynamic_ffb0(int param_1)

{
  if (*(short *)(param_1 + 0x2a2) != 0) {
    (**(code **)(param_1 + 0x2a0))(*(undefined4 *)(param_1 + 0x2a4),param_1);
  }
  return;
}


/* ==== 0043dedc FUN_0043dedc ==== */

void FUN_0043dedc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041c9f0(*(int *)(param_1 + 0x228));
  if (iVar1 == 0) {
    FUN_00441cd8(DAT_004477c4);
  }
  return;
}


/* ==== 0043def8 TCustomForm.virtual_0a8 ==== */

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
  
  puStack_10 = (undefined1 *)0x43df10;
  FUN_00417174(param_1[0x88]);
  puStack_14 = &LAB_0043dfa5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)0x43df2e;
  puStack_10 = &stack0xfffffffc;
  FUN_004174b0((int *)param_1[0x88],param_2);
  puStack_20 = &LAB_0043df82;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_1[0x8e] == 0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  else {
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*(int *)param_1[0x8e] + 0x28))();
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0043df89;
  puStack_20 = (undefined1 *)0x43df81;
  FUN_004174b0((int *)param_1[0x88],0);
  return;
}


/* ==== 0043dfb0 TCustomForm.dynamic_ffd6 ==== */

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
  piVar1 = FUN_0043ca44((int)param_1);
  if (piVar1 != (int *)0x0) {
    local_1b = FUN_00402ef0(piVar1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),extraout_ECX);
  }
  piVar2 = (int *)FUN_0043ca78((int)param_1);
  uVar3 = extraout_ECX_00;
  uVar5 = extraout_EDX_00;
  if (-1 < (int)piVar2 + -1) {
    i_val = 0;
    piVar6 = piVar2;
    do {
      uVar4 = (undefined3)((uint)piVar2 >> 8);
      if ((param_2 & local_1b) != 0) goto LAB_0043e04e;
      piVar2 = (int *)FUN_0043cac4((int)param_1,i_val);
      uVar3 = extraout_ECX_01;
      uVar5 = extraout_EDX_01;
      if (piVar2 != piVar1) {
        uVar3 = FUN_00402ef0(piVar2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),param_2),
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
LAB_0043e04e:
  return CONCAT31(uVar4,local_1b);
}


/* ==== 0043e05c TCustomForm.WMPaint ==== */

void TCustomForm_WMPaint(int *param_1,int param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  HDC hDC;
  HICON hIcon;
  tagPAINTSTRUCT *ptVar3;
  tagPAINTSTRUCT tStack_48;
  
  ptVar3 = &tStack_48;
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  BVar2 = IsIconic(pHVar1);
  if (BVar2 == 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 0x100;
    TWinControl_WMPaint(param_1,param_2);
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfeff;
  }
  else {
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    hDC = BeginPaint(pHVar1,ptVar3);
    ptVar3 = &tStack_48;
    hIcon = (HICON)FUN_0043dedc((int)param_1);
    DrawIcon(hDC,0,0,hIcon);
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    EndPaint(pHVar1,ptVar3);
  }
  return;
}


/* ==== 0043e0dc TCustomForm.WMIconEraseBkgnd ==== */

void TCustomForm_WMIconEraseBkgnd(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT local_18;
  
  if (*(char *)((int)param_1 + 0x217) == '\x01') {
    if ((*(char *)((int)param_1 + 0x217) == '\x01') && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
      hbr = (HBRUSH)FUN_00416d90(*(int *)(*(int *)(DAT_004477c4 + 0x38) + 0x130));
      (**(code **)(*param_1 + 0x40))(param_1,&local_18);
      FillRect(*(HDC *)(param_2 + 4),&local_18,hbr);
    }
    else {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
    }
  }
  return;
}


/* ==== 0043e13c TCustomForm.WMEraseBkgnd ==== */

void TCustomForm_WMEraseBkgnd(int *param_1,undefined4 *param_2)

{
  HWND hWnd;
  BOOL BVar1;
  
  hWnd = (HWND)FUN_0042a8b4(param_1);
  BVar1 = IsIconic(hWnd);
  if (BVar1 == 0) {
    TWinControl_WMEraseBkgnd(param_1,(int)param_2);
    return;
  }
  *param_2 = 0x27;
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 0043e174 TCustomForm.WMQueryDragIcon ==== */

void TCustomForm_WMQueryDragIcon(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0043dedc(param_1);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}


/* ==== 0043e188 FUN_0043e188 ==== */

void FUN_0043e188(void)

{
  HWND hWnd;
  HMENU hMenu;
  int in_stack_00000004;
  BOOL bRevert;
  
  if (((*(char *)(*(int *)(in_stack_00000004 + -4) + 0x211) != '\0') &&
      ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x210) & 1) != 0)) &&
     (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x217) != '\x01')) {
    bRevert = 0;
    hWnd = (HWND)FUN_0042a8b4(*(int **)(in_stack_00000004 + -4));
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


/* ==== 0043e284 TCustomForm.WMNCCreate ==== */

void TCustomForm_WMNCCreate(HWND wnd)

{
  HMENU unaff_EBP;
  
  (**(code **)(wnd->unused + -0x10))();
  TForm_SetMenu(wnd,unaff_EBP);
  if ((wnd[8].unused & 0x10) == 0) {
    FUN_0043e188();
  }
  return;
}


/* ==== 0043e2b8 TCustomForm.WMNCLButtonDown ==== */

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
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    BVar3 = IsIconic(pHVar2);
    if (BVar3 == 0) {
      UVar4 = 7;
      cy = 0;
      cx = 0;
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,X,Y,cx,cy,UVar4);
      lParam = *(LPARAM *)(param_2 + 8);
      wParam = *(WPARAM *)(param_2 + 4);
      UVar4 = 0xa2;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      PostMessageA(pHVar2,UVar4,wParam,lParam);
      if (*(char *)((int)param_1 + 0x216) == '\0') {
        return;
      }
      bVar1 = (**(code **)(*param_1 + 0x50))();
      FUN_00424e20(param_1,bVar1 ^ 1,-1);
      return;
    }
  }
  TControl_WMNCLButtonDown(param_1,param_2);
  return;
}


/* ==== 0043e348 TCustomForm.WMDestroy ==== */

void TCustomForm_WMDestroy(int *param_1)

{
  HWND pHVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  HMENU hMenu;
  
  if (*PTR_DAT_00446be0 != '\0') {
    lParam = 0;
    wParam = 1;
    Msg = 0x80;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    SendMessageA(pHVar1,Msg,wParam,lParam);
  }
  if ((param_1[0x8c] != 0) && (*(char *)((int)param_1 + 0x217) != '\x01')) {
    hMenu = (HMENU)0x0;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    SetMenu(pHVar1,hMenu);
    FUN_00436284((int *)param_1[0x8c],0);
  }
  TWinControl_WMDestroy(param_1);
  return;
}


/* ==== 0043e3a8 TCustomForm.WMCommand ==== */

void TCustomForm_WMCommand(int *param_1,int *param_2)

{
  bool bVar1;
  
  if (((param_2[2] == 0) && (param_1[0x8c] != 0)) && (bVar1 = FUN_00435d4c(param_1[0x8c]), bVar1)) {
    return;
  }
  TWinControl_WMCommand(param_1,param_2);
  return;
}


/* ==== 0043e3dc TCustomForm.WMInitMenuPopup ==== */

void TCustomForm_WMInitMenuPopup(int param_1)

{
  if (*(int **)(param_1 + 0x230) != (int *)0x0) {
    FUN_00435d68(*(int **)(param_1 + 0x230));
  }
  return;
}


/* ==== 0043e3f4 TCustomForm.WMMenuChar ==== */

void TCustomForm_WMMenuChar(int *param_1,int param_2)

{
  if (param_1[0x8c] == 0) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  else {
    FUN_004364f8(param_1[0x8c],param_2);
    if (*(int *)(param_2 + 0xc) == 0) {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
      return;
    }
  }
  return;
}


/* ==== 0043e42c TCustomForm.WMMenuSelect ==== */

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
  puStack_1c = &LAB_0043e4c7;
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
      iVar2 = FUN_00435cac(*(int *)(param_1 + 0x230));
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    if (iVar2 == 0) {
      FUN_0044295c(DAT_004477c4,(uint *)0x0);
    }
    else {
      FUN_00421c50(*(undefined4 **)(iVar2 + 0x4c),(int *)&local_8);
      FUN_0044295c(DAT_004477c4,local_8);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0043e4ce;
  puStack_1c = (undefined1 *)0x43e4c6;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0043e4d4 TCustomForm.WMActivate ==== */

void TCustomForm_WMActivate(int *param_1,int param_2,undefined4 param_3)

{
  if ((*(char *)((int)param_1 + 0x217) != '\x02') || ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
    FUN_0043dcb4(param_1,*(short *)(param_2 + 4) != 0,param_3);
  }
  return;
}


/* ==== 0043e4f4 TCustomForm.virtual_0bc ==== */

void TCustomForm_virtual_0bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    *(char *)((int)param_1 + 0x213) = (char)param_2;
  }
  if ((char)param_2 != '\x01') {
    FUN_00402ef0(param_1,param_2,param_3);
  }
  if (param_1[0x93] != 0) {
    (**(code **)(*(int *)param_1[0x93] + 0x10))();
  }
  return;
}


/* ==== 0043e52c TCustomForm.WMClose ==== */

void TCustomForm_WMClose(int *param_1,undefined4 param_2,int param_3)

{
  FUN_0043f110(param_1,param_2,param_3);
  return;
}


/* ==== 0043e534 TCustomForm.WMQueryEndSession ==== */

void TCustomForm_WMQueryEndSession(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xd0))();
  if (cVar1 != '\0') {
    cVar1 = FUN_0040ba8c();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_0043e557;
    }
  }
  uVar2 = 0;
LAB_0043e557:
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  return;
}


/* ==== 0043e560 TCustomForm.CMAppSysCommand ==== */

void TCustomForm_CMAppSysCommand(int param_1,int param_2)

{
  int iVar1;
  LRESULT LVar2;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (((((*(byte *)(param_1 + 0x20) & 0x10) != 0) || (*(char *)(param_1 + 0x217) == '\x01')) ||
      (*(int *)(param_1 + 0x230) == 0)) || (*(char *)(*(int *)(param_1 + 0x230) + 0x4c) != '\0')) {
    iVar1 = *(int *)(param_2 + 8);
    FUN_0043dd18(param_1,0);
    LVar2 = FUN_00421a28(0xb017,*(WPARAM *)(iVar1 + 4),(uint)*(ushort *)(iVar1 + 8));
    if (LVar2 != 0) {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}


/* ==== 0043e5b8 TCustomForm.WMSysCommand ==== */

void TCustomForm_WMSysCommand(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *piVar1;
  
  if (((param_2[1] & 0xfff0U) == 0xf020) && (param_1 == *(int **)(DAT_004477c4 + 0x38))) {
    FUN_0044163c(DAT_004477c4,param_2);
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
    FUN_00402ef0(param_1,piVar1,param_3);
  }
  return;
}


/* ==== 0043e644 TCustomForm.WMShowWindow ==== */

void TCustomForm_WMShowWindow(int *param_1,int param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  int nCmdShow;
  
  if (*(int *)(param_2 + 8) == 1) {
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    BVar1 = IsIconic(pHVar2);
    if (BVar1 == 0) {
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
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
      nCmdShow = *(int *)(&DAT_004468f8 + (uint)*(byte *)(param_1 + 0x85) * 4);
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
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


/* ==== 0043e6dc TCustomForm.WMMDIActivate ==== */

void TCustomForm_WMMDIActivate(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  bool bVar2;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (*(char *)((int)param_1 + 0x217) == '\x01') {
    iVar1 = FUN_0042a8b4(param_1);
    bVar2 = iVar1 == *(int *)(param_2 + 8);
    FUN_0043dcb4(param_1,bVar2,extraout_ECX);
    if ((bVar2) && ((*(byte *)(*(int *)(DAT_004477c4 + 0x38) + 0x44) & 4) != 0)) {
      FUN_00402ef0(*(int **)(DAT_004477c4 + 0x38),CONCAT31((int3)((uint)extraout_EDX >> 8),1),
                   extraout_ECX_00);
    }
  }
  return;
}


/* ==== 0043e734 TCustomForm.WMNextDlgCtl ==== */

void TCustomForm_WMNextDlgCtl(int *param_1,int param_2)

{
  if (*(short *)(param_2 + 8) != 0) {
    SetFocus(*(HWND *)(param_2 + 4));
    return;
  }
  FUN_0042add8(param_1,param_1[0x82],(uint)(*(int *)(param_2 + 4) == 0),1);
  return;
}


/* ==== 0043e760 TCustomForm.WMEnterMenuLoop ==== */

void TCustomForm_WMEnterMenuLoop(int *param_1,undefined4 param_2)

{
  FUN_0043dd18((int)param_1,0);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 0043e77c FUN_0043e77c ==== */

int FUN_0043e77c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_00435cdc(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 8),'\x01');
    if (iVar1 == 0) {
      iVar1 = FUN_00435cdc(param_1,*(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 0xc),'\0');
    }
  }
  return iVar1;
}


/* ==== 0043e7bc TCustomForm.WMHelp ==== */

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
      for (piVar1 = FUN_00421a0c(*(HWND *)(*(int *)(param_2 + 8) + 0xc));
          (piVar1 != (int *)0x0 && (piVar1[0x54] == 0)); piVar1 = (int *)piVar1[9]) {
      }
      if (piVar1 == (int *)0x0) {
        return;
      }
      UVar2 = piVar1[0x54];
      FUN_0040e594(0,0,local_1c);
      FUN_0042436c(piVar1,local_1c,local_14);
      local_c = FUN_004069e8((undefined2 *)local_14);
    }
    else {
      UVar2 = FUN_0043e77c((int *)param_1[0x8c],param_2,param_3,(int)&stack0xfffffffc);
      if (UVar2 == 0) {
        UVar2 = FUN_0043e77c((int *)param_1[0x1b],extraout_EDX,puVar3,(int)&stack0xfffffffc);
      }
      FUN_0040e594(0,0,local_1c);
      FUN_0042436c(param_1,local_1c,local_14);
      local_c = FUN_004069e8((undefined2 *)local_14);
    }
    if ((*(byte *)(param_1 + 0x84) & 8) == 0) {
      FUN_00442664(DAT_004477c4,UVar2);
    }
    else {
      FUN_00442670(DAT_004477c4,0xd,local_c);
      FUN_00442670(DAT_004477c4,8,UVar2);
    }
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 0043e8c0 TCustomForm.WMGetMinMaxInfo ==== */

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


/* ==== 0043e934 TCustomForm.WMWindowPosChanging ==== */

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
  puStack_18 = &LAB_0043e9b7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TWinControl_WMWindowPosChanging(param_1,param_2);
  *in_FS_OFFSET = uStack_1c;
  *(undefined1 *)((int)param_1 + 0x212) = 0;
  return;
}


/* ==== 0043e9cc TCustomForm.CMActivate ==== */

void TCustomForm_CMActivate(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_00402ef0(param_1,param_2,param_3);
    return;
  }
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 0x20;
  return;
}


/* ==== 0043e9ec TCustomForm.CMDeactivate ==== */

void TCustomForm_CMDeactivate(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_00402ef0(param_1,param_2,param_3);
    return;
  }
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xdf;
  return;
}


/* ==== 0043ea0c TCustomForm.CMDialogKey ==== */

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
        FUN_0042add8(param_1,param_1[0x82],CONCAT31((int3)((uint)extraout_ECX_00 >> 8),-1 < SVar2),
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
      FUN_0042add8(*(int **)(iVar1 + 0x24),iVar1,uVar3,0);
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
  }
  TWinControl_CMDialogKey((int)param_1,param_2);
  return;
}


/* ==== 0043eaa8 TCustomForm.CMShowingChanged ==== */

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
  puStack_20 = &LAB_0043f015;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) &&
     (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 0xb3) & 4) != 0)) {
    puStack_28 = (undefined1 *)0x43eae9;
    FUN_00405298((undefined4 *)PTR_PTR_00446d98,(int *)&local_c);
    puStack_28 = (undefined1 *)0x43eaf8;
    piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_c);
    puStack_28 = (undefined1 *)0x43eafd;
    FUN_0040346c(piVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  puStack_28 = (undefined1 *)0x43eb07;
  FUN_00442a4c(DAT_004477c4);
  *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 4;
  puStack_2c = &LAB_0043eff8;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if ((*(byte *)(local_8 + 8) & 0x10) == 0) {
    if ((char)local_8[0x5a] == '\0') {
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffc4;
      puStack_28 = &stack0xfffffffc;
      FUN_00402ef0(local_8,0,extraout_ECX);
      *in_FS_OFFSET = uVar4;
      if (*(int **)(DAT_004477c8 + 0x60) == local_8) {
        FUN_0043dd68((int)local_8,'\0');
      }
      if (*(char *)((int)local_8 + 0x217) == '\x01') {
        FUN_00427e1c(local_8);
      }
      else if ((*(byte *)(local_8 + 0xb3) & 8) == 0) {
        hWnd = (HWND)0x0;
        pHVar6 = (HWND)FUN_0042a8b4(local_8);
        pHVar8 = GetActiveWindow();
        if (pHVar6 == pHVar8) {
          pHVar6 = (HWND)FUN_0042a8b4(local_8);
          BVar7 = IsIconic(pHVar6);
          if (BVar7 == 0) {
            iVar3 = FUN_0042a8b4(local_8);
            hWnd = (HWND)FUN_00439a7c(iVar3);
          }
        }
        if (hWnd == (HWND)0x0) {
          iVar3 = 0;
          pHVar6 = (HWND)FUN_0042a8b4(local_8);
          ShowWindow(pHVar6,iVar3);
        }
        else {
          UVar9 = 0x97;
          cy_val = 0;
          cx_val = 0;
          y_val = 0;
          iVar3 = 0;
          pHVar8 = (HWND)0x0;
          pHVar6 = (HWND)FUN_0042a8b4(local_8);
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
        pHVar6 = (HWND)FUN_0042a8b4(local_8);
        SetWindowPos(pHVar6,pHVar8,iVar3,y_val,cx_val,cy_val,UVar9);
      }
    }
    else {
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffc4;
      puStack_28 = &stack0xfffffffc;
      FUN_00402ef0(local_8,0,extraout_ECX);
      *in_FS_OFFSET = uVar4;
      if (((char)local_8[0x86] == '\x04') ||
         (((char)local_8[0x86] == '\x06' && (*(char *)((int)local_8 + 0x217) == '\x01')))) {
        if (*(char *)((int)local_8 + 0x217) == '\x01') {
          iVar3 = TForm_GetClientWidth(*(int **)(DAT_004477c4 + 0x38));
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = TForm_GetClientHeight(*(int **)(DAT_004477c4 + 0x38));
          cx_val = iVar3 - local_8[0xf] >> 1;
          if (cx_val < 0) {
            cx_val = cx_val + (uint)((iVar3 - local_8[0xf] & 1U) != 0);
          }
        }
        else {
          iVar3 = FUN_00440178();
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044016c();
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
          FUN_0043d064(local_8);
        }
      }
      else if ((byte)((char)local_8[0x86] - 6U) < 2) {
        iVar3 = *(int *)(DAT_004477c4 + 0x38);
        if ((char)local_8[0x86] == '\a') {
          uVar4 = FUN_00402e8c((int *)local_8[1],(int)&PTR_TWinControl_virtual_000_00438554);
          if ((char)uVar4 != '\0') {
            iVar3 = local_8[1];
          }
        }
        if (iVar3 == 0) {
          iVar3 = FUN_00440178();
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044016c();
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
          FUN_0043d064(local_8);
        }
      }
      else if ((char)local_8[0x86] == '\x05') {
        if (*(char *)((int)local_8 + 0x217) == '\x01') {
          iVar3 = TForm_GetClientWidth(*(int **)(DAT_004477c4 + 0x38));
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = TForm_GetClientHeight(*(int **)(DAT_004477c4 + 0x38));
          cx_val = iVar3 - local_8[0xf] >> 1;
          if (cx_val < 0) {
            cx_val = cx_val + (uint)((iVar3 - local_8[0xf] & 1U) != 0);
          }
        }
        else {
          iVar3 = FUN_004401a8();
          y_val = iVar3 - local_8[0xe] >> 1;
          if (y_val < 0) {
            y_val = y_val + (uint)((iVar3 - local_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044019c();
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
          WVar5 = FUN_0042a8b4(local_8);
          SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x223,WVar5,lParam);
          iVar3 = 3;
          pHVar6 = (HWND)FUN_0042a8b4(local_8);
          ShowWindow(pHVar6,iVar3);
        }
        else {
          iVar3 = *(int *)(&DAT_00446908 + (uint)*(byte *)((int)local_8 + 0x213) * 4);
          pHVar6 = (HWND)FUN_0042a8b4(local_8);
          ShowWindow(pHVar6,iVar3);
          param = local_8[0xe] | local_8[0xf] << 0x10;
          WVar5 = 0;
          UVar9 = 5;
          pHVar6 = (HWND)FUN_0042a8b4(local_8);
          CallWindowProcA((WNDPROC)&DAT_00406528,pHVar6,UVar9,WVar5,param);
          FUN_00424a28(local_8,extraout_EDX,extraout_ECX_00);
        }
        SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x234,0,0);
      }
      else {
        iVar3 = *(int *)(&DAT_00446908 + (uint)*(byte *)((int)local_8 + 0x213) * 4);
        pHVar6 = (HWND)FUN_0042a8b4(local_8);
        ShowWindow(pHVar6,iVar3);
      }
    }
  }
  *in_FS_OFFSET = uStack_30;
  *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) & 0xfb;
  return;
}


/* ==== 0043f024 TCustomForm.CMIconChanged ==== */

void TCustomForm_CMIconChanged(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041c9f0(param_1[0x8a]);
  if (iVar1 == 0) {
    FUN_0043be4c(param_1);
  }
  return;
}


/* ==== 0043f044 TCustomForm.CMRelease ==== */

void TCustomForm_CMRelease(int *param_1)

{
  FUN_00402d14(param_1);
  return;
}


/* ==== 0043f04c TCustomForm.CMTextChanged ==== */

void TCustomForm_CMTextChanged(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  if (((*(char *)((int)param_1 + 0x217) == '\x01') && (*(int *)(DAT_004477c4 + 0x38) != 0)) &&
     (*(int *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c) != 0)) {
    SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x234,0,0);
  }
  return;
}


/* ==== 0043f09c TCustomForm.CMUIActivate ==== */

void TCustomForm_CMUIActivate(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  return;
}


/* ==== 0043f0a4 TCustomForm.CMParentFontChanged ==== */

void TCustomForm_CMParentFontChanged(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      puStack_10 = (undefined1 *)0x43f0d0;
      piVar1 = FUN_004163b8((int *)&PTR_TPersistent_virtual_000_00414ecc,'\x01',param_3);
      puStack_14 = &LAB_0043f102;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      (**(code **)(**(int **)(param_1 + 0x58) + 8))(*(int **)(param_1 + 0x58),piVar1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x43f109;
      puStack_14 = (undefined1 *)0x43f101;
      FUN_00402d14(piVar1);
      return;
    }
    puStack_10 = (undefined1 *)0x43f0c2;
    (**(code **)(**(int **)(param_1 + 0x58) + 8))
              (*(int **)(param_1 + 0x58),*(undefined4 *)(param_2 + 8));
  }
  return;
}


/* ==== 0043f110 FUN_0043f110 ==== */

void FUN_0043f110(int *param_1,undefined4 param_2,int param_3)

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
      FUN_00402ef0(param_1,&iStack_c,extraout_ECX);
      if ((char)iStack_c != '\0') {
        if (param_1 == *(int **)(DAT_004477c4 + 0x38)) {
          FUN_00442264();
        }
        else if ((char)iStack_c == '\x01') {
          FUN_0043f2c0(param_1,extraout_EDX,extraout_ECX_00);
        }
        else if ((char)iStack_c == '\x03') {
          TForm_SetWindowState(param_1,1);
        }
        else {
          FUN_0043f35c(param_1);
        }
      }
    }
  }
  else {
    param_1[0x8d] = 2;
  }
  return;
}


/* ==== 0043f1b4 TCustomForm.virtual_0d0 ==== */

uint TCustomForm_virtual_0d0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int i_val;
  int j;
  uint local_10;
  
  iVar1 = param_1;
  local_10 = param_3;
  if (*(char *)(param_1 + 0x217) == '\x02') {
    local_10 = param_3 & 0xffffff00;
    iVar1 = FUN_0043ca78(param_1);
    if (-1 < iVar1 + -1) {
      j = 0;
      i_val = iVar1;
      do {
        piVar2 = (int *)FUN_0043cac4(param_1,j);
        iVar1 = (**(code **)(*piVar2 + 0xd0))();
        if ((char)iVar1 == '\0') goto LAB_0043f20f;
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  local_10 = CONCAT31(local_10._1_3_,1);
  if (*(short *)(param_1 + 0x282) != 0) {
    iVar1 = (**(code **)(param_1 + 0x280))(*(undefined4 *)(param_1 + 0x284),param_1,&local_10);
  }
LAB_0043f20f:
  return CONCAT31((int3)((uint)iVar1 >> 8),(undefined1)local_10);
}


/* ==== 0043f218 FUN_0043f218 ==== */

void FUN_0043f218(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  char local_9;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_0043f297;
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
    FUN_0043f35c(local_8);
  }
  *in_FS_OFFSET = uStack_24;
  return;
}


/* ==== 0043f2c0 FUN_0043f2c0 ==== */

void FUN_0043f2c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  TForm_SetVisible(param_1,0,param_3);
  return;
}


/* ==== 0043f2c8 FUN_0043f2c8 ==== */

void FUN_0043f2c8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TForm_SetVisible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  FUN_00424a28(param_1,extraout_EDX,extraout_ECX);
  return;
}


/* ==== 0043f2e0 TCustomForm.virtual_0b0 ==== */

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
  puStack_14 = &LAB_0043f34e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(char *)((int)param_1 + 0x216) != '\0') goto LAB_0043f338;
  puVar1 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x47) == '\0') {
LAB_0043f310:
    puStack_10 = puVar1;
    FUN_00405298((undefined4 *)PTR_PTR_00446d14,(int *)&local_8);
    piVar3 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar3);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    puVar1 = puStack_10;
    if (cVar2 == '\0') goto LAB_0043f310;
  }
  FUN_0043dc64(param_1);
LAB_0043f338:
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0043f355;
  puStack_14 = (undefined1 *)0x43f34d;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0043f35c FUN_0043f35c ==== */

void FUN_0043f35c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xb021;
  hWnd = (HWND)FUN_0042a8b4(param_1);
  PostMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 0043f378 TCustomForm.virtual_0d8 ==== */

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
  puStack_34 = &LAB_0043f608;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_8 = param_1;
  FUN_0042320c();
  if (*(char *)((int)local_8 + 0x47) == '\0') {
    cVar1 = (**(code **)(*local_8 + 0x4c))();
    if (((cVar1 != '\0') && ((*(byte *)(local_8 + 0xb3) & 8) == 0)) &&
       (*(char *)((int)local_8 + 0x217) != '\x01')) goto LAB_0043f3ee;
  }
  FUN_00405298((undefined4 *)PTR_PTR_00446bfc,(int *)&local_24);
  piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_24);
  FUN_0040346c(piVar2);
LAB_0043f3ee:
  pHVar3 = GetCapture();
  if (pHVar3 != (HWND)0x0) {
    LVar10 = 0;
    WVar9 = 0;
    UVar8 = 0x1f;
    pHVar3 = GetCapture();
    puStack_4c = (undefined1 *)0x43f408;
    SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  }
  ReleaseCapture();
  *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 8;
  active_window = GetActiveWindow();
  local_14 = DAT_00446864;
  FUN_0040f0a0(*(int **)(DAT_004477c8 + 0x70),0,*(int *)(DAT_004477c8 + 0x6c));
  *(int **)(DAT_004477c8 + 0x6c) = local_8;
  local_16 = *(undefined2 *)(DAT_004477c8 + 0x38);
  FUN_00440638(DAT_004477c8,0);
  local_1c = *(undefined4 *)(DAT_004477c8 + 0x3c);
  local_10 = FUN_0043992c(0);
  *in_FS_OFFSET = &stack0xffffffbc;
  FUN_0043f2c8(local_8,0,extraout_ECX);
  puStack_4c = &LAB_0043f547;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xb000;
  pHVar3 = (HWND)FUN_0042a8b4(local_8);
  SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  uVar6 = 0;
  local_8[0x8d] = 0;
  uVar5 = extraout_ECX_00;
  do {
    FUN_00442168(DAT_004477c4,uVar6,uVar5);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX;
    if (*(char *)(DAT_004477c4 + 0x8c) == '\0') {
      if (local_8[0x8d] != 0) {
        FUN_0043f218(local_8);
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
  pHVar3 = (HWND)FUN_0042a8b4(local_8);
  SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  pHVar3 = (HWND)FUN_0042a8b4(local_8);
  pHVar4 = GetActiveWindow();
  if (pHVar3 != pHVar4) {
    active_window = (HWND)0x0;
  }
  *in_FS_OFFSET = uStack_50;
  puStack_4c = (undefined1 *)0x43f546;
  FUN_0043f2c0(local_8,uStack_50,puVar7);
  return;
}


/* ==== 0043f618 FUN_0043f618 ==== */

void FUN_0043f618(int param_1)

{
  int i_val;
  int *piVar1;
  undefined4 uVar2;
  int j;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    i_val = FUN_0042781c(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_004277e0(param_1,j);
        if (((*(byte *)((int)piVar1 + 0x41) & 0x80) != 0) && (*(char *)((int)piVar1 + 0x47) != '\0')
           ) {
          (**(code **)(*piVar1 + 0x70))();
        }
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_virtual_000_00420fa8);
        if ((char)uVar2 != '\0') {
          FUN_0043f618((int)piVar1);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0043f688 TCustomForm.virtual_0c8 ==== */

void TCustomForm_virtual_0c8(int *param_1)

{
  int i_val;
  int *piVar1;
  int j;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && ((char)param_1[0x5a] != '\0')) {
    (**(code **)(*param_1 + 0x70))();
    if (param_1[0x8c] != 0) {
      i_val = FUN_00434938(*(int *)(param_1[0x8c] + 0x28));
      if (-1 < i_val + -1) {
        j = 0;
        do {
          piVar1 = (int *)FUN_00434948(*(int *)(param_1[0x8c] + 0x28),j);
          if (*(char *)((int)piVar1 + 0x32) != '\0') {
            (**(code **)(*piVar1 + 0x3c))();
          }
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    }
    FUN_0043f618((int)param_1);
  }
  return;
}


/* ==== 0043f6f0 TCustomForm.dynamic_ffd5 ==== */

void TCustomForm_dynamic_ffd5(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00440be8(DAT_004477c8,param_1);
    return;
  }
  TControl_dynamic_ffd5(param_1);
  return;
}


/* ==== 0043f70c TCustomForm.WMWinIniChange ==== */

void TCustomForm_WMWinIniChange(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TWinControl_WMWinIniChange((int)param_1,param_2);
  if (*(int *)(param_2 + 4) == 0x2f) {
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 0043f730 FUN_0043f730 ==== */

undefined4 FUN_0043f730(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     (uVar1 = FUN_00402ef0(param_1,*(undefined4 *)(*(int *)(param_4 + -4) + 8),param_3),
     (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0043f760 FUN_0043f760 ==== */

undefined4 FUN_0043f760(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int i_val;
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int j;
  
  if ((*(char *)(param_1 + 0x168) != '\0') && (i_val = FUN_0042781c(param_1), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar1 = (int *)FUN_004277e0(param_1,j);
      if (((*(char *)((int)piVar1 + 0x47) != '\0') &&
          (uVar2 = FUN_0043f730(piVar1,extraout_EDX,extraout_ECX,param_4), (char)uVar2 != '\0')) ||
         ((uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_virtual_000_00420fa8),
          (char)uVar2 != '\0' &&
          (uVar2 = FUN_0043f760((int)piVar1,extraout_EDX_00,extraout_ECX_00,param_4),
          (char)uVar2 != '\0')))) {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0043f7dc TCustomForm.CMActionExecute ==== */

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
    uVar1 = FUN_0043f730((int *)param_1[0x82],param_2,param_3,(int)&stack0xfffffffc);
    if (((char)uVar1 == '\0') &&
       ((uVar1 = FUN_0043f730(param_1,extraout_EDX,puVar2,(int)&stack0xfffffffc),
        (char)uVar1 == '\0' &&
        (uVar1 = FUN_0043f760((int)param_1,extraout_EDX_00,puVar3,(int)&stack0xfffffffc),
        (char)uVar1 == '\0')))) {
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


/* ==== 0043f830 FUN_0043f830 ==== */

undefined4 FUN_0043f830(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     (uVar1 = FUN_00402ef0(param_1,*(undefined4 *)(*(int *)(param_4 + -4) + 8),param_3),
     (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0043f860 FUN_0043f860 ==== */

undefined4 FUN_0043f860(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int i_val;
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int j;
  
  if ((*(char *)(param_1 + 0x168) != '\0') && (i_val = FUN_0042781c(param_1), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar1 = (int *)FUN_004277e0(param_1,j);
      if (((*(char *)((int)piVar1 + 0x47) != '\0') &&
          (uVar2 = FUN_0043f830(piVar1,extraout_EDX,extraout_ECX,param_4), (char)uVar2 != '\0')) ||
         ((uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_virtual_000_00420fa8),
          (char)uVar2 != '\0' &&
          (uVar2 = FUN_0043f860((int)piVar1,extraout_EDX_00,extraout_ECX_00,param_4),
          (char)uVar2 != '\0')))) {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0043f8dc TCustomForm.CMActionUpdate ==== */

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
    uVar1 = FUN_0043f830((int *)param_1[0x82],param_2,param_3,(int)&stack0xfffffffc);
    if (((char)uVar1 == '\0') &&
       ((uVar1 = FUN_0043f830(param_1,extraout_EDX,puVar2,(int)&stack0xfffffffc),
        (char)uVar1 == '\0' &&
        (uVar1 = FUN_0043f860((int)param_1,extraout_EDX_00,puVar3,(int)&stack0xfffffffc),
        (char)uVar1 == '\0')))) {
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


/* ==== 0043f930 FUN_0043f930 ==== */

undefined4 FUN_0043f930(void)

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
      iVar1 = FUN_0040f024(*(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x2c8),j);
      uVar2 = FUN_0042f824(iVar1,*(int *)(in_stack_00000004 + -8));
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0043f984 TCustomForm.dynamic_ffaf ==== */

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
      param_1 = FUN_00402ef0(piVar1,local_c,param_3);
      if ((char)param_1 != '\0') goto LAB_0043f9f2;
    }
    param_1 = FUN_0043f930();
    if ((char)param_1 == '\0') {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_0043f9f4;
    }
  }
LAB_0043f9f2:
  uVar3 = (undefined3)((uint)param_1 >> 8);
  uVar2 = 1;
LAB_0043f9f4:
  return CONCAT31(uVar3,uVar2);
}


/* ==== 0043fa00 TCustomForm.virtual_028 ==== */

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
  FUN_00405308(in_stack_0000000c,*(int **)(in_stack_00000004 + 0x238));
  return 0;
}


/* ==== 0043fa74 TCustomForm.dynamic_ffb7 ==== */

void TCustomForm_dynamic_ffb7(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[0x83] == 0) {
    TWinControl_dynamic_ffb7(param_1,param_2);
  }
  else {
    uVar1 = FUN_00425780(param_1[0x83],0xb043,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar1;
  }
  return;
}


/* ==== 0043faac TCustomDockForm.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    cVar1 = extraout_DL;
  }
  (**(code **)(*param_1 + 0xcc))(param_1,0);
  TScrollBox_SetAutoScroll((int)param_1,'\0');
  TForm_SetBorderStyle((int)param_1,'\x05');
  TScrollBox_SetDockSite(param_1,'\x01',extraout_ECX);
  TForm_SetFormStyle(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),3),extraout_ECX_00);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}


/* ==== 0043fb14 TCustomDockForm.dynamic_ffcc ==== */

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
  puStack_20 = &LAB_0043fbed;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_2;
  i_val = FUN_004291ac((int)param_1);
  if (i_val == 1) {
    i_val = FUN_00424758((int)local_8);
    FUN_00403aa0((int *)&local_10,(undefined4 *)0x0,i_val + 1);
    uVar2 = FUN_00403c38((int)local_10);
    puVar3 = FUN_00403dfc((undefined *)local_10);
    FUN_00424768((int)local_8,puVar3,uVar2);
    i_val = FUN_00403c38((int)local_10);
    if (0 < i_val) {
      j = 1;
      do {
        cVar1 = *(char *)((int)local_10 + j + -1);
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          FUN_00403f6c((int *)&local_10,j - 1);
          break;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    TLabel_SetCaption((int)param_1,local_10);
  }
  TWinControl_dynamic_ffcc(param_1,local_8);
  TLabel_SetAlign(local_8,CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    TForm_SetVisible(param_1,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0043fbf4;
  puStack_20 = (undefined1 *)0x43fbec;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 0043fbfc TCustomDockForm.dynamic_ffc3 ==== */

void TCustomDockForm_dynamic_ffc3(int *param_1)

{
  int iVar1;
  
  TWinControl_dynamic_ffc3();
  iVar1 = FUN_004291ac((int)param_1);
  if (iVar1 == 0) {
    FUN_0043f35c(param_1);
  }
  return;
}


/* ==== 0043fc1c TCustomDockForm.virtual_00c ==== */

void TCustomDockForm_virtual_00c(int *param_1)

{
  int i_val;
  int *piVar1;
  int j;
  undefined1 auStack_20 [16];
  
  i_val = FUN_0042781c((int)param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      (**(code **)(*param_1 + 0x40))(param_1,auStack_20);
      piVar1 = (int *)FUN_004277e0((int)param_1,j);
      FUN_00402ef0(piVar1,param_1,auStack_20);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  TCustomForm_virtual_00c(param_1);
  return;
}


/* ==== 0043fc68 TCustomDockForm.dynamic_ffc1 ==== */

void TCustomDockForm_dynamic_ffc1
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004291ac(param_1);
  *(bool *)param_4 = iVar1 == 0;
  return;
}


/* ==== 0043fc94 TCustomDockForm.WMNCHitTest ==== */

void TCustomDockForm_WMNCHitTest(int *param_1,int param_2)

{
  TWinControl_WMNCHitTest(param_1,param_2);
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(int *)(param_2 + 0xc) == 1)) {
    *(undefined4 *)(param_2 + 0xc) = 2;
  }
  return;
}


/* ==== 0043fcbc TCustomDockForm.WMNCLButtonDown ==== */

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
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    BVar2 = IsIconic(pHVar1);
    if ((BVar2 == 0) && (x_val = FUN_004291ac((int)param_1), 0 < x_val)) {
      UVar4 = 7;
      cy = 0;
      cx = 0;
      Y = 0;
      x_val = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar1 = (HWND)FUN_0042a8b4(param_1);
      SetWindowPos(pHVar1,hWndInsertAfter,x_val,Y,cx,cy,UVar4);
      lParam = *(LPARAM *)(param_2 + 8);
      wParam = *(WPARAM *)(param_2 + 4);
      UVar4 = 0xa2;
      pHVar1 = (HWND)FUN_0042a8b4(param_1);
      PostMessageA(pHVar1,UVar4,wParam,lParam);
      if (*(char *)((int)param_1 + 0x216) == '\0') {
        return;
      }
      piVar3 = (int *)FUN_004291c0((int)param_1,0);
      FUN_00424e20(piVar3,'\x01',-1);
      return;
    }
  }
  TCustomForm_WMNCLButtonDown(param_1,param_2);
  return;
}


/* ==== 0043fd54 TCustomDockForm.CMControlListChange ==== */

void TCustomDockForm_CMControlListChange(int param_1,int param_2)

{
  int *piVar1;
  undefined4 auStack_1c [4];
  
  TWinControl_CMControlListChange(param_1);
  if (*(int *)(param_2 + 8) == 0) {
    FUN_00425780(param_1,0xb039,0,*(undefined4 *)(param_2 + 4));
    piVar1 = *(int **)(param_2 + 4);
    if (param_1 == piVar1[0x24]) {
      FUN_004241fc((int)piVar1,auStack_1c);
      FUN_00402ef0(piVar1,0xffffffff,auStack_1c);
    }
  }
  return;
}


/* ==== 0043fdac TCustomDockForm.CMDockNotification ==== */

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
  puStack_18 = &LAB_0043fe81;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (**(int **)(param_2 + 8) == 0xc) {
    i_val = FUN_00424758(*(int *)(param_2 + 4));
    FUN_00403aa0((int *)&local_c,(undefined4 *)0x0,i_val + 1);
    uVar2 = FUN_00403c38((int)local_c);
    puVar3 = FUN_00403dfc((undefined *)local_c);
    FUN_00424768(*(int *)(param_2 + 4),puVar3,uVar2);
    i_val = FUN_00403c38((int)local_c);
    if (0 < i_val) {
      j = 1;
      do {
        cVar1 = *(char *)((int)local_c + j + -1);
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          FUN_00403f6c((int *)&local_c,j - 1);
          break;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    TLabel_SetCaption((int)local_8,local_c);
  }
  else if (**(int **)(param_2 + 8) == 0xb00b) {
    TForm_SetVisible(local_8,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)(*(int *)(param_2 + 4) + 0x47)),extraout_ECX);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043fe88;
  puStack_18 = (undefined1 *)0x43fe80;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 0043fe90 TCustomDockForm.CMUndockClient ==== */

void TCustomDockForm_CMUndockClient(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  TWinControl_CMUndockClient(param_1,param_2);
  TLabel_SetAlign(*(int **)(param_2 + 8),0,extraout_ECX);
  return;
}


/* ==== 0043fea8 TCustomDockForm.CMVisibleChanged ==== */

void TCustomDockForm_CMVisibleChanged(int *param_1)

{
  int i_val;
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int j;
  
  TWinControl_CMVisibleChanged(param_1);
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
    i_val = FUN_004291ac((int)param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_004291c0((int)param_1,j);
        TLabel_SetVisible(piVar1,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                          *(undefined1 *)((int)param_1 + 0x47)),extraout_ECX);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0043fee4 FUN_0043fee4 ==== */

undefined1 * FUN_0043fee4(void)

{
  undefined4 local_28 [10];
  
  local_28[0] = 0x28;
  (**(code **)PTR_DAT_00446b50)();
  return (undefined1 *)local_28;
}


/* ==== 0043ff04 FUN_0043ff04 ==== */

int FUN_0043ff04(void)

{
  undefined4 uStack_20;
  
  (**(code **)PTR_DAT_00446b50)();
  return uStack_20 + -0x28;
}


/* ==== 0043ff28 FUN_0043ff28 ==== */

undefined4 FUN_0043ff28(void)

{
  (**(code **)PTR_DAT_00446b50)();
  return 0x28;
}


/* ==== 0043ff48 FUN_0043ff48 ==== */

int FUN_0043ff48(void)

{
  undefined4 local_28;
  int iStack_24;
  
  local_28 = 0x28;
  (**(code **)PTR_DAT_00446b50)();
  return iStack_24 - (int)&local_28;
}


/* ==== 0043ff6c FUN_0043ff6c ==== */

undefined4
FUN_0043ff6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = FUN_00402ce4((int *)&DAT_00439694,'\x01',param_3);
  *(undefined4 *)(iVar1 + 4) = param_4;
  *(int *)(iVar1 + 8) = param_7[2];
  iVar1 = FUN_0040eec8(param_7,iVar1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


/* ==== 0043ff9c TScreen.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  FUN_004402e8((int)param_1);
  pHVar1 = GetKeyboardLayout(0);
  param_1[0xc] = (int)pHVar1;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[0x10] = iVar2;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_01);
  param_1[0x11] = iVar2;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_02);
  param_1[0x12] = iVar2;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_03);
  param_1[0x13] = iVar2;
  iVar2 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_04);
  param_1[0x1c] = iVar2;
  hdc = GetDC((HWND)0x0);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  param_1[0xd] = iVar2;
  ReleaseDC((HWND)0x0,hdc);
  (**(code **)PTR_DAT_00446c24)();
  piVar3 = FUN_004163b8((int *)&PTR_TPersistent_virtual_000_00414ecc,'\x01',extraout_ECX_05);
  param_1[0x1e] = (int)piVar3;
  piVar3 = FUN_004163b8((int *)&PTR_TPersistent_virtual_000_00414ecc,'\x01',extraout_ECX_06);
  param_1[0x1f] = (int)piVar3;
  piVar3 = FUN_004163b8((int *)&PTR_TPersistent_virtual_000_00414ecc,'\x01',extraout_ECX_07);
  param_1[0x1d] = (int)piVar3;
  FUN_004406c8((int)param_1);
  iVar2 = param_1[0x1e];
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_004405e4;
  iVar2 = param_1[0x1f];
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_004405e4;
  iVar2 = param_1[0x1d];
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_004405e4;
  if (cVar4 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}


/* ==== 004400c4 TScreen.Destroy ==== */

void TScreen_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int i_val;
  int j;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[0x1d]);
  FUN_00402d14((int *)piVar1[0x1f]);
  FUN_00402d14((int *)piVar1[0x1e]);
  FUN_00402d14((int *)piVar1[0x12]);
  FUN_00402d14((int *)piVar1[0x11]);
  FUN_00402d14((int *)piVar1[0x10]);
  FUN_00402d14((int *)piVar1[9]);
  FUN_00402d14((int *)piVar1[10]);
  FUN_00402d14((int *)piVar1[0x1c]);
  if ((piVar1[0x13] != 0) && (i_val = *(int *)(piVar1[0x13] + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0040f024((undefined4 *)piVar1[0x13],j);
      FUN_00402d14(piVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_00402d14((int *)piVar1[0x13]);
  FUN_00440344((int)piVar1);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0044016c FUN_0044016c ==== */

void FUN_0044016c(void)

{
  (**(code **)PTR_DAT_00446b78)();
  return;
}


/* ==== 00440178 FUN_00440178 ==== */

void FUN_00440178(void)

{
  (**(code **)PTR_DAT_00446b78)();
  return;
}


/* ==== 00440184 FUN_00440184 ==== */

void FUN_00440184(void)

{
  (**(code **)PTR_DAT_00446b78)();
  return;
}


/* ==== 00440190 FUN_00440190 ==== */

void FUN_00440190(void)

{
  (**(code **)PTR_DAT_00446b78)();
  return;
}


/* ==== 0044019c FUN_0044019c ==== */

void FUN_0044019c(void)

{
  (**(code **)PTR_DAT_00446b78)();
  return;
}


/* ==== 004401a8 FUN_004401a8 ==== */

void FUN_004401a8(void)

{
  (**(code **)PTR_DAT_00446b78)();
  return;
}


/* ==== 004401b4 FUN_004401b4 ==== */

void FUN_004401b4(int param_1,int param_2)

{
  FUN_0040f024(*(undefined4 **)(param_1 + 0x4c),param_2);
  return;
}


/* ==== 004401c8 FUN_004401c8 ==== */

int FUN_004401c8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  if (iVar1 == 0) {
    iVar1 = (**(code **)PTR_DAT_00446b78)();
    return iVar1;
  }
  return iVar1;
}


/* ==== 004401e4 FUN_004401e4 ==== */

void FUN_004401e4(int param_1,int param_2)

{
  FUN_0040f024(*(undefined4 **)(param_1 + 0x40),param_2);
  return;
}


/* ==== 004401f8 FUN_004401f8 ==== */

undefined4 FUN_004401f8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
}


/* ==== 00440200 FUN_00440200 ==== */

void FUN_00440200(int param_1,int param_2)

{
  FUN_0040f024(*(undefined4 **)(param_1 + 0x44),param_2);
  return;
}


/* ==== 00440214 FUN_00440214 ==== */

undefined4 FUN_00440214(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x44) + 8);
}


/* ==== 0044021c FUN_0044021c ==== */

void FUN_0044021c(int param_1)

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


/* ==== 00440268 FUN_00440268 ==== */

void FUN_00440268(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_0040eec8(*(int **)(param_1 + 0x44),(int)param_2);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_virtual_000_00438838);
  if ((char)uVar1 != '\0') {
    FUN_0040eec8(*(int **)(param_1 + 0x40),(int)param_2);
    FUN_00442a4c(DAT_004477c4);
  }
  return;
}


/* ==== 004402a0 FUN_004402a0 ==== */

void FUN_004402a0(int param_1,int param_2)

{
  FUN_0040f164(*(int **)(param_1 + 0x44),param_2);
  FUN_0040f164(*(int **)(param_1 + 0x40),param_2);
  FUN_00442a4c(DAT_004477c4);
  if ((*(int *)(*(int *)(param_1 + 0x44) + 8) == 0) && (*(int *)(DAT_004477c4 + 0x74) != 0)) {
    FUN_0042bc80(*(int **)(DAT_004477c4 + 0x74));
  }
  return;
}


/* ==== 004402e8 FUN_004402e8 ==== */

void FUN_004402e8(int param_1)

{
  HCURSOR pHVar1;
  int i_val;
  undefined4 *puVar2;
  HINSTANCE pHVar3;
  
  pHVar1 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  *(HCURSOR *)(param_1 + 0x54) = pHVar1;
  i_val = -0x16;
  puVar2 = &DAT_00446914;
  do {
    pHVar3 = DAT_004474d4;
    if (((i_val < -0x11) || (-0xc < i_val)) && (i_val != -0x15)) {
      pHVar3 = (HINSTANCE)0x0;
    }
    pHVar1 = LoadCursorA(pHVar3,(LPCSTR)*puVar2);
    FUN_004403a0(param_1,i_val,pHVar1);
    i_val = i_val + 1;
    puVar2 = puVar2 + 1;
  } while (i_val != -1);
  return;
}


/* ==== 00440344 FUN_00440344 ==== */

void FUN_00440344(int param_1)

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
    FUN_004026d0((int)puVar3);
    puVar3 = puVar2;
  }
  pHVar4 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  if (pHVar4 != *(HCURSOR *)(param_1 + 0x54)) {
    DestroyCursor(*(HCURSOR *)(param_1 + 0x54));
  }
  return;
}


/* ==== 004403a0 FUN_004403a0 ==== */

void FUN_004403a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004026b8(0xc);
  *puVar1 = *(undefined4 *)(param_1 + 0x50);
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  return;
}


/* ==== 004403c8 FUN_004403c8 ==== */

void FUN_004403c8(int param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_270 = &LAB_00440573;
  uStack_274 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_274;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = FUN_00402ce4((int *)&PTR_TPersistent_virtual_000_0040dcac,'\x01',param_3);
    *(undefined4 *)(local_8 + 0x28) = uVar2;
    FUN_004039b8((int *)(local_8 + 0x2c));
    keyboard_layout_list = GetKeyboardLayoutList(0x40,local_118);
    if (-1 < keyboard_layout_list + -1) {
      local_18 = local_118;
      i_val = keyboard_layout_list;
      do {
        uVar2 = FUN_0042edf8();
        if ((char)uVar2 != '\0') {
          phkResult = &key;
          samDesired = 0x20019;
          ulOptions = 0;
          local_260 = *local_18;
          local_25c = 0;
          lpSubKey = FUN_004086d4(local_258,
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
              FUN_00403be8(&local_264,(char *)local_218,0x100);
              (**(code **)(**(int **)(local_8 + 0x28) + 0x38))
                        (*(int **)(local_8 + 0x28),local_264,*local_18);
              if (*local_18 == *(HKL *)(local_8 + 0x30)) {
                FUN_00403be8((int *)(local_8 + 0x2c),(char *)local_218,0x100);
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
    FUN_00410a4c(piVar1,'\x01');
  }
  *in_FS_OFFSET = uStack_274;
  puStack_26c = &LAB_0044057a;
  puStack_270 = (undefined1 *)0x440572;
  FUN_004039b8(&local_264);
  return;
}


/* ==== 004405c8 FUN_004405c8 ==== */

void FUN_004405c8(int param_1,int *param_2,undefined4 param_3)

{
  FUN_004403c8(param_1,param_2,param_3);
  FUN_00403a0c(param_2,*(undefined4 **)(param_1 + 0x2c));
  return;
}


/* ==== 004405f4 FUN_004405f4 ==== */

void FUN_004405f4(int param_1,int param_2)

{
  FUN_0040f024(*(undefined4 **)(param_1 + 0x48),param_2);
  return;
}


/* ==== 00440608 FUN_00440608 ==== */

undefined4 FUN_00440608(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x48) + 8);
}


/* ==== 00440610 FUN_00440610 ==== */

undefined4 FUN_00440610(int param_1,int param_2)

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


/* ==== 00440638 FUN_00440638 ==== */

void FUN_00440638(int param_1,short param_2)

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
          lParam = FUN_004069e8((undefined2 *)&point);
          param = SendMessageA(hWnd,0x84,0,lParam);
          param = FUN_00406970(param,CONCAT22(extraout_var,0x200));
          SendMessageA(hWnd,0x20,(WPARAM)hWnd,param);
          return;
        }
      }
    }
    hCursor = (HCURSOR)FUN_00440610(param_1,(int)param_2);
    SetCursor(hCursor);
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}


/* ==== 004406c8 FUN_004406c8 ==== */

void FUN_004406c8(int param_1)

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
    FUN_00416748(*(int **)(param_1 + 0x78),h_val);
  }
  else {
    pHVar2 = CreateFontIndirectA(&local_194);
    FUN_00416748(*(int **)(param_1 + 0x78),pHVar2);
  }
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 == 0) {
    TFont_SetSize(*(int **)(param_1 + 0x74),8);
    h_val = GetStockObject(0xd);
    FUN_00416748(*(int **)(param_1 + 0x7c),h_val);
  }
  else {
    pHVar2 = CreateFontIndirectA(local_7c);
    FUN_00416748(*(int **)(param_1 + 0x74),pHVar2);
    pHVar2 = CreateFontIndirectA(&local_b8);
    FUN_00416748(*(int **)(param_1 + 0x7c),pHVar2);
  }
  return;
}


/* ==== 0044077c FUN_0044077c ==== */

void FUN_0044077c(int param_1)

{
  *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + 1;
  return;
}


/* ==== 00440784 FUN_00440784 ==== */

void FUN_00440784(int param_1)

{
  *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + -1;
  if ((*(short *)(param_1 + 0x80) == 0) && ((*(byte *)(param_1 + 0x82) & 0x10) != 0)) {
    FUN_004407a4(param_1);
  }
  return;
}


/* ==== 004407a4 FUN_004407a4 ==== */

void FUN_004407a4(int param_1)

{
  FUN_00440be8(param_1,0);
  return;
}


/* ==== 004407ac FUN_004407ac ==== */

uint FUN_004407ac(int param_1,int param_2,char param_3)

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


/* ==== 0044080c FUN_0044080c ==== */

void FUN_0044080c(int *param_1,char param_2,undefined4 param_3,int param_4)

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
    iVar3 = (**(code **)PTR_DAT_00446b78)();
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


/* ==== 004409bc FUN_004409bc ==== */

void FUN_004409bc(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
    FUN_0040eec8(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc));
  }
  i_val = FUN_00440214(*(int *)(param_4 + -0x10));
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_00440200(*(int *)(param_4 + -0x10),j);
      if (((*(int *)(iVar1 + 0x24) == 0) && (*(char *)(iVar1 + 0x4b) == param_1)) &&
         (((*(byte *)(iVar1 + 0x20) & 0x10) == 0 &&
          (((*(char *)(iVar1 + 0x47) != '\0' && (*(char *)(iVar1 + 0x213) != '\x01')) &&
           (iVar1 != *(int *)(param_4 + -0xc))))))) {
        for (k = 0; k < *(int *)(*(int *)(param_4 + -8) + 8); k = k + 1) {
          iVar2 = FUN_0040f024(*(undefined4 **)(param_4 + -8),k);
          uVar3 = FUN_004407ac(iVar1,iVar2,param_1);
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
      FUN_0044080c(piVar4,param_1,extraout_ECX,iVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00440b08 FUN_00440b08 ==== */

undefined4 FUN_00440b08(void)

{
  int i_val;
  int iVar1;
  undefined4 unaff_EBX;
  int in_stack_00000004;
  
  i_val = FUN_00440214(*(int *)(in_stack_00000004 + -0x10));
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      iVar1 = FUN_00440200(*(int *)(in_stack_00000004 + -0x10),i_val);
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


/* ==== 00440b60 FUN_00440b60 ==== */

void FUN_00440b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_1c = (undefined1 *)0x440b75;
  local_14 = param_1;
  local_10 = param_2;
  local_8 = param_3;
  uVar2 = FUN_00440b08();
  puVar1 = puStack_18;
  if ((char)uVar2 != '\0') {
    puStack_18 = (undefined1 *)0x440b86;
    local_c = (int *)FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',puVar1);
    puStack_1c = &LAB_00440bda;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_004409bc('\x01',extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    FUN_004409bc('\x02',extraout_EDX_00,puVar3,(int)&stack0xfffffffc);
    FUN_004409bc('\x03',extraout_EDX_01,puVar4,(int)&stack0xfffffffc);
    FUN_004409bc('\x04',extraout_EDX_02,puVar5,(int)&stack0xfffffffc);
    FUN_004409bc('\x05',extraout_EDX_03,puVar6,(int)&stack0xfffffffc);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x440be1;
    puStack_1c = (undefined1 *)0x440bd9;
    FUN_00402d14(local_c);
    return;
  }
  return;
}


/* ==== 00440be8 FUN_00440be8 ==== */

void FUN_00440be8(int param_1,undefined4 param_2)

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
  puStack_20 = (undefined1 *)0x440c16;
  local_8 = param_1;
  FUN_0044077c(param_1);
  puStack_24 = &LAB_00440c61;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  SystemParametersInfoA(0x30,0,local_18,0);
  FUN_00440b60(local_8,param_2,local_18);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x440c68;
  *(ushort *)(local_8 + 0x82) = *(ushort *)(local_8 + 0x82) & 0xffef;
  puStack_24 = (undefined1 *)0x440c60;
  FUN_00440784(local_8);
  return;
}


/* ==== 00440c70 FUN_00440c70 ==== */

void FUN_00440c70(int param_1)

{
  FUN_0040bc78((undefined4 *)(param_1 + 0x24));
  return;
}


/* ==== 00440c7c FUN_00440c7c ==== */

void FUN_00440c7c(int param_1,int *param_2)

{
  while( true ) {
    if (param_1 == 0) {
      FUN_004039b8(param_2);
      return;
    }
    if (*(int *)(param_1 + 0x70) != 0) break;
    param_1 = *(int *)(param_1 + 0x24);
  }
  FUN_00403a0c(param_2,*(undefined4 **)(param_1 + 0x70));
  return;
}


/* ==== 00440cac thunk_FUN_00440cb1 ==== */

int thunk_FUN_00440cb1(int param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x89) == '\0')); param_1 = *(int *)(param_1 + 0x24))
  {
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}


/* ==== 00440cb1 FUN_00440cb1 ==== */

int FUN_00440cb1(int param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x89) == '\0')); param_1 = *(int *)(param_1 + 0x24))
  {
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}


/* ==== 00440ccc FUN_00440ccc ==== */

void FUN_00440ccc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_004477c4 != 0) {
    puStack_18 = &LAB_00440cfd;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    FUN_00442c38(DAT_004477c4);
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


/* ==== 00440d7c FUN_00440d7c ==== */

LRESULT FUN_00440d7c(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  LPARAM in_stack_0000000c;
  
  LVar1 = CallNextHookEx(DAT_004477e0,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if ((-1 < in_stack_00000004) && (DAT_004477c4 != 0)) {
    FUN_00442034(DAT_004477c4,in_stack_0000000c);
  }
  return LVar1;
}


/* ==== 00440dc0 FUN_00440dc0 ==== */

void FUN_00440dc0(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  DWORD dwThreadId;
  DWORD DStack_4;
  
  if (*(char *)(DAT_004477c4 + 0x95) == '\0') {
    DStack_4 = param_3;
    if (DAT_004477e0 == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      DAT_004477e0 = SetWindowsHookExA(3,FUN_00440d7c,(HINSTANCE)0x0,dwThreadId);
    }
    if (DAT_004477dc == (HANDLE)0x0) {
      DAT_004477dc = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    }
    if (DAT_004477e4 == (HANDLE)0x0) {
      DAT_004477e4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,1000,
                                  (LPTHREAD_START_ROUTINE)&LAB_00440d20,(LPVOID)0x0,0,&DStack_4);
    }
  }
  return;
}


/* ==== 00440e34 FUN_00440e34 ==== */

void FUN_00440e34(void)

{
  DWORD DVar1;
  
  if (DAT_004477e0 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_004477e0);
  }
  DAT_004477e0 = (HHOOK)0x0;
  if (DAT_004477e4 != (HANDLE)0x0) {
    SetEvent(DAT_004477dc);
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_004477d8) {
      WaitForSingleObject(DAT_004477e4,0xffffffff);
    }
    CloseHandle(DAT_004477e4);
    DAT_004477e4 = (HANDLE)0x0;
  }
  return;
}


/* ==== 00440e90 FUN_00440e90 ==== */

bool FUN_00440e90(void)

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


/* ==== 00440ec0 FUN_00440ec0 ==== */

void FUN_00440ec0(char param_1)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  local_4 = -(uint)(param_1 != '\0');
  SystemParametersInfoA(0x49,8,&local_8,0);
  return;
}


/* ==== 00440ee8 FUN_00440ee8 ==== */

void FUN_00440ee8(HWND wnd,int cmd_show)

{
  bool bVar1;
  
  bVar1 = FUN_00440e90();
  if (bVar1) {
    FUN_00440ec0('\0');
  }
  ShowWindow(wnd,cmd_show);
  if (bVar1) {
    FUN_00440ec0('\x01');
  }
  return;
}


/* ==== 00440f28 TApplication.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_fffffee0,in_stack_fffffee4);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 10) = 0;
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[0x20] = iVar1;
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_01);
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
  piVar2 = TIcon_virtual_00c((int *)&LAB_0041585c,'\x01',extraout_ECX_02);
  param_1[0x22] = (int)piVar2;
  pHVar3 = LoadIconA(*(HINSTANCE *)PTR_DAT_00446b5c,"MAINICON");
  FUN_0041cc84(piVar2,pHVar3);
  iVar1 = param_1[0x22];
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004428f8;
  GetModuleFileNameA(*(HMODULE *)PTR_DAT_00446b5c,(LPSTR)&local_105,0x100);
  OemToCharA((LPCSTR)&local_105,(LPSTR)&local_105);
  pcVar4 = FUN_0040b54c(&local_105,'\\');
  if (pcVar4 != (char *)0x0) {
    FUN_00408088((char *)&local_105,pcVar4 + 1);
  }
  pcVar4 = FUN_0040b574(&local_105,'.');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  CharLowerA(aCStack_104);
  FUN_00403be8(param_1 + 0x1f,(char *)&local_105,0x100);
  if (*PTR_DAT_00446a6c == '\0') {
    FUN_004411a0((int)param_1);
  }
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x8e) = 1;
  param_1[0x24] = 0;
  if (local_5 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_fffffee0;
  }
  return param_1;
}


/* ==== 004410c0 TApplication.Destroy ==== */

void TApplication_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 extraout_EDX;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if ((HMODULE)0x20 < (HMODULE)piVar1[0x24]) {
    FreeLibrary((HMODULE)piVar1[0x24]);
  }
  if (((piVar1[9] != 0) && ((char)piVar1[0x25] != '\0')) && (piVar1[0x10] != 0)) {
    FUN_00442670((int)piVar1,2,0);
  }
  *(undefined1 *)((int)piVar1 + 0x8d) = 0;
  FUN_00442ca8((int)piVar1);
  FUN_00442688((int)piVar1,'\0');
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  FUN_004421e8((int)piVar1,extraout_EDX,extraout_ECX,0x441564,(int)piVar1);
  if (((HWND)piVar1[9] != (HWND)0x0) && ((char)piVar1[0x25] != '\0')) {
    if (*PTR_DAT_00446be0 != '\0') {
      SendMessageA((HWND)piVar1[9],0x80,1,0);
    }
    DestroyWindow((HWND)piVar1[9]);
  }
  if (piVar1[0xd] != 0) {
    FUN_00439c68(piVar1[0xd]);
  }
  FUN_00402d14((int *)piVar1[0x26]);
  FUN_00402d14((int *)piVar1[0x20]);
  FUN_00402d14((int *)piVar1[0x22]);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 004411a0 FUN_004411a0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004411a0(int param_1)

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
  puStack_3c = &LAB_00441331;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  if ((*(char *)(param_1 + 0x94) == '\0') && (*PTR_DAT_00446ccc == '\0')) {
    puVar2 = FUN_00439bd0();
    *(undefined1 **)(param_1 + 0x34) = puVar2;
    BVar3 = GetClassInfoA(DAT_004474d4,PTR_s_TApplication_0044698c,&local_2c);
    if (BVar3 == 0) {
      _DAT_00446978 = DAT_004474d4;
      AVar1 = RegisterClassA((WNDCLASSA *)&DAT_00446968);
      if (AVar1 == 0) {
        FUN_00405298((undefined4 *)PTR_PTR_00446ad4,(int *)&local_30);
        piVar4 = FUN_0040a938((int *)&DAT_0040d8f0,'\x01',local_30);
        FUN_0040346c(piVar4);
      }
    }
    x_val = 0;
    (**(code **)PTR_DAT_00446b78)();
    uVar5 = (**(code **)PTR_DAT_00446b78)();
    y_val = (int)uVar5 >> 1;
    if (y_val < 0) {
      y_val = y_val + (uint)((uVar5 & 1) != 0);
    }
    width_val = 0;
    height_val = 0;
    wnd_parent = (HWND)0x0;
    pHVar7 = (HMENU)0x0;
    param = (LPVOID)0x0;
    instance = DAT_004474d4;
    window_name = FUN_00403dfc(*(undefined **)(param_1 + 0x7c));
    uVar6 = FUN_00406a00(PTR_s_TApplication_0044698c,window_name,0x84ca0000,param,instance,pHVar7,
                         wnd_parent,height_val,width_val,y_val,x_val);
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    FUN_004039b8((int *)(param_1 + 0x7c));
    *(undefined1 *)(param_1 + 0x94) = 1;
    SetWindowLongA(*(HWND *)(param_1 + 0x24),-4,*(LONG *)(param_1 + 0x34));
    if (*PTR_DAT_00446be0 != '\0') {
      lParam = FUN_00441cd8(param_1);
      SendMessageA(*(HWND *)(param_1 + 0x24),0x80,1,lParam);
      dwNewLong = FUN_00441cd8(param_1);
      SetClassLongA(*(HWND *)(param_1 + 0x24),-0xe,dwNewLong);
    }
    pHVar7 = GetSystemMenu(*(HWND *)(param_1 + 0x24),0);
    DeleteMenu(pHVar7,0xf030,0);
    DeleteMenu(pHVar7,0xf000,0);
    if (*PTR_DAT_00446be0 != '\0') {
      DeleteMenu(pHVar7,0xf010,0);
    }
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00441338;
  puStack_3c = (undefined1 *)0x441330;
  FUN_004039b8((int *)&local_30);
  return;
}


/* ==== 00441340 FUN_00441340 ==== */

void FUN_00441340(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 == *(int *)(DAT_004477c8 + 0x58)) {
    *(undefined4 *)(DAT_004477c8 + 0x58) = 0;
  }
  if (param_2 == *(int *)(DAT_004477c8 + 0x5c)) {
    *(undefined4 *)(DAT_004477c8 + 0x5c) = 0;
    *(undefined4 *)(DAT_004477c8 + 0x60) = 0;
  }
  if (param_2 == *(int *)(DAT_004477c8 + 0x6c)) {
    *(undefined4 *)(DAT_004477c8 + 0x6c) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_0044021c(DAT_004477c8);
  return;
}


/* ==== 004413a0 FUN_004413a0 ==== */

undefined4 FUN_004413a0(void)

{
  HWND pHVar1;
  uint window_long;
  undefined4 uVar2;
  HWND in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  uVar2 = 0xffffffff;
  pHVar1 = GetWindow(in_stack_00000004,4);
  if (pHVar1 == *(HWND *)(DAT_004477c4 + 0x24)) {
    window_long = GetWindowLongA(in_stack_00000004,-0x14);
    if (((window_long & 8) == 0) ||
       (((*(int **)(DAT_004477c4 + 0x38) != (int *)0x0 && (*(char *)(in_stack_00000008 + 1) == '\0')
         ) && (pHVar1 = (HWND)FUN_0042a8b4(*(int **)(DAT_004477c4 + 0x38)),
              in_stack_00000004 == pHVar1)))) {
      *in_stack_00000008 = in_stack_00000004;
      uVar2 = 0;
    }
    else {
      FUN_0040eec8(*(int **)(DAT_004477c4 + 0x80),(int)in_stack_00000004);
    }
    return uVar2;
  }
  return 0xffffffff;
}


/* ==== 00441410 FUN_00441410 ==== */

void FUN_00441410(int param_1,undefined1 param_2)

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
  
  if (*(int *)(DAT_004477c4 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x84) == 0) {
      wnd = *(HWND *)(param_1 + 0x24);
      local_c = param_2;
      EnumWindows(FUN_004413a0,(LPARAM)&wnd);
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
            hWnd = (HWND)FUN_0040f024(*(undefined4 **)(param_1 + 0x80),i_val);
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


/* ==== 004414b8 FUN_004414b8 ==== */

void FUN_004414b8(int param_1)

{
  FUN_00441410(param_1,0);
  return;
}


/* ==== 004414c0 FUN_004414c0 ==== */

void FUN_004414c0(int param_1)

{
  FUN_00441410(param_1,1);
  return;
}


/* ==== 004414c8 FUN_004414c8 ==== */

void FUN_004414c8(int param_1)

{
  HWND hWnd;
  int i_val;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if (((*(int *)(DAT_004477c4 + 0x24) != 0) && (0 < *(int *)(param_1 + 0x84))) &&
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
        hWnd = (HWND)FUN_0040f024(*(undefined4 **)(param_1 + 0x80),i_val);
        SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    (**(code **)(**(int **)(param_1 + 0x80) + 8))();
  }
  return;
}


/* ==== 00441534 FUN_00441534 ==== */

undefined4 FUN_00441534(int param_1)

{
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)(param_1 + 0x28) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 0044154c FUN_0044154c ==== */

undefined4 FUN_0044154c(int param_1)

{
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 00441564 FUN_00441564 ==== */

undefined4 FUN_00441564(int param_1,int *param_2)

{
  if (*param_2 == 0x1a) {
    if (*(char *)(param_1 + 0x49) != '\0') {
      SetThreadLocale(0x400);
      FUN_0040b66c();
    }
    if (*(char *)(param_1 + 0x4a) != '\0') {
      FUN_004406c8(DAT_004477c8);
      if (*(char *)(param_1 + 0x78) != '\0') {
        FUN_00442688(param_1,'\0');
        FUN_00442688(param_1,'\x01');
      }
    }
  }
  return 0;
}


/* ==== 004415b4 FUN_004415b4 ==== */

void FUN_004415b4(void)

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


/* ==== 004415f0 FUN_004415f0 ==== */

void FUN_004415f0(void)

{
  HDC hDC;
  HICON hIcon;
  int in_stack_00000004;
  tagPAINTSTRUCT local_44;
  
  hDC = BeginPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  hIcon = (HICON)FUN_00441cd8(*(int *)(in_stack_00000004 + -4));
  DrawIcon(hDC,0,0,hIcon);
  EndPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  return;
}


/* ==== 0044163c FUN_0044163c ==== */

/* WARNING: Heritage AFTER dead removal. Example location: EAX : 0x00441a3f */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0044163c(int param_1,int *param_2)

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
  puStack_20 = &LAB_00441c90;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  param_2[3] = 0;
  i_val = *(int *)(*(int *)(param_1 + 0x98) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      puVar3 = (undefined4 *)FUN_0040f024(*(undefined4 **)(param_1 + 0x98),j);
      (*(code *)*puVar3)(puVar3[1],param_2);
      if ((char)puVar3 != '\0') {
        *in_FS_OFFSET = uStack_24;
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_00441564(param_1,param_2);
  i_val = *param_2;
  if (i_val < 0x113) {
    if (i_val == 0x112) {
      if ((param_2[1] & 0xfff0U) == 0xf020) {
        FUN_00441cf4(param_1);
      }
      else if ((param_2[1] & 0xfff0U) == 0xf120) {
        FUN_00441d94(param_1);
      }
      else {
        FUN_004415b4();
      }
      goto LAB_00441c86;
    }
    if (i_val < 0x17) {
      if (i_val == 0x16) {
        if (param_2[1] != 0) {
          *(undefined1 *)(param_1 + 0x8c) = 1;
        }
        goto LAB_00441c86;
      }
      switch(i_val) {
      case 7:
        PostMessageA(*(HWND *)(param_1 + 0x24),0xb01a,0,0);
        FUN_004415b4();
        break;
      default:
        goto switchD_004416de_caseD_1;
      case 10:
        if (param_2[1] == 0) {
          FUN_004415b4();
          if (*(int *)(param_1 + 0x9c) == 0) {
            uVar7 = FUN_0043992c(*(undefined4 *)(param_1 + 0x24));
            *(undefined4 *)(param_1 + 0x9c) = uVar7;
          }
          FUN_004414c0(param_1);
        }
        else {
          FUN_004414c8(param_1);
          if (*(undefined4 **)(param_1 + 0x9c) != (undefined4 *)0x0) {
            FUN_004399e0(*(undefined4 **)(param_1 + 0x9c));
            *(undefined4 *)(param_1 + 0x9c) = 0;
          }
          FUN_004415b4();
        }
        break;
      case 0xf:
        BVar9 = IsIconic(*(HWND *)(param_1 + 0x24));
        if (BVar9 == 0) {
          FUN_004415b4();
        }
        else {
          FUN_004415f0();
        }
        break;
      case 0x10:
        if (*(int **)(param_1 + 0x38) != (int *)0x0) {
          FUN_0043f110(*(int **)(param_1 + 0x38),extraout_EDX,extraout_ECX);
        }
        break;
      case 0x14:
        *param_2 = 0x27;
        FUN_004415b4();
      }
      goto LAB_00441c86;
    }
    if (i_val < 0x1e) {
      if (i_val == 0x1d) {
        FUN_00440c70(DAT_004477c8);
        FUN_004415b4();
        goto LAB_00441c86;
      }
      if (i_val == 0x1a) {
        FUN_0042ea34(*(int *)PTR_DAT_00446d64,param_2[1]);
        FUN_004415b4();
        goto LAB_00441c86;
      }
      if (i_val == 0x1c) {
        FUN_004415b4();
        *(bool *)(param_1 + 0x8d) = param_2[1] != 0;
        if (param_2[1] == 0) {
          FUN_004414b8(param_1);
          PostMessageA(*(HWND *)(param_1 + 0x24),0xb001,0,0);
        }
        else {
          FUN_004414c8(param_1);
          PostMessageA(*(HWND *)(param_1 + 0x24),0xb000,0,0);
        }
        goto LAB_00441c86;
      }
    }
    else {
      if (i_val == 0x37) {
        i_val = FUN_00441cd8(param_1);
        param_2[3] = i_val;
        goto LAB_00441c86;
      }
      if (i_val == 0x4a) {
        if ((*(int *)param_2[2] == -0x21acbbac) && (*(char *)(param_1 + 0x8e) != '\0')) {
          if (*(int *)(param_1 + 0x90) == 0) {
            i_val = FUN_0040bc88("vcltest3.dll",0x8000);
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
        goto LAB_00441c86;
      }
    }
  }
  else if (i_val < 0xb01b) {
    if (i_val == 0xb01a) {
      BVar9 = IsIconic(*(HWND *)(param_1 + 0x24));
      if (((BVar9 == 0) && (pHVar8 = GetFocus(), pHVar8 == *(HWND *)(param_1 + 0x24))) &&
         (pHVar8 = (HWND)FUN_00439a7c(0), pHVar8 != (HWND)0x0)) {
        SetFocus(pHVar8);
      }
      goto LAB_00441c86;
    }
    if (i_val < 0xb002) {
      if (i_val == 0xb001) {
        if (*(short *)(param_1 + 0xe2) != 0) {
          (**(code **)(param_1 + 0xe0))(*(undefined4 *)(param_1 + 0xe4),param_1);
        }
        goto LAB_00441c86;
      }
      if (i_val - 0x132U < 7) {
        LVar4 = SendMessageA((HWND)param_2[2],i_val + 0xbc00,param_2[1],(LPARAM)param_2[2]);
        param_2[3] = LVar4;
        goto LAB_00441c86;
      }
      if (i_val - 0x132U == 0xaece) {
        if (*(short *)(param_1 + 0xea) != 0) {
          (**(code **)(param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xec),param_1);
        }
        goto LAB_00441c86;
      }
    }
    else {
      if (i_val == 0xb016) {
        uVar7 = FUN_00442064(param_1,param_2,extraout_ECX);
        if ((char)uVar7 != '\0') {
          param_2[3] = 1;
        }
        goto LAB_00441c86;
      }
      if (i_val == 0xb017) {
        piVar1 = *(int **)(param_1 + 0x38);
        if ((piVar1 != (int *)0x0) && (i_val = FUN_0042a8b4(piVar1), i_val != 0)) {
          pHVar8 = (HWND)FUN_0042a8b4(piVar1);
          BVar9 = IsWindowEnabled(pHVar8);
          if (BVar9 != 0) {
            pHVar8 = (HWND)FUN_0042a8b4(piVar1);
            BVar9 = IsWindowVisible(pHVar8);
            if (BVar9 != 0) {
              DAT_00446860 = 0;
              pHVar8 = GetFocus();
              hWnd = (HWND)FUN_0042a8b4(piVar1);
              SetFocus(hWnd);
              FUN_00425780((int)piVar1,0x112,param_2[1],param_2[2]);
              SetFocus(pHVar8);
              DAT_00446860 = 1;
              param_2[3] = 1;
            }
          }
        }
        goto LAB_00441c86;
      }
    }
  }
  else {
    if (i_val == 0xb01f) {
      FUN_00442538(param_1,*(ushort *)(param_2 + 1),param_2[2]);
      goto LAB_00441c86;
    }
    if (i_val == 0xb020) {
      if (param_2[1] == 0) {
        FUN_0044218c(param_1,extraout_EDX,extraout_ECX,*(undefined4 *)param_2[2],
                     ((undefined4 *)param_2[2])[1]);
      }
      else {
        FUN_004421e8(param_1,extraout_EDX,extraout_ECX,*(int *)param_2[2],((int *)param_2[2])[1]);
      }
      goto LAB_00441c86;
    }
    if (i_val == 0xb031) {
      if (param_2[1] == 1) {
        param_2[3] = *(int *)(param_1 + 0xa0);
      }
      else {
        *(int *)(param_1 + 0xa0) = param_2[2];
      }
      goto LAB_00441c86;
    }
    if (i_val - 0xb03fU < 2) {
      bVar2 = FUN_00443230(param_1,i_val,(int *)param_2[2]);
      param_2[3] = bVar2 & 0x7f;
      goto LAB_00441c86;
    }
  }
switchD_004416de_caseD_1:
  FUN_004415b4();
LAB_00441c86:
  *in_FS_OFFSET = uStack_24;
  return;
}


/* ==== 00441cd8 FUN_00441cd8 ==== */

void FUN_00441cd8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041c9f0(*(int *)(param_1 + 0x88));
  if (iVar1 == 0) {
    LoadIconA((HINSTANCE)0x0,&DAT_00007f00);
  }
  return;
}


/* ==== 00441cf4 FUN_00441cf4 ==== */

void FUN_00441cf4(int param_1)

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
    FUN_004414b8(param_1);
    SetActiveWindow(*(HWND *)(param_1 + 0x24));
    if ((*(int *)(param_1 + 0x38) == 0) ||
       ((*(char *)(param_1 + 0x4b) == '\0' && (*(char *)(*(int *)(param_1 + 0x38) + 0x47) == '\0')))
       ) {
      FUN_00440ee8(*(HWND *)(param_1 + 0x24),6);
    }
    else {
      uFlags = 0x40;
      cy = 0;
      x_val = *(int *)(param_1 + 0x38);
      cx = *(int *)(x_val + 0x38);
      Y = *(int *)(x_val + 0x34);
      x_val = *(int *)(x_val + 0x30);
      hWndInsertAfter = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x38));
      SetWindowPos(*(HWND *)(param_1 + 0x24),hWndInsertAfter,x_val,Y,cx,cy,uFlags);
      DefWindowProcA(*(HWND *)(param_1 + 0x24),0x112,0xf020,0);
    }
    if (*(short *)(param_1 + 0xf2) != 0) {
      (**(code **)(param_1 + 0xf0))(*(undefined4 *)(param_1 + 0xf4),param_1);
    }
  }
  return;
}


/* ==== 00441d94 FUN_00441d94 ==== */

void FUN_00441d94(int param_1)

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
      FUN_00440ee8(*(HWND *)(param_1 + 0x24),9);
    }
    else {
      DefWindowProcA(*(HWND *)(param_1 + 0x24),0x112,0xf120,0);
    }
    uFlags = 0;
    cy = 1;
    uVar3 = (**(code **)PTR_DAT_00446b78)();
    cx = (int)uVar3 >> 1;
    if (cx < 0) {
      cx = cx + (uint)((uVar3 & 1) != 0);
    }
    Y = 0;
    uVar3 = (**(code **)PTR_DAT_00446b78)();
    X = (int)uVar3 >> 1;
    if (X < 0) {
      X = X + (uint)((uVar3 & 1) != 0);
    }
    SetWindowPos(*(HWND *)(param_1 + 0x24),(HWND)0x0,X,Y,cx,cy,uFlags);
    piVar1 = *(int **)(param_1 + 0x38);
    if (((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x213) == '\x01')) &&
       (*(char *)((int)piVar1 + 0x47) == '\0')) {
      TForm_SetWindowState(piVar1,0);
      FUN_0043f2c8(*(int **)(param_1 + 0x38),extraout_EDX,extraout_ECX);
    }
    FUN_004414c8(param_1);
    if (*(int **)(DAT_004477c8 + 0x58) != (int *)0x0) {
      hWnd = (HWND)FUN_0042a8b4(*(int **)(DAT_004477c8 + 0x58));
      SetFocus(hWnd);
    }
    if (*(short *)(param_1 + 0xfa) != 0) {
      (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xfc),param_1);
    }
  }
  return;
}


/* ==== 00441e84 FUN_00441e84 ==== */

void FUN_00441e84(int param_1)

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


/* ==== 00441ec0 FUN_00441ec0 ==== */

void FUN_00441ec0(int param_1,int *param_2)

{
  uint window_text;
  CHAR local_108 [256];
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_00403a0c(param_2,*(undefined4 **)(param_1 + 0x7c));
  }
  else {
    window_text = GetWindowTextA(*(HWND *)(param_1 + 0x24),local_108,0x100);
    FUN_00403aa0(param_2,(undefined4 *)local_108,window_text);
  }
  return;
}


/* ==== 00441f08 FUN_00441f08 ==== */

bool FUN_00441f08(int param_1,LPMSG msg)

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


/* ==== 00441f2c FUN_00441f2c ==== */

bool FUN_00441f2c(int param_1,LPMSG msg)

{
  int iVar1;
  BOOL BVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 0x38);
  if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x217) == '\x02')) &&
      (*(int *)(DAT_004477c8 + 0x60) != 0)) &&
     (*(char *)(*(int *)(DAT_004477c8 + 0x60) + 0x217) == '\x01')) {
    BVar2 = TranslateMDISysAccel(*(HWND *)(iVar1 + 0x23c),msg);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}


/* ==== 00441f7c FUN_00441f7c ==== */

undefined4 FUN_00441f7c(int param_1,int *param_2)

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
          pvVar3 = FUN_00421a0c(pHVar2);
          if ((pvVar3 != (HANDLE)0x0) || (pHVar2 == (HWND)0x0)) break;
          pHVar2 = GetParent(pHVar2);
        }
        if (pHVar2 == (HWND)0x0) {
          pHVar2 = (HWND)*param_2;
        }
      }
      else {
        pHVar2 = (HWND)FUN_0042a8b4(piVar1);
      }
      LVar4 = SendMessageA(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
      if (LVar4 != 0) {
        uVar6 = 1;
      }
    }
    else {
      LVar5 = GetWindowLongA(pHVar2,-6);
      if (LVar5 == DAT_004474d4) {
        LVar4 = SendMessageA(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (LVar4 != 0) {
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}


/* ==== 00442034 FUN_00442034 ==== */

undefined4 FUN_00442034(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2);
    if (cVar2 != '\0') {
      FUN_00442ca8(param_1);
    }
  }
  return 0;
}


/* ==== 00442064 FUN_00442064 ==== */

undefined4 FUN_00442064(int param_1,undefined4 param_2,uint param_3)

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
      hWnd = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x38));
      BVar3 = IsWindowEnabled(hWnd);
      if (BVar3 != 0) {
        iVar2 = FUN_00402ef0(*(int **)(param_1 + 0x38),param_2,extraout_ECX);
        if ((char)iVar2 != '\0') goto LAB_004420bf;
      }
    }
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
LAB_004420bf:
    uVar4 = (undefined3)((uint)iVar2 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar4,uVar1);
}


/* ==== 004420d0 FUN_004420d0 ==== */

undefined4 FUN_004420d0(int param_1,LPMSG msg,uint param_3)

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
      uVar3 = FUN_00442034(param_1,msg);
      if (((char)uVar3 == '\0') && ((char)local_10 == '\0')) {
        bVar1 = FUN_00441f2c(param_1,msg);
        if (!bVar1) {
          uVar3 = FUN_00441f7c(param_1,(int *)msg);
          if ((char)uVar3 == '\0') {
            bVar1 = FUN_00441f08(param_1,msg);
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


/* ==== 00442168 FUN_00442168 ==== */

void FUN_00442168(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  tagMSG tStack_20;
  
  uVar1 = FUN_004420d0(param_1,&tStack_20,param_3);
  if ((char)uVar1 == '\0') {
    FUN_004427b0(param_1);
  }
  return;
}


/* ==== 0044218c FUN_0044218c ==== */

void FUN_0044218c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x24),0xb020,0,(LPARAM)&param_4);
    }
  }
  else {
    FUN_0040f004(*(undefined4 **)(param_1 + 0x98));
    puVar1 = (undefined4 *)FUN_004026b8(8);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    FUN_0040eec8(*(int **)(param_1 + 0x98),(int)puVar1);
  }
  return;
}


/* ==== 004421e8 FUN_004421e8 ==== */

void FUN_004421e8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

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
        piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x98),j);
        if ((*piVar1 == param_4) && (param_5 == piVar1[1])) {
          FUN_004026d0((int)piVar1);
          FUN_0040ef14(*(int **)(param_1 + 0x98),j);
          return;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 00442264 FUN_00442264 ==== */

void FUN_00442264(void)

{
  char cVar1;
  
  cVar1 = FUN_0040ba8c();
  if (cVar1 != '\0') {
    PostQuitMessage(0);
  }
  return;
}


/* ==== 00442308 FUN_00442308 ==== */

void FUN_00442308(int param_1,LPCSTR text,LPCSTR caption,UINT type)

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
  local_18 = (**(code **)PTR_DAT_00446bf0)();
  local_1c = (**(code **)PTR_DAT_00446bf0)();
  if (local_18 != local_1c) {
    local_44 = 0x28;
    (**(code **)PTR_DAT_00446b50)();
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
  local_14 = (undefined4 *)FUN_0043992c(0);
  uVar1 = FUN_00441534(local_8);
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
  FUN_004399e0(local_14);
  SetActiveWindow(wnd);
  return;
}


/* ==== 00442460 FUN_00442460 ==== */

void FUN_00442460(int param_1,int param_2)

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
  puStack_11c = &LAB_0044251b;
  UStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_120;
  FUN_00403a50((int *)&local_8,*(int *)(param_2 + 4));
  uVar2 = 0;
  uVar3 = local_8 == (undefined *)0x0;
  if (!(bool)uVar3) {
    pcVar1 = FUN_00407e78(local_8);
    FUN_00402b18((char *)local_108,pcVar1);
    FUN_00402938(local_108,&DAT_00442528);
    if (!(bool)uVar2 && !(bool)uVar3) {
      FUN_00403c40((int *)&local_8,(undefined4 *)&DAT_00442534);
    }
  }
  type = 0x10;
  FUN_00441ec0(param_1,(int *)&local_10c);
  caption = FUN_00403dfc(local_10c);
  text = FUN_00403dfc(local_8);
  FUN_00442308(param_1,text,caption,type);
  *in_FS_OFFSET = type;
  puStack_11c = &LAB_00442522;
  UStack_120 = 0x442512;
  FUN_004039b8((int *)&local_10c);
  UStack_120 = 0x44251a;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00442538 FUN_00442538 ==== */

uint FUN_00442538(int param_1,ushort param_2,ULONG_PTR param_3)

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
  piVar1 = *(int **)(DAT_004477c8 + 0x5c);
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
    if (((piVar1 != (int *)0x0) && (bVar2 = FUN_0042abb0((int)piVar1), bVar2)) &&
       (piVar1[0x89] != 0)) {
      pHVar3 = (HWND)FUN_0042a8b4(piVar1);
      command = (uint)param_2;
      pCVar4 = FUN_00403dfc((undefined *)piVar1[0x89]);
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
        pHVar3 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x38));
      }
      command = (uint)param_2;
      pCVar4 = FUN_00403dfc(*(undefined **)(param_1 + 0x40));
      BVar5 = WinHelpA(pHVar3,pCVar4,command,param_3);
      command = (uint)(BVar5 != 0);
    }
  }
  return command;
}


