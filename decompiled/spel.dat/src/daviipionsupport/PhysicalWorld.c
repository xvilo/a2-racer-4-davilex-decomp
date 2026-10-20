/* spel.dat — daviipionsupport/PhysicalWorld.cpp: 71 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a24d0 FUN_004a24d0 ==== */

void FUN_004a24d0(void)

{
  undefined4 *in_ECX;
  
  FUN_004a1490();
  *in_ECX = &PTR_FUN_00577220;
  in_ECX[0x1d] = 0;
  in_ECX[0x39] = 0;
  *(undefined1 *)(in_ECX + 0x3a) = 0;
  return;
}


/* ==== 004a2500 thunk_FUN_004a14c0 ==== */

void thunk_FUN_004a14c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_005771fc;
  return;
}


/* ==== 004a2510 FUN_004a2510 ==== */

void FUN_004a2510(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x30) + 8))(param_1,param_2);
  return;
}


/* ==== 004a2530 FUN_004a2530 ==== */

void FUN_004a2530(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x30) + 0xc))(param_1,param_2);
  return;
}


/* ==== 004a2550 FUN_004a2550 ==== */

void FUN_004a2550(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x10))(param_1,param_2);
  return;
}


/* ==== 004a2570 FUN_004a2570 ==== */

void FUN_004a2570(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x1c))(param_1,param_2);
  return;
}


/* ==== 004a2590 FUN_004a2590 ==== */

void FUN_004a2590(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  void *operator_new_result;
  int *piVar11;
  int in_ECX;
  int j;
  uint k;
  uint m;
  int n;
  float *pfVar12;
  float unaff_EBX;
  float unaff_EBP;
  float unaff_ESI;
  char *pcVar13;
  char *pcVar14;
  int *piVar15;
  float10 fVar16;
  float *local_38c;
  int i;
  int *local_384;
  int local_380;
  undefined1 local_36c [4];
  char *local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined1 local_35c [4];
  int local_358;
  undefined4 local_354;
  undefined4 local_350;
  float local_34c [8];
  float fStack_32c;
  float local_31c [12];
  undefined4 local_2ec [7];
  int local_2d0 [10];
  float local_2a8 [10];
  float local_280 [10];
  int local_258 [10];
  undefined4 uStack_230;
  float fStack_22c;
  undefined4 uStack_224;
  float local_218 [38];
  float local_180 [10];
  int local_158 [10];
  int local_130 [10];
  int local_108 [21];
  undefined4 auStack_b4 [5];
  float afStack_a0 [5];
  undefined4 local_8c [16];
  undefined1 local_4c [32];
  void *pvStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eea2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a14f0(param_1,param_2);
  local_384 = (int *)(param_1 + 0x228);
  local_38c = (float *)(in_ECX + 0x44);
  i = 0;
  do {
    puVar7 = (undefined4 *)FUN_004a1e20(local_4c);
    puVar10 = local_8c;
    for (j = 0x10; j != 0; j = j + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    pfVar8 = (float *)FUN_004a5b30(local_35c,local_384,local_8c);
    fVar3 = pfVar8[1];
    fVar4 = pfVar8[2];
    fVar1 = param_2[1];
    *(float *)((int)local_31c + i) = *pfVar8 + *param_2;
    fVar2 = param_2[2];
    *(float *)((int)local_31c + i + 4) = fVar3 + fVar1;
    *(float *)((int)local_31c + i + 8) = fVar4 + fVar2;
    *local_38c = (float)*local_384;
    local_38c[1] = (float)local_384[1];
    local_38c[2] = (float)local_384[2];
    *(int *)((int)local_34c + i) = *local_384;
    *(int *)((int)local_34c + i + 4) = local_384[1];
    *(int *)((int)local_34c + i + 8) = local_384[2];
    FUN_004a4180((int)local_34c + i);
    i = i + 0xc;
    local_38c = local_38c + 3;
    local_384 = local_384 + 3;
  } while (i < 0x30);
  local_38c = local_31c;
  local_384 = (int *)(in_ECX + 0x34);
  i = 0;
  do {
    if (i < 2) {
      k = 0xffffffff;
      local_358 = 0;
      pcVar13 = s_RealObject_005af178;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar6 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar6 != '\0');
      local_354 = 0;
      local_350 = 0;
      FUN_00402940(s_RealObject_005af178,~k - 1);
      local_4 = 0;
      uVar9 = FUN_004a4400(local_35c,param_1 + 0xb8,local_38c);
      local_4 = 0xffffffff;
      *local_384 = uVar9;
      if (local_358 != 0) {
        cVar6 = *(char *)(local_358 + -1);
        if ((cVar6 != '\0') && (cVar6 != -1)) {
          *(char *)(local_358 + -1) = cVar6 + -1;
          local_358 = 0;
          local_354 = 0;
          local_350 = 0;
          goto LAB_004a285b;
        }
        FUN_0054b339((char *)(local_358 + -1));
      }
      local_358 = 0;
      local_354 = 0;
      local_350 = 0;
    }
    else {
      k = 0xffffffff;
      pcVar13 = s_RealObject_005af178;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar6 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar6 != '\0');
      k = ~k - 1;
      local_368 = (char *)0x0;
      local_364 = 0;
      local_360 = 0;
      cVar6 = FUN_00402a00(k,1);
      if (cVar6 != '\0') {
        pcVar13 = s_RealObject_005af178;
        pcVar14 = local_368;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (m = k & 3; m != 0; m = m - 1) {
          *pcVar14 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_004029e0(k);
      }
      local_4 = 1;
      uVar9 = FUN_004a4400(local_36c,param_1 + 0x170,local_38c);
      local_4 = 0xffffffff;
      *local_384 = uVar9;
      if (local_368 != (char *)0x0) {
        cVar6 = local_368[-1];
        if ((cVar6 == '\0') || (cVar6 == -1)) {
          FUN_0054b339(local_368 + -1);
        }
        else {
          local_368[-1] = cVar6 + -1;
        }
      }
      local_368 = (char *)0x0;
      local_364 = 0;
      local_360 = 0;
    }
LAB_004a285b:
    i = i + 1;
    local_384 = local_384 + 1;
    local_38c = local_38c + 3;
  } while (i < 4);
  j = 0;
  puVar7 = local_2ec;
  for (n = 0x98; n != 0; n = n + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_2ec[0] = 4;
  local_2ec[1] = 2;
  piVar11 = local_258;
  do {
    *piVar11 = 0x3f800000;
    j = j + 1;
    piVar11 = piVar11 + 1;
  } while (j < 4);
  local_2ec[4] = 2;
  local_2ec[6] = *(undefined4 *)(in_ECX + 8);
  pfVar8 = local_34c + 1;
  pfVar12 = local_218;
  local_384 = (int *)(in_ECX + 0x34);
  local_2ec[2] = 0;
  local_2ec[5] = 0;
  local_2ec[3] = 1;
  local_380 = 4;
  piVar11 = (int *)(param_1 + 0x2a0);
  piVar15 = local_2d0;
  do {
    fVar1 = pfVar8[1];
    fVar2 = *pfVar8;
    fVar3 = pfVar8[-1];
    *piVar15 = *(int *)(*local_384 + 8);
    piVar15[0x1e] = 0x3f800000;
    pfVar12[-1] = fVar2;
    pfVar12[-2] = fVar3;
    *pfVar12 = fVar1;
    fVar16 = (float10)(**(code **)**(undefined4 **)(*piVar15 + 0x98))();
    piVar15[10] = (int)(float)fVar16;
    fVar1 = *(float *)(*(int *)(*piVar15 + 0xa4) + 4);
    piVar15[0x14] = (int)fVar1;
    *(float *)(in_ECX + 0x74) = fVar1 + *(float *)(in_ECX + 0x74);
    j = *piVar11;
    n = piVar11[4];
    piVar15[0x54] = piVar11[-4];
    iVar5 = piVar11[8];
    piVar15[0x5e] = j;
    piVar15[0x68] = n;
    piVar15[0x72] = iVar5;
    local_384 = local_384 + 1;
    pfVar8 = pfVar8 + 3;
    pfVar12 = pfVar12 + 4;
    local_380 = local_380 + -1;
    piVar11 = piVar11 + 1;
    piVar15 = piVar15 + 1;
  } while (local_380 != 0);
  puVar7 = (undefined4 *)(param_1 + 0x2d0);
  pfVar8 = local_280;
  j = 2;
  *(float *)(in_ECX + 0x74) = *(float *)(in_ECX + 0x74) * 0.25;
  fVar1 = *(float *)(param_1 + 0x2fc);
  puVar10 = auStack_b4;
  do {
    fVar2 = *pfVar8;
    uVar9 = *puVar7;
    pfVar8 = pfVar8 + 2;
    puVar7 = puVar7 + 1;
    j = j + -1;
    puVar10[5] = (fVar1 * 0.2777778) / fVar2;
    *puVar10 = uVar9;
    puVar10 = puVar10 + 1;
  } while (j != 0);
  uStack_230 = *(undefined4 *)(param_1 + 0x25c);
  uStack_224 = *(undefined4 *)(param_1 + 0x264);
  j = *(int *)(*(int *)(in_ECX + 0x2c) + 0x14);
  fStack_22c = *(float *)(param_1 + 0x268) * (float)*(double *)(param_1 + 0x18) *
               (float)*(double *)(j + 0xd8);
  if (*(char *)(param_1 + 600) == '\0') {
    operator_new_result = operator_new(0x140);
    local_4 = 3;
    if (operator_new_result != (void *)0x0) {
      piVar11 = (int *)FUN_004fc4f0(*(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x14),local_2ec);
      goto LAB_004a2ac5;
    }
  }
  else {
    operator_new_result = operator_new(0x65c);
    local_4 = 2;
    if (operator_new_result != (void *)0x0) {
      piVar11 = (int *)FUN_004a5e70(*(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x14),local_2ec);
      goto LAB_004a2ac5;
    }
  }
  piVar11 = (int *)0x0;
LAB_004a2ac5:
  *(int **)(in_ECX + 0x30) = piVar11;
  local_4 = 0xffffffff;
  fStack_32c = *(float *)(param_1 + 0xa4) + fStack_32c;
  fVar1 = (((float)*(double *)(j + 0xd8) / local_180[0]) * -fStack_32c * 0.5) /
          (fStack_32c - (local_34c[2] + *(float *)(param_1 + 0xa4)));
  (**(code **)(*piVar11 + 0x18))(0,fVar1);
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))(1,fVar1);
  fVar1 = (unaff_EBP * unaff_EBX * 0.5) / unaff_ESI;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))(2,fVar1);
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))(3,fVar1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 0x324);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0x33c);
  ExceptionList = pvStack_2c;
  return;
}


/* ==== 004a2e30 FUN_004a2e30 ==== */

void FUN_004a2e30(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x2c))(param_1,1);
  return;
}


/* ==== 004a2e50 FUN_004a2e50 ==== */

void FUN_004a2e50(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x2c))(param_1,0);
  return;
}


/* ==== 004a2e70 FUN_004a2e70 ==== */

float10 FUN_004a2e70(int param_1)

{
  float *pfVar1;
  undefined1 local_c [12];
  
  if ((0 < param_1) && (param_1 < 4)) {
    pfVar1 = (float *)FUN_004a1ee0(local_c);
    return (float10)*pfVar1;
  }
  return (float10)0.0;
}


/* ==== 004a2eb0 FUN_004a2eb0 ==== */

float10 FUN_004a2eb0(int param_1)

{
  float10 fVar1;
  
  if ((0 < param_1) && (param_1 < 4)) {
    fVar1 = (float10)FUN_004f3120();
    return fVar1;
  }
  return (float10)1.0;
}


/* ==== 004a2ee0 FUN_004a2ee0 ==== */

void FUN_004a2ee0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((0 < param_2) && (param_2 < 4)) {
    puVar1 = (undefined4 *)(in_ECX + 0x44 + param_2 * 0xc);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ==== 004a2f50 FUN_004a2f50 ==== */

float10 FUN_004a2f50(float param_1)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0xa4 + *(int *)(in_ECX + 0xe4) * 4) *
         (float10)*(float *)(in_ECX + 0xa0) * (float10)param_1 * (float10)60.0;
}


/* ==== 004a2f70 FUN_004a2f70 ==== */

undefined4 FUN_004a2f70(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  float unaff_ESI;
  int i;
  float10 fVar7;
  float fVar8;
  
  fVar6 = param_1 * -0.01;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x30))(2);
  fVar8 = 0.0;
  i = 0;
  do {
    fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x30) + 0x34))(i);
    i = i + 1;
    fVar8 = (float)(ABS(fVar7) + (float10)fVar8);
  } while (i < 4);
  fVar8 = fVar8 * 0.63661975;
  fVar7 = (float10)FUN_004a2f50(fVar8);
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  if ((float10)*(float *)(in_ECX + 0x84) < fVar7) {
    do {
      if (*(int *)(in_ECX + 0xc0) + -1 <= *(int *)(in_ECX + 0xe4)) break;
      *(int *)(in_ECX + 0xe4) = *(int *)(in_ECX + 0xe4) + 1;
      fVar7 = (float10)FUN_004a2f50(fVar8);
    } while ((float10)*(float *)(in_ECX + 0x84) < fVar7);
  }
  if (fVar7 < (float10)*(float *)(in_ECX + 0x88)) {
    do {
      if (*(int *)(in_ECX + 0xe4) < 1) break;
      *(int *)(in_ECX + 0xe4) = *(int *)(in_ECX + 0xe4) + -1;
      fVar7 = (float10)FUN_004a2f50(fVar8);
    } while (fVar7 < (float10)*(float *)(in_ECX + 0x88));
  }
  fVar7 = (float10)FUN_004a2f50(fVar8);
  i = 0;
  *(float *)(in_ECX + 0xbc) = (float)fVar7;
  fVar8 = *(float *)(in_ECX + 0xa4 + *(int *)(in_ECX + 0xe4) * 4);
  fVar1 = *(float *)(in_ECX + 0xa0);
  fVar2 = *(float *)(in_ECX + 0x80);
  fVar3 = *(float *)(in_ECX + 0x84);
  fVar4 = *(float *)(in_ECX + 0x74);
  do {
    if (i < 2) {
      fVar5 = *(float *)(in_ECX + 0x8c);
    }
    else {
      fVar5 = 1.0 - *(float *)(in_ECX + 0x8c);
    }
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x20))
              (i,fVar5 * *(float *)(in_ECX + 0x74) *
                 ((fVar8 * fVar1 * fVar2 * unaff_ESI * 447420.0) / (fVar3 * fVar4 * 6.2831855)) *
                 -0.5);
    i = i + 1;
  } while (i < 4);
  if (param_1 != 0.0) {
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x30))(2);
    i = 0;
    do {
      (**(code **)(**(int **)(in_ECX + 0x30) + 0x34))(i);
      (**(code **)(**(int **)(in_ECX + 0x30) + 0x20))
                (i,-(*(float *)(in_ECX + 0x90 + (i / 2) * 4) * *(float *)(in_ECX + 0x74) * fVar6 *
                    0.5));
      i = i + 1;
    } while (i < 4);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x24))();
  }
  param_2._0_1_ = SUB41(param_2 * 0.01,0);
  if (param_2._0_1_ == '\0') {
    if (*(char *)(in_ECX + 0xe8) != '\0') {
      *(undefined1 *)(in_ECX + 0xe8) = 0;
      FUN_004a2e50(2);
      FUN_004a2e50(3);
    }
  }
  else if (*(char *)(in_ECX + 0xe8) == '\0') {
    *(undefined1 *)(in_ECX + 0xe8) = 1;
    FUN_004a2e30(2);
    FUN_004a2e30(3);
  }
  return CONCAT31((int3)((uint)fVar6 >> 8),fVar6 != *(float *)(in_ECX + 0xe4));
}


/* ==== 004a31d0 FUN_004a31d0 ==== */

void FUN_004a31d0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x3c))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))();
  return;
}


/* ==== 004a31f0 FUN_004a31f0 ==== */

float10 FUN_004a31f0(void)

{
  float *pfVar1;
  int in_ECX;
  undefined1 local_c [12];
  
  pfVar1 = (float *)FUN_004a1d20(local_c);
  return ABS((float10)*pfVar1) * (float10)*(float *)(in_ECX + 0xa4 + *(int *)(in_ECX + 0xe4) * 4) *
         (float10)*(float *)(in_ECX + 0xa0) * (float10)60.0;
}


/* ==== 004a3240 FUN_004a3240 ==== */

void FUN_004a3240(float param_1)

{
  int in_ECX;
  
  *(float *)(in_ECX + 0x78) = param_1 * 0.017453292;
  return;
}


/* ==== 004a3250 FUN_004a3250 ==== */

void FUN_004a3250(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x7c) = param_1;
  return;
}


/* ==== 004a3260 FUN_004a3260 ==== */

void FUN_004a3260(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x90) = param_1;
  return;
}


/* ==== 004a3270 FUN_004a3270 ==== */

void FUN_004a3270(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x94) = param_1;
  return;
}


/* ==== 004a3280 FUN_004a3280 ==== */

void FUN_004a3280(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x98) = param_1;
  return;
}


/* ==== 004a3290 FUN_004a3290 ==== */

void FUN_004a3290(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xa0) = param_1;
  return;
}


/* ==== 004a32a0 FUN_004a32a0 ==== */

void FUN_004a32a0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x8c) = param_1;
  return;
}


/* ==== 004a32b0 FUN_004a32b0 ==== */

void FUN_004a32b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x80) = param_1;
  return;
}


/* ==== 004a32c0 FUN_004a32c0 ==== */

void FUN_004a32c0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x84) = param_1;
  return;
}


/* ==== 004a32d0 FUN_004a32d0 ==== */

void FUN_004a32d0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x88) = param_1;
  return;
}


/* ==== 004a32e0 FUN_004a32e0 ==== */

void FUN_004a32e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x9c) = param_1;
  return;
}


/* ==== 004a32f0 FUN_004a32f0 ==== */

void FUN_004a32f0(int param_1)

{
  int in_ECX;
  
  if (param_1 < 7) {
    *(int *)(in_ECX + 0xc0) = param_1;
  }
  return;
}


/* ==== 004a3310 FUN_004a3310 ==== */

void FUN_004a3310(int param_1,float param_2)

{
  int in_ECX;
  
  if (0.0 <= param_2) {
    *(float *)(in_ECX + 0xa4 + param_1 * 4) = param_2;
  }
  return;
}


/* ==== 004a3340 FUN_004a3340 ==== */

void FUN_004a3340(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xd0) = param_1;
  return;
}


/* ==== 004a3350 FUN_004a3350 ==== */

void FUN_004a3350(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc4) = param_1;
  return;
}


/* ==== 004a3360 FUN_004a3360 ==== */

void FUN_004a3360(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 200) = param_1;
  return;
}


/* ==== 004a3370 FUN_004a3370 ==== */

void FUN_004a3370(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xcc) = param_1;
  return;
}


/* ==== 004a3380 FUN_004a3380 ==== */

void FUN_004a3380(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xe0) = param_1;
  return;
}


/* ==== 004a3390 FUN_004a3390 ==== */

void FUN_004a3390(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xd4) = param_1;
  return;
}


/* ==== 004a33a0 FUN_004a33a0 ==== */

void FUN_004a33a0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xd8) = param_1;
  return;
}


/* ==== 004a33b0 FUN_004a33b0 ==== */

void FUN_004a33b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xdc) = param_1;
  return;
}


/* ==== 004a33f0 FUN_004a33f0 ==== */

void FUN_004a33f0(undefined4 param_1)

{
  FILE *file;
  undefined1 local_800 [2047];
  undefined1 local_1;
  
  file = (FILE *)FUN_005589a5(s_PhysicsReport_txt_005af18c,s_at__005af1a0);
  if (file != (FILE *)0x0) {
    local_1 = 0;
    FUN_00559854(local_800,0x7ff,param_1,&stack0x00000008);
    FUN_00558953(file,local_800);
    FUN_005588fd(file);
  }
  return;
}


/* ==== 004a3460 FUN_004a3460 ==== */

void FUN_004a3460(void)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  char *pcVar3;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eed8;
  local_c = ExceptionList;
  if (DAT_005af188 != 0) {
    DAT_005af188 = DAT_005af188 << 1;
    return;
  }
  i = 0xffffffff;
  local_54 = 0;
  pcVar3 = s_No_more_unique_collision_IDs_005af1e4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_50 = 0;
  local_4c = 0;
  ExceptionList = &local_c;
  FUN_00402940(s_No_more_unique_collision_IDs_005af1e4,~i - 1);
  local_4 = 0;
  uVar2 = FUN_0049df90(local_48,s_Physics_exception_in___s___d__005af050,
                       s_C__scipio_Research_Libraries_Dav_005af1a4,0x21);
  local_4._0_1_ = 1;
  uVar2 = FUN_0047c9a0(local_38,uVar2,local_58);
  local_4._0_1_ = 2;
  FUN_00558826();
  local_4._0_1_ = 3;
  FUN_004028f0(0);
  local_4._0_1_ = 4;
  local_28[0] = &PTR_FUN_005771c8;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583178);
}


/* ==== 004a35a0 FUN_004a35a0 ==== */

void FUN_004a35a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_0057725c;
  FUN_004fd000();
  return;
}


/* ==== 004a35b0 FUN_004a35b0 ==== */

void FUN_004a35b0(byte param_1)

{
  FUN_004a35a0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004a35d0 FUN_004a35d0 ==== */

void FUN_004a35d0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_0057725c;
  in_ECX[1] = param_1;
  return;
}


/* ==== 004a35f0 FUN_004a35f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a35f0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *operator_new_result_2;
  undefined4 *in_ECX;
  uint i;
  char *pcVar3;
  undefined1 local_2a;
  undefined1 local_29 [5];
  undefined4 *local_24;
  void *operator_new_result;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ef4d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_005772b8;
  FUN_004f65c0();
  local_24 = in_ECX + 6;
  *local_24 = &PTR_LAB_005772a8;
  operator_new_result = operator_new(0x10);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00424980(&local_2a);
  }
  in_ECX[7] = uVar2;
  local_4 = 1;
  FUN_004a5440();
  local_4 = 2;
  FUN_004900f0(s_CBase_005af210,local_29);
  in_ECX[10] = &PTR_FUN_005772a4;
  local_4._0_1_ = 3;
  FUN_004900f0(s_CBase_005af210,&local_2a);
  in_ECX[0xf] = &PTR_FUN_005772a0;
  local_4._0_1_ = 4;
  FUN_004900f0(s_CBase_005af210,local_29);
  in_ECX[0x14] = &PTR_FUN_0057729c;
  local_4._0_1_ = 5;
  in_ECX[0x19] = &PTR_LAB_0057728c;
  operator_new_result_2 = operator_new(0x10);
  if (operator_new_result_2 == (undefined1 *)0x0) {
    operator_new_result_2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result_2 + 4) = 0;
    *operator_new_result_2 = local_29[0];
    *(undefined4 *)(operator_new_result_2 + 8) = 0;
    *(undefined4 *)(operator_new_result_2 + 0xc) = 0;
  }
  in_ECX[0x1a] = operator_new_result_2;
  local_4._0_1_ = 6;
  in_ECX[0x1b] = &PTR_LAB_0057727c;
  operator_new_result_2 = operator_new(0x10);
  if (operator_new_result_2 == (undefined1 *)0x0) {
    operator_new_result_2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result_2 + 4) = 0;
    *operator_new_result_2 = local_29[0];
    *(undefined4 *)(operator_new_result_2 + 8) = 0;
    *(undefined4 *)(operator_new_result_2 + 0xc) = 0;
  }
  in_ECX[0x1c] = operator_new_result_2;
  *in_ECX = &PTR_LAB_00577268;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  local_4._0_1_ = 7;
  _DAT_005af184 = 0x3dcccccd;
  local_1c[0] = local_29[0];
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_MapObject_005af204;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_MapObject_005af204,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004093c0(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  in_ECX[2] = 100;
  in_ECX[5] = 0;
  in_ECX[1] = 1;
  ExceptionList = local_c;
  return;
}


/* ==== 004a37e0 FUN_004a37e0 ==== */

void FUN_004a37e0(byte param_1)

{
  FUN_004a3800();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004a3800 FUN_004a3800 ==== */

void FUN_004a3800(void)

{
  char cVar1;
  int i;
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056efaa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_LAB_00577268;
  i = in_ECX[0x1c];
  local_4 = 4;
  in_ECX[0x1b] = &PTR_LAB_0057727c;
  if (i != 0) {
    FUN_0042f530(*(undefined4 *)(i + 4),*(undefined4 *)(i + 8));
    FUN_0054b339(*(undefined4 *)(i + 4));
    *(undefined4 *)(i + 4) = 0;
    *(undefined4 *)(i + 8) = 0;
    *(undefined4 *)(i + 0xc) = 0;
    FUN_0054b339(i);
  }
  in_ECX[0x1c] = 0;
  i = in_ECX[0x1a];
  local_4._0_1_ = 3;
  in_ECX[0x19] = &PTR_LAB_0057728c;
  if (i != 0) {
    FUN_004da4d0();
    FUN_0054b339(i);
  }
  in_ECX[0x1a] = 0;
  local_4._0_1_ = 2;
  in_ECX[0x14] = &PTR_LAB_005772d8;
  FUN_004028f0(1);
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0xf] = &PTR_LAB_005772d8;
  FUN_004028f0(1);
  in_ECX[10] = &PTR_LAB_005772d8;
  i = in_ECX[0xc];
  if (i != 0) {
    cVar1 = *(char *)(i + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(i + -1));
    }
    else {
      *(char *)(i + -1) = cVar1 + -1;
    }
  }
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  local_4 = 6;
  i = (**(code **)in_ECX[6])();
  if (0 < i) {
    do {
      FUN_004a54c0(0);
      i = i + -1;
    } while (i != 0);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  in_ECX[8] = &PTR_LAB_005772c8;
  if (in_ECX[9] != 0) {
    FUN_004ed120(1);
  }
  in_ECX[9] = 0;
  local_4 = 0xffffffff;
  in_ECX[6] = &PTR_LAB_005772a8;
  if (in_ECX[7] != 0) {
    FUN_004ed120(1);
  }
  in_ECX[7] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004a3960 FUN_004a3960 ==== */

void FUN_004a3960(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *operator_new_result;
  int in_ECX;
  uint i;
  char *pcVar5;
  undefined1 local_170 [28];
  undefined1 local_154 [28];
  undefined1 local_138 [28];
  undefined1 local_11c [28];
  undefined1 local_100 [28];
  undefined1 local_e4 [28];
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [19];
  undefined1 local_29;
  int local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056f0d1;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe68;
  local_8 = 0;
  local_24[0] = param_1._3_1_;
  ExceptionList = &local_10;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_MapObject_005af204;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_MapObject_005af204,~i - 1);
  local_8._0_1_ = 1;
  FUN_004093c0(local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_24[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_RealObject_005af178;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_RealObject_005af178,~i - 1);
  local_8._0_1_ = 2;
  FUN_004093c0(local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_24[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_VehicleObject_005af338;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_VehicleObject_005af338,~i - 1);
  local_8._0_1_ = 3;
  FUN_004093c0(local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(1);
  local_28 = in_ECX + 0x28;
  if (local_28 == 0) {
    uVar2 = FUN_004900f0(s_NULL_pointer_passed_as_a_creator_005af314,(int)&param_1 + 3);
    local_8._0_1_ = 4;
    uVar3 = FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc,
                         s_c__a2iv_libs_davisupportlib_incl_005af2dc,99);
    local_8._0_1_ = 5;
    uVar2 = FUN_0047c9a0(local_4c,uVar3,uVar2);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004a5260(uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_e4,&DAT_00583558);
  }
  iVar4 = FUN_004eced0(in_ECX + 0x2c);
  if (iVar4 != -1) {
    uVar2 = FUN_004900f0(s_Trying_to_add_creator_that_alrea_005af290,(int)&param_1 + 3);
    local_8._0_1_ = 7;
    uVar3 = FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc,
                         s_c__a2iv_libs_davisupportlib_incl_005af2dc,0x68);
    local_8._0_1_ = 8;
    uVar2 = FUN_0047c9a0(local_24,uVar3,uVar2);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_004a5260(uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_170,&DAT_00583558);
  }
  FUN_004ecea0(&local_28);
  local_28 = in_ECX + 0x3c;
  if (local_28 == 0) {
    uVar2 = FUN_004900f0(s_NULL_pointer_passed_as_a_creator_005af314,(int)&param_1 + 3);
    local_8._0_1_ = 10;
    uVar3 = FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc,
                         s_c__a2iv_libs_davisupportlib_incl_005af2dc,99);
    local_8._0_1_ = 0xb;
    uVar2 = FUN_0047c9a0(local_24,uVar3,uVar2);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_004a5260(uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_154,&DAT_00583558);
  }
  iVar4 = FUN_004eced0(in_ECX + 0x40);
  if (iVar4 != -1) {
    uVar2 = FUN_004900f0(s_Trying_to_add_creator_that_alrea_005af290,(int)&param_1 + 3);
    local_8._0_1_ = 0xd;
    uVar3 = FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc,
                         s_c__a2iv_libs_davisupportlib_incl_005af2dc,0x68);
    local_8._0_1_ = 0xe;
    uVar2 = FUN_0047c9a0(local_24,uVar3,uVar2);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_004a5260(uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_11c,&DAT_00583558);
  }
  FUN_004ecea0(&local_28);
  local_28 = in_ECX + 0x50;
  if (local_28 == 0) {
    uVar2 = FUN_004900f0(s_NULL_pointer_passed_as_a_creator_005af314,(int)&param_1 + 3);
    local_8._0_1_ = 0x10;
    uVar3 = FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc,
                         s_c__a2iv_libs_davisupportlib_incl_005af2dc,99);
    local_8._0_1_ = 0x11;
    uVar2 = FUN_0047c9a0(local_24,uVar3,uVar2);
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_004a5260(uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_138,&DAT_00583558);
  }
  iVar4 = FUN_004eced0(in_ECX + 0x54);
  if (iVar4 != -1) {
    uVar2 = FUN_004900f0(s_Trying_to_add_creator_that_alrea_005af290,(int)&param_1 + 3);
    local_8._0_1_ = 0x13;
    uVar3 = FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc,
                         s_c__a2iv_libs_davisupportlib_incl_005af2dc,0x68);
    local_8._0_1_ = 0x14;
    uVar2 = FUN_0047c9a0(local_24,uVar3,uVar2);
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_004a5260(uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_100,&DAT_00583558);
  }
  FUN_004ecea0(&local_28);
  local_8 = 0xffffffff;
  FUN_004f8370();
  FUN_004fd100();
  operator_new_result = operator_new(8);
  if (operator_new_result == (void *)0x0) {
    local_b8 = 0;
  }
  else {
    local_b8 = FUN_004a35d0(1);
  }
  uVar2 = FUN_004f82a0(local_c8,s_davilex_005af288,0xc33f8727);
  *(undefined4 *)(in_ECX + 0x14) = uVar2;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0x51eb851f;
  local_70 = 0x40239eb8;
  local_6c = 0;
  local_68 = 0;
  FUN_004f7f30(&local_7c);
  FUN_004a4160(param_1);
  local_24[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Rubber_005af280;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Rubber_005af280,~i - 1);
  local_8 = 0x1e;
  FUN_004a4510(local_24,0x3f733333,0x3f666666);
  local_8 = 0xffffffff;
  FUN_004028f0(1);
  local_24[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Steel_005af278;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Steel_005af278,~i - 1);
  local_8 = 0x1f;
  FUN_004a4510(local_24,0x3f333333,0x3f400000);
  local_8 = 0xffffffff;
  FUN_004028f0(1);
  local_24[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = s_Stone_005af270;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_Stone_005af270,~i - 1);
  local_8 = 0x20;
  FUN_004a4510(local_24,0x3f000000,0x3f19999a);
  local_8 = 0xffffffff;
  FUN_004028f0(1);
  local_24[0] = param_1._3_1_;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar5 = &DAT_005af268;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&DAT_005af268,~i - 1);
  local_8 = 0x21;
  FUN_004a4510(local_24,0x3ecccccd,0x3ecccccd);
  local_8 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004900f0(s_Glas_005af260,(int)&param_1 + 3);
  local_8 = 0x22;
  FUN_004a4510(local_24,0x3e4ccccd,0x3f733333);
  local_8 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004900f0(s_Plastic_005af258,&local_29);
  local_8 = 0x23;
  FUN_004a4510(local_5c,0x3dcccccd,0x3ecccccd);
  local_8 = 0xffffffff;
  FUN_004028f0(1);
  ExceptionList = local_10;
  return;
}


/* ==== 004a4070 FUN_004a4070 ==== */

void FUN_004a4070(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int i;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int j;
  
  i = *(int *)(in_ECX + 0x14);
  if (i != 0) {
    FUN_004f7b20();
    FUN_0054b339(i);
  }
  i = (*(code *)**(undefined4 **)(in_ECX + 100))();
  if (0 < i) {
    do {
      iVar5 = **(int **)(*(int *)(in_ECX + 0x68) + 4);
      if (iVar5 != 0) {
        FUN_004a05e0();
        FUN_0054b339(iVar5);
      }
      iVar5 = *(int *)(in_ECX + 0x68);
      puVar1 = *(undefined4 **)(iVar5 + 8);
      puVar3 = (undefined4 *)(*(int *)(iVar5 + 4) + 4);
      if (puVar3 != puVar1) {
        iVar4 = *(int *)(iVar5 + 4) - (int)puVar3;
        do {
          *(undefined4 *)(iVar4 + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
      }
      i = i + -1;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -4;
    } while (i != 0);
  }
  j = (*(code *)**(undefined4 **)(in_ECX + 0x6c))();
  if (0 < j) {
    do {
      piVar2 = (int *)**(int **)(*(int *)(in_ECX + 0x70) + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))(1);
      }
      i = *(int *)(in_ECX + 0x70);
      puVar1 = *(undefined4 **)(i + 8);
      puVar3 = (undefined4 *)(*(int *)(i + 4) + 4);
      if (puVar3 != puVar1) {
        iVar5 = *(int *)(i + 4) - (int)puVar3;
        do {
          *(undefined4 *)(iVar5 + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
      }
      *(int *)(i + 8) = *(int *)(i + 8) + -4;
      j = j + -1;
    } while (j != 0);
  }
  return;
}


/* ==== 004a4160 FUN_004a4160 ==== */

void FUN_004a4160(float param_1)

{
  FUN_004f7af0((double)param_1);
  return;
}


/* ==== 004a4180 FUN_004a4180 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4180(float *param_1)

{
  float fVar1;
  
  fVar1 = _DAT_005af184;
  *param_1 = _DAT_005af184 * *param_1;
  param_1[1] = -(fVar1 * param_1[1]);
  param_1[2] = fVar1 * param_1[2];
  return;
}


/* ==== 004a41b0 FUN_004a41b0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a41b0(float *param_1)

{
  float fVar1;
  
  fVar1 = 1.0 / _DAT_005af184;
  *param_1 = fVar1 * *param_1;
  param_1[1] = -(fVar1 * param_1[1]);
  param_1[2] = fVar1 * param_1[2];
  return;
}


/* ==== 004a41f0 FUN_004a41f0 ==== */

undefined4 FUN_004a41f0(int param_1)

{
  int iVar1;
  char *_Str1;
  int __strcmpi_result;
  int in_ECX;
  char *_Str2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 100))();
  i = 0;
  if (0 < iVar1) {
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x68) + 4) + i * 4) + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x68) + 4) + i * 4);
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004a4260 FUN_004a4260 ==== */

undefined4 FUN_004a4260(undefined4 param_1)

{
  void *operator_new_result;
  undefined4 uVar1;
  undefined4 in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f0eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x24);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a04e0();
  }
  local_4 = 0xffffffff;
  FUN_004a5620();
  FUN_0041c870(param_1);
  FUN_004a0670(in_ECX);
  ExceptionList = local_c;
  return uVar1;
}


/* ==== 004a4330 FUN_004a4330 ==== */

undefined4 FUN_004a4330(undefined4 param_1)

{
  void *operator_new_result;
  undefined4 uVar1;
  undefined4 in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f10b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x24);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a04e0();
  }
  local_4 = 0xffffffff;
  FUN_004a5620();
  FUN_0041c870(param_1);
  FUN_004a0970(in_ECX);
  ExceptionList = local_c;
  return uVar1;
}


/* ==== 004a43d0 FUN_004a43d0 ==== */

void FUN_004a43d0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_004a49d0(param_1);
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x18))();
  *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + (iVar1 + -1) * 4) + 0x2c) = in_ECX;
  return;
}


/* ==== 004a4400 FUN_004a4400 ==== */

int * FUN_004a4400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004a43d0(param_1);
  (**(code **)(*piVar1 + 4))(param_2,param_3);
  return piVar1;
}


/* ==== 004a4430 FUN_004a4430 ==== */

undefined4 FUN_004a4430(int param_1)

{
  int iVar1;
  char *_Str1;
  int __strcmpi_result;
  int in_ECX;
  char *_Str2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x6c))();
  i = 0;
  if (0 < iVar1) {
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 4) + i * 4) + 0x34);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x70) + 4) + i * 4);
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004a44a0 FUN_004a44a0 ==== */

undefined4 FUN_004a44a0(float param_1,float param_2)

{
  int iVar1;
  int in_ECX;
  int i;
  float10 fVar2;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x6c))();
  i = 0;
  if (0 < iVar1) {
    do {
      fVar2 = (float10)(**(code **)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x70) + 4) + i * 4))
                                 ();
      if (fVar2 == (float10)param_1) {
        fVar2 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x70) + 4) + i * 4) + 8)
                         )();
        if (fVar2 == (float10)param_2) {
          return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x70) + 4) + i * 4);
        }
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004a4510 FUN_004a4510 ==== */

undefined4 * FUN_004a4510(undefined4 param_1,float param_2,float param_3)

{
  undefined4 *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f13e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x40);
  local_4 = 0;
  if (operator_new_result == (undefined4 *)0x0) {
    operator_new_result = (undefined4 *)0x0;
  }
  else {
    FUN_004fd2b0((double)param_2,(double)param_3);
    *(undefined1 *)(operator_new_result + 0xc) = param_3._0_1_;
    operator_new_result[0xd] = 0;
    operator_new_result[0xe] = 0;
    operator_new_result[0xf] = 0;
    *operator_new_result = &PTR_LAB_005772dc;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004093c0();
  }
  local_4 = 0xffffffff;
  FUN_004a5620();
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004a45d0 FUN_004a45d0 ==== */

void FUN_004a45d0(float param_1)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = param_1 + *(float *)(in_ECX + 0x74);
  *(float *)(in_ECX + 0x78) = param_1;
  *(float *)(in_ECX + 0x74) = fVar1;
  FUN_004f8380((double)fVar1);
  return;
}


/* ==== 004a4600 FUN_004a4600 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4600(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int in_ECX;
  int i;
  undefined1 *puStack_44;
  undefined1 auStack_3c [56];
  
  iVar4 = *(int *)(in_ECX + 0x14);
  FUN_004a33f0();
  FUN_004a33f0(s__________Physics_WorldManager_Re_005af4e4);
  FUN_004a33f0(s__________________________________005af518);
  FUN_004a33f0(s____Simulation_Time___f_sec____005af4c0,(double)*(float *)(in_ECX + 0x74));
  FUN_004a33f0(s____Last_DeltaT___f_sec____005af4a0,(double)*(float *)(in_ECX + 0x78));
  FUN_004a33f0(s____Input_Units_Scale___f____005af480,(double)_DAT_005af184);
  FUN_004a33f0(s____Gravity___f__f__f____005af460,*(undefined4 *)(iVar4 + 0xd0),
               *(undefined4 *)(iVar4 + 0xd4),*(undefined4 *)(iVar4 + 0xd8),
               *(undefined4 *)(iVar4 + 0xdc),*(undefined4 *)(iVar4 + 0xe0),
               *(undefined4 *)(iVar4 + 0xe4));
  FUN_004a33f0(s__________________________________005af518);
  iVar4 = (*(code *)**(undefined4 **)(in_ECX + 0x18))();
  FUN_004a33f0(s____Object_List_Count____d____005af440,iVar4);
  i = 0;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + i * 4);
      iVar2 = *(int *)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 4);
      uVar3 = *(undefined4 *)(iVar2 + 0x14);
      iVar2 = iVar2 + 0x90;
      if (iVar1 == 0) {
        uVar5 = FUN_0055933d(iVar2,auStack_3c,2);
        uVar5 = FUN_00567b81(uVar5);
        FUN_004a33f0(s____Object___d_____s_uses_geometr_005af3c0,i,uVar3,iVar2,uVar5);
      }
      else {
        puVar6 = *(undefined1 **)(iVar1 + 4);
        puStack_44 = &DAT_0057629c;
        if (puVar6 != (undefined1 *)0x0) {
          puStack_44 = puVar6;
        }
        uVar5 = FUN_0055933d(iVar2,auStack_3c,2);
        uVar5 = FUN_00567b81(uVar5);
        FUN_004a33f0(s____Object___d_____s_uses_geometr_005af400,i,uVar3,puStack_44,iVar2,uVar5);
      }
      i = i + 1;
    } while (i < iVar4);
  }
  FUN_004a33f0();
  iVar4 = (*(code *)**(undefined4 **)(in_ECX + 100))();
  FUN_004a33f0(s____Geometry_List_Count____d____005af39c,iVar4);
  i = 0;
  if (0 < iVar4) {
    do {
      puVar6 = *(undefined1 **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x68) + 4) + i * 4) + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      FUN_004a33f0(s____Geometry___d_____s_005af384,i,puVar6);
      i = i + 1;
    } while (i < iVar4);
  }
  FUN_004a33f0();
  iVar4 = (*(code *)**(undefined4 **)(in_ECX + 0x6c))();
  FUN_004a33f0(s____Material_List_Count____d____005af360,iVar4);
  i = 0;
  if (0 < iVar4) {
    do {
      puVar6 = *(undefined1 **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 4) + i * 4) + 0x34);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      FUN_004a33f0(s____Material___d_____s_005af348,i,puVar6);
      i = i + 1;
    } while (i < iVar4);
  }
  return;
}


/* ==== 004a4850 FUN_004a4850 ==== */

void FUN_004a4850(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int i;
  undefined1 uStack_5d;
  undefined4 local_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [7];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056f18b;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)*in_ECX)();
  i = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)*in_ECX)();
      if (iVar2 < 1) {
        uVar3 = FUN_0049df90(auStack_58,s_Illegal_object_index_to_remove___005af54c,0);
        local_4._0_1_ = 2;
        uVar4 = FUN_0049df90(auStack_48,s_FacMan_exception_in___s___d__005af2bc,
                             s_c__a2iv_libs_davisupportlib_incl_005af2dc,0x54);
        local_4._0_1_ = 3;
        uVar3 = FUN_0047c9a0(auStack_38,uVar4,uVar3);
        local_4._0_1_ = 4;
        FUN_00558826();
        FUN_00424980(&uStack_5d);
        local_4._0_1_ = 6;
        appuStack_28[0] = &PTR_FUN_005772f4;
        FUN_004093c0(uVar3,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(appuStack_28,&DAT_00583558);
      }
      if ((undefined4 *)**(int **)(in_ECX[1] + 4) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)**(int **)(in_ECX[1] + 4))(1);
      }
      FUN_004ecd90(0,1);
      i = i + 1;
    } while (i < iVar1);
  }
  iVar1 = in_ECX[3];
  in_ECX[2] = &PTR_LAB_005772c8;
  if (iVar1 != 0) {
    local_5c = *(undefined4 *)(iVar1 + 4);
    FUN_0054b339(local_5c);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[3] = 0;
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_005772a8;
  if (iVar1 != 0) {
    local_5c = *(undefined4 *)(iVar1 + 4);
    FUN_0054b339(local_5c);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[1] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004a49d0 FUN_004a49d0 ==== */

void FUN_004a49d0(int param_1)

{
  char cVar1;
  int iVar2;
  char *_Str1;
  int __strcmpi_result;
  undefined4 uVar3;
  int in_ECX;
  char *str2;
  uint j;
  uint k;
  int i;
  undefined4 uStack_6c;
  undefined1 auStack_68 [4];
  char *pcStack_64;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [3];
  undefined1 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f1d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (*(code *)**(undefined4 **)(in_ECX + 8))();
  i = 0;
  if (0 < iVar2) {
    do {
      str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)(in_ECX + 0xc) + 4) + i * 4) + 8);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,str2);
      if (__strcmpi_result == 0) {
        if (i != -1) {
          uStack_6c = (**(code **)**(undefined4 **)(*(int *)(*(int *)(in_ECX + 0xc) + 4) + i * 4))()
          ;
          FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 4) + 8),1,&uStack_6c);
          ExceptionList = pvStack_c;
          return;
        }
        break;
      }
      i = i + 1;
    } while (i < iVar2);
  }
  auStack_68[0] = (undefined1)param_1;
  FUN_004028f0(0);
  j = 0xffffffff;
  str2 = s_Unable_to_find_typecreator___005af570;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  j = ~j - 1;
  cVar1 = FUN_00402a00(j,1);
  if (cVar1 != '\0') {
    str2 = s_Unable_to_find_typecreator___005af570;
    for (k = j >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcStack_64 = *(undefined4 *)str2;
      str2 = str2 + 4;
      pcStack_64 = pcStack_64 + 4;
    }
    for (k = j & 3; k != 0; k = k - 1) {
      *pcStack_64 = *str2;
      str2 = str2 + 1;
      pcStack_64 = pcStack_64 + 1;
    }
    FUN_004029e0(j);
  }
  uStack_4 = 0;
  uVar3 = FUN_0049df90(auStack_58,s_FacMan_exception_in___s___d__005af2bc,
                       s_c__a2iv_libs_davisupportlib_incl_005af2dc,0x47);
  uStack_4._0_1_ = 1;
  uVar3 = FUN_0047c9a0(auStack_48,uVar3,auStack_68);
  uStack_4._0_1_ = 2;
  uVar3 = FUN_0047c9a0(auStack_38,uVar3,param_1);
  uStack_4._0_1_ = 3;
  FUN_00558826();
  uStack_1c = (undefined1)param_1;
  FUN_004028f0(0);
  uStack_4._0_1_ = 5;
  appuStack_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(uVar3,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_28,&DAT_00583558);
}


/* ==== 004a4b90 FUN_004a4b90 ==== */

void FUN_004a4b90(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_005772d8;
  iVar2 = in_ECX[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


/* ==== 004a4be0 FUN_004a4be0 ==== */

void FUN_004a4be0(void)

{
  char cVar1;
  undefined4 *operator_new_result;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  undefined1 local_68 [4];
  char *local_64;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f21b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x30);
  local_4 = 0;
  if (operator_new_result == (undefined4 *)0x0) {
    operator_new_result = (undefined4 *)0x0;
  }
  else {
    FUN_004a1490();
    *operator_new_result = &PTR_FUN_005772fc;
  }
  local_4 = 0xffffffff;
  if (operator_new_result != (undefined4 *)0x0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_Unable_to_create_object_of_type__005af5c8;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_64 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_64 = local_64 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_64 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_64 = local_64 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 1;
  uVar2 = FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc,
                       s_c__a2iv_libs_davisupportlib_incl_005af590,0x2e);
  local_4._0_1_ = 2;
  uVar2 = FUN_0047c9a0(local_48,uVar2,local_68);
  local_4._0_1_ = 3;
  uVar2 = FUN_0047c9a0(local_38,uVar2,in_ECX + 4);
  local_4._0_1_ = 4;
  FUN_00558826();
  FUN_004028f0(0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004a4d60 FUN_004a4d60 ==== */

void FUN_004a4d60(void)

{
  char cVar1;
  undefined4 *operator_new_result;
  undefined4 uVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  undefined1 local_68 [4];
  char *local_64;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f26b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x30);
  local_4 = 0;
  if (operator_new_result == (undefined4 *)0x0) {
    operator_new_result = (undefined4 *)0x0;
  }
  else {
    FUN_004a1490();
    *operator_new_result = &PTR_FUN_00577310;
  }
  local_4 = 0xffffffff;
  if (operator_new_result != (undefined4 *)0x0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_Unable_to_create_object_of_type__005af5c8;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_64 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_64 = local_64 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_64 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_64 = local_64 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 1;
  uVar2 = FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc,
                       s_c__a2iv_libs_davisupportlib_incl_005af590,0x2e);
  local_4._0_1_ = 2;
  uVar2 = FUN_0047c9a0(local_48,uVar2,local_68);
  local_4._0_1_ = 3;
  uVar2 = FUN_0047c9a0(local_38,uVar2,in_ECX + 4);
  local_4._0_1_ = 4;
  FUN_00558826();
  FUN_004028f0(0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004a4ee0 FUN_004a4ee0 ==== */

void FUN_004a4ee0(void)

{
  char cVar1;
  void *operator_new_result;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_68 [4];
  char *local_64;
  uint local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f2bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0xec);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004a24d0();
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
    pcVar5 = local_64;
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
    local_64[i] = '\0';
    local_60 = i;
  }
  local_4 = 1;
  uVar3 = FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc,
                       s_c__a2iv_libs_davisupportlib_incl_005af590,0x2e);
  local_4._0_1_ = 2;
  uVar3 = FUN_0047c9a0(local_48,uVar3,local_68);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_38,uVar3,in_ECX + 4);
  local_4._0_1_ = 4;
  FUN_00558826();
  FUN_004028f0(0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004a5060 FUN_004a5060 ==== */

void FUN_004a5060(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_0057728c;
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


/* ==== 004a50a0 FUN_004a50a0 ==== */

void FUN_004a50a0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_0057727c;
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


/* ==== 004a50e0 FUN_004a50e0 ==== */

/* WARNING: Removing unreachable block (ram,0x004a5134) */

void FUN_004a50e0(int param_1)

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
  puStack_8 = &LAB_0056f2d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(param_1);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(param_1 + 0xc);
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (in_ECX + 3 == (undefined4 *)(param_1 + 0xc)) {
    if (uVar1 != 0) {
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
      puVar4 = *(undefined1 **)(param_1 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar4 = *(undefined1 **)(param_1 + 0x10);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[4] = puVar4;
        in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
        in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004a5192;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 0x10);
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
      in_ECX[5] = uVar1;
      *(undefined1 *)(in_ECX[4] + uVar1) = 0;
      *in_ECX = &PTR_FUN_005772f4;
      ExceptionList = local_c;
      return;
    }
  }
LAB_004a5192:
  *in_ECX = &PTR_FUN_005772f4;
  ExceptionList = local_c;
  return;
}


/* ==== 004a5240 FUN_004a5240 ==== */

void FUN_004a5240(byte param_1)

{
  thunk_FUN_004a14c0();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 004a5260 FUN_004a5260 ==== */

/* WARNING: Removing unreachable block (ram,0x004a52bc) */

undefined4 * FUN_004a5260(undefined4 *param_1)

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
  puStack_8 = &LAB_0056f303;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558826();
  *(undefined1 *)(in_ECX + 3) = param_1._0_1_;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_005772f4;
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


