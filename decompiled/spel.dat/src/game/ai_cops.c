/* spel.dat — game/ai_cops.cpp: 54 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00406740 FUN_00406740 ==== */

void FUN_00406740(void)

{
  FUN_005584e0(&LAB_00406750);
  return;
}


/* ==== 00406770 FUN_00406770 ==== */

void FUN_00406770(void)

{
  char cVar1;
  int iVar2;
  undefined1 *in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00569558;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = local_11;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  i = 0xffffffff;
  local_4 = 0;
  pcVar4 = (char *)&DAT_005caf78;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      goto LAB_00406836;
    }
    if ((0x1f < *(uint *)(in_ECX + 0xc)) || (*(uint *)(in_ECX + 0xc) < i)) {
      FUN_004028f0(1);
      goto LAB_0040680c;
    }
  }
  else {
    if (i == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(0);
      goto LAB_00406836;
    }
LAB_0040680c:
    FUN_00402b20(i);
  }
  puVar3 = &DAT_005caf78;
  puVar5 = *(undefined4 **)(in_ECX + 4);
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
  *(uint *)(in_ECX + 8) = i;
  *(undefined1 *)(*(int *)(in_ECX + 4) + i) = 0;
LAB_00406836:
  *(undefined4 *)(in_ECX + 0x10) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00406860 FUN_00406860 ==== */

void FUN_00406860(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 004068a0 FUN_004068a0 ==== */

/* WARNING: Removing unreachable block (ram,0x004068b9) */

void FUN_004068a0(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (in_ECX == param_1) {
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(in_ECX + 8) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)(in_ECX + 4);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)(in_ECX + 8) - iVar7;
      cVar2 = FUN_00402a00(iVar7,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar7);
      }
    }
    FUN_00402c30();
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      iVar7 = *(int *)(in_ECX + 4);
      if (iVar7 != 0) {
        cVar2 = *(char *)(iVar7 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(iVar7 + -1));
        }
        else {
          *(char *)(iVar7 + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(in_ECX + 4) = puVar4;
      *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_1 + 4);
    }
    puVar8 = *(undefined4 **)(in_ECX + 4);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)(in_ECX + 8) = uVar1;
    *(undefined1 *)(uVar1 + *(int *)(in_ECX + 4)) = 0;
  }
  return;
}


/* ==== 004069d0 FUN_004069d0 ==== */

void FUN_004069d0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  return;
}


/* ==== 004069e0 FUN_004069e0 ==== */

void FUN_004069e0(int param_1)

{
  int in_ECX;
  
  FUN_004a6980(-1 < param_1,s___s___d_Given_dynamics_index___d_0058fff4,
               s_C__Work_A2IV_Game_prog_ai_cops_c_0058ffd0,0xcb,param_1);
  *(int *)(in_ECX + 0x14) = param_1;
  return;
}


/* ==== 00406a10 FUN_00406a10 ==== */

undefined4 FUN_00406a10(int param_1)

{
  byte bVar1;
  uint uVar2;
  int i;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint k;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  int local_1dc;
  int j;
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  byte local_1c0 [64];
  byte local_180 [64];
  char local_140 [64];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  i = FUN_00448c90(s_AI_Cop_Settings_00590024);
  puVar3 = *(undefined1 **)(i + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar3);
  local_1dc = FUN_004c3cd0(s_COP_TYPES_0059003c,s_COUNT_00590034);
  j = 0;
  if (0 < local_1dc) {
    do {
      FUN_005587a3(local_1c8,s__d_00590048,j);
      FUN_004c3d10(s_COP_TYPES_0059004c,local_1c8,local_100,0x7f);
      i = FUN_004c3d60(local_100,0);
      FUN_004a6980(i == 2,s___s___d_Illegal_number_of_parame_0059007c,
                   s_C__Work_A2IV_Game_prog_ai_cops_c_00590058,0xf8,i);
      FUN_004c3f10(0,(char *)local_180,0x3f);
      k = 0xffffffff;
      pbVar7 = local_180;
      do {
        if (k == 0) break;
        k = k - 1;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      uVar2 = *(uint *)(param_1 + 8);
      uVar6 = ~k - 1;
      k = uVar2;
      if (uVar6 <= uVar2) {
        k = uVar6;
      }
      bVar9 = false;
      i = 0;
      bVar10 = true;
      pbVar7 = *(byte **)(param_1 + 4);
      pbVar8 = local_180;
      do {
        if (k == 0) break;
        k = k - 1;
        bVar9 = *pbVar7 < *pbVar8;
        bVar10 = *pbVar7 == *pbVar8;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar10);
      if (!bVar10) {
        i = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (((i == 0) && (uVar6 <= uVar2)) && (uVar2 == uVar6)) {
        uVar4 = FUN_004c3ec0(1);
        FUN_004069e0(uVar4);
        i = FUN_00448c90(s_Car_Configurations_005900b4);
        puVar3 = *(undefined1 **)(i + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        FUN_004c3b60(puVar3);
        local_1dc = FUN_004c3cd0(PTR_s_TRAFFIC_0058fd64,s_COUNT_005900c8);
        i = 0;
        if (0 < local_1dc) {
          do {
            FUN_005587a3(local_1d0,s__d_005900d0,i);
            FUN_004c3d10(PTR_s_TRAFFIC_0058fd64,local_1d0,local_80,0x7f);
            iVar5 = FUN_004c3d60(local_80,0);
            FUN_004a6980(iVar5 == 9,s___s___d_Illegal_number_of_parame_005900f8,
                         s_C__Work_A2IV_Game_prog_ai_cops_c_005900d4,0x112);
            FUN_004c3f10(0,(char *)local_1c0,0x3f);
            k = 0xffffffff;
            pbVar7 = local_1c0;
            do {
              if (k == 0) break;
              k = k - 1;
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
            } while (bVar1 != 0);
            uVar2 = *(uint *)(param_1 + 8);
            uVar6 = ~k - 1;
            k = uVar2;
            if (uVar6 <= uVar2) {
              k = uVar6;
            }
            bVar9 = false;
            iVar5 = 0;
            bVar10 = true;
            pbVar7 = *(byte **)(param_1 + 4);
            pbVar8 = local_1c0;
            do {
              if (k == 0) break;
              k = k - 1;
              bVar9 = *pbVar7 < *pbVar8;
              bVar10 = *pbVar7 == *pbVar8;
              pbVar7 = pbVar7 + 1;
              pbVar8 = pbVar8 + 1;
            } while (bVar10);
            if (!bVar10) {
              iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            }
            if (((iVar5 == 0) && (uVar6 <= uVar2)) && (uVar2 == uVar6)) {
              FUN_004c3f10(1,local_140,0x3f);
              i = FUN_004b75a0(local_140);
              FUN_004069d0(*(undefined4 *)
                            (**(int **)(i * 9 + 4 + DAT_0073b168) * 0x10 + DAT_0073b120));
              FUN_004068a0(param_1);
              return 1;
            }
            i = i + 1;
          } while (i < local_1dc);
        }
      }
      j = j + 1;
    } while (j < local_1dc);
  }
  return 0;
}


/* ==== 00406cd0 FUN_00406cd0 ==== */

void FUN_00406cd0(void)

{
  undefined4 in_ECX;
  
  FUN_00558643(in_ECX,0x18,10,FUN_00406770,FUN_00406860);
  return;
}


/* ==== 00406cf0 FUN_00406cf0 ==== */

void FUN_00406cf0(void)

{
  undefined4 in_ECX;
  
  FUN_005586c5(in_ECX,0x18,10,FUN_00406860);
  return;
}


/* ==== 00406d00 FUN_00406d00 ==== */

void FUN_00406d00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (9 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_004a6980(uVar1,s___s___d_Illegal_entry___d__while_00590154,
               s_C__Work_A2IV_Game_prog_ai_cops_c_00590130,0x15a,param_1);
  FUN_004068a0(param_2);
  return;
}


/* ==== 00406e70 FUN_00406e70 ==== */

undefined4 FUN_00406e70(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_1 < 0) || (9 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_004a6980(uVar1,s___s___d_Illegal_entry___d__while_00590334,
               s_C__Work_A2IV_Game_prog_ai_cops_c_00590310,0x1da,param_1);
  return *(undefined4 *)(in_ECX + 0x14 + param_1 * 0x18);
}


/* ==== 00406eb0 FUN_00406eb0 ==== */

int FUN_00406eb0(void)

{
  void *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056956d;
  local_c = ExceptionList;
  if (DAT_005caf74 == 0) {
    ExceptionList = &local_c;
    operator_new_result = operator_new(0xf0);
    local_4 = 0;
    if (operator_new_result == (void *)0x0) {
      DAT_005caf74 = 0;
    }
    else {
      DAT_005caf74 = FUN_00406cd0(operator_new_result);
    }
    local_4 = 0xffffffff;
    FUN_004a6980(DAT_005caf74 != 0,s___s___d_Not_enough_memory_to_cre_005903a0,
                 s_C__Work_A2IV_Game_prog_ai_cops_c_0059037c,0x1f8);
  }
  ExceptionList = local_c;
  return DAT_005caf74;
}


/* ==== 00406f40 FUN_00406f40 ==== */

undefined4 FUN_00406f40(undefined4 param_1)

{
  int i;
  undefined4 uVar1;
  int in_ECX;
  int *piVar2;
  
  i = 0;
  piVar2 = (int *)(in_ECX + 0x10);
  do {
    if (*piVar2 == -1) break;
    i = i + 1;
    piVar2 = piVar2 + 6;
  } while (i < 10);
  if (i == 10) {
    return 0;
  }
  uVar1 = FUN_00406a10(param_1);
  return uVar1;
}


/* ==== 00407030 FUN_00407030 ==== */

int FUN_00407030(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int i;
  
  iVar1 = FUN_004a8c50();
  i = 0;
  piVar2 = (int *)(in_ECX + 0x10);
  do {
    if (*piVar2 == iVar1) break;
    i = i + 1;
    piVar2 = piVar2 + 6;
  } while (i < 10);
  FUN_004a6980(i != 10,s___s___d_Given_object_is_not_a_co_00590404,
               s_C__Work_A2IV_Game_prog_ai_cops_c_005903e0,0x29c);
  return i;
}


/* ==== 00407090 FUN_00407090 ==== */

undefined4 FUN_00407090(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint i;
  uint j;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_f0 [4];
  char *local_ec;
  uint local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  undefined1 local_d4 [8];
  char local_cc [64];
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569582;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00448c90(s_AI_Cop_Settings_00590428);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar3);
  local_dc = FUN_004c3cd0(s_COP_TYPES_00590440,s_COUNT_00590438);
  local_e0 = 0;
  if (local_dc < 1) {
    ExceptionList = local_c;
    return 1;
  }
  do {
    iVar2 = local_e0;
    iVar4 = FUN_00448c90(s_AI_Cop_Settings_0059044c);
    puVar3 = *(undefined1 **)(iVar4 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    FUN_004c3b60(puVar3);
    FUN_005587a3(local_d4,s__d_0059045c,iVar2);
    FUN_004c3d10(s_COP_TYPES_00590460,local_d4,local_8c,0x7f);
    iVar4 = FUN_004c3d60(local_8c,0);
    FUN_004a6980(iVar4 == 2,s___s___d_Incorrect_number_of_para_00590490,
                 s_C__Work_A2IV_Game_prog_ai_cops_c_0059046c,0x2c6,iVar4);
    FUN_004c3f10(0,local_cc,0x3f);
    i = 0xffffffff;
    pcVar5 = local_cc;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    local_ec = (char *)0x0;
    local_e8 = 0;
    local_e4 = 0;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar5 = local_cc;
      pcVar6 = local_ec;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_ec[i] = '\0';
      iVar2 = local_e0;
      local_e8 = i;
    }
    local_4 = 0;
    FUN_00406f40(local_f0);
    local_4 = 0xffffffff;
    if (local_ec != (char *)0x0) {
      cVar1 = local_ec[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_ec + -1);
      }
      else {
        local_ec[-1] = cVar1 + -1;
      }
    }
    local_e0 = iVar2 + 1;
    local_ec = (char *)0x0;
    local_e8 = 0;
    local_e4 = 0;
    if (local_dc <= local_e0) {
      ExceptionList = local_c;
      return 1;
    }
  } while( true );
}


/* ==== 00407280 FUN_00407280 ==== */

void FUN_00407280(void)

{
  int iVar1;
  
  iVar1 = DAT_005caf74;
  if (DAT_005caf74 != 0) {
    FUN_00406cf0();
    FUN_0054b339(iVar1);
    DAT_005caf74 = 0;
  }
  return;
}


/* ==== 004072b0 FUN_004072b0 ==== */

undefined4 FUN_004072b0(int param_1)

{
  int *piVar1;
  int i;
  
  i = 6;
  piVar1 = &DAT_005cf9ac;
  while ((piVar1[-0x13] == -1 || (*piVar1 != param_1))) {
    piVar1 = piVar1 + 0xa5;
    i = i + 1;
    if (0x5d1608 < (int)piVar1) {
      return 0xffffffff;
    }
  }
  return (&DAT_005ce9e8)[i * 0xa5];
}


/* ==== 004072f0 FUN_004072f0 ==== */

void FUN_004072f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0xffffffff;
  in_ECX[1] = 0;
  return;
}


/* ==== 00407300 FUN_00407300 ==== */

undefined4 FUN_00407300(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar2 = FUN_0040dad0(param_1);
  iVar4 = param_1 * 0xf0;
  *(uint *)(iVar4 + 0x1c + DAT_00715e50) = *(uint *)(iVar4 + 0x1c + DAT_00715e50) | 2;
  *(undefined1 **)(iVar4 + 0x70 + DAT_00715e50) = &LAB_0042d820;
  iVar3 = FUN_0040dad0(param_1);
  if (iVar3 == -1) {
    if (DAT_005d3110 == '\0') {
      FUN_00412e20(param_1);
      FUN_00427ae0(param_1);
      FUN_00436dc0(param_1,0);
    }
  }
  else if (DAT_005d3110 == '\0') {
    cVar1 = FUN_00419450(param_1);
    if (cVar1 == '\x01') {
      fVar5 = (float10)FUN_004a6800();
      *(float *)(&DAT_005ceab0 + iVar2 * 0x294) =
           (float)(fVar5 + (float10)*(float *)(&DAT_005ceab0 + iVar2 * 0x294));
    }
    else {
      *(undefined4 *)(&DAT_005ceab0 + iVar2 * 0x294) = 0;
    }
    if (0.25 < *(float *)(&DAT_005ceab0 + iVar2 * 0x294)) {
      FUN_004c3fa0(s_A_cop_has_been_corrected__005904d4);
      FUN_0040e5a0(param_1,*(undefined4 *)(iVar4 + 0x34 + DAT_00715e50),0);
    }
    FUN_0040d490(iVar2);
    FUN_00412570(iVar2);
    FUN_00436dc0(param_1,(&DAT_005ce9ec)[iVar2 * 0xa5] != 0x19);
  }
  if (DAT_005d3110 == '\x01') {
    iVar2 = iVar4 + DAT_00715e50;
    fVar5 = (float10)FUN_004a6800();
    *(float *)(iVar2 + 0xc4) =
         (float)((float10)*(float *)(iVar2 + 0xc4) -
                fVar5 * (float10)*(float *)(iVar2 + 0xc4) * (float10)5.0);
    iVar2 = iVar4 + DAT_00715e50;
    fVar5 = (float10)FUN_004a6800();
    *(float *)(iVar2 + 0xbc) =
         (float)((float10)*(float *)(iVar2 + 0xbc) -
                fVar5 * (float10)*(float *)(iVar2 + 0xbc) * (float10)5.0);
    iVar4 = iVar4 + DAT_00715e50;
    fVar5 = (float10)FUN_004a6800();
    *(float *)(iVar4 + 0xcc) =
         (float)((float10)*(float *)(iVar4 + 0xcc) -
                fVar5 * (float10)*(float *)(iVar4 + 0xcc) * (float10)5.0);
  }
  FUN_00435470(param_1,0);
  return 0;
}


/* ==== 004074c0 FUN_004074c0 ==== */

undefined4 FUN_004074c0(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pcVar2 = s_BESIDE_005904f0;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004074f6:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004074fb;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004074f6;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004074fb:
  if (iVar3 == 0) {
    return 0;
  }
  pcVar2 = s_SIGN_005904f8;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00407532:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00407537;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00407532;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407537:
  if (iVar3 == 0) {
    return 1;
  }
  pcVar2 = s_INTO_00590500;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00407573:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00407578;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00407573;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407578:
  if (iVar3 == 0) {
    return 2;
  }
  pcVar2 = s_ROAD_BLOCK_00590508;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004075b4:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004075b9;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004075b4;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004075b9:
  if (iVar3 == 0) {
    return 6;
  }
  pcVar2 = s_FRONT_00590514;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004075f5:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004075fa;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004075f5;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004075fa:
  if (iVar3 == 0) {
    return 5;
  }
  pcVar2 = s_MEGAPHONE_0059051c;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00407636:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_0040763b;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00407636;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0040763b:
  if (iVar3 == 0) {
    return 3;
  }
  pcVar2 = s_HANDBRAKE_00590528;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00407677:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_0040767c;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00407677;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0040767c:
  if (iVar3 == 0) {
    return 4;
  }
  pcVar2 = s_PUSHING_00590534;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004076b8:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004076bd;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004076b8;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004076bd:
  if (iVar3 == 0) {
    return 7;
  }
  pcVar2 = s_STATUS_0059053c;
  pbVar4 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_004076f9:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004076fe;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_004076f9;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004076fe:
  if (iVar3 == 0) {
    return 8;
  }
  FUN_004c4150(s__s__d_Unrecognized_state__s_00590568,s_C__Work_A2IV_Game_prog_ai_cops_c_00590544,
               0x3c3,param_1);
  return 0xffffffff;
}


/* ==== 00407730 FUN_00407730 ==== */

undefined4 * FUN_00407730(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00406eb0();
  iVar1 = FUN_00407030(param_1);
  if (iVar1 == -1) {
    if (DAT_005caf70 == 0) {
      FUN_004c4150(s__s__d_There_are_no_default_cop_t_005905ac,
                   s_C__Work_A2IV_Game_prog_ai_cops_c_00590588,0x3e6);
    }
  }
  else if ((&DAT_005caf44)[iVar1] == 0) {
    if (DAT_005caf70 == 0) {
      FUN_004c4150(s__s__d_Cop_type__d_has_no_tactics_005905f8,
                   s_C__Work_A2IV_Game_prog_ai_cops_c_005905d4,0x3f8,iVar1);
    }
  }
  else {
    iVar2 = FUN_00558625();
    if ((iVar2 % 100 < 0x4b) || (DAT_005caf70 == 0)) {
      iVar2 = FUN_00558625();
      iVar2 = (&DAT_005c9980)[iVar2 % (int)(&DAT_005caf44)[iVar1] + iVar1 * 10];
      FUN_004c3fa0(s_Assigning__d__d_0059063c,iVar1,iVar2);
      return &DAT_005c9b10 + (iVar2 + iVar1 * 0x14) * 2;
    }
  }
  iVar1 = FUN_00558625();
  return &DAT_005c9b10 + (&DAT_005cadd0)[iVar1 % DAT_005caf70] * 0x28;
}


/* ==== 00407810 FUN_00407810 ==== */

void FUN_00407810(void)

{
  char cVar1;
  int iVar2;
  char *str1;
  uint i;
  uint j;
  char *pcVar3;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005695a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  local_4 = 0;
  FUN_004028f0(0);
  local_4._0_1_ = 1;
  FUN_004028f0(0);
  i = 0xffffffff;
  str1 = s_COP0_00590694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    str1 = s_COP0_00590694;
    pcVar3 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *str1;
      str1 = str1 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_38[i] = '\0';
    local_34 = i;
  }
  local_4._0_1_ = 2;
  iVar2 = FUN_00424660(local_3c);
  FUN_004093c0(iVar2 + 0x10,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_38 != (char *)0x0) {
    cVar1 = local_38[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_38 + -1);
    }
    else {
      local_38[-1] = cVar1 + -1;
    }
  }
  str1 = local_18;
  if (local_18 == (char *)0x0) {
    str1 = "";
  }
  FUN_004b75a0(str1);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004079a0 FUN_004079a0 ==== */

void FUN_004079a0(void)

{
  char cVar1;
  int j;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int i;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *local_16c;
  undefined4 *local_168;
  undefined1 *local_160;
  undefined1 local_154 [4];
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144 [12];
  undefined1 *local_138;
  char local_12c [32];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005695da;
  local_c = ExceptionList;
  i = 0;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  local_4 = 0;
  FUN_004028f0(0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004489a0(s_COPS_INI_005906ac,s_AI_Cop_Settings_0059069c);
  j = FUN_00448c90(s_AI_Cop_Settings_005906b8);
  puVar2 = *(undefined1 **)(j + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  DAT_005caf6c = FUN_004c3cd0(s_Cop_Tactics_005906d0,s_COUNT_005906c8);
  if (0 < DAT_005caf6c) {
    local_16c = &DAT_005c9b14;
    do {
      FUN_005587a3(local_144,s__d_005906dc,i);
      FUN_004c3d10(s_Cop_Tactics_005906e0,local_144,local_10c,0xff);
      j = FUN_004c3d60(local_10c,0);
      iVar6 = 0;
      piVar7 = local_16c;
      if (0 < j) {
        do {
          FUN_004c3f10(iVar6,local_12c,0x1f);
          uVar3 = FUN_004074c0(local_12c);
          piVar7[-1] = uVar3;
          FUN_004c3ec0(iVar6 + 1);
          uVar3 = __ftol();
          *piVar7 = uVar3;
          piVar7 = piVar7 + 2;
          iVar6 = iVar6 + 2;
        } while (iVar6 < j);
      }
      i = i + 1;
      local_16c = local_16c + 0x28;
    } while (i < DAT_005caf6c);
  }
  uVar3 = FUN_0049df90(local_154,PTR_s_Track__d_Tactics_0058fd5c,DAT_006fb898);
  local_4._0_1_ = 2;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(1);
  puVar2 = local_138;
  if (local_138 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3d10(puVar2,PTR_s_Default_0058fd58,local_10c,0xff);
  j = FUN_004c3d60(local_10c,0);
  i = 0;
  DAT_005caf70 = j;
  if (0 < j) {
    puVar5 = &DAT_005cadd0;
    do {
      uVar3 = FUN_004c3ec0(i);
      *puVar5 = uVar3;
      i = i + 1;
      puVar5 = puVar5 + 1;
    } while (i < j);
  }
  j = 0;
  if (0 < DAT_0058fd68) {
    local_16c = &DAT_005caf44;
    local_168 = &DAT_005c9980;
    do {
      uVar3 = FUN_0049df90(local_154,PTR_s_Cop_d_0058fd60,j);
      i = 0;
      local_4._0_1_ = 3;
      FUN_004093c0(uVar3,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_150 != 0) {
        cVar1 = *(char *)(local_150 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_150 + -1));
        }
        else {
          *(char *)(local_150 + -1) = cVar1 + -1;
        }
      }
      local_150 = 0;
      local_14c = 0;
      local_148 = 0;
      puVar2 = local_160;
      if (local_160 == (undefined1 *)0x0) {
        puVar2 = &DAT_0057629c;
      }
      puVar4 = local_138;
      if (local_138 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      FUN_004c3d10(puVar4,puVar2,local_10c,0xff);
      iVar6 = FUN_004c3d60(local_10c,0);
      *local_16c = iVar6;
      puVar5 = local_168;
      if (0 < iVar6) {
        do {
          uVar3 = FUN_004c3ec0(i);
          *puVar5 = uVar3;
          i = i + 1;
          puVar5 = puVar5 + 1;
        } while (i < iVar6);
      }
      j = j + 1;
      local_16c = local_16c + 1;
      local_168 = local_168 + 10;
    } while (j < DAT_0058fd68);
  }
  if (local_160 != (undefined1 *)0x0) {
    cVar1 = local_160[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_160 + -1);
    }
    else {
      local_160[-1] = cVar1 + -1;
    }
  }
  if (local_138 != (undefined1 *)0x0) {
    cVar1 = local_138[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_138[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_138 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00407d20 FUN_00407d20 ==== */

int FUN_00407d20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00715f04 / 2;
  if ((float10)iVar1 < ABS((float10)(param_1 - param_2))) {
    if ((param_1 < iVar1) && (iVar1 < param_2)) {
      return (DAT_00715f04 - param_2) + param_1;
    }
    if ((iVar1 < param_1) && (param_2 < iVar1)) {
      return (param_1 - DAT_00715f04) - param_2;
    }
  }
  return param_1 - param_2;
}


/* ==== 00407d90 FUN_00407d90 ==== */

void FUN_00407d90(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  iVar1 = FUN_00418890(param_1);
  pfVar2 = (float *)((&DAT_005d2b78)[iVar1 * 3] * 0x50 + 8 + DAT_00715eb8);
  local_18 = *pfVar2;
  local_14 = pfVar2[1];
  local_10 = pfVar2[2];
  iVar3 = param_1 * 0x294;
  if (*(int *)(*(int *)(&DAT_005cea04 + iVar3) + *(int *)(&DAT_005ce9fc + iVar3) * 8) == 7) {
    pfVar2 = (float *)FUN_0041a090(local_c,param_1,(&DAT_005d2b78)[iVar1 * 3]);
    local_18 = local_18 + *pfVar2;
    local_14 = local_14 + pfVar2[1];
    local_10 = local_10 + pfVar2[2];
  }
  FUN_00403c70(param_1,iVar1,local_18,local_14,local_10);
  if (*(float *)(*(int *)(&DAT_005cea34 + iVar3) * 0xf0 + 0xc4 + DAT_00715e50) <
      *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50)) {
    FUN_00402ea0(0);
    fVar4 = (float10)FUN_004a6800();
    FUN_00402e80((float)(fVar4 * (float10)400.0));
  }
  FUN_00403cd0(param_1);
  fVar4 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea54 + iVar3) = (float)(fVar4 + (float10)*(float *)(&DAT_005cea54 + iVar3));
  return;
}


/* ==== 00407ed0 FUN_00407ed0 ==== */

void FUN_00407ed0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar6 = param_1 * 0x294;
  iVar2 = *(int *)(&DAT_005cea34 + iVar6);
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar5 = FUN_00418890(param_1);
  puVar1 = (undefined4 *)((&DAT_005d2b78)[iVar5 * 3] * 0x50 + 8 + DAT_00715eb8);
  FUN_00403c70(param_1,iVar5,*puVar1,puVar1[1],puVar1[2]);
  FUN_00403040(0);
  iVar5 = *(int *)(*(int *)(&DAT_005cea04 + iVar6) + *(int *)(&DAT_005ce9fc + iVar6) * 8);
  if ((iVar5 != 6) && (iVar5 != 4)) {
    iVar5 = FUN_00407d20(*(undefined4 *)(DAT_00715e50 + 0x34 + iVar3 * 0xf0),
                         *(undefined4 *)(iVar2 * 0xf0 + 0x34 + DAT_00715e50));
    fVar4 = (float)iVar5 * -3.0 + 5.0;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    if (fVar4 + *(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50) <
        *(float *)(DAT_00715e50 + 0xc4 + iVar3 * 0xf0)) {
      FUN_00402ea0(0);
      fVar7 = (float10)FUN_004a6800();
      FUN_00402e80((float)(fVar7 * (float10)400.0));
    }
  }
  FUN_00403cd0(param_1);
  fVar7 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea54 + iVar6) = (float)(fVar7 + (float10)*(float *)(&DAT_005cea54 + iVar6));
  return;
}


/* ==== 00408030 FUN_00408030 ==== */

void FUN_00408030(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_00418890(param_1);
  puVar1 = (undefined4 *)((&DAT_005d2b78)[iVar2 * 3] * 0x50 + 8 + DAT_00715eb8);
  FUN_00403c70(param_1,iVar2,*puVar1,puVar1[1],puVar1[2]);
  iVar2 = param_1 * 0x294;
  if (*(float *)(*(int *)(&DAT_005cea34 + iVar2) * 0xf0 + 0xc4 + DAT_00715e50) - 5.0 <
      *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50)) {
    FUN_00402ea0(0);
    fVar3 = (float10)FUN_004a6800();
    FUN_00402e80((float)(fVar3 * (float10)400.0));
  }
  FUN_00403cd0(param_1);
  fVar3 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea54 + iVar2) = (float)(fVar3 + (float10)*(float *)(&DAT_005cea54 + iVar2));
  return;
}


/* ==== 00408120 FUN_00408120 ==== */

void FUN_00408120(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1 * 0x294;
  uVar3 = *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50);
  uVar1 = *(undefined4 *)(*(int *)(&DAT_005cea34 + iVar4) * 0xf0 + 0x34 + DAT_00715e50);
  iVar2 = FUN_00407d20(uVar3,uVar1);
  if (iVar2 < 1) {
    *(undefined4 *)(&DAT_005cea48 + iVar4) = 0;
    FUN_00407ed0(param_1);
    return;
  }
  iVar2 = FUN_00407d20(uVar3,uVar1);
  if (1 < iVar2) {
    uVar3 = FUN_004235f0(param_1);
    *(undefined4 *)(&DAT_005cea48 + iVar4) = uVar3;
    FUN_00408030(param_1);
    return;
  }
  uVar3 = FUN_004235f0(param_1);
  *(undefined4 *)(&DAT_005cea48 + iVar4) = uVar3;
  FUN_00407d90(param_1);
  fVar5 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea00 + iVar4) = (float)(fVar5 + (float10)*(float *)(&DAT_005cea00 + iVar4));
  return;
}


/* ==== 004081e0 FUN_004081e0 ==== */

void FUN_004081e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1 * 0x294;
  iVar3 = *(int *)(&DAT_005cea34 + iVar4);
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar2 = FUN_00407d20(*(undefined4 *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50),
                       *(undefined4 *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50));
  if (ABS((double)iVar2) < 1.0) {
    iVar3 = DAT_0073b0d0 + *(int *)(iVar3 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
    iVar3 = FUN_00403ea0(iVar1,*(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
                         *(undefined4 *)(iVar3 + 0x58));
    if (((0x300 < iVar3) && (iVar3 < 0x500)) || ((0xb00 < iVar3 && (iVar3 < 0xd00)))) {
      FUN_00407d90(param_1);
      iVar3 = FUN_004235f0(param_1);
      *(int *)(&DAT_005cea48 + iVar4) = iVar3;
      if (iVar3 == 1) {
        *(undefined4 *)(&DAT_005cea48 + iVar4) = 2;
      }
      else if (iVar3 == 2) {
        *(undefined4 *)(&DAT_005cea48 + iVar4) = 1;
      }
      fVar5 = (float10)FUN_004a6800();
      *(float *)(&DAT_005cea00 + iVar4) =
           (float)(fVar5 + (float10)*(float *)(&DAT_005cea00 + iVar4));
      return;
    }
  }
  *(undefined4 *)(&DAT_005cea48 + iVar4) = 0;
  if (0 < iVar2) {
    FUN_00408030();
    return;
  }
  FUN_00407ed0(param_1);
  return;
}


/* ==== 00408320 FUN_00408320 ==== */

void FUN_00408320(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1 * 0x294;
  uVar1 = FUN_004235f0(param_1);
  *(undefined4 *)(&DAT_005cea48 + iVar2) = uVar1;
  FUN_00407d90(param_1);
  fVar3 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea00 + iVar2) = (float)(fVar3 + (float10)*(float *)(&DAT_005cea00 + iVar2));
  return;
}


/* ==== 00408370 FUN_00408370 ==== */

void FUN_00408370(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea48 + iVar2) = 0;
  FUN_00407d90(param_1);
  fVar3 = (float10)FUN_004a6800();
  iVar1 = DAT_006fba58;
  *(float *)(&DAT_005cea00 + iVar2) = (float)(fVar3 + (float10)*(float *)(&DAT_005cea00 + iVar2));
  if (*(int *)(&DAT_005cea34 + iVar2) == iVar1) {
    FUN_0041be70(5,iVar1,0xffffffff);
  }
  return;
}


/* ==== 004083d0 FUN_004083d0 ==== */

void FUN_004083d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea48 + iVar1) = 0;
  FUN_00407d90(param_1);
  fVar2 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea00 + iVar1) = (float)(fVar2 + (float10)*(float *)(&DAT_005cea00 + iVar1));
  return;
}


/* ==== 00408410 FUN_00408410 ==== */

void FUN_00408410(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  iVar4 = param_1 * 0x294;
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0;
  iVar5 = *(int *)(&DAT_005cea34 + iVar4) * 0xf0;
  if (*(int *)(iVar2 + 0x34 + DAT_00715e50) == *(int *)(iVar5 + 0x34 + DAT_00715e50)) {
    iVar3 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
    iVar3 = FUN_00403ea0((&DAT_005ce9e8)[param_1 * 0xa5],*(undefined4 *)(iVar3 + 0x50),
                         *(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x58));
    if (((0x200 < iVar3) && (iVar3 < 0x600)) || ((0xa00 < iVar3 && (iVar3 < 0xe00)))) {
      uVar1 = FUN_004235f0(param_1);
      *(undefined4 *)(&DAT_005cea48 + iVar4) = uVar1;
      FUN_00407d90(param_1);
      fVar6 = (float10)FUN_004a6800();
      *(float *)(&DAT_005cea00 + iVar4) =
           (float)(fVar6 + (float10)*(float *)(&DAT_005cea00 + iVar4));
      return;
    }
  }
  iVar2 = *(int *)(iVar2 + 0x34 + DAT_00715e50);
  iVar5 = *(int *)(iVar5 + 0x34 + DAT_00715e50);
  *(undefined4 *)(&DAT_005cea48 + iVar4) = 0;
  if (iVar5 <= iVar2) {
    FUN_00408030(param_1);
    return;
  }
  FUN_00407ed0();
  return;
}


/* ==== 004089f0 FUN_004089f0 ==== */

void FUN_004089f0(void)

{
  return;
}


/* ==== 00408a00 FUN_00408a00 ==== */

/* WARNING: Removing unreachable block (ram,0x00408a5e) */

void FUN_00408a00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar5 = param_1 * 0x294;
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar6 = *(int *)(&DAT_005cea34 + iVar5) * 0xf0;
  iVar4 = iVar1 * 0xf0;
  iVar2 = FUN_00407d20(*(undefined4 *)(iVar4 + 0x34 + DAT_00715e50),
                       *(undefined4 *)(iVar6 + 0x34 + DAT_00715e50));
  iVar4 = FUN_00422b90(*(undefined4 *)(iVar4 + 0x34 + DAT_00715e50),
                       *(undefined4 *)(iVar4 + 0x3c + DAT_00715e50));
  iVar6 = FUN_00422b90(*(undefined4 *)(iVar6 + 0x34 + DAT_00715e50),
                       *(undefined4 *)(iVar6 + 0x3c + DAT_00715e50));
  if ((iVar4 == iVar6) || ((&DAT_005cea94)[iVar5] == '\x01')) {
    if ((iVar2 == 2) || ((&DAT_005cea94)[iVar5] == '\x01')) {
      FUN_00403040(1);
      FUN_00402de0(0xc2c80000);
      FUN_00427b90(iVar1,&DAT_005cea7c + iVar5);
      fVar7 = (float10)FUN_004a6800();
      *(float *)(&DAT_005cea00 + iVar5) =
           (float)(fVar7 + (float10)*(float *)(&DAT_005cea00 + iVar5));
      return;
    }
  }
  else if (iVar2 == 2) {
    uVar3 = FUN_004235f0(param_1);
    *(undefined4 *)(&DAT_005cea48 + iVar5) = uVar3;
    FUN_00407d90(param_1);
    return;
  }
  uVar3 = FUN_004235f0(param_1);
  *(undefined4 *)(&DAT_005cea48 + iVar5) = uVar3;
  FUN_00408030(param_1);
  return;
}


/* ==== 00408b50 FUN_00408b50 ==== */

void FUN_00408b50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1 * 0x294;
  iVar3 = *(int *)(&DAT_005cea34 + iVar4);
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar2 = FUN_00407d20(*(undefined4 *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50),
                       *(undefined4 *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50));
  if (ABS((double)iVar2) < 2.0) {
    iVar3 = DAT_0073b0d0 + *(int *)(iVar3 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
    iVar3 = FUN_00403ea0(iVar1,*(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
                         *(undefined4 *)(iVar3 + 0x58));
    if (((0x300 < iVar3) && (iVar3 < 0x500)) || ((0xb00 < iVar3 && (iVar3 < 0xd00)))) {
      FUN_00407d90(param_1);
      iVar3 = FUN_004235f0(param_1);
      *(int *)(&DAT_005cea48 + iVar4) = iVar3;
      if (iVar3 == 1) {
        *(undefined4 *)(&DAT_005cea48 + iVar4) = 2;
      }
      else if (iVar3 == 2) {
        *(undefined4 *)(&DAT_005cea48 + iVar4) = 1;
      }
      fVar5 = (float10)FUN_004a6800();
      *(float *)(&DAT_005cea00 + iVar4) =
           (float)(fVar5 + (float10)*(float *)(&DAT_005cea00 + iVar4));
      fVar5 = (float10)FUN_004a6800();
      *(float *)(&DAT_005cea50 + iVar4) =
           (float)(fVar5 + (float10)*(float *)(&DAT_005cea50 + iVar4));
      return;
    }
  }
  *(undefined4 *)(&DAT_005cea48 + iVar4) = 0;
  if (0 < iVar2) {
    FUN_00408030();
    *(undefined4 *)(&DAT_005cea50 + iVar4) = 0;
    return;
  }
  FUN_00407ed0(param_1);
  *(undefined4 *)(&DAT_005cea50 + iVar4) = 0;
  return;
}


/* ==== 00408cb0 FUN_00408cb0 ==== */

void FUN_00408cb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d_Invalid_entry_in_the_FSM_t_00590710,
                 s_C__Work_A2IV_Game_prog_ai_cops_c_005906ec,0x857,param_1);
  }
  iVar2 = param_1 * 0x294;
  puVar1 = (undefined4 *)(*(int *)(&DAT_005cea04 + iVar2) + *(int *)(&DAT_005ce9fc + iVar2) * 8);
  switch(*puVar1) {
  case 0:
    FUN_004081e0(param_1);
    break;
  case 1:
    FUN_00408320(param_1);
    break;
  case 2:
    FUN_00408410(param_1);
    break;
  case 3:
    FUN_00408370(param_1);
    break;
  case 4:
    FUN_00408a00(param_1);
    break;
  case 5:
    FUN_00408120(param_1);
    break;
  case 6:
    FUN_004089f0(param_1);
    break;
  case 7:
    FUN_00408b50(param_1);
    break;
  case 8:
    FUN_004083d0(param_1);
    break;
  default:
    FUN_004c4150(s__s__d_Unknown_tactic_stage__d_0059075c,
                 s_C__Work_A2IV_Game_prog_ai_cops_c_00590738,0x879,*puVar1,puVar1[1]);
  }
  if ((float)*(int *)(*(int *)(&DAT_005cea04 + iVar2) + 4 + *(int *)(&DAT_005ce9fc + iVar2) * 8) <
      *(float *)(&DAT_005cea00 + iVar2)) {
    *(undefined4 *)(&DAT_005cea00 + iVar2) = 0;
    *(int *)(&DAT_005ce9fc + iVar2) = *(int *)(&DAT_005ce9fc + iVar2) + 1;
    FUN_00403040(0);
  }
  return;
}


/* ==== 00408df0 FUN_00408df0 ==== */

void FUN_00408df0(undefined4 param_1)

{
  FUN_0041be70(2,0,0xffffffff);
  FUN_00403cd0(param_1);
  return;
}


/* ==== 00408e10 FUN_00408e10 ==== */

void FUN_00408e10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5];
  *(undefined4 *)(iVar2 * 0xf0 + 0x60 + DAT_00715e50) = 0;
  iVar3 = FUN_00418890(param_1);
  puVar1 = (undefined4 *)((&DAT_005d2b78)[iVar3 * 3] * 0x50 + 8 + DAT_00715eb8);
  FUN_00403c70(param_1,iVar3,*puVar1,puVar1[1],puVar1[2]);
  FUN_00403040(0);
  if (16.0 < *(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50)) {
    FUN_00402ea0(0);
    fVar4 = (float10)FUN_004a6800();
    FUN_00402e80((float)(fVar4 * (float10)200.0));
  }
  FUN_00403cd0(param_1);
  fVar4 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea54 + param_1 * 0x294) =
       (float)(fVar4 + (float10)*(float *)(&DAT_005cea54 + param_1 * 0x294));
  return;
}


/* ==== 00408f00 FUN_00408f00 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408f00(int param_1)

{
  int iVar1;
  
  *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x5c + DAT_00715e50) = 0;
  FUN_00426fc0((&DAT_005ce9e8)[param_1 * 0xa5],0);
  if (*(int *)(&DAT_005cea34 + param_1 * 0x294) == DAT_006fba58) {
    _DAT_006fbab8 = 0x3f800000;
    FUN_0040da60(param_1);
    return;
  }
  iVar1 = FUN_0040dad0(*(int *)(&DAT_005cea34 + param_1 * 0x294));
  if (iVar1 == -1) {
    FUN_004c4150(s__s__d_Target_object_is_not_a_rac_005907a0,
                 s_C__Work_A2IV_Game_prog_ai_cops_c_0059077c,0x8fd);
  }
  *(undefined4 *)(&DAT_005cea60 + iVar1 * 0x294) = 0x3f800000;
  FUN_0040da60(param_1);
  return;
}


/* ==== 00409070 FUN_00409070 ==== */

void FUN_00409070(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0;
  iVar1 = iVar2 + DAT_00715e50;
  fVar3 = (float10)FUN_004a6800();
  *(float *)(iVar1 + 0xc4) =
       (float)((float10)*(float *)(iVar1 + 0xc4) -
              fVar3 * (float10)*(float *)(iVar1 + 0xc4) * (float10)5.0);
  iVar1 = iVar2 + DAT_00715e50;
  fVar3 = (float10)FUN_004a6800();
  *(float *)(iVar1 + 0xbc) =
       (float)((float10)*(float *)(iVar1 + 0xbc) -
              fVar3 * (float10)*(float *)(iVar1 + 0xbc) * (float10)5.0);
  iVar1 = iVar2 + DAT_00715e50;
  fVar3 = (float10)FUN_004a6800();
  *(float *)(iVar1 + 0xcc) =
       (float)((float10)*(float *)(iVar1 + 0xcc) -
              fVar3 * (float10)*(float *)(iVar1 + 0xcc) * (float10)5.0);
  iVar1 = FUN_00407d20(*(undefined4 *)(iVar2 + 0x34 + DAT_00715e50),
                       *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
  if (iVar1 < -DAT_006fb8b0) {
    FUN_0040da60(param_1);
    *(undefined4 *)(iVar2 + 0x5c + DAT_00715e50) = 0;
  }
  return;
}


/* ==== 00409160 FUN_00409160 ==== */

void FUN_00409160(int param_1)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = DAT_006fba58;
  iVar4 = -1;
  i = 0;
  param_1 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea50 + param_1) = 0;
  if (*(int *)(&DAT_005cea34 + param_1) == iVar1) {
    if (DAT_006fb8a0 == 0) {
      FUN_0044cda0(8);
      FUN_0041be70(3,DAT_006fba58,0xffffffff);
    }
    goto LAB_00409209;
  }
  if (DAT_005d2ab0 < 1) {
LAB_004091dc:
    FUN_004c4150(s_An_illegal_racer_was_arrested_in_005907e8,
                 s_C__Work_A2IV_Game_prog_ai_cops_c_005907c4,0x994);
  }
  else {
    piVar3 = &DAT_005ce9e8;
    do {
      if (*piVar3 == *(int *)(&DAT_005cea34 + param_1)) {
        iVar4 = i;
      }
      i = i + 1;
      piVar3 = piVar3 + 0xa5;
    } while (i < DAT_005d2ab0);
    if (iVar4 == -1) goto LAB_004091dc;
  }
  (&DAT_005ce9ec)[iVar4 * 0xa5] = 7;
LAB_00409209:
  puVar2 = &DAT_005cf964;
  do {
    if (puVar2[0x12] == *(int *)(&DAT_005cea34 + param_1)) {
      *puVar2 = 6;
    }
    puVar2 = puVar2 + 0xa5;
  } while ((int)puVar2 < 0x5d15c0);
  return;
}


/* ==== 00409230 FUN_00409230 ==== */

void FUN_00409230(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0;
  pfVar1 = (float *)(iVar2 + 0xbc + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800();
  *pfVar1 = (float)((float10)*pfVar1 -
                   fVar3 * (float10)*(float *)(iVar2 + 0xbc + DAT_00715e50) * (float10)5.0);
  pfVar1 = (float *)(iVar2 + 0xc4 + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800();
  *pfVar1 = (float)((float10)*pfVar1 -
                   fVar3 * (float10)*(float *)(iVar2 + 0xc4 + DAT_00715e50) * (float10)5.0);
  pfVar1 = (float *)(iVar2 + 0xcc + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800();
  *pfVar1 = (float)((float10)*pfVar1 -
                   fVar3 * (float10)*(float *)(iVar2 + 0xcc + DAT_00715e50) * (float10)5.0);
  return;
}


/* ==== 004092f0 FUN_004092f0 ==== */

void FUN_004092f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00409300 FUN_00409300 ==== */

void FUN_00409300(void)

{
  FUN_005584e0(&LAB_00409310);
  return;
}


/* ==== 00409330 FUN_00409330 ==== */

void FUN_00409330(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00409340 FUN_00409340 ==== */

void FUN_00409340(void)

{
  FUN_005584e0(&LAB_00409350);
  return;
}


/* ==== 004093c0 FUN_004093c0 ==== */

void FUN_004093c0(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint i;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar5 = *(uint *)(param_1 + 8) - param_2;
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  if (in_ECX == param_1) {
    uVar5 = uVar5 + param_2;
    if (*(uint *)(in_ECX + 8) < uVar5) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar2 = *(int *)(in_ECX + 8) - uVar5;
    iVar6 = -1;
    if (iVar2 != -1) {
      iVar6 = iVar2;
    }
    if (iVar6 != 0) {
      iVar4 = *(int *)(in_ECX + 4) + uVar5;
      FUN_005580e0(iVar4,iVar4 + iVar6,iVar2 - iVar6);
      iVar6 = *(int *)(in_ECX + 8) - iVar6;
      cVar1 = FUN_00402a00(iVar6,0);
      if (cVar1 != '\0') {
        *(int *)(in_ECX + 8) = iVar6;
        *(undefined1 *)(iVar6 + *(int *)(in_ECX + 4)) = 0;
      }
    }
    FUN_00402c30();
    uVar5 = *(uint *)(in_ECX + 8);
    if (uVar5 < param_2) {
      param_2 = uVar5;
    }
    if (param_2 == 0) {
      return;
    }
    FUN_005580e0(*(int *)(in_ECX + 4),*(int *)(in_ECX + 4) + param_2,uVar5 - param_2);
    iVar6 = *(int *)(in_ECX + 8) - param_2;
    cVar1 = FUN_00402a00(iVar6,0);
    if (cVar1 == '\0') {
      return;
    }
    FUN_004029e0(iVar6);
    return;
  }
  if ((uVar5 != 0) && (uVar5 == *(uint *)(param_1 + 8))) {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0057629c;
    }
    if ((byte)puVar3[-1] < 0xfe) {
      iVar6 = *(int *)(in_ECX + 4);
      if (iVar6 != 0) {
        cVar1 = *(char *)(iVar6 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(iVar6 + -1));
        }
        else {
          *(char *)(iVar6 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      puVar3 = *(undefined1 **)(param_1 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      *(undefined1 **)(in_ECX + 4) = puVar3;
      *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
      puVar3[-1] = puVar3[-1] + '\x01';
      return;
    }
  }
  i = FUN_004095c0();
  if (i < uVar5) {
    FUN_0054b1b4();
  }
  iVar6 = *(int *)(in_ECX + 4);
  if (((iVar6 == 0) || (cVar1 = *(char *)(iVar6 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar5 == 0) {
      FUN_004028f0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (uVar5 <= *(uint *)(in_ECX + 0xc))) goto LAB_0040958c;
    FUN_004028f0(1);
  }
  else if (uVar5 == 0) {
    *(char *)(iVar6 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return;
  }
  FUN_00402b20(uVar5);
LAB_0040958c:
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  puVar7 = (undefined4 *)(puVar3 + param_2);
  puVar8 = *(undefined4 **)(in_ECX + 4);
  for (i = uVar5 >> 2; i != 0; i = i - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (i = uVar5 & 3; i != 0; i = i - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(uint *)(in_ECX + 8) = uVar5;
  *(undefined1 *)(uVar5 + *(int *)(in_ECX + 4)) = 0;
  return;
}


/* ==== 004095c0 FUN_004095c0 ==== */

undefined4 FUN_004095c0(void)

{
  return 0xfffffffd;
}


/* ==== 004095e0 FUN_004095e0 ==== */

void FUN_004095e0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004095f0 FUN_004095f0 ==== */

void FUN_004095f0(void)

{
  FUN_005584e0(&LAB_00409600);
  return;
}


/* ==== 00409620 FUN_00409620 ==== */

void FUN_00409620(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00409630 FUN_00409630 ==== */

void FUN_00409630(void)

{
  FUN_005584e0(&LAB_00409640);
  return;
}


/* ==== 004096b0 FUN_004096b0 ==== */

void FUN_004096b0(void)

{
  char cVar1;
  uint i;
  char *pcVar2;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [19];
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005696a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_00590a68;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_00590a68,~i - 1);
  local_38[0] = local_15;
  local_8._0_1_ = 1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = &DAT_00590a74;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_00590a74,~i - 1);
  local_8._0_1_ = 2;
  local_28[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_AI_DEBUG_00590a80;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_ACTION_AI_DEBUG_00590a80,~i - 1);
  local_8._0_1_ = 3;
  FUN_004ea0c0();
  FUN_004eaaa0(local_28,local_38,local_48);
  local_8._0_1_ = 2;
  FUN_004028f0(1);
  local_8._0_1_ = 1;
  FUN_004028f0(1);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_28[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_00590a90;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_00590a90,~i - 1);
  local_8._0_1_ = 4;
  local_38[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = &DAT_00590a9c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_00590a9c,~i - 1);
  local_48[0] = local_15;
  local_8._0_1_ = 5;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_BBOX_TOGGLE_00590aa8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_ACTION_BBOX_TOGGLE_00590aa8,~i - 1);
  local_8._0_1_ = 6;
  FUN_004ea0c0();
  FUN_004eaaa0(local_48,local_38,local_28);
  local_8._0_1_ = 5;
  FUN_004028f0(1);
  local_8._0_1_ = 4;
  FUN_004028f0(1);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_28[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_00590abc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_00590abc,~i - 1);
  local_38[0] = local_15;
  local_8._0_1_ = 7;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = &DAT_00590ac8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_00590ac8,~i - 1);
  local_8._0_1_ = 8;
  local_48[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_WP_TOGGLE_00590ad4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_ACTION_WP_TOGGLE_00590ad4,~i - 1);
  local_8._0_1_ = 9;
  FUN_004ea0c0();
  FUN_004eaaa0(local_48,local_38,local_28);
  local_8._0_1_ = 8;
  FUN_004028f0(1);
  local_8._0_1_ = 7;
  FUN_004028f0(1);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_28[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_00590ae8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_00590ae8,~i - 1);
  local_8._0_1_ = 10;
  local_38[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = &DAT_00590af4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_00590af4,~i - 1);
  local_48[0] = local_15;
  local_8._0_1_ = 0xb;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_LINE_TOGGLE_00590b00;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_ACTION_LINE_TOGGLE_00590b00,~i - 1);
  local_8._0_1_ = 0xc;
  FUN_004ea0c0();
  FUN_004eaaa0(local_48,local_38,local_28);
  local_8._0_1_ = 0xb;
  FUN_004028f0(1);
  local_8._0_1_ = 10;
  FUN_004028f0(1);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_28[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_00590b14;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_00590b14,~i - 1);
  local_38[0] = local_15;
  local_8._0_1_ = 0xd;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = &DAT_00590b20;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_00590b20,~i - 1);
  local_8._0_1_ = 0xe;
  local_48[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_FSM_TOGGLE_00590b2c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_ACTION_FSM_TOGGLE_00590b2c,~i - 1);
  local_8._0_1_ = 0xf;
  FUN_004ea0c0();
  FUN_004eaaa0(local_48,local_38,local_28);
  local_8._0_1_ = 0xe;
  FUN_004028f0(1);
  local_8._0_1_ = 0xd;
  FUN_004028f0(1);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_28[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_00590b40;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_00590b40,~i - 1);
  local_8._0_1_ = 0x10;
  local_38[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = &DAT_00590b4c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_00590b4c,~i - 1);
  local_8._0_1_ = 0x11;
  local_48[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_POSITIONMARKER_TOGGLE_00590b58;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_ACTION_POSITIONMARKER_TOGGLE_00590b58,~i - 1);
  local_8._0_1_ = 0x12;
  FUN_004ea0c0();
  FUN_004eaaa0(local_48,local_38,local_28);
  local_8._0_1_ = 0x11;
  FUN_004028f0(1);
  local_8._0_1_ = 0x10;
  FUN_004028f0(1);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_28[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_keyboard0_00590b78;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_keyboard0_00590b78,~i - 1);
  local_38[0] = local_15;
  local_8._0_1_ = 0x13;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = &DAT_00590b84;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_00590b84,~i - 1);
  local_8._0_1_ = 0x14;
  local_48[0] = local_15;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_ACTION_POLY_TOGGLE_00590b90;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_ACTION_POLY_TOGGLE_00590b90,~i - 1);
  local_8._0_1_ = 0x15;
  FUN_004ea0c0();
  FUN_004eaaa0(local_48,local_38,local_28);
  local_8._0_1_ = 0x14;
  FUN_004028f0(1);
  local_8._0_1_ = 0x13;
  FUN_004028f0(1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(1);
  DAT_005ccd44 = 0;
  ExceptionList = local_10;
  return;
}


