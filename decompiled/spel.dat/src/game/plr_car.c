/* spel.dat — game/plr_car.cpp: 15 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0044e160 FUN_0044e160 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e160(void)

{
  DAT_006fb990 = FUN_00559348();
  _DAT_006fb994 = DAT_006fb990;
  DAT_006fb998 = 0;
  return;
}


/* ==== 0044e180 FUN_0044e180 ==== */

void FUN_0044e180(void)

{
  DAT_006fb998 = DAT_006fb998 + 1;
  return;
}


/* ==== 0044e190 FUN_0044e190 ==== */

void FUN_0044e190(void)

{
  double dVar1;
  int iVar2;
  
  iVar2 = FUN_00559348();
  dVar1 = (double)(iVar2 - DAT_006fb990) * 0.001;
  FUN_004c3fa0(s___d__frames___f__sec_005a1cb4,DAT_006fb998,dVar1);
  FUN_004c3fa0(s_fps____f_005a1ccc,(double)DAT_006fb998 / dVar1);
  __ftol();
  return;
}


/* ==== 0044e290 FUN_0044e290 ==== */

void FUN_0044e290(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0044e2a0 FUN_0044e2a0 ==== */

void FUN_0044e2a0(void)

{
  FUN_005584e0(&LAB_0044e2b0);
  return;
}


/* ==== 0044e2d0 FUN_0044e2d0 ==== */

void FUN_0044e2d0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0044e2e0 FUN_0044e2e0 ==== */

void FUN_0044e2e0(void)

{
  FUN_005584e0(&LAB_0044e2f0);
  return;
}


/* ==== 0044e310 FUN_0044e310 ==== */

void FUN_0044e310(void)

{
  FUN_0042e5b0(&DAT_006fb9c0);
  return;
}


/* ==== 0044e320 FUN_0044e320 ==== */

void FUN_0044e320(void)

{
  FUN_005584e0(&LAB_0044e330);
  return;
}


/* ==== 0044e340 FUN_0044e340 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e340(void)

{
  char cVar1;
  undefined4 this_val;
  uint i;
  uint j;
  char *pcVar2;
  undefined1 auStack_88 [16];
  int iStack_78;
  uint uStack_74;
  undefined1 *puStack_70;
  char *pcStack_6c;
  char *pcStack_68;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a5f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_3c);
  local_4 = 0;
  FUN_004028f0(local_1c);
  local_4._0_1_ = 1;
  this_val = FUN_0042aee0();
  if (DAT_006fba30 == 0) {
    pcStack_68 = (char *)0x44e475;
    FUN_0049df90(local_2c,s_RACER__d_005a1f4c);
    local_4._0_1_ = 3;
    pcStack_68 = (char *)0x44e48f;
    FUN_004093c0(local_3c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(local_2c);
  }
  else {
    FUN_004028f0(local_2c);
    i = 0xffffffff;
    pcVar2 = s_COP_005a1f04;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    cVar1 = FUN_00402a00(local_2c);
    if (cVar1 != '\0') {
      pcVar2 = s_COP_005a1f04;
      for (j = ~i - 1 >> 2; j != 0; j = j - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        local_28 = local_28 + 4;
      }
      for (i = ~i - 1 & 3; i != 0; i = i - 1) {
        *local_28 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        local_28 = local_28 + 1;
      }
      FUN_004029e0(local_2c);
    }
    local_4._0_1_ = 2;
    pcStack_68 = (char *)0x44e412;
    FUN_004093c0(local_3c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(local_2c);
    DAT_006fba5c = FUN_004245f0(&DAT_005d3458);
    if (DAT_006fba5c == -1) {
      pcStack_68 = s__s___d__Could_not_find_car__s_005a1f2c;
      pcStack_6c = (char *)0x44e45a;
      FUN_004c4150();
    }
  }
  FUN_00424660(&DAT_005d3458);
  FUN_00403140(&DAT_006fbabc);
  FUN_00424660(&DAT_005d3458);
  FUN_00424660(&DAT_005d3458);
  FUN_0041aa80(&DAT_005d3118);
  if (((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0) &&
     (DAT_006fb8ac == DAT_006fbaa4 || (int)(DAT_006fb8ac - DAT_006fbaa4) < 0)) {
    pcStack_68 = s_C__Work_A2IV_Game_prog_plr_car_c_005a1f58;
    pcStack_6c = s__init_player_car___s__d____Illeg_005a1f7c;
    puStack_70 = (undefined1 *)0x44e522;
    FUN_004c4150();
  }
  if (DAT_006fb8e8 == 0) {
    if (DAT_006fb954 == 1) {
      puStack_70 = (undefined1 *)0x0;
      iStack_78 = DAT_006fb8ac - DAT_006fbaa4;
    }
    else {
      puStack_70 = (undefined1 *)0x1;
      iStack_78 = DAT_006fb8ac - DAT_006fbaa4;
    }
  }
  else if (DAT_006fb954 == 1) {
    puStack_70 = (undefined1 *)0x1;
    iStack_78 = DAT_006fb8ac - DAT_006fbaa4;
  }
  else {
    puStack_70 = (undefined1 *)0x0;
    iStack_78 = DAT_006fb8ac - DAT_006fbaa4;
  }
  uStack_74 = DAT_006fbaa4 & 1;
  pcStack_68 = &LAB_0044ea60;
  pcStack_6c = (char *)0x1;
  FUN_0041c870(auStack_88,local_3c);
  DAT_006fba58 = FUN_0042a3d0();
  FUN_00426f60(&DAT_005d3460);
  FUN_004252e0();
  FUN_004353e0();
  pcStack_68 = (char *)0x44e643;
  FUN_004c3fa0();
  pcStack_68 = (char *)DAT_006fba58;
  pcStack_6c = (char *)0x44e64f;
  FUN_004a6ae0();
  *(uint *)(DAT_006fba58 * 0xf0 + 0x1c + DAT_00715e50) =
       *(uint *)(DAT_006fba58 * 0xf0 + 0x1c + DAT_00715e50) | 3;
  *(undefined4 *)(DAT_006fba58 * 0xf0 + 100 + DAT_00715e50) = 0;
  puStack_70 = local_3c;
  uStack_74 = 0x44e6a2;
  FUN_0041c870(&pcStack_6c);
  puStack_70 = (undefined1 *)DAT_006fba58;
  uStack_74 = 0x44e6b1;
  FUN_0042b550(this_val);
  FUN_00402de0(&DAT_006fbabc);
  FUN_00402ea0(&DAT_006fbabc);
  _DAT_006fbab0 = 0;
  FUN_004505e0();
  FUN_0044f0d0();
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_38 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339();
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0044e780 FUN_0044e780 ==== */

void FUN_0044e780(void)

{
  return;
}


/* ==== 0044e790 FUN_0044e790 ==== */

void FUN_0044e790(void)

{
  int iVar1;
  undefined4 this_val_2;
  int iVar2;
  undefined4 this_val;
  undefined4 uVar3;
  
  iVar1 = FUN_004475d0();
  if (iVar1 != 0) {
    this_val_2 = FUN_0049eb50(&DAT_006fbb5c,DAT_006fba28);
    if (DAT_006fbad0 < 1) {
      iVar1 = FUN_0049e630(this_val_2);
      if (iVar1 != 0) {
        this_val_2 = FUN_0049eb50(&DAT_006fbb5c,DAT_006fba28);
        FUN_0049e570(this_val_2);
        return;
      }
    }
    else {
      iVar1 = DAT_006fbad0 * 4;
      iVar2 = DAT_006fbad0 * 5 + 0x3c;
      if (100 < iVar2) {
        iVar2 = 100;
      }
      FUN_0049e340(this_val_2,iVar2);
      iVar2 = FUN_0049e630(this_val_2);
      if (iVar2 == 0) {
        uVar3 = 1;
        this_val = FUN_0049eb50(&DAT_006fbb5c,DAT_006fba28);
        FUN_0049e550(this_val,uVar3);
      }
      FUN_0049e3f0(this_val_2,iVar1 + -4);
    }
  }
  return;
}


/* ==== 0044e830 FUN_0044e830 ==== */

void FUN_0044e830(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_0044e790();
  if (0 < DAT_006fbad0) {
    DVar1 = GetTickCount();
    if (99 < (int)(DVar1 - DAT_006fba38)) {
      iVar2 = DAT_00715e50 + DAT_006fba58 * 0xf0;
      local_18 = *(undefined4 *)(iVar2 + 0xbc);
      local_14 = *(undefined4 *)(iVar2 + 0xc0);
      local_10 = *(undefined4 *)(iVar2 + 0xc4);
      DAT_006fba38 = DVar1;
      puVar3 = (undefined4 *)
               FUN_004b42a0(&local_24,&local_18,DAT_0073b0d0 + *(int *)(iVar2 + 0x24) * 0xa9 + 0x10)
      ;
      uVar4 = *puVar3;
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      if (*(int *)(DAT_006fba58 * 0xf0 + 0x10 + DAT_00715e50) != 0) {
        puVar3 = (undefined4 *)FUN_004a1dd0(local_c);
        local_24 = *puVar3;
        local_20 = puVar3[1];
        local_1c = puVar3[2];
        puVar3 = (undefined4 *)FUN_004a1dd0(local_c);
        FUN_00446bf0(local_24,local_20,local_1c,*puVar3,puVar3[1],puVar3[2],uVar4,uVar5,uVar6);
      }
    }
  }
  return;
}


/* ==== 0044e970 FUN_0044e970 ==== */

void FUN_0044e970(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 this_val;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_006fb8a0 == 0) {
    if (param_2 == 0) {
      cVar1 = FUN_004290e0();
      if (cVar1 != '\x01') {
        this_val = FUN_0049eb50(&DAT_006fbb5c,DAT_005a1ce8);
        FUN_0049e570(this_val);
        DAT_006fba3c = 0;
        FUN_00403100(&DAT_006fbabc,0);
        return;
      }
    }
    DVar2 = GetTickCount();
    if (99 < (int)(DVar2 - DAT_006fba40)) {
      DAT_006fba40 = DVar2;
      if (DAT_006fba74 < 1) {
        cVar1 = FUN_004290e0();
        if (cVar1 != '\x01') {
          FUN_00403100(&DAT_006fbabc,0);
          return;
        }
      }
      this_val = FUN_0049eb50(&DAT_006fbb5c,DAT_005a1ce8);
      iVar3 = FUN_0049e630(this_val);
      if ((iVar3 == 0) && (DAT_006fba3c == 0)) {
        uVar4 = 0;
        this_val = FUN_0049eb50(&DAT_006fbb5c,DAT_005a1ce8);
        FUN_0049e550(this_val,uVar4);
        DAT_006fba3c = 1;
      }
      cVar1 = FUN_004290e0();
      if (cVar1 == '\0') {
        DAT_006fba74 = DAT_006fba74 + -1;
      }
      FUN_00403100(&DAT_006fbabc,1);
    }
  }
  return;
}


/* ==== 0044f0d0 FUN_0044f0d0 ==== */

void FUN_0044f0d0(void)

{
  DAT_005a1ce8 = FUN_00450900(s_TURBO_005a200c);
  DAT_006fba28 = FUN_00450900(s_SLIP_005a2014);
  return;
}


