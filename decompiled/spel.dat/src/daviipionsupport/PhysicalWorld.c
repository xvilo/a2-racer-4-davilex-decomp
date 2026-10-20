/* spel.dat — daviipionsupport/PhysicalWorld.cpp: 71 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a24d0 FUN_004a24d0 ==== */

void * __thiscall FUN_004a24d0(void *this)

{
  FUN_004a1490();
  *(undefined ***)this = &PTR_FUN_00577220;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined1 *)((int)this + 0xe8) = 0;
  return this;
}


/* ==== 004a2500 thunk_FUN_004a14c0 ==== */

void __thiscall thunk_FUN_004a14c0(void *this)

{
  *(undefined ***)this = &PTR_FUN_005771fc;
  return;
}


/* ==== 004a2510 FUN_004a2510 ==== */

void __thiscall FUN_004a2510(void *this,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)((int)this + 0x30) + 8))(param_2,param_3);
  return;
}


/* ==== 004a2530 FUN_004a2530 ==== */

void __thiscall FUN_004a2530(void *this,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0xc))(param_2,param_3);
  return;
}


/* ==== 004a2550 FUN_004a2550 ==== */

void __thiscall FUN_004a2550(void *this,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x10))(param_2,param_3);
  return;
}


/* ==== 004a2570 FUN_004a2570 ==== */

void __thiscall FUN_004a2570(void *this,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x1c))(param_2,param_3);
  return;
}


/* ==== 004a2590 FUN_004a2590 ==== */

void __thiscall FUN_004a2590(void *this,int param_2,float *param_3)

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
  void *this_val;
  int *piVar11;
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
  FUN_004a14f0(this,param_2,param_3);
  local_384 = (int *)(param_2 + 0x228);
  local_38c = (float *)((int)this + 0x44);
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
    fVar1 = param_3[1];
    *(float *)((int)local_31c + i) = *pfVar8 + *param_3;
    fVar2 = param_3[2];
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
  local_384 = (int *)((int)this + 0x34);
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
      FUN_00402940(local_35c,s_RealObject_005af178,~k - 1);
      local_4 = 0;
      uVar9 = FUN_004a4400(local_35c,param_2 + 0xb8,local_38c);
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
      cVar6 = FUN_00402a00(local_36c,k,1);
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
        FUN_004029e0(local_36c,k);
      }
      local_4 = 1;
      uVar9 = FUN_004a4400(local_36c,param_2 + 0x170,local_38c);
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
  local_2ec[6] = *(undefined4 *)((int)this + 8);
  pfVar8 = local_34c + 1;
  pfVar12 = local_218;
  local_384 = (int *)((int)this + 0x34);
  local_2ec[2] = 0;
  local_2ec[5] = 0;
  local_2ec[3] = 1;
  local_380 = 4;
  piVar11 = (int *)(param_2 + 0x2a0);
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
    *(float *)((int)this + 0x74) = fVar1 + *(float *)((int)this + 0x74);
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
  puVar7 = (undefined4 *)(param_2 + 0x2d0);
  pfVar8 = local_280;
  j = 2;
  *(float *)((int)this + 0x74) = *(float *)((int)this + 0x74) * 0.25;
  fVar1 = *(float *)(param_2 + 0x2fc);
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
  uStack_230 = *(undefined4 *)(param_2 + 0x25c);
  uStack_224 = *(undefined4 *)(param_2 + 0x264);
  j = *(int *)(*(int *)((int)this + 0x2c) + 0x14);
  fStack_22c = *(float *)(param_2 + 0x268) * (float)*(double *)(param_2 + 0x18) *
               (float)*(double *)(j + 0xd8);
  if (*(char *)(param_2 + 600) == '\0') {
    this_val = operator_new(0x140);
    local_4 = 3;
    if (this_val != (void *)0x0) {
      piVar11 = (int *)FUN_004fc4f0(this_val,*(undefined4 *)(*(int *)((int)this + 0x2c) + 0x14),
                                    local_2ec);
      goto LAB_004a2ac5;
    }
  }
  else {
    this_val = operator_new(0x65c);
    local_4 = 2;
    if (this_val != (void *)0x0) {
      piVar11 = (int *)FUN_004a5e70(this_val,*(undefined4 *)(*(int *)((int)this + 0x2c) + 0x14),
                                    local_2ec);
      goto LAB_004a2ac5;
    }
  }
  piVar11 = (int *)0x0;
LAB_004a2ac5:
  *(int **)((int)this + 0x30) = piVar11;
  local_4 = 0xffffffff;
  fStack_32c = *(float *)(param_2 + 0xa4) + fStack_32c;
  fVar1 = (((float)*(double *)(j + 0xd8) / local_180[0]) * -fStack_32c * 0.5) /
          (fStack_32c - (local_34c[2] + *(float *)(param_2 + 0xa4)));
  (**(code **)(*piVar11 + 0x18))(0,fVar1);
  (**(code **)(**(int **)((int)this + 0x30) + 0x18))(1,fVar1);
  fVar1 = (unaff_EBP * unaff_EBX * 0.5) / unaff_ESI;
  (**(code **)(**(int **)((int)this + 0x30) + 0x18))(2,fVar1);
  (**(code **)(**(int **)((int)this + 0x30) + 0x18))(3,fVar1);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_2 + 0x2e4);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_2 + 0x324);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_2 + 0x33c);
  ExceptionList = pvStack_2c;
  return;
}


/* ==== 004a2e30 FUN_004a2e30 ==== */

void __thiscall FUN_004a2e30(void *this,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x2c))(param_2,1);
  return;
}


/* ==== 004a2e50 FUN_004a2e50 ==== */

void __thiscall FUN_004a2e50(void *this,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x2c))(param_2,0);
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
  int in_ECX;
  float10 fVar1;
  
  if ((0 < param_1) && (param_1 < 4)) {
    fVar1 = (float10)FUN_004f3120(*(undefined4 *)(*(int *)(in_ECX + 0x34 + param_1 * 4) + 8));
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

float10 __thiscall FUN_004a2f50(void *this,float param_2)

{
  return (float10)*(float *)((int)this + *(int *)((int)this + 0xe4) * 4 + 0xa4) *
         (float10)*(float *)((int)this + 0xa0) * (float10)param_2 * (float10)60.0;
}


/* ==== 004a2f70 FUN_004a2f70 ==== */

undefined4 __thiscall FUN_004a2f70(void *this,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_ESI;
  int i;
  float10 fVar7;
  float fVar8;
  
  fVar6 = param_2 * -0.01;
  (**(code **)(**(int **)((int)this + 0x30) + 0x30))(2);
  fVar8 = 0.0;
  i = 0;
  do {
    fVar7 = (float10)(**(code **)(**(int **)((int)this + 0x30) + 0x34))(i);
    i = i + 1;
    fVar8 = (float)(ABS(fVar7) + (float10)fVar8);
  } while (i < 4);
  fVar8 = fVar8 * 0.63661975;
  fVar7 = (float10)FUN_004a2f50(this,fVar8);
  *(undefined4 *)((int)this + 0xe4) = 0;
  if ((float10)*(float *)((int)this + 0x84) < fVar7) {
    do {
      if (*(int *)((int)this + 0xc0) + -1 <= *(int *)((int)this + 0xe4)) break;
      *(int *)((int)this + 0xe4) = *(int *)((int)this + 0xe4) + 1;
      fVar7 = (float10)FUN_004a2f50(this,fVar8);
    } while ((float10)*(float *)((int)this + 0x84) < fVar7);
  }
  if (fVar7 < (float10)*(float *)((int)this + 0x88)) {
    do {
      if (*(int *)((int)this + 0xe4) < 1) break;
      *(int *)((int)this + 0xe4) = *(int *)((int)this + 0xe4) + -1;
      fVar7 = (float10)FUN_004a2f50(this,fVar8);
    } while (fVar7 < (float10)*(float *)((int)this + 0x88));
  }
  fVar7 = (float10)FUN_004a2f50(this,fVar8);
  i = 0;
  *(float *)((int)this + 0xbc) = (float)fVar7;
  fVar8 = *(float *)((int)this + *(int *)((int)this + 0xe4) * 4 + 0xa4);
  fVar1 = *(float *)((int)this + 0xa0);
  fVar2 = *(float *)((int)this + 0x80);
  fVar3 = *(float *)((int)this + 0x84);
  fVar4 = *(float *)((int)this + 0x74);
  do {
    if (i < 2) {
      fVar5 = *(float *)((int)this + 0x8c);
    }
    else {
      fVar5 = 1.0 - *(float *)((int)this + 0x8c);
    }
    (**(code **)(**(int **)((int)this + 0x30) + 0x20))
              (i,fVar5 * *(float *)((int)this + 0x74) *
                 ((fVar8 * fVar1 * fVar2 * unaff_ESI * 447420.0) / (fVar3 * fVar4 * 6.2831855)) *
                 -0.5);
    i = i + 1;
  } while (i < 4);
  if (param_2 != 0.0) {
    (**(code **)(**(int **)((int)this + 0x30) + 0x30))(2);
    i = 0;
    do {
      (**(code **)(**(int **)((int)this + 0x30) + 0x34))(i);
      (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                (i,-(*(float *)((int)this + (i / 2) * 4 + 0x90) * *(float *)((int)this + 0x74) *
                     fVar6 * 0.5));
      i = i + 1;
    } while (i < 4);
    (**(code **)(**(int **)((int)this + 0x30) + 0x24))();
  }
  param_3._0_1_ = SUB41(param_3 * 0.01,0);
  if (param_3._0_1_ == '\0') {
    if (*(char *)((int)this + 0xe8) != '\0') {
      *(undefined1 *)((int)this + 0xe8) = 0;
      FUN_004a2e50(this,2);
      FUN_004a2e50(this,3);
    }
  }
  else if (*(char *)((int)this + 0xe8) == '\0') {
    *(undefined1 *)((int)this + 0xe8) = 1;
    FUN_004a2e30(this,2);
    FUN_004a2e30(this,3);
  }
  return CONCAT31((int3)((uint)fVar6 >> 8),fVar6 != *(float *)((int)this + 0xe4));
}


/* ==== 004a31d0 FUN_004a31d0 ==== */

void __thiscall FUN_004a31d0(void *this,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0x30) + 0x3c))(param_2);
  (**(code **)(**(int **)((int)this + 0x30) + 0x38))();
  return;
}


/* ==== 004a31f0 FUN_004a31f0 ==== */

float10 __thiscall FUN_004a31f0(void *this)

{
  float *pfVar1;
  undefined1 local_c [12];
  
  pfVar1 = (float *)FUN_004a1d20(*(undefined4 *)((int)this + 0x3c),local_c);
  return ABS((float10)*pfVar1) *
         (float10)*(float *)((int)this + *(int *)((int)this + 0xe4) * 4 + 0xa4) *
         (float10)*(float *)((int)this + 0xa0) * (float10)60.0;
}


/* ==== 004a3240 FUN_004a3240 ==== */

void __thiscall FUN_004a3240(void *this,float param_2)

{
  *(float *)((int)this + 0x78) = param_2 * 0.017453292;
  return;
}


/* ==== 004a3250 FUN_004a3250 ==== */

void __thiscall FUN_004a3250(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x7c) = param_2;
  return;
}


/* ==== 004a3260 FUN_004a3260 ==== */

void __thiscall FUN_004a3260(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x90) = param_2;
  return;
}


/* ==== 004a3270 FUN_004a3270 ==== */

void __thiscall FUN_004a3270(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x94) = param_2;
  return;
}


/* ==== 004a3280 FUN_004a3280 ==== */

void __thiscall FUN_004a3280(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x98) = param_2;
  return;
}


/* ==== 004a3290 FUN_004a3290 ==== */

void __thiscall FUN_004a3290(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xa0) = param_2;
  return;
}


/* ==== 004a32a0 FUN_004a32a0 ==== */

void __thiscall FUN_004a32a0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x8c) = param_2;
  return;
}


/* ==== 004a32b0 FUN_004a32b0 ==== */

void __thiscall FUN_004a32b0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x80) = param_2;
  return;
}


/* ==== 004a32c0 FUN_004a32c0 ==== */

void __thiscall FUN_004a32c0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x84) = param_2;
  return;
}


/* ==== 004a32d0 FUN_004a32d0 ==== */

void __thiscall FUN_004a32d0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x88) = param_2;
  return;
}


/* ==== 004a32e0 FUN_004a32e0 ==== */

void __thiscall FUN_004a32e0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x9c) = param_2;
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

void __thiscall FUN_004a3340(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xd0) = param_2;
  return;
}


/* ==== 004a3350 FUN_004a3350 ==== */

void __thiscall FUN_004a3350(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xc4) = param_2;
  return;
}


/* ==== 004a3360 FUN_004a3360 ==== */

void __thiscall FUN_004a3360(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 200) = param_2;
  return;
}


/* ==== 004a3370 FUN_004a3370 ==== */

void __thiscall FUN_004a3370(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xcc) = param_2;
  return;
}


/* ==== 004a3380 FUN_004a3380 ==== */

void __thiscall FUN_004a3380(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xe0) = param_2;
  return;
}


/* ==== 004a3390 FUN_004a3390 ==== */

void __thiscall FUN_004a3390(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xd4) = param_2;
  return;
}


/* ==== 004a33a0 FUN_004a33a0 ==== */

void __thiscall FUN_004a33a0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xd8) = param_2;
  return;
}


/* ==== 004a33b0 FUN_004a33b0 ==== */

void __thiscall FUN_004a33b0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xdc) = param_2;
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
  undefined1 *puVar2;
  undefined4 uVar3;
  uint i;
  char *pcVar4;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
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
  pcVar4 = s_No_more_unique_collision_IDs_005af1e4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_50 = 0;
  local_4c = 0;
  ExceptionList = &local_c;
  FUN_00402940(local_58,s_No_more_unique_collision_IDs_005af1e4,~i - 1);
  local_4 = 0;
  puVar2 = (undefined1 *)FUN_0049df90(local_48,s_Physics_exception_in___s___d__005af050);
  local_4._0_1_ = 1;
  uVar3 = FUN_0047c9a0(local_38,puVar2,(int)local_58);
  local_4._0_1_ = 2;
  FUN_00558826(local_28);
  local_4._0_1_ = 3;
  FUN_004028f0(local_1c,0);
  local_4._0_1_ = 4;
  local_28[0] = &PTR_FUN_005771c8;
  FUN_004093c0(local_1c,uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583178);
}


/* ==== 004a35a0 FUN_004a35a0 ==== */

void __thiscall FUN_004a35a0(void *this)

{
  *(undefined ***)this = &PTR_LAB_0057725c;
  FUN_004fd000();
  return;
}


/* ==== 004a35b0 FUN_004a35b0 ==== */

void * __thiscall FUN_004a35b0(void *this,byte param_2)

{
  FUN_004a35a0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a35d0 FUN_004a35d0 ==== */

void __thiscall FUN_004a35d0(void *this,undefined4 param_2)

{
  *(undefined ***)this = &PTR_LAB_0057725c;
  *(undefined4 *)((int)this + 4) = param_2;
  return;
}


/* ==== 004a35f0 FUN_004a35f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall FUN_004a35f0(void *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *operator_new_result;
  uint i;
  char *pcVar3;
  undefined1 local_2a;
  undefined1 local_29;
  void *local_28;
  undefined4 *local_24;
  void *this_val;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ef4d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_005772b8;
  local_28 = this;
  FUN_004f65c0((undefined4 *)((int)this + 4));
  local_24 = (undefined4 *)((int)this + 0x18);
  *local_24 = &PTR_LAB_005772a8;
  this_val = operator_new(0x10);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00424980(this_val,&local_2a);
  }
  *(undefined4 *)((int)this + 0x1c) = uVar2;
  local_4 = 1;
  FUN_004a5440((int)this + 0x20);
  local_4 = 2;
  FUN_004900f0((int)this + 0x2c,s_CBase_005af210,&local_29);
  *(undefined ***)((int)this + 0x28) = &PTR_FUN_005772a4;
  local_4._0_1_ = 3;
  FUN_004900f0((int)this + 0x40,s_CBase_005af210,&local_2a);
  *(undefined ***)((int)this + 0x3c) = &PTR_FUN_005772a0;
  local_4._0_1_ = 4;
  FUN_004900f0((int)this + 0x54,s_CBase_005af210,&local_29);
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_0057729c;
  local_4._0_1_ = 5;
  *(undefined ***)((int)this + 100) = &PTR_LAB_0057728c;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_29;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x68) = operator_new_result;
  local_4._0_1_ = 6;
  *(undefined ***)((int)this + 0x6c) = &PTR_LAB_0057727c;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_29;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x70) = operator_new_result;
  *(undefined ***)this = &PTR_LAB_00577268;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  local_4._0_1_ = 7;
  _DAT_005af184 = 0x3dcccccd;
  local_1c[0] = local_29;
  FUN_004028f0(local_1c,0);
  i = 0xffffffff;
  pcVar3 = s_MapObject_005af204;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,s_MapObject_005af204,~i - 1);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004093c0((int)this + 0x2c,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 8) = 100;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 4) = 1;
  ExceptionList = local_c;
  return this;
}


/* ==== 004a37e0 FUN_004a37e0 ==== */

void * __thiscall FUN_004a37e0(void *this,byte param_2)

{
  FUN_004a3800();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a3800 FUN_004a3800 ==== */

void __thiscall FUN_004a3800(void *this)

{
  char cVar1;
  int i;
  undefined4 *this_val;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056efaa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_LAB_00577268;
  i = *(int *)((int)this + 0x70);
  local_4 = 4;
  *(undefined ***)((int)this + 0x6c) = &PTR_LAB_0057727c;
  if (i != 0) {
    FUN_0042f530(*(undefined4 *)(i + 4),*(undefined4 *)(i + 8));
    FUN_0054b339(*(undefined4 *)(i + 4));
    *(undefined4 *)(i + 4) = 0;
    *(undefined4 *)(i + 8) = 0;
    *(undefined4 *)(i + 0xc) = 0;
    FUN_0054b339(i);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  i = *(int *)((int)this + 0x68);
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 100) = &PTR_LAB_0057728c;
  if (i != 0) {
    FUN_004da4d0(i);
    FUN_0054b339(i);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  local_4._0_1_ = 2;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_005772d8;
  FUN_004028f0((int)this + 0x54,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_005772d8;
  FUN_004028f0((int)this + 0x40,1);
  *(undefined ***)((int)this + 0x28) = &PTR_LAB_005772d8;
  i = *(int *)((int)this + 0x30);
  if (i != 0) {
    cVar1 = *(char *)(i + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(i + -1));
    }
    else {
      *(char *)(i + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  this_val = (undefined4 *)((int)this + 0x18);
  local_4 = 6;
  i = (**(code **)*this_val)();
  if (0 < i) {
    do {
      FUN_004a54c0(this_val,0);
      i = i + -1;
    } while (i != 0);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_005772c8;
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_004ed120(*(int *)((int)this + 0x24),1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4 = 0xffffffff;
  *this_val = &PTR_LAB_005772a8;
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_004ed120(*(int *)((int)this + 0x1c),1);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004a3960 FUN_004a3960 ==== */

void __thiscall FUN_004a3960(void *this,undefined4 param_2)

{
  char cVar1;
  int this_val;
  undefined1 *puVar2;
  undefined4 this_val_2;
  int iVar3;
  void *this_val_3;
  uint i;
  char *pcVar4;
  undefined1 local_170 [28];
  undefined1 local_154 [28];
  undefined1 local_138 [28];
  undefined1 local_11c [28];
  undefined1 local_100 [28];
  undefined1 local_e4 [28];
  undefined1 local_c8 [16];
  undefined4 local_b8;
  void *local_b4;
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
  local_24[0] = param_2._3_1_;
  ExceptionList = &local_10;
  FUN_004028f0(local_24,0);
  i = 0xffffffff;
  pcVar4 = s_MapObject_005af204;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,s_MapObject_005af204,~i - 1);
  local_8._0_1_ = 1;
  FUN_004093c0((int)this + 0x2c,local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(local_24,1);
  local_24[0] = param_2._3_1_;
  FUN_004028f0(local_24,0);
  i = 0xffffffff;
  pcVar4 = s_RealObject_005af178;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,s_RealObject_005af178,~i - 1);
  local_8._0_1_ = 2;
  FUN_004093c0((int)this + 0x40,local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(local_24,1);
  local_24[0] = param_2._3_1_;
  FUN_004028f0(local_24,0);
  i = 0xffffffff;
  pcVar4 = s_VehicleObject_005af338;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,s_VehicleObject_005af338,~i - 1);
  local_8._0_1_ = 3;
  FUN_004093c0((int)this + 0x54,local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(local_24,1);
  local_28 = (int)this + 0x28;
  this_val = (int)this + 0x18;
  if (local_28 == 0) {
    this_val = FUN_004900f0(local_24,s_NULL_pointer_passed_as_a_creator_005af314,(int)&param_2 + 3);
    local_8._0_1_ = 4;
    puVar2 = (undefined1 *)FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 5;
    this_val_2 = FUN_0047c9a0(local_4c,puVar2,this_val);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004a5260(local_e4,this_val_2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_e4,&DAT_00583558);
  }
  iVar3 = FUN_004eced0(this_val,(int)this + 0x2c);
  if (iVar3 != -1) {
    this_val = FUN_004900f0(local_4c,s_Trying_to_add_creator_that_alrea_005af290,(int)&param_2 + 3);
    local_8._0_1_ = 7;
    puVar2 = (undefined1 *)FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 8;
    this_val_2 = FUN_0047c9a0(local_24,puVar2,this_val);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_004a5260(local_170,this_val_2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_170,&DAT_00583558);
  }
  FUN_004ecea0((int)this + 0x20,&local_28);
  local_28 = (int)this + 0x3c;
  if (local_28 == 0) {
    this_val = FUN_004900f0(local_4c,s_NULL_pointer_passed_as_a_creator_005af314,(int)&param_2 + 3);
    local_8._0_1_ = 10;
    puVar2 = (undefined1 *)FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 0xb;
    this_val_2 = FUN_0047c9a0(local_24,puVar2,this_val);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_004a5260(local_154,this_val_2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_154,&DAT_00583558);
  }
  iVar3 = FUN_004eced0(this_val,(int)this + 0x40);
  if (iVar3 != -1) {
    this_val = FUN_004900f0(local_4c,s_Trying_to_add_creator_that_alrea_005af290,(int)&param_2 + 3);
    local_8._0_1_ = 0xd;
    puVar2 = (undefined1 *)FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 0xe;
    this_val_2 = FUN_0047c9a0(local_24,puVar2,this_val);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_004a5260(local_11c,this_val_2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_11c,&DAT_00583558);
  }
  FUN_004ecea0((int)this + 0x20,&local_28);
  local_28 = (int)this + 0x50;
  if (local_28 == 0) {
    this_val = FUN_004900f0(local_4c,s_NULL_pointer_passed_as_a_creator_005af314,(int)&param_2 + 3);
    local_8._0_1_ = 0x10;
    puVar2 = (undefined1 *)FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 0x11;
    this_val_2 = FUN_0047c9a0(local_24,puVar2,this_val);
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_004a5260(local_138,this_val_2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_138,&DAT_00583558);
  }
  this_val = FUN_004eced0(this_val,(int)this + 0x54);
  if (this_val != -1) {
    this_val = FUN_004900f0(local_4c,s_Trying_to_add_creator_that_alrea_005af290,(int)&param_2 + 3);
    local_8._0_1_ = 0x13;
    puVar2 = (undefined1 *)FUN_0049df90(local_3c,s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 0x14;
    this_val_2 = FUN_0047c9a0(local_24,puVar2,this_val);
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_004a5260(local_100,this_val_2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_100,&DAT_00583558);
  }
  FUN_004ecea0((int)this + 0x20,&local_28);
  local_8 = 0xffffffff;
  this_val_2 = FUN_004f8370();
  FUN_004fd100(local_c8);
  this_val_3 = operator_new(8);
  if (this_val_3 == (void *)0x0) {
    local_b8 = 0;
  }
  else {
    local_b8 = FUN_004a35d0(this_val_3,1);
  }
  local_b4 = this;
  this_val_3 = (void *)FUN_004f82a0(this_val_2,local_c8,s_davilex_005af288,0xc33f8727);
  *(void **)((int)this + 0x14) = this_val_3;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0x51eb851f;
  local_70 = 0x40239eb8;
  local_6c = 0;
  local_68 = 0;
  FUN_004f7f30(this_val_3,(undefined8 *)&local_7c);
  FUN_004a4160(this,param_2);
  local_24[0] = param_2._3_1_;
  FUN_004028f0(local_24,0);
  i = 0xffffffff;
  pcVar4 = s_Rubber_005af280;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,s_Rubber_005af280,~i - 1);
  local_8 = 0x1e;
  FUN_004a4510(this,local_24,0x3f733333,0x3f666666);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,1);
  local_24[0] = param_2._3_1_;
  FUN_004028f0(local_24,0);
  i = 0xffffffff;
  pcVar4 = s_Steel_005af278;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,s_Steel_005af278,~i - 1);
  local_8 = 0x1f;
  FUN_004a4510(this,local_24,0x3f333333,0x3f400000);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,1);
  local_24[0] = param_2._3_1_;
  FUN_004028f0(local_24,0);
  i = 0xffffffff;
  pcVar4 = s_Stone_005af270;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,s_Stone_005af270,~i - 1);
  local_8 = 0x20;
  FUN_004a4510(this,local_24,0x3f000000,0x3f19999a);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,1);
  local_24[0] = param_2._3_1_;
  FUN_004028f0(local_24,0);
  i = 0xffffffff;
  pcVar4 = &DAT_005af268;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,&DAT_005af268,~i - 1);
  local_8 = 0x21;
  FUN_004a4510(this,local_24,0x3ecccccd,0x3ecccccd);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,1);
  FUN_004900f0(local_24,s_Glas_005af260,(int)&param_2 + 3);
  local_8 = 0x22;
  FUN_004a4510(this,local_24,0x3e4ccccd,0x3f733333);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,1);
  FUN_004900f0(local_5c,s_Plastic_005af258,&local_29);
  local_8 = 0x23;
  FUN_004a4510(this,local_5c,0x3dcccccd,0x3ecccccd);
  local_8 = 0xffffffff;
  FUN_004028f0(local_5c,1);
  ExceptionList = local_10;
  return;
}


/* ==== 004a4070 FUN_004a4070 ==== */

void __thiscall FUN_004a4070(void *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int i;
  undefined4 *puVar3;
  int iVar4;
  int this_val;
  int j;
  
  i = *(int *)((int)this + 0x14);
  if (i != 0) {
    FUN_004f7b20(i);
    FUN_0054b339(i);
  }
  i = (*(code *)**(undefined4 **)((int)this + 100))();
  if (0 < i) {
    do {
      this_val = **(int **)(*(int *)((int)this + 0x68) + 4);
      if (this_val != 0) {
        FUN_004a05e0(this_val);
        FUN_0054b339(this_val);
      }
      this_val = *(int *)((int)this + 0x68);
      puVar1 = *(undefined4 **)(this_val + 8);
      puVar3 = (undefined4 *)(*(int *)(this_val + 4) + 4);
      if (puVar3 != puVar1) {
        iVar4 = *(int *)(this_val + 4) - (int)puVar3;
        do {
          *(undefined4 *)(iVar4 + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
      }
      i = i + -1;
      *(int *)(this_val + 8) = *(int *)(this_val + 8) + -4;
    } while (i != 0);
  }
  j = (*(code *)**(undefined4 **)((int)this + 0x6c))();
  if (0 < j) {
    do {
      piVar2 = (int *)**(int **)(*(int *)((int)this + 0x70) + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))(1);
      }
      i = *(int *)((int)this + 0x70);
      puVar1 = *(undefined4 **)(i + 8);
      puVar3 = (undefined4 *)(*(int *)(i + 4) + 4);
      if (puVar3 != puVar1) {
        this_val = *(int *)(i + 4) - (int)puVar3;
        do {
          *(undefined4 *)(this_val + (int)puVar3) = *puVar3;
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

void __thiscall FUN_004a4160(void *this,float param_2)

{
  FUN_004f7af0(*(undefined4 *)((int)this + 0x14),(double)param_2);
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

undefined4 __thiscall FUN_004a41f0(void *this,int param_2)

{
  int iVar1;
  char *_Str1;
  int __strcmpi_result;
  char *_Str2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 100))();
  i = 0;
  if (0 < iVar1) {
    do {
      _Str2 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_2 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)((int)this + 0x68) + 4) + i * 4) + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return *(undefined4 *)(*(int *)(*(int *)((int)this + 0x68) + 4) + i * 4);
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004a4260 FUN_004a4260 ==== */

undefined4 __thiscall
FUN_004a4260(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  void *this_val;
  undefined4 this_val_2;
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f0eb;
  local_c = ExceptionList;
  local_20 = 0x4a4282;
  ExceptionList = &local_c;
  this_val = operator_new(0x24);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    this_val_2 = 0;
  }
  else {
    this_val_2 = FUN_004a04e0(this_val);
  }
  local_24 = *(undefined4 *)(*(int *)((int)this + 0x68) + 8);
  local_20 = 1;
  local_4 = 0xffffffff;
  local_28 = 0x4a42bf;
  FUN_004a5620();
  local_24 = param_7;
  local_20 = param_8;
  local_30 = param_4;
  local_2c = param_5;
  uStack_34 = param_3;
  local_28 = param_6;
  FUN_0041c870(auStack_44,param_2);
  FUN_004a0670(this_val_2,this);
  ExceptionList = local_c;
  return this_val_2;
}


/* ==== 004a4330 FUN_004a4330 ==== */

undefined4 __thiscall FUN_004a4330(void *this,undefined4 param_2,undefined4 param_3)

{
  void *this_val;
  undefined4 this_val_2;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f10b;
  local_c = ExceptionList;
  uStack_20 = 0x4a4352;
  ExceptionList = &local_c;
  this_val = operator_new(0x24);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    this_val_2 = 0;
  }
  else {
    this_val_2 = FUN_004a04e0(this_val);
  }
  uStack_24 = *(undefined4 *)(*(int *)((int)this + 0x68) + 8);
  uStack_20 = 1;
  local_4 = 0xffffffff;
  uStack_28 = 0x4a438f;
  FUN_004a5620();
  uStack_20 = param_3;
  FUN_0041c870(auStack_30,param_2);
  FUN_004a0970(this_val_2,this);
  ExceptionList = local_c;
  return this_val_2;
}


/* ==== 004a43d0 FUN_004a43d0 ==== */

void __thiscall FUN_004a43d0(void *this,undefined4 param_2)

{
  int iVar1;
  
  FUN_004a49d0((undefined4 *)((int)this + 0x18),param_2);
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x18))();
  *(void **)(*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + (iVar1 + -1) * 4) + 0x2c) = this;
  return;
}


/* ==== 004a4400 FUN_004a4400 ==== */

int * FUN_004a4400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 in_ECX;
  
  piVar1 = (int *)FUN_004a43d0(in_ECX,param_1);
  (**(code **)(*piVar1 + 4))(param_2,param_3);
  return piVar1;
}


/* ==== 004a4430 FUN_004a4430 ==== */

undefined4 __thiscall FUN_004a4430(void *this,int param_2)

{
  int iVar1;
  char *_Str1;
  int __strcmpi_result;
  char *_Str2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x6c))();
  i = 0;
  if (0 < iVar1) {
    do {
      _Str2 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_2 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)((int)this + 0x70) + 4) + i * 4) + 0x34);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + i * 4);
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004a44a0 FUN_004a44a0 ==== */

undefined4 __thiscall FUN_004a44a0(void *this,float param_2,float param_3)

{
  int iVar1;
  int i;
  float10 fVar2;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x6c))();
  i = 0;
  if (0 < iVar1) {
    do {
      fVar2 = (float10)(**(code **)**(undefined4 **)
                                     (*(int *)(*(int *)((int)this + 0x70) + 4) + i * 4))();
      if (fVar2 == (float10)param_2) {
        fVar2 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x70) + 4) + i * 4) +
                                     8))();
        if (fVar2 == (float10)param_3) {
          return *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + i * 4);
        }
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 004a4510 FUN_004a4510 ==== */

undefined4 * __thiscall
FUN_004a4510(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  undefined4 *this_val;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f13e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_val = operator_new(0x40);
  local_4 = 0;
  if (this_val == (undefined4 *)0x0) {
    this_val = (undefined4 *)0x0;
  }
  else {
    FUN_004fd2b0(this_val,(double)param_3,(double)param_4);
    *(undefined1 *)(this_val + 0xc) = param_4._0_1_;
    this_val[0xd] = 0;
    this_val[0xe] = 0;
    this_val[0xf] = 0;
    *this_val = &PTR_LAB_005772dc;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004093c0();
  }
  local_4 = 0xffffffff;
  FUN_004a5620();
  ExceptionList = local_c;
  return this_val;
}


/* ==== 004a45d0 FUN_004a45d0 ==== */

void __thiscall FUN_004a45d0(void *this,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 + *(float *)((int)this + 0x74);
  *(float *)((int)this + 0x78) = param_2;
  *(float *)((int)this + 0x74) = fVar1;
  FUN_004f8380(*(undefined4 *)((int)this + 0x14),(double)fVar1);
  return;
}


/* ==== 004a4600 FUN_004a4600 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a4600(void *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int i;
  undefined1 *puStack_44;
  undefined1 auStack_3c [56];
  
  iVar4 = *(int *)((int)this + 0x14);
  FUN_004a33f0();
  FUN_004a33f0(s__________Physics_WorldManager_Re_005af4e4);
  FUN_004a33f0(s__________________________________005af518);
  FUN_004a33f0(s____Simulation_Time___f_sec____005af4c0,(double)*(float *)((int)this + 0x74));
  FUN_004a33f0(s____Last_DeltaT___f_sec____005af4a0,(double)*(float *)((int)this + 0x78));
  FUN_004a33f0(s____Input_Units_Scale___f____005af480,(double)_DAT_005af184);
  FUN_004a33f0(s____Gravity___f__f__f____005af460,*(undefined4 *)(iVar4 + 0xd0),
               *(undefined4 *)(iVar4 + 0xd4),*(undefined4 *)(iVar4 + 0xd8),
               *(undefined4 *)(iVar4 + 0xdc),*(undefined4 *)(iVar4 + 0xe0),
               *(undefined4 *)(iVar4 + 0xe4));
  FUN_004a33f0(s__________________________________005af518);
  iVar4 = (*(code *)**(undefined4 **)((int)this + 0x18))();
  FUN_004a33f0(s____Object_List_Count____d____005af440,iVar4);
  i = 0;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + i * 4);
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
  iVar4 = (*(code *)**(undefined4 **)((int)this + 100))();
  FUN_004a33f0(s____Geometry_List_Count____d____005af39c,iVar4);
  i = 0;
  if (0 < iVar4) {
    do {
      puVar6 = *(undefined1 **)(*(int *)(*(int *)(*(int *)((int)this + 0x68) + 4) + i * 4) + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      FUN_004a33f0(s____Geometry___d_____s_005af384,i,puVar6);
      i = i + 1;
    } while (i < iVar4);
  }
  FUN_004a33f0();
  iVar4 = (*(code *)**(undefined4 **)((int)this + 0x6c))();
  FUN_004a33f0(s____Material_List_Count____d____005af360,iVar4);
  i = 0;
  if (0 < iVar4) {
    do {
      puVar6 = *(undefined1 **)(*(int *)(*(int *)(*(int *)((int)this + 0x70) + 4) + i * 4) + 0x34);
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

void __thiscall FUN_004a4850(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int i;
  undefined1 uStack_5d;
  void *local_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [3];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056f18b;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  local_5c = this;
  iVar2 = (*(code *)**(undefined4 **)this)();
  i = 0;
  if (0 < iVar2) {
    do {
      iVar3 = (*(code *)**(undefined4 **)this)();
      if (iVar3 < 1) {
        iVar2 = FUN_0049df90(auStack_58,s_Illegal_object_index_to_remove___005af54c);
        local_4._0_1_ = 2;
        puVar4 = (undefined1 *)FUN_0049df90(auStack_48,s_FacMan_exception_in___s___d__005af2bc);
        local_4._0_1_ = 3;
        uVar5 = FUN_0047c9a0(auStack_38,puVar4,iVar2);
        local_4._0_1_ = 4;
        FUN_00558826(appuStack_28);
        FUN_00424980(auStack_1c,&uStack_5d);
        local_4._0_1_ = 6;
        appuStack_28[0] = &PTR_FUN_005772f4;
        FUN_004093c0(auStack_1c,uVar5,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(appuStack_28,&DAT_00583558);
      }
      puVar1 = (undefined4 *)**(int **)(*(int *)((int)this + 4) + 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      FUN_004ecd90(this,0,1);
      i = i + 1;
    } while (i < iVar2);
  }
  iVar2 = *(int *)((int)this + 0xc);
  *(undefined ***)((int)this + 8) = &PTR_LAB_005772c8;
  if (iVar2 != 0) {
    local_5c = *(void **)(iVar2 + 4);
    FUN_0054b339(local_5c);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  iVar2 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_005772a8;
  if (iVar2 != 0) {
    local_5c = *(void **)(iVar2 + 4);
    FUN_0054b339(local_5c);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004a49d0 FUN_004a49d0 ==== */

void __thiscall FUN_004a49d0(void *this,int param_2)

{
  char cVar1;
  int iVar2;
  char *_Str1;
  int __strcmpi_result;
  undefined1 *puVar3;
  undefined4 uVar4;
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
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f1d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (*(code *)**(undefined4 **)((int)this + 8))();
  i = 0;
  if (0 < iVar2) {
    do {
      str2 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        str2 = *(char **)(param_2 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + i * 4) + 8);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,str2);
      if (__strcmpi_result == 0) {
        if (i != -1) {
          uStack_6c = (**(code **)**(undefined4 **)(*(int *)(*(int *)((int)this + 0xc) + 4) + i * 4)
                      )();
          FUN_004a5620(*(int *)((int)this + 4),*(undefined4 *)(*(int *)((int)this + 4) + 8),1,
                       &uStack_6c);
          ExceptionList = pvStack_c;
          return;
        }
        break;
      }
      i = i + 1;
    } while (i < iVar2);
  }
  auStack_68[0] = (undefined1)param_2;
  FUN_004028f0(auStack_68,0);
  j = 0xffffffff;
  str2 = s_Unable_to_find_typecreator___005af570;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *str2;
    str2 = str2 + 1;
  } while (cVar1 != '\0');
  j = ~j - 1;
  cVar1 = FUN_00402a00(auStack_68,j,1);
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
    FUN_004029e0(auStack_68,j);
  }
  uStack_4 = 0;
  puVar3 = (undefined1 *)FUN_0049df90(auStack_58,s_FacMan_exception_in___s___d__005af2bc);
  uStack_4._0_1_ = 1;
  puVar3 = (undefined1 *)FUN_0047c9a0(auStack_48,puVar3,(int)auStack_68);
  uStack_4._0_1_ = 2;
  uVar4 = FUN_0047c9a0(auStack_38,puVar3,param_2);
  uStack_4._0_1_ = 3;
  FUN_00558826(appuStack_28);
  auStack_1c[0] = (undefined1)param_2;
  FUN_004028f0(auStack_1c,0);
  uStack_4._0_1_ = 5;
  appuStack_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(auStack_1c,uVar4,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_28,&DAT_00583558);
}


/* ==== 004a4b90 FUN_004a4b90 ==== */

void __thiscall FUN_004a4b90(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_LAB_005772d8;
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 004a4be0 FUN_004a4be0 ==== */

void __thiscall FUN_004a4be0(void *this)

{
  char cVar1;
  undefined4 *this_val;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint i;
  uint j;
  char *pcVar4;
  undefined1 local_68 [4];
  char *local_64;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f21b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_val = operator_new(0x30);
  local_4 = 0;
  if (this_val == (undefined4 *)0x0) {
    this_val = (undefined4 *)0x0;
  }
  else {
    FUN_004a1490(this_val);
    *this_val = &PTR_FUN_005772fc;
  }
  local_4 = 0xffffffff;
  if (this_val != (undefined4 *)0x0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(local_68,0);
  i = 0xffffffff;
  pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_68,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_64 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      local_64 = local_64 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_64 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      local_64 = local_64 + 1;
    }
    FUN_004029e0(local_68,i);
  }
  local_4 = 1;
  puVar2 = (undefined1 *)FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc);
  local_4._0_1_ = 2;
  puVar2 = (undefined1 *)FUN_0047c9a0(local_48,puVar2,(int)local_68);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_38,puVar2,(int)this + 4);
  local_4._0_1_ = 4;
  FUN_00558826(local_28);
  FUN_004028f0(local_1c,0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(local_1c,uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004a4d60 FUN_004a4d60 ==== */

void __thiscall FUN_004a4d60(void *this)

{
  char cVar1;
  undefined4 *this_val;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint i;
  uint j;
  char *pcVar4;
  undefined1 local_68 [4];
  char *local_64;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f26b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_val = operator_new(0x30);
  local_4 = 0;
  if (this_val == (undefined4 *)0x0) {
    this_val = (undefined4 *)0x0;
  }
  else {
    FUN_004a1490(this_val);
    *this_val = &PTR_FUN_00577310;
  }
  local_4 = 0xffffffff;
  if (this_val != (undefined4 *)0x0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(local_68,0);
  i = 0xffffffff;
  pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_68,i,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Unable_to_create_object_of_type__005af5c8;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_64 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      local_64 = local_64 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_64 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      local_64 = local_64 + 1;
    }
    FUN_004029e0(local_68,i);
  }
  local_4 = 1;
  puVar2 = (undefined1 *)FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc);
  local_4._0_1_ = 2;
  puVar2 = (undefined1 *)FUN_0047c9a0(local_48,puVar2,(int)local_68);
  local_4._0_1_ = 3;
  uVar3 = FUN_0047c9a0(local_38,puVar2,(int)this + 4);
  local_4._0_1_ = 4;
  FUN_00558826(local_28);
  FUN_004028f0(local_1c,0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(local_1c,uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004a4ee0 FUN_004a4ee0 ==== */

void __thiscall FUN_004a4ee0(void *this)

{
  char cVar1;
  void *this_val;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint i;
  uint j;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_68 [4];
  char *local_64;
  uint local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f2bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_val = operator_new(0xec);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004a24d0(this_val);
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(local_68,0);
  i = 0xffffffff;
  pcVar5 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_68,i,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Unable_to_create_object_of_type__005af5c8;
    pcVar6 = local_64;
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
    local_64[i] = '\0';
    local_60 = i;
  }
  local_4 = 1;
  puVar3 = (undefined1 *)FUN_0049df90(local_58,s_FacMan_exception_in___s___d__005af2bc);
  local_4._0_1_ = 2;
  puVar3 = (undefined1 *)FUN_0047c9a0(local_48,puVar3,(int)local_68);
  local_4._0_1_ = 3;
  uVar4 = FUN_0047c9a0(local_38,puVar3,(int)this + 4);
  local_4._0_1_ = 4;
  FUN_00558826(local_28);
  FUN_004028f0(local_1c,0);
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(local_1c,uVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}


/* ==== 004a5060 FUN_004a5060 ==== */

void __thiscall FUN_004a5060(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_0057728c;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004a50a0 FUN_004a50a0 ==== */

void __thiscall FUN_004a50a0(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_0057727c;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004a50e0 FUN_004a50e0 ==== */

/* WARNING: Removing unreachable block (ram,0x004a5134) */

void * __thiscall FUN_004a50e0(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *this_val;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f2d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(this,param_2);
  this_val = (undefined1 *)((int)this + 0xc);
  local_4 = 0;
  *this_val = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = *(uint *)(param_2 + 0x14);
  if (this_val == (undefined1 *)(param_2 + 0xc)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x14) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x10);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0x14) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = *(undefined1 **)(param_2 + 0x10);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = this_val;
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x18);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_004a5192;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)((int)this + 0x10);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 0x10) + uVar1) = 0;
      *(undefined ***)this = &PTR_FUN_005772f4;
      ExceptionList = local_c;
      return this;
    }
  }
LAB_004a5192:
  *(undefined ***)this = &PTR_FUN_005772f4;
  ExceptionList = local_c;
  return this;
}


/* ==== 004a5240 FUN_004a5240 ==== */

void * __thiscall FUN_004a5240(void *this,byte param_2)

{
  thunk_FUN_004a14c0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a5260 FUN_004a5260 ==== */

/* WARNING: Removing unreachable block (ram,0x004a52bc) */

void * __thiscall FUN_004a5260(void *this,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *this_val;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f303;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558826();
  this_val = (undefined1 *)((int)this + 0xc);
  *this_val = param_2._0_1_;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)this = &PTR_FUN_005772f4;
  local_4 = 1;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (*(uint *)((int)this + 0x14) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x14) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x10);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0x14) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar6 = *(int *)((int)this + 0x10);
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar6 + -1));
          }
          else {
            *(char *)(iVar6 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)((int)this + 0x10) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
        *(undefined4 *)((int)this + 0x18) = 0;
        this_val = *(undefined1 **)(param_2 + 4);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = this_val;
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0xc);
        this_val[-1] = this_val[-1] + '\x01';
        ExceptionList = local_c;
        return this;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)((int)this + 0x10);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(this_val,uVar1);
    }
  }
  ExceptionList = local_c;
  return this;
}


