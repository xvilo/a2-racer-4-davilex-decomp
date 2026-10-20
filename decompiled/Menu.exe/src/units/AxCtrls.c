/* Menu.exe — units/AxCtrls.pas: 39 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0046d454 FUN_0046d454 ==== */

void FUN_0046d454(int param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = FUN_0046d7cc((int *)&PTR_TFontAdapter_virtual_000_0046d1fc,'\x01',param_1);
    if (piVar1 != (int *)0x0) {
      piVar1 = piVar1 + 9;
    }
    FUN_00405878((int *)(param_1 + 0x20),piVar1);
  }
  FUN_00405894(param_2,*(undefined4 **)(param_1 + 0x20));
  return;
}


/* ==== 0046d4f4 FUN_0046d4f4 ==== */

void FUN_0046d4f4(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_0046d537;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0046d454(param_1,(int *)&local_8);
  (**(code **)(*local_8 + 0xc))(local_8,param_2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046d53e;
  puStack_18 = (undefined1 *)0x46d536;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046d544 FUN_0046d544 ==== */

void FUN_0046d544(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  puStack_14 = (undefined1 *)0x46d55d;
  local_8 = param_2;
  FUN_004058c0(param_2);
  puStack_18 = &LAB_0046d59e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0046d454(param_1,(int *)&local_c);
  (**(code **)(*local_c + 0x10))(local_c,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046d5a5;
  puStack_18 = (undefined1 *)0x46d595;
  System__IntfClear((int *)&local_c);
  puStack_18 = (undefined1 *)0x46d59d;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046d5ac FUN_0046d5ac ==== */

void FUN_0046d5ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_0046d5ef;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  func_0x0046d4a4(param_1,&local_8);
  (**(code **)(*local_8 + 0xc))(local_8,param_2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046d5f6;
  puStack_18 = (undefined1 *)0x46d5ee;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046d5fc FUN_0046d5fc ==== */

int * FUN_0046d5fc(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
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
  System_TObject_Create(param_1,'\0',param_3);
  piVar1 = FUN_0046d73c((int *)&DAT_0046d0e0,'\x01',(int)param_1);
  if (piVar1 != (int *)0x0) {
    piVar1 = piVar1 + 2;
  }
  FUN_00405878(param_1 + 5,piVar1);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0046d650 TCustomAdapter.Destroy ==== */

void TCustomAdapter_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0046d70c((int)piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0046d67c TCustomAdapter.virtual_000 ==== */

void TCustomAdapter_virtual_000(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_0046d70c(param_1);
  }
  return;
}


/* ==== 0046d688 FUN_0046d688 ==== */

void FUN_0046d688(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_ffffffe4;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x46d69a;
  local_8 = param_2;
  FUN_004058c0(param_2);
  puStack_14 = &LAB_0046d6f0;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) != 0) {
    in_stack_ffffffe4 = (undefined4 *)0x46d6b5;
    puStack_10 = &stack0xfffffffc;
    FUN_0046d70c(param_1);
  }
  if (local_8 != (int *)0x0) {
    in_stack_ffffffe4 = (undefined4 *)(param_1 + 0x10);
    FUN_0046c2d8(local_8,&DAT_0046d6fc,*(undefined4 *)(param_1 + 0x14),in_stack_ffffffe4);
  }
  FUN_00405878((int *)(param_1 + 0xc),local_8);
  *in_FS_OFFSET = in_stack_ffffffe4;
  puStack_14 = &LAB_0046d6f7;
  uStack_18 = 0x46d6ef;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046d70c FUN_0046d70c ==== */

void FUN_0046d70c(int param_1)

{
  FUN_0046c384(*(undefined4 **)(param_1 + 0xc),&DAT_0046d72c,(int *)(param_1 + 0x10));
  System__IntfClear((int *)(param_1 + 0xc));
  return;
}


/* ==== 0046d73c FUN_0046d73c ==== */

int * FUN_0046d73c(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
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
  System_TObject_Create(param_1,'\0',param_3);
  param_1[3] = param_3;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0046d778 FUN_0046d778 ==== */

undefined4 FUN_0046d778(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_0046d7a3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 4))();
  *in_FS_OFFSET = uStack_1c;
  return 0;
}


/* ==== 0046d7cc FUN_0046d7cc ==== */

int * FUN_0046d7cc(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
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
  FUN_0046d5fc(param_1,'\0',param_3);
  param_1[7] = param_3;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0046d808 TFontAdapter.virtual_004 ==== */

void TFontAdapter_virtual_004(int param_1)

{
  int number;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  byte bVar1;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  int *piStack_74;
  undefined1 *puStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined1 *puStack_48;
  int *piStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 *local_2c;
  int *local_28;
  undefined1 local_22 [2];
  int local_20;
  undefined1 local_1c [12];
  LPCWSTR wide_char_str;
  int *local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  wide_char_str = (LPCWSTR)0x0;
  local_28 = (int *)0x0;
  puStack_38 = &LAB_0046d9ac;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    puStack_40 = (undefined4 *)0x46d84b;
    FUN_00405894((int *)&local_28,*(undefined4 **)(param_1 + 0xc));
    if (local_28 != (int *)0x0) {
      puStack_40 = (undefined4 *)0x46d85d;
      puStack_40 = FUN_004042b4(&wide_char_str);
      piStack_44 = local_28;
      puStack_48 = (undefined1 *)0x46d867;
      (**(code **)(*local_28 + 0xc))();
      puStack_48 = local_1c;
      piStack_4c = local_28;
      piStack_50 = (int *)0x46d874;
      (**(code **)(*local_28 + 0x14))();
      piStack_50 = &local_20;
      piStack_54 = local_28;
      piStack_58 = (int *)0x46d887;
      (**(code **)(*local_28 + 0x1c))();
      bVar1 = local_20 != 0;
      piStack_58 = &local_20;
      piStack_5c = local_28;
      piStack_60 = (int *)0x46d89d;
      (**(code **)(*local_28 + 0x24))();
      if (local_20 != 0) {
        bVar1 = bVar1 | 2;
      }
      piStack_60 = &local_20;
      piStack_64 = local_28;
      piStack_68 = (int *)0x46d8b3;
      (**(code **)(*local_28 + 0x2c))();
      if (local_20 != 0) {
        bVar1 = bVar1 | 4;
      }
      piStack_68 = &local_20;
      piStack_6c = local_28;
      puStack_70 = (undefined1 *)0x46d8c9;
      (**(code **)(*local_28 + 0x34))();
      if (local_20 != 0) {
        bVar1 = bVar1 | 8;
      }
      puStack_70 = local_22;
      piStack_74 = local_28;
      puStack_78 = (undefined1 *)0x46d8df;
      (**(code **)(*local_28 + 0x44))();
      puStack_78 = (undefined1 *)0x46d8eb;
      local_c = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX);
      *(undefined1 *)(local_8 + 0x18) = 1;
      puStack_7c = &LAB_0046d97f;
      uStack_80 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_80;
      puStack_78 = &stack0xfffffffc;
      (**(code **)(*local_c + 8))(local_c,*(undefined4 *)(local_8 + 0x1c));
      FUN_00403ea4((int *)&local_2c,wide_char_str);
      TFont_SetName(local_c,local_2c);
      number = FUN_00402ac8();
      TFont_SetSize(local_c,number);
      TFont_SetStyle(local_c,bVar1);
      TFont_SetCharset(local_c,local_22[0]);
      (**(code **)(**(int **)(local_8 + 0x1c) + 8))(*(int **)(local_8 + 0x1c),local_c);
      *in_FS_OFFSET = uStack_80;
      puStack_78 = (undefined1 *)0x46d986;
      *(undefined1 *)(local_8 + 0x18) = 0;
      puStack_7c = (undefined1 *)0x46d97e;
      System_TObject_Free(local_c);
      return;
    }
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0046d9b3;
  puStack_38 = (undefined1 *)0x46d99b;
  System__LStrClr((int *)&local_2c);
  puStack_38 = (undefined1 *)0x46d9a3;
  System__IntfClear((int *)&local_28);
  puStack_38 = (undefined1 *)0x46d9ab;
  FUN_004042b4(&wide_char_str);
  return;
}


/* ==== 0046d9d0 TFontAdapter.virtual_000 ==== */

void TFontAdapter_virtual_000(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_18;
  LPCSTR multi_byte_str;
  OLECHAR local_10 [2];
  int *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10[0] = L'\0';
  local_10[1] = L'\0';
  multi_byte_str = (LPCSTR)0x0;
  local_18 = 0;
  puStack_20 = &LAB_0046db4e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(int *)(param_1 + 0xc) != 0)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    puStack_2c = &LAB_0046db21;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    FUN_00405894((int *)&local_c,*(undefined4 **)(param_1 + 0xc));
    TFont_GetName(*(int *)(local_8 + 0x1c),(int *)&multi_byte_str);
    FUN_004043f8(local_10,multi_byte_str);
    (**(code **)(*local_c + 0x10))();
    local_18 = TFont_GetSize(*(int *)(local_8 + 0x1c));
    (**(code **)(*local_c + 0x18))();
    TFont_GetStyle(*(int *)(local_8 + 0x1c));
    (**(code **)(*local_c + 0x20))();
    TFont_GetStyle(*(int *)(local_8 + 0x1c));
    (**(code **)(*local_c + 0x28))();
    TFont_GetStyle(*(int *)(local_8 + 0x1c));
    (**(code **)(*local_c + 0x30))();
    TFont_GetStyle(*(int *)(local_8 + 0x1c));
    (**(code **)(*local_c + 0x38))();
    TFont_GetCharset(*(int *)(local_8 + 0x1c));
    piVar1 = local_c;
    (**(code **)(*local_c + 0x48))();
    *in_FS_OFFSET = piVar1;
    *(undefined1 *)(local_8 + 0x18) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046db55;
  puStack_20 = (undefined1 *)0x46db3d;
  System__LStrClr((int *)&multi_byte_str);
  puStack_20 = (undefined1 *)0x46db45;
  FUN_004042b4((undefined4 *)local_10);
  puStack_20 = (undefined1 *)0x46db4d;
  System__IntfClear((int *)&local_c);
  return;
}


/* ==== 0046dd40 FUN_0046dd40 ==== */

int * FUN_0046dd40(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
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
  FUN_0046d5fc(param_1,'\0',param_3);
  param_1[7] = param_3;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0046dd7c TPictureAdapter.virtual_004 ==== */

void TPictureAdapter_virtual_004(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  puStack_10 = (undefined1 *)0x46dd98;
  local_8 = param_1;
  local_c = TGraphic_virtual_00c((int *)&PTR_TPersistent_virtual_000_0046d380,'\x01',param_3);
  puStack_14 = &LAB_0046ddea;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00405894(local_c + 8,*(undefined4 **)(local_8 + 0xc));
  FUN_0041b4a4(*(int **)(local_8 + 0x1c),local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046ddf1;
  *(undefined1 *)(local_8 + 0x18) = 0;
  puStack_14 = (undefined1 *)0x46dde9;
  System_TObject_Free(local_c);
  return;
}


/* ==== 0046e050 TOleGraphic.virtual_008 ==== */

void TOleGraphic_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_0046d380);
  if ((char)uVar1 != '\0') {
    FUN_00405878(param_1 + 8,(int *)param_2[8]);
    return;
  }
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 0046e084 TOleGraphic.virtual_010 ==== */

void TOleGraphic_virtual_010(void)

{
  return;
}


/* ==== 0046e088 TOleGraphic.virtual_014 ==== */

void TOleGraphic_virtual_014(int *param_1,int *param_2,RECT *lprect_val)

{
  HDC hdc;
  HPALETTE hPal;
  HPALETTE hPal_00;
  int iVar1;
  uint message_id;
  undefined4 *in_FS_OFFSET;
  int *piStack_3c;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  HENHMETAFILE hmf_val;
  short local_10;
  
  if (param_1[8] != 0) {
    puStack_24 = (undefined1 *)0x46e0ab;
    FUN_0041912c((int)param_2);
    puStack_28 = &LAB_0046e189;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    hdc = (HDC)FUN_004194d8(param_2);
    hPal = (HPALETTE)(**(code **)(*param_1 + 0x24))();
    hPal_00 = (HPALETTE)0x0;
    if (hPal != (HPALETTE)0x0) {
      hPal_00 = SelectPalette(hdc,hPal,-1);
      RealizePalette(hdc);
    }
    (**(code **)(*(int *)param_1[8] + 0x14))();
    if (local_10 == 4) {
      piStack_3c = (int *)param_1[8];
      (**(code **)(*piStack_3c + 0xc))();
      PlayEnhMetaFile(hdc,hmf_val,lprect_val);
    }
    else {
      iVar1 = FUN_0046e23c((int)param_1);
      piStack_3c = (int *)-iVar1;
      FUN_0046e258((int)param_1);
      FUN_0046e23c((int)param_1);
      message_id = (**(code **)(*(int *)param_1[8] + 0x20))();
      FUN_0046c2c0(message_id);
    }
    if (hPal != (HPALETTE)0x0) {
      SelectPalette(hdc,hPal_00,-1);
    }
    *in_FS_OFFSET = piStack_3c;
    FUN_004193d0((int)param_2);
    return;
  }
  return;
}


/* ==== 0046e198 TOleGraphic.virtual_01c ==== */

undefined4 TOleGraphic_virtual_01c(int param_1)

{
  int *piVar1;
  undefined2 uStack_10;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    param_1 = (**(code **)(*piVar1 + 0x14))();
    if ((param_1 == 0) && (uStack_10 = (short)piVar1, 0 < uStack_10)) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0046e1c4 FUN_0046e1c4 ==== */

void FUN_0046e1c4(LONG *param_1,LPPOINT lppt_val)

{
  LONG LVar1;
  LONG LVar2;
  HDC hdc;
  
  LVar1 = *param_1;
  LVar2 = param_1[1];
  hdc = GetDC((HWND)0x0);
  SetMapMode(hdc,3);
  lppt_val->x = LVar1;
  lppt_val->y = LVar2;
  lppt_val->y = -lppt_val->y;
  LPtoDP(hdc,lppt_val,1);
  ReleaseDC((HWND)0x0,hdc);
  return;
}


/* ==== 0046e20c TOleGraphic.virtual_020 ==== */

LONG TOleGraphic_virtual_020(int param_1)

{
  undefined4 uVar1;
  tagPOINT point;
  LONG local_c [2];
  
  uVar1 = FUN_0046e23c(param_1);
  Classes_Point(0,uVar1,local_c);
  FUN_0046e1c4(local_c,&point);
  return point.y;
}


/* ==== 0046e23c FUN_0046e23c ==== */

undefined4 FUN_0046e23c(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))();
  }
  return 0;
}


/* ==== 0046e258 FUN_0046e258 ==== */

undefined4 FUN_0046e258(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
  }
  return 0;
}


/* ==== 0046e274 TOleGraphic.virtual_024 ==== */

int * TOleGraphic_virtual_024(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    (**(code **)(*piVar1 + 0x10))();
  }
  return piVar1;
}


/* ==== 0046e290 TOleGraphic.virtual_028 ==== */

bool TOleGraphic_virtual_028(int param_1)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    (**(code **)(*piVar1 + 0x40))();
    bVar2 = ((uint)piVar1 & 2) != 0;
  }
  return bVar2;
}


/* ==== 0046e2b0 TOleGraphic.virtual_02c ==== */

LONG TOleGraphic_virtual_02c(int param_1)

{
  undefined4 uVar1;
  tagPOINT point;
  LONG local_c [2];
  
  uVar1 = FUN_0046e258(param_1);
  Classes_Point(uVar1,0,local_c);
  FUN_0046e1c4(local_c,&point);
  return point.x;
}


/* ==== 0046e2dc FUN_0046e2dc ==== */

void FUN_0046e2dc(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_Create((int *)&DAT_004166f4,'\x01',param_1);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 0046e2f4 TOleGraphic.virtual_034 ==== */

void TOleGraphic_virtual_034(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_0046e332;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  System_LoadResString((undefined4 *)PTR_PTR_004ab60c,(int *)&local_8);
  FUN_0046e2dc(local_8);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0046e339;
  puStack_10 = (undefined1 *)0x46e331;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0046e33c TOleGraphic.virtual_038 ==== */

void TOleGraphic_virtual_038(int param_1)

{
  uint message_id;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    message_id = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))();
    FUN_0046c2c0(message_id);
  }
  return;
}


/* ==== 0046e35c TOleGraphic.virtual_040 ==== */

void TOleGraphic_virtual_040(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_0046e39a;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  System_LoadResString((undefined4 *)PTR_PTR_004ab60c,(int *)&local_8);
  FUN_0046e2dc(local_8);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0046e3a1;
  puStack_10 = (undefined1 *)0x46e399;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0046e3a4 TOleGraphic.virtual_048 ==== */

void TOleGraphic_virtual_048(void)

{
  return;
}


/* ==== 0046e3a8 TOleGraphic.virtual_050 ==== */

void TOleGraphic_virtual_050(int param_1,int param_2)

{
  int *piVar1;
  uint message_id;
  
  System__IntfClear((int *)(param_1 + 0x20));
  piVar1 = FUN_00415fb8((int *)&PTR_TStreamAdapter_virtual_000_0040f384,'\x01',param_2,0);
  if (piVar1 != (int *)0x0) {
    piVar1 = piVar1 + 5;
  }
  message_id = FUN_0046e648(piVar1);
  FUN_0046c2c0(message_id);
  return;
}


/* ==== 0046e3f8 TOleGraphic.virtual_054 ==== */

void TOleGraphic_virtual_054(int param_1,int param_2)

{
  int *piVar1;
  uint message_id;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_0046e45f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00415fb8((int *)&PTR_TStreamAdapter_virtual_000_0040f384,'\x01',param_2,0);
  FUN_00405894((int *)&local_8,*(undefined4 **)(param_1 + 0x20));
  piVar1 = local_8;
  message_id = (**(code **)(*local_8 + 0x18))();
  FUN_0046c2c0(message_id);
  *in_FS_OFFSET = piVar1;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046e47c TOleGraphic.virtual_058 ==== */

void TOleGraphic_virtual_058(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_0046e4bb;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  System_LoadResString((undefined4 *)PTR_PTR_004ab60c,(int *)&local_8);
  FUN_0046e2dc(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046e4c2;
  puStack_14 = (undefined1 *)0x46e4ba;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0046e4c8 TOleGraphic.virtual_05c ==== */

void TOleGraphic_virtual_05c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_0046e507;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  System_LoadResString((undefined4 *)PTR_PTR_004ab60c,(int *)&local_8);
  FUN_0046e2dc(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046e50e;
  puStack_14 = (undefined1 *)0x46e506;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0046e514 FUN_0046e514 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e514(void)

{
  if (DAT_004ad1d0 == (HMODULE)0x0) {
    DAT_004ad1d0 = (HMODULE)FUN_0040c978("olepro32.dll",0x8000);
    if (DAT_004ad1d0 != (HMODULE)0x0) {
      _DAT_004ad1d4 = GetProcAddress(DAT_004ad1d0,"OleCreatePropertyFrame");
      _DAT_004ad1d8 = GetProcAddress(DAT_004ad1d0,"OleCreateFontIndirect");
      _DAT_004ad1dc = GetProcAddress(DAT_004ad1d0,"OleCreatePictureIndirect");
      DAT_004ad1e0 = GetProcAddress(DAT_004ad1d0,"OleLoadPicture");
    }
  }
  return;
}


/* ==== 0046e648 FUN_0046e648 ==== */

void FUN_0046e648(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = (undefined1 *)0x46e65d;
  local_8 = param_1;
  FUN_004058c0(param_1);
  puStack_18 = &LAB_0046e6a7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (DAT_004ad1e0 != (code *)0x0) {
    puStack_14 = &stack0xfffffffc;
    (*DAT_004ad1e0)();
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046e6ae;
  puStack_18 = (undefined1 *)0x46e6a6;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046e6b8 FUN_0046e6b8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e6b8(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0046e70d;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ad1c8 = _DAT_004ad1c8 + 1;
  if (_DAT_004ad1c8 == 0) {
    puVar1 = &stack0xfffffffc;
    if (DAT_004ad1cc != (HWND)0x0) {
      SendMessageA(DAT_004ad1cc,0x10,0,0);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    if (DAT_004ad1d0 != (HMODULE)0x0) {
      FreeLibrary(DAT_004ad1d0);
    }
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


