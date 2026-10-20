/* Menu.exe — units/WinControlWrapper.pas: 44 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00464cdc FUN_00464cdc ==== */

void FUN_00464cdc(int param_1)

{
  int i_val;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_1c = &LAB_00464d46;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  i_val = FUN_00464f48(param_1);
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      iVar1 = FUN_00464f34(param_1,i_val);
      FUN_00464618(iVar1);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_20;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


/* ==== 00464d54 FUN_00464d54 ==== */

void FUN_00464d54(int param_1)

{
  int i_val;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_18 = &LAB_00464db9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  i_val = FUN_00464f48(param_1);
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      iVar1 = FUN_00464f34(param_1,i_val);
      FUN_0046462c(iVar1);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


/* ==== 00464eb4 FUN_00464eb4 ==== */

void FUN_00464eb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int i_val;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_1c = &LAB_00464f22;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  i_val = FUN_00464f48(param_1);
  i_val = i_val + -1;
  if (-1 < i_val) {
    do {
      uVar2 = param_4;
      iVar1 = FUN_00464f34(param_1,i_val);
      FUN_00464670(iVar1,param_2,param_3,uVar2);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  *in_FS_OFFSET = uStack_20;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


/* ==== 00464f34 FUN_00464f34 ==== */

void FUN_00464f34(int param_1,int param_2)

{
  FUN_004200b8(*(undefined4 **)(param_1 + 0x24),param_2);
  return;
}


/* ==== 00464f48 FUN_00464f48 ==== */

undefined4 FUN_00464f48(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x24) + 8);
}


/* ==== 00464f50 FUN_00464f50 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464f50(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad16c = _DAT_004ad16c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0046514c TWinControlWrapper.virtual_02c ==== */

int * TWinControlWrapper_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
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
  TGraphicControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] & 0xffffffbf;
  iVar1 = TWinControl_virtual_02c((int *)&PTR_TWinControl_virtual_000_0042ac0c,'\x01',param_1);
  param_1[0x4a] = iVar1;
  *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xffffffbf;
  iVar1 = FUN_004656b4((int)param_1);
  param_1[0x4c] = *(int *)(iVar1 + 0x28);
  param_1[0x4d] = *(int *)(iVar1 + 0x2c);
  iVar1 = FUN_004656b4((int)param_1);
  *(int **)(iVar1 + 0x2c) = param_1;
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(*param_1 + 0x88);
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 004651ec TWinControlWrapper.Destroy ==== */

void TWinControlWrapper_Destroy(int *param_1,char param_2)

{
  int iVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4651f7;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_00465273;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar1 = local_8[0x4a];
  local_9 = extraout_DL;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x28) = local_8[0x4c];
    *(int *)(iVar1 + 0x2c) = local_8[0x4d];
    local_8[0x4c] = 0;
    local_8[0x4d] = 0;
    local_8[0x4a] = 0;
    puStack_10 = &stack0xfffffffc;
    Controls_TControl_Perform(0,2,0,0);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046527a;
  puStack_14 = (undefined1 *)0x465272;
  TGraphicControl_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0046528c TWinControlWrapper.virtual_018 ==== */

void TWinControlWrapper_virtual_018(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004652ef;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TControl_virtual_018(param_1,param_2);
  iVar1 = FUN_004656b4((int)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4((int)param_1);
    System__LStrCat3(&local_8,(undefined4 *)"Wrapper",param_2);
    (**(code **)(*piVar2 + 0x18))(piVar2,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004652f6;
  puStack_18 = (undefined1 *)0x4652ee;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0046530c TWinControlWrapper.virtual_0ac ==== */

undefined4 TWinControlWrapper_virtual_0ac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4(param_1);
    uVar3 = System__CallDynaInst(piVar2,extraout_EDX,extraout_ECX);
  }
  return uVar3;
}


/* ==== 00465338 TWinControlWrapper.CMEnter ==== */

void TWinControlWrapper_CMEnter(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x8c))();
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00465360 TWinControlWrapper.CMExit ==== */

void TWinControlWrapper_CMExit(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x90))();
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00465388 TWinControlWrapper.CMHitTest ==== */

void TWinControlWrapper_CMHitTest(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x94))
                    (param_1,(int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10));
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}


/* ==== 004653ac TWinControlWrapper.CMMouseEnter ==== */

void TWinControlWrapper_CMMouseEnter(int *param_1)

{
  (**(code **)(*param_1 + 0xa4))();
  TControl_CMMouseEnter((int)param_1);
  return;
}


/* ==== 004653cc TWinControlWrapper.CMMouseLeave ==== */

void TWinControlWrapper_CMMouseLeave(int *param_1)

{
  (**(code **)(*param_1 + 0xa8))();
  TControl_CMMouseLeave((int)param_1);
  return;
}


/* ==== 004653ec TWinControlWrapper.CMEnabledChanged ==== */

void TWinControlWrapper_CMEnabledChanged(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_004656b4((int)param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x4c))();
    piVar3 = (int *)FUN_004656b4((int)param_1);
    (**(code **)(*piVar3 + 0x5c))(piVar3,uVar2);
  }
  TControl_CMEnabledChanged(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0046542c TWinControlWrapper.CMVisibleChanged ==== */

void TWinControlWrapper_CMVisibleChanged(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_004656b4((int)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4((int)param_1);
    TGroupBox_SetVisible
              (piVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)param_1 + 0x47))
               ,extraout_ECX);
  }
  TControl_CMVisibleChanged((int)param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00465464 TWinControlWrapper.CMTextChanged ==== */

void TWinControlWrapper_CMTextChanged(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))();
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


/* ==== 00465484 TWinControlWrapper.CMFontChanged ==== */

void TWinControlWrapper_CMFontChanged(int *param_1)

{
  TControl_CMFontChanged(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0046549c TWinControlWrapper.virtual_08c ==== */

void TWinControlWrapper_virtual_08c(int param_1)

{
  if (*(short *)(param_1 + 0x13a) != 0) {
    (**(code **)(param_1 + 0x138))(*(undefined4 *)(param_1 + 0x13c),param_1);
  }
  return;
}


/* ==== 004654c0 TWinControlWrapper.virtual_090 ==== */

void TWinControlWrapper_virtual_090(int param_1)

{
  if (*(short *)(param_1 + 0x142) != 0) {
    (**(code **)(param_1 + 0x140))(*(undefined4 *)(param_1 + 0x144),param_1);
  }
  return;
}


/* ==== 004654e4 TWinControlWrapper.virtual_094 ==== */

undefined4 TWinControlWrapper_virtual_094(void)

{
  return 1;
}


/* ==== 004654ec FUN_004654ec ==== */

undefined4 FUN_004654ec(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  
  uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  piVar3 = Forms_GetParentForm(param_1);
  if (((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x215) != '\0')) &&
     (cVar1 = FUN_00433654(piVar3,param_2), cVar1 != '\0')) {
    return uVar4;
  }
  bVar2 = FUN_0044476c(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     ((**(code **)(*param_1 + 0x98))(param_1,param_2 + 4,bVar2), *(short *)(param_2 + 4) == 0)) {
    return uVar4;
  }
  return 0;
}


/* ==== 0046555c FUN_0046555c ==== */

undefined1 FUN_0046555c(int *param_1,int param_2,undefined3 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uStack_8;
  
  uStack_8 = CONCAT13(1,param_3);
  piVar2 = Forms_GetParentForm(param_1);
  if ((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x215) != '\0')) {
    cVar1 = FUN_00433654(piVar2,param_2);
    if (cVar1 != '\0') goto LAB_004655bb;
  }
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    uStack_8._0_3_ = CONCAT12((char)*(undefined2 *)(param_2 + 4),(undefined2)uStack_8);
    (**(code **)(*param_1 + 0x9c))(param_1,(int)&uStack_8 + 2);
    *(ushort *)(param_2 + 4) = (ushort)uStack_8._2_1_;
    if (uStack_8._2_1_ == 0) goto LAB_004655bb;
  }
  uStack_8 = 0;
LAB_004655bb:
  return uStack_8._3_1_;
}


/* ==== 004655c4 FUN_004655c4 ==== */

undefined4 FUN_004655c4(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  
  uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  piVar3 = Forms_GetParentForm(param_1);
  if (((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x215) != '\0')) &&
     (cVar1 = FUN_00433654(piVar3,param_2), cVar1 != '\0')) {
    return uVar4;
  }
  bVar2 = FUN_0044476c(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     ((**(code **)(*param_1 + 0xa0))(param_1,param_2 + 4,bVar2), *(short *)(param_2 + 4) == 0)) {
    return uVar4;
  }
  return 0;
}


/* ==== 00465634 TWinControlWrapper.virtual_0b0 ==== */

undefined4 TWinControlWrapper_virtual_0b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4(param_1);
    uVar3 = System__CallDynaInst(piVar2,extraout_EDX,extraout_ECX);
  }
  return uVar3;
}


/* ==== 004656b4 FUN_004656b4 ==== */

undefined4 FUN_004656b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x128);
}


/* ==== 004656bc TWinControlWrapper.virtual_098 ==== */

void TWinControlWrapper_virtual_098(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x14a) != 0) {
    (**(code **)(param_1 + 0x148))(*(undefined4 *)(param_1 + 0x14c),param_1,param_2,param_3);
  }
  return;
}


/* ==== 004656e8 TWinControlWrapper.virtual_09c ==== */

void TWinControlWrapper_virtual_09c(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x152) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined4 *)(param_1 + 0x154),param_1,param_2);
  }
  return;
}


/* ==== 0046570c TWinControlWrapper.virtual_0a0 ==== */

void TWinControlWrapper_virtual_0a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x15a) != 0) {
    (**(code **)(param_1 + 0x158))(*(undefined4 *)(param_1 + 0x15c),param_1,param_2,param_3);
  }
  return;
}


/* ==== 00465738 TWinControlWrapper.virtual_0a4 ==== */

void TWinControlWrapper_virtual_0a4(int param_1)

{
  if (*(short *)(param_1 + 0x162) != 0) {
    (**(code **)(param_1 + 0x160))(*(undefined4 *)(param_1 + 0x164),param_1);
  }
  return;
}


/* ==== 0046575c TWinControlWrapper.virtual_0a8 ==== */

void TWinControlWrapper_virtual_0a8(int param_1)

{
  if (*(short *)(param_1 + 0x16a) != 0) {
    (**(code **)(param_1 + 0x168))(*(undefined4 *)(param_1 + 0x16c),param_1);
  }
  return;
}


/* ==== 00465780 TWinControlWrapper.virtual_060 ==== */

void TWinControlWrapper_virtual_060(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  TControl_virtual_060(param_1,param_2,param_3);
  iVar1 = FUN_004656b4((int)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4((int)param_1);
    (**(code **)(*piVar2 + 0x60))(piVar2,param_2);
    uVar4 = 0;
    uVar3 = 0;
    piVar2 = (int *)FUN_004656b4((int)param_1);
    (**(code **)(*piVar2 + 0x7c))(piVar2,0,0,uVar3,uVar4);
  }
  return;
}


/* ==== 004657c4 TWinControlWrapper.virtual_0b4 ==== */

void TWinControlWrapper_virtual_0b4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4(param_1);
    (**(code **)(*piVar2 + 0xb0))();
  }
  return;
}


/* ==== 00465838 TWinControlWrapper.virtual_088 ==== */

void TWinControlWrapper_virtual_088(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(short *)(param_1 + 0x132) != 0) {
    (**(code **)(param_1 + 0x130))(*(undefined4 *)(param_1 + 0x134),param_2);
  }
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = *param_2;
    if (iVar1 < 0x101) {
      if (iVar1 == 0x100) {
        iVar1 = Controls_TControl_Perform(param_1,0x100,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
      else if (iVar1 < 8) {
        if (iVar1 == 7) {
          iVar1 = Controls_TControl_Perform(param_1,7,param_2[1],param_2[2]);
          param_2[3] = iVar1;
        }
        else if (iVar1 == 2) {
          iVar1 = FUN_004656b4(param_1);
          *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x130);
          *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x134);
          *(undefined4 *)(param_1 + 0x128) = 0;
          *(undefined4 *)(param_1 + 0x130) = 0;
          *(undefined4 *)(param_1 + 0x134) = 0;
        }
        else if (iVar1 == 5) {
          uVar4 = 0;
          uVar3 = 0;
          piVar2 = (int *)FUN_004656b4(param_1);
          (**(code **)(*piVar2 + 0x7c))(piVar2,0,0,uVar3,uVar4);
        }
      }
      else if (iVar1 == 8) {
        iVar1 = Controls_TControl_Perform(param_1,8,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
      else if (iVar1 == 0x87) {
        iVar1 = Controls_TControl_Perform(param_1,0x87,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
    }
    else if (iVar1 == 0x101) {
      iVar1 = Controls_TControl_Perform(param_1,0x101,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0x102) {
      iVar1 = Controls_TControl_Perform(param_1,0x102,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0xb01a) {
      iVar1 = Controls_TControl_Perform(param_1,0xb01a,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0xb01b) {
      iVar1 = Controls_TControl_Perform(param_1,0xb01b,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
  }
  return;
}


/* ==== 004659d0 TWinControlWrapper.WMChar ==== */

void TWinControlWrapper_WMChar(int *param_1,int param_2,undefined3 param_3)

{
  char cVar1;
  
  cVar1 = FUN_0046555c(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 004659f4 TWinControlWrapper.WMKeyDown ==== */

void TWinControlWrapper_WMKeyDown(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004654ec(param_1,param_2);
  if ((char)uVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00465a18 TWinControlWrapper.WMKeyUp ==== */

void TWinControlWrapper_WMKeyUp(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004655c4(param_1,param_2);
  if ((char)uVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


/* ==== 00465a3c TWinControlWrapper.WMKillFocus ==== */

void TWinControlWrapper_WMKillFocus(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00465a54 TWinControlWrapper.WMSetFocus ==== */

void TWinControlWrapper_WMSetFocus(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00465a6c TWinControlWrapper.virtual_06c ==== */

void TWinControlWrapper_virtual_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (*param_2 == 0x201) {
    cVar1 = (**(code **)(*param_1 + 0xac))();
    param_3 = extraout_ECX;
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xb4))();
      param_3 = extraout_ECX_00;
    }
  }
  TControl_virtual_06c(param_1,param_2,param_3);
  return;
}


/* ==== 00465adc FUN_00465adc ==== */

/* WARNING: Removing unreachable block (ram,0x00465bcb) */
/* WARNING: Removing unreachable block (ram,0x00465b4b) */
/* WARNING: Removing unreachable block (ram,0x00465b0b) */
/* WARNING: Removing unreachable block (ram,0x00465b8b) */
/* WARNING: Removing unreachable block (ram,0x00465c0b) */

void FUN_00465adc(int *param_1,LONG *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int j;
  RECT *pRVar2;
  bool bVar3;
  RECT i_val;
  LONG *local_8;
  
  pRVar2 = &i_val;
  local_8 = param_2;
  for (j = 4; j != 0; j = j + -1) {
    pRVar2->left = *param_2;
    param_2 = param_2 + 1;
    pRVar2 = (RECT *)&pRVar2->top;
  }
  TBrush_SetColor((int *)param_1[5],
                  *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab044)[(param_4 & 0xff) * 5] * 4));
  uVar1 = FUN_004190b8(param_1,&i_val);
  bVar3 = SBORROW4(i_val.right,1);
  i_val.right = i_val.right + -1;
  if (bVar3) {
    uVar1 = System__RunError(uVar1);
  }
  bVar3 = SBORROW4(i_val.bottom,1);
  i_val.bottom = i_val.bottom + -1;
  if (bVar3) {
    System__RunError(uVar1);
  }
  TBrush_SetColor((int *)param_1[5],
                  *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab045)[(param_4 & 0xff) * 5] * 4));
  uVar1 = FUN_004190b8(param_1,&i_val);
  bVar3 = SCARRY4(i_val.left,1);
  i_val.left = i_val.left + 1;
  if (bVar3) {
    uVar1 = System__RunError(uVar1);
  }
  bVar3 = SCARRY4(i_val.top,1);
  i_val.top = i_val.top + 1;
  if (bVar3) {
    System__RunError(uVar1);
  }
  TBrush_SetColor((int *)param_1[5],
                  *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab046)[(param_4 & 0xff) * 5] * 4));
  uVar1 = FUN_004190b8(param_1,&i_val);
  bVar3 = SBORROW4(i_val.right,1);
  i_val.right = i_val.right + -1;
  if (bVar3) {
    uVar1 = System__RunError(uVar1);
  }
  bVar3 = SBORROW4(i_val.bottom,1);
  i_val.bottom = i_val.bottom + -1;
  if (bVar3) {
    System__RunError(uVar1);
  }
  TBrush_SetColor((int *)param_1[5],
                  *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab047)[(param_4 & 0xff) * 5] * 4));
  uVar1 = FUN_004190b8(param_1,&i_val);
  bVar3 = SCARRY4(i_val.left,1);
  i_val.left = i_val.left + 1;
  if (bVar3) {
    uVar1 = System__RunError(uVar1);
  }
  bVar3 = SCARRY4(i_val.top,1);
  i_val.top = i_val.top + 1;
  if (bVar3) {
    System__RunError(uVar1);
  }
  TBrush_SetColor((int *)param_1[5],
                  *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab048)[(param_4 & 0xff) * 5] * 4));
  FUN_0041907c(param_1,&i_val);
  return;
}


/* ==== 00465c38 FUN_00465c38 ==== */

void FUN_00465c38(int *param_1,LONG *param_2,char param_3)

{
  bool bVar1;
  HWND hWnd;
  int i_val;
  RECT *pRVar2;
  byte bVar3;
  RECT local_14;
  
  bVar3 = 0;
  bVar1 = Controls_TWinControl_HandleAllocated((int)param_1);
  if (bVar1) {
    pRVar2 = &local_14;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      pRVar2->left = *param_2;
      param_2 = param_2 + (uint)bVar3 * -2 + 1;
      pRVar2 = (RECT *)((int)pRVar2 + ((uint)bVar3 * -2 + 1) * 4);
    }
    i_val = -(uint)(param_3 != '\0');
    pRVar2 = &local_14;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    InvalidateRect(hWnd,pRVar2,i_val);
  }
  return;
}


/* ==== 00465c7c FUN_00465c7c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465c7c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad174 = _DAT_004ad174 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


