/* Menu.exe — units/MenuData.pas: 57 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047efb8 TData.DataCreate ==== */

void TData_DataCreate(int *param_1)

{
  uint debug;
  int *piVar1;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 *local_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined *local_124;
  undefined *local_120;
  undefined *local_11c;
  undefined *local_118;
  undefined4 *local_114;
  byte local_110 [188];
  undefined4 uStackY_54;
  char *pcVar2;
  int *piStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  i_val = 0x26;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  puStack_20 = &LAB_0047f377;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  System_TObject_ClassName(*param_1,local_110);
  System__LStrFromString((int *)&stack0xfffffff0,local_110);
  System__LStrCatN((int *)&local_c,3);
  debug = Debug();
  TDebug_InProc(debug,local_c,0);
  debug = Debug();
  FUN_0045fed8(debug);
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX);
  local_8[0x37] = (int)piVar1;
  TFont_SetName(piVar1,(undefined4 *)"Arial");
  FUN_00402a48();
  FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_118);
  FUN_004089a0(local_118,(int *)&local_114);
  System__LStrAsg(local_8 + 0x2e,local_114);
  FUN_0047f6e8((int)local_8);
  System__LStrCat3((int *)&local_11c,(undefined4 *)local_8[0x2e],(undefined4 *)"menu.ini");
  FUN_00481104(local_11c);
  System__LStrCat3((int *)&local_120,(undefined4 *)local_8[0x2e],(undefined4 *)"game.ini");
  FUN_00481104(local_120);
  System__LStrCat3((int *)&local_124,(undefined4 *)local_8[0x2e],(undefined4 *)"raser.ini");
  FUN_00481104(local_124);
  FUN_004803ac((int)local_8);
  System__LStrCat3((int *)&local_128,(undefined4 *)local_8[0x2e],(undefined4 *)"MenuRcs");
  i_val = TResourceManager_Create((int *)&DAT_00462d6c,'\x01',local_128);
  local_8[0x2b] = i_val;
  i_val = TDaviSoundBuffer_Create
                    ((int *)&DAT_00481bc8,'\x01',i_val,*(int **)PTR_DAT_004ab7e0,
                     (undefined4 *)local_8[0x2e]);
  local_8[0x2c] = i_val;
  puStack_40 = (undefined1 *)0x47f18a;
  i_val = TBitmapManager_Create
                    ((int *)&DAT_004895d8,'\x01',local_8[0x2b],(undefined4 *)local_8[0x2e]);
  local_8[0x2d] = i_val;
  puStack_40 = (undefined1 *)0x47f1a1;
  TDaviSoundBuffer_LoadMusic((int *)local_8[0x2c]);
  puStack_40 = (undefined1 *)0x47f1a9;
  TData_ReadDefGraphics(local_8);
  puStack_44 = &LAB_0047f1e2;
  piStack_48 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &piStack_48;
  pcVar2 = "hunny.acs";
  uStackY_54 = 0x47f1cf;
  puStack_40 = &stack0xfffffffc;
  i_val = FUN_0047dac8((int *)&DAT_0047daa8,'\x01',0,"hunny.acs","hunny");
  local_8[0x28] = i_val;
  *in_FS_OFFSET = pcVar2;
  piStack_48 = (int *)0x47f212;
  piVar1 = (int *)TStatic_virtual_004((int *)&PTR_TStatic_virtual_000_0048ddb4,'\x01');
  local_8[0x33] = (int)piVar1;
  piStack_48 = (int *)0x47f236;
  System__LStrCat3((int *)&local_12c,(undefined4 *)local_8[0x2e],(undefined4 *)"static.ini");
  piStack_48 = (int *)0x47f243;
  TStatic_LoadFromIniFile(piVar1,local_12c);
  piStack_48 = (int *)0x47f251;
  piStack_48 = (int *)(**(code **)(*(int *)local_8[0x33] + 8))();
  debug = Debug();
  piVar1 = piStack_48;
  piStack_48 = (int *)0x47f262;
  FUN_0045fd98(debug,0x47f46c,piVar1);
  piStack_48 = (int *)0x47f26e;
  piVar1 = TMenuIni_virtual_004((int *)&PTR_TMenuIni_virtual_000_0048ecf8,'\x01',extraout_ECX_00);
  local_8[0x31] = (int)piVar1;
  piStack_48 = (int *)0x47f296;
  System__LStrCat3((int *)&local_130,(undefined4 *)local_8[0x2e],(undefined4 *)"menu.ini");
  piStack_48 = (int *)0x47f2a3;
  FUN_004604dc(piVar1,local_130);
  piStack_48 = (int *)0x47f2b1;
  piStack_48 = (int *)(**(code **)(*(int *)local_8[0x31] + 8))();
  debug = Debug();
  piVar1 = piStack_48;
  piStack_48 = (int *)0x47f2c2;
  FUN_0045fd98(debug,0x47f47c,piVar1);
  if (*(char *)(local_8[0x31] + 8) == '\0') {
    piStack_48 = (int *)0x47f2dd;
    i_val = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_01);
    local_8[0x35] = i_val;
    piStack_48 = (int *)0x47f2f2;
    piVar1 = TGameIni_virtual_004((int *)&PTR_TGameIni_virtual_000_0048a238,'\x01',extraout_ECX_02);
    local_8[0x32] = (int)piVar1;
    piStack_48 = (int *)0x47f316;
    System__LStrCat3((int *)&local_134,(undefined4 *)local_8[0x2e],(undefined4 *)"game.ini");
    piStack_48 = (int *)0x47f323;
    FUN_0048a804(piVar1,local_134);
    piStack_48 = (int *)0x47f331;
    piStack_48 = (int *)(**(code **)(*(int *)local_8[0x32] + 8))();
    debug = Debug();
    piVar1 = piStack_48;
    piStack_48 = (int *)0x47f342;
    FUN_0045fd98(debug,0x47f498,piVar1);
  }
  piStack_48 = (int *)0x47f347;
  debug = Debug();
  piStack_48 = (int *)0x47f34c;
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = puStack_44;
  puStack_40 = (undefined1 *)0x47f369;
  System__LStrArrayClr((int *)&local_134,9);
  puStack_40 = (undefined1 *)0x47f376;
  System__LStrArrayClr((int *)&stack0xfffffff0,2);
  return;
}


/* ==== 0047f4ac TData.DataDestroy ==== */

void TData_DataDestroy(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined4 *local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_110 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0047f667;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  if ((char)param_1[0x36] == '\0') {
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  else if ((char)param_1[0x2a] != '\0') {
    TSaveGame_WriteToInis((int *)param_1[0x30]);
  }
  if (param_1[0x30] != 0) {
    TData_SavePlayer(param_1);
    piVar2 = (int *)(**(code **)(*(int *)param_1[0x30] + 8))();
    debug = Debug();
    FUN_0045fd98(debug,0x47f6a0,piVar2);
  }
  System__LStrCat3((int *)&local_110,(undefined4 *)param_1[0x2e],(undefined4 *)"menu.ini");
  FUN_00460568((int *)param_1[0x31],local_110);
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x31] + 8))();
  debug = Debug();
  FUN_0045fd98(debug,0x47f6d0,piVar2);
  if (*(char *)(param_1[0x31] + 8) == '\0') {
    SysUtils_FreeAndNil(param_1 + 0x35);
    SysUtils_FreeAndNil(param_1 + 0x32);
  }
  SysUtils_FreeAndNil(param_1 + 0x37);
  SysUtils_FreeAndNil(param_1 + 0x28);
  SysUtils_FreeAndNil(param_1 + 0x2c);
  SysUtils_FreeAndNil(param_1 + 0x2d);
  SysUtils_FreeAndNil(param_1 + 0x2b);
  SysUtils_FreeAndNil(param_1 + 0x30);
  SysUtils_FreeAndNil(param_1 + 0x31);
  SysUtils_FreeAndNil(param_1 + 0x33);
  debug = Debug();
  FUN_0045fed8(debug);
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "DataDestroy";
  System__LStrClr((int *)&local_110);
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0047f6e8 FUN_0047f6e8 ==== */

void FUN_0047f6e8(int param_1)

{
  char cVar1;
  int debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_20 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_18 = &LAB_0047f791;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = (int *)0x0;
  puStack_24 = &LAB_0047f774;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  System__LStrCat3((int *)&local_c,*(undefined4 **)(param_1 + 0xb8),(undefined4 *)"debug.ini");
  local_8 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_c);
  cVar1 = (**(code **)(*local_8 + 0x10))(local_8,"GENERAL","debug");
  if (cVar1 == '\0') {
    debug = Debug();
    FUN_0045f660(debug);
  }
  *in_FS_OFFSET = 0;
  puStack_24 = &LAB_0047f77b;
  uStack_28 = 0x47f773;
  System_TObject_Free(local_8);
  return;
}


/* ==== 0047f7d4 TData.gdfRadioBtnButtonStateChange ==== */

void TData_gdfRadioBtnButtonStateChange
               (int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  if (param_4 == '\x01') {
    FUN_00480780(param_1,*(int *)(param_1 + 0x90));
  }
  return;
}


/* ==== 0047f7ec TData.BtnStateChange ==== */

void TData_BtnStateChange(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  if (param_4 == '\x01') {
    FUN_00480780(param_1,*(int *)(param_1 + 0x54));
  }
  return;
}


/* ==== 0047f804 TData.CombinedBtnStateChange ==== */

void TData_CombinedBtnStateChange(int param_1,undefined4 param_2,int *param_3,char param_4)

{
  if ((param_4 == '\x02') || (param_4 == '\x01')) {
    FUN_0042e978(param_3,param_2,param_3);
    (**(code **)(*(int *)param_3[9] + 0x74))();
    if (param_4 == '\x01') {
      FUN_00480780(param_1,*(int *)(param_1 + 0x54));
    }
  }
  return;
}


/* ==== 0047f840 FUN_0047f840 ==== */

void FUN_0047f840(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint debug;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_FS_OFFSET;
  int iStackY_15c;
  undefined1 *puStackY_158;
  undefined1 *puStackY_154;
  char *pcVar5;
  int iStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 *local_124;
  undefined4 local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_124 = (undefined4 *)0x0;
  local_120 = 0;
  local_11c = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_8 = (undefined4 *)0x0;
  puStack_138 = &LAB_0047f9fe;
  iStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_13c;
  local_c = 0;
  local_10 = param_2;
  System_TObject_ClassName(*param_1,local_118);
  System__LStrFromString(&local_18,local_118);
  pcVar5 = "LoadPlayer";
  puStackY_154 = (undefined1 *)0x47f8bd;
  System__LStrCatN(&local_14,3);
  puStackY_154 = (undefined1 *)local_14;
  puStackY_158 = (undefined1 *)0x47f8c6;
  debug = Debug();
  puVar1 = puStackY_154;
  puStackY_154 = (undefined1 *)0x47f8d2;
  FUN_0045fa3c(debug,(int)puVar1,2,(int)pcVar5);
  puStackY_154 = (undefined1 *)0x47f8df;
  FUN_00481178(param_2,(int *)&local_11c);
  puStackY_154 = (undefined1 *)0x47f8f3;
  System__LStrCat3((int *)&local_8,(undefined4 *)param_1[0x2e],local_11c);
  puStackY_154 = (undefined1 *)0x47f8fb;
  uVar2 = SysUtils_FileExists((undefined *)local_8);
  if ((char)uVar2 == '\0') {
    puStackY_154 = (undefined1 *)0x47f9b4;
    System__LStrCat3((int *)&local_124,(undefined4 *)"Unable to load: ",local_8);
    puStackY_154 = (undefined1 *)0x47f9c6;
    piVar4 = SysUtils_Exception_Create((int *)&DAT_00407624,'\x01',local_124);
    puStackY_154 = (undefined1 *)0x47f9cb;
    System__RaiseExcept(piVar4);
  }
  else {
    if (param_1[0x30] == 0) {
      puStackY_154 = (undefined1 *)0x47f918;
      iVar3 = TSaveGame_virtual_004((int *)&PTR_TSaveGame_virtual_000_0048aa08,'\x01');
      param_1[0x30] = iVar3;
    }
    puStackY_158 = &LAB_0047f969;
    iStackY_15c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStackY_15c;
    puStackY_154 = &stack0xfffffffc;
    TSaveGame_LoadFromFile((int *)param_1[0x30],(undefined *)local_8);
    piVar4 = (int *)(**(code **)(*(int *)param_1[0x30] + 8))();
    debug = Debug();
    FUN_0045fd98(debug,0x47fa38,piVar4);
    *(undefined4 *)(param_1[0x31] + 0x14) = param_2;
    *in_FS_OFFSET = iStackY_15c;
  }
  *in_FS_OFFSET = (int)pcVar5;
  System__LStrArrayClr((int *)&local_124,3);
  System__LStrArrayClr(&local_18,2);
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0047fa5c TData.SavePlayer ==== */

void TData_SavePlayer(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  undefined *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_114 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_8 = (undefined *)0x0;
  puStack_120 = &LAB_0047fb5c;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  System_TObject_ClassName(*param_1,local_110);
  System__LStrFromString(&local_10,local_110);
  System__LStrCatN((int *)&local_c,3);
  puVar1 = local_c;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  if (param_1[0x30] == 0) {
    System__Assert(" Player = nil: SavePlayer");
  }
  FUN_00481178(*(undefined4 *)(param_1[0x31] + 0x14),(int *)&local_114);
  System__LStrCat3((int *)&local_8,(undefined4 *)param_1[0x2e],local_114);
  FUN_00481104(local_8);
  TSaveGame_SaveToFile((int *)param_1[0x30],local_8);
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "SavePlayer";
  System__LStrClr((int *)&local_114);
  System__LStrArrayClr(&local_10,3);
  return;
}


/* ==== 0047fbd4 FUN_0047fbd4 ==== */

void FUN_0047fbd4(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  int i_val;
  int *in_FS_OFFSET;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined4 *local_128;
  undefined *local_124;
  undefined4 *local_120;
  undefined *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_124 = (undefined *)0x0;
  local_128 = (undefined4 *)0x0;
  local_11c = (undefined *)0x0;
  local_120 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_138 = (undefined1 *)0x47fc0d;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_13c = &LAB_0047fd7b;
  iStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_140;
  local_10 = local_8;
  local_c = 0xb;
  puStack_138 = &stack0xfffffffc;
  System_TObject_ClassName(*param_1,local_118);
  System__LStrFromString(&local_18,local_118);
  pcVar5 = "CreateNewPlayer";
  System__LStrCatN(&local_14,3);
  i_val = local_14;
  uVar1 = Debug();
  FUN_0045fa3c(uVar1,i_val,0,(int)pcVar5);
  i_val = 0;
  while( true ) {
    FUN_00481178(i_val,(int *)&local_120);
    System__LStrCat3((int *)&local_11c,(undefined4 *)param_1[0x2e],local_120);
    uVar1 = SysUtils_FileExists(local_11c);
    if ((char)uVar1 == '\0') break;
    bVar3 = SCARRY4(i_val,1);
    i_val = i_val + 1;
    if (bVar3) {
      System__RunError(uVar1);
    }
  }
  if ((int *)param_1[0x30] != (int *)0x0) {
    System_TObject_Free((int *)param_1[0x30]);
  }
  iVar4 = i_val;
  piVar2 = (int *)FUN_0048c24c((int *)&PTR_TSaveGame_virtual_000_0048aa08,'\x01',local_8,i_val);
  param_1[0x30] = (int)piVar2;
  TSaveGame_ReadInstalledResolution(piVar2);
  FUN_00481178(i_val,(int *)&local_128);
  System__LStrCat3((int *)&local_124,(undefined4 *)param_1[0x2e],local_128);
  TSaveGame_SaveToFile((int *)param_1[0x30],local_124);
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x30] + 8))();
  uVar1 = Debug();
  FUN_0045fd98(uVar1,0x47fdbc,piVar2);
  *(int *)(param_1[0x31] + 0x14) = i_val;
  uVar1 = Debug();
  TDebug_ExitProc(uVar1);
  *in_FS_OFFSET = iVar4;
  System__LStrArrayClr((int *)&local_128,4);
  System__LStrArrayClr(&local_18,2);
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0047fdc8 FUN_0047fdc8 ==== */

void FUN_0047fdc8(int *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  uint debug;
  int *piVar3;
  int *in_FS_OFFSET;
  char *pcVar4;
  int iStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 *local_124;
  int local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_124 = (undefined4 *)0x0;
  local_120 = 0;
  local_11c = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_8 = (undefined4 *)0x0;
  puStack_134 = &LAB_0047ff12;
  iStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_138;
  local_c = 0;
  local_10 = param_2;
  System_TObject_ClassName(*param_1,local_118);
  System__LStrFromString(&local_18,local_118);
  pcVar4 = "DeletePlayer";
  System__LStrCatN(&local_14,3);
  iVar1 = local_14;
  debug = Debug();
  FUN_0045fa3c(debug,iVar1,0,(int)pcVar4);
  FUN_00481178(param_2,(int *)&local_11c);
  System__LStrCat3((int *)&local_8,(undefined4 *)param_1[0x2e],local_11c);
  bVar2 = FUN_004088e4((undefined *)local_8);
  if (!bVar2) {
    System__LStrCat3(&local_120,(undefined4 *)"failed to delete ",local_8);
    iVar1 = local_120;
    debug = Debug();
    TDebug_Message(debug,iVar1);
    System__LStrCat3((int *)&local_124,(undefined4 *)"failed to delete ",local_8);
    piVar3 = SysUtils_Exception_Create((int *)&DAT_00407624,'\x01',local_124);
    System__RaiseExcept(piVar3);
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = (int)pcVar4;
  System__LStrArrayClr((int *)&local_124,3);
  System__LStrArrayClr(&local_18,2);
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0047ff64 TData.DoExit ==== */

void TData_DoExit(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_0047fffe;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,3);
  *(undefined1 *)(param_1 + 0x36) = 1;
  FUN_0044d3f0();
  *in_FS_OFFSET = "DoExit";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0048003c TData.FillRankResults ==== */

void TData_FillRankResults(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  int iVar2;
  int iVar3;
  int i_val;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_158;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 *local_124;
  int local_120 [5];
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_120[0] = 0;
  local_124 = (undefined4 *)0x0;
  local_120[2] = 0;
  local_120[1] = 0;
  local_120[4] = 0;
  local_120[3] = 0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_138 = &LAB_004802dc;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,2);
  if (param_1[0x32] == 0) {
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(local_120 + 3,local_10c);
    pcStack_158 = "FillRankResults";
    System__LStrCatN(local_120 + 4,4);
    System__Assert(local_120[4]);
  }
  iVar4 = 0;
  if (*(char *)(param_1[0x31] + 9) == '\x01') {
    iVar4 = FUN_0048c20c(param_1[0x30]);
    iVar4 = *(int *)(iVar4 + 0x10);
  }
  else if (*(char *)(param_1[0x31] + 9) == '\x02') {
    iVar4 = FUN_0048c22c(param_1[0x30]);
    iVar4 = *(int *)(iVar4 + 0x10);
  }
  i_val = 0;
  do {
    iVar2 = FUN_0048a7dc(param_1[0x32],i_val);
    if (iVar4 == *(int *)(iVar2 + 8)) {
      FUN_0048e0fc(param_1[0x33],iVar4);
      System_TObject_ClassName(*param_1,local_10c);
      System__LStrFromString(local_120 + 1,local_10c);
      System__LStrCatN(local_120 + 2,6);
      System__Assert(local_120[2]);
    }
    iVar2 = FUN_0048a7dc(param_1[0x32],i_val);
    iVar2 = *(int *)(iVar2 + 0xc);
    iVar3 = FUN_0048a7dc(param_1[0x32],i_val);
    iVar2 = FUN_00462c48((int *)&LAB_00462c38,'\x01',*(int *)(iVar3 + 8),iVar2);
    Classes_TList_Add((int *)param_1[0x35],iVar2);
    i_val = i_val + 1;
  } while (i_val != 4);
  i_val = FUN_00462c48((int *)&LAB_00462c38,'\x01',iVar4,*(int *)(param_1[0x32] + 0x10));
  Classes_TList_Add((int *)param_1[0x35],i_val);
  FUN_00410598(param_1[0x35],&LAB_0048002c);
  i_val = 0;
  do {
    iVar2 = FUN_00480390((int)param_1,i_val);
    if (iVar4 == *(int *)(iVar2 + 8)) {
      param_1[0x29] = i_val;
      SysUtils_IntToStr(param_1[0x29],(int *)&local_124);
      System__LStrCat3(local_120,(undefined4 *)"FPlayerPos : ",local_124);
      iVar2 = local_120[0];
      debug = Debug();
      TDebug_Message(debug,iVar2);
    }
    i_val = i_val + 1;
  } while (i_val != 5);
  *in_FS_OFFSET = pcStack_158;
  System__LStrArrayClr((int *)&local_124,6);
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 00480390 FUN_00480390 ==== */

void FUN_00480390(int param_1,int param_2)

{
  Classes_TList_Get(*(undefined4 **)(param_1 + 0xd4),param_2);
  return;
}


/* ==== 004803ac FUN_004803ac ==== */

void FUN_004803ac(int param_1)

{
  undefined4 uVar1;
  
  System__LStrCat3((int *)(param_1 + 0xbc),*(undefined4 **)(param_1 + 0xb8),(undefined4 *)"Menu.hlp"
                  );
  uVar1 = SysUtils_FileExists(*(undefined **)(param_1 + 0xbc));
  if ((char)uVar1 == '\0') {
    System__LStrClr((int *)(param_1 + 0xbc));
    return;
  }
  System__LStrCat3((int *)(*(int *)PTR_DAT_004ab8ac + 0x40),*(undefined4 **)(param_1 + 0xbc),
                   (undefined4 *)">first");
  return;
}


/* ==== 00480428 FUN_00480428 ==== */

undefined4 FUN_00480428(int param_1)

{
  if (*(int *)(param_1 + 0xc0) == 0) {
    return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcc) + 0x30) + 0x10);
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x18) + 0x10);
}


/* ==== 00480448 FUN_00480448 ==== */

void FUN_00480448(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int iVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_14 = 0;
  puStack_124 = (undefined1 *)0x480466;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_128 = &LAB_0048053e;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_10 = local_8;
  local_c = 0xb;
  iVar3 = 0;
  puStack_138 = (undefined1 *)0x480491;
  puStack_124 = &stack0xfffffffc;
  System_TObject_ClassName(*param_1,local_114);
  puStack_138 = (undefined1 *)0x48049f;
  System__LStrFromString(&local_14,local_114);
  puStack_138 = (undefined1 *)0x4804ac;
  System__LStrCat(&local_14,(undefined4 *)".PlayVoice");
  puStack_138 = (undefined1 *)local_14;
  puStack_13c = (undefined1 *)0x4804b5;
  debug = Debug();
  puVar1 = puStack_138;
  puStack_138 = (undefined1 *)0x4804c1;
  FUN_0045fa3c(debug,(int)puVar1,0,iVar3);
  puStack_13c = &LAB_004804fd;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = &stack0xfffffffc;
  FUN_00482950((int *)param_1[0x2c]);
  uVar2 = 1;
  iVar3 = FUN_004807a8((int)param_1);
  FUN_004823ac((int *)param_1[0x2c],local_8,iVar3,(char)uVar2);
  *in_FS_OFFSET = uVar2;
  puStack_13c = (undefined1 *)0x48051b;
  debug = Debug();
  puStack_13c = (undefined1 *)0x480520;
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = puStack_138;
  System__LStrClr(&local_14);
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00480584 FUN_00480584 ==== */

void FUN_00480584(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int *in_FS_OFFSET;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_14 = 0;
  local_c = (undefined4 *)0x0;
  puStack_20 = (undefined1 *)0x4805a3;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_24 = &LAB_00480622;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puStack_20 = &stack0xfffffffc;
  local_10 = FUN_00402c50(param_3);
  uVar2 = FUN_00402ac8();
  if ((int)uVar2 >> 0x1f != extraout_EDX) {
    uVar2 = System__RunError(uVar2);
  }
  FUN_00480b08(uVar2,&local_14);
  iVar1 = local_14;
  System__LStrCatN((int *)&local_c,3);
  FUN_00480448(param_1,local_c);
  *in_FS_OFFSET = iVar1;
  System__LStrClr(&local_14);
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 0048063c FUN_0048063c ==== */

void FUN_0048063c(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_1c = (undefined1 *)0x480656;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_20 = &LAB_004806a1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00480b08(param_3,(int *)&local_10);
  System__LStrCat3((int *)&local_c,local_8,local_10);
  FUN_00480448(param_1,local_c);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004806a8;
  puStack_20 = (undefined1 *)0x4806a0;
  System__LStrArrayClr((int *)&local_10,3);
  return;
}


/* ==== 004806b0 FUN_004806b0 ==== */

void FUN_004806b0(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int *in_FS_OFFSET;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18 [3];
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  local_18[2] = 0;
  local_18[1] = 0;
  local_18[0] = 0;
  puStack_28 = (undefined1 *)0x4806cf;
  local_8 = param_2;
  System__LStrAddRef(param_2);
  puStack_2c = &LAB_00480761;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_28 = &stack0xfffffffc;
  local_18[2] = FUN_00402c50(param_4);
  uVar2 = FUN_00402ac8();
  if ((int)uVar2 >> 0x1f != extraout_EDX) {
    uVar2 = System__RunError(uVar2);
  }
  FUN_00480b08(param_3,local_18 + 1);
  FUN_00480b08(uVar2,local_18);
  iVar1 = local_18[0];
  System__LStrCatN((int *)&local_c,4);
  FUN_00480448(param_1,local_c);
  *in_FS_OFFSET = iVar1;
  System__LStrArrayClr(local_18,2);
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 00480780 FUN_00480780 ==== */

void FUN_00480780(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = FUN_00480428(param_1);
  FUN_004821f0(*(int **)(param_1 + 0xb0),param_2,iVar1,cVar2);
  return;
}


/* ==== 004807a8 FUN_004807a8 ==== */

undefined4 FUN_004807a8(int param_1)

{
  if (*(int *)(param_1 + 0xc0) == 0) {
    return *(undefined4 *)(*(int *)(*(int *)(DAT_004ad2bc + 0xcc) + 0x30) + 0x14);
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x18) + 0x14);
}


/* ==== 004807cc FUN_004807cc ==== */

void FUN_004807cc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = (undefined1 *)0x4807de;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_14 = &LAB_0048081b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = 0;
  puStack_10 = &stack0xfffffffc;
  iVar1 = FUN_00480428(param_1);
  FUN_004823ac(*(int **)(param_1 + 0xb0),local_8,iVar1,(char)uVar2);
  *in_FS_OFFSET = uVar2;
  puStack_14 = &LAB_00480822;
  uStack_18 = 0x48081a;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00480828 TData.ReadDefGraphics ==== */

void TData_ReadDefGraphics(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_0048098e;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  FUN_00481698(param_1[0x20],0x4809cc);
  FUN_00481698(param_1[0x1f],0x4809dc);
  FUN_00481698(param_1[0x18],0x4809ec);
  FUN_00481698(param_1[0x17],0x4809f8);
  FUN_00481698(param_1[0x1c],0x480a08);
  FUN_00481698(param_1[0x22],0x480a18);
  FUN_00481698(param_1[0x19],0x480a28);
  FUN_00481698(param_1[0x23],0x480a38);
  FUN_00481698(param_1[0x1a],0x480a48);
  FUN_00481698(param_1[0x1d],0x480a58);
  FUN_00481698(param_1[0x21],0x480a68);
  FUN_00481698(param_1[0x27],0x480a78);
  FUN_00481698(param_1[0x26],0x480a88);
  FUN_00481698(param_1[0x16],0x480a94);
  FUN_00481698(param_1[0x1e],0x480aa4);
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "ReadDefGraphics";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 00480ae4 FUN_00480ae4 ==== */

undefined4 FUN_00480ae4(int param_1)

{
  if (param_1 == 0x200000) {
    return 0;
  }
  if (param_1 != 0x800000) {
    if (param_1 + -0x1000000 != 0) {
      return CONCAT31((int3)((uint)(param_1 + -0x1000000) >> 8),1);
    }
    return 2;
  }
  return 1;
}


/* ==== 00480b08 FUN_00480b08 ==== */

void FUN_00480b08(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00480b60;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_1 < 10) {
    puStack_14 = &stack0xfffffffc;
    SysUtils_IntToStr(param_1,(int *)&local_8);
    System__LStrCat3(param_2,(undefined4 *)&DAT_00480b74,local_8);
  }
  else {
    SysUtils_IntToStr(param_1,param_2);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00480b67;
  puStack_18 = (undefined1 *)0x480b5f;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00480b78 TData.GetWavTimeFactor ==== */

void TData_GetWavTimeFactor(void)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_00480c2b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x480b97;
  debug = Debug();
  puStack_24 = (undefined1 *)0x480ba7;
  TDebug_InProc(debug,(undefined4 *)"GetWavTimeFactor",2);
  puStack_24 = (undefined1 *)0x480bc1;
  System__LStrCat3((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
                   (undefined4 *)"menu.ini");
  puStack_24 = (undefined1 *)0x480bd0;
  local_c = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_10);
  puStack_28 = &LAB_00480c0e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 8))(local_c,"PARAMETERS","WavTimeFactor");
  *in_FS_OFFSET = 0x2e;
  puStack_28 = &LAB_00480c15;
  uStack_2c = 0x480c0d;
  System_TObject_Free(local_c);
  return;
}


/* ==== 00480c9c TData.ReadAvailableTextureMemory ==== */

void TData_ReadAvailableTextureMemory(void)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_00480d4f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x480cbb;
  debug = Debug();
  puStack_24 = (undefined1 *)0x480ccb;
  TDebug_InProc(debug,(undefined4 *)"ReadAvailableTextureMemory",2);
  puStack_24 = (undefined1 *)0x480ce5;
  System__LStrCat3((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
                   (undefined4 *)"game.ini");
  puStack_24 = (undefined1 *)0x480cf4;
  local_c = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_10);
  puStack_28 = &LAB_00480d32;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 8))(local_c,"GFX OPTIONS","AVAILABLE_TEXTURE_MEMORY");
  *in_FS_OFFSET = 0;
  puStack_28 = &LAB_00480d39;
  uStack_2c = 0x480d31;
  System_TObject_Free(local_c);
  return;
}


/* ==== 00480dd4 TData.ReadTextureMemory ==== */

void TData_ReadTextureMemory(void)

{
  uint debug;
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int *local_c;
  undefined1 local_5;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_00480e8c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x480df3;
  debug = Debug();
  puStack_24 = (undefined1 *)0x480e03;
  TDebug_InProc(debug,(undefined4 *)"ReadTextureMemory",2);
  puStack_24 = (undefined1 *)0x480e1d;
  System__LStrCat3((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
                   (undefined4 *)"game.ini");
  puStack_24 = (undefined1 *)0x480e2c;
  local_c = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_10);
  puStack_28 = &LAB_00480e6f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar1 = (**(code **)(*local_c + 8))(local_c,"GFX OPTIONS","CUSTOM_TEXTURE_MEMORY");
  uVar2 = FUN_00480ae4(iVar1);
  local_5 = (undefined1)uVar2;
  *in_FS_OFFSET = 0;
  puStack_28 = &LAB_00480e76;
  uStack_2c = 0x480e6e;
  System_TObject_Free(local_c);
  return;
}


/* ==== 00480f04 FUN_00480f04 ==== */

uint FUN_00480f04(int param_1)

{
  uint uVar1;
  uint uVar2;
  int extraout_EDX;
  
  FUN_00420bd4();
  FUN_00420bd4();
  if (SBORROW4(100,param_1)) {
    System__RunError(100 - param_1);
  }
  FUN_00420be4();
  uVar1 = FUN_00402ad4();
  uVar2 = 100 - uVar1;
  if ((int)uVar2 >> 0x1f != -(uint)(100 < uVar1) - extraout_EDX) {
    uVar2 = System__RunError(uVar2);
  }
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  if (100 < (int)uVar2) {
    uVar2 = 100;
  }
  return uVar2;
}


/* ==== 00480fcc FUN_00480fcc ==== */

uint FUN_00480fcc(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  
  FUN_00420bd4();
  FUN_00420bd4();
  if (SBORROW4(100,param_1)) {
    System__RunError(100 - param_1);
  }
  FUN_00420be4();
  iVar1 = FUN_00402ad4();
  uVar2 = -iVar1;
  iVar3 = extraout_EDX + (uint)(iVar1 != 0);
  iVar1 = -iVar3;
  if (SBORROW4(0,iVar3)) {
    uVar2 = System__RunError(uVar2);
    iVar1 = extraout_EDX_00;
  }
  if ((int)uVar2 >> 0x1f != iVar1) {
    uVar2 = System__RunError(uVar2);
  }
  if (-100 < (int)uVar2) {
    uVar2 = 0xffffff9c;
  }
  if ((int)uVar2 < -4000) {
    uVar2 = 0xfffff060;
  }
  return uVar2;
}


/* ==== 00481090 FUN_00481090 ==== */

void FUN_00481090(int param_1,int *param_2)

{
  int local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  local_1c = param_1 / 60000;
  local_18 = 0;
  local_14 = (param_1 / 1000) % 0x3c;
  local_10 = 0;
  local_c = (param_1 / 10) % 100;
  local_8 = 0;
  SysUtils_Format(*(byte **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0xc),&local_1c,2,param_2);
  return;
}


/* ==== 00481104 FUN_00481104 ==== */

void FUN_00481104(undefined *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined *local_8;
  
  puStack_10 = (undefined1 *)0x481114;
  local_8 = param_1;
  System__LStrAddRef((int)param_1);
  puStack_14 = &LAB_0048116b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  uVar1 = FUN_004087b4(local_8);
  if ((uVar1 != 0xffffffff) && ((uVar1 & 1) == 1)) {
    FUN_004087c8(local_8,uVar1 & 0xfffffffe);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00481172;
  puStack_14 = (undefined1 *)0x48116a;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00481178 FUN_00481178 ==== */

void FUN_00481178(undefined4 param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004811cf;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  SysUtils_IntToStr(param_1,&local_8);
  System__LStrCatN(param_2,4);
  *in_FS_OFFSET = &DAT_00481204;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00481208 FUN_00481208 ==== */

void FUN_00481208(undefined *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint local_10;
  byte *local_c;
  undefined *local_8;
  
  local_c = (byte *)0x0;
  local_10 = 0;
  puStack_18 = (undefined1 *)0x48121d;
  local_8 = param_1;
  System__LStrAddRef((int)param_1);
  puStack_1c = &LAB_0048127b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00408a30(local_8,(int *)&local_10);
  iVar2 = 8;
  uVar1 = local_10;
  if (*(uint *)(local_10 - 4) < 9) {
    uVar1 = System__RunError(local_10);
    iVar2 = extraout_EDX;
  }
  System__LStrFromChar
            ((int *)&local_c,
             CONCAT31((int3)((uint)(iVar2 + 1) >> 8),*(undefined1 *)((uVar1 - 1) + iVar2 + 1)));
  FUN_00408618(local_c);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00481282;
  puStack_1c = (undefined1 *)0x48127a;
  System__LStrArrayClr((int *)&local_10,3);
  return;
}


/* ==== 0048128c FUN_0048128c ==== */

void FUN_0048128c(undefined4 *param_1,int *param_2)

{
  undefined4 local_5c;
  undefined1 local_58;
  uint local_54;
  undefined1 local_50;
  uint local_4c;
  undefined1 local_48;
  uint local_44;
  undefined1 local_40;
  uint local_3c;
  undefined1 local_38;
  uint local_34;
  undefined1 local_30;
  uint local_2c;
  undefined1 local_28;
  uint local_24;
  undefined1 local_20;
  uint local_1c;
  undefined1 local_18;
  uint local_14;
  undefined1 local_10;
  uint local_c;
  undefined1 local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    System__LStrAsg(param_2,(undefined4 *)"0,0,0,0,0,0,0,0,0,0,0");
  }
  else {
    local_5c = *param_1;
    local_58 = 0;
    local_54 = (uint)*(ushort *)(param_1 + 1);
    local_50 = 0;
    local_4c = (uint)*(ushort *)((int)param_1 + 6);
    local_48 = 0;
    local_44 = (uint)*(byte *)(param_1 + 2);
    local_40 = 0;
    local_3c = (uint)*(byte *)((int)param_1 + 9);
    local_38 = 0;
    local_34 = (uint)*(byte *)((int)param_1 + 10);
    local_30 = 0;
    local_2c = (uint)*(byte *)((int)param_1 + 0xb);
    local_28 = 0;
    local_24 = (uint)*(byte *)(param_1 + 3);
    local_20 = 0;
    local_1c = (uint)*(byte *)((int)param_1 + 0xd);
    local_18 = 0;
    local_14 = (uint)*(byte *)((int)param_1 + 0xe);
    local_10 = 0;
    local_c = (uint)*(byte *)((int)param_1 + 0xf);
    local_8 = 0;
    SysUtils_Format((byte *)"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&local_5c,10,param_2);
  }
  return;
}


/* ==== 00481394 FUN_00481394 ==== */

void FUN_00481394(int *param_1)

{
  LPCSTR pCVar1;
  DWORD dwLen;
  LPVOID lpData;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  DWORD *lpdwHandle;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  uint local_3c;
  undefined1 local_38;
  uint local_34;
  undefined1 local_30;
  uint local_2c;
  undefined1 local_28;
  uint local_24;
  undefined1 local_20;
  undefined *local_1c;
  undefined *local_18;
  DWORD handle;
  LPVOID local_10;
  LPVOID block;
  int *local_8;
  
  puStack_4c = &stack0xfffffffc;
  local_1c = (undefined *)0x0;
  local_18 = (undefined *)0x0;
  puStack_50 = &LAB_004814d0;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  lpdwHandle = &handle;
  local_8 = param_1;
  FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_18);
  pCVar1 = System__LStrToPChar(local_18);
  uStack_60 = 0x4813d7;
  dwLen = GetFileVersionInfoSizeA(pCVar1,lpdwHandle);
  if (dwLen != 0) {
    lpData = (LPVOID)System__GetMem(dwLen);
    uStack_60 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_60;
    block = lpData;
    FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_1c);
    pCVar1 = System__LStrToPChar(local_1c);
    BVar2 = GetFileVersionInfoA(pCVar1,handle,dwLen,lpData);
    if (BVar2 != 0) {
      BVar2 = VerQueryValueA(block,"\\",&local_10,&handle);
      if (BVar2 != 0) {
        local_3c = *(uint *)((int)local_10 + 0x10) >> 0x10;
        local_38 = 0;
        local_34 = *(uint *)((int)local_10 + 0x10) & 0xffff;
        local_30 = 0;
        local_2c = *(uint *)((int)local_10 + 0x14) >> 0x10;
        local_28 = 0;
        local_24 = *(uint *)((int)local_10 + 0x14) & 0xffff;
        local_20 = 0;
        SysUtils_Format((byte *)"Version %d/%d/%d/%d",&local_3c,3,local_8);
      }
    }
    *in_FS_OFFSET = uStack_60;
    System__FreeMem((int)block);
    return;
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004814d7;
  puStack_50 = (undefined1 *)0x4814cf;
  System__LStrArrayClr((int *)&local_1c,2);
  return;
}


/* ==== 00481500 FUN_00481500 ==== */

bool FUN_00481500(uint param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  BOOL BVar2;
  DWORD iModeNum;
  bool bVar3;
  bool bVar4;
  DEVMODEA *lpDevMode;
  DEVMODEA devmode;
  ushort local_8;
  ushort local_6;
  
  bVar3 = false;
  iModeNum = 0;
  local_8 = param_3;
  local_6 = param_2;
  while( true ) {
    if (bVar3 != false) {
      return bVar3;
    }
    lpDevMode = &devmode;
    if ((int)iModeNum < 0) {
      System__RunError((uint)lpDevMode);
    }
    BVar2 = EnumDisplaySettingsA((LPCSTR)0x0,iModeNum,lpDevMode);
    if (BVar2 == 0) break;
    uVar1 = param_1 & 0xffff;
    if (((uVar1 == devmode.dmPelsWidth) && (uVar1 = (uint)local_6, uVar1 == devmode.dmPelsHeight))
       && (uVar1 = (uint)local_8, uVar1 == devmode.dmBitsPerPel)) {
      devmode.dmFields = 0x1c0000;
      uVar1 = ChangeDisplaySettingsA(&devmode,0);
      bVar3 = uVar1 == 0;
    }
    if ((bVar3 == false) && (bVar4 = SCARRY4(iModeNum,1), iModeNum = iModeNum + 1, bVar4)) {
      System__RunError(uVar1);
    }
  }
  return false;
}


/* ==== 00481588 FUN_00481588 ==== */

bool FUN_00481588(void)

{
  LONG LVar1;
  
  LVar1 = ChangeDisplaySettingsA((DEVMODEA *)0x0,0);
  return LVar1 == 0;
}


/* ==== 0048159c FUN_0048159c ==== */

void FUN_0048159c(byte *param_1)

{
  uint *puVar1;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint *local_14;
  byte *local_10;
  uint *local_c;
  byte *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (byte *)0x0;
  local_14 = (uint *)0x0;
  puStack_24 = (undefined1 *)0x4815b3;
  local_8 = param_1;
  System__LStrAddRef((int)param_1);
  puStack_28 = &LAB_00481623;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  i_val = FUN_00402990();
  if (0 < i_val) {
    j = 1;
    do {
      FUN_004029f0(j,(int *)&local_10);
      FUN_004081f0(local_10,(int *)&local_c);
      puVar1 = local_c;
      FUN_004081f0(local_8,(int *)&local_14);
      System__LStrCmp(puVar1,local_14);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0048162a;
  puStack_28 = (undefined1 *)0x481622;
  System__LStrArrayClr((int *)&local_14,4);
  return;
}


/* ==== 00481634 FUN_00481634 ==== */

undefined4 FUN_00481634(undefined4 param_1)

{
  bool bVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 unaff_EBX;
  undefined4 uVar2;
  
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  bVar1 = FUN_00481500(CONCAT22((short)((uint)param_1 >> 0x10),800),600,0x18);
  if (!bVar1) {
    bVar1 = FUN_00481500(CONCAT22(extraout_var,800),600,0x10);
    if (!bVar1) {
      bVar1 = FUN_00481500(CONCAT22(extraout_var_00,800),600,0xf);
      if (!bVar1) {
        bVar1 = FUN_00481500(CONCAT22(extraout_var_01,800),600,0x20);
        if (!bVar1) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}


/* ==== 00481698 FUN_00481698 ==== */

void FUN_00481698(int param_1,int param_2)

{
  undefined *puVar1;
  uint debug;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 *local_30;
  undefined4 *puVar7;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  i_val = 5;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  local_1c = (undefined4 *)0x4816b7;
  System__LStrAddRef(param_2);
  puVar1 = PTR_DAT_004ab694;
  local_20 = (undefined4 *)&LAB_0048190e;
  local_24 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined4 *)&stack0xffffffe8;
  puVar7 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x4816e0;
  local_1c = (undefined4 *)&stack0xfffffffc;
  debug = Debug();
  local_30 = (undefined4 *)0x4816f0;
  FUN_0045fa3c(debug,0x481928,0,(int)puVar7);
  local_30 = (undefined4 *)0x4816fc;
  piVar2 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX);
  local_30 = (undefined4 *)0x48170b;
  piVar3 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX_00);
  puStack_34 = &LAB_004818da;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_30 = (undefined4 *)&stack0xfffffffc;
  System__LStrCatN((int *)&local_1c,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),local_1c,piVar2);
  TGDIButtonDefinition_SetWidth(param_1,piVar2[0x23]);
  TGDIButtonDefinition_SetHeight(param_1,piVar2[0x10]);
  piVar4 = (int *)FUN_00467d48(param_1,0);
  (**(code **)(*piVar4 + 8))(piVar4,piVar2);
  puVar6 = &DAT_00481944;
  puVar5 = &DAT_0048195c;
  i_val = param_2;
  System__LStrCatN((int *)&local_20,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),local_20,piVar2);
  piVar4 = (int *)FUN_00467d48(param_1,1);
  (**(code **)(*piVar4 + 8))(piVar4,piVar2,*piVar4,puVar5,puVar6,i_val);
  puVar6 = &DAT_00481944;
  puVar5 = &DAT_00481968;
  i_val = param_2;
  System__LStrCatN((int *)&local_24,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),local_24,piVar2);
  piVar4 = (int *)FUN_00467d48(param_1,3);
  (**(code **)(*piVar4 + 8))(piVar4,piVar2,*piVar4,puVar5,puVar6,i_val);
  puVar6 = &DAT_00481944;
  puVar5 = &DAT_00481974;
  i_val = param_2;
  System__LStrCatN((int *)&local_28,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),local_28,piVar2);
  piVar4 = (int *)FUN_00467d48(param_1,4);
  (**(code **)(*piVar4 + 8))(piVar4,piVar2,*piVar4,puVar5,puVar6,i_val);
  puVar6 = &DAT_00481944;
  puVar5 = &DAT_00481980;
  i_val = param_2;
  System__LStrCatN((int *)&stack0xffffffd4,3);
  FUN_00489eb8(*(int **)(*(int *)puVar1 + 0xb4),puVar7,piVar2);
  piVar4 = (int *)FUN_00467d48(param_1,2);
  (**(code **)(*piVar4 + 8))(piVar4,piVar2,*piVar4,puVar5,puVar6,i_val);
  puVar6 = &DAT_00481944;
  puVar5 = &DAT_0048198c;
  System__LStrCatN((int *)&local_30,3);
  FUN_00489760(*(int **)(*(int *)puVar1 + 0xb4),local_30,piVar3);
  piVar4 = (int *)TGDIButtonDefinition_GetUpLink(param_1,6);
  (**(code **)(*piVar4 + 8))(piVar4,piVar3,*piVar4,puVar5,puVar6,param_2);
  *in_FS_OFFSET = puVar5;
  System_TObject_Free(piVar2);
  System_TObject_Free(piVar3);
  return;
}


/* ==== 00481990 FUN_00481990 ==== */

void FUN_00481990(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int *piVar4;
  int *piVar5;
  int local_2c [4];
  int local_1c [4];
  int *local_c;
  int *local_8;
  
  iVar1 = System__AsClass(*(int **)(*(int *)(param_2 + 300) + 0xc),(int)&LAB_00454aa4);
  local_8 = (int *)FUN_00456800(iVar1,extraout_EDX,extraout_ECX);
  piVar4 = (int *)0x0;
  uVar2 = System__IsClass(param_3,(int)&PTR_TControl_virtual_000_0044e5dc);
  if ((char)uVar2 == '\0') {
    uVar2 = System__IsClass(param_3,(int)&PTR_TControl_virtual_000_004638d0);
    if ((char)uVar2 == '\0') {
      System__Assert("CopyBackGroundOntoPanel : aDestImg is not TImage or TGDIGraphic");
    }
    else {
      local_c = (int *)System__AsClass(param_3,(int)&PTR_TControl_virtual_000_004638d0);
      iVar1 = 0x18;
      piVar4 = (int *)System__AsClass(*(int **)(local_c[0x4b] + 0xc),(int)&LAB_00454aa4);
      FUN_00457194(piVar4,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),iVar1);
      iVar1 = System__AsClass(*(int **)(local_c[0x4b] + 0xc),(int)&LAB_00454aa4);
      piVar4 = (int *)FUN_00456800(iVar1,extraout_EDX_01,extraout_ECX_01);
      TControl_SetWidth(local_c,*(undefined4 *)(param_1 + 0x38));
      TControl_SetHeight(local_c,*(undefined4 *)(param_1 + 0x3c));
    }
  }
  else {
    iVar1 = System__AsClass(param_3,(int)&PTR_TControl_virtual_000_0044e5dc);
    piVar4 = (int *)FUN_0044fd50(iVar1,extraout_EDX_00,extraout_ECX_00);
  }
  uVar3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c);
  if (SCARRY4(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x3c))) {
    uVar3 = System__RunError(uVar3);
  }
  piVar5 = local_1c;
  iVar1 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38);
  if (SCARRY4(*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x38))) {
    System__RunError((uint)piVar5);
    iVar1 = extraout_ECX_02;
  }
  Classes_Rect(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),iVar1,piVar5,uVar3);
  piVar5 = local_1c;
  Classes_Rect(0,0,*(undefined4 *)(param_1 + 0x38),local_2c,*(undefined4 *)(param_1 + 0x3c));
  FUN_00418f14(piVar4,local_2c,local_8,piVar5);
  FUN_0042e988(param_3,extraout_EDX_02,extraout_ECX_03);
  return;
}


/* ==== 00481c68 FUN_00481c68 ==== */

void FUN_00481c68(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  int *local_8;
  
  if (param_2 != '\0') {
    puStackY_24 = (undefined1 *)0x481c7a;
    local_8 = param_3;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  puStackY_24 = (undefined1 *)0x481c89;
  local_8 = param_3;
  FUN_004058c0(param_3);
  puStackY_28 = &LAB_00481cc1;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  System_TObject_Create(param_1,'\0',extraout_ECX_00);
  FUN_00405878(param_1 + 1,local_8);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_00481cc8;
  puStackY_28 = (undefined1 *)0x481cc0;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 00481ce4 TDaviSoundBuffer.Destroy ==== */

void TDaviSoundBuffer_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  if (piVar1[1] != 0) {
    (**(code **)(*(int *)piVar1[1] + 0x48))();
    System__IntfClear(piVar1 + 1);
  }
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00481d24 TDaviSoundBuffer.Create ==== */

void TDaviSoundBuffer_Create(int *param_1,char param_2,int param_3,int *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  uint debug;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_134;
  undefined1 *puStackY_130;
  undefined1 *puStackY_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  if (param_2 != '\0') {
    puStackY_12c = (undefined1 *)0x481d44;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_fffffed8,
                                         in_stack_fffffedc);
    param_3 = extraout_ECX;
  }
  puStackY_12c = (undefined1 *)0x481d52;
  System__LStrAddRef((int)param_5);
  puStackY_130 = &LAB_00481e0d;
  uStackY_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_134;
  puStackY_12c = &stack0xfffffffc;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  FUN_0046bbec(param_4);
  param_1[5] = param_3;
  System__LStrAsg(param_1 + 3,param_5);
  piVar2 = TDaviWave_virtual_02c((int *)&PTR_TPersistent_virtual_000_00453f9c,'\x01',(int *)0x0);
  param_1[4] = (int)piVar2;
  iVar3 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[7] = iVar3;
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "Create";
  System__LStrArrayClr(&local_c,2);
  System__LStrClr((int *)&param_5);
  return;
}


/* ==== 00481e54 TSoundManager.Destroy ==== */

void TSoundManager_Destroy(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint debug;
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
  puStack_118 = (undefined1 *)0x481e6c;
  piVar2 = System__BeforeDestruction(param_1,param_2);
  puStack_11c = &LAB_00481f24;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  System_TObject_ClassName(*piVar2,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  TObject_Destroy(piVar2,extraout_DL & 0xfc);
  FUN_004825e4((int)piVar2);
  FUN_004827d8((int)piVar2);
  SysUtils_FreeAndNil(piVar2 + 7);
  SysUtils_FreeAndNil(piVar2 + 4);
  System__IntfClear(piVar2 + 6);
  FUN_0046bd20();
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "Destroy";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 00481f5c TDaviSoundBuffer.StopSoundBuffer ==== */

void TDaviSoundBuffer_StopSoundBuffer(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint debug;
  int *piVar3;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_124 = &LAB_00482070;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puStack_12c = (undefined1 *)0x481f90;
  local_8 = param_2;
  System_TObject_ClassName(*param_1,local_110);
  puStack_12c = (undefined1 *)0x481f9e;
  System__LStrFromString(&local_10,local_110);
  puStack_12c = (undefined1 *)local_10;
  puStack_130 = &DAT_00482088;
  pcStack_134 = "StopSoundBuffer";
  puStack_138 = (undefined4 *)0x481fb8;
  System__LStrCatN((int *)&local_c,3);
  puStack_138 = local_c;
  puStack_13c = (undefined1 *)0x481fc1;
  debug = Debug();
  puVar2 = puStack_138;
  puStack_138 = (undefined4 *)0x481fcd;
  TDebug_InProc(debug,puVar2,0);
  puStack_13c = &LAB_0048202b;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  iVar1 = *(int *)(param_1[7] + 8);
  i_val = iVar1 + -1;
  puStack_138 = (undefined4 *)&stack0xfffffffc;
  if (SBORROW4(iVar1,1)) {
    puStack_138 = (undefined4 *)&stack0xfffffffc;
    System__RunError(param_1[7]);
  }
  if (-1 < i_val) {
    do {
      piVar3 = (int *)Classes_TList_Get((undefined4 *)param_1[7],i_val);
      if (piVar3 == local_8) {
        (**(code **)(*(int *)piVar3[1] + 0x48))();
        Classes_TList_Delete((int *)param_1[7],i_val);
        System_TObject_Free(piVar3);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_140;
  puStack_138 = (undefined4 *)0x482050;
  debug = Debug();
  puStack_138 = (undefined4 *)0x482055;
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = pcStack_134;
  puStack_12c = &LAB_00482077;
  puStack_130 = (undefined *)0x48206f;
  System__LStrArrayClr(&local_10,2);
  return;
}


/* ==== 004820d0 TDaviSoundBuffer.StartMusic ==== */

void TDaviSoundBuffer_StartMusic(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int *local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_110 = (int *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_004821bf;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,0);
  uVar2 = FUN_00482750((int)param_1);
  if ((char)uVar2 != '\0') {
    FUN_0046bd3c(param_1[4],(int *)&local_110);
    FUN_00405878(param_1 + 6,local_110);
    FUN_00482830(param_1,param_2);
    FUN_0046bdc4(param_1[4],(int *)param_1[6]);
    (**(code **)(*(int *)param_1[6] + 0x30))();
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = "StartMusic";
  System__IntfClear((int *)&local_110);
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004821f0 FUN_004821f0 ==== */

void FUN_004821f0(int *param_1,int param_2,int param_3,char param_4)

{
  uint debug;
  int iVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int *in_FS_OFFSET;
  char *pcVar2;
  int iStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  char local_10;
  undefined1 local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_12c = 0;
  local_24 = 0;
  local_28 = 0;
  local_8 = (int *)0x0;
  puStack_140 = &LAB_00482368;
  iStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_144;
  local_20 = *(undefined4 *)(param_2 + 0x24);
  local_1c = 0xb;
  local_14 = 0;
  local_10 = param_4;
  local_c = 1;
  local_18 = param_3;
  System_TObject_ClassName(*param_1,local_128);
  System__LStrFromString(&local_28,local_128);
  pcVar2 = "PlayWave";
  System__LStrCatN(&local_24,3);
  iVar1 = local_24;
  debug = Debug();
  FUN_0045fa3c(debug,iVar1,0,(int)pcVar2);
  FUN_00482770((int)param_1,extraout_EDX,extraout_ECX);
  if (*PTR_DAT_004ab5d8 != '\0') {
    FUN_0046bd3c(param_2,(int *)&local_8);
    if (local_8 != (int *)0x0) {
      FUN_0046bdc4(param_2,local_8);
      FUN_00480fcc(param_3);
      (**(code **)(*local_8 + 0x3c))();
      iVar1 = FUN_00481c68((int *)&DAT_00481c3c,'\x01',local_8);
      SysUtils_IntToStr(iVar1,&local_12c);
      System__LStrCatN((int *)(iVar1 + 8),3);
      Classes_TList_Add((int *)param_1[7],iVar1);
      (**(code **)(*local_8 + 0x30))();
      if (param_4 != '\0') {
        FUN_00482a08((int)param_1,iVar1);
      }
      param_1[2] = iVar1;
    }
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = (int)pcVar2;
  System__LStrClr(&local_12c);
  System__LStrArrayClr(&local_28,2);
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 004823ac FUN_004823ac ==== */

void FUN_004823ac(int *param_1,undefined4 *param_2,int param_3,char param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  uint debug;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  char *pcVar5;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_12c;
  undefined *local_128;
  undefined *local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 local_14;
  undefined4 *local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_12c = 0;
  local_128 = (undefined *)0x0;
  local_124 = (undefined *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_10 = (undefined4 *)0x0;
  puStack_13c = (undefined1 *)0x4823e4;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_140 = &LAB_0048257c;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_18 = local_8;
  local_14 = 0xb;
  puStack_13c = &stack0xfffffffc;
  System_TObject_ClassName(*param_1,local_120);
  System__LStrFromString(&local_20,local_120);
  pcVar5 = "PlayWaveFromFile";
  puStack_15c = (undefined1 *)0x482437;
  System__LStrCatN(&local_1c,3);
  puStack_15c = (undefined1 *)local_1c;
  puStack_160 = (undefined1 *)0x482440;
  debug = Debug();
  puVar2 = puStack_15c;
  puStack_15c = (undefined1 *)0x48244c;
  FUN_0045fa3c(debug,(int)puVar2,0,(int)pcVar5);
  puStack_15c = (undefined1 *)0x48245c;
  System__LStrCat3((int *)&local_10,local_8,(undefined4 *)&DAT_004825c0);
  puStack_15c = (undefined1 *)0x48246a;
  local_c = TDaviWave_virtual_02c((int *)&PTR_TPersistent_virtual_000_00453f9c,'\x01',(int *)0x0);
  bVar1 = false;
  puStack_160 = &LAB_00482530;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  puStack_15c = &stack0xfffffffc;
  System__LStrCat3((int *)&local_124,(undefined4 *)param_1[3],local_10);
  uVar3 = SysUtils_FileExists(local_124);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00463388(param_1[5],(undefined *)local_10);
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_00462f5c((int *)param_1[5],(undefined *)local_10,(uint)local_c);
      bVar1 = true;
    }
  }
  else {
    System__LStrCat3((int *)&local_128,(undefined4 *)param_1[3],local_10);
    uVar3 = FUN_00454340((uint)local_c,local_128);
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),param_4);
    FUN_004821f0(param_1,(int)local_c,param_3,param_4);
  }
  else {
    System__LStrCat3(&local_12c,(undefined4 *)"Unable to load: ",local_10);
    iVar4 = local_12c;
    debug = Debug();
    uVar3 = 0x48251a;
    FUN_0045fe38(debug,iVar4);
  }
  *in_FS_OFFSET = uVar3;
  puStack_160 = &LAB_00482537;
  uStack_164 = 0x48252f;
  System_TObject_Free(local_c);
  return;
}


/* ==== 004825e4 FUN_004825e4 ==== */

void FUN_004825e4(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x48))();
  }
  return;
}


/* ==== 004825f8 TDaviSoundBuffer.LoadMusic ==== */

void TDaviSoundBuffer_LoadMusic(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint debug;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_114 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_8 = (undefined4 *)0x0;
  puStack_120 = &LAB_004826e9;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  System_TObject_ClassName(*param_1,local_110);
  System__LStrFromString(&local_10,local_110);
  System__LStrCatN((int *)&local_c,3);
  puVar2 = local_c;
  debug = Debug();
  TDebug_InProc(debug,puVar2,2);
  System__LStrCat3((int *)&local_8,(undefined4 *)param_1[3],(undefined4 *)"menumsc.wav");
  uVar3 = SysUtils_FileExists((undefined *)local_8);
  if ((char)uVar3 == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    System__LStrCat3(&local_114,(undefined4 *)"unable to load music : ",local_8);
    iVar1 = local_114;
    debug = Debug();
    FUN_0045fe38(debug,iVar1);
  }
  else {
    FUN_00454340(param_1[4],(undefined *)local_8);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  *in_FS_OFFSET = "LoadMusic";
  System__LStrClr(&local_114);
  System__LStrArrayClr(&local_10,3);
  return;
}


/* ==== 00482750 FUN_00482750 ==== */

undefined4 FUN_00482750(int param_1)

{
  if ((*(char *)(param_1 + 0x20) != '\0') && (*PTR_DAT_004ab5d8 != '\0')) {
    return CONCAT31((int3)((uint)PTR_DAT_004ab5d8 >> 8),1);
  }
  return 0;
}


/* ==== 00482768 FUN_00482768 ==== */

undefined4 FUN_00482768(void)

{
  return CONCAT31((int3)((uint)PTR_DAT_004ab5d8 >> 8),*PTR_DAT_004ab5d8);
}


/* ==== 00482770 FUN_00482770 ==== */

void FUN_00482770(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int i_val;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 0x1c) + 8);
  i_val = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    System__RunError(*(uint *)(param_1 + 0x1c));
  }
  if (-1 < i_val) {
    do {
      piVar2 = (int *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x1c),i_val);
      (**(code **)(*(int *)piVar2[1] + 0x24))();
      if ((param_3 & 1) == 0) {
        Classes_TList_Delete(*(int **)(param_1 + 0x1c),i_val);
        if (piVar2 == *(int **)(param_1 + 4)) {
          FUN_00482a08(param_1,0);
        }
        System_TObject_Free(piVar2);
      }
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 004827d8 FUN_004827d8 ==== */

void FUN_004827d8(int param_1)

{
  int iVar1;
  int *piVar2;
  int i_val;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 0x1c) + 8);
  i_val = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    System__RunError(*(uint *)(param_1 + 0x1c));
  }
  if (-1 < i_val) {
    do {
      piVar2 = (int *)Classes_TList_Get(*(undefined4 **)(param_1 + 0x1c),i_val);
      (**(code **)(*(int *)piVar2[1] + 0x48))();
      Classes_TList_Delete(*(int **)(param_1 + 0x1c),i_val);
      System_TObject_Free(piVar2);
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  FUN_00482a08(param_1,0);
  return;
}


/* ==== 00482830 FUN_00482830 ==== */

void FUN_00482830(int *param_1,int param_2)

{
  int iVar1;
  uint debug;
  undefined4 uVar2;
  int *in_FS_OFFSET;
  char *pcVar3;
  int iStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_00482902;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_8 = 0;
  local_c = param_2;
  System_TObject_ClassName(*param_1,local_114);
  System__LStrFromString(&local_14,local_114);
  pcVar3 = "SetMusicVolume";
  System__LStrCatN(&local_10,3);
  iVar1 = local_10;
  debug = Debug();
  FUN_0045fa3c(debug,iVar1,0,(int)pcVar3);
  uVar2 = FUN_00482768();
  if (((char)uVar2 != '\0') && (param_1[6] != 0)) {
    debug = Debug();
    TDebug_Message(debug,0x482940);
    FUN_00480fcc(param_2);
    (**(code **)(*(int *)param_1[6] + 0x3c))();
  }
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = (int)pcVar3;
  System__LStrArrayClr(&local_14,2);
  return;
}


