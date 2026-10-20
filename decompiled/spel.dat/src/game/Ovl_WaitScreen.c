/* spel.dat — game/Ovl_WaitScreen.cpp: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00497230 FUN_00497230 ==== */

undefined1 * FUN_00497230(undefined1 *this_val,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_14;
  undefined4 local_10;
  char local_c [11];
  undefined1 local_1;
  
  local_10 = 0;
  FUN_00497340(param_2,&local_10,&local_14,&param_2);
  FUN_00559677(local_c,0xb,s__02d__02d__d_005add60,local_10,local_14,param_2);
  i = 0xffffffff;
  local_1 = 0;
  pcVar3 = local_c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(this_val + 4) = 0;
  i = ~i - 1;
  *this_val = (undefined1)param_2;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_0049730d;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_0049730d:
  pcVar3 = local_c;
  pcVar4 = *(char **)(this_val + 4);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(*(int *)(this_val + 4) + i) = 0;
  return this_val;
}


/* ==== 00497340 FUN_00497340 ==== */

void FUN_00497340(int param_1,int *param_2,int *param_3,int *param_4)

{
  *param_2 = param_1 / 60000;
  *param_3 = (param_1 % 60000) / 1000;
  *param_4 = ((param_1 % 60000) % 1000) / 100;
  return;
}


/* ==== 004973f0 FUN_004973f0 ==== */

void FUN_004973f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00497400 FUN_00497400 ==== */

void FUN_00497400(void)

{
  FUN_005584e0(&LAB_00497410);
  return;
}


/* ==== 00497430 FUN_00497430 ==== */

void FUN_00497430(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00497440 FUN_00497440 ==== */

void FUN_00497440(void)

{
  FUN_005584e0(&LAB_00497450);
  return;
}


/* ==== 00497460 FUN_00497460 ==== */

void * __thiscall FUN_00497460(void *this,byte param_2)

{
  thunk_FUN_004925f0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00497480 FUN_00497480 ==== */

void * __thiscall FUN_00497480(void *this,undefined4 param_2)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e428;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  i = 0xffffffff;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar2 = s_OVL_WAIT_SCREEN_005add84;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_OVL_WAIT_SCREEN_005add84;
    pcVar3 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_18[i] = '\0';
    local_14 = i;
  }
  local_4 = 0;
  FUN_004924a0(this,param_2,local_1c);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  *(undefined ***)this = &PTR_FUN_00577124;
  *(undefined1 *)((int)this + 0x1c) = 0;
  ExceptionList = local_c;
  return this;
}


/* ==== 00497560 FUN_00497560 ==== */

void __thiscall FUN_00497560(void *this)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  undefined1 *this_val;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e44a;
  local_c = ExceptionList;
  i = 0xffffffff;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  pcVar3 = s_OVL_PROGRESS_BAR_005add70;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(local_3c,s_OVL_PROGRESS_BAR_005add70,~i - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(local_3c);
  *(undefined4 *)((int)this + 0x18) = uVar2;
  local_4 = 0xffffffff;
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_38 + -1));
    }
    else {
      *(char *)(local_38 + -1) = cVar1 + -1;
    }
  }
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_WaitS_005add94;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(local_2c,s_C__Work_A2IV_Game_prog_Ovl_WaitS_005add94,~i - 1);
  this_val = local_1c;
  pcVar4 = s_OVL_PROGRESS_BAR_005add70;
  pcVar3 = s_Element__s_not_found_005addc0;
  local_4 = 1;
  uVar2 = FUN_0049df90(this_val,s_Element__s_not_found_005addc0);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(*(undefined4 *)((int)this + 0x18),uVar2,local_2c,0x35,this_val,pcVar3,pcVar4);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  *(undefined1 *)((int)this + 0x1c) = 1;
  ExceptionList = local_c;
  return;
}


