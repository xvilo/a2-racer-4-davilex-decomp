/* Rsc.dll — _flsbuf.c: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 1000c6d0 getSystemCP ==== */

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_10031628 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_10031628 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_10031628 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_10031628 = 1;
    param_1 = DAT_1003164c;
  }
  return param_1;
}


/* ==== 1000c730 FUN_1000c730 ==== */

undefined4 __cdecl FUN_1000c730(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x3a4:
    uVar1 = 0x411;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x3a8:
    uVar1 = 0x804;
    break;
  case 0x3b5:
    uVar1 = 0x412;
    break;
  case 0x3b6:
    uVar1 = 0x404;
  }
  return uVar1;
}


/* ==== 1000c7b0 setSBCS ==== */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int i;
  
  for (i = 0; i < 0x101; i = i + 1) {
    (&DAT_10031960)[i] = 0;
  }
  DAT_100317c8 = 0;
  DAT_1003184c = 0;
  DAT_10031a64 = 0;
  for (i = 0; i < 6; i = i + 1) {
    *(undefined2 *)(&DAT_10031840 + i * 2) = 0;
  }
  return;
}


/* ==== 1000c830 FUN_1000c830 ==== */

void FUN_1000c830(void)

{
  BOOL BVar1;
  uint i;
  WCHAR local_51c [128];
  WCHAR local_41c [128];
  _cpinfo local_31c;
  CHAR local_308 [256];
  WORD local_208 [256];
  BYTE *local_8;
  
  BVar1 = GetCPInfo(DAT_100317c8,&local_31c);
  if (BVar1 == 1) {
    for (i = 0; i < 0x100; i = i + 1) {
      local_308[i] = (CHAR)i;
    }
    local_308[0] = ' ';
    for (local_8 = local_31c.LeadByte; *local_8 != 0; local_8 = local_8 + 2) {
      for (i = (uint)*local_8; i <= local_8[1]; i = i + 1) {
        local_308[i] = ' ';
      }
    }
    FUN_1000e0e0(1,local_308,0x100,local_208,DAT_100317c8,DAT_10031a64,0);
    FUN_1000e550(DAT_10031a64,0x100,local_308,0x100,local_41c,0x100,DAT_100317c8,0);
    FUN_1000e550(DAT_10031a64,0x200,local_308,0x100,local_51c,0x100,DAT_100317c8,0);
    for (i = 0; i < 0x100; i = i + 1) {
      if ((local_208[i] & 1) == 0) {
        if ((local_208[i] & 2) == 0) {
          (&DAT_10031860)[i] = 0;
        }
        else {
          (&DAT_10031961)[i] = (&DAT_10031961)[i] | 0x20;
          (&DAT_10031860)[i] = *(undefined1 *)((int)local_51c + i);
        }
      }
      else {
        (&DAT_10031961)[i] = (&DAT_10031961)[i] | 0x10;
        (&DAT_10031860)[i] = *(undefined1 *)((int)local_41c + i);
      }
    }
  }
  else {
    for (i = 0; i < 0x100; i = i + 1) {
      if ((i < 0x41) || (0x5a < i)) {
        if ((i < 0x61) || (0x7a < i)) {
          (&DAT_10031860)[i] = 0;
        }
        else {
          (&DAT_10031961)[i] = (&DAT_10031961)[i] | 0x20;
          (&DAT_10031860)[i] = (char)i + -0x20;
        }
      }
      else {
        (&DAT_10031961)[i] = (&DAT_10031961)[i] | 0x10;
        (&DAT_10031860)[i] = (char)i + ' ';
      }
    }
  }
  return;
}


/* ==== 1000cb40 FUN_1000cb40 ==== */

undefined4 FUN_1000cb40(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100317c8;
  if (DAT_1003184c == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 1000cb60 FUN_1000cb60 ==== */

void FUN_1000cb60(void)

{
  if (DAT_10031aa8 == 0) {
    FUN_1000c380(0xfffffffd);
    DAT_10031aa8 = 1;
  }
  return;
}


/* ==== 1000cb90 __aulldiv ==== */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio 2003 Debug */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int i;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar5;
  
  uVar8 = param_1;
  uVar5 = param_4;
  uVar6 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    i = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
             (ulonglong)param_3);
  }
  else {
    do {
      uVar4 = uVar5 >> 1;
      uVar3 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar6 >> 1;
      uVar8 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar8) >> 1);
      uVar5 = uVar4;
      uVar6 = uVar7;
    } while (uVar4 != 0);
    uVar1 = CONCAT44(uVar7,uVar8) / (ulonglong)uVar3;
    i = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + i * param_4;
    if (((CARRY4(uVar3,i * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      i = i + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,i);
}


/* ==== 1000cc00 __aullrem ==== */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio 2003 Debug */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/* ==== 1000cc80 FUN_1000cc80 ==== */

uint __cdecl FUN_1000cc80(uint param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *local_18;
  uint local_10;
  uint local_8;
  
  if ((param_2 == (int *)0x0) &&
     (iVar3 = FUN_10003050(2,0x1002cf34,0x69,0,(byte *)"str != NULL"), iVar3 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  piVar2 = param_2;
  uVar4 = param_2[4];
  if (((param_2[3] & 0x82U) == 0) || ((param_2[3] & 0x40U) != 0)) {
    param_2[3] = param_2[3] | 0x20;
    uVar4 = 0xffffffff;
  }
  else {
    if ((param_2[3] & 1U) != 0) {
      param_2[1] = 0;
      if ((param_2[3] & 0x10U) == 0) {
        param_2[3] = param_2[3] | 0x20;
        return 0xffffffff;
      }
      *param_2 = param_2[2];
      param_2[3] = param_2[3] & 0xfffffffe;
    }
    param_2[3] = param_2[3] | 2;
    param_2[3] = param_2[3] & 0xffffffef;
    param_2[1] = 0;
    local_10 = 0;
    if (((param_2[3] & 0x10cU) == 0) &&
       (((param_2 != (int *)&DAT_1002fa58 && (param_2 != (int *)&DAT_1002fa78)) ||
        (iVar3 = __isatty(uVar4), iVar3 == 0)))) {
      FUN_1000baf0(piVar2);
    }
    if ((piVar2[3] & 0x108U) == 0) {
      local_8 = 1;
      local_10 = FUN_1000b7e0(uVar4,(char *)&param_1,1);
    }
    else {
      if ((*piVar2 - piVar2[2] < 0) &&
         (iVar3 = FUN_10003050(2,0x1002cf34,0xa0,0,&DAT_1002cef4), iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      local_8 = *piVar2 - piVar2[2];
      *piVar2 = piVar2[2] + 1;
      piVar2[1] = piVar2[6] + -1;
      if ((int)local_8 < 1) {
        if (uVar4 == 0xffffffff) {
          local_18 = &DAT_1002fe78;
        }
        else {
          local_18 = (undefined *)((&DAT_10031ac0)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
        }
        if ((local_18[4] & 0x20) != 0) {
          FUN_10006a20(uVar4,0,2);
        }
      }
      else {
        local_10 = FUN_1000b7e0(uVar4,(char *)piVar2[2],local_8);
      }
      *(undefined1 *)piVar2[2] = (undefined1)param_1;
    }
    if (local_10 == local_8) {
      uVar4 = param_1 & 0xff;
    }
    else {
      piVar2[3] = piVar2[3] | 0x20;
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}


