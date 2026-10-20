/* spel.dat — game/gfx_sky.cpp: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00445450 FUN_00445450 ==== */

void FUN_00445450(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00445460 FUN_00445460 ==== */

void FUN_00445460(void)

{
  FUN_005584e0(&LAB_00445470);
  return;
}


/* ==== 00445490 FUN_00445490 ==== */

void FUN_00445490(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004454a0 FUN_004454a0 ==== */

void FUN_004454a0(void)

{
  FUN_005584e0(&LAB_004454b0);
  return;
}


/* ==== 004454c0 FUN_004454c0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004454c0(void)

{
  char *str2;
  
  DAT_006ed690 = 0;
  if ((DAT_006fb8d0 == 0) && (DAT_006fb8a4 == 0)) {
    switch(DAT_006fb890) {
    case 0:
      str2 = &DAT_006fa5d6 + DAT_006fb898 * 0x94;
      break;
    case 1:
    case 2:
    case 3:
      str2 = &DAT_006fa5e4 + DAT_006fb898 * 0x94;
      break;
    default:
      FUN_004c4150(s__init_moving_sky___s__d____Inval_0059d7b4,
                   s_C__Work_A2IV_Game_prog_gfx_sky_c_0059d790,0x35);
      return;
    }
    DAT_006ed690 = FUN_004cb230(str2,&DAT_006ed6a0,(int *)&DAT_006ed6a4);
    DAT_006ed6a8 = DAT_005b3798;
    _DAT_006ed69c = 0;
    DAT_006ed694 = 0;
    DAT_006ed6ac = DAT_005b379c - DAT_005b379c / 3;
    DAT_006ed698 = 0;
    FUN_004456e0();
    DAT_006ed6f4 = 1;
    return;
  }
  return;
}


/* ==== 004455c0 FUN_004455c0 ==== */

void FUN_004455c0(void)

{
  if (DAT_006ed6f4 != 0) {
    (**(code **)(*DAT_006ed690 + 8))(DAT_006ed690);
    DAT_006ed690 = (int *)0x0;
  }
  return;
}


/* ==== 004455e0 FUN_004455e0 ==== */

void FUN_004455e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00447820();
  if (iVar1 == 1) {
    FUN_004c4a60(DAT_007408b0);
    iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                      (DAT_007408b0,param_1,DAT_006ed690,param_2,0x1000000,0);
    if (iVar1 != 0) {
      uVar2 = FUN_004c4400(iVar1);
      FUN_004c4150(s__s__d____blitting_error___s___0059d808,
                   s_C__Work_A2IV_Game_prog_gfx_sky_c_0059d7e4,0x5d,uVar2);
    }
  }
  else if (iVar1 == 2) {
    FUN_004c4a60(DAT_00740890);
    iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                      (DAT_00740890,param_1,DAT_006ed690,param_2,0x1000000,0);
    if (iVar1 != 0) {
      uVar2 = FUN_004c4400(iVar1);
      FUN_004c4150(s__s__d____blitting_error___s___0059d84c,
                   s_C__Work_A2IV_Game_prog_gfx_sky_c_0059d828,0x66,uVar2);
      return;
    }
  }
  return;
}


/* ==== 004456a0 FUN_004456a0 ==== */

void FUN_004456a0(void)

{
  if (DAT_006ed6f4 != 0) {
    FUN_004455e0(&DAT_006ed6c4,&DAT_006ed6b4);
    if (DAT_006ed6b0 != 0) {
      FUN_004455e0(&DAT_006ed6e4,&DAT_006ed6d4);
    }
  }
  return;
}


/* ==== 004456e0 FUN_004456e0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004456e0(void)

{
  if (DAT_006ed694 <= DAT_006ed6a0 - DAT_006ed6a8) {
    _DAT_006ed6cc = DAT_006ed6a8;
    _DAT_006ed6bc = DAT_006ed6a8 + DAT_006ed694;
    _DAT_006ed6b8 = DAT_006ed698;
    _DAT_006ed6c4 = 0;
    _DAT_006ed6c8 = 0;
    DAT_006ed6b0 = 0;
    _DAT_006ed6d0 = DAT_006ed6ac;
    _DAT_006ed6b4 = DAT_006ed694;
    _DAT_006ed6c0 = DAT_006ed698 + DAT_006ed6ac;
    return;
  }
  _DAT_006ed6cc = DAT_006ed6a0 - DAT_006ed694;
  _DAT_006ed6b4 = DAT_006ed694;
  _DAT_006ed6bc = DAT_006ed694 + _DAT_006ed6cc;
  _DAT_006ed6ec = DAT_006ed6a8;
  _DAT_006ed6c0 = DAT_006ed698 + DAT_006ed6ac;
  _DAT_006ed6e0 = DAT_006ed698 + DAT_006ed6ac;
  _DAT_006ed6d0 = DAT_006ed6ac;
  _DAT_006ed6f0 = DAT_006ed6ac;
  _DAT_006ed6c4 = 0;
  _DAT_006ed6c8 = 0;
  _DAT_006ed6e8 = 0;
  _DAT_006ed6d4 = 0;
  _DAT_006ed6b8 = DAT_006ed698;
  _DAT_006ed6e4 = _DAT_006ed6cc;
  _DAT_006ed6dc = DAT_006ed6a8 - _DAT_006ed6cc;
  _DAT_006ed6d8 = DAT_006ed698;
  DAT_006ed6b0 = 1;
  return;
}


