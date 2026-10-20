/* spel.dat — game/Par_Birds.cpp: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00459280 FUN_00459280 ==== */

void __thiscall FUN_00459280(void *this)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  int i;
  undefined4 uVar4;
  int this_val;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_68 [12];
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_28;
  undefined4 local_24;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a7fd;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  this_val = *(int *)((int)this + 0xac);
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = this;
  for (; pvVar2 = local_18, this_val != 0; this_val = FUN_0045e0d0(this_val)) {
    pfVar3 = (float *)FUN_0045e090(this_val);
    local_28 = *pfVar3;
    i = FUN_0045e090(this_val);
    local_24 = *(undefined4 *)(i + 4);
    i = FUN_0045e090(this_val);
    uVar4 = local_24;
    fVar1 = *(float *)(i + 8);
    puVar5 = (undefined4 *)((int)pvVar2 + 0x10);
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
    FUN_00459580(this_val);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004593e0 FUN_004593e0 ==== */

void * __thiscall
FUN_004593e0(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 __ftol_result;
  float10 fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a80f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045ded0(this,param_2,param_3,param_4,param_5);
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00576840;
  iVar1 = FUN_004b75a0(&DAT_00712130,s_par_Bird_005a5130);
  *(int *)((int)this + 0x60) = iVar1;
  FUN_004602e0(DAT_0073b168,0,(float)*(int *)(DAT_0073b168 + iVar1 * 9) - 1.0);
  __ftol_result = __ftol();
  *(undefined4 *)((int)this + 100) = __ftol_result;
  fVar2 = (float10)FUN_004602e0();
  *(float *)((int)this + 0x70) = (float)fVar2;
  FUN_004602e0();
  __ftol_result = __ftol();
  *(undefined4 *)((int)this + 0x74) = __ftol_result;
  ExceptionList = local_c;
  return this;
}


/* ==== 004594a0 FUN_004594a0 ==== */

int __thiscall FUN_004594a0(void *this,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  undefined2 uVar4;
  int i;
  uint3 uVar3;
  
  uVar4 = (undefined2)((uint)in_EAX >> 0x10);
  if (0.025 < *(float *)((int)this + 0x70)) {
    if (*(int *)((int)this + 0x74) == 0) {
      i = *(int *)((int)this + 100);
      if (i < *(int *)(DAT_0073b168 + *(int *)((int)this + 0x60) * 9) + -1) {
        i = i + 1;
        *(int *)((int)this + 100) = i;
      }
      else {
        i = i + -1;
        *(undefined4 *)((int)this + 0x74) = 1;
        *(int *)((int)this + 100) = i;
      }
    }
    else {
      i = *(int *)((int)this + 100);
      if (i < 1) {
        i = i + 1;
        *(undefined4 *)((int)this + 0x74) = 0;
        *(int *)((int)this + 100) = i;
      }
      else {
        i = i + -1;
        *(int *)((int)this + 100) = i;
      }
    }
    uVar4 = (undefined2)((uint)i >> 0x10);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  *(float *)((int)this + 0x70) = param_2 + *(float *)((int)this + 0x70);
  fVar2 = param_2 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = fVar2;
  fVar1 = *(float *)((int)this + 8);
  uVar3 = (uint3)(CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar2 == fVar1) << 0xe) >> 8);
  if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
    return (uint)uVar3 << 8;
  }
  *(float *)((int)this + 0xc) = param_2 * *(float *)((int)this + 0x34) + *(float *)((int)this + 0xc)
  ;
  *(float *)((int)this + 0x10) =
       param_2 * *(float *)((int)this + 0x38) + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) =
       param_2 * *(float *)((int)this + 0x3c) + *(float *)((int)this + 0x14);
  return CONCAT31(uVar3,1);
}


/* ==== 00459560 FUN_00459560 ==== */

void FUN_00459560(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_004594a0(in_ECX,param_1,param_2);
  return;
}


/* ==== 00459580 FUN_00459580 ==== */

void __thiscall FUN_00459580(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00459582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 4))();
  return;
}


