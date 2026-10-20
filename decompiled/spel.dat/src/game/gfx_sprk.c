/* spel.dat — game/gfx_sprk.cpp: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004457d0 FUN_004457d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004457d0(void)

{
  int iVar1;
  
  iVar1 = DAT_006ed6a0;
  DAT_006ed694 = __ftol();
  if (DAT_006ed694 < 0) {
    DAT_006ed694 = DAT_006ed694 + iVar1;
    _DAT_006ed69c = (float)DAT_006ed694;
  }
  if (iVar1 <= DAT_006ed694) {
    DAT_006ed694 = DAT_006ed694 - iVar1;
    _DAT_006ed69c = (float)DAT_006ed694;
  }
  FUN_004456e0();
  return;
}


/* ==== 00445880 FUN_00445880 ==== */

void FUN_00445880(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00445890 FUN_00445890 ==== */

void FUN_00445890(void)

{
  FUN_005584e0(&LAB_004458a0);
  return;
}


/* ==== 004458c0 FUN_004458c0 ==== */

void FUN_004458c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004458d0 FUN_004458d0 ==== */

void FUN_004458d0(void)

{
  FUN_005584e0(&LAB_004458e0);
  return;
}


/* ==== 00445950 FUN_00445950 ==== */

int FUN_00445950(int param_1)

{
  if ((param_1 < 0) || (99 < param_1)) {
    FUN_004c4150(s__s___d__Spark_index_incorrect__I_0059d890,
                 s_C__Work_A2IV_Game_prog_gfx_sprk__0059d86c,0x26,param_1);
  }
  return param_1;
}


/* ==== 00445980 FUN_00445980 ==== */

int FUN_00445980(int param_1)

{
  if ((param_1 < 0) || (5 < param_1)) {
    FUN_004c4150(s__s___d__vertex_index_incorrect__I_0059d8e0,
                 s_C__Work_A2IV_Game_prog_gfx_sprk__0059d8bc,0x30,param_1);
  }
  return param_1;
}


