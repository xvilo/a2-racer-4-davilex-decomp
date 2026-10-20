/* Menu.exe — units/FormDisplaySettings.pas: 28 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00487270 FUN_00487270 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487270(void)

{
  int i_val;
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 **ppuVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 *local_10;
  undefined *local_c;
  undefined4 *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = (undefined4 *)0x0;
  local_24 = 0;
  puStack_38 = &LAB_004873d8;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  bVar2 = _DAT_004ad420 == 0;
  _DAT_004ad420 = _DAT_004ad420 + -1;
  if (bVar2) {
    puStack_40 = (undefined1 *)0x4872aa;
    FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_c);
    puStack_40 = (undefined1 *)0x4872b5;
    FUN_004089a0(local_c,(int *)&local_8);
    puStack_40 = (undefined1 *)0x4872c2;
    FUN_00403ee4((int *)&local_8,(undefined4 *)"menu.ini");
    puStack_40 = (undefined1 *)0x4872d1;
    DAT_004ad424 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_8);
    puStack_44 = &LAB_004873b6;
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    i_val = 1;
    piVar1 = &DAT_004ad348;
    puStack_40 = &stack0xfffffffc;
    do {
      uVar4 = 0;
      ppuVar3 = &local_10;
      FUN_004085ac(i_val,&local_14);
      (**(code **)*DAT_004ad424)(DAT_004ad424,"MenuStrings",local_14,ppuVar3,uVar4);
      FUN_00403cb0(piVar1,local_10);
      i_val = i_val + 1;
      piVar1 = piVar1 + 1;
    } while (i_val != 0x29);
    i_val = 1;
    piVar1 = (int *)&DAT_004ad3e8;
    do {
      uVar4 = 0;
      ppuVar3 = &local_18;
      FUN_004085ac(i_val,&local_1c);
      (**(code **)*DAT_004ad424)(DAT_004ad424,"OrdinalWords",local_1c,ppuVar3,uVar4);
      FUN_00403cb0(piVar1,local_18);
      i_val = i_val + 1;
      piVar1 = piVar1 + 1;
    } while (i_val != 8);
    i_val = 1;
    piVar1 = (int *)&DAT_004ad404;
    do {
      uVar4 = 0;
      ppuVar3 = &local_20;
      FUN_004085ac(i_val,&local_24);
      (**(code **)*DAT_004ad424)(DAT_004ad424,"OrdinalNumbers",local_24,ppuVar3,uVar4);
      FUN_00403cb0(piVar1,local_20);
      i_val = i_val + 1;
      piVar1 = piVar1 + 1;
    } while (i_val != 8);
    *in_FS_OFFSET = uStack_48;
    puStack_40 = (undefined1 *)0x4873bd;
    puStack_44 = (undefined1 *)0x4873b5;
    FUN_00402f9c(DAT_004ad424);
    return;
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004873df;
  puStack_38 = (undefined1 *)0x4873d7;
  FUN_00403c80(&local_24,8);
  return;
}


/* ==== 00487440 FUN_00487440 ==== */

int FUN_00487440(short param_1,short param_2,char param_3)

{
  short *psVar1;
  int i_val;
  
  i_val = 0;
  psVar1 = &DAT_004ab4d8;
  while (((param_1 != *psVar1 || (param_2 != psVar1[1])) || (param_3 != (char)psVar1[2]))) {
    i_val = i_val + 1;
    psVar1 = psVar1 + 3;
    if (i_val == 10) {
      return -1;
    }
  }
  return i_val;
}


/* ==== 00487478 FUN_00487478 ==== */

void FUN_00487478(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if (9 < param_1) {
    uVar1 = FUN_00403c40("Assertion failure");
    thunk_FUN_00402808(uVar1);
  }
  uVar1 = (uint)((longlong)(int)param_1 * 3);
  if ((longlong)(int)uVar1 != (longlong)(int)param_1 * 3) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  *param_2 = *(undefined4 *)(&DAT_004ab4d8 + uVar1);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(&DAT_004ab4dc + uVar1 * 2);
  return;
}


/* ==== 00487514 FUN_00487514 ==== */

bool FUN_00487514(uint param_1)

{
  undefined4 local_c;
  byte local_8;
  
  FUN_00487478(param_1,&local_c);
  return 8 < local_8;
}


/* ==== 00487534 FUN_00487534 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487534(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad428 = _DAT_004ad428 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00487b80 FUN_00487b80 ==== */

uint FUN_00487b80(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 4) | 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    if (0xff < uVar1) {
      uVar1 = thunk_FUN_00402808(uVar1);
      return uVar1;
    }
  }
  return uVar1;
}


/* ==== 00487b9c FUN_00487b9c ==== */

void FUN_00487b9c(int param_1)

{
  FUN_00487514(*(uint *)(*(int *)(param_1 + 0x360) + 0x2c));
  return;
}


/* ==== 00487bb0 FUN_00487bb0 ==== */

void FUN_00487bb0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int i_val;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 *in_stack_00000004;
  char *in_stack_00000008;
  int *in_stack_00000010;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  bVar4 = 0;
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00487c36;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,(undefined4 *)"AddDriverToStrings",0);
  if (in_stack_00000004 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_0040277c(0x10);
    puVar3 = puVar2;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *puVar3 = *in_stack_00000004;
      in_stack_00000004 = in_stack_00000004 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
  }
  FUN_00403e14(&local_8,in_stack_00000008);
  (**(code **)(*in_stack_00000010 + 0x38))(in_stack_00000010,local_8,puVar2);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00487c3d;
  puStack_1c = (undefined1 *)0x487c35;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 00487d30 TfrmDisplaySettings.FormCreate ==== */

void TfrmDisplaySettings_FormCreate(int *param_1)

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
  puStack_118 = &LAB_00487dd8;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  DirectDrawEnumerateA();
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = FUN_00487bb0;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00487e08 TfrmDisplaySettings.FormDestroy ==== */

void TfrmDisplaySettings_FormDestroy(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
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
  puStack_118 = &LAB_00487ee2;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  while( true ) {
    iVar3 = (**(code **)(**(int **)(param_1[0xb5] + 0x1f0) + 0x14))();
    if (iVar3 < 3) break;
    iVar3 = (**(code **)(**(int **)(param_1[0xb5] + 0x1f0) + 0x18))
                      (*(int **)(param_1[0xb5] + 0x1f0),2);
    FUN_00402794(iVar3);
    (**(code **)(**(int **)(param_1[0xb5] + 0x1f0) + 0x44))(*(int **)(param_1[0xb5] + 0x1f0),2);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FormDestroy";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00487f14 TfrmDisplaySettings.FormShow ==== */

void TfrmDisplaySettings_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
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
  puStack_118 = &LAB_0048801d;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_004865e4(param_1);
  TGroupBox_SetCaption((int)param_1,*(uint **)PTR_DAT_004ab8b4);
  iVar3 = FUN_00485de8(param_1[0xc6],0);
  TGroupBox_SetCaption(iVar3,*(uint **)(PTR_DAT_004ab8b4 + 0x54));
  iVar3 = FUN_00485de8(param_1[0xc6],1);
  TGroupBox_SetCaption(iVar3,*(uint **)(PTR_DAT_004ab8b4 + 0x58));
  TGroupBox_SetCaption(param_1[0xd4],*(uint **)(PTR_DAT_004ab8b4 + 8));
  FUN_004884b8(param_1);
  (**(code **)(*(int *)param_1[0xcf] + 0xb0))();
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00488050 TfrmDisplaySettings.btnOkClick ==== */

void TfrmDisplaySettings_btnOkClick(int *param_1)

{
  FUN_00488808(param_1);
  return;
}


/* ==== 0048805c TfrmDisplaySettings.lblBrightnessLightClick ==== */

void TfrmDisplaySettings_lblBrightnessLightClick(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x324) + 0xb8))(*(int **)(param_1 + 0x324),1);
  return;
}


/* ==== 00488074 TfrmDisplaySettings.lblBrightnessDarkClick ==== */

void TfrmDisplaySettings_lblBrightnessDarkClick(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x328) + 0xb8))(*(int **)(param_1 + 0x328),1);
  return;
}


/* ==== 0048808c TfrmDisplaySettings.lblBilinearFilteringClick ==== */

void TfrmDisplaySettings_lblBilinearFilteringClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x32c);
  uVar2 = (**(code **)(*piVar1 + 0xb4))();
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2 ^ 1);
  return;
}


/* ==== 004880b8 TfrmDisplaySettings.lblAlphaBlendingClick ==== */

void TfrmDisplaySettings_lblAlphaBlendingClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x330);
  uVar2 = (**(code **)(*piVar1 + 0xb4))();
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2 ^ 1);
  return;
}


/* ==== 004880e4 TfrmDisplaySettings.lblRenderToVideoMemoryClick ==== */

void TfrmDisplaySettings_lblRenderToVideoMemoryClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x334);
  uVar2 = (**(code **)(*piVar1 + 0xb4))();
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2 ^ 1);
  return;
}


/* ==== 00488110 TfrmDisplaySettings.lblWaitVblClick ==== */

void TfrmDisplaySettings_lblWaitVblClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x338);
  uVar2 = (**(code **)(*piVar1 + 0xb4))();
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2 ^ 1);
  return;
}


/* ==== 0048813c FUN_0048813c ==== */

void FUN_0048813c(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint message_id;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_14 = &LAB_004881cc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x2d4);
  uVar2 = FUN_00427908(piVar1);
  piVar1 = (int *)piVar1[0x7c];
  (**(code **)(*piVar1 + 0x18))(piVar1,uVar2);
  FUN_00405860((int *)&local_8);
  message_id = DirectDrawCreate();
  FUN_0046c2c0(message_id);
  piVar1 = local_8;
  message_id = (**(code **)(*local_8 + 0x20))();
  FUN_0046c2c0(message_id);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&local_8);
  return;
}


/* ==== 004881d8 FUN_004881d8 ==== */

void FUN_004881d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint i_val;
  int iVar2;
  WPARAM param;
  
  i_val = (**(code **)(**(int **)(*(int *)(*(int *)(param_4 + -4) + 0x2d8) + 0x1f0) + 0x14))();
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    param = 0;
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_4 + -4) + 0x2d8) + 0x1f0);
      iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param);
      if (param_1 == iVar2) {
        FUN_00427924(*(int **)(*(int *)(param_4 + -4) + 0x2d8),param);
        return;
      }
      param = param + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00488248 FUN_00488248 ==== */

void FUN_00488248(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  int *piVar1;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_28;
  ushort local_20 [4];
  uint local_18;
  undefined1 local_14;
  uint local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  puStack_34 = &LAB_004882d6;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  piVar1 = &local_8;
  FUN_00487478(param_1,(undefined4 *)local_20);
  local_18 = (uint)local_20[0];
  local_14 = 0;
  FUN_00487478(param_1,&local_28);
  local_10 = (uint)local_28._2_2_;
  local_c = 0;
  FUN_00409254((byte *)"%d x %d",&local_18,1,piVar1);
  piVar1 = *(int **)(*(int *)(*(int *)(param_4 + -4) + 0x2d8) + 0x1f0);
  (**(code **)(*piVar1 + 0x38))(piVar1,local_8,param_1);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004882dd;
  puStack_34 = (undefined1 *)0x4882d5;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 004882f4 TfrmDisplaySettings.cboDriverChange ==== */

void TfrmDisplaySettings_cboDriverChange(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_118 = &LAB_00488484;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar4 = local_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar4,0);
  (**(code **)(**(int **)(local_8[0xb6] + 0x1f0) + 0x40))();
  FUN_00427924((int *)local_8[0xb6],0xffffffff);
  iVar3 = FUN_00427908((int *)local_8[0xb5]);
  if (-1 < iVar3) {
    FUN_004a70c0(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18),1);
    (**(code **)(*(int *)local_8[0xcd] + 0xb8))((int *)local_8[0xcd],0);
    iVar3 = FUN_00427908((int *)local_8[0xb5]);
    if (iVar3 < 2) {
      bVar1 = FUN_00487514(*(uint *)(local_8[0xd8] + 0x2c));
      if (bVar1) {
        FUN_00488248(3,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
        FUN_004881d8(3,extraout_EDX_01,puVar5,(int)&stack0xfffffffc);
      }
      else {
        FUN_00488248(1,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
        FUN_004881d8(1,extraout_EDX_02,puVar6,(int)&stack0xfffffffc);
      }
      (**(code **)(*(int *)local_8[0xb6] + 0x5c))((int *)local_8[0xb6],0);
    }
    else {
      FUN_0048813c();
      (**(code **)(*(int *)local_8[0xb6] + 0x5c))((int *)local_8[0xb6],1);
      FUN_004881d8(*(int *)(local_8[0xd8] + 0x2c),extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    }
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "cboDriverChange";
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 004884b8 FUN_004884b8 ==== */

void FUN_004884b8(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  WPARAM param;
  WPARAM extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 *puVar6;
  uint **ppuVar7;
  char *pcVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  undefined4 local_150;
  ushort local_148 [4];
  uint local_140;
  undefined1 local_13c;
  uint local_138;
  undefined1 local_134;
  uint *local_130;
  byte local_12c [32];
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_158 = &stack0xfffffffc;
  local_130 = (uint *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_15c = &LAB_0048878e;
  uStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_160;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar9 = &DAT_004887a4;
  pcVar8 = "CopySettingsToControls";
  iVar10 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar6 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar6,0);
  iVar4 = *(int *)param_1[0xd2];
  (**(code **)(iVar4 + 0xb8))
            ((int *)param_1[0xd2],*(undefined1 *)(param_1[0xd8] + 0x36),iVar4,pcVar8,puVar9,iVar10);
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xd2] + 0x5c))((int *)param_1[0xd2],uVar2);
  FUN_00488bd8((int)param_1);
  (**(code **)(*(int *)param_1[0xcb] + 0xb8))
            ((int *)param_1[0xcb],*(undefined1 *)(param_1[0xd8] + 0x34));
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xcb] + 0x5c))((int *)param_1[0xcb],uVar2);
  (**(code **)(*(int *)param_1[0xcc] + 0xb8))
            ((int *)param_1[0xcc],*(undefined1 *)(param_1[0xd8] + 0x35));
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xcc] + 0x5c))((int *)param_1[0xcc],uVar2);
  (**(code **)(*(int *)param_1[0xcd] + 0xb8))
            ((int *)param_1[0xcd],*(int *)(param_1[0xd8] + 0x38) == 0);
  (**(code **)(*(int *)param_1[0xce] + 0xb8))
            ((int *)param_1[0xce],*(undefined1 *)(param_1[0xd8] + 0x3d));
  (**(code **)(*(int *)param_1[0xc9] + 0xb8))
            ((int *)param_1[0xc9],*(int *)(param_1[0xd8] + 0x30) == 0);
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xc9] + 0x5c))((int *)param_1[0xc9],uVar2);
  (**(code **)(*(int *)param_1[0xca] + 0xb8))
            ((int *)param_1[0xca],*(int *)(param_1[0xd8] + 0x30) == 1);
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xca] + 0x5c))((int *)param_1[0xca],uVar2);
  uVar3 = (**(code **)(**(int **)(param_1[0xb5] + 0x1f0) + 0x14))();
  uVar1 = uVar3 - 1;
  if (SBORROW4(uVar3,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
    uVar1 = extraout_EDX;
  }
  if (0xff < uVar1) {
    thunk_FUN_00402808(uVar3);
    uVar1 = extraout_EDX_00;
  }
  FUN_00402d70(0x2000,uVar1,local_12c);
  uVar1 = *(uint *)(param_1[0xd8] + 0x20);
  bVar5 = uVar1 < 0xff;
  if (uVar1 < 0x100) {
    bVar5 = (local_12c[(int)uVar1 >> 3] >> (uVar1 & 7) & 1) != 0;
  }
  if (bVar5) {
    iVar4 = *(int *)(param_1[0xd8] + 0x20);
    param = iVar4 + 1;
    if (SCARRY4(iVar4,1)) {
      thunk_FUN_00402808(param_1[0xd8]);
      param = extraout_EDX_01;
    }
    FUN_00427924((int *)param_1[0xb5],param);
  }
  TfrmDisplaySettings_cboDriverChange(param_1);
  iVar4 = FUN_00427908((int *)param_1[0xb5]);
  if (1 < iVar4) {
    ppuVar7 = &local_130;
    FUN_00487478(*(uint *)(param_1[0xd8] + 0x2c),(undefined4 *)local_148);
    local_140 = (uint)local_148[0];
    local_13c = 0;
    FUN_00487478(*(uint *)(param_1[0xd8] + 0x2c),&local_150);
    local_138 = (uint)local_150._2_2_;
    local_134 = 0;
    FUN_00409254((byte *)"%d x %d",&local_140,1,(int *)ppuVar7);
    TGroupBox_SetCaption(param_1[0xb6],local_130);
  }
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xb6] + 0x5c))((int *)param_1[0xb6],uVar2);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = pcVar8;
  FUN_00403c5c((int *)&local_130);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004887dc FUN_004887dc ==== */

undefined4 * FUN_004887dc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int i_val;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_0040277c(0x10);
    puVar2 = puVar1;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + (uint)bVar3 * -2 + 1;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    }
  }
  return puVar1;
}


/* ==== 00488808 FUN_00488808 ==== */

void FUN_00488808(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  int *piVar7;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  undefined4 local_148;
  byte local_144;
  undefined4 local_140;
  ushort local_138 [4];
  uint local_130;
  undefined1 local_12c;
  uint local_128;
  undefined1 local_124;
  uint local_120;
  undefined1 local_11c;
  uint local_118;
  undefined1 local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_158 = &stack0xfffffffc;
  local_110 = 0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_15c = &LAB_00488afa;
  uStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_160;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar6 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar6,0);
  uVar1 = (**(code **)(*(int *)param_1[0xcb] + 0xb4))();
  *(undefined1 *)(param_1[0xd8] + 0x34) = uVar1;
  uVar1 = (**(code **)(*(int *)param_1[0xcc] + 0xb4))();
  *(undefined1 *)(param_1[0xd8] + 0x35) = uVar1;
  cVar2 = (**(code **)(*(int *)param_1[0xcd] + 0xb4))();
  if (cVar2 == '\0') {
    FUN_004a70c0(param_1[0xd8],1);
  }
  else {
    FUN_004a70c0(param_1[0xd8],0);
  }
  uVar1 = (**(code **)(*(int *)param_1[0xce] + 0xb4))();
  *(undefined1 *)(param_1[0xd8] + 0x3d) = uVar1;
  uVar1 = (**(code **)(*(int *)param_1[0xd2] + 0xb4))();
  *(undefined1 *)(param_1[0xd8] + 0x36) = uVar1;
  cVar2 = (**(code **)(*(int *)param_1[0xd7] + 0xb4))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)param_1[0xd6] + 0xb4))();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1[0xd8] + 0x3c) = 0;
    }
    else {
      *(undefined1 *)(param_1[0xd8] + 0x3c) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1[0xd8] + 0x3c) = 2;
  }
  cVar2 = (**(code **)(*(int *)param_1[0xc9] + 0xb4))();
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1[0xd8] + 0x30) = 1;
  }
  else {
    *(undefined4 *)(param_1[0xd8] + 0x30) = 0;
  }
  iVar4 = FUN_00427908((int *)param_1[0xb5]);
  if (-1 < iVar4) {
    iVar4 = FUN_00427908((int *)param_1[0xb5]);
    uVar3 = iVar4 - 1;
    if (SBORROW4(iVar4,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    iVar4 = param_1[0xd8];
    *(uint *)(iVar4 + 0x20) = uVar3;
    iVar4 = *(int *)(iVar4 + 0x24);
    if (iVar4 != 0) {
      FUN_00402794(iVar4);
    }
    piVar7 = (int *)param_1[0xb5];
    uVar5 = FUN_00427908(piVar7);
    piVar7 = (int *)piVar7[0x7c];
    puVar6 = (undefined4 *)(**(code **)(*piVar7 + 0x18))(piVar7,uVar5);
    puVar6 = FUN_004887dc(puVar6);
    iVar4 = param_1[0xd8];
    *(undefined4 **)(iVar4 + 0x24) = puVar6;
    *(undefined1 *)(iVar4 + 0x28) = 1;
  }
  iVar4 = FUN_00427908((int *)param_1[0xb6]);
  if (-1 < iVar4) {
    piVar7 = (int *)param_1[0xb6];
    uVar5 = FUN_00427908(piVar7);
    piVar7 = (int *)piVar7[0x7c];
    uVar5 = (**(code **)(*piVar7 + 0x18))(piVar7,uVar5);
    *(undefined4 *)(param_1[0xd8] + 0x2c) = uVar5;
    piVar7 = &local_110;
    local_130 = *(uint *)(param_1[0xd8] + 0x2c);
    local_12c = 0;
    FUN_00487478(local_130,(undefined4 *)local_138);
    local_128 = (uint)local_138[0];
    local_124 = 0;
    FUN_00487478(*(uint *)(param_1[0xd8] + 0x2c),&local_140);
    local_120 = (uint)local_140._2_2_;
    local_11c = 0;
    FUN_00487478(*(uint *)(param_1[0xd8] + 0x2c),&local_148);
    local_118 = (uint)local_144;
    local_114 = 0;
    FUN_00409254((byte *)"Resolution set to %d (%dx%dx%d)",&local_130,3,piVar7);
    iVar4 = local_110;
    uVar3 = FUN_0045f46c();
    FUN_0045fe88(uVar3,iVar4);
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "CopyControlsToSettings";
  FUN_00403c5c(&local_110);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00488b60 TfrmDisplaySettings.btnHelpStdClick ==== */

void TfrmDisplaySettings_btnHelpStdClick(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004864d8(*(int *)(param_1 + 0x318));
  if (iVar1 == 0) {
    FUN_0044d7f0(*(int *)PTR_DAT_004ab8ac,0xf);
    return;
  }
  FUN_0044d7f0(*(int *)PTR_DAT_004ab8ac,0xe);
  return;
}


/* ==== 00488ba0 TfrmDisplaySettings.lblMipmappingClick ==== */

void TfrmDisplaySettings_lblMipmappingClick(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = FUN_00487b9c(param_1);
  if (cVar2 != '\0') {
    piVar1 = *(int **)(param_1 + 0x348);
    uVar3 = (**(code **)(*piVar1 + 0xb4))();
    (**(code **)(*piVar1 + 0xb8))(piVar1,uVar3 ^ 1);
  }
  return;
}


/* ==== 00488bd8 FUN_00488bd8 ==== */

void FUN_00488bd8(int param_1)

{
  char cVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))
            (*(int **)(param_1 + 0x354),*(char *)(*(int *)(param_1 + 0x360) + 0x3c) == '\0');
  (**(code **)(**(int **)(param_1 + 0x358) + 0xb8))
            (*(int **)(param_1 + 0x358),*(char *)(*(int *)(param_1 + 0x360) + 0x3c) == '\x01');
  (**(code **)(**(int **)(param_1 + 0x35c) + 0xb8))
            (*(int **)(param_1 + 0x35c),*(char *)(*(int *)(param_1 + 0x360) + 0x3c) == '\x02');
  cVar1 = FUN_00487b9c(param_1);
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x354) + 0x5c))(*(int **)(param_1 + 0x354),0);
    (**(code **)(**(int **)(param_1 + 0x358) + 0x5c))(*(int **)(param_1 + 0x358),0);
    (**(code **)(**(int **)(param_1 + 0x35c) + 0x5c))(*(int **)(param_1 + 0x35c),0);
  }
  else {
    iVar2 = FUN_00480c9c();
    if (0 < iVar2) {
      if (iVar2 < 0x1000000) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0xb4))();
        if (cVar1 != '\0') {
          (**(code **)(**(int **)(param_1 + 0x358) + 0xb8))(*(int **)(param_1 + 0x358),1);
        }
        (**(code **)(**(int **)(param_1 + 0x35c) + 0x5c))(*(int **)(param_1 + 0x35c),0);
      }
      if (iVar2 < 0x800000) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x358) + 0xb4))();
        if (cVar1 != '\0') {
          (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))(*(int **)(param_1 + 0x354),1);
        }
        (**(code **)(**(int **)(param_1 + 0x358) + 0x5c))(*(int **)(param_1 + 0x358),0);
      }
    }
  }
  return;
}


