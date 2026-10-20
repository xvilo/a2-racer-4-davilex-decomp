/* Menu.exe — units/FormJoyStickSettings.pas: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00492cfc TfrmJoyStickSettings.virtual_0e8 ==== */

void TfrmJoyStickSettings_virtual_0e8(int param_1)

{
  TDaviGraphicSlider_SetPosition
            (*(int **)(param_1 + 0x2fc),*(int *)(*(int *)(param_1 + 0x304) + 0x28));
  return;
}


/* ==== 00492d18 TfrmJoyStickSettings.virtual_0ec ==== */

void TfrmJoyStickSettings_virtual_0ec(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x304) + 0x28) =
       *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x204);
  return;
}


/* ==== 00492dd8 FUN_00492dd8 ==== */

void FUN_00492dd8(int *param_1,char param_2,int param_3)

{
  int iVar1;
  uint debug;
  undefined4 uVar2;
  int *piVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *in_FS_OFFSET;
  char *pcVar4;
  int iStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 in_stack_fffffec4;
  undefined4 in_stack_fffffec8;
  int local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_120 = 0;
  local_11c = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_8 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    puStack_140 = (undefined1 *)0x492e07;
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_fffffec4,
                                         in_stack_fffffec8);
    param_3 = extraout_ECX;
  }
  puStack_144 = &LAB_00492f34;
  iStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_148;
  local_c = 0;
  puStack_140 = &stack0xfffffffc;
  local_10 = param_3;
  System_TObject_ClassName(*param_1,local_118);
  System__LStrFromString(&local_18,local_118);
  pcVar4 = "CreateAndReadHeader";
  System__LStrCatN(&local_14,3);
  iVar1 = local_14;
  debug = Debug();
  FUN_0045fa3c(debug,iVar1,0,(int)pcVar4);
  TDataObject_virtual_004(param_1,'\0',extraout_ECX_00);
  FUN_00481178(param_3,(int *)&local_11c);
  System__LStrCat3((int *)&local_8,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),local_11c);
  uVar2 = SysUtils_FileExists((undefined *)local_8);
  if ((char)uVar2 == '\0') {
    System__LStrCat3(&local_120,(undefined4 *)"Unable to load: ",local_8);
    System__Assert(local_120);
  }
  param_1[2] = param_3;
  piVar3 = FUN_0048c76c((int *)&PTR_TSaveGameHeader_virtual_000_0048c744,'\x01',0);
  param_1[3] = (int)piVar3;
  FUN_0048c83c(piVar3,(undefined *)local_8);
  debug = Debug();
  TDebug_ExitProc(debug);
  *in_FS_OFFSET = (int)pcVar4;
  System__LStrArrayClr(&local_120,2);
  System__LStrArrayClr(&local_18,2);
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00492fcc TStoredGame.Destroy ==== */

void TStoredGame_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  SysUtils_FreeAndNil(piVar1 + 3);
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 00493000 TStoredGame.virtual_000 ==== */

void TStoredGame_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x493030,*(undefined4 *)(param_1 + 8));
  FUN_0045efa4(param_1,(undefined4 *)"FHeader",*(int **)(param_1 + 0xc));
  return;
}


