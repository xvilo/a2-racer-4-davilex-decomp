/* SetDebug.exe — units/Graphics.pas: 319 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004158e4 FUN_004158e4 ==== */

void FUN_004158e4(HGDIOBJ ho_val)

{
  if ((ho_val != (HGDIOBJ)0x0) && (ho_val != DAT_00447648)) {
    DeleteObject(ho_val);
  }
  return;
}


/* ==== 00415958 FUN_00415958 ==== */

uint FUN_00415958(byte *param_1,int param_2)

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


/* ==== 0041596c FUN_0041596c ==== */

int * FUN_0041596c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
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
  *(short *)(param_1 + 8) = (short)param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004159a8 TResourceManager.Destroy ==== */

void TResourceManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 004159cc FUN_004159cc ==== */

void FUN_004159cc(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 004159d8 FUN_004159d8 ==== */

void FUN_004159d8(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 004159e4 FUN_004159e4 ==== */

void FUN_004159e4(int param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  
  puStack_18 = (undefined1 *)0x4159ff;
  uVar1 = FUN_00415958(param_2,(uint)*(ushort *)(param_1 + 0x20));
  puStack_18 = (undefined1 *)0x415a09;
  FUN_004159cc(param_1);
  puStack_1c = &LAB_00415ab8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  for (local_c = *(undefined4 **)(param_1 + 4); local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if ((short)uVar1 == *(short *)(local_c + 3)) {
      uVar2 = FUN_00407a5c(local_c + 4,(int *)param_2,(uint)*(ushort *)(param_1 + 0x20));
      if ((char)uVar2 != '\0') break;
    }
  }
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)FUN_004026b8(*(ushort *)(param_1 + 0x20) + 0x10);
    *local_c = *(undefined4 *)(param_1 + 4);
    local_c[1] = 0;
    local_c[2] = *(undefined4 *)param_2;
    *(short *)(local_c + 3) = (short)uVar1;
    FUN_004027d0((undefined4 *)param_2,local_c + 4,(uint)*(ushort *)(param_1 + 0x20));
    *(undefined4 **)(param_1 + 4) = local_c;
  }
  local_c[1] = local_c[1] + 1;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00415abf;
  puStack_1c = (undefined1 *)0x415ab7;
  FUN_004159d8(param_1);
  return;
}


/* ==== 00415ac8 FUN_00415ac8 ==== */

void FUN_00415ac8(int param_1,undefined4 *param_2)

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
  puStack_18 = (undefined *)0x415aec;
  local_14 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_004159cc(param_1);
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
  puStack_18 = &DAT_00415b56;
  uStack_1c = 0x415b4e;
  FUN_004159d8(local_8);
  return;
}


/* ==== 00415b78 FUN_00415b78 ==== */

void FUN_00415b78(int param_1,int *param_2,byte *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x415b91;
  FUN_004159cc(param_1);
  puStack_20 = &LAB_00415be1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = (undefined4 *)param_2[4];
  puStack_1c = &stack0xfffffffc;
  puVar2 = (undefined4 *)FUN_004159e4(param_1,param_3);
  param_2[4] = (int)puVar2;
  if (puVar1 != puVar2) {
    FUN_00402ef0(param_2,extraout_EDX,extraout_ECX);
  }
  FUN_00415ac8(param_1,puVar1);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00415be8;
  puStack_20 = (undefined1 *)0x415be0;
  FUN_004159d8(param_1);
  return;
}


/* ==== 00415bf0 FUN_00415bf0 ==== */

void FUN_00415bf0(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x415c06;
  FUN_004159cc(param_1);
  puStack_1c = &LAB_00415c4c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = (undefined4 *)param_2[4];
  if (param_3 != puVar1) {
    param_3[1] = param_3[1] + 1;
    param_2[4] = (int)param_3;
    puStack_18 = &stack0xfffffffc;
    FUN_00402ef0(param_2,extraout_EDX,extraout_ECX);
    FUN_00415ac8(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00415c53;
  puStack_1c = (undefined1 *)0x415c4b;
  FUN_004159d8(param_1);
  return;
}


/* ==== 00415c5c FUN_00415c5c ==== */

void FUN_00415c5c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x415c6d;
  FUN_004159cc(param_1);
  puStack_18 = &LAB_00415cbb;
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
  puStack_14 = &LAB_00415cc2;
  puStack_18 = (undefined1 *)0x415cba;
  FUN_004159d8(param_1);
  return;
}


/* ==== 00415cc8 FUN_00415cc8 ==== */

void FUN_00415cc8(void)

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
  puStack_18 = (undefined1 *)0x415cdf;
  puVar1 = (undefined4 *)FUN_0040f38c(DAT_004476a0);
  puStack_1c = &LAB_00415d65;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  while (i_val < (int)puVar1[2]) {
    j = FUN_0040f024(puVar1,i_val);
    FUN_00417174(j);
    i_val = i_val + 1;
    FUN_00417450(j);
  }
  FUN_00415c5c(DAT_00447698);
  FUN_00415c5c(DAT_0044769c);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00415d6c;
  if (-1 < i_val + -1) {
    j = 0;
    do {
      puStack_1c = (undefined1 *)0x415d51;
      iVar2 = FUN_0040f024(puVar1,j);
      puStack_1c = (undefined1 *)0x415d56;
      FUN_00417328(iVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  puStack_1c = (undefined1 *)0x415d64;
  FUN_0040f3f0(DAT_004476a0);
  return;
}


/* ==== 004160cc FUN_004160cc ==== */

void FUN_004160cc(uint param_1)

{
  if ((int)param_1 < 0) {
    GetSysColor(param_1 & 0xff);
  }
  return;
}


/* ==== 004160fc TGraphicsObject.dynamic_fffd ==== */

void TGraphicsObject_dynamic_fffd(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  return;
}


/* ==== 00416110 FUN_00416110 ==== */

void FUN_00416110(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}


/* ==== 00416120 FUN_00416120 ==== */

void FUN_00416120(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}


/* ==== 00416304 FUN_00416304 ==== */

void FUN_00416304(HANDLE h_val,undefined4 *param_2)

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
  
  puVar1 = &DAT_00446354;
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
      FUN_00402b30((char *)local_30,local_50,0x20);
      FUN_00402908((byte *)((int)param_2 + 0xb),local_30,0x1f);
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


/* ==== 004163b8 FUN_004163b8 ==== */

int * FUN_004163b8(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  DAT_00446354 = 0;
  iVar1 = FUN_004159e4(DAT_00447694,(byte *)&DAT_00446354);
  param_1[4] = iVar1;
  param_1[6] = -0x7ffffff8;
  param_1[7] = DAT_00447650;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041640c TFont.Destroy ==== */

void TFont_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00415ac8(DAT_00447694,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00416434 TFont.dynamic_fffd ==== */

void TFont_dynamic_fffd(int param_1)

{
  TGraphicsObject_dynamic_fffd(param_1);
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
  }
  return;
}


/* ==== 00416450 TFont.virtual_008 ==== */

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
  
  puStack_14 = (undefined1 *)0x41646b;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_00414ecc);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x41647b;
    FUN_00416110((int)param_1);
    puStack_18 = &LAB_0041650b;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_20 = (undefined1 *)0x416493;
    puStack_14 = &stack0xfffffffc;
    FUN_00416110((int)param_2);
    puStack_24 = &LAB_004164ee;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_00415bf0(DAT_00447694,param_1,(undefined4 *)param_2[4]);
    TFont_SetColor(param_1,param_2[6],extraout_ECX);
    if (param_1[7] != param_2[7]) {
      number = TFont_GetSize((int)param_2);
      TFont_SetSize(param_1,number);
    }
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_004164f5;
    puStack_24 = (undefined1 *)0x4164ed;
    FUN_00416120((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x41651d;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 00416524 FUN_00416524 ==== */

void FUN_00416524(int param_1,undefined4 *param_2)

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


/* ==== 0041653c FUN_0041653c ==== */

void FUN_0041653c(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41654e;
  FUN_00416110((int)param_1);
  puStack_14 = &LAB_00416581;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00415b78(DAT_00447694,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00416588;
  puStack_14 = (undefined1 *)0x416580;
  FUN_00416120((int)param_1);
  return;
}


/* ==== 0041658c TFont.SetColor ==== */

void TFont_SetColor(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != param_1[6]) {
    param_1[6] = param_2;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 004165a0 FUN_004165a0 ==== */

void FUN_004165a0(int param_1)

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
  puStack_5c = &LAB_00416729;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_64 = (undefined1 *)0x4165df;
    FUN_004159cc(DAT_00447694);
    puStack_68 = &LAB_00416701;
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
      FUN_00403bdc((int *)&local_48,(byte *)(local_8 + 0x1b));
      iVar1 = FUN_00407b28(local_48,"Default");
      if (iVar1 == 0) {
        FUN_00403bdc((int *)&local_4c,(byte *)s_MS_Sans_Serif_0044635f);
        FUN_004080e4(logfont.lfFaceName,local_4c);
      }
      else {
        FUN_00403bdc((int *)&local_50,(byte *)(local_8 + 0x1b));
        FUN_004080e4(logfont.lfFaceName,local_50);
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
    puStack_64 = (undefined1 *)0x416708;
    puStack_68 = (undefined1 *)0x416700;
    FUN_004159d8(DAT_00447694);
    return;
  }
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_00416730;
  puStack_5c = (undefined1 *)0x416728;
  FUN_004039dc((int *)&local_50,3);
  return;
}


/* ==== 00416748 FUN_00416748 ==== */

void FUN_00416748(int *param_1,HANDLE h_val)

{
  byte abStack_34 [44];
  
  FUN_00416304(h_val,(undefined4 *)abStack_34);
  FUN_0041653c(param_1,abStack_34);
  return;
}


/* ==== 0041676c TFont.GetHeight ==== */

undefined4 TFont_GetHeight(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
}


/* ==== 00416774 TFont.SetHeight ==== */

void TFont_SetHeight(int *param_1,undefined4 param_2)

{
  byte abStack_34 [4];
  undefined4 local_30;
  
  FUN_00416524((int)param_1,(undefined4 *)abStack_34);
  local_30 = param_2;
  FUN_0041653c(param_1,abStack_34);
  return;
}


/* ==== 0041679c TFont.GetName ==== */

void TFont_GetName(int param_1,int *param_2)

{
  FUN_00403bdc(param_2,(byte *)(*(int *)(param_1 + 0x10) + 0x1b));
  return;
}


/* ==== 004167b4 TFont.SetName ==== */

void TFont_SetName(int *param_1,undefined4 *param_2)

{
  byte abStack_134 [11];
  byte local_129 [33];
  byte local_108 [256];
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_00416524((int)param_1,(undefined4 *)abStack_134);
    FUN_00402a2c((undefined4 *)local_129,0x20,0);
    FUN_00403c14(local_108,param_2,0xff);
    FUN_00402908(local_129,local_108,0x1f);
    FUN_0041653c(param_1,abStack_134);
  }
  return;
}


/* ==== 00416810 TFont.GetSize ==== */

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


/* ==== 0041682c TFont.SetSize ==== */

void TFont_SetSize(int *param_1,int number)

{
  int mul_div;
  
  mul_div = MulDiv(number,param_1[7],0x48);
  TFont_SetHeight(param_1,-mul_div);
  return;
}


/* ==== 0041684c TFont.GetStyle ==== */

undefined1 TFont_GetStyle(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x19);
}


/* ==== 00416858 TFont.SetStyle ==== */

void TFont_SetStyle(int *param_1,undefined1 param_2)

{
  byte local_30 [9];
  undefined1 local_27;
  
  FUN_00416524((int)param_1,(undefined4 *)local_30);
  local_27 = param_2;
  FUN_0041653c(param_1,local_30);
  return;
}


/* ==== 00416884 TFont.GetPitch ==== */

undefined4 TFont_GetPitch(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x18));
}


/* ==== 0041688c TFont.SetPitch ==== */

void TFont_SetPitch(int *param_1,undefined1 param_2)

{
  byte abStack_34 [8];
  undefined1 local_2c;
  
  FUN_00416524((int)param_1,(undefined4 *)abStack_34);
  local_2c = param_2;
  FUN_0041653c(param_1,abStack_34);
  return;
}


/* ==== 004168b4 TFont.GetCharset ==== */

undefined4 TFont_GetCharset(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1a));
}


/* ==== 004168bc TFont.SetCharset ==== */

void TFont_SetCharset(int *param_1,undefined1 param_2)

{
  byte abStack_34 [10];
  undefined1 local_2a;
  
  FUN_00416524((int)param_1,(undefined4 *)abStack_34);
  local_2a = param_2;
  FUN_0041653c(param_1,abStack_34);
  return;
}


/* ==== 004168e4 FUN_004168e4 ==== */

int * FUN_004168e4(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_004159e4(DAT_00447698,&DAT_00446564);
  param_1[4] = iVar1;
  *(undefined1 *)(param_1 + 6) = 4;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00416928 TPen.Destroy ==== */

void TPen_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00415ac8(DAT_00447698,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00416950 TPen.virtual_008 ==== */

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
  
  puStack_14 = (undefined1 *)0x41696b;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_00415048);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x41697b;
    FUN_00416110((int)param_1);
    puStack_18 = &LAB_004169ef;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_20 = (undefined1 *)0x416993;
    puStack_14 = &stack0xfffffffc;
    FUN_00416110((int)param_2);
    puStack_24 = &LAB_004169d2;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_00415bf0(DAT_00447698,param_1,(undefined4 *)param_2[4]);
    TPen_SetMode(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2[6]),extraout_ECX);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_004169d9;
    puStack_24 = (undefined1 *)0x4169d1;
    FUN_00416120((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x416a01;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 00416a08 FUN_00416a08 ==== */

void FUN_00416a08(int param_1,undefined4 *param_2)

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


/* ==== 00416a20 FUN_00416a20 ==== */

void FUN_00416a20(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x416a32;
  FUN_00416110((int)param_1);
  puStack_14 = &LAB_00416a65;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00415b78(DAT_00447698,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00416a6c;
  puStack_14 = (undefined1 *)0x416a64;
  FUN_00416120((int)param_1);
  return;
}


/* ==== 00416a70 TPen.GetColor ==== */

undefined4 TPen_GetColor(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
}


/* ==== 00416a78 TPen.SetColor ==== */

void TPen_SetColor(int *param_1,undefined4 param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  
  FUN_00416a08((int)param_1,(undefined4 *)abStack_18);
  local_14 = param_2;
  FUN_00416a20(param_1,abStack_18);
  return;
}


/* ==== 00416aa0 FUN_00416aa0 ==== */

undefined4 FUN_00416aa0(int param_1)

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
    puStack_1c = (undefined1 *)0x416abf;
    FUN_004159cc(DAT_00447698);
    puStack_20 = &LAB_00416b26;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    if (*(int *)(local_8 + 8) == 0) {
      logpen.lopnStyle = (UINT)*(ushort *)(&DAT_00446574 + (uint)*(byte *)(local_8 + 0x1c) * 2);
      logpen.lopnWidth.x = *(LONG *)(local_8 + 0x18);
      puStack_1c = &stack0xfffffffc;
      logpen.lopnColor = FUN_004160cc(*(uint *)(local_8 + 0x14));
      pHVar1 = CreatePenIndirect(&logpen);
      *(HPEN *)(local_8 + 8) = pHVar1;
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x416b2d;
    puStack_20 = (undefined1 *)0x416b25;
    uVar2 = FUN_004159d8(DAT_00447698);
    return uVar2;
  }
  return *(undefined4 *)(local_8 + 8);
}


/* ==== 00416b38 TPen.SetMode ==== */

void TPen_SetMode(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[6]) {
    *(char *)(param_1 + 6) = (char)param_2;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00416b4c TPen.GetStyle ==== */

undefined4 TPen_GetStyle(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1c));
}


/* ==== 00416b54 TPen.SetStyle ==== */

void TPen_SetStyle(int *param_1,undefined1 param_2)

{
  byte abStack_18 [12];
  undefined1 local_c;
  
  FUN_00416a08((int)param_1,(undefined4 *)abStack_18);
  local_c = param_2;
  FUN_00416a20(param_1,abStack_18);
  return;
}


/* ==== 00416b7c TPen.GetWidth ==== */

undefined4 TPen_GetWidth(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18);
}


/* ==== 00416b84 TPen.SetWidth ==== */

void TPen_SetWidth(int *param_1,int param_2)

{
  byte abStack_18 [8];
  int local_10;
  
  if (-1 < param_2) {
    FUN_00416a08((int)param_1,(undefined4 *)abStack_18);
    local_10 = param_2;
    FUN_00416a20(param_1,abStack_18);
  }
  return;
}


/* ==== 00416bb0 FUN_00416bb0 ==== */

int * FUN_00416bb0(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_004159e4(DAT_0044769c,(byte *)&DAT_00446584);
  param_1[4] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00416bf0 TBrush.Destroy ==== */

void TBrush_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00415ac8(DAT_0044769c,(undefined4 *)piVar1[4]);
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00416c18 TBrush.virtual_008 ==== */

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
  
  puStack_14 = (undefined1 *)0x416c33;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_00415148);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x416c3f;
    FUN_00416110((int)param_1);
    puStack_18 = &LAB_00416ca8;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_20 = (undefined1 *)0x416c57;
    puStack_14 = &stack0xfffffffc;
    FUN_00416110((int)param_2);
    puStack_24 = &LAB_00416c8b;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_00415bf0(DAT_0044769c,param_1,(undefined4 *)param_2[4]);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_00416c92;
    puStack_24 = (undefined1 *)0x416c8a;
    FUN_00416120((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x416cba;
  TPersistent_virtual_008(param_1,param_2);
  return;
}


/* ==== 00416cc0 FUN_00416cc0 ==== */

void FUN_00416cc0(int param_1,undefined4 *param_2)

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


/* ==== 00416ce0 FUN_00416ce0 ==== */

void FUN_00416ce0(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x416cf2;
  FUN_00416110((int)param_1);
  puStack_14 = &LAB_00416d25;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00415b78(DAT_0044769c,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00416d2c;
  puStack_14 = (undefined1 *)0x416d24;
  FUN_00416120((int)param_1);
  return;
}


/* ==== 00416d30 FUN_00416d30 ==== */

void FUN_00416d30(int *param_1,undefined4 param_2)

{
  int i_val;
  undefined4 *puVar1;
  byte *pbVar2;
  byte abStack_18 [8];
  undefined4 local_10;
  
  puVar1 = &DAT_00446584;
  pbVar2 = abStack_18;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *(undefined4 *)pbVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    pbVar2 = (byte *)((int)pbVar2 + 4);
  }
  local_10 = param_2;
  FUN_00416ce0(param_1,abStack_18);
  return;
}


/* ==== 00416d54 TBrush.GetColor ==== */

undefined4 TBrush_GetColor(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
}


/* ==== 00416d5c TBrush.SetColor ==== */

void TBrush_SetColor(int *param_1,undefined4 param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  char local_c;
  
  FUN_00416cc0((int)param_1,(undefined4 *)abStack_18);
  if (local_c == '\x01') {
    local_c = '\0';
  }
  local_14 = param_2;
  FUN_00416ce0(param_1,abStack_18);
  return;
}


/* ==== 00416d90 FUN_00416d90 ==== */

undefined4 FUN_00416d90(int param_1)

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
    puStack_18 = (undefined1 *)0x416db3;
    FUN_004159cc(DAT_0044769c);
    puStack_1c = &LAB_00416e5d;
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
      logbrush.lbColor = FUN_004160cc(*(uint *)(local_8 + 0x14));
      pHVar3 = CreateBrushIndirect(&logbrush);
      *(HBRUSH *)(local_8 + 8) = pHVar3;
    }
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x416e64;
    puStack_1c = (undefined1 *)0x416e5c;
    uVar4 = FUN_004159d8(DAT_0044769c);
    return uVar4;
  }
  return *(undefined4 *)(local_8 + 8);
}


/* ==== 00416e70 TBrush.GetStyle ==== */

undefined4 TBrush_GetStyle(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1c));
}


/* ==== 00416e78 TBrush.SetStyle ==== */

void TBrush_SetStyle(int *param_1,char param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  char local_c;
  
  FUN_00416cc0((int)param_1,(undefined4 *)abStack_18);
  if (param_2 == '\x01') {
    local_14 = 0xffffff;
  }
  local_c = param_2;
  FUN_00416ce0(param_1,abStack_18);
  return;
}


/* ==== 00416eac FUN_00416eac ==== */

int * FUN_00416eac(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  piVar1 = FUN_004163b8((int *)&PTR_TPersistent_virtual_000_00414ecc,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_00417678;
  piVar1[5] = (int)(param_1 + 0xe);
  piVar1 = FUN_004168e4((int *)&PTR_TPersistent_virtual_000_00415048,'\x01',extraout_ECX_01);
  param_1[4] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_00417698;
  piVar1[5] = (int)(param_1 + 0xe);
  piVar1 = FUN_00416bb0((int *)&PTR_TPersistent_virtual_000_00415148,'\x01',extraout_ECX_02);
  param_1[5] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_004176b8;
  piVar1[5] = (int)(param_1 + 0xe);
  param_1[8] = 0xcc0020;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_0040f304(DAT_004476a0,(int)param_1);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00416f70 TCanvas.Destroy ==== */

void TCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0040f3a0(DAT_004476a0,(int)piVar1);
  FUN_004174b0(piVar1,0);
  FUN_00402d14((int *)piVar1[3]);
  FUN_00402d14((int *)piVar1[4]);
  FUN_00402d14((int *)piVar1[5]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0xe));
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00416fcc FUN_00416fcc ==== */

void FUN_00416fcc(int *param_1,int *param_2,int *param_3,int *param_4)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,0xb);
  FUN_00417504(param_3,9);
  StretchBlt((HDC)param_1[1],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],
             (HDC)param_3[1],*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],
             param_1[8]);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 00417054 FUN_00417054 ==== */

void FUN_00417054(int *param_1,int param_2,int param_3,int *param_4)

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
      FUN_00417504(param_1,1);
      uVar2 = TBrush_GetColor(param_1[5]);
      CVar3 = FUN_004160cc(uVar2);
      SetBkColor((HDC)param_1[1],CVar3);
      CVar3 = FUN_004160cc(*(uint *)(param_1[3] + 0x18));
      SetTextColor((HDC)param_1[1],CVar3);
      iVar4 = (**(code **)(*param_4 + 0x20))();
      iVar4 = iVar4 + local_8;
      puVar6 = local_18;
      iVar5 = (**(code **)(*param_4 + 0x2c))();
      FUN_0040e5ac(param_2,local_8,iVar5 + param_2,puVar6,iVar4);
      (**(code **)(*param_4 + 0x14))(param_4,param_1,local_18);
      (**(code **)(*param_1 + 0xc))();
    }
  }
  return;
}


/* ==== 00417100 FUN_00417100 ==== */

void FUN_00417100(int *param_1,RECT *lprc_val)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,9);
  hbr = (HBRUSH)FUN_00416d90(param_1[5]);
  FillRect((HDC)param_1[1],lprc_val,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 0041713c FUN_0041713c ==== */

void FUN_0041713c(int *param_1,int x_val,int y_val)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,0xd);
  LineTo((HDC)param_1[1],x_val,y_val);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 00417174 FUN_00417174 ==== */

void FUN_00417174(int param_1)

{
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_0044767c);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_0044767c);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}


/* ==== 0041719c FUN_0041719c ==== */

void FUN_0041719c(int *param_1,int x_val,int y_val)

{
  FUN_00417504(param_1,1);
  MoveToEx((HDC)param_1[1],x_val,y_val,(LPPOINT)0x0);
  return;
}


/* ==== 004171c8 FUN_004171c8 ==== */

void FUN_004171c8(int *param_1,int left_val,int top_val,int bottom_val,int right_val)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,0xd);
  Rectangle((HDC)param_1[1],left_val,top_val,right_val,bottom_val);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 00417210 FUN_00417210 ==== */

void FUN_00417210(int *param_1,undefined4 param_2,int *param_3)

{
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_1 + 0x10))();
    FUN_00417504(param_1,0xf);
    (**(code **)(*param_3 + 0x14))(param_3,param_1,param_2);
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}


/* ==== 0041724c FUN_0041724c ==== */

void FUN_0041724c(int *param_1,undefined *param_2,LPSIZE psizl_val)

{
  int c;
  LPCSTR lpString;
  
  FUN_00417504(param_1,3);
  psizl_val->cx = 0;
  psizl_val->cy = 0;
  c = FUN_00403c38((int)param_2);
  lpString = FUN_00403dfc(param_2);
  GetTextExtentPoint32A((HDC)param_1[1],lpString,c,psizl_val);
  return;
}


/* ==== 00417290 FUN_00417290 ==== */

LONG FUN_00417290(int *param_1,undefined *param_2)

{
  tagSIZE size;
  
  FUN_0041724c(param_1,param_2,&size);
  return size.cx;
}


/* ==== 004172ac FUN_004172ac ==== */

LONG FUN_004172ac(int *param_1,undefined *param_2)

{
  tagSIZE size;
  
  FUN_0041724c(param_1,param_2,&size);
  return size.cy;
}


/* ==== 004172cc FUN_004172cc ==== */

void FUN_004172cc(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_0044767c);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00417174(param_1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x417317;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_0044767c);
  return;
}


/* ==== 00417328 FUN_00417328 ==== */

void FUN_00417328(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_0044767c);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_0044767c);
  return;
}


/* ==== 00417350 TCanvas.SetFont ==== */

void TCanvas_SetFont(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  return;
}


/* ==== 00417360 TCanvas.SetPen ==== */

void TCanvas_SetPen(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  return;
}


/* ==== 0041736c TCanvas.SetBrush ==== */

void TCanvas_SetBrush(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  return;
}


/* ==== 00417378 FUN_00417378 ==== */

void FUN_00417378(int *param_1,LPPOINT lppt_val)

{
  FUN_00417504(param_1,1);
  GetCurrentPositionEx((HDC)param_1[1],lppt_val);
  return;
}


/* ==== 0041739c FUN_0041739c ==== */

void FUN_0041739c(int *param_1,int *param_2)

{
  FUN_0041719c(param_1,*param_2,param_2[1]);
  return;
}


/* ==== 004173bc FUN_004173bc ==== */

void FUN_004173bc(int *param_1,int x_val,int y_val)

{
  FUN_00417504(param_1,1);
  GetPixel((HDC)param_1[1],x_val,y_val);
  return;
}


/* ==== 004173e8 FUN_004173e8 ==== */

void FUN_004173e8(int *param_1,int x_val,int y_val,uint param_4)

{
  COLORREF color;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,5);
  color = FUN_004160cc(param_4);
  SetPixel((HDC)param_1[1],x_val,y_val,color);
  (**(code **)(*param_1 + 0xc))();
  return;
}


/* ==== 00417430 FUN_00417430 ==== */

int FUN_00417430(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,0xf);
  return param_1[1];
}


/* ==== 00417450 FUN_00417450 ==== */

void FUN_00417450(int param_1)

{
  if ((*(HDC *)(param_1 + 4) != (HDC)0x0) &&
     (*(byte *)(param_1 + 8) != (*(byte *)(param_1 + 8) & 0xf1))) {
    SelectObject(*(HDC *)(param_1 + 4),DAT_00447654);
    SelectObject(*(HDC *)(param_1 + 4),DAT_00447658);
    SelectObject(*(HDC *)(param_1 + 4),DAT_0044765c);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf1;
  }
  return;
}


/* ==== 004174ac TCanvas.virtual_014 ==== */

void TCanvas_virtual_014(void)

{
  return;
}


/* ==== 004174b0 FUN_004174b0 ==== */

void FUN_004174b0(int *param_1,int param_2)

{
  tagPOINT point;
  
  if (param_2 != param_1[1]) {
    if (param_1[1] != 0) {
      FUN_00417450((int)param_1);
      FUN_00417378(param_1,&point);
      param_1[6] = point.x;
      param_1[7] = point.y;
      param_1[1] = 0;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    }
    if (param_2 != 0) {
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
      param_1[1] = param_2;
      FUN_0041739c(param_1,param_1 + 6);
    }
  }
  return;
}


/* ==== 00417504 FUN_00417504 ==== */

void FUN_00417504(int *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  
  bVar2 = ~*(byte *)(param_1 + 2) & param_2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x14))();
      if (param_1[1] == 0) {
        piVar1 = FUN_0040a9f4((int *)&DAT_0040d94c,'\x01',(undefined4 *)PTR_PTR_00446b90);
        FUN_0040346c(piVar1);
      }
    }
    if ((bVar2 & 2) != 0) {
      FUN_004175a0((int)param_1);
    }
    if ((bVar2 & 4) != 0) {
      FUN_004175cc((int)param_1);
    }
    if ((bVar2 & 8) != 0) {
      FUN_004175fc((int)param_1);
    }
    *(byte *)(param_1 + 2) = bVar2 | *(byte *)(param_1 + 2);
  }
  return;
}


/* ==== 00417578 TCanvas.virtual_010 ==== */

void TCanvas_virtual_010(int param_1)

{
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
  }
  return;
}


/* ==== 0041758c TCanvas.virtual_00c ==== */

void TCanvas_virtual_00c(int param_1)

{
  if (*(short *)(param_1 + 0x2a) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  return;
}


/* ==== 004175a0 FUN_004175a0 ==== */

void FUN_004175a0(int param_1)

{
  HGDIOBJ h;
  COLORREF color;
  
  h = (HGDIOBJ)FUN_004165a0(*(int *)(param_1 + 0xc));
  SelectObject(*(HDC *)(param_1 + 4),h);
  color = FUN_004160cc(*(uint *)(*(int *)(param_1 + 0xc) + 0x18));
  SetTextColor(*(HDC *)(param_1 + 4),color);
  return;
}


/* ==== 004175cc FUN_004175cc ==== */

void FUN_004175cc(int param_1)

{
  HGDIOBJ h;
  
  h = (HGDIOBJ)FUN_00416aa0(*(int *)(param_1 + 0x10));
  SelectObject(*(HDC *)(param_1 + 4),h);
  SetROP2(*(HDC *)(param_1 + 4),
          (uint)*(ushort *)(&DAT_00446594 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x18) * 2));
  return;
}


/* ==== 004175fc FUN_004175fc ==== */

void FUN_004175fc(int param_1)

{
  HGDIOBJ h_val;
  undefined4 uVar1;
  uint uVar2;
  COLORREF color;
  
  h_val = (HGDIOBJ)FUN_00416d90(*(int *)(param_1 + 0x14));
  UnrealizeObject(h_val);
  h_val = (HGDIOBJ)FUN_00416d90(*(int *)(param_1 + 0x14));
  SelectObject(*(HDC *)(param_1 + 4),h_val);
  uVar1 = TBrush_GetStyle(*(int *)(param_1 + 0x14));
  if ((char)uVar1 == '\0') {
    uVar2 = TBrush_GetColor(*(int *)(param_1 + 0x14));
    color = FUN_004160cc(uVar2);
    SetBkColor(*(HDC *)(param_1 + 4),color);
    SetBkMode(*(HDC *)(param_1 + 4),2);
    return;
  }
  uVar2 = TBrush_GetColor(*(int *)(param_1 + 0x14));
  uVar2 = FUN_004160cc(uVar2);
  SetBkColor(*(HDC *)(param_1 + 4),~uVar2);
  SetBkMode(*(HDC *)(param_1 + 4),1);
  return;
}


/* ==== 004176d8 FUN_004176d8 ==== */

void FUN_004176d8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0040a9f4((int *)&DAT_00414b40,'\x01',param_1);
  FUN_0040346c(piVar1);
  return;
}


/* ==== 004176f0 FUN_004176f0 ==== */

void FUN_004176f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0040a9f4((int *)&DAT_00414ae4,'\x01',param_1);
  FUN_0040346c(piVar1);
  return;
}


/* ==== 00417708 FUN_00417708 ==== */

void FUN_00417708(void)

{
  FUN_004176f0((undefined4 *)PTR_PTR_00446b54);
  return;
}


/* ==== 00417714 FUN_00417714 ==== */

void FUN_00417714(void)

{
  FUN_004176f0((undefined4 *)PTR_PTR_00446b64);
  return;
}


/* ==== 00417720 FUN_00417720 ==== */

void FUN_00417720(void)

{
  FUN_004176f0((undefined4 *)PTR_PTR_00446c98);
  return;
}


/* ==== 0041772c FUN_0041772c ==== */

void FUN_0041772c(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_00417776;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00405298((undefined4 *)PTR_PTR_00446ac0,(int *)&local_8);
  piVar1 = FUN_0040a938((int *)&DAT_0040d8f0,'\x01',local_8);
  FUN_0040346c(piVar1);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0041777d;
  puStack_10 = (undefined1 *)0x417775;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00417780 FUN_00417780 ==== */

void FUN_00417780(void)

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
  puStack_114 = &LAB_0041781c;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0x400,local_104,0x100,(va_list *)0x0);
    if (DVar1 != 0) {
      FUN_00403be8((int *)&local_108,local_104,0x100);
      piVar2 = FUN_0040a938((int *)&DAT_0040d8f0,'\x01',local_108);
      FUN_0040346c(piVar2);
      goto LAB_00417803;
    }
  }
  FUN_0041772c();
LAB_00417803:
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_00417823;
  puStack_114 = (undefined1 *)0x41781b;
  FUN_004039b8((int *)&local_108);
  return;
}


/* ==== 00417828 FUN_00417828 ==== */

int FUN_00417828(int param_1)

{
  if (param_1 == 0) {
    FUN_00417780();
  }
  return param_1;
}


/* ==== 00417838 FUN_00417838 ==== */

void FUN_00417838(HANDLE param_1,int *param_2,char param_3)

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
  HBITMAP h_val_2;
  int local_10;
  int local_c;
  HANDLE h_val;
  
  local_10 = *param_2;
  local_c = param_2[1];
  h_val = param_1;
  local_1c = CreateCompatibleDC((HDC)0x0);
  local_20 = CreateCompatibleDC((HDC)0x0);
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  GetObjectA(h_val,0x18,local_38);
  if (param_3 != '\0') {
    h_val_2 = CreateBitmap(local_10,local_c,1,1,(void *)0x0);
    if (h_val_2 != (HBITMAP)0x0) {
      h = SelectObject(local_1c,h_val);
      h_00 = SelectObject(local_20,h_val_2);
      StretchBlt(local_20,0,0,local_10,local_c,local_1c,0,0,src,src_2,0xcc0020);
      if (h != (HGDIOBJ)0x0) {
        SelectObject(local_1c,h);
      }
      if (h_00 != (HGDIOBJ)0x0) {
        SelectObject(local_20,h_00);
      }
    }
    *in_FS_OFFSET = uStack_50;
    uStack_50 = 0x41797c;
    DeleteDC(local_1c);
    uStack_50 = 0x417985;
    DeleteDC(local_20);
    return;
  }
  local_18 = GetDC((HWND)0x0);
  if (local_18 == (HDC)0x0) {
    FUN_00417780();
  }
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa4;
  h_val_2 = CreateCompatibleBitmap(local_18,local_10,local_c);
  if (h_val_2 == (HBITMAP)0x0) {
    FUN_00417780();
  }
  *in_FS_OFFSET = uVar1;
  ReleaseDC((HWND)0x0,local_18);
  return;
}


/* ==== 00417998 FUN_00417998 ==== */

int FUN_00417998(short param_1)

{
  if (((param_1 != 1) && (param_1 != 4)) && (param_1 != 8)) {
    return 0;
  }
  return 1 << ((byte)param_1 & 0x1f);
}


/* ==== 004179b8 FUN_004179b8 ==== */

int FUN_004179b8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 * param_2 + (param_3 - 1U) & ~(param_3 - 1U);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 7;
  }
  return (int)uVar1 >> 3;
}


/* ==== 004179cc FUN_004179cc ==== */

void FUN_004179cc(HDC param_1,int x_dest,int y_dest,int param_4,int param_5,HDC param_6,int param_7,
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
  
  if (((*(int *)PTR_DAT_00446d9c == 2) && (param_8 == param_13)) && (param_7 == param_12)) {
    pHVar1 = CreateCompatibleBitmap(param_11,1,1);
    pvVar2 = (HGDIOBJ)FUN_00417828((int)pHVar1);
    pHVar1 = SelectObject(param_6,pvVar2);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    rop = FUN_004069c8(0xaa0029,0xcc0020);
    MaskBlt(param_1,x_dest,y_dest,param_13,param_12,param_11,x_src,y_src,pHVar1,param_5,param_4,rop)
    ;
    *in_FS_OFFSET = uVar4;
    pvVar2 = SelectObject(param_6,pHVar1);
    DeleteObject(pvVar2);
    return;
  }
  pHVar3 = CreateCompatibleDC((HDC)0x0);
  pHVar3 = (HDC)FUN_00417828((int)pHVar3);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc0;
  pHVar1 = CreateCompatibleBitmap(param_11,param_8,param_7);
  pvVar2 = (HGDIOBJ)FUN_00417828((int)pHVar1);
  h = SelectObject(pHVar3,pvVar2);
  hPal = SelectPalette(param_11,DAT_00447648,0);
  SelectPalette(param_11,hPal,0);
  if (hPal == (HPALETTE)0x0) {
    pal = SelectPalette(pHVar3,DAT_00447648,-1);
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


/* ==== 00417c60 FUN_00417c60 ==== */

void FUN_00417c60(int param_1)

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


/* ==== 00417c98 FUN_00417c98 ==== */

void FUN_00417c98(int param_1,int *param_2)

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
    FUN_00402a2c((undefined4 *)(param_1 + *param_2 * 3),(0x100 - *param_2) * 3,0);
    *param_2 = 0x100;
  }
  return;
}


/* ==== 00417d10 FUN_00417d10 ==== */

void FUN_00417d10(int param_1,int param_2)

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


/* ==== 00417d68 FUN_00417d68 ==== */

void FUN_00417d68(undefined4 *param_1)

{
  int device_caps;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  tagPALETTEENTRY local_408 [7];
  tagPALETTEENTRY paletteentry;
  tagPALETTEENTRY local_3e8;
  tagPALETTEENTRY local_3e4 [247];
  HDC local_8;
  
  FUN_004027d0(param_1,local_408,0x40);
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


/* ==== 00417e80 FUN_00417e80 ==== */

int FUN_00417e80(int param_1)

{
  HDC hdc;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (DAT_00447648 != (HPALETTE)0x0) {
    hdc = GetDC((HWND)0x0);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe4;
    iVar1 = GetDeviceCaps(hdc,0x68);
    if (0xf < iVar1) {
      GetPaletteEntries(DAT_00447648,0,8,(LPPALETTEENTRY)(param_1 + 4));
      GetPaletteEntries(DAT_00447648,8,8,
                        (LPPALETTEENTRY)(param_1 + -0x1c + (uint)*(ushort *)(param_1 + 2) * 4));
    }
    *in_FS_OFFSET = uVar2;
    iVar1 = ReleaseDC((HWND)0x0,hdc);
    return iVar1;
  }
  return param_1 & 0xffffff00;
}


/* ==== 00417f18 FUN_00417f18 ==== */

HPALETTE FUN_00417f18(HGDIOBJ h_val,undefined4 *param_2,int param_3)

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
    FUN_004027d0(param_2,local_410[0].palPalEntry,param_3 << 2);
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
       (iVar2 = FUN_00417e80((int)local_410), (char)iVar2 == '\0')) {
      FUN_00417d10((int)local_410[0].palPalEntry,(uint)local_410[0].palNumEntries);
    }
    pHVar3 = CreatePalette(local_410);
    return pHVar3;
  }
  return (HPALETTE)0x0;
}


/* ==== 00417fbc FUN_00417fbc ==== */

UINT FUN_00417fbc(HPALETTE param_1,LPPALETTEENTRY pal_entries,int param_3)

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
      FUN_00417d10((int)pal_entries,c_entries);
    }
  }
  return c_entries;
}


/* ==== 00418010 FUN_00418010 ==== */

void FUN_00418010(BITMAPINFOHEADER *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

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
  iVar1 = FUN_004179b8(param_1->biWidth,(uint)param_1->biBitCount,0x20);
  param_1->biSizeImage = iVar1 * param_1->biHeight;
  iVar1 = FUN_00417998(param_1->biBitCount);
  puStack_2c = (undefined1 *)0x41805f;
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_0041772c();
  }
  puStack_2c = &LAB_004181bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pHVar2 = CreateDIBitmap(hdc,param_1,4,&param_1[1].biSize + iVar1,(BITMAPINFO *)param_1,0);
  ho = (HANDLE)FUN_00417828((int)pHVar2);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  uVar3 = FUN_00417838(ho,param_4,'\0');
  *param_2 = uVar3;
  *in_FS_OFFSET = uVar4;
  DeleteObject(ho);
  return;
}


/* ==== 004181cc FUN_004181cc ==== */

int FUN_004181cc(int param_1)

{
  if (param_1 == 0) {
    param_1 = 0x7fffffff;
  }
  return param_1;
}


/* ==== 004181d8 FUN_004181d8 ==== */

undefined4 FUN_004181d8(byte *param_1,byte *param_2,undefined4 param_3,int param_4)

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


/* ==== 00418268 FUN_00418268 ==== */

void FUN_00418268(int *param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  int system_metrics;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  
  puStack_84 = (undefined1 *)0x41828e;
  puVar1 = FUN_00407a00(param_3 << 4);
  puStack_88 = &LAB_0041855f;
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
    FUN_0041772c();
  }
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff68;
  GetDeviceCaps(hdc,0xe);
  GetDeviceCaps(hdc,0xc);
  *in_FS_OFFSET = uVar2;
  ReleaseDC((HWND)0x0,hdc);
  return;
}


/* ==== 00418570 FUN_00418570 ==== */

ushort FUN_00418570(ushort *param_1)

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


/* ==== 00418588 FUN_00418588 ==== */

void FUN_00418588(HANDLE h_val,uint *param_2,uint param_3)

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
    FUN_00417708();
  }
  else if ((i_val < 0x40) || (local_48[0] < 0x28)) {
    FUN_00402a2c(param_2,0x28,0);
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
    i_val = FUN_004179b8(param_2[1],(uint)*(ushort *)((int)param_2 + 0xe),0x20);
    uVar1 = (int)param_2[2] >> 0x1f;
    param_2[5] = i_val * ((param_2[2] ^ uVar1) - uVar1);
  }
  return;
}


/* ==== 0041866c FUN_0041866c ==== */

void FUN_0041866c(HANDLE h_val,int *param_2,undefined4 *param_3,uint param_4)

{
  uint local_2c [3];
  ushort local_1e;
  byte local_1c;
  undefined4 local_18;
  int local_c;
  
  FUN_00418588(h_val,local_2c,param_4);
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


/* ==== 004186d0 FUN_004186d0 ==== */

void FUN_004186d0(HANDLE h_val,int *param_2,undefined4 *param_3)

{
  FUN_0041866c(h_val,param_2,param_3,0);
  return;
}


/* ==== 004186d8 FUN_004186d8 ==== */

void FUN_004186d8(HBITMAP param_1,HPALETTE pal_2,LPBITMAPINFO lpbmi_val,uint param_4,LPVOID lpv_bits
                 )

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  HPALETTE pal;
  
  FUN_00418588(param_1,(uint *)lpbmi_val,param_4);
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


/* ==== 00418788 FUN_00418788 ==== */

void FUN_00418788(HBITMAP param_1,HPALETTE pal_2,LPBITMAPINFO lpbmi_val,LPVOID lpv_bits)

{
  FUN_004186d8(param_1,pal_2,lpbmi_val,0,lpv_bits);
  return;
}


/* ==== 0041879c FUN_0041879c ==== */

void FUN_0041879c(void)

{
  return;
}


/* ==== 004187a0 FUN_004187a0 ==== */

void FUN_004187a0(int param_1)

{
  if (param_1 == 0) {
    FUN_0041879c();
  }
  return;
}


/* ==== 004187ac FUN_004187ac ==== */

void FUN_004187ac(int *param_1,HICON icon,char param_3)

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
  FUN_00402a2c(&local_2e,6,0);
  FUN_00402a2c(&local_58,0x10,0);
  uStack_70 = 0x4187e4;
  BVar3 = GetIconInfo(icon,&h_val);
  FUN_004187a0(BVar3);
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_78 = (undefined1 *)0x418807;
  FUN_0041866c(h_val.hbmMask,(int *)&local_c,&local_14,2);
  puStack_78 = (undefined1 *)0x418817;
  FUN_0041866c(h_val.hbmColor,(int *)&local_10,&local_18,0x10);
  lpbmi_val_2 = (LPBITMAPINFO)0x0;
  lpv_bits_2 = (undefined4 *)0x0;
  lpbmi_val = (LPBITMAPINFO)0x0;
  lpv_bits = (undefined4 *)0x0;
  puStack_78 = &LAB_00418973;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  lpbmi_val_2 = (LPBITMAPINFO)FUN_00407a00(local_c);
  lpv_bits_2 = FUN_00407a00(local_14);
  lpbmi_val = (LPBITMAPINFO)FUN_00407a00(local_10);
  lpv_bits = FUN_00407a00(local_18);
  FUN_004186d8(h_val.hbmMask,(HPALETTE)0x0,lpbmi_val_2,2,lpv_bits_2);
  uVar4 = 0x10;
  FUN_004186d8(h_val.hbmColor,(HPALETTE)0x0,lpbmi_val,0x10,lpv_bits);
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
  FUN_004026d0((int)lpbmi_val);
  FUN_004026d0((int)lpv_bits);
  FUN_004026d0((int)lpbmi_val_2);
  FUN_004026d0((int)lpv_bits_2);
  return;
}


/* ==== 004189a8 TGraphic.virtual_00c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004189e0 TGraphic.virtual_010 ==== */

void TGraphic_virtual_010(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  return;
}


/* ==== 004189f8 FUN_004189f8 ==== */

uint FUN_004189f8(void)

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
  uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_virtual_000_00415394);
  if (((char)uVar2 != '\0') &&
     (uVar2 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x18))
                        (*(int **)(in_stack_00000004 + -8),piVar1), (char)uVar2 != '\0')) {
    return 0;
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


/* ==== 00418a50 TGraphic.virtual_004 ==== */

void TGraphic_virtual_004(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = *(undefined4 *)(*param_1 + 0x30);
  uVar2 = *(undefined4 *)(*param_1 + 0x44);
  piVar4 = param_1;
  uVar1 = FUN_004189f8();
  (**(code **)(*param_2 + 8))(param_2,&DAT_00418a94,uVar1,uVar2,param_1,uVar3,piVar4);
  return;
}


/* ==== 00418a9c TGraphic.virtual_018 ==== */

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
    puStack_20 = (undefined1 *)0x418ab4;
    iVar4 = FUN_00402c5c(param_1);
    puStack_20 = (undefined1 *)0x418abd;
    iVar5 = FUN_00402c5c(param_2);
    if (iVar4 == iVar5) {
      bVar1 = true;
      goto LAB_00418ac7;
    }
  }
  bVar1 = false;
LAB_00418ac7:
  puStack_20 = (undefined1 *)0x418ad1;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 == '\0') {
    puStack_20 = (undefined1 *)0x418adc;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 == '\0') {
      if (!bVar1) {
        return 0;
      }
      puStack_20 = (undefined1 *)0x418b1a;
      piVar6 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_virtual_000_0040df58,'\x01',
                                   extraout_ECX);
      puStack_24 = &LAB_00418bcd;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x418b35;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x44))(param_1,piVar6);
      puStack_2c = (undefined1 *)0x418b41;
      piVar7 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_virtual_000_0040df58,'\x01',
                                   extraout_ECX_00);
      puStack_30 = &LAB_00418bb0;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      (**(code **)(*param_2 + 0x44))(param_2,piVar7);
      iVar4 = FUN_00410af0(piVar6);
      iVar5 = FUN_00410af0(piVar7);
      if (iVar4 == iVar5) {
        uVar8 = FUN_00410af0(piVar6);
        FUN_00407a5c((int *)piVar6[1],(int *)piVar7[1],uVar8);
      }
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_00418bb7;
      puStack_30 = (undefined1 *)0x418baf;
      uVar3 = FUN_00402d14(piVar7);
      return uVar3;
    }
  }
  puStack_20 = (undefined1 *)0x418ae7;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 != '\0') {
    puStack_20 = (undefined1 *)0x418af2;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* ==== 00418be0 TGraphic.virtual_024 ==== */

undefined4 TGraphic_virtual_024(void)

{
  return 0;
}


/* ==== 00418be4 TGraphic.virtual_028 ==== */

undefined1 TGraphic_virtual_028(int param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}


/* ==== 00418be8 TGraphic.virtual_048 ==== */

void TGraphic_virtual_048(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x418bff;
  piVar1 = FUN_00410cf8((int *)&PTR_THandleStream_virtual_000_0040de80,'\x01',param_2,0x20);
  puStackY_14 = &LAB_00418c30;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x50))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x418c2f;
  FUN_00402d14(piVar1);
  return;
}


/* ==== 00418c3c TGraphic.dynamic_fffd ==== */

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


/* ==== 00418c64 TGraphic.virtual_030 ==== */

void TGraphic_virtual_030(int *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return;
}


/* ==== 00418c70 TGraphic.virtual_04c ==== */

void TGraphic_virtual_04c(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x418c8a;
  piVar1 = FUN_00410cf8((int *)&PTR_THandleStream_virtual_000_0040de80,'\x01',param_2,0xffff);
  puStackY_14 = &LAB_00418cbb;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x54))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x418cba;
  FUN_00402d14(piVar1);
  return;
}


/* ==== 00418cc8 TGraphic.virtual_038 ==== */

void TGraphic_virtual_038(void)

{
  return;
}


/* ==== 00418ccc TGraphic.virtual_03c ==== */

void TGraphic_virtual_03c(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x19)) {
    *(char *)((int)param_1 + 0x19) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 00418cdc TGraphic.virtual_044 ==== */

void TGraphic_virtual_044(int *param_1)

{
  (**(code **)(*param_1 + 0x54))();
  return;
}


/* ==== 00418d84 FUN_00418d84 ==== */

void FUN_00418d84(int *param_1,char param_2)

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
    puStack_30 = (undefined1 *)0x418d9b;
    param_1 = (int *)FUN_00403014((int)param_1,param_2,0,in_stack_ffffffd4,in_stack_ffffffd8);
    uVar1 = extraout_ECX;
  }
  puStack_34 = &LAB_00418e61;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00402ce4(param_1,'\0',uVar1);
  uVar1 = 0;
  puVar3 = &LAB_004155e0;
  FUN_00405298((undefined4 *)PTR_PTR_00446c28,(int *)&local_8);
  FUN_00418f04(param_1,&DAT_00418e90,local_8,puVar3,uVar1);
  uVar1 = 0;
  puVar3 = &LAB_004155e0;
  FUN_00405298((undefined4 *)PTR_PTR_00446acc,(int *)&local_c);
  FUN_00418f04(param_1,&DAT_00418e9c,local_c,puVar3,uVar1);
  uVar1 = 0;
  puVar3 = &LAB_0041585c;
  FUN_00405298((undefined4 *)PTR_PTR_00446ac8,(int *)&local_10);
  FUN_00418f04(param_1,&DAT_00418ea8,local_10,puVar3,uVar1);
  uVar1 = 0;
  ppuVar2 = &PTR_TPersistent_virtual_000_0041571c;
  FUN_00405298((undefined4 *)PTR_PTR_00446ac4,(int *)&local_14);
  FUN_00418f04(param_1,&DAT_00418eb4,local_14,ppuVar2,uVar1);
  *in_FS_OFFSET = ppuVar2;
  FUN_004039dc((int *)&local_14,4);
  return;
}


/* ==== 00418eb8 TFileFormatsList.Destroy ==== */

void TFileFormatsList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  VARIANTARG *variantarg;
  byte extraout_DL;
  int i_val;
  int j;
  
  piVar1 = FUN_00403074(param_1,param_2);
  i_val = piVar1[2];
  if (-1 < i_val + -1) {
    j = 0;
    do {
      variantarg = (VARIANTARG *)FUN_0040f024(piVar1,j);
      FUN_00404578(variantarg,"\x0e\vTFileFormat\x10");
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  TList_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00418f04 FUN_00418f04 ==== */

void FUN_00418f04(int *param_1,undefined *param_2,undefined4 *param_3,undefined4 param_4,
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
  puStack_24 = &LAB_00418f87;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  local_8 = param_2;
  puVar1 = FUN_00404564(0x10,"\x0e\vTFileFormat\x10");
  FUN_00407af4(local_8,(int *)&local_10);
  FUN_00403a0c(puVar1 + 1,local_10);
  *puVar1 = param_4;
  FUN_00403a0c(puVar1 + 2,local_c);
  puVar1[3] = param_5;
  FUN_0040eec8(param_1,(int)puVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00418f8e;
  puStack_24 = (undefined1 *)0x418f86;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 00418f98 FUN_00418f98 ==== */

void FUN_00418f98(undefined4 *param_1,uint *param_2)

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
  puStack_120 = &LAB_00419016;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  i_val = param_1[2] + -1;
  uVar2 = i_val == 0;
  local_8 = param_2;
  if (-1 < i_val) {
    do {
      piVar1 = (int *)FUN_0040f024(param_1,i_val);
      FUN_00402c60(*piVar1,local_10c);
      FUN_00403bdc((int *)&local_c,local_10c);
      FUN_00403d48(local_c,local_8);
      if ((bool)uVar2) break;
      i_val = i_val + -1;
      uVar2 = i_val == -1;
    } while (!(bool)uVar2);
  }
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0041901d;
  puStack_120 = (undefined1 *)0x419015;
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 00419088 FUN_00419088 ==== */

int * FUN_00419088(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',param_3);
  param_1[1] = iVar1;
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[2] = iVar1;
  FUN_00419134((int)param_1,CONCAT22(extraout_var,3),(int)&LAB_004155e0);
  FUN_00419134((int)param_1,CONCAT22(extraout_var_00,0xe),(int)&LAB_004155e0);
  FUN_00419134((int)param_1,CONCAT22(extraout_var_01,2),(int)&PTR_TPersistent_virtual_000_0041571c);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00419108 TClipboardFormats.Destroy ==== */

void TClipboardFormats_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[1]);
  FUN_00402d14((int *)piVar1[2]);
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00419134 FUN_00419134 ==== */

void FUN_00419134(int param_1,uint param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41914f;
  FUN_0040eec8(*(int **)(param_1 + 4),param_3);
  puStack_20 = &LAB_00419178;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0040eec8(*(int **)(param_1 + 8),param_2 & 0xffff);
  *in_FS_OFFSET = uStack_24;
  return;
}


/* ==== 0041919c FUN_0041919c ==== */

int FUN_0041919c(void)

{
  if (DAT_004465b8 == 0) {
    DAT_004465b8 = FUN_00418d84((int *)&PTR_TList_virtual_000_00418d60,'\x01');
  }
  return DAT_004465b8;
}


/* ==== 004191bc FUN_004191bc ==== */

int * FUN_004191bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_004465b4 == (int *)0x0) {
    DAT_004465b4 = FUN_00419088((int *)&DAT_00419074,'\x01',param_3);
  }
  return DAT_004465b4;
}


/* ==== 004191dc FUN_004191dc ==== */

int * FUN_004191dc(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  iVar1 = FUN_0041919c();
  FUN_004191bc(iVar1,extraout_EDX,extraout_ECX_00);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041921c TPicture.Destroy ==== */

void TPicture_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[1]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041924c TPicture.virtual_000 ==== */

void TPicture_virtual_000(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00402c5c(param_2);
  uVar2 = FUN_00402e8c((int *)param_1[1],iVar1);
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_2 + 8))(param_2,param_1[1]);
    return;
  }
  TPersistent_virtual_000(param_1,param_2);
  return;
}


/* ==== 00419280 FUN_00419280 ==== */

void FUN_00419280(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  piVar1 = (int *)param_1[1];
  uVar2 = FUN_00402e8c(piVar1,param_2);
  if ((char)uVar2 == '\0') {
    FUN_00402d14(piVar1);
    param_1[1] = 0;
    iVar3 = (**(code **)(param_2 + 0xc))(param_2,1);
    param_1[1] = iVar3;
    *(int **)(iVar3 + 0xc) = param_1;
    uVar2 = FUN_00402f08(param_1,CONCAT22(extraout_var,0xfffd));
    *(undefined4 *)(iVar3 + 8) = uVar2;
    *(int **)(iVar3 + 0x14) = param_1;
    uVar2 = FUN_00402f08(param_1,CONCAT22(extraout_var_00,0xfffc));
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
    FUN_00402ef0(param_1,param_1,extraout_ECX);
  }
  return;
}


/* ==== 004192e4 FUN_004192e4 ==== */

int FUN_004192e4(int *param_1)

{
  FUN_00419280(param_1,(int)&LAB_0041585c);
  return param_1[1];
}


/* ==== 004192fc FUN_004192fc ==== */

void FUN_004192fc(int *param_1,undefined4 *param_2)

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
    piStack_18 = (int *)0x419317;
    iVar1 = FUN_00402c5c(param_2);
    piStack_18 = (int *)0x41931c;
    local_8 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
    piStack_18 = (int *)0x419329;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    local_8[3] = (int)param_1;
    puStack_1c = (undefined1 *)0x41933b;
    piStack_18 = local_8;
    iVar1 = FUN_00402f08(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_18[2] = iVar1;
    local_8[5] = (int)param_1;
    puStack_1c = (undefined1 *)0x419353;
    piStack_18 = local_8;
    iVar1 = FUN_00402f08(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),0xfffc));
    piStack_18[4] = iVar1;
  }
  puStack_1c = &LAB_0041938c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piStack_18 = (int *)&stack0xfffffffc;
  FUN_00402d14((int *)param_1[1]);
  param_1[1] = (int)local_8;
  FUN_00402ef0(param_1,param_1,extraout_ECX);
  *in_FS_OFFSET = uStack_20;
  return;
}


/* ==== 004193ac TPicture.virtual_008 ==== */

void TPicture_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_004192fc(param_1,(undefined4 *)0x0);
    return;
  }
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPicture_virtual_000_00415478);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_00415394);
    if ((char)uVar1 == '\0') {
      TPersistent_virtual_008(param_1,param_2);
    }
    else {
      FUN_004192fc(param_1,param_2);
    }
  }
  else {
    FUN_004192fc(param_1,(undefined4 *)param_2[1]);
  }
  return;
}


/* ==== 00419408 TPicture.dynamic_fffd ==== */

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


/* ==== 0041942c TPicture.dynamic_fffc ==== */

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


/* ==== 00419454 FUN_00419454 ==== */

void FUN_00419454(int *param_1,int *param_2)

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
  puStack_60 = &LAB_0041955b;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  piStack_68 = (int *)0x419483;
  (**(code **)(*param_2 + 4))(param_2,&local_48,1);
  piStack_68 = (int *)0x419492;
  (**(code **)(*param_2 + 4))(param_2,local_47,local_48);
  piStack_68 = (int *)0x41949d;
  FUN_00403bdc((int *)&local_4c,&local_48);
  piStack_68 = (int *)0x4194aa;
  iVar1 = FUN_00418f98(DAT_004465b8,local_4c);
  local_8 = (int *)0x0;
  if (iVar1 != 0) {
    piStack_68 = (int *)0x4194b8;
    local_8 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
    puStack_6c = &LAB_004194dd;
    uStack_70 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_70;
    piStack_68 = (int *)&stack0xfffffffc;
    (**(code **)(*local_8 + 0x30))(local_8,param_2);
    *in_FS_OFFSET = uStack_70;
  }
  piStack_68 = (int *)0x4194fc;
  FUN_00402d14((int *)param_1[1]);
  param_1[1] = (int)local_8;
  uVar2 = extraout_ECX;
  if (local_8 != (int *)0x0) {
    local_8[3] = (int)param_1;
    piStack_68 = local_8;
    puStack_6c = (undefined1 *)0x41951a;
    iVar1 = FUN_00402f08(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_68[2] = iVar1;
    local_8[5] = (int)param_1;
    piStack_68 = local_8;
    puStack_6c = (undefined1 *)0x419532;
    iVar1 = FUN_00402f08(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),0xfffc));
    piStack_68[4] = iVar1;
    uVar2 = extraout_ECX_00;
  }
  piStack_68 = (int *)0x419545;
  FUN_00402ef0(param_1,param_1,uVar2);
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_00419562;
  puStack_60 = (undefined1 *)0x41955a;
  FUN_004039b8((int *)&local_4c);
  return;
}


/* ==== 004195c8 FUN_004195c8 ==== */

bool FUN_004195c8(void)

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
    uVar4 = FUN_00402e8c(piVar1,(int)&PTR_TPicture_virtual_000_00415478);
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


/* ==== 00419644 TPicture.virtual_004 ==== */

void TPicture_virtual_004(undefined4 param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = FUN_00419454;
  puVar2 = &LAB_0041956c;
  uVar4 = param_1;
  bVar1 = FUN_004195c8();
  (**(code **)(*param_2 + 8))(param_2,&DAT_00419688,bVar1,puVar2,param_1,pcVar3,uVar4);
  return;
}


/* ==== 00419690 FUN_00419690 ==== */

undefined4 FUN_00419690(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  }
  return uVar1;
}


/* ==== 004196a8 FUN_004196a8 ==== */

undefined4 FUN_004196a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  }
  return uVar1;
}


/* ==== 004196c0 TMetafileImage.Destroy ==== */

void TMetafileImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if ((HENHMETAFILE)piVar1[2] != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile((HENHMETAFILE)piVar1[2]);
  }
  FUN_004158e4((HGDIOBJ)piVar1[5]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 004196fc TMetafileImage.virtual_000 ==== */

void TMetafileImage_virtual_000(void)

{
  return;
}


/* ==== 00419700 TMetafile.virtual_00c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TGraphic_virtual_00c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  (**(code **)(*param_1 + 8))(param_1,0);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00419748 TMetafile.Destroy ==== */

void TMetafile_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0041a6f0((int *)piVar1[8]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00419778 TMetafile.virtual_008 ==== */

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
     (uVar3 = FUN_00402e8c(param_2,(int)&LAB_004155e0), param_3 = extraout_ECX, (char)uVar3 == '\0')
     ) {
    TPersistent_virtual_008(param_1,param_2);
    return;
  }
  iVar5 = 0;
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    iVar5 = piVar1[5];
    FUN_0041a6f0(piVar1);
    param_3 = extraout_ECX_00;
  }
  if (param_2 == (int *)0x0) {
    iVar4 = FUN_00402ce4((int *)&PTR_TMetafileImage_virtual_000_00415580,'\x01',param_3);
    param_1[8] = iVar4;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    param_1[8] = param_2[8];
    *(char *)(param_1 + 9) = (char)param_2[9];
  }
  FUN_0041a6ec(param_1[8]);
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


/* ==== 0041980c TMetafile.virtual_014 ==== */

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
      pHVar2 = (HDC)FUN_00417430(param_2);
      pHVar3 = SelectPalette(pHVar2,pHVar3,BVar6);
      pHVar2 = (HDC)FUN_00417430(param_2);
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
    pHVar2 = (HDC)FUN_00417430(param_2);
    PlayEnhMetaFile(pHVar2,hmf,pRVar4);
    if (pHVar1 != (HPALETTE)0x0) {
      BVar6 = -1;
      pHVar2 = (HDC)FUN_00417430(param_2);
      SelectPalette(pHVar2,pHVar3,BVar6);
    }
  }
  return;
}


/* ==== 004198a0 TMetafile.virtual_01c ==== */

bool TMetafile_virtual_01c(int param_1)

{
  return *(int *)(param_1 + 0x20) == 0;
}


/* ==== 004198a8 TMetafile.virtual_020 ==== */

int TMetafile_virtual_020(int param_1)

{
  int iVar1;
  int numerator;
  int local_14;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00419a50(param_1);
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
    iVar1 = MulDiv(*(int *)(iVar1 + 0x10),DAT_00447650,0x9ec);
  }
  return iVar1;
}


/* ==== 0041990c TMetafile.virtual_024 ==== */

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
      FUN_004158e4(*(HGDIOBJ *)(*(int *)(param_1 + 0x20) + 0x14));
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


/* ==== 00419998 TMetafile.virtual_02c ==== */

int TMetafile_virtual_02c(int param_1)

{
  int iVar1;
  int numerator;
  int local_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00419a50(param_1);
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
    iVar1 = MulDiv(*(int *)(iVar1 + 0xc),DAT_00447650,0x9ec);
  }
  return iVar1;
}


/* ==== 004199fc TMetafile.virtual_050 ==== */

void TMetafile_virtual_050(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00419f40(param_1,param_2);
  if ((char)uVar1 == '\0') {
    iVar3 = FUN_00410af0(param_2);
    iVar2 = FUN_00410ad4(param_2);
    FUN_00419bb4((int)param_1,param_2,iVar3 - iVar2);
  }
  else {
    FUN_00419ae4((int)param_1,param_2);
  }
  iVar3 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar3 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 00419a50 FUN_00419a50 ==== */

void FUN_00419a50(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_0041a6f0(*(int **)(param_1 + 0x20));
  iVar1 = FUN_00402ce4((int *)&PTR_TMetafileImage_virtual_000_00415580,'\x01',extraout_ECX);
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0041a6ec(iVar1);
  return;
}


/* ==== 00419a78 TMetafile.virtual_030 ==== */

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
    uVar1 = FUN_00419f40(param_1,param_2);
    if ((char)uVar1 == '\0') {
      FUN_00419bb4((int)param_1,param_2,iStack_10 + -4);
    }
    else {
      FUN_00419ae4((int)param_1,param_2);
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 00419ae4 FUN_00419ae4 ==== */

void FUN_00419ae4(int param_1,int *param_2)

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
  
  puStack_7c = (undefined1 *)0x419af8;
  FUN_00419a50(param_1);
  puStack_7c = (undefined1 *)0x419b07;
  FUN_00410b28(param_2,local_6c,100);
  if (local_44 != 0x464d4520) {
    puStack_7c = (undefined1 *)0x419b15;
    FUN_00417720();
  }
  puStack_7c = (undefined1 *)0x419b1d;
  pb_val = (BYTE *)FUN_004026b8(size);
  iVar1 = *(int *)(param_1 + 0x20);
  puStack_80 = &LAB_00419ba4;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puStack_7c = &stack0xfffffffc;
  FUN_004027d0(local_6c,(undefined4 *)pb_val,100);
  FUN_00410b28(param_2,pb_val + 100,size - 100);
  pHVar2 = SetEnhMetaFileBits(size,pb_val);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar2;
  if (pHVar2 == (HENHMETAFILE)0x0) {
    FUN_00417720();
  }
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(int *)(iVar1 + 0xc) = local_4c - local_54;
  *(int *)(iVar1 + 0x10) = local_48 - local_50;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *in_FS_OFFSET = uStack_84;
  puStack_7c = &LAB_00419bab;
  puStack_80 = (undefined1 *)0x419ba3;
  FUN_004026d0((int)pb_val);
  return;
}


/* ==== 00419bb4 FUN_00419bb4 ==== */

void FUN_00419bb4(int param_1,int *param_2,int param_3)

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
  
  puStack_ac = (undefined1 *)0x419bcf;
  size = param_3;
  local_8 = param_2;
  FUN_00419a50(param_1);
  puStack_ac = (undefined1 *)0x419bdf;
  (**(code **)(*local_8 + 4))(local_8,&local_26,0x16);
  if (local_26 == -0x65393229) {
    puStack_ac = (undefined1 *)0x419bf0;
    uVar2 = FUN_00418570((ushort *)&local_26);
    if (uVar2 == local_12) goto LAB_00419bfb;
  }
  puStack_ac = (undefined1 *)0x419bfb;
  FUN_00417720();
LAB_00419bfb:
  size = size - 0x16;
  puStack_ac = (undefined1 *)0x419c07;
  meta16_data = (BYTE *)FUN_004026b8(size);
  iVar1 = *(int *)(param_1 + 0x20);
  puStack_b0 = &LAB_00419d23;
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
    FUN_00417720();
  }
  GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,&enhmetaheader);
  enhmetaheader.szlMicrometers.cx = 8;
  enhmetaheader.szlMicrometers.cy = enhmetaheader.rclFrame.right;
  DeleteEnhMetaFile(*(HENHMETAFILE *)(iVar1 + 8));
  pHVar3 = SetWinMetaFileBits(size,meta16_data,(HDC)0x0,
                              (METAFILEPICT *)&enhmetaheader.szlMicrometers);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar3;
  if (pHVar3 == (HENHMETAFILE)0x0) {
    FUN_00417720();
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *in_FS_OFFSET = uStack_b4;
  puStack_ac = &LAB_00419d2a;
  puStack_b0 = (undefined1 *)0x419d22;
  FUN_004026d0((int)meta16_data);
  return;
}


/* ==== 00419d34 TMetafile.virtual_04c ==== */

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
  puStack_20 = &LAB_00419da2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = param_1[9];
  FUN_00407f64(param_2,(int *)&local_c);
  FUN_0040b420(local_c,(int *)&local_8);
  FUN_00403d48(local_8,(uint *)&DAT_00419db8);
  if ((bool)uVar2) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  TGraphic_virtual_04c(param_1,param_2);
  *(char *)(param_1 + 9) = (char)iVar1;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00419da9;
  puStack_20 = (undefined1 *)0x419da1;
  FUN_004039dc((int *)&local_c,2);
  return;
}


/* ==== 00419dc0 TMetafile.virtual_054 ==== */

void TMetafile_virtual_054(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_0041a134(param_1,param_2);
    }
    else {
      FUN_0041a0a8(param_1,param_2);
    }
  }
  return;
}


/* ==== 00419ddc TMetafile.virtual_034 ==== */

void TMetafile_virtual_034(int *param_1,int number)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int denominator;
  int local_18;
  
  if (param_1[8] == 0) {
    FUN_00419a50((int)param_1);
  }
  iVar1 = param_1[8];
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      *(int *)(iVar1 + 0x20) = number;
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff94);
      iVar1 = MulDiv(number,local_18 * 100,denominator);
      FUN_00419e50(param_1,iVar1,extraout_ECX);
    }
  }
  else {
    iVar1 = MulDiv(number,0x9ec,DAT_00447650);
    FUN_00419e50(param_1,iVar1,extraout_ECX_00);
  }
  return;
}


/* ==== 00419e50 FUN_00419e50 ==== */

void FUN_00419e50(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (param_1[8] == 0) {
    FUN_00419a50((int)param_1);
    param_3 = extraout_ECX;
  }
  iVar1 = param_1[8];
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (param_2 != *(int *)(iVar1 + 0x10)) {
    FUN_00419fa0((int)param_1,0,param_3);
    *(int *)(param_1[8] + 0x10) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 00419e8c FUN_00419e8c ==== */

void FUN_00419e8c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (param_1[8] == 0) {
    FUN_00419a50((int)param_1);
    param_3 = extraout_ECX;
  }
  iVar1 = param_1[8];
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (param_2 != *(int *)(iVar1 + 0xc)) {
    FUN_00419fa0((int)param_1,0,param_3);
    *(int *)(param_1[8] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 00419ec8 TMetafile.virtual_03c ==== */

void TMetafile_virtual_03c(void)

{
  return;
}


/* ==== 00419ecc TMetafile.virtual_040 ==== */

void TMetafile_virtual_040(int *param_1,int number)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int denominator;
  int local_1c;
  
  if (param_1[8] == 0) {
    FUN_00419a50((int)param_1);
  }
  iVar1 = param_1[8];
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      *(int *)(iVar1 + 0x1c) = number;
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff94);
      iVar1 = MulDiv(number,local_1c * 100,denominator);
      FUN_00419e8c(param_1,iVar1,extraout_ECX);
    }
  }
  else {
    iVar1 = MulDiv(number,0x9ec,DAT_00447650);
    FUN_00419e8c(param_1,iVar1,extraout_ECX_00);
  }
  return;
}


/* ==== 00419f40 FUN_00419f40 ==== */

undefined4 FUN_00419f40(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  int local_70 [10];
  int local_48;
  
  iVar1 = FUN_00410af0(param_2);
  iVar2 = FUN_00410ad4(param_2);
  if (100 < iVar1 - iVar2) {
    (**(code **)(*param_2 + 4))(param_2,local_70,100);
    uVar3 = (**(code **)(*param_2 + 0xc))(param_2,0xffffff9c,CONCAT22(extraout_var,1));
    if ((local_70[0] == 1) && (local_48 == 0x464d4520)) {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00419fa0 FUN_00419fa0 ==== */

void FUN_00419fa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00419a50(param_1);
  }
  else if (1 < *(int *)(*(int *)(param_1 + 0x20) + 4)) {
    iVar1 = FUN_00402ce4((int *)&PTR_TMetafileImage_virtual_000_00415580,'\x01',param_3);
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
    FUN_0041a6f0(*(int **)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = iVar1;
    FUN_0041a6ec(iVar1);
  }
  return;
}


/* ==== 0041a024 TMetafile.virtual_044 ==== */

void TMetafile_virtual_044(int param_1,int *param_2)

{
  int iVar1;
  undefined2 extraout_var;
  int local_10;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    local_10 = 0;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    local_10 = FUN_00410ad4(param_2);
    local_10 = local_10 + -4;
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_0041a134(param_1,param_2);
    }
    else {
      FUN_0041a0a8(param_1,param_2);
    }
    (**(code **)(*param_2 + 0xc))(param_2,local_10,0);
    iVar1 = FUN_00410af0(param_2);
    local_10 = iVar1 - local_10;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    (**(code **)(*param_2 + 0xc))(param_2,0,CONCAT22(extraout_var,2));
  }
  return;
}


/* ==== 0041a0a8 FUN_0041a0a8 ==== */

void FUN_0041a0a8(int param_1,int *param_2)

{
  UINT nSize;
  LPBYTE lpData;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    nSize = GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),0,(LPBYTE)0x0);
    if (nSize != 0) {
      lpData = (LPBYTE)FUN_004026b8(nSize);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe0;
      GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),nSize,lpData);
      FUN_00410b60(param_2,lpData,nSize);
      *in_FS_OFFSET = uVar1;
      FUN_004026d0((int)lpData);
      return;
    }
  }
  return;
}


/* ==== 0041a134 FUN_0041a134 ==== */

void FUN_0041a134(int param_1,int *param_2)

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
  FUN_00402a2c((undefined4 *)local_26,0x16,0);
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
  local_12 = FUN_00418570(local_26);
  hdc_ref = GetDC((HWND)0x0);
  *in_FS_OFFSET = &stack0xffffffc4;
  data16 = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),0,(LPBYTE)0x0,8,hdc_ref);
  data16_2 = (LPBYTE)FUN_004026b8(data16);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb8;
  UVar2 = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),data16,data16_2,8,hdc_ref);
  if (UVar2 < data16) {
    FUN_00417780();
  }
  FUN_00410b60(param_2,local_26,0x16);
  FUN_00410b60(param_2,data16_2,data16);
  *in_FS_OFFSET = uVar3;
  FUN_004026d0((int)data16_2);
  return;
}


/* ==== 0041a27c TMetafile.virtual_058 ==== */

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
    FUN_004176f0((undefined4 *)PTR_PTR_00446c88);
  }
  FUN_00419a50((int)param_1);
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


/* ==== 0041a300 TMetafile.virtual_05c ==== */

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


/* ==== 0041a3d0 FUN_0041a3d0 ==== */

void FUN_0041a3d0(void)

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
  
  puStack_14 = (undefined1 *)0x41a3e0;
  local_c = (undefined4 *)FUN_0040f38c(DAT_004465bc);
  puStack_18 = &LAB_0041a46e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      i_val = iVar1;
      puStack_20 = (undefined1 *)0x41a40b;
      local_10 = (int *)FUN_0040f024(local_c,i_val);
      puStack_20 = (undefined1 *)0x41a416;
      cVar2 = FUN_004172cc((int)local_10);
      if (cVar2 != '\0') {
        puStack_24 = &LAB_0041a446;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_0041a560(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x41a44d;
        puStack_24 = (undefined1 *)0x41a445;
        FUN_00417328((int)local_10);
        return;
      }
      i_val = i_val + -1;
      iVar1 = i_val;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041a475;
  puStack_18 = (undefined1 *)0x41a46d;
  FUN_0040f3f0(DAT_004465bc);
  return;
}


/* ==== 0041a47c FUN_0041a47c ==== */

void FUN_0041a47c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (param_1 != 0) {
    puStack_14 = (undefined1 *)0x41a495;
    puVar1 = (undefined4 *)FUN_0040f38c(DAT_004465bc);
    puStack_18 = &LAB_0041a4ec;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    i_val = puVar1[2] + -1;
    puStack_14 = &stack0xfffffffc;
    if (-1 < i_val) {
      do {
        piVar2 = (int *)FUN_0040f024(puVar1,i_val);
        if ((piVar2[0x16] != 0) && (*(int *)(*(int *)(piVar2[0x16] + 0x20) + 8) == param_1)) {
          FUN_0041a560(piVar2);
        }
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x41a4f3;
    puStack_18 = (undefined1 *)0x41a4eb;
    FUN_0040f3f0(DAT_004465bc);
    return;
  }
  return;
}


/* ==== 0041a4f8 FUN_0041a4f8 ==== */

int * FUN_0041a4f8(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
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
  FUN_00416eac(param_1,'\0',param_3);
  param_1[0x16] = param_3;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0041a534 TBitmapCanvas.Destroy ==== */

void TBitmapCanvas_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0041a560(piVar1);
  TCanvas_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041a560 FUN_0041a560 ==== */

void FUN_0041a560(int *param_1)

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[1] != 0) {
    puStack_10 = (undefined1 *)0x41a57d;
    FUN_00417174((int)param_1);
    puStack_14 = &LAB_0041a5f4;
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
    FUN_004174b0(param_1,0);
    DeleteDC(hdc);
    FUN_0040f3a0(DAT_004465bc,(int)param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x41a5fb;
    puStack_14 = (undefined1 *)0x41a5f3;
    FUN_00417328((int)param_1);
    return;
  }
  return;
}


/* ==== 0041a600 TBitmapCanvas.virtual_014 ==== */

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
    puStack_14 = (undefined1 *)0x41a61e;
    FUN_00417174((int)param_1);
    puStack_18 = &LAB_0041a6df;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_0041b8b0(param_1[0x16]);
    FUN_0041a47c(*(int *)(*(int *)(param_1[0x16] + 0x20) + 8));
    FUN_0041b920(param_1[0x16]);
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
    FUN_004174b0(param_1,(int)hdc);
    FUN_0040f304(DAT_004465bc,(int)param_1);
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x41a6e6;
    puStack_18 = (undefined1 *)0x41a6de;
    FUN_00417328((int)param_1);
    return;
  }
  return;
}


/* ==== 0041a6ec FUN_0041a6ec ==== */

void FUN_0041a6ec(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


/* ==== 0041a6f0 FUN_0041a6f0 ==== */

void FUN_0041a6f0(int *param_1)

{
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    (**(code **)*param_1)();
    FUN_00402d14(param_1);
  }
  return;
}


/* ==== 0041a710 TBitmapImage.Destroy ==== */

void TBitmapImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  if (piVar1[5] != 0) {
    FUN_0041a47c(piVar1[5]);
    DeleteObject((HGDIOBJ)piVar1[5]);
    piVar1[5] = 0;
  }
  (**(code **)*piVar1)();
  if ((HANDLE)piVar1[0x19] != (HANDLE)0x0) {
    CloseHandle((HANDLE)piVar1[0x19]);
  }
  FUN_0040bc78(piVar1 + 0x1b);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041a76c TBitmapImage.virtual_000 ==== */

void TBitmapImage_virtual_000(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x14))) {
    FUN_0041a47c(iVar1);
    DeleteObject(*(HGDIOBJ *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0041a47c(*(int *)(param_1 + 0xc));
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_004158e4(*(HGDIOBJ *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ==== 0041a7b8 FUN_0041a7b8 ==== */

void FUN_0041a7b8(HGDIOBJ h_val_2,HPALETTE param_2,int param_3)

{
  UINT cEntries;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  tagPALETTEENTRY local_414 [256];
  HGDIOBJ h_val;
  HDC hdc_val;
  HDC local_c;
  HPALETTE local_8;
  
  if ((h_val_2 != (HGDIOBJ)0x0) && (*(ushort *)(param_3 + 0x26) < 9)) {
    local_8 = param_2;
    cEntries = FUN_00417fbc(param_2,local_414,0xff);
    if (cEntries != 0) {
      local_c = GetDC((HWND)0x0);
      hdc_val = CreateCompatibleDC(local_c);
      h_val = SelectObject(hdc_val,h_val_2);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xfffffbd8;
      SetDIBColorTable(hdc_val,0,cEntries,(RGBQUAD *)local_414);
      *in_FS_OFFSET = uVar1;
      SelectObject(hdc_val,h_val);
      DeleteDC(hdc_val);
      ReleaseDC((HWND)0x0,local_c);
      return;
    }
  }
  return;
}


/* ==== 0041a874 FUN_0041a874 ==== */

void FUN_0041a874(int param_1)

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


/* ==== 0041a8c0 FUN_0041a8c0 ==== */

HPALETTE FUN_0041a8c0(HBITMAP param_1,HPALETTE param_2,HPALETTE param_3,int param_4,int param_5)

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
    FUN_0041a47c((int)param_1);
    local_74 = 0;
    if (local_8 != (HBITMAP)0x0) {
      i_val = GetObjectA(local_8,0x54,local_8c);
      if (i_val < 0x18) {
        FUN_00417708();
      }
    }
    pHVar1 = GetDC((HWND)0x0);
    hdc_val = (HDC)FUN_00417828((int)pHVar1);
    pHVar1 = CreateCompatibleDC(hdc_val);
    local_20 = (HDC)FUN_00417828((int)pHVar1);
    *in_FS_OFFSET = &stack0xffffff4c;
    if (*(uint *)(param_5 + 0x18) < 0x28) {
      if ((*(ushort *)(param_5 + 0x10) | *(ushort *)(param_5 + 0x12)) == 1) {
        pHVar2 = CreateBitmap(*(int *)(param_5 + 4),*(int *)(param_5 + 8),1,1,(void *)0x0);
        h_val_3 = (HPALETTE)FUN_00417828((int)pHVar2);
      }
      else {
        pHVar2 = CreateCompatibleBitmap(hdc_val,*(int *)(param_5 + 4),*(int *)(param_5 + 8));
        h_val_3 = (HPALETTE)FUN_00417828((int)pHVar2);
      }
      FUN_00417828((int)h_val_3);
      h_val = SelectObject(local_20,h_val_3);
      h_val_2 = (HGDIOBJ)FUN_00417828((int)h_val);
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
        hbr = (HBRUSH)FUN_00416d90(*(int *)(param_4 + 0x14));
        FUN_0040e5ac(0,0,*(undefined4 *)(param_5 + 4),&local_9c.left,*(undefined4 *)(param_5 + 8));
        FillRect(local_20,&local_9c,hbr);
        CVar4 = FUN_004160cc(*(uint *)(*(int *)(param_4 + 0xc) + 0x18));
        SetTextColor(local_20,CVar4);
        uVar5 = TBrush_GetColor(*(int *)(param_4 + 0x14));
        CVar4 = FUN_004160cc(uVar5);
        SetBkColor(local_20,CVar4);
        if ((*(short *)(param_5 + 0x26) == 1) && (*(int *)(param_5 + 0x14) != 0)) {
          rgbquad = (RGBQUAD)FUN_004160cc(*(uint *)(*(int *)(param_4 + 0xc) + 0x18));
          uVar5 = TBrush_GetColor(*(int *)(param_4 + 0x14));
          local_30 = FUN_004160cc(uVar5);
          SetDIBColorTable(local_20,0,2,&rgbquad);
        }
      }
      if (local_8 != (HBITMAP)0x0) {
        pHVar1 = CreateCompatibleDC(hdc_val);
        local_24 = (HDC)FUN_00417828((int)pHVar1);
        uVar10 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffff1c;
        h_val = SelectObject(local_24,local_8);
        h_val = (HGDIOBJ)FUN_00417828((int)h_val);
        if (pal_3 != (HPALETTE)0x0) {
          pHVar6 = SelectPalette(local_24,pal_3,0);
          RealizePalette(local_24);
        }
        if (param_4 != 0) {
          CVar4 = FUN_004160cc(*(uint *)(*(int *)(param_4 + 0xc) + 0x18));
          SetTextColor(local_24,CVar4);
          uVar5 = TBrush_GetColor(*(int *)(param_4 + 0x14));
          CVar4 = FUN_004160cc(uVar5);
          SetBkColor(local_24,CVar4);
        }
        BitBlt(local_20,0,0,*(int *)(param_5 + 4),*(int *)(param_5 + 8),local_24,0,0,0xcc0020);
        if (pal_3 != (HPALETTE)0x0) {
          SelectPalette(local_24,pHVar6,-1);
        }
        h_val = SelectObject(local_24,h_val);
        FUN_00417828((int)h_val);
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
    lpbmi_val = (LPBITMAPINFO)FUN_004026b8(0x42c);
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
        FUN_00417fbc(pal_2,(LPPALETTEENTRY)lpbmi_val->bmiColors,0xff);
      }
    }
    else if (((*(short *)(param_5 + 0x26) == 0x10) || (*(short *)(param_5 + 0x26) == 0x20)) &&
            ((*(byte *)(param_5 + 0x28) & 3) != 0)) {
      FUN_0041a874(param_5);
      FUN_004027d0((undefined4 *)(param_5 + 0x40),lpbmi_val->bmiColors,0xc);
    }
    pHVar2 = CreateDIBSection(hdc_val,lpbmi_val,0,&lpv_bits,(HANDLE)0x0,0);
    h_val_3 = (HPALETTE)FUN_00417828((int)pHVar2);
    if (lpv_bits == (LPVOID)0x0) {
      FUN_00417780();
    }
    if ((((local_8 == (HBITMAP)0x0) || (*(int *)(param_5 + 0x1c) != local_88)) ||
        (*(int *)(param_5 + 0x20) != local_84)) || (*(ushort *)(param_5 + 0x26) < 9)) {
      *in_FS_OFFSET = uVar10;
      pHVar6 = (HPALETTE)FUN_004026d0((int)lpbmi_val);
      return pHVar6;
    }
    uVar5 = (int)*(uint *)(param_5 + 0x20) >> 0x1f;
    GetDIBits(local_20,local_8,0,(*(uint *)(param_5 + 0x20) ^ uVar5) - uVar5,lpv_bits,lpbmi_val,0);
    FUN_0040350c();
    FUN_0040350c();
  }
  return h_val_3;
}


/* ==== 0041af1c FUN_0041af1c ==== */

HPALETTE FUN_0041af1c(HPALETTE param_1)

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


/* ==== 0041af80 FUN_0041af80 ==== */

BOOL FUN_0041af80(HPALETTE param_1,HPALETTE pal,COLORREF color_val)

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
      FUN_0041a47c((int)param_1);
      local_c = (HDC)0x0;
      hdc_val = (HDC)0x0;
      iVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&stack0xffffff74;
      pHVar2 = GetDC((HWND)0x0);
      local_c = (HDC)FUN_00417828((int)pHVar2);
      pHVar2 = CreateCompatibleDC(local_c);
      hdc_val = (HDC)FUN_00417828((int)pHVar2);
      iVar4 = local_70;
      h_val_3 = CreateBitmap(local_70,local_6c,1,1,(void *)0x0);
      if (h_val_3 != (HBITMAP)0x0) {
        h_val = SelectObject(hdc_val,h_val_3);
        if (color_val != 0x1fffffff) {
          pHVar2 = CreateCompatibleDC(local_c);
          local_10 = (HDC)FUN_00417828((int)pHVar2);
          *in_FS_OFFSET = (int)&stack0xffffff68;
          if (local_60 == 0) {
            local_15 = '\0';
          }
          else {
            local_15 = '\x01';
            local_5c = 0;
            iVar4 = 0;
            param_1 = FUN_0041a8c0((HBITMAP)param_1,pal,pal,0,(int)local_74);
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


/* ==== 0041b18c TBitmap.virtual_00c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TGraphic_virtual_00c(param_1,'\0',param_3);
  param_1[0xb] = 0x20000000;
  iVar1 = FUN_00402ce4((int *)&PTR_TBitmapImage_virtual_000_004156bc,'\x01',extraout_ECX_00);
  param_1[8] = iVar1;
  FUN_0041a6ec(iVar1);
  if (DAT_00446380 != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,1);
  }
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0041b1f4 TBitmap.Destroy ==== */

void TBitmap_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0041b8a0((int)piVar1);
  FUN_0041a6f0((int *)piVar1[8]);
  FUN_00402d14((int *)piVar1[9]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041b230 TBitmap.virtual_008 ==== */

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
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_0041571c);
    if ((char)uVar1 == '\0') {
      TPersistent_virtual_008(local_8,param_2);
      return;
    }
  }
  puStack_6c = (undefined1 *)0x41b260;
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_00447664);
  puStack_6c = &LAB_0041b2e8;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  if (param_2 == (int *)0x0) {
    FUN_00402a2c(local_5c,0x54,0);
    in_stack_ffffff84 = 0;
    FUN_0041ba80((int)local_8,0,0,(int *)0x0,0,local_5c);
  }
  else {
    FUN_0041a6ec(param_2[8]);
    FUN_0041a6f0((int *)local_8[8]);
    local_8[8] = param_2[8];
    *(undefined1 *)((int)local_8 + 0x19) = *(undefined1 *)((int)param_2 + 0x19);
    local_8[0xb] = param_2[0xb];
    *(char *)(local_8 + 0xc) = (char)param_2[0xc];
  }
  *in_FS_OFFSET = in_stack_ffffff84;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_00447664);
  return;
}


/* ==== 0041b320 FUN_0041b320 ==== */

void FUN_0041b320(int param_1,HBITMAP param_2,HPALETTE param_3,undefined4 *param_4)

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
  puStack_70 = (undefined1 *)0x41b345;
  FUN_0041b8a0(param_1);
  local_8 = (HPALETTE)0x0;
  local_c = (HPALETTE)0x0;
  puStack_74 = &LAB_0041b3af;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_70 = &stack0xfffffffc;
  pHVar1 = param_3;
  if (param_3 != DAT_00447648) {
    puStack_70 = &stack0xfffffffc;
    pHVar1 = FUN_0041af1c(param_3);
  }
  local_c = pHVar1;
  local_8 = FUN_0041a8c0(param_2,param_3,local_c,*(int *)(param_1 + 0x24),(int)local_60);
  uVar3 = 0;
  FUN_0041ba80(param_1,local_8,local_c,(int *)0x0,*(undefined1 *)(*(int *)(param_1 + 0x20) + 0x70),
               local_60);
  *in_FS_OFFSET = uVar3;
  return;
}


/* ==== 0041b3e0 FUN_0041b3e0 ==== */

void FUN_0041b3e0(int param_1)

{
  int iVar1;
  
  FUN_0041b67c(param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  FUN_0040bc78((undefined4 *)(iVar1 + 0x6c));
  return;
}


/* ==== 0041b404 TBitmap.virtual_010 ==== */

void TBitmap_virtual_010(int param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 0;
  TGraphic_virtual_010(param_1);
  return;
}


/* ==== 0041b410 FUN_0041b410 ==== */

void FUN_0041b410(int param_1)

{
  FUN_0041b8a0(param_1);
  FUN_0041b82c(param_1);
  (**(code **)**(undefined4 **)(param_1 + 0x20))();
  return;
}


/* ==== 0041b42c TBitmap.virtual_014 ==== */

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
  FUN_00417504(param_2,0xf);
  FUN_0041b920((int)param_1);
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
    uVar7 = FUN_0041b7ac((int)param_1);
    if ((char)uVar7 == '\0') {
      iVar3 = 3;
      pHVar6 = (HDC)FUN_00417430(local_8);
      SetStretchBltMode(pHVar6,iVar3);
    }
  }
  uVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc8;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    FUN_0041b8c0(param_1);
  }
  piVar5 = (int *)FUN_0041b6f8(param_1);
  FUN_00417504(piVar5,0xf);
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    *in_FS_OFFSET = &stack0xffffffbc;
    pHVar6 = CreateCompatibleDC((HDC)0x0);
    pHVar6 = (HDC)FUN_00417828((int)pHVar6);
    h = SelectObject(pHVar6,*(HGDIOBJ *)(src + 0xc));
    iVar3 = param_3[2] - *param_3;
    iVar4 = param_3[3] - param_3[1];
    x_src = FUN_0041b6f8(param_1);
    uVar7 = 0;
    FUN_004179cc((HDC)local_8[1],*param_3,param_3[1],0,0,pHVar6,*(int *)(src + 0x20),
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
  iVar4 = FUN_0041b6f8(param_1);
  StretchBlt((HDC)local_8[1],*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],
             *(HDC *)(iVar4 + 4),x_src,ySrc,src,iVar3,rop);
  *in_FS_OFFSET = uVar7;
  if (local_d != '\0') {
    SelectPalette((HDC)local_8[1],pal,-1);
  }
  return;
}


/* ==== 0041b67c FUN_0041b67c ==== */

void FUN_0041b67c(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  BOOL BVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (1 < *(int *)(iVar1 + 4)) {
    FUN_0041b8b0(param_1);
    if (*(char *)(iVar1 + 0x71) == '\0') {
      pHVar2 = *(HPALETTE *)(iVar1 + 0x10);
    }
    else {
      pHVar2 = (HPALETTE)0x0;
    }
    FUN_0041b320(param_1,*(HBITMAP *)(iVar1 + 8),pHVar2,(undefined4 *)(iVar1 + 0x18));
    return;
  }
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
    if (*(HGDIOBJ *)(iVar1 + 0x14) != (HGDIOBJ)0x0) {
      BVar3 = DeleteObject(*(HGDIOBJ *)(iVar1 + 0x14));
      if (BVar3 == 0) {
        FUN_00417780();
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return;
}


/* ==== 0041b6e0 TBitmap.virtual_01c ==== */

undefined4 TBitmap_virtual_01c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0041b6f8 FUN_0041b6f8 ==== */

int FUN_0041b6f8(int *param_1)

{
  int *piVar1;
  
  if (param_1[9] == 0) {
    FUN_0041b8b0((int)param_1);
    piVar1 = FUN_0041a4f8((int *)&PTR_TPersistent_virtual_000_0041a380,'\x01',(int)param_1);
    param_1[9] = (int)piVar1;
    piVar1[0xb] = (int)param_1;
    piVar1[10] = *(int *)(*param_1 + 0x10);
    piVar1[0xd] = (int)param_1;
    piVar1[0xc] = (int)FUN_0041b3e0;
  }
  return param_1[9];
}


/* ==== 0041b738 TBitmap.virtual_060 ==== */

undefined4 TBitmap_virtual_060(int param_1)

{
  FUN_0041b8a0(param_1);
  FUN_0041b8b0(param_1);
  FUN_0041b3e0(param_1);
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
}


/* ==== 0041b75c FUN_0041b75c ==== */

undefined4 FUN_0041b75c(int param_1)

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


/* ==== 0041b788 TBitmap.virtual_020 ==== */

int TBitmap_virtual_020(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x20) + 0x20);
  uVar2 = (int)uVar1 >> 0x1f;
  return (uVar1 ^ uVar2) - uVar2;
}


/* ==== 0041b798 TBitmap.virtual_064 ==== */

undefined4 TBitmap_virtual_064(int *param_1)

{
  FUN_0041b8c0(param_1);
  return *(undefined4 *)(param_1[8] + 0xc);
}


/* ==== 0041b7ac FUN_0041b7ac ==== */

undefined4 FUN_0041b7ac(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(short *)(iVar1 + 0x28) == 1) && (*(short *)(iVar1 + 0x2a) == 1)) {
    return CONCAT31((int3)((uint)(iVar1 + 0x18) >> 8),1);
  }
  return 0;
}


/* ==== 0041b7c8 TBitmap.virtual_024 ==== */

undefined4 TBitmap_virtual_024(int param_1)

{
  FUN_0041b920(param_1);
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
}


/* ==== 0041b7dc FUN_0041b7dc ==== */

uint FUN_0041b7dc(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0xb] == 0x20000000) {
    uVar1 = FUN_0041b7ac((int)param_1);
    if ((char)uVar1 == '\0') {
      iVar3 = (**(code **)(*param_1 + 0x20))();
      piVar4 = (int *)FUN_0041b6f8(param_1);
      uVar2 = FUN_004173bc(piVar4,0,iVar3 + -1);
    }
    else {
      uVar2 = 0xffffff;
    }
  }
  else {
    uVar2 = FUN_004160cc(param_1[0xb]);
  }
  return uVar2 | 0x2000000;
}


/* ==== 0041b824 TBitmap.virtual_02c ==== */

undefined4 TBitmap_virtual_02c(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c);
}


/* ==== 0041b82c FUN_0041b82c ==== */

void FUN_0041b82c(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    FUN_0041b920(param_1);
    if (*(int *)(iVar1 + 0x30) == 0) {
      GetObjectA(*(HANDLE *)(iVar1 + 8),0x54,(LPVOID)(iVar1 + 0x18));
      *(undefined4 *)(iVar1 + 0x30) = 0x28;
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x20);
      *(undefined2 *)(iVar1 + 0x3c) = 1;
      *(short *)(iVar1 + 0x3e) = *(short *)(iVar1 + 0x28) * *(short *)(iVar1 + 0x2a);
    }
    pHVar2 = FUN_0041a8c0(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),
                          *(HPALETTE *)(iVar1 + 0x10),0,iVar1 + 0x18);
    *(HPALETTE *)(iVar1 + 0x14) = pHVar2;
  }
  return;
}


/* ==== 0041b8a0 FUN_0041b8a0 ==== */

void FUN_0041b8a0(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    FUN_0041a560(*(int **)(param_1 + 0x24));
  }
  return;
}


/* ==== 0041b8b0 FUN_0041b8b0 ==== */

void FUN_0041b8b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}


/* ==== 0041b8c0 FUN_0041b8c0 ==== */

void FUN_0041b8c0(int *param_1)

{
  int iVar1;
  uint color_val;
  BOOL BVar2;
  
  if ((*(char *)((int)param_1 + 0x2a) == '\0') || (*(char *)((int)param_1 + 0x29) == '\0')) {
    iVar1 = param_1[8];
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_0041a47c(*(int *)(iVar1 + 0xc));
      DeleteObject(*(HGDIOBJ *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    FUN_0041b8a0((int)param_1);
    FUN_0041b8b0((int)param_1);
    color_val = FUN_0041b7dc(param_1);
    BVar2 = FUN_0041af80(*(HPALETTE *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),color_val);
    *(BOOL *)(iVar1 + 0xc) = BVar2;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    *(undefined1 *)((int)param_1 + 0x29) = 1;
  }
  return;
}


/* ==== 0041b920 FUN_0041b920 ==== */

void FUN_0041b920(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  HDC pHVar3;
  int device_caps_2;
  int device_caps;
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
    FUN_0041a47c(*(int *)(iVar1 + 0x14));
  }
  pHVar2 = FUN_00417f18(*(HGDIOBJ *)(iVar1 + 0x14),(undefined4 *)0x0,
                        1 << ((byte)*(undefined2 *)(iVar1 + 0x3e) & 0x1f));
  *(HPALETTE *)(iVar1 + 0x10) = pHVar2;
  if (pHVar2 != (HPALETTE)0x0) {
    return;
  }
  pHVar3 = GetDC((HWND)0x0);
  pHVar3 = (HDC)FUN_00417828((int)pHVar3);
  if (*(char *)(iVar1 + 0x71) == '\0') {
    device_caps_2 = GetDeviceCaps(pHVar3,0xc);
    device_caps = GetDeviceCaps(pHVar3,0xe);
    if ((int)((uint)*(ushort *)(iVar1 + 0x2a) * (uint)*(ushort *)(iVar1 + 0x28)) <=
        device_caps_2 * device_caps) {
      cVar4 = '\0';
      goto LAB_0041b9b1;
    }
  }
  cVar4 = '\x01';
LAB_0041b9b1:
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


/* ==== 0041b9d8 TBitmap.virtual_058 ==== */

void TBitmap_virtual_058(int *param_1,short param_2,HBITMAP h_val,HPALETTE param_4)

{
  int iVar1;
  undefined4 local_58 [5];
  int local_44;
  undefined4 local_40;
  
  if ((param_2 != 2) || (h_val == (HBITMAP)0x0)) {
    FUN_004176f0((undefined4 *)PTR_PTR_00446c88);
  }
  FUN_0041b8a0((int)param_1);
  FUN_00402a2c(local_58,0x54,0);
  GetObjectA(h_val,0x54,local_58);
  if (local_44 == 0) {
    local_40 = 0;
  }
  FUN_0041b320((int)param_1,h_val,param_4,local_58);
  *(undefined1 *)(param_1[8] + 0x70) = 0;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar1 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041ba5c TBitmap.virtual_050 ==== */

void TBitmap_virtual_050(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00410af0(param_2);
  iVar2 = FUN_00410ad4(param_2);
  FUN_0041c0b8(param_1,param_2,iVar1 - iVar2);
  return;
}


/* ==== 0041ba80 FUN_0041ba80 ==== */

void FUN_0041ba80(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5,
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
  iVar1 = FUN_00402ce4((int *)&PTR_TBitmapImage_virtual_000_004156bc,'\x01',param_3);
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
  uVar2 = FUN_00402ea4(param_4,(int)&PTR_TMemoryStream_virtual_000_0040df58);
  *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  *in_FS_OFFSET = uStackY_24;
  EnterCriticalSection(&_RTL_CRITICAL_SECTION_00447664);
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  FUN_0041a6f0(*(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0041a6ec(iVar1);
  *in_FS_OFFSET = uStackY_24;
  uStackY_24 = 0x41bb66;
  LeaveCriticalSection(&_RTL_CRITICAL_SECTION_00447664);
  return;
}


/* ==== 0041bb80 TBitmap.virtual_030 ==== */

void TBitmap_virtual_030(int param_1,int *param_2,int param_3)

{
  int iStack_10;
  
  iStack_10 = param_3;
  (**(code **)(*param_2 + 4))(param_2,&iStack_10,4);
  FUN_0041c0b8(param_1,param_2,iStack_10);
  return;
}


/* ==== 0041bba8 FUN_0041bba8 ==== */

void FUN_0041bba8(undefined4 param_1,int *param_2,int param_3)

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
  puStack_b0 = (undefined1 *)0x41bbdb;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_2 + 4))(param_2,&local_24,4);
  local_25 = local_24 == 0xc;
  if ((bool)local_25) {
    local_24 = 0x28;
  }
  puStack_b0 = (undefined1 *)0x41bc00;
  bitmapinfo = (BITMAPINFO *)FUN_004026b8(local_24 + 0x40c);
  puStack_b4 = &LAB_0041c06f;
  uStack_b8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b8;
  puStack_c0 = &LAB_0041c042;
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
      local_3c = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_virtual_000_0040df58,'\x01',
                                     extraout_ECX);
      (**(code **)(*local_3c + 8))(local_3c,&local_24,4);
      (**(code **)(*local_3c + 8))(local_3c,&(local_1c->bmiHeader).biWidth,local_24 - 4);
      FUN_00410b98(local_3c,local_c,iVar7);
      (**(code **)(*local_3c + 0xc))(local_3c,iVar7,CONCAT22(extraout_var,2));
      local_c = local_3c;
    }
  }
  else {
    puStack_bc = &stack0xfffffffc;
    puStack_b0 = &stack0xfffffffc;
    (**(code **)(*local_c + 4))(local_c,&local_48,8);
    pBVar3 = bitmapinfo;
    FUN_00402a2c((undefined4 *)bitmapinfo,0x28,0);
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
    FUN_00417708();
  }
  if ((local_24 == 0x28) &&
     (((WVar1 = (pBVar3->bmiHeader).biBitCount, WVar1 == 0x10 || (WVar1 == 0x20)) &&
      ((pBVar3->bmiHeader).biCompression == 3)))) {
    FUN_00410b28(local_c,local_20,0xc);
    local_20 = local_20 + 3;
    iVar7 = iVar7 + -0xc;
  }
  if ((pBVar3->bmiHeader).biClrUsed == 0) {
    DVar4 = FUN_00417998((pBVar3->bmiHeader).biBitCount);
    (pBVar3->bmiHeader).biClrUsed = DVar4;
  }
  uVar8 = (uint)local_25;
  FUN_00410b28(local_c,local_20,(pBVar3->bmiHeader).biClrUsed * (uint)(byte)(&DAT_004465c0)[uVar8]);
  uVar8 = iVar7 - (pBVar3->bmiHeader).biClrUsed * (uint)(byte)(&DAT_004465c0)[uVar8];
  if ((pBVar3->bmiHeader).biSizeImage == 0) {
    iVar7 = FUN_004179b8((pBVar3->bmiHeader).biWidth,(uint)(pBVar3->bmiHeader).biBitCount,0x20);
    uVar2 = (pBVar3->bmiHeader).biHeight;
    uVar6 = (int)uVar2 >> 0x1f;
    (pBVar3->bmiHeader).biSizeImage = iVar7 * ((uVar2 ^ uVar6) - uVar6);
  }
  uVar2 = (pBVar3->bmiHeader).biSizeImage;
  if (uVar2 < uVar8) {
    uVar8 = uVar2;
  }
  if (local_25 != 0) {
    FUN_00417c60((int)local_20);
  }
  pHVar5 = GetDC((HWND)0x0);
  local_10 = (HDC)FUN_00417828((int)pHVar5);
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff30;
  DVar4 = (bitmapinfo->bmiHeader).biCompression;
  if (((DVar4 == 0) || (DVar4 == 3)) && (DAT_00446380 == '\0')) {
    local_2c = CreateDIBSection(local_10,local_1c,0,&pj_bits,(HANDLE)0x0,0);
    if ((local_2c == (HBITMAP)0x0) || (pj_bits == (void *)0x0)) {
      DVar4 = GetLastError();
      if (DVar4 == 0) {
        FUN_00417708();
      }
      else {
        FUN_0040b9e4();
      }
    }
    uVar10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff24;
    FUN_00410b28(local_c,pj_bits,uVar8);
    *in_FS_OFFSET = uVar10;
    *in_FS_OFFSET = uVar9;
    ReleaseDC((HWND)0x0,local_10);
    return;
  }
  hdc_val = (HDC)0x0;
  pj_bits = (void *)FUN_004026b8(uVar8);
  *in_FS_OFFSET = &stack0xffffff24;
  FUN_00410b28(local_c,pj_bits,uVar8);
  pHVar5 = CreateCompatibleDC(local_10);
  hdc_val = (HDC)FUN_00417828((int)pHVar5);
  h = CreateCompatibleBitmap(local_10,1,1);
  h_val = SelectObject(hdc_val,h);
  pal = (HPALETTE)0x0;
  DVar4 = (bitmapinfo->bmiHeader).biClrUsed;
  if (DVar4 != 0) {
    pal_2 = FUN_00417f18((HGDIOBJ)0x0,local_20,DVar4);
    pal = SelectPalette(hdc_val,pal_2,0);
    RealizePalette(hdc_val);
  }
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff18;
  local_2c = CreateDIBitmap(hdc_val,&local_1c->bmiHeader,4,pj_bits,local_1c,0);
  if (local_2c == (HBITMAP)0x0) {
    DVar4 = GetLastError();
    if (DVar4 == 0) {
      FUN_00417708();
    }
    else {
      FUN_0040b9e4();
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


/* ==== 0041c0b8 FUN_0041c0b8 ==== */

void FUN_0041c0b8(int param_1,int *param_2,int param_3)

{
  short local_70 [7];
  undefined4 local_62 [21];
  
  FUN_0041b8a0(param_1);
  if (param_3 == 0) {
    FUN_00402a2c(local_62,0x54,0);
    FUN_0041ba80(param_1,0,0,(int *)0x0,0,local_62);
  }
  else {
    FUN_00410b28(param_2,local_70,0xe);
    if (local_70[0] != 0x4d42) {
      FUN_00417708();
    }
    FUN_0041bba8(param_1,param_2,param_3 + -0xe);
  }
  return;
}


/* ==== 0041c128 FUN_0041c128 ==== */

void FUN_0041c128(int *param_1,HANDLE h_val)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 local_5c [21];
  HPALETTE local_8;
  
  iVar1 = param_1[8];
  if (h_val != *(HANDLE *)(iVar1 + 8)) {
    FUN_0041b8a0((int)param_1);
    FUN_00402a2c(local_5c,0x54,0);
    if (h_val != (HANDLE)0x0) {
      GetObjectA(h_val,0x54,local_5c);
    }
    if (*(int *)(iVar1 + 4) == 1) {
      local_8 = *(HPALETTE *)(iVar1 + 0x10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else if (*(HPALETTE *)(iVar1 + 0x10) == DAT_00447648) {
      local_8 = DAT_00447648;
    }
    else {
      local_8 = FUN_0041af1c(*(HPALETTE *)(iVar1 + 0x10));
    }
    *in_FS_OFFSET = &stack0xffffff8c;
    uVar2 = 0;
    FUN_0041ba80((int)param_1,h_val,local_8,(int *)0x0,0,local_5c);
    *in_FS_OFFSET = uVar2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041c1ec TBitmap.virtual_068 ==== */

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
  uVar3 = FUN_0041b75c((int)param_1);
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
        FUN_0041b8a0((int)param_1);
        FUN_0041b920((int)param_1);
        FUN_0041b82c((int)param_1);
        if (*(int *)(iVar1 + 4) == 1) {
          uVar3 = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(iVar1 + 0x14) = 0;
          uVar2 = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)(iVar1 + 0x10) = 0;
          FUN_0041ba80((int)param_1,uVar3,uVar2,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
                       (undefined4 *)(iVar1 + 0x18));
        }
        else {
          FUN_0041b320((int)param_1,*(HBITMAP *)(iVar1 + 0x14),*(HPALETTE *)(iVar1 + 0x10),
                       (undefined4 *)(iVar1 + 0x18));
        }
      }
      else {
        if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
          return;
        }
        FUN_0041b8a0((int)param_1);
        FUN_0041b920((int)param_1);
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
          pHVar4 = FUN_0041af1c(*(HPALETTE *)(iVar1 + 0x10));
        }
        else {
          pHVar4 = *(HPALETTE *)(iVar1 + 0x10);
        }
        pHVar5 = FUN_0041a8c0(*(HBITMAP *)(iVar1 + 0x14),*(HPALETTE *)(iVar1 + 0x10),pHVar4,0,
                              (int)local_64);
        if (bVar8) {
          FUN_0041ba80((int)param_1,pHVar5,pHVar4,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
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


/* ==== 0041c324 TBitmap.virtual_034 ==== */

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
    FUN_0041b8b0((int)param_1);
    puVar2 = (undefined4 *)(iVar1 + 0x18);
    puVar3 = local_60;
    for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_58 = param_2;
    local_40 = param_2;
    FUN_0041b320((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041c378 FUN_0041c378 ==== */

void FUN_0041c378(int *param_1,byte param_2)

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
    FUN_0041b8b0((int)param_1);
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
    FUN_0041b320((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041c3f8 TBitmap.virtual_038 ==== */

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
      FUN_004158e4(*(HGDIOBJ *)(iVar1 + 0x10));
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else {
      FUN_0041b8a0((int)param_1);
      FUN_0041b8b0((int)param_1);
      puVar2 = (undefined4 *)(iVar1 + 0x18);
      puVar3 = local_5c;
      for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      puStack_74 = (undefined1 *)0x41c45e;
      local_8 = FUN_0041a8c0(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),param_2,0,
                             (int)local_5c);
      puStack_78 = &LAB_0041c48f;
      uStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_7c;
      uVar5 = 0;
      puStack_74 = &stack0xfffffffc;
      FUN_0041ba80((int)param_1,local_8,param_2,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),local_5c);
      *in_FS_OFFSET = uVar5;
    }
    FUN_0041a7b8(*(HGDIOBJ *)(param_1[8] + 0x14),param_2,param_1[8] + 0x18);
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041c4cc TBitmap.virtual_040 ==== */

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
    FUN_0041b8b0((int)param_1);
    puVar2 = (undefined4 *)(iVar1 + 0x18);
    puVar3 = &local_60;
    for (i_val = 0x15; i_val != 0; i_val = i_val + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_5c = param_2;
    local_44 = param_2;
    FUN_0041b320((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),&local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0041c520 TBitmap.virtual_044 ==== */

void TBitmap_virtual_044(int *param_1,int *param_2)

{
  FUN_0041c528(param_1,param_2,'\x01');
  return;
}


/* ==== 0041c528 FUN_0041c528 ==== */

void FUN_0041c528(int *param_1,int *param_2,char param_3)

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
    FUN_0041b82c((int)param_1);
    iVar1 = param_1[8];
    local_43c = 0;
    if (*(HANDLE *)(iVar1 + 0x14) != (HANDLE)0x0) {
      FUN_0041866c(*(HANDLE *)(iVar1 + 0x14),&local_434,&local_43c,*(uint *)(iVar1 + 0x50));
      if (*(char *)(iVar1 + 0x70) != '\0') {
        local_434 = 0xc;
        if (*(ushort *)(iVar1 + 0x3e) < 9) {
          local_434 = (1 << ((byte)*(ushort *)(iVar1 + 0x3e) & 0x1f)) * 3 + 0xc;
        }
      }
      local_43c = local_43c + local_434 + 0xe;
      FUN_00402a2c((undefined4 *)local_42c,0xe,0);
      local_42c._0_2_ = 0x4d42;
      piVar3 = (int *)FUN_0041b6f8(param_1);
      FUN_00417504(piVar3,1);
      select_object = SelectObject(*(HDC *)(param_1[9] + 4),*(HGDIOBJ *)(iVar1 + 0x14));
      h_val = (HGDIOBJ)FUN_00417828((int)select_object);
      local_438 = GetDIBColorTable(*(HDC *)(param_1[9] + 4),0,0x100,(RGBQUAD *)local_412);
      SelectObject(*(HDC *)(param_1[9] + 4),h_val);
      uVar2 = *(uint *)(iVar1 + 0x50);
      if ((uVar2 != 0) && (uVar2 < local_438)) {
        local_438 = uVar2;
      }
      if ((((*(char *)(iVar1 + 0x70) == '\0') && (local_438 == 0)) && (*(int *)(iVar1 + 0x10) != 0))
         && (*(char *)(iVar1 + 0x71) == '\0')) {
        local_438 = FUN_00417fbc(*(HPALETTE *)(iVar1 + 0x10),local_412,0xff);
        if (8 < *(ushort *)(iVar1 + 0x3e)) {
          local_43c = local_43c + local_438 * 4;
          local_434 = local_434 + local_438 * 4;
        }
      }
      local_42c._2_4_ = local_43c;
      local_422 = local_434 + 0xe;
    }
    if (param_3 != '\0') {
      FUN_00410b60(param_2,&local_43c,4);
    }
    if (local_43c != 0) {
      FUN_0041a874(iVar1 + 0x18);
      if (local_438 != 0) {
        if ((*(uint *)(iVar1 + 0x50) == 0) || (*(uint *)(iVar1 + 0x50) != local_438)) {
          *(uint *)(iVar1 + 0x50) = local_438;
        }
        if (*(char *)(iVar1 + 0x70) != '\0') {
          FUN_00417c98((int)local_412,(int *)&local_438);
        }
      }
      if (*(char *)(iVar1 + 0x70) == '\0') {
        FUN_00410b60(param_2,local_42c,0xe);
        FUN_00410b60(param_2,iVar1 + 0x30,0x28);
        if ((8 < *(ushort *)(iVar1 + 0x3e)) && ((*(byte *)(iVar1 + 0x40) & 3) != 0)) {
          FUN_00410b60(param_2,iVar1 + 0x58,0xc);
        }
      }
      else {
        local_41e = 0xc;
        local_41a = *(undefined2 *)(iVar1 + 0x34);
        local_418 = *(undefined2 *)(iVar1 + 0x38);
        local_416 = 1;
        local_414 = *(undefined2 *)(iVar1 + 0x3e);
        FUN_00410b60(param_2,local_42c,0xe);
        FUN_00410b60(param_2,&local_41e,0xc);
      }
      FUN_00410b60(param_2,local_412,(byte)(&DAT_004465c4)[*(byte *)(iVar1 + 0x70)] * local_438);
      FUN_00410b60(param_2,*(undefined4 *)(iVar1 + 0x2c),*(int *)(iVar1 + 0x44));
    }
  }
  else {
    local_43c = FUN_00410af0(*(int **)(param_1[8] + 0x6c));
    if (param_3 != '\0') {
      FUN_00410b60(param_2,&local_43c,4);
    }
    (**(code **)(*param_2 + 8))(param_2,*(undefined4 *)(*(int *)(param_1[8] + 0x6c) + 4),local_43c);
  }
  return;
}


/* ==== 0041c7c4 TBitmap.virtual_054 ==== */

void TBitmap_virtual_054(int *param_1,int *param_2)

{
  FUN_0041c528(param_1,param_2,'\0');
  return;
}


/* ==== 0041c7cc TBitmap.virtual_05c ==== */

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
  FUN_0041b8b0(param_1);
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
  puStackY_74 = (undefined1 *)0x41c819;
  pHVar2 = FUN_0041a8c0(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),
                        *(HPALETTE *)(iVar1 + 0x10),*(int *)(param_1 + 0x24),(int)local_5c);
  *local_8 = pHVar2;
  puStackY_78 = &LAB_0041c846;
  uStackY_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_7c;
  puStackY_74 = &stack0xfffffffc;
  pHVar2 = FUN_0041af1c(*(HPALETTE *)(*(int *)(param_1 + 0x20) + 0x10));
  *param_4 = pHVar2;
  *in_FS_OFFSET = uStackY_7c;
  return;
}


/* ==== 0041c86c TIconImage.Destroy ==== */

void TIconImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[3]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041c89c TIconImage.virtual_000 ==== */

void TIconImage_virtual_000(int param_1)

{
  if (*(HICON *)(param_1 + 8) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* ==== 0041c8b4 TIcon.virtual_00c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TGraphic_virtual_00c(param_1,'\0',param_3);
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  iVar1 = FUN_00402ce4((int *)&PTR_TIconImage_virtual_000_00415800,'\x01',extraout_ECX_00);
  param_1[8] = iVar1;
  FUN_0041a6ec(iVar1);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0041c908 TIcon.Destroy ==== */

void TIcon_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0041a6f0((int *)piVar1[8]);
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041c938 TIcon.virtual_008 ==== */

void TIcon_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (int *)0x0) &&
     (uVar1 = FUN_00402e8c(param_2,(int)&LAB_0041585c), (char)uVar1 == '\0')) {
    TPersistent_virtual_008(param_1,param_2);
    return;
  }
  if (param_2 == (int *)0x0) {
    FUN_0041cc10((int)param_1,0,0);
  }
  else {
    FUN_0041a6ec(param_2[8]);
    FUN_0041a6f0((int *)param_1[8]);
    param_1[8] = param_2[8];
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041c998 TIcon.virtual_014 ==== */

void TIcon_virtual_014(int param_1,int *param_2,int *param_3)

{
  HICON hIcon;
  int cxWidth;
  int cyWidth;
  UINT istepIfAniCur;
  HBRUSH hbrFlickerFreeDraw;
  UINT diFlags;
  
  FUN_00417504(param_2,1);
  diFlags = 3;
  hbrFlickerFreeDraw = (HBRUSH)0x0;
  istepIfAniCur = 0;
  cyWidth = 0;
  cxWidth = 0;
  hIcon = (HICON)FUN_0041c9f0(param_1);
  DrawIconEx((HDC)param_2[1],*param_3,param_3[1],hIcon,cxWidth,cyWidth,istepIfAniCur,
             hbrFlickerFreeDraw,diFlags);
  return;
}


/* ==== 0041c9d8 TIcon.virtual_01c ==== */

undefined4 TIcon_virtual_01c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0xc) == 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0041c9f0 FUN_0041c9f0 ==== */

undefined4 FUN_0041c9f0(int param_1)

{
  FUN_0041ca2c(param_1);
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
}


/* ==== 0041ca04 TIcon.virtual_020 ==== */

void TIcon_virtual_020(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x14) == 0) {
    GetSystemMetrics(0xc);
  }
  return;
}


/* ==== 0041ca18 TIcon.virtual_02c ==== */

void TIcon_virtual_02c(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x10) == 0) {
    GetSystemMetrics(0xb);
  }
  return;
}


/* ==== 0041ca2c FUN_0041ca2c ==== */

void FUN_0041ca2c(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [2];
  short local_12;
  ushort local_10;
  undefined1 local_c [4];
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int **)(iVar1 + 0xc) != (int *)0x0)) {
    FUN_00410ae4(*(int **)(iVar1 + 0xc),0);
    uStack_18 = 0x41ca59;
    FUN_00410b28(*(int **)(iVar1 + 0xc),auStack_14,6);
    if (local_12 != 0) {
      if (local_12 == 1) {
        uStack_18 = 6;
        FUN_00418268(*(int **)(iVar1 + 0xc),local_c,(uint)local_10,(int *)(iVar1 + 0x10),
                     (int *)(param_1 + 0x24));
      }
      else {
        uStack_18 = 0x41ca95;
        FUN_00417714();
      }
    }
    *(undefined4 *)(iVar1 + 8) = uStack_18;
  }
  return;
}


/* ==== 0041caa4 FUN_0041caa4 ==== */

void FUN_0041caa4(int param_1,undefined4 param_2,undefined4 param_3)

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
      puStack_20 = (undefined1 *)0x41cac7;
      FUN_00417714();
      param_3 = extraout_ECX;
    }
    puStack_20 = (undefined1 *)0x41cad3;
    local_8 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_virtual_000_0040df58,'\x01',param_3);
    puStack_24 = &LAB_0041cb31;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_0041c9f0(param_1);
    if (iVar2 == DAT_00447660) {
      FUN_00402a2c(&local_e,6,0);
      FUN_00410b60(local_8,&local_e,6);
    }
    else {
      icon = (HICON)FUN_0041c9f0(param_1);
      FUN_004187ac(local_8,icon,'\0');
    }
    *in_FS_OFFSET = uStack_28;
    *(int **)(iVar1 + 0xc) = local_8;
  }
  return;
}


/* ==== 0041cb58 TIcon.virtual_050 ==== */

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
  
  puStack_20 = (undefined1 *)0x41cb71;
  local_8 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_virtual_000_0040df58,'\x01',param_3);
  puStack_24 = &LAB_0041cbe7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar1 = FUN_00410af0(param_2);
  iVar2 = FUN_00410ad4(param_2);
  (**(code **)*local_8)(local_8,iVar1 - iVar2);
  iVar1 = FUN_00410af0(local_8);
  FUN_00410b28(param_2,local_8[1],iVar1);
  FUN_00410b28(local_8,local_e,6);
  if (1 < local_c) {
    FUN_00417714();
  }
  FUN_0041cc10((int)param_1,0,local_8);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x41cc07;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041cc10 FUN_0041cc10 ==== */

void FUN_0041cc10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x41cc29;
  iVar1 = FUN_00402ce4((int *)&PTR_TIconImage_virtual_000_00415800,'\x01',param_3);
  puStack_1c = &LAB_0041cc50;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *in_FS_OFFSET = uStack_20;
  uStack_18 = 0x41cc6f;
  FUN_0041a6ec(iVar1);
  uStack_18 = 0x41cc77;
  FUN_0041a6f0(*(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}


/* ==== 0041cc84 FUN_0041cc84 ==== */

void FUN_0041cc84(int *param_1,undefined4 param_2)

{
  FUN_0041cc10((int)param_1,param_2,0);
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0041cc9c TIcon.virtual_034 ==== */

void TIcon_virtual_034(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return;
  }
  FUN_004176d8((undefined4 *)PTR_PTR_00446b28);
  return;
}


/* ==== 0041ccb4 TIcon.virtual_03c ==== */

void TIcon_virtual_03c(void)

{
  return;
}


/* ==== 0041ccb8 TIcon.virtual_040 ==== */

void TIcon_virtual_040(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    return;
  }
  FUN_004176d8((undefined4 *)PTR_PTR_00446b28);
  return;
}


/* ==== 0041ccd0 TIcon.virtual_054 ==== */

void TIcon_virtual_054(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_0041caa4(param_1,param_2,param_3);
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0xc);
  iVar2 = FUN_00410af0(piVar1);
  FUN_00410b60(param_2,piVar1[1],iVar2);
  return;
}


/* ==== 0041ccfc TIcon.virtual_058 ==== */

void TIcon_virtual_058(void)

{
  FUN_004176d8((undefined4 *)PTR_PTR_00446a78);
  return;
}


/* ==== 0041cd10 TIcon.virtual_05c ==== */

void TIcon_virtual_05c(void)

{
  FUN_004176d8((undefined4 *)PTR_PTR_00446a78);
  return;
}


/* ==== 0041cd24 FUN_0041cd24 ==== */

void FUN_0041cd24(void)

{
  HDC hdc;
  
  hdc = GetDC((HWND)0x0);
  DAT_00447650 = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  DAT_00447648 = FUN_00417d68((undefined4 *)&DAT_004465c8);
  return;
}


/* ==== 0041cd5c FUN_0041cd5c ==== */

BYTE FUN_0041cd5c(void)

{
  HDC hdc;
  HGDIOBJ select_object;
  BOOL BVar1;
  BYTE BVar2;
  tagTEXTMETRICA textmetric;
  
  BVar2 = '\x01';
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    select_object = SelectObject(hdc,DAT_0044765c);
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


/* ==== 0041cda0 FUN_0041cda0 ==== */

void FUN_0041cda0(void)

{
  BYTE BVar1;
  int i_val;
  undefined4 *puVar2;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  i_val = MulDiv(8,DAT_00447650,0x48);
  DAT_00446358 = -i_val;
  if (PTR_DAT_00446da0[8] != '\0') {
    BVar1 = FUN_0041cd5c();
    if (BVar1 == 0x80) {
      puVar2 = &DAT_0041ce04;
      pcVar3 = s_MS_Sans_Serif_0044635f;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *(undefined4 *)pcVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
      }
      i_val = MulDiv(9,DAT_00447650,0x48);
      DAT_00446358 = -i_val;
      DAT_0044635e = 0x80;
    }
  }
  return;
}


/* ==== 0041ce70 FUN_0041ce70 ==== */

int * FUN_0041ce70(int *param_1,char param_2,undefined4 param_3)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    cVar1 = extraout_DL;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041cea8 TPatternManager.Destroy ==== */

void TPatternManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0041d0a0((int)piVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041ced4 FUN_0041ced4 ==== */

void FUN_0041ced4(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 0041cee0 FUN_0041cee0 ==== */

void FUN_0041cee0(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}


/* ==== 0041ceec FUN_0041ceec ==== */

void FUN_0041ceec(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  
  puStack_1c = (undefined1 *)0x41cf04;
  FUN_0041ced4(param_1);
  puStack_20 = &LAB_0041cf8d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  for (local_c = *(undefined4 **)(param_1 + 4);
      (local_c != (undefined4 *)0x0 && ((param_2 != local_c[2] || (param_3 != local_c[3]))));
      local_c = (undefined4 *)*local_c) {
  }
  if (local_c == (undefined4 *)0x0) {
    puStack_1c = &stack0xfffffffc;
    puVar1 = (undefined4 *)FUN_004026b8(0x10);
    *puVar1 = *(undefined4 *)(param_1 + 4);
    piVar2 = FUN_0041cfa0(param_1,param_2,param_3);
    puVar1[1] = piVar2;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041cf94;
  puStack_20 = (undefined1 *)0x41cf8c;
  FUN_0041cee0(param_1);
  return;
}


/* ==== 0041cfa0 FUN_0041cfa0 ==== */

int * FUN_0041cfa0(undefined4 param_1,undefined4 param_2,uint param_3)

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
  
  puStack_2c = (undefined1 *)0x41cfba;
  local_8 = param_3;
  local_c = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',param_3);
  puStack_30 = &LAB_0041d07f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_c + 0x40))(local_c,8);
  (**(code **)(*local_c + 0x34))(local_c,8);
  piVar1 = (int *)FUN_0041b6f8(local_c);
  TBrush_SetStyle((int *)piVar1[5],'\0');
  TBrush_SetColor((int *)piVar1[5],param_2);
  uVar2 = (**(code **)(*local_c + 0x20))();
  pRVar6 = &local_1c;
  uVar3 = (**(code **)(*local_c + 0x2c))();
  FUN_0040e5ac(0,0,uVar3,&pRVar6->left,uVar2);
  FUN_00417100(piVar1,&local_1c);
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
        FUN_004173e8(piVar1,x_val,y_val,local_8);
      }
      x_val = x_val + 1;
    } while (x_val != 9);
    y_val = y_val + 1;
  } while (y_val != 9);
  FUN_0041b410((int)local_c);
  *in_FS_OFFSET = uStack_34;
  return local_c;
}


/* ==== 0041d0a0 FUN_0041d0a0 ==== */

void FUN_0041d0a0(int param_1)

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
  puStack_14 = (undefined *)0x41d0bc;
  local_c = local_10;
  local_8 = param_1;
  FUN_0041ced4(param_1);
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined4 *)(local_8 + 4) = *local_10;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &DAT_0041d0f2;
  uStack_18 = 0x41d0ea;
  FUN_0041cee0(local_8);
  return;
}


/* ==== 0041d118 FUN_0041d118 ==== */

undefined4 FUN_0041d118(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_004476a4 != 0) {
    uVar1 = FUN_004160cc(param_2);
    iVar2 = FUN_004160cc(param_1);
    iVar2 = FUN_0041ceec(DAT_004476a4,iVar2,uVar1);
    return *(undefined4 *)(iVar2 + 4);
  }
  return 0;
}


/* ==== 0041d3e8 FUN_0041d3e8 ==== */

void FUN_0041d3e8(int *param_1)

{
  (**(code **)(*param_1 + 4))();
  return;
}


/* ==== 0041d3f0 FUN_0041d3f0 ==== */

void FUN_0041d3f0(undefined4 *param_1)

{
  (**(code **)*param_1)();
  return;
}


/* ==== 0041d3f8 FUN_0041d3f8 ==== */

int * FUN_0041d3f8(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402ce4(param_1,'\0',param_3);
  iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[1] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0041d43c TOrderedList.Destroy ==== */

void TOrderedList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[1]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 0041d46c TOrderedList.virtual_008 ==== */

void TOrderedList_virtual_008(int param_1)

{
  FUN_0040f024(*(undefined4 **)(param_1 + 4),(*(undefined4 **)(param_1 + 4))[2] + -1);
  return;
}


/* ==== 0041d480 TOrderedList.virtual_004 ==== */

undefined4 TOrderedList_virtual_004(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_0040ef14((int *)param_1[1],((int *)param_1[1])[2] + -1);
  return uVar1;
}


/* ==== 0041d4a0 TStack.virtual_000 ==== */

void TStack_virtual_000(int param_1,int param_2)

{
  FUN_0040eec8(*(int **)(param_1 + 4),param_2);
  return;
}


/* ==== 0041d4e4 ImageList_Create ==== */

HIMAGELIST __stdcall ImageList_Create(int cx,int cy,UINT flags,int cInitial,int cGrow)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
  return p_Var1;
}


/* ==== 0041d4ec ImageList_Destroy ==== */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Destroy(himl);
  return BVar1;
}


/* ==== 0041d4f4 ImageList_GetImageCount ==== */

int __stdcall ImageList_GetImageCount(HIMAGELIST himl)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_GetImageCount(himl);
  return iVar1;
}


/* ==== 0041d4fc ImageList_Add ==== */

int __stdcall ImageList_Add(HIMAGELIST himl,HBITMAP hbmImage,HBITMAP hbmMask)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_Add(himl,hbmImage,hbmMask);
  return iVar1;
}


/* ==== 0041d504 ImageList_ReplaceIcon ==== */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl,int i,HICON hicon)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_ReplaceIcon(himl,i,hicon);
  return iVar1;
}


/* ==== 0041d50c ImageList_SetBkColor ==== */

COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl,COLORREF clrBk)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_SetBkColor(himl,clrBk);
  return CVar1;
}


/* ==== 0041d514 ImageList_GetBkColor ==== */

COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_GetBkColor(himl);
  return CVar1;
}


/* ==== 0041d51c FUN_0041d51c ==== */

void FUN_0041d51c(HIMAGELIST himl_val,HICON hicon_val)

{
  ImageList_ReplaceIcon(himl_val,-1,hicon_val);
  return;
}


/* ==== 0041d528 ImageList_Draw ==== */

BOOL __stdcall ImageList_Draw(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,UINT fStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Draw(himl,i,hdcDst,x,y,fStyle);
  return BVar1;
}


/* ==== 0041d530 ImageList_DrawEx ==== */

BOOL __stdcall
ImageList_DrawEx(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,int dx,int dy,COLORREF rgbBk,
                COLORREF rgbFg,UINT fStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DrawEx(himl,i,hdcDst,x,y,dx,dy,rgbBk,rgbFg,fStyle);
  return BVar1;
}


/* ==== 0041d538 ImageList_Remove ==== */

BOOL __stdcall ImageList_Remove(HIMAGELIST himl,int i)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Remove(himl,i);
  return BVar1;
}


/* ==== 0041d540 ImageList_BeginDrag ==== */

BOOL __stdcall ImageList_BeginDrag(HIMAGELIST himlTrack,int iTrack,int dxHotspot,int dyHotspot)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_BeginDrag(himlTrack,iTrack,dxHotspot,dyHotspot);
  return BVar1;
}


/* ==== 0041d548 ImageList_EndDrag ==== */

void __stdcall ImageList_EndDrag(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041d548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ImageList_EndDrag();
  return;
}


/* ==== 0041d550 ImageList_DragEnter ==== */

BOOL __stdcall ImageList_DragEnter(HWND hwndLock,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragEnter(hwndLock,x,y);
  return BVar1;
}


/* ==== 0041d558 ImageList_DragLeave ==== */

BOOL __stdcall ImageList_DragLeave(HWND hwndLock)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragLeave(hwndLock);
  return BVar1;
}


/* ==== 0041d560 ImageList_DragMove ==== */

BOOL __stdcall ImageList_DragMove(int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragMove(x,y);
  return BVar1;
}


/* ==== 0041d568 ImageList_SetDragCursorImage ==== */

BOOL __stdcall
ImageList_SetDragCursorImage(HIMAGELIST himlDrag,int iDrag,int dxHotspot,int dyHotspot)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetDragCursorImage(himlDrag,iDrag,dxHotspot,dyHotspot);
  return BVar1;
}


/* ==== 0041d570 ImageList_DragShowNolock ==== */

BOOL __stdcall ImageList_DragShowNolock(BOOL fShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragShowNolock(fShow);
  return BVar1;
}


/* ==== 0041d578 ImageList_GetDragImage ==== */

HIMAGELIST __stdcall ImageList_GetDragImage(POINT *ppt,POINT *pptHotspot)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_GetDragImage(ppt,pptHotspot);
  return p_Var1;
}


/* ==== 0041d580 ImageList_Read ==== */

HIMAGELIST __stdcall ImageList_Read(IStream *pstm)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Read(pstm);
  return p_Var1;
}


/* ==== 0041d588 ImageList_Write ==== */

BOOL __stdcall ImageList_Write(HIMAGELIST himl,IStream *pstm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Write(himl,pstm);
  return BVar1;
}


/* ==== 0041d590 ImageList_GetIconSize ==== */

BOOL __stdcall ImageList_GetIconSize(HIMAGELIST himl,int *cx,int *cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_GetIconSize(himl,cx,cy);
  return BVar1;
}


/* ==== 0041d598 ImageList_SetIconSize ==== */

BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl,int cx,int cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetIconSize(himl,cx,cy);
  return BVar1;
}


/* ==== 0041d5d8 FUN_0041d5d8 ==== */

void FUN_0041d5d8(byte param_1,undefined4 param_2,undefined *param_3)

{
  LPCSTR lpProcName;
  FARPROC pFVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_8;
  
  puStack_18 = (undefined1 *)0x41d5ee;
  local_8 = param_3;
  FUN_00403dec((int)param_3);
  puStack_1c = &LAB_0041d697;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((&DAT_004476d8)[param_1] == '\0') {
    if (DAT_004476d4 == (HMODULE)0x0) {
      pFVar1 = (FARPROC)0x0;
    }
    else {
      puStack_18 = &stack0xfffffffc;
      if (((param_1 == 0) && (puStack_18 = &stack0xfffffffc, DAT_004476e0 == '\0')) &&
         (puStack_18 = &stack0xfffffffc,
         DAT_004476c8 = FUN_0041d5d8(4,DAT_004476c8,"GetMonitorInfoA"), DAT_004476e0 == '\0')) {
        FUN_004039b8((int *)&local_8);
      }
      lpProcName = FUN_00403dfc(local_8);
      pFVar1 = GetProcAddress(DAT_004476d4,lpProcName);
    }
    if ((pFVar1 != (FARPROC)0x0) && (param_1 != 0)) {
      DAT_004476e0 = '\x01';
    }
    (&DAT_004476d8)[param_1] = 1;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041d69e;
  puStack_1c = (undefined1 *)0x41d696;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 0041d748 FUN_0041d748 ==== */

undefined4 FUN_0041d748(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  if (DAT_004476da == '\0') {
    DAT_004476b8 = (code *)FUN_0041d5d8(2,DAT_004476b8,"MonitorFromRect");
    uVar1 = (*DAT_004476b8)();
    return uVar1;
  }
  if ((in_stack_00000008 & 3) == 0) {
    if (in_stack_00000004[2] < 1) {
      return 0;
    }
    if (in_stack_00000004[3] < 1) {
      return 0;
    }
    iVar2 = (*DAT_004476b0)();
    if (iVar2 <= *in_stack_00000004) {
      return 0;
    }
    iVar2 = (*DAT_004476b0)();
    if (iVar2 <= in_stack_00000004[1]) {
      return 0;
    }
  }
  return 0x12340042;
}


/* ==== 0041dcc0 FUN_0041dcc0 ==== */

void FUN_0041dcc0(void)

{
  DAT_004476d4 = GetModuleHandleA("USER32.DLL");
  DAT_004476b0 = &LAB_0041d6c0;
  DAT_004476b4 = &LAB_0041d7d8;
  DAT_004476b8 = FUN_0041d748;
  DAT_004476bc = &LAB_0041d870;
  DAT_004476c0 = &LAB_0041d908;
  DAT_004476c4 = &LAB_0041d9e0;
  DAT_004476c8 = &LAB_0041dab8;
  DAT_004476cc = &LAB_0041db90;
  return;
}


/* ==== 0041dd6c FUN_0041dd6c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dd6c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004476e4 = _DAT_004476e4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0041dda4 FUN_0041dda4 ==== */

int FUN_0041dda4(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 0041ddac FUN_0041ddac ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ddac(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004476e8 = _DAT_004476e8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0041dde4 FUN_0041dde4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dde4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004476ec = _DAT_004476ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0041de60 FUN_0041de60 ==== */

int FUN_0041de60(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_0044771c != (code *)0x0) {
    iVar2 = (*DAT_0044771c)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_0041de8c;
    }
  }
  bVar1 = 0;
LAB_0041de8c:
  return -(uint)bVar1;
}


/* ==== 0041de94 FUN_0041de94 ==== */

int FUN_0041de94(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_00447720 != (code *)0x0) {
    iVar2 = (*DAT_00447720)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_0041deb4;
    }
  }
  bVar1 = 0;
LAB_0041deb4:
  return -(uint)bVar1;
}


/* ==== 0041debc FUN_0041debc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041debc(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("comctl32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_00447720 = GetProcAddress(hModule,"InitializeFlatSB");
    _DAT_00447724 = GetProcAddress(hModule,"UninitializeFlatSB");
    _DAT_00447718 = GetProcAddress(hModule,"FlatSB_GetScrollProp");
    DAT_0044771c = GetProcAddress(hModule,"FlatSB_SetScrollProp");
    _DAT_004476f4 = GetProcAddress(hModule,"FlatSB_EnableScrollBar");
    if (_DAT_004476f4 == (FARPROC)0x0) {
      _DAT_004476f4 = (FARPROC)&DAT_004065a0;
    }
    _DAT_004476f8 = GetProcAddress(hModule,"FlatSB_ShowScrollBar");
    if (_DAT_004476f8 == (FARPROC)0x0) {
      _DAT_004476f8 = (FARPROC)&DAT_00406910;
    }
    _DAT_004476fc = GetProcAddress(hModule,"FlatSB_GetScrollRange");
    if (_DAT_004476fc == (FARPROC)0x0) {
      _DAT_004476fc = (FARPROC)&DAT_004066d8;
    }
    DAT_00447700 = GetProcAddress(hModule,"FlatSB_GetScrollInfo");
    if (DAT_00447700 == (FARPROC)0x0) {
      DAT_00447700 = (FARPROC)&DAT_004066c8;
    }
    DAT_00447704 = GetProcAddress(hModule,"FlatSB_GetScrollPos");
    if (DAT_00447704 == (FARPROC)0x0) {
      DAT_00447704 = (FARPROC)&DAT_004066d0;
    }
    DAT_00447708 = GetProcAddress(hModule,"FlatSB_SetScrollPos");
    if (DAT_00447708 == (FARPROC)0x0) {
      DAT_00447708 = (FARPROC)&DAT_004068c8;
    }
    DAT_0044770c = GetProcAddress(hModule,"FlatSB_SetScrollInfo");
    if (DAT_0044770c == (FARPROC)0x0) {
      DAT_0044770c = (FARPROC)&DAT_004068c0;
    }
    _DAT_00447710 = GetProcAddress(hModule,"FlatSB_SetScrollRange");
    if (_DAT_00447710 == (FARPROC)0x0) {
      _DAT_00447710 = (FARPROC)&DAT_004068d0;
    }
  }
  return;
}


