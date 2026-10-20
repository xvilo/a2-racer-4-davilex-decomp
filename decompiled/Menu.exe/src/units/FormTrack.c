/* Menu.exe — units/FormTrack.pas: 14 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00499c7c TfrmTrack.virtual_0fc ==== */

void TfrmTrack_virtual_0fc(int *param_1)

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
  puStack_18 = &LAB_00499d26;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14) = *(undefined4 *)(iVar1 + 8);
  FUN_004085ac(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14),(int *)&local_c);
  FUN_00403f28(&local_8,(undefined4 *)"setting tr to drive to ",local_c);
  iVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,iVar1);
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_00498aa4);
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00499d2d;
  puStack_18 = (undefined1 *)0x499d25;
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 00499d54 TfrmTrack.virtual_100 ==== */

void TfrmTrack_virtual_100(int *param_1)

{
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049b288);
  return;
}


/* ==== 00499d68 FUN_00499d68 ==== */

void FUN_00499d68(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int *in_FS_OFFSET;
  int iVar5;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_110 [256];
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10 = 0;
  puStack_120 = &LAB_00499ed2;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  local_8 = 0;
  iVar5 = 0;
  local_c = param_2;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403ee4(&local_10,(undefined4 *)".SetCurrentTrackIndex");
  iVar3 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar3,2,iVar5);
  FUN_0048d250(*(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10),param_2);
  iVar3 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  iVar3 = *(int *)(iVar3 + 8);
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xc9],
               (undefined4 *)"trname",iVar3);
  iVar5 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  bVar1 = FUN_00461c84(iVar5);
  if (bVar1) {
    TGroupBox_SetVisible((int *)param_1[0xb7],0,extraout_ECX);
    TGroupBox_SetVisible
              ((int *)param_1[0xd0],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  }
  else {
    TGroupBox_SetVisible((int *)param_1[0xd0],0,extraout_ECX);
    TGroupBox_SetVisible
              ((int *)param_1[0xb7],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_01);
  }
  uVar2 = *(uint *)(param_1[0xcc] + 0x30);
  iVar5 = *(int *)(param_1[0xcd] + 0x30) - uVar2;
  if (SBORROW4(*(int *)(param_1[0xcd] + 0x30),uVar2)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar5 = extraout_EDX_01;
  }
  iVar4 = (int)((longlong)iVar5 * (longlong)param_2);
  if ((longlong)iVar4 != (longlong)iVar5 * (longlong)param_2) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar4 = extraout_EDX_02;
  }
  iVar5 = iVar4 + uVar2;
  if (SCARRY4(iVar4,uVar2)) {
    thunk_FUN_00402808(uVar2);
    iVar5 = extraout_EDX_03;
  }
  TControl_SetLeft((int *)param_1[0xce],iVar5);
  TTimer_SetEnabled(param_1[0xc6],'\x01');
  FUN_0049a110((int)param_1,extraout_EDX_04,extraout_ECX_02);
  *in_FS_OFFSET = iVar3;
  FUN_00403c5c(&local_10);
  return;
}


/* ==== 00499f14 FUN_00499f14 ==== */

undefined4 FUN_00499f14(void)

{
  return *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 0xc);
}


/* ==== 00499f28 TfrmTrack.btnPrevTrackClick ==== */

void TfrmTrack_btnPrevTrackClick(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  uVar1 = FUN_00499f14();
  iVar2 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_00499d68(param_1,iVar2);
  FUN_00499f80(param_1);
  return;
}


/* ==== 00499f54 TfrmTrack.btnNextTrackClick ==== */

void TfrmTrack_btnNextTrackClick(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  uVar1 = FUN_00499f14();
  iVar2 = uVar1 + 1;
  if (SCARRY4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_00499d68(param_1,iVar2);
  FUN_00499f80(param_1);
  return;
}


/* ==== 00499f80 FUN_00499f80 ==== */

void FUN_00499f80(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint i_val;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_18;
  undefined4 local_14;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_0049a100;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  iVar3 = FUN_0048f44c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4),*(int *)(iVar2 + 8));
  FUN_00481090(*(int *)(iVar3 + 4),(int *)&local_c);
  TGroupBox_SetCaption(param_1[0xc0],local_c);
  iVar3 = FUN_0048f44c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4),*(int *)(iVar2 + 8));
  TGroupBox_SetCaption(param_1[0xc2],*(uint **)(iVar3 + 8));
  bVar1 = FUN_00461c84(iVar2);
  if (bVar1) {
    TGroupBox_SetCaption(param_1[0xc4],*(uint **)(PTR_DAT_004ab8b4 + 0x1c));
  }
  else {
    iVar3 = FUN_00462070(iVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                        *(undefined1 *)
                                         (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18)
                                         + 8)));
    i_val = iVar3 + 1;
    if (SCARRY4(iVar3,1)) {
      i_val = thunk_FUN_00402808(i_val);
    }
    i_val = i_val - 1;
    if (6 < i_val) {
      i_val = thunk_FUN_00402808(i_val);
    }
    FUN_00403cf4(&local_8,*(int *)(PTR_DAT_004ab5fc + (i_val + 1) * 4 + -4));
    local_18 = local_8;
    local_14 = CONCAT31(local_14._1_3_,0xb);
    FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x34),&local_18,0,(int *)&local_10);
    TGroupBox_SetCaption(param_1[0xc4],local_10);
  }
  TGroupBox_SetCaption(param_1[0xc1],*(uint **)(iVar2 + 0x30));
  TGroupBox_SetCaption(param_1[0xc5],*(uint **)(iVar2 + 0x34));
  iVar2 = FUN_00499f14();
  iVar3 = FUN_0049a464(param_1);
  (**(code **)(*(int *)param_1[199] + 0x5c))((int *)param_1[199],iVar2 < iVar3);
  iVar2 = FUN_00499f14();
  (**(code **)(*(int *)param_1[200] + 0x5c))((int *)param_1[200],0 < iVar2);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0049a107;
  puStack_28 = (undefined1 *)0x49a0ff;
  FUN_00403c80((int *)&local_10,3);
  return;
}


/* ==== 0049a110 FUN_0049a110 ==== */

void FUN_0049a110(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  DAT_004ad514 = 5;
  DAT_004ad518 = 0;
  TGroupBox_SetVisible(*(int **)(param_1 + 0x328),0,param_3);
  TGroupBox_SetVisible
            (*(int **)(param_1 + 0x32c),CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  FUN_0049a328(param_1);
  TTimer_SetEnabled(*(int *)(param_1 + 0x30c),'\0');
  TTimer_SetEnabled(*(int *)(param_1 + 0x30c),'\x01');
  return;
}


/* ==== 0049a168 TfrmTrack.FormShow ==== */

void TfrmTrack_FormShow(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
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
  puStack_11c = &LAB_0049a2d4;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,2);
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_0049a65c(param_1,extraout_EDX,extraout_ECX);
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],(undefined4 *)"hunny"
              );
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xd0],
               (undefined4 *)"shadow");
  iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  bVar2 = FUN_0048dcdc(iVar4);
  if (bVar2) {
    FUN_00499d68(param_1,*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 0xc))
    ;
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  else {
    iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
    FUN_00499d68(param_1,*(int *)(iVar4 + 0xc));
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX_01;
  }
  FUN_0049a110((int)param_1,uVar6,uVar5);
  iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  FUN_00491710(param_1[0xd1],*(int *)(iVar4 + 0xc));
  FUN_00499f80(param_1);
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049a328 FUN_0049a328 ==== */

void FUN_0049a328(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  int *in_FS_OFFSET;
  bool bVar5;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_18 = &LAB_0049a42d;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  if (DAT_004ad514 == 5) {
    DAT_004ad514 = 0;
    puVar1 = &stack0xfffffffc;
  }
  else {
    bVar5 = SCARRY4(DAT_004ad514,1);
    DAT_004ad514 = DAT_004ad514 + 1;
    puVar1 = &stack0xfffffffc;
    if (bVar5) {
      thunk_FUN_00402808(0);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_004085ac(*(undefined4 *)(iVar2 + 8),&local_c);
  FUN_00403f9c((int *)&local_8,3);
  iVar2 = DAT_004ad514;
  if (DAT_004ad518 == 0) {
    FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x328),local_8,
                 DAT_004ad514);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  else {
    FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x32c),local_8,
                 DAT_004ad514);
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
  }
  DAT_004ad518 = DAT_004ad518 ^ 1;
  TGroupBox_SetVisible
            (*(int **)(param_1 + 0x328),
             CONCAT31((int3)((uint)uVar4 >> 8),
                      *(undefined1 *)((int)*(int **)(param_1 + 0x328) + 0x47)) ^ 1,uVar3);
  TGroupBox_SetVisible
            (*(int **)(param_1 + 0x32c),
             CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                      *(undefined1 *)((int)*(int **)(param_1 + 0x32c) + 0x47)) ^ 1,extraout_ECX_01);
  *in_FS_OFFSET = iVar2;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049a458 TfrmTrack.timCyclerTimer ==== */

void TfrmTrack_timCyclerTimer(int param_1)

{
  FUN_0049a328(param_1);
  return;
}


/* ==== 0049a464 FUN_0049a464 ==== */

void FUN_0049a464(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *in_FS_OFFSET;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_110;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_110 = 0;
  puStack_120 = &LAB_0049a568;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  bVar2 = FUN_0048dcdc(iVar3);
  if (bVar2) {
    uVar4 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
    iVar3 = uVar4 - 1;
    if (SBORROW4(uVar4,1)) {
      thunk_FUN_00402808(uVar4);
    }
  }
  else {
    iVar3 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_004085ac(iVar3,&local_110);
  iVar3 = local_110;
  FUN_00403f9c(&local_8,5);
  iVar1 = local_8;
  uVar4 = FUN_0045f46c();
  FUN_0045fe88(uVar4,iVar1);
  *in_FS_OFFSET = iVar3;
  FUN_00403c5c(&local_110);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0049a5c0 TfrmTrack.tmrSoundTimer ==== */

void TfrmTrack_tmrSoundTimer(int param_1)

{
  bool bVar1;
  int iVar2;
  
  TTimer_SetEnabled(*(int *)(param_1 + 0x318),'\0');
  iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  bVar1 = FUN_00461c84(iVar2);
  if (bVar1) {
    iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
    FUN_0048063c(*(int **)PTR_DAT_004ab694,(undefined4 *)"CTI08_",*(int *)(iVar2 + 8));
    return;
  }
  iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_0048063c(*(int **)PTR_DAT_004ab694,(undefined4 *)"CTI07_",*(int *)(iVar2 + 8));
  return;
}


/* ==== 0049a65c FUN_0049a65c ==== */

void FUN_0049a65c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x49a672;
  piVar1 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',param_3);
  puStack_18 = &LAB_0049a71c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"butbigci",piVar1);
  piVar3 = piVar1;
  iVar2 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,iVar2,piVar3);
  param_1[0xd1] = (int)piVar3;
  iVar2 = *(int *)(param_1[0xcc] + 0x30);
  iVar4 = *(int *)(param_1[0xcd] + 0x30) - iVar2;
  if (SBORROW4(*(int *)(param_1[0xcd] + 0x30),iVar2)) {
    thunk_FUN_00402808((uint)param_1);
    iVar4 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  FUN_004916a4((int)piVar3,iVar2,*(undefined4 *)(param_1[0xcc] + 0x34),iVar4);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0049a723;
  puStack_18 = (undefined1 *)0x49a71b;
  FUN_00402f9c(piVar1);
  return;
}


