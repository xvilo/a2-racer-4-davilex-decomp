/* spel.dat — engine/tmg_main.cpp: 28 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a53e0 FUN_004a53e0 ==== */

void * __thiscall FUN_004a53e0(void *this,byte param_2)

{
  FUN_0040c0a0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a5400 FUN_004a5400 ==== */

void __thiscall FUN_004a5400(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_005772a8;
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


/* ==== 004a5440 FUN_004a5440 ==== */

void * __thiscall FUN_004a5440(void *this)

{
  undefined1 *operator_new_result;
  undefined1 local_1;
  
  *(undefined ***)this = &PTR_LAB_005772c8;
  operator_new_result = operator_new(0x10);
  if (operator_new_result != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)this >> 0x18);
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
    *(undefined1 **)((int)this + 4) = operator_new_result;
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


/* ==== 004a5480 FUN_004a5480 ==== */

void __thiscall FUN_004a5480(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_005772c8;
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


/* ==== 004a54c0 FUN_004a54c0 ==== */

void __thiscall FUN_004a54c0(void *this,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [3];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f338;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (-1 < param_2) {
    ExceptionList = &pvStack_c;
    iVar2 = (*(code *)**(undefined4 **)this)();
    if (param_2 < iVar2) {
      puVar3 = *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 4) + param_2 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar2 = *(int *)((int)this + 4);
      puVar1 = *(undefined4 **)(iVar2 + 8);
      iVar6 = *(int *)(iVar2 + 4) + param_2 * 4;
      puVar3 = (undefined4 *)(iVar6 + 4);
      if (puVar3 != puVar1) {
        iVar6 = iVar6 - (int)puVar3;
        do {
          *(undefined4 *)(iVar6 + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
      }
      FUN_0042f530(*(int *)(iVar2 + 8) + -4,*(int *)(iVar2 + 8));
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -4;
      ExceptionList = pvStack_c;
      return;
    }
  }
  iVar2 = FUN_0049df90(local_58,s_Illegal_object_index_to_remove___005af54c);
  uStack_4 = 0;
  puVar4 = (undefined1 *)FUN_0049df90(auStack_48,s_FacMan_exception_in___s___d__005af2bc);
  uStack_4._0_1_ = 1;
  uVar5 = FUN_0047c9a0(auStack_38,puVar4,iVar2);
  uStack_4._0_1_ = 2;
  FUN_00558826(appuStack_28);
  auStack_1c[0] = (undefined1)param_2;
  FUN_004028f0(auStack_1c,0);
  uStack_4._0_1_ = 4;
  appuStack_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(auStack_1c,uVar5,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_28,&DAT_00583558);
}


/* ==== 004a5620 FUN_004a5620 ==== */

void __thiscall FUN_004a5620(void *this,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int i;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)((int)this + 8);
  if (param_3 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar5 >> 2)) {
    if ((uint)((int)puVar5 - (int)param_2 >> 2) < param_3) {
      puVar6 = param_2 + param_3;
      if (param_2 != puVar5) {
        puVar3 = puVar6 + -param_3;
        do {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar3;
          }
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (puVar3 != puVar5);
      }
      puVar5 = *(undefined4 **)((int)this + 8);
      for (i = param_3 - ((int)puVar5 - (int)param_2 >> 2); i != 0; i = i + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *param_4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar5 = *(undefined4 **)((int)this + 8);
      for (; param_2 != puVar5; param_2 = param_2 + 1) {
        *param_2 = *param_4;
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 4;
      return;
    }
    if (param_3 != 0) {
      puVar6 = puVar5;
      for (puVar3 = puVar5 + -param_3; puVar3 != puVar5; puVar3 = puVar3 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar3;
        }
        puVar6 = puVar6 + 1;
      }
      puVar5 = *(undefined4 **)((int)this + 8);
      for (puVar6 = puVar5 + -param_3; param_2 != puVar6; puVar6 = puVar6 + -1) {
        puVar5 = puVar5 + -1;
        *puVar5 = puVar6[-1];
      }
      puVar5 = param_2 + param_3;
      for (; param_2 != puVar5; param_2 = param_2 + 1) {
        *param_2 = *param_4;
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 4;
    }
    return;
  }
  i = *(int *)((int)this + 4);
  if ((i == 0) || (uVar4 = (int)puVar5 - i >> 2, uVar4 <= param_3)) {
    uVar4 = param_3;
  }
  if (i == 0) {
    i = 0;
  }
  else {
    i = (int)puVar5 - i >> 2;
  }
  i = i + uVar4;
  iVar2 = i;
  if (i < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 * 4);
  puVar6 = puVar3;
  for (puVar5 = *(undefined4 **)((int)this + 4); uVar4 = param_3, puVar1 = puVar6, puVar5 != param_2
      ; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_4;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar5 = puVar6 + param_3;
  if (param_2 != puVar1) {
    param_2 = (undefined4 *)((int)puVar5 + (param_3 * -4 - (int)puVar6) + (int)param_2);
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_2;
      }
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    } while (param_2 != puVar1);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(undefined4 **)((int)this + 0xc) = puVar3 + i;
  i = *(int *)((int)this + 4);
  if (i == 0) {
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) = puVar3 + param_3;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + (*(int *)((int)this + 8) - i >> 2) + param_3;
  return;
}


/* ==== 004a5840 FUN_004a5840 ==== */

void * __thiscall FUN_004a5840(void *this,byte param_2)

{
  FUN_004a5860();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a5860 FUN_004a5860 ==== */

void __thiscall FUN_004a5860(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_LAB_005772dc;
  iVar2 = *(int *)((int)this + 0x34);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  FUN_004fd310(this);
  return;
}


/* ==== 004a58b0 FUN_004a58b0 ==== */

void FUN_004a58b0(undefined4 *param_1,float *param_2)

{
  int i;
  double *pdVar1;
  double local_80;
  double local_78;
  double local_70;
  double local_60;
  double local_58;
  double local_50;
  double local_40;
  double local_38;
  double local_30;
  
  FUN_00402d00(&local_80,0x20,3,FUN_0043e110);
  FUN_004fa010(&local_80);
  local_80 = (double)*param_2;
  local_60 = (double)-param_2[1];
  local_40 = (double)param_2[2];
  local_78 = (double)-param_2[4];
  local_58 = (double)param_2[5];
  local_38 = (double)-param_2[6];
  local_70 = (double)param_2[8];
  local_50 = (double)-param_2[9];
  local_30 = (double)param_2[10];
  pdVar1 = &local_80;
  for (i = 0x20; i != 0; i = i + -1) {
    *param_1 = *(undefined4 *)pdVar1;
    pdVar1 = (double *)((int)pdVar1 + 4);
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004a5970 FUN_004a5970 ==== */

void FUN_004a5970(float *param_1,double *param_2)

{
  int i;
  float *pfVar1;
  float local_40 [5];
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_40[3] = 0.0;
  local_40[0] = (float)*param_2;
  local_40[1] = -(float)param_2[4];
  local_24 = 0;
  local_14 = 0;
  local_40[2] = (float)param_2[8];
  local_40[4] = -(float)param_2[1];
  local_4 = 0x3f800000;
  local_2c = (float)param_2[5];
  local_28 = -(float)param_2[9];
  local_20 = (float)param_2[2];
  local_1c = -(float)param_2[6];
  local_18 = (float)param_2[10];
  local_10 = (float)param_2[0xc];
  local_c = (float)param_2[0xd];
  local_8 = (float)param_2[0xe];
  pfVar1 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004a5a40 FUN_004a5a40 ==== */

void FUN_004a5a40(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int i;
  undefined4 *puVar3;
  undefined4 local_c0 [16];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  puVar2 = &DAT_0073b538;
  puVar3 = local_c0;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar1 = __ftol(local_c0);
  uVar1 = FUN_004b3f80(local_80,uVar1);
  puVar2 = (undefined4 *)FUN_004b4110(local_40,uVar1);
  puVar3 = local_c0;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar1 = __ftol(local_c0);
  uVar1 = FUN_004b3ea0(local_40,uVar1);
  puVar2 = (undefined4 *)FUN_004b4110(local_80,uVar1);
  puVar3 = local_c0;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar1 = __ftol(local_c0);
  uVar1 = FUN_004b3f10(local_40,uVar1);
  puVar2 = (undefined4 *)FUN_004b4110(local_80,uVar1);
  puVar3 = local_c0;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_c0;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004a5b30 FUN_004a5b30 ==== */

void FUN_004a5b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_c [12];
  
  puVar3 = (undefined4 *)FUN_004b42a0(local_c,param_2,param_3);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


/* ==== 004a5ba0 FUN_004a5ba0 ==== */

void * __thiscall FUN_004a5ba0(void *this)

{
  FUN_004fb180();
  return this;
}


/* ==== 004a5bb0 FUN_004a5bb0 ==== */

void * __thiscall FUN_004a5bb0(void *this,int param_2,undefined4 param_3)

{
  undefined4 local_4;
  
  FUN_004fb4d0(this,*(undefined4 *)(param_2 + 0x14),param_3,4);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(int *)((int)this + 0x70) = param_2;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined ***)this = &PTR_LAB_00577324;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = local_4;
  return this;
}


/* ==== 004a5c50 FUN_004a5c50 ==== */

void * __thiscall FUN_004a5c50(void *this,byte param_2)

{
  FUN_004a5cd0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a5c70 FUN_004a5c70 ==== */

void __thiscall FUN_004a5c70(void *this,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x74) = *param_2;
  *(undefined4 *)((int)this + 0x78) = param_2[1];
  *(undefined4 *)((int)this + 0x7c) = param_2[2];
  uVar1 = *param_2;
  uVar2 = param_2[2];
  *(float *)((int)this + 0x84) = -(float)param_2[1];
  *(undefined4 *)((int)this + 0x80) = uVar1;
  *(undefined4 *)((int)this + 0x88) = uVar2;
  FUN_004fb810();
  return;
}


/* ==== 004a5cd0 FUN_004a5cd0 ==== */

void __thiscall FUN_004a5cd0(void *this)

{
  *(undefined ***)this = &PTR_LAB_00577324;
  FUN_004fb600();
  return;
}


/* ==== 004a5ce0 FUN_004a5ce0 ==== */

void __thiscall FUN_004a5ce0(void *this)

{
  float *pfVar1;
  float10 fVar2;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_28 [36];
  int this_val;
  
  this_val = *(int *)(*(int *)((int)this + 0x14) + 0xa4);
  FUN_004fadc0((double *)(this_val + 0x128),(int)this + 0x28,local_28);
  pfVar1 = (float *)((int)this + 0x80);
  local_38 = *pfVar1 * (float)*(double *)(this_val + 0x128) +
             (float)*(double *)(this_val + 0x138) * *(float *)((int)this + 0x88) +
             (float)*(double *)(this_val + 0x130) * *(float *)((int)this + 0x84);
  local_34 = *(float *)((int)this + 0x88) * (float)*(double *)(this_val + 0x158) +
             *(float *)((int)this + 0x84) * (float)*(double *)(this_val + 0x150) +
             *pfVar1 * (float)*(double *)(this_val + 0x148);
  local_30 = *(float *)((int)this + 0x88) * (float)*(double *)(this_val + 0x178) +
             *(float *)((int)this + 0x84) * (float)*(double *)(this_val + 0x170) +
             *pfVar1 * (float)*(double *)(this_val + 0x168);
  fVar2 = (float10)FUN_004f9680();
  if (((float10)1e-10 <= fVar2) && (*(int *)(this_val + 0x5c) * 0x1000000 < 0x8000000)) {
    FUN_004f41b0(this_val,local_28,&local_38);
  }
  return;
}


/* ==== 004a5e30 FUN_004a5e30 ==== */

void __thiscall FUN_004a5e30(void *this)

{
  *(undefined ***)this = &PTR_FUN_00577364;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00577348;
  FUN_004fdfb0();
  return;
}


/* ==== 004a5e50 FUN_004a5e50 ==== */

void * __thiscall FUN_004a5e50(void *this,byte param_2)

{
  FUN_004a5e30();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a5e70 FUN_004a5e70 ==== */

void * __thiscall FUN_004a5e70(void *this,undefined4 param_2,int param_3)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined4 this_val;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fe120(this,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00577364;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00577348;
  puVar2 = (undefined4 *)((int)this + 0x64c);
  puVar1 = (undefined4 *)(param_3 + 0x1c);
  i = 4;
  do {
    this_val = *puVar1;
    *puVar2 = this_val;
    FUN_004f21f0(this_val,0);
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    i = i + -1;
  } while (i != 0);
  ExceptionList = local_c;
  return this;
}


/* ==== 004a5ef0 FUN_004a5ef0 ==== */

void __thiscall FUN_004a5ef0(void *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int i;
  undefined4 local_1f8 [8];
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c4;
  float local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined1 local_198 [16];
  undefined4 local_188 [8];
  undefined8 local_168 [4];
  undefined1 local_148 [128];
  undefined1 local_c8 [96];
  undefined1 local_68 [100];
  int this_val;
  
  this_val = *(int *)((int)this + 0x604);
  if (*(int *)(this_val + 0x40) == 0) {
    uVar4 = FUN_004fe470(*(undefined4 *)(*(int *)(this_val + 0x18) + 0xa4),this_val);
    *(undefined4 *)(this_val + 0x40) = uVar4;
  }
  *(int *)(*(int *)(this_val + 0x40) + 4) = *(int *)(*(int *)(this_val + 0x40) + 4) + 1;
  if ((*(int *)(this_val + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(this_val + 0x40) < *(int *)(*(int *)(this_val + 0x18) + 0x138))) {
    FUN_004fe580();
  }
  this_val = *(int *)(this_val + 0x40);
  FUN_00402d00(local_148,0x20,3,FUN_0043e110);
  FUN_004f2ab0(*(void **)((int)this + 0x604),(int)local_148);
  puVar5 = (undefined4 *)((int)this + 0x64c);
  pfVar6 = (float *)((int)this + 0x34);
  i = 4;
  do {
    fVar1 = pfVar6[0x18] - pfVar6[8];
    local_1d8 = pfVar6[-2] * fVar1 + pfVar6[-6];
    local_1d4 = pfVar6[-1] * fVar1 + pfVar6[-5];
    local_1d0 = *pfVar6 * fVar1 + pfVar6[-4];
    FUN_004fac20(local_148,&local_1d8,local_198);
    FUN_004fe850(this_val,local_198,local_168);
    local_1c4 = pfVar6[0xe];
    fVar1 = pfVar6[0xf];
    iVar2 = *(int *)((int)this + 0x624);
    fVar3 = pfVar6[0x11];
    local_1b8 = (double)pfVar6[0xd];
    uVar4 = *(undefined4 *)((int)this + 0x620);
    local_1f8[0] = 0;
    local_1b0 = (double)local_1c4;
    local_1f8[1] = 0;
    local_1f8[2] = 0;
    local_1f8[3] = 0;
    local_1f8[4] = 0;
    local_1f8[5] = 0;
    local_1c0 = fVar1;
    local_1f8[iVar2 * 2] = 0;
    local_1f8[iVar2 * 2 + 1] = 0xbff00000;
    local_1a8 = (double)fVar1;
    FUN_004f9b90(local_1f8,uVar4,fVar3);
    FUN_004fa1e0(local_c8,&local_1b8,*(undefined4 *)((int)this + 0x620),local_1f8);
    FUN_004fa6e0(this_val + 0x30,local_c8,local_68);
    FUN_004f8bf0(local_68);
    FUN_004f3130((void *)*puVar5,local_188,local_168,0);
    puVar5 = puVar5 + 1;
    pfVar6 = pfVar6 + 0x1f;
    i = i + -1;
  } while (i != 0);
  *(int *)(this_val + 4) = *(int *)(this_val + 4) + -1;
  return;
}


/* ==== 004a65e0 FUN_004a65e0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a65e0(void *this)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  LARGE_INTEGER large_integer;
  
  BVar1 = QueryPerformanceFrequency(&large_integer);
  *(BOOL *)this = BVar1;
  if (BVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0x447a0000;
  }
  else {
    *(float *)((int)this + 4) = (float)(longlong)large_integer;
  }
  if (DAT_00712874 != 0) {
    if (DAT_00712874 == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_00712895,&DAT_0071287c,
                   DAT_0071286c);
      FUN_0054b339(DAT_00712868);
    }
    if (DAT_00712874 != 0) {
      FUN_0054b339(DAT_00712878);
      DAT_00712874 = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_00712868 = operator_new(0x10);
  DAT_0071286c = 4;
  _DAT_00712870 = 0;
  DAT_00712878 = operator_new(4);
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,&DAT_00712895,&DAT_0071287c,DAT_0071286c)
  ;
  DAT_00712874 = 1;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    *(undefined1 *)((int)DAT_00712878 + iVar3) = 1;
    iVar3 = iVar2;
  } while (iVar2 < 4);
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 4;
    *(undefined4 *)(iVar3 + (int)DAT_00712868) = 0x3dcccccd;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  FUN_004a6700(this);
  return;
}


/* ==== 004a6700 FUN_004a6700 ==== */

void __thiscall FUN_004a6700(void *this)

{
  float fVar1;
  BOOL BVar2;
  DWORD DVar3;
  int j;
  int i;
  LARGE_INTEGER large_integer;
  
  if (*(int *)this == 0) {
    DVar3 = timeGetTime();
    large_integer.s.HighPart = 0;
    large_integer.s.LowPart = DVar3;
  }
  else {
    BVar2 = QueryPerformanceCounter(&large_integer);
    if (BVar2 == 0) {
      FUN_004c4150(s__s__d_____s_____HiRes_timer_fail_005af6f4,
                   s_C__Work_A2IV_Engine_prog_tmg_mai_005af71c,0x66,s_UpdateTimes_005af744);
      goto LAB_004a675f;
    }
  }
  fVar1 = (float)(longlong)large_integer / *(float *)((int)this + 4);
  *(float *)((int)this + 0xc) = fVar1 - *(float *)((int)this + 8);
  *(float *)((int)this + 8) = fVar1;
LAB_004a675f:
  *(undefined4 *)(DAT_00712868 + DAT_007128c0 * 4) = *(undefined4 *)((int)this + 0xc);
  i = 2;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * 0.5;
  fVar1 = 0.5;
  j = DAT_007128c0;
  do {
    j = j + -1;
    if (j < 0) {
      j = 3;
    }
    fVar1 = fVar1 * 0.5;
    i = i + -1;
    *(float *)((int)this + 0xc) =
         fVar1 * *(float *)(DAT_00712868 + j * 4) + *(float *)((int)this + 0xc);
  } while (i != 0);
  j = j + -1;
  if (j < 0) {
    j = 3;
  }
  *(float *)((int)this + 0xc) =
       fVar1 * *(float *)(DAT_00712868 + j * 4) + *(float *)((int)this + 0xc);
  DAT_007128c0 = DAT_007128c0 + 1;
  if (3 < DAT_007128c0) {
    DAT_007128c0 = 0;
  }
  return;
}


/* ==== 004a67f0 FUN_004a67f0 ==== */

float10 __thiscall FUN_004a67f0(void *this)

{
  return (float10)*(float *)((int)this + 8);
}


/* ==== 004a6800 FUN_004a6800 ==== */

float10 __thiscall FUN_004a6800(void *this)

{
  if (*(float *)((int)this + 0xc) == 0.0) {
    return (float10)0.1;
  }
  if (0.1 < *(float *)((int)this + 0xc)) {
    return (float10)0.1;
  }
  return (float10)*(float *)((int)this + 0xc);
}


/* ==== 004a6840 FUN_004a6840 ==== */

void __thiscall FUN_004a6840(void *this)

{
  ulonglong uVar1;
  float fVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  LARGE_INTEGER large_integer;
  
  if (*(int *)this == 0) {
    DVar4 = timeGetTime();
    uVar1 = (ulonglong)DVar4;
  }
  else {
    BVar3 = QueryPerformanceCounter(&large_integer);
    if (BVar3 == 0) {
      FUN_004c4150(s__s__d_____s_____HiRes_timer_fail_005af6f4,
                   s_C__Work_A2IV_Engine_prog_tmg_mai_005af71c,0xd1,s_reset_005af750);
      goto LAB_004a68a2;
    }
    uVar1 = CONCAT44(large_integer.s.HighPart,large_integer.s.LowPart);
  }
  fVar2 = (float)(longlong)uVar1 / *(float *)((int)this + 4);
  *(float *)((int)this + 0xc) = fVar2 - *(float *)((int)this + 8);
  *(float *)((int)this + 8) = fVar2;
LAB_004a68a2:
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 4;
    *(undefined4 *)(iVar5 + DAT_00712868) = 0x3dcccccd;
    iVar5 = iVar6;
  } while (iVar6 < 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 004a6980 FUN_004a6980 ==== */

void FUN_004a6980(int param_1,undefined4 param_2)

{
  int iVar1;
  CHAR local_190 [400];
  
  if (param_1 == 0) {
    FUN_005590ae(local_190,param_2,&stack0x0000000c);
    FUN_004c3f80(0,1);
    FUN_004c3fa0(s__s_005aeff8,local_190);
    ShowWindow(DAT_007408a4,6);
    iVar1 = FUN_004cd5e0();
    while (iVar1 != 0) {
      iVar1 = FUN_004cd5e0();
    }
    MessageBoxExA((HWND)0x0,local_190,s_Assertion_failure_005aefe4,0x10010,0);
    FUN_004c4040();
    FUN_00559c79(0);
  }
  return;
}


