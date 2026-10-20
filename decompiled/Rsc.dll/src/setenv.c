/* Rsc.dll — setenv.c: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10014da0 FUN_10014da0 ==== */

int __cdecl FUN_10014da0(char *param_1,int param_2)

{
  int local_c;
  char *local_8;
  
  local_c = param_2;
  for (local_8 = param_1; (local_c != 0 && (*local_8 != '\0')); local_8 = local_8 + 1) {
    local_c = local_c + -1;
  }
  if (*local_8 == '\0') {
    param_2 = (int)local_8 - (int)param_1;
  }
  return param_2;
}


/* ==== 10014df0 FUN_10014df0 ==== */

undefined4 __cdecl FUN_10014df0(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *dst;
  size_t _strlen_result;
  uint *lpName;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  int i;
  
  if (((param_1 == (uint *)0x0) ||
      (puVar1 = (uint *)FUN_10015240((byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  bVar4 = *(byte *)((int)puVar1 + 1) == 0;
  if (DAT_100314c8 == DAT_100314cc) {
    DAT_100314c8 = copy_environ(DAT_100314c8);
  }
  if (DAT_100314c8 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_100314d0 == (undefined4 *)0x0)) {
      if (bVar4) {
        return 0;
      }
      DAT_100314c8 = (int *)FUN_10003710((void *)0x4,2,0x1002d960,0x87);
      if (DAT_100314c8 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_100314c8 = 0;
      if (DAT_100314d0 == (undefined4 *)0x0) {
        DAT_100314d0 = (undefined4 *)FUN_10003710((void *)0x4,2,0x1002d960,0x8e);
        if (DAT_100314d0 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100314d0 = 0;
      }
    }
    else {
      iVar2 = FUN_100148f0();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  dst = DAT_100314c8;
  i = findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((i < 0) || (*dst == 0)) {
    if (bVar4) {
      return 0;
    }
    if (i < 0) {
      i = -i;
    }
    dst = FUN_10003ba0(dst,(void *)(i * 4 + 8),2,0x1002d960,0xce);
    if (dst == (int *)0x0) {
      return 0xffffffff;
    }
    dst[i] = (int)param_1;
    dst[i + 1] = 0;
    DAT_100314c8 = dst;
  }
  else if (bVar4) {
    FUN_100041a0((void *)dst[i],2);
    for (; dst[i] != 0; i = i + 1) {
      dst[i] = dst[i + 1];
    }
    dst = FUN_10003ba0(dst,(void *)(i << 2),2,0x1002d960,0xb9);
    if (dst != (int *)0x0) {
      DAT_100314c8 = dst;
    }
  }
  else {
    dst[i] = (int)param_1;
  }
  if (param_2 != 0) {
    iVar2 = 0xe5;
    pcVar6 = "setenv.c";
    uVar5 = 2;
    _strlen_result = _strlen((char *)param_1);
    lpName = (uint *)FUN_10003710((void *)(_strlen_result + 2),uVar5,(int)pcVar6,iVar2);
    if (lpName != (uint *)0x0) {
      FUN_10001ec0(lpName,param_1);
      puVar3 = (undefined1 *)((int)lpName + ((int)puVar1 - (int)param_1));
      *puVar3 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar4 & (uint)(puVar3 + 1)));
      FUN_100041a0(lpName,2);
    }
  }
  return 0;
}


/* ==== 100150d0 findenv ==== */

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *str1,size_t max_count)

{
  int __mbsnbicoll_result;
  int *local_8;
  
  local_8 = DAT_100314c8;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_100314c8 >> 2);
    }
    __mbsnbicoll_result = __mbsnbicoll(str1,(uchar *)*local_8,max_count);
    if ((__mbsnbicoll_result == 0) &&
       ((*(char *)(*local_8 + max_count) == '=' || (*(char *)(*local_8 + max_count) == '\0'))))
    break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_100314c8 >> 2;
}


/* ==== 10015150 copy_environ ==== */

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2003 Debug */

int * __cdecl copy_environ(int *param_1)

{
  int *piVar1;
  size_t _strlen_result;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int i;
  int *local_10;
  int *local_c;
  
  i = 0;
  local_10 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    while (iVar4 = *local_10, local_10 = local_10 + 1, iVar4 != 0) {
      i = i + 1;
    }
    piVar1 = (int *)FUN_10003710((void *)(i * 4 + 4),2,0x1002d960,0x146);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_c = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      iVar4 = 0x14f;
      pcVar3 = "setenv.c";
      uVar2 = 2;
      _strlen_result = _strlen((char *)*local_10);
      iVar4 = FUN_10003710((void *)(_strlen_result + 1),uVar2,(int)pcVar3,iVar4);
      *local_c = iVar4;
      if (*local_c != 0) {
        FUN_10001ec0((uint *)*local_c,(uint *)*local_10);
      }
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  return piVar1;
}


/* ==== 10015240 FUN_10015240 ==== */

byte * __cdecl FUN_10015240(byte *str,uint val)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_1003184c == 0) {
    str = (byte *)_strchr((char *)str,val);
  }
  else {
    FUN_100073f0(0x19);
    while( true ) {
      uVar1 = (ushort)*str;
      if (uVar1 == 0) break;
      if (((&DAT_10031961)[uVar1] & 4) == 0) {
        pbVar2 = str;
        if (val == uVar1) break;
      }
      else {
        pbVar2 = str + 1;
        if (*pbVar2 == 0) {
          FUN_10007490(0x19);
          return (byte *)0x0;
        }
        if (val == CONCAT11(*str,*pbVar2)) {
          FUN_10007490(0x19);
          return str;
        }
      }
      str = pbVar2;
      str = str + 1;
    }
    FUN_10007490(0x19);
    if (val != uVar1) {
      str = (byte *)0x0;
    }
  }
  return str;
}


/* ==== 10015340 _strchr ==== */

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


/* ==== 10015574 RtlUnwind ==== */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x10015574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


/* ==== 100155d0 FUN_100155d0 ==== */

DWORD __cdecl FUN_100155d0(uint filehandle)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD local_8;
  
  if ((filehandle < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_100029d0(filehandle);
    DVar3 = FUN_10006ab0(filehandle,0,1);
    if (DVar3 == 0xffffffff) {
      local_8 = 0xffffffff;
    }
    else {
      local_8 = FUN_10006ab0(filehandle,0,2);
      if (DVar3 != local_8) {
        FUN_10006ab0(filehandle,DVar3,0);
      }
    }
    __unlock_fhandle(filehandle);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    local_8 = 0xffffffff;
  }
  return local_8;
}


/* ==== 10015690 FUN_10015690 ==== */

undefined4 __cdecl FUN_10015690(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

