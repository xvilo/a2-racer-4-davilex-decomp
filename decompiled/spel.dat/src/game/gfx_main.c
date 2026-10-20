/* spel.dat — game/gfx_main.cpp: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00440910 FUN_00440910 ==== */

undefined4 FUN_00440910(int param_1)

{
  if (param_1 == 0) {
    return DAT_007408ac;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      FUN_004c4150(s__s___d__Unknown_surface___focus__0059c98c,
                   s_C__Work_A2IV_Game_prog_gfx_main__0059c968,0xec,param_1);
      return 0;
    }
    return DAT_00740890;
  }
  return DAT_007408b0;
}


/* ==== 00440950 FUN_00440950 ==== */

void FUN_00440950(void)

{
  if (DAT_006fb894 != 0) {
    FUN_004c3fa0(s_Loading_anims_for_8_bit_mode_0059c9b4);
    FUN_00458730(2);
    FUN_00458810();
    return;
  }
  FUN_004c3fa0(s_Loading_anims_for_16_bit_mode_0059c9d4);
  FUN_00458730(2);
  FUN_004588f0();
  return;
}


/* ==== 00440990 FUN_00440990 ==== */

void FUN_00440990(void)

{
  if (DAT_006fb894 != 0) {
    FUN_004c3fa0(s_Freeing_anims_for_8_bit_mode_0059c9f4);
    FUN_004588a0();
    return;
  }
  FUN_004c3fa0(s_Freeing_anims_for_16_bit_mode_0059ca14);
  FUN_00458980();
  return;
}


/* ==== 004409c0 thunk_FUN_0043f8a0 ==== */

void thunk_FUN_0043f8a0(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056a3e2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004c3fa0(s_draw_dashboard___0059c0ac);
  uVar2 = FUN_00447820();
  if (DAT_006fb8d8 != 0) {
    FUN_0043e120(uVar2);
  }
  if (DAT_006fb950 != 0) {
    uVar3 = 0xffffffff;
    pcVar5 = s_keyboard0_0059c0c0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    pcStack_28 = (char *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    cVar1 = FUN_00402a00(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_keyboard0_0059c0c0;
      pcVar6 = pcStack_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      FUN_004029e0(uVar3);
    }
    uVar3 = 0xffffffff;
    uStack_4 = 0;
    pcVar5 = &DAT_0059c0cc;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_00402940(&DAT_0059c0cc,~uVar3 - 1);
    puVar9 = auStack_2c;
    uVar10 = 0;
    puVar8 = auStack_1c;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_004ea0c0(puVar8,puVar9,0);
    fVar7 = (float10)FUN_004eb4d0(puVar8,puVar9,uVar10);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0xffffffff;
    if (pcStack_28 != (char *)0x0) {
      cVar1 = pcStack_28[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(pcStack_28 + -1);
      }
      else {
        pcStack_28[-1] = cVar1 + -1;
      }
    }
    pcStack_28 = (char *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    if ((float)fVar7 != 0.0) {
      FUN_0043fc90(uVar2);
    }
  }
  FUN_004c3fa0(s_end_of_draw_dashboard___0059c0d8);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004409d0 FUN_004409d0 ==== */

void FUN_004409d0(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int i;
  char *pcVar6;
  char *pcVar7;
  uint uStack_44;
  char acStack_40 [15];
  undefined1 uStack_31;
  
  uVar2 = param_2;
  if (((int)param_2 < 0) || (0x1d < (int)param_2)) {
    FUN_004c4150(s__s___d__Incorrect_pcx_index___d_0059ca58,
                 s_C__Work_A2IV_Game_prog_gfx_main__0059ca34,0x166,param_2);
  }
  if ((DAT_006fb890 < 0) || (5 < DAT_006fb890)) {
    FUN_004c4150(s__s___d__Illegal_value_for_game_i_0059ca9c,
                 s_C__Work_A2IV_Game_prog_gfx_main__0059ca78,0x16c,DAT_006fb890);
  }
  if (DAT_006fb894 != 0) {
    FUN_004c3fa0(s_Loading_wait_screen_for_8_bit_mo_0059cacc);
    FUN_004cae20(param_1,(char *)((int)&DAT_006cbefc + uVar2 * 0xd),0x19);
    return;
  }
  FUN_004c3fa0(s_Loading_wait_screen_for_16_bit_m_0059caf0);
  _strncpy(acStack_40,(char *)((int)&DAT_006cbefc + uVar2 * 0xd),0xe);
  uStack_31 = 0;
  puVar3 = (undefined1 *)FUN_00558f30(acStack_40,s___0059cb18);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  i = -1;
  pcVar6 = acStack_40;
  do {
    pcVar7 = pcVar6;
    if (i == 0) break;
    i = i + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar7 + -1) = DAT_0059cb1c;
  pcVar7[3] = DAT_0059cb20;
  piVar4 = (int *)FUN_004c00b0(acStack_40,&uStack_44,&param_2,(FILE *)0x800,&DAT_00740968);
  uVar5 = FUN_00440910(param_1);
  FUN_004c9930(piVar4,uVar5,0,0,uStack_44,param_2,0,0,uStack_44,param_2,0);
  (**(code **)(*piVar4 + 8))(piVar4);
  return;
}


/* ==== 00440b60 FUN_00440b60 ==== */

void FUN_00440b60(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_190 [400];
  
  if ((param_2 < 0) || (0x54 < param_2)) {
    FUN_004c4150(s__s___d___draw_2d_text__illegal_i_0059cb7c,
                 s_C__Work_A2IV_Game_prog_gfx_main__0059cb58,0x1c4);
  }
  if ((param_1 < 1) || (2 < param_1)) {
    FUN_004c4150(s__s___d___draw_2d_text__illegal_f_0059cbcc,
                 s_C__Work_A2IV_Game_prog_gfx_main__0059cba8,0x1cf);
  }
  iVar2 = (param_2 + (uint)(DAT_006fb894 == 0) * 0x54) * 0xc;
  param_5 = *(int *)(&DAT_0059c18c + iVar2) + param_5;
  iVar2 = *(int *)(&DAT_0059c190 + iVar2);
  if ((DAT_006fb890 == 1) && (DAT_006fb894 != 0)) {
    param_5 = param_5 + 0x140;
  }
  FUN_005590ae(auStack_190,param_7,&stack0x00000020);
  FUN_004ca110(param_3);
  if (param_4 == 0) {
    FUN_004ca3d0(param_1,param_5,iVar2 + param_6,auStack_190);
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + 0x30c) + 8);
  iVar3 = FUN_004ca9f0(auStack_190);
  FUN_004ca3d0(param_1,param_5 - iVar3 / 2,(iVar2 + param_6) - iVar1 / 2,auStack_190);
  return;
}


/* ==== 00440cb0 FUN_00440cb0 ==== */

void FUN_00440cb0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 < 0) || (0x54 < param_2)) {
    FUN_004c4150(s__draw_2d_item__illegal_info_inde_0059cbf4);
  }
  if ((param_1 < 1) || (2 < param_1)) {
    FUN_004c4150(s__draw_2d_item__illegal_focus_0059cc18);
  }
  iVar3 = (param_2 + (uint)(DAT_006fb894 == 0) * 0x54) * 0xc;
  iVar1 = *(int *)(&DAT_0059c190 + iVar3);
  param_5 = *(int *)(&DAT_0059c18c + iVar3) + param_5;
  if ((DAT_006fb890 == 1) && (DAT_006fb894 != 0)) {
    param_5 = param_5 + 0x140;
  }
  iVar4 = *(int *)(&DAT_0059c188 + iVar3) * 0xc;
  if (*(int *)(iVar4 + DAT_00740a1c) <= param_3) {
    FUN_004c4150(s__draw_2d_item__Frame__d__is_not_i_0059cc38,param_3,
                 *(int *)(&DAT_0059c188 + iVar3));
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar4 + 8 + DAT_00740a1c) + 4 + param_3 * 8);
  if (param_4 != 0) {
    FUN_004c8f30(param_1,uVar2,param_5,iVar1 + param_6,1);
    return;
  }
  FUN_004c8f30(param_1,uVar2,param_5,iVar1 + param_6,3);
  return;
}


