/* Menu.exe — units/Graphics.pas: 306 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0041756c FUN_0041756c ==== */

void FUN_0041756c(HGDIOBJ ho_val)

{
  if ((ho_val != (HGDIOBJ)0x0) && (ho_val != DAT_004ac650)) {
    DeleteObject(ho_val);
  }
  return;
}


/* ==== 004175e0 FUN_004175e0 ==== */

uint FUN_004175e0(byte *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    sVar1 = (short)uVar2 << 5;
    uVar2 = (uint)CONCAT11((char)((ushort)sVar1 >> 8),
                           ((byte)sVar1 | (byte)(uVar2 >> 8) >> 3) ^ *param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar2;
}


/* ==== 004175f4 FUN_004175f4 ==== */

int * FUN_004175f4(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
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
  *(short *)(param_1 + 8) = (short)param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00417630 TResourceManager.Destroy ==== */

void TResourceManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00417654 FUN_00417654 ==== */

void FUN_00417654(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 00417660 FUN_00417660 ==== */

void FUN_00417660(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 0041766c FUN_0041766c ==== */

void FUN_0041766c(int param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  
  puStack_18 = (undefined1 *)0x417687;
  uVar1 = FUN_004175e0(param_2,(uint)*(ushort *)(param_1 + 0x20));
  puStack_18 = (undefined1 *)0x417691;
  FUN_00417654(param_1);
  puStack_1c = &LAB_00417740;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  for (local_c = *(undefined4 **)(param_1 + 4); local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if ((short)uVar1 == *(short *)(local_c + 3)) {
      uVar2 = FUN_00408298(local_c + 4,(int *)param_2,(uint)*(ushort *)(param_1 + 0x20));
      if ((char)uVar2 != '\0') break;
    }
  }
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)System__GetMem(*(ushort *)(param_1 + 0x20) + 0x10);
    *local_c = *(undefined4 *)(param_1 + 4);
    local_c[1] = 0;
    local_c[2] = *(undefined4 *)param_2;
    *(short *)(local_c + 3) = (short)uVar1;
    System_Move((undefined4 *)param_2,local_c + 4,(uint)*(ushort *)(param_1 + 0x20));
    *(undefined4 **)(param_1 + 4) = local_c;
  }
  local_c[1] = local_c[1] + 1;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00417747;
  puStack_1c = (undefined1 *)0x41773f;
  FUN_00417660(param_1);
  return;
}


/* ==== 00417750 FUN_00417750 ==== */

void FUN_00417750(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 *local_14;
  undefined1 local_d;
  undefined4 *local_c;
  int local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puStack_18 = (undefined *)0x417774;
  local_14 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_00417654(param_1);
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_14[1] = local_14[1] + -1;
  local_d = local_14[1] == 0;
  if ((bool)local_d) {
    puVar1 = *(undefined4 **)(local_8 + 4);
    if (*(undefined4 **)(local_8 + 4) == local_c) {
      *(undefined4 *)(local_8 + 4) = *local_c;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = (undefined4 *)*puVar2;
      } while (puVar1 != local_c);
      *puVar2 = *local_c;
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &DAT_004177de;
  uStack_1c = 0x4177d6;
  FUN_00417660(local_8);
  return;
}


/* ==== 00417800 FUN_00417800 ==== */

void FUN_00417800(int param_1,int *param_2,byte *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x417819;
  FUN_00417654(param_1);
  puStack_20 = &LAB_00417869;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = (undefined4 *)param_2[4];
  puStack_1c = &stack0xfffffffc;
  puVar2 = (undefined4 *)FUN_0041766c(param_1,param_3);
  param_2[4] = (int)puVar2;
  if (puVar1 != puVar2) {
    System__CallDynaInst(param_2,extraout_EDX,extraout_ECX);
  }
  FUN_00417750(param_1,puVar1);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00417870;
  puStack_20 = (undefined1 *)0x417868;
  FUN_00417660(param_1);
  return;
}


/* ==== 00417878 FUN_00417878 ==== */

void FUN_00417878(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x41788e;
  FUN_00417654(param_1);
  puStack_1c = &LAB_004178d4;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = (undefined4 *)param_2[4];
  if (param_3 != puVar1) {
    param_3[1] = param_3[1] + 1;
    param_2[4] = (int)param_3;
    puStack_18 = &stack0xfffffffc;
    System__CallDynaInst(param_2,extraout_EDX,extraout_ECX);
    FUN_00417750(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004178db;
  puStack_1c = (undefined1 *)0x4178d3;
  FUN_00417660(param_1);
  return;
}


/* ==== 004178e4 FUN_004178e4 ==== */

void FUN_004178e4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4178f5;
  FUN_00417654(param_1);
  puStack_18 = &LAB_00417943;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (((HGDIOBJ)puVar1[2] != (HGDIOBJ)0x0) && ((int)puVar1[5] < 0)) {
      DeleteObject((HGDIOBJ)puVar1[2]);
      puVar1[2] = 0;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041794a;
  puStack_18 = (undefined1 *)0x417942;
  FUN_00417660(param_1);
  return;
}


/* ==== 00417950 FUN_00417950 ==== */

void FUN_00417950(void)

{
  undefined4 *puVar1;
  int iVar2;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int i_val;
  
  i_val = 0;
  puStack_18 = (undefined1 *)0x417967;
  puVar1 = (undefined4 *)FUN_00410750(DAT_004ac6a8);
  puStack_1c = &LAB_004179ed;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  while (i_val < (int)puVar1[2]) {
    j = Classes_TList_Get(puVar1,i_val);
    FUN_0041912c(j);
    i_val = i_val + 1;
    FUN_004194f8(j);
  }
  FUN_004178e4(DAT_004ac6a0);
  FUN_004178e4(DAT_004ac6a4);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004179f4;
  if (-1 < i_val + -1) {
    j = 0;
    do {
      puStack_1c = (undefined1 *)0x4179d9;
      iVar2 = Classes_TList_Get(puVar1,j);
      puStack_1c = (undefined1 *)0x4179de;
      FUN_004193d0(iVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  puStack_1c = (undefined1 *)0x4179ec;
  FUN_004107b4(DAT_004ac6a8);
  return;
}


/* ==== 00417d54 FUN_00417d54 ==== */

void FUN_00417d54(uint param_1)

{
  if ((int)param_1 < 0) {
    GetSysColor(param_1 & 0xff);
  }
  return;
}


/* ==== 00417d84 TGraphicsObject.dynamic_fffd ==== */

void TGraphicsObject_dynamic_fffd(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  return;
}


/* ==== 00417d98 FUN_00417d98 ==== */

void FUN_00417d98(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}


/* ==== 00417da8 FUN_00417da8 ==== */

void FUN_00417da8(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}


/* ==== 00417f8c FUN_00417f8c ==== */

void FUN_00417f8c(HANDLE h_val,undefined4 *param_2)

{
  int i_val;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_6c [4];
  int local_5c;
  char local_58;
  char local_57;
  char local_56;
  undefined1 local_55;
  byte local_51;
  char local_50 [32];
  byte local_30 [36];
  
  puVar1 = &DAT_004aa378;
  puVar2 = param_2;
  for (i_val = 0xb; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (h_val != (HANDLE)0x0) {
    i_val = GetObjectA(h_val,0x3c,local_6c);
    if (i_val != 0) {
      param_2[1] = local_6c[0];
      if (699 < local_5c) {
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_2 + 9) | 1;
      }
      if (local_58 == '\x01') {
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_2 + 9) | 2;
      }
      if (local_57 == '\x01') {
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_2 + 9) | 4;
      }
      if (local_56 == '\x01') {
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_2 + 9) | 8;
      }
      *(undefined1 *)((int)param_2 + 10) = local_55;
      FUN_00402d4c((char *)local_30,local_50,0x20);
      FUN_00402b0c((byte *)((int)param_2 + 0xb),local_30,0x1f);
      if ((local_51 & 0xf) == 1) {
        *(undefined1 *)(param_2 + 2) = 2;
      }
      else if ((local_51 & 0xf) == 2) {
        *(undefined1 *)(param_2 + 2) = 1;
      }
      else {
        *(undefined1 *)(param_2 + 2) = 0;
      }
      *param_2 = h_val;
    }
  }
  return;
}


/* ==== 00418040 FUN_00418040 ==== */

int * FUN_00418040(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  DAT_004aa378 = 0;
  iVar1 = FUN_0041766c(DAT_004ac69c,(byte *)&DAT_004aa378);
  param_1[4] = iVar1;
  param_1[6] = -0x7ffffff8;
  param_1[7] = DAT_004ac658;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00418094 TFont.Destroy ==== */

void TFont_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00417750(DAT_004ac69c,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004180bc TFont.dynamic_fffd ==== */

void TFont_dynamic_fffd(int param_1)

{
  TGraphicsObject_dynamic_fffd(param_1);
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
  }
  return;
}


/* ==== 004180d8 TFont.virtual_008 ==== */

void TFont_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int number;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4180f3;
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00416a80);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x418103;
    FUN_00417d98((int)param_1);
    puStack_18 = &LAB_00418193;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_20 = (undefined1 *)0x41811b;
    puStack_14 = &stack0xfffffffc;
    FUN_00417d98((int)param_2);
    puStack_24 = &LAB_00418176;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_00417878(DAT_004ac69c,param_1,(undefined4 *)param_2[4]);
    TFont_SetColor(param_1,param_2[6],extraout_ECX);
    if (param_1[7] != param_2[7]) {
      number = TFont_GetSize((int)param_2);
      TFont_SetSize(param_1,number);
    }
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_0041817d;
    puStack_24 = (undefined1 *)0x418175;
    FUN_00417da8((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x4181a5;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 004181ac FUN_004181ac ==== */

void FUN_004181ac(int param_1,undefined4 *param_2)

{
  int i_val;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  puVar2 = param_2;
  for (i_val = 0xb; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_2 = 0;
  return;
}


/* ==== 004181c4 FUN_004181c4 ==== */

void FUN_004181c4(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4181d6;
  FUN_00417d98((int)param_1);
  puStack_14 = &LAB_00418209;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00417800(DAT_004ac69c,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00418210;
  puStack_14 = (undefined1 *)0x418208;
  FUN_00417da8((int)param_1);
  return;
}


/* ==== 00418214 TFont.SetColor ==== */

void TFont_SetColor(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != param_1[6]) {
    param_1[6] = param_2;
    System__CallDynaInst(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00418228 FUN_00418228 ==== */

void FUN_00418228(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  HFONT pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  LOGFONTA logfont;
  int local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_50 = (undefined *)0x0;
  local_4c = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  puStack_5c = &LAB_004183b1;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_64 = (undefined1 *)0x418267;
    FUN_00417654(DAT_004ac69c);
    puStack_68 = &LAB_00418389;
    uStack_6c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_6c;
    if (*(int *)(local_8 + 8) == 0) {
      logfont.lfHeight = *(LONG *)(local_8 + 0x14);
      logfont.lfWidth = 0;
      logfont.lfEscapement = 0;
      logfont.lfOrientation = 0;
      if ((*(byte *)(local_8 + 0x19) & 1) == 0) {
        logfont.lfWeight = 400;
      }
      else {
        logfont.lfWeight = 700;
      }
      logfont.lfItalic = (*(byte *)(local_8 + 0x19) & 2) != 0;
      logfont.lfUnderline = (*(byte *)(local_8 + 0x19) & 4) != 0;
      logfont.lfStrikeOut = (*(byte *)(local_8 + 0x19) & 8) != 0;
      logfont.lfCharSet = *(BYTE *)(local_8 + 0x1a);
      puStack_64 = &stack0xfffffffc;
      System__LStrFromString((int *)&local_48,(byte *)(local_8 + 0x1b));
      iVar1 = FUN_00408364(local_48,"Default");
      if (iVar1 == 0) {
        System__LStrFromString((int *)&local_4c,(byte *)s_MS_Sans_Serif_004aa383);
        FUN_00408be8(logfont.lfFaceName,local_4c);
      }
      else {
        System__LStrFromString((int *)&local_50,(byte *)(local_8 + 0x1b));
        FUN_00408be8(logfont.lfFaceName,local_50);
      }
      logfont.lfQuality = '\0';
      logfont.lfOutPrecision = '\0';
      logfont.lfClipPrecision = '\0';
      uVar2 = TFont_GetPitch(param_1);
      if ((char)uVar2 == '\x01') {
        logfont.lfPitchAndFamily = '\x02';
      }
      else if ((char)uVar2 == '\x02') {
        logfont.lfPitchAndFamily = '\x01';
      }
      else {
        logfont.lfPitchAndFamily = '\0';
      }
      pHVar3 = CreateFontIndirectA(&logfont);
      *(HFONT *)(local_8 + 8) = pHVar3;
    }
    *in_FS_OFFSET = uStack_6c;
    puStack_64 = (undefined1 *)0x418390;
    puStack_68 = (undefined1 *)0x418388;
    FUN_00417660(DAT_004ac69c);
    return;
  }
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004183b8;
  puStack_5c = (undefined1 *)0x4183b0;
  System__LStrArrayClr((int *)&local_50,3);
  return;
}


/* ==== 004183d0 FUN_004183d0 ==== */

void FUN_004183d0(int *param_1,HANDLE h_val)

{
  byte abStack_34 [44];
  
  FUN_00417f8c(h_val,(undefined4 *)abStack_34);
  FUN_004181c4(param_1,abStack_34);
  return;
}


/* ==== 004183f4 TFont.GetHeight ==== */

undefined4 TFont_GetHeight(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
}


/* ==== 004183fc TFont.SetHeight ==== */

void TFont_SetHeight(int *param_1,undefined4 param_2)

{
  byte abStack_34 [4];
  undefined4 local_30;
  
  FUN_004181ac((int)param_1,(undefined4 *)abStack_34);
  local_30 = param_2;
  FUN_004181c4(param_1,abStack_34);
  return;
}


/* ==== 00418424 TFont.GetName ==== */

void TFont_GetName(int param_1,int *param_2)

{
  System__LStrFromString(param_2,(byte *)(*(int *)(param_1 + 0x10) + 0x1b));
  return;
}


/* ==== 0041843c TFont.SetName ==== */

void TFont_SetName(int *param_1,undefined4 *param_2)

{
  byte abStack_134 [11];
  byte local_129 [33];
  byte local_108 [256];
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_004181ac((int)param_1,(undefined4 *)abStack_134);
    System_FillChar((undefined4 *)local_129,0x20,0);
    FUN_00403eb8(local_108,param_2,0xff);
    FUN_00402b0c(local_129,local_108,0x1f);
    FUN_004181c4(param_1,abStack_134);
  }
  return;
}


/* ==== 00418498 TFont.GetSize ==== */

int TFont_GetSize(int param_1)

{
  int nNumber;
  int denominator;
  int nNumerator;
  
  denominator = *(int *)(param_1 + 0x1c);
  nNumerator = 0x48;
  nNumber = TFont_GetHeight(param_1);
  denominator = MulDiv(nNumber,nNumerator,denominator);
  return -denominator;
}


/* ==== 004184b4 TFont.SetSize ==== */

void TFont_SetSize(int *param_1,int number)

{
  int mul_div;
  
  mul_div = MulDiv(number,param_1[7],0x48);
  TFont_SetHeight(param_1,-mul_div);
  return;
}


/* ==== 004184d4 TFont.GetStyle ==== */

undefined1 TFont_GetStyle(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x19);
}


/* ==== 004184e0 TFont.SetStyle ==== */

void TFont_SetStyle(int *param_1,undefined1 param_2)

{
  byte local_30 [9];
  undefined1 local_27;
  
  FUN_004181ac((int)param_1,(undefined4 *)local_30);
  local_27 = param_2;
  FUN_004181c4(param_1,local_30);
  return;
}


/* ==== 0041850c TFont.GetPitch ==== */

undefined4 TFont_GetPitch(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x18));
}


/* ==== 00418514 TFont.SetPitch ==== */

void TFont_SetPitch(int *param_1,undefined1 param_2)

{
  byte abStack_34 [8];
  undefined1 local_2c;
  
  FUN_004181ac((int)param_1,(undefined4 *)abStack_34);
  local_2c = param_2;
  FUN_004181c4(param_1,abStack_34);
  return;
}


/* ==== 0041853c TFont.GetCharset ==== */

undefined4 TFont_GetCharset(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1a));
}


/* ==== 00418544 TFont.SetCharset ==== */

void TFont_SetCharset(int *param_1,undefined1 param_2)

{
  byte abStack_34 [10];
  undefined1 local_2a;
  
  FUN_004181ac((int)param_1,(undefined4 *)abStack_34);
  local_2a = param_2;
  FUN_004181c4(param_1,abStack_34);
  return;
}


/* ==== 0041856c FUN_0041856c ==== */

int * FUN_0041856c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_0041766c(DAT_004ac6a0,&DAT_004aa588);
  param_1[4] = iVar1;
  *(undefined1 *)(param_1 + 6) = 4;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004185b0 TPen.Destroy ==== */

void TPen_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00417750(DAT_004ac6a0,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004185d8 TPen.virtual_008 ==== */

void TPen_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4185f3;
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00416bfc);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x418603;
    FUN_00417d98((int)param_1);
    puStack_18 = &LAB_00418677;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_20 = (undefined1 *)0x41861b;
    puStack_14 = &stack0xfffffffc;
    FUN_00417d98((int)param_2);
    puStack_24 = &LAB_0041865a;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_00417878(DAT_004ac6a0,param_1,(undefined4 *)param_2[4]);
    TPen_SetMode(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2[6]),extraout_ECX);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_00418661;
    puStack_24 = (undefined1 *)0x418659;
    FUN_00417da8((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x418689;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 00418690 FUN_00418690 ==== */

void FUN_00418690(int param_1,undefined4 *param_2)

{
  int i_val;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  puVar2 = param_2;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_2 = 0;
  return;
}


/* ==== 004186a8 FUN_004186a8 ==== */

void FUN_004186a8(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4186ba;
  FUN_00417d98((int)param_1);
  puStack_14 = &LAB_004186ed;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00417800(DAT_004ac6a0,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004186f4;
  puStack_14 = (undefined1 *)0x4186ec;
  FUN_00417da8((int)param_1);
  return;
}


/* ==== 004186f8 TPen.GetColor ==== */

undefined4 TPen_GetColor(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
}


/* ==== 00418700 TPen.SetColor ==== */

void TPen_SetColor(int *param_1,undefined4 param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  
  FUN_00418690((int)param_1,(undefined4 *)abStack_18);
  local_14 = param_2;
  FUN_004186a8(param_1,abStack_18);
  return;
}


/* ==== 00418728 FUN_00418728 ==== */

undefined4 FUN_00418728(int param_1)

{
  HPEN pHVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  LOGPEN logpen;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_1c = (undefined1 *)0x418747;
    FUN_00417654(DAT_004ac6a0);
    puStack_20 = &LAB_004187ae;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    if (*(int *)(local_8 + 8) == 0) {
      logpen.lopnStyle = (UINT)*(ushort *)(&DAT_004aa598 + (uint)*(byte *)(local_8 + 0x1c) * 2);
      logpen.lopnWidth.x = *(LONG *)(local_8 + 0x18);
      puStack_1c = &stack0xfffffffc;
      logpen.lopnColor = FUN_00417d54(*(uint *)(local_8 + 0x14));
      pHVar1 = CreatePenIndirect(&logpen);
      *(HPEN *)(local_8 + 8) = pHVar1;
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4187b5;
    puStack_20 = (undefined1 *)0x4187ad;
    uVar2 = FUN_00417660(DAT_004ac6a0);
    return uVar2;
  }
  return *(undefined4 *)(local_8 + 8);
}


/* ==== 004187c0 TPen.SetMode ==== */

void TPen_SetMode(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[6]) {
    *(char *)(param_1 + 6) = (char)param_2;
    System__CallDynaInst(param_1,param_2,param_3);
  }
  return;
}


/* ==== 004187d4 TPen.GetStyle ==== */

undefined4 TPen_GetStyle(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1c));
}


/* ==== 004187dc TPen.SetStyle ==== */

void TPen_SetStyle(int *param_1,undefined1 param_2)

{
  byte abStack_18 [12];
  undefined1 local_c;
  
  FUN_00418690((int)param_1,(undefined4 *)abStack_18);
  local_c = param_2;
  FUN_004186a8(param_1,abStack_18);
  return;
}


/* ==== 00418804 TPen.GetWidth ==== */

undefined4 TPen_GetWidth(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18);
}


/* ==== 0041880c TPen.SetWidth ==== */

void TPen_SetWidth(int *param_1,int param_2)

{
  byte abStack_18 [8];
  int local_10;
  
  if (-1 < param_2) {
    FUN_00418690((int)param_1,(undefined4 *)abStack_18);
    local_10 = param_2;
    FUN_004186a8(param_1,abStack_18);
  }
  return;
}


/* ==== 00418838 FUN_00418838 ==== */

int * FUN_00418838(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_0041766c(DAT_004ac6a4,(byte *)&DAT_004aa5a8);
  param_1[4] = iVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00418878 TBrush.Destroy ==== */

void TBrush_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00417750(DAT_004ac6a4,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 004188a0 TBrush.virtual_008 ==== */

void TBrush_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4188bb;
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00416cfc);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x4188c7;
    FUN_00417d98((int)param_1);
    puStack_18 = &LAB_00418930;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_20 = (undefined1 *)0x4188df;
    puStack_14 = &stack0xfffffffc;
    FUN_00417d98((int)param_2);
    puStack_24 = &LAB_00418913;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_00417878(DAT_004ac6a4,param_1,(undefined4 *)param_2[4]);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_0041891a;
    puStack_24 = (undefined1 *)0x418912;
    FUN_00417da8((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x418942;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 00418948 FUN_00418948 ==== */

void FUN_00418948(int param_1,undefined4 *param_2)

{
  int i_val;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  puVar2 = param_2;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_2 = 0;
  param_2[2] = 0;
  return;
}


/* ==== 00418968 FUN_00418968 ==== */

void FUN_00418968(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41897a;
  FUN_00417d98((int)param_1);
  puStack_14 = &LAB_004189ad;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00417800(DAT_004ac6a4,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004189b4;
  puStack_14 = (undefined1 *)0x4189ac;
  FUN_00417da8((int)param_1);
  return;
}


/* ==== 004189b8 FUN_004189b8 ==== */

void FUN_004189b8(int *param_1,undefined4 param_2)

{
  int i_val;
  undefined4 *puVar1;
  byte *pbVar2;
  byte abStack_18 [8];
  undefined4 local_10;
  
  puVar1 = &DAT_004aa5a8;
  pbVar2 = abStack_18;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *(undefined4 *)pbVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    pbVar2 = (byte *)((int)pbVar2 + 4);
  }
  local_10 = param_2;
  FUN_00418968(param_1,abStack_18);
  return;
}


/* ==== 004189dc TBrush.GetColor ==== */

undefined4 TBrush_GetColor(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
}


/* ==== 004189e4 TBrush.SetColor ==== */

void TBrush_SetColor(int *param_1,undefined4 param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  char local_c;
  
  FUN_00418948((int)param_1,(undefined4 *)abStack_18);
  if (local_c == '\x01') {
    local_c = '\0';
  }
  local_14 = param_2;
  FUN_00418968(param_1,abStack_18);
  return;
}


/* ==== 00418a18 FUN_00418a18 ==== */

undefined4 FUN_00418a18(int param_1)

{
  byte bVar1;
  int *piVar2;
  HBRUSH pHVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  LOGBRUSH logbrush;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_18 = (undefined1 *)0x418a3b;
    FUN_00417654(DAT_004ac6a4);
    puStack_1c = &LAB_00418ae5;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    if (*(int *)(local_8 + 8) == 0) {
      piVar2 = *(int **)(local_8 + 0x18);
      if (piVar2 == (int *)0x0) {
        logbrush.lbHatch = 0;
        bVar1 = *(byte *)(local_8 + 0x1c);
        if (bVar1 == 0) {
          logbrush.lbStyle = 0;
          puStack_18 = &stack0xfffffffc;
        }
        else if (bVar1 == 1) {
          logbrush.lbStyle = 1;
          puStack_18 = &stack0xfffffffc;
        }
        else {
          logbrush.lbStyle = 2;
          logbrush.lbHatch = (bVar1 & 0x7f) - 2;
          puStack_18 = &stack0xfffffffc;
        }
      }
      else {
        logbrush.lbStyle = 3;
        puStack_18 = &stack0xfffffffc;
        (**(code **)(*piVar2 + 0x68))(piVar2,1);
        logbrush.lbHatch = (**(code **)(**(int **)(local_8 + 0x18) + 0x60))();
      }
      logbrush.lbColor = FUN_00417d54(*(uint *)(local_8 + 0x14));
      pHVar3 = CreateBrushIndirect(&logbrush);
      *(HBRUSH *)(local_8 + 8) = pHVar3;
    }
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x418aec;
    puStack_1c = (undefined1 *)0x418ae4;
    uVar4 = FUN_00417660(DAT_004ac6a4);
    return uVar4;
  }
  return *(undefined4 *)(local_8 + 8);
}


/* ==== 00418af8 TBrush.GetStyle ==== */

undefined4 TBrush_GetStyle(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1c));
}


/* ==== 00418b00 TBrush.SetStyle ==== */

void TBrush_SetStyle(int *param_1,char param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  char local_c;
  
  FUN_00418948((int)param_1,(undefined4 *)abStack_18);
  if (param_2 == '\x01') {
    local_14 = 0xffffff;
  }
  local_c = param_2;
  FUN_00418968(param_1,abStack_18);
  return;
}


/* ==== 00418b34 FUN_00418b34 ==== */

int * FUN_00418b34(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_00419720;
  piVar1[5] = (int)(param_1 + 0xe);
  piVar1 = FUN_0041856c((int *)&PTR_TPersistent_virtual_000_00416bfc,'\x01',extraout_ECX_01);
  param_1[4] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_00419740;
  piVar1[5] = (int)(param_1 + 0xe);
  piVar1 = FUN_00418838((int *)&PTR_TPersistent_virtual_000_00416cfc,'\x01',extraout_ECX_02);
  param_1[5] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_00419760;
  piVar1[5] = (int)(param_1 + 0xe);
  param_1[8] = 0xcc0020;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_004106c8(DAT_004ac6a8,(int)param_1);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00418bf8 TCanvas.Destroy ==== */

void TCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_00410764(DAT_004ac6a8,(int)piVar1);
  FUN_00419558(piVar1,0);
  System_TObject_Free((int *)piVar1[3]);
  System_TObject_Free((int *)piVar1[4]);
  System_TObject_Free((int *)piVar1[5]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0xe));
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00418c54 FUN_00418c54 ==== */

void FUN_00418c54(int *param_1,int *param_2,int *param_3,uint param_4,int *param_5)

{
  int dest;
  int hDest;
  int hSrc;
  uint uVar1;
  HGDIOBJ h;
  int *piVar2;
  undefined4 uVar3;
  int y_src;
  int iVar4;
  COLORREF color;
  COLORREF color_00;
  undefined4 extraout_ECX;
  int wSrc;
  undefined4 *in_FS_OFFSET;
  int xSrc;
  int wSrc_00;
  int hSrc_00;
  DWORD rop;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  HGDIOBJ h_val;
  int *local_28;
  HDC local_24;
  
  if (param_3 != (int *)0x0) {
    puStack_3c = (undefined1 *)0x418c7a;
    FUN_0041912c((int)param_1);
    puStack_40 = &LAB_00418efa;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    puStack_48 = (undefined1 *)0x418c90;
    puStack_3c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x10))();
    puStack_48 = (undefined1 *)0x418c9e;
    FUN_004195ac(param_1,9);
    puStack_48 = (undefined1 *)0x418ca6;
    dest = FUN_0041df1c(param_3);
    puStack_48 = (undefined1 *)0x418cab;
    FUN_0041912c(dest);
    puStack_4c = &LAB_00418ed5;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    dest = param_2[2] - *param_2;
    hDest = param_2[3] - param_2[1];
    wSrc = param_5[2] - *param_5;
    hSrc = param_5[3] - param_5[1];
    puStack_48 = &stack0xfffffffc;
    uVar1 = FUN_0041e000(param_3);
    if (uVar1 == param_4) {
      local_28 = (int *)0x0;
      h = (HGDIOBJ)(**(code **)(*param_3 + 100))();
      local_24 = CreateCompatibleDC((HDC)0x0);
      h_val = SelectObject(local_24,h);
    }
    else {
      local_28 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',
                                     extraout_ECX);
      (**(code **)(*local_28 + 8))(local_28,param_3);
      FUN_0041e0e4(local_28,param_4);
      piVar2 = (int *)FUN_0041df1c(local_28);
      FUN_004195ac(piVar2,1);
      y_src = FUN_0041df1c(local_28);
      local_24 = *(HDC *)(y_src + 4);
      h_val = (HGDIOBJ)0x0;
    }
    uVar5 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffa4;
    piVar2 = (int *)FUN_0041df1c(param_3);
    FUN_004195ac(piVar2,1);
    uVar3 = TBrush_GetStyle(param_1[5]);
    if ((char)uVar3 == '\x01') {
      y_src = FUN_0041df1c(param_3);
      FUN_00419a74((HDC)param_1[1],*param_2,param_2[1],param_5[1],*param_5,local_24,hSrc,wSrc,
                   param_5[1],*param_5,*(HDC *)(y_src + 4),hDest,dest);
    }
    else {
      rop = 0xcc0020;
      y_src = param_5[1];
      xSrc = *param_5;
      wSrc_00 = wSrc;
      hSrc_00 = hSrc;
      iVar4 = FUN_0041df1c(param_3);
      StretchBlt((HDC)param_1[1],*param_2,param_2[1],dest,hDest,*(HDC *)(iVar4 + 4),xSrc,y_src,
                 wSrc_00,hSrc_00,rop);
      color = SetTextColor((HDC)param_1[1],0);
      color_00 = SetBkColor((HDC)param_1[1],0xffffff);
      StretchBlt((HDC)param_1[1],*param_2,param_2[1],dest,hDest,local_24,*param_5,param_5[1],wSrc,
                 hSrc,0xe20746);
      SetTextColor((HDC)param_1[1],color);
      SetBkColor((HDC)param_1[1],color_00);
    }
    *in_FS_OFFSET = uVar5;
    if (local_28 == (int *)0x0) {
      if (h_val != (HGDIOBJ)0x0) {
        SelectObject(local_24,h_val);
      }
      DeleteDC(local_24);
    }
    else {
      System_TObject_Free(local_28);
    }
    return;
  }
  return;
}


/* ==== 00418f14 FUN_00418f14 ==== */

void FUN_00418f14(int *param_1,int *param_2,int *param_3,int *param_4)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xb);
  FUN_004195ac(param_3,9);
  StretchBlt((HDC)param_1[1],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],
             (HDC)param_3[1],*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],
             param_1[8]);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 00418f9c FUN_00418f9c ==== */

void FUN_00418f9c(int *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  COLORREF CVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_18 [4];
  int local_8;
  
  if (param_4 != (int *)0x0) {
    local_8 = param_3;
    cVar1 = (**(code **)(*param_4 + 0x1c))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x10))();
      FUN_004195ac(param_1,1);
      uVar2 = TBrush_GetColor(param_1[5]);
      CVar3 = FUN_00417d54(uVar2);
      SetBkColor((HDC)param_1[1],CVar3);
      CVar3 = FUN_00417d54(*(uint *)(param_1[3] + 0x18));
      SetTextColor((HDC)param_1[1],CVar3);
      iVar4 = (**(code **)(*param_4 + 0x20))();
      iVar4 = iVar4 + local_8;
      puVar6 = local_18;
      iVar5 = (**(code **)(*param_4 + 0x2c))();
      Classes_Rect(param_2,local_8,iVar5 + param_2,puVar6,iVar4);
      (**(code **)(*param_4 + 0x14))(param_4,param_1,local_18);
      (**(code **)(*param_1 + 0xc))();
    }
  }
  return;
}


/* ==== 00419048 FUN_00419048 ==== */

void FUN_00419048(int *param_1,RECT *lprc_val)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,9);
  DrawFocusRect((HDC)param_1[1],lprc_val);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 0041907c FUN_0041907c ==== */

void FUN_0041907c(int *param_1,RECT *lprc_val)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,9);
  hbr = (HBRUSH)FUN_00418a18(param_1[5]);
  FillRect((HDC)param_1[1],lprc_val,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 004190b8 FUN_004190b8 ==== */

void FUN_004190b8(int *param_1,RECT *lprc_val)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,9);
  hbr = (HBRUSH)FUN_00418a18(param_1[5]);
  FrameRect((HDC)param_1[1],lprc_val,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 004190f4 FUN_004190f4 ==== */

void FUN_004190f4(int *param_1,int x_val,int y_val)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xd);
  LineTo((HDC)param_1[1],x_val,y_val);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 0041912c FUN_0041912c ==== */

void FUN_0041912c(int param_1)

{
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac684);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac684);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}


/* ==== 00419154 FUN_00419154 ==== */

void FUN_00419154(int *param_1,int x_val,int y_val)

{
  FUN_004195ac(param_1,1);
  MoveToEx((HDC)param_1[1],x_val,y_val,(LPPOINT)0x0);
  return;
}


/* ==== 00419180 FUN_00419180 ==== */

void FUN_00419180(int *param_1,POINT *apt_val,int param_3)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xd);
  Polyline((HDC)param_1[1],apt_val,param_3 + 1);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 004191b8 FUN_004191b8 ==== */

void FUN_004191b8(int *param_1,int left_val,int top_val,int bottom_val,int right_val)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xd);
  Rectangle((HDC)param_1[1],left_val,top_val,right_val,bottom_val);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 00419200 FUN_00419200 ==== */

void FUN_00419200(int *param_1,undefined4 param_2,int *param_3)

{
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_1 + 0x10))();
    FUN_004195ac(param_1,0xf);
    (**(code **)(*param_3 + 0x14))(param_3,param_1,param_2);
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}


/* ==== 0041923c FUN_0041923c ==== */

undefined4 FUN_0041923c(int *param_1)

{
  HDC hdc;
  undefined4 uVar1;
  tagPOINT *lppoint;
  tagPOINT point;
  
  lppoint = &point;
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0x15) & 0x80) != 0) {
    hdc = (HDC)FUN_004194d8(param_1);
    GetWindowOrgEx(hdc,lppoint);
    if (point.x != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* ==== 00419268 FUN_00419268 ==== */

void FUN_00419268(int *param_1,int x_val,int param_3,undefined *param_4)

{
  undefined4 uVar1;
  LONG LVar2;
  UINT c;
  LPCSTR lpString;
  INT *lpDx;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xb);
  uVar1 = FUN_0041923c(param_1);
  if ((char)uVar1 == '\x01') {
    LVar2 = FUN_00419338(param_1,param_4);
    x_val = x_val + LVar2 + 1;
  }
  lpDx = (INT *)0x0;
  c = System__LStrLen((int)param_4);
  lpString = System__LStrToPChar(param_4);
  ExtTextOutA((HDC)param_1[1],x_val,param_3,param_1[0x15],(RECT *)0x0,lpString,c,lpDx);
  LVar2 = FUN_00419338(param_1,param_4);
  FUN_00419154(param_1,LVar2 + x_val,param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 004192f4 FUN_004192f4 ==== */

void FUN_004192f4(int *param_1,undefined *param_2,LPSIZE psizl_val)

{
  int c;
  LPCSTR lpString;
  
  FUN_004195ac(param_1,3);
  psizl_val->cx = 0;
  psizl_val->cy = 0;
  c = System__LStrLen((int)param_2);
  lpString = System__LStrToPChar(param_2);
  GetTextExtentPoint32A((HDC)param_1[1],lpString,c,psizl_val);
  return;
}


/* ==== 00419338 FUN_00419338 ==== */

LONG FUN_00419338(int *param_1,undefined *param_2)

{
  tagSIZE size;
  
  FUN_004192f4(param_1,param_2,&size);
  return size.cx;
}


/* ==== 00419354 FUN_00419354 ==== */

LONG FUN_00419354(int *param_1,undefined *param_2)

{
  tagSIZE size;
  
  FUN_004192f4(param_1,param_2,&size);
  return size.cy;
}


/* ==== 00419374 FUN_00419374 ==== */

void FUN_00419374(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac684);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0041912c(param_1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x4193bf;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac684);
  return;
}


/* ==== 004193d0 FUN_004193d0 ==== */

void FUN_004193d0(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac684);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac684);
  return;
}


/* ==== 004193f8 TCanvas.SetFont ==== */

void TCanvas_SetFont(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  return;
}


/* ==== 00419408 TCanvas.SetPen ==== */

void TCanvas_SetPen(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  return;
}


/* ==== 00419414 TCanvas.SetBrush ==== */

void TCanvas_SetBrush(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  return;
}


/* ==== 00419420 FUN_00419420 ==== */

void FUN_00419420(int *param_1,LPPOINT lppt_val)

{
  FUN_004195ac(param_1,1);
  GetCurrentPositionEx((HDC)param_1[1],lppt_val);
  return;
}


/* ==== 00419444 FUN_00419444 ==== */

void FUN_00419444(int *param_1,int *param_2)

{
  FUN_00419154(param_1,*param_2,param_2[1]);
  return;
}


/* ==== 00419464 FUN_00419464 ==== */

void FUN_00419464(int *param_1,int x_val,int y_val)

{
  FUN_004195ac(param_1,1);
  GetPixel((HDC)param_1[1],x_val,y_val);
  return;
}


/* ==== 00419490 FUN_00419490 ==== */

void FUN_00419490(int *param_1,int x_val,int y_val,uint param_4)

{
  COLORREF color;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,5);
  color = FUN_00417d54(param_4);
  SetPixel((HDC)param_1[1],x_val,y_val,color);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 004194d8 FUN_004194d8 ==== */

int FUN_004194d8(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xf);
  return param_1[1];
}


/* ==== 004194f8 FUN_004194f8 ==== */

void FUN_004194f8(int param_1)

{
  if ((*(HDC *)(param_1 + 4) != (HDC)0x0) &&
     (*(byte *)(param_1 + 8) != (*(byte *)(param_1 + 8) & 0xf1))) {
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac65c);
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac660);
    SelectObject(*(HDC *)(param_1 + 4),DAT_004ac664);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf1;
  }
  return;
}


/* ==== 00419554 TCanvas.virtual_014 ==== */

void TCanvas_virtual_014(void)

{
  return;
}


/* ==== 00419558 FUN_00419558 ==== */

void FUN_00419558(int *param_1,int param_2)

{
  tagPOINT point;
  
  if (param_2 != param_1[1]) {
    if (param_1[1] != 0) {
      FUN_004194f8((int)param_1);
      FUN_00419420(param_1,&point);
      param_1[6] = point.x;
      param_1[7] = point.y;
      param_1[1] = 0;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    }
    if (param_2 != 0) {
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
      param_1[1] = param_2;
      FUN_00419444(param_1,param_1 + 6);
    }
  }
  return;
}


/* ==== 004195ac FUN_004195ac ==== */

void FUN_004195ac(int *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  
  bVar2 = ~*(byte *)(param_1 + 2) & param_2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x14))();
      if (param_1[1] == 0) {
        piVar1 = SysUtils_Exception_CreateRes
                           ((int *)&DAT_0040ea0c,'\x01',(undefined4 *)PTR_PTR_004ab778);
        System__RaiseExcept(piVar1);
      }
    }
    if ((bVar2 & 2) != 0) {
      FUN_00419648((int)param_1);
    }
    if ((bVar2 & 4) != 0) {
      FUN_00419674((int)param_1);
    }
    if ((bVar2 & 8) != 0) {
      FUN_004196a4((int)param_1);
    }
    *(byte *)(param_1 + 2) = bVar2 | *(byte *)(param_1 + 2);
  }
  return;
}


/* ==== 00419620 TCanvas.virtual_010 ==== */

void TCanvas_virtual_010(int param_1)

{
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
  }
  return;
}


/* ==== 00419634 TCanvas.virtual_00c ==== */

void TCanvas_virtual_00c(int param_1)

{
  if (*(short *)(param_1 + 0x2a) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  return;
}


/* ==== 00419648 FUN_00419648 ==== */

void FUN_00419648(int param_1)

{
  HGDIOBJ h;
  COLORREF color;
  
  h = (HGDIOBJ)FUN_00418228(*(int *)(param_1 + 0xc));
  SelectObject(*(HDC *)(param_1 + 4),h);
  color = FUN_00417d54(*(uint *)(*(int *)(param_1 + 0xc) + 0x18));
  SetTextColor(*(HDC *)(param_1 + 4),color);
  return;
}


/* ==== 00419674 FUN_00419674 ==== */

void FUN_00419674(int param_1)

{
  HGDIOBJ h;
  
  h = (HGDIOBJ)FUN_00418728(*(int *)(param_1 + 0x10));
  SelectObject(*(HDC *)(param_1 + 4),h);
  SetROP2(*(HDC *)(param_1 + 4),
          (uint)*(ushort *)(&DAT_004aa5b8 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x18) * 2));
  return;
}


/* ==== 004196a4 FUN_004196a4 ==== */

void FUN_004196a4(int param_1)

{
  HGDIOBJ h_val;
  undefined4 uVar1;
  uint uVar2;
  COLORREF color;
  
  h_val = (HGDIOBJ)FUN_00418a18(*(int *)(param_1 + 0x14));
  UnrealizeObject(h_val);
  h_val = (HGDIOBJ)FUN_00418a18(*(int *)(param_1 + 0x14));
  SelectObject(*(HDC *)(param_1 + 4),h_val);
  uVar1 = TBrush_GetStyle(*(int *)(param_1 + 0x14));
  if ((char)uVar1 == '\0') {
    uVar2 = TBrush_GetColor(*(int *)(param_1 + 0x14));
    color = FUN_00417d54(uVar2);
    SetBkColor(*(HDC *)(param_1 + 4),color);
    SetBkMode(*(HDC *)(param_1 + 4),2);
    return;
  }
  uVar2 = TBrush_GetColor(*(int *)(param_1 + 0x14));
  uVar2 = FUN_00417d54(uVar2);
  SetBkColor(*(HDC *)(param_1 + 4),~uVar2);
  SetBkMode(*(HDC *)(param_1 + 4),1);
  return;
}


/* ==== 00419780 FUN_00419780 ==== */

void FUN_00419780(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_CreateRes((int *)&DAT_004166f4,'\x01',param_1);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 00419798 FUN_00419798 ==== */

void FUN_00419798(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = SysUtils_Exception_CreateRes((int *)&DAT_00416698,'\x01',param_1);
  System__RaiseExcept(piVar1);
  return;
}


/* ==== 004197b0 FUN_004197b0 ==== */

void FUN_004197b0(void)

{
  FUN_00419798((undefined4 *)PTR_PTR_004ab734);
  return;
}


/* ==== 004197bc FUN_004197bc ==== */

void FUN_004197bc(void)

{
  FUN_00419798((undefined4 *)PTR_PTR_004ab744);
  return;
}


/* ==== 004197c8 FUN_004197c8 ==== */

void FUN_004197c8(void)

{
  FUN_00419798((undefined4 *)PTR_PTR_004ab8dc);
  return;
}


/* ==== 004197d4 FUN_004197d4 ==== */

void FUN_004197d4(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_0041981e;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  System_LoadResString((undefined4 *)PTR_PTR_004ab670,(int *)&local_8);
  piVar1 = SysUtils_Exception_Create((int *)&DAT_0040e9b0,'\x01',local_8);
  System__RaiseExcept(piVar1);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00419825;
  puStack_10 = (undefined1 *)0x41981d;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00419828 FUN_00419828 ==== */

void FUN_00419828(void)

{
  DWORD DVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  undefined4 *local_108;
  CHAR local_104 [256];
  
  puStack_110 = &stack0xfffffffc;
  local_108 = (undefined4 *)0x0;
  puStack_114 = &LAB_004198c4;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0x400,local_104,0x100,(va_list *)0x0);
    if (DVar1 != 0) {
      FUN_00403e8c((int *)&local_108,local_104,0x100);
      piVar2 = SysUtils_Exception_Create((int *)&DAT_0040e9b0,'\x01',local_108);
      System__RaiseExcept(piVar2);
      goto LAB_004198ab;
    }
  }
  FUN_004197d4();
LAB_004198ab:
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_004198cb;
  puStack_114 = (undefined1 *)0x4198c3;
  System__LStrClr((int *)&local_108);
  return;
}


/* ==== 004198d0 FUN_004198d0 ==== */

int FUN_004198d0(int param_1)

{
  if (param_1 == 0) {
    FUN_00419828();
  }
  return param_1;
}


/* ==== 004198e0 FUN_004198e0 ==== */

void FUN_004198e0(HANDLE param_1,int *param_2,char param_3)

{
  HGDIOBJ h;
  HGDIOBJ h_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uStack_50;
  undefined1 local_38 [4];
  int src;
  int src_2;
  HDC local_20;
  HDC local_1c;
  HDC local_18;
  HBITMAP h_val;
  int local_10;
  int local_c;
  HANDLE h_val_2;
  
  local_10 = *param_2;
  local_c = param_2[1];
  h_val_2 = param_1;
  local_1c = CreateCompatibleDC((HDC)0x0);
  local_20 = CreateCompatibleDC((HDC)0x0);
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  GetObjectA(h_val_2,0x18,local_38);
  if (param_3 != '\0') {
    h_val = CreateBitmap(local_10,local_c,1,1,(void *)0x0);
    if (h_val != (HBITMAP)0x0) {
      h = SelectObject(local_1c,h_val_2);
      h_00 = SelectObject(local_20,h_val);
      StretchBlt(local_20,0,0,local_10,local_c,local_1c,0,0,src,src_2,0xcc0020);
      if (h != (HGDIOBJ)0x0) {
        SelectObject(local_1c,h);
      }
      if (h_00 != (HGDIOBJ)0x0) {
        SelectObject(local_20,h_00);
      }
    }
    *in_FS_OFFSET = uStack_50;
    uStack_50 = 0x419a24;
    DeleteDC(local_1c);
    uStack_50 = 0x419a2d;
    DeleteDC(local_20);
    return;
  }
  local_18 = GetDC((HWND)0x0);
  if (local_18 == (HDC)0x0) {
    FUN_00419828();
  }
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa4;
  h_val = CreateCompatibleBitmap(local_18,local_10,local_c);
  if (h_val == (HBITMAP)0x0) {
    FUN_00419828();
  }
  *in_FS_OFFSET = uVar1;
  ReleaseDC((HWND)0x0,local_18);
  return;
}


/* ==== 00419a40 FUN_00419a40 ==== */

int FUN_00419a40(short param_1)

{
  if (((param_1 != 1) && (param_1 != 4)) && (param_1 != 8)) {
    return 0;
  }
  return 1 << ((byte)param_1 & 0x1f);
}


/* ==== 00419a60 FUN_00419a60 ==== */

int FUN_00419a60(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 * param_2 + (param_3 - 1U) & ~(param_3 - 1U);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 7;
  }
  return (int)uVar1 >> 3;
}


/* ==== 00419a74 FUN_00419a74 ==== */

void FUN_00419a74(HDC param_1,int x_dest,int y_dest,int param_4,int param_5,HDC param_6,int param_7,
                 int param_8,int y_src,int x_src,HDC param_11,int param_12,int param_13)

{
  HBITMAP pHVar1;
  HGDIOBJ pvVar2;
  uint rop;
  HDC pHVar3;
  HGDIOBJ h;
  HPALETTE hPal;
  COLORREF color;
  COLORREF color_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  HPALETTE pal;
  
  if (((*(int *)PTR_DAT_004aba10 == 2) && (param_8 == param_13)) && (param_7 == param_12)) {
    pHVar1 = CreateCompatibleBitmap(param_11,1,1);
    pvVar2 = (HGDIOBJ)FUN_004198d0((int)pHVar1);
    pHVar1 = SelectObject(param_6,pvVar2);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    rop = FUN_004070dc(0xaa0029,0xcc0020);
    MaskBlt(param_1,x_dest,y_dest,param_13,param_12,param_11,x_src,y_src,pHVar1,param_5,param_4,rop)
    ;
    *in_FS_OFFSET = uVar4;
    pvVar2 = SelectObject(param_6,pHVar1);
    DeleteObject(pvVar2);
    return;
  }
  pHVar3 = CreateCompatibleDC((HDC)0x0);
  pHVar3 = (HDC)FUN_004198d0((int)pHVar3);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc0;
  pHVar1 = CreateCompatibleBitmap(param_11,param_8,param_7);
  pvVar2 = (HGDIOBJ)FUN_004198d0((int)pHVar1);
  h = SelectObject(pHVar3,pvVar2);
  hPal = SelectPalette(param_11,DAT_004ac650,0);
  SelectPalette(param_11,hPal,0);
  if (hPal == (HPALETTE)0x0) {
    pal = SelectPalette(pHVar3,DAT_004ac650,-1);
  }
  else {
    pal = SelectPalette(pHVar3,hPal,-1);
  }
  RealizePalette(pHVar3);
  StretchBlt(pHVar3,0,0,param_8,param_7,param_6,param_5,param_4,param_8,param_7,0xcc0020);
  StretchBlt(pHVar3,0,0,param_8,param_7,param_11,x_src,y_src,param_8,param_7,0x440328);
  color = SetTextColor(param_1,0);
  color_00 = SetBkColor(param_1,0xffffff);
  StretchBlt(param_1,x_dest,y_dest,param_13,param_12,param_6,param_5,param_4,param_8,param_7,
             0x8800c6);
  StretchBlt(param_1,x_dest,y_dest,param_13,param_12,pHVar3,0,0,param_8,param_7,0x660046);
  SetTextColor(param_1,color);
  SetBkColor(param_1,color_00);
  if (h != (HGDIOBJ)0x0) {
    SelectObject(pHVar3,h);
  }
  DeleteObject(pvVar2);
  *in_FS_OFFSET = uVar4;
  if (pal != (HPALETTE)0x0) {
    SelectPalette(pHVar3,pal,0);
  }
  DeleteDC(pHVar3);
  return;
}


/* ==== 00419d08 FUN_00419d08 ==== */

void FUN_00419d08(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int i_val;
  
  i_val = 0xff;
  do {
    puVar1 = (undefined1 *)(param_1 + i_val * 4);
    puVar2 = (undefined1 *)(param_1 + i_val * 3);
    puVar1[2] = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[3] = 0;
    i_val = i_val + -1;
  } while (i_val != 0);
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


/* ==== 00419d40 FUN_00419d40 ==== */

void FUN_00419d40(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int j;
  int i_val;
  
  i_val = *param_2 + -1;
  if (0 < i_val) {
    j = 1;
    do {
      puVar1 = (undefined1 *)(param_1 + j * 4);
      puVar2 = (undefined1 *)(param_1 + j * 3);
      puVar2[2] = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = *puVar1;
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if (*param_2 < 0x100) {
    System_FillChar((undefined4 *)(param_1 + *param_2 * 3),(0x100 - *param_2) * 3,0);
    *param_2 = 0x100;
  }
  return;
}


/* ==== 00419db8 FUN_00419db8 ==== */

void FUN_00419db8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  _SYSTEM_INFO system_info;
  int i_val;
  int local_8;
  
  i_val = param_2;
  local_8 = param_1;
  GetSystemInfo(&system_info);
  i_val = i_val + -1;
  if (-1 < i_val) {
    if (system_info.wProcessorLevel == 3) {
      do {
        uVar2 = *(undefined4 *)(local_8 + i_val * 4);
        *(uint *)(local_8 + i_val * 4) =
             (uint)CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                            (char)((uint)uVar2 >> 0x10));
        i_val = i_val + -1;
      } while (-1 < i_val);
    }
    else {
      do {
        uVar1 = *(uint *)(local_8 + i_val * 4);
        *(uint *)(local_8 + i_val * 4) =
             ((uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 8;
        i_val = i_val + -1;
      } while (-1 < i_val);
    }
  }
  return;
}


/* ==== 00419e10 FUN_00419e10 ==== */

void FUN_00419e10(undefined4 *param_1)

{
  int device_caps;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  tagPALETTEENTRY local_408 [7];
  tagPALETTEENTRY paletteentry;
  tagPALETTEENTRY local_3e8;
  tagPALETTEENTRY local_3e4 [247];
  HDC local_8;
  
  System_Move(param_1,local_408,0x40);
  local_8 = GetDC((HWND)0x0);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffbe4;
  device_caps = GetDeviceCaps(local_8,0x68);
  if (0xf < device_caps) {
    GetSystemPaletteEntries(local_8,0,8,local_408);
    if (paletteentry == (tagPALETTEENTRY)0xc0c0c0) {
      GetSystemPaletteEntries(local_8,device_caps - 8,1,&paletteentry);
      GetSystemPaletteEntries(local_8,device_caps - 7,7,local_3e4);
      GetSystemPaletteEntries(local_8,7,1,&local_3e8);
    }
    else {
      GetSystemPaletteEntries(local_8,device_caps - 8,8,&local_3e8);
    }
  }
  *in_FS_OFFSET = uVar1;
  ReleaseDC((HWND)0x0,local_8);
  return;
}


/* ==== 00419f28 FUN_00419f28 ==== */

int FUN_00419f28(int param_1)

{
  HDC hdc;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (DAT_004ac650 != (HPALETTE)0x0) {
    hdc = GetDC((HWND)0x0);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe4;
    iVar1 = GetDeviceCaps(hdc,0x68);
    if (0xf < iVar1) {
      GetPaletteEntries(DAT_004ac650,0,8,(LPPALETTEENTRY)(param_1 + 4));
      GetPaletteEntries(DAT_004ac650,8,8,
                        (LPPALETTEENTRY)(param_1 + -0x1c + (uint)*(ushort *)(param_1 + 2) * 4));
    }
    *in_FS_OFFSET = uVar2;
    iVar1 = ReleaseDC((HWND)0x0,hdc);
    return iVar1;
  }
  return param_1 & 0xffffff00;
}


/* ==== 00419fc0 FUN_00419fc0 ==== */

HPALETTE FUN_00419fc0(HGDIOBJ h_val,undefined4 *param_2,int param_3)

{
  HDC hdc;
  HGDIOBJ h;
  UINT UVar1;
  int iVar2;
  HPALETTE pHVar3;
  LOGPALETTE local_410 [128];
  
  local_410[0].palVersion = 0x300;
  if (h_val == (HGDIOBJ)0x0) {
    local_410[0].palNumEntries = (WORD)param_3;
    System_Move(param_2,local_410[0].palPalEntry,param_3 << 2);
  }
  else {
    hdc = CreateCompatibleDC((HDC)0x0);
    h = SelectObject(hdc,h_val);
    UVar1 = GetDIBColorTable(hdc,0,0x100,(RGBQUAD *)local_410[0].palPalEntry);
    local_410[0].palNumEntries = (WORD)UVar1;
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  if (local_410[0].palNumEntries != 0) {
    if ((local_410[0].palNumEntries != 0x10) ||
       (iVar2 = FUN_00419f28((int)local_410), (char)iVar2 == '\0')) {
      FUN_00419db8((int)local_410[0].palPalEntry,(uint)local_410[0].palNumEntries);
    }
    pHVar3 = CreatePalette(local_410);
    return pHVar3;
  }
  return (HPALETTE)0x0;
}


/* ==== 0041a064 FUN_0041a064 ==== */

UINT FUN_0041a064(HPALETTE param_1,LPPALETTEENTRY pal_entries,int param_3)

{
  int object;
  UINT c_entries;
  
  c_entries = 0;
  if (param_1 != (HPALETTE)0x0) {
    object = GetObjectA(param_1,4,&c_entries);
    if ((object != 0) && (c_entries != 0)) {
      if ((int)(param_3 + 1U) < (int)c_entries) {
        c_entries = param_3 + 1U;
      }
      GetPaletteEntries(param_1,0,c_entries,pal_entries);
      FUN_00419db8((int)pal_entries,c_entries);
    }
  }
  return c_entries;
}


/* ==== 0041a0b8 FUN_0041a0b8 ==== */

void FUN_0041a0b8(BITMAPINFOHEADER *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  HDC hdc;
  HBITMAP pHVar2;
  HANDLE ho;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  
  param_1->biHeight = (uint)param_1->biHeight >> 1;
  iVar1 = FUN_00419a60(param_1->biWidth,(uint)param_1->biBitCount,0x20);
  param_1->biSizeImage = iVar1 * param_1->biHeight;
  iVar1 = FUN_00419a40(param_1->biBitCount);
  puStack_2c = (undefined1 *)0x41a107;
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_004197d4();
  }
  puStack_2c = &LAB_0041a264;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pHVar2 = CreateDIBitmap(hdc,param_1,4,&param_1[1].biSize + iVar1,(BITMAPINFO *)param_1,0);
  ho = (HANDLE)FUN_004198d0((int)pHVar2);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  uVar3 = FUN_004198e0(ho,param_4,'\0');
  *param_2 = uVar3;
  *in_FS_OFFSET = uVar4;
  DeleteObject(ho);
  return;
}


/* ==== 0041a274 FUN_0041a274 ==== */

int FUN_0041a274(int param_1)

{
  if (param_1 == 0) {
    param_1 = 0x7fffffff;
  }
  return param_1;
}


/* ==== 0041a280 FUN_0041a280 ==== */

undefined4 FUN_0041a280(byte *param_1,byte *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)*param_2 - **(int **)(param_4 + 8);
  uVar5 = (uint)param_2[1] - *(int *)(*(int *)(param_4 + 8) + 4);
  uVar6 = (uint)*param_1 - **(int **)(param_4 + 8);
  uVar1 = (uint)param_1[1] - *(int *)(*(int *)(param_4 + 8) + 4);
  if ((((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) <
        (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) ||
      (((0 < (int)uVar4 && ((int)uVar6 < (int)uVar4)) ||
       (iVar2 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f),
       iVar2 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)))))) ||
     ((0 < (int)uVar5 && ((int)uVar1 < (int)uVar5)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}


/* ==== 0041a310 FUN_0041a310 ==== */

void FUN_0041a310(int *param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  int system_metrics;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  
  puStack_84 = (undefined1 *)0x41a336;
  puVar1 = FUN_0040816c(param_3 << 4);
  puStack_88 = &LAB_0041a607;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_84 = &stack0xfffffffc;
  (**(code **)(*param_1 + 4))(param_1,puVar1,param_3 << 4);
  if (*param_5 == 0 && param_5[1] == 0) {
    system_metrics = GetSystemMetrics(0xb);
    *param_4 = system_metrics;
    system_metrics = GetSystemMetrics(0xc);
    param_4[1] = system_metrics;
  }
  else {
    *param_4 = *param_5;
    param_4[1] = param_5[1];
  }
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_004197d4();
  }
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff68;
  GetDeviceCaps(hdc,0xe);
  GetDeviceCaps(hdc,0xc);
  *in_FS_OFFSET = uVar2;
  ReleaseDC((HWND)0x0,hdc);
  return;
}


/* ==== 0041a618 FUN_0041a618 ==== */

ushort FUN_0041a618(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 10;
  for (; (int)param_1 < (int)puVar1; param_1 = param_1 + 1) {
    uVar2 = uVar2 ^ *param_1;
  }
  return uVar2;
}


/* ==== 0041a630 FUN_0041a630 ==== */

void FUN_0041a630(HANDLE h_val,uint *param_2,uint param_3)

{
  int i_val;
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 auStack_60 [4];
  uint local_5c;
  uint local_58;
  short local_50;
  short local_4e;
  uint local_48 [15];
  
  local_48[0] = 0;
  i_val = GetObjectA(h_val,0x54,auStack_60);
  if (i_val == 0) {
    FUN_004197b0();
  }
  else if ((i_val < 0x40) || (local_48[0] < 0x28)) {
    System_FillChar(param_2,0x28,0);
    *param_2 = 0x28;
    param_2[1] = local_5c;
    param_2[2] = local_58;
  }
  else {
    puVar2 = local_48;
    puVar3 = param_2;
    for (i_val = 10; i_val != 0; i_val = i_val + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if (param_3 == 2) {
    *(undefined2 *)((int)param_2 + 0xe) = 1;
  }
  else if (param_3 - 3 < 0xe) {
    *(undefined2 *)((int)param_2 + 0xe) = 4;
    param_2[8] = param_3;
  }
  else if (param_3 - 0x11 < 0xf0) {
    *(undefined2 *)((int)param_2 + 0xe) = 8;
    param_2[8] = param_3;
  }
  else {
    *(short *)((int)param_2 + 0xe) = local_4e * local_50;
  }
  *(undefined2 *)(param_2 + 3) = 1;
  if (param_2[8] < param_2[9]) {
    param_2[9] = param_2[8];
  }
  if (param_2[5] == 0) {
    i_val = FUN_00419a60(param_2[1],(uint)*(ushort *)((int)param_2 + 0xe),0x20);
    uVar1 = (int)param_2[2] >> 0x1f;
    param_2[5] = i_val * ((param_2[2] ^ uVar1) - uVar1);
  }
  return;
}


/* ==== 0041a714 FUN_0041a714 ==== */

void FUN_0041a714(HANDLE h_val,int *param_2,undefined4 *param_3,uint param_4)

{
  uint local_2c [3];
  ushort local_1e;
  byte local_1c;
  undefined4 local_18;
  int local_c;
  
  FUN_0041a630(h_val,local_2c,param_4);
  if (local_1e < 9) {
    if (local_c == 0) {
      *param_2 = (1 << ((byte)local_1e & 0x1f)) * 4 + 0x28;
    }
    else {
      *param_2 = local_c * 4 + 0x28;
    }
  }
  else {
    *param_2 = 0x28;
    if ((local_1c & 3) != 0) {
      *param_2 = *param_2 + 0xc;
    }
  }
  *param_3 = local_18;
  return;
}


/* ==== 0041a778 FUN_0041a778 ==== */

void FUN_0041a778(HANDLE h_val,int *param_2,undefined4 *param_3)

{
  FUN_0041a714(h_val,param_2,param_3,0);
  return;
}


/* ==== 0041a780 FUN_0041a780 ==== */

void FUN_0041a780(HBITMAP param_1,HPALETTE pal_2,LPBITMAPINFO lpbmi_val,uint param_4,LPVOID lpv_bits
                 )

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  HPALETTE pal;
  
  FUN_0041a630(param_1,(uint *)lpbmi_val,param_4);
  pal = (HPALETTE)0x0;
  hdc = CreateCompatibleDC((HDC)0x0);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  if (pal_2 != (HPALETTE)0x0) {
    pal = SelectPalette(hdc,pal_2,0);
    RealizePalette(hdc);
  }
  GetDIBits(hdc,param_1,0,(lpbmi_val->bmiHeader).biHeight,lpv_bits,lpbmi_val,0);
  *in_FS_OFFSET = uVar1;
  if (pal != (HPALETTE)0x0) {
    SelectPalette(hdc,pal,0);
  }
  DeleteDC(hdc);
  return;
}


/* ==== 0041a830 FUN_0041a830 ==== */

void FUN_0041a830(HBITMAP param_1,HPALETTE pal_2,LPBITMAPINFO lpbmi_val,LPVOID lpv_bits)

{
  FUN_0041a780(param_1,pal_2,lpbmi_val,0,lpv_bits);
  return;
}


/* ==== 0041a844 FUN_0041a844 ==== */

void FUN_0041a844(void)

{
  return;
}


/* ==== 0041a848 FUN_0041a848 ==== */

void FUN_0041a848(int param_1)

{
  if (param_1 == 0) {
    FUN_0041a844();
  }
  return;
}


/* ==== 0041a854 FUN_0041a854 ==== */

void FUN_0041a854(int *param_1,HICON icon,char param_3)

{
  LONG *pLVar1;
  LPBITMAPINFO ptVar2;
  BOOL BVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_70;
  undefined4 local_58;
  int local_50;
  undefined4 local_4c;
  ICONINFO h_val;
  int local_34;
  undefined4 local_2e;
  undefined2 local_2a;
  undefined4 *lpv_bits;
  LPBITMAPINFO lpbmi_val;
  undefined4 *lpv_bits_2;
  LPBITMAPINFO lpbmi_val_2;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  local_5 = param_3;
  System_FillChar(&local_2e,6,0);
  System_FillChar(&local_58,0x10,0);
  uStack_70 = 0x41a88c;
  BVar3 = GetIconInfo(icon,&h_val);
  FUN_0041a848(BVar3);
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_78 = (undefined1 *)0x41a8af;
  FUN_0041a714(h_val.hbmMask,(int *)&local_c,&local_14,2);
  puStack_78 = (undefined1 *)0x41a8bf;
  FUN_0041a714(h_val.hbmColor,(int *)&local_10,&local_18,0x10);
  lpbmi_val_2 = (LPBITMAPINFO)0x0;
  lpv_bits_2 = (undefined4 *)0x0;
  lpbmi_val = (LPBITMAPINFO)0x0;
  lpv_bits = (undefined4 *)0x0;
  puStack_78 = &LAB_0041aa1b;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  lpbmi_val_2 = (LPBITMAPINFO)FUN_0040816c(local_c);
  lpv_bits_2 = FUN_0040816c(local_14);
  lpbmi_val = (LPBITMAPINFO)FUN_0040816c(local_10);
  lpv_bits = FUN_0040816c(local_18);
  FUN_0041a780(h_val.hbmMask,(HPALETTE)0x0,lpbmi_val_2,2,lpv_bits_2);
  uVar4 = 0x10;
  FUN_0041a780(h_val.hbmColor,(HPALETTE)0x0,lpbmi_val,0x10,lpv_bits);
  if (local_5 != '\0') {
    local_34 = local_10 + 0x16 + local_18 + local_14;
    (**(code **)(*param_1 + 8))(param_1,&local_34,4);
  }
  local_2e._2_2_ = 1;
  local_2a = 1;
  (**(code **)(*param_1 + 8))(param_1,&local_2e,6);
  ptVar2 = lpbmi_val;
  local_58._0_1_ = (undefined1)(lpbmi_val->bmiHeader).biWidth;
  local_58._1_1_ = (undefined1)(lpbmi_val->bmiHeader).biHeight;
  local_58._2_2_ = (lpbmi_val->bmiHeader).biPlanes * (lpbmi_val->bmiHeader).biBitCount;
  local_50 = local_10 + local_18 + local_14;
  local_4c = 0x16;
  (**(code **)(*param_1 + 8))(param_1,&local_58,0x10);
  pLVar1 = &(ptVar2->bmiHeader).biHeight;
  *pLVar1 = *pLVar1 + (ptVar2->bmiHeader).biHeight;
  (**(code **)(*param_1 + 8))(param_1,lpbmi_val,local_10);
  (**(code **)(*param_1 + 8))(param_1,lpv_bits,local_18);
  (**(code **)(*param_1 + 8))(param_1,lpv_bits_2,local_14);
  *in_FS_OFFSET = uVar4;
  System__FreeMem((int)lpbmi_val);
  System__FreeMem((int)lpv_bits);
  System__FreeMem((int)lpbmi_val_2);
  System__FreeMem((int)lpv_bits_2);
  return;
}


/* ==== 0041aa50 TGraphic.virtual_00c ==== */

int * TGraphic_virtual_00c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
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
  System_TObject_Create(param_1,'\0',param_3);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041aa88 TGraphic.virtual_010 ==== */

void TGraphic_virtual_010(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  return;
}


/* ==== 0041aaa0 FUN_0041aaa0 ==== */

uint FUN_0041aaa0(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    uVar3 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x1c))();
    return uVar3 ^ 1;
  }
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  uVar2 = System__IsClass(piVar1,(int)&PTR_TPersistent_virtual_000_00416f48);
  if (((char)uVar2 != '\0') &&
     (uVar2 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x18))
                        (*(int **)(in_stack_00000004 + -8),piVar1), (char)uVar2 != '\0')) {
    return 0;
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


/* ==== 0041aaf8 TGraphic.virtual_004 ==== */

void TGraphic_virtual_004(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = *(undefined4 *)(*param_1 + 0x30);
  uVar2 = *(undefined4 *)(*param_1 + 0x44);
  piVar4 = param_1;
  uVar1 = FUN_0041aaa0();
  (**(code **)(*param_2 + 8))(param_2,&DAT_0041ab3c,uVar1,uVar2,param_1,uVar3,piVar4);
  return;
}


/* ==== 0041ab44 TGraphic.virtual_018 ==== */

undefined1 TGraphic_virtual_018(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x41ab5c;
    iVar4 = FUN_00402ee0(param_1);
    puStack_20 = (undefined1 *)0x41ab65;
    iVar5 = FUN_00402ee0(param_2);
    if (iVar4 == iVar5) {
      bVar1 = true;
      goto LAB_0041ab6f;
    }
  }
  bVar1 = false;
LAB_0041ab6f:
  puStack_20 = (undefined1 *)0x41ab79;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 == '\0') {
    puStack_20 = (undefined1 *)0x41ab84;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 == '\0') {
      if (!bVar1) {
        return 0;
      }
      puStack_20 = (undefined1 *)0x41abc2;
      piVar6 = (int *)System_TObject_Create
                                ((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',extraout_ECX)
      ;
      puStack_24 = &LAB_0041ac75;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x41abdd;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x44))(param_1,piVar6);
      puStack_2c = (undefined1 *)0x41abe9;
      piVar7 = (int *)System_TObject_Create
                                ((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',
                                 extraout_ECX_00);
      puStack_30 = &LAB_0041ac58;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      (**(code **)(*param_2 + 0x44))(param_2,piVar7);
      iVar4 = FUN_00412680(piVar6);
      iVar5 = FUN_00412680(piVar7);
      if (iVar4 == iVar5) {
        uVar8 = FUN_00412680(piVar6);
        FUN_00408298((int *)piVar6[1],(int *)piVar7[1],uVar8);
      }
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0041ac5f;
      puStack_30 = (undefined1 *)0x41ac57;
      uVar3 = System_TObject_Free(piVar7);
      return uVar3;
    }
  }
  puStack_20 = (undefined1 *)0x41ab8f;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 != '\0') {
    puStack_20 = (undefined1 *)0x41ab9a;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* ==== 0041ac88 TGraphic.virtual_024 ==== */

undefined4 TGraphic_virtual_024(void)

{
  return 0;
}


/* ==== 0041ac8c TGraphic.virtual_028 ==== */

undefined1 TGraphic_virtual_028(int param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}


/* ==== 0041ac90 TGraphic.virtual_048 ==== */

void TGraphic_virtual_048(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x41aca7;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',param_2,0x20);
  puStackY_14 = &LAB_0041acd8;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x50))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x41acd7;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 0041ace4 TGraphic.dynamic_fffd ==== */

void TGraphic_dynamic_fffd
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  if (*(short *)(param_1 + 0x12) != 0) {
    (**(code **)(param_1 + 0x10))
              (*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


/* ==== 0041ad0c TGraphic.virtual_030 ==== */

void TGraphic_virtual_030(int *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return;
}


/* ==== 0041ad18 TGraphic.virtual_04c ==== */

void TGraphic_virtual_04c(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x41ad32;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',param_2,0xffff);
  puStackY_14 = &LAB_0041ad63;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x54))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x41ad62;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 0041ad70 TGraphic.virtual_038 ==== */

void TGraphic_virtual_038(void)

{
  return;
}


/* ==== 0041ad74 TGraphic.virtual_03c ==== */

void TGraphic_virtual_03c(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x19)) {
    *(char *)((int)param_1 + 0x19) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041ad84 TGraphic.virtual_044 ==== */

void TGraphic_virtual_044(int *param_1)

{
  (**(code **)(*param_1 + 0x54))();
  return;
}


/* ==== 0041ae2c FUN_0041ae2c ==== */

void FUN_0041ae2c(int *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  uVar1 = 0;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x41ae43;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,0,in_stack_ffffffd4,in_stack_ffffffd8)
    ;
    uVar1 = extraout_ECX;
  }
  puStack_34 = &LAB_0041af09;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  System_TObject_Create(param_1,'\0',uVar1);
  uVar1 = 0;
  puVar3 = &LAB_00417234;
  System_LoadResString((undefined4 *)PTR_PTR_004ab838,(int *)&local_8);
  FUN_0041afac(param_1,&DAT_0041af38,local_8,puVar3,uVar1);
  uVar1 = 0;
  puVar3 = &LAB_00417234;
  System_LoadResString((undefined4 *)PTR_PTR_004ab684,(int *)&local_c);
  FUN_0041afac(param_1,&DAT_0041af44,local_c,puVar3,uVar1);
  uVar1 = 0;
  ppuVar2 = &PTR_TPersistent_virtual_000_004174e4;
  System_LoadResString((undefined4 *)PTR_PTR_004ab680,(int *)&local_10);
  FUN_0041afac(param_1,&DAT_0041af50,local_10,ppuVar2,uVar1);
  uVar1 = 0;
  ppuVar2 = &PTR_TPersistent_virtual_000_004173a4;
  System_LoadResString((undefined4 *)PTR_PTR_004ab678,(int *)&local_14);
  FUN_0041afac(param_1,&DAT_0041af5c,local_14,ppuVar2,uVar1);
  *in_FS_OFFSET = ppuVar2;
  System__LStrArrayClr((int *)&local_14,4);
  return;
}


/* ==== 0041af60 TFileFormatsList.Destroy ==== */

void TFileFormatsList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  VARIANTARG *variantarg;
  byte extraout_DL;
  int i_val;
  int j;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  i_val = piVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    do {
      variantarg = (VARIANTARG *)Classes_TList_Get(piVar1,j);
      FUN_00404890(variantarg,"\x0e\vTFileFormat\x10");
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  TList_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041afac FUN_0041afac ==== */

void FUN_0041afac(int *param_1,undefined *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_0041b02f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  local_8 = param_2;
  puVar1 = FUN_0040487c(0x10,"\x0e\vTFileFormat\x10");
  FUN_00408330(local_8,(int *)&local_10);
  System__LStrAsg(puVar1 + 1,local_10);
  *puVar1 = param_4;
  System__LStrAsg(puVar1 + 2,local_c);
  puVar1[3] = param_5;
  Classes_TList_Add(param_1,(int)puVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041b036;
  puStack_24 = (undefined1 *)0x41b02e;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 0041b040 FUN_0041b040 ==== */

void FUN_0041b040(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  uint *local_c;
  uint *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_120 = &LAB_0041b0be;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  i_val = param_1[2] + -1;
  uVar2 = i_val == 0;
  local_8 = param_2;
  if (-1 < i_val) {
    do {
      piVar1 = (int *)Classes_TList_Get(param_1,i_val);
      System_TObject_ClassName(*piVar1,local_10c);
      System__LStrFromString((int *)&local_c,local_10c);
      System__LStrCmp(local_c,local_8);
      if ((bool)uVar2) break;
      i_val = i_val + -1;
      uVar2 = i_val == -1;
    } while (!(bool)uVar2);
  }
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0041b0c5;
  puStack_120 = (undefined1 *)0x41b0bd;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 0041b0d0 FUN_0041b0d0 ==== */

void FUN_0041b0d0(int *param_1,int param_2)

{
  VARIANTARG *variantarg;
  undefined4 uVar1;
  int i_val;
  
  i_val = param_1[2] + -1;
  if (-1 < i_val) {
    do {
      variantarg = (VARIANTARG *)Classes_TList_Get(param_1,i_val);
      uVar1 = thunk_FUN_004031ac(*(int *)&variantarg->n1,param_2);
      if ((char)uVar1 != '\0') {
        FUN_00404890(variantarg,"\x0e\vTFileFormat\x10");
        Classes_TList_Delete(param_1,i_val);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 0041b17c FUN_0041b17c ==== */

int * FUN_0041b17c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
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
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',param_3);
  param_1[1] = iVar1;
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[2] = iVar1;
  FUN_0041b228((int)param_1,CONCAT22(extraout_var,3),(int)&LAB_00417234);
  FUN_0041b228((int)param_1,CONCAT22(extraout_var_00,0xe),(int)&LAB_00417234);
  FUN_0041b228((int)param_1,CONCAT22(extraout_var_01,2),(int)&PTR_TPersistent_virtual_000_004173a4);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041b1fc TClipboardFormats.Destroy ==== */

void TClipboardFormats_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[1]);
  System_TObject_Free((int *)piVar1[2]);
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041b228 FUN_0041b228 ==== */

void FUN_0041b228(int param_1,uint param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41b243;
  Classes_TList_Add(*(int **)(param_1 + 4),param_3);
  puStack_20 = &LAB_0041b26c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  Classes_TList_Add(*(int **)(param_1 + 8),param_2 & 0xffff);
  *in_FS_OFFSET = uStack_24;
  return;
}


/* ==== 0041b290 FUN_0041b290 ==== */

undefined4 FUN_0041b290(int param_1,short param_2)

{
  undefined4 uVar1;
  int i_val;
  
  i_val = *(int *)(*(int *)(param_1 + 8) + 8) + -1;
  if (-1 < i_val) {
    do {
      uVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 8),i_val);
      if (param_2 == (short)uVar1) {
        uVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 4),i_val);
        return uVar1;
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return 0;
}


/* ==== 0041b2cc FUN_0041b2cc ==== */

void FUN_0041b2cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int i_val;
  
  i_val = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < i_val) {
    do {
      iVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 4),i_val);
      uVar2 = thunk_FUN_004031ac(iVar1,param_2);
      if ((char)uVar2 != '\0') {
        Classes_TList_Delete(*(int **)(param_1 + 4),i_val);
        Classes_TList_Delete(*(int **)(param_1 + 8),i_val);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 0041b314 FUN_0041b314 ==== */

int FUN_0041b314(void)

{
  if (DAT_004aa5dc == 0) {
    DAT_004aa5dc = FUN_0041ae2c((int *)&PTR_TList_virtual_000_0041ae08,'\x01');
  }
  return DAT_004aa5dc;
}


/* ==== 0041b334 FUN_0041b334 ==== */

int * FUN_0041b334(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_004aa5d8 == (int *)0x0) {
    DAT_004aa5d8 = FUN_0041b17c((int *)&DAT_0041b168,'\x01',param_3);
  }
  return DAT_004aa5d8;
}


/* ==== 0041b354 FUN_0041b354 ==== */

int * FUN_0041b354(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
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
  iVar1 = FUN_0041b314();
  FUN_0041b334(iVar1,extraout_EDX,extraout_ECX_00);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041b394 TPicture.Destroy ==== */

void TPicture_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[1]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041b3c4 TPicture.virtual_000 ==== */

void TPicture_virtual_000(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00402ee0(param_2);
  uVar2 = System__IsClass((int *)param_1[1],iVar1);
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_2 + 8))(param_2,param_1[1]);
    return;
  }
  TPersistent_virtual_000(param_1,param_2);
  return;
}


/* ==== 0041b3f8 FUN_0041b3f8 ==== */

void FUN_0041b3f8(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  piVar1 = (int *)param_1[1];
  uVar2 = System__IsClass(piVar1,param_2);
  if ((char)uVar2 == '\0') {
    System_TObject_Free(piVar1);
    param_1[1] = 0;
    iVar3 = (**(code **)(param_2 + 0xc))(param_2,1);
    param_1[1] = iVar3;
    *(int **)(iVar3 + 0xc) = param_1;
    uVar2 = FUN_00403190(param_1,CONCAT22(extraout_var,0xfffd));
    *(undefined4 *)(iVar3 + 8) = uVar2;
    *(int **)(iVar3 + 0x14) = param_1;
    uVar2 = FUN_00403190(param_1,CONCAT22(extraout_var_00,0xfffc));
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
    System__CallDynaInst(param_1,param_1,extraout_ECX);
  }
  return;
}


/* ==== 0041b45c FUN_0041b45c ==== */

int FUN_0041b45c(int *param_1)

{
  FUN_0041b3f8(param_1,(int)&PTR_TPersistent_virtual_000_004173a4);
  return param_1[1];
}


/* ==== 0041b474 FUN_0041b474 ==== */

int FUN_0041b474(int *param_1)

{
  FUN_0041b3f8(param_1,(int)&PTR_TPersistent_virtual_000_004174e4);
  return param_1[1];
}


/* ==== 0041b4a4 FUN_0041b4a4 ==== */

void FUN_0041b4a4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  int *piStack_18;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    piStack_18 = (int *)0x41b4bf;
    iVar1 = FUN_00402ee0(param_2);
    piStack_18 = (int *)0x41b4c4;
    local_8 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
    piStack_18 = (int *)0x41b4d1;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    local_8[3] = (int)param_1;
    puStack_1c = (undefined1 *)0x41b4e3;
    piStack_18 = local_8;
    iVar1 = FUN_00403190(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_18[2] = iVar1;
    local_8[5] = (int)param_1;
    puStack_1c = (undefined1 *)0x41b4fb;
    piStack_18 = local_8;
    iVar1 = FUN_00403190(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),0xfffc));
    piStack_18[4] = iVar1;
  }
  puStack_1c = &LAB_0041b534;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piStack_18 = (int *)&stack0xfffffffc;
  System_TObject_Free((int *)param_1[1]);
  param_1[1] = (int)local_8;
  System__CallDynaInst(param_1,param_1,extraout_ECX);
  *in_FS_OFFSET = uStack_20;
  return;
}


/* ==== 0041b554 FUN_0041b554 ==== */

void FUN_0041b554(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41b570;
  iVar1 = FUN_0041b290(DAT_004aa5d8,(short)param_2);
  if (iVar1 == 0) {
    puStack_1c = (undefined1 *)0x41b580;
    FUN_00419798((undefined4 *)PTR_PTR_004ab8c0);
  }
  puStack_1c = (undefined1 *)0x41b587;
  piVar2 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
  puStack_20 = &LAB_0041b5cb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar2[5] = (int)param_1;
  puStack_1c = &stack0xfffffffc;
  iVar1 = FUN_00403190(param_1,CONCAT22(extraout_var,0xfffc));
  piVar2[4] = iVar1;
  (**(code **)(*piVar2 + 0x58))(piVar2,param_2,param_3);
  *in_FS_OFFSET = param_4;
  puStack_20 = (undefined1 *)0x41b5ea;
  System_TObject_Free((int *)param_1[1]);
  param_1[1] = (int)piVar2;
  piVar2[3] = (int)param_1;
  puStack_20 = (undefined1 *)0x41b5fe;
  iVar1 = FUN_00403190(param_1,CONCAT22(extraout_var_00,0xfffd));
  piVar2[2] = iVar1;
  puStack_20 = (undefined1 *)0x41b60e;
  System__CallDynaInst(param_1,param_1,extraout_ECX);
  return;
}


/* ==== 0041b618 FUN_0041b618 ==== */

void FUN_0041b618(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_2,param_3,param_4);
  }
  return;
}


/* ==== 0041b644 FUN_0041b644 ==== */

bool FUN_0041b644(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_0041b334(param_1,param_2,param_3);
  iVar2 = FUN_0041b290((int)piVar1,(short)param_2);
  return iVar2 != 0;
}


/* ==== 0041b65c TPicture.virtual_008 ==== */

void TPicture_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_0041b4a4(param_1,(undefined4 *)0x0);
    return;
  }
  uVar1 = System__IsClass(param_2,(int)&PTR_TPicture_virtual_000_0041702c);
  if ((char)uVar1 == '\0') {
    uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00416f48);
    if ((char)uVar1 == '\0') {
      TPersistent_virtual_008(param_1,param_2);
    }
    else {
      FUN_0041b4a4(param_1,param_2);
    }
  }
  else {
    FUN_0041b4a4(param_1,(undefined4 *)param_2[1]);
  }
  return;
}


/* ==== 0041b6b8 FUN_0041b6b8 ==== */

void FUN_0041b6b8(undefined4 param_1,undefined *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)FUN_0041b314();
  FUN_0041afac(piVar1,param_2,param_3,param_4,uVar2);
  return;
}


/* ==== 0041b6dc FUN_0041b6dc ==== */

void FUN_0041b6dc(undefined4 param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = FUN_0041b334(param_1,param_2,param_3);
  FUN_0041b228((int)piVar1,param_2,param_3);
  return;
}


/* ==== 0041b6f4 FUN_0041b6f4 ==== */

void FUN_0041b6f4(undefined4 param_1,int param_2)

{
  if (DAT_004aa5dc != (int *)0x0) {
    FUN_0041b0d0(DAT_004aa5dc,param_2);
  }
  if (DAT_004aa5d8 != 0) {
    FUN_0041b2cc(DAT_004aa5d8,param_2);
  }
  return;
}


/* ==== 0041b724 TPicture.dynamic_fffd ==== */

void TPicture_dynamic_fffd(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  }
  return;
}


/* ==== 0041b748 TPicture.dynamic_fffc ==== */

void TPicture_dynamic_fffc
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  if (*(short *)(param_1 + 0x1a) != 0) {
    (**(code **)(param_1 + 0x18))
              (*(undefined4 *)(param_1 + 0x1c),param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


/* ==== 0041b770 FUN_0041b770 ==== */

void FUN_0041b770(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  uint *local_4c;
  byte local_48;
  undefined1 local_47 [63];
  int *local_8;
  
  puStack_5c = &stack0xfffffffc;
  local_4c = (uint *)0x0;
  puStack_60 = &LAB_0041b877;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  piStack_68 = (int *)0x41b79f;
  (**(code **)(*param_2 + 4))(param_2,&local_48,1);
  piStack_68 = (int *)0x41b7ae;
  (**(code **)(*param_2 + 4))(param_2,local_47,local_48);
  piStack_68 = (int *)0x41b7b9;
  System__LStrFromString((int *)&local_4c,&local_48);
  piStack_68 = (int *)0x41b7c6;
  iVar1 = FUN_0041b040(DAT_004aa5dc,local_4c);
  local_8 = (int *)0x0;
  if (iVar1 != 0) {
    piStack_68 = (int *)0x41b7d4;
    local_8 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
    puStack_6c = &LAB_0041b7f9;
    uStack_70 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_70;
    piStack_68 = (int *)&stack0xfffffffc;
    (**(code **)(*local_8 + 0x30))(local_8,param_2);
    *in_FS_OFFSET = uStack_70;
  }
  piStack_68 = (int *)0x41b818;
  System_TObject_Free((int *)param_1[1]);
  param_1[1] = (int)local_8;
  uVar2 = extraout_ECX;
  if (local_8 != (int *)0x0) {
    local_8[3] = (int)param_1;
    piStack_68 = local_8;
    puStack_6c = (undefined1 *)0x41b836;
    iVar1 = FUN_00403190(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_68[2] = iVar1;
    local_8[5] = (int)param_1;
    piStack_68 = local_8;
    puStack_6c = (undefined1 *)0x41b84e;
    iVar1 = FUN_00403190(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),0xfffc));
    piStack_68[4] = iVar1;
    uVar2 = extraout_ECX_00;
  }
  piStack_68 = (int *)0x41b861;
  System__CallDynaInst(param_1,param_1,uVar2);
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_0041b87e;
  puStack_60 = (undefined1 *)0x41b876;
  System__LStrClr((int *)&local_4c);
  return;
}


/* ==== 0041b8e4 FUN_0041b8e4 ==== */

bool FUN_0041b8e4(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  int in_stack_00000004;
  
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (piVar1 == (int *)0x0) {
    bVar5 = *(int *)(*(int *)(in_stack_00000004 + -8) + 4) != 0;
  }
  else {
    bVar5 = true;
    uVar4 = System__IsClass(piVar1,(int)&PTR_TPicture_virtual_000_0041702c);
    if ((char)uVar4 != '\0') {
      if ((*(int *)(*(int *)(in_stack_00000004 + -8) + 4) == piVar1[1]) ||
         (((piVar2 = *(int **)(*(int *)(in_stack_00000004 + -8) + 4), piVar2 != (int *)0x0 &&
           (piVar1[1] != 0)) &&
          (cVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,piVar1[1]), cVar3 != '\0')))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
  }
  return bVar5;
}


/* ==== 0041b960 TPicture.virtual_004 ==== */

void TPicture_virtual_004(undefined4 param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = FUN_0041b770;
  puVar2 = &LAB_0041b888;
  uVar4 = param_1;
  bVar1 = FUN_0041b8e4();
  (**(code **)(*param_2 + 8))(param_2,&DAT_0041b9a4,bVar1,puVar2,param_1,pcVar3,uVar4);
  return;
}


/* ==== 0041b9ac FUN_0041b9ac ==== */

undefined4 FUN_0041b9ac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  }
  return uVar1;
}


/* ==== 0041b9c4 FUN_0041b9c4 ==== */

undefined4 FUN_0041b9c4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  }
  return uVar1;
}


/* ==== 0041b9dc TMetafileImage.Destroy ==== */

void TMetafileImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if ((HENHMETAFILE)piVar1[2] != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile((HENHMETAFILE)piVar1[2]);
  }
  FUN_0041756c((HGDIOBJ)piVar1[5]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041ba18 TMetafileImage.virtual_000 ==== */

void TMetafileImage_virtual_000(void)

{
  return;
}


/* ==== 0041bab4 FUN_0041bab4 ==== */

void FUN_0041bab4(int *param_1,char param_2,int param_3,int param_4,int param_5,HDC param_6)

{
  int *piVar1;
  int denominator;
  int numerator;
  int number;
  undefined4 uVar2;
  undefined4 uVar3;
  LPCSTR lpDesc;
  HDC pHVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar5;
  undefined4 uVar6;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined *local_24;
  RECT local_20;
  HDC local_10;
  undefined1 local_9;
  int *local_8;
  
  local_24 = (undefined *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_44 = (undefined1 *)0x41bace;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffc0,
                                         in_stack_ffffffc4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_48 = &LAB_0041bcc0;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_00418b34(param_1,'\0',param_3);
  local_8[0x16] = param_3;
  local_10 = param_6;
  if (param_6 == (HDC)0x0) {
    local_10 = GetDC((HWND)0x0);
  }
  uVar6 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa8;
  denominator = FUN_0041c06c(local_8[0x16]);
  if (denominator == 0) {
    denominator = (**(code **)(*(int *)local_8[0x16] + 0x2c))();
    if (denominator == 0) {
      denominator = GetDeviceCaps(local_10,4);
      FUN_0041c694((int *)local_8[0x16],denominator * 100,extraout_ECX_00);
    }
    else {
      denominator = GetDeviceCaps(local_10,8);
      numerator = GetDeviceCaps(local_10,4);
      numerator = numerator * 100;
      piVar1 = (int *)local_8[0x16];
      number = (**(code **)(*piVar1 + 0x2c))();
      denominator = MulDiv(number,numerator,denominator);
      FUN_0041c694(piVar1,denominator,extraout_ECX_01);
    }
  }
  denominator = FUN_0041c054(local_8[0x16]);
  if (denominator == 0) {
    denominator = (**(code **)(*(int *)local_8[0x16] + 0x20))();
    if (denominator == 0) {
      denominator = GetDeviceCaps(local_10,6);
      FUN_0041c658((int *)local_8[0x16],denominator * 100,extraout_ECX_02);
    }
    else {
      denominator = GetDeviceCaps(local_10,10);
      numerator = GetDeviceCaps(local_10,6);
      numerator = numerator * 100;
      piVar1 = (int *)local_8[0x16];
      number = (**(code **)(*piVar1 + 0x20))();
      denominator = MulDiv(number,numerator,denominator);
      FUN_0041c658(piVar1,denominator,extraout_ECX_03);
    }
  }
  uVar2 = FUN_0041c054(local_8[0x16]);
  pRVar5 = &local_20;
  uVar3 = FUN_0041c06c(local_8[0x16]);
  Classes_Rect(0,0,uVar3,&pRVar5->left,uVar2);
  denominator = System__LStrLen(param_5);
  if (denominator < 1) {
    denominator = System__LStrLen(param_4);
    if (denominator < 1) {
      lpDesc = (LPCSTR)0x0;
      goto LAB_0041bc5f;
    }
  }
  System__LStrCatN((int *)&local_24,4);
  lpDesc = System__LStrToPChar(local_24);
LAB_0041bc5f:
  pHVar4 = CreateEnhMetaFileA(local_10,(LPCSTR)0x0,&local_20,lpDesc);
  if (pHVar4 == (HDC)0x0) {
    FUN_00419828();
  }
  FUN_00419558(local_8,(int)pHVar4);
  *in_FS_OFFSET = uVar6;
  if (param_6 == (HDC)0x0) {
    ReleaseDC((HWND)0x0,local_10);
  }
  return;
}


/* ==== 0041bd04 TMetafileCanvas.Destroy ==== */

void TMetafileCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  HDC hdc;
  HENHMETAFILE hemf_val;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  hdc = (HDC)FUN_004194d8(piVar1);
  FUN_00419558(piVar1,0);
  hemf_val = CloseEnhMetaFile(hdc);
  FUN_0041c554((int *)piVar1[0x16],hemf_val,extraout_ECX);
  TCanvas_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041bd50 TMetafile.virtual_00c ==== */

int * TMetafile_virtual_00c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
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
  TGraphic_virtual_00c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  (**(code **)(*param_1 + 8))(param_1,0);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041bd98 TMetafile.Destroy ==== */

void TMetafile_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0041cf14((int *)piVar1[8]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041bdc8 TMetafile.virtual_008 ==== */

void TMetafile_virtual_008(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar5;
  
  if ((param_2 != (int *)0x0) &&
     (uVar3 = System__IsClass(param_2,(int)&LAB_00417234), param_3 = extraout_ECX,
     (char)uVar3 == '\0')) {
    TPersistent_virtual_008(param_1,param_2);
    return;
  }
  iVar5 = 0;
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    iVar5 = piVar1[5];
    FUN_0041cf14(piVar1);
    param_3 = extraout_ECX_00;
  }
  if (param_2 == (int *)0x0) {
    iVar4 = System_TObject_Create((int *)&PTR_TMetafileImage_virtual_000_004171d4,'\x01',param_3);
    param_1[8] = iVar4;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    param_1[8] = param_2[8];
    *(char *)(param_1 + 9) = (char)param_2[9];
  }
  FUN_0041cf10(param_1[8]);
  iVar4 = (**(code **)(*param_1 + 0x24))();
  if ((iVar5 == iVar4) || (iVar5 = (**(code **)(*param_1 + 0x24))(), iVar5 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1a) = uVar2;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041be5c TMetafile.virtual_014 ==== */

void TMetafile_virtual_014(int *param_1,int *param_2,LONG *param_3)

{
  HPALETTE pHVar1;
  HDC pHVar2;
  int i_val;
  HPALETTE pHVar3;
  RECT *pRVar4;
  byte bVar5;
  HENHMETAFILE hmf;
  BOOL BVar6;
  RECT RStack_20;
  
  bVar5 = 0;
  if (param_1[8] != 0) {
    pHVar1 = (HPALETTE)(**(code **)(*param_1 + 0x24))();
    pHVar3 = (HPALETTE)0x0;
    if (pHVar1 != (HPALETTE)0x0) {
      BVar6 = -1;
      pHVar3 = pHVar1;
      pHVar2 = (HDC)FUN_004194d8(param_2);
      pHVar3 = SelectPalette(pHVar2,pHVar3,BVar6);
      pHVar2 = (HDC)FUN_004194d8(param_2);
      RealizePalette(pHVar2);
    }
    pRVar4 = &RStack_20;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      pRVar4->left = *param_3;
      param_3 = param_3 + (uint)bVar5 * -2 + 1;
      pRVar4 = (RECT *)((int)pRVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    RStack_20.right = RStack_20.right + -1;
    RStack_20.bottom = RStack_20.bottom + -1;
    pRVar4 = &RStack_20;
    hmf = *(HENHMETAFILE *)(param_1[8] + 8);
    pHVar2 = (HDC)FUN_004194d8(param_2);
    PlayEnhMetaFile(pHVar2,hmf,pRVar4);
    if (pHVar1 != (HPALETTE)0x0) {
      BVar6 = -1;
      pHVar2 = (HDC)FUN_004194d8(param_2);
      SelectPalette(pHVar2,pHVar3,BVar6);
    }
  }
  return;
}


/* ==== 0041bef0 FUN_0041bef0 ==== */

void FUN_0041bef0(int param_1,int *param_2)

{
  int iVar1;
  UINT cchBuffer;
  LPSTR lpDescription;
  char *pcVar2;
  uint uVar3;
  
  System__LStrClr(param_2);
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    cchBuffer = GetEnhMetaFileDescriptionA(*(HENHMETAFILE *)(iVar1 + 8),0,(LPSTR)0x0);
    if (0 < (int)cchBuffer) {
      FUN_00404210(param_2,cchBuffer);
      lpDescription = System__LStrToPChar((undefined *)*param_2);
      GetEnhMetaFileDescriptionA
                (*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),cchBuffer,lpDescription);
      pcVar2 = System__LStrToPChar((undefined *)*param_2);
      uVar3 = FUN_00408b24(pcVar2);
      FUN_00404210(param_2,uVar3);
    }
  }
  return;
}


/* ==== 0041bfd8 TMetafile.virtual_01c ==== */

bool TMetafile_virtual_01c(int param_1)

{
  return *(int *)(param_1 + 0x20) == 0;
}


/* ==== 0041bff0 TMetafile.virtual_020 ==== */

int TMetafile_virtual_020(int param_1)

{
  int iVar1;
  int numerator;
  int local_14;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      iVar1 = *(int *)(iVar1 + 0x20);
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff98);
      iVar1 = MulDiv(*(int *)(iVar1 + 0x10),numerator,local_14 * 100);
    }
  }
  else {
    iVar1 = MulDiv(*(int *)(iVar1 + 0x10),DAT_004ac658,0x9ec);
  }
  return iVar1;
}


/* ==== 0041c054 FUN_0041c054 ==== */

undefined4 FUN_0041c054(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
}


/* ==== 0041c06c FUN_0041c06c ==== */

undefined4 FUN_0041c06c(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc);
}


/* ==== 0041c084 TMetafile.virtual_024 ==== */

undefined4 TMetafile_virtual_024(int param_1)

{
  int iVar1;
  UINT nNumEntries;
  HPALETTE pHVar2;
  undefined4 uVar3;
  LOGPALETTE local_410 [128];
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      nNumEntries = GetEnhMetaFilePaletteEntries(*(HENHMETAFILE *)(iVar1 + 8),0,(LPPALETTEENTRY)0x0)
      ;
      if (nNumEntries == 0) {
        return 0;
      }
      if (0x100 < (int)nNumEntries) {
        nNumEntries = nNumEntries & 0xff;
      }
      FUN_0041756c(*(HGDIOBJ *)(*(int *)(param_1 + 0x20) + 0x14));
      local_410[0].palVersion = 0x300;
      local_410[0].palNumEntries = (WORD)nNumEntries;
      GetEnhMetaFilePaletteEntries
                (*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),nNumEntries,
                 local_410[0].palPalEntry);
      pHVar2 = CreatePalette(local_410);
      *(HPALETTE *)(*(int *)(param_1 + 0x20) + 0x14) = pHVar2;
    }
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14);
  }
  return uVar3;
}


/* ==== 0041c110 TMetafile.virtual_02c ==== */

int TMetafile_virtual_02c(int param_1)

{
  int iVar1;
  int numerator;
  int local_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      iVar1 = *(int *)(iVar1 + 0x1c);
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff98);
      iVar1 = MulDiv(*(int *)(iVar1 + 0xc),numerator,local_18 * 100);
    }
  }
  else {
    iVar1 = MulDiv(*(int *)(iVar1 + 0xc),DAT_004ac658,0x9ec);
  }
  return iVar1;
}


/* ==== 0041c174 TMetafile.virtual_050 ==== */

void TMetafile_virtual_050(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0041c748(param_1,param_2);
  if ((char)uVar1 == '\0') {
    iVar3 = FUN_00412680(param_2);
    iVar2 = FUN_00412664(param_2);
    FUN_0041c32c((int)param_1,param_2,iVar3 - iVar2);
  }
  else {
    FUN_0041c25c((int)param_1,param_2);
  }
  iVar3 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar3 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041c1c8 FUN_0041c1c8 ==== */

void FUN_0041c1c8(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_0041cf14(*(int **)(param_1 + 0x20));
  iVar1 = System_TObject_Create((int *)&PTR_TMetafileImage_virtual_000_004171d4,'\x01',extraout_ECX)
  ;
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0041cf10(iVar1);
  return;
}


/* ==== 0041c1f0 TMetafile.virtual_030 ==== */

void TMetafile_virtual_030(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_10;
  
  iStack_10 = param_3;
  (**(code **)(*param_2 + 4))(param_2,&iStack_10,4);
  if (iStack_10 < 5) {
    (**(code **)(*param_1 + 8))(param_1,0);
  }
  else {
    uVar1 = FUN_0041c748(param_1,param_2);
    if ((char)uVar1 == '\0') {
      FUN_0041c32c((int)param_1,param_2,iStack_10 + -4);
    }
    else {
      FUN_0041c25c((int)param_1,param_2);
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041c25c FUN_0041c25c ==== */

void FUN_0041c25c(int param_1,int *param_2)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_6c [6];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  UINT size;
  BYTE *pb_val;
  
  puStack_7c = (undefined1 *)0x41c270;
  FUN_0041c1c8(param_1);
  puStack_7c = (undefined1 *)0x41c27f;
  FUN_004126b8(param_2,local_6c,100);
  if (local_44 != 0x464d4520) {
    puStack_7c = (undefined1 *)0x41c28d;
    FUN_004197c8();
  }
  puStack_7c = (undefined1 *)0x41c295;
  pb_val = (BYTE *)System__GetMem(size);
  iVar1 = *(int *)(param_1 + 0x20);
  puStack_80 = &LAB_0041c31c;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puStack_7c = &stack0xfffffffc;
  System_Move(local_6c,(undefined4 *)pb_val,100);
  FUN_004126b8(param_2,pb_val + 100,size - 100);
  pHVar2 = SetEnhMetaFileBits(size,pb_val);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar2;
  if (pHVar2 == (HENHMETAFILE)0x0) {
    FUN_004197c8();
  }
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(int *)(iVar1 + 0xc) = local_4c - local_54;
  *(int *)(iVar1 + 0x10) = local_48 - local_50;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *in_FS_OFFSET = uStack_84;
  puStack_7c = &LAB_0041c323;
  puStack_80 = (undefined1 *)0x41c31b;
  System__FreeMem((int)pb_val);
  return;
}


/* ==== 0041c32c FUN_0041c32c ==== */

void FUN_0041c32c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  int mul_div;
  HENHMETAFILE pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  tagENHMETAHEADER enhmetaheader;
  int local_26;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  ushort local_18;
  ushort local_12;
  BYTE *meta16_data;
  UINT size;
  int *local_8;
  
  puStack_ac = (undefined1 *)0x41c347;
  size = param_3;
  local_8 = param_2;
  FUN_0041c1c8(param_1);
  puStack_ac = (undefined1 *)0x41c357;
  (**(code **)(*local_8 + 4))(local_8,&local_26,0x16);
  if (local_26 == -0x65393229) {
    puStack_ac = (undefined1 *)0x41c368;
    uVar2 = FUN_0041a618((ushort *)&local_26);
    if (uVar2 == local_12) goto LAB_0041c373;
  }
  puStack_ac = (undefined1 *)0x41c373;
  FUN_004197c8();
LAB_0041c373:
  size = size - 0x16;
  puStack_ac = (undefined1 *)0x41c37f;
  meta16_data = (BYTE *)System__GetMem(size);
  iVar1 = *(int *)(param_1 + 0x20);
  puStack_b0 = &LAB_0041c49b;
  uStack_b4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b4;
  puStack_ac = &stack0xfffffffc;
  (**(code **)(*local_8 + 4))(local_8,meta16_data,size);
  *(ushort *)(*(int *)(param_1 + 0x20) + 0x18) = local_18;
  if (local_18 == 0) {
    local_18 = 0x60;
  }
  mul_div = MulDiv((int)local_1c - (int)local_20,0x9ec,(uint)local_18);
  *(int *)(iVar1 + 0xc) = mul_div;
  mul_div = MulDiv((int)local_1a - (int)local_1e,0x9ec,(uint)local_18);
  *(int *)(iVar1 + 0x10) = mul_div;
  enhmetaheader.szlMicrometers.cx = 8;
  enhmetaheader.szlMicrometers.cy = 0;
  pHVar3 = SetWinMetaFileBits(size,meta16_data,(HDC)0x0,
                              (METAFILEPICT *)&enhmetaheader.szlMicrometers);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar3;
  if (pHVar3 == (HENHMETAFILE)0x0) {
    FUN_004197c8();
  }
  GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,&enhmetaheader);
  enhmetaheader.szlMicrometers.cx = 8;
  enhmetaheader.szlMicrometers.cy = enhmetaheader.rclFrame.right;
  DeleteEnhMetaFile(*(HENHMETAFILE *)(iVar1 + 8));
  pHVar3 = SetWinMetaFileBits(size,meta16_data,(HDC)0x0,
                              (METAFILEPICT *)&enhmetaheader.szlMicrometers);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar3;
  if (pHVar3 == (HENHMETAFILE)0x0) {
    FUN_004197c8();
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *in_FS_OFFSET = uStack_b4;
  puStack_ac = &LAB_0041c4a2;
  puStack_b0 = (undefined1 *)0x41c49a;
  System__FreeMem((int)meta16_data);
  return;
}


/* ==== 0041c4ac TMetafile.virtual_04c ==== */

void TMetafile_virtual_04c(int *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_c;
  uint *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  local_c = (undefined *)0x0;
  uVar2 = 1;
  puStack_20 = &LAB_0041c51a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = param_1[9];
  FUN_00408a68(param_2,(int *)&local_c);
  FUN_0040c110(local_c,(int *)&local_8);
  System__LStrCmp(local_8,(uint *)&DAT_0041c530);
  if ((bool)uVar2) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  TGraphic_virtual_04c(param_1,param_2);
  *(char *)(param_1 + 9) = (char)iVar1;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041c521;
  puStack_20 = (undefined1 *)0x41c519;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 0041c538 TMetafile.virtual_054 ==== */

void TMetafile_virtual_054(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_0041c93c(param_1,param_2);
    }
    else {
      FUN_0041c8b0(param_1,param_2);
    }
  }
  return;
}


/* ==== 0041c554 FUN_0041c554 ==== */

void FUN_0041c554(int *param_1,HENHMETAFILE hemf_val,undefined4 param_3)

{
  UINT UVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  
  uVar3 = 0;
  if (hemf_val != (HENHMETAFILE)0x0) {
    UVar1 = GetEnhMetaFileHeader(hemf_val,100,(LPENHMETAHEADER)&stack0xffffff94);
    param_3 = extraout_ECX;
    uVar3 = extraout_EDX;
    if (UVar1 == 0) {
      FUN_004197c8();
      param_3 = extraout_ECX_00;
      uVar3 = extraout_EDX_00;
    }
  }
  FUN_0041c7a8((int)param_1,uVar3,param_3);
  if (*(HENHMETAFILE *)(param_1[8] + 8) != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile(*(HENHMETAFILE *)(param_1[8] + 8));
  }
  FUN_0041756c(*(HGDIOBJ *)(param_1[8] + 0x14));
  iVar2 = param_1[8];
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(HENHMETAFILE *)(iVar2 + 8) = hemf_val;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (hemf_val != (HENHMETAFILE)0x0) {
    *(int *)(iVar2 + 0xc) = local_4c - local_54;
    *(int *)(iVar2 + 0x10) = local_48 - local_50;
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041c5e4 TMetafile.virtual_034 ==== */

void TMetafile_virtual_034(int *param_1,int number)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int denominator;
  int local_18;
  
  if (param_1[8] == 0) {
    FUN_0041c1c8((int)param_1);
  }
  iVar1 = param_1[8];
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      *(int *)(iVar1 + 0x20) = number;
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff94);
      iVar1 = MulDiv(number,local_18 * 100,denominator);
      FUN_0041c658(param_1,iVar1,extraout_ECX);
    }
  }
  else {
    iVar1 = MulDiv(number,0x9ec,DAT_004ac658);
    FUN_0041c658(param_1,iVar1,extraout_ECX_00);
  }
  return;
}


/* ==== 0041c658 FUN_0041c658 ==== */

void FUN_0041c658(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (param_1[8] == 0) {
    FUN_0041c1c8((int)param_1);
    param_3 = extraout_ECX;
  }
  iVar1 = param_1[8];
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (param_2 != *(int *)(iVar1 + 0x10)) {
    FUN_0041c7a8((int)param_1,0,param_3);
    *(int *)(param_1[8] + 0x10) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041c694 FUN_0041c694 ==== */

void FUN_0041c694(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (param_1[8] == 0) {
    FUN_0041c1c8((int)param_1);
    param_3 = extraout_ECX;
  }
  iVar1 = param_1[8];
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (param_2 != *(int *)(iVar1 + 0xc)) {
    FUN_0041c7a8((int)param_1,0,param_3);
    *(int *)(param_1[8] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041c6d0 TMetafile.virtual_03c ==== */

void TMetafile_virtual_03c(void)

{
  return;
}


/* ==== 0041c6d4 TMetafile.virtual_040 ==== */

void TMetafile_virtual_040(int *param_1,int number)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int denominator;
  int local_1c;
  
  if (param_1[8] == 0) {
    FUN_0041c1c8((int)param_1);
  }
  iVar1 = param_1[8];
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      *(int *)(iVar1 + 0x1c) = number;
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff94);
      iVar1 = MulDiv(number,local_1c * 100,denominator);
      FUN_0041c694(param_1,iVar1,extraout_ECX);
    }
  }
  else {
    iVar1 = MulDiv(number,0x9ec,DAT_004ac658);
    FUN_0041c694(param_1,iVar1,extraout_ECX_00);
  }
  return;
}


/* ==== 0041c748 FUN_0041c748 ==== */

undefined4 FUN_0041c748(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  int local_70 [10];
  int local_48;
  
  iVar1 = FUN_00412680(param_2);
  iVar2 = FUN_00412664(param_2);
  if (100 < iVar1 - iVar2) {
    (**(code **)(*param_2 + 4))(param_2,local_70,100);
    uVar3 = (**(code **)(*param_2 + 0xc))(param_2,0xffffff9c,CONCAT22(extraout_var,1));
    if ((local_70[0] == 1) && (local_48 == 0x464d4520)) {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0041c7a8 FUN_0041c7a8 ==== */

void FUN_0041c7a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  else if (1 < *(int *)(*(int *)(param_1 + 0x20) + 4)) {
    iVar1 = System_TObject_Create((int *)&PTR_TMetafileImage_virtual_000_004171d4,'\x01',param_3);
    pHVar2 = *(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8);
    if (pHVar2 != (HENHMETAFILE)0x0) {
      pHVar2 = CopyEnhMetaFileA(pHVar2,(LPCSTR)0x0);
      *(HENHMETAFILE *)(iVar1 + 8) = pHVar2;
    }
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc);
    *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x20);
    FUN_0041cf14(*(int **)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = iVar1;
    FUN_0041cf10(iVar1);
  }
  return;
}


/* ==== 0041c82c TMetafile.virtual_044 ==== */

void TMetafile_virtual_044(int param_1,int *param_2)

{
  int iVar1;
  undefined2 extraout_var;
  int local_10;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    local_10 = 0;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    local_10 = FUN_00412664(param_2);
    local_10 = local_10 + -4;
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_0041c93c(param_1,param_2);
    }
    else {
      FUN_0041c8b0(param_1,param_2);
    }
    (**(code **)(*param_2 + 0xc))(param_2,local_10,0);
    iVar1 = FUN_00412680(param_2);
    local_10 = iVar1 - local_10;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    (**(code **)(*param_2 + 0xc))(param_2,0,CONCAT22(extraout_var,2));
  }
  return;
}


/* ==== 0041c8b0 FUN_0041c8b0 ==== */

void FUN_0041c8b0(int param_1,int *param_2)

{
  UINT nSize;
  LPBYTE lpData;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    nSize = GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),0,(LPBYTE)0x0);
    if (nSize != 0) {
      lpData = (LPBYTE)System__GetMem(nSize);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe0;
      GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),nSize,lpData);
      FUN_004126f0(param_2,lpData,nSize);
      *in_FS_OFFSET = uVar1;
      System__FreeMem((int)lpData);
      return;
    }
  }
  return;
}


/* ==== 0041c93c FUN_0041c93c ==== */

void FUN_0041c93c(int param_1,int *param_2)

{
  int iVar1;
  int mul_div;
  UINT UVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  ushort local_26 [5];
  undefined2 local_1c;
  undefined2 local_1a;
  ushort local_18;
  ushort local_12;
  HDC hdc_ref;
  UINT data16;
  LPBYTE data16_2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  System_FillChar((undefined4 *)local_26,0x16,0);
  iVar1 = *(int *)(param_1 + 0x20);
  local_26[0] = 0xcdd7;
  local_26[1] = 0x9ac6;
  local_18 = *(ushort *)(iVar1 + 0x18);
  if (local_18 == 0) {
    local_18 = 0x60;
  }
  mul_div = MulDiv(*(int *)(iVar1 + 0xc),(uint)local_18,0x9ec);
  local_1c = (undefined2)mul_div;
  mul_div = MulDiv(*(int *)(iVar1 + 0x10),(uint)local_18,0x9ec);
  local_1a = (undefined2)mul_div;
  local_12 = FUN_0041a618(local_26);
  hdc_ref = GetDC((HWND)0x0);
  *in_FS_OFFSET = &stack0xffffffc4;
  data16 = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),0,(LPBYTE)0x0,8,hdc_ref);
  data16_2 = (LPBYTE)System__GetMem(data16);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb8;
  UVar2 = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),data16,data16_2,8,hdc_ref);
  if (UVar2 < data16) {
    FUN_00419828();
  }
  FUN_004126f0(param_2,local_26,0x16);
  FUN_004126f0(param_2,data16_2,data16);
  *in_FS_OFFSET = uVar3;
  System__FreeMem((int)data16_2);
  return;
}


/* ==== 0041ca84 TMetafile.virtual_058 ==== */

void TMetafile_virtual_058(int *param_1)

{
  HENHMETAFILE pHVar1;
  int iVar2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  pHVar1 = GetClipboardData(0xe);
  if (pHVar1 == (HENHMETAFILE)0x0) {
    FUN_00419798((undefined4 *)PTR_PTR_004ab8c0);
  }
  FUN_0041c1c8((int)param_1);
  iVar2 = param_1[8];
  pHVar1 = CopyEnhMetaFileA(pHVar1,(LPCSTR)0x0);
  *(HENHMETAFILE *)(iVar2 + 8) = pHVar1;
  GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar2 + 8),100,(LPENHMETAHEADER)&stack0xffffff98);
  *(int *)(iVar2 + 0xc) = local_48 - local_50;
  *(int *)(iVar2 + 0x10) = local_44 - local_4c;
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041cb08 TMetafile.virtual_05c ==== */

void TMetafile_virtual_05c(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    *param_2 = 0xe;
    *param_4 = 0;
    pHVar2 = CopyEnhMetaFileA(*(HENHMETAFILE *)(iVar1 + 8),(LPCSTR)0x0);
    *param_3 = pHVar2;
  }
  return;
}


/* ==== 0041cbf4 FUN_0041cbf4 ==== */

void FUN_0041cbf4(void)

{
  int iVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  undefined4 *local_c;
  int i_val;
  
  puStack_14 = (undefined1 *)0x41cc04;
  local_c = (undefined4 *)FUN_00410750(DAT_004aa5e0);
  puStack_18 = &LAB_0041cc92;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      i_val = iVar1;
      puStack_20 = (undefined1 *)0x41cc2f;
      local_10 = (int *)Classes_TList_Get(local_c,i_val);
      puStack_20 = (undefined1 *)0x41cc3a;
      cVar2 = FUN_00419374((int)local_10);
      if (cVar2 != '\0') {
        puStack_24 = &LAB_0041cc6a;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_0041cd84(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x41cc71;
        puStack_24 = (undefined1 *)0x41cc69;
        FUN_004193d0((int)local_10);
        return;
      }
      i_val = i_val + -1;
      iVar1 = i_val;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041cc99;
  puStack_18 = (undefined1 *)0x41cc91;
  FUN_004107b4(DAT_004aa5e0);
  return;
}


/* ==== 0041cca0 FUN_0041cca0 ==== */

void FUN_0041cca0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (param_1 != 0) {
    puStack_14 = (undefined1 *)0x41ccb9;
    puVar1 = (undefined4 *)FUN_00410750(DAT_004aa5e0);
    puStack_18 = &LAB_0041cd10;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    i_val = puVar1[2] + -1;
    puStack_14 = &stack0xfffffffc;
    if (-1 < i_val) {
      do {
        piVar2 = (int *)Classes_TList_Get(puVar1,i_val);
        if ((piVar2[0x16] != 0) && (*(int *)(*(int *)(piVar2[0x16] + 0x20) + 8) == param_1)) {
          FUN_0041cd84(piVar2);
        }
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x41cd17;
    puStack_18 = (undefined1 *)0x41cd0f;
    FUN_004107b4(DAT_004aa5e0);
    return;
  }
  return;
}


/* ==== 0041cd1c FUN_0041cd1c ==== */

int * FUN_0041cd1c(int *param_1,char param_2,int param_3)

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
  FUN_00418b34(param_1,'\0',param_3);
  param_1[0x16] = param_3;
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0041cd58 TBitmapCanvas.Destroy ==== */

void TBitmapCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0041cd84(piVar1);
  TCanvas_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041cd84 FUN_0041cd84 ==== */

void FUN_0041cd84(int *param_1)

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[1] != 0) {
    puStack_10 = (undefined1 *)0x41cda1;
    FUN_0041912c((int)param_1);
    puStack_14 = &LAB_0041ce18;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    if ((HGDIOBJ)param_1[0x17] != (HGDIOBJ)0x0) {
      puStack_10 = &stack0xfffffffc;
      SelectObject((HDC)param_1[1],(HGDIOBJ)param_1[0x17]);
    }
    if ((HPALETTE)param_1[0x18] != (HPALETTE)0x0) {
      SelectPalette((HDC)param_1[1],(HPALETTE)param_1[0x18],-1);
    }
    hdc = (HDC)param_1[1];
    FUN_00419558(param_1,0);
    DeleteDC(hdc);
    FUN_00410764(DAT_004aa5e0,(int)param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x41ce1f;
    puStack_14 = (undefined1 *)0x41ce17;
    FUN_004193d0((int)param_1);
    return;
  }
  return;
}


/* ==== 0041ce24 TBitmapCanvas.virtual_014 ==== */

void TBitmapCanvas_virtual_014(int *param_1)

{
  HDC hdc;
  HGDIOBJ h_val;
  HPALETTE pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (param_1[0x16] != 0) {
    puStack_14 = (undefined1 *)0x41ce42;
    FUN_0041912c((int)param_1);
    puStack_18 = &LAB_0041cf03;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_0041e0d4(param_1[0x16]);
    FUN_0041cca0(*(int *)(*(int *)(param_1[0x16] + 0x20) + 8));
    FUN_0041e224(param_1[0x16]);
    hdc = CreateCompatibleDC((HDC)0x0);
    h_val = *(HGDIOBJ *)(*(int *)(param_1[0x16] + 0x20) + 8);
    if (h_val == (HGDIOBJ)0x0) {
      param_1[0x17] = 0;
    }
    else {
      h_val = SelectObject(hdc,h_val);
      param_1[0x17] = (int)h_val;
    }
    pHVar1 = *(HPALETTE *)(*(int *)(param_1[0x16] + 0x20) + 0x10);
    if (pHVar1 == (HPALETTE)0x0) {
      param_1[0x18] = 0;
    }
    else {
      pHVar1 = SelectPalette(hdc,pHVar1,-1);
      param_1[0x18] = (int)pHVar1;
      RealizePalette(hdc);
    }
    FUN_00419558(param_1,(int)hdc);
    FUN_004106c8(DAT_004aa5e0,(int)param_1);
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x41cf0a;
    puStack_18 = (undefined1 *)0x41cf02;
    FUN_004193d0((int)param_1);
    return;
  }
  return;
}


/* ==== 0041cf10 FUN_0041cf10 ==== */

void FUN_0041cf10(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


/* ==== 0041cf14 FUN_0041cf14 ==== */

void FUN_0041cf14(int *param_1)

{
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    (**(code **)*param_1)();
    System_TObject_Free(param_1);
  }
  return;
}


/* ==== 0041cf34 TBitmapImage.Destroy ==== */

void TBitmapImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if (piVar1[5] != 0) {
    FUN_0041cca0(piVar1[5]);
    DeleteObject((HGDIOBJ)piVar1[5]);
    piVar1[5] = 0;
  }
  (**(code **)*piVar1)();
  if ((HANDLE)piVar1[0x19] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar1[0x19]);
  }
  SysUtils_FreeAndNil(piVar1 + 0x1b);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041cf90 TBitmapImage.virtual_000 ==== */

void TBitmapImage_virtual_000(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x14))) {
    FUN_0041cca0(iVar1);
    DeleteObject(*(HGDIOBJ *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0041cca0(*(int *)(param_1 + 0xc));
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_0041756c(*(HGDIOBJ *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ==== 0041cfdc FUN_0041cfdc ==== */

void FUN_0041cfdc(HGDIOBJ h_val,HPALETTE param_2,int param_3)

{
  UINT cEntries;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  tagPALETTEENTRY local_414 [256];
  HGDIOBJ h_val_2;
  HDC hdc_val;
  HDC local_c;
  HPALETTE local_8;
  
  if ((h_val != (HGDIOBJ)0x0) && (*(ushort *)(param_3 + 0x26) < 9)) {
    local_8 = param_2;
    cEntries = FUN_0041a064(param_2,local_414,0xff);
    if (cEntries != 0) {
      local_c = GetDC((HWND)0x0);
      hdc_val = CreateCompatibleDC(local_c);
      h_val_2 = SelectObject(hdc_val,h_val);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xfffffbd8;
      SetDIBColorTable(hdc_val,0,cEntries,(RGBQUAD *)local_414);
      *in_FS_OFFSET = uVar1;
      SelectObject(hdc_val,h_val_2);
      DeleteDC(hdc_val);
      ReleaseDC((HWND)0x0,local_c);
      return;
    }
  }
  return;
}


/* ==== 0041d098 FUN_0041d098 ==== */

void FUN_0041d098(int param_1)

{
  if (((*(byte *)(param_1 + 0x28) & 3) != 0) && (*(int *)(param_1 + 0x40) == 0)) {
    if (*(short *)(param_1 + 0x26) == 0x10) {
      *(undefined4 *)(param_1 + 0x40) = 0xf800;
      *(undefined4 *)(param_1 + 0x44) = 0x7e0;
      *(undefined4 *)(param_1 + 0x48) = 0x1f;
    }
    else if (*(short *)(param_1 + 0x26) == 0x20) {
      *(undefined4 *)(param_1 + 0x40) = 0xff0000;
      *(undefined4 *)(param_1 + 0x44) = 0xff00;
      *(undefined4 *)(param_1 + 0x48) = 0xff;
    }
  }
  return;
}


/* ==== 0041d0e4 FUN_0041d0e4 ==== */

HPALETTE FUN_0041d0e4(HBITMAP param_1,HPALETTE param_2,HPALETTE param_3,int param_4,int param_5)

{
  int i_val;
  HDC pHVar1;
  HBITMAP pHVar2;
  int device_caps;
  UINT UVar3;
  HGDIOBJ h_val;
  HBRUSH hbr;
  COLORREF CVar4;
  uint uVar5;
  HPALETTE pHVar6;
  DWORD *pDVar7;
  LPBITMAPINFO ptVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uVar10;
  RECT local_9c;
  undefined1 local_8c [4];
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  HPALETTE pal;
  RGBQUAD rgbquad;
  undefined4 local_30;
  LPVOID lpv_bits;
  LPBITMAPINFO lpbmi_val;
  HDC local_24;
  HDC local_20;
  HDC hdc_val;
  HGDIOBJ h_val_2;
  HPALETTE h_val_3;
  HPALETTE pal_2;
  HPALETTE pal_3;
  HBITMAP local_8;
  
  bVar9 = 0;
  h_val_3 = (HPALETTE)0x0;
  if (((*(int *)(param_5 + 0x18) == 0) ||
      ((*(int *)(param_5 + 0x1c) != 0 && (*(int *)(param_5 + 0x20) != 0)))) &&
     ((*(int *)(param_5 + 0x18) != 0 ||
      ((*(int *)(param_5 + 4) != 0 && (*(int *)(param_5 + 8) != 0)))))) {
    pal_2 = param_3;
    pal_3 = param_2;
    local_8 = param_1;
    FUN_0041cca0((int)param_1);
    local_74 = 0;
    if (local_8 != (HBITMAP)0x0) {
      i_val = GetObjectA(local_8,0x54,local_8c);
      if (i_val < 0x18) {
        FUN_004197b0();
      }
    }
    pHVar1 = GetDC((HWND)0x0);
    hdc_val = (HDC)FUN_004198d0((int)pHVar1);
    pHVar1 = CreateCompatibleDC(hdc_val);
    local_20 = (HDC)FUN_004198d0((int)pHVar1);
    *in_FS_OFFSET = &stack0xffffff4c;
    if (*(uint *)(param_5 + 0x18) < 0x28) {
      if ((*(ushort *)(param_5 + 0x10) | *(ushort *)(param_5 + 0x12)) == 1) {
        pHVar2 = CreateBitmap(*(int *)(param_5 + 4),*(int *)(param_5 + 8),1,1,(void *)0x0);
        h_val_3 = (HPALETTE)FUN_004198d0((int)pHVar2);
      }
      else {
        pHVar2 = CreateCompatibleBitmap(hdc_val,*(int *)(param_5 + 4),*(int *)(param_5 + 8));
        h_val_3 = (HPALETTE)FUN_004198d0((int)pHVar2);
      }
      FUN_004198d0((int)h_val_3);
      h_val = SelectObject(local_20,h_val_3);
      h_val_2 = (HGDIOBJ)FUN_004198d0((int)h_val);
      *in_FS_OFFSET = &stack0xffffff40;
      *in_FS_OFFSET = &stack0xffffff34;
      pal = (HPALETTE)0x0;
      pHVar6 = (HPALETTE)0x0;
      if (pal_2 != (HPALETTE)0x0) {
        pal = SelectPalette(local_20,pal_2,0);
        RealizePalette(local_20);
      }
      uVar10 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffff28;
      if (param_4 == 0) {
        PatBlt(local_20,0,0,*(int *)(param_5 + 4),*(int *)(param_5 + 8),0xff0062);
      }
      else {
        hbr = (HBRUSH)FUN_00418a18(*(int *)(param_4 + 0x14));
        Classes_Rect(0,0,*(undefined4 *)(param_5 + 4),&local_9c.left,*(undefined4 *)(param_5 + 8));
        FillRect(local_20,&local_9c,hbr);
        CVar4 = FUN_00417d54(*(uint *)(*(int *)(param_4 + 0xc) + 0x18));
        SetTextColor(local_20,CVar4);
        uVar5 = TBrush_GetColor(*(int *)(param_4 + 0x14));
        CVar4 = FUN_00417d54(uVar5);
        SetBkColor(local_20,CVar4);
        if ((*(short *)(param_5 + 0x26) == 1) && (*(int *)(param_5 + 0x14) != 0)) {
          rgbquad = (RGBQUAD)FUN_00417d54(*(uint *)(*(int *)(param_4 + 0xc) + 0x18));
          uVar5 = TBrush_GetColor(*(int *)(param_4 + 0x14));
          local_30 = FUN_00417d54(uVar5);
          SetDIBColorTable(local_20,0,2,&rgbquad);
        }
      }
      if (local_8 != (HBITMAP)0x0) {
        pHVar1 = CreateCompatibleDC(hdc_val);
        local_24 = (HDC)FUN_004198d0((int)pHVar1);
        uVar10 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffff1c;
        h_val = SelectObject(local_24,local_8);
        h_val = (HGDIOBJ)FUN_004198d0((int)h_val);
        if (pal_3 != (HPALETTE)0x0) {
          pHVar6 = SelectPalette(local_24,pal_3,0);
          RealizePalette(local_24);
        }
        if (param_4 != 0) {
          CVar4 = FUN_00417d54(*(uint *)(*(int *)(param_4 + 0xc) + 0x18));
          SetTextColor(local_24,CVar4);
          uVar5 = TBrush_GetColor(*(int *)(param_4 + 0x14));
          CVar4 = FUN_00417d54(uVar5);
          SetBkColor(local_24,CVar4);
        }
        BitBlt(local_20,0,0,*(int *)(param_5 + 4),*(int *)(param_5 + 8),local_24,0,0,0xcc0020);
        if (pal_3 != (HPALETTE)0x0) {
          SelectPalette(local_24,pHVar6,-1);
        }
        h_val = SelectObject(local_24,h_val);
        FUN_004198d0((int)h_val);
        *in_FS_OFFSET = uVar10;
        pHVar6 = (HPALETTE)DeleteDC(local_24);
        return pHVar6;
      }
      pHVar6 = (HPALETTE)0x0;
      *in_FS_OFFSET = uVar10;
      if (pal_2 != (HPALETTE)0x0) {
        pHVar6 = SelectPalette(local_20,pal,-1);
      }
      return pHVar6;
    }
    lpbmi_val = (LPBITMAPINFO)System__GetMem(0x42c);
    uVar10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff40;
    *(undefined4 *)(param_5 + 0x18) = 0x28;
    *(undefined2 *)(param_5 + 0x24) = 1;
    if (*(short *)(param_5 + 0x26) == 0) {
      i_val = GetDeviceCaps(hdc_val,0xc);
      device_caps = GetDeviceCaps(hdc_val,0xe);
      *(short *)(param_5 + 0x26) = (short)i_val * (short)device_caps;
    }
    pDVar7 = (DWORD *)(param_5 + 0x18);
    ptVar8 = lpbmi_val;
    for (i_val = 10; i_val != 0; i_val = i_val + -1) {
      (ptVar8->bmiHeader).biSize = *pDVar7;
      pDVar7 = pDVar7 + (uint)bVar9 * -2 + 1;
      ptVar8 = (LPBITMAPINFO)((int)ptVar8 + (uint)bVar9 * -8 + 4);
    }
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 0x1c);
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 0x20);
    if (*(ushort *)(param_5 + 0x26) < 9) {
      if ((*(short *)(param_5 + 0x26) == 1) && (local_78 == 0)) {
        lpbmi_val->bmiColors[0].rgbBlue = '\0';
        lpbmi_val->bmiColors[0].rgbGreen = '\0';
        lpbmi_val->bmiColors[0].rgbRed = '\0';
        lpbmi_val->bmiColors[0].rgbReserved = '\0';
        lpbmi_val[1].bmiHeader.biSize = 0xffffff;
      }
      else if (pal_2 == (HPALETTE)0x0) {
        if (local_8 != (HBITMAP)0x0) {
          h_val_2 = SelectObject(local_20,local_8);
          if ((local_74 == 0) || (local_78 == 0)) {
            uVar5 = (int)*(uint *)(param_5 + 0x20) >> 0x1f;
            GetDIBits(local_20,local_8,0,(*(uint *)(param_5 + 0x20) ^ uVar5) - uVar5,(LPVOID)0x0,
                      lpbmi_val,0);
          }
          else {
            UVar3 = GetDIBColorTable(local_20,0,0x100,lpbmi_val->bmiColors);
            *(UINT *)(param_5 + 0x38) = UVar3;
          }
          SelectObject(local_20,h_val_2);
        }
      }
      else {
        FUN_0041a064(pal_2,(LPPALETTEENTRY)lpbmi_val->bmiColors,0xff);
      }
    }
    else if (((*(short *)(param_5 + 0x26) == 0x10) || (*(short *)(param_5 + 0x26) == 0x20)) &&
            ((*(byte *)(param_5 + 0x28) & 3) != 0)) {
      FUN_0041d098(param_5);
      System_Move((undefined4 *)(param_5 + 0x40),lpbmi_val->bmiColors,0xc);
    }
    pHVar2 = CreateDIBSection(hdc_val,lpbmi_val,0,&lpv_bits,(HANDLE)0x0,0);
    h_val_3 = (HPALETTE)FUN_004198d0((int)pHVar2);
    if (lpv_bits == (LPVOID)0x0) {
      FUN_00419828();
    }
    if ((((local_8 == (HBITMAP)0x0) || (*(int *)(param_5 + 0x1c) != local_88)) ||
        (*(int *)(param_5 + 0x20) != local_84)) || (*(ushort *)(param_5 + 0x26) < 9)) {
      *in_FS_OFFSET = uVar10;
      pHVar6 = (HPALETTE)System__FreeMem((int)lpbmi_val);
      return pHVar6;
    }
    uVar5 = (int)*(uint *)(param_5 + 0x20) >> 0x1f;
    GetDIBits(local_20,local_8,0,(*(uint *)(param_5 + 0x20) ^ uVar5) - uVar5,lpv_bits,lpbmi_val,0);
    FUN_00403794();
    FUN_00403794();
  }
  return h_val_3;
}


/* ==== 0041d740 FUN_0041d740 ==== */

HPALETTE FUN_0041d740(HPALETTE param_1)

{
  int object;
  HPALETTE pHVar1;
  UINT c_entries;
  LOGPALETTE local_40c [128];
  
  pHVar1 = (HPALETTE)0x0;
  if (param_1 != (HPALETTE)0x0) {
    c_entries = 0;
    object = GetObjectA(param_1,4,&c_entries);
    if ((object != 0) && (c_entries != 0)) {
      local_40c[0].palVersion = 0x300;
      local_40c[0].palNumEntries = (WORD)c_entries;
      GetPaletteEntries(param_1,0,c_entries,local_40c[0].palPalEntry);
      pHVar1 = CreatePalette(local_40c);
    }
  }
  return pHVar1;
}


/* ==== 0041d7a4 FUN_0041d7a4 ==== */

BOOL FUN_0041d7a4(HPALETTE param_1,HPALETTE pal,COLORREF color_val)

{
  int iVar1;
  HDC pHVar2;
  COLORREF color;
  BOOL BVar3;
  int *in_FS_OFFSET;
  int iVar4;
  undefined1 local_74 [4];
  int local_70;
  int local_6c;
  int local_60;
  undefined4 local_5c;
  HGDIOBJ h_val;
  HGDIOBJ h_val_2;
  char local_15;
  HDC hdc_val;
  HDC local_10;
  HDC local_c;
  HBITMAP h_val_3;
  
  h_val_3 = (HBITMAP)0x0;
  if (param_1 != (HPALETTE)0x0) {
    iVar1 = GetObjectA(param_1,0x54,local_74);
    if (iVar1 != 0) {
      FUN_0041cca0((int)param_1);
      local_c = (HDC)0x0;
      hdc_val = (HDC)0x0;
      iVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&stack0xffffff74;
      pHVar2 = GetDC((HWND)0x0);
      local_c = (HDC)FUN_004198d0((int)pHVar2);
      pHVar2 = CreateCompatibleDC(local_c);
      hdc_val = (HDC)FUN_004198d0((int)pHVar2);
      iVar4 = local_70;
      h_val_3 = CreateBitmap(local_70,local_6c,1,1,(void *)0x0);
      if (h_val_3 != (HBITMAP)0x0) {
        h_val = SelectObject(hdc_val,h_val_3);
        if (color_val != 0x1fffffff) {
          pHVar2 = CreateCompatibleDC(local_c);
          local_10 = (HDC)FUN_004198d0((int)pHVar2);
          *in_FS_OFFSET = (int)&stack0xffffff68;
          if (local_60 == 0) {
            local_15 = '\0';
          }
          else {
            local_15 = '\x01';
            local_5c = 0;
            iVar4 = 0;
            param_1 = FUN_0041d0e4((HBITMAP)param_1,pal,pal,0,(int)local_74);
          }
          h_val_2 = SelectObject(local_10,param_1);
          if (pal != (HPALETTE)0x0) {
            SelectPalette(local_10,pal,0);
            RealizePalette(local_10);
            SelectPalette(hdc_val,pal,0);
            RealizePalette(hdc_val);
          }
          color = SetBkColor(local_10,color_val);
          BitBlt(hdc_val,0,0,local_70,local_6c,local_10,0,0,0xcc0020);
          SetBkColor(local_10,color);
          if (h_val_2 != (HGDIOBJ)0x0) {
            SelectObject(local_10,h_val_2);
          }
          if (local_15 != '\0') {
            DeleteObject(param_1);
          }
          *in_FS_OFFSET = iVar4;
          BVar3 = DeleteDC(local_10);
          return BVar3;
        }
        PatBlt(hdc_val,0,0,local_70,local_6c,0x42);
        if (h_val != (HGDIOBJ)0x0) {
          SelectObject(hdc_val,h_val);
        }
      }
      BVar3 = 0;
      *in_FS_OFFSET = iVar1;
      if (hdc_val != (HDC)0x0) {
        BVar3 = DeleteDC(hdc_val);
      }
      if (local_c != (HDC)0x0) {
        BVar3 = ReleaseDC((HWND)0x0,local_c);
      }
      return BVar3;
    }
  }
  return (BOOL)h_val_3;
}


/* ==== 0041d9b0 TBitmap.virtual_00c ==== */

int * TBitmap_virtual_00c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TGraphic_virtual_00c(param_1,'\0',param_3);
  param_1[0xb] = 0x20000000;
  iVar1 = System_TObject_Create((int *)&LAB_00417310,'\x01',extraout_ECX_00);
  param_1[8] = iVar1;
  FUN_0041cf10(iVar1);
  if (DAT_004aa3a4 != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,1);
  }
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0041da18 TBitmap.Destroy ==== */

void TBitmap_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0041e0c4((int)piVar1);
  FUN_0041cf14((int *)piVar1[8]);
  System_TObject_Free((int *)piVar1[9]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041da54 TBitmap.virtual_008 ==== */

void TBitmap_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff84;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined4 local_5c [21];
  int *local_8;
  
  local_8 = param_1;
  if (param_2 != (int *)0x0) {
    uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_004173a4);
    if ((char)uVar1 == '\0') {
      TPersistent_virtual_008(local_8,param_2);
      return;
    }
  }
  puStack_6c = (undefined1 *)0x41da84;
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac66c);
  puStack_6c = &LAB_0041db0c;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  if (param_2 == (int *)0x0) {
    System_FillChar(local_5c,0x54,0);
    in_stack_ffffff84 = 0;
    FUN_0041e3e4((int)local_8,0,0,(int *)0x0,0,local_5c);
  }
  else {
    FUN_0041cf10(param_2[8]);
    FUN_0041cf14((int *)local_8[8]);
    local_8[8] = param_2[8];
    *(undefined1 *)((int)local_8 + 0x19) = *(undefined1 *)((int)param_2 + 0x19);
    local_8[0xb] = param_2[0xb];
    *(char *)(local_8 + 0xc) = (char)param_2[0xc];
  }
  *in_FS_OFFSET = in_stack_ffffff84;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac66c);
  return;
}


/* ==== 0041db44 FUN_0041db44 ==== */

void FUN_0041db44(int param_1,HBITMAP param_2,HPALETTE param_3,undefined4 *param_4)

{
  HPALETTE pHVar1;
  int i_val;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60 [21];
  HPALETTE local_c;
  HPALETTE local_8;
  
  puVar2 = local_60;
  for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  puStack_70 = (undefined1 *)0x41db69;
  FUN_0041e0c4(param_1);
  local_8 = (HPALETTE)0x0;
  local_c = (HPALETTE)0x0;
  puStack_74 = &LAB_0041dbd3;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_70 = &stack0xfffffffc;
  pHVar1 = param_3;
  if (param_3 != DAT_004ac650) {
    puStack_70 = &stack0xfffffffc;
    pHVar1 = FUN_0041d740(param_3);
  }
  local_c = pHVar1;
  local_8 = FUN_0041d0e4(param_2,param_3,local_c,*(int *)(param_1 + 0x24),(int)local_60);
  uVar3 = 0;
  FUN_0041e3e4(param_1,local_8,local_c,(int *)0x0,*(undefined1 *)(*(int *)(param_1 + 0x20) + 0x70),
               local_60);
  *in_FS_OFFSET = uVar3;
  return;
}


/* ==== 0041dc04 FUN_0041dc04 ==== */

void FUN_0041dc04(int param_1)

{
  int iVar1;
  
  FUN_0041dea0(param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  SysUtils_FreeAndNil((undefined4 *)(iVar1 + 0x6c));
  return;
}


/* ==== 0041dc28 TBitmap.virtual_010 ==== */

void TBitmap_virtual_010(int param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 0;
  TGraphic_virtual_010(param_1);
  return;
}


/* ==== 0041dc34 FUN_0041dc34 ==== */

void FUN_0041dc34(int param_1)

{
  FUN_0041e0c4(param_1);
  FUN_0041e050(param_1);
  (**(code **)**(undefined4 **)(param_1 + 0x20))();
  return;
}


/* ==== 0041dc50 TBitmap.virtual_014 ==== */

void TBitmap_virtual_014(int *param_1,int *param_2,int *param_3)

{
  HPALETTE hPal;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  HDC pHVar6;
  HGDIOBJ h;
  int x_src;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  int ySrc;
  DWORD rop;
  tagPOINT x_val;
  char local_d;
  HPALETTE pal;
  int *local_8;
  int src;
  
  src = param_1[8];
  local_8 = param_2;
  FUN_004195ac(param_2,0xf);
  FUN_0041e224((int)param_1);
  pal = (HPALETTE)0x0;
  local_d = 0;
  hPal = *(HPALETTE *)(src + 0x10);
  if (hPal != (HPALETTE)0x0) {
    pal = SelectPalette((HDC)local_8[1],hPal,-1);
    RealizePalette((HDC)local_8[1]);
  }
  local_d = hPal != (HPALETTE)0x0;
  iVar3 = GetDeviceCaps((HDC)local_8[1],0xc);
  iVar4 = GetDeviceCaps((HDC)local_8[1],0xe);
  if ((iVar3 * iVar4 < 9) &&
     (iVar3 * iVar4 < (int)((uint)*(ushort *)(src + 0x2a) * (uint)*(ushort *)(src + 0x28)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    GetBrushOrgEx((HDC)local_8[1],&x_val);
    SetStretchBltMode((HDC)local_8[1],4);
    SetBrushOrgEx((HDC)local_8[1],x_val.x,x_val.y,&x_val);
  }
  else {
    uVar7 = FUN_0041dfd0((int)param_1);
    if ((char)uVar7 == '\0') {
      iVar3 = 3;
      pHVar6 = (HDC)FUN_004194d8(local_8);
      SetStretchBltMode(pHVar6,iVar3);
    }
  }
  uVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc8;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    FUN_0041e1c4(param_1);
  }
  piVar5 = (int *)FUN_0041df1c(param_1);
  FUN_004195ac(piVar5,0xf);
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    *in_FS_OFFSET = &stack0xffffffbc;
    pHVar6 = CreateCompatibleDC((HDC)0x0);
    pHVar6 = (HDC)FUN_004198d0((int)pHVar6);
    h = SelectObject(pHVar6,*(HGDIOBJ *)(src + 0xc));
    iVar3 = param_3[2] - *param_3;
    iVar4 = param_3[3] - param_3[1];
    x_src = FUN_0041df1c(param_1);
    uVar7 = 0;
    FUN_00419a74((HDC)local_8[1],*param_3,param_3[1],0,0,pHVar6,*(int *)(src + 0x20),
                 *(int *)(src + 0x1c),0,0,*(HDC *)(x_src + 4),iVar4,iVar3);
    *in_FS_OFFSET = uVar7;
    if (h != (HGDIOBJ)0x0) {
      SelectObject(pHVar6,h);
    }
    if (pHVar6 != (HDC)0x0) {
      DeleteDC(pHVar6);
    }
    return;
  }
  rop = local_8[8];
  iVar3 = *(int *)(src + 0x20);
  src = *(int *)(src + 0x1c);
  ySrc = 0;
  x_src = 0;
  iVar4 = FUN_0041df1c(param_1);
  StretchBlt((HDC)local_8[1],*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],
             *(HDC *)(iVar4 + 4),x_src,ySrc,src,iVar3,rop);
  *in_FS_OFFSET = uVar7;
  if (local_d != '\0') {
    SelectPalette((HDC)local_8[1],pal,-1);
  }
  return;
}


/* ==== 0041dea0 FUN_0041dea0 ==== */

void FUN_0041dea0(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  BOOL BVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (1 < *(int *)(iVar1 + 4)) {
    FUN_0041e0d4(param_1);
    if (*(char *)(iVar1 + 0x71) == '\0') {
      pHVar2 = *(HPALETTE *)(iVar1 + 0x10);
    }
    else {
      pHVar2 = (HPALETTE)0x0;
    }
    FUN_0041db44(param_1,*(HBITMAP *)(iVar1 + 8),pHVar2,(undefined4 *)(iVar1 + 0x18));
    return;
  }
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
    if (*(HGDIOBJ *)(iVar1 + 0x14) != (HGDIOBJ)0x0) {
      BVar3 = DeleteObject(*(HGDIOBJ *)(iVar1 + 0x14));
      if (BVar3 == 0) {
        FUN_00419828();
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return;
}


/* ==== 0041df04 TBitmap.virtual_01c ==== */

undefined4 TBitmap_virtual_01c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0041df1c FUN_0041df1c ==== */

int FUN_0041df1c(int *param_1)

{
  int *piVar1;
  
  if (param_1[9] == 0) {
    FUN_0041e0d4((int)param_1);
    piVar1 = FUN_0041cd1c((int *)&PTR_TPersistent_virtual_000_0041cba4,'\x01',(int)param_1);
    param_1[9] = (int)piVar1;
    piVar1[0xb] = (int)param_1;
    piVar1[10] = *(int *)(*param_1 + 0x10);
    piVar1[0xd] = (int)param_1;
    piVar1[0xc] = (int)FUN_0041dc04;
  }
  return param_1[9];
}


/* ==== 0041df5c TBitmap.virtual_060 ==== */

undefined4 TBitmap_virtual_060(int param_1)

{
  FUN_0041e0c4(param_1);
  FUN_0041e0d4(param_1);
  FUN_0041dc04(param_1);
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
}


/* ==== 0041df80 FUN_0041df80 ==== */

undefined4 FUN_0041df80(int param_1)

{
  int iVar1;
  undefined3 uVar3;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if ((*(int *)(iVar1 + 8) == 0) || (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 0x14))) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar2 = CONCAT31(uVar3,1);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = CONCAT31(uVar3,1);
  }
  return uVar2;
}


/* ==== 0041dfac TBitmap.virtual_020 ==== */

int TBitmap_virtual_020(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x20) + 0x20);
  uVar2 = (int)uVar1 >> 0x1f;
  return (uVar1 ^ uVar2) - uVar2;
}


/* ==== 0041dfbc TBitmap.virtual_064 ==== */

undefined4 TBitmap_virtual_064(int *param_1)

{
  FUN_0041e1c4(param_1);
  return *(undefined4 *)(param_1[8] + 0xc);
}


/* ==== 0041dfd0 FUN_0041dfd0 ==== */

undefined4 FUN_0041dfd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(short *)(iVar1 + 0x28) == 1) && (*(short *)(iVar1 + 0x2a) == 1)) {
    return CONCAT31((int3)((uint)(iVar1 + 0x18) >> 8),1);
  }
  return 0;
}


/* ==== 0041dfec TBitmap.virtual_024 ==== */

undefined4 TBitmap_virtual_024(int param_1)

{
  FUN_0041e224(param_1);
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
}


/* ==== 0041e000 FUN_0041e000 ==== */

uint FUN_0041e000(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0xb] == 0x20000000) {
    uVar1 = FUN_0041dfd0((int)param_1);
    if ((char)uVar1 == '\0') {
      iVar3 = (**(code **)(*param_1 + 0x20))();
      piVar4 = (int *)FUN_0041df1c(param_1);
      uVar2 = FUN_00419464(piVar4,0,iVar3 + -1);
    }
    else {
      uVar2 = 0xffffff;
    }
  }
  else {
    uVar2 = FUN_00417d54(param_1[0xb]);
  }
  return uVar2 | 0x2000000;
}


/* ==== 0041e048 TBitmap.virtual_02c ==== */

undefined4 TBitmap_virtual_02c(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c);
}


/* ==== 0041e050 FUN_0041e050 ==== */

void FUN_0041e050(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    FUN_0041e224(param_1);
    if (*(int *)(iVar1 + 0x30) == 0) {
      GetObjectA(*(HANDLE *)(iVar1 + 8),0x54,(LPVOID)(iVar1 + 0x18));
      *(undefined4 *)(iVar1 + 0x30) = 0x28;
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x20);
      *(undefined2 *)(iVar1 + 0x3c) = 1;
      *(short *)(iVar1 + 0x3e) = *(short *)(iVar1 + 0x28) * *(short *)(iVar1 + 0x2a);
    }
    pHVar2 = FUN_0041d0e4(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),
                          *(HPALETTE *)(iVar1 + 0x10),0,iVar1 + 0x18);
    *(HPALETTE *)(iVar1 + 0x14) = pHVar2;
  }
  return;
}


/* ==== 0041e0c4 FUN_0041e0c4 ==== */

void FUN_0041e0c4(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    FUN_0041cd84(*(int **)(param_1 + 0x24));
  }
  return;
}


/* ==== 0041e0d4 FUN_0041e0d4 ==== */

void FUN_0041e0d4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}


/* ==== 0041e0e4 FUN_0041e0e4 ==== */

void FUN_0041e0e4(int *param_1,uint param_2)

{
  COLORREF color_val;
  HPALETTE pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60 [21];
  HPALETTE local_c;
  HANDLE h_val;
  
  puStack_70 = &stack0xfffffffc;
  h_val = (HANDLE)0x0;
  local_c = (HPALETTE)0x0;
  puStack_74 = &LAB_0041e18e;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  FUN_0041e0c4((int)param_1);
  FUN_0041e0d4((int)param_1);
  color_val = FUN_00417d54(param_2);
  h_val = (HANDLE)FUN_0041d7a4(*(HPALETTE *)(param_1[8] + 8),*(HPALETTE *)(param_1[8] + 0x10),
                               color_val);
  System_FillChar(local_60,0x54,0);
  GetObjectA(h_val,0x54,local_60);
  pHVar1 = *(HPALETTE *)(param_1[8] + 0x10);
  if (pHVar1 != DAT_004ac650) {
    pHVar1 = FUN_0041d740(pHVar1);
  }
  local_c = pHVar1;
  uVar2 = 0;
  FUN_0041e3e4((int)param_1,h_val,local_c,(int *)0x0,*(undefined1 *)(param_1[8] + 0x70),local_60);
  *in_FS_OFFSET = uVar2;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041e1c4 FUN_0041e1c4 ==== */

void FUN_0041e1c4(int *param_1)

{
  int iVar1;
  uint color_val;
  BOOL BVar2;
  
  if ((*(char *)((int)param_1 + 0x2a) == '\0') || (*(char *)((int)param_1 + 0x29) == '\0')) {
    iVar1 = param_1[8];
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_0041cca0(*(int *)(iVar1 + 0xc));
      DeleteObject(*(HGDIOBJ *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    FUN_0041e0c4((int)param_1);
    FUN_0041e0d4((int)param_1);
    color_val = FUN_0041e000(param_1);
    BVar2 = FUN_0041d7a4(*(HPALETTE *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),color_val);
    *(BOOL *)(iVar1 + 0xc) = BVar2;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    *(undefined1 *)((int)param_1 + 0x29) = 1;
  }
  return;
}


/* ==== 0041e224 FUN_0041e224 ==== */

void FUN_0041e224(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  HDC pHVar3;
  int device_caps;
  int device_caps_2;
  char cVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 8)) {
    FUN_0041cca0(*(int *)(iVar1 + 0x14));
  }
  pHVar2 = FUN_00419fc0(*(HGDIOBJ *)(iVar1 + 0x14),(undefined4 *)0x0,
                        1 << ((byte)*(undefined2 *)(iVar1 + 0x3e) & 0x1f));
  *(HPALETTE *)(iVar1 + 0x10) = pHVar2;
  if (pHVar2 != (HPALETTE)0x0) {
    return;
  }
  pHVar3 = GetDC((HWND)0x0);
  pHVar3 = (HDC)FUN_004198d0((int)pHVar3);
  if (*(char *)(iVar1 + 0x71) == '\0') {
    device_caps = GetDeviceCaps(pHVar3,0xc);
    device_caps_2 = GetDeviceCaps(pHVar3,0xe);
    if ((int)((uint)*(ushort *)(iVar1 + 0x2a) * (uint)*(ushort *)(iVar1 + 0x28)) <=
        device_caps * device_caps_2) {
      cVar4 = '\0';
      goto LAB_0041e2b5;
    }
  }
  cVar4 = '\x01';
LAB_0041e2b5:
  *(char *)(iVar1 + 0x71) = cVar4;
  if (cVar4 != '\0') {
    pHVar2 = CreateHalftonePalette(pHVar3);
    *(HPALETTE *)(iVar1 + 0x10) = pHVar2;
  }
  ReleaseDC((HWND)0x0,pHVar3);
  if (*(int *)(iVar1 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


/* ==== 0041e2dc TBitmap.virtual_058 ==== */

void TBitmap_virtual_058(int *param_1,short param_2,HBITMAP h_val,HPALETTE param_4)

{
  int iVar1;
  undefined4 local_58 [5];
  int local_44;
  undefined4 local_40;
  
  if ((param_2 != 2) || (h_val == (HBITMAP)0x0)) {
    FUN_00419798((undefined4 *)PTR_PTR_004ab8c0);
  }
  FUN_0041e0c4((int)param_1);
  System_FillChar(local_58,0x54,0);
  GetObjectA(h_val,0x54,local_58);
  if (local_44 == 0) {
    local_40 = 0;
  }
  FUN_0041db44((int)param_1,h_val,param_4,local_58);
  *(undefined1 *)(param_1[8] + 0x70) = 0;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar1 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041e360 TBitmap.virtual_050 ==== */

void TBitmap_virtual_050(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00412680(param_2);
  iVar2 = FUN_00412664(param_2);
  FUN_0041ea1c(param_1,param_2,iVar1 - iVar2);
  return;
}


/* ==== 0041e384 FUN_0041e384 ==== */

void FUN_0041e384(undefined4 param_1,HMODULE module,undefined *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  uStackY_18 = 0x41e39c;
  piVar1 = FUN_00412b5c((int *)&PTR_TStream_virtual_000_0040f204,'\x01',module,(LPCSTR)0x2,param_3);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  iVar2 = FUN_00412680(piVar1);
  FUN_0041e50c(param_1,piVar1,iVar2);
  *in_FS_OFFSET = uStackY_18;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 0041e3e4 FUN_0041e3e4 ==== */

void FUN_0041e3e4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5,
                 undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int i_val;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 uStackY_24;
  
  bVar4 = 0;
  iVar1 = System_TObject_Create((int *)&LAB_00417310,'\x01',param_3);
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  puVar3 = (undefined4 *)(iVar1 + 0x18);
  for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
    *puVar3 = *param_6;
    param_6 = param_6 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined1 *)(iVar1 + 0x70) = param_5;
  if (*(int *)(iVar1 + 0x2c) != 0) {
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 8);
  }
  uVar2 = System__AsClass(param_4,(int)&PTR_TMemoryStream_virtual_000_0040f194);
  *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  *in_FS_OFFSET = uStackY_24;
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_004ac66c);
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  FUN_0041cf14(*(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0041cf10(iVar1);
  *in_FS_OFFSET = uStackY_24;
  uStackY_24 = 0x41e4ca;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_004ac66c);
  return;
}


/* ==== 0041e4e4 TBitmap.virtual_030 ==== */

void TBitmap_virtual_030(int param_1,int *param_2,int param_3)

{
  int iStack_10;
  
  iStack_10 = param_3;
  (**(code **)(*param_2 + 4))(param_2,&iStack_10,4);
  FUN_0041ea1c(param_1,param_2,iStack_10);
  return;
}


/* ==== 0041e50c FUN_0041e50c ==== */

void FUN_0041e50c(undefined4 param_1,int *param_2,int param_3)

{
  WORD WVar1;
  uint uVar2;
  BITMAPINFO *pBVar3;
  DWORD DVar4;
  HDC pHVar5;
  HBITMAP h;
  HGDIOBJ ho;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_c4;
  undefined1 *puStack_c0;
  undefined1 *puStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  ushort local_48;
  ushort local_46;
  WORD local_44;
  WORD local_42;
  BITMAPINFO *bitmapinfo;
  int *local_3c;
  HPALETTE pal;
  HPALETTE pal_2;
  HGDIOBJ h_val;
  HBITMAP local_2c;
  byte local_25;
  DWORD local_24;
  undefined4 *local_20;
  BITMAPINFO *local_1c;
  void *pj_bits;
  HDC hdc_val;
  HDC local_10;
  int *local_c;
  undefined4 local_8;
  
  pal_2 = (HPALETTE)0x0;
  local_2c = (HBITMAP)0x0;
  local_3c = (int *)0x0;
  puStack_b0 = (undefined1 *)0x41e53f;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_2 + 4))(param_2,&local_24,4);
  local_25 = local_24 == 0xc;
  if ((bool)local_25) {
    local_24 = 0x28;
  }
  puStack_b0 = (undefined1 *)0x41e564;
  bitmapinfo = (BITMAPINFO *)System__GetMem(local_24 + 0x40c);
  puStack_b4 = &LAB_0041e9d3;
  uStack_b8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b8;
  puStack_c0 = &LAB_0041e9a6;
  uStack_c4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c4;
  local_1c = bitmapinfo;
  if (local_25 == 0) {
    puStack_bc = &stack0xfffffffc;
    puStack_b0 = &stack0xfffffffc;
    (**(code **)(*local_c + 4))(local_c,&(bitmapinfo->bmiHeader).biWidth,local_24 - 4);
    iVar7 = param_3 - local_24;
    DVar4 = (bitmapinfo->bmiHeader).biCompression;
    if ((DVar4 != 3) && (DVar4 != 0)) {
      local_3c = (int *)System_TObject_Create
                                  ((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',
                                   extraout_ECX);
      (**(code **)(*local_3c + 8))(local_3c,&local_24,4);
      (**(code **)(*local_3c + 8))(local_3c,&(local_1c->bmiHeader).biWidth,local_24 - 4);
      FUN_00412728(local_3c,local_c,iVar7);
      (**(code **)(*local_3c + 0xc))(local_3c,iVar7,CONCAT22(extraout_var,2));
      local_c = local_3c;
    }
  }
  else {
    puStack_bc = &stack0xfffffffc;
    puStack_b0 = &stack0xfffffffc;
    (**(code **)(*local_c + 4))(local_c,&local_48,8);
    pBVar3 = bitmapinfo;
    System_FillChar((undefined4 *)bitmapinfo,0x28,0);
    (pBVar3->bmiHeader).biWidth = (uint)local_48;
    (pBVar3->bmiHeader).biHeight = (uint)local_46;
    (pBVar3->bmiHeader).biPlanes = local_44;
    (pBVar3->bmiHeader).biBitCount = local_42;
    iVar7 = param_3 + -0xc;
  }
  pBVar3 = bitmapinfo;
  (bitmapinfo->bmiHeader).biSize = local_24;
  local_20 = (undefined4 *)
             ((int)&(((BITMAPINFO *)(local_1c->bmiColors + -10))->bmiHeader).biSize + local_24);
  if ((bitmapinfo->bmiHeader).biPlanes != 1) {
    FUN_004197b0();
  }
  if ((local_24 == 0x28) &&
     (((WVar1 = (pBVar3->bmiHeader).biBitCount, WVar1 == 0x10 || (WVar1 == 0x20)) &&
      ((pBVar3->bmiHeader).biCompression == 3)))) {
    FUN_004126b8(local_c,local_20,0xc);
    local_20 = local_20 + 3;
    iVar7 = iVar7 + -0xc;
  }
  if ((pBVar3->bmiHeader).biClrUsed == 0) {
    DVar4 = FUN_00419a40((pBVar3->bmiHeader).biBitCount);
    (pBVar3->bmiHeader).biClrUsed = DVar4;
  }
  uVar8 = (uint)local_25;
  FUN_004126b8(local_c,local_20,(pBVar3->bmiHeader).biClrUsed * (uint)(byte)(&DAT_004aa5e4)[uVar8]);
  uVar8 = iVar7 - (pBVar3->bmiHeader).biClrUsed * (uint)(byte)(&DAT_004aa5e4)[uVar8];
  if ((pBVar3->bmiHeader).biSizeImage == 0) {
    iVar7 = FUN_00419a60((pBVar3->bmiHeader).biWidth,(uint)(pBVar3->bmiHeader).biBitCount,0x20);
    uVar2 = (pBVar3->bmiHeader).biHeight;
    uVar6 = (int)uVar2 >> 0x1f;
    (pBVar3->bmiHeader).biSizeImage = iVar7 * ((uVar2 ^ uVar6) - uVar6);
  }
  uVar2 = (pBVar3->bmiHeader).biSizeImage;
  if (uVar2 < uVar8) {
    uVar8 = uVar2;
  }
  if (local_25 != 0) {
    FUN_00419d08((int)local_20);
  }
  pHVar5 = GetDC((HWND)0x0);
  local_10 = (HDC)FUN_004198d0((int)pHVar5);
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff30;
  DVar4 = (bitmapinfo->bmiHeader).biCompression;
  if (((DVar4 == 0) || (DVar4 == 3)) && (DAT_004aa3a4 == '\0')) {
    local_2c = CreateDIBSection(local_10,local_1c,0,&pj_bits,(HANDLE)0x0,0);
    if ((local_2c == (HBITMAP)0x0) || (pj_bits == (void *)0x0)) {
      DVar4 = GetLastError();
      if (DVar4 == 0) {
        FUN_004197b0();
      }
      else {
        FUN_0040c6d4();
      }
    }
    uVar10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff24;
    FUN_004126b8(local_c,pj_bits,uVar8);
    *in_FS_OFFSET = uVar10;
    *in_FS_OFFSET = uVar9;
    ReleaseDC((HWND)0x0,local_10);
    return;
  }
  hdc_val = (HDC)0x0;
  pj_bits = (void *)System__GetMem(uVar8);
  *in_FS_OFFSET = &stack0xffffff24;
  FUN_004126b8(local_c,pj_bits,uVar8);
  pHVar5 = CreateCompatibleDC(local_10);
  hdc_val = (HDC)FUN_004198d0((int)pHVar5);
  h = CreateCompatibleBitmap(local_10,1,1);
  h_val = SelectObject(hdc_val,h);
  pal = (HPALETTE)0x0;
  DVar4 = (bitmapinfo->bmiHeader).biClrUsed;
  if (DVar4 != 0) {
    pal_2 = FUN_00419fc0((HGDIOBJ)0x0,local_20,DVar4);
    pal = SelectPalette(hdc_val,pal_2,0);
    RealizePalette(hdc_val);
  }
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff18;
  local_2c = CreateDIBitmap(hdc_val,&local_1c->bmiHeader,4,pj_bits,local_1c,0);
  if (local_2c == (HBITMAP)0x0) {
    DVar4 = GetLastError();
    if (DVar4 == 0) {
      FUN_004197b0();
    }
    else {
      FUN_0040c6d4();
    }
  }
  *in_FS_OFFSET = uVar9;
  if (pal != (HPALETTE)0x0) {
    SelectPalette(hdc_val,pal,-1);
  }
  ho = SelectObject(hdc_val,h_val);
  DeleteObject(ho);
  return;
}


/* ==== 0041ea1c FUN_0041ea1c ==== */

void FUN_0041ea1c(int param_1,int *param_2,int param_3)

{
  short local_70 [7];
  undefined4 local_62 [21];
  
  FUN_0041e0c4(param_1);
  if (param_3 == 0) {
    System_FillChar(local_62,0x54,0);
    FUN_0041e3e4(param_1,0,0,(int *)0x0,0,local_62);
  }
  else {
    FUN_004126b8(param_2,local_70,0xe);
    if (local_70[0] != 0x4d42) {
      FUN_004197b0();
    }
    FUN_0041e50c(param_1,param_2,param_3 + -0xe);
  }
  return;
}


/* ==== 0041ea8c FUN_0041ea8c ==== */

void FUN_0041ea8c(int *param_1,HANDLE h_val)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 local_5c [21];
  HPALETTE local_8;
  
  iVar1 = param_1[8];
  if (h_val != *(HANDLE *)(iVar1 + 8)) {
    FUN_0041e0c4((int)param_1);
    System_FillChar(local_5c,0x54,0);
    if (h_val != (HANDLE)0x0) {
      GetObjectA(h_val,0x54,local_5c);
    }
    if (*(int *)(iVar1 + 4) == 1) {
      local_8 = *(HPALETTE *)(iVar1 + 0x10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else if (*(HPALETTE *)(iVar1 + 0x10) == DAT_004ac650) {
      local_8 = DAT_004ac650;
    }
    else {
      local_8 = FUN_0041d740(*(HPALETTE *)(iVar1 + 0x10));
    }
    *in_FS_OFFSET = &stack0xffffff8c;
    uVar2 = 0;
    FUN_0041e3e4((int)param_1,h_val,local_8,(int *)0x0,0,local_5c);
    *in_FS_OFFSET = uVar2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041eb50 TBitmap.virtual_068 ==== */

void TBitmap_virtual_068(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HPALETTE pHVar4;
  HPALETTE pHVar5;
  int i_val;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  byte bVar9;
  undefined4 local_64 [6];
  undefined4 local_4c;
  
  bVar9 = 0;
  uVar3 = FUN_0041df80((int)param_1);
  if (param_2 != (char)uVar3) {
    iVar1 = param_1[8];
    if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0x14) == 0)) {
      if (param_2 == '\x01') {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x30) = 0x28;
      }
    }
    else {
      if (param_2 == '\0') {
        if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 8))) {
          return;
        }
        FUN_0041e0c4((int)param_1);
        FUN_0041e224((int)param_1);
        FUN_0041e050((int)param_1);
        if (*(int *)(iVar1 + 4) == 1) {
          uVar3 = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(iVar1 + 0x14) = 0;
          uVar2 = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)(iVar1 + 0x10) = 0;
          FUN_0041e3e4((int)param_1,uVar3,uVar2,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
                       (undefined4 *)(iVar1 + 0x18));
        }
        else {
          FUN_0041db44((int)param_1,*(HBITMAP *)(iVar1 + 0x14),*(HPALETTE *)(iVar1 + 0x10),
                       (undefined4 *)(iVar1 + 0x18));
        }
      }
      else {
        if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
          return;
        }
        FUN_0041e0c4((int)param_1);
        FUN_0041e224((int)param_1);
        puVar6 = (undefined4 *)(iVar1 + 0x18);
        puVar7 = local_64;
        for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        }
        local_4c = 0;
        bVar8 = *(int *)(iVar1 + 4) != 1;
        if (bVar8) {
          pHVar4 = FUN_0041d740(*(HPALETTE *)(iVar1 + 0x10));
        }
        else {
          pHVar4 = *(HPALETTE *)(iVar1 + 0x10);
        }
        pHVar5 = FUN_0041d0e4(*(HBITMAP *)(iVar1 + 0x14),*(HPALETTE *)(iVar1 + 0x10),pHVar4,0,
                              (int)local_64);
        if (bVar8) {
          FUN_0041e3e4((int)param_1,pHVar5,pHVar4,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
                       (undefined4 *)&stack0xffffff94);
        }
        else {
          *(HPALETTE *)(iVar1 + 8) = pHVar5;
        }
      }
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  return;
}


/* ==== 0041ec88 TBitmap.virtual_034 ==== */

void TBitmap_virtual_034(int *param_1,int param_2)

{
  int iVar1;
  int i_val;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_60 [2];
  int local_58;
  int local_40;
  
  bVar4 = 0;
  iVar1 = param_1[8];
  if (param_2 != *(int *)(iVar1 + 0x20)) {
    FUN_0041e0d4((int)param_1);
    puVar2 = (undefined4 *)(iVar1 + 0x18);
    puVar3 = local_60;
    for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_58 = param_2;
    local_40 = param_2;
    FUN_0041db44((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041ecdc FUN_0041ecdc ==== */

void FUN_0041ecdc(int *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  int i_val;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_60 [4];
  ushort local_50;
  ushort local_4e;
  undefined4 local_48;
  ushort local_3c;
  ushort local_3a;
  
  bVar5 = 0;
  iVar1 = param_1[8];
  if ((*(short *)(iVar1 + 0x3c) == 1) && (*(short *)(iVar1 + 0x3e) == 1)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  if (param_2 != bVar2) {
    FUN_0041e0d4((int)param_1);
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    puVar4 = local_60;
    for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    local_48 = 0;
    local_50 = (ushort)param_2;
    local_4e = local_50;
    local_3c = local_50;
    local_3a = local_50;
    FUN_0041db44((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041ed5c TBitmap.virtual_038 ==== */

void TBitmap_virtual_038(int *param_1,HPALETTE param_2)

{
  int iVar1;
  int i_val;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 local_5c [21];
  HPALETTE local_8;
  
  bVar4 = 0;
  iVar1 = param_1[8];
  if (param_2 != *(HPALETTE *)(iVar1 + 0x10)) {
    if ((param_2 == (HPALETTE)0x0) && (*(int *)(iVar1 + 4) == 1)) {
      FUN_0041756c(*(HGDIOBJ *)(iVar1 + 0x10));
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else {
      FUN_0041e0c4((int)param_1);
      FUN_0041e0d4((int)param_1);
      puVar2 = (undefined4 *)(iVar1 + 0x18);
      puVar3 = local_5c;
      for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      puStack_74 = (undefined1 *)0x41edc2;
      local_8 = FUN_0041d0e4(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),param_2,0,
                             (int)local_5c);
      puStack_78 = &LAB_0041edf3;
      uStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_7c;
      uVar5 = 0;
      puStack_74 = &stack0xfffffffc;
      FUN_0041e3e4((int)param_1,local_8,param_2,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),local_5c);
      *in_FS_OFFSET = uVar5;
    }
    FUN_0041cfdc(*(HGDIOBJ *)(param_1[8] + 0x14),param_2,param_1[8] + 0x18);
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041ee30 FUN_0041ee30 ==== */

void FUN_0041ee30(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != param_1[0xb]) {
    if (param_2 == 0x20000000) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    param_1[0xb] = param_2;
    iVar1 = param_1[8];
    if (1 < *(int *)(iVar1 + 4)) {
      FUN_0041e0d4((int)param_1);
      FUN_0041db44((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),
                   (undefined4 *)(iVar1 + 0x18));
    }
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041ee80 FUN_0041ee80 ==== */

void FUN_0041ee80(int *param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 != (char)param_1[0xc]) {
    if (param_2 == '\0') {
      FUN_0041ee30(param_1,0x20000000);
    }
    else {
      uVar1 = FUN_0041e000(param_1);
      FUN_0041ee30(param_1,uVar1);
    }
  }
  return;
}


/* ==== 0041eeac TBitmap.virtual_040 ==== */

void TBitmap_virtual_040(int *param_1,int param_2)

{
  int iVar1;
  int i_val;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_60;
  int local_5c;
  int local_44;
  
  bVar4 = 0;
  iVar1 = param_1[8];
  if (param_2 != *(int *)(iVar1 + 0x1c)) {
    FUN_0041e0d4((int)param_1);
    puVar2 = (undefined4 *)(iVar1 + 0x18);
    puVar3 = &local_60;
    for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_5c = param_2;
    local_44 = param_2;
    FUN_0041db44((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),&local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041ef00 TBitmap.virtual_044 ==== */

void TBitmap_virtual_044(int *param_1,int *param_2)

{
  FUN_0041ef08(param_1,param_2,'\x01');
  return;
}


/* ==== 0041ef08 FUN_0041ef08 ==== */

void FUN_0041ef08(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  HGDIOBJ select_object;
  int local_43c;
  uint local_438;
  int local_434;
  HGDIOBJ h_val;
  undefined1 local_42c [10];
  int local_422;
  undefined4 local_41e;
  undefined2 local_41a;
  undefined2 local_418;
  undefined2 local_416;
  undefined2 local_414;
  tagPALETTEENTRY local_412 [256];
  
  if (*(int **)(param_1[8] + 0x6c) == (int *)0x0) {
    FUN_0041e050((int)param_1);
    iVar1 = param_1[8];
    local_43c = 0;
    if (*(HANDLE *)(iVar1 + 0x14) != (HANDLE)0x0) {
      FUN_0041a714(*(HANDLE *)(iVar1 + 0x14),&local_434,&local_43c,*(uint *)(iVar1 + 0x50));
      if (*(char *)(iVar1 + 0x70) != '\0') {
        local_434 = 0xc;
        if (*(ushort *)(iVar1 + 0x3e) < 9) {
          local_434 = (1 << ((byte)*(ushort *)(iVar1 + 0x3e) & 0x1f)) * 3 + 0xc;
        }
      }
      local_43c = local_43c + local_434 + 0xe;
      System_FillChar((undefined4 *)local_42c,0xe,0);
      local_42c._0_2_ = 0x4d42;
      piVar3 = (int *)FUN_0041df1c(param_1);
      FUN_004195ac(piVar3,1);
      select_object = SelectObject(*(HDC *)(param_1[9] + 4),*(HGDIOBJ *)(iVar1 + 0x14));
      h_val = (HGDIOBJ)FUN_004198d0((int)select_object);
      local_438 = GetDIBColorTable(*(HDC *)(param_1[9] + 4),0,0x100,(RGBQUAD *)local_412);
      SelectObject(*(HDC *)(param_1[9] + 4),h_val);
      uVar2 = *(uint *)(iVar1 + 0x50);
      if ((uVar2 != 0) && (uVar2 < local_438)) {
        local_438 = uVar2;
      }
      if ((((*(char *)(iVar1 + 0x70) == '\0') && (local_438 == 0)) && (*(int *)(iVar1 + 0x10) != 0))
         && (*(char *)(iVar1 + 0x71) == '\0')) {
        local_438 = FUN_0041a064(*(HPALETTE *)(iVar1 + 0x10),local_412,0xff);
        if (8 < *(ushort *)(iVar1 + 0x3e)) {
          local_43c = local_43c + local_438 * 4;
          local_434 = local_434 + local_438 * 4;
        }
      }
      local_42c._2_4_ = local_43c;
      local_422 = local_434 + 0xe;
    }
    if (param_3 != '\0') {
      FUN_004126f0(param_2,&local_43c,4);
    }
    if (local_43c != 0) {
      FUN_0041d098(iVar1 + 0x18);
      if (local_438 != 0) {
        if ((*(uint *)(iVar1 + 0x50) == 0) || (*(uint *)(iVar1 + 0x50) != local_438)) {
          *(uint *)(iVar1 + 0x50) = local_438;
        }
        if (*(char *)(iVar1 + 0x70) != '\0') {
          FUN_00419d40((int)local_412,(int *)&local_438);
        }
      }
      if (*(char *)(iVar1 + 0x70) == '\0') {
        FUN_004126f0(param_2,local_42c,0xe);
        FUN_004126f0(param_2,iVar1 + 0x30,0x28);
        if ((8 < *(ushort *)(iVar1 + 0x3e)) && ((*(byte *)(iVar1 + 0x40) & 3) != 0)) {
          FUN_004126f0(param_2,iVar1 + 0x58,0xc);
        }
      }
      else {
        local_41e = 0xc;
        local_41a = *(undefined2 *)(iVar1 + 0x34);
        local_418 = *(undefined2 *)(iVar1 + 0x38);
        local_416 = 1;
        local_414 = *(undefined2 *)(iVar1 + 0x3e);
        FUN_004126f0(param_2,local_42c,0xe);
        FUN_004126f0(param_2,&local_41e,0xc);
      }
      FUN_004126f0(param_2,local_412,(byte)(&DAT_004aa5e8)[*(byte *)(iVar1 + 0x70)] * local_438);
      FUN_004126f0(param_2,*(undefined4 *)(iVar1 + 0x2c),*(int *)(iVar1 + 0x44));
    }
  }
  else {
    local_43c = FUN_00412680(*(int **)(param_1[8] + 0x6c));
    if (param_3 != '\0') {
      FUN_004126f0(param_2,&local_43c,4);
    }
    (**(code **)(*param_2 + 8))(param_2,*(undefined4 *)(*(int *)(param_1[8] + 0x6c) + 4),local_43c);
  }
  return;
}


/* ==== 0041f1d8 FUN_0041f1d8 ==== */

undefined4 FUN_0041f1d8(int param_1)

{
  undefined4 uVar1;
  
  FUN_0041e0d4(param_1);
  FUN_0041dc04(param_1);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10) = 0;
  return uVar1;
}


/* ==== 0041f1fc TBitmap.virtual_054 ==== */

void TBitmap_virtual_054(int *param_1,int *param_2)

{
  FUN_0041ef08(param_1,param_2,'\0');
  return;
}


/* ==== 0041f204 TBitmap.virtual_05c ==== */

void TBitmap_virtual_05c(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  HPALETTE pHVar2;
  int i_val;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uStackY_7c;
  undefined1 *puStackY_78;
  undefined1 *puStackY_74;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_8;
  
  bVar5 = 0;
  *param_2 = 2;
  local_8 = param_3;
  FUN_0041e0d4(param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  puVar3 = (undefined4 *)(iVar1 + 0x18);
  puVar4 = local_5c;
  for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_44 = 0;
  local_48 = 0;
  puStackY_74 = (undefined1 *)0x41f251;
  pHVar2 = FUN_0041d0e4(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),
                        *(HPALETTE *)(iVar1 + 0x10),*(int *)(param_1 + 0x24),(int)local_5c);
  *local_8 = pHVar2;
  puStackY_78 = &LAB_0041f27e;
  uStackY_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_7c;
  puStackY_74 = &stack0xfffffffc;
  pHVar2 = FUN_0041d740(*(HPALETTE *)(*(int *)(param_1 + 0x20) + 0x10));
  *param_4 = pHVar2;
  *in_FS_OFFSET = uStackY_7c;
  return;
}


/* ==== 0041f2a4 TIconImage.Destroy ==== */

void TIconImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[3]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041f2d4 TIconImage.virtual_000 ==== */

void TIconImage_virtual_000(int param_1)

{
  if (*(HICON *)(param_1 + 8) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* ==== 0041f2ec TIcon.virtual_00c ==== */

int * TIcon_virtual_00c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TGraphic_virtual_00c(param_1,'\0',param_3);
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  iVar1 = System_TObject_Create((int *)&PTR_TIconImage_virtual_000_00417488,'\x01',extraout_ECX_00);
  param_1[8] = iVar1;
  FUN_0041cf10(iVar1);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0041f340 TIcon.Destroy ==== */

void TIcon_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0041cf14((int *)piVar1[8]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041f370 TIcon.virtual_008 ==== */

void TIcon_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (int *)0x0) &&
     (uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_004174e4),
     (char)uVar1 == '\0')) {
    TPersistent_virtual_008(param_1,param_2);
    return;
  }
  if (param_2 == (int *)0x0) {
    FUN_0041f648((int)param_1,0,0);
  }
  else {
    FUN_0041cf10(param_2[8]);
    FUN_0041cf14((int *)param_1[8]);
    param_1[8] = param_2[8];
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041f3d0 TIcon.virtual_014 ==== */

void TIcon_virtual_014(int param_1,int *param_2,int *param_3)

{
  HICON hIcon;
  int cxWidth;
  int cyWidth;
  UINT istepIfAniCur;
  HBRUSH hbrFlickerFreeDraw;
  UINT diFlags;
  
  FUN_004195ac(param_2,1);
  diFlags = 3;
  hbrFlickerFreeDraw = (HBRUSH)0x0;
  istepIfAniCur = 0;
  cyWidth = 0;
  cxWidth = 0;
  hIcon = (HICON)FUN_0041f428(param_1);
  DrawIconEx((HDC)param_2[1],*param_3,param_3[1],hIcon,cxWidth,cyWidth,istepIfAniCur,
             hbrFlickerFreeDraw,diFlags);
  return;
}


/* ==== 0041f410 TIcon.virtual_01c ==== */

undefined4 TIcon_virtual_01c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0xc) == 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0041f428 FUN_0041f428 ==== */

undefined4 FUN_0041f428(int param_1)

{
  FUN_0041f464(param_1);
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
}


/* ==== 0041f43c TIcon.virtual_020 ==== */

void TIcon_virtual_020(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x14) == 0) {
    GetSystemMetrics(0xc);
  }
  return;
}


/* ==== 0041f450 TIcon.virtual_02c ==== */

void TIcon_virtual_02c(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x10) == 0) {
    GetSystemMetrics(0xb);
  }
  return;
}


/* ==== 0041f464 FUN_0041f464 ==== */

void FUN_0041f464(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [2];
  short local_12;
  ushort local_10;
  undefined1 local_c [4];
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int **)(iVar1 + 0xc) != (int *)0x0)) {
    FUN_00412674(*(int **)(iVar1 + 0xc),0);
    uStack_18 = 0x41f491;
    FUN_004126b8(*(int **)(iVar1 + 0xc),auStack_14,6);
    if (local_12 != 0) {
      if (local_12 == 1) {
        uStack_18 = 6;
        FUN_0041a310(*(int **)(iVar1 + 0xc),local_c,(uint)local_10,(int *)(iVar1 + 0x10),
                     (int *)(param_1 + 0x24));
      }
      else {
        uStack_18 = 0x41f4cd;
        FUN_004197bc();
      }
    }
    *(undefined4 *)(iVar1 + 8) = uStack_18;
  }
  return;
}


/* ==== 0041f4dc FUN_0041f4dc ==== */

void FUN_0041f4dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  HICON icon;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_e;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0xc) == 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      puStack_20 = (undefined1 *)0x41f4ff;
      FUN_004197bc();
      param_3 = extraout_ECX;
    }
    puStack_20 = (undefined1 *)0x41f50b;
    local_8 = (int *)System_TObject_Create
                               ((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',param_3);
    puStack_24 = &LAB_0041f569;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_0041f428(param_1);
    if (iVar2 == DAT_004ac668) {
      System_FillChar(&local_e,6,0);
      FUN_004126f0(local_8,&local_e,6);
    }
    else {
      icon = (HICON)FUN_0041f428(param_1);
      FUN_0041a854(local_8,icon,'\0');
    }
    *in_FS_OFFSET = uStack_28;
    *(int **)(iVar1 + 0xc) = local_8;
  }
  return;
}


/* ==== 0041f590 TIcon.virtual_050 ==== */

void TIcon_virtual_050(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_e [2];
  ushort local_c;
  int *local_8;
  
  puStack_20 = (undefined1 *)0x41f5a9;
  local_8 = (int *)System_TObject_Create
                             ((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',param_3);
  puStack_24 = &LAB_0041f61f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar1 = FUN_00412680(param_2);
  iVar2 = FUN_00412664(param_2);
  (**(code **)*local_8)(local_8,iVar1 - iVar2);
  iVar1 = FUN_00412680(local_8);
  FUN_004126b8(param_2,local_8[1],iVar1);
  FUN_004126b8(local_8,local_e,6);
  if (1 < local_c) {
    FUN_004197bc();
  }
  FUN_0041f648((int)param_1,0,local_8);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x41f63f;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041f648 FUN_0041f648 ==== */

void FUN_0041f648(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x41f661;
  iVar1 = System_TObject_Create((int *)&PTR_TIconImage_virtual_000_00417488,'\x01',param_3);
  puStack_1c = &LAB_0041f688;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *in_FS_OFFSET = uStack_20;
  uStack_18 = 0x41f6a7;
  FUN_0041cf10(iVar1);
  uStack_18 = 0x41f6af;
  FUN_0041cf14(*(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}


/* ==== 0041f6bc FUN_0041f6bc ==== */

void FUN_0041f6bc(int *param_1,undefined4 param_2)

{
  FUN_0041f648((int)param_1,param_2,0);
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041f6d4 TIcon.virtual_034 ==== */

void TIcon_virtual_034(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return;
  }
  FUN_00419780((undefined4 *)PTR_PTR_004ab704);
  return;
}


/* ==== 0041f6ec TIcon.virtual_03c ==== */

void TIcon_virtual_03c(void)

{
  return;
}


/* ==== 0041f6f0 TIcon.virtual_040 ==== */

void TIcon_virtual_040(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    return;
  }
  FUN_00419780((undefined4 *)PTR_PTR_004ab704);
  return;
}


/* ==== 0041f708 TIcon.virtual_054 ==== */

void TIcon_virtual_054(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_0041f4dc(param_1,param_2,param_3);
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0xc);
  iVar2 = FUN_00412680(piVar1);
  FUN_004126f0(param_2,piVar1[1],iVar2);
  return;
}


/* ==== 0041f734 TIcon.virtual_058 ==== */

void TIcon_virtual_058(void)

{
  FUN_00419780((undefined4 *)PTR_PTR_004ab600);
  return;
}


/* ==== 0041f748 TIcon.virtual_05c ==== */

void TIcon_virtual_05c(void)

{
  FUN_00419780((undefined4 *)PTR_PTR_004ab600);
  return;
}


/* ==== 0041f75c FUN_0041f75c ==== */

void FUN_0041f75c(void)

{
  HDC hdc;
  
  hdc = GetDC((HWND)0x0);
  DAT_004ac658 = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  DAT_004ac650 = FUN_00419e10((undefined4 *)&DAT_004aa5ec);
  return;
}


/* ==== 0041f794 FUN_0041f794 ==== */

BYTE FUN_0041f794(void)

{
  HDC hdc;
  HGDIOBJ select_object;
  BOOL BVar1;
  BYTE BVar2;
  tagTEXTMETRICA textmetric;
  
  BVar2 = '\x01';
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    select_object = SelectObject(hdc,DAT_004ac664);
    if (select_object != (HGDIOBJ)0x0) {
      BVar1 = GetTextMetricsA(hdc,&textmetric);
      if (BVar1 != 0) {
        BVar2 = textmetric.tmCharSet;
      }
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  return BVar2;
}


/* ==== 0041f7d8 FUN_0041f7d8 ==== */

void FUN_0041f7d8(void)

{
  BYTE BVar1;
  int i_val;
  undefined4 *puVar2;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  i_val = MulDiv(8,DAT_004ac658,0x48);
  DAT_004aa37c = -i_val;
  if (PTR_DAT_004aba14[8] != '\0') {
    BVar1 = FUN_0041f794();
    if (BVar1 == 0x80) {
      puVar2 = &DAT_0041f83c;
      pcVar3 = s_MS_Sans_Serif_004aa383;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *(undefined4 *)pcVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
      }
      i_val = MulDiv(9,DAT_004ac658,0x48);
      DAT_004aa37c = -i_val;
      DAT_004aa382 = 0x80;
    }
  }
  return;
}


/* ==== 0041f8a8 FUN_0041f8a8 ==== */

int * FUN_0041f8a8(int *param_1,char param_2,undefined4 param_3)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe8,
                                         in_stack_ffffffec);
    cVar1 = extraout_DL;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041f8e0 TPatternManager.Destroy ==== */

void TPatternManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0041fad8((int)piVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0041f90c FUN_0041f90c ==== */

void FUN_0041f90c(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 0041f918 FUN_0041f918 ==== */

void FUN_0041f918(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 0041f924 FUN_0041f924 ==== */

void FUN_0041f924(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  
  puStack_1c = (undefined1 *)0x41f93c;
  FUN_0041f90c(param_1);
  puStack_20 = &LAB_0041f9c5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  for (local_c = *(undefined4 **)(param_1 + 4);
      (local_c != (undefined4 *)0x0 && ((param_2 != local_c[2] || (param_3 != local_c[3]))));
      local_c = (undefined4 *)*local_c) {
  }
  if (local_c == (undefined4 *)0x0) {
    puStack_1c = &stack0xfffffffc;
    puVar1 = (undefined4 *)System__GetMem(0x10);
    *puVar1 = *(undefined4 *)(param_1 + 4);
    piVar2 = FUN_0041f9d8(param_1,param_2,param_3);
    puVar1[1] = piVar2;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041f9cc;
  puStack_20 = (undefined1 *)0x41f9c4;
  FUN_0041f918(param_1);
  return;
}


/* ==== 0041f9d8 FUN_0041f9d8 ==== */

int * FUN_0041f9d8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint x_val;
  uint y_val;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  RECT local_1c;
  int *local_c;
  uint local_8;
  
  puStack_2c = (undefined1 *)0x41f9f2;
  local_8 = param_3;
  local_c = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
  puStack_30 = &LAB_0041fab7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_c + 0x40))(local_c,8);
  (**(code **)(*local_c + 0x34))(local_c,8);
  piVar1 = (int *)FUN_0041df1c(local_c);
  TBrush_SetStyle((int *)piVar1[5],'\0');
  TBrush_SetColor((int *)piVar1[5],param_2);
  uVar2 = (**(code **)(*local_c + 0x20))();
  pRVar6 = &local_1c;
  uVar3 = (**(code **)(*local_c + 0x2c))();
  Classes_Rect(0,0,uVar3,&pRVar6->left,uVar2);
  FUN_0041907c(piVar1,&local_1c);
  y_val = 0;
  do {
    x_val = 0;
    do {
      uVar4 = y_val & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      uVar5 = x_val & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 == uVar5) {
        FUN_00419490(piVar1,x_val,y_val,local_8);
      }
      x_val = x_val + 1;
    } while (x_val != 9);
    y_val = y_val + 1;
  } while (y_val != 9);
  FUN_0041dc34((int)local_c);
  *in_FS_OFFSET = uStack_34;
  return local_c;
}


/* ==== 0041fad8 FUN_0041fad8 ==== */

void FUN_0041fad8(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = *(undefined4 **)(param_1 + 4);
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  puStack_14 = (undefined *)0x41faf4;
  local_c = local_10;
  local_8 = param_1;
  FUN_0041f90c(param_1);
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined4 *)(local_8 + 4) = *local_10;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &DAT_0041fb2a;
  uStack_18 = 0x41fb22;
  FUN_0041f918(local_8);
  return;
}


/* ==== 0041fb50 FUN_0041fb50 ==== */

undefined4 FUN_0041fb50(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_004ac6ac != 0) {
    uVar1 = FUN_00417d54(param_2);
    iVar2 = FUN_00417d54(param_1);
    iVar2 = FUN_0041f924(DAT_004ac6ac,iVar2,uVar1);
    return *(undefined4 *)(iVar2 + 4);
  }
  return 0;
}


