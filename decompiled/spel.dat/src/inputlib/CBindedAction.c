/* spel.dat — inputlib/CBindedAction.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ee040 FUN_004ee040 ==== */

int FUN_004ee040(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572828;
  local_c = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x38);
  if ((-1 < iVar1) && (iVar1 < 5)) {
    ExceptionList = &local_c;
    FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 4 + iVar1 * 8) + 8),1,&stack0x00000004);
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
    ExceptionList = local_c;
    return iVar1;
  }
  ExceptionList = &local_c;
  uVar2 = FUN_0049df90(local_58,s_Illegal_index_m_NrCmdCombination_005b8650,iVar1,5);
  local_4 = 0;
  uVar3 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                       s_D__Work_InputLib_prog_CBindedAct_005b8628,0x2f);
  local_4._0_1_ = 1;
  uVar2 = FUN_0047c9a0(local_38,uVar3,uVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(uVar2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_005872d0);
}


/* ==== 004ee100 FUN_004ee100 ==== */

void FUN_004ee100(void)

{
  return;
}


/* ==== 004ee110 FUN_004ee110 ==== */

int FUN_004ee110(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572858;
  local_c = ExceptionList;
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x38))) {
    return in_ECX + param_1 * 8;
  }
  ExceptionList = &local_c;
  uVar1 = FUN_0049df90(local_58,s_Input_group_does_not_exist__a_Co_005b86a4,param_1,
                       *(undefined4 *)(in_ECX + 0x38));
  local_4 = 0;
  uVar2 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                       s_D__Work_InputLib_prog_CBindedAct_005b8628,0x50);
  local_4._0_1_ = 1;
  uVar1 = FUN_0047c9a0(local_38,uVar2,uVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_005872d0);
}


/* ==== 004ee240 FUN_004ee240 ==== */

void FUN_004ee240(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004ee250 FUN_004ee250 ==== */

void FUN_004ee250(void)

{
  FUN_005584e0(&LAB_004ee260);
  return;
}


/* ==== 004ee280 FUN_004ee280 ==== */

void FUN_004ee280(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004ee290 FUN_004ee290 ==== */

void FUN_004ee290(void)

{
  FUN_005584e0(&LAB_004ee2a0);
  return;
}


/* ==== 004ee2b0 FUN_004ee2b0 ==== */

void FUN_004ee2b0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f1a90();
  local_4 = 0;
  *in_ECX = &PTR_FUN_00578250;
  FUN_004ee510();
  FUN_004ee370();
  ExceptionList = local_c;
  return;
}


/* ==== 004ee300 FUN_004ee300 ==== */

void FUN_004ee300(byte param_1)

{
  FUN_004ee320();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004ee320 FUN_004ee320 ==== */

void FUN_004ee320(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00572898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00578250;
  local_4 = 0;
  FUN_0051ed40();
  local_4 = 0xffffffff;
  FUN_004f1b00();
  ExceptionList = local_c;
  return;
}


