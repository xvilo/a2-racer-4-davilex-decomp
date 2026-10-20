/* spel.dat — dx3d/Str.cpp: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c18e0 FUN_004c18e0 ==== */

void FUN_004c18e0(void)

{
  FUN_005584e0(&LAB_004c18f0);
  return;
}


/* ==== 004c1950 FUN_004c1950 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1950(uint size)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0073b79c != 0) {
    if (DAT_0073b79c == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b7bd,&DAT_0073b7a4,
                   DAT_0073b794);
      FUN_0054b339(DAT_0073b790);
    }
    if (DAT_0073b79c != 0) {
      FUN_0054b339(DAT_0073b7a0);
      DAT_0073b79c = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 &DAT_0073b7bd,&DAT_0073b7a4,size);
  }
  DAT_0073b790 = operator_new(size * 0xc);
  DAT_0073b794 = size;
  _DAT_0073b798 = 0;
  DAT_0073b7a0 = operator_new(size);
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,&DAT_0073b7bd,&DAT_0073b7a4,DAT_0073b794)
  ;
  DAT_0073b79c = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)((int)DAT_0073b7a0 + iVar1) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  return;
}


/* ==== 004c1a50 FUN_004c1a50 ==== */

void FUN_004c1a50(void)

{
  if (DAT_0073b79c == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b7bd,&DAT_0073b7a4,
                 DAT_0073b794);
    FUN_0054b339(DAT_0073b790);
  }
  if (DAT_0073b79c != 0) {
    FUN_0054b339(DAT_0073b7a0);
    DAT_0073b79c = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


/* ==== 004c1ab0 FUN_004c1ab0 ==== */

void __thiscall FUN_004c1ab0(void *this)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


/* ==== 004c1ac0 FUN_004c1ac0 ==== */

void __thiscall FUN_004c1ac0(void *this)

{
  if (*(int *)((int)this + 4) == 1) {
    FUN_0054b339(*(undefined4 *)this);
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return;
}


/* ==== 004c1ae0 FUN_004c1ae0 ==== */

void * __thiscall FUN_004c1ae0(void *this,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint i;
  uint j;
  uint k;
  char *pcVar3;
  char *pcVar4;
  
  i = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i;
  if ((int)i < 1) {
    FUN_004c4150(s__s__d____assignment_to_a_nul_siz_005b2fdc,s_D__Work_DX3D_Str_cpp_005b3008,0x45);
  }
  if (*(int *)((int)this + 4) == 0) {
    puVar2 = operator_new(i);
  }
  else {
    if (*(int *)((int)this + 4) != 1) {
      FUN_004c4150(s__s__d____unknown_string_status_005b2fb8,s_D__Work_DX3D_Str_cpp_005b3008,0x5e);
      return this;
    }
    FUN_0054b339(*(undefined4 *)this);
    puVar2 = operator_new(i);
  }
  *(undefined4 **)this = puVar2;
  for (j = i >> 2; j != 0; j = j - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  j = 0xffffffff;
  do {
    pcVar3 = param_2;
    if (j == 0) break;
    j = j - 1;
    pcVar3 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar3;
  } while (cVar1 != '\0');
  j = ~j;
  pcVar3 = pcVar3 + -j;
  pcVar4 = *(char **)this;
  for (k = j >> 2; k != 0; k = k - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (j = j & 3; j != 0; j = j - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(uint *)((int)this + 8) = i;
  *(undefined4 *)((int)this + 4) = 1;
  return this;
}


/* ==== 004c1bb0 FUN_004c1bb0 ==== */

void FUN_004c1bb0(void)

{
  FUN_004c1cb0(&DAT_0073b7d8);
  return;
}


/* ==== 004c1bc0 FUN_004c1bc0 ==== */

void FUN_004c1bc0(void)

{
  FUN_005584e0(&LAB_004c1bd0);
  return;
}


/* ==== 004c1be0 FUN_004c1be0 ==== */

void __thiscall FUN_004c1be0(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x2d,(int)this + 0x14,
                 *(undefined4 *)((int)this + 4));
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      FUN_005586c5(iVar1,0xb0,*(undefined4 *)(iVar1 + -4),FUN_004d1400);
      FUN_0054b339(iVar1 + -4);
    }
  }
  if (*(int *)((int)this + 0xc) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


