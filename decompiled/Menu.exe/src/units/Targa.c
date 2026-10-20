/* Menu.exe — units/Targa.pas: 14 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00458330 TCustomIniFile.virtual_034 ==== */

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
  puStack_1c = &LAB_0045837f;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_0040a464(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_00458386;
  iStack_20 = 0x45837e;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 004583a8 TCustomIniFile.virtual_014 ==== */

void TCustomIniFile_virtual_014(int *param_1)

{
  (**(code **)(*param_1 + 4))();
  return;
}


/* ==== 004583c4 FUN_004583c4 ==== */

void FUN_004583c4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x4583df;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',param_3);
  puStack_20 = &LAB_00458422;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,piVar1);
  (**(code **)(*piVar1 + 0x50))(piVar1,param_3);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00458429;
  puStack_20 = (undefined1 *)0x458421;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 00458434 TIniFile.virtual_000 ==== */

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
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  DVar1 = 0x800;
  lpReturnedString = local_804;
  lpDefault = FUN_004040a0(param_5);
  lpKeyName = FUN_004040a0(param_3);
  lpAppName = FUN_004040a0(param_2);
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,DVar1,lpFileName);
  FUN_00403d44(param_4,(undefined4 *)local_804,DVar1);
  return;
}


/* ==== 00458494 TIniFile.virtual_004 ==== */

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
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  lpString = FUN_004040a0(param_4);
  lpKeyName = FUN_004040a0(param_3);
  lpAppName = FUN_004040a0(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    local_c = *(undefined4 *)(param_1 + 4);
    local_8 = 0xb;
    uVar2 = FUN_0040b6d0((int)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab938,0,&local_c);
    FUN_004036f4(uVar2);
  }
  return;
}


/* ==== 00458500 TIniFile.virtual_03c ==== */

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
  puStack_1c = &LAB_004585f2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x458529;
  local_8 = param_2;
  returned_string = (LPSTR)FUN_0040277c(0x4000);
  puStack_28 = &LAB_004585d5;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x458542;
  puStack_24 = &stack0xfffffffc;
  FUN_00411434(local_8);
  puStack_34 = &LAB_004585b8;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  DVar1 = GetPrivateProfileStringA
                    ((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,returned_string,0x4000,lpFileName);
  pcVar3 = returned_string;
  if (DVar1 != 0) {
    for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + iVar2 + 1) {
      FUN_00403e14(&local_10,pcVar3);
      (**(code **)(*local_8 + 0x34))(local_8,local_10);
      iVar2 = FUN_00408b24(pcVar3);
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004585bf;
  puStack_34 = (undefined1 *)0x4585b7;
  FUN_004114f0(local_8);
  return;
}


/* ==== 00458600 TIniFile.virtual_038 ==== */

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
  puStack_20 = &LAB_004586fb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x45862c;
  local_8 = param_3;
  local_c = (char *)FUN_0040277c(0x4000);
  puStack_2c = &LAB_004586de;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x458645;
  puStack_28 = &stack0xfffffffc;
  FUN_00411434(local_8);
  puStack_38 = &LAB_004586c1;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  DVar2 = 0x4000;
  lpDefault = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  returned_string = local_c;
  lpAppName = FUN_004040a0(param_2);
  DVar2 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,returned_string,DVar2,lpFileName);
  returned_string = local_c;
  if (DVar2 != 0) {
    for (; *returned_string != '\0'; returned_string = returned_string + iVar1 + 1) {
      FUN_00403e14(&local_10,returned_string);
      (**(code **)(*local_8 + 0x34))(local_8,local_10);
      iVar1 = FUN_00408b24(returned_string);
    }
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004586c8;
  puStack_38 = (undefined1 *)0x4586c0;
  FUN_004114f0(local_8);
  return;
}


/* ==== 00458708 TIniFile.virtual_040 ==== */

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
  puStack_34 = &LAB_0045881c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x45873f;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',param_3);
  puStack_40 = &LAB_004587fa;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x45875e;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x38))(local_8,local_c,local_14);
  puStack_48 = (undefined1 *)0x458766;
  FUN_00411434(local_10);
  puStack_4c = &LAB_004587dd;
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
      FUN_00411f84(local_10,local_20,0);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004587e4;
  puStack_4c = (undefined1 *)0x4587dc;
  FUN_004114f0(local_10);
  return;
}


/* ==== 0045882c TIniFile.virtual_044 ==== */

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
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  lpAppName = FUN_004040a0(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    local_10 = *(undefined4 *)(param_1 + 4);
    local_c = 0xb;
    uVar2 = FUN_0040b6d0((int)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab938,0,&local_10);
    FUN_004036f4(uVar2);
  }
  return;
}


/* ==== 00458880 TIniFile.virtual_048 ==== */

void TIniFile_virtual_048(int param_1,undefined *param_2,undefined *param_3)

{
  LPCSTR lpFileName;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  LPCSTR lpString;
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = FUN_004040a0(param_3);
  lpAppName = FUN_004040a0(param_2);
  WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return;
}


/* ==== 004588b0 TIniFile.virtual_04c ==== */

void TIniFile_virtual_04c(int param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,lpFileName);
  return;
}


/* ==== 00458a04 FUN_00458a04 ==== */

int FUN_00458a04(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int i_val;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int iVar2;
  int extraout_ECX_14;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  byte *extraout_EDX_01;
  byte *extraout_EDX_02;
  byte *extraout_EDX_03;
  byte *extraout_EDX_04;
  byte *extraout_EDX_05;
  byte *extraout_EDX_06;
  byte *extraout_EDX_07;
  byte *extraout_EDX_08;
  byte *extraout_EDX_09;
  byte *extraout_EDX_10;
  byte *extraout_EDX_11;
  byte *extraout_EDX_12;
  byte *extraout_EDX_13;
  byte *extraout_EDX_14;
  byte *extraout_EDX_15;
  byte *extraout_EDX_16;
  bool bVar3;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  i_val = *(int *)(*(int *)(param_4 + -4) + 0x3c);
  if (i_val == 0x18) {
    if (0 < param_3) {
      do {
        i_val = (*param_1 & 0x7f) + 1;
        if (SCARRY4((uint)(*param_1 & 0x7f),1)) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          i_val = extraout_ECX;
          param_2 = extraout_EDX;
        }
        iVar2 = i_val;
        if (*param_1 < 0x80) {
          param_1 = param_1 + 1;
          if (SBORROW4(i_val,1)) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar2 = extraout_ECX_02;
            param_2 = extraout_EDX_02;
          }
          if (-1 < i_val + -1) {
            do {
              *param_2 = *param_1;
              param_2[1] = param_1[1];
              param_2[2] = param_1[2];
              param_1 = param_1 + 3;
              param_2 = param_2 + 3;
              i_val = i_val + -1;
            } while (i_val != 0);
          }
          i_val = (int)((longlong)iVar2 * 3);
          if ((longlong)i_val != (longlong)iVar2 * 3) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar2 = extraout_ECX_03;
            param_2 = extraout_EDX_03;
          }
          if (SCARRY4(i_val,1)) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar2 = extraout_ECX_04;
            param_2 = extraout_EDX_04;
          }
          bVar3 = SCARRY4(local_c,i_val + 1);
          local_c = local_c + i_val + 1;
          if (bVar3) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar2 = extraout_ECX_05;
            param_2 = extraout_EDX_05;
          }
        }
        else {
          pbVar1 = param_1 + 1;
          if (SBORROW4(i_val,1)) {
            pbVar1 = (byte *)thunk_FUN_00402808((uint)pbVar1);
            iVar2 = extraout_ECX_00;
            param_2 = extraout_EDX_00;
          }
          if (-1 < i_val + -1) {
            do {
              *param_2 = *pbVar1;
              param_2[1] = pbVar1[1];
              param_2[2] = pbVar1[2];
              param_2 = param_2 + 3;
              i_val = i_val + -1;
            } while (i_val != 0);
          }
          param_1 = pbVar1 + 3;
          bVar3 = SCARRY4(local_c,4);
          local_c = local_c + 4;
          if (bVar3) {
            param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
            iVar2 = extraout_ECX_01;
            param_2 = extraout_EDX_01;
          }
        }
        i_val = (int)((longlong)iVar2 * 3);
        if ((longlong)i_val != (longlong)iVar2 * 3) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          i_val = extraout_ECX_06;
          param_2 = extraout_EDX_06;
        }
        bVar3 = SCARRY4(local_10,i_val);
        local_10 = local_10 + i_val;
        if (bVar3) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          param_2 = extraout_EDX_07;
        }
      } while (local_10 < param_3);
    }
  }
  else if ((i_val == 0x20) && (0 < param_3)) {
    do {
      i_val = (*param_1 & 0x7f) + 1;
      if (SCARRY4((uint)(*param_1 & 0x7f),1)) {
        param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
        i_val = extraout_ECX_07;
        param_2 = extraout_EDX_08;
      }
      iVar2 = i_val;
      if (*param_1 < 0x80) {
        param_1 = param_1 + 1;
        if (SBORROW4(i_val,1)) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar2 = extraout_ECX_10;
          param_2 = extraout_EDX_11;
        }
        if (-1 < i_val + -1) {
          do {
            *param_2 = *param_1;
            param_2[1] = param_1[1];
            param_2[2] = param_1[2];
            param_2[3] = param_1[3];
            param_1 = param_1 + 4;
            param_2 = param_2 + 4;
            i_val = i_val + -1;
          } while (i_val != 0);
        }
        i_val = (int)((longlong)iVar2 * 4);
        if ((longlong)i_val != (longlong)iVar2 * 4) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar2 = extraout_ECX_11;
          param_2 = extraout_EDX_12;
        }
        if (SCARRY4(i_val,1)) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar2 = extraout_ECX_12;
          param_2 = extraout_EDX_13;
        }
        bVar3 = SCARRY4(local_c,i_val + 1);
        local_c = local_c + i_val + 1;
        if (bVar3) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar2 = extraout_ECX_13;
          param_2 = extraout_EDX_14;
        }
      }
      else {
        pbVar1 = param_1 + 1;
        if (SBORROW4(i_val,1)) {
          pbVar1 = (byte *)thunk_FUN_00402808((uint)pbVar1);
          iVar2 = extraout_ECX_08;
          param_2 = extraout_EDX_09;
        }
        if (-1 < i_val + -1) {
          do {
            *param_2 = *pbVar1;
            param_2[1] = pbVar1[1];
            param_2[2] = pbVar1[2];
            param_2[3] = pbVar1[3];
            param_2 = param_2 + 4;
            i_val = i_val + -1;
          } while (i_val != 0);
        }
        param_1 = pbVar1 + 4;
        bVar3 = SCARRY4(local_c,5);
        local_c = local_c + 5;
        if (bVar3) {
          param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
          iVar2 = extraout_ECX_09;
          param_2 = extraout_EDX_10;
        }
      }
      i_val = (int)((longlong)iVar2 * 4);
      if ((longlong)i_val != (longlong)iVar2 * 4) {
        param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
        i_val = extraout_ECX_14;
        param_2 = extraout_EDX_15;
      }
      bVar3 = SCARRY4(local_10,i_val);
      local_10 = local_10 + i_val;
      if (bVar3) {
        param_1 = (byte *)thunk_FUN_00402808((uint)param_1);
        param_2 = extraout_EDX_16;
      }
    } while (local_10 < param_3);
  }
  return local_c;
}


/* ==== 00458c14 TTarga.virtual_050 ==== */

/* WARNING: Removing unreachable block (ram,0x00458f19) */
/* WARNING: Removing unreachable block (ram,0x00458f52) */
/* WARNING: Removing unreachable block (ram,0x00458cf3) */
/* WARNING: Removing unreachable block (ram,0x00458e7f) */

void TTarga_virtual_050(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int i_val;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  undefined1 *puVar8;
  undefined *puStack_174;
  char *pcStack_170;
  char *pcStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  int local_150;
  int local_14c [5];
  byte local_138 [256];
  int local_38;
  int local_34;
  byte local_2e;
  char local_2d;
  byte local_2c;
  ushort local_22;
  ushort local_20;
  byte local_1e;
  byte local_1d;
  byte *local_1c;
  char local_17;
  ushort local_16;
  uint local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  puStack_160 = &stack0xfffffffc;
  local_14c[0] = 0;
  local_150 = 0;
  local_14c[2] = 0;
  local_14c[1] = 0;
  local_14c[4] = 0;
  local_14c[3] = 0;
  local_34 = 0;
  local_38 = 0;
  puStack_164 = &LAB_00459035;
  pcStack_168 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_168;
  local_8 = param_1;
  FUN_00456634(param_1,param_2,0);
  (**(code **)(*param_2 + 4))(param_2,&local_2e,0x12);
  if (local_2d != '\0') {
    FUN_00402ee4(*local_8,local_138);
    FUN_00403e80(&local_38,local_138);
    pcStack_170 = ".LoadFromStream";
    puStack_174 = &DAT_00459064;
    FUN_00403f9c(&local_34,4);
    FUN_00403c40(local_34);
  }
  if (local_2d != '\x01') {
    local_17 = (local_2c & 8) != 0;
    local_2c = local_2c & 0xf7;
    if (local_2c != 2) {
      FUN_00402ee4(*local_8,local_138);
      FUN_00403e80(local_14c + 3,local_138);
      pcStack_170 = ".LoadFromStream";
      puStack_174 = &DAT_00459064;
      FUN_00403f9c(local_14c + 4,4);
      FUN_00403c40(local_14c[4]);
    }
    if (local_2c == 2) {
      if ((local_1e != 0x18) && (local_1e != 0x20)) {
        FUN_00402ee4(*local_8,local_138);
        FUN_00403e80(local_14c + 1,local_138);
        pcStack_170 = ".LoadFromStream";
        puStack_174 = &DAT_00459064;
        pcStack_168 = "Not a 24 or 32 bit Targa file";
        FUN_00403f9c(local_14c + 2,4);
        FUN_00403c40(local_14c[2]);
      }
      if ((local_1e == 0x18) || (local_1e == 0x20)) {
        pcStack_170 = (char *)0x458df0;
        FUN_00457194(local_8,(uint)local_22,(uint)local_20,(uint)local_1e);
        if ((local_1d & 0x20) == 0) {
          uVar1 = local_20 - 1;
          if (SBORROW4((uint)local_20,1)) {
            uVar1 = thunk_FUN_00402808(uVar1);
          }
          local_c = 0xffffffff;
          local_10 = uVar1;
        }
        else {
          local_10 = 0;
          local_c = 1;
        }
        if (local_2e == 0) {
          FUN_00403c5c(local_8 + 0x132);
        }
        else {
          FUN_00404210(local_8 + 0x132,(uint)local_2e);
          uVar1 = FUN_004040ac(local_8 + 0x132);
          i_val = 0;
          if (*(int *)(uVar1 - 4) == 0) {
            uVar1 = thunk_FUN_00402808(uVar1);
            i_val = extraout_EDX;
          }
          (**(code **)(*param_2 + 4))(param_2,uVar1 + i_val,local_2e);
        }
        uVar1 = (uint)(local_1e >> 3) * (uint)local_22;
        if (0xffff < uVar1) {
          uVar1 = thunk_FUN_00402808(uVar1);
        }
        local_16 = (ushort)uVar1;
        if (local_8[0x24] < (int)(uVar1 & 0xffff)) {
          FUN_00402ee4(*local_8,local_138);
          FUN_00403e80(&local_150,local_138);
          pcStack_170 = ".LoadFromStream";
          puStack_174 = &DAT_00459064;
          pcStack_168 = "Targa image doesn\'t fit in the DIB";
          FUN_00403f9c(local_14c,4);
          FUN_00403c40(local_14c[0]);
        }
        local_14 = local_10;
        if (local_17 != '\0') {
          local_1c = (byte *)FUN_0040816c((uint)local_16 * 2);
          pcStack_170 = &LAB_00458fc6;
          puStack_174 = (undefined *)*in_FS_OFFSET;
          *in_FS_OFFSET = &puStack_174;
          uVar1 = local_20 - 1;
          if (SBORROW4((uint)local_20,1)) {
            uVar1 = thunk_FUN_00402808(uVar1);
          }
          if (-1 < (int)uVar1) {
            i_val = uVar1 + 1;
            do {
              iVar2 = (**(code **)(*param_2 + 4))(param_2,local_1c);
              puVar8 = &stack0xfffffffc;
              pbVar3 = (byte *)FUN_00456950(local_8,local_14);
              iVar4 = FUN_00458a04(local_1c,pbVar3,(uint)local_16,(int)puVar8);
              iVar5 = FUN_00412664(param_2);
              uVar1 = iVar5 - iVar2;
              if (SBORROW4(iVar5,iVar2)) {
                uVar1 = thunk_FUN_00402808(uVar1);
              }
              iVar2 = iVar4 + uVar1;
              if (SCARRY4(iVar4,uVar1)) {
                thunk_FUN_00402808(uVar1);
                iVar2 = extraout_EDX_00;
              }
              FUN_00412674(param_2,iVar2);
              bVar7 = SCARRY4(local_14,local_c);
              local_14 = local_14 + local_c;
              if (bVar7) {
                thunk_FUN_00402808(local_c);
              }
              i_val = i_val + -1;
            } while (i_val != 0);
          }
          *in_FS_OFFSET = puStack_174;
          pcStack_170 = (char *)0x458fc5;
          FUN_00402794((int)local_1c);
          return;
        }
        uVar1 = local_20 - 1;
        if (SBORROW4((uint)local_20,1)) {
          uVar1 = thunk_FUN_00402808(uVar1);
        }
        if (-1 < (int)uVar1) {
          i_val = uVar1 + 1;
          do {
            uVar6 = FUN_00456950(local_8,local_14);
            (**(code **)(*param_2 + 4))(param_2,uVar6,local_16);
            bVar7 = SCARRY4(local_14,local_c);
            local_14 = local_14 + local_c;
            if (bVar7) {
              thunk_FUN_00402808(local_c);
            }
            i_val = i_val + -1;
          } while (i_val != 0);
        }
      }
    }
  }
  *in_FS_OFFSET = pcStack_168;
  puStack_160 = &LAB_0045903c;
  puStack_164 = (undefined1 *)0x459027;
  FUN_00403c80(&local_150,6);
  puStack_164 = (undefined1 *)0x459034;
  FUN_00403c80(&local_38,2);
  return;
}


/* ==== 0045913c TTarga.virtual_054 ==== */

/* WARNING: Removing unreachable block (ram,0x004592a9) */

void TTarga_virtual_054(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_EDX;
  uint j;
  undefined4 *in_FS_OFFSET;
  char *pcStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int local_130;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  char local_20 [12];
  ushort local_14;
  ushort local_12;
  byte local_10;
  undefined1 local_f;
  undefined2 local_e;
  int i_val;
  int *local_8;
  
  puStack_140 = &stack0xfffffffc;
  local_12c = 0;
  local_130 = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_144 = &LAB_00459385;
  pcStack_148 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_148;
  local_8 = param_2;
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    if ((param_1[0xf] != 0x18) && (param_1[0xf] != 0x20)) {
      FUN_00402ee4(*param_1,local_128);
      FUN_00403e80(&local_28,local_128);
      FUN_00403f9c(&local_24,4);
      FUN_00403c40(local_24);
    }
    if ((param_1[0xf] == 0x18) || (param_1[0xf] == 0x20)) {
      FUN_00407090((undefined4 *)local_20,0x12);
      uVar2 = FUN_00403edc(param_1[0x132]);
      if (0xff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      local_20[0] = (char)uVar2;
      local_20[1] = 0;
      local_20[2] = 2;
      uVar2 = param_1[0x23];
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      local_14 = (ushort)uVar2;
      uVar2 = param_1[0x10];
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      local_12 = (ushort)uVar2;
      uVar2 = param_1[0xf];
      if (0xff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      local_10 = (byte)uVar2;
      local_f = 0x20;
      (**(code **)(*local_8 + 8))(local_8,local_20,0x12);
      if (local_20[0] != '\0') {
        uVar2 = FUN_004040ac(param_1 + 0x132);
        iVar4 = 0;
        if (*(int *)(uVar2 - 4) == 0) {
          uVar2 = thunk_FUN_00402808(uVar2);
          iVar4 = extraout_EDX;
        }
        (**(code **)(*local_8 + 8))(local_8,uVar2 + iVar4,local_20[0]);
      }
      uVar2 = (uint)(local_10 >> 3) * (uint)local_14;
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      local_e = (undefined2)uVar2;
      uVar2 = uVar2 & 0xffff;
      if (param_1[0x24] < (int)uVar2) {
        FUN_00402ee4(*param_1,local_128);
        FUN_00403e80(&local_130,local_128);
        pcStack_148 = "Targa destination image is larger than DIB";
        FUN_00403f9c(&local_12c,4);
        uVar2 = FUN_00403c40(local_12c);
      }
      j = (uint)local_12;
      if (SBORROW4(j,1)) {
        thunk_FUN_00402808(uVar2);
      }
      if (-1 < (int)(j - 1)) {
        i_val = 0;
        do {
          uVar3 = FUN_00456950(param_1,i_val);
          (**(code **)(*local_8 + 8))(local_8,uVar3,local_e);
          i_val = i_val + 1;
          j = j - 1;
        } while (j != 0);
      }
    }
  }
  *in_FS_OFFSET = pcStack_148;
  puStack_140 = &LAB_0045938c;
  puStack_144 = (undefined1 *)0x459377;
  FUN_00403c80(&local_130,2);
  puStack_144 = (undefined1 *)0x459384;
  FUN_00403c80(&local_28,2);
  return;
}


