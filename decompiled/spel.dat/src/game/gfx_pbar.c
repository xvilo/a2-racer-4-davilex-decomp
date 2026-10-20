/* spel.dat — game/gfx_pbar.cpp: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00441300 FUN_00441300 ==== */

void FUN_00441300(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00441310 FUN_00441310 ==== */

void FUN_00441310(void)

{
  FUN_005584e0(&LAB_00441320);
  return;
}


/* ==== 00441340 FUN_00441340 ==== */

void FUN_00441340(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00441350 FUN_00441350 ==== */

void FUN_00441350(void)

{
  FUN_005584e0(&LAB_00441360);
  return;
}


/* ==== 00441370 FUN_00441370 ==== */

void FUN_00441370(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int i;
  undefined4 *puVar4;
  CHAR local_40 [64];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,s_System_Settings_0059ccdc);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  DAT_006cdfec = FUN_004c3cd0(s_PROGRESS_0059ccf8,s_CALCULATE_0059ccec,puVar2);
  iVar1 = FUN_004c3cd0(s_PROGRESS_0059cd0c,s_COUNT_0059cd04);
  if ((iVar1 < 0) || (1000 < iVar1)) {
    FUN_004c4150(s__s___d__nr_percents_read_incorre_0059cd3c,
                 s_C__Work_A2IV_Game_prog_gfx_pbar__0059cd18,0x44,iVar1);
  }
  i = 0;
  if (0 < iVar1) {
    puVar4 = &DAT_006cd048;
    do {
      wsprintfA(local_40,s_percent_d_0059cd64,i);
      uVar3 = FUN_004c3cd0(s_PROGRESS_0059cd70,local_40);
      *puVar4 = uVar3;
      i = i + 1;
      puVar4 = puVar4 + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 00441430 FUN_00441430 ==== */

void FUN_00441430(void)

{
  int i;
  undefined1 *puVar1;
  undefined4 *puVar2;
  CHAR local_40 [64];
  
  i = FUN_00448c90(&DAT_006fa558,s_System_Settings_0059cd7c);
  puVar1 = *(undefined1 **)(i + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_004c3c70(s_PROGRESS_0059cd94,s_COUNT_0059cd8c,DAT_006cd044,puVar1);
  if ((DAT_006cd044 < 0) || (1000 < DAT_006cd044)) {
    FUN_004c4150(s__s___d__g_nr_times_called_incorr_0059cdc4,
                 s_C__Work_A2IV_Game_prog_gfx_pbar__0059cda0,0x68,DAT_006cd044);
  }
  i = 0;
  if (0 < DAT_006cd044) {
    puVar2 = &DAT_006cd048;
    do {
      wsprintfA(local_40,s_percent_d_0059cdf0,i);
      FUN_004c3c70(s_PROGRESS_0059cdfc,local_40,*puVar2);
      i = i + 1;
      puVar2 = puVar2 + 1;
    } while (i < DAT_006cd044);
  }
  return;
}


/* ==== 004414e0 FUN_004414e0 ==== */

void FUN_004414e0(void)

{
  DAT_006cdfe8 = 1;
  DAT_006cd03c = GetTickCount();
  DAT_006cd044 = 0;
  FUN_00441370();
  return;
}


/* ==== 00441510 FUN_00441510 ==== */

void __thiscall FUN_00441510(void *this)

{
  int iVar1;
  int __ftol_result;
  int i;
  
  if (DAT_006cdfe8 == 0) {
    FUN_004c4150(s__s___d__Progress_clock_wasn_t_in_0059ce2c,
                 s_C__Work_A2IV_Game_prog_gfx_pbar__0059ce08,0x9e,this);
  }
  if (DAT_006cdfec == 0) {
    DAT_006cdfe8 = 0;
    return;
  }
  if ((DAT_006cd044 < 0) || (1000 < DAT_006cd044)) {
    FUN_004c4150(s__s___d__g_nr_times_called_incorr_0059ce78,
                 s_C__Work_A2IV_Game_prog_gfx_pbar__0059ce54,0xa9,DAT_006cd044);
  }
  GetTickCount();
  iVar1 = DAT_006cd044;
  i = 0;
  if (0 < DAT_006cd044) {
    do {
      __ftol_result = __ftol();
      if (__ftol_result < 0) {
        __ftol_result = 0;
      }
      else if (100 < __ftol_result) {
        __ftol_result = 100;
      }
      (&DAT_006cd048)[i] = __ftol_result;
      i = i + 1;
    } while (i < iVar1);
  }
  FUN_00441430();
  DAT_006cdfe8 = 0;
  return;
}


/* ==== 004415e0 FUN_004415e0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004415e0(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_006cdfec != 0) {
    if ((DAT_006cd044 < 0) || (999 < DAT_006cd044)) {
      FUN_004c4150(s__s___d__g_nr_times_called_incorr_0059cec8,
                   s_C__Work_A2IV_Game_prog_gfx_pbar__0059cea4,0xdf,DAT_006cd044);
    }
    DVar1 = GetTickCount();
    (&DAT_006cc09c)[DAT_006cd044] = DVar1 - DAT_006cd03c;
    DAT_006cd044 = DAT_006cd044 + 1;
    return;
  }
  if ((DAT_006cd044 < 0) || (999 < DAT_006cd044)) {
    FUN_004c4150(s__s___d__g_nr_times_called_incorr_0059cf18,
                 s_C__Work_A2IV_Game_prog_gfx_pbar__0059cef4,0xee,DAT_006cd044);
  }
  _DAT_006cdff0 = (&DAT_006cd048)[DAT_006cd044];
  if (_DAT_006cdff0 < 0) {
    _DAT_006cdff0 = 0;
  }
  else if (100 < _DAT_006cdff0) {
    _DAT_006cdff0 = 100;
  }
  FUN_004416f0();
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x28))(DAT_0073b4b4);
  if (iVar2 != 0) {
    uVar3 = FUN_004bb290(iVar2);
    FUN_004c4150(s__s__d____D3DError_Begin_Scene_____0059cf68,
                 s_C__Work_A2IV_Game_prog_gfx_pbar__0059cf44,0x103,uVar3);
  }
  FUN_004882f0(&DAT_007126e8);
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x2c))(DAT_0073b4b4);
  if (iVar2 != 0) {
    uVar3 = FUN_004bb290(iVar2);
    FUN_004c4150(s__s__d____D3DError_End_Scene____s_0059cfb4,
                 s_C__Work_A2IV_Game_prog_gfx_pbar__0059cf90,0x108,uVar3);
  }
  FUN_0044df10();
  DAT_006cd044 = DAT_006cd044 + 1;
  return;
}


/* ==== 004416f0 FUN_004416f0 ==== */

void FUN_004416f0(void)

{
  int local_8;
  int local_4;
  
  FUN_004cada0((char *)((int)&DAT_006cbefc + DAT_006fb898 * 0xd),&local_4,&local_8);
  FUN_004409d0(2,DAT_006fb898);
  FUN_004c8b90(2,1,0,0,local_4,local_8,0,0,DAT_005b3798,DAT_005b379c,0);
  return;
}


/* ==== 00441880 FUN_00441880 ==== */

void FUN_00441880(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00441890 FUN_00441890 ==== */

void FUN_00441890(void)

{
  FUN_005584e0(&LAB_004418a0);
  return;
}


/* ==== 004418c0 FUN_004418c0 ==== */

void FUN_004418c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004418d0 FUN_004418d0 ==== */

void FUN_004418d0(void)

{
  FUN_005584e0(&LAB_004418e0);
  return;
}


/* ==== 00441900 FUN_00441900 ==== */

void FUN_00441900(void)

{
  FUN_004419c0(&DAT_006ce000);
  return;
}


/* ==== 00441910 FUN_00441910 ==== */

void FUN_00441910(void)

{
  FUN_005584e0(&LAB_00441920);
  return;
}


/* ==== 00441930 FUN_00441930 ==== */

void __thiscall FUN_00441930(void *this)

{
  *(undefined1 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 00441940 FUN_00441940 ==== */

void __thiscall
FUN_00441940(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined1 *)((int)this + 0x10) = 1;
  return;
}


/* ==== 004419c0 FUN_004419c0 ==== */

void * __thiscall FUN_004419c0(void *this)

{
  undefined1 *operator_new_result;
  undefined1 local_1;
  
  FUN_00441930((int)this + 0x88);
  FUN_00441930((int)this + 0x9c);
  *(undefined ***)((int)this + 200) = &PTR_LAB_00576748;
  operator_new_result = operator_new(0x10);
  if (operator_new_result != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)this >> 0x18);
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
    *(undefined1 **)((int)this + 0xcc) = operator_new_result;
    *(undefined4 *)((int)this + 0xe4) = 0;
    return this;
  }
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  return this;
}


/* ==== 00441a30 FUN_00441a30 ==== */

void __thiscall FUN_00441a30(void *this)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0x80ffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xff000000;
  iVar1 = *(int *)this * 0x48;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(iVar1 + 0x34 + DAT_0073b1b0);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(iVar1 + 0x38 + DAT_0073b1b0);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x38) = 0x80ffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xff000000;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(iVar1 + 0x3c + DAT_0073b1b0);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar1 + 0x38 + DAT_0073b1b0);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0x3f800000;
  *(undefined4 *)((int)this + 0x58) = 0x80ffffff;
  *(undefined4 *)((int)this + 0x5c) = 0xff000000;
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar1 + 0x3c + DAT_0073b1b0);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(iVar1 + 0x40 + DAT_0073b1b0);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0x3f800000;
  *(undefined4 *)((int)this + 0x78) = 0x80ffffff;
  *(undefined4 *)((int)this + 0x7c) = 0xff000000;
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(iVar1 + 0x34 + DAT_0073b1b0);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(iVar1 + 0x40 + DAT_0073b1b0);
  return;
}


