/* Menu.exe — units/FormException2.pas: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a7a48 FUN_004a7a48 ==== */

void FUN_004a7a48(void)

{
  LPCSTR lpParameters;
  HWND hwnd;
  HINSTANCE pHVar1;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpOperation;
  char *lpFile;
  undefined **ppuVar2;
  byte *pbVar3;
  LPCSTR lpDirectory;
  undefined **ppuVar4;
  byte *nShowCmd;
  undefined *local_1c;
  byte *local_18;
  undefined1 *local_14;
  undefined *local_8;
  
  local_14 = &stack0xfffffffc;
  i_val = 5;
  do {
    local_8 = (undefined *)0x0;
    i_val = i_val + -1;
  } while (i_val != 0);
  local_18 = &LAB_004a7b87;
  local_1c = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  ppuVar2 = &local_8;
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_14);
  FUN_00409254(&DAT_004a7b9c,&stack0xfffffff0,0,(int *)ppuVar2);
  nShowCmd = (byte *)0x5;
  lpDirectory = "";
  lpParameters = FUN_004040a0(local_8);
  lpFile = "SERVICE.EXE";
  lpOperation = "open";
  hwnd = (HWND)FUN_004349e0(*(int **)(*(int *)PTR_DAT_004ab8ac + 0x38));
  pHVar1 = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,(INT)nShowCmd);
  if ((int)pHVar1 < 0) {
    nShowCmd = (byte *)0x4a7acc;
    thunk_FUN_00402808((uint)pHVar1);
  }
  if ((int)pHVar1 < 0x21) {
    FUN_00409254((byte *)"Error: could not start Davi-Service, returnvalue %d",&stack0xfffffff0,0,
                 (int *)&local_18);
    pbVar3 = local_18;
    FUN_004a86f8(&DAT_004a8174,0,0x4a7c00,(int)local_18);
    ppuVar2 = &local_1c;
    FUN_00405808(&PTR_DAT_004a7a40,(int *)&stack0xffffffdc);
    ppuVar4 = ppuVar2;
    FUN_00405808(&PTR_DAT_004a7a38,(int *)&stack0xffffffd8);
    FUN_004a790c((int)ppuVar2,ppuVar2,(int *)&stack0xffffffe0);
    nShowCmd = pbVar3;
    FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&stack0xffffffd4);
    FUN_00409254(pbVar3,&stack0xfffffff0,0,(int *)ppuVar4);
    FUN_004529f8(local_1c,0,extraout_ECX);
  }
  *in_FS_OFFSET = nShowCmd;
  local_18 = &LAB_004a7b8e;
  local_1c = (undefined *)0x4a7b7e;
  FUN_00403c80((int *)&stack0xffffffd4,7);
  local_1c = (undefined *)0x4a7b86;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004a7c14 FUN_004a7c14 ==== */

void FUN_004a7c14(undefined4 param_1,uint *param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int i_val;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint *unaff_EBX;
  byte *unaff_ESI;
  undefined4 *unaff_EDI;
  int *in_FS_OFFSET;
  int local_68;
  undefined4 *local_64;
  byte *local_60;
  uint *local_5c;
  int local_58;
  undefined4 *local_54;
  byte *local_50;
  uint *local_4c;
  uint *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 *local_3c;
  int *piVar3;
  uint **ppuVar4;
  uint *local_34;
  uint *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_c;
  uint *local_8;
  
  i_val = 0xc;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  LOCK();
  UNLOCK();
  local_c = 0;
  local_20 = (undefined1 *)0x4a7c38;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  local_20 = (undefined1 *)0x4a7c40;
  FUN_00404090(local_c);
  local_24 = &LAB_004a7f19;
  local_28 = (uint *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined1 *)0x4a7c5a;
  local_20 = &stack0xfffffffc;
  FUN_0044d190(*(int *)PTR_DAT_004ab8ac,extraout_EDX,extraout_ECX);
  if (*(char *)(*(int *)PTR_DAT_004ab8ac + 0x8c) != '\0') {
    *in_FS_OFFSET = (int)local_28;
    local_20 = &LAB_004a7f20;
    local_24 = (undefined1 *)0x4a7ef1;
    FUN_00403c80(&local_68,8);
    local_24 = (undefined1 *)0x4a7efe;
    FUN_00403c80(&local_40,4);
    local_24 = (undefined1 *)0x4a7f0b;
    FUN_00403c80((int *)&local_20,4);
    local_24 = (undefined1 *)0x4a7f18;
    FUN_00403c80(&local_c,2);
    return;
  }
  local_2c = (undefined1 *)0x4a7c84;
  piVar2 = (int *)TCustomForm_virtual_02c
                            ((int *)&PTR_TWinControl_virtual_000_004a7568,'\x01',
                             *(undefined4 *)(*(int *)PTR_DAT_004ab8ac + 0x38));
  local_30 = (uint *)&LAB_004a7ed0;
  local_34 = (uint *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_34;
  local_2c = &stack0xfffffffc;
  TGroupBox_SetCaption((int)piVar2,local_8);
  piVar3 = (int *)&stack0xffffffec;
  local_3c = (undefined4 *)0x4a7cb1;
  FUN_00405808(&PTR_DAT_004a7824,(int *)&stack0xffffffe4);
  local_40 = 0x4a7cc2;
  local_3c = unaff_EDI;
  FUN_00405808(&PTR_DAT_004a7804,(int *)&local_20);
  puVar1 = local_3c;
  local_3c = (undefined4 *)0x4a7cce;
  FUN_004a790c((int)local_20,puVar1,(int *)&stack0xffffffe8);
  local_30 = local_8;
  local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,0xb);
  local_28 = local_8;
  local_24 = (undefined1 *)CONCAT31(local_24._1_3_,0xb);
  local_3c = (undefined4 *)0x4a7cf4;
  FUN_00409254(unaff_ESI,&local_30,1,piVar3);
  TGroupBox_SetCaption(piVar2[0xb4],unaff_EBX);
  (**(code **)(**(int **)(piVar2[0xb9] + 0x208) + 0x34))(*(int **)(piVar2[0xb9] + 0x208),local_c);
  ppuVar4 = &local_34;
  local_3c = (undefined4 *)0x4a7d2d;
  FUN_00405808(&PTR_DAT_004a782c,(int *)&local_3c);
  local_40 = 0x4a7d3e;
  FUN_00405808(&PTR_DAT_004a780c,&local_40);
  puVar1 = local_3c;
  local_3c = (undefined4 *)0x4a7d4a;
  FUN_004a790c(local_40,puVar1,(int *)&stack0xffffffc8);
  local_48 = local_8;
  local_44._0_1_ = 0xb;
  local_3c = (undefined4 *)0x4a7d63;
  FUN_00409254((byte *)ppuVar4,&local_48,0,(int *)ppuVar4);
  TGroupBox_SetCaption(piVar2[0xbb],local_34);
  ppuVar4 = &local_4c;
  local_3c = (undefined4 *)0x4a7d85;
  FUN_00405808(&PTR_DAT_004a7834,(int *)&local_54);
  local_3c = local_54;
  local_40 = 0x4a7d96;
  FUN_00405808(&PTR_DAT_004a7814,&local_58);
  puVar1 = local_3c;
  local_3c = (undefined4 *)0x4a7da2;
  FUN_004a790c(local_58,puVar1,(int *)&local_50);
  local_48 = local_8;
  local_44._0_1_ = 0xb;
  local_3c = (undefined4 *)0x4a7dbb;
  FUN_00409254(local_50,&local_48,0,(int *)ppuVar4);
  TGroupBox_SetCaption(piVar2[0xbc],local_4c);
  ppuVar4 = &local_5c;
  local_3c = (undefined4 *)0x4a7ddd;
  FUN_00405808(&PTR_DAT_004a783c,(int *)&local_64);
  local_3c = local_64;
  local_40 = 0x4a7dee;
  FUN_00405808(&PTR_DAT_004a781c,&local_68);
  puVar1 = local_3c;
  local_3c = (undefined4 *)0x4a7dfa;
  FUN_004a790c(local_68,puVar1,(int *)&local_60);
  local_48 = local_8;
  local_44 = CONCAT31(local_44._1_3_,0xb);
  local_3c = (undefined4 *)0x4a7e13;
  FUN_00409254(local_60,&local_48,0,(int *)ppuVar4);
  TGroupBox_SetCaption(piVar2[0xbd],local_5c);
  if (param_4 == '\x01') {
    FUN_0042ec0c((int *)piVar2[0xbd],extraout_EDX_00,extraout_ECX_00);
  }
  i_val = (**(code **)(*piVar2 + 0xd8))();
  if (i_val == 6) {
    local_3c = (undefined4 *)&LAB_004a7e76;
    local_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_40;
    local_44 = 0x4a7e60;
    FUN_004a7a48();
    local_44 = 0x4a7e6c;
    FUN_0044d3f0();
    *in_FS_OFFSET = local_40;
  }
  else if (i_val == 7) {
    local_3c = (undefined4 *)&LAB_004a7eab;
    local_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_40;
    local_44 = 0x4a7ea1;
    FUN_0044d3f0();
    *in_FS_OFFSET = local_40;
  }
  *in_FS_OFFSET = (int)local_34;
  local_2c = (undefined1 *)0x4a7ed7;
  local_30 = (uint *)0x4a7ecf;
  FUN_00402f9c(piVar2);
  return;
}


/* ==== 004a7f2c FUN_004a7f2c ==== */

void FUN_004a7f2c(undefined4 param_1,uint *param_2,int *param_3,byte param_4)

{
  uint uVar1;
  uint *in_FS_OFFSET;
  uint uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  uint *local_8;
  
  local_c = 0;
  puStack_18 = (undefined1 *)0x4a7f48;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_1c = &LAB_004a7f8c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_20;
  uVar1 = (uint)param_4;
  puStack_18 = &stack0xfffffffc;
  FUN_004a73c8(param_3,&local_c);
  FUN_004a7c14(param_1,local_8,local_c,(char)uVar1);
  *in_FS_OFFSET = uVar1;
  puStack_1c = &LAB_004a7f93;
  uStack_20 = 0x4a7f8b;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004a7f9c TfrmException2.btnCopyClick ==== */

void TfrmException2_btnCopyClick(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  pcVar1 = (char *)(**(code **)(**(int **)(*(int *)(param_1 + 0x2e4) + 0x208) + 0x4c))();
  iVar2 = FUN_004297dc(pcVar1,extraout_EDX,extraout_ECX);
  FUN_00429484(iVar2,pcVar1);
  return;
}


/* ==== 004a7fc4 TfrmException2.FormCloseQuery ==== */

void TfrmException2_FormCloseQuery(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(bool *)param_3 = *(int *)(param_1 + 0x234) != 0;
  return;
}


/* ==== 004a7fd0 TfrmException2.FormClose ==== */

void TfrmException2_FormClose(int param_1)

{
  if (*(int *)(param_1 + 0x234) == 2) {
    *(undefined4 *)(param_1 + 0x234) = 5;
  }
  return;
}


/* ==== 004a7fe4 TfrmException2.btnQuitClick ==== */

void TfrmException2_btnQuitClick(int param_1)

{
  *(undefined4 *)(param_1 + 0x234) = 7;
  return;
}


/* ==== 004a7ff0 TfrmException2.btnOkClick ==== */

void TfrmException2_btnOkClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x2ec) + 0xb4))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x234) = 6;
    return;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x2f0) + 0xb4))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x234) = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = 7;
  }
  return;
}


/* ==== 004a8040 TfrmException2.btnDetailsClick ==== */

void TfrmException2_btnDetailsClick(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  TControl_SetHeight(param_1,param_1[0xbf]);
  TGroupBox_SetVisible
            ((int *)param_1[0xba],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  TGroupBox_SetVisible
            ((int *)param_1[0xb9],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
  TGroupBox_SetVisible((int *)param_1[0xbe],0,extraout_ECX_01);
  return;
}


/* ==== 004a8080 TfrmException2.FormCreate ==== */

void TfrmException2_FormCreate(int param_1)

{
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


/* ==== 004a808c TfrmException2.FormKeyPress ==== */

void TfrmException2_FormKeyPress(int param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((*param_3 == '\x03') && (*(char *)(*(int *)(param_1 + 0x2e4) + 0x47) != '\0')) {
    pcVar1 = (char *)(**(code **)(**(int **)(*(int *)(param_1 + 0x2e4) + 0x208) + 0x4c))();
    iVar2 = FUN_004297dc(pcVar1,extraout_EDX,extraout_ECX);
    FUN_00429484(iVar2,pcVar1);
  }
  return;
}


/* ==== 004a80c4 TfrmException2.FormShow ==== */

void TfrmException2_FormShow(int *param_1)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  int extraout_EDX_00;
  
  iVar1 = param_1[0xf] - *(int *)(param_1[0xb9] + 0x3c);
  if (SBORROW4(param_1[0xf],*(int *)(param_1[0xb9] + 0x3c))) {
    param_1 = (int *)thunk_FUN_00402808((uint)param_1);
    iVar1 = extraout_EDX;
  }
  iVar2 = iVar1 + -8;
  if (SBORROW4(iVar1,8)) {
    param_1 = (int *)thunk_FUN_00402808((uint)param_1);
    iVar2 = extraout_EDX_00;
  }
  TControl_SetHeight(param_1,iVar2);
  return;
}


/* ==== 004a818c FUN_004a818c ==== */

bool FUN_004a818c(void)

{
  return DAT_004ab5c8 != 0;
}


/* ==== 004a819c FUN_004a819c ==== */

void FUN_004a819c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_14;
  int local_10;
  undefined *local_c;
  char *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  local_c = (undefined *)0x0;
  local_10 = 0;
  local_14 = (undefined *)0x0;
  puStack_24 = &LAB_004a825d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004029f0(0,(int *)&local_c);
  FUN_00408a30(local_c,(int *)&local_8);
  iVar1 = FUN_004041c8(".",local_8);
  if (0 < iVar1) {
    uVar2 = FUN_00403edc((int)local_8);
    iVar3 = uVar2 - iVar1;
    if (SBORROW4(uVar2,iVar1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      iVar3 = extraout_ECX;
    }
    iVar4 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402808(uVar2);
      iVar3 = extraout_ECX_00;
      iVar4 = extraout_EDX;
    }
    FUN_00404124((int *)&local_8,iVar4,iVar3);
  }
  FUN_004029f0(0,(int *)&local_14);
  FUN_004089d4(local_14,&local_10);
  FUN_00403f9c((int *)&local_8,4);
  FUN_00403cb0(param_1,(undefined4 *)local_8);
  *in_FS_OFFSET = &DAT_004a828c;
  FUN_00403c80((int *)&local_14,4);
  return;
}


/* ==== 004a8290 FUN_004a8290 ==== */

void FUN_004a8290(void)

{
  bool bVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_20 = &LAB_004a8364;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_2c = &LAB_004a833c;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  bVar1 = FUN_004a818c();
  if (bVar1) {
    local_8 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',DAT_004ab5c8,0x40);
    iVar2 = FUN_00412680(local_8);
    if (10000 < iVar2) {
      local_c = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',DAT_004ab5c8,0x21
                            );
      (**(code **)(*local_8 + 0xc))(local_8,0xffffd8f0,CONCAT22(extraout_var,2));
      FUN_00412728(local_c,local_8,10000);
      (**(code **)*local_c)(local_c,10000);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004a836b;
  puStack_20 = (undefined1 *)0x4a835b;
  FUN_00402f9c(local_c);
  puStack_20 = (undefined1 *)0x4a8363;
  FUN_00402f9c(local_8);
  return;
}


/* ==== 004a8398 FUN_004a8398 ==== */

void FUN_004a8398(int *param_1,char param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  if (param_2 != '\0') {
    puStack_24 = (undefined1 *)0x4a83ab;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  puStack_28 = &LAB_004a840e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00402f6c(param_1,'\0',param_3);
  bVar1 = FUN_004a818c();
  if (bVar1) {
    pcVar2 = "** Exception logging started ** ";
    FUN_004a86f8(*param_1,0,0,0x4a843c);
  }
  else {
    FUN_00405808(&PTR_DAT_004a8390,(int *)&local_8);
    pcVar2 = (char *)0x4a83f8;
    FUN_004529e8(local_8,0,extraout_ECX_00);
  }
  *in_FS_OFFSET = pcVar2;
  puStack_28 = &LAB_004a8415;
  uStack_2c = 0x4a840d;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004a8460 TDaviExceptionLogger.Destroy ==== */

void TDaviExceptionLogger_Destroy(int *param_1,char param_2)

{
  bool bVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4a846b;
  local_8 = FUN_004032fc(param_1,param_2);
  puStack_14 = &LAB_004a84b7;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcVar2 = (char *)0x4a8484;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  bVar1 = FUN_004a818c();
  if (bVar1) {
    pcVar2 = "**Destroy: Exception logging ended ** ";
    FUN_004a86f8(*local_8,0,0,0x4a84d8);
  }
  *in_FS_OFFSET = pcVar2;
  puStack_14 = &LAB_004a84be;
  uStack_18 = 0x4a84b6;
  TObject_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 004a8500 FUN_004a8500 ==== */

void FUN_004a8500(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_004a8589;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  *(undefined **)(iVar1 + 0xbc) = &DAT_004a8174;
  *(undefined1 **)(iVar1 + 0xb8) = &LAB_004a859c;
  FUN_004a819c((int *)&local_8);
  FUN_00403cb0(&DAT_004ab5c8,local_8);
  if (DAT_004ab5cc == 0) {
    DAT_004ab5cc = FUN_004a8398((int *)&DAT_004a8174,'\x01',extraout_ECX);
    piVar2 = FUN_00452d68(&DAT_00452a8c,extraout_EDX,extraout_ECX_00);
    FUN_00452e94(piVar2,0x4a8374);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004a8590;
  puStack_10 = (undefined1 *)0x4a8588;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004a86f8 FUN_004a86f8 ==== */

void FUN_004a86f8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  DWORD DVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar4;
  undefined4 uStack_390;
  undefined1 *puStack_38c;
  undefined1 *puStack_388;
  undefined4 uStack_384;
  undefined1 *puStack_380;
  undefined1 *puStack_37c;
  undefined4 uStack_378;
  undefined1 *puStack_374;
  undefined1 *puStack_370;
  undefined4 uStack_36c;
  undefined1 *puStack_368;
  undefined1 *puStack_364;
  int local_354 [5];
  char *local_340;
  undefined1 local_33c;
  byte *local_338;
  WORD local_334 [2];
  int local_330;
  uint local_32c;
  undefined4 local_1dc [115];
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_354[0] = 0;
  local_354[1] = 0;
  local_354[4] = 0;
  local_354[3] = 0;
  local_354[2] = 0;
  local_338 = (byte *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_364 = (undefined1 *)0x4a873b;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404090(param_3);
  puStack_364 = (undefined1 *)0x4a8743;
  FUN_00404090(param_4);
  puStack_364 = (undefined1 *)0x4a8754;
  FUN_00404480((int)local_334,(int)&DAT_004075bc);
  puStack_368 = &LAB_004a8a36;
  uStack_36c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_36c;
  puStack_370 = (undefined1 *)0x4a8767;
  puStack_364 = &stack0xfffffffc;
  bVar1 = FUN_004a818c();
  if (bVar1) {
    puStack_374 = &LAB_004a89e0;
    uStack_378 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_378;
    puStack_380 = &LAB_004a898c;
    uStack_384 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_384;
    puStack_388 = (undefined1 *)0x4a879c;
    puStack_37c = &stack0xfffffffc;
    puStack_370 = &stack0xfffffffc;
    FUN_00405b82(local_1dc,DAT_004ab5c8);
    puStack_38c = &LAB_004a8878;
    uStack_390 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_390;
    puStack_388 = &stack0xfffffffc;
    DVar2 = FUN_00408854(DAT_004ab5c8,0x3f,local_334);
    if (DVar2 == 0) {
      if ((local_32c & 1) != 0) {
        ppuVar4 = &local_10;
        FUN_00405808(&PTR_DAT_004a86f0,(int *)&local_338);
        local_340 = DAT_004ab5c8;
        local_33c = 0xb;
        FUN_00409254(local_338,&local_340,0,(int *)ppuVar4);
        FUN_004529e8((undefined *)local_10,0,extraout_ECX);
        piVar3 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_10);
        FUN_004036f4(piVar3);
      }
      if (40000 < local_330) {
        FUN_004a8290();
      }
      FUN_00405ca9((undefined *)local_1dc);
      FUN_0040284c();
    }
    else {
      FUN_00405ca2((undefined *)local_1dc);
      FUN_0040284c();
    }
    *in_FS_OFFSET = uStack_390;
    puStack_388 = &LAB_004a887f;
    puStack_38c = (undefined1 *)0x4a8877;
    FUN_004088c8((int)local_334);
    return;
  }
  *in_FS_OFFSET = uStack_36c;
  puStack_364 = &LAB_004a8a3d;
  puStack_368 = (undefined1 *)0x4a8a04;
  FUN_00403c80(local_354,5);
  puStack_368 = (undefined1 *)0x4a8a0f;
  FUN_00403c5c((int *)&local_338);
  puStack_368 = (undefined1 *)0x4a8a20;
  FUN_0040454c((int)local_334,(int)&DAT_004075bc);
  puStack_368 = (undefined1 *)0x4a8a2d;
  FUN_00403c80((int *)&local_10,2);
  puStack_368 = (undefined1 *)0x4a8a35;
  FUN_00403c5c(&param_4);
  return;
}


/* ==== 004a9170 entry ==== */

void entry(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  undefined *local_18;
  undefined4 *local_14 [4];
  
  local_1c = 0;
  local_14[0] = (undefined4 *)0x0;
  local_18 = (undefined *)0x0;
  puStack_2c = (undefined1 *)0x4a918e;
  FUN_004065ec(&DAT_004a8b48);
  puVar1 = PTR_DAT_004ab8ac;
  puStack_30 = &LAB_004a92f7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x4a91a9;
  puStack_2c = &stack0xfffffffc;
  FUN_0044d2a4();
  puStack_38 = (undefined1 *)0x4a91b3;
  FUN_0044d804(*(undefined4 *)puVar1,(int *)&local_18);
  puStack_38 = (undefined1 *)0x4a91be;
  FUN_004089a0(local_18,(int *)local_14);
  puStack_38 = (undefined1 *)0x4a91d0;
  FUN_00403f28((int *)PTR_DAT_004ab77c,local_14[0],(undefined4 *)"\\MenuTrac.log");
  puStack_38 = (undefined1 *)0x4a91dc;
  FUN_0044cea8(*(int *)puVar1,(uint *)"Race Menu");
  puStack_38 = (undefined1 *)0x4a91e6;
  cVar3 = FUN_0048159c((byte *)"/FIRSTTIME");
  if (cVar3 == '\0') {
    puStack_38 = (undefined1 *)0x4a9217;
    uVar6 = FUN_0048159c((byte *)"/DEFAULT");
    if ((char)uVar6 == '\0') {
      puStack_38 = (undefined1 *)0x4a9228;
      FUN_00451784(*(uint **)(PTR_DAT_004ab8b4 + 0x50));
      puStack_38 = (undefined1 *)0x4a922f;
      FUN_0044d3f0();
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &DAT_004a92fe;
      puStack_30 = (undefined1 *)0x4a92f6;
      FUN_00403c80(&local_1c,3);
      return;
    }
  }
  else {
    puStack_38 = (undefined1 *)0x4a91ef;
    iVar4 = FUN_0045f46c();
    puStack_38 = (undefined1 *)0x4a91f4;
    FUN_0045fcf0(iVar4);
    puStack_38 = (undefined1 *)0x4a91fc;
    FUN_00481394(&local_1c);
    puStack_38 = (undefined1 *)local_1c;
    puStack_3c = (undefined1 *)0x4a9205;
    uVar5 = FUN_0045f46c();
    puVar2 = puStack_38;
    puStack_38 = (undefined1 *)0x4a920b;
    uVar6 = FUN_0045fe88(uVar5,(int)puVar2);
  }
  puStack_38 = (undefined1 *)0x4a9239;
  FUN_00481634(uVar6);
  puStack_3c = &LAB_004a92be;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_48 = &LAB_004a92ad;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  FUN_004a8500();
  FUN_0044d2bc(*(int *)puVar1,(int)&PTR_TWinControl_virtual_000_004a4bb4,
               (undefined4 *)PTR_DAT_004ab7e0);
  FUN_0044d2bc(*(int *)puVar1,(int)&PTR_TPersistent_virtual_000_0047ed2c,
               (undefined4 *)PTR_DAT_004ab694);
  TForm_SetVisible(*(int **)PTR_DAT_004ab7e0,CONCAT31((int3)((uint)extraout_EDX >> 8),1),
                   extraout_ECX);
  FUN_0044d33c(*(int *)puVar1);
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &DAT_004a92b4;
  puStack_48 = (undefined1 *)0x4a92ac;
  FUN_00481588();
  return;
}

