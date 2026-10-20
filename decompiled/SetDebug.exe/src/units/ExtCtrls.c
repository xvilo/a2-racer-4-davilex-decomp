/* SetDebug.exe — units/ExtCtrls.pas: 71 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00442664 FUN_00442664 ==== */

void FUN_00442664(int param_1,ULONG_PTR param_2)

{
  FUN_00442538(param_1,1,param_2);
  return;
}


/* ==== 00442670 FUN_00442670 ==== */

void FUN_00442670(int param_1,ushort param_2,ULONG_PTR param_3)

{
  FUN_00442538(param_1,param_2,param_3);
  return;
}


/* ==== 00442678 FUN_00442678 ==== */

void FUN_00442678(undefined4 param_1,int *param_2)

{
  FUN_00402888(0,param_2);
  return;
}


/* ==== 00442688 FUN_00442688 ==== */

void FUN_00442688(int param_1,char param_2)

{
  int iVar1;
  undefined3 in_register_00000009;
  
  if (param_2 != *(char *)(param_1 + 0x78)) {
    *(char *)(param_1 + 0x78) = param_2;
    if (param_2 == '\0') {
      FUN_00402d14(*(int **)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      iVar1 = (**(code **)(PTR_PTR_0044685c + 0x2c))
                        (PTR_PTR_0044685c,CONCAT31(in_register_00000009,1),param_1);
      *(int *)(param_1 + 0x74) = iVar1;
      TLabel_SetColor(iVar1,*(int *)(param_1 + 0x4c));
    }
  }
  return;
}


/* ==== 004426c8 FUN_004426c8 ==== */

void FUN_004426c8(void)

{
  bool bVar1;
  int i_val;
  int *piVar2;
  HWND pHVar3;
  BOOL BVar4;
  int j;
  
  i_val = FUN_00440214(DAT_004477c8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar2 = (int *)FUN_00440200(DAT_004477c8,j);
      bVar1 = FUN_0042abb0((int)piVar2);
      if (bVar1) {
        pHVar3 = (HWND)FUN_0042a8b4(piVar2);
        BVar4 = IsWindowVisible(pHVar3);
        if (BVar4 != 0) {
          pHVar3 = (HWND)FUN_0042a8b4(piVar2);
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


/* ==== 0044272c FUN_0044272c ==== */

int * FUN_0044272c(int param_1)

{
  int *piVar1;
  HANDLE pvVar2;
  undefined4 extraout_EDX;
  tagPOINT tStack_14;
  
  GetCursorPos(&tStack_14);
  piVar1 = FUN_00423258(&tStack_14,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
  if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 8) & 0x10) != 0)) {
    piVar1 = (int *)0x0;
  }
  pvVar2 = FUN_00421c94();
  if (piVar1 != *(int **)(param_1 + 0x3c)) {
    if (((*(int *)(param_1 + 0x3c) != 0) && (pvVar2 == (HANDLE)0x0)) ||
       ((pvVar2 != (HANDLE)0x0 && (pvVar2 == *(HANDLE *)(param_1 + 0x3c))))) {
      FUN_00425780(*(int *)(param_1 + 0x3c),0xb014,0,0);
    }
    *(int **)(param_1 + 0x3c) = piVar1;
    if (((*(int *)(param_1 + 0x3c) != 0) && (pvVar2 == (HANDLE)0x0)) ||
       ((pvVar2 != (HANDLE)0x0 && (pvVar2 == *(HANDLE *)(param_1 + 0x3c))))) {
      FUN_00425780(*(int *)(param_1 + 0x3c),0xb013,0,0);
    }
  }
  return piVar1;
}


/* ==== 004427b0 FUN_004427b0 ==== */

void FUN_004427b0(int param_1)

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
  puStack_28 = &LAB_004428ab;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x4427da;
  local_8 = param_1;
  piVar1 = FUN_0044272c(param_1);
  if ((*(char *)(local_8 + 0x78) != '\0') && (*(int *)(local_8 + 0x3c) == 0)) {
    puStack_30 = (undefined1 *)0x4427f6;
    FUN_00442ca8(local_8);
  }
  puStack_30 = (undefined1 *)0x442800;
  FUN_00440c7c((int)piVar1,(int *)&local_14);
  puStack_30 = (undefined1 *)0x44280b;
  FUN_00421c50(local_14,(int *)&local_10);
  puStack_30 = (undefined1 *)0x442818;
  FUN_0044295c(DAT_004477c4,local_10);
  local_9 = '\x01';
  puStack_34 = &LAB_00442864;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if (*(short *)(local_8 + 0xda) != 0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(local_8 + 0xd8))(*(undefined4 *)(local_8 + 0xdc),local_8,&local_9);
  }
  if (local_9 != '\0') {
    FUN_004426c8();
  }
  *in_FS_OFFSET = uStack_38;
  if (local_9 != '\0') {
    puStack_30 = (undefined1 *)0x442890;
    WaitMessage();
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004428b2;
  puStack_28 = (undefined1 *)0x4428aa;
  FUN_004039dc((int *)&local_14,2);
  return;
}


/* ==== 004428bc FUN_004428bc ==== */

void FUN_004428bc(undefined4 param_1,uint param_2)

{
  int i_val;
  int iVar1;
  int j;
  undefined4 uVar2;
  
  i_val = FUN_004401f8(DAT_004477c8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar2 = 0;
      iVar1 = FUN_004401e4(DAT_004477c8,j);
      FUN_00425780(iVar1,param_2 & 0xffff,0,uVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0044295c FUN_0044295c ==== */

void FUN_0044295c(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 in_ZF;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x442970;
  FUN_00403d48((uint *)param_1[0x11],param_2);
  if (!(bool)in_ZF) {
    puStack_14 = (undefined1 *)0x44297c;
    FUN_00403a0c(param_1 + 0x11,param_2);
    if (*(short *)((int)param_1 + 0xd2) == 0) {
      puStack_14 = (undefined1 *)0x4429a4;
      piVar1 = THintAction_virtual_02c
                         ((int *)&PTR_TCustomAction_virtual_000_0041fd5c,'\x01',param_1);
      puStack_14 = (undefined1 *)0x4429b1;
      THintAction_SetHint(piVar1,param_2);
      puStack_18 = &LAB_004429e1;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00402ef0(piVar1,extraout_EDX,extraout_ECX);
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x4429e8;
      puStack_18 = (undefined1 *)0x4429e0;
      FUN_00402d14(piVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x442994;
    (*(code *)param_1[0x34])(param_1[0x35],param_1);
  }
  return;
}


/* ==== 004429f0 FUN_004429f0 ==== */

void FUN_004429f0(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  BOOL BVar1;
  
  BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_4 + -4) + 0x24));
  if (((BVar1 != 0) == (bool)DAT_00446990) && (param_1 != DAT_00446990)) {
    SetWindowPos(*(HWND *)(*(int *)(param_4 + -4) + 0x24),(HWND)0x0,0,0,0,0,
                 (uint)*(ushort *)(&DAT_00446994 + (uint)param_1 * 2));
    DAT_00446990 = param_1;
  }
  return;
}


/* ==== 00442a4c FUN_00442a4c ==== */

void FUN_00442a4c(int param_1)

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
    i_val = FUN_004401f8(DAT_004477c8);
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar2 = (int *)FUN_004401e4(DAT_004477c8,j);
        uVar4 = extraout_ECX_00;
        uVar5 = extraout_EDX_00;
        if (*(char *)((int)piVar2 + 0x47) != '\0') {
          if ((piVar2[0x59] == 0) ||
             (bVar1 = FUN_0042abb0((int)piVar2), uVar4 = extraout_ECX_01, uVar5 = extraout_EDX_01,
             bVar1)) {
LAB_00442ab3:
            FUN_004429f0(1,uVar5,uVar4,(int)&stack0xfffffffc);
            return;
          }
          hWnd = (HWND)piVar2[0x59];
          hWndParent = (HWND)FUN_0042a8b4(piVar2);
          BVar3 = IsChild(hWndParent,hWnd);
          uVar4 = extraout_ECX_02;
          uVar5 = extraout_EDX_02;
          if (BVar3 == 0) goto LAB_00442ab3;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_004429f0(0,uVar5,uVar4,(int)&stack0xfffffffc);
  }
  return;
}


/* ==== 00442ad4 FUN_00442ad4 ==== */

void FUN_00442ad4(int param_1,UINT elapse,undefined1 param_3)

{
  UINT_PTR UVar1;
  
  FUN_00442b0c(param_1);
  UVar1 = SetTimer((HWND)0x0,0,elapse,FUN_00440ccc);
  *(short *)(param_1 + 0x7a) = (short)UVar1;
  *(undefined1 *)(param_1 + 0x79) = param_3;
  if (*(short *)(param_1 + 0x7a) == 0) {
    FUN_00442ca8(param_1);
  }
  return;
}


/* ==== 00442b0c FUN_00442b0c ==== */

void FUN_00442b0c(int param_1)

{
  if (*(ushort *)(param_1 + 0x7a) != 0) {
    KillTimer((HWND)0x0,(uint)*(ushort *)(param_1 + 0x7a));
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  return;
}


/* ==== 00442b2c FUN_00442b2c ==== */

void FUN_00442b2c(int param_1,int *param_2,int param_3)

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
  
  FUN_004069d4(*(undefined4 *)(param_3 + 8),local_18);
  FUN_0042436c(param_2,local_18,&point.x);
  piVar1 = FUN_00423258(&point,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
  iVar2 = thunk_FUN_00440cb1((int)piVar1);
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x89) == '\0')) {
    FUN_00442ca8(param_1);
  }
  else {
    if (iVar2 == *(int *)(param_1 + 0x50)) {
      FUN_004069d4(*(undefined4 *)(param_3 + 8),local_18);
      FUN_0042436c(param_2,local_18,&point.x);
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
    FUN_00425780(iVar2,0xb041,(uint)local_2c,&elapse);
    if ((local_2c == 0) || (elapse != 0)) {
      FUN_00442ca8(param_1);
      *(byte *)(param_1 + 0x48) = local_2c;
      *(int *)(param_1 + 0x50) = iVar2;
      FUN_00442ad4(param_1,elapse,0);
    }
    else {
      *(byte *)(param_1 + 0x48) = local_2c;
      *(int *)(param_1 + 0x50) = iVar2;
      GetCursorPos(&local_28);
      FUN_00442e88(param_1,&local_28.x);
    }
  }
  return;
}


/* ==== 00442c38 FUN_00442c38 ==== */

void FUN_00442c38(int param_1)

{
  tagPOINT tStack_c;
  
  FUN_00442b0c(param_1);
  if (*(char *)(param_1 + 0x79) == '\0') {
    GetCursorPos(&tStack_c);
    FUN_00442e88(param_1,&tStack_c.x);
  }
  else if (*(char *)(param_1 + 0x79) == '\x01') {
    FUN_00442c6c(param_1);
  }
  return;
}


/* ==== 00442c6c FUN_00442c6c ==== */

void FUN_00442c6c(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    bVar1 = FUN_0042abb0(*(int *)(param_1 + 0x74));
    if (bVar1) {
      pHVar2 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x74));
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        nCmdShow = 0;
        pHVar2 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x74));
        ShowWindow(pHVar2,nCmdShow);
      }
    }
  }
  return;
}


/* ==== 00442ca8 FUN_00442ca8 ==== */

void FUN_00442ca8(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00442c6c(param_1);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_00440e34();
    FUN_00442b0c(param_1);
  }
  return;
}


/* ==== 00442cd0 FUN_00442cd0 ==== */

int FUN_00442cd0(char *param_1,int param_2,char param_3)

{
  char cVar1;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (param_3 == cVar1);
  return param_2;
}


/* ==== 00442ce0 FUN_00442ce0 ==== */

int FUN_00442ce0(void)

{
  char cVar1;
  HCURSOR hIcon;
  BOOL BVar2;
  LPBITMAPINFO lpbmi_val;
  uint uVar3;
  LPVOID lpv_bits;
  char *pcVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  ICONINFO *piconinfo;
  ICONINFO iconinfo;
  int local_18;
  LPBITMAPINFO local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (**(code **)PTR_DAT_00446b78)();
  piconinfo = &iconinfo;
  hIcon = GetCursor();
  uStack_48 = 0x442d06;
  BVar2 = GetIconInfo(hIcon,piconinfo);
  if (BVar2 != 0) {
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    puStack_4c = (undefined1 *)0x442d2a;
    FUN_004186d0(iconinfo.hbmMask,&local_c,&local_10);
    puStack_4c = (undefined1 *)0x442d35;
    lpbmi_val = (LPBITMAPINFO)FUN_00407a00(local_c + local_10);
    puStack_50 = &LAB_00442df3;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    lpv_bits = (LPVOID)((int)&(((tagBITMAPINFO *)(lpbmi_val->bmiColors + -10))->bmiHeader).biSize +
                       local_c);
    puStack_4c = &stack0xfffffffc;
    local_14 = lpbmi_val;
    cVar1 = FUN_00418788(iconinfo.hbmMask,(HPALETTE)0x0,lpbmi_val,lpv_bits);
    if ((cVar1 != '\0') && ((local_14->bmiHeader).biBitCount == 1)) {
      iVar5 = (lpbmi_val->bmiHeader).biWidth;
      uVar3 = iVar5 * (uint)(lpbmi_val->bmiHeader).biBitCount + 0x1f & 0xffffffe0;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 7;
      }
      local_18 = (int)uVar3 >> 3;
      iVar5 = iVar5 * local_18;
      pcVar4 = (char *)((int)lpv_bits + (local_10 - iVar5));
      local_8 = FUN_00442cd0(pcVar4,iVar5,-1);
      if ((local_8 == 0) && ((lpbmi_val->bmiHeader).biWidth * 2 <= (lpbmi_val->bmiHeader).biHeight))
      {
        local_8 = FUN_00442cd0(pcVar4 + -iVar5,iVar5,'\0');
      }
      local_8 = local_8 / local_18 - iconinfo.yHotspot;
    }
    *in_FS_OFFSET = uStack_54;
    puStack_4c = &LAB_00442dfa;
    puStack_50 = (undefined1 *)0x442df2;
    iVar5 = FUN_004026d0((int)local_14);
    return iVar5;
  }
  return local_8;
}


/* ==== 00442e34 FUN_00442e34 ==== */

void FUN_00442e34(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_0044685c;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_4 + -4) + 0x74);
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar2 = (undefined *)FUN_00402c5c(puVar1), param_1 == puVar2)) {
    return;
  }
  FUN_00402d14(*(int **)(*(int *)(param_4 + -4) + 0x74));
  uVar3 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)(param_4 + -4));
  *(undefined4 *)(*(int *)(param_4 + -4) + 0x74) = uVar3;
  return;
}


/* ==== 00442e88 FUN_00442e88 ==== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00442e88(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int i_val;
  LONG LVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  DWORD extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  LONG *pLVar6;
  tagRECT *rect;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  LONG local_84 [4];
  tagRECT rect_2;
  undefined4 local_64;
  undefined *local_60;
  int dx_val;
  int dy_val;
  undefined4 local_54;
  int local_50;
  tagRECT local_4c;
  int local_3c;
  undefined4 local_38;
  UINT elapse;
  UINT elapse_2;
  undefined *local_2c;
  undefined4 local_28;
  bool local_21;
  tagPOINT point;
  int local_18;
  int local_14;
  POINT point_2;
  int local_8;
  
  bVar7 = 0;
  local_90 = 0;
  local_94 = (undefined4 *)0x0;
  point_2.x = *param_2;
  point_2.y = param_2[1];
  puStack_a4 = (undefined1 *)0x442eba;
  local_8 = param_1;
  FUN_00404168((int)&local_64,(int)&DAT_0043975c);
  puStack_a8 = &LAB_00443220;
  uStack_ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_ac;
  *(undefined1 *)(local_8 + 0x48) = 0;
  puStack_a4 = &stack0xfffffffc;
  if ((*(char *)(local_8 + 0x78) != '\0') &&
     (puStack_a4 = &stack0xfffffffc, *(int *)(local_8 + 0x50) != 0)) {
    puStack_a4 = &stack0xfffffffc;
    cVar1 = FUN_00439af8();
    if (cVar1 != '\0') {
      piVar3 = FUN_00423258(&point_2,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
      i_val = thunk_FUN_00440cb1((int)piVar3);
      if (i_val == *(int *)(local_8 + 0x50)) {
        local_64 = *(undefined4 *)(local_8 + 0x50);
        dx_val = point_2.x;
        dy_val = point_2.y;
        i_val = FUN_00442ce0();
        dy_val = dy_val + i_val;
        local_54 = FUN_00440178();
        local_50 = *(int *)(local_8 + 0x4c);
        FUN_004241fc(*(int *)(local_8 + 0x50),local_84);
        pLVar6 = local_84;
        rect = &local_4c;
        for (i_val = 4; i_val != 0; i_val = i_val + -1) {
          rect->left = *pLVar6;
          pLVar6 = pLVar6 + (uint)bVar7 * -2 + 1;
          rect = (tagRECT *)((int)rect + ((uint)bVar7 * -2 + 1) * 4);
        }
        (**(code **)(**(int **)(local_8 + 0x50) + 0x3c))(*(int **)(local_8 + 0x50),&local_18);
        point.x = 0;
        point.y = 0;
        piVar3 = *(int **)(*(int *)(local_8 + 0x50) + 0x24);
        if (piVar3 == (int *)0x0) {
          piVar3 = *(int **)(local_8 + 0x50);
          uVar5 = FUN_00402e8c(piVar3,(int)&PTR_TWinControl_virtual_000_00420fa8);
          if (((char)uVar5 != '\0') && (piVar3[0x59] != 0)) {
            ClientToScreen((HWND)piVar3[0x59],&point);
          }
        }
        else {
          (**(code **)(*piVar3 + 0x3c))(piVar3,&point);
        }
        OffsetRect(&local_4c,point.x - local_18,point.y - local_14);
        FUN_00424398(*(int **)(local_8 + 0x50),&point_2.x,&local_8c);
        local_3c = local_8c;
        local_38 = local_88;
        FUN_00440c7c(*(int *)(local_8 + 0x50),(int *)&local_94);
        FUN_00421c0c(local_94,&local_90);
        FUN_00403a50((int *)&local_2c,local_90);
        elapse = 0;
        elapse_2 = *(UINT *)(local_8 + 100);
        local_60 = PTR_PTR_0044685c;
        local_28 = 0;
        i_val = FUN_00425780(*(int *)(local_8 + 0x50),0xb030,0,&local_64);
        local_21 = i_val == 0;
        uVar5 = extraout_ECX;
        if ((i_val == 0) && (*(short *)(local_8 + 0x10a) != 0)) {
          (**(code **)(local_8 + 0x108))
                    (*(undefined4 *)(local_8 + 0x10c),&local_2c,&local_21,&local_64);
          uVar5 = extraout_ECX_00;
        }
        if ((local_21 == false) || (*(int *)(local_8 + 0x50) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined1 *)(local_8 + 0x48) = uVar2;
        if ((*(char *)(local_8 + 0x48) != '\0') && (local_2c != (undefined *)0x0)) {
          FUN_00442e34(local_60,local_8,uVar5,(int)&stack0xfffffffc);
          (**(code **)(**(int **)(local_8 + 0x74) + 0x68))
                    (*(int **)(local_8 + 0x74),*(undefined1 *)(*(int *)(local_8 + 0x50) + 0x4f));
          (**(code **)(**(int **)(local_8 + 0x74) + 0xc0))
                    (*(int **)(local_8 + 0x74),local_54,local_2c,&rect_2,local_28);
          OffsetRect(&rect_2,dx_val,dy_val);
          cVar1 = FUN_00402ef0(*(int **)(local_8 + 0x74),extraout_EDX_00,extraout_ECX_01);
          if (cVar1 != '\0') {
            LVar4 = FUN_00417290(*(int **)(*(int *)(local_8 + 0x74) + 0x1f0),local_2c);
            rect_2.left = rect_2.left - (LVar4 + 5);
            LVar4 = FUN_00417290(*(int **)(*(int *)(local_8 + 0x74) + 0x1f0),local_2c);
            rect_2.right = rect_2.right - (LVar4 + 5);
          }
          FUN_0042436c(*(int **)(local_8 + 0x50),&local_4c.left,&local_8c);
          *(int *)(local_8 + 0x54) = local_8c;
          *(undefined4 *)(local_8 + 0x58) = local_88;
          FUN_0042436c(*(int **)(local_8 + 0x50),&local_4c.right,&local_8c);
          *(int *)(local_8 + 0x5c) = local_8c;
          *(undefined4 *)(local_8 + 0x60) = local_88;
          TLabel_SetColor(*(int *)(local_8 + 0x74),local_50);
          uVar5 = (**(code **)(**(int **)(local_8 + 0x74) + 0xbc))
                            (*(int **)(local_8 + 0x74),&rect_2,local_2c,local_28);
          FUN_00440dc0(uVar5,extraout_EDX_01,extraout_ECX_02);
          if ((int)elapse < 1) {
            FUN_00442ad4(local_8,elapse_2,1);
          }
          else {
            FUN_00442ad4(local_8,elapse,0);
          }
          goto LAB_004431f4;
        }
      }
    }
  }
  if ((int)elapse < 1) {
    FUN_00442ca8(local_8);
  }
  else {
    FUN_00442ad4(local_8,elapse,0);
  }
LAB_004431f4:
  *in_FS_OFFSET = uStack_ac;
  puStack_a4 = &LAB_00443227;
  puStack_a8 = (undefined1 *)0x443211;
  FUN_004039dc((int *)&local_94,2);
  puStack_a8 = (undefined1 *)0x44321f;
  FUN_00404234((int)&local_64,(int)&DAT_0043975c);
  return;
}


/* ==== 00443230 FUN_00443230 ==== */

char FUN_00443230(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  
  iVar3 = *(int *)(DAT_004477c8 + 0x60);
  if (iVar3 == 0) {
LAB_0044325b:
    iVar2 = *(int *)(param_1 + 0x38);
    if ((iVar3 != iVar2) && (iVar2 != 0)) {
      iVar3 = FUN_00425780(iVar2,param_2,0,param_3);
      if (iVar3 == 1) goto LAB_0044327b;
    }
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_00425780(iVar3,param_2,0,param_3);
    if (iVar2 != 1) goto LAB_0044325b;
LAB_0044327b:
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    uVar4 = FUN_00402e8c(param_3,(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if ((((char)uVar4 != '\0') && (*(char *)((int)param_3 + 0x59) != '\0')) &&
       ((char)param_3[0x14] != '\0')) {
      FUN_0042fb40(param_3,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(short *)((int)param_3 + 0x32) != 0));
    }
  }
  return cVar1;
}


/* ==== 004432c0 FUN_004432c0 ==== */

uint FUN_004432c0(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0xaa) != 0) {
    param_1 = (**(code **)(param_1 + 0xa8))(*(undefined4 *)(param_1 + 0xac),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 004432e8 FUN_004432e8 ==== */

uint FUN_004432e8(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0xb2) != 0) {
    param_1 = (**(code **)(param_1 + 0xb0))(*(undefined4 *)(param_1 + 0xb4),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 00443394 FUN_00443394 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443394(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004477e8 = _DAT_004477e8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 004433cc FUN_004433cc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004433cc(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004477ec = _DAT_004477ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00443a38 TImage.virtual_02c ==== */

int * TImage_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TGraphicControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x800;
  piVar1 = FUN_004191dc((int *)&PTR_TPicture_virtual_000_00415478,'\x01',extraout_ECX_00);
  param_1[0x4a] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_00443dd4;
  piVar1[7] = (int)param_1;
  iVar2 = FUN_00402f08(param_1,CONCAT22(extraout_var,0xffcd));
  piVar1[6] = iVar2;
  TControl_SetHeight(param_1,0x69);
  TControl_SetWidth(param_1,0x69);
  if (cVar3 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00443acc TImage.Destroy ==== */

void TImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[0x4a]);
  TGraphicControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00443afc TImage.dynamic_ffdc ==== */

undefined4 TImage_dynamic_ffdc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x128) + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x24))();
  }
  return uVar2;
}


/* ==== 00443b18 FUN_00443b18 ==== */

void FUN_00443b18(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[0x4e] != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    return;
  }
  if (*(char *)((int)param_1 + 0x139) == '\0') {
    uVar3 = FUN_004196a8(param_1[0x4a]);
    uVar4 = FUN_00419690(param_1[0x4a]);
    FUN_0040e5ac(0,0,uVar4,param_2,uVar3);
  }
  else {
    iVar1 = FUN_004196a8(param_1[0x4a]);
    iVar2 = FUN_004196a8(param_1[0x4a]);
    iVar5 = param_1[0xf] - iVar2 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((param_1[0xf] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_00419690(param_1[0x4a]);
    iVar6 = param_1[0xe] - iVar2 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((param_1[0xe] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_00419690(param_1[0x4a]);
    FUN_0040e5c8(iVar6,iVar5,iVar2,param_2,iVar1);
  }
  return;
}


/* ==== 00443bb8 TImage.virtual_084 ==== */

void TImage_virtual_084(int *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  int local_1c [4];
  undefined1 local_9;
  int *local_8;
  
  local_8 = param_1;
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    piVar1 = (int *)param_1[0x48];
    TPen_SetStyle((int *)piVar1[4],1);
    TBrush_SetStyle((int *)piVar1[5],'\x01');
    uStackY_2c = 0x443c01;
    FUN_004171c8(piVar1,0,0,local_8[0xf],local_8[0xe]);
  }
  local_9 = (undefined1)local_8[0x4f];
  *(undefined1 *)(local_8 + 0x4f) = 1;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  piVar1 = (int *)local_8[0x48];
  FUN_00443b18(local_8,local_1c);
  FUN_00417210(piVar1,local_1c,*(int **)(local_8[0x4a] + 4));
  *in_FS_OFFSET = uStackY_2c;
  *(undefined1 *)(local_8 + 0x4f) = local_9;
  return;
}


/* ==== 00443c78 FUN_00443c78 ==== */

undefined4 FUN_00443c78(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  HWND hWnd;
  undefined4 uVar5;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar5 = 0;
  piVar1 = *(int **)(param_1[0x4a] + 4);
  if ((((*(char *)((int)param_1 + 0x47) != '\0') && ((*(byte *)(param_1 + 8) & 1) == 0)) &&
      (piVar1 != (int *)0x0)) && (*(char *)((int)piVar1 + 0x1a) != '\0')) {
    iVar3 = (**(code **)(*piVar1 + 0x24))();
    if (iVar3 == 0) {
      *(undefined1 *)((int)piVar1 + 0x1a) = 0;
    }
    else {
      piVar4 = FUN_00439eb4(param_1);
      if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x216) != '\0')) {
        bVar2 = FUN_0042abb0((int)piVar4);
        if (bVar2) {
          if ((char)param_1[0x4f] == '\0') {
            lParam = 0;
            wParam = 0;
            Msg = 0x30f;
            hWnd = (HWND)FUN_0042a8b4(piVar4);
            PostMessageA(hWnd,Msg,wParam,lParam);
          }
          else {
            FUN_00425780((int)piVar4,0x30f,0,0);
          }
          uVar5 = 1;
          *(undefined1 *)((int)piVar1 + 0x1a) = 0;
        }
      }
    }
  }
  return uVar5;
}


/* ==== 00443d10 TImage.dynamic_ffcd ==== */

void TImage_dynamic_ffcd(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined3 in_register_00000005;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if ((*(byte *)((int)param_1 + 0x13a) & (byte)param_6) != 0) {
    uVar1 = FUN_00443c78(param_1);
    if ((char)uVar1 == '\0') {
      (**(code **)(*param_1 + 0x84))();
      in_register_00000005 = extraout_var_00;
    }
    else {
      (**(code **)(*param_1 + 0x80))();
      in_register_00000005 = extraout_var;
    }
  }
  if (*(short *)((int)param_1 + 0x132) != 0) {
    (*(code *)param_1[0x4c])
              (param_1[0x4d],param_2,CONCAT31(in_register_00000005,param_3),param_4,param_5,param_6,
               param_7);
  }
  return;
}


/* ==== 00443d7c TImage.SetCenter ==== */

void TImage_SetCenter(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x139)) {
    *(char *)((int)param_1 + 0x139) = param_2;
    FUN_00443dd4(param_1);
  }
  return;
}


/* ==== 00443d94 TImage.SetPicture ==== */

void TImage_SetPicture(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x128) + 8))();
  return;
}


/* ==== 00443da4 TImage.SetStretch ==== */

void TImage_SetStretch(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4e]) {
    *(char *)(param_1 + 0x4e) = param_2;
    FUN_00443dd4(param_1);
  }
  return;
}


/* ==== 00443dbc TImage.SetTransparent ==== */

void TImage_SetTransparent(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x13b)) {
    *(char *)((int)param_1 + 0x13b) = param_2;
    FUN_00443dd4(param_1);
  }
  return;
}


/* ==== 00443dd4 FUN_00443dd4 ==== */

void FUN_00443dd4(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((char)param_1[0x13] != '\0') {
    iVar3 = FUN_00419690(param_1[0x4a]);
    if (0 < iVar3) {
      iVar3 = FUN_004196a8(param_1[0x4a]);
      if (0 < iVar3) {
        uVar4 = FUN_00419690(param_1[0x4a]);
        uVar5 = FUN_004196a8(param_1[0x4a]);
        (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],uVar5,uVar4);
      }
    }
  }
  piVar1 = *(int **)(param_1[0x4a] + 4);
  if (piVar1 == (int *)0x0) {
    param_1[0x10] = param_1[0x10] & 0xffffffbf;
    goto LAB_00443ed4;
  }
  uVar4 = FUN_00402e8c(piVar1,(int)&LAB_004155e0);
  if ((char)uVar4 == '\0') {
    uVar4 = FUN_00402e8c(piVar1,(int)&LAB_0041585c);
    if ((char)uVar4 == '\0') {
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined1 *)((int)param_1 + 0x13b));
    }
  }
  cVar2 = (**(code **)(*piVar1 + 0x28))();
  if (cVar2 == '\0') {
    if ((char)param_1[0x4e] == '\0') {
      iVar3 = (**(code **)(*piVar1 + 0x2c))();
      if (param_1[0xe] <= iVar3) {
        iVar3 = (**(code **)(*piVar1 + 0x20))();
        if (param_1[0xf] <= iVar3) goto LAB_00443e8d;
      }
      goto LAB_00443e9a;
    }
LAB_00443e8d:
    param_1[0x10] = param_1[0x10] | 0x40;
  }
  else {
LAB_00443e9a:
    param_1[0x10] = param_1[0x10] & 0xffffffbf;
  }
  uVar4 = FUN_00443c78(param_1);
  if (((char)uVar4 != '\0') && ((char)param_1[0x4f] != '\0')) {
    (**(code **)(*param_1 + 0x80))();
  }
LAB_00443ed4:
  if ((char)param_1[0x4f] == '\0') {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00443eec TImage.virtual_034 ==== */

undefined4 TImage_virtual_034(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  
  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    iVar1 = FUN_00419690(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return uVar3;
    }
    iVar1 = FUN_004196a8(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return uVar3;
    }
  }
  if ((*(char *)(param_1 + 0x4b) == '\0') || ((byte)(*(char *)(param_1 + 0x4b) - 3U) < 2)) {
    uVar2 = FUN_00419690(*(int *)(param_1 + 0x128));
    *param_2 = uVar2;
  }
  if (*(byte *)(param_1 + 0x4b) < 3) {
    uVar2 = FUN_004196a8(*(int *)(param_1 + 0x128));
    *param_3 = uVar2;
  }
  return uVar3;
}


/* ==== 00443fc4 FUN_00443fc4 ==== */

int FUN_00443fc4(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 00443fcc FUN_00443fcc ==== */

void FUN_00443fcc(int *param_1,LPSIZE param_2)

{
  int i_val;
  HDC hdc;
  char *pcVar1;
  LPSIZE lpsz;
  char local_3c [26];
  char local_22 [26];
  
  pcVar1 = local_3c;
  i_val = 0;
  do {
    *pcVar1 = (char)i_val + 'A';
    i_val = i_val + 1;
    pcVar1 = pcVar1 + 1;
  } while (i_val != 0x1a);
  i_val = 0;
  pcVar1 = local_22;
  do {
    *pcVar1 = (char)i_val + 'a';
    i_val = i_val + 1;
    pcVar1 = pcVar1 + 1;
  } while (i_val != 0x1a);
  i_val = 0x34;
  pcVar1 = local_3c;
  lpsz = param_2;
  hdc = (HDC)FUN_00417430(param_1);
  GetTextExtentPointA(hdc,pcVar1,i_val,lpsz);
  param_2->cx = param_2->cx / 0x34;
  return;
}


/* ==== 00444184 FUN_00444184 ==== */

int * FUN_00444184(int *param_1,char param_2,int *param_3)

{
  BOOL BVar1;
  HFONT h_val;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffe90;
  undefined4 in_stack_fffffe94;
  undefined4 local_158 [70];
  LOGFONTA local_40;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_fffffe90,in_stack_fffffe94);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TCustomForm_virtual_0cc(param_1,'\0',param_3);
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 != 0) {
    h_val = CreateFontIndirectA(&local_40);
    FUN_00416748((int *)param_1[0x16],h_val);
  }
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_fffffe90;
  }
  return param_1;
}


/* ==== 004442b8 FUN_004442b8 ==== */

void FUN_004442b8(uint *param_1,byte param_2,ushort param_3)

{
  LONG nNumerator;
  LONG nNumerator_00;
  char cVar1;
  byte bVar2;
  int i_val;
  int *piVar3;
  uint format_val;
  LPCSTR pCVar4;
  int *piVar5;
  HDC pHVar6;
  int iVar7;
  HICON pHVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint j;
  undefined **ppuVar9;
  int *in_FS_OFFSET;
  bool bVar10;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  undefined *local_68;
  tagRECT rect;
  int *local_54;
  undefined **local_50;
  int *local_4c;
  byte local_46;
  byte local_45;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int mul_div;
  int mul_div_2;
  int local_2c;
  int mul_div_3;
  int mul_div_4;
  int mul_div_5;
  int mul_div_6;
  tagSIZE numerator;
  int *local_10;
  ushort local_b;
  byte local_9;
  uint *local_8;
  tagRECT *lprc_val;
  int y_bottom;
  
  puStack_84 = &stack0xfffffffc;
  local_74 = (uint *)0x0;
  local_70 = (uint *)0x0;
  local_6c = (uint *)0x0;
  local_68 = (undefined *)0x0;
  puStack_88 = &LAB_004447f7;
  puStack_8c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_8c;
  local_b = param_3;
  local_9 = param_2;
  local_8 = param_1;
  local_10 = FUN_00444184((int *)&LAB_0044406c,'\x01',*(int **)PTR_DAT_00446c80);
  (**(code **)(*local_10 + 0x68))(local_10,*(undefined1 *)(*(int *)PTR_DAT_00446c80 + 0x28));
  TForm_SetBorderStyle((int)local_10,'\x03');
  i_val = FUN_0043cb74((int)local_10);
  TCanvas_SetFont(i_val);
  piVar3 = (int *)FUN_0043cb74((int)local_10);
  FUN_00443fcc(piVar3,&numerator);
  nNumerator = numerator.cx;
  mul_div_6 = MulDiv(8,numerator.cx,4);
  nNumerator_00 = numerator.cy;
  mul_div_5 = MulDiv(8,numerator.cy,8);
  mul_div_4 = MulDiv(10,nNumerator,4);
  mul_div_3 = MulDiv(10,nNumerator_00,8);
  local_2c = MulDiv(0x32,nNumerator,4);
  j = 0;
  piVar3 = &DAT_00447814;
  local_50 = &PTR_PTR_004469f0;
  do {
    bVar10 = (byte)j < 0xf;
    if ((byte)j < 0x10) {
      bVar10 = (*(byte *)((int)&local_b + ((int)(j & 0x7f) >> 3)) >> (j & 7) & 1) != 0;
    }
    if (bVar10) {
      if (*piVar3 == 0) {
        FUN_0040e5ac(0,0,0,&rect.left,0);
        format_val = FUN_00426708((int)local_10);
        format_val = format_val | 0x420;
        lprc_val = &rect;
        i_val = -1;
        FUN_00405298((undefined4 *)*local_50,(int *)&local_68);
        pCVar4 = FUN_00403dfc(local_68);
        piVar5 = (int *)FUN_0043cb74((int)local_10);
        pHVar6 = (HDC)FUN_00417430(piVar5);
        DrawTextA(pHVar6,pCVar4,i_val,lprc_val,format_val);
        *piVar3 = (rect.right - rect.left) + 8;
      }
      if (local_2c < *piVar3) {
        local_2c = *piVar3;
      }
    }
    j = j + 1;
    local_50 = local_50 + 1;
    piVar3 = piVar3 + 1;
  } while ((char)j != '\v');
  mul_div_2 = MulDiv(0xe,numerator.cy,8);
  mul_div = MulDiv(4,numerator.cx,4);
  y_bottom = 0;
  j = FUN_00440178();
  i_val = (int)j >> 1;
  if (i_val < 0) {
    i_val = i_val + (uint)((j & 1) != 0);
  }
  SetRect(&rect,0,0,i_val,y_bottom);
  j = FUN_00426708((int)local_10);
  j = j | 0x450;
  lprc_val = &rect;
  i_val = FUN_00403c38((int)local_8);
  i_val = i_val + 1;
  pCVar4 = FUN_00403dfc((undefined *)local_8);
  piVar3 = (int *)FUN_0043cb74((int)local_10);
  pHVar6 = (HDC)FUN_00417430(piVar3);
  DrawTextA(pHVar6,pCVar4,i_val,lprc_val,j);
  pCVar4 = *(LPCSTR *)(&DAT_004469b0 + (uint)local_9 * 4);
  local_38 = rect.right;
  local_3c = rect.bottom;
  if ((pCVar4 != (LPCSTR)0x0) && (local_38 = rect.right + mul_div_4 + 0x20, rect.bottom < 0x20)) {
    local_3c = 0x20;
  }
  i_val = 0;
  j = 0;
  do {
    bVar10 = (byte)j < 0xf;
    if ((byte)j < 0x10) {
      bVar10 = (*(byte *)((int)&local_b + ((int)(j & 0x7f) >> 3)) >> (j & 7) & 1) != 0;
    }
    if (bVar10) {
      i_val = i_val + 1;
    }
    j = j + 1;
  } while ((char)j != '\v');
  y_bottom = 0;
  if (i_val != 0) {
    y_bottom = local_2c * i_val + (i_val + -1) * mul_div;
  }
  i_val = FUN_00443fc4(local_38,y_bottom);
  TForm_SetClientWidth(local_10,i_val + mul_div_6 * 2);
  TForm_SetClientHeight(local_10,local_3c + mul_div_2 + mul_div_3 + mul_div_5 * 2);
  j = FUN_00440178();
  i_val = (int)j >> 1;
  if (i_val < 0) {
    i_val = i_val + (uint)((j & 1) != 0);
  }
  iVar7 = local_10[0xe] >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((local_10[0xe] & 1U) != 0);
  }
  TControl_SetLeft(local_10,i_val - iVar7);
  j = FUN_0044016c();
  i_val = (int)j >> 1;
  if (i_val < 0) {
    i_val = i_val + (uint)((j & 1) != 0);
  }
  iVar7 = local_10[0xf] >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((local_10[0xf] & 1U) != 0);
  }
  TControl_SetTop(local_10,i_val - iVar7);
  if (local_9 == 4) {
    FUN_00441ec0(*(int *)PTR_DAT_00446c80,(int *)&local_70);
    TLabel_SetCaption((int)local_10,local_70);
  }
  else {
    FUN_00405298((undefined4 *)(&PTR_PTR_0044699c)[local_9],(int *)&local_6c);
    TLabel_SetCaption((int)local_10,local_6c);
  }
  if (pCVar4 != (LPCSTR)0x0) {
    piVar3 = TImage_virtual_02c((int *)&PTR_TControl_virtual_000_00443530,'\x01',local_10);
    (**(code **)(*piVar3 + 0x18))(piVar3,"Image");
    (**(code **)(*piVar3 + 0x60))(piVar3,local_10);
    pHVar8 = LoadIconA((HINSTANCE)0x0,pCVar4);
    piVar5 = (int *)FUN_004192e4((int *)piVar3[0x4a]);
    FUN_0041cc84(piVar5,pHVar8);
    (**(code **)(*piVar3 + 0x7c))(piVar3,mul_div_6,mul_div_5,0x20,0x20);
  }
  piVar3 = TCustomLabel_virtual_02c((int *)&PTR_TControl_virtual_000_0041e338,'\x01',local_10);
  (**(code **)(*piVar3 + 0x18))(piVar3,"Message");
  (**(code **)(*piVar3 + 0x60))(piVar3,local_10);
  TLabel_SetWordWrap(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  TLabel_SetCaption((int)piVar3,local_8);
  FUN_0042421c(piVar3,&rect.left);
  (**(code **)(*piVar3 + 0x68))(piVar3,*(undefined1 *)((int)local_10 + 0x4f));
  local_44 = (local_38 - rect.right) + mul_div_6;
  cVar1 = FUN_00402ef0(piVar3,extraout_EDX_00,extraout_ECX_00);
  if (cVar1 != '\0') {
    i_val = TForm_GetClientWidth(local_10);
    local_44 = (i_val - local_44) - piVar3[0xe];
  }
  (**(code **)(*piVar3 + 0x7c))(piVar3,local_44,mul_div_5,rect.bottom,rect.right);
  if ((local_b & 4) == 0) {
    if ((local_b & 1) == 0) {
      local_45 = 5;
    }
    else {
      local_45 = 0;
    }
  }
  else {
    local_45 = 2;
  }
  if ((local_b & 8) == 0) {
    if ((local_b & 2) == 0) {
      local_46 = 2;
    }
    else {
      local_46 = 1;
    }
  }
  else {
    local_46 = 3;
  }
  i_val = TForm_GetClientWidth(local_10);
  local_40 = i_val - y_bottom >> 1;
  if (local_40 < 0) {
    local_40 = local_40 + (uint)((i_val - y_bottom & 1U) != 0);
  }
  j = 0;
  local_50 = &PTR_DAT_004469c4;
  ppuVar9 = &PTR_PTR_004469f0;
  local_54 = &DAT_00446a1c;
  i_val = rect.bottom;
  do {
    bVar2 = (byte)j;
    bVar10 = bVar2 < 0xf;
    if (bVar2 < 0x10) {
      bVar10 = (*(byte *)((int)&local_b + ((int)(j & 0x7f) >> 3)) >> (j & 7) & 1) != 0;
    }
    if (bVar10) {
      local_4c = TButton_virtual_02c((int *)&PTR_TWinControl_virtual_000_0041eb94,'\x01',local_10);
      (**(code **)(*local_4c + 0x18))(local_4c,*local_50);
      (**(code **)(*local_4c + 0x60))(local_4c,local_10);
      FUN_00405298((undefined4 *)*ppuVar9,(int *)&local_74);
      TLabel_SetCaption((int)local_4c,local_74);
      local_4c[0x7f] = *local_54;
      if (bVar2 == local_45) {
        TButton_SetDefault(local_4c,1);
      }
      if (bVar2 == local_46) {
        *(undefined1 *)((int)local_4c + 0x1f9) = 1;
      }
      (**(code **)(*local_4c + 0x7c))
                (local_4c,local_40,local_3c + mul_div_5 + mul_div_3,mul_div_2,local_2c);
      local_40 = local_40 + local_2c + mul_div;
      if (bVar2 == 10) {
        local_4c[0x43] = (int)local_10;
        local_4c[0x42] = (int)&LAB_004441fc;
      }
    }
    j = j + 1;
    local_54 = local_54 + 1;
    ppuVar9 = ppuVar9 + 1;
    local_50 = local_50 + 1;
  } while ((char)j != '\v');
  *in_FS_OFFSET = i_val;
  puStack_8c = &LAB_004447fe;
  FUN_004039dc((int *)&local_74,4);
  return;
}


/* ==== 00444828 FUN_00444828 ==== */

void FUN_00444828(uint *param_1,byte param_2,ushort param_3,int param_4,int param_5,int param_6)

{
  FUN_0044484c(param_1,param_2,param_3,(undefined4 *)0x0,param_4,param_5,param_6);
  return;
}


/* ==== 0044484c FUN_0044484c ==== */

void FUN_0044484c(uint *param_1,byte param_2,ushort param_3,undefined4 *param_4,int param_5,
                 int param_6,int param_7)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x44486d;
  piVar1 = (int *)FUN_004442b8(param_1,param_2,param_3);
  puStack_20 = &LAB_004448ec;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1[0x54] = param_7;
  puStack_1c = &stack0xfffffffc;
  FUN_00403a0c(piVar1 + 0x89,param_4);
  if (-1 < param_6) {
    TControl_SetLeft(piVar1,param_6);
  }
  if (-1 < param_5) {
    TControl_SetTop(piVar1,param_5);
  }
  if ((param_5 < 0) && (param_6 < 0)) {
    TForm_SetPosition((int)piVar1,'\x04');
  }
  (**(code **)(*piVar1 + 0xd8))();
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004448f3;
  puStack_20 = (undefined1 *)0x4448eb;
  FUN_00402d14(piVar1);
  return;
}


/* ==== 00444900 FUN_00444900 ==== */

void FUN_00444900(uint *param_1)

{
  FUN_0044490c(param_1,-1,-1);
  return;
}


/* ==== 0044490c FUN_0044490c ==== */

void FUN_0044490c(uint *param_1,int param_2,int param_3)

{
  FUN_00444828(param_1,4,4,param_3,param_2,0);
  return;
}


/* ==== 00444924 FUN_00444924 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444924(void)

{
  byte *lpString;
  undefined4 uVar1;
  byte local_30 [32];
  undefined4 local_10;
  undefined1 local_c;
  DWORD current_thread_id;
  undefined1 local_4;
  
  _DAT_0044780c = RegisterWindowMessageA("commdlg_help");
  _DAT_00447810 = RegisterWindowMessageA("commdlg_FindReplace");
  uVar1 = 1;
  local_10 = DAT_004474d4;
  local_c = 0;
  current_thread_id = GetCurrentThreadId();
  local_4 = 0;
  lpString = FUN_004086d4(local_30,(byte *)"WndProcPtr%.8X%.8X",&local_10,uVar1);
  DAT_00446998 = GlobalAddAtomA((LPCSTR)lpString);
  return;
}


/* ==== 00444c58 FUN_00444c58 ==== */

int * FUN_00444c58(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
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
  FUN_00403a0c(param_1 + 1,param_3);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00444c94 TCustomIniFile.virtual_008 ==== */

void TCustomIniFile_virtual_008
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  int *in_FS_OFFSET;
  byte **ppbVar3;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  byte *local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (byte *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_20 = &LAB_00444d38;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_24;
  ppbVar3 = &local_c;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3,ppbVar3,0);
  iVar1 = FUN_00403c38((int)local_c);
  iVar2 = extraout_ECX;
  if (((2 < iVar1) && (*local_c == 0x30)) && ((local_c[1] == 0x58 || (local_c[1] == 0x78)))) {
    FUN_00403e40((int)local_c,3,0x7fffffff,(int *)&local_10);
    FUN_00403c84((int *)&local_c,(undefined4 *)&DAT_00444d54,local_10);
    iVar2 = extraout_ECX_00;
  }
  FUN_00407cdc(local_c,param_4,iVar2);
  *in_FS_OFFSET = (int)ppbVar3;
  puStack_24 = &LAB_00444d3f;
  FUN_004039dc((int *)&local_10,2);
  return;
}


/* ==== 00444d58 TCustomIniFile.virtual_00c ==== */

void TCustomIniFile_virtual_00c
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00444da4;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_00407c70(param_4,&local_8);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_00444dab;
  iStack_20 = 0x444da3;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 00444db4 TCustomIniFile.virtual_010 ==== */

bool TCustomIniFile_virtual_010
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}


/* ==== 00444de0 TCustomIniFile.virtual_018 ==== */

void TCustomIniFile_virtual_018
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00444e85;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  piStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x444e14;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != 0) {
    puStack_40 = &LAB_00444e4a;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_00409ff4(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)piStack_38;
  puStack_30 = &LAB_00444e8c;
  uStack_34 = 0x444e84;
  FUN_004039b8(&local_18);
  return;
}


/* ==== 00444e98 TCustomIniFile.virtual_01c ==== */

void TCustomIniFile_virtual_01c
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00444f3d;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  piStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x444ecc;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != 0) {
    puStack_40 = &LAB_00444f02;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_0040a094(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)piStack_38;
  puStack_30 = &LAB_00444f44;
  uStack_34 = 0x444f3c;
  FUN_004039b8(&local_18);
  return;
}


/* ==== 00444f50 TCustomIniFile.virtual_020 ==== */

void TCustomIniFile_virtual_020
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined *local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  puStack_2c = &LAB_00444ff5;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  ppuStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x444f84;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != (undefined *)0x0) {
    puStack_40 = &LAB_00444fba;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_00408848(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)ppuStack_38;
  puStack_30 = &LAB_00444ffc;
  uStack_34 = 0x444ff4;
  FUN_004039b8((int *)&local_18);
  return;
}


/* ==== 00445008 TCustomIniFile.virtual_024 ==== */

void TCustomIniFile_virtual_024
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_004450ad;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  piStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x44503c;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != 0) {
    puStack_40 = &LAB_00445072;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_0040a044(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)piStack_38;
  puStack_30 = &LAB_004450b4;
  uStack_34 = 0x4450ac;
  FUN_004039b8(&local_18);
  return;
}


/* ==== 004450c0 TCustomIniFile.virtual_028 ==== */

void TCustomIniFile_virtual_028(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0044510f;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_004097cc(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_00445116;
  iStack_20 = 0x44510e;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 00445120 TCustomIniFile.virtual_02c ==== */

void TCustomIniFile_virtual_02c(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0044516f;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_004097fc(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_00445176;
  iStack_20 = 0x44516e;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 00445180 TCustomIniFile.virtual_030 ==== */

void TCustomIniFile_virtual_030(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004451d3;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_00408818(&local_8);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_004451da;
  iStack_20 = 0x4451d2;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 004451e4 TCustomIniFile.virtual_034 ==== */

void TCustomIniFile_virtual_034(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00445233;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_004097e4(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_0044523a;
  iStack_20 = 0x445232;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 0044525c TCustomIniFile.virtual_014 ==== */

void TCustomIniFile_virtual_014(int *param_1)

{
  (**(code **)(*param_1 + 4))();
  return;
}


/* ==== 00445278 TIniFile.virtual_000 ==== */

void TIniFile_virtual_000
               (int param_1,undefined *param_2,undefined *param_3,int *param_4,undefined *param_5)

{
  LPCSTR lpFileName;
  LPCSTR lpDefault;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  CHAR *lpReturnedString;
  DWORD DVar1;
  CHAR local_804 [2048];
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  DVar1 = 0x800;
  lpReturnedString = local_804;
  lpDefault = FUN_00403dfc(param_5);
  lpKeyName = FUN_00403dfc(param_3);
  lpAppName = FUN_00403dfc(param_2);
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,DVar1,lpFileName);
  FUN_00403aa0(param_4,(undefined4 *)local_804,DVar1);
  return;
}


/* ==== 004452d8 TIniFile.virtual_004 ==== */

void TIniFile_virtual_004(int param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  LPCSTR lpFileName;
  LPCSTR lpString;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined1 local_8;
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  lpString = FUN_00403dfc(param_4);
  lpKeyName = FUN_00403dfc(param_3);
  lpAppName = FUN_00403dfc(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    local_c = *(undefined4 *)(param_1 + 4);
    local_8 = 0xb;
    uVar2 = FUN_0040aa30((int)&DAT_00406ed0,'\x01',(undefined4 *)PTR_PTR_00446ce0,0,&local_c);
    FUN_0040346c(uVar2);
  }
  return;
}


/* ==== 00445344 TIniFile.virtual_03c ==== */

void TIniFile_virtual_03c(int param_1,int *param_2)

{
  LPCSTR lpFileName;
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_10;
  LPSTR returned_string;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_00445436;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x44536d;
  local_8 = param_2;
  returned_string = (LPSTR)FUN_004026b8(0x4000);
  puStack_28 = &LAB_00445419;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x445386;
  puStack_24 = &stack0xfffffffc;
  FUN_0040f97c(local_8);
  puStack_34 = &LAB_004453fc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  DVar1 = GetPrivateProfileStringA
                    ((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,returned_string,0x4000,lpFileName);
  pcVar3 = returned_string;
  if (DVar1 != 0) {
    for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + iVar2 + 1) {
      FUN_00403b70(&local_10,pcVar3);
      (**(code **)(*local_8 + 0x34))(local_8,local_10);
      iVar2 = FUN_00408020(pcVar3);
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00445403;
  puStack_34 = (undefined1 *)0x4453fb;
  FUN_0040fa38(local_8);
  return;
}


/* ==== 00445444 TIniFile.virtual_038 ==== */

void TIniFile_virtual_038(int param_1,undefined *param_2,int *param_3)

{
  LPCSTR lpFileName;
  LPCSTR lpAppName;
  int iVar1;
  char *returned_string;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpKeyName;
  LPCSTR lpDefault;
  DWORD DVar2;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  char *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_0044553f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x445470;
  local_8 = param_3;
  local_c = (char *)FUN_004026b8(0x4000);
  puStack_2c = &LAB_00445522;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x445489;
  puStack_28 = &stack0xfffffffc;
  FUN_0040f97c(local_8);
  puStack_38 = &LAB_00445505;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  DVar2 = 0x4000;
  lpDefault = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  returned_string = local_c;
  lpAppName = FUN_00403dfc(param_2);
  DVar2 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,returned_string,DVar2,lpFileName);
  returned_string = local_c;
  if (DVar2 != 0) {
    for (; *returned_string != '\0'; returned_string = returned_string + iVar1 + 1) {
      FUN_00403b70(&local_10,returned_string);
      (**(code **)(*local_8 + 0x34))(local_8,local_10);
      iVar1 = FUN_00408020(returned_string);
    }
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0044550c;
  puStack_38 = (undefined1 *)0x445504;
  FUN_0040fa38(local_8);
  return;
}


/* ==== 0044554c TIniFile.virtual_040 ==== */

void TIniFile_virtual_040(int *param_1,undefined4 param_2,int *param_3)

{
  int i_val;
  int j;
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
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_18 = 0;
  local_20 = (undefined *)0x0;
  local_1c = 0;
  puStack_34 = &LAB_00445660;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x445583;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_virtual_000_0040dcac,'\x01',param_3);
  puStack_40 = &LAB_0044563e;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x4455a2;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x38))(local_8,local_c,local_14);
  puStack_48 = (undefined1 *)0x4455aa;
  FUN_0040f97c(local_10);
  puStack_4c = &LAB_00445621;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  i_val = (**(code **)(*local_14 + 0x14))();
  if (-1 < i_val + -1) {
    j = 0;
    do {
      (**(code **)(*local_14 + 0xc))(local_14,j,&local_1c,&local_18);
      (**(code **)*local_8)(local_8,local_c,local_1c);
      (**(code **)(*local_14 + 0xc))(local_14,j,&local_20,local_18);
      FUN_004103f4(local_10,local_20,0);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_00445628;
  puStack_4c = (undefined1 *)0x445620;
  FUN_0040fa38(local_10);
  return;
}


/* ==== 00445670 TIniFile.virtual_044 ==== */

void TIniFile_virtual_044(int param_1,undefined *param_2)

{
  LPCSTR lpFileName;
  LPCSTR lpAppName;
  BOOL BVar1;
  undefined4 uVar2;
  LPCSTR lpKeyName;
  LPCSTR lpString;
  undefined4 local_10;
  undefined1 local_c;
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  lpAppName = FUN_00403dfc(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    local_10 = *(undefined4 *)(param_1 + 4);
    local_c = 0xb;
    uVar2 = FUN_0040aa30((int)&DAT_00406ed0,'\x01',(undefined4 *)PTR_PTR_00446ce0,0,&local_10);
    FUN_0040346c(uVar2);
  }
  return;
}


/* ==== 004456c4 TIniFile.virtual_048 ==== */

void TIniFile_virtual_048(int param_1,undefined *param_2,undefined *param_3)

{
  LPCSTR lpFileName;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  LPCSTR lpString;
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = FUN_00403dfc(param_3);
  lpAppName = FUN_00403dfc(param_2);
  WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return;
}


/* ==== 004456f4 TIniFile.virtual_04c ==== */

void TIniFile_virtual_04c(int param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,lpFileName);
  return;
}


/* ==== 00445760 FUN_00445760 ==== */

void FUN_00445760(undefined *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint file_attributes;
  bool local_9;
  undefined *local_8;
  
  puStack_14 = (undefined1 *)0x445771;
  local_8 = param_1;
  FUN_00403dec((int)param_1);
  puStack_18 = &LAB_004457d0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  file_attributes = FUN_00407e3c(local_8);
  if (file_attributes == 0xffffffff) {
    local_9 = false;
  }
  else if ((file_attributes & 1) == 1) {
    file_attributes = file_attributes & 0xfffffffe;
    DVar1 = FUN_00407e50(local_8,file_attributes);
    local_9 = DVar1 == 0;
  }
  else {
    local_9 = true;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004457d7;
  puStack_18 = (undefined1 *)0x4457cf;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00445940 entry ==== */

void entry(void)

{
  undefined4 uVar1;
  int *in_FS_OFFSET;
  undefined4 **ppuVar2;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined *local_18;
  undefined4 *local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined *)0x0;
  local_1c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  puStack_28 = (undefined1 *)0x445957;
  FUN_00406034(&DAT_00445808);
  puStack_2c = &LAB_00445a9d;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00442678(*(undefined4 *)PTR_DAT_00446c80,(int *)&local_18);
  FUN_00407ef8(local_18,(int *)&local_14);
  FUN_00403c84((int *)&DAT_00447850,local_14,(undefined4 *)"debug.ini");
  uVar1 = FUN_00407e2c((undefined *)DAT_00447850);
  if ((char)uVar1 == '\0') {
    FUN_0040399c("Cannot find \"debug.ini\"");
  }
  FUN_00445760((undefined *)DAT_00447850);
  DAT_00447844 = FUN_00444c58((int *)&PTR_TIniFile_virtual_000_00444bfc,'\x01',DAT_00447850);
  DAT_00447848 = (**(code **)(*DAT_00447844 + 8))(DAT_00447844,"general","debug",0);
  if (DAT_00447848 == 0) {
    (**(code **)(*DAT_00447844 + 0xc))(DAT_00447844,"general","debug",1);
    ppuVar2 = &local_1c;
    (**(code **)*DAT_00447844)(DAT_00447844,"messages",&DAT_00445b44,ppuVar2,&DAT_00445b38);
    FUN_00403a0c((int *)&DAT_0044784c,local_1c);
  }
  else {
    (**(code **)(*DAT_00447844 + 0xc))(DAT_00447844,"general","debug",0);
    ppuVar2 = &local_20;
    (**(code **)*DAT_00447844)(DAT_00447844,"messages","isoff",ppuVar2,&DAT_00445b38);
    FUN_00403a0c((int *)&DAT_0044784c,local_20);
  }
  FUN_00444900(DAT_0044784c);
  *in_FS_OFFSET = (int)ppuVar2;
  FUN_004039dc((int *)&local_20,4);
  return;
}

