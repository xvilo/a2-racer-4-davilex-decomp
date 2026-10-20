/* Menu.exe — units/DaviAnimationLoader.pas: 26 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045a420 TDaviLoopProperties.virtual_00c ==== */

int * TDaviLoopProperties_virtual_00c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045a45c TDaviLoopProperties.Destroy ==== */

void TDaviLoopProperties_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45a467;
  local_8 = System__BeforeDestruction(param_1,param_2);
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045a49e;
  uStack_14 = 0x45a496;
  TPersistent_Destroy(local_8,extraout_DL & 0xfc);
  return;
}


/* ==== 0045a4b0 TDaviLoopProperties.virtual_010 ==== */

void TDaviLoopProperties_virtual_010(int param_1,int *param_2)

{
  FUN_004126b8(param_2,param_1 + 4,1);
  FUN_004126b8(param_2,param_1 + 8,4);
  FUN_004126b8(param_2,param_1 + 0xc,4);
  FUN_004126b8(param_2,param_1 + 0x10,4);
  return;
}


/* ==== 0045a4fc TDaviLoopProperties.virtual_014 ==== */

void TDaviLoopProperties_virtual_014(int param_1,int *param_2)

{
  FUN_004126f0(param_2,param_1 + 4,1);
  FUN_004126f0(param_2,param_1 + 8,4);
  FUN_004126f0(param_2,param_1 + 0xc,4);
  FUN_004126f0(param_2,param_1 + 0x10,4);
  return;
}


/* ==== 0045a548 TDaviLoopProperties.virtual_008 ==== */

void TDaviLoopProperties_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_0045a0f8);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_008(param_1,param_2);
  }
  else {
    iVar2 = System__AsClass(param_2,(int)&PTR_TPersistent_virtual_000_0045a0f8);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 4);
    param_1[2] = *(int *)(iVar2 + 8);
    param_1[3] = *(int *)(iVar2 + 0xc);
    param_1[4] = *(int *)(iVar2 + 0x10);
  }
  return;
}


/* ==== 0045a598 TDaviAnimationProperties.virtual_00c ==== */

int * TDaviAnimationProperties_virtual_00c(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  piVar1 = TDaviLoopProperties_virtual_00c
                     ((int *)&PTR_TPersistent_virtual_000_0045a0f8,'\x01',extraout_ECX_00);
  param_1[5] = (int)piVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045a5e0 TDaviAnimationProperties.Destroy ==== */

void TDaviAnimationProperties_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45a5eb;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_0045a626;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  SysUtils_FreeAndNil(local_8 + 5);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045a62d;
  puStack_14 = (undefined1 *)0x45a625;
  TPersistent_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0045a640 TDaviAnimationProperties.virtual_010 ==== */

void TDaviAnimationProperties_virtual_010(int param_1,int *param_2)

{
  FUN_004126b8(param_2,param_1 + 4,4);
  FUN_004126b8(param_2,param_1 + 8,4);
  FUN_004126b8(param_2,param_1 + 0xc,4);
  FUN_004126b8(param_2,param_1 + 0x10,4);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),param_2);
  return;
}


/* ==== 0045a694 TDaviAnimationProperties.virtual_014 ==== */

void TDaviAnimationProperties_virtual_014(int param_1,int *param_2)

{
  FUN_004126f0(param_2,param_1 + 4,4);
  FUN_004126f0(param_2,param_1 + 8,4);
  FUN_004126f0(param_2,param_1 + 0xc,4);
  FUN_004126f0(param_2,param_1 + 0x10,4);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(*(int **)(param_1 + 0x14),param_2);
  return;
}


/* ==== 0045a6e8 TDaviAnimationProperties.virtual_008 ==== */

void TDaviAnimationProperties_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_0045a1ac);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_008(param_1,param_2);
  }
  else {
    iVar2 = System__AsClass(param_2,(int)&PTR_TPersistent_virtual_000_0045a1ac);
    param_1[1] = *(int *)(iVar2 + 4);
    param_1[2] = *(int *)(iVar2 + 8);
    param_1[3] = *(int *)(iVar2 + 0xc);
    param_1[4] = *(int *)(iVar2 + 0x10);
    (**(code **)(*(int *)param_1[5] + 8))((int *)param_1[5],*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}


/* ==== 0045a744 TDaviAnimationLoader.virtual_014 ==== */

int * TDaviAnimationLoader_virtual_014(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  piVar1 = TDaviAnimationProperties_virtual_00c
                     ((int *)&PTR_TPersistent_virtual_000_0045a1ac,'\x01',extraout_ECX_00);
  param_1[2] = (int)piVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045a78c TDaviAnimationLoader.virtual_018 ==== */

int * TDaviAnimationLoader_virtual_018(int *param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',param_3);
  piVar1 = TDaviAnimationProperties_virtual_00c
                     ((int *)&PTR_TPersistent_virtual_000_0045a1ac,'\x01',extraout_ECX_00);
  param_1[2] = (int)piVar1;
  System__LStrAsg(param_1 + 1,param_3);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0045a7e4 TDaviAnimationLoader.Destroy ==== */

void TDaviAnimationLoader_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45a7ef;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_0045a82a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  SysUtils_FreeAndNil(local_8 + 2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045a831;
  puStack_14 = (undefined1 *)0x45a829;
  TPersistent_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0045a844 FUN_0045a844 ==== */

void FUN_0045a844(void)

{
  SysUtils_FreeAndNil(&DAT_004aacb0);
  return;
}


/* ==== 0045a854 FUN_0045a854 ==== */

int * FUN_0045a854(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_004aacb0 == (int *)0x0) {
    DAT_004aacb0 = TDaviAnimationLoaderFactory_virtual_000
                             ((int *)&PTR_TDaviAnimationLoaderFactory_virtual_000_0045a33c,'\x01',
                              param_3);
    piVar1 = FUN_00452d68(&DAT_00452a8c,extraout_EDX,extraout_ECX);
    FUN_00452e94(piVar1,0x45a844);
  }
  return DAT_004aacb0;
}


/* ==== 0045a88c FUN_0045a88c ==== */

bool FUN_0045a88c(void)

{
  return DAT_004aacb0 != 0;
}


/* ==== 0045a898 TDaviAnimationLoaderFactory.virtual_000 ==== */

int * TDaviAnimationLoaderFactory_virtual_000(int *param_1,char param_2,undefined4 param_3)

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
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00453bd8(param_1,'\0',param_3);
  piVar1 = FUN_00410d28((int *)&PTR_TPersistent_virtual_000_0040eccc,'\x01',
                        (int)&PTR_TPersistent_virtual_000_0045a3a8);
  param_1[1] = (int)piVar1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045a8e8 TDaviAnimationLoaderFactory.Destroy ==== */

void TDaviAnimationLoaderFactory_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45a8f3;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_0045a92e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  SysUtils_FreeAndNil(local_8 + 1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045a935;
  puStack_14 = (undefined1 *)0x45a92d;
  TDaviObject_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0045a948 FUN_0045a948 ==== */

void FUN_0045a948(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  char *pcStack_13c;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_118 [256];
  int local_18;
  int local_14;
  byte *local_10;
  uint *local_c;
  undefined4 *local_8;
  
  local_14 = 0;
  local_18 = 0;
  local_10 = (byte *)0x0;
  local_c = (uint *)0x0;
  puStack_124 = (undefined1 *)0x45a96e;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_128 = &LAB_0045aa4c;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  uVar1 = 1;
  puStack_124 = &stack0xfffffffc;
  FUN_00408a68((undefined *)local_8,(int *)&local_10);
  FUN_0040822c(local_10,(int *)&local_c);
  System__LStrCmp(local_c,(uint *)&DAT_0045aa64);
  if ((bool)uVar1) {
    TDaviDADLoader_virtual_018((int *)&PTR_TPersistent_virtual_000_00459524,'\x01',local_8);
  }
  else {
    System__LStrCmp(local_c,(uint *)&DAT_0045aa74);
    if ((bool)uVar1) {
      TDaviAVILoader_virtual_018((int *)&PTR_TPersistent_virtual_000_00457464,'\x01',local_8);
    }
    else {
      System_TObject_ClassName(*param_1,local_118);
      System__LStrFromString(&local_18,local_118);
      pcStack_13c = " Unhandled case-part";
      System__LStrCatN(&local_14,4);
      System__Assert(local_14);
    }
  }
  *in_FS_OFFSET = pcStack_13c;
  System__LStrArrayClr(&local_18,3);
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 0045aafc FUN_0045aafc ==== */

void FUN_0045aafc(undefined4 param_1,byte *param_2,int param_3,byte *param_4)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_10;
  uint *local_c;
  byte *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  puStack_18 = (undefined1 *)0x45ab13;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_18 = (undefined1 *)0x45ab1b;
  System__LStrAddRef((int)param_4);
  uVar2 = 1;
  puStack_1c = &LAB_0045ab8d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0040822c(local_8,(int *)&local_c);
  puVar1 = local_c;
  FUN_0040822c(param_4,(int *)&local_10);
  System__LStrCmp(puVar1,local_10);
  if ((bool)uVar2) {
    SysUtils_FileAge(param_4);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045ab94;
  puStack_1c = (undefined1 *)0x45ab7c;
  System__LStrArrayClr((int *)&local_10,2);
  puStack_1c = (undefined1 *)0x45ab84;
  System__LStrClr((int *)&local_8);
  puStack_1c = (undefined1 *)0x45ab8c;
  System__LStrClr((int *)&param_4);
  return;
}


/* ==== 0045aba0 FUN_0045aba0 ==== */

void FUN_0045aba0(int *param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int i_val;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  byte *pbVar6;
  byte *local_8;
  
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  pbVar6 = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  uVar2 = FUN_00410f08(param_1[1]);
  i_val = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    System__RunError(uVar2);
  }
  bVar1 = false;
  while ((-1 < i_val && (!bVar1))) {
    piVar4 = (int *)FUN_00410f10(param_1[1],i_val);
    uVar3 = System__AsClass(piVar4,(int)&PTR_TPersistent_virtual_000_0045a3a8);
    pbVar6 = local_8;
    uVar2 = FUN_0045aafc(param_1,*(byte **)(*(int *)(uVar3 + 0xc) + 4),*(undefined4 *)(uVar3 + 0x10)
                         ,local_8);
    if ((char)uVar2 != '\0') {
      bVar1 = true;
      FUN_0045ad2c(uVar3);
      uVar2 = *(uint *)(uVar3 + 0xc);
    }
    bVar5 = SBORROW4(i_val,1);
    i_val = i_val + -1;
    if (bVar5) {
      System__RunError(uVar2);
    }
  }
  if ((!bVar1) && (i_val = FUN_0045a948(param_1,(undefined4 *)local_8), i_val != 0)) {
    piVar4 = TCollectionItem_virtual_018
                       ((int *)&PTR_TPersistent_virtual_000_0045a3a8,'\x01',(int *)param_1[1]);
    FUN_0045ad2c((uint)piVar4);
    piVar4[3] = i_val;
    i_val = SysUtils_FileAge(*(undefined **)(i_val + 4));
    piVar4[4] = i_val;
  }
  *in_FS_OFFSET = pbVar6;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0045aca0 FUN_0045aca0 ==== */

void FUN_0045aca0(int param_1,int param_2)

{
  uint i_val;
  int *piVar1;
  int j;
  
  i_val = FUN_00410f08(*(int *)(param_1 + 4));
  if (SBORROW4(i_val,1)) {
    System__RunError(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      piVar1 = (int *)FUN_00410f10(*(int *)(param_1 + 4),j);
      piVar1 = (int *)System__AsClass(piVar1,(int)&PTR_TPersistent_virtual_000_0045a3a8);
      if (piVar1[3] == param_2) {
        FUN_0045ad38(piVar1);
        return;
      }
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045acf8 TDaviAnimationLoaderItem.Destroy ==== */

void TDaviAnimationLoaderItem_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  SysUtils_FreeAndNil(piVar1 + 3);
  TCollectionItem_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0045ad2c FUN_0045ad2c ==== */

void FUN_0045ad2c(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    System__RunError(param_1);
  }
  return;
}


/* ==== 0045ad38 FUN_0045ad38 ==== */

void FUN_0045ad38(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 5;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    param_1 = (int *)System__RunError((uint)param_1);
  }
  if (param_1[5] < 1) {
    System_TObject_Free(param_1);
  }
  return;
}


/* ==== 0045ad54 FUN_0045ad54 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ad54(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8fc = _DAT_004ac8fc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


