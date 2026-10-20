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

void __thiscall FUN_004edcf0(void *this)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)this >> 0x18);
  *(undefined1 *)this = local_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x3dcccccd;
  *(undefined4 *)((int)this + 0x20) = 0x3dcccccd;
  *(undefined1 *)((int)this + 0x24) = 0;
  return;
}


/* ==== 004edd30 FUN_004edd30 ==== */

void __thiscall FUN_004edd30(void *this)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005727d0;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x10) == -1) {
    ExceptionList = &local_c;
    puVar1 = (undefined1 *)FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    uVar2 = FUN_004796b0(local_38,puVar1,s_Trying_to_get_an_uninitted_comma_005b85d8);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_28,uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


/* ==== 004eddb0 FUN_004eddb0 ==== */

void __thiscall FUN_004eddb0(void *this,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined1 *)((int)this + 0x24) = param_4;
  return;
}


/* ==== 004eddd0 FUN_004eddd0 ==== */

void __thiscall FUN_004eddd0(void *this)

{
  *(undefined4 *)((int)this + 4) = 0;
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

void __thiscall FUN_004ede90(void *this)

{
  *(undefined4 *)((int)this + 0x38) = 0;
  return;
}


/* ==== 004edea0 FUN_004edea0 ==== */

/* WARNING: Removing unreachable block (ram,0x004edf0c) */

void * __thiscall FUN_004edea0(void *this,undefined1 *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *this_val;
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
  FUN_00558643(this,8,5,&LAB_004ee1c0,FUN_004ec6e0);
  this_val = (undefined1 *)((int)this + 0x28);
  *this_val = param_2._0_1_;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_4 = 1;
  FUN_004ede90(this);
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (*(uint *)((int)this + 0x30) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x30) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x2c);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0x30) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar6 = *(int *)((int)this + 0x2c);
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar6 + -1));
          }
          else {
            *(char *)(iVar6 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)((int)this + 0x2c) = 0;
        *(undefined4 *)((int)this + 0x30) = 0;
        *(undefined4 *)((int)this + 0x34) = 0;
        this_val = *(undefined1 **)(param_2 + 4);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x2c) = this_val;
        *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_2 + 0xc);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_004ee013;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_2 + 4);
      }
      puVar8 = *(undefined4 **)((int)this + 0x2c);
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
      FUN_004029e0(this_val,uVar1);
    }
  }
LAB_004ee013:
  FUN_004ee040(this,param_3);
  ExceptionList = pvStack_c;
  return this;
}


