/* spel.dat — game/Car_cops.cpp: 14 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004235f0 FUN_004235f0 ==== */

byte FUN_004235f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_005cea34 + param_1 * 0x294);
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + DAT_00715e50;
  iVar1 = FUN_00422b90(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x3c));
  iVar2 = iVar2 * 0xf0 + DAT_00715e50;
  iVar2 = FUN_00422b90(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x3c));
  if (iVar1 < iVar2) {
    return 1;
  }
  return (iVar1 <= iVar2) - 1U & 2;
}


/* ==== 00423740 FUN_00423740 ==== */

void FUN_00423740(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00423750 FUN_00423750 ==== */

void FUN_00423750(void)

{
  FUN_005584e0(&LAB_00423760);
  return;
}


/* ==== 00423780 FUN_00423780 ==== */

void FUN_00423780(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00423790 FUN_00423790 ==== */

void FUN_00423790(void)

{
  FUN_005584e0(&LAB_004237a0);
  return;
}


/* ==== 004237b0 FUN_004237b0 ==== */

undefined4 FUN_004237b0(void)

{
  char cVar1;
  undefined3 uVar2;
  undefined3 extraout_var;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = (undefined4 *)PTR_s_CarHorn_005a7dc8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569f38;
  local_c = ExceptionList;
  i = 0xffffffff;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar4 = PTR_s_CarHorn_005a7dc8;
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
    local_14 = i;
  }
  puVar7 = local_1c;
  uVar8 = 0;
  local_4 = 0;
  FUN_004ea0c0(puVar7,0);
  fVar6 = (float10)FUN_004eadd0(puVar7,uVar8);
  uVar2 = 0;
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    uVar2 = (undefined3)((uint)local_18 >> 8);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_18 + -1));
      uVar2 = extraout_var;
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar2,(float10)0.0 < fVar6);
}


/* ==== 00423890 FUN_00423890 ==== */

void FUN_00423890(void)

{
  int i;
  undefined4 *puVar1;
  
  puVar1 = &DAT_005d33ec;
  for (i = 0x14; i != 0; i = i + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  DAT_005d3440 = 1;
  return;
}


/* ==== 004238b0 FUN_004238b0 ==== */

int FUN_004238b0(void)

{
  int i;
  int *piVar1;
  
  if (DAT_005d3440 == 0) {
    FUN_004c4150(s__s___d__Array_of_active_cops_not_005958a8,
                 s_C__Work_A2IV_Game_prog_Car_cops__00595884,0x60);
  }
  i = 0;
  piVar1 = &DAT_005d33ec;
  do {
    if (*piVar1 == -1) {
      return i;
    }
    piVar1 = piVar1 + 1;
    i = i + 1;
  } while ((int)piVar1 < 0x5d343c);
  return -1;
}


/* ==== 004238f0 FUN_004238f0 ==== */

int FUN_004238f0(int param_1)

{
  int i;
  int *piVar1;
  
  if (DAT_005d3440 == 0) {
    FUN_004c4150(s__s___d__Array_of_active_cops_not_005958fc,
                 s_C__Work_A2IV_Game_prog_Car_cops__005958d8,0x80);
  }
  i = 0;
  piVar1 = &DAT_005d33ec;
  do {
    if (*piVar1 == param_1) {
      return i;
    }
    piVar1 = piVar1 + 1;
    i = i + 1;
  } while ((int)piVar1 < 0x5d343c);
  return -1;
}


/* ==== 00423930 FUN_00423930 ==== */

void FUN_00423930(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (DAT_005d3440 == 0) {
    FUN_004c4150(s__s___d__Array_of_active_cops_not_00595950,
                 s_C__Work_A2IV_Game_prog_Car_cops__0059592c,0xa1);
  }
  if (param_2 == 0) {
    FUN_004238f0(param_1);
  }
  else {
    iVar1 = FUN_004238f0(param_1);
    if (iVar1 == -1) {
      iVar1 = FUN_004238b0();
      if (iVar1 != -1) {
        (&DAT_005d33ec)[iVar1] = param_1;
        return;
      }
    }
  }
  return;
}


/* ==== 00423990 FUN_00423990 ==== */

void FUN_00423990(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    DAT_005d3444 = DAT_005d3444 + -1;
    if (DAT_005d3444 < 0) {
      DAT_005d3444 = 0;
    }
  }
  else {
    DAT_005d3444 = DAT_005d3444 + 1;
  }
  FUN_00423930(param_1,param_2);
  DAT_005d343c = (uint)(DAT_005d3444 != 0);
  return;
}


/* ==== 004239e0 FUN_004239e0 ==== */

void FUN_004239e0(void)

{
  DWORD DVar1;
  DWORD DVar2;
  
  if (DAT_005d343c != 0) {
    DVar1 = GetTickCount();
    DVar2 = GetTickCount();
    if (199 < DVar2 - DAT_005d344c) {
      DAT_005d3448 = (uint)(DAT_005d3448 == 0);
      DAT_005d344c = DVar1;
    }
  }
  return;
}


/* ==== 00423a30 FUN_00423a30 ==== */

void FUN_00423a30(void)

{
  FUN_00406eb0();
  FUN_00407090();
  FUN_00423890();
  return;
}


/* ==== 00423a50 FUN_00423a50 ==== */

void FUN_00423a50(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00569f58;
  local_c = ExceptionList;
  local_4 = 0;
  iVar4 = param_1 * 0xf0;
  ExceptionList = &local_c;
  *(undefined4 *)(iVar4 + 0x38 + DAT_00715e50) = *(undefined4 *)(iVar4 + 0x34 + DAT_00715e50);
  if (DAT_006fb8e8 == 0) {
    if (DAT_006fb954 != 1) {
      *(undefined4 *)(iVar4 + 0x50 + DAT_00715e50) = 1;
      goto LAB_00423ad4;
    }
  }
  else if (DAT_006fb954 == 1) {
    *(undefined4 *)(iVar4 + 0x50 + DAT_00715e50) = 1;
    goto LAB_00423ad4;
  }
  *(undefined4 *)(iVar4 + 0x50 + DAT_00715e50) = 0;
LAB_00423ad4:
  iVar3 = iVar4 + DAT_00715e50;
  uVar2 = FUN_004aac20(param_1,*(undefined4 *)(iVar4 + 0x50 + DAT_00715e50));
  *(undefined4 *)(iVar3 + 0x3c) = uVar2;
  *(code **)(iVar4 + 0x6c + DAT_00715e50) = FUN_00407300;
  iVar3 = FUN_00424660(&param_2);
  FUN_00429320(param_1);
  FUN_004292e0(param_1);
  FUN_00429710(iVar3,param_1,0,0,0,0,(float)*(int *)(iVar3 + 0x40),0x3d4ccccd,0,0,0,0,0,FUN_0044f970
               ,0);
  FUN_0042a7f0(param_1);
  FUN_004353e0(*(undefined4 *)(iVar3 + 0x44),param_1);
  FUN_00436b90(param_1);
  FUN_004a7190(param_1);
  *(undefined4 *)(iVar4 + 0x68 + DAT_00715e50) = 1;
  FUN_00450b00(param_1,s_POLITIE_SIRENE_00595980);
  FUN_00426bb0(param_1,4,iVar3 + 0x50);
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_3 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(param_3 + -1);
  }
  ExceptionList = local_c;
  return;
}


