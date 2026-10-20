/* Menu.exe — units/FormJoyStickSettings.pas: 9 functions, split from decompiled.c by tools/split_sources.py */

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
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *in_FS_OFFSET;
  char *pcVar5;
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
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffec4,in_stack_fffffec8);
    param_3 = extraout_ECX;
  }
  puStack_144 = &LAB_00492f34;
  iStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_148;
  local_c = 0;
  puStack_140 = &stack0xfffffffc;
  local_10 = param_3;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  pcVar5 = "CreateAndReadHeader";
  FUN_00403f9c(&local_14,3);
  iVar1 = local_14;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,0,(int)pcVar5);
  TDataObject_virtual_004(param_1,'\0',extraout_ECX_00);
  FUN_00481178(param_3,(int *)&local_11c);
  FUN_00403f28((int *)&local_8,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),local_11c);
  uVar3 = FUN_004087a4((undefined *)local_8);
  if ((char)uVar3 == '\0') {
    FUN_00403f28(&local_120,(undefined4 *)"Unable to load: ",local_8);
    FUN_00403c40(local_120);
  }
  param_1[2] = param_3;
  piVar4 = FUN_0048c76c((int *)&PTR_TSaveGameHeader_virtual_000_0048c744,'\x01',0);
  param_1[3] = (int)piVar4;
  FUN_0048c83c(piVar4,(undefined *)local_8);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = (int)pcVar5;
  FUN_00403c80(&local_120,2);
  FUN_00403c80(&local_18,2);
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00492fcc TStoredGame.Destroy ==== */

void TStoredGame_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0040c968(piVar1 + 3);
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
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


/* ==== 00493338 FUN_00493338 ==== */

void FUN_00493338(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_27c;
  undefined1 *puStack_278;
  undefined1 *puStack_274;
  undefined *local_268;
  byte local_264 [256];
  int local_164;
  undefined4 *local_160;
  WORD local_15c [6];
  undefined *local_150;
  
  local_268 = (undefined *)0x0;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  puStack_274 = (undefined1 *)0x49336a;
  FUN_00404480((int)local_15c,(int)&DAT_004075bc);
  puStack_278 = &LAB_004934d2;
  uStack_27c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_27c;
  puStack_274 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_264);
  FUN_00403e80(&local_164,local_264);
  FUN_00403f9c((int *)&local_160,3);
  puVar1 = local_160;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_0045e860(param_1[0xcb]);
  FUN_00403f28((int *)&local_268,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"save*.rcr");
  DVar3 = FUN_00408854(local_268,0x3f,local_15c);
  while (DVar3 == 0) {
    iVar4 = FUN_00481208(local_150);
    piVar5 = (int *)FUN_00492dd8((int *)&PTR_TStoredGame_virtual_000_00492db4,'\x01',iVar4);
    piVar6 = (int *)(**(code **)(*piVar5 + 8))();
    uVar2 = FUN_0045f46c();
    FUN_0045fd98(uVar2,0x493524,piVar6);
    if (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14) != piVar5[2]) {
      uVar2 = FUN_0045f46c();
      FUN_0045fe88(uVar2,0x493544);
      FUN_0045e7e4(param_1[0xcb],piVar5);
    }
    DVar3 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "BuildFileList";
  FUN_00403c5c((int *)&local_268);
  FUN_00403c80(&local_164,2);
  FUN_0040454c((int)local_15c,(int)&DAT_004075bc);
  return;
}


/* ==== 0049354c FUN_0049354c ==== */

void FUN_0049354c(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
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
  puStack_118 = &LAB_0049362c;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  piVar3 = TDataList_virtual_018
                     ((int *)&PTR_TDataList_virtual_000_0045e240,'\x01',
                      (int)&PTR_TStoredGame_virtual_000_00492db4);
  param_1[0xcb] = (int)piVar3;
  FUN_0047fa5c(*(int **)PTR_DAT_004ab694);
  param_1[0xca] = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14);
  FUN_00493d30(param_1);
  FUN_004938ac(param_1);
  FUN_00493338(param_1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "InitDlg";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00493658 FUN_00493658 ==== */

void FUN_00493658(int *param_1,int param_2)

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
  puStack_11c = &LAB_00493726;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if (param_2 == 2) {
    FUN_00493ac8(param_1);
    FUN_0047f840(*(int **)PTR_DAT_004ab694,param_1[0xca]);
    param_1[0x8d] = 2;
  }
  FUN_0040c968(param_1 + 0xcb);
  FUN_00493d30(param_1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "ExitDlg";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00493754 FUN_00493754 ==== */

void FUN_00493754(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_8 = (undefined4 *)0x0;
  puStack_120 = &LAB_00493875;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar2 = local_c;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  FUN_00403c5c((int *)&local_8);
  do {
    iVar4 = FUN_00498414((int *)&local_8);
    if (local_8 != (undefined4 *)0x0) break;
  } while (iVar4 != 2);
  if (iVar4 == 1) {
    FUN_0047fbd4(*(int **)PTR_DAT_004ab694,local_8);
    piVar5 = (int *)TSettings_virtual_004((int *)&PTR_TSettings_virtual_000_004a6010,'\x01');
    (**(code **)(*piVar5 + 0xc))
              (piVar5,*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18));
    piVar1 = *(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18);
    (**(code **)(*piVar1 + 0xc))(piVar1,piVar5);
    FUN_00402f9c(piVar5);
    FUN_0047fa5c(*(int **)PTR_DAT_004ab694);
    FUN_00493338(param_1);
    FUN_00493ed4(param_1);
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "AddNewPlayer";
  FUN_00403c80(&local_10,3);
  return;
}


