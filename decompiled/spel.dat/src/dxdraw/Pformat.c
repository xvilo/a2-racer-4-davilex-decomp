/* spel.dat — dxdraw/Pformat.cpp: 8 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c7ec0 FUN_004c7ec0 ==== */

void FUN_004c7ec0(undefined4 param_1)

{
  DAT_007409cc = param_1;
  return;
}


/* ==== 004c7ed0 FUN_004c7ed0 ==== */

void FUN_004c7ed0(undefined4 param_1)

{
  DAT_007409d0 = param_1;
  return;
}


/* ==== 004c7ee0 FUN_004c7ee0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c7ee0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int i;
  int iVar5;
  
  if (DAT_00740988 == 0) {
    FUN_004c4150(s__s__d____error_please_use_get_xv_005b5634,s_D__Work_dxdraw_Pformat_cpp_005b55d0,
                 0xe9);
  }
  if (DAT_005b37a0 == 8) {
    FUN_004c4150(s__s___d___Translation_from_24_bit_005b55ec,s_D__Work_dxdraw_Pformat_cpp_005b55d0,
                 0xf2);
  }
  else if ((DAT_005b37a0 == 0x10) || (DAT_005b37a0 == 0x18)) {
    iVar3 = DAT_00740d2c;
    i = DAT_00740d24;
    iVar5 = DAT_00740d28;
    if (param_1 != DAT_007408f0) {
      uVar4 = param_1 & 0xff;
      if (DAT_007409d0 != 0) {
        uVar4 = (int)(uVar4 * uVar4) >> 8;
      }
      uVar1 = param_1 >> 8 & 0xff;
      if (DAT_007409d0 != 0) {
        uVar1 = (int)(uVar1 * uVar1) >> 8;
      }
      uVar2 = param_1 >> 0x10 & 0xff;
      if (DAT_007409d0 != 0) {
        uVar2 = (int)(uVar2 * uVar2) >> 8;
      }
      iVar3 = (int)uVar2 >> ((byte)_DAT_007409b4 & 0x1f);
      i = (int)uVar4 >> ((byte)_DAT_007409ac & 0x1f);
      iVar5 = (int)uVar1 >> ((byte)_DAT_007409b0 & 0x1f);
    }
    if ((((i == DAT_00740d24) && (iVar5 == DAT_00740d28)) && (iVar3 == DAT_00740d2c)) &&
       (param_1 != DAT_007408f0)) {
      if (i == 0) {
        i = 1;
      }
      else {
        i = i + -1;
      }
    }
    return (iVar3 << ((byte)DAT_007409c4 & 0x1f)) + (iVar5 << ((byte)DAT_007409c0 & 0x1f)) +
           (i << ((byte)DAT_007409bc & 0x1f));
  }
  return param_1;
}


/* ==== 004c8020 FUN_004c8020 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c8020(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int i;
  int iVar5;
  
  if (DAT_00740988 == 0) {
    FUN_004c4150(s__s__d____error_please_use_get_xv_005b5634,s_D__Work_dxdraw_Pformat_cpp_005b55d0,
                 0x14c);
  }
  if (DAT_005b37a0 == 8) {
    FUN_004c4150(s__s___d___Translation_from_24_bit_005b55ec,s_D__Work_dxdraw_Pformat_cpp_005b55d0,
                 0x155);
  }
  else if ((DAT_005b37a0 == 0x10) || (DAT_005b37a0 == 0x18)) {
    uVar3 = DAT_007408f0 ^ param_1;
    if (((uVar3 & 0xff) == 0) && ((uVar3 & 0xffff00) == 0)) {
      uVar4 = 0;
      iVar2 = DAT_00740d2c;
      i = DAT_00740d24;
      iVar5 = DAT_00740d28;
    }
    else {
      uVar4 = param_1 & 0xff;
      if (DAT_007409d0 != 0) {
        uVar4 = (int)(uVar4 * uVar4) >> 8;
      }
      i = (int)uVar4 >> ((byte)_DAT_007409ac & 0x1f);
      uVar4 = param_1 >> 8 & 0xff;
      if (DAT_007409d0 != 0) {
        uVar4 = (int)(uVar4 * uVar4) >> 8;
      }
      uVar1 = param_1 >> 0x10 & 0xff;
      iVar5 = (int)uVar4 >> ((byte)_DAT_007409b0 & 0x1f);
      if (DAT_007409d0 != 0) {
        uVar1 = (int)(uVar1 * uVar1) >> 8;
      }
      iVar2 = (int)uVar1 >> ((byte)_DAT_007409b4 & 0x1f);
      uVar4 = (param_1 >> 0x18) >> ((byte)DAT_007409b8 & 0x1f);
    }
    if ((((i == DAT_00740d24) && (iVar5 == DAT_00740d28)) && (iVar2 == DAT_00740d2c)) &&
       (((uVar3 & 0xff) == 0 && ((uVar3 & 0xffff00) == 0)))) {
      if (i == 0) {
        i = 1;
      }
      else {
        i = i + -1;
      }
    }
    return (uVar4 << ((byte)DAT_007409c8 & 0x1f)) + (iVar2 << ((byte)DAT_007409c4 & 0x1f)) +
           (iVar5 << ((byte)DAT_007409c0 & 0x1f)) + (i << ((byte)DAT_007409bc & 0x1f));
  }
  return param_1;
}


/* ==== 004c81b0 FUN_004c81b0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c81b0(uint param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_00740988 == 0) {
    FUN_004c4150(s__s__d____error_please_use_get_xv_005b5634,s_D__Work_dxdraw_Pformat_cpp_005b55d0,
                 0x1a7);
  }
  switch(param_2) {
  case 8:
    if (DAT_005b37a0 == 8) {
      return param_1;
    }
    if (DAT_005b37a0 == 0x10) {
      uVar2 = (uint)*(byte *)(DAT_007409f0 + param_1 * 4);
      if (DAT_007409d0 != 0) {
        uVar2 = (int)(uVar2 * uVar2) >> 8;
      }
      uVar3 = (uint)*(byte *)(DAT_007409f0 + 1 + param_1 * 4);
      if (DAT_007409d0 != 0) {
        uVar3 = (int)(uVar3 * uVar3) >> 8;
      }
      uVar4 = (uint)*(byte *)(DAT_007409f0 + 2 + param_1 * 4);
      if (DAT_007409d0 != 0) {
        uVar4 = (int)(uVar4 * uVar4) >> 8;
      }
      iVar6 = (int)uVar2 >> ((byte)_DAT_007409ac & 0x1f);
      iVar7 = (int)uVar3 >> ((byte)_DAT_007409b0 & 0x1f);
      iVar5 = (int)uVar4 >> ((byte)_DAT_007409b4 & 0x1f);
      if ((((param_1 != DAT_005b5db8) && (iVar6 == DAT_00740d24)) && (iVar7 == DAT_00740d28)) &&
         (iVar5 == DAT_00740d2c)) {
        iVar6 = DAT_00740d24 + 1;
      }
      return (iVar5 << ((byte)DAT_007409c4 & 0x1f)) + (iVar7 << ((byte)DAT_007409c0 & 0x1f)) +
             (iVar6 << ((byte)DAT_007409bc & 0x1f));
    }
    if (DAT_005b37a0 == 0x18) {
      return (uint)CONCAT21(CONCAT11(*(undefined1 *)(DAT_007409f0 + param_1 * 4),
                                     *(undefined1 *)(DAT_007409f0 + 1 + param_1 * 4)),
                            *(undefined1 *)(DAT_007409f0 + 2 + param_1 * 4));
    }
    break;
  case 0x10:
    if (DAT_005b37a0 == 8) {
      FUN_004c4150(s_not_yet_supported_005b566c);
      return param_1;
    }
    if (DAT_005b37a0 == 0x10) {
      return param_1;
    }
    if (DAT_005b37a0 == 0x18) {
      return param_1;
    }
    break;
  case 0x18:
    sVar1 = FUN_004c7ee0(param_1);
    return (int)sVar1;
  case 0x20:
    sVar1 = FUN_004c8020(param_1);
    return (int)sVar1;
  }
  return 0;
}


/* ==== 004c8380 FUN_004c8380 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8380(uint param_1,int param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  uint uVar5;
  byte bVar4;
  
  if (DAT_00740988 == 0) {
    FUN_004c4150(s__s__d____error_please_use_get_xv_005b5634,s_D__Work_dxdraw_Pformat_cpp_005b55d0,
                 0x1fd);
  }
  bVar3 = (byte)DAT_007409c0;
  bVar4 = (byte)DAT_007409c4;
  if (param_2 == 8) {
    if (DAT_005b37a0 == 8) {
      *(char *)param_3 = (char)param_1;
      return;
    }
    if (DAT_005b37a0 == 0x10) {
      *param_3 = ((ushort)(*(byte *)(DAT_007409f0 + 2 + param_1 * 4) >> (DAT_007409b4 & 0x1f)) <<
                 (bVar4 & 0x1f)) +
                 ((ushort)(*(byte *)(DAT_007409f0 + 1 + param_1 * 4) >> (DAT_007409b0 & 0x1f)) <<
                 (bVar3 & 0x1f)) +
                 ((ushort)(*(byte *)(DAT_007409f0 + param_1 * 4) >> (DAT_007409ac & 0x1f)) <<
                 ((byte)DAT_007409bc & 0x1f));
      return;
    }
    if (DAT_005b37a0 == 0x18) {
      *(char *)(param_3 + 1) = *(char *)(DAT_007409f0 + param_1 * 4);
      *(char *)((int)param_3 + 1) = *(char *)(DAT_007409f0 + 1 + param_1 * 4);
      *(char *)param_3 = *(char *)(DAT_007409f0 + 2 + param_1 * 4);
    }
  }
  else if (param_2 == 0x10) {
    if (DAT_005b37a0 == 8) {
      FUN_004c4150(s_not_yet_supported_005b566c);
      return;
    }
    if (DAT_005b37a0 == 0x10) {
      *param_3 = (short)param_1;
      return;
    }
    if (DAT_005b37a0 == 0x18) {
      uVar2 = DAT_007409a0 & param_1;
      uVar5 = DAT_007409a4 & param_1;
      *(char *)(param_3 + 1) =
           (char)((int)(DAT_0074099c & param_1) >> ((byte)DAT_007409bc & 0x1f)) <<
           (DAT_007409ac & 0x1f);
      *(char *)((int)param_3 + 1) =
           (char)((int)uVar2 >> (bVar3 & 0x1f)) << ((byte)_DAT_007409b0 & 0x1f);
      *(char *)param_3 = (char)((int)uVar5 >> (bVar4 & 0x1f)) << ((byte)_DAT_007409b4 & 0x1f);
      return;
    }
  }
  else if (param_2 == 0x18) {
    if (DAT_005b37a0 == 0x10) {
      sVar1 = FUN_004c7ee0(param_1);
      *param_3 = sVar1;
      return;
    }
    FUN_004c4150(s__s___d___Translation_from_24_bit_005b5680,s_D__Work_dxdraw_Pformat_cpp_005b55d0,
                 0x23f,DAT_005b37a0);
    return;
  }
  return;
}


/* ==== 004c8540 FUN_004c8540 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8540(void)

{
  undefined4 uVar1;
  uint uVar2;
  int i;
  undefined4 *puVar3;
  
  FUN_004c4a60(DAT_007408ac);
  puVar3 = &DAT_00740968;
  for (i = 8; i != 0; i = i + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00740968 = 0x20;
  i = (**(code **)(*DAT_007408ac + 0x54))(DAT_007408ac,&DAT_00740968);
  if (i != 0) {
    uVar1 = FUN_004c4400(i);
    FUN_004c4150(s__s__d____unable_to_get_pixelform_005b56bc,s_D__Work_dxdraw_Pformat_cpp_005b55d0,
                 0x264,uVar1);
  }
  if (((byte)DAT_0074096c & 0x20) == 0) {
    DAT_007409bc = 0;
    for (uVar2 = DAT_00740978; (uVar2 & 1) == 0; uVar2 = (int)uVar2 >> 1) {
      DAT_007409bc = DAT_007409bc + 1;
    }
    DAT_0074098c = 0;
    for (; (uVar2 & 1) != 0; uVar2 = (int)uVar2 >> 1) {
      DAT_0074098c = DAT_0074098c + 1;
    }
    DAT_0074099c = DAT_00740978;
    _DAT_007409ac = 8 - DAT_0074098c;
    DAT_007409c0 = 0;
    for (uVar2 = DAT_0074097c; (uVar2 & 1) == 0; uVar2 = (int)uVar2 >> 1) {
      DAT_007409c0 = DAT_007409c0 + 1;
    }
    DAT_00740990 = 0;
    for (; (uVar2 & 1) != 0; uVar2 = (int)uVar2 >> 1) {
      DAT_00740990 = DAT_00740990 + 1;
    }
    DAT_007409a0 = DAT_0074097c;
    _DAT_007409b0 = 8 - DAT_00740990;
    DAT_007409c4 = 0;
    for (uVar2 = DAT_00740980; (uVar2 & 1) == 0; uVar2 = (int)uVar2 >> 1) {
      DAT_007409c4 = DAT_007409c4 + 1;
    }
    DAT_00740994 = 0;
    for (; (uVar2 & 1) != 0; uVar2 = (int)uVar2 >> 1) {
      DAT_00740994 = DAT_00740994 + 1;
    }
    DAT_007409a4 = DAT_00740980;
    _DAT_007409b4 = 8 - DAT_00740994;
    DAT_00740988 = 1;
    return;
  }
  DAT_00740988 = 1;
  DAT_007409cc = 0;
  return;
}


/* ==== 004c8690 FUN_004c8690 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8690(undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 ,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  
  if ((param_2 & 0x20) == 0) {
    _DAT_00740998 = 0;
    DAT_007409bc = 0;
    for (uVar1 = param_5; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
      DAT_007409bc = DAT_007409bc + 1;
    }
    DAT_0074098c = 0;
    for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
      DAT_0074098c = DAT_0074098c + 1;
    }
    DAT_0074099c = param_5;
    _DAT_007409ac = 8 - DAT_0074098c;
    DAT_007409c0 = 0;
    for (uVar1 = param_6; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
      DAT_007409c0 = DAT_007409c0 + 1;
    }
    DAT_00740990 = 0;
    for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
      DAT_00740990 = DAT_00740990 + 1;
    }
    DAT_007409a0 = param_6;
    _DAT_007409b0 = 8 - DAT_00740990;
    DAT_007409c4 = 0;
    for (uVar1 = param_7; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
      DAT_007409c4 = DAT_007409c4 + 1;
    }
    DAT_00740994 = 0;
    for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
      DAT_00740994 = DAT_00740994 + 1;
    }
    _DAT_007409b4 = 8 - DAT_00740994;
    DAT_007409a4 = param_7;
    if ((param_2 & 1) != 0) {
      DAT_007409c8 = 0;
      for (uVar1 = param_8; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
        DAT_007409c8 = DAT_007409c8 + 1;
      }
      for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
        _DAT_00740998 = _DAT_00740998 + 1;
      }
      DAT_007409b8 = 8 - _DAT_00740998;
      _DAT_007409a8 = param_8;
      FUN_004c3fa0(s_RGBA___d__d__d__d_005b56f8,DAT_0074098c,DAT_00740990,DAT_00740994,_DAT_00740998
                  );
      return;
    }
    DAT_007409c8 = 0x20;
    _DAT_00740998 = 0;
    DAT_007409b8 = 0;
    _DAT_007409a8 = 0;
    FUN_004c3fa0(s_RGB___d__d__d_005b56e8,DAT_0074098c,DAT_00740990,DAT_00740994);
  }
  return;
}


