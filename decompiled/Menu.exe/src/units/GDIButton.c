/* Menu.exe — units/GDIButton.pas: 79 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00465660 TGDIButton.GetTabOrder ==== */

int TGDIButton_GetTabOrder(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004656b4(param_1);
    iVar2 = TGroupBox_GetTabOrder(iVar1);
  }
  return iVar2;
}


/* ==== 0046568c TGDIButton.GetTabStop ==== */

undefined1 TGDIButton_GetTabStop(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004656b4(param_1);
    uVar2 = *(undefined1 *)(iVar1 + 0x174);
  }
  return uVar2;
}


/* ==== 004657e8 TGDIButton.SetTabOrder ==== */

void TGDIButton_SetTabOrder(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004656b4(param_1);
    TGroupBox_SetTabOrder(iVar1,param_2);
  }
  return;
}


/* ==== 00465810 TGDIButton.SetTabStop ==== */

void TGDIButton_SetTabStop(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004656b4(param_1);
    TGroupBox_SetTabStop(iVar1,param_2);
  }
  return;
}


/* ==== 00467844 TCaptionRect.virtual_00c ==== */

void TCaptionRect_virtual_00c(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* ==== 00467850 TCaptionRect.virtual_010 ==== */

void TCaptionRect_virtual_010(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  return;
}


/* ==== 0046785c TCaptionRect.virtual_014 ==== */

undefined4 TCaptionRect_virtual_014(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* ==== 00467860 TCaptionRect.virtual_018 ==== */

undefined4 TCaptionRect_virtual_018(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* ==== 00467864 TCaptionRect.virtual_01c ==== */

undefined4 TCaptionRect_virtual_01c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* ==== 00467868 TCaptionRect.virtual_020 ==== */

undefined4 TCaptionRect_virtual_020(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


/* ==== 0046786c TCaptionRect.virtual_024 ==== */

void TCaptionRect_virtual_024(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if ((*(int *)(param_1 + 0x10) != *param_2) && (*(int *)(param_1 + 0x14) != iVar1)) {
    *(int *)(param_1 + 0x10) = *param_2;
    *(int *)(param_1 + 0x14) = iVar1;
    FUN_0046792c(param_1);
  }
  return;
}


/* ==== 004678a4 TCaptionRect.virtual_028 ==== */

void TCaptionRect_virtual_028(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if ((*(int *)(param_1 + 0x18) != *param_2) && (*(int *)(param_1 + 0x1c) != iVar1)) {
    *(int *)(param_1 + 0x18) = *param_2;
    *(int *)(param_1 + 0x1c) = iVar1;
    FUN_0046792c(param_1);
  }
  return;
}


/* ==== 004678dc TCaptionRect.virtual_02c ==== */

void TCaptionRect_virtual_02c(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = param_2;
    FUN_0046792c(param_1);
  }
  return;
}


/* ==== 004678f0 TCaptionRect.virtual_030 ==== */

void TCaptionRect_virtual_030(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = param_2;
    FUN_0046792c(param_1);
  }
  return;
}


/* ==== 00467904 TCaptionRect.virtual_034 ==== */

void TCaptionRect_virtual_034(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = param_2;
    FUN_0046792c(param_1);
  }
  return;
}


/* ==== 00467918 TCaptionRect.virtual_038 ==== */

void TCaptionRect_virtual_038(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = param_2;
    FUN_0046792c(param_1);
  }
  return;
}


/* ==== 0046792c FUN_0046792c ==== */

void FUN_0046792c(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}


/* ==== 00467944 TGDICustomButtonDefinition.virtual_02c ==== */

int * TGDICustomButtonDefinition_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  char extraout_DL;
  char cVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  byte i_val;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffdc,
                                         in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  iVar1 = System_TObject_Create((int *)&PTR_TPersistent_virtual_000_00466c0c,'\x01',extraout_ECX_00)
  ;
  param_1[0x1a] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*param_1 + 0x30);
  *(undefined1 *)((int)param_1 + 0x6d) = 1;
  *(undefined1 *)((int)param_1 + 0x6e) = 2;
  i_val = 0;
  do {
    piVar2 = TDaviLinkedGraphic_virtual_014
                       ((int *)&PTR_TPersistent_virtual_000_0045ca28,'\x01',param_1);
    param_1[i_val + 9] = (int)piVar2;
    piVar2[7] = (int)param_1;
    piVar2[6] = (int)FUN_00467e40;
    i_val = i_val + 1;
  } while (i_val != 7);
  puVar4 = &LAB_00467d64;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_GetUpLink((int)param_1,0);
  FUN_0045d4a4(iVar1,extraout_EDX,extraout_ECX_01,puVar4,piVar2);
  pcVar5 = FUN_00467d78;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_GetUpLink((int)param_1,1);
  FUN_0045d4a4(iVar1,extraout_EDX_00,extraout_ECX_02,pcVar5,piVar2);
  puVar4 = &LAB_00467d90;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_GetUpLink((int)param_1,2);
  FUN_0045d4a4(iVar1,extraout_EDX_01,extraout_ECX_03,puVar4,piVar2);
  puVar4 = &LAB_00467da8;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_GetUpLink((int)param_1,3);
  FUN_0045d4a4(iVar1,extraout_EDX_02,extraout_ECX_04,puVar4,piVar2);
  puVar4 = &LAB_00467dc0;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_GetUpLink((int)param_1,4);
  FUN_0045d4a4(iVar1,extraout_EDX_03,extraout_ECX_05,puVar4,piVar2);
  param_1[0x10] = 100;
  param_1[0x11] = 0x32;
  iVar1 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_06);
  param_1[0x12] = iVar1;
  piVar2 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_07);
  param_1[0x13] = (int)piVar2;
  piVar2 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_08);
  param_1[0x14] = (int)piVar2;
  *(undefined1 *)((int)param_1 + 0x5d) = 0xff;
  if (cVar3 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


/* ==== 00467a88 TGDICustomButtonDefinition.Destroy ==== */

void TGDICustomButtonDefinition_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  byte i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x467a94;
  piVar1 = System__BeforeDestruction(param_1,param_2);
  puStack_18 = &LAB_00467b0e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  SysUtils_FreeAndNil(piVar1 + 0x1a);
  FUN_00467e60((int)piVar1,0x5405,0,0);
  SysUtils_FreeAndNil(piVar1 + 0x14);
  i_val = 0;
  do {
    SysUtils_FreeAndNil(piVar1 + i_val + 9);
    i_val = i_val + 1;
  } while (i_val != 7);
  SysUtils_FreeAndNil(piVar1 + 0x12);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00467b15;
  puStack_18 = (undefined1 *)0x467b0d;
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  return;
}


/* ==== 00467b28 FUN_00467b28 ==== */

void FUN_00467b28(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte i_val;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  i_val = 0;
  do {
    if (i_val != 5) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x24 + (uint)i_val * 4) + 0xc);
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 0x1c))();
        if (cVar2 == '\0') {
          iVar3 = (**(code **)(*piVar1 + 0x2c))();
          if (local_8 < iVar3) {
            local_8 = (**(code **)(*piVar1 + 0x2c))();
          }
          iVar3 = (**(code **)(*piVar1 + 0x20))();
          if (local_c < iVar3) {
            local_c = (**(code **)(*piVar1 + 0x20))();
          }
        }
      }
    }
    i_val = i_val + 1;
  } while (i_val != 7);
  if ((0 < local_8) && (*(int *)(param_1 + 0x40) != local_8)) {
    *(int *)(param_1 + 0x40) = local_8;
  }
  if ((0 < local_c) && (*(int *)(param_1 + 0x44) != local_c)) {
    *(int *)(param_1 + 0x44) = local_c;
  }
  return;
}


/* ==== 00467bc0 TGDIButtonDefinition.GetUpLink ==== */

int TGDIButtonDefinition_GetUpLink(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  if (6 < param_2) {
    System__Assert("Assertion failure");
  }
  iVar1 = *(int *)(param_1 + 0x24 + (param_2 & 0xff) * 4);
  piVar4 = *(int **)(iVar1 + 0xc);
  cVar2 = (**(code **)(*piVar4 + 0x1c))();
  if (cVar2 == '\0') {
    (**(code **)(*piVar4 + 0x3c))(piVar4,*(undefined1 *)(param_1 + 0x54));
    uVar3 = System__IsClass(piVar4,(int)&LAB_00454aa4);
    if ((char)uVar3 == '\0') {
      uVar3 = System__IsClass(piVar4,(int)&PTR_TPersistent_virtual_000_004173a4);
      if ((char)uVar3 == '\0') {
        uVar3 = System__IsClass(piVar4,(int)&PTR_TPersistent_virtual_000_0045b71c);
        if ((char)uVar3 != '\0') {
          piVar4 = (int *)System__AsClass(piVar4,(int)&PTR_TPersistent_virtual_000_0045b71c);
          (**(code **)(*piVar4 + 0x88))(piVar4,(char)piVar4[0x15]);
          (**(code **)(*piVar4 + 0x84))(piVar4,piVar4[0x14]);
        }
      }
      else {
        piVar4 = (int *)System__AsClass(piVar4,(int)&PTR_TPersistent_virtual_000_004173a4);
        FUN_0041ee80(piVar4,(char)piVar4[0xc]);
        uVar6 = FUN_0041e000(piVar4);
        FUN_0041ee30(piVar4,uVar6);
      }
    }
    else {
      piVar4 = (int *)System__AsClass(piVar4,(int)&LAB_00454aa4);
      FUN_0045727c(piVar4,(char)piVar4[0x22]);
      iVar5 = FUN_00456a14((int)piVar4);
      FUN_00457260(piVar4,iVar5);
    }
  }
  return iVar1;
}


/* ==== 00467d10 TGDIButtonDefinition.SetUpLink ==== */

void TGDIButtonDefinition_SetUpLink(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)TGDIButtonDefinition_GetUpLink(param_1,param_2);
  (**(code **)(*piVar1 + 8))(piVar1,param_3);
  FUN_00467b28(param_1);
  FUN_00467e60(param_1,0x5401,0,0);
  return;
}


/* ==== 00467d48 FUN_00467d48 ==== */

undefined4 FUN_00467d48(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = TGDIButtonDefinition_GetUpLink(param_1,param_2);
  return *(undefined4 *)(iVar1 + 0xc);
}


/* ==== 00467d78 FUN_00467d78 ==== */

void FUN_00467d78(int param_1)

{
  FUN_00467e60(param_1,0x5403,1,0);
  return;
}


/* ==== 00467dd8 TGDICustomButtonDefinition.virtual_030 ==== */

void TGDICustomButtonDefinition_virtual_030(int param_1)

{
  FUN_00467e60(param_1,0x5402,0,0);
  return;
}


/* ==== 00467dec TGDICustomButtonDefinition.virtual_034 ==== */

void TGDICustomButtonDefinition_virtual_034(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x6c)) {
    *(char *)(param_1 + 0x6c) = param_2;
    FUN_00467e60(param_1,0x5402,0,0);
  }
  return;
}


/* ==== 00467e08 TGDICustomButtonDefinition.virtual_038 ==== */

void TGDICustomButtonDefinition_virtual_038(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x6d)) {
    *(char *)(param_1 + 0x6d) = param_2;
    FUN_00467e60(param_1,0x5402,0,0);
  }
  return;
}


/* ==== 00467e24 TGDICustomButtonDefinition.virtual_03c ==== */

void TGDICustomButtonDefinition_virtual_03c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x6e)) {
    *(char *)(param_1 + 0x6e) = param_2;
    FUN_00467e60(param_1,0x5402,0,0);
  }
  return;
}


/* ==== 00467e40 FUN_00467e40 ==== */

void FUN_00467e40(int param_1)

{
  FUN_00467b28(param_1);
  FUN_00467e60(param_1,0x5401,0,0);
  return;
}


/* ==== 00467e60 FUN_00467e60 ==== */

void FUN_00467e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int i_val;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 0x48) + 8);
  i_val = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    System__RunError(*(uint *)(param_1 + 0x48));
  }
  if (-1 < i_val) {
    do {
      uVar2 = param_4;
      iVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x48),i_val);
      Controls_TControl_Perform(iVar1,param_2,param_3,uVar2);
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 00467eac FUN_00467eac ==== */

void FUN_00467eac(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,param_4,param_3);
  }
  return;
}


/* ==== 00467ed0 FUN_00467ed0 ==== */

int * FUN_00467ed0(int param_1,byte param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00467d48(param_1,(uint)param_2);
  cVar1 = (**(code **)(*piVar2 + 0x1c))();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_00467d48(param_1,0);
  }
  return piVar2;
}


/* ==== 00467f04 FUN_00467f04 ==== */

void FUN_00467f04(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Classes_TList_IndexOf(*(int *)(param_1 + 0x48),param_2);
  if (iVar1 == -1) {
    Classes_TList_Add(*(int **)(param_1 + 0x48),param_2);
    Controls_TControl_Perform(param_2,0x5401,0,0);
  }
  return;
}


/* ==== 00467f38 FUN_00467f38 ==== */

void FUN_00467f38(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Classes_TList_IndexOf(*(int *)(param_1 + 0x48),param_2);
  if (iVar1 != -1) {
    Classes_TList_Delete(*(int **)(param_1 + 0x48),iVar1);
    Controls_TControl_Perform(param_2,0x5404,0,0);
  }
  return;
}


/* ==== 00467f70 FUN_00467f70 ==== */

uint FUN_00467f70(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar2 = 0x20;
  }
  else {
    uVar2 = 0x10;
  }
  cVar1 = *(char *)(param_1 + 0x6d);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar2 = uVar2 | 4;
    }
    else if (cVar1 == '\x02') {
      uVar2 = uVar2 | 8;
    }
  }
  cVar1 = *(char *)(param_1 + 0x6e);
  if (cVar1 == '\0') {
    return uVar2;
  }
  if (cVar1 == '\x01') {
    return uVar2 | 2;
  }
  if (cVar1 == '\x02') {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}


/* ==== 00467fc0 TGDIButtonDefinition.SetFont ==== */

void TGDIButtonDefinition_SetFont(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
  FUN_00467e60(param_1,0x5402,0,0);
  return;
}


/* ==== 00467fe4 TGDIButtonDefinition.SetHintFont ==== */

void TGDIButtonDefinition_SetHintFont(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x50) + 8))();
  FUN_00467e60(param_1,0x5402,0,0);
  return;
}


/* ==== 00468008 TGDIButtonDefinition.SetTransparent ==== */

void TGDIButtonDefinition_SetTransparent(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x54)) {
    *(char *)(param_1 + 0x54) = param_2;
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


/* ==== 00468024 TGDIButtonDefinition.SetTransparentColor ==== */

void TGDIButtonDefinition_SetTransparentColor(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = param_2;
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


/* ==== 00468040 TGDIButtonDefinition.SetTransparentMode ==== */

void TGDIButtonDefinition_SetTransparentMode(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x55)) {
    *(char *)(param_1 + 0x55) = param_2;
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


/* ==== 0046805c TGDIButtonDefinition.SetTranslucent ==== */

void TGDIButtonDefinition_SetTranslucent(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x5c)) {
    *(char *)(param_1 + 0x5c) = param_2;
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


/* ==== 00468078 TGDIButtonDefinition.SetTranslucencyFactor ==== */

void TGDIButtonDefinition_SetTranslucencyFactor(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x5d)) &&
     (*(char *)(param_1 + 0x5d) = param_2, *(char *)(param_1 + 0x5c) != '\0')) {
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


/* ==== 0046809c TGDIButtonDefinition.SetWidth ==== */

void TGDIButtonDefinition_SetWidth(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = param_2;
    FUN_00467b28(param_1);
    FUN_00467e60(param_1,0x5401,0,0);
  }
  return;
}


/* ==== 004680c4 TGDIButtonDefinition.SetHeight ==== */

void TGDIButtonDefinition_SetHeight(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x44) = param_2;
    FUN_00467b28(param_1);
    FUN_00467e60(param_1,0x5401,0,0);
  }
  return;
}


/* ==== 004680ec TCustomGDIButton.virtual_02c ==== */

int * TCustomGDIButton_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
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
  TWinControlWrapper_virtual_02c(param_1,'\0',param_3);
  piVar1 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX_00);
  param_1[0x5f] = (int)piVar1;
  FUN_00457194(piVar1,100,0x32,0x20);
  TControl_SetWidth(param_1,100);
  TControl_SetHeight(param_1,0x32);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  param_1[0x10] = param_1[0x10] & 0xffffff7f;
  piVar1 = TCustomApplicationEvents_virtual_02c
                     ((int *)&PTR_TPersistent_virtual_000_00464218,'\x01',param_1);
  param_1[0x62] = (int)piVar1;
  param_1[100] = 0x3c;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    piVar1 = TDaviTimer_virtual_02c((int *)&PTR_TPersistent_virtual_000_0045adf4,'\x01',param_1);
    param_1[0x61] = (int)piVar1;
    TDaviTimer_SetInterval((int)piVar1,param_1[100],extraout_ECX_01);
    TDaviTimer_SetOnTimer(param_1[0x61],extraout_EDX,extraout_ECX_02,FUN_00468284,param_1);
  }
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 004681e0 TCustomGDIButton.Destroy ==== */

void TCustomGDIButton_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4681eb;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_00468232;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  TGDIButton_SetDefinition(local_8,0);
  SysUtils_FreeAndNil(local_8 + 0x5f);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00468239;
  puStack_14 = (undefined1 *)0x468231;
  TWinControlWrapper_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0046824c TCustomGDIButton.virtual_0b8 ==== */

undefined4 TCustomGDIButton_virtual_0b8(void)

{
  return 0;
}


/* ==== 00468250 TCustomGDIButton.virtual_0bc ==== */

void TCustomGDIButton_virtual_0bc(void)

{
  return;
}


/* ==== 00468254 TCustomGDIButton.virtual_0c0 ==== */

void TCustomGDIButton_virtual_0c0(int param_1,undefined4 param_2,LONG *param_3)

{
  int i_val;
  LONG *pLVar1;
  LONG local_14 [4];
  
  pLVar1 = local_14;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    *pLVar1 = *param_3;
    param_3 = param_3 + 1;
    pLVar1 = pLVar1 + 1;
  }
  FUN_00465adc(*(int **)(param_1 + 0x120),local_14,(int)PTR_DAT_004ab8d0,0);
  return;
}


/* ==== 00468284 FUN_00468284 ==== */

void FUN_00468284(int *param_1)

{
  POINT pt;
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_EDX;
  LONG LVar4;
  LONG LVar5;
  RECT local_24;
  LONG local_14;
  LONG local_10;
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  FUN_0042e2d8(param_1,&local_c.x,&local_14);
  LVar4 = local_14;
  LVar5 = local_10;
  (**(code **)(*param_1 + 0x40))(param_1,&local_24);
  pt.y = LVar5;
  pt.x = LVar4;
  BVar1 = PtInRect(&local_24,pt);
  if (((BVar1 != 0) &&
      (piVar2 = FUN_0042d198(&local_c,CONCAT31((int3)((uint)extraout_EDX >> 8),1)),
      param_1 == piVar2)) &&
     (iVar3 = (**(code **)(*param_1 + 0x94))(param_1,local_14,local_10), iVar3 == 1)) {
    if (*(char *)((int)param_1 + 0x181) != '\0') {
      return;
    }
    (**(code **)(*param_1 + 0xa4))();
    return;
  }
  if (*(char *)((int)param_1 + 0x181) != '\0') {
    (**(code **)(*param_1 + 0xa8))();
  }
  return;
}


/* ==== 00468310 FUN_00468310 ==== */

undefined4 FUN_00468310(int *param_1)

{
  HWND pHVar1;
  undefined4 uVar2;
  
  pHVar1 = GetFocus();
  uVar2 = (**(code **)(*param_1 + 0xb0))();
  if (((char)uVar2 == '\0') && ((*(char *)((int)param_1 + 0x179) == '\0' || (pHVar1 != (HWND)0x0))))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}


/* ==== 00468344 TCustomGDIButton.dynamic_ffec ==== */

void TCustomGDIButton_dynamic_ffec(int *param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  piVar1 = (int *)FUN_004656b4((int)param_1);
  piVar1 = Forms_GetParentForm(piVar1);
  if (piVar1 != (int *)0x0) {
    piVar1[0x8d] = param_1[99];
  }
  (**(code **)(*param_1 + 0x74))();
  TControl_dynamic_ffec((int)param_1);
  return;
}


/* ==== 00468380 TCustomGDIButton.CMDialogChar ==== */

void TCustomGDIButton_CMDialogChar(int *param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0046840a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TGroupBox_GetCaption((int)param_1,&local_8);
  cVar1 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if ((((cVar1 != '\0') && (*(char *)((int)param_1 + 0x47) != '\0')) && (param_1[9] != 0)) &&
       (*(char *)(param_1[9] + 0x168) != '\0')) {
      System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_004683f4;
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
LAB_004683f4:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00468411;
  puStack_1c = (undefined1 *)0x468409;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00468418 TCustomGDIButton.CMDialogKey ==== */

void TCustomGDIButton_CMDialogKey(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((((*(short *)(param_2 + 4) == 0xd) && (uVar3 = FUN_00468310(param_1), (char)uVar3 != '\0')) ||
      ((*(short *)(param_2 + 4) == 0x1b && ((char)param_1[0x5e] != '\0')))) &&
     ((bVar1 = FUN_0044476c(*(uint *)(param_2 + 8)), bVar1 == 0 &&
      (cVar2 = (**(code **)(*param_1 + 0xac))(), cVar2 != '\0')))) {
    System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 0046848c TCustomGDIButton.message_5400 ==== */

void TCustomGDIButton_message_5400(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0046849c TCustomGDIButton.message_5401 ==== */

void TCustomGDIButton_message_5401(int *param_1)

{
  (**(code **)(*param_1 + 0x7c))
            (param_1,param_1[0xc],param_1[0xd],*(undefined4 *)(param_1[0x5d] + 0x44),
             *(undefined4 *)(param_1[0x5d] + 0x40));
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004684cc TCustomGDIButton.message_5402 ==== */

void TCustomGDIButton_message_5402(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004684dc TCustomGDIButton.message_5403 ==== */

void TCustomGDIButton_message_5403(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  
  if ((char)*(undefined4 *)(param_2 + 4) != *(char *)((int)param_1 + 0x17a)) {
    (**(code **)(*param_1 + 200))();
  }
  if ((byte)*(undefined4 *)(param_2 + 4) != *(byte *)((int)param_1 + 0x17a)) {
    piVar2 = (int *)FUN_00467d48(param_1[0x5d],(uint)*(byte *)((int)param_1 + 0x17a));
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0046852c TCustomGDIButton.message_5404 ==== */

void TCustomGDIButton_message_5404(int *param_1)

{
  TControl_SetWidth(param_1,100);
  TControl_SetHeight(param_1,0x32);
  FUN_00457194((int *)param_1[0x5f],param_1[0xe],param_1[0xf],0x20);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00468568 TCustomGDIButton.message_5405 ==== */

void TCustomGDIButton_message_5405(int *param_1)

{
  TControl_SetWidth(param_1,100);
  TControl_SetHeight(param_1,0x32);
  FUN_00457194((int *)param_1[0x5f],param_1[0xe],param_1[0xf],0x20);
  param_1[0x5d] = 0;
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004685ac TCustomGDIButton.virtual_094 ==== */

undefined4 TCustomGDIButton_virtual_094(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  
  local_c = TWinControlWrapper_virtual_094();
  if (*(int *)(param_1 + 0x174) != 0) {
    piVar2 = (int *)FUN_00467d48(*(int *)(param_1 + 0x174),6);
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if ((cVar1 == '\0') && (uVar3 = System__IsClass(piVar2,(int)&LAB_00454aa4), (char)uVar3 != '\0')
       ) {
      piVar2 = (int *)System__AsClass(piVar2,(int)&LAB_00454aa4);
      FUN_0045727c(piVar2,'\0');
      (**(code **)(*piVar2 + 0x3c))(piVar2,1);
    }
    else {
      piVar2 = FUN_00468d10(param_1);
    }
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      if ((piVar2[0x23] < (int)param_2) || (piVar2[0x10] < param_3)) {
        local_c = 0;
      }
      else {
        cVar1 = (**(code **)(*piVar2 + 0x28))();
        if (cVar1 != '\0') {
          uVar4 = FUN_00456a44((int)piVar2,param_2,param_3);
          uVar5 = FUN_00456a14((int)piVar2);
          if ((uVar4 & 0xffffff) == (uVar5 & 0xffffff)) {
            local_c = 0;
          }
        }
      }
    }
    else {
      local_c = 0;
    }
    return local_c;
  }
  return local_c;
}


/* ==== 00468694 TCustomGDIButton.virtual_0c4 ==== */

void TCustomGDIButton_virtual_0c4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_0046451c();
    *(undefined ***)(param_4 + 4) = &PTR_TWinControl_virtual_000_00465e10;
    *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_1 + 0x174);
  }
  return;
}


/* ==== 004686cc TCustomGDIButton.virtual_098 ==== */

void TCustomGDIButton_virtual_098(int *param_1,short *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  uVar1 = (undefined1)param_3;
  if (*param_2 == 0x20) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 2;
    (**(code **)(*param_1 + 0x74))();
    param_3 = extraout_ECX;
  }
  if (*param_2 == 0x1b) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffd;
    *(undefined1 *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x74))();
    param_3 = extraout_ECX_00;
  }
  TWinControlWrapper_virtual_098((int)param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),uVar1));
  return;
}


/* ==== 00468734 TCustomGDIButton.virtual_0a0 ==== */

void TCustomGDIButton_virtual_0a0(int *param_1,short *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  
  uVar1 = (undefined1)param_3;
  if (*param_2 == 0x20) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x74))();
    param_3 = extraout_ECX;
    if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
      System__CallDynaInst(param_1,extraout_EDX,extraout_ECX);
      param_3 = extraout_ECX_00;
    }
  }
  TWinControlWrapper_virtual_0a0((int)param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),uVar1));
  return;
}


/* ==== 0046877c TCustomGDIButton.virtual_0c8 ==== */

void TCustomGDIButton_virtual_0c8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00468dd4((int)param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),4));
    return;
  }
  uVar2 = extraout_EDX;
  if (((char)param_1[0x60] != '\0') ||
     (cVar1 = (**(code **)(*param_1 + 0xb8))(), uVar2 = extraout_EDX_00, cVar1 != '\0')) {
    FUN_00468dd4((int)param_1,CONCAT31((int3)((uint)uVar2 >> 8),1));
    return;
  }
  if (*(char *)((int)param_1 + 0x181) != '\0') {
    FUN_00468dd4((int)param_1,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),3));
    return;
  }
  uVar2 = FUN_00468310(param_1);
  if ((char)uVar2 != '\0') {
    FUN_00468dd4((int)param_1,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),2));
    return;
  }
  FUN_00468dd4((int)param_1,0);
  return;
}


/* ==== 004687f4 TCustomGDIButton.dynamic_ffda ==== */

void TCustomGDIButton_dynamic_ffda
               (int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 extraout_ECX;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  (**(code **)(*param_1 + 0x74))();
  TControl_dynamic_ffda
            ((int)param_1,param_2,CONCAT31((int3)((uint)extraout_ECX >> 8),param_3),param_4,param_5)
  ;
  return;
}


/* ==== 00468834 TCustomGDIButton.virtual_0a4 ==== */

void TCustomGDIButton_virtual_0a4(int *param_1)

{
  int iVar1;
  
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  iVar1 = param_1[0x62];
  *(int **)(iVar1 + 0x8c) = param_1;
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(*param_1 + 0xc4);
  (**(code **)(*param_1 + 0x74))();
  TWinControlWrapper_virtual_0a4((int)param_1);
  return;
}


/* ==== 0046887c TCustomGDIButton.virtual_0a8 ==== */

void TCustomGDIButton_virtual_0a8(int *param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  iVar1 = param_1[0x62];
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  (**(code **)(*param_1 + 0x74))();
  TWinControlWrapper_virtual_0a8((int)param_1);
  return;
}


/* ==== 004688b8 TCustomGDIButton.dynamic_ffd8 ==== */

void TCustomGDIButton_dynamic_ffd8
               (int *param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  if ((((param_5 < 0) || (param_4 < 0)) || (param_1[0xe] < param_5)) || (param_1[0xf] < param_4)) {
    *(undefined1 *)((int)param_1 + 0x181) = 0;
  }
  (**(code **)(*param_1 + 0x74))();
  TControl_dynamic_ffd8
            ((int)param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),
             CONCAT31((int3)((uint)extraout_ECX >> 8),param_3),param_4,param_5);
  return;
}


/* ==== 00468914 TCustomGDIButton.virtual_084 ==== */

void TCustomGDIButton_virtual_084(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint format;
  uint format_val;
  LPCSTR pCVar4;
  HDC pHVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int i_val;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar6;
  LONG *pLVar7;
  tagRECT *lprc_val;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  RECT local_50;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  int local_2c;
  tagRECT rect;
  int local_18 [4];
  int *local_8;
  
  bVar8 = 0;
  puStack_60 = &stack0xfffffffc;
  puStack_6c = &stack0xfffffffc;
  local_40 = (undefined *)0x0;
  local_3c = 0;
  local_38 = (undefined *)0x0;
  local_34 = 0;
  local_30 = (undefined *)0x0;
  local_2c = 0;
  puStack_64 = &LAB_00468c9e;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  local_8 = param_1;
  if ((char)param_1[0x5c] == '\0') {
    *(undefined1 *)(param_1 + 0x5c) = 1;
    puStack_70 = &LAB_00468c7c;
    uStack_74 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_74;
    (**(code **)(*param_1 + 200))();
    piVar6 = (int *)0x0;
    if (local_8[0x5d] != 0) {
      piVar6 = FUN_00468d10((int)local_8);
    }
    (**(code **)(*local_8 + 0x40))(local_8,local_18);
    if ((piVar6 == (int *)0x0) || (cVar1 = (**(code **)(*piVar6 + 0x1c))(), cVar1 != '\0')) {
      (**(code **)(*local_8 + 0xc0))(local_8,local_8[0x48],local_18);
    }
    else {
      cVar1 = (**(code **)(*piVar6 + 0x28))();
      if ((cVar1 == '\0') && (*(char *)(local_8[0x5d] + 0x5c) == '\0')) {
        FUN_00418f9c((int *)local_8[0x48],0,0,piVar6);
      }
      else {
        piVar3 = local_18;
        piVar2 = (int *)FUN_00456800(local_8[0x5f],extraout_EDX,extraout_ECX);
        FUN_00418f14(piVar2,local_18,(int *)local_8[0x48],piVar3);
        cVar1 = FUN_00454850(local_8[0x5f],piVar6,*(char *)(local_8[0x5d] + 0x5c),
                             *(char *)(local_8[0x5d] + 0x5d));
        if (cVar1 == '\0') {
          piVar3 = (int *)FUN_00456800(local_8[0x5f],extraout_EDX_00,extraout_ECX_00);
          FUN_00418f9c(piVar3,0,0,piVar6);
        }
        FUN_00418f9c((int *)local_8[0x48],0,0,(int *)local_8[0x5f]);
      }
    }
    if (local_8[0x5d] == 0) {
      TCanvas_SetFont(local_8[0x48]);
      format = 0x25;
      piVar6 = local_18;
      lprc_val = &rect;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        lprc_val->left = *piVar6;
        piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
        lprc_val = (tagRECT *)((int)lprc_val + ((uint)bVar8 * -2 + 1) * 4);
      }
    }
    else {
      TCanvas_SetFont(local_8[0x48]);
      format = FUN_00467f70(local_8[0x5d]);
      pLVar7 = (LONG *)(*(int *)(local_8[0x5d] + 0x68) + 0x10);
      lprc_val = &rect;
      for (i_val = 4; i_val != 0; i_val = i_val + -1) {
        lprc_val->left = *pLVar7;
        pLVar7 = pLVar7 + (uint)bVar8 * -2 + 1;
        lprc_val = (tagRECT *)((int)lprc_val + ((uint)bVar8 * -2 + 1) * 4);
      }
      format_val = rect.right - rect.left;
      if (SBORROW4(rect.right,rect.left)) {
        format_val = System__RunError(format_val);
      }
      if (((int)format_val < 1) || ((int)format_val < 1)) {
        piVar6 = local_18;
        lprc_val = &rect;
        for (i_val = 4; i_val != 0; i_val = i_val + -1) {
          lprc_val->left = *piVar6;
          piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
          lprc_val = (tagRECT *)((int)lprc_val + ((uint)bVar8 * -2 + 1) * 4);
        }
      }
    }
    TBrush_SetStyle(*(int **)(local_8[0x48] + 0x14),'\x01');
    cVar1 = (**(code **)(*local_8 + 0x4c))();
    if (cVar1 == '\0') {
      OffsetRect(&rect,1,1);
      TFont_SetColor(*(int **)(local_8[0x48] + 0xc),-0x7fffffec,extraout_ECX_01);
      lprc_val = &rect;
      format_val = format;
      TGroupBox_GetCaption((int)local_8,&local_2c);
      i_val = System__LStrLen(local_2c);
      TGroupBox_GetCaption((int)local_8,(int *)&local_30);
      pCVar4 = System__LStrToPChar(local_30);
      pHVar5 = (HDC)FUN_004194d8((int *)local_8[0x48]);
      DrawTextA(pHVar5,pCVar4,i_val,lprc_val,format_val);
      OffsetRect(&rect,-1,-1);
      TFont_SetColor(*(int **)(local_8[0x48] + 0xc),-0x7ffffff0,extraout_ECX_02);
      lprc_val = &rect;
      TGroupBox_GetCaption((int)local_8,&local_34);
      i_val = System__LStrLen(local_34);
      TGroupBox_GetCaption((int)local_8,(int *)&local_38);
      pCVar4 = System__LStrToPChar(local_38);
      pHVar5 = (HDC)FUN_004194d8((int *)local_8[0x48]);
      DrawTextA(pHVar5,pCVar4,i_val,lprc_val,format);
    }
    else {
      lprc_val = &rect;
      TGroupBox_GetCaption((int)local_8,&local_3c);
      i_val = System__LStrLen(local_3c);
      TGroupBox_GetCaption((int)local_8,(int *)&local_40);
      pCVar4 = System__LStrToPChar(local_40);
      pHVar5 = (HDC)FUN_004194d8((int *)local_8[0x48]);
      DrawTextA(pHVar5,pCVar4,i_val,lprc_val,format);
    }
    if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
      TBrush_SetStyle(*(int **)(local_8[0x48] + 0x14),'\0');
      (**(code **)(*local_8 + 0x40))(local_8,&local_50);
      FUN_00419048((int *)local_8[0x48],&local_50);
    }
    *in_FS_OFFSET = uStack_74;
    *(undefined1 *)(local_8 + 0x5c) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_68;
  puStack_60 = &LAB_00468ca5;
  puStack_64 = (undefined1 *)0x468c9d;
  System__LStrArrayClr((int *)&local_40,6);
  return;
}


/* ==== 00468cac TCustomGDIButton.virtual_07c ==== */

void TCustomGDIButton_virtual_07c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_1[0x5d];
  if (iVar1 != 0) {
    param_5 = *(int *)(iVar1 + 0x40);
    param_4 = *(int *)(iVar1 + 0x44);
  }
  FUN_00457194((int *)param_1[0x5f],param_5,param_4,0x20);
  TControl_virtual_07c(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* ==== 00468cfc TCustomGDIButton.virtual_074 ==== */

void TCustomGDIButton_virtual_074(int param_1)

{
  if (*(char *)(param_1 + 0x170) == '\0') {
    TControl_virtual_074(param_1);
  }
  return;
}


/* ==== 00468d10 FUN_00468d10 ==== */

int * FUN_00468d10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = FUN_00467ed0(*(int *)(param_1 + 0x174),*(byte *)(param_1 + 0x17a));
  piVar3 = (int *)0x0;
  uVar2 = System__IsClass(piVar1,(int)&LAB_00454aa4);
  if ((char)uVar2 == '\0') {
    uVar2 = System__IsClass(piVar1,(int)&PTR_TPersistent_virtual_000_0045b71c);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)System__AsClass(piVar1,(int)&PTR_TPersistent_virtual_000_0045b71c);
      piVar3 = (int *)(**(code **)(*piVar1 + 0x70))(piVar1,piVar1[0xb]);
      (**(code **)(*piVar3 + 0x3c))(piVar3,(char)piVar1[0x13]);
      FUN_0045727c(piVar3,(char)piVar1[0x15]);
      FUN_00457260(piVar3,piVar1[0x14]);
    }
  }
  else {
    piVar3 = (int *)System__AsClass(piVar1,(int)&LAB_00454aa4);
  }
  return piVar3;
}


/* ==== 00468d9c TGDIButton.SetDefinition ==== */

void TGDIButton_SetDefinition(int *param_1,int param_2)

{
  if (param_1[0x5d] != 0) {
    FUN_00467f38(param_1[0x5d],(int)param_1);
  }
  param_1[0x5d] = param_2;
  if (param_2 != 0) {
    FUN_00467f04(param_2,(int)param_1);
  }
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00468dd4 FUN_00468dd4 ==== */

void FUN_00468dd4(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if (cVar1 != *(char *)(param_1 + 0x17a)) {
    if (*(int *)(param_1 + 0x174) != 0) {
      FUN_00467eac(*(int *)(param_1 + 0x174),param_1,
                   CONCAT31((int3)((uint)param_2 >> 8),*(char *)(param_1 + 0x17a)),cVar1);
    }
    *(char *)(param_1 + 0x17a) = cVar1;
  }
  return;
}


/* ==== 00468e08 TGDIButton.SetCancel ==== */

void TGDIButton_SetCancel(int *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5e) = param_2;
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00468e20 TGDIButton.SetDefault ==== */

void TGDIButton_SetDefault(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x179) = param_2;
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00468e38 TGDIButton.SetMouseCheckDelay ==== */

void TGDIButton_SetMouseCheckDelay(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 400)) {
    *(int *)(param_1 + 400) = param_2;
    if (*(int *)(param_1 + 0x184) != 0) {
      TDaviTimer_SetInterval(*(int *)(param_1 + 0x184),param_2,param_2);
    }
  }
  return;
}


/* ==== 00468e60 FUN_00468e60 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468e60(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad17c = _DAT_004ad17c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


