/* Menu.exe — units/AppEvnts.pas: 22 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0046451c FUN_0046451c ==== */

void FUN_0046451c(void)

{
  FUN_004646b8(DAT_004ab02c);
  return;
}


/* ==== 00464528 TCustomApplicationEvents.virtual_02c ==== */

int * TCustomApplicationEvents_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  FUN_00464698(DAT_004ab02c,(int)param_1);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0046456c FUN_0046456c ==== */

void FUN_0046456c(int param_1)

{
  if (*(short *)(param_1 + 0x2a) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
  }
  return;
}


/* ==== 00464580 FUN_00464580 ==== */

void FUN_00464580(int param_1)

{
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34));
  }
  return;
}


/* ==== 00464594 FUN_00464594 ==== */

void FUN_00464594(int param_1)

{
  if (*(short *)(param_1 + 0x6a) != 0) {
    (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x6c));
  }
  return;
}


/* ==== 004645a8 FUN_004645a8 ==== */

void FUN_004645a8(int param_1)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100));
  }
  return;
}


/* ==== 004645bc FUN_004645bc ==== */

void FUN_004645bc(int param_1)

{
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c));
  }
  return;
}


/* ==== 004645d0 FUN_004645d0 ==== */

undefined4 FUN_004645d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x4a) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 0x4c),param_2,param_3,param_4);
  }
  return uVar1;
}


/* ==== 004645f0 FUN_004645f0 ==== */

void FUN_004645f0(int param_1)

{
  if (*(short *)(param_1 + 0x52) != 0) {
    (**(code **)(param_1 + 0x50))(*(undefined4 *)(param_1 + 0x54));
  }
  return;
}


/* ==== 00464604 FUN_00464604 ==== */

void FUN_00464604(int param_1)

{
  if (*(short *)(param_1 + 0x5a) != 0) {
    (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c));
  }
  return;
}


/* ==== 00464618 FUN_00464618 ==== */

void FUN_00464618(int param_1)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44));
  }
  return;
}


/* ==== 0046462c FUN_0046462c ==== */

void FUN_0046462c(int param_1)

{
  if (*(short *)(param_1 + 0x72) != 0) {
    (**(code **)(param_1 + 0x70))(*(undefined4 *)(param_1 + 0x74));
  }
  return;
}


/* ==== 00464640 FUN_00464640 ==== */

void FUN_00464640(int param_1)

{
  if (*(short *)(param_1 + 0x7a) != 0) {
    (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x7c));
  }
  return;
}


/* ==== 00464654 FUN_00464654 ==== */

void FUN_00464654(int param_1)

{
  if (*(short *)(param_1 + 0x82) != 0) {
    (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84));
  }
  return;
}


/* ==== 00464670 FUN_00464670 ==== */

void FUN_00464670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x8a) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x8c),param_2,param_3,param_4);
  }
  return;
}


/* ==== 00464698 FUN_00464698 ==== */

void FUN_00464698(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004200d4(*(int *)(param_1 + 0x24),param_2);
  if (iVar1 == -1) {
    FUN_00420080(*(int **)(param_1 + 0x24),param_2);
  }
  return;
}


/* ==== 004646b8 FUN_004646b8 ==== */

void FUN_004646b8(int param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


/* ==== 004646c0 TMultiCaster.virtual_02c ==== */

int * TMultiCaster_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int *extraout_ECX;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  puVar2 = PTR_DAT_004ab8ac;
  TComponent_virtual_02c(param_1,'\0',param_3);
  piVar3 = FUN_0041fefc((int *)&PTR_TList_virtual_000_0041fe0c,'\x01',0);
  param_1[9] = (int)piVar3;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xac) = param_1;
  *(undefined1 **)(iVar1 + 0xa8) = &LAB_00464904;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xb4) = param_1;
  *(code **)(iVar1 + 0xb0) = FUN_0046497c;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xec) = param_1;
  *(code **)(iVar1 + 0xe8) = FUN_004649f4;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xe4) = param_1;
  *(undefined1 **)(iVar1 + 0xe0) = &LAB_00464a68;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xbc) = param_1;
  *(undefined1 **)(iVar1 + 0xb8) = &LAB_00464adc;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xcc) = param_1;
  *(code **)(iVar1 + 200) = FUN_00464b54;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xd4) = param_1;
  *(undefined1 **)(iVar1 + 0xd0) = &LAB_00464bf0;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xdc) = param_1;
  *(undefined1 **)(iVar1 + 0xd8) = &LAB_00464c64;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xc4) = param_1;
  *(code **)(iVar1 + 0xc0) = FUN_00464cdc;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xf4) = param_1;
  *(code **)(iVar1 + 0xf0) = FUN_00464d54;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xfc) = param_1;
  *(undefined1 **)(iVar1 + 0xf8) = &LAB_00464dc8;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0x10c) = param_1;
  *(code **)(iVar1 + 0x108) = FUN_00464eb4;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0x104) = param_1;
  *(undefined1 **)(iVar1 + 0x100) = &LAB_00464e3c;
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00464800 TMultiCaster.Destroy ==== */

void TMultiCaster_Destroy(int *param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  byte extraout_DL;
  
  piVar3 = FUN_004032fc(param_1,param_2);
  puVar2 = PTR_DAT_004ab8ac;
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(undefined4 *)(iVar1 + 0xd4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  FUN_00402f9c((int *)piVar3[9]);
  TComponent_Destroy(piVar3,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar3);
  }
  return;
}


/* ==== 0046497c FUN_0046497c ==== */

void FUN_0046497c(int param_1)

{
  int i_val;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_1c = &LAB_004649e6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  i_val = FUN_00464f48(param_1);
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      iVar1 = FUN_00464f34(param_1,i_val);
      FUN_00464580(iVar1);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_20;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


/* ==== 004649f4 FUN_004649f4 ==== */

void FUN_004649f4(int param_1)

{
  int i_val;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_18 = &LAB_00464a59;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  i_val = FUN_00464f48(param_1);
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      iVar1 = FUN_00464f34(param_1,i_val);
      FUN_00464594(iVar1);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


/* ==== 00464b54 FUN_00464b54 ==== */

void FUN_00464b54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int i_val;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_20 = &LAB_00464bdb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  bVar1 = false;
  i_val = FUN_00464f48(param_1);
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      if (bVar1) {
LAB_00464bb2:
        bVar1 = true;
      }
      else {
        uVar3 = param_4;
        iVar2 = FUN_00464f34(param_1,i_val);
        uVar3 = FUN_004645d0(iVar2,param_2,param_3,uVar3);
        if ((char)uVar3 != '\0') goto LAB_00464bb2;
        bVar1 = false;
      }
    } while ((*(char *)(param_1 + 0x28) != '\0') && (i_val = i_val + -1, i_val != -1));
  }
  *in_FS_OFFSET = uStack_24;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


