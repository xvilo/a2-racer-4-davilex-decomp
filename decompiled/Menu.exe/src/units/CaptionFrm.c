/* Menu.exe — units/CaptionFrm.pas: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a688c TControls.virtual_00c ==== */

void TControls_virtual_00c(int *param_1,int *param_2)

{
  int iVar1;
  
  TDataObject_virtual_00c(param_1,param_2);
  iVar1 = System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[2] = *(int *)(iVar1 + 8);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[3] = *(int *)(iVar1 + 0xc);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[4] = *(int *)(iVar1 + 0x10);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[5] = *(int *)(iVar1 + 0x14);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[6] = *(int *)(iVar1 + 0x18);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[7] = *(int *)(iVar1 + 0x1c);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[8] = *(int *)(iVar1 + 0x20);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(iVar1 + 0x24);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[10] = *(int *)(iVar1 + 0x28);
  System__AsClass(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[0xb] = *(int *)(iVar1 + 0x2c);
  return;
}


/* ==== 004a6964 TControls.virtual_000 ==== */

void TControls_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x4a69d0,*(undefined4 *)(param_1 + 8));
  FUN_0045ef0c(param_1,0x4a69dc,*(undefined4 *)(param_1 + 0xc));
  FUN_0045ef0c(param_1,0x4a69ec,*(undefined4 *)(param_1 + 0x10));
  FUN_0045ef0c(param_1,0x4a69fc,*(undefined4 *)(param_1 + 0x14));
  FUN_0045ef0c(param_1,0x4a6a0c,*(undefined4 *)(param_1 + 0x28));
  FUN_0045ef0c(param_1,0x4a6a24,*(undefined4 *)(param_1 + 0x2c));
  return;
}


/* ==== 004a6a38 FUN_004a6a38 ==== */

undefined4 FUN_004a6a38(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\0') {
    return 1;
  }
  if (cVar1 == '\x01') {
    return 3;
  }
  if (cVar1 == '\x02') {
    return 2;
  }
  if (cVar1 == '\x03') {
    uVar2 = 4;
  }
  return uVar2;
}


/* ==== 004a6a70 FUN_004a6a70 ==== */

undefined4 FUN_004a6a70(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\x03') {
    return *(undefined4 *)(param_1 + 0x2c);
  }
  return *(undefined4 *)(param_1 + 0x28);
}


/* ==== 004a6a80 FUN_004a6a80 ==== */

undefined4 FUN_004a6a80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = *(undefined4 *)(param_1 + 8);
    break;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    break;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    break;
  case 3:
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    break;
  case 4:
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    break;
  case 5:
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    break;
  case 6:
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    break;
  default:
    uVar1 = 0xffffffff;
    System__Assert("ill. index GetKeySettingByIndex");
  }
  return uVar1;
}


/* ==== 004a6b3c FUN_004a6b3c ==== */

void FUN_004a6b3c(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_004a6c30,1);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_004a6c54,1);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_004a6c64,1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Right",1);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra1",1);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra2",1);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra3",1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","ControlType",0);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","JoySensitivity",1);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","WheelSensitivity",1);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  return;
}


/* ==== 004a6cf4 TControls.virtual_014 ==== */

void TControls_virtual_014(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  local_8 = param_3;
  FUN_0045e350(param_2,param_1 + 8);
  FUN_0045e350(param_2,param_1 + 0xc);
  FUN_0045e350(param_2,param_1 + 0x10);
  FUN_0045e350(param_2,param_1 + 0x14);
  FUN_0045e350(param_2,param_1 + 0x18);
  FUN_0045e350(param_2,param_1 + 0x1c);
  FUN_0045e350(param_2,param_1 + 0x20);
  FUN_0045e350(param_2,&local_8);
  *(char *)(param_1 + 0x24) = (char)local_8;
  FUN_0045e350(param_2,param_1 + 0x28);
  FUN_0045e350(param_2,param_1 + 0x2c);
  return;
}


/* ==== 004a6d70 TControls.virtual_010 ==== */

void TControls_virtual_010(int param_1,int *param_2)

{
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 0x20));
  FUN_0045e380(param_2,(uint)*(byte *)(param_1 + 0x24));
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 0x28));
  FUN_0045e380(param_2,*(undefined4 *)(param_1 + 0x2c));
  return;
}


/* ==== 004a6de4 FUN_004a6de4 ==== */

void FUN_004a6de4(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","DIFFICULTY",1);
  *(undefined1 *)(param_1 + 8) = uVar1;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","RESOLUTION",1);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","MUSICVOLUME",100);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","FXVOLUME",100);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","VOICESVOLUME",100);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","MUSICON",1);
  *(undefined1 *)(param_1 + 0x1d) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS",&DAT_004a6ff8,1);
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","VOICESON",1);
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","SHOWSTARTINFO",1);
  *(undefined1 *)(param_1 + 0x1f) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","AlphaBlending",1);
  *(undefined1 *)(param_1 + 0x35) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","BiliniarFiltering",1);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","WaitVbl",0);
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","Mipmapping",0);
  *(undefined1 *)(param_1 + 0x36) = uVar1;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Gamma",0);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","RenderFocus",0);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","DriverIndex",0);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  FUN_004a6b3c(*(int *)(param_1 + 0xc),param_2);
  return;
}


/* ==== 004a70bc FUN_004a70bc ==== */

void FUN_004a70bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}


/* ==== 004a70c0 FUN_004a70c0 ==== */

void FUN_004a70c0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  puStack_18 = &LAB_004a7120;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  SysUtils_IntToStr(*(undefined4 *)(param_1 + 0x38),(int *)&local_c);
  System__LStrCat3(&local_8,(undefined4 *)"setting renderfocus to : ",local_c);
  iVar1 = local_8;
  debug = Debug();
  TDebug_Message(debug,iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004a7127;
  puStack_18 = (undefined1 *)0x4a711f;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 004a7150 FUN_004a7150 ==== */

undefined4 FUN_004a7150(int param_1)

{
  if (*(char *)(param_1 + 0x34) != '\0') {
    return 2;
  }
  return 0;
}


/* ==== 004a7160 FUN_004a7160 ==== */

undefined4 FUN_004a7160(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x3c);
  if (cVar1 == '\0') {
    return 0x200000;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return 0x800000;
    }
    return 0x1000000;
  }
  return 0x800000;
}


/* ==== 004a7188 FUN_004a7188 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a7188(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad578 = _DAT_004ad578 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 004a732c TCaptionForm.virtual_02c ==== */

int * TCaptionForm_virtual_02c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
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
  TCustomForm_virtual_02c(param_1,'\0',param_3);
  FUN_004865e4(param_1);
  (**(code **)(*param_1 + 0xe0))();
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 004a7378 TCaptionForm.virtual_0e0 ==== */

void TCaptionForm_virtual_0e0(void)

{
  return;
}


/* ==== 004a737c TCaptionForm.virtual_00c ==== */

void TCaptionForm_virtual_00c(int *param_1)

{
  TCustomForm_virtual_00c(param_1);
  return;
}


/* ==== 004a73c8 FUN_004a73c8 ==== */

void FUN_004a73c8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_18;
  char *local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  puStack_28 = &LAB_004a74a3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (param_1 == (int *)0x0) {
    puStack_24 = &stack0xfffffffc;
    System_LoadResString(&PTR_DAT_004a73c0,param_2);
  }
  else {
    uVar1 = System__IsClass(param_1,(int)&PTR_EDavilex_virtual_000_00453ba0);
    if ((char)uVar1 == '\0') {
      uVar1 = System__IsClass(param_1,(int)&DAT_00407624);
      if ((char)uVar1 == '\0') {
        local_14 = "TranslateMenuException: ";
        local_10 = 0xb;
        System_LoadResString(&PTR_DAT_004a73c0,&local_18);
        local_c = local_18;
        local_8 = 0xb;
        SysUtils_Format((byte *)"%s: %s",&local_14,1,param_2);
      }
      else {
        System__LStrClr(param_2);
        iVar2 = System__AsClass(param_1,(int)&DAT_00407624);
        System__LStrAsg(param_2,*(undefined4 **)(iVar2 + 4));
      }
    }
    else {
      iVar2 = System__AsClass(param_1,(int)&PTR_EDavilex_virtual_000_00453ba0);
      System__LStrAsg(param_2,*(undefined4 **)(iVar2 + 0x18));
    }
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004a74aa;
  puStack_28 = (undefined1 *)0x4a74a2;
  System__LStrClr(&local_18);
  return;
}


/* ==== 004a7844 FUN_004a7844 ==== */

void FUN_004a7844(uint param_1,int *param_2)

{
  int i_val;
  uint uVar1;
  undefined4 **ppuVar2;
  uint extraout_EDX;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  uint local_8;
  
  local_c = (undefined4 *)0x0;
  puStack_1c = (undefined1 *)0x4a785f;
  local_8 = param_1;
  System__LStrAddRef(param_1);
  puStack_20 = &LAB_004a78ef;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  System__LStrClr(param_2);
  i_val = System__LStrLen(local_8);
  if (0 < i_val) {
    j = 1;
    do {
      uVar1 = local_8;
      if (*(uint *)(local_8 - 4) <= j - 1U) {
        uVar1 = System__RunError(local_8);
      }
      if (*(char *)((uVar1 - 1) + j) == '@') {
        System__LStrCat(param_2,(undefined4 *)&DAT_004a7908);
      }
      else {
        ppuVar2 = &local_c;
        uVar1 = local_8;
        if (*(uint *)(local_8 - 4) <= j - 1U) {
          ppuVar2 = (undefined4 **)System__RunError((uint)ppuVar2);
          uVar1 = extraout_EDX;
        }
        System__LStrFromChar
                  ((int *)ppuVar2,CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)((uVar1 - 1) + j)));
        System__LStrCat(param_2,local_c);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004a78f6;
  puStack_20 = (undefined1 *)0x4a78ee;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 004a790c FUN_004a790c ==== */

void FUN_004a790c(int param_1,undefined4 *param_2,int *param_3)

{
  int *in_FS_OFFSET;
  uint *puVar1;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint local_1c;
  undefined *local_18;
  undefined4 *local_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_1c = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined *)0x0;
  puStack_28 = (undefined1 *)0x4a792f;
  local_c = param_2;
  local_8 = param_1;
  System__LStrAddRef(param_1);
  puStack_28 = (undefined1 *)0x4a7937;
  System__LStrAddRef((int)local_c);
  puStack_2c = &LAB_004a79ff;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_34 = (undefined1 *)0x4a7954;
  puStack_28 = &stack0xfffffffc;
  FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_18);
  puStack_34 = (undefined1 *)0x4a795f;
  FUN_004089a0(local_18,(int *)&local_14);
  puStack_34 = (undefined1 *)0x4a796c;
  System__LStrCat((int *)&local_14,(undefined4 *)"menu.ini");
  puStack_34 = (undefined1 *)0x4a797b;
  local_10 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_14);
  puStack_38 = &LAB_004a79d0;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_3c;
  puVar1 = &local_1c;
  puStack_34 = &stack0xfffffffc;
  (**(code **)*local_10)(local_10,"errorstrings",local_8,puVar1,0);
  FUN_004a7844(local_1c,param_3);
  if (*param_3 == 0) {
    System__LStrAsg(param_3,local_c);
  }
  *in_FS_OFFSET = (int)puVar1;
  puStack_3c = &LAB_004a79d7;
  System_TObject_Free(local_10);
  return;
}


