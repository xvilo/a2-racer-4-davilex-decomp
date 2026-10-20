/* Rsc.dll — winsig.c: 29 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10008bb0 FUN_10008bb0 ==== */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10008bb0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


/* ==== 10008be0 FUN_10008be0 ==== */

int __cdecl FUN_10008be0(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_100073f0(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_1003160c == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_10008e10,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_10006f30();
          *pDVar4 = DVar3;
          FUN_10007490(1);
          goto LAB_10008dc8;
        }
        DAT_1003160c = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_100315fc;
        DAT_100315fc = param_2;
        break;
      case 0xf:
        local_10 = DAT_10031608;
        DAT_10031608 = param_2;
        break;
      case 0x15:
        local_10 = DAT_10031600;
        DAT_10031600 = param_2;
        break;
      case 0x16:
        local_10 = DAT_10031604;
        DAT_10031604 = param_2;
      }
      FUN_10007490(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_100077b0();
      if ((undefined *)pDVar4[0x14] == &DAT_10030220) {
        DVar3 = FUN_10003710(DAT_100302a0,2,0x1002ceac,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_10008dc8;
        FUN_100061d0((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_10030220,(uint)DAT_100302a0);
      }
      local_c = FUN_100090f0(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_100302a4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_10008dc8:
  puVar5 = (undefined4 *)FUN_10006f20();
  *puVar5 = 0x16;
  return -1;
}


/* ==== 10008e10 FUN_10008e10 ==== */

undefined4 FUN_10008e10(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_100073f0(1);
  if (param_1 == 0) {
    local_c = &DAT_100315fc;
    local_10 = DAT_100315fc;
    local_8 = 2;
  }
  else {
    local_c = &DAT_10031600;
    local_10 = DAT_10031600;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_10007490(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_10007490(1);
    }
    else {
      *local_c = 0;
      FUN_10007490(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/* ==== 10008eb0 FUN_10008eb0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008eb0(int param_1)

{
  bool bVar1;
  uint uVar2;
  code *local_20;
  undefined4 *local_1c;
  DWORD local_18;
  int i;
  DWORD local_c;
  DWORD *local_8;
  
  bVar1 = false;
  switch(param_1) {
  case 2:
    local_1c = &DAT_100315fc;
    local_20 = DAT_100315fc;
    bVar1 = true;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_8 = FUN_100077b0();
    uVar2 = FUN_100090f0(param_1,local_8[0x14]);
    local_1c = (undefined4 *)(uVar2 + 8);
    local_20 = (code *)*local_1c;
    break;
  case 0xf:
    local_1c = &DAT_10031608;
    local_20 = DAT_10031608;
    bVar1 = true;
    break;
  case 0x15:
    local_1c = &DAT_10031600;
    local_20 = DAT_10031600;
    bVar1 = true;
    break;
  case 0x16:
    local_1c = &DAT_10031604;
    local_20 = DAT_10031604;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_100073f0(1);
  }
  if (local_20 != (code *)0x1) {
    if (local_20 == (code *)0x0) {
      if (bVar1) {
        FUN_10007490(1);
      }
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
    if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
      local_18 = local_8[0x15];
      local_8[0x15] = 0;
      if (param_1 == 8) {
        local_c = local_8[0x16];
        local_8[0x16] = 0x8c;
      }
    }
    if (param_1 == 8) {
      for (i = DAT_10030298; i < DAT_10030298 + _DAT_1003029c; i = i + 1) {
        *(undefined4 *)(local_8[0x14] + 8 + i * 0xc) = 0;
      }
    }
    else {
      *local_1c = 0;
    }
    if (bVar1) {
      FUN_10007490(1);
    }
    if (param_1 == 8) {
      (*local_20)(8,local_8[0x16]);
    }
    else {
      (*local_20)(param_1);
      if ((param_1 != 0xb) && (param_1 != 4)) {
        return 0;
      }
    }
    local_8[0x15] = local_18;
    if (param_1 == 8) {
      local_8[0x16] = local_c;
    }
    return 0;
  }
  if (bVar1) {
    FUN_10007490(1);
  }
  return 0;
}


/* ==== 100090f0 FUN_100090f0 ==== */

uint __cdecl FUN_100090f0(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_100302a4 * 0xc);
  if ((param_2 + DAT_100302a4 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}


/* ==== 10009150 FUN_10009150 ==== */

DWORD * FUN_10009150(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100077b0();
  return pDVar1 + 0x16;
}


/* ==== 10009160 FUN_10009160 ==== */

DWORD * FUN_10009160(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100077b0();
  return pDVar1 + 0x15;
}


/* ==== 10009170 FUN_10009170 ==== */

int __cdecl FUN_10009170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_10031610 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10031610 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10031610 != (FARPROC)0x0) {
        DAT_10031614 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10031618 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100091e3;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100091e3:
    if (DAT_10031614 != (FARPROC)0x0) {
      local_8 = (*DAT_10031614)();
    }
    if ((local_8 != 0) && (DAT_10031618 != (FARPROC)0x0)) {
      local_8 = (*DAT_10031618)(local_8);
    }
    iVar1 = (*DAT_10031610)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}


/* ==== 10009230 _strncpy ==== */

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint i;
  uint *puVar4;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar4 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      i = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar4 = (char)i;
      puVar4 = (uint *)((int)puVar4 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)i == '\0') break;
      if (((uint)_Source & 3) == 0) {
        i = _Count >> 2;
        goto joined_r0x1000926e;
      }
    }
    do {
      if (((uint)puVar4 & 3) == 0) {
        i = _Count >> 2;
        cVar3 = '\0';
        if (i == 0) goto LAB_100092ab;
        goto LAB_10009319;
      }
      *(char *)puVar4 = '\0';
      puVar4 = (uint *)((int)puVar4 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  i = _Count >> 2;
  if (i != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar4 = 0;
joined_r0x10009315:
          while( true ) {
            i = i - 1;
            puVar4 = puVar4 + 1;
            if (i == 0) break;
LAB_10009319:
            *puVar4 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100092ab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar4 = uVar2 & 0xff;
          goto joined_r0x10009315;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar4 = uVar2 & 0xffff;
          goto joined_r0x10009315;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar4 = uVar2;
          goto joined_r0x10009315;
        }
      }
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      i = i - 1;
joined_r0x1000926e:
    } while (i != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar4 = cVar3;
    puVar4 = (uint *)((int)puVar4 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_100092ab:
        *(char *)puVar4 = cVar3;
        puVar4 = (uint *)((int)puVar4 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


/* ==== 10009330 _set_new_handler ==== */

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  FUN_100073f0(9);
  p_Var1 = DAT_10031620;
  DAT_10031620 = param_1;
  FUN_10007490(9);
  return p_Var1;
}


/* ==== 10009360 FUN_10009360 ==== */

undefined4 FUN_10009360(void)

{
  return DAT_10031620;
}


/* ==== 10009370 __callnewh ==== */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_10031620 != (code *)0x0) && (iVar1 = (*DAT_10031620)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== 100093a0 _memset ==== */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint i;
  size_t sVar2;
  uint *puVar3;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar3 = _Dst;
  if (3 < _Size) {
    i = -(int)_Dst & 3;
    sVar2 = _Size;
    if (i != 0) {
      sVar2 = _Size - i;
      do {
        *(undefined1 *)puVar3 = (undefined1)_Val;
        puVar3 = (uint *)((int)puVar3 + 1);
        i = i - 1;
      } while (i != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar2 & 3;
    i = sVar2 >> 2;
    if (i != 0) {
      for (; i != 0; i = i - 1) {
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar3 = (char)uVar1;
    puVar3 = (uint *)((int)puVar3 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


/* ==== 10009400 FUN_10009400 ==== */

void __cdecl FUN_10009400(void *param_1)

{
  __nh_malloc_base(param_1,(uint)param_1,DAT_1003161c);
  return;
}


/* ==== 10009420 __nh_malloc_base ==== */

/* Library Function - Single Match
    __nh_malloc_base
   
   Library: Visual Studio 2003 Debug */

int * __thiscall __nh_malloc_base(void *this,uint size,int param_2)

{
  int __callnewh_result;
  void *extraout_ECX;
  int *local_8;
  
  if (size < 0xffffffe1) {
    do {
      if (size < 0xffffffe1) {
        local_8 = FUN_10009480(this,size);
      }
      else {
        local_8 = (int *)0x0;
      }
      if (local_8 != (int *)0x0) {
        return local_8;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      __callnewh_result = __callnewh(size);
      this = extraout_ECX;
    } while (__callnewh_result != 0);
  }
  return (int *)0x0;
}


/* ==== 10009480 FUN_10009480 ==== */

int * __thiscall FUN_10009480(void *this,uint param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10030004) {
    FUN_100073f0(9);
    piVar1 = FUN_10009fc0(param_1);
    FUN_10007490(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = HeapAlloc(DAT_10031a8c,0,param_1 + 0xf & 0xfffffff0);
  return piVar1;
}


/* ==== 100094f0 FUN_100094f0 ==== */

undefined4 FUN_100094f0(void)

{
  return 1;
}


/* ==== 10009500 FUN_10009500 ==== */

LPVOID __cdecl FUN_10009500(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_2 < 0xffffffe1) {
    FUN_100073f0(9);
    puVar1 = (uint *)FUN_10009930((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_10007490(9);
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_8 = HeapReAlloc(DAT_10031a8c,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      local_8 = (LPVOID)0x0;
      if (param_2 <= DAT_10030004) {
        iVar2 = FUN_1000a800(puVar1,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_8 = param_1;
        }
      }
      FUN_10007490(9);
    }
  }
  else {
    local_8 = (LPVOID)0x0;
  }
  return local_8;
}


/* ==== 100095b0 FUN_100095b0 ==== */

int * __cdecl FUN_100095b0(int *this_val,void *size)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  void *local_18;
  void *local_14;
  int *local_c;
  
  if (this_val == (int *)0x0) {
    piVar1 = (int *)FUN_10009400(size);
  }
  else if (size == (void *)0x0) {
    FUN_100097a0(this_val,this_val);
    piVar1 = (int *)0x0;
  }
  else {
    do {
      local_c = (int *)0x0;
      if (size < (void *)0xffffffe1) {
        FUN_100073f0(9);
        puVar2 = (uint *)FUN_10009930((int)this_val);
        if (puVar2 == (uint *)0x0) {
          FUN_10007490(9);
          if (size == (void *)0x0) {
            size = (void *)0x1;
          }
          size = (void *)((int)size + 0xfU & 0xfffffff0);
          local_c = HeapReAlloc(DAT_10031a8c,0,this_val,(SIZE_T)size);
        }
        else {
          if (size <= DAT_10030004) {
            iVar3 = FUN_1000a800(puVar2,(int)this_val,(int)size);
            if (iVar3 == 0) {
              local_c = FUN_10009fc0((int)size);
              if (local_c != (int *)0x0) {
                local_14 = (void *)(this_val[-1] - 1);
                if (size <= local_14) {
                  local_14 = size;
                }
                FUN_100061d0(local_c,this_val,(uint)local_14);
                FUN_100099f0(puVar2,(int)this_val);
              }
            }
            else {
              local_c = this_val;
            }
          }
          if (local_c == (int *)0x0) {
            if (size == (void *)0x0) {
              size = (void *)0x1;
            }
            size = (void *)((int)size + 0xfU & 0xfffffff0);
            local_c = HeapAlloc(DAT_10031a8c,0,(SIZE_T)size);
            if (local_c != (int *)0x0) {
              local_18 = size;
              if ((void *)(this_val[-1] - 1U) < size) {
                local_18 = (void *)(this_val[-1] - 1U);
              }
              FUN_100061d0(local_c,this_val,(uint)local_18);
              FUN_100099f0(puVar2,(int)this_val);
            }
          }
          FUN_10007490(9);
        }
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      if (DAT_1003161c == 0) {
        return (int *)0x0;
      }
      iVar3 = __callnewh((size_t)size);
    } while (iVar3 != 0);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


/* ==== 100097a0 FUN_100097a0 ==== */

void __thiscall FUN_100097a0(void *this,LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100073f0(9);
    puVar1 = (uint *)FUN_10009930((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_10007490(9);
      HeapFree(DAT_10031a8c,0,param_1);
    }
    else {
      FUN_100099f0(puVar1,(int)param_1);
      FUN_10007490(9);
    }
  }
  return;
}


/* ==== 10009810 FUN_10009810 ==== */

undefined4 FUN_10009810(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  FUN_100073f0(9);
  iVar1 = FUN_1000af20();
  if (iVar1 < 0) {
    local_8 = 0xfffffffc;
  }
  FUN_10007490(9);
  BVar2 = HeapValidate(DAT_10031a8c,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_10006f30();
      *pDVar4 = 0x78;
      puVar5 = (undefined4 *)FUN_10006f20();
      *puVar5 = 0x28;
    }
    else {
      local_8 = 0xfffffffc;
    }
  }
  return local_8;
}


/* ==== 10009890 FUN_10009890 ==== */

void FUN_10009890(void)

{
  FUN_10009810();
  return;
}


/* ==== 100098a0 FUN_100098a0 ==== */

undefined4 FUN_100098a0(void)

{
  return DAT_10030004;
}


/* ==== 100098b0 FUN_100098b0 ==== */

bool __cdecl FUN_100098b0(uint param_1)

{
  if (param_1 < 0x3f9) {
    DAT_10030004 = param_1;
  }
  return param_1 < 0x3f9;
}


/* ==== 100098d0 FUN_100098d0 ==== */

bool FUN_100098d0(void)

{
  DAT_10031a88 = HeapAlloc(DAT_10031a8c,0,0x140);
  if (DAT_10031a88 != (LPVOID)0x0) {
    DAT_10031a80 = 0;
    DAT_10031a84 = 0;
    DAT_10031a68 = 0x10;
    DAT_10031a7c = DAT_10031a88;
  }
  return DAT_10031a88 != (LPVOID)0x0;
}


/* ==== 10009930 FUN_10009930 ==== */

uint __cdecl FUN_10009930(int param_1)

{
  uint local_c;
  
  local_c = DAT_10031a88;
  while( true ) {
    if (DAT_10031a88 + DAT_10031a84 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}


/* ==== 10009990 FUN_10009990 ==== */

undefined4 __cdecl FUN_10009990(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_10;
  
  uVar1 = param_2 - *(int *)(param_1 + 0xc);
  if ((((*(uint *)(param_1 + 8) & 0x80000000U >> ((byte)(uVar1 >> 0xf) & 0x1f)) == 0) &&
      ((uVar1 & 0xf) == 0)) && ((uVar1 & 0xfff) != 0)) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}


/* ==== 100099f0 FUN_100099f0 ==== */

void __cdecl FUN_100099f0(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int *local_20;
  
  uVar4 = param_1[4];
  uVar8 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar8 * 0x204);
  local_20 = (int *)(param_2 + -4);
  local_34 = *local_20 + -1;
  puVar9 = (uint *)((int)local_20 + local_34);
  uVar5 = *puVar9;
  uVar6 = *(uint *)(param_2 + -8);
  if ((uVar5 & 1) == 0) {
    local_28 = ((int)uVar5 >> 4) - 1;
    if (0x3f < local_28) {
      local_28 = 0x3f;
    }
    if (puVar9[1] == puVar9[2]) {
      bVar7 = (byte)local_28;
      if (local_28 < 0x20) {
        *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
             *(uint *)(uVar4 + 0x44 + uVar8 * 4) & ~(0x80000000U >> (bVar7 & 0x1f));
        *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
        if (*(char *)(uVar4 + local_28 + 4) == '\0') {
          *param_1 = *param_1 & ~(0x80000000U >> (bVar7 & 0x1f));
        }
      }
      else {
        *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
             *(uint *)(uVar4 + 0xc4 + uVar8 * 4) & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
        *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
        if (*(char *)(uVar4 + local_28 + 4) == '\0') {
          param_1[1] = param_1[1] & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
        }
      }
    }
    *(uint *)(puVar9[2] + 4) = puVar9[1];
    *(uint *)(puVar9[1] + 8) = puVar9[2];
    local_34 = local_34 + uVar5;
  }
  local_2c = (local_34 >> 4) - 1;
  if (0x3f < local_2c) {
    local_2c = 0x3f;
  }
  if ((uVar6 & 1) == 0) {
    local_20 = (int *)((int)local_20 - uVar6);
    local_30 = ((int)uVar6 >> 4) - 1;
    if (0x3f < local_30) {
      local_30 = 0x3f;
    }
    local_34 = local_34 + uVar6;
    local_2c = (local_34 >> 4) - 1;
    if (0x3f < local_2c) {
      local_2c = 0x3f;
    }
    if (local_30 != local_2c) {
      if (local_20[1] == local_20[2]) {
        bVar7 = (byte)local_30;
        if (local_30 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
               *(uint *)(uVar4 + 0x44 + uVar8 * 4) & ~(0x80000000U >> (bVar7 & 0x1f));
          *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
          if (*(char *)(uVar4 + local_30 + 4) == '\0') {
            *param_1 = *param_1 & ~(0x80000000U >> (bVar7 & 0x1f));
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
               *(uint *)(uVar4 + 0xc4 + uVar8 * 4) & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
          *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
          if (*(char *)(uVar4 + local_30 + 4) == '\0') {
            param_1[1] = param_1[1] & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
          }
        }
      }
      *(int *)(local_20[2] + 4) = local_20[1];
      *(int *)(local_20[1] + 8) = local_20[2];
    }
  }
  if (((uVar6 & 1) != 0) || (local_30 != local_2c)) {
    piVar1 = piVar2 + local_2c * 2;
    local_20[1] = piVar1[1];
    local_20[2] = (int)piVar1;
    piVar1[1] = (int)local_20;
    *(int **)(local_20[1] + 8) = local_20;
    if (local_20[1] == local_20[2]) {
      bVar7 = (byte)local_2c;
      if (local_2c < 0x20) {
        cVar3 = *(char *)(uVar4 + local_2c + 4);
        *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar7 & 0x1f);
        }
        *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
             *(uint *)(uVar4 + 0x44 + uVar8 * 4) | 0x80000000U >> (bVar7 & 0x1f);
      }
      else {
        cVar3 = *(char *)(uVar4 + local_2c + 4);
        *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
        }
        *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
             *(uint *)(uVar4 + 0xc4 + uVar8 * 4) | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
      }
    }
  }
  *local_20 = local_34;
  *(int *)((int)local_20 + local_34 + -4) = local_34;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    if (DAT_10031a80 != (uint *)0x0) {
      VirtualFree((LPVOID)(DAT_10031a80[3] + DAT_10031a78 * 0x8000),0x8000,0x4000);
      DAT_10031a80[2] = DAT_10031a80[2] | 0x80000000U >> ((byte)DAT_10031a78 & 0x1f);
      *(undefined4 *)(DAT_10031a80[4] + 0xc4 + DAT_10031a78 * 4) = 0;
      *(char *)(DAT_10031a80[4] + 0x43) = *(char *)(DAT_10031a80[4] + 0x43) + -1;
      if (*(char *)(DAT_10031a80[4] + 0x43) == '\0') {
        DAT_10031a80[1] = DAT_10031a80[1] & 0xfffffffe;
      }
      if (DAT_10031a80[2] == 0xffffffff) {
        VirtualFree((LPVOID)DAT_10031a80[3],0,0x8000);
        HeapFree(DAT_10031a8c,0,(LPVOID)DAT_10031a80[4]);
        FUN_1000dda0(DAT_10031a80,DAT_10031a80 + 5,
                     (DAT_10031a88 + DAT_10031a84 * 0x14) - (int)(DAT_10031a80 + 5));
        DAT_10031a84 = DAT_10031a84 + -1;
        if (DAT_10031a80 < param_1) {
          param_1 = param_1 + -5;
        }
        DAT_10031a7c = DAT_10031a88;
      }
    }
    DAT_10031a80 = param_1;
    DAT_10031a78 = uVar8;
  }
  return;
}


/* ==== 10009fc0 FUN_10009fc0 ==== */

int * __cdecl FUN_10009fc0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  uint local_38;
  int i;
  uint local_28;
  int j;
  uint local_20;
  uint *local_1c;
  int local_18;
  
  puVar7 = DAT_10031a88 + DAT_10031a84 * 5;
  uVar9 = param_1 + 0x17U & 0xfffffff0;
  iVar5 = ((int)(param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar5;
  if (iVar5 < 0x20) {
    local_28 = 0xffffffff >> (bVar6 & 0x1f);
    local_38 = 0xffffffff;
  }
  else {
    local_28 = 0;
    local_38 = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (local_1c = DAT_10031a7c;
      (local_1c < puVar7 && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
      local_1c = local_1c + 5) {
  }
  if (local_1c == puVar7) {
    for (local_1c = DAT_10031a88;
        (local_1c < DAT_10031a7c && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
        local_1c = local_1c + 5) {
    }
    if (local_1c == DAT_10031a7c) {
      for (; (local_1c < puVar7 && (local_1c[2] == 0)); local_1c = local_1c + 5) {
      }
      if (local_1c == puVar7) {
        for (local_1c = DAT_10031a88; (local_1c < DAT_10031a7c && (local_1c[2] == 0));
            local_1c = local_1c + 5) {
        }
        if ((local_1c == DAT_10031a7c) && (local_1c = FUN_1000a500(), local_1c == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar5 = FUN_1000a610((int)local_1c);
      *(int *)local_1c[4] = iVar5;
      if (*(int *)local_1c[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_10031a7c = local_1c;
  piVar4 = (int *)local_1c[4];
  i = *piVar4;
  if ((i == -1) || ((local_28 & piVar4[i + 0x11]) == 0 && (local_38 & piVar4[i + 0x31]) == 0)) {
    i = 0;
    while ((local_28 & piVar4[i + 0x11]) == 0 && (local_38 & piVar4[i + 0x31]) == 0) {
      i = i + 1;
    }
  }
  piVar2 = piVar4 + i * 0x81 + 0x51;
  j = 0;
  local_20 = local_28 & piVar4[i + 0x11];
  if (local_20 == 0) {
    j = 0x20;
    local_20 = local_38 & piVar4[i + 0x31];
  }
  for (; -1 < (int)local_20; local_20 = local_20 << 1) {
    j = j + 1;
  }
  piVar8 = (int *)piVar2[j * 2 + 1];
  iVar5 = *piVar8 - uVar9;
  local_18 = (iVar5 >> 4) + -1;
  if (0x3f < local_18) {
    local_18 = 0x3f;
  }
  if (local_18 != j) {
    if (piVar8[1] == piVar8[2]) {
      bVar6 = (byte)j;
      if (j < 0x20) {
        piVar4[i + 0x11] = piVar4[i + 0x11] & ~(0x80000000U >> (bVar6 & 0x1f));
        *(char *)((int)piVar4 + j + 4) = *(char *)((int)piVar4 + j + 4) + -1;
        if (*(char *)((int)piVar4 + j + 4) == '\0') {
          *local_1c = *local_1c & ~(0x80000000U >> (bVar6 & 0x1f));
        }
      }
      else {
        piVar4[i + 0x31] = piVar4[i + 0x31] & ~(0x80000000U >> (bVar6 - 0x20 & 0x1f));
        *(char *)((int)piVar4 + j + 4) = *(char *)((int)piVar4 + j + 4) + -1;
        if (*(char *)((int)piVar4 + j + 4) == '\0') {
          local_1c[1] = local_1c[1] & ~(0x80000000U >> (bVar6 - 0x20 & 0x1f));
        }
      }
    }
    *(int *)(piVar8[2] + 4) = piVar8[1];
    *(int *)(piVar8[1] + 8) = piVar8[2];
    if (iVar5 != 0) {
      piVar1 = piVar2 + local_18 * 2;
      piVar8[1] = piVar1[1];
      piVar8[2] = (int)piVar1;
      piVar1[1] = (int)piVar8;
      *(int **)(piVar8[1] + 8) = piVar8;
      if (piVar8[1] == piVar8[2]) {
        bVar6 = (byte)local_18;
        if (local_18 < 0x20) {
          cVar3 = *(char *)((int)piVar4 + local_18 + 4);
          *(char *)((int)piVar4 + local_18 + 4) = *(char *)((int)piVar4 + local_18 + 4) + '\x01';
          if (cVar3 == '\0') {
            *local_1c = *local_1c | 0x80000000U >> (bVar6 & 0x1f);
          }
          piVar4[i + 0x11] = piVar4[i + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
        }
        else {
          cVar3 = *(char *)((int)piVar4 + local_18 + 4);
          *(char *)((int)piVar4 + local_18 + 4) = *(char *)((int)piVar4 + local_18 + 4) + '\x01';
          if (cVar3 == '\0') {
            local_1c[1] = local_1c[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
          }
          piVar4[i + 0x31] = piVar4[i + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
      }
    }
  }
  if (iVar5 != 0) {
    *piVar8 = iVar5;
    *(int *)((int)piVar8 + iVar5 + -4) = iVar5;
  }
  piVar8 = (int *)((int)piVar8 + iVar5);
  *piVar8 = uVar9 + 1;
  *(uint *)((int)piVar8 + (uVar9 - 4)) = uVar9 + 1;
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + 1;
  if (((iVar5 == 0) && (local_1c == DAT_10031a80)) && (i == DAT_10031a78)) {
    DAT_10031a80 = (uint *)0x0;
  }
  *piVar4 = i;
  return piVar8 + 1;
}


