/* Menu.exe — units/DaviButtons.pas: 92 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00474114 FUN_00474114 ==== */

void FUN_00474114(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_18 = &LAB_00474192;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar2 = param_1 & 0x7f;
  if ((&DAT_004ad1f8)[uVar2] == 0) {
    piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
    (&DAT_004ad1f8)[uVar2] = piVar1;
    FUN_00403e14((int *)&local_8,*(char **)(&DAT_004ab188 + uVar2 * 4));
    FUN_0041e384((&DAT_004ad1f8)[param_1 & 0xff],DAT_004ac4dc,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00474199;
  puStack_18 = (undefined1 *)0x474191;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00474310 FUN_00474310 ==== */

int * FUN_00474310(int *param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0043a26c(param_1,'\0',param_3,param_4);
  iVar1 = FUN_00402f6c((int *)&DAT_0040eb28,'\x01',extraout_ECX_00);
  param_1[0x1e] = iVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00474360 TGlyphList.Destroy ==== */

void TGlyphList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x1e]);
  TCustomImageList_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00474390 FUN_00474390 ==== */

uint FUN_00474390(int param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  uVar1 = FUN_004108fc(*(int *)(param_1 + 0x78));
  if (*(int *)(*(int *)(param_1 + 0x78) + 4) <= (int)uVar1) {
    uVar1 = FUN_0043a6ec(param_1,(int *)0x0,(int *)0x0);
    iVar2 = uVar1 + 1;
    if (SCARRY4(uVar1,1)) {
      thunk_FUN_00402808(uVar1);
      iVar2 = extraout_EDX;
    }
    FUN_00410814(*(int *)(param_1 + 0x78),iVar2);
  }
  FUN_004108b8(*(int *)(param_1 + 0x78),uVar1,'\x01');
  return uVar1;
}


/* ==== 004743d8 FUN_004743d8 ==== */

uint FUN_004743d8(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint i_val_2;
  uint uVar3;
  
  i_val_2 = FUN_00474390((int)param_1);
  uVar3 = FUN_0043a940(param_1,i_val_2,param_2,param_3);
  piVar1 = param_1 + 0x1f;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402808(uVar3);
  }
  return i_val_2;
}


/* ==== 0047440c FUN_0047440c ==== */

void FUN_0047440c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_004108e4(*(int *)(param_1 + 0x78),param_2);
  if ((char)uVar3 != '\0') {
    piVar1 = (int *)(param_1 + 0x7c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402808(uVar3);
    }
    FUN_004108b8(*(int *)(param_1 + 0x78),param_2,'\0');
  }
  return;
}


/* ==== 0047443c FUN_0047443c ==== */

int * FUN_0047443c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[1] = iVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00474480 TGlyphCache.Destroy ==== */

void TGlyphCache_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[1]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 004744b0 FUN_004744b0 ==== */

int * FUN_004744b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int i_val;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 4) + 8);
  i_val = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 4));
  }
  if (-1 < i_val) {
    do {
      piVar2 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 4),i_val);
      if ((param_2 == piVar2[10]) && (param_3 == piVar2[9])) {
        return piVar2;
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  piVar2 = FUN_00474310((int *)&PTR_TCustomImageList_virtual_000_004741ec,'\x01',param_2,param_3);
  FUN_00410104(*(int **)(param_1 + 4),(int)piVar2);
  return piVar2;
}


/* ==== 00474518 FUN_00474518 ==== */

void FUN_00474518(int param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (param_2[0x1f] == 0)) {
    FUN_00410448(*(int **)(param_1 + 4),(int)param_2);
    FUN_00402f9c(param_2);
  }
  return;
}


/* ==== 00474538 FUN_00474538 ==== */

undefined4 FUN_00474538(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),*(int *)(*(int *)(param_1 + 4) + 8) == 0)
  ;
}


/* ==== 00474544 FUN_00474544 ==== */

int * FUN_00474544(int *param_1,char param_2,undefined4 param_3)

{
  byte i_val;
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
  FUN_00402f6c(param_1,'\0',param_3);
  piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX_00);
  param_1[1] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_0047467c;
  param_1[7] = 0x8080;
  *(undefined1 *)(param_1 + 8) = 1;
  i_val = 0;
  do {
    param_1[i_val + 3] = -1;
    i_val = i_val + 1;
  } while (i_val != 4);
  if (DAT_004ab458 == (int *)0x0) {
    DAT_004ab458 = FUN_0047443c((int *)&DAT_004742a8,'\x01',extraout_ECX_01);
  }
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 004745d8 TButtonGlyph.Destroy ==== */

void TButtonGlyph_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[1]);
  FUN_00474634((int)piVar1);
  if (DAT_004ab458 != (int *)0x0) {
    uVar2 = FUN_00474538((int)DAT_004ab458);
    if ((char)uVar2 != '\0') {
      FUN_00402f9c(DAT_004ab458);
      DAT_004ab458 = (int *)0x0;
    }
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00474634 FUN_00474634 ==== */

void FUN_00474634(int param_1)

{
  uint uVar1;
  uint i_val;
  
  i_val = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0xc + (i_val & 0x7f) * 4);
    if (uVar1 != 0xffffffff) {
      FUN_0047440c(*(int *)(param_1 + 8),uVar1);
    }
    *(undefined4 *)(param_1 + 0xc + (i_val & 0x7f) * 4) = 0xffffffff;
    i_val = i_val + 1;
  } while ((char)i_val != '\x04');
  FUN_00474518(DAT_004ab458,*(int **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* ==== 0047467c FUN_0047467c ==== */

void FUN_0047467c(int param_1,int *param_2)

{
  uint uVar1;
  
  if (param_2 == *(int **)(param_1 + 4)) {
    uVar1 = FUN_0041e000(*(int **)(param_1 + 4));
    *(uint *)(param_1 + 0x1c) = uVar1;
    FUN_00474634(param_1);
    if (*(short *)(param_1 + 0x2a) != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
    }
  }
  return;
}


/* ==== 004746ac FUN_004746ac ==== */

int FUN_004746ac(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00474634(param_1);
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2);
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (0 < iVar1) {
      uVar2 = FUN_0041e000(param_2);
      *(uint *)(param_1 + 0x1c) = uVar2;
      iVar3 = (**(code **)(*param_2 + 0x2c))();
      iVar4 = (**(code **)(*param_2 + 0x20))();
      iVar1 = iVar3 / iVar4;
      if (iVar3 % iVar4 == 0) {
        iVar3 = (**(code **)(*param_2 + 0x2c))();
        iVar1 = (**(code **)(*param_2 + 0x20))();
        iVar3 = iVar3 / iVar1;
        if (4 < iVar3) {
          iVar3 = 1;
        }
        iVar1 = FUN_00474724(param_1,(char)iVar3);
      }
    }
  }
  return iVar1;
}


/* ==== 00474724 FUN_00474724 ==== */

void FUN_00474724(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x20)) && (param_2 != '\0')) {
    FUN_00474634(param_1);
    *(char *)(param_1 + 0x20) = param_2;
    FUN_0047467c(param_1,*(int **)(param_1 + 4));
  }
  return;
}


/* ==== 0047474c FUN_0047474c ==== */

int FUN_0047474c(int param_1,byte param_2)

{
  ulonglong uVar1;
  int cx_val;
  int cy_val;
  int *piVar2;
  int iVar3;
  HPALETTE pHVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  HDC pHVar8;
  HDC pHVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int iVar11;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  byte bVar12;
  undefined4 *in_FS_OFFSET;
  int iVar13;
  int x1;
  int iVar14;
  int y1;
  DWORD DVar15;
  COLORREF CVar16;
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int local_3c [4];
  RECT local_2c;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  byte local_9;
  int local_8;
  
  local_9 = param_2;
  if ((param_2 == 2) && (*(byte *)(param_1 + 0x20) < 3)) {
    local_9 = 0;
  }
  cx_val = *(int *)(param_1 + 0xc + (uint)local_9 * 4);
  if (cx_val != -1) {
    return cx_val;
  }
  puStack_4c = (undefined1 *)0x47478e;
  local_8 = param_1;
  cx_val = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  puStack_4c = (undefined1 *)0x47479b;
  cy_val = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  if (cx_val == 0 && cy_val == 0) {
    return -1;
  }
  puStack_4c = (undefined1 *)0x4747ae;
  cx_val = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
  cx_val = cx_val / (int)(uint)*(byte *)(local_8 + 0x20);
  puStack_4c = (undefined1 *)0x4747c7;
  cy_val = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  uVar10 = extraout_ECX;
  if (*(int *)(local_8 + 8) == 0) {
    if (DAT_004ab458 == (int *)0x0) {
      puStack_4c = (undefined1 *)0x4747e7;
      DAT_004ab458 = FUN_0047443c((int *)&DAT_004742a8,'\x01',extraout_ECX);
    }
    puStack_4c = (undefined1 *)0x4747fa;
    piVar2 = FUN_004744b0((int)DAT_004ab458,cx_val,cy_val);
    *(int **)(local_8 + 8) = piVar2;
    uVar10 = extraout_ECX_00;
  }
  puStack_4c = (undefined1 *)0x47480c;
  local_10 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',uVar10);
  puStack_50 = &LAB_00474c87;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x40))(local_10,cx_val);
  (**(code **)(*local_10 + 0x34))(local_10,cy_val);
  uStack_60 = 0x474841;
  FUN_0040f7e8(0,0,cx_val,&local_2c.left,cy_val);
  iVar3 = FUN_0041df1c(local_10);
  TBrush_SetColor(*(int **)(iVar3 + 0x14),0x8000000f);
  pHVar4 = (HPALETTE)(**(code **)(**(int **)(local_8 + 4) + 0x24))();
  pHVar4 = FUN_0041d740(pHVar4);
  (**(code **)(*local_10 + 0x38))(local_10,pHVar4);
  bVar12 = local_9;
  if (*(char *)(local_8 + 0x20) <= (char)local_9) {
    bVar12 = 0;
  }
  piVar2 = local_3c;
  iVar3 = bVar12 + 1;
  piVar6 = piVar2;
  iVar14 = cy_val;
  if (SCARRY4((uint)bVar12,1)) {
    uStack_60 = 0x474890;
    piVar2 = (int *)thunk_FUN_00402808((uint)piVar2);
    iVar3 = extraout_ECX_01;
  }
  iVar11 = (int)((longlong)iVar3 * (longlong)cx_val);
  if ((longlong)iVar11 != (longlong)iVar3 * (longlong)cx_val) {
    uStack_60 = 0x47489a;
    thunk_FUN_00402808((uint)piVar2);
    iVar11 = extraout_ECX_02;
  }
  uVar1 = (longlong)(int)(uint)bVar12 * (longlong)cx_val;
  if ((longlong)(int)(uint)uVar1 != uVar1) {
    uStack_60 = 0x4748a7;
    uVar5 = thunk_FUN_00402808((uint)uVar1);
    uVar1 = (ulonglong)uVar5;
    iVar11 = extraout_ECX_03;
  }
  uStack_60 = 0x4748ae;
  FUN_0040f7e8((int)uVar1,0,iVar11,piVar6,iVar14);
  if (local_9 != 0) {
    if (local_9 == 1) {
      local_18 = (int *)0x0;
      local_14 = (int *)0x0;
      uStack_60 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_60;
      local_18 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',
                                     extraout_ECX_04);
      local_14 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',
                                     extraout_ECX_05);
      (**(code **)(*local_14 + 8))(local_14,*(undefined4 *)(local_8 + 4));
      (**(code **)(*local_14 + 0x68))(local_14,1);
      if (*(byte *)(local_8 + 0x20) < 2) {
        (**(code **)(*local_18 + 8))(local_18,*(undefined4 *)(local_8 + 4));
        (**(code **)(*local_18 + 0x68))(local_18,1);
        iVar3 = FUN_0041df1c(local_18);
        TBrush_SetColor(*(int **)(iVar3 + 0x14),0);
        (**(code **)(*local_18 + 0x40))(local_18,cx_val);
        uVar10 = FUN_0041dfd0((int)local_18);
        if ((char)uVar10 != '\0') {
          iVar3 = FUN_0041df1c(local_18);
          TFont_SetColor(*(int **)(iVar3 + 0xc),0xffffff,extraout_ECX_06);
          FUN_0041ecdc(local_18,0);
          iVar3 = FUN_0041df1c(local_18);
          TBrush_SetColor(*(int **)(iVar3 + 0x14),0xffffff);
        }
        FUN_0041ecdc(local_18,1);
        piVar2 = (int *)FUN_0041df1c(local_10);
        TBrush_SetColor((int *)piVar2[5],0x8000000f);
        FUN_0041907c(piVar2,&local_2c);
        TBrush_SetColor((int *)piVar2[5],0x80000014);
        CVar16 = 0;
        pHVar8 = (HDC)FUN_004194d8(piVar2);
        SetTextColor(pHVar8,CVar16);
        CVar16 = 0xffffff;
        pHVar8 = (HDC)FUN_004194d8(piVar2);
        SetBkColor(pHVar8,CVar16);
        DVar15 = 0xe20746;
        y1 = 0;
        x1 = 0;
        piVar6 = (int *)FUN_0041df1c(local_18);
        pHVar8 = (HDC)FUN_004194d8(piVar6);
        iVar13 = 1;
        iVar11 = 1;
        iVar3 = cx_val;
        iVar14 = cy_val;
        pHVar9 = (HDC)FUN_004194d8(piVar2);
        BitBlt(pHVar9,iVar11,iVar13,iVar3,iVar14,pHVar8,x1,y1,DVar15);
        TBrush_SetColor((int *)piVar2[5],0x80000010);
        CVar16 = 0;
        pHVar8 = (HDC)FUN_004194d8(piVar2);
        SetTextColor(pHVar8,CVar16);
        CVar16 = 0xffffff;
        pHVar8 = (HDC)FUN_004194d8(piVar2);
        SetBkColor(pHVar8,CVar16);
        DVar15 = 0xe20746;
        iVar13 = 0;
        iVar11 = 0;
        piVar6 = (int *)FUN_0041df1c(local_18);
        pHVar8 = (HDC)FUN_004194d8(piVar6);
        iVar14 = 0;
        iVar3 = 0;
        pHVar9 = (HDC)FUN_004194d8(piVar2);
        BitBlt(pHVar9,iVar3,iVar14,cx_val,cy_val,pHVar8,iVar11,iVar13,DVar15);
      }
      else {
        local_1c = (int *)FUN_0041df1c(local_10);
        piVar2 = local_3c;
        piVar6 = (int *)FUN_0041df1c(local_14);
        FUN_00418f14(local_1c,&local_2c.left,piVar6,piVar2);
        FUN_0041ecdc(local_18,1);
        (**(code **)(*local_18 + 0x40))(local_18,cx_val);
        (**(code **)(*local_18 + 0x34))(local_18,cy_val);
        iVar3 = FUN_0041df1c(local_14);
        TBrush_SetColor(*(int **)(iVar3 + 0x14),0xffffff);
        piVar2 = local_3c;
        piVar6 = (int *)FUN_0041df1c(local_14);
        piVar7 = (int *)FUN_0041df1c(local_18);
        FUN_00418f14(piVar7,&local_2c.left,piVar6,piVar2);
        TBrush_SetColor((int *)local_1c[5],0x80000014);
        pHVar8 = (HDC)FUN_004194d8(local_1c);
        SetTextColor(pHVar8,0);
        SetBkColor(pHVar8,0xffffff);
        DVar15 = 0xe20746;
        iVar14 = 0;
        iVar3 = 0;
        piVar2 = (int *)FUN_0041df1c(local_18);
        pHVar9 = (HDC)FUN_004194d8(piVar2);
        BitBlt(pHVar8,0,0,cx_val,cy_val,pHVar9,iVar3,iVar14,DVar15);
        iVar3 = FUN_0041df1c(local_14);
        TBrush_SetColor(*(int **)(iVar3 + 0x14),0x808080);
        piVar2 = local_3c;
        piVar6 = (int *)FUN_0041df1c(local_14);
        piVar7 = (int *)FUN_0041df1c(local_18);
        FUN_00418f14(piVar7,&local_2c.left,piVar6,piVar2);
        TBrush_SetColor((int *)local_1c[5],0x80000010);
        pHVar8 = (HDC)FUN_004194d8(local_1c);
        SetTextColor(pHVar8,0);
        SetBkColor(pHVar8,0xffffff);
        DVar15 = 0xe20746;
        iVar14 = 0;
        iVar3 = 0;
        piVar2 = (int *)FUN_0041df1c(local_18);
        pHVar9 = (HDC)FUN_004194d8(piVar2);
        BitBlt(pHVar8,0,0,cx_val,cy_val,pHVar9,iVar3,iVar14,DVar15);
      }
      *in_FS_OFFSET = uStack_60;
      FUN_00402f9c(local_14);
      cx_val = FUN_00402f9c(local_18);
      return cx_val;
    }
    if (1 < (byte)(local_9 - 2)) goto LAB_00474c71;
  }
  piVar2 = local_3c;
  piVar6 = (int *)FUN_0041df1c(*(int **)(local_8 + 4));
  uStack_60 = 0x4748d8;
  piVar7 = (int *)FUN_0041df1c(local_10);
  FUN_00418f14(piVar7,&local_2c.left,piVar6,piVar2);
  if (*(char *)(*(int *)(local_8 + 4) + 0x30) == '\x01') {
    uVar5 = FUN_004743d8(*(int **)(local_8 + 8),local_10,*(int *)(local_8 + 0x1c));
    *(uint *)(local_8 + 0xc + (uint)local_9 * 4) = uVar5;
  }
  else {
    uVar5 = FUN_004743d8(*(int **)(local_8 + 8),local_10,0x20000000);
    *(uint *)(local_8 + 0xc + (uint)local_9 * 4) = uVar5;
  }
LAB_00474c71:
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &DAT_00474c8e;
  puStack_50 = (undefined1 *)0x474c86;
  cx_val = FUN_00402f9c(local_10);
  return cx_val;
}


/* ==== 00474cb0 FUN_00474cb0 ==== */

void FUN_00474cb0(int param_1,int *param_2,int *param_3,char param_4,byte param_5)

{
  int i_val;
  HDC pHVar1;
  HIMAGELIST p_Var2;
  COLORREF CVar3;
  COLORREF CVar4;
  UINT UVar5;
  int dx_val;
  int dy_val;
  int x_val;
  int y_val;
  
  if (*(int *)(param_1 + 4) != 0) {
    i_val = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
    if (i_val != 0) {
      i_val = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
      if (i_val != 0) {
        i_val = FUN_0047474c(param_1,param_5);
        if ((param_4 == '\0') && (param_5 != 3)) {
          UVar5 = 0;
          CVar4 = 0x1fffffff;
          CVar3 = FUN_00417d54(0x8000000f);
          dy_val = 0;
          dx_val = 0;
          y_val = param_3[1];
          x_val = *param_3;
          pHVar1 = (HDC)FUN_004194d8(param_2);
          p_Var2 = (HIMAGELIST)FUN_0043a5b8(*(int *)(param_1 + 8));
          ImageList_DrawEx(p_Var2,i_val,pHVar1,x_val,y_val,dx_val,dy_val,CVar3,CVar4,UVar5);
        }
        else {
          UVar5 = 1;
          CVar4 = 0x1fffffff;
          CVar3 = 0x1fffffff;
          dy_val = 0;
          dx_val = 0;
          y_val = param_3[1];
          x_val = *param_3;
          pHVar1 = (HDC)FUN_004194d8(param_2);
          p_Var2 = (HIMAGELIST)FUN_0043a5b8(*(int *)(param_1 + 8));
          ImageList_DrawEx(p_Var2,i_val,pHVar1,x_val,y_val,dx_val,dy_val,CVar3,CVar4,UVar5);
        }
      }
    }
  }
  return;
}


/* ==== 00474d6c FUN_00474d6c ==== */

void FUN_00474d6c(undefined4 param_1,int *param_2,undefined *param_3,char param_4,LONG *param_5)

{
  LPCSTR lpchText;
  HDC pHVar1;
  LPCSTR pCVar2;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  tagRECT *lprc_val;
  UINT UVar3;
  tagRECT local_14;
  
  lprc_val = &local_14;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    lprc_val->left = *param_5;
    param_5 = param_5 + 1;
    lprc_val = (tagRECT *)&lprc_val->top;
  }
  TBrush_SetStyle((int *)param_2[5],'\x01');
  if (param_4 == '\x01') {
    OffsetRect(&local_14,1,1);
    TFont_SetColor((int *)param_2[3],-0x7fffffec,extraout_ECX);
    UVar3 = 0;
    lprc_val = &local_14;
    i_val = FUN_00403edc((int)param_3);
    lpchText = FUN_004040a0(param_3);
    pCVar2 = lpchText;
    pHVar1 = (HDC)FUN_004194d8(param_2);
    DrawTextA(pHVar1,pCVar2,i_val,lprc_val,UVar3);
    OffsetRect(&local_14,-1,-1);
    TFont_SetColor((int *)param_2[3],-0x7ffffff0,extraout_ECX_00);
    UVar3 = 0;
    lprc_val = &local_14;
    i_val = FUN_00403edc((int)param_3);
    pHVar1 = (HDC)FUN_004194d8(param_2);
    DrawTextA(pHVar1,lpchText,i_val,lprc_val,UVar3);
  }
  else {
    UVar3 = 0x25;
    lprc_val = &local_14;
    i_val = FUN_00403edc((int)param_3);
    pCVar2 = FUN_004040a0(param_3);
    pHVar1 = (HDC)FUN_004194d8(param_2);
    DrawTextA(pHVar1,pCVar2,i_val,lprc_val,UVar3);
  }
  return;
}


/* ==== 00474e3c FUN_00474e3c ==== */

void FUN_00474e3c(uint param_1,int *param_2,int *param_3,LPRECT lprc_val_2,uint *param_5,
                 char param_6,uint param_7,uint param_8,byte param_9,undefined *param_10,
                 uint *param_11)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCSTR lpchText;
  HDC hdc;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *piVar4;
  int i_val;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  uint uVar5;
  uint extraout_EDX_04;
  uint uVar6;
  int extraout_EDX_05;
  uint extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int dy_val;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int dx;
  int extraout_EDX_19;
  LONG *pLVar7;
  LPRECT ptVar8;
  byte bVar9;
  UINT format;
  LONG local_44 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  bVar9 = 0;
  i_val = param_3[3] - param_3[1];
  local_c = param_2;
  local_8 = param_1;
  if (SBORROW4(param_3[3],param_3[1])) {
    thunk_FUN_00402808(param_1);
    i_val = extraout_EDX;
  }
  uVar2 = param_3[2] - *param_3;
  if (SBORROW4(param_3[2],*param_3)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    i_val = extraout_EDX_00;
  }
  FUN_0040f7d0(uVar2,i_val,&local_1c);
  if (*(int *)(local_8 + 4) == 0) {
    FUN_0040f7d0(0,0,&local_24);
  }
  else {
    uVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
    i_val = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
    FUN_0040f7d0(i_val / (int)(uint)*(byte *)(local_8 + 0x20),uVar3,&local_24);
  }
  if ((param_6 == '\0') || (i_val = FUN_00403edc((int)param_10), i_val < 1)) {
    FUN_0040f7e8(0,0,0,local_44,0);
    pLVar7 = local_44;
    ptVar8 = lprc_val_2;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      ptVar8->left = *pLVar7;
      pLVar7 = pLVar7 + (uint)bVar9 * -2 + 1;
      ptVar8 = (LPRECT)((int)ptVar8 + (uint)bVar9 * -8 + 4);
    }
    FUN_0040f7d0(0,0,&local_2c);
  }
  else {
    uVar3 = 0;
    pLVar7 = local_44;
    i_val = param_3[2] - *param_3;
    if (SBORROW4(param_3[2],*param_3)) {
      thunk_FUN_00402808((uint)pLVar7);
      i_val = extraout_ECX;
    }
    FUN_0040f7e8(0,0,i_val,pLVar7,uVar3);
    pLVar7 = local_44;
    ptVar8 = lprc_val_2;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      ptVar8->left = *pLVar7;
      pLVar7 = pLVar7 + (uint)bVar9 * -2 + 1;
      ptVar8 = (LPRECT)((int)ptVar8 + (uint)bVar9 * -8 + 4);
    }
    format = 0x400;
    ptVar8 = lprc_val_2;
    i_val = FUN_00403edc((int)param_10);
    lpchText = FUN_004040a0(param_10);
    hdc = (HDC)FUN_004194d8(local_c);
    uVar2 = DrawTextA(hdc,lpchText,i_val,ptVar8,format);
    i_val = lprc_val_2->bottom - lprc_val_2->top;
    if (SBORROW4(lprc_val_2->bottom,lprc_val_2->top)) {
      thunk_FUN_00402808(uVar2);
      i_val = extraout_EDX_01;
    }
    uVar2 = lprc_val_2->right - lprc_val_2->left;
    if (SBORROW4(lprc_val_2->right,lprc_val_2->left)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      i_val = extraout_EDX_02;
    }
    FUN_0040f7d0(uVar2,i_val,&local_2c);
  }
  if (param_9 < 2) {
    i_val = local_18 - local_20;
    uVar2 = local_18;
    if (SBORROW4(local_18,local_20)) {
      uVar2 = thunk_FUN_00402808(local_18);
      i_val = extraout_EDX_03;
    }
    uVar5 = i_val + 1;
    if (SCARRY4(i_val,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      uVar5 = extraout_EDX_04;
    }
    uVar6 = (int)uVar5 >> 1;
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + ((uVar5 & 1) != 0);
    }
    param_5[1] = uVar6;
    uVar5 = uVar2 - local_28;
    if (SBORROW4(uVar2,local_28)) {
      uVar5 = thunk_FUN_00402808(uVar5);
    }
    uVar2 = uVar5 + 1;
    if (SCARRY4(uVar5,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar5 = (int)uVar2 >> 1;
    local_10 = uVar5;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + ((uVar2 & 1) != 0);
      local_10 = uVar5;
    }
  }
  else {
    i_val = local_1c - local_24;
    uVar2 = local_1c;
    if (SBORROW4(local_1c,local_24)) {
      uVar2 = thunk_FUN_00402808(local_1c);
      i_val = extraout_EDX_05;
    }
    uVar5 = i_val + 1;
    if (SCARRY4(i_val,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      uVar5 = extraout_EDX_06;
    }
    uVar6 = (int)uVar5 >> 1;
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + ((uVar5 & 1) != 0);
    }
    *param_5 = uVar6;
    uVar5 = uVar2 - local_2c;
    if (SBORROW4(uVar2,local_2c)) {
      uVar5 = thunk_FUN_00402808(uVar5);
    }
    uVar2 = uVar5 + 1;
    if (SCARRY4(uVar5,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar5 = (int)uVar2 >> 1;
    local_14 = uVar5;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + ((uVar2 & 1) != 0);
      local_14 = uVar5;
    }
  }
  if ((local_2c == 0) || (local_24 == 0)) {
    uVar5 = 0;
    param_7 = 0;
  }
  if (param_8 == 0xffffffff) {
    if (param_7 == 0xffffffff) {
      piVar4 = &local_34;
      i_val = local_20 + local_28;
      if (SCARRY4(local_20,local_28)) {
        thunk_FUN_00402808(uVar5);
        piVar4 = extraout_ECX_00;
        i_val = extraout_EDX_07;
      }
      uVar2 = local_24 + local_2c;
      if (SCARRY4(local_24,local_2c)) {
        uVar2 = thunk_FUN_00402808(uVar2);
        piVar4 = extraout_ECX_01;
        i_val = extraout_EDX_08;
      }
      FUN_0040f7d0(uVar2,i_val,piVar4);
      if (param_9 < 2) {
        uVar2 = local_1c - local_34;
        if (SBORROW4(local_1c,local_34)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
      }
      else {
        uVar2 = local_18 - local_30;
        if (SBORROW4(local_18,local_30)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
      }
      param_8 = (int)uVar2 / 3;
      param_7 = param_8;
    }
    else {
      piVar4 = &local_34;
      i_val = local_20 + param_7;
      if (SCARRY4(local_20,param_7)) {
        uVar5 = thunk_FUN_00402808(uVar5);
        piVar4 = extraout_ECX_02;
        i_val = extraout_EDX_09;
      }
      dy_val = i_val + local_28;
      if (SCARRY4(i_val,local_28)) {
        thunk_FUN_00402808(uVar5);
        piVar4 = extraout_ECX_03;
        dy_val = extraout_EDX_10;
      }
      uVar2 = local_24 + param_7;
      if (SCARRY4(local_24,param_7)) {
        uVar2 = thunk_FUN_00402808(uVar2);
        piVar4 = extraout_ECX_04;
        dy_val = extraout_EDX_11;
      }
      uVar5 = uVar2 + local_2c;
      if (SCARRY4(uVar2,local_2c)) {
        uVar5 = thunk_FUN_00402808(uVar5);
        piVar4 = extraout_ECX_05;
        dy_val = extraout_EDX_12;
      }
      FUN_0040f7d0(uVar5,dy_val,piVar4);
      if (param_9 < 2) {
        uVar2 = local_1c - local_34;
        if (SBORROW4(local_1c,local_34)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
        uVar5 = uVar2 + 1;
        if (SCARRY4(uVar2,1)) {
          uVar5 = thunk_FUN_00402808(uVar5);
        }
        param_8 = (int)uVar5 >> 1;
        if ((int)param_8 < 0) {
          param_8 = param_8 + ((uVar5 & 1) != 0);
        }
      }
      else {
        uVar2 = local_18 - local_30;
        if (SBORROW4(local_18,local_30)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
        uVar5 = uVar2 + 1;
        if (SCARRY4(uVar2,1)) {
          uVar5 = thunk_FUN_00402808(uVar5);
        }
        param_8 = (int)uVar5 >> 1;
        if ((int)param_8 < 0) {
          param_8 = param_8 + ((uVar5 & 1) != 0);
        }
      }
    }
  }
  else if (param_7 == 0xffffffff) {
    uVar2 = param_8 + local_20;
    if (SCARRY4(param_8,local_20)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    i_val = local_18 - uVar2;
    if (SBORROW4(local_18,uVar2)) {
      thunk_FUN_00402808(uVar2);
      i_val = extraout_EDX_13;
    }
    uVar2 = param_8 + local_24;
    if (SCARRY4(param_8,local_24)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      i_val = extraout_EDX_14;
    }
    uVar5 = local_1c - uVar2;
    if (SBORROW4(local_1c,uVar2)) {
      uVar5 = thunk_FUN_00402808(uVar5);
      i_val = extraout_EDX_15;
    }
    FUN_0040f7d0(uVar5,i_val,&local_34);
    if (param_9 < 2) {
      uVar2 = local_34 - local_2c;
      if (SBORROW4(local_34,local_2c)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      param_7 = (int)uVar2 >> 1;
      if ((int)param_7 < 0) {
        param_7 = param_7 + ((uVar2 & 1) != 0);
      }
    }
    else {
      uVar2 = local_30 - local_28;
      if (SBORROW4(local_30,local_28)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      param_7 = (int)uVar2 >> 1;
      if ((int)param_7 < 0) {
        param_7 = param_7 + ((uVar2 & 1) != 0);
      }
    }
  }
  if (param_9 == 0) {
    *param_5 = param_8;
    uVar2 = param_8 + local_24;
    if (SCARRY4(param_8,local_24)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar5 = uVar2 + param_7;
    uVar6 = local_10;
    if (SCARRY4(uVar2,param_7)) {
      uVar5 = thunk_FUN_00402808(uVar2 + param_7);
      uVar6 = local_10;
    }
  }
  else if (param_9 == 1) {
    uVar2 = local_1c - param_8;
    if (SBORROW4(local_1c,param_8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar5 = uVar2 - local_24;
    if (SBORROW4(uVar2,local_24)) {
      uVar5 = thunk_FUN_00402808(uVar5);
    }
    *param_5 = uVar5;
    uVar2 = uVar5 - param_7;
    if (SBORROW4(uVar5,param_7)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar5 = uVar2 - local_2c;
    uVar6 = local_10;
    if (SBORROW4(uVar2,local_2c)) {
      uVar5 = thunk_FUN_00402808(uVar2 - local_2c);
      uVar6 = local_10;
    }
  }
  else if (param_9 == 2) {
    param_5[1] = param_8;
    uVar2 = param_8 + local_20;
    if (SCARRY4(param_8,local_20)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar5 = local_14;
    uVar6 = uVar2 + param_7;
    if (SCARRY4(uVar2,param_7)) {
      uVar6 = thunk_FUN_00402808(uVar2 + param_7);
      uVar5 = local_14;
    }
  }
  else {
    uVar5 = local_14;
    uVar6 = local_10;
    if (param_9 == 3) {
      uVar2 = local_18 - param_8;
      if (SBORROW4(local_18,param_8)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      uVar5 = uVar2 - local_20;
      if (SBORROW4(uVar2,local_20)) {
        uVar5 = thunk_FUN_00402808(uVar5);
      }
      param_5[1] = uVar5;
      uVar2 = uVar5 - param_7;
      if (SBORROW4(uVar5,param_7)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      uVar5 = local_14;
      uVar6 = uVar2 - local_28;
      if (SBORROW4(uVar2,local_28)) {
        uVar6 = thunk_FUN_00402808(uVar2 - local_28);
        uVar5 = local_14;
      }
    }
  }
  local_10 = uVar6;
  local_14 = uVar5;
  uVar2 = *param_3 + *param_11;
  if (SCARRY4(*param_3,*param_11)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  uVar5 = *param_5;
  *param_5 = *param_5 + uVar2;
  if (SCARRY4(uVar5,uVar2)) {
    thunk_FUN_00402808(uVar2);
  }
  uVar2 = param_3[1] + param_11[1];
  if (SCARRY4(param_3[1],param_11[1])) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  puVar1 = param_5 + 1;
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + uVar2;
  if (SCARRY4(uVar5,uVar2)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  i_val = param_3[1] + local_10;
  if (SCARRY4(param_3[1],local_10)) {
    thunk_FUN_00402808(uVar2);
    i_val = extraout_EDX_16;
  }
  uVar2 = *param_11;
  dy_val = i_val + uVar2;
  if (SCARRY4(i_val,uVar2)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    dy_val = extraout_EDX_17;
  }
  i_val = *param_3 + local_14;
  if (SCARRY4(*param_3,local_14)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    i_val = extraout_EDX_18;
  }
  dx = i_val + uVar2;
  if (SCARRY4(i_val,uVar2)) {
    thunk_FUN_00402808(uVar2);
    dx = extraout_EDX_19;
  }
  OffsetRect(lprc_val_2,dx,dy_val);
  return;
}


/* ==== 004752a4 FUN_004752a4 ==== */

void FUN_004752a4(uint param_1,int *param_2,int *param_3,LPRECT lprc_val_2,char param_5,char param_6
                 ,byte param_7,uint param_8,uint param_9,byte param_10,undefined *param_11,
                 uint *param_12)

{
  uint local_10 [2];
  int *local_8;
  
  local_8 = param_3;
  FUN_00474e3c(param_1,param_2,param_3,lprc_val_2,local_10,param_5,param_8,param_9,param_10,param_11
               ,param_12);
  FUN_00474cb0(param_1,param_2,(int *)local_10,param_6,param_7);
  if (param_5 != '\0') {
    FUN_00474d6c(param_1,param_2,param_11,param_7,&lprc_val_2->left);
  }
  return;
}


/* ==== 00475318 TDaviSpeedButton.virtual_02c ==== */

int * TDaviSpeedButton_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TGraphicControl_virtual_02c(param_1,'\0',param_3);
  uVar6 = 0x19;
  (**(code **)(*param_1 + 0x7c))(param_1,0,0,0x19,0x19);
  param_1[0x10] = 0xc2;
  piVar1 = FUN_00474544((int *)&DAT_00474300,'\x01',extraout_ECX_00);
  param_1[0x4d] = (int)piVar1;
  iVar2 = TDaviColors_virtual_00c((int *)&PTR_TPersistent_virtual_000_00472a1c,'\x01',(int)param_1);
  param_1[0x4b] = iVar2;
  iVar2 = param_1[0x4d];
  *(int **)(iVar2 + 0x2c) = param_1;
  *(undefined1 **)(iVar2 + 0x28) = &LAB_00475c0c;
  uVar3 = TGroupBox_SetParentFont((int)param_1,'\x01');
  param_1[0x52] = 4;
  param_1[0x50] = -1;
  *(undefined1 *)((int)param_1 + 0x13d) = 0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  bVar5 = SCARRY4(DAT_004ab460,1);
  DAT_004ab460 = DAT_004ab460 + 1;
  if (bVar5) {
    thunk_FUN_00402808(uVar3);
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = uVar6;
  }
  return param_1;
}


/* ==== 004753e8 TDaviSpeedButton.Destroy ==== */

void TDaviSpeedButton_Destroy(int *param_1,char param_2)

{
  uint uVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4753f3;
  local_8 = FUN_004032fc(param_1,param_2);
  puStack_14 = &LAB_00475472;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  uVar1 = FUN_00402f9c((int *)local_8[0x4d]);
  bVar2 = SBORROW4(DAT_004ab460,1);
  DAT_004ab460 = DAT_004ab460 + -1;
  if (bVar2) {
    thunk_FUN_00402808(uVar1);
  }
  FUN_00402f9c((int *)local_8[0x4b]);
  local_8[0x4b] = 0;
  if (DAT_004ab460 == 0) {
    FUN_00402f9c(DAT_004ab45c);
    DAT_004ab45c = (int *)0x0;
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00475479;
  puStack_14 = (undefined1 *)0x475471;
  TGraphicControl_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0047548c FUN_0047548c ==== */

void FUN_0047548c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  uint i_val;
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint x_val;
  RECT *pRVar6;
  int nIndex;
  RECT local_14;
  
  DAT_004ab45c = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
  (**(code **)(*DAT_004ab45c + 0x40))(DAT_004ab45c,8);
  (**(code **)(*DAT_004ab45c + 0x34))(DAT_004ab45c,8);
  for (piVar2 = *(int **)(*(int *)(param_4 + -4) + 0x24); piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[9]) {
    nIndex = -0x14;
    hWnd = (HWND)FUN_004349e0(piVar2);
    i_val = GetWindowLongA(hWnd,nIndex);
    if ((i_val & 0x20) != 0x20) break;
  }
  if (piVar2 == (int *)0x0) {
    uVar1 = 0x8000000f;
  }
  else {
    uVar1 = TBrush_GetColor(piVar2[0x4c]);
  }
  piVar2 = (int *)FUN_0041df1c(DAT_004ab45c);
  TBrush_SetStyle((int *)piVar2[5],'\0');
  TBrush_SetColor((int *)piVar2[5],uVar1);
  uVar1 = (**(code **)(*DAT_004ab45c + 0x20))();
  pRVar6 = &local_14;
  uVar3 = (**(code **)(*DAT_004ab45c + 0x2c))();
  FUN_0040f7e8(0,0,uVar3,&pRVar6->left,uVar1);
  FUN_0041907c(piVar2,&local_14);
  i_val = 0;
  do {
    x_val = 0;
    do {
      uVar4 = i_val & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      uVar5 = x_val & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 == uVar5) {
        FUN_00419490(piVar2,x_val,i_val,0x80000014);
      }
      x_val = x_val + 1;
    } while (x_val != 8);
    i_val = i_val + 1;
  } while (i_val != 8);
  return;
}


/* ==== 00475590 TDaviSpeedButton.virtual_084 ==== */

void TDaviSpeedButton_virtual_084(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined3 uVar4;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  uint *puVar7;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined *local_48;
  tagRECT local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  RECT local_20;
  uint local_10 [2];
  int *local_8;
  
  puStack_50 = &stack0xfffffffc;
  local_48 = (undefined *)0x0;
  puStack_54 = &LAB_00475817;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  iVar1 = param_1[0x4b];
  local_34 = *(undefined4 *)(iVar1 + 8);
  local_30 = *(undefined4 *)(iVar1 + 0x10);
  local_2c = *(undefined4 *)(iVar1 + 0xc);
  local_28 = *(undefined4 *)(iVar1 + 0x14);
  local_24 = *(undefined4 *)(iVar1 + 0x18);
  local_8 = param_1;
  cVar2 = (**(code **)(*param_1 + 0x4c))();
  if (cVar2 == '\0') {
    *(undefined1 *)((int)local_8 + 0x161) = 1;
    *(undefined1 *)((int)local_8 + 0x132) = 0;
  }
  else if (*(char *)((int)local_8 + 0x161) == '\x01') {
    if ((*(char *)((int)local_8 + 0x131) == '\0') || (local_8[0x4e] == 0)) {
      *(undefined1 *)((int)local_8 + 0x161) = 0;
    }
    else {
      *(undefined1 *)((int)local_8 + 0x161) = 3;
    }
  }
  TCanvas_SetFont(local_8[0x48]);
  FUN_0040f7e8(0,0,local_8[0xe],&local_20.left,local_8[0xf]);
  uVar4 = (undefined3)((uint)local_8 >> 8);
  if (*(char *)((int)local_8 + 0x133) == '\0') {
    if ((byte)(*(char *)((int)local_8 + 0x161) - 2U) < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT31(uVar4,4);
    }
    FUN_00465adc((int *)local_8[0x48],&local_20.left,(int)&local_34,uVar3);
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
  }
  else {
    if (((byte)(*(char *)((int)local_8 + 0x161) - 2U) < 2) ||
       (((*(char *)((int)local_8 + 0x145) != '\0' && (*(char *)((int)local_8 + 0x161) != '\x01')) ||
        ((*(byte *)(local_8 + 8) & 0x10) != 0)))) {
      if ((byte)(*(char *)((int)local_8 + 0x161) - 2U) < 2) {
        uVar3 = CONCAT31(uVar4,6);
      }
      else {
        uVar3 = CONCAT31(uVar4,5);
      }
      FUN_00465adc((int *)local_8[0x48],&local_20.left,(int)&local_34,uVar3);
    }
    else if ((char)local_8[0x53] == '\0') {
      TBrush_SetColor(*(int **)(local_8[0x48] + 0x14),*(undefined4 *)(local_8[0x4b] + 8));
      FUN_0041907c((int *)local_8[0x48],&local_20);
    }
    InflateRect(&local_20,-1,-1);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  if ((byte)(*(char *)((int)local_8 + 0x161) - 2U) < 2) {
    if ((*(char *)((int)local_8 + 0x161) == '\x03') &&
       ((*(char *)((int)local_8 + 0x133) == '\0' || (*(char *)((int)local_8 + 0x145) == '\0')))) {
      if (DAT_004ab45c == 0) {
        FUN_0047548c(local_8,uVar6,uVar5,(int)&stack0xfffffffc);
      }
      FUN_004189b8(*(int **)(local_8[0x48] + 0x14),DAT_004ab45c);
      FUN_0041907c((int *)local_8[0x48],&local_20);
    }
    local_10[0] = 1;
    local_10[1] = 1;
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
  }
  puVar7 = local_10;
  TGroupBox_GetCaption((int)local_8,(int *)&local_48);
  FUN_004752a4(local_8[0x4d],(int *)local_8[0x48],&local_20.left,&local_44,(char)local_8[0x58],
               '\x01',*(byte *)((int)local_8 + 0x161),local_8[0x52],local_8[0x50],
               *(byte *)((int)local_8 + 0x13d),local_48,puVar7);
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_0047581e;
  puStack_54 = (undefined1 *)0x475816;
  FUN_00403c5c((int *)&local_48);
  return;
}


/* ==== 00475824 FUN_00475824 ==== */

void FUN_00475824(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)TDaviSpeedButton_GetGlyph(*(int *)(param_4 + -4));
  (**(code **)(*piVar1 + 0x40))(piVar1,param_1[10]);
  (**(code **)(*piVar1 + 0x34))(piVar1,param_1[9]);
  piVar1 = (int *)TDaviSpeedButton_GetGlyph(*(int *)(param_4 + -4));
  FUN_0043a8d4(param_1,param_2,piVar1);
  piVar1 = (int *)TDaviSpeedButton_GetGlyph(*(int *)(param_4 + -4));
  FUN_0047467c(*(int *)(*(int *)(param_4 + -4) + 0x134),piVar1);
  return;
}


/* ==== 00475888 TDaviSpeedButton.dynamic_fff0 ==== */

void TDaviSpeedButton_dynamic_fff0(int *param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  TControl_dynamic_fff0(param_1,param_2,param_3);
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if (((((char)uVar1 != '\0') && (iVar2 = param_2[0x13], iVar2 != 0)) &&
      (*(int *)(iVar2 + 0x2c) != 0)) && (-1 < param_2[0x19])) {
    iVar2 = FUN_0043a91c(*(int *)(iVar2 + 0x2c));
    if (param_2[0x19] < iVar2) {
      FUN_00475824(*(int **)(param_2[0x13] + 0x2c),param_2[0x19],extraout_ECX,(int)&stack0xfffffffc)
      ;
    }
  }
  return;
}


/* ==== 004758e8 FUN_004758e8 ==== */

void FUN_004758e8(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  tagPOINT tStack_10;
  
  if (*(char *)((int)param_1 + 0x133) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      GetCursorPos(&tStack_10);
      piVar2 = FUN_0042d198(&tStack_10,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
      *(bool *)((int)param_1 + 0x145) = param_1 != piVar2;
      if (param_1 != piVar2) {
        FUN_0042f720((int)param_1,0xb014,0,0);
      }
      else {
        FUN_0042f720((int)param_1,0xb013,0,0);
      }
    }
  }
  return;
}


/* ==== 0047594c TDaviSpeedButton.virtual_00c ==== */

void TDaviSpeedButton_virtual_00c(int *param_1)

{
  char cVar1;
  
  TControl_virtual_00c(param_1);
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_0047474c(param_1[0x4d],cVar1 == '\0');
  return;
}


/* ==== 00475978 TDaviSpeedButton.dynamic_ffda ==== */

void TDaviSpeedButton_dynamic_ffda
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  char cVar1;
  
  TControl_dynamic_ffda((int)param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x131) == '\0') {
        *(undefined1 *)((int)param_1 + 0x161) = 2;
        (**(code **)(*param_1 + 0x74))();
      }
      *(undefined1 *)((int)param_1 + 0x132) = 1;
    }
  }
  return;
}


/* ==== 004759d0 TDaviSpeedButton.virtual_088 ==== */

void TDaviSpeedButton_virtual_088(int param_1)

{
  if (*(short *)(param_1 + 0x152) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined4 *)(param_1 + 0x154),param_1);
  }
  return;
}


/* ==== 004759f0 TDaviSpeedButton.virtual_08c ==== */

void TDaviSpeedButton_virtual_08c(int param_1)

{
  if (*(short *)(param_1 + 0x15a) != 0) {
    (**(code **)(param_1 + 0x158))(*(undefined4 *)(param_1 + 0x15c),param_1);
  }
  return;
}


/* ==== 00475a10 TDaviSpeedButton.dynamic_ffd9 ==== */

void TDaviSpeedButton_dynamic_ffd9(int *param_1,undefined1 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 local_6;
  
  TControl_dynamic_ffd9((int)param_1,param_2,param_3,param_4);
  if (*(char *)((int)param_1 + 0x132) != '\0') {
    if (*(char *)((int)param_1 + 0x131) == '\0') {
      local_6 = '\0';
    }
    else {
      local_6 = '\x03';
    }
    if (-1 < param_3) {
      iVar1 = TForm_GetClientWidth(param_1);
      if ((param_3 < iVar1) && (-1 < param_4)) {
        iVar1 = TForm_GetClientHeight(param_1);
        if (param_4 <= iVar1) {
          if (*(char *)((int)param_1 + 0x131) == '\0') {
            local_6 = '\x02';
          }
          else {
            local_6 = '\x03';
          }
        }
      }
    }
    if (local_6 != *(char *)((int)param_1 + 0x161)) {
      *(char *)((int)param_1 + 0x161) = local_6;
      (**(code **)(*param_1 + 0x74))();
    }
  }
  return;
}


/* ==== 00475aa0 TDaviSpeedButton.dynamic_ffd8 ==== */

void TDaviSpeedButton_dynamic_ffd8
               (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 uVar4;
  
  TControl_dynamic_ffd8((int)param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((int)param_1 + 0x132) != '\0') {
    *(undefined1 *)((int)param_1 + 0x132) = 0;
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((((param_5 < 0) ||
         (iVar2 = TForm_GetClientWidth(param_1), uVar3 = extraout_ECX_00, uVar4 = extraout_EDX_00,
         iVar2 <= param_5)) || (param_4 < 0)) ||
       (iVar2 = TForm_GetClientHeight(param_1), uVar3 = extraout_ECX_01, uVar4 = extraout_EDX_01,
       iVar2 < param_4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (param_1[0x4e] == 0) {
      *(undefined1 *)((int)param_1 + 0x161) = 0;
      *(undefined1 *)((int)param_1 + 0x145) = 0;
      if ((bVar1) && (1 < (byte)(*(char *)((int)param_1 + 0x161) - 2U))) {
        (**(code **)(*param_1 + 0x74))();
        uVar3 = extraout_ECX_02;
        uVar4 = extraout_EDX_02;
      }
    }
    else if (bVar1) {
      TDaviSpeedButton_SetDown(param_1,*(byte *)((int)param_1 + 0x131) ^ 1);
      uVar3 = extraout_ECX_03;
      uVar4 = extraout_EDX_03;
      if (*(char *)((int)param_1 + 0x131) != '\0') {
        (**(code **)(*param_1 + 0x78))();
        uVar3 = extraout_ECX_04;
        uVar4 = extraout_EDX_04;
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x131) != '\0') {
        *(undefined1 *)((int)param_1 + 0x161) = 3;
      }
      (**(code **)(*param_1 + 0x78))();
      uVar3 = extraout_ECX_05;
      uVar4 = extraout_EDX_05;
    }
    if (bVar1) {
      FUN_00403178(param_1,uVar4,uVar3);
    }
    FUN_004758e8(param_1);
    return;
  }
  return;
}


/* ==== 00475b8c TDaviSpeedButton.dynamic_ffec ==== */

void TDaviSpeedButton_dynamic_ffec(int param_1)

{
  TControl_dynamic_ffec(param_1);
  return;
}


/* ==== 00475b94 TDaviSpeedButton.dynamic_ffdc ==== */

void TDaviSpeedButton_dynamic_ffdc(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)TDaviSpeedButton_GetGlyph(param_1);
  (**(code **)(*piVar1 + 0x24))();
  return;
}


/* ==== 00475ba8 TDaviSpeedButton.GetGlyph ==== */

undefined4 TDaviSpeedButton_GetGlyph(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x134) + 4);
}


/* ==== 00475bb4 TDaviSpeedButton.SetGlyph ==== */

void TDaviSpeedButton_SetGlyph(int *param_1,int *param_2)

{
  FUN_004746ac(param_1[0x4d],param_2);
  *(undefined1 *)(param_1 + 0x51) = 1;
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00475bd4 TDaviSpeedButton.GetNumGlyphs ==== */

undefined4 TDaviSpeedButton_GetNumGlyphs(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x134) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x134) + 0x20));
}


/* ==== 00475be0 TDaviSpeedButton.SetNumGlyphs ==== */

/* WARNING: Removing unreachable block (ram,0x00475be7) */

void TDaviSpeedButton_SetNumGlyphs(int *param_1,byte param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  if (param_2 != *(byte *)(param_1[0x4d] + 0x20)) {
    FUN_00474724(param_1[0x4d],param_2);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00475c14 TDaviSpeedButton.SetShowCaption ==== */

void TDaviSpeedButton_SetShowCaption(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x58]) {
    *(char *)(param_1 + 0x58) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00475c28 FUN_00475c28 ==== */

bool FUN_00475c28(int param_1)

{
  char cVar1;
  
  cVar1 = TDaviSpeedButton_GetKind(param_1);
  return cVar1 == '\0';
}


/* ==== 00475c3c TDaviSpeedButton.SetKind ==== */

void TDaviSpeedButton_SetKind(int *param_1,uint param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00475cfe;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar4 = (char)param_2;
  if (cVar4 == (char)param_1[0x4f]) goto LAB_00475ce8;
  puVar1 = &stack0xfffffffc;
  if (cVar4 != '\0') {
    uVar3 = param_2;
    puVar1 = &stack0xfffffffc;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
LAB_00475c7c:
      puStack_18 = puVar1;
      if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_00475c82;
    }
    else {
      TGroupBox_GetCaption((int)param_1,&local_8);
      param_3 = extraout_ECX;
      uVar3 = extraout_EDX;
      puVar1 = puStack_18;
      if (local_8 != 0) goto LAB_00475c7c;
LAB_00475c82:
      TGroupBox_SetCaption((int)param_1,(uint *)0x0);
      param_3 = extraout_ECX_00;
      uVar3 = extraout_EDX_00;
      if ((*(undefined4 **)(&DAT_004ab2f0 + (param_2 & 0xff) * 4) != (undefined4 *)0x0) &&
         (param_1[0x1c] == 0)) {
        FUN_00405808(*(undefined4 **)(&DAT_004ab2f0 + (param_2 & 0xff) * 4),param_1 + 0x1c);
        TGroupBox_SetShowHint((int)param_1,'\x01');
        param_3 = extraout_ECX_01;
        uVar3 = extraout_EDX_01;
      }
    }
    piVar2 = (int *)FUN_00474114(param_2,uVar3,param_3);
    FUN_004746ac(param_1[0x4d],piVar2);
    TDaviSpeedButton_SetNumGlyphs(param_1,2);
    *(undefined1 *)(param_1 + 0x51) = 0;
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  *(char *)(param_1 + 0x4f) = cVar4;
  (**(code **)(*param_1 + 0x74))();
LAB_00475ce8:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00475d05;
  puStack_1c = (undefined1 *)0x475cfd;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 00475d0c TDaviSpeedButton.GetKind ==== */

undefined1 TDaviSpeedButton_GetKind(int param_1)

{
  if ((*(char *)(param_1 + 0x13c) != '\0') && (*(char *)(param_1 + 0x144) != '\0')) {
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  return *(undefined1 *)(param_1 + 0x13c);
}


/* ==== 00475d2c FUN_00475d2c ==== */

void FUN_00475d2c(int param_1)

{
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = *(int *)(param_1 + 0x138);
  if ((local_c != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    local_10 = 0xb018;
    local_4 = 0;
    local_8 = param_1;
    FUN_004317dc(*(int *)(param_1 + 0x24),(int)&local_10);
  }
  return;
}


/* ==== 00475d64 TDaviSpeedButton.SetDown ==== */

void TDaviSpeedButton_SetDown(int *param_1,char param_2)

{
  if (param_1[0x4e] == 0) {
    param_2 = '\0';
  }
  if ((param_2 != *(char *)((int)param_1 + 0x131)) &&
     ((*(char *)((int)param_1 + 0x131) == '\0' || ((char)param_1[0x4a] != '\0')))) {
    *(char *)((int)param_1 + 0x131) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)((int)param_1 + 0x161) = 0;
      (**(code **)(*param_1 + 0x78))();
    }
    else {
      if (*(char *)((int)param_1 + 0x161) == '\0') {
        (**(code **)(*param_1 + 0x74))();
      }
      *(undefined1 *)((int)param_1 + 0x161) = 3;
    }
    if (param_2 != '\0') {
      FUN_00475d2c((int)param_1);
    }
  }
  return;
}


/* ==== 00475dd0 TDaviSpeedButton.SetFlat ==== */

void TDaviSpeedButton_SetFlat(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x133)) {
    *(char *)((int)param_1 + 0x133) = param_2;
    if (param_2 == '\0') {
      param_1[0x10] = param_1[0x10] | 0x40;
    }
    else {
      param_1[0x10] = param_1[0x10] & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00475e0c TDaviSpeedButton.SetGroupIndex ==== */

void TDaviSpeedButton_SetGroupIndex(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x138)) {
    *(int *)(param_1 + 0x138) = param_2;
    FUN_00475d2c(param_1);
  }
  return;
}


/* ==== 00475e20 TDaviSpeedButton.SetLayout ==== */

DWORD __stdcall TDaviSpeedButton_SetLayout(HDC hdc,DWORD l)

{
  int *in_EAX;
  char in_DL;
  
  if (in_DL != *(char *)((int)in_EAX + 0x13d)) {
    *(char *)((int)in_EAX + 0x13d) = in_DL;
    in_EAX = (int *)(**(code **)(*in_EAX + 0x74))();
  }
  return (DWORD)in_EAX;
}


/* ==== 00475e34 TDaviSpeedButton.SetMargin ==== */

void TDaviSpeedButton_SetMargin(int *param_1,int param_2)

{
  if ((param_2 != param_1[0x50]) && (-2 < param_2)) {
    param_1[0x50] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00475e50 TDaviSpeedButton.SetSpacing ==== */

void TDaviSpeedButton_SetSpacing(int *param_1,int param_2)

{
  if (param_2 != param_1[0x52]) {
    param_1[0x52] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00475e64 TDaviSpeedButton.SetAllowAllUp ==== */

void TDaviSpeedButton_SetAllowAllUp(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x128)) {
    *(char *)(param_1 + 0x128) = param_2;
    FUN_00475d2c(param_1);
  }
  return;
}


/* ==== 00475e78 TDaviSpeedButton.SetDaviColors ==== */

void TDaviSpeedButton_SetDaviColors(int *param_1)

{
  (**(code **)(*(int *)param_1[0x4b] + 8))();
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00475e90 TDaviSpeedButton.WMLButtonDblClk ==== */

void TDaviSpeedButton_WMLButtonDblClk(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TControl_WMLButtonDblClk(param_1,param_2);
  if (*(char *)((int)param_1 + 0x131) != '\0') {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00475eb4 TDaviSpeedButton.CMEnabledChanged ==== */

void TDaviSpeedButton_CMEnabledChanged(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_0047474c(param_1[0x4d],(&DAT_004ab464)[uVar1 & 0x7f]);
  FUN_004758e8(param_1);
  (**(code **)(*param_1 + 0x78))();
  return;
}


/* ==== 00475ee4 TDaviSpeedButton.CMButtonPressed ==== */

void TDaviSpeedButton_CMButtonPressed(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_2 + 4) == param_1[0x4e]) &&
     (piVar1 = *(int **)(param_2 + 8), param_1 != piVar1)) {
    if ((*(char *)((int)piVar1 + 0x131) != '\0') && (*(char *)((int)param_1 + 0x131) != '\0')) {
      *(undefined1 *)((int)param_1 + 0x131) = 0;
      *(undefined1 *)((int)param_1 + 0x161) = 0;
      (**(code **)(*param_1 + 0x74))();
    }
    *(char *)(param_1 + 0x4a) = (char)piVar1[0x4a];
  }
  return;
}


/* ==== 00475f30 TDaviSpeedButton.CMDialogChar ==== */

void TDaviSpeedButton_CMDialogChar(int *param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00475fa2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TGroupBox_GetCaption((int)param_1,&local_8);
  cVar1 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      FUN_00403178(param_1,extraout_EDX,extraout_ECX);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_00475f8c;
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
LAB_00475f8c:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00475fa9;
  puStack_1c = (undefined1 *)0x475fa1;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 00475fb0 TDaviSpeedButton.CMDialogKey ==== */

void TDaviSpeedButton_CMDialogKey(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((((*(short *)(param_2 + 4) == 0xd) && ((char)param_1[0x4c] != '\0')) ||
      ((*(short *)(param_2 + 4) == 0x1b && (*(char *)((int)param_1 + 0x129) != '\0')))) &&
     (((bVar1 = FUN_0044476c(*(uint *)(param_2 + 8)), bVar1 == 0 &&
       (cVar2 = FUN_004761b4(param_1), cVar2 != '\0')) && (DAT_004ab184 != '\0')))) {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00476024 TDaviSpeedButton.CMFontChanged ==== */

void TDaviSpeedButton_CMFontChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0047602c TDaviSpeedButton.CMTextChanged ==== */

void TDaviSpeedButton_CMTextChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00476034 TDaviSpeedButton.CMSysColorChange ==== */

void TDaviSpeedButton_CMSysColorChange(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x134);
  FUN_00474634(iVar1);
  FUN_0047474c(iVar1,*(byte *)(param_1 + 0x161));
  return;
}


/* ==== 00476058 TDaviSpeedButton.CMMouseEnter ==== */

void TDaviSpeedButton_CMMouseEnter(int *param_1)

{
  char cVar1;
  
  TControl_CMMouseEnter((int)param_1);
  (**(code **)(*param_1 + 0x88))();
  if ((*(char *)((int)param_1 + 0x133) != '\0') && (*(char *)((int)param_1 + 0x145) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      *(undefined1 *)((int)param_1 + 0x145) = 1;
      (**(code **)(*param_1 + 0x74))();
    }
  }
  return;
}


/* ==== 0047609c TDaviSpeedButton.CMMouseLeave ==== */

void TDaviSpeedButton_CMMouseLeave(int *param_1)

{
  char cVar1;
  HWND hWnd;
  uint window_long;
  int *piVar2;
  int nIndex;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int aiStack_20 [2];
  int aiStack_18 [2];
  int iStack_10;
  undefined4 uStack_c;
  
  TControl_CMMouseLeave((int)param_1);
  (**(code **)(*param_1 + 0x8c))();
  if ((*(char *)((int)param_1 + 0x133) != '\0') && (*(char *)((int)param_1 + 0x145) != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if ((cVar1 != '\0') && (*(char *)((int)param_1 + 0x132) == '\0')) {
      *(undefined1 *)((int)param_1 + 0x145) = 0;
      (**(code **)(*param_1 + 0x74))();
      for (piVar2 = (int *)param_1[9]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
        nIndex = -0x14;
        hWnd = (HWND)FUN_004349e0(piVar2);
        window_long = GetWindowLongA(hWnd,nIndex);
        if ((window_long & 0x20) != 0x20) break;
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*param_1 + 0x40))(param_1,aiStack_20);
        FUN_0042e2ac(param_1,aiStack_20,&iStack_30);
        FUN_0042e2ac(param_1,aiStack_18,&iStack_28);
        FUN_0042e2d8(piVar2,&iStack_30,&iStack_10);
        iStack_30 = iStack_10;
        uStack_2c = uStack_c;
        FUN_0042e2d8(piVar2,&iStack_28,&iStack_10);
        iStack_28 = iStack_10;
        uStack_24 = uStack_c;
        FUN_0040f7e8(iStack_30,uStack_2c,iStack_10,aiStack_20,uStack_c);
        FUN_00465c38(piVar2,aiStack_20,'\x01');
      }
    }
  }
  return;
}


/* ==== 004761b4 FUN_004761b4 ==== */

undefined1 FUN_004761b4(int *param_1)

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


/* ==== 004761f4 TDaviButton.virtual_02c ==== */

int * TDaviButton_virtual_02c(int *param_1,char param_2,int *param_3)

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
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TButton_virtual_02c(param_1,'\0',param_3);
  piVar2 = FUN_00474544((int *)&DAT_00474300,'\x01',extraout_ECX_00);
  param_1[0x81] = (int)piVar2;
  iVar1 = param_1[0x81];
  *(int **)(iVar1 + 0x2c) = param_1;
  *(undefined1 **)(iVar1 + 0x28) = &LAB_004766f8;
  piVar2 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00416dc0,'\x01',extraout_ECX_01);
  param_1[0x80] = (int)piVar2;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((int)param_1 + 0x209) = 0;
  TFont_SetColor((int *)param_1[0x16],-0x7fffffee,extraout_ECX_02);
  param_1[0x85] = 4;
  param_1[0x83] = 4;
  TControl_SetWidth(param_1,0x68);
  TControl_SetHeight(param_1,0x18);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004762ac TDaviButton.virtual_098 ==== */

void TDaviButton_virtual_098(int *param_1)

{
  TButton_virtual_098(param_1);
  TFont_SetSize((int *)param_1[0x16],8);
  return;
}


/* ==== 004762c8 TDaviButton.Destroy ==== */

void TDaviButton_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  FUN_00402f9c((int *)piVar1[0x81]);
  FUN_00402f9c((int *)piVar1[0x80]);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00476304 TDaviButton.virtual_08c ==== */

void TDaviButton_virtual_08c(int *data)

{
  char cVar1;
  
  cVar1 = (**(code **)(*data + 0x4c))();
  TWinControl_virtual_08c(data);
  FUN_0047474c(data[0x81],cVar1 == '\0');
  return;
}


/* ==== 00476330 TDaviButton.virtual_090 ==== */

void TDaviButton_virtual_090(int *param_1,int *param_2)

{
  TButton_virtual_090(param_1,param_2);
  param_2[1] = param_2[1] | 0xb;
  return;
}


/* ==== 00476340 TDaviButton.virtual_0bc ==== */

void TDaviButton_virtual_0bc(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x219)) {
    *(char *)((int)param_1 + 0x219) = param_2;
    FUN_0042ec58(param_1);
  }
  return;
}


/* ==== 00476354 TDaviButton.dynamic_ffec ==== */

void TDaviButton_dynamic_ffec(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((char)param_1[0x82] == '\x03') {
    for (; (piVar1 != (int *)0x0 && (piVar1[0x54] == 0)); piVar1 = (int *)piVar1[9]) {
    }
    if (piVar1 == (int *)0x0) {
      TButton_dynamic_ffec(param_1);
      return;
    }
    FUN_0044d7f0(*(int *)PTR_DAT_004ab8ac,piVar1[0x54]);
  }
  else {
    TButton_dynamic_ffec(param_1);
  }
  return;
}


/* ==== 00476398 TDaviButton.CNMeasureItem ==== */

void TDaviButton_CNMeasureItem(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


/* ==== 004763a8 TDaviButton.CNDrawItem ==== */

void TDaviButton_CNDrawItem(int *param_1,int param_2)

{
  FUN_004763b4(param_1,*(int *)(param_2 + 8));
  return;
}


/* ==== 004763b4 FUN_004763b4 ==== */

void FUN_004763b4(int *param_1,int param_2)

{
  char cVar1;
  UINT UVar2;
  uint uVar3;
  HDC hDC;
  int x_val;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  uint *puVar5;
  tagRECT *lprc;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined *local_34;
  uint local_30 [2];
  tagRECT local_28;
  tagRECT local_18;
  byte local_6;
  byte local_5;
  
  puStack_44 = &stack0xfffffffc;
  local_34 = (undefined *)0x0;
  puStack_48 = &LAB_0047665b;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  FUN_00419558((int *)param_1[0x80],*(int *)(param_2 + 0x18));
  (**(code **)(*param_1 + 0x40))(param_1,&local_18);
  bVar4 = (*(uint *)(param_2 + 0x10) & 1) != 0;
  local_5 = (*(uint *)(param_2 + 0x10) & 0x10) != 0;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    local_6 = 1;
  }
  else if (bVar4) {
    local_6 = 2;
  }
  else {
    local_6 = 0;
  }
  UVar2 = 0x2010;
  if (bVar4) {
    UVar2 = 0x2210;
  }
  if ((*(byte *)(param_2 + 0x10) & 4) != 0) {
    UVar2 = UVar2 | 0x100;
  }
  if (bVar4) {
    TPen_SetColor(*(int **)(param_1[0x80] + 0x10),0x80000010);
    TPen_SetWidth(*(int **)(param_1[0x80] + 0x10),1);
    TBrush_SetColor(*(int **)(param_1[0x80] + 0x14),0x8000000f);
    FUN_004191b8((int *)param_1[0x80],local_18.left,local_18.top,local_18.bottom,local_18.right);
    InflateRect(&local_18,-1,-1);
  }
  else {
    DrawFrameControl(*(HDC *)(param_2 + 0x18),&local_18,4,UVar2);
  }
  if (*(char *)((int)param_1 + 0x219) != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,&local_18);
    InflateRect(&local_18,-1,-1);
  }
  if ((*(char *)((int)param_1 + 0x219) != '\0' || local_5 != 0) && (!bVar4)) {
    TPen_SetColor(*(int **)(param_1[0x80] + 0x10),0x80000014);
    FUN_00419154((int *)param_1[0x80],local_18.left,local_18.top);
    FUN_004190f4((int *)param_1[0x80],local_18.left,local_18.bottom);
    uVar3 = TPen_SetColor(*(int **)(param_1[0x80] + 0x10),0x80000010);
    x_val = local_18.right + -2;
    if (SBORROW4(local_18.right,2)) {
      thunk_FUN_00402808(uVar3);
      x_val = extraout_EDX;
    }
    uVar3 = FUN_00419154((int *)param_1[0x80],x_val,local_18.top);
    x_val = local_18.right + -2;
    if (SBORROW4(local_18.right,2)) {
      thunk_FUN_00402808(uVar3);
      x_val = extraout_EDX_00;
    }
    FUN_004190f4((int *)param_1[0x80],x_val,local_18.bottom);
    InflateRect(&local_18,-1,0);
  }
  TCanvas_SetFont(param_1[0x80]);
  if (bVar4) {
    OffsetRect(&local_18,1,1);
  }
  FUN_0040f7d0(0,0,local_30);
  puVar5 = local_30;
  TGroupBox_GetCaption((int)param_1,(int *)&local_34);
  FUN_004752a4(param_1[0x81],(int *)param_1[0x80],&local_18.left,&local_28,'\x01','\0',local_6,
               param_1[0x85],param_1[0x83],*(byte *)((int)param_1 + 0x209),local_34,puVar5);
  if ((*(byte *)((int)param_1 + 0x219) & local_5) != 0) {
    (**(code **)(*param_1 + 0x40))(param_1,&local_18);
    InflateRect(&local_18,-4,-4);
    TPen_SetColor(*(int **)(param_1[0x80] + 0x10),0x80000006);
    TBrush_SetColor(*(int **)(param_1[0x80] + 0x14),0x8000000f);
    lprc = &local_18;
    hDC = (HDC)FUN_004194d8((int *)param_1[0x80]);
    DrawFocusRect(hDC,lprc);
  }
  FUN_00419558((int *)param_1[0x80],0);
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_00476662;
  puStack_48 = (undefined1 *)0x47665a;
  FUN_00403c5c((int *)&local_34);
  return;
}


/* ==== 0047666c TDaviButton.CMDialogKey ==== */

void TDaviButton_CMDialogKey(int *param_1,int param_2)

{
  if (DAT_004ab184 != '\0') {
    TButton_CMDialogKey(param_1,param_2);
  }
  return;
}


/* ==== 0047667c TDaviButton.CMFontChanged ==== */

void TDaviButton_CMFontChanged(int *param_1)

{
  TWinControl_CMFontChanged(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00476690 TDaviButton.CMEnabledChanged ==== */

void TDaviButton_CMEnabledChanged(int *param_1)

{
  TWinControl_CMEnabledChanged(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004766a4 TDaviButton.WMLButtonDblClk ==== */

void TDaviButton_WMLButtonDblClk(int param_1,int param_2)

{
  FUN_0042f720(param_1,0x201,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return;
}


/* ==== 004766b8 TDaviButton.dynamic_ffdc ==== */

void TDaviButton_dynamic_ffdc(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)TDaviButton_GetGlyph(param_1);
  (**(code **)(*piVar1 + 0x24))();
  return;
}


/* ==== 004766cc TDaviButton.SetGlyph ==== */

void TDaviButton_SetGlyph(int *param_1,int *param_2)

{
  FUN_004746ac(param_1[0x81],param_2);
  *(undefined1 *)(param_1 + 0x84) = 1;
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004766ec TDaviButton.GetGlyph ==== */

undefined4 TDaviButton_GetGlyph(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x204) + 4);
}


/* ==== 00476714 TDaviButton.SetStyle ==== */

void TDaviButton_SetStyle(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x86]) {
    *(char *)(param_1 + 0x86) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00476728 TDaviButton.SetKind ==== */

void TDaviButton_SetKind(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  char cVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = (uint *)0x0;
  puStack_20 = &LAB_00476819;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar5 = (char)param_2;
  if (cVar5 == (char)param_1[0x82]) goto LAB_004767fb;
  puVar1 = &stack0xfffffffc;
  if (cVar5 != '\0') {
    TButton_SetDefault(param_1,cVar5 == '\x01');
    *(bool *)((int)param_1 + 0x1f9) = cVar5 == '\x02';
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
LAB_0047678c:
      if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_00476792;
    }
    else {
      TGroupBox_GetCaption((int)param_1,&local_8);
      uVar3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
      if (local_8 != 0) goto LAB_0047678c;
LAB_00476792:
      if (*(undefined4 **)(&DAT_004ab23c + (param_2 & 0xff) * 4) != (undefined4 *)0x0) {
        FUN_00405808(*(undefined4 **)(&DAT_004ab23c + (param_2 & 0xff) * 4),(int *)&local_c);
        TGroupBox_SetCaption((int)param_1,local_c);
        uVar3 = extraout_ECX_01;
        uVar4 = extraout_EDX_01;
      }
    }
    param_1[0x7f] = *(int *)(&DAT_004ab3a4 + (param_2 & 0xff) * 4);
    piVar2 = (int *)FUN_00474114(param_2,uVar4,uVar3);
    FUN_004746ac(param_1[0x81],piVar2);
    TDaviButton_SetNumGlyphs(param_1,2);
    *(undefined1 *)(param_1 + 0x84) = 0;
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  *(char *)(param_1 + 0x82) = cVar5;
  (**(code **)(*param_1 + 0x74))();
LAB_004767fb:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00476820;
  puStack_20 = (undefined1 *)0x476810;
  FUN_00403c5c((int *)&local_c);
  puStack_20 = (undefined1 *)0x476818;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 00476828 FUN_00476828 ==== */

void FUN_00476828(int param_1)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  char *local_c;
  char *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  local_c = (char *)0x0;
  puStack_18 = &LAB_00476893;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00405808(*(undefined4 **)(&DAT_004ab23c + (uint)*(byte *)(param_1 + 0x208) * 4),
               (int *)&local_8);
  pcVar1 = local_8;
  TGroupBox_GetCaption(param_1,(int *)&local_c);
  FUN_00408268(local_c,pcVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047689a;
  puStack_18 = (undefined1 *)0x47688a;
  FUN_00403c5c((int *)&local_c);
  puStack_18 = (undefined1 *)0x476892;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004768a4 TDaviButton.GetKind ==== */

undefined1 TDaviButton_GetKind(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x208) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x208);
    if (((((bVar1 == 1) != (bool)*(char *)(param_1 + 0x1f8)) ||
         ((bVar1 == 2) != (bool)*(char *)(param_1 + 0x1f9))) ||
        (*(int *)(&DAT_004ab3a4 + (bVar1 & 0x7f) * 4) != *(int *)(param_1 + 0x1fc))) ||
       (*(char *)(param_1 + 0x210) != '\0')) {
      *(undefined1 *)(param_1 + 0x208) = 0;
    }
  }
  return *(undefined1 *)(param_1 + 0x208);
}


/* ==== 00476900 TDaviButton.SetLayout ==== */

DWORD __stdcall TDaviButton_SetLayout(HDC hdc,DWORD l)

{
  int *in_EAX;
  char in_DL;
  
  if (in_DL != *(char *)((int)in_EAX + 0x209)) {
    *(char *)((int)in_EAX + 0x209) = in_DL;
    in_EAX = (int *)(**(code **)(*in_EAX + 0x74))();
  }
  return (DWORD)in_EAX;
}


/* ==== 00476914 TDaviButton.GetNumGlyphs ==== */

undefined4 TDaviButton_GetNumGlyphs(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x204) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x204) + 0x20));
}


/* ==== 00476920 TDaviButton.SetNumGlyphs ==== */

/* WARNING: Removing unreachable block (ram,0x00476927) */

void TDaviButton_SetNumGlyphs(int *param_1,byte param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  if (param_2 != *(byte *)(param_1[0x81] + 0x20)) {
    FUN_00474724(param_1[0x81],param_2);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0047694c TDaviButton.SetSpacing ==== */

void TDaviButton_SetSpacing(int *param_1,int param_2)

{
  if (param_2 != param_1[0x85]) {
    param_1[0x85] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00476960 TDaviButton.SetMargin ==== */

void TDaviButton_SetMargin(int *param_1,int param_2)

{
  if ((param_2 != param_1[0x83]) && (-2 < param_2)) {
    param_1[0x83] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0047697c FUN_0047697c ==== */

void FUN_0047697c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '-';
  puVar2 = &DAT_004ad1f8;
  do {
    FUN_00402f9c((int *)*puVar2);
    puVar2 = puVar2 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}


