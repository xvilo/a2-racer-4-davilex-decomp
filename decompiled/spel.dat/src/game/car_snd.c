/* spel.dat — game/car_snd.cpp: 50 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0042dda0 FUN_0042dda0 ==== */

void FUN_0042dda0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0042ddb0 FUN_0042ddb0 ==== */

void FUN_0042ddb0(void)

{
  FUN_005584e0(&LAB_0042ddc0);
  return;
}


/* ==== 0042dde0 FUN_0042dde0 ==== */

void FUN_0042dde0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0042ddf0 FUN_0042ddf0 ==== */

void FUN_0042ddf0(void)

{
  FUN_005584e0(&LAB_0042de00);
  return;
}


/* ==== 0042de60 FUN_0042de60 ==== */

void FUN_0042de60(void)

{
  char cVar1;
  undefined4 this_val;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_74 [16];
  undefined4 uStack_64;
  uint uStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  uint i;
  uint local_30;
  int j;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a2a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_val = FUN_0042aee0();
  if (DAT_006fb964 == 0) {
    FUN_004c3fa0();
    DAT_005d2ab0 = 0;
    ExceptionList = local_c;
    return;
  }
  if (DAT_006fb8e8 == 0) {
    bVar7 = DAT_006fb954 != 1;
  }
  else {
    bVar7 = DAT_006fb954 == 1;
  }
  local_30 = (uint)bVar7;
  FUN_0042e0d0();
  FUN_0042e290();
  i = 0;
  j = 0;
  if (0 < DAT_005d2ab0) {
    puVar4 = &DAT_005ce9e8;
    puVar5 = &DAT_005973c8;
    do {
      uVar2 = FUN_004a71e0();
      uVar3 = *puVar5;
      if (i == DAT_006fba5c) {
        i = i + 1;
      }
      puStack_54 = (undefined1 *)0x42df4b;
      FUN_0049df90(local_1c,s_RACER__d_005975ec);
      local_4 = 0;
      FUN_00424660(&DAT_005d3458);
      puStack_54 = &LAB_00419600;
      uStack_58 = 1;
      puStack_5c = (undefined1 *)local_30;
      uStack_64 = uVar2;
      uStack_60 = uVar3 & 1;
      FUN_0041c870(auStack_74,local_1c);
      uVar3 = FUN_0042a3d0();
      *puVar4 = uVar3;
      FUN_0040e250(uVar3);
      puStack_5c = local_1c;
      iVar6 = uVar3 * 0xf0;
      *(undefined4 *)(iVar6 + 0x60 + DAT_00715e50) = 0;
      *(uint *)(iVar6 + 0x1c + DAT_00715e50) = *(uint *)(iVar6 + 0x1c + DAT_00715e50) | 3;
      uStack_60 = 0x42dfe9;
      FUN_0041c870(&uStack_58);
      uStack_60 = 0x42dff3;
      puStack_5c = (undefined1 *)uVar3;
      FUN_0042b550(this_val);
      FUN_004353e0();
      *(undefined4 *)(iVar6 + 0x68 + DAT_00715e50) = 1;
      *puVar4 = uVar3;
      FUN_00424660(&DAT_005d3458);
      FUN_00403140(puVar4 + 0x25);
      puVar5[1] = uVar3;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[-2] = i;
      FUN_004c3fa0();
      i = i + 1;
      local_4 = 0xffffffff;
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339();
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
      j = j + 1;
      puVar4 = puVar4 + 0xa5;
      puVar5 = puVar5 + 0x16;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
    } while (j < DAT_005d2ab0);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0042e0d0 FUN_0042e0d0 ==== */

void FUN_0042e0d0(void)

{
  int iVar1;
  int j;
  int *piVar2;
  int i;
  int *piVar3;
  int local_1c [7];
  
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[DAT_006fbaa4] = 1;
  if (0 < DAT_005d2ab0) {
    iVar1 = DAT_005d2ab0 + 1;
    piVar3 = &DAT_005973c8;
    i = DAT_005d2ab0;
    do {
      j = 0;
      if (0 < iVar1) {
        piVar2 = local_1c;
        do {
          if (*piVar2 == 0) {
            *piVar3 = j;
            local_1c[j] = 1;
            break;
          }
          j = j + 1;
          piVar2 = piVar2 + 1;
        } while (j < iVar1);
      }
      piVar3 = piVar3 + 0x16;
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 0042e150 FUN_0042e150 ==== */

void __thiscall FUN_0042e150(void)

{
  int iVar1;
  int m;
  int *piVar2;
  int *piVar3;
  int j;
  int k;
  int i;
  
  i = 0;
  j = DAT_005d2ab0;
  if (0 < DAT_005d2ab0) {
    piVar2 = &DAT_005973c4;
    piVar3 = &DAT_005cea38;
    do {
      if (piVar2[3] == 0) {
        FUN_004c3fa0(s_Racer__d_not_yet_finished_0059761c,i);
        FUN_0042e340(piVar3[-0x14]);
        j = DAT_00715f04 * DAT_006fb8fc;
        FUN_004c3fa0(s_Total_travelled_distance___d_00597638,*piVar3);
        FUN_004c3fa0(s_Total_chunks__d_Player__d_00597658,j,DAT_006fbab4);
        k = DAT_006fbab4 - *piVar3;
        FUN_004c3fa0(s_Chunks_to_go__d_00597674,k);
        j = *piVar2 / (j - k);
        FUN_004c3fa0(s_Timer_per_chunk__d_00597688,j);
        j = j * k;
        FUN_004c3fa0(s_Extra_time_to_finish_track__d_0059769c,j);
        j = *piVar2 + j;
        *piVar2 = j;
        FUN_004c3fa0(s_Final_time__d_005976bc,j);
        j = DAT_005d2ab0;
      }
      i = i + 1;
      piVar3 = piVar3 + 0xa5;
      piVar2 = piVar2 + 0x16;
    } while (i < j);
  }
  k = 0;
  if (0 < j) {
    piVar2 = &DAT_005973c8;
    do {
      *piVar2 = 0;
      m = 0;
      piVar3 = &DAT_005973c4;
      do {
        if ((m != k) && (*piVar3 < piVar2[-1])) {
          *piVar2 = *piVar2 + 1;
        }
        iVar1 = DAT_006fbaa4;
        m = m + 1;
        piVar3 = piVar3 + 0x16;
      } while (m < j);
      k = k + 1;
      piVar2 = piVar2 + 0x16;
    } while (k < j);
    if (0 < j) {
      piVar2 = &DAT_005973c8;
      do {
        if (iVar1 <= *piVar2) {
          *piVar2 = *piVar2 + 1;
        }
        piVar2 = piVar2 + 0x16;
        j = j + -1;
      } while (j != 0);
    }
  }
  return;
}


/* ==== 0042e290 FUN_0042e290 ==== */

void FUN_0042e290(void)

{
  if (DAT_006fb964 != 0) {
    FUN_00448610(8,0xfffffff,0);
    FUN_00448610(9,0xfffffff,0);
    FUN_00448610(10,0xfffffff,0);
    FUN_00448610(0xc,0xfffffff,0);
    FUN_00448610(0xd,0xfffffff,0);
    FUN_00448610(0xe,0xfffffff,0);
  }
  return;
}


/* ==== 0042e300 FUN_0042e300 ==== */

void FUN_0042e300(void)

{
  if (DAT_006fb964 != 0) {
    FUN_004482c0(8);
    FUN_004482c0(9);
    FUN_004482c0(10);
    FUN_004482c0(0xc);
    FUN_004482c0(0xd);
    FUN_004482c0(0xe);
  }
  return;
}


/* ==== 0042e340 FUN_0042e340 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e340(int param_1)

{
  if (DAT_006fb964 != 0) {
    if (DAT_005973cc == param_1) {
      DAT_005973c4 = FUN_00448470(8);
      FUN_00448330(8);
      DAT_005973d0 = 1;
    }
    if (DAT_00597424 == param_1) {
      DAT_0059741c = FUN_00448470(9);
      FUN_00448330(9);
      DAT_00597428 = 1;
    }
    if (DAT_0059747c == param_1) {
      _DAT_00597474 = FUN_00448470(10);
      FUN_00448330(10);
      _DAT_00597480 = 1;
    }
    if (DAT_005974d4 == param_1) {
      _DAT_005974cc = FUN_00448470(0xc);
      FUN_00448330(0xc);
      _DAT_005974d8 = 1;
    }
    if (DAT_0059752c == param_1) {
      _DAT_00597524 = FUN_00448470(0xd);
      FUN_00448330(0xd);
      _DAT_00597530 = 1;
    }
    if (DAT_00597584 == param_1) {
      _DAT_0059757c = FUN_00448470(0xe);
      FUN_00448330(0xe);
      _DAT_00597588 = 1;
    }
  }
  return;
}


/* ==== 0042e440 FUN_0042e440 ==== */

void FUN_0042e440(void)

{
  undefined4 *puVar1;
  int i;
  undefined4 local_18 [6];
  
  if (DAT_006fb964 != 0) {
    puVar1 = (undefined4 *)&stack0xffffffe4;
    i = 6;
    do {
      puVar1 = puVar1 + 1;
      FUN_00448330(*puVar1);
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 0042e4a0 FUN_0042e4a0 ==== */

void FUN_0042e4a0(void)

{
  undefined4 *puVar1;
  int i;
  undefined4 local_18 [6];
  
  if (DAT_006fb964 != 0) {
    puVar1 = (undefined4 *)&stack0xffffffe4;
    i = 6;
    do {
      puVar1 = puVar1 + 1;
      FUN_004483a0(*puVar1);
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 0042e540 FUN_0042e540 ==== */

void FUN_0042e540(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0042e550 FUN_0042e550 ==== */

void FUN_0042e550(void)

{
  FUN_005584e0(&LAB_0042e560);
  return;
}


/* ==== 0042e580 FUN_0042e580 ==== */

void FUN_0042e580(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0042e590 FUN_0042e590 ==== */

void FUN_0042e590(void)

{
  FUN_005584e0(&LAB_0042e5a0);
  return;
}


/* ==== 0042e5b0 FUN_0042e5b0 ==== */

void * __thiscall FUN_0042e5b0(void *this)

{
  undefined1 *operator_new_result;
  float10 fVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a302;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)((int)this + 0x28) = &PTR_LAB_00576644;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_11;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x2c) = operator_new_result;
  local_4 = 0;
  *(undefined ***)((int)this + 0x34) = &PTR_LAB_00576644;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_11;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x38) = operator_new_result;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_00576644;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_11;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x44) = operator_new_result;
  local_4._0_1_ = 2;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_00576634;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_11;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x4c) = operator_new_result;
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00576644;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_11;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x54) = operator_new_result;
  local_4._0_1_ = 4;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_00576634;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_11;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x5c) = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0;
  fVar1 = (float10)FUN_004a67f0(&DAT_007128b0);
  *(float *)((int)this + 0x60) = (float)fVar1;
  ExceptionList = local_c;
  return this;
}


/* ==== 0042e730 FUN_0042e730 ==== */

void __thiscall FUN_0042e730(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  int this_val;
  
  puStack_8 = &LAB_0056a34e;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_0042f0d0();
  this_val = *(int *)((int)this + 0x5c);
  local_4._0_1_ = 4;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_00576634;
  if (this_val != 0) {
    FUN_0042f530(*(undefined4 *)(this_val + 4),*(undefined4 *)(this_val + 8));
    FUN_0054b339(*(undefined4 *)(this_val + 4));
    *(undefined4 *)(this_val + 4) = 0;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  this_val = *(int *)((int)this + 0x54);
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00576644;
  if (this_val != 0) {
    FUN_004da4d0(this_val);
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  this_val = *(int *)((int)this + 0x4c);
  local_4._0_1_ = 2;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_00576634;
  if (this_val != 0) {
    FUN_0042f530(*(undefined4 *)(this_val + 4),*(undefined4 *)(this_val + 8));
    FUN_0054b339(*(undefined4 *)(this_val + 4));
    *(undefined4 *)(this_val + 4) = 0;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  this_val = *(int *)((int)this + 0x44);
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_00576644;
  if (this_val != 0) {
    FUN_004da4d0(this_val);
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  this_val = *(int *)((int)this + 0x38);
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)((int)this + 0x34) = &PTR_LAB_00576644;
  if (this_val != 0) {
    FUN_004da4d0(this_val);
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  this_val = *(int *)((int)this + 0x2c);
  *(undefined ***)((int)this + 0x28) = &PTR_LAB_00576644;
  local_4 = 0xffffffff;
  if (this_val != 0) {
    FUN_004da4d0(this_val);
    FUN_0054b339(this_val);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 0042e890 FUN_0042e890 ==== */

void FUN_0042e890(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int i;
  char *pcVar3;
  char local_40 [64];
  
  FUN_004c3d10(param_1,param_2,local_40,0x3f);
  i = -1;
  pcVar3 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s__d__Can_t_find_car_sound_sett_00597704,
               s_C__Work_A2IV_Game_prog_car_snd_c_005976e0,0x55,param_1,param_2);
  i = FUN_004c3d60(local_40,0);
  FUN_004a6980(i == 4,s__s___d__Incorrect_number_of_argu_00597768,
               s_C__Work_A2IV_Game_prog_car_snd_c_00597744,0x5e,param_2,i,4);
  uVar2 = FUN_004c3ec0(0);
  *param_3 = uVar2;
  uVar2 = FUN_004c3ec0(1);
  param_3[1] = uVar2;
  i = FUN_004c3ec0(2);
  param_3[2] = i;
  if ((i < 0) || (100 < i)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_004a6980(uVar2,s__s___d__Incorrect_value_for_mini_005977f0,
               s_C__Work_A2IV_Game_prog_car_snd_c_005977cc,0x66,i,param_1);
  i = FUN_004c3ec0(3);
  param_3[3] = i;
  if ((i < 0) || (100 < i)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_004a6980(uVar2,s__s___d__Incorrect_value_for_maxi_00597858,
               s_C__Work_A2IV_Game_prog_car_snd_c_00597834,0x6b,param_3[2],param_1);
  return;
}


/* ==== 0042e990 FUN_0042e990 ==== */

void FUN_0042e990(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_0042eea0(in_ECX,param_1,param_2);
  return;
}


/* ==== 0042e9b0 FUN_0042e9b0 ==== */

void __thiscall FUN_0042e9b0(void *this,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *str2;
  int i;
  CHAR local_60 [16];
  undefined1 local_50 [16];
  char local_40 [64];
  
  FUN_004c3d10(param_2,s_GearA_0059789c,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_005978a4);
  uVar2 = FUN_0049ecb0(&DAT_006fbb5c,local_40);
  *(undefined4 *)((int)this + 0x24) = uVar2;
  i = FUN_0049eb50(&DAT_006fbb5c,uVar2);
  str2 = *(char **)(i + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar2 = FUN_004c7c50(str2,0);
  *(undefined4 *)(i + 0x38) = uVar2;
  i = 0;
  if (0 < *(int *)this) {
    do {
      wsprintfA(local_60,s__s_d_005978e0,s_GearA_005978d8,i);
      FUN_0042e890(param_2,local_60,local_50);
      FUN_0042f660(*(int *)((int)this + 0x2c),*(undefined4 *)(*(int *)((int)this + 0x2c) + 8),1,
                   local_50);
      i = i + 1;
    } while (i < *(int *)this);
  }
  return;
}


/* ==== 0042ea90 FUN_0042ea90 ==== */

void __thiscall FUN_0042ea90(void *this,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *str2;
  int i;
  CHAR local_60 [16];
  undefined1 local_50 [16];
  char local_40 [64];
  
  FUN_004c3d10(param_2,s_GearB_005978e8,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_005978f0);
  uVar2 = FUN_0049ecb0(&DAT_006fbb5c,local_40);
  *(undefined4 *)((int)this + 0x30) = uVar2;
  i = FUN_0049eb50(&DAT_006fbb5c,uVar2);
  str2 = *(char **)(i + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar2 = FUN_004c7c50(str2,0);
  *(undefined4 *)(i + 0x38) = uVar2;
  i = 0;
  if (0 < *(int *)this) {
    do {
      wsprintfA(local_60,s__s_d_0059792c,s_GearB_00597924,i);
      FUN_0042e890(param_2,local_60,local_50);
      FUN_0042f660(*(int *)((int)this + 0x38),*(undefined4 *)(*(int *)((int)this + 0x38) + 8),1,
                   local_50);
      i = i + 1;
    } while (i < *(int *)this);
  }
  return;
}


/* ==== 0042eb70 FUN_0042eb70 ==== */

void __thiscall FUN_0042eb70(void *this,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *str2;
  int i;
  CHAR local_60 [16];
  undefined1 local_50 [16];
  char local_40 [64];
  
  FUN_004c3d10(param_2,s_Stat_00597934,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_0059793c);
  uVar2 = FUN_0049ecb0(&DAT_006fbb5c,local_40);
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  i = FUN_0049eb50(&DAT_006fbb5c,uVar2);
  str2 = *(char **)(i + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar2 = FUN_004c7c50(str2,0);
  *(undefined4 *)(i + 0x38) = uVar2;
  i = 0;
  if (0 < *(int *)this) {
    do {
      wsprintfA(local_60,s__s_d_00597978,s_Stat_00597970,i);
      FUN_0042e890(param_2,local_60,local_50);
      FUN_0042f660(*(int *)((int)this + 0x44),*(undefined4 *)(*(int *)((int)this + 0x44) + 8),1,
                   local_50);
      i = i + 1;
    } while (i < *(int *)this);
  }
  return;
}


/* ==== 0042ec50 FUN_0042ec50 ==== */

void __thiscall FUN_0042ec50(void *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *str2;
  undefined4 uVar3;
  int i;
  int j;
  undefined4 local_124;
  undefined1 local_120 [16];
  CHAR local_110 [16];
  char local_100 [128];
  char local_80 [128];
  
  FUN_004c3d10(param_2,s_Cylinders_00597980,local_100,0x7f);
  i = -1;
  str2 = local_100;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  if (i != -2) {
    i = FUN_004c3d60(local_100,0);
    j = 0;
    if (0 < i) {
      do {
        FUN_004c3f10(j,local_80,0x7f);
        local_124 = FUN_0049ecb0(&DAT_006fbb5c,local_80);
        iVar2 = FUN_0049eb50(&DAT_006fbb5c,local_124);
        str2 = *(char **)(iVar2 + 0x1c);
        if (str2 == (char *)0x0) {
          str2 = "";
        }
        uVar3 = FUN_004c7c50(str2,0);
        *(undefined4 *)(iVar2 + 0x38) = uVar3;
        FUN_004a5620(*(int *)((int)this + 0x4c),*(undefined4 *)(*(int *)((int)this + 0x4c) + 8),1,
                     &local_124);
        j = j + 1;
      } while (j < i);
      if ((0 < i) && (i = 0, 0 < *(int *)this)) {
        do {
          wsprintfA(local_110,s__s_d_00597990,&PTR_DAT_0059798c,i);
          FUN_0042e890(param_2,local_110,local_120);
          FUN_0042f660(*(int *)((int)this + 0x54),*(undefined4 *)(*(int *)((int)this + 0x54) + 8),1,
                       local_120);
          i = i + 1;
        } while (i < *(int *)this);
      }
    }
  }
  return;
}


/* ==== 0042ed80 FUN_0042ed80 ==== */

void __thiscall FUN_0042ed80(void *this,undefined4 param_2)

{
  undefined4 uVar1;
  int i;
  undefined1 local_20 [32];
  
  uVar1 = param_2;
  i = 0;
  if (0 < *(int *)this) {
    do {
      FUN_005587a3(local_20,PTR_s_MaxSpeedGear_d_005976cc,i);
      param_2 = FUN_004c3cd0(uVar1,local_20);
      FUN_004a5620(*(int *)((int)this + 0x5c),*(undefined4 *)(*(int *)((int)this + 0x5c) + 8),1,
                   &param_2);
      i = i + 1;
    } while (i < *(int *)this);
  }
  return;
}


/* ==== 0042ede0 FUN_0042ede0 ==== */

void __thiscall FUN_0042ede0(void *this)

{
  void *operator_new_result;
  int i;
  
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_004c4150(s__s___d__Minimum_RPM_table_alread_005979bc,
                 s_C__Work_A2IV_Game_prog_car_snd_c_00597998,0x102);
  }
  operator_new_result = operator_new(*(int *)this << 2);
  *(void **)((int)this + 0x14) = operator_new_result;
  if (operator_new_result == (void *)0x0) {
    FUN_004c4150(s__s___d__Could_not_allocate_RPM_t_00597a10,
                 s_C__Work_A2IV_Game_prog_car_snd_c_005979ec,0x107);
  }
  i = 0;
  if (0 < *(int *)this) {
    do {
      i = i + 1;
      *(undefined4 *)(*(int *)((int)this + 0x14) + -4 + i * 4) = 0xffffffff;
    } while (i < *(int *)this);
  }
  return;
}


/* ==== 0042ee70 FUN_0042ee70 ==== */

void __thiscall FUN_0042ee70(void *this,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)((int)this + 0x14) + param_2 * 4);
  if (*piVar1 == -1) {
    *piVar1 = param_3;
  }
  return;
}


/* ==== 0042eea0 FUN_0042eea0 ==== */

void __thiscall FUN_0042eea0(void *this,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  char *str2;
  undefined4 uVar3;
  undefined1 local_60 [32];
  char local_40 [64];
  
  i = FUN_00448c90(&DAT_006fa558,param_3);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_60,s__s_d_00597a3c,&PTR_DAT_00597a38,param_2,puVar2);
  i = FUN_004c3cd0(local_60,s_NrGears_00597a44);
  *(int *)this = i;
  if ((i < 0) || (6 < i)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  i = FUN_00448c90(&DAT_006fa558,param_3);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004a6980(uVar3,s__s___d__Incorrect_value_for_nr_o_00597a70,
               s_C__Work_A2IV_Game_prog_car_snd_c_00597a4c,0x13b,puVar2,param_2,*(undefined4 *)this,
               local_60);
  FUN_0042ede0(this);
  FUN_0042e9b0(this,local_60);
  FUN_0042ea90(this,local_60);
  FUN_0042eb70(this,local_60);
  FUN_0042ec50(this,local_60);
  FUN_0042ed80(this,local_60);
  FUN_004c3d10(local_60,s_Start_00597ac8,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_00597ad0,param_2);
  uVar3 = FUN_0049ecb0(&DAT_006fbb5c,local_40);
  *(undefined4 *)((int)this + 8) = uVar3;
  FUN_004c3d10(local_60,s_SwitchGear_00597b0c,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_00597b18,param_2);
  uVar3 = FUN_0049ecb0(&DAT_006fbb5c,local_40);
  *(undefined4 *)((int)this + 0xc) = uVar3;
  i = FUN_0049eb50(&DAT_006fbb5c,uVar3);
  str2 = *(char **)(i + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar3 = FUN_004c7c50(str2,0);
  *(undefined4 *)(i + 0x38) = uVar3;
  uVar3 = FUN_004c3cd0(local_60,s_MinRpm_00597b58);
  FUN_0042ee70(this,0,uVar3);
  uVar3 = FUN_004c3cd0(local_60,s_MaxRpm_00597b60);
  *(undefined4 *)((int)this + 0x18) = uVar3;
  uVar3 = FUN_004c3cd0(local_60,s_MinSpeed_00597b68);
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar3 = FUN_004c3cd0(local_60,s_MaxSpeed_00597b74);
  *(undefined4 *)((int)this + 0x20) = uVar3;
  return;
}


/* ==== 0042f0a0 FUN_0042f0a0 ==== */

void __thiscall FUN_0042f0a0(void *this)

{
  undefined4 this_val;
  undefined4 uVar1;
  
  uVar1 = 0;
  this_val = FUN_0049eb50(&DAT_006fbb5c,*(undefined4 *)((int)this + 8));
  FUN_0049e550(this_val,uVar1);
  *(undefined4 *)((int)this + 4) = 1;
  return;
}


/* ==== 0042f0d0 FUN_0042f0d0 ==== */

void __thiscall FUN_0042f0d0(void *this)

{
  undefined4 this_val;
  
  if (*(int *)((int)this + 4) != 0) {
    if (*(int *)((int)this + 8) != -1) {
      this_val = FUN_0049eb50(&DAT_006fbb5c,*(int *)((int)this + 8));
      FUN_0049e570(this_val);
    }
    if (*(int *)((int)this + 0xc) != -1) {
      this_val = FUN_0049eb50(&DAT_006fbb5c,*(int *)((int)this + 0xc));
      FUN_0049e570(this_val);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


/* ==== 0042f120 FUN_0042f120 ==== */

void FUN_0042f120(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int __ftol_result_2;
  int __ftol_result;
  undefined4 this_val;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 4);
  iVar2 = *(int *)(iVar1 + param_4 * 0x10);
  __ftol_result_2 = __ftol();
  iVar1 = *(int *)(iVar1 + param_4 * 0x10 + 8);
  __ftol_result = __ftol();
  FUN_004a6980(param_1 != -1,s__s___d___Sound_source_not_initte_00597ba4,
               s_C__Work_A2IV_Game_prog_car_snd_c_00597b80,0x1d8);
  this_val = FUN_0049eb50(&DAT_006fbb5c,param_1);
  FUN_0049e3f0(this_val,__ftol_result_2 + iVar2);
  FUN_0049e340(this_val,__ftol_result + iVar1);
  return;
}


/* ==== 0042f220 FUN_0042f220 ==== */

void __thiscall FUN_0042f220(void *this,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int __ftol_result;
  int iVar3;
  undefined4 this_val;
  float10 fVar4;
  
  iVar2 = (*(code *)**(undefined4 **)((int)this + 0x48))();
  if (iVar2 != 0) {
    FUN_00558625();
    iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x54) + 4) + param_3 * 0x10);
    __ftol_result = __ftol();
    fVar4 = (float10)FUN_004a67f0(&DAT_007128b0);
    if ((float10)((float)(__ftol_result + iVar1) * 0.001) <=
        fVar4 - (float10)*(float *)((int)this + 0x60)) {
      iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x54) + 4) + 8 + param_3 * 0x10);
      __ftol_result = __ftol();
      iVar3 = FUN_00558625();
      this_val = FUN_0049eb50(&DAT_006fbb5c,
                              *(undefined4 *)
                               (*(int *)(*(int *)((int)this + 0x4c) + 4) + (iVar3 % iVar2) * 4));
      FUN_0049e550(this_val,0);
      FUN_0049e340(this_val,__ftol_result + iVar1);
      fVar4 = (float10)FUN_004a67f0(&DAT_007128b0);
      *(float *)((int)this + 0x60) = (float)fVar4;
    }
  }
  return;
}


/* ==== 0042f370 FUN_0042f370 ==== */

void FUN_0042f370(int param_1)

{
  undefined4 this_val;
  undefined4 uVar1;
  
  if (param_1 == -1) {
    FUN_004c4150(s__s___d__Sound_not_initialised__00597bec,
                 s_C__Work_A2IV_Game_prog_car_snd_c_00597bc8,0x224);
  }
  uVar1 = 1;
  this_val = FUN_0049eb50(&DAT_006fbb5c,param_1);
  FUN_0049e550(this_val,uVar1);
  return;
}


/* ==== 0042f3b0 FUN_0042f3b0 ==== */

void __thiscall FUN_0042f3b0(void *this)

{
  FUN_0042f370(*(undefined4 *)((int)this + 0x24));
  FUN_0042f370(*(undefined4 *)((int)this + 0x30));
  FUN_0042f370(*(undefined4 *)((int)this + 0x3c));
  return;
}


/* ==== 0042f3e0 FUN_0042f3e0 ==== */

void __thiscall FUN_0042f3e0(void *this,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 this_val;
  int i;
  
  if (*(int *)((int)this + 4) != 0) {
    this_val = FUN_0049eb50(&DAT_006fbb5c,*(undefined4 *)((int)this + 8));
    i = FUN_0049e630(this_val);
    if (i == 0) {
      if (*(int *)((int)this + 0x10) == -1) {
        FUN_0042f3b0(this);
      }
      for (i = 0; (i < *(int *)this &&
                  (*(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4) + i * 4) < param_4)); i = i + 1
          ) {
      }
      if (i == *(int *)this) {
        i = i + -1;
      }
      FUN_0042f120(*(undefined4 *)((int)this + 0x24),(int)this + 0x28,param_4,i);
      FUN_0042f120(*(undefined4 *)((int)this + 0x30),(int)this + 0x34,param_4,i);
      FUN_0042f120(*(undefined4 *)((int)this + 0x3c),(int)this + 0x40,param_4,i);
      FUN_0042f220(this,param_4,i);
    }
  }
  return;
}


/* ==== 0042f4c0 FUN_0042f4c0 ==== */

void FUN_0042f4c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0042f4d0 FUN_0042f4d0 ==== */

void FUN_0042f4d0(void)

{
  FUN_005584e0(&LAB_0042f4e0);
  return;
}


/* ==== 0042f500 FUN_0042f500 ==== */

void FUN_0042f500(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0042f510 FUN_0042f510 ==== */

void FUN_0042f510(void)

{
  FUN_005584e0(&LAB_0042f520);
  return;
}


/* ==== 0042f530 FUN_0042f530 ==== */

void FUN_0042f530(void)

{
  return;
}


/* ==== 0042f540 FUN_0042f540 ==== */

void __thiscall FUN_0042f540(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00576644;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 0042f5a0 FUN_0042f5a0 ==== */

int __thiscall FUN_0042f5a0(void *this)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)this)();
  return *(int *)(*(int *)((int)this + 4) + 4) + (iVar1 + -1) * 0x10;
}


/* ==== 0042f620 FUN_0042f620 ==== */

void __thiscall FUN_0042f620(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00576634;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 0042f660 FUN_0042f660 ==== */

void __thiscall FUN_0042f660(void *this,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int i;
  int iVar2;
  undefined4 *operator_new_result;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar4 = param_2;
  puVar3 = *(undefined4 **)((int)this + 8);
  if (param_3 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar3 >> 4)) {
    if (param_3 <= (uint)((int)puVar3 - (int)param_2 >> 4)) {
      if (param_3 != 0) {
        puVar4 = puVar3;
        for (puVar6 = puVar3 + param_3 * -4; puVar6 != puVar3; puVar6 = puVar6 + 4) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar6;
            puVar4[1] = puVar6[1];
            puVar4[2] = puVar6[2];
            puVar4[3] = puVar6[3];
          }
          puVar4 = puVar4 + 4;
        }
        puVar3 = *(undefined4 **)((int)this + 8);
        puVar4 = *(undefined4 **)((int)this + 8) + param_3 * -4;
        while (param_2 != puVar4) {
          puVar3[-4] = puVar4[-4];
          puVar3[-3] = puVar4[-3];
          puVar3[-2] = puVar4[-2];
          puVar3[-1] = puVar4[-1];
          puVar3 = puVar3 + -4;
          puVar4 = puVar4 + -4;
        }
        puVar3 = param_2 + param_3 * 4;
        for (; param_2 != puVar3; param_2 = param_2 + 4) {
          *param_2 = *param_4;
          param_2[1] = param_4[1];
          param_2[2] = param_4[2];
          param_2[3] = param_4[3];
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 0x10;
      }
      return;
    }
    puVar4 = param_2 + param_3 * 4;
    if (param_2 != puVar3) {
      puVar6 = puVar4 + param_3 * -4;
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar6;
          puVar4[1] = puVar6[1];
          puVar4[2] = puVar6[2];
          puVar4[3] = puVar6[3];
        }
        puVar6 = puVar6 + 4;
        puVar4 = puVar4 + 4;
      } while (puVar6 != puVar3);
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    for (i = param_3 - ((int)puVar3 - (int)param_2 >> 4); i != 0; i = i + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
        puVar3[3] = param_4[3];
      }
      puVar3 = puVar3 + 4;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    for (; param_2 != puVar3; param_2 = param_2 + 4) {
      *param_2 = *param_4;
      param_2[1] = param_4[1];
      param_2[2] = param_4[2];
      param_2[3] = param_4[3];
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 0x10;
    return;
  }
  i = *(int *)((int)this + 4);
  if ((i == 0) || (uVar5 = (int)puVar3 - i >> 4, uVar5 <= param_3)) {
    uVar5 = param_3;
  }
  if (i == 0) {
    i = 0;
  }
  else {
    i = (int)puVar3 - i >> 4;
  }
  i = i + uVar5;
  iVar2 = i;
  if (i < 0) {
    iVar2 = 0;
  }
  operator_new_result = operator_new(iVar2 << 4);
  puVar6 = operator_new_result;
  for (puVar3 = *(undefined4 **)((int)this + 4); puVar3 != param_2; puVar3 = puVar3 + 4) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar3;
      puVar6[1] = puVar3[1];
      puVar6[2] = puVar3[2];
      puVar6[3] = puVar3[3];
    }
    puVar6 = puVar6 + 4;
  }
  if (param_3 != 0) {
    param_2 = (undefined4 *)param_3;
    puVar3 = puVar6;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
        puVar3[3] = param_4[3];
      }
      puVar3 = puVar3 + 4;
      param_2 = (undefined4 *)((int)param_2 - 1);
    } while (param_2 != (undefined4 *)0x0);
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar3 = puVar6 + param_3 * 4;
  if (puVar4 != puVar1) {
    puVar4 = (undefined4 *)((int)puVar3 + (param_3 * -0x10 - (int)puVar6) + (int)puVar4);
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
        puVar3[3] = puVar4[3];
      }
      puVar4 = puVar4 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar4 != puVar1);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = operator_new_result + i * 4;
  if (iVar2 != 0) {
    *(undefined4 **)((int)this + 4) = operator_new_result;
    *(undefined4 **)((int)this + 8) =
         operator_new_result + ((*(int *)((int)this + 8) - iVar2 >> 4) + param_3) * 4;
    return;
  }
  *(undefined4 **)((int)this + 4) = operator_new_result;
  *(undefined4 **)((int)this + 8) = operator_new_result + param_3 * 4;
  return;
}


/* ==== 0042f980 FUN_0042f980 ==== */

void FUN_0042f980(void)

{
  FUN_00558643(&DAT_006c32f0,0x34,10,&LAB_0042f9d0,&DAT_0042fa50);
  return;
}


/* ==== 0042f9a0 FUN_0042f9a0 ==== */

void FUN_0042f9a0(void)

{
  FUN_005584e0(&LAB_0042f9b0);
  return;
}


/* ==== 0042fa60 FUN_0042fa60 ==== */

undefined4 FUN_0042fa60(int param_1)

{
  int *in_ECX;
  
  if (param_1 < 0) {
    return 0;
  }
  *in_ECX = param_1;
  return 1;
}


/* ==== 0042fa80 FUN_0042fa80 ==== */

undefined4 FUN_0042fa80(int param_1)

{
  int in_ECX;
  
  if (param_1 < 0) {
    return 0;
  }
  *(int *)(in_ECX + 4) = param_1;
  return 1;
}


/* ==== 0042faa0 FUN_0042faa0 ==== */

undefined4 __thiscall FUN_0042faa0(void *this,int param_2,undefined4 param_3)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_20 [4];
  uint uStack_10;
  
  FUN_0042fa60(param_2);
  FUN_0042fa80(param_3);
  iVar1 = FUN_004a8c50(*(int *)this * 0xf0 + DAT_00715e50);
  iVar1 = iVar1 * 0xac;
  *(float *)((int)this + 0x1c) =
       (*(float *)(iVar1 + 0x58 + DAT_0073b5c8) + *(float *)(iVar1 + 0x10 + DAT_0073b5c8)) * 0.5;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(iVar1 + 0x5c + DAT_0073b5c8);
  *(float *)((int)this + 0x24) = *(float *)(iVar1 + 0x60 + DAT_0073b5c8) + 0.1;
  iVar1 = FUN_004a8c50(*(int *)((int)this + 4) * 0xf0 + DAT_00715e50);
  iVar1 = iVar1 * 0xac;
  *(float *)((int)this + 0x10) =
       (*(float *)(iVar1 + 0x58 + DAT_0073b5c8) + *(float *)(iVar1 + 0x10 + DAT_0073b5c8)) * 0.5;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar1 + 0x14 + DAT_0073b5c8);
  *(float *)((int)this + 0x18) = *(float *)(iVar1 + 0x18 + DAT_0073b5c8) - 0.1;
  FUN_004304e0(this,*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 8) = 0x45fa0000;
  *(undefined4 *)((int)this + 0xc) = 0x467a0000;
  *(int *)(*(int *)((int)this + 4) * 0xf0 + 0x44 + DAT_00715e50) = param_2;
  param_2 = param_2 * 0xf0;
  *(undefined4 *)(param_2 + 0x48 + DAT_00715e50) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(param_2 + 0x44 + DAT_00715e50) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x68 + DAT_00715e50) = 1;
  FUN_00430e10(this);
  iVar1 = FUN_004a8600(DAT_00715e50 + param_2,8);
  i = *(int *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x99);
  iVar1 = DAT_0073b5c8 + i * 0xac;
  if (*(int *)(DAT_0073b5c8 + i * 0xac) != 2) {
    FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,
                 s_______Libs_Win3DLib_Include_mesh_00597ca8,0xe1);
  }
  if (*(int *)(iVar1 + 4) != 2) {
    FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,
                 s_______Libs_Win3DLib_Include_mesh_00597ca8,0xe4);
  }
  if (*(int *)(iVar1 + 0x84) < 1) {
    FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,
                 s_______Libs_Win3DLib_Include_mesh_00597ca8,0xe7,0,*(undefined4 *)(iVar1 + 0x7c));
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x80);
  puVar3 = auStack_20;
  for (i = 8; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(uint *)((int)this + 0x30) = uStack_10 >> 0x18;
  return 0;
}


/* ==== 0042fd40 FUN_0042fd40 ==== */

undefined4 __thiscall FUN_0042fd40(void *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int this_val_2;
  uint __ftol_result;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_2c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  int this_val;
  
  if (*(char *)((int)this + 0x28) == '\0') {
    pfVar5 = (float *)(*(int *)this * 0xf0 + 0xbc + DAT_00715e50);
    fVar8 = (float10)FUN_004a6800(&DAT_007128b0);
    fVar8 = fVar8 * (float10)*(float *)(*(int *)this * 0xf0 + 0xbc + DAT_00715e50);
    *pfVar5 = (float)((float10)*pfVar5 - (fVar8 + fVar8));
    pfVar5 = (float *)(*(int *)this * 0xf0 + 0xc4 + DAT_00715e50);
    fVar8 = (float10)FUN_004a6800(&DAT_007128b0);
    *pfVar5 = (float)((float10)*pfVar5 -
                     fVar8 * (float10)*(float *)(*(int *)this * 0xf0 + 0xc4 + DAT_00715e50));
    pfVar5 = (float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50);
    fVar8 = (float10)FUN_004a6800(&DAT_007128b0);
    *pfVar5 = (float)((float10)*pfVar5 -
                     fVar8 * (float10)*(float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50) *
                     (float10)5.0);
    if (*(float *)((int)this + 0x2c) <= 2.0) {
      fVar8 = (float10)FUN_004a6800(&DAT_007128b0);
      *(float *)((int)this + 0x2c) = (float)(fVar8 + (float10)*(float *)((int)this + 0x2c));
    }
    else {
      FUN_004304e0(this,*(undefined4 *)((int)this + 4));
      *(uint *)(*(int *)this * 0xf0 + 0x1c + DAT_00715e50) =
           *(uint *)(*(int *)this * 0xf0 + 0x1c + DAT_00715e50) | 8;
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
  }
  else {
    pfVar5 = (float *)FUN_004b42a0(&local_18,(int)this + 0x1c,
                                   DAT_0073b0d0 +
                                   *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10
                                  );
    fVar3 = *pfVar5;
    fVar4 = pfVar5[2];
    this_val_2 = *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50);
    fVar1 = *(float *)(this_val_2 + DAT_0073b0d0 + 0x50 + this_val_2 * 0xa8);
    fVar2 = *(float *)(this_val_2 + DAT_0073b0d0 + this_val_2 * 0xa8 + 0x58);
    pfVar5 = (float *)FUN_004b42a0(local_c,(int)this + 0x10,
                                   DAT_0073b0d0 +
                                   *(int *)(*(int *)((int)this + 4) * 0xf0 + 0x24 + DAT_00715e50) *
                                   0xa9 + 0x10);
    this_val = *(int *)(*(int *)((int)this + 4) * 0xf0 + 0x24 + DAT_00715e50);
    this_val_2 = DAT_0073b0d0 + this_val;
    fVar1 = (fVar3 + fVar1) - (*pfVar5 + *(float *)(this_val_2 + 0x50 + this_val * 0xa8));
    fVar2 = (fVar4 + fVar2) - (pfVar5[2] + *(float *)(this_val_2 + 0x58 + this_val * 0xa8));
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    iVar6 = *(int *)this * 0xf0;
    iVar7 = DAT_0073b0d0 + *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9;
    local_18 = *(float *)(iVar7 + 0x74);
    local_14 = *(float *)(iVar7 + 0x78);
    local_10 = *(float *)(iVar7 + 0x7c);
    local_2c = local_14 - *(float *)(this_val_2 + this_val * 0xa8 + 0x78);
    if (local_2c < -2048.0) {
      local_2c = local_2c + 4096.0;
    }
    if (2048.0 < local_2c) {
      local_2c = local_2c - 4096.0;
    }
    if (15.0 < fVar1) {
      if (25.0 < fVar1) {
        *(undefined1 *)((int)this + 0x28) = 0;
        *(uint *)(iVar6 + 0x1c + DAT_00715e50) = *(uint *)(iVar6 + 0x1c + DAT_00715e50) | 8;
        pfVar5 = (float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50);
        if (2.0 < *(float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50)) {
          *pfVar5 = 2.0;
          return 0;
        }
        if (-2.0 <= *pfVar5) {
          return 0;
        }
        *pfVar5 = -2.0;
        return 0;
      }
      *(uint *)(iVar6 + 0x1c + DAT_00715e50) = *(uint *)(iVar6 + 0x1c + DAT_00715e50) | 8;
    }
    if (1024.0 < ABS(local_2c)) {
      if (0.0 <= *(float *)(*(int *)((int)this + 4) * 0xf0 + 0xc4 + DAT_00715e50)) {
        if (1024.0 < local_2c) {
          pfVar5 = (float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50);
          fVar8 = (float10)FUN_004a6800(&DAT_007128b0);
          *pfVar5 = (float)((float10)*pfVar5 -
                           ((float10)local_2c - (float10)1024.0) * fVar8 * (float10)0.05);
        }
        if (local_2c < -1024.0) {
          pfVar5 = (float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50);
          fVar8 = (float10)FUN_004a6800(&DAT_007128b0);
          *pfVar5 = (float)(ABS((float10)local_2c + (float10)1024.0) * fVar8 *
                            (float10)0.05000000074505806 + (float10)*pfVar5);
        }
      }
      else {
        if (1024.0 < local_2c) {
          pfVar5 = (float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50);
          fVar8 = (float10)FUN_004a6800(&DAT_007128b0);
          *pfVar5 = (float)((float10)*pfVar5 -
                           ((float10)local_2c - (float10)1024.0) * fVar8 * (float10)0.5);
        }
        if (local_2c < -1024.0) {
          pfVar5 = (float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50);
          fVar8 = (float10)FUN_004a6800(&DAT_007128b0);
          *pfVar5 = (float)(ABS((float10)local_2c + (float10)1024.0) * fVar8 * (float10)0.5 +
                           (float10)*pfVar5);
        }
        local_18 = 0.0;
        local_14 = 0.0;
        this_val_2 = *(int *)((int)this + 4) * 0xf0 + DAT_00715e50;
        local_10 = -(*(float *)(this_val_2 + 0xc4) * 2000.0);
        FUN_004a97f0(this_val_2,0,0,local_10,*(undefined4 *)((int)this + 0x10),
                     *(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18));
      }
    }
    this_val_2 = *(int *)this * 0xf0 + DAT_00715e50;
    if ((1.0 < ABS(*(float *)(*(int *)this * 0xf0 + 0xc4 + DAT_00715e50))) &&
       (*(int *)((int)this + 4) == DAT_006fba58)) {
      fVar1 = 1.0 / *(float *)(this_val_2 + 0xb0);
      this_val = *(int *)((int)this + 4) * 0xf0 + DAT_00715e50;
      if (*(float *)(this_val + 0xc4) < 0.0) {
        this_val_2 = FUN_004308d0(this,local_c);
        fVar2 = *(float *)(this_val_2 + 8);
        __ftol_result = __ftol();
        local_14 = 0.0;
        local_18 = -(*(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4) * fVar1 * -0.49);
        local_10 = -fVar2;
        FUN_004a97f0(*(int *)((int)this + 4) * 0xf0 + DAT_00715e50,local_18,0,local_10,
                     *(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14),
                     *(undefined4 *)((int)this + 0x18));
        FUN_004307f0(this);
        goto LAB_0043049d;
      }
      this_val_2 = *(int *)(this_val_2 + 0x24) * 0xa9 + DAT_0073b0d0;
      local_18 = *(float *)(this_val_2 + 0x74);
      local_14 = *(float *)(this_val_2 + 0x78);
      local_10 = *(float *)(this_val_2 + 0x7c);
      __ftol_result = __ftol();
      this_val_2 = (__ftol_result & DAT_005b23bc) * 4;
      local_14 = 0.0;
      local_18 = -(*(float *)(this_val_2 + DAT_0073b530) * fVar1 * -0.98);
      local_10 = -(*(float *)(this_val_2 + DAT_0073b578) * fVar1 * 1.96);
      FUN_004a97f0(this_val,local_18,0,local_10,*(undefined4 *)((int)this + 0x10),
                   *(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18));
    }
    FUN_004307f0(this);
  }
LAB_0043049d:
  if ((*(byte *)(*(int *)this * 0xf0 + 0x1c + DAT_00715e50) & 4) == 0) {
    FUN_00430860(this);
  }
  FUN_00435410(*(undefined4 *)this,1);
  FUN_00430ea0(this);
  return 0;
}


