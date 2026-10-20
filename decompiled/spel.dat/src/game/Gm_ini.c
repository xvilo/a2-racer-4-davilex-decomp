/* spel.dat — game/Gm_ini.cpp: 59 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00448dd0 FUN_00448dd0 ==== */

void FUN_00448dd0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int j;
  int k;
  int i;
  undefined1 auStack_4 [4];
  
  iVar2 = (**(code **)*in_ECX)();
  i = 0;
  if (0 < iVar2) {
    do {
      j = *(int *)in_ECX[2];
      k = i;
      if (0 < i) {
        do {
          FUN_00448fd0(auStack_4,0);
          k = k + -1;
        } while (k != 0);
      }
      j = *(int *)(j + 8);
      if (j != 0) {
        k = *(int *)(j + 4);
        if (k != 0) {
          cVar1 = *(char *)(k + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(k + -1));
          }
          else {
            *(char *)(k + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)(j + 4) = 0;
        *(undefined4 *)(j + 8) = 0;
        *(undefined4 *)(j + 0xc) = 0;
        FUN_0054b339(j);
      }
      i = i + 1;
    } while (i < iVar2);
  }
  iVar2 = (**(code **)in_ECX[4])();
  i = 0;
  if (0 < iVar2) {
    do {
      puVar3 = *(undefined4 **)in_ECX[6];
      j = i;
      if (0 < i) {
        do {
          puVar3 = (undefined4 *)*puVar3;
          j = j + -1;
        } while (j != 0);
      }
      j = puVar3[2];
      if (j != 0) {
        k = *(int *)(j + 4);
        if (k != 0) {
          cVar1 = *(char *)(k + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(k + -1));
          }
          else {
            *(char *)(k + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)(j + 4) = 0;
        *(undefined4 *)(j + 8) = 0;
        *(undefined4 *)(j + 0xc) = 0;
        FUN_0054b339(j);
      }
      i = i + 1;
    } while (i < iVar2);
  }
  (**(code **)(*in_ECX + 4))();
  (**(code **)(in_ECX[4] + 4))();
  return;
}


/* ==== 00448f20 FUN_00448f20 ==== */

void FUN_00448f20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00448f30 FUN_00448f30 ==== */

void FUN_00448f30(void)

{
  FUN_005584e0(&LAB_00448f40);
  return;
}


/* ==== 00448f60 FUN_00448f60 ==== */

void FUN_00448f60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00448f70 FUN_00448f70 ==== */

void FUN_00448f70(void)

{
  FUN_005584e0(&LAB_00448f80);
  return;
}


/* ==== 00448f90 FUN_00448f90 ==== */

void FUN_00448f90(int *param_1,int *param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  FUN_0054b339(param_2);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
  *param_1 = iVar1;
  return;
}


/* ==== 00448fd0 FUN_00448fd0 ==== */

void FUN_00448fd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  *in_ECX = *puVar1;
  *param_1 = puVar1;
  return;
}


/* ==== 00448ff0 FUN_00448ff0 ==== */

undefined4 * FUN_00448ff0(undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  undefined4 *operator_new_result_2;
  int in_ECX;
  undefined4 *operator_new_result;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)param_2 + 4);
  operator_new_result_2 = operator_new(0xc);
  operator_new_result = param_2;
  if (param_2 == (void *)0x0) {
    operator_new_result = operator_new_result_2;
  }
  *operator_new_result_2 = operator_new_result;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = operator_new_result_2;
  }
  operator_new_result_2[1] = puVar1;
  *(undefined4 **)((int)param_2 + 4) = operator_new_result_2;
  *(undefined4 **)operator_new_result_2[1] = operator_new_result_2;
  if (operator_new_result_2 + 2 != (undefined4 *)0x0) {
    operator_new_result_2[2] = *param_3;
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  *param_1 = operator_new_result_2;
  return param_1;
}


/* ==== 00449050 FUN_00449050 ==== */

void FUN_00449050(undefined4 *param_1,int param_2)

{
  undefined4 *operator_new_result;
  
  operator_new_result = operator_new(0xc);
  if (param_1 == (void *)0x0) {
    param_1 = operator_new_result;
  }
  *operator_new_result = param_1;
  if (param_2 != 0) {
    operator_new_result[1] = param_2;
    return;
  }
  operator_new_result[1] = operator_new_result;
  return;
}


/* ==== 00449080 FUN_00449080 ==== */

void FUN_00449080(void)

{
  FUN_004c3fa0(s_release_anim_config_0059f14c);
  FUN_00468980();
  return;
}


/* ==== 004490a0 FUN_004490a0 ==== */

void FUN_004490a0(void)

{
  FUN_0045de10();
  FUN_0042f0d0();
  FUN_00450840();
  FUN_0044afc0();
  FUN_004b2410();
  FUN_00449080();
  FUN_00440990();
  FUN_00440150();
  FUN_00444f70();
  FUN_004644a0();
  FUN_0040ebe0();
  FUN_0040ee10();
  thunk_FUN_0042a810();
  FUN_0043c0c0();
  if (DAT_006fb8a4 == 0) {
    FUN_004455c0();
  }
  FUN_00448dd0();
  FUN_00472210();
  FUN_00469fa0();
  FUN_0046f030();
  FUN_00488260();
  FUN_0042aee0();
  thunk_FUN_0042af70();
  FUN_00407280();
  FUN_004979e0();
  FUN_004a6b50();
  return;
}


/* ==== 00449150 FUN_00449150 ==== */

void FUN_00449150(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00449160 FUN_00449160 ==== */

void FUN_00449160(void)

{
  FUN_005584e0(&LAB_00449170);
  return;
}


/* ==== 00449190 FUN_00449190 ==== */

void FUN_00449190(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004491a0 FUN_004491a0 ==== */

void FUN_004491a0(void)

{
  FUN_005584e0(&LAB_004491b0);
  return;
}


/* ==== 004491f0 FUN_004491f0 ==== */

void FUN_004491f0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f39c);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  FUN_004c3c70(s_PLAYER_0059f3b8,s_finished_0059f3ac,0);
  return;
}


/* ==== 00449230 FUN_00449230 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449230(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f3c0);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb95c = FUN_004c3cd0(s_Options_0059f3d8,s_Police_0059f3d0);
  DAT_006fb960 = FUN_004c3cd0(s_Options_0059f3e8,s_traffic_0059f3e0);
  _DAT_006fb968 = FUN_004c3cd0(s_Options_0059f400,s_BonusCountDown_0059f3f0);
  DAT_006fb96c = FUN_004c3cd0(s_Options_0059f418,s_Invulnerable_0059f408);
  DAT_006fb964 = FUN_004c3cd0(s_Options_0059f42c,s_opponents_0059f420);
  DAT_006fb97c = 0;
  return;
}


/* ==== 004492c0 FUN_004492c0 ==== */

void FUN_004492c0(void)

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
  puStack_8 = &LAB_0056a4c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00449460();
  FUN_00449230();
  FUN_004494d0();
  FUN_0044a690();
  load_player_info();
  FUN_0044acb0();
  FUN_0044ad40();
  FUN_0044a540();
  FUN_0044a590();
  FUN_0044a5e0();
  FUN_0044a630();
  FUN_0044a4f0();
  FUN_0044a4a0();
  FUN_0044a230();
  FUN_0044a1f0();
  FUN_0044a1b0();
  FUN_0044a110();
  FUN_0044a0d0();
  FUN_0044a090();
  FUN_0044a010();
  FUN_0044a050();
  FUN_00449ea0();
  FUN_00449e20();
  FUN_00449cb0();
  FUN_00449b30();
  FUN_00449610();
  FUN_00449650();
  FUN_00449af0();
  FUN_004495d0();
  FUN_00449590();
  FUN_00449510();
  FUN_00449550();
  FUN_00449690();
  FUN_004489a0(s_CAR_CFG_INI_0059f448,s_Car_Configurations_0059f434);
  i = 0xffffffff;
  pcVar2 = s_Car_Configurations_0059f454;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_Car_Configurations_0059f454;
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
  FUN_004244b0(local_1c,DAT_006fb958);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00449460 FUN_00449460 ==== */

void FUN_00449460(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004489a0(s_INTEL_INI_0059f474,s_AI_Settings_0059f468);
  iVar1 = FUN_00448c90(s_AI_Settings_0059f480);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_005d2ab0 = FUN_004c3cd0(s_General_0059f498,s_NrOpponents_0059f48c);
  if (6 < DAT_005d2ab0) {
    FUN_004c4150(s___s___d_Too_many_opponents_for_t_0059f4c4,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_0059f4a0,0x9f,6);
  }
  return;
}


/* ==== 004494d0 FUN_004494d0 ==== */

void FUN_004494d0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f4fc);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb958 = FUN_004c3cd0(s_league_0059f514,s_league_0059f50c);
  return;
}


/* ==== 00449510 FUN_00449510 ==== */

void FUN_00449510(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_System_Settings_0059f51c);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb950 = FUN_004c3cd0(s_helpdesk_0059f538,s_tweak_mode_0059f52c);
  return;
}


/* ==== 00449550 FUN_00449550 ==== */

void FUN_00449550(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f544);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb954 = FUN_004c3cd0(s_ETAPPE_0059f55c,s_british_0059f554);
  return;
}


/* ==== 00449590 FUN_00449590 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449590(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f564);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  _DAT_006fb94c = FUN_004c3cd0(s_OPTIONS_0059f57c,s_demo_0059f574);
  return;
}


/* ==== 004495d0 FUN_004495d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004495d0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f584);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  _DAT_006fb948 = FUN_004c3cd0(s_OPTIONS_0059f59c,s_dif_mod_0059f594);
  return;
}


/* ==== 00449610 FUN_00449610 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449610(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f5a4);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  _DAT_006fb914 = FUN_004c3cd0(s_OPTIONS_0059f5c0,s_stuur_model_0059f5b4);
  return;
}


/* ==== 00449650 FUN_00449650 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449650(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f5c8);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  _DAT_006fb934 = FUN_004c3cd0(s_OPTIONS_0059f5e4,s_ai_model_0059f5d8);
  return;
}


/* ==== 00449690 FUN_00449690 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449690(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  FUN_004489a0(s_INTEL_INI_0059f5f8,s_AI_Settings_0059f5ec);
  iVar1 = FUN_00448c90(s_AI_Settings_0059f604);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f61c,s_StopSpeed_0059f610);
  _DAT_005d1b20 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f634,s_ChaseTimeEasy_0059f624);
  _DAT_005d1b24 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f64c,s_ChaseTimeHard_0059f63c);
  _DAT_005d1b28 = (float)uVar3;
  _DAT_005d1b2c = FUN_004c3cd0(s_GENERAL_0059f660,s_GiveUpDist_0059f654);
  DAT_005d1b30 = FUN_004c3cd0(s_GENERAL_0059f67c,s_CopsPerPlayerEasy_0059f668);
  DAT_005d1b34 = FUN_004c3cd0(s_GENERAL_0059f698,s_CopsPerPlayerHard_0059f684);
  DAT_005d1b38 = FUN_004c3cd0(s_GENERAL_0059f6b0,s_CopsPerRacer_0059f6a0);
  uVar3 = FUN_004c3cd0(s_VIOLATIONS_0059f6c4,s_MaxSpeed60_0059f6b8);
  DAT_005d1b3c = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_VIOLATIONS_0059f6dc,s_MaxSpeed80_0059f6d0);
  DAT_005d1b40 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_VIOLATIONS_0059f6f4,s_MaxSpeed120_0059f6e8);
  DAT_005d1b44 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_VIOLATIONS_0059f70c,s_NoMaxSpeed_0059f700);
  DAT_005d1b3c = DAT_005d1b3c * 0.25;
  DAT_005d1b40 = DAT_005d1b40 * 0.25;
  DAT_005d1b44 = DAT_005d1b44 * 0.25;
  DAT_005d1b48 = (float)uVar3 * 0.25;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f72c,s_CatchUpCloseEasy_0059f718);
  DAT_005d1b4c = (float)uVar3 * 0.25;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f748,s_CatchUpCloseNormal_0059f734);
  DAT_005d1b50 = (float)uVar3 * 0.25;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f760,s_CatchUpFarEasy_0059f750);
  DAT_005d1b54 = (float)uVar3 * 0.25;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f77c,s_CatchUpFarNormal_0059f768);
  DAT_005d1b58 = (float)uVar3 * 0.25;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f79c,s_CatchUpCloseChunkEasy_0059f784);
  _DAT_005d1b5c = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f7bc,s_CatchUpCloseChunkNormal_0059f7a4);
  _DAT_005d1b60 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f7d4,s_CatchUpFarChunk_0059f7c4);
  _DAT_005d1b64 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f7ec,s_CatchUpSpeed_0059f7dc);
  _DAT_005d1b68 = (float)uVar3 * 0.25;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f804,s_SlowDownFactor_0059f7f4);
  _DAT_005d1b6c = (float)uVar3 * 0.25;
  uVar3 = FUN_004c3cd0(s_GENERAL_0059f81c,s_SpeedUpFactor_0059f80c);
  _DAT_005d1b70 = (float)uVar3 * 0.25;
  uVar3 = FUN_004c3cd0(s_RACER_PENALTIES_0059f838,s_MaxSpeedPenaltyEasy_0059f824);
  _DAT_005d1b74 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_RACER_PENALTIES_0059f860,s_MaxSpeedPenaltyNormal_0059f848);
  _DAT_005d1b78 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_RACER_PENALTIES_0059f884,s_MaxSpeedPenaltyHard_0059f870);
  _DAT_005d1b7c = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_RACER_PENALTIES_0059f8a8,s_MaxRPMPenaltyEasy_0059f894);
  _DAT_005d1b80 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_RACER_PENALTIES_0059f8cc,s_MaxRPMPenaltyNormal_0059f8b8);
  _DAT_005d1b84 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_RACER_PENALTIES_0059f8f0,s_MaxRPMPenaltyHard_0059f8dc);
  _DAT_005d1b88 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_STEERING_BEHAVIOR_0059f90c,s_MinAngle_0059f900);
  _DAT_005d1b8c = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_STEERING_BEHAVIOR_0059f92c,s_MaxAngle_0059f920);
  _DAT_005d1b90 = (float)uVar3;
  uVar3 = FUN_004c3cd0(s_STEERING_BEHAVIOR_0059f94c,s_SteerFactor_0059f940);
  _DAT_005d1b94 = (float)uVar3;
  return;
}


/* ==== 00449af0 FUN_00449af0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449af0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f960);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  _DAT_006fb938 = FUN_004c3cd0(s_OPTIONS_0059f984,s_traffic_ai_model_0059f970);
  return;
}


/* ==== 00449b30 FUN_00449b30 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449b30(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059f98c);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb904 = FUN_004c3cd0(s_GFX_OPTIONS_0059f9a4,s_clouds_0059f99c);
  DAT_006fb908 = FUN_004c3cd0(s_GFX_OPTIONS_0059f9bc,s_finish_flag_0059f9b0);
  DAT_006fb90c = FUN_004c3cd0(s_GFX_OPTIONS_0059f9d4,s_skidmarks_0059f9c8);
  DAT_006fb910 = FUN_004c3cd0(s_GFX_OPTIONS_0059f9f0,s_fade_skmarks_0059f9e0);
  DAT_006fb918 = FUN_004c3cd0(s_GFX_OPTIONS_0059fa08,s_particles_0059f9fc);
  DAT_006fb91c = FUN_004c3cd0(s_GFX_OPTIONS_0059fa20,s_part_rain_0059fa14);
  DAT_006fb920 = FUN_004c3cd0(s_GFX_OPTIONS_0059fa3c,s_disable_overlay_0059fa2c);
  DAT_006fb924 = FUN_004c3cd0(s_GFX_OPTIONS_0059fa58,s_overlay_detail_0059fa48);
  _DAT_006fb930 = FUN_004c3cd0(s_GFX_OPTIONS_0059fa74,s_object_lights_0059fa64);
  DAT_006fb93c = FUN_004c3cd0(s_GFX_OPTIONS_0059fa88,s_gamma_0059fa80);
  DAT_006fb940 = FUN_004c3cd0(s_GFX_OPTIONS_0059faa4,s_alpha_blending_0059fa94);
  DAT_006fb944 = FUN_004c3cd0(s_GFX_OPTIONS_0059fabc,s_mipmapping_0059fab0);
  DAT_006fb970 = FUN_004c3cd0(s_GFX_OPTIONS_0059fad0,s_radar_0059fac8);
  DAT_006fb978 = FUN_004c3cd0(s_GFX_OPTIONS_0059faf4,s_custom_texture_memory_0059fadc);
  iVar1 = FUN_004c3cd0(s_GFX_OPTIONS_0059fb08,s_drawwp_0059fb00);
  DAT_006fb97d = iVar1 != 0;
  DAT_005ab3c0 = FUN_004c3cd0(s_GFX_OPTIONS_0059fb24,s_OVERLAYELEMENTS_0059fb14);
  _DAT_006fb974 = 0x3ec00000;
  return;
}


/* ==== 00449cb0 FUN_00449cb0 ==== */

void FUN_00449cb0(void)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  int j;
  uint k;
  uint m;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_10c [12];
  char acStack_100 [256];
  
  i = FUN_00448c90(s_System_Settings_0059fb40);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  if ((DAT_006fb890 < 0) || (5 < DAT_006fb890)) {
    FUN_004c4150(s__s___d__Unknown_resolution__Reso_0059fb74,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_0059fb50,0x148,DAT_006fb890);
  }
  i = 0;
  if (0 < DAT_006fa588) {
    pcVar3 = (char *)&DAT_006cbefc;
    do {
      FUN_005587a3(local_10c,s__d_0059fba4,i);
      if ((DAT_006fb894 == 0) || (DAT_006fb890 == 1)) {
        pcVar5 = s_wait_hi_0059fb38;
      }
      else {
        pcVar5 = s_wait_lo_0059fb30;
      }
      FUN_004c3d10(pcVar5,local_10c,acStack_100,199);
      j = -1;
      pcVar5 = acStack_100;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (j == -2) {
        FUN_004c4150(s__s___d__No_fname_found_for_PCX__E_0059fbcc,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_0059fba8,0x163,i,DAT_006fb890);
      }
      k = 0xffffffff;
      pcVar5 = acStack_100;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (0xc < (int)(~k - 1)) {
        k = 0xffffffff;
        pcVar5 = acStack_100;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_004c4150(s__s___d__Filename_too_long_in_ini_0059fc2c,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_0059fc08,0x168,~k - 1);
      }
      j = DAT_006fa588;
      k = 0xffffffff;
      pcVar5 = acStack_100;
      do {
        pcVar4 = pcVar5;
        if (k == 0) break;
        k = k - 1;
        pcVar4 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar4;
      } while (cVar1 != '\0');
      k = ~k;
      pcVar5 = pcVar4 + -k;
      pcVar4 = pcVar3;
      for (m = k >> 2; m != 0; m = m - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar4 = pcVar4 + 4;
      }
      i = i + 1;
      for (k = k & 3; k != 0; k = k - 1) {
        *pcVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      }
      pcVar3 = pcVar3 + 0xd;
    } while (i < j);
  }
  return;
}


/* ==== 00449e20 FUN_00449e20 ==== */

void FUN_00449e20(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059fc60);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8fc = FUN_004c3cd0(s_OPTIONS_0059fc78,s_NRLAPS_0059fc70);
  if ((DAT_006fb8fc < 1) || (999 < DAT_006fb8fc)) {
    FUN_004c4150(s__s___d__Incorrect_value_for_nr_o_0059fca4,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_0059fc80,0x17a,DAT_006fb8fc);
  }
  if ((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0) {
    DAT_006fb8fc = 1;
  }
  return;
}


/* ==== 00449ea0 FUN_00449ea0 ==== */

void FUN_00449ea0(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int i;
  int *piVar4;
  CHAR local_40 [64];
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059fcd8);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  wsprintfA(local_40,s_LAP_RECORD_E_d_L_d_0059fce8,DAT_006fb898,DAT_006fb958);
  DAT_006fb8ec = FUN_004c3cd0(s_BEST_TIMES_0059fcfc,local_40);
  if (DAT_006fb8ec == 0) {
    DAT_006fb8ec = 0xfffffff;
  }
  wsprintfA(local_40,s_RACE_RECORD_E_d_L_d_0059fd08,DAT_006fb898,DAT_006fb958);
  DAT_006fb8f0 = FUN_004c3cd0(s_BEST_TIMES_0059fd1c,local_40);
  if (DAT_006fb8f0 == 0) {
    DAT_006fb8f0 = 0xfffffff;
  }
  FUN_005587a3(local_40,s_TIME_CHECK_COUNT_E_d_L_d_0059fd28,DAT_006fb898,DAT_006fb958);
  iVar1 = FUN_004c3cd0(s_BEST_TIMES_0059fd44,local_40);
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_004c4150(s__s___d__Incorrect_nr_of_time_che_0059fd74,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_0059fd50,0x1a1,iVar1);
  }
  i = 0;
  if (0 < iVar1) {
    piVar4 = &DAT_006fce50;
    do {
      wsprintfA(local_40,s_TIME_CHECK_E_d_C_d_L_d_0059fdac,DAT_006fb898,i,DAT_006fb958);
      iVar3 = FUN_004c3cd0(s_BEST_TIMES_0059fdc4,local_40);
      *piVar4 = iVar3;
      if (iVar3 == 0) {
        FUN_004c4150(s__s___d__Value_not_found_for_chec_0059fdf4,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_0059fdd0,0x1ac,DAT_006fb898,i);
      }
      i = i + 1;
      piVar4 = piVar4 + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 0044a010 FUN_0044a010 ==== */

void FUN_0044a010(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059fe38);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8e4 = FUN_004c3cd0(s_OPTIONS_0059fe50,s_WAITVBL_0059fe48);
  return;
}


/* ==== 0044a050 FUN_0044a050 ==== */

void FUN_0044a050(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059fe58);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb900 = FUN_004c3cd0(s_OPTIONS_0059fe70,s_filter_0059fe68);
  return;
}


/* ==== 0044a090 FUN_0044a090 ==== */

void FUN_0044a090(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059fe78);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8e0 = FUN_004c3cd0(s_OPTIONS_0059fe8c,&PTR_LAB_0059fe88);
  return;
}


/* ==== 0044a0d0 FUN_0044a0d0 ==== */

void FUN_0044a0d0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059fe94);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8d4 = FUN_004c3cd0(s_OPTIONS_0059feb0,s_difficulty_0059fea4);
  return;
}


/* ==== 0044a110 FUN_0044a110 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a110(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059feb8);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fbb40 = FUN_004c3cd0(s_PLAYER_0059fed0,s_motor_0059fec8);
  DAT_006fbb44 = FUN_004c3cd0(s_PLAYER_0059fee0,s_banden_0059fed8);
  DAT_006fbb48 = FUN_004c3cd0(s_PLAYER_0059fef0,s_turbo_0059fee8);
  DAT_006fbb4c = FUN_004c3cd0(s_PLAYER_0059fefc,&PTR_DAT_0059fef8);
  DAT_006fbb50 = FUN_004c3cd0(s_PLAYER_0059ff14,s_versnellingsbak_0059ff04);
  _DAT_006fbb54 = FUN_004c3cd0(s_PLAYER_0059ff28,s_injectie_0059ff1c);
  return;
}


/* ==== 0044a1b0 FUN_0044a1b0 ==== */

void FUN_0044a1b0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059ff30);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8cc = FUN_004c3cd0(s_OPTIONS_0059ff50,s_collisionoff_0059ff40);
  return;
}


/* ==== 0044a1f0 FUN_0044a1f0 ==== */

void FUN_0044a1f0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_0059ff58);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8c8 = FUN_004c3cd0(s_OPTIONS_0059ff74,s_texturecopy_0059ff68);
  return;
}


/* ==== 0044a230 FUN_0044a230 ==== */

void FUN_0044a230(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int j;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int i;
  char *pcVar9;
  undefined1 local_e8 [32];
  char acStack_c8 [200];
  
  iVar2 = FUN_00448c90(s_Game_Settings_0059ff7c);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar3);
  iVar2 = FUN_004c3cd0(s_RACERS_0059ff94,s_COUNT_0059ff8c);
  if (iVar2 != 6) {
    FUN_004c4150(s__load_racer_info___s__d____Inval_0059ffc0,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_0059ff9c,0x212,iVar2);
  }
  i = 0;
  if (0 < iVar2) {
    puVar8 = &DAT_005973c8;
    do {
      FUN_005587a3(local_e8,s__d_0059fff8,i);
      FUN_004c3d10(s_RACERS_0059fffc,local_e8,acStack_c8,199);
      j = -1;
      pcVar9 = acStack_c8;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (j == -2) {
        FUN_004c4150(s__load_racer_info___s__d____No_va_005a0028,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a0004,0x220,i);
      }
      j = FUN_004c3d60(acStack_c8,0);
      if (j != 3) {
        FUN_004c4150(s__load_racer_info___s__d____Inval_005a008c,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a0068,0x229,i);
      }
      uVar4 = FUN_004c3ec0(0);
      puVar8[-2] = uVar4;
      uVar4 = FUN_004c3ec0(1);
      *puVar8 = uVar4;
      uVar4 = FUN_004c3ec0(2);
      puVar8[-1] = uVar4;
      FUN_005587a3(local_e8,s_DAM_d_005a00d0,i);
      FUN_004c3d10(s_RACERS_005a00d8,local_e8,acStack_c8,199);
      j = -1;
      pcVar9 = acStack_c8;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (j == -2) {
        FUN_004c4150(s__load_racer_info___s__d____No_va_005a0104,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a00e0,0x235,i);
      }
      j = FUN_004c3d60(acStack_c8,0);
      if (j != 8) {
        FUN_004c4150(s__load_racer_info___s__d____Inval_005a0168,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a0144,0x23c,i);
      }
      j = 0;
      puVar6 = puVar8 + 0xc;
      do {
        uVar4 = FUN_004c3ec0(j);
        *puVar6 = uVar4;
        j = j + 1;
        puVar6 = puVar6 + 1;
      } while (j < 8);
      FUN_005587a3(local_e8,s_VAL_d_005a01ac,i);
      FUN_004c3d10(s_RACERS_005a01b4,local_e8,acStack_c8,199);
      j = -1;
      pcVar9 = acStack_c8;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (j == -2) {
        FUN_004c4150(s__load_racer_info___s__d____No_va_005a01e0,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a01bc,0x24b,i);
      }
      j = FUN_004c3d60(acStack_c8,0);
      if (j != 8) {
        FUN_004c4150(s__load_racer_info___s__d____Inval_005a0244,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a0220,0x252,i);
      }
      j = 0;
      pfVar7 = (float *)(puVar8 + 4);
      do {
        iVar5 = FUN_004c3ec0(j);
        j = j + 1;
        *pfVar7 = (float)iVar5;
        pfVar7 = pfVar7 + 1;
      } while (j < 8);
      i = i + 1;
      puVar8 = puVar8 + 0x16;
    } while (i < iVar2);
  }
  return;
}


/* ==== 0044a4a0 FUN_0044a4a0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a4a0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004c3fa0(s_set_benzine_prijs_005a0288);
  iVar1 = FUN_00448c90(s_Game_Settings_005a029c);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  _DAT_006fb8bc = FUN_004c3cd0(s_OPTIONS_005a02bc,s_BENZINEPRIJS_005a02ac);
  return;
}


/* ==== 0044a4f0 FUN_0044a4f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a4f0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004c3fa0(s_set_3dsound_onoff_005a02c4);
  iVar1 = FUN_00448c90(s_Game_Settings_005a02d8);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  _DAT_006fb8b8 = FUN_004c3cd0(s_OPTIONS_005a02f0,s_3DSOUND_005a02e8);
  return;
}


/* ==== 0044a540 FUN_0044a540 ==== */

void FUN_0044a540(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004c3fa0(s_set_game_background_onoff_005a02f8);
  iVar1 = FUN_00448c90(s_Game_Settings_005a0314);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8a4 = FUN_004c3cd0(s_OPTIONS_005a0330,s_BACKGROUND_005a0324);
  return;
}


/* ==== 0044a590 FUN_0044a590 ==== */

void FUN_0044a590(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004c3fa0(s_set_resize_texture_onoff_005a0338);
  iVar1 = FUN_00448c90(s_Game_Settings_005a0354);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8a8 = FUN_004c3cd0(s_OPTIONS_005a0374,s_RESIZETEXTURE_005a0364);
  return;
}


/* ==== 0044a5e0 FUN_0044a5e0 ==== */

void FUN_0044a5e0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004c3fa0(s_set_starting_chunk_005a037c);
  iVar1 = FUN_00448c90(s_Game_Settings_005a0390);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8ac = FUN_004c3cd0(s_OPTIONS_005a03ac,s_STARTCHUNK_005a03a0);
  return;
}


/* ==== 0044a630 FUN_0044a630 ==== */

void FUN_0044a630(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004c3fa0(s_set_visible_chunks_005a03b4);
  iVar1 = FUN_00448c90(s_Game_Settings_005a03c8);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb8b0 = FUN_004c3cd0(s_OPTIONS_005a03e8,s_VISIBLECHUNKS_005a03d8);
  if (DAT_006fb8b0 < 10) {
    DAT_006fb8b0 = 10;
  }
  return;
}


/* ==== 0044a690 FUN_0044a690 ==== */

void FUN_0044a690(void)

{
  char cVar1;
  undefined2 uVar2;
  int k;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint i;
  uint j;
  int m;
  char *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  char *pcVar9;
  char local_d4 [8];
  undefined1 local_cc [4];
  char acStack_c8 [200];
  
  ppuVar7 = &PTR_LAB_00414751_3_005a03f0;
  if (DAT_006fb8d0 == 0) {
    ppuVar7 = (undefined **)s_PCX_005a03f4;
  }
  i = 0xffffffff;
  do {
    ppuVar8 = ppuVar7;
    if (i == 0) break;
    i = i - 1;
    ppuVar8 = (undefined **)((int)ppuVar7 + 1);
    cVar1 = *(char *)ppuVar7;
    ppuVar7 = ppuVar8;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar6 = (char *)((int)ppuVar8 - i);
  pcVar5 = local_d4;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_004c3fa0(s_load_track_info_005a03f8);
  k = FUN_00448c90(s_System_Settings_005a040c);
  puVar3 = *(undefined1 **)(k + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar3);
  DAT_006fa588 = FUN_004c3cd0(s_MAPS_005a0424,s_COUNT_005a041c);
  if ((DAT_006fa588 < 1) || (0x1e < DAT_006fa588)) {
    FUN_004c4150(s__load_track_info___s__d____Inval_005a0450,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a042c,0x2d2,DAT_006fa588);
  }
  k = 0;
  if (0 < DAT_006fa588) {
    pcVar6 = (char *)&DAT_006fa590;
    do {
      FUN_005587a3(local_cc,s__d_005a0484,k);
      FUN_004c3d10(s_MAPS_005a0488,local_cc,acStack_c8,199);
      m = -1;
      pcVar5 = acStack_c8;
      do {
        if (m == 0) break;
        m = m + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (m == -2) {
        FUN_004c4150(s__load_track_info___s__d____No_va_005a04b4,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a0490,0x2e0,k);
      }
      m = FUN_004c3d60(acStack_c8,0);
      if (m != 0xf) {
        FUN_004c4150(s__load_track_info___s__d____Inval_005a0518,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a04f4,0x2e9,k);
      }
      uVar4 = FUN_004c3ec0(0);
      *(undefined4 *)(pcVar6 + -4) = uVar4;
      FUN_004c3f10(1,acStack_c8,0xd);
      pcVar5 = (char *)FUN_005690b0(acStack_c8);
      i = 0xffffffff;
      do {
        pcVar9 = pcVar5;
        if (i == 0) break;
        i = i - 1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      i = ~i;
      pcVar5 = pcVar9 + -i;
      pcVar9 = pcVar6;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar9 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_004c3f10(2,acStack_c8,0xd);
      uVar4 = FUN_005690b0(acStack_c8,local_d4);
      FUN_005587a3(pcVar6 + 0xe,s__s__s_005a055c,uVar4);
      FUN_004c3f10(3,acStack_c8,0xd);
      uVar4 = FUN_005690b0(acStack_c8,local_d4);
      FUN_005587a3(pcVar6 + 0x1c,s__s__s_005a0564,uVar4);
      FUN_004c3f10(4,acStack_c8,0xd);
      uVar4 = FUN_005690b0(acStack_c8,local_d4);
      FUN_005587a3(pcVar6 + 0x2a,s__s__s_005a056c,uVar4);
      FUN_004c3f10(5,acStack_c8,0xd);
      uVar4 = FUN_005690b0(acStack_c8,local_d4);
      FUN_005587a3(pcVar6 + 0x38,s__s__s_005a0574,uVar4);
      FUN_004c3f10(6,acStack_c8,0xd);
      uVar4 = FUN_005690b0(acStack_c8);
      FUN_005587a3(pcVar6 + 0x46,s__s_pcx_005a057c,uVar4);
      FUN_004c3f10(7,acStack_c8,0xd);
      uVar4 = FUN_005690b0(acStack_c8);
      FUN_005587a3(pcVar6 + 0x54,s__s_pcx_005a0584,uVar4);
      FUN_004c3f10(8,acStack_c8,0x1e);
      pcVar5 = (char *)FUN_005690b0(acStack_c8);
      i = 0xffffffff;
      do {
        pcVar9 = pcVar5;
        if (i == 0) break;
        i = i - 1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      i = ~i;
      pcVar5 = pcVar9 + -i;
      pcVar9 = pcVar6 + 0x62;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar9 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_004c3f10(0xb,acStack_c8,3);
      uVar2 = FUN_0055933d(acStack_c8);
      *(undefined2 *)(pcVar6 + 0x82) = uVar2;
      FUN_004c3f10(0xc,acStack_c8,3);
      uVar2 = FUN_0055933d(acStack_c8);
      *(undefined2 *)(pcVar6 + 0x84) = uVar2;
      FUN_004c3f10(0xd,acStack_c8,3);
      uVar2 = FUN_0055933d(acStack_c8);
      *(undefined2 *)(pcVar6 + 0x86) = uVar2;
      cVar1 = FUN_004c3ec0(9);
      pcVar6[0x80] = cVar1;
      uVar4 = FUN_004c3ec0(10);
      *(undefined4 *)(pcVar6 + 0x88) = uVar4;
      uVar4 = FUN_004c3ec0(10);
      *(undefined4 *)(pcVar6 + 0x88) = uVar4;
      uVar4 = FUN_004c3ec0(0xe);
      *(undefined4 *)(pcVar6 + 0x8c) = uVar4;
      k = k + 1;
      pcVar6 = pcVar6 + 0x94;
    } while (k < DAT_006fa588);
  }
  return;
}


/* ==== 0044aa20 load_player_info ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_player_info(void)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  undefined4 uVar3;
  int j;
  undefined4 *puVar4;
  char *pcVar5;
  float *pfVar6;
  undefined1 auStack_e8 [32];
  char acStack_c8 [200];
  
  FUN_004c3fa0(s_Entry_load_player_info_005a058c);
  i = FUN_00448c90(s_Game_Settings_005a05a4);
  puVar2 = *(undefined1 **)(i + 4);
  i = 0;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  uVar3 = FUN_004c3cd0(s_PLAYER_005a05bc,s_money_005a05b4);
  FUN_004502e0(uVar3);
  FUN_00450260(0);
  FUN_00450290(0);
  uVar3 = FUN_004c3cd0(s_PLAYER_005a05d4,s_turbo_amount_005a05c4);
  FUN_00450110(uVar3);
  FUN_004c3fa0(s_set_game_playercar_005a05dc);
  DAT_006fba5c = FUN_004c3cd0(s_PLAYER_005a05f4,s_CAR_005a05f0);
  if ((DAT_006fba5c < 0) || (10 < DAT_006fba5c)) {
    FUN_004c4150(s__set_player_info___s__d____Inval_005a0620,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a05fc,0x340,DAT_006fba5c);
  }
  DAT_006fba30 = FUN_004c3cd0(s_PLAYER_005a0654,s_copland_005a064c);
  DAT_006fbaa4 = DAT_005d2ab0;
  if (DAT_006fb964 == 0) {
    DAT_006fbaa4 = 0;
  }
  _DAT_005a16fc = FUN_004c3cd0(s_PLAYER_005a066c,s_RESETWAITTIME_005a065c);
  FUN_005587a3(auStack_e8,s_DAMAGE_MESH_005a0674);
  FUN_004c3d10(s_PLAYER_005a0680,auStack_e8,acStack_c8,199);
  FUN_004c3fa0(s_Buffer_read___s__005a0688,acStack_c8);
  j = -1;
  pcVar5 = acStack_c8;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (j == -2) {
    FUN_004c4150(s__load_player_info___s__d____No_v_005a06c0,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a069c,0x371);
  }
  j = FUN_004c3d60(acStack_c8,0);
  if (j != 8) {
    FUN_004c4150(s__load_player_info___s__d____Inva_005a0724,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a0700,0x378);
  }
  j = 0;
  puVar4 = &DAT_006fbb10;
  do {
    uVar3 = FUN_004c3ec0(j);
    *puVar4 = uVar3;
    uVar3 = FUN_004c3ec0(j);
    FUN_004c3fa0(s_Region__d__value__d__005a0770,j,uVar3);
    puVar4 = puVar4 + 1;
    j = j + 1;
  } while ((int)puVar4 < 0x6fbb30);
  FUN_005587a3(auStack_e8,s_DAMAGE_VALUE_005a0788);
  FUN_004c3d10(s_PLAYER_005a0798,auStack_e8,acStack_c8,199);
  FUN_004c3fa0(s_Buffer_read___s__005a07a0,acStack_c8);
  j = -1;
  pcVar5 = acStack_c8;
  do {
    if (j == 0) break;
    j = j + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (j == -2) {
    FUN_004c4150(s__load_player_info___s__d____No_v_005a07d8,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a07b4,0x386);
  }
  j = FUN_004c3d60(acStack_c8,0);
  if (j != 8) {
    FUN_004c4150(s__load_player_info___s__d____Inva_005a083c,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a0818,0x38d);
  }
  pfVar6 = (float *)&DAT_006fbaf0;
  do {
    j = FUN_004c3ec0(i);
    *pfVar6 = (float)j;
    uVar3 = FUN_004c3ec0(i);
    FUN_004c3fa0(s_Region__d__value__f__005a0888,i,uVar3);
    pfVar6 = pfVar6 + 1;
    i = i + 1;
  } while ((int)pfVar6 < 0x6fbb10);
  return;
}


/* ==== 0044acb0 FUN_0044acb0 ==== */

void FUN_0044acb0(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_004c3fa0(s_set_game_etappe_005a08a0);
  iVar1 = FUN_00448c90(s_Game_Settings_005a08b4);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb898 = FUN_004c3cd0(s_ETAPPE_005a08cc,s_ETAPPE_005a08c4);
  if ((DAT_006fb898 < 0) || (DAT_006fa588 < DAT_006fb898)) {
    FUN_004c4150(s__load_etappe_info___s__d____Inva_005a08f8,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a08d4,0x3a7,DAT_006fb898);
  }
  DAT_006fb8e8 = FUN_004c3cd0(s_ETAPPE_005a0934,s_DIRECTION_005a0928);
  return;
}


/* ==== 0044ad40 FUN_0044ad40 ==== */

void FUN_0044ad40(void)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  int j;
  char *_Dest;
  char *pcVar3;
  undefined1 local_38 [4];
  char acStack_34 [52];
  
  FUN_004c3fa0(s_load_music_info_005a093c);
  i = FUN_00448c90(s_System_Settings_005a0950);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_006fb6e4 = FUN_004c3cd0(s_MUSIC_005a0968,s_COUNT_005a0960);
  if ((DAT_006fb6e4 < 1) || (0x1e < DAT_006fb6e4)) {
    FUN_004c4150(s__load_music_info___s__d____Inval_005a0994,
                 s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a0970,0x3c0,DAT_006fb6e4);
  }
  i = 0;
  if (0 < DAT_006fb6e4) {
    _Dest = &DAT_006fb6e8;
    do {
      FUN_005587a3(local_38,s__d_005a09c8,i);
      FUN_004c3d10(s_MUSIC_005a09cc,local_38,acStack_34,0x31);
      j = -1;
      pcVar3 = acStack_34;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (j == -2) {
        FUN_004c4150(s__load_music_info___s__d____No_va_005a09f8,
                     s_C__Work_A2IV_Game_prog_Gm_ini_cp_005a09d4,0x3d0,i);
      }
      _strncpy(_Dest,acStack_34,0xd);
      i = i + 1;
      _Dest = _Dest + 0xe;
    } while (i < DAT_006fb6e4);
  }
  i = FUN_004c3cd0(s_MUSIC_005a0a40,s_LAST_005a0a38);
  DAT_006fb88c = i + 1;
  if (DAT_006fb88c < 0) {
    DAT_006fb88c = 0;
  }
  if (DAT_006fb6e4 <= DAT_006fb88c) {
    DAT_006fb88c = 0;
  }
  FUN_004c3c70(s_MUSIC_005a0a50,s_LAST_005a0a48,DAT_006fb88c);
  return;
}


/* ==== 0044ae80 FUN_0044ae80 ==== */

void FUN_0044ae80(void)

{
  int iVar1;
  undefined1 *puVar2;
  int i;
  undefined4 *puVar3;
  CHAR local_40 [64];
  
  i = 0;
  if (DAT_006fba98 != 0) {
    iVar1 = FUN_00448c90(s_Game_Settings_005a0a58);
    puVar2 = *(undefined1 **)(iVar1 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    FUN_004c3b60(puVar2);
    wsprintfA(local_40,s_LAP_RECORD_E_d_L_d_005a0a68,DAT_006fb898,DAT_006fb958);
    FUN_004c3c70(s_BEST_TIMES_005a0a7c,local_40,DAT_006fb8ec);
    wsprintfA(local_40,s_RACE_RECORD_E_d_L_d_005a0a88,DAT_006fb898,DAT_006fb958);
    FUN_004c3c70(s_BEST_TIMES_005a0a9c,local_40,DAT_006fb8f0);
    if ((DAT_005a3ee8 < 0) || (9 < DAT_005a3ee8)) {
      DAT_005a3ee8 = 0;
    }
    FUN_005587a3(local_40,s_TIME_CHECK_COUNT_E_d_L_d_005a0aa8,DAT_006fb898,DAT_006fb958);
    FUN_004c3c70(s_BEST_TIMES_005a0ac4,local_40,DAT_005a3ee8);
    if (0 < DAT_005a3ee8) {
      puVar3 = &DAT_006fce50;
      do {
        wsprintfA(local_40,s_TIME_CHECK_E_d_C_d_L_d_005a0ad0,DAT_006fb898,i,DAT_006fb958);
        FUN_004c3c70(s_BEST_TIMES_005a0ae8,local_40,*puVar3);
        i = i + 1;
        puVar3 = puVar3 + 1;
      } while (i < DAT_005a3ee8);
    }
  }
  return;
}


/* ==== 0044afc0 FUN_0044afc0 ==== */

void FUN_0044afc0(void)

{
  write_player_info();
  FUN_0044afe0();
  FUN_0044ae80();
  FUN_0044b180();
  return;
}


/* ==== 0044afe0 FUN_0044afe0 ==== */

void FUN_0044afe0(void)

{
  undefined4 *puVar1;
  int i;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_8c [32];
  undefined1 local_6c [104];
  
  if (DAT_006fb964 != 0) {
    FUN_00448c90();
    FUN_004c3b60();
    if (DAT_006fba98 != 0) {
      FUN_0042e150();
      i = 0;
      if (0 < DAT_005d2ab0) {
        puVar1 = &DAT_005973c8;
        do {
          puVar4 = local_8c;
          uVar3 = CONCAT44(i,s__d_005a0b04);
          FUN_005587a3();
          FUN_005587a3(local_6c,s__d__d__d_005a0b08,puVar1[-2],*puVar1,puVar1[-1],puVar4,uVar3);
          uVar3 = CONCAT44(local_6c,local_8c);
          pcVar2 = s_RACERS_005a0b14;
          FUN_004c3c30();
          FUN_005587a3(local_8c,s_DAM_d_005a0b1c,i,pcVar2,uVar3);
          FUN_005587a3(local_6c,s__d__d__d__d__d__d__d__d_005a0b24,puVar1[0xc],puVar1[0xd],
                       puVar1[0xe],puVar1[0xf],puVar1[0x10],puVar1[0x11],puVar1[0x12],puVar1[0x13]);
          uVar3 = CONCAT44(local_6c,local_8c);
          pcVar2 = s_RACERS_005a0b3c;
          FUN_004c3c30();
          FUN_005587a3(local_8c,s_VAL_d_005a0b44,i,pcVar2,uVar3);
          FUN_005587a3(local_6c,s__f__f__f__f__f__f__f__f_005a0b4c);
          FUN_004c3c30(s_RACERS_005a0b64,local_8c,local_6c);
          i = i + 1;
          puVar1 = puVar1 + 0x16;
        } while (i < DAT_005d2ab0);
      }
    }
  }
  return;
}


/* ==== 0044b180 FUN_0044b180 ==== */

void FUN_0044b180(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_00448c90(s_Game_Settings_005a0b6c);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  FUN_004c3c70(s_GFX_OPTIONS_005a0b7c,PTR_s_available_texture_memory_0059f164,DAT_0073b4f9);
  return;
}


/* ==== 0044b1c0 write_player_info ==== */

void write_player_info(void)

{
  int i;
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar10;
  undefined8 uVar9;
  undefined8 uVar11;
  undefined1 local_428 [32];
  undefined1 local_408 [1028];
  
  FUN_004c3fa0();
  FUN_00448c90();
  FUN_004c3b60();
  FUN_004c3c70(s_PLAYER_005a0bc0,s_finished_005a0bb4,DAT_006fba98);
  i = 0;
  if (0 < DAT_006fb8f8) {
    puVar2 = &DAT_006fbe40;
    do {
      i = i + 1;
      puVar10 = local_428;
      uVar4 = CONCAT44(i,s_lap__d_time_005a0bc8);
      FUN_005587a3();
      FUN_004c3c70(s_PLAYER_005a0bd4,local_428,*puVar2,puVar10,uVar4);
      puVar2 = puVar2 + 1;
    } while (i < DAT_006fb8f8);
  }
  uVar4 = CONCAT44(DAT_006fb8f8,s_lapcount_005a0bdc);
  pcVar3 = s_PLAYER_005a0be8;
  FUN_004c3c70();
  FUN_00450290(DAT_006fcf8c / DAT_005a3eec,pcVar3,uVar4);
  FUN_00448470();
  FUN_004c3c70();
  FUN_00426f60();
  FUN_00425300();
  FUN_004c3c70();
  if (DAT_006fba98 != 0) {
    uVar1 = FUN_004502d0();
    uVar4 = CONCAT44(uVar1,s_money_005a0c40);
    pcVar3 = s_PLAYER_005a0c48;
    FUN_004c3c70();
    uVar1 = FUN_00450100();
    FUN_004c3c70(s_PLAYER_005a0c60,s_turbo_amount_005a0c50,uVar1,pcVar3,uVar4);
    uVar1 = FUN_00450280();
    uVar4 = CONCAT44(uVar1,s_radarbonus_005a0c68);
    pcVar3 = s_PLAYER_005a0c74;
    FUN_004c3c70();
    uVar1 = FUN_004502b0();
    FUN_004c3c70(s_PLAYER_005a0c90,s_checkpoint_money_005a0c7c,uVar1,pcVar3,uVar4);
    uVar1 = FUN_00450410();
    uVar4 = CONCAT44(uVar1,s_damage_005a0c98);
    pcVar3 = s_PLAYER_005a0ca0;
    FUN_004c3c70();
    FUN_004c3c70(s_PLAYER_005a0cb4,s_tracktime_005a0ca8,DAT_006fbaa0,pcVar3,uVar4);
    uVar11 = CONCAT44(DAT_006fbaa4,s_position_005a0cbc);
    pcVar3 = s_PLAYER_005a0cc8;
    FUN_004c3c70();
    puVar10 = local_428;
    uVar9 = CONCAT44(pcVar3,s_DAMAGE_MESH_005a0cd0);
    FUN_005587a3();
    uVar8 = CONCAT44(puVar10,DAT_006fbb2c);
    uVar7 = CONCAT44(DAT_006fbb28,DAT_006fbb24);
    uVar6 = CONCAT44(DAT_006fbb20,DAT_006fbb1c);
    uVar5 = CONCAT44(DAT_006fbb18,DAT_006fbb14);
    puVar10 = local_408;
    uVar4 = CONCAT44(DAT_006fbb10,s__d__d__d__d__d__d__d__d_005a0cdc);
    FUN_005587a3();
    FUN_004c3c30(s_PLAYER_005a0cf4,local_428,local_408,puVar10,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
                 uVar11);
    FUN_005587a3(local_428,s_DAMAGE_VALUE_005a0cfc);
    FUN_005587a3(local_408,s__f__f__f__f__f__f__f__f_005a0d0c,(double)DAT_006fbaf0,
                 (double)DAT_006fbaf4,0,0,0,(double)DAT_006fbb04,0,0);
    FUN_004c3c30(s_PLAYER_005a0d24,local_428,local_408);
    FUN_00426f60();
    FUN_00425300();
    FUN_004c3c70();
  }
  return;
}


/* ==== 0044b4d0 FUN_0044b4d0 ==== */

void FUN_0044b4d0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0044b4e0 FUN_0044b4e0 ==== */

void FUN_0044b4e0(void)

{
  FUN_005584e0(&LAB_0044b4f0);
  return;
}


/* ==== 0044b510 FUN_0044b510 ==== */

void FUN_0044b510(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0044b520 FUN_0044b520 ==== */

void FUN_0044b520(void)

{
  FUN_005584e0(&LAB_0044b530);
  return;
}


