/* Menu.exe — units/FormStartInfoKeyBoard.pas: 17 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00497d6c FUN_00497d6c ==== */

void FUN_00497d6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
  undefined4 *local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  local_20 = (byte *)0x0;
  local_1c = 0;
  puStack_34 = &LAB_00497ecf;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x497d9e;
  local_8 = param_1;
  piVar1 = FUN_0041fefc((int *)&PTR_TList_virtual_000_0041fda4,'\x01',
                        CONCAT31((int3)((uint)param_3 >> 8),1));
  *(int **)(local_8 + 0x324) = piVar1;
  local_c = (int *)0x0;
  puStack_40 = &LAB_00497ead;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x497dbf;
  puStack_3c = &stack0xfffffffc;
  local_c = (int *)FUN_00497b4c();
  puStack_48 = (undefined1 *)0x497dca;
  iVar2 = (**(code **)(*local_c + 0x14))();
  uVar3 = iVar2 - 1;
  uVar4 = extraout_ECX;
  if (SBORROW4(iVar2,1)) {
    puStack_48 = (undefined1 *)0x497dd4;
    uVar3 = System__RunError(uVar3);
    uVar4 = extraout_ECX_00;
  }
  if (-1 < (int)uVar3) {
    local_18 = uVar3 + 1;
    local_10 = 0;
    puStack_48 = (undefined1 *)0x497df3;
    local_14 = (int *)System_TObject_Create
                                ((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',uVar4);
    puStack_4c = &LAB_00497e84;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    puStack_48 = &stack0xfffffffc;
    (**(code **)(*local_c + 0xc))(local_c,local_10,&local_1c);
    FUN_00497c88(local_1c,local_14);
    iVar2 = System_TObject_Create((int *)&DAT_0049198c,'\x01',extraout_ECX_01);
    (**(code **)(*local_14 + 0xc))(local_14,0,&local_20);
    uVar4 = FUN_00408618(local_20);
    *(undefined4 *)(iVar2 + 4) = uVar4;
    (**(code **)(*local_14 + 0xc))(local_14,1,&local_24);
    System__LStrAsg((int *)(iVar2 + 8),local_24);
    FUN_0041fef4(*(int **)(local_8 + 0x324),iVar2);
    *in_FS_OFFSET = uStack_50;
    puStack_48 = &DAT_00497e8b;
    puStack_4c = (undefined1 *)0x497e83;
    SysUtils_FreeAndNil(&local_14);
    return;
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00497eb4;
  puStack_40 = (undefined1 *)0x497eac;
  System_TObject_Free(local_c);
  return;
}


/* ==== 00497edc FUN_00497edc ==== */

void FUN_00497edc(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int i_val;
  int j;
  
  System__LStrClr(param_2);
  uVar1 = *(uint *)(*(int *)(param_4 + -4) + 0x324);
  i_val = *(int *)(uVar1 + 8);
  if (SBORROW4(i_val,1)) {
    System__RunError(uVar1);
  }
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0041ff40(*(undefined4 **)(*(int *)(param_4 + -4) + 0x324),j);
      iVar3 = System__AsClass(piVar2,(int)&DAT_0049198c);
      if (*(int *)(iVar3 + 4) == param_1) {
        System__LStrAsg(param_2,*(undefined4 **)(iVar3 + 8));
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00497f54 FUN_00497f54 ==== */

void FUN_00497f54(int param_1)

{
  undefined *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_2c = &stack0xfffffffc;
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_18 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_24 = (uint *)0x0;
  puStack_30 = &LAB_004980c8;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 8),
               (int *)&local_c,0,(int)&stack0xfffffffc);
  TGroupBox_SetCaption(*(int *)(local_8 + 0x308),local_c);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0xc),
               (int *)&local_10,extraout_ECX,(int)&stack0xfffffffc);
  TGroupBox_SetCaption(*(int *)(local_8 + 0x310),local_10);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x10),
               (int *)&local_14,extraout_ECX_00,(int)&stack0xfffffffc);
  TGroupBox_SetCaption(*(int *)(local_8 + 0x30c),local_14);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x14),
               (int *)&local_18,extraout_ECX_01,(int)&stack0xfffffffc);
  TGroupBox_SetCaption(*(int *)(local_8 + 0x314),local_18);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x1c),
               (int *)&local_1c,extraout_ECX_02,(int)&stack0xfffffffc);
  TGroupBox_SetCaption(*(int *)(local_8 + 0x31c),local_1c);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x18),
               (int *)&local_20,extraout_ECX_03,(int)&stack0xfffffffc);
  TGroupBox_SetCaption(*(int *)(local_8 + 0x318),local_20);
  FUN_00497edc(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18) + 0xc) + 0x20),
               (int *)&local_24,extraout_ECX_04,(int)&stack0xfffffffc);
  TGroupBox_SetCaption(*(int *)(local_8 + 800),local_24);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004980cf;
  puStack_30 = (undefined1 *)0x4980c7;
  System__LStrArrayClr((int *)&local_24,7);
  return;
}


/* ==== 004980d4 TfrmStartInfoKeyBoard.GDIFormShow ==== */

void TfrmStartInfoKeyBoard_GDIFormShow(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TfrmStartInfo_GDIFormShow(param_1);
  FUN_00497d6c((int)param_1,extraout_EDX,extraout_ECX);
  FUN_00497f54((int)param_1);
  return;
}


/* ==== 0049812c TfrmStartInfoKeyBoard.ShowStartInfoDlg ==== */

void TfrmStartInfoKeyBoard_ShowStartInfoDlg(void)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x498137;
  debug = Debug();
  puStack_10 = (undefined1 *)0x498147;
  TDebug_InProc(debug,(undefined4 *)"ShowStartInfoDlg",0);
  if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0xc) + 0x24)
      == '\0') {
    puStack_10 = (undefined1 *)0x49816f;
    local_c = (int *)TfrmCoolDialog_virtual_02c
                               ((int *)&PTR_TWinControl_virtual_000_0049796c,'\x01',0);
  }
  else {
    puStack_10 = (undefined1 *)0x498182;
    local_c = (int *)TfrmCoolDialog_virtual_02c
                               ((int *)&PTR_TWinControl_virtual_000_004975f0,'\x01',0);
  }
  puStack_14 = &LAB_004981b7;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004981be;
  puStack_14 = (undefined1 *)0x4981b6;
  System_TObject_Free(local_c);
  return;
}


/* ==== 004981f0 TfrmStartInfoKeyBoard.ShowWheelSettingsDlg ==== */

void TfrmStartInfoKeyBoard_ShowWheelSettingsDlg(undefined4 param_1,int param_2)

{
  uint debug;
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4981fc;
  debug = Debug();
  puStack_10 = (undefined1 *)0x49820c;
  TDebug_InProc(debug,(undefined4 *)"ShowWheelSettingsDlg",0);
  puStack_10 = (undefined1 *)0x49821a;
  piVar1 = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_004929c4,'\x01',0);
  puStack_14 = &LAB_0049827b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1[0xc1] = param_2;
  puStack_10 = &stack0xfffffffc;
  TDaviGraphicSlider_SetPosition((int *)piVar1[0xbf],*(int *)(param_2 + 0x2c));
  iVar2 = (**(code **)(*piVar1 + 0xd8))();
  if (iVar2 == 1) {
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(piVar1[0xbf] + 0x204);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00498282;
  puStack_14 = (undefined1 *)0x49827a;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 004982b4 TfrmStartInfoKeyBoard.ShowJoystickSettingsDlg ==== */

void TfrmStartInfoKeyBoard_ShowJoystickSettingsDlg(undefined4 param_1,int param_2)

{
  uint debug;
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4982c0;
  debug = Debug();
  puStack_10 = (undefined1 *)0x4982d0;
  TDebug_InProc(debug,(undefined4 *)"ShowJoystickSettingsDlg",0);
  puStack_10 = (undefined1 *)0x4982de;
  piVar1 = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_00492bb8,'\x01',0);
  puStack_14 = &LAB_0049833f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1[0xc1] = param_2;
  puStack_10 = &stack0xfffffffc;
  TDaviGraphicSlider_SetPosition((int *)piVar1[0xbf],*(int *)(param_2 + 0x28));
  iVar2 = (**(code **)(*piVar1 + 0xd8))();
  if (iVar2 == 1) {
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(piVar1[0xbf] + 0x204);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00498346;
  puStack_14 = (undefined1 *)0x49833e;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 00498378 TfrmStartInfoKeyBoard.ShowKeySettingsDlg ==== */

void TfrmStartInfoKeyBoard_ShowKeySettingsDlg(int param_1)

{
  uint debug;
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x498384;
  debug = Debug();
  puStack_10 = (undefined1 *)0x498394;
  TDebug_InProc(debug,(undefined4 *)"ShowKeySettingsDlg",0);
  puStack_10 = (undefined1 *)0x4983a2;
  piVar1 = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_004919f4,'\x01',0);
  puStack_14 = &LAB_004983dd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1[0xcd] = param_1;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*piVar1 + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004983e4;
  puStack_14 = (undefined1 *)0x4983dc;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 00498414 TfrmStartInfoKeyBoard.ShowNewPlayerDlg ==== */

void TfrmStartInfoKeyBoard_ShowNewPlayerDlg(int *param_1)

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
  puStack_1c = &LAB_004984c0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x498435;
  debug = Debug();
  puStack_24 = (undefined1 *)0x498445;
  TDebug_InProc(debug,(undefined4 *)"ShowNewPlayerDlg",2);
  puStack_24 = (undefined1 *)0x498453;
  local_c = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_00494ba4,'\x01',0)
  ;
  puStack_28 = &LAB_004984a3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  TGroupBox_GetCaption(local_c[0xbe],(int *)&local_10);
  System__LStrAsg(param_1,local_10);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004984aa;
  puStack_28 = (undefined1 *)0x4984a2;
  System_TObject_Free(local_c);
  return;
}


/* ==== 004984f0 TfrmStartInfoKeyBoard.ShowHighScoreDlg ==== */

void TfrmStartInfoKeyBoard_ShowHighScoreDlg(int *param_1)

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
  puStack_1c = &LAB_004985ac;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x498511;
  debug = Debug();
  puStack_24 = (undefined1 *)0x498521;
  TDebug_InProc(debug,(undefined4 *)"ShowHighScoreDlg",2);
  puStack_24 = (undefined1 *)0x49852f;
  local_c = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_00494de0,'\x01',0)
  ;
  puStack_28 = &LAB_0049858f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  TGroupBox_SetCaption(local_c[0xbe],(uint *)*param_1);
  local_8 = (**(code **)(*local_c + 0xd8))();
  TGroupBox_GetCaption(local_c[0xbe],(int *)&local_10);
  System__LStrAsg(param_1,local_10);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00498596;
  puStack_28 = (undefined1 *)0x49858e;
  System_TObject_Free(local_c);
  return;
}


/* ==== 004985dc FUN_004985dc ==== */

void FUN_004985dc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x4985f0;
  local_c = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_00497108,'\x01',0)
  ;
  puStack_14 = &LAB_00498625;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049862c;
  puStack_14 = (undefined1 *)0x498624;
  System_TObject_Free(local_c);
  return;
}


/* ==== 00498634 TfrmStartInfoKeyBoard.ShowPlayerDlg ==== */

void TfrmStartInfoKeyBoard_ShowPlayerDlg(void)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x49863f;
  debug = Debug();
  puStack_10 = (undefined1 *)0x49864f;
  TDebug_InProc(debug,(undefined4 *)"ShowPlayerDlg",2);
  puStack_10 = (undefined1 *)0x49865d;
  local_c = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_004930d0,'\x01',0)
  ;
  puStack_14 = &LAB_004986a5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  TfrmPlayer_InitDlg(local_c);
  local_8 = (**(code **)(*local_c + 0xd8))();
  TfrmPlayer_ExitDlg(local_c,local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004986ac;
  puStack_14 = (undefined1 *)0x4986a4;
  System_TObject_Free(local_c);
  return;
}


/* ==== 004986d0 TfrmStartInfoKeyBoard.ShowNoMoneyDlg ==== */

void TfrmStartInfoKeyBoard_ShowNoMoneyDlg(void)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x4986db;
  debug = Debug();
  puStack_10 = (undefined1 *)0x4986eb;
  TDebug_InProc(debug,(undefined4 *)"ShowNoMoneyDlg",2);
  puStack_10 = (undefined1 *)0x4986f9;
  local_c = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_00496f28,'\x01',0)
  ;
  puStack_14 = &LAB_0049872e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00498735;
  puStack_14 = (undefined1 *)0x49872d;
  System_TObject_Free(local_c);
  return;
}


/* ==== 00498758 TfrmStartInfoKeyBoard.ShowDeletePlayerDlg ==== */

void TfrmStartInfoKeyBoard_ShowDeletePlayerDlg(undefined4 param_1,undefined4 *param_2)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  puStack_14 = (undefined1 *)0x498769;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_18 = &LAB_004987f7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x49877c;
  puStack_14 = &stack0xfffffffc;
  debug = Debug();
  puStack_20 = (undefined1 *)0x49878c;
  TDebug_InProc(debug,(undefined4 *)"ShowDeletePlayerDlg",2);
  puStack_20 = (undefined1 *)0x49879a;
  local_10 = (int *)TfrmCoolDialog_virtual_02c
                              ((int *)&PTR_TWinControl_virtual_000_00496c14,'\x01',0);
  puStack_24 = &LAB_004987da;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00496dc4((int)local_10,local_8);
  local_c = (**(code **)(*local_10 + 0xd8))();
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004987e1;
  puStack_24 = (undefined1 *)0x4987d9;
  System_TObject_Free(local_10);
  return;
}


/* ==== 00498828 TfrmStartInfoKeyBoard.ShowDoubleKeysDlg ==== */

void TfrmStartInfoKeyBoard_ShowDoubleKeysDlg(undefined4 param_1,undefined4 *param_2)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  puStack_14 = (undefined1 *)0x498839;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_18 = &LAB_004988c7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x49884c;
  puStack_14 = &stack0xfffffffc;
  debug = Debug();
  puStack_20 = (undefined1 *)0x49885c;
  TDebug_InProc(debug,(undefined4 *)"ShowDoubleKeysDlg",2);
  puStack_20 = (undefined1 *)0x49886a;
  local_10 = (int *)TfrmCoolDialog_virtual_02c
                              ((int *)&PTR_TWinControl_virtual_000_004948a8,'\x01',0);
  puStack_24 = &LAB_004988aa;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00494a40((int)local_10,local_8);
  local_c = (**(code **)(*local_10 + 0xd8))();
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004988b1;
  puStack_24 = (undefined1 *)0x4988a9;
  System_TObject_Free(local_10);
  return;
}


/* ==== 004988f8 FUN_004988f8 ==== */

void FUN_004988f8(void)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x498903;
  debug = Debug();
  puStack_10 = (undefined1 *)0x498913;
  TDebug_InProc(debug,(undefined4 *)"ShowOptionsDlg",0);
  puStack_10 = (undefined1 *)0x498921;
  local_c = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_00497320,'\x01',0)
  ;
  puStack_14 = &LAB_00498956;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0049895d;
  puStack_14 = (undefined1 *)0x498955;
  System_TObject_Free(local_c);
  return;
}


/* ==== 0049898c FUN_0049898c ==== */

void FUN_0049898c(void)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x498997;
  debug = Debug();
  puStack_10 = (undefined1 *)0x4989a7;
  TDebug_InProc(debug,(undefined4 *)"ShowOptionsDlg",0);
  puStack_10 = (undefined1 *)0x4989b5;
  local_c = (int *)TfrmCoolDialog_virtual_02c((int *)&PTR_TWinControl_virtual_000_0049504c,'\x01',0)
  ;
  puStack_14 = &LAB_004989ea;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004989f1;
  puStack_14 = (undefined1 *)0x4989e9;
  System_TObject_Free(local_c);
  return;
}


