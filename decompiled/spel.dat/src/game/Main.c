/* spel.dat — game/Main.cpp: 38 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00457650 FUN_00457650 ==== */

void FUN_00457650(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00457660 FUN_00457660 ==== */

void FUN_00457660(void)

{
  FUN_005584e0(&LAB_00457670);
  return;
}


/* ==== 00457690 FUN_00457690 ==== */

void FUN_00457690(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004576a0 FUN_004576a0 ==== */

void FUN_004576a0(void)

{
  FUN_005584e0(&LAB_004576b0);
  return;
}


/* ==== 004576c0 FUN_004576c0 ==== */

void __thiscall FUN_004576c0(void *this,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x2c) + 0x20))(*(int **)((int)this + 0x2c),param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_004bb290(iVar1);
    FUN_004c4150(s__s__d____error_setting_material_a_005a3a4c,
                 s_______Libs_Win3DLib_Include_view_005a3a84,0x5e,uVar2);
  }
  return;
}


/* ==== 004576f0 FUN_004576f0 ==== */

void __thiscall FUN_004576f0(void *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  *(undefined4 *)((int)this + 0x4c) = 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  (**(code **)(**(int **)((int)this + 0x54) + 0xc))(*(int **)((int)this + 0x54),this);
  piVar1 = *(int **)(*(int *)(*DAT_0073b784 + unaff_ESI * 4) + 0x2c);
  iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,*(undefined4 *)((int)this + 0x50));
  if (iVar2 != 0) {
    uVar3 = FUN_004bb290(iVar2);
    FUN_004c4150(s__s__d____error_setting_material_a_005a3a4c,
                 s_______Libs_Win3DLib_Include_view_005a3a84,0x5e,uVar3);
  }
  return;
}


/* ==== 00457750 FUN_00457750 ==== */

void __thiscall FUN_00457750(void *this,undefined4 *param_2)

{
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  *(undefined4 *)((int)this + 0x58) = 1;
  if (*(int *)((int)this + 0x5c) == 1) {
    *(undefined4 *)((int)this + 0x58) = 0;
    (**(code **)(**(int **)((int)this + 0x54) + 0xc))(*(int **)((int)this + 0x54),this);
  }
  return;
}


/* ==== 00457790 FUN_00457790 ==== */

void __thiscall FUN_00457790(void *this,undefined4 *param_2)

{
  *(undefined4 *)((int)this + 0x14) = *param_2;
  *(undefined4 *)((int)this + 0x18) = param_2[1];
  *(undefined4 *)((int)this + 0x1c) = param_2[2];
  *(undefined4 *)((int)this + 0x58) = 1;
  if (*(int *)((int)this + 0x5c) == 1) {
    *(undefined4 *)((int)this + 0x58) = 0;
    (**(code **)(**(int **)((int)this + 0x54) + 0xc))(*(int **)((int)this + 0x54),this);
  }
  return;
}


/* ==== 004577d0 FUN_004577d0 ==== */

void __thiscall FUN_004577d0(void *this,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x290) = param_2;
  if (*(int *)((int)this + 0x27c) != 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x25c) + 100))
                      (*(int **)((int)this + 0x25c),6,*(undefined4 *)((int)this + 0x290));
    if (iVar1 != 0) {
      uVar2 = FUN_004bb290(iVar1);
      FUN_004c4150(s__s__d_____FOG__error_setting_ren_0059a15c,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0xb8,uVar2);
    }
  }
  return;
}


/* ==== 00457820 init_all_triggers ==== */

void init_all_triggers(void)

{
  undefined4 *puVar1;
  int i;
  
  i = 0;
  puVar1 = &DAT_005a3ab8;
  do {
    FUN_004a6c40(i,*puVar1);
    puVar1 = puVar1 + 1;
    i = i + 1;
  } while ((int)puVar1 < 0x5a3bcc);
  FUN_00456d20();
  FUN_00457900(DAT_006fba58);
  return;
}


/* ==== 00457900 FUN_00457900 ==== */

void FUN_00457900(void)

{
  DAT_005a3ab0 = 0x46;
  return;
}


/* ==== 00457a40 FUN_00457a40 ==== */

void FUN_00457a40(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00457a50 FUN_00457a50 ==== */

void FUN_00457a50(void)

{
  FUN_005584e0(&LAB_00457a60);
  return;
}


/* ==== 00457a80 FUN_00457a80 ==== */

void FUN_00457a80(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00457a90 FUN_00457a90 ==== */

void FUN_00457a90(void)

{
  FUN_005584e0(&LAB_00457aa0);
  return;
}


/* ==== 00457ae0 FUN_00457ae0 ==== */

undefined4 FUN_00457ae0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int i;
  
  i = 0;
  piVar2 = DAT_00715254;
  if (0 < DAT_00715258) {
    do {
      if ((*(int *)(DAT_00715f00 + 0xfc + *piVar2 * 0x994) == 0xd) ||
         (*(int *)(DAT_00715f00 + *piVar2 * 0x994 + 0x100) == 0xd)) {
        uVar1 = FUN_004a71e0(i + -1);
        return uVar1;
      }
      i = i + 1;
      piVar2 = piVar2 + 1;
    } while (i < DAT_00715258);
  }
  return 0;
}


/* ==== 00457b90 FUN_00457b90 ==== */

void FUN_00457b90(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00457ba0 FUN_00457ba0 ==== */

void FUN_00457ba0(void)

{
  FUN_005584e0(&LAB_00457bb0);
  return;
}


/* ==== 00457bd0 FUN_00457bd0 ==== */

void FUN_00457bd0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00457be0 FUN_00457be0 ==== */

void FUN_00457be0(void)

{
  FUN_005584e0(&LAB_00457bf0);
  return;
}


/* ==== 00457cb0 FUN_00457cb0 ==== */

void FUN_00457cb0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00457cc0 FUN_00457cc0 ==== */

void FUN_00457cc0(void)

{
  FUN_005584e0(&LAB_00457cd0);
  return;
}


/* ==== 00457cf0 FUN_00457cf0 ==== */

void FUN_00457cf0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00457d00 FUN_00457d00 ==== */

void FUN_00457d00(void)

{
  FUN_005584e0(&LAB_00457d10);
  return;
}


/* ==== 00457ee0 FUN_00457ee0 ==== */

void FUN_00457ee0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00457ef0 FUN_00457ef0 ==== */

void FUN_00457ef0(void)

{
  FUN_005584e0(&LAB_00457f00);
  return;
}


/* ==== 00457f20 FUN_00457f20 ==== */

void FUN_00457f20(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00457f30 FUN_00457f30 ==== */

void FUN_00457f30(void)

{
  FUN_005584e0(&LAB_00457f40);
  return;
}


/* ==== 00457fb0 FUN_00457fb0 ==== */

void FUN_00457fb0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00457fc0 FUN_00457fc0 ==== */

void FUN_00457fc0(void)

{
  FUN_005584e0(&LAB_00457fd0);
  return;
}


/* ==== 00457ff0 FUN_00457ff0 ==== */

void FUN_00457ff0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00458000 FUN_00458000 ==== */

void FUN_00458000(void)

{
  FUN_005584e0(&LAB_00458010);
  return;
}


/* ==== 00458020 FUN_00458020 ==== */

undefined4 FUN_00458020(void)

{
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  tagMSG msg;
  
  bVar2 = false;
  do {
    bVar1 = false;
    BVar3 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
    if (BVar3 != 0) {
      bVar1 = true;
      if (msg.message == 0x12) {
        return 1;
      }
      TranslateMessage(&msg);
      DispatchMessageA(&msg);
    }
    if (DAT_00740dfc == 0) {
      WaitMessage();
      bVar2 = true;
    }
  } while ((bVar1) || (DAT_00740dfc == 0));
  if (bVar2) {
    FUN_004c4a60(DAT_007408ac);
    FUN_004c4a60(DAT_007408b0);
    FUN_004c4a60(DAT_00740890);
    FUN_004b8bc0();
    FUN_004c0920();
    FUN_004b2ea0(&DAT_0073b020);
  }
  return 0;
}


/* ==== 004580e0 FUN_004580e0 ==== */

void FUN_004580e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 this_val;
  
  FUN_004c3fa0(s_Init_ScriptEngine_005a3f58);
  FUN_00475b50(&DAT_00712678);
  FUN_00447db0(s_System_Settings_005a3f6c);
  iVar1 = FUN_00447730();
  FUN_004c3f80(0,iVar1 != 0);
  FUN_00458bc0();
  FUN_004491f0();
  FUN_00449b30();
  FUN_004c3fa0(s_Initing_2d_skelet_005a3f7c);
  FUN_004480f0(param_1,param_2);
  this_val = FUN_00469fa0(param_1);
  FUN_0046ee80(this_val,param_1);
  iVar1 = FUN_00447820();
  if (iVar1 == 1) {
    this_val = 1;
  }
  else {
    if (iVar1 != 2) {
      FUN_004c4150(s__s__d_____init_main____Illegal_r_005a3fb0,
                   s_C__Work_A2IV_Game_prog_Main_cpp_005a3f90,0x8c);
      goto LAB_0045819b;
    }
    this_val = 2;
  }
  FUN_004c04b0(this_val,10,10,0x1000);
LAB_0045819b:
  FUN_004414e0();
  FUN_004c3fa0(s_Initing_game_005a3fe0);
  init_game();
  FUN_004c3fa0(s_Initing_game_timer__005a3ff0);
  FUN_004a65e0(&DAT_007128b0);
  FUN_004c3fa0(s_Calling__handle_progress_bar__005a4008);
  FUN_004415e0();
  FUN_004c3fa0(s_Calling__end_progress_bar__005a4028);
  FUN_00441510();
  FUN_004c3fa0(s_Calling__start_framecount_timing_005a4044);
  FUN_0044e160();
  FUN_004c3fa0(s_Init_CopRadio_005a4068);
  FUN_0041b220(&DAT_005d3118);
  return;
}


/* ==== 00458210 FUN_00458210 ==== */

void FUN_00458210(void)

{
  FUN_0044e190();
  FUN_004c3fa0(s_Exiting_game_005a4078);
  FUN_004490a0();
  FUN_004c3fa0(s_Exiting_race_engine_lib_005a4088);
  FUN_004c3fa0(s_Exiting_objects_005a40a4);
  FUN_004b4850();
  FUN_004c3fa0(s_Exiting_3d_lib_005a40b8);
  FUN_004c0950();
  FUN_004c3fa0(s_Exiting_2d_skelet_005a40c8);
  FUN_00448160();
  FUN_004c3fa0(s_Ready_005a40dc);
  return;
}


/* ==== 00458270 FUN_00458270 ==== */

undefined4 FUN_00458270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a7a8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00448cd0(&DAT_006fa558,1);
  FUN_004580e0(param_1,param_4);
  FUN_004c3fa0(s__init_main__completed__005a40e4);
  FUN_004c3fa0(s_Calling__start_game__005a40fc);
  FUN_0044cf60();
  FUN_004c3fa0(s_Entering_main_loop_005a4114);
  while (DAT_006fb89c != 0) {
    FUN_004c3fa0(s_Calling__handle_game__005a4128);
    FUN_0044cb80();
    FUN_004517f0();
    FUN_004c3fa0(s_Calling__handle_framecount_timin_005a4140);
    FUN_0044e180();
    FUN_004c3fa0(s_Calling__my_handle_win_msg__005a4164);
    iVar1 = FUN_00458020();
    if (iVar1 != 0) break;
    iVar1 = FUN_004c5e40(0x11);
    if (iVar1 != 0) {
      iVar1 = FUN_004c5e40(0x79);
      if (iVar1 != 0) {
        FUN_00458400();
      }
    }
    FUN_0041c150(&DAT_005d3118);
  }
  FUN_004c3fa0(s_Exiting_main_loop_005a4184);
  FUN_004c3fa0(s_Calling__exit_main__005a4198);
  FUN_00458210();
  ExceptionList = local_10;
  return 0;
}


/* ==== 00458400 FUN_00458400 ==== */

void FUN_00458400(void)

{
  undefined1 local_14 [20];
  
  FUN_005587a3(local_14,s_lvl_2_2d__2_2d_bmp_005a41d4,DAT_006fb898,DAT_006fcf9c);
  FUN_004ce140(1,local_14);
  DAT_006fcf9c = DAT_006fcf9c + 1;
  return;
}


/* ==== 00458440 FUN_00458440 ==== */

void FUN_00458440(void)

{
  FILE *file;
  undefined1 *puVar1;
  undefined1 *this_val;
  int i;
  char *pcStack_400;
  char *pcStack_3fc;
  int iStack_378;
  int iStack_374;
  undefined4 uStack_370;
  undefined4 local_36c [4];
  undefined4 uStack_35c;
  undefined1 uStack_314;
  undefined1 auStack_313 [787];
  
  if (DAT_006fb8d0 == 0) {
    pcStack_3fc = s_wb_005a41e8;
    pcStack_400 = s_PICTURE_PCX_005a41ec;
    file = (FILE *)FUN_005589a5();
    local_36c[0] = 0x6c;
    pcStack_3fc = (char *)0x0;
    pcStack_400 = (char *)0x0;
    (**(code **)(**(int **)(DAT_0073b1b0 + 4) + 100))(*(int **)(DAT_0073b1b0 + 4),0,local_36c);
    pcStack_400 = (char *)0x801050a;
    pcStack_3fc = (char *)0x0;
    FUN_00558c1d(iStack_374 + -1,&pcStack_400,0x80,1,file);
    FUN_004cbbf0(file,uStack_35c,iStack_374,iStack_378,uStack_370);
    this_val = auStack_313;
    i = 0x100;
    puVar1 = (undefined1 *)(DAT_007409f0 + 2);
    do {
      this_val[-1] = puVar1[-2];
      *this_val = puVar1[-1];
      this_val[1] = *puVar1;
      this_val = this_val + 3;
      i = i + -1;
      puVar1 = puVar1 + 4;
    } while (i != 0);
    FUN_00558c1d(this_val,&stack0xfffffbff,1,1,file);
    FUN_00558c1d(&uStack_314,&uStack_314,1,0x300,file);
    FUN_005588fd(file);
    (**(code **)(**(int **)(DAT_0073b1b0 + 4) + 0x80))(*(int **)(DAT_0073b1b0 + 4),0);
  }
  return;
}


