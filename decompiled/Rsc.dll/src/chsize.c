/* Rsc.dll — chsize.c: 16 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 1000dc30 FUN_1000dc30 ==== */

void __cdecl FUN_1000dc30(uint param_1,int *param_2,int *param_3)

{
  uint local_8;
  
  param_2[1] = param_2[1] + -1;
  if (param_2[1] < 0) {
    local_8 = FUN_1000cc80(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    local_8 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (local_8 == 0xffffffff) {
    *param_3 = -1;
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}


/* ==== 1000dcb0 FUN_1000dcb0 ==== */

void __cdecl FUN_1000dcb0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_1000dc30(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


/* ==== 1000dcf0 FUN_1000dcf0 ==== */

void __cdecl FUN_1000dcf0(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1000dc30((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


/* ==== 1000dd40 FUN_1000dd40 ==== */

undefined4 __cdecl FUN_1000dd40(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}


/* ==== 1000dd60 FUN_1000dd60 ==== */

undefined8 __cdecl FUN_1000dd60(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}


/* ==== 1000dd80 FUN_1000dd80 ==== */

undefined2 __cdecl FUN_1000dd80(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
}


/* ==== 1000dda0 FUN_1000dda0 ==== */

undefined4 * __cdecl FUN_1000dda0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint i;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar3 & 3) == 0) {
      i = param_3 >> 2;
      uVar1 = param_3 & 3;
      if (7 < i) {
        for (; i != 0; i = i - 1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + -1;
          puVar3 = puVar3 + -1;
        }
        switch(uVar1) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1000df57_caseD_2;
        case 3:
          goto switchD_1000df57_caseD_3;
        }
        goto switchD_1000df57_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000df57_caseD_0;
      case 1:
        goto switchD_1000df57_caseD_1;
      case 2:
        goto switchD_1000df57_caseD_2;
      case 3:
        goto switchD_1000df57_caseD_3;
      default:
        i = param_3 - ((uint)puVar3 & 3);
        switch((uint)puVar3 & 3) {
        case 1:
          uVar1 = i & 3;
          *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
          puVar2 = (undefined4 *)((int)puVar2 + -1);
          i = i >> 2;
          puVar3 = (undefined4 *)((int)puVar3 - 1);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + -1;
              puVar3 = puVar3 + -1;
            }
            switch(uVar1) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000df57_caseD_2;
            case 3:
              goto switchD_1000df57_caseD_3;
            }
            goto switchD_1000df57_caseD_1;
          }
          break;
        case 2:
          uVar1 = i & 3;
          *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
          i = i >> 2;
          *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
          puVar2 = (undefined4 *)((int)puVar2 + -2);
          puVar3 = (undefined4 *)((int)puVar3 - 2);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + -1;
              puVar3 = puVar3 + -1;
            }
            switch(uVar1) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000df57_caseD_2;
            case 3:
              goto switchD_1000df57_caseD_3;
            }
            goto switchD_1000df57_caseD_1;
          }
          break;
        case 3:
          uVar1 = i & 3;
          *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
          *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
          i = i >> 2;
          *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)puVar2 + 1);
          puVar2 = (undefined4 *)((int)puVar2 + -3);
          puVar3 = (undefined4 *)((int)puVar3 - 3);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + -1;
              puVar3 = puVar3 + -1;
            }
            switch(uVar1) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1000df57_caseD_2;
            case 3:
              goto switchD_1000df57_caseD_3;
            }
            goto switchD_1000df57_caseD_1;
          }
        }
      }
    }
    switch(i) {
    case 7:
      puVar3[7 - i] = puVar2[7 - i];
    case 6:
      puVar3[6 - i] = puVar2[6 - i];
    case 5:
      puVar3[5 - i] = puVar2[5 - i];
    case 4:
      puVar3[4 - i] = puVar2[4 - i];
    case 3:
      puVar3[3 - i] = puVar2[3 - i];
    case 2:
      puVar3[2 - i] = puVar2[2 - i];
    case 1:
      puVar3[1 - i] = puVar2[1 - i];
      puVar2 = puVar2 + -i;
      puVar3 = puVar3 + -i;
    }
    switch(uVar1) {
    case 1:
switchD_1000df57_caseD_1:
      *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
      return param_1;
    case 2:
switchD_1000df57_caseD_2:
      *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
      *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
      return param_1;
    case 3:
switchD_1000df57_caseD_3:
      *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
      *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
      *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)puVar2 + 1);
      return param_1;
    }
switchD_1000df57_caseD_0:
    return param_1;
  }
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    i = param_3 >> 2;
    uVar1 = param_3 & 3;
    if (7 < i) {
      for (; i != 0; i = i - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      switch(uVar1) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1000ddd5_caseD_2;
      case 3:
        goto switchD_1000ddd5_caseD_3;
      }
      goto switchD_1000ddd5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000ddd5_caseD_0;
    case 1:
      goto switchD_1000ddd5_caseD_1;
    case 2:
      goto switchD_1000ddd5_caseD_2;
    case 3:
      goto switchD_1000ddd5_caseD_3;
    default:
      i = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar1 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        i = i >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar2 = (undefined4 *)((int)param_1 + 3);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(uVar1) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000ddd5_caseD_2;
          case 3:
            goto switchD_1000ddd5_caseD_3;
          }
          goto switchD_1000ddd5_caseD_1;
        }
        break;
      case 2:
        uVar1 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        i = i >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar2 = (undefined4 *)((int)param_1 + 2);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(uVar1) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000ddd5_caseD_2;
          case 3:
            goto switchD_1000ddd5_caseD_3;
          }
          goto switchD_1000ddd5_caseD_1;
        }
        break;
      case 3:
        uVar1 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        i = i >> 2;
        puVar2 = (undefined4 *)((int)param_1 + 1);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(uVar1) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1000ddd5_caseD_2;
          case 3:
            goto switchD_1000ddd5_caseD_3;
          }
          goto switchD_1000ddd5_caseD_1;
        }
      }
    }
  }
  switch(i) {
  case 7:
    puVar2[i - 7] = param_2[i - 7];
  case 6:
    puVar2[i - 6] = param_2[i - 6];
  case 5:
    puVar2[i - 5] = param_2[i - 5];
  case 4:
    puVar2[i - 4] = param_2[i - 4];
  case 3:
    puVar2[i - 3] = param_2[i - 3];
  case 2:
    puVar2[i - 2] = param_2[i - 2];
  case 1:
    puVar2[i - 1] = param_2[i - 1];
    param_2 = param_2 + i;
    puVar2 = puVar2 + i;
  }
  switch(uVar1) {
  case 1:
switchD_1000ddd5_caseD_1:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000ddd5_caseD_2:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000ddd5_caseD_3:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000ddd5_caseD_0:
  return param_1;
}


/* ==== 1000e0e0 FUN_1000e0e0 ==== */

BOOL __cdecl
FUN_1000e0e0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002cfd8;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_1003162c == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1003162c = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_1003162c = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_1003162c == 2) {
    if (param_6 == 0) {
      param_6 = DAT_1003163c;
    }
    BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  }
  else if (DAT_1003162c == 1) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar3 == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_1c = &stack0xffffffc4;
      _memset(&stack0xffffffc4,0,iVar3 << 1);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x3c) {
        BVar2 = 0;
      }
      else {
        iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc4,iVar3);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc4,iVar3,param_4);
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


/* ==== 1000e2a0 FUN_1000e2a0 ==== */

int __cdecl FUN_1000e2a0(uint filehandle,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((filehandle < DAT_10031bfc) &&
     ((*(byte *)((&DAT_10031ac0)[(int)filehandle >> 5] + 4 + (filehandle & 0x1f) * 0x24) & 1) != 0))
  {
    FUN_100029d0(filehandle);
    iVar2 = FUN_1000e320(filehandle,param_2);
    __unlock_fhandle(filehandle);
  }
  else {
    puVar1 = (undefined4 *)FUN_10006f20();
    *puVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}


/* ==== 1000e320 FUN_1000e320 ==== */

int __cdecl FUN_1000e320(uint param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  DWORD *pDVar6;
  undefined4 *puVar7;
  HANDLE hFile;
  BOOL BVar8;
  uint local_1028;
  int local_1020;
  uint local_101c;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_10008bb0();
  local_1020 = 0;
  if (param_2 < 0) {
    uStackY_28 = 0x1000e364;
    iVar2 = FUN_10003050(2,0x1002cfe4,0x81,0,(byte *)"size >= 0");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  DVar3 = FUN_10006ab0(param_1,0,1);
  if ((DVar3 == 0xffffffff) || (DVar4 = FUN_10006ab0(param_1,0,2), DVar4 == 0xffffffff)) {
    local_1020 = -1;
  }
  else {
    local_101c = param_2 - DVar4;
    if ((int)local_101c < 1) {
      if ((int)local_101c < 0) {
        FUN_10006ab0(param_1,param_2,0);
        hFile = (HANDLE)FUN_10002850(param_1);
        BVar8 = SetEndOfFile(hFile);
        local_1020 = (BVar8 != 0) - 1;
        if (local_1020 == -1) {
          puVar7 = (undefined4 *)FUN_10006f20();
          *puVar7 = 0xd;
          DVar4 = GetLastError();
          pDVar6 = FUN_10006f30();
          *pDVar6 = DVar4;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      iVar2 = FUN_1000ec60(param_1,0x8000);
      do {
        if ((int)local_101c < 0x1000) {
          local_1028 = local_101c;
        }
        else {
          local_1028 = 0x1000;
        }
        iVar5 = FUN_1000b870(param_1,local_1008,local_1028);
        if (iVar5 == -1) {
          pDVar6 = FUN_10006f30();
          if (*pDVar6 == 5) {
            puVar7 = (undefined4 *)FUN_10006f20();
            *puVar7 = 0xd;
          }
          local_1020 = -1;
          break;
        }
        local_101c = local_101c - iVar5;
      } while (0 < (int)local_101c);
      FUN_1000ec60(param_1,iVar2);
    }
    FUN_10006ab0(param_1,DVar3,0);
  }
  return local_1020;
}


/* ==== 1000e550 FUN_1000e550 ==== */

int __cdecl
FUN_1000e550(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d000;
  puStack_10 = &LAB_1000eb08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10031654 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10031654 = 2;
    }
    else {
      DAT_10031654 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000e860(param_3,param_4);
  }
  if (DAT_10031654 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
  }
  else if (DAT_10031654 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1003164c;
    }
    iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        iVar1 = 0;
      }
      else {
        iVar1 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffbc,iVar2);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,(LPWSTR)0x0,0);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10008bb0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x44) {
              iVar1 = 0;
            }
            else {
              iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,
                                   (LPWSTR)&stack0xffffffbc,iVar1);
              if (iVar2 == 0) {
                iVar1 = 0;
              }
              else if (param_6 == 0) {
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffbc,iVar1,(LPSTR)0x0
                                            ,0,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
              }
              else {
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffbc,iVar1,
                                            (LPSTR)param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
              }
            }
          }
          else if (param_6 != 0) {
            if (param_6 < iVar1) {
              iVar1 = 0;
            }
            else {
              iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,param_5,param_6);
              if (iVar2 == 0) {
                iVar1 = 0;
              }
            }
          }
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


/* ==== 1000e860 FUN_1000e860 ==== */

int __cdecl FUN_1000e860(char *param_1,int param_2)

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


/* ==== 1000e8b0 __isatty ==== */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_10031bfc) {
    uVar1 = (int)*(char *)((&DAT_10031ac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 1000e8f0 FUN_1000e8f0 ==== */

int __cdecl FUN_1000e8f0(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_100317c4);
  bVar4 = DAT_100317b4 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_100317c4);
    FUN_100073f0(0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_1000e970(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_100317c4);
  }
  else {
    FUN_10007490(0x13);
  }
  return iVar2;
}


/* ==== 1000e970 FUN_1000e970 ==== */

int __cdecl FUN_1000e970(LPSTR param_1,uint param_2)

{
  undefined4 *puVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_1003163c == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      puVar1 = (undefined4 *)FUN_10006f20();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&param_2,1,param_1,DAT_10030214,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      puVar1 = (undefined4 *)FUN_10006f20();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}


/* ==== 1000ea10 __global_unwind2 ==== */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID target_frame)

{
  RtlUnwind(target_frame,(PVOID)0x1000ea28,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


