/* spel.dat — game/ai_supercop.cpp: 37 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0041e0b0 FUN_0041e0b0 ==== */

void FUN_0041e0b0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0041e0c0 FUN_0041e0c0 ==== */

void FUN_0041e0c0(void)

{
  FUN_005584e0(&LAB_0041e0d0);
  return;
}


/* ==== 0041e0f0 FUN_0041e0f0 ==== */

void FUN_0041e0f0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0041e100 FUN_0041e100 ==== */

void FUN_0041e100(void)

{
  FUN_005584e0(&LAB_0041e110);
  return;
}


/* ==== 0041e120 FUN_0041e120 ==== */

void FUN_0041e120(void)

{
  return;
}


/* ==== 0041e150 FUN_0041e150 ==== */

void FUN_0041e150(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00569e6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 1) = local_15;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  i = 0xffffffff;
  *in_ECX = 0;
  pcVar4 = (char *)&DAT_005d3304;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_4 = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = in_ECX[2];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      in_ECX[5] = 0;
      ExceptionList = pvStack_c;
      return;
    }
    if (((uint)in_ECX[4] < 0x20) && (i <= (uint)in_ECX[4])) goto LAB_0041e229;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    in_ECX[5] = 0;
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00402b20(i);
LAB_0041e229:
  puVar3 = &DAT_005d3304;
  puVar5 = (undefined4 *)in_ECX[2];
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
  in_ECX[3] = i;
  *(undefined1 *)(in_ECX[2] + i) = 0;
  in_ECX[5] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0041e270 FUN_0041e270 ==== */

/* WARNING: Removing unreachable block (ram,0x0041e29f) */

void FUN_0041e270(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

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
  
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)param_2;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  uVar1 = param_2[2];
  if (in_ECX + 1 == param_2) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[3] - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + in_ECX[2],uVar1 + in_ECX[2] + iVar5,iVar3 - iVar5);
      iVar3 = in_ECX[3];
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_2[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar4 = (undefined1 *)param_2[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[2] = puVar4;
        in_ECX[3] = param_2[2];
        in_ECX[4] = param_2[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_0041e37d;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)param_2[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)in_ECX[2];
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
      in_ECX[3] = uVar1;
      *(undefined1 *)(uVar1 + in_ECX[2]) = 0;
    }
  }
LAB_0041e37d:
  *in_ECX = param_1;
  in_ECX[5] = param_3;
  return;
}


/* ==== 0041e3a0 FUN_0041e3a0 ==== */

void FUN_0041e3a0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}


/* ==== 0041e410 FUN_0041e410 ==== */

void FUN_0041e410(void)

{
  return;
}


/* ==== 0041e450 FUN_0041e450 ==== */

void FUN_0041e450(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint i;
  uint j;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569e88;
  local_c = ExceptionList;
  iVar5 = param_1 * 0xf0;
  ExceptionList = &local_c;
  *(undefined4 *)(iVar5 + 0x38 + DAT_00715e50) = *(undefined4 *)(iVar5 + 0x34 + DAT_00715e50);
  if (DAT_006fb8e8 == 0) {
    if (DAT_006fb954 == 1) {
      *(undefined4 *)(iVar5 + 0x50 + DAT_00715e50) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x50 + DAT_00715e50) = 1;
    }
  }
  else if (DAT_006fb954 == 1) {
    *(undefined4 *)(iVar5 + 0x50 + DAT_00715e50) = 1;
  }
  else {
    *(undefined4 *)(iVar5 + 0x50 + DAT_00715e50) = 0;
  }
  iVar4 = iVar5 + DAT_00715e50;
  uVar3 = FUN_004aac20(param_1,*(undefined4 *)(iVar5 + 0x50 + DAT_00715e50));
  *(undefined4 *)(iVar4 + 0x3c) = uVar3;
  local_1c[0] = (undefined1)param_1;
  *(code **)(iVar5 + 0x6c + DAT_00715e50) = FUN_0041ed30;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = (char *)&DAT_00594c70;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    puVar6 = &DAT_00594c70;
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
  local_4 = 0;
  iVar4 = FUN_00424660(local_1c);
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
  iVar1 = *(int *)(iVar4 + 0x40);
  fVar9 = (float10)FUN_00429320(param_1);
  fVar10 = (float10)FUN_004292e0(param_1);
  FUN_00429710(iVar4,param_1,0,0,0,0,(float)iVar1,0x3e4ccccd,(float)fVar10,(float)fVar9,0,0,0,
               FUN_0044f970,0);
  FUN_004a6fa0(param_1,0);
  FUN_004353e0(*(undefined4 *)(iVar4 + 0x44),param_1);
  FUN_0042a7f0(param_1);
  FUN_004a7190(param_1);
  *(undefined4 *)(iVar5 + 0x68 + DAT_00715e50) = 1;
  FUN_00450b00(param_1,s_POLITIE_SIRENE_00594c7c);
  FUN_00426bb0(param_1,4,iVar4 + 0x50);
  if (DAT_005d3310 < 1) {
    (&DAT_005d330c)[DAT_005d3310] = param_1;
    DAT_005d3310 = DAT_005d3310 + 1;
    ExceptionList = local_c;
    return;
  }
  FUN_004c4150(s__s__d____Maximum_number_of_Super_00594cb4,
               s_C__Work_A2IV_Game_prog_ai_superc_00594c8c,0x126,1);
  ExceptionList = local_c;
  return;
}


/* ==== 0041e6c0 FUN_0041e6c0 ==== */

void FUN_0041e6c0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int i;
  undefined4 *puVar7;
  undefined4 *local_38;
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569ea2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00406eb0();
  FUN_004028f0(0);
  i = 0;
  local_4 = 0;
  if (0 < DAT_005d3310) {
    local_38 = &DAT_005d330c;
    puVar7 = &DAT_005d1948;
    do {
      uVar2 = *local_38;
      puVar7[-0x3e] = uVar2;
      uVar2 = FUN_00407030(uVar2);
      uVar2 = FUN_00406e70(uVar2);
      FUN_00403140(uVar2);
      uVar2 = FUN_0049df90(local_1c,s__s_d_00594ce8,s_Supercop_00594c5c,i);
      local_4._0_1_ = 1;
      FUN_004093c0(uVar2,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(1);
      puVar4 = local_2c;
      FUN_0040ebe0(puVar4);
      iVar3 = FUN_0040f6f0(puVar4);
      if (iVar3 == -1) {
        puVar4 = local_28;
        if (local_28 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        FUN_004c4150(s__s__d____Agent_type___s__not_fou_00594d18,
                     s_C__Work_A2IV_Game_prog_ai_superc_00594cf0,0x159,puVar4);
      }
      iVar5 = FUN_0040ebe0();
      if ((iVar3 < 0) || (iVar6 = (*(code *)**(undefined4 **)(iVar5 + 0x1c))(), iVar6 <= iVar3)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      FUN_004a6980(uVar2,s__s__d____Invalid_agent_type_inde_00595090,
                   s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0x98,iVar3);
      iVar3 = *(int *)(*(int *)(*(int *)(iVar5 + 0x20) + 4) + 0x10 + iVar3 * 0x14);
      puVar7[-9] = iVar3;
      iVar5 = FUN_0040ebe0();
      if ((iVar3 < 0) || (iVar5 = (*(code *)**(undefined4 **)(iVar5 + 0x24))(), iVar5 <= iVar3)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      FUN_004a6980(uVar2,s__s__d____Invalid_object_index____0058fd14,
                   s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar3);
      uVar2 = DAT_006fba58;
      puVar7[-4] = 0;
      puVar7[1] = uVar2;
      *puVar7 = 0;
      puVar7[0x40] = 1;
      puVar7[0x41] = 0;
      puVar7[0x4b] = 0;
      puVar7[0x4d] = 0x7f7fffff;
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      *(undefined1 *)(puVar7 + -1) = 0;
      *(undefined1 *)((int)puVar7 + -3) = 0;
      puVar7[-0x2b] = uVar2;
      i = i + 1;
      puVar7 = puVar7 + 0xa5;
      local_38 = local_38 + 1;
    } while (i < DAT_005d3310);
  }
  if (local_28 != (undefined1 *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0041e910 FUN_0041e910 ==== */

void FUN_0041e910(void)

{
  FUN_0040d5d0(&DAT_005ce5e8,0,0x1d,0x1e,1,&LAB_004213c0);
  FUN_0040d5d0(&DAT_005ce5e8,1,0x1d,0x22,1,&LAB_00421370);
  FUN_0040d5d0(&DAT_005ce5e8,2,0x1d,0x23,1,&LAB_00421490);
  FUN_0040d5d0(&DAT_005ce5e8,3,0x1d,0x24,1,&LAB_004214c0);
  FUN_0040d5d0(&DAT_005ce5e8,4,0x1d,0x21,1,&LAB_004215d0);
  FUN_0040d5d0(&DAT_005ce5e8,5,0x1d,0x29,1,FUN_004217c0);
  FUN_0040d5d0(&DAT_005ce5e8,6,0x1d,0x25,1,&LAB_00421790);
  FUN_0040d5d0(&DAT_005ce5e8,7,0x1e,0x1d,1,&LAB_00421410);
  FUN_0040d5d0(&DAT_005ce5e8,8,0x1e,0x22,1,&LAB_00421370);
  FUN_0040d5d0(&DAT_005ce5e8,9,0x1e,0x23,1,&LAB_00421490);
  FUN_0040d5d0(&DAT_005ce5e8,10,0x1e,0x24,1,&LAB_004214c0);
  FUN_0040d5d0(&DAT_005ce5e8,0xb,0x1e,0x21,1,&LAB_004215d0);
  FUN_0040d5d0(&DAT_005ce5e8,0xc,0x1e,0x29,1,FUN_004217c0);
  FUN_0040d5d0(&DAT_005ce5e8,0xd,0x1e,0x25,1,&LAB_00421790);
  FUN_0040d5d0(&DAT_005ce5e8,0xe,0x26,0x1d,1,&LAB_004216f0);
  FUN_0040d5d0(&DAT_005ce5e8,0xf,0x26,0x1d,1,&LAB_00421410);
  FUN_0040d5d0(&DAT_005ce5e8,0x10,0x26,0x22,1,&LAB_00421370);
  FUN_0040d5d0(&DAT_005ce5e8,0x11,0x26,0x21,1,&LAB_004215d0);
  FUN_0040d5d0(&DAT_005ce5e8,0x12,0x26,0x25,1,&LAB_00421790);
  FUN_0040d5d0(&DAT_005ce5e8,0x13,0x27,0x1d,1,&LAB_004216f0);
  FUN_0040d5d0(&DAT_005ce5e8,0x14,0x27,0x1d,1,&LAB_00421410);
  FUN_0040d5d0(&DAT_005ce5e8,0x15,0x27,0x22,1,&LAB_00421370);
  FUN_0040d5d0(&DAT_005ce5e8,0x16,0x27,0x21,1,&LAB_004215d0);
  FUN_0040d5d0(&DAT_005ce5e8,0x17,0x27,0x25,1,&LAB_00421790);
  FUN_0040d5d0(&DAT_005ce5e8,0x18,0x28,0x1d,1,&LAB_004216f0);
  FUN_0040d5d0(&DAT_005ce5e8,0x19,0x28,0x1d,1,&LAB_00421410);
  FUN_0040d5d0(&DAT_005ce5e8,0x1a,0x28,0x22,1,&LAB_00421370);
  FUN_0040d5d0(&DAT_005ce5e8,0x1b,0x28,0x21,1,&LAB_004215d0);
  FUN_0040d5d0(&DAT_005ce5e8,0x1c,0x28,0x25,1,&LAB_00421790);
  FUN_0040d5d0(&DAT_005ce5e8,0x1d,0x29,999,1,&LAB_004216f0);
  FUN_0040d5d0(&DAT_005ce5e8,0x1e,0x29,0x22,1,&LAB_00421370);
  FUN_0040d5d0(&DAT_005ce5e8,0x1f,0x29,0x25,1,&LAB_00421790);
  FUN_0040d5d0(&DAT_005ce5e8,0x20,0x21,0x22,1,&LAB_00421370);
  FUN_0040d5d0(&DAT_005ce5e8,0x21,0x21,0x24,1,&LAB_004214c0);
  FUN_0040d5d0(&DAT_005ce5e8,0x22,0x21,999,1,&LAB_00421680);
  FUN_0040d5d0(&DAT_005ce5e8,0x23,0x21,0x25,1,&LAB_00421790);
  FUN_0040d5d0(&DAT_005ce5e8,0x24,0x22,0x23,1,&LAB_00421490);
  FUN_0040d5d0(&DAT_005ce5e8,0x25,0x22,0x24,1,&LAB_004214c0);
  FUN_0040d5d0(&DAT_005ce5e8,0x26,0x22,0x1d,1,&LAB_004216f0);
  FUN_0040d5d0(&DAT_005ce5e8,0x27,0x22,0x25,1,&LAB_00421790);
  FUN_0040d5d0(&DAT_005ce5e8,0x28,0x24,0x1d,0,&LAB_004214c0);
  FUN_0040d5d0(&DAT_005ce5e8,0x29,0x24,0x23,1,&LAB_00421490);
  FUN_0040d5d0(&DAT_005ce5e8,0x2a,0x24,0x25,1,&LAB_00421790);
  return;
}


/* ==== 0041ed30 FUN_0041ed30 ==== */

undefined4 FUN_0041ed30(int param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  
  iVar2 = FUN_0040dad0(param_1);
  if (iVar2 == -1) {
    FUN_004c4150(s__s__d____No_FSM_object_refers_to_00594d64,
                 s_C__Work_A2IV_Game_prog_ai_superc_00594d3c,0x20e,param_1);
  }
  cVar1 = FUN_00419450(param_1);
  if (cVar1 == '\x01') {
    pfVar3 = (float *)(&DAT_005ceab0 + iVar2 * 0x294);
    fVar4 = (float10)FUN_004a6800();
    *pfVar3 = (float)(fVar4 + (float10)*pfVar3);
  }
  else {
    pfVar3 = (float *)(&DAT_005ceab0 + iVar2 * 0x294);
    *pfVar3 = 0.0;
  }
  if (0.25 < *pfVar3) {
    FUN_004c3fa0(s_Supercop_has_been_corrected__00594d98);
    FUN_0040e5a0(param_1,*(undefined4 *)(param_1 * 0xf0 + 0x34 + DAT_00715e50),0);
  }
  param_1 = param_1 * 0xf0;
  *(uint *)(param_1 + 0x1c + DAT_00715e50) = *(uint *)(param_1 + 0x1c + DAT_00715e50) | 2;
  *(undefined1 **)(param_1 + 0x70 + DAT_00715e50) = &LAB_0042d820;
  if (DAT_005d3110 == '\0') {
    FUN_0040d490(iVar2);
    FUN_00412570(iVar2);
  }
  if (DAT_005d3110 == '\x01') {
    iVar2 = param_1 + DAT_00715e50;
    fVar4 = (float10)FUN_004a6800();
    *(float *)(iVar2 + 0xc4) =
         (float)((float10)*(float *)(iVar2 + 0xc4) -
                fVar4 * (float10)*(float *)(iVar2 + 0xc4) * (float10)5.0);
    iVar2 = param_1 + DAT_00715e50;
    fVar4 = (float10)FUN_004a6800();
    *(float *)(iVar2 + 0xbc) =
         (float)((float10)*(float *)(iVar2 + 0xbc) -
                fVar4 * (float10)*(float *)(iVar2 + 0xbc) * (float10)5.0);
    param_1 = param_1 + DAT_00715e50;
    fVar4 = (float10)FUN_004a6800();
    *(float *)(param_1 + 0xcc) =
         (float)((float10)*(float *)(param_1 + 0xcc) -
                fVar4 * (float10)*(float *)(param_1 + 0xcc) * (float10)5.0);
  }
  return 0;
}


/* ==== 0041eeb0 FUN_0041eeb0 ==== */

void FUN_0041eeb0(int param_1)

{
  int iVar1;
  char cVar2;
  uint j;
  uint i;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569eb4;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (ExceptionList = &pvStack_c, 0x12 < param_1)) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_00594de0,
                 s_C__Work_A2IV_Game_prog_ai_superc_00594db8,0x252,param_1);
  }
  iVar1 = param_1 * 0x294;
  fVar5 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea54 + iVar1) = (float)(fVar5 + (float10)*(float *)(&DAT_005cea54 + iVar1));
  FUN_00421830(param_1);
  FUN_004218b0(param_1);
  FUN_00421d20(param_1);
  FUN_00403cd0(param_1);
  i = (int)*(uint *)(&DAT_005cec0c + iVar1) >> 0x1f;
  if ((int)((*(uint *)(&DAT_005cec0c + iVar1) ^ i) - i) < 7) {
    pcStack_18 = (char *)0x0;
    auStack_1c[0] = (undefined1)param_1;
    uStack_14 = 0;
    uStack_10 = 0;
    i = 0xffffffff;
    pcVar3 = s_System_CopAlert_00594e08;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    cVar2 = FUN_00402a00(i,1);
    if (cVar2 != '\0') {
      pcVar3 = s_System_CopAlert_00594e08;
      pcVar4 = pcStack_18;
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
      pcStack_18[i] = '\0';
      uStack_14 = i;
    }
    uVar7 = (&DAT_005ce9e8)[param_1 * 0xa5];
    puVar6 = auStack_1c;
    uStack_4 = 0;
    FUN_004891a0(puVar6,uVar7);
    FUN_0048a910(puVar6,uVar7);
    uStack_4 = 0xffffffff;
    if (pcStack_18 != (char *)0x0) {
      cVar2 = pcStack_18[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339(pcStack_18 + -1);
      }
      else {
        pcStack_18[-1] = cVar2 + -1;
      }
    }
    pcStack_18 = (char *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  FUN_00435440((&DAT_005ce9e8)[param_1 * 0xa5],0);
  if (0.0 < *(float *)(&DAT_005cec24 + iVar1)) {
    fVar5 = (float10)FUN_004a6800();
    *(float *)(&DAT_005cec24 + iVar1) = (float)((float10)*(float *)(&DAT_005cec24 + iVar1) - fVar5);
  }
  if (0.0 < *(float *)(&DAT_005cec28 + iVar1)) {
    fVar5 = (float10)FUN_004a6800();
    *(float *)(&DAT_005cec28 + iVar1) = (float)((float10)*(float *)(&DAT_005cec28 + iVar1) - fVar5);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0041f070 FUN_0041f070 ==== */

void FUN_0041f070(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint i;
  uint j;
  char *pcVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569ec6;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (ExceptionList = &pvStack_c, 0x12 < param_1)) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_00594e40,
                 s_C__Work_A2IV_Game_prog_ai_superc_00594e18,0x2ac,param_1);
  }
  iVar1 = param_1 * 0x294;
  iVar3 = *(int *)(&DAT_005cebe4 + iVar1);
  iVar4 = *(int *)(&DAT_005ceabc + iVar1);
  iVar6 = FUN_0040ebe0();
  if ((iVar4 < 0) || (iVar7 = (*(code *)**(undefined4 **)(iVar6 + 0x24))(), iVar7 <= iVar4)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  FUN_004a6980(uVar8,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar4);
  iVar4 = *(int *)(*(int *)(iVar6 + 0x28) + 4) + iVar4 * 0x54;
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    (&DAT_005cec60)[iVar1] = 0;
    FUN_00558625();
    *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40000000;
    (&DAT_005ceadc)[iVar1] = 0;
    iVar6 = *(int *)(&DAT_005ce9f0 + iVar1);
    if (((((iVar6 == 0x26) || (iVar6 == 0x27)) || (iVar6 == 0x28)) || (iVar6 == 0x29)) &&
       ((*(int *)(&DAT_005ceac0 + (iVar3 + 2) * 0x10 + iVar1) == 2 &&
        ((&DAT_005cec78)[iVar1] != '\0')))) {
      (&DAT_005cec78)[iVar1] = 0;
      auStack_1c[0] = (undefined1)param_1;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar9 = s__police_outsmarted_00594e68;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar5 != '\0');
      i = ~i - 1;
      cVar5 = FUN_00402a00(i,1);
      if (cVar5 != '\0') {
        pcVar9 = s__police_outsmarted_00594e68;
        pcVar10 = pcStack_18;
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        pcStack_18[i] = '\0';
        uStack_14 = i;
      }
      puVar11 = auStack_1c;
      uStack_4 = 0;
      uVar8 = (&DAT_005ce9e8)[param_1 * 0xa5];
      FUN_004891a0(puVar11,uVar8);
      FUN_0048a910(puVar11,uVar8);
      uStack_4 = 0xffffffff;
      FUN_004028f0(1);
    }
  }
  iVar6 = FUN_00418890(param_1);
  puVar2 = (undefined4 *)((&DAT_005d2b78)[iVar6 * 3] * 0x50 + 8 + DAT_00715eb8);
  *(undefined4 *)(&DAT_005cebf4 + iVar1) = *puVar2;
  *(undefined4 *)(&DAT_005cebf8 + iVar1) = puVar2[1];
  *(undefined4 *)(&DAT_005cebfc + iVar1) = puVar2[2];
  FUN_00403a70(param_1,*puVar2,puVar2[1],puVar2[2]);
  iVar3 = *(int *)(&DAT_005ceac0 + (iVar3 + 2) * 0x10 + iVar1);
  if (iVar3 == 1) {
    FUN_004060d0(param_1,*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x30),0);
  }
  else if (iVar3 == 2) {
    FUN_00405c80(param_1);
    if (50.0 <= *(float *)(&DAT_005cec54 + iVar1)) {
      (&DAT_005ceadd)[iVar1] = 0;
    }
    else {
      (&DAT_005ceadd)[iVar1] = 1;
    }
  }
  FUN_00406390(param_1);
  if ((*(char *)(iVar4 + 0x48) != '\0') &&
     (*(int *)(iVar4 + 0x4c) <= *(int *)(&DAT_005cec0c + iVar1))) {
    uVar8 = FUN_004a71e0(*(int *)(*(int *)(&DAT_005cea34 + iVar1) * 0xf0 + 0x34 + DAT_00715e50) -
                         *(int *)(iVar4 + 0x50));
    FUN_0040e5a0((&DAT_005ce9e8)[param_1 * 0xa5],uVar8,0);
  }
  FUN_0041eeb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0041f350 FUN_0041f350 ==== */

void FUN_0041f350(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint i;
  uint j;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569ed8;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (ExceptionList = &pvStack_c, 0x12 < param_1)) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_00594ea4,
                 s_C__Work_A2IV_Game_prog_ai_superc_00594e7c,0x316,param_1);
  }
  iVar1 = param_1 * 0x294;
  iVar3 = *(int *)(&DAT_005cebe4 + iVar1);
  iVar7 = *(int *)(&DAT_005ceabc + iVar1);
  iVar5 = FUN_0040ebe0();
  if (-1 < iVar7) {
    iVar5 = (*(code *)**(undefined4 **)(iVar5 + 0x24))();
    if (iVar7 < iVar5) {
      uVar6 = 1;
      goto LAB_0041f3e8;
    }
  }
  uVar6 = 0;
LAB_0041f3e8:
  FUN_004a6980(uVar6,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar7);
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    uVar6 = FUN_00421d80(param_1);
    *(undefined4 *)(&DAT_005cebec + iVar1) = uVar6;
    if (*(int *)(&DAT_005ce9f0 + iVar1) == 0x1d) {
      auStack_1c[0] = (undefined1)param_1;
      FUN_004028f0(0);
      i = 0xffffffff;
      pcVar8 = s__warning_from_harry_00594ecc;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      i = ~i - 1;
      cVar4 = FUN_00402a00(i,1);
      if (cVar4 != '\0') {
        pcVar8 = s__warning_from_harry_00594ecc;
        pcVar9 = pcStack_18;
        for (j = i >> 2; j != 0; j = j - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        pcStack_18[i] = '\0';
        uStack_14 = i;
      }
      puVar10 = auStack_1c;
      uVar6 = (&DAT_005ce9e8)[param_1 * 0xa5];
      uStack_4 = 0;
      FUN_004891a0(puVar10,uVar6);
      FUN_0048a910(puVar10,uVar6);
      uStack_4 = 0xffffffff;
      if (pcStack_18 != (char *)0x0) {
        cVar4 = pcStack_18[-1];
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_0054b339(pcStack_18 + -1);
        }
        else {
          pcStack_18[-1] = cVar4 + -1;
        }
      }
      pcStack_18 = (char *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    (&DAT_005ceadc)[iVar1] = 0;
  }
  iVar7 = FUN_00418890(param_1);
  puVar2 = (undefined4 *)((&DAT_005d2b78)[iVar7 * 3] * 0x50 + 8 + DAT_00715eb8);
  *(undefined4 *)(&DAT_005cebf4 + iVar1) = *puVar2;
  *(undefined4 *)(&DAT_005cebf8 + iVar1) = puVar2[1];
  *(undefined4 *)(&DAT_005cebfc + iVar1) = puVar2[2];
  FUN_00403a70(param_1,*puVar2,puVar2[1],puVar2[2]);
  if (*(int *)(&DAT_005ceac0 + (iVar3 + 2) * 0x10 + iVar1) == 1) {
    FUN_00405e90(param_1);
  }
  else if (*(int *)(&DAT_005ceac0 + (iVar3 + 2) * 0x10 + iVar1) == 2) {
    FUN_00405c80(param_1);
    if (50.0 <= *(float *)(&DAT_005cec54 + iVar1)) {
      (&DAT_005ceadd)[iVar1] = 0;
    }
    else {
      (&DAT_005ceadd)[iVar1] = 1;
    }
  }
  FUN_00406390(param_1);
  FUN_0041eeb0(param_1);
  if (*(int *)(&DAT_005cec0c + iVar1) < 3) {
    FUN_0040d470(*(undefined4 *)(&DAT_005cebec + iVar1));
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0041f5d0 FUN_0041f5d0 ==== */

void FUN_0041f5d0(void)

{
  return;
}


/* ==== 0041f5e0 FUN_0041f5e0 ==== */

void FUN_0041f5e0(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  
  iVar7 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  piVar2 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar4 = FUN_0040ebe0();
  if (iVar7 < 0) {
LAB_0041f621:
    uVar6 = 0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)(iVar4 + 0x24))();
    if (iVar5 <= iVar7) goto LAB_0041f621;
    uVar6 = 1;
  }
  FUN_004a6980(uVar6,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar7);
  iVar7 = *(int *)(*(int *)(iVar4 + 0x28) + 4) + iVar7 * 0x54;
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    *(int *)(&DAT_005cebf0 + iVar1) = *(int *)(&DAT_005cebf0 + iVar1) + 1;
    *(undefined4 *)(&DAT_005cea58 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cec38 + iVar1) = 0;
    (&DAT_005cec60)[iVar1] = 0;
    FUN_00558625();
    *(undefined4 *)(&DAT_005cebf0 + iVar1) = 1;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xf;
    *(undefined4 *)(&DAT_005cec28 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cead0 + iVar1) = 0;
  }
  iVar4 = FUN_00421710(param_1);
  if (iVar4 != 0) {
    FUN_0040e5a0(*piVar2,*(undefined4 *)(*piVar2 * 0xf0 + 0x34 + DAT_00715e50),0);
    FUN_0040d470(0x1d);
  }
  iVar4 = *(int *)(&DAT_005cec3c + iVar1);
  if (iVar4 == 0xf) {
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    fVar3 = *(float *)(iVar7 + 0x34);
    fVar8 = (float10)FUN_004a6800();
    *(float *)(&DAT_005cead4 + iVar1) = (float)(fVar8 * (float10)(fVar3 * 700.0 + 100.0));
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       ((1.0 <= *(float *)(&DAT_005cec38 + iVar1) &&
        (*(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50) < 1.0)))) {
      iVar7 = FUN_00558625();
      *(float *)(&DAT_005cec64 + iVar1) = (float)(iVar7 % 0x15 + -10) * 0.01;
      iVar7 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec38 + iVar1) = 0;
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0x11;
      *(undefined4 *)(&DAT_005cec40 + iVar1) = 0x10;
      *(float *)(&DAT_005cec28 + iVar1) = (float)(iVar7 % 3 + 3);
    }
  }
  else {
    if (iVar4 != 0x10) {
      if (iVar4 == 0x11) {
        if (*(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50) <= 0.0) {
          *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
          *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
        }
        else {
          *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
          *(undefined4 *)(&DAT_005cead8 + iVar1) = 0x42c80000;
        }
        if (ABS(*(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50)) < 2.0) {
          *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
          *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
          iVar7 = *(int *)(&DAT_005cebf0 + iVar1);
          *(int *)(&DAT_005cebf0 + iVar1) = iVar7 + -1;
          if (iVar7 + -1 < 0) {
            (&DAT_005cec60)[iVar1] = 1;
          }
          else {
            *(undefined4 *)(&DAT_005cec3c + iVar1) = *(undefined4 *)(&DAT_005cec40 + iVar1);
          }
        }
      }
      goto LAB_0041f9aa;
    }
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    fVar3 = *(float *)(iVar7 + 0x34);
    fVar8 = (float10)FUN_004a6800();
    *(float *)(&DAT_005cead8 + iVar1) = (float)(fVar8 * (float10)(fVar3 * 700.0 + 100.0));
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       ((1.0 <= *(float *)(&DAT_005cec38 + iVar1) &&
        (-1.0 < *(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50))))) {
      iVar7 = FUN_00558625();
      *(float *)(&DAT_005cec64 + iVar1) = (float)(iVar7 % 0x15 + -10) * 0.01;
      iVar7 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec38 + iVar1) = 0;
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0x11;
      *(undefined4 *)(&DAT_005cec40 + iVar1) = 0xf;
      *(float *)(&DAT_005cec28 + iVar1) = (float)(iVar7 % 3 + 3);
    }
  }
  fVar8 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cec38 + iVar1) = (float)(fVar8 + (float10)*(float *)(&DAT_005cec38 + iVar1));
LAB_0041f9aa:
  fVar8 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cea58 + iVar1) = (float)(fVar8 + (float10)*(float *)(&DAT_005cea58 + iVar1));
  fVar8 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cead0 + iVar1) =
       (float)(fVar8 * (float10)*(float *)(&DAT_005cec64 + iVar1) * (float10)100.0);
  FUN_0041eeb0(param_1);
  return;
}


/* ==== 0041f9f0 FUN_0041f9f0 ==== */

void FUN_0041f9f0(int param_1)

{
  int iVar1;
  char cVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_1c [4];
  char *pcStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569eea;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (ExceptionList = &pvStack_c, 0x12 < param_1)) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_00594f08,
                 s_C__Work_A2IV_Game_prog_ai_superc_00594ee0,0x48b,param_1);
  }
  iVar1 = param_1 * 0x294;
  if ((&DAT_005ce9f8)[param_1 * 0x294] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    local_1c[0] = (undefined1)param_1;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    i = 0xffffffff;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    (&DAT_005ceadd)[iVar1] = 0;
    (&DAT_005ceadc)[iVar1] = 1;
    pcVar3 = s__knock_out_00594f30;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    i = ~i - 1;
    pcStack_18 = (char *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    cVar2 = FUN_00402a00(i,1);
    if (cVar2 != '\0') {
      pcVar3 = s__knock_out_00594f30;
      pcVar4 = pcStack_18;
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
      pcStack_18[i] = '\0';
      uStack_14 = i;
    }
    uVar6 = (&DAT_005ce9e8)[param_1 * 0xa5];
    puVar5 = local_1c;
    uStack_4 = 0;
    FUN_004891a0(puVar5,uVar6);
    FUN_0048a910(puVar5,uVar6);
    uStack_4 = 0xffffffff;
    if (pcStack_18 != (char *)0x0) {
      cVar2 = pcStack_18[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339(pcStack_18 + -1);
      }
      else {
        pcStack_18[-1] = cVar2 + -1;
      }
    }
    pcStack_18 = (char *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  FUN_0041eeb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0041fb50 FUN_0041fb50 ==== */

void FUN_0041fb50(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_00594f64,
                 s_C__Work_A2IV_Game_prog_ai_superc_00594f3c,0x4b4,param_1);
  }
  iVar1 = param_1 * 0x294;
  if ((&DAT_005ce9f8)[param_1 * 0x294] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    (&DAT_005ceadd)[iVar1] = 0;
    (&DAT_005ceadc)[iVar1] = 1;
  }
  FUN_0041eeb0(param_1);
  return;
}


/* ==== 0041fbd0 FUN_0041fbd0 ==== */

void FUN_0041fbd0(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_00594fb4,
                 s_C__Work_A2IV_Game_prog_ai_superc_00594f8c,0x4de,param_1);
  }
  iVar1 = param_1 * 0x294;
  if ((&DAT_005ce9f8)[param_1 * 0x294] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    (&DAT_005ceadd)[iVar1] = 0;
    (&DAT_005ceadc)[iVar1] = 1;
    *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x3f800000;
  }
  if (*(float *)(&DAT_005cec28 + iVar1) <= 0.0) {
    iVar1 = FUN_00421710(param_1);
    if (iVar1 != 0) {
      FUN_0040e5a0((&DAT_005ce9e8)[param_1 * 0xa5],
                   *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),0);
      FUN_0040d470(0x1d);
    }
  }
  FUN_0041eeb0(param_1);
  return;
}


/* ==== 0041fca0 FUN_0041fca0 ==== */

void FUN_0041fca0(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_00595004,
                 s_C__Work_A2IV_Game_prog_ai_superc_00594fdc,0x521,param_1);
  }
  iVar2 = param_1 * 0x294;
  piVar3 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar11 = *(int *)(&DAT_005cebe4 + iVar2);
  iVar12 = *(int *)(&DAT_005ceabc + iVar2);
  iVar8 = FUN_0040ebe0();
  if (iVar12 < 0) {
LAB_0041fd15:
    uVar10 = 0;
  }
  else {
    iVar9 = (*(code *)**(undefined4 **)(iVar8 + 0x24))();
    if (iVar9 <= iVar12) goto LAB_0041fd15;
    uVar10 = 1;
  }
  FUN_004a6980(uVar10,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar12);
  iVar8 = *(int *)(*(int *)(iVar8 + 0x28) + 4);
  if ((&DAT_005ce9f8)[iVar2] != '\0') {
    (&DAT_005ce9f8)[iVar2] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar2) = 3;
    iVar9 = FUN_00558625();
    *(float *)(&DAT_005cec28 + iVar2) = (float)(iVar9 % 3 + 2);
    *(undefined4 *)(&DAT_005cead4 + iVar2) = 0;
    *(undefined4 *)(&DAT_005cead8 + iVar2) = 0;
    (&DAT_005ceadc)[iVar2] = 0;
    (&DAT_005ceadd)[iVar2] = 0;
  }
  fVar4 = *(float *)(iVar8 + iVar12 * 0x54 + 0x30);
  pfVar1 = (float *)(&DAT_005cebf4 + iVar2);
  *(float *)(&DAT_005cec00 + iVar2) = *pfVar1;
  *(undefined4 *)(&DAT_005cec04 + iVar2) = *(undefined4 *)(&DAT_005cebf8 + iVar2);
  *(undefined4 *)(&DAT_005cec08 + iVar2) = *(undefined4 *)(&DAT_005cebfc + iVar2);
  fVar4 = fVar4 * 28.0 + 4.0;
  iVar12 = DAT_0073b0d0 +
           *(int *)(*(int *)((iVar11 + 2) * 0x10 + iVar2 + 0x5ceac4) * 0xf0 + 0x24 + DAT_00715e50) *
           0xa9;
  *pfVar1 = *(float *)(iVar12 + 0x50);
  *(undefined4 *)(&DAT_005cebf8 + iVar2) = *(undefined4 *)(iVar12 + 0x54);
  *(undefined4 *)(&DAT_005cebfc + iVar2) = *(undefined4 *)(iVar12 + 0x58);
  iVar11 = *(int *)(&DAT_005cec3c + iVar2);
  if (iVar11 == 0) {
    if (*(float *)(&DAT_005cec28 + iVar2) <= 0.0) {
LAB_00420064:
      iVar11 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec3c + iVar2) = 1;
      *(undefined4 *)(&DAT_005cec40 + iVar2) = 3;
      *(float *)(&DAT_005cec28 + iVar2) = (float)(iVar11 % 3 + 2);
    }
    else {
      iVar11 = *(int *)(*piVar3 * 0xf0 + 0x24 + DAT_00715e50);
      iVar12 = DAT_0073b0d0 + iVar11;
      fVar5 = *pfVar1 - *(float *)(iVar12 + 0x50 + iVar11 * 0xa8);
      fVar7 = *(float *)(&DAT_005cebf8 + iVar2) - *(float *)(iVar12 + 0x54 + iVar11 * 0xa8);
      fVar6 = *(float *)(&DAT_005cebfc + iVar2) - *(float *)(iVar12 + iVar11 * 0xa8 + 0x58);
      if (300.0 <= SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6)) goto LAB_00420064;
      *(undefined4 *)(&DAT_005cead0 + iVar2) = 0;
      *(undefined4 *)(&DAT_005cead4 + iVar2) = 0;
      *(float *)(&DAT_005cead8 + iVar2) = fVar4 * 0.6 + *(float *)(&DAT_005cead8 + iVar2);
    }
    uVar10 = *(undefined4 *)(&DAT_005cead0 + iVar2);
  }
  else {
    if (iVar11 != 1) {
      if (iVar11 == 3) {
        if (0.0 < *(float *)(&DAT_005cec28 + iVar2)) {
          iVar11 = *(int *)(*piVar3 * 0xf0 + 0x24 + DAT_00715e50);
          iVar8 = DAT_0073b0d0 + iVar11;
          fVar5 = *pfVar1 - *(float *)(iVar8 + 0x50 + iVar11 * 0xa8);
          fVar6 = *(float *)(&DAT_005cebf8 + iVar2) - *(float *)(iVar8 + 0x54 + iVar11 * 0xa8);
          fVar7 = *(float *)(&DAT_005cebfc + iVar2) - *(float *)(iVar8 + iVar11 * 0xa8 + 0x58);
          if (40.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7)) {
            FUN_00403a70(param_1,*(float *)(iVar12 + 0x50),*(undefined4 *)(iVar12 + 0x54),
                         *(undefined4 *)(iVar12 + 0x58));
            *(float *)(&DAT_005cead4 + iVar2) = fVar4 + *(float *)(&DAT_005cead4 + iVar2);
            *(undefined4 *)(&DAT_005cead8 + iVar2) = 0;
            FUN_0041eeb0(param_1);
            return;
          }
        }
        iVar11 = FUN_00558625();
        *(undefined4 *)(&DAT_005cec3c + iVar2) = 1;
        *(undefined4 *)(&DAT_005cec40 + iVar2) = 0;
        *(float *)(&DAT_005cec28 + iVar2) = (float)(iVar11 % 3 + 2);
        FUN_0041eeb0(param_1);
        return;
      }
      goto LAB_004200c4;
    }
    *(undefined4 *)(&DAT_005cead0 + iVar2) = 0;
    fVar4 = *(float *)(*piVar3 * 0xf0 + 0xc4 + DAT_00715e50) * 3.6;
    if (fVar4 <= 0.0) {
      *(undefined4 *)(&DAT_005cead4 + iVar2) = 0x42c80000;
      *(undefined4 *)(&DAT_005cead8 + iVar2) = 0;
    }
    else {
      *(undefined4 *)(&DAT_005cead4 + iVar2) = 0;
      *(undefined4 *)(&DAT_005cead8 + iVar2) = 0x42c80000;
    }
    if (ABS(fVar4) < 2.0) {
      *(undefined4 *)(&DAT_005cead4 + iVar2) = 0;
      *(undefined4 *)(&DAT_005cead8 + iVar2) = 0;
      if (*(int *)(&DAT_005cec40 + iVar2) == 3) {
        iVar11 = FUN_00558625();
        iVar11 = iVar11 % 3 + 0xb;
      }
      else {
        iVar11 = FUN_00558625();
        iVar11 = iVar11 % 3 + 2;
      }
      *(float *)(&DAT_005cec28 + iVar2) = (float)iVar11;
      *(undefined4 *)(&DAT_005cec3c + iVar2) = *(undefined4 *)(&DAT_005cec40 + iVar2);
    }
    uVar10 = *(undefined4 *)(&DAT_005cead0 + iVar2);
  }
  FUN_00402de0(uVar10);
LAB_004200c4:
  FUN_0041eeb0(param_1);
  return;
}


/* ==== 004200e0 FUN_004200e0 ==== */

void FUN_004200e0(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int iVar12;
  uint i;
  int *piVar13;
  char *pcVar14;
  float10 fVar15;
  undefined1 *puVar16;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569efc;
  pvStack_c = ExceptionList;
  iVar1 = param_1 * 0x294;
  piVar2 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar12 = *(int *)(&DAT_005ceabc + iVar1);
  piVar13 = (int *)(&DAT_005ceac0 + (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1);
  ExceptionList = &pvStack_c;
  iVar7 = FUN_0040ebe0();
  if ((iVar12 < 0) || (iVar8 = (*(code *)**(undefined4 **)(iVar7 + 0x24))(), iVar8 <= iVar12)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  FUN_004a6980(uVar9,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar12);
  iVar12 = *(int *)(*(int *)(iVar7 + 0x28) + 4) + iVar12 * 0x54;
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 4;
    (&DAT_005cec60)[iVar1] = 0;
    auStack_1c[0] = (undefined1)param_1;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar14 = s__attack_0059502c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    FUN_00402940(s__attack_0059502c,~i - 1);
    iVar7 = *piVar2;
    puVar16 = auStack_1c;
    uStack_4 = 0;
    FUN_004891a0(puVar16,iVar7);
    FUN_0048a910(puVar16,iVar7);
    uStack_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  switch(*(undefined4 *)(&DAT_005cec3c + iVar1)) {
  case 4:
    (&DAT_005ceadc)[iVar1] = 0;
    FUN_00405c80(param_1);
    if (0x7fffffff < *(uint *)(&DAT_005cec0c + iVar1)) {
      iVar7 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 5;
      *(float *)(&DAT_005cec28 + iVar1) = (float)(iVar7 % 3 + 2);
    }
    iVar7 = FUN_004217c0(param_1);
    if ((iVar7 != 0) && (iVar7 = FUN_00558625(), iVar7 % 100 < *(int *)(iVar12 + 0x1c))) {
      FUN_0040d470(0x29);
    }
    break;
  case 5:
    uVar9 = FUN_004235f0(param_1);
    *(undefined4 *)(&DAT_005cea48 + iVar1) = uVar9;
    iVar7 = *(int *)(*(int *)(&DAT_005cea34 + iVar1) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
            DAT_0073b0d0;
    uStack_34 = *(undefined4 *)(iVar7 + 0x50);
    uStack_30 = *(undefined4 *)(iVar7 + 0x54);
    uStack_2c = *(undefined4 *)(iVar7 + 0x58);
    pfVar10 = (float *)FUN_004b4070(auStack_28,
                                    DAT_0073b0d0 +
                                    *(int *)(piVar13[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10)
    ;
    fVar15 = (float10)FUN_0041e120(pfVar10);
    fVar15 = SQRT(fVar15);
    puVar11 = (undefined4 *)
              FUN_004066c0((float)((float10)*pfVar10 / fVar15),(float)((float10)pfVar10[1] / fVar15)
                           ,(float)((float10)pfVar10[2] / fVar15));
    uStack_40 = *puVar11;
    uStack_3c = puVar11[1];
    uStack_38 = puVar11[2];
    FUN_00406220(param_1,&uStack_34,&uStack_40,(float)*(int *)(iVar12 + 0x20),0x42c80000,0);
    if (*piVar13 == 2) {
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 4;
    }
    iVar7 = FUN_00422b90(*(undefined4 *)(*piVar2 * 0xf0 + DAT_00715e50 + 0x34),
                         *(undefined4 *)(*piVar2 * 0xf0 + 0x3c + DAT_00715e50));
    iVar8 = *(int *)(&DAT_005cea34 + iVar1) * 0xf0 + DAT_00715e50;
    iVar8 = FUN_00422b90(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x3c));
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       (((iVar7 == iVar8 && (-3 < *(int *)(&DAT_005cec0c + iVar1))) &&
        (30.0 < *(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50))))) {
      FUN_00558625();
      *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40400000;
      iVar7 = FUN_00558625();
      if (*(float *)(iVar12 + 0x24) <= (float)(iVar7 % 100)) {
        *(undefined4 *)(&DAT_005cec3c + iVar1) = 7;
      }
      else {
        *(undefined4 *)(&DAT_005cec3c + iVar1) = 6;
      }
    }
    break;
  case 6:
    uVar9 = FUN_004235f0(param_1);
    *(undefined4 *)(&DAT_005cea48 + iVar1) = uVar9;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    fVar3 = *(float *)(iVar12 + 0x34);
    fVar15 = (float10)FUN_004a6800();
    *(float *)(&DAT_005cead8 + iVar1) = (float)(fVar15 * (float10)(fVar3 * 700.0 + 100.0));
    iVar12 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
    iVar7 = DAT_0073b0d0 + iVar12;
    fVar3 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar7 + 0x50 + iVar12 * 0xa8);
    fVar6 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar7 + 0x54 + iVar12 * 0xa8);
    fVar5 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar7 + iVar12 * 0xa8 + 0x58);
    if (((0.0 < *(float *)(&DAT_005cec28 + iVar1)) && (*piVar13 != 2)) &&
       (40.0 <= SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5))) break;
    (&DAT_005cec78)[iVar1] = 1;
    iVar12 = FUN_00558625();
    goto LAB_0042064d;
  case 7:
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    (&DAT_005ceadc)[iVar1] = 1;
    if (*(float *)(&DAT_005cec1c + iVar1) <= 0.0) {
      *(undefined4 *)(&DAT_005cead0 + iVar1) = 0xc2c80000;
    }
    else {
      *(undefined4 *)(&DAT_005cead0 + iVar1) = 0x42c80000;
    }
    if ((0.0 < *(float *)(&DAT_005cec28 + iVar1)) && (*piVar13 != 2)) {
      iVar12 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
      iVar7 = DAT_0073b0d0 + iVar12;
      fVar3 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar7 + 0x50 + iVar12 * 0xa8);
      fVar6 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar7 + 0x54 + iVar12 * 0xa8);
      fVar5 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar7 + iVar12 * 0xa8 + 0x58);
      if (40.0 <= SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5)) break;
    }
    (&DAT_005ceadc)[iVar1] = 0;
    iVar12 = FUN_00558625();
LAB_0042064d:
    *(float *)(&DAT_005cec28 + iVar1) = (float)(iVar12 % 3 + 3);
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 8;
    break;
  case 8:
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) || (*piVar13 == 2)) {
      (&DAT_005cec60)[iVar1] = 1;
    }
  }
  iVar12 = *(int *)(&DAT_005cec3c + iVar1);
  if ((3 < iVar12) && ((iVar12 < 7 || (iVar12 == 8)))) {
    iVar12 = FUN_00418890(param_1);
    puVar11 = (undefined4 *)((&DAT_005d2b78)[iVar12 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(undefined4 *)(&DAT_005cebf4 + iVar1) = *puVar11;
    *(undefined4 *)(&DAT_005cebf8 + iVar1) = puVar11[1];
    *(undefined4 *)(&DAT_005cebfc + iVar1) = puVar11[2];
    FUN_00403a70(param_1,*puVar11,puVar11[1],puVar11[2]);
  }
  FUN_00406390(param_1);
  FUN_0041eeb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00420740 FUN_00420740 ==== */

void FUN_00420740(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint i;
  uint j;
  char *pcVar13;
  undefined1 *puVar14;
  int iStack_24;
  int iStack_20;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569f0e;
  pvStack_c = ExceptionList;
  iVar1 = param_1 * 0x294;
  piVar2 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar4 = *(int *)(&DAT_005cebe4 + iVar1);
  iVar12 = *(int *)(&DAT_005ceabc + iVar1);
  ExceptionList = &pvStack_c;
  iVar9 = FUN_0040ebe0();
  if ((iVar12 < 0) || (iVar10 = (*(code *)**(undefined4 **)(iVar9 + 0x24))(), iVar10 <= iVar12)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  FUN_004a6980(uVar11,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar12);
  iVar9 = *(int *)(*(int *)(iVar9 + 0x28) + 4);
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xb;
    FUN_00558625();
    *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40c00000;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    (&DAT_005cec60)[iVar1] = 0;
    (&DAT_005cec2c)[iVar1] = 0;
    auStack_1c[0] = (undefined1)param_1;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar13 = s__attack_00595034;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar8 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar8 != '\0');
    i = ~i - 1;
    cVar8 = FUN_00402a00(i,1);
    if (cVar8 != '\0') {
      pcVar13 = s__attack_00595034;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcStack_18 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcStack_18 = pcStack_18 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcStack_18 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcStack_18 = pcStack_18 + 1;
      }
      FUN_004029e0(i);
    }
    iVar10 = *piVar2;
    puVar14 = auStack_1c;
    uStack_4 = 0;
    FUN_004891a0(puVar14,iVar10);
    FUN_0048a910(puVar14,iVar10);
    uStack_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  switch(*(undefined4 *)(&DAT_005cec3c + iVar1)) {
  case 0xb:
    iVar12 = FUN_00418890(param_1);
    puVar3 = (undefined4 *)((&DAT_005d2b78)[iVar12 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(undefined4 *)(&DAT_005cebf4 + iVar1) = *puVar3;
    *(undefined4 *)(&DAT_005cebf8 + iVar1) = puVar3[1];
    *(undefined4 *)(&DAT_005cebfc + iVar1) = puVar3[2];
    FUN_00403a70(param_1,*puVar3,puVar3[1],puVar3[2]);
    iVar12 = FUN_00421550(param_1);
    if (iVar12 != 0) {
      FUN_00558625();
      *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40000000;
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xc;
    }
    break;
  case 0xc:
    iVar10 = FUN_00418890(param_1);
    puVar3 = (undefined4 *)((&DAT_005d2b78)[iVar10 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(undefined4 *)(&DAT_005cebf4 + iVar1) = *puVar3;
    *(undefined4 *)(&DAT_005cebf8 + iVar1) = puVar3[1];
    *(undefined4 *)(&DAT_005cebfc + iVar1) = puVar3[2];
    FUN_00403a70(param_1,*puVar3,puVar3[1],puVar3[2]);
    iVar10 = FUN_00421550(param_1);
    if ((iVar10 != 0) && ((&DAT_005cec2c)[iVar1] == '\0')) {
      iVar10 = FUN_00558625();
      if (iVar10 % 100 < *(int *)(iVar9 + iVar12 * 0x54 + 0x18)) {
        FUN_0041be70(5,*piVar2,0xffffffff);
      }
      (&DAT_005cec2c)[iVar1] = 1;
    }
    iVar12 = FUN_004217c0(param_1);
    if (iVar12 != 0) {
      iVar12 = __ftol();
      iVar9 = FUN_00558625();
      fVar5 = (float)(iVar9 % 0x29 + -0x14 + iVar12) * 0.01;
      *(float *)(&DAT_005cec68 + iVar1) = fVar5;
      if (*(float *)(&DAT_005cec1c + iVar1) <= 0.0) {
        fVar6 = 100.0;
      }
      else {
        fVar6 = -100.0;
      }
      *(float *)(&DAT_005cec68 + iVar1) = fVar5 * fVar6;
      iVar12 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xd;
      *(float *)(&DAT_005cec28 + iVar1) = (float)(iVar12 % 5 + 2);
    }
    break;
  case 0xd:
    FUN_00402de0(*(undefined4 *)(&DAT_005cec68 + iVar1));
    iVar12 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
    iVar9 = DAT_0073b0d0 + iVar12;
    fVar5 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar9 + 0x50 + iVar12 * 0xa8);
    fVar7 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar9 + 0x54 + iVar12 * 0xa8);
    fVar6 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar9 + iVar12 * 0xa8 + 0x58);
    i = (int)*(uint *)(&DAT_005cec0c + iVar1) >> 0x1f;
    if ((0 < (int)((*(uint *)(&DAT_005cec0c + iVar1) ^ i) - i)) ||
       (SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) < 40.0)) {
      (&DAT_005cec78)[iVar1] = 1;
      iVar12 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xe;
      *(float *)(&DAT_005cec28 + iVar1) = (float)(iVar12 % 3 + 3);
    }
    break;
  case 0xe:
    iVar12 = FUN_00418890(param_1);
    puVar3 = (undefined4 *)((&DAT_005d2b78)[iVar12 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(undefined4 *)(&DAT_005cebf4 + iVar1) = *puVar3;
    *(undefined4 *)(&DAT_005cebf8 + iVar1) = puVar3[1];
    *(undefined4 *)(&DAT_005cebfc + iVar1) = puVar3[2];
    FUN_00403a70(param_1,*puVar3,puVar3[1],puVar3[2]);
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       (*(int *)(&DAT_005ceac0 + (iVar4 + 2) * 0x10 + iVar1) == 2)) {
      (&DAT_005cec60)[iVar1] = 1;
    }
  }
  iVar12 = *(int *)(&DAT_005cea34 + iVar1) * 0xf0 + DAT_00715e50;
  FUN_00405ac0(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x3c),&iStack_24,&iStack_20);
  if (iStack_24 + -1 < 0) {
    if (iStack_24 + 1 < iStack_20) {
      *(undefined4 *)(&DAT_005cea48 + iVar1) = 1;
    }
    else {
      *(undefined4 *)(&DAT_005cea48 + iVar1) = 0;
    }
  }
  else {
    *(undefined4 *)(&DAT_005cea48 + iVar1) = 2;
  }
  if ((10 < *(int *)(&DAT_005cec3c + iVar1)) && (*(int *)(&DAT_005cec3c + iVar1) < 0xd)) {
    iVar1 = *(int *)(&DAT_005ceac0 + (iVar4 + 2) * 0x10 + iVar1);
    if (iVar1 == 1) {
      FUN_00405e90(param_1);
    }
    else if (iVar1 == 2) {
      FUN_00405c80(param_1);
    }
  }
  FUN_00406390(param_1);
  FUN_0041eeb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00420ca0 FUN_00420ca0 ==== */

void FUN_00420ca0(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  uint i;
  char *pcVar15;
  float10 fVar16;
  undefined1 *puVar17;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar7 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569f20;
  pvStack_c = ExceptionList;
  iVar1 = param_1 * 0x294;
  piVar2 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar14 = *(int *)(&DAT_005ceabc + iVar1);
  piVar8 = (int *)(&DAT_005ceac0 + (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1);
  ExceptionList = &pvStack_c;
  iVar9 = FUN_0040ebe0();
  if ((iVar14 < 0) || (iVar10 = (*(code *)**(undefined4 **)(iVar9 + 0x24))(), iVar10 <= iVar14)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  FUN_004a6980(uVar11,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar14);
  iVar14 = *(int *)(*(int *)(iVar9 + 0x28) + 4) + iVar14 * 0x54;
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    param_1._0_1_ = SUB41(piVar8,0);
    (&DAT_005ce9f8)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 9;
    (&DAT_005cec60)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    auStack_1c[0] = (undefined1)param_1;
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar15 = s__attack_0059503c;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar4 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar4 != '\0');
    FUN_00402940(s__attack_0059503c,~i - 1);
    iVar9 = *piVar2;
    puVar17 = auStack_1c;
    uStack_4 = 0;
    FUN_004891a0(puVar17,iVar9);
    FUN_0048a910(puVar17,iVar9);
    uStack_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  if (*(int *)(&DAT_005cec3c + iVar1) == 9) {
    uVar11 = FUN_004235f0(iVar7);
    *(undefined4 *)(&DAT_005cea48 + iVar1) = uVar11;
    iVar9 = *(int *)(*(int *)(&DAT_005cea34 + iVar1) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
            DAT_0073b0d0;
    uStack_34 = *(undefined4 *)(iVar9 + 0x50);
    uStack_30 = *(undefined4 *)(iVar9 + 0x54);
    uStack_2c = *(undefined4 *)(iVar9 + 0x58);
    pfVar12 = (float *)FUN_004b4070(auStack_28,
                                    DAT_0073b0d0 +
                                    *(int *)(piVar8[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    fVar16 = (float10)FUN_0041e120(pfVar12);
    fVar16 = SQRT(fVar16);
    puVar13 = (undefined4 *)
              FUN_004066c0((float)((float10)*pfVar12 / fVar16),(float)((float10)pfVar12[1] / fVar16)
                           ,(float)((float10)pfVar12[2] / fVar16));
    uStack_40 = *puVar13;
    uStack_3c = puVar13[1];
    uStack_38 = puVar13[2];
    FUN_00406220(iVar7,&uStack_34,&uStack_40,(float)-*(int *)(iVar14 + 0x20),0x42c80000,0);
    iVar14 = DAT_00715e50 + *piVar2 * 0xf0;
    iVar14 = FUN_00422b90(*(undefined4 *)(iVar14 + 0x34),*(undefined4 *)(iVar14 + 0x3c));
    iVar9 = *(int *)(&DAT_005cea34 + iVar1) * 0xf0 + DAT_00715e50;
    iVar9 = FUN_00422b90(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x3c));
    if ((((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) && (iVar14 == iVar9)) &&
        (*(int *)(&DAT_005cec0c + iVar1) < 3)) &&
       (30.0 < *(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50))) {
      FUN_00558625();
      *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40400000;
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 10;
    }
  }
  else if (*(int *)(&DAT_005cec3c + iVar1) == 10) {
    uVar11 = FUN_004235f0(iVar7);
    *(undefined4 *)(&DAT_005cea48 + iVar1) = uVar11;
    fVar3 = *(float *)(iVar14 + 0x34);
    fVar16 = (float10)FUN_004a6800();
    *(float *)(&DAT_005cead4 + iVar1) = (float)(fVar16 * (float10)(fVar3 * 700.0 + 100.0));
    (&DAT_005ceadd)[iVar1] = 1;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    iVar14 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
    iVar9 = DAT_0073b0d0 + iVar14;
    fVar3 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar9 + 0x50 + iVar14 * 0xa8);
    fVar6 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar9 + 0x54 + iVar14 * 0xa8);
    fVar5 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar9 + iVar14 * 0xa8 + 0x58);
    if (((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) || (*piVar8 == 1)) ||
       (SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5) < 40.0)) {
      (&DAT_005cec78)[iVar1] = 1;
      (&DAT_005ceadd)[iVar1] = 0;
      (&DAT_005cec60)[iVar1] = 1;
    }
  }
  iVar14 = FUN_00418890(iVar7);
  puVar13 = (undefined4 *)((&DAT_005d2b78)[iVar14 * 3] * 0x50 + 8 + DAT_00715eb8);
  *(undefined4 *)(&DAT_005cebf4 + iVar1) = *puVar13;
  *(undefined4 *)(&DAT_005cebf8 + iVar1) = puVar13[1];
  *(undefined4 *)(&DAT_005cebfc + iVar1) = puVar13[2];
  FUN_00403a70(iVar7,*puVar13,puVar13[1],puVar13[2]);
  FUN_00406390(iVar7);
  FUN_0041eeb0(iVar7);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004210e0 FUN_004210e0 ==== */

void FUN_004210e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar1 = param_1 * 0x294;
  iVar9 = *(int *)(&DAT_005cebe4 + iVar1);
  iVar8 = *(int *)(&DAT_005ceabc + iVar1);
  iVar6 = FUN_0040ebe0();
  if ((iVar8 < 0) || (iVar6 = (*(code *)**(undefined4 **)(iVar6 + 0x24))(), iVar6 <= iVar8)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_004a6980(uVar7,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar8);
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    (&DAT_005cec60)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 0x12;
    iVar8 = __ftol();
    iVar6 = FUN_00558625();
    fVar3 = (float)(iVar6 % 0x29 + -0x14 + iVar8) * 0.01;
    *(float *)(&DAT_005cec68 + iVar1) = fVar3;
    if (*(float *)(&DAT_005cec1c + iVar1) <= 0.0) {
      fVar4 = 100.0;
    }
    else {
      fVar4 = -100.0;
    }
    *(float *)(&DAT_005cec68 + iVar1) = fVar3 * fVar4;
  }
  if (*(int *)(&DAT_005cec3c + iVar1) == 0x12) {
    FUN_00402de0(*(undefined4 *)(&DAT_005cec68 + iVar1));
    iVar9 = *(int *)(&DAT_005ceac0 + (iVar9 + 2) * 0x10 + iVar1);
    if (iVar9 == 1) {
      FUN_00405e90(param_1);
    }
    else if (iVar9 == 2) {
      FUN_00405c80(param_1);
    }
    uVar10 = (int)*(uint *)(&DAT_005cec0c + iVar1) >> 0x1f;
    if ((int)((*(uint *)(&DAT_005cec0c + iVar1) ^ uVar10) - uVar10) < 1) {
      iVar9 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
      iVar8 = DAT_0073b0d0 + iVar9;
      fVar3 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar8 + 0x50 + iVar9 * 0xa8);
      fVar5 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar8 + 0x54 + iVar9 * 0xa8);
      fVar4 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar8 + iVar9 * 0xa8 + 0x58);
      if (40.0 <= SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4)) goto LAB_0042135a;
    }
    iVar9 = FUN_00558625();
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 0x13;
    *(float *)(&DAT_005cec28 + iVar1) = (float)(iVar9 % 3 + 3);
  }
  else if (*(int *)(&DAT_005cec3c + iVar1) == 0x13) {
    iVar8 = FUN_00418890(param_1);
    puVar2 = (undefined4 *)((&DAT_005d2b78)[iVar8 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(undefined4 *)(&DAT_005cebf4 + iVar1) = *puVar2;
    *(undefined4 *)(&DAT_005cebf8 + iVar1) = puVar2[1];
    *(undefined4 *)(&DAT_005cebfc + iVar1) = puVar2[2];
    FUN_00403a70(param_1,*puVar2,puVar2[1],puVar2[2]);
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       (*(int *)(&DAT_005ceac0 + (iVar9 + 2) * 0x10 + iVar1) == 2)) {
      (&DAT_005cec60)[iVar1] = 1;
    }
  }
LAB_0042135a:
  FUN_00406390(param_1);
  FUN_0041eeb0(param_1);
  return;
}


/* ==== 00421550 FUN_00421550 ==== */

undefined4 FUN_00421550(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x294;
  FUN_00405b60((&DAT_005ce9e8)[param_1 * 0xa5],
               (&DAT_005ce9e8 + param_1 * 0xa5)
               [*(int *)(&DAT_005cebe4 + param_1 * 0x294) * 4 + 0x3f]);
  if (*(int *)(&DAT_005cec0c + iVar1) == 0) {
    if ((*(int *)(&DAT_005cea48 + iVar1) == *(int *)(&DAT_005cec50 + iVar1) + -1) ||
       (*(int *)(&DAT_005cea48 + iVar1) == *(int *)(&DAT_005cec50 + iVar1) + 1)) {
      return 1;
    }
  }
  return 0;
}


/* ==== 00421710 FUN_00421710 ==== */

undefined4 FUN_00421710(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407d20(*(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50),
                       *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50)
                      );
  if (((iVar1 < 1) || (iVar1 < 9)) && ((-1 < iVar1 || (iVar1 == -4 || -iVar1 < 4)))) {
    return 0;
  }
  return 1;
}


/* ==== 004217c0 FUN_004217c0 ==== */

undefined4 FUN_004217c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)*(uint *)(&DAT_005cec0c + param_1 * 0x294) >> 0x1f;
  if ((((*(uint *)(&DAT_005cec0c + param_1 * 0x294) ^ uVar2) == uVar2) &&
      (iVar1 = FUN_004235f0(param_1), iVar1 != 0)) &&
     (16.0 <= *(float *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0xc4 + DAT_00715e50))) {
    return 1;
  }
  return 0;
}


/* ==== 00421830 FUN_00421830 ==== */

void FUN_00421830(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar2 = FUN_0040ebe0();
  if (-1 < iVar1) {
    iVar2 = (*(code *)**(undefined4 **)(iVar2 + 0x24))();
    if (iVar1 < iVar2) {
      uVar3 = 1;
      goto LAB_0042186c;
    }
  }
  uVar3 = 0;
LAB_0042186c:
  FUN_004a6980(uVar3,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar1);
  FUN_00426f60((&DAT_005ce9e8)[param_1 * 0xa5]);
  uVar3 = FUN_00425300();
  *(undefined4 *)(&DAT_005cea4c + param_1 * 0x294) = uVar3;
  return;
}


/* ==== 004218b0 FUN_004218b0 ==== */

void FUN_004218b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  float10 fVar15;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  iVar1 = param_1 * 0x294;
  piVar2 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar4 = *(int *)(&DAT_005ceabc + iVar1);
  puVar14 = (undefined4 *)(&DAT_005ceac0 + (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1);
  iVar8 = FUN_0040ebe0();
  if (iVar4 < 0) {
LAB_00421906:
    uVar10 = 0;
  }
  else {
    iVar9 = (*(code *)**(undefined4 **)(iVar8 + 0x24))();
    if (iVar9 <= iVar4) goto LAB_00421906;
    uVar10 = 1;
  }
  FUN_004a6980(uVar10,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar4);
  iVar9 = *(int *)(*(int *)(iVar8 + 0x28) + 4);
  *(undefined4 *)(&DAT_005cec10 + iVar1) = *(undefined4 *)(&DAT_005cec0c + iVar1);
  *(undefined4 *)(&DAT_005cec18 + iVar1) = *(undefined4 *)(&DAT_005cec14 + iVar1);
  uVar10 = FUN_00407d20(*(undefined4 *)(puVar14[1] * 0xf0 + 0x34 + DAT_00715e50),
                        *(undefined4 *)(*piVar2 * 0xf0 + 0x34 + DAT_00715e50));
  *(undefined4 *)(&DAT_005cec0c + iVar1) = uVar10;
  iVar8 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
  iVar13 = DAT_0073b0d0 + iVar8;
  fVar5 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar13 + 0x50 + iVar8 * 0xa8);
  fVar7 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar13 + 0x54 + iVar8 * 0xa8);
  fVar6 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar13 + iVar8 * 0xa8 + 0x58);
  *(float *)(&DAT_005cec14 + iVar1) = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
  piVar3 = (int *)(puVar14[1] * 0xf0 + 0x24 + DAT_00715e50);
  iVar13 = *piVar3 * 0xa9 + DAT_0073b0d0;
  iVar8 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
  fVar5 = *(float *)(iVar8 + DAT_0073b0d0 + 0x50 + iVar8 * 0xa8) - *(float *)(iVar13 + 0x50);
  iVar8 = iVar8 + DAT_0073b0d0 + 0x50 + iVar8 * 0xa8;
  fVar6 = *(float *)(iVar8 + 4) - *(float *)(iVar13 + 0x54);
  fVar7 = *(float *)(iVar8 + 8) - *(float *)(iVar13 + 0x58);
  pfVar11 = (float *)FUN_004b4070(auStack_18,DAT_0073b0d0 + *piVar3 * 0xa9 + 0x10);
  fVar15 = (float10)FUN_0041e120(pfVar11);
  fVar15 = SQRT(fVar15);
  pfVar11 = (float *)FUN_004066c0((float)((float10)*pfVar11 / fVar15),
                                  (float)((float10)pfVar11[1] / fVar15),
                                  (float)((float10)pfVar11[2] / fVar15));
  *(float *)(&DAT_005cec20 + iVar1) = *pfVar11 * fVar5 + pfVar11[1] * fVar6 + pfVar11[2] * fVar7;
  pfVar11 = (float *)FUN_004b3ff0(auStack_c,
                                  DAT_0073b0d0 +
                                  *(int *)(puVar14[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  fVar15 = (float10)FUN_0041e120(pfVar11);
  fVar15 = SQRT(fVar15);
  pfVar11 = (float *)FUN_004066c0((float)((float10)*pfVar11 / fVar15),
                                  (float)((float10)pfVar11[1] / fVar15),
                                  (float)((float10)pfVar11[2] / fVar15));
  *(float *)(&DAT_005cec1c + iVar1) = *pfVar11 * fVar5 + pfVar11[1] * fVar6 + pfVar11[2] * fVar7;
  iVar13 = *piVar2 * 0xf0;
  iVar8 = iVar13 + DAT_00715e50;
  uVar10 = FUN_004aac20(*piVar2,*(undefined4 *)(iVar13 + 0x50 + DAT_00715e50));
  *(undefined4 *)(iVar8 + 0x3c) = uVar10;
  iVar8 = DAT_00715e50 + *piVar2 * 0xf0;
  uVar10 = FUN_00422b90(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x3c));
  *(undefined4 *)(&DAT_005cec58 + iVar1) = uVar10;
  iVar8 = *(int *)(&DAT_005cea34 + iVar1) * 0xf0 + DAT_00715e50;
  FUN_00405ac0(*(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x3c),&DAT_005cec50 + iVar1,0);
  if (*(int *)(&DAT_005cec0c + iVar1) < 1) {
    if (*(int *)(&DAT_005cec0c + iVar1) < 0) {
      *puVar14 = 1;
      goto LAB_00421c17;
    }
    if (0.0 <= *(float *)(&DAT_005cec20 + iVar1)) {
      *puVar14 = 1;
      goto LAB_00421c17;
    }
  }
  *puVar14 = 2;
LAB_00421c17:
  iVar8 = FUN_004188c0(*piVar2);
  puVar14 = (undefined4 *)(iVar8 * 0x50 + 8 + DAT_00715eb8);
  uVar12 = FUN_004031f0(*piVar2,*puVar14,puVar14[1],puVar14[2]);
  fVar5 = (float)(int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f));
  if (500.0 < fVar5) {
    fVar5 = 500.0;
  }
  *(float *)(&DAT_005cec54 + iVar1) = fVar5;
  if (fVar5 <= 20.0) {
    *(undefined4 *)(&DAT_005ceacc + iVar1) = 0x7f7fffff;
  }
  else {
    *(float *)(&DAT_005ceacc + iVar1) =
         (*(float *)(iVar9 + iVar4 * 0x54 + 0x2c) - 8.333334) * (1.0 - fVar5 * 0.002) + 8.333334;
  }
  FUN_00406460(param_1,iVar1 + 0x5cec6c);
  if (1.0 < *(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50)) {
    *(undefined4 *)(&DAT_005cec34 + iVar1) = 0;
    return;
  }
  fVar15 = (float10)FUN_004a6800();
  *(float *)(&DAT_005cec34 + iVar1) = (float)(fVar15 + (float10)*(float *)(&DAT_005cec34 + iVar1));
  return;
}


/* ==== 00421d20 FUN_00421d20 ==== */

void FUN_00421d20(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x294;
  FUN_00402ea0(*(undefined4 *)(&DAT_005cead4 + param_1 * 0x294));
  FUN_00402e40(*(undefined4 *)(&DAT_005cead8 + iVar1));
  FUN_00403040((&DAT_005ceadc)[iVar1]);
  FUN_00403100((&DAT_005ceadd)[iVar1]);
  return;
}


/* ==== 00421d80 FUN_00421d80 ==== */

undefined4 FUN_00421d80(int param_1)

{
  int iVar1;
  int j;
  undefined4 uVar2;
  int i;
  float *pfVar3;
  undefined4 local_18 [6];
  
  local_18[2] = 0x28;
  local_18[3] = 0x28;
  local_18[4] = 0x28;
  local_18[5] = 0x28;
  local_18[0] = 0x26;
  local_18[1] = 0x27;
  i = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = FUN_0040ebe0();
  if ((i < 0) || (j = (*(code *)**(undefined4 **)(iVar1 + 0x24))(), j <= i)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_004a6980(uVar2,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,i);
  j = 3;
  pfVar3 = (float *)(*(int *)(*(int *)(iVar1 + 0x28) + 4) + i * 0x54 + 0x38);
  do {
    i = __ftol();
    j = j + -1;
  } while (j != 0);
  param_1 = FUN_00558625();
  param_1 = param_1 % i;
  i = 0;
  do {
    if ((float)param_1 < *pfVar3) {
      if (i < 3) goto LAB_00421e88;
      break;
    }
    param_1 = __ftol();
    i = i + 1;
    pfVar3 = pfVar3 + 1;
  } while (i < 3);
  FUN_004c4150(s__s__d____Error_generating_behavi_0059506c,
               s_C__Work_A2IV_Game_prog_ai_superc_00595044,0xdab);
LAB_00421e88:
  return local_18[i];
}


/* ==== 00421eb0 FUN_00421eb0 ==== */

void FUN_00421eb0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00421ec0 FUN_00421ec0 ==== */

void FUN_00421ec0(void)

{
  FUN_005584e0(&LAB_00421ed0);
  return;
}


/* ==== 00421ef0 FUN_00421ef0 ==== */

void FUN_00421ef0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00421f00 FUN_00421f00 ==== */

void FUN_00421f00(void)

{
  FUN_005584e0(&LAB_00421f10);
  return;
}


