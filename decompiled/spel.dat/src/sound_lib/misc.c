/* spel.dat — sound_lib/misc.cpp: 13 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049ff60 FUN_0049ff60 ==== */

void __thiscall FUN_0049ff60(void *this,undefined4 param_2)

{
  FUN_004c3b60(this,param_2);
  FUN_0049fac0(this);
  FUN_0049fc40(this);
  return;
}


/* ==== 0049ff90 FUN_0049ff90 ==== */

void __thiscall FUN_0049ff90(void *this,uint param_2,undefined4 param_3)

{
  int iVar1;
  int this_val;
  int i;
  
  iVar1 = *(int *)((int)this + 8);
  i = 0;
  if (0 < iVar1) {
    do {
      this_val = FUN_0049eb50((int)this + 4,i);
      if ((*(uint *)(this_val + 8) & param_2) != 0) {
        FUN_004a00b0(param_3,0,100,s___csndsrc_h_005ae6f8,0x116);
        *(undefined4 *)(this_val + 0x54) = param_3;
        FUN_0049e3c0(this_val);
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 004a0000 FUN_004a0000 ==== */

void __thiscall FUN_004a0000(void *this,undefined4 *param_2,undefined4 *param_3)

{
  int i;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0x224);
  for (i = 0x10; i != 0; i = i + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *param_3 = *(undefined4 *)((int)this + 0x264);
  param_3[1] = *(undefined4 *)((int)this + 0x268);
  param_3[2] = *(undefined4 *)((int)this + 0x26c);
  return;
}


/* ==== 004a0040 FUN_004a0040 ==== */

void __thiscall FUN_004a0040(void *this,undefined4 *param_2,undefined4 *param_3)

{
  int i;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0x224);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)((int)this + 0x264) = *param_3;
  *(undefined4 *)((int)this + 0x268) = param_3[1];
  *(undefined4 *)((int)this + 0x26c) = param_3[2];
  return;
}


/* ==== 004a00b0 FUN_004a00b0 ==== */

void FUN_004a00b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 local_100 [256];
  
  if ((param_1 < param_2) || (param_3 < param_1)) {
    FUN_005587a3(local_100,s_Value_out_of_range_in_File___s_L_005aef9c,param_4,param_5,param_1,
                 param_2,param_3);
    FUN_004a0140(local_100);
  }
  return;
}


/* ==== 004a0100 FUN_004a0100 ==== */

void FUN_004a0100(int param_1,undefined4 param_2)

{
  undefined1 local_100 [256];
  
  if (param_1 == 0) {
    FUN_005590ae(local_100,param_2,&stack0x0000000c);
    FUN_004a0140(local_100);
  }
  return;
}


/* ==== 004a0140 FUN_004a0140 ==== */

void FUN_004a0140(LPCSTR param_1,int param_2)

{
  int iVar1;
  int *unaff_retaddr;
  undefined4 uVar2;
  
  FUN_004c3f80(0,1);
  FUN_004c3fa0(s__s_005aeff8,param_1);
  ShowWindow(DAT_007408a4,6);
  iVar1 = FUN_004cd5e0();
  while (iVar1 != 0) {
    iVar1 = FUN_004cd5e0();
  }
  MessageBoxExA((HWND)0x0,param_1,s_Assertion_failure_005aefe4,0x10010,0);
  FUN_004c4040();
  uVar2 = 0;
  FUN_00559c79(0);
  FUN_004a0100(unaff_retaddr != (int *)0x0,s__s___d__NULL_pointer_passed_to_C_005aeffc,
               s_C__work_sound_lib_misc_cpp_005af028,0x9d,uVar2);
  if (*unaff_retaddr < (int)param_1) {
    *unaff_retaddr = (int)param_1;
  }
  if (param_2 < *unaff_retaddr) {
    *unaff_retaddr = param_2;
  }
  return;
}


/* ==== 004a01a0 FUN_004a01a0 ==== */

void FUN_004a01a0(int *param_1,int param_2,int param_3)

{
  FUN_004a0100(param_1 != (int *)0x0,s__s___d__NULL_pointer_passed_to_C_005aeffc,
               s_C__work_sound_lib_misc_cpp_005af028,0x9d);
  if (*param_1 < param_2) {
    *param_1 = param_2;
  }
  if (param_3 < *param_1) {
    *param_1 = param_3;
  }
  return;
}


/* ==== 004a0210 FUN_004a0210 ==== */

void * __thiscall FUN_004a0210(void *this)

{
  undefined1 local_d;
  
  FUN_004f54b0();
  *(undefined1 *)((int)this + 0x70) = local_d;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0xa9) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return this;
}


/* ==== 004a02a0 FUN_004a02a0 ==== */

void __thiscall FUN_004a02a0(void *this,undefined4 param_2)

{
  char local_34 [52];
  
  FUN_00567b81(param_2,local_34,10);
  *(undefined4 *)((int)this + 0x80) = param_2;
  FUN_004f5520(this,local_34);
  return;
}


/* ==== 004a02e0 FUN_004a02e0 ==== */

void * __thiscall FUN_004a02e0(void *this)

{
  FUN_004f5560();
  return this;
}


/* ==== 004a02f0 FUN_004a02f0 ==== */

void __thiscall
FUN_004a02f0(void *this,int param_2,float *param_3,float *param_4,int param_5,int param_6)

{
  double *pdVar1;
  double *pdVar2;
  float local_4c;
  float local_48;
  float local_44;
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
  pdVar2 = (double *)0x0;
  pdVar1 = (double *)0x0;
  if (param_3 != (float *)0x0) {
    local_4c = *param_3;
    local_48 = param_3[1];
    local_44 = param_3[2];
    FUN_004a4180(&local_4c);
    pdVar1 = &local_40;
    local_40 = (double)local_4c;
    local_38 = (double)local_48;
    local_30 = (double)local_44;
  }
  if (param_4 != (float *)0x0) {
    pdVar2 = &local_20;
    local_20 = (double)*param_4;
    local_18 = (double)-param_4[1];
    local_10 = (double)param_4[2];
  }
  FUN_004f5860(this,*(void **)(param_2 + 8),(int)pdVar1,(int)pdVar2,param_5,param_6,(void *)0x0,0);
  return;
}


/* ==== 004a0390 FUN_004a0390 ==== */

void __thiscall
FUN_004a0390(void *this,int param_2,float *param_3,float *param_4,int param_5,int param_6)

{
  double *pdVar1;
  double *pdVar2;
  float local_4c;
  float local_48;
  float local_44;
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
  pdVar2 = (double *)0x0;
  pdVar1 = (double *)0x0;
  if (param_3 != (float *)0x0) {
    local_4c = *param_3;
    local_48 = param_3[1];
    local_44 = param_3[2];
    FUN_004a4180(&local_4c);
    pdVar1 = &local_40;
    local_40 = (double)local_4c;
    local_38 = (double)local_48;
    local_30 = (double)local_44;
  }
  if (param_4 != (float *)0x0) {
    pdVar2 = &local_20;
    local_20 = (double)*param_4;
    local_18 = (double)-param_4[1];
    local_10 = (double)param_4[2];
  }
  FUN_004f5680(this,*(void **)(param_2 + 8),pdVar1,(int)pdVar2,param_5,param_6,(void *)0x0,0);
  return;
}


