/* Rsc.dll — tzset.c: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 100134c0 FUN_100134c0 ==== */

uint __cdecl FUN_100134c0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = DAT_100317c4;
  if (DAT_1003163c == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1001350e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1001350e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    DAT_100317c4 = DAT_100317c4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_100317b4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_100317c4 = iVar2;
      FUN_100073f0(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1001356f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10014630(uVar8);
      uVar7 = FUN_10014630(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1001356f:
    if (uVar9 == 0) {
      LOCK();
      DAT_100317c4 = DAT_100317c4 + -1;
      UNLOCK();
    }
    else {
      FUN_10007490(0x13);
    }
  }
  return uVar7;
}


/* ==== 10013590 FUN_10013590 ==== */

undefined4 __cdecl FUN_10013590(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = DAT_100317c4;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_1003163c == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_100135ef;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_100135ef:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_100317c4 = DAT_100317c4 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_100317b4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_100317c4 = iVar2;
        FUN_100073f0(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_10014630(uVar7);
        uVar5 = FUN_10014630(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10013665;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10013665:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_100317c4 = DAT_100317c4 + -1;
        UNLOCK();
      }
      else {
        FUN_10007490(0x13);
      }
    }
  }
  return uVar6;
}


/* ==== 100136a0 FUN_100136a0 ==== */

int __cdecl FUN_100136a0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_10030214 < 2) {
      local_14 = *(ushort *)(PTR_s__10030008 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_1000b640((uint)*param_1,8);
    }
    if (local_14 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_c = 0;
  while( true ) {
    if (DAT_10030214 < 2) {
      local_18 = *(ushort *)(PTR_s__10030008 + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_1000b640(local_8,4);
    }
    if (local_18 == 0) break;
    local_c = local_c * 10 + -0x30 + local_8;
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    local_c = -local_c;
  }
  return local_c;
}


/* ==== 100137a0 FUN_100137a0 ==== */

void __cdecl FUN_100137a0(byte *param_1)

{
  FUN_100136a0(param_1);
  return;
}


/* ==== 100137c0 FUN_100137c0 ==== */

undefined8 __cdecl FUN_100137c0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  uint local_8;
  
  while( true ) {
    if (DAT_10030214 < 2) {
      local_18 = *(ushort *)(PTR_s__10030008 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_18 = FUN_1000b640((uint)*param_1,8);
    }
    if (local_18 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_10 = 0;
  while( true ) {
    if (DAT_10030214 < 2) {
      local_1c = *(ushort *)(PTR_s__10030008 + local_8 * 2) & 4;
    }
    else {
      local_1c = FUN_1000b640(local_8,4);
    }
    if (local_1c == 0) break;
    local_10 = __allmul((uint)local_10,local_10._4_4_,10,0);
    local_10 = local_10 + (int)(local_8 - 0x30);
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    bVar3 = (uint)local_10 != 0;
    local_10._0_4_ = -(uint)local_10;
    local_10._4_4_ = -(local_10._4_4_ + (uint)bVar3);
  }
  return CONCAT44(local_10._4_4_,(uint)local_10);
}


/* ==== 100138f0 FUN_100138f0 ==== */

void FUN_100138f0(void)

{
  if (DAT_10031790 == 0) {
    FUN_100073f0(0xb);
    if (DAT_10031790 == 0) {
      FUN_10013950();
      DAT_10031790 = DAT_10031790 + 1;
    }
    FUN_10007490(0xb);
  }
  return;
}


/* ==== 10013930 FUN_10013930 ==== */

void FUN_10013930(void)

{
  FUN_100073f0(0xb);
  FUN_10013950();
  FUN_10007490(0xb);
  return;
}


/* ==== 10013950 FUN_10013950 ==== */

void FUN_10013950(void)

{
  uint *_Str1;
  DWORD DVar1;
  int iVar2;
  size_t _strlen_result;
  uint uVar3;
  char *pcVar4;
  uint *source;
  int local_c;
  int i;
  
  i = 0;
  FUN_100073f0(0xc);
  DAT_100316d8 = 0;
  DAT_10030e48 = 0xffffffff;
  DAT_10030e38 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10007490(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100316e0);
    if (DVar1 != 0xffffffff) {
      DAT_100316d8 = 1;
      DAT_10030da0 = DAT_100316e0 * 0x3c;
      if (DAT_10031726 != 0) {
        DAT_10030da0 = DAT_10030da0 + DAT_10031734 * 0x3c;
      }
      if ((DAT_1003177a == 0) || (DAT_10031788 == 0)) {
        DAT_10030da4 = 0;
        DAT_10030da8 = 0;
      }
      else {
        DAT_10030da4 = 1;
        DAT_10030da8 = (DAT_10031788 - DAT_10031734) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&DAT_100316e4,-1,PTR_DAT_10030e2c,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10030e2c = 0;
      }
      else {
        PTR_DAT_10030e2c[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&DAT_10031738,-1,PTR_DAT_10030e30,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10030e30 = 0;
      }
      else {
        PTR_DAT_10030e30[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_1003178c != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_1003178c), iVar2 == 0)))) {
    FUN_10007490(0xc);
  }
  else {
    FUN_100041a0(DAT_1003178c,2);
    iVar2 = 0x10c;
    pcVar4 = "tzset.c";
    uVar3 = 2;
    _strlen_result = _strlen((char *)_Str1);
    DAT_1003178c = (uint *)FUN_10003710((void *)(_strlen_result + 1),uVar3,(int)pcVar4,iVar2);
    if (DAT_1003178c == (uint *)0x0) {
      FUN_10007490(0xc);
    }
    else {
      FUN_10001ec0(DAT_1003178c,_Str1);
      FUN_10007490(0xc);
      _strncpy(PTR_DAT_10030e2c,(char *)_Str1,3);
      PTR_DAT_10030e2c[3] = 0;
      source = (uint *)((int)_Str1 + 3);
      if (*(char *)source == '-') {
        i = i + 1;
        source = _Str1 + 1;
      }
      iVar2 = FUN_100136a0((byte *)source);
      DAT_10030da0 = iVar2 * 0xe10;
      for (; ((char)*source == '+' || (('/' < (char)*source && ((char)*source < ':'))));
          source = (uint *)((int)source + 1)) {
      }
      if ((char)*source == ':') {
        source = (uint *)((int)source + 1);
        iVar2 = FUN_100136a0((byte *)source);
        DAT_10030da0 = DAT_10030da0 + iVar2 * 0x3c;
        for (; ('/' < (char)*source && ((char)*source < ':')); source = (uint *)((int)source + 1)) {
        }
        if ((char)*source == ':') {
          source = (uint *)((int)source + 1);
          iVar2 = FUN_100136a0((byte *)source);
          DAT_10030da0 = DAT_10030da0 + iVar2;
          for (; ('/' < (char)*source && ((char)*source < ':')); source = (uint *)((int)source + 1))
          {
          }
        }
      }
      if (i != 0) {
        DAT_10030da0 = -DAT_10030da0;
      }
      DAT_10030da4 = (int)(char)*source;
      if (DAT_10030da4 == 0) {
        *PTR_DAT_10030e30 = 0;
      }
      else {
        _strncpy(PTR_DAT_10030e30,(char *)source,3);
        PTR_DAT_10030e30[3] = 0;
      }
    }
  }
  return;
}


/* ==== 10013d00 FUN_10013d00 ==== */

undefined4 __cdecl FUN_10013d00(int *param_1)

{
  undefined4 uVar1;
  
  FUN_100073f0(0xb);
  uVar1 = FUN_10013d30(param_1);
  FUN_10007490(0xb);
  return uVar1;
}


/* ==== 10013d30 FUN_10013d30 ==== */

undefined4 __cdecl FUN_10013d30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_10030da4 == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_10030e38) || (param_1[5] != DAT_10030e48)) {
    if (DAT_100316d8 == 0) {
      FUN_10014030(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_10014030(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_10031778 == 0) {
        FUN_10014030(1,1,param_1[5],(uint)DAT_1003177a,(uint)DAT_1003177e,(uint)DAT_1003177c,0,
                     (uint)DAT_10031780,(uint)DAT_10031782,(uint)DAT_10031784,(uint)DAT_10031786);
      }
      else {
        FUN_10014030(1,0,param_1[5],(uint)DAT_1003177a,0,0,(uint)DAT_1003177e,(uint)DAT_10031780,
                     (uint)DAT_10031782,(uint)DAT_10031784,(uint)DAT_10031786);
      }
      if (DAT_10031724 == 0) {
        FUN_10014030(0,1,param_1[5],(uint)DAT_10031726,(uint)DAT_1003172a,(uint)DAT_10031728,0,
                     (uint)DAT_1003172c,(uint)DAT_1003172e,(uint)DAT_10031730,(uint)DAT_10031732);
      }
      else {
        FUN_10014030(0,0,param_1[5],(uint)DAT_10031726,0,0,(uint)DAT_1003172a,(uint)DAT_1003172c,
                     (uint)DAT_1003172e,(uint)DAT_10031730,(uint)DAT_10031732);
      }
    }
  }
  if (DAT_10030e3c < DAT_10030e4c) {
    if ((param_1[7] < DAT_10030e3c) || (DAT_10030e4c < param_1[7])) {
      return 0;
    }
    if ((DAT_10030e3c < param_1[7]) && (param_1[7] < DAT_10030e4c)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_10030e4c) || (DAT_10030e3c < param_1[7])) {
      return 1;
    }
    if ((DAT_10030e4c < param_1[7]) && (param_1[7] < DAT_10030e3c)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_10030e3c) {
    if (iVar2 < DAT_10030e40) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_10030e50) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 10014030 FUN_10014030 ==== */

void __cdecl
FUN_10014030(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int local_18;
  int local_14;
  int i;
  int local_c;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      i = *(int *)(&DAT_10030e5c + param_4 * 4);
    }
    else {
      i = *(int *)(&DAT_10030e90 + param_4 * 4);
    }
    i = i + 1;
    iVar1 = (int)(i + (param_3 - 0x46) * 0x16d + -0xd + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar1) {
      local_c = param_5 * 7 + i + (param_6 - iVar1);
    }
    else {
      local_c = (param_5 + -1) * 7 + i + (param_6 - iVar1);
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        local_14 = *(int *)(&DAT_10030e60 + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_10030e94 + param_4 * 4);
      }
      if (local_14 < local_c) {
        local_c = local_c + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      local_18 = *(int *)(&DAT_10030e5c + param_4 * 4);
    }
    else {
      local_18 = *(int *)(&DAT_10030e90 + param_4 * 4);
    }
    local_c = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_10030e3c = local_c;
    DAT_10030e40 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    DAT_10030e38 = param_3;
  }
  else {
    DAT_10030e4c = local_c;
    DAT_10030e50 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000 +
                   DAT_10030da8 * 1000;
    if (DAT_10030e50 < 0) {
      DAT_10030e50 = DAT_10030e50 + 86400000;
      DAT_10030e4c = local_c + -1;
    }
    else if (86399999 < DAT_10030e50) {
      DAT_10030e50 = DAT_10030e50 + -86400000;
      DAT_10030e4c = local_c + 1;
    }
    DAT_10030e48 = param_3;
  }
  return;
}


