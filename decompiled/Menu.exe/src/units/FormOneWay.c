/* Menu.exe — units/FormOneWay.pas: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004908b4 TBaseFormOneWay.btnNextClick ==== */

void TBaseFormOneWay_btnNextClick(int *param_1)

{
  undefined4 *puVar1;
  uint debug;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = &LAB_00490945;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  System_TObject_ClassName(*param_1,local_10c);
  System__LStrFromString(&local_c,local_10c);
  System__LStrCatN((int *)&local_8,3);
  puVar1 = local_8;
  debug = Debug();
  TDebug_InProc(debug,puVar1,2);
  (**(code **)(*param_1 + 0xfc))();
  *in_FS_OFFSET = "btnNextClick (TBaseFormOneWay)";
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 0049098c TBaseFormOneWay.FormShow ==== */

void TBaseFormOneWay_FormShow(int param_1)

{
  TGameMenuScreen_FormShow();
  (**(code **)(**(int **)(param_1 + 0x2f0) + 0xb4))();
  return;
}


/* ==== 00490a8c FUN_00490a8c ==== */

void FUN_00490a8c(void)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  short sVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  piVar5 = (int *)(in_stack_00000004 + -0x408);
  puStack_18 = &LAB_00490b3f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00408d0c((char *)(in_stack_00000004 + -0x401),&local_8);
  System__LStrLAsg(piVar5,local_8);
  uVar4 = 1;
  do {
    iVar2 = *piVar5;
    uVar1 = uVar4 - 1;
    if (*(uint *)(iVar2 + -4) <= uVar1) {
      uVar1 = System__RunError(uVar1);
      iVar2 = extraout_EDX;
    }
    sVar3 = (short)uVar4;
    if (*(char *)(iVar2 + -1 + uVar1 + 1) == '%') {
      FUN_00404124(piVar5,uVar4,2);
    }
    else {
      uVar4 = (uint)(ushort)(sVar3 + 1);
      if (sVar3 == -1) {
        System__RunError(uVar1 + 1);
      }
    }
    iVar2 = System__LStrLen(*piVar5);
  } while ((int)uVar4 < iVar2);
  RegCloseKey(*(HKEY *)(in_stack_00000004 + -0x40c));
  System__LStrAsg(*(int **)(in_stack_00000004 + -0x410),(undefined4 *)*piVar5);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00490b46;
  puStack_18 = (undefined1 *)0x490b3e;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00490b4c FUN_00490b4c ==== */

void FUN_00490b4c(int *param_1)

{
  uint uVar1;
  LPCSTR pCVar2;
  LSTATUS LVar3;
  byte i_val;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  DWORD DVar5;
  REGSAM RVar6;
  HKEY *ppHVar7;
  undefined4 uStack_440;
  undefined1 *puStack_43c;
  undefined1 *puStack_438;
  int local_430;
  int local_42c;
  undefined *local_428;
  int local_424;
  DWORD local_420;
  DWORD local_41c;
  HKEY key;
  int *local_414;
  HKEY key_2;
  int local_40c;
  BYTE local_405 [1025];
  
  puStack_438 = &stack0xfffffffc;
  local_430 = 0;
  local_42c = 0;
  local_428 = (undefined *)0x0;
  local_424 = 0;
  local_40c = 0;
  puStack_43c = &LAB_00490ddd;
  uStack_440 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_440;
  i_val = 0;
  local_414 = param_1;
  do {
    ppHVar7 = &key;
    RVar6 = 0xf003f;
    DVar5 = 0;
    uVar1 = (uint)i_val;
    if (3 < uVar1) {
      uVar1 = System__RunError(uVar1);
    }
    pCVar2 = System__LStrToPChar((&PTR_DAT_004ab548)[uVar1]);
    uVar1 = RegOpenKeyExA((HKEY)0x80000000,pCVar2,DVar5,RVar6,ppHVar7);
    if (uVar1 == 0) {
      LVar3 = RegQueryValueExA(key,(LPCSTR)0x0,(LPDWORD)0x0,&local_41c,(LPBYTE)0x0,&local_420);
      if (LVar3 == 0) {
        RegQueryValueExA(key,(LPCSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_405,&local_420);
        FUN_00403e8c(&local_424,(char *)local_405,0x401);
        if (local_424 != 0) {
          ppHVar7 = &key_2;
          RVar6 = 0xf003f;
          DVar5 = 0;
          FUN_00403e8c((int *)&local_428,(char *)local_405,0x401);
          System__LStrCat((int *)&local_428,(undefined4 *)"\\shell\\open\\command");
          pCVar2 = System__LStrToPChar(local_428);
          LVar3 = RegOpenKeyExA((HKEY)0x80000000,pCVar2,DVar5,RVar6,ppHVar7);
          if (LVar3 == 0) {
            LVar3 = RegQueryValueExA(key_2,(LPCSTR)0x0,(LPDWORD)0x0,&local_41c,(LPBYTE)0x0,
                                     &local_420);
            if (LVar3 == 0) {
              RegQueryValueExA(key_2,(LPCSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_405,&local_420);
              FUN_00403e8c(&local_42c,(char *)local_405,0x401);
              if (local_42c != 0) {
                FUN_00490a8c();
                goto LAB_00490db4;
              }
            }
            RegCloseKey(key_2);
          }
        }
        LVar3 = RegOpenKeyExA(key,"shell\\open\\command",0,0xf003f,&key_2);
        if (LVar3 == 0) {
          LVar3 = RegQueryValueExA(key_2,(LPCSTR)0x0,(LPDWORD)0x0,&local_41c,(LPBYTE)0x0,&local_420)
          ;
          if (LVar3 == 0) {
            RegQueryValueExA(key_2,(LPCSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_405,&local_420);
            FUN_00403e8c(&local_430,(char *)local_405,0x401);
            if (local_430 != 0) {
              FUN_00490a8c();
              goto LAB_00490db4;
            }
          }
        }
      }
      uVar1 = RegCloseKey(key);
    }
    bVar4 = i_val == 0xff;
    i_val = i_val + 1;
    if (bVar4) {
      System__RunError(uVar1);
    }
  } while (i_val != 4);
  System__LStrClr(local_414);
LAB_00490db4:
  *in_FS_OFFSET = uStack_440;
  puStack_438 = &LAB_00490de4;
  puStack_43c = (undefined1 *)0x490dd1;
  System__LStrArrayClr(&local_430,4);
  puStack_43c = (undefined1 *)0x490ddc;
  System__LStrClr(&local_40c);
  return;
}


/* ==== 00490e1c FUN_00490e1c ==== */

void FUN_00490e1c(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  uint *extraout_EDX_01;
  int extraout_EDX_02;
  byte *extraout_EDX_03;
  byte *pbVar6;
  short sVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar9;
  int *piVar10;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  undefined4 *local_10;
  int local_c;
  byte *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_28 = &LAB_00490fe5;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00490b4c((int *)&local_8);
  if (local_8 != (byte *)0x0) {
    FUN_004081f0(local_8,&local_c);
    System__LStrLAsg((int *)&local_8,local_c);
    puVar1 = (uint *)System__LStrLen((int)local_8);
    uVar8 = (int)puVar1 + 1;
    if (SCARRY4((int)puVar1,1)) {
      puVar1 = (uint *)System__RunError((uint)puVar1);
    }
    if (0xffff < uVar8) {
      puVar1 = (uint *)System__RunError((uint)puVar1);
    }
    do {
      sVar7 = (short)uVar8;
      uVar8 = (uint)(ushort)(sVar7 - 1);
      if (sVar7 == 0) {
        puVar1 = (uint *)System__RunError((uint)puVar1);
      }
      piVar10 = (int *)&DAT_004ad4ac;
      iVar5 = uVar8 - 3;
      uVar9 = iVar5 == 0;
      if (SBORROW4(uVar8,3)) {
        System__RunError((uint)puVar1);
        iVar5 = extraout_EDX;
      }
      System__LStrCopy((int)local_8,iVar5,4,piVar10);
      System__LStrCmp(DAT_004ad4ac,(uint *)&DAT_00490ffc);
      if ((bool)uVar9) break;
      System__LStrCmp(DAT_004ad4ac,(uint *)&DAT_0049100c);
      if ((bool)uVar9) break;
      puVar1 = System__LStrCmp(DAT_004ad4ac,(uint *)&DAT_0049101c);
    } while (!(bool)uVar9);
    iVar5 = System__LStrLen((int)local_8);
    if ((int)uVar8 < iVar5) {
      piVar10 = &local_14;
      iVar5 = System__LStrLen((int)local_8);
      uVar4 = iVar5 - uVar8;
      uVar2 = uVar8;
      if (SBORROW4(iVar5,uVar8)) {
        uVar2 = System__RunError(uVar8);
        uVar4 = extraout_ECX;
      }
      iVar5 = uVar8 + 1;
      if (SCARRY4(uVar8,1)) {
        System__RunError(uVar2);
        uVar4 = extraout_ECX_00;
        iVar5 = extraout_EDX_00;
      }
      System__LStrCopy((int)local_8,iVar5,uVar4,piVar10);
      FUN_004083f8(local_14,(int *)&local_10);
      System__LStrAsg((int *)&DAT_004ad4ac,local_10);
      while (DAT_004ad4ac != (uint *)0x0) {
        iVar5 = 0;
        puVar1 = DAT_004ad4ac;
        if (DAT_004ad4ac[-1] == 0) {
          iVar5 = System__RunError(0);
          puVar1 = extraout_EDX_01;
        }
        if (*(char *)((int)puVar1 + iVar5) != '\"') break;
        FUN_00404124((int *)&DAT_004ad4ac,1,1);
      }
      iVar3 = System__LStrLen((int)local_8);
      iVar5 = iVar3 - uVar8;
      uVar2 = uVar8;
      if (SBORROW4(iVar3,uVar8)) {
        uVar2 = System__RunError(uVar8);
        iVar5 = extraout_ECX_01;
      }
      iVar3 = uVar8 + 1;
      if (SCARRY4(uVar8,1)) {
        System__RunError(uVar2);
        iVar5 = extraout_ECX_02;
        iVar3 = extraout_EDX_02;
      }
      FUN_00404124((int *)&local_8,iVar3,iVar5);
    }
    else {
      System__LStrClr((int *)&DAT_004ad4ac);
    }
    iVar5 = 0;
    pbVar6 = local_8;
    if (*(int *)(local_8 + -4) == 0) {
      iVar5 = System__RunError(0);
      pbVar6 = extraout_EDX_03;
    }
    if (pbVar6[iVar5] == 0x22) {
      FUN_00404124((int *)&local_8,1,1);
    }
  }
  System__LStrAsg(param_1,(undefined4 *)local_8);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00490fec;
  puStack_28 = (undefined1 *)0x490fe4;
  System__LStrArrayClr(&local_14,4);
  return;
}


