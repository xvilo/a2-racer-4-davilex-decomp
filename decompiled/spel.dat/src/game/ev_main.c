/* spel.dat — game/ev_main.cpp: 31 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0043b4b0 FUN_0043b4b0 ==== */

void FUN_0043b4b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043b4c0 FUN_0043b4c0 ==== */

void FUN_0043b4c0(void)

{
  FUN_005584e0(&LAB_0043b4d0);
  return;
}


/* ==== 0043b680 FUN_0043b680 ==== */

void FUN_0043b680(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  iVar4 = DAT_006c3568 * 0x178;
  if (*(int *)(iVar4 + 0x74 + DAT_00719b50) == 0) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_004b11c0(&local_18);
    local_24 = *puVar2;
    local_20 = puVar2[1];
    local_1c = puVar2[2];
  }
  if (*(int *)(DAT_00719b50 + iVar4 + 0x78) == 0) {
    local_14 = 0;
    uVar3 = 0;
    local_18 = 0;
    local_10 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_004b12c0(local_c);
    local_18 = *puVar2;
    uVar3 = puVar2[1];
    local_10 = puVar2[2];
  }
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  FUN_004b1190(uVar1,local_24,local_20,local_1c);
  FUN_004b1290(uVar1,local_18,uVar3,local_10);
  FUN_004b1380();
  FUN_00438410(6);
  return;
}


/* ==== 0043bea0 FUN_0043bea0 ==== */

void FUN_0043bea0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043beb0 FUN_0043beb0 ==== */

void FUN_0043beb0(void)

{
  FUN_005584e0(&LAB_0043bec0);
  return;
}


/* ==== 0043bee0 FUN_0043bee0 ==== */

void FUN_0043bee0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043bef0 FUN_0043bef0 ==== */

void FUN_0043bef0(void)

{
  FUN_005584e0(&LAB_0043bf00);
  return;
}


/* ==== 0043bf10 FUN_0043bf10 ==== */

void FUN_0043bf10(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a3d8,0x27,param_1);
  *(undefined4 *)(&DAT_006c3acc + iVar1 * 0x10) = 1;
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a3fc,0x28,param_1);
  *(undefined4 *)(&DAT_006c3ac4 + iVar1 * 0x10) = 0;
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a420,0x29,param_1);
  *(undefined4 *)(&DAT_006c3ac0 + iVar1 * 0x10) = 0;
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a444,0x2a,param_1);
  *(undefined4 *)(&DAT_006c3ac8 + iVar1 * 0x10) = 0;
  return;
}


/* ==== 0043bf90 FUN_0043bf90 ==== */

void FUN_0043bf90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a468,0x3a,param_1);
  if (*(int *)(&DAT_006c3ac4 + iVar1 * 0x10) == 0) {
    FUN_004c4150(s__s___d__NULL_pointer_for_command_0059a4b0,
                 s_C__Work_A2IV_Game_prog_ev_main_c_0059a48c,0x3c,param_1);
  }
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a4e4,0x3f,param_1);
  (**(code **)(&DAT_006c3ac4 + iVar1 * 0x10))();
  return;
}


/* ==== 0043bff0 FUN_0043bff0 ==== */

void FUN_0043bff0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a508,0x4f,param_1);
  if (*(int *)(&DAT_006c3ac0 + iVar1 * 0x10) != 0) {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a52c,0x51,param_1);
    (**(code **)(&DAT_006c3ac0 + iVar1 * 0x10))();
  }
  return;
}


/* ==== 0043c030 FUN_0043c030 ==== */

void FUN_0043c030(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a550,0x62,param_1);
  if (*(int *)(&DAT_006c3ac8 + iVar1 * 0x10) != 0) {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a574,100,param_1);
    (**(code **)(&DAT_006c3ac8 + iVar1 * 0x10))();
  }
  return;
}


/* ==== 0043c070 FUN_0043c070 ==== */

int FUN_0043c070(undefined4 param_1,undefined4 param_2,int param_3)

{
  if ((param_3 < 0) || (0xc < param_3)) {
    FUN_004c4150(s__s___d__Illegal_game_action_inde_0059a598,param_1,param_2,param_3);
  }
  return param_3;
}


/* ==== 0043c0a0 init_game_actions ==== */

void init_game_actions(void)

{
  int i;
  
  i = 0;
  do {
    FUN_0043bf10(i);
    i = i + 1;
  } while (i < 0xd);
  DAT_006c3b90 = 1;
  return;
}


/* ==== 0043c0c0 FUN_0043c0c0 ==== */

void FUN_0043c0c0(void)

{
  int iVar1;
  int i;
  
  if (DAT_006c3b90 == 0) {
    FUN_004c4150(s__s___d__Game_actions_not_initted_0059a5e4,
                 s_C__Work_A2IV_Game_prog_ev_main_c_0059a5c0,0xa5);
  }
  i = 0;
  do {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a608,0xac,i);
    if (*(int *)(&DAT_006c3acc + iVar1 * 0x10) == 0) {
      FUN_0043c1f0(i);
    }
    i = i + 1;
  } while (i < 0xd);
  DAT_006c3b90 = 0;
  return;
}


/* ==== 0043c120 FUN_0043c120 ==== */

void FUN_0043c120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_006c3b90 == 0) {
    FUN_004c4150(s__s___d__Game_Actions_not_initted_0059a650,
                 s_C__Work_A2IV_Game_prog_ev_main_c_0059a62c,199);
  }
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a674,0xcb,param_1);
  if (*(int *)(&DAT_006c3acc + iVar1 * 0x10) != 0) {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a698,0xd1,param_1);
    *(undefined4 *)(&DAT_006c3ac4 + iVar1 * 0x10) = param_3;
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a6bc,0xd2,param_1);
    *(undefined4 *)(&DAT_006c3ac0 + iVar1 * 0x10) = param_2;
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a6e0,0xd3,param_1);
    *(undefined4 *)(&DAT_006c3ac8 + iVar1 * 0x10) = param_4;
    FUN_0043bff0(param_1);
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a704,0xd9,param_1);
    *(undefined4 *)(&DAT_006c3acc + iVar1 * 0x10) = 0;
  }
  return;
}


/* ==== 0043c1f0 FUN_0043c1f0 ==== */

void FUN_0043c1f0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_006c3b90 == 0) {
    FUN_004c4150(s__s___d__Game_Actions_not_initted_0059a74c,
                 s_C__Work_A2IV_Game_prog_ev_main_c_0059a728,0xeb);
  }
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a770,0xef,param_1);
  if (*(int *)(&DAT_006c3acc + iVar1 * 0x10) != 0) {
    FUN_004c4150(s__s___d__Trying_to_delete_a_free_g_0059a7b8,
                 s_C__Work_A2IV_Game_prog_ev_main_c_0059a794,0xf1,param_1);
  }
  FUN_0043c030(param_1);
  FUN_0043bf10(param_1);
  return;
}


/* ==== 0043c260 FUN_0043c260 ==== */

void FUN_0043c260(void)

{
  int iVar1;
  int i;
  
  if (DAT_006c3b90 == 0) {
    FUN_004c4150(s__s___d__Game_actions_not_initted_0059a818,
                 s_C__Work_A2IV_Game_prog_ev_main_c_0059a7f4,0x10c);
  }
  i = 0;
  do {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a83c,0x113,i);
    if (*(int *)(&DAT_006c3acc + iVar1 * 0x10) == 0) {
      iVar1 = FUN_0043bf90(i);
      if (iVar1 != 0) {
        FUN_0043c1f0(i);
      }
    }
    i = i + 1;
  } while (i < 0xd);
  return;
}


/* ==== 0043c310 FUN_0043c310 ==== */

void FUN_0043c310(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043c320 FUN_0043c320 ==== */

void FUN_0043c320(void)

{
  FUN_005584e0(&LAB_0043c330);
  return;
}


/* ==== 0043c350 FUN_0043c350 ==== */

void FUN_0043c350(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043c360 FUN_0043c360 ==== */

void FUN_0043c360(void)

{
  FUN_005584e0(&LAB_0043c370);
  return;
}


/* ==== 0043c560 FUN_0043c560 ==== */

void FUN_0043c560(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043c570 FUN_0043c570 ==== */

void FUN_0043c570(void)

{
  FUN_005584e0(&LAB_0043c580);
  return;
}


/* ==== 0043c5a0 FUN_0043c5a0 ==== */

void FUN_0043c5a0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043c5b0 FUN_0043c5b0 ==== */

void FUN_0043c5b0(void)

{
  FUN_005584e0(&LAB_0043c5c0);
  return;
}


/* ==== 0043c5d0 FUN_0043c5d0 ==== */

void FUN_0043c5d0(void)

{
  int iVar1;
  
  iVar1 = FUN_0043c610();
  if (iVar1 != -1) {
    FUN_004632e0(iVar1);
    return;
  }
  FUN_0043c120(1,&LAB_0043c380,&LAB_0043c3d0,&LAB_0043c510);
  FUN_004390d0(DAT_006fba5c + 5);
  return;
}


/* ==== 0043c610 FUN_0043c610 ==== */

int FUN_0043c610(void)

{
  int i;
  int *piVar1;
  
  i = 0;
  if (0 < DAT_00712108) {
    piVar1 = &DAT_00709f10;
    do {
      if (*piVar1 == 1) {
        return i;
      }
      i = i + 1;
      piVar1 = piVar1 + 0xd0;
    } while (i < DAT_00712108);
  }
  return -1;
}


/* ==== 0043c6b0 FUN_0043c6b0 ==== */

void FUN_0043c6b0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043c6c0 FUN_0043c6c0 ==== */

void FUN_0043c6c0(void)

{
  FUN_005584e0(&LAB_0043c6d0);
  return;
}


/* ==== 0043c6f0 FUN_0043c6f0 ==== */

void FUN_0043c6f0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043c700 FUN_0043c700 ==== */

void FUN_0043c700(void)

{
  FUN_005584e0(&LAB_0043c710);
  return;
}


