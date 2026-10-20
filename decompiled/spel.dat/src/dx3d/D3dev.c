/* spel.dat — dx3d/D3dev.cpp: 17 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004bb530 FUN_004bb530 ==== */

void FUN_004bb530(void)

{
  FUN_004bb5a0(&DAT_0073b258);
  return;
}


/* ==== 004bb540 FUN_004bb540 ==== */

void FUN_004bb540(void)

{
  FUN_005584e0(&LAB_004bb550);
  return;
}


/* ==== 004bb560 FUN_004bb560 ==== */

void FUN_004bb560(undefined4 param_1)

{
  FUN_004bbd40(&DAT_0073b258,param_1);
  return;
}


/* ==== 004bb570 FUN_004bb570 ==== */

void FUN_004bb570(undefined4 param_1,undefined4 param_2)

{
  FUN_004bbf20(&DAT_0073b258,param_1,param_2);
  return;
}


/* ==== 004bb590 FUN_004bb590 ==== */

void FUN_004bb590(void)

{
  FUN_004bc040(&DAT_0073b258);
  return;
}


/* ==== 004bb5a0 FUN_004bb5a0 ==== */

void * __thiscall FUN_004bb5a0(void *this)

{
  undefined4 *puVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f6a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c0fc0();
  local_4 = 0;
  local_58 = 0x40000000;
  local_54 = 0x41f00000;
  local_50 = 0x41f00000;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  puVar1 = (undefined4 *)FUN_004b3a60(local_4c,&local_58,&local_64,&local_70,0);
  puVar2 = (undefined4 *)((int)this + 0x1dc);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined4 *)FUN_004b39d0(local_4c,0x41200000,0x46435000,0x3f20d97c);
  puVar2 = (undefined4 *)((int)this + 0x19c);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = &DAT_0073b538;
  puVar2 = (undefined4 *)((int)this + 0x21c);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x284) = 3;
  *(undefined4 *)((int)this + 0x2cd) = 3;
  *(undefined4 *)((int)this + 0x298) = 1;
  *(undefined4 *)((int)this + 0x2a5) = 1;
  *(undefined4 *)((int)this + 0x2a9) = 1;
  *(undefined4 *)((int)this + 0x2ad) = 1;
  *(undefined1 *)((int)this + 0x2a0) = 1;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0xffffff;
  *(undefined4 *)((int)this + 0x28c) = 0x40500000;
  *(undefined4 *)((int)this + 0x290) = 0x42480000;
  *(undefined4 *)((int)this + 0x288) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0x294) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c1) = 0;
  *(undefined4 *)((int)this + 0x2bd) = 0;
  *(undefined4 *)((int)this + 0x2c9) = 2;
  *(undefined4 *)((int)this + 0x2b1) = 0;
  *(undefined4 *)((int)this + 0x2b9) = 2;
  *(undefined4 *)((int)this + 0x2b5) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2d1) = 0;
  *(undefined4 *)((int)this + 0x2a1) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0x40;
  ExceptionList = local_c;
  return this;
}


/* ==== 004bb750 FUN_004bb750 ==== */

void __thiscall FUN_004bb750(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056f6c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004bc040();
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return;
}


/* ==== 004bb7a0 FUN_004bb7a0 ==== */

void __thiscall FUN_004bb7a0(void *this)

{
  uint uVar1;
  undefined4 this_val;
  undefined4 *puVar2;
  int j;
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcStack_e8;
  int *piStack_e4;
  char *pcStack_e0;
  char *pcStack_dc;
  int *piStack_d8;
  char *pcStack_d4;
  char *pcStack_d0;
  int *piStack_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  int *piStack_c0;
  char *pcStack_bc;
  char *pcStack_b8;
  int *piStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  int *piStack_a8;
  char *pcStack_a4;
  char *pcStack_a0;
  int *piStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  int *piStack_90;
  char *pcStack_8c;
  char *pcStack_88;
  int *piStack_84;
  char *pcStack_80;
  char *pcStack_7c;
  int *piStack_78;
  char *pcStack_74;
  undefined4 *puStack_70;
  int *piStack_6c;
  char *pcStack_68;
  undefined4 *puStack_64;
  undefined4 auStack_4c [19];
  
  i = *(int *)((int)this + 0x274);
  puVar2 = (undefined4 *)((int)this + 0x19c);
  puVar3 = puVar2;
  puVar4 = auStack_4c + 3;
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (i != 1) {
    puStack_64 = (undefined4 *)0xd4;
    pcStack_68 = s___d3dev_h_005b1094;
    piStack_6c = (int *)s__s__d____device_was_not_initiali_005b106c;
    puStack_70 = (undefined4 *)0x4bb7db;
    FUN_004c4150();
  }
  puVar3 = auStack_4c + 3;
  puVar4 = puVar2;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  pcStack_68 = (char *)0x3;
  piStack_6c = DAT_0073b4b4;
  puStack_70 = (undefined4 *)0x4bb7f9;
  puStack_64 = puVar2;
  puStack_70 = (undefined4 *)(**(code **)(*DAT_0073b4b4 + 0x68))();
  if (puStack_70 != (undefined4 *)0x0) {
    pcStack_74 = "PjYh`\x10[";
    pcStack_74 = (char *)FUN_004bb290();
    piStack_78 = (int *)0x59;
    pcStack_7c = s___d3dev_inl_005b1060;
    pcStack_80 = s__s__d_____FOG__error_setting_tra_005912e0;
    piStack_84 = (int *)0x4bb815;
    FUN_004c4150();
  }
  i = *(int *)((int)this + 0x274);
  puVar2 = (undefined4 *)((int)this + 0x1dc);
  puVar3 = puVar2;
  puVar4 = auStack_4c;
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (i != 1) {
    puStack_70 = (undefined4 *)0xd4;
    pcStack_74 = s___d3dev_h_005b1094;
    piStack_78 = (int *)s__s__d____device_was_not_initiali_005b106c;
    pcStack_7c = (char *)0x4bb84a;
    FUN_004c4150();
  }
  puVar3 = auStack_4c;
  puVar4 = puVar2;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  pcStack_74 = (char *)0x2;
  piStack_78 = DAT_0073b4b4;
  pcStack_7c = (char *)0x4bb868;
  puStack_70 = puVar2;
  pcStack_7c = (char *)(**(code **)(*DAT_0073b4b4 + 0x68))();
  if (pcStack_7c != (char *)0x0) {
    pcStack_80 = "Pj6h`\x10[";
    pcStack_80 = (char *)FUN_004bb290();
    piStack_84 = (int *)0x36;
    pcStack_88 = s___d3dev_inl_005b1060;
    pcStack_8c = s__s__d_____FOG__error_setting_tra_005912e0;
    piStack_90 = (int *)0x4bb884;
    FUN_004c4150();
  }
  i = *(int *)((int)this + 0x274);
  puVar2 = (undefined4 *)((int)this + 0x21c);
  puVar3 = puVar2;
  puVar4 = (undefined4 *)&stack0xffffffa8;
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (i != 1) {
    pcStack_7c = (char *)0xd4;
    pcStack_80 = s___d3dev_h_005b1094;
    piStack_84 = (int *)s__s__d____device_was_not_initiali_005b106c;
    pcStack_88 = (char *)0x4bb8b9;
    FUN_004c4150();
  }
  puVar3 = (undefined4 *)&stack0xffffffa8;
  puVar4 = puVar2;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  pcStack_80 = (char *)0x1;
  piStack_84 = DAT_0073b4b4;
  pcStack_88 = (char *)0x4bb8d7;
  pcStack_7c = (char *)puVar2;
  pcStack_88 = (char *)(**(code **)(*DAT_0073b4b4 + 0x68))();
  if (pcStack_88 != (char *)0x0) {
    pcStack_8c = "Pj\x14h`\x10[";
    pcStack_8c = (char *)FUN_004bb290();
    piStack_90 = (int *)0x14;
    pcStack_94 = s___d3dev_inl_005b1060;
    pcStack_98 = s__s__d_____FOG__error_setting_tra_005912e0;
    piStack_9c = (int *)0x4bb8f3;
    FUN_004c4150();
  }
  piStack_90 = *(int **)((int)this + 0x25c);
  pcStack_88 = *(char **)((int)this + 0x298);
  pcStack_8c = (char *)0x4;
  pcStack_94 = (char *)0x4bb90b;
  pcStack_94 = (char *)(**(code **)(*piStack_90 + 0x5c))();
  if (pcStack_94 != (char *)0x0) {
    pcStack_98 = (char *)0x4bb915;
    pcStack_98 = (char *)FUN_004bb290();
    piStack_9c = (int *)0x96;
    pcStack_a0 = s_C__Work_DX3D_D3dev_cpp_005b21a8;
    pcStack_a4 = s__s__d_____TEXTURE__error_setting_0059be94;
    piStack_a8 = (int *)0x4bb92a;
    FUN_004c4150();
  }
  piStack_9c = *(int **)((int)this + 0x25c);
  pcStack_94 = *(char **)((int)this + 0x2a9);
  pcStack_98 = (char *)0x29;
  pcStack_a0 = (char *)0x4bb942;
  pcStack_a0 = (char *)(**(code **)(*piStack_9c + 0x5c))();
  if (pcStack_a0 != (char *)0x0) {
    pcStack_a4 = (char *)0x4bb94c;
    pcStack_a4 = (char *)FUN_004bb290();
    piStack_a8 = (int *)0x99;
    pcStack_ac = s_C__Work_DX3D_D3dev_cpp_005b21a8;
    pcStack_b0 = s__s__d_____COLORKEY__error_settin_005b2170;
    piStack_b4 = (int *)0x4bb961;
    FUN_004c4150();
  }
  piStack_a8 = *(int **)((int)this + 0x25c);
  pcStack_a0 = *(char **)((int)this + 0x2a5);
  pcStack_a4 = (char *)0x7;
  pcStack_ac = (char *)0x4bb979;
  pcStack_ac = (char *)(**(code **)(*piStack_a8 + 0x5c))();
  if (pcStack_ac != (char *)0x0) {
    pcStack_b0 = (char *)0x4bb983;
    pcStack_b0 = (char *)FUN_004bb290();
    piStack_b4 = (int *)0x9c;
    pcStack_b8 = s_C__Work_DX3D_D3dev_cpp_005b21a8;
    pcStack_bc = s__s__d_____ZBUFFER__error_setting_0059c150;
    piStack_c0 = (int *)0x4bb998;
    FUN_004c4150();
  }
  piStack_b4 = *(int **)((int)this + 0x25c);
  pcStack_ac = *(char **)((int)this + 0x2ad);
  pcStack_b0 = (char *)0x15;
  pcStack_b8 = (char *)0x4bb9b0;
  pcStack_b8 = (char *)(**(code **)(*piStack_b4 + 0x5c))();
  if (pcStack_b8 != (char *)0x0) {
    pcStack_bc = (char *)0x4bb9ba;
    pcStack_bc = (char *)FUN_004bb290();
    piStack_c0 = (int *)0x9f;
    pcStack_c4 = s_C__Work_DX3D_D3dev_cpp_005b21a8;
    pcStack_c8 = s__s__d_____BLENDING__error_settin_0059bd78;
    piStack_cc = (int *)0x4bb9cf;
    FUN_004c4150();
  }
  i = *(int *)((int)this + 0x27c);
  pcStack_b8 = (char *)0xea;
  pcStack_bc = s___d3dev_inl_005b1060;
  piStack_c0 = (int *)0x4bb9e9;
  FUN_004bbc20(this);
  piStack_c0 = *(int **)((int)this + 0x25c);
  *(int *)((int)this + 0x27c) = i;
  pcStack_bc = (char *)0x1c;
  pcStack_c4 = (char *)0x4bb9fe;
  pcStack_b8 = (char *)i;
  pcStack_c4 = (char *)(**(code **)(*piStack_c0 + 0x5c))();
  if (pcStack_c4 != (char *)0x0) {
    pcStack_c8 = (char *)0x4bba08;
    pcStack_c8 = (char *)FUN_004bb290();
    piStack_cc = (int *)0xf0;
    pcStack_d0 = s___d3dev_inl_005b1060;
    pcStack_d4 = s__s__d_____FOG__error_setting_ren_0059a15c;
    piStack_d8 = (int *)0x4bba1d;
    FUN_004c4150();
  }
  piStack_cc = *(int **)((int)this + 0x25c);
  pcStack_c4 = *(char **)((int)this + 0x280);
  pcStack_c8 = (char *)0x22;
  pcStack_d0 = (char *)0x4bba35;
  pcStack_d0 = (char *)(**(code **)(*piStack_cc + 0x5c))();
  if (pcStack_d0 != (char *)0x0) {
    pcStack_d4 = (char *)0x4bba3f;
    pcStack_d4 = (char *)FUN_004bb290();
    piStack_d8 = (int *)0xf3;
    pcStack_dc = s___d3dev_inl_005b1060;
    pcStack_e0 = s__s__d_____FOG__error_setting_ren_0059a15c;
    piStack_e4 = (int *)0x4bba54;
    FUN_004c4150();
  }
  piStack_d8 = *(int **)((int)this + 0x25c);
  pcStack_d0 = *(char **)((int)this + 0x288);
  pcStack_d4 = (char *)0x7;
  pcStack_dc = (char *)0x4bba6c;
  pcStack_dc = (char *)(**(code **)(*piStack_d8 + 100))();
  if (pcStack_dc != (char *)0x0) {
    pcStack_e0 = (char *)0x4bba76;
    pcStack_e0 = (char *)FUN_004bb290();
    piStack_e4 = (int *)0xf6;
    pcStack_e8 = s___d3dev_inl_005b1060;
    FUN_004c4150(s__s__d_____FOG__error_setting_ren_0059a15c);
  }
  piStack_e4 = *(int **)((int)this + 0x25c);
  pcStack_dc = *(char **)((int)this + 0x28c);
  pcStack_e0 = (char *)0x5;
  pcStack_e8 = (char *)0x4bbaa3;
  pcStack_e8 = (char *)(**(code **)(*piStack_e4 + 100))();
  if (pcStack_e8 != (char *)0x0) {
    this_val = FUN_004bb290();
    FUN_004c4150(s__s__d_____FOG__error_setting_ren_0059a15c,s___d3dev_inl_005b1060,0xf9,this_val);
  }
  pcStack_e8 = *(char **)((int)this + 0x290);
  j = (**(code **)(**(int **)((int)this + 0x25c) + 100))(*(int **)((int)this + 0x25c),6);
  if (j != 0) {
    this_val = FUN_004bb290(j);
    FUN_004c4150(s__s__d_____FOG__error_setting_ren_0059a15c,s___d3dev_inl_005b1060,0xfc,this_val);
  }
  j = (**(code **)(**(int **)((int)this + 0x25c) + 100))
                (*(int **)((int)this + 0x25c),4,*(undefined4 *)((int)this + 0x284));
  if (j != 0) {
    this_val = FUN_004bb290(j);
    FUN_004c4150(s__s__d_____FOG__error_setting_ren_0059a15c,s___d3dev_inl_005b1060,0xff,this_val);
  }
  if (i == 0) {
    if (DAT_005b2b64 == -1) {
      return;
    }
    this_val = 0x10a;
    i = DAT_005b2b64;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x280);
    FUN_004066c0(&pcStack_e8,(float)((int)uVar1 >> 0x10) * 0.003921569,
                 (float)((int)uVar1 >> 8 & 0xff) * 0.003921569,(float)(uVar1 & 0xff) * 0.003921569);
    puVar2 = (undefined4 *)FUN_004b6110(&DAT_0073b210,DAT_005b1bac,s___d3dev_inl_005b1060,0x106);
    this_val = *puVar2;
    FUN_00457790(this_val,&pcStack_e8);
    FUN_00457750(this_val,&pcStack_e8);
    this_val = 0x107;
    i = DAT_005b1bac;
  }
  uVar5 = DAT_0073b78c;
  puVar2 = (undefined4 *)FUN_004b6110(&DAT_0073b210,i,s___d3dev_inl_005b1060,this_val);
  FUN_004576f0(*puVar2,uVar5);
  return;
}


/* ==== 004bbc20 FUN_004bbc20 ==== */

void __thiscall FUN_004bbc20(void *this)

{
  if (*(int *)((int)this + 0x274) != 1) {
    FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
  }
  return;
}


/* ==== 004bbc50 FUN_004bbc50 ==== */

undefined4 __thiscall
FUN_004bbc50(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x260) = param_2;
  *(undefined4 *)((int)this + 0x264) = param_3;
  *(undefined4 *)((int)this + 0x268) = param_4;
  *(undefined4 *)((int)this + 0x26c) = param_5;
  FUN_004c3fa0(s_Creating_d3d_device_with_GUID__d_005b21e8,param_2,param_3,param_4,param_5);
  iVar1 = *(int *)((int)this + 0x270);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*DAT_0073b778 + 0x20))
                      (DAT_0073b778,&param_2,DAT_007408ac,(int)this + 0x25c);
    return uVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      FUN_004c4150(s__s__d____Illegal_focus_for_3d_de_005b21c0,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                   0xc6);
      return 0;
    }
    uVar2 = (**(code **)(*DAT_0073b778 + 0x20))
                      (DAT_0073b778,&param_2,DAT_00740890,(int)this + 0x25c);
    return uVar2;
  }
  uVar2 = (**(code **)(*DAT_0073b778 + 0x20))(DAT_0073b778,&param_2,DAT_007408b0,(int)this + 0x25c);
  return uVar2;
}


/* ==== 004bbd40 FUN_004bbd40 ==== */

undefined4 __thiscall FUN_004bbd40(void *this,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_5c [80];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f6e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c31f0(local_5c,100);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x270) = param_2;
  if (DAT_005b37a0 < 9) {
    *(undefined4 *)((int)this + 0x278) = 4;
    *(undefined4 *)((int)this + 0x2b9) = 1;
    iVar1 = FUN_004bbc50(this,0xf2086b20,0x11cf259f,0xaa001aa3,0x5633b900);
    if (iVar1 != 0) {
      local_4 = 0xffffffff;
      FUN_004c33f0(local_5c);
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x278) = 1;
    iVar1 = FUN_004bbc50(this,0x84e63de0,0x11cf46aa,0x6f81,0x6e1520c0);
    if (iVar1 != 0) {
      uVar2 = FUN_004bb290(param_2,param_2);
      FUN_004c3fa0(s___s___d_Could_not_create_HAL_dev_005b2238,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                   0xfd,uVar2);
      *(undefined4 *)((int)this + 0x278) = 3;
      iVar1 = FUN_004bbc50(this,0xa4665c60,0x11cf2673,0xaa001aa3,0x5633b900);
      if (iVar1 != 0) {
        uVar2 = FUN_004bb290(iVar1);
        FUN_004c3fa0(s___s___d_Could_not_create_RGB_dev_005b220c,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                     0x102,uVar2);
        local_4 = 0xffffffff;
        FUN_004c33f0(local_5c);
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  *(undefined4 *)((int)this + 0x274) = 1;
  FUN_004bc160(this);
  FUN_004bb7a0(this);
  FUN_004bc0f0();
  local_4 = 0xffffffff;
  FUN_004c33f0(local_5c);
  ExceptionList = local_c;
  return 1;
}


/* ==== 004bbf20 FUN_004bbf20 ==== */

undefined4 __thiscall FUN_004bbf20(void *this,undefined4 param_2,int param_3)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x270) = param_2;
  *(int *)((int)this + 0x278) = param_3;
  if (param_3 == 1) {
    iVar1 = FUN_004bbc50(this,0x84e63de0,0x11cf46aa,0x6f81,0x6e1520c0);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else if (param_3 == 3) {
    iVar1 = FUN_004bbc50(this,0xa4665c60,0x11cf2673,0xaa001aa3,0x5633b900);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else if (param_3 == 4) {
    iVar1 = FUN_004bbc50(this,0xf2086b20,0x11cf259f,0xaa001aa3,0x5633b900);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    FUN_004c4150(s__s__d____requested_unknown_devic_005b2264,s_C__Work_DX3D_D3dev_cpp_005b21a8,299);
  }
  *(undefined4 *)((int)this + 0x274) = 1;
  FUN_004bc160(this);
  FUN_004bb7a0(this);
  FUN_004bc0f0();
  return 1;
}


/* ==== 004bc040 FUN_004bc040 ==== */

void __thiscall FUN_004bc040(void *this)

{
  if (*(int *)((int)this + 0x274) == 1) {
    (**(code **)(**(int **)((int)this + 0x25c) + 8))(*(int **)((int)this + 0x25c));
    *(undefined4 *)((int)this + 0x274) = 0;
  }
  return;
}


/* ==== 004bc070 FUN_004bc070 ==== */

uint FUN_004bc070(undefined4 param_1,undefined4 param_2)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_6c [18];
  undefined4 local_24 [6];
  uint uStack_c;
  undefined4 local_4;
  
  puVar1 = local_6c;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_6c[2] = param_2;
  local_6c[0] = 0x6c;
  local_6c[1] = 0x1007;
  local_4 = 0x10005000;
  local_6c[3] = param_1;
  puVar1 = &DAT_00740968;
  puVar2 = local_24;
  for (i = 8; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  i = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_1,0);
  return ~-(uint)(i != 0) & uStack_c;
}


/* ==== 004bc0f0 FUN_004bc0f0 ==== */

void FUN_004bc0f0(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int *piVar3;
  int i;
  
  FUN_00559400();
  i = 0;
  iVar2 = 0;
  piVar3 = (int *)register0x00000010;
  while( true ) {
    iVar1 = FUN_004bc070(0x100,0x100);
    *piVar3 = iVar1;
    if (iVar1 == 0) break;
    iVar2 = iVar2 + (DAT_00740974 >> 3) * 0x10000;
    i = i + 1;
    piVar3 = piVar3 + 1;
  }
  *(int *)(extraout_ECX + 0x2a1) = iVar2;
  if (0 < i) {
    do {
      (**(code **)(**(int **)register0x00000010 + 8))(*(int **)register0x00000010);
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 004bc160 FUN_004bc160 ==== */

void __thiscall FUN_004bc160(void *this)

{
  int iVar1;
  undefined4 uVar2;
  char *pcStack_1a4;
  undefined4 *puStack_1a0;
  undefined4 local_198 [48];
  undefined1 auStack_d8 [12];
  char local_cc [204];
  
  if (*(int *)((int)this + 0x274) != 1) {
    puStack_1a0 = (undefined4 *)0xd4;
    pcStack_1a4 = s___d3dev_h_005b1094;
    FUN_004c4150(s__s__d____device_was_not_initiali_005b106c);
  }
  puStack_1a0 = local_198;
  local_cc[0] = -0x34;
  local_cc[1] = '\0';
  local_cc[2] = '\0';
  local_cc[3] = '\0';
  local_198[0] = 0xcc;
  pcStack_1a4 = local_cc;
  iVar1 = (**(code **)(**(int **)((int)this + 0x25c) + 0xc))(*(int **)((int)this + 0x25c));
  if (iVar1 != 0) {
    uVar2 = FUN_004bb290(iVar1);
    FUN_004c4150(s__s__d____error_getting_device_ca_005b2290,s_C__Work_DX3D_D3dev_cpp_005b21a8,0x1ac
                 ,uVar2);
  }
  FUN_004c0ff0(this,auStack_d8,&pcStack_1a4);
  FUN_004c15f0(this);
  return;
}


/* ==== 004bc200 FUN_004bc200 ==== */

void __thiscall FUN_004bc200(void *this,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x274) != 1) {
    FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
  }
  *(int *)((int)this + 0x2bd) = param_2;
  if (param_2 == 0) {
    piVar1 = *(int **)((int)this + 0x25c);
    if (*(char *)((int)this + 0x2a0) == '\x01') {
      iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,0x11,3);
      if (iVar2 != 0) {
        FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b22f4,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                     0x1f7);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                        (*(int **)((int)this + 0x25c),0x12,3);
      if (iVar2 != 0) {
        FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b22f4,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                     0x1fc);
        return;
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,0x11,1);
      if (iVar2 != 0) {
        FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b22bc,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                     0x205);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                        (*(int **)((int)this + 0x25c),0x12,1);
      if (iVar2 != 0) {
        FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b22bc,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                     0x20a);
      }
    }
  }
  else {
    piVar1 = *(int **)((int)this + 0x25c);
    if (*(char *)((int)this + 0x2a0) == '\x01') {
      iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,0x11,6);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                          (*(int **)((int)this + 0x25c),0x12,6);
        if (iVar2 != 0) {
          FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b2338,s_C__Work_DX3D_D3dev_cpp_005b21a8
                       ,0x1dc);
          return;
        }
      }
      else {
        iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                          (*(int **)((int)this + 0x25c),0x11,4);
        if (iVar2 != 0) {
          FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b2370,s_C__Work_DX3D_D3dev_cpp_005b21a8
                       ,0x1ce);
        }
        iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                          (*(int **)((int)this + 0x25c),0x12,4);
        if (iVar2 != 0) {
          FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b2370,s_C__Work_DX3D_D3dev_cpp_005b21a8
                       ,0x1d3);
          return;
        }
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x5c))(piVar1,0x11,2);
      if (iVar2 != 0) {
        FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b2338,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                     0x1e6);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x25c) + 0x5c))
                        (*(int **)((int)this + 0x25c),0x12,2);
      if (iVar2 != 0) {
        FUN_004c4150(s___s___d_Could_not_set_filter_mod_005b2338,s_C__Work_DX3D_D3dev_cpp_005b21a8,
                     0x1eb);
        return;
      }
    }
  }
  return;
}


