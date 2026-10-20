/* Menu.exe — units/FormResults.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a0624 TfrmResults.FormShow ==== */

void TfrmResults_FormShow(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int j;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int number;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  undefined4 extraout_EDX_08;
  int *in_FS_OFFSET;
  undefined4 *puVar7;
  int iStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined4 *local_11c;
  uint *local_118;
  uint *local_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int i_val;
  
  puStack_12c = &stack0xfffffffc;
  local_118 = (uint *)0x0;
  local_11c = (undefined4 *)0x0;
  local_114 = (uint *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_130 = &LAB_004a09a2;
  iStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_134;
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar7 = local_c;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar7,0);
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)&DAT_004a09dc);
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xbe],(undefined4 *)"focus"
              );
  iVar4 = FUN_00480390(*(int *)PTR_DAT_004ab694,0);
  iVar4 = *(int *)(iVar4 + 8);
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
               (undefined4 *)"win_ch",iVar4);
  j = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  uVar3 = j - 1;
  if (SBORROW4(j,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  if (-1 < (int)uVar3) {
    i_val = uVar3 + 1;
    j = 0;
    do {
      piVar5 = TCustomGDIGraphic_virtual_02c
                         ((int *)&PTR_TControl_virtual_000_004638d0,'\x01',param_1);
      (**(code **)(*piVar5 + 0x60))(piVar5,param_1);
      TControl_SetLeft(piVar5,*(undefined4 *)(param_1[0xbf] + 0x30));
      uVar3 = *(uint *)(param_1[0xbf] + 0x34);
      number = *(int *)(param_1[0xc0] + 0x34) - uVar3;
      if (SBORROW4(*(int *)(param_1[0xc0] + 0x34),uVar3)) {
        uVar3 = thunk_FUN_00402808(uVar3);
        number = extraout_EDX;
      }
      iVar6 = (int)((longlong)number * (longlong)j);
      if ((longlong)iVar6 != (longlong)number * (longlong)j) {
        uVar3 = thunk_FUN_00402808(uVar3);
        iVar6 = extraout_EDX_00;
      }
      number = iVar6 + uVar3;
      if (SCARRY4(iVar6,uVar3)) {
        thunk_FUN_00402808(uVar3);
        number = extraout_EDX_01;
      }
      TControl_SetTop(piVar5,number);
      (**(code **)(*piVar5 + 0x98))(piVar5,1);
      number = FUN_00480390(*(int *)PTR_DAT_004ab694,j);
      FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),piVar5,(undefined4 *)"res_ch",
                   *(int *)(number + 8));
      piVar5 = TCustomLabel_virtual_02c((int *)&PTR_TControl_virtual_000_00421a9c,'\x01',param_1);
      (**(code **)(*piVar5 + 0x60))(piVar5,param_1);
      TControl_SetLeft(piVar5,*(undefined4 *)(param_1[0xc2] + 0x30));
      uVar3 = param_1[0xbf];
      number = *(int *)(param_1[0xc0] + 0x34) - *(int *)(uVar3 + 0x34);
      if (SBORROW4(*(int *)(param_1[0xc0] + 0x34),*(int *)(uVar3 + 0x34))) {
        uVar3 = thunk_FUN_00402808(uVar3);
        number = extraout_EDX_02;
      }
      iVar6 = (int)((longlong)number * (longlong)j);
      if ((longlong)iVar6 != (longlong)number * (longlong)j) {
        thunk_FUN_00402808(uVar3);
        iVar6 = extraout_EDX_03;
      }
      piVar1 = (int *)(param_1[0xc2] + 0x34);
      number = iVar6 + *piVar1;
      if (SCARRY4(iVar6,*piVar1)) {
        thunk_FUN_00402808(param_1[0xc2]);
        number = extraout_EDX_04;
      }
      TControl_SetTop(piVar5,number);
      TLabel_SetTransparent(piVar5,'\x01');
      number = TFont_GetSize(*(int *)(param_1[0xc2] + 0x58));
      TFont_SetSize((int *)piVar5[0x16],number);
      TFont_SetColor((int *)piVar5[0x16],*(int *)(*(int *)(param_1[0xc2] + 0x58) + 0x18),
                     extraout_ECX);
      if (j == 0) {
        number = FUN_00480390(*(int *)PTR_DAT_004ab694,0);
        FUN_00481090(*(int *)(number + 4),(int *)&local_114);
        TGroupBox_SetCaption((int)piVar5,local_114);
      }
      else {
        number = FUN_00480390(*(int *)PTR_DAT_004ab694,j);
        number = *(int *)(number + 4);
        iVar6 = FUN_00480390(*(int *)PTR_DAT_004ab694,0);
        uVar3 = number - *(int *)(iVar6 + 4);
        if (SBORROW4(number,*(int *)(iVar6 + 4))) {
          uVar3 = thunk_FUN_00402808(uVar3);
        }
        FUN_00481090(uVar3,(int *)&local_11c);
        FUN_00403f28((int *)&local_118,(undefined4 *)&DAT_004a0a1c,local_11c);
        TGroupBox_SetCaption((int)piVar5,local_118);
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  TControl_SetLeft((int *)param_1[0xbe],*(undefined4 *)(param_1[0xc1] + 0x30));
  piVar5 = (int *)(param_1[0xbf] + 0x34);
  j = *(int *)(param_1[0xc0] + 0x34) - *piVar5;
  if (SBORROW4(*(int *)(param_1[0xc0] + 0x34),*piVar5)) {
    thunk_FUN_00402808(param_1[0xbf]);
    j = extraout_EDX_05;
  }
  lVar2 = (longlong)j * (longlong)*(int *)(*(uint *)PTR_DAT_004ab694 + 0xa4);
  j = (int)lVar2;
  if (j != lVar2) {
    thunk_FUN_00402808(*(uint *)PTR_DAT_004ab694);
    j = extraout_EDX_06;
  }
  piVar5 = (int *)(param_1[0xc1] + 0x34);
  number = j + *piVar5;
  if (SCARRY4(j,*piVar5)) {
    thunk_FUN_00402808(param_1[0xc1]);
    number = extraout_EDX_07;
  }
  TControl_SetTop((int *)param_1[0xbe],number);
  FUN_0042e978((int *)param_1[0xbe],extraout_EDX_08,extraout_ECX_00);
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = iVar4;
  FUN_00403c80((int *)&local_11c,3);
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 004a0a20 TfrmResults.virtual_0fc ==== */

void TfrmResults_virtual_0fc(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_004a0b2a;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar4 = &DAT_004a0b40;
  pcVar3 = "FlowToNext";
  iVar5 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9) == '\x01') {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049ba10);
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 8) == 0) {
    if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 2) == 0) {
      (**(code **)(*param_1 + 0xe8))
                (param_1,&PTR_TWinControl_virtual_000_0049f320,*param_1,pcVar3,puVar4,iVar5);
    }
    else {
      (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_0049fc84);
    }
  }
  else {
    (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_virtual_000_004a0058);
  }
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = pcVar3;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a0b5c TfrmResults.virtual_0e4 ==== */

void TfrmResults_virtual_0e4(int *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9);
  if (cVar1 == '\x01') {
    FUN_00403cb0(param_2,(undefined4 *)"QUICKRES");
  }
  else if (cVar1 == '\x02') {
    TGameMenuScreen_virtual_0e4(param_1,param_2);
  }
  return;
}


