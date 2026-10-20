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
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int i;
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
  FUN_0042aee0();
  if (DAT_006fb964 == 0) {
    FUN_004c3fa0();
    DAT_005d2ab0 = 0;
    ExceptionList = local_c;
    return;
  }
  FUN_0042e0d0();
  FUN_0042e290();
  i = 0;
  j = 0;
  if (0 < DAT_005d2ab0) {
    piVar3 = &DAT_005ce9e8;
    puVar4 = &DAT_005973c8;
    do {
      FUN_004a71e0();
      if (i == DAT_006fba5c) {
        i = i + 1;
      }
      FUN_0049df90();
      local_4 = 0;
      FUN_00424660();
      FUN_0041c870(local_1c);
      iVar2 = FUN_0042a3d0();
      *piVar3 = iVar2;
      FUN_0040e250(iVar2);
      iVar5 = iVar2 * 0xf0;
      *(undefined4 *)(iVar5 + 0x60 + DAT_00715e50) = 0;
      *(uint *)(iVar5 + 0x1c + DAT_00715e50) = *(uint *)(iVar5 + 0x1c + DAT_00715e50) | 3;
      FUN_0041c870();
      FUN_0042b550();
      FUN_004353e0();
      *(undefined4 *)(iVar5 + 0x68 + DAT_00715e50) = 1;
      *piVar3 = iVar2;
      FUN_00424660();
      FUN_00403140();
      puVar4[1] = iVar2;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[-2] = i;
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
      piVar3 = piVar3 + 0xa5;
      puVar4 = puVar4 + 0x16;
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

void FUN_0042e150(void)

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

void FUN_0042e5b0(void)

{
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
  float10 fVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a302;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[10] = &PTR_LAB_00576644;
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
  in_ECX[0xb] = operator_new_result;
  local_4 = 0;
  in_ECX[0xd] = &PTR_LAB_00576644;
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
  in_ECX[0xe] = operator_new_result;
  local_4._0_1_ = 1;
  in_ECX[0x10] = &PTR_LAB_00576644;
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
  in_ECX[0x11] = operator_new_result;
  local_4._0_1_ = 2;
  in_ECX[0x12] = &PTR_LAB_00576634;
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
  in_ECX[0x13] = operator_new_result;
  local_4._0_1_ = 3;
  in_ECX[0x14] = &PTR_LAB_00576644;
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
  in_ECX[0x15] = operator_new_result;
  local_4._0_1_ = 4;
  in_ECX[0x16] = &PTR_LAB_00576634;
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
  in_ECX[0x17] = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,5);
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0xffffffff;
  in_ECX[3] = 0xffffffff;
  in_ECX[4] = 0xffffffff;
  in_ECX[9] = 0xffffffff;
  in_ECX[0xc] = 0xffffffff;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[5] = 0;
  fVar1 = (float10)FUN_004a67f0();
  in_ECX[0x18] = (float)fVar1;
  ExceptionList = local_c;
  return;
}


/* ==== 0042e730 FUN_0042e730 ==== */

void FUN_0042e730(void)

{
  int iVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056a34e;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_0042f0d0();
  iVar1 = *(int *)(in_ECX + 0x5c);
  local_4._0_1_ = 4;
  *(undefined ***)(in_ECX + 0x58) = &PTR_LAB_00576634;
  if (iVar1 != 0) {
    FUN_0042f530(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  iVar1 = *(int *)(in_ECX + 0x54);
  local_4._0_1_ = 3;
  *(undefined ***)(in_ECX + 0x50) = &PTR_LAB_00576644;
  if (iVar1 != 0) {
    FUN_004da4d0();
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x54) = 0;
  iVar1 = *(int *)(in_ECX + 0x4c);
  local_4._0_1_ = 2;
  *(undefined ***)(in_ECX + 0x48) = &PTR_LAB_00576634;
  if (iVar1 != 0) {
    FUN_0042f530(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  iVar1 = *(int *)(in_ECX + 0x44);
  local_4._0_1_ = 1;
  *(undefined ***)(in_ECX + 0x40) = &PTR_LAB_00576644;
  if (iVar1 != 0) {
    FUN_004da4d0();
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  iVar1 = *(int *)(in_ECX + 0x38);
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(in_ECX + 0x34) = &PTR_LAB_00576644;
  if (iVar1 != 0) {
    FUN_004da4d0();
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  iVar1 = *(int *)(in_ECX + 0x2c);
  *(undefined ***)(in_ECX + 0x28) = &PTR_LAB_00576644;
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_004da4d0();
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
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
  FUN_0042eea0(param_1,param_2);
  return;
}


/* ==== 0042e9b0 FUN_0042e9b0 ==== */

void FUN_0042e9b0(undefined4 param_1)

{
  char cVar1;
  char *str2;
  undefined4 uVar2;
  int *in_ECX;
  int i;
  CHAR local_60 [16];
  undefined1 local_50 [16];
  char local_40 [64];
  
  FUN_004c3d10(param_1,s_GearA_0059789c,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_005978a4);
  i = FUN_0049ecb0(local_40);
  in_ECX[9] = i;
  i = FUN_0049eb50(i);
  str2 = *(char **)(i + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar2 = FUN_004c7c50(str2,0);
  *(undefined4 *)(i + 0x38) = uVar2;
  i = 0;
  if (0 < *in_ECX) {
    do {
      wsprintfA(local_60,s__s_d_005978e0,s_GearA_005978d8,i);
      FUN_0042e890(param_1,local_60,local_50);
      FUN_0042f660(*(undefined4 *)(in_ECX[0xb] + 8),1,local_50);
      i = i + 1;
    } while (i < *in_ECX);
  }
  return;
}


/* ==== 0042ea90 FUN_0042ea90 ==== */

void FUN_0042ea90(undefined4 param_1)

{
  char cVar1;
  char *str2;
  undefined4 uVar2;
  int *in_ECX;
  int i;
  CHAR local_60 [16];
  undefined1 local_50 [16];
  char local_40 [64];
  
  FUN_004c3d10(param_1,s_GearB_005978e8,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_005978f0);
  i = FUN_0049ecb0(local_40);
  in_ECX[0xc] = i;
  i = FUN_0049eb50(i);
  str2 = *(char **)(i + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar2 = FUN_004c7c50(str2,0);
  *(undefined4 *)(i + 0x38) = uVar2;
  i = 0;
  if (0 < *in_ECX) {
    do {
      wsprintfA(local_60,s__s_d_0059792c,s_GearB_00597924,i);
      FUN_0042e890(param_1,local_60,local_50);
      FUN_0042f660(*(undefined4 *)(in_ECX[0xe] + 8),1,local_50);
      i = i + 1;
    } while (i < *in_ECX);
  }
  return;
}


/* ==== 0042eb70 FUN_0042eb70 ==== */

void FUN_0042eb70(undefined4 param_1)

{
  char cVar1;
  char *str2;
  undefined4 uVar2;
  int *in_ECX;
  int i;
  CHAR local_60 [16];
  undefined1 local_50 [16];
  char local_40 [64];
  
  FUN_004c3d10(param_1,s_Stat_00597934,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_0059793c);
  i = FUN_0049ecb0(local_40);
  in_ECX[0xf] = i;
  i = FUN_0049eb50(i);
  str2 = *(char **)(i + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar2 = FUN_004c7c50(str2,0);
  *(undefined4 *)(i + 0x38) = uVar2;
  i = 0;
  if (0 < *in_ECX) {
    do {
      wsprintfA(local_60,s__s_d_00597978,s_Stat_00597970,i);
      FUN_0042e890(param_1,local_60,local_50);
      FUN_0042f660(*(undefined4 *)(in_ECX[0x11] + 8),1,local_50);
      i = i + 1;
    } while (i < *in_ECX);
  }
  return;
}


/* ==== 0042ec50 FUN_0042ec50 ==== */

void FUN_0042ec50(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *str2;
  undefined4 uVar3;
  int *in_ECX;
  int i;
  int j;
  undefined4 local_124;
  undefined1 local_120 [16];
  CHAR local_110 [16];
  char local_100 [128];
  char local_80 [128];
  
  FUN_004c3d10(param_1,s_Cylinders_00597980,local_100,0x7f);
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
        local_124 = FUN_0049ecb0(local_80);
        iVar2 = FUN_0049eb50(local_124);
        str2 = *(char **)(iVar2 + 0x1c);
        if (str2 == (char *)0x0) {
          str2 = "";
        }
        uVar3 = FUN_004c7c50(str2,0);
        *(undefined4 *)(iVar2 + 0x38) = uVar3;
        FUN_004a5620(*(undefined4 *)(in_ECX[0x13] + 8),1,&local_124);
        j = j + 1;
      } while (j < i);
      if ((0 < i) && (i = 0, 0 < *in_ECX)) {
        do {
          wsprintfA(local_110,s__s_d_00597990,&PTR_DAT_0059798c,i);
          FUN_0042e890(param_1,local_110,local_120);
          FUN_0042f660(*(undefined4 *)(in_ECX[0x15] + 8),1,local_120);
          i = i + 1;
        } while (i < *in_ECX);
      }
    }
  }
  return;
}


/* ==== 0042ed80 FUN_0042ed80 ==== */

void FUN_0042ed80(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  int i;
  undefined1 local_20 [32];
  
  uVar1 = param_1;
  i = 0;
  if (0 < *in_ECX) {
    do {
      FUN_005587a3(local_20,PTR_s_MaxSpeedGear_d_005976cc,i);
      param_1 = FUN_004c3cd0(uVar1,local_20);
      FUN_004a5620(*(undefined4 *)(in_ECX[0x17] + 8),1,&param_1);
      i = i + 1;
    } while (i < *in_ECX);
  }
  return;
}


/* ==== 0042ede0 FUN_0042ede0 ==== */

void FUN_0042ede0(void)

{
  void *operator_new_result;
  int i;
  int *in_ECX;
  
  if (in_ECX[5] != 0) {
    FUN_004c4150(s__s___d__Minimum_RPM_table_alread_005979bc,
                 s_C__Work_A2IV_Game_prog_car_snd_c_00597998,0x102);
  }
  operator_new_result = operator_new(*in_ECX << 2);
  in_ECX[5] = (int)operator_new_result;
  if (operator_new_result == (void *)0x0) {
    FUN_004c4150(s__s___d__Could_not_allocate_RPM_t_00597a10,
                 s_C__Work_A2IV_Game_prog_car_snd_c_005979ec,0x107);
  }
  i = 0;
  if (0 < *in_ECX) {
    do {
      i = i + 1;
      *(undefined4 *)(in_ECX[5] + -4 + i * 4) = 0xffffffff;
    } while (i < *in_ECX);
  }
  return;
}


/* ==== 0042ee70 FUN_0042ee70 ==== */

void FUN_0042ee70(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(*(int *)(in_ECX + 0x14) + param_1 * 4);
  if (*piVar1 == -1) {
    *piVar1 = param_2;
  }
  return;
}


/* ==== 0042eea0 FUN_0042eea0 ==== */

void FUN_0042eea0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  char *str2;
  int *in_ECX;
  undefined4 uVar3;
  undefined1 local_60 [32];
  char local_40 [64];
  
  i = FUN_00448c90(param_2);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  FUN_005587a3(local_60,s__s_d_00597a3c,&PTR_DAT_00597a38,param_1);
  i = FUN_004c3cd0(local_60,s_NrGears_00597a44);
  *in_ECX = i;
  if ((i < 0) || (6 < i)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  i = FUN_00448c90(param_2);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004a6980(uVar3,s__s___d__Incorrect_value_for_nr_o_00597a70,
               s_C__Work_A2IV_Game_prog_car_snd_c_00597a4c,0x13b,puVar2,param_1,*in_ECX,local_60);
  FUN_0042ede0();
  FUN_0042e9b0(local_60);
  FUN_0042ea90(local_60);
  FUN_0042eb70(local_60);
  FUN_0042ec50(local_60);
  FUN_0042ed80(local_60);
  FUN_004c3d10(local_60,s_Start_00597ac8,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_00597ad0,param_1);
  i = FUN_0049ecb0(local_40);
  in_ECX[2] = i;
  FUN_004c3d10(local_60,s_SwitchGear_00597b0c,local_40,0x3f);
  i = -1;
  str2 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980(i != -2,s__s___d__No_sound_type_name_found_00597b18,param_1);
  i = FUN_0049ecb0(local_40);
  in_ECX[3] = i;
  i = FUN_0049eb50(i);
  str2 = *(char **)(i + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar3 = FUN_004c7c50(str2,0);
  *(undefined4 *)(i + 0x38) = uVar3;
  uVar3 = FUN_004c3cd0(local_60,s_MinRpm_00597b58);
  FUN_0042ee70(0,uVar3);
  i = FUN_004c3cd0(local_60,s_MaxRpm_00597b60);
  in_ECX[6] = i;
  i = FUN_004c3cd0(local_60,s_MinSpeed_00597b68);
  in_ECX[7] = i;
  i = FUN_004c3cd0(local_60,s_MaxSpeed_00597b74);
  in_ECX[8] = i;
  return;
}


/* ==== 0042f0a0 FUN_0042f0a0 ==== */

void FUN_0042f0a0(void)

{
  int in_ECX;
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_0049eb50(*(undefined4 *)(in_ECX + 8));
  FUN_0049e550(uVar1);
  *(undefined4 *)(in_ECX + 4) = 1;
  return;
}


/* ==== 0042f0d0 FUN_0042f0d0 ==== */

void FUN_0042f0d0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    if (*(int *)(in_ECX + 8) != -1) {
      FUN_0049eb50(*(int *)(in_ECX + 8));
      FUN_0049e570();
    }
    if (*(int *)(in_ECX + 0xc) != -1) {
      FUN_0049eb50(*(int *)(in_ECX + 0xc));
      FUN_0049e570();
    }
    *(undefined4 *)(in_ECX + 4) = 0;
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
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 4);
  iVar2 = *(int *)(iVar1 + param_4 * 0x10);
  __ftol_result_2 = __ftol();
  iVar1 = *(int *)(iVar1 + param_4 * 0x10 + 8);
  __ftol_result = __ftol();
  FUN_004a6980(param_1 != -1,s__s___d___Sound_source_not_initte_00597ba4,
               s_C__Work_A2IV_Game_prog_car_snd_c_00597b80,0x1d8);
  FUN_0049eb50(param_1);
  FUN_0049e3f0(__ftol_result_2 + iVar2);
  FUN_0049e340(__ftol_result + iVar1);
  return;
}


/* ==== 0042f220 FUN_0042f220 ==== */

void FUN_0042f220(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int __ftol_result;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 0x48))();
  if (iVar2 != 0) {
    FUN_00558625();
    iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 4) + param_2 * 0x10);
    __ftol_result = __ftol();
    fVar4 = (float10)FUN_004a67f0();
    if ((float10)((float)(__ftol_result + iVar1) * 0.001) <=
        fVar4 - (float10)*(float *)(in_ECX + 0x60)) {
      iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 4) + 8 + param_2 * 0x10);
      __ftol_result = __ftol();
      iVar3 = FUN_00558625();
      FUN_0049eb50(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x4c) + 4) + (iVar3 % iVar2) * 4));
      FUN_0049e550(0);
      FUN_0049e340(__ftol_result + iVar1);
      fVar4 = (float10)FUN_004a67f0();
      *(float *)(in_ECX + 0x60) = (float)fVar4;
    }
  }
  return;
}


/* ==== 0042f370 FUN_0042f370 ==== */

void FUN_0042f370(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    FUN_004c4150(s__s___d__Sound_not_initialised__00597bec,
                 s_C__Work_A2IV_Game_prog_car_snd_c_00597bc8,0x224);
  }
  uVar1 = 1;
  FUN_0049eb50(param_1);
  FUN_0049e550(uVar1);
  return;
}


/* ==== 0042f3b0 FUN_0042f3b0 ==== */

void FUN_0042f3b0(void)

{
  int in_ECX;
  
  FUN_0042f370(*(undefined4 *)(in_ECX + 0x24));
  FUN_0042f370(*(undefined4 *)(in_ECX + 0x30));
  FUN_0042f370(*(undefined4 *)(in_ECX + 0x3c));
  return;
}


/* ==== 0042f3e0 FUN_0042f3e0 ==== */

void FUN_0042f3e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int i;
  int *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_0049eb50(in_ECX[2]);
    i = FUN_0049e630();
    if (i == 0) {
      if (in_ECX[4] == -1) {
        FUN_0042f3b0();
      }
      for (i = 0; (i < *in_ECX && (*(int *)(*(int *)(in_ECX[0x17] + 4) + i * 4) < param_3));
          i = i + 1) {
      }
      if (i == *in_ECX) {
        i = i + -1;
      }
      FUN_0042f120(in_ECX[9],in_ECX + 10,param_3,i);
      FUN_0042f120(in_ECX[0xc],in_ECX + 0xd,param_3,i);
      FUN_0042f120(in_ECX[0xf],in_ECX + 0x10,param_3,i);
      FUN_0042f220(param_3,i);
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

void FUN_0042f540(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00576644;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[1] = 0;
  return;
}


/* ==== 0042f5a0 FUN_0042f5a0 ==== */

int FUN_0042f5a0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = (**(code **)*in_ECX)();
  return *(int *)(in_ECX[1] + 4) + (iVar1 + -1) * 0x10;
}


/* ==== 0042f620 FUN_0042f620 ==== */

void FUN_0042f620(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00576634;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[1] = 0;
  return;
}


/* ==== 0042f660 FUN_0042f660 ==== */

void FUN_0042f660(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int i;
  int iVar2;
  undefined4 *operator_new_result;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar4 = param_1;
  puVar3 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar3 >> 4)) {
    if (param_2 <= (uint)((int)puVar3 - (int)param_1 >> 4)) {
      if (param_2 != 0) {
        puVar4 = puVar3;
        for (puVar6 = puVar3 + param_2 * -4; puVar6 != puVar3; puVar6 = puVar6 + 4) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar6;
            puVar4[1] = puVar6[1];
            puVar4[2] = puVar6[2];
            puVar4[3] = puVar6[3];
          }
          puVar4 = puVar4 + 4;
        }
        puVar3 = *(undefined4 **)(in_ECX + 8);
        puVar4 = *(undefined4 **)(in_ECX + 8) + param_2 * -4;
        while (param_1 != puVar4) {
          puVar3[-4] = puVar4[-4];
          puVar3[-3] = puVar4[-3];
          puVar3[-2] = puVar4[-2];
          puVar3[-1] = puVar4[-1];
          puVar3 = puVar3 + -4;
          puVar4 = puVar4 + -4;
        }
        puVar3 = param_1 + param_2 * 4;
        for (; param_1 != puVar3; param_1 = param_1 + 4) {
          *param_1 = *param_3;
          param_1[1] = param_3[1];
          param_1[2] = param_3[2];
          param_1[3] = param_3[3];
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x10;
      }
      return;
    }
    puVar4 = param_1 + param_2 * 4;
    if (param_1 != puVar3) {
      puVar6 = puVar4 + param_2 * -4;
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
    puVar3 = *(undefined4 **)(in_ECX + 8);
    for (i = param_2 - ((int)puVar3 - (int)param_1 >> 4); i != 0; i = i + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_3;
        puVar3[1] = param_3[1];
        puVar3[2] = param_3[2];
        puVar3[3] = param_3[3];
      }
      puVar3 = puVar3 + 4;
    }
    puVar3 = *(undefined4 **)(in_ECX + 8);
    for (; param_1 != puVar3; param_1 = param_1 + 4) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x10;
    return;
  }
  i = *(int *)(in_ECX + 4);
  if ((i == 0) || (uVar5 = (int)puVar3 - i >> 4, uVar5 <= param_2)) {
    uVar5 = param_2;
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
  for (puVar3 = *(undefined4 **)(in_ECX + 4); puVar3 != param_1; puVar3 = puVar3 + 4) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar3;
      puVar6[1] = puVar3[1];
      puVar6[2] = puVar3[2];
      puVar6[3] = puVar3[3];
    }
    puVar6 = puVar6 + 4;
  }
  if (param_2 != 0) {
    param_1 = (undefined4 *)param_2;
    puVar3 = puVar6;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_3;
        puVar3[1] = param_3[1];
        puVar3[2] = param_3[2];
        puVar3[3] = param_3[3];
      }
      puVar3 = puVar3 + 4;
      param_1 = (undefined4 *)((int)param_1 - 1);
    } while (param_1 != (undefined4 *)0x0);
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar3 = puVar6 + param_2 * 4;
  if (puVar4 != puVar1) {
    puVar4 = (undefined4 *)((int)puVar3 + (param_2 * -0x10 - (int)puVar6) + (int)puVar4);
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
  FUN_0054b339(*(undefined4 *)(in_ECX + 4));
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined4 **)(in_ECX + 0xc) = operator_new_result + i * 4;
  if (iVar2 != 0) {
    *(undefined4 **)(in_ECX + 4) = operator_new_result;
    *(undefined4 **)(in_ECX + 8) =
         operator_new_result + ((*(int *)(in_ECX + 8) - iVar2 >> 4) + param_2) * 4;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = operator_new_result;
  *(undefined4 **)(in_ECX + 8) = operator_new_result + param_2 * 4;
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

undefined4 FUN_0042faa0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_20 [4];
  uint uStack_10;
  
  FUN_0042fa60(param_1);
  FUN_0042fa80(param_2);
  iVar1 = FUN_004a8c50();
  iVar1 = iVar1 * 0xac;
  *(float *)(in_ECX + 0x1c) =
       (*(float *)(iVar1 + 0x58 + DAT_0073b5c8) + *(float *)(iVar1 + 0x10 + DAT_0073b5c8)) * 0.5;
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar1 + 0x5c + DAT_0073b5c8);
  *(float *)(in_ECX + 0x24) = *(float *)(iVar1 + 0x60 + DAT_0073b5c8) + 0.1;
  iVar1 = FUN_004a8c50();
  iVar1 = iVar1 * 0xac;
  *(float *)(in_ECX + 0x10) =
       (*(float *)(iVar1 + 0x58 + DAT_0073b5c8) + *(float *)(iVar1 + 0x10 + DAT_0073b5c8)) * 0.5;
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(iVar1 + 0x14 + DAT_0073b5c8);
  *(float *)(in_ECX + 0x18) = *(float *)(iVar1 + 0x18 + DAT_0073b5c8) - 0.1;
  FUN_004304e0(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 8) = 0x45fa0000;
  *(undefined4 *)(in_ECX + 0xc) = 0x467a0000;
  *(int *)(*(int *)(in_ECX + 4) * 0xf0 + 0x44 + DAT_00715e50) = param_1;
  param_1 = param_1 * 0xf0;
  *(undefined4 *)(param_1 + 0x48 + DAT_00715e50) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(param_1 + 0x44 + DAT_00715e50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68 + DAT_00715e50) = 1;
  FUN_00430e10();
  iVar1 = FUN_004a8600(8);
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
  *(uint *)(in_ECX + 0x30) = uStack_10 >> 0x18;
  return 0;
}


/* ==== 0042fd40 FUN_0042fd40 ==== */

undefined4 FUN_0042fd40(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint __ftol_result;
  int *in_ECX;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float local_2c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  if ((char)in_ECX[10] == '\0') {
    pfVar6 = (float *)(*in_ECX * 0xf0 + 0xbc + DAT_00715e50);
    fVar10 = (float10)FUN_004a6800();
    fVar10 = fVar10 * (float10)*(float *)(*in_ECX * 0xf0 + 0xbc + DAT_00715e50);
    *pfVar6 = (float)((float10)*pfVar6 - (fVar10 + fVar10));
    pfVar6 = (float *)(*in_ECX * 0xf0 + 0xc4 + DAT_00715e50);
    fVar10 = (float10)FUN_004a6800();
    *pfVar6 = (float)((float10)*pfVar6 -
                     fVar10 * (float10)*(float *)(*in_ECX * 0xf0 + 0xc4 + DAT_00715e50));
    pfVar6 = (float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50);
    fVar10 = (float10)FUN_004a6800();
    *pfVar6 = (float)((float10)*pfVar6 -
                     fVar10 * (float10)*(float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50) *
                     (float10)5.0);
    if ((float)in_ECX[0xb] <= 2.0) {
      fVar10 = (float10)FUN_004a6800();
      in_ECX[0xb] = (int)(float)(fVar10 + (float10)(float)in_ECX[0xb]);
    }
    else {
      FUN_004304e0(in_ECX[1]);
      *(uint *)(*in_ECX * 0xf0 + 0x1c + DAT_00715e50) =
           *(uint *)(*in_ECX * 0xf0 + 0x1c + DAT_00715e50) | 8;
      in_ECX[0xb] = 0;
    }
  }
  else {
    pfVar6 = (float *)FUN_004b42a0(&local_18,in_ECX + 7,
                                   DAT_0073b0d0 +
                                   *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    fVar3 = *pfVar6;
    fVar4 = pfVar6[2];
    iVar7 = *(int *)(*in_ECX * 0xf0 + 0x24 + DAT_00715e50);
    fVar1 = *(float *)(iVar7 + DAT_0073b0d0 + 0x50 + iVar7 * 0xa8);
    fVar2 = *(float *)(iVar7 + DAT_0073b0d0 + iVar7 * 0xa8 + 0x58);
    pfVar6 = (float *)FUN_004b42a0(local_c,in_ECX + 4,
                                   DAT_0073b0d0 +
                                   *(int *)(in_ECX[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    iVar5 = *(int *)(in_ECX[1] * 0xf0 + 0x24 + DAT_00715e50);
    iVar7 = DAT_0073b0d0 + iVar5;
    fVar1 = (fVar3 + fVar1) - (*pfVar6 + *(float *)(iVar7 + 0x50 + iVar5 * 0xa8));
    fVar2 = (fVar4 + fVar2) - (pfVar6[2] + *(float *)(iVar7 + 0x58 + iVar5 * 0xa8));
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    iVar8 = *in_ECX * 0xf0;
    iVar9 = DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9;
    local_18 = *(float *)(iVar9 + 0x74);
    local_14 = *(float *)(iVar9 + 0x78);
    local_10 = *(float *)(iVar9 + 0x7c);
    local_2c = local_14 - *(float *)(iVar7 + iVar5 * 0xa8 + 0x78);
    if (local_2c < -2048.0) {
      local_2c = local_2c + 4096.0;
    }
    if (2048.0 < local_2c) {
      local_2c = local_2c - 4096.0;
    }
    if (15.0 < fVar1) {
      if (25.0 < fVar1) {
        *(undefined1 *)(in_ECX + 10) = 0;
        *(uint *)(iVar8 + 0x1c + DAT_00715e50) = *(uint *)(iVar8 + 0x1c + DAT_00715e50) | 8;
        pfVar6 = (float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50);
        if (2.0 < *(float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50)) {
          *pfVar6 = 2.0;
          return 0;
        }
        if (-2.0 <= *pfVar6) {
          return 0;
        }
        *pfVar6 = -2.0;
        return 0;
      }
      *(uint *)(iVar8 + 0x1c + DAT_00715e50) = *(uint *)(iVar8 + 0x1c + DAT_00715e50) | 8;
    }
    if (1024.0 < ABS(local_2c)) {
      if (0.0 <= *(float *)(in_ECX[1] * 0xf0 + 0xc4 + DAT_00715e50)) {
        if (1024.0 < local_2c) {
          pfVar6 = (float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50);
          fVar10 = (float10)FUN_004a6800();
          *pfVar6 = (float)((float10)*pfVar6 -
                           ((float10)local_2c - (float10)1024.0) * fVar10 * (float10)0.05);
        }
        if (local_2c < -1024.0) {
          pfVar6 = (float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50);
          fVar10 = (float10)FUN_004a6800();
          *pfVar6 = (float)(ABS((float10)local_2c + (float10)1024.0) * fVar10 *
                            (float10)0.05000000074505806 + (float10)*pfVar6);
        }
      }
      else {
        if (1024.0 < local_2c) {
          pfVar6 = (float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50);
          fVar10 = (float10)FUN_004a6800();
          *pfVar6 = (float)((float10)*pfVar6 -
                           ((float10)local_2c - (float10)1024.0) * fVar10 * (float10)0.5);
        }
        if (local_2c < -1024.0) {
          pfVar6 = (float *)(*in_ECX * 0xf0 + 0xcc + DAT_00715e50);
          fVar10 = (float10)FUN_004a6800();
          *pfVar6 = (float)(ABS((float10)local_2c + (float10)1024.0) * fVar10 * (float10)0.5 +
                           (float10)*pfVar6);
        }
        local_18 = 0.0;
        local_14 = 0.0;
        local_10 = -(*(float *)(in_ECX[1] * 0xf0 + DAT_00715e50 + 0xc4) * 2000.0);
        FUN_004a97f0(0,0,local_10,in_ECX[4],in_ECX[5],in_ECX[6]);
      }
    }
    iVar7 = *in_ECX * 0xf0 + DAT_00715e50;
    if ((1.0 < ABS(*(float *)(*in_ECX * 0xf0 + 0xc4 + DAT_00715e50))) && (in_ECX[1] == DAT_006fba58)
       ) {
      fVar1 = 1.0 / *(float *)(iVar7 + 0xb0);
      if (*(float *)(in_ECX[1] * 0xf0 + DAT_00715e50 + 0xc4) < 0.0) {
        iVar7 = FUN_004308d0(local_c);
        fVar2 = *(float *)(iVar7 + 8);
        __ftol_result = __ftol();
        local_14 = 0.0;
        local_18 = -(*(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4) * fVar1 * -0.49);
        local_10 = -fVar2;
        FUN_004a97f0(local_18,0,local_10,in_ECX[4],in_ECX[5],in_ECX[6]);
        FUN_004307f0();
        goto LAB_0043049d;
      }
      iVar7 = *(int *)(iVar7 + 0x24) * 0xa9 + DAT_0073b0d0;
      local_18 = *(float *)(iVar7 + 0x74);
      local_14 = *(float *)(iVar7 + 0x78);
      local_10 = *(float *)(iVar7 + 0x7c);
      __ftol_result = __ftol();
      iVar7 = (__ftol_result & DAT_005b23bc) * 4;
      local_14 = 0.0;
      local_18 = -(*(float *)(iVar7 + DAT_0073b530) * fVar1 * -0.98);
      local_10 = -(*(float *)(iVar7 + DAT_0073b578) * fVar1 * 1.96);
      FUN_004a97f0(local_18,0,local_10,in_ECX[4],in_ECX[5],in_ECX[6]);
    }
    FUN_004307f0();
  }
LAB_0043049d:
  if ((*(byte *)(*in_ECX * 0xf0 + 0x1c + DAT_00715e50) & 4) == 0) {
    FUN_00430860();
  }
  FUN_00435410(*in_ECX,1);
  FUN_00430ea0();
  return 0;
}


