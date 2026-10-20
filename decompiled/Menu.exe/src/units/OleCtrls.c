/* Menu.exe — units/OleCtrls.pas: 77 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0046ef70 FUN_0046ef70 ==== */

void FUN_0046ef70(int param_1,VARIANTARG *pvarg_val)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_14 = &LAB_0046efae;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0046d4f4(param_1,&local_8);
  FUN_00404f50(pvarg_val,local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046efb5;
  puStack_14 = (undefined1 *)0x46efad;
  FUN_00405860((int *)&local_8);
  return;
}


/* ==== 0046efbc FUN_0046efbc ==== */

void FUN_0046efbc(short *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (undefined4 *)0x0;
  puStack_1c = &LAB_0046f019;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00404e50((int *)&local_c,param_1);
  FUN_00405894((int *)&local_8,local_c);
  FUN_0046d544(param_2,local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046f020;
  puStack_1c = (undefined1 *)0x46f010;
  FUN_00405860((int *)&local_c);
  puStack_1c = (undefined1 *)0x46f018;
  FUN_00405860((int *)&local_8);
  return;
}


/* ==== 0046f038 FUN_0046f038 ==== */

void FUN_0046f038(LPCSTR multi_byte_str,VARIANTARG *pvarg_val)

{
  BSTR pOVar1;
  
  FUN_004049ec(pvarg_val);
  pOVar1 = FUN_00404950(multi_byte_str);
  *(BSTR *)((int)&pvarg_val->n1 + 8) = pOVar1;
  (pvarg_val->n1).n2.vt = 8;
  return;
}


/* ==== 0046f058 FUN_0046f058 ==== */

void FUN_0046f058(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  undefined4 in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffff0,in_stack_fffffff4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[1] = param_3;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}


/* ==== 0046f07c FUN_0046f07c ==== */

undefined4 FUN_0046f07c(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  cVar1 = FUN_00403030(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\0') {
    cVar1 = IsEqualGUID();
    if (cVar1 == '\0') {
      uVar2 = 0x80004002;
    }
    else {
      FUN_00403030(in_stack_00000004,(int *)&LAB_0046f0d4,in_stack_0000000c);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== 0046f0f8 FUN_0046f0f8 ==== */

void FUN_0046f0f8(void)

{
  FUN_00471128();
  return;
}


/* ==== 0046f10c FUN_0046f10c ==== */

undefined4 FUN_0046f10c(void)

{
  undefined4 *in_stack_00000008;
  
  *in_stack_00000008 = 0;
  return 0;
}


/* ==== 0046f11c FUN_0046f11c ==== */

undefined4 FUN_0046f11c(void)

{
  undefined4 *in_stack_00000010;
  
  *in_stack_00000010 = 0;
  return 0x80004001;
}


/* ==== 0046f170 TOleControl.virtual_02c ==== */

int * TOleControl_virtual_02c(int *param_1,char param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint message_id;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar4;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  char extraout_DL;
  char cVar5;
  int j;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar5 = extraout_DL;
  }
  TWinControl_virtual_02c(param_1,'\0',param_3);
  *(byte *)((int)param_1 + 0x22) = *(byte *)((int)param_1 + 0x22) | 2;
  (**(code **)(*param_1 + 0xb4))();
  *(int *)(param_1[0x7c] + 0x48) = *(int *)(param_1[0x7c] + 0x48) + 1;
  uVar4 = extraout_ECX_00;
  if (0 < *(int *)(param_1[0x7c] + 0x34)) {
    piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
    param_1[0x8a] = (int)piVar2;
    FUN_004104a4(piVar2,*(int *)(param_1[0x7c] + 0x34));
    i_val = *(int *)(param_1[0x8a] + 8);
    uVar4 = extraout_ECX_01;
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar2 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',uVar4);
        FUN_004103fc((int *)param_1[0x8a],j,(int)piVar2);
        j = j + 1;
        i_val = i_val + -1;
        uVar4 = extraout_ECX_02;
      } while (i_val != 0);
    }
  }
  if (0 < *(int *)(param_1[0x7c] + 0x3c)) {
    piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',uVar4);
    param_1[0x8b] = (int)piVar2;
    FUN_004104a4(piVar2,*(int *)(param_1[0x7c] + 0x3c));
    i_val = *(int *)(param_1[0x8b] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      uVar4 = extraout_ECX_03;
      do {
        piVar2 = FUN_0041b354((int *)&PTR_TPicture_virtual_000_0041702c,'\x01',uVar4);
        FUN_004103fc((int *)param_1[0x8b],j,(int)piVar2);
        iVar3 = FUN_004102b0((undefined4 *)param_1[0x8b],j);
        *(int **)(iVar3 + 0xc) = param_1;
        *(undefined1 **)(iVar3 + 8) = &LAB_00470274;
        j = j + 1;
        i_val = i_val + -1;
        uVar4 = extraout_ECX_04;
      } while (i_val != 0);
    }
  }
  i_val = FUN_0046f058((int *)&DAT_0046e828,'\x01',(int)param_1);
  param_1[0x7e] = i_val;
  FUN_0046f7e4((int)param_1);
  (**(code **)(*param_1 + 0xb8))(param_1,param_1[0x80]);
  message_id = (**(code **)(*(int *)param_1[0x80] + 0x58))();
  FUN_0046c2c0(message_id);
  if (((*(byte *)(param_1[0x7c] + 0x44) & 2) == 0) &&
     (((*(byte *)((int)param_1 + 0x226) & 2) != 0 || ((*(byte *)(param_1[0x7c] + 0x44) & 1) != 0))))
  {
    message_id = (**(code **)(*(int *)param_1[0x80] + 0xc))();
    FUN_0046c2c0(message_id);
  }
  FUN_00405860(param_1 + 0x81);
  puVar1 = (undefined4 *)param_1[0x80];
  message_id = (**(code **)*puVar1)();
  FUN_0046c2c0(message_id);
  if ((*(byte *)((int)param_1 + 0x225) & 4) != 0) {
    TGroupBox_SetVisible(param_1,0,extraout_ECX_05);
  }
  if ((*(byte *)((int)param_1 + 0x226) & 1) == 0) {
    param_1[0x10] = 0x1080;
  }
  else {
    param_1[0x10] = 0x1081;
  }
  TGroupBox_SetTabStop((int)param_1,(*(byte *)((int)param_1 + 0x225) & 0x60) == 0);
  message_id = FUN_0047119c();
  FUN_0046c2c0(message_id);
  if (cVar5 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = puVar1;
  }
  return param_1;
}


/* ==== 0046f3a4 FUN_0046f3a4 ==== */

void FUN_0046f3a4(int *param_1)

{
  int *piVar1;
  int i_val;
  int j;
  
  if (*param_1 != 0) {
    i_val = *(int *)(*param_1 + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_004102b0((undefined4 *)*param_1,j);
        FUN_00402f9c(piVar1);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_00402f9c((int *)*param_1);
    *param_1 = 0;
  }
  return;
}


/* ==== 0046f3dc TOleControl.Destroy ==== */

void TOleControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0047084c(piVar1,'\0');
  if (piVar1[0x80] != 0) {
    (**(code **)(*(int *)piVar1[0x80] + 0x18))();
  }
  FUN_0046fb4c((int)piVar1);
  FUN_0046fbf4((int)piVar1);
  FUN_00405860(piVar1 + 0x81);
  if (piVar1[0x80] != 0) {
    (**(code **)(*(int *)piVar1[0x80] + 0xc))();
  }
  FUN_00405860(piVar1 + 0x80);
  FUN_00402f9c((int *)piVar1[0x7e]);
  FUN_0046f3a4(piVar1 + 0x8a);
  FUN_0046f3a4(piVar1 + 0x8b);
  *(int *)(piVar1[0x7c] + 0x48) = *(int *)(piVar1[0x7c] + 0x48) + -1;
  if (*(int *)(piVar1[0x7c] + 0x48) == 0) {
    FUN_0046fbb4((int)piVar1);
  }
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0046f49c FUN_0046f49c ==== */

void FUN_0046f49c(int *param_1)

{
  HGLOBAL hGlobal;
  int iVar1;
  uint message_id;
  LPSTREAM *ppstm;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10 [2];
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10[1] = 0;
  local_10[0] = 0;
  puStack_24 = &LAB_0046f73c;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  if (param_1[0x82] == 0) {
    puStack_30 = &LAB_0046f707;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    uVar3 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    puStack_2c = &stack0xfffffffc;
    FUN_00405860(local_10);
    piVar2 = (int *)local_8[0x80];
    iVar1 = (**(code **)(*piVar2 + 0x10))();
    *in_FS_OFFSET = piVar2;
    if ((iVar1 != 0) || (local_10[0] == 0)) {
      iVar1 = *(int *)local_8[0x80];
      message_id = (**(code **)(iVar1 + 0xc))(iVar1,piVar2,uVar3,(int *)local_8[0x80]);
      FUN_0046c2c0(message_id);
    }
    hGlobal = (HGLOBAL)local_8[0x7f];
    if (hGlobal == (HGLOBAL)0x0) {
      message_id = (**(code **)(*(int *)local_8[0x81] + 0x20))();
      FUN_0046c2c0(message_id);
    }
    else {
      ppstm = (LPSTREAM *)FUN_00405860(local_10 + 1);
      message_id = CreateStreamOnHGlobal(hGlobal,0,ppstm);
      FUN_0046c2c0(message_id);
      message_id = (**(code **)(*(int *)local_8[0x81] + 0x14))();
      FUN_0046c2c0(message_id);
      FUN_0046fbf4((int)local_8);
    }
    FUN_00405860(local_8 + 0x82);
    message_id = (*(code *)**(undefined4 **)local_8[0x80])();
    FUN_0046c2c0(message_id);
    FUN_00405860(local_8 + 0x83);
    message_id = (*(code *)**(undefined4 **)local_8[0x80])();
    FUN_0046c2c0(message_id);
    FUN_00405860(local_8 + 0x84);
    (*(code *)**(undefined4 **)local_8[0x80])();
    piVar2 = local_8;
    if (local_8 != (int *)0x0) {
      piVar2 = local_8 + 0x8e;
    }
    FUN_0046c2d8((undefined4 *)local_8[0x80],&DAT_0046f77c,piVar2,local_8 + 0x87);
    iVar1 = local_8[0x7e];
    if (iVar1 != 0) {
      iVar1 = iVar1 + 8;
    }
    FUN_0046c2d8((undefined4 *)local_8[0x80],local_8[0x7c] + 0x10,iVar1,local_8 + 0x88);
    if ((*(byte *)(local_8[0x7c] + 0x2c) & 1) != 0) {
      (**(code **)(*local_8 + 0xbc))();
    }
    if ((*(byte *)(local_8[0x7c] + 0x2c) & 8) != 0) {
      (**(code **)(*local_8 + 0xbc))();
    }
    if ((*(byte *)(local_8[0x7c] + 0x2c) & 4) != 0) {
      (**(code **)(*local_8 + 0xbc))();
    }
    if ((*(byte *)(local_8[0x7c] + 0x2c) & 2) != 0) {
      (**(code **)(*local_8 + 0xbc))();
    }
    (**(code **)(*(int *)local_8[0x82] + 0x14))();
    FUN_0047119c();
    *in_FS_OFFSET = uStack_34;
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0046f743;
  puStack_24 = (undefined1 *)0x46f733;
  FUN_00405860(local_10);
  puStack_24 = (undefined1 *)0x46f73b;
  FUN_00405860(local_10 + 1);
  return;
}


/* ==== 0046f78c FUN_0046f78c ==== */

void FUN_0046f78c(uint message_id,byte *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  byte local_10c [256];
  byte *local_c;
  undefined1 local_8;
  
  if (message_id == 0x80040112) {
    FUN_00402ee4(**(int **)(param_4 + -4),local_10c);
    local_c = local_10c;
    local_8 = 4;
    uVar1 = FUN_0040b614((int)&DAT_0046bfdc,'\x01',param_2,0,&local_c);
    message_id = FUN_004036f4(uVar1);
  }
  FUN_0046c2c0(message_id);
  return;
}


/* ==== 0046f7e4 FUN_0046f7e4 ==== */

void FUN_0046f7e4(int param_1)

{
  LPVOID *ppv_val;
  uint message_id;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_18;
  byte *local_14;
  OLECHAR local_10 [2];
  int *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10[0] = L'\0';
  local_10[1] = L'\0';
  local_14 = (byte *)0x0;
  local_18 = (byte *)0x0;
  puStack_20 = &LAB_0046f8fe;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(*(int *)(param_1 + 0x1f0) + 0x28) != 0)
     ) {
    puStack_1c = &stack0xfffffffc;
    ppv_val = (LPVOID *)FUN_00405860((int *)&local_c);
    message_id = CoGetClassObject(*(IID **)(local_8 + 0x1f0),5,(LPVOID)0x0,&IID_0046f90c,ppv_val);
    FUN_0046c2c0(message_id);
    FUN_004043bc(local_10,*(OLECHAR **)(*(int *)(local_8 + 0x1f0) + 0x28));
    FUN_00405808((undefined4 *)PTR_PTR_004ab63c,(int *)&local_14);
    pbVar1 = local_14;
    FUN_00405860((int *)(local_8 + 0x200));
    message_id = (**(code **)(*local_c + 0x1c))();
    FUN_0046f78c(message_id,pbVar1,extraout_ECX,(int)puVar2);
  }
  else {
    FUN_00405808((undefined4 *)PTR_LAB_004ab95c,(int *)&local_18);
    pbVar1 = local_18;
    ppv_val = (LPVOID *)FUN_00405860((int *)(local_8 + 0x200));
    message_id = CoCreateInstance(*(IID **)(local_8 + 0x1f0),(LPUNKNOWN)0x0,5,&IID_0046f91c,ppv_val)
    ;
    FUN_0046f78c(message_id,pbVar1,extraout_ECX_00,(int)puVar3);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046f905;
  puStack_20 = (undefined1 *)0x46f8ed;
  FUN_00403c80((int *)&local_18,2);
  puStack_20 = (undefined1 *)0x46f8f5;
  FUN_004042b4((undefined4 *)local_10);
  puStack_20 = (undefined1 *)0x46f8fd;
  FUN_00405860((int *)&local_c);
  return;
}


/* ==== 0046f92c FUN_0046f92c ==== */

void FUN_0046f92c(int param_1)

{
  HGLOBAL global_alloc;
  LPSTREAM *ppstm;
  uint message_id;
  undefined4 *in_FS_OFFSET;
  int *piVar1;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0046f9ee;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  FUN_0046fbf4(param_1);
  uStack_30 = 0x46f95c;
  global_alloc = GlobalAlloc(2,0);
  *(HGLOBAL *)(local_8 + 0x1fc) = global_alloc;
  if (global_alloc == (HGLOBAL)0x0) {
    FUN_0040b5cc();
  }
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  ppstm = (LPSTREAM *)FUN_00405860(&local_c);
  message_id = CreateStreamOnHGlobal(*(HGLOBAL *)(local_8 + 0x1fc),0,ppstm);
  FUN_0046c2c0(message_id);
  piVar1 = *(int **)(local_8 + 0x204);
  message_id = (**(code **)(*piVar1 + 0x18))();
  FUN_0046c2c0(message_id);
  *in_FS_OFFSET = piVar1;
  *in_FS_OFFSET = uStack_30;
  FUN_00405860(&local_c);
  return;
}


/* ==== 0046f9fc TOleControl.virtual_098 ==== */

void TOleControl_virtual_098(int *param_1)

{
  int *piVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;
  undefined4 auStack_14 [4];
  
  FUN_0046f49c(param_1);
  if ((*(byte *)((int)param_1 + 0x225) & 4) == 0) {
    FUN_0042e13c((int)param_1,auStack_14);
    FUN_0043481c((int)param_1);
    (**(code **)(*(int *)param_1[0x80] + 0x2c))();
    if (param_1[0x85] == 0) {
      piVar1 = FUN_0040b694((int *)&DAT_0046bfdc,'\x01',(undefined4 *)PTR_PTR_004ab7cc);
      FUN_004036f4(piVar1);
    }
    FUN_0046fecc((int)param_1);
    if (*(char *)((int)param_1 + 0x47) == '\0') {
      pHVar2 = (HWND)FUN_004349e0(param_1);
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        nCmdShow = 0;
        pHVar2 = (HWND)FUN_004349e0(param_1);
        ShowWindow(pHVar2,nCmdShow);
      }
    }
  }
  else {
    TWinControl_virtual_098(param_1);
  }
  return;
}


/* ==== 0046faa0 TOleControl.DefaultHandler ==== */

void TOleControl_DefaultHandler(int *param_1,UINT *param_2)

{
  bool bVar1;
  HWND hWnd;
  UINT UVar2;
  UINT Msg;
  UINT wParam;
  
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    if ((0xbbff < *param_2) && (*param_2 < 0xc000)) {
      *param_2 = *param_2 - 0x9c00;
    }
    if ((*(byte *)((int)param_1 + 0x226) & 1) == 0) {
      UVar2 = param_2[2];
      wParam = param_2[1];
      Msg = *param_2;
      hWnd = (HWND)FUN_004349e0(param_1);
      UVar2 = CallWindowProcA((WNDPROC)param_1[0x4f],hWnd,Msg,wParam,UVar2);
      param_2[3] = UVar2;
      return;
    }
  }
  TWinControl_DefaultHandler((int)param_1,param_2);
  return;
}


/* ==== 0046fb04 TOleControl.virtual_004 ==== */

void TOleControl_virtual_004(int param_1,int *param_2)

{
  TControl_virtual_004(param_1,param_2);
  (**(code **)(*param_2 + 8))
            (param_2,"ControlData",*(int *)(param_1 + 0x200) != 0,FUN_00470bdc,param_1,&LAB_004702e0
             ,param_1);
  return;
}


/* ==== 0046fb4c FUN_0046fb4c ==== */

void FUN_0046fb4c(int param_1)

{
  FUN_0046c384(*(undefined4 **)(param_1 + 0x200),*(int *)(param_1 + 0x1f0) + 0x10,
               (int *)(param_1 + 0x220));
  FUN_0046c384(*(undefined4 **)(param_1 + 0x200),&DAT_0046fba4,(int *)(param_1 + 0x21c));
  FUN_00405860((int *)(param_1 + 0x210));
  FUN_00405860((int *)(param_1 + 0x20c));
  FUN_00405860((int *)(param_1 + 0x208));
  return;
}


/* ==== 0046fbb4 FUN_0046fbb4 ==== */

void FUN_0046fbb4(int param_1)

{
  int iVar1;
  int *piVar2;
  int i_val;
  int j;
  
  iVar1 = *(int *)(param_1 + 0x1f0);
  if (*(int *)(iVar1 + 0x4c) != 0) {
    i_val = *(int *)(*(int *)(iVar1 + 0x4c) + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar2 = (int *)FUN_004102b0(*(undefined4 **)(iVar1 + 0x4c),j);
        FUN_00402f9c(piVar2);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_00402f9c(*(int **)(iVar1 + 0x4c));
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  return;
}


/* ==== 0046fbf4 FUN_0046fbf4 ==== */

void FUN_0046fbf4(int param_1)

{
  if (*(HGLOBAL *)(param_1 + 0x1fc) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(param_1 + 0x1fc));
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  return;
}


/* ==== 0046fc14 TOleControl.virtual_09c ==== */

void TOleControl_virtual_09c(int param_1)

{
  if ((*(byte *)(param_1 + 0x225) & 4) == 0) {
    SetWindowLongA(*(HWND *)(param_1 + 0x14c),-4,*(LONG *)(param_1 + 0x13c));
    if (*(int *)(param_1 + 0x200) != 0) {
      (**(code **)(**(int **)(param_1 + 0x200) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
    return;
  }
  TWinControl_virtual_09c(param_1);
  return;
}


/* ==== 0046fc60 FUN_0046fc60 ==== */

void FUN_0046fc60(int *param_1,int param_2,undefined4 *param_3)

{
  int i_val;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = param_1[0x7c];
  i_val = 0;
  do {
    if (i_val == *(int *)(iVar2 + 0x20)) {
      uVar1 = 0;
      uVar4 = 0;
LAB_0046fcb3:
      *param_3 = uVar1;
      param_3[1] = uVar4;
      return;
    }
    if (param_2 == *(int *)(*(int *)(iVar2 + 0x24) + i_val * 4)) {
      if ((*(uint *)(iVar2 + 0x30) < 0x191) || (uVar3 = *(uint *)(iVar2 + 0x50), uVar3 == 0)) {
        iVar2 = FUN_00402f20(*param_1);
        iVar2 = FUN_00402f68(iVar2);
        uVar3 = iVar2 + 7U & 0xfffffff8;
      }
      uVar4 = *(undefined4 *)((int)param_1 + i_val * 8 + uVar3 + 4);
      uVar1 = *(undefined4 *)((int)param_1 + i_val * 8 + uVar3);
      goto LAB_0046fcb3;
    }
    i_val = i_val + 1;
  } while( true );
}


/* ==== 00470140 FUN_00470140 ==== */

void FUN_00470140(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  ushort uVar2;
  int i_val;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  code *local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_3;
  if (*(int *)(param_1[0x7c] + 0x30) < 300) {
    puStack_24 = (undefined1 *)0x47016c;
    FUN_0046ffa0(param_1,param_2,param_3);
  }
  else {
    puStack_24 = (undefined1 *)0x47017c;
    FUN_0046fc60(param_1,param_2,&local_14);
    if (0xffff < (int)local_14) {
      puStack_28 = &LAB_004701fd;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      i_val = local_8[2];
      if (i_val != 0) {
        bVar1 = false;
        puVar3 = (undefined4 *)(*local_8 + i_val * 0x10);
        do {
          puVar3 = puVar3 + -4;
          uVar2 = (ushort)*puVar3;
          if (uVar2 < 5) {
            if (uVar2 != 4) {
LAB_004701bb:
              if (!bVar1) {
                bVar1 = true;
              }
            }
          }
          else if (7 < uVar2) goto LAB_004701bb;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
      puStack_24 = &stack0xfffffffc;
      (*local_14)(local_10,local_c);
      *in_FS_OFFSET = uStack_2c;
    }
  }
  return;
}


/* ==== 00470220 TOleControl.virtual_0b8 ==== */

void TOleControl_virtual_0b8(void)

{
  return;
}


/* ==== 00470224 TOleControl.dynamic_ffd6 ==== */

char TOleControl_dynamic_ffd6(int *param_1,byte param_2)

{
  bool bVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  char cVar5;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  cVar5 = false;
  bVar1 = FUN_00434cdc((int)param_1);
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if ((bVar1 & param_2) != 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x30f;
    hWnd = (HWND)FUN_004349e0(param_1);
    LVar2 = CallWindowProcA((WNDPROC)param_1[0x4f],hWnd,Msg,wParam,lParam);
    cVar5 = LVar2 != 0;
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  if ((bool)cVar5 == false) {
    cVar5 = TWinControl_dynamic_ffd6(param_1,CONCAT31((int3)((uint)uVar4 >> 8),param_2),uVar3);
  }
  return cVar5;
}


/* ==== 0047039c TOleControl.virtual_07c ==== */

void TOleControl_virtual_07c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int mul_div;
  undefined4 local_14 [2];
  int y_val;
  int x_val;
  
  y_val = param_3;
  x_val = param_2;
  if (((param_5 != param_1[0xe]) && (0 < param_1[0xe])) ||
     ((param_1[0xf] != param_4 && (0 < param_1[0xf])))) {
    if ((*(byte *)((int)param_1 + 0x225) & 4) == 0) {
      iVar1 = MulDiv(param_4,0x9ec,*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34));
      mul_div = MulDiv(param_5,0x9ec,*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34));
      FUN_0040f7d0(mul_div,iVar1,local_14);
      iVar1 = (**(code **)(*(int *)param_1[0x80] + 0x44))();
      if (iVar1 == 0) goto LAB_00470427;
    }
    param_5 = param_1[0xe];
    param_4 = param_1[0xf];
  }
LAB_00470427:
  TWinControl_virtual_07c(param_1,x_val,y_val,param_4,param_5);
  return;
}


/* ==== 00470444 FUN_00470444 ==== */

void FUN_00470444(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00470464(param_1,param_2,param_3);
  return;
}


/* ==== 0047044c FUN_0047044c ==== */

void FUN_0047044c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 local_10 [4];
  undefined4 local_8;
  
  local_10[0] = 9;
  local_8 = param_3;
  FUN_00470734(param_1,param_2,local_10);
  return;
}


/* ==== 00470464 FUN_00470464 ==== */

void FUN_00470464(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 local_10 [4];
  undefined4 local_8;
  
  local_10[0] = 3;
  local_8 = param_3;
  FUN_00470734(param_1,param_2,local_10);
  return;
}


/* ==== 0047047c TOleControl.virtual_018 ==== */

void TOleControl_virtual_018(int *param_1,uint *multi_byte_str)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_c;
  uint *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  local_c = (uint *)0x0;
  puStack_20 = &LAB_00470522;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00403cf4((int *)&local_8,param_1[2]);
  TControl_virtual_018(param_1,multi_byte_str);
  if (param_1[0x82] != 0) {
    (**(code **)(*(int *)param_1[0x82] + 0x14))();
    if ((*(uint *)(param_1[0x7c] + 0x2c) & 0x30) != 0) {
      uVar2 = (*(uint *)(param_1[0x7c] + 0x2c) & 0x10) == 0;
      if ((bool)uVar2) {
        uVar1 = 0xfffffdfb;
      }
      else {
        uVar1 = 0xfffffdfa;
      }
      FUN_0046fe58(param_1,uVar1,(int *)&local_c);
      FUN_00403fec(local_8,local_c);
      if ((bool)uVar2) {
        FUN_004707ec(param_1,uVar1,(LPCSTR)multi_byte_str);
      }
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00470529;
  puStack_20 = (undefined1 *)0x470521;
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 0047055c FUN_0047055c ==== */

void FUN_0047055c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00470734(param_1,param_2,param_3);
  return;
}


/* ==== 00470564 TOleControl.virtual_060 ==== */

void TOleControl_virtual_060(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint message_id;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00470634;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piStack_28 = (int *)0x47058f;
  local_8 = param_1;
  TControl_virtual_060(param_1,param_2,0);
  if (param_2 != (int *)0x0) {
    piStack_2c = (int *)&LAB_004705c9;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    piStack_28 = (int *)&stack0xfffffffc;
    FUN_00405860(&local_c);
    iVar3 = (**(code **)(*(int *)local_8[0x80] + 0x10))();
    piVar2 = piStack_28;
    uVar1 = uStack_30;
    *in_FS_OFFSET = uStack_30;
    if ((iVar3 != 0) || (local_c == 0)) {
      piStack_28 = local_8;
      if (local_8 != (int *)0x0) {
        piStack_28 = local_8 + 0x94;
      }
      piStack_2c = (int *)local_8[0x80];
      uStack_30 = 0x4705fc;
      message_id = (**(code **)(*piStack_2c + 0xc))(*piStack_2c,uVar1,piVar2);
      piStack_28 = (int *)0x470601;
      FUN_0046c2c0(message_id);
    }
    if (local_8[0x82] != 0) {
      piStack_28 = (int *)0xffffffff;
      piStack_2c = (int *)local_8[0x82];
      uStack_30 = 0x47061e;
      (**(code **)(*piStack_2c + 0x14))();
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0047063b;
  puStack_20 = (undefined1 *)0x470633;
  FUN_00405860(&local_c);
  return;
}


/* ==== 00470644 FUN_00470644 ==== */

void FUN_00470644(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int j;
  int i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  puStack_30 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_00470726;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[0x8c] == '\0') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    puStack_34 = &LAB_00470709;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    i_val = *(int *)(param_1[0x8b] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        if (*(int *)(*(int *)(local_8[0x7c] + 0x40) + j * 4) == local_c) {
          piVar1 = (int *)FUN_004102b0((undefined4 *)local_8[0x8b],j);
          (**(code **)(*piVar1 + 8))(piVar1,local_10);
          FUN_0046d5ac(piVar1,&local_14);
          FUN_0047044c(local_8,local_c,local_14);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    *in_FS_OFFSET = uStack_38;
    *(undefined1 *)(local_8 + 0x8c) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0047072d;
  puStack_28 = (undefined1 *)0x470725;
  FUN_00405860(&local_14);
  return;
}


/* ==== 00470734 FUN_00470734 ==== */

void FUN_00470734(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  DWORD message_id_2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  VARIANTARG local_34 [2];
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_44 = (undefined1 *)0x470751;
  FUN_00404480((int)local_34,(int)&DAT_0040d7bc);
  puStack_48 = &LAB_004707db;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  FUN_0046f49c(param_1);
  local_10 = &DAT_004ab0ac;
  local_c = 1;
  local_8 = 1;
  piVar1 = (int *)param_1[0x83];
  local_14 = param_3;
  message_id_2 = (**(code **)(*piVar1 + 0x18))();
  if (message_id_2 != 0) {
    FUN_0046cbb4(message_id_2,local_34);
  }
  *in_FS_OFFSET = piVar1;
  FUN_0040454c((int)local_34,(int)&DAT_0040d7bc);
  return;
}


/* ==== 004707ec FUN_004707ec ==== */

void FUN_004707ec(int *param_1,undefined4 param_2,LPCSTR multi_byte_str)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined2 local_14 [4];
  BSTR bstr_string;
  
  local_14[0] = 8;
  bstr_string = FUN_00404950(multi_byte_str);
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_00470734(param_1,param_2,local_14);
  *in_FS_OFFSET = uStackY_2c;
  uStackY_2c = 0x47083b;
  SysFreeString(bstr_string);
  return;
}


/* ==== 0047084c FUN_0047084c ==== */

void FUN_0047084c(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = FUN_00444864(param_1);
  if (piVar2 != (int *)0x0) {
    if (param_2 == '\0') {
      if (param_1 == (int *)piVar2[0x99]) {
        piVar2[0x99] = 0;
      }
    }
    else {
      piVar1 = (int *)piVar2[0x99];
      if ((piVar1 != (int *)0x0) && (param_1 != piVar1)) {
        FUN_0042f720((int)piVar1,0xb02a,0,0);
      }
      piVar2[0x99] = (int)param_1;
    }
  }
  return;
}


/* ==== 0047089c FUN_0047089c ==== */

void FUN_0047089c(int *param_1,undefined4 param_2,undefined4 pvarg_src)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 union_2683;
  
  puStack_24 = &stack0xfffffffc;
  union_2683._12_4_ = 0;
  union_2683._8_4_ = 0;
  union_2683.decVal.Hi32 = 0;
  union_2683._0_4_ = 0;
  puStack_28 = &LAB_004708ea;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00404ffc((VARIANTARG *)&union_2683.n2,pvarg_src);
  FUN_0047055c(param_1,param_2,&union_2683);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004708f1;
  puStack_28 = (undefined1 *)0x4708e9;
  FUN_00405038((VARIANTARG *)&union_2683.n2);
  return;
}


/* ==== 004708f8 FUN_004708f8 ==== */

void FUN_004708f8(int *param_1,int param_2,undefined4 *param_3)

{
  VARIANTARG *variantarg;
  uint uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined3 uVar3;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined3 uVar4;
  uint *in_FS_OFFSET;
  uint uStack_34;
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 local_13;
  undefined2 local_12;
  uint local_10;
  undefined1 local_a;
  byte local_9;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  variantarg = (VARIANTARG *)*param_3;
  puStack_28 = &LAB_00470ad3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_2c;
  local_8 = param_1;
  switch(param_2) {
  case -0x25f:
  case -0x25e:
  case -0x25d:
    if (3 < (int)param_3[2]) {
      puStack_24 = &stack0xfffffffc;
      uVar1 = FUN_00404d38(variantarg + 3);
      local_10 = FUN_00404d38(variantarg + 2);
      local_10 = local_10 & 7;
      local_a = (&DAT_004ab0c0)[uVar1 & 7];
      local_9 = (&DAT_004ab0b8)[uVar1 & 7] | (&DAT_004ab0b0)[local_10];
      uVar1 = FUN_00404d38(variantarg + 1);
      uVar2 = FUN_00404d38(variantarg);
      uVar3 = (undefined3)((uint)extraout_ECX_01 >> 8);
      uVar4 = (undefined3)((uint)extraout_EDX >> 8);
      local_10 = uVar2;
      if (param_2 == -0x25f) {
        FUN_00403178(local_8,CONCAT31(uVar4,local_a),CONCAT31(uVar3,local_9));
        uStack_34 = uVar2;
      }
      else if (param_2 == -0x25e) {
        uStack_34 = 0x470ab0;
        FUN_00403178(local_8,CONCAT31(uVar4,local_9),uVar1);
      }
      else if (param_2 == -0x25d) {
        FUN_00403178(local_8,CONCAT31(uVar4,local_a),CONCAT31(uVar3,local_9));
        uStack_34 = uVar2;
      }
    }
    break;
  case -0x25c:
  case -0x25a:
    if (1 < (int)param_3[2]) {
      puStack_24 = &stack0xfffffffc;
      uVar1 = FUN_00404d38(variantarg + 1);
      local_12 = (undefined2)uVar1;
      uVar1 = FUN_00404d38(variantarg);
      uVar3 = (undefined3)((uint)extraout_ECX >> 8);
      if (param_2 == -0x25c) {
        FUN_00403178(local_8,&local_12,CONCAT31(uVar3,(&DAT_004ab0b0)[uVar1 & 7]));
      }
      else if (param_2 == -0x25a) {
        FUN_00403178(local_8,&local_12,CONCAT31(uVar3,(&DAT_004ab0b0)[uVar1 & 7]));
      }
      if ((*(byte *)((int)&variantarg[1].n1 + 1) & 0x40) != 0) {
        **(undefined2 **)((int)&variantarg[1].n1 + 8) = local_12;
      }
    }
    break;
  case -0x25b:
    if (0 < (int)param_3[2]) {
      puStack_24 = &stack0xfffffffc;
      uVar1 = FUN_00404d38(variantarg);
      local_13 = (undefined1)uVar1;
      FUN_00403178(local_8,&local_13,extraout_ECX_00);
      if ((*(byte *)((int)&variantarg->n1 + 1) & 0x40) != 0) {
        **(undefined1 **)((int)&variantarg->n1 + 8) = local_13;
      }
    }
    break;
  case -0x259:
    puStack_24 = &stack0xfffffffc;
    FUN_00403178(param_1,param_2,param_3);
    break;
  case -600:
    FUN_00403178(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = uStack_34;
  return;
}


/* ==== 00470af4 TOleControl.virtual_06c ==== */

void TOleControl_virtual_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  if (((0xbcff < *param_2) && (*param_2 < 0xbd09)) && (param_1[0x86] != 0)) {
    FUN_004349e0(param_1);
    GetMessageTime();
    iVar1 = (**(code **)(*(int *)param_1[0x86] + 0x14))();
    param_3 = extraout_ECX;
    if (iVar1 == 0) {
      param_2[3] = 1;
      return;
    }
  }
  if (*param_2 == 0xb008) {
    if ((*(char *)((int)param_1 + 0x49) != '\0') && (param_1[0x82] != 0)) {
      (**(code **)(*(int *)param_1[0x82] + 0x14))();
      (**(code **)(*(int *)param_1[0x82] + 0x14))();
      param_3 = extraout_ECX_00;
    }
  }
  else if (((*param_2 == 0xb009) && (*(char *)((int)param_1 + 0x4a) != '\0')) &&
          (param_1[0x82] != 0)) {
    (**(code **)(*(int *)param_1[0x82] + 0x14))();
    param_3 = extraout_ECX_01;
  }
  TWinControl_virtual_06c(param_1,param_2,param_3);
  return;
}


/* ==== 00470bdc FUN_00470bdc ==== */

void FUN_00470bdc(int param_1,int *param_2)

{
  LPVOID global_lock;
  SIZE_T SVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    puStack_18 = (undefined1 *)0x470c05;
    FUN_0046f92c(param_1);
  }
  puStack_1c = &LAB_00470c8c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  global_lock = GlobalLock(*(HGLOBAL *)(param_1 + 0x1fc));
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  SVar1 = GlobalSize(*(HGLOBAL *)(param_1 + 0x1fc));
  (**(code **)(*param_2 + 8))(param_2,global_lock,SVar1);
  *in_FS_OFFSET = uStack_2c;
  uStack_2c = 0x470c68;
  GlobalUnlock(*(HGLOBAL *)(param_1 + 0x1fc));
  return;
}


/* ==== 00470c9c TOleControl.WMEraseBkgnd ==== */

void TOleControl_WMEraseBkgnd(int *param_1,int param_2)

{
  if ((*(byte *)((int)param_1 + 0x225) & 4) == 0) {
    (**(code **)(*param_1 + -0x10))();
    return;
  }
  TWinControl_WMEraseBkgnd(param_1,param_2);
  return;
}


/* ==== 00470cbc TOleControl.WMPaint ==== */

void TOleControl_WMPaint(int *param_1,int param_2)

{
  HWND pHVar1;
  HDC hdcDraw;
  tagPAINTSTRUCT *ptVar2;
  tagPAINTSTRUCT tStack_5c;
  RECT local_1c;
  
  ptVar2 = &tStack_5c;
  if ((*(byte *)((int)param_1 + 0x225) & 4) == 0) {
    TWinControl_WMPaint(param_1,param_2);
  }
  else {
    hdcDraw = *(HDC *)(param_2 + 4);
    if (hdcDraw == (HDC)0x0) {
      pHVar1 = (HWND)FUN_004349e0(param_1);
      hdcDraw = BeginPaint(pHVar1,ptVar2);
    }
    ptVar2 = &tStack_5c;
    (**(code **)(*param_1 + 0x40))(param_1,&local_1c);
    OleDraw((LPUNKNOWN)param_1[0x80],1,hdcDraw,&local_1c);
    if (*(int *)(param_2 + 4) == 0) {
      pHVar1 = (HWND)FUN_004349e0(param_1);
      EndPaint(pHVar1,ptVar2);
    }
  }
  return;
}


/* ==== 00470d2c TOleControl.CMDocWindowActivate ==== */

void TOleControl_CMDocWindowActivate(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = FUN_00444864(param_1);
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_virtual_000_00442fd4);
  piVar3 = (int *)0x0;
  if ((char)uVar2 != '\0') {
    piVar3 = piVar1;
  }
  if ((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x217) == '\x01')) {
    (**(code **)(*(int *)param_1[0x86] + 0x1c))();
    if (*(int *)(param_2 + 4) == 0) {
      FUN_004715cc();
    }
  }
  return;
}


/* ==== 00470d88 TOleControl.CMColorChanged ==== */

void TOleControl_CMColorChanged(int *param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x470d97;
  local_8 = param_1;
  TWinControl_CMColorChanged(param_1);
  if (((*(byte *)(local_8[0x7c] + 0x2c) & 1) != 0) && (*(char *)((int)local_8 + 0x231) == '\0')) {
    puStack_c = (undefined1 *)0x470dba;
    bVar1 = FUN_00434cdc((int)local_8);
    if (bVar1) {
      *(undefined1 *)((int)local_8 + 0x231) = 1;
      puStack_10 = &LAB_00470e01;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      puStack_c = &stack0xfffffffc;
      FUN_00470444(local_8,0xfffffe0b,local_8[0x18]);
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)((int)local_8 + 0x231) = 0;
      return;
    }
  }
  return;
}


/* ==== 00470e0c TOleControl.CMEnabledChanged ==== */

void TOleControl_CMEnabledChanged(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x470e1b;
  local_8 = param_1;
  TWinControl_CMEnabledChanged(param_1);
  if (((*(byte *)(local_8[0x7c] + 0x2c) & 8) != 0) && (*(char *)((int)local_8 + 0x233) == '\0')) {
    puStack_c = (undefined1 *)0x470e3e;
    bVar1 = FUN_00434cdc((int)local_8);
    if (bVar1) {
      *(undefined1 *)((int)local_8 + 0x233) = 1;
      puStack_10 = &LAB_00470e8b;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      puStack_c = &stack0xfffffffc;
      cVar2 = (**(code **)(*local_8 + 0x4c))();
      TAgent_SetConnected(local_8,0xfffffdfe,-(ushort)(cVar2 != '\0'));
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)((int)local_8 + 0x233) = 0;
      return;
    }
  }
  return;
}


/* ==== 00470e98 TOleControl.CMFontChanged ==== */

void TOleControl_CMFontChanged(int *param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  _union_2683 union_2683;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  union_2683._12_4_ = 0;
  union_2683._8_4_ = 0;
  union_2683.decVal.Hi32 = 0;
  union_2683._0_4_ = 0;
  puStack_20 = &LAB_00470f8d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x470ebb;
  local_8 = param_1;
  TWinControl_CMFontChanged(param_1);
  if (((*(byte *)(local_8[0x7c] + 0x2c) & 6) != 0) && (*(char *)((int)local_8 + 0x232) == '\0')) {
    puStack_28 = (undefined1 *)0x470ee6;
    bVar1 = FUN_00434cdc((int)local_8);
    if (bVar1) {
      *(undefined1 *)((int)local_8 + 0x232) = 1;
      puStack_2c = &LAB_00470f70;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      if ((*(byte *)(local_8[0x7c] + 0x2c) & 2) != 0) {
        puStack_28 = &stack0xfffffffc;
        FUN_00470464(local_8,0xfffffdff,*(undefined4 *)(local_8[0x16] + 0x18));
      }
      if ((*(byte *)(local_8[0x7c] + 0x2c) & 4) != 0) {
        FUN_0046ef70(local_8[0x16],(VARIANTARG *)&union_2683.n2);
        FUN_0047089c(local_8,0xfffffe00,&union_2683);
      }
      *in_FS_OFFSET = uStack_30;
      *(undefined1 *)((int)local_8 + 0x232) = 0;
      return;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00470f94;
  puStack_20 = (undefined1 *)0x470f8c;
  FUN_00405038((VARIANTARG *)&union_2683.n2);
  return;
}


/* ==== 00470f98 TOleControl.CMDialogKey ==== */

void TOleControl_CMDialogKey(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  WORD aWStack_3c [2];
  undefined4 uStack_38;
  HACCEL pHStack_34;
  ushort uStack_30;
  tagMSG msg;
  
  cVar1 = FUN_00403178(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    uStack_38 = 0x10;
    iVar2 = (**(code **)(*(int *)param_1[0x82] + 0xc))();
    if ((iVar2 == 0) && (uStack_30 != 0)) {
      FUN_00402c30(&msg.hwnd,0x1c,0);
      msg.hwnd = (HWND)FUN_004349e0(param_1);
      msg.message = 0x100;
      msg.wParam = *(WPARAM *)(param_2 + 4);
      msg.lParam = *(LPARAM *)(param_2 + 8);
      BVar3 = IsAccelerator(pHStack_34,(uint)uStack_30,&msg,aWStack_3c);
      if (BVar3 != 0) {
        (**(code **)(*(int *)param_1[0x82] + 0x10))();
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
  }
  TWinControl_CMDialogKey((int)param_1,param_2);
  return;
}


/* ==== 00471050 TOleControl.CMUIActivate ==== */

void TOleControl_CMUIActivate(int *param_1)

{
  int *piVar1;
  undefined4 auStack_14 [4];
  
  piVar1 = FUN_00444864(param_1);
  if ((piVar1 == (int *)0x0) || (param_1 != (int *)piVar1[0x99])) {
    FUN_0042e13c((int)param_1,auStack_14);
    FUN_0043481c((int)param_1);
    (**(code **)(*(int *)param_1[0x80] + 0x2c))();
  }
  return;
}


/* ==== 004710a0 TOleControl.CMUIDeactivate ==== */

void TOleControl_CMUIDeactivate(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00444864(param_1);
  if ((piVar1 == (int *)0x0) || (param_1 == (int *)piVar1[0x99])) {
    if (param_1[0x85] != 0) {
      (**(code **)(*(int *)param_1[0x85] + 0x18))();
    }
    if ((piVar1 != (int *)0x0) && (param_1 == (int *)piVar1[0x82])) {
      FUN_00471494();
    }
  }
  return;
}


/* ==== 004710e8 TOleControl.virtual_028 ==== */

undefined4 TOleControl_virtual_028(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  cVar1 = FUN_00403030(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\0') {
    uVar2 = 0x80004002;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== 00471110 FUN_00471110 ==== */

undefined4 FUN_00471110(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 500) = *(int *)(in_stack_00000004 + 500) + 1;
  return *(undefined4 *)(in_stack_00000004 + 500);
}


/* ==== 00471128 FUN_00471128 ==== */

undefined4 FUN_00471128(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 500) = *(int *)(in_stack_00000004 + 500) + -1;
  return *(undefined4 *)(in_stack_00000004 + 500);
}


/* ==== 0047117c FUN_0047117c ==== */

undefined4 FUN_0047117c(void)

{
  int in_stack_00000004;
  
  FUN_0046fecc(in_stack_00000004);
  return 0;
}


/* ==== 0047119c FUN_0047119c ==== */

int FUN_0047119c(void)

{
  int mul_div;
  int mul_div_2;
  int *in_stack_00000004;
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int number;
  int number_2;
  int local_8;
  
  piVar3 = &number;
  uVar2 = 1;
  piVar1 = (int *)in_stack_00000004[0x80];
  local_8 = (**(code **)(*piVar1 + 0x48))();
  if (local_8 == 0) {
    mul_div = MulDiv(number,*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34),0x9ec);
    mul_div_2 = MulDiv(number_2,*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34),0x9ec);
    if (((*(byte *)((int)in_stack_00000004 + 0x225) & 4) != 0) && (in_stack_00000004[0x82] == 0)) {
      if (0x20 < mul_div) {
        mul_div = 0x20;
      }
      if (0x20 < mul_div_2) {
        mul_div_2 = 0x20;
      }
    }
    (**(code **)(*in_stack_00000004 + 0x7c))
              (in_stack_00000004,in_stack_00000004[0xc],in_stack_00000004[0xd],mul_div_2,mul_div,
               piVar1,uVar2,piVar3);
  }
  return local_8;
}


/* ==== 00471248 FUN_00471248 ==== */

undefined4 FUN_00471248(void)

{
  return 0x80004001;
}


/* ==== 00471254 FUN_00471254 ==== */

undefined4 FUN_00471254(void)

{
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  return 0x80004001;
}


/* ==== 0047126c FUN_0047126c ==== */

undefined4 FUN_0047126c(void)

{
  int iVar1;
  int *in_stack_00000008;
  float *in_stack_0000000c;
  byte in_stack_00000010;
  
  if ((in_stack_00000010 & 4) == 0) {
    iVar1 = FUN_00402ac8();
    *in_stack_00000008 = iVar1;
    iVar1 = FUN_00402ac8();
    in_stack_00000008[1] = iVar1;
  }
  else {
    iVar1 = MulDiv(*in_stack_00000008,*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34),0x9ec);
    *in_stack_0000000c = (float)iVar1;
    iVar1 = MulDiv(in_stack_00000008[1],*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34),0x9ec);
    in_stack_0000000c[1] = (float)iVar1;
  }
  return 0;
}


/* ==== 00471318 FUN_00471318 ==== */

undefined4 FUN_00471318(void)

{
  return 0x80004001;
}


/* ==== 00471324 FUN_00471324 ==== */

undefined4 FUN_00471324(void)

{
  return 0x80004001;
}


/* ==== 00471330 FUN_00471330 ==== */

undefined4 FUN_00471330(void)

{
  return 0;
}


/* ==== 004713f0 FUN_004713f0 ==== */

undefined4 FUN_004713f0(void)

{
  int i_val;
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  LPRECT in_stack_00000014;
  int in_stack_00000018;
  undefined4 local_14 [4];
  
  bVar3 = 0;
  if (in_stack_00000008 != (int *)0x0) {
    *in_stack_00000008 = 0;
  }
  if (in_stack_0000000c != (int *)0x0) {
    *in_stack_0000000c = 0;
  }
  piVar1 = in_stack_00000004;
  if (in_stack_00000004 != (int *)0x0) {
    piVar1 = in_stack_00000004 + 0x91;
  }
  FUN_00405878(in_stack_00000008,piVar1);
  FUN_00405860(in_stack_0000000c);
  FUN_0042e13c((int)in_stack_00000004,local_14);
  puVar2 = local_14;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *in_stack_00000010 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    in_stack_00000010 = in_stack_00000010 + (uint)bVar3 * -2 + 1;
  }
  SetRect(in_stack_00000014,0,0,0x7fff,0x7fff);
  *(undefined4 *)(in_stack_00000018 + 4) = 0;
  i_val = thunk_FUN_00434838(in_stack_00000004);
  *(int *)(in_stack_00000018 + 8) = i_val;
  *(undefined4 *)(in_stack_00000018 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0;
  return 0;
}


/* ==== 00471494 FUN_00471494 ==== */

undefined4 FUN_00471494(void)

{
  int *in_stack_00000004;
  
  FUN_004715cc();
  FUN_0047084c(in_stack_00000004,'\0');
  return 0;
}


/* ==== 004714b8 FUN_004714b8 ==== */

undefined4 FUN_004714b8(void)

{
  int in_stack_00000004;
  
  FUN_00405860((int *)(in_stack_00000004 + 0x218));
  FUN_00405860((int *)(in_stack_00000004 + 0x214));
  return 0;
}


/* ==== 004714dc FUN_004714dc ==== */

undefined4 FUN_004714dc(void)

{
  return 0x80004001;
}


/* ==== 004714e8 FUN_004714e8 ==== */

undefined4 FUN_004714e8(void)

{
  int in_stack_00000004;
  
  (**(code **)(**(int **)(in_stack_00000004 + 0x214) + 0x18))();
  return 0;
}


/* ==== 00471500 FUN_00471500 ==== */

undefined4 FUN_00471500(void)

{
  int in_stack_00000004;
  undefined4 local_14 [4];
  
  FUN_0040f7e8(0,0,0x7fff,local_14,0x7fff);
  (**(code **)(**(int **)(in_stack_00000004 + 0x214) + 0x1c))();
  return 0;
}


/* ==== 0047154c FUN_0047154c ==== */

undefined4 FUN_0047154c(void)

{
  return 0x800401a1;
}


/* ==== 00471558 FUN_00471558 ==== */

undefined4 FUN_00471558(void)

{
  return 0x80004001;
}


/* ==== 00471564 FUN_00471564 ==== */

undefined4 FUN_00471564(void)

{
  return 0;
}


/* ==== 004715cc FUN_004715cc ==== */

HRESULT FUN_004715cc(void)

{
  int *piVar1;
  HRESULT HVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  HOLEMENU in_stack_0000000c;
  HWND in_stack_00000010;
  
  piVar1 = (int *)FUN_0046fcd4(in_stack_00000004);
  HVar2 = 0;
  if (piVar1 != (int *)0x0) {
    FUN_0044104c(piVar1,in_stack_00000008);
    HVar2 = OleSetMenuDescriptor
                      (in_stack_0000000c,(HWND)piVar1[0xb],in_stack_00000010,(LPOLEINPLACEFRAME)0x0,
                       (LPOLEINPLACEACTIVEOBJECT)0x0);
  }
  return HVar2;
}


/* ==== 00471604 FUN_00471604 ==== */

undefined4 FUN_00471604(void)

{
  int menu_item_count;
  HMENU in_stack_00000008;
  
  while( true ) {
    menu_item_count = GetMenuItemCount(in_stack_00000008);
    if (menu_item_count < 1) break;
    RemoveMenu(in_stack_00000008,0,0x400);
  }
  return 0;
}


/* ==== 0047162c FUN_0047162c ==== */

undefined4 FUN_0047162c(void)

{
  return 0;
}


/* ==== 00471650 FUN_00471650 ==== */

undefined4 FUN_00471650(void)

{
  undefined4 *in_stack_00000008;
  
  *in_stack_00000008 = 0;
  return 0;
}


/* ==== 00471660 FUN_00471660 ==== */

undefined4 FUN_00471660(void)

{
  undefined4 *in_stack_00000010;
  
  *in_stack_00000010 = 0;
  return 0x80004001;
}


/* ==== 0047181c TOleControl.virtual_0bc ==== */

void TOleControl_virtual_0bc(void)

{
  short sVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 union_2683;
  
  puStack_24 = &stack0xfffffffc;
  puStack_30 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  union_2683._12_4_ = 0;
  union_2683._8_4_ = 0;
  union_2683.decVal.Hi32 = 0;
  union_2683._0_4_ = 0;
  puStack_28 = &LAB_00471a20;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  puStack_34 = &LAB_004719f2;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (in_stack_00000008 == -0x202) {
    if (*(char *)((int)in_stack_00000004 + 0x233) == '\0') {
      *(undefined1 *)((int)in_stack_00000004 + 0x233) = 1;
      puStack_40 = &LAB_0047191f;
      uStack_44 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_44;
      sVar1 = TAgent_GetConnected(in_stack_00000004,0xfffffdfe);
      (**(code **)(*in_stack_00000004 + 0x5c))(in_stack_00000004,sVar1 != 0);
      *in_FS_OFFSET = uStack_44;
      *(undefined1 *)((int)in_stack_00000004 + 0x233) = 0;
      return;
    }
  }
  else if (in_stack_00000008 == -0x201) {
    if (*(char *)((int)in_stack_00000004 + 0x232) == '\0') {
      *(undefined1 *)((int)in_stack_00000004 + 0x232) = 1;
      puStack_40 = &LAB_004719e1;
      uStack_44 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_44;
      puStack_3c = &stack0xfffffffc;
      puStack_30 = &stack0xfffffffc;
      puStack_24 = &stack0xfffffffc;
      iVar2 = FUN_0046fcc0(in_stack_00000004,0xfffffdff);
      TFont_SetColor((int *)in_stack_00000004[0x16],iVar2,extraout_ECX);
      *in_FS_OFFSET = uStack_44;
      *(undefined1 *)((int)in_stack_00000004 + 0x232) = 0;
      return;
    }
  }
  else if (in_stack_00000008 == -0x200) {
    if (*(char *)((int)in_stack_00000004 + 0x232) == '\0') {
      *(undefined1 *)((int)in_stack_00000004 + 0x232) = 1;
      puStack_40 = &LAB_00471984;
      uStack_44 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_44;
      puStack_3c = &stack0xfffffffc;
      puStack_30 = &stack0xfffffffc;
      puStack_24 = &stack0xfffffffc;
      FUN_0046feb4(in_stack_00000004,0xfffffe00,(VARIANTARG *)&union_2683.n2);
      FUN_0046efbc((short *)&union_2683,in_stack_00000004[0x16]);
      *in_FS_OFFSET = uStack_44;
      *(undefined1 *)((int)in_stack_00000004 + 0x232) = 0;
      return;
    }
  }
  else if ((in_stack_00000008 == -0x1f5) && (*(char *)((int)in_stack_00000004 + 0x231) == '\0')) {
    *(undefined1 *)((int)in_stack_00000004 + 0x231) = 1;
    puStack_40 = &LAB_004718bc;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    puStack_3c = &stack0xfffffffc;
    puStack_30 = &stack0xfffffffc;
    puStack_24 = &stack0xfffffffc;
    iVar2 = FUN_0046fcc0(in_stack_00000004,0xfffffe0b);
    TGroupBox_SetColor((int)in_stack_00000004,iVar2);
    *in_FS_OFFSET = uStack_44;
    *(undefined1 *)((int)in_stack_00000004 + 0x231) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_38;
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_00471a27;
  puStack_28 = (undefined1 *)0x471a1f;
  puStack_30 = &stack0xfffffffc;
  FUN_00405038((VARIANTARG *)&union_2683.n2);
  return;
}


/* ==== 00471a34 TOleControl.virtual_0c0 ==== */

undefined4 TOleControl_virtual_0c0(void)

{
  return 0;
}


