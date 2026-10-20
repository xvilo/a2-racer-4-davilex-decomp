/* Menu.exe — units/CaptionFrm.pas: 26 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a61a0 TSettings.Destroy ==== */

void TSettings_Destroy(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = (undefined1 *)0x4a61b8;
  piVar2 = FUN_004032fc(param_1,param_2);
  puStack_11c = &LAB_004a6252;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  FUN_00402ee4(*piVar2,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  TDataObject_Destroy(piVar2,extraout_DL & 0xfc);
  FUN_00402f9c((int *)piVar2[3]);
  piVar2[3] = 0;
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "Destroy";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a628c TSettings.virtual_00c ==== */

void TSettings_virtual_00c(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_004a63c5;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TDataObject_virtual_00c(param_1,param_2);
  iVar3 = FUN_0040312c(param_2,(int)&PTR_TSettings_virtual_000_004a6010);
  param_1[0xb] = *(int *)(iVar3 + 0x2c);
  param_1[4] = *(int *)(iVar3 + 0x10);
  param_1[5] = *(int *)(iVar3 + 0x14);
  param_1[6] = *(int *)(iVar3 + 0x18);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(iVar3 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(iVar3 + 0x1d);
  *(undefined1 *)((int)param_1 + 0x1e) = *(undefined1 *)(iVar3 + 0x1e);
  *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)(iVar3 + 0x1f);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar3 + 8);
  *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)(iVar3 + 0x35);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(iVar3 + 0x34);
  *(undefined1 *)((int)param_1 + 0x3d) = *(undefined1 *)(iVar3 + 0x3d);
  *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)(iVar3 + 0x36);
  param_1[0xc] = *(int *)(iVar3 + 0x30);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar3 + 0x3c);
  param_1[0xe] = *(int *)(iVar3 + 0x38);
  param_1[9] = *(int *)(iVar3 + 0x24);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(iVar3 + 0x28);
  param_1[8] = *(int *)(iVar3 + 0x20);
  FUN_0040312c(param_2,(int)&PTR_TSettings_virtual_000_004a6010);
  (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],*(undefined4 *)(iVar3 + 0xc));
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "Assign";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a63f4 TSettings.virtual_014 ==== */

void TSettings_virtual_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puStack_120 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_124 = &LAB_004a653e;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  FUN_00403f9c((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_0045e350(param_2,local_8);
  *(undefined1 *)(param_1 + 2) = local_8[0];
  FUN_0045e350(param_2,param_1 + 0xb);
  FUN_0045e350(param_2,param_1 + 4);
  FUN_0045e350(param_2,param_1 + 6);
  FUN_0045e350(param_2,param_1 + 5);
  FUN_0045e370(param_2,param_1 + 7);
  FUN_0045e370(param_2,(int)param_1 + 0x1d);
  FUN_0045e370(param_2,(int)param_1 + 0x1e);
  FUN_0045e370(param_2,(int)param_1 + 0x1f);
  FUN_0045e370(param_2,(int)param_1 + 0x35);
  FUN_0045e370(param_2,param_1 + 0xd);
  FUN_0045e370(param_2,(int)param_1 + 0x3d);
  FUN_0045e370(param_2,(int)param_1 + 0x36);
  FUN_0045e350(param_2,param_1 + 0xc);
  FUN_0045e350(param_2,local_c);
  *(undefined1 *)(param_1 + 0xf) = local_c[0];
  FUN_0045e350(param_2,param_1 + 8);
  FUN_0045e350(param_2,param_1 + 0xe);
  (**(code **)(*(int *)param_1[3] + 0x14))((int *)param_1[3],param_2);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&local_14,2);
  return;
}


/* ==== 004a6574 TSettings.virtual_010 ==== */

void TSettings_virtual_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_004a66b6;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_0045e380(param_2,(uint)*(byte *)(param_1 + 2));
  FUN_0045e380(param_2,param_1[0xb]);
  FUN_0045e380(param_2,param_1[4]);
  FUN_0045e380(param_2,param_1[6]);
  FUN_0045e380(param_2,param_1[5]);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e380(param_2,param_1[0xc]);
  FUN_0045e380(param_2,(uint)*(byte *)(param_1 + 0xf));
  FUN_0045e380(param_2,param_1[8]);
  FUN_0045e380(param_2,param_1[0xe]);
  (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],param_2);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a66ec FUN_004a66ec ==== */

void FUN_004a66ec(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* ==== 004a66f0 TSettings.virtual_000 ==== */

void TSettings_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x4a67a8,*(undefined4 *)(param_1 + 0x18));
  FUN_0045ef0c(param_1,0x4a67c0,*(undefined4 *)(param_1 + 0x2c));
  FUN_0045ef0c(param_1,0x4a67d4,*(undefined4 *)(param_1 + 0x38));
  FUN_0045f038(param_1,0x4a67ec,*(char *)(param_1 + 0x1f));
  FUN_0045f038(param_1,0x4a6804,*(char *)(param_1 + 0x28));
  FUN_0045ef0c(param_1,0x4a681c,*(undefined4 *)(param_1 + 0x30));
  FUN_0045ef0c(param_1,0x4a682c,*(undefined4 *)(param_1 + 0x20));
  FUN_0045f038(param_1,0x4a6844,*(char *)(param_1 + 0x36));
  FUN_0045f038(param_1,0x4a6858,*(char *)(param_1 + 0x3d));
  FUN_0045ef0c(param_1,0x4a686c,(uint)*(byte *)(param_1 + 0x3c));
  FUN_0045efa4(param_1,(undefined4 *)"FControls",*(int **)(param_1 + 0xc));
  return;
}


/* ==== 004a688c TControls.virtual_00c ==== */

void TControls_virtual_00c(int *param_1,int *param_2)

{
  int iVar1;
  
  TDataObject_virtual_00c(param_1,param_2);
  iVar1 = FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[2] = *(int *)(iVar1 + 8);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[3] = *(int *)(iVar1 + 0xc);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[4] = *(int *)(iVar1 + 0x10);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[5] = *(int *)(iVar1 + 0x14);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[6] = *(int *)(iVar1 + 0x18);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[7] = *(int *)(iVar1 + 0x1c);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[8] = *(int *)(iVar1 + 0x20);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(iVar1 + 0x24);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
  param_1[10] = *(int *)(iVar1 + 0x28);
  FUN_0040312c(param_2,(int)&PTR_TControls_virtual_000_004a6080);
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
    FUN_00403c40("ill. index GetKeySettingByIndex");
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
  uint uVar2;
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
  FUN_004085ac(*(undefined4 *)(param_1 + 0x38),(int *)&local_c);
  FUN_00403f28(&local_8,(undefined4 *)"setting renderfocus to : ",local_c);
  iVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004a7127;
  puStack_18 = (undefined1 *)0x4a711f;
  FUN_00403c80((int *)&local_c,2);
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
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomForm_virtual_02c(param_1,'\0',param_3);
  FUN_004865e4(param_1);
  (**(code **)(*param_1 + 0xe0))();
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
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
    FUN_00405808(&PTR_DAT_004a73c0,param_2);
  }
  else {
    uVar1 = FUN_00403114(param_1,(int)&PTR_EDavilex_virtual_000_00453ba0);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00403114(param_1,(int)&DAT_00407624);
      if ((char)uVar1 == '\0') {
        local_14 = "TranslateMenuException: ";
        local_10 = 0xb;
        FUN_00405808(&PTR_DAT_004a73c0,&local_18);
        local_c = local_18;
        local_8 = 0xb;
        FUN_00409254((byte *)"%s: %s",&local_14,1,param_2);
      }
      else {
        FUN_00403c5c(param_2);
        iVar2 = FUN_0040312c(param_1,(int)&DAT_00407624);
        FUN_00403cb0(param_2,*(undefined4 **)(iVar2 + 4));
      }
    }
    else {
      iVar2 = FUN_0040312c(param_1,(int)&PTR_EDavilex_virtual_000_00453ba0);
      FUN_00403cb0(param_2,*(undefined4 **)(iVar2 + 0x18));
    }
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004a74aa;
  puStack_28 = (undefined1 *)0x4a74a2;
  FUN_00403c5c(&local_18);
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
  FUN_00404090(param_1);
  puStack_20 = &LAB_004a78ef;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00403c5c(param_2);
  i_val = FUN_00403edc(local_8);
  if (0 < i_val) {
    j = 1;
    do {
      uVar1 = local_8;
      if (*(uint *)(local_8 - 4) <= j - 1U) {
        uVar1 = thunk_FUN_00402808(local_8);
      }
      if (*(char *)((uVar1 - 1) + j) == '@') {
        FUN_00403ee4(param_2,(undefined4 *)&DAT_004a7908);
      }
      else {
        ppuVar2 = &local_c;
        uVar1 = local_8;
        if (*(uint *)(local_8 - 4) <= j - 1U) {
          ppuVar2 = (undefined4 **)thunk_FUN_00402808((uint)ppuVar2);
          uVar1 = extraout_EDX;
        }
        FUN_00403e04((int *)ppuVar2,CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)((uVar1 - 1) + j)));
        FUN_00403ee4(param_2,local_c);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004a78f6;
  puStack_20 = (undefined1 *)0x4a78ee;
  FUN_00403c80((int *)&local_c,2);
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
  FUN_00404090(param_1);
  puStack_28 = (undefined1 *)0x4a7937;
  FUN_00404090((int)local_c);
  puStack_2c = &LAB_004a79ff;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_34 = (undefined1 *)0x4a7954;
  puStack_28 = &stack0xfffffffc;
  FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_18);
  puStack_34 = (undefined1 *)0x4a795f;
  FUN_004089a0(local_18,(int *)&local_14);
  puStack_34 = (undefined1 *)0x4a796c;
  FUN_00403ee4((int *)&local_14,(undefined4 *)"menu.ini");
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
    FUN_00403cb0(param_3,local_c);
  }
  *in_FS_OFFSET = (int)puVar1;
  puStack_3c = &LAB_004a79d7;
  FUN_00402f9c(local_10);
  return;
}


