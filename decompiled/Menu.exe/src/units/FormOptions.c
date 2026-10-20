/* Menu.exe — units/FormOptions.pas: 33 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00495688 TfrmOptions.lblStartInfoOnClick ==== */

void TfrmOptions_lblStartInfoOnClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x314);
  uVar2 = (**(code **)(*piVar1 + 0xb8))();
  (**(code **)(*piVar1 + 0xbc))(piVar1,uVar2 ^ 1);
  return;
}


/* ==== 004956b4 TfrmOptions.btnCancelClick ==== */

void TfrmOptions_btnCancelClick(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
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
  puStack_118 = &LAB_004957d2;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar2 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  piVar4 = (int *)(**(code **)(**(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8))();
  uVar3 = FUN_0045f46c();
  FUN_0045fd98(uVar3,0x4957f4,piVar4);
  FUN_00482830(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),param_1[0xe4]);
  FUN_004a70bc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18),param_1[0xe4]);
  iVar1 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18);
  *(int *)(iVar1 + 0x14) = param_1[0xe3];
  FUN_004a66ec(iVar1,param_1[0xe2]);
  param_1[0x8d] = 2;
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "btnCancelClick";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00495808 TfrmOptions.btnOkClick ==== */

void TfrmOptions_btnOkClick(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_004958eb;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar6 = &DAT_00495900;
  pcVar5 = "btnOkClick";
  iVar7 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar2 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  FUN_004960fc(param_1);
  piVar4 = *(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18);
  iVar1 = *piVar4;
  (**(code **)(iVar1 + 0xc))(piVar4,param_1[0xe1],iVar1,pcVar5,puVar6,iVar7);
  piVar4 = (int *)(**(code **)(**(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8))();
  uVar3 = FUN_0045f46c();
  FUN_0045fd98(uVar3,0x49590c,piVar4);
  param_1[0x8d] = 1;
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = pcVar5;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049591c TfrmOptions.optVideoLowClick ==== */

void TfrmOptions_optVideoLowClick(int param_1)

{
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x34c),
               (undefined4 *)"OPT_LOWR");
  return;
}


/* ==== 00495954 TfrmOptions.optVideoMediumClick ==== */

void TfrmOptions_optVideoMediumClick(int param_1)

{
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x34c),
               (undefined4 *)"OPT_MIDR");
  return;
}


/* ==== 0049598c TfrmOptions.optVideoHighClick ==== */

void TfrmOptions_optVideoHighClick(int param_1)

{
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x34c),
               (undefined4 *)"OPT_HIGR");
  return;
}


/* ==== 004959c4 TfrmOptions.chkVideo3dClick ==== */

void TfrmOptions_chkVideo3dClick(int param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  FUN_00496684(param_1);
  FUN_004966c8(param_1);
  cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0x4c))();
  if ((cVar1 != '\0') ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0xb8))(), uVar2 = extraout_ECX,
     uVar3 = extraout_EDX, cVar1 == '\0')) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x36c) + 0x4c))();
    if (cVar1 != '\0') {
      return;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x36c) + 0xb8))();
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_00403178(*(int **)(param_1 + 0x360),uVar3,uVar2);
  return;
}


/* ==== 00495a2c TfrmOptions.btnVideoAdvancedClick ==== */

void TfrmOptions_btnVideoAdvancedClick(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_14 = (undefined4 *)0x0;
  puStack_24 = &LAB_00495b0a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&local_c);
  FUN_00403f28(&local_8,(undefined4 *)"in btnVideoAdvancedClick. resolution: ",local_c);
  iVar3 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,iVar3);
  FUN_004960fc(param_1);
  piVar2 = (int *)TCustomForm_virtual_02c((int *)&PTR_TWinControl_virtual_000_004875b8,'\x01',0);
  piVar2[0xd8] = param_1[0xe1];
  iVar3 = (**(code **)(*piVar2 + 0xd8))();
  if (iVar3 == 1) {
    FUN_00495d6c(param_1);
  }
  FUN_00402f9c(piVar2);
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&local_14);
  FUN_00403f28(&local_10,(undefined4 *)"out btnVideoAdvancedClick. resolution: ",local_14);
  iVar3 = local_10;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,iVar3);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00495b11;
  puStack_24 = (undefined1 *)0x495b09;
  FUN_00403c80((int *)&local_14,4);
  return;
}


/* ==== 00495b78 TfrmOptions.lblKeyboardClick ==== */

void TfrmOptions_lblKeyboardClick(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x318),param_2,param_3);
  return;
}


/* ==== 00495b90 TfrmOptions.lblJoypadClick ==== */

void TfrmOptions_lblJoypadClick(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x31c),param_2,param_3);
  return;
}


/* ==== 00495ba8 TfrmOptions.lblJoystickClick ==== */

void TfrmOptions_lblJoystickClick(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 800),param_2,param_3);
  return;
}


/* ==== 00495bc0 TfrmOptions.lblWheelClick ==== */

void TfrmOptions_lblWheelClick(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x324),param_2,param_3);
  return;
}


/* ==== 00495bd8 TfrmOptions.lblVideo3dClick ==== */

void TfrmOptions_lblVideo3dClick(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x354),param_2,param_3);
  return;
}


/* ==== 00495bf0 TfrmOptions.lblVideoLowClick ==== */

void TfrmOptions_lblVideoLowClick(int param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0x4c))();
  if (cVar1 != '\0') {
    FUN_00403178(*(int **)(param_1 + 0x35c),extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00495c18 TfrmOptions.lblVideoMediumClick ==== */

void TfrmOptions_lblVideoMediumClick(int param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x360) + 0x4c))();
  if (cVar1 != '\0') {
    FUN_00403178(*(int **)(param_1 + 0x360),extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00495c40 TfrmOptions.lblVideoHighClick ==== */

void TfrmOptions_lblVideoHighClick(int param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x36c) + 0x4c))();
  if (cVar1 != '\0') {
    FUN_00403178(*(int **)(param_1 + 0x36c),extraout_EDX,extraout_ECX);
  }
  return;
}


/* ==== 00495c68 TfrmOptions.sldrMusicChange ==== */

void TfrmOptions_sldrMusicChange(int param_1)

{
  FUN_00482830(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),
               *(int *)(*(int *)(param_1 + 0x340) + 0x204));
  FUN_004a70bc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x340) + 0x204));
  FUN_004a70bc(*(int *)(param_1 + 900),*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x204));
  return;
}


/* ==== 00495cc8 TfrmOptions.sldrSoundChange ==== */

void TfrmOptions_sldrSoundChange(int param_1)

{
  FUN_00480780(*(int *)PTR_DAT_004ab694,*(int *)(param_1 + 0x2fc));
  FUN_004a66ec(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x344) + 0x204));
  FUN_004a66ec(*(int *)(param_1 + 900),*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x204));
  return;
}


/* ==== 00495d1c TfrmOptions.sldrVoiceChange ==== */

void TfrmOptions_sldrVoiceChange(int param_1)

{
  FUN_00480780(*(int *)PTR_DAT_004ab694,*(int *)(param_1 + 0x2fc));
  *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x14) =
       *(undefined4 *)(*(int *)(param_1 + 0x348) + 0x204);
  *(undefined4 *)(*(int *)(param_1 + 900) + 0x14) =
       *(undefined4 *)(*(int *)(param_1 + 0x348) + 0x204);
  return;
}


/* ==== 00495d6c FUN_00495d6c ==== */

void FUN_00495d6c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 *local_11c;
  int local_118;
  undefined4 *local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = (undefined4 *)0x0;
  local_110 = 0;
  local_114 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_12c = &LAB_0049603b;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar3 = local_8;
  uVar5 = FUN_0045f46c();
  FUN_0045fb90(uVar5,puVar3,0);
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&local_114);
  FUN_00403f28(&local_110,(undefined4 *)"in CopySettingsToControls. resolution: ",local_114);
  iVar2 = local_110;
  uVar5 = FUN_0045f46c();
  FUN_0045fe88(uVar5,iVar2);
  bVar4 = FUN_00487514(*(uint *)(param_1[0xe1] + 0x2c));
  (**(code **)(*(int *)param_1[0xd5] + 0xbc))((int *)param_1[0xd5],bVar4);
  if ((*(int *)(param_1[0xe1] + 0x2c) == 0) || (*(int *)(param_1[0xe1] + 0x2c) == 6)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  (**(code **)(*(int *)param_1[0xd7] + 0xbc))((int *)param_1[0xd7],uVar6);
  if ((*(int *)(param_1[0xe1] + 0x2c) == 1) || (*(int *)(param_1[0xe1] + 0x2c) == 3)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  (**(code **)(*(int *)param_1[0xd8] + 0xbc))((int *)param_1[0xd8],uVar6);
  if (*(int *)(param_1[0xe1] + 0x2c) != 4) {
    uVar6 = FUN_004967d4((int)param_1);
    if ((char)uVar6 == '\0') {
      uVar6 = 0;
      goto LAB_00495eb5;
    }
  }
  uVar6 = 1;
LAB_00495eb5:
  (**(code **)(*(int *)param_1[0xdb] + 0xbc))((int *)param_1[0xdb],uVar6);
  FUN_004966c8((int)param_1);
  FUN_00496684((int)param_1);
  (**(code **)(*(int *)param_1[0xc5] + 0xbc))
            ((int *)param_1[0xc5],*(undefined1 *)(param_1[0xe1] + 0x1f));
  TDaviGraphicSlider_SetPosition((int *)param_1[0xd0],*(int *)(param_1[0xe1] + 0x18));
  if (*(char *)(param_1[0xe1] + 0x1d) == '\0') {
    TDaviGraphicSlider_SetPosition((int *)param_1[0xd0],0);
  }
  TDaviGraphicSlider_SetPosition((int *)param_1[0xd1],*(int *)(param_1[0xe1] + 0x10));
  if (*(char *)(param_1[0xe1] + 0x1c) == '\0') {
    TDaviGraphicSlider_SetPosition((int *)param_1[0xd1],0);
  }
  TDaviGraphicSlider_SetPosition((int *)param_1[0xd2],*(int *)(param_1[0xe1] + 0x14));
  cVar1 = *(char *)(*(int *)(param_1[0xe1] + 0xc) + 0x24);
  if (cVar1 == '\0') {
    FUN_00403178((int *)param_1[0xc6],extraout_EDX,extraout_ECX);
  }
  else if (cVar1 == '\x01') {
    FUN_00403178((int *)param_1[200],extraout_EDX,extraout_ECX);
  }
  else if (cVar1 == '\x02') {
    FUN_00403178((int *)param_1[199],extraout_EDX,extraout_ECX);
  }
  else if (cVar1 == '\x03') {
    FUN_00403178((int *)param_1[0xc9],extraout_EDX,extraout_ECX);
  }
  else {
    FUN_00403c40("Unknown controler type specified");
  }
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&local_11c);
  FUN_00403f28(&local_118,(undefined4 *)"in CopySettingsToControls. resolution: ",local_11c);
  iVar2 = local_118;
  uVar5 = FUN_0045f46c();
  FUN_0045fe88(uVar5,iVar2);
  uVar5 = FUN_0045f46c();
  FUN_0045fc70(uVar5);
  *in_FS_OFFSET = "CopySettingsToControls";
  FUN_00403c80((int *)&local_11c,4);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004960fc FUN_004960fc ==== */

void FUN_004960fc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 *local_11c;
  int local_118;
  undefined4 *local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = (undefined4 *)0x0;
  local_110 = 0;
  local_114 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_12c = &LAB_004963dc;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar2 = local_8;
  uVar5 = FUN_0045f46c();
  FUN_0045fb90(uVar5,puVar2,0);
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&local_114);
  FUN_00403f28(&local_110,(undefined4 *)"in CopyControlsToSettings. resolution: ",local_114);
  iVar1 = local_110;
  uVar5 = FUN_0045f46c();
  FUN_0045fe88(uVar5,iVar1);
  uVar6 = FUN_004967d4((int)param_1);
  if ((char)uVar6 == '\0') {
    cVar3 = (**(code **)(*(int *)param_1[0xd7] + 0xb8))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*(int *)param_1[0xd8] + 0xb8))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*(int *)param_1[0xdb] + 0xb8))();
        if (cVar3 != '\0') {
          *(undefined4 *)(param_1[0xe1] + 0x2c) = 4;
        }
      }
      else {
        cVar3 = (**(code **)(*(int *)param_1[0xd5] + 0xb8))();
        if (cVar3 == '\0') {
          *(undefined4 *)(param_1[0xe1] + 0x2c) = 1;
        }
        else {
          *(undefined4 *)(param_1[0xe1] + 0x2c) = 3;
        }
      }
    }
    else {
      cVar3 = (**(code **)(*(int *)param_1[0xd5] + 0xb8))();
      if (cVar3 == '\0') {
        *(undefined4 *)(param_1[0xe1] + 0x2c) = 0;
      }
      else {
        *(undefined4 *)(param_1[0xe1] + 0x2c) = 6;
      }
    }
  }
  uVar4 = (**(code **)(*(int *)param_1[0xc5] + 0xb8))();
  iVar1 = param_1[0xe1];
  *(undefined1 *)(iVar1 + 0x1f) = uVar4;
  FUN_004a70bc(iVar1,*(undefined4 *)(param_1[0xd0] + 0x204));
  iVar1 = param_1[0xe1];
  *(bool *)(iVar1 + 0x1d) = 0 < *(int *)(param_1[0xd0] + 0x204);
  FUN_004a66ec(iVar1,*(undefined4 *)(param_1[0xd1] + 0x204));
  iVar1 = param_1[0xe1];
  *(bool *)(iVar1 + 0x1c) = 0 < *(int *)(param_1[0xd1] + 0x204);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1[0xd2] + 0x204);
  cVar3 = (**(code **)(*(int *)param_1[0xc6] + 0xb8))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*(int *)param_1[199] + 0xb8))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*(int *)param_1[200] + 0xb8))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*(int *)param_1[0xc9] + 0xb8))();
        if (cVar3 != '\0') {
          *(undefined1 *)(*(int *)(param_1[0xe1] + 0xc) + 0x24) = 3;
        }
      }
      else {
        *(undefined1 *)(*(int *)(param_1[0xe1] + 0xc) + 0x24) = 1;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1[0xe1] + 0xc) + 0x24) = 2;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1[0xe1] + 0xc) + 0x24) = 0;
  }
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&local_11c);
  FUN_00403f28(&local_118,(undefined4 *)"out CopyControlsToSettings. resolution: ",local_11c);
  iVar1 = local_118;
  uVar5 = FUN_0045f46c();
  FUN_0045fe88(uVar5,iVar1);
  uVar5 = FUN_0045f46c();
  FUN_0045fc70(uVar5);
  *in_FS_OFFSET = "CopyControlsToSettings";
  FUN_00403c80((int *)&local_11c,4);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00496480 TfrmOptions.optKeyboardClick ==== */

void TfrmOptions_optKeyboardClick(int param_1)

{
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x30c),
               (undefined4 *)"OPT_KEYB");
  (**(code **)(**(int **)(param_1 + 0x310) + 0x5c))(*(int **)(param_1 + 0x310),1);
  return;
}


/* ==== 004964c8 TfrmOptions.optJoypadClick ==== */

void TfrmOptions_optJoypadClick(int param_1)

{
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x30c),
               (undefined4 *)"OPT_GPAD");
  (**(code **)(**(int **)(param_1 + 0x310) + 0x5c))(*(int **)(param_1 + 0x310),0);
  return;
}


/* ==== 00496510 TfrmOptions.optJoystickClick ==== */

void TfrmOptions_optJoystickClick(int param_1)

{
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x30c),
               (undefined4 *)"OPT_JOYS");
  (**(code **)(**(int **)(param_1 + 0x310) + 0x5c))(*(int **)(param_1 + 0x310),1);
  return;
}


/* ==== 00496558 TfrmOptions.optWheelClick ==== */

void TfrmOptions_optWheelClick(int param_1)

{
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x30c),
               (undefined4 *)"OPT_WHEE");
  (**(code **)(**(int **)(param_1 + 0x310) + 0x5c))(*(int **)(param_1 + 0x310),1);
  return;
}


/* ==== 004965a0 TfrmOptions.btnControlsClick ==== */

void TfrmOptions_btnControlsClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x318) + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00498378(*(int *)(*(int *)(param_1 + 900) + 0xc));
    return;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 800) + 0xb8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x324) + 0xb8))();
    if (cVar1 == '\0') {
      FUN_00403c40("Unknown or invalid controler type selected");
    }
    else {
      FUN_004981f0(param_1,*(int *)(*(int *)(param_1 + 900) + 0xc));
    }
  }
  else {
    FUN_004982b4(param_1,*(int *)(*(int *)(param_1 + 900) + 0xc));
  }
  return;
}


/* ==== 00496684 FUN_00496684 ==== */

void FUN_00496684(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x35c) + 0x5c))(*(int **)(param_1 + 0x35c),uVar1 ^ 1);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x36c) + 0x5c))(*(int **)(param_1 + 0x36c),uVar2);
  return;
}


/* ==== 004966c8 FUN_004966c8 ==== */

void FUN_004966c8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_0049678b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0xb8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x360) + 0xb8))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x36c) + 0xb8))();
      if (cVar1 != '\0') {
        FUN_00403cf4((int *)&local_8,0x4967c8);
      }
    }
    else {
      FUN_00403cf4((int *)&local_8,0x4967b4);
    }
  }
  else {
    FUN_00403cf4((int *)&local_8,0x4967a0);
  }
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x34c),local_8);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))();
  TGroupBox_SetVisible(*(int **)(param_1 + 0x350),uVar2,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00496792;
  puStack_14 = (undefined1 *)0x49678a;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004967d4 FUN_004967d4 ==== */

undefined4 FUN_004967d4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 900) + 0x2c);
  if ((((iVar1 != 0) && (iVar1 != 6)) && (iVar1 != 1)) && ((iVar1 != 3 && (iVar1 != 4)))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 004967fc TfrmOptions.GDIFormCreate ==== */

void TfrmOptions_GDIFormCreate(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
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
  puStack_118 = &LAB_00496948;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_00481698(param_1[0xc0],0x496984);
  FUN_00481698(param_1[0xc1],0x496994);
  *(undefined1 *)(param_1[0xd0] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xd1] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xd2] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xc2] + 0x1e8) = 1;
  *(undefined1 *)(param_1[0xce] + 0x1e8) = 1;
  iVar3 = TSettings_virtual_004((int *)&PTR_TSettings_virtual_000_004a6010,'\x01');
  param_1[0xe1] = iVar3;
  piVar4 = (int *)(**(code **)(**(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8))();
  uVar2 = FUN_0045f46c();
  FUN_0045fd98(uVar2,0x4969a4,piVar4);
  (**(code **)(*(int *)param_1[0xe1] + 0xc))
            ((int *)param_1[0xe1],*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18))
  ;
  FUN_00495d6c(param_1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "GDIFormCreate";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004969c4 TfrmOptions.GDIFormDestroy ==== */

void TfrmOptions_GDIFormDestroy(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
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
  puStack_118 = &LAB_00496a56;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_00402f9c((int *)param_1[0xe1]);
  *in_FS_OFFSET = "GDIFormDestroy";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00496a8c TfrmOptions.GDIFormShow ==== */

void TfrmOptions_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  param_1[0xe2] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x10);
  param_1[0xe3] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x14);
  param_1[0xe4] = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x18);
  FUN_00481990(param_1[0xc2],param_1[0xba],(int *)param_1[0xdf]);
  FUN_00481990(param_1[0xce],param_1[0xba],(int *)param_1[0xe0]);
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),param_1[0xcf],(undefined4 *)"opt_soun");
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xd4],
               (undefined4 *)"opt_3dfx");
  return;
}


/* ==== 00496b78 TfrmOptions.lblClickAreaClick ==== */

void TfrmOptions_lblClickAreaClick(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x314),param_2,param_3);
  return;
}


