/* spel.dat — inputlib/CBindedAction.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ee040 FUN_004ee040 ==== */

int __thiscall FUN_004ee040(void *this)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  int this_val;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572828;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0x38);
  if ((-1 < iVar1) && (iVar1 < 5)) {
    this_val = *(int *)((int)this + iVar1 * 8 + 4);
    ExceptionList = &local_c;
    FUN_004a5620(this_val,*(undefined4 *)(this_val + 8),1,&stack0x00000004);
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    ExceptionList = local_c;
    return iVar1;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_0049df90(local_58,s_Illegal_index_m_NrCmdCombination_005b8650);
  local_4 = 0;
  puVar2 = (undefined1 *)FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4);
  local_4._0_1_ = 1;
  uVar3 = FUN_0047c9a0(local_38,puVar2,iVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(local_28,uVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_005872d0);
}


/* ==== 004ee100 FUN_004ee100 ==== */

void * __thiscall FUN_004ee100(void *this)

{
  return this;
}


/* ==== 004ee110 FUN_004ee110 ==== */

int FUN_004ee110(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
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
  puStack_8 = &LAB_00572858;
  local_c = ExceptionList;
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x38))) {
    return in_ECX + param_1 * 8;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_0049df90(local_58,s_Input_group_does_not_exist__a_Co_005b86a4);
  local_4 = 0;
  puVar2 = (undefined1 *)FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4);
  local_4._0_1_ = 1;
  uVar3 = FUN_0047c9a0(local_38,puVar2,iVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004edac0(local_28,uVar3);
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

void * __thiscall FUN_004ee2b0(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f1a90();
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00578250;
  FUN_004ee510(this);
  FUN_004ee370(this);
  ExceptionList = local_c;
  return this;
}


/* ==== 004ee300 FUN_004ee300 ==== */

void * __thiscall FUN_004ee300(void *this,byte param_2)

{
  FUN_004ee320();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004ee320 FUN_004ee320 ==== */

void __thiscall FUN_004ee320(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00572898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00578250;
  local_4 = 0;
  FUN_0051ed40();
  local_4 = 0xffffffff;
  FUN_004f1b00(this);
  ExceptionList = local_c;
  return;
}


