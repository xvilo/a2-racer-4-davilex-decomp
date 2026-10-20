/* Menu.exe — units/Menus.pas: 176 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0043c82c FUN_0043c82c ==== */

HANDLE FUN_0043c82c(POINT *point)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = FUN_0042d164(point);
  pvVar2 = (HANDLE)0x0;
  if (pvVar1 != (HANDLE)0x0) {
    pvVar2 = (HANDLE)FUN_004320c4((int)pvVar1,point,0,'\0');
    if (pvVar2 == (HANDLE)0x0) {
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}


/* ==== 0043c85c FUN_0043c85c ==== */

undefined4 FUN_0043c85c(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 4);
}


/* ==== 0043c860 FUN_0043c860 ==== */

void FUN_0043c860(undefined4 *param_1)

{
  int *piVar1;
  
  FUN_0043c85c();
  piVar1 = FUN_0040b694((int *)&DAT_0043b9e8,'\x01',param_1);
  FUN_004036f4(piVar1);
  return;
}


/* ==== 0043c880 FUN_0043c880 ==== */

short FUN_0043c880(short param_1,byte param_2)

{
  short sVar1;
  char cStack_5;
  
  sVar1 = 0;
  cStack_5 = (char)((ushort)param_1 >> 8);
  if (cStack_5 == '\0') {
    sVar1 = param_1;
    if ((param_2 & 1) != 0) {
      sVar1 = param_1 + 0x2000;
    }
    if ((param_2 & 4) != 0) {
      sVar1 = sVar1 + 0x4000;
    }
    if ((param_2 & 2) != 0) {
      sVar1 = sVar1 + -0x8000;
    }
  }
  return sVar1;
}


/* ==== 0043c8b8 FUN_0043c8b8 ==== */

void FUN_0043c8b8(undefined2 param_1,int *param_2)

{
  UINT UVar1;
  CHAR local_106 [256];
  undefined2 local_6;
  
  local_6 = param_1;
  FUN_00403c5c(param_2);
  UVar1 = MapVirtualKeyA((uint)(byte)local_6,0);
  if (UVar1 << 0x10 != 0) {
    GetKeyNameTextA(UVar1 << 0x10,local_106,0x100);
    FUN_00403e8c(param_2,local_106,0x100);
  }
  return;
}


/* ==== 0043c90c FUN_0043c90c ==== */

void FUN_0043c90c(ushort param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 uStack_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  uStack_8 = (uint)param_1 << 0x10;
  uVar2 = uStack_8;
  puStack_20 = &LAB_0043caf5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_8._2_1_ = (byte)param_1;
  uVar1 = (uint)uStack_8._2_1_;
  uStack_8 = uVar2;
  if (uStack_8._2_1_ < 0x2d) {
    if (uVar1 - 8 < 2) {
      uVar2 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,*(int *)(&DAT_004aa838 + uVar2 * 4));
      goto LAB_0043ca81;
    }
    if (uVar1 == 0xd) {
      puStack_1c = &stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,DAT_004aa864);
      goto LAB_0043ca81;
    }
    if (uVar1 == 0x1b) {
      puStack_1c = &stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,DAT_004aa860);
      goto LAB_0043ca81;
    }
    if (uVar1 - 0x20 < 9) {
      bVar3 = uStack_8._2_1_ + 4;
      puStack_1c = &stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,*(int *)(&DAT_004aa7d8 + (uint)bVar3 * 4));
      goto LAB_0043ca81;
    }
  }
  else if (uStack_8._2_1_ < 0x41) {
    if (uVar1 - 0x2d < 2) {
      bVar3 = uStack_8._2_1_ + 0xd;
      puStack_1c = &stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,(int)(&PTR_s_crHandPoint_004aa7a4)[bVar3]);
      goto LAB_0043ca81;
    }
    if (uVar1 - 0x30 < 10) {
      uVar2 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00403e04((int *)&local_c,uVar2);
      goto LAB_0043ca81;
    }
  }
  else {
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = (uint)uStack_8._2_1_;
      FUN_00403e04((int *)&local_c,uVar2);
      goto LAB_0043ca81;
    }
    if (uVar1 - 0x60 < 10) {
      uVar2 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00403e04((int *)&local_c,uVar2 - 0x30);
      goto LAB_0043ca81;
    }
    if (uVar1 - 0x70 < 0x18) {
      uVar2 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_004085ac(uVar2 - 0x6f,(int *)&local_10);
      FUN_00403f28((int *)&local_c,(undefined4 *)&DAT_0043cb0c,local_10);
      goto LAB_0043ca81;
    }
  }
  puStack_1c = &stack0xfffffffc;
  FUN_0043c8b8(param_1,(int *)&local_c);
LAB_0043ca81:
  if (local_c == (undefined4 *)0x0) {
    FUN_00403c5c(param_2);
  }
  else {
    FUN_00403c5c(param_2);
    if ((uStack_8 & 0x20000000) != 0) {
      FUN_00403ee4(param_2,DAT_004aa894);
    }
    if ((uStack_8 & 0x40000000) != 0) {
      FUN_00403ee4(param_2,DAT_004aa898);
    }
    if ((uStack_8 & 0x80000000) != 0) {
      FUN_00403ee4(param_2,DAT_004aa89c);
    }
    FUN_00403ee4(param_2,local_c);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0043cafc;
  puStack_20 = (undefined1 *)0x43caf4;
  FUN_00403c80((int *)&local_10,2);
  return;
}


/* ==== 0043cb10 FUN_0043cb10 ==== */

undefined4 FUN_0043cb10(int *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  PCNZCH string2;
  PCNZCH string1;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_00403edc(*param_1);
  iVar2 = FUN_00403edc((int)param_2);
  if (iVar2 <= iVar1) {
    iVar1 = FUN_00403edc((int)param_2);
    string2 = FUN_004040a0(param_2);
    string1 = FUN_004040a0((undefined *)*param_1);
    iVar1 = FUN_004083d8(string1,string2,iVar1);
    if (iVar1 == 0) {
      uVar3 = 1;
      iVar1 = FUN_00403edc((int)param_2);
      FUN_00404124(param_1,1,iVar1);
    }
  }
  return uVar3;
}


/* ==== 0043cb6c FUN_0043cb6c ==== */

void FUN_0043cb6c(undefined *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_c;
  undefined *local_8;
  
  local_c = (undefined *)0x0;
  puStack_1c = (undefined1 *)0x43cb85;
  local_8 = param_1;
  FUN_00404090((int)param_1);
  puStack_20 = &LAB_0043cc47;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  do {
    do {
      uVar1 = FUN_0043cb10((int *)&local_8,DAT_004aa894);
    } while ((char)uVar1 != '\0');
    uVar1 = FUN_0043cb10((int *)&local_8,&DAT_0043cc60);
  } while ((((char)uVar1 != '\0') ||
           (uVar1 = FUN_0043cb10((int *)&local_8,DAT_004aa898), (char)uVar1 != '\0')) ||
          (uVar1 = FUN_0043cb10((int *)&local_8,DAT_004aa89c), (char)uVar1 != '\0'));
  if (local_8 != (undefined *)0x0) {
    i_val = 8;
    do {
      FUN_0043c90c(i_val,(int *)&local_c);
      iVar2 = FUN_00408364(local_8,local_c);
      if (iVar2 == 0) break;
      i_val = i_val + 1;
    } while (i_val != 0x256);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0043cc4e;
  puStack_20 = (undefined1 *)0x43cc46;
  FUN_00403c80((int *)&local_c,2);
  return;
}


/* ==== 0043cc64 FUN_0043cc64 ==== */

uint FUN_0043cc64(void)

{
  uint uVar1;
  
  uVar1 = FUN_004108fc(DAT_004ac7d0);
  FUN_004108b8(DAT_004ac7d0,uVar1 & 0xffff,'\x01');
  return uVar1;
}


/* ==== 0043cc84 FUN_0043cc84 ==== */

char FUN_0043cc84(int *param_1,int param_2,undefined *param_3,int param_4)

{
  int iVar1;
  char local_d;
  
  if (param_2 != 0) {
    local_d = '\0';
    while (local_d == '\0') {
      iVar1 = FUN_0043f018(param_2);
      if (iVar1 <= *param_1) {
        return '\0';
      }
      iVar1 = FUN_0043f028(param_2,*param_1);
      if (*(byte *)(param_4 + -1) < *(byte *)(iVar1 + 0x33)) {
        return '\0';
      }
      local_d = (*(code *)param_3)(iVar1);
      *param_1 = *param_1 + 1;
    }
  }
  return local_d;
}


/* ==== 0043cce4 FUN_0043cce4 ==== */

void FUN_0043cce4(undefined *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_1a;
  byte local_19;
  int j;
  int i_val;
  int local_10;
  undefined *local_c;
  byte local_5;
  
  i_val = 0;
  j = 0;
  iVar2 = 0;
  iVar3 = 0;
  local_10 = param_3;
  local_c = param_1;
  if (param_2 != 0) {
    iVar2 = FUN_0043f018(param_2);
  }
  if (local_10 != 0) {
    iVar3 = FUN_0043f018(local_10);
  }
  local_1a = '\0';
  while ((local_1a == '\0' && ((i_val < iVar2 || (j < iVar3))))) {
    local_5 = 0xff;
    local_19 = 0xff;
    if (i_val < iVar2) {
      iVar1 = FUN_0043f028(param_2,i_val);
      local_5 = *(byte *)(iVar1 + 0x33);
    }
    if (j < iVar3) {
      iVar1 = FUN_0043f028(local_10,j);
      local_19 = *(byte *)(iVar1 + 0x33);
    }
    if (local_19 < local_5) {
      local_5 = local_19;
      local_1a = FUN_0043cc84(&j,local_10,local_c,(int)&stack0xfffffffc);
    }
    else {
      local_1a = FUN_0043cc84(&i_val,param_2,local_c,(int)&stack0xfffffffc);
    }
    while ((i_val < iVar2 &&
           (iVar1 = FUN_0043f028(param_2,i_val), *(byte *)(iVar1 + 0x33) <= local_5))) {
      i_val = i_val + 1;
    }
    while ((j < iVar3 && (iVar1 = FUN_0043f028(local_10,j), *(byte *)(iVar1 + 0x33) <= local_5))) {
      j = j + 1;
    }
  }
  return;
}


/* ==== 0043cdec TMenuActionLink.virtual_000 ==== */

void TMenuActionLink_virtual_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040312c(param_2,(int)&PTR_TMenuItem_virtual_000_0043bd08);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}


/* ==== 0043ce08 TMenuActionLink.virtual_020 ==== */

undefined4 TMenuActionLink_virtual_020(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = TActionLink_virtual_020(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    uVar3 = FUN_00441a64(*(undefined4 **)(*(int *)(param_1 + 0x18) + 0x24),
                         *(undefined4 **)(iVar2 + 0x54));
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043ce40 TMenuActionLink.virtual_024 ==== */

undefined4 TMenuActionLink_virtual_024(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_024(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (*(char *)(iVar2 + 0x58) == *(char *)(*(int *)(param_1 + 0x18) + 0x2c)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043ce70 TMenuActionLink.virtual_028 ==== */

undefined4 TMenuActionLink_virtual_028(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_028(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (*(char *)(iVar2 + 0x59) == *(char *)(*(int *)(param_1 + 0x18) + 0x2d)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043cea0 TMenuActionLink.virtual_02c ==== */

undefined4 TMenuActionLink_virtual_02c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_02c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (*(int *)(iVar2 + 0x5c) == *(int *)(*(int *)(param_1 + 0x18) + 0x48)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 0x5c) >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043ced0 TMenuActionLink.virtual_030 ==== */

undefined4 TMenuActionLink_virtual_030(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  
  cVar1 = TActionLink_virtual_030(param_1);
  uVar4 = cVar1 == '\0';
  if (!(bool)uVar4) {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    puVar3 = FUN_00403fec(*(uint **)(*(int *)(param_1 + 0x18) + 0x4c),*(uint **)(iVar2 + 0x60));
    if ((bool)uVar4) {
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043cf04 TMenuActionLink.virtual_034 ==== */

undefined4 TMenuActionLink_virtual_034(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_034(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (*(int *)(iVar2 + 100) == *(int *)(*(int *)(param_1 + 0x18) + 0x34)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 100) >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043cf34 TMenuActionLink.virtual_038 ==== */

undefined4 TMenuActionLink_virtual_038(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_038(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (*(short *)(iVar2 + 0x68) == *(short *)(*(int *)(param_1 + 0x18) + 0x54)) {
      return CONCAT31((int3)(CONCAT22((short)((uint)iVar2 >> 0x10),*(short *)(iVar2 + 0x68)) >> 8),1
                     );
    }
  }
  return 0;
}


/* ==== 0043cf68 TMenuActionLink.virtual_03c ==== */

undefined4 TMenuActionLink_virtual_03c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_03c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0040312c(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0043943c);
    if (*(char *)(iVar2 + 0x6a) == *(char *)(*(int *)(param_1 + 0x18) + 0x32)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 0043cf98 TMenuActionLink.virtual_008 ==== */

undefined4 TMenuActionLink_virtual_008(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = TBasicActionLink_virtual_008();
  if ((cVar2 != '\0') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x80),
     iVar1 == *(int *)(*(int *)(param_1 + 0x10) + 0x30))) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


/* ==== 0043cfc0 TMenuActionLink.virtual_040 ==== */

void TMenuActionLink_virtual_040(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    TMenuItem_SetCaption((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 0043cfe0 TMenuActionLink.virtual_044 ==== */

void TMenuActionLink_virtual_044(int *param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x24))();
  if (cVar1 != '\0') {
    TMenuItem_SetChecked(param_1[6],param_2);
  }
  return;
}


/* ==== 0043d000 TMenuActionLink.virtual_048 ==== */

void TMenuActionLink_virtual_048(int *param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    TMenuItem_SetEnabled((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 0043d020 TMenuActionLink.virtual_04c ==== */

void TMenuActionLink_virtual_04c(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[6] + 0x48) = param_2;
  }
  return;
}


/* ==== 0043d03c TMenuActionLink.virtual_050 ==== */

void TMenuActionLink_virtual_050(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403cb0((int *)(param_1[6] + 0x4c),param_2);
  }
  return;
}


/* ==== 0043d060 TMenuActionLink.virtual_054 ==== */

void TMenuActionLink_virtual_054(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    TMenuItem_SetImageIndex((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 0043d080 TMenuActionLink.virtual_058 ==== */

void TMenuActionLink_virtual_058(int *param_1,short param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 != '\0') {
    TMenuItem_SetShortCut((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 0043d0a0 TMenuActionLink.virtual_05c ==== */

void TMenuActionLink_virtual_05c(int *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    TMenuItem_SetVisible((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 0043d0c0 TMenuActionLink.virtual_010 ==== */

void TMenuActionLink_virtual_010
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 != '\0') {
    iVar1 = param_1[6];
    *(undefined4 *)(iVar1 + 0x80) = param_4;
    *(undefined4 *)(iVar1 + 0x84) = param_5;
  }
  return;
}


/* ==== 0043d0ec TMenuItem.virtual_02c ==== */

int * TMenuItem_virtual_02c(int *param_1,char param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  *(undefined1 *)((int)param_1 + 0x32) = 1;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 2;
  *(undefined1 *)(param_1 + 0xc) = 2;
  uVar1 = FUN_0043cc64();
  *(short *)(param_1 + 0x11) = (short)uVar1;
  param_1[0xd] = -1;
  iVar2 = FUN_00402f6c((int *)&DAT_0043a068,'\x01',extraout_ECX_00);
  param_1[0x1b] = iVar2;
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_0043f8d8;
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0043d168 TMenuItem.Destroy ==== */

void TMenuItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00441838(DAT_004ac7c8,(int)piVar1);
  if ((int *)piVar1[0x16] != (int *)0x0) {
    FUN_0043f368((int *)piVar1[0x16],(int)piVar1);
    piVar1[0x16] = 0;
  }
  while( true ) {
    iVar3 = FUN_0043f018((int)piVar1);
    if (iVar3 < 1) break;
    piVar2 = (int *)FUN_0043f028((int)piVar1,0);
    FUN_00402f9c(piVar2);
  }
  if (piVar1[10] != 0) {
    FUN_0043d584(piVar1,0);
    DestroyMenu((HMENU)piVar1[10]);
  }
  FUN_00402f9c((int *)piVar1[0x14]);
  FUN_0040c968(piVar1 + 0xe);
  FUN_0040c968(piVar1 + 0x1b);
  if (*(ushort *)(piVar1 + 0x11) != 0) {
    FUN_004108b8(DAT_004ac7d0,(uint)*(ushort *)(piVar1 + 0x11),'\0');
  }
  if ((int *)piVar1[0x10] != (int *)0x0) {
    FUN_00402f9c((int *)piVar1[0x10]);
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0043d21c FUN_0043d21c ==== */

void FUN_0043d21c(int param_1,HMENU param_2,byte param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  LPCSTR pCVar7;
  UINT_PTR uIDNewItem;
  uint uVar8;
  int *in_FS_OFFSET;
  byte bVar9;
  int iStack_68;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int local_44;
  MENUITEMINFOA menuiteminfo;
  byte local_d;
  undefined *local_c;
  byte local_5;
  
  puStack_54 = &stack0xfffffffc;
  local_44 = 0;
  local_c = (undefined *)0x0;
  puStack_58 = &LAB_0043d477;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  puVar1 = &stack0xfffffffc;
  local_5 = param_3;
  if (*(char *)(param_1 + 0x32) == '\0') goto LAB_0043d459;
  FUN_00403cf4((int *)&local_c,*(int *)(param_1 + 0x24));
  iVar4 = FUN_0043f018(param_1);
  if (iVar4 < 1) {
    if (*(short *)(param_1 + 0x54) != 0) {
      iVar4 = *(int *)(param_1 + 0x58);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) == 0)) {
        uVar5 = FUN_00403114(*(int **)(iVar4 + 4),(int)&PTR_TPersistent_virtual_000_0043c1f8);
        if ((char)uVar5 != '\0') goto LAB_0043d2b8;
      }
      FUN_0043c90c(*(ushort *)(param_1 + 0x54),&local_44);
      iStack_68 = local_44;
      FUN_00403f9c((int *)&local_c,3);
    }
  }
  else {
    menuiteminfo.hSubMenu = (HMENU)FUN_0043d6c8(param_1);
  }
LAB_0043d2b8:
  DVar6 = GetVersion();
  uVar3 = (ushort)DVar6 & 0xff;
  bVar9 = uVar3 == 4;
  if (uVar3 < 4) {
    FUN_00403fec(*(uint **)(param_1 + 0x24),(uint *)&DAT_0043d49c);
    uVar8 = *(uint *)(&DAT_004aa8bc + (bVar9 & 0x7f) * 4) |
            *(uint *)(&DAT_004aa8b0 + (uint)*(byte *)(param_1 + 0x3c) * 4) |
            *(uint *)(&DAT_004aa8a0 + (uint)*(byte *)(param_1 + 0x2c) * 4) |
            *(uint *)(&DAT_004aa8a8 + (uint)*(byte *)(param_1 + 0x2d) * 4);
    iVar4 = FUN_0043f018(param_1);
    if (iVar4 < 1) {
      pCVar7 = FUN_004040a0(local_c);
      InsertMenuA(param_2,0xffffffff,uVar8 | 0x400,(uint)*(ushort *)(param_1 + 0x44),pCVar7);
      puVar1 = puStack_54;
    }
    else {
      pCVar7 = FUN_004040a0(*(undefined **)(param_1 + 0x24));
      uIDNewItem = FUN_0043d6c8(param_1);
      InsertMenuA(param_2,0xffffffff,uVar8 | 0x410,uIDNewItem,pCVar7);
      puVar1 = puStack_54;
    }
    goto LAB_0043d459;
  }
  menuiteminfo.cbSize = 0x2c;
  menuiteminfo.fMask = 0x3f;
  iVar4 = thunk_FUN_0043f588(param_1);
  if (iVar4 == 0) {
LAB_0043d2f8:
    if (*(int *)(param_1 + 0x40) != 0) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
      bVar9 = 1;
      if (cVar2 == '\0') goto LAB_0043d30e;
    }
    local_d = 0;
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
    if (*(char *)(iVar4 + 0x34) == '\0') {
      iVar4 = FUN_0043ebf0(param_1);
      bVar9 = 0;
      if (iVar4 == 0) goto LAB_0043d2f8;
    }
LAB_0043d30e:
    local_d = 1;
  }
  FUN_00403fec(*(uint **)(param_1 + 0x24),(uint *)&DAT_0043d49c);
  menuiteminfo.fType =
       *(uint *)(&DAT_004aa8f0 + (bVar9 & 0x7f) * 4) |
       *(uint *)(&DAT_004aa8e8 + (uint)*(byte *)(param_1 + 0x31) * 4) |
       *(uint *)(&DAT_004aa8c4 + (uint)*(byte *)(param_1 + 0x3c) * 4) |
       *(uint *)(&DAT_004aa8f8 + (uint)local_5 * 4) | *(uint *)(&DAT_004aa900 + (uint)local_d * 4);
  menuiteminfo.fState =
       *(uint *)(&DAT_004aa8d0 + (uint)*(byte *)(param_1 + 0x2c) * 4) |
       *(uint *)(&DAT_004aa8e0 + (uint)*(byte *)(param_1 + 0x2d) * 4) |
       *(uint *)(&DAT_004aa8d8 + (uint)*(byte *)(param_1 + 0x2e) * 4);
  menuiteminfo.wID = (UINT)*(ushort *)(param_1 + 0x44);
  menuiteminfo.hSubMenu = (HMENU)0x0;
  menuiteminfo.hbmpChecked = (HBITMAP)0x0;
  menuiteminfo.hbmpUnchecked = (HBITMAP)0x0;
  menuiteminfo.dwTypeData = FUN_004040a0(local_c);
  iVar4 = FUN_0043f018(param_1);
  if (0 < iVar4) {
    menuiteminfo.hSubMenu = (HMENU)FUN_0043d6c8(param_1);
  }
  InsertMenuItemA(param_2,0xffffffff,-1,&menuiteminfo);
  puVar1 = puStack_54;
LAB_0043d459:
  puStack_54 = puVar1;
  *in_FS_OFFSET = iStack_68;
  FUN_00403c5c(&local_44);
  FUN_00403c5c((int *)&local_c);
  return;
}


/* ==== 0043d4bc FUN_0043d4bc ==== */

void FUN_0043d4bc(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int **)(param_1 + 100) != (int *)0x0) &&
     (uVar1 = FUN_00403114(*(int **)(param_1 + 100),(int)&PTR_TPersistent_virtual_000_0043c1f8),
     (char)uVar1 != '\0')) {
    FUN_0043fb34(param_1,'\0');
    FUN_00440004(param_1,'\0');
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00440a7c(*(int *)(param_1 + 100));
  }
  FUN_0043cce4(&LAB_0043d4a0,*(int *)(param_1 + 0x5c),param_1);
  return;
}


/* ==== 0043d52c FUN_0043d52c ==== */

void FUN_0043d52c(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_18 = &LAB_0043d576;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00414e1c(param_2,(int *)&local_8,param_3);
  sVar1 = FUN_0043cb6c(local_8);
  TMenuItem_SetShortCut(param_1,sVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043d57d;
  puStack_18 = (undefined1 *)0x43d575;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0043d584 FUN_0043d584 ==== */

void FUN_0043d584(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x17];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
    param_1[0x17] = param_2;
    if (param_2 != 0) {
      *(int **)(param_2 + 0x60) = param_1;
    }
    FUN_0043d5e4(param_1);
  }
  return;
}


/* ==== 0043d5a8 TMenuItem.virtual_00c ==== */

void TMenuItem_virtual_00c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  TComponent_virtual_00c((int)param_1);
  iVar1 = TMenuItem_GetAction((int)param_1);
  if (iVar1 != 0) {
    uVar2 = TMenuItem_GetAction((int)param_1);
    FUN_00403178(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  if ((char)param_1[0x1a] != '\0') {
    FUN_0043d5e4(param_1);
  }
  return;
}


/* ==== 0043d5e4 FUN_0043d5e4 ==== */

void FUN_0043d5e4(int *param_1)

{
  HMENU pHVar1;
  int menu_item_count;
  undefined4 uVar2;
  UINT uPosition;
  UINT uFlags;
  
  if ((*(byte *)(param_1 + 8) & 8) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    if ((int *)param_1[0x18] == (int *)0x0) {
      while( true ) {
        pHVar1 = (HMENU)FUN_0043d6c8((int)param_1);
        menu_item_count = GetMenuItemCount(pHVar1);
        if (menu_item_count < 1) break;
        uFlags = 0x400;
        uPosition = 0;
        pHVar1 = (HMENU)FUN_0043d6c8((int)param_1);
        RemoveMenu(pHVar1,uPosition,uFlags);
      }
      if ((param_1[0x16] == 0) &&
         (uVar2 = FUN_00403114((int *)param_1[0x19],(int)&PTR_TPersistent_virtual_000_0043c1f8),
         (char)uVar2 != '\0')) {
        DestroyMenu((HMENU)param_1[10]);
        param_1[10] = 0;
      }
      else {
        FUN_0043d4bc((int)param_1);
      }
      (**(code **)(*param_1 + 0x38))(param_1,0);
      return;
    }
    FUN_0043d5e4((int *)param_1[0x18]);
    return;
  }
  *(undefined1 *)(param_1 + 0x1a) = 1;
  return;
}


/* ==== 0043d668 FUN_0043d668 ==== */

void FUN_0043d668(int param_1,int param_2,byte param_3)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_0043f018(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      if (j < param_2) {
        iVar1 = FUN_0043f028(param_1,j);
        if (param_3 < *(byte *)(iVar1 + 0x33)) {
          FUN_0043c860((undefined4 *)PTR_PTR_004ab6a0);
        }
      }
      else {
        iVar1 = FUN_0043f028(param_1,j);
        if (*(byte *)(iVar1 + 0x33) < param_3) {
          iVar1 = FUN_0043f028(param_1,j);
          *(byte *)(iVar1 + 0x33) = param_3;
        }
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0043d6c8 FUN_0043d6c8 ==== */

undefined4 FUN_0043d6c8(int param_1)

{
  undefined4 uVar1;
  HMENU pHVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_00403114(*(int **)(param_1 + 4),(int)&PTR_TPersistent_virtual_000_0043c4d0);
    if ((char)uVar1 == '\0') {
      pHVar2 = CreateMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    else {
      pHVar2 = CreatePopupMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_0043c860((undefined4 *)PTR_PTR_004ab670);
    }
    FUN_0043d4bc(param_1);
  }
  return *(undefined4 *)(param_1 + 0x28);
}


/* ==== 0043d714 TMenuItem.virtual_004 ==== */

void TMenuItem_virtual_004(int param_1,int *param_2)

{
  TComponent_virtual_004(param_1,param_2);
  (**(code **)(*param_2 + 4))(param_2,"ShortCutText",0,0,0,FUN_0043d52c,param_1);
  return;
}


/* ==== 0043d758 FUN_0043d758 ==== */

/* WARNING: Removing unreachable block (ram,0x0043d7a4) */
/* WARNING: Removing unreachable block (ram,0x0043d7ae) */

void FUN_0043d758(int param_1,int *param_2,int param_3,uint format_val,char param_5,LPRECT lprc_val)

{
  int *piVar1;
  byte bVar2;
  int i_val;
  undefined4 uVar3;
  HDC pHVar4;
  LPCSTR pCVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  tagRECT *qrc_val;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  UINT edge;
  LPRECT lprc;
  UINT grfFlags;
  uint format;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  tagRECT rect;
  uint *local_10;
  int local_c;
  int *local_8;
  
  bVar2 = 0;
  puStack_30 = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_34 = &LAB_0043d93f;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_3;
  local_8 = param_2;
  i_val = thunk_FUN_0043f588(param_1);
  if ((i_val != 0) && (uVar3 = FUN_00440a7c(i_val), (char)uVar3 != '\0')) {
    format_val = format_val | 0x20002;
  }
  FUN_00403cf4((int *)&local_10,local_c);
  uVar7 = (format_val & 0x400) == 0;
  if ((!(bool)uVar7) &&
     ((uVar7 = true, local_10 == (uint *)0x0 ||
      ((uVar7 = 0, (char)*local_10 == '&' &&
       (uVar7 = *(char *)((int)local_10 + 1) == '\0', (bool)uVar7)))))) {
    FUN_00403ee4((int *)&local_10,(undefined4 *)&DAT_0043d958);
  }
  FUN_00403fec(local_10,(uint *)&DAT_0043d964);
  if ((bool)uVar7) {
    if ((format_val & 0x400) == 0) {
      qrc_val = &rect;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        qrc_val->left = lprc_val->left;
        lprc_val = (LPRECT)((int)lprc_val + (uint)bVar2 * -8 + 4);
        qrc_val = (tagRECT *)((int)qrc_val + ((uint)bVar2 * -2 + 1) * 4);
      }
      rect.top = rect.top + 4;
      grfFlags = 2;
      edge = 6;
      qrc_val = &rect;
      pHVar4 = (HDC)FUN_004194d8(local_8);
      DrawEdge(pHVar4,qrc_val,edge,grfFlags);
    }
    goto LAB_0043d929;
  }
  TBrush_SetStyle((int *)local_8[5],'\x01');
  if (*(char *)(param_1 + 0x2e) != '\0') {
    piVar1 = (int *)local_8[3];
    bVar2 = TFont_GetStyle((int)piVar1);
    TFont_SetStyle(piVar1,bVar2 | 1);
  }
  if (*(char *)(param_1 + 0x2d) == '\0') {
    if (param_5 == '\0') {
      OffsetRect(lprc_val,1,1);
      TFont_SetColor((int *)local_8[3],-0x7fffffec,extraout_ECX);
      lprc = lprc_val;
      format = format_val;
      i_val = FUN_00403edc((int)local_10);
      pCVar5 = FUN_004040a0((undefined *)local_10);
      pHVar4 = (HDC)FUN_004194d8(local_8);
      DrawTextA(pHVar4,pCVar5,i_val,lprc,format);
      OffsetRect(lprc_val,-1,-1);
      uVar3 = extraout_ECX_00;
    }
    else {
      i_val = FUN_00417d54(0x8000000d);
      iVar6 = FUN_00417d54(0x80000010);
      uVar3 = extraout_ECX_01;
      if (i_val == iVar6) {
        TFont_SetColor((int *)local_8[3],-0x7fffffec,extraout_ECX_01);
        goto LAB_0043d904;
      }
    }
    TFont_SetColor((int *)local_8[3],-0x7ffffff0,uVar3);
  }
LAB_0043d904:
  i_val = FUN_00403edc((int)local_10);
  pCVar5 = FUN_004040a0((undefined *)local_10);
  pHVar4 = (HDC)FUN_004194d8(local_8);
  DrawTextA(pHVar4,pCVar5,i_val,lprc_val,format_val);
LAB_0043d929:
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0043d946;
  puStack_34 = (undefined1 *)0x43d93e;
  FUN_00403c5c((int *)&local_10);
  return;
}


/* ==== 0043d96c TMenuItem.virtual_034 ==== */

void TMenuItem_virtual_034(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4)

{
  int i_val;
  undefined4 *puVar1;
  undefined4 local_14 [4];
  
  puVar1 = local_14;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  if (*(short *)(param_1 + 0x8a) != 0) {
    (**(code **)(param_1 + 0x88))
              (*(undefined4 *)(param_1 + 0x8c),param_1,param_2,
               CONCAT31((int3)((uint)local_14 >> 8),param_4),local_14);
  }
  return;
}


/* ==== 0043d9b0 FUN_0043d9b0 ==== */

void FUN_0043d9b0(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int i_val;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  HBITMAP h_val;
  LPRECT ptVar8;
  HDC pHVar9;
  uint uVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *in_FS_OFFSET;
  bool bVar14;
  byte bVar15;
  int in_stack_00000004;
  uint in_stack_ffffffbc;
  UINT UVar16;
  UINT UVar17;
  uint uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  bVar15 = 0;
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0043e211;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_20;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
    FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  if (*(int *)(in_stack_00000004 + -0x2c) == 0) {
    uVar6 = FUN_00403114(*(int **)(in_stack_00000004 + -0x2c),
                         (int)&PTR_TPersistent_virtual_000_0043c4d0);
    if ((char)uVar6 == '\0') {
      *(undefined1 *)(in_stack_00000004 + -0x2d) = 0;
    }
    else {
      *(undefined1 *)(in_stack_00000004 + -0x2d) =
           *(undefined1 *)(*(int *)(in_stack_00000004 + -0x2c) + 0x50);
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + -0x2d) = 0;
  }
  *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x20) + 1;
  i_val = *(int *)(in_stack_00000004 + -0x1c) + 1;
  bVar14 = i_val == 0;
  *(int *)(in_stack_00000004 + -0xc) = i_val;
  FUN_00403fec(*(uint **)(*(int *)(in_stack_00000004 + -0x34) + 0x24),(uint *)&DAT_0043e228);
  if (bVar14) {
    FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
    *(undefined4 *)(in_stack_00000004 + -0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + -8) = 0xfffffffc;
    *(undefined1 *)(in_stack_00000004 + -0x35) = 0;
    goto LAB_0043df10;
  }
  uVar6 = extraout_ECX;
  if (*(int *)(in_stack_00000004 + -0x3c) == 0) {
LAB_0043dacd:
    uVar4 = 0;
  }
  else {
    i_val = *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x34);
    if (i_val < 0) {
LAB_0043daa6:
      if (*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) == '\0') goto LAB_0043dacd;
      piVar7 = *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40);
      if (piVar7 != (int *)0x0) {
        cVar3 = (**(code **)(*piVar7 + 0x1c))();
        uVar6 = extraout_ECX_01;
        if (cVar3 == '\0') goto LAB_0043dacd;
      }
    }
    else {
      iVar5 = FUN_0043a91c(*(int *)(in_stack_00000004 + -0x3c));
      uVar6 = extraout_ECX_00;
      if (iVar5 <= i_val) goto LAB_0043daa6;
    }
    uVar4 = 1;
  }
  *(undefined1 *)(in_stack_00000004 + -0x3d) = uVar4;
  if (*(char *)(in_stack_00000004 + -0x3d) == '\0') {
    piVar7 = *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40);
    if (piVar7 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar7 + 0x1c))();
      uVar6 = extraout_ECX_02;
      if (cVar3 == '\0') goto LAB_0043db05;
    }
    if ((*(int *)(in_stack_00000004 + -0x3c) == 0) || (*(char *)(in_stack_00000004 + 8) != '\0')) {
      *(undefined4 *)(in_stack_00000004 + -8) = *(undefined4 *)(in_stack_00000004 + -0x10);
      *(undefined4 *)(in_stack_00000004 + -4) = *(undefined4 *)(in_stack_00000004 + -0xc);
    }
    else {
      *(int *)(in_stack_00000004 + -8) =
           *(int *)(in_stack_00000004 + -0x10) +
           *(int *)(*(int *)(in_stack_00000004 + -0x3c) + 0x28);
      *(int *)(in_stack_00000004 + -4) =
           *(int *)(in_stack_00000004 + -0xc) + *(int *)(*(int *)(in_stack_00000004 + -0x3c) + 0x24)
      ;
    }
    *(undefined1 *)(in_stack_00000004 + -0x35) = 0;
  }
  else {
LAB_0043db05:
    *(undefined1 *)(in_stack_00000004 + -0x35) = 1;
    if (*(char *)(in_stack_00000004 + -0x3d) == '\0') {
      *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -0x10) + 0x10;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -0xc) + 0x10;
    }
    else {
      *(int *)(in_stack_00000004 + -8) =
           *(int *)(in_stack_00000004 + -0x10) +
           *(int *)(*(int *)(in_stack_00000004 + -0x3c) + 0x28);
      *(int *)(in_stack_00000004 + -4) =
           *(int *)(in_stack_00000004 + -0xc) + *(int *)(*(int *)(in_stack_00000004 + -0x3c) + 0x24)
      ;
    }
    if (*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) != '\0') {
      *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 1;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + 1;
      uVar6 = TBrush_GetColor(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0x14));
      *(undefined4 *)(in_stack_00000004 + -0x44) = uVar6;
      if ((*(byte *)(in_stack_00000004 + 0xc) & 1) == 0) {
        uVar6 = TBrush_GetColor(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0x14));
        *(undefined4 *)(in_stack_00000004 + -0x44) = uVar6;
        uVar6 = FUN_0041fb50(0x8000000f,0x80000014);
        FUN_004189b8(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),uVar6);
        FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x10));
      }
      else {
        TBrush_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0x8000000f);
        FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x10));
      }
      TBrush_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),
                      *(undefined4 *)(in_stack_00000004 + -0x44));
      *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + 1;
      *(int *)(in_stack_00000004 + -0xc) = *(int *)(in_stack_00000004 + -0xc) + 1;
      uVar6 = extraout_ECX_03;
    }
    if (*(char *)(in_stack_00000004 + -0x3d) == '\0') {
      puVar12 = (undefined4 *)(in_stack_00000004 + -0x10);
      puVar13 = (undefined4 *)(in_stack_00000004 + -0x58);
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
        puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
      }
      i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x2c))();
      if (i_val < *(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) {
        i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x2c))();
        uVar10 = (*(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) - i_val;
        i_val = (int)uVar10 >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((uVar10 & 1) != 0);
        }
        *(int *)(in_stack_00000004 + -0x10) = i_val + *(int *)(in_stack_00000004 + -0x10) + 1;
        i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x2c))();
        *(int *)(in_stack_00000004 + -8) = i_val + *(int *)(in_stack_00000004 + -0x10);
      }
      i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x20))();
      if (i_val < *(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) {
        i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x20))();
        uVar10 = (*(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) - i_val;
        i_val = (int)uVar10 >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((uVar10 & 1) != 0);
        }
        *(int *)(in_stack_00000004 + -0xc) = i_val + *(int *)(in_stack_00000004 + -0xc) + 1;
        i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x20))();
        *(int *)(in_stack_00000004 + -4) = i_val + *(int *)(in_stack_00000004 + -0xc);
      }
      FUN_00419200(*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10,
                   *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40));
      puVar12 = (undefined4 *)(in_stack_00000004 + -0x58);
      puVar13 = (undefined4 *)(in_stack_00000004 + -0x10);
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
        puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
      }
    }
    else {
      i_val = *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x34);
      if (i_val < 0) {
LAB_0043dc86:
        piVar7 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',uVar6);
        *(int **)(in_stack_00000004 + -0x48) = piVar7;
        uVar10 = *in_FS_OFFSET;
        *in_FS_OFFSET = (uint)&stack0xffffffd4;
        (**(code **)(**(int **)(in_stack_00000004 + -0x48) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x48),1);
        h_val = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7ff8);
        FUN_0041ea8c(*(int **)(in_stack_00000004 + -0x48),h_val);
        *(undefined4 *)(in_stack_00000004 + -0x44) =
             *(undefined4 *)(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0xc) + 0x18);
        TFont_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0xc),-0x7fffffee,
                       extraout_ECX_05);
        piVar7 = *(int **)(in_stack_00000004 + -0x48);
        i_val = (**(code **)(**(int **)(in_stack_00000004 + -0x48) + 0x20))();
        uVar11 = (*(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) - i_val;
        i_val = (int)uVar11 >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((uVar11 & 1) != 0);
        }
        iVar5 = i_val + *(int *)(in_stack_00000004 + -0xc) + 1;
        i_val = (**(code **)(**(int **)(in_stack_00000004 + -0x48) + 0x2c))();
        uVar11 = (*(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) - i_val;
        i_val = (int)uVar11 >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((uVar11 & 1) != 0);
        }
        FUN_00418f9c(*(int **)(in_stack_00000004 + -0x28),
                     i_val + *(int *)(in_stack_00000004 + -0x10) + 1,iVar5,piVar7);
        TFont_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0xc),
                       *(int *)(in_stack_00000004 + -0x44),extraout_ECX_06);
        *in_FS_OFFSET = uVar10;
        FUN_00402f9c(*(int **)(in_stack_00000004 + -0x48));
        return;
      }
      iVar5 = FUN_0043a91c(*(int *)(in_stack_00000004 + -0x3c));
      uVar6 = extraout_ECX_04;
      if (iVar5 <= i_val) goto LAB_0043dc86;
      FUN_0043ae38(*(int **)(in_stack_00000004 + -0x3c),*(undefined4 *)(in_stack_00000004 + -0x28),
                   *(undefined4 *)(in_stack_00000004 + -0x10),
                   *(undefined1 *)(*(int *)(in_stack_00000004 + -0x34) + 0x2d),
                   *(undefined4 *)(*(int *)(in_stack_00000004 + -0x34) + 0x34),
                   *(undefined4 *)(in_stack_00000004 + -0xc));
    }
    if (*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) != '\0') {
      *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + -1;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + -1;
    }
  }
LAB_0043df10:
  *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + -1;
  *(int *)(in_stack_00000004 + -0xc) = *(int *)(in_stack_00000004 + -0xc) + -1;
  *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 2;
  *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + 2;
  if ((*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) != '\0') ||
     ((*(char *)(in_stack_00000004 + -0x21) != '\0' &&
      (*(char *)(in_stack_00000004 + -0x35) != '\0')))) {
    UVar17 = 0xf;
    UVar16 = *(UINT *)(&DAT_004aa910 +
                      (uint)*(byte *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) * 4);
    ptVar8 = (LPRECT)(in_stack_00000004 + -0x10);
    pHVar9 = (HDC)FUN_004194d8(*(int **)(in_stack_00000004 + -0x28));
    DrawEdge(pHVar9,ptVar8,UVar16,UVar17);
  }
  if (*(char *)(in_stack_00000004 + -0x21) != '\0') {
    if (*(char *)(in_stack_00000004 + -0x35) != '\0') {
      *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -8) + 1;
    }
    if ((*(char *)(in_stack_00000004 + -0x59) == '\0') || (*(char *)(in_stack_00000004 + 8) == '\0')
       ) {
      TBrush_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0x8000000d);
    }
    FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
  }
  if ((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x59) != '\0'))
  {
    if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
      if ((*(byte *)(in_stack_00000004 + 0xc) & 0x40) != 0) {
        UVar17 = 0xf;
        UVar16 = 4;
        ptVar8 = (LPRECT)(in_stack_00000004 + -0x20);
        pHVar9 = (HDC)FUN_004194d8(*(int **)(in_stack_00000004 + -0x28));
        DrawEdge(pHVar9,ptVar8,UVar16,UVar17);
      }
    }
    else {
      UVar17 = 0xf;
      UVar16 = 2;
      ptVar8 = (LPRECT)(in_stack_00000004 + -0x20);
      pHVar9 = (HDC)FUN_004194d8(*(int **)(in_stack_00000004 + -0x28));
      DrawEdge(pHVar9,ptVar8,UVar16,UVar17);
    }
    if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
      OffsetRect((LPRECT)(in_stack_00000004 + -0x20),0,-1);
    }
  }
  if ((*(char *)(in_stack_00000004 + -0x21) == '\0') ||
     (*(char *)(in_stack_00000004 + -0x35) == '\0')) {
    *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -8) + 1;
  }
  *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -0x20) + 2;
  *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x18) + -1;
  *(uint *)(in_stack_00000004 + -0x60) =
       (uint)(*(ushort *)(&DAT_004aa908 + (uint)*(byte *)(in_stack_00000004 + -0x2d) * 2) | 0x60);
  if ((*(char *)(in_stack_00000004 + -0x61) != '\0') &&
     ((*(byte *)(in_stack_00000004 + 0xd) & 1) != 0)) {
    *(uint *)(in_stack_00000004 + -0x60) = *(uint *)(in_stack_00000004 + -0x60) | 0x100000;
  }
  puVar12 = (undefined4 *)(in_stack_00000004 + -0x20);
  puVar13 = (undefined4 *)(in_stack_00000004 + -0x58);
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
  }
  if ((*(byte *)(in_stack_00000004 + 0xc) & 0x20) != 0) {
    TFont_SetStyle(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0xc),1);
  }
  FUN_0043d758(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
               *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x24),
               *(uint *)(in_stack_00000004 + -0x60) | 0x500,*(char *)(in_stack_00000004 + -0x21),
               (LPRECT)(in_stack_00000004 + -0x20));
  uVar10 = (*(int *)(in_stack_00000004 + -0x4c) - *(int *)(in_stack_00000004 + -0x54)) -
           (*(int *)(in_stack_00000004 + -0x14) - *(int *)(in_stack_00000004 + -0x1c));
  i_val = (int)uVar10 >> 1;
  if (i_val < 0) {
    i_val = i_val + (uint)((uVar10 & 1) != 0);
  }
  OffsetRect((LPRECT)(in_stack_00000004 + -0x20),0,i_val);
  if (((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x21) != '\0'))
     && (*(char *)(in_stack_00000004 + -0x59) != '\0')) {
    OffsetRect((LPRECT)(in_stack_00000004 + -0x20),1,0);
  }
  FUN_0043d758(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
               *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x24),
               *(uint *)(in_stack_00000004 + -0x60),*(char *)(in_stack_00000004 + -0x21),
               (LPRECT)(in_stack_00000004 + -0x20));
  uVar1 = *(ushort *)(*(int *)(in_stack_00000004 + -0x34) + 0x54);
  if ((uVar1 != 0) && (*(char *)(in_stack_00000004 + 8) == '\0')) {
    *(undefined4 *)(in_stack_00000004 + -0x20) = *(undefined4 *)(in_stack_00000004 + -0x18);
    *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x50) + -10;
    ptVar8 = (LPRECT)(in_stack_00000004 + -0x20);
    cVar3 = *(char *)(in_stack_00000004 + -0x21);
    in_stack_ffffffbc = 2;
    FUN_0043c90c(uVar1,&local_8);
    FUN_0043d758(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),local_8,
                 in_stack_ffffffbc,cVar3,ptVar8);
  }
  *in_FS_OFFSET = in_stack_ffffffbc;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 0043e230 FUN_0043e230 ==== */

void FUN_0043e230(void)

{
  ushort uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int i_val;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  HBITMAP h_val;
  HDC pHVar8;
  uint uVar9;
  LONG LVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *in_FS_OFFSET;
  bool bVar13;
  byte bVar14;
  int in_stack_00000004;
  undefined4 in_stack_ffffffbc;
  UINT UVar15;
  UINT UVar16;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_8;
  LPRECT qrc_val;
  
  bVar14 = 0;
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_1c = &LAB_0043eabb;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
    FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  if (*(int *)(in_stack_00000004 + -0x2c) == 0) {
    uVar6 = FUN_00403114(*(int **)(in_stack_00000004 + -0x2c),
                         (int)&PTR_TPersistent_virtual_000_0043c4d0);
    if ((char)uVar6 == '\0') {
      *(undefined1 *)(in_stack_00000004 + -0x2d) = 0;
    }
    else {
      *(undefined1 *)(in_stack_00000004 + -0x2d) =
           *(undefined1 *)(*(int *)(in_stack_00000004 + -0x2c) + 0x50);
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + -0x2d) = 0;
  }
  *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -0x18) + -1;
  i_val = *(int *)(in_stack_00000004 + -0x1c) + 1;
  bVar13 = i_val == 0;
  *(int *)(in_stack_00000004 + -0xc) = i_val;
  FUN_00403fec(*(uint **)(*(int *)(in_stack_00000004 + -0x34) + 0x24),(uint *)&DAT_0043ead0);
  if (bVar13) {
    FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
    *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -8) + 2;
    *(undefined4 *)(in_stack_00000004 + -8) = 0;
    *(undefined1 *)(in_stack_00000004 + -0x35) = 0;
    goto LAB_0043e799;
  }
  uVar6 = extraout_ECX;
  if (*(int *)(in_stack_00000004 + -0x3c) == 0) {
LAB_0043e352:
    uVar4 = 0;
  }
  else {
    i_val = *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x34);
    if (i_val < 0) {
LAB_0043e32b:
      if (*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) == '\0') goto LAB_0043e352;
      piVar7 = *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40);
      if (piVar7 != (int *)0x0) {
        cVar3 = (**(code **)(*piVar7 + 0x1c))();
        uVar6 = extraout_ECX_01;
        if (cVar3 == '\0') goto LAB_0043e352;
      }
    }
    else {
      iVar5 = FUN_0043a91c(*(int *)(in_stack_00000004 + -0x3c));
      uVar6 = extraout_ECX_00;
      if (iVar5 <= i_val) goto LAB_0043e32b;
    }
    uVar4 = 1;
  }
  *(undefined1 *)(in_stack_00000004 + -0x3d) = uVar4;
  if (*(char *)(in_stack_00000004 + -0x3d) == '\0') {
    piVar7 = *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40);
    if (piVar7 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar7 + 0x1c))();
      uVar6 = extraout_ECX_02;
      if (cVar3 == '\0') goto LAB_0043e38a;
    }
    if ((*(int *)(in_stack_00000004 + -0x3c) == 0) || (*(char *)(in_stack_00000004 + 8) != '\0')) {
      *(undefined4 *)(in_stack_00000004 + -0x10) = *(undefined4 *)(in_stack_00000004 + -8);
      *(undefined4 *)(in_stack_00000004 + -4) = *(undefined4 *)(in_stack_00000004 + -0xc);
    }
    else {
      *(int *)(in_stack_00000004 + -0x10) =
           *(int *)(in_stack_00000004 + -8) - *(int *)(*(int *)(in_stack_00000004 + -0x3c) + 0x28);
      *(int *)(in_stack_00000004 + -4) =
           *(int *)(in_stack_00000004 + -0xc) + *(int *)(*(int *)(in_stack_00000004 + -0x3c) + 0x24)
      ;
    }
    *(undefined1 *)(in_stack_00000004 + -0x35) = 0;
  }
  else {
LAB_0043e38a:
    *(undefined1 *)(in_stack_00000004 + -0x35) = 1;
    if (*(char *)(in_stack_00000004 + -0x3d) == '\0') {
      *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -8) + -0x10;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -0xc) + 0x10;
    }
    else {
      *(int *)(in_stack_00000004 + -0x10) =
           *(int *)(in_stack_00000004 + -8) - *(int *)(*(int *)(in_stack_00000004 + -0x3c) + 0x28);
      *(int *)(in_stack_00000004 + -4) =
           *(int *)(in_stack_00000004 + -0xc) + *(int *)(*(int *)(in_stack_00000004 + -0x3c) + 0x24)
      ;
    }
    if (*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) != '\0') {
      *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + -1;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + 1;
      uVar6 = TBrush_GetColor(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0x14));
      *(undefined4 *)(in_stack_00000004 + -0x44) = uVar6;
      if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
        uVar6 = TBrush_GetColor(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0x14));
        *(undefined4 *)(in_stack_00000004 + -0x44) = uVar6;
        uVar6 = FUN_0041fb50(0x8000000f,0x80000014);
        FUN_004189b8(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),uVar6);
        FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x10));
      }
      else {
        TBrush_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0x8000000f);
        FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x10));
      }
      TBrush_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),
                      *(undefined4 *)(in_stack_00000004 + -0x44));
      *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + -1;
      *(int *)(in_stack_00000004 + -0xc) = *(int *)(in_stack_00000004 + -0xc) + 1;
      uVar6 = extraout_ECX_03;
    }
    if (*(char *)(in_stack_00000004 + -0x3d) == '\0') {
      puVar11 = (undefined4 *)(in_stack_00000004 + -0x10);
      puVar12 = (undefined4 *)(in_stack_00000004 + -0x58);
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
        puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
      }
      i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x2c))();
      if (i_val < *(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) {
        i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x2c))();
        uVar9 = (*(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) - i_val;
        i_val = (int)uVar9 >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((uVar9 & 1) != 0);
        }
        *(int *)(in_stack_00000004 + -8) = (*(int *)(in_stack_00000004 + -8) - i_val) + 1;
        i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x2c))();
        *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -8) - i_val;
      }
      i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x20))();
      if (i_val < *(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) {
        i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x20))();
        uVar9 = (*(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) - i_val;
        i_val = (int)uVar9 >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((uVar9 & 1) != 0);
        }
        *(int *)(in_stack_00000004 + -0xc) = i_val + *(int *)(in_stack_00000004 + -0xc) + 1;
        i_val = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40) + 0x20))();
        *(int *)(in_stack_00000004 + -4) = i_val + *(int *)(in_stack_00000004 + -0xc);
      }
      FUN_00419200(*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10,
                   *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40));
      puVar11 = (undefined4 *)(in_stack_00000004 + -0x58);
      puVar12 = (undefined4 *)(in_stack_00000004 + -0x10);
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
        puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
      }
    }
    else {
      i_val = *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x34);
      if (i_val < 0) {
LAB_0043e50b:
        piVar7 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',uVar6);
        *(int **)(in_stack_00000004 + -0x48) = piVar7;
        uVar6 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffd4;
        (**(code **)(**(int **)(in_stack_00000004 + -0x48) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x48),1);
        h_val = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7ff8);
        FUN_0041ea8c(*(int **)(in_stack_00000004 + -0x48),h_val);
        *(undefined4 *)(in_stack_00000004 + -0x44) =
             *(undefined4 *)(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0xc) + 0x18);
        TFont_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0xc),-0x7fffffee,
                       extraout_ECX_05);
        piVar7 = *(int **)(in_stack_00000004 + -0x48);
        i_val = (**(code **)(**(int **)(in_stack_00000004 + -0x48) + 0x20))();
        uVar9 = (*(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) - i_val;
        i_val = (int)uVar9 >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((uVar9 & 1) != 0);
        }
        iVar5 = i_val + *(int *)(in_stack_00000004 + -0xc) + 1;
        i_val = (**(code **)(**(int **)(in_stack_00000004 + -0x48) + 0x2c))();
        uVar9 = (*(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) - i_val;
        i_val = (int)uVar9 >> 1;
        if (i_val < 0) {
          i_val = i_val + (uint)((uVar9 & 1) != 0);
        }
        FUN_00418f9c(*(int **)(in_stack_00000004 + -0x28),
                     i_val + *(int *)(in_stack_00000004 + -0x10) + 1,iVar5,piVar7);
        TFont_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0xc),
                       *(int *)(in_stack_00000004 + -0x44),extraout_ECX_06);
        *in_FS_OFFSET = uVar6;
        FUN_00402f9c(*(int **)(in_stack_00000004 + -0x48));
        return;
      }
      iVar5 = FUN_0043a91c(*(int *)(in_stack_00000004 + -0x3c));
      uVar6 = extraout_ECX_04;
      if (iVar5 <= i_val) goto LAB_0043e50b;
      FUN_0043ae38(*(int **)(in_stack_00000004 + -0x3c),*(undefined4 *)(in_stack_00000004 + -0x28),
                   *(undefined4 *)(in_stack_00000004 + -0x10),
                   *(undefined1 *)(*(int *)(in_stack_00000004 + -0x34) + 0x2d),
                   *(undefined4 *)(*(int *)(in_stack_00000004 + -0x34) + 0x34),
                   *(undefined4 *)(in_stack_00000004 + -0xc));
    }
    if (*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) != '\0') {
      *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + -1;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + -1;
    }
  }
LAB_0043e799:
  *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + -1;
  *(int *)(in_stack_00000004 + -0xc) = *(int *)(in_stack_00000004 + -0xc) + -1;
  *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 2;
  *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + 2;
  if ((*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) != '\0') ||
     ((*(char *)(in_stack_00000004 + -0x21) != '\0' &&
      (*(char *)(in_stack_00000004 + -0x35) != '\0')))) {
    UVar16 = 0xf;
    UVar15 = *(UINT *)(&DAT_004aa910 +
                      (uint)*(byte *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) * 4);
    qrc_val = (LPRECT)(in_stack_00000004 + -0x10);
    pHVar8 = (HDC)FUN_004194d8(*(int **)(in_stack_00000004 + -0x28));
    DrawEdge(pHVar8,qrc_val,UVar15,UVar16);
  }
  if (*(char *)(in_stack_00000004 + -0x21) != '\0') {
    if (*(char *)(in_stack_00000004 + -0x35) != '\0') {
      *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x10) + -1;
    }
    if ((*(char *)(in_stack_00000004 + -0x59) == '\0') || (*(char *)(in_stack_00000004 + 8) == '\0')
       ) {
      TBrush_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0x8000000d);
    }
    FUN_0041907c(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
  }
  if ((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x59) != '\0'))
  {
    if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
      if ((*(byte *)(in_stack_00000004 + 0xc) & 0x40) != 0) {
        UVar16 = 0xf;
        UVar15 = 4;
        qrc_val = (LPRECT)(in_stack_00000004 + -0x20);
        pHVar8 = (HDC)FUN_004194d8(*(int **)(in_stack_00000004 + -0x28));
        DrawEdge(pHVar8,qrc_val,UVar15,UVar16);
      }
    }
    else {
      UVar16 = 0xf;
      UVar15 = 2;
      qrc_val = (LPRECT)(in_stack_00000004 + -0x20);
      pHVar8 = (HDC)FUN_004194d8(*(int **)(in_stack_00000004 + -0x28));
      DrawEdge(pHVar8,qrc_val,UVar15,UVar16);
    }
    if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
      OffsetRect((LPRECT)(in_stack_00000004 + -0x20),0,-1);
    }
  }
  if ((*(char *)(in_stack_00000004 + -0x21) == '\0') ||
     (*(char *)(in_stack_00000004 + -0x35) == '\0')) {
    *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x10) + -1;
  }
  *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -0x20) + 2;
  *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x18) + -1;
  *(uint *)(in_stack_00000004 + -0x60) =
       (uint)(*(ushort *)(&DAT_004aa908 + (uint)*(byte *)(in_stack_00000004 + -0x2d) * 2) | 0x60);
  if ((*(char *)(in_stack_00000004 + -0x61) != '\0') &&
     ((*(byte *)(in_stack_00000004 + 0xd) & 1) != 0)) {
    *(uint *)(in_stack_00000004 + -0x60) = *(uint *)(in_stack_00000004 + -0x60) | 0x100000;
  }
  puVar11 = (undefined4 *)(in_stack_00000004 + -0x20);
  puVar12 = (undefined4 *)(in_stack_00000004 + -0x58);
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
    puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
  }
  if ((*(byte *)(in_stack_00000004 + 0xc) & 0x20) != 0) {
    TFont_SetStyle(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0xc),1);
  }
  FUN_0043d758(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
               *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x24),
               *(uint *)(in_stack_00000004 + -0x60) | 0x500,*(char *)(in_stack_00000004 + -0x21),
               (LPRECT)(in_stack_00000004 + -0x20));
  *(undefined4 *)(in_stack_00000004 + -0x20) = *(undefined4 *)(in_stack_00000004 + -0x58);
  *(undefined4 *)(in_stack_00000004 + -0x18) = *(undefined4 *)(in_stack_00000004 + -0x50);
  uVar9 = (*(int *)(in_stack_00000004 + -0x4c) - *(int *)(in_stack_00000004 + -0x54)) -
          (*(int *)(in_stack_00000004 + -0x14) - *(int *)(in_stack_00000004 + -0x1c));
  i_val = (int)uVar9 >> 1;
  if (i_val < 0) {
    i_val = i_val + (uint)((uVar9 & 1) != 0);
  }
  OffsetRect((LPRECT)(in_stack_00000004 + -0x20),0,i_val);
  if (((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x21) != '\0'))
     && (*(char *)(in_stack_00000004 + -0x59) != '\0')) {
    OffsetRect((LPRECT)(in_stack_00000004 + -0x20),1,0);
  }
  FUN_0043d758(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
               *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x24),
               *(uint *)(in_stack_00000004 + -0x60),*(char *)(in_stack_00000004 + -0x21),
               (LPRECT)(in_stack_00000004 + -0x20));
  uVar1 = *(ushort *)(*(int *)(in_stack_00000004 + -0x34) + 0x54);
  if ((uVar1 != 0) && (*(char *)(in_stack_00000004 + 8) == '\0')) {
    FUN_0043c90c(uVar1,(int *)&local_8);
    *(undefined4 *)(in_stack_00000004 + -0x20) = 10;
    LVar10 = FUN_00419338(*(int **)(in_stack_00000004 + -0x28),local_8);
    *(LONG *)(in_stack_00000004 + -0x18) = LVar10 + *(int *)(in_stack_00000004 + -0x20);
    in_stack_ffffffbc = 2;
    FUN_0043d758(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
                 (int)local_8,2,*(char *)(in_stack_00000004 + -0x21),
                 (LPRECT)(in_stack_00000004 + -0x20));
  }
  *in_FS_OFFSET = in_stack_ffffffbc;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 0043ead8 TMenuItem.virtual_030 ==== */

void TMenuItem_virtual_030
               (int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               ushort param_5)

{
  int iVar1;
  undefined4 uVar2;
  int i_val;
  undefined4 *puVar3;
  undefined4 local_24 [8];
  
  puVar3 = local_24;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  i_val = thunk_FUN_0043f588((int)param_1);
  iVar1 = FUN_0043ebf0((int)param_1);
  if (((i_val == 0) || ((*(char *)(i_val + 0x34) == '\0' && (iVar1 == 0)))) ||
     ((*(short *)((int)param_1 + 0x92) == 0 && (*(short *)((int)param_1 + 0x8a) == 0)))) {
    if ((i_val == 0) || (uVar2 = FUN_00440a7c(i_val), (char)uVar2 != '\0')) {
      FUN_0043e230();
    }
    else {
      FUN_0043d9b0();
    }
  }
  else {
    (**(code **)(*param_1 + 0x34))(param_1,param_2,local_24,(param_5 & 1) != 0);
    if (*(short *)((int)param_1 + 0x92) != 0) {
      (*(code *)param_1[0x24])
                (param_1[0x25],param_1,param_2,CONCAT22((short)((uint)local_24 >> 0x10),param_5),
                 local_24);
    }
  }
  return;
}


/* ==== 0043ebf0 FUN_0043ebf0 ==== */

undefined4 FUN_0043ebf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x58); (iVar1 != 0 && (*(int *)(iVar1 + 0x70) == 0));
      iVar1 = *(int *)(iVar1 + 0x58)) {
  }
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_0043f588(param_1);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x3c);
    }
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x70);
  }
  return uVar2;
}


/* ==== 0043ec20 FUN_0043ec20 ==== */

void FUN_0043ec20(void)

{
  BOOL BVar1;
  int in_stack_00000004;
  undefined4 local_158 [38];
  undefined4 local_c0;
  undefined4 local_bc;
  
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 != 0) {
    **(undefined4 **)(in_stack_00000004 + -4) = local_c0;
    **(undefined4 **)(in_stack_00000004 + 8) = local_bc;
  }
  return;
}


/* ==== 0043ec6c FUN_0043ec6c ==== */

void FUN_0043ec6c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint format_val;
  byte bVar6;
  uint *in_FS_OFFSET;
  bool bVar7;
  undefined1 uVar8;
  uint uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_28;
  tagRECT rect;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_28 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_3c = &LAB_0043ee4e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_40;
  local_c = param_2;
  local_8 = param_3;
  piVar3 = (int *)FUN_00403178(param_1,param_2,param_3);
  uVar4 = FUN_00403114(piVar3,(int)&PTR_TPersistent_virtual_000_0043c1f8);
  bVar7 = (char)uVar4 == '\0';
  if (bVar7) {
    uVar8 = 1;
  }
  else {
    uVar8 = bVar7;
    FUN_0043ec20();
  }
  bVar7 = !bVar7;
  iVar5 = thunk_FUN_0043f588((int)param_1);
  local_10 = FUN_0043ebf0((int)param_1);
  FUN_00403fec((uint *)param_1[9],(uint *)&DAT_0043ee68);
  if ((bool)uVar8) {
    *param_4 = 5;
    *local_8 = -2;
    bVar1 = false;
  }
  else if ((local_10 == 0) || ((0x7fffffff < (uint)param_1[0xd] && (bVar7)))) {
    if ((param_1[0x10] == 0) ||
       (cVar2 = (**(code **)(*(int *)param_1[0x10] + 0x1c))(), cVar2 != '\0')) {
      *local_8 = -7;
      bVar1 = false;
    }
    else {
      *local_8 = 0x10;
      if (!bVar7) {
        *param_4 = 0x10;
      }
      bVar1 = true;
    }
  }
  else {
    *local_8 = *(int *)(local_10 + 0x28);
    if (!bVar7) {
      *param_4 = *(int *)(local_10 + 0x24);
    }
    bVar1 = true;
  }
  if ((bVar1) && (!bVar7)) {
    *local_8 = *local_8 + 0xf;
  }
  if (!bVar7) {
    *param_4 = *param_4 + 3;
  }
  FUN_00402c30(&rect.left,0x10,0);
  if (iVar5 == 0) {
    uVar4 = FUN_00403114((int *)0x0,(int)&PTR_TPersistent_virtual_000_0043c4d0);
    bVar6 = bRam00000050;
    if ((char)uVar4 == '\0') {
      bVar6 = 0;
    }
  }
  else {
    bVar6 = 0;
  }
  if (*(ushort *)(param_1 + 0x15) == 0) {
    FUN_00403cf4(&local_14,param_1[9]);
  }
  else {
    FUN_0043c90c(*(ushort *)(param_1 + 0x15),(int *)&local_28);
    FUN_00403f28(&local_14,(undefined4 *)param_1[9],local_28);
  }
  format_val = (uint)(*(ushort *)(&DAT_004aa918 + (uint)bVar6 * 2) | 0x560);
  FUN_0043d758((int)param_1,local_c,local_14,format_val,'\0',&rect);
  *local_8 = *local_8 + (rect.right - rect.left) + 7;
  if (*(short *)((int)param_1 + 0x9a) != 0) {
    (*(code *)param_1[0x26])(param_1[0x27],param_1,local_c,param_4,local_8);
  }
  *in_FS_OFFSET = format_val;
  FUN_00403c5c((int *)&local_28);
  FUN_00403c5c(&local_14);
  return;
}


/* ==== 0043ee6c TMenuItem.dynamic_fff2 ==== */

undefined1 TMenuItem_dynamic_fff2(void)

{
  return 1;
}


/* ==== 0043ee70 TMenuItem.SetBreak ==== */

void TMenuItem_SetBreak(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xf]) {
    *(char *)(param_1 + 0xf) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 0043ee80 TMenuItem.SetCaption ==== */

void TMenuItem_SetCaption(int *param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00403fec((uint *)param_1[9],param_2);
  if (!(bool)in_ZF) {
    FUN_00403cb0(param_1 + 9,param_2);
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 0043eea8 FUN_0043eea8 ==== */

void FUN_0043eea8(int param_1)

{
  int i_val;
  int iVar1;
  int j;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    i_val = FUN_0043f018(*(int *)(param_1 + 0x58));
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar1 = FUN_0043f028(*(int *)(param_1 + 0x58),j);
        if (((param_1 != iVar1) && (*(char *)(iVar1 + 0x31) != '\0')) &&
           (*(char *)(iVar1 + 0x33) == *(char *)(param_1 + 0x33))) {
          TMenuItem_SetChecked(iVar1,0);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return;
}


/* ==== 0043eef0 TMenuItem.SetChecked ==== */

void TMenuItem_SetChecked(int param_1,byte param_2)

{
  uint uIDCheckItem;
  HMENU hMenu;
  UINT uCheck;
  
  if (param_2 != *(byte *)(param_1 + 0x2c)) {
    *(byte *)(param_1 + 0x2c) = param_2;
    if ((*(int *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 0x20) & 2) == 0)) {
      uCheck = *(UINT *)(&DAT_004aa8a0 + (uint)param_2 * 4);
      uIDCheckItem = (uint)*(ushort *)(param_1 + 0x44);
      hMenu = (HMENU)FUN_0043d6c8(*(int *)(param_1 + 0x58));
      CheckMenuItem(hMenu,uIDCheckItem,uCheck);
    }
    if ((param_2 != 0) && (*(char *)(param_1 + 0x31) != '\0')) {
      FUN_0043eea8(param_1);
    }
  }
  return;
}


/* ==== 0043ef44 TMenuItem.SetEnabled ==== */

void TMenuItem_SetEnabled(int *param_1,byte param_2)

{
  int iVar1;
  uint uIDEnableItem;
  HMENU hMenu;
  UINT uEnable;
  
  if (param_2 == *(byte *)((int)param_1 + 0x2d)) {
    return;
  }
  *(byte *)((int)param_1 + 0x2d) = param_2;
  if (((*(int *)PTR_DAT_004aba10 != 2) || (iVar1 = FUN_0043f018((int)param_1), iVar1 == 0)) &&
     ((param_1[0x16] == 0 || (*(int *)(param_1[0x16] + 0x60) == 0)))) {
    if ((param_1[0x16] != 0) && ((*(byte *)(param_1 + 8) & 2) == 0)) {
      uEnable = *(UINT *)(&DAT_004aa8a8 + (uint)param_2 * 4);
      uIDEnableItem = (uint)*(ushort *)(param_1 + 0x11);
      hMenu = (HMENU)FUN_0043d6c8(param_1[0x16]);
      EnableMenuItem(hMenu,uIDEnableItem,uEnable);
    }
    (**(code **)(*param_1 + 0x38))(param_1,0);
    return;
  }
  (**(code **)(*param_1 + 0x38))(param_1,1);
  return;
}


/* ==== 0043efbc TMenuItem.SetGroupIndex ==== */

void TMenuItem_SetGroupIndex(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != *(byte *)(param_1 + 0x33)) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != 0) {
      iVar2 = FUN_0043f334(iVar1,param_1);
      FUN_0043d668(iVar1,iVar2,param_2);
    }
    *(byte *)(param_1 + 0x33) = param_2;
    if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x31) != '\0')) {
      FUN_0043eea8(param_1);
    }
  }
  return;
}


/* ==== 0043f000 TMenuItem.GetAction ==== */

undefined4 TMenuItem_GetAction(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10);
  }
  return 0;
}


/* ==== 0043f010 TMenuItem.dynamic_ffef ==== */

undefined1 * TMenuItem_dynamic_ffef(void)

{
  return &LAB_0043bc4c;
}


/* ==== 0043f018 FUN_0043f018 ==== */

undefined4 FUN_0043f018(int param_1)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
}


/* ==== 0043f028 FUN_0043f028 ==== */

void FUN_0043f028(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0043c860((undefined4 *)PTR_PTR_004ab7a8);
  }
  FUN_004102b0(*(undefined4 **)(param_1 + 0x50),param_2);
  return;
}


/* ==== 0043f04c TMenuItem.SetShortCut ==== */

void TMenuItem_SetShortCut(int *param_1,short param_2)

{
  if (param_2 != (short)param_1[0x15]) {
    *(short *)(param_1 + 0x15) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 0043f060 TMenuItem.SetVisible ==== */

void TMenuItem_SetVisible(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x32)) {
    *(char *)((int)param_1 + 0x32) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 0043f070 TMenuItem.SetImageIndex ==== */

void TMenuItem_SetImageIndex(int *param_1,int param_2)

{
  if (param_2 != param_1[0xd]) {
    param_1[0xd] = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 0043f080 FUN_0043f080 ==== */

int FUN_0043f080(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = FUN_0043f334(*(int *)(param_1 + 0x58),param_1);
  }
  return iVar1;
}


/* ==== 0043f098 FUN_0043f098 ==== */

void FUN_0043f098(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = FUN_0043f018(*(int *)(param_1 + 0x58));
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    iVar2 = FUN_0043f080(param_1);
    if (param_2 != iVar2) {
      piVar1 = *(int **)(param_1 + 0x58);
      FUN_0043f368(piVar1,param_1);
      FUN_0043f1a4(piVar1,param_2,param_1);
    }
  }
  return;
}


/* ==== 0043f0e0 TMenuItem.dynamic_fffd ==== */

void TMenuItem_dynamic_fffd
               (int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
               undefined4 param_5)

{
  int i_val;
  undefined4 uVar1;
  int j;
  
  i_val = FUN_0043f018(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar1 = FUN_0043f028(param_1,j);
      (*(code *)param_4)(param_5,uVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0043f118 TMenuItem.dynamic_fffa ==== */

void TMenuItem_dynamic_fffa(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0040312c(param_2,(int)&PTR_TMenuItem_virtual_000_0043bd08);
  FUN_0043f098(iVar1,param_3);
  return;
}


/* ==== 0043f138 TMenuItem.SetDefault ==== */

void TMenuItem_SetDefault(int *param_1,char param_2)

{
  int i_val;
  int iVar1;
  undefined3 in_register_00000009;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int j;
  
  if (param_2 != *(char *)((int)param_1 + 0x2e)) {
    if ((param_2 != '\0') && (param_1[0x16] != 0)) {
      i_val = FUN_0043f018(param_1[0x16]);
      in_register_00000009 = extraout_var;
      if (-1 < i_val + -1) {
        j = 0;
        do {
          iVar1 = FUN_0043f028(param_1[0x16],j);
          in_register_00000009 = extraout_var_00;
          if (*(char *)(iVar1 + 0x2e) != '\0') {
            iVar1 = FUN_0043f028(param_1[0x16],j);
            *(undefined1 *)(iVar1 + 0x2e) = 0;
            in_register_00000009 = extraout_var_01;
          }
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    }
    *(char *)((int)param_1 + 0x2e) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,CONCAT31(in_register_00000009,1));
  }
  return;
}


/* ==== 0043f194 TMenuItem.virtual_03c ==== */

void TMenuItem_virtual_03c(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
  }
  return;
}


/* ==== 0043f1a4 FUN_0043f1a4 ==== */

void FUN_0043f1a4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar1 = param_3;
  if (*(int *)(param_3 + 0x58) != 0) {
    FUN_0043c860((undefined4 *)PTR_PTR_004aba08);
    iVar1 = extraout_ECX;
  }
  if (param_1[0x14] == 0) {
    iVar1 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',iVar1);
    param_1[0x14] = iVar1;
  }
  iVar1 = param_2 + -1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1[0x14] + 8))) {
    iVar2 = FUN_004102b0((undefined4 *)param_1[0x14],iVar1);
    if (*(byte *)(param_3 + 0x33) < *(byte *)(iVar2 + 0x33)) {
      iVar1 = FUN_004102b0((undefined4 *)param_1[0x14],iVar1);
      TMenuItem_SetGroupIndex(param_3,*(byte *)(iVar1 + 0x33));
    }
  }
  FUN_0043d668((int)param_1,param_2,*(byte *)(param_3 + 0x33));
  FUN_0041032c((int *)param_1[0x14],param_2,param_3);
  *(int **)(param_3 + 0x58) = param_1;
  *(int **)(param_3 + 0x7c) = param_1;
  *(code **)(param_3 + 0x78) = FUN_0043f3cc;
  if (param_1[10] != 0) {
    FUN_0043d5e4(param_1);
  }
  iVar1 = FUN_0043f018((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 1);
  return;
}


/* ==== 0043f254 FUN_0043f254 ==== */

void FUN_0043f254(int *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_1[0x14] != 0)) {
    iVar1 = FUN_0043f018((int)param_1);
    if (param_2 < iVar1) goto LAB_0043f27a;
  }
  FUN_0043c860((undefined4 *)PTR_PTR_004ab7a8);
LAB_0043f27a:
  iVar1 = FUN_004102b0((undefined4 *)param_1[0x14],param_2);
  FUN_00410150((int *)param_1[0x14],param_2);
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  if (param_1[10] != 0) {
    FUN_0043d5e4(param_1);
  }
  iVar1 = FUN_0043f018((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 0);
  return;
}


/* ==== 0043f2c4 TMenuItem.virtual_040 ==== */

void TMenuItem_virtual_040(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2d) != '\0') {
    if (((*(short *)(param_1 + 0x82) != 0) && (iVar1 = TMenuItem_GetAction(param_1), iVar1 != 0)) &&
       (iVar1 = TMenuItem_GetAction(param_1), *(int *)(iVar1 + 0x30) != *(int *)(param_1 + 0x80))) {
      (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84),param_1);
      return;
    }
    if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x38) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
    }
    else if (*(short *)(param_1 + 0x82) != 0) {
      (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84),param_1);
    }
  }
  return;
}


/* ==== 0043f334 FUN_0043f334 ==== */

int FUN_0043f334(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_0041030c(*(int *)(param_1 + 0x50),param_2);
  }
  return iVar1;
}


/* ==== 0043f34c FUN_0043f34c ==== */

void FUN_0043f34c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043f018((int)param_1);
  FUN_0043f1a4(param_1,iVar1,param_2);
  return;
}


/* ==== 0043f368 FUN_0043f368 ==== */

void FUN_0043f368(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043f334((int)param_1,param_2);
  if (iVar1 == -1) {
    FUN_0043c860((undefined4 *)PTR_PTR_004ab97c);
  }
  FUN_0043f254(param_1,iVar1);
  return;
}


/* ==== 0043f390 TMenuItem.virtual_038 ==== */

void TMenuItem_virtual_038(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x58) == 0) &&
     (uVar1 = FUN_00403114(*(int **)(param_1 + 4),(int)&PTR_TPersistent_virtual_000_0043c104),
     (char)uVar1 != '\0')) {
    iVar2 = 0;
  }
  if (*(short *)(param_1 + 0x7a) != 0) {
    (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x7c),param_1,iVar2,param_2);
  }
  return;
}


/* ==== 0043f3cc FUN_0043f3cc ==== */

void FUN_0043f3cc(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_4 != '\0') && ((param_1[10] != 0 || (param_1[0x18] != 0)))) {
    FUN_0043d5e4(param_1);
  }
  if ((int *)param_1[0x16] == (int *)0x0) {
    piVar1 = (int *)param_1[1];
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_virtual_000_0043c1f8);
    if ((char)uVar2 != '\0') {
      FUN_00440f60(piVar1);
    }
  }
  else {
    FUN_0043f3cc((int *)param_1[0x16],param_1,param_3,'\0');
  }
  return;
}


/* ==== 0043f424 TMenuItem.GetBitmap ==== */

undefined4 TMenuItem_GetBitmap(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
    *(int **)(param_1 + 0x40) = piVar1;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x3c))(*(int **)(param_1 + 0x40),1);
  return *(undefined4 *)(param_1 + 0x40);
}


/* ==== 0043f44c TMenuItem.SetAction ==== */

void TMenuItem_SetAction(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 == 0) {
    FUN_00402f9c((int *)param_1[0xe]);
    param_1[0xe] = 0;
  }
  else {
    if (param_1[0xe] == 0) {
      iVar1 = FUN_00403178(param_1,param_2,param_3);
      iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      param_1[0xe] = iVar1;
    }
    (**(code **)(*(int *)param_1[0xe] + 0xc))((int *)param_1[0xe],param_2);
    iVar1 = param_1[0xe];
    *(int **)(iVar1 + 0xc) = param_1;
    *(undefined1 **)(iVar1 + 8) = &LAB_0043f6a8;
    FUN_00403178(param_1,param_2,
                 CONCAT31((int3)((uint)extraout_ECX >> 8),(*(byte *)(param_2 + 0x20) & 1) != 0));
    FUN_0041564c(param_2,(int)param_1,extraout_ECX_00);
  }
  return;
}


/* ==== 0043f4bc TMenuItem.SetBitmap ==== */

void TMenuItem_SetBitmap(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_1[0x10] == 0) {
    piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
    param_1[0x10] = (int)piVar1;
  }
  (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10],param_2);
  (**(code **)(*param_1 + 0x38))(param_1,1);
  return;
}


/* ==== 0043f4f0 FUN_0043f4f0 ==== */

void FUN_0043f4f0(int param_1)

{
  int i_val;
  int *piVar1;
  int j;
  
  i_val = FUN_0043f018(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_0043f028(param_1,j);
      (**(code **)(*piVar1 + 0x3c))();
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0043f51c TMenuItem.dynamic_fff3 ==== */

int TMenuItem_dynamic_fff3(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 100) != 0)) {
    return *(int *)(iVar1 + 100);
  }
  return iVar1;
}


/* ==== 0043f530 TMenuItem.dynamic_fff9 ==== */

void TMenuItem_dynamic_fff9(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    FUN_0043f368(*(int **)(param_1 + 0x58),param_1);
  }
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_virtual_000_0043c104);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00403114(param_2,(int)&PTR_TMenuItem_virtual_000_0043bd08);
      if ((char)uVar1 != '\0') {
        FUN_0043f34c(param_2,param_1);
      }
    }
    else {
      FUN_0043f34c((int *)param_2[10],param_1);
    }
  }
  return;
}


/* ==== 0043f584 thunk_FUN_0043f588 ==== */

undefined4 thunk_FUN_0043f588(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}


/* ==== 0043f588 FUN_0043f588 ==== */

undefined4 FUN_0043f588(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}


/* ==== 0043f594 TMenuItem.SetRadioItem ==== */

void TMenuItem_SetRadioItem(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x31)) {
    *(char *)((int)param_1 + 0x31) = param_2;
    if (((char)param_1[0xb] != '\0') && (*(char *)((int)param_1 + 0x31) != '\0')) {
      FUN_0043eea8((int)param_1);
    }
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 0043f5c0 TMenuItem.dynamic_fff0 ==== */

void TMenuItem_dynamic_fff0(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)TMenuItem_GetAction((int)param_1);
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if ((char)uVar2 != '\0') {
    if ((param_3 == '\0') || (param_1[9] == 0)) {
      TMenuItem_SetCaption(param_1,*(uint **)(param_2 + 0x54));
    }
    if ((param_3 == '\0') || ((char)param_1[0xb] == '\0')) {
      TMenuItem_SetChecked((int)param_1,*(byte *)(param_2 + 0x58));
    }
    if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x2d) == '\x01')) {
      TMenuItem_SetEnabled(param_1,*(byte *)(param_2 + 0x59));
    }
    if ((param_3 == '\0') || (param_1[0x12] == 0)) {
      param_1[0x12] = *(int *)(param_2 + 0x5c);
    }
    if ((param_3 == '\0') || (param_1[0x13] == 0)) {
      FUN_00403cb0(param_1 + 0x13,*(undefined4 **)(param_2 + 0x60));
    }
    if ((param_3 == '\0') || (param_1[0xd] == -1)) {
      TMenuItem_SetImageIndex(param_1,*(int *)(param_2 + 100));
    }
    if ((param_3 == '\0') || ((short)param_1[0x15] == 0)) {
      TMenuItem_SetShortCut(param_1,*(short *)(param_2 + 0x68));
    }
    if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x32) == '\x01')) {
      TMenuItem_SetVisible(param_1,*(char *)(param_2 + 0x6a));
    }
    if ((param_3 == '\0') || (*(short *)((int)param_1 + 0x82) == 0)) {
      param_1[0x20] = *(int *)(param_2 + 0x30);
      param_1[0x21] = *(int *)(param_2 + 0x34);
    }
  }
  return;
}


/* ==== 0043f6f0 FUN_0043f6f0 ==== */

undefined4 FUN_0043f6f0(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x24))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043f710 FUN_0043f710 ==== */

undefined4 FUN_0043f710(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x28))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043f730 FUN_0043f730 ==== */

undefined4 FUN_0043f730(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x30))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043f750 FUN_0043f750 ==== */

undefined4 FUN_0043f750(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x2c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043f770 FUN_0043f770 ==== */

undefined4 FUN_0043f770(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x34))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043f790 FUN_0043f790 ==== */

undefined4 FUN_0043f790(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x38))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043f7b0 FUN_0043f7b0 ==== */

undefined4 FUN_0043f7b0(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043f7d0 FUN_0043f7d0 ==== */

undefined4 FUN_0043f7d0(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 0043f7f0 TMenuItem.virtual_000 ==== */

void TMenuItem_virtual_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_virtual_000_0043943c);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_000(param_1,param_2);
  }
  else {
    FUN_00439d30(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x2d)));
    FUN_00439d88(param_2,param_1[0x12]);
    THintAction_SetHint(param_2,(uint *)param_1[0x13]);
    FUN_00439e48(param_2,param_1[0xd]);
    FUN_00439c70(param_2,(uint *)param_1[9]);
    FUN_00439efc(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x32)));
    (**(code **)(*param_2 + 0x34))();
  }
  return;
}


/* ==== 0043f868 TMenuItem.virtual_010 ==== */

void TMenuItem_virtual_010(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  TComponent_virtual_010((int)param_1,param_2,param_3);
  if (param_3 == '\x01') {
    iVar1 = TMenuItem_GetAction((int)param_1);
    if (param_2 == iVar1) {
      TMenuItem_SetAction(param_1,0,extraout_ECX);
    }
  }
  return;
}


/* ==== 0043f89c TMenuItem.SetSubMenuImages ==== */

void TMenuItem_SetSubMenuImages(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_0043b2a0(*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x6c));
  }
  *(int *)(param_1 + 0x70) = param_2;
  if (param_2 != 0) {
    FUN_0043b2e4(param_2,*(int *)(param_1 + 0x6c));
    FUN_0041564c(*(int *)(param_1 + 0x70),param_1,extraout_ECX);
  }
  FUN_0043f90c(param_1);
  return;
}


/* ==== 0043f8e4 FUN_0043f8e4 ==== */

undefined4 FUN_0043f8e4(int *param_1)

{
  FUN_0043cce4(FUN_0043f8e4,param_1[0x17],(int)param_1);
  FUN_0043f3cc(param_1,param_1,param_1,'\x01');
  return 0;
}


/* ==== 0043f90c FUN_0043f90c ==== */

void FUN_0043f90c(int param_1)

{
  FUN_0043cce4(FUN_0043f8e4,*(int *)(param_1 + 0x5c),param_1);
  return;
}


/* ==== 0043f920 FUN_0043f920 ==== */

bool FUN_0043f920(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040c0d8(param_1,*(undefined **)(param_4 + -4));
  if (pCVar1 != (PCNZCH)0x0) {
    FUN_00404124((int *)(param_4 + -4),(int)pCVar1,1);
  }
  return pCVar1 != (PCNZCH)0x0;
}


/* ==== 0043f950 FUN_0043f950 ==== */

void FUN_0043f950(void)

{
  undefined4 uVar1;
  int i_val;
  int iVar2;
  int j;
  int in_stack_00000004;
  
  (**(code **)(**(int **)(in_stack_00000004 + -8) + 8))
            (*(int **)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0xc));
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + -0xc) + 0x14))();
  *(undefined4 *)(in_stack_00000004 + -0x10) = uVar1;
  i_val = (**(code **)(**(int **)(in_stack_00000004 + -0x14) + 0x14))();
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar1 = (**(code **)(**(int **)(in_stack_00000004 + -0x14) + 0x18))
                        (*(int **)(in_stack_00000004 + -0x14),j);
      iVar2 = (**(code **)(**(int **)(in_stack_00000004 + -0x14) + 0x18))
                        (*(int **)(in_stack_00000004 + -0x14),j);
      (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x38))
                (*(int **)(in_stack_00000004 + -8),*(undefined4 *)(iVar2 + 0x24),uVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_00403cf4((int *)(in_stack_00000004 + -0x18),*(int *)(in_stack_00000004 + -4));
  return;
}


/* ==== 0043f9d4 FUN_0043f9d4 ==== */

void FUN_0043f9d4(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int i_val;
  uint uVar2;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined *puStackY_40;
  uint **ppuVar4;
  int *piVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  uint *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = (uint *)0x0;
  puStack_28 = &LAB_0043faf6;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = false;
  local_c = param_3;
  local_8 = param_2;
  i_val = FUN_00403edc(*param_1);
  if (0 < i_val) {
    j = 1;
    do {
      uVar2 = (uint)*(byte *)(*param_1 + -1 + j);
      if (((byte)PTR_DAT_004aba04[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
        bVar1 = true;
        break;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if (bVar1) {
    ppuVar4 = &local_10;
    i_val = FUN_00403edc(*param_1);
    uVar3 = i_val + -2 == 0;
    FUN_004040e4(*param_1,i_val + -2,3,(int *)ppuVar4);
    FUN_00403fec(local_10,(uint *)&DAT_0043fb0c);
    if ((bool)uVar3) {
      piVar5 = &local_14;
      i_val = FUN_00403edc(*param_1);
      FUN_004040e4(*param_1,1,i_val - 3,piVar5);
      puStackY_40 = &DAT_0043fb30;
      FUN_00403f9c(param_1,6);
    }
    else {
      puStackY_40 = &DAT_0043fb30;
      FUN_00403f9c(param_1,5);
    }
  }
  else if (local_c != 0) {
    FUN_0040416c((undefined4 *)&DAT_0043fb24,param_1,local_c);
  }
  *in_FS_OFFSET = puStackY_40;
  FUN_00403c80(&local_14,2);
  return;
}


/* ==== 0043fb34 FUN_0043fb34 ==== */

void FUN_0043fb34(int param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int j;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int k;
  int iVar9;
  int iVar10;
  PCNZCH pCVar11;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  undefined1 uVar12;
  int local_44;
  byte *local_40;
  undefined4 *local_3c;
  byte *local_38;
  undefined1 *puVar13;
  int local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  int *local_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  i_val = 8;
  do {
    local_8 = 0;
    i_val = i_val + -1;
  } while (i_val != 0);
  local_24 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  uStack_20 = &LAB_0043ffa6;
  puVar13 = &stack0xfffffffc;
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      local_28 = (undefined1 *)0x43fb71;
      cVar1 = FUN_00440150(param_1);
      puVar13 = local_1c;
      if (cVar1 != '\0') goto LAB_0043fb79;
    }
    *in_FS_OFFSET = (int)local_24;
    local_1c = &LAB_0043ffad;
    uStack_20 = (undefined1 *)0x43ff88;
    FUN_00403c80(&local_44,4);
    uStack_20 = (undefined1 *)0x43ff95;
    FUN_00403c80(&local_30,3);
    uStack_20 = (undefined1 *)0x43ff9d;
    FUN_00403c5c((int *)&local_1c);
    uStack_20 = (undefined1 *)0x43ffa5;
    FUN_00403c5c(&local_8);
    return;
  }
LAB_0043fb79:
  local_1c = puVar13;
  local_28 = (undefined1 *)0x43fb87;
  FUN_00403cf4(&local_8,(int)PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_004aa844);
  local_28 = (undefined1 *)0x43fb93;
  piVar3 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  local_28 = (undefined1 *)0x43fba2;
  piVar4 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX_00);
  local_28 = (undefined1 *)0x43fbb1;
  local_24 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX_01
                                );
  local_28 = (undefined1 *)0x43fbc0;
  piVar5 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX_02);
  local_2c = (undefined4 *)&LAB_0043ff67;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_30;
  local_28 = &stack0xfffffffc;
  i_val = FUN_0043f018(param_1);
  if (-1 < i_val + -1) {
    i_val = 0;
    do {
      puVar13 = (undefined1 *)0x43fbf5;
      j = FUN_0043f028(param_1,i_val);
      uVar12 = *(char *)(j + 0x32) == '\0';
      if (!(bool)uVar12) {
        j = FUN_0043f028(param_1,i_val);
        puVar13 = (undefined1 *)0x43fc15;
        FUN_00403fec(*(uint **)(j + 0x24),(uint *)&DAT_0043ffc0);
        if (!(bool)uVar12) {
          puVar13 = (undefined1 *)0x43fc24;
          j = FUN_0043f028(param_1,i_val);
          if (*(int *)(j + 0x24) != 0) {
            j = FUN_0043f028(param_1,i_val);
            FUN_00441a00(*(int *)(j + 0x24),(int *)&local_38);
            FUN_004081f0(local_38,(int *)&local_28);
            if (local_28 == (undefined *)0x0) {
              puVar13 = (undefined1 *)FUN_0043f028(param_1,i_val);
              local_38 = (byte *)0x43fc66;
              j = FUN_0043f028(param_1,i_val);
              local_38 = (byte *)0x43fc73;
              FUN_00411ac0(local_24,0,*(undefined4 *)(j + 0x24),puVar13);
            }
            else {
              puVar13 = (undefined1 *)0x43fc83;
              pCVar11 = FUN_0040c0d8(local_28,PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_004aa844);
              if (pCVar11 != (PCNZCH)0x0) {
                local_38 = (byte *)0x43fc90;
                puVar13 = &stack0xfffffffc;
                bVar2 = FUN_0043f920(local_28,extraout_EDX,extraout_ECX_03,(int)&stack0xfffffffc);
                if (!bVar2) {
                  j = FUN_0043f028(param_1,i_val);
                  piVar6 = (int *)(j + 0x24);
                  local_38 = (byte *)0x43fcab;
                  j = FUN_0043f028(param_1,i_val);
                  local_38 = (byte *)0x43fcb6;
                  FUN_00441968(*(undefined4 **)(j + 0x24),(int *)&local_3c);
                  FUN_00403cb0(piVar6,local_3c);
                  puVar13 = (undefined1 *)FUN_0043f028(param_1,i_val);
                  local_38 = (byte *)0x43fcd2;
                  j = FUN_0043f028(param_1,i_val);
                  local_38 = (byte *)0x43fcdf;
                  FUN_00411ac0(local_24,0,*(undefined4 *)(j + 0x24),puVar13);
                }
              }
            }
          }
        }
      }
      i_val = i_val + 1;
    } while (puVar13 != (undefined1 *)0x1);
  }
  FUN_00403cf4(&local_30,local_8);
  i_val = (**(code **)(*local_24 + 0x14))();
  if (-1 < i_val + -1) {
    do {
      FUN_00403cf4(&local_8,local_30);
      (**(code **)(*piVar4 + 8))(piVar4,local_24);
      (**(code **)(*piVar3 + 0x40))();
      i_val = (**(code **)(*piVar4 + 0x14))();
      i_val = i_val + -1;
      if (-1 < i_val) {
        do {
          (**(code **)(*piVar4 + 0xc))(piVar4,i_val,&local_2c);
          for (j = 1; k = FUN_00403edc((int)local_2c), j <= k; j = j + 1) {
            uVar7 = (uint)*(byte *)((int)local_2c + j + -1);
            if (((byte)PTR_DAT_004aba04[(int)uVar7 >> 3] >> (uVar7 & 7) & 1) == 0) {
              local_38 = (byte *)0x43fd7f;
              FUN_004040e4((int)local_2c,j,1,(int *)&local_40);
              FUN_004081f0(local_40,(int *)&local_28);
              local_38 = (byte *)0x43fd93;
              bVar2 = FUN_0043f920(local_28,extraout_EDX_00,extraout_ECX_04,(int)&stack0xfffffffc);
              if (bVar2) {
                if (PTR_DAT_004aba14[8] == '\0') {
                  FUN_0040416c((undefined4 *)&DAT_0043ffcc,(int *)&local_2c,j);
                }
                else {
                  FUN_0043f9d4((int *)&local_2c,local_28,j);
                }
                uVar8 = (**(code **)(*piVar4 + 0x18))(piVar4,i_val);
                (**(code **)(*piVar3 + 0x38))(piVar3,local_2c,uVar8);
                (**(code **)(*piVar4 + 0x44))(piVar4,i_val);
                break;
              }
            }
            else {
              j = j + 1;
            }
          }
          i_val = i_val + -1;
        } while (i_val != -1);
      }
      i_val = (**(code **)(*piVar3 + 0x14))();
      if (0 < i_val) {
        local_38 = (byte *)0x43fe12;
        FUN_0043f950();
      }
      i_val = (**(code **)(*piVar4 + 0x14))();
      if (i_val < 1) break;
      j = 0x43fe27;
      i_val = (**(code **)(*piVar4 + 0x14))();
      if (-1 < i_val + -1) {
        k = 0;
        do {
          j = (**(code **)(*piVar4 + 0x18))(piVar4,k);
          iVar9 = FUN_00411a8c(local_24,j);
          iVar10 = (**(code **)(*local_24 + 0x14))();
          j = 0x43fe5c;
          (**(code **)(*local_24 + 0x60))(local_24,iVar9,iVar10 + -1);
          k = k + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    } while (j != 1);
  }
  local_38 = (byte *)0x43fe75;
  FUN_0043f950();
  i_val = (**(code **)(*piVar5 + 0x14))();
  uStack_20 = (undefined1 *)CONCAT13(0 < i_val,(undefined3)uStack_20);
  i_val = (**(code **)(*piVar5 + 0x14))();
  if (-1 < i_val + -1) {
    i_val = 0;
    do {
      (**(code **)(*piVar5 + 0xc))(piVar5,i_val,&local_2c);
      if ((((PTR_DAT_004aba14[8] != '\0') &&
           (pCVar11 = FUN_0040c0d8(&DAT_0043ffcc,(undefined *)local_2c), pCVar11 == (PCNZCH)0x0)) &&
          (local_1c != (undefined1 *)0x0)) &&
         (pCVar11 = FUN_0040c0d8(&DAT_0043ffcc,(undefined *)local_2c), pCVar11 == (PCNZCH)0x0)) {
        piVar6 = &local_44;
        local_38 = (byte *)0x43fee7;
        j = FUN_00403edc((int)local_1c);
        local_38 = (byte *)0x43fef6;
        FUN_004040e4((int)local_1c,j,1,piVar6);
        FUN_0043f9d4((int *)&local_2c,local_44,0);
        j = FUN_00403edc((int)local_1c);
        FUN_00404124((int *)&local_1c,j,1);
      }
      j = (**(code **)(*piVar5 + 0x18))(piVar5,i_val);
      k = 0x43ff2f;
      FUN_00403cb0((int *)(j + 0x24),local_2c);
      i_val = i_val + 1;
    } while (k != 1);
  }
  *in_FS_OFFSET = local_30;
  local_28 = (undefined1 *)0x43ff6e;
  local_2c = (undefined4 *)0x43ff4e;
  FUN_00402f9c(piVar5);
  local_2c = (undefined4 *)0x43ff56;
  FUN_00402f9c(local_24);
  local_2c = (undefined4 *)0x43ff5e;
  FUN_00402f9c(piVar4);
  local_2c = (undefined4 *)0x43ff66;
  FUN_00402f9c(piVar3);
  return;
}


/* ==== 0043ffd0 TMenuItem.SetAutoHotkeys ==== */

void TMenuItem_SetAutoHotkeys(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x2f)) {
    *(char *)((int)param_1 + 0x2f) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 0043ffe0 FUN_0043ffe0 ==== */

undefined1 FUN_0043ffe0(int param_1)

{
  undefined1 in_ZF;
  
  FUN_00403fec(*(uint **)(param_1 + 0x24),(uint *)&DAT_00440000);
  return in_ZF;
}


/* ==== 00440004 FUN_00440004 ==== */

undefined1 FUN_00440004(int param_1,char param_2)

{
  char cVar1;
  int j;
  int k;
  int i_val;
  int iVar2;
  undefined1 local_18;
  int local_14;
  
  local_18 = 0;
  if ((param_2 != '\0') ||
     (((*(byte *)(param_1 + 0x20) & 0x10) == 0 && (cVar1 = FUN_0044017c(param_1), cVar1 != '\0'))))
  {
    local_14 = 0;
    iVar2 = 0;
    i_val = 0;
    j = FUN_0043f018(param_1);
    k = local_14;
    if (-1 < j + -1) {
      do {
        k = FUN_0043f028(param_1,i_val);
        if (*(char *)(k + 0x32) != '\0') {
          k = FUN_0043f028(param_1,i_val);
          cVar1 = FUN_0043ffe0(k);
          k = i_val;
          if (cVar1 == '\0') break;
          k = FUN_0043f028(param_1,i_val);
          *(undefined1 *)(k + 0x32) = 0;
          local_18 = 1;
        }
        i_val = i_val + 1;
        j = j + -1;
        k = local_14;
      } while (j != 0);
    }
    local_14 = k;
    i_val = FUN_0043f018(param_1);
    if (local_14 <= i_val + -1) {
      k = ((i_val + -1) - local_14) + 1;
      i_val = local_14;
      do {
        j = FUN_0043f028(param_1,i_val);
        cVar1 = FUN_0043ffe0(j);
        if (cVar1 == '\0') {
          j = FUN_0043f028(param_1,i_val);
          if (*(char *)(j + 0x32) != '\0') {
            if (iVar2 != 0) {
              *(undefined1 *)(iVar2 + 0x32) = 1;
              local_18 = 1;
            }
            iVar2 = 0;
            local_14 = i_val;
          }
        }
        else {
          if (iVar2 != 0) {
            *(undefined1 *)(iVar2 + 0x32) = 0;
            local_18 = 1;
          }
          iVar2 = FUN_0043f028(param_1,i_val);
        }
        i_val = i_val + 1;
        k = k + -1;
      } while (k != 0);
    }
    i_val = FUN_0043f018(param_1);
    i_val = i_val + -1;
    if (local_14 - i_val == 0 || local_14 < i_val) {
      k = (local_14 - i_val) + -1;
      do {
        j = FUN_0043f028(param_1,i_val);
        if (*(char *)(j + 0x32) != '\0') {
          j = FUN_0043f028(param_1,i_val);
          cVar1 = FUN_0043ffe0(j);
          if (cVar1 == '\0') {
            return local_18;
          }
          j = FUN_0043f028(param_1,i_val);
          *(undefined1 *)(j + 0x32) = 0;
          local_18 = 1;
        }
        i_val = i_val + -1;
        k = k + 1;
      } while (k != 0);
    }
  }
  return local_18;
}


/* ==== 00440140 TMenuItem.SetAutoLineReduction ==== */

void TMenuItem_SetAutoLineReduction(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xc]) {
    *(char *)(param_1 + 0xc) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 00440150 FUN_00440150 ==== */

undefined1 FUN_00440150(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2f);
  if ((*(byte *)(param_1 + 0x2f) == 2) && (*(int *)(param_1 + 0x58) != 0)) {
    bVar1 = FUN_00440150(*(int *)(param_1 + 0x58));
    uVar2 = (uint)(byte)(&DAT_004aa850)[bVar1 & 0x7f];
  }
  return (&DAT_004aa854)[uVar2 & 0x7f];
}


/* ==== 0044017c FUN_0044017c ==== */

undefined1 FUN_0044017c(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x30) == 2) && (*(int *)(param_1 + 0x58) != 0)) {
    bVar1 = FUN_0044017c(*(int *)(param_1 + 0x58));
    uVar2 = (uint)(byte)(&DAT_004aa850)[bVar1 & 0x7f];
  }
  return (&DAT_004aa854)[uVar2 & 0x7f];
}


/* ==== 004401a8 TMenu.virtual_02c ==== */

int * TMenu_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  piVar1 = TMenuItem_virtual_02c((int *)&PTR_TMenuItem_virtual_000_0043bd08,'\x01',param_1);
  param_1[10] = (int)piVar1;
  piVar1[0x1f] = (int)param_1;
  piVar1[0x1e] = *(int *)(*param_1 + 0x38);
  piVar1[0x19] = (int)param_1;
  iVar2 = FUN_00402f6c((int *)&DAT_0043a068,'\x01',extraout_ECX_00);
  param_1[0xe] = iVar2;
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_00440a08;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  TComponent_virtual_02c(param_1,'\0',param_3);
  iVar2 = param_1[10];
  *(undefined1 *)(iVar2 + 0x2f) = 0;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  FUN_00440e1c(param_1);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


/* ==== 00440240 TMenu.Destroy ==== */

void TMenu_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[10]);
  FUN_00402f9c((int *)piVar1[0xe]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00440278 TMenu.dynamic_fffd ==== */

void TMenu_dynamic_fffd(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x28),param_2,param_3);
  return;
}


/* ==== 00440294 TMenu.virtual_034 ==== */

void TMenu_virtual_034(int param_1)

{
  FUN_0043d6c8(*(int *)(param_1 + 0x28));
  return;
}


/* ==== 004402a0 TMenu.dynamic_fffa ==== */

void TMenu_dynamic_fffa(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00403178(*(int **)(param_1 + 0x28),param_2,param_3);
  return;
}


/* ==== 004402b4 FUN_004402b4 ==== */

undefined4 FUN_004402b4(int *param_1)

{
  FUN_0043cce4(FUN_004402b4,param_1[0x17],(int)param_1);
  FUN_0043f3cc(param_1,param_1,param_1,'\x01');
  return 0;
}


/* ==== 004402dc FUN_004402dc ==== */

void FUN_004402dc(int param_1)

{
  FUN_0043cce4(FUN_004402b4,*(int *)(*(int *)(param_1 + 0x28) + 0x5c),*(int *)(param_1 + 0x28));
  return;
}


/* ==== 004402f4 FUN_004402f4 ==== */

undefined1 FUN_004402f4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int i_val;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int j;
  int iVar3;
  undefined1 local_5;
  
  local_5 = 0;
  if ((((*(char *)(param_4 + -1) == '\0') &&
       (*(uint *)(param_4 + -8) == (uint)*(ushort *)(param_1 + 0x44))) ||
      ((*(char *)(param_4 + -1) == '\x01' && (*(int *)(param_4 + -8) == *(int *)(param_1 + 0x28)))))
     || ((*(char *)(param_4 + -1) == '\x02' &&
         (*(uint *)(param_4 + -8) == (uint)*(ushort *)(param_1 + 0x54))))) {
    *(int *)(param_4 + -0xc) = param_1;
    local_5 = 1;
  }
  else {
    i_val = FUN_0043f018(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar3 = param_4;
        iVar2 = FUN_0043f028(param_1,j);
        cVar1 = FUN_004402f4(iVar2,extraout_EDX,extraout_ECX,iVar3);
        if (cVar1 != '\0') {
          return 1;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  return local_5;
}


/* ==== 0044038c FUN_0044038c ==== */

undefined4 FUN_0044038c(int param_1)

{
  FUN_0043cce4(FUN_004402f4,*(int *)(*(int *)(param_1 + 0x28) + 0x5c),*(int *)(param_1 + 0x28));
  return 0;
}


/* ==== 004403bc FUN_004403bc ==== */

undefined4 FUN_004403bc(int *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((param_3 == '\0') &&
      (uVar1 = FUN_00403114(param_1,(int)&PTR_TPersistent_virtual_000_0043c4d0), (char)uVar1 != '\0'
      )) && (iVar2 = (**(code **)(*param_1 + 0x34))(), param_2 == iVar2)) {
    uVar3 = TPopupMenu_GetHelpContext((int)param_1);
  }
  else {
    for (iVar2 = FUN_0044038c((int)param_1); (iVar2 != 0 && (*(int *)(iVar2 + 0x48) == 0));
        iVar2 = *(int *)(iVar2 + 0x58)) {
    }
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x48);
    }
  }
  return uVar3;
}


/* ==== 0044042c FUN_0044042c ==== */

bool FUN_0044042c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0044038c(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))();
  }
  return piVar1 != (int *)0x0;
}


/* ==== 00440448 FUN_00440448 ==== */

undefined4 FUN_00440448(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_0044038c((int)param_1);
  if (piVar2 != (int *)0x0) {
    if ((*(byte *)(piVar2 + 8) & 0x10) == 0) {
      FUN_0043f4f0((int)piVar2);
    }
    (**(code **)(*piVar2 + 0x40))();
    cVar1 = FUN_0043fb34((int)piVar2,'\0');
    if ((cVar1 != '\0') || (cVar1 = FUN_00440004((int)piVar2,'\0'), cVar1 != '\0')) {
      FUN_0043d5e4(piVar2);
    }
    return 1;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    return 0;
  }
  uVar3 = FUN_00403114(param_1,(int)&PTR_TPersistent_virtual_000_0043c4d0);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  FUN_0043f4f0(param_1[10]);
  return 0;
}


/* ==== 004404bc FUN_004404bc ==== */

undefined4 FUN_004404bc(int param_1)

{
  if ((*(char *)(param_1 + 0x34) == '\0') && (*(int *)(param_1 + 0x3c) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 004404d0 thunk_FUN_004404d6 ==== */

void thunk_FUN_004404d6(int param_1,int param_2)

{
  for (; (0 < param_2 && (param_1 != 0)); param_1 = *(int *)(param_1 + 0x58)) {
    param_2 = param_2 + -1;
  }
  return;
}


/* ==== 004404d6 FUN_004404d6 ==== */

void FUN_004404d6(int param_1,int param_2)

{
  for (; (0 < param_2 && (param_1 != 0)); param_1 = *(int *)(param_1 + 0x58)) {
    param_2 = param_2 + -1;
  }
  return;
}


/* ==== 004404e0 FUN_004404e0 ==== */

char FUN_004404e0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_24;
  undefined1 *puStackY_20;
  int local_c;
  char local_5;
  
  local_5 = '\x01';
  local_c = *(int *)(*param_1 + 0x58);
  if (local_c != 0) {
    puStackY_20 = (undefined1 *)0x44050e;
    local_5 = FUN_004404e0(&local_c,param_2 + 1,param_3,param_4);
  }
  if ((local_5 != '\0') && (local_5 != '\x03')) {
    if (local_5 == '\x02') {
      if ((*(int *)(param_4 + -4) == 0) ||
         (*(short *)(*(int *)(param_4 + -4) + 0x54) != *(short *)(param_4 + -6))) {
        uVar1 = FUN_0044038c(*(int *)(param_4 + -0xc));
        *(undefined4 *)(param_4 + -4) = uVar1;
        if (*(int *)(param_4 + -4) == 0) {
          return '\x03';
        }
      }
      iVar2 = thunk_FUN_004404d6(*(int *)(param_4 + -4),param_2);
      *param_1 = iVar2;
      if (*param_1 == 0) {
        return local_5;
      }
      if (*(int *)(*param_1 + 0x58) != local_c) {
        return local_5;
      }
      if (param_2 == 0) {
        local_5 = '\x01';
      }
    }
    if (*(char *)(*param_1 + 0x2d) == '\0') {
      local_5 = '\0';
    }
    else {
      puStackY_20 = &LAB_00440605;
      uStackY_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_24;
      if ((*(byte *)(*(int *)(param_4 + -0xc) + 0x20) & 0x10) == 0) {
        FUN_0043f4f0(*param_1);
      }
      (**(code **)(*(int *)*param_1 + 0x40))();
      if ((*(int *)(param_4 + -4) == 0) ||
         ((*param_1 != *(int *)(param_4 + -4) &&
          (*(short *)(*(int *)(param_4 + -4) + 0x54) != *(short *)(param_4 + -6))))) {
        local_5 = '\x02';
      }
      *in_FS_OFFSET = uStackY_24;
    }
  }
  return local_5;
}


/* ==== 00440634 TMenu.dynamic_fff0 ==== */

undefined4 TMenu_dynamic_fff0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int local_8;
  
  puStack_20 = (undefined1 *)0x440650;
  GetKeyState(0x10);
  puStack_20 = (undefined1 *)0x440662;
  GetKeyState(0x11);
  local_8 = FUN_0044038c(param_1);
  if (local_8 == 0) {
    return 0;
  }
  FUN_0042014c(DAT_004ac7c8);
  puStack_20 = &LAB_004406d6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004404e0(&local_8,0,extraout_ECX,(int)&stack0xfffffffc);
  *in_FS_OFFSET = uStack_24;
  puStack_20 = (undefined1 *)0x4406d5;
  uVar1 = FUN_00420144(DAT_004ac7c8);
  return uVar1;
}


/* ==== 004406f8 FUN_004406f8 ==== */

void FUN_004406f8(int *param_1)

{
  HMENU hmenu;
  BOOL BVar1;
  undefined4 uVar2;
  uint uVar3;
  tagMENUITEMINFOA menuiteminfo;
  CHAR aCStack_58 [80];
  
  if ((PTR_DAT_004aba14[9] != '\0') && (param_1[0xb] != 0)) {
    hmenu = (HMENU)(**(code **)(*param_1 + 0x34))();
    menuiteminfo.cbSize = 0x2c;
    menuiteminfo.fMask = 0x10;
    menuiteminfo.dwTypeData = aCStack_58;
    menuiteminfo.cch = 0x50;
    BVar1 = GetMenuItemInfoA(hmenu,0,-1,&menuiteminfo);
    if (BVar1 != 0) {
      uVar2 = FUN_00440a7c((int)param_1);
      if ((bool)(char)uVar2 != ((menuiteminfo.fType & 0x6000) != 0)) {
        uVar3 = FUN_00440a7c((int)param_1);
        menuiteminfo.fType = (uVar3 & 0x7f) * 0x6000 | menuiteminfo.fType & 0xffff9fff;
        menuiteminfo.fMask = 0x10;
        BVar1 = SetMenuItemInfoA(hmenu,0,-1,&menuiteminfo);
        if (BVar1 != 0) {
          DrawMenuBar((HWND)param_1[0xb]);
        }
      }
    }
  }
  return;
}


/* ==== 004407b4 FUN_004407b4 ==== */

void FUN_004407b4(HMENU menu,undefined4 param_2,undefined4 param_3,int param_4)

{
  int menu_item_count;
  char *string;
  UINT UVar1;
  UINT uId;
  
  menu_item_count = GetMenuItemCount(menu);
  string = (char *)(param_4 + -0x200);
  uId = 0;
  while (((int)uId < menu_item_count && (string < (char *)(param_4 - 5U)))) {
    FUN_00440d50(*(int *)(param_4 + -0x204),menu,uId,0x400,(int)(param_4 - 5U) - (int)string,string)
    ;
    string = FUN_00408b3c(string);
    UVar1 = GetMenuState(menu,uId,0x400);
    if ((UVar1 & 2) != 0) {
      *string = '$';
      string = string + 1;
      *string = '\0';
    }
    if ((UVar1 & 0x40) != 0) {
      *string = '@';
      string = string + 1;
      *string = '\0';
    }
    if ((UVar1 & 1) != 0) {
      *string = '#';
      string = string + 1;
      *string = '\0';
    }
    *string = ';';
    string = string + 1;
    *string = '\0';
    uId = uId + 1;
  }
  return;
}


/* ==== 00440854 FUN_00440854 ==== */

undefined4 FUN_00440854(int *param_1)

{
  HMENU menu;
  char *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 *puVar3;
  char local_204 [512];
  
  puVar3 = &stack0xfffffffc;
  local_204[0] = '\0';
  if (param_1[0xb] != 0) {
    menu = (HMENU)(**(code **)(*param_1 + 0x34))();
    FUN_004407b4(menu,extraout_EDX,extraout_ECX,(int)puVar3);
  }
  if (param_1[0xc] != 0) {
    pcVar1 = FUN_004040a0((undefined *)param_1[0xc]);
    iVar2 = FUN_00408c2c(pcVar1,local_204);
    if (iVar2 == 0) {
      return 0;
    }
  }
  FUN_00403e8c(param_1 + 0xc,local_204,0x200);
  return 1;
}


/* ==== 004408d8 TMainMenu.SetOwnerDraw ==== */

void TMainMenu_SetOwnerDraw(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x34)) {
    *(char *)(param_1 + 0x34) = param_2;
    FUN_004402dc(param_1);
  }
  return;
}


/* ==== 004408e8 FUN_004408e8 ==== */

void FUN_004408e8(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_a;
  char local_9;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  if (PTR_DAT_004aba14[9] != '\0') {
    local_9 = (char)param_1[9];
    local_a = *(undefined1 *)((int)param_1 + 0x35);
    puStack_14 = &LAB_00440958;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    local_8 = param_1;
    if (local_9 == '\0') {
      puStack_10 = &stack0xfffffffc;
      TMainMenu_SetBiDiMode(param_1,'\x01');
    }
    else {
      TMainMenu_SetBiDiMode(param_1,'\0');
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x44095f;
    puStack_14 = (undefined1 *)0x44094e;
    TMainMenu_SetBiDiMode(local_8,local_9);
    *(undefined1 *)((int)local_8 + 0x35) = local_a;
    return;
  }
  return;
}


/* ==== 00440964 FUN_00440964 ==== */

void FUN_00440964(int *param_1,int param_2)

{
  param_1[0xb] = param_2;
  FUN_00440854(param_1);
  if ((PTR_DAT_004aba14[9] != '\0') && (param_2 != 0)) {
    if (*(char *)((int)param_1 + 0x35) == '\0') {
      FUN_004408e8(param_1);
    }
    else {
      FUN_00440e1c(param_1);
    }
  }
  return;
}


/* ==== 0044099c TMenu.virtual_030 ==== */

void TMenu_virtual_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,param_2,param_3);
  }
  return;
}


/* ==== 004409b4 TMenu.virtual_00c ==== */

void TMenu_virtual_00c(int *param_1)

{
  TComponent_virtual_00c((int)param_1);
  (**(code **)(*param_1 + 0x30))(param_1,0,0);
  return;
}


/* ==== 004409cc TMenu.virtual_038 ==== */

void TMenu_virtual_038(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if ((*(ushort *)(param_1 + 8) & 9) == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,param_3,param_4);
  }
  return;
}


/* ==== 00440a14 TMainMenu.SetImages ==== */

void TMainMenu_SetImages(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_0043b2a0(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0x3c) = param_2;
  if (param_2 != 0) {
    FUN_0043b2e4(param_2,*(int *)(param_1 + 0x38));
    FUN_0041564c(*(int *)(param_1 + 0x3c),param_1,extraout_ECX);
  }
  FUN_004402dc(param_1);
  return;
}


/* ==== 00440a50 TMenu.virtual_010 ==== */

void TMenu_virtual_010(int param_1,int param_2,char param_3)

{
  TComponent_virtual_010(param_1,param_2,param_3);
  if ((param_2 == *(int *)(param_1 + 0x3c)) && (param_3 == '\x01')) {
    TMainMenu_SetImages(param_1,0);
  }
  return;
}


/* ==== 00440a7c FUN_00440a7c ==== */

undefined4 FUN_00440a7c(int param_1)

{
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)(param_1 + 0x24) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 00440a94 FUN_00440a94 ==== */

undefined4 FUN_00440a94(HMENU menu,uint param_2,int pos,byte param_4,int param_5)

{
  UINT UVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 & 0x10) == 0) {
    UVar1 = GetMenuItemID(menu,pos);
    if (UVar1 != 0xffffffff) {
      iVar3 = FUN_0044038c(*(int *)(param_5 + -4));
    }
  }
  else {
    GetSubMenu(menu,pos);
    iVar3 = FUN_0044038c(*(int *)(param_5 + -4));
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004447f4((uint)param_4,*(int *)(iVar3 + 0x24));
  }
  return uVar2;
}


/* ==== 00440af0 FUN_00440af0 ==== */

void FUN_00440af0(HMENU menu,ushort param_2,int pos,undefined1 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_14;
  undefined *local_10;
  undefined *local_c;
  int iStack_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  local_14 = 0;
  iStack_8 = (uint)param_2 << 0x10;
  puStack_24 = &LAB_00440bc5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_2 & 0x10) == 0) {
    iVar1 = FUN_0044038c(*(int *)(param_5 + -4));
    uVar3 = extraout_EDX_00;
    if ((iVar1 != 0) && (iVar2 = FUN_0043f018(iVar1), uVar3 = extraout_EDX_01, pos < iVar2)) {
      iVar1 = FUN_0043f028(iVar1,pos);
      uVar3 = extraout_EDX_02;
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    GetSubMenu(menu,pos);
    iVar1 = FUN_0044038c(*(int *)(param_5 + -4));
    uVar3 = extraout_EDX;
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    FUN_00403e04((int *)&local_c,CONCAT31((int3)((uint)uVar3 >> 8),param_4));
    puVar4 = local_c;
    FUN_00403e04((int *)&local_10,
                 CONCAT31((int3)((uint)*(undefined1 **)(iVar1 + 0x24) >> 8),
                          **(undefined1 **)(iVar1 + 0x24)));
    iVar2 = FUN_00408364(local_10,puVar4);
    if (iVar2 == 0) {
      FUN_00441a00(*(int *)(iVar1 + 0x24),&local_14);
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00440bcc;
  puStack_24 = (undefined1 *)0x440bc4;
  FUN_00403c80(&local_14,3);
  return;
}


/* ==== 00440bd8 FUN_00440bd8 ==== */

void FUN_00440bd8(undefined4 param_1,int param_2)

{
  UINT UVar1;
  char cVar2;
  int menu_item_count;
  UINT UVar3;
  undefined4 uVar4;
  UINT UVar5;
  int i_val;
  UINT local_18;
  UINT local_14;
  UINT local_10;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_10 = 0xffffffff;
  local_14 = 0xffffffff;
  local_18 = 0xffffffff;
  menu_item_count = GetMenuItemCount(*(HMENU *)(param_2 + 8));
  if (-1 < menu_item_count + -1) {
    UVar5 = 0;
    i_val = menu_item_count;
    do {
      UVar3 = GetMenuState(*(HMENU *)(param_2 + 8),UVar5,0x400);
      uVar4 = FUN_00440a94(*(HMENU *)(param_2 + 8),UVar3,UVar5,*(byte *)(param_2 + 4),
                           (int)&stack0xfffffffc);
      UVar1 = local_14;
      if ((char)uVar4 != '\0') {
        if ((UVar3 & 2) == 0) {
          if ((int)local_10 < 0) {
            *(undefined4 *)(param_2 + 0xc) = 2;
            local_10 = UVar5;
          }
          else {
            *(undefined4 *)(param_2 + 0xc) = 3;
          }
          UVar1 = UVar5;
          if (((UVar3 & 0x80) == 0) && (UVar1 = local_14, -1 < (int)local_14)) {
            local_18 = UVar5;
          }
        }
        else if ((int)local_10 < 0) {
          local_10 = 0xfffffffe;
        }
      }
      local_14 = UVar1;
      UVar5 = UVar5 + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if ((int)local_10 < -1) {
    *(undefined4 *)(param_2 + 0xc) = 0x10000;
  }
  else {
    if (((int)local_10 < 0) && (-1 < menu_item_count + -1)) {
      UVar5 = 0;
      i_val = menu_item_count;
      do {
        UVar3 = GetMenuState(*(HMENU *)(param_2 + 8),UVar5,0x400);
        cVar2 = FUN_00440af0(*(HMENU *)(param_2 + 8),(ushort)UVar3,UVar5,
                             *(undefined1 *)(param_2 + 4),(int)&stack0xfffffffc);
        UVar1 = local_14;
        if (cVar2 != '\0') {
          if ((UVar3 & 2) != 0) {
            *(undefined4 *)(param_2 + 0xc) = 0x10000;
            return;
          }
          if ((int)local_10 < 0) {
            *(undefined4 *)(param_2 + 0xc) = 2;
            local_10 = UVar5;
          }
          else {
            *(undefined4 *)(param_2 + 0xc) = 3;
          }
          UVar1 = UVar5;
          if (((UVar3 & 0x80) == 0) && (UVar1 = local_14, -1 < (int)local_14)) {
            local_18 = UVar5;
          }
        }
        local_14 = UVar1;
        UVar5 = UVar5 + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    if (*(int *)(param_2 + 0xc) == 2) {
      *(UINT *)(param_2 + 0xc) = local_10 | 0x20000;
    }
    else if (*(int *)(param_2 + 0xc) == 3) {
      if ((int)local_18 < 0) {
        local_18 = local_10;
      }
      *(UINT *)(param_2 + 0xc) = local_18 | 0x30000;
    }
  }
  return;
}


/* ==== 00440d50 FUN_00440d50 ==== */

int FUN_00440d50(int param_1,HMENU menu,UINT param_3,UINT flags_val,int max,char *string)

{
  undefined4 uVar1;
  UINT UVar2;
  int iVar3;
  undefined4 local_8;
  
  uVar1 = FUN_004404bc(param_1);
  if ((char)uVar1 == '\0') {
    iVar3 = GetMenuStringA(menu,param_3,string,max,flags_val);
  }
  else {
    local_8 = 0;
    UVar2 = GetMenuState(menu,param_3,flags_val);
    if ((UVar2 & 0x10) == 0) {
      UVar2 = GetMenuItemID(menu,param_3);
      if (UVar2 != 0xffffffff) {
        local_8 = FUN_0044038c(param_1);
      }
    }
    else {
      GetSubMenu(menu,param_3);
      local_8 = FUN_0044038c(param_1);
    }
    if (local_8 == 0) {
      iVar3 = 0;
    }
    else {
      *string = '\0';
      FUN_00408c0c(string,*(undefined **)(local_8 + 0x24),max);
      iVar3 = FUN_00408b24(string);
    }
  }
  return iVar3;
}


/* ==== 00440df8 TMainMenu.SetBiDiMode ==== */

void TMainMenu_SetBiDiMode(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[9]) {
    *(char *)(param_1 + 9) = param_2;
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    FUN_004406f8(param_1);
  }
  return;
}


/* ==== 00440e0c TMainMenu.SetParentBiDiMode ==== */

void TMainMenu_SetParentBiDiMode(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x35)) {
    *(char *)((int)param_1 + 0x35) = param_2;
    FUN_00440e1c(param_1);
  }
  return;
}


/* ==== 00440e1c FUN_00440e1c ==== */

void FUN_00440e1c(int *param_1)

{
  HANDLE pvVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    pvVar1 = FUN_0042b94c((HWND)param_1[0xb]);
    if (pvVar1 != (HANDLE)0x0) {
      TMainMenu_SetBiDiMode(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}


/* ==== 00440e44 FUN_00440e44 ==== */

void FUN_00440e44(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    iVar1 = FUN_0040312c(param_2,(int)&PTR_TControl_virtual_000_0042a694);
    TMainMenu_SetBiDiMode(param_1,*(char *)(iVar1 + 0x4f));
    *(undefined1 *)((int)param_1 + 0x35) = 1;
  }
  return;
}


/* ==== 00440e70 TMainMenu.GetAutoHotkeys ==== */

undefined1 TMainMenu_GetAutoHotkeys(int param_1)

{
  return (&DAT_004aa84c)[*(byte *)(*(int *)(param_1 + 0x28) + 0x2f)];
}


/* ==== 00440e80 TMainMenu.SetAutoHotkeys ==== */

void TMainMenu_SetAutoHotkeys(int param_1,uint param_2)

{
  *(undefined *)(*(int *)(param_1 + 0x28) + 0x2f) = (&DAT_004aa848)[param_2 & 0x7f];
  return;
}


/* ==== 00440e90 TMainMenu.GetAutoLineReduction ==== */

undefined1 TMainMenu_GetAutoLineReduction(int param_1)

{
  return (&DAT_004aa84c)[*(byte *)(*(int *)(param_1 + 0x28) + 0x30)];
}


/* ==== 00440ea0 TMainMenu.SetAutoLineReduction ==== */

void TMainMenu_SetAutoLineReduction(int param_1,uint param_2)

{
  *(undefined *)(*(int *)(param_1 + 0x28) + 0x30) = (&DAT_004aa848)[param_2 & 0x7f];
  return;
}


/* ==== 00440eb0 TMainMenu.SetAutoMerge ==== */

void TMainMenu_SetAutoMerge(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4c)) {
    *(char *)(param_1 + 0x4c) = param_2;
    if (*(HWND *)(param_1 + 0x2c) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x2c),0xb015,0,0);
    }
  }
  return;
}


/* ==== 00440ed0 TMainMenu.virtual_038 ==== */

void TMainMenu_virtual_038(int *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (param_1[0xb] != 0) {
    uVar1 = FUN_00440854(param_1);
    if (param_3 == 0) {
      SendMessageA((HWND)param_1[0xb],0xb015,0,0);
    }
    if ((char)uVar1 != '\0') {
      DrawMenuBar((HWND)param_1[0xb]);
    }
  }
  TMenu_virtual_038(param_1,param_2,param_3,param_4);
  return;
}


/* ==== 00440f28 FUN_00440f28 ==== */

void FUN_00440f28(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0043d584(*(int **)(param_1 + 0x28),*(int *)(param_2 + 0x28));
    return;
  }
  FUN_0043d584(*(int **)(param_1 + 0x28),0);
  return;
}


/* ==== 00440f44 FUN_00440f44 ==== */

void FUN_00440f44(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(*(int *)(param_1 + 0x28) + 0x5c) == *(int *)(param_2 + 0x28))) {
    FUN_0043d584(*(int **)(param_1 + 0x28),0);
  }
  return;
}


/* ==== 00440f60 FUN_00440f60 ==== */

void FUN_00440f60(int *param_1)

{
  (**(code **)(*param_1 + 0x38))(param_1,0,0,0);
  if ((HWND)param_1[0xb] != (HWND)0x0) {
    SendMessageA((HWND)param_1[0xb],0xb015,0,0);
  }
  return;
}


/* ==== 00440f8c TMainMenu.virtual_034 ==== */

int TMainMenu_virtual_034(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    return *(int *)(param_1 + 0x48);
  }
  iVar1 = TMenu_virtual_034(param_1);
  return iVar1;
}


/* ==== 00440f9c FUN_00440f9c ==== */

undefined4 FUN_00440f9c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int i_val;
  
  if (-1 < *(int *)(param_4 + -4)) {
    i_val = *(int *)(param_4 + -4) + 1;
    puVar2 = *(uint **)(param_4 + -8);
    do {
      if ((uint)*(byte *)(param_1 + 0x33) == *puVar2) {
        piVar1 = (int *)(*(int *)(param_4 + 0xc) + (uint)*(byte *)(param_1 + 0x33) * 4);
        *piVar1 = *piVar1 + 1;
        FUN_0043d21c(param_1,*(HMENU *)(param_4 + -0xc),*(byte *)(param_4 + -0xd));
      }
      puVar2 = puVar2 + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 00440fe8 FUN_00440fe8 ==== */

void FUN_00440fe8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
                 int param_6)

{
  int i_val;
  
  for (; -1 < param_6; param_6 = param_6 + -1) {
  }
  FUN_00440a7c(param_1);
  if (-1 < param_4) {
    i_val = param_4 + 1;
    do {
      *param_5 = 0;
      param_5 = param_5 + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_0043cce4(FUN_00440f9c,*(int *)(*(int *)(param_1 + 0x28) + 0x5c),*(int *)(param_1 + 0x28));
  return;
}


/* ==== 0044104c FUN_0044104c ==== */

void FUN_0044104c(int *param_1,int param_2)

{
  param_1[0x12] = param_2;
  FUN_00440f60(param_1);
  return;
}


/* ==== 004410a4 TPopupList.virtual_010 ==== */

void TPopupList_virtual_010(undefined4 *param_1,UINT *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  ULONG_PTR UVar5;
  UINT UVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int i_val;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  uint *local_34;
  int *local_30;
  UINT local_2c;
  UINT local_28;
  UINT local_24;
  HDC hdc_val;
  int saved_dc;
  int *local_18;
  char local_11;
  int *local_10;
  HMENU local_c;
  undefined4 *local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_34 = (uint *)0x0;
  puStack_48 = &LAB_004415d1;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  UVar6 = *param_2;
  local_8 = param_1;
  if ((int)UVar6 < 0x112) {
    if (UVar6 == 0x111) {
      i_val = param_1[2];
      puStack_44 = &stack0xfffffffc;
      if (-1 < i_val + -1) {
        j = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          iVar4 = FUN_004102b0(local_8,j);
          bVar1 = FUN_0044042c(iVar4);
          if (bVar1) goto LAB_004415bb;
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    }
    else if (UVar6 == 0x2b) {
      local_28 = param_2[2];
      i_val = param_1[2];
      puStack_44 = &stack0xfffffffc;
      if (-1 < i_val + -1) {
        j = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          iVar4 = FUN_004102b0(local_8,j);
          local_10 = (int *)FUN_0044038c(iVar4);
          if (local_10 != (int *)0x0) {
            local_18 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',extraout_ECX
                                   );
            *in_FS_OFFSET = &stack0xffffffa8;
            saved_dc = SaveDC(*(HDC *)(local_28 + 0x18));
            uVar2 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xffffff9c;
            FUN_00419558(local_18,*(int *)(local_28 + 0x18));
            TCanvas_SetFont((int)local_18);
            FUN_00441874(local_10,(int)local_18,(undefined4 *)(local_28 + 0x1c),
                         CONCAT22((short)(local_28 >> 0x10),*(undefined2 *)(local_28 + 0x10)));
            *in_FS_OFFSET = uVar2;
            FUN_00419558(local_18,0);
            RestoreDC(*(HDC *)(local_28 + 0x18),saved_dc);
            return;
          }
          j = j + 1;
          i_val = i_val + -1;
          local_10 = (int *)0x0;
        } while (i_val != 0);
        local_10 = (int *)0x0;
      }
    }
    else if (UVar6 == 0x2c) {
      local_2c = param_2[2];
      i_val = param_1[2];
      puStack_44 = &stack0xfffffffc;
      if (-1 < i_val + -1) {
        j = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          iVar4 = FUN_004102b0(local_8,j);
          local_10 = (int *)FUN_0044038c(iVar4);
          if (local_10 != (int *)0x0) {
            hdc_val = GetWindowDC((HWND)local_8[4]);
            *in_FS_OFFSET = &stack0xffffffa8;
            local_18 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00429cb8,'\x01',
                                    extraout_ECX_00);
            *in_FS_OFFSET = &stack0xffffff9c;
            saved_dc = SaveDC(hdc_val);
            *in_FS_OFFSET = &stack0xffffff90;
            FUN_00419558(local_18,(int)hdc_val);
            TCanvas_SetFont((int)local_18);
            piVar3 = (int *)(local_2c + 0x10);
            FUN_0043ec6c(local_10,local_18,(int *)(local_2c + 0xc),piVar3);
            *in_FS_OFFSET = piVar3;
            FUN_00419558(local_18,0);
            RestoreDC(hdc_val,saved_dc);
            return;
          }
          j = j + 1;
          i_val = i_val + -1;
          local_10 = (int *)0x0;
        } while (i_val != 0);
        local_10 = (int *)0x0;
      }
    }
    else if (UVar6 == 0x53) {
      local_24 = param_2[2];
      i_val = param_1[2];
      puStack_44 = &stack0xfffffffc;
      if (-1 < i_val + -1) {
        j = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          piVar3 = (int *)FUN_004102b0(local_8,j);
          iVar4 = (**(code **)(*piVar3 + 0x34))();
          if (iVar4 == *(int *)(local_24 + 0xc)) {
            iVar4 = FUN_004102b0(local_8,j);
            local_10 = *(int **)(iVar4 + 0x28);
          }
          else {
            iVar4 = FUN_004102b0(local_8,j);
            local_10 = (int *)FUN_0044038c(iVar4);
          }
          if (local_10 != (int *)0x0) {
            piVar3 = (int *)FUN_004102b0(local_8,j);
            UVar5 = FUN_004403bc(piVar3,*(int *)(local_24 + 8),'\x01');
            if (UVar5 == 0) {
              piVar3 = (int *)FUN_004102b0(local_8,j);
              UVar5 = FUN_004403bc(piVar3,*(int *)(local_24 + 0xc),'\0');
            }
            i_val = *(int *)(*(int *)PTR_DAT_004ab9f8 + 0x60);
            if (i_val != 0) {
              if (UVar5 == 0) {
                UVar5 = *(ULONG_PTR *)(i_val + 0x150);
              }
              if ((*(byte *)(i_val + 0x210) & 8) == 0) {
                FUN_0044d7f0(*(int *)PTR_DAT_004ab8ac,UVar5);
              }
              else {
                FUN_0044d7fc(*(int *)PTR_DAT_004ab8ac,8,UVar5);
              }
            }
            goto LAB_004415bb;
          }
          j = j + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    }
  }
  else if (UVar6 == 0x117) {
    i_val = param_1[2];
    puStack_44 = &stack0xfffffffc;
    if (-1 < i_val + -1) {
      j = 0;
      puStack_44 = &stack0xfffffffc;
      do {
        piVar3 = (int *)FUN_004102b0(local_8,j);
        uVar2 = FUN_00440448(piVar3);
        if ((char)uVar2 != '\0') goto LAB_004415bb;
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  else if (UVar6 == 0x11f) {
    local_11 = (*(byte *)((int)param_2 + 6) & 0x10) != 0;
    i_val = param_1[2];
    puStack_44 = &stack0xfffffffc;
    if (-1 < i_val + -1) {
      j = 0;
      puStack_44 = &stack0xfffffffc;
      piVar3 = local_10;
      do {
        local_10 = piVar3;
        if (local_11 == '\x01') {
          if ((HMENU)param_2[2] == (HMENU)0x0) {
            local_c = (HMENU)0xffffffff;
          }
          else {
            local_c = GetSubMenu((HMENU)param_2[2],(uint)(ushort)param_2[1]);
          }
        }
        else {
          local_c = (HMENU)(uint)(ushort)param_2[1];
        }
        iVar4 = FUN_004102b0(local_8,j);
        local_10 = (int *)FUN_0044038c(iVar4);
        if (local_10 != (int *)0x0) {
          FUN_0042bb90(*(undefined4 **)((int)local_10 + 0x4c),(int *)&local_34);
          FUN_0044dae8(*(int **)PTR_DAT_004ab8ac,local_34);
          goto LAB_004415bb;
        }
        j = j + 1;
        i_val = i_val + -1;
        piVar3 = (int *)0;
      } while (i_val != 0);
    }
    FUN_0044dae8(*(int **)PTR_DAT_004ab8ac,(uint *)0x0);
  }
  else {
    puStack_44 = &stack0xfffffffc;
    if ((UVar6 == 0x120) && (i_val = param_1[2], puStack_44 = &stack0xfffffffc, -1 < i_val + -1)) {
      j = 0;
      puStack_44 = &stack0xfffffffc;
      do {
        local_30 = (int *)FUN_004102b0(local_8,j);
        UVar6 = (**(code **)(*local_30 + 0x34))();
        if ((UVar6 == param_2[2]) || (iVar4 = FUN_0044038c((int)local_30), iVar4 != 0)) {
          FUN_00440bd8(local_30,(int)param_2);
          goto LAB_004415bb;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  UVar6 = DefWindowProcA((HWND)local_8[4],*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar6;
LAB_004415bb:
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_004415d8;
  puStack_48 = (undefined1 *)0x4415d0;
  FUN_00403c5c((int *)&local_34);
  return;
}


/* ==== 004415e0 FUN_004415e0 ==== */

void FUN_004415e0(int *param_1,int param_2)

{
  HWND pHVar1;
  
  if (param_1[2] == 0) {
    pHVar1 = FUN_0044463c();
    param_1[4] = (int)pHVar1;
  }
  FUN_00410104(param_1,param_2);
  return;
}


/* ==== 00441608 FUN_00441608 ==== */

void FUN_00441608(int *param_1,int param_2)

{
  FUN_00410448(param_1,param_2);
  if (param_1[2] == 0) {
    FUN_004446f0((HWND)param_1[4]);
  }
  return;
}


/* ==== 00441624 TPopupMenu.virtual_02c ==== */

int * TPopupMenu_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TMenu_virtual_02c(param_1,'\0',param_3);
  param_1[0x12] = -1;
  param_1[0x13] = -1;
  iVar1 = param_1[10];
  *(int **)(iVar1 + 0x84) = param_1;
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(*param_1 + 0x3c);
  param_1[0xb] = *(int *)(*(int *)PTR_DAT_004ab8ac + 0x24);
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  FUN_004415e0(DAT_004ac7c4,(int)param_1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00441698 TPopupMenu.Destroy ==== */

void TPopupMenu_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00441608(DAT_004ac7c4,(int)piVar1);
  TMenu_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 004416cc TPopupMenu.virtual_03c ==== */

void TPopupMenu_virtual_03c(int param_1)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100));
  }
  return;
}


/* ==== 004416e0 TPopupMenu.GetHelpContext ==== */

undefined4 TPopupMenu_GetHelpContext(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48);
}


/* ==== 004416e8 TPopupMenu.SetHelpContext ==== */

void TPopupMenu_SetHelpContext(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48) = param_2;
  return;
}


/* ==== 004416f0 FUN_004416f0 ==== */

void FUN_004416f0(int *param_1)

{
  HANDLE pvVar1;
  
  if ((PTR_DAT_004aba14[9] != '\0') && (*(char *)((int)param_1 + 0x35) != '\0')) {
    pvVar1 = FUN_0043c82c((POINT *)(param_1 + 0x12));
    if (pvVar1 == (HANDLE)0x0) {
      TMainMenu_SetBiDiMode(param_1,*(char *)(*(int *)PTR_DAT_004ab8ac + 0x28));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
    else {
      TMainMenu_SetBiDiMode(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}


/* ==== 00441738 FUN_00441738 ==== */

uint FUN_00441738(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  undefined4 extraout_EDX;
  
  uVar2 = 0;
  if (PTR_DAT_004aba14[9] != '\0') {
    if (*(char *)(param_1 + 0x35) == '\0') {
      uVar2 = (uint)(*(char *)(param_1 + 0x24) == '\x01');
    }
    else {
      piVar1 = FUN_0043c82c((POINT *)(param_1 + 0x48));
      if (piVar1 == (int *)0x0) {
        uVar2 = FUN_0044c4ec(*(int *)PTR_DAT_004ab8ac);
      }
      else {
        uVar2 = FUN_00403178(piVar1,extraout_EDX,extraout_ECX);
      }
    }
  }
  return uVar2;
}


/* ==== 00441784 TPopupMenu.virtual_040 ==== */

void TPopupMenu_virtual_040(int *param_1,int x_val,int y_val)

{
  uint flags_val;
  HMENU hMenu;
  int nReserved;
  HWND hWnd;
  RECT *prcRect;
  int local_18;
  int local_14;
  
  FUN_0040f7d0(x_val,y_val,&local_18);
  param_1[0x12] = local_18;
  param_1[0x13] = local_14;
  FUN_004416f0(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,param_1);
  FUN_0043fb34(param_1[10],'\0');
  FUN_00440004(param_1[10],'\0');
  FUN_0043d5e4((int *)param_1[10]);
  FUN_004408e8(param_1);
  flags_val = FUN_00441738((int)param_1);
  flags_val = (uint)(*(ushort *)
                      (&DAT_004aa920 + (uint)*(byte *)(param_1 + 0x14) * 2 + (flags_val & 0x7f) * 6)
                    | *(ushort *)(&DAT_004aa92c + (uint)*(byte *)(param_1 + 0x16) * 2)) |
              (uint)*(byte *)((int)param_1 + 0x59) << 10;
  prcRect = (RECT *)0x0;
  hWnd = *(HWND *)(DAT_004ac7c4 + 0x10);
  nReserved = 0;
  hMenu = (HMENU)FUN_0043d6c8(param_1[10]);
  TrackPopupMenu(hMenu,flags_val,x_val,y_val,nReserved,hWnd,prcRect);
  return;
}


/* ==== 00441838 FUN_00441838 ==== */

void FUN_00441838(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int j;
  int i_val;
  
  i_val = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 4),j);
      if (param_2 == *piVar1) {
        puVar2 = (undefined4 *)FUN_004102b0(*(undefined4 **)(param_1 + 4),j);
        *puVar2 = 0;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00441874 FUN_00441874 ==== */

void FUN_00441874(int *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar3;
  undefined4 local_1c [4];
  char local_a;
  char local_9;
  int *local_8;
  
  puVar3 = local_1c;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((*(int *)PTR_DAT_004ab748 < 5) &&
     ((*(int *)PTR_DAT_004ab748 != 4 || (*(int *)PTR_DAT_004ab8fc < 1)))) {
    local_a = '\0';
  }
  else {
    local_a = '\x01';
  }
  local_8 = param_1;
  piVar1 = (int *)FUN_00403178(param_1,param_2,0);
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_virtual_000_0043c1f8);
  local_9 = (char)uVar2;
  if (((param_4 & 1) == 0) || ((local_9 != '\0' && ((local_9 == '\0' || (local_a != '\0')))))) {
    if ((local_a == '\0') || ((param_4 & 0x80) == 0)) {
      TBrush_SetColor(*(int **)(param_2 + 0x14),0x80000004);
      TFont_SetColor(*(int **)(param_2 + 0xc),-0x7ffffff9,extraout_ECX_01);
    }
    else {
      TBrush_SetColor(*(int **)(param_2 + 0x14),0x80000004);
      TFont_SetColor(*(int **)(param_2 + 0xc),-0x7fffffef,extraout_ECX_00);
    }
  }
  else {
    TBrush_SetColor(*(int **)(param_2 + 0x14),0x8000000d);
    TFont_SetColor(*(int **)(param_2 + 0xc),-0x7ffffff2,extraout_ECX);
  }
  (**(code **)(*local_8 + 0x30))(local_8,param_2,local_1c,local_9,param_4);
  return;
}


/* ==== 00441968 FUN_00441968 ==== */

void FUN_00441968(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int i_val;
  
  FUN_00403cb0(param_2,param_1);
  i_val = 1;
  do {
    iVar2 = FUN_00403edc(*param_2);
    if (iVar2 < i_val) {
      return;
    }
    bVar1 = *(byte *)(*param_2 + -1 + i_val);
    if (((byte)PTR_DAT_004aba04[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
      if (bVar1 == 0x26) {
        if ((PTR_DAT_004aba14[8] != '\0') && (1 < i_val)) {
          iVar2 = FUN_00403edc(*param_2);
          if ((1 < iVar2 - i_val) &&
             ((*(char *)(*param_2 + -2 + i_val) == '(' && (*(char *)(*param_2 + 1 + i_val) == ')')))
             ) {
            FUN_00404124(param_2,i_val + -1,4);
            goto LAB_004419ef;
          }
        }
        FUN_00404124(param_2,i_val,1);
      }
    }
    else {
      i_val = i_val + 1;
    }
LAB_004419ef:
    i_val = i_val + 1;
  } while( true );
}


/* ==== 00441a00 FUN_00441a00 ==== */

void FUN_00441a00(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int i_val;
  
  FUN_00403c5c(param_2);
  i_val = 1;
  iVar1 = FUN_00403edc(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + -1 + i_val);
      if (((byte)PTR_DAT_004aba04[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) == 0) {
        if (((*(char *)(param_1 + -1 + i_val) == '&') && (0 < iVar1 - i_val)) &&
           (i_val = i_val + 1, *(char *)(param_1 + -1 + i_val) != '&')) {
          FUN_00403e04(param_2,(uint)*(byte *)(param_1 + -1 + i_val));
        }
      }
      else {
        i_val = i_val + 1;
      }
      i_val = i_val + 1;
    } while (i_val <= iVar1);
  }
  return;
}


/* ==== 00441a64 FUN_00441a64 ==== */

void FUN_00441a64(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_c;
  undefined *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  puStack_1c = &LAB_00441abd;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00441968(param_2,(int *)&local_8);
  puVar1 = local_8;
  FUN_00441968(param_1,(int *)&local_c);
  FUN_0040839c(local_c,puVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00441ac4;
  puStack_1c = (undefined1 *)0x441abc;
  FUN_00403c80((int *)&local_c,2);
  return;
}


