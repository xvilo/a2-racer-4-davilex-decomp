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

void FUN_0047ac50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576a90;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


/* ==== 0047ac70 FUN_0047ac70 ==== */

void FUN_0047ac70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576a90;
  if (in_ECX[3] != 0) {
    FUN_0047ad00();
    return;
  }
  return;
}


/* ==== 0047ac90 FUN_0047ac90 ==== */

void FUN_0047ac90(int param_1)

{
  void *operator_new_result;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    *(undefined4 *)(in_ECX + 4) = 0;
    *(int *)(in_ECX + 8) = param_1;
    operator_new_result = operator_new(param_1 * 0xc);
    if (operator_new_result == (void *)0x0) {
      operator_new_result = (void *)0x0;
    }
    *(void **)(in_ECX + 0xc) = operator_new_result;
    operator_new_result = operator_new(param_1 * 0xc);
    if (operator_new_result != (void *)0x0) {
      *(void **)(in_ECX + 0x10) = operator_new_result;
      return;
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  return;
}


/* ==== 0047ad00 FUN_0047ad00 ==== */

void FUN_0047ad00(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_0054b339(*(int *)(in_ECX + 0xc));
    FUN_0054b339(*(undefined4 *)(in_ECX + 0x10));
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  return;
}


/* ==== 0047ad30 FUN_0047ad30 ==== */

void FUN_0047ad30(int param_1)

{
  void *operator_new_result;
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  int i;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  *in_ECX = &PTR_FUN_00576a90;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  i = *(int *)(param_1 + 8);
  in_ECX[2] = i;
  operator_new_result = operator_new(i * 0xc);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  in_ECX[3] = operator_new_result;
  operator_new_result = operator_new(in_ECX[2] * 0xc);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  in_ECX[4] = operator_new_result;
  i = 0;
  if ((int)in_ECX[1] < 1) {
    return;
  }
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)FUN_0047aff0(local_18,i);
    puVar2 = (undefined4 *)(in_ECX[3] + iVar3);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar1 = (undefined4 *)FUN_0047b020(local_c,i);
    puVar2 = (undefined4 *)(iVar3 + in_ECX[4]);
    i = i + 1;
    iVar3 = iVar3 + 0xc;
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
  } while (i < (int)in_ECX[1]);
  return;
}


/* ==== 0047aeb0 FUN_0047aeb0 ==== */

undefined4 FUN_0047aeb0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iVar3;
  int i;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (in_ECX == param_1) {
    return 0;
  }
  if (*(int *)(param_1 + 4) < *(int *)(in_ECX + 8)) {
    *(int *)(in_ECX + 4) = *(int *)(param_1 + 4);
    i = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar3 = 0;
      do {
        puVar1 = (undefined4 *)FUN_0047aff0(local_18,i);
        puVar2 = (undefined4 *)(*(int *)(in_ECX + 0xc) + iVar3);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar1 = (undefined4 *)FUN_0047b020(local_c,i);
        puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x10) + iVar3);
        i = i + 1;
        iVar3 = iVar3 + 0xc;
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
      } while (i < *(int *)(param_1 + 4));
    }
    return 0;
  }
  return 0xffffffff;
}


/* ==== 0047aff0 FUN_0047aff0 ==== */

void FUN_0047aff0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xc) + param_2 * 0xc);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return;
}


/* ==== 0047b020 FUN_0047b020 ==== */

void FUN_0047b020(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x10) + param_2 * 0xc);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return;
}


/* ==== 0047b050 FUN_0047b050 ==== */

void FUN_0047b050(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}


/* ==== 0047b060 FUN_0047b060 ==== */

void FUN_0047b060(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) < *(int *)(in_ECX + 8)) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 4) * 0xc);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  }
  return;
}


/* ==== 0047b0a0 FUN_0047b0a0 ==== */

void FUN_0047b0a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) < *(int *)(in_ECX + 8)) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 4) * 0xc);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 4) * 0xc);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    puVar1[2] = param_6;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  }
  return;
}


/* ==== 0047b100 FUN_0047b100 ==== */

undefined4 FUN_0047b100(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


/* ==== 0047b110 FUN_0047b110 ==== */

void FUN_0047b110(undefined4 param_1)

{
  void *operator_new_result;
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int i;
  
  if (2 < *(int *)(in_ECX + 4)) {
    operator_new_result = operator_new(*(int *)(in_ECX + 4) << 5);
    if (operator_new_result == (void *)0x0) {
      operator_new_result = (void *)0x0;
    }
    i = 0;
    if (0 < *(int *)(in_ECX + 4)) {
      puVar1 = (undefined4 *)((int)operator_new_result + 8);
      iVar3 = 0;
      do {
        i = i + 1;
        puVar1[-2] = *(undefined4 *)(iVar3 + *(int *)(in_ECX + 0xc));
        puVar1[-1] = *(undefined4 *)(iVar3 + 4 + *(int *)(in_ECX + 0xc));
        *puVar1 = *(undefined4 *)(iVar3 + 8 + *(int *)(in_ECX + 0xc));
        puVar1[3] = 0xff000000;
        puVar1[2] = param_1;
        puVar1[4] = *(undefined4 *)(iVar3 + *(int *)(in_ECX + 0x10));
        puVar1[5] = *(undefined4 *)(iVar3 + 4 + *(int *)(in_ECX + 0x10));
        puVar1 = puVar1 + 8;
        iVar3 = iVar3 + 0xc;
      } while (i < *(int *)(in_ECX + 4));
    }
    i = FUN_004b7400(s_S_SHADOW_PCX_005a9a54);
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
              (DAT_0073b4b4,6,2,operator_new_result,*(undefined4 *)(in_ECX + 4),1);
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

void FUN_0047b330(byte param_1)

{
  FUN_0047ac70();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0047b350 FUN_0047b350 ==== */

void FUN_0047b350(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576a94;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  return;
}


/* ==== 0047b370 FUN_0047b370 ==== */

void FUN_0047b370(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00576a94;
  if (in_ECX[1] != 0) {
    FUN_0047b410();
    return;
  }
  return;
}


/* ==== 0047b390 FUN_0047b390 ==== */

void FUN_0047b390(int param_1)

{
  int *operator_new_result;
  int in_ECX;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba6b;
  local_c = ExceptionList;
  piVar1 = (int *)0x0;
  if (*(int *)(in_ECX + 4) == 0) {
    ExceptionList = &local_c;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(int *)(in_ECX + 0xc) = param_1;
    operator_new_result = operator_new(param_1 * 0x18 + 4);
    local_4 = 0;
    if (operator_new_result != (int *)0x0) {
      piVar1 = operator_new_result + 1;
      *operator_new_result = param_1;
      FUN_00558643(piVar1,0x18,param_1,&LAB_0047a0a0,FUN_0047a130);
    }
    *(int **)(in_ECX + 4) = piVar1;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047b410 FUN_0047b410 ==== */

void FUN_0047b410(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (*(undefined4 **)(in_ECX + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 4))(3);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return;
}


/* ==== 0047b440 FUN_0047b440 ==== */

undefined4 FUN_0047b440(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = FUN_0047b100();
  if ((2 < iVar2) && (iVar2 + 1 < *(int *)(in_ECX + 0xc))) {
    *(int *)(in_ECX + 8) = iVar2 + 1;
    uVar3 = FUN_0047aff0(local_24,2);
    uVar4 = FUN_0047aff0(local_18,0);
    uVar5 = FUN_0047aff0(local_c,1);
    FUN_0047a1e0(uVar5,uVar4,uVar3);
    if (0 < iVar2) {
      iVar7 = 1;
      do {
        iVar6 = iVar7;
        if (iVar2 <= iVar7) {
          iVar6 = iVar7 - iVar2;
        }
        uVar3 = FUN_0047aff0(local_c,iVar7 + -1);
        uVar4 = FUN_0047aff0(local_18,iVar6);
        FUN_0047a1e0(param_1,uVar4,uVar3);
        bVar1 = iVar7 < iVar2;
        iVar7 = iVar7 + 1;
      } while (bVar1);
    }
    return 0;
  }
  return 0xffffffff;
}


/* ==== 0047b790 FUN_0047b790 ==== */

int FUN_0047b790(undefined4 param_1,undefined1 *param_2)

{
  int i;
  int iVar1;
  int in_ECX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba7d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  i = FUN_0047b100();
  if (i < 3) {
    i = -3;
  }
  else {
    FUN_0047ad30(param_1);
    i = 0;
    puVar3 = local_20;
    local_4 = 0;
    puVar2 = puVar3;
    if (0 < *(int *)(in_ECX + 8)) {
      do {
        puVar3 = param_2;
        iVar1 = FUN_0047a310(puVar2,puVar3,i);
        if (iVar1 < 0) {
          local_4 = 0xffffffff;
          FUN_0047ac70();
          ExceptionList = local_c;
          return iVar1;
        }
        FUN_0047b050();
        iVar1 = FUN_0047b100();
        if (iVar1 < 3) goto LAB_0047b846;
        i = i + 1;
        param_2 = puVar2;
        puVar2 = puVar3;
      } while (i < *(int *)(in_ECX + 8));
    }
    FUN_0047aeb0(puVar3);
LAB_0047b846:
    local_4 = 0xffffffff;
    FUN_0047ac70();
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

void FUN_0047b940(byte param_1)

{
  FUN_0047b370();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0047ba80 FUN_0047ba80 ==== */

/* WARNING: Removing unreachable block (ram,0x0047bae1) */

void FUN_0047ba80(undefined4 *param_1,undefined1 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined1 *puVar4;
  uint i;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = 0x3f800000;
  in_ECX[6] = 0x3f800000;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0xb) = param_2;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 0xd) = *(undefined1 *)param_1;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  uVar1 = param_1[2];
  if (in_ECX + 0xd == param_1) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[0xf] - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      FUN_005580e0(uVar1 + in_ECX[0xe],uVar1 + in_ECX[0xe] + iVar6,iVar3 - iVar6);
      iVar3 = in_ECX[0xf];
      cVar2 = FUN_00402a00(iVar3 - iVar6,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar6);
      }
    }
    FUN_0040f800(0,0);
    *in_ECX = &PTR_LAB_00576a98;
    return;
  }
  if (uVar1 != 0) {
    puVar4 = (undefined1 *)param_1[1];
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      in_ECX[0xe] = 0;
      in_ECX[0xf] = 0;
      in_ECX[0x10] = 0;
      puVar4 = (undefined1 *)param_1[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      in_ECX[0xe] = puVar4;
      in_ECX[0xf] = param_1[2];
      in_ECX[0x10] = param_1[3];
      puVar4[-1] = puVar4[-1] + '\x01';
      *in_ECX = &PTR_LAB_00576a98;
      return;
    }
  }
  cVar2 = FUN_00402a00(uVar1,1);
  if (cVar2 != '\0') {
    puVar5 = (undefined4 *)&DAT_0057629c;
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)param_1[1];
    }
    puVar7 = (undefined4 *)in_ECX[0xe];
    for (i = uVar1 >> 2; i != 0; i = i - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (i = uVar1 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(uVar1);
  }
  *in_ECX = &PTR_LAB_00576a98;
  return;
}


/* ==== 0047bc00 FUN_0047bc00 ==== */

undefined1 FUN_0047bc00(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x2c);
}


/* ==== 0047bc10 FUN_0047bc10 ==== */

int FUN_0047bc10(void)

{
  int in_ECX;
  
  return in_ECX + 0x34;
}


/* ==== 0047bc20 FUN_0047bc20 ==== */

int FUN_0047bc20(void)

{
  int in_ECX;
  
  return in_ECX + 4;
}


/* ==== 0047bc30 FUN_0047bc30 ==== */

int FUN_0047bc30(void)

{
  int in_ECX;
  
  return in_ECX + 0x10;
}


/* ==== 0047bc40 FUN_0047bc40 ==== */

int FUN_0047bc40(void)

{
  int in_ECX;
  
  return in_ECX + 0x1c;
}


/* ==== 0047bc50 FUN_0047bc50 ==== */

void FUN_0047bc50(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *param_1;
  *(undefined4 *)(in_ECX + 8) = param_1[1];
  *(undefined4 *)(in_ECX + 0xc) = param_1[2];
  return;
}


/* ==== 0047bc70 FUN_0047bc70 ==== */

void FUN_0047bc70(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_1[1];
  *(undefined4 *)(in_ECX + 0x18) = param_1[2];
  return;
}


/* ==== 0047bc90 FUN_0047bc90 ==== */

void FUN_0047bc90(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = *param_1;
  *(undefined4 *)(in_ECX + 0x20) = param_1[1];
  *(undefined4 *)(in_ECX + 0x24) = param_1[2];
  return;
}


/* ==== 0047bcb0 FUN_0047bcb0 ==== */

void FUN_0047bcb0(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x2c) = param_1;
  return;
}


/* ==== 0047bcd0 FUN_0047bcd0 ==== */

uint FUN_0047bcd0(int param_1)

{
  char *_Str2;
  int __strcmpi_result;
  uint in_ECX;
  char *_Str1;
  
  _Str2 = *(char **)(in_ECX + 0x38);
  if (_Str2 == (char *)0x0) {
    _Str2 = "";
  }
  _Str1 = *(char **)(param_1 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  __strcmpi_result = __strcmpi(_Str1,_Str2);
  return ~-(uint)(__strcmpi_result != 0) & in_ECX;
}


/* ==== 0047bda0 FUN_0047bda0 ==== */

void FUN_0047bda0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  if ((code *)in_ECX[0xc] != (code *)0x0) {
    (*(code *)in_ECX[0xc])();
  }
  (**(code **)*in_ECX)(param_1);
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

int FUN_0047bde0(void)

{
  int in_ECX;
  
  return in_ECX + 0x28;
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

void FUN_0047beb0(undefined4 param_1)

{
  undefined1 *operator_new_result;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ba98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047ba80(param_1,1);
  local_4 = 0;
  in_ECX[0x1d] = &PTR_LAB_00576b04;
  operator_new_result = operator_new(0x10);
  if (operator_new_result == (undefined1 *)0x0) {
    operator_new_result = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = (undefined1)param_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
  }
  in_ECX[0x1e] = operator_new_result;
  *in_ECX = &PTR_FUN_00576ac8;
  in_ECX[0x1f] = 0x3f800000;
  in_ECX[0x20] = 0x3f800000;
  ExceptionList = local_c;
  return;
}


/* ==== 0047bf40 FUN_0047bf40 ==== */

void FUN_0047bf40(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  int i;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056bab5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_00576ac8;
  local_4 = 1;
  iVar3 = (**(code **)in_ECX[0x1d])();
  i = 0;
  if (0 < iVar3) {
    do {
      piVar2 = *(int **)(*(int *)(in_ECX[0x1e] + 4) + i * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(1);
      }
      i = i + 1;
      *(undefined4 *)(*(int *)(in_ECX[0x1e] + 4) + -4 + i * 4) = 0;
    } while (i < iVar3);
  }
  iVar3 = in_ECX[0x1e];
  in_ECX[0x1d] = &PTR_LAB_00576b04;
  if (iVar3 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar3 + 4));
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    FUN_0054b339(iVar3);
  }
  in_ECX[0x1e] = 0;
  *in_ECX = &PTR_LAB_00576a98;
  iVar3 = in_ECX[0xe];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  ExceptionList = pvStack_c;
  return;
}


/* ==== 0047c030 FUN_0047c030 ==== */

void FUN_0047c030(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint i;
  uint j;
  char *pcVar5;
  char *pcVar6;
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
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056bacf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_0047bc00();
  if (cVar2 != '\0') {
    (**(code **)(*in_ECX + 0x30))(param_1);
    iVar3 = (**(code **)in_ECX[0x1d])();
    param_1 = 0;
    if (0 < iVar3) {
      do {
        pcStack_28 = (char *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
        uVar1 = *(undefined4 *)(*(int *)(in_ECX[0x1e] + 4) + param_1 * 4);
        auStack_2c[0] = (undefined1)param_1;
        i = 0xffffffff;
        pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9b18;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        i = ~i - 1;
        cVar2 = FUN_00402a00(i,1);
        if (cVar2 != '\0') {
          pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9b18;
          pcVar6 = pcStack_28;
          for (j = i >> 2; j != 0; j = j - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (j = i & 3; j != 0; j = j - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          FUN_004029e0(i);
        }
        uStack_4 = 0;
        uVar4 = FUN_004797e0(auStack_1c,s_NULL_Component_in_Child_Componen_005a9b44,in_ECX + 0xd);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_00487bc0(uVar1,uVar4,auStack_2c,0x3f);
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
        FUN_0047bda0(in_ECX + 0x11);
        param_1 = param_1 + 1;
      } while (param_1 < iVar3);
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047c1d0 FUN_0047c1d0 ==== */

void FUN_0047c1d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined **appuStack_2c [7];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056bb01;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_1 + 0xc))(in_ECX + 0x34);
  if (iVar1 != 0) {
    uVar2 = FUN_0047bc10();
    uVar2 = FUN_004797e0(&stack0xffffffa4,s_Invalid_Add__Component_005a9b78,uVar2);
    puStack_8 = (undefined1 *)0x0;
    uVar2 = FUN_004796b0(auStack_4c,uVar2,s_contains_005a9b6c);
    puStack_8._0_1_ = 1;
    uVar2 = FUN_0047c9a0(auStack_3c,uVar2,in_ECX + 0x34);
    puStack_8._0_1_ = 2;
    FUN_00558826();
    puStack_8._0_1_ = 3;
    FUN_004028f0(0);
    puStack_8._0_1_ = 4;
    appuStack_2c[0] = &PTR_FUN_00576b14;
    FUN_004093c0(uVar2,0,0xffffffff);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(appuStack_2c,&DAT_0057f730);
  }
  FUN_004a5620(*(undefined4 *)(*(int *)(in_ECX + 0x78) + 8),1,&stack0x00000000);
  ExceptionList = pvStack_10;
  return;
}


/* ==== 0047c3c0 FUN_0047c3c0 ==== */

int FUN_0047c3c0(int param_1)

{
  char *_Str2;
  int iVar1;
  int iVar2;
  int in_ECX;
  char *_Str1;
  int i;
  
  _Str2 = *(char **)(in_ECX + 0x38);
  if (_Str2 == (char *)0x0) {
    _Str2 = "";
  }
  _Str1 = *(char **)(param_1 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,_Str2);
  if (iVar1 != 0) {
    iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x74))();
    i = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x78) + 4) + i * 4) + 0xc))
                          (param_1);
        if (iVar2 != 0) {
          return iVar2;
        }
        i = i + 1;
      } while (i < iVar1);
    }
    return 0;
  }
  return in_ECX;
}


/* ==== 0047c4d0 FUN_0047c4d0 ==== */

float10 FUN_0047c4d0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x7c);
}


/* ==== 0047c4e0 FUN_0047c4e0 ==== */

float10 FUN_0047c4e0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x80);
}


/* ==== 0047c4f0 FUN_0047c4f0 ==== */

void FUN_0047c4f0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x7c) = param_1;
  return;
}


/* ==== 0047c560 FUN_0047c560 ==== */

void FUN_0047c560(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int i;
  
  iVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x74))();
  i = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x78) + 4) + i * 4) + 0x20))(param_1);
      i = i + 1;
    } while (i < iVar1);
  }
  FUN_0047bcb0(param_1);
  return;
}


/* ==== 0047c5a0 FUN_0047c5a0 ==== */

void FUN_0047c5a0(void)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint j;
  uint k;
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
  puVar3 = *(undefined1 **)(in_ECX + 0x38);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  ExceptionList = &pvStack_c;
  FUN_004c3fa0(s_Name____s__Composite__005a9b90,puVar3);
  i = 0;
  iVar4 = (*(code *)**(undefined4 **)(in_ECX + 0x74))();
  if (0 < iVar4) {
    do {
      j = 0xffffffff;
      piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x78) + 4) + i * 4);
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
      cVar2 = FUN_00402a00(j,1);
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
        FUN_004029e0(j);
      }
      uStack_4 = 0;
      uVar5 = FUN_004797e0(auStack_1c,s_NULL_Component_in_Child_Componen_005a9bd4,in_ECX + 0x34);
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
      iVar4 = (*(code *)**(undefined4 **)(in_ECX + 0x74))();
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

void FUN_0047c7e0(byte param_1)

{
  FUN_0047bf40();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 0047c800 FUN_0047c800 ==== */

/* WARNING: Removing unreachable block (ram,0x0047c854) */

void FUN_0047c800(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056bb38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(param_1);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(param_1 + 0xc);
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (in_ECX + 3 == (undefined4 *)(param_1 + 0xc)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = in_ECX[5] - uVar1;
    iVar5 = -1;
    if (iVar3 != -1) {
      iVar5 = iVar3;
    }
    if (iVar5 != 0) {
      FUN_005580e0(uVar1 + in_ECX[4],uVar1 + in_ECX[4] + iVar5,iVar3 - iVar5);
      iVar3 = in_ECX[5];
      cVar2 = FUN_00402a00(iVar3 - iVar5,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar3 - iVar5);
      }
    }
    FUN_00402c30();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar4 = *(undefined1 **)(param_1 + 0x10);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        in_ECX[4] = puVar4;
        in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
        in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_0047c8b2;
      }
    }
    cVar2 = FUN_00402a00(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar7 = (undefined4 *)in_ECX[4];
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
      in_ECX[5] = uVar1;
      *(undefined1 *)(in_ECX[4] + uVar1) = 0;
      *in_ECX = &PTR_FUN_00576b14;
      ExceptionList = local_c;
      return;
    }
  }
LAB_0047c8b2:
  *in_ECX = &PTR_FUN_00576b14;
  ExceptionList = local_c;
  return;
}


/* ==== 0047c960 FUN_0047c960 ==== */

void FUN_0047c960(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = &PTR_LAB_00576b04;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  in_ECX[1] = 0;
  return;
}


/* ==== 0047c9a0 FUN_0047c9a0 ==== */

undefined1 * FUN_0047c9a0(undefined1 *param_1,undefined1 *param_2,int param_3)

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
  FUN_004093c0(param_2,0,0xffffffff);
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
    cVar2 = FUN_00402a00(iVar1,0);
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
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}


