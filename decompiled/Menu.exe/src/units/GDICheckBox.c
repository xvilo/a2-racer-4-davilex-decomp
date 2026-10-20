/* Menu.exe — units/GDICheckBox.pas: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0048febc TCustomGDICheckBox.virtual_02c ==== */

int * TCustomGDICheckBox_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomGDIButton_virtual_02c(param_1,'\0',param_3);
  TControl_SetWidth(param_1,0x14);
  TControl_SetHeight(param_1,0x14);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0048ff10 TCustomGDICheckBox.dynamic_ffec ==== */

void TCustomGDICheckBox_dynamic_ffec(int *param_1)

{
  (**(code **)(*param_1 + 0xcc))();
  TCustomGDIButton_dynamic_ffec(param_1);
  return;
}


/* ==== 0048ff2c TCustomGDICheckBox.virtual_0cc ==== */

void TCustomGDICheckBox_virtual_0cc(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xb8))();
  (**(code **)(*param_1 + 0xbc))(param_1,uVar1 ^ 1);
  return;
}


/* ==== 0048ff50 TCustomGDICheckBox.virtual_0b8 ==== */

undefined1 TCustomGDICheckBox_virtual_0b8(int param_1)

{
  return *(undefined1 *)(param_1 + 0x198);
}


/* ==== 0048ff58 TCustomGDICheckBox.virtual_0bc ==== */

void TCustomGDICheckBox_virtual_0bc(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x66]) {
    *(char *)(param_1 + 0x66) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0048ff78 TCustomGDICheckBox.virtual_0c0 ==== */

void TCustomGDICheckBox_virtual_0c0(int *param_1,int *param_2,LONG *param_3)

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
    UVar4 = 0;
    UVar3 = 4;
    rect = &local_14;
    pHVar2 = (HDC)FUN_004194d8(param_2);
    DrawFrameControl(pHVar2,rect,UVar3,UVar4);
  }
  else {
    UVar4 = 0x400;
    UVar3 = 4;
    rect = &local_14;
    pHVar2 = (HDC)FUN_004194d8(param_2);
    DrawFrameControl(pHVar2,rect,UVar3,UVar4);
  }
  return;
}


