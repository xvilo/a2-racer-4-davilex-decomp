/* spel.dat — game/gm_init.cpp: 24 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0044b570 FUN_0044b570 ==== */

void FUN_0044b570(void)

{
  int i;
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined *local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined4 local_1b0;
  char local_1ac [4];
  char local_1a8 [4];
  char local_1a4 [4];
  char local_1a0;
  undefined4 local_19f;
  undefined4 local_19b;
  undefined4 local_197;
  undefined4 local_193;
  undefined1 local_18f;
  undefined4 local_18c;
  char local_188 [4];
  char local_184 [4];
  char local_180 [2];
  undefined4 local_17e;
  undefined4 local_17a;
  undefined4 local_176;
  undefined4 local_172;
  undefined4 local_16e;
  undefined4 local_168;
  char local_164 [4];
  char local_160 [4];
  char local_15c [2];
  undefined4 local_15a;
  undefined4 local_156;
  undefined4 local_152;
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_144;
  char local_140 [4];
  char local_13c [4];
  char local_138 [4];
  char local_134;
  undefined4 local_133;
  undefined4 local_12f;
  undefined4 local_12b;
  undefined4 local_127;
  undefined1 local_123;
  undefined4 local_120;
  char local_11c [4];
  char local_118 [4];
  char local_114 [4];
  char local_110;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined4 local_107;
  undefined4 local_103;
  undefined1 local_ff;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  char local_d4 [4];
  char local_d0 [4];
  char local_cc [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined4 local_ac [7];
  undefined4 local_90;
  char local_8c [4];
  char local_88 [4];
  char local_84;
  undefined4 local_83;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  undefined1 local_6f;
  undefined4 local_6c;
  char local_68 [4];
  char local_64 [4];
  char local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  char local_44 [4];
  char local_40 [4];
  char local_3c;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined1 local_27;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_1b [6];
  
  local_1cc = DAT_005a0fc8;
  local_1c0 = 0;
  local_1bc = 0;
  local_1d0 = DAT_005a0fc4;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1a4 = (char  [4])s_BOTHSRCALPHA_005a0fd4._8_4_;
  local_1c8 = DAT_005a0fcc;
  local_188 = (char  [4])s_DESTALPHA_005a0fe4._0_4_;
  local_1c4 = PTR_LAB_005a0fd0;
  local_1ac = (char  [4])s_BOTHSRCALPHA_005a0fd4._0_4_;
  local_17e = 0;
  local_1a8 = (char  [4])s_BOTHSRCALPHA_005a0fd4._4_4_;
  local_1a0 = s_BOTHSRCALPHA_005a0fd4[0xc];
  local_17a = 0;
  local_19f = 0;
  local_176 = 0;
  local_184 = (char  [4])s_DESTALPHA_005a0fe4._4_4_;
  local_19b = 0;
  local_172 = 0;
  local_197 = 0;
  local_16e = 0;
  local_164 = (char  [4])s_DESTCOLOR_005a0ff0._0_4_;
  local_193 = 0;
  local_15c = (char  [2])s_DESTCOLOR_005a0ff0._8_2_;
  local_15a = 0;
  local_18f = 0;
  local_156 = 0;
  local_13c = (char  [4])s_INVDESTALPHA_005a0ffc._4_4_;
  local_180 = (char  [2])s_DESTALPHA_005a0fe4._8_2_;
  local_152 = 0;
  local_14e = 0;
  local_133 = 0;
  local_160 = (char  [4])s_DESTCOLOR_005a0ff0._4_4_;
  local_14a = 0;
  local_12f = 0;
  local_140 = (char  [4])s_INVDESTALPHA_005a0ffc._0_4_;
  local_12b = 0;
  local_138 = (char  [4])s_INVDESTALPHA_005a0ffc._8_4_;
  local_127 = 0;
  local_134 = s_INVDESTALPHA_005a0ffc[0xc];
  local_123 = 0;
  local_11c = (char  [4])s_INVDESTCOLOR_005a100c._0_4_;
  local_118 = (char  [4])s_INVDESTCOLOR_005a100c._4_4_;
  local_1b0 = 0x800;
  local_18c = 0x40;
  local_168 = 0x100;
  local_144 = 0x80;
  local_120 = 0x200;
  local_114 = (char  [4])s_INVDESTCOLOR_005a100c._8_4_;
  local_110 = s_INVDESTCOLOR_005a100c[0xc];
  local_10f = 0;
  local_f8 = DAT_005a101c;
  local_10b = 0;
  local_107 = 0;
  local_f4 = DAT_005a1020;
  local_103 = 0;
  local_ec = 0;
  local_ff = 0;
  local_e8 = 0;
  local_d4 = (char  [4])s_INVSRCCOLOR_005a1028._0_4_;
  local_e4 = 0;
  local_f0 = PTR_LAB_005a1024;
  local_c8 = 0;
  local_e0 = 0;
  local_c4 = 0;
  local_dc = 0;
  local_d0 = (char  [4])s_INVSRCCOLOR_005a1028._4_4_;
  local_c0 = 0;
  local_cc = (char  [4])s_INVSRCCOLOR_005a1028._8_4_;
  local_bc = 0;
  local_b0 = PTR_LAB_005a1034;
  local_fc = 0x20;
  local_d8 = 8;
  local_b8 = 0;
  local_b4 = 2;
  puVar1 = local_ac;
  for (i = 6; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0;
  local_8c = (char  [4])s_SRCALPHA_005a1038._0_4_;
  local_84 = s_SRCALPHA_005a1038[8];
  local_88 = (char  [4])s_SRCALPHA_005a1038._4_4_;
  local_83 = 0;
  local_64 = (char  [4])s_SRCALPHASAT_005a1044._4_4_;
  local_7f = 0;
  local_68 = (char  [4])s_SRCALPHASAT_005a1044._0_4_;
  local_44 = (char  [4])s_SRCCOLOR_005a1050._0_4_;
  local_7b = 0;
  local_5c = 0;
  local_77 = 0;
  local_3b = 0;
  local_58 = 0;
  local_73 = 0;
  local_37 = 0;
  local_54 = 0;
  local_6f = 0;
  local_33 = 0;
  local_50 = 0;
  local_2f = 0;
  local_60 = (char  [4])s_SRCALPHASAT_005a1044._8_4_;
  local_4c = 0;
  local_2b = 0;
  local_90 = 0x10;
  local_6c = 0x400;
  local_48 = 4;
  local_40 = (char  [4])s_SRCCOLOR_005a1050._4_4_;
  local_3c = s_SRCCOLOR_005a1050[8];
  local_27 = 0;
  local_24 = 1;
  local_20 = DAT_005a105c;
  local_1c = DAT_005a1060;
  puVar1 = local_1b;
  for (i = 6; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 *)puVar1 = 0;
  i = FUN_00447730();
  if (i != 0) {
    puVar1 = &local_1d0;
    i = 0xd;
    do {
      if ((puVar1[-1] & DAT_006fb928) == 0) {
        pcVar2 = s__s_source_blend_mode_not_support_005a1088;
      }
      else {
        pcVar2 = s__s_source_blend_mode_supported__005a1064;
      }
      FUN_004c3fa0(pcVar2,puVar1);
      if ((puVar1[-1] & DAT_006fb92c) == 0) {
        pcVar2 = s__s_destination_blend_mode_not_su_005a10d8;
      }
      else {
        pcVar2 = s__s_destination_blend_mode_suppor_005a10b0;
      }
      FUN_004c3fa0(pcVar2,puVar1);
      puVar1 = puVar1 + 9;
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 0044b9d0 FUN_0044b9d0 ==== */

undefined4 FUN_0044b9d0(void)

{
  int i;
  undefined4 *puVar1;
  undefined4 local_198 [26];
  int iStack_130;
  int iStack_12c;
  undefined4 local_cc [51];
  
  if (DAT_006fb8d0 == 0) {
    return 0;
  }
  FUN_004c3fa0(s_Checking_alpha_blending_capabali_005a1104);
  puVar1 = local_198;
  for (i = 0x33; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = local_cc;
  for (i = 0x33; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_198[0] = 0xcc;
  local_cc[0] = 0xcc;
  i = (**(code **)(*DAT_0073b4b4 + 0xc))(DAT_0073b4b4,local_198,local_cc);
  if (i != 0) {
    FUN_004c3fa0(s_Can_t_get_alpha_caps__alpha_blen_005a1130);
    return 0;
  }
  if ((iStack_130 == 0) && (iStack_12c == 0)) {
    FUN_004c3fa0(s_No_source_or_destination_alpha_b_005a1160);
    return 0;
  }
  DAT_006fb928 = iStack_130;
  DAT_006fb92c = iStack_12c;
  FUN_004c3fa0(s_Alpha_blending_supported__005a1194);
  return 1;
}


/* ==== 0044baa0 FUN_0044baa0 ==== */

void FUN_0044baa0(void)

{
  int iVar1;
  
  if (DAT_006fb8d0 != 0) {
    iVar1 = FUN_0044b9d0();
    if (iVar1 != 0) {
      FUN_0044b570();
      return;
    }
  }
  DAT_006fb940 = 0;
  return;
}


/* ==== 0044bad0 FUN_0044bad0 ==== */

void FUN_0044bad0(void)

{
  FUN_004b4550(0);
  FUN_004bc810(1000);
  FUN_004b2230(1000);
  FUN_004c3fa0(s_Initing_textures__d_005a11b0,100);
  if (DAT_006fb8d0 == 0) {
    FUN_004b88a0(0x40c00000);
    FUN_004b82e0(&DAT_00712130,1);
  }
  FUN_004b8b80(100);
  FUN_004c3fa0(s_loading_background_pic_005a11c8);
  if (DAT_006fb8d0 == 0) {
    FUN_004b8910((int *)s_init_pcx_005a11e0);
    if (DAT_006fb8d0 == 0) goto LAB_0044bb89;
  }
  if (DAT_006fb93c != 0) {
    FUN_004c7ed0(0);
    if (DAT_006fb93c != 0) {
      FUN_004c7ed0(1);
    }
  }
  FUN_004b8840(1);
  FUN_004c4030(0x7f00ff);
LAB_0044bb89:
  FUN_00447d10();
  if (DAT_006fb8a8 != 0) {
    FUN_004b8880(1);
  }
  FUN_004c3fa0(s_Initing_objects__d_005a11ec,0x9c4);
  FUN_004b4560(0x9c4);
  FUN_0044baa0();
  return;
}


/* ==== 0044bbd0 FUN_0044bbd0 ==== */

void FUN_0044bbd0(void)

{
  FUN_004c3fa0(s_load_anim_config_005a1200);
  FUN_00468960();
  FUN_00468ca0();
  return;
}


/* ==== 0044bbf0 FUN_0044bbf0 ==== */

void FUN_0044bbf0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  FUN_004c3fa0(s_set_game_render_states_005a1214);
  if (DAT_006fb8d0 == 0) {
    if (DAT_0073b505 == 7) goto LAB_0044bc72;
    DAT_0073b505 = 7;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x15,7);
  }
  else {
    if (DAT_0073b505 == 2) goto LAB_0044bc72;
    DAT_0073b505 = 2;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x15,2);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_004bb290(iVar1);
    FUN_004c4150(s__s__d_____BLENDING__error_settin_0059bd78,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x23f,uVar2);
  }
LAB_0044bc72:
  iVar1 = FUN_00448c90(&DAT_006fa558,s_Game_Settings_005a122c);
  puVar3 = *(undefined1 **)(iVar1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60();
  iVar1 = FUN_004c3cd0(s_OPTIONS_005a1244,s_FILTER_005a123c,puVar3);
  if (iVar1 == 2) {
    if (DAT_006fb8d0 == 0) {
      return;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  FUN_004bc200(&DAT_0073b258,uVar2);
  if ((DAT_006fb8d0 != 0) && (DAT_0073b521 != 2)) {
    DAT_0073b521 = 2;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,9,2);
    if (iVar1 != 0) {
      uVar2 = FUN_004bb290(iVar1);
      FUN_004c4150(s__s__d_____SHADE_MODE__error_sett_005a16c4,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x1c4,uVar2);
    }
  }
  return;
}


/* ==== 0044bd10 FUN_0044bd10 ==== */

void FUN_0044bd10(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00447370();
  switch(uVar1) {
  case 0:
    DAT_006fb894 = 1;
    DAT_006fb890 = 0;
    DAT_006fb8d0 = 0;
    FUN_004a6b00(0);
    return;
  case 1:
    DAT_006fb8d0 = 0;
    DAT_006fb890 = 1;
    DAT_006fb894 = 1;
    FUN_004a6b00(0);
    return;
  case 2:
  case 3:
    DAT_006fb894 = 0;
    DAT_006fb890 = 1;
    DAT_006fb8d0 = 1;
    FUN_004a6b00(1);
    return;
  case 4:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 2;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  case 5:
  case 6:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 0;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  case 7:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 3;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  case 8:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 4;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  case 9:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 5;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  default:
    FUN_004c4150(s__set_game_display___s__d____Inva_005a1270,
                 s_C__Work_A2IV_Game_prog_gm_init_c_005a124c,0x1de);
    FUN_004a6b00(DAT_006fb8d0);
    return;
  }
}


/* ==== 0044bf10 init_etappe_timer ==== */

void init_etappe_timer(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  FUN_00448610(0,(&DAT_006fa618)[DAT_006fb898 * 0x25] * 1000,0);
  iVar1 = FUN_00448c90(&DAT_006fa558,s_Game_Settings_005a12c8);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  DAT_005a3eec = FUN_004c3cd0(s_PLAYER_005a12ec,s_checkpoint_speed_005a12d8,puVar2);
  if (DAT_005a3eec < 1) {
    DAT_005a3eec = 0x32;
  }
  iVar1 = FUN_004c3cd0(s_PLAYER_005a1308,s_checkpoint_value_005a12f4);
  DAT_006fcf8c = iVar1 * DAT_005a3eec;
  if (DAT_006fcf8c < 1) {
    DAT_006fcf8c = 5000;
  }
  FUN_00448610(0xb,DAT_006fcf8c,1);
  return;
}


/* ==== 0044c030 init_color_key_bufferscreen ==== */

void init_color_key_bufferscreen(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  iVar1 = (**(code **)(*DAT_00740890 + 0x74))(DAT_00740890,8,&local_8);
  if (iVar1 != 0) {
    uVar2 = FUN_004c4400(iVar1);
    FUN_004c4150(s_Error_setting_color_key__s__005a1328,uVar2);
  }
  return;
}


/* ==== 0044c080 init_game_info ==== */

void init_game_info(void)

{
  DAT_006fb8f8 = 0;
  return;
}


/* ==== 0044c090 FUN_0044c090 ==== */

void FUN_0044c090(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [4];
  char *pcStack_5c;
  undefined1 *puStack_58;
  char *pcStack_54;
  undefined1 auStack_38 [4];
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056a4f8;
  pvStack_c = ExceptionList;
  pcStack_54 = (char *)0x44c0b1;
  ExceptionList = &pvStack_c;
  FUN_00472190();
  pcStack_54 = (char *)0x44c0b6;
  piVar2 = (int *)FUN_00472230();
  pcStack_54 = (char *)0x44c0bd;
  (**(code **)(*piVar2 + 4))();
  i = 0xffffffff;
  pcVar4 = s_Invulnerable_005a1344;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  pcStack_54 = (char *)0x1;
  pcStack_34 = (char *)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  pcStack_5c = (char *)0x44c0f0;
  puStack_58 = (undefined1 *)i;
  cVar1 = FUN_00402a00(auStack_38);
  if (cVar1 != '\0') {
    pcVar4 = s_Invulnerable_005a1344;
    pcVar5 = pcStack_34;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    puStack_58 = (undefined1 *)0x44c117;
    pcStack_54 = (char *)i;
    FUN_004029e0(auStack_38);
  }
  puStack_58 = auStack_38;
  pcStack_54 = (char *)&DAT_006fb96c;
  uStack_4 = 0;
  pcStack_5c = (char *)0x44c12e;
  FUN_00472e00(auStack_28);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  if (pcStack_34 != (char *)0x0) {
    pcStack_54 = pcStack_34 + -1;
    cVar1 = pcStack_34[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      puStack_58 = (undefined1 *)0x44c155;
      FUN_0054b339();
    }
    else {
      *pcStack_54 = cVar1 + -1;
    }
  }
  pcStack_34 = (char *)0x0;
  i = 0xffffffff;
  pcStack_5c = (char *)0x0;
  puStack_58 = (undefined1 *)0x0;
  pcStack_54 = (char *)0x0;
  uStack_30 = 0;
  pcVar4 = s_RInt_005a1354;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  uStack_2c = 0;
  cVar1 = FUN_00402a00(auStack_60,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_RInt_005a1354;
    pcVar5 = pcStack_5c;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_004029e0(auStack_60,i);
  }
  puVar6 = auStack_28;
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  iVar3 = FUN_00472230(puVar6);
  FUN_00473220(iVar3 + 0x30,puVar6);
  uStack_4 = 0xffffffff;
  pcStack_54 = (char *)0x44c1e6;
  FUN_004728d0(auStack_28);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0044c200 init_game ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_game(void)

{
  char cVar1;
  undefined4 this_val;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int i;
  int unaff_EBX;
  undefined4 *puVar7;
  undefined4 local_8c [16];
  undefined1 local_4c [52];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056a50d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_val = FUN_00497960();
  FUN_004c3fa0(s______Entry_init_game______005a135c);
  FUN_0044c090();
  FUN_004c3fa0(s_set_game_display_____005a1378);
  FUN_0044bd10();
  FUN_004c3fa0(s_ini_load_all_____005a1390);
  FUN_004492c0();
  FUN_004c3fa0(s_init_3d_library_____005a13a4);
  FUN_0044bad0();
  if (DAT_0073b4f9 < DAT_006fb978) {
    DAT_006fb978 = DAT_0073b4f9;
  }
  FUN_004c3fa0(s_Available_texture_memory___d__Re_005a13bc,DAT_006fb978,DAT_0073b4f9);
  if (DAT_006fb944 == 0) {
    DAT_0073b4f8 = 0;
  }
  if (DAT_006fb8d4 == 0) {
    DAT_005962b4 = 5;
    DAT_005962b8 = 7;
  }
  else {
    DAT_005962b4 = 10;
    DAT_005962b8 = 0xe;
  }
  FUN_004c3fa0(s_set_game_render_states_____005a13f8);
  FUN_0044bbf0();
  puVar2 = (undefined4 *)
           FUN_004b39d0(local_4c,0.5 / _DAT_006fb974,0x46435000,_DAT_006fb974 * 3.1415927);
  puVar7 = local_8c;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar2 = local_8c;
  puVar7 = &DAT_0073b3f4;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
  if (i != 0) {
    uVar3 = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x59,uVar3);
  }
  FUN_004c3fa0(s_init_game_info___005a1414);
  init_game_info();
  FUN_00468390();
  FUN_004c3fa0(s_init_2d_graphics_____005a1428);
  FUN_00440950();
  FUN_00498760(this_val);
  FUN_004c3fa0(s_init_color_key_bufferscreen___005a1440);
  init_color_key_bufferscreen();
  FUN_004c3fa0(s_init_ascii_fonts___005a1460);
  init_ascii_fonts();
  FUN_004c3fa0(s_init_moving_sky____005a1474);
  FUN_004454c0();
  FUN_004c3fa0(s_init_game_actions___005a1488);
  init_game_actions();
  FUN_004c3fa0(s_InitSndFxEngine___005a14a0);
  InitSndFxEngine();
  FUN_00426a90(&DAT_005d3460);
  uVar3 = FUN_0049df90(&stack0xffffff58,s_RACER__d_005a14b4);
  uStack_10 = 0;
  i = FUN_00424660(&DAT_005d3458,uVar3);
  uVar3 = *(undefined4 *)(i + 0x44);
  uStack_10 = 0xffffffff;
  if (unaff_EBX != 0) {
    cVar1 = *(char *)(unaff_EBX + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(unaff_EBX + -1));
    }
    else {
      *(char *)(unaff_EBX + -1) = cVar1 + -1;
    }
  }
  FUN_004489a0(&DAT_006fa558,s_CAR_SND_INI_005a14d4,s_Car_Sound_Settings_005a14c0);
  FUN_0042e990(uVar3,s_Car_Sound_Settings_005a14e0);
  FUN_0043aa70();
  FUN_004c3fa0(s_init_3d_anim_config_____005a14f4);
  FUN_0044bbd0();
  FUN_00487f20(&DAT_007126e8,0);
  FUN_004885b0(&DAT_007126e8);
  FUN_004415e0();
  FUN_004489a0(&DAT_006fa558,s_ANMTYPES_INI_005a1528,s_Animation_Definitions_005a1510);
  FUN_00469a50(&DAT_00712230,s_Animation_Definitions_005a1538);
  FUN_004c3fa0(s_check_texture_copy_____005a1550);
  FUN_004c3fa0(s_rceng_init_engine_____005a1568);
  piVar4 = (int *)FUN_00498870(this_val,&DAT_006fa59e + DAT_006fb898 * 0x94);
  uVar3 = FUN_004b26f0((int *)(&DAT_006fa59e + DAT_006fb898 * 0x94),DAT_006fb8d0,1,piVar4);
  piVar4 = (int *)FUN_00498870(this_val,&DAT_006fa5ac + DAT_006fb898 * 0x94);
  uVar5 = FUN_004b26f0((int *)(&DAT_006fa5ac + DAT_006fb898 * 0x94),DAT_006fb8d0,1,piVar4);
  piVar4 = (int *)FUN_00498870(this_val,&DAT_006fa5c8 + DAT_006fb898 * 0x94);
  uVar6 = FUN_004b26f0((int *)(&DAT_006fa5c8 + DAT_006fb898 * 0x94),DAT_006fb8d0,1,piVar4);
  piVar4 = (int *)FUN_00498870(this_val,&DAT_006fa5ba + DAT_006fb898 * 0x94);
  this_val = FUN_004b26f0((int *)(&DAT_006fa5ba + DAT_006fb898 * 0x94),DAT_006fb8d0,1,piVar4);
  FUN_004a6a10(0x9c4,uVar3,uVar5,uVar6,this_val);
  FUN_004415e0();
  FUN_004c3fa0(s_init_track_object_types___005a1580);
  init_track_object_types();
  FUN_004c3fa0(s_init_all_triggers___005a159c);
  init_all_triggers();
  FUN_004c3fa0(s_init_car_shadow_object_____005a15b4);
  FUN_0042a740();
  FUN_004446a0();
  FUN_004290f0();
  FUN_004c3fa0(s_rceng_load_etappe_____005a15d0);
  FUN_004691a0(DAT_006fb898 * 9,&DAT_006fa590 + DAT_006fb898 * 0x25);
  FUN_004a6b10(&DAT_006fa590 + DAT_006fb898 * 0x25);
  FUN_004693d0();
  if (DAT_006fb8ac == 0) {
    DAT_006fb8ac = FUN_00457ae0();
  }
  FUN_004a6af0(DAT_006fb8cc == 0);
  FUN_004c3fa0(s_init_particle_emitters___005a15e8);
  init_particle_emitters();
  if (DAT_006fb970 != 0) {
    FUN_004c3fa0(s_init_radar___005a1604);
    init_radar(&DAT_006ce000,DAT_006fb8d0,DAT_006fb964);
  }
  FUN_004c3fa0(s_init_sparks___005a1614);
  init_sparks();
  FUN_004c3fa0(s_init_clouds___005a1624);
  init_clouds();
  FUN_004c3fa0(s_init_finish_flag___005a1634);
  init_finish_flag();
  FUN_004c3fa0(s_init_skidmarks___005a1648);
  init_skidmarks();
  FUN_0043dd40();
  FUN_004415e0();
  FUN_004c3fa0(s_init_bkg____005a165c);
  FUN_0043d3c0();
  FUN_004c3fa0(s_init_game_cars_____005a166c);
  FUN_004294a0();
  this_val = FUN_0040ebe0();
  FUN_0040ec60(this_val);
  FUN_004c3fa0(s_init_3d_paths___005a1680);
  init_3d_paths();
  FUN_004c3fa0(s_init_etappe_timer___005a1694);
  init_etappe_timer();
  FUN_004415e0();
  FUN_004c3fa0(s_init_game_cameras_____005a16ac);
  FUN_00437fd0();
  FUN_004096b0();
  FUN_004a7230((float)(int)(short)(&DAT_006fa612)[DAT_006fb898 * 0x4a],
               (float)(int)(short)(&DAT_006fa614)[DAT_006fb898 * 0x4a],
               (float)(int)(short)(&DAT_006fa616)[DAT_006fb898 * 0x4a]);
  FUN_00488380(&DAT_007126e8);
  _DAT_0071277c = 1;
  FUN_00450870();
  ExceptionList = pvStack_18;
  return;
}


/* ==== 0044c810 FUN_0044c810 ==== */

void FUN_0044c810(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0044c820 FUN_0044c820 ==== */

void FUN_0044c820(void)

{
  FUN_005584e0(&LAB_0044c830);
  return;
}


/* ==== 0044c850 FUN_0044c850 ==== */

void FUN_0044c850(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0044c860 FUN_0044c860 ==== */

void FUN_0044c860(void)

{
  FUN_005584e0(&LAB_0044c870);
  return;
}


/* ==== 0044c8b0 thunk_FUN_004728d0 ==== */

void __thiscall thunk_FUN_004728d0(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_00576a1c;
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 0044c8c0 FUN_0044c8c0 ==== */

void FUN_0044c8c0(void)

{
  int iVar1;
  
  if (((&DAT_006fa61c)[DAT_006fb898 * 0x25] == 1) && (DAT_006fb8a0 == 0)) {
    iVar1 = FUN_004486a0(0xb);
    if (iVar1 != 0) {
      DAT_0059a190 = 1;
      FUN_0044cda0(6);
      return;
    }
    iVar1 = FUN_00448470(0xb);
    iVar1 = iVar1 / 1000;
    if ((iVar1 < 6) && (iVar1 != DAT_006fb988)) {
      DAT_006fb988 = iVar1;
      FUN_00450950(s_TIME_TICK_005a1918,0);
    }
  }
  return;
}


/* ==== 0044c950 FUN_0044c950 ==== */

void FUN_0044c950(void)

{
  undefined4 this_val;
  int iVar1;
  
  this_val = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
  iVar1 = FUN_00425300(this_val);
  if ((0x44a < iVar1) && (DAT_006fb8a0 == 0)) {
    DAT_0059a190 = 0;
    FUN_0044cda0(6);
  }
  return;
}


/* ==== 0044c990 FUN_0044c990 ==== */

void FUN_0044c990(void)

{
  bool bVar1;
  int i;
  int iVar2;
  
  bVar1 = false;
  i = FUN_004c5e40(0x50);
  while (i != 0) {
    i = FUN_004c5e40(0x50);
  }
  do {
    i = 0;
    do {
      iVar2 = FUN_004c5e40(i);
      if (iVar2 != 0) {
        bVar1 = true;
        iVar2 = FUN_004c5e40(i);
        while (iVar2 != 0) {
          iVar2 = FUN_004c5e40(i);
        }
      }
      i = i + 1;
    } while (i < 0x100);
  } while (!bVar1);
  return;
}


/* ==== 0044c9f0 FUN_0044c9f0 ==== */

void FUN_0044c9f0(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = FUN_004c5e40(0x1b);
  while (iVar2 != 0) {
    iVar2 = FUN_004c5e40(0x1b);
  }
  while( true ) {
    iVar2 = FUN_004c5e40(0x4a);
    if ((iVar2 != 0) || (iVar2 = FUN_004c5e40(0x59), iVar2 != 0)) {
      bVar1 = true;
      FUN_0044cda0(4);
    }
    iVar2 = FUN_004c5e40(0x1b);
    if ((iVar2 != 0) || (iVar2 = FUN_004c5e40(0x4e), iVar2 != 0)) break;
    if (bVar1) {
      return;
    }
  }
  iVar2 = FUN_004c5e40(0x1b);
  while (iVar2 != 0) {
    iVar2 = FUN_004c5e40(0x1b);
  }
  return;
}


/* ==== 0044ca80 FUN_0044ca80 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ca80(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int i;
  undefined4 local_c [3];
  
  local_c[0] = 0;
  local_c[1] = 3;
  local_c[2] = 0xb;
  uVar1 = FUN_004ce0d0(4);
  FUN_004ce030(4,0);
  puVar2 = local_c;
  i = 3;
  do {
    FUN_00448330(*puVar2);
    puVar2 = puVar2 + 1;
    i = i + -1;
  } while (i != 0);
  FUN_0042e440();
  if (DAT_006fb8d8 == 1) {
    FUN_0044c990();
  }
  else if (DAT_006fb8d8 == 2) {
    FUN_0044c9f0();
  }
  _DAT_0071277c = 1;
  puVar2 = local_c;
  i = 3;
  do {
    FUN_004483a0(*puVar2);
    puVar2 = puVar2 + 1;
    i = i + -1;
  } while (i != 0);
  FUN_0042e4a0();
  FUN_004ce030(4,uVar1);
  FUN_004a6840(&DAT_007128b0);
  return;
}


/* ==== 0044cb30 FUN_0044cb30 ==== */

void FUN_0044cb30(void)

{
  bool bVar1;
  float10 fVar2;
  
  if (DAT_006fb8a0 == 0) {
    bVar1 = DAT_006fb8d0 != 0;
    fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
    if (((float10)1.0 / fVar2 < (float10)10.0) && ((int)((-(uint)bVar1 & 10) + 0xf) < DAT_006fb8b0))
    {
      DAT_006fb8b0 = DAT_006fb8b0 + -1;
    }
  }
  return;
}


/* ==== 0044cb80 FUN_0044cb80 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044cb80(void)

{
  undefined4 this_val;
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 auStack_48 [8];
  undefined4 uStack_28;
  char *pcStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  char *pcStack_10;
  char *pcStack_c;
  
  pcStack_c = s_handle_game___005a1924;
  pcStack_10 = "h4\x19Z";
  FUN_004c3fa0();
  pcStack_10 = s_calling__>_gt_update_timer___005a1934;
  iStack_14 = 0x44cb96;
  FUN_004c3fa0();
  pcStack_c = (char *)0x44cba3;
  FUN_004a6700(&DAT_007128b0);
  pcStack_c = (char *)0x44cba8;
  FUN_00469fa0();
  pcStack_c = "hT\x19Z";
  FUN_0046fdb0();
  pcStack_c = s_calling__>_rceng_handle_objects__005a1954;
  pcStack_10 = (char *)0x44cbb9;
  FUN_004c3fa0();
  pcStack_10 = (char *)DAT_006fba58;
  iStack_14 = DAT_006fb8b0 * 2;
  uStack_18 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50);
  pcStack_1c = "hx\x19Z";
  FUN_004a9870();
  pcStack_1c = s_calling__>_ai_check_cars_outside_005a1978;
  pcStack_20 = (char *)0x44cbec;
  FUN_004c3fa0();
  pcStack_20 = (char *)DAT_006fba58;
  pcStack_24 = (char *)0x44cbf7;
  FUN_0041ca20();
  pcStack_24 = s_calling__>_handle_game_cameras___005a19ac;
  uStack_28 = 0x44cc01;
  FUN_004c3fa0();
  uStack_28 = 0x44cc06;
  FUN_00438670();
  uStack_28 = 0x44cc0b;
  FUN_004509b0();
  puVar1 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar2 = auStack_48;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  FUN_0045dc00((float)fVar3);
  FUN_0044e830();
  FUN_00444de0(DAT_006fba58,DAT_006fbad0);
  pcStack_c = s_calling__>_check_game_keys___005a19d0;
  pcStack_10 = (char *)0x44cc7e;
  FUN_004c3fa0();
  pcStack_c = (char *)0x44cc86;
  FUN_0044cf90();
  pcStack_c = (char *)0x44cc90;
  FUN_00427130(&DAT_005d3460);
  pcStack_c = (char *)0x44cc95;
  FUN_0044c950();
  pcStack_c = (char *)0x44cc9f;
  fVar3 = (float10)FUN_004031e0(&DAT_006fbabc);
  if ((float10)_DAT_005a16fc < fVar3) {
    DAT_0059becc = 0x44;
  }
  pcStack_c = s_calling__>_render_game___005a19f0;
  pcStack_10 = (char *)0x44ccc2;
  FUN_004c3fa0();
  pcStack_10 = (char *)0x44ccc7;
  FUN_0044da30();
  pcStack_10 = (char *)DAT_006fba58;
  iStack_14 = DAT_006fb8b0 * 2;
  uStack_18 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50);
  pcStack_1c = (char *)0x44ccef;
  FUN_004aa0c0();
  pcStack_1c = (char *)0x44ccf4;
  FUN_00464cf0();
  pcStack_1c = "h\f\x1aZ";
  FUN_00464cb0();
  pcStack_1c = s_calling__>_handle_game_actions___005a1a0c;
  pcStack_20 = (char *)0x44cd03;
  FUN_004c3fa0();
  pcStack_20 = (char *)0x44cd08;
  FUN_0043c260();
  pcStack_20 = "h0\x1aZ";
  FUN_0044c8c0();
  pcStack_20 = s_calling__>_check_player_damage___005a1a30;
  pcStack_24 = (char *)0x44cd17;
  FUN_004c3fa0();
  if (DAT_006fb920 == 0) {
    pcStack_c = s_calling__>_draw_2d_display___005a1a54;
    pcStack_10 = (char *)0x44cd2d;
    FUN_004c3fa0();
    pcStack_c = (char *)0x44cd35;
    thunk_FUN_0043f8a0();
  }
  pcStack_c = (char *)0x44cd3a;
  this_val = FUN_00472230();
  pcStack_c = "ht\x1aZ";
  FUN_00471bd0(this_val);
  pcStack_c = s_calling__>_update_game_screen___005a1a74;
  pcStack_10 = (char *)0x44cd4b;
  FUN_004c3fa0();
  pcStack_c = (char *)0x44cd53;
  FUN_0044df10();
  pcStack_c = (char *)0x44cd58;
  FUN_0044cb30();
  if (DAT_006fb8d8 != 0) {
    pcStack_c = (char *)0x44cd66;
    FUN_0044df10();
    pcStack_c = (char *)0x44cd6b;
    FUN_0044df10();
    pcStack_c = (char *)0x44cd70;
    FUN_0044ca80();
    DAT_006fb8d8 = 0;
  }
  pcStack_c = s_end_of_handle_game___005a1a98;
  DAT_006fb8dc = DAT_006fb8dc + 1;
  pcStack_10 = (char *)0x44cd91;
  FUN_004c3fa0();
  return;
}


