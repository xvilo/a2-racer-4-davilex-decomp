/* spel.dat — inputlib/CDirectInputDevice.cpp: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004f16e0 FUN_004f16e0 ==== */

void FUN_004f16e0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004f16f0 FUN_004f16f0 ==== */

void FUN_004f16f0(void)

{
  FUN_005584e0(&LAB_004f1700);
  return;
}


/* ==== 004f1720 FUN_004f1720 ==== */

void FUN_004f1720(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004f1730 FUN_004f1730 ==== */

void FUN_004f1730(void)

{
  FUN_005584e0(&LAB_004f1740);
  return;
}


/* ==== 004f1750 FUN_004f1750 ==== */

/* WARNING: Removing unreachable block (ram,0x004f17a0) */

void __thiscall FUN_004f1750(void *this,undefined1 *this_val,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  uint i;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00572ce1;
  local_c = ExceptionList;
  local_4 = 0;
  if (this_val == (undefined1 *)0x0) {
    return;
  }
  uVar1 = *param_2;
  ExceptionList = &local_c;
  *(undefined4 *)(this_val + 4) = 0;
  *this_val = uVar1;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar4 = *(int *)(this_val + 8) - uVar2;
    iVar6 = -1;
    if (iVar4 != -1) {
      iVar6 = iVar4;
    }
    if (iVar6 != 0) {
      FUN_005580e0(uVar2 + *(int *)(this_val + 4),iVar6 + uVar2 + *(int *)(this_val + 4),
                   iVar4 - iVar6);
      iVar4 = *(int *)(this_val + 8);
      cVar3 = FUN_00402a00(this_val,iVar4 - iVar6,0);
      if (cVar3 != '\0') {
        FUN_004029e0(this_val,iVar4 - iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar2 != 0) {
      puVar5 = *(undefined1 **)(param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar5 = *(undefined1 **)(param_2 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)(this_val + 4) = puVar5;
        *(undefined4 *)(this_val + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(this_val + 0xc) = *(undefined4 *)(param_2 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004f1884;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar2,1);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_2 + 4);
      }
      puVar8 = *(undefined4 **)(this_val + 4);
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(this_val,uVar2);
    }
  }
LAB_004f1884:
  *(undefined4 *)(this_val + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this_val + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this_val + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(this_val + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(this_val + 0x20) = *(undefined4 *)(param_2 + 0x20);
  this_val[0x24] = param_2[0x24];
  ExceptionList = local_c;
  return;
}


/* ==== 004f18f0 FUN_004f18f0 ==== */

/* WARNING: Removing unreachable block (ram,0x004f1909) */

void * __thiscall FUN_004f18f0(void *this,void *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar1 = *(uint *)((int)param_2 + 8);
  if (this == param_2) {
    if (*(uint *)((int)this + 8) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this);
    iVar3 = *(int *)((int)this + 8) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 4);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 8) - iVar6;
      cVar2 = FUN_00402a00(this,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this,iVar6);
      }
    }
    FUN_00402c30(this);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)((int)param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar6 = *(int *)((int)this + 4);
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar6 + -1));
          }
          else {
            *(char *)(iVar6 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        puVar4 = *(undefined1 **)((int)param_2 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 4) = puVar4;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_2 + 8);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_2 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004f1a16;
      }
    }
    cVar2 = FUN_00402a00(this,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)((int)param_2 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)((int)param_2 + 4);
      }
      puVar8 = *(undefined4 **)((int)this + 4);
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
      *(uint *)((int)this + 8) = uVar1;
      *(undefined1 *)(uVar1 + *(int *)((int)this + 4)) = 0;
    }
  }
LAB_004f1a16:
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_2 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)param_2 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)param_2 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)param_2 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)param_2 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)((int)param_2 + 0x24);
  return this;
}


/* ==== 004f1a90 FUN_004f1a90 ==== */

void * __thiscall FUN_004f1a90(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f0b00();
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005782a8;
  FUN_004f1b10(this);
  ExceptionList = local_c;
  return this;
}


/* ==== 004f1ae0 FUN_004f1ae0 ==== */

void * __thiscall FUN_004f1ae0(void *this,byte param_2)

{
  FUN_004f1b00();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004f1b00 FUN_004f1b00 ==== */

void __thiscall FUN_004f1b00(void *this)

{
  *(undefined ***)this = &PTR_FUN_005782a8;
  FUN_004f0bc0();
  return;
}


/* ==== 004f1b10 FUN_004f1b10 ==== */

void __thiscall FUN_004f1b10(void *this)

{
  DAT_0074b994 = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  return;
}


/* ==== 004f1b30 FUN_004f1b30 ==== */

void FUN_004f1b30(undefined4 param_1)

{
  int direct_input_create;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00572d20;
  local_c = ExceptionList;
  if (DAT_0074b994 == 0) {
    ExceptionList = &local_c;
    direct_input_create = DirectInputCreateA(param_1,0x500,&DAT_0074b994,0);
    if (direct_input_create != 0) {
      puVar1 = (undefined1 *)FUN_0049df90(auStack_48,s_Input_exception_in___s___d__005b77e4);
      uStack_4 = 0;
      uVar2 = FUN_004796b0(auStack_38,puVar1,s_DIError___Failed_to_create_DI_ob_005b8d28);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_004edac0(auStack_28,uVar2);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(auStack_28,&DAT_005872d0);
    }
  }
  ExceptionList = local_c;
  DAT_0074b998 = DAT_0074b998 + 1;
  return;
}


/* ==== 004f1be0 FUN_004f1be0 ==== */

void __thiscall
FUN_004f1be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004f1b30(param_2);
  FUN_004f11a0(param_2,param_3,param_4);
  return;
}


/* ==== 004f1c10 FUN_004f1c10 ==== */

void FUN_004f1c10(void)

{
  if ((DAT_0074b994 != (int *)0x0) && (DAT_0074b998 == 1)) {
    (**(code **)(*DAT_0074b994 + 8))(DAT_0074b994);
    DAT_0074b994 = (int *)0x0;
  }
  DAT_0074b998 = DAT_0074b998 + -1;
  return;
}


/* ==== 004f1c40 FUN_004f1c40 ==== */

void __thiscall FUN_004f1c40(void *this)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  piVar1 = *(int **)((int)this + 0xa8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  return;
}


/* ==== 004f1c80 FUN_004f1c80 ==== */

void __thiscall FUN_004f1c80(void *this)

{
  FUN_004f1c10();
  FUN_004f1c40(this);
  return;
}


/* ==== 004f1ca0 FUN_004f1ca0 ==== */

void FUN_004f1ca0(void)

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
  puStack_8 = &LAB_00572d40;
  local_c = ExceptionList;
  if (DAT_0074b994 == 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined1 *)FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    uVar2 = FUN_004796b0(local_38,puVar1,s_DirectInput_object_not_created_y_005b8d80);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_28,uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


/* ==== 004f1d30 FUN_004f1d30 ==== */

void __thiscall FUN_004f1d30(void *this)

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
  puStack_8 = &LAB_00572d60;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xa4) == 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined1 *)FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    uVar2 = FUN_004796b0(local_38,puVar1,s_DirectInput_device_not_created_y_005b8de0);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_28,uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


/* ==== 004f1dc0 FUN_004f1dc0 ==== */

void __thiscall FUN_004f1dc0(void *this)

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
  puStack_8 = &LAB_00572d80;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xa8) == 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined1 *)FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    uVar2 = FUN_004796b0(local_38,puVar1,s_DirectInput_device2_not_created_y_005b8e04);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004edac0(local_28,uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  return;
}


/* ==== 004f1e50 FUN_004f1e50 ==== */

void __thiscall FUN_004f1e50(void *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcStack_94;
  undefined *puStack_90;
  undefined1 local_84 [12];
  undefined1 auStack_78 [4];
  undefined1 local_74 [24];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  char local_44 [20];
  void *pvStack_30;
  undefined4 uStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572dd9;
  pvStack_c = ExceptionList;
  if (*(int *)((int)this + 0xa4) != 0) {
    puStack_90 = (undefined *)0x114;
    pcStack_94 = s_D__Work_InputLib_prog_CDirectInp_005b8d50;
    ExceptionList = &pvStack_c;
    puVar1 = (undefined1 *)FUN_0049df90(local_84,s_Input_exception_in___s___d__005b77e4);
    local_4 = 0;
    puStack_90 = (undefined *)
                 FUN_004796b0(local_74,puVar1,s_DirectInput_device_already_initt_005b8eb4);
    local_4 = CONCAT31(local_4._1_3_,1);
    pcStack_94 = (char *)0x4f1ec5;
    FUN_004edac0(local_44);
    pcStack_94 = local_44;
    puStack_90 = &DAT_005872d0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  puStack_90 = (undefined *)0x4f1edb;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_004f1ca0();
  puStack_90 = (undefined *)0x0;
  pcStack_94 = (char *)((int)this + 0xa4);
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  if (iVar3 != 0) {
    puVar1 = (undefined1 *)FUN_0049df90(local_84,s_Input_exception_in___s___d__005b77e4);
    uStack_14 = 2;
    uVar4 = FUN_004796b0((undefined1 *)&pcStack_94,puVar1,
                         s_DInput__Could_not_create_device__005b8e90);
    uStack_14 = CONCAT31(uStack_14._1_3_,3);
    FUN_004edac0(auStack_54,uVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_54,&DAT_005872d0);
  }
  *(undefined4 *)((int)this + 0xac) = 0x2c;
  piVar2 = (int *)FUN_004f1d30(this);
  iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,(undefined4 *)((int)this + 0xac));
  if (iVar3 != 0) {
    puVar1 = (undefined1 *)FUN_0049df90(&stack0xffffff74,s_Input_exception_in___s___d__005b77e4);
    uStack_1c = 4;
    uVar4 = FUN_004796b0(&stack0xffffff64,puVar1,s_DInput__Could_not_get_device_cap_005b8e64);
    uStack_1c = CONCAT31(uStack_1c._1_3_,5);
    FUN_004edac0(auStack_5c,uVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_5c,&DAT_005872d0);
  }
  puVar5 = (undefined4 *)FUN_004f1d30(this);
  iVar3 = (**(code **)*puVar5)(puVar5,&DAT_00578db0,(int)this + 0xa8);
  if (iVar3 != 0) {
    puVar1 = (undefined1 *)FUN_0049df90(&stack0xffffff78,s_Input_exception_in___s___d__005b77e4);
    uStack_28 = 6;
    uVar4 = FUN_004796b0(auStack_78,puVar1,s_DIError___Could_not_get_IDirectI_005b8e2c);
    uStack_28 = CONCAT31(uStack_28._1_3_,7);
    FUN_004edac0(auStack_4c,uVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_4c,&DAT_005872d0);
  }
  ExceptionList = pvStack_30;
  return;
}


/* ==== 004f2050 FUN_004f2050 ==== */

undefined4 __thiscall
FUN_004f2050(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  void *pvStack_54;
  undefined4 uStack_50;
  undefined1 auStack_3c [28];
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00572e00;
  pvStack_c = ExceptionList;
  DAT_0074b98c = param_4;
  DAT_0074b990 = 0;
  uStack_50 = 0x4f2083;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_004f1ca0();
  uStack_50 = param_3;
  puStack_58 = &LAB_004f1a50;
  uStack_5c = param_2;
  pvStack_54 = this;
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1);
  if (iVar2 != 0) {
    puVar3 = (undefined1 *)
             FUN_0049df90((undefined1 *)&uStack_5c,s_Input_exception_in___s___d__005b77e4);
    uStack_18 = 0;
    uVar4 = FUN_004796b0(&stack0xffffffb4,puVar3,s_DIError___Failed_to_enumerate_DI_005b8ed8);
    uStack_18 = CONCAT31(uStack_18._1_3_,1);
    FUN_004edac0(auStack_3c,uVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_3c,&DAT_005872d0);
  }
  ExceptionList = pvStack_20;
  return CONCAT31((int3)((uint)*(int *)((int)this + 0xa4) >> 8),*(int *)((int)this + 0xa4) != 0);
}


