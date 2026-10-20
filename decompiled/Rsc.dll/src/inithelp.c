/* Rsc.dll — inithelp.c: 12 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10011c70 FUN_10011c70 ==== */

undefined1 * FUN_10011c70(void)

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
  for (i = 0; i < 0xc; i = i + 1) {
    _strlen_result = _strlen(*(char **)(puVar1 + i * 4 + 0x38));
    _strlen_result_2 = _strlen(*(char **)(puVar1 + i * 4 + 0x68));
    local_c = _strlen_result_2 + local_c + 2 + _strlen_result;
  }
  puVar2 = (undefined1 *)FUN_100036f0((void *)(local_c + 1));
  if (puVar2 != (undefined1 *)0x0) {
    local_18 = puVar2;
    for (i = 0; i < 0xc; i = i + 1) {
      *local_18 = 0x3a;
      str = FUN_10001ec0((uint *)(local_18 + 1),*(uint **)(puVar1 + i * 4 + 0x38));
      _strlen_result = _strlen((char *)str);
      puVar3 = (undefined1 *)((int)(local_18 + 1) + _strlen_result);
      *puVar3 = 0x3a;
      str = (uint *)(puVar3 + 1);
      _Str = FUN_10001ec0(str,*(uint **)(puVar1 + i * 4 + 0x68));
      _strlen_result = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)str + _strlen_result);
    }
    *local_18 = 0;
  }
  return puVar2;
}


/* ==== 10011da0 FUN_10011da0 ==== */

undefined4 * FUN_10011da0(void)

{
  undefined *puVar1;
  size_t _strlen_result_2;
  size_t _strlen_result_3;
  size_t _strlen_result_4;
  size_t _strlen_result_5;
  size_t _strlen_result;
  undefined4 *puVar2;
  uint *str;
  uint *local_18;
  uint i;
  int local_c;
  
  puVar1 = PTR_PTR_10030ca8;
  local_c = 0;
  for (i = 0; i < 7; i = i + 1) {
    _strlen_result_2 = _strlen(*(char **)(puVar1 + i * 4));
    _strlen_result_3 = _strlen(*(char **)(puVar1 + i * 4 + 0x1c));
    local_c = _strlen_result_3 + local_c + 2 + _strlen_result_2;
  }
  for (i = 0; i < 0xc; i = i + 1) {
    _strlen_result_2 = _strlen(*(char **)(puVar1 + i * 4 + 0x38));
    _strlen_result_3 = _strlen(*(char **)(puVar1 + i * 4 + 0x68));
    local_c = _strlen_result_3 + local_c + 2 + _strlen_result_2;
  }
  _strlen_result_2 = _strlen(*(char **)(puVar1 + 0x98));
  _strlen_result_3 = _strlen(*(char **)(puVar1 + 0x9c));
  _strlen_result_4 = _strlen(*(char **)(puVar1 + 0xa0));
  _strlen_result_5 = _strlen(*(char **)(puVar1 + 0xa4));
  _strlen_result = _strlen(*(char **)(puVar1 + 0xa8));
  puVar2 = (undefined4 *)
           FUN_100036f0((void *)(_strlen_result_3 + local_c + _strlen_result_2 + _strlen_result_4 +
                                 _strlen_result_5 + _strlen_result + 0xb1));
  if (puVar2 != (undefined4 *)0x0) {
    local_18 = puVar2 + 0x2b;
    FUN_100061d0(puVar2,(undefined4 *)PTR_PTR_10030ca8,0xac);
    for (i = 0; i < 7; i = i + 1) {
      puVar2[i] = local_18;
      str = FUN_10001ec0(local_18,*(uint **)(puVar1 + i * 4));
      _strlen_result_2 = _strlen((char *)str);
      local_18 = (uint *)((int)local_18 + _strlen_result_2 + 1);
      puVar2[i + 7] = local_18;
      str = FUN_10001ec0(local_18,*(uint **)(puVar1 + i * 4 + 0x1c));
      _strlen_result_2 = _strlen((char *)str);
      local_18 = (uint *)((int)local_18 + _strlen_result_2 + 1);
    }
    for (i = 0; i < 0xc; i = i + 1) {
      puVar2[i + 0xe] = local_18;
      str = FUN_10001ec0(local_18,*(uint **)(puVar1 + i * 4 + 0x38));
      _strlen_result_2 = _strlen((char *)str);
      local_18 = (uint *)((int)local_18 + _strlen_result_2 + 1);
      puVar2[i + 0x1a] = local_18;
      str = FUN_10001ec0(local_18,*(uint **)(puVar1 + i * 4 + 0x68));
      _strlen_result_2 = _strlen((char *)str);
      local_18 = (uint *)((int)local_18 + _strlen_result_2 + 1);
    }
    puVar2[0x26] = local_18;
    str = FUN_10001ec0(local_18,*(uint **)(puVar1 + 0x98));
    _strlen_result_2 = _strlen((char *)str);
    local_18 = (uint *)((int)local_18 + _strlen_result_2 + 1);
    puVar2[0x27] = local_18;
    str = FUN_10001ec0(local_18,*(uint **)(puVar1 + 0x9c));
    _strlen_result_2 = _strlen((char *)str);
    local_18 = (uint *)((int)local_18 + _strlen_result_2 + 1);
    puVar2[0x28] = local_18;
    str = FUN_10001ec0(local_18,*(uint **)(puVar1 + 0xa0));
    _strlen_result_2 = _strlen((char *)str);
    local_18 = (uint *)((int)local_18 + _strlen_result_2 + 1);
    puVar2[0x29] = local_18;
    str = FUN_10001ec0(local_18,*(uint **)(puVar1 + 0xa4));
    _strlen_result_2 = _strlen((char *)str);
    puVar2[0x2a] = (int)local_18 + _strlen_result_2 + 1;
  }
  return puVar2;
}


/* ==== 10012110 FUN_10012110 ==== */

void __cdecl FUN_10012110(byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  FUN_10012130(param_1,param_2,param_3,param_4,(undefined *)0x0);
  return;
}


/* ==== 10012130 FUN_10012130 ==== */

int __cdecl FUN_10012130(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined *local_14;
  uint i;
  uint local_c;
  undefined *local_8;
  
  i = param_2;
  InterlockedIncrement(&DAT_100317c4);
  bVar3 = DAT_100317b4 != 0;
  if (bVar3) {
    InterlockedDecrement(&DAT_100317c4);
    FUN_100073f0(0x13);
  }
  local_c = (uint)bVar3;
  if (param_5 == (undefined *)0x0) {
    local_14 = PTR_PTR_10030ca8;
  }
  else {
    local_14 = param_5;
  }
  local_8 = local_14;
  for (; (i != 0 && (*param_3 != 0)); param_3 = param_3 + 1) {
    if (*param_3 == 0x25) {
      bVar3 = param_3[1] == 0x23;
      pbVar1 = param_3 + 1;
      if (bVar3) {
        pbVar1 = param_3 + 2;
      }
      param_3 = pbVar1;
      DAT_100317a0 = (uint)bVar3;
      FUN_100122c0(*param_3,param_4,(int *)&param_1,&i,(int)local_8);
    }
    else {
      if (((*(ushort *)(PTR_s__10030008 + (uint)*param_3 * 2) & 0x8000) != 0) && (1 < i)) {
        *param_1 = *param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        i = i - 1;
      }
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      i = i - 1;
    }
  }
  if (local_c == 0) {
    InterlockedDecrement(&DAT_100317c4);
  }
  else {
    FUN_10007490(0x13);
  }
  if (i == 0) {
    iVar2 = 0;
  }
  else {
    *param_1 = 0;
    iVar2 = param_2 - i;
  }
  return iVar2;
}


/* ==== 100122c0 FUN_100122c0 ==== */

void __cdecl FUN_100122c0(undefined1 param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  int local_c;
  int i;
  
  switch(param_1) {
  case 0x25:
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    break;
  case 0x41:
    FID_conflict__store_str(*(char **)(param_5 + 0x1c + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x42:
    FID_conflict__store_str(*(char **)(param_5 + 0x68 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 0x48:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[2],2,param_3,param_4);
    break;
  case 0x49:
    DAT_100317b0 = DAT_100317a0;
    i = param_2[2] % 0xc;
    if (i == 0) {
      i = 0xc;
    }
    FUN_10012930(i,2,param_3,param_4);
    break;
  case 0x4d:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[1],2,param_3,param_4);
    break;
  case 0x53:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(*param_2,2,param_3,param_4);
    break;
  case 0x55:
    local_c = param_2[6];
    goto LAB_1001266d;
  case 0x57:
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_1001266d:
    DAT_100317b0 = DAT_100317a0;
    if (param_2[7] < local_c) {
      i = 0;
    }
    else {
      i = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        i = i + 1;
      }
    }
    FUN_10012930(i,2,param_3,param_4);
    break;
  case 0x58:
    DAT_100317a0 = 0;
    FUN_10012a90(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 0x59:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 0x5a:
  case 0x7a:
    FUN_100138f0();
    FID_conflict__store_str((&PTR_DAT_10030e2c)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 0x61:
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x62:
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 99:
    if (DAT_100317a0 == 0) {
      FUN_10012a90(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10012a90(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_100317a0 = 0;
      FUN_10012a90(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10012a90(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 100:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[3],2,param_3,param_4);
    break;
  case 0x6a:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[7] + 1,3,param_3,param_4);
    break;
  case 0x6d:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[4] + 1,2,param_3,param_4);
    break;
  case 0x70:
    if (param_2[2] < 0xc) {
      FID_conflict__store_str(*(char **)(param_5 + 0x98),param_3,(int *)param_4);
    }
    else {
      FID_conflict__store_str(*(char **)(param_5 + 0x9c),param_3,(int *)param_4);
    }
    break;
  case 0x77:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[6],1,param_3,param_4);
    break;
  case 0x78:
    if (DAT_100317a0 == 0) {
      FUN_10012a90(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_100317a0 = 0;
      FUN_10012a90(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 0x79:
    DAT_100317b0 = DAT_100317a0;
    FUN_10012930(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}


/* ==== 100128e0 FID_conflict:_store_str ==== */

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_str(char *,char * *,unsigned int *)
    __store_str
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl FID_conflict__store_str(char *param_1,int *param_2,int *param_3)

{
  while ((*param_3 != 0 && (*param_1 != '\0'))) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    param_1 = param_1 + 1;
    *param_3 = *param_3 + -1;
  }
  return;
}


/* ==== 10012930 FUN_10012930 ==== */

void __cdecl FUN_10012930(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 i;
  
  i = 0;
  if (DAT_100317b0 == 0) {
    if (param_2 < *param_4) {
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        *(char *)(*param_3 + param_2) = (char)(param_1 % 10) + '0';
        param_1 = param_1 / 10;
        i = i + 1;
      }
      *param_3 = *param_3 + i;
      *param_4 = *param_4 - i;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    FID_conflict__store_number(param_1,param_3,param_4);
  }
  return;
}


/* ==== 100129e0 FID_conflict:_store_number ==== */

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_number(int,char * *,unsigned int *)
    __store_number
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl FID_conflict__store_number(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  char *local_c;
  char *local_8;
  
  local_8 = (char *)*param_2;
  uVar2 = *param_3;
  while (1 < uVar2) {
    *local_8 = (char)(param_1 % 10) + '0';
    local_8 = local_8 + 1;
    *param_3 = *param_3 - 1;
    param_1 = param_1 / 10;
    if (param_1 < 1) break;
    uVar2 = *param_3;
  }
  local_c = (char *)*param_2;
  *param_2 = (int)local_8;
  local_8 = local_8 + -1;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    local_8 = local_8 + -1;
    *local_c = cVar1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}


/* ==== 10012a90 FUN_10012a90 ==== */

void __cdecl FUN_10012a90(byte *param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  byte *local_14;
  uint i;
  char local_c;
  byte *local_8;
  
LAB_10012a96:
  do {
    if ((*param_1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_c = '\0';
    DAT_100317b0 = 0;
    i = 0;
    local_8 = param_1;
    while (*local_8 == *param_1) {
      i = i + 1;
      local_8 = local_8 + 1;
    }
    switch(*param_1) {
    case 0x27:
      if ((i & 1) == 0) {
        param_1 = param_1 + i;
      }
      else {
        param_1 = param_1 + i;
        while( true ) {
          if ((*param_1 == 0) || (*param_4 == 0)) goto LAB_10012a96;
          if (*param_1 == 0x27) break;
          if (((*(ushort *)(PTR_s__10030008 + (uint)*param_1 * 2) & 0x8000) != 0) && (1 < *param_4))
          {
            *(byte *)*param_3 = *param_1;
            *param_3 = *param_3 + 1;
            param_1 = param_1 + 1;
            *param_4 = *param_4 - 1;
          }
          *(byte *)*param_3 = *param_1;
          *param_3 = *param_3 + 1;
          param_1 = param_1 + 1;
          *param_4 = *param_4 - 1;
        }
        param_1 = param_1 + 1;
      }
      goto LAB_10012a96;
    case 0x41:
    case 0x61:
      uVar1 = FUN_100134c0(param_1,(byte *)"am/pm");
      if (uVar1 == 0) {
        local_8 = param_1 + 5;
      }
      else {
        uVar1 = FUN_100134c0(param_1,(byte *)"a/p");
        if (uVar1 == 0) {
          local_8 = param_1 + 3;
        }
      }
      local_c = 'p';
      break;
    case 0x48:
      if (i == 1) {
        DAT_100317b0 = 1;
      }
      else if (i != 2) break;
      local_c = 'H';
      break;
    case 0x4d:
      switch(i) {
      case 1:
        DAT_100317b0 = 1;
      case 2:
        local_c = 'm';
        break;
      case 3:
        local_c = 'b';
        break;
      case 4:
        local_c = 'B';
      }
      break;
    case 100:
      switch(i) {
      case 1:
        DAT_100317b0 = 1;
      case 2:
        local_c = 'd';
        break;
      case 3:
        local_c = 'a';
        break;
      case 4:
        local_c = 'A';
      }
      break;
    case 0x68:
      if (i == 1) {
        DAT_100317b0 = 1;
      }
      else if (i != 2) break;
      local_c = 'I';
      break;
    case 0x6d:
      if (i == 1) {
        DAT_100317b0 = 1;
      }
      else if (i != 2) break;
      local_c = 'M';
      break;
    case 0x73:
      if (i == 1) {
        DAT_100317b0 = 1;
      }
      else if (i != 2) break;
      local_c = 'S';
      break;
    case 0x74:
      goto switchD_10012b21_caseD_74;
    case 0x79:
      if (i == 2) {
        local_c = 'y';
      }
      else if (i == 4) {
        local_c = 'Y';
      }
    }
    if (local_c == '\0') {
      if ((*(ushort *)(PTR_s__10030008 + (uint)*param_1 * 2) & 0x8000) != 0) {
        *(byte *)*param_3 = *param_1;
        *param_3 = *param_3 + 1;
        param_1 = param_1 + 1;
        *param_4 = *param_4 - 1;
      }
      *(byte *)*param_3 = *param_1;
      *param_3 = *param_3 + 1;
      param_1 = param_1 + 1;
      *param_4 = *param_4 - 1;
    }
    else {
      FUN_100122c0(local_c,(int *)param_2,param_3,param_4,param_5);
      param_1 = local_8;
    }
  } while( true );
switchD_10012b21_caseD_74:
  if (*(int *)(param_2 + 8) < 0xc) {
    local_14 = *(byte **)(param_5 + 0x98);
  }
  else {
    local_14 = *(byte **)(param_5 + 0x9c);
  }
  while ((param_1 = local_8, 0 < (int)i && (*param_4 != 0))) {
    if (((*(ushort *)(PTR_s__10030008 + (uint)*local_14 * 2) & 0x8000) != 0) && (1 < *param_4)) {
      *(byte *)*param_3 = *local_14;
      *param_3 = *param_3 + 1;
      local_14 = local_14 + 1;
      *param_4 = *param_4 - 1;
    }
    *(byte *)*param_3 = *local_14;
    *param_3 = *param_3 + 1;
    local_14 = local_14 + 1;
    *param_4 = *param_4 - 1;
    i = i - 1;
  }
  goto LAB_10012a96;
}


/* ==== 10012fb0 FUN_10012fb0 ==== */

undefined4 __cdecl FUN_10012fb0(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

{
  byte bVar1;
  DWORD DVar2;
  void *pvVar3;
  int iVar4;
  uint local_ac;
  int i;
  CHAR local_90 [128];
  LPSTR local_10;
  void *count;
  int local_8;
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_10014230(param_2,param_3,(LPWSTR)&DAT_100316c8,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      i = 0;
      while( true ) {
        if (3 < i) {
          return 0;
        }
        if (DAT_10030214 < 2) {
          bVar1 = (&DAT_100316c8)[i * 2];
          local_ac = *(ushort *)(PTR_s__10030008 + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_100316c8)[i * 2];
          local_ac = FUN_1000b640((uint)bVar1,4);
        }
        if (local_ac == 0) break;
        *(byte *)param_4 = (char)*param_4 * '\n' + -0x30 + bVar1;
        i = i + 1;
      }
      return 0;
    }
    return 0xffffffff;
  }
  local_10 = local_90;
  local_8 = 0;
  count = (void *)FUN_100143d0(param_2,param_3,local_10,0x80,0);
  if (count == (void *)0x0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (pvVar3 = (void *)FUN_100143d0(param_2,param_3,(LPSTR)0x0,0,0), pvVar3 == (void *)0x0)) ||
       (local_10 = (LPSTR)FUN_10003710(pvVar3,2,0x1002d864,0x58), local_10 == (LPSTR)0x0))
    goto LAB_100130fd;
    local_8 = 1;
    count = (void *)FUN_100143d0(param_2,param_3,local_10,(int)pvVar3,0);
    if (count == (void *)0x0) goto LAB_100130fd;
  }
  iVar4 = FUN_10003710(count,2,0x1002d864,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,(size_t)count);
    if (local_8 != 0) {
      FUN_100041a0(local_10,2);
    }
    return 0;
  }
LAB_100130fd:
  if (local_8 != 0) {
    FUN_100041a0(local_10,2);
  }
  return 0xffffffff;
}


/* ==== 10013240 FUN_10013240 ==== */

undefined * FUN_10013240(void)

{
  return PTR_PTR_10030d98;
}


/* ==== 10013250 FUN_10013250 ==== */

BOOL __cdecl
FUN_10013250(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t _Size;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d870;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_100316d4 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100316d4 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_100316d4 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_100316d4 == 1) {
    BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_100316d4 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (_Size == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_1c = &stack0xffffffbc;
      _memset(&stack0xffffffbc,0,_Size);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        BVar2 = 0;
      }
      else {
        iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,&stack0xffffffbc,_Size,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          local_8 = 1;
          FUN_10008bb0();
          local_8 = 0xffffffff;
          if (&stack0x00000000 == (undefined1 *)0x44) {
            BVar2 = 0;
          }
          else {
            if (param_6 == 0) {
              param_6 = DAT_1003163c;
            }
            *(undefined2 *)(&stack0xffffffbc + param_3 * 2) = 0xffff;
            *(undefined2 *)(&stack0xffffffba + param_3 * 2) = 0xffff;
            local_1c = &stack0xffffffbc;
            BVar2 = GetStringTypeA(param_6,param_1,&stack0xffffffbc,_Size,(LPWORD)&stack0xffffffbc);
            if ((*(short *)(&stack0xffffffba + param_3 * 2) == -1) ||
               (*(short *)(&stack0xffffffbc + param_3 * 2) != -1)) {
              BVar2 = 0;
            }
            else {
              FUN_1000dda0((undefined4 *)param_4,(undefined4 *)&stack0xffffffbc,param_3 << 1);
            }
          }
        }
      }
    }
  }
  else {
    BVar2 = 0;
  }
  ExceptionList = local_14;
  return BVar2;
}


