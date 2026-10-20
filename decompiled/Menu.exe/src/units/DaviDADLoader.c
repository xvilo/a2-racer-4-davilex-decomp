/* Menu.exe — units/DaviDADLoader.pas: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00459584 TDaviDADLoader.virtual_018 ==== */

int * TDaviDADLoader_virtual_018(int *param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *extraout_ECX;
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
  TDaviAnimationLoader_virtual_018(param_1,'\0',param_3);
  piVar1 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX_00);
  param_1[4] = (int)piVar1;
  (**(code **)(*param_1 + 0xc))();
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 004595d4 TDaviDADLoader.Destroy ==== */

void TDaviDADLoader_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4595df;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_00459622;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  (**(code **)(*local_8 + 0x10))();
  SysUtils_FreeAndNil(local_8 + 4);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00459629;
  puStack_14 = (undefined1 *)0x459621;
  TDaviAnimationLoader_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0045963c FUN_0045963c ==== */

void FUN_0045963c(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  puStack_20 = &LAB_004596a5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  System__LStrAsg(param_3,param_2);
  FUN_004089a0((undefined *)param_2,&local_8);
  if (local_8 == 0) {
    FUN_004089a0(*(undefined **)(param_1 + 4),(int *)&local_c);
    System__LStrCat3(param_3,local_c,param_2);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004596ac;
  puStack_20 = (undefined1 *)0x4596a4;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 004596b4 FUN_004596b4 ==== */

void FUN_004596b4(undefined4 param_1,undefined *param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_10;
  uint *local_c;
  undefined *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (byte *)0x0;
  puStack_18 = (undefined1 *)0x4596c9;
  local_8 = param_2;
  System__LStrAddRef((int)param_2);
  puStack_1c = &LAB_00459764;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = 1;
  puStack_18 = &stack0xfffffffc;
  FUN_00408a68(local_8,(int *)&local_10);
  FUN_0040822c(local_10,(int *)&local_c);
  System__LStrCmp(local_c,(uint *)&DAT_0045977c);
  if ((bool)uVar1) {
    TDIB_virtual_00c((int *)&PTR_TPersistent_virtual_000_00458968,'\x01',extraout_ECX);
  }
  else {
    System__LStrCmp(local_c,(uint *)&DAT_0045978c);
    if ((bool)uVar1) {
      TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX_00);
    }
    else {
      System__Assert(" Unhandled case-part");
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045976b;
  puStack_1c = (undefined1 *)0x459756;
  System__LStrClr((int *)&local_10);
  puStack_1c = (undefined1 *)0x459763;
  System__LStrArrayClr((int *)&local_c,2);
  return;
}


/* ==== 004597e4 FUN_004597e4 ==== */

void FUN_004597e4(int param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int local_30 [4];
  int local_20 [4];
  undefined *local_10;
  int *local_c;
  int local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_10 = (undefined *)0x0;
  puStack_44 = &LAB_004598f9;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x459812;
  local_8 = param_2;
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(*(int **)(param_1 + 0x14),0,&local_10);
  puStack_4c = (undefined1 *)0x45981a;
  uVar2 = SysUtils_FileExists(local_10);
  if ((char)uVar2 != '\0') {
    puStack_4c = (undefined1 *)0x45982c;
    local_c = (int *)FUN_004596b4(param_1,local_10);
    puStack_4c = (undefined1 *)0x45983a;
    (**(code **)(*local_c + 0x48))(local_c,local_10);
    puStack_50 = &LAB_004598dc;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    FUN_00457194(*(int **)(param_1 + 0x10),*(int *)(*(int *)(param_1 + 8) + 0xc),
                 *(int *)(*(int *)(param_1 + 8) + 0x10),0x18);
    iVar3 = local_c[0x23] / *(int *)(*(int *)(param_1 + 8) + 4);
    iVar9 = local_c[0x10];
    piVar7 = local_20;
    uVar1 = (longlong)local_8 * (longlong)iVar3;
    if ((longlong)(int)(uint)uVar1 != uVar1) {
      uVar4 = System__RunError((uint)uVar1);
      uVar1 = (ulonglong)uVar4;
    }
    FUN_0040f804((int)uVar1,0,iVar3,piVar7,iVar9);
    piVar7 = local_20;
    FUN_0040f804(0,0,*(int *)(*(int *)(param_1 + 8) + 0xc),local_30,
                 *(int *)(*(int *)(param_1 + 8) + 0x10));
    piVar8 = local_30;
    piVar5 = (int *)FUN_00456800((int)local_c,extraout_EDX,extraout_ECX);
    piVar6 = (int *)FUN_00456800(*(int *)(param_1 + 0x10),extraout_EDX_00,extraout_ECX_00);
    FUN_00418f14(piVar6,piVar8,piVar5,piVar7);
    *in_FS_OFFSET = uStack_54;
    puStack_4c = (undefined1 *)0x4598e3;
    puStack_50 = (undefined1 *)0x4598db;
    System_TObject_Free(local_c);
    return;
  }
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00459900;
  puStack_44 = (undefined1 *)0x4598f8;
  System__LStrClr((int *)&local_10);
  return;
}


/* ==== 00459908 FUN_00459908 ==== */

void FUN_00459908(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_1c = &LAB_004599ad;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_2 < 0) {
    puStack_24 = (undefined1 *)0x459935;
    System__RunError(0);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puStack_24 = (undefined1 *)0x45993d;
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  puStack_24 = (undefined1 *)0x459945;
  uVar2 = SysUtils_FileExists(local_c);
  if ((char)uVar2 != '\0') {
    puStack_24 = (undefined1 *)0x459953;
    local_8 = (int *)FUN_004596b4(param_1,local_c);
    puStack_24 = (undefined1 *)0x459961;
    (**(code **)(*local_8 + 0x48))(local_8,local_c);
    puStack_28 = &LAB_00459990;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int **)(param_1 + 0x10),local_8);
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x459997;
    puStack_28 = (undefined1 *)0x45998f;
    System_TObject_Free(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004599b4;
  puStack_1c = (undefined1 *)0x4599ac;
  System__LStrClr((int *)&local_c);
  return;
}


/* ==== 004599bc TDaviDADLoader.virtual_00c ==== */

void TDaviDADLoader_virtual_00c(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 *puVar6;
  int *in_FS_OFFSET;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  undefined4 *local_120;
  undefined1 local_11c;
  int local_118;
  byte local_114 [180];
  undefined4 uStackY_60;
  undefined4 uStackY_5c;
  uint uStackY_58;
  undefined4 uStackY_54;
  int in_stack_ffffffc8;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int j;
  int i_val;
  undefined4 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  j = 0x27;
  do {
    local_8 = (undefined4 *)0x0;
    j = j + -1;
  } while (j != 0);
  puStack_24 = &LAB_00459d8b;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  uVar2 = SysUtils_FileExists((undefined *)param_1[1]);
  if ((char)uVar2 == '\0') {
    System_TObject_ClassName(*param_1,local_114);
    System__LStrFromString((int *)&stack0xffffffec,local_114);
    local_120 = (undefined4 *)param_1[1];
    local_11c = 0xb;
    SysUtils_Format((byte *)" File \"%s\" not found",&local_120,0,&local_118);
    System__LStrCatN(&j,4);
    System__Assert(j);
    in_stack_ffffffc8 = local_118;
  }
  uVar2 = SysUtils_FileExists((undefined *)param_1[1]);
  if ((char)uVar2 != '\0') {
    piVar3 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',(undefined4 *)param_1[1])
    ;
    param_1[7] = (int)piVar3;
    iVar5 = param_1[2];
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","FrameCount");
    *(undefined4 *)(iVar5 + 4) = uVar2;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","FramesPerSecond");
    *(undefined4 *)(iVar5 + 8) = uVar2;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","FrameWidth");
    *(undefined4 *)(iVar5 + 0xc) = uVar2;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","FrameHeight");
    *(undefined4 *)(iVar5 + 0x10) = uVar2;
    uVar1 = (**(code **)(*(int *)param_1[7] + 0x10))((int *)param_1[7],"Properties","HasLoop");
    *(undefined1 *)(*(int *)(iVar5 + 0x14) + 4) = uVar1;
    uStackY_54 = 0x459b10;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","LoopCount");
    *(undefined4 *)(*(int *)(iVar5 + 0x14) + 8) = uVar2;
    uStackY_54 = 0;
    uStackY_58 = 0x459b2a;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","LoopStartIndex");
    *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0xc) = uVar2;
    uVar4 = *(int *)(iVar5 + 4) - 1;
    if (*(int *)(iVar5 + 4) == 0) {
      uStackY_58 = 0x459b3d;
      uVar4 = System__RunError(0xffffffff);
    }
    if ((int)uVar4 < 0) {
      uStackY_58 = 0x459b46;
      uVar4 = System__RunError(uVar4);
    }
    uStackY_5c = 0x459b59;
    uStackY_58 = uVar4;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","LoopEndIndex");
    *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x10) = uVar2;
    uStackY_5c = 1;
    uStackY_60 = 0x459b73;
    uVar1 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","AnimationType");
    *(undefined1 *)(param_1 + 3) = uVar1;
    *(bool *)(param_1 + 6) = (char)param_1[3] == '\x01';
    iVar5 = System_TObject_Create((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
    param_1[5] = iVar5;
    if ((char)param_1[6] == '\0') {
      iVar5 = *(int *)(param_1[2] + 4);
    }
    else {
      iVar5 = 1;
    }
    uVar4 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = System__RunError(0xffffffff);
    }
    if ((int)uVar4 < 0) {
      uVar4 = System__RunError(uVar4);
    }
    if (-1 < (int)uVar4) {
      i_val = uVar4 + 1;
      puVar6 = (undefined4 *)0x0;
      do {
        SysUtils_IntToStr(puVar6,&local_124);
        (*(code *)**(undefined4 **)param_1[7])((undefined4 *)param_1[7],"Frames",local_124);
        if (local_8 == (undefined4 *)0x0) {
          System_TObject_ClassName(*param_1,local_114);
          System__LStrFromString(&local_12c,local_114);
          local_11c = 0;
          uStackY_54 = 0x459c42;
          local_120 = puVar6;
          SysUtils_Format((byte *)"DAD File: Missing frame %d",&local_120,0,&local_130);
          uStackY_54 = 0x459c58;
          System__LStrCatN(&local_128,4);
          uStackY_54 = 0x459c6d;
          System__Assert(local_128);
        }
        FUN_0045963c((int)param_1,local_8,&local_134);
        System__LStrLAsg((int *)&local_8,local_134);
        uVar2 = SysUtils_FileExists((undefined *)local_8);
        if ((char)uVar2 == '\0') {
          System_TObject_ClassName(*param_1,local_114);
          System__LStrFromString(&local_13c,local_114);
          local_120 = local_8;
          local_11c = 0xb;
          uStackY_54 = 0x459cf2;
          SysUtils_Format((byte *)" File \"%s\" not found",&local_120,0,&local_140);
          uStackY_54 = 0x459d08;
          System__LStrCatN(&local_138,4);
          uStackY_54 = 0x459d1d;
          System__Assert(local_138);
        }
        (**(code **)(*(int *)param_1[5] + 0x34))((int *)param_1[5],local_8);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  *in_FS_OFFSET = in_stack_ffffffc8;
  System__LStrArrayClr(&local_140,3);
  System__LStrClr(&local_134);
  System__LStrArrayClr(&local_130,4);
  System__LStrClr(&local_118);
  System__LStrArrayClr((int *)&stack0xffffffec,2);
  System__LStrClr((int *)&local_8);
  return;
}


/* ==== 00459f10 TDaviDADLoader.virtual_010 ==== */

void TDaviDADLoader_virtual_010(int param_1)

{
  SysUtils_FreeAndNil((undefined4 *)(param_1 + 0x1c));
  SysUtils_FreeAndNil((undefined4 *)(param_1 + 0x14));
  return;
}


/* ==== 00459f2c TDaviDADLoader.virtual_01c ==== */

void TDaviDADLoader_virtual_01c(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  uVar2 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_120 = &LAB_00459ff1;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  uVar3 = param_2;
  puVar1 = &stack0xfffffffc;
  if (*(uint *)(param_1[2] + 4) <= param_2) {
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(&local_c,local_10c);
    pcStack_134 = "DAD Frame index error";
    System__LStrCatN(&local_8,4);
    System__Assert(local_8);
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  FUN_00456634((int *)param_1[4],uVar3,uVar2);
  if (*(int *)(param_1[2] + 4) != 0) {
    if ((char)param_1[6] == '\0') {
      FUN_00459908((int)param_1,param_2);
    }
    else {
      FUN_004597e4((int)param_1,param_2);
    }
  }
  *in_FS_OFFSET = pcStack_134;
  System__LStrArrayClr(&local_c,2);
  return;
}


