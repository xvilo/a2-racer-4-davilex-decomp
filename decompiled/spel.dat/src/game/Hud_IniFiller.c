/* spel.dat — game/Hud_IniFiller.cpp: 38 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047eab0 FUN_0047eab0 ==== */

void FUN_0047eab0(uint param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  uint uVar3;
  undefined4 *puVar4;
  
  if (-*(int *)(in_ECX + 8) - 1U <= param_1) {
    FUN_0054b1b4();
  }
  if (param_1 == 0) {
    return;
  }
  uVar3 = param_1 + *(int *)(in_ECX + 8);
  if (0xfffffffd < uVar3) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      if (iVar2 == 0) {
        return;
      }
      FUN_004029e0(0);
      return;
    }
    if (uVar3 <= *(uint *)(in_ECX + 0xc)) goto LAB_0047eb39;
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    return;
  }
  FUN_00402b20(uVar3);
LAB_0047eb39:
  puVar4 = (undefined4 *)(*(int *)(in_ECX + 4) + *(int *)(in_ECX + 8));
  for (i = param_1 >> 2; i != 0; i = i - 1) {
    *puVar4 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    puVar4 = puVar4 + 1;
  }
  for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
    *(undefined1 *)puVar4 = param_2;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(uint *)(in_ECX + 8) = uVar3;
  *(undefined1 *)(*(int *)(in_ECX + 4) + uVar3) = 0;
  return;
}


/* ==== 0047ebb0 FUN_0047ebb0 ==== */

/* WARNING: Removing unreachable block (ram,0x0047ec04) */

void FUN_0047ebb0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *in_ECX;
  uint i;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056bef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047d6d0(param_1);
  uVar1 = *(undefined1 *)param_2;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 2) = uVar1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  uVar2 = param_2[2];
  local_4 = 0;
  if (in_ECX + 2 == param_2) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar4 = in_ECX[4] - uVar2;
    iVar6 = -1;
    if (iVar4 != -1) {
      iVar6 = iVar4;
    }
    if (iVar6 != 0) {
      FUN_005580e0(uVar2 + in_ECX[3],uVar2 + in_ECX[3] + iVar6,iVar4 - iVar6);
      iVar4 = in_ECX[4];
      cVar3 = FUN_00402a00(iVar4 - iVar6,0);
      if (cVar3 != '\0') {
        FUN_004029e0(iVar4 - iVar6);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar2 != 0) {
      puVar5 = (undefined1 *)param_2[1];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar5 = (undefined1 *)param_2[1];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        in_ECX[3] = puVar5;
        in_ECX[4] = param_2[2];
        in_ECX[5] = param_2[3];
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_0047ece2;
      }
    }
    cVar3 = FUN_00402a00(uVar2,1);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)param_2[1];
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = (undefined4 *)in_ECX[3];
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      in_ECX[4] = uVar2;
      *(undefined1 *)(uVar2 + in_ECX[3]) = 0;
    }
  }
LAB_0047ece2:
  in_ECX[6] = 0x44200000;
  in_ECX[7] = 0x43f00000;
  *in_ECX = &PTR_FUN_00576e00;
  ExceptionList = local_c;
  return;
}


/* ==== 0047ed10 FUN_0047ed10 ==== */

void FUN_0047ed10(void)

{
  undefined1 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056bf02;
  local_10 = ExceptionList;
  puVar1 = *(undefined1 **)(in_ECX + 0xc);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  FUN_004c3b60(puVar1);
  local_8 = 0;
  FUN_0047edc0();
  FUN_0047f140();
  FUN_004814c0();
  FUN_00482000();
  ExceptionList = local_10;
  return;
}


/* ==== 0047edc0 FUN_0047edc0 ==== */

void FUN_0047edc0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint j;
  int i;
  char *pcVar5;
  undefined1 local_12d;
  int local_12c;
  undefined1 local_128 [4];
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined **local_d8 [7];
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
  puStack_8 = &LAB_0056bfbd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_12c = FUN_004c3cd0(s_Composites_005aa00c,s_Count_005aa084);
  i = 0;
  if (0 < local_12c) {
    do {
      local_118[0] = local_12d;
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar5 = s_Composites_005aa00c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_Composites_005aa00c,~j - 1);
      local_4 = 0;
      uVar2 = FUN_004873b0(local_bc,i);
      local_4._0_1_ = 1;
      FUN_004877e0(local_128,local_118,uVar2);
      local_4._0_1_ = 4;
      FUN_004028f0(1);
      local_4._0_1_ = 3;
      FUN_004028f0(1);
      if (local_120 == 0) {
        uVar2 = FUN_004873b0(local_1c,i);
        local_4._0_1_ = 5;
        local_f8[0] = local_12d;
        FUN_004028f0(0);
        j = 0xffffffff;
        pcVar5 = s___005aa254;
        goto code_r0x0047ef5d;
      }
      uVar2 = FUN_0047f4c0(local_128);
      uVar2 = FUN_00484610(uVar2,local_128);
      FUN_0047feb0(uVar2);
      FUN_0047f880(uVar2);
      local_4 = 0xffffffff;
      if (local_124 != 0) {
        cVar1 = *(char *)(local_124 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_124 + -1);
        }
        else {
          *(char *)(local_124 + -1) = cVar1 + -1;
        }
      }
      i = i + 1;
      local_124 = 0;
      local_120 = 0;
      local_11c = 0;
    } while (i < local_12c);
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    j = j - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    if (cVar1 == '\0') break;
code_r0x0047ef5d:
    if (j == 0) break;
  }
  FUN_00402940(s___005aa254,~j - 1);
  local_4._0_1_ = 6;
  uVar3 = FUN_004873b0(local_ac,0xce);
  local_4._0_1_ = 7;
  local_108[0] = local_12d;
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa25c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa25c,~j - 1);
  local_4._0_1_ = 8;
  local_e8[0] = local_12d;
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005aa288;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aa288,~j - 1);
  local_4._0_1_ = 9;
  uVar4 = FUN_0047c9a0(local_8c,local_e8,local_108);
  local_4._0_1_ = 10;
  uVar4 = FUN_004796b0(local_4c,uVar4,s__005aa258);
  local_4._0_1_ = 0xb;
  uVar3 = FUN_0047c9a0(local_6c,uVar4,uVar3);
  local_4._0_1_ = 0xc;
  uVar3 = FUN_0047c9a0(local_2c,uVar3,local_f8);
  local_4._0_1_ = 0xd;
  uVar3 = FUN_004796b0(local_9c,uVar3,s_Overlay_heading_005aa240);
  local_4._0_1_ = 0xe;
  uVar2 = FUN_0047c9a0(local_7c,uVar3,uVar2);
  local_4._0_1_ = 0xf;
  uVar2 = FUN_004796b0(local_5c,uVar2,s_not_found_005aa234);
  local_4._0_1_ = 0x10;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005aa230);
  local_4._0_1_ = 0x11;
  FUN_00558826();
  local_4._0_1_ = 0x12;
  FUN_00424980(&local_12d);
  local_4._0_1_ = 0x13;
  local_d8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0x11);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_d8,&DAT_0057f730);
}


/* ==== 0047f140 FUN_0047f140 ==== */

void FUN_0047f140(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint j;
  int i;
  char *pcVar5;
  undefined1 local_12d;
  int local_12c;
  undefined1 local_128 [4];
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined **local_d8 [7];
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
  puStack_8 = &LAB_0056c078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_12c = FUN_004c3cd0(s_Elements_005aa018,s_Count_005aa084);
  i = 0;
  if (0 < local_12c) {
    do {
      local_118[0] = local_12d;
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar5 = s_Elements_005aa018;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_Elements_005aa018,~j - 1);
      local_4 = 0;
      uVar2 = FUN_004873b0(local_bc,i);
      local_4._0_1_ = 1;
      FUN_004877e0(local_128,local_118,uVar2);
      local_4._0_1_ = 4;
      FUN_004028f0(1);
      local_4._0_1_ = 3;
      FUN_004028f0(1);
      if (local_120 == 0) {
        uVar2 = FUN_004873b0(local_1c,i);
        local_4._0_1_ = 5;
        local_f8[0] = local_12d;
        FUN_004028f0(0);
        j = 0xffffffff;
        pcVar5 = s___005aa2cc;
        goto code_r0x0047f2dc;
      }
      uVar2 = FUN_0047f4c0(local_128);
      uVar2 = FUN_0047fc10(local_128,uVar2);
      FUN_0047fd20(uVar2);
      FUN_0047f880(uVar2);
      local_4 = 0xffffffff;
      if (local_124 != 0) {
        cVar1 = *(char *)(local_124 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_124 + -1);
        }
        else {
          *(char *)(local_124 + -1) = cVar1 + -1;
        }
      }
      i = i + 1;
      local_124 = 0;
      local_120 = 0;
      local_11c = 0;
    } while (i < local_12c);
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    j = j - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    if (cVar1 == '\0') break;
code_r0x0047f2dc:
    if (j == 0) break;
  }
  FUN_00402940(s___005aa2cc,~j - 1);
  local_4._0_1_ = 6;
  uVar3 = FUN_004873b0(local_ac,0xed);
  local_4._0_1_ = 7;
  local_108[0] = local_12d;
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa2d4;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa2d4,~j - 1);
  local_4._0_1_ = 8;
  local_e8[0] = local_12d;
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005aa300;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aa300,~j - 1);
  local_4._0_1_ = 9;
  uVar4 = FUN_0047c9a0(local_8c,local_e8,local_108);
  local_4._0_1_ = 10;
  uVar4 = FUN_004796b0(local_4c,uVar4,s__005aa2d0);
  local_4._0_1_ = 0xb;
  uVar3 = FUN_0047c9a0(local_6c,uVar4,uVar3);
  local_4._0_1_ = 0xc;
  uVar3 = FUN_0047c9a0(local_2c,uVar3,local_f8);
  local_4._0_1_ = 0xd;
  uVar3 = FUN_004796b0(local_9c,uVar3,s_Overlay_heading_005aa2b8);
  local_4._0_1_ = 0xe;
  uVar2 = FUN_0047c9a0(local_7c,uVar3,uVar2);
  local_4._0_1_ = 0xf;
  uVar2 = FUN_004796b0(local_5c,uVar2,s_not_found_005aa2ac);
  local_4._0_1_ = 0x10;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005aa2a8);
  local_4._0_1_ = 0x11;
  FUN_00558826();
  local_4._0_1_ = 0x12;
  FUN_00424980(&local_12d);
  local_4._0_1_ = 0x13;
  local_d8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0x11);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_d8,&DAT_0057f730);
}


/* ==== 0047f4c0 FUN_0047f4c0 ==== */

undefined4 FUN_0047f4c0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint i;
  char *pcVar4;
  undefined1 local_109;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  int local_d0;
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
  puStack_8 = &LAB_0056c13e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Parent_005aa034;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Parent_005aa034,~i - 1);
  local_4 = 0;
  FUN_004877e0(local_d8,param_1,local_c8);
  local_4._0_1_ = 2;
  FUN_004028f0(1);
  if (local_d0 != 0) {
    uVar2 = FUN_00484fa0(local_d8);
    local_108[0] = local_109;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa3a0;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa3a0,~i - 1);
    local_4._0_1_ = 0x11;
    uVar3 = FUN_004797e0(local_f8,s_Parent_composite_005aa3e4,local_d8);
    local_4._0_1_ = 0x12;
    uVar3 = FUN_004796b0(local_e8,uVar3,s_not_found_in_overlay_005aa3cc);
    local_4._0_1_ = 0x13;
    FUN_00487bc0(uVar2,uVar3,local_108,0x109);
    local_4._0_1_ = 0x12;
    FUN_004028f0(1);
    local_4._0_1_ = 0x11;
    FUN_004028f0(1);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(1);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    ExceptionList = local_c;
    return uVar2;
  }
  local_e8[0] = local_109;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_No_parent_in_ini_file_for_compon_005aa324;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_No_parent_in_ini_file_for_compon_005aa324,~i - 1);
  local_f8[0] = local_109;
  local_4._0_1_ = 3;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s___005aa34c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aa34c,~i - 1);
  local_4._0_1_ = 4;
  uVar2 = FUN_004873b0(local_8c,0x106);
  local_4._0_1_ = 5;
  local_108[0] = local_109;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa354;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa354,~i - 1);
  local_b8[0] = local_109;
  local_4._0_1_ = 6;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_HeadUp_Display_exception_in__005aa380;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aa380,~i - 1);
  local_4._0_1_ = 7;
  uVar3 = FUN_0047c9a0(local_1c,local_b8,local_108);
  local_4._0_1_ = 8;
  uVar3 = FUN_004796b0(local_6c,uVar3,s__005aa350);
  local_4._0_1_ = 9;
  uVar2 = FUN_0047c9a0(local_2c,uVar3,uVar2);
  local_4._0_1_ = 10;
  uVar2 = FUN_0047c9a0(local_4c,uVar2,local_f8);
  local_4._0_1_ = 0xb;
  uVar2 = FUN_0047c9a0(local_7c,uVar2,local_e8);
  local_4._0_1_ = 0xc;
  uVar2 = FUN_0047c9a0(local_5c,uVar2,param_1);
  local_4._0_1_ = 0xd;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005aa320);
  local_4._0_1_ = 0xe;
  FUN_00558826();
  local_4._0_1_ = 0xf;
  FUN_00424980(&local_109);
  local_4._0_1_ = 0x10;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 0047f880 FUN_0047f880 ==== */

void FUN_0047f880(undefined4 param_1)

{
  FUN_004806c0(param_1);
  FUN_00480ad0(param_1);
  FUN_0047f8b0(param_1);
  FUN_00480c20(param_1);
  return;
}


/* ==== 0047f8b0 FUN_0047f8b0 ==== */

void FUN_0047f8b0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *str1;
  int iVar3;
  undefined4 uVar4;
  uint i;
  undefined1 local_129;
  undefined1 local_128 [4];
  char *str1_2;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined **local_d8 [7];
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
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c1f9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_Visible_005aa074;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Visible_005aa074,~i - 1);
  local_4 = 0;
  uVar2 = FUN_0047bc10(local_118);
  FUN_004877e0(local_128,uVar2);
  local_4._0_1_ = 2;
  FUN_004028f0(1);
  str1 = str1_2;
  if (str1_2 == (char *)0x0) {
    str1 = "";
  }
  iVar3 = __strcmpi(str1,s_true_005aa3f8);
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x20))(1);
  }
  else {
    if (str1_2 == (char *)0x0) {
      str1_2 = "";
    }
    iVar3 = __strcmpi(str1_2,s_false_005aa400);
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x20))(0);
    }
    else {
      iVar3 = FUN_00483e70(&DAT_007126d0);
      if (iVar3 != 0) {
        local_f8[0] = local_129;
        FUN_004028f0(0);
        i = 0xffffffff;
        str1 = s___005aa430;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *str1;
          str1 = str1 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(s___005aa430,~i - 1);
        local_4._0_1_ = 3;
        uVar2 = FUN_004873b0(local_2c,0x137);
        local_4._0_1_ = 4;
        local_108[0] = local_129;
        FUN_004028f0(0);
        i = 0xffffffff;
        str1 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa438;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *str1;
          str1 = str1 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa438,~i - 1);
        local_4._0_1_ = 5;
        local_e8[0] = local_129;
        FUN_004028f0(0);
        i = 0xffffffff;
        str1 = s_HeadUp_Display_exception_in__005aa464;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *str1;
          str1 = str1 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(s_HeadUp_Display_exception_in__005aa464,~i - 1);
        local_4._0_1_ = 6;
        uVar4 = FUN_0047c9a0(local_1c,local_e8,local_108);
        local_4._0_1_ = 7;
        uVar4 = FUN_004796b0(local_bc,uVar4,s__005aa434);
        local_4._0_1_ = 8;
        uVar2 = FUN_0047c9a0(local_8c,uVar4,uVar2);
        local_4._0_1_ = 9;
        uVar2 = FUN_0047c9a0(local_4c,uVar2,local_f8);
        local_4._0_1_ = 10;
        uVar2 = FUN_004796b0(local_6c,uVar2,s_Invalid_Visible_value_for_005aa414);
        local_4._0_1_ = 0xb;
        uVar4 = FUN_0047bc10();
        uVar2 = FUN_0047c9a0(local_ac,uVar2,uVar4);
        local_4._0_1_ = 0xc;
        uVar2 = FUN_004796b0(local_9c,uVar2,s___005aa410);
        local_4._0_1_ = 0xd;
        uVar2 = FUN_0047c9a0(local_7c,uVar2,local_128);
        local_4._0_1_ = 0xe;
        uVar2 = FUN_004796b0(local_5c,uVar2,s___005aa40c);
        local_4._0_1_ = 0xf;
        uVar2 = FUN_004796b0(local_3c,uVar2,s___005aa408);
        local_4._0_1_ = 0x10;
        FUN_00558826();
        local_4._0_1_ = 0x11;
        FUN_00424980(&local_129);
        local_4._0_1_ = 0x12;
        local_d8[0] = &PTR_FUN_00576b14;
        FUN_004093c0(uVar2,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0x10);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_d8,&DAT_0057f730);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0047fc10 FUN_0047fc10 ==== */

undefined4 FUN_0047fc10(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  char *pcVar3;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c213;
  local_c = ExceptionList;
  local_2c[0] = (undefined1)param_2;
  i = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar3 = &DAT_005aa03c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(&DAT_005aa03c,~i - 1);
  local_4 = 0;
  FUN_004877e0(local_1c,param_1,local_2c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_14 == 0) {
    uVar2 = FUN_00484390(param_2,param_1);
  }
  else {
    uVar2 = FUN_00484360(param_2,local_1c,param_1);
  }
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return uVar2;
}


/* ==== 0047fd20 FUN_0047fd20 ==== */

void FUN_0047fd20(undefined1 param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint i;
  uint j;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined1 *puVar8;
  float *pfVar9;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c225;
  local_c = ExceptionList;
  local_1c[0] = param_1;
  i = 0xffffffff;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar5 = (char *)&DAT_005aa044;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  ExceptionList = &local_c;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    puVar4 = &DAT_005aa044;
    puVar6 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined1 *)((int)local_18 + i) = 0;
    local_14 = i;
  }
  pfVar9 = &local_28;
  puVar8 = local_1c;
  local_4 = 0;
  uVar3 = FUN_0047bc10(puVar8,pfVar9);
  cVar2 = FUN_00480f70(uVar3,puVar8,pfVar9);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  if (cVar2 != '\0') {
    fVar7 = (float10)fptan((float10)3.1415927 * (float10)0.5 * (float10)0.5);
    fVar7 = fVar7 * (float10)0.9900000095367432;
    local_28 = (float)(fVar7 * (float10)0.003125 * (float10)local_28 - (float10)1.0);
    local_24 = (float)(((float10)1.0 - fVar7 * (float10)0.004166667 * (float10)local_24) *
                      ((float10)1.3333334 / ((float10)DAT_005b3798 / (float10)DAT_005b379c)));
    local_20 = (float)((float10)local_20 * fVar7 * (float10)0.003125);
    FUN_0047bc50(&local_28);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047feb0 FUN_0047feb0 ==== */

void FUN_0047feb0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  uint i;
  char *pcVar8;
  float10 fVar9;
  float *pfVar10;
  char local_101;
  float local_100;
  float local_fc;
  float local_f8;
  undefined1 local_f1;
  char local_f0 [16];
  char local_e0 [16];
  char local_d0 [16];
  char local_c0 [16];
  int local_b0;
  int local_ac;
  undefined **local_a8 [7];
  undefined1 local_8c [4];
  undefined1 *local_88;
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
  puStack_8 = &LAB_0056c344;
  local_c = ExceptionList;
  local_100 = 0.0;
  local_fc = 0.0;
  local_f8 = 0.0;
  ExceptionList = &local_c;
  FUN_004807d0(param_1);
  local_d0[0] = local_101;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar8 = (char *)&DAT_005aa044;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_005aa044,~i - 1);
  pfVar10 = &local_100;
  pcVar8 = local_d0;
  local_4 = 0;
  uVar2 = FUN_0047bc10(pcVar8,pfVar10);
  cVar1 = FUN_00480f70(uVar2,pcVar8,pfVar10);
  local_101 = cVar1 == '\0';
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if (local_101 != '\0') {
    ExceptionList = local_c;
    return;
  }
  local_b0 = 0;
  local_ac = 0;
  local_d0[0] = local_101;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar8 = s_Alignment_005aa0b0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Alignment_005aa0b0,~i - 1);
  local_4 = 1;
  uVar2 = FUN_0047bc10(local_d0);
  FUN_004877e0(local_8c,uVar2);
  local_4._0_1_ = 3;
  FUN_004028f0(1);
  puVar3 = local_88;
  if (local_88 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  iVar4 = FUN_004c3d60(puVar3,s___005aa484);
  iVar5 = local_b0;
  iVar6 = local_ac;
  if (iVar4 == 2) {
    FUN_004876f0(local_e0,0);
    local_4._0_1_ = 4;
    iVar5 = FUN_00483580(local_e0);
    FUN_004876f0(local_f0,1);
    local_4._0_1_ = 5;
    iVar6 = FUN_00483830(local_f0);
    local_4._0_1_ = 4;
    FUN_004028f0(1);
    local_4._0_1_ = 3;
    FUN_004028f0(1);
  }
  local_100 = local_100 / *(float *)(in_ECX + 0x18);
  local_100 = (local_100 + local_100) - 1.0;
  if (iVar5 == 0) {
    fVar9 = (float10)FUN_0047c4d0();
    fVar9 = fVar9 + (float10)local_100;
LAB_00480286:
    local_100 = (float)fVar9;
  }
  else if (iVar5 != 1) {
    if (iVar5 != 2) {
      local_f0[0] = local_101;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s___005aa4a8;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s___005aa4a8,~i - 1);
      local_4._0_1_ = 6;
      uVar2 = FUN_004873b0(local_7c,0x1bb);
      local_4._0_1_ = 7;
      local_c0[0] = local_101;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa4b0;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa4b0,~i - 1);
      local_e0[0] = local_101;
      local_4._0_1_ = 8;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s_HeadUp_Display_exception_in__005aa4dc;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_HeadUp_Display_exception_in__005aa4dc,~i - 1);
      local_4._0_1_ = 9;
      uVar7 = FUN_0047c9a0(local_1c,local_e0,local_c0);
      local_4._0_1_ = 10;
      uVar7 = FUN_004796b0(local_2c,uVar7,s__005aa4ac);
      local_4._0_1_ = 0xb;
      uVar2 = FUN_0047c9a0(local_4c,uVar7,uVar2);
      local_4._0_1_ = 0xc;
      uVar2 = FUN_0047c9a0(local_6c,uVar2,local_f0);
      local_4._0_1_ = 0xd;
      uVar2 = FUN_004796b0(local_5c,uVar2,s_Unreachable_code_reached_005aa48c);
      local_4._0_1_ = 0xe;
      uVar2 = FUN_004796b0(local_3c,uVar2,s___005aa488);
      local_4._0_1_ = 0xf;
      FUN_00558826();
      local_4._0_1_ = 0x10;
      FUN_00424980(&local_101);
      local_4._0_1_ = 0x11;
      local_a8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(uVar2,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0xf);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a8,&DAT_0057f730);
    }
    fVar9 = (float10)FUN_0047c4d0();
    fVar9 = (float10)local_100 - fVar9;
    goto LAB_00480286;
  }
  local_fc = local_fc / *(float *)(in_ECX + 0x1c);
  local_fc = 1.0 - (local_fc + local_fc);
  if (iVar6 == 0) {
    fVar9 = (float10)FUN_0047c4e0();
    fVar9 = (float10)local_fc - fVar9;
  }
  else {
    if (iVar6 == 1) goto LAB_0048049f;
    if (iVar6 != 2) {
      local_c0[0] = local_101;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s___005aa51c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s___005aa51c,~i - 1);
      local_4._0_1_ = 0x12;
      uVar2 = FUN_004873b0(local_3c,0x1ce);
      local_f0[0] = local_101;
      local_4._0_1_ = 0x13;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa524;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa524,~i - 1);
      local_4._0_1_ = 0x14;
      local_e0[0] = local_101;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s_HeadUp_Display_exception_in__005aa550;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_HeadUp_Display_exception_in__005aa550,~i - 1);
      local_4._0_1_ = 0x15;
      uVar7 = FUN_0047c9a0(local_5c,local_e0,local_f0);
      local_4._0_1_ = 0x16;
      uVar7 = FUN_004796b0(local_6c,uVar7,s__005aa520);
      local_4._0_1_ = 0x17;
      uVar2 = FUN_0047c9a0(local_4c,uVar7,uVar2);
      local_4._0_1_ = 0x18;
      uVar2 = FUN_0047c9a0(local_2c,uVar2,local_c0);
      local_4._0_1_ = 0x19;
      uVar2 = FUN_004796b0(local_1c,uVar2,s_Unreachable_code_reached_005aa500);
      local_4._0_1_ = 0x1a;
      uVar2 = FUN_004796b0(local_7c,uVar2,s___005aa4fc);
      local_4._0_1_ = 0x1b;
      FUN_00558826();
      local_4._0_1_ = 0x1c;
      FUN_00424980(&local_f1);
      local_4._0_1_ = 0x1d;
      local_a8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(uVar2,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0x1b);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a8,&DAT_0057f730);
    }
    fVar9 = (float10)FUN_0047c4e0();
    fVar9 = fVar9 + (float10)local_fc;
  }
  local_fc = (float)fVar9;
LAB_0048049f:
  local_f8 = local_f8 / *(float *)(in_ECX + 0x18);
  FUN_0047bc50(&local_100);
  if (local_88 != (undefined1 *)0x0) {
    cVar1 = local_88[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_88 + -1);
    }
    else {
      local_88[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00480500 FUN_00480500 ==== */

void FUN_00480500(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  uint i;
  uint j;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 *puVar10;
  float *pfVar11;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c356;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004807d0(param_1);
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_28 = -1.0;
  local_20 = 0.0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  fVar9 = (float10)fptan((float10)3.1415927 * (float10)0.5 * (float10)0.5);
  fVar1 = (float)(fVar9 * (float10)0.9900000095367432);
  fVar3 = 1.3333334 / ((float)DAT_005b3798 / (float)DAT_005b379c);
  pcVar7 = (char *)&DAT_005aa044;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar4 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar4 != '\0');
  i = ~i - 1;
  local_24 = fVar3;
  cVar4 = FUN_00402a00(i,1);
  if (cVar4 != '\0') {
    puVar6 = &DAT_005aa044;
    puVar8 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)local_18 + i) = 0;
    local_14 = i;
  }
  pfVar11 = &local_28;
  puVar10 = local_1c;
  local_4 = 0;
  uVar5 = FUN_0047bc10(puVar10,pfVar11);
  cVar4 = FUN_00480f70(uVar5,puVar10,pfVar11);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar2 + -1;
    }
  }
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  if (cVar4 != '\0') {
    local_28 = (float)(fVar9 * (float10)0.9900000095367432 * (float10)0.003125) * local_28 - 1.0;
    local_24 = (1.0 - fVar1 * 0.004166667 * local_24) * fVar3;
    local_20 = local_20 * fVar1 * 0.003125;
    FUN_0047bc50(&local_28);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004806c0 FUN_004806c0 ==== */

void FUN_004806c0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c368;
  pvStack_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  i = 0xffffffff;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  pcVar3 = s_Scale_005aa050;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_Scale_005aa050;
    pcVar4 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    local_18[i] = '\0';
    local_14 = i;
  }
  puVar6 = &local_28;
  puVar5 = local_1c;
  local_4 = 0;
  uVar2 = FUN_0047bc10(puVar5,puVar6);
  FUN_00480f70(uVar2,puVar5,puVar6);
  local_4 = 0xffffffff;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  (**(code **)(*param_1 + 0x24))(&local_28);
  ExceptionList = local_10;
  return;
}


/* ==== 004807d0 FUN_004807d0 ==== */

void FUN_004807d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 auStack_4c [4];
  char *pcStack_48;
  undefined1 auStack_3c [4];
  char *pcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056c3a2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)(**(code **)(*param_1 + 0x1c))();
  if (piVar2 != (int *)0x0) {
    param_1._0_1_ = SUB41(piVar2,0);
    auStack_4c[0] = param_1._0_1_;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = s_Width_005aa064;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar4 = s_Width_005aa064;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcStack_48 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcStack_48 = pcStack_48 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcStack_48 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcStack_48 = pcStack_48 + 1;
      }
      FUN_004029e0(i);
    }
    uStack_4 = 0;
    uVar3 = FUN_0047bc10(auStack_4c);
    FUN_004877e0(auStack_2c,uVar3);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    FUN_004028f0(1);
    if (iStack_24 != 0) {
      auStack_3c[0] = param_1._0_1_;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar4 = s_Width_005aa064;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      i = ~i - 1;
      cVar1 = FUN_00402a00(i,1);
      if (cVar1 != '\0') {
        pcVar4 = s_Width_005aa064;
        pcVar5 = pcStack_38;
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *pcVar5 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        }
        FUN_004029e0(i);
      }
      uStack_4._0_1_ = 3;
      uVar3 = FUN_0047bc10(auStack_3c);
      fVar6 = (float10)FUN_00487640(uVar3);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      FUN_004028f0(1);
      (**(code **)(*piVar2 + 0x34))((float)fVar6 / *(float *)(in_ECX + 0x18));
    }
    auStack_3c[0] = param_1._0_1_;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar4 = s_Height_005aa06c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar4 = s_Height_005aa06c;
      pcVar5 = pcStack_38;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      FUN_004029e0(i);
    }
    uStack_4._0_1_ = 4;
    uVar3 = FUN_0047bc10(auStack_3c);
    uVar3 = FUN_004877e0(auStack_1c,uVar3);
    uStack_4._0_1_ = 5;
    FUN_004093c0(uVar3,0,0xffffffff);
    uStack_4._0_1_ = 4;
    FUN_004028f0(1);
    uStack_4._0_1_ = 2;
    FUN_004028f0(1);
    if (iStack_24 != 0) {
      auStack_3c[0] = param_1._0_1_;
      i = 0xffffffff;
      pcStack_38 = (char *)0x0;
      uStack_34 = 0;
      uStack_30 = 0;
      pcVar4 = s_Height_005aa06c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_Height_005aa06c,~i - 1);
      uStack_4._0_1_ = 6;
      uVar3 = FUN_0047bc10(auStack_3c);
      fVar6 = (float10)FUN_00487640(uVar3);
      uStack_4._0_1_ = 2;
      if (pcStack_38 != (char *)0x0) {
        cVar1 = pcStack_38[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(pcStack_38 + -1);
        }
        else {
          pcStack_38[-1] = cVar1 + -1;
        }
      }
      (**(code **)(*piVar2 + 0x38))((float)fVar6 / *(float *)(in_ECX + 0x1c));
    }
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return;
      }
      FUN_0054b339(iStack_28 + -1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00480ad0 FUN_00480ad0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480ad0(undefined1 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 *local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c3b4;
  local_c = ExceptionList;
  local_1c = (float)CONCAT31(local_1c._1_3_,param_1);
  i = 0xffffffff;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0.0;
  local_10 = 0;
  pcVar4 = (char *)&DAT_005aa058;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar3 = &DAT_005aa058;
    puVar5 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined1 *)((int)local_18 + i) = 0;
    local_14 = (float)i;
  }
  pfVar7 = &local_28;
  pfVar6 = &local_1c;
  local_4 = 0;
  uVar2 = FUN_0047bc10(pfVar6,pfVar7);
  FUN_00480f70(uVar2,pfVar6,pfVar7);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  local_28 = _DAT_007126cc * local_28;
  local_24 = local_24 * _DAT_007126cc;
  local_20 = local_20 * _DAT_007126cc;
  local_1c = local_28;
  local_18 = (undefined4 *)local_24;
  local_14 = local_20;
  FUN_0047bc90(&local_28);
  ExceptionList = local_c;
  return;
}


/* ==== 00480c20 FUN_00480c20 ==== */

void FUN_00480c20(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint i;
  char *pcVar8;
  undefined1 local_fd;
  uint local_fc;
  undefined1 local_f8 [4];
  undefined1 *local_f4;
  int local_f0;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c44e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar8 = s_RGBA_005aa07c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_RGBA_005aa07c,~i - 1);
  local_4 = 0;
  uVar2 = FUN_0047bc10(local_e8);
  FUN_004877e0(local_f8,uVar2);
  local_4._0_1_ = 2;
  FUN_004028f0(1);
  if (local_f0 == 0) {
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  else {
    puVar3 = local_f4;
    if (local_f4 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    iVar4 = FUN_004c3d60(puVar3,s___005aa008);
    if (iVar4 != 4) {
      local_c8[0] = local_fd;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s___005aa59c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s___005aa59c,~i - 1);
      local_4._0_1_ = 3;
      uVar2 = FUN_004873b0(local_8c,0x269);
      local_b8[0] = local_fd;
      local_4._0_1_ = 4;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa5a4;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa5a4,~i - 1);
      local_4._0_1_ = 5;
      local_d8[0] = local_fd;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s_HeadUp_Display_exception_in__005aa5d0;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_HeadUp_Display_exception_in__005aa5d0,~i - 1);
      local_4._0_1_ = 6;
      uVar5 = FUN_0047c9a0(local_1c,local_d8,local_b8);
      local_4._0_1_ = 7;
      uVar5 = FUN_004796b0(local_6c,uVar5,s__005aa5a0);
      local_4._0_1_ = 8;
      uVar2 = FUN_0047c9a0(local_2c,uVar5,uVar2);
      local_4._0_1_ = 9;
      uVar2 = FUN_0047c9a0(local_4c,uVar2,local_c8);
      local_4._0_1_ = 10;
      uVar2 = FUN_004796b0(local_7c,uVar2,s_Invalid_number_of_arguments_for_R_005aa574);
      local_4._0_1_ = 0xb;
      uVar5 = FUN_0047bc10();
      uVar2 = FUN_0047c9a0(local_5c,uVar2,uVar5);
      local_4._0_1_ = 0xc;
      uVar2 = FUN_004796b0(local_3c,uVar2,s___005aa570);
      local_4._0_1_ = 0xd;
      FUN_00558826();
      local_4._0_1_ = 0xe;
      FUN_00424980(&local_fd);
      local_4._0_1_ = 0xf;
      local_a8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(uVar2,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0xd);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a8,&DAT_0057f730);
    }
    i = FUN_004c3ec0(0);
    uVar6 = FUN_004c3ec0(1);
    uVar7 = FUN_004c3ec0(2);
    iVar4 = FUN_004c3ec0(3);
    local_fc = ((iVar4 << 8 | i) << 8 | uVar6) << 8 | uVar7;
    (**(code **)(*param_1 + 0x28))(&local_fc);
    (**(code **)(*param_1 + 0x14))();
    if (local_f4 != (undefined1 *)0x0) {
      cVar1 = local_f4[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_f4 + -1);
      }
      else {
        local_f4[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00480f70 FUN_00480f70 ==== */

undefined4 FUN_00480f70(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c460;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004877e0(local_1c,param_1,param_2);
  local_4 = 0;
  if (local_14 != 0) {
    FUN_00481060(local_1c,param_3,param_3 + 4,param_3 + 8);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return 1;
      }
      FUN_0054b339(local_18 + -1);
    }
    ExceptionList = local_c;
    return 1;
  }
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return 0;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 00481060 FUN_00481060 ==== */

void FUN_00481060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint i;
  char *pcVar7;
  undefined1 local_1bc [16];
  undefined1 local_1ac [16];
  undefined1 local_19c [32];
  undefined1 local_17c [16];
  undefined1 local_16c [16];
  undefined1 local_15c [16];
  undefined1 local_14c [16];
  undefined1 local_13c [32];
  undefined1 local_11c [32];
  undefined1 local_fc [16];
  undefined1 local_ec [60];
  undefined **local_b0 [15];
  undefined1 local_74 [32];
  undefined1 local_54 [32];
  undefined1 local_34 [32];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056c594;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdf8;
  puVar2 = *(undefined1 **)(param_1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  ExceptionList = &local_10;
  iVar3 = FUN_004c3d60(puVar2,s___005aa008);
  if ((iVar3 < 4) && (1 < iVar3)) {
    local_8 = 0x10;
    FUN_004875b0(0,param_2);
    FUN_004875b0(1,param_3);
    if (iVar3 == 3) {
      FUN_004875b0(2,param_4);
    }
    ExceptionList = local_10;
    return;
  }
  uVar4 = FUN_004873b0(local_14c,iVar3);
  local_8 = 0;
  local_74[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s___005aa620;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aa620,~i - 1);
  local_8._0_1_ = 1;
  uVar5 = FUN_004873b0(local_1ac,0x2aa);
  local_8._0_1_ = 2;
  local_34[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa628;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa628,~i - 1);
  local_8._0_1_ = 3;
  local_54[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005aa654;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aa654,~i - 1);
  local_8._0_1_ = 4;
  uVar6 = FUN_0047c9a0(local_16c,local_54,local_34);
  local_8._0_1_ = 5;
  uVar6 = FUN_004796b0(local_ec,uVar6,s__005aa624);
  local_8._0_1_ = 6;
  uVar5 = FUN_0047c9a0(local_fc,uVar6,uVar5);
  local_8._0_1_ = 7;
  uVar5 = FUN_0047c9a0(local_11c,uVar5,local_74);
  local_8._0_1_ = 8;
  uVar5 = FUN_004796b0(local_13c,uVar5,s_Invalid_no_of_X_Y_Z_arguments___005aa600);
  local_8._0_1_ = 9;
  uVar4 = FUN_0047c9a0(local_15c,uVar5,uVar4);
  local_8._0_1_ = 10;
  uVar4 = FUN_004796b0(local_17c,uVar4,s_for_line_005aa5f4);
  local_8._0_1_ = 0xb;
  uVar4 = FUN_0047c9a0(local_19c,uVar4,param_1);
  local_8._0_1_ = 0xc;
  uVar4 = FUN_004796b0(local_1bc,uVar4,s___005aa5f0);
  local_8._0_1_ = 0xd;
  FUN_00558826();
  local_8._0_1_ = 0xe;
  FUN_00424980((int)&param_1 + 3);
  local_8._0_1_ = 0xf;
  local_b0[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar4,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,0xd);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_b0,&DAT_0057f730);
}


/* ==== 004814c0 FUN_004814c0 ==== */

void FUN_004814c0(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint j;
  int i;
  char *pcVar6;
  undefined1 local_131 [5];
  int local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  int local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined **local_d8 [7];
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
  puStack_8 = &LAB_0056c64f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_12c = FUN_004c3cd0(s_Fonts_005aa024,s_Count_005aa084);
  uVar2 = local_131[0];
  i = 0;
  if (0 < local_12c) {
    do {
      local_128[0] = uVar2;
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar6 = s_Fonts_005aa024;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_Fonts_005aa024,~j - 1);
      local_4 = 0;
      uVar3 = FUN_004873b0(local_bc,i);
      local_4._0_1_ = 1;
      FUN_004877e0(local_118,local_128,uVar3);
      local_4._0_1_ = 4;
      FUN_004028f0(1);
      local_4._0_1_ = 3;
      FUN_004028f0(1);
      if (local_110 == 0) {
        uVar3 = FUN_004873b0(local_ac,i);
        local_108[0] = local_131[0];
        local_4._0_1_ = 5;
        FUN_004028f0(0);
        j = 0xffffffff;
        pcVar6 = s___005aa714;
        goto code_r0x0048161d;
      }
      FUN_00481800(local_118);
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      i = i + 1;
    } while (i < local_12c);
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    j = j - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
code_r0x0048161d:
    if (j == 0) break;
  }
  FUN_00402940(s___005aa714,~j - 1);
  local_4._0_1_ = 6;
  uVar4 = FUN_004873b0(local_1c,0x2ce);
  local_4._0_1_ = 7;
  local_f8[0] = local_131[0];
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa71c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa71c,~j - 1);
  local_e8[0] = local_131[0];
  local_4._0_1_ = 8;
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar6 = s_HeadUp_Display_exception_in__005aa748;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aa748,~j - 1);
  local_4._0_1_ = 9;
  uVar5 = FUN_0047c9a0(local_8c,local_e8,local_f8);
  local_4._0_1_ = 10;
  uVar5 = FUN_004796b0(local_4c,uVar5,s__005aa718);
  local_4._0_1_ = 0xb;
  uVar4 = FUN_0047c9a0(local_6c,uVar5,uVar4);
  local_4._0_1_ = 0xc;
  uVar4 = FUN_0047c9a0(local_2c,uVar4,local_108);
  local_4._0_1_ = 0xd;
  uVar4 = FUN_004796b0(local_9c,uVar4,s_Overlay_heading_005aa700);
  local_4._0_1_ = 0xe;
  uVar3 = FUN_0047c9a0(local_7c,uVar4,uVar3);
  local_4._0_1_ = 0xf;
  uVar3 = FUN_004796b0(local_5c,uVar3,s_not_found_005aa6f4);
  local_4._0_1_ = 0x10;
  uVar3 = FUN_004796b0(local_3c,uVar3,s___005aa6f0);
  local_4._0_1_ = 0x11;
  FUN_00558826();
  local_4._0_1_ = 0x12;
  FUN_00424980(local_131);
  local_4._0_1_ = 0x13;
  local_d8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0x11);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_d8,&DAT_0057f730);
}


/* ==== 00481800 FUN_00481800 ==== */

void FUN_00481800(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  uint j;
  char *pcVar3;
  int k;
  char *pcVar4;
  undefined **ppuVar5;
  float10 fVar6;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c661;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00485340(param_1);
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar3 = s_DISTANCE_005aa08c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_DISTANCE_005aa08c;
    pcVar4 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    local_18[i] = '\0';
    local_14 = i;
  }
  k = 0;
  local_4 = 0;
  fVar6 = (float10)FUN_00487640(param_1,local_1c);
  FUN_0047e9f0((float)fVar6);
  local_4 = 0xffffffff;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  if (0 < DAT_005aa004) {
    ppuVar5 = &PTR_DAT_00576c98;
    do {
      FUN_00481940(uVar2,ppuVar5);
      k = k + 1;
      ppuVar5 = ppuVar5 + 2;
    } while (k < DAT_005aa004);
  }
  FUN_00481a60(uVar2);
  FUN_0047ea10();
  ExceptionList = local_c;
  return;
}


/* ==== 00481940 FUN_00481940 ==== */

void FUN_00481940(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint i;
  char *pcVar2;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c67b;
  local_c = ExceptionList;
  local_2c[0] = param_2._0_1_;
  i = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar2 = (char *)*param_2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940((char *)*param_2,~i - 1);
  local_4 = 0;
  FUN_004877e0(local_1c,param_1 + 0x808,local_2c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_14 == 0) {
    if (local_18 == 0) {
      ExceptionList = local_c;
      return;
    }
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    FUN_00481b90(local_1c,*(undefined1 *)(param_2 + 1),param_1);
    if (local_18 == 0) {
      ExceptionList = local_c;
      return;
    }
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  FUN_0054b339(local_18 + -1);
  ExceptionList = local_c;
  return;
}


/* ==== 00481a60 FUN_00481a60 ==== */

void FUN_00481a60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int i;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c69d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004796b0(local_1c,param_1 + 0x808,s__ASCII_005aa768);
  i = 0;
  local_4 = 0;
  do {
    uVar2 = FUN_004873b0(local_2c,i);
    local_4._0_1_ = 1;
    FUN_004877e0(local_3c,local_1c,uVar2);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (local_34 != 0) {
      FUN_00481b90(local_3c,i,param_1);
    }
    local_4 = local_4 & 0xffffff00;
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_38 + -1);
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
    i = i + 1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
  } while (i < 0x100);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00481b90 FUN_00481b90 ==== */

void FUN_00481b90(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint i;
  char *pcVar7;
  undefined1 local_119;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [16];
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c779;
  local_c = ExceptionList;
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  ExceptionList = &local_c;
  iVar4 = FUN_004c3d60(puVar3,s___005aa008);
  if (4 < iVar4) {
    uVar5 = FUN_004876f0(local_d8,0);
    local_4 = 0x15;
    FUN_004796b0(local_b8,uVar5,s__PCX_005aa804);
    local_4 = CONCAT31(local_4._1_3_,0x17);
    FUN_004028f0(1);
    local_118 = (float)FUN_004c3ec0(1);
    local_114 = (float)(int)local_118;
    local_118 = (float)FUN_004c3ec0(2);
    local_10c = (float)(int)local_118;
    local_118 = (float)FUN_004c3ec0(3);
    local_110 = (float)(int)local_118;
    iVar4 = FUN_004c3ec0(4);
    fVar2 = local_110;
    local_118 = (float)iVar4;
    uVar5 = FUN_00482960(local_114,local_10c,local_110,local_118,local_b8);
    FUN_0047e6f0(param_2,uVar5,fVar2);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    ExceptionList = local_c;
    return;
  }
  uVar5 = FUN_004873b0(local_7c,iVar4);
  local_4 = 0;
  uVar5 = FUN_004797e0(local_8c,s_Wrong_number_of_arguments___005aa780,uVar5);
  local_4._0_1_ = 1;
  FUN_004796b0(local_c8,uVar5,s___in_character_005aa770);
  local_4._0_1_ = 4;
  FUN_004028f0(1);
  local_4._0_1_ = 3;
  FUN_004028f0(1);
  FUN_0047eab0(1,param_2);
  uVar5 = FUN_004873b0(local_d8,(int)(char)param_2);
  local_4._0_1_ = 5;
  uVar5 = FUN_004797e0(local_e8,s___005aa7a8,uVar5);
  local_4._0_1_ = 6;
  uVar5 = FUN_004796b0(local_108,uVar5,s___in_font_005aa79c);
  local_4._0_1_ = 7;
  uVar5 = FUN_0047c9a0(local_f8,uVar5,param_3 + 0x808);
  local_4._0_1_ = 8;
  FUN_00483d90(uVar5,0,0xffffffff);
  local_4._0_1_ = 7;
  FUN_004028f0(1);
  local_4._0_1_ = 6;
  FUN_004028f0(1);
  local_4._0_1_ = 5;
  FUN_004028f0(1);
  local_4._0_1_ = 3;
  FUN_004028f0(1);
  local_f8[0] = local_119;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s___005aa7b0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aa7b0,~i - 1);
  local_4._0_1_ = 9;
  uVar5 = FUN_004873b0(local_d8,0x32f);
  local_e8[0] = local_119;
  local_4._0_1_ = 10;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa7b8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa7b8,~i - 1);
  local_4._0_1_ = 0xb;
  local_108[0] = local_119;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005aa7e4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aa7e4,~i - 1);
  local_4._0_1_ = 0xc;
  uVar6 = FUN_0047c9a0(local_4c,local_108,local_e8);
  local_4._0_1_ = 0xd;
  uVar6 = FUN_004796b0(local_1c,uVar6,s__005aa7b4);
  local_4._0_1_ = 0xe;
  uVar5 = FUN_0047c9a0(local_6c,uVar6,uVar5);
  local_4._0_1_ = 0xf;
  uVar5 = FUN_0047c9a0(local_2c,uVar5,local_f8);
  local_4._0_1_ = 0x10;
  uVar5 = FUN_0047c9a0(local_5c,uVar5,local_c8);
  local_4._0_1_ = 0x11;
  uVar5 = FUN_004796b0(local_3c,uVar5,s___005aa7ac);
  local_4._0_1_ = 0x12;
  FUN_00558826();
  local_4._0_1_ = 0x13;
  FUN_00424980(&local_119);
  local_4._0_1_ = 0x14;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar5,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0x12);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 00482000 FUN_00482000 ==== */

void FUN_00482000(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint j;
  int i;
  char *pcVar6;
  undefined1 local_141 [5];
  int local_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  int local_e0;
  undefined **local_d8 [7];
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
  puStack_8 = &LAB_0056c83f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_13c = FUN_004c3cd0(s_Strings_005aa02c,s_Count_005aa084);
  uVar2 = local_141[0];
  i = 0;
  if (0 < local_13c) {
    do {
      local_138[0] = uVar2;
      FUN_004028f0(0);
      j = 0xffffffff;
      pcVar6 = s_Strings_005aa02c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_Strings_005aa02c,~j - 1);
      local_4 = 0;
      uVar3 = FUN_004873b0(local_bc,i);
      local_4._0_1_ = 1;
      FUN_004877e0(local_e8,local_138,uVar3);
      local_4._0_1_ = 4;
      FUN_004028f0(1);
      local_4._0_1_ = 3;
      FUN_004028f0(1);
      if (local_e0 == 0) {
        uVar3 = FUN_004873b0(local_ac,i);
        local_108[0] = local_141[0];
        local_4._0_1_ = 5;
        FUN_004028f0(0);
        j = 0xffffffff;
        pcVar6 = s_Overlay_heading_005aa81c;
        goto code_r0x0048215d;
      }
      FUN_00482390(local_e8);
      local_4 = 0xffffffff;
      FUN_004028f0(1);
      i = i + 1;
    } while (i < local_13c);
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    j = j - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
code_r0x0048215d:
    if (j == 0) break;
  }
  FUN_00402940(s_Overlay_heading_005aa81c,~j - 1);
  local_4._0_1_ = 6;
  local_118[0] = local_141[0];
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar6 = s___005aa830;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aa830,~j - 1);
  local_4._0_1_ = 7;
  uVar4 = FUN_004873b0(local_1c,0x351);
  local_128[0] = local_141[0];
  local_4._0_1_ = 8;
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa838;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa838,~j - 1);
  local_4._0_1_ = 9;
  local_f8[0] = local_141[0];
  FUN_004028f0(0);
  j = 0xffffffff;
  pcVar6 = s_HeadUp_Display_exception_in__005aa864;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aa864,~j - 1);
  local_4._0_1_ = 10;
  uVar5 = FUN_0047c9a0(local_8c,local_f8,local_128);
  local_4._0_1_ = 0xb;
  uVar5 = FUN_004796b0(local_4c,uVar5,s__005aa834);
  local_4._0_1_ = 0xc;
  uVar4 = FUN_0047c9a0(local_6c,uVar5,uVar4);
  local_4._0_1_ = 0xd;
  uVar4 = FUN_0047c9a0(local_2c,uVar4,local_118);
  local_4._0_1_ = 0xe;
  uVar4 = FUN_0047c9a0(local_9c,uVar4,local_108);
  local_4._0_1_ = 0xf;
  uVar3 = FUN_0047c9a0(local_7c,uVar4,uVar3);
  local_4._0_1_ = 0x10;
  uVar3 = FUN_004796b0(local_5c,uVar3,s_not_found_005aa810);
  local_4._0_1_ = 0x11;
  uVar3 = FUN_004796b0(local_3c,uVar3,s___005aa80c);
  local_4._0_1_ = 0x12;
  FUN_00558826();
  local_4._0_1_ = 0x13;
  FUN_00424980(local_141);
  local_4._0_1_ = 0x14;
  local_d8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0x12);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_d8,&DAT_0057f730);
}


/* ==== 00482390 FUN_00482390 ==== */

void FUN_00482390(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  uint i;
  uint j;
  undefined4 unaff_EBX;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  undefined4 uStack_94;
  undefined1 uStack_91;
  undefined4 local_8c;
  char *local_88 [4];
  undefined1 local_78 [12];
  int iStack_6c;
  int local_68;
  undefined1 local_60 [12];
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [4];
  undefined1 local_2c [12];
  int iStack_20;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056c8c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_0047f4c0(param_1);
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  local_68 = FUN_004c3cd0(puVar3,s_Length_005aa098);
  local_78[0] = uStack_91;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = &DAT_005aa0bc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_005aa0bc,~i - 1);
  local_4 = 0;
  FUN_004877e0(local_1c,param_1,local_78);
  local_4._0_1_ = 2;
  FUN_004028f0(1);
  local_8c = FUN_00483030(local_1c);
  local_88[0] = (char *)CONCAT31(local_88[0]._1_3_,uStack_91);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = &DAT_005aa0a0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_005aa0a0,~i - 1);
  local_4._0_1_ = 3;
  FUN_004877e0(&local_3c,param_1,local_88);
  local_4._0_1_ = 5;
  FUN_004028f0(1);
  iVar4 = FUN_00485170(&local_3c);
  local_60[0] = uStack_91;
  local_40 = iVar4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa884;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa884,~i - 1);
  local_4._0_1_ = 6;
  local_78[0] = (undefined1)local_3c;
  FUN_004028f0(0);
  FUN_004093c0(&local_3c,0,0xffffffff);
  local_4._0_1_ = 7;
  uVar5 = FUN_004797e0(local_2c,s_Unknown_font_005aa8b0,local_78);
  local_4._0_1_ = 8;
  FUN_00487bc0(iVar4,uVar5,local_60,0x36d);
  local_4._0_1_ = 7;
  FUN_004028f0(1);
  local_4._0_1_ = 6;
  FUN_004028f0(1);
  local_4._0_1_ = 5;
  FUN_004028f0(1);
  piVar6 = (int *)FUN_00485660(uVar2,param_1,local_68,iVar4,local_8c);
  FUN_00480500(piVar6);
  FUN_0047f880(piVar6);
  local_60[0] = uStack_91;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_Alignment_005aa0b0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Alignment_005aa0b0,~i - 1);
  local_4._0_1_ = 9;
  FUN_004877e0(&local_50,param_1,local_60);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004028f0(1);
  i = 0xffffffff;
  pcVar7 = &DAT_007126d4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar4 = FUN_0040fc80(0,local_48,&DAT_007126d4,~i - 1);
  if (iVar4 != 0) {
    uVar2 = FUN_004832b0(&local_50);
    (**(code **)(*piVar6 + 0x40))(uVar2);
  }
  local_78[0] = uStack_91;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = &DAT_005aa0a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_005aa0a8,~i - 1);
  local_4._0_1_ = 0xc;
  uVar2 = FUN_004877e0(local_2c,param_1,local_78);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  (**(code **)(*piVar6 + 0x48))(uVar2);
  puStack_8._0_1_ = 0xc;
  FUN_004028f0(1);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb);
  FUN_004028f0(1);
  local_8c = CONCAT31(local_8c._1_3_,(char)((uint)unaff_EBX >> 0x18));
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_MaxCharWidth_005aa0c4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar7 = s_MaxCharWidth_005aa0c4;
    pcVar8 = local_88[0];
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(i);
    in_ECX = local_68;
  }
  puStack_8._0_1_ = 0xe;
  iVar4 = FUN_004877e0(auStack_30,param_1,&local_8c);
  i = 0xffffffff;
  puStack_8._0_1_ = 0xf;
  pcVar7 = &DAT_007126d8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar4 = FUN_0040fc80(0,*(undefined4 *)(iVar4 + 8),&DAT_007126d8,~i - 1);
  puStack_8._0_1_ = 0xe;
  FUN_004028f0(1);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb);
  FUN_004028f0(1);
  if (iVar4 != 0) {
    local_8c = CONCAT31(local_8c._1_3_,iVar4 != 0);
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar7 = s_MaxCharWidth_005aa0c4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar7 = s_MaxCharWidth_005aa0c4;
      pcVar8 = local_88[0];
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_004029e0(i);
      in_ECX = local_68;
    }
    puStack_8._0_1_ = 0x10;
    fVar9 = (float10)FUN_00487640(param_1,&local_8c);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb);
    FUN_004028f0(1);
    fVar9 = (float10)(float)fVar9;
  }
  else {
    fVar9 = (float10)FUN_0047e6d0();
  }
  (**(code **)(*piVar6 + 0x34))
            ((float)(((float10)iStack_6c * fVar9) / (float10)*(float *)(in_ECX + 0x18)));
  (**(code **)(*piVar6 + 0x4c))();
  if (iStack_54 != 0) {
    cVar1 = *(char *)(iStack_54 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(iStack_54 + -1);
    }
    else {
      *(char *)(iStack_54 + -1) = cVar1 + -1;
    }
  }
  iStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  if (local_40 != 0) {
    cVar1 = *(char *)(local_40 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_40 + -1);
    }
    else {
      *(char *)(local_40 + -1) = cVar1 + -1;
    }
  }
  local_40 = 0;
  local_3c = 0;
  uStack_38 = 0;
  if (iStack_20 != 0) {
    cVar1 = *(char *)(iStack_20 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_20 + -1) = cVar1 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_0054b339(iStack_20 + -1);
  }
  ExceptionList = pvStack_14;
  return;
}


/* ==== 00482960 FUN_00482960 ==== */

void FUN_00482960(float param_1,float param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  char cVar2;
  char *str1;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint i;
  undefined1 local_25d;
  float local_25c;
  undefined2 local_258;
  undefined2 local_256;
  undefined2 local_254;
  undefined2 local_252;
  undefined2 local_250;
  undefined2 local_24e;
  float local_24c;
  float local_248;
  undefined1 local_244 [16];
  undefined1 local_234 [16];
  undefined1 local_224 [16];
  undefined1 local_214 [16];
  undefined1 local_204 [16];
  undefined1 local_1f4 [16];
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b4;
  undefined4 local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  undefined4 local_194;
  undefined4 local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  float local_168;
  undefined **local_164 [7];
  undefined **local_148 [7];
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined1 local_10c [16];
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
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
  puStack_8 = &LAB_0056c9eb;
  local_c = ExceptionList;
  str1 = *(char **)(param_5 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  ExceptionList = &local_c;
  iVar3 = FUN_004b7400(str1);
  if (iVar3 != -1) {
    iVar1 = DAT_0073b1b0 + iVar3 * 0x48;
    if ((*(int *)(DAT_0073b1b0 + 0x24 + iVar3 * 0x48) != 0) && (*(int *)(iVar1 + 0x28) != 0)) {
      local_1c4 = param_3 * 0.5;
      local_1dc = 0;
      local_248 = -local_1c4;
      local_24c = param_4 * 0.5;
      local_1cc = param_1 / (float)*(int *)(iVar1 + 0x24);
      local_1d0 = 0;
      local_1d4 = 0xffffffff;
      local_1bc = 0;
      local_1c8 = param_2 / (float)*(int *)(iVar1 + 0x28);
      local_1ac = (param_1 + param_3) / (float)*(int *)(iVar1 + 0x24);
      local_1b0 = 0;
      local_1b4 = 0xffffffff;
      local_19c = 0;
      local_1a8 = param_2 / (float)*(int *)(iVar1 + 0x28);
      local_1a0 = -local_24c;
      local_18c = (param_1 + param_3) / (float)*(int *)(iVar1 + 0x24);
      local_25c = param_2 + param_4;
      local_190 = 0;
      local_194 = 0xffffffff;
      local_17c = 0;
      local_188 = local_25c / (float)*(int *)(iVar1 + 0x28);
      local_16c = param_1 / (float)*(int *)(iVar1 + 0x24);
      local_170 = 0;
      local_254 = 2;
      local_250 = 2;
      local_168 = local_25c / (float)*(int *)(iVar1 + 0x28);
      local_174 = 0xffffffff;
      local_258 = 0;
      local_256 = 1;
      local_252 = 0;
      local_24e = 3;
      local_1e4 = local_248;
      local_1e0 = local_24c;
      local_1c0 = local_24c;
      local_1a4 = local_1c4;
      local_184 = local_248;
      local_180 = local_1a0;
      uVar4 = FUN_004bcca0(&local_1e4,4,&local_258,6);
      iVar3 = FUN_004b48e0(uVar4,iVar3,&LAB_004b5620);
      if (DAT_006fb940 != 0) {
        *(undefined4 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0xa5) = 1;
      }
      *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
      ExceptionList = local_c;
      return;
    }
    local_224[0] = local_25d;
    FUN_004028f0(0);
    i = 0xffffffff;
    str1 = s___005aa968;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *str1;
      str1 = str1 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(s___005aa968,~i - 1);
    local_4 = 0xe;
    uVar4 = FUN_004873b0(local_6c,0x3af);
    local_4._0_1_ = 0xf;
    local_1f4[0] = local_25d;
    FUN_004028f0(0);
    i = 0xffffffff;
    str1 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa970;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *str1;
      str1 = str1 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa970,~i - 1);
    local_4._0_1_ = 0x10;
    local_234[0] = local_25d;
    FUN_004028f0(0);
    i = 0xffffffff;
    str1 = s_HeadUp_Display_exception_in__005aa99c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *str1;
      str1 = str1 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(s_HeadUp_Display_exception_in__005aa99c,~i - 1);
    local_4._0_1_ = 0x11;
    uVar5 = FUN_0047c9a0(local_ac,local_234,local_1f4);
    local_4._0_1_ = 0x12;
    uVar5 = FUN_004796b0(local_2c,uVar5,s__005aa96c);
    local_4._0_1_ = 0x13;
    uVar4 = FUN_0047c9a0(local_11c,uVar5,uVar4);
    local_4._0_1_ = 0x14;
    uVar4 = FUN_0047c9a0(local_fc,uVar4,local_224);
    local_4._0_1_ = 0x15;
    uVar4 = FUN_004796b0(local_dc,uVar4,s_Texture_005aa95c);
    local_4._0_1_ = 0x16;
    uVar4 = FUN_0047c9a0(local_bc,uVar4,param_5);
    local_4._0_1_ = 0x17;
    uVar4 = FUN_004796b0(local_9c,uVar4,s_width___height_is_0_005aa944);
    local_4._0_1_ = 0x18;
    uVar4 = FUN_004796b0(local_7c,uVar4,s___005aa940);
    local_4._0_1_ = 0x19;
    FUN_00558826();
    local_4._0_1_ = 0x1a;
    FUN_00424980(&local_25d);
    local_4._0_1_ = 0x1b;
    local_148[0] = &PTR_FUN_00576b14;
    FUN_004093c0(uVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,0x19);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_148,&DAT_0057f730);
  }
  local_214[0] = local_25d;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s___005aa8ec;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *str1;
    str1 = str1 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s___005aa8ec,~i - 1);
  local_4 = 0;
  uVar4 = FUN_004873b0(local_10c,0x3aa);
  local_4._0_1_ = 1;
  local_204[0] = local_25d;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa8f4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *str1;
    str1 = str1 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa8f4,~i - 1);
  local_4._0_1_ = 2;
  local_244[0] = local_25d;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_HeadUp_Display_exception_in__005aa920;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *str1;
    str1 = str1 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aa920,~i - 1);
  local_4._0_1_ = 3;
  uVar5 = FUN_0047c9a0(local_5c,local_244,local_204);
  local_4._0_1_ = 4;
  uVar5 = FUN_004796b0(local_3c,uVar5,s__005aa8f0);
  local_4._0_1_ = 5;
  uVar4 = FUN_0047c9a0(local_1c,uVar5,uVar4);
  local_4._0_1_ = 6;
  uVar4 = FUN_0047c9a0(local_12c,uVar4,local_214);
  local_4._0_1_ = 7;
  uVar4 = FUN_004796b0(local_8c,uVar4,s_Invalid_texture_name_005aa8d4);
  local_4._0_1_ = 8;
  uVar4 = FUN_0047c9a0(local_ec,uVar4,param_5);
  local_4._0_1_ = 9;
  uVar4 = FUN_004796b0(local_4c,uVar4,s_in_ini_file_005aa8c4);
  local_4._0_1_ = 10;
  uVar4 = FUN_004796b0(local_cc,uVar4,s___005aa8c0);
  local_4._0_1_ = 0xb;
  FUN_00558826();
  local_4._0_1_ = 0xc;
  FUN_00424980(&local_25d);
  local_4._0_1_ = 0xd;
  local_164[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_164,&DAT_0057f730);
}


/* ==== 00483030 FUN_00483030 ==== */

undefined4 FUN_00483030(int param_1)

{
  char cVar1;
  char *str1;
  int __strcmpi_result;
  undefined4 uVar2;
  undefined4 uVar3;
  uint i;
  undefined1 local_d9;
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
  puStack_8 = &LAB_0056ca6f;
  local_c = ExceptionList;
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  ExceptionList = &local_c;
  __strcmpi_result = __strcmpi(str1,s_Fixed_005aa0ec);
  if (__strcmpi_result == 0) {
    ExceptionList = local_c;
    return 0;
  }
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  __strcmpi_result = __strcmpi(str1,s_Proportional_005aa0f4);
  if (__strcmpi_result == 0) {
    ExceptionList = local_c;
    return 1;
  }
  local_c8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s___005aa9d8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aa9d8,~i - 1);
  local_4 = 0;
  uVar2 = FUN_004873b0(local_6c,0x424);
  local_4._0_1_ = 1;
  local_b8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa9e0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa9e0,~i - 1);
  local_4._0_1_ = 2;
  local_d8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_HeadUp_Display_exception_in__005aaa0c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aaa0c,~i - 1);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_1c,local_d8,local_b8);
  local_4._0_1_ = 4;
  uVar3 = FUN_004796b0(local_8c,uVar3,s__005aa9dc);
  local_4._0_1_ = 5;
  uVar2 = FUN_0047c9a0(local_2c,uVar3,uVar2);
  local_4._0_1_ = 6;
  uVar2 = FUN_0047c9a0(local_4c,uVar2,local_c8);
  local_4._0_1_ = 7;
  uVar2 = FUN_004796b0(local_7c,uVar2,s_Unknown_string_type_005aa9c0);
  local_4._0_1_ = 8;
  uVar2 = FUN_0047c9a0(local_5c,uVar2,param_1);
  local_4._0_1_ = 9;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005aa9bc);
  local_4._0_1_ = 10;
  FUN_00558826();
  local_4._0_1_ = 0xb;
  FUN_00424980(&local_d9);
  local_4._0_1_ = 0xc;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 004832b0 FUN_004832b0 ==== */

undefined4 FUN_004832b0(int param_1)

{
  char cVar1;
  char *str1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint i;
  undefined1 local_d9;
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
  puStack_8 = &LAB_0056caf3;
  local_c = ExceptionList;
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  ExceptionList = &local_c;
  iVar2 = __strcmpi(str1,s_LEFT_005aa0d4);
  if (iVar2 != 0) {
    iVar2 = FUN_00483e70(&DAT_007126dc);
    if (iVar2 != 0) {
      str1 = *(char **)(param_1 + 4);
      if (str1 == (char *)0x0) {
        str1 = "";
      }
      iVar2 = __strcmpi(str1,s_CENTER_005aa0dc);
      if (iVar2 == 0) {
        ExceptionList = local_c;
        return 1;
      }
      str1 = *(char **)(param_1 + 4);
      if (str1 == (char *)0x0) {
        str1 = "";
      }
      iVar2 = __strcmpi(str1,s_RIGHT_005aa0e4);
      if (iVar2 == 0) {
        ExceptionList = local_c;
        return 2;
      }
      local_c8[0] = local_d9;
      FUN_004028f0(0);
      i = 0xffffffff;
      str1 = s___005aaa48;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s___005aaa48,~i - 1);
      local_4 = 0;
      uVar3 = FUN_004873b0(local_6c,0x440);
      local_b8[0] = local_d9;
      local_4._0_1_ = 1;
      FUN_004028f0(0);
      i = 0xffffffff;
      str1 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aaa50;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aaa50,~i - 1);
      local_4._0_1_ = 2;
      local_d8[0] = local_d9;
      FUN_004028f0(0);
      i = 0xffffffff;
      str1 = s_HeadUp_Display_exception_in__005aaa7c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *str1;
        str1 = str1 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(s_HeadUp_Display_exception_in__005aaa7c,~i - 1);
      local_4._0_1_ = 3;
      uVar4 = FUN_0047c9a0(local_1c,local_d8,local_b8);
      local_4._0_1_ = 4;
      uVar4 = FUN_004796b0(local_8c,uVar4,s__005aaa4c);
      local_4._0_1_ = 5;
      uVar3 = FUN_0047c9a0(local_2c,uVar4,uVar3);
      local_4._0_1_ = 6;
      uVar3 = FUN_0047c9a0(local_4c,uVar3,local_c8);
      local_4._0_1_ = 7;
      uVar3 = FUN_004796b0(local_7c,uVar3,s_Undefined_alignment___005aaa30);
      local_4._0_1_ = 8;
      uVar3 = FUN_0047c9a0(local_5c,uVar3,param_1);
      local_4._0_1_ = 9;
      uVar3 = FUN_004796b0(local_3c,uVar3,s___005aaa2c);
      local_4._0_1_ = 10;
      FUN_00558826();
      local_4._0_1_ = 0xb;
      FUN_00424980(&local_d9);
      local_4._0_1_ = 0xc;
      local_a8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(uVar3,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a8,&DAT_0057f730);
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 00483580 FUN_00483580 ==== */

undefined4 FUN_00483580(int param_1)

{
  char cVar1;
  char *str1;
  int __strcmpi_result;
  undefined4 uVar2;
  undefined4 uVar3;
  uint i;
  undefined1 local_d9;
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
  puStack_8 = &LAB_0056cb77;
  local_c = ExceptionList;
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  ExceptionList = &local_c;
  __strcmpi_result = __strcmpi(str1,s_LEFT_005aaa9c);
  if (__strcmpi_result == 0) {
    ExceptionList = local_c;
    return 0;
  }
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  __strcmpi_result = __strcmpi(str1,s_CENTER_005aaaa4);
  if (__strcmpi_result == 0) {
    ExceptionList = local_c;
    return 1;
  }
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  __strcmpi_result = __strcmpi(str1,s_RIGHT_005aaaac);
  if (__strcmpi_result == 0) {
    ExceptionList = local_c;
    return 2;
  }
  local_c8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s___005aaad4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aaad4,~i - 1);
  local_4 = 0;
  uVar2 = FUN_004873b0(local_6c,0x458);
  local_4._0_1_ = 1;
  local_b8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aaadc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aaadc,~i - 1);
  local_4._0_1_ = 2;
  local_d8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_HeadUp_Display_exception_in__005aab08;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aab08,~i - 1);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_1c,local_d8,local_b8);
  local_4._0_1_ = 4;
  uVar3 = FUN_004796b0(local_8c,uVar3,s__005aaad8);
  local_4._0_1_ = 5;
  uVar2 = FUN_0047c9a0(local_2c,uVar3,uVar2);
  local_4._0_1_ = 6;
  uVar2 = FUN_0047c9a0(local_4c,uVar2,local_c8);
  local_4._0_1_ = 7;
  uVar2 = FUN_004796b0(local_7c,uVar2,s_Wrong_horizontal_alignment_005aaab8);
  local_4._0_1_ = 8;
  uVar2 = FUN_0047c9a0(local_5c,uVar2,param_1);
  local_4._0_1_ = 9;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005aaab4);
  local_4._0_1_ = 10;
  FUN_00558826();
  local_4._0_1_ = 0xb;
  FUN_00424980(&local_d9);
  local_4._0_1_ = 0xc;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 00483830 FUN_00483830 ==== */

undefined4 FUN_00483830(int param_1)

{
  char cVar1;
  char *str1;
  int __strcmpi_result;
  undefined4 uVar2;
  undefined4 uVar3;
  uint i;
  undefined1 local_d9;
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
  puStack_8 = &LAB_0056cbfb;
  local_c = ExceptionList;
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  ExceptionList = &local_c;
  __strcmpi_result = __strcmpi(str1,s_TOP_005aab28);
  if (__strcmpi_result == 0) {
    ExceptionList = local_c;
    return 0;
  }
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  __strcmpi_result = __strcmpi(str1,s_CENTER_005aab2c);
  if (__strcmpi_result == 0) {
    ExceptionList = local_c;
    return 1;
  }
  str1 = *(char **)(param_1 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  __strcmpi_result = __strcmpi(str1,s_BOTTOM_005aab34);
  if (__strcmpi_result == 0) {
    ExceptionList = local_c;
    return 2;
  }
  local_c8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s___005aab5c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s___005aab5c,~i - 1);
  local_4 = 0;
  uVar2 = FUN_004873b0(local_6c,0x46d);
  local_4._0_1_ = 1;
  local_b8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aab64;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_C__Work_A2IV_Game_prog_Hud_IniFi_005aab64,~i - 1);
  local_4._0_1_ = 2;
  local_d8[0] = local_d9;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_HeadUp_Display_exception_in__005aab90;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_HeadUp_Display_exception_in__005aab90,~i - 1);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_1c,local_d8,local_b8);
  local_4._0_1_ = 4;
  uVar3 = FUN_004796b0(local_8c,uVar3,s__005aab60);
  local_4._0_1_ = 5;
  uVar2 = FUN_0047c9a0(local_2c,uVar3,uVar2);
  local_4._0_1_ = 6;
  uVar2 = FUN_0047c9a0(local_4c,uVar2,local_c8);
  local_4._0_1_ = 7;
  uVar2 = FUN_004796b0(local_7c,uVar2,s_Wrong_vertical_alignment_005aab40);
  local_4._0_1_ = 8;
  uVar2 = FUN_0047c9a0(local_5c,uVar2,param_1);
  local_4._0_1_ = 9;
  uVar2 = FUN_004796b0(local_3c,uVar2,s___005aab3c);
  local_4._0_1_ = 10;
  FUN_00558826();
  local_4._0_1_ = 0xb;
  FUN_00424980(&local_d9);
  local_4._0_1_ = 0xc;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


/* ==== 00483af0 FUN_00483af0 ==== */

void FUN_00483af0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00483b00 FUN_00483b00 ==== */

void FUN_00483b00(void)

{
  FUN_005584e0(&LAB_00483b10);
  return;
}


/* ==== 00483b30 FUN_00483b30 ==== */

void FUN_00483b30(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00483b40 FUN_00483b40 ==== */

void FUN_00483b40(void)

{
  FUN_005584e0(&LAB_00483b50);
  return;
}


/* ==== 00483b90 FUN_00483b90 ==== */

void FUN_00483b90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00576b60;
  return;
}


/* ==== 00483ba0 FUN_00483ba0 ==== */

void FUN_00483ba0(byte param_1)

{
  FUN_00483bc0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00483bc0 FUN_00483bc0 ==== */

void FUN_00483bc0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar2 = in_ECX[3];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *in_ECX = &PTR_LAB_00576b60;
  return;
}


/* ==== 00483c10 FUN_00483c10 ==== */

/* WARNING: Removing unreachable block (ram,0x00483c6c) */

undefined4 * FUN_00483c10(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056cc23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558826();
  *(undefined1 *)(in_ECX + 3) = param_1._0_1_;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00576b14;
  local_4 = 1;
  uVar1 = param_1[2];
  if (in_ECX + 3 == param_1) {
    if ((uint)in_ECX[5] < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[5] - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + in_ECX[4],uVar1 + in_ECX[4] + iVar5,iVar3 - iVar5);
      iVar3 = in_ECX[5];
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_1[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar5 = in_ECX[4];
        if (iVar5 != 0) {
          cVar2 = *(char *)(iVar5 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar5 + -1));
          }
          else {
            *(char *)(iVar5 + -1) = cVar2 + -1;
          }
        }
        in_ECX[4] = 0;
        in_ECX[5] = 0;
        in_ECX[6] = 0;
        puVar4 = (undefined1 *)param_1[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[4] = puVar4;
        in_ECX[5] = param_1[2];
        in_ECX[6] = param_1[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        ExceptionList = local_c;
        return in_ECX;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)param_1[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)in_ECX[4];
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(uVar1);
    }
  }
  ExceptionList = local_c;
  return in_ECX;
}


