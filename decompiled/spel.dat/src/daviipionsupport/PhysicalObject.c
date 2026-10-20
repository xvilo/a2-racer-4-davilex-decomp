/* spel.dat — daviipionsupport/PhysicalObject.cpp: 42 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a0430 FUN_004a0430 ==== */

void __thiscall FUN_004a0430(void *this,undefined4 param_2)

{
  FUN_004f5990(this,0,2,param_2);
  FUN_004f5990(this,1,2,param_2);
  FUN_004f5990(this,2,2,param_2);
  FUN_004f59f0(this,0,2,param_2);
  FUN_004f59f0(this,1,2,param_2);
  FUN_004f59f0(this,2,2,param_2);
  return;
}


/* ==== 004a0490 FUN_004a0490 ==== */

void __thiscall FUN_004a0490(void *this)

{
  *(undefined ***)this = &PTR_LAB_005771b8;
  return;
}


/* ==== 004a04e0 FUN_004a04e0 ==== */

void * __thiscall FUN_004a04e0(void *this)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_25;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056ec40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = local_25;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  i = 0xffffffff;
  pcVar2 = s_Undefined_005af044;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_4 = 0;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  cVar1 = FUN_00402a00(local_1c,i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_Undefined_005af044;
    pcVar3 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(local_1c,i);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004093c0(this,local_1c,0,0xffffffff);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  ExceptionList = local_c;
  return this;
}


/* ==== 004a05e0 FUN_004a05e0 ==== */

void __thiscall FUN_004a05e0(void *this)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056ec58;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int **)((int)this + 0x18) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)((int)this + 0x18) + 0x24))(1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_004f5b00(*(int *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(undefined1 *)((int)this + 0x20) = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004a0670 FUN_004a0670 ==== */

void __thiscall
FUN_004a0670(void *this,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056eca0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004093c0(this,&param_3,0,0xffffffff);
  *(undefined4 *)((int)this + 0x10) = param_2;
  switch(param_7) {
  case 0:
  case 3:
    break;
  case 1:
    uVar4 = FUN_004a0e50(this,&stack0x0000001c,&stack0x00000028);
    goto LAB_004a07a9;
  default:
    break;
  case 4:
    if (*(char *)((int)this + 0x20) != '\0') {
      iVar2 = FUN_0049df90(local_58,s_Init_geometry_while_building_for_005af0b4);
      local_4._0_1_ = 1;
      puVar3 = (undefined1 *)FUN_0049df90(local_48,s_Physics_exception_in___s___d__005af050);
      local_4._0_1_ = 2;
      uVar4 = FUN_0047c9a0(local_38,puVar3,iVar2);
      local_4._0_1_ = 3;
      FUN_00558826(local_28);
      local_1c[0] = (undefined1)param_2;
      local_4._0_1_ = 4;
      FUN_004028f0(local_1c,0);
      local_4._0_1_ = 5;
      local_28[0] = &PTR_FUN_005771c8;
      FUN_004093c0(local_1c,uVar4,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,3);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00583178);
    }
    goto LAB_004a07ac;
  }
  uVar4 = FUN_004a0b20(this,&stack0x0000001c);
LAB_004a07a9:
  *(undefined4 *)((int)this + 0x18) = uVar4;
LAB_004a07ac:
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_4 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(param_4 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004a0810 FUN_004a0810 ==== */

/* WARNING: Removing unreachable block (ram,0x004a0864) */

void * __thiscall FUN_004a0810(void *this,int param_2)

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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ecb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(this,param_2);
  this_val = (undefined1 *)((int)this + 0xc);
  local_4 = 0;
  *this_val = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = *(uint *)(param_2 + 0x14);
  if (this_val == (undefined1 *)(param_2 + 0xc)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x14) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x10);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0x14) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = *(undefined1 **)(param_2 + 0x10);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = this_val;
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x18);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_004a08c2;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)((int)this + 0x10);
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
      *(uint *)((int)this + 0x14) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 0x10) + uVar1) = 0;
      *(undefined ***)this = &PTR_FUN_005771c8;
      ExceptionList = local_c;
      return this;
    }
  }
LAB_004a08c2:
  *(undefined ***)this = &PTR_FUN_005771c8;
  ExceptionList = local_c;
  return this;
}


/* ==== 004a0970 FUN_004a0970 ==== */

/* WARNING: Removing unreachable block (ram,0x004a09a3) */

void __thiscall
FUN_004a0970(void *this,undefined4 param_2,undefined4 param_3,undefined4 *param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint i;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_5;
  puVar7 = param_4;
  puStack_8 = &LAB_0056ecd8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  if (this == &param_3) {
    ExceptionList = &pvStack_c;
    if (*(uint *)((int)this + 8) < param_5) {
      ExceptionList = &pvStack_c;
      FUN_0054b29c();
    }
    FUN_00402c30(this);
    iVar3 = *(int *)((int)this + 8) - uVar1;
    iVar8 = -1;
    if (iVar3 != -1) {
      iVar8 = iVar3;
    }
    if (iVar8 != 0) {
      iVar6 = uVar1 + *(int *)((int)this + 4);
      FUN_005580e0(iVar6,iVar8 + iVar6,iVar3 - iVar8);
      iVar8 = *(int *)((int)this + 8) - iVar8;
      cVar2 = FUN_00402a00(this,iVar8,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this,iVar8);
      }
    }
    FUN_0040f800(this,0,0);
    puVar7 = param_4;
  }
  else {
    if (param_5 != 0) {
      puVar4 = (undefined4 *)&DAT_0057629c;
      if (param_4 != (undefined4 *)0x0) {
        puVar4 = param_4;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        ExceptionList = &pvStack_c;
        FUN_004028f0(this,1);
        puVar4 = (undefined4 *)&DAT_0057629c;
        if (puVar7 != (undefined4 *)0x0) {
          puVar4 = puVar7;
        }
        *(undefined4 **)((int)this + 4) = puVar4;
        *(uint *)((int)this + 8) = uVar1;
        *(undefined4 *)((int)this + 0xc) = param_6;
        *(char *)((int)puVar4 + -1) = *(char *)((int)puVar4 + -1) + '\x01';
        goto LAB_004a0a87;
      }
    }
    ExceptionList = &pvStack_c;
    cVar2 = FUN_00402a00(this,param_5,1);
    if (cVar2 != '\0') {
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar4 = *(undefined4 **)((int)this + 4);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_004029e0(this,uVar1);
      puVar7 = param_4;
    }
  }
LAB_004a0a87:
  *(undefined4 *)((int)this + 0x10) = param_2;
  uVar5 = FUN_004a0d10(this,param_7,param_8);
  *(undefined4 *)((int)this + 0x18) = uVar5;
  if (puVar7 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar7 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)puVar7 + -1));
    }
    else {
      *(char *)((int)puVar7 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004a0ae0 FUN_004a0ae0 ==== */

undefined4 * __thiscall FUN_004a0ae0(void *this,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  
  uVar1 = FUN_00511d20(param_2);
  operator_new_result = operator_new(8);
  if (operator_new_result != (undefined4 *)0x0) {
    *operator_new_result = &PTR_LAB_005771d0;
    operator_new_result[1] = uVar1;
    *(undefined4 *)((int)this + 0x1c) = uVar1;
    return operator_new_result;
  }
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  return (undefined4 *)0x0;
}


/* ==== 004a0b20 FUN_004a0b20 ==== */

undefined4 __thiscall FUN_004a0b20(void *this,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  double *pdVar6;
  int i;
  float local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  double local_10c;
  double local_104;
  double local_fc;
  double local_ec;
  double local_e4;
  double local_dc;
  double local_cc;
  double local_c4;
  double local_bc;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  double local_84;
  double local_7c;
  double local_6c;
  double local_64;
  double local_5c;
  double local_4c;
  double local_44;
  double local_3c;
  double local_2c;
  double local_24;
  double local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ecfb;
  local_c = ExceptionList;
  local_11c = param_2[2] * 0.5;
  local_120 = param_2[1] * 0.5;
  local_124 = *param_2 * 0.5;
  ExceptionList = &local_c;
  local_110 = local_11c;
  local_118 = local_124;
  local_114 = local_120;
  FUN_004a4180(&local_124);
  local_118._0_2_ = 0;
  local_118._2_2_ = 0;
  local_114._0_2_ = 0;
  local_114._2_2_ = 0;
  local_4 = 0;
  pdVar6 = &local_10c;
  i = 8;
  do {
    if ((ushort)local_118 <= local_118._2_2_) {
      FUN_004f6060(&local_118);
    }
    *(double **)(CONCAT22(local_114._2_2_,(undefined2)local_114) + (uint)local_118._2_2_ * 4) =
         pdVar6;
    local_118._2_2_ = local_118._2_2_ + 1;
    pdVar6 = pdVar6 + 4;
    i = i + -1;
  } while (i != 0);
  fVar1 = -local_124;
  local_10c = (double)fVar1;
  fVar2 = -local_120;
  local_104 = (double)fVar2;
  fVar3 = -local_11c;
  local_fc = (double)fVar3;
  local_ec = (double)local_124;
  local_e4 = (double)fVar2;
  local_dc = (double)fVar3;
  local_cc = (double)fVar1;
  local_c4 = (double)local_120;
  local_bc = (double)fVar3;
  local_ac = (double)local_124;
  local_a4 = (double)local_120;
  local_9c = (double)fVar3;
  local_8c = (double)fVar1;
  local_84 = (double)fVar2;
  local_7c = (double)local_11c;
  local_6c = (double)local_124;
  local_64 = (double)fVar2;
  local_5c = (double)local_11c;
  local_4c = (double)fVar1;
  local_44 = (double)local_120;
  local_3c = (double)local_11c;
  local_2c = (double)local_124;
  local_24 = (double)local_120;
  local_1c = (double)local_11c;
  uVar5 = FUN_004a0ae0(this,&local_118);
  pfVar4 = (float *)CONCAT22(local_114._2_2_,(undefined2)local_114);
  if ((pfVar4 != &local_110) && (pfVar4 != (float *)0x0)) {
    FUN_00559d4e(pfVar4);
  }
  ExceptionList = local_c;
  return uVar5;
}


/* ==== 004a0d10 FUN_004a0d10 ==== */

undefined4 __thiscall FUN_004a0d10(void *this,int param_2,int param_3)

{
  double *pdVar1;
  undefined4 uVar2;
  int j;
  double *pdVar3;
  float *pfVar4;
  int k;
  ushort local_28;
  ushort i;
  undefined2 uStack_24;
  undefined2 uStack_22;
  float local_20;
  float local_1c;
  float local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0056ed18;
  local_14 = ExceptionList;
  local_28 = 0;
  i = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  local_c = 0;
  ExceptionList = &local_14;
  pdVar1 = operator_new(param_2 << 5);
  if (pdVar1 == (double *)0x0) {
    pdVar1 = (double *)0x0;
  }
  j = param_2;
  pdVar3 = pdVar1;
  if (0 < param_2) {
    do {
      if (local_28 <= i) {
        FUN_004f6060(&local_28);
      }
      *(double **)(CONCAT22(uStack_22,uStack_24) + (uint)i * 4) = pdVar3;
      i = i + 1;
      j = j + -1;
      pdVar3 = pdVar3 + 4;
    } while (j != 0);
    if (0 < param_2) {
      k = param_2;
      pfVar4 = (float *)(param_3 + 8);
      param_3 = (int)pdVar1 - param_3;
      do {
        local_20 = pfVar4[-2];
        local_1c = pfVar4[-1];
        local_18 = *pfVar4;
        FUN_004a4180(&local_20);
        *pdVar1 = (double)local_20;
        *(double *)(param_3 + (int)pfVar4) = (double)local_1c;
        pdVar1[2] = (double)local_18;
        pfVar4 = pfVar4 + 8;
        pdVar1 = pdVar1 + 4;
        k = k + -1;
      } while (k != 0);
    }
  }
  uVar2 = FUN_004a0ae0(this,&local_28);
  pfVar4 = (float *)CONCAT22(uStack_22,uStack_24);
  if ((pfVar4 != &local_20) && (pfVar4 != (float *)0x0)) {
    FUN_00559d4e(pfVar4);
  }
  ExceptionList = local_14;
  return uVar2;
}


/* ==== 004a0e50 FUN_004a0e50 ==== */

undefined4 __thiscall FUN_004a0e50(void *this,float *param_2,float *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  double *pdVar3;
  int j;
  ushort local_12c;
  ushort i;
  undefined2 uStack_128;
  undefined2 uStack_126;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  double local_10c;
  double local_104;
  double local_fc;
  double local_ec;
  double local_e4;
  double local_dc;
  double local_cc;
  double local_c4;
  double local_bc;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  double local_84;
  double local_7c;
  double local_6c;
  double local_64;
  double local_5c;
  double local_4c;
  double local_44;
  double local_3c;
  double local_2c;
  double local_24;
  double local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ed3b;
  local_c = ExceptionList;
  local_124 = *param_3;
  local_120 = param_3[1];
  local_118 = *param_2;
  local_11c = param_3[2];
  local_114 = param_2[1];
  local_110 = param_2[2];
  ExceptionList = &local_c;
  FUN_004a4180(&local_124);
  FUN_004a4180(&local_118);
  local_12c = 0;
  i = 0;
  uStack_128 = 0;
  uStack_126 = 0;
  local_4 = 0;
  pdVar3 = &local_10c;
  j = 8;
  do {
    if (local_12c <= i) {
      FUN_004f6060(&local_12c);
    }
    *(double **)(CONCAT22(uStack_126,uStack_128) + (uint)i * 4) = pdVar3;
    i = i + 1;
    pdVar3 = pdVar3 + 4;
    j = j + -1;
  } while (j != 0);
  local_10c = (double)local_124;
  local_104 = (double)local_120;
  local_fc = (double)local_11c;
  local_ec = (double)local_118;
  local_e4 = (double)local_120;
  local_dc = (double)local_11c;
  local_cc = (double)local_124;
  local_c4 = (double)local_114;
  local_bc = (double)local_11c;
  local_ac = (double)local_118;
  local_a4 = (double)local_114;
  local_9c = (double)local_11c;
  local_8c = (double)local_124;
  local_84 = (double)local_120;
  local_7c = (double)local_110;
  local_6c = (double)local_118;
  local_64 = (double)local_120;
  local_5c = (double)local_110;
  local_4c = (double)local_124;
  local_44 = (double)local_114;
  local_3c = (double)local_110;
  local_2c = (double)local_118;
  local_24 = (double)local_114;
  local_1c = (double)local_110;
  uVar2 = FUN_004a0ae0(this,&local_12c);
  pfVar1 = (float *)CONCAT22(uStack_126,uStack_128);
  if ((pfVar1 != &local_124) && (pfVar1 != (float *)0x0)) {
    FUN_00559d4e(pfVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}


/* ==== 004a1050 FUN_004a1050 ==== */

void __thiscall FUN_004a1050(void *this)

{
  int this_val;
  undefined1 *puVar1;
  undefined4 uVar2;
  void *this_val_2;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ed83;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0x20) != '\0') {
    ExceptionList = &local_c;
    this_val = FUN_0049df90(local_58,s_Using_BeginBrushBuild_twice_for_g_005af0e0);
    local_4 = 0;
    puVar1 = (undefined1 *)FUN_0049df90(local_48,s_Physics_exception_in___s___d__005af050);
    local_4._0_1_ = 1;
    uVar2 = FUN_0047c9a0(local_38,puVar1,this_val);
    local_4._0_1_ = 2;
    FUN_00558826(local_28);
    local_4._0_1_ = 3;
    FUN_004028f0(local_1c,0);
    local_4._0_1_ = 4;
    local_28[0] = &PTR_FUN_005771c8;
    FUN_004093c0(local_1c,uVar2,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_00583178);
  }
  this_val = *(int *)((int)this + 0x14);
  ExceptionList = &local_c;
  if (this_val != 0) {
    ExceptionList = &local_c;
    FUN_00511e90(this_val);
    FUN_0054b339(this_val);
  }
  this_val_2 = operator_new(0xa0);
  local_4 = 5;
  if (this_val_2 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00511de0(this_val_2);
  }
  *(undefined4 *)((int)this + 0x14) = uVar2;
  *(undefined1 *)((int)this + 0x20) = 1;
  ExceptionList = local_c;
  return;
}


/* ==== 004a1180 FUN_004a1180 ==== */

void __thiscall FUN_004a1180(void *this,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  ushort local_e8;
  ushort i;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined1 local_e0 [3];
  undefined1 local_dd;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined **local_b8 [3];
  undefined1 local_ac [16];
  double local_9c;
  double local_94;
  double local_8c;
  double local_7c;
  double local_74;
  double local_6c;
  double local_5c;
  double local_54;
  double local_4c;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056edc9;
  local_c = ExceptionList;
  local_e8 = 0;
  i = 0;
  uStack_e4 = 0;
  uStack_e2 = 0;
  local_4 = 0;
  local_d0 = *param_2;
  local_cc = param_2[1];
  local_c4 = *param_3;
  local_c8 = param_2[2];
  local_c0 = param_3[1];
  local_dc = *param_4;
  local_bc = param_3[2];
  local_d8 = param_4[1];
  local_d4 = param_4[2];
  if (*(char *)((int)this + 0x20) == '\0') {
    ExceptionList = &local_c;
    iVar1 = FUN_0049df90(local_3c,s_Use_BeginBrushBuild_before_AddTr_005af10c);
    local_4._0_1_ = 1;
    puVar2 = (undefined1 *)FUN_0049df90(local_2c,s_Physics_exception_in___s___d__005af050);
    local_4._0_1_ = 2;
    uVar3 = FUN_0047c9a0(local_1c,puVar2,iVar1);
    local_4._0_1_ = 3;
    FUN_00558826(local_b8);
    local_4._0_1_ = 4;
    local_ac[0] = local_dd;
    FUN_004028f0(local_ac,0);
    local_4._0_1_ = 5;
    local_b8[0] = &PTR_FUN_005771c8;
    FUN_004093c0(local_ac,uVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_b8,&DAT_00583178);
  }
  ExceptionList = &local_c;
  FUN_004a4180(&local_d0);
  FUN_004a4180(&local_c4);
  FUN_004a4180(&local_dc);
  local_9c = (double)local_d0;
  local_94 = (double)local_cc;
  local_8c = (double)local_c8;
  local_5c = (double)local_c4;
  local_54 = (double)local_c0;
  local_4c = (double)local_bc;
  local_7c = (double)local_dc;
  local_74 = (double)local_d8;
  local_6c = (double)local_d4;
  if (local_e8 <= i) {
    FUN_004f6060(&local_e8);
  }
  *(double **)(CONCAT22(uStack_e2,uStack_e4) + (uint)i * 4) = &local_9c;
  i = i + 1;
  if (local_e8 <= i) {
    FUN_004f6060(&local_e8);
  }
  *(double **)(CONCAT22(uStack_e2,uStack_e4) + (uint)i * 4) = &local_5c;
  i = i + 1;
  if (local_e8 <= i) {
    FUN_004f6060(&local_e8);
  }
  *(double **)(CONCAT22(uStack_e2,uStack_e4) + (uint)i * 4) = &local_7c;
  i = i + 1;
  if (*(char *)((int)this + 0x20) != '\0') {
    iVar1 = FUN_00511cc0(&local_e8,&local_e8);
    if (iVar1 != 0) {
      FUN_00511f80(iVar1);
    }
  }
  puVar2 = (undefined1 *)CONCAT22(uStack_e2,uStack_e4);
  if ((puVar2 != local_e0) && (puVar2 != (undefined1 *)0x0)) {
    FUN_00559d4e(puVar2);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004a1430 FUN_004a1430 ==== */

void __thiscall FUN_004a1430(void *this)

{
  undefined4 uVar1;
  undefined4 *operator_new_result;
  int this_val;
  
  if (*(char *)((int)this + 0x20) != '\0') {
    uVar1 = FUN_00512000(*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x1c) = uVar1;
    operator_new_result = operator_new(8);
    if (operator_new_result == (undefined4 *)0x0) {
      operator_new_result = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((int)this + 0x1c);
      *operator_new_result = &PTR_LAB_005771d0;
      operator_new_result[1] = uVar1;
    }
    this_val = *(int *)((int)this + 0x14);
    *(undefined4 **)((int)this + 0x18) = operator_new_result;
    if (this_val != 0) {
      FUN_00511e90(this_val);
      FUN_0054b339(this_val);
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  return;
}


/* ==== 004a1490 FUN_004a1490 ==== */

void __thiscall FUN_004a1490(void *this)

{
  *(undefined ***)this = &PTR_FUN_005771fc;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x25) = 0;
  return;
}


/* ==== 004a14c0 FUN_004a14c0 ==== */

void __thiscall FUN_004a14c0(void *this)

{
  *(undefined ***)this = &PTR_FUN_005771fc;
  return;
}


/* ==== 004a14f0 FUN_004a14f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a14f0(void *this,int param_2,float *param_3)

{
  int i;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *this_val;
  undefined4 *puVar4;
  undefined1 uStack_255;
  float local_254;
  float local_250;
  float local_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  double dStack_234;
  double adStack_22c [2];
  float local_21c;
  float fStack_218;
  float fStack_214;
  double dStack_20c;
  double dStack_204;
  double dStack_1fc;
  double dStack_1ec;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined1 auStack_16c [32];
  undefined1 local_14c [128];
  undefined4 auStack_cc [16];
  undefined4 auStack_8c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056ee17;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00402d00(local_14c,0x20,3,FUN_0043e110);
  if ((((*(float *)(param_2 + 0x9c) != 0.0) || (*(float *)(param_2 + 0xa0) != 0.0)) ||
      (uStack_1e4 = (double)CONCAT44(uStack_1e4._4_4_,(undefined4)uStack_1e4),
      uStack_1dc = (double)CONCAT44(uStack_1dc._4_4_,(undefined4)uStack_1dc),
      *(float *)(param_2 + 0xa4) != 0.0)) &&
     (uStack_1e4 = (double)CONCAT44(uStack_1e4._4_4_,(undefined4)uStack_1e4),
     uStack_1dc = (double)CONCAT44(uStack_1dc._4_4_,(undefined4)uStack_1dc),
     *(int *)(param_2 + 0x8c) != 0)) {
    (**(code **)(**(int **)(*(int *)(param_2 + 0x8c) + 0x18) + 4))(&local_21c);
    fStack_244 = *(float *)(param_2 + 0x9c);
    fStack_240 = *(float *)(param_2 + 0xa0);
    fStack_23c = *(float *)(param_2 + 0xa4);
    FUN_004a4180(&fStack_244);
    dStack_234 = (double)(fStack_218 + fStack_240);
    adStack_22c[0] = (double)(fStack_214 + fStack_23c);
    dStack_1ec = (double)(fStack_244 + local_21c);
    uStack_1e4 = dStack_234;
    uStack_1dc = adStack_22c[0];
    FUN_004fa010(local_14c);
    FUN_004fb000(local_14c,&dStack_1ec);
    *(undefined1 **)(param_2 + 100) = local_14c;
  }
  local_254 = *param_3;
  local_250 = param_3[1];
  local_24c = param_3[2];
  if ((*(char *)(param_2 + 0x84) == '\0') && (*(int *)(param_2 + 0x8c) == 0)) {
    i = FUN_0049df90((undefined1 *)&local_21c,s_Geometry_not_defined_while_initi_005af140);
    uStack_4 = 0;
    puVar1 = (undefined1 *)
             FUN_0049df90((undefined1 *)&fStack_244,s_Physics_exception_in___s___d__005af050);
    uStack_4._0_1_ = 1;
    uVar2 = FUN_0047c9a0((undefined1 *)adStack_22c,puVar1,i);
    uStack_4._0_1_ = 2;
    FUN_00558826(&dStack_1ec);
    uStack_4._0_1_ = 3;
    uStack_1e4._4_4_ = CONCAT31(uStack_1e4._5_3_,uStack_255);
    FUN_004028f0((int)&uStack_1e4 + 4,0);
    uStack_4._0_1_ = 4;
    dStack_1ec = (double)CONCAT44(dStack_1ec._4_4_,&PTR_FUN_005771c8);
    FUN_004093c0((int)&uStack_1e4 + 4,uVar2,0,0xffffffff);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&dStack_1ec,&DAT_00583178);
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_2 + 0x8c);
  FUN_004a4180(&local_254);
  dStack_20c = (double)local_254;
  dStack_204 = (double)local_250;
  dStack_1fc = (double)local_24c;
  puVar3 = (undefined4 *)FUN_004a5a40(&dStack_1ec,param_2 + 0x90);
  puVar4 = auStack_cc;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)FUN_004a58b0(&dStack_1ec,auStack_cc);
  puVar4 = auStack_8c;
  for (i = 0x20; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004f8bf0(auStack_8c);
  if (*(char *)(param_2 + 0x84) == '\x01') {
    fStack_248 = _DAT_005af184 * *(float *)(param_2 + 0x88);
    i = FUN_004f84d0(*(undefined4 *)(*(int *)((int)this + 0x2c) + 0x14),&fStack_248,param_2,
                     auStack_16c,&dStack_20c);
  }
  else {
    i = FUN_004f8460(*(undefined4 *)(*(int *)((int)this + 0x2c) + 0x14),
                     *(undefined4 *)(*(int *)((int)this + 4) + 0x18),param_2,auStack_16c,&dStack_20c
                    );
  }
  *(int *)((int)this + 8) = i;
  *(void **)(i + 0xb0) = this;
  if (*(int *)(param_2 + 0xac) != 0) {
    *(int *)((int)this + 0x18) = *(int *)(param_2 + 0xac);
    puVar3 = operator_new(0xc);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)((int)this + 8);
      puVar3[1] = 5;
      *puVar3 = &PTR_LAB_00577210;
      puVar3[2] = uVar2;
    }
    *(undefined4 **)((int)this + 0x1c) = puVar3;
    FUN_004f2410(*(undefined4 *)((int)this + 8),puVar3);
  }
  if (*(char *)(param_2 + 0xa8) != '\0') {
    FUN_004f21f0(*(undefined4 *)((int)this + 8),1);
  }
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_2 + 0xb0);
  if (*(char *)(param_2 + 0xa9) != '\0') {
    FUN_004f32e0(*(undefined4 *)((int)this + 8));
  }
  this_val = operator_new(4);
  if (this_val == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0490(this_val);
  }
  *(undefined4 *)((int)this + 0x14) = uVar2;
  FUN_004f2430(*(undefined4 *)((int)this + 8),uVar2);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_2 + 0x80);
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004a18e0 FUN_004a18e0 ==== */

void __thiscall FUN_004a18e0(void *this,float *param_2,undefined4 *param_3)

{
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a0 [32];
  undefined1 local_80 [128];
  
  FUN_004f2b10(*(void **)((int)this + 8),(int)local_80);
  local_ec = *param_2;
  local_e8 = param_2[1];
  local_f8 = *param_3;
  local_e4 = param_2[2];
  local_f4 = param_3[1];
  local_f0 = param_3[2];
  FUN_004a4180(&local_ec);
  FUN_004a4180(&local_f8);
  local_c0 = (double)local_ec;
  local_b8 = (double)local_e8;
  local_b0 = (double)local_e4;
  local_e0 = local_f8;
  local_dc = local_f4;
  local_d8 = local_f0;
  FUN_004fad20(local_80,&local_c0,local_a0);
  FUN_004fae60(local_80,&local_e0,local_d0);
  FUN_004f3260(*(undefined4 *)((int)this + 8),local_a0,local_d0);
  return;
}


/* ==== 004a19c0 FUN_004a19c0 ==== */

void __thiscall FUN_004a19c0(void *this,float *param_2,undefined4 *param_3)

{
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a0 [32];
  undefined1 local_80 [128];
  
  FUN_004f2b10(*(void **)((int)this + 8),(int)local_80);
  local_e8 = *param_2;
  local_e4 = param_2[1];
  local_dc = *param_3;
  local_e0 = param_2[2];
  local_d8 = param_3[1];
  local_d4 = param_3[2];
  FUN_004a4180(&local_e8);
  FUN_004a4180(&local_dc);
  local_c0 = (double)local_e8;
  local_b8 = (double)local_e4;
  local_b0 = (double)local_e0;
  local_d0 = local_dc;
  local_cc = local_d8;
  local_c8 = local_d4;
  FUN_004fad20(local_80,&local_c0,local_a0);
  FUN_004f3260(*(undefined4 *)((int)this + 8),local_a0,&local_d0);
  return;
}


/* ==== 004a1a90 FUN_004a1a90 ==== */

void __thiscall FUN_004a1a90(void *this,float *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int i;
  undefined4 *puVar2;
  float local_18c;
  float local_188;
  float local_184;
  double local_180;
  double local_178;
  double local_170;
  undefined4 local_160 [8];
  undefined4 local_140 [16];
  undefined1 local_100 [128];
  undefined4 local_80 [32];
  
  local_18c = *param_2;
  local_188 = param_2[1];
  local_184 = param_2[2];
  FUN_004a4180(&local_18c);
  local_180 = (double)local_18c;
  local_178 = (double)local_188;
  local_170 = (double)local_184;
  puVar1 = (undefined4 *)FUN_004a5a40(local_100,param_3);
  puVar2 = local_140;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = (undefined4 *)FUN_004a58b0(local_100,local_140);
  puVar2 = local_80;
  for (i = 0x20; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004f8bf0(local_80);
  FUN_004f3130(*(void **)((int)this + 8),local_160,&local_180,0);
  return;
}


/* ==== 004a1b50 FUN_004a1b50 ==== */

void __thiscall FUN_004a1b50(void *this,float *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int i;
  undefined4 *puVar2;
  float local_14c;
  float local_148;
  float local_144;
  double local_140;
  double local_138;
  double local_130;
  undefined4 local_120 [8];
  undefined4 local_100 [32];
  undefined1 local_80 [128];
  
  local_14c = *param_2;
  local_148 = param_2[1];
  local_144 = param_2[2];
  FUN_004a4180(&local_14c);
  local_140 = (double)local_14c;
  local_138 = (double)local_148;
  local_130 = (double)local_144;
  puVar1 = (undefined4 *)FUN_004a58b0(local_80,param_3);
  puVar2 = local_100;
  for (i = 0x20; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004f8bf0(local_100);
  FUN_004f3130(*(void **)((int)this + 8),local_120,&local_140,0);
  return;
}


/* ==== 004a1bf0 FUN_004a1bf0 ==== */

void __thiscall FUN_004a1bf0(void *this,float *param_2)

{
  undefined1 local_80 [96];
  double local_20;
  double local_18;
  double local_10;
  
  FUN_004f2b10(*(void **)((int)this + 8),(int)local_80);
  *param_2 = (float)local_20;
  param_2[1] = (float)local_18;
  param_2[2] = (float)local_10;
  return;
}


/* ==== 004a1c50 FUN_004a1c50 ==== */

void __thiscall FUN_004a1c50(void *this,undefined4 *param_2)

{
  undefined4 *puVar1;
  int i;
  undefined4 *puVar2;
  undefined4 local_c0 [16];
  undefined1 local_80 [128];
  
  FUN_004f2b10(*(void **)((int)this + 8),(int)local_80);
  puVar1 = (undefined4 *)FUN_004a5970(local_c0,local_80);
  puVar2 = local_c0;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = local_c0;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* ==== 004a1cb0 FUN_004a1cb0 ==== */

void __thiscall FUN_004a1cb0(void *this,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_004f3f20(*(undefined4 *)(*(int *)((int)this + 8) + 0xa4),&local_20,&local_10);
  *param_2 = local_10;
  param_2[1] = local_c;
  param_2[2] = local_8;
  return;
}


/* ==== 004a1d20 FUN_004a1d20 ==== */

void __thiscall FUN_004a1d20(void *this,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 this_val;
  
  local_30 = 0x3f800000;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0xbf800000;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x3f800000;
  this_val = *(undefined4 *)(*(int *)((int)this + 8) + 0xa4);
  fVar1 = (float10)FUN_004f43e0(this_val,&local_30);
  fVar2 = (float10)FUN_004f43e0(this_val,&local_20);
  fVar3 = (float10)FUN_004f43e0(this_val,&local_10);
  *param_2 = (float)fVar1;
  param_2[1] = (float)fVar2;
  param_2[2] = (float)fVar3;
  return;
}


/* ==== 004a1dd0 FUN_004a1dd0 ==== */

void FUN_004a1dd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)FUN_004a1bf0(in_ECX,local_c);
  local_18 = *puVar1;
  local_14 = puVar1[1];
  local_10 = puVar1[2];
  FUN_004a41b0(&local_18);
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}


/* ==== 004a1e20 FUN_004a1e20 ==== */

void FUN_004a1e20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
  int i;
  undefined4 *puVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)FUN_004a1c50(in_ECX,local_40);
  puVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  local_4c = local_10;
  local_48 = local_c;
  local_44 = local_8;
  FUN_004a41b0(&local_4c);
  local_c = local_48;
  local_8 = local_44;
  local_10 = local_4c;
  puVar1 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* ==== 004a1ea0 FUN_004a1ea0 ==== */

void FUN_004a1ea0(undefined4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_ECX;
  undefined1 local_c [12];
  
  puVar3 = (undefined4 *)FUN_004a1cb0(in_ECX,local_c);
  fVar1 = (float)puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = -fVar1;
  param_1[2] = uVar2;
  return;
}


/* ==== 004a1ee0 FUN_004a1ee0 ==== */

void FUN_004a1ee0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_ECX;
  undefined1 local_c [12];
  
  puVar3 = (undefined4 *)FUN_004a1d20(in_ECX,local_c);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


/* ==== 004a1f10 FUN_004a1f10 ==== */

undefined1 __thiscall FUN_004a1f10(void *this)

{
  return *(undefined1 *)((int)this + 0x24);
}


/* ==== 004a1f20 FUN_004a1f20 ==== */

void __thiscall FUN_004a1f20(void *this,undefined1 param_2)

{
  *(undefined1 *)((int)this + 0x24) = param_2;
  return;
}


/* ==== 004a1f30 FUN_004a1f30 ==== */

void __thiscall FUN_004a1f30(void *this,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *this_val;
  undefined4 uVar4;
  undefined1 local_40 [4];
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ee3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a5ba0(local_40);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  FUN_004a4180();
  FUN_004fb220(local_34,*(undefined4 *)((int)this + 8),(double)fVar1,(double)fVar2,(double)fVar3);
  local_3c = local_34;
  local_38 = local_34;
  this_val = operator_new(0x90);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a5bb0(this_val,*(undefined4 *)((int)this + 0x2c),local_40);
  }
  *(undefined4 *)((int)this + 0x10) = uVar4;
  ExceptionList = local_c;
  return;
}


/* ==== 004a2000 FUN_004a2000 ==== */

void __thiscall FUN_004a2000(void *this,undefined4 param_2)

{
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_004a5c70(*(int *)((int)this + 0x10),param_2);
  }
  return;
}


/* ==== 004a2040 FUN_004a2040 ==== */

void __thiscall FUN_004a2040(void *this,undefined4 param_2)

{
  *(undefined4 *)this = param_2;
  return;
}


/* ==== 004a2050 FUN_004a2050 ==== */

void __thiscall FUN_004a2050(void *this,float *param_2)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(*(int *)this + 8);
  local_4 = (float)*(double *)(iVar1 + 0x30);
  local_8 = (float)*(double *)(iVar1 + 0x28);
  local_c = (float)*(double *)(iVar1 + 0x20);
  FUN_004a41b0(&local_c);
  *param_2 = local_c;
  param_2[1] = local_8;
  param_2[2] = local_4;
  return;
}


/* ==== 004a20a0 FUN_004a20a0 ==== */

void __thiscall FUN_004a20a0(void *this,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(*(int *)this + 8);
  local_4 = *(undefined4 *)(iVar1 + 0x18);
  local_8 = *(undefined4 *)(iVar1 + 0x14);
  local_c = *(undefined4 *)(iVar1 + 0x10);
  FUN_004a41b0(&local_c);
  *param_2 = local_c;
  param_2[1] = local_8;
  param_2[2] = local_4;
  return;
}


/* ==== 004a20f0 FUN_004a20f0 ==== */

void __thiscall FUN_004a20f0(void *this,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(*(int *)this + 8);
  local_4 = puVar1[2];
  local_8 = puVar1[1];
  local_c = *puVar1;
  FUN_004a41b0(&local_c);
  *param_2 = local_c;
  param_2[1] = local_8;
  param_2[2] = local_4;
  return;
}


/* ==== 004a2140 FUN_004a2140 ==== */

undefined4 __thiscall FUN_004a2140(void *this)

{
  return *(undefined4 *)(*(int *)(*(int *)(*(int *)this + 8) + 0x40) + 0xb0);
}


/* ==== 004a2150 FUN_004a2150 ==== */

undefined4 __thiscall FUN_004a2150(void *this)

{
  return *(undefined4 *)(*(int *)(*(int *)(*(int *)this + 8) + 0x44) + 0xb0);
}


/* ==== 004a2190 FUN_004a2190 ==== */

void * __thiscall FUN_004a2190(void *this,byte param_2)

{
  FUN_004f6050();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a21b0 FUN_004a21b0 ==== */

void * __thiscall FUN_004a21b0(void *this,byte param_2)

{
  FUN_004a14c0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004a22a0 FUN_004a22a0 ==== */

void * __thiscall FUN_004a22a0(void *this)

{
  undefined4 *puVar1;
  int i;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ee66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a0210();
  local_4 = 0;
  FUN_004a0210((int)this + 0xb8);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004a0210((int)this + 0x170);
  *(undefined4 *)((int)this + 0x228) = 0xc1700000;
  *(undefined4 *)((int)this + 0x22c) = 0xc0000000;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x230) = 0x41700000;
  *(undefined4 *)((int)this + 0x234) = 0x41700000;
  *(undefined4 *)((int)this + 0x238) = 0xc0000000;
  *(undefined4 *)((int)this + 0x23c) = 0x41700000;
  *(undefined4 *)((int)this + 0x240) = 0xc1700000;
  *(undefined4 *)((int)this + 0x244) = 0xc0000000;
  *(undefined4 *)((int)this + 0x248) = 0xc1700000;
  *(undefined4 *)((int)this + 0x24c) = 0x41700000;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0xc0000000;
  *(undefined4 *)((int)this + 0x25c) = 0x3dcccccd;
  *(undefined4 *)((int)this + 0x260) = 0x3f000000;
  *(undefined4 *)((int)this + 0x264) = 0x40000000;
  *(undefined4 *)((int)this + 0x254) = 0xc1700000;
  *(undefined4 *)((int)this + 0x268) = 0x3fc00000;
  puVar1 = (undefined4 *)((int)this + 0x2a0);
  i = 4;
  do {
    puVar1[-4] = 0x466a6000;
    *puVar1 = 0x45fa0000;
    puVar1[4] = 0x44c80000;
    puVar1[8] = 0x45fa0000;
    puVar1[0xc] = 0x461c4000;
    puVar1 = puVar1 + 1;
    i = i + -1;
  } while (i != 0);
  *(undefined4 *)((int)this + 0x2d8) = 0x3f1c61aa;
  *(undefined4 *)((int)this + 0x2dc) = 0x41f00000;
  *(undefined4 *)((int)this + 0x2e0) = 0x42f00000;
  *(undefined4 *)((int)this + 0x2e4) = 0x457a0000;
  *(undefined4 *)((int)this + 0x2e8) = 0x44bb8000;
  *(undefined4 *)((int)this + 0x2ec) = 0x3f400000;
  *(undefined4 *)((int)this + 0x2f0) = 0x3f000000;
  *(undefined4 *)((int)this + 0x2f4) = 0x3fc00000;
  *(undefined4 *)((int)this + 0x2f8) = 0x41280000;
  *(undefined4 *)((int)this + 0x2fc) = 0x43340000;
  *(undefined4 *)((int)this + 0x300) = 0x40733333;
  *(undefined4 *)((int)this + 0x308) = 0x40333333;
  *(undefined4 *)((int)this + 0x30c) = 0x400ccccd;
  *(undefined4 *)((int)this + 0x310) = 0x3fa66666;
  *(undefined4 *)((int)this + 0x314) = 0x3f800000;
  *(undefined4 *)((int)this + 0x318) = 0x3f4ccccd;
  ExceptionList = local_c;
  return this;
}


