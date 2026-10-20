/* Menu.exe — units/MPlayer.pas: 61 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a1928 TMediaPlayer.virtual_02c ==== */

int * TMediaPlayer_virtual_02c(int *param_1,char param_2,int *param_3)

{
  byte i_val;
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  uint uVar2;
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
  TCustomControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x40;
  FUN_004a1a8c((int)param_1);
  *(undefined2 *)(param_1 + 0xa2) = 0x1ff;
  *(undefined2 *)((int)param_1 + 0x28a) = 0x1ff;
  *(undefined2 *)(param_1 + 0xa3) = 0x1ff;
  i_val = 0;
  do {
    uVar2 = (uint)i_val;
    *(undefined1 *)(param_1 + uVar2 * 4 + 0x7e) = 1;
    *(undefined1 *)((int)param_1 + uVar2 * 0x10 + 0x1f9) = 1;
    *(undefined1 *)((int)param_1 + uVar2 * 0x10 + 0x1fa) = 1;
    *(undefined1 *)((int)param_1 + uVar2 * 0x10 + 0x1fb) = 0;
    i_val = i_val + 1;
  } while (i_val != 9);
  TControl_SetWidth(param_1,0xf0);
  TControl_SetHeight(param_1,0x1e);
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 1;
  *(undefined1 *)((int)param_1 + 0x305) = 0;
  *(undefined1 *)((int)param_1 + 0x306) = 1;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  TGroupBox_SetTabStop((int)param_1,'\x01');
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 004a1a18 TMediaPlayer.Destroy ==== */

void TMediaPlayer_Destroy(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 uStack_c;
  
  uStack_c = param_3;
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if (*(ushort *)((int)piVar1 + 0x2da) != 0) {
    mciSendCommandA((uint)*(ushort *)((int)piVar1 + 0x2da),0x804,2,(DWORD_PTR)&uStack_c);
  }
  FUN_004a1bfc((int)piVar1);
  TCustomControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004a1a68 TMediaPlayer.virtual_00c ==== */

void TMediaPlayer_virtual_00c(int *param_1)

{
  TControl_virtual_00c(param_1);
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(char *)((int)param_1 + 0x305) != '\0')) {
    FUN_004a2970(param_1);
  }
  return;
}


/* ==== 004a1a8c FUN_004a1a8c ==== */

void FUN_004a1a8c(int param_1)

{
  int *piVar1;
  byte *lpBitmapName;
  HBITMAP h_val;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte j;
  undefined **ppuVar4;
  undefined **ppuVar5;
  byte i_val;
  byte local_53 [43];
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined1 local_1c;
  undefined *local_18;
  undefined1 local_14;
  
  Classes_Point(0,0,&local_28);
  *(undefined4 *)(param_1 + 0x2a8) = local_28;
  *(undefined4 *)(param_1 + 0x2ac) = local_24;
  i_val = 0;
  ppuVar4 = &PTR_s_MPPLAY_004ab564;
  uVar3 = extraout_ECX;
  do {
    j = 0;
    ppuVar5 = &PTR_s_EN_004a18c8_8_004ab558;
    do {
      piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',uVar3);
      *(int **)(param_1 + (uint)i_val * 0x10 + 0x1fc + (uint)j * 4) = piVar1;
      local_20 = *ppuVar5;
      local_1c = 6;
      local_18 = *ppuVar4;
      local_14 = 6;
      lpBitmapName = FUN_004091ec(local_53,(byte *)"%s_%s",&local_20,1);
      h_val = LoadBitmapA(DAT_004ac4dc,(LPCSTR)lpBitmapName);
      FUN_0041ea8c(*(int **)(param_1 + (uint)i_val * 0x10 + 0x1fc + (uint)j * 4),h_val);
      iVar2 = (**(code **)(**(int **)(param_1 + (uint)i_val * 0x10 + 0x1fc + (uint)j * 4) + 0x2c))()
      ;
      if (*(int *)(param_1 + 0x2a8) < iVar2) {
        uVar3 = (**(code **)(**(int **)(param_1 + (uint)i_val * 0x10 + 0x1fc + (uint)j * 4) + 0x2c))
                          ();
        *(undefined4 *)(param_1 + 0x2a8) = uVar3;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + (uint)i_val * 0x10 + 0x1fc + (uint)j * 4) + 0x20))()
      ;
      uVar3 = extraout_ECX_00;
      if (*(int *)(param_1 + 0x2ac) < iVar2) {
        uVar3 = (**(code **)(**(int **)(param_1 + (uint)i_val * 0x10 + 0x1fc + (uint)j * 4) + 0x20))
                          ();
        *(undefined4 *)(param_1 + 0x2ac) = uVar3;
        uVar3 = extraout_ECX_01;
      }
      j = j + 1;
      ppuVar5 = ppuVar5 + 1;
    } while (j != 3);
    i_val = i_val + 1;
    ppuVar4 = ppuVar4 + 1;
  } while (i_val != 9);
  *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 8;
  *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 4;
  return;
}


/* ==== 004a1bfc FUN_004a1bfc ==== */

void FUN_004a1bfc(int param_1)

{
  byte j;
  byte i_val;
  
  i_val = 0;
  do {
    j = 0;
    do {
      System_TObject_Free(*(int **)(param_1 + (uint)i_val * 0x10 + 0x1fc + (uint)j * 4));
      j = j + 1;
    } while (j != 3);
    i_val = i_val + 1;
  } while (i_val != 9);
  return;
}


/* ==== 004a1c34 TMediaPlayer.SetAutoEnable ==== */

void TMediaPlayer_SetAutoEnable(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xc1]) {
    *(char *)(param_1 + 0xc1) = param_2;
    if (param_2 == '\0') {
      TMediaPlayer_SetEnabledButtons(param_1,*(undefined2 *)((int)param_1 + 0x28a));
    }
    else {
      FUN_004a1ca0(param_1);
    }
  }
  return;
}


/* ==== 004a1c5c TMediaPlayer.SetEnabledButtons ==== */

void TMediaPlayer_SetEnabledButtons(int *param_1,undefined2 param_2)

{
  uint i_val;
  bool bVar1;
  
  *(undefined2 *)((int)param_1 + 0x28a) = param_2;
  i_val = 0;
  do {
    bVar1 = (byte)i_val < 0xf;
    if ((byte)i_val < 0x10) {
      bVar1 = (*(byte *)((int)param_1 + ((int)(i_val & 0x7f) >> 3) + 0x28a) >> (i_val & 7) & 1) != 0
      ;
    }
    *(bool *)((int)param_1 + (i_val & 0xff) * 0x10 + 0x1f9) = bVar1;
    i_val = i_val + 1;
  } while ((char)i_val != '\t');
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004a1ca0 FUN_004a1ca0 ==== */

void FUN_004a1ca0(int *param_1)

{
  uint i_val;
  bool bVar1;
  
  i_val = 0;
  do {
    bVar1 = (byte)i_val < 0xf;
    if ((byte)i_val < 0x10) {
      bVar1 = (*(byte *)((int)param_1 + ((int)(i_val & 0x7f) >> 3) + 0x28e) >> (i_val & 7) & 1) != 0
      ;
    }
    *(bool *)((int)param_1 + (i_val & 0xff) * 0x10 + 0x1fb) = bVar1;
    i_val = i_val + 1;
  } while ((char)i_val != '\t');
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004a1cd4 TMediaPlayer.SetColoredButtons ==== */

void TMediaPlayer_SetColoredButtons(int *param_1,undefined2 param_2)

{
  uint i_val;
  bool bVar1;
  
  *(undefined2 *)(param_1 + 0xa3) = param_2;
  i_val = 0;
  do {
    bVar1 = (byte)i_val < 0xf;
    if ((byte)i_val < 0x10) {
      bVar1 = (*(byte *)((int)param_1 + ((int)(i_val & 0x7f) >> 3) + 0x28c) >> (i_val & 7) & 1) != 0
      ;
    }
    *(bool *)((int)param_1 + (i_val & 0xff) * 0x10 + 0x1fa) = bVar1;
    i_val = i_val + 1;
  } while ((char)i_val != '\t');
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004a1d18 TMediaPlayer.SetVisibleButtons ==== */

void TMediaPlayer_SetVisibleButtons(int *param_1,undefined2 param_2)

{
  uint i_val;
  int iVar1;
  bool bVar2;
  
  *(undefined2 *)(param_1 + 0xa2) = param_2;
  i_val = 0;
  do {
    bVar2 = (byte)i_val < 0xf;
    if ((byte)i_val < 0x10) {
      bVar2 = (*(byte *)((int)param_1 + ((int)(i_val & 0x7f) >> 3) + 0x288) >> (i_val & 7) & 1) != 0
      ;
    }
    *(bool *)(param_1 + (i_val & 0xff) * 4 + 0x7e) = bVar2;
    i_val = i_val + 1;
  } while ((char)i_val != '\t');
  if ((*(byte *)(param_1 + 8) & 0x40) != 0) {
    iVar1 = FUN_004a1d88((int)param_1);
    param_1[0xa9] = (param_1[0xe] + -1) / iVar1 + 1;
    (**(code **)(*param_1 + 0x74))();
    return;
  }
  FUN_004a1db0(param_1);
  return;
}


/* ==== 004a1d88 FUN_004a1d88 ==== */

int FUN_004a1d88(int param_1)

{
  byte j;
  int i_val;
  
  i_val = 0;
  j = 0;
  do {
    if (*(char *)(param_1 + 0x1f8 + (uint)j * 0x10) != '\0') {
      i_val = i_val + 1;
    }
    j = j + 1;
  } while (j != 9);
  if (i_val == 0) {
    i_val = 1;
  }
  return i_val;
}


/* ==== 004a1db0 FUN_004a1db0 ==== */

void FUN_004a1db0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a1d88((int)param_1);
  TControl_SetWidth(param_1,(param_1[0xa9] + -1) * iVar1 + 1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004a1dd8 TMediaPlayer.WMSize ==== */

void TMediaPlayer_WMSize(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  TWinControl_WMSize(param_1,param_2);
  if ((*(byte *)(param_1 + 8) & 0x40) == 0) {
    iVar2 = FUN_004a1d88((int)param_1);
    iVar3 = (param_1[0xaa] + -1) * iVar2 + 1;
    iVar1 = param_1[0xab];
    iVar4 = (param_1[0xe] + -1) / iVar2;
    param_1[0xa9] = iVar4 + 1;
    iVar2 = iVar4 * iVar2 + 1;
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    iVar4 = iVar1;
    if (iVar1 <= param_1[0xf]) {
      iVar4 = param_1[0xf];
    }
    if ((iVar2 != param_1[0xe]) || (iVar4 != param_1[0xf])) {
      (**(code **)(*param_1 + 0x7c))
                (param_1,param_1[0xc],param_1[0xd],iVar4,iVar2,param_2,iVar3,iVar1);
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}


/* ==== 004a1e64 FUN_004a1e64 ==== */

void FUN_004a1e64(int *param_1,byte param_2,int left_val)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  HWND pHVar10;
  HWND pHVar11;
  HDC hDC;
  int *piVar12;
  tagRECT *lprc;
  int *piVar13;
  tagRECT i_val;
  int aiStack_30 [4];
  int aiStack_20 [4];
  
  if ((*(char *)((int)param_1 + 0x291) == '\0') || (param_2 != *(byte *)((int)param_1 + 0x292))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  piVar1 = (int *)param_1[0x7c];
  TBrush_SetStyle((int *)piVar1[5],'\0');
  TBrush_SetColor((int *)piVar1[5],0x8000000f);
  TPen_SetColor((int *)piVar1[4],0x80000006);
  TPen_SetWidth((int *)piVar1[4],1);
  FUN_004191b8(piVar1,left_val,0,param_1[0xf],param_1[0xa9] + left_val);
  if (bVar3) {
    TPen_SetColor((int *)piVar1[4],0x80000010);
    FUN_00419154(piVar1,left_val + 1,param_1[0xf] + -2);
    FUN_004190f4(piVar1,left_val + 1,1);
    FUN_004190f4(piVar1,param_1[0xa9] + left_val + -1,1);
  }
  else {
    TPen_SetColor((int *)piVar1[4],0x80000014);
    FUN_00419154(piVar1,left_val + 1,param_1[0xf] + -2);
    FUN_004190f4(piVar1,left_val + 1,1);
    FUN_004190f4(piVar1,param_1[0xa9] + left_val + -1,1);
    TPen_SetColor((int *)piVar1[4],0x80000010);
    FUN_00419154(piVar1,left_val + 2,param_1[0xf] + -2);
    FUN_004190f4(piVar1,param_1[0xa9] + left_val + -2,param_1[0xf] + -2);
    FUN_004190f4(piVar1,param_1[0xa9] + left_val + -2,1);
  }
  cVar4 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar4 == '\0') && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    iVar5 = 1;
  }
  else if (((char)param_1[0xc1] == '\0') || ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
    if (*(char *)((int)param_1 + (uint)param_2 * 0x10 + 0x1f9) == '\0') {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
      if (*(char *)((int)param_1 + (uint)param_2 * 0x10 + 0x1fa) != '\0') {
        iVar5 = 2;
      }
    }
  }
  else if (*(char *)((int)param_1 + (uint)param_2 * 0x10 + 0x1fb) == '\0') {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    if (*(char *)((int)param_1 + (uint)param_2 * 0x10 + 0x1fa) != '\0') {
      iVar5 = 2;
    }
  }
  piVar2 = (int *)param_1[(uint)param_2 * 4 + iVar5 + 0x7f];
  uVar6 = (**(code **)(*piVar2 + 0x2c))();
  iVar5 = (int)uVar6 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar6 & 1) != 0);
  }
  i_val.left = param_1[0xa9] >> 1;
  if (i_val.left < 0) {
    i_val.left = i_val.left + (uint)((param_1[0xa9] & 1U) != 0);
  }
  i_val.left = i_val.left - iVar5;
  uVar6 = (**(code **)(*piVar2 + 0x20))();
  iVar5 = (int)uVar6 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar6 & 1) != 0);
  }
  i_val.top = param_1[0xf] >> 1;
  if (i_val.top < 0) {
    i_val.top = i_val.top + (uint)((param_1[0xf] & 1U) != 0);
  }
  i_val.top = i_val.top - iVar5;
  if (bVar3) {
    i_val.left = i_val.left + 1;
    i_val.top = i_val.top + 1;
  }
  uVar7 = (**(code **)(*piVar2 + 0x20))();
  piVar13 = aiStack_30;
  uVar8 = (**(code **)(*piVar2 + 0x2c))();
  Classes_Rect(0,0,uVar8,piVar13,uVar7);
  piVar13 = aiStack_30;
  uVar6 = 0x8080;
  iVar5 = (**(code **)(*piVar2 + 0x20))();
  piVar12 = aiStack_20;
  iVar9 = (**(code **)(*piVar2 + 0x2c))();
  FUN_0040f804(i_val.left + left_val,i_val.top,iVar9,piVar12,iVar5);
  FUN_00418c54(piVar1,aiStack_20,piVar2,uVar6,piVar13);
  pHVar10 = (HWND)Controls_TWinControl_GetHandle(param_1);
  pHVar11 = GetFocus();
  if ((pHVar10 == pHVar11) && ((char)uVar6 == (char)param_1[0xb2])) {
    FUN_0040f804(left_val,0,param_1[0xa9],&i_val.left,param_1[0xf]);
    cVar4 = (char)(uVar6 >> 8);
    InflateRect(&i_val,-3,-3);
    if (cVar4 != '\0') {
      OffsetRect(&i_val,1,1);
    }
    lprc = &i_val;
    hDC = (HDC)FUN_004194d8((int *)param_1[0x7c]);
    DrawFocusRect(hDC,lprc);
  }
  return;
}


/* ==== 004a2160 TMediaPlayer.virtual_0b4 ==== */

void TMediaPlayer_virtual_0b4(int *param_1)

{
  int *piVar1;
  byte i_val;
  int left_val;
  
  piVar1 = (int *)param_1[0x7c];
  TBrush_SetStyle((int *)piVar1[5],'\x01');
  TPen_SetColor((int *)piVar1[4],0x80000006);
  TPen_SetWidth((int *)piVar1[4],1);
  FUN_004191b8(piVar1,0,0,param_1[0xf],param_1[0xe]);
  left_val = 0;
  i_val = 0;
  do {
    if ((char)param_1[(uint)i_val * 4 + 0x7e] != '\0') {
      FUN_004a1e64(param_1,i_val,left_val);
      left_val = left_val + param_1[0xa9] + -1;
    }
    i_val = i_val + 1;
  } while (i_val != 9);
  return;
}


/* ==== 004a21d4 TMediaPlayer.dynamic_ffb6 ==== */

void TMediaPlayer_dynamic_ffb6(int param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xff7e;
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 6;
    return;
  case 1:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
      return;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 3:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 4:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 5:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 6:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
    return;
  case 7:
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xff7e;
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 6;
    return;
  case 8:
    if (*(char *)(param_1 + 0x2cb) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 1;
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) | 0x80;
    }
    *(ushort *)(param_1 + 0x28e) = *(ushort *)(param_1 + 0x28e) & 0xfff9;
  }
  return;
}


/* ==== 004a23fc FUN_004a23fc ==== */

void FUN_004a23fc(int *param_1,int param_2)

{
  char cVar1;
  int j;
  byte i_val;
  int *piVar2;
  int left_val;
  int *piVar3;
  byte bVar4;
  int local_1c [4];
  
  bVar4 = 0;
  left_val = 0;
  i_val = 0;
  do {
    if ((char)param_1[(uint)i_val * 4 + 0x7e] != '\0') {
      if ((left_val <= param_2) && (param_2 <= param_1[0xa9] + left_val)) {
        if ((char)param_1[0xc1] == '\0') {
          cVar1 = *(char *)((int)param_1 + (uint)i_val * 0x10 + 0x1f9);
        }
        else {
          cVar1 = *(char *)((int)param_1 + (uint)i_val * 0x10 + 0x1fb);
        }
        if (cVar1 == '\0') {
          return;
        }
        goto LAB_004a246a;
      }
      left_val = left_val + param_1[0xa9] + -1;
    }
    i_val = i_val + 1;
    if (i_val == 9) {
LAB_004a246a:
      *(byte *)((int)param_1 + 0x292) = i_val;
      if (i_val != *(byte *)(param_1 + 0xb2)) {
        *(byte *)(param_1 + 0xb2) = i_val;
        (**(code **)(*param_1 + 0xb4))();
      }
      Classes_Rect(left_val,0,param_1[0xa9] + left_val,local_1c,param_1[0xf]);
      piVar2 = local_1c;
      piVar3 = param_1 + 0xa5;
      for (j = 4; j != 0; j = j + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
        piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
      }
      *(undefined1 *)(param_1 + 0xa4) = 1;
      *(undefined1 *)((int)param_1 + 0x291) = 1;
      FUN_004a1e64(param_1,i_val,left_val);
      FUN_0042e950(param_1,'\x01');
      return;
    }
  } while( true );
}


/* ==== 004a24e4 TMediaPlayer.WMLButtonDown ==== */

void TMediaPlayer_WMLButtonDown(int *param_1,int param_2)

{
  FUN_004a23fc(param_1,(int)*(short *)(param_2 + 8));
  return;
}


/* ==== 004a24f4 TMediaPlayer.WMLButtonDblClk ==== */

void TMediaPlayer_WMLButtonDblClk(int *param_1,int param_2)

{
  FUN_004a23fc(param_1,(int)*(short *)(param_2 + 8));
  return;
}


/* ==== 004a2504 TMediaPlayer.WMMouseMove ==== */

void TMediaPlayer_WMMouseMove(int *param_1,int param_2)

{
  POINT pt;
  BOOL BVar1;
  LONG local_14;
  LONG local_10;
  
  if ((char)param_1[0xa4] != '\0') {
    Classes_Point((int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10),&local_14);
    pt.y = local_10;
    pt.x = local_14;
    BVar1 = PtInRect((RECT *)(param_1 + 0xa5),pt);
    if ((BVar1 != 0) != (bool)*(byte *)((int)param_1 + 0x291)) {
      *(byte *)((int)param_1 + 0x291) = *(byte *)((int)param_1 + 0x291) ^ 1;
      FUN_004a1e64(param_1,*(byte *)((int)param_1 + 0x292),param_1[0xa5]);
    }
  }
  return;
}


/* ==== 004a256c FUN_004a256c ==== */

void FUN_004a256c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 uVar2;
  char local_c;
  undefined3 uStack_b;
  
  _local_c = CONCAT31((int3)((uint)param_3 >> 8),1);
  System__CallDynaInst
            (param_1,CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)((int)param_1 + 0x292)),
             &local_c);
  if (local_c != '\0') {
    iVar1 = extraout_ECX;
    uVar2 = extraout_EDX;
    switch(*(undefined1 *)((int)param_1 + 0x292)) {
    case 0:
      FUN_004a2c98(param_1);
      iVar1 = extraout_ECX_00;
      uVar2 = extraout_EDX_00;
      break;
    case 1:
      FUN_004a2f14(param_1);
      iVar1 = extraout_ECX_01;
      uVar2 = extraout_EDX_01;
      break;
    case 2:
      FUN_004a2e80(param_1,extraout_EDX,extraout_ECX);
      iVar1 = extraout_ECX_02;
      uVar2 = extraout_EDX_02;
      break;
    case 3:
      FUN_004a30a8(param_1);
      iVar1 = extraout_ECX_03;
      uVar2 = extraout_EDX_03;
      break;
    case 4:
      FUN_004a3238(param_1);
      iVar1 = extraout_ECX_04;
      uVar2 = extraout_EDX_04;
      break;
    case 5:
      FUN_004a33f4(param_1);
      iVar1 = extraout_ECX_05;
      uVar2 = extraout_EDX_05;
      break;
    case 6:
      FUN_004a34d0(param_1);
      iVar1 = extraout_ECX_06;
      uVar2 = extraout_EDX_06;
      break;
    case 7:
      FUN_004a2da8(param_1);
      iVar1 = extraout_ECX_07;
      uVar2 = extraout_EDX_07;
      break;
    case 8:
      FUN_004a3594(param_1);
      iVar1 = extraout_ECX_08;
      uVar2 = extraout_EDX_08;
    }
    FUN_004a262c(param_1,CONCAT31((int3)((uint)uVar2 >> 8),*(undefined1 *)((int)param_1 + 0x292)),
                 iVar1);
  }
  return;
}


/* ==== 004a262c FUN_004a262c ==== */

void FUN_004a262c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  System__CallDynaInst
            (param_1,CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)((int)param_1 + 0x292)),
             param_3);
  return;
}


/* ==== 004a2640 TMediaPlayer.WMLButtonUp ==== */

void TMediaPlayer_WMLButtonUp(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  FUN_0042e950(param_1,'\0');
  if (((char)param_1[0xa4] != '\0') && (*(char *)((int)param_1 + 0x291) != '\0')) {
    *(undefined1 *)((int)param_1 + 0x291) = 0;
    FUN_004a1e64(param_1,*(byte *)((int)param_1 + 0x292),param_1[0xa5]);
    FUN_004a256c(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x292)),extraout_ECX);
    if (((char)param_1[0xc1] != '\0') &&
       ((param_1[0xbb] == 0 && (*(char *)((int)param_1 + 0x2c9) != '\0')))) {
      System__CallDynaInst
                (param_1,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x292)),extraout_ECX_00);
      FUN_004a1ca0(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0xa4) = 0;
  return;
}


/* ==== 004a26c4 TMediaPlayer.WMSetFocus ==== */

void TMediaPlayer_WMSetFocus(int *param_1)

{
  (**(code **)(*param_1 + 0xb4))();
  return;
}


/* ==== 004a26d0 TMediaPlayer.WMKillFocus ==== */

void TMediaPlayer_WMKillFocus(int *param_1)

{
  (**(code **)(*param_1 + 0xb4))();
  return;
}


/* ==== 004a26dc TMediaPlayer.WMGetDlgCode ==== */

void TMediaPlayer_WMGetDlgCode(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}


/* ==== 004a26e4 TMediaPlayer.dynamic_ffc0 ==== */

void TMediaPlayer_dynamic_ffc0(int *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  byte i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  sVar1 = *param_2;
  if ((short)(sVar1 + -0x20) == 0) {
    i_val = *(byte *)(param_1 + 0xb2);
    if (*(char *)((int)param_1 + (uint)i_val * 0x10 + 0x1f9) != '\0') {
      *(byte *)((int)param_1 + 0x292) = i_val;
      FUN_004a256c(param_1,CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),sVar1 + -0x20) >>
                                          8),i_val),param_3);
      if ((char)param_1[0xc1] != '\0') {
        System__CallDynaInst
                  (param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(undefined1 *)((int)param_1 + 0x292)),extraout_ECX);
        FUN_004a1ca0(param_1);
      }
    }
  }
  else if (sVar1 == 0x25) {
    i_val = *(byte *)(param_1 + 0xb2);
    do {
      if (i_val != 0) {
        i_val = i_val - 1;
      }
    } while ((i_val != 0) && ((char)param_1[(uint)i_val * 4 + 0x7e] == '\0'));
    if (i_val != *(byte *)(param_1 + 0xb2)) {
      *(byte *)(param_1 + 0xb2) = i_val;
      (**(code **)(*param_1 + 0x74))();
      return;
    }
  }
  else if (sVar1 == 0x27) {
    i_val = *(byte *)(param_1 + 0xb2);
    do {
      if (i_val < 8) {
        i_val = i_val + 1;
      }
    } while ((i_val != 8) && ((char)param_1[(uint)i_val * 4 + 0x7e] == '\0'));
    if (i_val != *(byte *)(param_1 + 0xb2)) {
      *(byte *)(param_1 + 0xb2) = i_val;
      (**(code **)(*param_1 + 0x74))();
      return;
    }
  }
  return;
}


/* ==== 004a27c0 TMediaPlayer.MMMciNotify ==== */

void TMediaPlayer_MMMciNotify(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  
  iVar3 = param_2;
  if (((char)param_1[0xc1] != '\0') &&
     (cVar2 = FUN_004a3b58((int)param_1), param_3 = extraout_ECX, iVar3 = extraout_EDX,
     cVar2 == '\x01')) {
    if (*(char *)((int)param_1 + 0x2cb) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 1;
    }
    if (*(char *)((int)param_1 + 0x2ce) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 0x80;
    }
    *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) & 0xfff9;
    FUN_004a1ca0(param_1);
    param_3 = extraout_ECX_00;
    iVar3 = extraout_EDX_00;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0xbc) = 1;
  }
  else if (iVar1 == 4) {
    *(undefined1 *)(param_1 + 0xbc) = 2;
  }
  else if (iVar1 == 8) {
    *(undefined1 *)(param_1 + 0xbc) = 3;
  }
  System__CallDynaInst(param_1,iVar3,param_3);
  return;
}


/* ==== 004a2864 FUN_004a2864 ==== */

void FUN_004a2864(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    piVar1 = SysUtils_Exception_CreateRes
                       ((int *)&DAT_004a138c,'\x01',(undefined4 *)PTR_PTR_004ab74c);
    System__RaiseExcept(piVar1);
  }
  return;
}


/* ==== 004a2888 TMediaPlayer.dynamic_ffb5 ==== */

void TMediaPlayer_dynamic_ffb5(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x2b2) != 0) {
    (**(code **)(param_1 + 0x2b0))(*(undefined4 *)(param_1 + 0x2b4),param_1,param_2,param_3);
  }
  return;
}


/* ==== 004a28a8 TMediaPlayer.dynamic_ffb4 ==== */

void TMediaPlayer_dynamic_ffb4(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x2ba) != 0) {
    (**(code **)(param_1 + 0x2b8))(*(undefined4 *)(param_1 + 700),param_1,param_2);
  }
  return;
}


/* ==== 004a28c8 TMediaPlayer.dynamic_ffb3 ==== */

void TMediaPlayer_dynamic_ffb3(int param_1)

{
  if (*(short *)(param_1 + 0x2c2) != 0) {
    (**(code **)(param_1 + 0x2c0))(*(undefined4 *)(param_1 + 0x2c4),param_1);
  }
  return;
}


/* ==== 004a28e8 TMediaPlayer.dynamic_fff7 ==== */

void TMediaPlayer_dynamic_fff7(int *param_1)

{
  TComponent_dynamic_fff7((int)param_1);
  FUN_004a1db0(param_1);
  return;
}


/* ==== 004a2970 FUN_004a2970 ==== */

void FUN_004a2970(int *param_1)

{
  char cVar1;
  MCIERROR MVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined2 local_14;
  undefined *local_10;
  undefined *local_c;
  
  puStack_38 = &stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  puStack_3c = &LAB_004a2bbb;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  System_FillChar(&local_18,0x14,0);
  if (*(char *)((int)param_1 + 0x2c9) != '\0') {
    FUN_004a2bd0(param_1,extraout_EDX,extraout_ECX);
  }
  local_18 = 0;
  local_10 = (&PTR_DAT_004ab588)[*(byte *)(param_1 + 0xb7)];
  local_c = System__LStrToPChar((undefined *)param_1[0xc0]);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d6) == '\0') {
    param_1[0xb4] = 2;
  }
  else {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = param_1[0xb4] | 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  if ((char)param_1[0xb7] == '\0') {
    param_1[0xb4] = param_1[0xb4] | 0x200;
  }
  else {
    param_1[0xb4] = param_1[0xb4] | 0x2000;
  }
  if (*(char *)((int)param_1 + 0x307) != '\0') {
    param_1[0xb4] = param_1[0xb4] | 0x100;
  }
  local_18 = Controls_TWinControl_GetHandle(param_1);
  MVar2 = mciSendCommandA(0,0x803,param_1[0xb4],(DWORD_PTR)&local_18);
  param_1[0xbb] = MVar2;
  if (MVar2 == 0) {
    *(undefined1 *)((int)param_1 + 0x2c9) = 1;
    *(undefined2 *)((int)param_1 + 0x2da) = local_14;
    iVar4 = FUN_004a3ac8((int)param_1);
    param_1[0xba] = iVar4 / 10;
    FUN_004a3930((int)param_1);
    if (*(char *)((int)param_1 + 0x2cf) != '\0') {
      TMediaPlayer_SetDisplay((int)param_1,(int *)param_1[0xbd]);
      FUN_004a38d8((int)param_1,&local_28);
      param_1[0xbe] = local_20 - local_28;
      param_1[0xbf] = local_1c - local_24;
    }
    if (((char)param_1[0xb7] == '\x02') || ((char)param_1[0xb7] == '\v')) {
      FUN_004a36e4((int)param_1,10);
    }
    *(undefined2 *)((int)param_1 + 0x28e) = 0x18;
    if ((char)param_1[0xb3] != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 0x60;
    }
    if (*(char *)((int)param_1 + 0x2cb) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 1;
    }
    if (*(char *)((int)param_1 + 0x2ce) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 0x80;
    }
    if (*(char *)((int)param_1 + 0x2cd) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 0x100;
    }
    cVar1 = FUN_004a3b58((int)param_1);
    if (cVar1 == '\x02') {
      System__CallDynaInst(param_1,0,extraout_ECX_00);
    }
    FUN_004a1ca0(param_1);
  }
  else {
    FUN_004a3c24((int)param_1,(int *)&local_2c);
    piVar3 = SysUtils_Exception_Create((int *)&DAT_004a138c,'\x01',local_2c);
    System__RaiseExcept(piVar3);
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_004a2bc2;
  puStack_3c = (undefined1 *)0x4a2bba;
  System__LStrClr((int *)&local_2c);
  return;
}


/* ==== 004a2bd0 FUN_004a2bd0 ==== */

void FUN_004a2bd0(int *param_1,undefined4 param_2,int param_3)

{
  MCIERROR MVar1;
  int local_c;
  
  if (*(short *)((int)param_1 + 0x2da) != 0) {
    param_1[0xb4] = 0;
    if (*(char *)((int)param_1 + 0x2d6) == '\0') {
      param_1[0xb4] = 2;
    }
    else {
      if ((char)param_1[0xb5] != '\0') {
        param_1[0xb4] = 2;
      }
      *(undefined1 *)((int)param_1 + 0x2d6) = 0;
    }
    if (*(char *)((int)param_1 + 0x2d7) != '\0') {
      if (*(char *)((int)param_1 + 0x2d5) != '\0') {
        param_1[0xb4] = param_1[0xb4] | 1;
      }
      *(undefined1 *)((int)param_1 + 0x2d7) = 0;
    }
    local_c = param_3;
    local_c = Controls_TWinControl_GetHandle(param_1);
    MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x804,param_1[0xb4],
                            (DWORD_PTR)&local_c);
    param_1[0xbb] = MVar1;
    if (MVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x2c9) = 0;
      *(undefined2 *)((int)param_1 + 0x2da) = 0;
      *(undefined2 *)((int)param_1 + 0x28e) = 0;
      FUN_004a1ca0(param_1);
    }
  }
  return;
}


/* ==== 004a2c98 FUN_004a2c98 ==== */

void FUN_004a2c98(int *param_1)

{
  int iVar1;
  int iVar2;
  MCIERROR MVar3;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_004a2864((int)param_1);
  if (*(char *)((int)param_1 + 0x306) != '\0') {
    iVar1 = FUN_004a3b9c((int)param_1);
    iVar2 = FUN_004a3ac8((int)param_1);
    if (((iVar1 == iVar2) && ((char)param_1[0xb6] == '\0')) &&
       (*(char *)((int)param_1 + 0x2d9) == '\0')) {
      FUN_004a3640((int)param_1);
    }
  }
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d7) == '\0') {
    param_1[0xb4] = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d6) != '\0') {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = param_1[0xb4] | 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if ((char)param_1[0xb6] != '\0') {
    param_1[0xb4] = param_1[0xb4] | 4;
    local_10 = param_1[0xb9];
    *(undefined1 *)(param_1 + 0xb6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d9) != '\0') {
    param_1[0xb4] = param_1[0xb4] | 8;
    local_c = param_1[0xb8];
    *(undefined1 *)((int)param_1 + 0x2d9) = 0;
  }
  local_14 = Controls_TWinControl_GetHandle(param_1);
  MVar3 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x806,param_1[0xb4],
                          (DWORD_PTR)&local_14);
  param_1[0xbb] = MVar3;
  return;
}


/* ==== 004a2da8 FUN_004a2da8 ==== */

void FUN_004a2da8(int *param_1)

{
  MCIERROR MVar1;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_004a2864((int)param_1);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d7) == '\0') {
    param_1[0xb4] = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d6) != '\0') {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = param_1[0xb4] | 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if ((char)param_1[0xb6] != '\0') {
    param_1[0xb4] = param_1[0xb4] | 4;
    local_c = param_1[0xb9];
    *(undefined1 *)(param_1 + 0xb6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d9) != '\0') {
    param_1[0xb4] = param_1[0xb4] | 8;
    local_8 = param_1[0xb8];
    *(undefined1 *)((int)param_1 + 0x2d9) = 0;
  }
  local_10 = Controls_TWinControl_GetHandle(param_1);
  MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x80f,param_1[0xb4],
                          (DWORD_PTR)&local_10);
  param_1[0xbb] = MVar1;
  return;
}


/* ==== 004a2e80 FUN_004a2e80 ==== */

void FUN_004a2e80(int *param_1,undefined4 param_2,int param_3)

{
  MCIERROR MVar1;
  int local_8;
  
  local_8 = param_3;
  FUN_004a2864((int)param_1);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d6) == '\0') {
    param_1[0xb4] = 2;
  }
  else {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = param_1[0xb4] | 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  local_8 = Controls_TWinControl_GetHandle(param_1);
  MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x808,param_1[0xb4],
                          (DWORD_PTR)&local_8);
  param_1[0xbb] = MVar1;
  return;
}


/* ==== 004a2f14 FUN_004a2f14 ==== */

void FUN_004a2f14(int *param_1)

{
  char cVar1;
  int *piVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (*(char *)((int)param_1 + 0x2c9) == '\0') {
    piVar2 = SysUtils_Exception_CreateRes
                       ((int *)&DAT_004a138c,'\x01',(undefined4 *)PTR_PTR_004ab74c);
    System__RaiseExcept(piVar2);
  }
  cVar1 = FUN_004a3b58((int)param_1);
  if (cVar1 == '\x02') {
    FUN_004a2f60(param_1,extraout_EDX,extraout_ECX);
    return;
  }
  cVar1 = FUN_004a3b58((int)param_1);
  if (cVar1 == '\x05') {
    FUN_004a2ff4(param_1,extraout_EDX_00,extraout_ECX_00);
  }
  return;
}


/* ==== 004a2f60 FUN_004a2f60 ==== */

void FUN_004a2f60(int *param_1,undefined4 param_2,int param_3)

{
  MCIERROR MVar1;
  int local_8;
  
  local_8 = param_3;
  FUN_004a2864((int)param_1);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d6) == '\0') {
    param_1[0xb4] = 2;
  }
  else {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = param_1[0xb4] | 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  local_8 = Controls_TWinControl_GetHandle(param_1);
  MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x809,param_1[0xb4],
                          (DWORD_PTR)&local_8);
  param_1[0xbb] = MVar1;
  return;
}


/* ==== 004a2ff4 FUN_004a2ff4 ==== */

void FUN_004a2ff4(int *param_1,undefined4 param_2,int param_3)

{
  MCIERROR MVar1;
  int local_c;
  
  local_c = param_3;
  FUN_004a2864((int)param_1);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d7) == '\0') {
    param_1[0xb4] = 1;
  }
  else if (*(char *)((int)param_1 + 0x2d5) != '\0') {
    param_1[0xb4] = 1;
  }
  if ((*(char *)((int)param_1 + 0x2d6) != '\0') && ((char)param_1[0xb5] != '\0')) {
    param_1[0xb4] = param_1[0xb4] | 2;
  }
  local_c = Controls_TWinControl_GetHandle(param_1);
  MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x855,param_1[0xb4],
                          (DWORD_PTR)&local_c);
  param_1[0xbb] = MVar1;
  if (MVar1 == 0) {
    if (*(char *)((int)param_1 + 0x2d7) != '\0') {
      *(undefined1 *)((int)param_1 + 0x2d7) = 0;
    }
    if (*(char *)((int)param_1 + 0x2d6) != '\0') {
      *(undefined1 *)((int)param_1 + 0x2d6) = 0;
    }
  }
  else {
    FUN_004a2c98(param_1);
  }
  return;
}


/* ==== 004a30a8 FUN_004a30a8 ==== */

void FUN_004a30a8(int *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  MCIERROR MVar8;
  int local_14;
  undefined4 local_10;
  
  FUN_004a2864((int)param_1);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d6) == '\0') {
    param_1[0xb4] = 2;
  }
  else {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = param_1[0xb4] | 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  uVar3 = param_1[0xb4];
  cVar1 = FUN_004a3bdc((int)param_1);
  if (cVar1 == '\n') {
    cVar1 = FUN_004a3b58((int)param_1);
    if (cVar1 == '\x02') {
      FUN_004a3b9c((int)param_1);
      uVar3 = FUN_00453f00();
      uVar4 = FUN_004a3b10((int)param_1);
      if ((uVar3 & 0xff) == uVar4) {
        uVar5 = FUN_004a3b10((int)param_1);
        iVar6 = FUN_004a366c((int)param_1,uVar5);
        FUN_004a36bc((int)param_1,iVar6);
      }
      else {
        FUN_004a3b9c((int)param_1);
        bVar2 = FUN_00453f00();
        iVar6 = FUN_004a366c((int)param_1,bVar2 + 1);
        FUN_004a36bc((int)param_1,iVar6);
      }
      FUN_004a2c98(param_1);
      *(undefined1 *)((int)param_1 + 0x292) = 0;
      return;
    }
    FUN_004a3b9c((int)param_1);
    uVar4 = FUN_00453f00();
    uVar7 = FUN_004a3b10((int)param_1);
    if ((uVar4 & 0xff) == uVar7) {
      uVar5 = FUN_004a3b10((int)param_1);
      local_10 = FUN_004a366c((int)param_1,uVar5);
    }
    else {
      FUN_004a3b9c((int)param_1);
      bVar2 = FUN_00453f00();
      local_10 = FUN_004a366c((int)param_1,bVar2 + 1);
    }
    param_1[0xb4] = uVar3 | 8;
  }
  else {
    param_1[0xb4] = uVar3 | 0x200;
  }
  local_14 = Controls_TWinControl_GetHandle(param_1);
  MVar8 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x807,param_1[0xb4],
                          (DWORD_PTR)&local_14);
  param_1[0xbb] = MVar8;
  return;
}


/* ==== 004a3238 FUN_004a3238 ==== */

void FUN_004a3238(int *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  MCIERROR MVar8;
  int local_18;
  uint local_14;
  
  FUN_004a2864((int)param_1);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d6) == '\0') {
    param_1[0xb4] = 2;
  }
  else {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = param_1[0xb4] | 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  uVar1 = param_1[0xb4];
  cVar2 = FUN_004a3bdc((int)param_1);
  if (cVar2 != '\n') {
    param_1[0xb4] = uVar1 | 0x100;
LAB_004a33bf:
    local_18 = Controls_TWinControl_GetHandle(param_1);
    MVar8 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x807,param_1[0xb4],
                            (DWORD_PTR)&local_18);
    param_1[0xbb] = MVar8;
    return;
  }
  uVar5 = FUN_004a3b9c((int)param_1);
  FUN_004a3b9c((int)param_1);
  bVar3 = FUN_00453f00();
  uVar6 = FUN_004a366c((int)param_1,(uint)bVar3);
  cVar2 = FUN_004a3b58((int)param_1);
  if (cVar2 != '\x02') {
    cVar2 = FUN_00453f00();
    local_14 = uVar6;
    if (cVar2 != '\x01') {
      cVar2 = FUN_00453f04(uVar5);
      cVar4 = FUN_00453f04(uVar6);
      if (cVar2 == cVar4) {
        cVar2 = FUN_00453f0c(uVar5);
        cVar4 = FUN_00453f0c(uVar6);
        if (cVar2 == cVar4) {
          FUN_004a3b9c((int)param_1);
          bVar3 = FUN_00453f00();
          local_14 = FUN_004a366c((int)param_1,bVar3 - 1);
        }
      }
    }
    param_1[0xb4] = uVar1 | 8;
    goto LAB_004a33bf;
  }
  cVar2 = FUN_00453f00();
  if (cVar2 != '\x01') {
    cVar2 = FUN_00453f04(uVar5);
    cVar4 = FUN_00453f04(uVar6);
    if (cVar2 == cVar4) {
      cVar2 = FUN_00453f0c(uVar5);
      cVar4 = FUN_00453f0c(uVar6);
      if (cVar2 == cVar4) {
        FUN_004a3b9c((int)param_1);
        bVar3 = FUN_00453f00();
        iVar7 = FUN_004a366c((int)param_1,bVar3 - 1);
        FUN_004a36bc((int)param_1,iVar7);
        goto LAB_004a3340;
      }
    }
  }
  FUN_004a36bc((int)param_1,uVar6);
LAB_004a3340:
  FUN_004a2c98(param_1);
  *(undefined1 *)((int)param_1 + 0x292) = 0;
  return;
}


/* ==== 004a33f4 FUN_004a33f4 ==== */

void FUN_004a33f4(int *param_1)

{
  int iVar1;
  int iVar2;
  MCIERROR MVar3;
  int local_10;
  int local_c;
  
  FUN_004a2864((int)param_1);
  if (*(char *)((int)param_1 + 0x2cf) != '\0') {
    if (*(char *)((int)param_1 + 0x306) != '\0') {
      iVar1 = FUN_004a3b9c((int)param_1);
      iVar2 = FUN_004a3ac8((int)param_1);
      if (iVar1 == iVar2) {
        FUN_004a3640((int)param_1);
      }
    }
    param_1[0xb4] = 0;
    if (*(char *)((int)param_1 + 0x2d6) == '\0') {
      param_1[0xb4] = 2;
    }
    else {
      if ((char)param_1[0xb5] != '\0') {
        param_1[0xb4] = 2;
      }
      *(undefined1 *)((int)param_1 + 0x2d6) = 0;
    }
    if (*(char *)((int)param_1 + 0x2d7) != '\0') {
      if (*(char *)((int)param_1 + 0x2d5) != '\0') {
        param_1[0xb4] = param_1[0xb4] | 1;
      }
      *(undefined1 *)((int)param_1 + 0x2d7) = 0;
    }
    param_1[0xb4] = param_1[0xb4] | 0x20000;
    local_c = param_1[0xba];
    local_10 = Controls_TWinControl_GetHandle(param_1);
    MVar3 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x80e,param_1[0xb4],
                            (DWORD_PTR)&local_10);
    param_1[0xbb] = MVar3;
  }
  return;
}


/* ==== 004a34d0 FUN_004a34d0 ==== */

void FUN_004a34d0(int *param_1)

{
  MCIERROR MVar1;
  int local_c;
  int local_8;
  
  FUN_004a2864((int)param_1);
  if (*(char *)((int)param_1 + 0x2cf) != '\0') {
    param_1[0xb4] = 0;
    if (*(char *)((int)param_1 + 0x2d6) == '\0') {
      param_1[0xb4] = 2;
    }
    else {
      if ((char)param_1[0xb5] != '\0') {
        param_1[0xb4] = 2;
      }
      *(undefined1 *)((int)param_1 + 0x2d6) = 0;
    }
    if (*(char *)((int)param_1 + 0x2d7) != '\0') {
      if (*(char *)((int)param_1 + 0x2d5) != '\0') {
        param_1[0xb4] = param_1[0xb4] | 1;
      }
      *(undefined1 *)((int)param_1 + 0x2d7) = 0;
    }
    param_1[0xb4] = param_1[0xb4] | 0x30000;
    local_8 = param_1[0xba];
    local_c = Controls_TWinControl_GetHandle(param_1);
    MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x80e,param_1[0xb4],
                            (DWORD_PTR)&local_c);
    param_1[0xbb] = MVar1;
  }
  return;
}


/* ==== 004a3594 FUN_004a3594 ==== */

void FUN_004a3594(int *param_1)

{
  MCIERROR MVar1;
  int local_10 [3];
  
  FUN_004a2864((int)param_1);
  if (*(char *)((int)param_1 + 0x2cd) != '\0') {
    param_1[0xb4] = 0;
    if (*(char *)((int)param_1 + 0x2d6) == '\0') {
      param_1[0xb4] = 2;
    }
    else {
      if ((char)param_1[0xb5] != '\0') {
        param_1[0xb4] = 2;
      }
      *(undefined1 *)((int)param_1 + 0x2d6) = 0;
    }
    if (*(char *)((int)param_1 + 0x2d7) != '\0') {
      if (*(char *)((int)param_1 + 0x2d5) != '\0') {
        param_1[0xb4] = param_1[0xb4] | 1;
      }
      *(undefined1 *)((int)param_1 + 0x2d7) = 0;
    }
    param_1[0xb4] = param_1[0xb4] | 0x100;
    local_10[0] = Controls_TWinControl_GetHandle(param_1);
    MVar1 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x80d,param_1[0xb4],
                            (DWORD_PTR)local_10);
    param_1[0xbb] = MVar1;
  }
  return;
}


/* ==== 004a3640 FUN_004a3640 ==== */

void FUN_004a3640(int param_1)

{
  undefined1 auStack_c [8];
  
  FUN_004a2864(param_1);
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x807,0x102,(DWORD_PTR)auStack_c);
  return;
}


/* ==== 004a366c FUN_004a366c ==== */

undefined4 FUN_004a366c(int param_1,undefined4 param_2)

{
  undefined1 auStack_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x112;
  local_8 = 2;
  local_4 = param_2;
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x112,(DWORD_PTR)auStack_10);
  return local_c;
}


/* ==== 004a36a4 FUN_004a36a4 ==== */

void FUN_004a36a4(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x2d5)) {
    *(char *)(param_1 + 0x2d5) = param_2;
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}


/* ==== 004a36bc FUN_004a36bc ==== */

void FUN_004a36bc(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x2e4)) {
    *(int *)(param_1 + 0x2e4) = param_2;
  }
  *(undefined1 *)(param_1 + 0x2d8) = 1;
  return;
}


/* ==== 004a36d4 TMediaPlayer.SetDeviceType ==== */

void TMediaPlayer_SetDeviceType(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x2dc)) {
    *(char *)(param_1 + 0x2dc) = param_2;
  }
  return;
}


/* ==== 004a36e4 FUN_004a36e4 ==== */

void FUN_004a36e4(int param_1,byte param_2)

{
  MCIERROR MVar1;
  undefined1 auStack_14 [4];
  uint local_10;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x401;
  local_10 = (uint)param_2;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x80d,0x401,(DWORD_PTR)auStack_14);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return;
}


/* ==== 004a3720 TMediaPlayer.SetDisplay ==== */

void TMediaPlayer_SetDisplay(int param_1,int *param_2)

{
  MCIERROR MVar1;
  undefined4 extraout_ECX;
  undefined1 auStack_1c [4];
  int local_18;
  
  if (((param_2 == (int *)0x0) || (*(char *)(param_1 + 0x2c9) == '\0')) ||
     (*(char *)(param_1 + 0x2cf) == '\0')) {
    *(int **)(param_1 + 0x2f4) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x2d0) = 0x10002;
    local_18 = Controls_TWinControl_GetHandle(param_2);
    MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x841,*(DWORD_PTR *)(param_1 + 0x2d0)
                            ,(DWORD_PTR)auStack_1c);
    *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
    if (MVar1 == 0) {
      *(int **)(param_1 + 0x2f4) = param_2;
      FUN_0041564c((int)param_2,param_1,extraout_ECX);
    }
    else {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
  }
  return;
}


/* ==== 004a37a8 TMediaPlayer.virtual_010 ==== */

void TMediaPlayer_virtual_010(int *param_1,int param_2,char param_3)

{
  TControl_virtual_010(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0xbd])) {
    if (*(char *)((int)param_1 + 0x2c9) != '\0') {
      FUN_004a37e8((int)param_1);
    }
    param_1[0xbd] = 0;
  }
  return;
}


/* ==== 004a37e8 FUN_004a37e8 ==== */

void FUN_004a37e8(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  if ((*(char *)(param_1 + 0x2c9) != '\0') && (*(char *)(param_1 + 0x2cf) != '\0')) {
    *(undefined4 *)(param_1 + 0x2d0) = 0x10002;
    local_14 = 0;
    MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x841,0x10002,(DWORD_PTR)auStack_18);
    *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  }
  return;
}


/* ==== 004a3834 FUN_004a3834 ==== */

void FUN_004a3834(int param_1,undefined4 *param_2)

{
  MCIERROR MVar1;
  int i_val;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int local_40 [4];
  undefined1 local_30 [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  
  bVar5 = 0;
  piVar2 = local_40;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  }
  if ((*(char *)(param_1 + 0x2c9) != '\0') && (*(char *)(param_1 + 0x2cf) != '\0')) {
    if ((local_40[3] == 0) && (local_40[2] == 0)) {
      Classes_Rect(local_40[0],local_40[1],*(undefined4 *)(param_1 + 0x2f8),local_1c,
                   *(undefined4 *)(param_1 + 0x2fc));
    }
    else {
      piVar2 = local_40;
      puVar3 = local_1c;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *puVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    *(undefined4 *)(param_1 + 0x2d0) = 0x50000;
    puVar3 = local_1c;
    puVar4 = local_2c;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x842,0x50000,(DWORD_PTR)local_30);
    *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  }
  return;
}


/* ==== 004a38d8 FUN_004a38d8 ==== */

void FUN_004a38d8(int param_1,undefined4 *param_2)

{
  MCIERROR MVar1;
  int i_val;
  undefined4 *puVar2;
  undefined1 auStack_20 [4];
  undefined4 local_1c [4];
  
  if ((*(char *)(param_1 + 0x2c9) != '\0') && (*(char *)(param_1 + 0x2cf) != '\0')) {
    *(undefined4 *)(param_1 + 0x2d0) = 0x40000;
    MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x843,0x40000,(DWORD_PTR)auStack_20);
    *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
    puVar2 = local_1c;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


/* ==== 004a3930 FUN_004a3930 ==== */

void FUN_004a3930(int param_1)

{
  MCIERROR MVar1;
  int i_val;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_3c [4];
  int local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c [4];
  int local_1c [4];
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_34 = 8;
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x80b,0x102,(DWORD_PTR)auStack_3c);
  *(char *)(param_1 + 0x2cb) = (char)local_38;
  if ((char)local_38 != '\0') {
    *(byte *)(param_1 + 0x2ca) = *(byte *)(param_1 + 0x2ca) | 4;
  }
  local_34 = 1;
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x80b,*(DWORD_PTR *)(param_1 + 0x2d0),
                  (DWORD_PTR)auStack_3c);
  *(char *)(param_1 + 0x2ce) = (char)local_38;
  if ((char)local_38 != '\0') {
    *(byte *)(param_1 + 0x2ca) = *(byte *)(param_1 + 0x2ca) | 8;
  }
  local_34 = 7;
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x80b,*(DWORD_PTR *)(param_1 + 0x2d0),
                  (DWORD_PTR)auStack_3c);
  *(char *)(param_1 + 0x2cd) = (char)local_38;
  if ((char)local_38 != '\0') {
    *(byte *)(param_1 + 0x2ca) = *(byte *)(param_1 + 0x2ca) | 2;
  }
  local_34 = 3;
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x80b,*(DWORD_PTR *)(param_1 + 0x2d0),
                  (DWORD_PTR)auStack_3c);
  *(char *)(param_1 + 0x2cf) = (char)local_38;
  if ((char)local_38 != '\0') {
    *(byte *)(param_1 + 0x2ca) = *(byte *)(param_1 + 0x2ca) | 0x10;
  }
  local_34 = 4;
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x80b,*(DWORD_PTR *)(param_1 + 0x2d0),
                  (DWORD_PTR)auStack_3c);
  if ((((local_38 == 0x207) || (local_38 == 0x208)) || (local_38 == 0x203)) || (local_38 == 0x201))
  {
    *(undefined1 *)(param_1 + 0x2cc) = 1;
  }
  if (*(char *)(param_1 + 0x2cc) != '\0') {
    *(byte *)(param_1 + 0x2ca) = *(byte *)(param_1 + 0x2ca) | 1;
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0x20000;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x843,0x20000,(DWORD_PTR)local_30);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  piVar2 = local_2c;
  piVar3 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  *(int *)(param_1 + 0x2f8) = local_1c[2] - local_1c[0];
  *(int *)(param_1 + 0x2fc) = local_1c[3] - local_1c[1];
  return;
}


/* ==== 004a3ac8 FUN_004a3ac8 ==== */

undefined4 FUN_004a3ac8(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_004a2864(param_1);
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 1;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14;
}


/* ==== 004a3b10 FUN_004a3b10 ==== */

undefined4 FUN_004a3b10(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_004a2864(param_1);
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 3;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14;
}


/* ==== 004a3b58 FUN_004a3b58 ==== */

char FUN_004a3b58(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  char local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 4;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14 + -0xc;
}


