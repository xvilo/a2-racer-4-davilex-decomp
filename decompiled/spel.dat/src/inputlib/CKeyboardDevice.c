/* spel.dat — inputlib/CKeyboardDevice.cpp: 26 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ec7a0 FUN_004ec7a0 ==== */

void __thiscall FUN_004ec7a0(void *this)

{
  int iVar1;
  int this_val;
  
  iVar1 = *(int *)((int)this + 8);
  for (this_val = *(int *)((int)this + 4); this_val != iVar1; this_val = this_val + 0x3c) {
    FUN_004eaa50(this_val);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 004ec7e0 FUN_004ec7e0 ==== */

void __thiscall FUN_004ec7e0(void *this,int this_val,uint param_2,undefined4 param_3)

{
  void *pvVar1;
  int i;
  void *operator_new_result;
  uint uVar2;
  int this_val_2;
  void *pvVar3;
  int this_val_3;
  
  this_val_2 = *(int *)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - this_val_2) / 0x3c) < param_2) {
    i = *(int *)((int)this + 4);
    if ((i == 0) || (uVar2 = (this_val_2 - i) / 0x3c, uVar2 <= param_2)) {
      uVar2 = param_2;
    }
    if (i == 0) {
      this_val_2 = 0;
    }
    else {
      this_val_2 = (this_val_2 - i) / 0x3c;
    }
    this_val_2 = this_val_2 + uVar2;
    i = this_val_2;
    if (this_val_2 < 0) {
      i = 0;
    }
    operator_new_result = operator_new(i * 0x3c);
    pvVar3 = operator_new_result;
    for (i = *(int *)((int)this + 4); uVar2 = param_2, pvVar1 = pvVar3, i != this_val; i = i + 0x3c)
    {
      FUN_004ecf40(pvVar3,i);
      pvVar3 = (void *)((int)pvVar3 + 0x3c);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_004ecf40(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0x3c);
    }
    pvVar3 = (void *)((int)pvVar3 + param_2 * 0x3c);
    i = *(int *)((int)this + 8);
    for (; this_val != i; this_val = this_val + 0x3c) {
      FUN_004ecf40(pvVar3,this_val);
      pvVar3 = (void *)((int)pvVar3 + 0x3c);
    }
    i = *(int *)((int)this + 8);
    for (this_val_3 = *(int *)((int)this + 4); this_val_3 != i; this_val_3 = this_val_3 + 0x3c) {
      FUN_004eaa50(this_val_3);
    }
    FUN_0054b339(*(undefined4 *)((int)this + 4));
    *(void **)((int)this + 0xc) = (void *)((int)operator_new_result + this_val_2 * 0x3c);
    if (*(int *)((int)this + 4) == 0) {
      this_val_2 = 0;
    }
    else {
      this_val_2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x3c;
    }
    *(void **)((int)this + 4) = operator_new_result;
    *(void **)((int)this + 8) = (void *)((int)operator_new_result + (param_2 + this_val_2) * 0x3c);
    return;
  }
  if ((uint)((this_val_2 - this_val) / 0x3c) < param_2) {
    i = param_2 * 0x3c + this_val;
    for (this_val_3 = this_val; this_val_3 != this_val_2; this_val_3 = this_val_3 + 0x3c) {
      FUN_004ecf40(i,this_val_3);
      i = i + 0x3c;
    }
    this_val_2 = *(int *)((int)this + 8);
    for (i = param_2 - (this_val_2 - this_val) / 0x3c; i != 0; i = i + -1) {
      FUN_004ecf40(this_val_2,param_3);
      this_val_2 = this_val_2 + 0x3c;
    }
    this_val_2 = *(int *)((int)this + 8);
    for (; this_val != this_val_2; this_val = this_val + 0x3c) {
      FUN_004ee100(this_val,param_3);
    }
  }
  else {
    if (param_2 == 0) {
      return;
    }
    i = this_val_2;
    for (this_val_3 = this_val_2 + param_2 * -0x3c; this_val_3 != this_val_2;
        this_val_3 = this_val_3 + 0x3c) {
      FUN_004ecf40(i,this_val_3);
      i = i + 0x3c;
    }
    this_val_2 = *(int *)((int)this + 8);
    i = this_val_2 + param_2 * -0x3c;
    while (this_val != i) {
      i = i + -0x3c;
      this_val_2 = this_val_2 + -0x3c;
      FUN_004ee100(this_val_2,i);
    }
    this_val_2 = param_2 * 0x3c + this_val;
    for (; this_val != this_val_2; this_val = this_val + 0x3c) {
      FUN_004ee100(this_val,param_3);
    }
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x3c;
  return;
}


/* ==== 004ecac0 FUN_004ecac0 ==== */

void __thiscall FUN_004ecac0(void *this,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int i;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)((int)this + 8);
  if (param_3 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar5 >> 3)) {
    if ((uint)((int)puVar5 - (int)param_2 >> 3) < param_3) {
      puVar6 = param_2 + param_3 * 2;
      if (param_2 != puVar5) {
        puVar3 = puVar6 + param_3 * -2;
        do {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar3;
            puVar6[1] = puVar3[1];
          }
          puVar3 = puVar3 + 2;
          puVar6 = puVar6 + 2;
        } while (puVar3 != puVar5);
      }
      puVar5 = *(undefined4 **)((int)this + 8);
      for (i = param_3 - ((int)puVar5 - (int)param_2 >> 3); i != 0; i = i + -1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *param_4;
          puVar5[1] = param_4[1];
        }
        puVar5 = puVar5 + 2;
      }
      puVar5 = *(undefined4 **)((int)this + 8);
      for (; param_2 != puVar5; param_2 = param_2 + 2) {
        *param_2 = *param_4;
        param_2[1] = param_4[1];
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 8;
      return;
    }
    if (param_3 != 0) {
      puVar6 = puVar5;
      for (puVar3 = puVar5 + param_3 * -2; puVar3 != puVar5; puVar3 = puVar3 + 2) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar3;
          puVar6[1] = puVar3[1];
        }
        puVar6 = puVar6 + 2;
      }
      puVar5 = *(undefined4 **)((int)this + 8);
      for (puVar6 = *(undefined4 **)((int)this + 8) + param_3 * -2; param_2 != puVar6;
          puVar6 = puVar6 + -2) {
        puVar5[-2] = puVar6[-2];
        puVar5[-1] = puVar6[-1];
        puVar5 = puVar5 + -2;
      }
      puVar5 = param_2 + param_3 * 2;
      for (; param_2 != puVar5; param_2 = param_2 + 2) {
        *param_2 = *param_4;
        param_2[1] = param_4[1];
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 8;
    }
    return;
  }
  i = *(int *)((int)this + 4);
  if ((i == 0) || (uVar4 = (int)puVar5 - i >> 3, uVar4 <= param_3)) {
    uVar4 = param_3;
  }
  if (i == 0) {
    i = 0;
  }
  else {
    i = (int)puVar5 - i >> 3;
  }
  i = i + uVar4;
  iVar2 = i;
  if (i < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 * 8);
  puVar6 = puVar3;
  for (puVar5 = *(undefined4 **)((int)this + 4); uVar4 = param_3, puVar1 = puVar6, puVar5 != param_2
      ; puVar5 = puVar5 + 2) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
    }
    puVar6 = puVar6 + 2;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_4;
      puVar1[1] = param_4[1];
    }
    puVar1 = puVar1 + 2;
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar5 = puVar6 + param_3 * 2;
  if (param_2 != puVar1) {
    param_2 = (undefined4 *)((int)puVar5 + (param_3 * -8 - (int)puVar6) + (int)param_2);
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_2;
        puVar5[1] = param_2[1];
      }
      param_2 = param_2 + 2;
      puVar5 = puVar5 + 2;
    } while (param_2 != puVar1);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(undefined4 **)((int)this + 0xc) = puVar3 + i * 2;
  i = *(int *)((int)this + 4);
  if (i == 0) {
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) = puVar3 + param_3 * 2;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + ((*(int *)((int)this + 8) - i >> 3) + param_3) * 2;
  return;
}


/* ==== 004ecd10 FUN_004ecd10 ==== */

void * __thiscall FUN_004ecd10(void *this)

{
  undefined1 *operator_new_result;
  undefined1 local_1;
  
  *(undefined ***)this = &PTR_LAB_005781ec;
  operator_new_result = operator_new(0x10);
  if (operator_new_result != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)this >> 0x18);
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
    *(undefined1 **)((int)this + 4) = operator_new_result;
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


/* ==== 004ecd50 FUN_004ecd50 ==== */

void __thiscall FUN_004ecd50(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_005781ec;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004ecd90 FUN_004ecd90 ==== */

/* WARNING: Removing unreachable block (ram,0x004ecdfd) */
/* WARNING: Removing unreachable block (ram,0x004ecdff) */

void __thiscall FUN_004ecd90(void *this,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_3 == 0) {
    iVar4 = *(int *)(*(int *)((int)this + 4) + 4);
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 8))();
    *(undefined4 *)(iVar4 + param_2 * 4) = *puVar3;
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)(*(int *)((int)this + 4) + 8) + -4;
  }
  else if (param_3 == 1) {
    iVar1 = *(int *)((int)this + 4);
    iVar4 = *(int *)(iVar1 + 4) + param_2 * 4;
    puVar2 = *(undefined4 **)(iVar1 + 8);
    puVar3 = (undefined4 *)(iVar4 + 4);
    if (puVar3 != puVar2) {
      iVar4 = iVar4 - (int)puVar3;
      do {
        *(undefined4 *)(iVar4 + (int)puVar3) = *puVar3;
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar2);
    }
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -4;
    return;
  }
  return;
}


/* ==== 004ece20 FUN_004ece20 ==== */

void * __thiscall FUN_004ece20(void *this)

{
  undefined1 *operator_new_result;
  undefined1 local_1;
  
  *(undefined ***)this = &PTR_LAB_005781fc;
  operator_new_result = operator_new(0x10);
  if (operator_new_result != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)this >> 0x18);
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
    *(undefined1 **)((int)this + 4) = operator_new_result;
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


/* ==== 004ece60 FUN_004ece60 ==== */

void __thiscall FUN_004ece60(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_005781fc;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004ecea0 FUN_004ecea0 ==== */

int __thiscall FUN_004ecea0(void *this,undefined4 param_2)

{
  FUN_004a5620(*(int *)((int)this + 4),*(undefined4 *)(*(int *)((int)this + 4) + 8),1,param_2);
  return *(int *)(*(int *)((int)this + 4) + 8) + -4;
}


/* ==== 004eced0 FUN_004eced0 ==== */

int __thiscall FUN_004eced0(void *this,int param_2)

{
  int iVar1;
  char *_Str1;
  int __strcmpi_result;
  char *_Str2;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 8))();
  i = 0;
  if (0 < iVar1) {
    do {
      _Str2 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_2 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + i * 4) + 8);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return i;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return -1;
}


/* ==== 004ecf40 FUN_004ecf40 ==== */

/* WARNING: Removing unreachable block (ram,0x004ecfee) */

void FUN_004ecf40(undefined4 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *this_val;
  int iVar3;
  uint j;
  int i;
  undefined4 *this_val_2;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00572679;
  local_c = ExceptionList;
  local_4 = 0;
  uStack_3 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  i = 5;
  this_val_2 = param_1;
  ExceptionList = &local_c;
  do {
    *this_val_2 = &PTR_LAB_00578218;
    this_val = operator_new(0x10);
    if (this_val == (undefined1 *)0x0) {
      this_val = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(this_val + 4) = 0;
      *this_val = (undefined1)param_2;
      *(undefined4 *)(this_val + 8) = 0;
      *(undefined4 *)(this_val + 0xc) = 0;
    }
    this_val_2[1] = this_val;
    FUN_004ed160(this_val,*(undefined4 *)((int)this_val_2 + (param_2 - (int)param_1) + 4));
    this_val_2 = this_val_2 + 2;
    i = i + -1;
    local_4 = 1;
  } while (i != 0);
  this_val_2 = param_1 + 10;
  *(undefined1 *)this_val_2 = *(undefined1 *)(param_2 + 0x28);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = *(uint *)(param_2 + 0x30);
  if (this_val_2 == (undefined4 *)(param_2 + 0x28)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val_2);
    iVar3 = param_1[0xc] - uVar1;
    i = -1;
    if (iVar3 != -1) {
      i = iVar3;
    }
    if (i != 0) {
      FUN_005580e0(uVar1 + param_1[0xb],uVar1 + param_1[0xb] + i,iVar3 - i);
      iVar3 = param_1[0xc];
      cVar2 = FUN_00402a00(this_val_2,iVar3 - i,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val_2,iVar3 - i);
      }
    }
    FUN_0040f800(this_val_2,0,0);
  }
  else {
    if (uVar1 != 0) {
      this_val = *(undefined1 **)(param_2 + 0x2c);
      if (this_val == (undefined1 *)0x0) {
        this_val = &DAT_0057629c;
      }
      if ((byte)this_val[-1] < 0xfe) {
        FUN_004028f0(this_val_2,1);
        this_val = *(undefined1 **)(param_2 + 0x2c);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        param_1[0xb] = this_val;
        param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
        param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
        this_val[-1] = this_val[-1] + '\x01';
        goto LAB_004ed0cc;
      }
    }
    cVar2 = FUN_00402a00(this_val_2,uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_2 + 0x2c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      puVar5 = (undefined4 *)param_1[0xb];
      for (j = uVar1 >> 2; j != 0; j = j - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (j = uVar1 & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_004029e0(this_val_2,uVar1);
    }
  }
LAB_004ed0cc:
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  ExceptionList = local_c;
  return;
}


/* ==== 004ed120 FUN_004ed120 ==== */

void * __thiscall FUN_004ed120(void *this,byte param_2)

{
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004ed160 FUN_004ed160 ==== */

void * __thiscall FUN_004ed160(void *this,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (this != param_2) {
    puVar1 = *(undefined4 **)((int)param_2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)((int)param_2 + 8) - (int)puVar1 >> 2;
    }
    puVar5 = *(undefined4 **)((int)this + 4);
    if (puVar5 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)((int)this + 8) - (int)puVar5 >> 2;
    }
    if (uVar6 <= uVar3) {
      puVar2 = *(undefined4 **)((int)param_2 + 8);
      for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      if (*(int *)((int)param_2 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return this;
      }
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) +
           (*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 2) * 4;
      return this;
    }
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)((int)param_2 + 8) - (int)puVar1 >> 2;
    }
    if (puVar5 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)((int)this + 0xc) - (int)puVar5 >> 2;
    }
    if (uVar6 <= uVar3) {
      if (puVar5 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)puVar5 >> 2;
      }
      puVar2 = puVar1 + iVar4;
      for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = *(undefined4 **)((int)param_2 + 8);
      puVar5 = *(undefined4 **)((int)this + 8);
      for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar5 = puVar5 + 1;
      }
      if (*(int *)((int)param_2 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return this;
      }
      *(int *)((int)this + 8) =
           *(int *)((int)this + 4) +
           (*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 2) * 4;
      return this;
    }
    FUN_0054b339(puVar5);
    if (*(int *)((int)param_2 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 2;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    puVar2 = operator_new(iVar4 * 4);
    *(undefined4 **)((int)this + 4) = puVar2;
    puVar1 = *(undefined4 **)((int)param_2 + 8);
    for (puVar5 = *(undefined4 **)((int)param_2 + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2;
  }
  return this;
}


/* ==== 004ed2f0 FUN_004ed2f0 ==== */

void * __thiscall FUN_004ed2f0(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f1a90();
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00578228;
  FUN_0051ed40();
  FUN_004ed3b0(this);
  ExceptionList = local_c;
  return this;
}


/* ==== 004ed340 FUN_004ed340 ==== */

void * __thiscall FUN_004ed340(void *this,byte param_2)

{
  FUN_004ed360();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004ed360 FUN_004ed360 ==== */

void __thiscall FUN_004ed360(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005726b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00578228;
  local_4 = 0;
  FUN_0051ed40();
  local_4 = 0xffffffff;
  FUN_004f1b00(this);
  ExceptionList = local_c;
  return;
}


/* ==== 004ed3b0 FUN_004ed3b0 ==== */

void __thiscall FUN_004ed3b0(void *this)

{
  char cVar1;
  uint j;
  uint k;
  char *pcVar2;
  char *pcVar3;
  undefined **local_28;
  int i;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005726d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xd8) = 0x6a;
  i = 0;
  local_28 = &PTR_s_CM_KEYB_ESC_005b7a1c;
  do {
    j = 0xffffffff;
    pcVar2 = *local_28;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    pcVar3 = pcVar2;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(local_1c,j,1);
    if (cVar1 != '\0') {
      pcVar3 = local_18;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (k = j & 3; k != 0; k = k - 1) {
        *pcVar3 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      }
      local_18[j] = '\0';
      local_14 = j;
    }
    local_4 = 0;
    FUN_004f1050(this,local_1c);
    local_4 = 0xffffffff;
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
    i = i + 1;
    local_28 = local_28 + 3;
    if (*(int *)((int)this + 0xd8) <= i) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


/* ==== 004ed4d0 FUN_004ed4d0 ==== */

void __thiscall FUN_004ed4d0(void *this)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iStack_90;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [28];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00572713;
  pvStack_c = ExceptionList;
  iStack_90 = 0x4ed4f1;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_004f1d30();
  iStack_90 = (int)this + 0xdc;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x100);
  if (iVar2 == -0x7ff8ffe2) {
    piVar1 = (int *)FUN_004f1d30(this);
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (iVar2 == 0) {
      piVar1 = (int *)FUN_004f1d30(this);
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x100,(int)this + 0xdc);
      if (iVar2 != 0) {
        puVar3 = (undefined1 *)
                 FUN_0049df90((undefined1 *)&iStack_90,s_Input_exception_in___s___d__005b77e4);
        uStack_10 = 0;
        uVar4 = FUN_004796b0(auStack_80,puVar3,s_DIError___Failed_to_get_keyboard_005b84f8);
        uStack_10 = CONCAT31(uStack_10._1_3_,1);
        FUN_004edac0(auStack_50,uVar4);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_50,&DAT_005872d0);
      }
    }
  }
  else if (iVar2 != 0) {
    puVar3 = (undefined1 *)FUN_0049df90(auStack_70,s_Input_exception_in___s___d__005b77e4);
    uStack_10 = 2;
    uVar4 = FUN_004796b0(auStack_60,puVar3,s_DIError___Failed_to_get_keyboard_005b84f8);
    uStack_10 = CONCAT31(uStack_10._1_3_,3);
    FUN_004edac0(auStack_34,uVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_34,&DAT_005872d0);
  }
  ExceptionList = pvStack_18;
  return;
}


/* ==== 004ed610 FUN_004ed610 ==== */

void __thiscall FUN_004ed610(void *this)

{
  byte bVar1;
  char cVar2;
  uint j;
  uint k;
  char *pcVar3;
  char *pcVar4;
  undefined **local_2c;
  int i;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f11b0();
  *(undefined4 *)((int)this + 0x8c) = 0;
  FUN_004ed4d0(this);
  i = 0;
  if (0 < *(int *)((int)this + 0xd8)) {
    local_2c = &PTR_s_CM_KEYB_ESC_005b7a1c;
    do {
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
      bVar1 = *(byte *)(*(byte *)(local_2c + -1) + 0xdc + (int)this);
      pcVar3 = *local_2c;
      j = 0xffffffff;
      pcVar4 = pcVar3;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      j = ~j - 1;
      cVar2 = FUN_00402a00(local_1c,j,1);
      if (cVar2 != '\0') {
        pcVar4 = local_18;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar4 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_18[j] = '\0';
        local_14 = j;
      }
      local_4 = 0;
      FUN_004f0df0(this,local_1c,bVar1 >> 7);
      local_4 = 0xffffffff;
      if (local_18 != (char *)0x0) {
        cVar2 = local_18[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339(local_18 + -1);
        }
        else {
          local_18[-1] = cVar2 + -1;
        }
      }
      i = i + 1;
      local_2c = local_2c + 3;
    } while (i < *(int *)((int)this + 0xd8));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004ed8c0 FUN_004ed8c0 ==== */

int __thiscall FUN_004ed8c0(void *this,int param_2)

{
  char *_Str1;
  int __strcmpi_result;
  int i;
  undefined **ppuVar1;
  
  i = 0;
  if (0 < *(int *)((int)this + 0xd8)) {
    ppuVar1 = &PTR_s_CM_KEYB_ESC_005b7a1c;
    do {
      _Str1 = *(char **)(param_2 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,*ppuVar1);
      if (__strcmpi_result == 0) {
        return i;
      }
      i = i + 1;
      ppuVar1 = ppuVar1 + 3;
    } while (i < *(int *)((int)this + 0xd8));
  }
  return -1;
}


/* ==== 004ed920 FUN_004ed920 ==== */

undefined1 __thiscall FUN_004ed920(void *this,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572788;
  local_c = ExceptionList;
  iVar2 = *(int *)(*(int *)((int)this + 8) + 4) + *(int *)((int)this + param_2 * 4 + 0xc) * 0x28;
  ExceptionList = &local_c;
  iVar1 = FUN_004ed8c0(this,iVar2);
  if (iVar1 == -1) {
    iVar2 = FUN_0049df90(local_58,s_Key_named__s_not_found_in_keyboa_005b85b0);
    local_4 = 0;
    puVar3 = (undefined1 *)FUN_0049df90(local_48,s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 1;
    uVar4 = FUN_0047c9a0(local_38,puVar3,iVar2);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(local_28,uVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  if (param_3 != 0) {
    *(bool *)param_3 = 0.0 < *(float *)(iVar2 + 0x14);
  }
  ExceptionList = local_c;
  return (&DAT_005b7a20)[iVar1 * 0xc];
}


/* ==== 004eda50 FUN_004eda50 ==== */

void FUN_004eda50(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004eda60 FUN_004eda60 ==== */

void FUN_004eda60(void)

{
  FUN_005584e0(&LAB_004eda70);
  return;
}


/* ==== 004eda90 FUN_004eda90 ==== */

void FUN_004eda90(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004edaa0 FUN_004edaa0 ==== */

void FUN_004edaa0(void)

{
  FUN_005584e0(&LAB_004edab0);
  return;
}


/* ==== 004edac0 FUN_004edac0 ==== */

/* WARNING: Removing unreachable block (ram,0x004edb1c) */

void * __thiscall FUN_004edac0(void *this,undefined1 *param_2)

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
  puStack_8 = &LAB_005727b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558826();
  this_val = (undefined1 *)((int)this + 0xc);
  *this_val = param_2._0_1_;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)this = &PTR_FUN_00578210;
  local_4 = 1;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (*(uint *)((int)this + 0x14) < uVar1) {
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
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar6 = *(int *)((int)this + 0x10);
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_0054b339((char *)(iVar6 + -1));
          }
          else {
            *(char *)(iVar6 + -1) = cVar2 + -1;
          }
        }
        *(undefined4 *)((int)this + 0x10) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
        *(undefined4 *)((int)this + 0x18) = 0;
        this_val = *(undefined1 **)(param_2 + 4);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = this_val;
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0xc);
        this_val[-1] = this_val[-1] + '\x01';
        ExceptionList = local_c;
        return this;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 4);
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
      FUN_004029e0(this_val,uVar1);
    }
  }
  ExceptionList = local_c;
  return this;
}


