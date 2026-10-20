/* spel.dat — game/ai_new.cpp: 31 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00410bd0 FUN_00410bd0 ==== */

void __thiscall FUN_00410bd0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *this_val;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00569a17;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_2 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *param_2 = *param_3;
    param_2[4] = param_3[4];
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    FUN_004093c0(param_2 + 4,param_3 + 4,0,0xffffffff);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    local_4._0_1_ = 1;
    *(undefined ***)(param_2 + 0x18) = &PTR_LAB_00576408;
    this_val = operator_new(0x10);
    if (this_val == (undefined1 *)0x0) {
      this_val = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(this_val + 4) = 0;
      *this_val = param_2._0_1_;
      *(undefined4 *)(this_val + 8) = 0;
      *(undefined4 *)(this_val + 0xc) = 0;
    }
    *(undefined1 **)(param_2 + 0x1c) = this_val;
    FUN_00411a00(this_val,*(undefined4 *)(param_3 + 0x1c));
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined ***)(param_2 + 0x20) = &PTR_LAB_005763f8;
    this_val = operator_new(0x10);
    if (this_val == (undefined1 *)0x0) {
      this_val = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(this_val + 4) = 0;
      *this_val = param_2._0_1_;
      *(undefined4 *)(this_val + 8) = 0;
      *(undefined4 *)(this_val + 0xc) = 0;
    }
    *(undefined1 **)(param_2 + 0x24) = this_val;
    FUN_00411c80(this_val,*(undefined4 *)(param_3 + 0x24));
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00410d00 FUN_00410d00 ==== */

int __thiscall FUN_00410d00(void *this)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)this)();
  return *(int *)(*(int *)((int)this + 4) + 4) + (iVar1 + -1) * 0x18;
}


/* ==== 00410db0 FUN_00410db0 ==== */

int __thiscall FUN_00410db0(void *this)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)this)();
  return *(int *)(*(int *)((int)this + 4) + 4) + (iVar1 + -1) * 0xc;
}


/* ==== 00410e30 FUN_00410e30 ==== */

/* WARNING: Removing unreachable block (ram,0x00410e81) */

void __thiscall FUN_00410e30(void *this,undefined1 *this_val,undefined1 *param_2)

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
  
  puStack_8 = &LAB_00569a41;
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
      FUN_005580e0(uVar2 + *(int *)(this_val + 4),uVar2 + *(int *)(this_val + 4) + iVar6,
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
        goto LAB_00410f65;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar2,1);
    if (cVar3 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
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
      *(uint *)(this_val + 8) = uVar2;
      *(undefined1 *)(*(int *)(this_val + 4) + uVar2) = 0;
    }
  }
LAB_00410f65:
  *(undefined4 *)(this_val + 0x10) = *(undefined4 *)(param_2 + 0x10);
  ExceptionList = local_c;
  return;
}


/* ==== 00410f80 FUN_00410f80 ==== */

/* WARNING: Removing unreachable block (ram,0x00410fd1) */

void __thiscall FUN_00410f80(void *this,undefined1 *this_val,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  uint i;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00569a61;
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
    iVar7 = -1;
    if (iVar4 != -1) {
      iVar7 = iVar4;
    }
    if (iVar7 != 0) {
      FUN_005580e0(uVar2 + *(int *)(this_val + 4),uVar2 + *(int *)(this_val + 4) + iVar7,
                   iVar4 - iVar7);
      iVar4 = *(int *)(this_val + 8);
      cVar3 = FUN_00402a00(this_val,iVar4 - iVar7,0);
      if (cVar3 != '\0') {
        FUN_004029e0(this_val,iVar4 - iVar7);
      }
    }
    FUN_0040f800(this_val,0,0);
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
        goto LAB_004110b9;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar2,1);
    if (cVar3 != '\0') {
      puVar6 = *(undefined4 **)(param_2 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)(this_val + 4);
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(this_val + 8) = uVar2;
      *(undefined1 *)(*(int *)(this_val + 4) + uVar2) = 0;
    }
  }
LAB_004110b9:
  *(undefined4 *)(this_val + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this_val + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this_val + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(this_val + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(this_val + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(this_val + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(this_val + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(this_val + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(this_val + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(this_val + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(this_val + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(this_val + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(this_val + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(this_val + 0x44) = *(undefined4 *)(param_2 + 0x44);
  this_val[0x48] = param_2[0x48];
  *(undefined4 *)(this_val + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(this_val + 0x50) = *(undefined4 *)(param_2 + 0x50);
  ExceptionList = local_c;
  return;
}


/* ==== 00411140 FUN_00411140 ==== */

/* WARNING: Removing unreachable block (ram,0x00411168) */

void * __thiscall FUN_00411140(void *this,undefined1 *param_2)

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
  
  *(undefined1 *)this = *param_2;
  uVar1 = *(uint *)(param_2 + 0xc);
  this_val = (undefined1 *)((int)this + 4);
  if (this_val == param_2 + 4) {
    if (*(uint *)((int)this + 0xc) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0xc) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 8);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0xc) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 8);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar6 = *(int *)((int)this + 8);
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar6 + -1));
          }
          else {
            *(char *)(iVar6 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        this_val = *(undefined1 **)(param_2 + 8);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 8) = this_val;
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0x10);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_00411279;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)((int)this + 8);
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
      *(uint *)((int)this + 0xc) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 8) + uVar1) = 0;
    }
  }
LAB_00411279:
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  FUN_00411320((int)this + 0x18,param_2 + 0x18);
  FUN_00411770((int)this + 0x20,param_2 + 0x20);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  return this;
}


/* ==== 004112c0 FUN_004112c0 ==== */

void * __thiscall FUN_004112c0(void *this,byte param_2)

{
  FUN_00416ad0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004112e0 FUN_004112e0 ==== */

void * __thiscall FUN_004112e0(void *this,byte param_2)

{
  FUN_00401240();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00411300 FUN_00411300 ==== */

void * __thiscall FUN_00411300(void *this,byte param_2)

{
  FUN_004013b0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00411320 FUN_00411320 ==== */

void * __thiscall FUN_00411320(void *this,int param_2)

{
  undefined1 *operator_new_result_2;
  void *operator_new_result;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int this_val;
  int iVar5;
  undefined1 *this_val_2;
  
  operator_new_result_2 = operator_new(0x10);
  if (operator_new_result_2 == (undefined1 *)0x0) {
    operator_new_result_2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result_2 + 4) = 0;
    *operator_new_result_2 = (undefined1)param_2;
    *(undefined4 *)(operator_new_result_2 + 8) = 0;
    *(undefined4 *)(operator_new_result_2 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 4) = operator_new_result_2;
  this_val_2 = *(undefined1 **)(param_2 + 4);
  if (operator_new_result_2 == this_val_2) {
    return this;
  }
  iVar5 = *(int *)(this_val_2 + 4);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(this_val_2 + 8) - iVar5) / 0x18;
  }
  uVar2 = 0;
  this_val = *(int *)(operator_new_result_2 + 4);
  if (this_val != 0) {
    uVar2 = (*(int *)(operator_new_result_2 + 8) - this_val) / 0x18;
  }
  if (uVar4 <= uVar2) {
    iVar3 = *(int *)(this_val_2 + 8);
    for (; iVar5 != iVar3; iVar5 = iVar5 + 0x18) {
      FUN_004115a0(this_val,iVar5);
      this_val = this_val + 0x18;
    }
    iVar5 = *(int *)(operator_new_result_2 + 8);
    for (; this_val != iVar5; this_val = this_val + 0x18) {
      FUN_004116f0(this_val,0);
    }
    if (*(int *)(this_val_2 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(this_val_2 + 8) - *(int *)(this_val_2 + 4)) / 0x18;
    }
    *(int *)(operator_new_result_2 + 8) = *(int *)(operator_new_result_2 + 4) + iVar5 * 0x18;
    return this;
  }
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(this_val_2 + 8) - iVar5) / 0x18;
  }
  if (this_val == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(operator_new_result_2 + 0xc) - this_val) / 0x18;
  }
  if (uVar4 <= uVar2) {
    if (this_val == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(operator_new_result_2 + 8) - this_val) / 0x18;
    }
    iVar3 = iVar5 + iVar3 * 0x18;
    for (; iVar5 != iVar3; iVar5 = iVar5 + 0x18) {
      FUN_004115a0(this_val,iVar5);
      this_val = this_val + 0x18;
    }
    iVar5 = *(int *)(this_val_2 + 8);
    for (; iVar3 != iVar5; iVar3 = iVar3 + 0x18) {
      FUN_00411fb0();
    }
    if (*(int *)(this_val_2 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(this_val_2 + 8) - *(int *)(this_val_2 + 4)) / 0x18;
    }
    *(int *)(operator_new_result_2 + 8) = *(int *)(operator_new_result_2 + 4) + iVar5 * 0x18;
    return this;
  }
  iVar5 = *(int *)(operator_new_result_2 + 8);
  for (; this_val != iVar5; this_val = this_val + 0x18) {
    FUN_004116f0(this_val,0);
  }
  FUN_0054b339(*(undefined4 *)(operator_new_result_2 + 4));
  iVar5 = FUN_004d2ce0(this_val_2);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  operator_new_result = operator_new(iVar5 * 0x18);
  *(void **)(operator_new_result_2 + 4) = operator_new_result;
  uVar1 = FUN_00411f20(*(undefined4 *)(this_val_2 + 4),*(undefined4 *)(this_val_2 + 8),
                       operator_new_result);
  *(undefined4 *)(operator_new_result_2 + 8) = uVar1;
  *(undefined4 *)(operator_new_result_2 + 0xc) = uVar1;
  return this;
}


/* ==== 004115a0 FUN_004115a0 ==== */

/* WARNING: Removing unreachable block (ram,0x004115c6) */

void __thiscall FUN_004115a0(void *this,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  int iVar6;
  undefined4 *this_val;
  undefined4 *puVar7;
  
  this_val = (undefined4 *)((int)this + 4);
  *(undefined4 *)this = *param_2;
  uVar1 = param_2[3];
  if (this_val == param_2 + 1) {
    if (*(uint *)((int)this + 0xc) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0xc) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 8);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0xc) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_2[2];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar6 = *(int *)((int)this + 8);
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar6 + -1));
          }
          else {
            *(char *)(iVar6 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        puVar4 = (undefined1 *)param_2[2];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 8) = puVar4;
        *(undefined4 *)((int)this + 0xc) = param_2[3];
        *(undefined4 *)((int)this + 0x10) = param_2[4];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004116d1;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      this_val = (undefined4 *)param_2[2];
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar7 = *this_val;
        this_val = this_val + 1;
        puVar7 = puVar7 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)this_val;
        this_val = (undefined4 *)((int)this_val + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)((int)this + 0xc) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 8) + uVar1) = 0;
    }
  }
LAB_004116d1:
  *(undefined4 *)((int)this + 0x14) = param_2[5];
  return;
}


/* ==== 004116f0 FUN_004116f0 ==== */

void * __thiscall FUN_004116f0(void *this,byte param_2)

{
  FUN_0041e3a0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00411710 FUN_00411710 ==== */

void __thiscall FUN_00411710(void *this)

{
  int iVar1;
  int iVar2;
  int this_val;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00576408;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (this_val = *(int *)(iVar1 + 4); this_val != iVar2; this_val = this_val + 0x18) {
    FUN_0041e3a0(this_val);
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 00411770 FUN_00411770 ==== */

void * __thiscall FUN_00411770(void *this,int param_2)

{
  undefined1 *operator_new_result_2;
  undefined4 *puVar1;
  void *operator_new_result;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *this_val;
  undefined4 *puVar6;
  undefined1 *this_val_2;
  
  operator_new_result_2 = operator_new(0x10);
  if (operator_new_result_2 == (undefined1 *)0x0) {
    operator_new_result_2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result_2 + 4) = 0;
    *operator_new_result_2 = (undefined1)param_2;
    *(undefined4 *)(operator_new_result_2 + 8) = 0;
    *(undefined4 *)(operator_new_result_2 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 4) = operator_new_result_2;
  this_val_2 = *(undefined1 **)(param_2 + 4);
  if (operator_new_result_2 == this_val_2) {
    return this;
  }
  puVar1 = *(undefined4 **)(this_val_2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(this_val_2 + 8) - (int)puVar1) / 0xc;
  }
  uVar4 = 0;
  this_val = *(undefined4 **)(operator_new_result_2 + 4);
  if (this_val != (undefined4 *)0x0) {
    uVar4 = (*(int *)(operator_new_result_2 + 8) - (int)this_val) / 0xc;
  }
  if (uVar4 < uVar5) {
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(this_val_2 + 8) - (int)puVar1) / 0xc;
    }
    if (this_val == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(int *)(operator_new_result_2 + 0xc) - (int)this_val) / 0xc;
    }
    if (uVar4 < uVar5) {
      puVar1 = *(undefined4 **)(operator_new_result_2 + 8);
      for (; this_val != puVar1; this_val = this_val + 3) {
        FUN_004119e0(this_val,0);
      }
      FUN_0054b339(*(undefined4 *)(operator_new_result_2 + 4));
      iVar3 = FUN_004119c0(this_val_2);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      operator_new_result = operator_new(iVar3 * 0xc);
      *(void **)(operator_new_result_2 + 4) = operator_new_result;
      uVar2 = FUN_00411f60(*(undefined4 *)(this_val_2 + 4),*(undefined4 *)(this_val_2 + 8),
                           operator_new_result);
      *(undefined4 *)(operator_new_result_2 + 8) = uVar2;
      *(undefined4 *)(operator_new_result_2 + 0xc) = uVar2;
      return this;
    }
    if (this_val == (undefined4 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(operator_new_result_2 + 8) - (int)this_val) / 0xc;
    }
    puVar6 = puVar1 + iVar3 * 3;
    for (; puVar1 != puVar6; puVar1 = puVar1 + 3) {
      *this_val = *puVar1;
      this_val[1] = puVar1[1];
      this_val[2] = puVar1[2];
      this_val = this_val + 3;
    }
    puVar1 = *(undefined4 **)(this_val_2 + 8);
    iVar3 = *(int *)(operator_new_result_2 + 8);
    for (; puVar6 != puVar1; puVar6 = puVar6 + 3) {
      FUN_00412110(iVar3,puVar6);
      iVar3 = iVar3 + 0xc;
    }
    iVar3 = *(int *)(this_val_2 + 4);
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00411862;
    }
  }
  else {
    puVar6 = *(undefined4 **)(this_val_2 + 8);
    for (; puVar1 != puVar6; puVar1 = puVar1 + 3) {
      *this_val = *puVar1;
      this_val[1] = puVar1[1];
      this_val[2] = puVar1[2];
      this_val = this_val + 3;
    }
    puVar1 = *(undefined4 **)(operator_new_result_2 + 8);
    for (; this_val != puVar1; this_val = this_val + 3) {
      FUN_004119e0(this_val,0);
    }
    iVar3 = *(int *)(this_val_2 + 4);
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00411862;
    }
  }
  iVar3 = (*(int *)(this_val_2 + 8) - iVar3) / 0xc;
LAB_00411862:
  *(int *)(operator_new_result_2 + 8) = *(int *)(operator_new_result_2 + 4) + iVar3 * 0xc;
  return this;
}


/* ==== 004119c0 FUN_004119c0 ==== */

int __thiscall FUN_004119c0(void *this)

{
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
}


/* ==== 004119e0 FUN_004119e0 ==== */

void * __thiscall FUN_004119e0(void *this,byte param_2)

{
  FUN_0041e410();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00411a00 FUN_00411a00 ==== */

void * __thiscall FUN_00411a00(void *this,void *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int this_val;
  
  if (this == param_2) {
    return this;
  }
  iVar4 = *(int *)((int)param_2 + 4);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)param_2 + 8) - iVar4) / 0x18;
  }
  this_val = *(int *)((int)this + 4);
  if (this_val == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)((int)this + 8) - this_val) / 0x18;
  }
  if (uVar5 <= uVar2) {
    iVar3 = *(int *)((int)param_2 + 8);
    for (; iVar4 != iVar3; iVar4 = iVar4 + 0x18) {
      FUN_004115a0(this_val,iVar4);
      this_val = this_val + 0x18;
    }
    iVar4 = *(int *)((int)this + 8);
    for (; this_val != iVar4; this_val = this_val + 0x18) {
      FUN_004116f0(this_val,0);
    }
    if (*(int *)((int)param_2 + 4) != 0) {
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) +
           ((*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4)) / 0x18) * 0x18;
      return this;
    }
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
    return this;
  }
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)param_2 + 8) - iVar4) / 0x18;
  }
  if (this_val == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)((int)this + 0xc) - this_val) / 0x18;
  }
  if (uVar2 < uVar5) {
    iVar4 = *(int *)((int)this + 8);
    for (; this_val != iVar4; this_val = this_val + 0x18) {
      FUN_0041e3a0(this_val);
    }
    FUN_0054b339(*(undefined4 *)((int)this + 4));
    if (*(int *)((int)param_2 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4)) / 0x18;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    pvVar1 = operator_new(iVar4 * 0x18);
    *(void **)((int)this + 4) = pvVar1;
    iVar4 = *(int *)((int)param_2 + 8);
    for (this_val = *(int *)((int)param_2 + 4); this_val != iVar4; this_val = this_val + 0x18) {
      FUN_00411fb0();
      pvVar1 = (void *)((int)pvVar1 + 0x18);
    }
    *(void **)((int)this + 8) = pvVar1;
    *(void **)((int)this + 0xc) = pvVar1;
    return this;
  }
  if (this_val == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)((int)this + 8) - this_val) / 0x18;
  }
  iVar3 = iVar4 + iVar3 * 0x18;
  for (; iVar4 != iVar3; iVar4 = iVar4 + 0x18) {
    FUN_004115a0(this_val,iVar4);
    this_val = this_val + 0x18;
  }
  iVar4 = *(int *)((int)param_2 + 8);
  for (; iVar3 != iVar4; iVar3 = iVar3 + 0x18) {
    FUN_00411fb0();
  }
  if (*(int *)((int)param_2 + 4) != 0) {
    *(int *)((int)this + 8) =
         *(int *)((int)this + 4) +
         ((*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4)) / 0x18) * 0x18;
    return this;
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
  return this;
}


/* ==== 00411c80 FUN_00411c80 ==== */

void * __thiscall FUN_00411c80(void *this,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *this_val;
  
  if (this != param_2) {
    puVar1 = *(undefined4 **)((int)param_2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)((int)param_2 + 8) - (int)puVar1) / 0xc;
    }
    this_val = *(undefined4 **)((int)this + 4);
    if (this_val == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)((int)this + 8) - (int)this_val) / 0xc;
    }
    if (uVar5 <= uVar3) {
      puVar2 = *(undefined4 **)((int)param_2 + 8);
      for (; puVar1 != puVar2; puVar1 = puVar1 + 3) {
        *this_val = *puVar1;
        this_val[1] = puVar1[1];
        this_val[2] = puVar1[2];
        this_val = this_val + 3;
      }
      puVar1 = *(undefined4 **)((int)this + 8);
      for (; this_val != puVar1; this_val = this_val + 3) {
        FUN_004119e0(this_val,0);
      }
      if (*(int *)((int)param_2 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return this;
      }
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) +
           ((*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4)) / 0xc) * 0xc;
      return this;
    }
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)((int)param_2 + 8) - (int)puVar1) / 0xc;
    }
    if (this_val == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)((int)this + 0xc) - (int)this_val) / 0xc;
    }
    if (uVar5 <= uVar3) {
      if (this_val == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 8) - (int)this_val) / 0xc;
      }
      puVar2 = puVar1 + iVar4 * 3;
      for (; puVar1 != puVar2; puVar1 = puVar1 + 3) {
        *this_val = *puVar1;
        this_val[1] = puVar1[1];
        this_val[2] = puVar1[2];
        this_val = this_val + 3;
      }
      puVar1 = *(undefined4 **)((int)param_2 + 8);
      this_val = *(undefined4 **)((int)this + 8);
      for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
        if (this_val != (undefined4 *)0x0) {
          *this_val = *puVar2;
          this_val[1] = puVar2[1];
          this_val[2] = puVar2[2];
        }
        this_val = this_val + 3;
      }
      if (*(int *)((int)param_2 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return this;
      }
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) +
           ((*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4)) / 0xc) * 0xc;
      return this;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    for (; this_val != puVar1; this_val = this_val + 3) {
      FUN_0041e410();
    }
    FUN_0054b339(*(undefined4 *)((int)this + 4));
    if (*(int *)((int)param_2 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4)) / 0xc;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    puVar2 = operator_new(iVar4 * 0xc);
    *(undefined4 **)((int)this + 4) = puVar2;
    puVar1 = *(undefined4 **)((int)param_2 + 8);
    for (this_val = *(undefined4 **)((int)param_2 + 4); this_val != puVar1; this_val = this_val + 3)
    {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *this_val;
        puVar2[1] = this_val[1];
        puVar2[2] = this_val[2];
      }
      puVar2 = puVar2 + 3;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2;
  }
  return this;
}


/* ==== 00411f20 FUN_00411f20 ==== */

int FUN_00411f20(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00411fb0(in_ECX,param_3,param_1);
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 0x18;
    in_ECX = extraout_ECX;
  } while (param_1 != param_2);
  return param_3;
}


/* ==== 00411f60 FUN_00411f60 ==== */

undefined4 * FUN_00411f60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* ==== 00411fb0 FUN_00411fb0 ==== */

/* WARNING: Removing unreachable block (ram,0x0041200c) */

void __thiscall FUN_00411fb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  uint i;
  int iVar6;
  undefined4 *this_val;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00569a81;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  this_val = param_2 + 1;
  ExceptionList = &local_c;
  *param_2 = *param_3;
  uVar1 = *(undefined1 *)(param_3 + 1);
  param_2[2] = 0;
  *(undefined1 *)this_val = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar2 = param_3[3];
  if (this_val == param_3 + 1) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar4 = param_2[3] - uVar2;
    iVar6 = -1;
    if (iVar4 != -1) {
      iVar6 = iVar4;
    }
    if (iVar6 != 0) {
      FUN_005580e0(uVar2 + param_2[2],uVar2 + param_2[2] + iVar6,iVar4 - iVar6);
      iVar4 = param_2[3];
      cVar3 = FUN_00402a00(this_val,iVar4 - iVar6,0);
      if (cVar3 != '\0') {
        FUN_004029e0(this_val,iVar4 - iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar2 != 0) {
      puVar5 = (undefined1 *)param_3[2];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar5 = (undefined1 *)param_3[2];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        param_2[2] = puVar5;
        param_2[3] = param_3[3];
        param_2[4] = param_3[4];
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004120ea;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar2,1);
    if (cVar3 != '\0') {
      this_val = (undefined4 *)param_3[2];
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)param_2[2];
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar7 = *this_val;
        this_val = this_val + 1;
        puVar7 = puVar7 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)this_val;
        this_val = (undefined4 *)((int)this_val + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      param_2[3] = uVar2;
      *(undefined1 *)(param_2[2] + uVar2) = 0;
    }
  }
LAB_004120ea:
  param_2[5] = param_3[5];
  ExceptionList = local_c;
  return;
}


/* ==== 00412110 FUN_00412110 ==== */

void FUN_00412110(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}


/* ==== 00412130 FUN_00412130 ==== */

undefined4 FUN_00412130(int param_1,float param_2,undefined4 param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_00715e50 + param_1 * 0xf0;
  iVar4 = *(int *)(iVar5 + 0x3c) * 0x50 + DAT_00715eb8;
  if ((((*(int *)(iVar4 + 0x14) < 0) && (*(int *)(iVar4 + 0x1c) < 0)) &&
      (*(int *)(iVar4 + 0x18) < 0)) && (*(int *)(iVar4 + 0x20) < 0)) {
    iVar4 = FUN_00403ea0(param_1,param_2,param_3,param_4);
    if ((0x3ff < iVar4) && (iVar4 < 0xc00)) {
      return 1;
    }
  }
  else {
    pfVar1 = (float *)(DAT_00715f00 + 0x58 + *(int *)(iVar5 + 0x34) * 0x994);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[2];
    iVar4 = *(int *)(iVar5 + 0x24);
    param_2 = param_2 - *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
    param_4 = param_4 - *(float *)(DAT_0073b0d0 + iVar4 + 0x58 + iVar4 * 0xa8);
    if ((fVar2 * param_2 + fVar3 * param_4) /
        (SQRT(fVar2 * fVar2 + fVar3 * fVar3) + SQRT(param_2 * param_2 + param_4 * param_4)) < 0.0) {
      return 1;
    }
  }
  return 0;
}


/* ==== 00412270 FUN_00412270 ==== */

void FUN_00412270(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_006fb8fc;
  iVar2 = param_1 * 0x294;
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  switch(param_2) {
  case 4:
    (&DAT_005cea78)[param_1 * 0xa5] = DAT_005d1b3c;
    return;
  case 5:
    (&DAT_005cea78)[param_1 * 0xa5] = DAT_005d1b40;
    return;
  case 6:
    (&DAT_005cea78)[param_1 * 0xa5] = DAT_005d1b44;
    return;
  default:
    return;
  case 8:
    (&DAT_005cea78)[param_1 * 0xa5] = DAT_005d1b48;
    return;
  case 0xe:
    break;
  case 0xf:
    *(undefined4 *)(&DAT_005cea74 + iVar2) = 0xf;
    return;
  }
  if ((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0) {
    (&DAT_005973d0)[param_1 * 0x16] = 1;
  }
  else {
    if ((*(int *)(&DAT_005cea74 + iVar2) != 0xf) ||
       (*(int *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50) <= *(int *)(&DAT_005cea70 + iVar2))) {
      *(undefined4 *)(&DAT_005cea74 + iVar2) = 0xe;
      return;
    }
    *(int *)(&DAT_005cea3c + iVar2) = *(int *)(&DAT_005cea3c + iVar2) + 1;
    *(undefined4 *)(&DAT_005cea74 + iVar2) = 0xe;
    if (*(int *)(&DAT_005cea3c + iVar2) < iVar1) {
      return;
    }
    iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
    (&DAT_005973d0)[param_1 * 0x16] = 1;
  }
  FUN_0042e340(iVar3);
  (&DAT_005ce9ec)[param_1 * 0xa5] = 9;
  return;
}


/* ==== 004123d0 FUN_004123d0 ==== */

void FUN_004123d0(int param_1,int param_2)

{
  if (((0xd < param_2) && (param_2 < 0x10)) && ((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0)) {
    (&DAT_005ce9ec)[param_1 * 0xa5] = 9;
  }
  return;
}


/* ==== 00412410 FUN_00412410 ==== */

void FUN_00412410(int param_1)

{
  int i;
  int iVar1;
  
  i = 2;
  iVar1 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50) * 0x994 + 0xfc;
  do {
    FUN_00412270(param_1,*(undefined4 *)(iVar1 + DAT_00715f00));
    iVar1 = iVar1 + 4;
    i = i + -1;
  } while (i != 0);
  FUN_00412270(param_1,*(undefined4 *)
                        (*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x3c + DAT_00715e50) *
                         0x50 + 4 + DAT_00715eb8));
  return;
}


/* ==== 004124b0 FUN_004124b0 ==== */

void FUN_004124b0(int param_1)

{
  int i;
  int iVar1;
  
  if ((DAT_006fb8a0 == 3) || (DAT_006fb8a0 == 6)) {
    FUN_00423990((&DAT_005ce9e8)[param_1 * 0xa5],0);
  }
  i = 2;
  iVar1 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50) * 0x994 + 0xfc;
  do {
    FUN_004123d0(param_1,*(undefined4 *)(iVar1 + DAT_00715f00));
    iVar1 = iVar1 + 4;
    i = i + -1;
  } while (i != 0);
  FUN_004123d0(param_1,*(undefined4 *)
                        (*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x3c + DAT_00715e50) *
                         0x50 + 4 + DAT_00715eb8));
  return;
}


/* ==== 00412570 FUN_00412570 ==== */

void FUN_00412570(int param_1)

{
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  
  if ((DAT_006fb8c0 != 0) && (DAT_006fb89c != 0)) {
    if ((param_1 < 0) || (0x12 < param_1)) {
      FUN_004c4150(s__s__d____Illegal_FSM_object_inde_00592898,
                   s_C__Work_A2IV_Game_prog_ai_new_cp_00592874,0x1b6,param_1);
      in_ECX = extraout_ECX;
    }
    switch((&DAT_005ce9ec)[param_1 * 0xa5]) {
    case 0:
      FUN_00419e00(param_1);
      break;
    default:
      FUN_004c4150(s__s__d____State_missing_in_switch_005928e4,
                   s_C__Work_A2IV_Game_prog_ai_new_cp_005928c0,0x225,(&DAT_005ce9ec)[param_1 * 0xa5]
                  );
      break;
    case 5:
      FUN_00409160(param_1);
      break;
    case 6:
      FUN_00409230(param_1);
      break;
    case 7:
      FUN_0041a520(param_1);
      break;
    case 8:
      FUN_00408f00(param_1);
      return;
    case 9:
      FUN_00419000(param_1);
      break;
    case 10:
      FUN_00419e80(param_1);
      break;
    case 0xf:
      FUN_00408df0(param_1);
      break;
    case 0x12:
      FUN_004191c0(param_1);
      break;
    case 0x13:
      FUN_00413520(param_1);
      break;
    case 0x14:
      FUN_00419f70(param_1);
      break;
    case 0x15:
      FUN_0041a000(param_1);
      break;
    case 0x16:
    case 0x17:
      FUN_0041a1a0(param_1);
      break;
    case 0x18:
      FUN_00408cb0(param_1);
      break;
    case 0x19:
      FUN_00408e10(param_1);
      break;
    case 0x1a:
      FUN_00409070(param_1);
      if ((&DAT_005ce9e8)[param_1 * 0xa5] == -1) {
        return;
      }
      break;
    case 0x1b:
      FUN_0041a6d0(param_1);
      break;
    case 0x1c:
      FUN_0041a720(param_1);
      break;
    case 0x1d:
      FUN_0041f070(param_1);
      break;
    case 0x1e:
      FUN_0041f350(param_1);
      break;
    case 0x1f:
      FUN_0041f5d0(param_1);
      break;
    case 0x21:
      FUN_0041fca0(in_ECX,param_1);
      break;
    case 0x22:
      FUN_0041f5e0(in_ECX,param_1);
      break;
    case 0x23:
      FUN_0041f9f0(param_1);
      break;
    case 0x24:
      FUN_0041fbd0(param_1);
      break;
    case 0x25:
      FUN_0041fb50(param_1);
      break;
    case 0x26:
      FUN_004200e0(param_1);
      break;
    case 0x27:
      FUN_00420740(param_1);
      break;
    case 0x28:
      FUN_00420ca0(param_1);
      break;
    case 0x29:
      FUN_004210e0(in_ECX,param_1);
    }
    if (-1 < (int)(&DAT_005ce9e8)[param_1 * 0xa5]) {
      FUN_00417ea0(param_1);
    }
    if ((-1 < param_1) && (param_1 < 6)) {
      FUN_00412410(param_1);
      return;
    }
    FUN_004124b0(param_1);
  }
  return;
}


/* ==== 004128a0 FUN_004128a0 ==== */

void FUN_004128a0(void)

{
  char cVar1;
  undefined4 this_val_2;
  undefined4 this_val;
  int iVar2;
  int m;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int j;
  int i;
  undefined1 *puVar6;
  int *local_38;
  int k;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  i = DAT_006fbaa4;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569aa0;
  local_c = ExceptionList;
  j = 0;
  if (DAT_006fb964 == 0) {
    DAT_006fbaa4 = 0;
    return;
  }
  ExceptionList = &local_c;
  if ((DAT_006fba98 == 0) && (DAT_006fbaa4 = 0, ExceptionList = &local_c, 0 < DAT_005d2ab0)) {
    piVar3 = &DAT_005cea38;
    ExceptionList = &local_c;
    do {
      if (DAT_006fbab4 < *piVar3) {
LAB_0041296d:
        DAT_006fbaa4 = DAT_006fbaa4 + 1;
      }
      else if (DAT_006fbab4 == *piVar3) {
        iVar2 = DAT_0073b0d0 + *(int *)(piVar3[-0x14] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
        iVar2 = FUN_00412130(DAT_006fba58,*(undefined4 *)(iVar2 + 0x50),
                             *(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(iVar2 + 0x58));
        if (iVar2 == 0) goto LAB_0041296d;
      }
      j = j + 1;
      piVar3 = piVar3 + 0xa5;
    } while (j < DAT_005d2ab0);
  }
  k = 0;
  j = DAT_005d2ab0;
  if (0 < DAT_005d2ab0) {
    piVar3 = &DAT_005973c8;
    local_38 = &DAT_005cea38;
    do {
      if (piVar3[2] == 0) {
        m = 0;
        iVar2 = local_38[-0x14];
        *piVar3 = 0;
        if (0 < j) {
          piVar4 = &DAT_005cea38;
          do {
            if (m != k) {
              if (*local_38 < *piVar4) {
LAB_00412a2d:
                *piVar3 = *piVar3 + 1;
              }
              else if (*local_38 == *piVar4) {
                j = DAT_0073b0d0 + *(int *)(piVar4[-0x14] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
                j = FUN_00412130(iVar2,*(undefined4 *)(j + 0x50),*(undefined4 *)(j + 0x54),
                                 *(undefined4 *)(j + 0x58));
                if (j == 0) goto LAB_00412a2d;
              }
            }
            m = m + 1;
            piVar4 = piVar4 + 0xa5;
            j = DAT_005d2ab0;
          } while (m < DAT_005d2ab0);
        }
        if (DAT_006fbaa4 <= *piVar3) {
          *piVar3 = *piVar3 + 1;
        }
      }
      k = k + 1;
      local_38 = local_38 + 0xa5;
      piVar3 = piVar3 + 0x16;
    } while (k < j);
  }
  if (i < DAT_006fbaa4) {
    i = 0;
    if (0 < j) {
      puVar5 = &DAT_005973c0;
      do {
        if (puVar5[2] == DAT_006fbaa4 + -1) {
          FUN_0049df90(local_2c,s__racer_dpassing_00592914);
          this_val = puVar5[3];
          puVar6 = local_2c;
          local_4 = 0;
          this_val_2 = FUN_004891a0(puVar6,this_val);
          FUN_0048a910(this_val_2,puVar6,this_val);
          local_4 = 0xffffffff;
          if (local_28 != 0) {
            cVar1 = *(char *)(local_28 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_0054b339(local_28 + -1);
            }
            else {
              *(char *)(local_28 + -1) = cVar1 + -1;
            }
          }
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
        }
        i = i + 1;
        puVar5 = puVar5 + 0x16;
      } while (i < DAT_005d2ab0);
    }
  }
  else if ((DAT_006fbaa4 < i) && (i = 0, 0 < j)) {
    puVar5 = &DAT_005973c0;
    do {
      if (puVar5[2] == DAT_006fbaa4 + 1) {
        FUN_0049df90(local_1c,s__racer_dpassed_00592924);
        this_val = puVar5[3];
        puVar6 = local_1c;
        local_4 = 1;
        this_val_2 = FUN_004891a0(puVar6,this_val);
        FUN_0048a910(this_val_2,puVar6,this_val);
        local_4 = 0xffffffff;
        if (local_18 != 0) {
          cVar1 = *(char *)(local_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(local_18 + -1);
          }
          else {
            *(char *)(local_18 + -1) = cVar1 + -1;
          }
        }
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
      }
      i = i + 1;
      puVar5 = puVar5 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  j = __ftol();
  this_val = DAT_006fba58;
  i = j + DAT_006fba5c * 0x14;
  if ((&DAT_005d2cb0)[i] == -1) {
    (&DAT_005d2cb0)[i] = DAT_006fbaa4;
    this_val = FUN_00426f60(&DAT_005d3460,this_val);
    this_val = FUN_00425300(this_val);
    (&DAT_005d2ee0)[j + DAT_006fba5c * 0x14] = this_val;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00412c60 FUN_00412c60 ==== */

undefined4 FUN_00412c60(void)

{
  int *piVar1;
  int i;
  undefined4 *puVar2;
  
  i = 0;
  if (DAT_005973c8 != DAT_006fbaa4 + 1) {
    puVar2 = &DAT_005973c8;
    do {
      if (DAT_005d2ab0 <= i) break;
      piVar1 = puVar2 + 0x16;
      puVar2 = puVar2 + 0x16;
      i = i + 1;
    } while (*piVar1 != DAT_006fbaa4 + 1);
  }
  if (i != DAT_005d2ab0) {
    return (&DAT_005ce9e8)[i * 0xa5];
  }
  return 0xffffffff;
}


/* ==== 00412e20 FUN_00412e20 ==== */

void __thiscall FUN_00412e20(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int i;
  int iVar4;
  undefined1 local_4 [4];
  
  iVar1 = param_2;
  iVar4 = *(int *)(param_2 * 0xf0 + 0x34 + DAT_00715e50) + -2;
  if (iVar4 < 0) {
    iVar4 = iVar4 + DAT_00715f04;
  }
  piVar2 = &DAT_005cf960;
  do {
    if (*piVar2 == param_2) {
      return;
    }
    piVar2 = piVar2 + 0xa5;
  } while ((int)piVar2 < 0x5d15bd);
  i = 0;
  if (0 < DAT_005d2ab0) {
    piVar2 = &DAT_005ce9e8;
    do {
      iVar3 = *piVar2 * 0xf0 + DAT_00715e50;
      if ((iVar4 == *(int *)(iVar3 + 0x34)) && ((float)piVar2[0x24] <= *(float *)(iVar3 + 0xc4))) {
        FUN_0040d6f0(param_2,(&DAT_005ce9e8)[i * 0xa5]);
        return;
      }
      i = i + 1;
      piVar2 = piVar2 + 0xa5;
    } while (i < DAT_005d2ab0);
  }
  if ((iVar4 == DAT_006fba7c) && (FUN_0040e340(param_2,&param_2,local_4), param_2 != 0)) {
    switch(param_2) {
    case 4:
      if (DAT_005d1b3c < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) {
        FUN_0040d6f0(iVar1,DAT_006fba58);
        return;
      }
      break;
    case 5:
      if (DAT_005d1b40 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) {
        FUN_0040d6f0(iVar1,DAT_006fba58);
        return;
      }
      break;
    case 6:
      if (DAT_005d1b44 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) {
        FUN_0040d6f0(iVar1,DAT_006fba58);
        return;
      }
      break;
    case 8:
      if (DAT_005d1b48 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) {
        FUN_0040d6f0(iVar1,DAT_006fba58);
      }
    }
  }
  return;
}


