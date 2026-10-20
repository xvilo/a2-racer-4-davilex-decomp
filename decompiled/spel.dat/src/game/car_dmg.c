/* spel.dat — game/car_dmg.cpp: 64 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00424e30 FUN_00424e30 ==== */

void FUN_00424e30(undefined1 *param_1,undefined1 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056a0ca;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    FUN_004028f0(0);
    FUN_004093c0(param_2,0,0xffffffff);
    local_4._0_1_ = 1;
    param_1[0x10] = param_2[0x10];
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_004093c0(param_2 + 0x10,0,0xffffffff);
    local_4._0_1_ = 2;
    param_1[0x20] = param_2[0x20];
    FUN_004028f0(0);
    FUN_004093c0(param_2 + 0x20,0,0xffffffff);
    local_4._0_1_ = 3;
    param_1[0x30] = param_2[0x30];
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_004093c0(param_2 + 0x30,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    local_4 = CONCAT31(local_4._1_3_,4);
    param_1[0x50] = param_2[0x50];
    FUN_004028f0(0);
    FUN_004093c0(param_2 + 0x50,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00424f50 FUN_00424f50 ==== */

/* WARNING: Removing unreachable block (ram,0x00425052) */
/* WARNING: Removing unreachable block (ram,0x00424f97) */
/* WARNING: Removing unreachable block (ram,0x00425122) */

int FUN_00424f50(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint i;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_004093c0(param_1,0,0xffffffff);
  FUN_004093c0(param_1 + 0x10,0,0xffffffff);
  uVar1 = *(uint *)(param_1 + 0x28);
  if (in_ECX + 0x20 == param_1 + 0x20) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x24);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar3 = *(undefined1 **)(param_1 + 0x24);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)(in_ECX + 0x24) = puVar3;
        *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_00425039;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
        puVar4 = *(undefined4 **)(param_1 + 0x24);
      }
      puVar5 = *(undefined4 **)(in_ECX + 0x24);
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
      FUN_004029e0(uVar1);
    }
  }
LAB_00425039:
  uVar1 = *(uint *)(param_1 + 0x38);
  if (in_ECX + 0x30 == param_1 + 0x30) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x34);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar3 = *(undefined1 **)(param_1 + 0x34);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)(in_ECX + 0x34) = puVar3;
        *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_004250f2;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_1 + 0x34);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = *(undefined4 **)(in_ECX + 0x34);
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
      FUN_004029e0(uVar1);
    }
  }
LAB_004250f2:
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = *(uint *)(param_1 + 0x58);
  if (in_ECX + 0x50 == param_1 + 0x50) {
    FUN_0040f800(uVar1,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x54);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0057629c;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar3 = *(undefined1 **)(param_1 + 0x54);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        *(undefined1 **)(in_ECX + 0x54) = puVar3;
        *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
        puVar3[-1] = puVar3[-1] + '\x01';
        return in_ECX;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_1 + 0x54);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = *(undefined4 **)(in_ECX + 0x54);
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
      *(uint *)(in_ECX + 0x58) = uVar1;
      *(undefined1 *)(*(int *)(in_ECX + 0x54) + uVar1) = 0;
      return in_ECX;
    }
  }
  return in_ECX;
}


/* ==== 00425200 FUN_00425200 ==== */

void FUN_00425200(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = 0xffffffff;
  return;
}


/* ==== 00425220 FUN_00425220 ==== */

void FUN_00425220(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}


/* ==== 00425230 FUN_00425230 ==== */

undefined4 FUN_00425230(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


/* ==== 00425240 FUN_00425240 ==== */

void FUN_00425240(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((0.0 <= param_1) && (param_1 <= param_2)) {
    *(float *)(in_ECX + 8) = param_2;
    *(float *)(in_ECX + 4) = param_1;
    iVar1 = FUN_00426ba0();
    iVar2 = FUN_00426b90();
    *(float *)(in_ECX + 0x10) =
         (float)(iVar1 - iVar2) / (*(float *)(in_ECX + 8) - *(float *)(in_ECX + 4));
    return;
  }
  FUN_004c4150(s__s__d____Impulse_values_invalid__00595c34,
               s_C__Work_A2IV_Game_prog_car_dmg_c_00595c10,0xca);
  return;
}


/* ==== 004252c0 FUN_004252c0 ==== */

float10 FUN_004252c0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 4);
}


/* ==== 004252d0 FUN_004252d0 ==== */

float10 FUN_004252d0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 8);
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

undefined4 FUN_00425300(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


/* ==== 00425310 FUN_00425310 ==== */

void FUN_00425310(float param_1)

{
  int __ftol_result;
  int in_ECX;
  
  if (*(float *)(in_ECX + 4) < param_1) {
    FUN_00426b90();
    __ftol_result = __ftol();
    *(int *)(in_ECX + 0xc) = __ftol_result;
    if (0x44c < __ftol_result) {
      *(undefined4 *)(in_ECX + 0xc) = 0x44c;
    }
  }
  return;
}


/* ==== 00425380 FUN_00425380 ==== */

void FUN_00425380(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[0x387] = 0;
  *in_ECX = 5;
  in_ECX[0x386] = 0xffffffff;
  in_ECX[0x388] = 0x44d;
  in_ECX[0x389] = 0x44d;
  return;
}


/* ==== 00425490 FUN_00425490 ==== */

void FUN_00425490(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int i;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  i = in_ECX + param_1 * 0x48;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  iVar1 = FUN_004a7790(*(undefined4 *)(i + 0x14),*(undefined4 *)(i + 0x18),*(undefined4 *)(i + 0x1c)
                       ,0,0,0,*(undefined4 *)(in_ECX + 8 + param_1 * 0x48),0,&LAB_004253b0,0,0);
  *(int *)(i + 0x10) = iVar1;
  if (0x44c < *(int *)(i + 0x38)) {
    *(undefined4 *)(i + 0x44) = 2;
  }
  i = *(int *)(in_ECX + 0xe18);
  for (iVar3 = *(int *)(*(int *)(in_ECX + 0xe18) * 0xf0 + 0x44 + DAT_00715e50); iVar3 != -1;
      iVar3 = *(int *)(iVar3 * 0xf0 + 0x44 + DAT_00715e50)) {
    i = iVar3;
  }
  *(int *)(i * 0xf0 + 0x44 + DAT_00715e50) = iVar1;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  iVar3 = iVar1 * 0xf0;
  *(undefined4 *)(iVar3 + 0x48 + DAT_00715e50) = *(undefined4 *)(in_ECX + 0xe18);
  *(undefined4 *)(iVar3 + 0x34 + DAT_00715e50) =
       *(undefined4 *)(*(int *)(in_ECX + 0xe18) * 0xf0 + 0x34 + DAT_00715e50);
  *(undefined4 *)(iVar3 + 0x68 + DAT_00715e50) = 1;
  puVar2 = (undefined4 *)(iVar3 + 0xbc + DAT_00715e50);
  FUN_004a79d0(iVar1,*puVar2,puVar2[1],puVar2[2],0,0,0,0x40a00000,0x3f333333,0x3e4ccccd,0,0,0,1);
  FUN_004a7190(iVar1);
  iVar1 = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1e20(local_40);
  puVar4 = (undefined4 *)(iVar1 + 0x10);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  i = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1dd0(&local_4c);
  *(undefined4 *)(i + 0x50) = *puVar2;
  *(undefined4 *)(i + 0x54) = puVar2[1];
  *(undefined4 *)(i + 0x58) = puVar2[2];
  FUN_004f21f0(0);
  *(uint *)(iVar3 + 0x1c + DAT_00715e50) = *(uint *)(iVar3 + 0x1c + DAT_00715e50) | 2;
  return;
}


/* ==== 004256c0 FUN_004256c0 ==== */

undefined4 FUN_004256c0(void)

{
  int *in_ECX;
  int *piVar1;
  int i;
  
  if (in_ECX[0x386] == -1) {
    FUN_004c4150(s__s__d____Car_object_index_is_not_00595ca0,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00595c7c,0x212);
  }
  else {
    i = 0;
    if (0 < in_ECX[1]) {
      piVar1 = in_ECX + 0xe;
      do {
        if ((piVar1[-0xb] == *in_ECX) && (0 < *piVar1)) {
          *(undefined4 *)(piVar1[-10] * 0xf0 + 0x5c + DAT_00715e50) = 1;
        }
        i = i + 1;
        piVar1 = piVar1 + 0x12;
      } while (i < in_ECX[1]);
      return 1;
    }
  }
  return 1;
}


/* ==== 00425730 FUN_00425730 ==== */

void FUN_00425730(int param_1)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int in_ECX;
  int i;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [72];
  
  i = in_ECX + param_1 * 0x48;
  *(undefined4 *)(i + 0x44) = 1;
  DVar1 = GetTickCount();
  *(DWORD *)(in_ECX + (param_1 * 9 + 9) * 8) = DVar1;
  iVar3 = *(int *)(i + 0x10) * 0xf0;
  (**(code **)(**(int **)(iVar3 + 0x10 + DAT_00715e50) + 0x10))(i + 0x20,i + 0x2c);
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
  int iVar3;
  
  uVar1 = FUN_00558625();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  uVar2 = FUN_00450900((&PTR_s_DAMAGE_GLASS_00595cdc)[uVar1]);
  FUN_0049eb50(uVar2);
  iVar3 = FUN_0049e630();
  if (iVar3 == 0) {
    FUN_00450c90(param_1,uVar2,0);
  }
  return;
}


/* ==== 00425850 FUN_00425850 ==== */

void FUN_00425850(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int in_ECX;
  int i;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [4];
  undefined1 auStack_48 [72];
  
  i = in_ECX + param_1 * 0x48;
  *(undefined4 *)(i + 0x44) = 2;
  iVar3 = *(int *)(in_ECX + 0xe18);
  for (iVar4 = *(int *)(*(int *)(in_ECX + 0xe18) * 0xf0 + 0x44 + DAT_00715e50);
      iVar4 != *(int *)(i + 0x10); iVar4 = *(int *)(iVar4 * 0xf0 + 0x44 + DAT_00715e50)) {
    iVar3 = iVar4;
  }
  iVar4 = *(int *)(i + 0x10) * 0xf0;
  *(undefined4 *)(iVar3 * 0xf0 + 0x44 + DAT_00715e50) = *(undefined4 *)(iVar4 + 0x44 + DAT_00715e50)
  ;
  *(undefined4 *)(iVar4 + 0x48 + DAT_00715e50) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x44 + DAT_00715e50) = 0xffffffff;
  FUN_00425800(*(undefined4 *)(in_ECX + 0xe18));
  if (*(int *)(i + 0x4c) != 0) {
    *(undefined4 *)(iVar4 + 0x5c + DAT_00715e50) = 0;
    return;
  }
  iVar3 = DAT_0073b0d0 + *(int *)(*(int *)(in_ECX + 0xe18) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  pfVar1 = (float *)FUN_004b42a0(local_4c,i + 0x20,iVar3 + 0x10);
  local_58 = *(float *)(iVar3 + 0x50) + *pfVar1;
  local_54 = *(float *)(iVar3 + 0x54) + pfVar1[1];
  local_50 = *(float *)(iVar3 + 0x58) + pfVar1[2];
  (**(code **)(**(int **)(iVar4 + 0x10 + DAT_00715e50) + 0x10))(&local_58,i + 0x2c);
  FUN_004f21f0(1);
  FUN_004f32e0();
  iVar3 = DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1e20(auStack_48);
  puVar5 = (undefined4 *)(iVar3 + 0x10);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  i = DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9;
  puVar2 = (undefined4 *)FUN_004a1dd0(&local_54);
  *(undefined4 *)(i + 0x50) = *puVar2;
  *(undefined4 *)(i + 0x54) = puVar2[1];
  *(undefined4 *)(i + 0x58) = puVar2[2];
  return;
}


/* ==== 00425a40 FUN_00425a40 ==== */

void FUN_00425a40(int param_1)

{
  DWORD DVar1;
  int *in_ECX;
  int i;
  int *piVar2;
  
  i = 0;
  if (0 < in_ECX[1]) {
    piVar2 = in_ECX + 0xe;
    do {
      if ((piVar2[-0xb] == *in_ECX) && (piVar2[3] != 2)) {
        if ((*piVar2 < param_1) && ((piVar2[3] == 0 && (piVar2[2] == 0)))) {
          FUN_00425730(i);
        }
        DVar1 = GetTickCount();
        if (((4000 < DVar1 - piVar2[4]) && (piVar2[1] < param_1)) && (piVar2[3] == 1)) {
          FUN_00425850(i);
        }
      }
      i = i + 1;
      piVar2 = piVar2 + 0x12;
    } while (i < in_ECX[1]);
  }
  return;
}


/* ==== 00425ac0 FUN_00425ac0 ==== */

void FUN_00425ac0(int param_1)

{
  int k;
  int m;
  int iVar1;
  int *in_ECX;
  int *piVar2;
  int j;
  int iVar3;
  int iVar4;
  int i;
  int local_4;
  
  i = 1;
  do {
    j = 0;
    iVar3 = 0x44c;
    k = 0;
    if (0 < in_ECX[1]) {
      piVar2 = in_ECX + 0xe;
      do {
        if ((piVar2[-0xb] == *in_ECX) && (piVar2[2] == i)) {
          if (*piVar2 < iVar3) {
            iVar3 = *piVar2;
            local_4 = k;
          }
          j = j + 1;
        }
        k = k + 1;
        piVar2 = piVar2 + 0x12;
      } while (k < in_ECX[1]);
      if ((0 < j) && (iVar3 < param_1)) {
        iVar4 = 0;
        m = FUN_00558625();
        m = m % j;
        k = in_ECX[1];
        j = 0;
        if (0 < k) {
          do {
            iVar1 = j;
            if ((in_ECX[j * 0x12 + 3] == *in_ECX) && (in_ECX[j * 0x12 + 0x10] == i)) {
              if (m == 0) {
                iVar1 = k;
                iVar4 = j;
              }
              m = m + -1;
            }
            j = iVar1 + 1;
          } while (j < k);
        }
        k = in_ECX[local_4 * 0x12 + 0xf];
        in_ECX[local_4 * 0x12 + 0xe] = in_ECX[iVar4 * 0x12 + 0xe];
        in_ECX[local_4 * 0x12 + 0xf] = in_ECX[iVar4 * 0x12 + 0xf];
        in_ECX[iVar4 * 0x12 + 0xf] = k;
        in_ECX[iVar4 * 0x12 + 0xe] = iVar3;
        in_ECX[iVar4 * 0x12 + 0x10] = 0;
        FUN_00425730(iVar4);
      }
    }
    i = i + 1;
  } while (i < 0xb);
  return;
}


/* ==== 00425bb0 FUN_00425bb0 ==== */

void FUN_00425bb0(void)

{
  bool bVar1;
  int *in_ECX;
  int *piVar2;
  int i;
  
  i = in_ECX[1];
  bVar1 = true;
  if (0 < i) {
    piVar2 = in_ECX + 0x11;
    do {
      if (piVar2[-0xe] == *in_ECX) {
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

uint FUN_00425be0(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int *in_ECX;
  
  uVar2 = in_EAX & 0xffffff00;
  if (*in_ECX < *(int *)(DAT_0073b168 + *(int *)(in_ECX[0x387] * 0xa9 + 4 + DAT_0073b0d0) * 9) + -1)
  {
    iVar1 = *in_ECX + 1;
    *in_ECX = iVar1;
    *(int *)(in_ECX[0x387] * 0xa9 + 8 + DAT_0073b0d0) = iVar1;
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}


/* ==== 00425c30 FUN_00425c30 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00425c30(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
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
      uVar2 = *(uint *)(param_1 + 8);
      local_188 = ~j - 1;
      j = local_188;
      if (uVar2 < local_188) {
        j = uVar2;
      }
      bVar8 = false;
      iVar5 = 0;
      bVar9 = true;
      pbVar6 = *(byte **)(param_1 + 4);
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
         (*(int *)(in_ECX + 4) < 0x32)) {
        FUN_004c3f10(1,local_140,0x40);
        uVar4 = FUN_004b75a0(local_140);
        *(undefined4 *)(in_ECX + 8 + *(int *)(in_ECX + 4) * 0x48) = uVar4;
        *(undefined4 *)(in_ECX + 0xc + *(int *)(in_ECX + 4) * 0x48) = param_2;
        FUN_004354a0(2,in_ECX + 0x14 + *(int *)(in_ECX + 4) * 0x48);
        FUN_004354a0(3,in_ECX + 0x18 + *(int *)(in_ECX + 4) * 0x48);
        FUN_004354a0(4,in_ECX + 0x1c + *(int *)(in_ECX + 4) * 0x48);
        *(float *)(in_ECX + 0x18 + *(int *)(in_ECX + 4) * 0x48) =
             *(float *)(in_ECX + 0x18 + *(int *)(in_ECX + 4) * 0x48) - 1.0;
        FUN_004354a0(5,in_ECX + 0x20 + *(int *)(in_ECX + 4) * 0x48);
        FUN_004354a0(6,in_ECX + 0x24 + *(int *)(in_ECX + 4) * 0x48);
        FUN_004354a0(7,in_ECX + 0x28 + *(int *)(in_ECX + 4) * 0x48);
        FUN_004354a0(8,&local_18c);
        FUN_004354a0(9,&local_198);
        FUN_004354a0(10,&local_194);
        *(float *)(in_ECX + 0x2c + *(int *)(in_ECX + 4) * 0x48) =
             local_18c * 0.0027777778 * _DAT_005b23b8;
        *(float *)(in_ECX + 0x30 + *(int *)(in_ECX + 4) * 0x48) =
             local_198 * 0.0027777778 * _DAT_005b23b8;
        *(float *)(in_ECX + 0x34 + *(int *)(in_ECX + 4) * 0x48) =
             local_194 * 0.0027777778 * _DAT_005b23b8;
        uVar4 = FUN_004c3ec0(0xb);
        *(undefined4 *)(in_ECX + 0x38 + *(int *)(in_ECX + 4) * 0x48) = uVar4;
        uVar4 = FUN_004c3ec0(0xc);
        *(undefined4 *)(in_ECX + 0x3c + *(int *)(in_ECX + 4) * 0x48) = uVar4;
        uVar4 = FUN_004c3ec0(0xd);
        *(undefined4 *)(in_ECX + 0x4c + *(int *)(in_ECX + 4) * 0x48) = uVar4;
        *(undefined4 *)(in_ECX + 0x44 + *(int *)(in_ECX + 4) * 0x48) = 0;
        *(undefined4 *)(in_ECX + (*(int *)(in_ECX + 4) + 1) * 0x48) = 0;
        if (iVar3 == 0xf) {
          uVar4 = FUN_004c3ec0(0xe);
          *(undefined4 *)(in_ECX + 0x40 + *(int *)(in_ECX + 4) * 0x48) = uVar4;
          iVar3 = *(int *)(in_ECX + 0x40 + *(int *)(in_ECX + 4) * 0x48);
          if ((iVar3 < 1) || (10 < iVar3)) {
            FUN_004c4150(s__s__d____Invalid_group_index__Sh_00595d50,
                         s_C__Work_A2IV_Game_prog_car_dmg_c_00595d2c,0x3fe,10);
          }
        }
        else {
          *(undefined4 *)(in_ECX + 0x40 + *(int *)(in_ECX + 4) * 0x48) = 0;
        }
        if (*(int *)(in_ECX + 0x3c + *(int *)(in_ECX + 4) * 0x48) <
            *(int *)(in_ECX + 0x38 + *(int *)(in_ECX + 4) * 0x48)) {
          FUN_004c4150(s__s__d____Damaged_state_level_is_g_00595db0,
                       s_C__Work_A2IV_Game_prog_car_dmg_c_00595d8c,0x40b);
        }
        FUN_00425490(*(undefined4 *)(in_ECX + 4));
        local_19d = 1;
        *(undefined4 *)
         (*(int *)(in_ECX + 0x10 + *(int *)(in_ECX + 4) * 0x48) * 0xf0 + 0x5c + DAT_00715e50) = 0;
        *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
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

undefined1 FUN_00425fb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int *in_ECX;
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
  local_198 = in_ECX;
  iVar2 = FUN_00448c90(s_Car_Damage_Settings_00595e60);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar3);
  local_194 = FUN_004c3cd0(PTR_s_Damageable_Cars_00595b78,PTR_s_count_00595b74);
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
        iVar4 = FUN_0040fc80(0,*(undefined4 *)(param_1 + 8),local_18c,~j - 1);
        if (iVar4 == 0) {
          iVar4 = FUN_004c3ec0(1);
          in_ECX[0x388] = iVar4;
          iVar4 = FUN_004c3ec0(2);
          k = 3;
          in_ECX[0x389] = iVar4;
          if (3 < iVar2) {
            do {
              FUN_004c3f10(k,local_14c,0x40);
              local_1ac[0] = local_1b1;
              FUN_004028f0(0);
              j = 0xffffffff;
              pcVar5 = local_14c;
              do {
                if (j == 0) break;
                j = j - 1;
                cVar1 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 != '\0');
              j = ~j - 1;
              cVar1 = FUN_00402a00(j,1);
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
                in_ECX = local_198;
                local_1a4 = j;
              }
              local_4 = 0;
              FUN_00425c30(local_1ac,k + 2);
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
          if (*in_ECX < *(int *)(DAT_0073b168 +
                                *(int *)(DAT_0073b0d0 + in_ECX[0x387] * 0xa9 + 4) * 9)) {
            FUN_004256c0();
            *(int *)(DAT_0073b0d0 + in_ECX[0x387] * 0xa9 + 8) = *in_ECX;
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

void FUN_00426280(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  FUN_00425ac0(param_1);
  FUN_00425a40(param_1);
  FUN_00426f60(*(undefined4 *)(in_ECX + 0xe18));
  iVar2 = FUN_00425300();
  if ((*(int *)(in_ECX + 0xe20) < iVar2) &&
     (8 < *(int *)(*(int *)(in_ECX + 0xe18) * 0xf0 + DAT_00715e50 + 0xac))) {
    iVar3 = FUN_004a8600(8);
    *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  }
  if ((*(int *)(in_ECX + 0xe24) < iVar2) &&
     (7 < *(int *)(DAT_00715e50 + *(int *)(in_ECX + 0xe18) * 0xf0 + 0xac))) {
    iVar2 = FUN_004a8600(4);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
    iVar2 = FUN_004a8600(5);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
    iVar2 = FUN_004a8600(6);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
    iVar2 = FUN_004a8600(7);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
  }
  cVar1 = FUN_00425bb0();
  if (cVar1 != '\0') {
    cVar1 = FUN_00425be0();
    if (cVar1 != '\0') {
      FUN_004256c0();
    }
  }
  return;
}


/* ==== 00426420 FUN_00426420 ==== */

void FUN_00426420(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0xe18) = param_1;
  *(undefined4 *)(in_ECX + 0xe1c) = *(undefined4 *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  return;
}


/* ==== 00426450 FUN_00426450 ==== */

undefined4 FUN_00426450(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xe18);
}


/* ==== 00426460 FUN_00426460 ==== */

void FUN_00426460(char param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    piVar2 = (int *)(in_ECX + 0x10);
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 0x12;
      i = i + 1;
      *(uint *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) = (uint)(param_1 != '\0');
    } while (i < *(int *)(in_ECX + 4));
  }
  return;
}


/* ==== 004264b0 FUN_004264b0 ==== */

void FUN_004264b0(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 *in_ECX;
  int i;
  
  i = 0xfa;
  do {
    FUN_00425200();
    i = i + -1;
  } while (i != 0);
  i = 0xfa;
  do {
    FUN_00425380();
    i = i + -1;
  } while (i != 0);
  puVar1 = in_ECX + 0x379ab;
  *in_ECX = 0;
  in_ECX[1] = 0;
  i = 0xfa;
  do {
    puVar1[-1] = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1[1] = 1;
    puVar1[2] = 0;
    puVar1 = puVar1 + 4;
    i = i + -1;
  } while (i != 0);
  DVar2 = GetTickCount();
  FUN_0055861b(DVar2);
  return;
}


/* ==== 00426530 FUN_00426530 ==== */

void FUN_00426530(int param_1)

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
  int in_ECX;
  float local_30 [3];
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  DVar4 = GetTickCount();
  if (200 < (int)(DVar4 - *(int *)(param_1 * 0x10 + 0xde6a8 + in_ECX))) {
    iVar5 = FUN_00425230();
    iVar5 = iVar5 * 0xf0;
    iVar6 = FUN_004a8c50();
    iVar7 = FUN_00558625();
    local_30[0] = (float)(iVar7 % 10 + -5);
    local_30[1] = 5.0;
    local_30[2] = ABS((*(float *)(DAT_0073b5c8 + 0x60 + iVar6 * 0xac) -
                      *(float *)(DAT_0073b5c8 + 0x18 + iVar6 * 0xac)) * 0.5);
    if (*(int *)((param_1 + 0xde6b) * 0x10 + in_ECX) == 0) {
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
    *(DWORD *)(param_1 * 0x10 + 0xde6a8 + in_ECX) = DVar4;
  }
  return;
}


/* ==== 004266f0 FUN_004266f0 ==== */

void FUN_004266f0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00425300();
  if ((*(int *)(in_ECX + 0xc) < iVar1) && (*(char *)(param_1 * 0x10 + 0xde6ac + in_ECX) == '\0')) {
    iVar1 = FUN_00425230();
    if (4 < *(int *)(DAT_00715e50 + iVar1 * 0xf0 + 0xac)) {
      iVar1 = FUN_004a8600(0);
      *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x7c) = 0x42700000;
      iVar1 = FUN_004a8600(1);
      *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x7c) = 0x42700000;
      iVar1 = FUN_004a8600(2);
      *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x7c) = 0x42700000;
      iVar1 = FUN_004a8600(3);
      *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x7c) = 0x42700000;
      *(undefined1 *)(param_1 * 0x10 + 0xde6ac + in_ECX) = 1;
    }
  }
  return;
}


/* ==== 00426800 FUN_00426800 ==== */

int FUN_00426800(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar2 = 0;
  do {
    iVar1 = FUN_00426450();
    iVar3 = iVar2;
    if (iVar1 == param_1) {
      iVar3 = 0xfa;
      iVar4 = iVar2;
    }
    iVar2 = iVar3 + 1;
  } while (iVar2 < 0xfa);
  if (iVar4 == -1) {
    FUN_004c4150(s__s__d____Car_object_Handler_for_c_00595f04,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00595ee0,0x5f0);
  }
  return in_ECX + 0x1398 + iVar4 * 0xe28;
}


/* ==== 00426880 FUN_00426880 ==== */

void FUN_00426880(undefined4 param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = FUN_00425300();
  FUN_00426280(uVar1);
  FUN_004266f0(param_1);
  uVar1 = FUN_00425230();
  fVar2 = (float10)FUN_004252c0();
  if ((float10)param_2 < fVar2) {
    FUN_0045b3b0(uVar1,uVar1,param_3);
    return;
  }
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045bd30(uVar1,uVar1);
  return;
}


/* ==== 00426920 FUN_00426920 ==== */

void FUN_00426920(undefined4 param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = FUN_00425300();
  FUN_00426280(uVar1);
  FUN_004266f0(param_1);
  uVar1 = FUN_00425230();
  fVar2 = (float10)FUN_004252c0();
  if ((float10)param_2 < fVar2) {
    FUN_0045b3b0(uVar1,uVar1,param_3);
    return;
  }
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045bd30(uVar1,uVar1);
  return;
}


/* ==== 004269c0 FUN_004269c0 ==== */

void FUN_004269c0(undefined4 param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = FUN_00425300();
  FUN_00426280(uVar1);
  FUN_004266f0(param_1);
  uVar1 = FUN_00425230();
  fVar2 = (float10)FUN_004252c0();
  if ((float10)param_2 < fVar2) {
    FUN_0045b3b0(uVar1,uVar1,param_3);
    return;
  }
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
  FUN_0045b3b0(uVar1,uVar1,param_3);
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

void FUN_00426a90(void)

{
  int iVar1;
  undefined1 *puVar2;
  int *in_ECX;
  
  FUN_004489a0(s_DAMAGE_INI_00595f54,s_Car_Damage_Settings_00595f40);
  iVar1 = FUN_00448c90(s_Car_Damage_Settings_00595f60);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  iVar1 = FUN_004c3cd0(PTR_s_Damage_Limits_00595b80,PTR_PTR_00595b84);
  *in_ECX = iVar1;
  iVar1 = FUN_004c3cd0(PTR_s_Damage_Limits_00595b80,PTR_s_Max_00595b88);
  in_ECX[1] = iVar1;
  iVar1 = FUN_004c3cd0(PTR_s_Damage_Levels_00595b8c,PTR_s_clouds_00595b90);
  in_ECX[2] = iVar1;
  iVar1 = FUN_004c3cd0(PTR_s_Damage_Levels_00595b8c,PTR_s_wheels_00595b94);
  in_ECX[3] = iVar1;
  if ((*in_ECX < 0) || (in_ECX[1] < *in_ECX)) {
    FUN_004c4150(s__s__d____Limit_values_invalid__M_00595f98,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00595f74,0x6c3);
  }
  if ((((in_ECX[2] < 0) || (0x44c < in_ECX[2])) || (in_ECX[3] < 0)) || (0x44c < in_ECX[3])) {
    FUN_004c4150(s__s__d____Damage_level_for_clouds_00596000,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00595fdc,0x6ca,0,0x44c);
  }
  FUN_00427340();
  return;
}


/* ==== 00426b90 FUN_00426b90 ==== */

undefined4 FUN_00426b90(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


/* ==== 00426ba0 FUN_00426ba0 ==== */

undefined4 FUN_00426ba0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


/* ==== 00426bb0 FUN_00426bb0 ==== */

void FUN_00426bb0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  uint j;
  uint uVar8;
  uint k;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  char local_1b1;
  int i;
  int local_1ac;
  char local_1a4 [4];
  char *local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 local_194 [4];
  int local_190;
  char local_18c [64];
  byte local_14c [64];
  undefined1 local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a100;
  pvStack_c = ExceptionList;
  iVar9 = -1;
  local_1ac = -1;
  iVar10 = 0;
  ExceptionList = &pvStack_c;
  local_190 = in_ECX;
  do {
    iVar4 = FUN_00425230();
    if ((iVar4 == -1) || (iVar5 = FUN_00425230(), iVar4 = iVar10, iVar5 == param_1)) {
      iVar4 = 0xfa;
      iVar9 = iVar10;
      local_1ac = iVar10;
    }
    iVar10 = iVar4 + 1;
  } while (iVar10 < 0xfa);
  if (iVar9 == -1) {
    FUN_004c4150(s__s__d____Too_many_cars_added__Ma_005961b8,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00596194,0x78d);
  }
  else {
    iVar10 = FUN_00448c90(s_Car_Damage_Settings_0059605c);
    puVar6 = *(undefined1 **)(iVar10 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004c3b60(puVar6);
    iVar10 = FUN_004c3cd0(PTR_s_Damage_Models_00595b7c,PTR_s_count_00595b74);
    local_1b1 = '\0';
    i = 0;
    if (0 < iVar10) {
      do {
        FUN_005587a3(local_194,s__d_00596070,i);
        FUN_004c3d10(PTR_s_Damage_Models_00595b7c,local_194,local_10c,0x100);
        iVar4 = FUN_004c3d60(local_10c,0);
        if (iVar4 == 7) {
          FUN_004c3f10(0,(char *)local_14c,0x40);
          iVar4 = local_190;
          j = 0xffffffff;
          pbVar11 = local_14c;
          do {
            if (j == 0) break;
            j = j - 1;
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar1 != 0);
          k = *(uint *)(param_3 + 8);
          uVar8 = ~j - 1;
          j = k;
          if (uVar8 <= k) {
            j = uVar8;
          }
          bVar15 = false;
          iVar5 = 0;
          bVar16 = true;
          pbVar11 = *(byte **)(param_3 + 4);
          pbVar13 = local_14c;
          do {
            if (j == 0) break;
            j = j - 1;
            bVar15 = *pbVar11 < *pbVar13;
            bVar16 = *pbVar11 == *pbVar13;
            pbVar11 = pbVar11 + 1;
            pbVar13 = pbVar13 + 1;
          } while (bVar16);
          if (!bVar16) {
            iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          }
          if (((iVar5 == 0) && (uVar8 <= k)) && (k == uVar8)) {
            FUN_00425220(param_1);
            if (param_2 == 1) {
              iVar5 = FUN_004c3ec0(4);
              fVar17 = (float)iVar5;
              iVar5 = FUN_004c3ec0(3,fVar17);
            }
            else {
              iVar5 = FUN_004c3ec0(2);
              fVar17 = (float)iVar5;
              iVar5 = FUN_004c3ec0(1,fVar17);
            }
            FUN_00425240((float)iVar5,fVar17);
            uVar7 = FUN_004c3ec0(6);
            *(undefined4 *)((iVar9 + 0xde6b) * 0x10 + iVar4) = uVar7;
            FUN_004c3f10(5,local_18c,0x40);
            FUN_00426420(param_1);
            j = 0xffffffff;
            pcVar12 = local_18c;
            do {
              if (j == 0) break;
              j = j - 1;
              cVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar3 != '\0');
            j = ~j - 1;
            local_1a4[0] = local_1b1;
            local_1a0 = (char *)0x0;
            local_19c = 0;
            local_198 = 0;
            cVar3 = FUN_00402a00(j,1);
            if (cVar3 != '\0') {
              pcVar12 = local_18c;
              pcVar14 = local_1a0;
              for (k = j >> 2; k != 0; k = k - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar14 = pcVar14 + 4;
              }
              for (k = j & 3; k != 0; k = k - 1) {
                *pcVar14 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar14 = pcVar14 + 1;
              }
              FUN_004029e0(j);
            }
            local_4 = 0;
            cVar3 = FUN_00425fb0(local_1a4);
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
            iVar9 = local_1ac;
            i = iVar10;
          }
        }
        else {
          puVar6 = *(undefined1 **)(param_3 + 4);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0057629c;
          }
          FUN_004c4150(s__s__d____The_damage_model__s_has_005960fc,
                       s_C__Work_A2IV_Game_prog_car_dmg_c_005960d8,0x77c,puVar6);
        }
        i = i + 1;
      } while (i < iVar10);
      if (local_1b1 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
    }
    puVar6 = *(undefined1 **)(param_3 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    FUN_004c4150(s__s__d____The_damage_model__s_was_00596164,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_00596140,0x786,puVar6);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00426f60 FUN_00426f60 ==== */

int FUN_00426f60(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar2 = 0;
  do {
    iVar1 = FUN_00425230();
    iVar3 = iVar2;
    if (iVar1 == param_1) {
      iVar3 = 0xfa;
      iVar4 = iVar2;
    }
    iVar2 = iVar3 + 1;
  } while (iVar2 < 0xfa);
  if (iVar4 == -1) {
    FUN_004c4150(s__s__d____Damage_info_for_car_cou_00596218,
                 s_C__Work_A2IV_Game_prog_car_dmg_c_005961f4,0x7be);
  }
  return in_ECX + 0x10 + iVar4 * 0x14;
}


/* ==== 00426fc0 FUN_00426fc0 ==== */

void FUN_00426fc0(undefined4 param_1,undefined4 param_2)

{
  FUN_00426800(param_1);
  FUN_00426460(param_2);
  return;
}


/* ==== 00426fe0 FUN_00426fe0 ==== */

void FUN_00426fe0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  DWORD DVar2;
  int in_ECX;
  int i;
  
  i = 0;
  do {
    iVar1 = FUN_00425230();
    if (iVar1 == param_1) {
      if ((param_1 != DAT_006fba58) ||
         (((DAT_006fbde2 == '\0' && (DAT_006fb8a0 == 0)) && (DAT_006fb96c == 0)))) {
        DVar2 = GetTickCount();
        if (DVar2 - *(int *)(i * 0x10 + 0xde6b4 + in_ECX) < 0x3c) {
          param_3 = 0;
        }
        FUN_00425310(param_3);
        FUN_00426270(param_4);
      }
      if (param_2 == 1) {
        FUN_00426880(i,param_3,param_4);
        FUN_00426a60(i,param_3);
LAB_004270dc:
        FUN_00427400(param_1,i,param_3,param_5);
      }
      else {
        if (param_2 == 3) {
          FUN_004269c0(i,param_3,param_4);
          FUN_00426a80(i,param_3);
          goto LAB_004270dc;
        }
        if (param_2 == 4) {
          FUN_00426920(i,param_3,param_4);
          FUN_00426a70(i,param_3);
        }
      }
      DVar2 = GetTickCount();
      *(DWORD *)(i * 0x10 + 0xde6b4 + in_ECX) = DVar2;
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
  FUN_00426f60(param_1);
  FUN_004252e0(param_2);
  return;
}


/* ==== 00427130 FUN_00427130 ==== */

void FUN_00427130(void)

{
  int iVar1;
  int in_ECX;
  int i;
  
  i = 0;
  do {
    iVar1 = FUN_00425230();
    if (iVar1 != -1) {
      iVar1 = FUN_00425300();
      if (*(int *)(in_ECX + 8) < iVar1) {
        FUN_00426530(i);
      }
    }
    i = i + 1;
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

void FUN_00427340(void)

{
  undefined4 uVar1;
  int in_ECX;
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
  *(undefined4 *)(in_ECX + 0xdf648) = uVar1;
  ppcVar2 = local_18;
  puVar3 = (undefined4 *)(in_ECX + 0xdf64c);
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
  int iVar1;
  
  FUN_0049eb50(param_2);
  iVar1 = FUN_0049e630();
  if (iVar1 == 0) {
    FUN_00450c90(param_1,param_2,0);
  }
  return;
}


/* ==== 00427400 FUN_00427400 ==== */

void FUN_00427400(undefined4 param_1,int param_2,float param_3,char param_4)

{
  DWORD DVar1;
  uint uVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  DVar1 = GetTickCount();
  if (DVar1 - *(int *)(param_2 * 0x10 + 0xde6b4 + in_ECX) < 300) {
    fVar3 = (float10)FUN_004252c0();
    if (((float10)param_3 < fVar3 * (float10)0.33333334) && (param_4 != '\0')) {
      uVar6 = 0;
      FUN_0049eb50(*(undefined4 *)(in_ECX + 0xdf648));
      FUN_0049e550(uVar6);
    }
  }
  fVar3 = (float10)FUN_004252c0();
  if ((float10)param_3 < fVar3) {
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    FUN_004273d0(param_1,*(undefined4 *)(in_ECX + 0xdf64c + uVar2 * 4));
    return;
  }
  fVar3 = (float10)FUN_004252d0();
  fVar4 = (float10)FUN_004252c0();
  fVar5 = (float10)FUN_004252c0();
  if ((float10)param_3 < fVar5 + (float10)(float)((fVar4 + (float10)(float)fVar3) * (float10)0.5)) {
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    FUN_004273d0(param_1,*(undefined4 *)(in_ECX + 0xdf654 + uVar2 * 4));
    return;
  }
  uVar2 = FUN_00558625();
  uVar2 = uVar2 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  FUN_004273d0(param_1,*(undefined4 *)(in_ECX + 0xdf65c + uVar2 * 4));
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

/* WARNING: Removing unreachable block (ram,0x0042792f) */
/* WARNING: Removing unreachable block (ram,0x00427936) */
/* WARNING: Removing unreachable block (ram,0x0042793b) */
/* WARNING: Removing unreachable block (ram,0x00427953) */

void FUN_004275e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int i;
  char *pcVar4;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a120;
  pvStack_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &pvStack_c;
  FUN_004028f0();
  local_4 = 0;
  iVar2 = FUN_004a71e0();
  iVar3 = FUN_00413cf0();
  FUN_004028f0();
  i = -1;
  pcVar4 = (char *)(&DAT_005d269c + iVar3 * 10);
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940();
  local_4._0_1_ = 1;
  FUN_004093c0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0();
  FUN_0041c870(local_1c);
  iVar3 = FUN_0042a3d0();
  if (param_1 < 2) {
    iVar2 = *(int *)(DAT_00715f00 + 0xf4 + iVar2 * 0x994);
  }
  else {
    iVar2 = *(int *)(DAT_00715f00 + 0xf8 + iVar2 * 0x994);
  }
  if (1 < iVar2) {
    FUN_004a6d70();
  }
  FUN_00413f00();
  iVar2 = FUN_00414070();
  (&DAT_005d1bb8)[iVar2 * 0xe] = (&DAT_005d1bb8)[iVar2 * 0xe] | 1;
  iVar3 = iVar3 * 0xf0;
  *(undefined4 *)(iVar3 + 0x5c + DAT_00715e50) = 0;
  *(uint *)(iVar3 + 0x1c + DAT_00715e50) = *(uint *)(iVar3 + 0x1c + DAT_00715e50) | 3;
  (**(code **)(**(int **)(iVar3 + 0x10 + DAT_00715e50) + 0x10))();
  FUN_004f21f0();
  FUN_004a8c50();
  FUN_004a1f30();
  FUN_00424660();
  FUN_00436170();
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
  fVar3 = (float10)FUN_004a6800();
  *pfVar1 = (float)((float10)*pfVar1 - fVar3 * (float10)(fVar2 * 10.0));
  fVar2 = *(float *)(param_1 + 0xc4 + DAT_00715e50);
  pfVar1 = (float *)(param_1 + 0xc4 + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800();
  *pfVar1 = (float)((float10)*pfVar1 - fVar3 * (float10)(fVar2 * 10.0));
  fVar2 = *(float *)(param_1 + 0xcc + DAT_00715e50);
  pfVar1 = (float *)(param_1 + 0xcc + DAT_00715e50);
  fVar3 = (float10)FUN_004a6800();
  *pfVar1 = (float)((float10)*pfVar1 - fVar3 * (float10)(fVar2 * 10.0));
  return;
}


/* ==== 00427b90 FUN_00427b90 ==== */

void FUN_00427b90(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x19) == '\x01') {
    FUN_00402ea0(0x42c80000);
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


