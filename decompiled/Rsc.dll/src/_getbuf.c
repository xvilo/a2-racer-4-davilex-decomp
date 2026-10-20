/* Rsc.dll — _getbuf.c: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 1000b870 FUN_1000b870 ==== */

int __cdecl FUN_1000b870(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  DWORD *pDVar4;
  int iVar5;
  int i;
  DWORD local_41c;
  char local_418 [1028];
  DWORD local_14;
  ulong local_10;
  char *local_c;
  char *local_8;
  
  local_14 = 0;
  i = 0;
  if (param_3 == 0) {
    i = 0;
  }
  else {
    iVar5 = (int)param_1 >> 5;
    if ((*(byte *)((&DAT_10031ac0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x20) != 0) {
      FUN_10006ab0(param_1,0,2);
    }
    if (((int)*(char *)((&DAT_10031ac0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) == 0) {
      BVar2 = WriteFile(*(HANDLE *)((&DAT_10031ac0)[iVar5] + (param_1 & 0x1f) * 0x24),param_2,
                        param_3,&local_41c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        local_10 = GetLastError();
      }
      else {
        local_10 = 0;
        local_14 = local_41c;
      }
    }
    else {
      local_8 = param_2;
      local_10 = 0;
      do {
        if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
        local_c = local_418;
        while (((int)local_c - (int)local_418 < 0x400 &&
               ((uint)((int)local_8 - (int)param_2) < param_3))) {
          cVar1 = *local_8;
          local_8 = local_8 + 1;
          if (cVar1 == '\n') {
            i = i + 1;
            *local_c = '\r';
            local_c = local_c + 1;
          }
          *local_c = cVar1;
          local_c = local_c + 1;
        }
        BVar2 = WriteFile(*(HANDLE *)((&DAT_10031ac0)[iVar5] + (param_1 & 0x1f) * 0x24),local_418,
                          (int)local_c - (int)local_418,&local_41c,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_10 = GetLastError();
          break;
        }
        local_14 = local_14 + local_41c;
      } while ((int)local_c - (int)local_418 <= (int)local_41c);
    }
    if (local_14 == 0) {
      if (local_10 == 0) {
        if (((*(byte *)((&DAT_10031ac0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) ||
           (*param_2 != '\x1a')) {
          puVar3 = (undefined4 *)FUN_10006f20();
          *puVar3 = 0x1c;
          pDVar4 = FUN_10006f30();
          *pDVar4 = 0;
          i = -1;
        }
        else {
          i = 0;
        }
      }
      else {
        if (local_10 == 5) {
          puVar3 = (undefined4 *)FUN_10006f20();
          *puVar3 = 9;
          pDVar4 = FUN_10006f30();
          *pDVar4 = local_10;
        }
        else {
          __dosmaperr(local_10);
        }
        i = -1;
      }
    }
    else {
      i = local_14 - i;
    }
  }
  return i;
}


/* ==== 1000baf0 FUN_1000baf0 ==== */

void __cdecl FUN_1000baf0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cee8,0x2e,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_1003142c = DAT_1003142c + 1;
  uVar3 = FUN_10003710((void *)0x1000,2,0x1002cee8,0x3b);
  param_1[2] = uVar3;
  if (param_1[2] == 0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return;
}


/* ==== 1000bbc0 FID_conflict:__open ==== */

/* Library Function - Multiple Matches With Different Base Names
    __open
    __wopen
   
   Library: Visual Studio 2003 Debug */

int __cdecl FID_conflict___open(char *_Filename,int _OpenFlag,...)

{
  uint uVar1;
  uint in_stack_0000000c;
  
  uVar1 = FUN_1000bc00(_Filename,_OpenFlag,0x40,in_stack_0000000c);
  return uVar1;
}


/* ==== 1000bc00 FUN_1000bc00 ==== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_1000bc00(LPCSTR param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte local_3c;
  uint local_38;
  char local_34 [4];
  undefined4 local_30;
  uint local_2c;
  _SECURITY_ATTRIBUTES security_attributes;
  DWORD local_1c;
  uint filehandle;
  uint local_14;
  DWORD local_10;
  DWORD local_c;
  HANDLE local_8;
  
  security_attributes.nLength = 0xc;
  security_attributes.lpSecurityDescriptor = (LPVOID)0x0;
  bVar6 = (param_2 & 0x80) == 0;
  if (bVar6) {
    local_3c = 0;
  }
  else {
    local_3c = 0x10;
  }
  security_attributes.bInheritHandle = (BOOL)bVar6;
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x4000) == 0) {
      if (DAT_10031630 != 0x8000) {
        local_3c = local_3c | 0x80;
      }
    }
    else {
      local_3c = local_3c | 0x80;
    }
  }
  uVar5 = param_2 & 3;
  if (uVar5 == 0) {
    local_38 = 0x80000000;
  }
  else if (uVar5 == 1) {
    local_38 = 0x40000000;
  }
  else {
    if (uVar5 != 2) {
      puVar1 = (undefined4 *)FUN_10006f20();
      *puVar1 = 0x16;
      pDVar2 = FUN_10006f30();
      *pDVar2 = 0;
      return 0xffffffff;
    }
    local_38 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    local_c = 0;
    break;
  default:
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 0x16;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    return 0xffffffff;
  case 0x20:
    local_c = 1;
    break;
  case 0x30:
    local_c = 2;
    break;
  case 0x40:
    local_c = 3;
  }
  uVar5 = param_2 & 0x700;
  if (uVar5 < 0x401) {
    if (uVar5 != 0x400) {
      if (0x200 < uVar5) {
        if (uVar5 != 0x300) {
LAB_1000bdc6:
          puVar1 = (undefined4 *)FUN_10006f20();
          *puVar1 = 0x16;
          pDVar2 = FUN_10006f30();
          *pDVar2 = 0;
          return 0xffffffff;
        }
        local_1c = 2;
        goto LAB_1000bde4;
      }
      if (uVar5 == 0x200) goto LAB_1000bdb4;
      if (uVar5 != 0) {
        if (uVar5 != 0x100) goto LAB_1000bdc6;
        local_1c = 4;
        goto LAB_1000bde4;
      }
    }
    local_1c = 3;
  }
  else {
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) {
LAB_1000bdb4:
        local_1c = 5;
        goto LAB_1000bde4;
      }
      if (uVar5 != 0x700) goto LAB_1000bdc6;
    }
    local_1c = 1;
  }
LAB_1000bde4:
  local_2c = 0x80;
  if ((param_2 & 0x100) != 0) {
    local_14 = param_4;
    local_30 = 0;
    if ((param_4 & ~DAT_100314a8 & 0x80) == 0) {
      local_2c = 1;
    }
  }
  if ((param_2 & 0x40) != 0) {
    local_2c = local_2c | 0x4000000;
    local_38 = local_38 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    local_2c = local_2c | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      local_2c = local_2c | 0x10000000;
    }
  }
  else {
    local_2c = local_2c | 0x8000000;
  }
  filehandle = FUN_100024c0();
  if (filehandle == 0xffffffff) {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 0x18;
    pDVar2 = FUN_10006f30();
    *pDVar2 = 0;
    filehandle = 0xffffffff;
  }
  else {
    local_8 = CreateFileA(param_1,local_38,local_c,&security_attributes,local_1c,local_2c,
                          (HANDLE)0x0);
    if (local_8 == (HANDLE)0xffffffff) {
      DVar3 = GetLastError();
      __dosmaperr(DVar3);
      __unlock_fhandle(filehandle);
      filehandle = 0xffffffff;
    }
    else {
      local_10 = GetFileType(local_8);
      if (local_10 == 0) {
        CloseHandle(local_8);
        DVar3 = GetLastError();
        __dosmaperr(DVar3);
        __unlock_fhandle(filehandle);
        filehandle = 0xffffffff;
      }
      else {
        if (local_10 == 2) {
          local_3c = local_3c | 0x40;
        }
        else if (local_10 == 3) {
          local_3c = local_3c | 8;
        }
        __set_osfhnd(filehandle,(intptr_t)local_8);
        *(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) =
             local_3c | 1;
        if ((((local_3c & 0x48) == 0) && (((int)(char)(local_3c | 1) & 0x80U) != 0)) &&
           ((param_2 & 2) != 0)) {
          DVar3 = FUN_10006ab0(filehandle,-1,2);
          if (DVar3 == 0xffffffff) {
            pDVar2 = FUN_10006f30();
            if (*pDVar2 != 0x83) {
              FUN_10005680(filehandle);
              __unlock_fhandle(filehandle);
              return 0xffffffff;
            }
          }
          else {
            local_34[0] = '\0';
            iVar4 = FUN_10005d80(filehandle,local_34,1);
            if (((iVar4 == 0) && (local_34[0] == '\x1a')) &&
               (iVar4 = FUN_1000e320(filehandle,DVar3), iVar4 == -1)) {
              FUN_10005680(filehandle);
              __unlock_fhandle(filehandle);
              return 0xffffffff;
            }
            DVar3 = FUN_10006ab0(filehandle,0,0);
            if (DVar3 == 0xffffffff) {
              FUN_10005680(filehandle);
              __unlock_fhandle(filehandle);
              return 0xffffffff;
            }
          }
        }
        if (((local_3c & 0x48) == 0) && ((param_2 & 8) != 0)) {
          *(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) =
               *(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) |
               0x20;
        }
        __unlock_fhandle(filehandle);
      }
    }
  }
  return filehandle;
}


/* ==== 1000c160 __XcptFilter ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Debug */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int *piVar5;
  int iVar6;
  int i;
  
  pDVar4 = FUN_100077b0();
  piVar5 = FUN_1000c320(_ExceptionNum,(int *)pDVar4[0x14]);
  if ((piVar5 == (int *)0x0) || (piVar5[2] == 0)) {
    iVar6 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (piVar5[2] == 5) {
    piVar5[2] = 0;
    iVar6 = 1;
  }
  else if (piVar5[2] == 1) {
    iVar6 = -1;
  }
  else {
    pcVar1 = (code *)piVar5[2];
    DVar2 = pDVar4[0x15];
    pDVar4[0x15] = (DWORD)_ExceptionPtr;
    if (piVar5[1] == 8) {
      for (i = DAT_10030298; i < DAT_10030298 + _DAT_1003029c; i = i + 1) {
        *(undefined4 *)(pDVar4[0x14] + 8 + i * 0xc) = 0;
      }
      DVar3 = pDVar4[0x16];
      if (*piVar5 == -0x3fffff72) {
        pDVar4[0x16] = 0x83;
      }
      else if (*piVar5 == -0x3fffff70) {
        pDVar4[0x16] = 0x81;
      }
      else if (*piVar5 == -0x3fffff6f) {
        pDVar4[0x16] = 0x84;
      }
      else if (*piVar5 == -0x3fffff6d) {
        pDVar4[0x16] = 0x85;
      }
      else if (*piVar5 == -0x3fffff73) {
        pDVar4[0x16] = 0x82;
      }
      else if (*piVar5 == -0x3fffff71) {
        pDVar4[0x16] = 0x86;
      }
      else if (*piVar5 == -0x3fffff6e) {
        pDVar4[0x16] = 0x8a;
      }
      (*pcVar1)(8,pDVar4[0x16]);
      pDVar4[0x16] = DVar3;
    }
    else {
      piVar5[2] = 0;
      (*pcVar1)(piVar5[1]);
    }
    pDVar4[0x15] = DVar2;
    iVar6 = -1;
  }
  return iVar6;
}


/* ==== 1000c320 FUN_1000c320 ==== */

int * __cdecl FUN_1000c320(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_100302a4 * 3);
  if ((param_2 + DAT_100302a4 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}


/* ==== 1000c380 FUN_1000c380 ==== */

undefined4 __cdecl FUN_1000c380(UINT param_1)

{
  UINT CodePage;
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *local_2c;
  uint j;
  _cpinfo cpinfo;
  uint k;
  byte *local_c;
  uint i;
  
  FUN_100073f0(0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_100317c8) {
    FUN_10007490(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_1000c830();
    FUN_10007490(0x19);
    uVar1 = 0;
  }
  else {
    for (i = 0; i < 5; i = i + 1) {
      if (*(UINT *)(&DAT_100302b0 + i * 0x30) == CodePage) {
        for (j = 0; j < 0x101; j = j + 1) {
          (&DAT_10031960)[j] = 0;
        }
        for (k = 0; k < 4; k = k + 1) {
          for (local_c = &DAT_100302c0 + k * 8 + i * 0x30; (*local_c != 0 && (local_c[1] != 0));
              local_c = local_c + 2) {
            for (j = (uint)*local_c; j <= local_c[1]; j = j + 1) {
              (&DAT_10031961)[j] = (&DAT_10031961)[j] | (&DAT_100302a8)[k];
            }
          }
        }
        DAT_1003184c = 1;
        DAT_100317c8 = CodePage;
        DAT_10031a64 = FUN_1000c730(CodePage);
        for (k = 0; k < 6; k = k + 1) {
          *(undefined2 *)(&DAT_10031840 + k * 2) = *(undefined2 *)(&DAT_100302b4 + k * 2 + i * 0x30)
          ;
        }
        FUN_1000c830();
        FUN_10007490(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&cpinfo);
    if (BVar2 == 1) {
      for (j = 0; j < 0x101; j = j + 1) {
        (&DAT_10031960)[j] = 0;
      }
      DAT_10031a64 = 0;
      if (cpinfo.MaxCharSize < 2) {
        DAT_1003184c = 0;
        DAT_100317c8 = CodePage;
      }
      else {
        DAT_100317c8 = CodePage;
        for (local_2c = cpinfo.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (j = (uint)*local_2c; j <= local_2c[1]; j = j + 1) {
            (&DAT_10031961)[j] = (&DAT_10031961)[j] | 4;
          }
        }
        for (j = 1; j < 0xff; j = j + 1) {
          (&DAT_10031961)[j] = (&DAT_10031961)[j] | 8;
        }
        DAT_10031a64 = FUN_1000c730(DAT_100317c8);
        DAT_1003184c = 1;
      }
      for (k = 0; k < 6; k = k + 1) {
        *(undefined2 *)(&DAT_10031840 + k * 2) = 0;
      }
      FUN_1000c830();
      FUN_10007490(0x19);
      uVar1 = 0;
    }
    else if (DAT_10031628 == 0) {
      FUN_10007490(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_1000c830();
      FUN_10007490(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}


