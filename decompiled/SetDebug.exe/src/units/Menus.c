/* SetDebug.exe — units/Menus.pas: 174 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0043214c FUN_0043214c ==== */

HANDLE FUN_0043214c(POINT *point)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = FUN_00423224(point);
  pvVar2 = (HANDLE)0x0;
  if (pvVar1 != (HANDLE)0x0) {
    pvVar2 = (HANDLE)FUN_00428124((int)pvVar1,point,0,'\0');
    if (pvVar2 == (HANDLE)0x0) {
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}


/* ==== 0043217c FUN_0043217c ==== */

undefined4 FUN_0043217c(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 4);
}


/* ==== 00432180 FUN_00432180 ==== */

void FUN_00432180(undefined4 *param_1)

{
  int *piVar1;
  
  FUN_0043217c();
  piVar1 = FUN_0040a9f4((int *)&DAT_00431308,'\x01',param_1);
  FUN_0040346c(piVar1);
  return;
}


/* ==== 004321a0 FUN_004321a0 ==== */

short FUN_004321a0(short param_1,byte param_2)

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


/* ==== 004321d8 FUN_004321d8 ==== */

void FUN_004321d8(undefined2 param_1,int *param_2)

{
  UINT UVar1;
  CHAR local_106 [256];
  undefined2 local_6;
  
  local_6 = param_1;
  FUN_004039b8(param_2);
  UVar1 = MapVirtualKeyA((uint)(byte)local_6,0);
  if (UVar1 << 0x10 != 0) {
    GetKeyNameTextA(UVar1 << 0x10,local_106,0x100);
    FUN_00403be8(param_2,local_106,0x100);
  }
  return;
}


/* ==== 0043222c FUN_0043222c ==== */

void FUN_0043222c(ushort param_1,int *param_2)

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
  puStack_20 = &LAB_00432415;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_8._2_1_ = (byte)param_1;
  uVar1 = (uint)uStack_8._2_1_;
  uStack_8 = uVar2;
  if (uStack_8._2_1_ < 0x2d) {
    if (uVar1 - 8 < 2) {
      uVar2 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00403a50((int *)&local_c,*(int *)(&DAT_00446764 + uVar2 * 4));
      goto LAB_004323a1;
    }
    if (uVar1 == 0xd) {
      puStack_1c = &stack0xfffffffc;
      FUN_00403a50((int *)&local_c,DAT_00446790);
      goto LAB_004323a1;
    }
    if (uVar1 == 0x1b) {
      puStack_1c = &stack0xfffffffc;
      FUN_00403a50((int *)&local_c,DAT_0044678c);
      goto LAB_004323a1;
    }
    if (uVar1 - 0x20 < 9) {
      bVar3 = uStack_8._2_1_ + 4;
      puStack_1c = &stack0xfffffffc;
      FUN_00403a50((int *)&local_c,*(int *)(&DAT_00446704 + (uint)bVar3 * 4));
      goto LAB_004323a1;
    }
  }
  else if (uStack_8._2_1_ < 0x41) {
    if (uVar1 - 0x2d < 2) {
      bVar3 = uStack_8._2_1_ + 0xd;
      puStack_1c = &stack0xfffffffc;
      FUN_00403a50((int *)&local_c,(int)(&PTR_s_crHandPoint_004466d0)[bVar3]);
      goto LAB_004323a1;
    }
    if (uVar1 - 0x30 < 10) {
      uVar2 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00403b60((int *)&local_c,uVar2);
      goto LAB_004323a1;
    }
  }
  else {
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = (uint)uStack_8._2_1_;
      FUN_00403b60((int *)&local_c,uVar2);
      goto LAB_004323a1;
    }
    if (uVar1 - 0x60 < 10) {
      uVar2 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00403b60((int *)&local_c,uVar2 - 0x30);
      goto LAB_004323a1;
    }
    if (uVar1 - 0x70 < 0x18) {
      uVar2 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00407c70(uVar2 - 0x6f,(int *)&local_10);
      FUN_00403c84((int *)&local_c,(undefined4 *)&DAT_0043242c,local_10);
      goto LAB_004323a1;
    }
  }
  puStack_1c = &stack0xfffffffc;
  FUN_004321d8(param_1,(int *)&local_c);
LAB_004323a1:
  if (local_c == (undefined4 *)0x0) {
    FUN_004039b8(param_2);
  }
  else {
    FUN_004039b8(param_2);
    if ((uStack_8 & 0x20000000) != 0) {
      FUN_00403c40(param_2,DAT_004467c0);
    }
    if ((uStack_8 & 0x40000000) != 0) {
      FUN_00403c40(param_2,DAT_004467c4);
    }
    if ((uStack_8 & 0x80000000) != 0) {
      FUN_00403c40(param_2,DAT_004467c8);
    }
    FUN_00403c40(param_2,local_c);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0043241c;
  puStack_20 = (undefined1 *)0x432414;
  FUN_004039dc((int *)&local_10,2);
  return;
}


/* ==== 00432430 FUN_00432430 ==== */

undefined4 FUN_00432430(int *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  PCNZCH string2;
  PCNZCH string1;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_00403c38(*param_1);
  iVar2 = FUN_00403c38((int)param_2);
  if (iVar2 <= iVar1) {
    iVar1 = FUN_00403c38((int)param_2);
    string2 = FUN_00403dfc(param_2);
    string1 = FUN_00403dfc((undefined *)*param_1);
    iVar1 = FUN_00407b9c(string1,string2,iVar1);
    if (iVar1 == 0) {
      uVar3 = 1;
      iVar1 = FUN_00403c38((int)param_2);
      FUN_00403e80(param_1,1,iVar1);
    }
  }
  return uVar3;
}


/* ==== 0043248c FUN_0043248c ==== */

void FUN_0043248c(undefined *param_1)

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
  puStack_1c = (undefined1 *)0x4324a5;
  local_8 = param_1;
  FUN_00403dec((int)param_1);
  puStack_20 = &LAB_00432567;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  do {
    do {
      uVar1 = FUN_00432430((int *)&local_8,DAT_004467c0);
    } while ((char)uVar1 != '\0');
    uVar1 = FUN_00432430((int *)&local_8,&DAT_00432580);
  } while ((((char)uVar1 != '\0') ||
           (uVar1 = FUN_00432430((int *)&local_8,DAT_004467c4), (char)uVar1 != '\0')) ||
          (uVar1 = FUN_00432430((int *)&local_8,DAT_004467c8), (char)uVar1 != '\0'));
  if (local_8 != (undefined *)0x0) {
    i_val = 8;
    do {
      FUN_0043222c(i_val,(int *)&local_c);
      iVar2 = FUN_00407b28(local_8,local_c);
      if (iVar2 == 0) break;
      i_val = i_val + 1;
    } while (i_val != 0x256);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0043256e;
  puStack_20 = (undefined1 *)0x432566;
  FUN_004039dc((int *)&local_c,2);
  return;
}


/* ==== 00432584 FUN_00432584 ==== */

uint FUN_00432584(void)

{
  uint uVar1;
  
  uVar1 = FUN_0040f520(DAT_004477c0);
  FUN_0040f4f4(DAT_004477c0,uVar1 & 0xffff,'\x01');
  return uVar1;
}


/* ==== 004325a4 FUN_004325a4 ==== */

char FUN_004325a4(int *param_1,int param_2,undefined *param_3,int param_4)

{
  int iVar1;
  char local_d;
  
  if (param_2 != 0) {
    local_d = '\0';
    while (local_d == '\0') {
      iVar1 = FUN_00434938(param_2);
      if (iVar1 <= *param_1) {
        return '\0';
      }
      iVar1 = FUN_00434948(param_2,*param_1);
      if (*(byte *)(param_4 + -1) < *(byte *)(iVar1 + 0x33)) {
        return '\0';
      }
      local_d = (*(code *)param_3)(iVar1);
      *param_1 = *param_1 + 1;
    }
  }
  return local_d;
}


/* ==== 00432604 FUN_00432604 ==== */

void FUN_00432604(undefined *param_1,int param_2,int param_3)

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
    iVar2 = FUN_00434938(param_2);
  }
  if (local_10 != 0) {
    iVar3 = FUN_00434938(local_10);
  }
  local_1a = '\0';
  while ((local_1a == '\0' && ((i_val < iVar2 || (j < iVar3))))) {
    local_5 = 0xff;
    local_19 = 0xff;
    if (i_val < iVar2) {
      iVar1 = FUN_00434948(param_2,i_val);
      local_5 = *(byte *)(iVar1 + 0x33);
    }
    if (j < iVar3) {
      iVar1 = FUN_00434948(local_10,j);
      local_19 = *(byte *)(iVar1 + 0x33);
    }
    if (local_19 < local_5) {
      local_5 = local_19;
      local_1a = FUN_004325a4(&j,local_10,local_c,(int)&stack0xfffffffc);
    }
    else {
      local_1a = FUN_004325a4(&i_val,param_2,local_c,(int)&stack0xfffffffc);
    }
    while ((i_val < iVar2 &&
           (iVar1 = FUN_00434948(param_2,i_val), *(byte *)(iVar1 + 0x33) <= local_5))) {
      i_val = i_val + 1;
    }
    while ((j < iVar3 && (iVar1 = FUN_00434948(local_10,j), *(byte *)(iVar1 + 0x33) <= local_5))) {
      j = j + 1;
    }
  }
  return;
}


/* ==== 0043270c TMenuActionLink.virtual_000 ==== */

void TMenuActionLink_virtual_000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402ea4(param_2,(int)&PTR_TMenuItem_virtual_000_00431628);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}


/* ==== 00432728 TMenuActionLink.virtual_020 ==== */

undefined4 TMenuActionLink_virtual_020(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = TActionLink_virtual_020(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    uVar3 = FUN_004372c8(*(undefined4 **)(*(int *)(param_1 + 0x18) + 0x24),
                         *(undefined4 **)(iVar2 + 0x54));
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00432760 TMenuActionLink.virtual_024 ==== */

undefined4 TMenuActionLink_virtual_024(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_024(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (*(char *)(iVar2 + 0x58) == *(char *)(*(int *)(param_1 + 0x18) + 0x2c)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00432790 TMenuActionLink.virtual_028 ==== */

undefined4 TMenuActionLink_virtual_028(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_028(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (*(char *)(iVar2 + 0x59) == *(char *)(*(int *)(param_1 + 0x18) + 0x2d)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 004327c0 TMenuActionLink.virtual_02c ==== */

undefined4 TMenuActionLink_virtual_02c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_02c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (*(int *)(iVar2 + 0x5c) == *(int *)(*(int *)(param_1 + 0x18) + 0x48)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 0x5c) >> 8),1);
    }
  }
  return 0;
}


/* ==== 004327f0 TMenuActionLink.virtual_030 ==== */

undefined4 TMenuActionLink_virtual_030(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  
  cVar1 = TActionLink_virtual_030(param_1);
  uVar4 = cVar1 == '\0';
  if (!(bool)uVar4) {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    puVar3 = FUN_00403d48(*(uint **)(*(int *)(param_1 + 0x18) + 0x4c),*(uint **)(iVar2 + 0x60));
    if ((bool)uVar4) {
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
  }
  return 0;
}


/* ==== 00432824 TMenuActionLink.virtual_034 ==== */

undefined4 TMenuActionLink_virtual_034(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_034(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (*(int *)(iVar2 + 100) == *(int *)(*(int *)(param_1 + 0x18) + 0x34)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 100) >> 8),1);
    }
  }
  return 0;
}


/* ==== 00432854 TMenuActionLink.virtual_038 ==== */

undefined4 TMenuActionLink_virtual_038(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_038(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (*(short *)(iVar2 + 0x68) == *(short *)(*(int *)(param_1 + 0x18) + 0x54)) {
      return CONCAT31((int3)(CONCAT22((short)((uint)iVar2 >> 0x10),*(short *)(iVar2 + 0x68)) >> 8),1
                     );
    }
  }
  return 0;
}


/* ==== 00432888 TMenuActionLink.virtual_03c ==== */

undefined4 TMenuActionLink_virtual_03c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TActionLink_virtual_03c(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_virtual_000_0042f24c);
    if (*(char *)(iVar2 + 0x6a) == *(char *)(*(int *)(param_1 + 0x18) + 0x32)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}


/* ==== 004328b8 TMenuActionLink.virtual_008 ==== */

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


/* ==== 004328e0 TMenuActionLink.virtual_040 ==== */

void TMenuActionLink_virtual_040(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    TMenuItem_SetCaption((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 00432900 TMenuActionLink.virtual_044 ==== */

void TMenuActionLink_virtual_044(int *param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x24))();
  if (cVar1 != '\0') {
    TMenuItem_SetChecked(param_1[6],param_2);
  }
  return;
}


/* ==== 00432920 TMenuActionLink.virtual_048 ==== */

void TMenuActionLink_virtual_048(int *param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    TMenuItem_SetEnabled((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 00432940 TMenuActionLink.virtual_04c ==== */

void TMenuActionLink_virtual_04c(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[6] + 0x48) = param_2;
  }
  return;
}


/* ==== 0043295c TMenuActionLink.virtual_050 ==== */

void TMenuActionLink_virtual_050(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403a0c((int *)(param_1[6] + 0x4c),param_2);
  }
  return;
}


/* ==== 00432980 TMenuActionLink.virtual_054 ==== */

void TMenuActionLink_virtual_054(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    TMenuItem_SetImageIndex((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 004329a0 TMenuActionLink.virtual_058 ==== */

void TMenuActionLink_virtual_058(int *param_1,short param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 != '\0') {
    TMenuItem_SetShortCut((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 004329c0 TMenuActionLink.virtual_05c ==== */

void TMenuActionLink_virtual_05c(int *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    TMenuItem_SetVisible((int *)param_1[6],param_2);
  }
  return;
}


/* ==== 004329e0 TMenuActionLink.virtual_010 ==== */

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


/* ==== 00432a0c TMenuItem.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  *(undefined1 *)((int)param_1 + 0x32) = 1;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 2;
  *(undefined1 *)(param_1 + 0xc) = 2;
  uVar1 = FUN_00432584();
  *(short *)(param_1 + 0x11) = (short)uVar1;
  param_1[0xd] = -1;
  iVar2 = FUN_00402ce4((int *)&DAT_0042fe78,'\x01',extraout_ECX_00);
  param_1[0x1b] = iVar2;
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_004351f8;
  if (cVar3 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00432a88 TMenuItem.Destroy ==== */

void TMenuItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0043709c(DAT_004477b8,(int)piVar1);
  if ((int *)piVar1[0x16] != (int *)0x0) {
    FUN_00434c88((int *)piVar1[0x16],(int)piVar1);
    piVar1[0x16] = 0;
  }
  while( true ) {
    iVar3 = FUN_00434938((int)piVar1);
    if (iVar3 < 1) break;
    piVar2 = (int *)FUN_00434948((int)piVar1,0);
    FUN_00402d14(piVar2);
  }
  if (piVar1[10] != 0) {
    FUN_00432ea4(piVar1,0);
    DestroyMenu((HMENU)piVar1[10]);
  }
  FUN_00402d14((int *)piVar1[0x14]);
  FUN_0040bc78(piVar1 + 0xe);
  FUN_0040bc78(piVar1 + 0x1b);
  if (*(ushort *)(piVar1 + 0x11) != 0) {
    FUN_0040f4f4(DAT_004477c0,(uint)*(ushort *)(piVar1 + 0x11),'\0');
  }
  if ((int *)piVar1[0x10] != (int *)0x0) {
    FUN_00402d14((int *)piVar1[0x10]);
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00432b3c FUN_00432b3c ==== */

void FUN_00432b3c(int param_1,HMENU param_2,byte param_3)

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
  puStack_58 = &LAB_00432d97;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  puVar1 = &stack0xfffffffc;
  local_5 = param_3;
  if (*(char *)(param_1 + 0x32) == '\0') goto LAB_00432d79;
  FUN_00403a50((int *)&local_c,*(int *)(param_1 + 0x24));
  iVar4 = FUN_00434938(param_1);
  if (iVar4 < 1) {
    if (*(short *)(param_1 + 0x54) != 0) {
      iVar4 = *(int *)(param_1 + 0x58);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) == 0)) {
        uVar5 = FUN_00402e8c(*(int **)(iVar4 + 4),(int)&PTR_TPersistent_virtual_000_00431b18);
        if ((char)uVar5 != '\0') goto LAB_00432bd8;
      }
      FUN_0043222c(*(ushort *)(param_1 + 0x54),&local_44);
      iStack_68 = local_44;
      FUN_00403cf8((int *)&local_c,3);
    }
  }
  else {
    menuiteminfo.hSubMenu = (HMENU)FUN_00432fe8(param_1);
  }
LAB_00432bd8:
  DVar6 = GetVersion();
  uVar3 = (ushort)DVar6 & 0xff;
  bVar9 = uVar3 == 4;
  if (uVar3 < 4) {
    FUN_00403d48(*(uint **)(param_1 + 0x24),(uint *)&DAT_00432dbc);
    uVar8 = *(uint *)(&DAT_004467e8 + (bVar9 & 0x7f) * 4) |
            *(uint *)(&DAT_004467dc + (uint)*(byte *)(param_1 + 0x3c) * 4) |
            *(uint *)(&DAT_004467cc + (uint)*(byte *)(param_1 + 0x2c) * 4) |
            *(uint *)(&DAT_004467d4 + (uint)*(byte *)(param_1 + 0x2d) * 4);
    iVar4 = FUN_00434938(param_1);
    if (iVar4 < 1) {
      pCVar7 = FUN_00403dfc(local_c);
      InsertMenuA(param_2,0xffffffff,uVar8 | 0x400,(uint)*(ushort *)(param_1 + 0x44),pCVar7);
      puVar1 = puStack_54;
    }
    else {
      pCVar7 = FUN_00403dfc(*(undefined **)(param_1 + 0x24));
      uIDNewItem = FUN_00432fe8(param_1);
      InsertMenuA(param_2,0xffffffff,uVar8 | 0x410,uIDNewItem,pCVar7);
      puVar1 = puStack_54;
    }
    goto LAB_00432d79;
  }
  menuiteminfo.cbSize = 0x2c;
  menuiteminfo.fMask = 0x3f;
  iVar4 = thunk_FUN_00434ea8(param_1);
  if (iVar4 == 0) {
LAB_00432c18:
    if (*(int *)(param_1 + 0x40) != 0) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
      bVar9 = 1;
      if (cVar2 == '\0') goto LAB_00432c2e;
    }
    local_d = 0;
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
    if (*(char *)(iVar4 + 0x34) == '\0') {
      iVar4 = FUN_00434510(param_1);
      bVar9 = 0;
      if (iVar4 == 0) goto LAB_00432c18;
    }
LAB_00432c2e:
    local_d = 1;
  }
  FUN_00403d48(*(uint **)(param_1 + 0x24),(uint *)&DAT_00432dbc);
  menuiteminfo.fType =
       *(uint *)(&DAT_0044681c + (bVar9 & 0x7f) * 4) |
       *(uint *)(&DAT_00446814 + (uint)*(byte *)(param_1 + 0x31) * 4) |
       *(uint *)(&DAT_004467f0 + (uint)*(byte *)(param_1 + 0x3c) * 4) |
       *(uint *)(&DAT_00446824 + (uint)local_5 * 4) | *(uint *)(&DAT_0044682c + (uint)local_d * 4);
  menuiteminfo.fState =
       *(uint *)(&DAT_004467fc + (uint)*(byte *)(param_1 + 0x2c) * 4) |
       *(uint *)(&DAT_0044680c + (uint)*(byte *)(param_1 + 0x2d) * 4) |
       *(uint *)(&DAT_00446804 + (uint)*(byte *)(param_1 + 0x2e) * 4);
  menuiteminfo.wID = (UINT)*(ushort *)(param_1 + 0x44);
  menuiteminfo.hSubMenu = (HMENU)0x0;
  menuiteminfo.hbmpChecked = (HBITMAP)0x0;
  menuiteminfo.hbmpUnchecked = (HBITMAP)0x0;
  menuiteminfo.dwTypeData = FUN_00403dfc(local_c);
  iVar4 = FUN_00434938(param_1);
  if (0 < iVar4) {
    menuiteminfo.hSubMenu = (HMENU)FUN_00432fe8(param_1);
  }
  InsertMenuItemA(param_2,0xffffffff,-1,&menuiteminfo);
  puVar1 = puStack_54;
LAB_00432d79:
  puStack_54 = puVar1;
  *in_FS_OFFSET = iStack_68;
  FUN_004039b8(&local_44);
  FUN_004039b8((int *)&local_c);
  return;
}


/* ==== 00432ddc FUN_00432ddc ==== */

void FUN_00432ddc(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int **)(param_1 + 100) != (int *)0x0) &&
     (uVar1 = FUN_00402e8c(*(int **)(param_1 + 100),(int)&PTR_TPersistent_virtual_000_00431b18),
     (char)uVar1 != '\0')) {
    FUN_00435454(param_1,'\0');
    FUN_00435924(param_1,'\0');
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_0043639c(*(int *)(param_1 + 100));
  }
  FUN_00432604(&LAB_00432dc0,*(int *)(param_1 + 0x5c),param_1);
  return;
}


/* ==== 00432e4c FUN_00432e4c ==== */

void FUN_00432e4c(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_18 = &LAB_00432e96;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00413268(param_2,(int *)&local_8,param_3);
  sVar1 = FUN_0043248c(local_8);
  TMenuItem_SetShortCut(param_1,sVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00432e9d;
  puStack_18 = (undefined1 *)0x432e95;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 00432ea4 FUN_00432ea4 ==== */

void FUN_00432ea4(int *param_1,int param_2)

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
    FUN_00432f04(param_1);
  }
  return;
}


/* ==== 00432ec8 TMenuItem.virtual_00c ==== */

void TMenuItem_virtual_00c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  TComponent_virtual_00c((int)param_1);
  iVar1 = TMenuItem_GetAction((int)param_1);
  if (iVar1 != 0) {
    uVar2 = TMenuItem_GetAction((int)param_1);
    FUN_00402ef0(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  if ((char)param_1[0x1a] != '\0') {
    FUN_00432f04(param_1);
  }
  return;
}


/* ==== 00432f04 FUN_00432f04 ==== */

void FUN_00432f04(int *param_1)

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
        pHVar1 = (HMENU)FUN_00432fe8((int)param_1);
        menu_item_count = GetMenuItemCount(pHVar1);
        if (menu_item_count < 1) break;
        uFlags = 0x400;
        uPosition = 0;
        pHVar1 = (HMENU)FUN_00432fe8((int)param_1);
        RemoveMenu(pHVar1,uPosition,uFlags);
      }
      if ((param_1[0x16] == 0) &&
         (uVar2 = FUN_00402e8c((int *)param_1[0x19],(int)&PTR_TPersistent_virtual_000_00431b18),
         (char)uVar2 != '\0')) {
        DestroyMenu((HMENU)param_1[10]);
        param_1[10] = 0;
      }
      else {
        FUN_00432ddc((int)param_1);
      }
      (**(code **)(*param_1 + 0x38))(param_1,0);
      return;
    }
    FUN_00432f04((int *)param_1[0x18]);
    return;
  }
  *(undefined1 *)(param_1 + 0x1a) = 1;
  return;
}


/* ==== 00432f88 FUN_00432f88 ==== */

void FUN_00432f88(int param_1,int param_2,byte param_3)

{
  int i_val;
  int iVar1;
  int j;
  
  i_val = FUN_00434938(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      if (j < param_2) {
        iVar1 = FUN_00434948(param_1,j);
        if (param_3 < *(byte *)(iVar1 + 0x33)) {
          FUN_00432180((undefined4 *)PTR_PTR_00446ae0);
        }
      }
      else {
        iVar1 = FUN_00434948(param_1,j);
        if (*(byte *)(iVar1 + 0x33) < param_3) {
          iVar1 = FUN_00434948(param_1,j);
          *(byte *)(iVar1 + 0x33) = param_3;
        }
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00432fe8 FUN_00432fe8 ==== */

undefined4 FUN_00432fe8(int param_1)

{
  undefined4 uVar1;
  HMENU pHVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_00402e8c(*(int **)(param_1 + 4),(int)&PTR_TPersistent_virtual_000_00431df0);
    if ((char)uVar1 == '\0') {
      pHVar2 = CreateMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    else {
      pHVar2 = CreatePopupMenu();
      *(HMENU *)(param_1 + 0x28) = pHVar2;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_00432180((undefined4 *)PTR_PTR_00446ac0);
    }
    FUN_00432ddc(param_1);
  }
  return *(undefined4 *)(param_1 + 0x28);
}


/* ==== 00433034 TMenuItem.virtual_004 ==== */

void TMenuItem_virtual_004(int param_1,int *param_2)

{
  TComponent_virtual_004(param_1,param_2);
  (**(code **)(*param_2 + 4))(param_2,"ShortCutText",0,0,0,FUN_00432e4c,param_1);
  return;
}


/* ==== 00433078 FUN_00433078 ==== */

/* WARNING: Removing unreachable block (ram,0x004330c4) */
/* WARNING: Removing unreachable block (ram,0x004330ce) */

void FUN_00433078(int param_1,int *param_2,int param_3,uint format_val,char param_5,LPRECT lprc_val)

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
  puStack_34 = &LAB_0043325f;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_3;
  local_8 = param_2;
  i_val = thunk_FUN_00434ea8(param_1);
  if ((i_val != 0) && (uVar3 = FUN_0043639c(i_val), (char)uVar3 != '\0')) {
    format_val = format_val | 0x20002;
  }
  FUN_00403a50((int *)&local_10,local_c);
  uVar7 = (format_val & 0x400) == 0;
  if ((!(bool)uVar7) &&
     ((uVar7 = true, local_10 == (uint *)0x0 ||
      ((uVar7 = 0, (char)*local_10 == '&' &&
       (uVar7 = *(char *)((int)local_10 + 1) == '\0', (bool)uVar7)))))) {
    FUN_00403c40((int *)&local_10,(undefined4 *)&DAT_00433278);
  }
  FUN_00403d48(local_10,(uint *)&DAT_00433284);
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
      pHVar4 = (HDC)FUN_00417430(local_8);
      DrawEdge(pHVar4,qrc_val,edge,grfFlags);
    }
    goto LAB_00433249;
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
      i_val = FUN_00403c38((int)local_10);
      pCVar5 = FUN_00403dfc((undefined *)local_10);
      pHVar4 = (HDC)FUN_00417430(local_8);
      DrawTextA(pHVar4,pCVar5,i_val,lprc,format);
      OffsetRect(lprc_val,-1,-1);
      uVar3 = extraout_ECX_00;
    }
    else {
      i_val = FUN_004160cc(0x8000000d);
      iVar6 = FUN_004160cc(0x80000010);
      uVar3 = extraout_ECX_01;
      if (i_val == iVar6) {
        TFont_SetColor((int *)local_8[3],-0x7fffffec,extraout_ECX_01);
        goto LAB_00433224;
      }
    }
    TFont_SetColor((int *)local_8[3],-0x7ffffff0,uVar3);
  }
LAB_00433224:
  i_val = FUN_00403c38((int)local_10);
  pCVar5 = FUN_00403dfc((undefined *)local_10);
  pHVar4 = (HDC)FUN_00417430(local_8);
  DrawTextA(pHVar4,pCVar5,i_val,lprc_val,format_val);
LAB_00433249:
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00433266;
  puStack_34 = (undefined1 *)0x43325e;
  FUN_004039b8((int *)&local_10);
  return;
}


/* ==== 0043328c TMenuItem.virtual_034 ==== */

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


/* ==== 004332d0 FUN_004332d0 ==== */

void FUN_004332d0(void)

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
  puStack_1c = &LAB_00433b31;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_20;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
    FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  if (*(int *)(in_stack_00000004 + -0x2c) == 0) {
    uVar6 = FUN_00402e8c(*(int **)(in_stack_00000004 + -0x2c),
                         (int)&PTR_TPersistent_virtual_000_00431df0);
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
  FUN_00403d48(*(uint **)(*(int *)(in_stack_00000004 + -0x34) + 0x24),(uint *)&DAT_00433b48);
  if (bVar14) {
    FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
    *(undefined4 *)(in_stack_00000004 + -0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + -8) = 0xfffffffc;
    *(undefined1 *)(in_stack_00000004 + -0x35) = 0;
    goto LAB_00433830;
  }
  uVar6 = extraout_ECX;
  if (*(int *)(in_stack_00000004 + -0x3c) == 0) {
LAB_004333ed:
    uVar4 = 0;
  }
  else {
    i_val = *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x34);
    if (i_val < 0) {
LAB_004333c6:
      if (*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) == '\0') goto LAB_004333ed;
      piVar7 = *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40);
      if (piVar7 != (int *)0x0) {
        cVar3 = (**(code **)(*piVar7 + 0x1c))();
        uVar6 = extraout_ECX_01;
        if (cVar3 == '\0') goto LAB_004333ed;
      }
    }
    else {
      iVar5 = FUN_00430464(*(int **)(in_stack_00000004 + -0x3c));
      uVar6 = extraout_ECX_00;
      if (iVar5 <= i_val) goto LAB_004333c6;
    }
    uVar4 = 1;
  }
  *(undefined1 *)(in_stack_00000004 + -0x3d) = uVar4;
  if (*(char *)(in_stack_00000004 + -0x3d) == '\0') {
    piVar7 = *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40);
    if (piVar7 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar7 + 0x1c))();
      uVar6 = extraout_ECX_02;
      if (cVar3 == '\0') goto LAB_00433425;
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
LAB_00433425:
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
        uVar6 = FUN_0041d118(0x8000000f,0x80000014);
        FUN_00416d30(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),uVar6);
        FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x10));
      }
      else {
        TBrush_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0x8000000f);
        FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x10));
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
      FUN_00417210(*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10,
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
LAB_004335a6:
        piVar7 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',uVar6);
        *(int **)(in_stack_00000004 + -0x48) = piVar7;
        uVar10 = *in_FS_OFFSET;
        *in_FS_OFFSET = (uint)&stack0xffffffd4;
        (**(code **)(**(int **)(in_stack_00000004 + -0x48) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x48),1);
        h_val = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7ff8);
        FUN_0041c128(*(int **)(in_stack_00000004 + -0x48),h_val);
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
        FUN_00417054(*(int **)(in_stack_00000004 + -0x28),
                     i_val + *(int *)(in_stack_00000004 + -0x10) + 1,iVar5,piVar7);
        TFont_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0xc),
                       *(int *)(in_stack_00000004 + -0x44),extraout_ECX_06);
        *in_FS_OFFSET = uVar10;
        FUN_00402d14(*(int **)(in_stack_00000004 + -0x48));
        return;
      }
      iVar5 = FUN_00430464(*(int **)(in_stack_00000004 + -0x3c));
      uVar6 = extraout_ECX_04;
      if (iVar5 <= i_val) goto LAB_004335a6;
      FUN_00430758(*(int **)(in_stack_00000004 + -0x3c),*(undefined4 *)(in_stack_00000004 + -0x28),
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
LAB_00433830:
  *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + -1;
  *(int *)(in_stack_00000004 + -0xc) = *(int *)(in_stack_00000004 + -0xc) + -1;
  *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 2;
  *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + 2;
  if ((*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) != '\0') ||
     ((*(char *)(in_stack_00000004 + -0x21) != '\0' &&
      (*(char *)(in_stack_00000004 + -0x35) != '\0')))) {
    UVar17 = 0xf;
    UVar16 = *(UINT *)(&DAT_0044683c +
                      (uint)*(byte *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) * 4);
    ptVar8 = (LPRECT)(in_stack_00000004 + -0x10);
    pHVar9 = (HDC)FUN_00417430(*(int **)(in_stack_00000004 + -0x28));
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
    FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
  }
  if ((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x59) != '\0'))
  {
    if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
      if ((*(byte *)(in_stack_00000004 + 0xc) & 0x40) != 0) {
        UVar17 = 0xf;
        UVar16 = 4;
        ptVar8 = (LPRECT)(in_stack_00000004 + -0x20);
        pHVar9 = (HDC)FUN_00417430(*(int **)(in_stack_00000004 + -0x28));
        DrawEdge(pHVar9,ptVar8,UVar16,UVar17);
      }
    }
    else {
      UVar17 = 0xf;
      UVar16 = 2;
      ptVar8 = (LPRECT)(in_stack_00000004 + -0x20);
      pHVar9 = (HDC)FUN_00417430(*(int **)(in_stack_00000004 + -0x28));
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
       (uint)(*(ushort *)(&DAT_00446834 + (uint)*(byte *)(in_stack_00000004 + -0x2d) * 2) | 0x60);
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
  FUN_00433078(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
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
  FUN_00433078(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
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
    FUN_0043222c(uVar1,&local_8);
    FUN_00433078(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),local_8,
                 in_stack_ffffffbc,cVar3,ptVar8);
  }
  *in_FS_OFFSET = in_stack_ffffffbc;
  FUN_004039b8(&local_8);
  return;
}


/* ==== 00433b50 FUN_00433b50 ==== */

void FUN_00433b50(void)

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
  puStack_1c = &LAB_004343db;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
    FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  if (*(int *)(in_stack_00000004 + -0x2c) == 0) {
    uVar6 = FUN_00402e8c(*(int **)(in_stack_00000004 + -0x2c),
                         (int)&PTR_TPersistent_virtual_000_00431df0);
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
  FUN_00403d48(*(uint **)(*(int *)(in_stack_00000004 + -0x34) + 0x24),(uint *)&DAT_004343f0);
  if (bVar13) {
    FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
    *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -8) + 2;
    *(undefined4 *)(in_stack_00000004 + -8) = 0;
    *(undefined1 *)(in_stack_00000004 + -0x35) = 0;
    goto LAB_004340b9;
  }
  uVar6 = extraout_ECX;
  if (*(int *)(in_stack_00000004 + -0x3c) == 0) {
LAB_00433c72:
    uVar4 = 0;
  }
  else {
    i_val = *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x34);
    if (i_val < 0) {
LAB_00433c4b:
      if (*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) == '\0') goto LAB_00433c72;
      piVar7 = *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40);
      if (piVar7 != (int *)0x0) {
        cVar3 = (**(code **)(*piVar7 + 0x1c))();
        uVar6 = extraout_ECX_01;
        if (cVar3 == '\0') goto LAB_00433c72;
      }
    }
    else {
      iVar5 = FUN_00430464(*(int **)(in_stack_00000004 + -0x3c));
      uVar6 = extraout_ECX_00;
      if (iVar5 <= i_val) goto LAB_00433c4b;
    }
    uVar4 = 1;
  }
  *(undefined1 *)(in_stack_00000004 + -0x3d) = uVar4;
  if (*(char *)(in_stack_00000004 + -0x3d) == '\0') {
    piVar7 = *(int **)(*(int *)(in_stack_00000004 + -0x34) + 0x40);
    if (piVar7 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar7 + 0x1c))();
      uVar6 = extraout_ECX_02;
      if (cVar3 == '\0') goto LAB_00433caa;
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
LAB_00433caa:
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
        uVar6 = FUN_0041d118(0x8000000f,0x80000014);
        FUN_00416d30(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),uVar6);
        FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x10));
      }
      else {
        TBrush_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0x8000000f);
        FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x10));
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
      FUN_00417210(*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10,
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
LAB_00433e2b:
        piVar7 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',uVar6);
        *(int **)(in_stack_00000004 + -0x48) = piVar7;
        uVar6 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffd4;
        (**(code **)(**(int **)(in_stack_00000004 + -0x48) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x48),1);
        h_val = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7ff8);
        FUN_0041c128(*(int **)(in_stack_00000004 + -0x48),h_val);
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
        FUN_00417054(*(int **)(in_stack_00000004 + -0x28),
                     i_val + *(int *)(in_stack_00000004 + -0x10) + 1,iVar5,piVar7);
        TFont_SetColor(*(int **)(*(int *)(in_stack_00000004 + -0x28) + 0xc),
                       *(int *)(in_stack_00000004 + -0x44),extraout_ECX_06);
        *in_FS_OFFSET = uVar6;
        FUN_00402d14(*(int **)(in_stack_00000004 + -0x48));
        return;
      }
      iVar5 = FUN_00430464(*(int **)(in_stack_00000004 + -0x3c));
      uVar6 = extraout_ECX_04;
      if (iVar5 <= i_val) goto LAB_00433e2b;
      FUN_00430758(*(int **)(in_stack_00000004 + -0x3c),*(undefined4 *)(in_stack_00000004 + -0x28),
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
LAB_004340b9:
  *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + -1;
  *(int *)(in_stack_00000004 + -0xc) = *(int *)(in_stack_00000004 + -0xc) + -1;
  *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 2;
  *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + 2;
  if ((*(char *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) != '\0') ||
     ((*(char *)(in_stack_00000004 + -0x21) != '\0' &&
      (*(char *)(in_stack_00000004 + -0x35) != '\0')))) {
    UVar16 = 0xf;
    UVar15 = *(UINT *)(&DAT_0044683c +
                      (uint)*(byte *)(*(int *)(in_stack_00000004 + -0x34) + 0x2c) * 4);
    qrc_val = (LPRECT)(in_stack_00000004 + -0x10);
    pHVar8 = (HDC)FUN_00417430(*(int **)(in_stack_00000004 + -0x28));
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
    FUN_00417100(*(int **)(in_stack_00000004 + -0x28),(RECT *)(in_stack_00000004 + -0x20));
  }
  if ((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x59) != '\0'))
  {
    if (*(char *)(in_stack_00000004 + -0x21) == '\0') {
      if ((*(byte *)(in_stack_00000004 + 0xc) & 0x40) != 0) {
        UVar16 = 0xf;
        UVar15 = 4;
        qrc_val = (LPRECT)(in_stack_00000004 + -0x20);
        pHVar8 = (HDC)FUN_00417430(*(int **)(in_stack_00000004 + -0x28));
        DrawEdge(pHVar8,qrc_val,UVar15,UVar16);
      }
    }
    else {
      UVar16 = 0xf;
      UVar15 = 2;
      qrc_val = (LPRECT)(in_stack_00000004 + -0x20);
      pHVar8 = (HDC)FUN_00417430(*(int **)(in_stack_00000004 + -0x28));
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
       (uint)(*(ushort *)(&DAT_00446834 + (uint)*(byte *)(in_stack_00000004 + -0x2d) * 2) | 0x60);
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
  FUN_00433078(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
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
  FUN_00433078(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
               *(int *)(*(int *)(in_stack_00000004 + -0x34) + 0x24),
               *(uint *)(in_stack_00000004 + -0x60),*(char *)(in_stack_00000004 + -0x21),
               (LPRECT)(in_stack_00000004 + -0x20));
  uVar1 = *(ushort *)(*(int *)(in_stack_00000004 + -0x34) + 0x54);
  if ((uVar1 != 0) && (*(char *)(in_stack_00000004 + 8) == '\0')) {
    FUN_0043222c(uVar1,(int *)&local_8);
    *(undefined4 *)(in_stack_00000004 + -0x20) = 10;
    LVar10 = FUN_00417290(*(int **)(in_stack_00000004 + -0x28),local_8);
    *(LONG *)(in_stack_00000004 + -0x18) = LVar10 + *(int *)(in_stack_00000004 + -0x20);
    in_stack_ffffffbc = 2;
    FUN_00433078(*(int *)(in_stack_00000004 + -0x34),*(int **)(in_stack_00000004 + -0x28),
                 (int)local_8,2,*(char *)(in_stack_00000004 + -0x21),
                 (LPRECT)(in_stack_00000004 + -0x20));
  }
  *in_FS_OFFSET = in_stack_ffffffbc;
  FUN_004039b8((int *)&local_8);
  return;
}


/* ==== 004343f8 TMenuItem.virtual_030 ==== */

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
  i_val = thunk_FUN_00434ea8((int)param_1);
  iVar1 = FUN_00434510((int)param_1);
  if (((i_val == 0) || ((*(char *)(i_val + 0x34) == '\0' && (iVar1 == 0)))) ||
     ((*(short *)((int)param_1 + 0x92) == 0 && (*(short *)((int)param_1 + 0x8a) == 0)))) {
    if ((i_val == 0) || (uVar2 = FUN_0043639c(i_val), (char)uVar2 != '\0')) {
      FUN_00433b50();
    }
    else {
      FUN_004332d0();
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


/* ==== 00434510 FUN_00434510 ==== */

undefined4 FUN_00434510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x58); (iVar1 != 0 && (*(int *)(iVar1 + 0x70) == 0));
      iVar1 = *(int *)(iVar1 + 0x58)) {
  }
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_00434ea8(param_1);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x3c);
    }
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x70);
  }
  return uVar2;
}


/* ==== 00434540 FUN_00434540 ==== */

void FUN_00434540(void)

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


/* ==== 0043458c FUN_0043458c ==== */

void FUN_0043458c(int *param_1,int *param_2,int *param_3,int *param_4)

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
  puStack_3c = &LAB_0043476e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_40;
  local_c = param_2;
  local_8 = param_3;
  piVar3 = (int *)FUN_00402ef0(param_1,param_2,param_3);
  uVar4 = FUN_00402e8c(piVar3,(int)&PTR_TPersistent_virtual_000_00431b18);
  bVar7 = (char)uVar4 == '\0';
  if (bVar7) {
    uVar8 = 1;
  }
  else {
    uVar8 = bVar7;
    FUN_00434540();
  }
  bVar7 = !bVar7;
  iVar5 = thunk_FUN_00434ea8((int)param_1);
  local_10 = FUN_00434510((int)param_1);
  FUN_00403d48((uint *)param_1[9],(uint *)&DAT_00434788);
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
  FUN_00402a2c(&rect.left,0x10,0);
  if (iVar5 == 0) {
    uVar4 = FUN_00402e8c((int *)0x0,(int)&PTR_TPersistent_virtual_000_00431df0);
    bVar6 = bRam00000050;
    if ((char)uVar4 == '\0') {
      bVar6 = 0;
    }
  }
  else {
    bVar6 = 0;
  }
  if (*(ushort *)(param_1 + 0x15) == 0) {
    FUN_00403a50(&local_14,param_1[9]);
  }
  else {
    FUN_0043222c(*(ushort *)(param_1 + 0x15),(int *)&local_28);
    FUN_00403c84(&local_14,(undefined4 *)param_1[9],local_28);
  }
  format_val = (uint)(*(ushort *)(&DAT_00446844 + (uint)bVar6 * 2) | 0x560);
  FUN_00433078((int)param_1,local_c,local_14,format_val,'\0',&rect);
  *local_8 = *local_8 + (rect.right - rect.left) + 7;
  if (*(short *)((int)param_1 + 0x9a) != 0) {
    (*(code *)param_1[0x26])(param_1[0x27],param_1,local_c,param_4,local_8);
  }
  *in_FS_OFFSET = format_val;
  FUN_004039b8((int *)&local_28);
  FUN_004039b8(&local_14);
  return;
}


/* ==== 0043478c TMenuItem.dynamic_fff2 ==== */

undefined1 TMenuItem_dynamic_fff2(void)

{
  return 1;
}


/* ==== 00434790 TMenuItem.SetBreak ==== */

void TMenuItem_SetBreak(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xf]) {
    *(char *)(param_1 + 0xf) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 004347a0 TMenuItem.SetCaption ==== */

void TMenuItem_SetCaption(int *param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00403d48((uint *)param_1[9],param_2);
  if (!(bool)in_ZF) {
    FUN_00403a0c(param_1 + 9,param_2);
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 004347c8 FUN_004347c8 ==== */

void FUN_004347c8(int param_1)

{
  int i_val;
  int iVar1;
  int j;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    i_val = FUN_00434938(*(int *)(param_1 + 0x58));
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar1 = FUN_00434948(*(int *)(param_1 + 0x58),j);
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


/* ==== 00434810 TMenuItem.SetChecked ==== */

void TMenuItem_SetChecked(int param_1,byte param_2)

{
  uint uIDCheckItem;
  HMENU hMenu;
  UINT uCheck;
  
  if (param_2 != *(byte *)(param_1 + 0x2c)) {
    *(byte *)(param_1 + 0x2c) = param_2;
    if ((*(int *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 0x20) & 2) == 0)) {
      uCheck = *(UINT *)(&DAT_004467cc + (uint)param_2 * 4);
      uIDCheckItem = (uint)*(ushort *)(param_1 + 0x44);
      hMenu = (HMENU)FUN_00432fe8(*(int *)(param_1 + 0x58));
      CheckMenuItem(hMenu,uIDCheckItem,uCheck);
    }
    if ((param_2 != 0) && (*(char *)(param_1 + 0x31) != '\0')) {
      FUN_004347c8(param_1);
    }
  }
  return;
}


/* ==== 00434864 TMenuItem.SetEnabled ==== */

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
  if (((*(int *)PTR_DAT_00446d9c != 2) || (iVar1 = FUN_00434938((int)param_1), iVar1 == 0)) &&
     ((param_1[0x16] == 0 || (*(int *)(param_1[0x16] + 0x60) == 0)))) {
    if ((param_1[0x16] != 0) && ((*(byte *)(param_1 + 8) & 2) == 0)) {
      uEnable = *(UINT *)(&DAT_004467d4 + (uint)param_2 * 4);
      uIDEnableItem = (uint)*(ushort *)(param_1 + 0x11);
      hMenu = (HMENU)FUN_00432fe8(param_1[0x16]);
      EnableMenuItem(hMenu,uIDEnableItem,uEnable);
    }
    (**(code **)(*param_1 + 0x38))(param_1,0);
    return;
  }
  (**(code **)(*param_1 + 0x38))(param_1,1);
  return;
}


/* ==== 004348dc TMenuItem.SetGroupIndex ==== */

void TMenuItem_SetGroupIndex(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != *(byte *)(param_1 + 0x33)) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != 0) {
      iVar2 = FUN_00434c54(iVar1,param_1);
      FUN_00432f88(iVar1,iVar2,param_2);
    }
    *(byte *)(param_1 + 0x33) = param_2;
    if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x31) != '\0')) {
      FUN_004347c8(param_1);
    }
  }
  return;
}


/* ==== 00434920 TMenuItem.GetAction ==== */

undefined4 TMenuItem_GetAction(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10);
  }
  return 0;
}


/* ==== 00434930 TMenuItem.dynamic_ffef ==== */

undefined ** TMenuItem_dynamic_ffef(void)

{
  return &PTR_TMenuActionLink_virtual_000_0043156c;
}


/* ==== 00434938 FUN_00434938 ==== */

undefined4 FUN_00434938(int param_1)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
}


/* ==== 00434948 FUN_00434948 ==== */

void FUN_00434948(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00432180((undefined4 *)PTR_PTR_00446bbc);
  }
  FUN_0040f024(*(undefined4 **)(param_1 + 0x50),param_2);
  return;
}


/* ==== 0043496c TMenuItem.SetShortCut ==== */

void TMenuItem_SetShortCut(int *param_1,short param_2)

{
  if (param_2 != (short)param_1[0x15]) {
    *(short *)(param_1 + 0x15) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 00434980 TMenuItem.SetVisible ==== */

void TMenuItem_SetVisible(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x32)) {
    *(char *)((int)param_1 + 0x32) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 00434990 TMenuItem.SetImageIndex ==== */

void TMenuItem_SetImageIndex(int *param_1,int param_2)

{
  if (param_2 != param_1[0xd]) {
    param_1[0xd] = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 004349a0 FUN_004349a0 ==== */

int FUN_004349a0(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = FUN_00434c54(*(int *)(param_1 + 0x58),param_1);
  }
  return iVar1;
}


/* ==== 004349b8 FUN_004349b8 ==== */

void FUN_004349b8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = FUN_00434938(*(int *)(param_1 + 0x58));
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    iVar2 = FUN_004349a0(param_1);
    if (param_2 != iVar2) {
      piVar1 = *(int **)(param_1 + 0x58);
      FUN_00434c88(piVar1,param_1);
      FUN_00434ac4(piVar1,param_2,param_1);
    }
  }
  return;
}


/* ==== 00434a00 TMenuItem.dynamic_fffd ==== */

void TMenuItem_dynamic_fffd
               (int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,
               undefined4 param_5)

{
  int i_val;
  undefined4 uVar1;
  int j;
  
  i_val = FUN_00434938(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      uVar1 = FUN_00434948(param_1,j);
      (*(code *)param_4)(param_5,uVar1);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00434a38 TMenuItem.dynamic_fffa ==== */

void TMenuItem_dynamic_fffa(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00402ea4(param_2,(int)&PTR_TMenuItem_virtual_000_00431628);
  FUN_004349b8(iVar1,param_3);
  return;
}


/* ==== 00434a58 TMenuItem.SetDefault ==== */

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
      i_val = FUN_00434938(param_1[0x16]);
      in_register_00000009 = extraout_var;
      if (-1 < i_val + -1) {
        j = 0;
        do {
          iVar1 = FUN_00434948(param_1[0x16],j);
          in_register_00000009 = extraout_var_00;
          if (*(char *)(iVar1 + 0x2e) != '\0') {
            iVar1 = FUN_00434948(param_1[0x16],j);
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


/* ==== 00434ab4 TMenuItem.virtual_03c ==== */

void TMenuItem_virtual_03c(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
  }
  return;
}


/* ==== 00434ac4 FUN_00434ac4 ==== */

void FUN_00434ac4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar1 = param_3;
  if (*(int *)(param_3 + 0x58) != 0) {
    FUN_00432180((undefined4 *)PTR_PTR_00446d94);
    iVar1 = extraout_ECX;
  }
  if (param_1[0x14] == 0) {
    iVar1 = FUN_00402ce4((int *)&PTR_TList_virtual_000_0040d9ac,'\x01',iVar1);
    param_1[0x14] = iVar1;
  }
  iVar1 = param_2 + -1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1[0x14] + 8))) {
    iVar2 = FUN_0040f024((undefined4 *)param_1[0x14],iVar1);
    if (*(byte *)(param_3 + 0x33) < *(byte *)(iVar2 + 0x33)) {
      iVar1 = FUN_0040f024((undefined4 *)param_1[0x14],iVar1);
      TMenuItem_SetGroupIndex(param_3,*(byte *)(iVar1 + 0x33));
    }
  }
  FUN_00432f88((int)param_1,param_2,*(byte *)(param_3 + 0x33));
  FUN_0040f0a0((int *)param_1[0x14],param_2,param_3);
  *(int **)(param_3 + 0x58) = param_1;
  *(int **)(param_3 + 0x7c) = param_1;
  *(code **)(param_3 + 0x78) = FUN_00434cec;
  if (param_1[10] != 0) {
    FUN_00432f04(param_1);
  }
  iVar1 = FUN_00434938((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 1);
  return;
}


/* ==== 00434b74 FUN_00434b74 ==== */

void FUN_00434b74(int *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_1[0x14] != 0)) {
    iVar1 = FUN_00434938((int)param_1);
    if (param_2 < iVar1) goto LAB_00434b9a;
  }
  FUN_00432180((undefined4 *)PTR_PTR_00446bbc);
LAB_00434b9a:
  iVar1 = FUN_0040f024((undefined4 *)param_1[0x14],param_2);
  FUN_0040ef14((int *)param_1[0x14],param_2);
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  if (param_1[10] != 0) {
    FUN_00432f04(param_1);
  }
  iVar1 = FUN_00434938((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 0);
  return;
}


/* ==== 00434be4 TMenuItem.virtual_040 ==== */

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


/* ==== 00434c54 FUN_00434c54 ==== */

int FUN_00434c54(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_0040f080(*(int *)(param_1 + 0x50),param_2);
  }
  return iVar1;
}


/* ==== 00434c6c FUN_00434c6c ==== */

void FUN_00434c6c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00434938((int)param_1);
  FUN_00434ac4(param_1,iVar1,param_2);
  return;
}


/* ==== 00434c88 FUN_00434c88 ==== */

void FUN_00434c88(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00434c54((int)param_1,param_2);
  if (iVar1 == -1) {
    FUN_00432180((undefined4 *)PTR_PTR_00446d18);
  }
  FUN_00434b74(param_1,iVar1);
  return;
}


/* ==== 00434cb0 TMenuItem.virtual_038 ==== */

void TMenuItem_virtual_038(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x58) == 0) &&
     (uVar1 = FUN_00402e8c(*(int **)(param_1 + 4),(int)&PTR_TPersistent_virtual_000_00431a24),
     (char)uVar1 != '\0')) {
    iVar2 = 0;
  }
  if (*(short *)(param_1 + 0x7a) != 0) {
    (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x7c),param_1,iVar2,param_2);
  }
  return;
}


/* ==== 00434cec FUN_00434cec ==== */

void FUN_00434cec(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_4 != '\0') && ((param_1[10] != 0 || (param_1[0x18] != 0)))) {
    FUN_00432f04(param_1);
  }
  if ((int *)param_1[0x16] == (int *)0x0) {
    piVar1 = (int *)param_1[1];
    uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_virtual_000_00431b18);
    if ((char)uVar2 != '\0') {
      FUN_00436880(piVar1);
    }
  }
  else {
    FUN_00434cec((int *)param_1[0x16],param_1,param_3,'\0');
  }
  return;
}


/* ==== 00434d44 TMenuItem.GetBitmap ==== */

undefined4 TMenuItem_GetBitmap(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',param_3);
    *(int **)(param_1 + 0x40) = piVar1;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x3c))(*(int **)(param_1 + 0x40),1);
  return *(undefined4 *)(param_1 + 0x40);
}


/* ==== 00434d6c TMenuItem.SetAction ==== */

void TMenuItem_SetAction(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 == 0) {
    FUN_00402d14((int *)param_1[0xe]);
    param_1[0xe] = 0;
  }
  else {
    if (param_1[0xe] == 0) {
      iVar1 = FUN_00402ef0(param_1,param_2,param_3);
      iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      param_1[0xe] = iVar1;
    }
    (**(code **)(*(int *)param_1[0xe] + 0xc))((int *)param_1[0xe],param_2);
    iVar1 = param_1[0xe];
    *(int **)(iVar1 + 0xc) = param_1;
    *(undefined1 **)(iVar1 + 8) = &LAB_00434fc8;
    FUN_00402ef0(param_1,param_2,
                 CONCAT31((int3)((uint)extraout_ECX >> 8),(*(byte *)(param_2 + 0x20) & 1) != 0));
    FUN_00413a98(param_2,(int)param_1,extraout_ECX_00);
  }
  return;
}


/* ==== 00434ddc TMenuItem.SetBitmap ==== */

void TMenuItem_SetBitmap(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_1[0x10] == 0) {
    piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_0041571c,'\x01',param_3);
    param_1[0x10] = (int)piVar1;
  }
  (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10],param_2);
  (**(code **)(*param_1 + 0x38))(param_1,1);
  return;
}


/* ==== 00434e10 FUN_00434e10 ==== */

void FUN_00434e10(int param_1)

{
  int i_val;
  int *piVar1;
  int j;
  
  i_val = FUN_00434938(param_1);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_00434948(param_1,j);
      (**(code **)(*piVar1 + 0x3c))();
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00434e3c TMenuItem.dynamic_fff3 ==== */

int TMenuItem_dynamic_fff3(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 100) != 0)) {
    return *(int *)(iVar1 + 100);
  }
  return iVar1;
}


/* ==== 00434e50 TMenuItem.dynamic_fff9 ==== */

void TMenuItem_dynamic_fff9(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    FUN_00434c88(*(int **)(param_1 + 0x58),param_1);
  }
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_virtual_000_00431a24);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00402e8c(param_2,(int)&PTR_TMenuItem_virtual_000_00431628);
      if ((char)uVar1 != '\0') {
        FUN_00434c6c(param_2,param_1);
      }
    }
    else {
      FUN_00434c6c((int *)param_2[10],param_1);
    }
  }
  return;
}


/* ==== 00434ea4 thunk_FUN_00434ea8 ==== */

undefined4 thunk_FUN_00434ea8(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}


/* ==== 00434ea8 FUN_00434ea8 ==== */

undefined4 FUN_00434ea8(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}


/* ==== 00434eb4 TMenuItem.SetRadioItem ==== */

void TMenuItem_SetRadioItem(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x31)) {
    *(char *)((int)param_1 + 0x31) = param_2;
    if (((char)param_1[0xb] != '\0') && (*(char *)((int)param_1 + 0x31) != '\0')) {
      FUN_004347c8((int)param_1);
    }
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 00434ee0 TMenuItem.dynamic_fff0 ==== */

void TMenuItem_dynamic_fff0(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)TMenuItem_GetAction((int)param_1);
  uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TCustomAction_virtual_000_0042f24c);
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
      FUN_00403a0c(param_1 + 0x13,*(undefined4 **)(param_2 + 0x60));
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


/* ==== 00435010 FUN_00435010 ==== */

undefined4 FUN_00435010(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x24))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00435030 FUN_00435030 ==== */

undefined4 FUN_00435030(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x28))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00435050 FUN_00435050 ==== */

undefined4 FUN_00435050(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x30))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00435070 FUN_00435070 ==== */

undefined4 FUN_00435070(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x2c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00435090 FUN_00435090 ==== */

undefined4 FUN_00435090(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x34))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 004350b0 FUN_004350b0 ==== */

undefined4 FUN_004350b0(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x38))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 004350d0 FUN_004350d0 ==== */

undefined4 FUN_004350d0(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 004350f0 FUN_004350f0 ==== */

undefined4 FUN_004350f0(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00435110 TMenuItem.virtual_000 ==== */

void TMenuItem_virtual_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_virtual_000_0042f24c);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_000(param_1,param_2);
  }
  else {
    FUN_0042fb40(param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)param_1 + 0x2d)));
    FUN_0042fb98(param_2,param_1[0x12]);
    THintAction_SetHint(param_2,(uint *)param_1[0x13]);
    FUN_0042fc58(param_2,param_1[0xd]);
    FUN_0042fa80(param_2,(uint *)param_1[9]);
    FUN_0042fd0c(param_2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                  *(undefined1 *)((int)param_1 + 0x32)));
    (**(code **)(*param_2 + 0x34))();
  }
  return;
}


/* ==== 00435188 TMenuItem.virtual_010 ==== */

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


/* ==== 004351bc TMenuItem.SetSubMenuImages ==== */

void TMenuItem_SetSubMenuImages(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_00430bc0(*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x6c));
  }
  *(int *)(param_1 + 0x70) = param_2;
  if (param_2 != 0) {
    FUN_00430c04(param_2,*(int *)(param_1 + 0x6c));
    FUN_00413a98(*(int *)(param_1 + 0x70),param_1,extraout_ECX);
  }
  FUN_0043522c(param_1);
  return;
}


/* ==== 00435204 FUN_00435204 ==== */

undefined4 FUN_00435204(int *param_1)

{
  FUN_00432604(FUN_00435204,param_1[0x17],(int)param_1);
  FUN_00434cec(param_1,param_1,param_1,'\x01');
  return 0;
}


/* ==== 0043522c FUN_0043522c ==== */

void FUN_0043522c(int param_1)

{
  FUN_00432604(FUN_00435204,*(int *)(param_1 + 0x5c),param_1);
  return;
}


/* ==== 00435240 FUN_00435240 ==== */

bool FUN_00435240(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040b3e8(param_1,*(undefined **)(param_4 + -4));
  if (pCVar1 != (PCNZCH)0x0) {
    FUN_00403e80((int *)(param_4 + -4),(int)pCVar1,1);
  }
  return pCVar1 != (PCNZCH)0x0;
}


/* ==== 00435270 FUN_00435270 ==== */

void FUN_00435270(void)

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
  FUN_00403a50((int *)(in_stack_00000004 + -0x18),*(int *)(in_stack_00000004 + -4));
  return;
}


/* ==== 004352f4 FUN_004352f4 ==== */

void FUN_004352f4(int *param_1,undefined4 param_2,int param_3)

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
  puStack_28 = &LAB_00435416;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = false;
  local_c = param_3;
  local_8 = param_2;
  i_val = FUN_00403c38(*param_1);
  if (0 < i_val) {
    j = 1;
    do {
      uVar2 = (uint)*(byte *)(*param_1 + -1 + j);
      if (((byte)PTR_DAT_00446d90[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
        bVar1 = true;
        break;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  if (bVar1) {
    ppuVar4 = &local_10;
    i_val = FUN_00403c38(*param_1);
    uVar3 = i_val + -2 == 0;
    FUN_00403e40(*param_1,i_val + -2,3,(int *)ppuVar4);
    FUN_00403d48(local_10,(uint *)&DAT_0043542c);
    if ((bool)uVar3) {
      piVar5 = &local_14;
      i_val = FUN_00403c38(*param_1);
      FUN_00403e40(*param_1,1,i_val - 3,piVar5);
      puStackY_40 = &DAT_00435450;
      FUN_00403cf8(param_1,6);
    }
    else {
      puStackY_40 = &DAT_00435450;
      FUN_00403cf8(param_1,5);
    }
  }
  else if (local_c != 0) {
    FUN_00403ec8((undefined4 *)&DAT_00435444,param_1,local_c);
  }
  *in_FS_OFFSET = puStackY_40;
  FUN_004039dc(&local_14,2);
  return;
}


/* ==== 00435454 FUN_00435454 ==== */

void FUN_00435454(int param_1,char param_2)

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
  uStack_20 = &LAB_004358c6;
  puVar13 = &stack0xfffffffc;
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      local_28 = (undefined1 *)0x435491;
      cVar1 = FUN_00435a70(param_1);
      puVar13 = local_1c;
      if (cVar1 != '\0') goto LAB_00435499;
    }
    *in_FS_OFFSET = (int)local_24;
    local_1c = &LAB_004358cd;
    uStack_20 = (undefined1 *)0x4358a8;
    FUN_004039dc(&local_44,4);
    uStack_20 = (undefined1 *)0x4358b5;
    FUN_004039dc(&local_30,3);
    uStack_20 = (undefined1 *)0x4358bd;
    FUN_004039b8((int *)&local_1c);
    uStack_20 = (undefined1 *)0x4358c5;
    FUN_004039b8(&local_8);
    return;
  }
LAB_00435499:
  local_1c = puVar13;
  local_28 = (undefined1 *)0x4354a7;
  FUN_00403a50(&local_8,(int)PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_00446770);
  local_28 = (undefined1 *)0x4354b3;
  piVar3 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_virtual_000_0040dcac,'\x01',extraout_ECX);
  local_28 = (undefined1 *)0x4354c2;
  piVar4 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_virtual_000_0040dcac,'\x01',extraout_ECX_00);
  local_28 = (undefined1 *)0x4354d1;
  local_24 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_virtual_000_0040dcac,'\x01',extraout_ECX_01
                                );
  local_28 = (undefined1 *)0x4354e0;
  piVar5 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_virtual_000_0040dcac,'\x01',extraout_ECX_02);
  local_2c = (undefined4 *)&LAB_00435887;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_30;
  local_28 = &stack0xfffffffc;
  i_val = FUN_00434938(param_1);
  if (-1 < i_val + -1) {
    i_val = 0;
    do {
      puVar13 = (undefined1 *)0x435515;
      j = FUN_00434948(param_1,i_val);
      uVar12 = *(char *)(j + 0x32) == '\0';
      if (!(bool)uVar12) {
        j = FUN_00434948(param_1,i_val);
        puVar13 = (undefined1 *)0x435535;
        FUN_00403d48(*(uint **)(j + 0x24),(uint *)&DAT_004358e0);
        if (!(bool)uVar12) {
          puVar13 = (undefined1 *)0x435544;
          j = FUN_00434948(param_1,i_val);
          if (*(int *)(j + 0x24) != 0) {
            j = FUN_00434948(param_1,i_val);
            FUN_00437264(*(int *)(j + 0x24),(int *)&local_38);
            FUN_00407a20(local_38,(int *)&local_28);
            if (local_28 == (undefined *)0x0) {
              puVar13 = (undefined1 *)FUN_00434948(param_1,i_val);
              local_38 = (byte *)0x435586;
              j = FUN_00434948(param_1,i_val);
              local_38 = (byte *)0x435593;
              FUN_0040ff30(local_24,0,*(undefined4 *)(j + 0x24),puVar13);
            }
            else {
              puVar13 = (undefined1 *)0x4355a3;
              pCVar11 = FUN_0040b3e8(local_28,PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_00446770);
              if (pCVar11 != (PCNZCH)0x0) {
                local_38 = (byte *)0x4355b0;
                puVar13 = &stack0xfffffffc;
                bVar2 = FUN_00435240(local_28,extraout_EDX,extraout_ECX_03,(int)&stack0xfffffffc);
                if (!bVar2) {
                  j = FUN_00434948(param_1,i_val);
                  piVar6 = (int *)(j + 0x24);
                  local_38 = (byte *)0x4355cb;
                  j = FUN_00434948(param_1,i_val);
                  local_38 = (byte *)0x4355d6;
                  FUN_004371cc(*(undefined4 **)(j + 0x24),(int *)&local_3c);
                  FUN_00403a0c(piVar6,local_3c);
                  puVar13 = (undefined1 *)FUN_00434948(param_1,i_val);
                  local_38 = (byte *)0x4355f2;
                  j = FUN_00434948(param_1,i_val);
                  local_38 = (byte *)0x4355ff;
                  FUN_0040ff30(local_24,0,*(undefined4 *)(j + 0x24),puVar13);
                }
              }
            }
          }
        }
      }
      i_val = i_val + 1;
    } while (puVar13 != (undefined1 *)0x1);
  }
  FUN_00403a50(&local_30,local_8);
  i_val = (**(code **)(*local_24 + 0x14))();
  if (-1 < i_val + -1) {
    do {
      FUN_00403a50(&local_8,local_30);
      (**(code **)(*piVar4 + 8))(piVar4,local_24);
      (**(code **)(*piVar3 + 0x40))();
      i_val = (**(code **)(*piVar4 + 0x14))();
      i_val = i_val + -1;
      if (-1 < i_val) {
        do {
          (**(code **)(*piVar4 + 0xc))(piVar4,i_val,&local_2c);
          for (j = 1; k = FUN_00403c38((int)local_2c), j <= k; j = j + 1) {
            uVar7 = (uint)*(byte *)((int)local_2c + j + -1);
            if (((byte)PTR_DAT_00446d90[(int)uVar7 >> 3] >> (uVar7 & 7) & 1) == 0) {
              local_38 = (byte *)0x43569f;
              FUN_00403e40((int)local_2c,j,1,(int *)&local_40);
              FUN_00407a20(local_40,(int *)&local_28);
              local_38 = (byte *)0x4356b3;
              bVar2 = FUN_00435240(local_28,extraout_EDX_00,extraout_ECX_04,(int)&stack0xfffffffc);
              if (bVar2) {
                if (PTR_DAT_00446da0[8] == '\0') {
                  FUN_00403ec8((undefined4 *)&DAT_004358ec,(int *)&local_2c,j);
                }
                else {
                  FUN_004352f4((int *)&local_2c,local_28,j);
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
        local_38 = (byte *)0x435732;
        FUN_00435270();
      }
      i_val = (**(code **)(*piVar4 + 0x14))();
      if (i_val < 1) break;
      j = 0x435747;
      i_val = (**(code **)(*piVar4 + 0x14))();
      if (-1 < i_val + -1) {
        k = 0;
        do {
          j = (**(code **)(*piVar4 + 0x18))(piVar4,k);
          iVar9 = FUN_0040fefc(local_24,j);
          iVar10 = (**(code **)(*local_24 + 0x14))();
          j = 0x43577c;
          (**(code **)(*local_24 + 0x60))(local_24,iVar9,iVar10 + -1);
          k = k + 1;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    } while (j != 1);
  }
  local_38 = (byte *)0x435795;
  FUN_00435270();
  i_val = (**(code **)(*piVar5 + 0x14))();
  uStack_20 = (undefined1 *)CONCAT13(0 < i_val,(undefined3)uStack_20);
  i_val = (**(code **)(*piVar5 + 0x14))();
  if (-1 < i_val + -1) {
    i_val = 0;
    do {
      (**(code **)(*piVar5 + 0xc))(piVar5,i_val,&local_2c);
      if ((((PTR_DAT_00446da0[8] != '\0') &&
           (pCVar11 = FUN_0040b3e8(&DAT_004358ec,(undefined *)local_2c), pCVar11 == (PCNZCH)0x0)) &&
          (local_1c != (undefined1 *)0x0)) &&
         (pCVar11 = FUN_0040b3e8(&DAT_004358ec,(undefined *)local_2c), pCVar11 == (PCNZCH)0x0)) {
        piVar6 = &local_44;
        local_38 = (byte *)0x435807;
        j = FUN_00403c38((int)local_1c);
        local_38 = (byte *)0x435816;
        FUN_00403e40((int)local_1c,j,1,piVar6);
        FUN_004352f4((int *)&local_2c,local_44,0);
        j = FUN_00403c38((int)local_1c);
        FUN_00403e80((int *)&local_1c,j,1);
      }
      j = (**(code **)(*piVar5 + 0x18))(piVar5,i_val);
      k = 0x43584f;
      FUN_00403a0c((int *)(j + 0x24),local_2c);
      i_val = i_val + 1;
    } while (k != 1);
  }
  *in_FS_OFFSET = local_30;
  local_28 = (undefined1 *)0x43588e;
  local_2c = (undefined4 *)0x43586e;
  FUN_00402d14(piVar5);
  local_2c = (undefined4 *)0x435876;
  FUN_00402d14(local_24);
  local_2c = (undefined4 *)0x43587e;
  FUN_00402d14(piVar4);
  local_2c = (undefined4 *)0x435886;
  FUN_00402d14(piVar3);
  return;
}


/* ==== 004358f0 TMenuItem.SetAutoHotkeys ==== */

void TMenuItem_SetAutoHotkeys(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x2f)) {
    *(char *)((int)param_1 + 0x2f) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 00435900 FUN_00435900 ==== */

undefined1 FUN_00435900(int param_1)

{
  undefined1 in_ZF;
  
  FUN_00403d48(*(uint **)(param_1 + 0x24),(uint *)&DAT_00435920);
  return in_ZF;
}


/* ==== 00435924 FUN_00435924 ==== */

undefined1 FUN_00435924(int param_1,char param_2)

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
     (((*(byte *)(param_1 + 0x20) & 0x10) == 0 && (cVar1 = FUN_00435a9c(param_1), cVar1 != '\0'))))
  {
    local_14 = 0;
    iVar2 = 0;
    i_val = 0;
    j = FUN_00434938(param_1);
    k = local_14;
    if (-1 < j + -1) {
      do {
        k = FUN_00434948(param_1,i_val);
        if (*(char *)(k + 0x32) != '\0') {
          k = FUN_00434948(param_1,i_val);
          cVar1 = FUN_00435900(k);
          k = i_val;
          if (cVar1 == '\0') break;
          k = FUN_00434948(param_1,i_val);
          *(undefined1 *)(k + 0x32) = 0;
          local_18 = 1;
        }
        i_val = i_val + 1;
        j = j + -1;
        k = local_14;
      } while (j != 0);
    }
    local_14 = k;
    i_val = FUN_00434938(param_1);
    if (local_14 <= i_val + -1) {
      k = ((i_val + -1) - local_14) + 1;
      i_val = local_14;
      do {
        j = FUN_00434948(param_1,i_val);
        cVar1 = FUN_00435900(j);
        if (cVar1 == '\0') {
          j = FUN_00434948(param_1,i_val);
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
          iVar2 = FUN_00434948(param_1,i_val);
        }
        i_val = i_val + 1;
        k = k + -1;
      } while (k != 0);
    }
    i_val = FUN_00434938(param_1);
    i_val = i_val + -1;
    if (local_14 - i_val == 0 || local_14 < i_val) {
      k = (local_14 - i_val) + -1;
      do {
        j = FUN_00434948(param_1,i_val);
        if (*(char *)(j + 0x32) != '\0') {
          j = FUN_00434948(param_1,i_val);
          cVar1 = FUN_00435900(j);
          if (cVar1 == '\0') {
            return local_18;
          }
          j = FUN_00434948(param_1,i_val);
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


/* ==== 00435a60 TMenuItem.SetAutoLineReduction ==== */

void TMenuItem_SetAutoLineReduction(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xc]) {
    *(char *)(param_1 + 0xc) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


/* ==== 00435a70 FUN_00435a70 ==== */

undefined1 FUN_00435a70(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2f);
  if ((*(byte *)(param_1 + 0x2f) == 2) && (*(int *)(param_1 + 0x58) != 0)) {
    bVar1 = FUN_00435a70(*(int *)(param_1 + 0x58));
    uVar2 = (uint)(byte)(&DAT_0044677c)[bVar1 & 0x7f];
  }
  return (&DAT_00446780)[uVar2 & 0x7f];
}


/* ==== 00435a9c FUN_00435a9c ==== */

undefined1 FUN_00435a9c(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x30) == 2) && (*(int *)(param_1 + 0x58) != 0)) {
    bVar1 = FUN_00435a9c(*(int *)(param_1 + 0x58));
    uVar2 = (uint)(byte)(&DAT_0044677c)[bVar1 & 0x7f];
  }
  return (&DAT_00446780)[uVar2 & 0x7f];
}


/* ==== 00435ac8 TMenu.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  piVar1 = TMenuItem_virtual_02c((int *)&PTR_TMenuItem_virtual_000_00431628,'\x01',param_1);
  param_1[10] = (int)piVar1;
  piVar1[0x1f] = (int)param_1;
  piVar1[0x1e] = *(int *)(*param_1 + 0x38);
  piVar1[0x19] = (int)param_1;
  iVar2 = FUN_00402ce4((int *)&DAT_0042fe78,'\x01',extraout_ECX_00);
  param_1[0xe] = iVar2;
  *(int **)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_00436328;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  TComponent_virtual_02c(param_1,'\0',param_3);
  iVar2 = param_1[10];
  *(undefined1 *)(iVar2 + 0x2f) = 0;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  FUN_0043673c(param_1);
  if (cVar3 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


/* ==== 00435b60 TMenu.Destroy ==== */

void TMenu_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[10]);
  FUN_00402d14((int *)piVar1[0xe]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00435b98 TMenu.dynamic_fffd ==== */

void TMenu_dynamic_fffd(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(*(int **)(param_1 + 0x28),param_2,param_3);
  return;
}


/* ==== 00435bb4 TMenu.virtual_034 ==== */

void TMenu_virtual_034(int param_1)

{
  FUN_00432fe8(*(int *)(param_1 + 0x28));
  return;
}


/* ==== 00435bc0 TMenu.dynamic_fffa ==== */

void TMenu_dynamic_fffa(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00402ef0(*(int **)(param_1 + 0x28),param_2,param_3);
  return;
}


/* ==== 00435bd4 FUN_00435bd4 ==== */

undefined4 FUN_00435bd4(int *param_1)

{
  FUN_00432604(FUN_00435bd4,param_1[0x17],(int)param_1);
  FUN_00434cec(param_1,param_1,param_1,'\x01');
  return 0;
}


/* ==== 00435bfc FUN_00435bfc ==== */

void FUN_00435bfc(int param_1)

{
  FUN_00432604(FUN_00435bd4,*(int *)(*(int *)(param_1 + 0x28) + 0x5c),*(int *)(param_1 + 0x28));
  return;
}


/* ==== 00435c14 FUN_00435c14 ==== */

undefined1 FUN_00435c14(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
    i_val = FUN_00434938(param_1);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar3 = param_4;
        iVar2 = FUN_00434948(param_1,j);
        cVar1 = FUN_00435c14(iVar2,extraout_EDX,extraout_ECX,iVar3);
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


/* ==== 00435cac FUN_00435cac ==== */

undefined4 FUN_00435cac(int param_1)

{
  FUN_00432604(FUN_00435c14,*(int *)(*(int *)(param_1 + 0x28) + 0x5c),*(int *)(param_1 + 0x28));
  return 0;
}


/* ==== 00435cdc FUN_00435cdc ==== */

undefined4 FUN_00435cdc(int *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((param_3 == '\0') &&
      (uVar1 = FUN_00402e8c(param_1,(int)&PTR_TPersistent_virtual_000_00431df0), (char)uVar1 != '\0'
      )) && (iVar2 = (**(code **)(*param_1 + 0x34))(), param_2 == iVar2)) {
    uVar3 = TPopupMenu_GetHelpContext((int)param_1);
  }
  else {
    for (iVar2 = FUN_00435cac((int)param_1); (iVar2 != 0 && (*(int *)(iVar2 + 0x48) == 0));
        iVar2 = *(int *)(iVar2 + 0x58)) {
    }
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x48);
    }
  }
  return uVar3;
}


/* ==== 00435d4c FUN_00435d4c ==== */

bool FUN_00435d4c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00435cac(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))();
  }
  return piVar1 != (int *)0x0;
}


/* ==== 00435d68 FUN_00435d68 ==== */

undefined4 FUN_00435d68(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_00435cac((int)param_1);
  if (piVar2 != (int *)0x0) {
    if ((*(byte *)(piVar2 + 8) & 0x10) == 0) {
      FUN_00434e10((int)piVar2);
    }
    (**(code **)(*piVar2 + 0x40))();
    cVar1 = FUN_00435454((int)piVar2,'\0');
    if ((cVar1 != '\0') || (cVar1 = FUN_00435924((int)piVar2,'\0'), cVar1 != '\0')) {
      FUN_00432f04(piVar2);
    }
    return 1;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    return 0;
  }
  uVar3 = FUN_00402e8c(param_1,(int)&PTR_TPersistent_virtual_000_00431df0);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  FUN_00434e10(param_1[10]);
  return 0;
}


/* ==== 00435ddc FUN_00435ddc ==== */

undefined4 FUN_00435ddc(int param_1)

{
  if ((*(char *)(param_1 + 0x34) == '\0') && (*(int *)(param_1 + 0x3c) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* ==== 00435df0 thunk_FUN_00435df6 ==== */

void thunk_FUN_00435df6(int param_1,int param_2)

{
  for (; (0 < param_2 && (param_1 != 0)); param_1 = *(int *)(param_1 + 0x58)) {
    param_2 = param_2 + -1;
  }
  return;
}


/* ==== 00435df6 FUN_00435df6 ==== */

void FUN_00435df6(int param_1,int param_2)

{
  for (; (0 < param_2 && (param_1 != 0)); param_1 = *(int *)(param_1 + 0x58)) {
    param_2 = param_2 + -1;
  }
  return;
}


/* ==== 00435e00 FUN_00435e00 ==== */

char FUN_00435e00(int *param_1,int param_2,undefined4 param_3,int param_4)

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
    puStackY_20 = (undefined1 *)0x435e2e;
    local_5 = FUN_00435e00(&local_c,param_2 + 1,param_3,param_4);
  }
  if ((local_5 != '\0') && (local_5 != '\x03')) {
    if (local_5 == '\x02') {
      if ((*(int *)(param_4 + -4) == 0) ||
         (*(short *)(*(int *)(param_4 + -4) + 0x54) != *(short *)(param_4 + -6))) {
        uVar1 = FUN_00435cac(*(int *)(param_4 + -0xc));
        *(undefined4 *)(param_4 + -4) = uVar1;
        if (*(int *)(param_4 + -4) == 0) {
          return '\x03';
        }
      }
      iVar2 = thunk_FUN_00435df6(*(int *)(param_4 + -4),param_2);
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
      puStackY_20 = &LAB_00435f25;
      uStackY_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_24;
      if ((*(byte *)(*(int *)(param_4 + -0xc) + 0x20) & 0x10) == 0) {
        FUN_00434e10(*param_1);
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


/* ==== 00435f54 TMenu.dynamic_fff0 ==== */

undefined4 TMenu_dynamic_fff0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int local_8;
  
  puStack_20 = (undefined1 *)0x435f70;
  GetKeyState(0x10);
  puStack_20 = (undefined1 *)0x435f82;
  GetKeyState(0x11);
  local_8 = FUN_00435cac(param_1);
  if (local_8 == 0) {
    return 0;
  }
  FUN_0041d3f0(DAT_004477b8);
  puStack_20 = &LAB_00435ff6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00435e00(&local_8,0,extraout_ECX,(int)&stack0xfffffffc);
  *in_FS_OFFSET = uStack_24;
  puStack_20 = (undefined1 *)0x435ff5;
  uVar1 = FUN_0041d3e8(DAT_004477b8);
  return uVar1;
}


/* ==== 00436018 FUN_00436018 ==== */

void FUN_00436018(int *param_1)

{
  HMENU hmenu;
  BOOL BVar1;
  undefined4 uVar2;
  uint uVar3;
  tagMENUITEMINFOA menuiteminfo;
  CHAR aCStack_58 [80];
  
  if ((PTR_DAT_00446da0[9] != '\0') && (param_1[0xb] != 0)) {
    hmenu = (HMENU)(**(code **)(*param_1 + 0x34))();
    menuiteminfo.cbSize = 0x2c;
    menuiteminfo.fMask = 0x10;
    menuiteminfo.dwTypeData = aCStack_58;
    menuiteminfo.cch = 0x50;
    BVar1 = GetMenuItemInfoA(hmenu,0,-1,&menuiteminfo);
    if (BVar1 != 0) {
      uVar2 = FUN_0043639c((int)param_1);
      if ((bool)(char)uVar2 != ((menuiteminfo.fType & 0x6000) != 0)) {
        uVar3 = FUN_0043639c((int)param_1);
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


/* ==== 004360d4 FUN_004360d4 ==== */

void FUN_004360d4(HMENU menu,undefined4 param_2,undefined4 param_3,int param_4)

{
  int menu_item_count;
  char *string;
  UINT UVar1;
  UINT uId;
  
  menu_item_count = GetMenuItemCount(menu);
  string = (char *)(param_4 + -0x200);
  uId = 0;
  while (((int)uId < menu_item_count && (string < (char *)(param_4 - 5U)))) {
    FUN_00436670(*(int *)(param_4 + -0x204),menu,uId,0x400,(int)(param_4 - 5U) - (int)string,string)
    ;
    string = FUN_00408038(string);
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


/* ==== 00436174 FUN_00436174 ==== */

undefined4 FUN_00436174(int *param_1)

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
    FUN_004360d4(menu,extraout_EDX,extraout_ECX,(int)puVar3);
  }
  if (param_1[0xc] != 0) {
    pcVar1 = FUN_00403dfc((undefined *)param_1[0xc]);
    iVar2 = FUN_00408128(pcVar1,local_204);
    if (iVar2 == 0) {
      return 0;
    }
  }
  FUN_00403be8(param_1 + 0xc,local_204,0x200);
  return 1;
}


/* ==== 004361f8 TMainMenu.SetOwnerDraw ==== */

void TMainMenu_SetOwnerDraw(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x34)) {
    *(char *)(param_1 + 0x34) = param_2;
    FUN_00435bfc(param_1);
  }
  return;
}


/* ==== 00436208 FUN_00436208 ==== */

void FUN_00436208(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_a;
  char local_9;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  if (PTR_DAT_00446da0[9] != '\0') {
    local_9 = (char)param_1[9];
    local_a = *(undefined1 *)((int)param_1 + 0x35);
    puStack_14 = &LAB_00436278;
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
    puStack_10 = (undefined1 *)0x43627f;
    puStack_14 = (undefined1 *)0x43626e;
    TMainMenu_SetBiDiMode(local_8,local_9);
    *(undefined1 *)((int)local_8 + 0x35) = local_a;
    return;
  }
  return;
}


/* ==== 00436284 FUN_00436284 ==== */

void FUN_00436284(int *param_1,int param_2)

{
  param_1[0xb] = param_2;
  FUN_00436174(param_1);
  if ((PTR_DAT_00446da0[9] != '\0') && (param_2 != 0)) {
    if (*(char *)((int)param_1 + 0x35) == '\0') {
      FUN_00436208(param_1);
    }
    else {
      FUN_0043673c(param_1);
    }
  }
  return;
}


/* ==== 004362bc TMenu.virtual_030 ==== */

void TMenu_virtual_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,param_2,param_3);
  }
  return;
}


/* ==== 004362d4 TMenu.virtual_00c ==== */

void TMenu_virtual_00c(int *param_1)

{
  TComponent_virtual_00c((int)param_1);
  (**(code **)(*param_1 + 0x30))(param_1,0,0);
  return;
}


/* ==== 004362ec TMenu.virtual_038 ==== */

void TMenu_virtual_038(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if ((*(ushort *)(param_1 + 8) & 9) == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,param_3,param_4);
  }
  return;
}


/* ==== 00436334 TMainMenu.SetImages ==== */

void TMainMenu_SetImages(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00430bc0(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0x3c) = param_2;
  if (param_2 != 0) {
    FUN_00430c04(param_2,*(int *)(param_1 + 0x38));
    FUN_00413a98(*(int *)(param_1 + 0x3c),param_1,extraout_ECX);
  }
  FUN_00435bfc(param_1);
  return;
}


/* ==== 00436370 TMenu.virtual_010 ==== */

void TMenu_virtual_010(int param_1,int param_2,char param_3)

{
  TComponent_virtual_010(param_1,param_2,param_3);
  if ((param_2 == *(int *)(param_1 + 0x3c)) && (param_3 == '\x01')) {
    TMainMenu_SetImages(param_1,0);
  }
  return;
}


/* ==== 0043639c FUN_0043639c ==== */

undefined4 FUN_0043639c(int param_1)

{
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)(param_1 + 0x24) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}


/* ==== 004363b4 FUN_004363b4 ==== */

undefined4 FUN_004363b4(HMENU menu,uint param_2,int pos,byte param_4,int param_5)

{
  UINT UVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 & 0x10) == 0) {
    UVar1 = GetMenuItemID(menu,pos);
    if (UVar1 != 0xffffffff) {
      iVar3 = FUN_00435cac(*(int *)(param_5 + -4));
    }
  }
  else {
    GetSubMenu(menu,pos);
    iVar3 = FUN_00435cac(*(int *)(param_5 + -4));
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00439e44((uint)param_4,*(int *)(iVar3 + 0x24));
  }
  return uVar2;
}


/* ==== 00436410 FUN_00436410 ==== */

void FUN_00436410(HMENU menu,ushort param_2,int pos,undefined1 param_4,int param_5)

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
  puStack_24 = &LAB_004364e5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_2 & 0x10) == 0) {
    iVar1 = FUN_00435cac(*(int *)(param_5 + -4));
    uVar3 = extraout_EDX_00;
    if ((iVar1 != 0) && (iVar2 = FUN_00434938(iVar1), uVar3 = extraout_EDX_01, pos < iVar2)) {
      iVar1 = FUN_00434948(iVar1,pos);
      uVar3 = extraout_EDX_02;
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    GetSubMenu(menu,pos);
    iVar1 = FUN_00435cac(*(int *)(param_5 + -4));
    uVar3 = extraout_EDX;
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    FUN_00403b60((int *)&local_c,CONCAT31((int3)((uint)uVar3 >> 8),param_4));
    puVar4 = local_c;
    FUN_00403b60((int *)&local_10,
                 CONCAT31((int3)((uint)*(undefined1 **)(iVar1 + 0x24) >> 8),
                          **(undefined1 **)(iVar1 + 0x24)));
    iVar2 = FUN_00407b28(local_10,puVar4);
    if (iVar2 == 0) {
      FUN_00437264(*(int *)(iVar1 + 0x24),&local_14);
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004364ec;
  puStack_24 = (undefined1 *)0x4364e4;
  FUN_004039dc(&local_14,3);
  return;
}


/* ==== 004364f8 FUN_004364f8 ==== */

void FUN_004364f8(undefined4 param_1,int param_2)

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
      uVar4 = FUN_004363b4(*(HMENU *)(param_2 + 8),UVar3,UVar5,*(byte *)(param_2 + 4),
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
        cVar2 = FUN_00436410(*(HMENU *)(param_2 + 8),(ushort)UVar3,UVar5,
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


/* ==== 00436670 FUN_00436670 ==== */

int FUN_00436670(int param_1,HMENU menu,UINT param_3,UINT flags_val,int max,char *string)

{
  undefined4 uVar1;
  UINT UVar2;
  int iVar3;
  undefined4 local_8;
  
  uVar1 = FUN_00435ddc(param_1);
  if ((char)uVar1 == '\0') {
    iVar3 = GetMenuStringA(menu,param_3,string,max,flags_val);
  }
  else {
    local_8 = 0;
    UVar2 = GetMenuState(menu,param_3,flags_val);
    if ((UVar2 & 0x10) == 0) {
      UVar2 = GetMenuItemID(menu,param_3);
      if (UVar2 != 0xffffffff) {
        local_8 = FUN_00435cac(param_1);
      }
    }
    else {
      GetSubMenu(menu,param_3);
      local_8 = FUN_00435cac(param_1);
    }
    if (local_8 == 0) {
      iVar3 = 0;
    }
    else {
      *string = '\0';
      FUN_00408108(string,*(undefined **)(local_8 + 0x24),max);
      iVar3 = FUN_00408020(string);
    }
  }
  return iVar3;
}


/* ==== 00436718 TMainMenu.SetBiDiMode ==== */

void TMainMenu_SetBiDiMode(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[9]) {
    *(char *)(param_1 + 9) = param_2;
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    FUN_00436018(param_1);
  }
  return;
}


/* ==== 0043672c TMainMenu.SetParentBiDiMode ==== */

void TMainMenu_SetParentBiDiMode(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x35)) {
    *(char *)((int)param_1 + 0x35) = param_2;
    FUN_0043673c(param_1);
  }
  return;
}


/* ==== 0043673c FUN_0043673c ==== */

void FUN_0043673c(int *param_1)

{
  HANDLE pvVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    pvVar1 = FUN_00421a0c((HWND)param_1[0xb]);
    if (pvVar1 != (HANDLE)0x0) {
      TMainMenu_SetBiDiMode(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}


/* ==== 00436764 FUN_00436764 ==== */

void FUN_00436764(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    iVar1 = FUN_00402ea4(param_2,(int)&PTR_TControl_virtual_000_00420b14);
    TMainMenu_SetBiDiMode(param_1,*(char *)(iVar1 + 0x4f));
    *(undefined1 *)((int)param_1 + 0x35) = 1;
  }
  return;
}


/* ==== 00436790 TMainMenu.GetAutoHotkeys ==== */

undefined1 TMainMenu_GetAutoHotkeys(int param_1)

{
  return (&DAT_00446778)[*(byte *)(*(int *)(param_1 + 0x28) + 0x2f)];
}


/* ==== 004367a0 TMainMenu.SetAutoHotkeys ==== */

void TMainMenu_SetAutoHotkeys(int param_1,uint param_2)

{
  *(undefined *)(*(int *)(param_1 + 0x28) + 0x2f) = (&DAT_00446774)[param_2 & 0x7f];
  return;
}


/* ==== 004367b0 TMainMenu.GetAutoLineReduction ==== */

undefined1 TMainMenu_GetAutoLineReduction(int param_1)

{
  return (&DAT_00446778)[*(byte *)(*(int *)(param_1 + 0x28) + 0x30)];
}


/* ==== 004367c0 TMainMenu.SetAutoLineReduction ==== */

void TMainMenu_SetAutoLineReduction(int param_1,uint param_2)

{
  *(undefined *)(*(int *)(param_1 + 0x28) + 0x30) = (&DAT_00446774)[param_2 & 0x7f];
  return;
}


/* ==== 004367d0 TMainMenu.SetAutoMerge ==== */

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


/* ==== 004367f0 TMainMenu.virtual_038 ==== */

void TMainMenu_virtual_038(int *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (param_1[0xb] != 0) {
    uVar1 = FUN_00436174(param_1);
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


/* ==== 00436848 FUN_00436848 ==== */

void FUN_00436848(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00432ea4(*(int **)(param_1 + 0x28),*(int *)(param_2 + 0x28));
    return;
  }
  FUN_00432ea4(*(int **)(param_1 + 0x28),0);
  return;
}


/* ==== 00436864 FUN_00436864 ==== */

void FUN_00436864(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(*(int *)(param_1 + 0x28) + 0x5c) == *(int *)(param_2 + 0x28))) {
    FUN_00432ea4(*(int **)(param_1 + 0x28),0);
  }
  return;
}


/* ==== 00436880 FUN_00436880 ==== */

void FUN_00436880(int *param_1)

{
  (**(code **)(*param_1 + 0x38))(param_1,0,0,0);
  if ((HWND)param_1[0xb] != (HWND)0x0) {
    SendMessageA((HWND)param_1[0xb],0xb015,0,0);
  }
  return;
}


/* ==== 004368ac TMainMenu.virtual_034 ==== */

int TMainMenu_virtual_034(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    return *(int *)(param_1 + 0x48);
  }
  iVar1 = TMenu_virtual_034(param_1);
  return iVar1;
}


/* ==== 004368bc FUN_004368bc ==== */

void FUN_004368bc(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_004368e6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x10))();
  *in_FS_OFFSET = uStack_20;
  return;
}


/* ==== 00436908 TPopupList.virtual_010 ==== */

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
  puStack_48 = &LAB_00436e35;
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
          iVar4 = FUN_0040f024(local_8,j);
          bVar1 = FUN_00435d4c(iVar4);
          if (bVar1) goto LAB_00436e1f;
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
          iVar4 = FUN_0040f024(local_8,j);
          local_10 = (int *)FUN_00435cac(iVar4);
          if (local_10 != (int *)0x0) {
            local_18 = FUN_00416eac((int *)&PTR_TPersistent_virtual_000_00420138,'\x01',extraout_ECX
                                   );
            *in_FS_OFFSET = &stack0xffffffa8;
            saved_dc = SaveDC(*(HDC *)(local_28 + 0x18));
            uVar2 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xffffff9c;
            FUN_004174b0(local_18,*(int *)(local_28 + 0x18));
            TCanvas_SetFont((int)local_18);
            FUN_004370d8(local_10,(int)local_18,(undefined4 *)(local_28 + 0x1c),
                         CONCAT22((short)(local_28 >> 0x10),*(undefined2 *)(local_28 + 0x10)));
            *in_FS_OFFSET = uVar2;
            FUN_004174b0(local_18,0);
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
          iVar4 = FUN_0040f024(local_8,j);
          local_10 = (int *)FUN_00435cac(iVar4);
          if (local_10 != (int *)0x0) {
            hdc_val = GetWindowDC((HWND)local_8[4]);
            *in_FS_OFFSET = &stack0xffffffa8;
            local_18 = FUN_00416eac((int *)&PTR_TPersistent_virtual_000_00420138,'\x01',
                                    extraout_ECX_00);
            *in_FS_OFFSET = &stack0xffffff9c;
            saved_dc = SaveDC(hdc_val);
            *in_FS_OFFSET = &stack0xffffff90;
            FUN_004174b0(local_18,(int)hdc_val);
            TCanvas_SetFont((int)local_18);
            piVar3 = (int *)(local_2c + 0x10);
            FUN_0043458c(local_10,local_18,(int *)(local_2c + 0xc),piVar3);
            *in_FS_OFFSET = piVar3;
            FUN_004174b0(local_18,0);
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
          piVar3 = (int *)FUN_0040f024(local_8,j);
          iVar4 = (**(code **)(*piVar3 + 0x34))();
          if (iVar4 == *(int *)(local_24 + 0xc)) {
            iVar4 = FUN_0040f024(local_8,j);
            local_10 = *(int **)(iVar4 + 0x28);
          }
          else {
            iVar4 = FUN_0040f024(local_8,j);
            local_10 = (int *)FUN_00435cac(iVar4);
          }
          if (local_10 != (int *)0x0) {
            piVar3 = (int *)FUN_0040f024(local_8,j);
            UVar5 = FUN_00435cdc(piVar3,*(int *)(local_24 + 8),'\x01');
            if (UVar5 == 0) {
              piVar3 = (int *)FUN_0040f024(local_8,j);
              UVar5 = FUN_00435cdc(piVar3,*(int *)(local_24 + 0xc),'\0');
            }
            i_val = *(int *)(*(int *)PTR_DAT_00446d84 + 0x60);
            if (i_val != 0) {
              if (UVar5 == 0) {
                UVar5 = *(ULONG_PTR *)(i_val + 0x150);
              }
              if ((*(byte *)(i_val + 0x210) & 8) == 0) {
                FUN_00442664(*(int *)PTR_DAT_00446c80,UVar5);
              }
              else {
                FUN_00442670(*(int *)PTR_DAT_00446c80,8,UVar5);
              }
            }
            goto LAB_00436e1f;
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
        piVar3 = (int *)FUN_0040f024(local_8,j);
        uVar2 = FUN_00435d68(piVar3);
        if ((char)uVar2 != '\0') goto LAB_00436e1f;
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
        iVar4 = FUN_0040f024(local_8,j);
        local_10 = (int *)FUN_00435cac(iVar4);
        if (local_10 != (int *)0x0) {
          FUN_00421c50(*(undefined4 **)((int)local_10 + 0x4c),(int *)&local_34);
          FUN_0044295c(*(int **)PTR_DAT_00446c80,local_34);
          goto LAB_00436e1f;
        }
        j = j + 1;
        i_val = i_val + -1;
        piVar3 = (int *)0;
      } while (i_val != 0);
    }
    FUN_0044295c(*(int **)PTR_DAT_00446c80,(uint *)0x0);
  }
  else {
    puStack_44 = &stack0xfffffffc;
    if ((UVar6 == 0x120) && (i_val = param_1[2], puStack_44 = &stack0xfffffffc, -1 < i_val + -1)) {
      j = 0;
      puStack_44 = &stack0xfffffffc;
      do {
        local_30 = (int *)FUN_0040f024(local_8,j);
        UVar6 = (**(code **)(*local_30 + 0x34))();
        if ((UVar6 == param_2[2]) || (iVar4 = FUN_00435cac((int)local_30), iVar4 != 0)) {
          FUN_004364f8(local_30,(int)param_2);
          goto LAB_00436e1f;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  UVar6 = DefWindowProcA((HWND)local_8[4],*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar6;
LAB_00436e1f:
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_00436e3c;
  puStack_48 = (undefined1 *)0x436e34;
  FUN_004039b8((int *)&local_34);
  return;
}


/* ==== 00436e44 FUN_00436e44 ==== */

void FUN_00436e44(int *param_1,int param_2)

{
  HWND pHVar1;
  
  if (param_1[2] == 0) {
    pHVar1 = FUN_00439c8c();
    param_1[4] = (int)pHVar1;
  }
  FUN_0040eec8(param_1,param_2);
  return;
}


/* ==== 00436e6c FUN_00436e6c ==== */

void FUN_00436e6c(int *param_1,int param_2)

{
  FUN_0040f164(param_1,param_2);
  if (param_1[2] == 0) {
    FUN_00439d40((HWND)param_1[4]);
  }
  return;
}


/* ==== 00436e88 TPopupMenu.virtual_02c ==== */

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
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TMenu_virtual_02c(param_1,'\0',param_3);
  param_1[0x12] = -1;
  param_1[0x13] = -1;
  iVar1 = param_1[10];
  *(int **)(iVar1 + 0x84) = param_1;
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(*param_1 + 0x3c);
  param_1[0xb] = *(int *)(*(int *)PTR_DAT_00446c80 + 0x24);
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  FUN_00436e44(DAT_004477b4,(int)param_1);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00436efc TPopupMenu.Destroy ==== */

void TPopupMenu_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00436e6c(DAT_004477b4,(int)piVar1);
  TMenu_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


/* ==== 00436f30 TPopupMenu.virtual_03c ==== */

void TPopupMenu_virtual_03c(int param_1)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100));
  }
  return;
}


/* ==== 00436f44 TPopupMenu.GetHelpContext ==== */

undefined4 TPopupMenu_GetHelpContext(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48);
}


/* ==== 00436f4c TPopupMenu.SetHelpContext ==== */

void TPopupMenu_SetHelpContext(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48) = param_2;
  return;
}


/* ==== 00436f54 FUN_00436f54 ==== */

void FUN_00436f54(int *param_1)

{
  HANDLE pvVar1;
  
  if ((PTR_DAT_00446da0[9] != '\0') && (*(char *)((int)param_1 + 0x35) != '\0')) {
    pvVar1 = FUN_0043214c((POINT *)(param_1 + 0x12));
    if (pvVar1 == (HANDLE)0x0) {
      TMainMenu_SetBiDiMode(param_1,*(char *)(*(int *)PTR_DAT_00446c80 + 0x28));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
    else {
      TMainMenu_SetBiDiMode(param_1,*(char *)((int)pvVar1 + 0x4f));
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}


/* ==== 00436f9c FUN_00436f9c ==== */

uint FUN_00436f9c(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  undefined4 extraout_EDX;
  
  uVar2 = 0;
  if (PTR_DAT_00446da0[9] != '\0') {
    if (*(char *)(param_1 + 0x35) == '\0') {
      uVar2 = (uint)(*(char *)(param_1 + 0x24) == '\x01');
    }
    else {
      piVar1 = FUN_0043214c((POINT *)(param_1 + 0x48));
      if (piVar1 == (int *)0x0) {
        uVar2 = FUN_0044154c(*(int *)PTR_DAT_00446c80);
      }
      else {
        uVar2 = FUN_00402ef0(piVar1,extraout_EDX,extraout_ECX);
      }
    }
  }
  return uVar2;
}


/* ==== 00436fe8 TPopupMenu.virtual_040 ==== */

void TPopupMenu_virtual_040(int *param_1,int x_val,int y_val)

{
  uint flags_val;
  HMENU hMenu;
  int nReserved;
  HWND hWnd;
  RECT *prcRect;
  int local_18;
  int local_14;
  
  FUN_0040e594(x_val,y_val,&local_18);
  param_1[0x12] = local_18;
  param_1[0x13] = local_14;
  FUN_00436f54(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,param_1);
  FUN_00435454(param_1[10],'\0');
  FUN_00435924(param_1[10],'\0');
  FUN_00432f04((int *)param_1[10]);
  FUN_00436208(param_1);
  flags_val = FUN_00436f9c((int)param_1);
  flags_val = (uint)(*(ushort *)
                      (&DAT_0044684c + (uint)*(byte *)(param_1 + 0x14) * 2 + (flags_val & 0x7f) * 6)
                    | *(ushort *)(&DAT_00446858 + (uint)*(byte *)(param_1 + 0x16) * 2)) |
              (uint)*(byte *)((int)param_1 + 0x59) << 10;
  prcRect = (RECT *)0x0;
  hWnd = *(HWND *)(DAT_004477b4 + 0x10);
  nReserved = 0;
  hMenu = (HMENU)FUN_00432fe8(param_1[10]);
  TrackPopupMenu(hMenu,flags_val,x_val,y_val,nReserved,hWnd,prcRect);
  return;
}


/* ==== 0043709c FUN_0043709c ==== */

void FUN_0043709c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int j;
  int i_val;
  
  i_val = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 4),j);
      if (param_2 == *piVar1) {
        puVar2 = (undefined4 *)FUN_0040f024(*(undefined4 **)(param_1 + 4),j);
        *puVar2 = 0;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 004370d8 FUN_004370d8 ==== */

void FUN_004370d8(int *param_1,int param_2,undefined4 *param_3,uint param_4)

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
  if ((*(int *)PTR_DAT_00446b68 < 5) &&
     ((*(int *)PTR_DAT_00446b68 != 4 || (*(int *)PTR_DAT_00446cb4 < 1)))) {
    local_a = '\0';
  }
  else {
    local_a = '\x01';
  }
  local_8 = param_1;
  piVar1 = (int *)FUN_00402ef0(param_1,param_2,0);
  uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_virtual_000_00431b18);
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


/* ==== 004371cc FUN_004371cc ==== */

void FUN_004371cc(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int i_val;
  
  FUN_00403a0c(param_2,param_1);
  i_val = 1;
  do {
    iVar2 = FUN_00403c38(*param_2);
    if (iVar2 < i_val) {
      return;
    }
    bVar1 = *(byte *)(*param_2 + -1 + i_val);
    if (((byte)PTR_DAT_00446d90[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
      if (bVar1 == 0x26) {
        if ((PTR_DAT_00446da0[8] != '\0') && (1 < i_val)) {
          iVar2 = FUN_00403c38(*param_2);
          if ((1 < iVar2 - i_val) &&
             ((*(char *)(*param_2 + -2 + i_val) == '(' && (*(char *)(*param_2 + 1 + i_val) == ')')))
             ) {
            FUN_00403e80(param_2,i_val + -1,4);
            goto LAB_00437253;
          }
        }
        FUN_00403e80(param_2,i_val,1);
      }
    }
    else {
      i_val = i_val + 1;
    }
LAB_00437253:
    i_val = i_val + 1;
  } while( true );
}


/* ==== 00437264 FUN_00437264 ==== */

void FUN_00437264(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int i_val;
  
  FUN_004039b8(param_2);
  i_val = 1;
  iVar1 = FUN_00403c38(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + -1 + i_val);
      if (((byte)PTR_DAT_00446d90[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) == 0) {
        if (((*(char *)(param_1 + -1 + i_val) == '&') && (0 < iVar1 - i_val)) &&
           (i_val = i_val + 1, *(char *)(param_1 + -1 + i_val) != '&')) {
          FUN_00403b60(param_2,(uint)*(byte *)(param_1 + -1 + i_val));
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


/* ==== 004372c8 FUN_004372c8 ==== */

void FUN_004372c8(undefined4 *param_1,undefined4 *param_2)

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
  puStack_1c = &LAB_00437321;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004371cc(param_2,(int *)&local_8);
  puVar1 = local_8;
  FUN_004371cc(param_1,(int *)&local_c);
  FUN_00407b60(local_c,puVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00437328;
  puStack_1c = (undefined1 *)0x437320;
  FUN_004039dc((int *)&local_c,2);
  return;
}


