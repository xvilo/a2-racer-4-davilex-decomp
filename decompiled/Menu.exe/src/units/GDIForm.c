/* Menu.exe — units/GDIForm.pas: 39 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0046b4e0 TGDIForm.virtual_02c ==== */

int * TGDIForm_virtual_02c(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  HRGN hRgn;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffdc,
                                         in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar1 = TDaviLinkedGraphic_virtual_014
                     ((int *)&PTR_TPersistent_virtual_000_0045ca28,'\x01',param_1);
  param_1[0xb4] = (int)piVar1;
  FUN_0045d4a4((int)piVar1,extraout_EDX,extraout_ECX_00,FUN_0046b828,param_1);
  TCustomForm_virtual_02c(param_1,'\0',param_3);
  hRgn = (HRGN)param_1[0xb6];
  hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
  GetWindowRgn(hWnd,hRgn);
  *(undefined1 *)(param_1 + 0x7a) = 1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


/* ==== 0046b564 TGDIForm.Destroy ==== */

void TGDIForm_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x46b56f;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_0046b5bf;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if ((HGDIOBJ)local_8[0xb5] != (HGDIOBJ)0x0) {
    puStack_10 = &stack0xfffffffc;
    DeleteObject((HGDIOBJ)local_8[0xb5]);
  }
  SysUtils_FreeAndNil(local_8 + 0xb4);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046b5c6;
  puStack_14 = (undefined1 *)0x46b5be;
  TCustomForm_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0046b5d8 TGDIForm.virtual_0e0 ==== */

void TGDIForm_virtual_0e0(int param_1)

{
  uint i_val;
  int *piVar1;
  int j;
  
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    i_val = FUN_0044b180(*(int *)PTR_DAT_004ab9f8);
    if (SBORROW4(i_val,1)) {
      System__RunError(i_val);
    }
    if (-1 < (int)(i_val - 1)) {
      j = 0;
      do {
        piVar1 = (int *)FUN_0044b16c(*(int *)PTR_DAT_004ab9f8,j);
        (**(code **)(*piVar1 + 0x74))();
        j = j + 1;
        i_val = i_val - 1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0046b620 TGDIForm.SetRegionLink ==== */

void TGDIForm_SetRegionLink(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2d0) + 8))();
  return;
}


/* ==== 0046b630 FUN_0046b630 ==== */

void FUN_0046b630(int x1_val,int y1_val,int x2_val,int y2_val,int param_5)

{
  HRGN hrgnSrc2;
  
  hrgnSrc2 = CreateRectRgn(x1_val,y1_val,x2_val,y2_val);
  if (*(int *)(param_5 + -4) == 0) {
    *(HRGN *)(param_5 + -4) = hrgnSrc2;
  }
  else {
    CombineRgn(*(HRGN *)(param_5 + -4),*(HRGN *)(param_5 + -4),hrgnSrc2,2);
    DeleteObject(hrgnSrc2);
  }
  return;
}


/* ==== 0046b674 FUN_0046b674 ==== */

void FUN_0046b674(int *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int i_val;
  uint y2_val;
  int iVar4;
  undefined4 extraout_ECX;
  int x_val;
  int x_val_00;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int j;
  
  if (param_1 == (int *)0x0) {
    puStack_24 = (undefined1 *)0x46b699;
    System__Assert("Assertion failure");
    param_3 = extraout_ECX;
  }
  puStack_24 = (undefined1 *)0x46b6aa;
  piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
  puStack_28 = &LAB_0046b7d1;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uVar2 = (**(code **)(*param_1 + 0x2c))();
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2);
  uVar2 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*piVar1 + 0x34))(piVar1,uVar2);
  piVar3 = (int *)FUN_0041df1c(piVar1);
  FUN_00418f9c(piVar3,0,0,param_1);
  i_val = (**(code **)(*piVar1 + 0x20))();
  y2_val = i_val - 1;
  if (SBORROW4(i_val,1)) {
    y2_val = System__RunError(y2_val);
  }
  if (-1 < (int)y2_val) {
    j = y2_val + 1;
    i_val = 0;
    do {
      x_val_00 = 0;
LAB_0046b7a1:
      iVar4 = (**(code **)(*piVar1 + 0x2c))();
      if (x_val_00 < iVar4) {
        piVar3 = (int *)FUN_0041df1c(piVar1);
        y2_val = FUN_00419464(piVar3,x_val_00,i_val);
        iVar4 = x_val_00;
        if (param_2 == y2_val) {
          do {
            bVar5 = SCARRY4(x_val_00,1);
            x_val_00 = x_val_00 + 1;
            if (bVar5) {
              System__RunError(y2_val);
            }
            iVar4 = (**(code **)(*piVar1 + 0x2c))();
            if (iVar4 <= x_val_00) break;
            piVar3 = (int *)FUN_0041df1c(piVar1);
            y2_val = FUN_00419464(piVar3,x_val_00,i_val);
          } while (param_2 == y2_val);
        }
        else {
          do {
            x_val = iVar4 + 1;
            if (SCARRY4(iVar4,1)) {
              System__RunError(y2_val);
            }
            iVar4 = (**(code **)(*piVar1 + 0x2c))();
            if (iVar4 <= x_val) break;
            piVar3 = (int *)FUN_0041df1c(piVar1);
            y2_val = FUN_00419464(piVar3,x_val,i_val);
            iVar4 = x_val;
          } while (param_2 != y2_val);
          y2_val = i_val + 1;
          puVar6 = &stack0xfffffffc;
          if (SCARRY4(i_val,1)) {
            puVar6 = &stack0xfffffffc;
            y2_val = System__RunError(y2_val);
          }
          FUN_0046b630(x_val_00,i_val,x_val,y2_val,(int)puVar6);
          x_val_00 = x_val;
        }
        goto LAB_0046b7a1;
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0046b7d8;
  puStack_28 = (undefined1 *)0x46b7d0;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 0046b828 FUN_0046b828 ==== */

void FUN_0046b828(int *param_1)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  HRGN pHVar5;
  BOOL BVar6;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if (((char)param_1[0xb7] != '\0') &&
       (cVar1 = (**(code **)(**(int **)(param_1[0xb4] + 0xc) + 0x1c))(), cVar1 == '\0')) {
      uVar4 = extraout_ECX;
      if ((HGDIOBJ)param_1[0xb5] != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)param_1[0xb5]);
        uVar4 = extraout_ECX_00;
      }
      iVar2 = FUN_0046b674(*(int **)(param_1[0xb4] + 0xc),param_1[0xb8],uVar4);
      param_1[0xb5] = iVar2;
      BVar6 = -1;
      pHVar5 = (HRGN)param_1[0xb5];
      pHVar3 = (HWND)Controls_TWinControl_GetHandle(param_1);
      SetWindowRgn(pHVar3,pHVar5,BVar6);
      return;
    }
    BVar6 = -1;
    pHVar5 = (HRGN)param_1[0xb6];
    pHVar3 = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetWindowRgn(pHVar3,pHVar5,BVar6);
  }
  return;
}


/* ==== 0046b8ac TGDIForm.SetTransparent ==== */

void TGDIForm_SetTransparent(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xb7]) {
    *(char *)(param_1 + 0xb7) = param_2;
    FUN_0046b828(param_1);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0046b8d4 TGDIForm.SetTransparentColor ==== */

void TGDIForm_SetTransparentColor(int *param_1,int param_2)

{
  if (param_2 != param_1[0xb8]) {
    param_1[0xb8] = param_2;
    FUN_0046b828(param_1);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0046b8fc TGDIForm.WMMove ==== */

void TGDIForm_WMMove(int *param_1)

{
  (**(code **)(*param_1 + 0xe0))();
  TWinControl_WMMove(param_1);
  return;
}


/* ==== 0046b91c TGDIForm.WMSize ==== */

void TGDIForm_WMSize(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0xe0))();
  TScrollingWinControl_WMSize(param_1,param_2);
  return;
}


/* ==== 0046b93c TGDIForm.WMHScroll ==== */

void TGDIForm_WMHScroll(int *param_1,int *param_2)

{
  (**(code **)(*param_1 + 0xe0))();
  TScrollingWinControl_WMHScroll(param_1,param_2);
  return;
}


/* ==== 0046b95c TGDIForm.WMVScroll ==== */

void TGDIForm_WMVScroll(int *param_1,int *param_2)

{
  (**(code **)(*param_1 + 0xe0))();
  TScrollingWinControl_WMVScroll(param_1,param_2);
  return;
}


/* ==== 0046b97c TGDIForm.dynamic_ffb0 ==== */

void TGDIForm_dynamic_ffb0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  HDC pHVar4;
  int iVar5;
  int iVar6;
  int local_38 [2];
  int local_30 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 local_18 [16];
  uint local_8;
  
  (**(code **)(*param_1 + 0x40))(param_1,local_18);
  piVar1 = *(int **)(*(int *)PTR_DAT_004ab8ac + 0x38);
  if ((piVar1 != (int *)0x0) && (param_1 != piVar1)) {
    local_8 = (uint)(*(char *)((int)piVar1 + 0x211) != '\0');
    uVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,local_20);
    iVar5 = local_1c - local_8;
    if (SBORROW4(local_1c,local_8)) {
      System__RunError(uVar2);
    }
    uVar2 = (**(code **)(*param_1 + 0x3c))(param_1,local_28);
    iVar6 = iVar5 - local_24;
    if (SBORROW4(iVar5,local_24)) {
      System__RunError(uVar2);
    }
    uVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,local_30);
    iVar5 = local_30[0] - local_8;
    if (SBORROW4(local_30[0],local_8)) {
      System__RunError(uVar2);
    }
    uVar2 = (**(code **)(*param_1 + 0x3c))(param_1,local_38);
    if (SBORROW4(iVar5,local_38[0])) {
      System__RunError(uVar2);
    }
    piVar3 = (int *)FUN_00447524((int)param_1);
    pHVar4 = (HDC)FUN_004194d8(piVar3);
    FUN_00432884(piVar1,pHVar4,iVar5 - local_38[0],iVar6);
  }
  TCustomForm_dynamic_ffb0((int)param_1);
  return;
}


/* ==== 0046ba3c FUN_0046ba3c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ba3c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad194 = _DAT_004ad194 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0046ba74 FUN_0046ba74 ==== */

void FUN_0046ba74(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined *puStack_30;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  puStack_18 = (undefined1 *)0x46ba8b;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_1c = &LAB_0046baf6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (param_1 != 0) {
    puStack_18 = &stack0xfffffffc;
    FUN_004085dc(param_1,8,&local_10);
    puStack_30 = &DAT_0046bb18;
    System__LStrCatN(&local_c,4);
    System__Assert(local_c);
  }
  *in_FS_OFFSET = puStack_30;
  System__LStrArrayClr(&local_10,3);
  return;
}


/* ==== 0046bb44 FUN_0046bb44 ==== */

void FUN_0046bb44(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int i_val;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [5];
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  puVar2 = local_1c;
  for (i_val = 5; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (DAT_004ab06c != '\0') {
    puStack_30 = &LAB_0046bba1;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    local_8 = param_2;
    System__IntfClear(param_2);
    piVar1 = DAT_004ad198;
    i_val = (**(code **)(*DAT_004ad198 + 0xc))();
    FUN_0046ba74(i_val,0x46bbd0);
    *in_FS_OFFSET = piVar1;
  }
  return;
}


/* ==== 0046bbec FUN_0046bbec ==== */

void FUN_0046bbec(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puStack_2c = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  local_1c = (int *)0x0;
  puStack_30 = &LAB_0046bcc7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_3c = &LAB_0046bc9b;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  System__IntfClear((int *)&DAT_004ad198);
  iVar2 = DirectSoundCreate();
  FUN_0046ba74(iVar2,0x46bce0);
  System_FillChar(&local_18,0x14,0);
  local_18 = 0x14;
  local_14 = 1;
  FUN_0046bb44(&local_18,(int *)&local_1c);
  FUN_00405878((int *)&DAT_004ad19c,local_1c);
  Controls_TWinControl_GetHandle(param_1);
  piVar1 = DAT_004ad198;
  iVar2 = (**(code **)(*DAT_004ad198 + 0x18))();
  FUN_0046ba74(iVar2,0x46bd04);
  DAT_004ab06c = 1;
  *in_FS_OFFSET = piVar1;
  *in_FS_OFFSET = 0;
  System__IntfClear((int *)&local_1c);
  return;
}


/* ==== 0046bd20 FUN_0046bd20 ==== */

void FUN_0046bd20(void)

{
  System__IntfClear((int *)&DAT_004ad19c);
  System__IntfClear(&DAT_004ad198);
  return;
}


/* ==== 0046bd3c FUN_0046bd3c ==== */

void FUN_0046bd3c(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  if (DAT_004ab06c != '\0') {
    puStack_30 = &LAB_0046bd9f;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    local_8 = param_2;
    System_FillChar(&local_1c,0x14,0);
    local_1c = 0x14;
    local_18 = 0x80e0;
    local_14 = *(undefined4 *)(param_1 + 0x34);
    local_c = *(undefined4 *)(param_1 + 0x30);
    FUN_0046bb44(&local_1c,local_8);
    *in_FS_OFFSET = uStack_34;
  }
  return;
}


/* ==== 0046bdc4 FUN_0046bdc4 ==== */

void FUN_0046bdc4(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_28 = (undefined1 *)0x46bdda;
  local_8 = param_2;
  FUN_004058c0(param_2);
  puStack_2c = &LAB_0046bec5;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (DAT_004ab06c != '\0') {
    puStack_38 = &LAB_0046be99;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    puStack_28 = &stack0xfffffffc;
    iVar1 = (**(code **)(*local_8 + 0x2c))();
    uVar2 = FUN_0046ba74(iVar1,0x46bedc);
    uVar3 = local_14;
    if ((int)local_14 < 0) {
      System__RunError(uVar2);
      uVar3 = extraout_ECX;
    }
    uVar3 = System_Move(*(undefined4 **)(param_1 + 0x38),local_c,uVar3);
    if (local_10 != (undefined4 *)0x0) {
      if ((int)local_18 < 0) {
        System__RunError(uVar3);
        local_18 = extraout_ECX_00;
      }
      puVar4 = (undefined4 *)(*(uint *)(param_1 + 0x38) + local_14);
      if (CARRY4(*(uint *)(param_1 + 0x38),local_14)) {
        puVar4 = (undefined4 *)System__RunError((uint)puVar4);
        local_18 = extraout_ECX_01;
        local_10 = extraout_EDX;
      }
      System_Move(puVar4,local_10,local_18);
    }
    iVar1 = (**(code **)(*local_8 + 0x4c))();
    FUN_0046ba74(iVar1,0x46bedc);
    *in_FS_OFFSET = uStack_3c;
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0046becc;
  puStack_2c = (undefined1 *)0x46bec4;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046c0ec FUN_0046c0ec ==== */

void FUN_0046c0ec(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  
  System__LStrAsg(param_2,param_1);
  pbVar1 = FUN_00408920((undefined *)*param_2);
  while( true ) {
    iVar3 = System__LStrLen(*param_2);
    if ((iVar3 < 1) || ((0x20 < *pbVar1 && (*pbVar1 != 0x2e)))) break;
    puVar2 = System__LStrToPChar((undefined *)*param_2);
    FUN_00404210(param_2,(int)pbVar1 - (int)puVar2);
    pbVar1 = FUN_00408920((undefined *)*param_2);
  }
  return;
}


/* ==== 0046c13c FUN_0046c13c ==== */

void FUN_0046c13c(int *param_1,char param_2,int param_3,int param_4,DWORD message_id)

{
  int extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  DWORD local_18;
  undefined1 local_14;
  byte *local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_10 = (byte *)0x0;
  local_c = (undefined4 *)0x0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_38 = (undefined1 *)0x46c159;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffcc,
                                         in_stack_ffffffd0);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_3c = &LAB_0046c1e3;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  System__LStrLAsg((int *)&local_c,param_3);
  if (local_c == (undefined4 *)0x0) {
    FUN_0040adec(message_id,(int *)&local_c);
    if (local_c == (undefined4 *)0x0) {
      uVar1 = 0;
      System_LoadResString((undefined4 *)PTR_PTR_004ab67c,(int *)&local_10);
      local_18 = message_id;
      local_14 = 0;
      SysUtils_FmtStr((int *)&local_c,local_10,&local_18,uVar1);
    }
  }
  FUN_0040b764(param_1,'\0',local_c,param_4);
  param_1[3] = message_id;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0046c1ea;
  puStack_3c = (undefined1 *)0x46c1e2;
  System__LStrArrayClr((int *)&local_10,2);
  return;
}


/* ==== 0046c20c FUN_0046c20c ==== */

void FUN_0046c20c(int *param_1,char param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
                 undefined4 *param_6,DWORD message_id)

{
  undefined4 *extraout_ECX;
  int *in_FS_OFFSET;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  int local_8;
  
  local_8 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x46c220;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffdc,
                                         in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_0046c27e;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0046c0ec(param_3,&local_8);
  FUN_0046c13c(param_1,'\0',local_8,param_4,message_id);
  System__LStrAsg(param_1 + 4,param_6);
  System__LStrAsg(param_1 + 5,param_5);
  *in_FS_OFFSET = param_4;
  puStack_30 = &LAB_0046c285;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0046c2a4 FUN_0046c2a4 ==== */

void FUN_0046c2a4(DWORD message_id)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0046c13c((int *)&DAT_0046c034,'\x01',0,0,message_id);
  System__RaiseExcept(uVar1);
  return;
}


/* ==== 0046c2c0 FUN_0046c2c0 ==== */

void FUN_0046c2c0(uint message_id)

{
  bool bVar1;
  
  bVar1 = FUN_0040d9ec(message_id);
  if (!bVar1) {
    FUN_0046c2a4(message_id);
  }
  return;
}


/* ==== 0046c2d8 FUN_0046c2d8 ==== */

void FUN_0046c2d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  puStack_24 = &LAB_0046c364;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_4 = 0;
  local_8 = param_3;
  System__IntfClear((int *)&local_c);
  uVar2 = (**(code **)*param_1)();
  bVar1 = FUN_0040d9ec(uVar2);
  if (bVar1) {
    System__IntfClear((int *)&local_10);
    uVar2 = (**(code **)(*local_c + 0x10))();
    bVar1 = FUN_0040d9ec(uVar2);
    if (bVar1) {
      (**(code **)(*local_10 + 0x14))();
    }
  }
  *in_FS_OFFSET = param_1;
  System__IntfClear((int *)&local_10);
  System__IntfClear((int *)&local_c);
  return;
}


/* ==== 0046c384 FUN_0046c384 ==== */

void FUN_0046c384(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_20 = &LAB_0046c416;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*param_3 != 0) {
    System__IntfClear((int *)&local_8);
    uVar2 = (**(code **)*param_1)();
    bVar1 = FUN_0040d9ec(uVar2);
    if (bVar1) {
      System__IntfClear((int *)&local_c);
      uVar2 = (**(code **)(*local_8 + 0x10))();
      bVar1 = FUN_0040d9ec(uVar2);
      if (bVar1) {
        uVar2 = (**(code **)(*local_c + 0x18))();
        bVar1 = FUN_0040d9ec(uVar2);
        if (bVar1) {
          *param_3 = 0;
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046c41d;
  puStack_20 = (undefined1 *)0x46c40d;
  System__IntfClear((int *)&local_c);
  puStack_20 = (undefined1 *)0x46c415;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046c434 FUN_0046c434 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c434(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("ole32.dll");
  if (hModule != (HMODULE)0x0) {
    _DAT_004ab070 = GetProcAddress(hModule,"CoCreateInstanceEx");
    DAT_004ab074 = GetProcAddress(hModule,"CoInitializeEx");
    _DAT_004ab078 = GetProcAddress(hModule,"CoAddRefServerProcess");
    _DAT_004ab07c = GetProcAddress(hModule,"CoReleaseServerProcess");
    _DAT_004ab080 = GetProcAddress(hModule,"CoResumeClassObjects");
    _DAT_004ab084 = GetProcAddress(hModule,"CoSuspendClassObjects");
  }
  return;
}


/* ==== 0046c638 FUN_0046c638 ==== */

void FUN_0046c638(int *param_1,char *param_2,undefined4 *param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  BSTR pOVar4;
  DWORD message_id_2;
  uint j;
  int m;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_678;
  undefined1 *puStack_674;
  undefined1 *puStack_670;
  undefined4 uStack_66c;
  undefined1 *puStack_668;
  undefined1 *puStack_664;
  uint local_654 [256];
  uint auStack_254 [128];
  VARIANTARG local_54 [2];
  uint *local_34;
  undefined4 *local_30;
  uint local_2c;
  uint k;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  int i_val;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  int *local_8;
  uint *puVar6;
  
  puStack_664 = (undefined1 *)0x46c65a;
  local_c = param_3;
  local_8 = param_1;
  FUN_00404480((int)local_54,(int)&DAT_0040d7bc);
  puStack_668 = &LAB_0046c924;
  uStack_66c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_66c;
  i_val = 0;
  puStack_674 = &LAB_0046c901;
  uStack_678 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_678;
  local_14 = (uint)(byte)param_2[1];
  puStack_670 = &stack0xfffffffc;
  puStack_664 = &stack0xfffffffc;
  if (local_14 != 0) {
    local_1c = param_5;
    j = 0;
    puVar5 = local_654 + local_14 * 4;
    puStack_670 = &stack0xfffffffc;
    puStack_664 = &stack0xfffffffc;
    do {
      puVar1 = local_1c;
      puVar6 = puVar5 + -4;
      local_10 = (uint)(param_2[j + 3] & 0x7f);
      bVar3 = param_2[j + 3] & 0x80;
      if (local_10 == 10) {
        *puVar6 = 10;
        puVar5[-2] = 0x80020004;
      }
      else {
        if (local_10 == 0x48) {
          local_20 = auStack_254 + i_val * 2;
          if (bVar3 == 0) {
            pOVar4 = FUN_00404950((LPCSTR)*local_1c);
            *local_20 = (uint)pOVar4;
            local_20[1] = 0;
            *puVar6 = 8;
            puVar5[-2] = *local_20;
          }
          else {
            pOVar4 = FUN_00404950(*(LPCSTR *)*local_1c);
            *local_20 = (uint)pOVar4;
            local_20[1] = *local_1c;
            *puVar6 = 0x4008;
            puVar5[-2] = (uint)local_20;
          }
          i_val = i_val + 1;
        }
        else if (bVar3 == 0) {
          if (local_10 == 0xc) {
            if ((short)*local_1c == 0x100) {
              local_24 = auStack_254 + i_val * 2;
              pOVar4 = FUN_00404950(*(LPCSTR *)(*local_1c + 8));
              *local_24 = (uint)pOVar4;
              local_24[1] = 0;
              *puVar6 = 8;
              puVar5[-2] = *local_24;
              i_val = i_val + 1;
            }
            else {
              *puVar6 = *local_1c;
              puVar5[-3] = puVar1[1];
              puVar5[-2] = puVar1[2];
              puVar5[-1] = puVar1[3];
              local_1c = local_1c + 3;
            }
          }
          else {
            *puVar6 = local_10;
            puVar5[-2] = *local_1c;
            if ((4 < (int)local_10) && ((int)local_10 < 8)) {
              local_1c = local_1c + 1;
              puVar5[-1] = *local_1c;
            }
          }
        }
        else {
          if ((local_10 == 0xc) && (*(short *)*local_1c == 0x100)) {
            FUN_00404c44((VARIANT *)*local_1c,(VARIANTARG *)*local_1c,8);
          }
          *puVar6 = local_10 | 0x4000;
          puVar5[-2] = *local_1c;
        }
        local_1c = local_1c + 1;
      }
      j = j + 1;
      puVar5 = puVar6;
    } while (j != local_14);
  }
  piVar2 = local_8;
  local_34 = local_654;
  local_30 = local_c + 1;
  local_2c = local_14;
  k = (uint)(byte)param_2[2];
  if (*param_2 == '\x04') {
    *local_c = 0xfffffffd;
    local_30 = local_c;
    k = k + 1;
  }
  message_id_2 = (**(code **)(*local_8 + 0x18))();
  m = i_val;
  if (message_id_2 != 0) {
    FUN_0046cbb4(message_id_2,local_54);
    m = i_val;
  }
  while (m != 0) {
    m = m + -1;
    if ((int *)auStack_254[m * 2 + 1] != (int *)0x0) {
      FUN_0040492c((LPCWSTR)auStack_254[m * 2],(int *)auStack_254[m * 2 + 1]);
    }
  }
  *in_FS_OFFSET = piVar2;
  m = i_val;
  while (m != 0) {
    m = m + -1;
    SysFreeString((BSTR)auStack_254[m * 2]);
  }
  return;
}


/* ==== 0046c934 FUN_0046c934 ==== */

void FUN_0046c934(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  undefined4 local_c;
  undefined1 local_8;
  
  local_c = *(undefined4 *)(in_stack_00000004 + -4);
  local_8 = 6;
  uVar1 = FUN_0040b6d0((int)&DAT_0046bfdc,'\x01',(undefined4 *)PTR_PTR_004ab918,0,&local_c);
  System__RaiseExcept(uVar1);
  return;
}


/* ==== 0046c968 FUN_0046c968 ==== */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046c968(int *param_1,char *param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  LCID LVar7;
  uint message_id;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int i_val;
  
  i_val = 0;
  iVar2 = (param_3 + 1) * -4;
  puVar4 = &stack0xffffffd4 + iVar2;
  do {
    puVar8 = puVar4;
    *(undefined4 *)(puVar8 + -4) = 0x46c997;
    iVar5 = FUN_00408b24(param_2);
    *(undefined4 *)(puVar8 + -4) = 0;
    *(undefined4 *)(puVar8 + -8) = 0;
    *(int *)(puVar8 + -0xc) = iVar5;
    *(char **)(puVar8 + -0x10) = param_2;
    *(undefined4 *)(puVar8 + -0x14) = 0;
    *(undefined4 *)(puVar8 + -0x18) = 0;
    *(undefined4 *)(puVar8 + -0x1c) = 0x46c9a8;
    iVar6 = MultiByteToWideChar(*(UINT *)(puVar8 + -0x18),*(DWORD *)(puVar8 + -0x14),
                                *(LPCSTR *)(puVar8 + -0x10),*(int *)(puVar8 + -0xc),
                                *(LPWSTR *)(puVar8 + -8),*(int *)(puVar8 + -4));
    iVar6 = iVar6 + 1;
    iVar3 = -(iVar6 * 2 + 3U & 0xfffffffc);
    if (i_val == 0) {
      *(int *)(&stack0xffffffd4 + iVar2) = (int)puVar8 + iVar3;
    }
    else {
      *(int *)(&stack0xffffffd4 + (param_3 - i_val) * 4 + iVar2) = (int)puVar8 + iVar3;
    }
    *(int *)(puVar8 + iVar3 + -4) = iVar6;
    *(int *)(puVar8 + iVar3 + -8) = (int)puVar8 + iVar3;
    *(int *)(puVar8 + iVar3 + -0xc) = iVar5;
    *(char **)(puVar8 + iVar3 + -0x10) = param_2;
    *(undefined4 *)(puVar8 + iVar3 + -0x14) = 0;
    *(undefined4 *)(puVar8 + iVar3 + -0x18) = 0;
    *(undefined4 *)(puVar8 + iVar3 + -0x1c) = 0x46c9ed;
    MultiByteToWideChar(*(UINT *)(puVar8 + iVar3 + -0x18),*(DWORD *)(puVar8 + iVar3 + -0x14),
                        *(LPCSTR *)(puVar8 + iVar3 + -0x10),*(int *)(puVar8 + iVar3 + -0xc),
                        *(LPWSTR *)(puVar8 + iVar3 + -8),*(int *)(puVar8 + iVar3 + -4));
    *(undefined2 *)(puVar8 + iVar6 * 2 + iVar3 + -2) = 0;
    param_2 = param_2 + iVar5 + 1;
    i_val = i_val + 1;
    puVar4 = puVar8 + iVar3;
  } while (i_val != param_3);
  *(undefined4 *)(puVar8 + iVar3 + -4) = param_4;
  *(undefined4 *)(puVar8 + iVar3 + -8) = 0x46ca0c;
  LVar7 = GetThreadLocale();
  *(LCID *)(puVar8 + iVar3 + -8) = LVar7;
  *(int *)(puVar8 + iVar3 + -0xc) = param_3;
  *(undefined1 **)(puVar8 + iVar3 + -0x10) = &stack0xffffffd4 + iVar2;
  *(undefined **)(puVar8 + iVar3 + -0x14) = PTR_DAT_004ab644;
  *(int **)(puVar8 + iVar3 + -0x18) = param_1;
  pcVar1 = *(code **)(*param_1 + 0x14);
  puVar9 = puVar8 + iVar3 + -0x1c;
  *(undefined4 *)(puVar8 + iVar3 + -0x1c) = 0x46ca24;
  message_id = (*pcVar1)();
  if (message_id == 0x80020006) {
    *(undefined1 **)(puVar9 + -4) = &stack0xfffffffc;
    *(undefined4 *)(puVar9 + -8) = 0x46ca31;
    FUN_0046c934();
  }
  else {
    *(undefined4 *)(puVar9 + -4) = 0x46ca39;
    FUN_0046c2c0(message_id);
  }
  return;
}


/* ==== 0046ca48 FUN_0046ca48 ==== */

void FUN_0046ca48(void)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_CreateRes((int *)&DAT_0046bfdc,'\x01',(undefined4 *)PTR_LAB_004ab984);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 0046ca60 FUN_0046ca60 ==== */

void FUN_0046ca60(void)

{
  VARIANTARG *in_stack_00000004;
  short *in_stack_00000008;
  char *in_stack_0000000c;
  undefined4 local_108 [64];
  int *local_8;
  
  if (*in_stack_00000008 == 9) {
    local_8 = *(int **)(in_stack_00000008 + 4);
  }
  else if (*in_stack_00000008 == 0x4009) {
    local_8 = (int *)**(undefined4 **)(in_stack_00000008 + 4);
  }
  else {
    FUN_0046ca48();
  }
  FUN_0046c968(local_8,in_stack_0000000c + (byte)in_stack_0000000c[1] + 3,
               (byte)in_stack_0000000c[2] + 1,local_108);
  if (in_stack_00000004 != (VARIANTARG *)0x0) {
    FUN_004049ec(in_stack_00000004);
  }
  FUN_0046c638(local_8,in_stack_0000000c,local_108,in_stack_00000004,(uint *)&stack0x00000010);
  return;
}


/* ==== 0046cae0 FUN_0046cae0 ==== */

void FUN_0046cae0(DWORD message_id_2,VARIANTARG *variantarg,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  DWORD message_id;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_24 = &LAB_0046cba5;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  local_8 = param_3;
  if (message_id_2 == 0x80020009) {
    message_id = *(DWORD *)((int)&variantarg[1].n1 + 0xc);
    puStack_20 = &stack0xfffffffc;
    FUN_00403ea4((int *)&local_c,(LPCWSTR)(variantarg->n1).decVal.Hi32);
    puVar4 = local_c;
    FUN_00403ea4((int *)&local_10,*(LPCWSTR *)((int)&variantarg->n1 + 0xc));
    iVar2 = *(int *)&variantarg[1].n1;
    puVar3 = local_10;
    FUN_00403ea4((int *)&local_14,*(LPCWSTR *)((int)&variantarg->n1 + 8));
    uVar1 = FUN_0046c20c((int *)&DAT_0046c090,'\x01',local_14,iVar2,puVar3,puVar4,message_id);
    if (param_4 != '\0') {
      FUN_00404660(variantarg,"\x0e\ftagEXCEPINFO ");
    }
  }
  else {
    puVar4 = (undefined4 *)0x0;
    uVar1 = FUN_0046c13c((int *)&DAT_0046c034,'\x01',0,0,message_id_2);
  }
  if (local_8 != 0) {
    System__RaiseExcept(uVar1);
    return;
  }
  System__RaiseExcept(uVar1);
  *in_FS_OFFSET = puVar4;
  puStack_28 = &LAB_0046cbac;
  System__LStrArrayClr((int *)&local_14,3);
  return;
}


/* ==== 0046cbb4 FUN_0046cbb4 ==== */

void FUN_0046cbb4(DWORD message_id_2,VARIANTARG *variantarg)

{
  FUN_0046cae0(message_id_2,variantarg,0,'\0');
  return;
}


/* ==== 0046cbc0 FUN_0046cbc0 ==== */

void FUN_0046cbc0(undefined4 *param_1)

{
  System_FillChar(param_1,0x20,0);
  return;
}


/* ==== 0046cbd0 FUN_0046cbd0 ==== */

void FUN_0046cbd0(void)

{
  DWORD message_id_2;
  uint i_val;
  int in_stack_00000000;
  int *in_stack_00000004;
  char *in_stack_00000008;
  VARIANTARG local_34 [2];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  uint j;
  
  local_c = (uint)(byte)in_stack_00000008[1];
  for (i_val = local_c; i_val != 0; i_val = i_val - 1) {
  }
  local_14 = &stack0xffffffc0;
  j = (uint)(byte)in_stack_00000008[2];
  for (i_val = j; i_val != 0; i_val = i_val - 1) {
  }
  if (*in_stack_00000008 == '\x04') {
    j = j + 1;
  }
  local_10 = &stack0xffffffc0;
  FUN_0046cbc0((undefined4 *)local_34);
  message_id_2 = (**(code **)(*in_stack_00000004 + 0x18))();
  if (message_id_2 != 0) {
    FUN_0046cae0(message_id_2,local_34,in_stack_00000000,(char)in_stack_00000004);
    return;
  }
  return;
}


/* ==== 0046ccb8 FUN_0046ccb8 ==== */

undefined1 FUN_0046ccb8(void)

{
  undefined1 uVar1;
  VARIANTARG *in_stack_00000004;
  int in_stack_0000000c;
  undefined1 local_10;
  undefined1 uStack_c;
  
  uStack_c = 0;
  local_10 = 0;
  FUN_0046cbd0();
  uVar1 = *(undefined1 *)(in_stack_0000000c + 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 2:
  case 3:
  case 0xb:
  case 0x10:
    uVar1 = local_10;
    break;
  case 4:
    break;
  case 5:
  case 7:
    break;
  case 6:
    break;
  case 8:
    if (*(BSTR *)&in_stack_00000004->n1 != (BSTR)0x0) {
      SysFreeString(*(BSTR *)&in_stack_00000004->n1);
    }
    *(undefined4 *)&in_stack_00000004->n1 = 0;
    uVar1 = local_10;
    break;
  case 9:
  case 0xd:
    if (*(int **)&in_stack_00000004->n1 != (int *)0x0) {
      (**(code **)(**(int **)&in_stack_00000004->n1 + 8))();
    }
    *(undefined4 *)&in_stack_00000004->n1 = 0;
    uVar1 = local_10;
    break;
  case 0xc:
    FUN_004049ec(in_stack_00000004);
    *(undefined4 *)&in_stack_00000004->n1 = 0;
    (in_stack_00000004->n1).decVal.Hi32 = 0;
    *(undefined4 *)((int)&in_stack_00000004->n1 + 8) = 0;
    *(undefined4 *)((int)&in_stack_00000004->n1 + 0xc) = 0;
    uVar1 = uStack_c;
  }
  return uVar1;
}


