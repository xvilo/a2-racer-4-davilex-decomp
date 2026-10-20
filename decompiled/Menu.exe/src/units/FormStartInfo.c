/* Menu.exe — units/FormStartInfo.pas: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004977a0 TfrmStartInfo.GDIFormShow ==== */

void TfrmStartInfo_GDIFormShow(int *param_1)

{
  TfrmCoolDialog_GDIFormShow(param_1);
  (**(code **)(*(int *)param_1[0xbe] + 0xbc))
            ((int *)param_1[0xbe],
             *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x1f));
  (**(code **)(*(int *)param_1[0xbd] + 0xb4))();
  return;
}


/* ==== 004977e0 TfrmStartInfo.btnOkClick ==== */

void TfrmStartInfo_btnOkClick(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0xb8))();
  *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x1f) = uVar1;
  *(undefined4 *)(param_1 + 0x234) = 1;
  return;
}


/* ==== 00497818 TfrmStartInfo.virtual_0e4 ==== */

void TfrmStartInfo_virtual_0e4(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0xc) +
                   0x24);
  if (cVar1 == '\0') {
    FUN_00403cb0(param_2,(undefined4 *)"POPSTRT0");
    return;
  }
  if (cVar1 == '\x01') {
    FUN_00403cb0(param_2,(undefined4 *)"POPSTRT2");
    return;
  }
  if (cVar1 == '\x02') {
    FUN_00403cb0(param_2,(undefined4 *)"POPSTRT1");
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00403cb0(param_2,(undefined4 *)"POPSTRT3");
  }
  return;
}


/* ==== 004978d0 TfrmStartInfo.lblClickAreaClick ==== */

void TfrmStartInfo_lblClickAreaClick(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x2f8),param_2,param_3);
  return;
}


/* ==== 00497b4c FUN_00497b4c ==== */

void FUN_00497b4c(void)

{
  uint i_val;
  undefined4 extraout_ECX;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_00497c3f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x497b81;
  FUN_00403f28((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"menu.ini");
  puStack_34 = (undefined1 *)0x497b90;
  local_c = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_10);
  puStack_38 = &LAB_00497c1d;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_8 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  i_val = (**(code **)(*local_c + 8))(local_c,"CONTROLKEYS","count");
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      uVar2 = 0;
      puVar1 = &local_14;
      FUN_004085ac(j,&local_18);
      (**(code **)*local_c)(local_c,"CONTROLKEYS",local_18,puVar1,uVar2);
      (**(code **)(*local_8 + 0x34))(local_8,local_14);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = 0;
  puStack_38 = &LAB_00497c24;
  uStack_3c = 0x497c1c;
  FUN_0040c968(&local_c);
  return;
}


/* ==== 00497c88 FUN_00497c88 ==== */

void FUN_00497c88(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  char **ppcVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  char *local_c;
  int local_8;
  
  local_c = (char *)0x0;
  local_10 = 0;
  puStack_1c = (undefined1 *)0x497ca0;
  local_8 = param_1;
  FUN_00404090(param_1);
  puStack_20 = &LAB_00497d51;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00403cf4((int *)&local_c,local_8);
  (**(code **)(*param_2 + 0x40))();
  iVar1 = FUN_004041c8(",",local_c);
  while (iVar1 != 0) {
    piVar4 = &local_10;
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      thunk_FUN_00402808((uint)piVar4);
      uVar2 = extraout_ECX;
    }
    FUN_004040e4((int)local_c,0,uVar2,piVar4);
    (**(code **)(*param_2 + 0x34))(param_2,local_10);
    ppcVar5 = &local_c;
    uVar2 = FUN_00403edc((int)local_c);
    iVar3 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402808(uVar2);
      uVar2 = extraout_ECX_00;
      iVar3 = extraout_EDX;
    }
    FUN_004040e4((int)local_c,iVar3,uVar2,(int *)ppcVar5);
    iVar1 = FUN_004041c8(",",local_c);
  }
  (**(code **)(*param_2 + 0x34))(param_2,local_c);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00497d58;
  puStack_20 = (undefined1 *)0x497d50;
  FUN_00403c80(&local_10,3);
  return;
}


