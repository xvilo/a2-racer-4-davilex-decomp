/* Menu.exe — units/DaviGraphicSlider.pas: 31 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0046a724 TDaviSliderNeedle.virtual_02c ==== */

int * TDaviSliderNeedle_virtual_02c(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  uVar1 = System__IsClass(param_3,(int)&PTR_TWinControl_virtual_000_0046a048);
  if ((char)uVar1 == '\0') {
    System__Assert("Assertion failure");
  }
  TDaviGraphicButton_virtual_02c(param_1,'\0',param_3);
  iVar2 = System__AsClass(param_3,(int)&PTR_TWinControl_virtual_000_0046a048);
  param_1[0x90] = iVar2;
  if (cVar3 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0046a7ec TDaviSliderNeedle.Destroy ==== */

void TDaviSliderNeedle_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  TDaviGraphicButton_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0046a818 TDaviSliderNeedle.dynamic_ffc0 ==== */

void TDaviSliderNeedle_dynamic_ffc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  System__CallDynaInst(*(int **)(param_1 + 0x240),param_2,param_3);
  return;
}


/* ==== 0046a83c TDaviSliderNeedle.dynamic_ffda ==== */

void TDaviSliderNeedle_dynamic_ffda
               (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = TControl_dynamic_ffda((int)param_1,param_2,param_3,param_4,param_5);
  iVar1 = param_1[0xc];
  if (SCARRY4(param_5,param_1[0xc])) {
    uVar2 = System__RunError(uVar2);
  }
  param_1[0x91] = param_5 + iVar1;
  iVar1 = param_1[0xd];
  if (SCARRY4(param_4,param_1[0xd])) {
    System__RunError(uVar2);
  }
  param_1[0x92] = param_4 + iVar1;
  FUN_0042e950(param_1,'\x01');
  return;
}


/* ==== 0046a894 TDaviSliderNeedle.dynamic_ffd9 ==== */

void TDaviSliderNeedle_dynamic_ffd9(int *param_1,byte param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int extraout_EDX;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  
  uVar4 = TControl_dynamic_ffd9((int)param_1,param_2,param_3,param_4);
  if ((param_2 & 8) != 0) {
    iVar7 = param_3 + param_1[0xc];
    if (SCARRY4(param_3,param_1[0xc])) {
      uVar4 = System__RunError(uVar4);
    }
    iVar2 = param_1[0xd];
    if (SCARRY4(param_4,param_1[0xd])) {
      System__RunError(uVar4);
    }
    if (iVar7 != param_1[0x91]) {
      iVar5 = TForm_GetClientWidth((int *)param_1[0x90]);
      uVar4 = iVar5 - param_1[0xe];
      if (SBORROW4(iVar5,param_1[0xe])) {
        uVar4 = System__RunError(uVar4);
      }
      lVar3 = (longlong)*(int *)(param_1[0x90] + 0x218) * 2;
      iVar5 = (int)lVar3;
      if (iVar5 != lVar3) {
        uVar4 = System__RunError(uVar4);
        iVar5 = extraout_EDX;
      }
      uVar6 = uVar4 - iVar5;
      uVar9 = uVar6 == 0;
      if (SBORROW4(uVar4,iVar5)) {
        uVar6 = System__RunError(uVar6);
      }
      if (!(bool)uVar9) {
        iVar5 = iVar7 - param_1[0x91];
        if (SBORROW4(iVar7,param_1[0x91])) {
          uVar6 = System__RunError(uVar6);
        }
        iVar8 = iVar5 + param_1[0xc];
        if (SCARRY4(iVar5,param_1[0xc])) {
          System__RunError(uVar6);
        }
        iVar5 = ((int *)param_1[0x90])[0x86];
        if (iVar8 < iVar5) {
          iVar8 = iVar5;
        }
        iVar5 = TForm_GetClientWidth((int *)param_1[0x90]);
        uVar4 = iVar5 - param_1[0xe];
        if (SBORROW4(iVar5,param_1[0xe])) {
          uVar4 = System__RunError(uVar4);
        }
        uVar6 = uVar4 - *(int *)(param_1[0x90] + 0x218);
        if (SBORROW4(uVar4,*(int *)(param_1[0x90] + 0x218))) {
          uVar6 = System__RunError(uVar6);
        }
        if ((int)uVar6 < iVar8) {
          uVar4 = TForm_GetClientWidth((int *)param_1[0x90]);
          iVar5 = uVar4 - param_1[0xe];
          if (SBORROW4(uVar4,param_1[0xe])) {
            System__RunError(uVar4);
          }
          piVar1 = (int *)(param_1[0x90] + 0x218);
          iVar8 = iVar5 - *piVar1;
          if (SBORROW4(iVar5,*piVar1)) {
            System__RunError(param_1[0x90]);
          }
        }
        if (iVar8 != param_1[0xc]) {
          param_1[0x91] = iVar7;
          param_1[0x92] = param_4 + iVar2;
          TControl_SetLeft(param_1,iVar8);
          uVar4 = FUN_0046ab50((int *)param_1[0x90],param_1[0xc]);
          piVar1 = (int *)param_1[0x90];
          piVar1[0x81] = uVar4;
          (**(code **)(*piVar1 + 0xb8))();
        }
      }
    }
  }
  return;
}


/* ==== 0046a9e8 TDaviSliderNeedle.WMGetDlgCode ==== */

void TDaviSliderNeedle_WMGetDlgCode(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (**(code **)(*param_1 + -0x10))(param_1,param_2);
  piVar1 = (int *)(param_2 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    System__RunError(uVar3);
  }
  return;
}


/* ==== 0046aa04 TDaviGraphicSlider.virtual_02c ==== */

int * TDaviGraphicSlider_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TCustomControl_virtual_02c(param_1,'\0',param_3);
  piVar2 = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',extraout_ECX_00);
  param_1[0x82] = (int)piVar2;
  piVar2 = TDaviSliderNeedle_virtual_02c
                     ((int *)&PTR_TWinControl_virtual_000_00469ecc,'\x01',param_1);
  param_1[0x84] = (int)piVar2;
  (**(code **)(*piVar2 + 0x60))(piVar2,param_1);
  TDaviGraphicButton_SetDefinition(param_1[0x84],param_1[0x83]);
  param_1[0x87] = 0xfa;
  param_1[0x88] = 0x32;
  param_1[0x7e] = 5;
  param_1[0x86] = 5;
  param_1[0x85] = 5;
  TControl_SetWidth(param_1,200);
  iVar1 = *(int *)(param_1[0x84] + 0x3c);
  iVar4 = iVar1 + 10;
  if (SCARRY4(iVar1,10)) {
    System__RunError(param_1[0x84]);
    iVar4 = extraout_EDX;
  }
  TControl_SetHeight(param_1,iVar4);
  if (cVar3 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0046aadc FUN_0046aadc ==== */

void FUN_0046aadc(int *param_1,int param_2)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = param_1[0x81] - param_2;
  if (SBORROW4(param_1[0x81],param_2)) {
    param_1 = (int *)System__RunError((uint)param_1);
    iVar1 = extraout_ECX;
  }
  TDaviGraphicSlider_SetPosition(param_1,iVar1);
  return;
}


/* ==== 0046aaf8 TDaviGraphicSlider.Destroy ==== */

void TDaviGraphicSlider_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = System__BeforeDestruction(param_1,param_2);
  System_TObject_Free((int *)piVar1[0x84]);
  System_TObject_Free((int *)piVar1[0x82]);
  TCustomControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    System__ClassDestroy(piVar1);
  }
  return;
}


/* ==== 0046ab38 FUN_0046ab38 ==== */

void FUN_0046ab38(int *param_1,int param_2)

{
  int iVar1;
  int extraout_EDX;
  
  iVar1 = param_2 + param_1[0x81];
  if (SCARRY4(param_2,param_1[0x81])) {
    param_1 = (int *)System__RunError((uint)param_1);
    iVar1 = extraout_EDX;
  }
  TDaviGraphicSlider_SetPosition(param_1,iVar1);
  return;
}


/* ==== 0046ab50 FUN_0046ab50 ==== */

uint FUN_0046ab50(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint uVar6;
  
  uVar6 = 0;
  iVar1 = TForm_GetClientWidth(param_1);
  uVar2 = iVar1 - *(int *)(param_1[0x84] + 0x38);
  if (SBORROW4(iVar1,*(int *)(param_1[0x84] + 0x38))) {
    uVar2 = System__RunError(uVar2);
  }
  iVar1 = param_1[0x86];
  uVar5 = (uint)((longlong)iVar1 * 2);
  if ((longlong)(int)uVar5 != (longlong)iVar1 * 2) {
    uVar2 = System__RunError(uVar2);
    uVar5 = extraout_EDX;
  }
  if (uVar2 != uVar5) {
    iVar3 = TForm_GetClientWidth(param_1);
    uVar2 = iVar3 - *(int *)(param_1[0x84] + 0x38);
    if (SBORROW4(iVar3,*(int *)(param_1[0x84] + 0x38))) {
      uVar2 = System__RunError(uVar2);
    }
    iVar3 = (int)((longlong)param_1[0x86] * 2);
    if ((longlong)iVar3 != (longlong)param_1[0x86] * 2) {
      uVar2 = System__RunError(uVar2);
      iVar3 = extraout_EDX_00;
    }
    uVar5 = uVar2 - iVar3;
    if (SBORROW4(uVar2,iVar3)) {
      uVar5 = System__RunError(uVar5);
    }
    uVar2 = param_2 - iVar1;
    if (SBORROW4(param_2,iVar1)) {
      uVar2 = System__RunError(uVar2);
    }
    iVar1 = param_1[0x7f];
    iVar3 = param_1[0x80] - iVar1;
    if (SBORROW4(param_1[0x80],iVar1)) {
      uVar2 = System__RunError(uVar2);
      iVar3 = extraout_EDX_01;
    }
    uVar4 = (uint)((longlong)(int)uVar2 * (longlong)iVar3);
    if ((longlong)(int)uVar4 != (longlong)(int)uVar2 * (longlong)iVar3) {
      uVar4 = System__RunError(uVar4);
    }
    uVar6 = (int)uVar4 / (int)uVar5 + iVar1;
    if (SCARRY4((int)uVar4 / (int)uVar5,iVar1)) {
      uVar6 = System__RunError(uVar6);
    }
  }
  return uVar6;
}


/* ==== 0046abfc FUN_0046abfc ==== */

uint FUN_0046abfc(int *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  
  uVar2 = 0;
  iVar5 = param_1[0x7f];
  if (iVar5 != param_1[0x80]) {
    uVar2 = TForm_GetClientWidth(param_1);
    iVar4 = (int)((longlong)param_1[0x86] * 2);
    if ((longlong)iVar4 != (longlong)param_1[0x86] * 2) {
      uVar2 = System__RunError(uVar2);
      iVar4 = extraout_EDX;
    }
    uVar3 = uVar2 - iVar4;
    if (SBORROW4(uVar2,iVar4)) {
      uVar3 = System__RunError(uVar3);
    }
    if (SBORROW4(param_2,iVar5)) {
      uVar3 = System__RunError(uVar3);
    }
    lVar1 = (longlong)(int)uVar3 * (longlong)(param_2 - iVar5);
    uVar3 = (uint)lVar1;
    if ((int)uVar3 != lVar1) {
      uVar3 = System__RunError(uVar3);
    }
    iVar5 = param_1[0x80] - param_1[0x7f];
    if (SBORROW4(param_1[0x80],param_1[0x7f])) {
      uVar3 = System__RunError(uVar3);
      iVar5 = extraout_EDX_00;
    }
    uVar2 = (int)uVar3 / iVar5 + param_1[0x86];
    if (SCARRY4((int)uVar3 / iVar5,param_1[0x86])) {
      uVar2 = System__RunError(uVar2);
    }
  }
  return uVar2;
}


/* ==== 0046ac70 FUN_0046ac70 ==== */

uint FUN_0046ac70(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  int extraout_EDX_01;
  
  uVar2 = param_1[0x86];
  iVar5 = param_1[0x7f];
  if (iVar5 != param_1[0x80]) {
    iVar1 = TForm_GetClientWidth(param_1);
    uVar2 = iVar1 - *(int *)(param_1[0x84] + 0x38);
    if (SBORROW4(iVar1,*(int *)(param_1[0x84] + 0x38))) {
      uVar2 = System__RunError(uVar2);
    }
    iVar1 = (int)((longlong)param_1[0x86] * 2);
    if ((longlong)iVar1 != (longlong)param_1[0x86] * 2) {
      uVar2 = System__RunError(uVar2);
      iVar1 = extraout_EDX;
    }
    uVar3 = uVar2 - iVar1;
    if (SBORROW4(uVar2,iVar1)) {
      uVar3 = System__RunError(uVar3);
    }
    iVar1 = param_1[0x81] - iVar5;
    if (SBORROW4(param_1[0x81],iVar5)) {
      uVar3 = System__RunError(uVar3);
      iVar1 = extraout_EDX_00;
    }
    uVar4 = (uint)((longlong)(int)uVar3 * (longlong)iVar1);
    if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * (longlong)iVar1) {
      uVar4 = System__RunError(uVar4);
    }
    iVar5 = param_1[0x80] - param_1[0x7f];
    if (SBORROW4(param_1[0x80],param_1[0x7f])) {
      uVar4 = System__RunError(uVar4);
      iVar5 = extraout_EDX_01;
    }
    uVar2 = (int)uVar4 / iVar5 + param_1[0x86];
    if (SCARRY4((int)uVar4 / iVar5,param_1[0x86])) {
      uVar2 = System__RunError(uVar2);
    }
  }
  return uVar2;
}


/* ==== 0046acfc TDaviGraphicSlider.virtual_0b8 ==== */

void TDaviGraphicSlider_virtual_0b8(int param_1)

{
  if (*(short *)(param_1 + 0x22a) != 0) {
    (**(code **)(param_1 + 0x228))(*(undefined4 *)(param_1 + 0x22c),param_1);
  }
  return;
}


/* ==== 0046ad20 TDaviGraphicSlider.dynamic_ffc0 ==== */

void TDaviGraphicSlider_dynamic_ffc0(int *param_1,undefined2 *param_2,undefined4 param_3)

{
  TWinControl_dynamic_ffc0((int)param_1,param_2,param_3);
  switch(*param_2) {
  case 0x21:
    FUN_0046ab38(param_1,param_1[0x7e]);
    break;
  case 0x22:
    FUN_0046aadc(param_1,param_1[0x7e]);
    break;
  case 0x23:
    TDaviGraphicSlider_SetPosition(param_1,param_1[0x7f]);
    break;
  case 0x24:
    TDaviGraphicSlider_SetPosition(param_1,param_1[0x80]);
    break;
  case 0x25:
  case 0x28:
    FUN_0046aadc(param_1,1);
    break;
  case 0x26:
  case 0x27:
    FUN_0046ab38(param_1,1);
  }
  return;
}


/* ==== 0046adc8 TDaviGraphicSlider.dynamic_ffda ==== */

void TDaviGraphicSlider_dynamic_ffda
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint elapse;
  HWND pHVar1;
  UINT_PTR UVar2;
  TIMERPROC pTVar3;
  
  TControl_dynamic_ffda((int)param_1,param_2,param_3,param_4,param_5);
  elapse = FUN_0046abfc(param_1,param_1[0x81]);
  if (param_5 < (int)elapse) {
    FUN_0046aadc(param_1,param_1[0x7e]);
    pTVar3 = (TIMERPROC)0x0;
    elapse = param_1[0x87];
    if ((int)elapse < 0) {
      elapse = System__RunError(elapse);
    }
    UVar2 = 1;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetTimer(pHVar1,UVar2,elapse,pTVar3);
  }
  else {
    FUN_0046ab38(param_1,param_1[0x7e]);
    pTVar3 = (TIMERPROC)0x0;
    elapse = param_1[0x87];
    if ((int)elapse < 0) {
      elapse = System__RunError(elapse);
    }
    UVar2 = 1;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetTimer(pHVar1,UVar2,elapse,pTVar3);
  }
  return;
}


/* ==== 0046ae5c TDaviGraphicSlider.dynamic_ffd8 ==== */

void TDaviGraphicSlider_dynamic_ffd8
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  HWND pHVar1;
  UINT_PTR UVar2;
  
  TControl_dynamic_ffd8((int)param_1,param_2,param_3,param_4,param_5);
  UVar2 = 1;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  KillTimer(pHVar1,UVar2);
  UVar2 = 2;
  pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
  KillTimer(pHVar1,UVar2);
  return;
}


/* ==== 0046ae9c TDaviGraphicSlider.virtual_0b4 ==== */

void TDaviGraphicSlider_virtual_0b4(int param_1)

{
  FUN_00418f9c(*(int **)(param_1 + 0x1f0),0,0,*(int **)(param_1 + 0x208));
  return;
}


/* ==== 0046aeb8 FUN_0046aeb8 ==== */

void FUN_0046aeb8(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0046ac70(param_1);
  TControl_SetLeft((int *)param_1[0x84],uVar1);
  TControl_SetTop((int *)param_1[0x84],param_1[0x85]);
  return;
}


/* ==== 0046aeec TDaviGraphicSlider.SetBackImage ==== */

void TDaviGraphicSlider_SetBackImage(int *param_1)

{
  (**(code **)(*(int *)param_1[0x82] + 8))();
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 0046af08 TDaviGraphicSlider.SetDefinition ==== */

void TDaviGraphicSlider_SetDefinition(int param_1,int param_2)

{
  *(int *)(param_1 + 0x20c) = param_2;
  TDaviGraphicButton_SetDefinition(*(int *)(param_1 + 0x210),param_2);
  return;
}


/* ==== 0046af24 TDaviGraphicSlider.SetLargeStep ==== */

void TDaviGraphicSlider_SetLargeStep(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1f8) = param_2;
  return;
}


/* ==== 0046af2c TDaviGraphicSlider.SetMarginHorz ==== */

void TDaviGraphicSlider_SetMarginHorz(int *param_1,int param_2)

{
  param_1[0x86] = param_2;
  FUN_0046aeb8(param_1);
  return;
}


/* ==== 0046af3c TDaviGraphicSlider.SetMarginVert ==== */

void TDaviGraphicSlider_SetMarginVert(int *param_1,int param_2)

{
  param_1[0x85] = param_2;
  FUN_0046aeb8(param_1);
  return;
}


/* ==== 0046af4c TDaviGraphicSlider.SetMax ==== */

void TDaviGraphicSlider_SetMax(int *param_1,int param_2)

{
  param_1[0x80] = param_2;
  FUN_0046aeb8(param_1);
  return;
}


/* ==== 0046af5c TDaviGraphicSlider.SetMin ==== */

void TDaviGraphicSlider_SetMin(int *param_1,int param_2)

{
  param_1[0x7f] = param_2;
  FUN_0046aeb8(param_1);
  return;
}


/* ==== 0046af6c TDaviGraphicSlider.SetPosition ==== */

void TDaviGraphicSlider_SetPosition(int *param_1,int param_2)

{
  if (param_2 != param_1[0x81]) {
    param_1[0x81] = param_2;
    if (param_1[0x80] < param_2) {
      param_1[0x81] = param_1[0x80];
    }
    if (param_1[0x81] < param_1[0x7f]) {
      param_1[0x81] = param_1[0x7f];
    }
    FUN_0046aeb8(param_1);
    (**(code **)(*param_1 + 0xb8))();
  }
  return;
}


/* ==== 0046afbc TDaviGraphicSlider.WMTimer ==== */

void TDaviGraphicSlider_WMTimer(int *param_1,int param_2)

{
  HWND pHVar1;
  uint uElapse;
  UINT_PTR UVar2;
  TIMERPROC lpTimerFunc;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (*(int *)(param_2 + 4) == 1) {
    UVar2 = 1;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    KillTimer(pHVar1,UVar2);
    lpTimerFunc = (TIMERPROC)0x0;
    uElapse = param_1[0x88];
    if ((int)uElapse < 0) {
      uElapse = System__RunError(uElapse);
    }
    UVar2 = 2;
    pHVar1 = (HWND)Controls_TWinControl_GetHandle(param_1);
    SetTimer(pHVar1,UVar2,uElapse,lpTimerFunc);
    FUN_0046b01c(param_1);
  }
  if (*(int *)(param_2 + 4) == 2) {
    FUN_0046b01c(param_1);
  }
  return;
}


/* ==== 0046b01c FUN_0046b01c ==== */

void FUN_0046b01c(int *param_1)

{
  POINT pt;
  BOOL BVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  UINT_PTR uIDEvent;
  RECT local_24;
  LONG local_14;
  LONG local_10;
  tagPOINT point;
  
  GetCursorPos(&point);
  FUN_0042e2d8(param_1,&point.x,&local_14);
  point.x = local_14;
  point.y = local_10;
  FUN_0042e13c(param_1[0x84],&local_24.left);
  pt.y = local_10;
  pt.x = local_14;
  BVar1 = PtInRect(&local_24,pt);
  if (BVar1 == 0) {
    System__CallDynaInst(param_1,0,CONCAT31((int3)((uint)extraout_ECX >> 8),8));
  }
  else {
    uIDEvent = 2;
    hWnd = (HWND)Controls_TWinControl_GetHandle(param_1);
    KillTimer(hWnd,uIDEvent);
  }
  return;
}


/* ==== 0046b0a0 TDaviGraphicSlider.WMGetDlgCode ==== */

void TDaviGraphicSlider_WMGetDlgCode(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (**(code **)(*param_1 + -0x10))(param_1,param_2);
  piVar1 = (int *)(param_2 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    System__RunError(uVar3);
  }
  return;
}


/* ==== 0046b0bc FUN_0046b0bc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b0bc(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad188 = _DAT_004ad188 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


