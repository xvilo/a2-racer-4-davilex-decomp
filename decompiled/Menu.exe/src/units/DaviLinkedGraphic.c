/* Menu.exe — units/DaviLinkedGraphic.pas: 12 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045cb0c TDaviLinkedGraphic.virtual_014 ==== */

int * TDaviLinkedGraphic_virtual_014(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  piVar1 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1 = (int *)FUN_0040312c(piVar1,(int)&LAB_00454aa4);
  FUN_00456634(piVar1,extraout_EDX,extraout_ECX_01);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0045cb70 TDaviLinkedGraphic.Destroy ==== */

void TDaviLinkedGraphic_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45cb7b;
  local_8 = FUN_004032fc(param_1,param_2);
  puStack_14 = &LAB_0045cbb6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040c968(local_8 + 3);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045cbbd;
  puStack_14 = (undefined1 *)0x45cbb5;
  TPersistent_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0045cbd0 FUN_0045cbd0 ==== */

void FUN_0045cbd0(undefined4 param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = (undefined1 *)0x45cbe0;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_14 = &LAB_0045cc50;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  bVar1 = true;
  puStack_10 = &stack0xfffffffc;
  FUN_00403fec(local_8,(uint *)&DAT_0045cc68);
  if (((!bVar1) && (FUN_00403fec(local_8,(uint *)&DAT_0045cc78), !bVar1)) &&
     (FUN_00403fec(local_8,(uint *)&DAT_0045cc88), !bVar1)) {
    FUN_00403fec(local_8,(uint *)&DAT_0045cc98);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045cc57;
  puStack_14 = (undefined1 *)0x45cc4f;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0045cca0 FUN_0045cca0 ==== */

void FUN_0045cca0(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_11c = &LAB_0045cdb6;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_0040c968(param_1 + 3);
  if (param_2 == '\0') {
    piVar2 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX);
    param_1[3] = (int)piVar2;
    piVar2 = (int *)FUN_0040312c(piVar2,(int)&LAB_00454aa4);
    FUN_00456634(piVar2,extraout_EDX,extraout_ECX_00);
  }
  else if (param_2 == '\x01') {
    piVar2 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX);
    param_1[3] = (int)piVar2;
  }
  else if (param_2 == '\x02') {
    piVar2 = TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX);
    param_1[3] = (int)piVar2;
  }
  else if ((param_2 == '\x03') || (param_2 == '\x04')) {
    piVar2 = TDaviAnimation_virtual_00c
                       ((int *)&PTR_TPersistent_virtual_000_0045b71c,'\x01',extraout_ECX);
    param_1[3] = (int)piVar2;
  }
  else {
    FUN_00402ee4(*param_1,local_10c);
    FUN_00403e80(&local_c,local_10c);
    pcStack_130 = " Unhandled case-part";
    FUN_00403f9c(&local_8,4);
    FUN_00403c40(local_8);
  }
  iVar1 = param_1[3];
  *(int *)(iVar1 + 8) = param_1[4];
  *(int *)(iVar1 + 0xc) = param_1[5];
  *in_FS_OFFSET = pcStack_130;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0045ce44 TDaviLinkedGraphic.virtual_00c ==== */

void TDaviLinkedGraphic_virtual_00c(int param_1)

{
  if (*(short *)(param_1 + 0x12) != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}


/* ==== 0045ce5c TDaviLinkedGraphic.virtual_010 ==== */

void TDaviLinkedGraphic_virtual_010(int param_1)

{
  if (*(short *)(param_1 + 0x1a) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
  }
  return;
}


/* ==== 0045ce74 TDaviLinkedGraphic.SetFilename ==== */

void TDaviLinkedGraphic_SetFilename(int *param_1,uint *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  undefined1 uVar4;
  int in_stack_fffffec0;
  int iStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  byte *local_120;
  uint *local_11c;
  uint *local_118;
  undefined1 local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_11c = (uint *)0x0;
  local_120 = (byte *)0x0;
  local_8 = 0;
  local_c = 0;
  local_110 = 0;
  puStack_130 = &LAB_0045cfd8;
  iStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_134;
  uVar4 = param_2 == (uint *)0x0;
  puVar1 = &stack0xfffffffc;
  if (!(bool)uVar4) {
    uVar3 = FUN_004087a4((undefined *)param_2);
    uVar4 = 0;
    puVar1 = puStack_12c;
    if (((char)uVar3 == '\0') && (uVar4 = (char)param_1[1] == '\0', !(bool)uVar4)) {
      FUN_00402ee4(*param_1,local_10c);
      FUN_00403e80(&local_c,local_10c);
      local_114 = 0xb;
      uVar4 = 1;
      local_118 = param_2;
      FUN_00409254((byte *)" File \"%s\" not found",&local_118,0,&local_110);
      in_stack_fffffec0 = local_110;
      FUN_00403f9c(&local_8,3);
      FUN_00403c40(local_8);
      puVar1 = puStack_12c;
    }
  }
  puStack_12c = puVar1;
  FUN_00403fec(param_2,(uint *)param_1[2]);
  if ((!(bool)uVar4) && ((char)param_1[1] == '\x01')) {
    FUN_00403cb0(param_1 + 2,param_2);
    FUN_00408a68((undefined *)param_1[2],(int *)&local_120);
    FUN_0040822c(local_120,(int *)&local_11c);
    cVar2 = FUN_0045cbd0(param_1,local_11c);
    FUN_0045cca0(param_1,cVar2);
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[3] + 0x48))((int *)param_1[3],param_1[2]);
    }
    (**(code **)(*param_1 + 0xc))(param_1,param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  *in_FS_OFFSET = in_stack_fffffec0;
  FUN_00403c80((int *)&local_120,2);
  FUN_00403c5c(&local_110);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0045d054 TDaviLinkedGraphic.virtual_008 ==== */

void TDaviLinkedGraphic_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_virtual_000_0045ca28);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_virtual_000_00416f48);
    if ((char)uVar1 == '\0') {
      TPersistent_virtual_008(param_1,param_2);
    }
    else {
      (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3],param_2);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  else {
    iVar2 = FUN_0040312c(param_2,(int)&PTR_TPersistent_virtual_000_0045ca28);
    FUN_00403cb0(param_1 + 2,*(undefined4 **)(iVar2 + 8));
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 4);
    (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3],*(undefined4 *)(iVar2 + 0xc));
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0045d0d8 FUN_0045d0d8 ==== */

void FUN_0045d0d8(int *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00403c40("Assertion failure");
  }
  (**(code **)(*(int *)param_1[3] + 0x50))((int *)param_1[3],param_2);
  (**(code **)(*param_1 + 0xc))(param_1,param_1);
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0045d374 FUN_0045d374 ==== */

bool FUN_0045d374(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int in_stack_00000004;
  
  bVar4 = true;
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (piVar1 != (int *)0x0) {
    bVar4 = false;
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_virtual_000_0045ca28);
    uVar5 = (char)uVar2 == '\0';
    if (!(bool)uVar5) {
      iVar3 = FUN_0040312c(piVar1,(int)&PTR_TPersistent_virtual_000_0045ca28);
      FUN_00403fec(*(uint **)(*(int *)(in_stack_00000004 + -8) + 8),*(uint **)(iVar3 + 8));
      bVar4 = !(bool)uVar5;
    }
  }
  return bVar4;
}


/* ==== 0045d3c8 TDaviLinkedGraphic.virtual_004 ==== */

void TDaviLinkedGraphic_virtual_004(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10 = 0;
  puStack_120 = &LAB_0045d481;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_1;
  local_8 = param_2;
  TPersistent_virtual_004();
  bVar1 = FUN_0045d374();
  (**(code **)(*local_8 + 4))
            (local_8,"GraphicName",bVar1,&LAB_0045d2f4,local_c,&LAB_0045d1ec,local_c);
  pcVar4 = FUN_0045d0d8;
  puVar2 = &LAB_0045d16c;
  iVar3 = local_c;
  iVar5 = local_c;
  FUN_00402ee4(**(int **)(local_c + 0xc),local_110);
  FUN_00403e80(&local_10,local_110);
  (**(code **)(*local_8 + 8))
            (local_8,local_10,*(char *)(local_c + 4) == '\0' && bVar1,puVar2,iVar3,pcVar4,iVar5);
  *in_FS_OFFSET = puVar2;
  FUN_00403c5c(&local_10);
  return;
}


/* ==== 0045d4a4 FUN_0045d4a4 ==== */

void FUN_0045d4a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 8) = param_4;
  *(undefined4 *)(iVar1 + 0xc) = param_5;
  return;
}


