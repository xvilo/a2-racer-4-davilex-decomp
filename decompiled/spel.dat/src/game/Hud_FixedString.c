/* spel.dat — game/Hud_FixedString.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047d5f0 FUN_0047d5f0 ==== */

void FUN_0047d5f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0047d600 FUN_0047d600 ==== */

void FUN_0047d600(void)

{
  FUN_005584e0(&LAB_0047d610);
  return;
}


/* ==== 0047d630 FUN_0047d630 ==== */

void FUN_0047d630(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0047d640 FUN_0047d640 ==== */

void FUN_0047d640(void)

{
  FUN_005584e0(&LAB_0047d650);
  return;
}


/* ==== 0047d660 FUN_0047d660 ==== */

void FUN_0047d660(byte param_1)

{
  FUN_0047d680();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0047d680 FUN_0047d680 ==== */

void FUN_0047d680(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00576a98;
  iVar2 = in_ECX[0xe];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  return;
}


/* ==== 0047d6d0 FUN_0047d6d0 ==== */

void FUN_0047d6d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_LAB_00576b60;
  return;
}


/* ==== 0047d710 FUN_0047d710 ==== */

void FUN_0047d710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_00486d50(param_1,param_2,param_3,param_4);
  *in_ECX = &PTR_LAB_00576b68;
  return;
}


/* ==== 0047d740 FUN_0047d740 ==== */

void FUN_0047d740(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int in_ECX;
  uint i;
  uint k;
  int j;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_12d;
  int local_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120;
  undefined1 local_11c [4];
  char *local_118;
  undefined1 local_10c [4];
  char *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [16];
  int local_ec;
  undefined1 local_e8 [4];
  char *local_e4;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined **local_a8 [7];
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
  puStack_8 = &LAB_0056bd8c;
  local_c = ExceptionList;
  local_ec = in_ECX + 0x9c;
  ExceptionList = &local_c;
  iVar2 = FUN_0047e340(param_1);
  if (iVar2 != 0) {
    i = *(uint *)(param_1 + 8);
    if (*(uint *)(in_ECX + 0x98) < i) {
      i = *(uint *)(in_ECX + 0x98);
    }
    j = 0;
    local_124 = i;
    iVar2 = FUN_004871d0();
    if (iVar2 == 0) {
      local_12c = 0;
    }
    else {
      if (iVar2 == 1) {
        local_12c = (int)(*(int *)(in_ECX + 0x98) - i) / 2;
      }
      else {
        if (iVar2 != 2) {
          local_c8[0] = local_12d;
          FUN_004028f0(0);
          i = 0xffffffff;
          pcVar6 = s___005a9d60;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(s___005a9d60,~i - 1);
          local_4 = 0;
          uVar3 = FUN_004873b0(local_2c,0x3d);
          local_4._0_1_ = 1;
          local_d8[0] = local_12d;
          FUN_004028f0(0);
          i = 0xffffffff;
          pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9d68;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9d68,~i - 1);
          local_4._0_1_ = 2;
          local_b8[0] = local_12d;
          FUN_004028f0(0);
          i = 0xffffffff;
          pcVar6 = s_HeadUp_Display_exception_in__005a9d94;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(s_HeadUp_Display_exception_in__005a9d94,~i - 1);
          local_4._0_1_ = 3;
          uVar4 = FUN_0047c9a0(local_1c,local_b8,local_d8);
          local_4._0_1_ = 4;
          uVar4 = FUN_004796b0(local_6c,uVar4,s__005a9d64);
          local_4._0_1_ = 5;
          uVar3 = FUN_0047c9a0(local_8c,uVar4,uVar3);
          local_4._0_1_ = 6;
          uVar3 = FUN_0047c9a0(local_4c,uVar3,local_c8);
          local_4._0_1_ = 7;
          uVar3 = FUN_004796b0(local_7c,uVar3,s_Unknown_alignment_in_string_005a9d40);
          local_4._0_1_ = 8;
          uVar4 = FUN_0047bc10();
          uVar3 = FUN_0047c9a0(local_5c,uVar3,uVar4);
          local_4._0_1_ = 9;
          uVar3 = FUN_004796b0(local_3c,uVar3,s___005a9d3c);
          local_4._0_1_ = 10;
          FUN_00558826();
          local_4._0_1_ = 0xb;
          FUN_00424980(&local_12d);
          local_4._0_1_ = 0xc;
          local_a8[0] = &PTR_FUN_00576b14;
          FUN_004093c0(uVar3,0,0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_a8,&DAT_0057f730);
        }
        local_12c = *(int *)(in_ECX + 0x98) - i;
      }
      if (0 < local_12c) {
        do {
          iVar2 = FUN_00487200();
          local_fc[0] = local_12d;
          uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 4) + j * 4);
          FUN_004028f0(0);
          i = 0xffffffff;
          pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9db4;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9db4,~i - 1);
          local_4 = 0xd;
          local_11c[0] = local_12d;
          FUN_004028f0(0);
          i = 0xffffffff;
          pcVar6 = s_Null_character_in_string_005a9de0;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(s_Null_character_in_string_005a9de0,~i - 1);
          local_4._0_1_ = 0xe;
          FUN_00487bc0(uVar3,local_11c,local_fc,0x44);
          local_4 = CONCAT31(local_4._1_3_,0xd);
          FUN_004028f0(1);
          local_4 = 0xffffffff;
          FUN_004028f0(1);
          uVar3 = 0x20;
          FUN_004871c0(0x20);
          uVar3 = FUN_0047e4e0(uVar3);
          FUN_0047ce40(uVar3);
          j = j + 1;
          i = local_124;
        } while (j < local_12c);
      }
    }
    local_128 = local_12c + i;
    if (j < (int)local_128) {
      do {
        iVar2 = FUN_00487200();
        uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 4) + j * 4);
        local_11c[0] = local_12d;
        local_120 = uVar3;
        FUN_004028f0(0);
        i = 0xffffffff;
        pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9dfc;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        local_124 = i;
        cVar1 = FUN_00402a00(i,1);
        if (cVar1 != '\0') {
          pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9dfc;
          pcVar7 = local_118;
          for (k = i >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (k = i & 3; k != 0; k = k - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          FUN_004029e0(i);
          uVar3 = local_120;
        }
        local_fc[0] = local_12d;
        local_4 = 0xf;
        FUN_004028f0(0);
        i = 0xffffffff;
        pcVar6 = s_Null_character_in_string_005a9e28;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(s_Null_character_in_string_005a9e28,~i - 1);
        local_4._0_1_ = 0x10;
        FUN_00487bc0(uVar3,local_fc,local_11c,0x4d);
        local_4 = CONCAT31(local_4._1_3_,0xf);
        FUN_004028f0(1);
        local_4 = 0xffffffff;
        FUN_004028f0(1);
        if (*(int *)(param_1 + 4) == 0) {
          pbVar5 = &DAT_0057629c;
        }
        else {
          pbVar5 = (byte *)((*(int *)(param_1 + 4) - local_12c) + j);
        }
        i = (uint)*pbVar5;
        FUN_004871c0(i);
        uVar3 = FUN_0047e4e0(i);
        FUN_0047ce40(uVar3);
        j = j + 1;
      } while (j < (int)local_128);
    }
    if (j < *(int *)(in_ECX + 0x98)) {
      do {
        iVar2 = FUN_00487200();
        local_10c[0] = local_12d;
        local_120 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 4) + j * 4);
        FUN_004028f0(0);
        i = 0xffffffff;
        pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e44;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        local_128 = i;
        cVar1 = FUN_00402a00(i,1);
        if (cVar1 != '\0') {
          pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e44;
          pcVar7 = local_108;
          for (k = i >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (k = i & 3; k != 0; k = k - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          FUN_004029e0(i);
        }
        local_4 = 0x11;
        local_e8[0] = local_12d;
        FUN_004028f0(0);
        i = 0xffffffff;
        pcVar6 = s_Null_character_in_string_005a9e70;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        local_128 = i;
        cVar1 = FUN_00402a00(i,1);
        if (cVar1 != '\0') {
          pcVar6 = s_Null_character_in_string_005a9e70;
          pcVar7 = local_e4;
          for (k = i >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (k = i & 3; k != 0; k = k - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          FUN_004029e0(i);
        }
        local_4._0_1_ = 0x12;
        FUN_00487bc0(local_120,local_e8,local_10c,0x56);
        local_4 = CONCAT31(local_4._1_3_,0x11);
        FUN_004028f0(1);
        local_4 = 0xffffffff;
        if (local_108 != (char *)0x0) {
          cVar1 = local_108[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(local_108 + -1);
          }
          else {
            local_108[-1] = cVar1 + -1;
          }
        }
        uVar3 = 0x20;
        local_108 = (char *)0x0;
        local_104 = 0;
        local_100 = 0;
        FUN_004871c0(0x20);
        uVar3 = FUN_0047e4e0(uVar3);
        FUN_0047ce40(uVar3);
        j = j + 1;
      } while (j < *(int *)(in_ECX + 0x98));
    }
    FUN_004093c0(param_1,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047dde0 FUN_0047dde0 ==== */

void FUN_0047dde0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint i;
  char *pcVar6;
  float10 fVar7;
  float *pfVar8;
  undefined1 local_125;
  float local_124;
  int local_120;
  float local_11c [4];
  undefined4 local_10c;
  undefined4 local_108;
  float local_104 [3];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined **local_a8 [7];
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
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056be26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004871c0();
  fVar7 = (float10)FUN_0047e6d0();
  local_124 = (float)((float10)*(float *)(in_ECX + 0x94) / fVar7);
  FUN_004871c0();
  fVar7 = (float10)FUN_0047e6e0();
  local_120 = 0;
  local_124 = (float)(fVar7 * (float10)local_124);
  if (0 < *(int *)(in_ECX + 0x98)) {
    do {
      iVar2 = local_120;
      iVar3 = FUN_00487200();
      local_e8[0] = local_125;
      uVar4 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + 4) + iVar2 * 4);
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e8c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e8c,~i - 1);
      local_4 = 0;
      local_f8[0] = local_125;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar6 = s_Null_character_in_string_005a9eb8;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_Null_character_in_string_005a9eb8,~i - 1);
      local_4._0_1_ = 1;
      FUN_00487bc0(uVar4,local_f8,local_e8,0x6f);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(1);
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      iVar3 = FUN_004871d0();
      if (iVar3 == 0) {
        pfVar8 = local_11c + 3;
        local_10c = 0;
        local_108 = 0;
        local_11c[3] = ((float)local_120 + 0.5) * (local_124 + *(float *)(in_ECX + 0x94));
      }
      else if (iVar3 == 1) {
        pfVar8 = local_104;
        local_104[1] = 0.0;
        local_104[2] = 0.0;
        local_104[0] = (local_124 + *(float *)(in_ECX + 0x94)) *
                       ((1.0 - (float)*(int *)(in_ECX + 0x98)) * 0.5 + (float)local_120);
      }
      else {
        if (iVar3 != 2) {
          local_c8[0] = local_125;
          FUN_004028f0(0);
          i = 0xffffffff;
          pcVar6 = s___005a9ef8;
          goto code_r0x0047e00d;
        }
        pfVar8 = local_11c;
        local_11c[1] = 0.0;
        local_11c[2] = 0.0;
        local_11c[0] = (local_124 + *(float *)(in_ECX + 0x94)) *
                       (((float)local_120 - (float)*(int *)(in_ECX + 0x98)) + 0.5);
      }
      FUN_0047bc50(pfVar8);
      local_120 = iVar2 + 1;
    } while (local_120 < *(int *)(in_ECX + 0x98));
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    i = i - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
code_r0x0047e00d:
    if (i == 0) break;
  }
  FUN_00402940(s___005a9ef8,~i - 1);
  local_4 = 2;
  uVar4 = FUN_004873b0(local_2c,0x7d);
  local_b8[0] = local_125;
  local_4._0_1_ = 3;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9f00;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9f00,~i - 1);
  local_4._0_1_ = 4;
  local_d8[0] = local_125;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar6 = s_HeadUp_Display_exception_in__005a9f2c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005a9f2c,~i - 1);
  local_4._0_1_ = 5;
  uVar5 = FUN_0047c9a0(local_1c,local_d8,local_b8);
  local_4._0_1_ = 6;
  uVar5 = FUN_004796b0(local_6c,uVar5,s__005a9efc);
  local_4._0_1_ = 7;
  uVar4 = FUN_0047c9a0(local_8c,uVar5,uVar4);
  local_4._0_1_ = 8;
  uVar4 = FUN_0047c9a0(local_4c,uVar4,local_c8);
  local_4._0_1_ = 9;
  uVar4 = FUN_004796b0(local_7c,uVar4,s_Invalid_alignment_in_string_005a9ed8);
  local_4._0_1_ = 10;
  uVar5 = FUN_0047bc10();
  uVar4 = FUN_0047c9a0(local_5c,uVar4,uVar5);
  local_4._0_1_ = 0xb;
  uVar4 = FUN_004796b0(local_3c,uVar4,s___005a9ed4);
  local_4._0_1_ = 0xc;
  FUN_00558826();
  local_4._0_1_ = 0xd;
  FUN_00424980(&local_125);
  local_4._0_1_ = 0xe;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


