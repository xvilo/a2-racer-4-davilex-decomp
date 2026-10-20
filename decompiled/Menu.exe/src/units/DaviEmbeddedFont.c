/* Menu.exe — units/DaviEmbeddedFont.pas: 15 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047e17c FUN_0047e17c ==== */

void FUN_0047e17c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int *local_24;
  OLECHAR local_20 [2];
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  OLECHAR local_10 [2];
  int *local_c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  local_10[0] = L'\0';
  local_10[1] = L'\0';
  local_14 = (int *)0x0;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20[0] = L'\0';
  local_20[1] = L'\0';
  local_24 = (int *)0x0;
  puStack_34 = &LAB_0047e27d;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  piVar1 = *(int **)(param_1 + 8);
  if (*(char *)((int)piVar1 + 0x47) != '\0') {
    System__IntfClear((int *)&local_c);
    FUN_004043f8(local_10,*(LPCSTR *)(param_1 + 0xc));
    FUN_00472904(*(int *)(param_1 + 4),(int *)&local_14);
    iVar2 = (**(code **)(*local_14 + 0x1c))();
    FUN_0040595c(iVar2);
    iVar2 = (**(code **)(*local_c + 0x3c))();
    FUN_0040595c(iVar2);
    System__IntfClear((int *)&local_1c);
    FUN_004043f8(local_20,*(LPCSTR *)(param_1 + 0xc));
    FUN_00472904(*(int *)(param_1 + 4),(int *)&local_24);
    iVar2 = (**(code **)(*local_24 + 0x1c))();
    FUN_0040595c(iVar2);
    iVar2 = (**(code **)(*local_1c + 0x34))();
    FUN_0040595c(iVar2);
    FUN_0047d4d0(piVar1,(int)(short)local_18,(int)&local_8);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0047e284;
  puStack_34 = (undefined1 *)0x47e254;
  System__IntfClear((int *)&local_24);
  puStack_34 = (undefined1 *)0x47e25c;
  FUN_004042b4((undefined4 *)local_20);
  puStack_34 = (undefined1 *)0x47e264;
  System__IntfClear((int *)&local_1c);
  puStack_34 = (undefined1 *)0x47e26c;
  System__IntfClear((int *)&local_14);
  puStack_34 = (undefined1 *)0x47e274;
  FUN_004042b4((undefined4 *)local_10);
  puStack_34 = (undefined1 *)0x47e27c;
  System__IntfClear((int *)&local_c);
  return;
}


/* ==== 0047e28c FUN_0047e28c ==== */

void FUN_0047e28c(int param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = (undefined1 *)0x47e29e;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_14 = &LAB_0047e2d3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  TGroupBox_SetCaption(*(int *)(*(int *)(param_1 + 8) + 0x2d4),local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0047e2da;
  puStack_14 = (undefined1 *)0x47e2d2;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0047e2e0 FUN_0047e2e0 ==== */

void FUN_0047e2e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_10;
  OLECHAR local_c [2];
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c[0] = L'\0';
  local_c[1] = L'\0';
  local_10 = (int *)0x0;
  puStack_1c = &LAB_0047e37c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar3 = *(int *)(param_1 + 0x10) + 0x8000;
  puVar2 = &stack0xfffffffc;
  if (0xffff < uVar3) {
    System__RunError(uVar3);
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  System__IntfClear((int *)&local_8);
  FUN_004043f8(local_c,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_10);
  iVar4 = (**(code **)(*local_10 + 0x1c))();
  FUN_0040595c(iVar4);
  piVar1 = local_8;
  iVar4 = (**(code **)(*local_8 + 0x30))();
  FUN_0040595c(iVar4);
  *in_FS_OFFSET = piVar1;
  System__IntfClear((int *)&local_10);
  FUN_004042b4((undefined4 *)local_c);
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0047e388 FUN_0047e388 ==== */

void FUN_0047e388(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_10;
  OLECHAR local_c [2];
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c[0] = L'\0';
  local_c[1] = L'\0';
  local_10 = (int *)0x0;
  puStack_1c = &LAB_0047e424;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  uVar3 = *(int *)(param_1 + 0x14) + 0x8000;
  puVar2 = &stack0xfffffffc;
  if (0xffff < uVar3) {
    System__RunError(uVar3);
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  System__IntfClear((int *)&local_8);
  FUN_004043f8(local_c,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_10);
  iVar4 = (**(code **)(*local_10 + 0x1c))();
  FUN_0040595c(iVar4);
  piVar1 = local_8;
  iVar4 = (**(code **)(*local_8 + 0x38))();
  FUN_0040595c(iVar4);
  *in_FS_OFFSET = piVar1;
  System__IntfClear((int *)&local_10);
  FUN_004042b4((undefined4 *)local_c);
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0047e430 FUN_0047e430 ==== */

void FUN_0047e430(int param_1)

{
  int *piVar1;
  uint uVar2;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  int *local_3c;
  int *local_38;
  int *local_34;
  _union_2683 union_2683;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_c;
  int *local_8;
  
  local_14 = (int *)&stack0xfffffffc;
  i_val = 7;
  do {
    local_8 = (int *)0x0;
    i_val = i_val + -1;
  } while (i_val != 0);
  local_18 = (int *)&LAB_0047e5d8;
  local_1c = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  uVar2 = *(int *)(param_1 + 0x10) + 0x8000;
  piVar1 = (int *)&stack0xfffffffc;
  if (0xffff < uVar2) {
    local_20 = 0x47e464;
    uVar2 = System__RunError(uVar2);
    piVar1 = local_14;
  }
  local_14 = piVar1;
  local_20 = uVar2 - 0x8000;
  union_2683._12_4_ = 0x47e472;
  union_2683._12_4_ = System__IntfClear((int *)&local_8);
  union_2683._8_4_ = 0x47e47e;
  FUN_004043f8((BSTR)&local_c,*(LPCSTR *)(param_1 + 0xc));
  union_2683._8_4_ = local_c;
  union_2683.decVal.Hi32 = 0x47e48d;
  FUN_00472904(*(int *)(param_1 + 4),(int *)&stack0xfffffff0);
  union_2683._0_4_ = 0x47e496;
  i_val = (**(code **)(*unaff_EBX + 0x1c))();
  union_2683._0_4_ = 0x47e49b;
  FUN_0040595c(i_val);
  union_2683._0_4_ = local_8;
  local_34 = (int *)0x47e4a4;
  i_val = (**(code **)(*local_8 + 0x30))();
  local_34 = (int *)0x47e4a9;
  FUN_0040595c(i_val);
  uVar2 = *(int *)(param_1 + 0x14) + 0x8000;
  if (0xffff < uVar2) {
    local_34 = (int *)0x47e4bd;
    uVar2 = System__RunError(uVar2);
  }
  local_34 = (int *)(uVar2 - 0x8000);
  local_38 = (int *)0x47e4cb;
  local_38 = System__IntfClear((int *)&local_14);
  local_3c = (int *)0x47e4d7;
  FUN_004043f8((BSTR)&local_18,*(LPCSTR *)(param_1 + 0xc));
  local_3c = local_18;
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_1c);
  i_val = (**(code **)(*local_1c + 0x1c))();
  FUN_0040595c(i_val);
  i_val = (**(code **)(*local_14 + 0x38))();
  FUN_0040595c(i_val);
  System__IntfClear(&local_20);
  FUN_00404ea4((VARIANTARG *)&union_2683.n2,0);
  System__IntfClear((int *)&local_34);
  FUN_004043f8((BSTR)&local_38,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_3c);
  i_val = (**(code **)(*local_3c + 0x1c))();
  FUN_0040595c(i_val);
  piVar1 = local_34;
  i_val = (**(code **)(*local_34 + 0x88))();
  FUN_0040595c(i_val);
  FUN_0047e17c(param_1);
  FUN_00449c78(*(int **)(param_1 + 8),extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = piVar1;
  System__IntfClear((int *)&local_3c);
  FUN_004042b4(&local_38);
  System__IntfClear((int *)&local_34);
  FUN_00405038((VARIANTARG *)&union_2683.n2);
  System__IntfClear(&local_20);
  System__IntfClear((int *)&local_1c);
  FUN_004042b4(&local_18);
  System__IntfClear((int *)&local_14);
  System__IntfClear((int *)&stack0xfffffff0);
  FUN_004042b4(&local_c);
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0047e5e4 FUN_0047e5e4 ==== */

undefined4 FUN_0047e5e4(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x3c);
}


/* ==== 0047e5ec FUN_0047e5ec ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e5ec(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad2b4 = _DAT_004ad2b4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0047e778 TDaviEmbeddedFont.virtual_02c ==== */

int * TDaviEmbeddedFont_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
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
  TComponent_virtual_02c(param_1,'\0',param_3);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  System__LStrClr(param_1 + 0xd);
  System__LStrAsg(param_1 + 0xe,(undefined4 *)&DAT_0047e7d8);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0047e7e0 TDaviEmbeddedFont.Destroy ==== */

void TDaviEmbeddedFont_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0047ebe4((int)piVar1);
  if (piVar1[0xc] != 0) {
    System__FreeMem(piVar1[0xc]);
    piVar1[0xc] = 0;
    piVar1[0xb] = 0;
  }
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0047e828 TDaviEmbeddedFont.SetTrueType ==== */

void TDaviEmbeddedFont_SetTrueType(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_8;
  
  puStack_18 = (undefined1 *)0x47e83d;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  bVar3 = true;
  puStack_1c = &LAB_0047e8f3;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  System__LStrCmp(*(uint **)(param_1 + 0x28),local_8);
  if (!bVar3) {
    System__LStrAsg((int *)(param_1 + 0x28),local_8);
    if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
      puStackY_28 = (undefined1 *)0x47e87e;
      piVar1 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',
                            *(undefined **)(param_1 + 0x28),0);
      puStackY_28 = &LAB_0047e8d6;
      uStackY_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_2c;
      iVar2 = FUN_00412680(piVar1);
      *(int *)(param_1 + 0x2c) = iVar2;
      FUN_004027ac((int *)(param_1 + 0x30),iVar2);
      (**(code **)(*piVar1 + 0xc))(piVar1,0,0);
      FUN_004126b8(piVar1,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x2c));
      *in_FS_OFFSET = uStackY_2c;
      puStackY_28 = (undefined1 *)0x47e8d5;
      System_TObject_Free(piVar1);
      return;
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0047e8fa;
  puStack_1c = (undefined1 *)0x47e8f2;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0047e900 TDaviEmbeddedFont.SetFaceName ==== */

void TDaviEmbeddedFont_SetFaceName(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = (undefined1 *)0x47e912;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_14 = &LAB_0047e941;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  System__LStrAsg((int *)(param_1 + 0x34),local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0047e948;
  puStack_14 = (undefined1 *)0x47e940;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0047e94c TDaviEmbeddedFont.virtual_004 ==== */

void TDaviEmbeddedFont_virtual_004(int param_1,int *param_2)

{
  TComponent_virtual_004(param_1,param_2);
  (**(code **)(*param_2 + 8))(param_2,&DAT_0047e984,1,FUN_0047e9d0,param_1,&LAB_0047e98c,param_1);
  return;
}


/* ==== 0047e9d0 FUN_0047e9d0 ==== */

void FUN_0047e9d0(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x2c,4);
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(*param_2 + 8))(param_2,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x2c));
  }
  return;
}


/* ==== 0047ea04 FUN_0047ea04 ==== */

void FUN_0047ea04(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_4c;
  undefined1 *puStackY_48;
  ushort uVar1;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c [3];
  undefined *local_10;
  int *local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = (undefined *)0x0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  puStack_30 = &LAB_0047eba3;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  puStack_3c = &LAB_0047eb5e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    uVar1 = 0xffff;
    puStackY_48 = (undefined1 *)0x47ea56;
    puStack_38 = &stack0xfffffffc;
    System__LStrCat3((int *)&local_10,*(undefined4 **)(param_1 + 0x38),(undefined4 *)&DAT_0047ebbc);
    puStackY_48 = (undefined1 *)0x47ea65;
    local_c = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',local_10,uVar1);
    puStackY_48 = &LAB_0047eaa0;
    uStackY_4c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_4c;
    FUN_004126f0(local_c,*(undefined4 *)(local_8 + 0x30),*(int *)(local_8 + 0x2c));
    *in_FS_OFFSET = uStackY_4c;
    puStackY_48 = (undefined1 *)0x47ea9f;
    System_TObject_Free(local_c);
    return;
  }
  *in_FS_OFFSET = uStack_40;
  *in_FS_OFFSET = local_34;
  puStack_2c = &LAB_0047ebaa;
  puStack_30 = (undefined1 *)0x47eba2;
  System__LStrArrayClr(local_1c,4);
  return;
}


/* ==== 0047ebe4 FUN_0047ebe4 ==== */

void FUN_0047ebe4(int param_1)

{
  LPCSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  puStack_1c = &LAB_0047ec7a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    System__LStrCat3((int *)&local_8,*(undefined4 **)(param_1 + 0x38),(undefined4 *)&DAT_0047ec90);
    lpFileName = System__LStrToPChar(local_8);
    RemoveFontResourceA(lpFileName);
    System__LStrCat3((int *)&local_c,*(undefined4 **)(param_1 + 0x38),(undefined4 *)&DAT_0047ec90);
    FUN_004088e4(local_c);
    System__LStrCat3((int *)&local_10,*(undefined4 **)(param_1 + 0x38),(undefined4 *)&DAT_0047eca0);
    FUN_004088e4(local_10);
    System_TObject_Free(*(int **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0047ec81;
  puStack_1c = (undefined1 *)0x47ec79;
  System__LStrArrayClr((int *)&local_10,3);
  return;
}


