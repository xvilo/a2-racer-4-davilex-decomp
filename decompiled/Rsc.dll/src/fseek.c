/* Rsc.dll — fseek.c: 2 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10002320 FUN_10002320 ==== */

int __cdecl FUN_10002320(undefined **param_1,int param_2,DWORD param_3)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c1a0,0x65,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_10002e60(param_1);
  iVar2 = FUN_10002390((uint *)param_1,param_2,param_3);
  FUN_10002ed0(param_1);
  return iVar2;
}


/* ==== 10002390 FUN_10002390 ==== */

int __cdecl FUN_10002390(uint *param_1,int param_2,DWORD param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  
  if ((param_1 == (uint *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c1a0,0x92,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (((param_1[3] & 0x83) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    puVar3 = (undefined4 *)FUN_10006f20();
    *puVar3 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_10006be0(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_100058f0((int *)param_1);
    if ((param_1[3] & 0x80) == 0) {
      if ((((param_1[3] & 1) != 0) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = param_1[3] & 0xfffffffc;
    }
    DVar4 = FUN_10006a20(param_1[4],param_2,param_3);
    iVar2 = (DVar4 != 0xffffffff) - 1;
  }
  return iVar2;
}


