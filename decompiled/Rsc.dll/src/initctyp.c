/* Rsc.dll — initctyp.c: 25 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10010780 fix_grouping ==== */

/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio */

void __cdecl fix_grouping(char *param_1)

{
  char *local_8;
  
  while (*param_1 != '\0') {
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (*param_1 == ';') {
        local_8 = param_1;
        do {
          *local_8 = local_8[1];
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    else {
      *param_1 = *param_1 + -0x30;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* ==== 10010800 FUN_10010800 ==== */

void __cdecl FUN_10010800(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_100316d0)) {
    FUN_100041a0(*(void **)(param_1 + 0xc),2);
    FUN_100041a0(*(void **)(param_1 + 0x10),2);
    FUN_100041a0(*(void **)(param_1 + 0x14),2);
    FUN_100041a0(*(void **)(param_1 + 0x18),2);
    FUN_100041a0(*(void **)(param_1 + 0x1c),2);
    FUN_100041a0(*(void **)(param_1 + 0x20),2);
    FUN_100041a0(*(void **)(param_1 + 0x24),2);
  }
  return;
}


/* ==== 100108a0 FUN_100108a0 ==== */

undefined4 FUN_100108a0(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined2 *dst_2;
  LPCSTR dst_3;
  LPCWSTR dst_4;
  LPCWSTR local_28;
  uint i;
  undefined2 *dst;
  BYTE *local_1c;
  _cpinfo cpinfo;
  
  dst_3 = (LPCSTR)0x0;
  dst_4 = (LPCWSTR)0x0;
  if (DAT_1003163c == 0) {
    PTR_s__10030008 = s__10030012;
    PTR_s__1003000c = s__10030012;
    FUN_100041a0(DAT_10031678,2);
    FUN_100041a0(DAT_1003167c,2);
    DAT_10031678 = (void *)0x0;
    DAT_1003167c = (void *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_1003164c != 0) ||
       (iVar1 = FUN_10012fb0(0,(uint)DAT_1003168c,0x1004,(int *)&DAT_1003164c), iVar1 == 0)) {
      dst_2 = (undefined2 *)FUN_10003710((void *)0x202,2,0x1002d0a0,0x5c);
      dst = (undefined2 *)FUN_10003710((void *)0x202,2,0x1002d0a0,0x5e);
      dst_3 = (LPCSTR)FUN_10003710((void *)0x101,2,0x1002d0a0,0x60);
      dst_4 = (LPCWSTR)FUN_10003710((void *)0x202,2,0x1002d0a0,0x62);
      if ((dst_2 != (undefined2 *)0x0) &&
         (((dst != (undefined2 *)0x0 && (dst_3 != (LPCSTR)0x0)) && (dst_4 != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)dst_3;
        for (i = 0; (int)i < 0x100; i = i + 1) {
          *local_1c = (CHAR)i;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_1003164c,&cpinfo);
        if ((BVar2 != 0) && (cpinfo.MaxCharSize < 3)) {
          DAT_10030214 = cpinfo.MaxCharSize & 0xffff;
          if (1 < DAT_10030214) {
            for (local_1c = cpinfo.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (i = (uint)*local_1c; (int)i <= (int)(uint)local_1c[1]; i = i + 1) {
                dst_3[i] = '\0';
              }
            }
          }
          BVar2 = FUN_1000e0e0(1,dst_3,0x100,dst_2 + 1,0,0,0);
          if (BVar2 != 0) {
            *dst_2 = 0;
            local_28 = dst_4;
            for (i = 0; (int)i < 0x100; i = i + 1) {
              *local_28 = (WCHAR)i;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_10013250(1,dst_4,0x100,dst + 1,0,0);
            if (BVar2 != 0) {
              *dst = 0;
              if (1 < (int)DAT_10030214) {
                for (local_1c = cpinfo.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (i = (uint)*local_1c; (int)i <= (int)(uint)local_1c[1]; i = i + 1) {
                    dst_2[i + 1] = 0x8000;
                  }
                }
              }
              PTR_s__10030008 = (undefined *)(dst_2 + 1);
              PTR_s__1003000c = (undefined *)(dst + 1);
              if (DAT_10031678 != (void *)0x0) {
                FUN_100041a0(DAT_10031678,2);
              }
              DAT_10031678 = dst_2;
              if (DAT_1003167c != (void *)0x0) {
                FUN_100041a0(DAT_1003167c,2);
              }
              DAT_1003167c = dst;
              FUN_100041a0(dst_3,2);
              FUN_100041a0(dst_4,2);
              return 0;
            }
          }
        }
      }
    }
    FUN_100041a0(dst_2,2);
    FUN_100041a0(dst,2);
    FUN_100041a0(dst_3,2);
    FUN_100041a0(dst_4,2);
    uVar3 = 1;
  }
  return uVar3;
}


/* ==== 10010c40 FUN_10010c40 ==== */

undefined4 FUN_10010c40(void)

{
  return 0;
}


/* ==== 10010c50 _strcmp ==== */

/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_10010c94;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10010c60;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10010c94;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10010c94;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10010c60:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10010c94:
  return (uint)bVar5 * -2 + 1;
}


/* ==== 10010ce0 FUN_10010ce0 ==== */

int __cdecl FUN_10010ce0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int i;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  i = -1;
  do {
    i = i + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return i;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return i;
}


/* ==== 10010d20 _strncmp ==== */

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t i;
  int j;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = 0;
  i = _MaxCount;
  pcVar4 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    j = _MaxCount - i;
    do {
      pcVar4 = _Str2;
      pcVar5 = _Str1;
      if (j == 0) break;
      j = j + -1;
      pcVar5 = _Str1 + 1;
      pcVar4 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar4;
      _Str1 = pcVar5;
    } while (cVar1 == cVar2);
    uVar3 = 0;
    if ((byte)pcVar4[-1] <= (byte)pcVar5[-1]) {
      if (pcVar4[-1] == pcVar5[-1]) {
        return 0;
      }
      uVar3 = 0xfffffffe;
    }
    uVar3 = ~uVar3;
  }
  return uVar3;
}


/* ==== 10010d60 FUN_10010d60 ==== */

byte * __cdecl FUN_10010d60(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}


/* ==== 10010da0 FUN_10010da0 ==== */

undefined4 __cdecl FUN_10010da0(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_100316c4 == (code *)0x0) {
    iVar1 = FUN_10011870();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_100316c4 = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_100116c0();
  }
  else {
    DAT_100316b4 = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_10010fa0(0x10030aa0,0x40,(int *)&DAT_100316b4);
    }
    DAT_100316b8 = param_1 + 0x40;
    if ((DAT_100316b8 != (char *)0x0) && (*DAT_100316b8 != '\0')) {
      FUN_10010fa0(0x100309e8,0x16,(int *)&DAT_100316b8);
    }
    DAT_100316bc = 0;
    if ((DAT_100316b4 == (char *)0x0) || (*DAT_100316b4 == '\0')) {
      if ((DAT_100316b8 == (char *)0x0) || (*DAT_100316b8 == '\0')) {
        FUN_100116c0();
      }
      else {
        FUN_100115c0();
      }
    }
    else if ((DAT_100316b8 == (char *)0x0) || (*DAT_100316b8 == '\0')) {
      FUN_10011420();
    }
    else {
      FUN_10011030();
    }
  }
  if (DAT_100316bc == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_100116f0((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_100316a4,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_100316a4;
          param_2[1] = (undefined2)DAT_100316c0;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_100316c4)(DAT_100316a4,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_100316c4)(DAT_100316c0,0x1002,param_3 + 0x40,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          __itoa(_Value,(char *)(param_3 + 0x80),10);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/* ==== 10010fa0 FUN_10010fa0 ==== */

void __cdecl FUN_10010fa0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = 1;
  local_10 = 0;
  while ((local_10 <= param_2 && (local_c != 0))) {
    iVar1 = (local_10 + param_2) / 2;
    local_c = FUN_100134c0((byte *)*param_3,*(byte **)(param_1 + iVar1 * 8));
    if (local_c == 0) {
      *param_3 = param_1 + 4 + iVar1 * 8;
    }
    else if ((int)local_c < 0) {
      param_2 = iVar1 + -1;
    }
    else {
      local_10 = iVar1 + 1;
    }
  }
  return;
}


/* ==== 10011030 FUN_10011030 ==== */

void FUN_10011030(void)

{
  size_t _strlen_result;
  int _GetPrimaryLen_result;
  
  _strlen_result = _strlen(DAT_100316b4);
  DAT_100316b0 = (uint)(_strlen_result == 3);
  _strlen_result = _strlen(DAT_100316b8);
  DAT_100316a8 = (uint)(_strlen_result == 3);
  DAT_100316a4 = 0;
  if (DAT_100316b0 == 0) {
    _GetPrimaryLen_result = _GetPrimaryLen(DAT_100316b4);
  }
  else {
    _GetPrimaryLen_result = 2;
  }
  DAT_100316ac = _GetPrimaryLen_result;
  EnumSystemLocalesA(FUN_100110f0,1);
  if ((((DAT_100316bc & 0x100) == 0) || ((DAT_100316bc & 0x200) == 0)) || ((DAT_100316bc & 7) == 0))
  {
    DAT_100316bc = 0;
  }
  return;
}


/* ==== 100110f0 FUN_100110f0 ==== */

bool FUN_100110f0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t _strlen_result;
  byte local_7c [120];
  
  iVar2 = FUN_10011a50(param_1);
  iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316a8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_100316bc = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100134c0(DAT_100316b8,local_7c);
    if (uVar4 == 0) {
      iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_100316bc = 0;
        return true;
      }
      uVar4 = FUN_100134c0(DAT_100316b4,local_7c);
      if (uVar4 == 0) {
        DAT_100316bc = DAT_100316bc | 0x304;
        DAT_100316a4 = iVar2;
        DAT_100316c0 = iVar2;
      }
      else if ((DAT_100316bc & 2) == 0) {
        if ((DAT_100316ac == 0) ||
           (iVar3 = FUN_10013590(DAT_100316b4,(char *)local_7c,DAT_100316ac), iVar3 != 0)) {
          if (((DAT_100316bc & 1) == 0) && (iVar3 = FUN_10011790((short)iVar2), iVar3 != 0)) {
            DAT_100316bc = DAT_100316bc | 1;
            DAT_100316c0 = iVar2;
          }
        }
        else {
          DAT_100316bc = DAT_100316bc | 2;
          DAT_100316c0 = iVar2;
          _strlen_result = _strlen((char *)DAT_100316b4);
          if (_strlen_result == DAT_100316ac) {
            DAT_100316a4 = iVar2;
          }
        }
      }
    }
    if ((DAT_100316bc & 0x300) != 0x300) {
      iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_100316bc = 0;
        return true;
      }
      uVar4 = FUN_100134c0(DAT_100316b4,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_100316bc | 0x200;
        if (DAT_100316b0 == 0) {
          DAT_100316bc = uVar4;
          if ((DAT_100316ac == 0) ||
             (_strlen_result = _strlen((char *)DAT_100316b4), _strlen_result != DAT_100316ac)) {
            DAT_100316bc = DAT_100316bc | 0x100;
            if (DAT_100316a4 == 0) {
              DAT_100316a4 = iVar2;
            }
          }
          else {
            iVar3 = FUN_100117e0(iVar2,1);
            if ((iVar3 != 0) && (DAT_100316bc = DAT_100316bc | 0x100, DAT_100316a4 == 0)) {
              DAT_100316a4 = iVar2;
            }
          }
        }
        else {
          DAT_100316bc = DAT_100316bc | 0x300;
          if (DAT_100316a4 == 0) {
            DAT_100316a4 = iVar2;
          }
        }
      }
      else if ((((DAT_100316b0 == 0) && (DAT_100316ac != 0)) &&
               (iVar3 = FUN_10013590(DAT_100316b4,(char *)local_7c,DAT_100316ac), iVar3 == 0)) &&
              ((iVar3 = FUN_100117e0(iVar2,0), iVar3 != 0 &&
               (DAT_100316bc = DAT_100316bc | 0x100, DAT_100316a4 == 0)))) {
        DAT_100316a4 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_100316bc & 4) != 0);
  }
  return (bool)cVar1;
}


/* ==== 10011420 FUN_10011420 ==== */

void FUN_10011420(void)

{
  size_t _strlen_result;
  int _GetPrimaryLen_result;
  
  _strlen_result = _strlen(DAT_100316b4);
  DAT_100316b0 = (uint)(_strlen_result == 3);
  if (DAT_100316b0 == 0) {
    _GetPrimaryLen_result = _GetPrimaryLen(DAT_100316b4);
  }
  else {
    _GetPrimaryLen_result = 2;
  }
  DAT_100316ac = _GetPrimaryLen_result;
  EnumSystemLocalesA(FUN_100114a0,1);
  if ((DAT_100316bc & 4) == 0) {
    DAT_100316bc = 0;
  }
  return;
}


/* ==== 100114a0 FUN_100114a0 ==== */

bool FUN_100114a0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10011a50(param_1);
  iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_100316bc = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100134c0(DAT_100316b4,local_7c);
    if (uVar4 == 0) {
      if ((DAT_100316b0 != 0) || (iVar3 = FUN_100117e0(iVar2,1), iVar3 != 0)) {
        DAT_100316bc = DAT_100316bc | 4;
        DAT_100316a4 = iVar2;
        DAT_100316c0 = iVar2;
      }
    }
    else if ((((DAT_100316b0 == 0) && (DAT_100316ac != 0)) &&
             (iVar3 = FUN_10013590(DAT_100316b4,(char *)local_7c,DAT_100316ac), iVar3 == 0)) &&
            (iVar3 = FUN_100117e0(iVar2,0), iVar3 != 0)) {
      DAT_100316bc = DAT_100316bc | 4;
      DAT_100316a4 = iVar2;
      DAT_100316c0 = iVar2;
    }
    cVar1 = '\x01' - ((DAT_100316bc & 4) != 0);
  }
  return (bool)cVar1;
}


/* ==== 100115c0 FUN_100115c0 ==== */

void FUN_100115c0(void)

{
  size_t _strlen_result;
  
  _strlen_result = _strlen(DAT_100316b8);
  DAT_100316a8 = (uint)(_strlen_result == 3);
  EnumSystemLocalesA(FUN_10011610,1);
  if ((DAT_100316bc & 4) == 0) {
    DAT_100316bc = 0;
  }
  return;
}


/* ==== 10011610 FUN_10011610 ==== */

bool FUN_10011610(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10011a50(param_1);
  iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316a8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_100316bc = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100134c0(DAT_100316b8,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_10011790((short)iVar2);
      if (iVar3 != 0) {
        DAT_100316bc = DAT_100316bc | 4;
        DAT_100316a4 = iVar2;
        DAT_100316c0 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_100316bc & 4) != 0);
  }
  return (bool)cVar1;
}


/* ==== 100116c0 FUN_100116c0 ==== */

void FUN_100116c0(void)

{
  DAT_100316bc = DAT_100316bc | 0x104;
  DAT_100316c0 = GetUserDefaultLCID();
  DAT_100316a4 = DAT_100316c0;
  return;
}


/* ==== 100116f0 FUN_100116f0 ==== */

int __cdecl FUN_100116f0(byte *str1)

{
  int iVar1;
  byte local_c [8];
  
  if (((str1 == (byte *)0x0) || (*str1 == 0)) || (iVar1 = _strcmp((char *)str1,"ACP"), iVar1 == 0))
  {
    iVar1 = (*DAT_100316c4)(DAT_100316c0,0x1004,local_c,8);
    if (iVar1 == 0) {
      return 0;
    }
    str1 = local_c;
  }
  else {
    iVar1 = _strcmp((char *)str1,"OCP");
    if (iVar1 == 0) {
      iVar1 = (*DAT_100316c4)(DAT_100316c0,0xb,local_c,8);
      if (iVar1 == 0) {
        return 0;
      }
      str1 = local_c;
    }
  }
  iVar1 = FUN_100136a0(str1);
  return iVar1;
}


/* ==== 10011790 FUN_10011790 ==== */

undefined4 __cdecl FUN_10011790(short param_1)

{
  uint i;
  
  i = 0;
  while( true ) {
    if (9 < i) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_100309d4 + i * 2)) break;
    i = i + 1;
  }
  return 0;
}


/* ==== 100117e0 FUN_100117e0 ==== */

undefined4 __cdecl FUN_100117e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t _GetPrimaryLen_result;
  size_t _strlen_result;
  char local_80 [120];
  uint local_8;
  
  local_8 = (uint)((ushort)param_1 & 0x3ff | 0x400);
  iVar1 = (*DAT_100316c4)(local_8,1,local_80,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_10011a50(local_80);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      _GetPrimaryLen_result = _GetPrimaryLen(DAT_100316b4);
      _strlen_result = _strlen(DAT_100316b4);
      if (_GetPrimaryLen_result == _strlen_result) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* ==== 10011870 FUN_10011870 ==== */

undefined4 FUN_10011870(void)

{
  BOOL BVar1;
  undefined4 local_9c;
  _OSVERSIONINFOA osversioninfo;
  
  osversioninfo.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&osversioninfo);
  if ((BVar1 == 0) || (osversioninfo.dwPlatformId != 2)) {
    local_9c = 0;
  }
  else {
    local_9c = 1;
  }
  return local_9c;
}


/* ==== 100118c0 crtGetLocaleInfoA ==== */

/* Library Function - Single Match
    _crtGetLocaleInfoA@16
   
   Library: Visual Studio 2003 Debug
   __stdcall crtGetLocaleInfoA,16 */

int crtGetLocaleInfoA(uint param_1,uint param_2,char *dest,int param_4)

{
  int iVar1;
  int local_14;
  char *source;
  int local_8;
  
  local_14 = 0;
  local_8 = 0x1a;
  source = (char *)0x0;
  do {
    if (local_8 < local_14) {
LAB_10011a28:
      iVar1 = GetLocaleInfoA(param_1,param_2,dest,param_4);
      return iVar1;
    }
    iVar1 = (local_14 + local_8) / 2;
    if (param_1 == *(uint *)(&DAT_10030530 + iVar1 * 0x2c)) {
      if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          source = s_850_1003054c + iVar1 * 0x2c;
        }
        else if (param_2 == 1) {
          source = s_040a_10030534 + iVar1 * 0x2c;
        }
        else if (param_2 == 3) {
          source = s_ESP_10030540 + iVar1 * 0x2c;
        }
        else if (param_2 == 7) {
          source = s_ESP_10030548 + iVar1 * 0x2c;
        }
      }
      else if (param_2 == 0x1001) {
        source = (&PTR_s_Spanish___Traditional_Sort_1003053c)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1002) {
        source = (&PTR_s_Spain_10030544)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1004) {
        source = s_1252_10030554 + iVar1 * 0x2c;
      }
      if ((source != (char *)0x0) && (0 < param_4)) {
        _strncpy(dest,source,param_4 - 1);
        dest[param_4 + -1] = '\0';
        return 1;
      }
      goto LAB_10011a28;
    }
    if (param_1 < *(uint *)(&DAT_10030530 + iVar1 * 0x2c)) {
      local_8 = iVar1 + -1;
    }
    else {
      local_14 = iVar1 + 1;
    }
  } while( true );
}


/* ==== 10011a50 FUN_10011a50 ==== */

int __cdecl FUN_10011a50(char *param_1)

{
  char local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    local_c = *param_1;
    param_1 = param_1 + 1;
    if (local_c == '\0') break;
    if ((local_c < 'a') || ('f' < local_c)) {
      if (('@' < local_c) && (local_c < 'G')) {
        local_c = local_c + -7;
      }
    }
    else {
      local_c = local_c + -0x27;
    }
    local_8 = local_8 * 0x10 + -0x30 + (int)local_c;
  }
  return local_8;
}


/* ==== 10011ad0 _GetPrimaryLen ==== */

/* Library Function - Single Match
    _GetPrimaryLen
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __cdecl _GetPrimaryLen(char *param_1)

{
  int i;
  char local_8;
  
  i = 0;
  local_8 = *param_1;
  while (((param_1 = param_1 + 1, '@' < local_8 && (local_8 < '[')) ||
         (('`' < local_8 && (local_8 < '{'))))) {
    i = i + 1;
    local_8 = *param_1;
  }
  return i;
}


/* ==== 10011b40 FUN_10011b40 ==== */

undefined1 * FUN_10011b40(void)

{
  undefined *puVar1;
  size_t _strlen_result;
  size_t _strlen_result_2;
  undefined1 *puVar2;
  uint *str;
  uint *_Str;
  undefined1 *puVar3;
  undefined1 *local_18;
  uint i;
  int local_c;
  
  puVar1 = PTR_PTR_10030ca8;
  local_c = 0;
  for (i = 0; i < 7; i = i + 1) {
    _strlen_result = _strlen(*(char **)(puVar1 + i * 4));
    _strlen_result_2 = _strlen(*(char **)(puVar1 + i * 4 + 0x1c));
    local_c = _strlen_result_2 + local_c + 2 + _strlen_result;
  }
  puVar2 = (undefined1 *)FUN_100036f0((void *)(local_c + 1));
  if (puVar2 != (undefined1 *)0x0) {
    local_18 = puVar2;
    for (i = 0; i < 7; i = i + 1) {
      *local_18 = 0x3a;
      str = FUN_10001ec0((uint *)(local_18 + 1),*(uint **)(puVar1 + i * 4));
      _strlen_result = _strlen((char *)str);
      puVar3 = (undefined1 *)((int)(local_18 + 1) + _strlen_result);
      *puVar3 = 0x3a;
      str = (uint *)(puVar3 + 1);
      _Str = FUN_10001ec0(str,*(uint **)(puVar1 + i * 4 + 0x1c));
      _strlen_result = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)str + _strlen_result);
    }
    *local_18 = 0;
  }
  return puVar2;
}


