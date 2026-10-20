/* Menu.exe — units/ComCtrls.pas: 113 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00482950 FUN_00482950 ==== */

void FUN_00482950(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  byte local_108 [256];
  undefined4 *local_8;
  
  puStack_110 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_114 = &LAB_004829dc;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  System_TObject_ClassName(*param_1,local_108);
  System__LStrFromString((int *)&local_8,local_108);
  System__LStrCat((int *)&local_8,(undefined4 *)".StopCurrentSound");
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  if ((int *)param_1[1] != (int *)0x0) {
    TDaviSoundBuffer_StopSoundBuffer(param_1,(int *)param_1[1]);
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_004829e3;
  puStack_114 = (undefined1 *)0x4829db;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00482a08 FUN_00482a08 ==== */

void FUN_00482a08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ==== 00482a0c FUN_00482a0c ==== */

void FUN_00482a0c(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_c;
  undefined4 *local_8;
  
  local_c = (undefined *)0x0;
  puStack_18 = (undefined1 *)0x482a25;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_1c = &LAB_00482a9b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  System__LStrCat3((int *)&local_c,local_8,(undefined4 *)&DAT_00482ab4);
  iVar1 = FUN_004636a0(*(undefined4 *)(param_1 + 0x14),local_c);
  uVar2 = TData_GetWavTimeFactor();
  if ((longlong)(int)((longlong)iVar1 * (longlong)(int)uVar2) !=
      (longlong)iVar1 * (longlong)(int)uVar2) {
    System__RunError(uVar2);
  }
  uVar2 = FUN_00402ad4();
  if ((int)uVar2 >> 0x1f != extraout_EDX) {
    System__RunError(uVar2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00482aa2;
  puStack_1c = (undefined1 *)0x482a9a;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 00482af8 FUN_00482af8 ==== */

void FUN_00482af8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
                 int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  undefined1 *puVar4;
  int iStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  uint **ppuStack_70;
  char *pcStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  uint *local_44;
  undefined *local_40;
  byte *local_3c;
  int local_38;
  uint *local_34;
  int local_30;
  char *local_2c;
  undefined1 local_28;
  int local_24;
  int i_val;
  int j;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_44 = (uint *)0x0;
  local_3c = (byte *)0x0;
  local_40 = (undefined *)0x0;
  local_38 = 0;
  local_34 = (uint *)0x0;
  local_30 = 0;
  local_24 = 0;
  puStack_54 = (undefined1 *)0x482b29;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  System__LStrAddRef((int)param_2);
  puStack_54 = (undefined1 *)0x482b31;
  System__LStrAddRef((int)local_10);
  puStack_58 = &LAB_00482d0a;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  puStack_54 = &stack0xfffffffc;
  if (local_8 == 0) {
    local_2c = "aAgent";
    local_28 = 0xb;
    puStack_64 = (undefined1 *)0x482b64;
    puStack_54 = &stack0xfffffffc;
    SysUtils_Format((byte *)" Parameter \'%s\' cannot be nil",&local_2c,0,&local_24);
    System__Assert(local_24);
  }
  if (local_c == (undefined4 *)0x0) {
    local_2c = "aIniFileName";
    local_28 = 0xb;
    puStack_64 = (undefined1 *)0x482b9b;
    SysUtils_Format((byte *)" Parameter \'%s\' cannot be empty",&local_2c,0,&local_30);
    System__Assert(local_30);
  }
  FUN_0047de70(local_8);
  local_18 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_c);
  local_14 = (int *)System_TObject_Create
                              ((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  puStack_64 = &LAB_00482cd3;
  puStack_68 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_68;
  pcStack_6c = "Error";
  ppuStack_70 = &local_34;
  puStack_74 = (undefined1 *)0x482bfc;
  (**(code **)*local_18)(local_18,local_10,"Caption");
  puStack_74 = (undefined1 *)0x482c07;
  FUN_0047e28c(local_8,local_34);
  puStack_74 = (undefined1 *)0x482c17;
  System__LStrCat3(&local_38,local_10,(undefined4 *)"BalloonItems");
  puStack_74 = (undefined1 *)0x482c25;
  (**(code **)(*local_18 + 0x40))(local_18,local_38,local_14);
  puStack_74 = (undefined1 *)0x482c2d;
  iVar1 = (**(code **)(*local_14 + 0x14))();
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    puStack_74 = (undefined1 *)0x482c37;
    uVar2 = System__RunError(uVar2);
  }
  if (-1 < (int)uVar2) {
    i_val = uVar2 + 1;
    j = 0;
    do {
      puStack_78 = &LAB_00482ca3;
      iStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&iStack_7c;
      puVar4 = param_4;
      iVar1 = param_5;
      puStack_74 = &stack0xfffffffc;
      FUN_00411730(local_14,j,(int *)&local_40);
      FUN_004118bc(local_14,local_40,(int *)&local_3c);
      iVar3 = FUN_00408618(local_3c);
      FUN_00411730(local_14,j,(int *)&local_44);
      FUN_0047ddf8(local_8,local_44,iVar3,puVar4,iVar1);
      *in_FS_OFFSET = (int)puVar4;
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = (int)ppuStack_70;
  puStack_68 = &LAB_00482cda;
  pcStack_6c = (char *)0x482cca;
  SysUtils_FreeAndNil(&local_14);
  pcStack_6c = (char *)0x482cd2;
  SysUtils_FreeAndNil(&local_18);
  return;
}


/* ==== 00484114 FUN_00484114 ==== */

bool FUN_00484114(void)

{
  int iVar1;
  
  iVar1 = FUN_004202a8();
  if (iVar1 == 0) {
    InitCommonControls();
  }
  return iVar1 != 0;
}


/* ==== 00484140 FUN_00484140 ==== */

void FUN_00484140(int *param_1,uint param_2,char param_3)

{
  bool bVar1;
  HWND pHVar2;
  uint new_long;
  int index_val;
  
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if (bVar1) {
    index_val = -0x10;
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
    new_long = GetWindowLongA(pHVar2,index_val);
    if (param_3 == '\0') {
      new_long = new_long & ~param_2;
    }
    else {
      new_long = new_long | param_2;
    }
    index_val = -0x10;
    pHVar2 = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetWindowLongA(pHVar2,index_val,new_long);
  }
  return;
}


/* ==== 00484278 FUN_00484278 ==== */

void FUN_00484278(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_Create((int *)&DAT_0040e844,'\x01',param_1);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 00484290 TTabStrings.virtual_040 ==== */

void TTabStrings_virtual_040(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_004842f4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  lParam = 0;
  wParam = 0;
  Msg = 0x1309;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 0) {
    System_LoadResString((undefined4 *)PTR_PTR_004ab8b0,(int *)&local_8);
    FUN_00484278(local_8);
  }
  FUN_00485014(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004842fb;
  puStack_14 = (undefined1 *)0x4842f3;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00484300 TTabStrings.virtual_044 ==== */

void TTabStrings_virtual_044(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 **ppuVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  WPARAM local_14;
  undefined1 local_10;
  byte *local_c;
  undefined4 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (byte *)0x0;
  puStack_24 = &LAB_0048438c;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  lParam = 0;
  Msg = 0x1308;
  wParam = param_2;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 0) {
    ppuVar2 = &local_8;
    System_LoadResString((undefined4 *)PTR_PTR_004ab880,(int *)&local_c);
    local_10 = 0;
    local_14 = param_2;
    SysUtils_Format(local_c,&local_14,0,(int *)ppuVar2);
    FUN_00484278(local_8);
  }
  FUN_00485014(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00484393;
  puStack_24 = (undefined1 *)0x48438b;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 0048439c TTabStrings.virtual_00c ==== */

void TTabStrings_virtual_00c(int param_1,WPARAM param_2,int *param_3)

{
  uint uVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 **ppuVar3;
  undefined4 uStack_1048;
  undefined1 *puStack_1044;
  undefined1 *puStack_1040;
  WPARAM local_1030;
  undefined1 local_102c;
  byte *local_1028;
  undefined4 *local_1024;
  char local_1020 [28];
  int iStack_1004;
  uint local_20 [3];
  char *local_14;
  undefined4 local_10;
  
  puStack_1040 = &stack0xfffffffc;
  local_1024 = (undefined4 *)0x0;
  local_1028 = (byte *)0x0;
  puStack_1044 = &LAB_00484484;
  uStack_1048 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1048;
  iStack_1004 = param_1;
  uVar1 = FUN_0042ed5c(*(int *)(param_1 + 0xc));
  local_20[0] = *(uint *)(&DAT_004ab48c + (uVar1 & 0x7f) * 4) | 1;
  local_14 = local_1020;
  local_10 = 0x1000;
  lParam = local_20;
  Msg = 0x1305;
  wParam = param_2;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar2 == 0) {
    ppuVar3 = &local_1024;
    System_LoadResString((undefined4 *)PTR_PTR_004ab830,(int *)&local_1028);
    local_102c = 0;
    local_1030 = param_2;
    SysUtils_Format(local_1028,&local_1030,0,(int *)ppuVar3);
    FUN_00484278(local_1024);
  }
  FUN_00403e8c(param_3,local_1020,0x1000);
  *in_FS_OFFSET = uStack_1048;
  puStack_1040 = &LAB_0048448b;
  puStack_1044 = (undefined1 *)0x484483;
  System__LStrArrayClr((int *)&local_1028,2);
  return;
}


/* ==== 00484494 TTabStrings.virtual_014 ==== */

void TTabStrings_virtual_014(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x1304;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 004844b0 TTabStrings.virtual_018 ==== */

void TTabStrings_virtual_018(int param_1,WPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 *lParam;
  undefined4 **ppuVar2;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  WPARAM local_30;
  undefined1 local_2c;
  byte *local_28;
  undefined4 *local_24;
  undefined4 local_20 [7];
  
  puStack_3c = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_28 = (byte *)0x0;
  puStack_40 = &LAB_00484540;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_20[0] = 8;
  lParam = local_20;
  Msg = 0x1305;
  wParam = param_2;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar1 == 0) {
    ppuVar2 = &local_24;
    System_LoadResString((undefined4 *)PTR_PTR_004ab85c,(int *)&local_28);
    local_2c = 0;
    local_30 = param_2;
    SysUtils_Format(local_28,&local_30,0,(int *)ppuVar2);
    FUN_00484278(local_24);
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00484547;
  puStack_40 = (undefined1 *)0x48453f;
  System__LStrArrayClr((int *)&local_28,2);
  return;
}


/* ==== 00484550 TTabStrings.virtual_020 ==== */

void TTabStrings_virtual_020(int param_1,WPARAM param_2,undefined *param_3)

{
  uint uVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 **ppuVar3;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined *local_38;
  undefined1 local_34;
  WPARAM local_30;
  undefined1 local_2c;
  byte *local_28;
  undefined4 *local_24;
  uint local_20 [3];
  undefined *local_14;
  undefined4 local_c;
  
  puStack_48 = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_28 = (byte *)0x0;
  puStack_4c = &LAB_00484622;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  uVar1 = FUN_0042ed5c(*(int *)(param_1 + 0xc));
  local_20[0] = *(uint *)(&DAT_004ab494 + (uVar1 & 0x7f) * 4) | 3;
  local_14 = System__LStrToPChar(param_3);
  local_c = (**(code **)(**(int **)(param_1 + 0xc) + 0xbc))(*(int **)(param_1 + 0xc),param_2);
  lParam = local_20;
  Msg = 0x1306;
  wParam = param_2;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar2 == 0) {
    ppuVar3 = &local_24;
    System_LoadResString((undefined4 *)PTR_PTR_004ab944,(int *)&local_28);
    local_34 = 0xb;
    local_2c = 0;
    local_38 = param_3;
    local_30 = param_2;
    SysUtils_Format(local_28,&local_38,1,(int *)ppuVar3);
    FUN_00484278(local_24);
  }
  FUN_00485014(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_00484629;
  puStack_4c = (undefined1 *)0x484621;
  System__LStrArrayClr((int *)&local_28,2);
  return;
}


/* ==== 00484630 TTabStrings.virtual_024 ==== */

void TTabStrings_virtual_024(int param_1,WPARAM param_2,undefined4 param_3)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 *lParam;
  undefined4 **ppuVar2;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  WPARAM local_30;
  undefined1 local_2c;
  byte *local_28;
  undefined4 *local_24;
  undefined4 local_20 [6];
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_28 = (byte *)0x0;
  puStack_40 = &LAB_004846c0;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_20[0] = 8;
  lParam = local_20;
  Msg = 0x1306;
  wParam = param_2;
  local_8 = param_3;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar1 == 0) {
    ppuVar2 = &local_24;
    System_LoadResString((undefined4 *)PTR_PTR_004ab640,(int *)&local_28);
    local_2c = 0;
    local_30 = param_2;
    SysUtils_Format(local_28,&local_30,0,(int *)ppuVar2);
    FUN_00484278(local_24);
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004846c7;
  puStack_40 = (undefined1 *)0x4846bf;
  System__LStrArrayClr((int *)&local_28,2);
  return;
}


/* ==== 004846d0 TTabStrings.virtual_054 ==== */

void TTabStrings_virtual_054(int param_1,WPARAM param_2,undefined *param_3)

{
  uint uVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 **ppuVar3;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined *local_38;
  undefined1 local_34;
  WPARAM local_30;
  undefined1 local_2c;
  byte *local_28;
  undefined4 *local_24;
  uint local_20 [3];
  undefined *local_14;
  undefined4 local_c;
  
  puStack_48 = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_28 = (byte *)0x0;
  puStack_4c = &LAB_004847a2;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  uVar1 = FUN_0042ed5c(*(int *)(param_1 + 0xc));
  local_20[0] = *(uint *)(&DAT_004ab49c + (uVar1 & 0x7f) * 4) | 3;
  local_14 = System__LStrToPChar(param_3);
  local_c = (**(code **)(**(int **)(param_1 + 0xc) + 0xbc))(*(int **)(param_1 + 0xc),param_2);
  lParam = local_20;
  Msg = 0x1307;
  wParam = param_2;
  hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 0xc));
  LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar2 < 0) {
    ppuVar3 = &local_24;
    System_LoadResString((undefined4 *)PTR_PTR_004ab944,(int *)&local_28);
    local_34 = 0xb;
    local_2c = 0;
    local_38 = param_3;
    local_30 = param_2;
    SysUtils_Format(local_28,&local_38,1,(int *)ppuVar3);
    FUN_00484278(local_24);
  }
  FUN_00485014(*(int **)(param_1 + 0xc));
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004847a9;
  puStack_4c = (undefined1 *)0x4847a1;
  System__LStrArrayClr((int *)&local_28,2);
  return;
}


/* ==== 004847b0 TTabStrings.virtual_030 ==== */

void TTabStrings_virtual_030(int param_1,byte param_2)

{
  int *piVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  piVar1 = *(int **)(param_1 + 0xc);
  *(byte *)(piVar1 + 0x86) = param_2;
  lParam = 0;
  wParam = (param_2 ^ 1) & 0x7f;
  Msg = 0xb;
  hWnd = (HWND)Controls_TWinControl_GetHandle(piVar1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  if (param_2 != 1) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
    FUN_00485014(*(int **)(param_1 + 0xc));
  }
  return;
}


/* ==== 004847f4 TCustomTabControl.virtual_02c ==== */

int * TCustomTabControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  TControl_SetWidth(param_1,0x121);
  TControl_SetHeight(param_1,0xc1);
  TGroupBox_SetTabStop((int)param_1,'\x01');
  param_1[0x10] = 0x81;
  iVar1 = System_TObject_Create((int *)&PTR_TPersistent_virtual_000_004841d4,'\x01',extraout_ECX_00)
  ;
  param_1[0x84] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  piVar2 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',extraout_ECX_01);
  param_1[0x7c] = (int)piVar2;
  FUN_0042d4c8(piVar2,(int)param_1);
  iVar1 = System_TObject_Create((int *)&DAT_0043a068,'\x01',extraout_ECX_02);
  param_1[0x7e] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_00484c58;
  if (cVar3 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 004848b4 TCustomTabControl.Destroy ==== */

void TCustomTabControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  SysUtils_FreeAndNil(piVar1 + 0x7c);
  SysUtils_FreeAndNil(piVar1 + 0x84);
  SysUtils_FreeAndNil(piVar1 + 0x82);
  SysUtils_FreeAndNil(piVar1 + 0x7e);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00484908 TCustomTabControl.dynamic_ffb6 ==== */

uint TCustomTabControl_dynamic_ffb6(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_8;
  undefined3 uStack_7;
  
  _local_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0x22a) != 0) {
    param_1 = (**(code **)(param_1 + 0x228))(*(undefined4 *)(param_1 + 0x22c),param_1,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),local_8);
}


/* ==== 00484930 TCustomTabControl.virtual_0b4 ==== */

undefined1 TCustomTabControl_virtual_0b4(void)

{
  return 1;
}


/* ==== 00484934 TCustomTabControl.dynamic_ffb5 ==== */

void TCustomTabControl_dynamic_ffb5(int param_1)

{
  if (*(short *)(param_1 + 0x222) != 0) {
    (**(code **)(param_1 + 0x220))(*(undefined4 *)(param_1 + 0x224),param_1);
  }
  return;
}


/* ==== 00484954 TCustomTabControl.virtual_090 ==== */

void TCustomTabControl_virtual_090(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00484114();
  TWinControl_virtual_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"SysTabControl32");
  uVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(&DAT_004ab4a4 +
                        (uint)*(byte *)((int)param_1 + 0x20e) * 4 + (uVar1 & 0x7f) * 0x10) |
               param_2[1] | 0x2000000U |
               *(uint *)(&DAT_004ab4c4 + (uint)*(byte *)((int)param_1 + 0x20d) * 4) |
               *(uint *)(&DAT_004ab4d0 + (uint)*(byte *)((int)param_1 + 0x203) * 4);
  if ((char)param_1[0x5d] == '\0') {
    param_2[1] = param_2[1] | 0x8000;
  }
  if ((char)param_1[0x80] != '\0') {
    param_2[1] = param_2[1] | 0x200;
  }
  if (*(char *)((int)param_1 + 0x201) != '\0') {
    param_2[1] = param_2[1] | 4;
  }
  if (*(char *)((int)param_1 + 0x202) != '\0') {
    param_2[1] = param_2[1] | 0x2000;
  }
  if ((short)param_1[0x85] != 0) {
    param_2[1] = param_2[1] | 0x400;
  }
  if (((char)param_1[0x7d] != '\0') && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    param_2[1] = param_2[1] | 0x40;
  }
  if ((char)param_1[0x83] != '\0') {
    param_2[1] = param_2[1] | 1;
  }
  param_2[9] = param_2[9] & 0xfffffffcU | 8;
  return;
}


/* ==== 00484a58 TCustomTabControl.virtual_098 ==== */

void TCustomTabControl_virtual_098(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  TWinControl_virtual_098(param_1);
  if (param_1[0x7f] != 0) {
    bVar1 = FUN_0043a3e4(param_1[0x7f]);
    if (bVar1) {
      uVar2 = FUN_0043a5b8(param_1[0x7f]);
      Controls_TControl_Perform((int)param_1,0x1303,0,uVar2);
    }
  }
  if (param_1[0x85] != 0) {
    FUN_00485054(param_1);
  }
  if (param_1[0x82] != 0) {
    (**(code **)(*(int *)param_1[0x84] + 8))((int *)param_1[0x84],param_1[0x82]);
    FUN_00484e98(param_1,param_1[0x81]);
    System_TObject_Free((int *)param_1[0x82]);
    param_1[0x82] = 0;
  }
  return;
}


/* ==== 00484adc TCustomTabControl.virtual_0b8 ==== */

void TCustomTabControl_virtual_0b8(int param_1,undefined4 param_2,RECT *lprc_val,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x232) == 0) {
    FUN_0041907c(*(int **)(param_1 + 0x1f0),lprc_val);
  }
  else {
    (**(code **)(param_1 + 0x230))
              (*(undefined4 *)(param_1 + 0x234),param_1,param_2,param_4,lprc_val);
  }
  return;
}


/* ==== 00484b18 FUN_00484b18 ==== */

void FUN_00484b18(int *param_1,int param_2)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int lParam;
  
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  wParam = 0;
  Msg = 0x1328;
  lParam = param_2;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 2;
  return;
}


/* ==== 00484b44 TCustomTabControl.virtual_0bc ==== */

undefined4 TCustomTabControl_virtual_0bc(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = param_2;
  if (*(short *)(param_1 + 0x23a) != 0) {
    (**(code **)(param_1 + 0x238))(*(undefined4 *)(param_1 + 0x23c),param_1,param_2,&local_8);
  }
  return local_8;
}


/* ==== 00484b6c FUN_00484b6c ==== */

void FUN_00484b6c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x130b;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


/* ==== 00484b88 TCustomTabControl.virtual_00c ==== */

void TCustomTabControl_virtual_00c(int *param_1)

{
  TControl_virtual_00c(param_1);
  if (param_1[0x7f] != 0) {
    FUN_0048507c(param_1);
  }
  return;
}


/* ==== 00484ba4 TPageControl.SetHotTrack ==== */

void TPageControl_SetHotTrack(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 500)) {
    *(char *)(param_1 + 500) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00484bb8 TCustomTabControl.virtual_010 ==== */

void TCustomTabControl_virtual_010(int *param_1,int param_2,char param_3)

{
  TControl_virtual_010(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x7f])) {
    TPageControl_SetImages((int)param_1,0);
  }
  return;
}


/* ==== 00484be8 TPageControl.SetImages ==== */

void TPageControl_SetImages(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_0043b2a0(*(int *)(param_1 + 0x1fc),*(int *)(param_1 + 0x1f8));
  }
  *(int *)(param_1 + 0x1fc) = param_2;
  if (param_2 != 0) {
    FUN_0043b2e4(param_2,*(int *)(param_1 + 0x1f8));
    FUN_0041564c(*(int *)(param_1 + 0x1fc),param_1,extraout_ECX);
    uVar1 = FUN_0043a5b8(*(int *)(param_1 + 0x1fc));
    Controls_TControl_Perform(param_1,0x1303,0,uVar1);
    return;
  }
  Controls_TControl_Perform(param_1,0x1303,0,0);
  return;
}


/* ==== 00484c78 FUN_00484c78 ==== */

void FUN_00484c78(int param_1,char param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  undefined1 local_5;
  
  puStack_18 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_1c = &LAB_00484cf5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_5 = param_2 != *(char *)(param_1 + 0x200);
  if ((bool)local_5) {
    if ((param_2 == '\0') &&
       ((*(char *)(param_1 + 0x20e) == '\x02' || (*(char *)(param_1 + 0x20e) == '\x03')))) {
      System_LoadResString((undefined4 *)PTR_PTR_004ab940,(int *)&local_c);
      FUN_00484278(local_c);
    }
    *(char *)(param_1 + 0x200) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x20c) = 0;
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00484cfc;
  puStack_1c = (undefined1 *)0x484cf4;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 00484d08 TPageControl.SetMultiLine ==== */

void TPageControl_SetMultiLine(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_00484c78(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00484d28 TPageControl.SetOwnerDraw ==== */

void TPageControl_SetOwnerDraw(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x202)) {
    *(char *)(param_1 + 0x202) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00484d3c TPageControl.SetRaggedRight ==== */

void TPageControl_SetRaggedRight(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x203)) {
    *(char *)((int)param_1 + 0x203) = param_2;
    FUN_00484140(param_1,0x800,param_2);
  }
  return;
}


/* ==== 00484d58 TPageControl.SetScrollOpposite ==== */

void TPageControl_SetScrollOpposite(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x20c)) {
    *(char *)(param_1 + 0x20c) = param_2;
    if (param_2 != '\0') {
      *(char *)(param_1 + 0x200) = param_2;
    }
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00484d78 TPageControl.SetStyle ==== */

void TPageControl_SetStyle(int param_1,char param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_00484de2;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (param_2 != *(char *)(param_1 + 0x20d)) {
    puVar1 = &stack0xfffffffc;
    if ((param_2 != '\0') && (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x20e) != '\0')) {
      System_LoadResString((undefined4 *)PTR_PTR_004ab828,(int *)&local_8);
      piVar2 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_8);
      param_1 = System__RaiseExcept(piVar2);
      param_2 = extraout_DL;
      puVar1 = puStack_c;
    }
    puStack_c = puVar1;
    *(char *)(param_1 + 0x20d) = param_2;
    FUN_00431e04(param_1);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00484de9;
  puStack_10 = (undefined1 *)0x484de1;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00484dec TPageControl.SetTabHeight ==== */

void TPageControl_SetTabHeight(int *param_1,short param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  short extraout_DX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffed8;
  byte **ppbVar3;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte *local_110;
  byte local_10c [256];
  byte *local_c;
  undefined1 local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_110 = (byte *)0x0;
  puStack_11c = &LAB_00484e8a;
  puStack_120 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_120;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(short *)((int)param_1 + 0x216)) {
    puVar1 = &stack0xfffffffc;
    if (param_2 < 0) {
      System_TObject_ClassName(*param_1,local_10c);
      local_c = local_10c;
      local_8 = 4;
      ppbVar3 = &local_c;
      in_stack_fffffed8 = 0;
      System_LoadResString((undefined4 *)PTR_PTR_004ab758,(int *)&local_110);
      uVar2 = SysUtils_Exception_CreateFmt
                        ((int)&DAT_0040ea0c,'\x01',local_110,in_stack_fffffed8,ppbVar3);
      System__RaiseExcept(uVar2);
      param_2 = extraout_DX;
      puVar1 = puStack_118;
    }
    puStack_118 = puVar1;
    *(short *)((int)param_1 + 0x216) = param_2;
    FUN_00485054(param_1);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  *in_FS_OFFSET = in_stack_fffffed8;
  puStack_120 = &LAB_00484e91;
  System__LStrClr((int *)&local_110);
  return;
}


/* ==== 00484e98 FUN_00484e98 ==== */

void FUN_00484e98(int *param_1,WPARAM param)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x130c;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,param,lParam);
  return;
}


/* ==== 00484eb8 TPageControl.SetTabPosition ==== */

void TPageControl_SetTabPosition(int param_1,char param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00484f43;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (param_2 != *(char *)(param_1 + 0x20e)) {
    puVar1 = &stack0xfffffffc;
    if ((param_2 != '\0') && (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x20d) != '\0')) {
      System_LoadResString((undefined4 *)PTR_PTR_004ab64c,(int *)&local_8);
      piVar2 = SysUtils_Exception_Create((int *)&DAT_0040ea0c,'\x01',local_8);
      System__RaiseExcept(piVar2);
      param_2 = extraout_DL;
      puVar1 = puStack_10;
    }
    puStack_10 = puVar1;
    *(char *)(param_1 + 0x20e) = param_2;
    if ((*(char *)(param_1 + 0x200) == '\0') && ((param_2 == '\x02' || (param_2 == '\x03')))) {
      FUN_00484c78(param_1,'\x01');
    }
    FUN_00431e04(param_1);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00484f4a;
  puStack_14 = (undefined1 *)0x484f42;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00484f50 TPageControl.SetTabWidth ==== */

void TPageControl_SetTabWidth(int *param_1,short param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  short extraout_DX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffed8;
  byte **ppbVar4;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte *local_110;
  byte local_10c [256];
  byte *local_c;
  undefined1 local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_110 = (byte *)0x0;
  puStack_11c = &LAB_00485008;
  puStack_120 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_120;
  puVar2 = &stack0xfffffffc;
  if (param_2 != (short)param_1[0x85]) {
    puVar2 = &stack0xfffffffc;
    if (param_2 < 0) {
      System_TObject_ClassName(*param_1,local_10c);
      local_c = local_10c;
      local_8 = 4;
      ppbVar4 = &local_c;
      in_stack_fffffed8 = 0;
      System_LoadResString((undefined4 *)PTR_PTR_004ab758,(int *)&local_110);
      uVar3 = SysUtils_Exception_CreateFmt
                        ((int)&DAT_0040ea0c,'\x01',local_110,in_stack_fffffed8,ppbVar4);
      System__RaiseExcept(uVar3);
      param_2 = extraout_DX;
      puVar2 = puStack_118;
    }
    puStack_118 = puVar2;
    iVar1 = param_1[0x85];
    *(short *)(param_1 + 0x85) = param_2;
    if (((short)iVar1 == 0) || (param_2 == 0)) {
      FUN_00431e04((int)param_1);
      puVar2 = puStack_118;
    }
    else {
      FUN_00485054(param_1);
      puVar2 = puStack_118;
    }
  }
  puStack_118 = puVar2;
  *in_FS_OFFSET = in_stack_fffffed8;
  puStack_120 = &LAB_0048500f;
  System__LStrClr((int *)&local_110);
  return;
}


/* ==== 00485014 FUN_00485014 ==== */

void FUN_00485014(int *param_1)

{
  bool bVar1;
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  if ((char)param_1[0x86] == '\0') {
    bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
    if (bVar1) {
      lParam = CONCAT22((short)param_1[0xf],(short)param_1[0xe]);
      wParam = 0;
      Msg = 5;
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
    FUN_0043134c(param_1);
  }
  return;
}


/* ==== 00485054 FUN_00485054 ==== */

void FUN_00485054(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int lParam;
  
  lParam = param_1[0x85];
  wParam = 0;
  Msg = 0x1329;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_00485014(param_1);
  return;
}


/* ==== 0048507c FUN_0048507c ==== */

void FUN_0048507c(int *param_1)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  WPARAM WVar3;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 **ppuVar4;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  byte *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  WPARAM local_30;
  undefined1 local_2c;
  undefined4 *local_28;
  undefined4 local_24 [5];
  undefined4 local_10;
  int i_val;
  undefined4 *param;
  
  puStack_50 = &stack0xfffffffc;
  local_28 = (undefined4 *)0x0;
  local_3c = 0;
  local_40 = (byte *)0x0;
  puStack_54 = &LAB_00485167;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  local_24[0] = 2;
  iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
  if (-1 < iVar1 + -1) {
    WVar3 = 0;
    i_val = iVar1;
    do {
      local_10 = (**(code **)(*param_1 + 0xbc))(param_1,WVar3);
      param = local_24;
      Msg = 0x1306;
      wParam = WVar3;
      hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
      LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)param);
      if (LVar2 == 0) {
        ppuVar4 = &local_28;
        (**(code **)(*(int *)param_1[0x84] + 0xc))((int *)param_1[0x84],WVar3,&local_3c);
        local_38 = local_3c;
        local_34 = 0xb;
        local_2c = 0;
        param = &local_38;
        local_30 = WVar3;
        System_LoadResString((undefined4 *)PTR_PTR_004ab944,(int *)&local_40);
        SysUtils_Format(local_40,param,1,(int *)ppuVar4);
        FUN_00484278(local_28);
      }
      WVar3 = WVar3 + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_00485014(param_1);
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_0048516e;
  puStack_54 = (undefined1 *)0x48515e;
  System__LStrArrayClr((int *)&local_40,2);
  puStack_54 = (undefined1 *)0x485166;
  System__LStrClr((int *)&local_28);
  return;
}


/* ==== 00485178 TCustomTabControl.CNDrawItem ==== */

void TCustomTabControl_CNDrawItem(int *param_1,int param_2)

{
  int iVar1;
  int nSavedDC;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  
  iVar1 = *(int *)(param_2 + 8);
  nSavedDC = SaveDC(*(HDC *)(iVar1 + 0x18));
  FUN_0041912c(param_1[0x7c]);
  *in_FS_OFFSET = &stack0xffffffdc;
  FUN_00419558((int *)param_1[0x7c],*(int *)(iVar1 + 0x18));
  TCanvas_SetFont(param_1[0x7c]);
  TCanvas_SetBrush(param_1[0x7c]);
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),(*(byte *)(iVar1 + 0x10) & 1) != 0);
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined4 *)(iVar1 + 8),iVar1 + 0x1c);
  *in_FS_OFFSET = uVar2;
  FUN_00419558((int *)param_1[0x7c],0);
  FUN_004193d0(param_1[0x7c]);
  RestoreDC(*(HDC *)(iVar1 + 0x18),nSavedDC);
  return;
}


/* ==== 0048526c TCustomTabControl.WMDestroy ==== */

void TCustomTabControl_WMDestroy(int *param_1)

{
  int iVar1;
  int *piVar2;
  HWND hWnd;
  HWND pHVar3;
  BOOL BVar4;
  undefined4 extraout_ECX;
  
  if ((int *)param_1[0x84] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
    if (0 < iVar1) {
      piVar2 = (int *)System_TObject_Create
                                ((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
      param_1[0x82] = (int)piVar2;
      (**(code **)(*piVar2 + 8))(piVar2,param_1[0x84]);
      iVar1 = FUN_00484b6c(param_1);
      param_1[0x81] = iVar1;
    }
  }
  hWnd = GetFocus();
  if (hWnd != (HWND)0x0) {
    pHVar3 = (HWND)Controls_TWinControl_GetHandle(param_1);
    if (hWnd != pHVar3) {
      pHVar3 = (HWND)Controls_TWinControl_GetHandle(param_1);
      BVar4 = IsChild(pHVar3,hWnd);
      if (BVar4 == 0) goto LAB_004852e5;
    }
    SetFocus((HWND)0x0);
  }
LAB_004852e5:
  TWinControl_WMDestroy(param_1);
  param_1[0x53] = 0;
  return;
}


/* ==== 004852fc TCustomTabControl.message_0055 ==== */

void TCustomTabControl_message_0055(int *param_1,UINT *param_2)

{
  HWND hWnd;
  UINT UVar1;
  UINT Msg;
  UINT wParam;
  
  UVar1 = param_2[2];
  wParam = param_2[1];
  Msg = *param_2;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  UVar1 = DefWindowProcA(hWnd,Msg,wParam,UVar1);
  param_2[3] = UVar1;
  return;
}


/* ==== 00485320 TCustomTabControl.WMSize ==== */

void TCustomTabControl_WMSize(int *param_1,undefined4 param_2)

{
  HWND hWnd;
  RECT *lprcUpdate;
  HRGN hrgnUpdate;
  UINT flags;
  
  TWinControl_WMSize(param_1,param_2);
  flags = 5;
  hrgnUpdate = (HRGN)0x0;
  lprcUpdate = (RECT *)0x0;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return;
}


/* ==== 00485340 TCustomTabControl.CMFontChanged ==== */

void TCustomTabControl_CMFontChanged(int *param_1)

{
  bool bVar1;
  
  TWinControl_CMFontChanged(param_1);
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if (bVar1) {
    Controls_TControl_Perform((int)param_1,5,0,0);
  }
  return;
}


/* ==== 00485368 TCustomTabControl.CMSysColorChange ==== */

void TCustomTabControl_CMSysColorChange(int *param_1,undefined4 *param_2)

{
  TWinControl_CMSysColorChange((int)param_1,(int)param_2);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_2 = 0x15;
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00485390 TCustomTabControl.CMTabStopChanged ==== */

void TCustomTabControl_CMTabStopChanged(int param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 0048539c TCustomTabControl.CNNotify ==== */

void TCustomTabControl_CNNotify(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 8) + 8);
  if (iVar1 == -0x228) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    cVar2 = System__CallDynaInst(param_1,param_2,param_3);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  else if (iVar1 == -0x227) {
    System__CallDynaInst(param_1,param_2,param_3);
  }
  return;
}


/* ==== 004853e0 TCustomTabControl.CMDialogChar ==== */

void TCustomTabControl_CMDialogChar(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  WPARAM param;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int i_val;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_004854ae;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_2;
  iVar2 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
  if (-1 < iVar2 + -1) {
    param = 0;
    i_val = iVar2;
    do {
      (**(code **)(*(int *)param_1[0x84] + 0xc))((int *)param_1[0x84],param,&local_10);
      cVar1 = FUN_004447f4(CONCAT22((short)((uint)local_8 >> 0x10),*(undefined2 *)(local_8 + 4)),
                           local_10);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0xb4))(param_1,param);
        if (cVar1 != '\0') {
          cVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
          if (cVar1 != '\0') {
            *(undefined4 *)(local_8 + 0xc) = 1;
            cVar1 = System__CallDynaInst(param_1,extraout_EDX_00,extraout_ECX_00);
            if (cVar1 != '\0') {
              FUN_00484e98(param_1,param);
              System__CallDynaInst(param_1,extraout_EDX_01,extraout_ECX_01);
            }
            goto LAB_00485498;
          }
        }
      }
      param = param + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  TWinControl_CMDialogChar((int)param_1,local_8);
LAB_00485498:
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004854b5;
  puStack_24 = (undefined1 *)0x4854ad;
  System__LStrClr(&local_10);
  return;
}


/* ==== 004854bc TCustomTabControl.virtual_084 ==== */

void TCustomTabControl_virtual_084(int *param_1,undefined4 *param_2)

{
  int i_val;
  undefined4 *puVar1;
  byte bVar2;
  undefined4 local_1c [4];
  
  bVar2 = 0;
  FUN_00484b18(param_1,(int)local_1c);
  puVar1 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + (uint)bVar2 * -2 + 1;
    param_2 = param_2 + (uint)bVar2 * -2 + 1;
  }
  TWinControl_virtual_084();
  return;
}


/* ==== 004854f0 TTabSheet.virtual_02c ==== */

int * TTabSheet_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
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
  TGroupBox_SetAlign(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX_00);
  param_1[0x10] = param_1[0x10] | 0x401;
  TGroupBox_SetVisible(param_1,0,extraout_ECX_01);
  *(undefined1 *)(param_1 + 0x7e) = 1;
  *(undefined1 *)((int)param_1 + 0x1fa) = 0;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00485554 TTabSheet.Destroy ==== */

void TTabSheet_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = System__BeforeDestruction(param_1,param_2);
  iVar1 = piVar2[0x7d];
  if (iVar1 != 0) {
    if (piVar2 == *(int **)(iVar1 + 0x24c)) {
      *(undefined4 *)(iVar1 + 0x24c) = 0;
    }
    FUN_00485ef8((int *)piVar2[0x7d],piVar2);
  }
  TWinControl_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar2);
  }
  return;
}


/* ==== 004855a0 TTabSheet.dynamic_ffb6 ==== */

void TTabSheet_dynamic_ffb6(int param_1)

{
  if (*(short *)(param_1 + 0x202) != 0) {
    (**(code **)(param_1 + 0x200))(*(undefined4 *)(param_1 + 0x204),param_1);
  }
  return;
}


/* ==== 004855c0 TTabSheet.dynamic_ffb5 ==== */

void TTabSheet_dynamic_ffb5(int param_1)

{
  if (*(short *)(param_1 + 0x20a) != 0) {
    (**(code **)(param_1 + 0x208))(*(undefined4 *)(param_1 + 0x20c),param_1);
  }
  return;
}


/* ==== 004855e0 TTabSheet.GetPageIndex ==== */

int TTabSheet_GetPageIndex(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 500) != 0) {
    iVar1 = Classes_TList_IndexOf(*(int *)(*(int *)(param_1 + 500) + 0x240),param_1);
    return iVar1;
  }
  return -1;
}


/* ==== 004855fc FUN_004855fc ==== */

int FUN_004855fc(int param_1)

{
  int j;
  int iVar1;
  int i_val;
  int k;
  
  i_val = 0;
  if (*(char *)(param_1 + 0x1f9) == '\0') {
    i_val = -1;
  }
  else {
    j = TTabSheet_GetPageIndex(param_1);
    if (-1 < j + -1) {
      k = 0;
      do {
        iVar1 = Classes_TList_Get(*(undefined4 **)(*(int *)(param_1 + 500) + 0x240),k);
        if (*(char *)(iVar1 + 0x1f9) != '\0') {
          i_val = i_val + 1;
        }
        k = k + 1;
        j = j + -1;
      } while (j != 0);
    }
  }
  return i_val;
}


/* ==== 0048564c TTabSheet.virtual_090 ==== */

void TTabSheet_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


/* ==== 0048565c TTabSheet.virtual_014 ==== */

void TTabSheet_virtual_014(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  TWinControl_virtual_014(param_1,param_2);
  piVar1 = (int *)param_2[0xb];
  uVar2 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_00483810);
  if ((char)uVar2 != '\0') {
    FUN_004856b8(param_1,piVar1);
  }
  return;
}


/* ==== 00485690 TTabSheet.SetImageIndex ==== */

void TTabSheet_SetImageIndex(int param_1,int param_2)

{
  if ((param_2 != *(int *)(param_1 + 0x1f0)) &&
     (*(int *)(param_1 + 0x1f0) = param_2, *(char *)(param_1 + 0x1f9) != '\0')) {
    FUN_00486024(*(int *)(param_1 + 500),param_1);
  }
  return;
}


/* ==== 004856b8 FUN_004856b8 ==== */

void FUN_004856b8(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x7d];
  if (param_2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      FUN_00485ef8(piVar1,param_1);
    }
    (**(code **)(*param_1 + 0x60))(param_1,param_2);
    if (param_2 != (int *)0x0) {
      FUN_00485e50((int)param_2,(int)param_1);
    }
  }
  return;
}


/* ==== 004856ec TTabSheet.SetPageIndex ==== */

void TTabSheet_SetPageIndex(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  
  if (*(int *)(param_1 + 500) != 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 500) + 0x240) + 8) + -1;
    if (iVar3 < param_2) {
      local_18 = 0;
      local_10 = 0;
      local_1c = param_2;
      local_14 = iVar3;
      uVar1 = FUN_0040b6d0((int)&DAT_0040e844,'\x01',(undefined4 *)PTR_LAB_004ab690,1,&local_1c);
      System__RaiseExcept(uVar1);
    }
    iVar3 = FUN_004855fc(param_1);
    iVar2 = TTabSheet_GetPageIndex(param_1);
    FUN_004103a4(*(int **)(*(int *)(param_1 + 500) + 0x240),iVar2,param_2);
    if (-1 < iVar3) {
      FUN_004855fc(param_1);
      FUN_00485ee0(*(int *)(param_1 + 500),iVar3);
    }
  }
  return;
}


/* ==== 00485780 FUN_00485780 ==== */

void FUN_00485780(int param_1,char param_2)

{
  WPARAM param;
  
  if (param_2 != *(char *)(param_1 + 0x1f9)) {
    if (param_2 == '\0') {
      param = FUN_004855fc(param_1);
      *(undefined1 *)(param_1 + 0x1f9) = 0;
      FUN_00485b5c(*(int **)(param_1 + 500),param_1,param);
    }
    else {
      *(undefined1 *)(param_1 + 0x1f9) = 1;
      FUN_00485e74(*(int **)(param_1 + 500),param_1);
    }
  }
  return;
}


/* ==== 004857c4 TTabSheet.SetTabVisible ==== */

void TTabSheet_SetTabVisible(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    FUN_004857d8(param_1);
  }
  return;
}


/* ==== 004857d8 FUN_004857d8 ==== */

void FUN_004857d8(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 500) == 0) || (*(char *)(param_1 + 0x1f8) == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  FUN_00485780(param_1,cVar1);
  return;
}


/* ==== 004857f8 TTabSheet.CMTextChanged ==== */

void TTabSheet_CMTextChanged(int param_1)

{
  if (*(char *)(param_1 + 0x1f9) != '\0') {
    FUN_00486024(*(int *)(param_1 + 500),param_1);
  }
  return;
}


/* ==== 00485810 TTabSheet.CMShowingChanged ==== */

void TTabSheet_CMShowingChanged(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x485822;
  TWinControl_CMShowingChanged((int)param_1);
  if ((char)param_1[0x5a] == '\0') {
    puStack_1c = &LAB_00485896;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    *in_FS_OFFSET = uStack_20;
  }
  else {
    puStack_1c = &LAB_00485853;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


/* ==== 004858b8 TTabSheet.SetHighlighted ==== */

void TTabSheet_SetHighlighted(int param_1,byte param_2)

{
  uint lParam;
  WPARAM wParam;
  HWND hWnd;
  UINT Msg;
  
  if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
    lParam = FUN_00407070((uint)param_2,0);
    wParam = FUN_004855fc(param_1);
    Msg = 0x1333;
    hWnd = (HWND)Controls_TWinControl_GetHandle(*(int **)(param_1 + 500));
    SendMessageA(hWnd,Msg,wParam,lParam);
  }
  *(byte *)(param_1 + 0x1fa) = param_2;
  return;
}


/* ==== 004858f8 TPageControl.virtual_02c ==== */

int * TPageControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  TCustomTabControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = 0xc0;
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[0x90] = iVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0048594c TPageControl.Destroy ==== */

void TPageControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  int i_val;
  int j;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  i_val = *(int *)(piVar1[0x90] + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar2 = Classes_TList_Get((undefined4 *)piVar1[0x90],j);
      *(undefined4 *)(iVar2 + 500) = 0;
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  System_TObject_Free((int *)piVar1[0x90]);
  TCustomTabControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004859ac FUN_004859ac ==== */

void FUN_004859ac(int param_1)

{
  byte bVar1;
  int i_val;
  int iVar2;
  int j;
  
  i_val = FUN_00485e00(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar2 = FUN_00485de8(param_1,j);
      bVar1 = *(byte *)(iVar2 + 0x1fa);
      iVar2 = FUN_00485de8(param_1,j);
      TTabSheet_SetHighlighted(iVar2,bVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 004859ec TPageControl.virtual_00c ==== */

void TPageControl_virtual_00c(int *param_1)

{
  TCustomTabControl_virtual_00c(param_1);
  FUN_004859ac((int)param_1);
  return;
}


/* ==== 00485a00 TPageControl.virtual_0b4 ==== */

void TPageControl_virtual_0b4(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x240),param_2);
  (**(code **)(*piVar1 + 0x4c))();
  return;
}


/* ==== 00485a1c TPageControl.dynamic_ffb5 ==== */

void TPageControl_dynamic_ffb5(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0xc0))();
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    piVar1 = Forms_GetParentForm(param_1);
    if ((piVar1 != (int *)0x0) && (piVar1[0x8e] != 0)) {
      (**(code **)(*(int *)piVar1[0x8e] + 0xc))();
    }
  }
  TCustomTabControl_dynamic_ffb5((int)param_1);
  return;
}


/* ==== 00485a58 FUN_00485a58 ==== */

void FUN_00485a58(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  WPARAM param;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  
  if (param_2 != (int *)param_1[0x91]) {
    piVar3 = Forms_GetParentForm(param_1);
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
    if (((piVar3 != (int *)0x0) && (param_1[0x91] != 0)) &&
       (bVar1 = thunk_FUN_0043156d(param_1[0x91],piVar3[0x82]), uVar4 = extraout_ECX_00,
       uVar5 = extraout_EDX_00, bVar1)) {
      TForm_SetActiveControl(piVar3,(int *)param_1[0x91],extraout_ECX_00);
      uVar4 = extraout_ECX_01;
      uVar5 = extraout_EDX_01;
      if (param_1[0x91] != piVar3[0x82]) {
        param = FUN_004855fc(param_1[0x91]);
        FUN_00484e98(param_1,param);
        return;
      }
    }
    if (param_2 != (int *)0x0) {
      FUN_0042e978(param_2,uVar5,uVar4);
      TGroupBox_SetVisible(param_2,CONCAT31((int3)((uint)extraout_EDX_02 >> 8),1),extraout_ECX_02);
      uVar4 = extraout_ECX_03;
      if (((piVar3 != (int *)0x0) && (param_1[0x91] != 0)) && (piVar3[0x82] == param_1[0x91])) {
        cVar2 = System__CallDynaInst(param_2,extraout_EDX_03,extraout_ECX_03);
        if (cVar2 == '\0') {
          TForm_SetActiveControl(piVar3,param_1,extraout_ECX_04);
          uVar4 = extraout_ECX_06;
        }
        else {
          TForm_SetActiveControl(piVar3,param_2,extraout_ECX_04);
          uVar4 = extraout_ECX_05;
        }
      }
    }
    if ((int *)param_1[0x91] != (int *)0x0) {
      TGroupBox_SetVisible((int *)param_1[0x91],0,uVar4);
    }
    param_1[0x91] = (int)param_2;
    if (((piVar3 != (int *)0x0) && (param_1[0x91] != 0)) && (piVar3[0x82] == param_1[0x91])) {
      FUN_00434f30((int *)param_1[0x91]);
    }
  }
  return;
}


/* ==== 00485b5c FUN_00485b5c ==== */

void FUN_00485b5c(int *param_1,int param_2,WPARAM param)

{
  int iVar1;
  
  iVar1 = param_1[0x91];
  (**(code **)(*(int *)param_1[0x84] + 0x44))((int *)param_1[0x84],param);
  if (param_2 == iVar1) {
    iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
    if (iVar1 <= (int)param) {
      iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
      param = iVar1 - 1;
    }
    FUN_00484e98(param_1,param);
  }
  (**(code **)(*param_1 + 0xc0))();
  return;
}


/* ==== 00485bb4 TPageControl.dynamic_ffcc ==== */

void TPageControl_dynamic_ffcc(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x248) != 0) {
    (**(code **)(*param_2 + 0x60))(param_2,*(int *)(param_1 + 0x248));
  }
  return;
}


/* ==== 00485bcc TPageControl.dynamic_ffcb ==== */

void TPageControl_dynamic_ffcb(int *param_1,int param_2,undefined4 param_3)

{
  HWND hWnd;
  int i_val;
  tagRECT *rect;
  LONG *pLVar1;
  byte bVar2;
  tagRECT local_14;
  
  bVar2 = 0;
  rect = &local_14;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  GetWindowRect(hWnd,rect);
  rect = &local_14;
  pLVar1 = (LONG *)(param_2 + 0x44);
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *pLVar1 = rect->left;
    rect = (tagRECT *)((int)rect + ((uint)bVar2 * -2 + 1) * 4);
    pLVar1 = pLVar1 + (uint)bVar2 * -2 + 1;
  }
  System__CallDynaInst(param_1,param_2,param_3);
  return;
}


/* ==== 00485c24 TPageControl.dynamic_ffc3 ==== */

void TPageControl_dynamic_ffc3(int *param_1)

{
  if ((param_1[0x93] != 0) && ((*(byte *)(param_1 + 8) & 8) == 0)) {
    FUN_00485f48(param_1,'\x01');
    System_TObject_Free((int *)param_1[0x93]);
    param_1[0x93] = 0;
  }
  return;
}


/* ==== 00485c54 FUN_00485c54 ==== */

int FUN_00485c54(int param_1,int param_2,char param_3,char param_4)

{
  int i_val;
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x240) + 8) != 0) {
    i_val = Classes_TList_IndexOf(*(int *)(param_1 + 0x240),param_2);
    iVar2 = i_val;
    if (i_val == -1) {
      if (param_3 == '\0') {
        i_val = 0;
        iVar2 = i_val;
      }
      else {
        i_val = *(int *)(*(int *)(param_1 + 0x240) + 8) + -1;
        iVar2 = i_val;
      }
    }
    do {
      if (param_3 == '\0') {
        if (i_val == 0) {
          i_val = *(int *)(*(int *)(param_1 + 0x240) + 8);
        }
        i_val = i_val + -1;
      }
      else {
        i_val = i_val + 1;
        if (i_val == *(int *)(*(int *)(param_1 + 0x240) + 8)) {
          i_val = 0;
        }
      }
      iVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x240),i_val);
      if (param_4 == '\0') {
        return iVar1;
      }
      if (*(char *)(iVar1 + 0x1f8) != '\0') {
        return iVar1;
      }
    } while (iVar2 != i_val);
  }
  return 0;
}


/* ==== 00485cdc TPageControl.dynamic_fffd ==== */

void TPageControl_dynamic_fffd
               (int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  int i_val;
  int j;
  
  i_val = *(int *)(*(int *)(param_1 + 0x240) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x240),j);
      (*(code *)param_4)(param_5,uVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00485d1c TPageControl.virtual_0bc ==== */

undefined4 TPageControl_virtual_0bc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int i_val;
  int k;
  int m;
  undefined4 j;
  
  if (*(short *)(param_1 + 0x23a) == 0) {
    i_val = 0;
    j = 0;
    k = *(int *)(*(int *)(param_1 + 0x240) + 8);
    if (-1 < k + -1) {
      m = 0;
      do {
        iVar2 = FUN_00485de8(param_1,m);
        if (*(char *)(iVar2 + 0x1f8) == '\0') {
          j = j + 1;
        }
        else {
          i_val = i_val + 1;
        }
        if (i_val == param_2 + 1) break;
        m = m + 1;
        k = k + -1;
      } while (k != 0);
    }
    k = FUN_00485de8(param_1,param_2 + j);
    uVar1 = *(undefined4 *)(k + 0x1f0);
  }
  else {
    uVar1 = TCustomTabControl_virtual_0bc(param_1,param_2);
  }
  return uVar1;
}


/* ==== 00485d98 FUN_00485d98 ==== */

undefined4 FUN_00485d98(int param_1,int param_2)

{
  int i_val;
  int iVar1;
  undefined4 uVar2;
  int j;
  
  i_val = FUN_00485e00(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      iVar1 = FUN_00485de8(param_1,j);
      if ((iVar1 == *(int *)(param_2 + 0x24)) && (param_1 == *(int *)(param_2 + 0x90))) {
        uVar2 = FUN_00485de8(param_1,j);
        return uVar2;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00485de8 FUN_00485de8 ==== */

void FUN_00485de8(int param_1,int param_2)

{
  Classes_TList_Get(*(undefined4 **)(param_1 + 0x240),param_2);
  return;
}


/* ==== 00485e00 FUN_00485e00 ==== */

undefined4 FUN_00485e00(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x240) + 8);
}


/* ==== 00485e0c TPageControl.dynamic_ffc1 ==== */

void TPageControl_dynamic_ffc1
               (int *param_1,int param_2,LPRECT param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  LPRECT lprc_val;
  
  local_10 = *param_5;
  uStack_c = param_5[1];
  lprc_val = param_3;
  iVar1 = FUN_00485d98((int)param_1,param_2);
  *(bool *)param_4 = iVar1 == 0;
  TWinControl_dynamic_ffc1(param_1,param_2,lprc_val,param_4,&local_10);
  return;
}


/* ==== 00485e50 FUN_00485e50 ==== */

void FUN_00485e50(int param_1,int param_2)

{
  Classes_TList_Add(*(int **)(param_1 + 0x240),param_2);
  *(int *)(param_2 + 500) = param_1;
  FUN_004857d8(param_2);
  return;
}


/* ==== 00485e74 FUN_00485e74 ==== */

void FUN_00485e74(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00485ed1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = param_2;
  TGroupBox_GetCaption(param_2,&local_8);
  iVar1 = local_8;
  iVar2 = FUN_004855fc(param_2);
  FUN_00411ac0((int *)param_1[0x84],iVar2,iVar1,iVar3);
  (**(code **)(*param_1 + 0xc0))();
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00485ed8;
  puStack_18 = (undefined1 *)0x485ed0;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00485ee0 FUN_00485ee0 ==== */

void FUN_00485ee0(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 0x210) + 0x60))(*(int **)(param_1 + 0x210),param_2);
  return;
}


/* ==== 00485ef8 FUN_00485ef8 ==== */

void FUN_00485ef8(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00485c54((int)param_1,(int)param_2,'\x01',(*(byte *)(param_1 + 8) & 0x10) == 0
                              );
  if (param_2 == piVar1) {
    piVar1 = (int *)0x0;
  }
  FUN_00485780((int)param_2,'\0');
  param_2[0x7d] = 0;
  FUN_00410448((int *)param_1[0x90],(int)param_2);
  TPageControl_SetActivePage(param_1,piVar1);
  return;
}


/* ==== 00485f48 FUN_00485f48 ==== */

void FUN_00485f48(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  WPARAM param;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  iVar2 = FUN_00485c54((int)param_1,param_1[0x91],param_2,'\x01');
  if ((iVar2 != 0) && (iVar2 != param_1[0x91])) {
    cVar1 = System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      param = FUN_004855fc(iVar2);
      FUN_00484e98(param_1,param);
      System__CallDynaInst(param_1,extraout_EDX_00,extraout_ECX_00);
    }
  }
  return;
}


/* ==== 00485f9c TPageControl.SetActivePage ==== */

void TPageControl_SetActivePage(int *param_1,int *param_2)

{
  WPARAM param;
  
  if ((param_2 == (int *)0x0) || (param_1 == (int *)param_2[0x7d])) {
    FUN_00485a58(param_1,param_2);
    if (param_2 == (int *)0x0) {
      FUN_00484e98(param_1,0xffffffff);
    }
    else if (param_2 == (int *)param_1[0x91]) {
      param = FUN_004855fc((int)param_2);
      FUN_00484e98(param_1,param);
    }
  }
  return;
}


/* ==== 00485fe4 TPageControl.dynamic_fffa ==== */

void TPageControl_dynamic_fffa(undefined4 param_1,int param_2,int param_3)

{
  TTabSheet_SetPageIndex(param_2,param_3);
  return;
}


/* ==== 00485ff0 TPageControl.virtual_0ac ==== */

void TPageControl_virtual_0ac(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = System__IsClass(param_2,(int)&PTR_TWinControl_virtual_000_00483258);
  if (((char)uVar1 != '\0') && (param_1 == (int *)param_2[0x7d])) {
    TPageControl_SetActivePage(param_1,param_2);
  }
  TWinControl_virtual_0ac((int)param_1);
  return;
}


/* ==== 00486024 FUN_00486024 ==== */

void FUN_00486024(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00486076;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TGroupBox_GetCaption(param_2,&local_8);
  iVar1 = local_8;
  iVar2 = FUN_004855fc(param_2);
  (**(code **)(**(int **)(param_1 + 0x210) + 0x20))(*(int **)(param_1 + 0x210),iVar2,iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0048607d;
  puStack_18 = (undefined1 *)0x486075;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00486084 TPageControl.virtual_0c0 ==== */

void TPageControl_virtual_0c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_00484b6c(param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_00484b6c(param_1);
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x84] + 0x18))((int *)param_1[0x84],uVar2);
    TPageControl_SetActivePage(param_1,piVar3);
    return;
  }
  TPageControl_SetActivePage(param_1,(int *)0x0);
  return;
}


/* ==== 004860bc TPageControl.CMDesignHitTest ==== */

void TPageControl_CMDesignHitTest(int *param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  UINT Msg;
  WPARAM wParam;
  int *lParam;
  int local_20;
  undefined4 local_1c;
  int local_14;
  undefined4 local_10;
  
  lParam = &local_20;
  FUN_004070e8(*(undefined4 *)(param_2 + 8),&local_14);
  local_20 = local_14;
  local_1c = local_10;
  wParam = 0;
  Msg = 0x130d;
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (-1 < LVar1) {
    iVar2 = FUN_00484b6c(param_1);
    if (LVar1 != iVar2) {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}


/* ==== 00486118 TPageControl.CMDialogKey ==== */

void TPageControl_CMDialogKey(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  SHORT SVar2;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar3;
  
  cVar1 = System__CallDynaInst(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    hWnd = GetFocus();
    hWndParent = (HWND)Controls_TWinControl_GetHandle(param_1);
    BVar3 = IsChild(hWndParent,hWnd);
    if (BVar3 == 0) goto LAB_00486175;
  }
  if ((*(short *)(param_2 + 4) == 9) && (SVar2 = GetKeyState(0x11), SVar2 < 0)) {
    SVar2 = GetKeyState(0x10);
    FUN_00485f48(param_1,-1 < SVar2);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
LAB_00486175:
  TWinControl_CMDialogKey((int)param_1,param_2);
  return;
}


/* ==== 00486184 TPageControl.CMDockClient ==== */

void TPageControl_CMDockClient(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_20 = &LAB_004862be;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(undefined4 *)(param_2 + 0xc) = 0;
  puStack_28 = (undefined1 *)0x4861b9;
  local_8 = param_1;
  piVar3 = TTabSheet_virtual_02c((int *)&PTR_TWinControl_virtual_000_00483258,'\x01',param_1);
  local_8[0x92] = (int)piVar3;
  puStack_2c = &LAB_004862a1;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_38 = &LAB_0048623a;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  piVar2 = *(int **)(*(int *)(param_2 + 4) + 0x38);
  puStack_34 = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  uVar4 = System__IsClass(piVar2,(int)&PTR_TWinControl_virtual_000_00442cf0);
  if ((char)uVar4 != '\0') {
    TGroupBox_GetCaption((int)piVar2,(int *)&local_c);
    TGroupBox_SetCaption((int)piVar3,local_c);
  }
  FUN_004856b8((int *)local_8[0x92],local_8);
  System__CallDynaInst(piVar2,local_8,*(int *)(param_2 + 4) + 0x44);
  *in_FS_OFFSET = uStack_3c;
  cVar1 = *(char *)((int)piVar2 + 0x47);
  puStack_34 = (undefined1 *)0x48626a;
  TTabSheet_SetTabVisible(local_8[0x92],cVar1);
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (cVar1 != '\0') {
    puStack_34 = (undefined1 *)0x48627f;
    TPageControl_SetActivePage(local_8,(int *)local_8[0x92]);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  puStack_34 = (undefined1 *)0x486288;
  TGroupBox_SetAlign(piVar2,CONCAT31((int3)((uint)uVar5 >> 8),5),uVar4);
  *in_FS_OFFSET = uStack_30;
  local_8[0x92] = 0;
  return;
}


/* ==== 004862cc TPageControl.CMDockNotification ==== */

void TPageControl_CMDockNotification(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int i_val;
  uint *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_20 = &LAB_0048638d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = FUN_00485d98((int)param_1,*(int *)(param_2 + 4));
  if (iVar2 != 0) {
    if (**(int **)(param_2 + 8) == 0xc) {
      FUN_00403e14((int *)&local_8,*(char **)(*(int *)(param_2 + 8) + 8));
      i_val = System__LStrLen((int)local_8);
      if (0 < i_val) {
        j = 1;
        do {
          cVar1 = *(char *)((int)local_8 + j + -1);
          if ((cVar1 == '\n') || (cVar1 == '\r')) {
            FUN_00404210((int *)&local_8,j - 1);
            break;
          }
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
      TGroupBox_SetCaption(iVar2,local_8);
    }
    else if (**(int **)(param_2 + 8) == 0xb00b) {
      TTabSheet_SetTabVisible(iVar2,(char)*(undefined4 *)(*(int *)(param_2 + 8) + 4));
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00486394;
  puStack_20 = (undefined1 *)0x48638c;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0048639c TPageControl.CMUndockClient ==== */

void TPageControl_CMUndockClient(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar1 = FUN_00485d98(param_1,*(int *)(param_2 + 8));
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x24c) = iVar1;
    TGroupBox_SetAlign(*(int **)(param_2 + 8),0,extraout_ECX);
  }
  return;
}


/* ==== 004863c8 FUN_004863c8 ==== */

int FUN_004863c8(int *param_1,undefined4 *param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  int i_val;
  UINT Msg;
  WPARAM wParam;
  undefined4 *lParam;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *param_2;
  local_18 = param_2[1];
  iVar2 = 0;
  if ((char)param_1[0x51] != '\0') {
    lParam = &local_1c;
    wParam = 0;
    Msg = 0x130d;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
    if (-1 < LVar1) {
      iVar3 = 0;
      if (-1 < LVar1) {
        i_val = LVar1 + 1;
        do {
          iVar3 = FUN_00485c54((int)param_1,iVar3,'\x01','\x01');
          i_val = i_val + -1;
        } while (i_val != 0);
      }
      if (iVar3 != 0) {
        i_val = Controls_TWinControl_GetControlCount(iVar3);
        if (0 < i_val) {
          iVar2 = Controls_TWinControl_GetControl(iVar3,0);
          if (param_1 != *(int **)(iVar2 + 0x90)) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  return iVar2;
}


/* ==== 00486458 TPageControl.WMLButtonDown ==== */

void TPageControl_WMLButtonDown(int *param_1,int param_2)

{
  int *piVar1;
  int aiStack_10 [2];
  
  TControl_WMLButtonDown(param_1,param_2);
  FUN_004070e8(*(undefined4 *)(param_2 + 8),aiStack_10);
  piVar1 = (int *)FUN_004863c8(param_1,aiStack_10);
  if ((piVar1 != (int *)0x0) && (*(char *)((int)param_1 + 0x20d) == '\0')) {
    FUN_0042edc0(piVar1,'\0',-1);
  }
  return;
}


/* ==== 0048649c TPageControl.WMLButtonDblClk ==== */

void TPageControl_WMLButtonDblClk(int *param_1,int param_2)

{
  int *piVar1;
  int aiStack_10 [2];
  
  TControl_WMLButtonDblClk(param_1,param_2);
  FUN_004070e8(*(undefined4 *)(param_2 + 8),aiStack_10);
  piVar1 = (int *)FUN_004863c8(param_1,aiStack_10);
  if (piVar1 != (int *)0x0) {
    FUN_0042f2b8(piVar1,(int *)0x0,0,0);
  }
  return;
}


/* ==== 004864d8 FUN_004864d8 ==== */

int FUN_004864d8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x244) != 0) {
    iVar1 = TTabSheet_GetPageIndex(*(int *)(param_1 + 0x244));
    return iVar1;
  }
  return -1;
}


/* ==== 004864f0 TConversion.virtual_000 ==== */

void TConversion_virtual_000(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_2 + 4))(param_2,param_3,param_4);
  return;
}


/* ==== 00486504 TConversion.virtual_004 ==== */

void TConversion_virtual_004(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_2 + 8))(param_2,param_3,param_4);
  return;
}


/* ==== 00486518 FUN_00486518 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486518(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00486587;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad2dc = _DAT_004ad2dc + 1;
  if (_DAT_004ad2dc == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_004ad2e0 != (HMODULE)0x0) {
      FreeLibrary(DAT_004ad2e0);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_004ad2e4 != (HMODULE)0x0) {
      FreeLibrary(DAT_004ad2e4);
    }
    FUN_0040454c(0x4ab480,(int)&DAT_004840d8);
    FUN_0040454c(0x4ab474,(int)&DAT_004840d8);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 004865c4 FUN_004865c4 ==== */

undefined4 FUN_004865c4(int param_1)

{
  if (param_1 == 1) {
    return *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0x50) + 0x24);
  }
  return *(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xdc);
}


/* ==== 004865e4 FUN_004865e4 ==== */

void FUN_004865e4(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *unaff_EDI;
  int *in_FS_OFFSET;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 *local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  uint *local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  uint *local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined4 *local_148;
  int local_144;
  int local_140;
  uint *local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  byte local_124 [216];
  undefined4 uStackY_4c;
  int local_24;
  undefined1 *local_20;
  int *local_1c;
  int j;
  
  local_1c = (int *)&stack0xfffffffc;
  i_val = 0x39;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  local_20 = &LAB_00486e60;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  i_val = FUN_00415b9c((int)param_1);
  uVar1 = i_val - 1;
  if (SBORROW4(i_val,1)) {
    uVar1 = System__RunError(uVar1);
  }
  if (-1 < (int)uVar1) {
    local_20 = (undefined1 *)(uVar1 + 1);
    j = 0;
    do {
      piVar2 = (int *)FUN_00415b70((int)param_1,j);
      System__LStrCat3((int *)&stack0xffffffe8,(undefined4 *)piVar2[2],(undefined4 *)&DAT_00486e78);
      uVar3 = System__IsClass(piVar2,(int)&PTR_TControl_virtual_000_0042a694);
      if ((char)uVar3 != '\0') {
        local_1c = piVar2;
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_24,local_124);
        i_val = local_24;
        System__LStrCat3(&local_128,unaff_EDI,(undefined4 *)&DAT_00486e84);
        uVar3 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_128);
        TControl_SetLeft(local_1c,uVar3);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_12c,local_124);
        i_val = local_12c;
        System__LStrCat3(&local_130,unaff_EDI,(undefined4 *)&DAT_00486e94);
        uVar3 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_130);
        TControl_SetTop(local_1c,uVar3);
      }
      uVar3 = System__IsClass(piVar2,(int)&PTR_TControl_virtual_000_00421a9c);
      if ((char)uVar3 != '\0') {
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_134,local_124);
        i_val = local_134;
        System__LStrCat3(&local_138,unaff_EDI,(undefined4 *)&DAT_00486ea0);
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_138);
        FUN_004865c4(i_val);
        TGroupBox_SetFont((int)piVar2);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_140,local_124);
        i_val = local_140;
        System__LStrCat3(&local_144,unaff_EDI,(undefined4 *)"Caption");
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,i_val,local_144);
        TGroupBox_SetCaption((int)piVar2,local_13c);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_14c,local_124);
        i_val = local_14c;
        System__LStrCat3(&local_150,unaff_EDI,(undefined4 *)&DAT_00486ec0);
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,i_val,local_150);
        System__LStrAsg(piVar2 + 0x1c,local_148);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_154,local_124);
        i_val = local_154;
        System__LStrCat3(&local_158,unaff_EDI,(undefined4 *)"FontSize");
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_158);
        uStackY_4c = 0x4868a6;
        uVar1 = MulDiv(i_val,0x60,0x48);
        i_val = -uVar1;
        if (SBORROW4(0,uVar1)) {
          System__RunError(uVar1);
          i_val = extraout_EDX;
        }
        TFont_SetHeight((int *)piVar2[0x16],i_val);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_15c,local_124);
        i_val = local_15c;
        System__LStrCat3(&local_160,unaff_EDI,(undefined4 *)"FontColor");
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_160);
        TFont_SetColor((int *)piVar2[0x16],i_val,extraout_ECX);
        uVar3 = System__IsClass(param_1,(int)&PTR_TWinControl_virtual_000_004875b8);
        if ((char)uVar3 == '\0') {
          TFont_SetStyle((int *)piVar2[0x16],1);
        }
      }
      uVar3 = System__IsClass(piVar2,(int)&PTR_TWinControl_virtual_000_00424244);
      if ((char)uVar3 != '\0') {
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_164,local_124);
        i_val = local_164;
        System__LStrCat3(&local_168,unaff_EDI,(undefined4 *)&DAT_00486ea0);
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_168);
        FUN_004865c4(i_val);
        TGroupBox_SetFont((int)piVar2);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_170,local_124);
        i_val = local_170;
        System__LStrCat3(&local_174,unaff_EDI,(undefined4 *)"Caption");
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,i_val,local_174);
        TGroupBox_SetCaption((int)piVar2,local_16c);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_178,local_124);
        i_val = local_178;
        System__LStrCat3(&local_17c,unaff_EDI,(undefined4 *)"FontSize");
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_17c);
        uVar1 = MulDiv(i_val,0x60,0x48);
        i_val = -uVar1;
        if (SBORROW4(0,uVar1)) {
          System__RunError(uVar1);
          i_val = extraout_EDX_00;
        }
        TFont_SetHeight((int *)piVar2[0x16],i_val);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_180,local_124);
        i_val = local_180;
        System__LStrCat3(&local_184,unaff_EDI,(undefined4 *)"FontColor");
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_184);
        TFont_SetColor((int *)piVar2[0x16],i_val,extraout_ECX_00);
      }
      uVar3 = System__IsClass(piVar2,(int)&PTR_TWinControl_virtual_000_004251c4);
      if ((char)uVar3 != '\0') {
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_188,local_124);
        i_val = local_188;
        System__LStrCat3(&local_18c,unaff_EDI,(undefined4 *)&DAT_00486ea0);
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_18c);
        FUN_004865c4(i_val);
        TGroupBox_SetFont((int)piVar2);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_194,local_124);
        i_val = local_194;
        System__LStrCat3(&local_198,unaff_EDI,(undefined4 *)"Caption");
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,i_val,local_198);
        TGroupBox_SetCaption((int)piVar2,local_190);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_19c,local_124);
        i_val = local_19c;
        System__LStrCat3(&local_1a0,unaff_EDI,(undefined4 *)"FontSize");
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_1a0);
        uVar1 = MulDiv(i_val,0x60,0x48);
        i_val = -uVar1;
        if (SBORROW4(0,uVar1)) {
          System__RunError(uVar1);
          i_val = extraout_EDX_01;
        }
        TFont_SetHeight((int *)piVar2[0x16],i_val);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_1a4,local_124);
        i_val = local_1a4;
        System__LStrCat3(&local_1a8,unaff_EDI,(undefined4 *)"FontColor");
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_1a8);
        TFont_SetColor((int *)piVar2[0x16],i_val,extraout_ECX_01);
      }
      uVar3 = System__IsClass(piVar2,(int)&PTR_TControl_virtual_000_0046745c);
      if ((char)uVar3 != '\0') {
        TGroupBox_SetCaption((int)piVar2,(uint *)0x0);
      }
      uVar3 = System__IsClass(piVar2,(int)&PTR_TWinControl_virtual_000_004222c4);
      if ((char)uVar3 != '\0') {
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_1ac,local_124);
        i_val = local_1ac;
        System__LStrCat3(&local_1b0,unaff_EDI,(undefined4 *)&DAT_00486ea0);
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_1b0);
        FUN_004865c4(i_val);
        TGroupBox_SetFont((int)piVar2);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_1b8,local_124);
        i_val = local_1b8;
        System__LStrCat3(&local_1bc,unaff_EDI,(undefined4 *)&DAT_00486ec0);
        (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,i_val,local_1bc);
        System__LStrAsg(piVar2 + 0x1c,local_1b4);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_1c0,local_124);
        i_val = local_1c0;
        System__LStrCat3(&local_1c4,unaff_EDI,(undefined4 *)"FontSize");
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_1c4);
        TFont_SetSize((int *)piVar2[0x16],i_val);
        System_TObject_ClassName(*param_1,local_124);
        System__LStrFromString(&local_1c8,local_124);
        i_val = local_1c8;
        System__LStrCat3(&local_1cc,unaff_EDI,(undefined4 *)"FontColor");
        i_val = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,i_val,local_1cc);
        TFont_SetColor((int *)piVar2[0x16],i_val,extraout_ECX_02);
      }
      j = j + 1;
      local_20 = (undefined1 *)((int)local_20 + -1);
    } while (local_20 != (undefined1 *)0x0);
  }
  *in_FS_OFFSET = local_24;
  local_1c = (int *)&LAB_00486e67;
  local_20 = (undefined1 *)0x486e4f;
  System__LStrArrayClr(&local_1cc,0x2a);
  local_20 = (undefined1 *)0x486e57;
  System__LStrClr(&local_24);
  local_20 = (undefined1 *)0x486e5f;
  System__LStrClr((int *)&stack0xffffffe8);
  return;
}


