/* Menu.exe — units/DaviColors.pas: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00472b74 TDaviColors.virtual_00c ==== */

void TDaviColors_virtual_00c(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_130;
  undefined1 *puStackY_12c;
  undefined1 *puStackY_128;
  undefined4 in_stack_fffffedc;
  undefined4 in_stack_fffffee0;
  byte local_108 [256];
  int local_8;
  
  local_8 = 0;
  if (param_2 != '\0') {
    puStackY_128 = (undefined1 *)0x472b91;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffedc,in_stack_fffffee0);
    param_3 = extraout_ECX;
  }
  puStackY_12c = &LAB_00472c36;
  uStackY_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_130;
  iVar1 = param_3;
  puStackY_128 = &stack0xfffffffc;
  if (param_3 == 0) {
    puStackY_128 = &stack0xfffffffc;
    FUN_00402ee4(*param_1,local_108);
    FUN_00403e80(&local_8,local_108);
    FUN_00403ee4(&local_8,(undefined4 *)".Create: aControl must be assigned");
    FUN_00403c40(local_8);
    iVar1 = extraout_ECX_00;
  }
  FUN_00402f6c(param_1,'\0',iVar1);
  param_1[1] = param_3;
  param_1[2] = -0x7ffffff1;
  param_1[3] = -0x7ffffff0;
  param_1[4] = -0x7fffffec;
  param_1[5] = -0x7fffffea;
  param_1[6] = -0x7fffffeb;
  param_1[7] = -0x7fffffea;
  param_1[8] = -0x7ffffff0;
  *in_FS_OFFSET = uStackY_130;
  puStackY_128 = &LAB_00472c3d;
  puStackY_12c = (undefined1 *)0x472c35;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 00472cb0 FUN_00472cb0 ==== */

void FUN_00472cb0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  piVar2 = *(int **)(param_1 + 4);
  uVar1 = FUN_00403114(piVar2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
  if ((char)uVar1 != '\0') {
    lParam = 0;
    wParam = 0;
    Msg = 0x85;
    piVar2 = (int *)FUN_0040312c(piVar2,(int)&PTR_TWinControl_virtual_000_0042ac0c);
    hWnd = (HWND)FUN_004349e0(piVar2);
    PostMessageA(hWnd,Msg,wParam,lParam);
  }
  FUN_0042f720(*(int *)(param_1 + 4),0x1401,0,0);
  return;
}


/* ==== 00472d0c TDaviColors.SetBtnFace ==== */

void TDaviColors_SetBtnFace(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_00472cb0(param_1);
  return;
}


/* ==== 00472d1c TDaviColors.SetBtnShadow ==== */

void TDaviColors_SetBtnShadow(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_00472cb0(param_1);
  return;
}


/* ==== 00472d2c TDaviColors.SetBtnHighlight ==== */

void TDaviColors_SetBtnHighlight(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_00472cb0(param_1);
  return;
}


/* ==== 00472d3c TDaviColors.SetBtn3DLight ==== */

void TDaviColors_SetBtn3DLight(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  FUN_00472cb0(param_1);
  return;
}


/* ==== 00472d4c TDaviColors.SetBtn3DDkShadow ==== */

void TDaviColors_SetBtn3DDkShadow(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  FUN_00472cb0(param_1);
  return;
}


/* ==== 00472d5c TDaviColors.SetBtnDisabledLight ==== */

void TDaviColors_SetBtnDisabledLight(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  FUN_00472cb0(param_1);
  return;
}


/* ==== 00472d6c TDaviColors.SetBtnDisabledShadow ==== */

void TDaviColors_SetBtnDisabledShadow(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  FUN_00472cb0(param_1);
  return;
}


/* ==== 00472d7c TDaviColors.virtual_008 ==== */

void TDaviColors_virtual_008(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_10c;
  byte local_108 [256];
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10c = 0;
  local_8 = 0;
  puStack_120 = &LAB_00472ee6;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  if (param_2 == (int *)0x0) {
    FUN_00402ee4(*param_1,local_108);
    FUN_00403e80(&local_8,local_108);
    FUN_00403ee4(&local_8,(undefined4 *)".Assign: aSource not assigned.");
    FUN_00403c40(local_8);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  uVar2 = FUN_00403114(param_2,(int)&PTR_TPersistent_virtual_000_00472a1c);
  if ((char)uVar2 == '\0') {
    FUN_00402ee4(*param_1,local_108);
    FUN_00403e80(&local_10c,local_108);
    FUN_00403ee4(&local_10c,(undefined4 *)".Assign: aSource not a TDaviColors.");
    FUN_00403c40(local_10c);
  }
  iVar3 = FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_00472a1c);
  param_1[2] = *(int *)(iVar3 + 8);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_00472a1c);
  param_1[3] = *(int *)(iVar3 + 0xc);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_00472a1c);
  param_1[4] = *(int *)(iVar3 + 0x10);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_00472a1c);
  param_1[5] = *(int *)(iVar3 + 0x14);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_00472a1c);
  param_1[6] = *(int *)(iVar3 + 0x18);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_00472a1c);
  param_1[7] = *(int *)(iVar3 + 0x1c);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_00472a1c);
  param_1[8] = *(int *)(iVar3 + 0x20);
  FUN_00472cb0((int)param_1);
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_00472eed;
  puStack_120 = (undefined1 *)0x472edd;
  FUN_00403c5c(&local_10c);
  puStack_120 = (undefined1 *)0x472ee5;
  FUN_00403c5c(&local_8);
  return;
}


