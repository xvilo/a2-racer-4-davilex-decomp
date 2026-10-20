/* spel.dat — game/gm_body.cpp: 36 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004472c0 FUN_004472c0 ==== */

void FUN_004472c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004472d0 FUN_004472d0 ==== */

void FUN_004472d0(void)

{
  FUN_005584e0(&LAB_004472e0);
  return;
}


/* ==== 00447300 FUN_00447300 ==== */

void FUN_00447300(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00447310 FUN_00447310 ==== */

void FUN_00447310(void)

{
  FUN_005584e0(&LAB_00447320);
  return;
}


/* ==== 00447330 skelet2d_set_resolution ==== */

void skelet2d_set_resolution(undefined4 param_1)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059dd20,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059dcfc,0x42,
                 s_skelet2d_set_resolution___0059dce0);
    DAT_0059db38 = param_1;
    return;
  }
  DAT_0059db38 = param_1;
  return;
}


/* ==== 00447370 FUN_00447370 ==== */

undefined4 FUN_00447370(void)

{
  return DAT_0059db38;
}


/* ==== 00447380 skelet2d_set_program_name ==== */

void skelet2d_set_program_name(char *source)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059ddb4,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059dd90,0x5a,
                 s_skelet2d_set_program_name___0059dd74);
  }
  _strncpy(s_Davilex_Game_0059db3c,source,0x1f);
  DAT_0059db5c = 0;
  return;
}


/* ==== 004473d0 skelet2d_set_image_filename ==== */

void skelet2d_set_image_filename(char *source)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint i;
  uint j;
  int k;
  char *pcVar4;
  char *pcVar5;
  
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059de4c,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059de28,0x72,
                 s_skelet2d_set_image_filename___0059de08);
  }
  _strncpy((char *)&DAT_0059db6d,source,8);
  i = 0xffffffff;
  pcVar4 = (char *)&DAT_0059db6d;
  do {
    pcVar5 = pcVar4;
    if (i == 0) break;
    i = i - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar4 = pcVar5 + -i;
  pcVar5 = (char *)&DAT_0059db5d;
  for (j = i >> 2; uVar3 = DAT_0059dea8, j != 0; j = j - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (i = i & 3; cVar1 = DAT_0059dea4, i != 0; i = i - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  PTR_DAT_0059db76._0_1_ = 0;
  PTR_DAT_0059db66._0_1_ = 0;
  k = -1;
  pcVar4 = (char *)&DAT_0059db6d;
  do {
    pcVar5 = pcVar4;
    if (k == 0) break;
    k = k + -1;
    pcVar5 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar2 != '\0');
  *(undefined4 *)(pcVar5 + -1) = DAT_0059dea0;
  pcVar5[3] = cVar1;
  cVar1 = DAT_0059deac;
  k = -1;
  pcVar4 = (char *)&DAT_0059db5d;
  do {
    pcVar5 = pcVar4;
    if (k == 0) break;
    k = k + -1;
    pcVar5 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar2 != '\0');
  *(undefined4 *)(pcVar5 + -1) = uVar3;
  pcVar5[3] = cVar1;
  return;
}


/* ==== 00447490 skelet2d_set_mouse_type ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void skelet2d_set_mouse_type(int param_1)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059def0,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059decc,0x90,
                 s_skelet2d_set_mouse_type___0059deb0);
  }
  if ((param_1 < 1) || (2 < param_1)) {
    FUN_004c4150(s__s__d____Function___s___Illegal_m_0059df68,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059df44,0x95,
                 s_skelet2d_set_mouse_type___0059deb0,param_1,1,2);
  }
  _DAT_0059db80 = param_1;
  return;
}


/* ==== 00447500 skelet2d_set_sound ==== */

void skelet2d_set_sound(int param_1)

{
  if ((param_1 < 0) || (1 < param_1)) {
    FUN_004c4150(s__s__d____Function___s___Illegal_s_0059dffc,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059dfd8,0xb4,s_skelet2d_set_sound___0059dfc0,
                 param_1,0,1);
  }
  DAT_0059db84 = param_1;
  return;
}


/* ==== 00447540 FUN_00447540 ==== */

undefined4 FUN_00447540(void)

{
  return DAT_0059db84;
}


/* ==== 00447550 skelet2d_set_sound_buffers ==== */

void skelet2d_set_sound_buffers(undefined4 param_1)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059e090,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e06c,0xcb,
                 s_skelet2d_set_sound_buffers___0059e04c);
    DAT_0059db88 = param_1;
    return;
  }
  DAT_0059db88 = param_1;
  return;
}


/* ==== 00447590 FUN_00447590 ==== */

undefined4 FUN_00447590(void)

{
  return DAT_0059db88;
}


/* ==== 004475a0 FUN_004475a0 ==== */

void FUN_004475a0(undefined4 param_1)

{
  DAT_0059dbb8 = param_1;
  return;
}


/* ==== 004475b0 FUN_004475b0 ==== */

undefined4 FUN_004475b0(void)

{
  return DAT_0059dbb8;
}


/* ==== 004475c0 FUN_004475c0 ==== */

void FUN_004475c0(undefined4 param_1)

{
  DAT_0059dbbc = param_1;
  return;
}


/* ==== 004475d0 FUN_004475d0 ==== */

undefined4 FUN_004475d0(void)

{
  return DAT_0059dbbc;
}


/* ==== 004475e0 FUN_004475e0 ==== */

void FUN_004475e0(undefined4 param_1)

{
  DAT_0059dbc0 = param_1;
  return;
}


/* ==== 004475f0 FUN_004475f0 ==== */

undefined4 FUN_004475f0(void)

{
  return DAT_0059dbc0;
}


/* ==== 00447600 skelet2d_set_palette_filename ==== */

void skelet2d_set_palette_filename(char *source,char *source_2)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059e180,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e15c,0x124,
                 s_skelet2d_set_palette_filename___0059e13c);
  }
  _strncpy(s_Pallow_pcx_0059db8c,source,0xc);
  _strncpy(s_Palhigh_pcx_0059db9c,source_2,0xc);
  return;
}


/* ==== 00447660 skelet2d_set_show_palette ==== */

void skelet2d_set_show_palette(int param_1)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059e214,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e1f0,0x13c,
                 s_skelet2d_set_show_palette___0059e1d4);
  }
  if ((param_1 < 0) || (1 < param_1)) {
    FUN_004c4150(s__s__d____Function___s___Illegal_s_0059e28c,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e268,0x141,
                 s_skelet2d_set_show_palette___0059e1d4,param_1,0,1);
  }
  DAT_0059dbac = param_1;
  return;
}


/* ==== 004476d0 skelet2d_set_debug ==== */

void skelet2d_set_debug(int param_1)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059e318,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e2f4,0x156,s_skelet2d_set_debug___0059e2dc);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_004c4150(s__s__d____Function___s___Illegal_d_0059e390,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e36c,0x15b,s_skelet2d_set_debug___0059e2dc,
                 param_1,0,1);
  }
  DAT_0059dbc4 = param_1;
  return;
}


/* ==== 00447730 FUN_00447730 ==== */

undefined4 FUN_00447730(void)

{
  return DAT_0059dbc4;
}


/* ==== 00447740 skelet2d_set_windowed ==== */

void skelet2d_set_windowed(int param_1)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059e41c,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e3f8,0x16f,
                 s_skelet2d_set_windowed___0059e3e0);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_004c4150(s__s__d____Function___s___Illegal_d_0059e494,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e470,0x174,
                 s_skelet2d_set_windowed___0059e3e0,param_1,0,1);
  }
  DAT_0059dbc8 = param_1;
  return;
}


/* ==== 004477a0 FUN_004477a0 ==== */

undefined4 FUN_004477a0(void)

{
  return DAT_0059dbc8;
}


/* ==== 004477b0 skelet2d_set_renderfocus ==== */

void skelet2d_set_renderfocus(int param_1)

{
  if (DAT_0059dbb0 == 1) {
    FUN_004c4150(s__s__d____Function___s___Unable_t_0059e524,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e500,0x18a,
                 s_skelet2d_set_renderfocus___0059e4e4);
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
      FUN_004c4150(s__s__d____Function___s___Illegal_p_0059e59c,
                   s_C__Work_A2IV_Game_prog_gm_body_c_0059e578,0x196,
                   s_skelet2d_set_renderfocus___0059e4e4,param_1);
      return;
    }
    DAT_0059dbb4 = 2;
    return;
  }
  DAT_0059dbb4 = 1;
  return;
}


/* ==== 00447820 FUN_00447820 ==== */

undefined4 FUN_00447820(void)

{
  return DAT_0059dbb4;
}


/* ==== 00447830 FUN_00447830 ==== */

void FUN_00447830(void)

{
  if ((DAT_0059dbcc == -1) || (0 < DAT_0059dbcc)) {
    FUN_004c4330(2,4,0);
    FUN_004cce20(100);
    FUN_004ccea0(&DAT_0059dbd0,&DAT_0059dbe0,&DAT_006fa3d8);
  }
  return;
}


/* ==== 00447870 FUN_00447870 ==== */

undefined4 FUN_00447870(void)

{
  undefined4 uVar1;
  
  FUN_004c3fa0(s_set_xvga_vars_allowmodex_0059e5e4);
  FUN_004c4330(1,0x40,1);
  FUN_004c3fa0(s_set_xvga_vars_RESOLUTION_0059e600);
  switch(DAT_0059db38) {
  case 0:
    FUN_004c4330(2,0,0);
    FUN_004c4330(0,0,0);
    return 0;
  case 1:
    FUN_004c4330(2,0,0);
    FUN_004c4330(0,3,0);
    return 0;
  case 2:
    FUN_004c4330(2,0,0);
    FUN_004c4330(0,9,0);
    return 1;
  case 3:
    FUN_004c4330(2,1,0);
    uVar1 = 9;
    break;
  case 4:
    FUN_004c4330(2,1,0);
    uVar1 = 10;
    break;
  case 5:
    FUN_004c4330(2,0,0);
    FUN_004c4330(0,6,0);
    FUN_004c0450(1);
    return 1;
  case 6:
    FUN_004c4330(2,1,0);
    uVar1 = 6;
    break;
  case 7:
    FUN_004c4330(2,1,0);
    uVar1 = 0xb;
    break;
  case 8:
    FUN_004c4330(2,1,0);
    uVar1 = 0xc;
    break;
  case 9:
    FUN_004c4330(2,1,0);
    uVar1 = 0xd;
    break;
  default:
    FUN_004c4150(s__s__d____Function___s___Illegal_r_0059e640,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e61c,0x227,s_skelet_set_resolutie_0059e5cc,
                 DAT_0059db38);
    return 0;
  }
  FUN_004c4330(0,uVar1,0);
  DAT_0059dbb4 = 1;
  FUN_00447830();
  return 1;
}


/* ==== 00447a00 skelet2d_init_2d_lib ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void skelet2d_init_2d_lib(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_006fb93c != 0) {
    FUN_004c7ed0(1);
  }
  iVar1 = FUN_004477a0();
  if (iVar1 != 0) {
    FUN_004c3f60(1);
  }
  FUN_004c3fa0(s_init_xvga_lib_0059e688);
  iVar1 = FUN_004c55c0(param_1,param_2,s_Davilex_Entertainment_0059e698,s_Davilex_Game_0059db3c);
  if (iVar1 == 0) {
    FUN_004c3fa0(s_error___couldn_t_initialize_prog_0059e6b0);
    FUN_004c4150(s__s__d____Function___s____init_xv_0059e6fc,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e6d8,0x244,s_skelet2d_init_2d_lib___0059e670
                );
  }
  _DAT_006fa3d4 = param_1;
  return;
}


/* ==== 00447a80 FUN_00447a80 ==== */

void FUN_00447a80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  byte local_21c [12];
  undefined1 local_210 [4];
  int local_20c;
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  FUN_005587a3(local_104,s_x___s_0059e730,param_2);
  local_104[0] = DAT_00740dec;
  FUN_004c3fa0(s__Looking_for_file___s__and_path___0059e738,param_2,local_104);
  iVar1 = FUN_005590ff(local_104,local_21c);
  if (iVar1 == -1) {
    pcVar3 = s__Check_file_not_found__0059e760;
  }
  else {
    FUN_004c3fa0(s___s_file_info__0059e778,param_2);
    FUN_004c3fa0(s_RDO_HID_SYS_ARC_FILE_DATE__25c_S_0059e78c,0x20);
    FUN_004c3fa0(s____________________________25c___0059e7bc,0x20);
    pcVar3 = s_Y_0059e7ec;
    if ((local_21c[0] & 1) == 0) {
      pcVar3 = s_N_0059e7f4;
    }
    FUN_004c3fa0(pcVar3);
    pcVar3 = s_Y_0059e7fc;
    if ((local_21c[0] & 4) == 0) {
      pcVar3 = s_N_0059e804;
    }
    FUN_004c3fa0(pcVar3);
    pcVar3 = s_Y_0059e80c;
    if ((local_21c[0] & 2) == 0) {
      pcVar3 = s_N_0059e814;
    }
    FUN_004c3fa0(pcVar3);
    pcVar3 = s_Y_0059e81c;
    if ((local_21c[0] & 0x20) == 0) {
      pcVar3 = s_N_0059e824;
    }
    FUN_004c3fa0(pcVar3);
    uVar2 = FUN_0055924c(local_210,local_20c);
    FUN_004c3fa0(s___12s___24s__9ld_0059e82c,local_208,uVar2);
    if (param_1 == local_20c) {
      pcVar3 = s__CD_check_succeeded___0059e840;
    }
    else {
      pcVar3 = s__CD_check_failed___0059e858;
    }
  }
  FUN_004c3fa0(pcVar3);
  FUN_005591c9(iVar1);
  return;
}


/* ==== 00447be0 FUN_00447be0 ==== */

void FUN_00447be0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int i;
  char *pcVar6;
  char local_308 [256];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  iVar2 = FUN_00458b90(0x20);
  FUN_004cd370(&DAT_006fd14c + iVar2 * 0x100);
  FUN_004cd3b0(s__DATA_0059e874,s_rcs_img_0059e86c);
  FUN_004c3fa0(s_init_fileio_0059e87c);
  uVar3 = FUN_004cd4a0(local_208,&DAT_0059db6d);
  uVar4 = FUN_004cd4a0(local_104,&DAT_0059db5d);
  FUN_004c5e90(uVar4,uVar3);
  iVar2 = FUN_00448c90(&DAT_006fa558,s_Game_Settings_0059e88c);
  puVar5 = *(undefined1 **)(iVar2 + 4);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0057629c;
  }
  FUN_004c3b60();
  iVar2 = FUN_004c3cd0(s_CDCHECK_0059e8a4,s_SIZE_0059e89c,puVar5);
  FUN_004c3d10(s_CDCHECK_0059e8b4,s_NAME_0059e8ac,local_308,199);
  if (iVar2 != 0) {
    i = -1;
    pcVar6 = local_308;
    do {
      if (i == 0) break;
      i = i + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (i != -2) {
      FUN_004c3fa0(s__Checking_cdrom__0059e8bc);
      FUN_00447a80(iVar2,local_308);
      return;
    }
  }
  FUN_004c3fa0(s__Not_checking_cdrom__0059e8d0);
  return;
}


/* ==== 00447cf0 FUN_00447cf0 ==== */

void FUN_00447cf0(void)

{
  return;
}


/* ==== 00447d00 FUN_00447d00 ==== */

void FUN_00447d00(void)

{
  return;
}


/* ==== 00447d10 FUN_00447d10 ==== */

void FUN_00447d10(void)

{
  char *pcVar1;
  
  switch(DAT_0059db38) {
  case 0:
  case 1:
  case 2:
  case 5:
    FUN_004cab50(s_Pallow_pcx_0059db8c,1);
    pcVar1 = s_loading_lowres_pallet__s_0059e8e8;
    break;
  case 3:
  case 4:
    FUN_004cab50(s_Palhigh_pcx_0059db9c,1);
    pcVar1 = s_loading_hires_pallet__s_0059e904;
    break;
  default:
    goto switchD_00447d1a_default;
  }
  FUN_004c3fa0(pcVar1,s_Pallow_pcx_0059db8c);
switchD_00447d1a_default:
  FUN_004c3fa0(s_Locking_Pallette_0059e920);
  FUN_004c9e70(DAT_007409f0,0,0xff);
  FUN_004c9ff0(DAT_007409f0,0,0xff,0x40,1);
  return;
}


/* ==== 00447db0 FUN_00447db0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447db0(undefined4 param_1)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_140 [32];
  char local_120 [32];
  char local_100 [256];
  
  i = FUN_00448c90(&DAT_006fa558,s_Game_Settings_0059e96c);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  uVar3 = FUN_004c3cd0(s_ETAPPE_0059e964,s_ETAPPE_0059e97c,puVar2);
  i = FUN_00448c90(&DAT_006fa558,param_1);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  uVar4 = FUN_004c3cd0(s_PROGRAM_0059e934,s_RESOLUTION_0059e984,puVar2);
  skelet2d_set_resolution(uVar4);
  FUN_004c3d10(s_PROGRAM_0059e934,s_NAME_0059e990,local_140,0x1f);
  skelet2d_set_program_name(local_140);
  uVar4 = FUN_004c3cd0(s_PROGRAM_0059e934,s_FOCUS_0059e998);
  skelet2d_set_renderfocus(uVar4);
  uVar4 = FUN_004c3cd0(s_PROGRAM_0059e934,s_WINDOWED_0059e9a0);
  skelet2d_set_windowed(uVar4);
  uVar4 = FUN_004c3cd0(s_MOUSE_0059e95c,s_TYPE_0059e9ac);
  skelet2d_set_mouse_type(uVar4);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_BUFFERS_0059e9b4);
  skelet2d_set_sound_buffers(uVar4);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_ON_0059e9bc);
  skelet2d_set_sound(uVar4);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_MUSICVOLUME_0059e9c0);
  FUN_004475a0(uVar4);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_SFXVOLUME_0059e9cc);
  FUN_004475c0(uVar4);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_POLICEVOLUME_0059e9d8);
  FUN_004475e0(uVar4);
  FUN_004c3d10(&PTR_LAB_0059e958,s_RCSFILE_0059e9e8,local_140,0x1f);
  skelet2d_set_image_filename(local_140);
  FUN_005587a3(local_120,s_etappe_d_0059e9f0,uVar3);
  FUN_004c3d10(s_PALET_0059e950,local_120,local_100,199);
  i = FUN_004c3d60(local_100,0);
  if (i != 2) {
    FUN_004c4150(s__load_palette_info___s__d____Inv_0059ea20,
                 s_C__Work_A2IV_Game_prog_gm_body_c_0059e9fc,0x327);
  }
  FUN_004c3f10(0,local_140,0xc);
  FUN_004c3f10(1,local_120,0xc);
  skelet2d_set_palette_filename(local_140,local_120);
  FUN_004c3fa0(s_etappe_nummer_for_palet____d___s_0059ea64,uVar3,local_140,local_120);
  uVar3 = FUN_004c3cd0(s_PALET_0059e950,s_SHOW_0059ea8c);
  skelet2d_set_show_palette(uVar3);
  uVar3 = FUN_004c3cd0(s_HELPDESK_0059e944,s_DEBUGON_0059ea94);
  skelet2d_set_debug(uVar3);
  FUN_004c3d10(s_DIRECTX_0059eaa4,s_INDEX_0059ea9c,local_100,199);
  FUN_004c3d60(local_100,0);
  DAT_0059dbcc = FUN_004c3ec0(0);
  FUN_004c3d10(s_DIRECTX_0059eab4,s_NAME_0059eaac,&DAT_0059dbe0,199);
  FUN_004c3d10(s_DIRECTX_0059eac4,s_GUID_0059eabc,local_100,199);
  i = -1;
  pcVar5 = local_100;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (i != -2) {
    FUN_004c3d60(local_100,0);
    _DAT_0059dbd0 = FUN_004c3ec0(0);
    _DAT_0059dbd4 = FUN_004c3ec0(1);
    _DAT_0059dbd6 = FUN_004c3ec0(2);
    DAT_0059dbd8 = FUN_004c3ec0(3);
    DAT_0059dbd9 = FUN_004c3ec0(4);
    DAT_0059dbda = FUN_004c3ec0(5);
    DAT_0059dbdb = FUN_004c3ec0(6);
    DAT_0059dbdc = FUN_004c3ec0(7);
    DAT_0059dbdd = FUN_004c3ec0(8);
    DAT_0059dbde = FUN_004c3ec0(9);
    DAT_0059dbdf = FUN_004c3ec0(10);
  }
  return;
}


