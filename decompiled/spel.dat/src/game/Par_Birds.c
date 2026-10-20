/* spel.dat — game/Par_Birds.cpp: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00459280 FUN_00459280 ==== */

void FUN_00459280(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int i;
  undefined4 uVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_68 [12];
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_28;
  undefined4 local_24;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a7fd;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  i = *(int *)(in_ECX + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  while (iVar2 = local_18, i != 0) {
    pfVar3 = (float *)FUN_0045e090();
    local_28 = *pfVar3;
    i = FUN_0045e090();
    local_24 = *(undefined4 *)(i + 4);
    i = FUN_0045e090();
    uVar4 = local_24;
    fVar1 = *(float *)(i + 8);
    puVar5 = (undefined4 *)(iVar2 + 0x10);
    puVar6 = local_68;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_38 = local_38 + local_28;
    local_30 = local_30 + fVar1;
    local_34 = uVar4;
    puVar5 = local_68;
    puVar6 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (i != 0) {
      uVar4 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar4);
    }
    FUN_00459580();
    i = FUN_0045e0d0();
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004593e0 FUN_004593e0 ==== */

void FUN_004593e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 __ftol_result;
  undefined4 *in_ECX;
  float10 fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a80f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045ded0(param_1,param_2,param_3,param_4);
  local_4 = 0;
  *in_ECX = &PTR_LAB_00576840;
  iVar1 = FUN_004b75a0(s_par_Bird_005a5130);
  in_ECX[0x18] = iVar1;
  FUN_004602e0(0,(float)*(int *)(DAT_0073b168 + iVar1 * 9) - 1.0);
  __ftol_result = __ftol();
  in_ECX[0x19] = __ftol_result;
  fVar2 = (float10)FUN_004602e0(0,0x3dcccccd);
  in_ECX[0x1c] = (float)fVar2;
  FUN_004602e0(0,0x3f800000);
  __ftol_result = __ftol();
  in_ECX[0x1d] = __ftol_result;
  ExceptionList = local_c;
  return;
}


/* ==== 004594a0 FUN_004594a0 ==== */

int FUN_004594a0(float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  undefined2 uVar4;
  int i;
  uint3 uVar3;
  int in_ECX;
  
  uVar4 = (undefined2)((uint)in_EAX >> 0x10);
  if (0.025 < *(float *)(in_ECX + 0x70)) {
    if (*(int *)(in_ECX + 0x74) == 0) {
      i = *(int *)(in_ECX + 100);
      if (i < *(int *)(DAT_0073b168 + *(int *)(in_ECX + 0x60) * 9) + -1) {
        i = i + 1;
        *(int *)(in_ECX + 100) = i;
      }
      else {
        i = i + -1;
        *(undefined4 *)(in_ECX + 0x74) = 1;
        *(int *)(in_ECX + 100) = i;
      }
    }
    else {
      i = *(int *)(in_ECX + 100);
      if (i < 1) {
        i = i + 1;
        *(undefined4 *)(in_ECX + 0x74) = 0;
        *(int *)(in_ECX + 100) = i;
      }
      else {
        i = i + -1;
        *(int *)(in_ECX + 100) = i;
      }
    }
    uVar4 = (undefined2)((uint)i >> 0x10);
    *(undefined4 *)(in_ECX + 0x70) = 0;
  }
  *(float *)(in_ECX + 0x70) = param_1 + *(float *)(in_ECX + 0x70);
  fVar2 = param_1 + *(float *)(in_ECX + 4);
  *(float *)(in_ECX + 4) = fVar2;
  fVar1 = *(float *)(in_ECX + 8);
  uVar3 = (uint3)(CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar2 == fVar1) << 0xe) >> 8);
  if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
    return (uint)uVar3 << 8;
  }
  *(float *)(in_ECX + 0xc) = param_1 * *(float *)(in_ECX + 0x34) + *(float *)(in_ECX + 0xc);
  *(float *)(in_ECX + 0x10) = param_1 * *(float *)(in_ECX + 0x38) + *(float *)(in_ECX + 0x10);
  *(float *)(in_ECX + 0x14) = param_1 * *(float *)(in_ECX + 0x3c) + *(float *)(in_ECX + 0x14);
  return CONCAT31(uVar3,1);
}


/* ==== 00459560 FUN_00459560 ==== */

void FUN_00459560(undefined4 param_1,undefined4 param_2)

{
  FUN_004594a0(param_1,param_2);
  return;
}


/* ==== 00459580 FUN_00459580 ==== */

void FUN_00459580(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x00459582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 4))();
  return;
}


