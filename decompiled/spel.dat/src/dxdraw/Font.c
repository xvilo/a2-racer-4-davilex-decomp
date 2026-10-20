/* spel.dat — dxdraw/Font.cpp: 1 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c5930 FUN_004c5930 ==== */

undefined4 FUN_004c5930(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  UINT UVar3;
  int *piVar4;
  int unaff_EBX;
  HDC unaff_ESI;
  INT *pIVar5;
  LPSIZE ptVar6;
  int local_1c4 [3];
  tagRECT rect;
  tagRECT rect_2;
  undefined1 local_190 [400];
  
  cVar1 = FUN_004c3f70();
  if ((cVar1 != '\0') && (param_1 == 0)) {
    GetClientRect(DAT_007408a4,&rect_2);
    rect.left = rect_2.left;
    rect.top = rect_2.top;
    ClientToScreen(DAT_007408a4,(LPPOINT)&rect);
    param_2 = param_2 + rect.left;
    param_3 = param_3 + rect.top;
  }
  FUN_005590ae(local_190,param_4,&stack0x00000014);
  if (param_1 == 0) {
    if (DAT_007408d0 == 0) {
      return 0x2711;
    }
    FUN_004c4a60(DAT_007408ac);
    iVar2 = (**(code **)(*DAT_007408ac + 0x44))(DAT_007408ac,local_1c4);
    if (iVar2 != 0) {
      return 0;
    }
    if (DAT_007408f8 == 0) {
      SetBkColor(unaff_ESI,0xff0000);
      SetTextColor(unaff_ESI,0xffff);
      iVar2 = lstrlenA((LPCSTR)&rect_2.right);
      TextOutA(unaff_ESI,param_2,param_3,(LPCSTR)&rect_2.right,iVar2);
      piVar4 = DAT_007408ac;
    }
    else {
      SelectObject(unaff_ESI,*(HGDIOBJ *)(DAT_005b4708 * 0x10 + 0x5b4710));
      SetTextColor(unaff_ESI,*(COLORREF *)(DAT_005b4708 * 0x10 + 0x5b471c));
      SetBkColor(unaff_ESI,*(COLORREF *)(DAT_005b4708 * 0x10 + 0x5b4718));
      SetBkMode(unaff_ESI,*(int *)(DAT_005b4708 * 0x10 + 0x5b4714));
      ptVar6 = (LPSIZE)&stack0xfffffe38;
      iVar2 = lstrlenA((LPCSTR)&rect_2.right);
      GetTextExtentPoint32A(unaff_ESI,(LPCSTR)&rect_2.right,iVar2,ptVar6);
      SetRect(&rect,param_2,param_3,unaff_EBX + param_2,local_1c4[0] + param_3);
      pIVar5 = (INT *)0x0;
      UVar3 = lstrlenA((LPCSTR)&rect_2.right);
      ExtTextOutA(unaff_ESI,param_2,param_3,0,&rect,(LPCSTR)&rect_2.right,UVar3,pIVar5);
      piVar4 = DAT_007408ac;
    }
  }
  else if (param_1 == 1) {
    if (DAT_007408d4 == 0) {
      return 0x2711;
    }
    FUN_004c4a60(DAT_007408b0);
    iVar2 = (**(code **)(*DAT_007408b0 + 0x44))(DAT_007408b0,local_1c4);
    if (iVar2 != 0) {
      return 0;
    }
    if (DAT_007408f8 == 0) {
      SetBkColor(unaff_ESI,0xff0000);
      SetTextColor(unaff_ESI,0xffff);
      iVar2 = lstrlenA((LPCSTR)&rect_2.right);
      TextOutA(unaff_ESI,param_2,param_3,(LPCSTR)&rect_2.right,iVar2);
      piVar4 = DAT_007408b0;
    }
    else {
      SelectObject(unaff_ESI,*(HGDIOBJ *)(DAT_005b4708 * 0x10 + 0x5b4710));
      SetTextColor(unaff_ESI,*(COLORREF *)(DAT_005b4708 * 0x10 + 0x5b471c));
      SetBkColor(unaff_ESI,*(COLORREF *)(DAT_005b4708 * 0x10 + 0x5b4718));
      SetBkMode(unaff_ESI,*(int *)(DAT_005b4708 * 0x10 + 0x5b4714));
      ptVar6 = (LPSIZE)&stack0xfffffe38;
      iVar2 = lstrlenA((LPCSTR)&rect_2.right);
      GetTextExtentPoint32A(unaff_ESI,(LPCSTR)&rect_2.right,iVar2,ptVar6);
      SetRect(&rect,param_2,param_3,unaff_EBX + param_2,local_1c4[0] + param_3);
      pIVar5 = (INT *)0x0;
      UVar3 = lstrlenA((LPCSTR)&rect_2.right);
      ExtTextOutA(unaff_ESI,param_2,param_3,0,&rect,(LPCSTR)&rect_2.right,UVar3,pIVar5);
      piVar4 = DAT_007408b0;
    }
  }
  else {
    if (param_1 != 2) {
      FUN_004c4150(s__s__d____unidentified_focus_erro_005b4830,s_D__Work_dxdraw_Font_cpp_005b4858,
                   0x103);
      return 0;
    }
    if (DAT_007408d8 == 0) {
      return 0x2711;
    }
    FUN_004c4a60(DAT_00740890);
    iVar2 = (**(code **)(*DAT_00740890 + 0x44))(DAT_00740890,local_1c4);
    if (iVar2 != 0) {
      return 0;
    }
    if (DAT_007408f8 == 0) {
      SetBkColor(unaff_ESI,0xff0000);
      SetTextColor(unaff_ESI,0xffff);
      iVar2 = lstrlenA((LPCSTR)&rect_2.right);
      TextOutA(unaff_ESI,param_2,param_3,(LPCSTR)&rect_2.right,iVar2);
      piVar4 = DAT_00740890;
    }
    else {
      SelectObject(unaff_ESI,*(HGDIOBJ *)(DAT_005b4708 * 0x10 + 0x5b4710));
      SetTextColor(unaff_ESI,*(COLORREF *)(DAT_005b4708 * 0x10 + 0x5b471c));
      SetBkColor(unaff_ESI,*(COLORREF *)(DAT_005b4708 * 0x10 + 0x5b4718));
      SetBkMode(unaff_ESI,*(int *)(DAT_005b4708 * 0x10 + 0x5b4714));
      ptVar6 = (LPSIZE)&stack0xfffffe38;
      iVar2 = lstrlenA((LPCSTR)&rect_2.right);
      GetTextExtentPoint32A(unaff_ESI,(LPCSTR)&rect_2.right,iVar2,ptVar6);
      SetRect(&rect,param_2,param_3,unaff_EBX + param_2,local_1c4[0] + param_3);
      pIVar5 = (INT *)0x0;
      UVar3 = lstrlenA((LPCSTR)&rect_2.right);
      ExtTextOutA(unaff_ESI,param_2,param_3,0,&rect,(LPCSTR)&rect_2.right,UVar3,pIVar5);
      piVar4 = DAT_00740890;
    }
  }
  (**(code **)(*piVar4 + 0x68))(piVar4,unaff_ESI);
  return 0;
}


