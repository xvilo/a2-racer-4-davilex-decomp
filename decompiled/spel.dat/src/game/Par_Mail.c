/* spel.dat — game/Par_Mail.cpp: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045cd70 FUN_0045cd70 ==== */

void FUN_0045cd70(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int i;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 auStack_138 [9];
  undefined4 uStack_114;
  char *pcStack_110;
  char *pcStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  undefined4 *puStack_f8;
  undefined1 local_e8 [64];
  undefined4 local_a8 [16];
  undefined4 local_68 [12];
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_24;
  undefined4 local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a96d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  i = *(int *)(in_ECX + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  while (iVar3 = local_18, i != 0) {
    puStack_f8 = (undefined4 *)0x45cdb5;
    pfVar4 = (float *)FUN_0045e090();
    local_24 = *pfVar4;
    puStack_f8 = (undefined4 *)0x45cdc1;
    i = FUN_0045e090();
    local_20 = *(undefined4 *)(i + 4);
    puStack_f8 = (undefined4 *)0x45cdce;
    i = FUN_0045e090();
    uVar2 = local_20;
    fVar1 = *(float *)(i + 8);
    puVar5 = (undefined4 *)(iVar3 + 0x10);
    puVar6 = local_68;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_38 = local_38 + local_24;
    local_30 = local_30 + fVar1;
    local_34 = uVar2;
    puStack_f8 = (undefined4 *)0x45cdfe;
    puStack_f8 = (undefined4 *)FUN_0045e0a0();
    puVar5 = local_68;
    puVar6 = auStack_138;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)FUN_00460730(local_e8);
    puVar6 = local_a8;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puStack_f8 = &DAT_0073b474;
    puVar5 = local_a8;
    puVar6 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uStack_fc = 1;
    piStack_100 = DAT_0073b4b4;
    iStack_104 = 0x45ce50;
    iStack_104 = (**(code **)(*DAT_0073b4b4 + 0x68))();
    if (iStack_104 != 0) {
      uStack_108 = 0x45ce5a;
      iStack_104 = FUN_004bb290();
      uStack_108 = 0x14;
      pcStack_10c = s_______Libs_Win3DLib_Include_d3de_00591314;
      pcStack_110 = s__s__d_____FOG__error_setting_tra_005912e0;
      uStack_114 = 0x45ce6f;
      FUN_004c4150();
    }
    iStack_104 = 0x45ce79;
    FUN_0045d070();
    puStack_f8 = (undefined4 *)0x45ce80;
    i = FUN_0045e0d0();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 0045cf00 FUN_0045cf00 ==== */

void FUN_0045cf00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  FUN_0045ded0(param_1,param_2,param_3,param_4);
  *in_ECX = &PTR_LAB_005768dc;
  return;
}


/* ==== 0045cf30 FUN_0045cf30 ==== */

undefined2 FUN_0045cf30(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float10 fVar4;
  float10 extraout_ST0;
  
  fVar1 = param_1 + *(float *)(in_ECX + 4);
  *(float *)(in_ECX + 4) = fVar1;
  if (*(float *)(in_ECX + 8) < fVar1) {
    return 0;
  }
  if (*(float *)(in_ECX + 0x10) <= param_2 + 0.11) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    *(float *)(in_ECX + 0x10) = param_2 + 0.1;
    return 1;
  }
  fVar1 = (*(float *)(in_ECX + 0x18) / *(float *)(in_ECX + 0x30)) * param_1 +
          *(float *)(in_ECX + 0x34);
  *(float *)(in_ECX + 0x34) = fVar1;
  fVar2 = ((*(float *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x30) * 20.0) /
          *(float *)(in_ECX + 0x30)) * param_1 + *(float *)(in_ECX + 0x38);
  *(float *)(in_ECX + 0x38) = fVar2;
  fVar3 = (*(float *)(in_ECX + 0x20) / *(float *)(in_ECX + 0x30)) * param_1 +
          *(float *)(in_ECX + 0x3c);
  *(float *)(in_ECX + 0x3c) = fVar3;
  *(float *)(in_ECX + 0xc) = fVar1 * param_1 + *(float *)(in_ECX + 0xc);
  *(float *)(in_ECX + 0x10) = fVar2 * param_1 + *(float *)(in_ECX + 0x10);
  *(float *)(in_ECX + 0x14) = fVar3 * param_1 + *(float *)(in_ECX + 0x14);
  fVar4 = (float10)FUN_004602e0(0xbd4ccccd,0x3e800000);
  *(float *)(in_ECX + 0x24) = (float)(fVar4 + (float10)*(float *)(in_ECX + 0x24));
  fVar4 = (float10)FUN_004602e0(0xbd4ccccd,0x3e800000);
  *(float *)(in_ECX + 0x28) = (float)(fVar4 + (float10)*(float *)(in_ECX + 0x28));
  FUN_004602e0(0xbd4ccccd,0x3e800000);
  *(float *)(in_ECX + 0x2c) = (float)(extraout_ST0 + (float10)*(float *)(in_ECX + 0x2c));
  return 1;
}


