/* SetDebug.exe — units/StdActns.pas: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0041fdf8 THintAction.virtual_02c ==== */

int * THintAction_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomAction_virtual_02c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 0042fb40 FUN_0042fb40 ==== */

void FUN_0042fb40(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  
  if ((char)param_2 != *(char *)((int)param_1 + 0x59)) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TBasicActionLink_virtual_000_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x48))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    *(char *)((int)param_1 + 0x59) = (char)param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 0042fb98 FUN_0042fb98 ==== */

void FUN_0042fb98(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  
  if (param_2 != param_1[0x17]) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TBasicActionLink_virtual_000_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x4c))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    param_1[0x17] = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 0042fbf0 THintAction.SetHint ==== */

void THintAction_SetHint(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  undefined1 in_ZF;
  
  FUN_00403d48(param_2,(uint *)param_1[0x18]);
  if (!(bool)in_ZF) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TBasicActionLink_virtual_000_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x50))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_00403a0c(param_1 + 0x18,param_2);
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


/* ==== 0042fc58 FUN_0042fc58 ==== */

void FUN_0042fc58(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int j;
  int i_val;
  
  if (param_2 != param_1[0x19]) {
    i_val = *(int *)(param_1[0x10] + 8);
    if (-1 < i_val + -1) {
      j = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
        uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TBasicActionLink_virtual_000_0042f340);
        if ((char)uVar2 != '\0') {
          piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],j);
          (**(code **)(*piVar1 + 0x54))(piVar1,param_2);
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    param_1[0x19] = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


