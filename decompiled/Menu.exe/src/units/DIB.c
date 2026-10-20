/* Menu.exe — units/DIB.pas: 75 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004547ac FUN_004547ac ==== */

void FUN_004547ac(int param_1,byte *param_2,byte *param_3,byte param_4)

{
  byte bVar1;
  byte extraout_AH;
  byte extraout_var;
  uint uVar2;
  int i_val;
  
  i_val = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < i_val) {
    do {
      FUN_00456a14(param_1);
      if (((extraout_var != param_2[2]) || (FUN_00456a14(param_1), extraout_AH != param_2[1])) ||
         (bVar1 = FUN_00456a14(param_1), bVar1 != *param_2)) {
        uVar2 = (uint)param_4;
        param_3[2] = param_3[2] + (char)(((uint)param_2[2] - (uint)param_3[2]) * uVar2 >> 8);
        param_3[1] = param_3[1] + (char)(((uint)param_2[1] - (uint)param_3[1]) * uVar2 >> 8);
        *param_3 = *param_3 + (char)(((uint)*param_2 - (uint)*param_3) * uVar2 >> 8);
      }
      param_2 = param_2 + 3;
      param_3 = param_3 + 4;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 00454850 FUN_00454850 ==== */

undefined1 FUN_00454850(int param_1,int *param_2,char param_3,char param_4)

{
  char cVar1;
  int i_val;
  int local_18;
  int local_14;
  code *local_10;
  undefined1 local_a;
  
  if ((*(int *)(param_1 + 0x8c) < param_2[0x23]) || (*(int *)(param_1 + 0x40) < param_2[0x10])) {
    FUN_00403c40("Assertion failure");
  }
  local_a = 1;
  i_val = param_2[0xf];
  if ((i_val < 0x18) || (*(int *)(param_1 + 0x3c) < 0x20)) {
    local_a = 0;
  }
  else {
    if (param_3 == '\0') {
      if (i_val == 0x20) {
        cVar1 = (**(code **)(*param_2 + 0x28))();
        if (cVar1 == '\0') {
          local_10 = (code *)&LAB_00454504;
        }
        else {
          local_10 = FUN_00454534;
        }
      }
      else {
        cVar1 = (**(code **)(*param_2 + 0x28))();
        if (cVar1 == '\0') {
          local_10 = FUN_00454684;
        }
        else {
          local_10 = FUN_004546c0;
        }
      }
    }
    else if (i_val == 0x20) {
      if (param_4 == -1) {
        local_10 = (code *)&LAB_00454584;
      }
      else {
        local_10 = FUN_004545f8;
      }
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x28))();
      if (cVar1 == '\0') {
        local_10 = FUN_00454738;
      }
      else {
        local_10 = FUN_004547ac;
      }
    }
    local_14 = FUN_004569f4((int)param_2);
    local_18 = FUN_004569f4(param_1);
    i_val = param_2[0x10] + -1;
    if (-1 < i_val) {
      do {
        (*local_10)(param_2,local_14,local_18,param_4);
        local_14 = local_14 + param_2[0x11];
        local_18 = local_18 + *(int *)(param_1 + 0x44);
        i_val = i_val + -1;
      } while (i_val != -1);
    }
  }
  return local_a;
}


/* ==== 00454b38 FUN_00454b38 ==== */

int FUN_00454b38(int param_1,int param_2)

{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 00454b40 FUN_00454b40 ==== */

void FUN_00454b40(int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  
  bVar1 = (byte)param_3;
  *param_4 = (1 << ((byte)param_1 & 0x1f)) + -1 << (bVar1 + (byte)param_2 & 0x1f);
  param_4[1] = (1 << ((byte)param_2 & 0x1f)) + -1 << (bVar1 & 0x1f);
  param_4[2] = (1 << (bVar1 & 0x1f)) + -1;
  param_4[3] = param_1;
  param_4[4] = param_2;
  param_4[5] = param_3;
  param_4[9] = 8 - param_1;
  param_4[10] = 8 - param_2;
  param_4[0xb] = 8 - param_3;
  param_4[6] = (param_3 + param_2) - (8 - param_1);
  param_4[7] = param_3 - (8 - param_2);
  param_4[8] = 8 - param_3;
  return;
}


/* ==== 00454bd0 FUN_00454bd0 ==== */

int FUN_00454bd0(uint param_1)

{
  int i_val;
  int j;
  
  i_val = 0;
  while ((i_val < 0x1f && ((1 << ((byte)i_val & 0x1f) & param_1) == 0))) {
    i_val = i_val + 1;
  }
  j = 0;
  while ((1 << ((byte)i_val & 0x1f) & param_1) != 0) {
    i_val = i_val + 1;
    j = j + 1;
  }
  return j;
}


/* ==== 00454c04 FUN_00454c04 ==== */

void FUN_00454c04(uint param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00454bd0(param_3);
  iVar2 = FUN_00454bd0(param_2);
  iVar3 = FUN_00454bd0(param_1);
  FUN_00454b40(iVar3,iVar2,iVar1,param_4);
  return;
}


/* ==== 00454c3c FUN_00454c3c ==== */

void FUN_00454c3c(undefined1 *param_1)

{
  undefined1 uVar1;
  int i_val;
  
  i_val = 0;
  do {
    uVar1 = (undefined1)i_val;
    param_1[2] = uVar1;
    param_1[1] = uVar1;
    *param_1 = uVar1;
    param_1[3] = 0;
    i_val = i_val + 1;
    param_1 = param_1 + 4;
  } while (i_val != 0x100);
  return;
}


/* ==== 00454c64 FUN_00454c64 ==== */

uint FUN_00454c64(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 local_4;
  
  local_4 = (uint)CONCAT21(CONCAT11(param_1,param_2),param_3);
  return local_4;
}


/* ==== 00454c7c FUN_00454c7c ==== */

uint FUN_00454c7c(undefined4 param_1)

{
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined4 local_4;
  
  uStack_7 = (undefined1)((uint)param_1 >> 8);
  uStack_6 = (undefined1)((uint)param_1 >> 0x10);
  local_4 = CONCAT31(CONCAT21((short)param_1,uStack_7),uStack_6) & 0xffffff;
  return local_4;
}


/* ==== 00454ca8 FUN_00454ca8 ==== */

void FUN_00454ca8(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int i_val;
  
  i_val = 0x100;
  do {
    uVar1 = FUN_00454c7c(*param_1);
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    i_val = i_val + -1;
  } while (i_val != 0);
  return;
}


/* ==== 00454cdc FUN_00454cdc ==== */

uint FUN_00454cdc(undefined4 param_1)

{
  undefined1 local_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined4 local_4;
  
  uStack_6 = (undefined1)((uint)param_1 >> 0x10);
  uStack_7 = (undefined1)((uint)param_1 >> 8);
  local_8 = (undefined1)param_1;
  local_4 = (uint)CONCAT12(local_8,CONCAT11(uStack_7,uStack_6));
  return local_4;
}


/* ==== 00454d08 FUN_00454d08 ==== */

void FUN_00454d08(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int i_val;
  
  i_val = 0x100;
  do {
    uVar1 = FUN_00454cdc(*param_1);
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    i_val = i_val + -1;
  } while (i_val != 0);
  return;
}


/* ==== 00454e34 TPaletteItem.Destroy ==== */

void TPaletteItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  DeleteObject((HGDIOBJ)piVar1[4]);
  TCollectionItem_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00454e68 FUN_00454e68 ==== */

void FUN_00454e68(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


/* ==== 00454e6c FUN_00454e6c ==== */

void FUN_00454e6c(int *param_1)

{
  param_1[5] = param_1[5] + -1;
  if (param_1[5] < 1) {
    FUN_00402f9c(param_1);
  }
  return;
}


/* ==== 00454e80 FUN_00454e80 ==== */

int * FUN_00454e80(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  piVar1 = FUN_00410d28((int *)&PTR_TPersistent_virtual_000_0040eccc,'\x01',
                        (int)&PTR_TPersistent_virtual_000_00454d88);
  param_1[1] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00454ed0 TPaletteManager.Destroy ==== */

void TPaletteManager_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[1]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00454f04 FUN_00454f04 ==== */

int FUN_00454f04(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  HPALETTE pHVar5;
  int j;
  PALETTEENTRY *pPVar6;
  int iVar7;
  PALETTEENTRY *pPVar8;
  byte bVar9;
  PALETTEENTRY local_818 [256];
  LOGPALETTE local_418 [128];
  int i_val;
  int local_10;
  byte *local_c;
  int local_8;
  
  bVar9 = 0;
  pbVar1 = param_2;
  j = param_3;
  iVar7 = param_3;
  if (-1 < param_3 + -1) {
    do {
      iVar7 = iVar7 + (uint)pbVar1[2] + (uint)pbVar1[1] + (uint)*pbVar1;
      j = j + -1;
      pbVar1 = pbVar1 + 4;
    } while (j != 0);
  }
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  j = FUN_00410f08(*(int *)(param_1 + 4));
  if (-1 < j + -1) {
    i_val = 0;
    do {
      iVar2 = FUN_00410f10(*(int *)(local_8 + 4),i_val);
      if (((iVar7 == *(int *)(iVar2 + 0xc)) && (*(int *)(iVar2 + 0x418) == local_10)) &&
         (uVar3 = FUN_00408298((int *)(iVar2 + 0x18),(int *)local_c,local_10 << 2),
         (char)uVar3 != '\0')) {
        FUN_00454e68(iVar2);
        return *(int *)(iVar2 + 0x10);
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  piVar4 = TCollectionItem_virtual_018
                     ((int *)&PTR_TPersistent_virtual_000_00454d88,'\x01',*(int **)(local_8 + 4));
  piVar4[3] = iVar7;
  FUN_004028d8((undefined4 *)local_c,piVar4 + 6,local_10 << 2);
  piVar4[0x106] = local_10;
  local_418[0].palVersion = 0x300;
  local_418[0].palNumEntries = (WORD)local_10;
  FUN_00454d08((undefined4 *)local_c,(uint *)local_818);
  pPVar6 = local_818;
  pPVar8 = local_418[0].palPalEntry;
  for (j = 0x100; j != 0; j = j + -1) {
    *pPVar8 = *pPVar6;
    pPVar6 = pPVar6 + (uint)bVar9 * -2 + 1;
    pPVar8 = pPVar8 + (uint)bVar9 * -2 + 1;
  }
  pHVar5 = CreatePalette(local_418);
  piVar4[4] = (int)pHVar5;
  FUN_00454e68((int)piVar4);
  return piVar4[4];
}


/* ==== 00455030 FUN_00455030 ==== */

void FUN_00455030(int param_1,int *param_2)

{
  int i_val;
  int *piVar1;
  int j;
  
  if ((*param_2 != 0) && (i_val = FUN_00410f08(*(int *)(param_1 + 4)), -1 < i_val + -1)) {
    j = 0;
    do {
      piVar1 = (int *)FUN_00410f10(*(int *)(param_1 + 4),j);
      if (*param_2 == piVar1[4]) {
        *param_2 = 0;
        FUN_00454e6c(piVar1);
        return;
      }
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 00455080 FUN_00455080 ==== */

int * FUN_00455080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_004ac8e4 == (int *)0x0) {
    DAT_004ac8e4 = FUN_00454e80((int *)&DAT_00454e24,'\x01',param_3);
  }
  return DAT_004ac8e4;
}


/* ==== 004550a4 FUN_004550a4 ==== */

int * FUN_004550a4(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  int i_val;
  char extraout_DL;
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 in_stack_fffffbb0;
  undefined4 in_stack_fffffbb4;
  int local_434 [12];
  undefined4 local_404 [256];
  
  bVar6 = 0;
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffbb0,in_stack_fffffbb4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0x10b) = 1;
  FUN_00454c3c((undefined1 *)local_404);
  FUN_00455f14((int)param_1,local_404);
  FUN_00454c3c((undefined1 *)local_404);
  puVar2 = local_404;
  puVar4 = (undefined4 *)((int)param_1 + 0x15);
  for (i_val = 0x100; i_val != 0; i_val = i_val + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  FUN_00454b40(8,8,8,local_434);
  piVar3 = local_434;
  piVar5 = param_1 + 0x111;
  for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + (uint)bVar6 * -2 + 1;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_fffffbb0;
  }
  return param_1;
}


/* ==== 00455154 FUN_00455154 ==== */

void FUN_00455154(int *param_1,int param_2,undefined4 param_3,char param_4,char param_5,
                 undefined4 *param_6,int *param_7,int param_8)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  HDC hdc;
  HBITMAP pHVar7;
  HGDIOBJ select_object;
  int i_val;
  undefined4 *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined *in_stack_ffffffd0;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  bVar9 = 0;
  local_20 = (undefined4 *)&stack0xfffffffc;
  i_val = 6;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  LOCK();
  UNLOCK();
  local_24 = (undefined4 *)&LAB_0045564d;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  FUN_004550a4(param_1,-1,0);
  if (param_8 < 0x11) {
    if (param_8 == 0x10) {
      if ((((*param_7 != 0x7c00) || (param_7[1] != 0x3e0)) || (param_7[2] != 0x1f)) &&
         (((*param_7 != 0xf800 || (param_7[1] != 0x7e0)) || (param_7[2] != 0x1f)))) {
        FUN_00405808((undefined4 *)PTR_LAB_004ab6d8,(int *)&local_20);
        piVar3 = FUN_0040b5d8((int *)&DAT_004166f4,'\x01',local_20);
        FUN_004036f4(piVar3);
      }
      goto LAB_0045539e;
    }
    if (param_8 == 1) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00405808((undefined4 *)PTR_LAB_004ab6d8,(int *)&stack0xffffffec);
        piVar3 = FUN_0040b5d8((int *)&DAT_004166f4,'\x01',unaff_EBX);
        FUN_004036f4(piVar3);
      }
      goto LAB_0045539e;
    }
    if (param_8 == 4) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00405808((undefined4 *)PTR_LAB_004ab6d8,(int *)&stack0xffffffe8);
        piVar3 = FUN_0040b5d8((int *)&DAT_004166f4,'\x01',unaff_ESI);
        FUN_004036f4(piVar3);
      }
      goto LAB_0045539e;
    }
    if (param_8 == 8) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00405808((undefined4 *)PTR_LAB_004ab6d8,(int *)&stack0xffffffe4);
        piVar3 = FUN_0040b5d8((int *)&DAT_004166f4,'\x01',unaff_EDI);
        FUN_004036f4(piVar3);
      }
      goto LAB_0045539e;
    }
  }
  else {
    if (param_8 == 0x18) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00405808((undefined4 *)PTR_LAB_004ab6d8,(int *)&local_24);
        piVar3 = FUN_0040b5d8((int *)&DAT_004166f4,'\x01',local_24);
        FUN_004036f4(piVar3);
      }
      goto LAB_0045539e;
    }
    if (param_8 == 0x20) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00405808((undefined4 *)PTR_LAB_004ab6d8,(int *)&local_28);
        piVar3 = FUN_0040b5d8((int *)&DAT_004166f4,'\x01',local_28);
        FUN_004036f4(piVar3);
      }
      goto LAB_0045539e;
    }
  }
  puVar11 = &stack0xffffffd0;
  in_stack_ffffffd0 = (undefined *)0x0;
  pbVar10 = (byte *)0x45538a;
  FUN_00405808((undefined4 *)PTR_PTR_004ab6d4,(int *)&stack0xffffffcc);
  uVar4 = FUN_0040b614((int)&DAT_004166f4,'\x01',pbVar10,in_stack_ffffffd0,puVar11);
  FUN_004036f4(uVar4);
LAB_0045539e:
  param_1[2] = param_8;
  param_1[0x10a] = 0;
  param_1[0x11f] = param_2;
  uVar5 = param_2 * param_8 + 0x1fU >> 5;
  param_1[0x120] = uVar5 * 4;
  param_1[0x10c] = uVar5 * -4;
  param_1[0x11d] = param_1[0x120] * param_1[0x10a];
  if ((param_8 == 0x10) || (param_8 == 0x20)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  piVar3 = param_7;
  piVar8 = param_1 + 0x111;
  for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
    *piVar8 = *piVar3;
    piVar3 = piVar3 + (uint)bVar9 * -2 + 1;
    piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
  }
  param_1[0x10f] = 0;
  if (param_1[2] < 9) {
    param_1[0x10f] = 1 << ((byte)param_1[2] & 0x1f);
  }
  param_1[4] = 0x28;
  if (bVar1) {
    param_1[4] = param_1[4] + 0xc;
  }
  param_1[4] = param_1[4] + param_1[0x10f] * 4;
  puVar6 = (undefined4 *)FUN_0040277c(param_1[4]);
  param_1[3] = (int)puVar6;
  FUN_00402c30(puVar6,param_1[4],0);
  puVar6 = (undefined4 *)param_1[3];
  *puVar6 = 0x28;
  puVar6[1] = param_1[0x11f];
  puVar6[2] = param_1[0x10a];
  *(undefined2 *)(puVar6 + 3) = 1;
  *(short *)((int)puVar6 + 0xe) = (short)param_1[2];
  if (bVar1) {
    puVar6[4] = 3;
  }
  else if ((param_1[2] == 4) && (param_4 != '\0')) {
    puVar6[4] = 2;
  }
  else if ((param_1[2] == 8) && (param_4 != '\0')) {
    puVar6[4] = 1;
  }
  else {
    puVar6[4] = 0;
  }
  puVar6[5] = param_1[0x11d];
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  i_val = 0x28;
  if (bVar1) {
    i_val = param_1[3];
    *(int *)(i_val + 0x28) = *param_7;
    *(int *)(i_val + 0x2c) = param_7[1];
    *(int *)(i_val + 0x30) = param_7[2];
    i_val = 0x34;
  }
  param_1[0x106] = i_val;
  puVar6 = (undefined4 *)((int)param_1 + 0x15);
  for (i_val = 0x100; i_val != 0; i_val = i_val + -1) {
    *puVar6 = *param_6;
    param_6 = param_6 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  FUN_004028d8((undefined4 *)((int)param_1 + 0x15),(undefined4 *)(param_1[3] + param_1[0x106]),
               param_1[0x10f] << 2);
  *(bool *)(param_1 + 0x107) = *(int *)(param_1[3] + 0x10) - 1U < 2;
  if ((param_5 == '\0') && ((char)param_1[0x107] == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x10b) = uVar2;
  if (param_4 == '\0') {
    if (param_5 == '\0') {
      hdc = CreateCompatibleDC((HDC)0x0);
      param_1[0x108] = (int)hdc;
      pHVar7 = CreateDIBSection(hdc,(BITMAPINFO *)param_1[3],0,(void **)(param_1 + 0x110),
                                (HANDLE)0x0,0);
      param_1[0x109] = (int)pHVar7;
      if (pHVar7 == (HBITMAP)0x0) {
        in_stack_ffffffd0 = &DAT_00455668;
        puVar11 = &stack0xffffffd0;
        pbVar10 = (byte *)0x0;
        FUN_00405808((undefined4 *)PTR_PTR_004ab8e0,(int *)&stack0xffffffc8);
        uVar4 = FUN_0040b614((int)&DAT_0040e9b0,'\x01',pbVar10,pbVar10,puVar11);
        FUN_004036f4(uVar4);
      }
      select_object = SelectObject((HDC)param_1[0x108],(HGDIOBJ)param_1[0x109]);
      param_1[0x10d] = (int)select_object;
    }
    else {
      i_val = FUN_0040277c(param_1[0x11d]);
      param_1[0x110] = i_val;
      if (i_val == 0) {
        FUN_0040b5cc();
      }
    }
  }
  param_1[0x11e] = (param_1[0x10a] + -1) * param_1[0x120] + param_1[0x110];
  *in_FS_OFFSET = in_stack_ffffffd0;
  local_28 = (undefined4 *)&LAB_00455654;
  FUN_00403c80((int *)&stack0xffffffc8,2);
  FUN_00403c80((int *)&local_28,6);
  return;
}


/* ==== 0045566c FUN_0045566c ==== */

void FUN_0045566c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x474) == 0) {
    FUN_004550a4(param_1,-1,param_3);
    *(char *)(param_1 + 0x10b) = (char)param_3;
  }
  else {
    FUN_00455154(param_1,*(int *)(param_2 + 0x47c),*(undefined4 *)(param_2 + 0x428),
                 *(char *)(param_2 + 0x41c),(char)param_3,(undefined4 *)(param_2 + 0x15),
                 (int *)(param_2 + 0x444),*(int *)(param_2 + 8));
    if ((char)param_1[0x107] == '\0') {
      FUN_004028d8(*(undefined4 **)(param_2 + 0x440),(undefined4 *)param_1[0x110],
                   *(uint *)(param_1[3] + 0x14));
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x14);
      *(int *)(param_1[3] + 0x14) = iVar1;
      iVar1 = FUN_0040277c(iVar1);
      param_1[0x110] = iVar1;
      FUN_004028d8(*(undefined4 **)(param_2 + 0x440),(undefined4 *)param_1[0x110],
                   *(uint *)(param_1[3] + 0x14));
    }
  }
  return;
}


/* ==== 00455714 FUN_00455714 ==== */

void FUN_00455714(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint i_val;
  byte *pbVar6;
  byte *pbVar7;
  int in_stack_00000004;
  uint k;
  int j;
  byte local_5;
  
  pbVar6 = *(byte **)(*(int *)(in_stack_00000004 + -4) + 0x440);
  i_val = 0;
  bVar3 = false;
  j = 0;
  do {
    bVar5 = pbVar6[1];
    pbVar7 = pbVar6 + 2;
    if (*pbVar6 == 0) {
      if (bVar5 == 0) {
        i_val = 0;
        bVar3 = false;
        j = j + 1;
      }
      else {
        if (bVar5 == 1) {
          return;
        }
        if (bVar5 == 2) {
          j = j + 2;
          pbVar7 = pbVar6 + 4;
        }
        else {
          iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x440);
          iVar2 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x480);
          local_5 = 0;
          k = (uint)bVar5;
          if (-1 < (int)(k - 1)) {
            bVar4 = false;
            do {
              if (bVar4) {
                local_5 = local_5 << 4;
              }
              else {
                local_5 = *pbVar7;
                pbVar7 = pbVar7 + 1;
              }
              pbVar6 = (byte *)((i_val >> 1) + iVar1 + iVar2 * j);
              if (bVar3) {
                *pbVar6 = *pbVar6 & 0xf0 | local_5 >> 4;
              }
              else {
                *pbVar6 = *pbVar6 & 0xf | local_5 & 0xf0;
              }
              i_val = i_val + 1;
              bVar3 = (bool)(bVar3 ^ 1);
              bVar4 = (bool)(bVar4 ^ 1);
              k = k - 1;
            } while (k != 0);
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x440);
      iVar2 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x480);
      k = (uint)*pbVar6;
      if (-1 < (int)(k - 1)) {
        do {
          pbVar6 = (byte *)((i_val >> 1) + iVar1 + iVar2 * j);
          if (bVar3) {
            *pbVar6 = *pbVar6 & 0xf0 | bVar5 >> 4;
          }
          else {
            *pbVar6 = *pbVar6 & 0xf | bVar5 & 0xf0;
          }
          i_val = i_val + 1;
          bVar3 = (bool)(bVar3 ^ 1);
          bVar5 = bVar5 >> 4 | bVar5 << 4;
          k = k - 1;
        } while (k != 0);
      }
    }
    pbVar6 = pbVar7 + ((uint)pbVar7 & 1);
  } while( true );
}


/* ==== 00455884 FUN_00455884 ==== */

void FUN_00455884(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int in_stack_00000004;
  int i_val;
  
  puVar6 = *(undefined4 **)(*(int *)(in_stack_00000004 + -8) + 0x440);
  pbVar5 = *(byte **)(*(int *)(in_stack_00000004 + -4) + 0x440);
  i_val = 0;
  do {
    bVar1 = *pbVar5;
    bVar2 = pbVar5[1];
    pbVar4 = pbVar5 + 2;
    if (bVar1 == 0) {
      if (bVar2 == 0) {
        i_val = i_val + 1;
        puVar6 = (undefined4 *)
                 (*(int *)(*(int *)(in_stack_00000004 + -8) + 0x440) +
                 *(int *)(*(int *)(in_stack_00000004 + -8) + 0x480) * i_val);
      }
      else {
        if (bVar2 == 1) {
          return;
        }
        if (bVar2 == 2) {
          i_val = i_val + 2;
          pbVar4 = pbVar5 + 4;
          puVar6 = (undefined4 *)
                   (*(int *)(*(int *)(in_stack_00000004 + -8) + 0x440) +
                   *(int *)(*(int *)(in_stack_00000004 + -8) + 0x480) * i_val);
        }
        else {
          uVar3 = (uint)bVar2;
          FUN_004028d8((undefined4 *)pbVar4,puVar6,uVar3);
          puVar6 = (undefined4 *)((int)puVar6 + uVar3);
          pbVar4 = pbVar4 + uVar3;
        }
      }
    }
    else {
      FUN_00402c30(puVar6,(uint)bVar1,bVar2);
      puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar1);
    }
    pbVar5 = pbVar4 + ((uint)pbVar4 & 1);
  } while( true );
}


/* ==== 00455970 FUN_00455970 ==== */

void FUN_00455970(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x41c) == '\0') {
    FUN_0045566c(param_1,param_2,param_3);
  }
  else {
    FUN_00455154(param_1,*(int *)(param_2 + 0x47c),*(undefined4 *)(param_2 + 0x428),'\0',
                 (char)param_3,(undefined4 *)(param_2 + 0x15),(int *)(param_2 + 0x444),
                 *(int *)(param_2 + 8));
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x10);
    if (iVar1 == 1) {
      FUN_00455884();
    }
    else if (iVar1 == 2) {
      FUN_00455714();
    }
    else {
      FUN_0045566c(param_1,param_2,param_3);
    }
  }
  return;
}


/* ==== 00455a04 FUN_00455a04 ==== */

void FUN_00455a04(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_stack_00000004;
  
  piVar3 = (int *)(in_stack_00000004 + -0x2c);
  iVar1 = *(int *)(in_stack_00000004 + -0x14);
  *(int *)(*piVar3 + 0x474) = iVar1;
  uVar2 = FUN_0040277c(iVar1);
  *(undefined4 *)(*piVar3 + 0x440) = uVar2;
  *(undefined4 *)(*(int *)(*piVar3 + 0xc) + 0x14) = *(undefined4 *)(*piVar3 + 0x474);
  FUN_004126b8(*(int **)(in_stack_00000004 + -0x30),*(undefined4 *)(*piVar3 + 0x440),
               *(int *)(*piVar3 + 0x474));
  return;
}


/* ==== 00455a5c FUN_00455a5c ==== */

void FUN_00455a5c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_stack_00000004;
  
  piVar3 = (int *)(in_stack_00000004 + -0x2c);
  iVar1 = *(int *)(in_stack_00000004 + -0x14);
  *(int *)(*piVar3 + 0x474) = iVar1;
  uVar2 = FUN_0040277c(iVar1);
  *(undefined4 *)(*piVar3 + 0x440) = uVar2;
  *(undefined4 *)(*(int *)(*piVar3 + 0xc) + 0x14) = *(undefined4 *)(*piVar3 + 0x474);
  FUN_004126b8(*(int **)(in_stack_00000004 + -0x30),*(undefined4 *)(*piVar3 + 0x440),
               *(int *)(*piVar3 + 0x474));
  return;
}


/* ==== 00455ab4 FUN_00455ab4 ==== */

void FUN_00455ab4(void)

{
  uint uVar1;
  int i_val;
  int j;
  int in_stack_00000004;
  
  uVar1 = *(uint *)(in_stack_00000004 + -0x20);
  if ((int)uVar1 < 0) {
    i_val = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        FUN_004126b8(*(int **)(in_stack_00000004 + -0x30),
                     *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x478) +
                     *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x430) * j,
                     *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x480));
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  else {
    FUN_004126b8(*(int **)(in_stack_00000004 + -0x30),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + -0x2c) + 0x440),
                 *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x474));
  }
  return;
}


/* ==== 00455b38 FUN_00455b38 ==== */

void FUN_00455b38(int *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined1 *puVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_7a8;
  undefined1 *puStack_7a4;
  undefined1 *puStack_7a0;
  undefined4 *local_790;
  undefined4 *local_78c;
  undefined4 *local_788;
  int local_784 [12];
  uint local_754 [256];
  uint local_354;
  uint local_350;
  uint local_34c;
  undefined1 local_348 [772];
  ushort local_44;
  ushort local_42;
  ushort local_3e;
  int i_val;
  char local_35;
  int *local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  ushort local_1e;
  int local_1c;
  int local_c;
  
  puStack_7a0 = &stack0xfffffffc;
  local_790 = (undefined4 *)0x0;
  local_78c = (undefined4 *)0x0;
  local_788 = (undefined4 *)0x0;
  puStack_7a4 = &LAB_00455e26;
  uStack_7a8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7a8;
  local_35 = param_3;
  local_34 = param_2;
  local_30 = param_1;
  iVar2 = (**(code **)(*param_2 + 4))(param_2,&local_2c,4);
  if (iVar2 == 0) {
    FUN_004550a4(local_30,-1,extraout_ECX);
  }
  else {
    if (iVar2 != 4) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&local_788);
      piVar3 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',local_788);
      FUN_004036f4(piVar3);
    }
    bVar1 = false;
    if (local_2c == 0xc) {
      FUN_004126b8(local_34,&local_44,8);
      local_c = 0;
      local_1c = 0;
      local_1e = local_3e;
      local_24 = (uint)local_42;
      local_28 = (uint)local_44;
      bVar1 = true;
    }
    else if (local_2c == 0x28) {
      FUN_004126b8(local_34,&local_28,0x24);
    }
    else {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&local_78c);
      piVar3 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',local_78c);
      FUN_004036f4(piVar3);
    }
    if (local_1c == 3) {
      FUN_004126b8(local_34,&local_354,0xc);
      FUN_00454c04(local_354,local_350,local_34c,local_784);
    }
    else if (local_1e == 0x10) {
      FUN_00454b40(5,5,5,local_784);
    }
    else if (local_1e == 0x20) {
      FUN_00454b40(8,8,8,local_784);
    }
    else {
      FUN_00454b40(8,8,8,local_784);
    }
    iVar2 = local_c;
    if ((local_c == 0) && (local_1e < 9)) {
      iVar2 = 1 << ((byte)local_1e & 0x1f);
    }
    if (0x100 < iVar2) {
      iVar2 = 0x100;
    }
    FUN_00402c30(local_754,0x400,0);
    if (bVar1) {
      FUN_004126b8(local_34,local_348,iVar2 * 3);
      if (-1 < iVar2 + -1) {
        i_val = iVar2;
        puVar5 = local_348;
        puVar6 = local_754;
        do {
          uVar4 = FUN_00454c64(puVar5[2],puVar5[1],*puVar5);
          *puVar6 = uVar4;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 3;
          i_val = i_val + -1;
        } while (i_val != 0);
      }
    }
    else {
      FUN_004126b8(local_34,local_754,iVar2 << 2);
    }
    FUN_00455154(local_30,local_28,(local_24 ^ (int)local_24 >> 0x1f) - ((int)local_24 >> 0x1f),
                 local_1c - 1U < 2,local_35,local_754,local_784,(uint)local_1e);
    if (local_1c == 0) {
      FUN_00455ab4();
    }
    else if (local_1c == 1) {
      FUN_00455a5c();
    }
    else if (local_1c == 2) {
      FUN_00455a04();
    }
    else if (local_1c == 3) {
      FUN_00455ab4();
    }
    else {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&local_790);
      piVar3 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',local_790);
      FUN_004036f4(piVar3);
    }
  }
  *in_FS_OFFSET = uStack_7a8;
  puStack_7a0 = &LAB_00455e2d;
  puStack_7a4 = (undefined1 *)0x455e25;
  FUN_00403c80((int *)&local_790,3);
  return;
}


/* ==== 00455e34 TDIBSharedImage.Destroy ==== */

void TDIBSharedImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  BOOL BVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  byte extraout_DL;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1[0x109] == 0) {
    BVar2 = FUN_00402794(piVar1[0x110]);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  else {
    if ((HGDIOBJ)piVar1[0x10d] != (HGDIOBJ)0x0) {
      SelectObject((HDC)piVar1[0x108],(HGDIOBJ)piVar1[0x10d]);
    }
    BVar2 = DeleteObject((HGDIOBJ)piVar1[0x109]);
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
  }
  piVar3 = FUN_00455080(BVar2,uVar5,uVar4);
  FUN_00455030((int)piVar3,piVar1 + 0x10e);
  if ((HDC)piVar1[0x108] != (HDC)0x0) {
    DeleteDC((HDC)piVar1[0x108]);
  }
  FUN_00402794(piVar1[3]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00455ec0 TDIBSharedImage.virtual_000 ==== */

void TDIBSharedImage_virtual_000(void)

{
  return;
}


/* ==== 00455ec4 FUN_00455ec4 ==== */

undefined4 FUN_00455ec4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (0 < *(int *)(param_1 + 0x43c)) {
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 0;
      piVar1 = FUN_00455080(param_1,param_2,param_3);
      uVar2 = FUN_00455030((int)piVar1,(int *)(param_1 + 0x438));
      piVar1 = FUN_00455080(uVar2,extraout_EDX,extraout_ECX);
      iVar3 = FUN_00454f04((int)piVar1,(byte *)(param_1 + 0x15),*(int *)(param_1 + 0x43c));
      *(int *)(param_1 + 0x438) = iVar3;
    }
    return *(undefined4 *)(param_1 + 0x438);
  }
  return 0;
}


/* ==== 00455f14 FUN_00455f14 ==== */

void FUN_00455f14(int param_1,undefined4 *param_2)

{
  int i_val;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x15);
  for (i_val = 0x100; i_val != 0; i_val = i_val + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  if ((0 < *(int *)(param_1 + 0x474)) && (0 < *(int *)(param_1 + 0x43c))) {
    SetDIBColorTable(*(HDC *)(param_1 + 0x420),0,0x100,(RGBQUAD *)(param_1 + 0x15));
    FUN_004028d8((undefined4 *)(param_1 + 0x15),
                 (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x418)),
                 *(int *)(param_1 + 0x43c) << 2);
  }
  return;
}


/* ==== 00455f74 FUN_00455f74 ==== */

int * FUN_00455f74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_004ac8e8 == (int *)0x0) {
    DAT_004ac8e8 = FUN_004550a4((int *)&PTR_TDIBSharedImage_virtual_000_00454a44,'\x01',param_3);
    FUN_0041cf10((int)DAT_004ac8e8);
  }
  return DAT_004ac8e8;
}


/* ==== 00455fa4 TDIB.virtual_00c ==== */

int * TDIB_virtual_00c(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar1 = TGraphic_virtual_00c(param_1,'\0',param_3);
  piVar1 = FUN_00455f74(piVar1,extraout_EDX,extraout_ECX_00);
  FUN_00457048((int)param_1,(int)piVar1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00455fec TDIB.Destroy ==== */

void TDIB_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  piVar2 = FUN_00455f74(piVar1,extraout_EDX,extraout_ECX);
  FUN_00457048((int)piVar1,(int)piVar2);
  FUN_00402f9c((int *)piVar1[8]);
  TPersistent_Destroy(piVar1,(byte)extraout_EDX & 0xfc);
  if ('\0' < (char)(byte)extraout_EDX) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0045602c FUN_0045602c ==== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0045602c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HPALETTE hpal;
  HANDLE h;
  undefined4 *puVar1;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX_01;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  byte bVar9;
  UINT iStart;
  UINT cEntries;
  tagPALETTEENTRY *pPalEntries;
  undefined1 *pv;
  int local_c34 [12];
  uint local_c04 [256];
  tagPALETTEENTRY local_804 [256];
  undefined1 local_404 [4];
  int local_400;
  int local_3fc;
  ushort local_3f2;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  
  bVar9 = 0;
  piVar6 = (int *)(param_4 + -4);
  pPalEntries = local_804;
  cEntries = 0x100;
  iStart = 0;
  hpal = (HPALETTE)(**(code **)(*param_1 + 0x24))();
  GetPaletteEntries(hpal,iStart,cEntries,pPalEntries);
  FUN_00454ca8(local_804,local_c04);
  puVar4 = local_c04;
  puVar7 = (uint *)(*piVar6 + 0x94);
  for (i_val = 0x100; i_val != 0; i_val = i_val + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  FUN_00457298((int *)*piVar6);
  pv = local_404;
  i_val = 0x400;
  h = (HANDLE)(**(code **)(*param_1 + 0x60))();
  i_val = GetObjectA(h,i_val,pv);
  if (i_val == 0x18) {
    if (local_3f2 == 0x10) {
      FUN_00454b40(5,5,5,local_c34);
      piVar5 = local_c34;
      piVar8 = (int *)(*piVar6 + 0x494);
      for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
        *piVar8 = *piVar5;
        piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
    }
    else {
      FUN_00454b40(8,8,8,local_c34);
      piVar5 = local_c34;
      piVar8 = (int *)(*piVar6 + 0x494);
      for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
        *piVar8 = *piVar5;
        piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
    }
    FUN_00457194((int *)*piVar6,local_400,local_3fc,(uint)local_3f2);
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
  }
  else {
    if (i_val != 0x54) {
      return;
    }
    if (local_3f2 < 0x18) {
      if (local_3f2 < 9) {
        FUN_00454b40(8,8,8,local_c34);
        piVar5 = local_c34;
        piVar8 = (int *)(*piVar6 + 0x494);
        for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
          *piVar8 = *piVar5;
          piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
          piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
        }
      }
      else {
        FUN_00454b40(local_3c4,local_3c0,local_3bc,local_c34);
        piVar5 = local_c34;
        piVar8 = (int *)(*piVar6 + 0x494);
        for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
          *piVar8 = *piVar5;
          piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
          piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
        }
      }
    }
    else {
      FUN_00454b40(8,8,8,local_c34);
      piVar5 = local_c34;
      piVar8 = (int *)(*piVar6 + 0x494);
      for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
        *piVar8 = *piVar5;
        piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
    }
    FUN_00457194((int *)*piVar6,local_400,local_3fc,(uint)local_3f2);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  puVar1 = (undefined4 *)FUN_00456928((int *)*piVar6,uVar3,uVar2);
  FUN_00402c30(puVar1,*(uint *)(*piVar6 + 0x7c),0);
  piVar6 = (int *)FUN_00456800(*piVar6,extraout_EDX_01,extraout_ECX_01);
  FUN_00418f9c(piVar6,0,0,param_1);
  return;
}


/* ==== 00456234 FUN_00456234 ==== */

void FUN_00456234(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar6;
  int *piVar7;
  
  uVar1 = FUN_00403114(param_1,(int)&PTR_TPersistent_virtual_000_004173a4);
  if ((char)uVar1 != '\0') {
    FUN_0045602c(param_1,extraout_EDX,extraout_ECX,param_4);
    return;
  }
  iVar6 = 0x18;
  iVar2 = (**(code **)(*param_1 + 0x20))();
  iVar3 = (**(code **)(*param_1 + 0x2c))();
  FUN_00457194(*(int **)(param_4 + -4),iVar3,iVar2,iVar6);
  puVar4 = (undefined4 *)FUN_00456928(*(int **)(param_4 + -4),extraout_EDX_00,extraout_ECX_00);
  FUN_00402c30(puVar4,*(uint *)(*(int *)(param_4 + -4) + 0x7c),0);
  piVar7 = param_1;
  piVar5 = (int *)FUN_00456800(*(int *)(param_4 + -4),extraout_EDX_01,extraout_ECX_01);
  FUN_00418f9c(piVar5,0,0,piVar7);
  uVar1 = (**(code **)(*param_1 + 0x28))();
  (**(code **)(**(int **)(param_4 + -4) + 0x3c))(*(int **)(param_4 + -4),uVar1);
  return;
}


/* ==== 004562c0 TDIB.virtual_008 ==== */

void TDIB_virtual_008(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (param_2 == (int *)0x0) {
    FUN_00456634(param_1,0,param_3);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  else {
    uVar1 = FUN_00403114(param_2,(int)&LAB_00454aa4);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_virtual_000_00416f48);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_00403114(param_2,(int)&PTR_TPicture_virtual_000_0041702c);
        if ((char)uVar1 == '\0') {
          TPersistent_virtual_008(param_1,param_2);
        }
        else {
          if ((int *)param_2[1] == (int *)0x0) {
            FUN_00456634(param_1,extraout_EDX_00,extraout_ECX_00);
          }
          else {
            FUN_00456234((int *)param_2[1],extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
          }
          (**(code **)(*param_1 + 0x10))(param_1,param_1);
        }
      }
      else {
        FUN_00456234(param_2,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
        (**(code **)(*param_1 + 0x10))(param_1,param_1);
      }
    }
    else if (param_2 != param_1) {
      FUN_00457048((int)param_1,param_2[9]);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
      uVar1 = (**(code **)(*param_2 + 0x28))();
      (**(code **)(*param_1 + 0x3c))(param_1,uVar1);
      iVar2 = FUN_00456a14((int)param_2);
      FUN_00457260(param_1,iVar2);
      FUN_0045727c(param_1,(char)param_2[0x22]);
    }
  }
  return;
}


/* ==== 004563b8 TDIB.virtual_014 ==== */

void TDIB_virtual_014(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  HPALETTE hPal;
  HDC pHVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  HDC hdcDest;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  BITMAPINFO *pBVar13;
  UINT UVar14;
  DWORD DVar15;
  undefined4 uVar16;
  BOOL bForceBkgd;
  void *bits;
  int y_src;
  
  if (param_1[0x1f] < 1) {
    return;
  }
  iVar2 = FUN_0045691c((int)param_1);
  if (0 < iVar2) {
    bForceBkgd = 0;
    hPal = (HPALETTE)(**(code **)(*param_1 + 0x24))();
    pHVar3 = (HDC)FUN_004194d8(param_2);
    SelectPalette(pHVar3,hPal,bForceBkgd);
    pHVar3 = (HDC)FUN_004194d8(param_2);
    RealizePalette(pHVar3);
  }
  *in_FS_OFFSET = &stack0xffffffd4;
  iVar2 = 3;
  pHVar3 = (HDC)FUN_004194d8(param_2);
  iVar2 = SetStretchBltMode(pHVar3,iVar2);
  uVar16 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc8;
  GdiFlush();
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    if (*(char *)(param_1[9] + 0x42c) == '\0') {
      DVar15 = param_2[8];
      iVar12 = param_1[0x10];
      iVar5 = param_1[0x23];
      y_src = 0;
      iVar11 = 0;
      pHVar3 = *(HDC *)(param_1[9] + 0x420);
      iVar9 = param_3[3] - param_3[1];
      iVar6 = *param_3;
      iVar10 = param_3[2] - iVar6;
      iVar8 = param_3[1];
      hdcDest = (HDC)FUN_004194d8(param_2);
      StretchBlt(hdcDest,iVar6,iVar8,iVar10,iVar9,pHVar3,iVar11,y_src,iVar5,iVar12,DVar15);
    }
    else {
      DVar15 = param_2[8];
      UVar14 = 0;
      pBVar13 = *(BITMAPINFO **)(param_1[9] + 0xc);
      bits = *(void **)(param_1[9] + 0x440);
      iVar12 = param_1[0x10];
      iVar5 = param_1[0x23];
      y_src = 0;
      iVar11 = 0;
      iVar9 = param_3[3] - param_3[1];
      iVar6 = *param_3;
      iVar10 = param_3[2] - iVar6;
      iVar8 = param_3[1];
      pHVar3 = (HDC)FUN_004194d8(param_2);
      StretchDIBits(pHVar3,iVar6,iVar8,iVar10,iVar9,iVar11,y_src,iVar5,iVar12,bits,pBVar13,UVar14,
                    DVar15);
    }
    *in_FS_OFFSET = uVar16;
    pHVar3 = (HDC)FUN_004194d8(param_2);
    SetStretchBltMode(pHVar3,iVar2);
    return;
  }
  piVar4 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX);
  uVar16 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffbc;
  (**(code **)(*piVar4 + 0x40))(piVar4,param_1[0x23]);
  (**(code **)(*piVar4 + 0x34))(piVar4,param_1[0x10]);
  (**(code **)(*piVar4 + 0x40))(piVar4,param_3[2] - *param_3);
  (**(code **)(*piVar4 + 0x34))(piVar4,param_3[3] - param_3[1]);
  DVar15 = 0xcc0020;
  UVar14 = 0;
  pBVar13 = *(BITMAPINFO **)(param_1[9] + 0xc);
  bits = *(void **)(param_1[9] + 0x440);
  iVar2 = param_1[0x10];
  iVar12 = param_1[0x23];
  iVar11 = 0;
  iVar10 = 0;
  iVar5 = (**(code **)(*piVar4 + 0x20))();
  iVar6 = (**(code **)(*piVar4 + 0x2c))();
  iVar9 = 0;
  iVar8 = 0;
  piVar7 = (int *)FUN_0041df1c(piVar4);
  pHVar3 = (HDC)FUN_004194d8(piVar7);
  StretchDIBits(pHVar3,iVar8,iVar9,iVar6,iVar5,iVar10,iVar11,iVar12,iVar2,bits,pBVar13,UVar14,DVar15
               );
  (**(code **)(*piVar4 + 0x3c))(piVar4,1);
  iVar2 = FUN_00456a14((int)param_1);
  FUN_0041ee30(piVar4,iVar2);
  FUN_0041ee80(piVar4,(char)param_1[0x22]);
  FUN_00419200(param_2,param_3,piVar4);
  *in_FS_OFFSET = uVar16;
  FUN_00402f9c(piVar4);
  return;
}


/* ==== 00456634 FUN_00456634 ==== */

void FUN_00456634(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = FUN_00455f74(param_1,param_2,param_3);
  FUN_00457048((int)param_1,(int)piVar1);
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 00456654 FUN_00456654 ==== */

void FUN_00456654(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00456660(param_1,0,param_3);
  return;
}


/* ==== 00456660 FUN_00456660 ==== */

void FUN_00456660(int *param_1,byte param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (((1 < *(int *)(param_1[9] + 4)) || (*(char *)(param_1[9] + 0x41c) != '\0')) ||
     ((param_2 == 0 && (*(char *)(param_1[9] + 0x42c) != '\0')))) {
    puStack_18 = (undefined1 *)0x456699;
    piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_virtual_000_00454a44,'\x01',param_3);
    puStack_1c = &LAB_004566c9;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00455970(piVar1,param_1[9],
                 CONCAT31((int3)((uint)extraout_ECX >> 8),*(byte *)(param_1[9] + 0x42c) & param_2));
    *in_FS_OFFSET = uStack_20;
    *(undefined1 *)(piVar1 + 0x10b) = 1;
    puStack_18 = (undefined1 *)0x4566f4;
    FUN_00457048((int)param_1,(int)piVar1);
    puStack_18 = (undefined1 *)0x4566fd;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 00456704 FUN_00456704 ==== */

void FUN_00456704(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x42c) != '\0') {
    puStack_18 = (undefined1 *)0x456725;
    piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_virtual_000_00454a44,'\x01',param_3);
    puStack_1c = &LAB_0045674d;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00455970(piVar1,*(int *)(param_1 + 0x24),0);
    *in_FS_OFFSET = uStack_20;
    *(undefined1 *)(piVar1 + 0x10b) = 1;
    puStack_18 = (undefined1 *)0x456778;
    FUN_00457048(param_1,(int)piVar1);
  }
  return;
}


/* ==== 00456780 FUN_00456780 ==== */

void FUN_00456780(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x41c) != '\0') {
    puStack_18 = (undefined1 *)0x4567a1;
    piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_virtual_000_00454a44,'\x01',param_3);
    puStack_1c = &LAB_004567cf;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00455970(piVar1,*(int *)(param_1 + 0x24),
                 CONCAT31((int3)((uint)extraout_ECX >> 8),
                          *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x42c)));
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x4567f0;
    FUN_00457048(param_1,(int)piVar1);
  }
  return;
}


/* ==== 004567f8 FUN_004567f8 ==== */

undefined4 FUN_004567f8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
}


/* ==== 00456800 FUN_00456800 ==== */

undefined4 FUN_00456800(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00456704(param_1,param_2,param_3);
    piVar2 = FUN_00418b34((int *)&PTR_TPersistent_virtual_000_00416dc0,'\x01',extraout_ECX);
    *(int **)(param_1 + 0x20) = piVar2;
    FUN_00419558(piVar2,*(int *)(*(int *)(param_1 + 0x24) + 0x420));
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x420) == 0) {
      FUN_00403c40(
                  "DIB does not yet have an image/canvas.\r\nEither assign an image to the DIB or call it\'s SetSize method."
                  );
    }
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(iVar1 + 0x34) = param_1;
    *(code **)(iVar1 + 0x30) = FUN_00456654;
  }
  return *(undefined4 *)(param_1 + 0x20);
}


/* ==== 00456900 TDIB.virtual_01c ==== */

bool TDIB_virtual_01c(int param_1)

{
  return *(int *)(param_1 + 0x7c) == 0;
}


/* ==== 00456908 TDIB.virtual_020 ==== */

undefined4 TDIB_virtual_020(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


/* ==== 0045690c TDIB.virtual_024 ==== */

void TDIB_virtual_024(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00455ec4(*(int *)(param_1 + 0x24),param_2,param_3);
  return;
}


/* ==== 0045691c FUN_0045691c ==== */

undefined4 FUN_0045691c(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x43c);
}


/* ==== 00456928 FUN_00456928 ==== */

int FUN_00456928(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00456660(param_1,1,param_3);
  if (*(char *)(param_1[9] + 0x42c) == '\0') {
    GdiFlush();
  }
  return param_1[0x1e];
}


/* ==== 00456950 FUN_00456950 ==== */

void FUN_00456950(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  int *piVar2;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  puStack_20 = &LAB_004569e2;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  FUN_00456660(param_1,1,0);
  if ((param_2 < 0) || (param_1[0x10] <= param_2)) {
    local_8 = 0;
    piVar2 = &local_c;
    in_stack_ffffffd4 = 0;
    local_c = param_2;
    FUN_00405808((undefined4 *)PTR_PTR_004ab92c,(int *)&local_10);
    uVar1 = FUN_0040b614((int)&DAT_004166f4,'\x01',local_10,in_stack_ffffffd4,piVar2);
    FUN_004036f4(uVar1);
  }
  if (*(char *)(param_1[9] + 0x42c) == '\0') {
    GdiFlush();
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_004569e9;
  FUN_00403c5c((int *)&local_10);
  return;
}


/* ==== 004569f4 FUN_004569f4 ==== */

undefined4 FUN_004569f4(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x42c) == '\0') {
    GdiFlush();
  }
  return *(undefined4 *)(param_1 + 0x80);
}


/* ==== 00456a14 FUN_00456a14 ==== */

void FUN_00456a14(int param_1)

{
  if (*(char *)(param_1 + 0x88) == '\0') {
    FUN_00456a44(param_1,0,*(int *)(param_1 + 0x40) + -1);
    return;
  }
  FUN_00417d54(*(uint *)(param_1 + 0x84));
  return;
}


/* ==== 00456a3c TDIB.virtual_02c ==== */

undefined4 TDIB_virtual_02c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}


/* ==== 00456a44 FUN_00456a44 ==== */

uint FUN_00456a44(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00456780(param_1,param_2,param_3);
  uVar3 = 0;
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x8c))) && (-1 < param_3)) &&
     (param_3 < *(int *)(param_1 + 0x40))) {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 < 0x11) {
      if (iVar2 == 0x10) {
        uVar3 = (uint)*(ushort *)
                       (param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) + param_2 * 2)
        ;
      }
      else if (iVar2 == 1) {
        uVar3 = ((uint)*(byte *)(param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) +
                                (param_2 >> 3)) & *(uint *)(&DAT_004aac50 + (param_2 & 7) * 4)) >>
                ((byte)*(undefined4 *)(&DAT_004aac78 + (param_2 & 7) * 4) & 0x1f);
      }
      else if (iVar2 == 4) {
        uVar3 = ((uint)*(byte *)(param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) +
                                (param_2 >> 1)) & *(uint *)(&DAT_004aac70 + (param_2 & 1) * 4)) >>
                ((byte)*(undefined4 *)(&DAT_004aac98 + (param_2 & 1) * 4) & 0x1f);
      }
      else if (iVar2 == 8) {
        uVar3 = (uint)*(byte *)(param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) +
                               param_2);
      }
    }
    else if (iVar2 == 0x18) {
      puVar1 = (undefined1 *)
               (param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) + param_2 * 3);
      uVar3 = (uint)CONCAT12(*puVar1,CONCAT11(puVar1[1],puVar1[2]));
    }
    else if (iVar2 == 0x20) {
      uVar3 = *(uint *)(param_3 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x80) + param_2 * 4)
      ;
    }
  }
  return uVar3;
}


/* ==== 00456b70 TDIB.virtual_004 ==== */

void TDIB_virtual_004(int *param_1,int *param_2)

{
  TGraphic_virtual_004(param_1,param_2);
  (**(code **)(*param_2 + 8))(param_2,&DAT_00456ba8,0,0,0,*(undefined4 *)(*param_1 + 0x50),param_1);
  return;
}


/* ==== 00456c20 FUN_00456c20 ==== */

int * FUN_00456c20(int *param_1,char param_2,HGLOBAL mem)

{
  SIZE_T SVar1;
  LPVOID global_lock;
  HGLOBAL extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,mem,in_stack_ffffffe0,in_stack_ffffffe4);
    mem = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',mem);
  param_1[5] = (int)mem;
  SVar1 = GlobalSize(mem);
  global_lock = GlobalLock(mem);
  FUN_0041298c((int)param_1,global_lock,SVar1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00456c78 TGlobalMemoryStream.Destroy ==== */

void TGlobalMemoryStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  GlobalUnlock((HGLOBAL)piVar1[5]);
  FUN_0041298c((int)piVar1,0,0);
  TMemoryStream_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00456cb8 TDIB.virtual_058 ==== */

void TDIB_virtual_058(int *param_1,undefined4 param_2,HGLOBAL mem)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x456ccb;
  piVar1 = FUN_00456c20((int *)&LAB_00456bf8,'\x01',mem);
  puStack_14 = &LAB_00456cfc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x30))(param_1,piVar1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00456d03;
  puStack_14 = (undefined1 *)0x456cfb;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 00456d0c TDIB.virtual_050 ==== */

void TDIB_virtual_050(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_20;
  undefined4 *local_1c;
  short local_16 [7];
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  puStack_30 = &LAB_00456db7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_2;
  iVar1 = (**(code **)(*param_2 + 4))(param_2,local_16,0xe);
  if (iVar1 != 0) {
    if (iVar1 != 0xe) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&local_1c);
      piVar2 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',local_1c);
      FUN_004036f4(piVar2);
    }
    if (local_16[0] != 0x4d42) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&local_20);
      piVar2 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',local_20);
      FUN_004036f4(piVar2);
    }
    (**(code **)(*param_1 + 0x30))(param_1,local_8);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00456dbe;
  puStack_30 = (undefined1 *)0x456db6;
  FUN_00403c80((int *)&local_20,2);
  return;
}


/* ==== 00456dc4 TDIB.virtual_030 ==== */

void TDIB_virtual_030(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x456ddb;
  piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_virtual_000_00454a44,'\x01',param_3);
  puStack_1c = &LAB_00456e09;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00455b38(piVar1,param_2,*(char *)(param_1[9] + 0x42c));
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x456e2a;
  FUN_00457048((int)param_1,(int)piVar1);
  puStack_18 = (undefined1 *)0x456e33;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 00456e3c TDIB.virtual_05c ==== */

void TDIB_virtual_05c(int *param_1,undefined2 *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  SIZE_T dwBytes;
  HGLOBAL global_alloc;
  undefined4 *global_lock;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  *param_2 = 8;
  *param_4 = 0;
  puStack_18 = (undefined1 *)0x456e5f;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',param_3);
  puStack_1c = &LAB_00456ed5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x44))(param_1,piVar1);
  dwBytes = FUN_00412680(piVar1);
  global_alloc = GlobalAlloc(0x42,dwBytes);
  *param_3 = (int)global_alloc;
  if (*param_3 == 0) {
    FUN_0040b5cc();
  }
  global_lock = GlobalLock((HGLOBAL)*param_3);
  uVar2 = FUN_00412680(piVar1);
  FUN_004028d8((undefined4 *)piVar1[1],global_lock,uVar2);
  GlobalUnlock((HGLOBAL)*param_3);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00456edc;
  puStack_1c = (undefined1 *)0x456ed4;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 00456ee4 TDIB.virtual_054 ==== */

void TDIB_virtual_054(int *param_1,int *param_2)

{
  char cVar1;
  undefined2 local_12;
  int local_10;
  undefined2 local_c;
  undefined2 local_a;
  int local_8;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    local_12 = 0x4d42;
    local_8 = FUN_004567f8((int)param_1);
    local_8 = local_8 + 0xe;
    local_10 = *(int *)(*(int *)(param_1[9] + 0xc) + 0x14) + local_8;
    local_c = 0;
    local_a = 0;
    FUN_004126f0(param_2,&local_12,0xe);
    (**(code **)(*param_1 + 0x44))(param_1,param_2);
  }
  return;
}


/* ==== 00456f4c TDIB.virtual_044 ==== */

void TDIB_virtual_044(int *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    if (*(char *)(param_1[9] + 0x42c) == '\0') {
      GdiFlush();
    }
    FUN_004126f0(param_2,*(undefined4 *)(param_1[9] + 0xc),*(int *)(param_1[9] + 0x10));
    FUN_004126f0(param_2,*(undefined4 *)(param_1[9] + 0x440),
                 *(int *)(*(int *)(param_1[9] + 0xc) + 0x14));
  }
  return;
}


/* ==== 00456f9c TDIB.virtual_034 ==== */

void TDIB_virtual_034(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    FUN_00456634(param_1,param_2,param_3);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x1c))();
    if (cVar1 == '\0') {
      FUN_00457194(param_1,param_1[0x23],param_2,param_1[0xf]);
    }
    else {
      iVar3 = 8;
      iVar2 = FUN_00454b38(param_1[0x23],1);
      FUN_00457194(param_1,iVar2,param_2,iVar3);
    }
  }
  return;
}


/* ==== 00456ff4 TDIB.virtual_040 ==== */

void TDIB_virtual_040(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    FUN_00456634(param_1,param_2,param_3);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x1c))();
    if (cVar1 == '\0') {
      FUN_00457194(param_1,param_2,param_1[0x10],param_1[0xf]);
    }
    else {
      iVar3 = 8;
      iVar2 = FUN_00454b38(param_1[0x10],1);
      FUN_00457194(param_1,param_2,iVar2,iVar3);
    }
  }
  return;
}


/* ==== 00457048 FUN_00457048 ==== */

void FUN_00457048(int param_1,int param_2)

{
  int i_val;
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_2 != *(int *)(param_1 + 0x24)) {
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      FUN_00419558(*(int **)(param_1 + 0x20),0);
    }
    FUN_0041cf14(*(int **)(param_1 + 0x24));
    *(int *)(param_1 + 0x24) = param_2;
    FUN_0041cf10(param_2);
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      FUN_00419558(*(int **)(param_1 + 0x20),*(int *)(*(int *)(param_1 + 0x24) + 0x420));
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + 0x15);
    puVar2 = (undefined4 *)(param_1 + 0x94);
    for (i_val = 0x100; i_val != 0; i_val = i_val + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + (uint)bVar3 * -2 + 1;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + 0x444);
    puVar2 = (undefined4 *)(param_1 + 0x494);
    for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + (uint)bVar3 * -2 + 1;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 8);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x428);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x430);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + 0x444);
    puVar2 = (undefined4 *)(param_1 + 0x48);
    for (i_val = 0xc; i_val != 0; i_val = i_val + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + (uint)bVar3 * -2 + 1;
      puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    }
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x440);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x474);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x478);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x47c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x480);
  }
  return;
}


/* ==== 00457138 TDIB.virtual_038 ==== */

void TDIB_virtual_038(int *param_1,HPALETTE param_2)

{
  int i_val;
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint local_804 [256];
  tagPALETTEENTRY local_404 [256];
  
  bVar3 = 0;
  GetPaletteEntries(param_2,0,0x100,local_404);
  DeleteObject(param_2);
  FUN_00454ca8(local_404,local_804);
  puVar1 = local_804;
  puVar2 = (uint *)(param_1 + 0x25);
  for (i_val = 0x100; i_val != 0; i_val = i_val + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  FUN_00457298(param_1);
  return;
}


/* ==== 00457194 FUN_00457194 ==== */

void FUN_00457194(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (((((param_2 != param_1[0x23]) || (param_3 != param_1[0x10])) || (param_1[0xf] != param_4)) ||
      ((param_1[0x12] != param_1[0x125] || (param_1[0x13] != param_1[0x126])))) ||
     (param_1[0x14] != param_1[0x127])) {
    if ((param_2 < 1) || (param_3 < 1)) {
      puStack_18 = (undefined1 *)0x4571e6;
      FUN_00456634(param_1,param_2,param_3);
    }
    else {
      puStack_18 = (undefined1 *)0x4571f4;
      piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_virtual_000_00454a44,'\x01',param_3);
      puStack_1c = &LAB_00457231;
      uStack_20 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_20;
      uVar2 = 0;
      puStack_18 = &stack0xfffffffc;
      FUN_00455154(piVar1,param_2,param_3,'\0','\x01',param_1 + 0x25,param_1 + 0x125,param_4);
      *in_FS_OFFSET = uVar2;
      FUN_00457048((int)param_1,(int)piVar1);
      *(undefined1 *)((int)param_1 + 0x1a) = 1;
    }
  }
  return;
}


/* ==== 00457260 FUN_00457260 ==== */

void FUN_00457260(int *param_1,int param_2)

{
  if (param_2 != param_1[0x21]) {
    param_1[0x21] = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0045727c FUN_0045727c ==== */

void FUN_0045727c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x22]) {
    *(char *)(param_1 + 0x22) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 00457298 FUN_00457298 ==== */

void FUN_00457298(int *param_1)

{
  undefined4 uVar1;
  int i_val;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int local_404 [256];
  
  bVar4 = 0;
  uVar1 = FUN_00408298(param_1 + 0x25,(int *)(param_1[9] + 0x15),0x400);
  if ((char)uVar1 == '\0') {
    piVar2 = param_1 + 0x25;
    piVar3 = local_404;
    for (i_val = 0x100; i_val != 0; i_val = i_val + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    FUN_00456660(param_1,1,0);
    piVar2 = local_404;
    piVar3 = param_1 + 0x25;
    for (i_val = 0x100; i_val != 0; i_val = i_val + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    FUN_00455f14(param_1[9],param_1 + 0x25);
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
  }
  return;
}


