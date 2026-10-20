/* spel.dat — game/Ovl_Portraits.cpp: 53 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00492260 FUN_00492260 ==== */

void __thiscall FUN_00492260(void *this,undefined4 param_2)

{
  int iVar1;
  int i;
  
  (**(code **)(**(int **)((int)this + 0x3c) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x34) + 0x20))(param_2);
  (**(code **)(**(int **)((int)this + 0x38) + 0x20))(param_2);
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x40))();
  i = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x44) + 4) + i * 4) + 0x20))(param_2);
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 004922b0 FUN_004922b0 ==== */

void __thiscall FUN_004922b0(void *this,int param_2)

{
  undefined4 uVar1;
  undefined1 local_c [12];
  
  if ((param_2 == 0) || (param_2 == 5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00492260(this,uVar1);
  uVar1 = FUN_00492110(local_c);
  FUN_0047bc90(*(undefined4 *)((int)this + 0x3c),uVar1);
  uVar1 = FUN_00492180(this,local_c);
  FUN_0047bc90(*(undefined4 *)((int)this + 0x34),uVar1);
  uVar1 = FUN_00492200(local_c);
  FUN_0047bc90(*(undefined4 *)((int)this + 0x38),uVar1);
  FUN_004919b0((int)this + 0x18,param_2);
  return;
}


/* ==== 00492370 FUN_00492370 ==== */

void FUN_00492370(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00492380 FUN_00492380 ==== */

void FUN_00492380(void)

{
  FUN_005584e0(&LAB_00492390);
  return;
}


/* ==== 004923b0 FUN_004923b0 ==== */

void FUN_004923b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004923c0 FUN_004923c0 ==== */

void FUN_004923c0(void)

{
  FUN_005584e0(&LAB_004923d0);
  return;
}


/* ==== 004923e0 FUN_004923e0 ==== */

void * __thiscall FUN_004923e0(void *this,byte param_2)

{
  FUN_00492400();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00492400 FUN_00492400 ==== */

void __thiscall FUN_00492400(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x44);
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_00576b04;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_00576bb8;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_004925f0(this);
  return;
}


/* ==== 00492480 FUN_00492480 ==== */

int __thiscall FUN_00492480(void *this)

{
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
}


/* ==== 004924a0 FUN_004924a0 ==== */

/* WARNING: Removing unreachable block (ram,0x004924d8) */

void * __thiscall FUN_004924a0(void *this,undefined4 param_2,undefined1 *param_3)

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
  
  *(undefined4 *)((int)this + 4) = param_2;
  this_val = (undefined1 *)((int)this + 8);
  *this_val = *param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = *(uint *)(param_3 + 8);
  if (this_val == param_3) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x10) - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0xc);
      FUN_005580e0(iVar5,iVar5 + iVar6,iVar3 - iVar6);
      iVar6 = *(int *)((int)this + 0x10) - iVar6;
      cVar2 = FUN_00402a00(this_val,iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar6);
      }
    }
    FUN_00402c30(this_val);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        this_val = *(undefined1 **)(param_3 + 4);
        if (this_val == (undefined1 *)0x0) {
          this_val = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0xc) = this_val;
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_3 + 0xc);
        this_val[-1] = this_val[-1] + '\x01';
        *(undefined ***)this = &PTR_FUN_00576ff4;
        return this;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_3 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)((int)this + 0xc);
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
      *(uint *)((int)this + 0x10) = uVar1;
      *(undefined1 *)(*(int *)((int)this + 0xc) + uVar1) = 0;
      *(undefined ***)this = &PTR_FUN_00576ff4;
      return this;
    }
  }
  *(undefined ***)this = &PTR_FUN_00576ff4;
  return this;
}


/* ==== 004925f0 FUN_004925f0 ==== */

void __thiscall FUN_004925f0(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_00576ff4;
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}


/* ==== 00492670 FUN_00492670 ==== */

void * __thiscall FUN_00492670(void *this,byte param_2)

{
  FUN_004925f0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 004926e0 FUN_004926e0 ==== */

void __thiscall FUN_004926e0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xc) = 0xbf800000;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 0x10) = 0xbf800000;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xbf800000;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


/* ==== 00492730 FUN_00492730 ==== */

void __thiscall FUN_00492730(void *this,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint i;
  uint j;
  char *pcVar5;
  undefined1 *this_val;
  char *pcVar6;
  undefined1 local_2c [4];
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e050;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00484f60(param_2);
  *(undefined4 *)((int)this + 4) = uVar2;
  local_2c[0] = (undefined1)param_2;
  i = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005aceb4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  cVar1 = FUN_00402a00(local_2c,i,1);
  if (cVar1 != '\0') {
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005aceb4;
    pcVar5 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_004029e0(local_2c,i);
  }
  local_4 = 0;
  puVar3 = *(undefined1 **)(param_2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  this_val = local_1c;
  pcVar6 = s_Element__s_not_found_005acee0;
  uVar2 = FUN_0049df90(this_val,s_Element__s_not_found_005acee0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00487bc0(*(undefined4 *)((int)this + 4),uVar2,local_2c,0x52,this_val,pcVar6,puVar3);
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
  local_4 = 0xffffffff;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  puVar4 = (undefined4 *)FUN_0047bc20(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0xc) = *puVar4;
  *(undefined4 *)((int)this + 0x10) = puVar4[1];
  *(undefined4 *)((int)this + 0x14) = puVar4[2];
  *(undefined4 *)((int)this + 0x18) = *puVar4;
  *(undefined4 *)((int)this + 0x1c) = puVar4[1];
  *(undefined4 *)((int)this + 0x20) = puVar4[2];
  *(undefined4 *)((int)this + 0x58) = param_3;
  ExceptionList = local_c;
  return;
}


/* ==== 004928b0 FUN_004928b0 ==== */

void FUN_004928b0(void)

{
  return;
}


/* ==== 004928c0 FUN_004928c0 ==== */

void __thiscall FUN_004928c0(void *this,undefined4 param_2)

{
  if (*(int **)((int)this + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 4) + 0x20))(param_2);
  }
  return;
}


/* ==== 004928e0 FUN_004928e0 ==== */

void __thiscall FUN_004928e0(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)((int)this + 4) == 0) {
    FUN_004c4150(s__s___d__Element_not_initted_yet__005acf24,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005acef8,0x6a);
  }
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_4;
  FUN_0047bc50(*(undefined4 *)((int)this + 4),(undefined4 *)((int)this + 0x18));
  return;
}


/* ==== 00492930 FUN_00492930 ==== */

void __thiscall
FUN_00492930(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x54) = 1;
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x30) = param_3;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x38) = param_5;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  return;
}


/* ==== 00492980 FUN_00492980 ==== */

void __thiscall FUN_00492980(void *this,int param_1,undefined4 this_val)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar2 = (float)param_1;
  iVar4 = DAT_005d2ab0 + 1;
  *(undefined4 *)((int)this + 0x54) = 2;
  *(undefined4 *)((int)this + 0x30) = 0xbecccccd;
  fVar3 = 0.5 - (1.5 / (float)iVar4) * fVar2;
  *(float *)((int)this + 0x34) = fVar3;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x20);
  *(int *)((int)this + 0x5c) = param_1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 8) = this_val;
  puVar1 = (undefined4 *)((int)this + 0x3c);
  *puVar1 = 0xbecccccd;
  *(float *)((int)this + 0x40) = fVar3;
  *(undefined4 *)((int)this + 0x44) = 0;
  *puVar1 = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0xbecccccd;
  *(float *)((int)this + 0x4c) = fVar3;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x3dcccccd;
  FUN_0047bc50(this_val,puVar1);
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  else {
    *(float *)((int)this + 0x60) = -1.2 - fVar2 * 0.2;
  }
  param_1 = -1;
  FUN_004930f0(this,&param_1);
  return;
}


/* ==== 00492a90 FUN_00492a90 ==== */

void __thiscall
FUN_00492a90(void *this,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_2 != *(int *)((int)this + 0x58)) {
    FUN_00492930(this,param_2,param_3,param_4,param_5);
  }
  return;
}


/* ==== 00492ac0 FUN_00492ac0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00492ac0(void *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  uint __ftol_result;
  float10 fVar10;
  
  if (*(int *)((int)this + 4) == 0) {
    FUN_004c4150(s__s___d__Element_not_initted_yet__005acf74,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005acf48,0xb3);
  }
  fVar2 = *(float *)((int)this + 0x30);
  fVar3 = *(float *)((int)this + 0x24);
  fVar4 = *(float *)((int)this + 0x34);
  fVar5 = *(float *)((int)this + 0x28);
  fVar6 = _DAT_005b23b8 * 0.25;
  fVar10 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 100) =
       (float)((float10)fVar6 / ((float10)0.6 / fVar10) + (float10)*(float *)((int)this + 100));
  fVar6 = _DAT_005b23b8 * 0.5;
  fVar10 = (float10)FUN_004a6800(&DAT_007128b0);
  *(float *)((int)this + 0x68) =
       (float)((float10)fVar6 / ((float10)0.6 / fVar10) + (float10)*(float *)((int)this + 0x68));
  __ftol_result = __ftol();
  iVar9 = DAT_0073b530;
  uVar8 = DAT_005b23bc;
  fVar6 = *(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4);
  if (*(int *)((int)this + 0x5c) < *(int *)((int)this + 0x58)) {
    __ftol_result = __ftol();
    fVar7 = -(*(float *)(iVar9 + (__ftol_result & uVar8) * 4) * 0.03);
  }
  else {
    __ftol_result = __ftol();
    fVar7 = *(float *)(iVar9 + (__ftol_result & uVar8) * 4) * 0.03;
  }
  pfVar1 = (float *)((int)this + 0x18);
  *pfVar1 = (fVar2 - fVar3) * fVar6 + *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x1c) = (fVar4 - fVar5) * fVar6 + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x20) = fVar7 + *(float *)((int)this + 0x2c);
  FUN_0047bc50(*(undefined4 *)((int)this + 4),pfVar1);
  fVar10 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar10 = fVar10 + (float10)*(float *)((int)this + 0x60);
  *(float *)((int)this + 0x60) = (float)fVar10;
  if ((float10)0.6 <= fVar10) {
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x5c);
    *pfVar1 = *(float *)((int)this + 0x30);
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x34);
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x38);
    FUN_0047bc50(*(undefined4 *)((int)this + 4),pfVar1);
  }
  return;
}


/* ==== 00492c70 FUN_00492c70 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00492c70(void *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  char cVar7;
  uint __ftol_result;
  undefined4 *puVar8;
  uint i;
  float fVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined1 uStack_65;
  float local_64;
  float fStack_50;
  char *pcStack_4c;
  void *pvStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  char *pcStack_30;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056e06a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s___d__Element_not_initted_yet__005acfc4,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005acf98,0xe2);
  }
  if (*(int *)((int)this + 0x5c) == 0) {
    local_64 = 1.2;
  }
  else {
    local_64 = 0.6;
  }
  fVar12 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar12 = fVar12 + (float10)*(float *)((int)this + 0x60);
  *(float *)((int)this + 0x60) = (float)fVar12;
  if (fVar12 < (float10)0.0) {
    ExceptionList = pvStack_c;
    return;
  }
  if ((float10)local_64 <= fVar12) {
    FUN_0047bc50(*(undefined4 *)((int)this + 4),(int)this + 0x30);
    fStack_34 = 0.0;
    pcStack_30 = (char *)0x0;
    fStack_2c = 0.0;
    FUN_0047bc90(*(undefined4 *)((int)this + 4),&fStack_34);
    ExceptionList = pvStack_c;
    return;
  }
  fVar12 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar9 = (float)((float10)local_64 / fVar12);
  fVar1 = *(float *)((int)this + 0x34);
  fVar2 = *(float *)((int)this + 0x28);
  fVar3 = *(float *)((int)this + 0x30);
  fVar4 = *(float *)((int)this + 0x24);
  *(float *)((int)this + 100) = (_DAT_005b23b8 * 0.25) / fVar9 + *(float *)((int)this + 100);
  *(float *)((int)this + 0x68) = (_DAT_005b23b8 * 0.5) / fVar9 + *(float *)((int)this + 0x68);
  __ftol_result = __ftol();
  iVar6 = DAT_0073b530;
  i = DAT_005b23bc;
  fVar5 = *(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4);
  pcStack_4c = (char *)((fVar1 - fVar2) * fVar5);
  fStack_50 = (fVar3 - fVar4) * fVar5;
  pvStack_48 = (void *)(float)(extraout_ST0 * (float10)fVar5);
  fStack_34 = fStack_50;
  pcStack_30 = pcStack_4c;
  fStack_2c = (float)pvStack_48;
  __ftol_result = __ftol();
  pvStack_48 = (void *)(*(float *)(iVar6 + (__ftol_result & i) * 4) * 0.4 +
                       *(float *)((int)this + 0x2c));
  pcStack_4c = (char *)((float)pcStack_30 + *(float *)((int)this + 0x28));
  fStack_50 = fStack_34 + *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x18) = fStack_50;
  *(char **)((int)this + 0x1c) = pcStack_4c;
  *(void **)((int)this + 0x20) = pvStack_48;
  FUN_0047bc50(*(undefined4 *)((int)this + 4),(float *)((int)this + 0x18));
  if (*(int *)((int)this + 0x5c) == 0) {
    puVar8 = (undefined4 *)FUN_0047bc40(*(undefined4 *)((int)this + 4));
    uStack_40 = *puVar8;
    uStack_3c = puVar8[1];
    fStack_38 = (_DAT_005b23b8 + _DAT_005b23b8) / fVar9 + (float)puVar8[2];
    FUN_0047bc90(*(undefined4 *)((int)this + 4),&uStack_40);
    i = __ftol();
    uStack_1c = 0x3f800000;
    fStack_24 = *(float *)(DAT_0073b530 + (i & DAT_005b23bc) * 4) * 0.3 + 1.0;
    fStack_20 = fStack_24;
    (**(code **)(**(int **)((int)this + 4) + 0x24))(&fStack_24);
  }
  fStack_50 = (float)CONCAT31(fStack_50._1_3_,uStack_65);
  FUN_004028f0(&fStack_50,0);
  i = 0xffffffff;
  pcVar10 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar7 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar7 != '\0');
  fVar9 = (float)(~i - 1);
  cVar7 = FUN_00402a00(&fStack_50,fVar9,1);
  if (cVar7 != '\0') {
    pcVar10 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
    pcVar11 = pcStack_4c;
    for (i = (uint)fVar9 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (i = (uint)fVar9 & 3; i != 0; i = i - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcStack_4c[(int)fVar9] = '\0';
    pvStack_48 = (void *)fVar9;
  }
  fStack_34 = (float)CONCAT31(fStack_34._1_3_,uStack_65);
  iStack_4 = 0;
  FUN_004028f0(&fStack_34,0);
  i = 0xffffffff;
  pcVar10 = s_m_FinStrElement_not_initialised_005ad014;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar7 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar7 != '\0');
  fVar9 = (float)(~i - 1);
  cVar7 = FUN_00402a00(&fStack_34,fVar9,1);
  if (cVar7 != '\0') {
    pcVar10 = s_m_FinStrElement_not_initialised_005ad014;
    pcVar11 = pcStack_30;
    for (i = (uint)fVar9 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (i = (uint)fVar9 & 3; i != 0; i = i - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcStack_30[(int)fVar9] = '\0';
    fStack_2c = fVar9;
  }
  iStack_4._0_1_ = 1;
  FUN_00487bc0(*(undefined4 *)((int)this + 8),&fStack_34,&fStack_50,0x117);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_004028f0(&fStack_34,1);
  iStack_4 = 0xffffffff;
  if (pcStack_4c != (char *)0x0) {
    cVar7 = pcStack_4c[-1];
    if ((cVar7 == '\0') || (cVar7 == -1)) {
      FUN_0054b339(pcStack_4c + -1);
    }
    else {
      pcStack_4c[-1] = cVar7 + -1;
    }
  }
  pcStack_30 = (char *)(*(float *)((int)this + 0x4c) - *(float *)((int)this + 0x40));
  i = __ftol();
  fVar9 = *(float *)(DAT_0073b530 + (i & DAT_005b23bc) * 4);
  pcStack_30 = (char *)((float)pcStack_30 * fVar9);
  fStack_50 = (float)(extraout_ST0_00 * (float10)fVar9 + (float10)*(float *)((int)this + 0x3c));
  pcStack_4c = (char *)((float)pcStack_30 + *(float *)((int)this + 0x40));
  pvStack_48 = *(void **)((int)this + 0x44);
  fStack_18 = fStack_50;
  fStack_14 = (float)pcStack_4c;
  pvStack_10 = pvStack_48;
  (**(code **)(**(int **)((int)this + 8) + 0x20))(1);
  FUN_0047bc50(*(undefined4 *)((int)this + 8),&uStack_1c);
  ExceptionList = pvStack_10;
  return;
}


/* ==== 00492d32 FUN_00492d32 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492d32(undefined4 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  char cVar7;
  uint __ftol_result;
  undefined4 *puVar8;
  uint i;
  float fVar9;
  int unaff_EBP;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float in_stack_0000001c;
  char *in_stack_00000020;
  void *in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  char *in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000048;
  float in_stack_0000004c;
  undefined4 in_stack_00000050;
  float in_stack_00000054;
  float in_stack_00000058;
  void *in_stack_0000005c;
  undefined1 uStack00000068;
  uint3 uStack00000069;
  
  fVar12 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar9 = (float)((float10)param_2 / fVar12);
  fVar1 = *(float *)(unaff_EBP + 0x34);
  fVar2 = *(float *)(unaff_EBP + 0x28);
  fVar3 = *(float *)(unaff_EBP + 0x30);
  fVar4 = *(float *)(unaff_EBP + 0x24);
  *(float *)(unaff_EBP + 100) = (_DAT_005b23b8 * 0.25) / fVar9 + *(float *)(unaff_EBP + 100);
  *(float *)(unaff_EBP + 0x68) = (_DAT_005b23b8 * 0.5) / fVar9 + *(float *)(unaff_EBP + 0x68);
  __ftol_result = __ftol();
  iVar6 = DAT_0073b530;
  i = DAT_005b23bc;
  fVar5 = *(float *)(DAT_0073b530 + (__ftol_result & DAT_005b23bc) * 4);
  in_stack_00000020 = (char *)((fVar1 - fVar2) * fVar5);
  in_stack_0000001c = (fVar3 - fVar4) * fVar5;
  in_stack_00000024 = (void *)(float)(extraout_ST0 * (float10)fVar5);
  in_stack_00000038 = in_stack_0000001c;
  in_stack_0000003c = in_stack_00000020;
  in_stack_00000040 = (float)in_stack_00000024;
  __ftol_result = __ftol();
  in_stack_00000024 =
       (void *)(*(float *)(iVar6 + (__ftol_result & i) * 4) * 0.4 + *(float *)(unaff_EBP + 0x2c));
  in_stack_00000020 = (char *)((float)in_stack_0000003c + *(float *)(unaff_EBP + 0x28));
  in_stack_0000001c = in_stack_00000038 + *(float *)(unaff_EBP + 0x24);
  *(float *)(unaff_EBP + 0x18) = in_stack_0000001c;
  *(char **)(unaff_EBP + 0x1c) = in_stack_00000020;
  *(void **)(unaff_EBP + 0x20) = in_stack_00000024;
  FUN_0047bc50(*(undefined4 *)(unaff_EBP + 4),(float *)(unaff_EBP + 0x18));
  if (*(int *)(unaff_EBP + 0x5c) == 0) {
    puVar8 = (undefined4 *)FUN_0047bc40(*(undefined4 *)(unaff_EBP + 4));
    in_stack_0000002c = *puVar8;
    in_stack_00000030 = puVar8[1];
    in_stack_00000034 = (_DAT_005b23b8 + _DAT_005b23b8) / fVar9 + (float)puVar8[2];
    FUN_0047bc90(*(undefined4 *)(unaff_EBP + 4),&stack0x0000002c);
    i = __ftol();
    in_stack_00000050 = 0x3f800000;
    in_stack_00000048 = *(float *)(DAT_0073b530 + (i & DAT_005b23bc) * 4) * 0.3 + 1.0;
    in_stack_0000004c = in_stack_00000048;
    (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(&stack0x00000048);
  }
  in_stack_0000001c = (float)CONCAT31(in_stack_0000001c._1_3_,param_1._3_1_);
  FUN_004028f0(&stack0x0000001c,0);
  i = 0xffffffff;
  pcVar10 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar7 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar7 != '\0');
  fVar9 = (float)(~i - 1);
  cVar7 = FUN_00402a00(&stack0x0000001c,fVar9,1);
  if (cVar7 != '\0') {
    pcVar10 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005acfe8;
    pcVar11 = in_stack_00000020;
    for (i = (uint)fVar9 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (i = (uint)fVar9 & 3; i != 0; i = i - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    in_stack_00000020[(int)fVar9] = '\0';
    in_stack_00000024 = (void *)fVar9;
  }
  in_stack_00000038 = (float)CONCAT31(in_stack_00000038._1_3_,param_1._3_1_);
  _uStack00000068 = 0;
  FUN_004028f0(&stack0x00000038,0);
  i = 0xffffffff;
  pcVar10 = s_m_FinStrElement_not_initialised_005ad014;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar7 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar7 != '\0');
  fVar9 = (float)(~i - 1);
  cVar7 = FUN_00402a00(&stack0x00000038,fVar9,1);
  if (cVar7 != '\0') {
    pcVar10 = s_m_FinStrElement_not_initialised_005ad014;
    pcVar11 = in_stack_0000003c;
    for (i = (uint)fVar9 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (i = (uint)fVar9 & 3; i != 0; i = i - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    in_stack_0000003c[(int)fVar9] = '\0';
    in_stack_00000040 = fVar9;
  }
  uStack00000068 = 1;
  FUN_00487bc0(*(undefined4 *)(unaff_EBP + 8),&stack0x00000038,&stack0x0000001c,0x117);
  _uStack00000068 = (uint)uStack00000069 << 8;
  FUN_004028f0(&stack0x00000038,1);
  _uStack00000068 = 0xffffffff;
  if (in_stack_00000020 != (char *)0x0) {
    cVar7 = in_stack_00000020[-1];
    if ((cVar7 == '\0') || (cVar7 == -1)) {
      FUN_0054b339(in_stack_00000020 + -1);
    }
    else {
      in_stack_00000020[-1] = cVar7 + -1;
    }
  }
  in_stack_0000003c = (char *)(*(float *)(unaff_EBP + 0x4c) - *(float *)(unaff_EBP + 0x40));
  i = __ftol();
  fVar9 = *(float *)(DAT_0073b530 + (i & DAT_005b23bc) * 4);
  in_stack_0000003c = (char *)((float)in_stack_0000003c * fVar9);
  in_stack_0000001c =
       (float)(extraout_ST0_00 * (float10)fVar9 + (float10)*(float *)(unaff_EBP + 0x3c));
  in_stack_00000020 = (char *)((float)in_stack_0000003c + *(float *)(unaff_EBP + 0x40));
  in_stack_00000024 = *(void **)(unaff_EBP + 0x44);
  in_stack_00000054 = in_stack_0000001c;
  in_stack_00000058 = (float)in_stack_00000020;
  in_stack_0000005c = in_stack_00000024;
  (**(code **)(**(int **)(unaff_EBP + 8) + 0x20))(1);
  FUN_0047bc50(*(undefined4 *)(unaff_EBP + 8),&stack0x00000050);
  ExceptionList = in_stack_0000005c;
  return;
}


/* ==== 00493090 FUN_00493090 ==== */

void __thiscall
FUN_00493090(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x54);
  if (iVar1 == 0) {
    FUN_00492a90(this,param_2,param_3,param_4,param_5);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      FUN_004c4150(s__s___d__Illegal_state_for_portra_005ad060,
                   s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad034,0x134);
      return;
    }
    FUN_00492c70();
    return;
  }
  FUN_00492ac0();
  return;
}


/* ==== 004930f0 FUN_004930f0 ==== */

void __thiscall FUN_004930f0(void *this,undefined4 param_2)

{
  if (*(int *)((int)this + 4) == 0) {
    FUN_004c4150(s__s___d__Element_not_initted_yet__005ad0b0,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad084,0x13d);
  }
  (**(code **)(**(int **)((int)this + 4) + 0x28))(param_2);
  return;
}


/* ==== 00493130 FUN_00493130 ==== */

void * __thiscall FUN_00493130(void *this,undefined4 param_2)

{
  char cVar1;
  undefined1 *operator_new_result;
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
  puStack_8 = &LAB_0056e09a;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  i = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pcVar2 = s_OVL_PORTRAIT_MGR_005acea0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(local_1c,s_OVL_PORTRAIT_MGR_005acea0,~i - 1);
  local_4 = 0;
  FUN_004924a0(this,param_2,local_1c);
  local_4._0_1_ = 2;
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
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00577058;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_2;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x20) = operator_new_result;
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 0x24) = &PTR_LAB_00576e18;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_2;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x28) = operator_new_result;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_00576b04;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_2;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x34) = operator_new_result;
  *(undefined ***)this = &PTR_FUN_00577048;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = local_c;
  return this;
}


/* ==== 004932a0 FUN_004932a0 ==== */

undefined1 * FUN_004932a0(undefined1 *this_val,undefined4 param_2)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  uint j;
  uint k;
  char *pcVar3;
  char *pcVar4;
  CHAR local_50 [16];
  char local_40 [64];
  
  FUN_004489a0(&DAT_006fa558,s_GAME_INI_005ad0e4,s_Game_Settings_005ad0d4);
  i = FUN_00448c90(&DAT_006fa558,s_Game_Settings_005ad0f0);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  wsprintfA(local_50,s__d_005ad100,param_2,puVar2);
  FUN_004c3d10(s_Portraits_005ace70,local_50,local_40,0x3f);
  i = -1;
  pcVar3 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (i == -2) {
    FUN_004c4150(s__s___d__Element_name_for_car__d_n_005ad13c,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad110,0x172,param_2,s_GAME_INI_005ad104,
                 s_Portraits_005ace70);
  }
  j = 0xffffffff;
  pcVar3 = local_40;
  do {
    if (j == 0) break;
    j = j - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(this_val + 4) = 0;
  j = ~j - 1;
  *this_val = (undefined1)param_2;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  if (0xfffffffd < j) {
    FUN_0054b1b4();
  }
  i = *(int *)(this_val + 4);
  if (((i == 0) || (cVar1 = *(char *)(i + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (j == 0) {
      FUN_004028f0(this_val,1);
      return this_val;
    }
    if ((*(uint *)(this_val + 0xc) < 0x20) && (j <= *(uint *)(this_val + 0xc))) goto LAB_004933d8;
    FUN_004028f0(this_val,1);
  }
  else if (j == 0) {
    *(char *)(i + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,j);
LAB_004933d8:
  pcVar3 = local_40;
  pcVar4 = *(char **)(this_val + 4);
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
  *(uint *)(this_val + 8) = j;
  *(undefined1 *)(*(int *)(this_val + 4) + j) = 0;
  return this_val;
}


/* ==== 00493410 FUN_00493410 ==== */

void __thiscall FUN_00493410(void *this)

{
  void *operator_new_result;
  int i;
  int iVar1;
  undefined4 *puVar2;
  
  i = DAT_005d2ab0 + 1;
  *(int *)((int)this + 0x48) = i;
  operator_new_result = operator_new(i * 0xc);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)((int)this + 0x44) = operator_new_result;
  if (operator_new_result == (void *)0x0) {
    FUN_004c4150(s__s___d__Not_enough_memory_for_or_005ad1a8,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad17c,0x181);
  }
  i = 0;
  if (0 < *(int *)((int)this + 0x48)) {
    iVar1 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)((int)this + 0x44) + iVar1);
      i = i + 1;
      iVar1 = iVar1 + 0xc;
      *puVar2 = DAT_007127d0;
      puVar2[1] = DAT_007127d4;
      puVar2[2] = DAT_007127d8;
    } while (i < *(int *)((int)this + 0x48));
  }
  return;
}


/* ==== 004934a0 FUN_004934a0 ==== */

void __thiscall FUN_004934a0(void *this)

{
  if (*(int *)((int)this + 0x44) != 0) {
    FUN_0054b339(*(int *)((int)this + 0x44));
  }
  return;
}


/* ==== 004934b0 FUN_004934b0 ==== */

void __thiscall
FUN_004934b0(void *this,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  
  if ((param_2 < 0) || (*(int *)((int)this + 0x48) <= param_2)) {
    FUN_004c4150(s__s___d__Illegal_index_in_OrigPos_005ad20c,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad1e0,0x1a7,param_2,
                 *(undefined4 *)((int)this + 0x48));
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x44) + param_2 * 0xc);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  return;
}


/* ==== 00493500 FUN_00493500 ==== */

void __thiscall FUN_00493500(void *this,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  
  if ((param_3 < 0) || (*(int *)((int)this + 0x48) <= param_3)) {
    FUN_004c4150(s__s___d__Illegal_index_in_OrigPos_005ad278,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad24c,0x1b2,param_3,
                 *(undefined4 *)((int)this + 0x48));
  }
  pfVar1 = (float *)(*(int *)((int)this + 0x44) + param_3 * 0xc);
  if (((*pfVar1 == DAT_007127d0) && (pfVar1[1] == DAT_007127d4)) && (pfVar1[2] == DAT_007127d8)) {
    FUN_004c4150(s__s___d__Trying_to_get_a_position_005ad2e4,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad2b8,0x1b9,param_3,
                 *(undefined4 *)((int)this + 0x48));
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x44) + param_3 * 0xc);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  return;
}


/* ==== 004935b0 FUN_004935b0 ==== */

void __thiscall FUN_004935b0(void *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int i;
  undefined1 local_c [12];
  
  puVar2 = (undefined4 *)FUN_00493500(this,local_c,DAT_006fbaa4);
  FUN_004928e0(*(undefined4 *)((int)this + 0x18),*puVar2,puVar2[1],puVar2[2]);
  i = 0;
  if (0 < DAT_005d2ab0) {
    puVar2 = &DAT_005973c8;
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x20) + 4);
      puVar3 = (undefined4 *)FUN_00493500(this,local_c,*puVar2);
      FUN_004928e0(*(undefined4 *)(iVar1 + i * 4),*puVar3,puVar3[1],puVar3[2]);
      i = i + 1;
      puVar2 = puVar2 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  return;
}


/* ==== 00493640 FUN_00493640 ==== */

void __thiscall FUN_00493640(void *this)

{
  char cVar1;
  undefined4 uVar2;
  void *this_val;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int i;
  undefined4 uVar6;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 local_2c [4];
  int iStack_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e0bc;
  pvStack_c = ExceptionList;
  i = 0;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_2c,0);
  local_4 = 0;
  uVar2 = FUN_004932a0(local_1c,DAT_006fba5c);
  local_4._0_1_ = 1;
  FUN_004093c0(local_2c,uVar2,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_1c,1);
  this_val = operator_new(0x6c);
  if (this_val == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004926e0(this_val,*(undefined4 *)((int)this + 4));
  }
  *(int *)((int)this + 0x18) = iVar3;
  if (iVar3 == 0) {
    FUN_004c4150(s__s___d__Not_enough_memory_for_pl_005ad344);
  }
  FUN_00492730(*(undefined4 *)((int)this + 0x18),local_2c,DAT_006fbaa4);
  iVar3 = *(int *)((int)this + 0x18);
  if (DAT_006fba5c < DAT_005d2ab0 + 1) {
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    iVar3 = DAT_006fba5c;
  }
  else {
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    iVar3 = DAT_005d2ab0;
  }
  FUN_004934b0(this,iVar3,uVar2,uVar4,uVar6);
  uStack_34 = 0xffffffff;
  FUN_004930f0(*(undefined4 *)((int)this + 0x18),&uStack_34);
  if (0 < DAT_005d2ab0) {
    puVar5 = &DAT_005973c8;
    do {
      uVar2 = puVar5[-2];
      uVar4 = FUN_004932a0(local_1c,uVar2);
      local_4._0_1_ = 2;
      FUN_004093c0(local_2c,uVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_1c,1);
      this_val = operator_new(0x6c);
      if (this_val == (void *)0x0) {
        iStack_30 = 0;
      }
      else {
        iStack_30 = FUN_004926e0(this_val,*(undefined4 *)((int)this + 4));
      }
      if (iStack_30 == 0) {
        FUN_004c4150(s__s___d__Not_enough_memory_for_ra_005ad3a8,
                     s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad37c,0x1f0);
      }
      FUN_004a5620(*(int *)((int)this + 0x20),*(undefined4 *)(*(int *)((int)this + 0x20) + 8),1,
                   &iStack_30);
      FUN_00492730(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x20) + 4) + i * 4),local_2c,
                   *puVar5);
      uStack_34 = 0xb4ffffff;
      FUN_004930f0(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x20) + 4) + i * 4),&uStack_34);
      iVar3 = *(int *)(*(int *)(*(int *)((int)this + 0x20) + 4) + i * 4);
      FUN_004934b0(this,uVar2,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
                   *(undefined4 *)(iVar3 + 0x14));
      i = i + 1;
      puVar5 = puVar5 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  FUN_004935b0(this);
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(iStack_28 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004938b0 FUN_004938b0 ==== */

void __thiscall FUN_004938b0(void *this)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  undefined1 *this_val;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e0de;
  pvStack_c = ExceptionList;
  i = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar3 = s_OVL_PLAYER_OUTLINE_005ace7c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_00402940(local_2c,s_OVL_PLAYER_OUTLINE_005ace7c,~i - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(local_2c);
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  local_4 = 0xffffffff;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  i = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad3e0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  FUN_00402940(local_3c,s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad3e0,~i - 1);
  this_val = local_1c;
  pcVar4 = s_OVL_PLAYER_OUTLINE_005ace7c;
  pcVar3 = s_Element__s_not_found_005ad40c;
  local_4 = 1;
  uVar2 = FUN_0049df90(this_val,s_Element__s_not_found_005ad40c);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(*(undefined4 *)((int)this + 0x2c),uVar2,local_3c,0x1ff,this_val,pcVar3,pcVar4);
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
  local_10 = (void *)0x0;
  local_4 = 0xffffffff;
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_38 + -1));
    }
    else {
      *(char *)(local_38 + -1) = cVar1 + -1;
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  (**(code **)(**(int **)((int)this + 0x2c) + 0x28))(&DAT_00577038);
  ExceptionList = local_10;
  return;
}


/* ==== 00493a40 FUN_00493a40 ==== */

void __thiscall FUN_00493a40(void *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint i;
  uint j;
  char *pcVar5;
  undefined1 *this_val;
  char *pcVar6;
  undefined4 local_54;
  int local_50;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined1 *local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e108;
  local_c = ExceptionList;
  if (DAT_006fb964 != 0) {
    ExceptionList = &local_c;
    FUN_00493410();
    FUN_00493640(this);
    FUN_004938b0(this);
    FUN_004028f0(local_3c,0);
    iVar2 = 0;
    local_4 = 0;
    if (DAT_005d2ab0 != -1 && -1 < DAT_005d2ab0 + 1) {
      do {
        local_50 = iVar2 + 1;
        uVar3 = FUN_0049df90(local_1c,s_STRING_FINISH_POS__d_005ad424);
        local_4._0_1_ = 1;
        FUN_004093c0(local_3c,uVar3,0,0xffffffff);
        local_4._0_1_ = 0;
        FUN_004028f0(local_1c,1);
        local_54 = FUN_00485d50(*(undefined4 *)((int)this + 4),local_3c);
        FUN_004028f0(local_4c,0);
        i = 0xffffffff;
        pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad43c;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        cVar1 = FUN_00402a00(local_4c,i,1);
        iVar2 = iVar2 + 1;
        if (cVar1 != '\0') {
          pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad43c;
          pcVar5 = local_48;
          for (j = i >> 2; j != 0; j = j - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar5 = pcVar5 + 4;
          }
          for (j = i & 3; j != 0; j = j - 1) {
            *pcVar5 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          }
          local_48[i] = '\0';
          iVar2 = local_50;
          local_44 = i;
        }
        local_4._0_1_ = 2;
        puVar4 = local_38;
        if (local_38 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        this_val = local_2c;
        pcVar6 = s_Finish_string__s_not_found_in_ov_005ad468;
        uVar3 = FUN_0049df90(this_val,s_Finish_string__s_not_found_in_ov_005ad468);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_00487bc0(local_54,uVar3,local_4c,0x218,this_val,pcVar6,puVar4);
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
        local_4 = local_4 & 0xffffff00;
        if (local_48 != (char *)0x0) {
          cVar1 = local_48[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(local_48 + -1);
          }
          else {
            local_48[-1] = cVar1 + -1;
          }
        }
        local_48 = (char *)0x0;
        local_44 = 0;
        local_40 = 0;
        FUN_004a5620(*(int *)((int)this + 0x28),*(undefined4 *)(*(int *)((int)this + 0x28) + 8),1,
                     &local_54);
      } while (iVar2 < DAT_005d2ab0 + 1);
    }
    if (local_38 != (undefined1 *)0x0) {
      cVar1 = local_38[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_38[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339(local_38 + -1);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00493c80 FUN_00493c80 ==== */

void __thiscall FUN_00493c80(void *this)

{
  int iVar1;
  int i;
  
  if (*(int *)((int)this + 0x18) != 0) {
    FUN_0054b339(*(int *)((int)this + 0x18));
  }
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x1c))();
  i = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)(*(int *)((int)this + 0x20) + 4) + i * 4) != 0) {
        FUN_004928b0();
        FUN_0054b339(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x20) + 4) + i * 4));
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x20) + 4) + i * 4) = 0;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 00493ce0 FUN_00493ce0 ==== */

void __thiscall FUN_00493ce0(void *this)

{
  FUN_004934a0();
  FUN_00493c80(this);
  return;
}


/* ==== 00493d00 FUN_00493d00 ==== */

int FUN_00493d00(undefined4 param_1,int param_2,int param_3)

{
  int __ftol_result;
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < param_3) {
    iVar1 = param_3;
    param_3 = param_2;
  }
  __ftol_result = __ftol();
  if (iVar1 <= __ftol_result) {
    __ftol_result = iVar1;
  }
  if (__ftol_result <= param_3) {
    __ftol_result = param_3;
  }
  return __ftol_result;
}


/* ==== 00493d60 FUN_00493d60 ==== */

void __thiscall FUN_00493d60(void *this)

{
  float fVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  uint uStack_1c;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)((int)this + 0x2c) == 0) {
    FUN_004c4150(s__s___d__Outline_element_not_init_005ad4c0,
                 s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad494,0x26d);
  }
  puVar2 = (uint *)FUN_0047bde0(*(undefined4 *)((int)this + 0x2c));
  uStack_1c = *puVar2;
  uStack_14 = uStack_1c >> 8 & 0xff;
  uVar3 = uStack_1c >> 0x10;
  uStack_10 = uStack_1c >> 0x18;
  uVar5 = uStack_1c & 0xff;
  fVar6 = (float10)FUN_004a6800(&DAT_007128b0);
  fStack_18 = (float)((float10)0.6 / fVar6);
  fVar6 = (float10)FUN_004a6800(&DAT_007128b0);
  fVar1 = fStack_18;
  *(float *)((int)this + 0x3c) = (float)(fVar6 + (float10)*(float *)((int)this + 0x3c));
  uVar3 = FUN_00493d00(uVar3 & 0xff,0x80,0xff,fStack_18);
  uStack_14 = FUN_00493d00(uStack_14,0x80,0xff,fVar1);
  uVar5 = FUN_00493d00(uVar5,0x80,0xff,fVar1);
  iVar4 = FUN_00493d00(uStack_10,0xff,0xff,fVar1);
  uStack_1c = ((iVar4 << 8 | uVar3) << 8 | uStack_14) << 8 | uVar5;
  if (0.6 <= *(float *)((int)this + 0x3c)) {
    *(undefined4 *)((int)this + 0x3c) = 0;
    if (*(char *)((int)this + 0x38) == '\0') {
      uStack_1c = 0xff808080;
      *(undefined1 *)((int)this + 0x38) = 1;
    }
    else {
      uStack_1c = 0xffffffff;
      *(undefined1 *)((int)this + 0x38) = 0;
    }
  }
  iVar4 = *(int *)((int)this + 0x18);
  uStack_c = *(undefined4 *)(iVar4 + 0x18);
  uStack_8 = *(undefined4 *)(iVar4 + 0x1c);
  uStack_4 = *(undefined4 *)(iVar4 + 0x20);
  FUN_0047bc50(*(undefined4 *)((int)this + 0x2c),&uStack_c);
  (**(code **)(**(int **)((int)this + 0x2c) + 0x28))(&uStack_1c);
  return;
}


/* ==== 00493ed0 FUN_00493ed0 ==== */

void __thiscall FUN_00493ed0(void *this,undefined4 param_2)

{
  int iVar1;
  int i;
  
  FUN_004928c0(*(undefined4 *)((int)this + 0x18),param_2);
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x1c))();
  i = 0;
  if (0 < iVar1) {
    do {
      FUN_004928c0(*(undefined4 *)(*(int *)(*(int *)((int)this + 0x20) + 4) + i * 4),param_2);
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 00493f10 FUN_00493f10 ==== */

void __thiscall FUN_00493f10(void *this,undefined4 param_2)

{
  int iVar1;
  int i;
  
  (**(code **)(**(int **)((int)this + 0x2c) + 0x20))(param_2);
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x30))();
  i = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x34) + 4) + i * 4) + 0x20))(param_2);
      i = i + 1;
    } while (i < iVar1);
  }
  return;
}


/* ==== 00493f50 FUN_00493f50 ==== */

undefined1 * FUN_00493f50(undefined1 *this_val,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_14;
  undefined4 local_10;
  char local_c [11];
  undefined1 local_1;
  
  local_10 = 0;
  FUN_00494060(param_2,&local_10,&local_14,&param_2);
  FUN_00559677(local_c,0xb,s__02d__02d__d_005ad4e8,local_10,local_14,param_2);
  *this_val = (undefined1)param_2;
  i = 0xffffffff;
  local_1 = 0;
  pcVar3 = local_c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  *(undefined4 *)(this_val + 4) = 0;
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
    if ((*(uint *)(this_val + 0xc) < 0x20) && (i <= *(uint *)(this_val + 0xc))) goto LAB_00494031;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    return this_val;
  }
  FUN_00402b20(this_val,i);
LAB_00494031:
  pcVar3 = local_c;
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


/* ==== 00494060 FUN_00494060 ==== */

void FUN_00494060(int param_1,int *param_2,int *param_3,int *param_4)

{
  *param_2 = param_1 / 60000;
  *param_3 = (param_1 % 60000) / 1000;
  *param_4 = ((param_1 % 60000) % 1000) / 100;
  return;
}


/* ==== 004940e0 FUN_004940e0 ==== */

void __thiscall FUN_004940e0(void *this)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  void *this_00;
  uint k;
  uint m;
  void *this_01;
  int i;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_69;
  int local_68;
  int *local_64;
  int j;
  undefined1 local_5c [4];
  char *pcStack_58;
  int iStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056e152;
  pvStack_c = ExceptionList;
  iVar5 = 0xfffffff;
  local_68 = 0xfffffff;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_5c,0);
  local_4c = CONCAT31(local_4c._1_3_,local_69);
  local_4 = 0;
  FUN_004028f0(&local_4c,0);
  local_4._0_1_ = 1;
  if (0 < DAT_005d2ab0) {
    piVar3 = &DAT_005973c4;
    i = DAT_005d2ab0;
    do {
      if ((piVar3[3] != 0) && (iVar1 = *piVar3, iVar1 < iVar5)) {
        iVar5 = iVar1;
        local_68 = iVar1;
      }
      piVar3 = piVar3 + 0x16;
      i = i + -1;
    } while (i != 0);
  }
  if (DAT_006fbaa0 < iVar5) {
    local_68 = DAT_006fbaa0;
    iVar5 = DAT_006fbaa0;
  }
  j = 0;
  if (0 < DAT_005d2ab0) {
    local_64 = &DAT_005973c4;
    do {
      if (local_64[3] == 0) {
        k = 0xffffffff;
        pcVar6 = s_________005ad4fc;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        k = ~k - 1;
        cVar2 = FUN_00402a00(local_5c,k,1);
        if (cVar2 != '\0') {
          pcVar6 = s_________005ad4fc;
          pcVar7 = pcStack_58;
          for (m = k >> 2; m != 0; m = m - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (m = k & 3; m != 0; m = m - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          FUN_004029e0(local_5c,k);
          iVar5 = local_68;
        }
      }
      else {
        i = *local_64;
        if (i == iVar5) {
          uVar4 = FUN_00493f50(local_3c,i);
          local_4._0_1_ = 2;
          FUN_004093c0(local_5c,uVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(local_3c,1);
        }
        else {
          uVar4 = FUN_00493f50(auStack_2c,i - iVar5);
          local_4._0_1_ = 3;
          FUN_004093c0(&local_4c,uVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(auStack_2c,1);
          uVar4 = FUN_004797e0(this_00,local_1c,s___005ad4f8,(int)&local_4c);
          local_4._0_1_ = 4;
          FUN_004093c0(local_5c,uVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(local_1c,1);
        }
      }
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x28) + 4) + local_64[1] * 4) + 0x48))
                (local_5c);
      j = j + 1;
      local_64 = local_64 + 0x16;
    } while (j < DAT_005d2ab0);
  }
  if (DAT_006fbaa0 == iVar5) {
    uVar4 = FUN_00493f50(local_1c,DAT_006fbaa0);
    local_4._0_1_ = 5;
    FUN_004093c0(local_5c,uVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(local_1c,1);
  }
  else {
    uVar4 = FUN_00493f50(local_1c,DAT_006fbaa0 - iVar5);
    local_4._0_1_ = 6;
    FUN_004093c0(&local_4c,uVar4,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004028f0(local_1c,1);
    uVar4 = FUN_004797e0(this_01,local_1c,s___005ad504,(int)&local_4c);
    local_4._0_1_ = 7;
    FUN_004093c0(local_5c,uVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
  }
  (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x48))
            (local_5c);
  FUN_004a67f0(&DAT_007128b0);
  iVar5 = __ftol();
  if (iVar5 % 600 < 300) {
    (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x20))(1)
    ;
  }
  else {
    (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x20))(0)
    ;
  }
  if (iStack_50 != 0) {
    cVar2 = *(char *)(iStack_50 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(iStack_50 + -1);
    }
    else {
      *(char *)(iStack_50 + -1) = cVar2 + -1;
    }
  }
  iStack_50 = 0;
  local_4c = 0;
  uStack_48 = 0;
  if (j != 0) {
    cVar2 = *(char *)(j + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(j + -1) = cVar2 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_0054b339(j + -1);
  }
  ExceptionList = pvStack_14;
  return;
}


/* ==== 00494480 FUN_00494480 ==== */

void __thiscall FUN_00494480(void *this)

{
  int *piVar1;
  int i;
  
  i = 0;
  if (0 < DAT_005d2ab0) {
    piVar1 = &DAT_005973c8;
    do {
      FUN_00492980(*(void **)(*(int *)(*(int *)((int)this + 0x20) + 4) + i * 4),*piVar1,
                   *(undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 4) + *piVar1 * 4));
      i = i + 1;
      piVar1 = piVar1 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  FUN_00492980(*(void **)((int)this + 0x18),DAT_006fbaa4,
               *(undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 4) + DAT_006fbaa4 * 4));
  return;
}


/* ==== 004944e0 FUN_004944e0 ==== */

void __thiscall FUN_004944e0(void *this,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)((int)this + 0x40) != 0) {
      FUN_00493ed0(this,0);
      FUN_00493f10(this,0);
    }
  }
  else {
    if (param_2 == 5) {
      if (*(int *)((int)this + 0x40) != 5) {
        FUN_00493ed0(this,1);
        FUN_00493f10(this,0);
        FUN_00494480(this);
      }
      FUN_004940e0(this);
      *(undefined4 *)((int)this + 0x40) = 5;
      return;
    }
    if (*(int *)((int)this + 0x40) != param_2) {
      FUN_00493ed0(this,1);
      FUN_00493f10(this,1);
      *(int *)((int)this + 0x40) = param_2;
      return;
    }
  }
  *(int *)((int)this + 0x40) = param_2;
  return;
}


/* ==== 00494680 FUN_00494680 ==== */

void FUN_00494680(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00494690 FUN_00494690 ==== */

void FUN_00494690(void)

{
  FUN_005584e0(&LAB_004946a0);
  return;
}


/* ==== 004946c0 FUN_004946c0 ==== */

void FUN_004946c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004946d0 FUN_004946d0 ==== */

void FUN_004946d0(void)

{
  FUN_005584e0(&LAB_004946e0);
  return;
}


/* ==== 00494720 FUN_00494720 ==== */

void * __thiscall FUN_00494720(void *this,byte param_2)

{
  FUN_00494740();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00494740 FUN_00494740 ==== */

void __thiscall FUN_00494740(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34);
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_00576b04;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  iVar1 = *(int *)((int)this + 0x28);
  *(undefined ***)((int)this + 0x24) = &PTR_LAB_00576e18;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  iVar1 = *(int *)((int)this + 0x20);
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00577058;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  FUN_004925f0(this);
  return;
}


/* ==== 004947f0 FUN_004947f0 ==== */

void __thiscall FUN_004947f0(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00577058;
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


