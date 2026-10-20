/* spel.dat — dxdraw/Forms.cpp: 268 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004cee40 FUN_004cee40 ==== */

undefined4 FUN_004cee40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004ceed0(param_1);
  iVar1 = *(int *)(DAT_0074b358 + 8 + iVar1 * 0x1c);
  if ((iVar1 == -1) || ((&DAT_0074b360)[iVar1 * 0x1c] == '\0')) {
    FUN_004c4150(s__s__d_____dispatch_form_message__005b6e44,s_D__Work_dxdraw_Forms_cpp_005b6e88,
                 0x3c,iVar1);
  }
  else if (*(code **)(&DAT_0074b378 + iVar1 * 0x1c) != (code *)0x0) {
    uVar2 = (**(code **)(&DAT_0074b378 + iVar1 * 0x1c))(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


/* ==== 004ceec0 FUN_004ceec0 ==== */

undefined4 FUN_004ceec0(void)

{
  return DAT_0074b35c;
}


/* ==== 004ceed0 FUN_004ceed0 ==== */

int FUN_004ceed0(int param_1)

{
  int iVar1;
  int i;
  int iVar2;
  
  i = 0;
  iVar1 = *(int *)(DAT_0074b358 + 8);
  iVar2 = DAT_0074b358;
  while( true ) {
    if (iVar1 == -1) {
      FUN_004c4150(s__s__d_____get_control_index__win_005b6ea4,s_D__Work_dxdraw_Forms_cpp_005b6e88,
                   0x2ef,param_1);
      return -1;
    }
    if (*(int *)(iVar2 + 0x18) == param_1) break;
    iVar1 = *(int *)(iVar2 + 0x24);
    iVar2 = iVar2 + 0x1c;
    i = i + 1;
  }
  return i;
}


/* ==== 004cef20 FUN_004cef20 ==== */

void __thiscall FUN_004cef20(void *this,int param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f85b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00576a88;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)((int)this + 8) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x004cef4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004cf0f4)[iVar1])();
  return;
}


/* ==== 004cf110 FUN_004cf110 ==== */

void * __thiscall FUN_004cf110(void *this,void *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f87b;
  local_c = ExceptionList;
  if (this == param_2) {
    return this;
  }
  ExceptionList = &local_c;
  if ((*(int *)((int)this + 8) == 3) &&
     (iVar2 = *(int *)((int)this + 0x10), ExceptionList = &local_c, iVar2 != 0)) {
    iVar3 = *(int *)(iVar2 + 4);
    ExceptionList = &local_c;
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        ExceptionList = &local_c;
        FUN_0054b339((char *)(iVar3 + -1));
      }
      else {
        ExceptionList = &local_c;
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  iVar2 = *(int *)((int)param_2 + 8);
  *(int *)((int)this + 8) = iVar2;
                    /* WARNING: Could not recover jumptable at 0x004cf187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar4 = (void *)(*(code *)(&PTR_LAB_004cf314)[iVar2])();
  return pvVar4;
}


/* ==== 004cf330 FUN_004cf330 ==== */

/* WARNING: Removing unreachable block (ram,0x004cf39d) */

void * __thiscall FUN_004cf330(void *this,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined1 *this_val;
  int iVar4;
  undefined1 *puVar5;
  uint i;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f89b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00576a88;
  *(undefined4 *)((int)this + 8) = 3;
  this_val = operator_new(0x10);
  local_4 = 0;
  if (this_val == (undefined1 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    ExceptionList = local_c;
    return this;
  }
  uVar1 = *param_2;
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
    *(undefined1 **)((int)this + 0x10) = this_val;
    ExceptionList = local_c;
    return this;
  }
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
      *(undefined1 **)((int)this + 0x10) = this_val;
      ExceptionList = local_c;
      return this;
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
  *(undefined1 **)((int)this + 0x10) = this_val;
  ExceptionList = local_c;
  return this;
}


/* ==== 004cf4f0 FUN_004cf4f0 ==== */

void * __thiscall FUN_004cf4f0(void *this,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *this_val;
  uint i;
  uint j;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f8bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00576a88;
  *(undefined4 *)((int)this + 8) = 3;
  this_val = operator_new(0x10);
  local_4 = 0;
  if (this_val == (undefined1 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    ExceptionList = local_c;
    return this;
  }
  *this_val = param_2._0_1_;
  i = 0xffffffff;
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  pcVar3 = param_2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      *(undefined1 **)((int)this + 0x10) = this_val;
      ExceptionList = local_c;
      return this;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_004cf5ea;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    *(undefined1 **)((int)this + 0x10) = this_val;
    ExceptionList = local_c;
    return this;
  }
  FUN_00402b20(this_val,i);
LAB_004cf5ea:
  pcVar3 = *(char **)(this_val + 4);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar3 = *param_2;
    param_2 = param_2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(*(int *)(this_val + 4) + i) = 0;
  *(undefined1 **)((int)this + 0x10) = this_val;
  ExceptionList = local_c;
  return this;
}


/* ==== 004cf650 FUN_004cf650 ==== */

void __thiscall FUN_004cf650(void *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR_FUN_00576a88;
  if ((*(int *)((int)this + 8) == 3) && (iVar2 = *(int *)((int)this + 0x10), iVar2 != 0)) {
    iVar3 = *(int *)(iVar2 + 4);
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iVar3 + -1));
      }
      else {
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_0054b339(iVar2);
  }
  return;
}


/* ==== 004cf6d0 FUN_004cf6d0 ==== */

void * __thiscall FUN_004cf6d0(void *this,byte param_2)

{
  *(undefined ***)this = &PTR_FUN_005777a0;
  FUN_004d38c0(*(void **)((int)this + 4),s_OnUnLoad_005b6ee0);
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004cf710 FUN_004cf710 ==== */

void __thiscall FUN_004cf710(void *this)

{
  *(undefined ***)this = &PTR_FUN_005777a0;
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004cf720 FUN_004cf720 ==== */

void __thiscall FUN_004cf720(void *this,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  void *this_val;
  uint i;
  uint j;
  undefined1 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_c0 [4];
  undefined4 *local_bc;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  char *local_a8;
  undefined *local_9c;
  uint uStack_98;
  undefined1 local_94 [84];
  undefined **local_40 [13];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f93d;
  pvStack_c = ExceptionList;
  local_b0 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 4) = 0;
  puVar3 = &DAT_0057629c;
  if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 4);
  }
  local_9c = &DAT_005777a8;
  FUN_004cfa30(local_40);
  local_40[0] = &PTR_FUN_00578ebc;
  local_b0 = 1;
  local_4 = 0;
  FUN_004cfb80(&local_9c,local_94,0,0);
  local_4 = 1;
  FUN_004d0ac0(local_94,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)((int)&local_9c + *(int *)(local_9c + 4)) = &PTR_LAB_005777a4;
  iVar2 = FUN_004d0c50(local_94,puVar3,0x21);
  if (iVar2 == 0) {
    FUN_004d0a40((int)&local_9c + *(int *)(local_9c + 4),
                 *(uint *)((int)&uStack_98 + *(int *)(local_9c + 4)) | 2,0);
  }
  local_4 = 3;
  if (*(int *)((int)&uStack_98 + *(int *)(local_9c + 4)) != 0) {
    FUN_004028f0(local_c0,0);
    i = 0xffffffff;
    pcVar5 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_c0,i,1);
    if (cVar1 != '\0') {
      puVar4 = (undefined4 *)&DAT_00712694;
      puVar6 = local_bc;
      for (j = i >> 2; j != 0; j = j - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined1 *)((int)local_bc + i) = 0;
      local_b8 = i;
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004028f0(local_ac,0);
    i = 0xffffffff;
    pcVar5 = s_Cannot_open_objectfile_005b6efc;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_ac,i,1);
    if (cVar1 != '\0') {
      pcVar5 = s_Cannot_open_objectfile_005b6efc;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)local_a8 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        local_a8 = local_a8 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *local_a8 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        local_a8 = local_a8 + 1;
      }
      FUN_004029e0(local_ac,i);
    }
    local_4._0_1_ = 5;
    FUN_004d6900(0xbbe,local_ac,param_2,local_c0);
    local_4._0_1_ = 4;
    FUN_004028f0(local_ac,1);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (local_bc != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_bc + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)((int)local_bc + -1));
      }
      else {
        *(char *)((int)local_bc + -1) = cVar1 + -1;
      }
    }
    local_bc = (undefined4 *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  this_val = operator_new(0xcc);
  local_4._0_1_ = 6;
  if (this_val == (void *)0x0) {
    this_val = (void *)0x0;
  }
  else {
    this_val = (void *)FUN_004d3570(this_val,&local_9c,param_3);
  }
  *(void **)((int)this + 4) = this_val;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (DAT_0074b8ac != 0) {
    FUN_004d4120(DAT_0074b8ac,this_val);
  }
  FUN_004d38c0(this_val,s__init_005b6ef4);
  FUN_004d38c0(this_val,s_OnLoad_005b6eec);
  *(undefined ***)((int)&local_9c + *(int *)(local_9c + 4)) = &PTR_LAB_005777a4;
  local_4 = 7;
  FUN_004d0010(local_94);
  local_4 = 0xffffffff;
  *(undefined ***)((int)&local_9c + *(int *)(local_9c + 4)) = &PTR_LAB_00578eac;
  local_40[0] = &PTR_FUN_00578ebc;
  FUN_0054c949();
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004cfa30 FUN_004cfa30 ==== */

void __thiscall FUN_004cfa30(void *this)

{
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_FUN_00579030;
  return;
}


/* ==== 004cfa40 FUN_004cfa40 ==== */

void * __thiscall FUN_004cfa40(void *this,byte param_2)

{
  FUN_0054c949();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004cfa60 FUN_004cfa60 ==== */

void __thiscall FUN_004cfa60(void *this)

{
  FUN_004cfc40((int)this + 0x5c);
  FUN_004cfb70((int)this + 0x5c);
  return;
}


/* ==== 004cfa80 FUN_004cfa80 ==== */

void __thiscall FUN_004cfa80(void *this)

{
  *(undefined ***)this = &PTR_FUN_005777a0;
  FUN_004d38c0(*(void **)((int)this + 4),s_OnUnLoad_005b6ee0);
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  return;
}


/* ==== 004cfab0 FUN_004cfab0 ==== */

undefined4 __thiscall
FUN_004cfab0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int this_val_2)

{
  int *this_val;
  undefined4 uVar1;
  
  this_val = (int *)FUN_004d3760(param_2,param_3);
  if (this_val == (int *)0x0) {
    return 0;
  }
  uVar1 = FUN_004d3a10(*(void **)((int)this + 4),param_1,this_val,this_val_2);
  return uVar1;
}


/* ==== 004cfaf0 FUN_004cfaf0 ==== */

undefined4 __thiscall
FUN_004cfaf0(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *this_val;
  undefined4 uVar1;
  
  this_val = (int *)FUN_004d3760(param_3,param_4);
  if (this_val == (int *)0x0) {
    return 0;
  }
  uVar1 = FUN_004d3c10(*(void **)((int)this + 4),param_2,this_val);
  return uVar1;
}


/* ==== 004cfb30 FUN_004cfb30 ==== */

void __thiscall FUN_004cfb30(void *this,undefined4 param_1,int *this_val)

{
  FUN_004d3c10(*(void **)((int)this + 4),param_1,this_val);
  return;
}


/* ==== 004cfb50 FUN_004cfb50 ==== */

void __thiscall FUN_004cfb50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004d3760(param_2,param_3);
  return;
}


/* ==== 004cfb70 FUN_004cfb70 ==== */

void __thiscall FUN_004cfb70(void *this)

{
  *(undefined ***)this = &PTR_FUN_00578ebc;
  FUN_0054c949();
  return;
}


/* ==== 004cfb80 FUN_004cfb80 ==== */

void * __thiscall FUN_004cfb80(void *this,undefined4 param_2,char param_3,int param_4)

{
  int this_val;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f96a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_4 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_005777b0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined ***)((int)this + 8) = &PTR_FUN_00578ebc;
    local_4 = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_00578eac;
  this_val = *(int *)(*(int *)this + 4);
  *(undefined4 *)(this_val + 0x28 + (int)this) = param_2;
  this_val = this_val + (int)this;
  *(undefined4 *)(this_val + 0x2c) = 0;
  *(undefined1 *)(this_val + 0x30) = 0x20;
  FUN_0054c9f0(this_val);
  if (*(int *)(this_val + 0x28) == 0) {
    FUN_0054c6db(*(uint *)(this_val + 4) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_0054c9bb(this_val);
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 004cfc30 FUN_004cfc30 ==== */

void __thiscall FUN_004cfc30(void *this)

{
  *(undefined ***)(*(int *)(*(int *)((int)this + -8) + 4) + -8 + (int)this) = &PTR_LAB_00578eac;
  return;
}


/* ==== 004cfc40 FUN_004cfc40 ==== */

void __thiscall FUN_004cfc40(void *this)

{
  uint uVar1;
  int this_val;
  facet *_Decref_result;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  undefined4 *this_val_2;
  
  puStack_8 = &LAB_0056f99e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(*(int *)(*(int *)((int)this + -0x5c) + 4) + -0x5c + (int)this) =
       &PTR_LAB_005777a4;
  this_val_2 = (undefined4 *)((int)this + -0x54);
  *this_val_2 = &PTR_FUN_00578ecc;
  local_4 = 2;
  if ((*(char *)((int)this + -0xc) != '\0') && (*(FILE **)((int)this + -4) != (FILE *)0x0)) {
    this_val = FUN_005588fd(*(FILE **)((int)this + -4));
    if (this_val == 0) {
      FUN_004d0d60(this_val_2,0,2);
    }
  }
  this_val = *(int *)((int)this + -0x10);
  if (this_val != 0) {
    FUN_004028f0(this_val,1);
    FUN_0054b339(this_val);
  }
  uVar1 = *(uint *)((int)this + -8);
  local_4._0_1_ = 1;
  if (uVar1 != 0) {
    this_val = *(int *)(uVar1 + 4);
    if ((this_val != 0) && (this_val != -1)) {
      *(int *)(uVar1 + 4) = this_val + -1;
    }
    puVar2 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  *this_val_2 = &PTR_FUN_00578f04;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(facet **)((int)this + -0x20) != (facet *)0x0) {
    _Decref_result = std::locale::facet::_Decref(*(facet **)((int)this + -0x20));
    if (_Decref_result != (facet *)0x0) {
      (*(code *)**(undefined4 **)_Decref_result)(1);
    }
  }
  *(undefined ***)(*(int *)(*(int *)((int)this + -0x5c) + 4) + -8 + (int)this_val_2) =
       &PTR_LAB_00578eac;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004cfd40 _Decref ==== */

/* Library Function - Single Match
    public: class std::locale::facet * __thiscall std::locale::facet::_Decref(void)
   
   Library: Visual Studio 2003 Release */

facet * __thiscall std::locale::facet::_Decref(facet *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(this + 4) = iVar1 + -1;
  }
  return (facet *)(~-(uint)(*(int *)(this + 4) != 0) & (uint)this);
}


/* ==== 004cfd60 ~locale ==== */

/* Library Function - Single Match
    public: __thiscall std::locale::~locale(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall std::locale::~locale(locale *this)

{
  facet *_Decref_result;
  
  if (*(facet **)this != (facet *)0x0) {
    _Decref_result = facet::_Decref(*(facet **)this);
    if (_Decref_result != (facet *)0x0) {
      (*(code *)**(undefined4 **)_Decref_result)(1);
    }
  }
  return;
}


/* ==== 004cfd80 FUN_004cfd80 ==== */

void __thiscall FUN_004cfd80(void *this)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined ***)this = &PTR_FUN_00578f04;
  uVar1 = *(uint *)((int)this + 0x34);
  if (uVar1 != 0) {
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}


/* ==== 004cfdf0 FUN_004cfdf0 ==== */

uint __thiscall FUN_004cfdf0(void *this)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)this + 0x10))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + -1;
  pbVar1 = (byte *)**(int **)((int)this + 0x1c);
  **(int **)((int)this + 0x1c) = (int)(pbVar1 + 1);
  return (uint)*pbVar1;
}


/* ==== 004d0010 FUN_004d0010 ==== */

void __thiscall FUN_004d0010(void *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056f9c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00578ecc;
  local_4 = 1;
  if ((*(char *)((int)this + 0x48) != '\0') && (*(FILE **)((int)this + 0x50) != (FILE *)0x0)) {
    iVar4 = FUN_005588fd(*(FILE **)((int)this + 0x50));
    if (iVar4 == 0) {
      *(undefined1 *)((int)this + 0x48) = 0;
      FUN_004d0a60(this);
      *(undefined4 *)((int)this + 0x50) = 0;
      *(undefined4 *)((int)this + 0x40) = DAT_00750064;
      *(undefined4 *)((int)this + 0x3c) = DAT_00750064;
      *(undefined4 *)((int)this + 0x38) = 0;
    }
  }
  iVar4 = *(int *)((int)this + 0x44);
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 4);
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iVar2 + -1));
      }
      else {
        *(char *)(iVar2 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    FUN_0054b339(iVar4);
  }
  uVar3 = *(uint *)((int)this + 0x4c);
  local_4 = local_4 & 0xffffff00;
  if (uVar3 != 0) {
    iVar4 = *(int *)(uVar3 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(uVar3 + 4) = iVar4 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(uVar3 + 4) != 0) & uVar3);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  *(undefined ***)this = &PTR_FUN_00578f04;
  uVar3 = *(uint *)((int)this + 0x34);
  local_4 = 0xffffffff;
  if (uVar3 != 0) {
    iVar4 = *(int *)(uVar3 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(uVar3 + 4) = iVar4 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(uVar3 + 4) != 0) & uVar3);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d04b0 FUN_004d04b0 ==== */

uint __thiscall FUN_004d04b0(void *this)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pbVar1 = (byte *)**(undefined4 **)((int)this + 0x1c);
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + **(int **)((int)this + 0x2c))) {
    return (uint)*pbVar1;
  }
  iVar2 = *(int *)this;
  uVar3 = (**(code **)(iVar2 + 0x14))();
  uVar4 = (**(code **)(iVar2 + 8))(uVar3);
  return uVar4;
}


/* ==== 004d0930 FUN_004d0930 ==== */

void * __thiscall FUN_004d0930(void *this,int *param_2,void *param_3)

{
  int iVar1;
  
  if (*(FILE **)((int)this + 0x50) != (FILE *)0x0) {
    iVar1 = FUN_0055a502(param_3,*(FILE **)((int)this + 0x50),param_2,0,(uint)param_3);
    if (iVar1 == 0) {
      return this;
    }
  }
  return (void *)0x0;
}


/* ==== 004d0980 FUN_004d0980 ==== */

void * __thiscall FUN_004d0980(void *this,byte param_2)

{
  FUN_004cfb70();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d09d0 FUN_004d09d0 ==== */

void * __thiscall FUN_004d09d0(void *this,byte param_2)

{
  FUN_004cfd80();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d0a20 FUN_004d0a20 ==== */

void * __thiscall FUN_004d0a20(void *this,byte param_2)

{
  FUN_004d0010();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d0a40 FUN_004d0a40 ==== */

void __thiscall FUN_004d0a40(void *this,uint param_2,undefined4 param_3)

{
  if (*(int *)((int)this + 0x28) == 0) {
    param_2 = param_2 | 4;
  }
  FUN_0054c6db(param_2,param_3);
  return;
}


/* ==== 004d0a60 FUN_004d0a60 ==== */

void __thiscall FUN_004d0a60(void *this)

{
  *(int *)((int)this + 0x1c) = (int)this + 0x14;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0xc) = (int)this + 4;
  *(int *)((int)this + 0x2c) = (int)this + 0x24;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(undefined4 *)((int)this + 8) = 0;
  **(undefined4 **)((int)this + 0x20) = 0;
  **(undefined4 **)((int)this + 0x30) = 0;
  **(undefined4 **)((int)this + 0xc) = 0;
  **(undefined4 **)((int)this + 0x1c) = 0;
  **(undefined4 **)((int)this + 0x2c) = 0;
  return;
}


/* ==== 004d0ac0 FUN_004d0ac0 ==== */

void * __thiscall FUN_004d0ac0(void *this,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  facet *_Decref_result;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f9ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_0054caea();
  *(undefined4 *)((int)this + 0x34) = uVar3;
  if (*(int *)(DAT_0074daf8 + 4) != -1) {
    *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
  }
  *(int *)((int)this + 0x1c) = (int)this + 0x14;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x2c) = (int)this + 0x24;
  puVar1 = (undefined4 *)((int)this + 8);
  *(undefined ***)this = &PTR_FUN_00578f04;
  *(int *)((int)this + 0xc) = (int)this + 4;
  *(undefined4 **)((int)this + 0x10) = puVar1;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *puVar1 = 0;
  **(undefined4 **)((int)this + 0x20) = 0;
  local_4 = 0;
  **(undefined4 **)((int)this + 0x30) = 0;
  FUN_004d0d20(this,0,0,0);
  local_4 = 1;
  puVar2 = (undefined4 *)((int)this + 0x4c);
  uVar3 = FUN_0054caea();
  *puVar2 = uVar3;
  if (*(int *)(DAT_0074daf8 + 4) != -1) {
    *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
  }
  *(undefined ***)this = &PTR_FUN_00578ecc;
  *(undefined1 *)((int)this + 0x48) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((facet *)*puVar2 != (facet *)0x0) {
    _Decref_result = std::locale::facet::_Decref((facet *)*puVar2);
    if (_Decref_result != (facet *)0x0) {
      (*(code *)**(undefined4 **)_Decref_result)(1);
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_0054caea();
    *puVar2 = uVar3;
    if (*(int *)(DAT_0074daf8 + 4) != -1) {
      *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
    }
  }
  *(int *)((int)this + 0x1c) = (int)this + 0x14;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x2c) = (int)this + 0x24;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(int *)((int)this + 0xc) = (int)this + 4;
  *(undefined4 **)((int)this + 0x10) = puVar1;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  FUN_004d0d40(this,0,0);
  FUN_004d0d20(this,0,0,0);
  if ((param_2 != 0) && (*(char *)((int)this + 0x48) == '\0')) {
    FUN_004d1120(this,param_2 + 8,param_2,param_2 + 4,param_2 + 8,param_2,param_2 + 4);
  }
  *(int *)((int)this + 0x50) = param_2;
  *(undefined4 *)((int)this + 0x40) = DAT_00750064;
  *(undefined4 *)((int)this + 0x3c) = DAT_00750064;
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = pvStack_c;
  return this;
}


/* ==== 004d0c50 FUN_004d0c50 ==== */

void * __thiscall FUN_004d0c50(void *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x50) == 0) {
    iVar1 = FUN_0054cd3c(param_2,param_3);
    if (iVar1 != 0) {
      *(int *)((int)this + 0xc) = (int)this + 4;
      *(int *)((int)this + 0x1c) = (int)this + 0x14;
      *(int *)((int)this + 0x20) = (int)this + 0x18;
      *(int *)((int)this + 0x2c) = (int)this + 0x24;
      *(undefined1 *)((int)this + 0x48) = 1;
      *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
      *(int *)((int)this + 0x30) = (int)this + 0x28;
      *(undefined4 *)((int)this + 8) = 0;
      **(undefined4 **)((int)this + 0x20) = 0;
      **(undefined4 **)((int)this + 0x30) = 0;
      **(undefined4 **)((int)this + 0xc) = 0;
      **(undefined4 **)((int)this + 0x1c) = 0;
      **(undefined4 **)((int)this + 0x2c) = 0;
      if (*(char *)((int)this + 0x48) == '\0') {
        *(int *)((int)this + 0x1c) = iVar1;
        *(int *)((int)this + 0xc) = iVar1 + 8;
        *(int *)((int)this + 0x10) = iVar1 + 8;
        *(int *)((int)this + 0x20) = iVar1;
        *(int *)((int)this + 0x2c) = iVar1 + 4;
        *(int *)((int)this + 0x30) = iVar1 + 4;
      }
      *(int *)((int)this + 0x50) = iVar1;
      *(undefined4 *)((int)this + 0x40) = DAT_00750064;
      *(undefined4 *)((int)this + 0x3c) = DAT_00750064;
      *(undefined4 *)((int)this + 0x38) = 0;
      FUN_004d0e60(this);
      return this;
    }
  }
  return (void *)0x0;
}


/* ==== 004d0d20 FUN_004d0d20 ==== */

void __thiscall FUN_004d0d20(void *this,undefined4 param_2,int param_3,int param_4)

{
  **(undefined4 **)((int)this + 0xc) = param_2;
  **(int **)((int)this + 0x1c) = param_3;
  **(int **)((int)this + 0x2c) = param_4 - param_3;
  return;
}


/* ==== 004d0d40 FUN_004d0d40 ==== */

void __thiscall FUN_004d0d40(void *this,int param_2,int param_3)

{
  **(int **)((int)this + 0x10) = param_2;
  **(int **)((int)this + 0x20) = param_2;
  **(int **)((int)this + 0x30) = param_3 - param_2;
  return;
}


/* ==== 004d0d60 FUN_004d0d60 ==== */

void __thiscall FUN_004d0d60(void *this,int param_2,int param_3)

{
  facet *_Decref_result;
  
  *(bool *)((int)this + 0x48) = param_3 == 1;
  if (param_3 == 0) {
    if (*(facet **)((int)this + 0x4c) != (facet *)0x0) {
      _Decref_result = std::locale::facet::_Decref(*(facet **)((int)this + 0x4c));
      if (_Decref_result != (facet *)0x0) {
        (*(code *)**(undefined4 **)_Decref_result)(1);
      }
    }
    if ((int)this + 0x4c != 0) {
      FUN_004d0e40((int)this + 0x4c);
    }
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  *(int *)((int)this + 0xc) = (int)this + 4;
  *(int *)((int)this + 0x1c) = (int)this + 0x14;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
  *(int *)((int)this + 0x2c) = (int)this + 0x24;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(undefined4 *)((int)this + 8) = 0;
  **(undefined4 **)((int)this + 0x20) = 0;
  **(undefined4 **)((int)this + 0x30) = 0;
  **(undefined4 **)((int)this + 0xc) = 0;
  **(undefined4 **)((int)this + 0x1c) = 0;
  **(undefined4 **)((int)this + 0x2c) = 0;
  if ((param_2 != 0) && (*(char *)((int)this + 0x48) == '\0')) {
    *(int *)((int)this + 0x1c) = param_2;
    *(int *)((int)this + 0xc) = param_2 + 8;
    *(int *)((int)this + 0x10) = param_2 + 8;
    *(int *)((int)this + 0x20) = param_2;
    *(int *)((int)this + 0x2c) = param_2 + 4;
    *(int *)((int)this + 0x30) = param_2 + 4;
  }
  *(int *)((int)this + 0x50) = param_2;
  *(undefined4 *)((int)this + 0x40) = DAT_00750064;
  *(undefined4 *)((int)this + 0x3c) = DAT_00750064;
  *(undefined4 *)((int)this + 0x38) = 0;
  return;
}


/* ==== 004d0e40 FUN_004d0e40 ==== */

void * __thiscall FUN_004d0e40(void *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0054caea();
  *(undefined4 *)this = uVar1;
  if (*(int *)(DAT_0074daf8 + 4) != -1) {
    *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
  }
  return this;
}


/* ==== 004d0e60 FUN_004d0e60 ==== */

void __thiscall FUN_004d0e60(void *this)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 this_val;
  int iVar4;
  uint *puVar5;
  facet *_Decref_result;
  undefined1 *operator_new_result;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined4 *puVar6;
  undefined1 *extraout_ECX_02;
  undefined1 *puStack_38;
  undefined1 uStack_21;
  uint local_20;
  facet *local_1c;
  undefined1 local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fa23;
  pvStack_c = ExceptionList;
  puStack_38 = (undefined1 *)0x4d0e87;
  ExceptionList = &pvStack_c;
  this_val = FUN_004d10f0();
  local_4 = 1;
  if (DAT_0074db04 == (undefined1 *)0x0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db04 = DAT_0074dafc;
  }
  puStack_38 = DAT_0074db04;
  iVar4 = FUN_0054ca8b(this_val);
  operator_new_result = extraout_ECX;
  if (iVar4 == 0) {
    cVar3 = FUN_0054caca(this_val);
    if (cVar3 == '\0') {
      puStack_38 = (undefined1 *)0x4d101a;
      FUN_004d1030(local_18);
      puStack_38 = local_18;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
    iVar4 = DAT_0074b88c;
    operator_new_result = extraout_ECX_00;
    if (DAT_0074b88c == 0) {
      puStack_38 = (undefined1 *)0x4d0ed7;
      local_1c = operator_new(0x10);
      local_4._0_1_ = 2;
      if (local_1c != (facet *)0x0) {
        puStack_38 = (undefined1 *)0x4d0ef0;
        FUN_004d1210(local_1c);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      puStack_38 = (undefined1 *)0x4d0eff;
      iVar4 = FUN_004d1330();
      operator_new_result = extraout_ECX_01;
      DAT_0074b88c = iVar4;
    }
  }
  *(int *)((int)this + 0x38) = iVar4;
  local_4 = 0xffffffff;
  if (local_20 != 0) {
    iVar4 = *(int *)(local_20 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(local_20 + 4) = iVar4 + -1;
    }
    puVar6 = (undefined4 *)(~-(uint)(*(int *)(local_20 + 4) != 0) & local_20);
    operator_new_result = (undefined1 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      puStack_38 = (undefined1 *)0x4d0f40;
      (**(code **)*puVar6)();
      operator_new_result = extraout_ECX_02;
    }
  }
  puVar1 = (uint *)((int)this + 0x4c);
  local_1c = (facet *)&puStack_38;
  puStack_38 = operator_new_result;
  FUN_004d10d0(&puStack_38,puVar1);
  puVar5 = (uint *)FUN_004d1150(&local_1c,&local_1c);
  uVar2 = *puVar1;
  local_4 = 3;
  if (uVar2 != *puVar5) {
    iVar4 = *(int *)(uVar2 + 4);
    if ((iVar4 != 0) && (iVar4 != -1)) {
      *(int *)(uVar2 + 4) = iVar4 + -1;
    }
    puVar6 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
    if (puVar6 != (undefined4 *)0x0) {
      puStack_38 = (undefined1 *)0x4d0f96;
      (**(code **)*puVar6)();
    }
    *puVar1 = *puVar5;
    FUN_004d10c0();
  }
  local_4 = 0xffffffff;
  if ((local_1c != (facet *)0x0) &&
     (_Decref_result = std::locale::facet::_Decref(local_1c), _Decref_result != (facet *)0x0)) {
    puStack_38 = (undefined1 *)0x4d0fc2;
    (*(code *)**(undefined4 **)_Decref_result)();
  }
  cVar3 = (**(code **)(**(int **)((int)this + 0x38) + 4))();
  if (cVar3 != '\0') {
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (*(int *)((int)this + 0x44) == 0) {
    puStack_38 = (undefined1 *)0x4d0fdd;
    operator_new_result = operator_new(0x10);
    if (operator_new_result == (undefined1 *)0x0) {
      operator_new_result = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(operator_new_result + 4) = 0;
      *operator_new_result = uStack_21;
      *(undefined4 *)(operator_new_result + 8) = 0;
      *(undefined4 *)(operator_new_result + 0xc) = 0;
    }
    *(undefined1 **)((int)this + 0x44) = operator_new_result;
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d1030 FUN_004d1030 ==== */

void * __thiscall FUN_004d1030(void *this)

{
  FUN_00558853(this,&stack0x00000004);
  *(undefined ***)this = &PTR_FUN_0057915c;
  return this;
}


/* ==== 004d1050 FUN_004d1050 ==== */

void __thiscall FUN_004d1050(void *this)

{
  *(undefined ***)this = &PTR_FUN_0057915c;
  exception::~exception(this);
  return;
}


/* ==== 004d1080 FUN_004d1080 ==== */

void * __thiscall FUN_004d1080(void *this,byte param_2)

{
  FUN_004d1050();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d10c0 FUN_004d10c0 ==== */

void __thiscall FUN_004d10c0(void *this)

{
  if (*(int *)((int)this + 4) != -1) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return;
}


/* ==== 004d10d0 FUN_004d10d0 ==== */

void * __thiscall FUN_004d10d0(void *this,undefined4 *param_2)

{
  *(undefined4 *)this = *param_2;
  FUN_004d10c0();
  return this;
}


/* ==== 004d10f0 FUN_004d10f0 ==== */

void __thiscall FUN_004d10f0(void *this,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34);
  *param_2 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return;
}


/* ==== 004d1120 FUN_004d1120 ==== */

void __thiscall
FUN_004d1120(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_6;
  *(undefined4 *)((int)this + 0x2c) = param_4;
  *(undefined4 *)((int)this + 0x30) = param_7;
  return;
}


/* ==== 004d1150 FUN_004d1150 ==== */

int * __thiscall FUN_004d1150(undefined4 param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056fa57;
  local_c = ExceptionList;
  local_4 = 2;
  if (DAT_0074db04 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db04 = DAT_0074dafc;
  }
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_0054ce2d(param_4,DAT_0074db04,2);
  iVar1 = *piVar2;
  *param_2 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(param_3 + 4) = iVar1 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(param_3 + 4) != 0) & param_3);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = local_c;
  return param_2;
}


/* ==== 004d1210 FUN_004d1210 ==== */

void * __thiscall FUN_004d1210(void *this,undefined4 param_2)

{
  undefined8 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056fa78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_2;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005790a4;
  FUN_0054d3cd(s_C_005b6f4c);
  uVar1 = FUN_0054eb13();
  *(undefined8 *)((int)this + 8) = uVar1;
  FUN_0054d486();
  ExceptionList = local_c;
  return this;
}


/* ==== 004d12a0 FUN_004d12a0 ==== */

void __thiscall FUN_004d12a0(void *this)

{
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 004d1310 FUN_004d1310 ==== */

void * __thiscall FUN_004d1310(void *this,byte param_2)

{
  FUN_004d12a0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d1330 FUN_004d1330 ==== */

int FUN_004d1330(int param_1)

{
  DAT_0074b890 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(&LAB_004d1360);
  return param_1;
}


/* ==== 004d1400 FUN_004d1400 ==== */

void FUN_004d1400(void)

{
  return;
}


/* ==== 004d1410 FUN_004d1410 ==== */

/* WARNING: Removing unreachable block (ram,0x004d145e) */

void * __thiscall
FUN_004d1410(void *this,undefined4 param_2,undefined1 param_3,undefined4 *param_4,uint param_5,
            undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint i;
  undefined4 *puVar4;
  undefined1 local_34 [4];
  undefined4 *local_30;
  uint local_2c;
  undefined1 *local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_5;
  puVar4 = param_4;
  puStack_8 = &LAB_0056fab8;
  local_c = ExceptionList;
  local_4 = 0;
  local_34[0] = param_3;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = (undefined1 *)0x0;
  if (local_34 == &param_3) {
    ExceptionList = &local_c;
    FUN_0040f800(local_34,param_5,0xffffffff);
    FUN_0040f800(local_34,0,0);
    puVar4 = param_4;
  }
  else {
    if (param_5 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_4 != (undefined4 *)0x0) {
        puVar3 = param_4;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        ExceptionList = &local_c;
        FUN_004028f0(local_34,1);
        local_30 = (undefined4 *)&DAT_0057629c;
        if (puVar4 != (undefined4 *)0x0) {
          local_30 = puVar4;
        }
        local_2c = param_5;
        local_28 = (undefined1 *)param_6;
        *(char *)((int)local_30 + -1) = *(char *)((int)local_30 + -1) + '\x01';
        goto LAB_004d150b;
      }
    }
    ExceptionList = &local_c;
    cVar2 = FUN_00402a00(local_34,param_5,1);
    if (cVar2 != '\0') {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar3 = local_30;
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_004029e0(local_34,uVar1);
      puVar4 = param_4;
    }
  }
LAB_004d150b:
  FUN_004d1560(this,param_2);
  *(undefined ***)this = &PTR_FUN_005777b8;
  if (puVar4 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      local_28 = (undefined1 *)((int)puVar4 + -1);
      local_2c = 0x4d153e;
      FUN_0054b339();
    }
    else {
      *(char *)((int)puVar4 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 004d1560 FUN_004d1560 ==== */

/* WARNING: Removing unreachable block (ram,0x004d15a8) */

void * __thiscall
FUN_004d1560(void *this,undefined4 param_2,undefined1 param_3,undefined4 *param_4,uint param_5,
            undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint i;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  
  uVar1 = param_5;
  puVar4 = param_4;
  puStack_8 = &LAB_0056fad8;
  local_c = ExceptionList;
  this_val = (undefined1 *)((int)this + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  *this_val = param_3;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (this_val == &param_3) {
    FUN_0040f800(this_val,param_5,0xffffffff);
    FUN_0040f800(this_val,0,0);
    puVar4 = param_4;
  }
  else {
    if (param_5 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_4 != (undefined4 *)0x0) {
        puVar3 = param_4;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar3 = (undefined4 *)&DAT_0057629c;
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = puVar4;
        }
        *(undefined4 **)((int)this + 8) = puVar3;
        *(uint *)((int)this + 0xc) = param_5;
        *(undefined4 *)((int)this + 0x10) = param_6;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_004d1657;
      }
    }
    cVar2 = FUN_00402a00(this_val,param_5,1);
    if (cVar2 != '\0') {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar3 = *(undefined4 **)((int)this + 8);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_004029e0(this_val,uVar1);
      puVar4 = param_4;
    }
  }
LAB_004d1657:
  *(undefined ***)this = &PTR_FUN_005777cc;
  *(undefined4 *)((int)this + 0x14) = param_2;
  if (puVar4 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((undefined1 *)((int)puVar4 + -1));
    }
    else {
      *(char *)((int)puVar4 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 004d16a0 FUN_004d16a0 ==== */

void * __thiscall FUN_004d16a0(void *this,byte param_2)

{
  FUN_004d1bc0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d16d0 FUN_004d16d0 ==== */

/* WARNING: Removing unreachable block (ram,0x004d1879) */
/* WARNING: Removing unreachable block (ram,0x004d1890) */
/* WARNING: Removing unreachable block (ram,0x004d189f) */
/* WARNING: Removing unreachable block (ram,0x004d18a8) */

void __thiscall FUN_004d16d0(void *this,undefined4 param_2)

{
  void *this_val;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *operator_new_result;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fafb;
  local_c = ExceptionList;
  puStack_2c = (undefined4 *)0x4d16f5;
  ExceptionList = &local_c;
  this_val = operator_new(0x1c);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    FUN_0041c870(auStack_38,param_2);
    uVar1 = FUN_004d18d0(this_val);
  }
  local_4 = 0xffffffff;
  puVar6 = *(undefined4 **)((int)this + 0xc);
  if (*(int *)((int)this + 0x10) - (int)puVar6 >> 2 == 0) {
    iVar2 = *(int *)((int)this + 8);
    if ((iVar2 == 0) || (uVar4 = (int)puVar6 - iVar2 >> 2, uVar4 < 2)) {
      uVar4 = 1;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)puVar6 - iVar2 >> 2;
    }
    iVar2 = iVar2 + uVar4;
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    puStack_2c = (undefined4 *)0x4d1790;
    operator_new_result = operator_new(iVar3 * 4);
    this_val = operator_new_result;
    for (puVar5 = *(undefined4 **)((int)this + 8); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      puStack_30 = (undefined4 *)0x4d17a7;
      puStack_2c = this_val;
      FUN_004d2770();
      this_val = (void *)((int)this_val + 4);
    }
    puStack_2c = (undefined4 *)0x1;
    uStack_34 = 0x4d17c3;
    puStack_30 = this_val;
    FUN_004de280();
    puStack_2c = *(undefined4 **)((int)this + 0xc);
    uStack_34 = 0x4d17d3;
    puStack_30 = puVar6;
    FUN_004de170();
    puStack_2c = *(undefined4 **)((int)this + 8);
    puStack_30 = (undefined4 *)0x4d17e2;
    FUN_0042f530();
    puStack_2c = (undefined4 *)0x4d17eb;
    FUN_0054b339();
    iVar3 = *(int *)((int)this + 8);
    *(void **)((int)this + 0x10) = (void *)((int)operator_new_result + iVar2 * 4);
    if (iVar3 == 0) {
      *(void **)((int)this + 8) = operator_new_result;
      *(int *)((int)this + 0xc) = (int)operator_new_result + 4;
    }
    else {
      *(void **)((int)this + 8) = operator_new_result;
      *(int *)((int)this + 0xc) =
           (int)operator_new_result + (*(int *)((int)this + 0xc) - iVar3 >> 2) * 4 + 4;
    }
  }
  else {
    uStack_34 = 0x4d1844;
    puStack_30 = puVar6;
    puStack_2c = puVar6;
    FUN_004de170();
    puStack_30 = *(undefined4 **)((int)this + 0xc);
    puStack_2c = (undefined4 *)(1 - ((int)puStack_30 - (int)puVar6 >> 2));
    uStack_34 = 0x4d1863;
    FUN_004de280();
    puVar5 = *(undefined4 **)((int)this + 0xc);
    for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
      *puVar6 = uVar1;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004d18d0 FUN_004d18d0 ==== */

/* WARNING: Removing unreachable block (ram,0x004d1920) */

void * __thiscall
FUN_004d18d0(void *this,undefined1 param_2,undefined4 *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint i;
  undefined4 *puVar4;
  undefined1 local_34 [4];
  undefined4 *local_30;
  uint local_2c;
  undefined1 *local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_4;
  puVar4 = param_3;
  puStack_8 = &LAB_0056fb18;
  local_c = ExceptionList;
  local_4 = 0;
  local_34[0] = param_2;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = (undefined1 *)0x0;
  if (local_34 == &param_2) {
    ExceptionList = &local_c;
    FUN_0040f800(local_34,param_4,0xffffffff);
    FUN_0040f800(local_34,0,0);
    puVar4 = param_3;
  }
  else {
    if (param_4 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_3 != (undefined4 *)0x0) {
        puVar3 = param_3;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        ExceptionList = &local_c;
        FUN_004028f0(local_34,1);
        local_30 = (undefined4 *)&DAT_0057629c;
        if (puVar4 != (undefined4 *)0x0) {
          local_30 = puVar4;
        }
        local_2c = param_4;
        local_28 = (undefined1 *)param_5;
        *(char *)((int)local_30 + -1) = *(char *)((int)local_30 + -1) + '\x01';
        goto LAB_004d19cb;
      }
    }
    ExceptionList = &local_c;
    cVar2 = FUN_00402a00(local_34,param_4,1);
    if (cVar2 != '\0') {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar3 = local_30;
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_004029e0(local_34,uVar1);
      puVar4 = param_3;
    }
  }
LAB_004d19cb:
  FUN_004d1410(this,2);
  *(undefined ***)this = &PTR_FUN_005777e0;
  *(undefined4 *)((int)this + 0x18) = param_6;
  if (puVar4 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      local_28 = (undefined1 *)((int)puVar4 + -1);
      local_2c = 0x4d19fe;
      FUN_0054b339();
    }
    else {
      *(char *)((int)puVar4 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 004d1a20 FUN_004d1a20 ==== */

/* WARNING: Removing unreachable block (ram,0x004d1a81) */

undefined4 * __thiscall FUN_004d1a20(void *this)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *operator_new_result;
  int iVar4;
  undefined1 *puVar5;
  uint i;
  int iVar6;
  undefined4 *this_val;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fb3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x1c);
  local_4 = 0;
  if (operator_new_result == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  this_val = operator_new_result + 1;
  *(undefined1 *)this_val = *(undefined1 *)((int)this + 4);
  operator_new_result[2] = 0;
  operator_new_result[3] = 0;
  operator_new_result[4] = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  if (this_val == (undefined4 *)((int)this + 4)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar4 = operator_new_result[3] - uVar1;
    iVar6 = -1;
    if (iVar4 != -1) {
      iVar6 = iVar4;
    }
    if (iVar6 != 0) {
      FUN_005580e0(uVar1 + operator_new_result[2],uVar1 + operator_new_result[2] + iVar6,
                   iVar4 - iVar6);
      iVar4 = operator_new_result[3];
      cVar3 = FUN_00402a00(this_val,iVar4 - iVar6,0);
      if (cVar3 != '\0') {
        FUN_004029e0(this_val,iVar4 - iVar6);
      }
    }
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar5 = *(undefined1 **)((int)this + 8);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar5 = *(undefined1 **)((int)this + 8);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        operator_new_result[2] = puVar5;
        operator_new_result[3] = *(undefined4 *)((int)this + 0xc);
        operator_new_result[4] = *(undefined4 *)((int)this + 0x10);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004d1b61;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar1,1);
    if (cVar3 != '\0') {
      this_val = *(undefined4 **)((int)this + 8);
      if (this_val == (undefined4 *)0x0) {
        this_val = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)operator_new_result[2];
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
      operator_new_result[3] = uVar1;
      *(undefined1 *)(operator_new_result[2] + uVar1) = 0;
    }
  }
LAB_004d1b61:
  uVar2 = *(undefined4 *)((int)this + 0x14);
  *operator_new_result = &PTR_FUN_005777b8;
  operator_new_result[5] = uVar2;
  operator_new_result[6] = *(undefined4 *)((int)this + 0x18);
  *operator_new_result = &PTR_FUN_005777e0;
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004d1bc0 FUN_004d1bc0 ==== */

void __thiscall FUN_004d1bc0(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_005777cc;
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 004d1c10 FUN_004d1c10 ==== */

/* WARNING: Removing unreachable block (ram,0x004d1ddb) */
/* WARNING: Removing unreachable block (ram,0x004d1df2) */
/* WARNING: Removing unreachable block (ram,0x004d1e01) */
/* WARNING: Removing unreachable block (ram,0x004d1e0a) */

void __thiscall FUN_004d1c10(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *this_val;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *operator_new_result;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [8];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fb63;
  local_c = ExceptionList;
  puStack_2c = (undefined4 *)0x4d1c35;
  ExceptionList = &local_c;
  this_val = operator_new(0x30);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    puStack_2c = (undefined4 *)param_4;
    uStack_40 = param_3;
    uStack_44 = 0x4d1c67;
    FUN_0041c870(auStack_3c);
    local_4._0_1_ = 1;
    FUN_0041c870(auStack_4c,param_2);
    local_4 = (uint)local_4._1_3_ << 8;
    uVar1 = FUN_004d1e30(this_val);
  }
  local_4 = 0xffffffff;
  puVar6 = *(undefined4 **)((int)this + 0xc);
  if (*(int *)((int)this + 0x10) - (int)puVar6 >> 2 == 0) {
    iVar2 = *(int *)((int)this + 8);
    if ((iVar2 == 0) || (uVar4 = (int)puVar6 - iVar2 >> 2, uVar4 < 2)) {
      uVar4 = 1;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)puVar6 - iVar2 >> 2;
    }
    iVar2 = iVar2 + uVar4;
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    puStack_2c = (undefined4 *)0x4d1cf2;
    operator_new_result = operator_new(iVar3 * 4);
    this_val = operator_new_result;
    for (puVar5 = *(undefined4 **)((int)this + 8); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      puStack_30 = (undefined4 *)0x4d1d09;
      puStack_2c = this_val;
      FUN_004d2770();
      this_val = (void *)((int)this_val + 4);
    }
    puStack_2c = (undefined4 *)0x1;
    uStack_34 = 0x4d1d25;
    puStack_30 = this_val;
    FUN_004de280();
    puStack_2c = *(undefined4 **)((int)this + 0xc);
    uStack_34 = 0x4d1d35;
    puStack_30 = puVar6;
    FUN_004de170();
    puStack_2c = *(undefined4 **)((int)this + 8);
    puStack_30 = (undefined4 *)0x4d1d44;
    FUN_0042f530();
    puStack_2c = (undefined4 *)0x4d1d4d;
    FUN_0054b339();
    iVar3 = *(int *)((int)this + 8);
    *(void **)((int)this + 0x10) = (void *)((int)operator_new_result + iVar2 * 4);
    if (iVar3 == 0) {
      *(void **)((int)this + 8) = operator_new_result;
      *(int *)((int)this + 0xc) = (int)operator_new_result + 4;
    }
    else {
      *(void **)((int)this + 8) = operator_new_result;
      *(int *)((int)this + 0xc) =
           (int)operator_new_result + (*(int *)((int)this + 0xc) - iVar3 >> 2) * 4 + 4;
    }
  }
  else {
    uStack_34 = 0x4d1da6;
    puStack_30 = puVar6;
    puStack_2c = puVar6;
    FUN_004de170();
    puStack_30 = *(undefined4 **)((int)this + 0xc);
    puStack_2c = (undefined4 *)(1 - ((int)puStack_30 - (int)puVar6 >> 2));
    uStack_34 = 0x4d1dc5;
    FUN_004de280();
    puVar5 = *(undefined4 **)((int)this + 0xc);
    for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
      *puVar6 = uVar1;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004d1e30 FUN_004d1e30 ==== */

void * __thiscall
FUN_004d1e30(void *this,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            ,undefined4 param_11)

{
  char cVar1;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056fb88;
  local_c = ExceptionList;
  local_4 = 1;
  local_2c = param_6;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  puStack_38 = &param_6;
  uStack_30 = 0xffffffff;
  uStack_34 = 0;
  uStack_3c = 0x4d1e80;
  ExceptionList = &local_c;
  FUN_004093c0();
  local_4._0_1_ = 2;
  FUN_0041c870(&uStack_3c,&param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004d1f30(this,3);
  *(undefined4 *)((int)this + 0x2c) = param_11;
  *(undefined4 *)((int)this + 0x28) = param_10;
  *(undefined ***)this = &PTR_FUN_005777f4;
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      local_20 = param_3 + -1;
      local_24 = 0x4d1edb;
      FUN_0054b339();
    }
    else {
      *(char *)(param_3 + -1) = cVar1 + -1;
    }
  }
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  if (param_7 != 0) {
    cVar1 = *(char *)(param_7 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      local_20 = param_7 + -1;
      local_24 = 0x4d1f0b;
      FUN_0054b339();
    }
    else {
      *(char *)(param_7 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 004d1f30 FUN_004d1f30 ==== */

void * __thiscall
FUN_004d1f30(void *this,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7,int param_8)

{
  char cVar1;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056fbb8;
  local_c = ExceptionList;
  local_4 = 1;
  local_2c = CONCAT31(local_2c._1_3_,param_7);
  local_28 = (undefined1 *)0x0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &local_c;
  FUN_004093c0(&local_2c,&param_7,0,0xffffffff);
  FUN_004d1560(this,param_2);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_28 = &param_3;
  local_20 = 0xffffffff;
  local_24 = 0;
  local_2c = 0x4d1fb8;
  FUN_004093c0();
  *(undefined ***)this = &PTR_FUN_00577808;
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      local_20 = param_4 + -1;
      local_24 = 0x4d1fdf;
      FUN_0054b339();
    }
    else {
      *(char *)(param_4 + -1) = cVar1 + -1;
    }
  }
  param_4 = 0;
  param_5 = 0;
  param_6 = 0;
  if (param_8 != 0) {
    cVar1 = *(char *)(param_8 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      local_20 = param_8 + -1;
      local_24 = 0x4d200f;
      FUN_0054b339();
    }
    else {
      *(char *)(param_8 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 004d2040 FUN_004d2040 ==== */

void * __thiscall FUN_004d2040(void *this,byte param_2)

{
  FUN_004d2060();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d2060 FUN_004d2060 ==== */

void __thiscall FUN_004d2060(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_00577808;
  iVar2 = *(int *)((int)this + 0x1c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_FUN_005777cc;
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 004d20e0 FUN_004d20e0 ==== */

/* WARNING: Removing unreachable block (ram,0x004d217b) */

undefined4 * __thiscall FUN_004d20e0(void *this)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *operator_new_result;
  undefined1 *puVar4;
  uint i;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined4 *this_val;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fbe3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x30);
  local_4 = 0;
  if (operator_new_result == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(operator_new_result + 1) = *(undefined1 *)((int)this + 4);
  operator_new_result[2] = 0;
  operator_new_result[3] = 0;
  operator_new_result[4] = 0;
  FUN_004093c0(operator_new_result + 1,(int)this + 4,0,0xffffffff);
  uVar1 = *(undefined4 *)((int)this + 0x14);
  *operator_new_result = &PTR_FUN_005777cc;
  operator_new_result[5] = uVar1;
  this_val = operator_new_result + 6;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)this_val = *(undefined1 *)((int)this + 0x18);
  operator_new_result[7] = 0;
  operator_new_result[8] = 0;
  operator_new_result[9] = 0;
  uVar2 = *(uint *)((int)this + 0x20);
  if (this_val == (undefined4 *)((int)this + 0x18)) {
    FUN_0040f800(this_val,uVar2,0xffffffff);
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = *(undefined1 **)((int)this + 0x1c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar4 = *(undefined1 **)((int)this + 0x1c);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        operator_new_result[7] = puVar4;
        operator_new_result[8] = *(undefined4 *)((int)this + 0x20);
        operator_new_result[9] = *(undefined4 *)((int)this + 0x24);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004d221f;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar2,1);
    if (cVar3 != '\0') {
      puVar5 = *(undefined4 **)((int)this + 0x1c);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0057629c;
      }
      puVar6 = (undefined4 *)operator_new_result[7];
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_004029e0(this_val,uVar2);
    }
  }
LAB_004d221f:
  *operator_new_result = &PTR_FUN_00577808;
  operator_new_result[10] = *(undefined4 *)((int)this + 0x28);
  operator_new_result[0xb] = *(undefined4 *)((int)this + 0x2c);
  *operator_new_result = &PTR_FUN_005777f4;
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004d2290 FUN_004d2290 ==== */

/* WARNING: Removing unreachable block (ram,0x004d2456) */
/* WARNING: Removing unreachable block (ram,0x004d246d) */
/* WARNING: Removing unreachable block (ram,0x004d247c) */
/* WARNING: Removing unreachable block (ram,0x004d2485) */

void __thiscall FUN_004d2290(void *this,undefined4 param_2,undefined4 param_3)

{
  void *this_val;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *operator_new_result;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fc03;
  local_c = ExceptionList;
  puStack_2c = (undefined4 *)0x4d22b5;
  ExceptionList = &local_c;
  this_val = operator_new(0x2c);
  local_4 = 0;
  if (this_val == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uStack_3c = param_3;
    uStack_40 = 0x4d22e2;
    FUN_0041c870(auStack_38);
    local_4._0_1_ = 1;
    FUN_0041c870(auStack_48,param_2);
    local_4 = (uint)local_4._1_3_ << 8;
    uVar1 = FUN_004d24b0(this_val);
  }
  local_4 = 0xffffffff;
  puVar6 = *(undefined4 **)((int)this + 0xc);
  if (*(int *)((int)this + 0x10) - (int)puVar6 >> 2 == 0) {
    iVar2 = *(int *)((int)this + 8);
    if ((iVar2 == 0) || (uVar4 = (int)puVar6 - iVar2 >> 2, uVar4 < 2)) {
      uVar4 = 1;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)puVar6 - iVar2 >> 2;
    }
    iVar2 = iVar2 + uVar4;
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    puStack_2c = (undefined4 *)0x4d236d;
    operator_new_result = operator_new(iVar3 * 4);
    this_val = operator_new_result;
    for (puVar5 = *(undefined4 **)((int)this + 8); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      puStack_30 = (undefined4 *)0x4d2384;
      puStack_2c = this_val;
      FUN_004d2770();
      this_val = (void *)((int)this_val + 4);
    }
    puStack_2c = (undefined4 *)0x1;
    uStack_34 = 0x4d23a0;
    puStack_30 = this_val;
    FUN_004de280();
    puStack_2c = *(undefined4 **)((int)this + 0xc);
    uStack_34 = 0x4d23b0;
    puStack_30 = puVar6;
    FUN_004de170();
    puStack_2c = *(undefined4 **)((int)this + 8);
    puStack_30 = (undefined4 *)0x4d23bf;
    FUN_0042f530();
    puStack_2c = (undefined4 *)0x4d23c8;
    FUN_0054b339();
    iVar3 = *(int *)((int)this + 8);
    *(void **)((int)this + 0x10) = (void *)((int)operator_new_result + iVar2 * 4);
    if (iVar3 == 0) {
      *(void **)((int)this + 8) = operator_new_result;
      *(int *)((int)this + 0xc) = (int)operator_new_result + 4;
    }
    else {
      *(void **)((int)this + 8) = operator_new_result;
      *(int *)((int)this + 0xc) =
           (int)operator_new_result + (*(int *)((int)this + 0xc) - iVar3 >> 2) * 4 + 4;
    }
  }
  else {
    uStack_34 = 0x4d2421;
    puStack_30 = puVar6;
    puStack_2c = puVar6;
    FUN_004de170();
    puStack_30 = *(undefined4 **)((int)this + 0xc);
    puStack_2c = (undefined4 *)(1 - ((int)puStack_30 - (int)puVar6 >> 2));
    uStack_34 = 0x4d2440;
    FUN_004de280();
    puVar5 = *(undefined4 **)((int)this + 0xc);
    for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
      *puVar6 = uVar1;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004d24b0 FUN_004d24b0 ==== */

void * __thiscall
FUN_004d24b0(void *this,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            )

{
  char cVar1;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056fc28;
  local_c = ExceptionList;
  local_4 = 1;
  local_2c = param_6;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  puStack_38 = &param_6;
  uStack_30 = 0xffffffff;
  uStack_34 = 0;
  uStack_3c = 0x4d2500;
  ExceptionList = &local_c;
  FUN_004093c0();
  local_4._0_1_ = 2;
  FUN_0041c870(&uStack_3c,&param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004d1f30(this,5);
  *(undefined4 *)((int)this + 0x28) = param_10;
  *(undefined ***)this = &PTR_FUN_0057781c;
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      local_20 = param_3 + -1;
      local_24 = 0x4d2554;
      FUN_0054b339();
    }
    else {
      *(char *)(param_3 + -1) = cVar1 + -1;
    }
  }
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  if (param_7 != 0) {
    cVar1 = *(char *)(param_7 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      local_20 = param_7 + -1;
      local_24 = 0x4d2584;
      FUN_0054b339();
    }
    else {
      *(char *)(param_7 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 004d25a0 FUN_004d25a0 ==== */

/* WARNING: Removing unreachable block (ram,0x004d263b) */

undefined4 * __thiscall FUN_004d25a0(void *this)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *operator_new_result;
  undefined1 *puVar4;
  uint i;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined4 *this_val;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fc53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x2c);
  local_4 = 0;
  if (operator_new_result == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(operator_new_result + 1) = *(undefined1 *)((int)this + 4);
  operator_new_result[2] = 0;
  operator_new_result[3] = 0;
  operator_new_result[4] = 0;
  FUN_004093c0(operator_new_result + 1,(int)this + 4,0,0xffffffff);
  uVar1 = *(undefined4 *)((int)this + 0x14);
  *operator_new_result = &PTR_FUN_005777cc;
  operator_new_result[5] = uVar1;
  this_val = operator_new_result + 6;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)this_val = *(undefined1 *)((int)this + 0x18);
  operator_new_result[7] = 0;
  operator_new_result[8] = 0;
  operator_new_result[9] = 0;
  uVar2 = *(uint *)((int)this + 0x20);
  if (this_val == (undefined4 *)((int)this + 0x18)) {
    FUN_0040f800(this_val,uVar2,0xffffffff);
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = *(undefined1 **)((int)this + 0x1c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar4 = *(undefined1 **)((int)this + 0x1c);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        operator_new_result[7] = puVar4;
        operator_new_result[8] = *(undefined4 *)((int)this + 0x20);
        operator_new_result[9] = *(undefined4 *)((int)this + 0x24);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004d26df;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar2,1);
    if (cVar3 != '\0') {
      puVar5 = *(undefined4 **)((int)this + 0x1c);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0057629c;
      }
      puVar6 = (undefined4 *)operator_new_result[7];
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_004029e0(this_val,uVar2);
    }
  }
LAB_004d26df:
  *operator_new_result = &PTR_FUN_00577808;
  uVar1 = *(undefined4 *)((int)this + 0x28);
  *operator_new_result = &PTR_FUN_0057781c;
  operator_new_result[10] = uVar1;
  ExceptionList = local_c;
  return operator_new_result;
}


/* ==== 004d2720 FUN_004d2720 ==== */

void __thiscall
FUN_004d2720(void *this,int param_1,char *str1_2,char *str1,undefined4 *param_4,undefined4 *param_5)

{
  FUN_004d2e90((void *)((int)this + 4),param_1,str1_2,str1,param_4,param_5);
  return;
}


/* ==== 004d2750 FUN_004d2750 ==== */

void __thiscall
FUN_004d2750(void *this,int param_1,char *str1,undefined4 *param_3,undefined4 *param_4)

{
  FUN_004d3010((void *)((int)this + 4),param_1,str1,param_3,param_4);
  return;
}


/* ==== 004d2770 FUN_004d2770 ==== */

void FUN_004d2770(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}


/* ==== 004d27b0 FUN_004d27b0 ==== */

void __thiscall FUN_004d27b0(void *this,undefined4 param_2)

{
  int this_val;
  void *this_00;
  int iVar1;
  void *operator_new_result;
  void *extraout_ECX;
  void *extraout_ECX_00;
  int iVar2;
  int this_val_2;
  uint uVar3;
  void *this_val_00;
  
  this_val_2 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 0xc) - this_val_2;
  this_val = *(int *)((int)this + 4);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x18 + iVar1 != iVar1) {
    iVar1 = this_val_2 - this_val >> 0x1f;
    if ((this_val_2 - this_val) / 0x18 + iVar1 != iVar1) {
      FUN_004d2d40(this_val_2 + -0x18,this_val_2,this_val_2);
      FUN_004d2de0(this_val,*(int *)((int)this + 8) + -0x18,*(int *)((int)this + 8));
      FUN_004d2db0(this_val,this_val + 0x18,param_2);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
      return;
    }
    FUN_004d2d40(this_val,this_val_2,this_val + 0x18);
    FUN_004d2d80(*(int *)((int)this + 8),1 - (*(int *)((int)this + 8) - this_val) / 0x18,param_2);
    FUN_004d2db0(this_val,*(int *)((int)this + 8),param_2);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
    return;
  }
  if ((this_val == 0) || (uVar3 = (this_val_2 - this_val) / 0x18, uVar3 < 2)) {
    uVar3 = 1;
  }
  if (this_val == 0) {
    this_val_2 = 0;
  }
  else {
    this_val_2 = (this_val_2 - this_val) / 0x18;
  }
  this_val_2 = this_val_2 + uVar3;
  iVar1 = this_val_2;
  if (this_val_2 < 0) {
    iVar1 = 0;
  }
  operator_new_result = operator_new(iVar1 * 0x18);
  this_val_00 = operator_new_result;
  this_00 = extraout_ECX;
  for (iVar1 = *(int *)((int)this + 4); iVar1 != this_val; iVar1 = iVar1 + 0x18) {
    FUN_004d2e20(this_00,(int)this_val_00,iVar1);
    this_val_00 = (void *)((int)this_val_00 + 0x18);
    this_00 = extraout_ECX_00;
  }
  FUN_004d2d80((int)this_val_00,1,param_2);
  FUN_004d2d40(this_val,*(int *)((int)this + 8),(int)this_val_00 + 0x18);
  FUN_004d2d10(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(void **)((int)this + 0xc) = (void *)((int)operator_new_result + this_val_2 * 0x18);
  this_val_2 = *(int *)((int)this + 4);
  if (this_val_2 != 0) {
    *(void **)((int)this + 4) = operator_new_result;
    *(void **)((int)this + 8) =
         (void *)((int)operator_new_result +
                 (((*(int *)((int)this + 8) - this_val_2) / 0x18) * 3 + 3) * 8);
    return;
  }
  *(void **)((int)this + 4) = operator_new_result;
  *(int *)((int)this + 8) = (int)operator_new_result + 0x18;
  return;
}


/* ==== 004d29b0 FUN_004d29b0 ==== */

void __thiscall FUN_004d29b0(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = *(undefined4 **)((int)this + 4); puVar2 != puVar1; puVar2 = puVar2 + 6) {
    (**(code **)*puVar2)(0);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 004d2a00 FUN_004d2a00 ==== */

/* WARNING: Removing unreachable block (ram,0x004d2c36) */

void * __thiscall FUN_004d2a00(void *this,int param_2)

{
  undefined4 *puVar1;
  void *this_00;
  int this_val_3;
  void *operator_new_result;
  int iVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  int iVar4;
  void *this_val_2;
  int this_val;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056fc68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)this = (undefined1)param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  if ((*(int *)(param_2 + 4) != 0) &&
     (iVar2 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x18, iVar2 != 0)) {
    this_val_3 = iVar2;
    if (iVar2 < 0) {
      this_val_3 = 0;
    }
    operator_new_result = operator_new(this_val_3 * 0x18);
    this_val_3 = *(int *)((int)this + 8);
    this_val_2 = operator_new_result;
    this_00 = extraout_ECX;
    for (this_val = *(int *)((int)this + 4); this_val != this_val_3; this_val = this_val + 0x18) {
      FUN_004d2e20(this_00,(int)this_val_2,this_val);
      this_val_2 = (void *)((int)this_val_2 + 0x18);
      this_00 = extraout_ECX_00;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    for (puVar5 = *(undefined4 **)((int)this + 4); puVar5 != puVar1; puVar5 = puVar5 + 6) {
      (**(code **)*puVar5)(0);
    }
    FUN_0054b339(*(undefined4 *)((int)this + 4));
    *(void **)((int)this + 0xc) = (void *)((int)operator_new_result + iVar2 * 0x18);
    iVar2 = FUN_004d2ce0(this);
    *(void **)((int)this + 4) = operator_new_result;
    *(void **)((int)this + 8) = (void *)((int)operator_new_result + iVar2 * 0x18);
  }
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != *(int *)(param_2 + 8)) {
    do {
      this_val_3 = *(int *)((int)this + 8);
      iVar4 = *(int *)((int)this + 0xc) - this_val_3;
      this_val = iVar4 >> 0x1f;
      if (iVar4 / 0x18 + this_val == this_val) {
        uVar3 = FUN_004d2ce0(this);
        if (uVar3 < 2) {
          this_val = 1;
        }
        else {
          this_val = FUN_004d2ce0(this);
        }
        iVar4 = FUN_004d2ce0(this);
        iVar4 = iVar4 + this_val;
        this_val = iVar4;
        if (iVar4 < 0) {
          this_val = 0;
        }
        this_val_2 = operator_new(this_val * 0x18);
        this_val = FUN_004d2d40(*(int *)((int)this + 4),this_val_3,(int)this_val_2);
        FUN_004d2d80(this_val,1,iVar2);
        FUN_004d2d40(this_val_3,*(int *)((int)this + 8),this_val + 0x18);
        FUN_004d2d10(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8));
        FUN_0054b339(*(undefined4 *)((int)this + 4));
        *(void **)((int)this + 0xc) = (void *)((int)this_val_2 + iVar4 * 0x18);
        this_val_3 = FUN_004d2ce0(this);
        *(void **)((int)this + 4) = this_val_2;
        *(void **)((int)this + 8) = (void *)((int)this_val_2 + (this_val_3 + 1) * 0x18);
      }
      else {
        FUN_004d2d40(this_val_3,this_val_3,this_val_3 + 0x18);
        FUN_004d2d80(*(int *)((int)this + 8),1 - (*(int *)((int)this + 8) - this_val_3) / 0x18,iVar2
                    );
        FUN_004d2db0(this_val_3,*(int *)((int)this + 8),iVar2);
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)(param_2 + 8));
  }
  ExceptionList = pvStack_c;
  return this;
}


/* ==== 004d2c90 FUN_004d2c90 ==== */

void __thiscall FUN_004d2c90(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = *(undefined4 **)((int)this + 4); puVar2 != puVar1; puVar2 = puVar2 + 6) {
    (**(code **)*puVar2)(0);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 004d2ce0 FUN_004d2ce0 ==== */

int __thiscall FUN_004d2ce0(void *this)

{
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18;
}


/* ==== 004d2d10 FUN_004d2d10 ==== */

void FUN_004d2d10(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)*param_1)(0);
  }
  return;
}


/* ==== 004d2d40 FUN_004d2d40 ==== */

int FUN_004d2d40(int param_1,int param_2,int this_val)

{
  void *in_ECX;
  void *extraout_ECX;
  
  if (param_1 == param_2) {
    return this_val;
  }
  do {
    FUN_004d2e20(in_ECX,this_val,param_1);
    param_1 = param_1 + 0x18;
    this_val = this_val + 0x18;
    in_ECX = extraout_ECX;
  } while (param_1 != param_2);
  return this_val;
}


/* ==== 004d2d80 FUN_004d2d80 ==== */

void FUN_004d2d80(int this_val,int param_2,undefined4 param_3)

{
  void *in_ECX;
  void *extraout_ECX;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_004d2e20(in_ECX,this_val,param_3);
    this_val = this_val + 0x18;
    in_ECX = extraout_ECX;
  }
  return;
}


/* ==== 004d2db0 FUN_004d2db0 ==== */

void FUN_004d2db0(int this_val,int param_2,undefined4 param_3)

{
  for (; this_val != param_2; this_val = this_val + 0x18) {
    FUN_004cf110(this_val,param_3);
  }
  return;
}


/* ==== 004d2de0 FUN_004d2de0 ==== */

int FUN_004d2de0(int param_1,int param_2,int this_val)

{
  if (param_1 == param_2) {
    return this_val;
  }
  do {
    param_2 = param_2 + -0x18;
    this_val = this_val + -0x18;
    FUN_004cf110(this_val,param_2);
  } while (param_2 != param_1);
  return this_val;
}


/* ==== 004d2e20 FUN_004d2e20 ==== */

void __thiscall FUN_004d2e20(void *this,int this_val,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056fc91;
  local_c = ExceptionList;
  local_4 = 0;
  if (this_val != 0) {
    ExceptionList = &local_c;
    FUN_004cef20(this_val,param_2,this_val);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004d2e90 FUN_004d2e90 ==== */

void __thiscall
FUN_004d2e90(void *this,int param_1,char *str1_2,char *str1,undefined4 *param_4,undefined4 *param_5)

{
  int *this_00;
  void **ppvVar1;
  char cVar2;
  char *str2;
  int __strcmpi_result;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056fcb0;
  pvStack_c = ExceptionList;
  piVar4 = *(int **)((int)this + 4);
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar4 != *(int **)((int)this + 8)) {
    do {
      str2 = (char *)(**(code **)(*(int *)*piVar4 + 8))();
      __strcmpi_result = __strcmpi(str1_2,str2);
      if (__strcmpi_result == 0) {
        str2 = *(char **)(*piVar4 + 8);
        if (str2 == (char *)0x0) {
          str2 = "";
        }
        __strcmpi_result = __strcmpi(str1,str2);
        if (__strcmpi_result == 0) {
          this_00 = (int *)*piVar4;
          if (param_1 == this_00[5]) {
            uVar3 = (**(code **)(*this_00 + 0xc))();
            *param_4 = uVar3;
            if (param_5 == (undefined4 *)0x0) {
              ExceptionList = pvStack_c;
              return;
            }
            uVar3 = (**(code **)(*(int *)*piVar4 + 0x10))();
            *param_5 = uVar3;
            ExceptionList = pvStack_c;
            return;
          }
          puVar5 = auStack_2c;
          pcVar6 = s_Item_has_wrong_type___s__s_005b6f50;
          str2 = str1_2;
          pcVar7 = str1;
          uVar3 = FUN_004d7610(this_00,puVar5);
          uStack_4 = 0;
          FUN_004d6d30(0x138a,uVar3,str1_2,str1,puVar5,pcVar6,str2,pcVar7);
          if (iStack_28 == 0) {
            ExceptionList = pvStack_c;
            return;
          }
          str2 = (char *)(iStack_28 + -1);
          cVar2 = *(char *)(iStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) goto LAB_004d2fe4;
          goto LAB_004d2f49;
        }
      }
      piVar4 = piVar4 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar4 != *(int **)((int)this + 8));
  }
  ExceptionList = ppvVar1;
  puVar5 = local_1c;
  pcVar6 = s_Item_not_found___s__s_005b6f6c;
  str2 = str1_2;
  pcVar7 = str1;
  uVar3 = FUN_004d7610(puVar5,puVar5);
  uStack_4 = 1;
  FUN_004d6d30(0x1389,uVar3,str1_2,str1,puVar5,pcVar6,str2,pcVar7);
  if (iStack_18 != 0) {
    str2 = (char *)(iStack_18 + -1);
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
LAB_004d2f49:
      *str2 = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
LAB_004d2fe4:
    FUN_0054b339(str2);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d3010 FUN_004d3010 ==== */

void __thiscall
FUN_004d3010(void *this,int param_1,char *str1,undefined4 *param_3,undefined4 *param_4)

{
  int *this_00;
  void **ppvVar1;
  char cVar2;
  char *pcVar3;
  int __strcmpi_result;
  undefined4 uVar4;
  int *piVar5;
  char *_Str2;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056fcd0;
  pvStack_c = ExceptionList;
  piVar5 = *(int **)((int)this + 4);
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar5 != *(int **)((int)this + 8)) {
    do {
      _Str2 = &DAT_00712694;
      pcVar3 = (char *)(**(code **)(*(int *)*piVar5 + 8))();
      __strcmpi_result = __strcmpi(pcVar3,_Str2);
      if (__strcmpi_result == 0) {
        pcVar3 = *(char **)(*piVar5 + 8);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        __strcmpi_result = __strcmpi(str1,pcVar3);
        if (__strcmpi_result == 0) {
          this_00 = (int *)*piVar5;
          if (param_1 == this_00[5]) {
            uVar4 = (**(code **)(*this_00 + 0xc))();
            *param_3 = uVar4;
            if (param_4 == (undefined4 *)0x0) {
              ExceptionList = pvStack_c;
              return;
            }
            uVar4 = (**(code **)(*(int *)*piVar5 + 0x10))();
            *param_4 = uVar4;
            ExceptionList = pvStack_c;
            return;
          }
          FUN_004d7610(this_00,auStack_2c);
          uStack_4 = 0;
          FUN_004d6f20();
          if (iStack_28 == 0) {
            ExceptionList = pvStack_c;
            return;
          }
          pcVar3 = (char *)(iStack_28 + -1);
          cVar2 = *(char *)(iStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) goto LAB_004d315d;
          goto LAB_004d30c6;
        }
      }
      piVar5 = piVar5 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar5 != *(int **)((int)this + 8));
  }
  ExceptionList = ppvVar1;
  FUN_004d7610(local_1c,local_1c);
  uStack_4 = 1;
  FUN_004d6f20();
  if (iStack_18 != 0) {
    pcVar3 = (char *)(iStack_18 + -1);
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
LAB_004d30c6:
      *pcVar3 = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
LAB_004d315d:
    FUN_0054b339(pcVar3);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d3180 FUN_004d3180 ==== */

void __thiscall FUN_004d3180(void *this)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)this >> 0x18);
  *(undefined1 *)this = local_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 004d31a0 FUN_004d31a0 ==== */

void __thiscall FUN_004d31a0(void *this)

{
  void **ppvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056fce8;
  pvStack_c = ExceptionList;
  piVar2 = *(int **)((int)this + 4);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar2 != *(int **)((int)this + 8)) {
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      piVar2 = piVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar2 != *(int **)((int)this + 8));
  }
  ExceptionList = ppvVar1;
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d3210 FUN_004d3210 ==== */

/* WARNING: Removing unreachable block (ram,0x004d3394) */
/* WARNING: Removing unreachable block (ram,0x004d33af) */
/* WARNING: Removing unreachable block (ram,0x004d33be) */
/* WARNING: Removing unreachable block (ram,0x004d33c5) */

void * __thiscall FUN_004d3210(void *this,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_20;
  undefined4 *local_1c;
  void *pvStack_18;
  int iStack_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar3 = ExceptionList;
  puStack_8 = &LAB_0056fd08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = (undefined1)param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  puVar5 = *(undefined4 **)(param_2 + 4);
  local_10 = this;
  if (puVar5 != *(undefined4 **)(param_2 + 8)) {
    do {
      local_1c = puVar5;
      uStack_20 = (**(code **)(*(int *)*puVar5 + 4))();
      puVar6 = *(undefined4 **)((int)this + 8);
      if (*(int *)((int)this + 0xc) - (int)puVar6 >> 2 == 0) {
        iVar2 = *(int *)((int)this + 4);
        if ((iVar2 == 0) || (uVar4 = (int)puVar6 - iVar2 >> 2, uVar4 < 2)) {
          uVar4 = 1;
        }
        if (iVar2 == 0) {
          iStack_14 = 0;
        }
        else {
          iStack_14 = (int)puVar6 - iVar2 >> 2;
        }
        iStack_14 = iStack_14 + uVar4;
        iVar2 = iStack_14;
        if (iStack_14 < 0) {
          iVar2 = 0;
        }
        pvVar3 = operator_new(iVar2 * 4);
        pvStack_18 = pvVar3;
        for (puVar5 = *(undefined4 **)((int)this + 4); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          FUN_004d2770(pvVar3,puVar5);
          pvVar3 = (void *)((int)pvVar3 + 4);
        }
        FUN_004de280(pvVar3,1,&uStack_20);
        FUN_004de170(puVar6,*(undefined4 *)((int)this + 8),(int)pvVar3 + 4);
        FUN_0042f530(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8));
        FUN_0054b339(*(undefined4 *)((int)this + 4));
        pvVar3 = pvStack_18;
        *(void **)((int)this + 0xc) = (void *)((int)pvStack_18 + iStack_14 * 4);
        iVar2 = FUN_00492480(this);
        *(void **)((int)this + 4) = pvVar3;
        *(int *)((int)this + 8) = (int)pvVar3 + iVar2 * 4 + 4;
        puVar5 = local_1c;
      }
      else {
        FUN_004de170(puVar6,puVar6,puVar6 + 1);
        FUN_004de280(*(int *)((int)this + 8),1 - (*(int *)((int)this + 8) - (int)puVar6 >> 2),
                     &uStack_20);
        puVar1 = *(undefined4 **)((int)this + 8);
        for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          *puVar6 = uStack_20;
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_2 + 8));
    ExceptionList = local_c;
    return this;
  }
  ExceptionList = pvVar3;
  return this;
}


/* ==== 004d3440 FUN_004d3440 ==== */

void __thiscall FUN_004d3440(void *this,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  void *local_1c [2];
  undefined4 uStack_14;
  undefined *puStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fd28;
  puStack_c = ExceptionList;
  local_20 = *param_2;
  ExceptionList = &puStack_c;
  FUN_004d3210(local_1c,param_2 + 1);
  local_4 = 0;
  FUN_004d80c0();
  DAT_0074b888 = *puVar2;
  FUN_004d6730();
  puVar3 = DAT_0074b8b4;
  puVar2 = (undefined4 *)*DAT_0074b8b4;
  while (puVar2 != puVar3) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_004d3e00(&DAT_0074b8b0,&param_2,puVar2);
    puVar2 = puVar1;
  }
  (**(code **)(*(int *)((int)this + 0x44) + 4))(&local_20);
  (**(code **)(*(int *)((int)this + 0x6c) + 4))(&stack0xffffffdc);
  (**(code **)(*(int *)((int)this + 0x30) + 4))(&stack0xffffffd8);
  (**(code **)(*(int *)((int)this + 0x80) + 4))(&stack0xffffffd4);
  FUN_004d6730();
  if (DAT_0074b8b8 == 0) {
    uStack_14 = 0xffffffff;
    FUN_004d31a0(&stack0xffffffd4);
    ExceptionList = local_1c[0];
    return;
  }
  puStack_c = &DAT_0074b8b0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&puStack_c,&DAT_005845c0);
}


/* ==== 004d3570 FUN_004d3570 ==== */

void * __thiscall FUN_004d3570(void *this,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fd56;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004d88e0(this,param_2);
  local_4 = 0;
  FUN_004d9200((int)this + 0xbc);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_FUN_00577830;
  FUN_004d6730();
  FUN_004d3440(this,param_3);
  puVar1 = *(undefined4 **)((int)this + 0x60);
  if (puVar1 != *(undefined4 **)((int)this + 100)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x58))((int)this + 0xbc);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 100));
  }
  FUN_004d6730();
  ExceptionList = pvStack_c;
  return this;
}


/* ==== 004d3630 FUN_004d3630 ==== */

void __thiscall FUN_004d3630(void *this)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056fdb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00577890;
  local_4 = 6;
  FUN_004da170((int)this + 0xa8);
  local_4._0_1_ = 5;
  FUN_004da170((int)this + 0x94);
  local_4._0_1_ = 4;
  FUN_004da170((int)this + 0x80);
  local_4._0_1_ = 3;
  FUN_004da170((int)this + 0x6c);
  local_4._0_1_ = 2;
  FUN_004da170((int)this + 0x58);
  local_4._0_1_ = 1;
  FUN_004da170((int)this + 0x44);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004da170((int)this + 0x30);
  *(undefined ***)this = &PTR_FUN_00577860;
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004d3700 FUN_004d3700 ==== */

void * __thiscall FUN_004d3700(void *this,byte param_2)

{
  FUN_004df310();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d3720 FUN_004d3720 ==== */

void * __thiscall FUN_004d3720(void *this,byte param_2)

{
  FUN_004d3630();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d3740 FUN_004d3740 ==== */

void * __thiscall FUN_004d3740(void *this,byte param_2)

{
  FUN_004d37a0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d3760 FUN_004d3760 ==== */

int * FUN_004d3760(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_ECX;
  
  iVar2 = FUN_004d8f00(in_ECX,param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004da220(iVar2 + 0x3c,param_2);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x44))();
      if (cVar1 != '\0') {
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}


/* ==== 004d37a0 FUN_004d37a0 ==== */

void __thiscall FUN_004d37a0(void *this)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056fe26;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00577830;
  iVar2 = *(int *)((int)this + 100);
  local_4 = 1;
  if (iVar2 != *(int *)((int)this + 0x60)) {
    do {
      (**(code **)(**(int **)(iVar2 + -4) + 0x5c))((int)this + 0xbc);
      iVar2 = iVar2 + -4;
    } while (iVar2 != *(int *)((int)this + 0x60));
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004d9260((int)this + 0xbc);
  *(undefined ***)this = &PTR_FUN_00577890;
  local_4 = 8;
  FUN_004da170((int)this + 0xa8);
  local_4._0_1_ = 7;
  FUN_004da170((int)this + 0x94);
  local_4._0_1_ = 6;
  FUN_004da170((int)this + 0x80);
  local_4._0_1_ = 5;
  FUN_004da170((int)this + 0x6c);
  local_4._0_1_ = 4;
  FUN_004da170((int)this + 0x58);
  local_4._0_1_ = 3;
  FUN_004da170((int)this + 0x44);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004da170((int)this + 0x30);
  *(undefined ***)this = &PTR_FUN_00577860;
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d38c0 FUN_004d38c0 ==== */

void __thiscall FUN_004d38c0(void *this,char *this_val)

{
  char cVar1;
  int *piVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_34 [4];
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined **local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fe38;
  local_c = ExceptionList;
  local_34[0] = this_val._0_1_;
  i = 0xffffffff;
  pcVar3 = this_val;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_30 = (char *)0x0;
  local_2c = 0;
  local_28 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00402a00(local_34,i,1);
  if (cVar1 != '\0') {
    pcVar3 = this_val;
    pcVar4 = local_30;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    FUN_004029e0(local_34,i);
  }
  local_4 = 0;
  piVar2 = (int *)FUN_004d8f10(this,local_34);
  local_4 = 0xffffffff;
  if (local_30 != (char *)0x0) {
    cVar1 = local_30[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_30 + -1);
    }
    else {
      local_30[-1] = cVar1 + -1;
    }
  }
  local_30 = (char *)0x0;
  local_2c = 0;
  local_28 = 0;
  if (piVar2 == (int *)0x0) {
    FUN_004d6730(this_val,s_Execute_skipped__function__s_not_005b701c,this_val);
  }
  else {
    (**(code **)(*piVar2 + 0x3c))(local_24,(int)this + 0xbc);
    local_24[0] = &PTR_FUN_005778c0;
    FUN_004cf650(local_24);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004d39e0 FUN_004d39e0 ==== */

void * __thiscall FUN_004d39e0(void *this,byte param_2)

{
  FUN_004d3a00();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d3a00 FUN_004d3a00 ==== */

void __thiscall FUN_004d3a00(void *this)

{
  *(undefined ***)this = &PTR_FUN_005778c0;
  FUN_004cf650();
  return;
}


/* ==== 004d3a10 FUN_004d3a10 ==== */

bool __thiscall FUN_004d3a10(void *this,undefined4 param_1,int *this_val,int this_val_2)

{
  char cVar1;
  int this_val_3;
  uint i;
  uint j;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 local_54 [4];
  char *local_50;
  undefined1 local_44 [4];
  undefined4 *local_40;
  undefined1 local_34 [4];
  undefined4 *local_30;
  undefined **appuStack_2c [2];
  undefined1 auStack_24 [16];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fe68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (this_val == (int *)0x0) {
    local_34[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004028f0(local_34,0);
    i = 0xffffffff;
    pcVar3 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_34,i,1);
    if (cVar1 != '\0') {
      puVar2 = (undefined4 *)&DAT_00712694;
      for (j = i >> 2; j != 0; j = j - 1) {
        *local_30 = *puVar2;
        puVar2 = puVar2 + 1;
        local_30 = local_30 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)local_30 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        local_30 = (undefined4 *)((int)local_30 + 1);
      }
      FUN_004029e0(local_34,i);
    }
    local_4 = 0;
    local_44[0] = 0;
    FUN_004028f0(local_44,0);
    i = 0xffffffff;
    pcVar3 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_44,i,1);
    if (cVar1 != '\0') {
      puVar2 = (undefined4 *)&DAT_00712694;
      for (j = i >> 2; j != 0; j = j - 1) {
        *local_40 = *puVar2;
        puVar2 = puVar2 + 1;
        local_40 = local_40 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)local_40 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        local_40 = (undefined4 *)((int)local_40 + 1);
      }
      FUN_004029e0(local_44,i);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    local_54[0] = 0;
    FUN_004028f0(local_54,0);
    i = 0xffffffff;
    pcVar3 = s_Call_to_NULL_event_handler_005b7048;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_54,i,1);
    if (cVar1 != '\0') {
      pcVar3 = s_Call_to_NULL_event_handler_005b7048;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)local_50 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        local_50 = local_50 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *local_50 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        local_50 = local_50 + 1;
      }
      FUN_004029e0(local_54,i);
    }
    local_4._0_1_ = 2;
    FUN_004d6900(0xbc3,local_54,local_44,local_34);
    local_4._0_1_ = 1;
    FUN_004028f0(local_54,1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_44,1);
    local_4 = 0xffffffff;
    FUN_004028f0(local_34,1);
  }
  FUN_004dae20(this_val,this_val_2);
  this_val_3 = (int)this + 0xbc;
  FUN_004d9bd0(this_val_3,this_val_2);
  FUN_004d92a0(this_val_3,param_1);
  this_val_3 = (**(code **)(*this_val + 0x3c))(auStack_24,this_val_3);
  this_val_3 = *(int *)(this_val_3 + 0x10);
  appuStack_2c[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_2c);
  ExceptionList = pvStack_14;
  return this_val_3 != 0;
}


/* ==== 004d3c10 FUN_004d3c10 ==== */

bool __thiscall FUN_004d3c10(void *this,undefined4 param_1,int *this_val)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined1 local_54 [4];
  char *local_50;
  undefined1 local_44 [4];
  undefined4 *local_40;
  undefined1 local_34 [4];
  undefined4 *local_30;
  undefined **appuStack_2c [2];
  undefined1 auStack_24 [16];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056fe98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (this_val == (int *)0x0) {
    local_34[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004028f0(local_34,0);
    i = 0xffffffff;
    pcVar4 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_34,i,1);
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)&DAT_00712694;
      for (j = i >> 2; j != 0; j = j - 1) {
        *local_30 = *puVar3;
        puVar3 = puVar3 + 1;
        local_30 = local_30 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)local_30 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        local_30 = (undefined4 *)((int)local_30 + 1);
      }
      FUN_004029e0(local_34,i);
    }
    local_4 = 0;
    local_44[0] = 0;
    FUN_004028f0(local_44,0);
    i = 0xffffffff;
    pcVar4 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_44,i,1);
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)&DAT_00712694;
      for (j = i >> 2; j != 0; j = j - 1) {
        *local_40 = *puVar3;
        puVar3 = puVar3 + 1;
        local_40 = local_40 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)local_40 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        local_40 = (undefined4 *)((int)local_40 + 1);
      }
      FUN_004029e0(local_44,i);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    local_54[0] = 0;
    FUN_004028f0(local_54,0);
    i = 0xffffffff;
    pcVar4 = s_Call_to_NULL_event_handler_005b7048;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_54,i,1);
    if (cVar1 != '\0') {
      pcVar4 = s_Call_to_NULL_event_handler_005b7048;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)local_50 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        local_50 = local_50 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *local_50 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        local_50 = local_50 + 1;
      }
      FUN_004029e0(local_54,i);
    }
    local_4._0_1_ = 2;
    FUN_004d6900(0xbc3,local_54,local_44,local_34);
    local_4._0_1_ = 1;
    FUN_004028f0(local_54,1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_44,1);
    local_4 = 0xffffffff;
    FUN_004028f0(local_34,1);
  }
  FUN_004db1c0(this_val);
  FUN_004d92a0((int)this + 0xbc,param_1);
  iVar2 = (**(code **)(*this_val + 0x3c))(auStack_24,(int)this + 0xbc);
  iVar2 = *(int *)(iVar2 + 0x10);
  appuStack_2c[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_2c);
  ExceptionList = pvStack_14;
  return iVar2 != 0;
}


/* ==== 004d3e00 FUN_004d3e00 ==== */

void __thiscall FUN_004d3e00(void *this,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  FUN_00479480(param_3 + 2);
  FUN_0054b339(param_3);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  *param_2 = iVar1;
  return;
}


/* ==== 004d3e60 FUN_004d3e60 ==== */

void __thiscall FUN_004d3e60(void *this,undefined4 param_2)

{
  FUN_004d43a0(param_2,*(undefined1 *)((int)this + 4));
  FUN_004d7390(param_2,(int)this + 0xc);
  FUN_004dbf10((void *)((int)this + 0x1c),param_2);
  return;
}


/* ==== 004d3e90 FUN_004d3e90 ==== */

void __thiscall
FUN_004d3e90(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *this_val;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056feb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_004d4510(param_2);
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = param_4;
  FUN_004d71d0(param_2);
  FUN_004dbee0((void *)((int)this + 0x1c),param_2,param_3);
  *(undefined2 *)((int)this + 0x24) = param_5;
  iVar3 = FUN_004dbc40();
  puVar4 = *(undefined1 **)(iVar3 + 4);
  uStack_4 = 0;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0057629c;
  }
  this_val = &DAT_0057629c;
  if (*(undefined1 **)((int)this + 0x10) != (undefined1 *)0x0) {
    this_val = *(undefined1 **)((int)this + 0x10);
  }
  FUN_004d6730(this_val,&DAT_005b7064,this_val,puVar4,(int)*(short *)((int)this + 0x24));
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d3f80 FUN_004d3f80 ==== */

void FUN_004d3f80(undefined4 this_val)

{
  FUN_004d4610(this_val);
  return;
}


/* ==== 004d3f90 FUN_004d3f90 ==== */

int * __thiscall FUN_004d3f90(void *this,undefined4 this_val)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  void *this_01;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = s__005b36c4;
  piVar1 = (int *)FUN_004d4130(this_val,*(undefined4 *)((int)this + 4));
  piVar1 = (int *)FUN_004d4cd0(this_00,piVar1,pcVar4);
  pcVar4 = *(char **)((int)this + 0x10);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004d4cd0(this_01,piVar1,pcVar4);
  FUN_004d43a0(piVar1);
  uVar3 = 0;
  if ((*(byte *)(*(int *)(*piVar1 + 4) + 4 + (int)piVar1) & 6) == 0) {
    iVar2 = (**(code **)(**(int **)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) + 0x2c))();
    if (iVar2 == -1) {
      uVar3 = 4;
    }
  }
  if (uVar3 != 0) {
    uVar3 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar3;
    if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
      uVar3 = uVar3 | 4;
    }
    FUN_0054c6db(uVar3);
  }
  return piVar1;
}


/* ==== 004d4020 FUN_004d4020 ==== */

undefined4 FUN_004d4020(int param_1)

{
  if ((0x3a < param_1) && (param_1 < 0x42)) {
    return 1;
  }
  return 0;
}


/* ==== 004d4040 FUN_004d4040 ==== */

undefined4 FUN_004d4040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *this_val;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056fedb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_004d4610(param_1);
  if ((0x31 < iVar1) && (iVar1 < 0x3b)) {
    uVar2 = FUN_004dc7d0(param_1);
    ExceptionList = puStack_8;
    return uVar2;
  }
  if ((0x3a < iVar1) && (iVar1 < 0x42)) {
    uVar2 = FUN_004dc520(param_1);
    ExceptionList = puStack_8;
    return uVar2;
  }
  this_val = operator_new(0x50);
  uStack_4 = 0;
  if (this_val != (void *)0x0) {
    uVar2 = FUN_004dc120(this_val,param_1,param_2,param_3,param_4);
    ExceptionList = pvStack_c;
    return uVar2;
  }
  ExceptionList = pvStack_c;
  return 0;
}


/* ==== 004d4120 FUN_004d4120 ==== */

void FUN_004d4120(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x2c))(param_1);
  return;
}


/* ==== 004d4130 FUN_004d4130 ==== */

void * __thiscall FUN_004d4130(void *this,char *param_2)

{
  char cVar1;
  undefined4 this_val_3;
  undefined4 uVar2;
  int *piVar3;
  facet *_Decref_result;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined **local_44 [3];
  uint local_38 [2];
  char local_30;
  void *local_2c;
  void *this_val;
  facet *this_val_2;
  uint local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056ff13;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_1c = 0;
  ExceptionList = &local_10;
  local_18 = this;
  local_30 = FUN_004d4c50();
  local_8 = 0;
  uVar6 = 0;
  local_2c = this;
  if (local_30 != '\0') {
    this_val_3 = FUN_004d4370(*(int *)(*(int *)this + 4) + (int)this,&this_val_2);
    local_8._0_1_ = 2;
    uVar2 = FUN_004d4350(&DAT_0074db14);
    piVar3 = (int *)FUN_0054ca8b(this_val_3,uVar2,1);
    if (piVar3 == (int *)0x0) {
      cVar1 = FUN_0054caca(this_val_3);
      if (cVar1 == '\0') {
        param_2 = s_missing_locale_facet_005b6f34;
        FUN_00558853(local_44,&param_2);
        local_44[0] = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_44,&DAT_00584188);
      }
      piVar3 = DAT_0074b894;
      if (DAT_0074b894 == (int *)0x0) {
        this_val = operator_new(8);
        local_8._0_1_ = 3;
        if (this_val == (void *)0x0) {
          this_val_3 = 0;
        }
        else {
          this_val_3 = FUN_004d4f60(this_val,0);
        }
        local_8._0_1_ = 2;
        piVar3 = (int *)FUN_004d6550(this_val_3);
        DAT_0074b894 = piVar3;
      }
    }
    local_8._0_1_ = 0;
    if ((this_val_2 != (facet *)0x0) &&
       (_Decref_result = std::locale::facet::_Decref(this_val_2), _Decref_result != (facet *)0x0)) {
      (*(code *)**(undefined4 **)_Decref_result)(1);
    }
    local_38[0] = local_38[0] & 0xffffff00;
    uVar6 = *(int *)(*(int *)this + 4) + (int)this;
    local_8 = CONCAT31(local_8._1_3_,4);
    this_val = (void *)(CONCAT31((int3)((uint)*(undefined4 *)
                                               (*(int *)(*(int *)this + 4) + 0xc + (int)this) >> 8),
                                 *(undefined1 *)(uVar6 + 0x30)) & 0xeff);
    puVar4 = (undefined4 *)
             (**(code **)(*piVar3 + 0x14))
                       (local_38,local_38[0],*(undefined4 *)(uVar6 + 0x28),
                        -(uint)(this != (void *)0x0) & uVar6,this_val,param_2);
    this_val = (void *)puVar4[1];
    uVar6 = local_1c;
    if ((char)*puVar4 != '\0') {
      uVar6 = 4;
    }
  }
  local_8 = 0;
  if (uVar6 != 0) {
    uVar6 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 4) | uVar6;
    if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x28) == 0) {
      uVar6 = uVar6 | 4;
    }
    FUN_0054c6db(uVar6,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_0054eb4d();
  if ((cVar1 == '\0') &&
     (iVar5 = *(int *)(*(int *)this + 4), (*(byte *)((int)this + iVar5 + 0xc) & 2) != 0)) {
    uVar6 = 0;
    if (((*(byte *)((int)this + iVar5 + 4) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)((int)this + iVar5 + 0x28) + 0x2c))(), iVar5 == -1)) {
      uVar6 = 4;
    }
    if (uVar6 != 0) {
      uVar6 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 4) | uVar6;
      if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x28) == 0) {
        uVar6 = uVar6 | 4;
      }
      FUN_0054c6db(uVar6,0);
    }
  }
  ExceptionList = local_10;
  return this;
}


/* ==== 004d4350 FUN_004d4350 ==== */

undefined4 __thiscall FUN_004d4350(void *this)

{
  if (*(int *)this == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    *(int *)this = DAT_0074dafc;
  }
  return *(undefined4 *)this;
}


/* ==== 004d4370 FUN_004d4370 ==== */

void __thiscall FUN_004d4370(void *this,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x20);
  *param_2 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return;
}


/* ==== 004d43a0 FUN_004d43a0 ==== */

void * __thiscall FUN_004d43a0(void *this,byte param_2)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056ff28;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  cVar3 = FUN_004d4c50();
  if (cVar3 == '\0') {
    uVar7 = 4;
    goto LAB_004d4475;
  }
  local_8 = 1;
  piVar1 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
  uVar7 = *(uint *)piVar1[8];
  if (uVar7 == 0) {
LAB_004d4428:
    uVar4 = (**(code **)(*piVar1 + 4))(param_2);
  }
  else {
    iVar6 = *(int *)piVar1[0xc];
    if (iVar6 + uVar7 <= uVar7) goto LAB_004d4428;
    *(int *)piVar1[0xc] = iVar6 + -1;
    pbVar2 = *(byte **)piVar1[8];
    *(byte **)piVar1[8] = pbVar2 + 1;
    *pbVar2 = param_2;
    uVar4 = (uint)param_2;
  }
  uVar7 = 0;
  if (uVar4 == 0xffffffff) {
    pvVar5 = (void *)FUN_004d446e();
    return pvVar5;
  }
LAB_004d4475:
  local_8 = 0;
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 4) | uVar7;
    if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x28) == 0) {
      uVar7 = uVar7 | 4;
    }
    FUN_0054c6db(uVar7,0);
  }
  local_8 = 0xffffffff;
  cVar3 = FUN_0054eb4d();
  if ((cVar3 == '\0') &&
     (iVar6 = *(int *)(*(int *)this + 4), (*(byte *)(iVar6 + 0xc + (int)this) & 2) != 0)) {
    uVar7 = 0;
    if (((*(byte *)((int)this + iVar6 + 4) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)((int)this + iVar6 + 0x28) + 0x2c))(), iVar6 == -1)) {
      uVar7 = 4;
    }
    if (uVar7 != 0) {
      uVar7 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 4) | uVar7;
      if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x28) == 0) {
        uVar7 = uVar7 | 4;
      }
      FUN_0054c6db(uVar7,0);
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


/* ==== 004d446e FUN_004d446e ==== */

void FUN_004d446e(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (unaff_EDI != 0) {
    uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | unaff_EDI;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_0054c6db(uVar2,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar1 = FUN_0054eb4d();
  if ((cVar1 == '\0') &&
     (iVar3 = *(int *)(*unaff_ESI + 4), (*(byte *)(iVar3 + 0xc + (int)unaff_ESI) & 2) != 0)) {
    uVar2 = 0;
    if ((*(byte *)((int)unaff_ESI + iVar3 + 4) & 6) == 0) {
      iVar3 = (**(code **)(**(int **)((int)unaff_ESI + iVar3 + 0x28) + 0x2c))();
      if (iVar3 == -1) {
        uVar2 = 4;
      }
    }
    if (uVar2 != 0) {
      uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | uVar2;
      if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
        uVar2 = uVar2 | 4;
      }
      FUN_0054c6db(uVar2,0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004d4510 FUN_004d4510 ==== */

/* WARNING: Removing unreachable block (ram,0x004d45e2) */
/* WARNING: Removing unreachable block (ram,0x004d45ee) */
/* WARNING: Removing unreachable block (ram,0x004d45f0) */

undefined4 __thiscall FUN_004d4510(void *this)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056ff40;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined4 *)((int)this + 4) = 0;
  cVar4 = FUN_004d4770(this,1);
  if (cVar4 == '\0') {
    ExceptionList = pvStack_10;
    return 0xffffffff;
  }
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
  uVar5 = *(uint *)piVar1[7];
  if (uVar5 != 0) {
    iVar2 = *(int *)piVar1[0xb];
    if (uVar5 < iVar2 + uVar5) {
      *(int *)piVar1[0xb] = iVar2 + -1;
      pbVar3 = *(byte **)piVar1[7];
      *(byte **)piVar1[7] = pbVar3 + 1;
      uVar5 = (uint)*pbVar3;
      goto LAB_004d458e;
    }
  }
  uVar5 = (**(code **)(*piVar1 + 0x14))();
LAB_004d458e:
  if (uVar5 != 0xffffffff) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    uVar6 = FUN_004d45cd();
    return uVar6;
  }
  uVar6 = FUN_004d45cd();
  return uVar6;
}


/* ==== 004d45cd FUN_004d45cd ==== */

void FUN_004d45cd(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(uint *)(unaff_EBP + -0x18) != 0) {
    uVar1 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | *(uint *)(unaff_EBP + -0x18);
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar1 = uVar1 | 4;
    }
    FUN_0054c6db(uVar1,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004d4610 FUN_004d4610 ==== */

/* WARNING: Removing unreachable block (ram,0x004d46c8) */
/* WARNING: Removing unreachable block (ram,0x004d46d4) */
/* WARNING: Removing unreachable block (ram,0x004d46d6) */

uint __thiscall FUN_004d4610(void *this)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056ff50;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined4 *)((int)this + 4) = 0;
  cVar3 = FUN_004d4770(this,1);
  if (cVar3 == '\0') {
    uVar4 = 0xffffffff;
  }
  else {
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
    pbVar2 = *(byte **)piVar1[7];
    if ((pbVar2 == (byte *)0x0) || (pbVar2 + *(int *)piVar1[0xb] <= pbVar2)) {
      uVar4 = (**(code **)(*piVar1 + 0x10))();
    }
    else {
      uVar4 = (uint)*pbVar2;
    }
    if (uVar4 == 0xffffffff) {
      uVar4 = FUN_004d46b6();
      return uVar4;
    }
  }
  ExceptionList = pvStack_10;
  return uVar4;
}


/* ==== 004d46b6 FUN_004d46b6 ==== */

void FUN_004d46b6(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EDI != 0) {
    uVar1 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | unaff_EDI;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar1 = uVar1 | 4;
    }
    FUN_0054c6db(uVar1,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004d4700 FUN_004d4700 ==== */

void __thiscall FUN_004d4700(void *this)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  cVar2 = FUN_0054eb4d();
  if (cVar2 == '\0') {
    piVar1 = *(int **)((int)this + 4);
    iVar3 = *(int *)(*piVar1 + 4);
    if ((*(byte *)(iVar3 + 0xc + (int)piVar1) & 2) != 0) {
      uVar4 = 0;
      if ((*(byte *)((int)piVar1 + iVar3 + 4) & 6) == 0) {
        iVar3 = (**(code **)(**(int **)((int)piVar1 + iVar3 + 0x28) + 0x2c))();
        if (iVar3 == -1) {
          uVar4 = 4;
        }
      }
      if (uVar4 != 0) {
        uVar4 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar4;
        if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
          uVar4 = uVar4 | 4;
        }
        FUN_0054c6db(uVar4,0);
      }
    }
  }
  return;
}


/* ==== 004d4770 FUN_004d4770 ==== */

uint __thiscall FUN_004d4770(void *this,char param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  void *this_val_3;
  facet *_Decref_result;
  uint uVar5;
  int iVar6;
  undefined4 this_val_4;
  undefined1 local_28 [12];
  facet *this_val;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  int *this_val_2;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056ff7b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar6 = *(int *)(*(int *)this + 4) + (int)this;
  ExceptionList = &local_10;
  local_18 = this;
  puVar2 = &stack0xffffffcc;
  if (*(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this) == 0) {
    this_val_2 = *(int **)(iVar6 + 0x2c);
    ExceptionList = &local_10;
    puVar2 = &stack0xffffffcc;
    if (this_val_2 != (int *)0x0) {
      this_val_4 = 0;
      ExceptionList = &local_10;
      puVar2 = &stack0xffffffcc;
      if (((*(byte *)((int)this_val_2 + *(int *)(*this_val_2 + 4) + 4) & 6) == 0) &&
         (ExceptionList = &local_10,
         iVar6 = (**(code **)(**(int **)((int)this_val_2 + *(int *)(*this_val_2 + 4) + 0x28) + 0x2c)
                 )(), puVar2 = local_14, iVar6 == -1)) {
        this_val_4 = 4;
      }
      local_14 = puVar2;
      FUN_004d4c00(this_val_4,0);
      puVar2 = local_14;
    }
    local_14 = puVar2;
    if ((param_2 == '\0') && ((*(uint *)(*(int *)(*(int *)this + 4) + 0xc + (int)this) & 1) != 0)) {
      this_val_4 = FUN_004d4370(*(int *)(*(int *)this + 4) + (int)this,&this_val);
      local_8 = 1;
      uVar4 = FUN_004d4350(&DAT_0074db0c);
      _param_2 = FUN_0054ca8b(this_val_4,uVar4,1);
      if (_param_2 == 0) {
        cVar3 = FUN_0054caca(this_val_4);
        if (cVar3 == '\0') {
          FUN_004d1030(local_28,s_missing_locale_facet_005b6f34);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_28,&DAT_00584188);
        }
        _param_2 = DAT_0074b898;
        if (DAT_0074b898 == 0) {
          this_val_3 = operator_new(0x18);
          local_8._0_1_ = 2;
          if (this_val_3 == (void *)0x0) {
            this_val_4 = 0;
          }
          else {
            this_val_4 = FUN_004d49e0(this_val_3,0,0,0);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          DAT_0074b898 = FUN_004d6520(this_val_4);
          _param_2 = DAT_0074b898;
        }
      }
      local_8 = 0xffffffff;
      if ((this_val != (facet *)0x0) &&
         (_Decref_result = std::locale::facet::_Decref(this_val), _Decref_result != (facet *)0x0)) {
        (*(code *)**(undefined4 **)_Decref_result)(1);
      }
      local_8 = 3;
      this_val_2 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
      pbVar1 = *(byte **)this_val_2[7];
      if ((pbVar1 == (byte *)0x0) || (pbVar1 + *(int *)this_val_2[0xb] <= pbVar1)) {
        uVar5 = (**(code **)(*this_val_2 + 0x10))();
      }
      else {
        uVar5 = (uint)*pbVar1;
      }
      while ((uVar5 != 0xffffffff &&
             ((*(byte *)(*(int *)(_param_2 + 0x10) + (uVar5 & 0xff) * 2) & 0x48) != 0))) {
        this_val_2 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
        uVar5 = *(uint *)this_val_2[7];
        if (uVar5 == 0) {
LAB_004d491f:
          uVar5 = (**(code **)(*this_val_2 + 0x14))();
        }
        else {
          iVar6 = *(int *)this_val_2[0xb];
          if (iVar6 + uVar5 <= uVar5) goto LAB_004d491f;
          *(int *)this_val_2[0xb] = iVar6 + -1;
          pbVar1 = *(byte **)this_val_2[7];
          *(byte **)this_val_2[7] = pbVar1 + 1;
          uVar5 = (uint)*pbVar1;
        }
        if (uVar5 == 0xffffffff) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = FUN_004d4c30(this_val_2);
        }
      }
      local_8 = 0xffffffff;
    }
    iVar6 = *(int *)(*(int *)this + 4) + (int)this;
    puVar2 = local_14;
    if (*(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this) == 0) {
      ExceptionList = local_10;
      return 1;
    }
  }
  local_14 = puVar2;
  uVar5 = *(uint *)(iVar6 + 4) | 2;
  if (*(int *)(iVar6 + 0x28) == 0) {
    uVar5 = CONCAT31((int3)(*(uint *)(iVar6 + 4) >> 8),(char)uVar5) | 4;
  }
  uVar5 = FUN_0054c6db(uVar5,0);
  ExceptionList = local_10;
  return uVar5 & 0xffffff00;
}


/* ==== 004d49e0 FUN_004d49e0 ==== */

void * __thiscall FUN_004d49e0(void *this,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 local_5c [80];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056ffa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_4;
  *(undefined ***)this = &PTR_FUN_0057912c;
  local_4 = 1;
  FUN_0054d3cd(s_C_005b6f4c);
  puVar1 = (undefined4 *)FUN_0054ec38(local_5c);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *(undefined4 *)((int)this + 0xc) = puVar1[1];
  *(undefined4 *)((int)this + 0x10) = puVar1[2];
  *(undefined4 *)((int)this + 0x14) = puVar1[3];
  if (DAT_0074db00 == 0) {
    DAT_0074db00 = *(int *)((int)this + 0x10);
    FUN_005584e0(&LAB_004d4ae0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  FUN_0054d486();
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_00559d4e(*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (param_2 == 0) {
    *(int *)((int)this + 0x10) = DAT_0074db00;
    ExceptionList = local_c;
    return this;
  }
  *(int *)((int)this + 0x10) = param_2;
  *(uint *)((int)this + 0x14) = param_3 & 0xff;
  ExceptionList = local_c;
  return this;
}


/* ==== 004d4b10 FUN_004d4b10 ==== */

undefined1 * FUN_004d4b10(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  do {
    uVar1 = FUN_0054eb50();
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  } while (param_1 != param_2);
  return param_1;
}


/* ==== 004d4b70 FUN_004d4b70 ==== */

undefined1 * FUN_004d4b70(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  do {
    uVar1 = FUN_0054ec98();
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  } while (param_1 != param_2);
  return param_1;
}


/* ==== 004d4bb0 FUN_004d4bb0 ==== */

void * __thiscall FUN_004d4bb0(void *this,byte param_2)

{
  FUN_004d4bd0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d4bd0 FUN_004d4bd0 ==== */

void __thiscall FUN_004d4bd0(void *this)

{
  *(undefined ***)this = &PTR_FUN_0057912c;
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_00559d4e(*(undefined4 *)((int)this + 0x10));
  }
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 004d4c00 FUN_004d4c00 ==== */

void FUN_004d4c00(uint param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (param_1 != 0) {
    param_1 = *(uint *)(in_ECX + 4) | param_1;
    if (*(int *)(in_ECX + 0x28) == 0) {
      param_1 = param_1 | 4;
    }
    FUN_0054c6db(param_1,param_2);
  }
  return;
}


/* ==== 004d4c30 FUN_004d4c30 ==== */

uint __thiscall FUN_004d4c30(void *this)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)**(undefined4 **)((int)this + 0x1c);
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + **(int **)((int)this + 0x2c))) {
    return (uint)*pbVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x004d4c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(int *)this + 0x10))();
  return uVar2;
}


/* ==== 004d4c50 FUN_004d4c50 ==== */

bool __thiscall FUN_004d4c50(void *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this) == 0) &&
     (piVar1 = *(int **)((int)this + *(int *)(*(int *)this + 4) + 0x2c), piVar1 != (int *)0x0)) {
    uVar3 = 0;
    if ((*(byte *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) & 6) == 0) {
      iVar2 = (**(code **)(**(int **)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) + 0x2c))();
      if (iVar2 == -1) {
        uVar3 = 4;
      }
    }
    if (uVar3 != 0) {
      uVar3 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar3;
      if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
        uVar3 = uVar3 | 4;
      }
      FUN_0054c6db(uVar3,0);
    }
  }
  return *(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this) == 0;
}


/* ==== 004d4cd0 FUN_004d4cd0 ==== */

int * __thiscall FUN_004d4cd0(void *this,int *this_val,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  uint i;
  uint uVar7;
  char *pcVar8;
  int j;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0056ffb8;
  pvStack_10 = ExceptionList;
  i = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar4 != '\0');
  bVar3 = false;
  uVar7 = ~i - 1;
  i = *(uint *)(*(int *)(*this_val + 4) + 0x14 + (int)this_val);
  if (((int)i < 1) || (i <= uVar7)) {
    j = 0;
  }
  else {
    j = i - uVar7;
  }
  ExceptionList = &pvStack_10;
  cVar4 = FUN_004d4c50(this_val);
  local_8 = 0;
  if (cVar4 == '\0') {
    i = *(uint *)((int)this_val + *(int *)(*this_val + 4) + 4);
    uVar7 = i | 4;
    if (*(int *)((int)this_val + *(int *)(*this_val + 4) + 0x28) == 0) {
      uVar7 = CONCAT31((int3)(i >> 8),(char)uVar7) | 4;
    }
    FUN_0054c6db(uVar7,0);
    local_8 = 0xffffffff;
    cVar4 = FUN_0054eb4d();
    if ((cVar4 == '\0') &&
       (iVar6 = *(int *)(*this_val + 4), (*(byte *)(iVar6 + 0xc + (int)this_val) & 2) != 0)) {
      i = 0;
      if (((*(byte *)((int)this_val + iVar6 + 4) & 6) == 0) &&
         (iVar6 = (**(code **)(**(int **)((int)this_val + iVar6 + 0x28) + 0x2c))(), iVar6 == -1)) {
        i = 4;
      }
      if (i != 0) {
        i = *(uint *)((int)this_val + *(int *)(*this_val + 4) + 4) | i;
        if (*(int *)((int)this_val + *(int *)(*this_val + 4) + 0x28) == 0) {
          i = i | 4;
        }
        FUN_0054c6db(i,0);
      }
    }
    ExceptionList = pvStack_10;
    return this_val;
  }
  local_8 = 1;
  if ((*(uint *)(*(int *)(*this_val + 4) + 0xc + (int)this_val) & 0x1c0) != 0x40) {
    for (; j != 0; j = j + -1) {
      bVar1 = *(byte *)(*(int *)(*this_val + 4) + 0x30 + (int)this_val);
      piVar5 = *(int **)(*(int *)(*this_val + 4) + 0x28 + (int)this_val);
      i = *(uint *)piVar5[8];
      if (i == 0) {
LAB_004d4dac:
        i = (**(code **)(*piVar5 + 4))(bVar1);
      }
      else {
        iVar6 = *(int *)piVar5[0xc];
        if (iVar6 + i <= i) goto LAB_004d4dac;
        *(int *)piVar5[0xc] = iVar6 + -1;
        pbVar2 = *(byte **)piVar5[8];
        *(byte **)piVar5[8] = pbVar2 + 1;
        *pbVar2 = bVar1;
        i = (uint)bVar1;
      }
      if (i == 0xffffffff) {
        bVar3 = true;
        break;
      }
    }
    if (bVar3) goto LAB_004d4e74;
  }
  i = (**(code **)(**(int **)(*(int *)(*this_val + 4) + 0x28 + (int)this_val) + 0x1c))
                (param_2,uVar7);
  if (i != uVar7) {
    *(undefined4 *)(*(int *)(*this_val + 4) + 0x14 + (int)this_val) = 0;
    piVar5 = (int *)FUN_004d4eb3();
    return piVar5;
  }
  for (; j != 0; j = j + -1) {
    bVar1 = *(byte *)(*(int *)(*this_val + 4) + 0x30 + (int)this_val);
    piVar5 = *(int **)((int)this_val + *(int *)(*this_val + 4) + 0x28);
    i = *(uint *)piVar5[8];
    if (i == 0) {
LAB_004d4e59:
      i = (**(code **)(*piVar5 + 4))(bVar1);
    }
    else {
      iVar6 = *(int *)piVar5[0xc];
      if (iVar6 + i <= i) goto LAB_004d4e59;
      *(int *)piVar5[0xc] = iVar6 + -1;
      pbVar2 = *(byte **)piVar5[8];
      *(byte **)piVar5[8] = pbVar2 + 1;
      *pbVar2 = bVar1;
      i = (uint)bVar1;
    }
    if (i == 0xffffffff) break;
  }
LAB_004d4e74:
  *(undefined4 *)(*(int *)(*this_val + 4) + 0x14 + (int)this_val) = 0;
  piVar5 = (int *)FUN_004d4eb3();
  return piVar5;
}


/* ==== 004d4eb3 FUN_004d4eb3 ==== */

void FUN_004d4eb3(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_EDI;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(unaff_EBP + -0x18) != 0) {
    uVar3 = *(uint *)((int)unaff_EDI + *(int *)(*unaff_EDI + 4) + 4) | *(uint *)(unaff_EBP + -0x18);
    if (*(int *)((int)unaff_EDI + *(int *)(*unaff_EDI + 4) + 0x28) == 0) {
      uVar3 = uVar3 | 4;
    }
    FUN_0054c6db(uVar3,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar2 = FUN_0054eb4d();
  if ((cVar2 == '\0') &&
     (iVar4 = *(int *)(*piVar1 + 4), (*(byte *)(iVar4 + 0xc + (int)piVar1) & 2) != 0)) {
    uVar3 = 0;
    if ((*(byte *)((int)piVar1 + iVar4 + 4) & 6) == 0) {
      iVar4 = (**(code **)(**(int **)((int)piVar1 + iVar4 + 0x28) + 0x2c))();
      if (iVar4 == -1) {
        uVar3 = 4;
      }
    }
    if (uVar3 != 0) {
      uVar3 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar3;
      if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
        uVar3 = uVar3 | 4;
      }
      FUN_0054c6db(uVar3,0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004d4f60 FUN_004d4f60 ==== */

void * __thiscall FUN_004d4f60(void *this,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056ffd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_2;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005790e0;
  FUN_0054d3cd(s_C_005b6f4c);
  FUN_0054d486();
  ExceptionList = local_c;
  return this;
}


/* ==== 004d4fc0 FUN_004d4fc0 ==== */

undefined4 *
FUN_004d4fc0(undefined4 *param_1,void *param_2,int param_3,int this_val_3,undefined4 param_5,
            char param_6)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  undefined4 this_val_4;
  undefined4 uVar6;
  int i;
  facet *_Decref_result;
  int iVar7;
  undefined1 *puVar8;
  bool bVar9;
  facet *this_val;
  void *this_val_2;
  int iStack_28;
  char local_1c [4];
  undefined1 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  int this_val_5;
  
  this_val_5 = this_val_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570023;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_val_4 = FUN_004d4370(this_val_3,&this_val);
  local_4 = 1;
  uVar6 = FUN_004d4350(&DAT_0074db10);
  i = FUN_0054ca8b(this_val_4,uVar6,1);
  if (i == 0) {
    cVar5 = FUN_0054caca(this_val_4);
    if (cVar5 == '\0') {
      FUN_004d1030(&this_val_2,s_missing_locale_facet_005b6f34);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&this_val_2,&DAT_00584188);
    }
    i = DAT_0074b89c;
    if (DAT_0074b89c == 0) {
      this_val_2 = operator_new(0x18);
      local_4._0_1_ = 2;
      if (this_val_2 == (void *)0x0) {
        this_val_4 = 0;
      }
      else {
        this_val_4 = FUN_004d6120(this_val_2,0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      i = FUN_004d6580(this_val_4);
      DAT_0074b89c = i;
    }
  }
  local_4 = 0xffffffff;
  if ((this_val != (facet *)0x0) &&
     (_Decref_result = std::locale::facet::_Decref(this_val), _Decref_result != (facet *)0x0)) {
    (*(code *)**(undefined4 **)_Decref_result)(1);
  }
  local_1c[0] = param_6;
  FUN_004028f0(local_1c,0);
  local_4 = 3;
  if ((*(uint *)(this_val_5 + 0xc) & 0x4000) == 0) {
    bVar9 = param_6 != '\0';
    if (-uStack_14 - 1 < 2) {
      FUN_0054b1b4();
    }
    i = uStack_14 + 1;
    cVar5 = FUN_00402a00(local_1c,i,0);
    if (cVar5 != '\0') {
      puStack_18[uStack_14] = bVar9 + '0';
      FUN_004029e0(local_1c,i);
    }
  }
  else {
    if (param_6 == '\0') {
      this_val_4 = FUN_004d6060(i,&this_val_2);
      local_4._0_1_ = 5;
      FUN_004093c0(local_1c,this_val_4,0,0xffffffff);
    }
    else {
      this_val_4 = FUN_004d6080(i,&this_val_2);
      local_4._0_1_ = 4;
      FUN_004093c0(local_1c,this_val_4,0,0xffffffff);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004028f0(&this_val_2,1);
  }
  this_val_4 = param_5;
  uVar1 = *(uint *)(this_val_5 + 0x14);
  if (((int)uVar1 < 1) || (uVar1 <= uStack_14)) {
    i = 0;
  }
  else {
    i = uVar1 - uStack_14;
  }
  pvVar3 = param_2;
  iVar4 = param_3;
  pvVar2 = param_2;
  iVar7 = param_3;
  if ((*(uint *)(this_val_5 + 0xc) & 0x1c0) != 0x40) {
    for (; param_3 = iVar4, param_2 = pvVar3, this_val_2 = param_2, iStack_28 = param_3, i != 0;
        i = i + -1) {
      param_2 = pvVar2;
      param_3 = iVar7;
      FUN_004d60a0(&this_val_2,this_val_4);
      pvVar3 = this_val_2;
      iVar4 = iStack_28;
      pvVar2 = param_2;
      iVar7 = param_3;
    }
    i = 0;
  }
  this_val_5 = param_3;
  uVar1 = uStack_14;
  puVar8 = puStack_18;
  if (puStack_18 == (undefined1 *)0x0) {
    puVar8 = &DAT_0057629c;
  }
  for (; param_3 = this_val_5, uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_004d60a0(&param_2,*puVar8);
    this_val_5 = param_3;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(this_val_3 + 0x14) = 0;
  this_val_2 = param_2;
  for (; i != 0; i = i + -1) {
    if ((this_val_5 == 0) || (iVar7 = FUN_004d5280(this_val_5,this_val_4), iVar7 == -1)) {
      this_val_2 = (void *)CONCAT31(this_val_2._1_3_,1);
    }
  }
  *param_1 = this_val_2;
  param_1[1] = this_val_5;
  FUN_004028f0(local_1c,1);
  ExceptionList = pvStack_c;
  return param_1;
}


/* ==== 004d5280 FUN_004d5280 ==== */

uint __thiscall FUN_004d5280(void *this,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = **(uint **)((int)this + 0x20);
  if (uVar3 != 0) {
    iVar1 = **(int **)((int)this + 0x30);
    if (uVar3 < iVar1 + uVar3) {
      **(int **)((int)this + 0x30) = iVar1 + -1;
      pbVar2 = (byte *)**(int **)((int)this + 0x20);
      **(int **)((int)this + 0x20) = (int)(pbVar2 + 1);
      *pbVar2 = param_2;
      return (uint)param_2;
    }
  }
  uVar3 = (**(code **)(*(int *)this + 4))(param_2);
  return uVar3;
}


/* ==== 004d57d0 FUN_004d57d0 ==== */

void FUN_004d57d0(undefined4 *param_1,facet *facet_val_3,undefined4 param_3,int this_val_2,
                 undefined4 param_5,char *this_val,int param_7,size_t max_count_2)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *_memchr_result;
  undefined4 uVar7;
  facet *_Decref_result;
  char *pcVar8;
  size_t sVar9;
  size_t max_count;
  int i;
  int iVar10;
  char *buf;
  facet *facet_val_2;
  undefined4 uVar11;
  int local_28 [2];
  facet *this_val_3;
  undefined4 local_1c;
  facet *facet_val;
  undefined4 local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  max_count = max_count_2;
  buf = this_val;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057004e;
  pvStack_c = ExceptionList;
  uVar5 = *(uint *)(this_val_2 + 0x14);
  if (((int)uVar5 < 1) || (uVar5 <= param_7 + max_count_2)) {
    local_28[0] = 0;
  }
  else {
    local_28[0] = (uVar5 - param_7) - max_count_2;
  }
  i = local_28[0];
  uVar5 = *(uint *)(this_val_2 + 0xc) & 0x1c0;
  facet_val_2 = facet_val_3;
  uVar11 = param_3;
  ppvVar2 = &pvStack_c;
  if (uVar5 != 0x40) {
    ppvVar2 = &pvStack_c;
    this_val_3 = facet_val_3;
    local_1c = param_3;
    if (uVar5 == 0x100) {
      ppvVar2 = &pvStack_c;
      sVar9 = max_count_2;
      if ((max_count_2 != 0) &&
         ((cVar3 = *this_val, cVar3 == '+' || (ppvVar2 = &pvStack_c, cVar3 == '-')))) {
        max_count_2 = CONCAT31(max_count_2._1_3_,cVar3);
        ExceptionList = &pvStack_c;
        FUN_004d60a0(&this_val_3,max_count_2);
        buf = buf + 1;
        sVar9 = max_count - 1;
        ppvVar2 = ExceptionList;
        facet_val_3 = this_val_3;
        param_3 = local_1c;
        max_count_2 = sVar9;
      }
      for (; ExceptionList = ppvVar2, max_count = max_count_2, i != 0; i = i + -1) {
        max_count_2 = sVar9;
        FUN_004d60a0(&this_val_3,param_5);
        ppvVar2 = ExceptionList;
        sVar9 = max_count_2;
        max_count_2 = max_count;
      }
      local_28[0] = 0;
      facet_val_2 = this_val_3;
      uVar11 = local_1c;
      ppvVar2 = ExceptionList;
      max_count_2 = sVar9;
    }
    else {
      for (; ExceptionList = ppvVar2, i != 0; i = i + -1) {
        FUN_004d60a0(&this_val_3,param_5);
        ppvVar2 = ExceptionList;
      }
      local_28[0] = 0;
      buf = this_val;
      facet_val_2 = this_val_3;
      uVar11 = local_1c;
      ppvVar2 = ExceptionList;
    }
  }
  ExceptionList = ppvVar2;
  puVar6 = (undefined4 *)FUN_0055a6b0();
  _memchr_result = _memchr(buf,(int)*(char *)*puVar6,max_count);
  if (_memchr_result != (void *)0x0) {
    this_val = (char *)FUN_004d4370(this_val_2,&this_val_3);
    local_4 = 1;
    uVar7 = FUN_004d4350(&DAT_0074db10);
    facet_val_3 = (facet *)FUN_0054ca8b(this_val,uVar7,1);
    _Decref_result = facet_val_3;
    if (facet_val_3 == (facet *)0x0) {
      cVar3 = FUN_0054caca(this_val);
      if (cVar3 == '\0') {
        FUN_004d1030(&facet_val,s_missing_locale_facet_005b6f34);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&facet_val,&DAT_00584188);
      }
      _Decref_result = DAT_0074b89c;
      if (DAT_0074b89c == (facet *)0x0) {
        this_val = operator_new(0x18);
        local_4._0_1_ = 2;
        if (this_val == (char *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_004d6120(this_val,0);
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        DAT_0074b89c = (facet *)FUN_004d6580(uVar7);
        _Decref_result = DAT_0074b89c;
      }
    }
    facet_val_3 = _Decref_result;
    local_4 = 0xffffffff;
    if ((this_val_3 != (facet *)0x0) &&
       (_Decref_result = std::locale::facet::_Decref(this_val_3), _Decref_result != (facet *)0x0)) {
      (*(code *)**(undefined4 **)_Decref_result)(1);
    }
    i = (int)_memchr_result - (int)buf;
    iVar10 = i + 1;
    this_val = buf;
    facet_val = facet_val_2;
    local_14 = uVar11;
    for (; i != 0; i = i + -1) {
      FUN_004d60a0(&facet_val,*this_val);
      this_val = this_val + 1;
    }
    uVar4 = (**(code **)(*(int *)facet_val_3 + 4))();
    this_val = (char *)CONCAT31(this_val._1_3_,uVar4);
    param_3 = local_14;
    facet_val_3 = facet_val;
    FUN_004d60a0(&facet_val_3,this_val);
    buf = buf + iVar10;
    max_count_2 = max_count_2 - iVar10;
    facet_val_2 = facet_val_3;
    uVar11 = param_3;
  }
  _memchr_result = _memchr(buf,0x65,max_count_2);
  max_count = max_count_2;
  facet_val_3 = facet_val_2;
  param_3 = uVar11;
  if (_memchr_result != (void *)0x0) {
    i = (int)_memchr_result - (int)buf;
    iVar10 = i + 1;
    this_val = buf;
    for (; facet_val_2 = facet_val_3, uVar11 = param_3, iVar1 = param_7, i != 0; i = i + -1) {
      FUN_004d60a0(&facet_val_3,*this_val);
      this_val = this_val + 1;
    }
    for (; local_14 = uVar11, facet_val = facet_val_2, iVar1 != 0; iVar1 = iVar1 + -1) {
      FUN_004d60a0(&facet_val,0x30);
      facet_val_2 = facet_val;
      uVar11 = local_14;
    }
    param_7 = 0;
    pcVar8 = s_E_005b70a8;
    if ((*(byte *)(this_val_2 + 0xc) & 4) == 0) {
      pcVar8 = s_e_005b70a4;
    }
    facet_val_3 = facet_val;
    param_3 = local_14;
    FUN_004d60a0(&facet_val_3,CONCAT31((int3)((uint)pcVar8 >> 8),*pcVar8));
    buf = buf + iVar10;
    max_count = max_count_2 - iVar10;
  }
  for (; uVar11 = param_3, facet_val_2 = facet_val_3, i = param_7, max_count != 0;
      max_count = max_count - 1) {
    FUN_004d60a0(&facet_val_3,*buf);
    buf = buf + 1;
  }
  for (; facet_val = facet_val_2, local_14 = uVar11, i != 0; i = i + -1) {
    FUN_004d60a0(&facet_val,0x30);
    uVar11 = local_14;
    facet_val_2 = facet_val;
  }
  *(undefined4 *)(this_val_2 + 0x14) = 0;
  puVar6 = (undefined4 *)FUN_004d5fe0(local_28,facet_val,local_14,param_5,local_28[0]);
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d5bc0 FUN_004d5bc0 ==== */

undefined4 *
FUN_004d5bc0(undefined4 *param_1,char *param_2,int this_val_6,int this_val_5,undefined4 param_5,
            char *param_6,char *param_7)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 this_val_3;
  undefined4 uVar4;
  int *this_val_4;
  facet *_Decref_result;
  int i;
  uint uVar5;
  undefined3 uVar7;
  undefined3 extraout_var;
  int iVar6;
  char *extraout_ECX;
  char *this_val_2;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int this_val;
  char *local_3c;
  int iStack_38;
  char *this_val_7;
  facet *this_val_8;
  char *local_28 [3];
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570083;
  pvStack_c = ExceptionList;
  cVar2 = *param_6;
  if ((cVar2 == '+') || (cVar2 == '-')) {
    local_3c = (char *)0x1;
  }
  else if ((cVar2 == '0') && ((param_6[1] == 'x' || (param_6[1] == 'X')))) {
    local_3c = (char *)0x2;
  }
  else {
    local_3c = (char *)0x0;
  }
  ExceptionList = &pvStack_c;
  this_val_3 = FUN_004d4370(this_val_5,&this_val_8);
  local_4 = 1;
  uVar4 = FUN_004d4350(&DAT_0074db10);
  this_val_4 = (int *)FUN_0054ca8b(this_val_3,uVar4,1);
  if (this_val_4 == (int *)0x0) {
    cVar2 = FUN_0054caca(this_val_3);
    if (cVar2 == '\0') {
      FUN_004d1030(local_28,s_missing_locale_facet_005b6f34);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00584188);
    }
    this_val_4 = DAT_0074b89c;
    if (DAT_0074b89c == (int *)0x0) {
      this_val_7 = operator_new(0x18);
      local_4._0_1_ = 2;
      if (this_val_7 == (void *)0x0) {
        this_val_3 = 0;
      }
      else {
        this_val_3 = FUN_004d6120(this_val_7,0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      this_val_4 = (int *)FUN_004d6580(this_val_3);
      DAT_0074b89c = this_val_4;
    }
  }
  local_4 = 0xffffffff;
  if ((this_val_8 != (facet *)0x0) &&
     (_Decref_result = std::locale::facet::_Decref(this_val_8), _Decref_result != (facet *)0x0)) {
    (*(code *)**(undefined4 **)_Decref_result)(1);
  }
  FUN_004d6100(this_val_4,local_1c);
  local_4 = 3;
  uVar3 = (**(code **)(*this_val_4 + 8))();
  pcVar8 = param_6;
  this_val_8 = (facet *)CONCAT31(this_val_8._1_3_,uVar3);
  pcVar9 = "";
  if (pcStack_18 != (char *)0x0) {
    pcVar9 = pcStack_18;
  }
  bVar1 = false;
  this_val_2 = extraout_ECX;
  if ('\0' < *pcVar9) {
    pcVar9 = pcStack_18;
    if (pcStack_18 == (char *)0x0) {
      pcVar9 = "";
    }
    bVar1 = false;
    cVar2 = *pcVar9;
    pcVar10 = param_7;
    while ((cVar2 != '\x7f' && ('\0' < cVar2))) {
      this_val_2 = pcVar10 + -(int)local_3c;
      if (this_val_2 <= (char *)(int)cVar2) break;
      pcVar10 = pcVar10 + -(int)cVar2;
      FUN_005580e0(pcVar10 + 1 + (int)pcVar8,pcVar10 + (int)pcVar8,param_7 + (1 - (int)pcVar10));
      pcVar10[(int)pcVar8] = ',';
      this_val_2 = param_7 + 1;
      if ('\0' < pcVar9[1]) {
        pcVar9 = pcVar9 + 1;
      }
      bVar1 = true;
      param_7 = this_val_2;
      cVar2 = *pcVar9;
    }
  }
  pcVar9 = local_3c;
  this_val_3 = param_5;
  this_val = this_val_6;
  pcVar8 = *(char **)(this_val_5 + 0x14);
  if (((int)pcVar8 < 1) || (this_val_2 = param_7, pcVar8 <= param_7)) {
    i = 0;
  }
  else {
    i = (int)pcVar8 - (int)param_7;
  }
  uVar5 = *(uint *)(this_val_5 + 0xc) & 0x1c0;
  pcVar8 = param_2;
  this_val_7 = (char *)i;
  if (uVar5 != 0x40) {
    this_val_2 = param_2;
    if (uVar5 == 0x100) {
      local_28[0] = param_2;
      if (local_3c != (char *)0x0) {
        param_2 = local_3c;
        pcVar8 = param_6;
        do {
          this_val_7 = (char *)CONCAT31(this_val_7._1_3_,*pcVar8);
          if ((this_val == 0) || (iVar6 = FUN_004d5280(this_val,this_val_7), iVar6 == -1)) {
            local_28[0] = (char *)CONCAT31(local_28[0]._1_3_,1);
          }
          pcVar8 = pcVar8 + 1;
          param_2 = param_2 + -1;
          uVar5 = 0;
        } while (param_2 != (char *)0x0);
      }
      this_val_3 = param_5;
      param_6 = param_6 + (int)pcVar9;
      this_val_2 = param_7 + -(int)pcVar9;
      param_7 = this_val_2;
      param_2 = local_28[0];
      for (; this_val_6 = this_val, i != 0; i = i + -1) {
        uVar5 = FUN_004d60a0(&param_2,this_val_3);
        this_val_2 = extraout_ECX_01;
        this_val = this_val_6;
      }
      this_val_7 = (char *)0x0;
      pcVar8 = param_2;
    }
    else {
      for (; i != 0; i = i + -1) {
        this_val_7 = pcVar8;
        if ((this_val == 0) ||
           (uVar5 = FUN_004d5280(this_val,this_val_3), this_val_2 = extraout_ECX_00,
           uVar5 == 0xffffffff)) {
          this_val_7 = (char *)CONCAT31(this_val_7._1_3_,1);
        }
        pcVar8 = this_val_7;
      }
      this_val_7 = (char *)0x0;
    }
  }
  uVar7 = (undefined3)(uVar5 >> 8);
  pcVar9 = param_6;
  pcVar10 = param_7;
  if (bVar1) {
    while( true ) {
      pcVar9 = param_6;
      iVar6 = FUN_0055a6c0(this_val_2,param_6,s___005b2ec4);
      param_2 = pcVar8;
      this_val_6 = this_val;
      for (i = iVar6; i != 0; i = i + -1) {
        FUN_004d60a0(&param_2,*pcVar9);
        pcVar9 = pcVar9 + 1;
      }
      param_6 = param_6 + iVar6;
      param_7 = param_7 + -iVar6;
      if (param_7 == (char *)0x0) break;
      pcVar8 = param_2;
      this_val = this_val_6;
      if ((char)this_val_8 != '\0') {
        local_3c = param_2;
        iStack_38 = this_val_6;
        FUN_004d60a0(&local_3c,this_val_8);
        pcVar8 = local_3c;
        this_val = iStack_38;
      }
      this_val_2 = param_6 + 1;
      param_7 = param_7 + -1;
      param_6 = this_val_2;
    }
  }
  else {
    for (; this_val_6 = this_val, param_2 = pcVar8, pcVar10 != (char *)0x0; pcVar10 = pcVar10 + -1)
    {
      FUN_004d60a0(&param_2,CONCAT31(uVar7,*pcVar9));
      uVar7 = extraout_var;
      pcVar8 = param_2;
      this_val = this_val_6;
      pcVar9 = pcVar9 + 1;
    }
  }
  this_val_3 = param_5;
  this_val = this_val_6;
  *(undefined4 *)(this_val_5 + 0x14) = 0;
  for (pcVar8 = this_val_7; pcVar8 != (char *)0x0; pcVar8 = (char *)((int)pcVar8 + -1)) {
    if ((this_val == 0) || (i = FUN_004d5280(this_val,this_val_3), i == -1)) {
      param_2 = (char *)CONCAT31(param_2._1_3_,1);
    }
  }
  *param_1 = param_2;
  param_1[1] = this_val;
  if (pcStack_18 != (char *)0x0) {
    cVar2 = pcStack_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(pcStack_18 + -1);
    }
    else {
      pcStack_18[-1] = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


/* ==== 004d5fe0 FUN_004d5fe0 ==== */

void FUN_004d5fe0(undefined4 *param_1,undefined4 param_2,int *param_3,byte param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  do {
    if (param_5 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    if (param_3 == (int *)0x0) {
LAB_004d603c:
      uVar3 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar3,1);
    }
    else {
      uVar3 = *(uint *)param_3[8];
      if (uVar3 == 0) {
LAB_004d6027:
        uVar3 = (**(code **)(*param_3 + 4))(param_4);
      }
      else {
        iVar1 = *(int *)param_3[0xc];
        if (iVar1 + uVar3 <= uVar3) goto LAB_004d6027;
        *(int *)param_3[0xc] = iVar1 + -1;
        pbVar2 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar2 + 1;
        *pbVar2 = param_4;
        uVar3 = (uint)param_4;
      }
      if (uVar3 == 0xffffffff) goto LAB_004d603c;
    }
    param_5 = param_5 + -1;
  } while( true );
}


/* ==== 004d6060 FUN_004d6060 ==== */

undefined4 __thiscall FUN_004d6060(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x10))(param_2);
  return param_2;
}


/* ==== 004d6080 FUN_004d6080 ==== */

undefined4 __thiscall FUN_004d6080(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x14))(param_2);
  return param_2;
}


/* ==== 004d60a0 FUN_004d60a0 ==== */

void * __thiscall FUN_004d60a0(void *this,byte param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  piVar1 = *(int **)((int)this + 4);
  if (piVar1 == (int *)0x0) goto LAB_004d60f1;
  uVar4 = *(uint *)piVar1[8];
  if (uVar4 == 0) {
LAB_004d60dc:
    uVar4 = (**(code **)(*piVar1 + 4))(param_2);
  }
  else {
    iVar2 = *(int *)piVar1[0xc];
    if (iVar2 + uVar4 <= uVar4) goto LAB_004d60dc;
    *(int *)piVar1[0xc] = iVar2 + -1;
    pbVar3 = *(byte **)piVar1[8];
    *(byte **)piVar1[8] = pbVar3 + 1;
    *pbVar3 = param_2;
    uVar4 = (uint)param_2;
  }
  if (uVar4 != 0xffffffff) {
    return this;
  }
LAB_004d60f1:
  *(undefined1 *)this = 1;
  return this;
}


/* ==== 004d6100 FUN_004d6100 ==== */

undefined4 __thiscall FUN_004d6100(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0xc))(param_2);
  return param_2;
}


/* ==== 004d6120 FUN_004d6120 ==== */

void * __thiscall FUN_004d6120(void *this,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *operator_new_result;
  void *operator_new_result_2;
  uint i;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005700a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_2;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005790c4;
  FUN_0054d3cd(s_C_005b6f4c);
  local_4._0_1_ = 1;
  puVar2 = (undefined4 *)FUN_0055a6b0();
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)*puVar2;
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)puVar2[1];
  pcVar4 = (char *)puVar2[2];
  i = 0xffffffff;
  pcVar3 = pcVar4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i;
  operator_new_result = operator_new(i);
  pcVar3 = operator_new_result;
  for (; i != 0; i = i - 1) {
    *pcVar3 = *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar3 = s_false_005b70b4;
  *(char **)((int)this + 8) = operator_new_result;
  i = 0xffffffff;
  pcVar4 = s_false_005b70b4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i;
  operator_new_result_2 = operator_new(i);
  if (i != 0) {
    do {
      pcVar3[(int)operator_new_result_2 + -0x5b70b4] = *pcVar3;
      pcVar3 = pcVar3 + 1;
      i = i - 1;
    } while (i != 0);
  }
  puVar5 = &DAT_005b70ac;
  *(void **)((int)this + 0x10) = operator_new_result_2;
  i = 0xffffffff;
  pcVar4 = &DAT_005b70ac;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i;
  operator_new_result_2 = operator_new(i);
  if (i != 0) {
    do {
      puVar5[(int)operator_new_result_2 + -0x5b70ac] = *puVar5;
      puVar5 = puVar5 + 1;
      i = i - 1;
    } while (i != 0);
  }
  *(void **)((int)this + 0x14) = operator_new_result_2;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0054d486();
  ExceptionList = local_c;
  return this;
}


/* ==== 004d64d0 FUN_004d64d0 ==== */

void * __thiscall FUN_004d64d0(void *this,byte param_2)

{
  FUN_004d64f0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d64f0 FUN_004d64f0 ==== */

void __thiscall FUN_004d64f0(void *this)

{
  *(undefined ***)this = &PTR_FUN_005790c4;
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  FUN_0054b339(*(undefined4 *)((int)this + 0x10));
  FUN_0054b339(*(undefined4 *)((int)this + 0x14));
  *(undefined ***)this = &PTR_LAB_00579044;
  return;
}


/* ==== 004d6520 FUN_004d6520 ==== */

int FUN_004d6520(int param_1)

{
  DAT_0074b8a0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(&LAB_004d65b0);
  return param_1;
}


/* ==== 004d6550 FUN_004d6550 ==== */

int FUN_004d6550(int param_1)

{
  DAT_0074b8a4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(&LAB_004d6610);
  return param_1;
}


/* ==== 004d6580 FUN_004d6580 ==== */

int FUN_004d6580(int param_1)

{
  DAT_0074b8a8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(&LAB_004d6670);
  return param_1;
}


/* ==== 004d6730 FUN_004d6730 ==== */

void __thiscall FUN_004d6730(void)

{
  undefined1 auStack_14 [16];
  undefined1 *local_4;
  
  local_4 = auStack_14;
  FUN_004d7510(auStack_14,(undefined4 *)&stack0x00000004);
  FUN_004d6760();
  return;
}


/* ==== 004d6760 FUN_004d6760 ==== */

void FUN_004d6760(undefined4 param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
  puStack_8 = &LAB_00570118;
  local_c = ExceptionList;
  local_4 = (void *)0x0;
  ExceptionList = &local_c;
  if (DAT_0074b8ac != (int *)0x0) {
    pcVar3 = "";
    if (param_2 != (char *)0x0) {
      pcVar3 = param_2;
    }
    ExceptionList = &local_c;
    FUN_004d4cd0(DAT_0074b8ac,DAT_0074b8ac,pcVar3);
    piVar2 = DAT_0074b8ac;
    uVar5 = 0;
    if ((*(byte *)(*(int *)(*DAT_0074b8ac + 4) + 4 + (int)DAT_0074b8ac) & 6) == 0) {
      iVar4 = (**(code **)(**(int **)((int)DAT_0074b8ac + *(int *)(*DAT_0074b8ac + 4) + 0x28) + 0x2c
                          ))();
      if (iVar4 == -1) {
        uVar5 = 4;
      }
    }
    if (uVar5 != 0) {
      uVar5 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) | uVar5;
      if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) == 0) {
        uVar5 = uVar5 | 4;
      }
      FUN_0054c6db(uVar5,0);
    }
  }
  if (param_2 != (char *)0x0) {
    cVar1 = param_2[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      param_2[-1] = cVar1 + -1;
      ExceptionList = local_4;
      return;
    }
    FUN_0054b339(param_2 + -1);
  }
  ExceptionList = local_4;
  return;
}


/* ==== 004d6870 FUN_004d6870 ==== */

void __thiscall FUN_004d6870(void *this,undefined4 param_2,char param_3)

{
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0x20;
  FUN_0054c9f0();
  if (*(int *)((int)this + 0x28) == 0) {
    FUN_0054c6db(*(uint *)((int)this + 4) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_0054c9bb(this);
  }
  return;
}


/* ==== 004d6900 FUN_004d6900 ==== */

void FUN_004d6900(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  void *in_ECX;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  int local_4c;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570160;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = (undefined1 *)FUN_004797e0(in_ECX,local_50,s_RuntimeError_005b70bc,(int)param_2);
  local_4 = 0;
  puVar2 = (undefined1 *)FUN_004796b0(local_60,puVar2,s__005b36c4);
  local_4._0_1_ = 1;
  puVar2 = (undefined1 *)FUN_0047c9a0(local_70,puVar2,(int)param_3);
  local_4._0_1_ = 2;
  puVar2 = (undefined1 *)FUN_004796b0(local_80,puVar2,s__005b36c4);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0047c9a0(&stack0xffffff60,puVar2,param_4);
  FUN_004d6760();
  if (local_7c != 0) {
    cVar1 = *(char *)(local_7c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(local_7c + -1) = cVar1 + -1;
    }
  }
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  if (local_6c != 0) {
    cVar1 = *(char *)(local_6c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(local_6c + -1) = cVar1 + -1;
    }
  }
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (local_5c != 0) {
    cVar1 = *(char *)(local_5c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(local_5c + -1) = cVar1 + -1;
    }
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_4 = 0xffffffff;
  if (local_4c != 0) {
    cVar1 = *(char *)(local_4c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)(local_4c + -1) = cVar1 + -1;
    }
  }
  local_40[0] = *param_3;
  FUN_004028f0(local_40);
  FUN_004093c0(local_40);
  local_30[0] = *param_2;
  local_4 = 4;
  FUN_004028f0(local_30);
  FUN_004093c0(local_30);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0041c870(local_20);
  local_10 = param_1;
  local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8();
}


/* ==== 004d6b00 FUN_004d6b00 ==== */

/* WARNING: Removing unreachable block (ram,0x004d6b98) */

void * __thiscall FUN_004d6b00(void *this,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined1 *this_val;
  undefined1 *puVar4;
  uint i;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570183;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  uVar1 = *param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)this = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_004093c0(this,param_2,0,0xffffffff);
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = param_2[0x10];
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_004093c0((undefined1 *)((int)this + 0x10),param_2 + 0x10,0,0xffffffff);
  this_val = (undefined1 *)((int)this + 0x20);
  local_4 = CONCAT31(local_4._1_3_,1);
  *this_val = param_2[0x20];
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  uVar2 = *(uint *)(param_2 + 0x28);
  if (this_val == param_2 + 0x20) {
    FUN_0040f800(this_val,uVar2,0xffffffff);
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x24);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = *(undefined1 **)(param_2 + 0x24);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x24) = this_val;
        *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_004d6c3c;
      }
    }
    cVar3 = FUN_00402a00(this_val,uVar2,1);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)(param_2 + 0x24);
      }
      puVar6 = *(undefined4 **)((int)this + 0x24);
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_004029e0(this_val,uVar2);
    }
  }
LAB_004d6c3c:
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *unaff_FS_OFFSET = local_c;
  return this;
}


/* ==== 004d6d30 FUN_004d6d30 ==== */

void FUN_004d6d30(undefined4 param_1,undefined1 *param_2,char *param_3,char *param_4)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_60 [4];
  char *local_5c;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  char *local_4c;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005701c8;
  local_c = ExceptionList;
  local_60[0] = param_4._0_1_;
  ExceptionList = &local_c;
  FUN_004028f0(local_60,0);
  pcVar2 = param_4;
  i = 0xffffffff;
  pcVar3 = param_4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_60,i,1);
  if (cVar1 != '\0') {
    pcVar3 = local_5c;
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
    local_5c[i] = '\0';
    local_58 = i;
  }
  local_50[0] = param_4._0_1_;
  local_4 = 0;
  FUN_004028f0(local_50,0);
  i = 0xffffffff;
  pcVar2 = param_3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(local_50,i,1);
  if (cVar1 != '\0') {
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_4c = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      local_4c = local_4c + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_4c = *param_3;
      param_3 = param_3 + 1;
      local_4c = local_4c + 1;
    }
    FUN_004029e0(local_50,i);
  }
  local_4._0_1_ = 1;
  local_40[0] = *param_2;
  FUN_004028f0(local_40,0);
  FUN_004093c0(local_40,param_2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_0041c870(local_30,local_50);
  local_4._0_1_ = 3;
  FUN_0041c870(local_20,local_60);
  local_10 = param_1;
  local_4._0_1_ = 4;
  FUN_004d7090(&DAT_0074b8b0,&param_4,DAT_0074b8b4,local_40);
  local_4._0_1_ = 6;
  FUN_004028f0(local_20,1);
  local_4._0_1_ = 5;
  FUN_004028f0(local_30,1);
  local_4._0_1_ = 1;
  FUN_004028f0(local_40,1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_50,1);
  local_4 = 0xffffffff;
  if (local_5c != (char *)0x0) {
    cVar1 = local_5c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_5c + -1);
    }
    else {
      local_5c[-1] = cVar1 + -1;
    }
  }
  local_5c = (char *)0x0;
  local_58 = 0;
  local_54 = 0;
  FUN_004d6730();
  ExceptionList = local_c;
  return;
}


/* ==== 004d6f20 FUN_004d6f20 ==== */

void __thiscall
FUN_004d6f20(undefined4 param_1,undefined4 param_2,undefined1 *param_3,char *param_4)

{
  char cVar1;
  uint i;
  char *pcVar2;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570200;
  local_c = ExceptionList;
  local_50[0] = param_4._0_1_;
  i = 0xffffffff;
  pcVar2 = param_4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  ExceptionList = &local_c;
  FUN_00402940(local_50,param_4,~i - 1);
  local_4 = 0;
  local_40[0] = *param_3;
  FUN_004028f0(local_40,0);
  FUN_004093c0(local_40,param_3,0,0xffffffff);
  local_4._0_1_ = 1;
  local_30[0] = param_4._0_1_;
  FUN_004028f0(local_30,0);
  i = 0xffffffff;
  pcVar2 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_30,&DAT_00712694,~i - 1);
  local_4._0_1_ = 2;
  FUN_0041c870(local_20,local_50);
  local_10 = param_2;
  local_4._0_1_ = 3;
  FUN_004d7090(&DAT_0074b8b0,&param_4,DAT_0074b8b4,local_40);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_20,1);
  FUN_004028f0(local_30,1);
  FUN_004028f0(local_40,1);
  local_4 = 0xffffffff;
  if (local_4c != 0) {
    cVar1 = *(char *)(local_4c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_4c + -1));
    }
    else {
      *(char *)(local_4c + -1) = cVar1 + -1;
    }
  }
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  FUN_004d6730();
  ExceptionList = local_c;
  return;
}


/* ==== 004d7090 FUN_004d7090 ==== */

void __thiscall FUN_004d7090(void *this,undefined4 *param_1,void *param_2,void *this_val)

{
  undefined4 *operator_new_result_2;
  undefined4 *operator_new_result;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)param_2 + 4);
  operator_new_result_2 = operator_new(0x3c);
  operator_new_result = param_2;
  if (param_2 == (void *)0x0) {
    operator_new_result = operator_new_result_2;
  }
  *operator_new_result_2 = operator_new_result;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = operator_new_result_2;
  }
  operator_new_result_2[1] = puVar1;
  *(undefined4 **)((int)param_2 + 4) = operator_new_result_2;
  *(undefined4 **)operator_new_result_2[1] = operator_new_result_2;
  FUN_004d70f0(this_val,(undefined1 *)(operator_new_result_2 + 2),this_val);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *param_1 = operator_new_result_2;
  return;
}


/* ==== 004d70f0 FUN_004d70f0 ==== */

void __thiscall FUN_004d70f0(void *this,undefined1 *this_val,undefined1 *param_2)

{
  undefined1 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570234;
  local_c = ExceptionList;
  local_4 = 0;
  if (this_val != (undefined1 *)0x0) {
    uVar1 = *param_2;
    ExceptionList = &local_c;
    *(undefined4 *)(this_val + 4) = 0;
    *this_val = uVar1;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
    FUN_004093c0(this_val,param_2,0,0xffffffff);
    local_4._0_1_ = 1;
    this_val[0x10] = param_2[0x10];
    *(undefined4 *)(this_val + 0x14) = 0;
    *(undefined4 *)(this_val + 0x18) = 0;
    *(undefined4 *)(this_val + 0x1c) = 0;
    FUN_004093c0(this_val + 0x10,param_2 + 0x10,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    this_val[0x20] = param_2[0x20];
    *(undefined4 *)(this_val + 0x24) = 0;
    *(undefined4 *)(this_val + 0x28) = 0;
    *(undefined4 *)(this_val + 0x2c) = 0;
    FUN_004093c0(this_val + 0x20,param_2 + 0x20,0,0xffffffff);
    *(undefined4 *)(this_val + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004d71d0 FUN_004d71d0 ==== */

/* WARNING: Removing unreachable block (ram,0x004d728a) */
/* WARNING: Removing unreachable block (ram,0x004d7342) */
/* WARNING: Removing unreachable block (ram,0x004d734c) */
/* WARNING: Removing unreachable block (ram,0x004d7350) */
/* WARNING: Removing unreachable block (ram,0x004d7369) */

void FUN_004d71d0(undefined4 this_val_3)

{
  char cVar1;
  uint j;
  undefined1 *puVar2;
  undefined4 unaff_EBP;
  int i;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uStack_420;
  char acStack_41c [8];
  undefined1 auStack_414 [1016];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *this_val;
  undefined4 uStack_4;
  undefined1 *this_val_2;
  
  uStack_4 = 0xffffffff;
  this_val = &LAB_0057024b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004d7800(this_val_3,(int)&uStack_420 + 2,2);
  i = (int)(short)((uint)unaff_EBP >> 0x10);
  FUN_004d7800(this_val_3,auStack_414,i);
  j = 0xffffffff;
  acStack_41c[i] = '\0';
  pcVar3 = acStack_41c;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  puVar2 = (undefined1 *)(~j - 1);
  uStack_420 = 0;
  cVar1 = FUN_00402a00(&stack0xfffffbd4,puVar2,1);
  this_val_2 = this_val;
  puVar7 = (undefined1 *)0x0;
  if (cVar1 != '\0') {
    pcVar3 = acStack_41c;
    pcVar5 = (char *)0x0;
    for (j = (uint)puVar2 >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = (uint)puVar2 & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    }
    *puVar2 = 0;
    puVar7 = puVar2;
  }
  uStack_14 = 0;
  if (this_val == &stack0xfffffbd4) {
    FUN_0040f800(this_val,puVar7,0xffffffff);
    FUN_0040f800(this_val_2,0,0);
  }
  else if (puVar7 == (undefined1 *)0x0) {
    cVar1 = FUN_00402a00(this_val,0,1);
    if (cVar1 != '\0') {
      puVar4 = (undefined4 *)&DAT_0057629c;
      puVar6 = *(undefined4 **)(this_val_2 + 4);
      for (i = 0; i != 0; i = i + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      for (i = 0; i != 0; i = i + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_004029e0(this_val_2,0);
    }
  }
  else {
    FUN_004028f0(this_val,1);
    *(undefined1 **)(this_val_2 + 4) = &DAT_0057629c;
    *(undefined1 **)(this_val_2 + 8) = puVar7;
    *(undefined4 *)(this_val_2 + 0xc) = uStack_420;
    DAT_00576298._3_1_ = 1;
                    /* WARNING: Read-only address (ram,0x0057629b) is written */
  }
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 004d7390 FUN_004d7390 ==== */

void FUN_004d7390(undefined4 this_val,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = param_2;
  param_2 = *(int *)(param_2 + 8);
  FUN_004d7640(this_val,&param_2,2);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004d7640(this_val,puVar2,*(undefined4 *)(iVar1 + 8));
  return;
}


/* ==== 004d73d0 FUN_004d73d0 ==== */

void FUN_004d73d0(undefined4 this_val)

{
  FUN_004d7640(this_val,&stack0x00000008,1);
  return;
}


/* ==== 004d73f0 FUN_004d73f0 ==== */

void FUN_004d73f0(undefined4 this_val)

{
  FUN_004d7640(this_val,&stack0x00000008,2);
  return;
}


/* ==== 004d7410 FUN_004d7410 ==== */

void FUN_004d7410(undefined4 this_val)

{
  FUN_004d7640(this_val,&stack0x00000008,8);
  return;
}


/* ==== 004d7430 FUN_004d7430 ==== */

void FUN_004d7430(undefined4 this_val)

{
  FUN_004d7640(this_val,&stack0x00000008,4);
  return;
}


/* ==== 004d7450 FUN_004d7450 ==== */

void FUN_004d7450(undefined4 this_val,undefined4 param_2)

{
  FUN_004d7800(this_val,param_2,4);
  return;
}


/* ==== 004d7470 FUN_004d7470 ==== */

undefined4 FUN_004d7470(undefined4 this_val)

{
  FUN_004d7800(this_val,&this_val);
  return 4;
}


/* ==== 004d7490 FUN_004d7490 ==== */

void FUN_004d7490(undefined4 this_val,undefined4 param_2)

{
  FUN_004d7800(this_val,param_2,1);
  return;
}


/* ==== 004d74b0 FUN_004d74b0 ==== */

void FUN_004d74b0(undefined4 this_val)

{
  undefined2 *unaff_retaddr;
  
  FUN_004d7800(this_val,&this_val);
  *unaff_retaddr = 2;
  return;
}


/* ==== 004d74d0 FUN_004d74d0 ==== */

undefined4 FUN_004d74d0(undefined4 this_val)

{
  FUN_004d7800(this_val,&this_val);
  return 2;
}


/* ==== 004d74f0 FUN_004d74f0 ==== */

void FUN_004d74f0(undefined4 this_val,undefined4 param_2)

{
  FUN_004d7800(this_val,param_2,8);
  return;
}


/* ==== 004d7510 FUN_004d7510 ==== */

undefined1 * FUN_004d7510(undefined1 *this_val,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_1f9;
  char local_1f4 [500];
  
  FUN_005590ae(local_1f4,*param_2,param_2 + 1);
  *this_val = local_1f9;
  i = 0xffffffff;
  *(undefined4 *)(this_val + 4) = 0;
  pcVar3 = local_1f4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_004d75d3;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_004d75d3:
  pcVar3 = local_1f4;
  pcVar4 = *(char **)(this_val + 4);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(*(int *)(this_val + 4) + i) = 0;
  return this_val;
}


/* ==== 004d7610 FUN_004d7610 ==== */

undefined1 * __thiscall FUN_004d7610(void *this,undefined1 *this_val)

{
  FUN_004d7510(this_val,(undefined4 *)&stack0x00000008);
  return this_val;
}


/* ==== 004d7640 FUN_004d7640 ==== */

void * __thiscall FUN_004d7640(void *this,undefined4 param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  int this_val;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00570268;
  pvStack_10 = ExceptionList;
  uVar3 = 0;
  ExceptionList = &pvStack_10;
  if ((*(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this) == 0) &&
     (this_val = *(int *)((int)this + *(int *)(*(int *)this + 4) + 0x2c),
     ExceptionList = &pvStack_10, this_val != 0)) {
    ExceptionList = &pvStack_10;
    FUN_004d77a0(this_val);
  }
  if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 4) == 0) {
    local_8 = 1;
    this_val = (**(code **)(**(int **)((int)this + *(int *)(*(int *)this + 4) + 0x28) + 0x1c))
                         (param_2,param_3);
    if (this_val != param_3) {
      pvVar2 = (void *)FUN_004d76f8();
      return pvVar2;
    }
  }
  else {
    uVar3 = 4;
  }
  local_8 = 0;
  if (uVar3 != 0) {
    uVar3 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 4) | uVar3;
    if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x28) == 0) {
      uVar3 = uVar3 | 4;
    }
    FUN_0054c6db(uVar3,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_0054eb4d();
  if ((cVar1 == '\0') &&
     (this_val = *(int *)(*(int *)this + 4), (*(byte *)(this_val + 0xc + (int)this) & 2) != 0)) {
    uVar3 = 0;
    if (((*(byte *)((int)this + this_val + 4) & 6) == 0) &&
       (this_val = (**(code **)(**(int **)((int)this + this_val + 0x28) + 0x2c))(), this_val == -1))
    {
      uVar3 = 4;
    }
    if (uVar3 != 0) {
      uVar3 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 4) | uVar3;
      if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x28) == 0) {
        uVar3 = uVar3 | 4;
      }
      FUN_0054c6db(uVar3,0);
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


/* ==== 004d76f8 FUN_004d76f8 ==== */

void FUN_004d76f8(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (unaff_EDI != 0) {
    uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | unaff_EDI;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_0054c6db(uVar2,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar1 = FUN_0054eb4d();
  if ((cVar1 == '\0') &&
     (iVar3 = *(int *)(*unaff_ESI + 4), (*(byte *)(iVar3 + 0xc + (int)unaff_ESI) & 2) != 0)) {
    uVar2 = 0;
    if ((*(byte *)((int)unaff_ESI + iVar3 + 4) & 6) == 0) {
      iVar3 = (**(code **)(**(int **)((int)unaff_ESI + iVar3 + 0x28) + 0x2c))();
      if (iVar3 == -1) {
        uVar2 = 4;
      }
    }
    if (uVar2 != 0) {
      uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | uVar2;
      if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
        uVar2 = uVar2 | 4;
      }
      FUN_0054c6db(uVar2,0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004d77a0 FUN_004d77a0 ==== */

void * __thiscall FUN_004d77a0(void *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)(*(int *)(*(int *)this + 4) + 4 + (int)this) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)((int)this + *(int *)(*(int *)this + 4) + 0x28) + 0x2c))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)this + *(int *)(*(int *)this + 4) + 4) | uVar2;
    if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_0054c6db(uVar2,0);
  }
  return this;
}


/* ==== 004d7800 FUN_004d7800 ==== */

/* WARNING: Removing unreachable block (ram,0x004d78a3) */
/* WARNING: Removing unreachable block (ram,0x004d78af) */
/* WARNING: Removing unreachable block (ram,0x004d78b1) */

void * __thiscall FUN_004d7800(void *this,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00570280;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined4 *)((int)this + 4) = 0;
  cVar1 = FUN_004d4770(this,1);
  if (cVar1 != '\0') {
    local_8 = 0;
    iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this) + 0x18))
                      (param_2,param_3);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar2;
    if (iVar2 != param_3) {
      pvVar3 = (void *)FUN_004d7891();
      return pvVar3;
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


/* ==== 004d7891 FUN_004d7891 ==== */

void FUN_004d7891(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EDI != 0) {
    uVar1 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | unaff_EDI;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar1 = uVar1 | 4;
    }
    FUN_0054c6db(uVar1,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 004d7930 FUN_004d7930 ==== */

void __thiscall FUN_004d7930(undefined4 param_1,undefined4 *param_2,int param_3)

{
  FUN_0055861b(*(undefined4 *)(*(int *)(param_3 + 4) + 0x10),0);
  *param_2 = &PTR_FUN_00576a88;
  param_2[2] = 0;
  return;
}


/* ==== 004d7ac0 FUN_004d7ac0 ==== */

undefined4 FUN_004d7ac0(undefined4 this_val,int param_2)

{
  char cVar1;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005702a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00479930(*(void **)(param_2 + 4),local_1c);
  local_4 = 0;
  local_2c[0] = (undefined1)param_2;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_004093c0(local_2c,local_1c,0,*(undefined4 *)(*(int *)(param_2 + 4) + 0x28));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004cf330(this_val,local_2c);
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
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return this_val;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return this_val;
}


/* ==== 004d7bb0 FUN_004d7bb0 ==== */

undefined4 * FUN_004d7bb0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *_Buf;
  int iVar3;
  int iVar4;
  char *_memchr_result;
  uint i;
  char *_MaxCount;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005702b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00479930((void *)(*(int *)((int)param_2 + 4) + 0x18),local_1c);
  local_4 = 0;
  iVar4 = FUN_00479930(*(void **)((int)param_2 + 4),local_2c);
  uVar2 = *(uint *)(iVar3 + 8);
  param_2 = "";
  if (*(char **)(iVar3 + 4) != (char *)0x0) {
    param_2 = *(char **)(iVar3 + 4);
  }
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    i = *(uint *)(iVar4 + 8);
    if ((i != 0) && (uVar2 <= i)) {
      _Buf = *(char **)(iVar4 + 4);
      _MaxCount = (char *)(i + (1 - uVar2));
      _memchr_result = _memchr(_Buf,(int)*param_2,(size_t)_MaxCount);
      while (_memchr_result != (char *)0x0) {
        bVar7 = true;
        i = uVar2;
        pcVar5 = _memchr_result;
        pcVar6 = param_2;
        do {
          if (i == 0) break;
          i = i - 1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          iVar3 = (int)_memchr_result - *(int *)(iVar4 + 4);
          goto LAB_004d7c86;
        }
        _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)_memchr_result));
        _Buf = _memchr_result + 1;
        _memchr_result = _memchr(_Buf,(int)*param_2,(size_t)_MaxCount);
      }
    }
    iVar3 = -1;
  }
LAB_004d7c86:
  param_1[4] = iVar3;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}


/* ==== 004d7d20 FUN_004d7d20 ==== */

undefined4 FUN_004d7d20(undefined4 this_val,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005702e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00479930(*(void **)(param_2 + 4),local_1c);
  local_4 = 0;
  iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x28);
  if (iVar2 < 1) {
    FUN_004cf4f0(this_val,&DAT_00712694);
  }
  else if (local_14 < iVar2) {
    FUN_004cf330(this_val,local_1c);
  }
  else {
    local_2c[0] = (undefined1)this_val;
    FUN_004028f0(local_2c,0);
    FUN_004093c0(local_2c,local_1c,local_14 - iVar2,iVar2);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004cf330(this_val,local_2c);
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
  }
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return this_val;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return this_val;
}


/* ==== 004d7e50 FUN_004d7e50 ==== */

undefined4 FUN_004d7e50(undefined4 this_val,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00479930(*(void **)(param_2 + 4),local_1c);
  local_4 = 0;
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 0x28);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x40);
  if (iVar2 < 1) {
    FUN_004cf4f0(this_val,&DAT_00712694);
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,1);
  }
  else {
    if (local_14 < iVar3 + iVar2) {
      local_2c[0] = (undefined1)this_val;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      FUN_004093c0(local_2c,local_1c,iVar3,local_14 - iVar3);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004cf330(this_val,local_2c);
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
    }
    else {
      local_2c[0] = (undefined1)this_val;
      FUN_004028f0(local_2c,0);
      FUN_004093c0(local_2c,local_1c,(local_14 - iVar2) - iVar3,iVar2);
      local_4._0_1_ = 1;
      FUN_004cf330(this_val,local_2c);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_2c,1);
    }
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_18 + -1);
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return this_val;
}


/* ==== 004d7fc0 FUN_004d7fc0 ==== */

undefined4 FUN_004d7fc0(undefined4 this_val,int param_2)

{
  char cVar1;
  int iVar2;
  char *str;
  undefined ***pppuVar3;
  undefined4 uVar4;
  undefined1 local_34 [4];
  int local_30;
  undefined **ppuStack_28;
  undefined **local_24 [2];
  undefined4 local_1c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057033f;
  pvStack_c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00479930(*(void **)(param_2 + 4),local_34);
  str = *(char **)(iVar2 + 4);
  if (str == (char *)0x0) {
    str = "";
  }
  FUN_0055a94d(str);
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_30 + -1),uVar4);
    }
    else {
      *(char *)(local_30 + -1) = cVar1 + -1;
    }
  }
  local_1c = 0;
  local_24[0] = &PTR_FUN_005778c0;
  pppuVar3 = local_24;
  local_4 = 1;
  FUN_004cef20(this_val,pppuVar3);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  ppuStack_28 = &PTR_FUN_005778c0;
  FUN_004cf650(&ppuStack_28,pppuVar3,1);
  ExceptionList = pvStack_10;
  return this_val;
}


/* ==== 004d80c0 FUN_004d80c0 ==== */

/* WARNING: Removing unreachable block (ram,0x004d8674) */
/* WARNING: Removing unreachable block (ram,0x004d8692) */
/* WARNING: Removing unreachable block (ram,0x004d869e) */
/* WARNING: Removing unreachable block (ram,0x004d86a5) */
/* WARNING: Removing unreachable block (ram,0x004d8862) */
/* WARNING: Removing unreachable block (ram,0x004d8880) */
/* WARNING: Removing unreachable block (ram,0x004d888c) */
/* WARNING: Removing unreachable block (ram,0x004d8893) */

void FUN_004d80c0(void)

{
  undefined1 *this_val_2;
  void *this_val;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *operator_new_result;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005703d4;
  local_c = ExceptionList;
  if ((DAT_0074b8c4 == (undefined4 *)0x0) ||
     (((int)DAT_0074b8c8 - (int)DAT_0074b8c4 & 0xfffffffcU) == 0)) {
    puStack_34 = (undefined4 *)0x4d8100;
    ExceptionList = &local_c;
    this_val_2 = operator_new(0x1c);
    local_4 = 0;
    local_14 = this_val_2;
    if (this_val_2 == (undefined1 *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_10 = (undefined4 *)auStack_40;
      FUN_004900f0(auStack_40,s_rand_005b7154,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val_2);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d815f;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d8166;
    this_val = operator_new(0x1c);
    local_4 = 1;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_randperc_005b7148,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d81c2;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d81c9;
    this_val = operator_new(0x1c);
    local_4 = 2;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_srand_005b7140,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d8225;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d822c;
    this_val = operator_new(0x1c);
    local_4 = 3;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_clock_005b7138,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d8288;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d828f;
    this_val = operator_new(0x1c);
    local_4 = 4;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_kbhit_005b7130,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d82ec;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d82f3;
    this_val = operator_new(0x1c);
    local_4 = 5;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_getch_005b7128,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d834f;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d8356;
    this_val = operator_new(0x1c);
    local_4 = 6;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_time_005b7120,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d83b2;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d83b9;
    this_val = operator_new(0x1c);
    local_4 = 7;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_strleft_005b7118,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d8415;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d841c;
    this_val = operator_new(0x1c);
    local_4 = 8;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_strright_005b710c,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d8478;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d847f;
    this_val = operator_new(0x1c);
    local_4 = 9;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_strmid_005b7104,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    uStack_3c = 0x4d84db;
    FUN_004a5620(&DAT_0074b8c0);
    puStack_34 = (undefined4 *)0x4d84e2;
    this_val = operator_new(0x1c);
    local_4 = 10;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_004900f0(auStack_40,s_strfind_005b70fc,&local_1a);
      local_18 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puVar5 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    if ((int)DAT_0074b8cc - (int)DAT_0074b8c8 >> 2 == 0) {
      uVar1 = FUN_00492480(&DAT_0074b8c0);
      if (uVar1 < 2) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_00492480(&DAT_0074b8c0);
      }
      iVar3 = FUN_00492480(&DAT_0074b8c0);
      iVar3 = iVar3 + iVar2;
      iVar2 = iVar3;
      if (iVar3 < 0) {
        iVar2 = 0;
      }
      puStack_34 = (undefined4 *)0x4d8583;
      puVar4 = operator_new(iVar2 * 4);
      puStack_34 = puVar5;
      puStack_38 = DAT_0074b8c4;
      uStack_3c = 0x4d859b;
      puStack_38 = (undefined4 *)FUN_004de170();
      puStack_34 = (undefined4 *)0x1;
      uStack_3c = 0x4d85af;
      FUN_004de280();
      puStack_34 = DAT_0074b8c8;
      puStack_38 = puVar5;
      uStack_3c = 0x4d85c5;
      FUN_004de170();
      puStack_34 = DAT_0074b8c4;
      puStack_38 = (undefined4 *)0x4d85dc;
      FUN_0042f530();
      puStack_34 = (undefined4 *)0x4d85e7;
      FUN_0054b339();
      DAT_0074b8cc = puVar4 + iVar3;
      iVar2 = FUN_00492480(&DAT_0074b8c0);
      DAT_0074b8c8 = puVar4 + iVar2 + 1;
      DAT_0074b8c4 = puVar4;
    }
    else {
      puStack_34 = DAT_0074b8c8;
      puStack_38 = DAT_0074b8c8;
      uStack_3c = 0x4d8636;
      FUN_004de170();
      puStack_34 = (undefined4 *)(1 - ((int)DAT_0074b8c8 - (int)puVar5 >> 2));
      puStack_38 = DAT_0074b8c8;
      uStack_3c = 0x4d865a;
      FUN_004de280();
      puVar4 = DAT_0074b8c8;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
        *puVar5 = local_18;
      }
      DAT_0074b8c8 = DAT_0074b8c8 + 1;
    }
    puStack_34 = (undefined4 *)0x4d86be;
    this_val = operator_new(0x1c);
    local_4 = 0xb;
    local_10 = this_val;
    if (this_val == (void *)0x0) {
      local_14 = (undefined1 *)0x0;
    }
    else {
      local_18 = auStack_40;
      FUN_004900f0(auStack_40,s_puts_005b70f4,&local_19);
      local_14 = (undefined1 *)FUN_004d18d0(this_val);
    }
    puVar5 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    if ((int)DAT_0074b8cc - (int)DAT_0074b8c8 >> 2 == 0) {
      if ((DAT_0074b8c4 == (undefined4 *)0x0) ||
         ((uint)((int)DAT_0074b8c8 - (int)DAT_0074b8c4 >> 2) < 2)) {
        iVar2 = 1;
      }
      else {
        iVar2 = (int)DAT_0074b8c8 - (int)DAT_0074b8c4 >> 2;
      }
      if (DAT_0074b8c4 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)DAT_0074b8c8 - (int)DAT_0074b8c4 >> 2;
      }
      local_18 = (undefined1 *)(iVar3 + iVar2);
      iVar2 = (int)local_18;
      if ((int)local_18 < 0) {
        iVar2 = 0;
      }
      puStack_34 = (undefined4 *)0x4d8768;
      operator_new_result = operator_new(iVar2 * 4);
      this_val = operator_new_result;
      for (puVar4 = DAT_0074b8c4; puStack_34 = this_val, puVar4 != puVar5; puVar4 = puVar4 + 1) {
        puStack_38 = (undefined4 *)0x4d8780;
        FUN_004d2770();
        this_val = (void *)((int)this_val + 4);
      }
      puStack_38 = (undefined4 *)0x4d8798;
      FUN_004d2770();
      puVar4 = DAT_0074b8c8;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
        this_val = (void *)((int)this_val + 4);
        puStack_38 = (undefined4 *)0x4d87af;
        puStack_34 = this_val;
        FUN_004d2770();
      }
      puStack_34 = (undefined4 *)0x4d87cb;
      local_10 = DAT_0074b8c4;
      FUN_0054b339();
      DAT_0074b8cc = (undefined4 *)((int)operator_new_result + (int)local_18 * 4);
      iVar2 = FUN_00492480(&DAT_0074b8c0);
      DAT_0074b8c4 = operator_new_result;
      DAT_0074b8c8 = (undefined4 *)((int)operator_new_result + iVar2 * 4 + 4);
      ExceptionList = local_c;
      return;
    }
    puStack_34 = DAT_0074b8c8;
    puStack_38 = DAT_0074b8c8;
    uStack_3c = 0x4d8824;
    FUN_004de170();
    puStack_34 = (undefined4 *)(1 - ((int)DAT_0074b8c8 - (int)puVar5 >> 2));
    puStack_38 = DAT_0074b8c8;
    uStack_3c = 0x4d8848;
    FUN_004de280();
    puVar4 = DAT_0074b8c8;
    for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
      *puVar5 = local_14;
    }
    DAT_0074b8c8 = DAT_0074b8c8 + 1;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004d88e0 FUN_004d88e0 ==== */

void * __thiscall FUN_004d88e0(void *this,undefined4 param_2)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057043e;
  local_c = ExceptionList;
  i = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00((undefined1 *)((int)this + 0xc),i,1);
  if (cVar1 != '\0') {
    pcVar2 = s__none_005b715c;
    pcVar3 = *(char **)((int)this + 0x10);
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
    *(uint *)((int)this + 0x14) = i;
    *(undefined1 *)(*(int *)((int)this + 0x10) + i) = 0;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_00577860;
  *(undefined4 *)((int)this + 4) = 0x43;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  local_4 = 0;
  FUN_004d9f00((int)this + 0x30);
  local_4._0_1_ = 1;
  FUN_004d9f00((int)this + 0x44);
  local_4._0_1_ = 2;
  FUN_004d9f00((int)this + 0x58);
  local_4._0_1_ = 3;
  FUN_004d9f00((int)this + 0x6c);
  local_4._0_1_ = 4;
  FUN_004d9f00((int)this + 0x80);
  local_4._0_1_ = 5;
  FUN_004d9f00((int)this + 0x94);
  local_4._0_1_ = 6;
  FUN_004d9f00((int)this + 0xa8);
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined ***)this = &PTR_FUN_00577890;
  FUN_004d8a80(this,param_2);
  ExceptionList = local_c;
  return this;
}


/* ==== 004d8a20 FUN_004d8a20 ==== */

void __thiscall FUN_004d8a20(void *this,undefined4 param_2)

{
  FUN_004d7430(param_2);
  FUN_004d7640(param_2,(int)this + 0x2c,4);
  FUN_004da2d0((void *)((int)this + 0x30),param_2);
  FUN_004da2d0((void *)((int)this + 0x58),param_2);
  FUN_004da2d0((void *)((int)this + 0x6c),param_2);
  FUN_004da2d0((void *)((int)this + 0x80),param_2);
  FUN_004da2d0((void *)((int)this + 0x44),param_2);
  return;
}


/* ==== 004d8a80 FUN_004d8a80 ==== */

/* WARNING: Removing unreachable block (ram,0x004d8be4) */
/* WARNING: Removing unreachable block (ram,0x004d8bee) */
/* WARNING: Removing unreachable block (ram,0x004d8bf8) */
/* WARNING: Removing unreachable block (ram,0x004d8bf2) */

void __thiscall FUN_004d8a80(void *this,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 this_val_3;
  uint i;
  void *this_00;
  undefined1 *this_val;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined **local_20;
  undefined1 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 this_val_2;
  
  puStack_8 = &LAB_00570470;
  pvStack_c = ExceptionList;
  local_1c = (undefined1)param_2;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_20 = &PTR_FUN_005778d8;
  piVar1 = (int *)((int)this + 0x28);
  this_val_2 = 0;
  ExceptionList = &pvStack_c;
  FUN_004d7450(param_2,piVar1);
  FUN_004d6730();
  FUN_004d7800(param_2,(int)this + 0x2c,4);
  FUN_0055924c((int)this + 0x2c);
  FUN_004d6730();
  if (*piVar1 != 0x1b) {
    auStack_48[0] = (undefined1)this_val_2;
    i = 0xffffffff;
    iStack_44 = 0;
    pcVar3 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uStack_40 = 0;
    uStack_3c = 0;
    FUN_00402940(auStack_48,&DAT_00712694,~i - 1);
    i = 0xffffffff;
    pvStack_c._0_1_ = 1;
    pcVar3 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    FUN_00402940(&stack0xffffffa8,&DAT_00712694,~i - 1);
    iVar5 = *piVar1;
    this_val = auStack_38;
    uVar4 = 0x1b;
    pcVar3 = s_runtimelib_version___d__differs_f_005b7164;
    pvStack_c._0_1_ = 2;
    this_val_3 = FUN_004d7610(this_00,this_val);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
    FUN_004d6900(0xbbb,this_val_3,&stack0xffffffa8,auStack_48,this_val,pcVar3,uVar4,iVar5);
    if (iStack_34 != 0) {
      cVar2 = *(char *)(iStack_34 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(iStack_34 + -1));
      }
      else {
        *(char *)(iStack_34 + -1) = cVar2 + -1;
      }
    }
    uStack_2c = 0;
    uStack_30 = 0;
    iStack_34 = 0;
    pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
    if (iStack_44 != 0) {
      cVar2 = *(char *)(iStack_44 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(iStack_44 + -1));
      }
      else {
        *(char *)(iStack_44 + -1) = cVar2 + -1;
      }
    }
    iStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  this_val_3 = this_val_2;
  FUN_004da320((void *)((int)this + 0x30),this_val_2,auStack_28,(int)this);
  FUN_004da320((void *)((int)this + 0x58),this_val_3,auStack_28,(int)this);
  FUN_004da320((void *)((int)this + 0x6c),this_val_3,auStack_28,(int)this);
  FUN_004da320((void *)((int)this + 0x80),this_val_3,auStack_28,(int)this);
  FUN_004da320((void *)((int)this + 0x44),this_val_3,auStack_28,(int)this);
  FUN_004dcaf0(auStack_28,this);
  pvStack_c = (void *)0xffffffff;
  FUN_004dcb30(auStack_28);
  ExceptionList = local_14;
  return;
}


/* ==== 004d8cd0 FUN_004d8cd0 ==== */

void * __thiscall FUN_004d8cd0(void *this,byte param_2)

{
  FUN_004dcb30();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d8cf0 FUN_004d8cf0 ==== */

int * __thiscall
FUN_004d8cf0(void *this,int *this_val,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int *this_val_2;
  undefined4 this_val_3;
  int iVar1;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  void *this_09;
  void *this_10;
  void *this_11;
  void *this_12;
  void *this_13;
  void *this_14;
  void *this_15;
  void *this_16;
  char *unaff_EDI;
  char *unaff_retaddr;
  char *pcVar2;
  undefined4 uStack00000018;
  char *in_stack_00000020;
  int iStack00000024;
  int in_stack_0000002c;
  char *in_stack_00000030;
  int iStack00000034;
  int in_stack_0000003c;
  char *in_stack_00000040;
  void *pvStack00000044;
  int in_stack_0000004c;
  char *in_stack_00000050;
  int iStack00000054;
  int in_stack_0000005c;
  char *in_stack_00000060;
  int iStack00000064;
  int in_stack_0000006c;
  char *in_stack_00000070;
  int iStack00000074;
  int in_stack_0000007c;
  char *in_stack_00000080;
  uint uStack00000084;
  undefined4 uStack00000088;
  
  FUN_0055924c((int)this + 0x2c,s__005ae60c);
  this_val_2 = (int *)FUN_004d4cd0(this_00,this_val,s_Compilationtime_005b7234);
  this_val_2 = (int *)FUN_004d4cd0(this_01,this_val_2,unaff_EDI);
  FUN_004d4cd0(this_02,this_val_2,unaff_retaddr);
  pcVar2 = s___005b159c;
  iVar1 = (*(int *)((int)this + 0x28) % 100) / 10;
  this_val_3 = FUN_004d4cd0((void *)-(*(int *)((int)this + 0x28) >> 0x1f),this_val,
                            s_Compiler_version_005b7220);
  this_val_2 = (int *)FUN_004d4130(this_val_3,iVar1);
  this_val_3 = FUN_004d4cd0(this_03,this_val_2,pcVar2);
  this_val_2 = (int *)FUN_004d4130(this_val_3);
  this_val_3 = FUN_004d4cd0(this_04,this_val_2,param_4);
  uStack00000018 = 0x4d8dab;
  this_val_2 = (int *)FUN_004d4130(this_val_3);
  uStack00000018 = 0x4d8db1;
  FUN_004d4cd0(this_05,this_val_2,in_stack_00000020);
  iStack00000024 = (int)this + 0x30;
  uStack00000018 = 0x4d8dc8;
  this_val_2 = (int *)FUN_004d4cd0(this_06,this_val,s_Classes__005b7214);
  iStack00000024 = 0x4d8dd1;
  this_val_2 = (int *)FUN_004da280(this_val_2,in_stack_0000002c);
  FUN_004d4cd0(this_07,this_val_2,in_stack_00000030);
  iStack00000034 = (int)this + 0x44;
  this_val_2 = (int *)FUN_004d4cd0(this_08,this_val,s_Global_funcs__005b7204);
  iStack00000034 = 0x4d8dfa;
  this_val_2 = (int *)FUN_004da280(this_val_2,in_stack_0000003c);
  FUN_004d4cd0(this_09,this_val_2,in_stack_00000040);
  pvStack00000044 = (void *)((int)this + 0x58);
  this_val_2 = (int *)FUN_004d4cd0(pvStack00000044,this_val,s_Globals__005b71f8);
  pvStack00000044 = (void *)0x4d8e23;
  this_val_2 = (int *)FUN_004da280(this_val_2,in_stack_0000004c);
  FUN_004d4cd0(this_10,this_val_2,in_stack_00000050);
  iStack00000054 = (int)this + 0x6c;
  this_val_2 = (int *)FUN_004d4cd0(this_11,this_val,s_Ext_vars__005b71ec);
  iStack00000054 = 0x4d8e4c;
  this_val_2 = (int *)FUN_004da280(this_val_2,in_stack_0000005c);
  FUN_004d4cd0(this_12,this_val_2,in_stack_00000060);
  iStack00000064 = (int)this + 0x80;
  this_val_2 = (int *)FUN_004d4cd0(this_13,this_val,s_Const_objs__005b71dc);
  iStack00000064 = 0x4d8e78;
  this_val_2 = (int *)FUN_004da280(this_val_2,in_stack_0000006c);
  FUN_004d4cd0(this_14,this_val_2,in_stack_00000070);
  iStack00000074 = (int)this + 0x94;
  this_val_2 = (int *)FUN_004d4cd0(this_15,this_val,s_Consts__005b71d0);
  iStack00000074 = 0x4d8ea4;
  this_val_2 = (int *)FUN_004da280(this_val_2,in_stack_0000007c);
  FUN_004d4cd0(this_16,this_val_2,in_stack_00000080);
  uStack00000084 = 0;
  if ((*(byte *)(*(int *)(*this_val + 4) + 4 + (int)this_val) & 6) == 0) {
    uStack00000088 = 0x4d8ecd;
    iVar1 = (**(code **)(**(int **)((int)this_val + *(int *)(*this_val + 4) + 0x28) + 0x2c))();
    if (iVar1 == -1) {
      uStack00000084 = 4;
    }
  }
  if (uStack00000084 != 0) {
    uStack00000084 = *(uint *)((int)this_val + *(int *)(*this_val + 4) + 4) | uStack00000084;
    if (*(int *)((int)this_val + *(int *)(*this_val + 4) + 0x28) == 0) {
      uStack00000084 = uStack00000084 | 4;
    }
    uStack00000088 = 0;
    FUN_0054c6db();
  }
  return this_val;
}


/* ==== 004d8f00 FUN_004d8f00 ==== */

void __thiscall FUN_004d8f00(void *this,undefined4 param_2)

{
  FUN_004da220((int)this + 0x30,param_2);
  return;
}


/* ==== 004d8f10 FUN_004d8f10 ==== */

void __thiscall FUN_004d8f10(void *this,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004da220((int)this + 0x44,param_2);
  if (iVar1 == 0) {
    FUN_004da220((int)this + 0xa8,param_2);
  }
  return;
}


/* ==== 004d8ff0 FUN_004d8ff0 ==== */

void __thiscall FUN_004d8ff0(void *this)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (99999 < *(int *)((int)this + 0xc)) {
    i = 0xffffffff;
    pcVar4 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    FUN_00402940(local_1c,&DAT_00712694,~i - 1);
    local_4 = 0;
    FUN_004028f0(local_3c,0);
    i = 0xffffffff;
    pcVar4 = &DAT_00712694;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_3c,i,1);
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)&DAT_00712694;
      puVar5 = local_38;
      for (j = i >> 2; j != 0; j = j - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(undefined1 *)((int)local_38 + i) = 0;
      local_34 = i;
    }
    local_4._0_1_ = 1;
    FUN_004028f0(local_2c,0);
    i = 0xffffffff;
    pcVar4 = s_Stack_overflow_005b7248;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(local_2c,i,1);
    if (cVar1 != '\0') {
      pcVar4 = s_Stack_overflow_005b7248;
      pcVar6 = local_28;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *pcVar6 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_28[i] = '\0';
      local_24 = i;
    }
    local_4._0_1_ = 2;
    FUN_004d6900(0xbba,local_2c,local_3c,local_1c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(local_2c,1);
    if (local_38 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)((int)local_38 + -1));
      }
      else {
        *(char *)((int)local_38 + -1) = cVar1 + -1;
      }
    }
    local_38 = (undefined4 *)0x0;
    local_34 = 0;
    uStack_30 = 0;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  i = *(int *)((int)this + 0xc) + 5000;
  *(uint *)((int)this + 0xc) = i;
  uVar2 = FUN_0055a9b4(*(LPVOID *)((int)this + 4),i);
  *(undefined4 *)((int)this + 4) = uVar2;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004d91d0 FUN_004d91d0 ==== */

void __thiscall FUN_004d91d0(void *this,int param_2)

{
  if (*(int *)((int)this + 0xc) < param_2 + *(int *)((int)this + 8)) {
    do {
      FUN_004d8ff0(this);
    } while (*(int *)((int)this + 0xc) < param_2 + *(int *)((int)this + 8));
  }
  return;
}


/* ==== 004d9200 FUN_004d9200 ==== */

void * __thiscall FUN_004d9200(void *this)

{
  void *_malloc_result;
  
  *(undefined ***)this = &PTR_FUN_005778dc;
  *(undefined4 *)((int)this + 0xc) = 10000;
  _malloc_result = _malloc(10000);
  *(void **)((int)this + 4) = _malloc_result;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


/* ==== 004d9230 FUN_004d9230 ==== */

void * __thiscall FUN_004d9230(void *this,byte param_2)

{
  *(undefined ***)this = &PTR_FUN_005778dc;
  FUN_00559d4e(*(undefined4 *)((int)this + 4));
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004d9260 FUN_004d9260 ==== */

void __thiscall FUN_004d9260(void *this)

{
  *(undefined ***)this = &PTR_FUN_005778dc;
  FUN_00559d4e(*(undefined4 *)((int)this + 4));
  return;
}


/* ==== 004d9280 FUN_004d9280 ==== */

undefined4 __thiscall FUN_004d9280(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + -4;
  *(int *)((int)this + 8) = iVar1;
  return *(undefined4 *)(*(int *)((int)this + 4) + iVar1);
}


/* ==== 004d9290 FUN_004d9290 ==== */

undefined4 __thiscall FUN_004d9290(void *this,int param_2)

{
  return *(undefined4 *)(*(int *)((int)this + 4) + param_2);
}


/* ==== 004d92a0 FUN_004d92a0 ==== */

void __thiscall FUN_004d92a0(void *this,undefined4 param_2)

{
  if (*(int *)((int)this + 0xc) < *(int *)((int)this + 8) + 4) {
    do {
      FUN_004d8ff0(this);
    } while (*(int *)((int)this + 0xc) < *(int *)((int)this + 8) + 4);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8)) = param_2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
  return;
}


/* ==== 004d92e0 FUN_004d92e0 ==== */

undefined1 * __thiscall FUN_004d92e0(void *this,undefined1 *this_val)

{
  char *pcVar1;
  char cVar2;
  uint i;
  uint j;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005704b8;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)this + 8) + -4;
  ExceptionList = &local_c;
  *(int *)((int)this + 8) = iVar3;
  pcVar1 = *(char **)(*(int *)((int)this + 4) + iVar3);
  i = 0xffffffff;
  local_1c[0] = this_val._0_1_;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar4 = pcVar1;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  cVar2 = FUN_00402a00(local_1c,i,1);
  if (cVar2 != '\0') {
    pcVar4 = pcVar1;
    pcVar5 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_18[i] = '\0';
    local_14 = i;
  }
  local_4 = 0;
  FUN_00559d4e(pcVar1);
  *this_val = local_1c[0];
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  FUN_004093c0(this_val,local_1c,0,0xffffffff);
  if (local_18 != (char *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return this_val;
}


/* ==== 004d93e0 FUN_004d93e0 ==== */

undefined1 * __thiscall FUN_004d93e0(void *this,undefined1 *this_val,int param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = *(char **)(*(int *)((int)this + 4) + param_2);
  param_2._0_1_ = SUB41(pcVar3,0);
  i = 0xffffffff;
  *this_val = (undefined1)param_2;
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  pcVar4 = pcVar3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_val + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_004d9484;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_004d9484:
  pcVar4 = *(char **)(this_val + 4);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(uint *)(this_val + 8) = i;
  *(undefined1 *)(i + *(int *)(this_val + 4)) = 0;
  return this_val;
}


/* ==== 004d94b0 FUN_004d94b0 ==== */

void __thiscall FUN_004d94b0(undefined4 param_1,int param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005704f0;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004d94d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_LAB_004d9770)[*(int *)(param_2 + 8) + -1])();
  return;
}


/* ==== 004d9780 FUN_004d9780 ==== */

void __thiscall FUN_004d9780(undefined4 param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004d978e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004d9840)[*(int *)(param_3 + 8) + -1])();
  return;
}


/* ==== 004d9850 FUN_004d9850 ==== */

void FUN_004d9850(undefined4 param_1,int param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00570508;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004d9874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_LAB_004d9938)[param_2 + -1])(0);
  return;
}


/* ==== 004d9950 FUN_004d9950 ==== */

void FUN_004d9950(undefined4 param_1,undefined4 param_2,int param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00570528;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004d9975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_LAB_004d9a54)[param_3 + -1])();
  return;
}


/* ==== 004d9a70 FUN_004d9a70 ==== */

void FUN_004d9a70(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004d9a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004d9a88)[param_1 + -1])();
  return;
}


/* ==== 004d9aa0 FUN_004d9aa0 ==== */

undefined4 __thiscall FUN_004d9aa0(void *this,undefined4 this_val,uint param_2)

{
  uint uVar1;
  void *operator_new_result_2;
  int iVar2;
  uint i;
  undefined1 local_1c [4];
  void *operator_new_result;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570550;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  operator_new_result = (void *)0x0;
  local_14 = (void *)0x0;
  local_10 = (void *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_004d9ec0(local_1c);
  i = param_2;
  if (uVar1 < param_2) {
    uVar1 = param_2;
    if ((int)param_2 < 0) {
      uVar1 = 0;
    }
    operator_new_result_2 = operator_new(uVar1 * 4);
    FUN_004de170(operator_new_result,local_14,operator_new_result_2);
    FUN_0042f530(operator_new_result,local_14);
    FUN_0054b339(operator_new_result);
    local_10 = (void *)((int)operator_new_result_2 + i * 4);
    iVar2 = FUN_00492480(local_1c);
    local_14 = (void *)((int)operator_new_result_2 + iVar2 * 4);
    operator_new_result = operator_new_result_2;
  }
  local_4 = 1;
  for (; i != 0; i = i - 1) {
    iVar2 = *(int *)((int)this + 8) + -4;
    *(int *)((int)this + 8) = iVar2;
    param_2 = *(uint *)(*(int *)((int)this + 4) + iVar2);
    FUN_004a5620(local_1c,operator_new_result,1,&param_2);
  }
  FUN_004dccd0(this_val,local_1c);
  FUN_0054b339(operator_new_result);
  ExceptionList = local_c;
  return this_val;
}


/* ==== 004d9bd0 FUN_004d9bd0 ==== */

void __thiscall FUN_004d9bd0(undefined4 param_1,int param_2)

{
  undefined1 local_2c [4];
  int iStack_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00570570;
  local_14 = ExceptionList;
  if (*(int *)(param_2 + 4) != *(int *)(param_2 + 8)) {
    ExceptionList = &local_14;
    FUN_004cef20(local_2c,*(int *)(param_2 + 4));
    puStack_10 = (undefined1 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x004d9c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_004d9d40)[iStack_28 + -1])();
    return;
  }
  return;
}


/* ==== 004d9d50 FUN_004d9d50 ==== */

void __thiscall FUN_004d9d50(undefined4 param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004d9d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004d9e60)[param_2 + -1])();
  return;
}


/* ==== 004d9e70 FUN_004d9e70 ==== */

void FUN_004d9e70(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004d9e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004d9ea8)[param_1 + -1])();
  return;
}


/* ==== 004d9ec0 FUN_004d9ec0 ==== */

int __thiscall FUN_004d9ec0(void *this)

{
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 2;
}


/* ==== 004d9f00 FUN_004d9f00 ==== */

void * __thiscall FUN_004d9f00(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *operator_new_result;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar3 = ExceptionList;
  puStack_8 = &LAB_0057058b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 4) = local_11;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_005778e0;
  local_4 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (4 < (uint)(*(int *)((int)this + 0x10) - *(int *)((int)this + 8) >> 2))) {
    ExceptionList = pvVar3;
    return this;
  }
  operator_new_result = operator_new(0x14);
  puVar1 = *(undefined4 **)((int)this + 0xc);
  puVar5 = operator_new_result;
  for (puVar4 = *(undefined4 **)((int)this + 8); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar4;
    }
    puVar5 = puVar5 + 1;
  }
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  iVar2 = *(int *)((int)this + 8);
  *(undefined4 **)((int)this + 0x10) = operator_new_result + 5;
  if (iVar2 == 0) {
    *(undefined4 **)((int)this + 8) = operator_new_result;
    *(undefined4 **)((int)this + 0xc) = operator_new_result;
    ExceptionList = local_c;
    return this;
  }
  *(undefined4 **)((int)this + 8) = operator_new_result;
  *(undefined4 **)((int)this + 0xc) = operator_new_result + (*(int *)((int)this + 0xc) - iVar2 >> 2)
  ;
  ExceptionList = local_c;
  return this;
}


/* ==== 004da000 FUN_004da000 ==== */

void * __thiscall FUN_004da000(void *this,byte param_2)

{
  FUN_004da170();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004da020 FUN_004da020 ==== */

void * __thiscall FUN_004da020(void *this,int param_2)

{
  int iVar1;
  uint uVar2;
  void *operator_new_result;
  undefined2 uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  
  puStack_8 = &LAB_005705ab;
  local_c = ExceptionList;
  this_val = (undefined1 *)((int)this + 4);
  ExceptionList = &local_c;
  *this_val = (undefined1)param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_005778e0;
  local_4 = 0;
  if ((*(int *)(param_2 + 8) == 0) ||
     (uVar4 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2, (int)uVar4 < 5)) {
    uVar4 = 5;
  }
  if (*(int *)((int)this + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0x10) - *(int *)((int)this + 8) >> 2;
  }
  if (uVar2 < uVar4) {
    uVar2 = uVar4;
    if ((int)uVar4 < 0) {
      uVar2 = 0;
    }
    operator_new_result = operator_new(uVar2 * 4);
    iVar1 = *(int *)((int)this + 0xc);
    pvVar5 = operator_new_result;
    for (iVar6 = *(int *)((int)this + 8); iVar6 != iVar1; iVar6 = iVar6 + 4) {
      FUN_004d2770(pvVar5,iVar6);
      pvVar5 = (void *)((int)pvVar5 + 4);
    }
    FUN_0054b339(*(undefined4 *)((int)this + 8));
    *(void **)((int)this + 0x10) = (void *)((int)operator_new_result + uVar4 * 4);
    iVar6 = FUN_00492480(this_val);
    *(void **)((int)this + 8) = operator_new_result;
    *(void **)((int)this + 0xc) = (void *)((int)operator_new_result + iVar6 * 4);
  }
  iVar6 = param_2;
  puVar7 = *(undefined4 **)(param_2 + 8);
  if (puVar7 != *(undefined4 **)(param_2 + 0xc)) {
    do {
      param_2 = (**(code **)(*(int *)*puVar7 + 4))();
      if (*(int *)((int)this + 8) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined2)(*(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2);
      }
      *(undefined2 *)(param_2 + 0x24) = uVar3;
      FUN_004a5620(this_val,*(undefined4 *)((int)this + 0xc),1,&param_2);
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined4 **)(iVar6 + 0xc));
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 004da170 FUN_004da170 ==== */

/* WARNING: Removing unreachable block (ram,0x004da1ca) */
/* WARNING: Removing unreachable block (ram,0x004da1cb) */
/* WARNING: Removing unreachable block (ram,0x004da1d9) */

void __thiscall FUN_004da170(void *this)

{
  uint uVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005705e7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_005778e0;
  piVar2 = *(int **)((int)this + 8);
  local_4 = 0;
  if (piVar2 != *(int **)((int)this + 0xc)) {
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 8);
  uVar1 = -(uint)(this != (void *)0x0) & (int)this + 4U;
  FUN_0054b339(*(undefined4 *)(uVar1 + 4));
  *(undefined4 *)(uVar1 + 4) = 0;
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004da220 FUN_004da220 ==== */

int __thiscall FUN_004da220(void *this,int param_2)

{
  char *_Str2;
  int __strcmpi_result;
  char *_Str1;
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 != *(int **)((int)this + 0xc)) {
    do {
      _Str2 = *(char **)(*piVar1 + 0x10);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      _Str1 = *(char **)(param_2 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return *piVar1;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)((int)this + 0xc));
  }
  return 0;
}


/* ==== 004da280 FUN_004da280 ==== */

int * FUN_004da280(int *this_val,int param_2)

{
  void *in_ECX;
  void *extraout_ECX;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 == *(undefined4 **)(param_2 + 0xc)) {
    return this_val;
  }
  do {
    if (puVar1 != *(undefined4 **)(param_2 + 8)) {
      FUN_004d4cd0(in_ECX,this_val,s___005b7258);
    }
    FUN_004d4120(this_val,*puVar1);
    puVar1 = puVar1 + 1;
    in_ECX = extraout_ECX;
  } while (puVar1 != *(undefined4 **)(param_2 + 0xc));
  return this_val;
}


/* ==== 004da2d0 FUN_004da2d0 ==== */

void __thiscall FUN_004da2d0(void *this,undefined4 this_val)

{
  undefined4 *puVar1;
  
  FUN_004d7430(this_val);
  puVar1 = *(undefined4 **)((int)this + 8);
  if (puVar1 != *(undefined4 **)((int)this + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x24))(this_val);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 0xc));
  }
  return;
}


/* ==== 004da320 FUN_004da320 ==== */

void __thiscall FUN_004da320(void *this,undefined4 this_val,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *operator_new_result;
  undefined4 *puVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  int i;
  
  uVar2 = FUN_004d7470(this_val);
  iVar5 = *(int *)((int)this + 8);
  if ((iVar5 != 0) && (uVar2 < (uint)(*(int *)((int)this + 0x10) - iVar5 >> 2))) {
    uVar3 = 0;
    if (iVar5 != 0) {
      uVar3 = *(int *)((int)this + 0x10) - iVar5 >> 2;
    }
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
      if ((int)uVar2 < 0) {
        uVar3 = 0;
      }
      operator_new_result = operator_new(uVar3 * 4);
      puVar1 = *(undefined4 **)((int)this + 0xc);
      puVar7 = operator_new_result;
      for (puVar4 = *(undefined4 **)((int)this + 8); puVar4 != puVar1; puVar4 = puVar4 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar4;
        }
        puVar7 = puVar7 + 1;
      }
      FUN_0054b339(*(undefined4 *)((int)this + 8));
      *(undefined4 **)((int)this + 0x10) = operator_new_result + uVar2;
      if (*(int *)((int)this + 8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
      }
      *(undefined4 **)((int)this + 8) = operator_new_result;
      *(undefined4 **)((int)this + 0xc) = operator_new_result + iVar5;
    }
  }
  iVar5 = param_3;
  i = 0;
  if (0 < (int)uVar2) {
    do {
      param_3 = FUN_004d4040(this_val,param_2,iVar5,i);
      if (*(int *)((int)this + 8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (undefined2)(*(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2);
      }
      *(undefined2 *)(param_3 + 0x24) = uVar6;
      FUN_004a5620((int)this + 4,*(undefined4 *)((int)this + 0xc),1,&param_3);
      i = i + 1;
    } while (i < (int)uVar2);
  }
  return;
}


/* ==== 004da440 FUN_004da440 ==== */

void __thiscall FUN_004da440(void *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  if (puVar1 != *(undefined4 **)((int)this + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x1c))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 0xc));
  }
  return;
}


/* ==== 004da470 FUN_004da470 ==== */

void __thiscall FUN_004da470(void *this,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  if (puVar1 != *(undefined4 **)((int)this + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x20))(param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 0xc));
  }
  return;
}


/* ==== 004da4a0 FUN_004da4a0 ==== */

void __thiscall FUN_004da4a0(void *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  if (puVar1 != *(undefined4 **)((int)this + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 8))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 0xc));
  }
  return;
}


/* ==== 004da4d0 FUN_004da4d0 ==== */

void __thiscall FUN_004da4d0(void *this)

{
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 004da580 FUN_004da580 ==== */

void __thiscall FUN_004da580(void *this)

{
  FUN_004dd7d0();
  FUN_004da4a0((int)this + 0x7c);
  return;
}


/* ==== 004da5a0 FUN_004da5a0 ==== */

undefined4 __thiscall FUN_004da5a0(void *this,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *this_val;
  undefined4 uVar4;
  void *this_00;
  void *this_01;
  int *unaff_retaddr;
  int in_stack_ffffffe4;
  int in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_00570608;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*(int *)this + 0x30))(&stack0xffffffe4);
  pcVar3 = *(char **)(iVar2 + 4);
  puStack_8 = (undefined1 *)0x0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(this_00,unaff_retaddr,pcVar3);
  pcVar3 = (char *)((int)this + 0x54);
  this = (void *)((int)this + 0x40);
  this_val = (int *)FUN_004d4cd0(this,unaff_retaddr,s___005b725c);
  this_val = (int *)FUN_004da280(this_val,(int)this);
  this_val = (int *)FUN_004d4cd0(this_01,this_val,pcVar3);
  this_val = (int *)FUN_004da280(this_val,in_stack_ffffffe4);
  uVar4 = FUN_004da280(this_val,in_stack_ffffffe8);
  uVar4 = FUN_004ddee0(uVar4,in_stack_ffffffec);
  if (iStack_4 != 0) {
    cVar1 = *(char *)(iStack_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_4 + -1) = cVar1 + -1;
      ExceptionList = param_3;
      return uVar4;
    }
    FUN_0054b339();
  }
  ExceptionList = param_3;
  return uVar4;
}


/* ==== 004da690 FUN_004da690 ==== */

void * __thiscall
FUN_004da690(void *this,undefined4 this_val,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  undefined1 local_15;
  void *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570664;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = this;
  FUN_004900f0((int)this + 0xc,s__none_005b715c,&local_15);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_00577860;
  *(undefined4 *)((int)this + 4) = 0x3d;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  local_4 = 0;
  FUN_004d9f00((int)this + 0x28);
  *(undefined ***)this = &PTR_FUN_0057797c;
  *(undefined1 *)((int)this + 0x3c) = 0;
  local_4 = 1;
  FUN_004d9f00((int)this + 0x40);
  local_4._0_1_ = 2;
  FUN_004d9f00((int)this + 0x54);
  local_10 = (undefined4 *)((int)this + 0x68);
  *(undefined1 *)((int)this + 0x6c) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *local_10 = &PTR_FUN_00577978;
  FUN_004dbb80((undefined1 *)((int)this + 0x6c),10);
  *(undefined ***)this = &PTR_FUN_00577930;
  local_4 = 5;
  FUN_004d9f00((void *)((int)this + 0x7c));
  local_4 = CONCAT31(local_4._1_3_,6);
  *(undefined ***)this = &PTR_FUN_005778e8;
  FUN_004dcf80(this,this_val,param_2,param_3,param_4);
  FUN_004da320((void *)((int)this + 0x7c),this_val,param_2,(int)this);
  ExceptionList = local_c;
  return this;
}


/* ==== 004da7a0 FUN_004da7a0 ==== */

void * __thiscall FUN_004da7a0(void *this,byte param_2)

{
  FUN_004dde60();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004da7c0 FUN_004da7c0 ==== */

void __thiscall FUN_004da7c0(void *this)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00570678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_0057797c;
  local_4 = 0;
  FUN_004da170((int)this + 0x28);
  *(undefined ***)this = &PTR_FUN_00577860;
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004da990 FUN_004da990 ==== */

void * __thiscall FUN_004da990(void *this,byte param_2)

{
  FUN_004da7c0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004da9b0 FUN_004da9b0 ==== */

void __thiscall FUN_004da9b0(void *this)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005706b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00577930;
  local_4 = 2;
  FUN_004dde60((int)this + 0x68);
  local_4._0_1_ = 1;
  FUN_004da170((int)this + 0x54);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004da170((int)this + 0x40);
  *(undefined ***)this = &PTR_FUN_0057797c;
  local_4 = 3;
  FUN_004da170((int)this + 0x28);
  *(undefined ***)this = &PTR_FUN_00577860;
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004daa60 FUN_004daa60 ==== */

undefined4 * __thiscall FUN_004daa60(void *this)

{
  undefined1 uVar1;
  undefined4 *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005706f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x7c);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)((int)this + 4);
    operator_new_result[2] = *(undefined4 *)((int)this + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)((int)this + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0(operator_new_result + 3,(undefined1 *)((int)this + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)((int)this + 0x1c);
    operator_new_result[8] = *(undefined4 *)((int)this + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)((int)this + 0x24);
    *operator_new_result = &PTR_FUN_00577860;
    local_4._0_1_ = 1;
    FUN_004da020(operator_new_result + 10,(int)this + 0x28);
    uVar1 = *(undefined1 *)((int)this + 0x3c);
    *operator_new_result = &PTR_FUN_0057797c;
    *(undefined1 *)(operator_new_result + 0xf) = uVar1;
    local_4._0_1_ = 2;
    FUN_004da020(operator_new_result + 0x10,(int)this + 0x40);
    local_4._0_1_ = 3;
    FUN_004da020(operator_new_result + 0x15,(int)this + 0x54);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004dd830(operator_new_result + 0x1a,(int)this + 0x68);
    *operator_new_result = &PTR_FUN_00577930;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004dab60 FUN_004dab60 ==== */

void * __thiscall FUN_004dab60(void *this,byte param_2)

{
  FUN_004da9b0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004dab80 FUN_004dab80 ==== */

undefined4 * __thiscall FUN_004dab80(void *this)

{
  undefined1 uVar1;
  undefined4 *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570739;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x90);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)((int)this + 4);
    operator_new_result[2] = *(undefined4 *)((int)this + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)((int)this + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0(operator_new_result + 3,(undefined1 *)((int)this + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)((int)this + 0x1c);
    operator_new_result[8] = *(undefined4 *)((int)this + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)((int)this + 0x24);
    *operator_new_result = &PTR_FUN_00577860;
    local_4._0_1_ = 1;
    FUN_004da020(operator_new_result + 10,(int)this + 0x28);
    uVar1 = *(undefined1 *)((int)this + 0x3c);
    *operator_new_result = &PTR_FUN_0057797c;
    *(undefined1 *)(operator_new_result + 0xf) = uVar1;
    local_4._0_1_ = 2;
    FUN_004da020(operator_new_result + 0x10,(int)this + 0x40);
    local_4._0_1_ = 3;
    FUN_004da020(operator_new_result + 0x15,(int)this + 0x54);
    local_4._0_1_ = 4;
    FUN_004dd830(operator_new_result + 0x1a,(int)this + 0x68);
    *operator_new_result = &PTR_FUN_00577930;
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004da020(operator_new_result + 0x1f,(int)this + 0x7c);
    *operator_new_result = &PTR_FUN_005778e8;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004daca0 FUN_004daca0 ==== */

void * __thiscall FUN_004daca0(void *this,byte param_2)

{
  FUN_004dacc0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004dacc0 FUN_004dacc0 ==== */

void __thiscall FUN_004dacc0(void *this)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057077e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_005778e8;
  local_4 = 0;
  FUN_004da170((int)this + 0x7c);
  *(undefined ***)this = &PTR_FUN_00577930;
  local_4 = 3;
  FUN_004dde60((int)this + 0x68);
  local_4._0_1_ = 2;
  FUN_004da170((int)this + 0x54);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004da170((int)this + 0x40);
  *(undefined ***)this = &PTR_FUN_0057797c;
  local_4 = 4;
  FUN_004da170((int)this + 0x28);
  *(undefined ***)this = &PTR_FUN_00577860;
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004dad80 FUN_004dad80 ==== */

undefined1 * __thiscall FUN_004dad80(void *this,undefined1 *this_val)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined1 *)
           FUN_004796b0(local_1c,(undefined1 *)(*(int *)((int)this + 8) + 0xc),s___005b159c);
  local_4 = 0;
  FUN_0047c9a0(this_val,puVar2,(int)this + 0xc);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return this_val;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return this_val;
}


/* ==== 004dae20 FUN_004dae20 ==== */

void __thiscall FUN_004dae20(void *this,int this_val)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *this_00;
  uint i;
  undefined1 *puVar6;
  int *piVar7;
  char *pcVar8;
  char *pcStack_70;
  char *this_val_2;
  char *pcStack_68;
  char *pcStack_64;
  int *local_50;
  undefined1 local_4c [16];
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005707e0;
  pvStack_c = ExceptionList;
  pcStack_64 = (char *)0x4dae48;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00492480((int)this + 0x2c);
  pcStack_64 = (char *)0x4dae55;
  iVar3 = FUN_004d2ce0(this_val);
  if (iVar3 + 1 != iVar2) {
    if (*(int *)(this_val + 4) == 0) {
      pcStack_64 = (char *)0x0;
    }
    else {
      pcStack_64 = (char *)((*(int *)(this_val + 8) - *(int *)(this_val + 4)) / 0x18);
    }
    pcStack_68 = s_Args_size___d_005b7348;
    this_val_2 = (char *)0x4dae8c;
    FUN_004d6730();
    if (*(int *)((int)this + 0x30) == 0) {
      pcStack_64 = (char *)0x0;
    }
    else {
      pcStack_64 = (char *)(*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) >> 2);
    }
    pcStack_68 = s_Formal_args_size___d_005b7330;
    this_val_2 = (char *)0x4daead;
    FUN_004d6730();
    iVar2 = *(int *)(this_val + 4);
    if (iVar2 != *(int *)(this_val + 8)) {
      do {
        pcStack_64 = *(char **)(iVar2 + 8);
        pcStack_68 = local_4c;
        this_val_2 = (char *)0x4daec8;
        iVar3 = FUN_004dbc40();
        pcStack_64 = *(char **)(iVar3 + 4);
        uStack_4 = 0;
        if (pcStack_64 == (undefined1 *)0x0) {
          pcStack_64 = &DAT_0057629c;
        }
        pcStack_68 = (char *)((iVar2 - *(int *)(this_val + 4)) / 0x18);
        this_val_2 = s_Arg__d___s_005b7324;
        pcStack_70 = (char *)0x4daeff;
        FUN_004d6730();
        uStack_4 = 0xffffffff;
        pcStack_64 = (char *)0x1;
        pcStack_68 = (char *)0x4daf15;
        FUN_004028f0(local_4c);
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != *(int *)(this_val + 8));
    }
    piVar7 = *(int **)((int)this + 0x30);
    if (piVar7 != *(int **)((int)this + 0x34)) {
      do {
        pcStack_68 = local_4c;
        pcStack_64 = *(char **)(*piVar7 + 0x20);
        this_val_2 = (char *)0x4daf39;
        iVar2 = FUN_004dbc40();
        uStack_4 = 1;
        pcStack_64 = &DAT_0057629c;
        if (*(undefined1 **)(iVar2 + 4) != (undefined1 *)0x0) {
          pcStack_64 = *(undefined1 **)(iVar2 + 4);
        }
        pcStack_68 = (char *)((int)piVar7 - *(int *)((int)this + 0x30) >> 2);
        this_val_2 = s_Formal_arg__d___s_005b7310;
        pcStack_70 = (char *)0x4daf68;
        FUN_004d6730();
        uStack_4 = 0xffffffff;
        pcStack_64 = (char *)0x1;
        pcStack_68 = (char *)0x4daf7e;
        FUN_004028f0(local_4c);
        piVar7 = piVar7 + 1;
      } while (piVar7 != *(int **)((int)this + 0x34));
    }
    pcStack_64 = (char *)0x4daf8f;
    iVar2 = FUN_004db1b0(this);
    FUN_004797e0(this_00,(undefined1 *)&pcStack_70,s_Davi_script__incorrect_number_of_005b72d4,iVar2
                );
    FUN_004d6760();
    local_4c[0] = (undefined1)this_val;
    pcStack_64 = (char *)0x0;
    pcStack_68 = (char *)0x4dafc1;
    FUN_004028f0(local_4c);
    i = 0xffffffff;
    pcVar8 = s_Incorrect_number_of_arguments_to_005b72a4;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcStack_64 = (char *)(~i - 1);
    pcStack_68 = s_Incorrect_number_of_arguments_to_005b72a4;
    this_val_2 = (char *)0x4dafdf;
    FUN_00402940(local_4c);
    pcStack_68 = (char *)((int)this + 0xc);
    pcStack_64 = (char *)(*(int *)((int)this + 8) + 0xc);
    this_val_2 = local_4c;
    pcStack_70 = (char *)0xbbc;
    uStack_4 = 2;
    FUN_004d6900();
    uStack_4 = 0xffffffff;
    pcStack_64 = (char *)0x1;
    pcStack_68 = (char *)0x4db017;
    FUN_004028f0(local_4c);
  }
  local_50 = *(int **)((int)this + 0x30);
  iVar2 = *(int *)(this_val + 4);
  if (iVar2 != *(int *)(this_val + 8)) {
    do {
      pcStack_64 = *(char **)(*local_50 + 0x20);
      if (pcStack_64 != (char *)*(int *)(iVar2 + 8)) {
        iVar3 = *(int *)((int)this + 8);
        pcStack_68 = local_1c;
        this_val_2 = (char *)0x4db050;
        iVar4 = FUN_004dbc40();
        uStack_4 = 3;
        puVar6 = &DAT_0057629c;
        if (*(undefined1 **)(iVar4 + 4) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(iVar4 + 4);
        }
        pcStack_64 = *(char **)(iVar2 + 8);
        pcStack_68 = auStack_2c;
        this_val_2 = (char *)0x4db077;
        iVar4 = FUN_004dbc40();
        pcStack_68 = *(char **)(iVar4 + 4);
        uStack_4._0_1_ = 4;
        if (pcStack_68 == (undefined1 *)0x0) {
          pcStack_68 = &DAT_0057629c;
        }
        this_val_2 = (char *)((iVar2 - *(int *)(this_val + 4)) / 0x18 + 1);
        pcStack_70 = s_Bad_call_to_eventhandler_arg__d__005b7264;
        pcStack_64 = puVar6;
        uVar5 = FUN_004d7610(this_val_2,auStack_3c);
        uStack_4 = CONCAT31(uStack_4._1_3_,5);
        FUN_004d6900(0xbbd,uVar5,(int)this + 0xc,iVar3 + 0xc);
        if (iStack_38 != 0) {
          pcStack_64 = (char *)(iStack_38 + -1);
          cVar1 = *(char *)(iStack_38 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            pcStack_68 = (char *)0x4db0fd;
            FUN_0054b339();
          }
          else {
            *pcStack_64 = cVar1 + -1;
          }
        }
        iStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        if (iStack_28 != 0) {
          pcStack_64 = (char *)(iStack_28 + -1);
          cVar1 = *(char *)(iStack_28 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            pcStack_68 = (char *)0x4db12e;
            FUN_0054b339();
          }
          else {
            *pcStack_64 = cVar1 + -1;
          }
        }
        iStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_4 = 0xffffffff;
        if (iStack_18 != 0) {
          pcStack_64 = (char *)(iStack_18 + -1);
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            pcStack_68 = (char *)0x4db167;
            FUN_0054b339();
          }
          else {
            *pcStack_64 = cVar1 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
      }
      iVar2 = iVar2 + 0x18;
      local_50 = local_50 + 1;
    } while (iVar2 != *(int *)(this_val + 8));
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004db1b0 FUN_004db1b0 ==== */

int __thiscall FUN_004db1b0(void *this)

{
  return (int)this + 0xc;
}


/* ==== 004db1c0 FUN_004db1c0 ==== */

void __thiscall FUN_004db1c0(void *this)

{
  char cVar1;
  uint i;
  char *pcVar2;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005707f8;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0x30) == 0) ||
     ((*(int *)((int)this + 0x34) - *(int *)((int)this + 0x30) & 0xfffffffcU) != 4)) {
    i = 0xffffffff;
    pcVar2 = s_incorrect_number_of_arguments_to_005b7358;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    FUN_00402940(local_1c,s_incorrect_number_of_arguments_to_005b7358,~i - 1);
    local_4 = 0;
    FUN_004d6900(0xbbc,local_1c,(int)this + 0xc,*(int *)((int)this + 8) + 0xc);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339((char *)(local_18 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004db290 FUN_004db290 ==== */

undefined4 __thiscall FUN_004db290(void *this,undefined4 param_1,int this_val)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint i;
  char *pcVar4;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570818;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004d9290(this_val,*(int *)(this_val + 8) + -4);
  if (iVar2 == DAT_0074b888) {
    local_1c[0] = (undefined1)this_val;
    i = 0xffffffff;
    local_18 = 0;
    pcVar4 = s_Cannot_fire_event_for_NIL_object_005b7388;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_00402940(local_1c,s_Cannot_fire_event_for_NIL_object_005b7388,~i - 1);
    local_4 = 0;
    FUN_004d6900(0xbc0,local_1c,(int)this + 0xc,*(int *)((int)this + 8) + 0xc);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  piVar3 = *(int **)((int)this + 0x84);
  do {
    if (piVar3 == *(int **)((int)this + 0x88)) {
LAB_004db389:
      FUN_004db3d0(this,param_1,this_val);
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (*(int *)(*(int *)(*piVar3 + 0x90) + 0x2c) == iVar2) {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 0x3c))(param_1,this_val);
        ExceptionList = pvStack_c;
        return param_1;
      }
      goto LAB_004db389;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


/* ==== 004db3d0 FUN_004db3d0 ==== */

undefined4 * __thiscall FUN_004db3d0(void *this,undefined4 *param_2,int param_3)

{
  undefined **local_3c [2];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570838;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0x70) != 0) &&
     ((*(int *)((int)this + 0x74) - *(int *)((int)this + 0x70) & 0xfffffffcU) != 0)) {
    local_30 = *(undefined4 *)(param_3 + 8);
    local_34 = param_3;
    local_2c = 0;
    ExceptionList = &local_c;
    FUN_00558643(local_24,0x18,1,&LAB_004db4f0,FUN_004d3a00);
    local_3c[0] = &PTR_FUN_005779c4;
    local_4 = 0;
    FUN_004dd0b0(this,param_3);
    FUN_004de310(local_3c,(int)this + 0x68);
    FUN_004dd0e0(this,param_3);
    FUN_004dd110(this,param_3);
    param_2[2] = 2;
    param_2[4] = 1;
    *param_2 = &PTR_FUN_005778c0;
    local_4 = 0xffffffff;
    local_3c[0] = &PTR_FUN_005779c4;
    FUN_005586c5(local_24,0x18,1,FUN_004d3a00);
    ExceptionList = local_c;
    return param_2;
  }
  ExceptionList = &local_c;
  FUN_004dd110(this,param_3);
  param_2[2] = 2;
  param_2[4] = 0;
  *param_2 = &PTR_FUN_005778c0;
  ExceptionList = local_c;
  return param_2;
}


/* ==== 004db500 FUN_004db500 ==== */

void __thiscall FUN_004db500(void *this)

{
  *(undefined ***)this = &PTR_FUN_005779c4;
  FUN_005586c5((int)this + 0x18,0x18,1,FUN_004d3a00);
  return;
}


/* ==== 004db520 FUN_004db520 ==== */

void * __thiscall FUN_004db520(void *this,byte param_2)

{
  FUN_004db500();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004db540 FUN_004db540 ==== */

undefined1 * __thiscall FUN_004db540(void *this,undefined1 *this_val)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined1 *)
           FUN_004796b0(local_1c,(undefined1 *)(*(int *)((int)this + 0x90) + 0xc),s___005b159c);
  local_4 = 0;
  FUN_0047c9a0(this_val,puVar2,(int)this + 0xc);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return this_val;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return this_val;
}


/* ==== 004db5f0 FUN_004db5f0 ==== */

undefined4 __thiscall FUN_004db5f0(void *this,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *this_val;
  undefined4 uVar4;
  void *this_00;
  void *this_01;
  int *unaff_retaddr;
  int in_stack_ffffffe4;
  int in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_00570878;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*(int *)this + 0x30))(&stack0xffffffe4);
  pcVar3 = *(char **)(iVar2 + 4);
  puStack_8 = (undefined1 *)0x0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(this_00,unaff_retaddr,pcVar3);
  pcVar3 = (char *)((int)this + 0x54);
  this = (void *)((int)this + 0x40);
  this_val = (int *)FUN_004d4cd0(this,unaff_retaddr,s___005b725c);
  this_val = (int *)FUN_004da280(this_val,(int)this);
  this_val = (int *)FUN_004d4cd0(this_01,this_val,pcVar3);
  this_val = (int *)FUN_004da280(this_val,in_stack_ffffffe4);
  uVar4 = FUN_004da280(this_val,in_stack_ffffffe8);
  uVar4 = FUN_004ddee0(uVar4,in_stack_ffffffec);
  if (iStack_4 != 0) {
    cVar1 = *(char *)(iStack_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_4 + -1) = cVar1 + -1;
      ExceptionList = param_3;
      return uVar4;
    }
    FUN_0054b339();
  }
  ExceptionList = param_3;
  return uVar4;
}


/* ==== 004db6e0 FUN_004db6e0 ==== */

void * __thiscall
FUN_004db6e0(void *this,undefined4 this_val,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  undefined1 local_15;
  void *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005708d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = this;
  FUN_004900f0((int)this + 0xc,s__none_005b715c,&local_15);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_00577860;
  *(undefined4 *)((int)this + 4) = 0x3e;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  local_4 = 0;
  FUN_004d9f00((int)this + 0x28);
  *(undefined ***)this = &PTR_FUN_0057797c;
  *(undefined1 *)((int)this + 0x3c) = 0;
  local_4 = 1;
  FUN_004d9f00((int)this + 0x40);
  local_4._0_1_ = 2;
  FUN_004d9f00((int)this + 0x54);
  local_10 = (undefined4 *)((int)this + 0x68);
  *(undefined1 *)((int)this + 0x6c) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *local_10 = &PTR_FUN_00577978;
  FUN_004dbb80((undefined1 *)((int)this + 0x6c),10);
  *(undefined ***)this = &PTR_FUN_00577930;
  local_4 = 5;
  FUN_004d9f00((void *)((int)this + 0x7c));
  local_4 = 6;
  *(undefined ***)this = &PTR_FUN_005779c8;
  FUN_004dcf80(this,this_val,param_2,param_3,param_4);
  FUN_004da320((void *)((int)this + 0x7c),this_val,param_2,(int)this);
  FUN_004dcc10(this_val,(int)this + 0x90,param_2);
  ExceptionList = local_c;
  return this;
}


/* ==== 004db810 FUN_004db810 ==== */

undefined4 * __thiscall FUN_004db810(void *this)

{
  undefined1 uVar1;
  undefined4 *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570919;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x94);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)((int)this + 4);
    operator_new_result[2] = *(undefined4 *)((int)this + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)((int)this + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0(operator_new_result + 3,(undefined1 *)((int)this + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)((int)this + 0x1c);
    operator_new_result[8] = *(undefined4 *)((int)this + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)((int)this + 0x24);
    *operator_new_result = &PTR_FUN_00577860;
    local_4._0_1_ = 1;
    FUN_004da020(operator_new_result + 10,(int)this + 0x28);
    uVar1 = *(undefined1 *)((int)this + 0x3c);
    *operator_new_result = &PTR_FUN_0057797c;
    *(undefined1 *)(operator_new_result + 0xf) = uVar1;
    local_4._0_1_ = 2;
    FUN_004da020(operator_new_result + 0x10,(int)this + 0x40);
    local_4._0_1_ = 3;
    FUN_004da020(operator_new_result + 0x15,(int)this + 0x54);
    local_4._0_1_ = 4;
    FUN_004dd830(operator_new_result + 0x1a,(int)this + 0x68);
    *operator_new_result = &PTR_FUN_00577930;
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004da020(operator_new_result + 0x1f,(int)this + 0x7c);
    *operator_new_result = &PTR_FUN_005778e8;
    operator_new_result[0x24] = *(undefined4 *)((int)this + 0x90);
    *operator_new_result = &PTR_FUN_005779c8;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004db940 FUN_004db940 ==== */

void * __thiscall FUN_004db940(void *this,byte param_2)

{
  FUN_004db960();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004db960 FUN_004db960 ==== */

void __thiscall FUN_004db960(void *this)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057095e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_005778e8;
  local_4 = 0;
  FUN_004da170((int)this + 0x7c);
  *(undefined ***)this = &PTR_FUN_00577930;
  local_4 = 3;
  FUN_004dde60((int)this + 0x68);
  local_4._0_1_ = 2;
  FUN_004da170((int)this + 0x54);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004da170((int)this + 0x40);
  *(undefined ***)this = &PTR_FUN_0057797c;
  local_4 = 4;
  FUN_004da170((int)this + 0x28);
  *(undefined ***)this = &PTR_FUN_00577860;
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004dbaa0 FUN_004dbaa0 ==== */

undefined4 * __thiscall FUN_004dbaa0(void *this,undefined4 *param_2,int param_3)

{
  undefined **local_3c [2];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057098f;
  local_c = ExceptionList;
  local_30 = *(undefined4 *)(param_3 + 8);
  local_34 = param_3;
  local_2c = 0;
  ExceptionList = &local_c;
  FUN_00558643(local_24,0x18,1,&LAB_004db4f0,FUN_004d3a00);
  local_3c[0] = &PTR_FUN_005779c4;
  local_4 = 1;
  FUN_004dd0b0(this,param_3);
  FUN_004de310(local_3c,(int)this + 0x68);
  FUN_004dd0e0(this,param_3);
  FUN_004dd110(this,param_3);
  param_2[2] = 2;
  param_2[4] = 1;
  *param_2 = &PTR_FUN_005778c0;
  local_4 = local_4 & 0xffffff00;
  local_3c[0] = &PTR_FUN_005779c4;
  FUN_005586c5(local_24,0x18,1,FUN_004d3a00);
  ExceptionList = local_c;
  return param_2;
}


/* ==== 004dbb80 FUN_004dbb80 ==== */

void __thiscall FUN_004dbb80(void *this,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *operator_new_result;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 2;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
    if ((int)param_2 < 0) {
      uVar3 = 0;
    }
    operator_new_result = operator_new(uVar3 << 2);
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar5 = operator_new_result;
    for (puVar4 = *(undefined4 **)((int)this + 4); puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar4;
      }
      puVar5 = puVar5 + 1;
    }
    FUN_0054b339(*(undefined4 *)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = operator_new_result + param_2;
    iVar2 = *(int *)((int)this + 4);
    if (iVar2 == 0) {
      *(undefined4 **)((int)this + 4) = operator_new_result;
      *(undefined4 **)((int)this + 8) = operator_new_result;
      return;
    }
    *(undefined4 **)((int)this + 4) = operator_new_result;
    *(undefined4 **)((int)this + 8) = operator_new_result + (*(int *)((int)this + 8) - iVar2 >> 2);
  }
  return;
}


/* ==== 004dbc40 FUN_004dbc40 ==== */

void __thiscall FUN_004dbc40(undefined4 param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004dbc4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004dbdbc)[param_3])();
  return;
}


/* ==== 004dbdd0 FUN_004dbdd0 ==== */

/* WARNING: Removing unreachable block (ram,0x004dbe0c) */

undefined1 * __thiscall FUN_004dbdd0(void *this,undefined1 *this_val)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 *puVar5;
  uint i;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)((int)this + 4) < 4) {
    FUN_004dbc40(this,this_val,*(int *)((int)this + 4));
    return this_val;
  }
  iVar2 = *(int *)this;
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(this_val + 4) = 0;
  *this_val = uVar1;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  uVar3 = *(uint *)(iVar2 + 0x14);
  if (this_val == (undefined1 *)(iVar2 + 0xc)) {
    FUN_0040f800(this_val,uVar3,0xffffffff);
    FUN_0040f800(this_val,0,0);
    return this_val;
  }
  if (uVar3 != 0) {
    puVar5 = *(undefined1 **)(iVar2 + 0x10);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0057629c;
    }
    if ((byte)puVar5[-1] < 0xfe) {
      FUN_004028f0(this_val,1);
      puVar5 = *(undefined1 **)(iVar2 + 0x10);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      *(undefined1 **)(this_val + 4) = puVar5;
      *(undefined4 *)(this_val + 8) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(this_val + 0xc) = *(undefined4 *)(iVar2 + 0x18);
      puVar5[-1] = puVar5[-1] + '\x01';
      return this_val;
    }
  }
  cVar4 = FUN_00402a00(this_val,uVar3,1);
  if (cVar4 != '\0') {
    puVar6 = *(undefined4 **)(iVar2 + 0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&DAT_0057629c;
    }
    puVar7 = *(undefined4 **)(this_val + 4);
    for (i = uVar3 >> 2; i != 0; i = i - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (i = uVar3 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(this_val,uVar3);
  }
  return this_val;
}


/* ==== 004dbee0 FUN_004dbee0 ==== */

void __thiscall FUN_004dbee0(void *this,undefined4 this_val,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004d4510(this_val);
  *(undefined4 *)((int)this + 4) = uVar1;
  FUN_004dcc10(this_val,this,param_2);
  return;
}


/* ==== 004dbf10 FUN_004dbf10 ==== */

void __thiscall FUN_004dbf10(void *this,undefined4 this_val)

{
  FUN_004d43a0(this_val,*(undefined4 *)((int)this + 4));
  FUN_004dcbc0(this_val,*(undefined4 *)this);
  return;
}


/* ==== 004dbf40 FUN_004dbf40 ==== */

void FUN_004dbf40(undefined4 this_val,undefined4 param_2)

{
  FUN_004d43a0(this_val,param_2);
  return;
}


/* ==== 004dbf50 FUN_004dbf50 ==== */

void FUN_004dbf50(undefined4 this_val,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004d4510(this_val);
  *param_2 = uVar1;
  return;
}


/* ==== 004dbf60 FUN_004dbf60 ==== */

int * FUN_004dbf60(int *this_val_2,void *this_val)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *this;
  char *local_1c [3];
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_005709a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004dbdd0(this_val,(undefined1 *)local_1c);
  pcVar3 = *(char **)(iVar2 + 4);
  local_4 = (void *)0x0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(this,this_val_2,pcVar3);
  if (iStack_10 != 0) {
    local_1c[0] = (char *)(iStack_10 + -1);
    cVar1 = *(char *)(iStack_10 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *local_1c[0] = cVar1 + -1;
      ExceptionList = local_4;
      return this_val_2;
    }
    FUN_0054b339();
  }
  ExceptionList = local_4;
  return this_val_2;
}


/* ==== 004dc120 FUN_004dc120 ==== */

void * __thiscall
FUN_004dc120(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  uint i;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005709de;
  local_c = ExceptionList;
  i = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  pcVar2 = s__none_005b715c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940((undefined1 *)((int)this + 0xc),s__none_005b715c,~i - 1);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_00577860;
  *(undefined4 *)((int)this + 4) = 0x42;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  local_4 = 0;
  FUN_004d9f00((void *)((int)this + 0x28));
  local_4._0_1_ = 1;
  FUN_004d9f00((void *)((int)this + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)this = &PTR_FUN_00577a10;
  FUN_004d3e90(this,param_2,param_3,param_4,param_5);
  FUN_004da320((void *)((int)this + 0x28),param_2,param_3,(int)this);
  FUN_004da320((void *)((int)this + 0x3c),param_2,param_3,(int)this);
  ExceptionList = local_c;
  return this;
}


/* ==== 004dc210 FUN_004dc210 ==== */

undefined4 * __thiscall FUN_004dc210(void *this)

{
  undefined4 *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00570a0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  operator_new_result = operator_new(0x50);
  local_4 = 0;
  if (operator_new_result != (undefined4 *)0x0) {
    operator_new_result[1] = *(undefined4 *)((int)this + 4);
    operator_new_result[2] = *(undefined4 *)((int)this + 8);
    *(undefined1 *)(operator_new_result + 3) = *(undefined1 *)((int)this + 0xc);
    operator_new_result[4] = 0;
    operator_new_result[5] = 0;
    operator_new_result[6] = 0;
    FUN_004093c0(operator_new_result + 3,(undefined1 *)((int)this + 0xc),0,0xffffffff);
    operator_new_result[7] = *(undefined4 *)((int)this + 0x1c);
    operator_new_result[8] = *(undefined4 *)((int)this + 0x20);
    *(undefined2 *)(operator_new_result + 9) = *(undefined2 *)((int)this + 0x24);
    *operator_new_result = &PTR_FUN_00577860;
    local_4._0_1_ = 1;
    FUN_004da020(operator_new_result + 10,(int)this + 0x28);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004da020(operator_new_result + 0xf,(int)this + 0x3c);
    *operator_new_result = &PTR_FUN_00577a10;
    ExceptionList = local_c;
    return operator_new_result;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


/* ==== 004dc2e0 FUN_004dc2e0 ==== */

void * __thiscall FUN_004dc2e0(void *this,byte param_2)

{
  FUN_004dc300();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004dc300 FUN_004dc300 ==== */

void __thiscall FUN_004dc300(void *this)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00570a33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00577a10;
  local_4 = 1;
  FUN_004da170((int)this + 0x3c);
  local_4 = local_4 & 0xffffff00;
  FUN_004da170((int)this + 0x28);
  *(undefined ***)this = &PTR_FUN_00577860;
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004dc390 FUN_004dc390 ==== */

void __thiscall FUN_004dc390(void *this,undefined4 param_2)

{
  (**(code **)(*(int *)((int)this + 0x28) + 4))(param_2);
  (**(code **)(*(int *)((int)this + 0x3c) + 4))(param_2);
  return;
}


/* ==== 004dc3f0 FUN_004dc3f0 ==== */

void __thiscall FUN_004dc3f0(void *this,undefined4 this_val)

{
  FUN_004d3e60(this,this_val);
  FUN_004da2d0((void *)((int)this + 0x28),this_val);
  return;
}


/* ==== 004dc410 FUN_004dc410 ==== */

void __thiscall
FUN_004dc410(void *this,undefined4 this_val,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  FUN_004d3e90(this,this_val,param_2,param_3,param_4);
  FUN_004da320((void *)((int)this + 0x28),this_val,param_2,(int)this);
  return;
}


/* ==== 004dc450 FUN_004dc450 ==== */

undefined4 __thiscall FUN_004dc450(void *this,undefined4 param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *this_val;
  undefined4 uVar4;
  void *this_00;
  void *this_01;
  void *this_02;
  int unaff_ESI;
  int *unaff_retaddr;
  char *in_stack_ffffffe4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_00570a48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*(int *)this + 0x30))(&stack0xffffffe4);
  pcVar3 = *(char **)(iVar2 + 4);
  puStack_8 = (undefined1 *)0x0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(this_00,unaff_retaddr,pcVar3);
  this_val = (int *)FUN_004d4cd0(this_01,unaff_retaddr,s___005b725c);
  this_val = (int *)FUN_004da280(this_val,unaff_ESI);
  uVar4 = FUN_004d4cd0(this_02,this_val,in_stack_ffffffe4);
  if (iStack_4 != 0) {
    cVar1 = *(char *)(iStack_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_4 + -1) = cVar1 + -1;
      ExceptionList = param_3;
      return uVar4;
    }
    FUN_0054b339();
  }
  ExceptionList = param_3;
  return uVar4;
}


/* ==== 004dc520 FUN_004dc520 ==== */

void FUN_004dc520(undefined4 this_val)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00570aa2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_004d3f80(this_val);
                    /* WARNING: Could not recover jumptable at 0x004dc546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_004dc6f8)[iVar1 + -0x3b])();
  return;
}


/* ==== 004dc720 FUN_004dc720 ==== */

void __thiscall FUN_004dc720(void *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = *(int **)((int)this + 0x34);
  if (piVar2 != *(int **)((int)this + 0x30)) {
    do {
      piVar2 = piVar2 + -1;
      iVar1 = FUN_004d9a70(*(undefined4 *)(*piVar2 + 0x20));
      iVar3 = iVar3 - iVar1;
      *(int *)(*piVar2 + 0x2c) = iVar3;
    } while (piVar2 != *(int **)((int)this + 0x30));
  }
  return;
}


/* ==== 004dc780 FUN_004dc780 ==== */

int * __thiscall FUN_004dc780(void *this,int *this_val_2)

{
  int *this_val;
  void *this_00;
  void *this_01;
  char *pcVar1;
  
  pcVar1 = s__005b36c4;
  this_val = (int *)FUN_004dbf60(this_val_2,(void *)((int)this + 0x1c));
  this_val = (int *)FUN_004d4cd0(this_00,this_val,pcVar1);
  pcVar1 = *(char **)((int)this + 0x10);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_004d4cd0(this_01,this_val,pcVar1);
  return this_val;
}


