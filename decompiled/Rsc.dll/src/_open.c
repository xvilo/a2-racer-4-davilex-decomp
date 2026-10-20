/* Rsc.dll — _open.c: 2 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 100061d0 FUN_100061d0 ==== */

undefined4 * __cdecl FUN_100061d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10006387_caseD_2;
        case 3:
          goto switchD_10006387_caseD_3;
        }
        goto switchD_10006387_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006387_caseD_0;
      case 1:
        goto switchD_10006387_caseD_1;
      case 2:
        goto switchD_10006387_caseD_2;
      case 3:
        goto switchD_10006387_caseD_3;
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
              goto switchD_10006387_caseD_2;
            case 3:
              goto switchD_10006387_caseD_3;
            }
            goto switchD_10006387_caseD_1;
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
              goto switchD_10006387_caseD_2;
            case 3:
              goto switchD_10006387_caseD_3;
            }
            goto switchD_10006387_caseD_1;
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
              goto switchD_10006387_caseD_2;
            case 3:
              goto switchD_10006387_caseD_3;
            }
            goto switchD_10006387_caseD_1;
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
switchD_10006387_caseD_1:
      *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
      return param_1;
    case 2:
switchD_10006387_caseD_2:
      *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
      *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
      return param_1;
    case 3:
switchD_10006387_caseD_3:
      *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar2 + 3);
      *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
      *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)puVar2 + 1);
      return param_1;
    }
switchD_10006387_caseD_0:
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
        goto switchD_10006205_caseD_2;
      case 3:
        goto switchD_10006205_caseD_3;
      }
      goto switchD_10006205_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006205_caseD_0;
    case 1:
      goto switchD_10006205_caseD_1;
    case 2:
      goto switchD_10006205_caseD_2;
    case 3:
      goto switchD_10006205_caseD_3;
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
            goto switchD_10006205_caseD_2;
          case 3:
            goto switchD_10006205_caseD_3;
          }
          goto switchD_10006205_caseD_1;
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
            goto switchD_10006205_caseD_2;
          case 3:
            goto switchD_10006205_caseD_3;
          }
          goto switchD_10006205_caseD_1;
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
            goto switchD_10006205_caseD_2;
          case 3:
            goto switchD_10006205_caseD_3;
          }
          goto switchD_10006205_caseD_1;
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
switchD_10006205_caseD_1:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006205_caseD_2:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006205_caseD_3:
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar2 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006205_caseD_0:
  return param_1;
}


/* ==== 10006510 FUN_10006510 ==== */

undefined4 * __cdecl
FUN_10006510(LPCSTR param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_20;
  uint local_18;
  
  local_20 = DAT_10031624;
  bVar4 = false;
  bVar5 = false;
  if ((param_1 == (LPCSTR)0x0) &&
     (iVar6 = FUN_10003050(2,0x1002cb34,0x47,0,(byte *)"filename != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  if ((param_2 == (char *)0x0) &&
     (iVar6 = FUN_10003050(2,0x1002cb34,0x48,0,(byte *)"mode != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  if ((param_4 == (undefined4 *)0x0) &&
     (iVar6 = FUN_10003050(2,0x1002cb34,0x49,0,(byte *)"str != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    local_18 = 0x109;
    local_20 = local_20 | 2;
  }
  else if (cVar1 == 'r') {
    local_18 = 0;
    local_20 = local_20 | 1;
  }
  else {
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    local_18 = 0x301;
    local_20 = local_20 | 2;
  }
  bVar3 = true;
  while ((param_2 = param_2 + 1, *param_2 != '\0' && (bVar3))) {
    switch(*param_2) {
    case '+':
      if ((local_18 & 2) == 0) {
        local_18 = local_18 & 0xfffffffe | 2;
        local_20 = local_20 & 0xfffffffc | 0x80;
      }
      else {
        bVar3 = false;
      }
      break;
    default:
      bVar3 = false;
      break;
    case 'D':
      if ((local_18 & 0x40) == 0) {
        local_18 = local_18 | 0x40;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'R':
      if (bVar5) {
        bVar3 = false;
      }
      else {
        bVar5 = true;
        local_18 = local_18 | 0x10;
      }
      break;
    case 'S':
      if (bVar5) {
        bVar3 = false;
      }
      else {
        bVar5 = true;
        local_18 = local_18 | 0x20;
      }
      break;
    case 'T':
      if ((local_18 & 0x1000) == 0) {
        local_18 = local_18 | 0x1000;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'b':
      if ((local_18 & 0xc000) == 0) {
        local_18 = local_18 | 0x8000;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'c':
      if (bVar4) {
        bVar3 = false;
      }
      else {
        bVar4 = true;
        local_20 = local_20 | 0x4000;
      }
      break;
    case 'n':
      if (bVar4) {
        bVar3 = false;
      }
      else {
        bVar4 = true;
        local_20 = local_20 & 0xffffbfff;
      }
      break;
    case 't':
      if ((local_18 & 0xc000) == 0) {
        local_18 = local_18 | 0x4000;
      }
      else {
        bVar3 = false;
      }
    }
  }
  uVar8 = FUN_1000bc00(param_1,local_18,param_3,0x1a4);
  if ((int)uVar8 < 0) {
    param_4 = (undefined4 *)0x0;
  }
  else {
    DAT_1003142c = DAT_1003142c + 1;
    param_4[3] = local_20;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar8;
  }
  return param_4;
}


