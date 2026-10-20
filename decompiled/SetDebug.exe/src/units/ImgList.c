/* SetDebug.exe — units/ImgList.pas: 43 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0042ff78 FUN_0042ff78 ==== */

int FUN_0042ff78(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004160cc(param_1);
  if (iVar1 == 0x1fffffff) {
    return -1;
  }
  if (iVar1 == 0x20000000) {
    iVar1 = -0x1000000;
  }
  return iVar1;
}


/* ==== 0042ff98 FUN_0042ff98 ==== */

int FUN_0042ff98(int param_1)

{
  if (param_1 == -0x1000000) {
    param_1 = 0x20000000;
  }
  else if (param_1 == -1) {
    return 0x1fffffff;
  }
  return param_1;
}


/* ==== 0042ffb8 TCustomImageList.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  param_1[10] = 0x10;
  param_1[9] = 0x10;
  (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00430004 TCustomImageList.Destroy ==== */

void TCustomImageList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  while (0 < (int)((undefined4 *)piVar1[0x10])[2]) {
    iVar2 = FUN_0040f10c((undefined4 *)piVar1[0x10]);
    FUN_00430bc0((int)piVar1,iVar2);
  }
  FUN_00402d14((int *)piVar1[0x11]);
  FUN_004302c8(piVar1);
  FUN_00402d14((int *)piVar1[0x10]);
  piVar1[0x10] = 0;
  if ((int *)piVar1[0x12] != (int *)0x0) {
    FUN_00402d14((int *)piVar1[0x12]);
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00430070 TCustomImageList.virtual_034 ==== */

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
  puStack_14 = &LAB_0043011d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
  param_1[0x10] = iVar1;
  if (((param_1[9] < 1) || (0x8000 < param_1[9])) ||
     (uVar3 = extraout_ECX, uVar4 = extraout_EDX, param_1[10] < 1)) {
    FUN_00405298((undefined4 *)PTR_PTR_00446b2c,(int *)&local_8);
    piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar2);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  param_1[0xb] = 4;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  FUN_00430b44(param_1,CONCAT31((int3)((uint)uVar4 >> 8),2),uVar3);
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  param_1[0xe] = 0x1fffffff;
  param_1[0xf] = 0x1fffffff;
  piVar2 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',extraout_ECX_01);
  param_1[0x11] = (int)piVar2;
  FUN_0043013c((int)param_1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00430124;
  puStack_14 = (undefined1 *)0x43011c;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00430128 FUN_00430128 ==== */

bool FUN_00430128(int param_1)

{
  return *(int *)(param_1 + 0x30) != 0;
}


/* ==== 00430130 FUN_00430130 ==== */

void FUN_00430130(int *param_1)

{
  if (param_1[0xc] == 0) {
    FUN_004302fc(param_1);
  }
  return;
}


/* ==== 0043013c FUN_0043013c ==== */

void FUN_0043013c(int param_1)

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
  FUN_0041c128(piVar4,h_val);
  iVar1 = FUN_0041b6f8(piVar4);
  TBrush_SetColor(*(int **)(iVar1 + 0x14),0);
  uVar2 = (**(code **)(*piVar4 + 0x20))();
  pRVar5 = &local_1c;
  uVar3 = (**(code **)(*piVar4 + 0x2c))();
  FUN_0040e5ac(0,0,uVar3,&pRVar5->left,uVar2);
  pRVar5 = &local_1c;
  piVar4 = (int *)FUN_0041b6f8(piVar4);
  FUN_00417100(piVar4,pRVar5);
  *in_FS_OFFSET = uVar6;
  ReleaseDC((HWND)0x0,local_c);
  return;
}


/* ==== 00430200 FUN_00430200 ==== */

void FUN_00430200(int param_1,HIMAGELIST himl_val)

{
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  local_c = *(int *)(param_1 + 0x24);
  ImageList_GetIconSize(himl_val,&local_8,&local_c);
  *(int *)(param_1 + 0x28) = local_8;
  *(int *)(param_1 + 0x24) = local_c;
  FUN_0043013c(param_1);
  return;
}


/* ==== 00430238 FUN_00430238 ==== */

void FUN_00430238(int *param_1,HIMAGELIST himl_val)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_004302c8(param_1);
  if (himl_val != (HIMAGELIST)0x0) {
    FUN_00430200((int)param_1,himl_val);
    param_1[0xc] = (int)himl_val;
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00430264 FUN_00430264 ==== */

int FUN_00430264(int *param_1)

{
  FUN_00430130(param_1);
  return param_1[0xc];
}


/* ==== 00430274 FUN_00430274 ==== */

void FUN_00430274(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  FUN_00430acc(param_1,param_2);
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
  }
  else {
    uVar1 = FUN_0041b75c((int)param_2);
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


/* ==== 004302c8 FUN_004302c8 ==== */

void FUN_004302c8(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  bVar1 = FUN_00430128((int)param_1);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if ((bVar1) && (*(char *)((int)param_1 + 0x36) == '\0')) {
    himl = (HIMAGELIST)FUN_00430264(param_1);
    ImageList_Destroy(himl);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  param_1[0xc] = 0;
  FUN_00402ef0(param_1,uVar3,uVar2);
  return;
}


/* ==== 004302fc FUN_004302fc ==== */

void FUN_004302fc(int *param_1)

{
  HIMAGELIST p_Var1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_0043038b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  p_Var1 = ImageList_Create(param_1[10],param_1[9],
                            *(uint *)(&DAT_00446750 + (uint)*(byte *)((int)param_1 + 0x35) * 4) |
                            0xfe,param_1[0xb],param_1[0xb]);
  param_1[0xc] = (int)p_Var1;
  if (p_Var1 == (HIMAGELIST)0x0) {
    FUN_00405298((undefined4 *)PTR_PTR_00446c8c,(int *)&local_8);
    piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar2);
  }
  if (param_1[0xe] != 0x1fffffff) {
    FUN_00430520(param_1,param_1[0xe]);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00430392;
  puStack_1c = (undefined1 *)0x43038a;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00430398 FUN_00430398 ==== */

void FUN_00430398(int *param_1,int *param_2,int *param_3)

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
  
  puStack_20 = (undefined1 *)0x4303b3;
  piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',param_3);
  puStack_24 = &LAB_00430447;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x4303d0;
  puStack_20 = &stack0xfffffffc;
  piVar2 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',extraout_ECX);
  puStack_30 = &LAB_0043042a;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_00430130(param_1);
  hbmMask = (HBITMAP)FUN_00430274((int)param_1,param_3,piVar2);
  hbmImage = (HBITMAP)FUN_00430274((int)param_1,param_2,piVar1);
  ImageList_Add((HIMAGELIST)param_1[0xc],hbmImage,hbmMask);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00430431;
  puStack_30 = (undefined1 *)0x430429;
  FUN_00402d14(piVar2);
  return;
}


/* ==== 00430464 FUN_00430464 ==== */

int FUN_00430464(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  int image_list_get_image_count;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_00430264(param_1);
    image_list_get_image_count = ImageList_GetImageCount(himl);
    return image_list_get_image_count;
  }
  return 0;
}


/* ==== 00430488 FUN_00430488 ==== */

void FUN_00430488(int *param_1,int i_val)

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
  puStack_18 = &LAB_00430507;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_00430464(param_1);
  if (iVar2 <= i_val) {
    FUN_00405298((undefined4 *)PTR_PTR_00446b38,(int *)&local_8);
    piVar3 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar3);
  }
  bVar1 = FUN_00430128((int)param_1);
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (bVar1) {
    himl = (HIMAGELIST)FUN_00430264(param_1);
    ImageList_Remove(himl,i_val);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  FUN_00402ef0(param_1,uVar5,uVar4);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043050e;
  puStack_18 = (undefined1 *)0x430506;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00430514 FUN_00430514 ==== */

void FUN_00430514(int *param_1)

{
  FUN_00430488(param_1,-1);
  return;
}


/* ==== 00430520 FUN_00430520 ==== */

void FUN_00430520(int *param_1,uint param_2)

{
  bool bVar1;
  COLORREF clrBk;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    clrBk = FUN_0042ff78(param_2);
    ImageList_SetBkColor((HIMAGELIST)param_1[0xc],clrBk);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  else {
    param_1[0xe] = param_2;
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
  }
  FUN_00402ef0(param_1,uVar3,uVar2);
  return;
}


/* ==== 00430558 FUN_00430558 ==== */

int FUN_00430558(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  COLORREF CVar2;
  int iVar3;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_00430264(param_1);
    CVar2 = ImageList_GetBkColor(himl);
    iVar3 = FUN_0042ff98(CVar2);
    return iVar3;
  }
  return param_1[0xe];
}


/* ==== 00430580 TCustomImageList.virtual_030 ==== */

void TCustomImageList_virtual_030
               (int *param_1,int param_2,int *param_3,char param_4,UINT style,int y_val,int x_val)

{
  bool bVar1;
  COLORREF CVar2;
  uint uVar3;
  COLORREF CVar4;
  HDC pHVar5;
  HIMAGELIST p_Var6;
  int *piVar7;
  int i_val;
  undefined4 extraout_ECX;
  int iVar8;
  int dx;
  int iVar9;
  int dy;
  RECT *lprc_val;
  UINT fStyle;
  RECT local_2c;
  undefined4 local_1c [4];
  HDC hdc_src;
  int local_8;
  
  local_8 = param_2;
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    if (param_4 == '\0') {
      if (param_1[0x12] == 0) {
        piVar7 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',
                                     extraout_ECX);
        param_1[0x12] = (int)piVar7;
        FUN_0041c378(piVar7,1);
        (**(code **)(*piVar7 + 0x40))(piVar7,param_1[10]);
        (**(code **)(*piVar7 + 0x34))(piVar7,param_1[9]);
      }
      i_val = FUN_0041b6f8((int *)param_1[0x12]);
      TBrush_SetColor(*(int **)(i_val + 0x14),0xffffff);
      FUN_0040e5ac(0,0,param_1[10],&local_2c.left,param_1[9]);
      lprc_val = &local_2c;
      piVar7 = (int *)FUN_0041b6f8((int *)param_1[0x12]);
      FUN_00417100(piVar7,lprc_val);
      fStyle = 0;
      CVar4 = 0;
      CVar2 = 0xff000000;
      dy = 0;
      dx = 0;
      iVar9 = 0;
      iVar8 = 0;
      piVar7 = (int *)FUN_0041b6f8((int *)param_1[0x12]);
      pHVar5 = (HDC)FUN_00417430(piVar7);
      i_val = local_8;
      p_Var6 = (HIMAGELIST)FUN_00430264(param_1);
      ImageList_DrawEx(p_Var6,i_val,pHVar5,iVar8,iVar9,dx,dy,CVar2,CVar4,fStyle);
      FUN_0040e5ac(x_val,y_val,x_val + param_1[10],local_1c,y_val + param_1[9]);
      piVar7 = (int *)FUN_0041b6f8((int *)param_1[0x12]);
      hdc_src = (HDC)FUN_00417430(piVar7);
      TBrush_SetColor((int *)param_3[5],0x80000014);
      pHVar5 = (HDC)FUN_00417430(param_3);
      SetTextColor(pHVar5,0xffffff);
      SetBkColor(pHVar5,0);
      BitBlt(pHVar5,x_val + 1,y_val + 1,param_1[10],param_1[9],hdc_src,0,0,0xe20746);
      TBrush_SetColor((int *)param_3[5],0x80000010);
      pHVar5 = (HDC)FUN_00417430(param_3);
      SetTextColor(pHVar5,0xffffff);
      SetBkColor(pHVar5,0);
      BitBlt(pHVar5,x_val,y_val,param_1[10],param_1[9],hdc_src,0,0,0xe20746);
    }
    else {
      CVar2 = FUN_0042ff78(param_1[0xf]);
      uVar3 = FUN_00430558(param_1);
      CVar4 = FUN_0042ff78(uVar3);
      iVar9 = 0;
      iVar8 = 0;
      pHVar5 = (HDC)FUN_00417430(param_3);
      i_val = local_8;
      p_Var6 = (HIMAGELIST)FUN_00430264(param_1);
      ImageList_DrawEx(p_Var6,i_val,pHVar5,x_val,y_val,iVar8,iVar9,CVar4,CVar2,style);
    }
  }
  return;
}


/* ==== 00430758 FUN_00430758 ==== */

void FUN_00430758(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))
              (param_1,param_5,param_2,
               CONCAT31((int3)((*(uint *)(&DAT_00446758 + (uint)*(byte *)(param_1 + 0xd) * 4) |
                               *(uint *)(&DAT_00446768 + (uint)*(byte *)((int)param_1 + 0x37) * 4))
                              >> 8),param_4),
               *(uint *)(&DAT_00446758 + (uint)*(byte *)(param_1 + 0xd) * 4) |
               *(uint *)(&DAT_00446768 + (uint)*(byte *)((int)param_1 + 0x37) * 4),param_6,param_3);
  }
  return;
}


/* ==== 004307a4 FUN_004307a4 ==== */

void FUN_004307a4(int *param_1,HIMAGELIST param_2)

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
  int *local_8;
  int x_val;
  int y_val;
  
  uStack_3c = 0x4307cd;
  himl_val = param_2;
  local_8 = param_1;
  FUN_0040e5ac(0,0,param_1[10],&local_24.left,param_1[9]);
  FUN_00431214((int)local_8);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x4307ef;
  local_10 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',extraout_ECX);
  puStack_44 = &LAB_0043090f;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x43080e;
  puStack_40 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
  puStack_4c = (undefined1 *)0x43081c;
  (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
  puStack_4c = (undefined1 *)0x430828;
  local_14 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',extraout_ECX_00
                                );
  puStack_50 = &LAB_004308f2;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  FUN_0041c378(local_14,1);
  (**(code **)(*local_14 + 0x34))(local_14,local_8[9]);
  (**(code **)(*local_14 + 0x40))(local_14,local_8[10]);
  i_val = ImageList_GetImageCount(himl_val);
  if (-1 < i_val + -1) {
    i = 0;
    do {
      piVar1 = (int *)FUN_0041b6f8(local_10);
      FUN_00417100(piVar1,&local_24);
      UVar3 = 0;
      y_val = 0;
      x_val = 0;
      pHVar2 = (HDC)FUN_00417430(piVar1);
      ImageList_Draw(himl_val,i,pHVar2,x_val,y_val,UVar3);
      piVar1 = (int *)FUN_0041b6f8(local_14);
      FUN_00417100(piVar1,&local_24);
      UVar3 = 0x10;
      y_val = 0;
      x_val = 0;
      pHVar2 = (HDC)FUN_00417430(piVar1);
      ImageList_Draw(himl_val,i,pHVar2,x_val,y_val,UVar3);
      FUN_00430398(local_8,local_10,local_14);
      i = i + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004308f9;
  puStack_50 = (undefined1 *)0x4308f1;
  FUN_00402d14(local_14);
  return;
}


/* ==== 0043093c FUN_0043093c ==== */

void FUN_0043093c(int *param_1,int *param_2)

{
  HIMAGELIST p_Var1;
  
  if (param_2 != (int *)0x0) {
    p_Var1 = (HIMAGELIST)FUN_00430264(param_2);
    FUN_004307a4(param_1,p_Var1);
  }
  return;
}


/* ==== 0043095c TCustomImageList.virtual_008 ==== */

void TCustomImageList_virtual_008(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HIMAGELIST p_Var3;
  COLORREF CVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int cx;
  int cy;
  
  if (param_2 == (int *)0x0) {
    FUN_004302c8(param_1);
    return;
  }
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TCustomImageList_virtual_000_0042fef4);
  if ((char)uVar2 == '\0') {
    TPersistent_virtual_008(param_1,param_2);
  }
  else {
    FUN_00430514(param_1);
    *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)((int)param_2 + 0x35);
    *(undefined1 *)((int)param_1 + 0x37) = *(undefined1 *)((int)param_2 + 0x37);
    FUN_00430b44(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)((int)param_2 + 0x36);
    p_Var3 = (HIMAGELIST)FUN_00430264(param_2);
    FUN_00430200((int)param_1,p_Var3);
    bVar1 = FUN_00430128((int)param_1);
    if (bVar1) {
      cy = param_1[9];
      cx = param_1[10];
      p_Var3 = (HIMAGELIST)FUN_00430264(param_1);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_00430130(param_1);
    }
    p_Var3 = (HIMAGELIST)FUN_00430264(param_2);
    CVar4 = ImageList_GetBkColor(p_Var3);
    uVar5 = FUN_0042ff98(CVar4);
    FUN_00430520(param_1,uVar5);
    param_1[0xf] = param_2[0xf];
    FUN_0043093c(param_1,param_2);
  }
  return;
}


/* ==== 00430a1c TCustomImageList.virtual_000 ==== */

void TCustomImageList_virtual_000(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  HIMAGELIST p_Var3;
  COLORREF CVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int cx;
  int cy;
  
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TCustomImageList_virtual_000_0042fef4);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)((int)param_2 + 0x35) = *(undefined1 *)((int)param_1 + 0x35);
    *(undefined1 *)((int)param_2 + 0x37) = *(undefined1 *)((int)param_1 + 0x37);
    FUN_00430b44(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xd]),extraout_ECX);
    *(undefined1 *)((int)param_2 + 0x36) = *(undefined1 *)((int)param_1 + 0x36);
    param_2[0xf] = param_1[0xf];
    FUN_00430514(param_2);
    p_Var3 = (HIMAGELIST)FUN_00430264(param_1);
    FUN_00430200((int)param_2,p_Var3);
    bVar1 = FUN_00430128((int)param_2);
    if (bVar1) {
      cy = param_2[9];
      cx = param_2[10];
      p_Var3 = (HIMAGELIST)FUN_00430264(param_2);
      ImageList_SetIconSize(p_Var3,cx,cy);
    }
    else {
      FUN_00430130(param_2);
    }
    p_Var3 = (HIMAGELIST)FUN_00430264(param_1);
    CVar4 = ImageList_GetBkColor(p_Var3);
    uVar5 = FUN_0042ff98(CVar4);
    FUN_00430520(param_2,uVar5);
    FUN_0043093c(param_2,param_1);
    return;
  }
  TPersistent_virtual_000(param_1,param_2);
  return;
}


/* ==== 00430acc FUN_00430acc ==== */

void FUN_00430acc(int param_1,int *param_2)

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
  puStack_18 = &LAB_00430b38;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (*(int *)(param_1 + 0x24) <= iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x2c))();
      if (*(int *)(param_1 + 0x28) <= iVar1) goto LAB_00430b22;
    }
    FUN_00405298((undefined4 *)PTR_PTR_00446b2c,(int *)&local_8);
    piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_8);
    FUN_0040346c(piVar2);
  }
LAB_00430b22:
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00430b3f;
  puStack_18 = (undefined1 *)0x430b37;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00430b44 FUN_00430b44 ==== */

void FUN_00430b44(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[0xd]) {
    *(char *)(param_1 + 0xd) = (char)param_2;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00430b60 TCustomImageList.virtual_038 ==== */

void TCustomImageList_virtual_038(undefined4 param_1,undefined4 *param_2)

{
  FUN_0040e594(0,0,param_2);
  return;
}


/* ==== 00430b70 TCustomImageList.dynamic_fff0 ==== */

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
        piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x40),j);
        FUN_00402ef0(piVar1,extraout_EDX,extraout_ECX);
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


/* ==== 00430bc0 FUN_00430bc0 ==== */

void FUN_00430bc0(int param_1,int param_2)

{
  int iVar1;
  int j;
  int i_val;
  
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (i_val = *(int *)(*(int *)(param_1 + 0x40) + 8), -1 < i_val + -1)) {
    j = 0;
    do {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x40),j);
      if (param_2 == iVar1) {
        *(undefined4 *)(param_2 + 4) = 0;
        FUN_0040ef14(*(int **)(param_1 + 0x40),j);
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00430c04 FUN_00430c04 ==== */

void FUN_00430c04(int param_1,int param_2)

{
  *(int *)(param_2 + 4) = param_1;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    FUN_0040eec8(*(int **)(param_1 + 0x40),param_2);
  }
  return;
}


/* ==== 00430c18 FUN_00430c18 ==== */

undefined4 FUN_00430c18(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00410af0(param_1);
  iVar2 = FUN_00410af0(param_2);
  if (iVar1 == iVar2) {
    uVar3 = FUN_00410af0(param_1);
    uVar4 = FUN_00407a5c((int *)param_1[1],(int *)param_2[1],uVar3);
    if ((char)uVar4 != '\0') {
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00430c58 FUN_00430c58 ==== */

undefined1 FUN_00430c58(int *param_1,int *param_2)

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
  
  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x430c70;
    iVar2 = FUN_00430464(param_1);
    puStack_20 = (undefined1 *)0x430c79;
    iVar3 = FUN_00430464(param_2);
    if (iVar2 == iVar3) {
      puStack_20 = (undefined1 *)0x430c8d;
      iVar2 = FUN_00430464(param_1);
      uVar6 = extraout_ECX;
      if (iVar2 == 0) {
        puStack_20 = (undefined1 *)0x430c98;
        iVar2 = FUN_00430464(param_2);
        uVar6 = extraout_ECX_00;
        if (iVar2 == 0) {
          return 1;
        }
      }
      puStack_20 = (undefined1 *)0x430cb1;
      piVar4 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_virtual_000_0040df58,'\x01',uVar6);
      puStack_24 = &LAB_00430d34;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x430ccc;
      puStack_20 = &stack0xfffffffc;
      FUN_00431198(param_1,(int)piVar4);
      puStack_2c = (undefined1 *)0x430cd8;
      piVar5 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_virtual_000_0040df58,'\x01',
                                   extraout_ECX_01);
      puStack_30 = &LAB_00430d17;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      FUN_00431198(param_2,(int)piVar5);
      FUN_00430c18(piVar4,piVar5);
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_00430d1e;
      puStack_30 = (undefined1 *)0x430d16;
      uVar1 = FUN_00402d14(piVar5);
      return uVar1;
    }
  }
  return 0;
}


/* ==== 00430d48 FUN_00430d48 ==== */

bool FUN_00430d48(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    iVar4 = FUN_00430464(*(int **)(in_stack_00000004 + -8));
    return 0 < iVar4;
  }
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  uVar3 = FUN_00402e8c(piVar1,(int)&PTR_TCustomImageList_virtual_000_0042fef4);
  if (((char)uVar3 != '\0') &&
     (cVar2 = FUN_00430c58(*(int **)(in_stack_00000004 + -8),piVar1), cVar2 != '\0')) {
    return false;
  }
  return true;
}


/* ==== 00430da4 TCustomImageList.virtual_004 ==== */

void TCustomImageList_virtual_004(int param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  
  TComponent_virtual_004(param_1,param_2);
  puVar3 = &LAB_00431110;
  pcVar2 = FUN_00431198;
  iVar4 = param_1;
  bVar1 = FUN_00430d48();
  (**(code **)(*param_2 + 8))(param_2,"Bitmap",bVar1,pcVar2,param_1,puVar3,iVar4);
  return;
}


/* ==== 00430dfc FUN_00430dfc ==== */

void FUN_00430dfc(int *param_1,int *param_2)

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
  
  puStack_54 = (undefined1 *)0x430e19;
  local_8 = param_1;
  FUN_00410b28(param_2,&local_1c,4);
  puStack_54 = (undefined1 *)0x430e28;
  FUN_00410b28(param_2,&j,4);
  puStack_54 = (undefined1 *)0x430e34;
  local_c = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',extraout_ECX);
  puStack_58 = &LAB_0043107d;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_60 = (undefined1 *)0x430e4c;
  puStack_54 = &stack0xfffffffc;
  k = FUN_00410ad4(param_2);
  puStack_60 = (undefined1 *)0x430e58;
  (**(code **)(*local_c + 0x50))(local_c,param_2);
  puStack_60 = (undefined1 *)0x430e64;
  FUN_00410ae4(param_2,local_1c + k);
  puStack_60 = (undefined1 *)0x430e70;
  local_14 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',extraout_ECX_00
                                );
  puStack_64 = &LAB_00431060;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_60 = &stack0xfffffffc;
  (**(code **)(*local_14 + 0x50))(local_14,param_2);
  local_10 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',extraout_ECX_01
                                );
  (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
  (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
  local_18 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',extraout_ECX_02
                                );
  FUN_0041c378(local_18,1);
  (**(code **)(*local_18 + 0x40))(local_18,local_8[10]);
  (**(code **)(*local_18 + 0x34))(local_18,local_8[9]);
  uStack_74 = 0x430f05;
  FUN_0040e5ac(0,0,local_8[10],local_34,local_8[9]);
  FUN_00431214((int)local_8);
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
          FUN_0040e5c8(local_8[10] * n,local_8[9] * m,local_8[10],local_44,local_8[9]);
          piVar3 = local_44;
          piVar1 = (int *)FUN_0041b6f8(local_c);
          piVar2 = (int *)FUN_0041b6f8(local_10);
          FUN_00416fcc(piVar2,local_34,piVar1,piVar3);
          FUN_0040e5c8(local_8[10] * n,local_8[9] * m,local_8[10],local_44,local_8[9]);
          piVar3 = local_44;
          piVar1 = (int *)FUN_0041b6f8(local_14);
          piVar2 = (int *)FUN_0041b6f8(local_18);
          FUN_00416fcc(piVar2,local_34,piVar1,piVar3);
          FUN_00430398(local_8,local_10,local_18);
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
  FUN_00402d14(local_10);
  FUN_00402d14(local_18);
  FUN_00431218(local_8,extraout_EDX,extraout_ECX_03);
  return;
}


/* ==== 0043108c FUN_0043108c ==== */

void FUN_0043108c(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST himl_val;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4310a3;
  pIVar1 = (IStream *)FUN_00414404((int *)&PTR_TStreamAdapter_virtual_000_0040e148,'\x01',param_2,0)
  ;
  puStack_14 = &LAB_00431105;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  himl_val = ImageList_Read(pstm);
  FUN_00430238(param_1,himl_val);
  iVar2 = FUN_00430264(param_1);
  if (iVar2 == 0) {
    piVar3 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446cb8);
    FUN_0040346c(piVar3);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_14 = (undefined1 *)0x431104;
  FUN_00402d14((int *)pIVar1);
  return;
}


/* ==== 00431198 FUN_00431198 ==== */

void FUN_00431198(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST himl;
  BOOL BVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4311af;
  pIVar1 = (IStream *)FUN_00414404((int *)&PTR_TStreamAdapter_virtual_000_0040e148,'\x01',param_2,0)
  ;
  puStack_14 = &LAB_00431209;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  himl = (HIMAGELIST)FUN_00430264(param_1);
  BVar2 = ImageList_Write(himl,pstm);
  if (BVar2 == 0) {
    piVar3 = FUN_0040a9f4((int *)&DAT_0040d674,'\x01',(undefined4 *)PTR_PTR_00446ba4);
    FUN_0040346c(piVar3);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_14 = (undefined1 *)0x431208;
  FUN_00402d14((int *)pIVar1);
  return;
}


/* ==== 00431214 FUN_00431214 ==== */

void FUN_00431214(int param_1)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}


/* ==== 00431218 FUN_00431218 ==== */

void FUN_00431218(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (0 < param_1[0x14]) {
    param_1[0x14] = param_1[0x14] + -1;
  }
  if ((char)param_1[0x13] != '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00431238 TChangeLink.Destroy ==== */

void TChangeLink_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[1] != 0) {
    FUN_00430bc0(piVar1[1],(int)piVar1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0043126c TChangeLink.dynamic_ffff ==== */

void TChangeLink_dynamic_ffff(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4));
  }
  return;
}


