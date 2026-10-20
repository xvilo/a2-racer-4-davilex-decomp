/* spel.dat — inputlib/CInputCommand.cpp: 14 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004edc80 FUN_004edc80 ==== */

void FUN_004edc80(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004edc90 FUN_004edc90 ==== */

void FUN_004edc90(void)

{
  FUN_005584e0(&LAB_004edca0);
  return;
}


/* ==== 004edcc0 FUN_004edcc0 ==== */

void FUN_004edcc0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004edcd0 FUN_004edcd0 ==== */

void FUN_004edcd0(void)

{
  FUN_005584e0(&LAB_004edce0);
  return;
}


/* ==== 004edcf0 FUN_004edcf0 ==== */

void FUN_004edcf0(void)

{
  undefined1 *in_ECX;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *in_ECX = local_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0x3dcccccd;
  *(undefined4 *)(in_ECX + 0x20) = 0x3dcccccd;
  in_ECX[0x24] = 0;
  return;
}


/* ==== 004edd30 FUN_004edd30 ==== */

void FUN_004edd30(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005727d0;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 0x10) == -1) {
    ExceptionList = &local_c;
    uVar1 = FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CInputComm_005b8600,0x29);
    local_4 = 0;
    uVar1 = FUN_004796b0(local_38,uVar1,s_Trying_to_get_an_uninitted_comma_005b85d8);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(uVar1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


/* ==== 004eddb0 FUN_004eddb0 ==== */

void FUN_004eddb0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  *(undefined4 *)(in_ECX + 0x20) = param_2;
  *(undefined1 *)(in_ECX + 0x24) = param_3;
  return;
}


/* ==== 004eddd0 FUN_004eddd0 ==== */

void FUN_004eddd0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}


/* ==== 004ede20 FUN_004ede20 ==== */

void FUN_004ede20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004ede30 FUN_004ede30 ==== */

void FUN_004ede30(void)

{
  FUN_005584e0(&LAB_004ede40);
  return;
}


/* ==== 004ede60 FUN_004ede60 ==== */

void FUN_004ede60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004ede70 FUN_004ede70 ==== */

void FUN_004ede70(void)

{
  FUN_005584e0(&LAB_004ede80);
  return;
}


/* ==== 004ede90 FUN_004ede90 ==== */

void FUN_004ede90(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = 0;
  return;
}


/* ==== 004edea0 FUN_004edea0 ==== */

/* WARNING: Removing unreachable block (ram,0x004edf0c) */

int FUN_004edea0(undefined1 *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005727fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00558643(in_ECX,8,5,&LAB_004ee1c0,FUN_004ec6e0);
  *(undefined1 *)(in_ECX + 0x28) = param_1._0_1_;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  local_4 = 1;
  FUN_004ede90();
  uVar1 = *(uint *)(param_1 + 8);
  if ((undefined1 *)(in_ECX + 0x28) == param_1) {
    if (*(uint *)(in_ECX + 0x30) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(in_ECX + 0x30) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)(in_ECX + 0x2c);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)(in_ECX + 0x30) - iVar6;
      cVar2 = FUN_00402a00(iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar6);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar6 = *(int *)(in_ECX + 0x2c);
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar6 + -1));
          }
          else {
            *(char *)(iVar6 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)(in_ECX + 0x2c) = 0;
        *(undefined4 *)(in_ECX + 0x30) = 0;
        *(undefined4 *)(in_ECX + 0x34) = 0;
        puVar4 = *(undefined1 **)(param_1 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)(in_ECX + 0x2c) = puVar4;
        *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004ee013;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_1 + 4);
      }
      puVar8 = *(undefined4 **)(in_ECX + 0x2c);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(uVar1);
    }
  }
LAB_004ee013:
  FUN_004ee040(param_2);
  ExceptionList = pvStack_c;
  return in_ECX;
}


