/* spel.dat — game/Par_Main.cpp: 42 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045d050 FUN_0045d050 ==== */

void FUN_0045d050(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_0045cf30(in_ECX,param_1,param_2);
  return;
}


/* ==== 0045d070 FUN_0045d070 ==== */

void __thiscall FUN_0045d070(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0045d072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 4))();
  return;
}


/* ==== 0045d100 FUN_0045d100 ==== */

void FUN_0045d100(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0045d110 FUN_0045d110 ==== */

void FUN_0045d110(void)

{
  FUN_005584e0(&LAB_0045d120);
  return;
}


/* ==== 0045d140 FUN_0045d140 ==== */

void FUN_0045d140(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0045d150 FUN_0045d150 ==== */

void FUN_0045d150(void)

{
  FUN_005584e0(&LAB_0045d160);
  return;
}


/* ==== 0045d170 FUN_0045d170 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0045d170(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint __ftol_result;
  void *this_val;
  int i;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float in_stack_00000048;
  undefined4 in_stack_0000004c;
  float in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 auStackY_cc [16];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  char *local_7c;
  char **local_78;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0056a98b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_15 = 1;
  local_8 = 0;
  if (DAT_006fb918 == 0) {
    return 0;
  }
  local_78 = (char **)0x45d1c1;
  ExceptionList = &local_10;
  cVar4 = FUN_00460310(DAT_00709980);
  if (cVar4 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  switch(param_1) {
  case 0:
    __ftol_result = __ftol();
    i = (__ftol_result & DAT_005b23bc) * 4;
    fVar1 = *(float *)(i + DAT_0073b578) * in_stack_00000048 -
            *(float *)(i + DAT_0073b530) * in_stack_00000050;
    fVar2 = *(float *)(i + DAT_0073b530) * in_stack_00000048;
    fVar3 = *(float *)(i + DAT_0073b578) * in_stack_00000050;
    local_78 = (char **)0x45d24f;
    FUN_00460370();
    if (DAT_00709980 == 0) {
      local_78 = (char **)0x45d295;
      this_val = operator_new(0xac);
      local_8._0_1_ = 1;
      if (this_val == (void *)0x0) {
        DAT_00709980 = 0;
      }
      else {
        auStackY_cc[2] = 10;
        local_7c = (char *)0x0;
        puVar5 = (undefined4 *)&stack0x00000008;
        puVar6 = auStackY_cc + 3;
        local_80 = fVar1;
        local_78 = (char **)(fVar3 + fVar2);
        for (i = 0x10; i != 0; i = i + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        auStackY_cc[1] = 0x45d2d5;
        DAT_00709980 = FUN_0045e350(this_val);
      }
      local_78 = (char **)s_C__Work_A2IV_Game_prog_Par_Main__005a54b8;
      local_80 = (float)(uint)(DAT_00709980 != 0);
      local_7c = s__s___d__Not_enough_mem_for_new_p_005a54dc;
      local_8 = (uint)local_8._1_3_ << 8;
      local_84 = 6.412333e-39;
      FUN_004a6980();
    }
    else {
      auStackY_cc[3] = 1;
      local_78 = (char **)0x0;
      puVar5 = (undefined4 *)&stack0x00000008;
      puVar6 = auStackY_cc + 4;
      local_7c = (char *)fVar1;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      auStackY_cc[2] = 0x45d289;
      FUN_0045e660(DAT_00709980);
    }
    _DAT_00709994 = _DAT_00709994 + 1;
    ExceptionList = local_10;
    return local_15;
  case 1:
    local_80 = (float)in_stack_00000054;
    local_7c = (char *)in_stack_00000058;
    local_78 = (char **)in_stack_0000005c;
    local_8c = in_stack_00000048;
    local_88 = (float)in_stack_0000004c;
    local_84 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    i = FUN_0045f6f0();
    if (i == 0) {
      local_78 = &local_1c;
      local_15 = 0;
      local_1c = s_CreateSparkSystem_failed_005a5508;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d3d4;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d396;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_0070998c = DAT_0070998c + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_0070998c = DAT_0070998c + 1;
    ExceptionList = local_10;
    return local_15;
  case 2:
    local_7c = (char *)in_stack_00000054;
    local_78 = (char **)in_stack_00000058;
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    local_80 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d414;
    i = FUN_0045be90();
    if (i == 0) {
      local_78 = &local_20;
      local_15 = 0;
      local_20 = s_CreateLeafSystem_failed_005a5524;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d48d;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d44f;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_00709984 = DAT_00709984 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_00709984 = DAT_00709984 + 1;
    ExceptionList = local_10;
    return local_15;
  case 3:
    local_7c = (char *)in_stack_00000054;
    local_78 = (char **)in_stack_00000058;
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    local_80 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d6f8;
    i = FUN_00458e20();
    if (i == 0) {
      local_78 = &local_30;
      local_15 = 0;
      local_30 = s_CreateBirdSystem_failed_005a558c;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d771;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d733;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_00709998 = DAT_00709998 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_00709998 = DAT_00709998 + 1;
    ExceptionList = local_10;
    return local_15;
  case 4:
    local_7c = (char *)in_stack_00000054;
    local_78 = (char **)in_stack_00000058;
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    local_80 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d4cd;
    i = FUN_0045c8a0();
    if (i == 0) {
      local_78 = &local_24;
      local_15 = 0;
      local_24 = s_CreateMailSystem_failed_005a553c;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d546;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d508;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_00709988 = DAT_00709988 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_00709988 = DAT_00709988 + 1;
    ExceptionList = local_10;
    return local_15;
  case 5:
    local_7c = (char *)in_stack_00000054;
    local_78 = (char **)in_stack_00000058;
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    local_80 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d63f;
    i = FUN_00460a30();
    if (i == 0) {
      local_78 = &local_2c;
      local_15 = 0;
      local_2c = s_CreateTrashSystem_failed_005a5570;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d6b8;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d67a;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_00709990 = DAT_00709990 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_00709990 = DAT_00709990 + 1;
    ExceptionList = local_10;
    return local_15;
  case 6:
    local_7c = (char *)in_stack_00000054;
    local_78 = (char **)in_stack_00000058;
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    local_80 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d586;
    i = FUN_0045edc0();
    if (i == 0) {
      local_78 = &local_28;
      local_15 = 0;
      local_28 = s_CreatePaperSystem_failed_005a5554;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d5ff;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d5c1;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_0070999c = DAT_0070999c + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_0070999c = DAT_0070999c + 1;
    ExceptionList = local_10;
    return local_15;
  case 7:
    local_78 = (char **)&stack0x00000048;
    local_7c = &stack0x00000008;
    local_80 = 6.41516e-39;
    i = FUN_00459de0();
    if (i == 0) {
      local_78 = &local_48;
      local_15 = 0;
      local_48 = s_CreateCarPartSystem_failed_005a5638;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45db54;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45db16;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_007099a0 = DAT_007099a0 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_007099a0 = DAT_007099a0 + 1;
    ExceptionList = local_10;
    return local_15;
  case 8:
    local_7c = (char *)in_stack_00000054;
    local_78 = (char **)in_stack_00000058;
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    local_80 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d7b1;
    i = FUN_0045a040();
    if (i == 0) {
      local_78 = &local_34;
      local_15 = 0;
      local_34 = s_CreateDirtSystem_failed_005a55a4;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d82a;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d7ec;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_007099a4 = DAT_007099a4 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_007099a4 = DAT_007099a4 + 1;
    ExceptionList = local_10;
    return local_15;
  case 9:
    local_7c = (char *)in_stack_00000054;
    local_78 = (char **)in_stack_00000058;
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    local_80 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d86a;
    i = FUN_0045a890();
    if (i == 0) {
      local_78 = &local_38;
      local_15 = 0;
      local_38 = s_CreateDirtpieceSystem_failed_005a55bc;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d8e3;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d8a5;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_007099a8 = DAT_007099a8 + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_007099a8 = DAT_007099a8 + 1;
    ExceptionList = local_10;
    return local_15;
  case 10:
    local_7c = (char *)in_stack_00000054;
    local_78 = (char **)in_stack_00000058;
    local_88 = in_stack_00000048;
    local_84 = (float)in_stack_0000004c;
    local_80 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc + 1;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    auStackY_cc[0] = 0x45d923;
    i = FUN_004613e0();
    if (i == 0) {
      local_78 = &local_3c;
      local_15 = 0;
      local_3c = s_CreateWaterSystem_failed_005a55dc;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45d99c;
      __CxxThrowException_8();
    }
    if (DAT_00709980 != 0) {
      local_78 = (char **)0x45d95e;
      cVar4 = FUN_0045e8d0();
      if (cVar4 == '\0') {
        local_15 = 0;
      }
      DAT_007099ac = DAT_007099ac + 1;
      ExceptionList = local_10;
      return local_15;
    }
    DAT_00709980 = i;
    DAT_007099ac = DAT_007099ac + 1;
    ExceptionList = local_10;
    return local_15;
  case 0xb:
    local_80 = (float)in_stack_00000054;
    local_7c = (char *)in_stack_00000058;
    local_78 = (char **)in_stack_0000005c;
    local_8c = in_stack_00000048;
    local_88 = (float)in_stack_0000004c;
    local_84 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    i = FUN_00461c30();
    if (i == 0) {
      local_78 = &local_40;
      local_15 = 0;
      local_40 = s_CreateWaterwaveSystem_failed_005a55f8;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45da57;
      __CxxThrowException_8();
    }
    break;
  case 0xc:
    local_80 = (float)in_stack_00000054;
    local_7c = (char *)in_stack_00000058;
    local_78 = (char **)in_stack_0000005c;
    local_8c = in_stack_00000048;
    local_88 = (float)in_stack_0000004c;
    local_84 = in_stack_00000050;
    puVar5 = (undefined4 *)&stack0x00000008;
    puVar6 = auStackY_cc;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    i = FUN_00461c30();
    if (i == 0) {
      local_78 = &local_44;
      local_15 = 0;
      local_44 = s_CreateWaterwaveSystem_failed_005a5618;
                    /* WARNING: Subroutine does not return */
      local_7c = (char *)0x45daca;
      __CxxThrowException_8();
    }
    break;
  default:
    ExceptionList = local_10;
    return 0;
  }
  if (DAT_00709980 != 0) {
    local_78 = (char **)0x45da19;
    cVar4 = FUN_0045e8d0();
    if (cVar4 == '\0') {
      local_15 = 0;
    }
    DAT_007099b0 = DAT_007099b0 + 1;
    ExceptionList = local_10;
    return local_15;
  }
  DAT_00709980 = i;
  DAT_007099b0 = DAT_007099b0 + 1;
  ExceptionList = local_10;
  return local_15;
}


/* ==== 0045dc00 FUN_0045dc00 ==== */

void FUN_0045dc00(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int this_val;
  undefined4 in_stack_0000003c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a995;
  local_10 = ExceptionList;
  local_8 = 0;
  this_val = DAT_00709980;
  ExceptionList = &local_10;
  while (this_val != 0) {
    cVar1 = FUN_0045ebf0(this_val,param_1,in_stack_0000003c);
    if (cVar1 == '\0') {
      iVar2 = FUN_0045e8b0(this_val);
      DAT_00709980 = FUN_0045e780(this_val);
      this_val = iVar2;
    }
    else {
      this_val = FUN_0045e8b0(this_val);
    }
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045dce0 FUN_0045dce0 ==== */

void FUN_0045dce0(void)

{
  int this_val;
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 auStack_64 [6];
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a99f;
  local_10 = ExceptionList;
  local_8 = 0;
  this_val = DAT_00709980;
  ExceptionList = &local_10;
  if ((DAT_006fb8d0 != 0) && (ExceptionList = &local_10, DAT_006fb940 != 0)) {
    uStack_28 = 1;
    uStack_2c = 0x1b;
    piStack_30 = DAT_0073b4b4;
    uStack_34 = 0x45dd29;
    ExceptionList = &local_10;
    (**(code **)(*DAT_0073b4b4 + 0x5c))();
    uStack_34 = DAT_005afa58;
    uStack_38 = 0x13;
    piStack_3c = DAT_0073b4b4;
    uStack_40 = 0x45dd3d;
    (**(code **)(*DAT_0073b4b4 + 0x5c))();
    uStack_40 = DAT_005afa5c;
    uStack_44 = 0x14;
    piStack_48 = DAT_0073b4b4;
    uStack_4c = 0x45dd51;
    (**(code **)(*DAT_0073b4b4 + 0x5c))();
    this_val = DAT_00709980;
  }
  for (; this_val != 0; this_val = FUN_0045e8b0(this_val)) {
    puVar2 = auStack_64;
    puVar1 = (undefined4 *)register0x00000010;
    for (i = 0x10; puVar1 = puVar1 + 1, i != 0; i = i + -1) {
      *puVar2 = *puVar1;
      puVar2 = puVar2 + 1;
    }
    FUN_0045ec10(this_val);
    uStack_28 = 0x45dd78;
  }
  if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
    uStack_28 = 0;
    uStack_2c = 0x1b;
    piStack_30 = DAT_0073b4b4;
    uStack_34 = 0x45dd9d;
    (**(code **)(*DAT_0073b4b4 + 0x5c))();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045de10 FUN_0045de10 ==== */

void FUN_0045de10(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a9a9;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  while (DAT_00709980 != 0) {
    DAT_00709980 = FUN_0045e780();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045ded0 FUN_0045ded0 ==== */

void __thiscall
FUN_0045ded0(void *this,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x30) = param_3;
  *(undefined ***)this = &PTR_LAB_005768e4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = *param_5;
  *(undefined4 *)((int)this + 0x10) = param_5[1];
  *(undefined4 *)((int)this + 0x14) = param_5[2];
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x34) = *param_4;
  *(undefined4 *)((int)this + 0x38) = param_4[1];
  *(undefined4 *)((int)this + 0x3c) = param_4[2];
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0x3f800000;
  *(undefined4 *)((int)this + 0x4c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x50) = 0x3f800000;
  *(undefined4 *)((int)this + 0x54) = 0x3f800000;
  *(undefined4 *)((int)this + 0x58) = 0x3f800000;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return;
}


/* ==== 0045df60 FUN_0045df60 ==== */

void __thiscall FUN_0045df60(void *this)

{
  *(undefined ***)this = &PTR_LAB_005768e4;
  return;
}


/* ==== 0045df70 FUN_0045df70 ==== */

void __thiscall
FUN_0045df70(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  void *this_val;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x68);
  this_val = operator_new(0x70);
  if (this_val == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0045ded0(this_val,param_2,param_3,param_4,param_5);
  }
  *(int *)((int)this + 0x68) = iVar2;
  FUN_004a6980(iVar2 != 0,s__s___d__Not_enough_mem_for_new_p_005a5978,
               s_C__Work_A2IV_Game_prog_Par_Main__005a5954,0x2b0);
  *(void **)(*(int *)((int)this + 0x68) + 0x6c) = this;
  *(int *)(*(int *)((int)this + 0x68) + 0x68) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)((int)this + 0x68);
  }
  return;
}


/* ==== 0045dff0 FUN_0045dff0 ==== */

void __thiscall FUN_0045dff0(void *this,int param_2)

{
  undefined4 uVar1;
  
  FUN_004a6980(param_2 != 0,s__s___d__Can_not_insert_particle___005a59c8,
               s_C__Work_A2IV_Game_prog_Par_Main__005a59a4,0x2bd);
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x68);
    *(void **)(param_2 + 0x6c) = this;
    *(undefined4 *)(param_2 + 0x68) = uVar1;
    *(int *)((int)this + 0x68) = param_2;
    if (*(int *)(param_2 + 0x68) != 0) {
      FUN_0045e100(*(int *)(param_2 + 0x68),param_2);
    }
  }
  return;
}


/* ==== 0045e040 FUN_0045e040 ==== */

void * __thiscall FUN_0045e040(void *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*(int *)((int)this + 0x6c) == 0) {
    pvVar4 = *(void **)((int)this + 0x68);
    pvVar3 = (void *)0x0;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x6c) + 0x68) = *(undefined4 *)((int)this + 0x68);
    pvVar3 = *(void **)((int)this + 0x6c);
    pvVar2 = pvVar3;
    pvVar4 = this;
    while (pvVar1 = pvVar2, pvVar1 != (void *)0x0) {
      pvVar4 = pvVar1;
      pvVar2 = *(void **)((int)pvVar1 + 0x6c);
    }
  }
  if (*(int *)((int)this + 0x68) != 0) {
    *(void **)(*(int *)((int)this + 0x68) + 0x6c) = pvVar3;
  }
  if (this != (void *)0x0) {
    FUN_0045df60(this);
    FUN_0054b339(this);
  }
  return pvVar4;
}


/* ==== 0045e090 FUN_0045e090 ==== */

int __thiscall FUN_0045e090(void *this)

{
  return (int)this + 0xc;
}


/* ==== 0045e0a0 FUN_0045e0a0 ==== */

int __thiscall FUN_0045e0a0(void *this)

{
  return (int)this + 0x24;
}


/* ==== 0045e0b0 FUN_0045e0b0 ==== */

int __thiscall FUN_0045e0b0(void *this)

{
  return (int)this + 0x34;
}


/* ==== 0045e0c0 FUN_0045e0c0 ==== */

float10 __thiscall FUN_0045e0c0(void *this)

{
  return (float10)*(float *)((int)this + 8);
}


/* ==== 0045e0d0 FUN_0045e0d0 ==== */

undefined4 __thiscall FUN_0045e0d0(void *this)

{
  return *(undefined4 *)((int)this + 0x68);
}


/* ==== 0045e100 FUN_0045e100 ==== */

void __thiscall FUN_0045e100(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x6c) = param_2;
  return;
}


/* ==== 0045e110 FUN_0045e110 ==== */

void __thiscall FUN_0045e110(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x60) = param_2;
  return;
}


/* ==== 0045e120 FUN_0045e120 ==== */

void __thiscall FUN_0045e120(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 100) = param_2;
  return;
}


/* ==== 0045e230 FUN_0045e230 ==== */

void __thiscall FUN_0045e230(void *this,undefined4 param_2)

{
  (*(code *)**(undefined4 **)this)(param_2);
  return;
}


/* ==== 0045e240 FUN_0045e240 ==== */

void __thiscall FUN_0045e240(void *this)

{
  float10 fVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  fVar1 = (float10)FUN_004602e0(this,0x40000000,0x40a00000);
  *(float *)((int)this + 8) = (float)fVar1;
  *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar1 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x34) = (float)fVar1;
  fVar1 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x38) = (float)fVar1;
  fVar1 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  fVar1 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x40) = (float)fVar1;
  fVar1 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x44) = (float)fVar1;
  fVar1 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x48) = (float)fVar1;
  *(undefined4 *)((int)this + 0x4c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x50) = 0x3f800000;
  *(undefined4 *)((int)this + 0x54) = 0x3f800000;
  *(undefined4 *)((int)this + 0x58) = 0x3f800000;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  MessageBeep(0);
  return;
}


/* ==== 0045e300 FUN_0045e300 ==== */

void __thiscall FUN_0045e300(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0045e302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 4))();
  return;
}


/* ==== 0045e350 FUN_0045e350 ==== */

void * __thiscall FUN_0045e350(void *this,int param_2)

{
  void *this_val_3;
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float fStack00000008;
  undefined4 uStack0000000c;
  float fStack00000010;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  undefined4 *in_stack_00000054;
  float fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  undefined4 this_val_2;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a9be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(float *)((int)this + 0x68) = (float)param_2;
  *(float *)((int)this + 0x6c) = in_stack_00000048;
  puVar1 = &stack0x00000008;
  puVar2 = (undefined4 *)((int)this + 0x10);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined ***)this = &PTR_LAB_005768f0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x41100000;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(float *)((int)this + 0x70) = in_stack_0000004c;
  *(float *)((int)this + 0x74) = in_stack_00000050;
  *(undefined4 *)((int)this + 0x5c) = *in_stack_00000054;
  *(undefined4 *)((int)this + 0x60) = in_stack_00000054[1];
  *(undefined4 *)((int)this + 100) = in_stack_00000054[2];
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x3f800000;
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x40a00000;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  in_stack_00000048 = 0.0;
  in_stack_0000004c = 10.0;
  in_stack_00000050 = 0.0;
  fStack00000008 = 0.0;
  uStack0000000c = 0;
  fStack00000010 = 0.0;
  this_val_3 = operator_new(0x70);
  local_4 = 0;
  in_stack_00000054 = this_val_3;
  if (this_val_3 == (void *)0x0) {
    i = 0;
  }
  else {
    this_val = (undefined1 *)&stack0x00000008;
    puVar1 = &stack0x00000048;
    fVar3 = (float10)FUN_004602e0(this_val,0x3f000000,0x40000000,puVar1,this_val);
    fVar4 = (float)fVar3;
    fVar3 = (float10)FUN_004602e0();
    i = FUN_0045ded0(this_val_3,(float)fVar3,fVar4,puVar1,this_val);
  }
  local_4 = 0xffffffff;
  *(int *)((int)this + 0x98) = i;
  FUN_004a6980(i != 0,s__s___d__Not_enough_mem_for_new_P_005a5adc,
               s_C__Work_A2IV_Game_prog_Par_Main__005a5ab8,0x40d);
  this_val_2 = *(undefined4 *)((int)this + 0x98);
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      fVar3 = (float10)FUN_004602e0();
      in_stack_00000048 = (float)fVar3;
      fVar3 = (float10)FUN_004602e0();
      in_stack_0000004c = (float)fVar3;
      fVar3 = (float10)FUN_004602e0();
      in_stack_00000050 = (float)fVar3;
      fVar3 = (float10)FUN_004602e0();
      fStack00000008 = (float)fVar3;
      fVar3 = (float10)FUN_004602e0();
      fStack00000010 = (float)fVar3;
      this_val = (undefined1 *)&stack0x00000008;
      puVar1 = &stack0x00000048;
      fVar3 = (float10)FUN_004602e0(this_val,0x3f000000,0x40000000,puVar1,this_val);
      fVar4 = (float)fVar3;
      fVar3 = (float10)FUN_004602e0();
      FUN_0045df70(this_val_2,(float)fVar3,fVar4,puVar1,this_val);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 0045e590 FUN_0045e590 ==== */

void __thiscall FUN_0045e590(void *this)

{
  int i;
  undefined4 *puVar1;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 *in_stack_00000050;
  
  puVar1 = (undefined4 *)((int)this + 0x10);
  for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
      i = i + -1) {
    *puVar1 = *(undefined4 *)register0x00000010;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)((int)this + 0x6c) = in_stack_00000044;
  *(undefined4 *)((int)this + 0x70) = in_stack_00000048;
  *(undefined4 *)((int)this + 0x74) = in_stack_0000004c;
  *(undefined ***)this = &PTR_LAB_005768f0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x41100000;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x41200000;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = *in_stack_00000050;
  *(undefined4 *)((int)this + 0x60) = in_stack_00000050[1];
  *(undefined4 *)((int)this + 100) = in_stack_00000050[2];
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x3f800000;
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x40a00000;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  return;
}


/* ==== 0045e650 FUN_0045e650 ==== */

void __thiscall FUN_0045e650(void *this)

{
  *(undefined ***)this = &PTR_LAB_005768f0;
  return;
}


/* ==== 0045e660 FUN_0045e660 ==== */

void __thiscall FUN_0045e660(void *this,undefined4 param_2)

{
  int iVar1;
  void *this_val;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 auStack_7c [15];
  undefined4 uStack_40;
  uint local_3c;
  char *local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a9d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00460370();
  iVar1 = *(int *)((int)this + 0xa4);
  local_38 = (char *)0x45e6b0;
  this_val = operator_new(0xac);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    i = 0;
  }
  else {
    local_3c = in_stack_00000048;
    local_38 = (char *)in_stack_0000004c;
    puVar2 = (undefined4 *)&stack0x00000008;
    puVar3 = auStack_7c;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    i = FUN_0045e350(this_val,param_2);
  }
  local_38 = s__s___d__Not_enough_mem_for_new_E_005a5b28;
  local_3c = (uint)(i != 0);
  local_4 = 0xffffffff;
  *(int *)((int)this + 0xa4) = i;
  uStack_40 = 0x45e734;
  FUN_004a6980();
  *(void **)(*(int *)((int)this + 0xa4) + 0xa8) = this;
  *(int *)(*(int *)((int)this + 0xa4) + 0xa4) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)((int)this + 0xa4);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0045e780 FUN_0045e780 ==== */

void * __thiscall FUN_0045e780(void *this)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a9dd;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0045e8a0();
  if (*(int *)((int)this + 0xa8) == 0) {
    pvVar2 = *(void **)((int)this + 0xa4);
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0xa8) + 0xa4) = *(undefined4 *)((int)this + 0xa4);
    pvVar1 = this;
    do {
      pvVar2 = pvVar1;
      pvVar1 = *(void **)((int)pvVar2 + 0xa8);
    } while (*(void **)((int)pvVar2 + 0xa8) != (void *)0x0);
  }
  if (*(int *)((int)this + 0xa4) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0xa4) + 0xa8) = *(undefined4 *)((int)this + 0xa8);
  }
  if (this == (void *)0x0) {
    ExceptionList = local_10;
    return pvVar2;
  }
  FUN_0045e650(this);
  FUN_0054b339(this);
  ExceptionList = local_10;
  return pvVar2;
}


/* ==== 0045e8a0 FUN_0045e8a0 ==== */

void FUN_0045e8a0(void)

{
  return;
}


/* ==== 0045e8b0 FUN_0045e8b0 ==== */

undefined4 __thiscall FUN_0045e8b0(void *this)

{
  return *(undefined4 *)((int)this + 0xa4);
}


/* ==== 0045e8d0 FUN_0045e8d0 ==== */

undefined4 FUN_0045e8d0(char *param_1)

{
  int in_ECX;
  
  if (param_1 == (char *)0x0) {
    param_1 = s_CEmitter_Add__Can_not_add_NULL_s_005a5c0c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_0057d508);
  }
  *(undefined4 *)((int)param_1 + 0xa4) = *(undefined4 *)(in_ECX + 0xa4);
  *(char **)(in_ECX + 0xa4) = param_1;
  *(int *)((int)param_1 + 0xa8) = in_ECX;
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    *(char **)(*(int *)((int)param_1 + 0xa4) + 0xa8) = param_1;
  }
  return 1;
}


/* ==== 0045ebf0 FUN_0045ebf0 ==== */

void __thiscall FUN_0045ebf0(void *this,undefined4 param_2,undefined4 param_3)

{
  (*(code *)**(undefined4 **)this)(param_2,param_3);
  return;
}


/* ==== 0045ec10 FUN_0045ec10 ==== */

void __thiscall FUN_0045ec10(void *this)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  
  iVar1 = *(int *)this;
  puVar2 = auStack_48;
  for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
      i = i + -1) {
    *puVar2 = *(undefined4 *)register0x00000010;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(iVar1 + 4))();
  return;
}


/* ==== 0045ec30 FUN_0045ec30 ==== */

void __thiscall FUN_0045ec30(void *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int i;
  undefined4 uVar5;
  int this_val;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  this_val = *(int *)((int)this + 0x98);
  if (this_val != 0) {
    do {
      pfVar4 = (float *)FUN_0045e090(this_val);
      fVar2 = *pfVar4;
      i = FUN_0045e090(this_val);
      fVar3 = *(float *)(i + 4);
      i = FUN_0045e090(this_val);
      fVar1 = *(float *)(i + 8);
      puVar6 = (undefined4 *)((int)this + 0x10);
      puVar7 = local_40;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_10 = local_10 + fVar2;
      local_c = local_c + fVar3;
      local_8 = local_8 + fVar1;
      puVar6 = local_40;
      puVar7 = &DAT_0073b474;
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (i != 0) {
        uVar5 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar5);
      }
      FUN_0045e300(this_val);
      this_val = FUN_0045e0d0(this_val);
    } while (this_val != 0);
  }
  return;
}


/* ==== 0045ed50 FUN_0045ed50 ==== */

void FUN_0045ed50(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0045ed60 FUN_0045ed60 ==== */

void FUN_0045ed60(void)

{
  FUN_005584e0(&LAB_0045ed70);
  return;
}


/* ==== 0045ed90 FUN_0045ed90 ==== */

void FUN_0045ed90(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0045eda0 FUN_0045eda0 ==== */

void FUN_0045eda0(void)

{
  FUN_005584e0(&LAB_0045edb0);
  return;
}


/* ==== 0045edc0 FUN_0045edc0 ==== */

void FUN_0045edc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint __ftol_result;
  int i;
  void *this_val;
  undefined4 __ftol_result_2;
  undefined4 *puVar4;
  float in_stack_00000044;
  float in_stack_0000004c;
  undefined4 auStack_74 [16];
  float local_34;
  undefined4 local_30;
  float local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a9fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result = __ftol();
  i = (__ftol_result & DAT_005b23bc) * 4;
  fVar1 = *(float *)(i + DAT_0073b578);
  fVar2 = *(float *)(i + DAT_0073b530);
  fVar3 = *(float *)(i + DAT_0073b530) * in_stack_00000044 +
          *(float *)(i + DAT_0073b578) * in_stack_0000004c;
  local_2c = 6.42222e-39;
  this_val = operator_new(0xb0);
  local_4 = 0;
  if (this_val != (void *)0x0) {
    local_30 = 0;
    puVar4 = auStack_74;
    local_34 = (fVar1 * in_stack_00000044 - fVar2 * in_stack_0000004c) * 11.0;
    local_2c = fVar3 * 10.0 + fVar3;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar4 = *(undefined4 *)register0x00000010;
      puVar4 = puVar4 + 1;
    }
    FUN_004a6800(&DAT_007128b0);
    __ftol_result_2 = __ftol();
    FUN_0045ef00(this_val,__ftol_result_2);
  }
  ExceptionList = local_c;
  return;
}


