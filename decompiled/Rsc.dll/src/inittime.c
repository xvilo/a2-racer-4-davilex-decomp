/* Rsc.dll — inittime.c: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 1000f560 FUN_1000f560 ==== */

undefined4 FUN_1000f560(void)

{
  return 0;
}


/* ==== 1000f570 __strcats ==== */

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int i;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (i = 0; i < param_2; i = i + 1) {
    FUN_10001ed0(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}


/* ==== 1000f5c0 FUN_1000f5c0 ==== */

undefined4 __cdecl FUN_1000f5c0(char *param_1,byte *source)

{
  byte bVar1;
  undefined4 uVar2;
  size_t _Count;
  int i;
  
  _memset(param_1,0,0x88);
  if (*source == 0) {
    uVar2 = 0;
  }
  else if ((*source == 0x2e) && (source[1] != 0)) {
    FUN_10001ec0((uint *)(param_1 + 0x80),(uint *)(source + 1));
    uVar2 = 0;
  }
  else {
    i = 0;
    while (_Count = FUN_10010ce0(source,(byte *)"_.,"), _Count != 0) {
      bVar1 = source[_Count];
      if (((i == 0) && ((int)_Count < 0x40)) && (bVar1 != 0x2e)) {
        _strncpy(param_1,(char *)source,_Count);
      }
      else if (((i == 1) && ((int)_Count < 0x40)) && (bVar1 != 0x5f)) {
        _strncpy(param_1 + 0x40,(char *)source,_Count);
      }
      else {
        if ((i != 2) || ((bVar1 != 0 && (bVar1 != 0x2c)))) {
          return 0xffffffff;
        }
        _strncpy(param_1 + 0x80,(char *)source,_Count);
      }
      if ((bVar1 == 0x2c) || (bVar1 == 0)) {
        return 0;
      }
      source = source + _Count + 1;
      i = i + 1;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* ==== 1000f720 ___lc_lctostr ==== */

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_10001ec0(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}


/* ==== 1000f790 ___init_time ==== */

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *dst;
  int iVar1;
  uint uVar2;
  
  if (DAT_10031648 == 0) {
    PTR_PTR_10030ca8 = (undefined *)&PTR_DAT_10030cb0;
    ___free_lc_time(DAT_10031664);
    FUN_100041a0(DAT_10031664,2);
    DAT_10031664 = (int *)0x0;
    iVar1 = 0;
  }
  else {
    dst = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (dst == (int *)0x0) {
      iVar1 = 1;
    }
    else {
      uVar2 = FUN_1000f870(dst);
      if (uVar2 == 0) {
        PTR_PTR_10030ca8 = (undefined *)dst;
        ___free_lc_time(DAT_10031664);
        FUN_100041a0(DAT_10031664,2);
        iVar1 = 0;
        DAT_10031664 = dst;
      }
      else {
        ___free_lc_time(dst);
        FUN_100041a0(dst,2);
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}


/* ==== 1000f870 FUN_1000f870 ==== */

uint __cdecl FUN_1000f870(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar41 = (uint)DAT_1003169e;
  uVar1 = (uint)DAT_100316a0;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10012fb0(1,uVar41,0x31,param_1 + 1);
    uVar3 = FUN_10012fb0(1,uVar41,0x32,param_1 + 2);
    uVar4 = FUN_10012fb0(1,uVar41,0x33,param_1 + 3);
    uVar5 = FUN_10012fb0(1,uVar41,0x34,param_1 + 4);
    uVar6 = FUN_10012fb0(1,uVar41,0x35,param_1 + 5);
    uVar7 = FUN_10012fb0(1,uVar41,0x36,param_1 + 6);
    uVar8 = FUN_10012fb0(1,uVar41,0x37,param_1);
    uVar9 = FUN_10012fb0(1,uVar41,0x2a,param_1 + 8);
    uVar10 = FUN_10012fb0(1,uVar41,0x2b,param_1 + 9);
    uVar11 = FUN_10012fb0(1,uVar41,0x2c,param_1 + 10);
    uVar12 = FUN_10012fb0(1,uVar41,0x2d,param_1 + 0xb);
    uVar13 = FUN_10012fb0(1,uVar41,0x2e,param_1 + 0xc);
    uVar14 = FUN_10012fb0(1,uVar41,0x2f,param_1 + 0xd);
    uVar15 = FUN_10012fb0(1,uVar41,0x30,param_1 + 7);
    uVar16 = FUN_10012fb0(1,uVar41,0x44,param_1 + 0xe);
    uVar17 = FUN_10012fb0(1,uVar41,0x45,param_1 + 0xf);
    uVar18 = FUN_10012fb0(1,uVar41,0x46,param_1 + 0x10);
    uVar19 = FUN_10012fb0(1,uVar41,0x47,param_1 + 0x11);
    uVar20 = FUN_10012fb0(1,uVar41,0x48,param_1 + 0x12);
    uVar21 = FUN_10012fb0(1,uVar41,0x49,param_1 + 0x13);
    uVar22 = FUN_10012fb0(1,uVar41,0x4a,param_1 + 0x14);
    uVar23 = FUN_10012fb0(1,uVar41,0x4b,param_1 + 0x15);
    uVar24 = FUN_10012fb0(1,uVar41,0x4c,param_1 + 0x16);
    uVar25 = FUN_10012fb0(1,uVar41,0x4d,param_1 + 0x17);
    uVar26 = FUN_10012fb0(1,uVar41,0x4e,param_1 + 0x18);
    uVar27 = FUN_10012fb0(1,uVar41,0x4f,param_1 + 0x19);
    uVar28 = FUN_10012fb0(1,uVar41,0x38,param_1 + 0x1a);
    uVar29 = FUN_10012fb0(1,uVar41,0x39,param_1 + 0x1b);
    uVar30 = FUN_10012fb0(1,uVar41,0x3a,param_1 + 0x1c);
    uVar31 = FUN_10012fb0(1,uVar41,0x3b,param_1 + 0x1d);
    uVar32 = FUN_10012fb0(1,uVar41,0x3c,param_1 + 0x1e);
    uVar33 = FUN_10012fb0(1,uVar41,0x3d,param_1 + 0x1f);
    uVar34 = FUN_10012fb0(1,uVar41,0x3e,param_1 + 0x20);
    uVar35 = FUN_10012fb0(1,uVar41,0x3f,param_1 + 0x21);
    uVar36 = FUN_10012fb0(1,uVar41,0x40,param_1 + 0x22);
    uVar37 = FUN_10012fb0(1,uVar41,0x41,param_1 + 0x23);
    uVar38 = FUN_10012fb0(1,uVar41,0x42,param_1 + 0x24);
    uVar39 = FUN_10012fb0(1,uVar41,0x43,param_1 + 0x25);
    uVar40 = FUN_10012fb0(1,uVar41,0x28,param_1 + 0x26);
    uVar41 = FUN_10012fb0(1,uVar41,0x29,param_1 + 0x27);
    uVar42 = FUN_10012fb0(1,uVar1,0x1f,param_1 + 0x28);
    uVar43 = FUN_10012fb0(1,uVar1,0x20,param_1 + 0x29);
    uVar1 = FUN_10012fb0(1,uVar1,0x1003,param_1 + 0x2a);
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
            uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31
            | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 |
            uVar41 | uVar42 | uVar43 | uVar1;
  }
  return uVar1;
}


