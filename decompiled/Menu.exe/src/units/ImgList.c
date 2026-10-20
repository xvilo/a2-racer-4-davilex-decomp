/* Menu.exe — units/ImgList.pas: 30 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0043a1e0 FUN_0043a1e0 ==== */

int FUN_0043a1e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00417d54(param_1);
  if (iVar1 == 0x1fffffff) {
    return -1;
  }
  if (iVar1 == 0x20000000) {
    iVar1 = -0x1000000;
  }
  return iVar1;
}


/* ==== 0043a200 FUN_0043a200 ==== */

int FUN_0043a200(int param_1)

{
  if (param_1 == -0x1000000) {
    param_1 = 0x20000000;
  }
  else if (param_1 == -1) {
    return 0x1fffffff;
  }
  return param_1;
}


/* ==== 0043a220 TCustomImageList.virtual_02c ==== */

int * TCustomImageList_virtual_02c(int *param_1,char param_2,int *param_3)

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
  TComponent_virtual_02c(param_1,'\0',param_3);
  param_1[10] = 0x10;
  param_1[9] = 0x10;
  (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0043a26c FUN_0043a26c ==== */

int * FUN_0043a26c(int *param_1,char param_2,int param_3,int param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',(int *)0x0);
  param_1[10] = param_3;
  param_1[9] = param_4;
  (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0043a2c0 TCustomImageList.Destroy ==== */

void TCustomImageList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_00410398((undefined4 *)piVar1[0x10]);
    FUN_0043b2a0((int)piVar1,iVar2);
  }
  FUN_00402f9c((int *)piVar1[0x11]);
  FUN_0043a61c(piVar1);
  FUN_00402f9c((int *)piVar1[0x10]);
  piVar1[0x10] = 0;
  if ((int *)piVar1[0x12] != (int *)0x0) {
    FUN_00402f9c((int *)piVar1[0x12]);
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0043a32c TCustomImageList.virtual_034 ==== */

void TCustomImageList_virtual_034(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_0043a3d9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar1 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
  param_1[0x10] = iVar1;
  if (((param_1[9] < 1) || (0x8000 < param_1[9])) ||
     (uVar3 = extraout_ECX, uVar4 = extraout_EDX, param_1[10] < 1)) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab708,(int *)&local_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_8);
    FUN_004036f4(piVar2);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  param_1[0xb] = 4;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  TImageList_SetDrawingStyle(param_1,CONCAT31((int3)((uint)uVar4 >> 8),2),uVar3);
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  param_1[0xe] = 0x1fffffff;
  param_1[0xf] = 0x1fffffff;
  piVar2 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX_01);
  param_1[0x11] = (int)piVar2;
  FUN_0043a3f8((int)param_1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0043a3e0;
  puStack_14 = (undefined1 *)0x43a3d8;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0043a3e4 FUN_0043a3e4 ==== */

bool FUN_0043a3e4(int param_1)

{
  return *(int *)(param_1 + 0x30) != 0;
}


/* ==== 0043a3ec FUN_0043a3ec ==== */

void FUN_0043a3ec(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_0043a650(param_1);
  }
  return;
}


/* ==== 0043a3f8 FUN_0043a3f8 ==== */

void FUN_0043a3f8(int param_1)

{
  HBITMAP h_val;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar5;
  undefined4 uVar6;
  RECT local_1c;
  HDC local_c;
  int local_8;
  
  local_8 = param_1;
  local_c = GetDC((HWND)0x0);
  uVar6 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  piVar4 = *(int **)(local_8 + 0x44);
  h_val = CreateCompatibleBitmap(local_c,*(int *)(local_8 + 0x28),*(int *)(local_8 + 0x24));
  FUN_0041ea8c(piVar4,h_val);
  iVar1 = FUN_0041df1c(piVar4);
  TBrush_SetColor(*(int **)(iVar1 + 0x14),0);
  uVar2 = (**(code **)(*piVar4 + 0x20))();
  pRVar5 = &local_1c;
  uVar3 = (**(code **)(*piVar4 + 0x2c))();
  FUN_0040f7e8(0,0,uVar3,&pRVar5->left,uVar2);
  pRVar5 = &local_1c;
  piVar4 = (int *)FUN_0041df1c(piVar4);
  FUN_0041907c(piVar4,pRVar5);
  *in_FS_OFFSET = uVar6;
  ReleaseDC((HWND)0x0,local_c);
  return;
}


/* ==== 0043ac60 TCustomImageList.virtual_030 ==== */

void TCustomImageList_virtual_030
               (int param_1,int param_2,int *param_3,char param_4,UINT style,int y_val,int x_val)

{
  bool bVar1;
  HDC pHVar2;
  COLORREF CVar3;
  HDC hdcDst;
  HIMAGELIST p_Var4;
  int *piVar5;
  int i_val;
  undefined4 extraout_ECX;
  int iVar6;
  int dx;
  int iVar7;
  int dy;
  COLORREF rgbFg;
  RECT *lprc_val;
  UINT fStyle;
  RECT local_2c;
  undefined4 local_1c [4];
  HDC hdc_src;
  int local_8;
  
  local_8 = param_2;
  bVar1 = FUN_0043a3e4(param_1);
  if (bVar1) {
    if (param_4 == '\0') {
      if (*(int *)(param_1 + 0x48) == 0) {
        piVar5 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',
                                     extraout_ECX);
        *(int **)(param_1 + 0x48) = piVar5;
        FUN_0041ecdc(piVar5,1);
        (**(code **)(*piVar5 + 0x40))(piVar5,*(undefined4 *)(param_1 + 0x28));
        (**(code **)(*piVar5 + 0x34))(piVar5,*(undefined4 *)(param_1 + 0x24));
      }
      i_val = FUN_0041df1c(*(int **)(param_1 + 0x48));
      TBrush_SetColor(*(int **)(i_val + 0x14),0xffffff);
      FUN_0040f7e8(0,0,*(undefined4 *)(param_1 + 0x28),&local_2c.left,
                   *(undefined4 *)(param_1 + 0x24));
      lprc_val = &local_2c;
      piVar5 = (int *)FUN_0041df1c(*(int **)(param_1 + 0x48));
      FUN_0041907c(piVar5,lprc_val);
      fStyle = 0;
      rgbFg = 0;
      CVar3 = 0xff000000;
      dy = 0;
      dx = 0;
      iVar7 = 0;
      iVar6 = 0;
      piVar5 = (int *)FUN_0041df1c(*(int **)(param_1 + 0x48));
      pHVar2 = (HDC)FUN_004194d8(piVar5);
      i_val = local_8;
      p_Var4 = (HIMAGELIST)FUN_0043a5b8(param_1);
      ImageList_DrawEx(p_Var4,i_val,pHVar2,iVar6,iVar7,dx,dy,CVar3,rgbFg,fStyle);
      FUN_0040f7e8(x_val,y_val,x_val + *(int *)(param_1 + 0x28),local_1c,
                   y_val + *(int *)(param_1 + 0x24));
      piVar5 = (int *)FUN_0041df1c(*(int **)(param_1 + 0x48));
      hdc_src = (HDC)FUN_004194d8(piVar5);
      TBrush_SetColor((int *)param_3[5],0x80000014);
      pHVar2 = (HDC)FUN_004194d8(param_3);
      SetTextColor(pHVar2,0xffffff);
      SetBkColor(pHVar2,0);
      BitBlt(pHVar2,x_val + 1,y_val + 1,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x24),hdc_src,0,
             0,0xe20746);
      TBrush_SetColor((int *)param_3[5],0x80000010);
      pHVar2 = (HDC)FUN_004194d8(param_3);
      SetTextColor(pHVar2,0xffffff);
      SetBkColor(pHVar2,0);
      BitBlt(pHVar2,x_val,y_val,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x24),hdc_src,0,0,
             0xe20746);
    }
    else {
      pHVar2 = (HDC)FUN_0043a1e0(*(uint *)(param_1 + 0x3c));
      CVar3 = TImageList_GetBkColor(pHVar2);
      CVar3 = FUN_0043a1e0(CVar3);
      iVar7 = 0;
      iVar6 = 0;
      hdcDst = (HDC)FUN_004194d8(param_3);
      i_val = local_8;
      p_Var4 = (HIMAGELIST)FUN_0043a5b8(param_1);
      ImageList_DrawEx(p_Var4,i_val,hdcDst,x_val,y_val,iVar6,iVar7,CVar3,(COLORREF)pHVar2,style);
    }
  }
  return;
}


/* ==== 0043ae38 FUN_0043ae38 ==== */

void FUN_0043ae38(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  
  bVar1 = FUN_0043a3e4((int)param_1);
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))
              (param_1,param_5,param_2,
               CONCAT31((int3)((*(uint *)(&DAT_004aa82c + (uint)*(byte *)(param_1 + 0xd) * 4) |
                               *(uint *)(&DAT_004aa83c + (uint)*(byte *)((int)param_1 + 0x37) * 4))
                              >> 8),param_4),
               *(uint *)(&DAT_004aa82c + (uint)*(byte *)(param_1 + 0xd) * 4) |
               *(uint *)(&DAT_004aa83c + (uint)*(byte *)((int)param_1 + 0x37) * 4),param_6,param_3);
  }
  return;
}


/* ==== 0043ae84 FUN_0043ae84 ==== */

void FUN_0043ae84(int param_1,HIMAGELIST param_2)

{
  int i_val;
  int *piVar1;
  HDC pHVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int i;
  undefined4 *in_FS_OFFSET;
  UINT UVar3;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  RECT local_24;
  int *local_14;
  int *local_10;
  HIMAGELIST himl_val;
  int local_8;
  int x_val;
  int y_val;
  
  uStack_3c = 0x43aead;
  himl_val = param_2;
  local_8 = param_1;
  FUN_0040f7e8(0,0,*(undefined4 *)(param_1 + 0x28),&local_24.left,*(undefined4 *)(param_1 + 0x24));
  FUN_0043b8f4(local_8);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x43aecf;
  local_10 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX);
  puStack_44 = &LAB_0043afef;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x43aeee;
  puStack_40 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x34))(local_10,*(undefined4 *)(local_8 + 0x24));
  puStack_4c = (undefined1 *)0x43aefc;
  (**(code **)(*local_10 + 0x40))(local_10,*(undefined4 *)(local_8 + 0x28));
  puStack_4c = (undefined1 *)0x43af08;
  local_14 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX_00
                                );
  puStack_50 = &LAB_0043afd2;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  FUN_0041ecdc(local_14,1);
  (**(code **)(*local_14 + 0x34))(local_14,*(undefined4 *)(local_8 + 0x24));
  (**(code **)(*local_14 + 0x40))(local_14,*(undefined4 *)(local_8 + 0x28));
  i_val = ImageList_GetImageCount(himl_val);
  if (-1 < i_val + -1) {
    i = 0;
    do {
      piVar1 = (int *)FUN_0041df1c(local_10);
      FUN_0041907c(piVar1,&local_24);
      UVar3 = 0;
      y_val = 0;
      x_val = 0;
      pHVar2 = (HDC)FUN_004194d8(piVar1);
      ImageList_Draw(himl_val,i,pHVar2,x_val,y_val,UVar3);
      piVar1 = (int *)FUN_0041df1c(local_14);
      FUN_0041907c(piVar1,&local_24);
      UVar3 = 0x10;
      y_val = 0;
      x_val = 0;
      pHVar2 = (HDC)FUN_004194d8(piVar1);
      ImageList_Draw(himl_val,i,pHVar2,x_val,y_val,UVar3);
      FUN_0043a6ec(local_8,local_10,local_14);
      i = i + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0043afd9;
  puStack_50 = (undefined1 *)0x43afd1;
  FUN_00402f9c(local_14);
  return;
}


/* ==== 0043b01c FUN_0043b01c ==== */

void FUN_0043b01c(int param_1,int param_2)

{
  HIMAGELIST p_Var1;
  
  if (param_2 != 0) {
    p_Var1 = (HIMAGELIST)FUN_0043a5b8(param_2);
    FUN_0043ae84(param_1,p_Var1);
  }
  return;
}


/* ==== 0043b03c TCustomImageList.virtual_008 ==== */

void TCustomImageList_virtual_008(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HIMAGELIST p_Var3;
  COLORREF CVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  COLORREF unaff_EBX;
  HDC unaff_ESI;
  int cx;
  int cy;
  
  if (param_2 == (int *)0x0) {
    FUN_0043a61c(param_1);
    return;
  }
  uVar2 = FUN_00403114(param_2,(int)&PTR_TCustomImageList_virtual_000_0043a15c);
  if ((char)uVar2 == '\0') {
    TPersistent_virtual_008(param_1,param_2);
  }
  else {
    FUN_0043abf4(param_1);
    *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)((int)param_2 + 0x35);
    *(undefined1 *)((int)param_1 + 0x37) = *(undefined1 *)((int)param_2 + 0x37);
    TImageList_SetDrawingStyle
              (param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)((int)param_2 + 0x36);
    p_Var3 = (HIMAGELIST)FUN_0043a5b8((int)param_2);
    FUN_0043a4bc((int)param_1,p_Var3);
    bVar1 = FUN_0043a3e4((int)param_1);
    if (bVar1) {
      cy = param_1[9];
      cx = param_1[10];
      p_Var3 = (HIMAGELIST)FUN_0043a5b8((int)param_1);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_0043a3ec((int)param_1);
    }
    p_Var3 = (HIMAGELIST)FUN_0043a5b8((int)param_2);
    CVar4 = ImageList_GetBkColor(p_Var3);
    FUN_0043a200(CVar4);
    TImageList_SetBkColor(unaff_ESI,unaff_EBX);
    param_1[0xf] = param_2[0xf];
    FUN_0043b01c((int)param_1,(int)param_2);
  }
  return;
}


/* ==== 0043b0fc TCustomImageList.virtual_000 ==== */

void TCustomImageList_virtual_000(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HIMAGELIST p_Var3;
  COLORREF CVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  COLORREF unaff_EBX;
  HDC unaff_ESI;
  int cx;
  int cy;
  
  uVar2 = FUN_00403114(param_2,(int)&PTR_TCustomImageList_virtual_000_0043a15c);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)((int)param_2 + 0x35) = *(undefined1 *)((int)param_1 + 0x35);
    *(undefined1 *)((int)param_2 + 0x37) = *(undefined1 *)((int)param_1 + 0x37);
    TImageList_SetDrawingStyle
              (param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_2 + 0x36) = *(undefined1 *)((int)param_1 + 0x36);
    param_2[0xf] = param_1[0xf];
    FUN_0043abf4(param_2);
    p_Var3 = (HIMAGELIST)FUN_0043a5b8((int)param_1);
    FUN_0043a4bc((int)param_2,p_Var3);
    bVar1 = FUN_0043a3e4((int)param_2);
    if (bVar1) {
      cy = param_2[9];
      cx = param_2[10];
      p_Var3 = (HIMAGELIST)FUN_0043a5b8((int)param_2);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_0043a3ec((int)param_2);
    }
    p_Var3 = (HIMAGELIST)FUN_0043a5b8((int)param_1);
    CVar4 = ImageList_GetBkColor(p_Var3);
    FUN_0043a200(CVar4);
    TImageList_SetBkColor(unaff_ESI,unaff_EBX);
    FUN_0043b01c((int)param_2,(int)param_1);
    return;
  }
  TPersistent_virtual_000(param_1,param_2);
  return;
}


/* ==== 0043b240 TCustomImageList.virtual_038 ==== */

void TCustomImageList_virtual_038(undefined4 param_1,undefined4 *param_2)

{
  FUN_0040f7d0(0,0,param_2);
  return;
}


/* ==== 0043b250 TCustomImageList.dynamic_fff0 ==== */

void TCustomImageList_dynamic_fff0(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int j;
  int i_val;
  
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (*(int *)(param_1 + 0x50) < 1) {
    if ((*(int *)(param_1 + 0x40) != 0) &&
       (i_val = *(int *)(*(int *)(param_1 + 0x40) + 8), -1 < i_val + -1)) {
      j = 0;
      do {
        piVar1 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x40),j);
        FUN_00403178(piVar1,extraout_EDX,extraout_ECX);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    if (*(short *)(param_1 + 0x5a) != 0) {
      (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c),param_1);
    }
  }
  return;
}


/* ==== 0043b2a0 FUN_0043b2a0 ==== */

void FUN_0043b2a0(int param_1,int param_2)

{
  int iVar1;
  int j;
  int i_val;
  
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x40) + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x40),j);
      if (param_2 == iVar1) {
        *(undefined4 *)(param_2 + 4) = 0;
        FUN_00410150(*(int **)(param_1 + 0x40),j);
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0043b2e4 FUN_0043b2e4 ==== */

void FUN_0043b2e4(int param_1,int param_2)

{
  *(int *)(param_2 + 4) = param_1;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    FUN_00410104(*(int **)(param_1 + 0x40),param_2);
  }
  return;
}


/* ==== 0043b2f8 FUN_0043b2f8 ==== */

undefined4 FUN_0043b2f8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00412680(param_1);
  iVar2 = FUN_00412680(param_2);
  if (iVar1 == iVar2) {
    uVar3 = FUN_00412680(param_1);
    uVar4 = FUN_00408298((int *)param_1[1],(int *)param_2[1],uVar3);
    if ((char)uVar4 != '\0') {
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043b338 FUN_0043b338 ==== */

undefined1 FUN_0043b338(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (param_2 != 0) {
    puStack_20 = (undefined1 *)0x43b350;
    iVar2 = FUN_0043a91c(param_1);
    puStack_20 = (undefined1 *)0x43b359;
    iVar3 = FUN_0043a91c(param_2);
    if (iVar2 == iVar3) {
      puStack_20 = (undefined1 *)0x43b36d;
      iVar2 = FUN_0043a91c(param_1);
      uVar6 = extraout_ECX;
      if (iVar2 == 0) {
        puStack_20 = (undefined1 *)0x43b378;
        iVar2 = FUN_0043a91c(param_2);
        uVar6 = extraout_ECX_00;
        if (iVar2 == 0) {
          return 1;
        }
      }
      puStack_20 = (undefined1 *)0x43b391;
      piVar4 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',uVar6);
      puStack_24 = &LAB_0043b414;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x43b3ac;
      puStack_20 = &stack0xfffffffc;
      FUN_0043b878(param_1,(int)piVar4);
      puStack_2c = (undefined1 *)0x43b3b8;
      piVar5 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',
                                   extraout_ECX_01);
      puStack_30 = &LAB_0043b3f7;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      FUN_0043b878(param_2,(int)piVar5);
      FUN_0043b2f8(piVar4,piVar5);
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0043b3fe;
      puStack_30 = (undefined1 *)0x43b3f6;
      uVar1 = FUN_00402f9c(piVar5);
      return uVar1;
    }
  }
  return 0;
}


/* ==== 0043b428 FUN_0043b428 ==== */

bool FUN_0043b428(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    iVar4 = FUN_0043a91c(*(int *)(in_stack_00000004 + -8));
    return 0 < iVar4;
  }
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  uVar3 = FUN_00403114(piVar1,(int)&PTR_TCustomImageList_virtual_000_0043a15c);
  if (((char)uVar3 != '\0') &&
     (cVar2 = FUN_0043b338(*(int *)(in_stack_00000004 + -8),(int)piVar1), cVar2 != '\0')) {
    return false;
  }
  return true;
}


/* ==== 0043b484 TCustomImageList.virtual_004 ==== */

void TCustomImageList_virtual_004(int param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  
  TComponent_virtual_004(param_1,param_2);
  puVar3 = &LAB_0043b7f0;
  pcVar2 = FUN_0043b878;
  iVar4 = param_1;
  bVar1 = FUN_0043b428();
  (**(code **)(*param_2 + 8))(param_2,"Bitmap",bVar1,pcVar2,param_1,puVar3,iVar4);
  return;
}


/* ==== 0043b4dc FUN_0043b4dc ==== */

void FUN_0043b4dc(int *param_1,int *param_2)

{
  int k;
  int *piVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  int n;
  int m;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_74;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int local_44 [4];
  int local_34 [4];
  int i_val;
  int j;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_54 = (undefined1 *)0x43b4f9;
  local_8 = param_1;
  FUN_004126b8(param_2,&local_1c,4);
  puStack_54 = (undefined1 *)0x43b508;
  FUN_004126b8(param_2,&j,4);
  puStack_54 = (undefined1 *)0x43b514;
  local_c = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX);
  puStack_58 = &LAB_0043b75d;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_60 = (undefined1 *)0x43b52c;
  puStack_54 = &stack0xfffffffc;
  k = FUN_00412664(param_2);
  puStack_60 = (undefined1 *)0x43b538;
  (**(code **)(*local_c + 0x50))(local_c,param_2);
  puStack_60 = (undefined1 *)0x43b544;
  FUN_00412674(param_2,local_1c + k);
  puStack_60 = (undefined1 *)0x43b550;
  local_14 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX_00
                                );
  puStack_64 = &LAB_0043b740;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_60 = &stack0xfffffffc;
  (**(code **)(*local_14 + 0x50))(local_14,param_2);
  local_10 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX_01
                                );
  (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
  (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
  local_18 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX_02
                                );
  FUN_0041ecdc(local_18,1);
  (**(code **)(*local_18 + 0x40))(local_18,local_8[10]);
  (**(code **)(*local_18 + 0x34))(local_18,local_8[9]);
  uStack_74 = 0x43b5e5;
  FUN_0040f7e8(0,0,local_8[10],local_34,local_8[9]);
  FUN_0043b8f4((int)local_8);
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  k = (**(code **)(*local_c + 0x20))();
  if (-1 < k / local_8[9] + -1) {
    m = 0;
    i_val = k / local_8[9];
    do {
      if (j == 0) break;
      k = (**(code **)(*local_c + 0x2c))();
      k = k / local_8[10];
      if (-1 < k + -1) {
        n = 0;
        do {
          if (j == 0) break;
          FUN_0040f804(local_8[10] * n,local_8[9] * m,local_8[10],local_44,local_8[9]);
          piVar3 = local_44;
          piVar1 = (int *)FUN_0041df1c(local_c);
          piVar2 = (int *)FUN_0041df1c(local_10);
          FUN_00418f14(piVar2,local_34,piVar1,piVar3);
          FUN_0040f804(local_8[10] * n,local_8[9] * m,local_8[10],local_44,local_8[9]);
          piVar3 = local_44;
          piVar1 = (int *)FUN_0041df1c(local_14);
          piVar2 = (int *)FUN_0041df1c(local_18);
          FUN_00418f14(piVar2,local_34,piVar1,piVar3);
          FUN_0043a6ec((int)local_8,local_10,local_18);
          j = j + -1;
          n = n + 1;
          k = k + -1;
        } while (k != 0);
      }
      m = m + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_74;
  FUN_00402f9c(local_10);
  FUN_00402f9c(local_18);
  FUN_0043b8f8(local_8,extraout_EDX,extraout_ECX_03);
  return;
}


/* ==== 0043b76c FUN_0043b76c ==== */

void FUN_0043b76c(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST himl_val;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x43b783;
  pIVar1 = (IStream *)FUN_00415fb8((int *)&PTR_TStreamAdapter_virtual_000_0040f384,'\x01',param_2,0)
  ;
  puStack_14 = &LAB_0043b7e5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  himl_val = ImageList_Read(pstm);
  FUN_0043a57c(param_1,himl_val);
  iVar2 = FUN_0043a5b8((int)param_1);
  if (iVar2 == 0) {
    piVar3 = FUN_0040b694((int *)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab900);
    FUN_004036f4(piVar3);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_14 = (undefined1 *)0x43b7e4;
  FUN_00402f9c((int *)pIVar1);
  return;
}


/* ==== 0043b878 FUN_0043b878 ==== */

void FUN_0043b878(int param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST himl;
  BOOL BVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x43b88f;
  pIVar1 = (IStream *)FUN_00415fb8((int *)&PTR_TStreamAdapter_virtual_000_0040f384,'\x01',param_2,0)
  ;
  puStack_14 = &LAB_0043b8e9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  himl = (HIMAGELIST)FUN_0043a5b8(param_1);
  BVar2 = ImageList_Write(himl,pstm);
  if (BVar2 == 0) {
    piVar3 = FUN_0040b694((int *)&DAT_0040e734,'\x01',(undefined4 *)PTR_PTR_004ab790);
    FUN_004036f4(piVar3);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_14 = (undefined1 *)0x43b8e8;
  FUN_00402f9c((int *)pIVar1);
  return;
}


/* ==== 0043b8f4 FUN_0043b8f4 ==== */

void FUN_0043b8f4(int param_1)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}


/* ==== 0043b8f8 FUN_0043b8f8 ==== */

void FUN_0043b8f8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (0 < param_1[0x14]) {
    param_1[0x14] = param_1[0x14] + -1;
  }
  if ((char)param_1[0x13] != '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_00403178(param_1,param_2,param_3);
  }
  return;
}


/* ==== 0043b918 TChangeLink.Destroy ==== */

void TChangeLink_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1[1] != 0) {
    FUN_0043b2a0(piVar1[1],(int)piVar1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0043b94c TChangeLink.dynamic_ffff ==== */

void TChangeLink_dynamic_ffff(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4));
  }
  return;
}


