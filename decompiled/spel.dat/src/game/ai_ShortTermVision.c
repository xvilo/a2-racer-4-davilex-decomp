/* spel.dat — game/ai_ShortTermVision.cpp: 37 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0041c530 FUN_0041c530 ==== */

void FUN_0041c530(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


/* ==== 0041c540 FUN_0041c540 ==== */

void FUN_0041c540(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[3] != 0) {
    FUN_0054b339(in_ECX[3]);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


/* ==== 0041c570 FUN_0041c570 ==== */

int FUN_0041c570(int param_1)

{
  int iVar1;
  uint3 uVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[1];
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 == *in_ECX) {
    return (uint)uVar2 << 8;
  }
  if (param_1 == -1) {
    return (uint)uVar2 << 8;
  }
  *(int *)(in_ECX[3] + iVar1 * 4) = param_1;
  iVar1 = in_ECX[1];
  in_ECX[1] = iVar1 + 1;
  return CONCAT31((int3)((uint)(iVar1 + 1) >> 8),1);
}


/* ==== 0041c5a0 FUN_0041c5a0 ==== */

undefined4 FUN_0041c5a0(int param_1,int param_2)

{
  char cVar1;
  int *in_ECX;
  
  if (((param_2 != -1) && (-1 < param_1)) && (param_1 < *in_ECX)) {
    cVar1 = FUN_0041c5f0(param_1);
    if (cVar1 == '\0') {
      *(int *)(in_ECX[3] + param_1 * 4) = param_2;
      in_ECX[1] = in_ECX[1] + 1;
    }
    return 1;
  }
  return 0;
}


/* ==== 0041c5f0 FUN_0041c5f0 ==== */

undefined4 FUN_0041c5f0(int param_1)

{
  int in_ECX;
  
  return CONCAT31((int3)((uint)*(int *)(in_ECX + 0xc) >> 8),
                  *(int *)(*(int *)(in_ECX + 0xc) + param_1 * 4) == -1);
}


/* ==== 0041c610 FUN_0041c610 ==== */

uint FUN_0041c610(int *param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint3 uVar3;
  int in_ECX;
  int iVar4;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 < 1) {
    *(undefined4 *)(in_ECX + 8) = 0xffffffff;
    return in_EAX & 0xffffff00;
  }
  iVar2 = *(int *)(in_ECX + 8) + 1;
  iVar4 = iVar2 % iVar1;
  *(int *)(in_ECX + 8) = iVar4;
  if (iVar4 < 0) {
    return iVar2 / iVar1 & 0xffffff00;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + iVar4 * 4);
  uVar3 = (uint3)((uint)*(int *)(in_ECX + 0xc) >> 8);
  if (iVar1 < 0) {
    return (uint)uVar3 << 8;
  }
  *param_1 = iVar1;
  return CONCAT31(uVar3,1);
}


/* ==== 0041c660 FUN_0041c660 ==== */

uint FUN_0041c660(int param_1)

{
  uint in_EAX;
  void *operator_new_result;
  int i;
  int *in_ECX;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (in_ECX[3] != 0) {
    FUN_0054b339(in_ECX[3]);
  }
  operator_new_result = operator_new(param_1 * 4);
  in_ECX[3] = (int)operator_new_result;
  if (operator_new_result == (void *)0x0) {
    return 0;
  }
  i = 0;
  *in_ECX = param_1;
  if (0 < param_1) {
    do {
      i = i + 1;
      *(undefined4 *)(in_ECX[3] + -4 + i * 4) = 0xffffffff;
    } while (i < *in_ECX);
  }
  i = FUN_00558625();
  in_ECX[2] = i % *in_ECX;
  return CONCAT31((int3)((uint)(i / *in_ECX) >> 8),1);
}


/* ==== 0041c6d0 FUN_0041c6d0 ==== */

undefined1 FUN_0041c6d0(undefined4 *param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  cVar1 = FUN_0041c610(local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = 0;
  FUN_0049eb50(*(undefined4 *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 8) * 4));
  FUN_0049e550(uVar2);
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 8) * 4);
  return 1;
}


/* ==== 0041c720 FUN_0041c720 ==== */

uint FUN_0041c720(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  if ((int)*(uint *)(in_ECX + 4) < 1) {
    *(undefined4 *)(in_ECX + 8) = 0xffffffff;
    return *(uint *)(in_ECX + 4) & 0xffffff00;
  }
  *(uint *)(in_ECX + 8) = param_1;
  if ((int)param_1 < 0) {
    return param_1 & 0xffffff00;
  }
  uVar1 = *(uint *)(*(int *)(in_ECX + 0xc) + param_1 * 4);
  if ((int)uVar1 < 0) {
    return uVar1 & 0xffffff00;
  }
  uVar3 = 0;
  FUN_0049eb50(uVar1);
  FUN_0049e550(uVar3);
  iVar2 = *(int *)(in_ECX + 0xc);
  *param_2 = *(undefined4 *)(iVar2 + *(int *)(in_ECX + 8) * 4);
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


/* ==== 0041c790 FUN_0041c790 ==== */

bool FUN_0041c790(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) < 0) {
    return false;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 8) * 4);
  if (iVar1 < 0) {
    return false;
  }
  FUN_0049eb50(iVar1);
  iVar1 = FUN_0049e630();
  return iVar1 != 0;
}


/* ==== 0041c7d0 FUN_0041c7d0 ==== */

void FUN_0041c7d0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0041c7e0 FUN_0041c7e0 ==== */

void FUN_0041c7e0(void)

{
  FUN_005584e0(&LAB_0041c7f0);
  return;
}


/* ==== 0041c810 FUN_0041c810 ==== */

void FUN_0041c810(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0041c820 FUN_0041c820 ==== */

void FUN_0041c820(void)

{
  FUN_005584e0(&LAB_0041c830);
  return;
}


/* ==== 0041c870 FUN_0041c870 ==== */

/* WARNING: Removing unreachable block (ram,0x0041c897) */

void FUN_0041c870(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (in_ECX == param_1) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(in_ECX + 8) - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(*(int *)(in_ECX + 4) + uVar1,*(int *)(in_ECX + 4) + uVar1 + iVar5,iVar3 - iVar5);
      iVar3 = *(int *)(in_ECX + 8);
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(in_ECX + 4) = puVar4;
      *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&DAT_0057629c;
    }
    puVar7 = *(undefined4 **)(in_ECX + 4);
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
  return;
}


/* ==== 0041c990 FUN_0041c990 ==== */

uint FUN_0041c990(char *param_1,uint param_2,uint param_3)

{
  char *_memchr_result;
  int in_ECX;
  char *_Buf;
  uint i;
  char *_MaxCount;
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  
  if ((param_3 != 0) || (*(uint *)(in_ECX + 8) < param_2)) {
    if ((param_2 < *(uint *)(in_ECX + 8)) && (i = *(uint *)(in_ECX + 8) - param_2, param_3 <= i)) {
      _MaxCount = (char *)(i + (1 - param_3));
      _Buf = (char *)(*(int *)(in_ECX + 4) + param_2);
      while( true ) {
        _memchr_result = _memchr(_Buf,(int)*param_1,(size_t)_MaxCount);
        if (_memchr_result == (char *)0x0) break;
        bVar3 = true;
        i = param_3;
        pcVar1 = _memchr_result;
        pcVar2 = param_1;
        do {
          if (i == 0) break;
          i = i - 1;
          bVar3 = *pcVar1 == *pcVar2;
          pcVar1 = pcVar1 + 1;
          pcVar2 = pcVar2 + 1;
        } while (bVar3);
        if (bVar3) {
          return (int)_memchr_result - *(int *)(in_ECX + 4);
        }
        _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)_memchr_result));
        _Buf = _memchr_result + 1;
      }
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}


/* ==== 0041ca20 FUN_0041ca20 ==== */

void FUN_0041ca20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
  FUN_004af5a0(iVar1,DAT_006fb8b0 + -1,local_4,local_8,local_c,&param_1);
  piVar5 = &DAT_005d1ba8;
  do {
    if (((*piVar5 != -1) && (((byte)piVar5[4] & 3) == 1)) &&
       (*(int *)(*piVar5 * 0xf0 + 0x5c + DAT_00715e50) == 0)) {
      iVar3 = FUN_00429360(iVar2);
      if (iVar3 == 1) {
        iVar3 = DAT_006fb8b0 + -1 + iVar1;
      }
      else {
        iVar3 = (iVar1 - DAT_006fb8b0) + 1;
      }
      uVar4 = FUN_004a71e0(iVar3);
      FUN_0041cae0(*piVar5,uVar4,0);
    }
    piVar5 = piVar5 + 0xe;
  } while ((int)piVar5 < 0x5d2698);
  return;
}


/* ==== 0041cae0 FUN_0041cae0 ==== */

uint FUN_0041cae0(int param_1,uint param_2)

{
  uint uVar1;
  int i;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int iVar5;
  undefined4 unaff_EBP;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54 [2];
  undefined1 local_4c [4];
  undefined1 auStack_48 [68];
  undefined4 uStack_4;
  
  iVar6 = 0;
  local_58 = 0;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  local_64 = 0;
  local_60 = 0.0;
  local_5c = 0;
  i = FUN_00558625();
  if (i % 10 < 8) {
    return i / 10;
  }
  fVar8 = (float10)FUN_004a6800();
  fVar8 = (float10)1.0 / fVar8;
  fVar9 = (float10)15.0;
  if (fVar8 < fVar9) {
    return (uint)(ushort)((ushort)(fVar8 < fVar9) << 8 | (ushort)(NAN(fVar8) || NAN(fVar9)) << 10 |
                         (ushort)(fVar8 == fVar9) << 0xe);
  }
  i = FUN_00414070(param_1);
  if (i == -1) {
    return 0xffffffff;
  }
  iVar2 = FUN_004a71e0(param_2);
  iVar5 = param_1 * 0xf0;
  i = *(int *)(iVar5 + 0x50 + DAT_00715e50);
  if (i == 0) {
    if (DAT_006fb8e8 == 0) {
      param_2 = (uint)(DAT_006fb954 == 1);
    }
    else {
      param_2 = (uint)(DAT_006fb954 != 1);
    }
LAB_0041cbf1:
    iVar3 = *(int *)(DAT_00715f00 + 0xf4 + iVar2 * 0x994);
  }
  else {
    if (i == 1) {
      if (DAT_006fb8e8 == 0) {
        param_2 = (uint)(DAT_006fb954 != 1);
      }
      else {
        param_2 = (uint)(DAT_006fb954 == 1);
      }
    }
    else {
      if (i == 0) goto LAB_0041cbf1;
      if (i != 1) goto LAB_0041cc4a;
    }
    iVar3 = *(int *)(DAT_00715f00 + 0xf8 + iVar2 * 0x994);
  }
  if (iVar3 < 2) {
    return iVar2 * 0x265;
  }
  iVar6 = FUN_00558625();
  iVar6 = iVar6 % iVar3;
LAB_0041cc4a:
  iVar3 = FUN_004a6d70(iVar2,iVar6,i);
  uVar1 = DAT_00715eb8;
  if ((*(byte *)(iVar3 * 0x50 + DAT_00715eb8) & 4) != 0) {
    *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 0;
    return uVar1;
  }
  iVar3 = FUN_0041cfb0(param_1,iVar2);
  if (iVar3 == 0) {
    *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 0;
    return 0;
  }
  FUN_004a7020(param_1);
  puVar4 = (undefined4 *)FUN_004a6d00(local_4c,iVar2,iVar6,i);
  local_64 = *puVar4;
  local_60 = (float)puVar4[1] + 2.0;
  local_5c = puVar4[2];
  fVar9 = (float10)FUN_004a6e80(iVar2,param_2);
  local_54[0] = (float)fVar9;
  (**(code **)(**(int **)(iVar5 + 0x10 + DAT_00715e50) + 0x10))(&local_64,&local_58);
  i = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
  puVar4 = (undefined4 *)FUN_004a1dd0(local_54);
  *(undefined4 *)(i + 0x50) = *puVar4;
  *(undefined4 *)(i + 0x54) = puVar4[1];
  *(undefined4 *)(i + 0x58) = puVar4[2];
  iVar6 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
  puVar4 = (undefined4 *)FUN_004a1e20(auStack_48);
  puVar7 = (undefined4 *)(iVar6 + 0x10);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  *(int *)(iVar5 + 0x38 + DAT_00715e50) = iVar2;
  *(int *)(iVar5 + 0x34 + DAT_00715e50) = iVar2;
  *(undefined4 *)(iVar5 + 0x3c + DAT_00715e50) = unaff_EBP;
  FUN_004a6fa0(uStack_4,0);
  *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 1;
  FUN_004f21f0(1);
  (&DAT_005d1bac)[unaff_EBX * 0xe] = 0;
  *(undefined4 *)(&DAT_005d1bc8 + unaff_EBX * 0x38) = 0;
  return unaff_EBX * 0x38;
}


/* ==== 0041ce20 FUN_0041ce20 ==== */

undefined4 FUN_0041ce20(int param_1,int param_2)

{
  int iVar1;
  int i;
  int iVar2;
  
  if (*(int *)(param_2 * 0xf0 + 0x50 + DAT_00715e50) == 0) {
    iVar2 = *(int *)(DAT_00715f00 + 0xf4 + param_1 * 0x994);
  }
  else {
    iVar2 = *(int *)(DAT_00715f00 + 0xf8 + param_1 * 0x994);
  }
  i = 0;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_004a6d70(param_1,i,*(undefined4 *)(param_2 * 0xf0 + 0x50 + DAT_00715e50));
      if (*(int *)(iVar1 * 0x50 + 0x24 + DAT_00715eb8) != 0) {
        return 1;
      }
      i = i + 1;
    } while (i < iVar2);
  }
  return 0;
}


/* ==== 0041cec0 FUN_0041cec0 ==== */

undefined4 FUN_0041cec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int i;
  
  iVar1 = param_1;
  iVar5 = param_2 * 0xf0;
  if (*(int *)(iVar5 + 0x50 + DAT_00715e50) == 0) {
    param_2 = *(int *)(DAT_00715f00 + 0xf4 + param_1 * 0x994);
  }
  else {
    param_2 = *(int *)(DAT_00715f00 + 0xf8 + param_1 * 0x994);
  }
  param_1 = 0;
  if (0 < param_2) {
    do {
      iVar2 = FUN_004a6d70(iVar1,param_1,*(undefined4 *)(iVar5 + 0x50 + DAT_00715e50));
      iVar2 = *(int *)(iVar2 * 0x50 + 0x24 + DAT_00715eb8);
      if ((iVar2 != 0) && (i = 0, 0 < iVar2)) {
        do {
          uVar3 = FUN_004ab0d0(i);
          iVar4 = FUN_0040dad0(uVar3);
          if (iVar4 == -1) {
            return 1;
          }
          i = i + 1;
        } while (i < iVar2);
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return 0;
}


/* ==== 0041cfb0 FUN_0041cfb0 ==== */

undefined4 FUN_0041cfb0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint i;
  
  i = 0xfffffffc;
  while( true ) {
    uVar1 = FUN_004a71e0(i + param_2);
    if ((int)((i ^ (int)i >> 0x1f) - ((int)i >> 0x1f)) < 2) {
      iVar2 = FUN_0041ce20();
    }
    else {
      iVar2 = FUN_0041cec0(uVar1,param_1);
    }
    if (iVar2 == 1) break;
    i = i + 1;
    if (4 < (int)i) {
      return 1;
    }
  }
  return 0;
}


/* ==== 0041d050 FUN_0041d050 ==== */

void FUN_0041d050(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0041d060 FUN_0041d060 ==== */

void FUN_0041d060(void)

{
  FUN_005584e0(&LAB_0041d070);
  return;
}


/* ==== 0041d090 FUN_0041d090 ==== */

void FUN_0041d090(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0041d0a0 FUN_0041d0a0 ==== */

void FUN_0041d0a0(void)

{
  FUN_005584e0(&LAB_0041d0b0);
  return;
}


/* ==== 0041d0c0 FUN_0041d0c0 ==== */

int FUN_0041d0c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
  iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
  if ((iVar1 == 1) || (iVar1 != 2)) {
    iVar2 = *(int *)(iVar2 + 0x99);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  return DAT_0073b5c8 + 0xc + iVar2 * 0xac;
}


/* ==== 0041d140 FUN_0041d140 ==== */

void FUN_0041d140(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  uint __ftol_result;
  int in_ECX;
  int i;
  undefined4 *puVar4;
  undefined4 local_78 [13];
  float local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004bf5d0();
  local_4 = 0;
  puVar3 = (undefined4 *)FUN_0041d0c0(param_1);
  puVar4 = local_78;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  __ftol_result = __ftol();
  fVar1 = (float)(int)((__ftol_result ^ (int)__ftol_result >> 0x1f) - ((int)__ftol_result >> 0x1f))
          * 0.5;
  fVar2 = fVar1 * 0.5;
  FUN_0041d2e0(local_44,0x40a00000,local_3c,fVar1,fVar2,0x430c0000,in_ECX);
  FUN_0041d2e0(fVar1 + local_44,0x40a00000,local_3c,fVar2,fVar2,0x430c0000,in_ECX + 0x24);
  FUN_0041d2e0(local_38,0x40a00000,local_30,fVar2,fVar1,0x430c0000,in_ECX + 0x48);
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return;
}


/* ==== 0041d2e0 FUN_0041d2e0 ==== */

void FUN_0041d2e0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7)

{
  *param_7 = param_1;
  param_7[1] = param_2;
  param_7[2] = param_3;
  param_7[3] = param_1 - param_4;
  param_7[6] = param_1 + param_5;
  param_7[4] = param_2;
  param_7[7] = param_2;
  param_7[5] = param_3 + param_6;
  param_7[8] = param_3 + param_6;
  return;
}


/* ==== 0041d390 FUN_0041d390 ==== */

void FUN_0041d390(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint __ftol_result;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar2 = (&DAT_005ce9e8)[param_3 * 0xa5];
  iVar9 = iVar2 * 0xf0;
  iVar1 = iVar9 + DAT_00715e50;
  iVar9 = DAT_0073b0d0 + *(int *)(iVar9 + 0x24 + DAT_00715e50) * 0xa9;
  local_3c = *(float *)(iVar9 + 0x50);
  local_38 = *(float *)(iVar9 + 0x54);
  local_34 = *(float *)(iVar9 + 0x58);
  if (param_4 == 0) {
    param_4 = -0x14;
  }
  else if (param_4 == 1) {
    param_4 = 0x14;
  }
  else if (param_4 == 2) {
    param_4 = 0;
  }
  local_24 = *(float *)(iVar9 + 0x74);
  local_20 = *(float *)(iVar9 + 0x78);
  local_30 = *(float *)(iVar9 + 0x74);
  local_1c = *(float *)(iVar9 + 0x7c);
  local_28 = *(float *)(iVar9 + 0x7c);
  local_2c = *(float *)(iVar9 + 0x78);
  __ftol();
  uVar8 = DAT_005b23bc;
  __ftol_result = __ftol();
  local_48 = (float)(extraout_ST0 -
                    (float10)*(float *)(DAT_0073b530 + (__ftol_result & uVar8) * 4) *
                    (float10)*(float *)(iVar1 + 0xc4));
  iVar9 = DAT_0073b0d0 + *(int *)(iVar1 + 0x24) * 0xa9;
  local_30 = *(float *)(iVar9 + 0x74);
  local_2c = *(float *)(iVar9 + 0x78);
  local_24 = *(float *)(iVar9 + 0x74);
  local_28 = *(float *)(iVar9 + 0x7c);
  local_1c = *(float *)(iVar9 + 0x7c);
  local_20 = *(float *)(iVar9 + 0x78);
  __ftol();
  __ftol_result = __ftol();
  local_44 = 0.0;
  local_40 = (float)((float10)*(float *)(DAT_0073b530 + (__ftol_result & uVar8) * 4) *
                     (float10)*(float *)(iVar1 + 0xbc) + extraout_ST0_00);
  fVar10 = (float10)FUN_0041e120(&local_48);
  fVar10 = SQRT(fVar10);
  pfVar6 = (float *)FUN_004066c0((float)((float10)local_48 / fVar10),
                                 (float)((float10)local_44 / fVar10),
                                 (float)((float10)local_40 / fVar10));
  local_48 = *pfVar6;
  local_44 = pfVar6[1];
  local_1c = (float)param_4;
  local_40 = pfVar6[2];
  local_18 = local_48 * 200.0 + local_1c * local_40;
  local_20 = 0.0;
  fVar4 = local_3c + local_18;
  local_2c = local_38 + local_44 * 200.0 + 0.0;
  fVar3 = local_34 + local_1c * -local_48 + local_40 * 200.0;
  local_14 = local_2c + 5.0;
  local_24 = local_1c * local_40;
  local_1c = local_1c * -local_48;
  local_30 = fVar4;
  local_28 = fVar3;
  pfVar6 = (float *)FUN_004066c0(local_48 * 200.0 + local_3c,local_44 * 200.0 + local_38,
                                 local_40 * 200.0 + local_34);
  local_30 = *pfVar6;
  local_2c = pfVar6[1];
  local_28 = pfVar6[2];
  puVar7 = (undefined4 *)FUN_004066c0(local_30 + local_24,local_2c + local_20,local_28 + local_1c);
  *(undefined4 *)(param_2 + 8) = *puVar7;
  *(undefined4 *)(param_2 + 0xc) = puVar7[1];
  *(undefined4 *)(param_2 + 0x10) = puVar7[2];
  uVar8 = FUN_004031f0(iVar2,fVar4,local_14,fVar3);
  param_4 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
  if (500 < param_4) {
    param_4 = 500;
  }
  fVar10 = (float10)FUN_00403440(param_3,(float)param_4);
  fVar5 = *(float *)(param_1 + 0x24);
  if ((float)fVar10 < *(float *)(param_1 + 0x24)) {
    fVar5 = (float)fVar10;
  }
  *(float *)(param_2 + 0x18) = fVar5;
  FUN_0040a360(local_3c,local_38,local_34,fVar4,local_14,fVar3);
  return;
}


/* ==== 0041d740 FUN_0041d740 ==== */

void FUN_0041d740(void)

{
  return;
}


/* ==== 0041d760 FUN_0041d760 ==== */

void FUN_0041d760(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004166b0();
  iVar1 = DAT_0073b0d0 +
          *(int *)((&DAT_005ce9e8)[param_2 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  local_18 = *(undefined4 *)(iVar1 + 0x50);
  local_14 = *(undefined4 *)(iVar1 + 0x54);
  local_8 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(iVar1 + 0x58);
  local_4 = 0xbe99999a;
  FUN_0040dfc0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),1,local_20);
  return;
}


/* ==== 0041d7f0 FUN_0041d7f0 ==== */

void FUN_0041d7f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  undefined4 local_4;
  
  FUN_004166b0();
  FUN_0041d390(param_1,local_20,param_2,param_3);
  local_4 = param_4;
  FUN_0040dfc0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),1,local_20);
  return;
}


/* ==== 0041d840 FUN_0041d840 ==== */

undefined4 FUN_0041d840(undefined4 param_1,int param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int i;
  undefined4 local_c [3];
  
  i = 0;
  local_c[0] = 0;
  local_c[1] = 1;
  local_c[2] = 2;
  if (param_2 != -1) {
    puVar2 = local_c;
    do {
      pcVar1 = (char *)FUN_00416780(*puVar2);
      if ((*pcVar1 != '\0') && (*(int *)(pcVar1 + 4) == param_2)) {
        return 1;
      }
      i = i + 1;
      puVar2 = puVar2 + 1;
    } while (i < 3);
  }
  return 0;
}


/* ==== 0041d8b0 FUN_0041d8b0 ==== */

void FUN_0041d8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0041d840(param_1,param_4);
  if (cVar1 == '\0') {
    switch(param_3) {
    case 0:
    case 5:
      return;
    case 1:
      FUN_0041d7f0(param_1,param_2,1,0xbe99999a);
      return;
    case 2:
      uVar2 = 0xbe99999a;
      break;
    case 3:
      FUN_0041d7f0(param_1,param_2,1,0x3f19999a);
      return;
    case 4:
      FUN_0041d7f0(param_1,param_2,0,0xbe99999a);
      return;
    case 6:
      uVar2 = 0x3f19999a;
      break;
    case 7:
      FUN_0041d740(param_1,param_2);
      return;
    default:
      FUN_004c4150(s__s___d__Illegal_state_for_eyes____005949d8,
                   s_C__Work_A2IV_Game_prog_ai_ShortT_005949a8,0x1b2,param_3);
      return;
    }
    FUN_0041d7f0(param_1,param_2,0,uVar2);
    return;
  }
  FUN_0041d760(param_1,param_2);
  return;
}


/* ==== 0041d9b0 FUN_0041d9b0 ==== */

void FUN_0041d9b0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int i;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [12];
  undefined4 local_40 [16];
  
  puVar6 = (undefined4 *)
           (*(int *)(DAT_005d2b40 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x10);
  puVar7 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar1 = *(int *)(DAT_005d2b40 * 0xf0 + 0x24 + DAT_00715e50);
  i = DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8;
  fVar2 = *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8);
  fVar3 = *(float *)(i + 4);
  fVar4 = *(float *)(i + 8);
  pfVar5 = (float *)FUN_004b42a0(&local_64,&stack0x00000004,local_40);
  local_58 = fVar2 + *pfVar5;
  local_54 = pfVar5[1] + fVar3;
  local_50 = pfVar5[2] + fVar4;
  pfVar5 = (float *)FUN_004b42a0(&local_70,&stack0x00000010,local_40);
  local_64 = *pfVar5 + fVar2;
  local_60 = pfVar5[1] + fVar3;
  local_5c = pfVar5[2] + fVar4;
  pfVar5 = (float *)FUN_004b42a0(local_4c,&stack0x0000001c,local_40);
  local_70 = *pfVar5 + fVar2;
  local_6c = pfVar5[1] + fVar3;
  local_68 = pfVar5[2] + fVar4;
  FUN_0040a1c0(local_58,local_54,local_50,local_64,local_60,local_5c,local_70,local_6c,local_68);
  return;
}


/* ==== 0041db70 FUN_0041db70 ==== */

void FUN_0041db70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_00416750(param_2);
  *puVar1 = 1;
  *(undefined4 *)(puVar1 + 4) = param_3;
  return;
}


/* ==== 0041db90 FUN_0041db90 ==== */

void FUN_0041db90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 *in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 local_4c [4];
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569e52;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041d9b0(*in_ECX,in_ECX[1],in_ECX[2],in_ECX[3],in_ECX[4],in_ECX[5],in_ECX[6],in_ECX[7],
               in_ECX[8]);
  FUN_0041d9b0(in_ECX[9],in_ECX[10],in_ECX[0xb],in_ECX[0xc],in_ECX[0xd],in_ECX[0xe],in_ECX[0xf],
               in_ECX[0x10],in_ECX[0x11]);
  FUN_0041d9b0(in_ECX[0x12],in_ECX[0x13],in_ECX[0x14],in_ECX[0x15],in_ECX[0x16],in_ECX[0x17],
               in_ECX[0x18],in_ECX[0x19],in_ECX[0x1a]);
  local_2c[0] = (undefined1)param_1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_keyboard0_005949fc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_keyboard0_005949fc;
    pcVar4 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0;
  local_3c[0] = (undefined1)param_1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CM_KEYB_F_00594a08;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CM_KEYB_F_00594a08;
    pcVar4 = local_38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(i);
  }
  puVar7 = local_2c;
  uVar8 = 0;
  puVar6 = local_3c;
  local_4._0_1_ = 1;
  FUN_004ea0c0(puVar6,puVar7,0);
  fVar5 = (float10)FUN_004eb4d0(puVar6,puVar7,uVar8);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  bVar2 = (float)fVar5 != 0.0;
  if ((bool)bVar2) {
    FUN_0041db70(param_1,0,0);
  }
  local_3c[0] = (undefined1)param_1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_keyboard0_00594a14;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_keyboard0_00594a14;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_38 = local_38 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_38 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 2;
  local_2c[0] = (undefined1)param_1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CM_KEYB_G_00594a20;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CM_KEYB_G_00594a20;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_28 = local_28 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_28 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(i);
  }
  puVar7 = local_3c;
  uVar8 = 0;
  puVar6 = local_2c;
  local_4._0_1_ = 3;
  FUN_004ea0c0(puVar6,puVar7,0);
  fVar5 = (float10)FUN_004eb4d0(puVar6,puVar7,uVar8);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  if ((float)fVar5 != 0.0) {
    FUN_0041db70(param_1,1,0);
    bVar2 = bVar2 | 2;
  }
  local_4c[0] = (undefined1)param_1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_keyboard0_00594a2c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_keyboard0_00594a2c;
    pcVar4 = local_48;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 4;
  local_1c[0] = (undefined1)param_1;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = s_CM_KEYB_H_00594a38;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_CM_KEYB_H_00594a38;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      local_18 = local_18 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_18 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0(i);
  }
  puVar7 = local_4c;
  uVar8 = 0;
  puVar6 = local_1c;
  local_4._0_1_ = 5;
  FUN_004ea0c0(puVar6,puVar7,0);
  fVar5 = (float10)FUN_004eb4d0(puVar6,puVar7,uVar8);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(1);
  local_4 = 0xffffffff;
  if (local_48 != (char *)0x0) {
    cVar1 = local_48[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_48 + -1);
    }
    else {
      local_48[-1] = cVar1 + -1;
    }
  }
  local_48 = (char *)0x0;
  local_44 = 0;
  local_40 = 0;
  if ((float)fVar5 != 0.0) {
    FUN_0041db70(param_1,2,0);
    bVar2 = bVar2 | 4;
  }
  FUN_0041d8b0(param_1,param_2,bVar2,param_4);
  ExceptionList = local_c;
  return;
}


