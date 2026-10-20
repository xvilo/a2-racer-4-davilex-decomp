/* Menu.exe — units/DaviGraphicDefinition.pas: 21 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045d8cc FUN_0045d8cc ==== */

void FUN_0045d8cc(int x1_val,int y1_val,int x2_val,int y2_val,int param_5)

{
  HRGN hrgnSrc2;
  
  hrgnSrc2 = CreateRectRgn(x1_val,y1_val,x2_val,y2_val);
  if (*(int *)(param_5 + -4) == 0) {
    *(HRGN *)(param_5 + -4) = hrgnSrc2;
  }
  else {
    CombineRgn(*(HRGN *)(param_5 + -4),*(HRGN *)(param_5 + -4),hrgnSrc2,2);
    DeleteObject(hrgnSrc2);
  }
  return;
}


/* ==== 0045d910 FUN_0045d910 ==== */

/* WARNING: Removing unreachable block (ram,0x0045d987) */

undefined4 FUN_0045d910(int *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int i_val;
  uint y2_val;
  int iVar4;
  int x_val;
  int x_val_00;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined1 *puVar7;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int j;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puStack_24 = (undefined1 *)0x45d936;
  piVar1 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
  puStack_28 = &LAB_0045da7d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uVar2 = (**(code **)(*param_1 + 0x2c))();
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2);
  uVar2 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*piVar1 + 0x34))(piVar1,uVar2);
  piVar3 = (int *)FUN_0041df1c(piVar1);
  FUN_00418f9c(piVar3,0,0,param_1);
  uVar5 = param_2 & 0xffffff;
  i_val = (**(code **)(*piVar1 + 0x20))();
  y2_val = i_val - 1;
  if (SBORROW4(i_val,1)) {
    y2_val = System__RunError(y2_val);
  }
  if (-1 < (int)y2_val) {
    j = y2_val + 1;
    i_val = 0;
    do {
      x_val_00 = 0;
LAB_0045da4d:
      iVar4 = (**(code **)(*piVar1 + 0x2c))();
      if (x_val_00 < iVar4) {
        piVar3 = (int *)FUN_0041df1c(piVar1);
        y2_val = FUN_00419464(piVar3,x_val_00,i_val);
        y2_val = y2_val & 0xffffff;
        iVar4 = x_val_00;
        if (uVar5 == y2_val) {
          do {
            bVar6 = SCARRY4(x_val_00,1);
            x_val_00 = x_val_00 + 1;
            if (bVar6) {
              System__RunError(y2_val);
            }
            iVar4 = (**(code **)(*piVar1 + 0x2c))();
            if (iVar4 <= x_val_00) break;
            piVar3 = (int *)FUN_0041df1c(piVar1);
            y2_val = FUN_00419464(piVar3,x_val_00,i_val);
            y2_val = y2_val & 0xffffff;
          } while (uVar5 == y2_val);
        }
        else {
          do {
            x_val = iVar4 + 1;
            if (SCARRY4(iVar4,1)) {
              System__RunError(y2_val);
            }
            iVar4 = (**(code **)(*piVar1 + 0x2c))();
            if (iVar4 <= x_val) break;
            piVar3 = (int *)FUN_0041df1c(piVar1);
            y2_val = FUN_00419464(piVar3,x_val,i_val);
            y2_val = y2_val & 0xffffff;
            iVar4 = x_val;
          } while (uVar5 != y2_val);
          y2_val = i_val + 1;
          puVar7 = &stack0xfffffffc;
          if (SCARRY4(i_val,1)) {
            puVar7 = &stack0xfffffffc;
            y2_val = System__RunError(y2_val);
          }
          FUN_0045d8cc(x_val_00,i_val,x_val,y2_val,(int)puVar7);
          x_val_00 = x_val;
        }
        goto LAB_0045da4d;
      }
      i_val = i_val + 1;
      j = j + -1;
    } while (j != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = (undefined1 *)0x45da84;
  puStack_28 = (undefined1 *)0x45da7c;
  uVar2 = System_TObject_Free(piVar1);
  return uVar2;
}


/* ==== 0045da90 TDaviGraphicDef.virtual_02c ==== */

int * TDaviGraphicDef_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar3;
  undefined4 extraout_ECX_03;
  char extraout_DL;
  char cVar4;
  undefined4 extraout_EDX;
  byte i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffdc,
                                         in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  i_val = 0;
  do {
    piVar1 = TDaviLinkedGraphic_virtual_014
                       ((int *)&PTR_TPersistent_virtual_000_0045ca28,'\x01',param_1);
    param_1[i_val + 9] = (int)piVar1;
    if (i_val == 5) {
      FUN_0045d4a4(param_1[0xe],extraout_EDX,extraout_ECX_00,&LAB_0045de58,param_1);
      uVar3 = extraout_ECX_02;
    }
    else {
      FUN_0045d4a4((int)piVar1,extraout_EDX,extraout_ECX_00,&LAB_0045dda8,param_1);
      iVar2 = param_1[i_val + 9];
      *(int **)(iVar2 + 0x1c) = param_1;
      *(code **)(iVar2 + 0x18) = FUN_0045ddb8;
      uVar3 = extraout_ECX_01;
    }
    i_val = i_val + 1;
  } while (i_val != 7);
  iVar2 = System_TObject_Create((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',uVar3);
  param_1[0x13] = iVar2;
  param_1[0x11] = 0x68;
  param_1[0x12] = 0x18;
  param_1[0x10] = 0;
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_03);
  param_1[0x14] = (int)piVar1;
  if (cVar4 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


/* ==== 0045db60 TDaviGraphicDef.Destroy ==== */

void TDaviGraphicDef_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  uint i_val;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  FUN_0045debc((int)piVar1,0x4403);
  SysUtils_FreeAndNil(piVar1 + 0x14);
  i_val = 0;
  do {
    System_TObject_Free((int *)piVar1[(i_val & 0x7f) + 9]);
    piVar1[(i_val & 0x7f) + 9] = 0;
    i_val = i_val + 1;
  } while ((char)i_val != '\a');
  if ((HGDIOBJ)piVar1[0x10] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)piVar1[0x10]);
    piVar1[0x10] = 0;
  }
  System_TObject_Free((int *)piVar1[0x13]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0045dbdc TDaviGraphicDef.GetUpLink ==== */

int TDaviGraphicDef_GetUpLink(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (6 < param_2) {
    System__Assert("Assertion failure");
  }
  iVar1 = *(int *)(param_1 + 0x24 + (param_2 & 0xff) * 4);
  piVar4 = *(int **)(iVar1 + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x3c))(piVar4,*(undefined1 *)(param_1 + 0x54));
    uVar2 = System__IsClass(piVar4,(int)&LAB_00454aa4);
    if ((char)uVar2 == '\0') {
      uVar2 = System__IsClass(piVar4,(int)&PTR_TPersistent_virtual_000_004173a4);
      if ((char)uVar2 == '\0') {
        uVar2 = System__IsClass(piVar4,(int)&PTR_TPersistent_virtual_000_0045b71c);
        if ((char)uVar2 != '\0') {
          piVar3 = (int *)System__AsClass(piVar4,(int)&PTR_TPersistent_virtual_000_0045b71c);
          (**(code **)(*piVar3 + 0x88))(piVar3,*(undefined1 *)(param_1 + 0x55));
          piVar4 = (int *)System__AsClass(piVar4,(int)&PTR_TPersistent_virtual_000_0045b71c);
          (**(code **)(*piVar4 + 0x84))(piVar4,*(undefined4 *)(param_1 + 0x58));
        }
      }
      else {
        piVar3 = (int *)System__AsClass(piVar4,(int)&PTR_TPersistent_virtual_000_004173a4);
        FUN_0041ee80(piVar3,*(char *)(param_1 + 0x55));
        piVar4 = (int *)System__AsClass(piVar4,(int)&PTR_TPersistent_virtual_000_004173a4);
        FUN_0041ee30(piVar4,*(int *)(param_1 + 0x58));
      }
    }
    else {
      piVar3 = (int *)System__AsClass(piVar4,(int)&LAB_00454aa4);
      FUN_0045727c(piVar3,*(char *)(param_1 + 0x55));
      piVar4 = (int *)System__AsClass(piVar4,(int)&LAB_00454aa4);
      FUN_00457260(piVar4,*(int *)(param_1 + 0x58));
    }
  }
  return iVar1;
}


/* ==== 0045dd34 TDaviGraphicDef.SetUpLink ==== */

void TDaviGraphicDef_SetUpLink(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)TDaviGraphicDef_GetUpLink(param_1,param_2);
  (**(code **)(*piVar1 + 8))(piVar1,param_3);
  if (param_2 == 5) {
    FUN_0045debc(param_1,0x4401);
  }
  else {
    FUN_0045debc(param_1,0x4400);
  }
  return;
}


/* ==== 0045dd74 FUN_0045dd74 ==== */

int * FUN_0045dd74(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = TDaviGraphicDef_GetUpLink(param_1,param_2);
  piVar3 = *(int **)(iVar2 + 0xc);
  cVar1 = (**(code **)(*piVar3 + 0x1c))();
  if (cVar1 != '\0') {
    iVar2 = TDaviGraphicDef_GetUpLink(param_1,0);
    piVar3 = *(int **)(iVar2 + 0xc);
  }
  return piVar3;
}


/* ==== 0045ddb8 FUN_0045ddb8 ==== */

void FUN_0045ddb8(int param_1)

{
  int *piVar1;
  int iVar2;
  byte i_val;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    local_8 = 0;
    local_c = 0;
    i_val = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x24 + (uint)i_val * 4) + 0xc);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x2c))();
        if (local_8 < iVar2) {
          local_8 = (**(code **)(*piVar1 + 0x2c))();
        }
        iVar2 = (**(code **)(*piVar1 + 0x20))();
        if (local_c < iVar2) {
          local_c = (**(code **)(*piVar1 + 0x20))();
        }
      }
      i_val = i_val + 1;
    } while (i_val != 7);
    if ((0 < local_8) && (*(int *)(param_1 + 0x44) != local_8)) {
      *(int *)(param_1 + 0x44) = local_8;
    }
    if ((0 < local_c) && (*(int *)(param_1 + 0x48) != local_c)) {
      *(int *)(param_1 + 0x48) = local_c;
    }
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


/* ==== 0045debc FUN_0045debc ==== */

void FUN_0045debc(int param_1,undefined4 param_2)

{
  int iVar1;
  int i_val;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 0x4c) + 8);
  i_val = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    System__RunError(*(uint *)(param_1 + 0x4c));
  }
  if (-1 < i_val) {
    do {
      uVar2 = 0;
      iVar1 = Classes_TList_Get(*(undefined4 **)(param_1 + 0x4c),i_val);
      Controls_TControl_Perform(iVar1,param_2,0,uVar2);
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 0045defc FUN_0045defc ==== */

void FUN_0045defc(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x6a) != 0) {
    (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,param_4,param_3);
  }
  return;
}


/* ==== 0045df20 FUN_0045df20 ==== */

void FUN_0045df20(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)FUN_0045df74(param_1,param_2);
  uVar2 = (**(code **)(*piVar1 + 0x20))();
  puVar4 = param_3;
  piVar1 = (int *)FUN_0045df74(param_1,param_2);
  uVar3 = (**(code **)(*piVar1 + 0x2c))();
  Classes_Rect(0,0,uVar3,puVar4,uVar2);
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,param_3);
  }
  return;
}


/* ==== 0045df74 FUN_0045df74 ==== */

undefined4 FUN_0045df74(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = TDaviGraphicDef_GetUpLink(param_1,param_2 & 0xff);
  return *(undefined4 *)(iVar1 + 0xc);
}


/* ==== 0045df90 FUN_0045df90 ==== */

void FUN_0045df90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Classes_TList_IndexOf(*(int *)(param_1 + 0x4c),param_2);
  if (iVar1 == -1) {
    Classes_TList_Add(*(int **)(param_1 + 0x4c),param_2);
    Controls_TControl_Perform(param_2,0x4400,0,0);
    Controls_TControl_Perform(param_2,0x4401,0,0);
  }
  return;
}


/* ==== 0045dfd4 FUN_0045dfd4 ==== */

void FUN_0045dfd4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Classes_TList_IndexOf(*(int *)(param_1 + 0x4c),param_2);
  if (iVar1 != -1) {
    Classes_TList_Delete(*(int **)(param_1 + 0x4c),iVar1);
    Controls_TControl_Perform(param_2,0x4402,0,0);
  }
  return;
}


/* ==== 0045e00c TDaviGraphicDef.SetHintFont ==== */

void TDaviGraphicDef_SetHintFont(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x50) + 8))();
  FUN_0045debc(param_1,0x4400);
  return;
}


/* ==== 0045e02c TDaviGraphicDef.SetTransparent ==== */

void TDaviGraphicDef_SetTransparent(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x54)) {
    *(char *)(param_1 + 0x54) = param_2;
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


/* ==== 0045e044 TDaviGraphicDef.SetTransparentColor ==== */

void TDaviGraphicDef_SetTransparentColor(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = param_2;
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


/* ==== 0045e05c TDaviGraphicDef.SetTransparentMode ==== */

void TDaviGraphicDef_SetTransparentMode(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x55)) {
    *(char *)(param_1 + 0x55) = param_2;
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


/* ==== 0045e074 TDaviGraphicDef.SetWidth ==== */

void TDaviGraphicDef_SetWidth(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x44) = param_2;
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


/* ==== 0045e08c TDaviGraphicDef.SetHeight ==== */

void TDaviGraphicDef_SetHeight(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = param_2;
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


/* ==== 0045e0a4 FUN_0045e0a4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e0a4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac90c = _DAT_004ac90c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


