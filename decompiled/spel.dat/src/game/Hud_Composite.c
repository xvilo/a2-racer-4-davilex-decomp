/* spel.dat — game/Hud_Composite.cpp: 70 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047abe0 FUN_0047abe0 ==== */

void FUN_0047abe0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0047abf0 FUN_0047abf0 ==== */

void FUN_0047abf0(void)

{
  FUN_005584e0(&LAB_0047ac00);
  return;
}


/* ==== 0047ac20 FUN_0047ac20 ==== */

void FUN_0047ac20(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0047ac30 FUN_0047ac30 ==== */

void FUN_0047ac30(void)

{
  FUN_005584e0(&LAB_0047ac40);
  return;
}


/* ==== 0047ac50 FUN_0047ac50 ==== */

void __thiscall FUN_0047ac50(void *this)

{
  *(undefined ***)this = &PTR_FUN_00576a90;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 0047ac70 FUN_0047ac70 ==== */

void __thiscall FUN_0047ac70(void *this)

{
  *(undefined ***)this = &PTR_FUN_00576a90;
  if (*(int *)((int)this + 0xc) != 0) {
    FUN_0047ad00();
    return;
  }
  return;
}


/* ==== 0047ac90 FUN_0047ac90 ==== */

void __thiscall FUN_0047ac90(void *this,int param_2)

{
  void *operator_new_result;
  
  if (*(int *)((int)this + 0xc) == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = param_2;
    operator_new_result = operator_new(param_2 * 0xc);
    if (operator_new_result == (void *)0x0) {
      operator_new_result = (void *)0x0;
    }
    *(void **)((int)this + 0xc) = operator_new_result;
    operator_new_result = operator_new(param_2 * 0xc);
    if (operator_new_result != (void *)0x0) {
      *(void **)((int)this + 0x10) = operator_new_result;
      return;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return;
}


/* ==== 0047ad00 FUN_0047ad00 ==== */

void __thiscall FUN_0047ad00(void *this)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    FUN_0054b339(*(int *)((int)this + 0xc));
    FUN_0054b339(*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return;
}


/* ==== 0047ad30 FUN_0047ad30 ==== */

void * __thiscall FUN_0047ad30(void *this,int this_val)

{
  void *operator_new_result;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int i;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  *(undefined ***)this = &PTR_FUN_00576a90;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(this_val + 4);
  i = *(int *)(this_val + 8);
  *(int *)((int)this + 8) = i;
  operator_new_result = operator_new(i * 0xc);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)((int)this + 0xc) = operator_new_result;
  operator_new_result = operator_new(*(int *)((int)this + 8) * 0xc);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)((int)this + 0x10) = operator_new_result;
  i = 0;
  if (*(int *)((int)this + 4) < 1) {
    return this;
  }
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)FUN_0047aff0(this_val,local_18,i);
    puVar2 = (undefined4 *)(*(int *)((int)this + 0xc) + iVar3);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar1 = (undefined4 *)FUN_0047b020(this_val,local_c,i);
    puVar2 = (undefined4 *)(iVar3 + *(int *)((int)this + 0x10));
    i = i + 1;
    iVar3 = iVar3 + 0xc;
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
  } while (i < *(int *)((int)this + 4));
  return this;
}


/* ==== 0047aeb0 FUN_0047aeb0 ==== */

undefined4 __thiscall FUN_0047aeb0(void *this,void *this_val)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int i;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (this == this_val) {
    return 0;
  }
  if (*(int *)((int)this_val + 4) < *(int *)((int)this + 8)) {
    *(int *)((int)this + 4) = *(int *)((int)this_val + 4);
    i = 0;
    if (0 < *(int *)((int)this_val + 4)) {
      iVar3 = 0;
      do {
        puVar1 = (undefined4 *)FUN_0047aff0(this_val,local_18,i);
        puVar2 = (undefined4 *)(*(int *)((int)this + 0xc) + iVar3);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar1 = (undefined4 *)FUN_0047b020(this_val,local_c,i);
        puVar2 = (undefined4 *)(*(int *)((int)this + 0x10) + iVar3);
        i = i + 1;
        iVar3 = iVar3 + 0xc;
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
      } while (i < *(int *)((int)this_val + 4));
    }
    return 0;
  }
  return 0xffffffff;
}


/* ==== 0047aff0 FUN_0047aff0 ==== */

void __thiscall FUN_0047aff0(void *this,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + param_3 * 0xc);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}


/* ==== 0047b020 FUN_0047b020 ==== */

void __thiscall FUN_0047b020(void *this,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x10) + param_3 * 0xc);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}


/* ==== 0047b050 FUN_0047b050 ==== */

void __thiscall FUN_0047b050(void *this)

{
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 0047b060 FUN_0047b060 ==== */

void __thiscall FUN_0047b060(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 4) < *(int *)((int)this + 8)) {
    puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4) * 0xc);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return;
}


/* ==== 0047b0a0 FUN_0047b0a0 ==== */

void __thiscall
FUN_0047b0a0(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 4) < *(int *)((int)this + 8)) {
    puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4) * 0xc);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1 = (undefined4 *)(*(int *)((int)this + 0x10) + *(int *)((int)this + 4) * 0xc);
    *puVar1 = param_5;
    puVar1[1] = param_6;
    puVar1[2] = param_7;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return;
}


/* ==== 0047b100 FUN_0047b100 ==== */

undefined4 __thiscall FUN_0047b100(void *this)

{
  return *(undefined4 *)((int)this + 4);
}


/* ==== 0047b110 FUN_0047b110 ==== */

void __thiscall FUN_0047b110(void *this,undefined4 param_2)

{
  void *operator_new_result;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int i;
  
  if (2 < *(int *)((int)this + 4)) {
    operator_new_result = operator_new(*(int *)((int)this + 4) << 5);
    if (operator_new_result == (void *)0x0) {
      operator_new_result = (void *)0x0;
    }
    i = 0;
    if (0 < *(int *)((int)this + 4)) {
      puVar1 = (undefined4 *)((int)operator_new_result + 8);
      iVar3 = 0;
      do {
        i = i + 1;
        puVar1[-2] = *(undefined4 *)(iVar3 + *(int *)((int)this + 0xc));
        puVar1[-1] = *(undefined4 *)(iVar3 + 4 + *(int *)((int)this + 0xc));
        *puVar1 = *(undefined4 *)(iVar3 + 8 + *(int *)((int)this + 0xc));
        puVar1[3] = 0xff000000;
        puVar1[2] = param_2;
        puVar1[4] = *(undefined4 *)(iVar3 + *(int *)((int)this + 0x10));
        puVar1[5] = *(undefined4 *)(iVar3 + 4 + *(int *)((int)this + 0x10));
        puVar1 = puVar1 + 8;
        iVar3 = iVar3 + 0xc;
      } while (i < *(int *)((int)this + 4));
    }
    i = FUN_004b7400(&DAT_00712130,s_S_SHADOW_PCX_005a9a54);
    if (DAT_006fb8d0 != 0) {
      iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar3 + 0x60) = i;
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(i * 0x48 + DAT_0073b1b0);
      *(undefined4 *)(iVar3 + 0x58) = 1;
      if (*(int *)(iVar3 + 0x5c) == 1) {
        *(undefined4 *)(iVar3 + 0x58) = 0;
        (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
      }
      if ((DAT_0073b4ec != i) &&
         (DAT_0073b4ec = i,
         i = (**(code **)(*DAT_0073b4b4 + 0x5c))
                       (DAT_0073b4b4,1,*(undefined4 *)(i * 0x48 + DAT_0073b1b0)), i != 0)) {
        uVar2 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x122,uVar2);
      }
    }
    (**(code **)(*DAT_0073b4b4 + 0x74))
              (DAT_0073b4b4,6,2,operator_new_result,*(undefined4 *)((int)this + 4),1);
    FUN_0054b339(operator_new_result);
  }
  return;
}


/* ==== 0047b2c0 FUN_0047b2c0 ==== */

void FUN_0047b2c0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0047b2d0 FUN_0047b2d0 ==== */

void FUN_0047b2d0(void)

{
  FUN_005584e0(&LAB_0047b2e0);
  return;
}


/* ==== 0047b300 FUN_0047b300 ==== */

void FUN_0047b300(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0047b310 FUN_0047b310 ==== */

void FUN_0047b310(void)

{
  FUN_005584e0(&LAB_0047b320);
  return;
}


/* ==== 0047b330 FUN_0047b330 ==== */

void * __thiscall FUN_0047b330(void *this,byte param_2)

{
  FUN_0047ac70();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0047b350 FUN_0047b350 ==== */

void __thiscall FUN_0047b350(void *this)

{
  *(undefined ***)this = &PTR_FUN_00576a94;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 0047b370 FUN_0047b370 ==== */

void __thiscall FUN_0047b370(void *this)

{
  *(undefined ***)this = &PTR_FUN_00576a94;
  if (*(int *)((int)this + 4) != 0) {
    FUN_0047b410();
    return;
  }
  return;
}


/* ==== 0047b390 FUN_0047b390 ==== */

void __thiscall FUN_0047b390(void *this,int param_2)

{
  int *operator_new_result;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba6b;
  local_c = ExceptionList;
  piVar1 = (int *)0x0;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_c;
    *(undefined4 *)((int)this + 8) = 0;
    *(int *)((int)this + 0xc) = param_2;
    operator_new_result = operator_new(param_2 * 0x18 + 4);
    local_4 = 0;
    if (operator_new_result != (int *)0x0) {
      piVar1 = operator_new_result + 1;
      *operator_new_result = param_2;
      FUN_00558643(piVar1,0x18,param_2,&LAB_0047a0a0,FUN_0047a130);
    }
    *(int **)((int)this + 4) = piVar1;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047b410 FUN_0047b410 ==== */

void __thiscall FUN_0047b410(void *this)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(3);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


/* ==== 0047b440 FUN_0047b440 ==== */

undefined4 __thiscall FUN_0047b440(void *this,undefined4 param_1,int this_val)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  int this_val_2;
  
  this_val_2 = this_val;
  iVar2 = FUN_0047b100(this_val);
  if ((2 < iVar2) && (iVar2 + 1 < *(int *)((int)this + 0xc))) {
    *(int *)((int)this + 8) = iVar2 + 1;
    uVar3 = FUN_0047aff0(this_val,local_24,2);
    uVar4 = FUN_0047aff0(this_val,local_18,0);
    uVar5 = FUN_0047aff0(this_val,local_c,1);
    FUN_0047a1e0(*(undefined4 *)((int)this + 4),uVar5,uVar4,uVar3);
    if (0 < iVar2) {
      this_val = 0x18;
      iVar7 = 1;
      do {
        iVar6 = iVar7;
        if (iVar2 <= iVar7) {
          iVar6 = iVar7 - iVar2;
        }
        uVar3 = FUN_0047aff0(this_val_2,local_c,iVar7 + -1);
        uVar4 = FUN_0047aff0(this_val_2,local_18,iVar6);
        FUN_0047a1e0(this_val + *(int *)((int)this + 4),param_1,uVar4,uVar3);
        this_val = this_val + 0x18;
        bVar1 = iVar7 < iVar2;
        iVar7 = iVar7 + 1;
      } while (bVar1);
    }
    return 0;
  }
  return 0xffffffff;
}


/* ==== 0047b790 FUN_0047b790 ==== */

int __thiscall FUN_0047b790(void *this,int param_1,undefined1 *this_val_2)

{
  undefined1 *puVar1;
  int i;
  int iVar2;
  undefined1 *this_val;
  undefined1 *this_val_00;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba7d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  i = FUN_0047b100(param_1);
  if (i < 3) {
    i = -3;
  }
  else {
    FUN_0047ad30(local_20,param_1);
    i = 0;
    this_val_00 = local_20;
    local_4 = 0;
    if (0 < *(int *)((int)this + 8)) {
      param_1 = 0;
      puVar1 = this_val_2;
      this_val = this_val_00;
      do {
        this_val_00 = puVar1;
        iVar2 = FUN_0047a310((void *)(*(int *)((int)this + 4) + param_1),this_val,this_val_00,i);
        if (iVar2 < 0) {
          local_4 = 0xffffffff;
          FUN_0047ac70(local_20);
          ExceptionList = local_c;
          return iVar2;
        }
        FUN_0047b050(this_val);
        iVar2 = FUN_0047b100(this_val_00);
        if (iVar2 < 3) goto LAB_0047b846;
        i = i + 1;
        param_1 = param_1 + 0x18;
        puVar1 = this_val;
        this_val = this_val_00;
      } while (i < *(int *)((int)this + 8));
    }
    FUN_0047aeb0(this_val_2,this_val_00);
LAB_0047b846:
    local_4 = 0xffffffff;
    FUN_0047ac70(local_20);
    i = 0;
  }
  ExceptionList = local_c;
  return i;
}


/* ==== 0047b8d0 FUN_0047b8d0 ==== */

void FUN_0047b8d0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0047b8e0 FUN_0047b8e0 ==== */

void FUN_0047b8e0(void)

{
  FUN_005584e0(&LAB_0047b8f0);
  return;
}


/* ==== 0047b910 FUN_0047b910 ==== */

void FUN_0047b910(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0047b920 FUN_0047b920 ==== */

void FUN_0047b920(void)

{
  FUN_005584e0(&LAB_0047b930);
  return;
}


/* ==== 0047b940 FUN_0047b940 ==== */

void * __thiscall FUN_0047b940(void *this,byte param_2)

{
  FUN_0047b370();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0047ba80 FUN_0047ba80 ==== */

/* WARNING: Removing unreachable block (ram,0x0047bae1) */

void * __thiscall FUN_0047ba80(void *this,undefined1 *param_2,undefined1 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *this_val;
  int iVar5;
  undefined1 *puVar6;
  uint i;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  *(undefined4 *)((int)this + 0x14) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2c) = param_3;
  *(undefined4 *)((int)this + 0x30) = 0;
  this_val = (undefined1 *)((int)this + 0x34);
  *this_val = *param_2;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0x3c) - uVar1;
    iVar4 = -1;
    if (iVar3 != -1) {
      iVar4 = iVar3;
    }
    if (iVar4 != 0) {
      iVar5 = uVar1 + *(int *)((int)this + 0x38);
      FUN_005580e0(iVar5,iVar5 + iVar4,iVar3 - iVar4);
      iVar4 = *(int *)((int)this + 0x3c) - iVar4;
      cVar2 = FUN_00402a00(this_val,iVar4,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar4);
      }
    }
    FUN_0040f800(this_val,0,0);
    *(undefined ***)this = &PTR_LAB_00576a98;
    return this;
  }
  if (uVar1 != 0) {
    puVar6 = *(undefined1 **)(param_2 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    if ((byte)puVar6[-1] < 0xfe) {
      *(undefined4 *)((int)this + 0x38) = 0;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x40) = 0;
      this_val = *(undefined1 **)(param_2 + 4);
      if (this_val == (undefined1 *)0x0) {
        this_val = &DAT_0057629c;
      }
      *(undefined1 **)((int)this + 0x38) = this_val;
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_2 + 0xc);
      this_val[-1] = this_val[-1] + '\x01';
      *(undefined ***)this = &PTR_LAB_00576a98;
      return this;
    }
  }
  cVar2 = FUN_00402a00(this_val,uVar1,1);
  if (cVar2 != '\0') {
    puVar7 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(param_2 + 4);
    }
    puVar8 = *(undefined4 **)((int)this + 0x38);
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
  *(undefined ***)this = &PTR_LAB_00576a98;
  return this;
}


/* ==== 0047bc00 FUN_0047bc00 ==== */

undefined1 __thiscall FUN_0047bc00(void *this)

{
  return *(undefined1 *)((int)this + 0x2c);
}


/* ==== 0047bc10 FUN_0047bc10 ==== */

int __thiscall FUN_0047bc10(void *this)

{
  return (int)this + 0x34;
}


/* ==== 0047bc20 FUN_0047bc20 ==== */

int __thiscall FUN_0047bc20(void *this)

{
  return (int)this + 4;
}


/* ==== 0047bc30 FUN_0047bc30 ==== */

int __thiscall FUN_0047bc30(void *this)

{
  return (int)this + 0x10;
}


/* ==== 0047bc40 FUN_0047bc40 ==== */

int __thiscall FUN_0047bc40(void *this)

{
  return (int)this + 0x1c;
}


/* ==== 0047bc50 FUN_0047bc50 ==== */

void __thiscall FUN_0047bc50(void *this,undefined4 *param_2)

{
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  return;
}


/* ==== 0047bc70 FUN_0047bc70 ==== */

void __thiscall FUN_0047bc70(void *this,undefined4 *param_2)

{
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(undefined4 *)((int)this + 0x18) = param_2[2];
  return;
}


/* ==== 0047bc90 FUN_0047bc90 ==== */

void __thiscall FUN_0047bc90(void *this,undefined4 *param_2)

{
  *(undefined4 *)((int)this + 0x1c) = *param_2;
  *(undefined4 *)((int)this + 0x20) = param_2[1];
  *(undefined4 *)((int)this + 0x24) = param_2[2];
  return;
}


/* ==== 0047bcb0 FUN_0047bcb0 ==== */

void __thiscall FUN_0047bcb0(void *this,undefined1 param_2)

{
  *(undefined1 *)((int)this + 0x2c) = param_2;
  return;
}


/* ==== 0047bcd0 FUN_0047bcd0 ==== */

uint __thiscall FUN_0047bcd0(void *this,int param_2)

{
  char *_Str2;
  int __strcmpi_result;
  char *_Str1;
  
  _Str2 = *(char **)((int)this + 0x38);
  if (_Str2 == (char *)0x0) {
    _Str2 = "";
  }
  _Str1 = *(char **)(param_2 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  __strcmpi_result = __strcmpi(_Str1,_Str2);
  return ~-(uint)(__strcmpi_result != 0) & (uint)this;
}


/* ==== 0047bda0 FUN_0047bda0 ==== */

void __thiscall FUN_0047bda0(void *this,undefined4 param_2)

{
  if (*(code **)((int)this + 0x30) != (code *)0x0) {
    (**(code **)((int)this + 0x30))(this);
  }
  (*(code *)**(undefined4 **)this)(param_2);
  return;
}


/* ==== 0047bdc0 FUN_0047bdc0 ==== */

void FUN_0047bdc0(undefined4 *param_1)

{
  int in_ECX;
  
  if (DAT_007126a6 != '\0') {
    *(undefined4 *)(in_ECX + 0x28) = *param_1;
  }
  return;
}


/* ==== 0047bde0 FUN_0047bde0 ==== */

int __thiscall FUN_0047bde0(void *this)

{
  return (int)this + 0x28;
}


/* ==== 0047bdf0 FUN_0047bdf0 ==== */

void FUN_0047bdf0(undefined1 param_1)

{
  DAT_007126a6 = param_1;
  return;
}


/* ==== 0047be40 FUN_0047be40 ==== */

void FUN_0047be40(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0047be50 FUN_0047be50 ==== */

void FUN_0047be50(void)

{
  FUN_005584e0(&LAB_0047be60);
  return;
}


/* ==== 0047be80 FUN_0047be80 ==== */

void FUN_0047be80(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0047be90 FUN_0047be90 ==== */

void FUN_0047be90(void)

{
  FUN_005584e0(&LAB_0047bea0);
  return;
}


/* ==== 0047beb0 FUN_0047beb0 ==== */

void * __thiscall FUN_0047beb0(void *this,undefined4 param_2)

{
  undefined1 *operator_new_result;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047ba80(this,param_2,1);
  local_4 = 0;
  *(undefined ***)((int)this + 0x74) = &PTR_LAB_00576b04;
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
  *(undefined1 **)((int)this + 0x78) = operator_new_result;
  *(undefined ***)this = &PTR_FUN_00576ac8;
  *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x80) = 0x3f800000;
  ExceptionList = local_c;
  return this;
}


/* ==== 0047bf40 FUN_0047bf40 ==== */

void __thiscall FUN_0047bf40(void *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int i;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056bab5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00576ac8;
  local_4 = 1;
  iVar3 = (*(code *)**(undefined4 **)((int)this + 0x74))();
  i = 0;
  if (0 < iVar3) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x78) + 4) + i * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(1);
      }
      i = i + 1;
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x78) + 4) + -4 + i * 4) = 0;
    } while (i < iVar3);
  }
  iVar3 = *(int *)((int)this + 0x78);
  *(undefined ***)((int)this + 0x74) = &PTR_LAB_00576b04;
  if (iVar3 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar3 + 4));
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    FUN_0054b339(iVar3);
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined ***)this = &PTR_LAB_00576a98;
  iVar3 = *(int *)((int)this + 0x38);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0047c030 FUN_0047c030 ==== */

void __thiscall FUN_0047c030(void *this,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint i;
  void *extraout_ECX;
  uint j;
  void *extraout_ECX_00;
  void *this_00;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  undefined4 this_val;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056bacf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_0047bc00();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x30))(param_2);
    iVar2 = (*(code *)**(undefined4 **)((int)this + 0x74))();
    param_2 = 0;
    if (0 < iVar2) {
      do {
        pcStack_28 = (char *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
        this_val = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x78) + 4) + param_2 * 4);
        auStack_2c[0] = (undefined1)param_2;
        i = 0xffffffff;
        pcVar4 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9b18;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        cVar1 = FUN_00402a00(auStack_2c,i,1);
        this_00 = extraout_ECX;
        if (cVar1 != '\0') {
          pcVar4 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9b18;
          pcVar5 = pcStack_28;
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
          FUN_004029e0(auStack_2c,i);
          this_00 = extraout_ECX_00;
        }
        uStack_4 = 0;
        uVar3 = FUN_004797e0(this_00,auStack_1c,s_NULL_Component_in_Child_Componen_005a9b44,
                             (int)this + 0x34);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_00487bc0(this_val,uVar3,auStack_2c,0x3f);
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_4 = 0xffffffff;
        if (pcStack_28 != (char *)0x0) {
          cVar1 = pcStack_28[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(pcStack_28 + -1);
          }
          else {
            pcStack_28[-1] = cVar1 + -1;
          }
        }
        pcStack_28 = (char *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
        FUN_0047bda0(this_val,(int)this + 0x44);
        param_2 = param_2 + 1;
      } while (param_2 < iVar2);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047c1d0 FUN_0047c1d0 ==== */

void __thiscall FUN_0047c1d0(void *this,int *this_val)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined **appuStack_2c [3];
  undefined1 auStack_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056bb01;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*this_val + 0xc))((int)this + 0x34);
  if (iVar1 != 0) {
    iVar1 = FUN_0047bc10(this_val);
    puVar2 = (undefined1 *)
             FUN_004797e0(&stack0xffffffa4,&stack0xffffffa4,s_Invalid_Add__Component_005a9b78,iVar1)
    ;
    puStack_8 = (undefined1 *)0x0;
    puVar2 = (undefined1 *)FUN_004796b0(auStack_4c,puVar2,s_contains_005a9b6c);
    puStack_8._0_1_ = 1;
    uVar3 = FUN_0047c9a0(auStack_3c,puVar2,(int)this + 0x34);
    puStack_8._0_1_ = 2;
    FUN_00558826(appuStack_2c);
    puStack_8._0_1_ = 3;
    FUN_004028f0(auStack_20,0);
    puStack_8._0_1_ = 4;
    appuStack_2c[0] = &PTR_FUN_00576b14;
    FUN_004093c0(auStack_20,uVar3,0,0xffffffff);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(appuStack_2c,&DAT_0057f730);
  }
  FUN_004a5620(*(int *)((int)this + 0x78),*(undefined4 *)(*(int *)((int)this + 0x78) + 8),1,
               &stack0x00000000);
  ExceptionList = pvStack_10;
  return;
}


/* ==== 0047c3c0 FUN_0047c3c0 ==== */

void * __thiscall FUN_0047c3c0(void *this,int param_2)

{
  char *_Str2;
  int iVar1;
  void *pvVar2;
  char *_Str1;
  int i;
  
  _Str2 = *(char **)((int)this + 0x38);
  if (_Str2 == (char *)0x0) {
    _Str2 = "";
  }
  _Str1 = *(char **)(param_2 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,_Str2);
  if (iVar1 != 0) {
    iVar1 = (*(code *)**(undefined4 **)((int)this + 0x74))();
    i = 0;
    if (0 < iVar1) {
      do {
        pvVar2 = (void *)(**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x78) + 4) + i * 4) +
                                     0xc))(param_2);
        if (pvVar2 != (void *)0x0) {
          return pvVar2;
        }
        i = i + 1;
      } while (i < iVar1);
    }
    return (void *)0x0;
  }
  return this;
}


/* ==== 0047c4d0 FUN_0047c4d0 ==== */

float10 __thiscall FUN_0047c4d0(void *this)

{
  return (float10)*(float *)((int)this + 0x7c);
}


/* ==== 0047c4e0 FUN_0047c4e0 ==== */

float10 __thiscall FUN_0047c4e0(void *this)

{
  return (float10)*(float *)((int)this + 0x80);
}


/* ==== 0047c4f0 FUN_0047c4f0 ==== */

void __thiscall FUN_0047c4f0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x7c) = param_2;
  return;
}


/* ==== 0047c560 FUN_0047c560 ==== */

void __thiscall FUN_0047c560(void *this,undefined4 param_2)

{
  int iVar1;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x74))();
  i = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x78) + 4) + i * 4) + 0x20))(param_2);
      i = i + 1;
    } while (i < iVar1);
  }
  FUN_0047bcb0(this,param_2);
  return;
}


/* ==== 0047c5a0 FUN_0047c5a0 ==== */

void __thiscall FUN_0047c5a0(void *this)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint j;
  void *extraout_ECX;
  uint k;
  void *extraout_ECX_00;
  void *this_00;
  char *pcVar6;
  char *pcVar7;
  int i;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056bb1b;
  pvStack_c = ExceptionList;
  puVar3 = *(undefined1 **)((int)this + 0x38);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  ExceptionList = &pvStack_c;
  FUN_004c3fa0(s_Name____s__Composite__005a9b90,puVar3);
  i = 0;
  iVar4 = (*(code *)**(undefined4 **)((int)this + 0x74))();
  if (0 < iVar4) {
    do {
      j = 0xffffffff;
      piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x78) + 4) + i * 4);
      pcStack_28 = (char *)0x0;
      pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9ba8;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      j = ~j - 1;
      uStack_24 = 0;
      uStack_20 = 0;
      cVar2 = FUN_00402a00(auStack_2c,j,1);
      this_00 = extraout_ECX;
      if (cVar2 != '\0') {
        pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9ba8;
        pcVar7 = pcStack_28;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        FUN_004029e0(auStack_2c,j);
        this_00 = extraout_ECX_00;
      }
      uStack_4 = 0;
      uVar5 = FUN_004797e0(this_00,auStack_1c,s_NULL_Component_in_Child_Componen_005a9bd4,
                           (int)this + 0x34);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_00487bc0(piVar1,uVar5,auStack_2c,0x13b);
      if (iStack_18 != 0) {
        cVar2 = *(char *)(iStack_18 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar2 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 0xffffffff;
      if (pcStack_28 != (char *)0x0) {
        cVar2 = pcStack_28[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339(pcStack_28 + -1);
        }
        else {
          pcStack_28[-1] = cVar2 + -1;
        }
      }
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      (**(code **)(*piVar1 + 0x2c))();
      i = i + 1;
      iVar4 = (*(code *)**(undefined4 **)((int)this + 0x74))();
    } while (i < iVar4);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0047c770 FUN_0047c770 ==== */

void FUN_0047c770(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0047c780 FUN_0047c780 ==== */

void FUN_0047c780(void)

{
  FUN_005584e0(&LAB_0047c790);
  return;
}


/* ==== 0047c7b0 FUN_0047c7b0 ==== */

void FUN_0047c7b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0047c7c0 FUN_0047c7c0 ==== */

void FUN_0047c7c0(void)

{
  FUN_005584e0(&LAB_0047c7d0);
  return;
}


/* ==== 0047c7e0 FUN_0047c7e0 ==== */

void * __thiscall FUN_0047c7e0(void *this,byte param_2)

{
  FUN_0047bf40();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0047c800 FUN_0047c800 ==== */

/* WARNING: Removing unreachable block (ram,0x0047c854) */

void * __thiscall FUN_0047c800(void *this,int param_2)

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
  puStack_8 = &LAB_0056bb38;
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
        goto LAB_0047c8b2;
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
      *(undefined ***)this = &PTR_FUN_00576b14;
      ExceptionList = local_c;
      return this;
    }
  }
LAB_0047c8b2:
  *(undefined ***)this = &PTR_FUN_00576b14;
  ExceptionList = local_c;
  return this;
}


/* ==== 0047c960 FUN_0047c960 ==== */

void __thiscall FUN_0047c960(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00576b04;
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


/* ==== 0047c9a0 FUN_0047c9a0 ==== */

undefined1 * FUN_0047c9a0(undefined1 *this_val,undefined1 *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint j;
  uint i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056bb58;
  pvStack_c = ExceptionList;
  local_1c[0] = *param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_004093c0(local_1c,param_2,0,0xffffffff);
  local_4 = 0;
  i = 0xffffffff;
  if (*(uint *)(param_3 + 8) != 0xffffffff) {
    i = *(uint *)(param_3 + 8);
  }
  if (-local_14 - 1U <= i) {
    FUN_0054b1b4();
  }
  if (i != 0) {
    iVar1 = local_14 + i;
    cVar2 = FUN_00402a00(local_1c,iVar1,0);
    if (cVar2 != '\0') {
      puVar3 = *(undefined4 **)(param_3 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)&DAT_0057629c;
      }
      puVar4 = (undefined4 *)(local_14 + local_18);
      for (j = i >> 2; j != 0; j = j - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(undefined1 *)(local_18 + iVar1) = 0;
      local_14 = iVar1;
    }
  }
  *this_val = local_1c[0];
  *(undefined4 *)(this_val + 4) = 0;
  *(undefined4 *)(this_val + 8) = 0;
  *(undefined4 *)(this_val + 0xc) = 0;
  FUN_004093c0(this_val,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return this_val;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return this_val;
}


