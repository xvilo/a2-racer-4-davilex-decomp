/* spel.dat — game/car_dmg.cpp: 64 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00424e30 FUN_00424e30 ==== */

void __thiscall FUN_00424e30(void *this,undefined1 *this_val_2,undefined1 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  
  puStack_8 = &LAB_0056a0ca;
  local_c = ExceptionList;
  local_4 = 0;
  if (this_val_2 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *this_val_2 = *param_2;
    FUN_004028f0(this_val_2,0);
    FUN_004093c0(this_val_2,param_2,0,0xffffffff);
    local_4._0_1_ = 1;
    this_val_2[0x10] = param_2[0x10];
    *(undefined4 *)(this_val_2 + 0x14) = 0;
    *(undefined4 *)(this_val_2 + 0x18) = 0;
    *(undefined4 *)(this_val_2 + 0x1c) = 0;
    FUN_004093c0(this_val_2 + 0x10,param_2 + 0x10,0,0xffffffff);
    this_val = this_val_2 + 0x20;
    local_4._0_1_ = 2;
    *this_val = param_2[0x20];
    FUN_004028f0(this_val,0);
    FUN_004093c0(this_val,param_2 + 0x20,0,0xffffffff);
    local_4._0_1_ = 3;
    this_val_2[0x30] = param_2[0x30];
    *(undefined4 *)(this_val_2 + 0x34) = 0;
    *(undefined4 *)(this_val_2 + 0x38) = 0;
    *(undefined4 *)(this_val_2 + 0x3c) = 0;
    FUN_004093c0(this_val_2 + 0x30,param_2 + 0x30,0,0xffffffff);
    *(undefined4 *)(this_val_2 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(this_val_2 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(this_val_2 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(this_val_2 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    this_val = this_val_2 + 0x50;
    local_4 = CONCAT31(local_4._1_3_,4);
    *this_val = param_2[0x50];
    FUN_004028f0(this_val,0);
    FUN_004093c0(this_val,param_2 + 0x50,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00424f50 FUN_00424f50 ==== */

/* WARNING: Removing unreachable block (ram,0x00425052) */
/* WARNING: Removing unreachable block (ram,0x00424f97) */
/* WARNING: Removing unreachable block (ram,0x00425122) */

void * __thiscall FUN_00424f50(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint i;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int this_val;
  
  FUN_004093c0(this,param_2,0,0xffffffff);
  FUN_004093c0((int)this + 0x10,param_2 + 0x10,0,0xffffffff);
  uVar1 = *(uint *)(param_2 + 0x28);
  this_val = (int)this + 0x20;
  if (this_val == param_2 + 0x20) {
    FUN_0040f800(this_val,uVar1,0xffffffff);
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 0x24);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar3 = *(undefined1 **)(param_2 + 0x24);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x24) = puVar3;
        *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_00425039;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
        puVar4 = *(undefined4 **)(param_2 + 0x24);
      }
      puVar5 = *(undefined4 **)((int)this + 0x24);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004029e0(this_val,uVar1);
    }
  }
LAB_00425039:
  this_val = (int)this + 0x30;
  uVar1 = *(uint *)(param_2 + 0x38);
  if (this_val == param_2 + 0x30) {
    FUN_0040f800(this_val,uVar1,0xffffffff);
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 0x34);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar3 = *(undefined1 **)(param_2 + 0x34);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x34) = puVar3;
        *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_2 + 0x38);
        *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004250f2;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_2 + 0x34);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = *(undefined4 **)((int)this + 0x34);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004029e0(this_val,uVar1);
    }
  }
LAB_004250f2:
  this_val = (int)this + 0x50;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  uVar1 = *(uint *)(param_2 + 0x58);
  if (this_val == param_2 + 0x50) {
    FUN_0040f800(this_val,uVar1,0xffffffff);
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 0x54);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar3 = *(undefined1 **)(param_2 + 0x54);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x54) = puVar3;
        *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        puVar3[-1] = puVar3[-1] + '\x01';
        return this;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_2 + 0x54);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = *(undefined4 **)((int)this + 0x54);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(uint *)((int)this + 0x58) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 0x54) + uVar1) = 0;
      return this;
    }
  }
  return this;
}


/* ==== 00425200 FUN_00425200 ==== */

void __thiscall FUN_00425200(void *this)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* ==== 00425220 FUN_00425220 ==== */

void __thiscall FUN_00425220(void *this,undefined4 param_2)

{
  *(undefined4 *)this = param_2;
  return;
}


/* ==== 00425230 FUN_00425230 ==== */

undefined4 __thiscall FUN_00425230(void *this)

{
  return *(undefined4 *)this;
}


/* ==== 00425240 FUN_00425240 ==== */

void __thiscall FUN_00425240(void *this,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  
  if ((0.0 <= param_2) && (param_2 <= param_3)) {
    *(float *)((int)this + 8) = param_3;
    *(float *)((int)this + 4) = param_2;
    iVar1 = FUN_00426ba0(&DAT_005d3460);
    iVar2 = FUN_00426b90(&DAT_005d3460);
    *(float *)((int)this + 0x10) =
         (float)(iVar1 - iVar2) / (*(float *)((int)this + 8) - *(float *)((int)this + 4));
    return;
  }
  FUN_004c4150(s__s__d____Impulse_values_invalid__00595c34,
               s_C__Work_A2IV_Game_prog_car_dmg_c_00595c10,0xca);
  return;
}


/* ==== 004252c0 FUN_004252c0 ==== */

float10 __thiscall FUN_004252c0(void *this)

{
  return (float10)*(float *)((int)this + 4);
}


/* ==== 004252d0 FUN_004252d0 ==== */

float10 __thiscall FUN_004252d0(void *this)

{
  return (float10)*(float *)((int)this + 8);
}


/* ==== 004252e0 FUN_004252e0 ==== */

void FUN_004252e0(uint param_1)

{
  int in_ECX;
  
  param_1 = param_1 & ((int)param_1 < 0) - 1;
  if (0x44c < (int)param_1) {
    param_1 = 0x44c;
  }
  *(uint *)(in_ECX + 0xc) = param_1;
  return;
}


/* ==== 00425300 FUN_00425300 ==== */

undefined4 __thiscall FUN_00425300(void *this)

{
  return *(undefined4 *)((int)this + 0xc);
}


/* ==== 00425310 FUN_00425310 ==== */

void __thiscall FUN_00425310(void *this,float param_2)

{
  int __ftol_result;
  
  if (*(float *)((int)this + 4) < param_2) {
    FUN_00426b90(&DAT_005d3460);
    __ftol_result = __ftol();
    *(int *)((int)this + 0xc) = __ftol_result;
    if (0x44c < __ftol_result) {
      *(undefined4 *)((int)this + 0xc) = 0x44c;
    }
  }
  return;
}


/* ==== 00425380 FUN_00425380 ==== */

void __thiscall FUN_00425380(void *this)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xe1c) = 0;
  *(undefined4 *)this = 5;
  *(undefined4 *)((int)this + 0xe18) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe20) = 0x44d;
  *(undefined4 *)((int)this + 0xe24) = 0x44d;
  return;
}


/* ==== 00425490 FUN_00425490 ==== */

void __thiscall FUN_00425490(void *this,int param_2)

{
  int i;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  i = FUN_004a7790(*(undefined4 *)((int)this + param_2 * 0x48 + 0x14),
                   *(undefined4 *)((int)this + param_2 * 0x48 + 0x18),
                   *(undefined4 *)((int)this + param_2 * 0x48 + 0x1c),0,0,0,
                   *(undefined4 *)((int)this + param_2 * 0x48 + 8),0,&LAB_004253b0,0,0);
  *(int *)((int)this + param_2 * 0x48 + 0x10) = i;
  if (0x44c < *(int *)((int)this + param_2 * 0x48 + 0x38)) {
    *(undefined4 *)((int)this + param_2 * 0x48 + 0x44) = 2;
  }
  iVar2 = *(int *)((int)this + 0xe18);
  for (iVar3 = *(int *)(*(int *)((int)this + 0xe18) * 0xf0 + 0x44 + DAT_00715e50); iVar3 != -1;
      iVar3 = *(int *)(iVar3 * 0xf0 + 0x44 + DAT_00715e50)) {
    iVar2 = iVar3;
  }
  *(int *)(iVar2 * 0xf0 + 0x44 + DAT_00715e50) = i;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  iVar2 = i * 0xf0;
  *(undefined4 *)(iVar2 + 0x48 + DAT_00715e50) = *(undefined4 *)((int)this + 0xe18);
  *(undefined4 *)(iVar2 + 0x34 + DAT_00715e50) =
       *(undefined4 *)(*(int *)((int)this + 0xe18) * 0xf0 + 0x34 + DAT_00715e50);
  *(undefined4 *)(iVar2 + 0x68 + DAT_00715e50) = 1;
  puVar1 = (undefined4 *)(iVar2 + 0xbc + DAT_00715e50);
  FUN_004a79d0(i,*puVar1,puVar1[1],puVar1[2],0,0,0,0x40a00000,0x3f333333,0x3e4ccccd,0,0,0,1);
  FUN_004a7190(i);
  iVar3 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24 + DAT_00715e50) * 0xa9;
  puVar1 = (undefined4 *)FUN_004a1e20(local_40);
  puVar4 = (undefined4 *)(iVar3 + 0x10);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  i = DAT_0073b0d0 + *(int *)(iVar2 + 0x24 + DAT_00715e50) * 0xa9;
  puVar1 = (undefined4 *)FUN_004a1dd0(&local_4c);
  *(undefined4 *)(i + 0x50) = *puVar1;
  *(undefined4 *)(i + 0x54) = puVar1[1];
  *(undefined4 *)(i + 0x58) = puVar1[2];
  FUN_004f21f0(*(undefined4 *)(*(int *)(iVar2 + 0x10 + DAT_00715e50) + 8),0);
  *(uint *)(iVar2 + 0x1c + DAT_00715e50) = *(uint *)(iVar2 + 0x1c + DAT_00715e50) | 2;
  return;
}


/* ==== 004256c0 FUN_004256c0 ==== */

undefined4 __thiscall FUN_004256c0(void *this)

{
  int *piVar1;
  int i;
  
  if (*(int *)((int)this + 0xe18) == -1) {
    FUN_004c4150(s__s__d____Car_object_index_is_not_00595ca0,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00595c7c,0x212);
  }
  else {
    i = 0;
    if (0 < *(int *)((int)this + 4)) {
      piVar1 = (int *)((int)this + 0x38);
      do {
        if ((piVar1[-0xb] == *(int *)this) && (0 < *piVar1)) {
          *(undefined4 *)(piVar1[-10] * 0xf0 + 0x5c + DAT_00715e50) = 1;
        }
        i = i + 1;
        piVar1 = piVar1 + 0x12;
      } while (i < *(int *)((int)this + 4));
      return 1;
    }
  }
  return 1;
}


/* ==== 00425730 FUN_00425730 ==== */

void __thiscall FUN_00425730(void *this,int param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int i;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [72];
  
  *(undefined4 *)((int)this + param_2 * 0x48 + 0x44) = 1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + (param_2 * 9 + 9) * 8) = DVar1;
  iVar3 = *(int *)((int)this + param_2 * 0x48 + 0x10) * 0xf0;
  (**(code **)(**(int **)(iVar3 + 0x10 + DAT_00715e50) + 0x10))
            ((int)this + param_2 * 0x48 + 0x20,(int)this + param_2 * 0x48 + 0x2c);
  iVar4 = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1e20(auStack_48);
  puVar5 = (undefined4 *)(iVar4 + 0x10);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  i = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1dd0(&stack0xffffffac);
  *(undefined4 *)(i + 0x50) = *puVar2;
  *(undefined4 *)(i + 0x54) = puVar2[1];
  *(undefined4 *)(i + 0x58) = puVar2[2];
  return;
}


/* ==== 00425800 FUN_00425800 ==== */

void FUN_00425800(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 this_val;
  int iVar3;
  
  uVar1 = FUN_00558625();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  uVar2 = FUN_00450900((&PTR_s_DAMAGE_GLASS_00595cdc)[uVar1]);
  this_val = FUN_0049eb50(&DAT_006fbb5c,uVar2);
  iVar3 = FUN_0049e630(this_val);
  if (iVar3 == 0) {
    FUN_00450c90(param_1,uVar2,0);
  }
  return;
}


/* ==== 00425850 FUN_00425850 ==== */

void __thiscall FUN_00425850(void *this,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  int i;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [4];
  undefined1 auStack_48 [72];
  
  *(undefined4 *)((int)this + param_2 * 0x48 + 0x44) = 2;
  iVar3 = *(int *)((int)this + param_2 * 0x48 + 0x10);
  i = *(int *)((int)this + 0xe18);
  for (iVar4 = *(int *)(*(int *)((int)this + 0xe18) * 0xf0 + 0x44 + DAT_00715e50); iVar4 != iVar3;
      iVar4 = *(int *)(iVar4 * 0xf0 + 0x44 + DAT_00715e50)) {
    i = iVar4;
  }
  iVar3 = iVar3 * 0xf0;
  *(undefined4 *)(i * 0xf0 + 0x44 + DAT_00715e50) = *(undefined4 *)(iVar3 + 0x44 + DAT_00715e50);
  *(undefined4 *)(iVar3 + 0x48 + DAT_00715e50) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x44 + DAT_00715e50) = 0xffffffff;
  FUN_00425800(*(undefined4 *)((int)this + 0xe18));
  if (*(int *)((int)this + param_2 * 0x48 + 0x4c) != 0) {
    *(undefined4 *)(iVar3 + 0x5c + DAT_00715e50) = 0;
    return;
  }
  i = DAT_0073b0d0 + *(int *)(*(int *)((int)this + 0xe18) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  pfVar1 = (float *)FUN_004b42a0(local_4c,(int)this + param_2 * 0x48 + 0x20,i + 0x10);
  local_58 = *(float *)(i + 0x50) + *pfVar1;
  local_54 = *(float *)(i + 0x54) + pfVar1[1];
  local_50 = *(float *)(i + 0x58) + pfVar1[2];
  (**(code **)(**(int **)(iVar3 + 0x10 + DAT_00715e50) + 0x10))
            (&local_58,(int)this + param_2 * 0x48 + 0x2c);
  FUN_004f21f0(*(undefined4 *)(*(int *)(iVar3 + 0x10 + DAT_00715e50) + 8),1);
  FUN_004f32e0(*(undefined4 *)(*(int *)(iVar3 + 0x10 + DAT_00715e50) + 8));
  iVar4 = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1e20(auStack_48);
  puVar5 = (undefined4 *)(iVar4 + 0x10);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1dd0(&local_54);
  *(undefined4 *)(iVar3 + 0x50) = *puVar2;
  *(undefined4 *)(iVar3 + 0x54) = puVar2[1];
  *(undefined4 *)(iVar3 + 0x58) = puVar2[2];
  return;
}


/* ==== 00425a40 FUN_00425a40 ==== */

void __thiscall FUN_00425a40(void *this,int param_2)

{
  DWORD DVar1;
  int i;
  int *piVar2;
  
  i = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = (int *)((int)this + 0x38);
    do {
      if ((piVar2[-0xb] == *(int *)this) && (piVar2[3] != 2)) {
        if ((*piVar2 < param_2) && ((piVar2[3] == 0 && (piVar2[2] == 0)))) {
          FUN_00425730(this,i);
        }
        DVar1 = GetTickCount();
        if (((4000 < DVar1 - piVar2[4]) && (piVar2[1] < param_2)) && (piVar2[3] == 1)) {
          FUN_00425850(this,i);
        }
      }
      i = i + 1;
      piVar2 = piVar2 + 0x12;
    } while (i < *(int *)((int)this + 4));
  }
  return;
}


/* ==== 00425ac0 FUN_00425ac0 ==== */

void __thiscall FUN_00425ac0(void *this,int param_2)

{
  undefined4 uVar1;
  int k;
  int m;
  int iVar2;
  int *piVar3;
  int j;
  int iVar4;
  int iVar5;
  int i;
  int local_4;
  
  i = 1;
  do {
    j = 0;
    iVar4 = 0x44c;
    k = 0;
    if (0 < *(int *)((int)this + 4)) {
      piVar3 = (int *)((int)this + 0x38);
      do {
        if ((piVar3[-0xb] == *(int *)this) && (piVar3[2] == i)) {
          if (*piVar3 < iVar4) {
            iVar4 = *piVar3;
            local_4 = k;
          }
          j = j + 1;
        }
        k = k + 1;
        piVar3 = piVar3 + 0x12;
      } while (k < *(int *)((int)this + 4));
      if ((0 < j) && (iVar4 < param_2)) {
        iVar5 = 0;
        m = FUN_00558625();
        m = m % j;
        k = *(int *)((int)this + 4);
        j = 0;
        if (0 < k) {
          do {
            iVar2 = j;
            if ((*(int *)((int)this + j * 0x48 + 0xc) == *(int *)this) &&
               (*(int *)((int)this + j * 0x48 + 0x40) == i)) {
              if (m == 0) {
                iVar2 = k;
                iVar5 = j;
              }
              m = m + -1;
            }
            j = iVar2 + 1;
          } while (j < k);
        }
        uVar1 = *(undefined4 *)((int)this + local_4 * 0x48 + 0x3c);
        *(undefined4 *)((int)this + local_4 * 0x48 + 0x38) =
             *(undefined4 *)((int)this + iVar5 * 0x48 + 0x38);
        *(undefined4 *)((int)this + local_4 * 0x48 + 0x3c) =
             *(undefined4 *)((int)this + iVar5 * 0x48 + 0x3c);
        *(undefined4 *)((int)this + iVar5 * 0x48 + 0x3c) = uVar1;
        *(int *)((int)this + iVar5 * 0x48 + 0x38) = iVar4;
        *(undefined4 *)((int)this + iVar5 * 0x48 + 0x40) = 0;
        FUN_00425730(this,iVar5);
      }
    }
    i = i + 1;
  } while (i < 0xb);
  return;
}


/* ==== 00425bb0 FUN_00425bb0 ==== */

void __thiscall FUN_00425bb0(void *this)

{
  bool bVar1;
  int *piVar2;
  int i;
  
  i = *(int *)((int)this + 4);
  bVar1 = true;
  if (0 < i) {
    piVar2 = (int *)((int)this + 0x44);
    do {
      if (piVar2[-0xe] == *(int *)this) {
        if ((bVar1) && (*piVar2 == 2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      piVar2 = piVar2 + 0x12;
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 00425be0 FUN_00425be0 ==== */

uint __thiscall FUN_00425be0(void *this)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  
  uVar3 = in_EAX & 0xffffff00;
  iVar2 = *(int *)((int)this + 0xe1c) * 0xa9;
  if (*(int *)this < *(int *)(DAT_0073b168 + *(int *)(iVar2 + 4 + DAT_0073b0d0) * 9) + -1) {
    iVar1 = *(int *)this + 1;
    *(int *)this = iVar1;
    *(int *)(iVar2 + 8 + DAT_0073b0d0) = iVar1;
    uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}


/* ==== 00425c30 FUN_00425c30 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00425c30(void *this,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint j;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_19d;
  int i;
  float local_198;
  float local_194;
  int local_190;
  float local_18c;
  uint local_188;
  undefined1 local_184 [4];
  byte local_180 [64];
  char local_140 [64];
  undefined1 local_100 [256];
  
  local_19d = 0;
  local_190 = FUN_004c3cd0(PTR_s_Damageable_Car_Objects_00595b70,PTR_s_count_00595b74);
  i = 0;
  if (local_190 < 1) {
    return 0;
  }
  do {
    FUN_005587a3(local_184,s__d_00595d28,i);
    FUN_004c3d10(PTR_s_Damageable_Car_Objects_00595b70,local_184,local_100,0x100);
    iVar3 = FUN_004c3d60(local_100,0);
    if ((iVar3 == 0xf) || (iVar3 == 0xe)) {
      FUN_004c3f10(0,(char *)local_180,0x40);
      j = 0xffffffff;
      pbVar6 = local_180;
      do {
        if (j == 0) break;
        j = j - 1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      uVar2 = *(uint *)(param_2 + 8);
      local_188 = ~j - 1;
      j = local_188;
      if (uVar2 < local_188) {
        j = uVar2;
      }
      bVar8 = false;
      iVar5 = 0;
      bVar9 = true;
      pbVar6 = *(byte **)(param_2 + 4);
      pbVar7 = local_180;
      do {
        if (j == 0) break;
        j = j - 1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar9);
      if (!bVar9) {
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if ((((iVar5 == 0) && (local_188 <= uVar2)) && (uVar2 == local_188)) &&
         (*(int *)((int)this + 4) < 0x32)) {
        FUN_004c3f10(1,local_140,0x40);
        uVar4 = FUN_004b75a0(&DAT_00712130,local_140);
        *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 8) = uVar4;
        *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0xc) = param_3;
        FUN_004354a0(2,(int)this + *(int *)((int)this + 4) * 0x48 + 0x14);
        FUN_004354a0(3,(int)this + *(int *)((int)this + 4) * 0x48 + 0x18);
        FUN_004354a0(4,(int)this + *(int *)((int)this + 4) * 0x48 + 0x1c);
        *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x18) =
             *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x18) - 1.0;
        FUN_004354a0(5,(int)this + *(int *)((int)this + 4) * 0x48 + 0x20);
        FUN_004354a0(6,(int)this + *(int *)((int)this + 4) * 0x48 + 0x24);
        FUN_004354a0(7,(int)this + *(int *)((int)this + 4) * 0x48 + 0x28);
        FUN_004354a0(8,&local_18c);
        FUN_004354a0(9,&local_198);
        FUN_004354a0(10,&local_194);
        *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x2c) =
             local_18c * 0.0027777778 * _DAT_005b23b8;
        *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x30) =
             local_198 * 0.0027777778 * _DAT_005b23b8;
        *(float *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x34) =
             local_194 * 0.0027777778 * _DAT_005b23b8;
        uVar4 = FUN_004c3ec0(0xb);
        *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x38) = uVar4;
        uVar4 = FUN_004c3ec0(0xc);
        *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x3c) = uVar4;
        uVar4 = FUN_004c3ec0(0xd);
        *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x4c) = uVar4;
        *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x44) = 0;
        *(undefined4 *)((int)this + (*(int *)((int)this + 4) + 1) * 0x48) = 0;
        if (iVar3 == 0xf) {
          uVar4 = FUN_004c3ec0(0xe);
          *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x40) = uVar4;
          iVar3 = *(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x40);
          if ((iVar3 < 1) || (10 < iVar3)) {
            FUN_004c4150(s__s__d____Invalid_group_index__Sh_00595d50,
                         s_C__Work_A2IV_Game_prog_car_dmg_c_00595d2c,0x3fe,10);
          }
        }
        else {
          *(undefined4 *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x40) = 0;
        }
        if (*(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x3c) <
            *(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x38)) {
          FUN_004c4150(s__s__d____Damaged_state_level_is_g_00595db0,
                       s_C__Work_A2IV_Game_prog_car_dmg_c_00595d8c,0x40b);
        }
        FUN_00425490(this,*(undefined4 *)((int)this + 4));
        local_19d = 1;
        *(undefined4 *)
         (*(int *)((int)this + *(int *)((int)this + 4) * 0x48 + 0x10) * 0xf0 + 0x5c + DAT_00715e50)
             = 0;
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      }
    }
    else {
      FUN_004c4150(s__s__d____Car_object_description_h_00595e1c,
                   s_C__Work_A2IV_Game_prog_car_dmg_c_00595df8,0x41d);
    }
    i = i + 1;
    if (local_190 <= i) {
      return local_19d;
    }
  } while( true );
}


/* ==== 00425fb0 FUN_00425fb0 ==== */

undefined1 __thiscall FUN_00425fb0(void *this,int this_val)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint j;
  uint m;
  int k;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_1b1;
  int i;
  undefined1 local_1ac [4];
  char *local_1a8;
  uint local_1a4;
  undefined4 local_1a0;
  int local_19c;
  int *local_198;
  int local_194;
  undefined1 local_190 [4];
  char local_18c [64];
  char local_14c [64];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a0eb;
  local_c = ExceptionList;
  local_1b1 = 0;
  ExceptionList = &local_c;
  local_198 = this;
  iVar2 = FUN_00448c90(&DAT_006fa558,s_Car_Damage_Settings_00595e60);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60();
  local_194 = FUN_004c3cd0(PTR_s_Damageable_Cars_00595b78,PTR_s_count_00595b74,puVar3);
  i = 0;
  if (local_194 < 1) {
    local_1b1 = 0;
  }
  else {
    do {
      FUN_005587a3(local_190,s__d_00595e74,i);
      FUN_004c3d10(PTR_s_Damageable_Cars_00595b78,local_190,local_10c,0x100);
      iVar2 = FUN_004c3d60(local_10c,0);
      local_19c = iVar2;
      if (iVar2 < 3) {
        FUN_004c4150(s__s__d____Damageable_car_entry_ha_00595e9c,
                     s_C__Work_A2IV_Game_prog_car_dmg_c_00595e78,0x488);
      }
      else {
        FUN_004c3f10(0,local_18c,0x40);
        j = 0xffffffff;
        pcVar5 = local_18c;
        do {
          if (j == 0) break;
          j = j - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar4 = FUN_0040fc80(this_val,0,*(undefined4 *)(this_val + 8),local_18c,~j - 1);
        if (iVar4 == 0) {
          iVar4 = FUN_004c3ec0(1);
          *(int *)((int)this + 0xe20) = iVar4;
          iVar4 = FUN_004c3ec0(2);
          k = 3;
          *(int *)((int)this + 0xe24) = iVar4;
          if (3 < iVar2) {
            do {
              FUN_004c3f10(k,local_14c,0x40);
              local_1ac[0] = local_1b1;
              FUN_004028f0(local_1ac,0);
              j = 0xffffffff;
              pcVar5 = local_14c;
              do {
                if (j == 0) break;
                j = j - 1;
                cVar1 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 != '\0');
              j = ~j - 1;
              cVar1 = FUN_00402a00(local_1ac,j,1);
              if (cVar1 != '\0') {
                pcVar5 = local_14c;
                pcVar6 = local_1a8;
                for (m = j >> 2; m != 0; m = m - 1) {
                  *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
                  pcVar5 = pcVar5 + 4;
                  pcVar6 = pcVar6 + 4;
                }
                for (m = j & 3; m != 0; m = m - 1) {
                  *pcVar6 = *pcVar5;
                  pcVar5 = pcVar5 + 1;
                  pcVar6 = pcVar6 + 1;
                }
                local_1a8[j] = '\0';
                this = local_198;
                local_1a4 = j;
              }
              local_4 = 0;
              FUN_00425c30(this,local_1ac,k + 2);
              local_4 = 0xffffffff;
              if (local_1a8 != (char *)0x0) {
                cVar1 = local_1a8[-1];
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_0054b339(local_1a8 + -1);
                }
                else {
                  local_1a8[-1] = cVar1 + -1;
                }
              }
              local_1a8 = (char *)0x0;
              local_1a4 = 0;
              local_1a0 = 0;
              FUN_004c3d60(local_10c,0);
              k = k + 1;
            } while (k < local_19c);
          }
          if (*(int *)this <
              *(int *)(DAT_0073b168 +
                      *(int *)(DAT_0073b0d0 + *(int *)((int)this + 0xe1c) * 0xa9 + 4) * 9)) {
            FUN_004256c0(this);
            *(int *)(DAT_0073b0d0 + *(int *)((int)this + 0xe1c) * 0xa9 + 8) = *(int *)this;
          }
          local_1b1 = 1;
        }
      }
      i = i + 1;
    } while (i < local_194);
  }
  ExceptionList = local_c;
  return local_1b1;
}


/* ==== 00426270 FUN_00426270 ==== */

void FUN_00426270(void)

{
  return;
}


/* ==== 00426280 FUN_00426280 ==== */

void __thiscall FUN_00426280(void *this,undefined4 param_2)

{
  char cVar1;
  undefined4 this_val;
  int this_val_3;
  int this_val_2;
  
  FUN_00425ac0(this,param_2);
  FUN_00425a40(this,param_2);
  this_val = FUN_00426f60(&DAT_005d3460,*(undefined4 *)((int)this + 0xe18));
  this_val_3 = FUN_00425300(this_val);
  if ((*(int *)((int)this + 0xe20) < this_val_3) &&
     (this_val_2 = *(int *)((int)this + 0xe18) * 0xf0 + DAT_00715e50,
     8 < *(int *)(this_val_2 + 0xac))) {
    this_val_2 = FUN_004a8600(this_val_2,8);
    *(undefined1 *)(DAT_0073b0d0 + this_val_2 * 0xa9 + 0x90) = 0;
  }
  if ((*(int *)((int)this + 0xe24) < this_val_3) &&
     (this_val_3 = DAT_00715e50 + *(int *)((int)this + 0xe18) * 0xf0,
     7 < *(int *)(this_val_3 + 0xac))) {
    this_val_3 = FUN_004a8600(this_val_3,4);
    *(undefined1 *)(DAT_0073b0d0 + this_val_3 * 0xa9 + 0x90) = 0;
    this_val_3 = FUN_004a8600(*(int *)((int)this + 0xe18) * 0xf0 + DAT_00715e50,5);
    *(undefined1 *)(DAT_0073b0d0 + this_val_3 * 0xa9 + 0x90) = 0;
    this_val_3 = FUN_004a8600(*(int *)((int)this + 0xe18) * 0xf0 + DAT_00715e50,6);
    *(undefined1 *)(DAT_0073b0d0 + this_val_3 * 0xa9 + 0x90) = 0;
    this_val_3 = FUN_004a8600(*(int *)((int)this + 0xe18) * 0xf0 + DAT_00715e50,7);
    *(undefined1 *)(DAT_0073b0d0 + this_val_3 * 0xa9 + 0x90) = 0;
  }
  cVar1 = FUN_00425bb0(this);
  if (cVar1 != '\0') {
    cVar1 = FUN_00425be0(this);
    if (cVar1 != '\0') {
      FUN_004256c0(this);
    }
  }
  return;
}


/* ==== 00426420 FUN_00426420 ==== */

void __thiscall FUN_00426420(void *this,int param_2)

{
  *(int *)((int)this + 0xe18) = param_2;
  *(undefined4 *)((int)this + 0xe1c) = *(undefined4 *)(param_2 * 0xf0 + 0x24 + DAT_00715e50);
  return;
}


/* ==== 00426450 FUN_00426450 ==== */

undefined4 __thiscall FUN_00426450(void *this)

{
  return *(undefined4 *)((int)this + 0xe18);
}


/* ==== 00426460 FUN_00426460 ==== */

void __thiscall FUN_00426460(void *this,char param_2)

{
  int iVar1;
  int *piVar2;
  int i;
  
  i = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = (int *)((int)this + 0x10);
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 0x12;
      i = i + 1;
      *(uint *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) = (uint)(param_2 != '\0');
    } while (i < *(int *)((int)this + 4));
  }
  return;
}


/* ==== 004264b0 FUN_004264b0 ==== */

void * __thiscall FUN_004264b0(void *this)

{
  undefined1 *puVar1;
  DWORD DVar2;
  int i;
  int j;
  
  i = 0xfa;
  j = (int)this + 0x10;
  do {
    FUN_00425200(j);
    j = j + 0x14;
    i = i + -1;
  } while (i != 0);
  j = (int)this + 0x1398;
  i = 0xfa;
  do {
    FUN_00425380(j);
    j = j + 0xe28;
    i = i + -1;
  } while (i != 0);
  puVar1 = (undefined1 *)((int)this + 0xde6ac);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  j = 0xfa;
  do {
    *(undefined4 *)(puVar1 + -4) = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 1;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar1 = puVar1 + 0x10;
    j = j + -1;
  } while (j != 0);
  DVar2 = GetTickCount();
  FUN_0055861b(DVar2);
  return this;
}


/* ==== 00426530 FUN_00426530 ==== */

void __thiscall FUN_00426530(void *this,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float local_30 [3];
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  DVar4 = GetTickCount();
  if (200 < (int)(DVar4 - *(int *)(param_2 * 0x10 + 0xde6a8 + (int)this))) {
    iVar5 = FUN_00425230((int)this + param_2 * 0x14 + 0x10);
    iVar5 = iVar5 * 0xf0;
    iVar6 = FUN_004a8c50(iVar5 + DAT_00715e50);
    iVar7 = FUN_00558625();
    local_30[0] = (float)(iVar7 % 10 + -5);
    local_30[1] = 5.0;
    local_30[2] = ABS((*(float *)(DAT_0073b5c8 + 0x60 + iVar6 * 0xac) -
                      *(float *)(DAT_0073b5c8 + 0x18 + iVar6 * 0xac)) * 0.5);
    if (*(int *)((param_2 + 0xde6b) * 0x10 + (int)this) == 0) {
      local_30[2] = local_30[2] * -1.0;
    }
    iVar6 = iVar5 + 0xbc + DAT_00715e50;
    local_18 = *(undefined4 *)(iVar5 + 0xbc + DAT_00715e50);
    local_14 = *(undefined4 *)(iVar6 + 4);
    local_10 = *(undefined4 *)(iVar6 + 8);
    puVar8 = (undefined4 *)
             FUN_004b42a0(&local_24,&local_18,
                          DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    uVar1 = *puVar8;
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    iVar5 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
    pfVar9 = (float *)FUN_004b42a0(local_c,local_30,iVar5 + 0x10);
    local_24 = *(float *)(iVar5 + 0x50) + *pfVar9;
    local_20 = *(float *)(iVar5 + 0x54) + pfVar9[1];
    local_1c = *(float *)(iVar5 + 0x58) + pfVar9[2];
    FUN_0043dd90(local_24,local_20,local_1c,uVar1,uVar2,uVar3);
    *(DWORD *)(param_2 * 0x10 + 0xde6a8 + (int)this) = DVar4;
  }
  return;
}


/* ==== 004266f0 FUN_004266f0 ==== */

void __thiscall FUN_004266f0(void *this,int param_2)

{
  int iVar1;
  int this_val;
  
  this_val = (int)this + param_2 * 0x14 + 0x10;
  iVar1 = FUN_00425300(this_val);
  if ((*(int *)((int)this + 0xc) < iVar1) &&
     (*(char *)(param_2 * 0x10 + 0xde6ac + (int)this) == '\0')) {
    this_val = FUN_00425230(this_val);
    this_val = this_val * 0xf0;
    if (4 < *(int *)(DAT_00715e50 + this_val + 0xac)) {
      iVar1 = FUN_004a8600(DAT_00715e50 + this_val,0);
      *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x7c) = 0x42700000;
      iVar1 = FUN_004a8600(this_val + DAT_00715e50,1);
      *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x7c) = 0x42700000;
      iVar1 = FUN_004a8600(this_val + DAT_00715e50,2);
      *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x7c) = 0x42700000;
      this_val = FUN_004a8600(this_val + DAT_00715e50,3);
      *(undefined4 *)(DAT_0073b0d0 + this_val * 0xa9 + 0x7c) = 0x42700000;
      *(undefined1 *)(param_2 * 0x10 + 0xde6ac + (int)this) = 1;
    }
  }
  return;
}


/* ==== 00426800 FUN_00426800 ==== */

int __thiscall FUN_00426800(void *this,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar2 = 0;
  do {
    iVar1 = FUN_00426450((int)this + iVar2 * 0xe28 + 0x1398);
    iVar3 = iVar2;
    if (iVar1 == param_2) {
      iVar3 = 0xfa;
      iVar4 = iVar2;
    }
    iVar2 = iVar3 + 1;
  } while (iVar2 < 0xfa);
  if (iVar4 == -1) {
    FUN_004c4150(s__s__d____Car_object_Handler_for_c_00595f04,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00595ee0,0x5f0);
  }
  return (int)this + iVar4 * 0xe28 + 0x1398;
}


/* ==== 00426880 FUN_00426880 ==== */

void __thiscall FUN_00426880(void *this,int param_2,float param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  int this_val;
  
  this_val = (int)this + param_2 * 0x14 + 0x10;
  uVar1 = FUN_00425300(this_val);
  FUN_00426280((int)this + param_2 * 0xe28 + 0x1398,uVar1);
  FUN_004266f0(this,param_2);
  uVar1 = FUN_00425230(this_val);
  fVar2 = (float10)FUN_004252c0(this_val);
  if ((float10)param_3 < fVar2) {
    FUN_0045b3b0(uVar1,uVar1,param_4);
    return;
  }
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045bd30(uVar1,uVar1);
  return;
}


/* ==== 00426920 FUN_00426920 ==== */

void __thiscall FUN_00426920(void *this,int param_2,float param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  int this_val;
  
  this_val = (int)this + param_2 * 0x14 + 0x10;
  uVar1 = FUN_00425300(this_val);
  FUN_00426280((int)this + param_2 * 0xe28 + 0x1398,uVar1);
  FUN_004266f0(this,param_2);
  uVar1 = FUN_00425230(this_val);
  fVar2 = (float10)FUN_004252c0(this_val);
  if ((float10)param_3 < fVar2) {
    FUN_0045b3b0(uVar1,uVar1,param_4);
    return;
  }
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045bd30(uVar1,uVar1);
  return;
}


/* ==== 004269c0 FUN_004269c0 ==== */

void __thiscall FUN_004269c0(void *this,int param_2,float param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  int this_val;
  
  this_val = (int)this + param_2 * 0x14 + 0x10;
  uVar1 = FUN_00425300(this_val);
  FUN_00426280((int)this + param_2 * 0xe28 + 0x1398,uVar1);
  FUN_004266f0(this,param_2);
  uVar1 = FUN_00425230(this_val);
  fVar2 = (float10)FUN_004252c0(this_val);
  if ((float10)param_3 < fVar2) {
    FUN_0045b3b0(uVar1,uVar1,param_4);
    return;
  }
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045b3b0(uVar1,uVar1,param_4);
  FUN_0045bd30(uVar1,uVar1);
  return;
}


/* ==== 00426a60 FUN_00426a60 ==== */

void FUN_00426a60(void)

{
  return;
}


/* ==== 00426a70 FUN_00426a70 ==== */

void FUN_00426a70(void)

{
  return;
}


/* ==== 00426a80 FUN_00426a80 ==== */

void FUN_00426a80(void)

{
  return;
}


/* ==== 00426a90 FUN_00426a90 ==== */

void __thiscall FUN_00426a90(void *this)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  FUN_004489a0(&DAT_006fa558,s_DAMAGE_INI_00595f54,s_Car_Damage_Settings_00595f40);
  iVar1 = FUN_00448c90(&DAT_006fa558,s_Car_Damage_Settings_00595f60);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  uVar3 = FUN_004c3cd0(PTR_s_Damage_Limits_00595b80,PTR_PTR_00595b84,puVar2);
  *(undefined4 *)this = uVar3;
  uVar3 = FUN_004c3cd0(PTR_s_Damage_Limits_00595b80,PTR_s_Max_00595b88);
  *(undefined4 *)((int)this + 4) = uVar3;
  uVar3 = FUN_004c3cd0(PTR_s_Damage_Levels_00595b8c,PTR_s_clouds_00595b90);
  *(undefined4 *)((int)this + 8) = uVar3;
  uVar3 = FUN_004c3cd0(PTR_s_Damage_Levels_00595b8c,PTR_s_wheels_00595b94);
  *(undefined4 *)((int)this + 0xc) = uVar3;
  if ((*(int *)this < 0) || (*(int *)((int)this + 4) < *(int *)this)) {
    FUN_004c4150(s__s__d____Limit_values_invalid__M_00595f98,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00595f74,0x6c3);
  }
  if ((((*(int *)((int)this + 8) < 0) || (0x44c < *(int *)((int)this + 8))) ||
      (*(int *)((int)this + 0xc) < 0)) || (0x44c < *(int *)((int)this + 0xc))) {
    FUN_004c4150(s__s__d____Damage_level_for_clouds_00596000,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00595fdc,0x6ca,0,0x44c);
  }
  FUN_00427340(this);
  return;
}


/* ==== 00426b90 FUN_00426b90 ==== */

undefined4 __thiscall FUN_00426b90(void *this)

{
  return *(undefined4 *)this;
}


/* ==== 00426ba0 FUN_00426ba0 ==== */

undefined4 __thiscall FUN_00426ba0(void *this)

{
  return *(undefined4 *)((int)this + 4);
}


/* ==== 00426bb0 FUN_00426bb0 ==== */

void __thiscall FUN_00426bb0(void *this,int param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint j;
  uint uVar7;
  uint k;
  int iVar8;
  int iVar9;
  int this_val;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  char local_1b1;
  int i;
  int local_1ac;
  char local_1a4 [4];
  char *local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 local_194 [4];
  void *local_190;
  char local_18c [64];
  byte local_14c [64];
  undefined1 local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  void *this_val_2;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a100;
  pvStack_c = ExceptionList;
  iVar8 = -1;
  local_1ac = -1;
  iVar9 = 0;
  ExceptionList = &pvStack_c;
  local_190 = this;
  do {
    this_val = (int)this + iVar9 * 0x14 + 0x10;
    iVar4 = FUN_00425230(this_val);
    if ((iVar4 == -1) || (iVar4 = FUN_00425230(this_val), this_val = iVar9, iVar4 == param_2)) {
      this_val = 0xfa;
      iVar8 = iVar9;
      local_1ac = iVar9;
    }
    iVar9 = this_val + 1;
  } while (iVar9 < 0xfa);
  if (iVar8 == -1) {
    FUN_004c4150(s__s__d____Too_many_cars_added__Ma_005961b8,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00596194,0x78d);
  }
  else {
    iVar9 = FUN_00448c90(&DAT_006fa558,s_Car_Damage_Settings_0059605c);
    puVar5 = *(undefined1 **)(iVar9 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0057629c;
    }
    FUN_004c3b60();
    iVar9 = FUN_004c3cd0(PTR_s_Damage_Models_00595b7c,PTR_s_count_00595b74,puVar5);
    local_1b1 = '\0';
    i = 0;
    if (0 < iVar9) {
      do {
        FUN_005587a3(local_194,s__d_00596070,i);
        FUN_004c3d10(PTR_s_Damage_Models_00595b7c,local_194,local_10c,0x100);
        this_val = FUN_004c3d60(local_10c,0);
        if (this_val == 7) {
          FUN_004c3f10(0,(char *)local_14c,0x40);
          this_val_2 = local_190;
          j = 0xffffffff;
          pbVar10 = local_14c;
          do {
            if (j == 0) break;
            j = j - 1;
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar1 != 0);
          k = *(uint *)(param_4 + 8);
          uVar7 = ~j - 1;
          j = k;
          if (uVar7 <= k) {
            j = uVar7;
          }
          bVar14 = false;
          this_val = 0;
          bVar15 = true;
          pbVar10 = *(byte **)(param_4 + 4);
          pbVar12 = local_14c;
          do {
            if (j == 0) break;
            j = j - 1;
            bVar14 = *pbVar10 < *pbVar12;
            bVar15 = *pbVar10 == *pbVar12;
            pbVar10 = pbVar10 + 1;
            pbVar12 = pbVar12 + 1;
          } while (bVar15);
          if (!bVar15) {
            this_val = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          }
          if (((this_val == 0) && (uVar7 <= k)) && (k == uVar7)) {
            this_val = (int)local_190 + iVar8 * 0x14 + 0x10;
            FUN_00425220(this_val,param_2);
            if (param_3 == 1) {
              iVar4 = FUN_004c3ec0(4);
              fVar16 = (float)iVar4;
              iVar4 = FUN_004c3ec0(3,fVar16);
            }
            else {
              iVar4 = FUN_004c3ec0(2);
              fVar16 = (float)iVar4;
              iVar4 = FUN_004c3ec0(1,fVar16);
            }
            FUN_00425240(this_val,(float)iVar4,fVar16);
            uVar6 = FUN_004c3ec0(6);
            *(undefined4 *)((iVar8 + 0xde6b) * 0x10 + (int)this_val_2) = uVar6;
            FUN_004c3f10(5,local_18c,0x40);
            this_val_2 = (void *)((int)this_val_2 + iVar8 * 0xe28 + 0x1398);
            FUN_00426420(this_val_2,param_2);
            j = 0xffffffff;
            pcVar11 = local_18c;
            do {
              if (j == 0) break;
              j = j - 1;
              cVar3 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar3 != '\0');
            j = ~j - 1;
            local_1a4[0] = local_1b1;
            local_1a0 = (char *)0x0;
            local_19c = 0;
            local_198 = 0;
            cVar3 = FUN_00402a00(local_1a4,j,1);
            if (cVar3 != '\0') {
              pcVar11 = local_18c;
              pcVar13 = local_1a0;
              for (k = j >> 2; k != 0; k = k - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (k = j & 3; k != 0; k = k - 1) {
                *pcVar13 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              }
              FUN_004029e0(local_1a4,j);
            }
            local_4 = 0;
            cVar3 = FUN_00425fb0(this_val_2,(int)local_1a4);
            local_4 = 0xffffffff;
            if (local_1a0 != (char *)0x0) {
              cVar2 = local_1a0[-1];
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_0054b339(local_1a0 + -1);
              }
              else {
                local_1a0[-1] = cVar2 + -1;
              }
            }
            local_1a0 = (char *)0x0;
            local_19c = 0;
            local_198 = 0;
            if (cVar3 == '\0') {
              FUN_004c4150(s__s__d____Could_not_load_car_obje_00596098,
                           s_C__Work_A2IV_Game_prog_car_dmg_c_00596074,0x76a,local_18c);
            }
            local_1b1 = '\x01';
            iVar8 = local_1ac;
            i = iVar9;
          }
        }
        else {
          puVar5 = *(undefined1 **)(param_4 + 4);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0057629c;
          }
          FUN_004c4150(s__s__d____The_damage_model__s_has_005960fc,
                       s_C__Work_A2IV_Game_prog_car_dmg_c_005960d8,0x77c,puVar5);
        }
        i = i + 1;
      } while (i < iVar9);
      if (local_1b1 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
    }
    puVar5 = *(undefined1 **)(param_4 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0057629c;
    }
    FUN_004c4150(s__s__d____The_damage_model__s_was_00596164,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00596140,0x786,puVar5);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00426f60 FUN_00426f60 ==== */

int __thiscall FUN_00426f60(void *this,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar2 = 0;
  do {
    iVar1 = FUN_00425230((int)this + iVar2 * 0x14 + 0x10);
    iVar3 = iVar2;
    if (iVar1 == param_2) {
      iVar3 = 0xfa;
      iVar4 = iVar2;
    }
    iVar2 = iVar3 + 1;
  } while (iVar2 < 0xfa);
  if (iVar4 == -1) {
    FUN_004c4150(s__s__d____Damage_info_for_car_cou_00596218,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_005961f4,0x7be);
  }
  return (int)this + iVar4 * 0x14 + 0x10;
}


/* ==== 00426fc0 FUN_00426fc0 ==== */

void FUN_00426fc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 this_val;
  undefined4 in_ECX;
  
  this_val = FUN_00426800(in_ECX,param_1);
  FUN_00426460(this_val,param_2);
  return;
}


/* ==== 00426fe0 FUN_00426fe0 ==== */

void __thiscall
FUN_00426fe0(void *this,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  DWORD DVar2;
  int i;
  
  i = 0;
  do {
    iVar1 = FUN_00425230();
    if (iVar1 == param_2) {
      if ((param_2 != DAT_006fba58) ||
         (((DAT_006fbde2 == '\0' && (DAT_006fb8a0 == 0)) && (DAT_006fb96c == 0)))) {
        DVar2 = GetTickCount();
        if (DVar2 - *(int *)(i * 0x10 + 0xde6b4 + (int)this) < 0x3c) {
          param_4 = 0;
        }
        FUN_00425310((int)this + i * 0x14 + 0x10,param_4);
        FUN_00426270(param_5);
      }
      if (param_3 == 1) {
        FUN_00426880(this,i,param_4,param_5);
        FUN_00426a60(i,param_4);
LAB_004270dc:
        FUN_00427400(this,param_2,i,param_4,param_6);
      }
      else {
        if (param_3 == 3) {
          FUN_004269c0(this,i,param_4,param_5);
          FUN_00426a80(i,param_4);
          goto LAB_004270dc;
        }
        if (param_3 == 4) {
          FUN_00426920(this,i,param_4,param_5);
          FUN_00426a70(i,param_4);
        }
      }
      DVar2 = GetTickCount();
      *(DWORD *)(i * 0x10 + 0xde6b4 + (int)this) = DVar2;
      i = 0xfa;
    }
    i = i + 1;
    if (0xf9 < i) {
      return;
    }
  } while( true );
}


/* ==== 00427110 FUN_00427110 ==== */

void FUN_00427110(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  FUN_00426f60(in_ECX,param_1);
  FUN_004252e0(param_2);
  return;
}


/* ==== 00427130 FUN_00427130 ==== */

void __thiscall FUN_00427130(void *this)

{
  int iVar1;
  int i;
  int this_val;
  
  i = 0;
  this_val = (int)this + 0x10;
  do {
    iVar1 = FUN_00425230(this_val);
    if (iVar1 != -1) {
      iVar1 = FUN_00425300(this_val);
      if (*(int *)((int)this + 8) < iVar1) {
        FUN_00426530(this,i);
      }
    }
    i = i + 1;
    this_val = this_val + 0x14;
  } while (i < 0xfa);
  return;
}


/* ==== 00427170 FUN_00427170 ==== */

float10 FUN_00427170(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  fVar3 = (float10)0.0;
  if (param_1 != -1) {
    param_1 = param_1 * 0xf0;
    pfVar2 = (float *)FUN_004aa060(local_c,DAT_0073b0d0 +
                                           *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 + 0x10,
                                   param_3);
    local_18 = *pfVar2;
    local_14 = pfVar2[1];
    local_10 = pfVar2[2];
    fVar1 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
    if ((param_2 == -1) ||
       (pfVar2 = (float *)(param_2 * 0xf0 + 0xb0 + DAT_00715e50),
       *(float *)(param_2 * 0xf0 + 0xb0 + DAT_00715e50) == 0.0)) {
      fVar1 = fVar1 / (*(float *)(param_1 + 0xb0 + DAT_00715e50) * 2.0);
    }
    else if (0.0006 <= *pfVar2) {
      fVar1 = fVar1 / *pfVar2;
    }
    else {
      fVar1 = fVar1 / 0.0006;
    }
    if (param_2 == -1) {
      pfVar2 = (float *)FUN_004b4030(&local_18,
                                     DAT_0073b0d0 + *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 +
                                     0x10);
      fVar3 = SQRT((float10)pfVar2[2] * (float10)pfVar2[2] +
                   (float10)pfVar2[1] * (float10)pfVar2[1] + (float10)*pfVar2 * (float10)*pfVar2);
      fVar4 = SQRT((float10)param_4[2] * (float10)param_4[2] +
                   (float10)param_4[1] * (float10)param_4[1] + (float10)*param_4 * (float10)*param_4
                  );
      return ((float10)1.0 -
             ABS((float10)(float)((float10)*param_4 / fVar4) *
                 (float10)(float)((float10)*pfVar2 / fVar3) +
                 (float10)(float)((float10)param_4[1] / fVar4) *
                 (float10)(float)((float10)pfVar2[1] / fVar3) +
                 ((float10)param_4[2] / fVar4) * ((float10)pfVar2[2] / fVar3))) * (float10)fVar1;
    }
    fVar3 = (float10)fVar1;
  }
  return fVar3;
}


/* ==== 00427340 FUN_00427340 ==== */

void __thiscall FUN_00427340(void *this)

{
  undefined4 uVar1;
  int j;
  int i;
  char **ppcVar2;
  undefined4 *puVar3;
  char *local_18 [4];
  char *local_8;
  char *local_4;
  
  local_18[0] = s_SOFT_CAR_HIT1_0059624c;
  local_18[1] = s_SOFT_CAR_HIT2_0059625c;
  local_18[2] = s_MID_CAR_HIT1_0059626c;
  local_18[3] = s_MID_CAR_HIT2_0059627c;
  local_8 = s_HARD_CAR_HIT1_0059628c;
  local_4 = s_HARD_CAR_HIT2_0059629c;
  uVar1 = FUN_00450900(s_SCHUUR_005962ac);
  *(undefined4 *)((int)this + 0xdf648) = uVar1;
  ppcVar2 = local_18;
  puVar3 = (undefined4 *)((int)this + 0xdf64c);
  i = 3;
  do {
    j = 2;
    do {
      uVar1 = FUN_00450900(*ppcVar2);
      *puVar3 = uVar1;
      ppcVar2 = ppcVar2 + 1;
      puVar3 = puVar3 + 1;
      j = j + -1;
    } while (j != 0);
    i = i + -1;
  } while (i != 0);
  return;
}


/* ==== 004273d0 FUN_004273d0 ==== */

void FUN_004273d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 this_val;
  int iVar1;
  
  this_val = FUN_0049eb50(&DAT_006fbb5c,param_2);
  iVar1 = FUN_0049e630(this_val);
  if (iVar1 == 0) {
    FUN_00450c90(param_1,param_2,0);
  }
  return;
}


/* ==== 00427400 FUN_00427400 ==== */

void __thiscall FUN_00427400(void *this,undefined4 param_2,int param_3,float param_4,char param_5)

{
  DWORD DVar1;
  undefined4 this_val;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  int this_val_2;
  
  DVar1 = GetTickCount();
  if (DVar1 - *(int *)(param_3 * 0x10 + 0xde6b4 + (int)this) < 300) {
    fVar3 = (float10)FUN_004252c0((int)this + param_3 * 0x14 + 0x10);
    if (((float10)param_4 < fVar3 * (float10)0.33333334) && (param_5 != '\0')) {
      uVar6 = 0;
      this_val = FUN_0049eb50(&DAT_006fbb5c,*(undefined4 *)((int)this + 0xdf648));
      FUN_0049e550(this_val,uVar6);
    }
  }
  this_val_2 = (int)this + param_3 * 0x14 + 0x10;
  fVar3 = (float10)FUN_004252c0(this_val_2);
  if ((float10)param_4 < fVar3) {
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    FUN_004273d0(param_2,*(undefined4 *)((int)this + uVar2 * 4 + 0xdf64c));
    return;
  }
  fVar3 = (float10)FUN_004252d0(this_val_2);
  fVar4 = (float10)FUN_004252c0(this_val_2);
  fVar5 = (float10)FUN_004252c0(this_val_2);
  if ((float10)param_4 < fVar5 + (float10)(float)((fVar4 + (float10)(float)fVar3) * (float10)0.5)) {
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    FUN_004273d0(param_2,*(undefined4 *)((int)this + uVar2 * 4 + 0xdf654));
    return;
  }
  uVar2 = FUN_00558625();
  uVar2 = uVar2 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  FUN_004273d0(param_2,*(undefined4 *)((int)this + uVar2 * 4 + 0xdf65c));
  return;
}


/* ==== 00427570 FUN_00427570 ==== */

void FUN_00427570(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00427580 FUN_00427580 ==== */

void FUN_00427580(void)

{
  FUN_005584e0(&LAB_00427590);
  return;
}


/* ==== 004275b0 FUN_004275b0 ==== */

void FUN_004275b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004275c0 FUN_004275c0 ==== */

void FUN_004275c0(void)

{
  FUN_005584e0(&LAB_004275d0);
  return;
}


/* ==== 004275e0 FUN_004275e0 ==== */

void FUN_004275e0(uint param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint i;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 auStack_90 [16];
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  code *pcStack_70;
  float *pfStack_6c;
  char *pcStack_68;
  undefined4 *puStack_64;
  float local_44 [4];
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a120;
  pvStack_c = ExceptionList;
  puStack_64 = (undefined4 *)0x0;
  local_1c[0] = (undefined1)param_1;
  pcStack_68 = (char *)0x42760f;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  iVar5 = DAT_0073b0d0 + *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  local_34 = *(undefined4 *)(iVar5 + 0x50);
  local_30 = *(float *)(iVar5 + 0x54);
  local_2c = *(undefined4 *)(iVar5 + 0x58);
  bVar2 = 1 < (int)param_1;
  if (bVar2) {
    bVar8 = DAT_006fb8e8 == 0;
  }
  else {
    bVar8 = DAT_006fb8e8 != 0;
  }
  param_1 = (uint)bVar8;
  uVar6 = (uint)bVar2;
  puStack_64 = (undefined4 *)(((DAT_006fb8ac + param_2 * -3) - DAT_006fb8b0) + -5);
  pcStack_68 = (char *)0x4276dd;
  iVar5 = FUN_004a71e0();
  puStack_64 = (undefined4 *)0x4276e7;
  iVar3 = FUN_00413cf0();
  puStack_64 = (undefined4 *)0x0;
  local_44[0] = (float)CONCAT31(local_44[0]._1_3_,bVar8);
  pcStack_68 = (char *)0x42770a;
  FUN_004028f0(local_44);
  i = 0xffffffff;
  pcVar7 = (char *)(&DAT_005d269c + iVar3 * 10);
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  puStack_64 = (undefined4 *)(~i - 1);
  pfStack_6c = (float *)0x427723;
  pcStack_68 = (char *)(&DAT_005d269c + iVar3 * 10);
  FUN_00402940(local_44);
  pfStack_6c = local_44;
  puStack_64 = (undefined4 *)0xffffffff;
  pcStack_68 = (char *)0x0;
  local_4._0_1_ = 1;
  pcStack_70 = (code *)0x42773f;
  FUN_004093c0(local_1c);
  puStack_64 = (undefined4 *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  pcStack_68 = (char *)0x42774f;
  FUN_004028f0(local_44);
  puStack_64 = (undefined4 *)0x0;
  pcStack_68 = (char *)0x2;
  pfStack_6c = (float *)0x0;
  pcStack_70 = FUN_00421f50;
  uStack_74 = param_1;
  uStack_7c = 0;
  iStack_80 = iVar5;
  uStack_78 = uVar6;
  FUN_0041c870(auStack_90,local_1c);
  iVar4 = FUN_0042a3d0();
  if (uVar6 == 0) {
    if (*(int *)(DAT_00715f00 + 0xf4 + iVar5 * 0x994) < 2) goto LAB_004277d1;
    puStack_64 = (undefined4 *)0x0;
  }
  else {
    puStack_64 = (undefined4 *)uVar6;
    if (*(int *)(DAT_00715f00 + 0xf8 + iVar5 * 0x994) < 2) goto LAB_004277d1;
  }
  pcStack_68 = (char *)0x0;
  pcStack_70 = (code *)0x4277ce;
  pfStack_6c = (float *)iVar5;
  FUN_004a6d70();
LAB_004277d1:
  puStack_64 = (undefined4 *)0x0;
  pfStack_6c = (float *)0x0;
  uStack_78 = 0x4277dd;
  uStack_74 = iVar4;
  pcStack_70 = (code *)iVar3;
  pcStack_68 = (char *)uVar6;
  FUN_00413f00();
  uStack_7c = 0x4277e3;
  uStack_78 = iVar4;
  iVar5 = FUN_00414070();
  (&DAT_005d1bb8)[iVar5 * 0xe] = (&DAT_005d1bb8)[iVar5 * 0xe] | 1;
  iVar3 = iVar4 * 0xf0;
  *(undefined4 *)(iVar3 + 0x5c + DAT_00715e50) = 0;
  *(uint *)(iVar3 + 0x1c + DAT_00715e50) = *(uint *)(iVar3 + 0x1c + DAT_00715e50) | 3;
  local_30 = ((float)iVar5 + 1.0) * 100.0 + local_30;
  puStack_64 = &local_28;
  pcStack_68 = (char *)&local_34;
  pfStack_6c = (float *)0x42785d;
  (**(code **)(**(int **)(iVar3 + 0x10 + DAT_00715e50) + 0x10))();
  pfStack_6c = (float *)0x0;
  pcStack_70 = (code *)0x427871;
  FUN_004f21f0(*(undefined4 *)(*(int *)(iVar3 + 0x10 + DAT_00715e50) + 8));
  pfStack_6c = (float *)0x42787e;
  iVar5 = FUN_004a8c50(iVar3 + DAT_00715e50);
  iVar5 = DAT_0073b5c8 + iVar5 * 0xac;
  local_44[0] = *(float *)(iVar5 + 0x24) + *(float *)(iVar5 + 0x18);
  pfStack_6c = (float *)&stack0xffffffa8;
  pcStack_70 = (code *)0x42790b;
  FUN_004a1f30(*(undefined4 *)(iVar3 + 0x10 + DAT_00715e50));
  pfStack_6c = (float *)&local_24;
  pcStack_70 = (code *)0x42791a;
  iVar5 = FUN_00424660(&DAT_005d3458);
  pcStack_70 = *(code **)(iVar5 + 0x44);
  uStack_74 = 0x427924;
  pfStack_6c = (float *)iVar4;
  FUN_00436170();
  if (local_20 != 0) {
    cVar1 = *(char *)(local_20 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_20 + -1) = cVar1 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    pfStack_6c = (float *)(local_20 + -1);
    pcStack_70 = (code *)0x42795a;
    FUN_0054b339();
  }
  ExceptionList = pvStack_14;
  return;
}


/* ==== 00427970 FUN_00427970 ==== */

void FUN_00427970(void)

{
  int iVar1;
  uint uVar2;
  int k;
  int i;
  int j;
  
  FUN_00413a10();
  if (DAT_006fb960 != 0) {
    i = 0;
    iVar1 = DAT_005962b4 + DAT_005962b8;
    k = DAT_005962b8;
    j = DAT_005962b4;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_00558625();
        uVar2 = uVar2 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        switch(uVar2) {
        case 0:
        case 1:
          if (0 < k) {
            i = i + 1;
            FUN_004275e0(uVar2,k);
            k = k + -1;
          }
          break;
        case 2:
        case 3:
          if (0 < j) {
            i = i + 1;
            FUN_004275e0(uVar2,j);
            j = j + -1;
          }
        }
      } while (i < iVar1);
    }
    return;
  }
  FUN_004c3fa0(s_Traffic_is_disabled___not_initia_005962bc);
  return;
}


/* ==== 00427a50 FUN_00427a50 ==== */

void FUN_00427a50(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00427a60 FUN_00427a60 ==== */

void FUN_00427a60(void)

{
  FUN_005584e0(&LAB_00427a70);
  return;
}


/* ==== 00427a90 FUN_00427a90 ==== */

void FUN_00427a90(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00427aa0 FUN_00427aa0 ==== */

void FUN_00427aa0(void)

{
  FUN_005584e0(&LAB_00427ab0);
  return;
}


/* ==== 00427ae0 FUN_00427ae0 ==== */

void FUN_00427ae0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  
  param_1 = param_1 * 0xf0;
  fVar2 = *(float *)(param_1 + 0xbc + DAT_00715e50);
  pfVar1 = (float *)(param_1 + 0xbc + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  *pfVar1 = (float)((float10)*pfVar1 - fVar3 * (float10)(fVar2 * 10.0));
  fVar2 = *(float *)(param_1 + 0xc4 + DAT_00715e50);
  pfVar1 = (float *)(param_1 + 0xc4 + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  *pfVar1 = (float)((float10)*pfVar1 - fVar3 * (float10)(fVar2 * 10.0));
  fVar2 = *(float *)(param_1 + 0xcc + DAT_00715e50);
  pfVar1 = (float *)(param_1 + 0xcc + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800(&DAT_007128b0);
  *pfVar1 = (float)((float10)*pfVar1 - fVar3 * (float10)(fVar2 * 10.0));
  return;
}


/* ==== 00427b90 FUN_00427b90 ==== */

void FUN_00427b90(int param_1,float *param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_2 + 0x19) == '\x01') {
    FUN_00402ea0(param_2,0x42c80000);
  }
  iVar1 = FUN_004c5e40(0x46);
  if ((iVar1 != 0) && (DAT_006fb950 == 1)) {
    FUN_00458440();
  }
  FUN_00428c70(param_1,param_2);
  iVar1 = FUN_004c5e40(0x11);
  if (iVar1 != 0) {
    iVar1 = FUN_004c5e40(0x20);
    if (iVar1 != 0) {
      iVar1 = FUN_004c5e40(0x43);
      if ((iVar1 != 0) && (DAT_006fb950 == 1)) {
        FUN_004351f0();
        return;
      }
    }
  }
  return;
}


/* ==== 00427dd0 FUN_00427dd0 ==== */

float10 FUN_00427dd0(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = *(int *)((int)param_1 * 0xf0 + 0x10 + DAT_00715e50);
  if ((param_3 == 0) || (param_3 == 1)) {
    fVar1 = *(float *)(iVar4 + 0xc4);
    fVar2 = *(float *)(iVar4 + 200);
    fVar3 = *(float *)(iVar4 + 0xcc);
    param_1 = *(float *)(iVar4 + 0xd0);
  }
  else {
    fVar1 = *(float *)(iVar4 + 0xd4);
    fVar2 = *(float *)(iVar4 + 0xd8);
    param_1 = *(float *)(iVar4 + 0xe0);
    fVar3 = *(float *)(iVar4 + 0xdc);
  }
  fVar5 = (float10)fsin((float10)fVar3 * (float10)param_2);
  return ((float10)fVar1 * (float10)0.1 * (float10)param_2 + (float10)fVar2 * (float10)0.1 * fVar5)
         * (float10)0.1 * (float10)param_1;
}


