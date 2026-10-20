/* spel.dat — sound_lib/csndsrc.cpp: 109 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049b5f0 FUN_0049b5f0 ==== */

undefined1 __thiscall FUN_0049b5f0(void *this)

{
  return *(undefined1 *)((int)this + 0x3c);
}


/* ==== 0049b640 FUN_0049b640 ==== */

void * __thiscall FUN_0049b640(void *this,byte param_2)

{
  FUN_0049b3f0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049b660 FUN_0049b660 ==== */

void * __thiscall FUN_0049b660(void *this)

{
  FUN_00498a90();
  *(undefined ***)this = &PTR_FUN_00577158;
  return this;
}


/* ==== 0049b680 FUN_0049b680 ==== */

void * __thiscall
FUN_0049b680(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e8d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498ad0(this,this_val,this_val_2,param_3,param_4,(char)param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *(undefined ***)this = &PTR_FUN_00577158;
  *(undefined4 *)((int)this + 0x3c) = param_5;
  FUN_00499390(this,&param_6);
  ExceptionList = local_c;
  return this;
}


/* ==== 0049b700 FUN_0049b700 ==== */

void * __thiscall
FUN_0049b700(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e8ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498b70(this,this_val,this_val_2,param_3,param_4,(char)param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *(undefined ***)this = &PTR_FUN_00577158;
  *(undefined4 *)((int)this + 0x3c) = param_5;
  FUN_00499390(this,&param_6);
  ExceptionList = local_c;
  return this;
}


/* ==== 0049b7e0 FUN_0049b7e0 ==== */

void __thiscall FUN_0049b7e0(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e8fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00577158;
  local_4 = 0;
  FUN_00498ce0(this,this);
  local_4 = 0xffffffff;
  FUN_00498c10(this);
  ExceptionList = local_c;
  return;
}


/* ==== 0049b880 FUN_0049b880 ==== */

void * __thiscall FUN_0049b880(void *this,byte param_2)

{
  FUN_0049b7e0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049b8a0 FUN_0049b8a0 ==== */

void * __thiscall FUN_0049b8a0(void *this)

{
  FUN_00498a90();
  *(undefined ***)this = &PTR_FUN_00577164;
  return this;
}


/* ==== 0049b8c0 FUN_0049b8c0 ==== */

void * __thiscall
FUN_0049b8c0(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498ad0(this,this_val,this_val_2,param_3,param_4,(char)param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *(undefined ***)this = &PTR_FUN_00577164;
  *(undefined4 *)((int)this + 0x3c) = param_5;
  FUN_00499390(this,&param_6);
  ExceptionList = local_c;
  return this;
}


/* ==== 0049b940 FUN_0049b940 ==== */

void * __thiscall
FUN_0049b940(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e92a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498b70(this,this_val,this_val_2,param_3,param_4,(char)param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *(undefined ***)this = &PTR_FUN_00577164;
  *(undefined4 *)((int)this + 0x3c) = param_5;
  FUN_00499390(this,&param_6);
  ExceptionList = local_c;
  return this;
}


/* ==== 0049ba20 FUN_0049ba20 ==== */

void __thiscall FUN_0049ba20(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e93c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00577164;
  local_4 = 0;
  FUN_00498ce0(this,this);
  local_4 = 0xffffffff;
  FUN_00498c10(this);
  ExceptionList = local_c;
  return;
}


/* ==== 0049ba70 FUN_0049ba70 ==== */

undefined4 __thiscall FUN_0049ba70(void *this)

{
  return *(undefined4 *)((int)this + 0x3c);
}


/* ==== 0049bac0 FUN_0049bac0 ==== */

void * __thiscall FUN_0049bac0(void *this,byte param_2)

{
  FUN_0049ba20();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049bae0 FUN_0049bae0 ==== */

void * __thiscall FUN_0049bae0(void *this)

{
  int iVar1;
  char cVar2;
  undefined1 *operator_new_result;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_119;
  char local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  
  puStack_8 = &LAB_0056e96c;
  pvStack_c = ExceptionList;
  this_val = (undefined1 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  *this_val = local_119;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  local_4 = 0;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_00577174;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_119;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x1c) = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_FUN_00577170;
  FUN_0056914e(local_110,0x104);
  i = 0xffffffff;
  pcVar3 = local_110;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  *(undefined4 *)((int)this + 0x14) = 0;
  cVar2 = FUN_00402a00(this_val,i,1);
  if (cVar2 != '\0') {
    pcVar3 = local_110;
    pcVar4 = *(char **)((int)this + 8);
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
    *(uint *)((int)this + 0xc) = i;
    *(undefined1 *)(*(int *)((int)this + 8) + i) = 0;
  }
  if (-*(int *)((int)this + 0xc) - 1U < 2) {
    FUN_0054b1b4();
  }
  i = *(int *)((int)this + 0xc) + 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar1 = *(int *)((int)this + 8);
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (i == 0) {
      if (iVar1 == 0) {
        ExceptionList = pvStack_c;
        return this;
      }
      FUN_004029e0(this_val,0);
      ExceptionList = pvStack_c;
      return this;
    }
    if (i <= *(uint *)((int)this + 0x10)) goto LAB_0049bc1b;
  }
  else if (i == 0) {
    *(char *)(iVar1 + -1) = cVar2 + -1;
    FUN_004028f0(this_val,0);
    ExceptionList = pvStack_c;
    return this;
  }
  FUN_00402b20(this_val,i);
LAB_0049bc1b:
  *(undefined1 *)(*(int *)((int)this + 8) + *(int *)((int)this + 0xc)) = 0x5c;
  *(uint *)((int)this + 0xc) = i;
  *(undefined1 *)(*(int *)((int)this + 8) + i) = 0;
  ExceptionList = pvStack_c;
  return this;
}


/* ==== 0049bc50 FUN_0049bc50 ==== */

void __thiscall FUN_0049bc50(void *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int i;
  int iVar5;
  
  i = 0;
  *(undefined ***)this = &PTR_FUN_00577170;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      iVar2 = *(int *)((int)this + 0x1c);
      puVar3 = *(undefined4 **)(iVar2 + 8);
      puVar4 = (undefined4 *)(*(int *)(iVar2 + 4) + 4);
      if (puVar4 != puVar3) {
        iVar5 = *(int *)(iVar2 + 4) - (int)puVar4;
        do {
          *(undefined4 *)(iVar5 + (int)puVar4) = *puVar4;
          puVar4 = puVar4 + 1;
        } while (puVar4 != puVar3);
      }
      i = i + 1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -4;
    } while (i < *(int *)((int)this + 0x14));
  }
  i = *(int *)((int)this + 0x1c);
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_00577174;
  if (i != 0) {
    FUN_0054b339(*(undefined4 *)(i + 4));
    *(undefined4 *)(i + 4) = 0;
    *(undefined4 *)(i + 8) = 0;
    *(undefined4 *)(i + 0xc) = 0;
    FUN_0054b339(i);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  i = *(int *)((int)this + 8);
  if (i != 0) {
    cVar1 = *(char *)(i + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(i + -1) = cVar1 + -1;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      return;
    }
    FUN_0054b339((char *)(i + -1));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 0049bd10 FUN_0049bd10 ==== */

undefined4 FUN_0049bd10(int param_1)

{
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x14))) {
    return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x1c) + 4) + param_1 * 4);
  }
  return 0;
}


/* ==== 0049bd30 FUN_0049bd30 ==== */

void __thiscall FUN_0049bd30(void *this,undefined4 this_val)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int i;
  
  uVar2 = this_val;
  bVar1 = false;
  i = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar3 = *(int **)(*(int *)((int)this + 0x1c) + 4);
    do {
      if (*piVar3 == 0) {
        bVar1 = true;
        break;
      }
      i = i + 1;
      piVar3 = piVar3 + 1;
    } while (i < *(int *)((int)this + 0x14));
  }
  FUN_00499380(this_val,this);
  if (bVar1) {
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + i * 4) = uVar2;
    return;
  }
  this_val = uVar2;
  FUN_004a5620(*(int *)((int)this + 0x1c),*(undefined4 *)(*(int *)((int)this + 0x1c) + 8),1,
               &this_val);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return;
}


/* ==== 0049bda0 FUN_0049bda0 ==== */

void __thiscall FUN_0049bda0(void *this,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int i;
  
  i = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar1 = *(int **)(*(int *)((int)this + 0x1c) + 4);
    piVar3 = piVar1;
    while (*piVar3 != param_2) {
      i = i + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)((int)this + 0x14) <= i) {
        return;
      }
    }
    puVar2 = (undefined4 *)piVar1[i];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + i * 4) = 0;
  }
  return;
}


/* ==== 0049bdf0 FUN_0049bdf0 ==== */

void __thiscall FUN_0049bdf0(void *this,int param_2)

{
  int *piVar1;
  int i;
  int *piVar2;
  
  i = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar1 = *(int **)(*(int *)((int)this + 0x1c) + 4);
    piVar2 = piVar1;
    while (*piVar2 != param_2) {
      i = i + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)((int)this + 0x14) <= i) {
        return;
      }
    }
    piVar1[i] = 0;
  }
  return;
}


/* ==== 0049be30 FUN_0049be30 ==== */

void __thiscall FUN_0049be30(void *this,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  int this_val;
  
  this_val = (int)this + 4;
  FUN_004093c0(this_val,param_2,0,0xffffffff);
  if (*(int *)(param_2 + 4) == 0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)(*(int *)(param_2 + 8) + -1 + *(int *)(param_2 + 4));
  }
  if (*pcVar3 == '\\') {
    return;
  }
  if (-*(int *)((int)this + 0xc) - 1U < 2) {
    FUN_0054b1b4();
  }
  uVar4 = *(int *)((int)this + 0xc) + 1;
  if (0xfffffffd < uVar4) {
    FUN_0054b1b4();
  }
  puVar2 = *(undefined1 **)((int)this + 8);
  if (((puVar2 == (undefined1 *)0x0) || (cVar1 = puVar2[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      *(undefined4 *)((int)this + 0xc) = 0;
      *puVar2 = 0;
      return;
    }
    if (uVar4 <= *(uint *)((int)this + 0x10)) goto LAB_0049bed2;
  }
  else if (uVar4 == 0) {
    puVar2[-1] = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return;
  }
  FUN_00402b20(this_val,uVar4);
LAB_0049bed2:
  *(undefined1 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8)) = 0x5c;
  *(uint *)((int)this + 0xc) = uVar4;
  *(undefined1 *)(uVar4 + *(int *)((int)this + 8)) = 0;
  return;
}


/* ==== 0049bef0 FUN_0049bef0 ==== */

int __thiscall FUN_0049bef0(void *this)

{
  return (int)this + 4;
}


/* ==== 0049bf00 FUN_0049bf00 ==== */

undefined4 __thiscall FUN_0049bf00(void *this)

{
  return *(undefined4 *)((int)this + 0x14);
}


/* ==== 0049bf10 FUN_0049bf10 ==== */

void __thiscall FUN_0049bf10(void *this)

{
  char cVar1;
  int i;
  
  i = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      if (*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + i * 4) != 0) {
        cVar1 = FUN_004993b0();
        if (cVar1 != '\0') {
          FUN_00499580(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + i * 4),
                       (int)this + 4);
        }
      }
      i = i + 1;
    } while (i < *(int *)((int)this + 0x14));
  }
  return;
}


/* ==== 0049bf50 FUN_0049bf50 ==== */

void __thiscall FUN_0049bf50(void *this)

{
  int i;
  int this_val;
  
  i = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      this_val = *(int *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + i * 4);
      if (this_val != 0) {
        FUN_00499960(this_val,(int)this + 4);
      }
      i = i + 1;
    } while (i < *(int *)((int)this + 0x14));
  }
  return;
}


/* ==== 0049bfb0 FUN_0049bfb0 ==== */

void * __thiscall FUN_0049bfb0(void *this,byte param_2)

{
  FUN_0049bc50();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049bfd0 FUN_0049bfd0 ==== */

void __thiscall FUN_0049bfd0(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00577174;
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


/* ==== 0049c040 FUN_0049c040 ==== */

/* WARNING: Removing unreachable block (ram,0x0049c0b3) */

void * __thiscall
FUN_0049c040(void *this,void *this_val,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,uint param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint i;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined4 *this_val_3;
  
  puStack_8 = &LAB_0056e99b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00498ad0(this,this_val,this_val_2,param_3,param_4,(char)param_9);
  uVar1 = param_7;
  puVar4 = param_6;
  this_val_3 = (undefined4 *)((int)this + 0x3c);
  *(undefined1 *)this_val_3 = (undefined1)param_9;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)this = &PTR_FUN_00577184;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (this_val_3 == &param_5) {
    FUN_0040f800(this_val_3,param_7,0xffffffff);
    FUN_0040f800(this_val_3,0,0);
    puVar4 = param_6;
  }
  else {
    if (param_7 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_6 != (undefined4 *)0x0) {
        puVar3 = param_6;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(this_val_3,1);
        this_val_3 = (undefined4 *)&DAT_0057629c;
        if (puVar4 != (undefined4 *)0x0) {
          this_val_3 = puVar4;
        }
        *(undefined4 **)((int)this + 0x40) = this_val_3;
        *(uint *)((int)this + 0x44) = param_7;
        *(undefined4 *)((int)this + 0x48) = param_8;
        *(char *)((int)this_val_3 + -1) = *(char *)((int)this_val_3 + -1) + '\x01';
        goto LAB_0049c164;
      }
    }
    cVar2 = FUN_00402a00(this_val_3,param_7,1);
    if (cVar2 != '\0') {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      this_val_3 = *(undefined4 **)((int)this + 0x40);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *this_val_3 = *puVar4;
        puVar4 = puVar4 + 1;
        this_val_3 = this_val_3 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)this_val_3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        this_val_3 = (undefined4 *)((int)this_val_3 + 1);
      }
      *(uint *)((int)this + 0x44) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 0x40) + uVar1) = 0;
      puVar4 = param_6;
    }
  }
LAB_0049c164:
  param_9 = param_9 & 0xffffff00;
  FUN_00499390(this,&param_9);
  if (puVar4 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((int)puVar4 + -1);
    }
    else {
      *(char *)((int)puVar4 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 0049c1b0 FUN_0049c1b0 ==== */

/* WARNING: Removing unreachable block (ram,0x0049c223) */

void * __thiscall
FUN_0049c1b0(void *this,void *this_val_3,int this_val_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,uint param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint i;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined4 *this_val;
  
  puStack_8 = &LAB_0056e9c0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00498b70(this,this_val_3,this_val_2,param_3,param_4,(char)param_9);
  uVar1 = param_7;
  puVar4 = param_6;
  this_val = (undefined4 *)((int)this + 0x3c);
  *(undefined1 *)this_val = (undefined1)param_9;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)this = &PTR_FUN_00577184;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (this_val == &param_5) {
    FUN_0040f800(this_val,param_7,0xffffffff);
    FUN_0040f800(this_val,0,0);
    puVar4 = param_6;
  }
  else {
    if (param_7 != 0) {
      puVar3 = (undefined4 *)&DAT_0057629c;
      if (param_6 != (undefined4 *)0x0) {
        puVar3 = param_6;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = (undefined4 *)&DAT_0057629c;
        if (puVar4 != (undefined4 *)0x0) {
          this_val = puVar4;
        }
        *(undefined4 **)((int)this + 0x40) = this_val;
        *(uint *)((int)this + 0x44) = param_7;
        *(undefined4 *)((int)this + 0x48) = param_8;
        *(char *)((int)this_val + -1) = *(char *)((int)this_val + -1) + '\x01';
        goto LAB_0049c2d4;
      }
    }
    cVar2 = FUN_00402a00(this_val,param_7,1);
    if (cVar2 != '\0') {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_0057629c;
      }
      this_val = *(undefined4 **)((int)this + 0x40);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *this_val = *puVar4;
        puVar4 = puVar4 + 1;
        this_val = this_val + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)this_val = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        this_val = (undefined4 *)((int)this_val + 1);
      }
      *(uint *)((int)this + 0x44) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 0x40) + uVar1) = 0;
      puVar4 = param_6;
    }
  }
LAB_0049c2d4:
  param_9 = param_9 & 0xffffff00;
  FUN_00499390(this,&param_9);
  if (puVar4 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((int)puVar4 + -1);
    }
    else {
      *(char *)((int)puVar4 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 0049c5b0 FUN_0049c5b0 ==== */

void __thiscall FUN_0049c5b0(void *this)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056e9dd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00577184;
  local_4 = 1;
  FUN_00498ce0(this,this);
  iVar2 = *(int *)((int)this + 0x40);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4 = 0xffffffff;
  FUN_00498c10(this);
  ExceptionList = local_c;
  return;
}


/* ==== 0049c640 FUN_0049c640 ==== */

/* WARNING: Removing unreachable block (ram,0x0049c670) */

undefined1 * __thiscall FUN_0049c640(void *this,undefined1 *this_val)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *this_val = *(undefined1 *)((int)this + 0x3c);
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  uVar1 = *(uint *)((int)this + 0x44);
  if (this_val == (undefined1 *)((int)this + 0x3c)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)(this_val + 8) - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + *(int *)(this_val + 4),uVar1 + *(int *)(this_val + 4) + iVar5,
                   iVar3 - iVar5);
      iVar3 = *(int *)(this_val + 8);
      cVar2 = FUN_00402a00(this_val,iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar3 - iVar5);
      }
    }
    FUN_00402c30(this_val);
    return this_val;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)((int)this + 0x40);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      FUN_004028f0(this_val,1);
      puVar4 = *(undefined1 **)((int)this + 0x40);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(this_val + 4) = puVar4;
      *(undefined4 *)(this_val + 8) = *(undefined4 *)((int)this + 0x44);
      *(undefined4 *)(this_val + 0xc) = *(undefined4 *)((int)this + 0x48);
      puVar4[-1] = puVar4[-1] + '\x01';
      return this_val;
    }
  }
  cVar2 = FUN_00402a00(this_val,uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = *(undefined4 **)((int)this + 0x40);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&DAT_0057629c;
    }
    puVar7 = *(undefined4 **)(this_val + 4);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(uint *)(this_val + 8) = uVar1;
    *(undefined1 *)(uVar1 + *(int *)(this_val + 4)) = 0;
  }
  return this_val;
}


/* ==== 0049c8f0 FUN_0049c8f0 ==== */

void * __thiscall FUN_0049c8f0(void *this,byte param_2)

{
  FUN_0049c5b0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049c910 FUN_0049c910 ==== */

void __thiscall FUN_0049c910(void *this)

{
  *(undefined ***)this = &PTR_FUN_00576f8c;
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 0049c920 FUN_0049c920 ==== */

void __thiscall FUN_0049c920(void *this)

{
  *(undefined ***)this = &PTR_FUN_00576f8c;
  return;
}


/* ==== 0049c930 FUN_0049c930 ==== */

void __thiscall FUN_0049c930(void *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_00448470(0);
  *(undefined4 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  return;
}


/* ==== 0049c950 FUN_0049c950 ==== */

void __thiscall FUN_0049c950(void *this,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_0049c9b0();
  *param_2 = *(undefined4 *)((int)this + 0xc);
  param_2[1] = *(undefined4 *)((int)this + 0x10);
  param_2[2] = *(undefined4 *)((int)this + 0x14);
  *param_3 = *(undefined4 *)((int)this + 0x18);
  param_3[1] = *(undefined4 *)((int)this + 0x1c);
  param_3[2] = *(undefined4 *)((int)this + 0x20);
  *param_4 = *(undefined4 *)((int)this + 0x24);
  param_4[1] = *(undefined4 *)((int)this + 0x28);
  param_4[2] = *(undefined4 *)((int)this + 0x2c);
  return;
}


/* ==== 0049c9b0 FUN_0049c9b0 ==== */

void __thiscall FUN_0049c9b0(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (*(int *)((int)this + 8) == 0)) {
    if (iVar1 == 1) {
      FUN_0049cc40();
      return;
    }
    if (iVar1 == 2) {
      FUN_0049cac0();
      return;
    }
    if (iVar1 == 3) {
      FUN_0049cb30();
      return;
    }
  }
  return;
}


/* ==== 0049c9e0 FUN_0049c9e0 ==== */

void __thiscall FUN_0049c9e0(void *this,undefined4 *param_2)

{
  FUN_0049c9b0();
  *param_2 = *(undefined4 *)((int)this + 0xc);
  param_2[1] = *(undefined4 *)((int)this + 0x10);
  param_2[2] = *(undefined4 *)((int)this + 0x14);
  return;
}


/* ==== 0049ca10 FUN_0049ca10 ==== */

void __thiscall FUN_0049ca10(void *this,undefined4 *param_2)

{
  FUN_0049c9b0();
  *param_2 = *(undefined4 *)((int)this + 0x18);
  param_2[1] = *(undefined4 *)((int)this + 0x1c);
  param_2[2] = *(undefined4 *)((int)this + 0x20);
  return;
}


/* ==== 0049ca40 FUN_0049ca40 ==== */

void __thiscall FUN_0049ca40(void *this,undefined4 *param_2)

{
  FUN_0049c9b0();
  *param_2 = *(undefined4 *)((int)this + 0x24);
  param_2[1] = *(undefined4 *)((int)this + 0x28);
  param_2[2] = *(undefined4 *)((int)this + 0x2c);
  return;
}


/* ==== 0049ca80 FUN_0049ca80 ==== */

undefined4 __thiscall FUN_0049ca80(void *this)

{
  return *(undefined4 *)((int)this + 8);
}


/* ==== 0049ca90 FUN_0049ca90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049ca90(void *this)

{
  float fVar1;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar1 = _DAT_005b23b8 * 0.0027777778;
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x38) = fVar1 * 160.0;
  return;
}


/* ==== 0049cac0 FUN_0049cac0 ==== */

void __thiscall FUN_0049cac0(void *this)

{
  float fVar1;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((0.0 < (float)DAT_006fba64) &&
     (fVar1 = ((float)DAT_006fba64 / 200.0) * *(float *)((int)this + 0x38),
     *(float *)((int)this + 0x20) = fVar1, *(float *)((int)this + 0x38) <= fVar1)) {
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x38);
    return;
  }
  return;
}


/* ==== 0049cb00 FUN_0049cb00 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049cb00(void *this)

{
  float fVar1;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar1 = _DAT_005b23b8 * 0.5;
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x3c) = fVar1;
  return;
}


/* ==== 0049cb30 FUN_0049cb30 ==== */

void __thiscall FUN_0049cb30(void *this)

{
  *(undefined4 *)((int)this + 0x20) = 0;
  if (0.0 < (float)DAT_006fba74) {
    *(float *)((int)this + 0x20) = ((float)DAT_006fba74 / 100.0) * *(float *)((int)this + 0x3c);
    return;
  }
  return;
}


/* ==== 0049cb60 FUN_0049cb60 ==== */

void __thiscall FUN_0049cb60(void *this,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  
  *(float *)((int)this + 0x40) = *param_3;
  *(float *)((int)this + 0x44) = param_3[1];
  *(float *)((int)this + 0x48) = param_3[2];
  pfVar1 = (float *)((int)this + 0x58);
  *pfVar1 = *param_2;
  *(float *)((int)this + 0x5c) = param_2[1];
  fVar2 = param_2[2];
  *(undefined4 *)((int)this + 4) = 1;
  *(float *)((int)this + 0x60) = fVar2;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(float *)((int)this + 0xc) = *pfVar1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x5c);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x60);
  *(float *)((int)this + 0x68) = *(float *)((int)this + 0x40) - *pfVar1;
  *(float *)((int)this + 0x6c) = *(float *)((int)this + 0x44) - *(float *)((int)this + 0x5c);
  *(float *)((int)this + 0x70) = *(float *)((int)this + 0x48) - *(float *)((int)this + 0x60);
  if (0.0 < *param_4) {
    *(float *)((int)this + 0x74) = *param_4;
    return;
  }
  *(undefined4 *)((int)this + 0x74) = 0x3dcccccd;
  return;
}


/* ==== 0049cc40 FUN_0049cc40 ==== */

void __thiscall FUN_0049cc40(void *this)

{
  float fVar1;
  uint __ftol_result;
  float10 fVar2;
  
  __ftol_result = __ftol();
  fVar1 = *(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4);
  *(float *)((int)this + 0xc) = fVar1 * *(float *)((int)this + 0x68) + *(float *)((int)this + 0x58);
  *(float *)((int)this + 0x10) = fVar1 * *(float *)((int)this + 0x6c) + *(float *)((int)this + 0x5c)
  ;
  *(float *)((int)this + 0x14) = fVar1 * *(float *)((int)this + 0x70) + *(float *)((int)this + 0x60)
  ;
  fVar2 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar2 = fVar2 + (float10)*(float *)((int)this + 100);
  *(float *)((int)this + 100) = (float)fVar2;
  if ((float10)*(float *)((int)this + 0x74) <= fVar2) {
    *(undefined4 *)((int)this + 8) = 1;
  }
  return;
}


/* ==== 0049cd20 FUN_0049cd20 ==== */

void FUN_0049cd20(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0049cd30 FUN_0049cd30 ==== */

void FUN_0049cd30(void)

{
  FUN_005584e0(&LAB_0049cd40);
  return;
}


/* ==== 0049cd60 FUN_0049cd60 ==== */

void FUN_0049cd60(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0049cd70 FUN_0049cd70 ==== */

void FUN_0049cd70(void)

{
  FUN_005584e0(&LAB_0049cd80);
  return;
}


/* ==== 0049cd90 FUN_0049cd90 ==== */

void * __thiscall FUN_0049cd90(void *this)

{
  char cVar1;
  int iVar2;
  uint i;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  
  puStack_8 = &LAB_0056ea21;
  pvStack_c = ExceptionList;
  this_val = (undefined1 *)((int)this + 8);
  ExceptionList = &pvStack_c;
  *this_val = local_15;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = local_15;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x28) = local_15;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  i = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_0057719c;
  pcVar5 = (char *)&DAT_00712854;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~i - 1;
  local_4 = 2;
  i = FUN_004095c0();
  if (i < uVar3) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(this_val,1);
      goto LAB_0049ce90;
    }
    if ((0x1f < *(uint *)((int)this + 0x14)) || (*(uint *)((int)this + 0x14) < uVar3)) {
      FUN_004028f0(this_val,1);
      goto LAB_0049ce64;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(this_val,0);
      goto LAB_0049ce90;
    }
LAB_0049ce64:
    FUN_00402b20(this_val,uVar3);
  }
  puVar4 = &DAT_00712854;
  puVar6 = *(undefined4 **)((int)this + 0xc);
  for (i = uVar3 >> 2; i != 0; i = i - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (i = uVar3 & 3; i != 0; i = i - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_004029e0(this_val,uVar3);
LAB_0049ce90:
  *(undefined1 *)((int)this + 0x3c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


/* ==== 0049ceb0 FUN_0049ceb0 ==== */

void __thiscall FUN_0049ceb0(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_0057719c;
  iVar2 = *(int *)((int)this + 0x2c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
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
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}


/* ==== 0049cf50 FUN_0049cf50 ==== */

void __thiscall FUN_0049cf50(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_2;
  return;
}


/* ==== 0049cf60 FUN_0049cf60 ==== */

/* WARNING: Removing unreachable block (ram,0x0049cf7a) */

void __thiscall FUN_0049cf60(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int this_val;
  
  this_val = (int)this + 0x28;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (*(uint *)((int)this + 0x30) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x30) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x2c);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)((int)this + 0x30) - iVar7;
      cVar2 = FUN_00402a00(this_val,iVar7,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar7);
      }
    }
    FUN_00402c30(this_val);
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      this_val = *(int *)((int)this + 0x2c);
      if (this_val != 0) {
        cVar2 = *(char *)(this_val + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(this_val + -1));
        }
        else {
          *(char *)(this_val + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 0x34) = 0;
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 0x2c) = puVar4;
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_2 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(this_val,uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_2 + 4);
    }
    puVar8 = *(undefined4 **)((int)this + 0x2c);
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)((int)this + 0x30) = uVar1;
    *(undefined1 *)(*(int *)((int)this + 0x2c) + uVar1) = 0;
  }
  return;
}


/* ==== 0049d0a0 FUN_0049d0a0 ==== */

void __thiscall FUN_0049d0a0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x38) = param_2;
  return;
}


/* ==== 0049d0b0 FUN_0049d0b0 ==== */

void __thiscall FUN_0049d0b0(void *this,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint i;
  int this_val;
  
  this_val = (int)this + 8;
  FUN_004093c0(this_val,param_2,0,0xffffffff);
  i = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      if ((*(uint *)((int)this + 0x10) < i) || (*(int *)((int)this + 0xc) == 0)) {
        pcVar4 = "";
      }
      else {
        cVar1 = *(char *)(*(int *)((int)this + 0xc) + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          FUN_00402a00(this_val,*(uint *)((int)this + 0x10),0);
        }
        if (*(int *)((int)this + 0xc) != 0) {
          *(undefined1 *)(*(int *)((int)this + 0xc) + -1) = 0xff;
        }
        pcVar4 = (char *)(*(int *)((int)this + 0xc) + i);
      }
      if ('`' < *pcVar4) {
        if ((*(uint *)((int)this + 0x10) < i) || (*(int *)((int)this + 0xc) == 0)) {
          pcVar4 = "";
        }
        else {
          cVar1 = *(char *)(*(int *)((int)this + 0xc) + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            FUN_00402a00(this_val,*(uint *)((int)this + 0x10),0);
          }
          if (*(int *)((int)this + 0xc) != 0) {
            *(undefined1 *)(*(int *)((int)this + 0xc) + -1) = 0xff;
          }
          pcVar4 = (char *)(*(int *)((int)this + 0xc) + i);
        }
        if (*pcVar4 < '{') {
          uVar2 = *(uint *)((int)this + 0x10);
          if ((uVar2 < i) || (*(int *)((int)this + 0xc) == 0)) {
            pcVar4 = "";
          }
          else {
            cVar1 = *(char *)(*(int *)((int)this + 0xc) + -1);
            if ((cVar1 != '\0') && (cVar1 != -1)) {
              if (0xfffffffd < uVar2) {
                FUN_0054b1b4();
              }
              iVar3 = *(int *)((int)this + 0xc);
              if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1))
              {
                if (uVar2 == 0) {
                  if (iVar3 != 0) {
                    FUN_004029e0(this_val,0);
                  }
                }
                else if (*(uint *)((int)this + 0x14) < uVar2) goto LAB_0049d1bd;
              }
              else if (uVar2 == 0) {
                *(char *)(iVar3 + -1) = cVar1 + -1;
                FUN_004028f0(this_val,0);
              }
              else {
LAB_0049d1bd:
                FUN_00402b20(this_val,uVar2);
              }
            }
            if (*(int *)((int)this + 0xc) != 0) {
              *(undefined1 *)(*(int *)((int)this + 0xc) + -1) = 0xff;
            }
            pcVar4 = (char *)(*(int *)((int)this + 0xc) + i);
          }
          *pcVar4 = *pcVar4 + -0x20;
        }
      }
      i = i + 1;
    } while (i < *(uint *)(param_2 + 8));
  }
  return;
}


/* ==== 0049d200 FUN_0049d200 ==== */

undefined4 __thiscall FUN_0049d200(void *this)

{
  return *(undefined4 *)((int)this + 4);
}


/* ==== 0049d210 FUN_0049d210 ==== */

int __thiscall FUN_0049d210(void *this)

{
  return (int)this + 0x28;
}


/* ==== 0049d220 FUN_0049d220 ==== */

int __thiscall FUN_0049d220(void *this)

{
  return (int)this + 8;
}


/* ==== 0049d230 FUN_0049d230 ==== */

undefined4 __thiscall FUN_0049d230(void *this)

{
  return *(undefined4 *)((int)this + 0x38);
}


/* ==== 0049d240 FUN_0049d240 ==== */

undefined1 __thiscall FUN_0049d240(void *this)

{
  return *(undefined1 *)((int)this + 0x3c);
}


/* ==== 0049d250 FUN_0049d250 ==== */

void __thiscall FUN_0049d250(void *this,undefined1 param_2)

{
  *(undefined1 *)((int)this + 0x3c) = param_2;
  return;
}


/* ==== 0049d290 FUN_0049d290 ==== */

void * __thiscall FUN_0049d290(void *this,byte param_2)

{
  FUN_0049ceb0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049d2b0 FUN_0049d2b0 ==== */

void * __thiscall FUN_0049d2b0(void *this)

{
  int iVar1;
  char cVar2;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  
  puStack_8 = &LAB_0056ea46;
  pvStack_c = ExceptionList;
  this_val = (undefined1 *)((int)this + 0x1c);
  ExceptionList = &pvStack_c;
  *this_val = local_15;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = local_15;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  i = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_005771a0;
  *(undefined4 *)((int)this + 4) = 100;
  pcVar4 = &DAT_00712858;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  local_4 = 1;
  cVar2 = FUN_00402a00((undefined1 *)((int)this + 0x2c),i,1);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)&DAT_00712858;
    puVar5 = *(undefined4 **)((int)this + 0x30);
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
    *(uint *)((int)this + 0x34) = i;
    *(undefined1 *)(*(int *)((int)this + 0x30) + i) = 0;
  }
  i = 0xffffffff;
  pcVar4 = &DAT_0071285c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar1 = *(int *)((int)this + 0x20);
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      ExceptionList = pvStack_c;
      return this;
    }
    if ((*(uint *)((int)this + 0x28) < 0x20) && (i <= *(uint *)((int)this + 0x28)))
    goto LAB_0049d3f7;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar1 + -1) = cVar2 + -1;
    FUN_004028f0(this_val,0);
    ExceptionList = pvStack_c;
    return this;
  }
  FUN_00402b20(this_val,i);
LAB_0049d3f7:
  puVar3 = (undefined4 *)&DAT_0071285c;
  puVar5 = *(undefined4 **)((int)this + 0x20);
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
  *(uint *)((int)this + 0x24) = i;
  *(undefined1 *)(*(int *)((int)this + 0x20) + i) = 0;
  ExceptionList = pvStack_c;
  return this;
}


/* ==== 0049d430 FUN_0049d430 ==== */

void * __thiscall
FUN_0049d430(void *this,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056ea6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_6;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = (undefined1)param_6;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 4) = param_6;
  *(undefined ***)this = &PTR_FUN_005771a0;
  *(undefined4 *)((int)this + 8) = param_7;
  *(undefined4 *)((int)this + 0xc) = param_8;
  local_4 = 2;
  FUN_004093c0((undefined1 *)((int)this + 0x2c),param_9,0,0xffffffff);
  FUN_004093c0((undefined1 *)((int)this + 0x1c),&param_2,0,0xffffffff);
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(param_3 + -1);
    }
    else {
      *(char *)(param_3 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 0049d500 FUN_0049d500 ==== */

/* WARNING: Removing unreachable block (ram,0x0049d597) */

void * __thiscall FUN_0049d500(void *this,void *param_2)

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
  
  puStack_8 = &LAB_0056ea8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x1c) = param_2._0_1_;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  this_val = (undefined1 *)((int)this + 0x2c);
  *this_val = param_2._0_1_;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  local_4 = 1;
  *(undefined ***)this = &PTR_FUN_005771a0;
  if (this != param_2) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_2 + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_2 + 8);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_2 + 0xc);
    FUN_004093c0((undefined1 *)((int)this + 0x1c),(int)param_2 + 0x1c,0,0xffffffff);
    uVar1 = *(uint *)((int)param_2 + 0x34);
    if (this_val == (undefined1 *)((int)param_2 + 0x2c)) {
      if (*(uint *)((int)this + 0x34) < uVar1) {
        FUN_0054b29c();
      }
      FUN_00402c30(this_val);
      iVar3 = *(int *)((int)this + 0x34) - uVar1;
      iVar6 = -1;
      if (iVar3 != -1) {
        iVar6 = iVar3;
      }
      if (iVar6 != 0) {
        iVar5 = uVar1 + *(int *)((int)this + 0x30);
        FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
        iVar6 = *(int *)((int)this + 0x34) - iVar6;
        cVar2 = FUN_00402a00(this_val,iVar6,0);
        if (cVar2 != '\0') {
          FUN_004029e0(this_val,iVar6);
        }
      }
      FUN_0040f800(this_val,0,0);
    }
    else {
      if (uVar1 != 0) {
        puVar4 = *(undefined1 **)((int)param_2 + 0x30);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          FUN_004028f0(this_val,1);
          this_val = *(undefined1 **)((int)param_2 + 0x30);
          if (this_val == (undefined1 *)0x0) {
            this_val = &DAT_0057629c;
          }
          *(undefined1 **)((int)this + 0x30) = this_val;
          *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)param_2 + 0x34);
          *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)param_2 + 0x38);
          this_val[-1] = this_val[-1] + '\x01';
          ExceptionList = local_c;
          return this;
        }
      }
      cVar2 = FUN_00402a00(this_val,uVar1,1);
      if (cVar2 != '\0') {
        puVar7 = *(undefined4 **)((int)param_2 + 0x30);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&DAT_0057629c;
        }
        puVar8 = *(undefined4 **)((int)this + 0x30);
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
        *(uint *)((int)this + 0x34) = uVar1;
        *(undefined1 *)(*(int *)((int)this + 0x30) + uVar1) = 0;
      }
    }
  }
  ExceptionList = local_c;
  return this;
}


/* ==== 0049d6a0 FUN_0049d6a0 ==== */

void __thiscall FUN_0049d6a0(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_005771a0;
  iVar2 = *(int *)((int)this + 0x30);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  iVar2 = *(int *)((int)this + 0x20);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x24) = 0;
      *(undefined4 *)((int)this + 0x28) = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return;
}


/* ==== 0049d720 FUN_0049d720 ==== */

int __thiscall FUN_0049d720(void *this,int this_val)

{
  int iVar1;
  undefined4 this_val_2;
  int iVar2;
  
  if (*(int *)((int)this + 0x18) != 0) {
    iVar1 = FUN_0049dd50(this_val);
    if (iVar1 != 0) {
      this_val_2 = FUN_0049dd50(this_val);
      iVar1 = FUN_0049d200(this_val_2);
      iVar2 = FUN_0049d200(*(undefined4 *)((int)this + 0x18));
      if (iVar2 < iVar1) {
        return -1;
      }
      this_val_2 = FUN_0049dd50(this_val);
      iVar1 = FUN_0049d200(this_val_2);
      iVar2 = FUN_0049d200(*(undefined4 *)((int)this + 0x18));
      if (iVar1 < iVar2) {
        return 1;
      }
    }
  }
  if (*(int *)((int)this + 4) != *(int *)(this_val + 4)) {
    return ((*(int *)(this_val + 4) <= *(int *)((int)this + 4)) - 1 & 0xfffffffe) + 1;
  }
  if (*(int *)((int)this + 8) == *(int *)(this_val + 8)) {
    return 0;
  }
  return ((*(int *)(this_val + 8) <= *(int *)((int)this + 8)) - 1 & 0xfffffffe) + 1;
}


/* ==== 0049d7d0 FUN_0049d7d0 ==== */

uint __thiscall FUN_0049d7d0(void *this)

{
  char cVar1;
  uint uVar2;
  uint i;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((-1 < (int)uVar2) && (uVar2 = *(uint *)((int)this + 8), 0 < (int)uVar2)) {
    i = 0xffffffff;
    pcVar6 = &DAT_00712860;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = *(uint *)((int)this + 0x24);
    uVar3 = ~i - 1;
    i = uVar2;
    if (uVar3 <= uVar2) {
      i = uVar3;
    }
    bVar8 = false;
    iVar4 = 0;
    bVar9 = true;
    pbVar5 = *(byte **)((int)this + 0x20);
    pbVar7 = &DAT_00712860;
    do {
      if (i == 0) break;
      i = i - 1;
      bVar8 = *pbVar5 < *pbVar7;
      bVar9 = *pbVar5 == *pbVar7;
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if ((((iVar4 != 0) || (uVar2 < uVar3)) || (uVar2 != uVar3)) &&
       (uVar2 = 0, *(int *)((int)this + 0x18) != 0)) {
      return CONCAT31((int3)((uint)*(int *)((int)this + 0x18) >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


/* ==== 0049d840 FUN_0049d840 ==== */

void __thiscall FUN_0049d840(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x18) = param_2;
  return;
}


/* ==== 0049d850 FUN_0049d850 ==== */

void __thiscall FUN_0049d850(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_2;
  return;
}


/* ==== 0049d860 FUN_0049d860 ==== */

void __thiscall FUN_0049d860(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_2;
  return;
}


/* ==== 0049d870 FUN_0049d870 ==== */

void __thiscall FUN_0049d870(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xc) = param_2;
  return;
}


/* ==== 0049d880 FUN_0049d880 ==== */

void __thiscall FUN_0049d880(void *this,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint i;
  int this_val;
  
  this_val = (int)this + 0x1c;
  FUN_004093c0(this_val,param_2,0,0xffffffff);
  i = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      if ((*(uint *)((int)this + 0x24) < i) || (*(int *)((int)this + 0x20) == 0)) {
        pcVar4 = "";
      }
      else {
        cVar1 = *(char *)(*(int *)((int)this + 0x20) + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          FUN_00402a00(this_val,*(uint *)((int)this + 0x24),0);
        }
        if (*(int *)((int)this + 0x20) != 0) {
          *(undefined1 *)(*(int *)((int)this + 0x20) + -1) = 0xff;
        }
        pcVar4 = (char *)(*(int *)((int)this + 0x20) + i);
      }
      if ('`' < *pcVar4) {
        if ((*(uint *)((int)this + 0x24) < i) || (*(int *)((int)this + 0x20) == 0)) {
          pcVar4 = "";
        }
        else {
          cVar1 = *(char *)(*(int *)((int)this + 0x20) + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            FUN_00402a00(this_val,*(uint *)((int)this + 0x24),0);
          }
          if (*(int *)((int)this + 0x20) != 0) {
            *(undefined1 *)(*(int *)((int)this + 0x20) + -1) = 0xff;
          }
          pcVar4 = (char *)(*(int *)((int)this + 0x20) + i);
        }
        if (*pcVar4 < '{') {
          uVar2 = *(uint *)((int)this + 0x24);
          if ((uVar2 < i) || (*(int *)((int)this + 0x20) == 0)) {
            pcVar4 = "";
          }
          else {
            cVar1 = *(char *)(*(int *)((int)this + 0x20) + -1);
            if ((cVar1 != '\0') && (cVar1 != -1)) {
              if (0xfffffffd < uVar2) {
                FUN_0054b1b4();
              }
              iVar3 = *(int *)((int)this + 0x20);
              if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1))
              {
                if (uVar2 == 0) {
                  if (iVar3 != 0) {
                    FUN_004029e0(this_val,0);
                  }
                }
                else if (*(uint *)((int)this + 0x28) < uVar2) goto LAB_0049d98d;
              }
              else if (uVar2 == 0) {
                *(char *)(iVar3 + -1) = cVar1 + -1;
                FUN_004028f0(this_val,0);
              }
              else {
LAB_0049d98d:
                FUN_00402b20(this_val,uVar2);
              }
            }
            if (*(int *)((int)this + 0x20) != 0) {
              *(undefined1 *)(*(int *)((int)this + 0x20) + -1) = 0xff;
            }
            pcVar4 = (char *)(*(int *)((int)this + 0x20) + i);
          }
          *pcVar4 = *pcVar4 + -0x20;
        }
      }
      i = i + 1;
    } while (i < *(uint *)(param_2 + 8));
  }
  return;
}


/* ==== 0049d9d0 FUN_0049d9d0 ==== */

undefined1 *
FUN_0049d9d0(undefined1 *this_val,int param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint k;
  int iVar7;
  int j;
  uint local_28;
  uint local_24;
  int i;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eaa0;
  local_c = ExceptionList;
  i = 0;
  j = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,0);
  k = 0;
  local_4 = 0;
  iVar5 = 0;
  piVar6 = param_3;
  iVar7 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      iVar5 = j;
      iVar7 = i;
      if (param_6 <= j) break;
      iVar5 = *(int *)(param_2 + 4);
      pcVar4 = "";
      if (iVar5 != 0) {
        pcVar4 = (char *)(iVar5 + k);
      }
      if (*pcVar4 == '#') {
        i = i + 1;
        j = j + 1;
        *piVar6 = (k - i) + 1;
        piVar6 = piVar6 + 1;
        local_28 = k;
      }
      else {
        if (iVar5 == 0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)(iVar5 + k);
        }
        if (*pcVar4 == ' ') {
          local_24 = k;
        }
        if (param_5 <= (int)(k - local_28)) {
          local_28 = local_24;
          j = j + 1;
          *piVar6 = (local_24 - i) + 1;
          piVar6 = piVar6 + 1;
          local_24 = k;
        }
        if (*(int *)(param_2 + 4) == 0) {
          puVar3 = &DAT_0057629c;
        }
        else {
          puVar3 = (undefined1 *)(*(int *)(param_2 + 4) + k);
        }
        uVar1 = *puVar3;
        if (-local_14 - 1U < 2) {
          FUN_0054b1b4();
        }
        iVar5 = local_14 + 1;
        cVar2 = FUN_00402a00(local_1c,iVar5,0);
        if (cVar2 != '\0') {
          *(undefined1 *)(local_14 + local_18) = uVar1;
          *(undefined1 *)(local_18 + iVar5) = 0;
          local_14 = iVar5;
        }
      }
      k = k + 1;
      iVar5 = j;
      iVar7 = i;
    } while (k < *(uint *)(param_2 + 8));
  }
  param_3[iVar5] = k - iVar7;
  *param_4 = iVar5;
  *this_val = local_1c[0];
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  FUN_004093c0(this_val,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return this_val;
}


/* ==== 0049dba0 FUN_0049dba0 ==== */

/* WARNING: Removing unreachable block (ram,0x0049dbfa) */

void __thiscall FUN_0049dba0(void *this,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint i;
  int this_val;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eab2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0049d9d0(local_1c,param_2,(int *)((int)this + 0x40),(int *)((int)this + 0x3c),param_3,
                       4);
  uVar1 = *(uint *)(iVar3 + 8);
  this_val = (int)this + 0x2c;
  local_4 = 0;
  if (this_val == iVar3) {
    if (*(uint *)((int)this + 0x34) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar4 = *(int *)((int)this + 0x34) - uVar1;
    iVar3 = -1;
    if (iVar4 != -1) {
      iVar3 = iVar4;
    }
    if (iVar3 != 0) {
      iVar6 = uVar1 + *(int *)((int)this + 0x30);
      FUN_005580e0(iVar6,iVar3 + iVar6,iVar4 - iVar3);
      iVar3 = *(int *)((int)this + 0x34) - iVar3;
      cVar2 = FUN_00402a00(this_val,iVar3,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar3);
      }
    }
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar5 = *(undefined1 **)(iVar3 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar5 = *(undefined1 **)(iVar3 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x30) = puVar5;
        *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar3 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_0049dcdc;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(iVar3 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(iVar3 + 4);
      }
      puVar8 = *(undefined4 **)((int)this + 0x30);
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
LAB_0049dcdc:
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0049dd30 FUN_0049dd30 ==== */

void __thiscall FUN_0049dd30(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x10) = param_2;
  return;
}


/* ==== 0049dd40 FUN_0049dd40 ==== */

void __thiscall FUN_0049dd40(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}


/* ==== 0049dd50 FUN_0049dd50 ==== */

undefined4 __thiscall FUN_0049dd50(void *this)

{
  return *(undefined4 *)((int)this + 0x18);
}


/* ==== 0049dd60 FUN_0049dd60 ==== */

undefined4 __thiscall FUN_0049dd60(void *this)

{
  return *(undefined4 *)((int)this + 4);
}


/* ==== 0049dd70 FUN_0049dd70 ==== */

undefined4 __thiscall FUN_0049dd70(void *this)

{
  return *(undefined4 *)((int)this + 8);
}


/* ==== 0049dd80 FUN_0049dd80 ==== */

undefined4 __thiscall FUN_0049dd80(void *this)

{
  return *(undefined4 *)((int)this + 0xc);
}


/* ==== 0049dd90 FUN_0049dd90 ==== */

int __thiscall FUN_0049dd90(void *this)

{
  return (int)this + 0x1c;
}


/* ==== 0049dda0 FUN_0049dda0 ==== */

undefined1 * __thiscall FUN_0049dda0(void *this,undefined1 *this_val,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ead4;
  local_c = ExceptionList;
  local_3c[0] = this_val._0_1_;
  ExceptionList = &local_c;
  FUN_004028f0(local_3c,0);
  local_4 = 0;
  if ((param_2 < 0) || (*(int *)((int)this + 0x3c) < param_2)) {
    *this_val = local_3c[0];
    FUN_004028f0(this_val,0);
    FUN_004093c0(this_val,local_3c,0,0xffffffff);
    local_4 = 0xffffffff;
    FUN_004028f0(local_3c,1);
  }
  else {
    uVar2 = *(uint *)((int)this + param_2 * 4 + 0x40);
    if (param_2 == 0) {
      uVar4 = FUN_00479520((void *)((int)this + 0x2c),local_1c,0,uVar2);
      local_4._0_1_ = 1;
      FUN_004093c0(local_3c,uVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_1c,1);
    }
    else {
      uVar3 = *(uint *)((int)this + param_2 * 4 + 0x3c);
      uVar4 = FUN_00479520((void *)((int)this + 0x2c),local_2c,uVar3,uVar2 - uVar3);
      local_4._0_1_ = 2;
      FUN_004093c0(local_3c,uVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
    }
    *this_val = local_3c[0];
    *(undefined4 *)(this_val + 4) = 0;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
    FUN_004093c0(this_val,local_3c,0,0xffffffff);
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_38 + -1);
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return this_val;
}


/* ==== 0049df20 FUN_0049df20 ==== */

undefined4 __thiscall FUN_0049df20(void *this)

{
  return *(undefined4 *)((int)this + 0x10);
}


/* ==== 0049df30 FUN_0049df30 ==== */

undefined4 __thiscall FUN_0049df30(void *this)

{
  return *(undefined4 *)((int)this + 0x14);
}


/* ==== 0049df70 FUN_0049df70 ==== */

void * __thiscall FUN_0049df70(void *this,byte param_2)

{
  FUN_0049d6a0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049df90 FUN_0049df90 ==== */

undefined1 * FUN_0049df90(undefined1 *this_val,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_405;
  char local_400 [1024];
  
  FUN_00559854(local_400,0x400,param_2,&stack0x0000000c);
  i = 0xffffffff;
  *this_val = local_405;
  *(undefined4 *)(this_val + 4) = 0;
  pcVar3 = local_400;
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
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_0049e05a;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_0049e05a:
  pcVar3 = local_400;
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


/* ==== 0049e0c0 FUN_0049e0c0 ==== */

void __thiscall FUN_0049e0c0(void *this)

{
  FUN_004c3fa0(s_____Dump_of_object_CSndSource____005ae6a8);
  FUN_0049f2d0(this);
  FUN_004c3fa0(s_m_SndBuffer___d_005ae694,*(undefined4 *)((int)this + 0x38));
  FUN_004c3fa0(s_Original_frequency___d_005ae67c,*(undefined4 *)((int)this + 0x3c));
  FUN_004c3fa0(s_ID___d_005ae674,*(undefined4 *)((int)this + 0x40));
  FUN_004c3fa0(s_Created___d_005ae664,*(undefined4 *)((int)this + 0x44));
  FUN_004c3fa0(s_Current_pitch___d_005ae650,*(undefined4 *)((int)this + 0x4c));
  FUN_004c3fa0(s_Current_volume__d_005ae63c,*(undefined4 *)((int)this + 0x48));
  FUN_004c3fa0(s_PreMaster_volume__d_005ae624,*(undefined4 *)((int)this + 0x54));
  FUN_004c3fa0(s_Current_panning__d_005ae610,*(undefined4 *)((int)this + 0x50));
  return;
}


/* ==== 0049e150 FUN_0049e150 ==== */

void __thiscall FUN_0049e150(void *this)

{
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x48) = 100;
  *(undefined4 *)((int)this + 0x54) = 100;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return;
}


/* ==== 0049e180 FUN_0049e180 ==== */

void * __thiscall FUN_0049e180(void *this)

{
  FUN_0049f360();
  FUN_0049e150(this);
  return this;
}


/* ==== 0049e1a0 FUN_0049e1a0 ==== */

void * __thiscall FUN_0049e1a0(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f360();
  local_4 = 0;
  FUN_0049e150(this);
  FUN_0049e260(this,param_2,param_3,param_4);
  ExceptionList = local_c;
  return this;
}


/* ==== 0049e200 FUN_0049e200 ==== */

void __thiscall FUN_0049e200(void *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056eb08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    FUN_004c6e50(*(undefined4 *)((int)this + 0x38));
  }
  local_4 = 0xffffffff;
  FUN_0049f4c0(this);
  ExceptionList = local_c;
  return;
}


/* ==== 0049e260 FUN_0049e260 ==== */

void __thiscall FUN_0049e260(void *this,undefined4 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *str2;
  
  puVar1 = *(undefined1 **)(param_3 + 0x1c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0057629c;
  }
  FUN_004a0100(*(int *)((int)this + 0x44) == 0,s__s___d__Sound_source_already_cre_005ae704,
               s_C__work_sound_lib_csndsrc_cpp_005ae738,0xb0,puVar1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_3 + 0x14);
  FUN_004093c0((int)this + 0x18,param_3 + 0x18,0,0xffffffff);
  FUN_004093c0((int)this + 0x28,param_3 + 0x28,0,0xffffffff);
  FUN_004a0100(param_4 != -1,s__s___d__Illegal_value_for_Sound_s_005ae6cc,s___csndsrc_h_005ae6f8,
               0xe2);
  *(undefined4 *)((int)this + 0x58) = param_2;
  *(int *)((int)this + 0x40) = param_4;
  if (*(int *)((int)this + 4) != 0) {
    str2 = *(char **)((int)this + 0x1c);
    if (str2 == (char *)0x0) {
      str2 = "";
    }
    uVar2 = FUN_004c7c50(str2,0);
    *(undefined4 *)((int)this + 0x38) = uVar2;
  }
  *(undefined4 *)((int)this + 0x44) = 1;
  return;
}


/* ==== 0049e340 FUN_0049e340 ==== */

void __thiscall FUN_0049e340(void *this,undefined4 param_2)

{
  FUN_004a00b0(param_2,0,100,s_C__work_sound_lib_csndsrc_cpp_005ae738,0xd3);
  *(undefined4 *)((int)this + 0x48) = param_2;
  FUN_0049e3c0(this);
  return;
}


/* ==== 0049e370 FUN_0049e370 ==== */

int FUN_0049e370(int param_1)

{
  int iVar1;
  
  iVar1 = ((param_1 + -100) * 0xf3c) / 100 + -100;
  FUN_004a00b0(iVar1,0xfffff060,0xffffff9c,s_C__work_sound_lib_csndsrc_cpp_005ae738,0xf5);
  return iVar1;
}


/* ==== 0049e3c0 FUN_0049e3c0 ==== */

void __thiscall FUN_0049e3c0(void *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    uVar2 = FUN_0049e660(this);
    uVar2 = FUN_0049e370(uVar2);
    FUN_004c75b0(*(undefined4 *)((int)this + 0x38),uVar2);
  }
  return;
}


/* ==== 0049e3f0 FUN_0049e3f0 ==== */

void __thiscall FUN_0049e3f0(void *this,int param_2)

{
  int iVar1;
  void *local_4;
  
  local_4 = this;
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    local_4 = (void *)((*(int *)((int)this + 0x3c) * param_2) / 100 + *(int *)((int)this + 0x3c));
    FUN_004a01a0(&local_4,100,100000);
    FUN_004c7460(*(undefined4 *)((int)this + 0x38),local_4);
    *(int *)((int)this + 0x4c) = param_2;
    return;
  }
  *(int *)((int)this + 0x4c) = param_2;
  return;
}


/* ==== 0049e460 FUN_0049e460 ==== */

void __thiscall FUN_0049e460(void *this,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    FUN_004a00b0(param_2,0xffffd8f0,10000,s_C__work_sound_lib_csndsrc_cpp_005ae738,0x168);
    FUN_004c7670(*(undefined4 *)((int)this + 0x38),param_2);
    *(undefined4 *)((int)this + 0x50) = param_2;
    return;
  }
  *(undefined4 *)((int)this + 0x50) = param_2;
  return;
}


/* ==== 0049e4b0 FUN_0049e4b0 ==== */

void __thiscall FUN_0049e4b0(void *this,int param_2)

{
  undefined4 uVar1;
  undefined1 *str2;
  
  uVar1 = FUN_0049e660(this);
  uVar1 = FUN_0049e370(uVar1);
  str2 = *(undefined1 **)((int)this + 0x1c);
  if (str2 == (undefined1 *)0x0) {
    str2 = &DAT_0057629c;
  }
  uVar1 = FUN_004c7a10(str2,str2,uVar1,(uint)(param_2 != 0));
  *(undefined4 *)((int)this + 0x38) = uVar1;
  FUN_004a0100(*(int *)((int)this + 0x40) != -1,s__s___d__ID_not_set_for_this_soun_005ae758,
               s_C__work_sound_lib_csndsrc_cpp_005ae738,0x193);
  FUN_004c7e20(*(undefined4 *)((int)this + 0x38),*(undefined4 *)((int)this + 0x40));
  FUN_004c7460(*(undefined4 *)((int)this + 0x38),0);
  uVar1 = FUN_004c7520(*(undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  FUN_0049e460(this,*(undefined4 *)((int)this + 0x50));
  FUN_0049e3f0(this,*(undefined4 *)((int)this + 0x4c));
  return;
}


/* ==== 0049e550 FUN_0049e550 ==== */

void __thiscall FUN_0049e550(void *this,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049e630();
  if (iVar1 == 0) {
    FUN_0049e4b0(this,param_2);
  }
  return;
}


/* ==== 0049e570 FUN_0049e570 ==== */

void __thiscall FUN_0049e570(void *this)

{
  int iVar1;
  
  iVar1 = FUN_0049e630();
  if (iVar1 != 0) {
    FUN_004c6c70(*(undefined4 *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  }
  return;
}


/* ==== 0049e5a0 FUN_0049e5a0 ==== */

void ** __thiscall FUN_0049e5a0(void *this)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  void *local_4;
  
  if (DAT_00740950 == 0) {
    return (void **)0x0;
  }
  local_4 = this;
  FUN_004a00b0(*(undefined4 *)((int)this + 0x38),0,DAT_00740928 + -1,
               s_C__work_sound_lib_csndsrc_cpp_005ae738,0x22a);
  if (*(int *)(DAT_00740934 + 0x30 + *(int *)((int)this + 0x38) * 0x44) == 0) {
    return (void **)0x0;
  }
  piVar1 = *(int **)(DAT_00740934 + *(int *)((int)this + 0x38) * 0x44 + 0x28);
  ppvVar3 = &local_4;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
  FUN_004a0100(iVar2 == 0,s__s___d__Getting_sound_status_fai_005ae784,
               s_C__work_sound_lib_csndsrc_cpp_005ae738,0x234,*(undefined4 *)((int)this + 0x38));
  return ppvVar3;
}


/* ==== 0049e630 FUN_0049e630 ==== */

uint __thiscall FUN_0049e630(void *this)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x38) != -1) {
    iVar1 = FUN_004c7e70(*(int *)((int)this + 0x38));
    if (iVar1 == *(int *)((int)this + 0x40)) {
      uVar2 = FUN_0049e5a0(this);
      return uVar2 & 1;
    }
  }
  return 0;
}


/* ==== 0049e660 FUN_0049e660 ==== */

int __thiscall FUN_0049e660(void *this)

{
  int iVar1;
  
  FUN_004a0100(*(int *)((int)this + 0x58) != 0,s__s___d__Sound_engine_not_yet_att_005ae7ac,
               s___csndsrc_h_005ae6f8,0xcd);
  iVar1 = (((((*(int *)((int)this + 0x48) * *(int *)((int)this + 0x10)) / 100) *
            *(int *)((int)this + 0x54)) / 100) * *(int *)(*(int *)((int)this + 0x58) + 0x270)) / 100
  ;
  FUN_004a00b0(iVar1,0,100,s_C__work_sound_lib_csndsrc_cpp_005ae738,0x279);
  return iVar1;
}


/* ==== 0049e6f0 FUN_0049e6f0 ==== */

undefined4 __thiscall FUN_0049e6f0(void *this)

{
  undefined4 __ftol_result;
  
  if (*(int *)((int)this + 0x14) == 0) {
    return 0;
  }
  __ftol_result = __ftol(*(int *)((int)this + 0x14));
  return __ftol_result;
}


/* ==== 0049e750 FUN_0049e750 ==== */

undefined4 FUN_0049e750(float *param_1,float *param_2)

{
  param_1 = (float *)(param_1[2] * *param_2 - param_2[2] * *param_1);
  if (0.0 <= (float)param_1) {
    FUN_00559960();
  }
  else {
    FUN_00559960();
  }
  param_1 = (float *)__ftol();
  FUN_004a01a0(&param_1,0xffffd8f0,10000);
  return param_1;
}


/* ==== 0049e7d0 FUN_0049e7d0 ==== */

int __thiscall FUN_0049e7d0(void *this,int param_2)

{
  int __ftol_result;
  
  __ftol_result = __ftol();
  param_2 = 100 - (__ftol_result * 100) / *(int *)((int)this + 0xc);
  FUN_004a01a0(&param_2,0,100);
  return param_2;
}


/* ==== 0049e810 FUN_0049e810 ==== */

void __thiscall FUN_0049e810(void *this,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 local_40 [32];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004a0100(*(int *)((int)this + 0x58) != 0,s__s___d__Sound_engine_not_yet_att_005ae7ac,
               s___csndsrc_h_005ae6f8,0xcd);
  FUN_004a0000(*(undefined4 *)((int)this + 0x58),local_40,param_4);
  *param_2 = local_10;
  param_2[1] = local_c;
  param_2[2] = local_8;
  *param_3 = local_20;
  param_3[1] = local_1c;
  param_3[2] = local_18;
  return;
}


