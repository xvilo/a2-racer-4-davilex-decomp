/* spel.dat — game/gm_clock.cpp: 26 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004480f0 FUN_004480f0 ==== */

void FUN_004480f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00447870();
  skelet2d_init_2d_lib(param_1,param_2);
  if (iVar1 != 0) {
    FUN_004c7ec0(1);
  }
  FUN_00447be0();
  FUN_00447cf0();
  FUN_004c3fa0(s_handle_win_msg_0059eae0);
  FUN_004cd560();
  FUN_00447d00();
  if (DAT_0059dbac == 1) {
    FUN_004c3fa0(s_Flipping_pages_0059eaf0);
    FUN_004c41e0();
  }
  DAT_0059dbb0 = 1;
  return;
}


/* ==== 00448160 FUN_00448160 ==== */

void FUN_00448160(void)

{
  int iVar1;
  
  if (DAT_0059db84 != 0) {
    FUN_004c3fa0(s_Stopping_all_sounds_0059eb00);
  }
  FUN_004c3fa0(s_Clear_screen_on_exit_0059eb18);
  iVar1 = (**(code **)(*DAT_007408ac + 0x60))(DAT_007408ac);
  if (iVar1 == 0) {
    FUN_004c4f70(DAT_0059dbb4,0);
    FUN_004c41e0();
    FUN_004c4f70(DAT_0059dbb4,0);
    FUN_004c41e0();
  }
  FUN_004c3fa0(s_Exit_fileio_0059eb30);
  FUN_004c6560();
  FUN_004c3fa0(s_Exit_xvga_lib_0059eb40);
  FUN_004c4040();
  return;
}


/* ==== 00448220 FUN_00448220 ==== */

void FUN_00448220(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00448230 FUN_00448230 ==== */

void FUN_00448230(void)

{
  FUN_005584e0(&LAB_00448240);
  return;
}


/* ==== 00448260 FUN_00448260 ==== */

void FUN_00448260(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00448270 FUN_00448270 ==== */

void FUN_00448270(void)

{
  FUN_005584e0(&LAB_00448280);
  return;
}


/* ==== 00448290 FUN_00448290 ==== */

int FUN_00448290(int param_1)

{
  if ((param_1 < 0) || (0x11 < param_1)) {
    FUN_004c4150(s__s___d__Incorrect_timer_index____0059eb74,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059eb50,0x3f,param_1);
  }
  return param_1;
}


/* ==== 004482c0 FUN_004482c0 ==== */

void FUN_004482c0(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
    FUN_004c4150(s__s___d__Timer_not_initted__index_0059ebbc,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059eb98,0x55,param_1);
  }
  DVar2 = GetTickCount();
  iVar1 = FUN_00448290(param_1);
  *(DWORD *)(&DAT_006fa3ec + iVar1 * 0x14) = DVar2;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3f8 + iVar1 * 0x14) = 0;
  return;
}


/* ==== 00448330 FUN_00448330 ==== */

void FUN_00448330(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
    FUN_004c4150(s__s___d__Timer_not_initted__index_0059ec04,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059ebe0,0x6e,param_1);
  }
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f8 + iVar1 * 0x14) == 0) {
    DVar2 = GetTickCount();
    iVar1 = FUN_00448290(param_1);
    *(DWORD *)(&DAT_006fa3f8 + iVar1 * 0x14) = DVar2;
  }
  return;
}


/* ==== 004483a0 FUN_004483a0 ==== */

void FUN_004483a0(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
    FUN_004c4150(s__s___d__Timer_not_initted__index_0059ec4c,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059ec28,0x8c,param_1);
  }
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f8 + iVar1 * 0x14) != 0) {
    iVar1 = FUN_00448290(param_1);
    if (*(int *)(&DAT_006fa3ec + iVar1 * 0x14) == -1) {
      iVar1 = FUN_00448290(param_1);
      *(undefined4 *)(&DAT_006fa3f8 + iVar1 * 0x14) = 0;
      return;
    }
    iVar1 = FUN_00448290(param_1);
    DVar2 = GetTickCount();
    iVar1 = *(int *)(&DAT_006fa3f8 + iVar1 * 0x14);
    iVar3 = FUN_00448290(param_1);
    *(DWORD *)(&DAT_006fa3ec + iVar3 * 0x14) =
         *(int *)(&DAT_006fa3ec + iVar3 * 0x14) + (DVar2 - iVar1);
    iVar1 = FUN_00448290(param_1);
    *(undefined4 *)(&DAT_006fa3f8 + iVar1 * 0x14) = 0;
  }
  return;
}


/* ==== 00448470 FUN_00448470 ==== */

int FUN_00448470(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
    FUN_004c4150(s__s___d__Timer_not_initted__index_0059ec94,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059ec70,0xb8,param_1);
  }
  DVar2 = GetTickCount();
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f8 + iVar1 * 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00448290(param_1);
    iVar1 = DVar2 - *(int *)(&DAT_006fa3f8 + iVar1 * 0x14);
  }
  iVar3 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3ec + iVar3 * 0x14) == -1) {
    iVar1 = 0;
  }
  else {
    iVar3 = FUN_00448290(param_1);
    iVar1 = (DVar2 - *(int *)(&DAT_006fa3ec + iVar3 * 0x14)) - iVar1;
  }
  iVar3 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f0 + iVar3 * 0x14) == 0) {
    iVar3 = FUN_00448290(param_1);
    if (*(int *)(&DAT_006fa3e8 + iVar3 * 0x14) <= iVar1) {
      iVar1 = FUN_00448290(param_1);
      iVar1 = *(int *)(&DAT_006fa3e8 + iVar1 * 0x14);
    }
    return iVar1;
  }
  iVar3 = FUN_00448290(param_1);
  iVar1 = *(int *)(&DAT_006fa3e8 + iVar3 * 0x14) - iVar1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}


/* ==== 00448570 FUN_00448570 ==== */

void FUN_00448570(undefined4 param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
    FUN_004c4150(s__s___d__Timer_not_initted__index_0059ecdc,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059ecb8,0xfa,param_1);
  }
  if (param_2 < 0) {
    FUN_004c4150(s__s___d__Illegal_value_for_timer__0059ed24,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059ed00,0x100,param_2);
  }
  iVar1 = FUN_00448290(param_1);
  *(int *)(&DAT_006fa3e8 + iVar1 * 0x14) = param_2;
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3ec + iVar1 * 0x14) != -1) {
    DVar2 = GetTickCount();
    iVar1 = FUN_00448290(param_1);
    *(DWORD *)(&DAT_006fa3ec + iVar1 * 0x14) = DVar2;
  }
  return;
}


/* ==== 00448610 FUN_00448610 ==== */

void FUN_00448610(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_004c4150(s__s___d__Illegal_value_for_timer__0059ed74,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059ed50,0x11e,param_2);
  }
  iVar1 = FUN_00448290(param_1);
  *(int *)(&DAT_006fa3e8 + iVar1 * 0x14) = param_2;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3f0 + iVar1 * 0x14) = param_3;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3ec + iVar1 * 0x14) = 0xffffffff;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3f8 + iVar1 * 0x14) = 0;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3f4 + iVar1 * 0x14) = 1;
  return;
}


/* ==== 004486a0 FUN_004486a0 ==== */

bool FUN_004486a0(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
    FUN_004c4150(s__s___d__Timer_not_initted__index_0059edc4,
                 s_C__Work_A2IV_Game_prog_gm_clock__0059eda0,0x13f,param_1);
  }
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3ec + iVar1 * 0x14) == -1) {
    return false;
  }
  DVar2 = GetTickCount();
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f8 + iVar1 * 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00448290(param_1);
    iVar1 = DVar2 - *(int *)(&DAT_006fa3f8 + iVar1 * 0x14);
  }
  iVar3 = FUN_00448290(param_1);
  iVar3 = *(int *)(&DAT_006fa3ec + iVar3 * 0x14);
  iVar4 = FUN_00448290(param_1);
  return *(int *)(&DAT_006fa3e8 + iVar4 * 0x14) <= (int)((DVar2 - iVar3) - iVar1);
}


/* ==== 004487a0 FUN_004487a0 ==== */

void FUN_004487a0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004487b0 FUN_004487b0 ==== */

void FUN_004487b0(void)

{
  FUN_005584e0(&LAB_004487c0);
  return;
}


/* ==== 004487e0 FUN_004487e0 ==== */

void FUN_004487e0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004487f0 FUN_004487f0 ==== */

void FUN_004487f0(void)

{
  FUN_005584e0(&LAB_00448800);
  return;
}


/* ==== 00448820 FUN_00448820 ==== */

void FUN_00448820(void)

{
  FUN_00448850(&DAT_006fa558);
  return;
}


/* ==== 00448830 FUN_00448830 ==== */

void FUN_00448830(void)

{
  FUN_005584e0(&LAB_00448840);
  return;
}


/* ==== 00448850 FUN_00448850 ==== */

void * __thiscall FUN_00448850(void *this)

{
  void *operator_new_result;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_005767b0;
  *(undefined1 *)((int)this + 4) = local_11;
  operator_new_result = operator_new(0xc);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 8) = operator_new_result;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = &PTR_LAB_005767a0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_005767b0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x14) = local_11;
  operator_new_result = operator_new(0xc);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  *(void **)((int)this + 0x18) = operator_new_result;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_005767a0;
  ExceptionList = local_c;
  return this;
}


/* ==== 004488e0 FUN_004488e0 ==== */

void __thiscall FUN_004488e0(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  void **ppvVar7;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056a47a;
  puVar1 = *(undefined4 **)((int)this + 0x18);
  local_4 = 0;
  ppvVar7 = &local_c;
  puVar5 = (undefined4 *)*puVar1;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar7, puVar5 != puVar1) {
    puVar2 = (undefined4 *)*puVar5;
    FUN_00448f90((int)this + 0x14,local_10,puVar5);
    ppvVar7 = ExceptionList;
    puVar5 = puVar2;
  }
  FUN_0054b339(*(undefined4 *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  piVar3 = *(int **)((int)this + 8);
  piVar6 = (int *)*piVar3;
  while (piVar6 != piVar3) {
    piVar4 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_0054b339(piVar6);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
    piVar6 = piVar4;
  }
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004489a0 FUN_004489a0 ==== */

undefined4 __thiscall FUN_004489a0(void *this,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int i;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 *this_val_2;
  undefined1 *this_val;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar6 = param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056a4aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  i = FUN_00448c00(this,param_3);
  pbVar4 = param_2;
  if (i == -1) {
    i = FUN_0055926e(param_2,0);
    if (i == -1) {
      FUN_004c4150(s_The_config_file__s_belonging_to_t_0059ee34,pbVar4,param_3);
    }
    this_val_2 = operator_new(0x10);
    uStack_4 = 0;
    param_2 = this_val_2;
    if (this_val_2 == (undefined1 *)0x0) {
      this_val_2 = (undefined1 *)0x0;
    }
    else {
      *this_val_2 = (undefined1)param_3;
      FUN_004028f0(this_val_2,0);
    }
    uStack_4 = 0xffffffff;
    this_val = operator_new(0x10);
    uStack_4 = 1;
    param_2 = this_val;
    if (this_val == (undefined1 *)0x0) {
      this_val = (undefined1 *)0x0;
    }
    else {
      *this_val = (undefined1)param_3;
      FUN_004028f0(this_val,0);
    }
    uStack_4 = 0xffffffff;
    uVar6 = FUN_0049df90(auStack_1c,pbVar4);
    uStack_4 = 2;
    FUN_004093c0(this_val_2,uVar6,0,0xffffffff);
    uStack_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
    uVar6 = FUN_0049df90(auStack_1c,param_3);
    uStack_4 = 3;
    FUN_004093c0(this_val,uVar6,0,0xffffffff);
    uStack_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
    FUN_00448ff0((int)this + 4,&param_2,*(undefined4 *)((int)this + 8),&this_val_2);
    i = *(int *)((int)this + 0x18);
    iVar7 = FUN_00449050(i,*(undefined4 *)(i + 4));
    *(int *)(i + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    FUN_004d2770(iVar7 + 8,&this_val);
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  }
  else {
    piVar3 = (int *)FUN_00468530((int)this + 4,local_24);
    param_3 = *piVar3;
    if (0 < i) {
      do {
        FUN_00448fd0(&param_3,local_20,0);
        i = i + -1;
      } while (i != 0);
    }
    pbVar4 = *(byte **)(*(int *)(param_3 + 8) + 4);
    pbVar5 = param_2;
    if (pbVar4 == (byte *)0x0) {
      pbVar4 = &DAT_0057629c;
    }
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00448a40:
        i = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00448a44;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00448a40;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    i = 0;
LAB_00448a44:
    if (i != 0) {
      FUN_004c4150(s_There_is_already_another_config_f_0059ede8,uVar6);
    }
  }
  ExceptionList = local_c;
  return 1;
}


/* ==== 00448c00 FUN_00448c00 ==== */

int __thiscall FUN_00448c00(void *this,byte *param_2)

{
  byte bVar1;
  int j;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  int i;
  bool bVar5;
  
  i = 0;
  j = (*(code *)**(undefined4 **)((int)this + 0x10))();
  if (0 < j) {
    do {
      puVar2 = (undefined4 *)**(undefined4 **)((int)this + 0x18);
      j = i;
      if (0 < i) {
        do {
          puVar2 = (undefined4 *)*puVar2;
          j = j + -1;
        } while (j != 0);
      }
      pbVar3 = *(byte **)(puVar2[2] + 4);
      pbVar4 = param_2;
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = &DAT_0057629c;
      }
      do {
        bVar1 = *pbVar3;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00448c5d:
          j = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00448c62;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00448c5d;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      j = 0;
LAB_00448c62:
      if (j == 0) {
        return i;
      }
      i = i + 1;
      j = (*(code *)**(undefined4 **)((int)this + 0x10))();
    } while (i < j);
  }
  return -1;
}


/* ==== 00448c90 FUN_00448c90 ==== */

undefined4 __thiscall FUN_00448c90(void *this,undefined4 param_2)

{
  int i;
  undefined4 *puVar1;
  
  i = FUN_00448c00(this,param_2);
  if (i == -1) {
    FUN_004c4150(s_The_given_description___s__does_n_0059ee78,param_2);
  }
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 8);
  if (0 < i) {
    do {
      puVar1 = (undefined4 *)*puVar1;
      i = i + -1;
    } while (i != 0);
  }
  return puVar1[2];
}


/* ==== 00448cd0 FUN_00448cd0 ==== */

undefined1 __thiscall FUN_00448cd0(void *this)

{
  FUN_004489a0(this,s_RASER_INI_0059eed0,s_System_Settings_0059eec0);
  FUN_004489a0(this,s_GAME_INI_0059eeec,s_Game_Settings_0059eedc);
  return 1;
}


