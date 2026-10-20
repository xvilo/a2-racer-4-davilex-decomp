/* spel.dat — game/Hud_Element.cpp: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047cb20 FUN_0047cb20 ==== */

void FUN_0047cb20(undefined4 param_1)

{
  undefined4 *in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056bb78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047ba80(param_1,0);
  local_4 = 0;
  in_ECX[0x11] = 0xffffffff;
  *in_ECX = &PTR_LAB_00576b1c;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  FUN_0047cd90(&local_18);
  *(undefined1 *)(in_ECX + 0x12) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 0047cd70 FUN_0047cd70 ==== */

void FUN_0047cd70(undefined1 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x48) = param_1;
  *(undefined4 *)(in_ECX + 0x4c) = param_2;
  return;
}


/* ==== 0047cd90 FUN_0047cd90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047cd90(float *param_1)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (float10)fptan((float10)3.1415927 * (float10)0.5 * (float10)0.5);
  DAT_007126b8 = (float)(fVar1 * (float10)0.9900000095367432 * (float10)0.003125);
  _DAT_007126c0 = DAT_007126b8;
  _DAT_007126bc =
       (float)(((float10)DAT_005b379c / (float10)DAT_005b3798) * fVar1 * (float10)0.9900000095367432
              * (float10)0.004166667);
  local_c = DAT_007126b8 * *param_1;
  local_8 = _DAT_007126bc * param_1[1];
  local_4 = DAT_007126b8 * param_1[2];
  FUN_0047bc70(&local_c);
  return;
}


/* ==== 0047ce40 FUN_0047ce40 ==== */

void FUN_0047ce40(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x44) = param_1;
  if ((param_1 != -1) && (DAT_006fb940 != 0)) {
    *(undefined4 *)(DAT_0073b0d0 + param_1 * 0xa9 + 0xa5) = 1;
  }
  return;
}


/* ==== 0047ce80 FUN_0047ce80 ==== */

void FUN_0047ce80(int param_1)

{
  char *str1;
  undefined4 uVar1;
  
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  uVar1 = FUN_004b75a0(str1);
  FUN_0047ceb0(uVar1);
  return;
}


/* ==== 0047ceb0 FUN_0047ceb0 ==== */

void FUN_0047ceb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint i;
  char *pcVar6;
  undefined1 local_e9;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined **local_b8 [7];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056bc07;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 0x44) == -1) {
    ExceptionList = &local_c;
    iVar2 = FUN_004b4fa0(param_1,0,&LAB_004b5620);
    *(int *)(in_ECX + 0x44) = iVar2;
    if (iVar2 == -1) {
      uVar3 = FUN_004873b0(local_4c,param_1);
      local_d8[0] = local_e9;
      local_4 = 0;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar6 = s___005a9c48;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s___005a9c48,~i - 1);
      local_4._0_1_ = 1;
      uVar4 = FUN_004873b0(local_1c,0xcd);
      local_4._0_1_ = 2;
      local_c8[0] = local_e9;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9c50;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9c50,~i - 1);
      local_e8[0] = local_e9;
      local_4._0_1_ = 3;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar6 = s_HeadUp_Display_exception_in__005a9c78;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_HeadUp_Display_exception_in__005a9c78,~i - 1);
      local_4._0_1_ = 4;
      uVar5 = FUN_0047c9a0(local_9c,local_e8,local_c8);
      local_4._0_1_ = 5;
      uVar5 = FUN_004796b0(local_6c,uVar5,s__005a9c4c);
      local_4._0_1_ = 6;
      uVar4 = FUN_0047c9a0(local_2c,uVar5,uVar4);
      local_4._0_1_ = 7;
      uVar4 = FUN_0047c9a0(local_8c,uVar4,local_d8);
      local_4._0_1_ = 8;
      uVar4 = FUN_004796b0(local_7c,uVar4,s_Unable_to_create_object_for_anim_005a9c20);
      local_4._0_1_ = 9;
      uVar3 = FUN_0047c9a0(local_5c,uVar4,uVar3);
      local_4._0_1_ = 10;
      uVar3 = FUN_004796b0(local_3c,uVar3,s___005a9c1c);
      local_4._0_1_ = 0xb;
      FUN_00558826();
      local_4._0_1_ = 0xc;
      FUN_00424980(&local_e9);
      local_4._0_1_ = 0xd;
      local_b8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(uVar3,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_b8,&DAT_0057f730);
    }
    if (DAT_006fb940 != 0) {
      *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xa5) = 1;
    }
    *(undefined1 *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x44) * 0xa9 + 0x90) = 1;
  }
  iVar2 = *(int *)(in_ECX + 0x44);
  if (*(int *)(DAT_0073b0d0 + iVar2 + 4 + iVar2 * 0xa8) != param_1) {
    *(int *)(DAT_0073b0d0 + iVar2 + 4 + iVar2 * 0xa8) = param_1;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047d1f0 FUN_0047d1f0 ==== */

void FUN_0047d1f0(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  void **ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  uint k;
  int j;
  int i;
  int iVar7;
  char *pcVar8;
  int m;
  undefined1 local_121 [5];
  int local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined **local_e8 [7];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056bcb7;
  local_c = ExceptionList;
  i = *(int *)(in_ECX + 0x44);
  ppvVar3 = &local_c;
  if (i != -1) {
    j = DAT_0073b0d0 + i + i * 0xa8;
    i = *(int *)(DAT_0073b0d0 + i + i * 0xa8);
    if (i == 1) {
      uVar4 = *param_1;
      piVar1 = (int *)(DAT_0073b5c8 + *(int *)(j + 0x99) * 0xac);
      ppvVar3 = &local_c;
      if ((*piVar1 == 2) && (i = 0, ppvVar3 = &local_c, 0 < piVar1[0x21])) {
        j = 0;
        ExceptionList = &local_c;
        do {
          i = i + 1;
          *(undefined4 *)(piVar1[0x20] + 0x10 + j) = uVar4;
          j = j + 0x20;
          ppvVar3 = ExceptionList;
        } while (i < piVar1[0x21]);
      }
    }
    else {
      if (i != 2) {
        ExceptionList = &local_c;
        uVar4 = FUN_004873b0(local_2c,i);
        local_108[0] = local_121[0];
        local_4 = 0;
        FUN_004028f0(0);
        k = 0xffffffff;
        pcVar8 = s___005a9cec;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(s___005a9cec,~k - 1);
        local_4._0_1_ = 1;
        uVar5 = FUN_004873b0(local_1c,0x141);
        local_4._0_1_ = 2;
        local_118[0] = local_121[0];
        FUN_004028f0(0);
        k = 0xffffffff;
        pcVar8 = s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9cf4;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9cf4,~k - 1);
        local_f8[0] = local_121[0];
        local_4._0_1_ = 3;
        FUN_004028f0(0);
        k = 0xffffffff;
        pcVar8 = s_HeadUp_Display_exception_in__005a9d1c;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(s_HeadUp_Display_exception_in__005a9d1c,~k - 1);
        local_4._0_1_ = 4;
        uVar6 = FUN_0047c9a0(local_ac,local_f8,local_118);
        local_4._0_1_ = 5;
        uVar6 = FUN_004796b0(local_cc,uVar6,s__005a9cf0);
        local_4._0_1_ = 6;
        uVar5 = FUN_0047c9a0(local_8c,uVar6,uVar5);
        local_4._0_1_ = 7;
        uVar5 = FUN_0047c9a0(local_4c,uVar5,local_108);
        local_4._0_1_ = 8;
        uVar5 = FUN_004796b0(local_6c,uVar5,s_Unreachable_code_reached__005a9cd0);
        local_4._0_1_ = 9;
        uVar6 = FUN_0047bc10();
        uVar5 = FUN_0047c9a0(local_bc,uVar5,uVar6);
        local_4._0_1_ = 10;
        uVar5 = FUN_004796b0(local_9c,uVar5,s___Unknown_object_type___005a9cb8);
        local_4._0_1_ = 0xb;
        uVar4 = FUN_0047c9a0(local_7c,uVar5,uVar4);
        local_4._0_1_ = 0xc;
        uVar4 = FUN_004796b0(local_5c,uVar4,s___005a9cb4);
        local_4._0_1_ = 0xd;
        uVar4 = FUN_004796b0(local_3c,uVar4,s___005a9cb0);
        local_4._0_1_ = 0xe;
        FUN_00558826();
        local_4._0_1_ = 0xf;
        FUN_00424980(local_121);
        local_4._0_1_ = 0x10;
        local_e8[0] = &PTR_FUN_00576b14;
        FUN_004093c0(uVar4,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_e8,&DAT_0057f730);
      }
      m = 0;
      i = *(int *)(j + 4) * 9;
      local_11c = *(int *)(i + DAT_0073b168);
      ExceptionList = &local_c;
      ppvVar3 = &local_c;
      if (0 < local_11c) {
        do {
          uVar4 = *param_1;
          piVar1 = (int *)(DAT_0073b5c8 +
                          *(int *)(*(int *)(*(int *)(i + 4 + DAT_0073b168) + m * 4) * 0x10 +
                                  DAT_0073b120) * 0xac);
          if ((*piVar1 == 2) && (j = 0, 0 < piVar1[0x21])) {
            iVar7 = 0;
            do {
              j = j + 1;
              *(undefined4 *)(iVar7 + 0x10 + piVar1[0x20]) = uVar4;
              iVar7 = iVar7 + 0x20;
            } while (j < piVar1[0x21]);
          }
          m = m + 1;
          ppvVar3 = ExceptionList;
        } while (m < local_11c);
      }
    }
  }
  ExceptionList = ppvVar3;
  FUN_0047bdc0(param_1);
  ExceptionList = local_c;
  return;
}


