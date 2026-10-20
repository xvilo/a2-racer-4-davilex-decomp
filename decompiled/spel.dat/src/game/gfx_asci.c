/* spel.dat — game/gfx_asci.cpp: 16 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0043cab0 FUN_0043cab0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043cab0(void)

{
  _DAT_006c4080 = 1;
  FUN_004482c0(2);
  DAT_006c407c = DAT_006c4078 + -1;
  if (DAT_006fbb48 != 0) {
    FUN_00450110(100);
  }
  return;
}


/* ==== 0043cd00 FUN_0043cd00 ==== */

void FUN_0043cd00(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043cd10 FUN_0043cd10 ==== */

void FUN_0043cd10(void)

{
  FUN_005584e0(&LAB_0043cd20);
  return;
}


/* ==== 0043cd40 FUN_0043cd40 ==== */

void FUN_0043cd40(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043cd50 FUN_0043cd50 ==== */

void FUN_0043cd50(void)

{
  FUN_005584e0(&LAB_0043cd60);
  return;
}


/* ==== 0043cd70 FUN_0043cd70 ==== */

int FUN_0043cd70(int param_1)

{
  if ((param_1 < 0) || (0x10 < param_1)) {
    FUN_004c4150(s__s___d__Incorrect_font_index___d_0059bc8c,
                 s_C__Work_A2IV_Game_prog_gfx_asci__0059bc68,0x4b,param_1);
  }
  return param_1;
}


/* ==== 0043cda0 FUN_0043cda0 ==== */

int FUN_0043cda0(int param_1)

{
  if ((param_1 < 0) || (1 < param_1)) {
    FUN_004c4150(s__s___d__Incorrect_resolution_ind_0059bcd4,
                 s_C__Work_A2IV_Game_prog_gfx_asci__0059bcb0,0x61,param_1);
  }
  return param_1;
}


/* ==== 0043cdd0 FUN_0043cdd0 ==== */

void FUN_0043cdd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004ca110(param_1);
  if (DAT_006fb894 != 0) {
    FUN_004ca0d0(param_2,0);
    return;
  }
  FUN_004ca0d0(param_3,0);
  return;
}


/* ==== 0043ce10 init_ascii_fonts ==== */

void init_ascii_fonts(void)

{
  int iVar1;
  int iVar2;
  int i;
  
  DAT_006c4098 = (uint)(DAT_006fb894 == 0);
  i = 0;
  do {
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar2 = FUN_0043cd70(i);
    iVar1 = FUN_004ca420(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
    if (iVar1 == 1000) {
      FUN_004c4150(s__s___d___Cannot_open_font_file__I_0059bd20,
                   s_C__Work_A2IV_Game_prog_gfx_asci__0059bcfc,0x99,i);
    }
    i = i + 1;
  } while (i < 0x11);
  i = FUN_0043cda0(DAT_006c4098,0xfffffffc,0xfffffffc);
  iVar1 = FUN_0043cd70(2);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0,0xfffffffe);
  iVar1 = FUN_0043cd70(6);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0xfffffffd,0xfffffffc);
  iVar1 = FUN_0043cd70(3);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0xfffffffe,0xfffffffc);
  iVar1 = FUN_0043cd70(5);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0,0xfffffffe);
  iVar1 = FUN_0043cd70(10);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0xffffffff,0xfffffffc);
  iVar1 = FUN_0043cd70(0xb);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0,0xfffffffd);
  iVar1 = FUN_0043cd70(0xc);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0,0xfffffffe);
  iVar1 = FUN_0043cd70(0xd);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0xfffffffe,0xfffffff8);
  iVar1 = FUN_0043cd70(0);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0xfffffffb,0xfffffff2);
  iVar1 = FUN_0043cd70(0xe);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0xffffffff,0xfffffffe);
  iVar1 = FUN_0043cd70(0xf);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  i = FUN_0043cda0(DAT_006c4098,0,0);
  iVar1 = FUN_0043cd70(0x10);
  FUN_0043cdd0(s_lo_fnt3_fnt_0059a8c0 + (i * 0x11 + iVar1) * 0x94);
  if (DAT_006fb890 == 0) {
    FUN_004c87f0(0);
  }
  return;
}


/* ==== 0043d180 FUN_0043d180 ==== */

void FUN_0043d180(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0043d190 FUN_0043d190 ==== */

void FUN_0043d190(void)

{
  FUN_005584e0(&LAB_0043d1a0);
  return;
}


/* ==== 0043d1c0 FUN_0043d1c0 ==== */

void FUN_0043d1c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0043d1d0 FUN_0043d1d0 ==== */

void FUN_0043d1d0(void)

{
  FUN_005584e0(&LAB_0043d1e0);
  return;
}


/* ==== 0043d230 FUN_0043d230 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d230(int param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_006c40c0 = FUN_004b4c70(0,0,0,0,0,0,param_1,param_2,&LAB_004b5620);
  *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 * 0xa9 + 0xa1) = 2;
  *(undefined1 *)(DAT_0073b0d0 + DAT_006c40c0 * 0xa9 + 0x90) = 1;
  DAT_006c40a0 = 0x41200000;
  DAT_006c40a4 = 0x40800000;
  DAT_006c40a8 = 0x41200000;
  iVar1 = DAT_0073b0d0 + DAT_006c40c0 + 0x80 + DAT_006c40c0 * 0xa8;
  *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + 0x80 + DAT_006c40c0 * 0xa8) = 0x41200000;
  *(undefined4 *)(iVar1 + 4) = 0x40800000;
  *(undefined4 *)(iVar1 + 8) = 0x41200000;
  FUN_004b5770();
  iVar1 = DAT_0073b5c8 + 0x58 + param_1 * 0xac;
  _DAT_006c40b0 = *(undefined4 *)(DAT_0073b5c8 + 0x58 + param_1 * 0xac);
  _DAT_006c40b4 = *(undefined4 *)(iVar1 + 4);
  _DAT_006c40b8 = *(undefined4 *)(iVar1 + 8);
  return;
}


/* ==== 0043d3c0 FUN_0043d3c0 ==== */

void FUN_0043d3c0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  if (DAT_006fb8d0 != 0) {
    iVar1 = FUN_004b75a0((char *)&PTR_s__00594b3c_0x17_0059bd50);
    uVar3 = *(undefined4 *)(**(int **)(DAT_0073b168 + iVar1 * 9 + 4) * 0x10 + DAT_0073b120);
    iVar1 = FUN_004b75a0((char *)&PTR_s__00594b3c_0x17_0059bd54);
    FUN_0043d230(uVar3,*(undefined4 *)
                        (**(int **)(DAT_0073b168 + iVar1 * 9 + 4) * 0x10 + 4 + DAT_0073b120));
    if (DAT_006fb8e0 != 0) {
      uVar2 = FUN_00558625();
      if ((uVar2 & 1) != 0) {
        if (DAT_006fb8e0 != 2) {
          if (DAT_0073b505 != 7) {
            DAT_0073b505 = 7;
            iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x15,7);
            if (iVar1 != 0) {
              uVar3 = FUN_004bb290(iVar1);
              FUN_004c4150(s__s__d_____BLENDING__error_settin_0059bd78,
                           s_______Libs_Win3DLib_Include_d3de_00591314,0x23f,uVar3);
            }
          }
          iVar1 = FUN_00448c90(s_Game_Settings_0059bd58);
          puVar4 = *(undefined1 **)(iVar1 + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0057629c;
          }
          FUN_004c3b60(puVar4);
          iVar1 = FUN_004c3cd0(s_options_0059bd70,s_FILTER_0059bd68);
          if (iVar1 == 2) {
            FUN_004bc200(1);
          }
        }
        FUN_00457040();
      }
    }
    DAT_006c40c8 = 1;
  }
  return;
}


/* ==== 0043d4f0 FUN_0043d4f0 ==== */

void FUN_0043d4f0(void)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((DAT_006fb8d0 != 0) && (DAT_006c40c8 != 0)) {
    i = DAT_0073b0d0 + DAT_006c40c0 * 0xa9;
    *(undefined4 *)(i + 0x80) = DAT_006c40a0;
    *(undefined4 *)(i + 0x84) = DAT_006c40a4;
    *(undefined4 *)(i + 0x88) = DAT_006c40a8;
    puVar1 = (undefined4 *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
    i = DAT_0073b0d0 + DAT_006c40c0 * 0xa9;
    *(undefined4 *)(i + 0x50) = *puVar1;
    *(undefined4 *)(i + 0x54) = puVar1[1];
    *(undefined4 *)(i + 0x58) = puVar1[2];
    puVar1 = &DAT_0073b538;
    puVar2 = (undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 * 0xa9 + 0x10);
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + DAT_006c40c0 * 0xa8 + 0x40) =
         *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + 0x50 + DAT_006c40c0 * 0xa8);
    *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + DAT_006c40c0 * 0xa8 + 0x44) =
         *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + 0x54 + DAT_006c40c0 * 0xa8);
    *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + DAT_006c40c0 * 0xa8 + 0x48) =
         *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + 0x58 + DAT_006c40c0 * 0xa8);
    i = DAT_0073b0d0 + DAT_006c40c0 * 0xa9;
    FUN_004b4360(i + 0x10,*(undefined4 *)(i + 0x80),*(undefined4 *)(i + 0x84),
                 *(undefined4 *)(i + 0x88));
    FUN_004b5b10();
  }
  return;
}


