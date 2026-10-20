/* spel.dat — game/Menuanim.cpp: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004585e0 FUN_004585e0 ==== */

void FUN_004585e0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004585f0 FUN_004585f0 ==== */

void FUN_004585f0(void)

{
  FUN_005584e0(&LAB_00458600);
  return;
}


/* ==== 00458620 FUN_00458620 ==== */

void FUN_00458620(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00458630 FUN_00458630 ==== */

void FUN_00458630(void)

{
  FUN_005584e0(&LAB_00458640);
  return;
}


/* ==== 00458730 FUN_00458730 ==== */

undefined4 FUN_00458730(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_004cd4a0(&DAT_006fd068,s_rc_img_005a4af4);
  iVar2 = FUN_0055926e(uVar1,uVar3);
  if (iVar2 == -1) {
    uVar1 = FUN_004cd4a0(&DAT_006fd068,s_rc_img_005a4afc);
    FUN_004c4150(s_Could_not_open__s_005a4b04,uVar1);
  }
  uVar3 = 0;
  uVar1 = FUN_004cd4a0(&DAT_006fcfa0,s_rc_ind_005a4b18);
  iVar2 = FUN_0055926e(uVar1,uVar3);
  if (iVar2 == -1) {
    uVar1 = FUN_004cd4a0(&DAT_006fcfa0,s_rc_ind_005a4b20);
    FUN_004c4150(s_Could_not_open__s_005a4b28,uVar1);
  }
  iVar2 = FUN_004caa50(&DAT_005a4830);
  if (iVar2 != 0) {
    FUN_004c4150(s_not_enough_memory_for_animations_005a4b3c);
  }
  uVar1 = FUN_004cd4a0(&DAT_006fd068,s_rc_img_005a4b60);
  iVar2 = FUN_004cc580(uVar1,param_1);
  if (iVar2 != 0) {
    FUN_004c4150(s_Not_enough_memory_for_animation_d_005a4b68);
  }
  FUN_004ce360();
  DAT_006fd130 = 1;
  return 0;
}


/* ==== 00458810 FUN_00458810 ==== */

undefined4 FUN_00458810(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_006fd130 == 0) {
    FUN_004c4150(s__s__d____please_call_init_anims___005a4bb4,
                 s_C__Work_A2IV_Game_prog_Menuanim__005a4b90,499);
  }
  FUN_004cc520(&DAT_00741430);
  FUN_004ce360();
  FUN_004ce3e0(&DAT_005a4830,&DAT_005a4768);
  puVar4 = &DAT_00741430;
  uVar1 = FUN_004cd4a0(&DAT_006fcfa0,s_rc_ind_005a4be0);
  uVar2 = FUN_004cd4a0(&DAT_006fd068,s_rc_img_005a4be8);
  iVar3 = FUN_004cc0b0(uVar2,uVar1,puVar4);
  if (iVar3 != 0) {
    FUN_004cc520(&DAT_00741430);
    return 2000;
  }
  return 0;
}


/* ==== 004588a0 FUN_004588a0 ==== */

undefined4 FUN_004588a0(void)

{
  if (DAT_006fd130 == 0) {
    FUN_004c4150(s__s__d____please_call_init_anims___005a4c14,
                 s_C__Work_A2IV_Game_prog_Menuanim__005a4bf0,0x202);
  }
  FUN_004ce360();
  FUN_004ce3e0(&DAT_005a4830,&DAT_005a4768);
  FUN_004cc520(&DAT_00741430);
  return 0;
}


/* ==== 004588f0 FUN_004588f0 ==== */

undefined4 FUN_004588f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_006fd130 == 0) {
    FUN_004c4150(s__s__d____please_call_init_anims___005a4c64,
                 s_C__Work_A2IV_Game_prog_Menuanim__005a4c40,0x20c);
  }
  FUN_004cc520(&DAT_00741430);
  FUN_004ce360();
  FUN_004ce3e0(&DAT_005a4830,&DAT_005a47a0);
  puVar4 = &DAT_00741430;
  uVar1 = FUN_004cd4a0(&DAT_006fcfa0,s_rc_ind_005a4c90);
  uVar2 = FUN_004cd4a0(&DAT_006fd068,s_rc_img_005a4c98);
  iVar3 = FUN_004cc0b0(uVar2,uVar1,puVar4);
  if (iVar3 != 0) {
    FUN_004cc520(&DAT_00741430);
    return 2000;
  }
  return 0;
}


/* ==== 00458980 FUN_00458980 ==== */

undefined4 FUN_00458980(void)

{
  if (DAT_006fd130 == 0) {
    FUN_004c4150(s__s__d____please_call_init_anims___005a4cc4,
                 s_C__Work_A2IV_Game_prog_Menuanim__005a4ca0,0x21b);
  }
  FUN_004ce360();
  FUN_004ce3e0(&DAT_005a4830,&DAT_005a47a0);
  FUN_004cc520(&DAT_00741430);
  return 0;
}


