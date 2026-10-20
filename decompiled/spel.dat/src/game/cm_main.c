/* spel.dat — game/cm_main.cpp: 27 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004378a0 FUN_004378a0 ==== */

void FUN_004378a0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004378b0 FUN_004378b0 ==== */

void FUN_004378b0(void)

{
  FUN_005584e0(&LAB_004378c0);
  return;
}


/* ==== 004378e0 FUN_004378e0 ==== */

void FUN_004378e0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004378f0 FUN_004378f0 ==== */

void FUN_004378f0(void)

{
  FUN_005584e0(&LAB_00437900);
  return;
}


/* ==== 00437910 FUN_00437910 ==== */

void FUN_00437910(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b0a60();
  (&DAT_006c3518)[param_1] = uVar1;
  return;
}


/* ==== 00437930 FUN_00437930 ==== */

void FUN_00437930(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b0a60();
  (&DAT_006c3518)[param_1] = uVar1;
  return;
}


/* ==== 00437950 FUN_00437950 ==== */

void FUN_00437950(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b0a60();
  (&DAT_006c3518)[param_1] = uVar1;
  return;
}


/* ==== 00437970 FUN_00437970 ==== */

void FUN_00437970(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b0a60();
  (&DAT_006c3518)[param_1] = uVar1;
  return;
}


/* ==== 00437990 FUN_00437990 ==== */

void FUN_00437990(undefined4 *param_1)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [32];
  char local_c8 [200];
  
  i = FUN_00448c90(&DAT_006fa558,s_Game_Settings_0059972c);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_e8,s__d_0059973c,4,puVar2);
  FUN_004c3d10(s_CAMS_00599740,local_e8,local_c8,199);
  i = -1;
  pcVar3 = local_c8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (i == -2) {
    FUN_004c4150(s__s__d____No__valid__ini_settings_0059976c,
                 s_C__Work_A2IV_Game_prog_cm_main_c_00599748,0x62);
  }
  i = FUN_004c3d60(local_c8,0);
  if (i != 3) {
    FUN_004c4150(s__s__d____Not_the_right_number_of_005997c0,
                 s_C__Work_A2IV_Game_prog_cm_main_c_0059979c,0x6b);
  }
  FUN_004354a0(0,&uStack_f4);
  FUN_004354a0(1,&uStack_f0);
  FUN_004354a0(2,&uStack_ec);
  *param_1 = uStack_f4;
  param_1[1] = uStack_f0;
  param_1[2] = uStack_ec;
  return;
}


/* ==== 00437a80 FUN_00437a80 ==== */

void FUN_00437a80(float param_1,float param_2,float param_3)

{
  undefined1 local_e8 [32];
  undefined1 local_c8 [200];
  
  FUN_00448c90(&DAT_006fa558);
  FUN_004c3b60();
  FUN_005587a3(local_e8,s__d_00599804,4);
  FUN_005587a3(local_c8,s__f__f__f_00599808,(double)param_1,(double)param_2,(double)param_3);
  FUN_004c3c30(s_CAMS_00599814,local_e8,local_c8);
  return;
}


/* ==== 00437b10 FUN_00437b10 ==== */

void FUN_00437b10(undefined4 *param_1)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_128;
  undefined1 auStack_124 [4];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [4];
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [4];
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 local_e8 [32];
  char local_c8 [200];
  
  i = FUN_00448c90(&DAT_006fa558,s_Game_Settings_0059981c);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_e8,s__d_0059982c,5,puVar2);
  FUN_004c3d10(s_CAMS_00599830,local_e8,local_c8,199);
  i = -1;
  pcVar4 = local_c8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (i == -2) {
    FUN_004c4150(s__s__d____No__valid__ini_settings_0059985c,
                 s_C__Work_A2IV_Game_prog_cm_main_c_00599838,0x92);
  }
  i = FUN_004c3d60(local_c8,0);
  if (i != 4) {
    FUN_004c4150(s__s__d____Not_the_right_number_of_005998b0,
                 s_C__Work_A2IV_Game_prog_cm_main_c_0059988c,0x9b);
  }
  FUN_004354a0(0,&uStack_128);
  FUN_004354a0(1,auStack_124);
  FUN_004354a0(2,auStack_120);
  FUN_004354a0(3,auStack_11c);
  FUN_005587a3(local_e8,s__d_005998e4,6);
  FUN_004c3d10(s_CAMS_005998e8,local_e8,local_c8,199);
  FUN_004c3d60(local_c8,0);
  FUN_004354a0(0,auStack_118);
  FUN_004354a0(1,auStack_114);
  FUN_004354a0(2,auStack_110);
  FUN_004354a0(3,auStack_10c);
  FUN_005587a3(local_e8,s__d_005998f0,7);
  FUN_004c3d10(s_CAMS_005998f4,local_e8,local_c8,199);
  FUN_004c3d60(local_c8,0);
  FUN_004354a0(0,auStack_108);
  FUN_004354a0(1,auStack_104);
  FUN_004354a0(2,auStack_100);
  FUN_004354a0(3,auStack_fc);
  FUN_005587a3(local_e8,s__d_005998fc,8);
  FUN_004c3d10(s_CAMS_00599900,local_e8,local_c8,199);
  FUN_004c3d60(local_c8,0);
  FUN_004354a0(0,auStack_f8);
  FUN_004354a0(1,auStack_f4);
  FUN_004354a0(2,auStack_f0);
  FUN_004354a0(3,auStack_ec);
  puVar3 = &uStack_128;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 00437d60 FUN_00437d60 ==== */

void FUN_00437d60(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,float param_13,float param_14,float param_15,
                 float param_16)

{
  undefined1 local_f0 [32];
  undefined1 local_d0 [204];
  
  FUN_00448c90(&DAT_006fa558);
  FUN_004c3b60();
  FUN_005587a3(local_f0,s__d_00599918,5);
  FUN_005587a3(local_d0,s__f__f__f__f_0059991c,(double)param_1,(double)param_2,(double)param_3,
               (double)param_4);
  FUN_004c3c30(s_CAMS_00599928,local_f0,local_d0);
  FUN_005587a3(local_f0,s__d_00599930,6);
  FUN_005587a3(local_d0,s__f__f__f__f_00599934,(double)param_5,(double)param_6,(double)param_7,
               (double)param_8);
  FUN_004c3c30(s_CAMS_00599940,local_f0,local_d0);
  FUN_005587a3(local_f0,s__d_00599948,7);
  FUN_005587a3(local_d0,s__f__f__f__f_0059994c,(double)param_9,(double)param_10,(double)param_11,
               (double)param_12);
  FUN_004c3c30(s_CAMS_00599958,local_f0,local_d0);
  FUN_005587a3(local_f0,s__d_00599960,8);
  FUN_005587a3(local_d0,s__f__f__f__f_00599964,(double)param_13,(double)param_14,(double)param_15,
               (double)param_16);
  FUN_004c3c30(s_CAMS_00599970,local_f0,local_d0);
  return;
}


/* ==== 00437f00 FUN_00437f00 ==== */

float10 FUN_00437f00(undefined4 param_1)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  char *pcVar3;
  float fStack_ec;
  undefined1 local_e8 [32];
  char local_c8 [200];
  
  i = FUN_00448c90(&DAT_006fa558,s_Game_Settings_00599978);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_e8,s__d_00599988,param_1,puVar2);
  FUN_004c3d10(s_CAMS_0059998c,local_e8,local_c8,199);
  i = -1;
  pcVar3 = local_c8;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (i == -2) {
    FUN_004c4150(s__s__d____No__valid__ini_settings_005999b8,
                 s_C__Work_A2IV_Game_prog_cm_main_c_00599994,0xf1);
  }
  i = FUN_004c3d60(local_c8,0);
  if (i != 1) {
    FUN_004c4150(s__s__d____Not_the_right_number_of_00599a0c,
                 s_C__Work_A2IV_Game_prog_cm_main_c_005999e8,0xfa);
  }
  FUN_004354a0(0,&fStack_ec);
  return (float10)fStack_ec;
}


/* ==== 00437fd0 FUN_00437fd0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437fd0(void)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_006fb950 != 0) {
    fVar2 = (float10)FUN_00437f00(0);
    _DAT_00599718 = (float)fVar2;
    fVar2 = (float10)FUN_00437f00(1);
    _DAT_0059971c = (float)fVar2;
    fVar2 = (float10)FUN_00437f00(2);
    DAT_00599720 = (float)fVar2;
    fVar2 = (float10)FUN_00437f00(3);
    _DAT_00599724 = (float)fVar2;
  }
  puVar1 = &DAT_006c3540;
  do {
    puVar1[-10] = 0;
    *puVar1 = 1;
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x6c3568);
  FUN_004c3fa0(s_Calling__init_cameras__00599a40);
  FUN_004b0a30(10);
  FUN_004c3fa0(s_Calling__init_player_camera__00599a58);
  FUN_00438d20();
  FUN_004c3fa0(s_Calling__init_start_camera__00599a78);
  FUN_00437950(1);
  FUN_004c3fa0(s_Calling__init_temp_camera__00599a98);
  FUN_004380f0(8);
  FUN_004c3fa0(s_Calling__init_ai_cockpit_camera__00599ab4);
  FUN_004381f0(9);
  FUN_004c3fa0(s_Calling__init_topview_camera__00599ad8);
  FUN_00438290(3);
  FUN_004c3fa0(s_Calling__init_tankstation_camera_00599af8);
  FUN_00437970(4);
  FUN_004c3fa0(s_Calling__init_any_camera__00599b1c);
  FUN_00437910(6);
  FUN_00437930(7);
  FUN_004c3fa0(s_Calling__add_camera__00599b38);
  DAT_006c352c = FUN_004b0a60();
  FUN_004c3fa0(s_Calling__change_active_camera__00599b50);
  FUN_00438410(0);
  FUN_004c3fa0(s_Exiting__init_game_cameras__00599b70);
  return;
}


/* ==== 004380f0 FUN_004380f0 ==== */

void FUN_004380f0(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (10 < param_1)) {
    FUN_004c4150(s__init_temp_camera__illegal_camer_00599b90,param_1,10);
  }
  iVar1 = FUN_004b0a60();
  (&DAT_006c3518)[param_1] = iVar1;
  FUN_004b1190(DAT_00719b50 + iVar1 * 0x178,
               *(undefined4 *)(DAT_005d3318 * 0xf0 + 0x24 + DAT_00715e50),0,0x41f00000,0xc2b40000);
  FUN_004b1290(DAT_00719b50 + (&DAT_006c3518)[param_1] * 0x178,
               *(undefined4 *)(DAT_005d3318 * 0xf0 + 0x24 + DAT_00715e50),0,0,0);
  return;
}


/* ==== 004381f0 FUN_004381f0 ==== */

void FUN_004381f0(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (10 < param_1)) {
    FUN_004c4150(s__init_ai_cockpit_camera__illegal_00599bc8,param_1,10);
  }
  iVar1 = FUN_004b0a60();
  (&DAT_006c3518)[param_1] = iVar1;
  FUN_004b1190(DAT_00719b50 + iVar1 * 0x178,
               *(undefined4 *)(DAT_005d3318 * 0xf0 + 0x24 + DAT_00715e50),0,0x41580000,0);
  return;
}


/* ==== 00438290 FUN_00438290 ==== */

void FUN_00438290(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 < 0) || (10 < param_1)) {
    FUN_004c4150(s__init_topview_camera__illegal_ca_00599c08,param_1,10);
  }
  iVar4 = FUN_004b0a60();
  iVar3 = DAT_0073b0d0;
  iVar2 = DAT_00715e50;
  iVar1 = DAT_006fba58;
  (&DAT_006c3518)[param_1] = iVar4;
  iVar2 = *(int *)(iVar1 * 0xf0 + 0x24 + iVar2);
  iVar1 = iVar3 + iVar2 + 0x50 + iVar2 * 0xa8;
  FUN_004b1060(DAT_00719b50 + iVar4 * 0x178,*(undefined4 *)(iVar3 + iVar2 + 0x50 + iVar2 * 0xa8),
               *(float *)(iVar1 + 4) + 15.0,*(undefined4 *)(iVar1 + 8));
  FUN_004b1190(DAT_00719b50 + (&DAT_006c3518)[param_1] * 0x178,
               *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50),0x42c80000,0x41700000,0);
  FUN_004b1290(DAT_00719b50 + (&DAT_006c3518)[param_1] * 0x178,
               *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50),0,0x41700000,0);
  return;
}


/* ==== 00438410 FUN_00438410 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438410(int param_1)

{
  if ((param_1 < 0) || (10 < param_1)) {
    FUN_004c4150(s__change_active_camera__illegal_c_00599c44,param_1,10);
  }
  switch(param_1) {
  case 0:
    DAT_006c3568 = 0;
    DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    DAT_006c3540 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    return;
  case 1:
    DAT_006c3568 = 1;
    DAT_006c3544 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    return;
  default:
    DAT_006c3568 = 0;
    return;
  case 3:
    DAT_006c3568 = 3;
    DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    _DAT_006c354c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    return;
  case 4:
    DAT_006c3568 = 4;
    DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    _DAT_006c3550 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    return;
  case 5:
    DAT_006c3568 = 5;
    DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    _DAT_006c3554 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c352c * 0x178) = 0;
    return;
  case 6:
    DAT_006c3568 = 6;
    DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    _DAT_006c3558 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    return;
  case 7:
    DAT_006c3568 = 7;
    DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    _DAT_006c355c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    return;
  case 8:
    DAT_006c3568 = 8;
    DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    _DAT_006c3560 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    return;
  case 9:
    DAT_006c3568 = 9;
    DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    _DAT_006c3564 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
    return;
  }
}


/* ==== 00438670 FUN_00438670 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438670(void)

{
  float fVar1;
  int i;
  undefined4 this_val;
  float *pfVar2;
  undefined4 *puVar3;
  uint __ftol_result;
  undefined4 *puVar4;
  float10 fVar5;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined1 local_4c [12];
  undefined4 auStack_40 [16];
  
  i = FUN_004c5e40(0x31);
  if ((i != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(DAT_006fba5c + 5);
  }
  i = FUN_004c5e40(0x32);
  if (i != 0) {
    if (DAT_006fb8a0 != 0) goto LAB_00438706;
    FUN_004390d0(0);
  }
  if (DAT_006fb8a0 == 0) {
    i = FUN_004c5e40(0x33);
    if (i == 0) {
      i = FUN_004390c0();
      this_val = DAT_00599728;
      if (i != 4) goto LAB_00438706;
    }
    else {
      i = FUN_004390c0();
      if (i == 4) goto LAB_00438706;
      DAT_00599728 = FUN_004390c0();
      this_val = 4;
    }
    FUN_004390d0(this_val);
  }
LAB_00438706:
  i = FUN_004c5e40(0x34);
  if ((i != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(3);
  }
  i = FUN_004c5e40(0x36);
  if ((i != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(6);
  }
  i = FUN_004c5e40(0x37);
  if ((i != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(7);
  }
  i = FUN_004c5e40(0x38);
  if ((i != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(8);
  }
  i = FUN_004c5e40(0x39);
  if ((i != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(9);
  }
  i = FUN_004c5e40(0x30);
  if ((i != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(10);
  }
  if (DAT_006fb950 != 0) {
    i = FUN_004c5e40(0x55);
    if ((i != 0) && (DAT_006fb8a0 == 0)) {
      FUN_004390d0(0xe);
    }
    if ((((&DAT_006c3518)[DAT_006c3568] != 7) && (DAT_006fb8a0 == 0)) && (DAT_006fb950 != 0)) {
      this_val = FUN_00469fa0(local_4c);
      pfVar2 = (float *)FUN_004701d0(this_val);
      fStack_64 = *pfVar2;
      fStack_60 = pfVar2[1];
      fStack_5c = pfVar2[2];
      fVar5 = (float10)FUN_004a6800(&DAT_007128b0);
      fStack_64 = (float)(fVar5 * (float10)3000.0 * (float10)fStack_64);
      fVar5 = (float10)FUN_004a6800(&DAT_007128b0);
      fStack_60 = (float)(fVar5 * (float10)1400.0 * (float10)fStack_60);
      puVar3 = (undefined4 *)
               FUN_004b11c0(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178,local_4c);
      uStack_58 = *puVar3;
      fStack_54 = (float)puVar3[1];
      fVar1 = fStack_54 + fStack_60;
      uStack_50 = puVar3[2];
      this_val = __ftol();
      FUN_004afe30(&fStack_70,&uStack_58,this_val);
      fStack_6c = fVar1;
      i = FUN_004c5e40(0x49);
      if (i != 0) {
        fVar1 = _DAT_0059971c + 1.0;
        fStack_70 = fVar1 * fStack_70;
        fStack_6c = fVar1 * fStack_6c;
        fStack_68 = fStack_68 * fVar1;
      }
      i = FUN_004c5e40(0x4b);
      if (i != 0) {
        fVar1 = 1.0 - _DAT_0059971c;
        fStack_70 = fVar1 * fStack_70;
        fStack_6c = fVar1 * fStack_6c;
        fStack_68 = fStack_68 * fVar1;
      }
      i = FUN_004c5e40(0x4a);
      if (i != 0) {
        fStack_70 = fStack_70 - _DAT_00599718;
      }
      i = FUN_004c5e40(0x4c);
      if (i != 0) {
        fStack_70 = _DAT_00599718 + fStack_70;
      }
      i = FUN_004c5e40(0x41);
      if (i != 0) {
        fStack_6c = _DAT_00599718 + fStack_6c;
      }
      i = FUN_004c5e40(0x5a);
      if (i != 0) {
        fStack_6c = fStack_6c - _DAT_00599718;
      }
      i = FUN_004c5e40(0x52);
      if (i != 0) {
        pfVar2 = (float *)FUN_00437990(local_4c);
        fStack_70 = *pfVar2;
        fStack_6c = pfVar2[1];
        fStack_68 = pfVar2[2];
      }
      i = FUN_004c5e40(0x54);
      if (i != 0) {
        FUN_00437a80(fStack_70,fStack_6c,fStack_68);
      }
      FUN_004b1210(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178,fStack_70,fStack_6c,
                   fStack_68);
    }
  }
  if ((&DAT_006c3518)[DAT_006c3568] == 7) {
    FUN_00439910();
  }
  puVar3 = (undefined4 *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  DAT_006c356c = FUN_004af230(&DAT_00715250,(&DAT_006c3540)[DAT_006c3568],*puVar3,puVar3[1],
                              puVar3[2]);
  (&DAT_006c3540)[DAT_006c3568] = DAT_006c356c;
  FUN_004b1380(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  i = DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178;
  puVar3 = (undefined4 *)FUN_004b3a60(auStack_40,i + 8,i + 0x54,i + 0x60,0);
  puVar4 = auStack_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = auStack_40;
  puVar4 = &DAT_0073b434;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,2,&DAT_0073b434);
  if (i != 0) {
    this_val = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x36,this_val);
  }
  i = (&DAT_006c3518)[DAT_006c3568];
  fVar1 = *(float *)(DAT_00719b50 + 0x54 + i * 0x178) - *(float *)(DAT_00719b50 + 8 + i * 0x178);
  i = DAT_00719b50 + i * 0x178;
  fStack_6c = *(float *)(i + 0x58) - *(float *)(i + 0xc);
  fStack_68 = *(float *)(i + 0x5c) - *(float *)(i + 0x10);
  fVar5 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fStack_68 * (float10)fStack_68);
  fStack_70 = (float)((float10)fVar1 / fVar5);
  fpatan((float10)fStack_68 / fVar5,(float10)fStack_70);
  __ftol_result = __ftol();
  FUN_004457d0(DAT_0073b578,*(undefined4 *)(DAT_0073b578 + (__ftol_result & DAT_005b23bc) * 4));
  return;
}


/* ==== 00438c80 FUN_00438c80 ==== */

void FUN_00438c80(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00438c90 FUN_00438c90 ==== */

void FUN_00438c90(void)

{
  FUN_005584e0(&LAB_00438ca0);
  return;
}


/* ==== 00438cc0 FUN_00438cc0 ==== */

void FUN_00438cc0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00438cd0 FUN_00438cd0 ==== */

void FUN_00438cd0(void)

{
  FUN_005584e0(&LAB_00438ce0);
  return;
}


/* ==== 00438d20 FUN_00438d20 ==== */

void FUN_00438d20(void)

{
  int iVar1;
  int iVar2;
  
  DAT_006c3518 = FUN_004b0a60();
  DAT_00599c84 = DAT_006fba58;
  iVar2 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  iVar1 = DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8;
  FUN_004b1060(DAT_00719b50 + DAT_006c3518 * 0x178,
               *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8),
               *(float *)(iVar1 + 4) + 15.0,*(undefined4 *)(iVar1 + 8));
  FUN_004b1190(DAT_00719b50 + DAT_006c3518 * 0x178,
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41a00000,0xc3160000);
  FUN_004b1290(DAT_00719b50 + DAT_006c3518 * 0x178,
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41200000,0);
  FUN_004b1380(DAT_00719b50 + DAT_006c3518 * 0x178);
  FUN_004b1110(DAT_00719b50 + DAT_006c3518 * 0x178,DAT_006c3578,DAT_006c357c,DAT_006c3580);
  *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
  DAT_00599c80 = 1;
  FUN_004390d0(1);
  return;
}


/* ==== 00438f00 FUN_00438f00 ==== */

void FUN_00438f00(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_00599c84 = param_1;
  FUN_004b1260(DAT_00719b50 + DAT_006c3518 * 0x178);
  FUN_004b1310(DAT_00719b50 + DAT_006c3518 * 0x178);
  iVar2 = *(int *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50);
  iVar1 = DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8;
  FUN_004b1060(DAT_00719b50 + DAT_006c3518 * 0x178,
               *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8),
               *(float *)(iVar1 + 4) + 15.0,*(undefined4 *)(iVar1 + 8));
  FUN_004b1190(DAT_00719b50 + DAT_006c3518 * 0x178,
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41a00000,0xc3160000);
  FUN_004b1290(DAT_00719b50 + DAT_006c3518 * 0x178,
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41200000,0);
  DAT_006c356c = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
  DAT_006c3540 = *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x34 + DAT_00715e50);
  FUN_004390d0(DAT_00599c80);
  return;
}


/* ==== 004390c0 FUN_004390c0 ==== */

undefined4 FUN_004390c0(void)

{
  return DAT_00599c80;
}


/* ==== 004390d0 FUN_004390d0 ==== */

void FUN_004390d0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = 0;
  uVar4 = 0x41200000;
  uVar5 = 0;
  DAT_00599c80 = param_1;
  switch(param_1) {
  case 0:
    uVar1 = 0x41f00000;
    uVar2 = 0xc2a00000;
    break;
  case 1:
    FUN_004b1190(DAT_00719b50 + DAT_006c3518 * 0x178,
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41c80000,0xc2520000)
    ;
    FUN_00438410(0);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
    FUN_004b1290(DAT_00719b50 + DAT_006c3518 * 0x178,
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),uVar3,uVar4,uVar5);
    *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 1;
    FUN_004b1110(DAT_00719b50 + DAT_006c3518 * 0x178,DAT_006c3578,DAT_006c357c,DAT_006c3580);
    goto LAB_00439508;
  case 2:
    uVar1 = 0x42180000;
    uVar2 = 0xc25c0000;
    break;
  case 3:
    FUN_004b1210(DAT_00719b50 + DAT_006c3518 * 0x178,0,0x41780000,0x41400000);
    FUN_00438410(0);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 1;
    FUN_004b1310(DAT_00719b50 + DAT_006c3518 * 0x178);
    *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 0;
    FUN_004b1150(DAT_00719b50 + DAT_006c3518 * 0x178);
    goto LAB_00439508;
  case 4:
    FUN_004b1210(DAT_00719b50 + DAT_006c3518 * 0x178,0,0x41a00000,0x42960000);
    FUN_00438410(0);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
    FUN_004b1290(DAT_00719b50 + DAT_006c3518 * 0x178,
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),uVar3,uVar4,uVar5);
    *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 1;
    goto LAB_00439508;
  case 5:
  case 6:
  case 7:
  case 9:
    FUN_004b1210(DAT_00719b50 + DAT_006c3518 * 0x178,0,0x41d00000,0xc2040000);
    goto LAB_004395ea;
  case 8:
  case 0xb:
    uVar1 = 0x41d00000;
    uVar2 = 0xc2040000;
    goto LAB_0043959f;
  case 10:
    uVar1 = 0x42040000;
    uVar2 = 0xc2040000;
    goto LAB_0043959f;
  case 0xc:
    uVar1 = 0x42200000;
    uVar2 = 0xc2200000;
LAB_0043959f:
    FUN_004b1190(DAT_00719b50 + DAT_006c3518 * 0x178,
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,uVar1,uVar2);
LAB_004395ea:
    FUN_00438410(0);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
    FUN_004b1290(DAT_00719b50 + DAT_006c3518 * 0x178,
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),uVar3,uVar4,uVar5);
    *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 1;
    FUN_004b1110(DAT_00719b50 + DAT_006c3518 * 0x178,DAT_006c3578,DAT_006c357c,DAT_006c3580);
    *(undefined4 *)(DAT_00719b50 + DAT_006c3518 * 0x178) = 1;
    return;
  case 0xd:
    uVar1 = 0x42340000;
    uVar2 = 0xc25c0000;
    break;
  case 0xe:
    FUN_004397f0(0,0,0,0,0x41200000,0);
  default:
    return;
  }
  FUN_004b1210(DAT_00719b50 + DAT_006c3518 * 0x178,0,uVar1,uVar2);
  FUN_00438410(0);
  *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
  FUN_004b1290(DAT_00719b50 + DAT_006c3518 * 0x178,
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),uVar3,uVar4,uVar5);
  *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 1;
  FUN_004b1110(DAT_00719b50 + DAT_006c3518 * 0x178,DAT_006c3578,DAT_006c357c,DAT_006c3580);
LAB_00439508:
  *(undefined4 *)(DAT_00719b50 + DAT_006c3518 * 0x178) = 0xffffffff;
  return;
}


