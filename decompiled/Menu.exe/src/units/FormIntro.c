/* Menu.exe — units/FormIntro.pas: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a4850 FUN_004a4850 ==== */

void FUN_004a4850(undefined4 *param_1)

{
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_34;
  undefined1 *puStackY_30;
  undefined1 *puStackY_2c;
  int iVar1;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_14;
  undefined1 local_10;
  int *local_c;
  undefined4 *local_8;
  
  puStack_18 = (undefined1 *)0x4a4861;
  local_8 = param_1;
  System__LStrAddRef((int)param_1);
  puStack_1c = &LAB_004a4901;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_14 = local_8;
  local_10 = 0xb;
  iVar1 = 0;
  puStackY_2c = (undefined1 *)0x4a4884;
  puStack_18 = &stack0xfffffffc;
  debug = Debug();
  puStackY_2c = (undefined1 *)0x4a4894;
  FUN_0045fa3c(debug,0x4a4918,2,iVar1);
  puStackY_2c = (undefined1 *)0x4a48a2;
  local_c = (int *)TCustomForm_virtual_02c((int *)&PTR_TWinControl_virtual_000_004a46b8,'\x01',0);
  puStackY_30 = &LAB_004a48e4;
  uStackY_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_34;
  puStackY_2c = &stack0xfffffffc;
  System__LStrAsg(local_c + 0xb5,local_8);
  (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStackY_34;
  puStackY_2c = &LAB_004a48eb;
  puStackY_30 = (undefined1 *)0x4a48e3;
  System_TObject_Free(local_c);
  return;
}


/* ==== 004a4928 TfrmIntro.FormShow ==== */

void TfrmIntro_FormShow(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18 [4];
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_2c = &LAB_004a49c1;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  System__LStrAsg((int *)(param_1[0xb4] + 0x300),(undefined4 *)param_1[0xb5]);
  FUN_004a2970((int *)local_8[0xb4]);
  TMediaPlayer_SetDisplay(local_8[0xb4],local_8);
  (**(code **)(*local_8 + 0x40))(local_8,local_18);
  FUN_004a3834(local_8[0xb4],local_18);
  FUN_004a36a4(local_8[0xb4],'\x01');
  FUN_004a2c98((int *)local_8[0xb4]);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = (undefined1 *)0x4a49ed;
  (**(code **)(*local_8 + 0xb0))(local_8,*local_8,puVar1);
  return;
}


/* ==== 004a49f4 TfrmIntro.MenuIntroNotify ==== */

void TfrmIntro_MenuIntroNotify(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  
  cVar1 = FUN_004a3b58(param_1[0xb4]);
  if (cVar1 == '\x02') {
    iVar2 = FUN_004a3b9c(param_1[0xb4]);
    iVar3 = FUN_004a3ac8(param_1[0xb4]);
    uVar4 = iVar3 - 1;
    iVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (SBORROW4(iVar3,1)) {
      uVar4 = System__RunError(uVar4);
      iVar5 = extraout_ECX_00;
      uVar6 = extraout_EDX_00;
    }
    if ((int)uVar4 <= iVar2) {
      FUN_004a2e80((int *)param_1[0xb4],uVar6,iVar5);
      FUN_004a3640(param_1[0xb4]);
      FUN_00449ac0(param_1,extraout_EDX_01,extraout_ECX_01);
    }
  }
  else {
    cVar1 = FUN_004a3b58(param_1[0xb4]);
    if (cVar1 == '\x01') {
      FUN_00449ac0(param_1,extraout_EDX_02,extraout_ECX_02);
    }
  }
  return;
}


/* ==== 004a4a6c TfrmIntro.message_0400 ==== */

void TfrmIntro_message_0400(int *param_1,undefined4 param_2,int param_3)

{
  FUN_00449ac0(param_1,param_2,param_3);
  return;
}


/* ==== 004a4a78 TfrmIntro.FormKeyDown ==== */

void TfrmIntro_FormKeyDown(int *param_1,undefined4 param_2,short *param_3)

{
  char cVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar3;
  
  if (*param_3 != 0x20) {
    cVar1 = FUN_004a3b58(param_1[0xb4]);
    if (cVar1 == '\x02') {
      FUN_004a2e80((int *)param_1[0xb4],extraout_EDX,extraout_ECX);
      iVar2 = extraout_ECX_00;
      uVar3 = extraout_EDX_00;
    }
    else {
      cVar1 = FUN_004a3b58(param_1[0xb4]);
      iVar2 = extraout_ECX_01;
      uVar3 = extraout_EDX_01;
      if ((cVar1 == '\x06') ||
         (cVar1 = FUN_004a3b58(param_1[0xb4]), iVar2 = extraout_ECX_02, uVar3 = extraout_EDX_02,
         cVar1 == '\x01')) {
        FUN_004a2bd0((int *)param_1[0xb4],uVar3,iVar2);
        iVar2 = extraout_ECX_03;
        uVar3 = extraout_EDX_03;
      }
    }
    FUN_00449ac0(param_1,uVar3,iVar2);
    return;
  }
  return;
}


/* ==== 004a4ad8 TfrmIntro.FormMouseDown ==== */

void TfrmIntro_FormMouseDown(int *param_1)

{
  char cVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar3;
  
  cVar1 = FUN_004a3b58(param_1[0xb4]);
  if (cVar1 == '\x02') {
    FUN_004a2e80((int *)param_1[0xb4],extraout_EDX,extraout_ECX);
    iVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  else {
    cVar1 = FUN_004a3b58(param_1[0xb4]);
    iVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
    if (cVar1 != '\x06') {
      cVar1 = FUN_004a3b58(param_1[0xb4]);
      iVar2 = extraout_ECX_02;
      uVar3 = extraout_EDX_02;
      if (cVar1 != '\x01') goto LAB_004a4b23;
    }
    FUN_004a2bd0((int *)param_1[0xb4],uVar3,iVar2);
    iVar2 = extraout_ECX_03;
    uVar3 = extraout_EDX_03;
  }
LAB_004a4b23:
  FUN_00449ac0(param_1,uVar3,iVar2);
  return;
}


/* ==== 004a4b30 FUN_004a4b30 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4b30(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad56c = _DAT_004ad56c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


