/* Rsc.dll — wtombenv.c: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10014230 FUN_10014230 ==== */

int __cdecl FUN_10014230(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d8d8;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10031794 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10031794 = 2;
    }
    else {
      DAT_10031794 = 1;
    }
  }
  if (DAT_10031794 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10031794 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoA(param_1,param_2,&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffc8,-1,(LPWSTR)0x0,0);
        }
        else {
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffc8,-1,param_3,param_4);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}


/* ==== 100143d0 FUN_100143d0 ==== */

int __cdecl FUN_100143d0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d8e8;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10031798 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10031798 = 2;
    }
    else {
      DAT_10031798 = 1;
    }
  }
  if (DAT_10031798 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10031798 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
        else {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,param_3,param_4,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}


/* ==== 10014580 FUN_10014580 ==== */

int __cdecl FUN_10014580(int param_1)

{
  return param_1 + 0x20;
}


/* ==== 10014590 FUN_10014590 ==== */

uint __cdecl FUN_10014590(uint param_1)

{
  bool bVar1;
  
  if (DAT_1003163c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_100317c4);
    bVar1 = DAT_100317b4 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_100317c4);
      FUN_100073f0(0x13);
    }
    param_1 = FUN_10014630(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_100317c4);
    }
    else {
      FUN_10007490(0x13);
    }
  }
  return param_1;
}


/* ==== 10014630 FUN_10014630 ==== */

uint __cdecl FUN_10014630(uint param_1)

{
  int iVar1;
  uint local_14;
  uint local_10;
  char local_c;
  char local_b;
  undefined1 local_a;
  int local_8;
  
  if (DAT_1003163c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_10030214 < 2) {
        local_14 = *(ushort *)(PTR_s__10030008 + param_1 * 2) & 1;
      }
      else {
        local_14 = FUN_1000b640(param_1,1);
      }
      if (local_14 == 0) {
        return param_1;
      }
    }
    if ((*(ushort *)(PTR_s__10030008 + ((int)param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_c = (char)param_1;
      local_b = '\0';
      local_8 = 1;
    }
    else {
      local_c = (char)(param_1 >> 8);
      local_b = (char)param_1;
      local_a = 0;
      local_8 = 2;
    }
    iVar1 = FUN_1000e550(DAT_1003163c,0x100,&local_c,local_8,(LPWSTR)&local_10,3,0,1);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        param_1 = local_10 & 0xff;
      }
      else {
        param_1 = local_10 & 0xff | (local_10 >> 8 & 0xff) << 8;
      }
    }
  }
  return param_1;
}


/* ==== 10014760 __allmul ==== */

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* ==== 100147a0 FUN_100147a0 ==== */

char * __cdecl FUN_100147a0(char *var_name)

{
  char *pcVar1;
  
  FUN_100073f0(0xc);
  pcVar1 = FID_conflict___getenv_lk(var_name);
  FUN_10007490(0xc);
  return pcVar1;
}


/* ==== 100147d0 FID_conflict:__getenv_lk ==== */

/* Library Function - Multiple Matches With Different Base Names
    __getenv_lk
    _getenv
   
   Library: Visual Studio 2003 Debug */

char * __cdecl FID_conflict___getenv_lk(char *_VarName)

{
  int iVar1;
  size_t _MaxCount;
  size_t _strlen_result;
  int *local_c;
  
  local_c = DAT_100314c8;
  if (DAT_10031a98 != 0) {
    if ((DAT_100314c8 == (int *)0x0) && (DAT_100314d0 != 0)) {
      iVar1 = FUN_100148f0();
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      local_c = DAT_100314c8;
    }
    DAT_100314c8 = local_c;
    if ((local_c != (int *)0x0) && (_VarName != (char *)0x0)) {
      _MaxCount = _strlen(_VarName);
      for (; *local_c != 0; local_c = local_c + 1) {
        _strlen_result = _strlen((char *)*local_c);
        if (((_MaxCount < _strlen_result) && (*(char *)(*local_c + _MaxCount) == '=')) &&
           (iVar1 = __mbsnbicoll((uchar *)*local_c,(uchar *)_VarName,_MaxCount), iVar1 == 0)) {
          return (char *)(*local_c + 1 + _MaxCount);
        }
      }
    }
  }
  return (char *)0x0;
}


/* ==== 100148a0 __mbsnbicoll ==== */

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_100149a0(DAT_10031a64,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_100317c8);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}


/* ==== 100148f0 FUN_100148f0 ==== */

undefined4 FUN_100148f0(void)

{
  void *cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *local_8;
  
  local_8 = DAT_100314d0;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    cbMultiByte = (void *)WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
    if (cbMultiByte == (void *)0x0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)FUN_10003710(cbMultiByte,2,0x1002d8f4,0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,(int)cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_10014df0(lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}


