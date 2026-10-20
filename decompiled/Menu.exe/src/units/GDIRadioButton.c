/* Menu.exe — units/GDIRadioButton.pas: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049057c TCustomGDIRadioButton.virtual_0cc ==== */

void TCustomGDIRadioButton_virtual_0cc(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xbc))(param_1,1);
  }
  return;
}


/* ==== 004905a0 TCustomGDIRadioButton.virtual_0bc ==== */

void TCustomGDIRadioButton_virtual_0bc(int *param_1,char param_2)

{
  char cVar1;
  uint i_val;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int j;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 != param_2) {
    TGDIButton_SetTabStop((int)param_1,param_2);
    if ((param_2 != '\0') && (param_1[9] != 0)) {
      i_val = Controls_TWinControl_GetControlCount(param_1[9]);
      if (SBORROW4(i_val,1)) {
        System__RunError(i_val);
      }
      if (-1 < (int)(i_val - 1)) {
        j = 0;
        do {
          iVar2 = Controls_TWinControl_GetControl(param_1[9],j);
          uVar3 = System__IsClass(*(int **)(iVar2 + 4),(int)&PTR_TControl_virtual_000_004901c8);
          if ((char)uVar3 != '\0') {
            iVar2 = Controls_TWinControl_GetControl(param_1[9],j);
            if (param_1 != *(int **)(iVar2 + 4)) {
              iVar2 = Controls_TWinControl_GetControl(param_1[9],j);
              piVar4 = (int *)System__AsClass(*(int **)(iVar2 + 4),
                                              (int)&PTR_TControl_virtual_000_004901c8);
              (**(code **)(*piVar4 + 0xbc))(piVar4,0);
            }
          }
          j = j + 1;
          i_val = i_val - 1;
        } while (i_val != 0);
      }
    }
    TCustomGDICheckBox_virtual_0bc(param_1,param_2);
  }
  return;
}


/* ==== 00490654 TCustomGDIRadioButton.virtual_0c0 ==== */

void TCustomGDIRadioButton_virtual_0c0(int *param_1,int *param_2,LONG *param_3)

{
  char cVar1;
  HDC pHVar2;
  int i_val;
  tagRECT *rect;
  UINT UVar3;
  UINT UVar4;
  tagRECT local_14;
  
  rect = &local_14;
  for (i_val = 4; i_val != 0; i_val = i_val + -1) {
    rect->left = *param_3;
    param_3 = param_3 + 1;
    rect = (tagRECT *)&rect->top;
  }
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 == '\0') {
    UVar4 = 4;
    UVar3 = 4;
    rect = &local_14;
    pHVar2 = (HDC)FUN_004194d8(param_2);
    DrawFrameControl(pHVar2,rect,UVar3,UVar4);
  }
  else {
    UVar4 = 0x404;
    UVar3 = 4;
    rect = &local_14;
    pHVar2 = (HDC)FUN_004194d8(param_2);
    DrawFrameControl(pHVar2,rect,UVar3,UVar4);
  }
  return;
}


