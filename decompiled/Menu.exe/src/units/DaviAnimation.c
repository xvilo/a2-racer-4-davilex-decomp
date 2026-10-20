/* Menu.exe — units/DaviAnimation.pas: 35 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045b504 FUN_0045b504 ==== */

void FUN_0045b504(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
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
  puStack_11c = &LAB_0045b5dc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  if (param_1[1] != 0) {
    iVar2 = FUN_0041ff54(param_1[2],param_2);
    puVar1 = puStack_118;
    if (iVar2 != -1) goto LAB_0045b588;
  }
  puStack_118 = puVar1;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  pcStack_130 = "Cannot remove timer because it is not a valid timer.";
  System__LStrCatN(&local_8,4);
  System__Assert(local_8);
LAB_0045b588:
  if (((int *)param_1[2])[2] == 1) {
    SysUtils_FreeAndNil(param_1 + 1);
    FUN_0041ff88((int *)param_1[2],param_2);
  }
  else {
    FUN_0041ff88((int *)param_1[2],param_2);
    uVar3 = FUN_0045b19c((int)param_1);
    iVar2 = FUN_0045b200((int)param_1);
    TTimer_SetInterval(iVar2,uVar3);
  }
  *in_FS_OFFSET = pcStack_130;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0045b860 FUN_0045b860 ==== */

int * FUN_0045b860(int *param_1,char param_2,HGLOBAL mem)

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
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,mem,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    mem = extraout_ECX;
    cVar2 = extraout_DL;
  }
  System_TObject_Create(param_1,'\0',mem);
  param_1[5] = (int)mem;
  SVar1 = GlobalSize(mem);
  if ((int)SVar1 < 0) {
    SVar1 = System__RunError(SVar1);
  }
  global_lock = GlobalLock(mem);
  FUN_0041298c((int)param_1,global_lock,SVar1);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0045b8c0 TGlobalMemoryStream.Destroy ==== */

void TGlobalMemoryStream_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  GlobalUnlock((HGLOBAL)piVar1[5]);
  FUN_0041298c((int)piVar1,0,0);
  TMemoryStream_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0045b900 TDaviAnimation.virtual_00c ==== */

int * TDaviAnimation_virtual_00c(int *param_1,char param_2,undefined4 param_3)

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
  TGraphic_virtual_00c(param_1,'\0',param_3);
  piVar1 = TObjectList_virtual_008((int *)&LAB_004519c0,'\x01',0);
  param_1[0xc] = (int)piVar1;
  piVar1 = TDaviAnimationProperties_virtual_00c
                     ((int *)&PTR_TPersistent_virtual_000_0045a1ac,'\x01',extraout_ECX_00);
  param_1[10] = (int)piVar1;
  *(undefined1 *)(param_1 + 8) = 1;
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045b960 TDaviAnimation.Destroy ==== */

void TDaviAnimation_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45b96b;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_0045b9b9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0045b9d4(local_8);
  SysUtils_FreeAndNil(local_8 + 0xc);
  SysUtils_FreeAndNil(local_8 + 10);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045b9c0;
  puStack_14 = (undefined1 *)0x45b9b8;
  TPersistent_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0045b9d4 FUN_0045b9d4 ==== */

void FUN_0045b9d4(int *param_1)

{
  if (param_1[0x12] != 0) {
    SysUtils_FreeAndNil(param_1 + 0x12);
  }
  if (param_1[9] != 0) {
    FUN_0045be3c(param_1,param_1 + 9);
  }
  *(undefined4 *)(param_1[10] + 4) = 0;
  FUN_00451ac4((undefined4 *)param_1[0xc]);
  return;
}


/* ==== 0045ba0c TDaviAnimation.virtual_008 ==== */

void TDaviAnimation_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  int i_val;
  int j;
  
  if (param_2 == (int *)0x0) {
    FUN_0045b9d4(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  else {
    uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_0045b71c);
    if ((char)uVar1 == '\0') {
      TPersistent_virtual_008(param_1,param_2);
    }
    else if (param_1 != param_2) {
      piVar2 = (int *)System__AsClass(param_2,(int)&PTR_TPersistent_virtual_000_0045b71c);
      FUN_0045b9d4(param_1);
      if (piVar2[9] == 0) {
        iVar4 = FUN_00451bac(piVar2[0xc]);
        if (0 < iVar4) {
          iVar4 = FUN_00451bac(piVar2[0xc]);
          uVar5 = iVar4 - 1;
          uVar1 = extraout_ECX_00;
          if (SBORROW4(iVar4,1)) {
            uVar5 = System__RunError(uVar5);
            uVar1 = extraout_ECX_01;
          }
          if (-1 < (int)uVar5) {
            i_val = uVar5 + 1;
            j = 0;
            do {
              piVar3 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',uVar1);
              piVar6 = (int *)(*(code *)**(undefined4 **)piVar2[0xc])((undefined4 *)piVar2[0xc],j);
              uVar1 = System__AsClass(piVar6,(int)&LAB_00454aa4);
              (**(code **)(*piVar3 + 8))(piVar3,uVar1);
              (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar3);
              j = j + 1;
              i_val = i_val + -1;
              uVar1 = extraout_ECX_02;
            } while (i_val != 0);
          }
        }
      }
      else {
        piVar3 = FUN_0045a854(&PTR_TDaviAnimationLoaderFactory_virtual_000_0045a33c,extraout_EDX,
                              extraout_ECX);
        iVar4 = FUN_0045aba0(piVar3,*(byte **)(piVar2[9] + 4));
        param_1[9] = iVar4;
      }
      (**(code **)(*param_1 + 0x78))(param_1,piVar2[10]);
      (**(code **)(*param_1 + 0x74))(param_1,(char)piVar2[8]);
      (**(code **)(*param_1 + 0x7c))(param_1,piVar2[0xb]);
      (**(code **)(*param_1 + 0x80))(param_1,*(undefined1 *)((int)piVar2 + 0x3d));
      uVar1 = (**(code **)(*piVar2 + 0x2c))();
      (**(code **)(*param_1 + 0x40))(param_1,uVar1);
      uVar1 = (**(code **)(*piVar2 + 0x20))();
      (**(code **)(*param_1 + 0x34))(param_1,uVar1);
      *(char *)(param_1 + 0xf) = (char)piVar2[0xf];
      param_1[0x10] = piVar2[0x10];
      *(char *)(param_1 + 0x11) = (char)piVar2[0x11];
      (**(code **)(*param_1 + 0x3c))(param_1,(char)piVar2[0x13]);
      (**(code **)(*param_1 + 0x84))(param_1,piVar2[0x14]);
      (**(code **)(*param_1 + 0x88))(param_1,(char)piVar2[0x15]);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  return;
}


/* ==== 0045bb90 TDaviAnimation.virtual_070 ==== */

void TDaviAnimation_virtual_070(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_120 = &LAB_0045bc64;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  if (*(uint *)(param_1[10] + 4) <= param_2) {
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(&local_c,local_10c);
    pcStack_134 = "Frame index out of bounds.";
    System__LStrCatN(&local_8,4);
    System__Assert(local_8);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  piVar3 = (int *)param_1[9];
  if (piVar3 == (int *)0x0) {
    uVar2 = FUN_00451bac(param_1[0xc]);
    if (0 < (int)uVar2) {
      if ((int)param_2 < 0) {
        System__RunError(uVar2);
      }
      piVar3 = (int *)(*(code *)**(undefined4 **)param_1[0xc])();
      System__AsClass(piVar3,(int)&LAB_00454aa4);
    }
  }
  else {
    (**(code **)(*piVar3 + 0x1c))(piVar3,param_2);
  }
  *in_FS_OFFSET = pcStack_134;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0045bce8 TDaviAnimation.virtual_01c ==== */

undefined4 TDaviAnimation_virtual_01c(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x28) >> 8),
                  *(int *)(*(int *)(param_1 + 0x28) + 4) == 0);
}


/* ==== 0045bcf4 TDaviAnimation.virtual_02c ==== */

undefined4 TDaviAnimation_virtual_02c(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc);
}


/* ==== 0045bcfc TDaviAnimation.virtual_020 ==== */

undefined4 TDaviAnimation_virtual_020(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10);
}


/* ==== 0045bd04 TDaviAnimation.virtual_040 ==== */

void TDaviAnimation_virtual_040(int *param_1,int param_2)

{
  if (param_2 != *(int *)(param_1[10] + 0xc)) {
    *(int *)(param_1[10] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0045bd1c TDaviAnimation.virtual_034 ==== */

void TDaviAnimation_virtual_034(int *param_1,int param_2)

{
  if (param_2 != *(int *)(param_1[10] + 0x10)) {
    *(int *)(param_1[10] + 0x10) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0045bd34 TDaviAnimation.virtual_03c ==== */

void TDaviAnimation_virtual_03c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x13]) {
    *(char *)(param_1 + 0x13) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0045bd48 TDaviAnimation.virtual_084 ==== */

void TDaviAnimation_virtual_084(int *param_1,int param_2)

{
  if (param_2 != param_1[0x14]) {
    param_1[0x14] = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0045bd5c TDaviAnimation.virtual_088 ==== */

void TDaviAnimation_virtual_088(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x15]) {
    *(char *)(param_1 + 0x15) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0045bd70 TDaviAnimation.virtual_08c ==== */

void TDaviAnimation_virtual_08c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = param_1[0xb];
  piVar1 = param_1 + 0xb;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (iVar2 == -1) {
    System__RunError((uint)param_1);
  }
  if (param_1[0xb] == -1) {
    System__RunError(0xffffffff);
  }
  if ((*(char *)(*(int *)(param_1[10] + 0x14) + 4) != '\0') &&
     (*(uint *)(*(int *)(param_1[10] + 0x14) + 0x10) < (uint)param_1[0xb])) {
    uVar4 = *(uint *)(param_1[10] + 0x14);
    uVar5 = *(uint *)(uVar4 + 8);
    if (((uint)param_1[0xe] < uVar5) || (uVar5 == 0)) {
      piVar1 = param_1 + 0xe;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (iVar2 == -1) {
        System__RunError(uVar4);
      }
      param_1[0xb] = *(int *)(*(int *)(param_1[10] + 0x14) + 0xc);
    }
  }
  iVar2 = *(int *)(param_1[10] + 4);
  if (iVar2 == param_1[0xb]) {
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = System__RunError(0xffffffff);
    }
    if (iVar6 == -1) {
      iVar6 = System__RunError(0xffffffff);
    }
    param_1[0xb] = iVar6;
    FUN_0045c82c(param_1);
  }
  if (iVar3 != param_1[0xb]) {
    (**(code **)(*param_1 + 100))(param_1,param_1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0045be14 TDaviAnimation.virtual_074 ==== */

void TDaviAnimation_virtual_074(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_0045c798(param_1);
    return;
  }
  FUN_0045c82c(param_1);
  return;
}


/* ==== 0045be2c TDaviAnimation.virtual_078 ==== */

void TDaviAnimation_virtual_078(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x28) + 8))();
  return;
}


/* ==== 0045be3c FUN_0045be3c ==== */

void FUN_0045be3c(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *in_stack_fffffed8;
  char *pcVar4;
  char *pcVar5;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_108 [256];
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_118 = &LAB_0045bed7;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  bVar1 = FUN_0045a88c();
  if (bVar1) {
    piVar2 = FUN_0045a854(&PTR_TDaviAnimationLoaderFactory_virtual_000_0045a33c,extraout_EDX,
                          extraout_ECX);
    FUN_0045aca0((int)piVar2,*param_2);
    *param_2 = 0;
  }
  else {
    pcVar5 = "SafeDeleteAnimationLoader";
    pcVar4 = "Could not delete because the application has already been finalized.";
    in_stack_fffffed8 = "Make sure everything has been freed before the application is closed.";
    System_TObject_ClassName(*param_1,local_108);
    System__LStrFromString((int *)&local_8,local_108);
    uVar3 = FUN_00453d0c((int *)&PTR_EDavilex_virtual_000_00453ba0,'\x01',local_8,
                         (undefined4 *)in_stack_fffffed8,(undefined4 *)pcVar4,(undefined4 *)pcVar5);
    System__RaiseExcept(uVar3);
  }
  *in_FS_OFFSET = in_stack_fffffed8;
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0045bfa8 TDaviAnimation.virtual_07c ==== */

void TDaviAnimation_virtual_07c(int *param_1,uint param_2)

{
  undefined1 *puVar1;
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
  puStack_11c = &LAB_0045c063;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  if (*(uint *)(param_1[10] + 4) <= param_2) {
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(&local_c,local_10c);
    pcStack_130 = "Frame index out of bounds.";
    System__LStrCatN(&local_8,4);
    System__Assert(local_8);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  if (((param_1[0x12] == 0) || (*(char *)(param_1[0x12] + 0x24) == '\0')) &&
     (param_2 != param_1[0xb])) {
    param_1[0xb] = param_2;
    (**(code **)(*param_1 + 100))(param_1,param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  *in_FS_OFFSET = pcStack_130;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0045c0e8 TDaviAnimation.virtual_060 ==== */

void TDaviAnimation_virtual_060(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int i_val;
  int j;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if ((cVar1 == '\0') && (param_1[9] != 0)) {
    FUN_00451ac4((undefined4 *)param_1[0xc]);
    i_val = *(int *)(param_1[10] + 4) + -1;
    uVar3 = extraout_ECX;
    if (*(int *)(param_1[10] + 4) == 0) {
      i_val = System__RunError(0xffffffff);
      uVar3 = extraout_ECX_00;
    }
    if (i_val == -1) {
      i_val = System__RunError(0xffffffff);
      uVar3 = extraout_ECX_01;
    }
    i_val = i_val + 1;
    j = 0;
    do {
      piVar2 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',uVar3);
      uVar3 = (**(code **)(*(int *)param_1[9] + 0x1c))((int *)param_1[9],j);
      (**(code **)(*piVar2 + 8))(piVar2,uVar3);
      (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar2);
      j = j + 1;
      i_val = i_val + -1;
      uVar3 = extraout_ECX_02;
    } while (i_val != 0);
    FUN_0045be3c(param_1,param_1 + 9);
  }
  return;
}


/* ==== 0045c178 TDaviAnimation.virtual_064 ==== */

void TDaviAnimation_virtual_064(int param_1)

{
  if (*(short *)(param_1 + 0x5a) != 0) {
    (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c));
  }
  return;
}


/* ==== 0045c190 TDaviAnimation.virtual_068 ==== */

void TDaviAnimation_virtual_068(int param_1)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100));
  }
  return;
}


/* ==== 0045c1a8 TDaviAnimation.virtual_06c ==== */

void TDaviAnimation_virtual_06c(int param_1)

{
  if (*(short *)(param_1 + 0x6a) != 0) {
    (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x6c));
  }
  return;
}


/* ==== 0045c1c0 TDaviAnimation.virtual_080 ==== */

void TDaviAnimation_virtual_080(int *param_1,char param_2)

{
  if ((param_2 != *(char *)((int)param_1 + 0x3d)) &&
     (*(char *)((int)param_1 + 0x3d) = param_2, param_2 != '\0')) {
    (**(code **)(*param_1 + 0x60))();
  }
  return;
}


/* ==== 0045c1d8 TDaviAnimation.virtual_048 ==== */

void TDaviAnimation_virtual_048(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *in_FS_OFFSET;
  int in_stack_fffffec0;
  int iStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte *local_118;
  undefined1 local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_110 = 0;
  puStack_12c = &LAB_0045c2f6;
  iStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_130;
  uVar1 = SysUtils_FileExists(param_2);
  if ((char)uVar1 == '\0') {
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(&local_c,local_10c);
    local_114 = 0xb;
    local_118 = param_2;
    SysUtils_Format((byte *)" File \"%s\" not found",&local_118,0,&local_110);
    in_stack_fffffec0 = local_110;
    System__LStrCatN(&local_8,4);
    System__Assert(local_8);
  }
  FUN_0045b9d4(param_1);
  piVar2 = FUN_0045a854(&PTR_TDaviAnimationLoaderFactory_virtual_000_0045a33c,extraout_EDX,
                        extraout_ECX);
  iVar3 = FUN_0045aba0(piVar2,param_2);
  param_1[9] = iVar3;
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined4 *)(iVar3 + 8));
  }
  if (*(char *)((int)param_1 + 0x3d) != '\0') {
    (**(code **)(*param_1 + 0x60))();
  }
  if ((char)param_1[8] != '\0') {
    FUN_0045c798(param_1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  *in_FS_OFFSET = in_stack_fffffec0;
  System__LStrClr(&local_110);
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0045c378 TDaviAnimation.virtual_04c ==== */

void TDaviAnimation_virtual_04c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_114 [256];
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_124 = &LAB_0045c412;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  pcVar4 = "SafeToFile";
  local_c = 0xb;
  local_10 = param_2;
  SysUtils_Format((byte *)"Unable to save to file %s.",&local_10,0,(int *)&local_8);
  pcVar2 = "Function is not implemented.";
  puVar3 = local_8;
  System_TObject_ClassName(*param_1,local_114);
  System__LStrFromString((int *)&local_14,local_114);
  uVar1 = FUN_00453d0c((int *)&PTR_EDavilex_virtual_000_00453ba0,'\x01',local_14,
                       (undefined4 *)pcVar2,puVar3,(undefined4 *)pcVar4);
  System__RaiseExcept(uVar1);
  *in_FS_OFFSET = pcVar2;
  System__LStrClr((int *)&local_14);
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 0045c480 TDaviAnimation.virtual_050 ==== */

void TDaviAnimation_virtual_050(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_ECX_01;
  int i_val;
  
  FUN_0045b9d4(param_1);
  (**(code **)(*(int *)param_1[10] + 0x10))((int *)param_1[10],param_2);
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    i_val = *(int *)(param_1[10] + 4);
    uVar4 = extraout_ECX;
    if (i_val == 0) {
      uVar2 = System__RunError(param_1[10]);
      System__RunError(uVar2);
      uVar4 = extraout_ECX_00;
    }
    do {
      piVar3 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',uVar4);
      (**(code **)(*piVar3 + 0x50))(piVar3,param_2);
      (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar3);
      i_val = i_val + -1;
      uVar4 = extraout_ECX_01;
    } while (i_val != 0);
    if ((char)param_1[8] != '\0') {
      FUN_0045c798(param_1);
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


/* ==== 0045c50c TDaviAnimation.virtual_058 ==== */

void TDaviAnimation_virtual_058(int *param_1,short param_2,HGLOBAL mem)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  char *pcStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_120 = &LAB_0045c5e5;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0x82) {
    iStack_128 = 0x45c545;
    System_TObject_ClassName(*param_1,local_110);
    iStack_128 = 0x45c553;
    System__LStrFromString(&local_10,local_110);
    iStack_128 = local_10;
    pcStack_12c = ".LoadFromClipboardFormat";
    puStack_130 = &DAT_0045c620;
    pcStack_134 = "Wrong clipboard data format.";
    puStack_138 = (undefined1 *)0x45c572;
    System__LStrCatN(&local_c,4);
    puStack_138 = (undefined1 *)0x45c584;
    System__Assert(local_c);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  puStack_138 = (undefined1 *)0x45c592;
  local_8 = FUN_0045b860((int *)&LAB_0045b838,'\x01',mem);
  puStack_13c = &LAB_0045c5c3;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x50))(param_1,local_8);
  *in_FS_OFFSET = uStack_140;
  puStack_138 = &LAB_0045c5ca;
  puStack_13c = (undefined1 *)0x45c5c2;
  System_TObject_Free(local_8);
  return;
}


/* ==== 0045c67c TDaviAnimation.virtual_054 ==== */

void TDaviAnimation_virtual_054(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int i_val;
  int j;
  
  (**(code **)(*(int *)param_1[10] + 0x14))((int *)param_1[10],param_2);
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    i_val = *(int *)(param_1[10] + 4);
    if (i_val == 0) {
      uVar2 = System__RunError(param_1[10]);
      System__RunError(uVar2);
    }
    j = 0;
    do {
      piVar3 = (int *)(**(code **)(*param_1 + 0x70))(param_1,j);
      (**(code **)(*piVar3 + 0x54))(piVar3,param_2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return;
}


/* ==== 0045c6e4 TDaviAnimation.virtual_05c ==== */

void TDaviAnimation_virtual_05c(int *param_1,undefined2 *param_2,int *param_3,undefined4 *param_4)

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
  
  *param_2 = 0x82;
  *param_4 = 0;
  puStack_18 = (undefined1 *)0x45c707;
  piVar1 = (int *)System_TObject_Create
                            ((int *)&PTR_TMemoryStream_virtual_000_0040f194,'\x01',param_3);
  puStack_1c = &LAB_0045c786;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x54))(param_1,piVar1);
  dwBytes = FUN_00412680(piVar1);
  if ((int)dwBytes < 0) {
    dwBytes = System__RunError(dwBytes);
  }
  global_alloc = GlobalAlloc(0x42,dwBytes);
  *param_3 = (int)global_alloc;
  if (*param_3 == 0) {
    FUN_0040b5cc();
  }
  global_lock = GlobalLock((HGLOBAL)*param_3);
  uVar2 = FUN_00412680(piVar1);
  System_Move((undefined4 *)piVar1[1],global_lock,uVar2);
  GlobalUnlock((HGLOBAL)*param_3);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045c78d;
  puStack_1c = (undefined1 *)0x45c785;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 0045c798 FUN_0045c798 ==== */

void FUN_0045c798(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 0xd) = 0;
    iVar3 = extraout_EDX;
    if ((param_1[0x12] == 0) && (iVar3 = param_1[10], *(int *)(iVar3 + 8) != 0)) {
      piVar2 = TDaviTimer_virtual_02c
                         ((int *)&PTR_TPersistent_virtual_000_0045adf4,'\x01',(int *)0x0);
      param_1[0x12] = (int)piVar2;
      TDaviTimer_SetOnTimer
                ((int)piVar2,extraout_EDX_00,extraout_ECX_00,*(undefined4 *)(*param_1 + 0x8c),
                 param_1);
      TDaviTimer_SetInterval
                (param_1[0x12],(int)(1000 / (ulonglong)*(uint *)(param_1[10] + 8)),
                 *(uint *)(param_1[10] + 8));
    }
    else {
      TDaviTimer_SetEnabled(param_1[0x12],CONCAT31((int3)((uint)iVar3 >> 8),1),extraout_ECX);
    }
    (**(code **)(*param_1 + 0x68))(param_1,param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


/* ==== 0045c82c FUN_0045c82c ==== */

void FUN_0045c82c(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    if (param_1[0x12] != 0) {
      SysUtils_FreeAndNil(param_1 + 0x12);
      (**(code **)(*param_1 + 0x6c))(param_1,param_1);
    }
  }
  return;
}


/* ==== 0045c860 TDaviAnimation.virtual_014 ==== */

void TDaviAnimation_virtual_014(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    piVar2 = (int *)(**(code **)(*param_1 + 0x70))(param_1,param_1[0xb]);
    (**(code **)(*piVar2 + 0x3c))(piVar2,(char)param_1[0x13]);
    FUN_00457260(piVar2,param_1[0x14]);
    FUN_0045727c(piVar2,(char)param_1[0x15]);
    FUN_00419200(param_2,param_3,piVar2);
  }
  return;
}


