/* spel.dat — engine/obj_main.CPP: 37 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004a74a0 FUN_004a74a0 ==== */

void FUN_004a74a0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  *(undefined4 *)(in_ECX + *(int *)(in_ECX + 800) * 4) = param_1;
  iVar1 = *(int *)(in_ECX + 800) + 1;
  *(int *)(in_ECX + 800) = iVar1;
  if (199 < iVar1) {
    FUN_004c3fa0(s__s___d__num_alphaobjects_>_max___005afac0,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x67,200);
    *(undefined4 *)(in_ECX + 800) = 199;
  }
  return;
}


/* ==== 004a74f0 FUN_004a74f0 ==== */

void FUN_004a74f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int i;
  
  i = 0;
  piVar3 = in_ECX;
  if (0 < in_ECX[200]) {
    do {
      if (*(int *)(DAT_0073b0d0 + *piVar3 * 0xa9 + 0xa5) == 3) {
        iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0xe,1);
        if (iVar1 != 0) {
          uVar2 = FUN_004bb290(iVar1);
          uVar5 = 0x79;
          pcVar4 = s__s__d_____ZBUFFER__error_setting_005afb0c;
          goto LAB_004a757a;
        }
      }
      else {
        iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0xe,0);
        if (iVar1 != 0) {
          uVar2 = FUN_004bb290(iVar1);
          uVar5 = 0x75;
          pcVar4 = s__s__d_____ZBUFFER__error_setting_0059c150;
LAB_004a757a:
          FUN_004c4150(pcVar4,s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,uVar5,uVar2);
        }
      }
      (**(code **)(*DAT_0073b4b4 + 0x5c))
                (DAT_0073b4b4,0x13,
                 *(undefined4 *)(&DAT_005afa50 + *(int *)(DAT_0073b0d0 + *piVar3 * 0xa9 + 0xa5) * 8)
                );
      (**(code **)(*DAT_0073b4b4 + 0x5c))
                (DAT_0073b4b4,0x14,
                 *(undefined4 *)(&DAT_005afa54 + *(int *)(DAT_0073b0d0 + *piVar3 * 0xa9 + 0xa5) * 8)
                );
      if (*(char *)(DAT_0073b0d0 + *piVar3 * 0xa9 + 0x90) != '\0') {
        FUN_004b5b10();
      }
      i = i + 1;
      piVar3 = piVar3 + 1;
    } while (i < in_ECX[200]);
  }
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0xe,1);
  if (iVar1 != 0) {
    uVar2 = FUN_004bb290(iVar1);
    FUN_004c4150(s__s__d_____ZBUFFER__error_setting_005afb0c,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x86,uVar2);
  }
  in_ECX[200] = 0;
  return;
}


/* ==== 004a7670 FUN_004a7670 ==== */

void FUN_004a7670(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0073b0d0 + param_1 + 0x99 + param_1 * 0xa8);
  iVar1 = DAT_0073b0d0 + param_1 + param_1 * 0xa8;
  if (iVar2 == -1) {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar1 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  DAT_00715e9c = DAT_00715e9c + *(int *)(DAT_0073b5c8 + 0x94 + iVar2 * 0xac) / 3;
  DAT_00715ea0 = DAT_00715ea0 + *(int *)(DAT_0073b5c8 + 0x94 + iVar2 * 0xac);
  return;
}


/* ==== 004a7700 FUN_004a7700 ==== */

void FUN_004a7700(uint size)

{
  FUN_004aa680(size);
  return;
}


/* ==== 004a7710 FUN_004a7710 ==== */

void FUN_004a7710(void)

{
  int iVar1;
  
  if (DAT_00715e5c == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_00715e7d,&DAT_00715e64,
                 DAT_00715e54);
    if (DAT_00715e50 != 0) {
      iVar1 = DAT_00715e50 + -4;
      FUN_005586c5(DAT_00715e50,0xf0,*(undefined4 *)(DAT_00715e50 + -4),FUN_004ab690);
      FUN_0054b339(iVar1);
    }
  }
  if (DAT_00715e5c != 0) {
    FUN_0054b339(DAT_00715e60);
    DAT_00715e5c = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


/* ==== 004a7790 FUN_004a7790 ==== */

int FUN_004a7790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int i;
  
  i = DAT_00715e58;
  if (DAT_00715e5c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,&DAT_00715e64,DAT_00715e54,
                 &DAT_00715e7d);
    i = DAT_00715e58;
  }
  for (; i < DAT_00715e54; i = i + 1) {
    if (*(char *)(DAT_00715e60 + i) == '\0') goto LAB_004a7887;
  }
  i = 0;
  if (0 < DAT_00715e58) {
    do {
      if (*(char *)(DAT_00715e60 + i) == '\0') goto LAB_004a7887;
      i = i + 1;
    } while (i < DAT_00715e58);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,&DAT_00715e64,DAT_00715e54,
               &DAT_00715e7d);
  i = -1;
LAB_004a7822:
  FUN_004a7ed0(i,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  return i;
LAB_004a7887:
  *(undefined1 *)(DAT_00715e60 + i) = 1;
  DAT_00715e58 = i;
  goto LAB_004a7822;
}


/* ==== 004a78a0 FUN_004a78a0 ==== */

int FUN_004a78a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int i;
  
  i = DAT_00715e58;
  if (DAT_00715e5c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,&DAT_00715e64,DAT_00715e54,
                 &DAT_00715e7d);
    i = DAT_00715e58;
  }
  for (; i < DAT_00715e54; i = i + 1) {
    if (*(char *)(DAT_00715e60 + i) == '\0') goto LAB_004a79b4;
  }
  i = 0;
  if (0 < DAT_00715e58) {
    do {
      if (*(char *)(DAT_00715e60 + i) == '\0') goto LAB_004a79b4;
      i = i + 1;
    } while (i < DAT_00715e58);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,&DAT_00715e64,DAT_00715e54,
               &DAT_00715e7d);
  i = -1;
LAB_004a7933:
  FUN_004c3fa0(s_Adding_main_object___d__005afc0c,i);
  FUN_004c3fa0(s_mesh__d_texture__d_005afbf4,param_7,param_8);
  FUN_004a7d70(i,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  return i;
LAB_004a79b4:
  *(undefined1 *)(DAT_00715e60 + i) = 1;
  DAT_00715e58 = i;
  goto LAB_004a7933;
}


/* ==== 004a79d0 FUN_004a79d0 ==== */

void FUN_004a79d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  FUN_004c3fa0(s_Init_physics_for_main_object___d_005afc28,param_1);
  FUN_004a9130(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
  return;
}


/* ==== 004a7a50 FUN_004a7a50 ==== */

void FUN_004a7a50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  *(undefined1 *)(DAT_00715e60 + param_1) = 0;
  *(undefined1 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0x90) = 0;
  FUN_004b4580(iVar1);
  return;
}


/* ==== 004a7bd0 FUN_004a7bd0 ==== */

void FUN_004a7bd0(void)

{
  return;
}


/* ==== 004a7be0 FUN_004a7be0 ==== */

/* WARNING: Removing unreachable block (ram,0x004a7bf9) */

void FUN_004a7be0(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint i;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (in_ECX == param_1) {
    if (*(uint *)(in_ECX + 8) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar3 = *(int *)(in_ECX + 8) - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      iVar5 = uVar1 + *(int *)(in_ECX + 4);
      FUN_005580e0(iVar5,iVar5 + iVar7,iVar3 - iVar7);
      iVar7 = *(int *)(in_ECX + 8) - iVar7;
      cVar2 = FUN_00402a00(iVar7,0);
      if (cVar2 != '\0') {
        FUN_004029e0(iVar7);
      }
    }
    FUN_00402c30();
    return;
  }
  if (uVar1 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      iVar7 = *(int *)(in_ECX + 4);
      if (iVar7 != 0) {
        cVar2 = *(char *)(iVar7 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339((char *)(iVar7 + -1));
        }
        else {
          *(char *)(iVar7 + -1) = cVar2 + -1;
        }
      }
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(in_ECX + 4) = puVar4;
      *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  cVar2 = FUN_00402a00(uVar1,1);
  if (cVar2 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_1 + 4);
    }
    puVar8 = *(undefined4 **)(in_ECX + 4);
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
    *(uint *)(in_ECX + 8) = uVar1;
    *(undefined1 *)(uVar1 + *(int *)(in_ECX + 4)) = 0;
  }
  return;
}


/* ==== 004a7d10 FUN_004a7d10 ==== */

void FUN_004a7d10(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 0x18) == 1) {
    FUN_004c4150(s___s___d_Can_not_set_orientation_o_005afc4c,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x145);
  }
  iVar1 = DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9;
  *(undefined4 *)(iVar1 + 0x74) = *param_1;
  *(undefined4 *)(iVar1 + 0x78) = param_1[1];
  *(undefined4 *)(iVar1 + 0x7c) = param_1[2];
  return;
}


/* ==== 004a7d70 FUN_004a7d70 ==== */

void FUN_004a7d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *(int *)(in_ECX + 0x2c) = param_11;
  *(undefined4 *)(in_ECX + 0x30) = param_12;
  *(undefined4 *)(in_ECX + 0x6c) = param_10;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  iVar2 = FUN_004b4c70(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&LAB_004b5620
                      );
  *(int *)(in_ECX + 0x24) = iVar2;
  *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xc) = param_1;
  *(undefined4 *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9 + 0xa1) = 2;
  *(undefined1 *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9 + 0x90) = 1;
  FUN_004b5770();
  iVar2 = *(int *)(in_ECX + 0x24);
  iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
  iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
  if (iVar1 == 1) {
    param_11 = *(int *)(iVar2 + 0x99);
  }
  else if (iVar1 == 2) {
    param_11 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                                *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  if (*(int *)(DAT_00719c28 + param_11 * 4) != 0) {
    *(int *)(in_ECX + 0xe8) = param_11;
    uVar3 = FUN_004bca20(param_11);
    *(undefined4 *)(in_ECX + 0xec) = uVar3;
  }
  return;
}


/* ==== 004a7ed0 FUN_004a7ed0 ==== */

void FUN_004a7ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *(int *)(in_ECX + 0x2c) = param_11;
  *(undefined4 *)(in_ECX + 0x30) = param_12;
  *(undefined4 *)(in_ECX + 0x6c) = param_10;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  iVar2 = FUN_004b52c0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&LAB_004b5620
                      );
  *(int *)(in_ECX + 0x24) = iVar2;
  *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xc) = param_1;
  *(undefined4 *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9 + 0xa1) = 2;
  *(undefined1 *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9 + 0x90) = 1;
  FUN_004b5770();
  iVar2 = *(int *)(in_ECX + 0x24);
  iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
  iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
  if (iVar1 == 1) {
    param_11 = *(int *)(iVar2 + 0x99);
  }
  else if (iVar1 == 2) {
    param_11 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                                *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  if (*(int *)(DAT_00719c28 + param_11 * 4) != 0) {
    *(int *)(in_ECX + 0xe8) = param_11;
    uVar3 = FUN_004bca20(param_11);
    *(undefined4 *)(in_ECX + 0xec) = uVar3;
  }
  return;
}


/* ==== 004a8030 FUN_004a8030 ==== */

void FUN_004a8030(undefined4 param_1)

{
  int in_ECX;
  int i;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  i = *(int *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8);
  iVar1 = DAT_0073b0d0 + iVar1 + iVar1 * 0xa8;
  if (i == 1) {
    iVar1 = *(int *)(iVar1 + 0x99);
  }
  else if (i == 2) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar1 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  else {
    FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
    iVar1 = 0;
  }
  i = 0;
  iVar1 = iVar1 * 0xac;
  if (0 < *(int *)(iVar1 + 0x84 + DAT_0073b5c8)) {
    iVar2 = 0;
    do {
      i = i + 1;
      *(undefined4 *)(*(int *)(iVar1 + 0x80 + DAT_0073b5c8) + 0x10 + iVar2) = param_1;
      iVar2 = iVar2 + 0x20;
    } while (i < *(int *)(iVar1 + 0x84 + DAT_0073b5c8));
  }
  return;
}


/* ==== 004a80e0 FUN_004a80e0 ==== */

void FUN_004a80e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x4c) = param_1;
  return;
}


/* ==== 004a80f0 FUN_004a80f0 ==== */

undefined4 FUN_004a80f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x4c);
}


/* ==== 004a8100 FUN_004a8100 ==== */

void FUN_004a8100(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int j;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 0xac)) {
    piVar2 = (int *)(in_ECX + 0x7c);
    iVar3 = param_1;
    iVar6 = DAT_0073b5c8;
    do {
      piVar4 = (int *)(DAT_0073b0d0 + *piVar2 * 0xa9);
      if (*(int *)((int)piVar4 + 0xa5) != 2) {
        if (*piVar4 == 1) {
          iVar3 = *(int *)((int)piVar4 + 0x99);
        }
        else if (*piVar4 == 2) {
          iVar3 = *(int *)(*(int *)(*(int *)(piVar4[1] * 9 + 4 + DAT_0073b168) + piVar4[2] * 4) *
                           0x10 + DAT_0073b120);
        }
        if (*(int *)((int)piVar4 + 0xa5) != 1) {
          j = 0;
          iVar1 = iVar3 * 0xac;
          if (0 < *(int *)(iVar1 + 0x84 + iVar6)) {
            iVar5 = 0;
            do {
              j = j + 1;
              *(int *)(*(int *)(iVar1 + 0x80 + iVar6) + 0x10 + iVar5) = param_1;
              iVar5 = iVar5 + 0x20;
              iVar6 = DAT_0073b5c8;
            } while (j < *(int *)(iVar1 + 0x84 + DAT_0073b5c8));
          }
        }
      }
      i = i + 1;
      piVar2 = piVar2 + 1;
    } while (i < *(int *)(in_ECX + 0xac));
  }
  return;
}


/* ==== 004a8200 FUN_004a8200 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8200(void)

{
  uint uVar1;
  int i;
  uint __ftol_result;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int j;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 uStack_10;
  float local_c;
  undefined4 uStack_8;
  undefined1 local_4 [4];
  
  if (*(int *)(in_ECX + 0x48) == -1) {
    iVar3 = DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9;
    FUN_004ad3d0(*(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
                 *(undefined4 *)(iVar3 + 0x58),&local_1c,&local_18,local_4);
    uVar1 = FUN_004ad710(local_18,local_1c);
    uStack_8 = 0;
    local_c = (float)(*(uint *)(in_ECX + 0x4c) >> 0x18);
    local_14 = ABS(*(float *)(in_ECX + 0xc4)) * 0.1 + 1.0;
    FUN_004a6800();
    local_14 = (float)(uVar1 & 0xff);
    uStack_10 = 0;
    i = __ftol();
    uVar1 = __ftol();
    __ftol_result = __ftol();
    uVar2 = __ftol();
    *(uint *)(in_ECX + 0x4c) = ((uVar1 | i << 8) << 8 | __ftol_result) << 8 | uVar2;
    uVar1 = __ftol();
    __ftol_result = __ftol();
    uVar2 = __ftol();
    iVar3 = *(int *)(in_ECX + 0x24);
    uVar2 = ((uVar1 | i << 8) << 8 | __ftol_result) << 8 | uVar2;
    i = *(int *)(DAT_0073b0d0 + iVar3 + iVar3 * 0xa8);
    iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
    if (i == 1) {
      iVar3 = *(int *)(iVar3 + 0x99);
    }
    else if (i == 2) {
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) * 9 + 4 + DAT_0073b168) +
                               *(int *)(iVar3 + 8) * 4) * 0x10 + DAT_0073b120);
    }
    else {
      FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
      iVar3 = 0;
    }
    i = 0;
    iVar3 = iVar3 * 0xac;
    if (0 < *(int *)(iVar3 + 0x84 + DAT_0073b5c8)) {
      j = 0;
      do {
        i = i + 1;
        *(uint *)(*(int *)(iVar3 + 0x80 + DAT_0073b5c8) + 0x10 + j) = uVar2;
        j = j + 0x20;
      } while (i < *(int *)(iVar3 + 0x84 + DAT_0073b5c8));
    }
    FUN_004a8100(uVar2);
    for (iVar3 = *(int *)(in_ECX + 0x44); iVar3 != -1; iVar3 = *(int *)(iVar3 + 0x44 + DAT_00715e50)
        ) {
      iVar3 = iVar3 * 0xf0;
      uVar1 = *(uint *)(iVar3 + 0x1c + DAT_00715e50) & 2;
      *(uint *)(iVar3 + 0x1c + DAT_00715e50) = uVar1;
      if (uVar1 != 0) {
        *(uint *)(iVar3 + 0x4c + DAT_00715e50) = uVar2;
        i = *(int *)(iVar3 + 0x24 + DAT_00715e50);
        j = *(int *)(DAT_0073b0d0 + i + i * 0xa8);
        i = DAT_0073b0d0 + i + i * 0xa8;
        if (j == 1) {
          i = *(int *)(i + 0x99);
        }
        else if (j == 2) {
          i = *(int *)(*(int *)(*(int *)(*(int *)(i + 4) * 9 + 4 + DAT_0073b168) +
                               *(int *)(i + 8) * 4) * 0x10 + DAT_0073b120);
        }
        else {
          FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
          i = 0;
        }
        j = 0;
        i = i * 0xac;
        if (0 < *(int *)(i + 0x84 + DAT_0073b5c8)) {
          iVar4 = 0;
          do {
            j = j + 1;
            *(uint *)(*(int *)(i + 0x80 + DAT_0073b5c8) + 0x10 + iVar4) = uVar2;
            iVar4 = iVar4 + 0x20;
          } while (j < *(int *)(i + 0x84 + DAT_0073b5c8));
        }
      }
    }
  }
  return;
}


/* ==== 004a8600 FUN_004a8600 ==== */

undefined4 FUN_004a8600(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xac) <= param_1) {
    FUN_004c4150(s__s__d____Sub_object_not_yet_init_005afcac,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x27c,param_1);
  }
  return *(undefined4 *)(in_ECX + 0x7c + param_1 * 4);
}


/* ==== 004a8640 FUN_004a8640 ==== */

undefined4 FUN_004a8640(void)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(DAT_00719c28 + *(int *)(in_ECX + 0xe8) * 4) + 4);
}


/* ==== 004a8660 FUN_004a8660 ==== */

void FUN_004a8660(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int j;
  int *piVar2;
  int i;
  int k;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float afStack_40 [6];
  undefined4 uStack_28;
  undefined4 uStack_24;
  float afStack_20 [6];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_2 != -1) {
    if ((*(int *)(in_ECX + 0xec) != -1) && (*(int *)(in_ECX + 0xe8) != -1)) {
      FUN_004c3fa0(s_Checking_object_type____005aff04);
      iVar1 = *(int *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9);
      if (iVar1 == 1) {
        FUN_004c3fa0(s_Standard__005afef0);
        iVar3 = *(int *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9 + 0x99);
      }
      else {
        iVar3 = param_2;
        if (iVar1 == 2) {
          FUN_004c3fa0(s_Anim__005afefc);
          iVar1 = *(int *)(in_ECX + 0x24);
          iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + iVar1 + 4 + iVar1 * 0xa8) * 9 +
                                             4 + DAT_0073b168) +
                                   *(int *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8 + 8) * 4) * 0x10 +
                          DAT_0073b120);
        }
      }
      FUN_004c3fa0(s_Hmmm_005afee8);
      if (*(int *)(in_ECX + 0xe8) != iVar3) {
        FUN_004c4150(s__s__d___Mesh_used_by_object_has_c_005afebc,
                     s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x2c1);
      }
      FUN_004c3fa0(s_Hmmm_1_005afeb4);
      iVar1 = *(int *)(DAT_00719c28 + *(int *)(in_ECX + 0xe8) * 4);
      if ((((param_2 < 0) || (*(int *)(iVar1 + 4) <= param_2)) || (param_1 < 0)) || (7 < param_1)) {
        FUN_004c4150(s__s__d___Invalid_parameter__m_lev_005afe44,
                     s_C__Work_A2IV_Engine_prog_obj_dmg_005afe8c,0x3a,*(undefined4 *)(iVar1 + 4),
                     param_2,param_1);
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + param_2 * 4) + param_1 * 0xc;
      FUN_004c3fa0(s_Hmmm_2_005afe3c);
      FUN_004c3fa0(s_Euh__hallo__005afe2c);
      FUN_004c3fa0(s_l_changes_>get_change_count_______005afe04,*(undefined4 *)(iVar1 + 4));
      iVar3 = 0;
      param_2 = 0;
      FUN_004c3fa0(s_Euh__hallo__005afe2c);
      if (0 < *(int *)(iVar1 + 4)) {
        param_1 = 0;
        do {
          FUN_004c3fa0(s_Hmmm__d_A_005afdf8,param_2);
          piVar2 = (int *)(param_1 + *(int *)(iVar1 + 8));
          if (*(int *)(DAT_0073b5c8 + 0x7c + *(int *)(in_ECX + 0xe8) * 0xac) != 0) {
            FUN_004c3fa0(s_Hmmm__d_B_005afdec,param_2);
            i = *piVar2;
            iVar3 = DAT_0073b5c8 + *(int *)(in_ECX + 0xe8) * 0xac;
            if (*(int *)(DAT_0073b5c8 + *(int *)(in_ECX + 0xe8) * 0xac) != 1) {
              FUN_004c4150(s__s__d____mesh_is_not_of_requeste_005afd94,
                           s_______Libs_win3dlib_Include_mesh_005afdc4,0x4b);
            }
            if (*(int *)(iVar3 + 4) != 1) {
              FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,
                           s_______Libs_win3dlib_Include_mesh_005afdc4,0x4e);
            }
            if ((i < 0) || (*(int *)(iVar3 + 0x7c) <= i)) {
              FUN_004c4150(s__s__d____index__d_is_out_of_VERT_005996e4,
                           s_______Libs_win3dlib_Include_mesh_005afdc4,0x51,i,
                           *(undefined4 *)(iVar3 + 0x7c));
            }
            k = *piVar2;
            pfVar4 = (float *)(*(int *)(iVar3 + 0x78) + i * 0x20);
            pfVar5 = afStack_20;
            for (j = 8; j != 0; j = j + -1) {
              *pfVar5 = *pfVar4;
              pfVar4 = pfVar4 + 1;
              pfVar5 = pfVar5 + 1;
            }
            afStack_20[0] = afStack_20[0] + (float)piVar2[1];
            afStack_20[1] = afStack_20[1] + (float)piVar2[2];
            afStack_20[2] = afStack_20[2] + (float)piVar2[3];
            iVar3 = DAT_0073b5c8 + *(int *)(in_ECX + 0xec) * 0xac;
            i = *(int *)(DAT_0073b5c8 + *(int *)(in_ECX + 0xec) * 0xac);
            if (i == 1) {
              if ((k < 0) || (*(int *)(iVar3 + 0x7c) <= k)) {
                FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,
                             s_______Libs_win3dlib_Include_mesh_005afdc4,0x6c,k,
                             *(undefined4 *)(iVar3 + 0x84));
              }
              pfVar4 = afStack_20;
              pfVar5 = (float *)(*(int *)(iVar3 + 0x78) + k * 0x20);
              for (i = 8; i != 0; i = i + -1) {
                *pfVar5 = *pfVar4;
                pfVar4 = pfVar4 + 1;
                pfVar5 = pfVar5 + 1;
              }
            }
            else if (i == 2) {
              if ((k < 0) || (*(int *)(iVar3 + 0x84) <= k)) {
                FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,
                             s_______Libs_win3dlib_Include_mesh_005afdc4,0x60,k,
                             *(undefined4 *)(iVar3 + 0x84));
              }
              k = k * 0x20;
              *(float *)(*(int *)(iVar3 + 0x80) + k) = afStack_20[0];
              *(float *)(*(int *)(iVar3 + 0x80) + 4 + k) = afStack_20[1];
              *(float *)(*(int *)(iVar3 + 0x80) + 8 + k) = afStack_20[2];
              *(undefined4 *)(*(int *)(iVar3 + 0x80) + 0x18 + k) = uStack_8;
              *(undefined4 *)(*(int *)(iVar3 + 0x80) + 0x1c + k) = uStack_4;
              *(undefined4 *)(*(int *)(iVar3 + 0x80) + 0x10 + k) = 0xffffff;
              *(undefined4 *)(*(int *)(iVar3 + 0x80) + 0x14 + k) = 0;
            }
          }
          if (*(int *)(DAT_0073b5c8 + 0x84 + *(int *)(in_ECX + 0xe8) * 0xac) != 0) {
            FUN_004c3fa0(s_Hmmm__d_C_005afd48,param_2);
            i = *piVar2;
            iVar3 = DAT_0073b5c8 + *(int *)(in_ECX + 0xe8) * 0xac;
            if (*(int *)(DAT_0073b5c8 + *(int *)(in_ECX + 0xe8) * 0xac) != 2) {
              FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,
                           s_______Libs_win3dlib_Include_mesh_005afdc4,0xe1);
            }
            if (*(int *)(iVar3 + 4) != 2) {
              FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,
                           s_______Libs_win3dlib_Include_mesh_005afdc4,0xe4);
            }
            if ((i < 0) || (*(int *)(iVar3 + 0x84) <= i)) {
              FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,
                           s_______Libs_win3dlib_Include_mesh_005afdc4,0xe7,i,
                           *(undefined4 *)(iVar3 + 0x7c));
            }
            pfVar4 = (float *)(*(int *)(iVar3 + 0x80) + i * 0x20);
            pfVar5 = afStack_40;
            for (k = 8; k != 0; k = k + -1) {
              *pfVar5 = *pfVar4;
              pfVar4 = pfVar4 + 1;
              pfVar5 = pfVar5 + 1;
            }
            afStack_40[0] = afStack_40[0] + (float)piVar2[1];
            afStack_40[1] = afStack_40[1] + (float)piVar2[2];
            i = *piVar2;
            afStack_40[2] = afStack_40[2] + (float)piVar2[3];
            iVar3 = DAT_0073b5c8 + *(int *)(in_ECX + 0xec) * 0xac;
            k = *(int *)(DAT_0073b5c8 + *(int *)(in_ECX + 0xec) * 0xac);
            if (k == 1) {
              if ((i < 0) || (*(int *)(iVar3 + 0x7c) <= i)) {
                FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,
                             s_______Libs_win3dlib_Include_mesh_005afdc4,0x83,i,
                             *(undefined4 *)(iVar3 + 0x84));
              }
              i = i * 0x20;
              *(float *)(*(int *)(iVar3 + 0x78) + i) = afStack_40[0];
              *(float *)(*(int *)(iVar3 + 0x78) + 4 + i) = afStack_40[1];
              *(float *)(*(int *)(iVar3 + 0x78) + 8 + i) = afStack_40[2];
              *(float *)(*(int *)(iVar3 + 0x78) + 0xc + i) = afStack_40[0];
              *(float *)(*(int *)(iVar3 + 0x78) + 0x10 + i) = afStack_40[1];
              *(float *)(*(int *)(iVar3 + 0x78) + 0x14 + i) = afStack_40[2];
              *(undefined4 *)(*(int *)(iVar3 + 0x78) + 0x18 + i) = uStack_28;
              *(undefined4 *)(*(int *)(iVar3 + 0x78) + 0x1c + i) = uStack_24;
            }
            else if (k == 2) {
              if ((i < 0) || (*(int *)(iVar3 + 0x84) <= i)) {
                FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,
                             s_______Libs_win3dlib_Include_mesh_005afdc4,0x7d,i,
                             *(undefined4 *)(iVar3 + 0x84));
              }
              pfVar4 = afStack_40;
              pfVar5 = (float *)(*(int *)(iVar3 + 0x80) + i * 0x20);
              for (k = 8; k != 0; k = k + -1) {
                *pfVar5 = *pfVar4;
                pfVar4 = pfVar4 + 1;
                pfVar5 = pfVar5 + 1;
              }
            }
          }
          iVar3 = param_2 + 1;
          param_1 = param_1 + 0x10;
          FUN_004c3fa0(s_Euh__hallo__005afe2c);
          param_2 = iVar3;
        } while (iVar3 < *(int *)(iVar1 + 4));
      }
      FUN_004c3fa0(s_Hmmm__d_005afd3c,iVar3);
      return;
    }
    FUN_004c3fa0(s__s__d___Cannot_apply_damage_to_u_005afd04,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x2aa);
  }
  return;
}


/* ==== 004a8c50 FUN_004a8c50 ==== */

undefined4 FUN_004a8c50(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  iVar2 = *(int *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8);
  iVar1 = DAT_0073b0d0 + iVar1 + iVar1 * 0xa8;
  if (iVar2 == 1) {
    return *(undefined4 *)(iVar1 + 0x99);
  }
  if (iVar2 != 2) {
    FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
    return 0;
  }
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(iVar1 + 4) * 9 + 4 + DAT_0073b168) + *(int *)(iVar1 + 8) * 4)
           * 0x10 + DAT_0073b120);
}


/* ==== 004a8cb0 FUN_004a8cb0 ==== */

void FUN_004a8cb0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int i;
  undefined4 *puVar5;
  int *local_4c;
  int j;
  undefined1 local_40 [64];
  
  iVar2 = *(int *)(in_ECX + 0xec);
  if ((iVar2 == -1) || (*(int *)(in_ECX + 0xe8) == -1)) {
    iVar2 = *(int *)(in_ECX + 0x24);
    i = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
    iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
    if (i == 1) {
      uVar3 = *(undefined4 *)(iVar2 + 0x95);
    }
    else if (i == 2) {
      uVar3 = *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                        *(int *)(iVar2 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
    }
    else {
      FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
      uVar3 = 0;
    }
    FUN_004b2e40(uVar3);
    if ((*(byte *)(in_ECX + 0x1c) & 2) != 0) {
      FUN_004a8200();
    }
    iVar2 = DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9;
    if (*(int *)(iVar2 + 0xa5) == 0) {
      if (*(char *)(iVar2 + 0x90) != '\0') {
        FUN_004b5b10();
      }
    }
    else {
      FUN_004a74a0(*(int *)(in_ECX + 0x24));
    }
    iVar2 = *(int *)(in_ECX + 0x24);
    i = *(int *)(DAT_0073b0d0 + iVar2 + 0x99 + iVar2 * 0xa8);
    iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
    if (i == -1) {
      i = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                           *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
    }
    DAT_00715e9c = DAT_00715e9c + *(int *)(DAT_0073b5c8 + 0x94 + i * 0xac) / 3;
    DAT_00715ea0 = DAT_00715ea0 + *(int *)(DAT_0073b5c8 + 0x94 + i * 0xac);
  }
  else {
    i = *(int *)(in_ECX + 0x24);
    iVar1 = *(int *)(DAT_0073b0d0 + i + i * 0xa8);
    i = DAT_0073b0d0 + i + i * 0xa8;
    if (iVar1 == 1) {
      uVar3 = *(undefined4 *)(i + 0x99);
      *(int *)(i + 0x99) = iVar2;
      if ((*(byte *)(in_ECX + 0x1c) & 2) != 0) {
        FUN_004a8200();
      }
      iVar2 = DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9;
      if (*(int *)(iVar2 + 0xa5) == 0) {
        if (*(char *)(iVar2 + 0x90) != '\0') {
          FUN_004b5b10();
        }
      }
      else {
        FUN_004a74a0(*(int *)(in_ECX + 0x24));
      }
      iVar2 = *(int *)(in_ECX + 0x24);
      i = *(int *)(DAT_0073b0d0 + iVar2 + 0x99 + iVar2 * 0xa8);
      iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
      if (i == -1) {
        i = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
      }
      DAT_00715e9c = DAT_00715e9c + *(int *)(DAT_0073b5c8 + 0x94 + i * 0xac) / 3;
      DAT_00715ea0 = DAT_00715ea0 + *(int *)(DAT_0073b5c8 + 0x94 + i * 0xac);
      *(undefined4 *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9 + 0x99) = uVar3;
    }
    else if (iVar1 == 2) {
      *(int *)(i + 0x99) = iVar2;
      if ((*(byte *)(in_ECX + 0x1c) & 2) != 0) {
        FUN_004a8200();
      }
      iVar2 = DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9;
      if (*(int *)(iVar2 + 0xa5) == 0) {
        if (*(char *)(iVar2 + 0x90) != '\0') {
          FUN_004b5b10();
        }
      }
      else {
        FUN_004a74a0(*(int *)(in_ECX + 0x24));
      }
      iVar2 = *(int *)(in_ECX + 0x24);
      i = *(int *)(DAT_0073b0d0 + iVar2 + 0x99 + iVar2 * 0xa8);
      iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
      if (i == -1) {
        i = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
      }
      DAT_00715e9c = DAT_00715e9c + *(int *)(DAT_0073b5c8 + 0x94 + i * 0xac) / 3;
      DAT_00715ea0 = DAT_00715ea0 + *(int *)(DAT_0073b5c8 + 0x94 + i * 0xac);
      *(undefined4 *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9 + 0x99) = 0xffffffff;
    }
  }
  j = 0;
  if (0 < *(int *)(in_ECX + 0xac)) {
    local_4c = (int *)(in_ECX + 0x7c);
    do {
      iVar2 = *local_4c;
      puVar5 = (undefined4 *)(iVar2 * 0xa9 + 0x10 + DAT_0073b0d0);
      puVar4 = (undefined4 *)
               FUN_004b4110(local_40,DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9 + 0x10,puVar5);
      for (i = 0x10; i != 0; i = i + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      i = iVar2 * 0xa9 + DAT_0073b0d0;
      if (*(int *)(i + 0xa5) == 0) {
        if (*(char *)(i + 0x90) != '\0') {
          FUN_004b5b10();
        }
      }
      else {
        FUN_004a74a0(iVar2);
      }
      FUN_004a7670(iVar2);
      j = j + 1;
      local_4c = local_4c + 1;
    } while (j < *(int *)(in_ECX + 0xac));
  }
  return;
}


/* ==== 004a9130 FUN_004a9130 ==== */

void FUN_004a9130(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int in_ECX;
  uint i;
  uint j;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  float in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  char in_stack_0000002c;
  undefined4 in_stack_00000030;
  char in_stack_00000034;
  char in_stack_00000038;
  undefined1 local_129;
  undefined4 local_128;
  char *pcStack_124;
  uint uStack_120;
  int local_118;
  char *pcStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [4];
  char *pcStack_100;
  uint uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined1 local_e4 [4];
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  char *local_d0;
  undefined1 local_c4 [12];
  uint local_b8;
  uint local_b4;
  int local_b0;
  double local_ac;
  undefined4 local_a4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined1 local_1c;
  undefined4 local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_118 = in_ECX;
  FUN_004028f0(0);
  local_4 = 0;
  FUN_004a0210();
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x18) = 1;
  iVar2 = FUN_004a44a0(in_stack_00000024,in_stack_00000028);
  if (iVar2 == 0) {
    uVar3 = FUN_0049df90(&local_128,s_ObjectMaterial_d_005aff54,DAT_00715ea8);
    local_4._0_1_ = 2;
    FUN_004093c0(uVar3,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004028f0(1);
    DAT_00715ea8 = DAT_00715ea8 + 1;
    pcVar7 = local_d0;
    if (local_d0 == (char *)0x0) {
      pcVar7 = "";
    }
    local_128 = CONCAT31(local_128._1_3_,local_129);
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(pcVar7,~i - 1);
    local_4._0_1_ = 3;
    iVar2 = FUN_004a4510(&local_128,in_stack_00000024,in_stack_00000028);
    local_4._0_1_ = 1;
    FUN_004028f0(1);
    in_ECX = local_118;
  }
  local_b0 = iVar2;
  FUN_004f5520((char *)0x0);
  local_b8 = (uint)(in_stack_0000002c != '\0');
  local_b4 = (uint)(in_stack_00000034 != '\0');
  local_18 = in_stack_00000030;
  local_ac = (double)in_stack_00000020;
  piVar4 = (int *)(DAT_0073b0d0 + *(int *)(in_ECX + 0x24) * 0xa9);
  local_a4 = 1;
  local_8c = 0x9999999a;
  local_88 = 0x3fa99999;
  local_84 = 0x33333333;
  local_80 = 0x3fe33333;
  local_7c = 0x33333333;
  local_78 = 0x3fe33333;
  local_74 = 0x33333333;
  local_70 = 0x3fe33333;
  local_1c = 1;
  local_14 = param_1;
  if (*piVar4 == 1) {
    iVar2 = *(int *)((int)piVar4 + 0x99);
  }
  else if (*piVar4 == 2) {
    iVar2 = *(int *)(*(int *)(*(int *)(piVar4[1] * 9 + 4 + DAT_0073b168) + piVar4[2] * 4) * 0x10 +
                    DAT_0073b120);
  }
  else {
    FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
    iVar2 = 0;
  }
  FUN_0049df90(local_e4,s_obj_d_005aff4c,DAT_00715ea4);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_debris_005aff44;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  uStack_f4 = i;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar7 = s_debris_005aff44;
    pcVar8 = pcStack_110;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(i);
  }
  DAT_00715ea4 = DAT_00715ea4 + 1;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004093c0(local_e4,0,0xffffffff);
  puVar5 = puStack_50;
  if (puStack_50 == (undefined1 *)0x0) {
    puVar5 = &DAT_0057629c;
  }
  FUN_004f5480(puVar5);
  uVar3 = DAT_00715b0c;
  if (in_stack_00000038 == '\0') {
    uVar3 = FUN_004a3460();
  }
  FUN_004a02a0(uVar3);
  uStack_34 = 0;
  iVar6 = DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  local_128 = *(undefined4 *)(iVar6 + 0x74);
  pcStack_124 = *(char **)(iVar6 + 0x78);
  uStack_120 = *(uint *)(iVar6 + 0x7c);
  uStack_2c = 0;
  iVar2 = iVar2 * 0xac;
  iVar6 = DAT_0073b5c8 + 0x98;
  pcStack_30 = pcStack_124;
  if (*(int *)(DAT_0073b5c8 + 0x9c + iVar2) == 0) {
    FUN_004c4150(s__s__d____string_is_not_initialis_005969b0,
                 s_______Libs_win3dlib_Include_str__005aff20,0x24);
  }
  pcVar7 = *(char **)(iVar6 + iVar2);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar8 = pcVar7;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcStack_100 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcStack_100 = pcStack_100 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcStack_100 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcStack_100 = pcStack_100 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  iStack_38 = FUN_004a41f0(auStack_104);
  if (iStack_38 == 0) {
    iStack_38 = FUN_004a4330(auStack_104,*(undefined4 *)(DAT_0073b5c8 + 0x84 + iVar2),
                             *(undefined4 *)(DAT_0073b5c8 + 0x80 + iVar2));
  }
  iVar6 = *(int *)(local_118 + 0x24);
  iVar2 = DAT_0073b0d0 + iVar6 + 0x50 + iVar6 * 0xa8;
  uStack_f0 = *(undefined4 *)(DAT_0073b0d0 + iVar6 + 0x50 + iVar6 * 0xa8);
  local_128 = CONCAT31(local_128._1_3_,local_129);
  fStack_ec = *(float *)(iVar2 + 4) + 1.0;
  uStack_e8 = *(undefined4 *)(iVar2 + 8);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar7 = s_RealObject_005af178;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar7 = s_RealObject_005af178;
    pcVar8 = pcStack_124;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcStack_124[i] = '\0';
    uStack_120 = i;
  }
  local_4._0_1_ = 7;
  uVar3 = FUN_004a4400(&local_128,local_c4,&uStack_f0);
  *(undefined4 *)(local_118 + 0x10) = uVar3;
  local_4._0_1_ = 6;
  FUN_004028f0(1);
  if (0.1 <= in_stack_00000020) {
    *(float *)(local_118 + 0xb0) = 1.0 / in_stack_00000020;
  }
  else {
    *(undefined4 *)(local_118 + 0xb0) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  *(undefined4 *)(local_118 + 0xbc) = param_2;
  *(undefined4 *)(local_118 + 0xc0) = param_3;
  *(undefined4 *)(local_118 + 0xc4) = param_4;
  FUN_004028f0(1);
  if (pcStack_110 != (char *)0x0) {
    cVar1 = pcStack_110[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_110 + -1);
    }
    else {
      pcStack_110[-1] = cVar1 + -1;
    }
  }
  pcStack_110 = (char *)0x0;
  uStack_10c = 0;
  uStack_108 = 0;
  if (iStack_e0 != 0) {
    cVar1 = *(char *)(iStack_e0 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_e0 + -1));
    }
    else {
      *(char *)(iStack_e0 + -1) = cVar1 + -1;
    }
  }
  iStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  local_4 = local_4 & 0xffffff00;
  if (puStack_50 != (undefined1 *)0x0) {
    cVar1 = puStack_50[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(puStack_50 + -1);
    }
    else {
      puStack_50[-1] = cVar1 + -1;
    }
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_4c = 0;
  uStack_48 = 0;
  FUN_004f5510();
  if (local_d0 != (char *)0x0) {
    cVar1 = local_d0[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_d0[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(local_d0 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004a97f0 FUN_004a97f0 ==== */

void FUN_004a97f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    FUN_004c4150(s__s__d_Physics_object_not_defined_005aff68,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x41e);
  }
  FUN_004a18e0(&stack0x00000010,&stack0x00000004);
  return;
}


/* ==== 004a9830 FUN_004a9830 ==== */

void FUN_004a9830(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    FUN_004c4150(s__s__d_Physics_object_not_defined_005aff68,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x427);
  }
  FUN_004a19c0(&stack0x00000010,&stack0x00000004);
  return;
}


/* ==== 004a9870 FUN_004a9870 ==== */

void FUN_004a9870(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int i;
  int iVar3;
  int iVar4;
  int j;
  int iVar5;
  int local_8;
  int local_4;
  
  i = 0;
  iVar4 = -1;
  if (0 < DAT_00715e54) {
    do {
      if (*(char *)(DAT_00715e60 + i) == '\x01') {
        iVar4 = i;
      }
      i = i + 1;
    } while (i < DAT_00715e54);
  }
  i = FUN_004af5a0(param_1,param_2,&param_2,&param_1,&local_8,&local_4);
  j = 0;
  if (-1 < iVar4) {
    iVar5 = 0;
    iVar3 = DAT_00715e50;
    do {
      if (*(int *)(iVar5 + 0x5c + iVar3) != 0) {
        if ((iVar5 < 0) || (DAT_00715e54 <= j)) {
          FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                       s_______Libs_win3dlib_Include_arra_005afbcc,0x43,j,&DAT_00715e64,DAT_00715e54
                       ,&DAT_00715e7d);
          iVar3 = DAT_00715e50;
        }
        if (*(char *)(DAT_00715e60 + j) != '\0') {
          iVar1 = *(int *)(iVar5 + 0x34 + iVar3);
          if ((((param_2 <= iVar1) && (iVar1 <= param_1)) || (*(int *)(iVar5 + 0x68 + iVar3) != 0))
             && (pcVar2 = *(code **)(iVar5 + 0x6c + iVar3), pcVar2 != (code *)0x0)) {
            (*pcVar2)(j);
            iVar3 = DAT_00715e50;
          }
          if (((i != 0) && (*(int *)(iVar5 + 0x68 + iVar3) == 0)) &&
             ((iVar1 = *(int *)(iVar5 + 0x34 + iVar3), local_8 <= iVar1 &&
              ((iVar1 <= local_4 &&
               (pcVar2 = *(code **)(iVar5 + 0x6c + iVar3), pcVar2 != (code *)0x0)))))) {
            (*pcVar2)(j);
            iVar3 = DAT_00715e50;
          }
        }
      }
      j = j + 1;
      iVar5 = iVar5 + 0xf0;
    } while (j <= iVar4);
  }
  return;
}


/* ==== 004a99a0 FUN_004a99a0 ==== */

void FUN_004a99a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_00715e9c = 0;
  DAT_00715ea0 = 0;
  if (DAT_007152ec == 0) {
    FUN_004c3fa0(s_drawing_object_textured_005affac);
    FUN_004a9c20(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_004c3fa0(s_drawing_normal_005aff9c);
    FUN_004a9a20(param_1,param_2,param_3,param_4);
  }
  FUN_004a74f0();
  FUN_004c3fa0(s_Ready_drawing_005aff8c);
  return;
}


/* ==== 004a9a20 FUN_004a9a20 ==== */

void FUN_004a9a20(int param_1,int param_2)

{
  int iVar1;
  int i;
  int iVar2;
  int iVar3;
  int j;
  int iVar4;
  int local_8;
  int local_4;
  
  i = 0;
  iVar3 = -1;
  if (0 < DAT_00715e54) {
    do {
      if (*(char *)(DAT_00715e60 + i) == '\x01') {
        iVar3 = i;
      }
      i = i + 1;
    } while (i < DAT_00715e54);
  }
  iVar2 = FUN_004af520(param_1,param_2,&param_2,&param_1,&local_8,&local_4);
  j = 0;
  i = DAT_00715e50;
  if (-1 < iVar3) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + 0x5c + i) != 0) {
        if ((iVar4 < 0) || (DAT_00715e54 <= j)) {
          FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                       s_______Libs_win3dlib_Include_arra_005afbcc,0x43,j,&DAT_00715e64,DAT_00715e54
                       ,&DAT_00715e7d);
          i = DAT_00715e50;
        }
        if (*(char *)(DAT_00715e60 + j) != '\0') {
          iVar1 = *(int *)(iVar4 + 0x34 + i);
          if ((((param_2 <= iVar1) && (iVar1 <= param_1)) && (*(int *)(iVar4 + 0x54 + i) != 0)) &&
             (*(int *)(iVar4 + 0x40 + i) != -1)) {
            FUN_004a6b90(j);
            i = DAT_00715e50;
          }
          if (((iVar2 != 0) && (iVar1 = *(int *)(iVar4 + 0x34 + i), local_8 <= iVar1)) &&
             ((iVar1 <= local_4 &&
              ((*(int *)(iVar4 + 0x54 + i) != 0 && (*(int *)(iVar4 + 0x40 + i) != -1)))))) {
            FUN_004a6b90(j);
            i = DAT_00715e50;
          }
        }
      }
      j = j + 1;
      iVar4 = iVar4 + 0xf0;
    } while (j <= iVar3);
  }
  j = 0;
  if (-1 < iVar3) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + 0x5c + i) != 0) {
        if ((iVar4 < 0) || (DAT_00715e54 <= j)) {
          FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                       s_______Libs_win3dlib_Include_arra_005afbcc,0x43,j,&DAT_00715e64,DAT_00715e54
                       ,&DAT_00715e7d);
          i = DAT_00715e50;
        }
        if (*(char *)(DAT_00715e60 + j) != '\0') {
          iVar1 = *(int *)(iVar4 + 0x34 + i);
          if (((param_2 <= iVar1) && (iVar1 <= param_1)) && (*(int *)(iVar4 + i + 0x54) != 0)) {
            FUN_004a8cb0();
            i = DAT_00715e50;
          }
          if (iVar2 != 0) {
            iVar1 = *(int *)(iVar4 + 0x34 + i);
            if (((local_8 <= iVar1) && (iVar1 <= local_4)) && (*(int *)(iVar4 + i + 0x54) != 0)) {
              FUN_004a8cb0();
              i = DAT_00715e50;
            }
          }
        }
      }
      j = j + 1;
      iVar4 = iVar4 + 0xf0;
    } while (j <= iVar3);
  }
  return;
}


/* ==== 004a9c20 FUN_004a9c20 ==== */

void FUN_004a9c20(int param_1,int param_2)

{
  int iVar1;
  int i;
  int iVar2;
  int iVar3;
  int iVar4;
  int j;
  int local_10;
  int local_8;
  int local_4;
  
  iVar3 = -1;
  i = 0;
  local_10 = -1;
  if (0 < DAT_00715e54) {
    do {
      if (*(char *)(DAT_00715e60 + i) == '\x01') {
        iVar3 = i;
      }
      i = i + 1;
      local_10 = iVar3;
    } while (i < DAT_00715e54);
  }
  i = FUN_004af520(param_1,param_2,&param_2,&param_1,&local_8,&local_4);
  j = 0;
  iVar3 = DAT_00715e50;
  if (-1 < local_10) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + 0x5c + iVar3) != 0) {
        if ((iVar4 < 0) || (DAT_00715e54 <= j)) {
          FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                       s_______Libs_win3dlib_Include_arra_005afbcc,0x43,j,&DAT_00715e64,DAT_00715e54
                       ,&DAT_00715e7d);
          iVar3 = DAT_00715e50;
        }
        if (*(char *)(DAT_00715e60 + j) != '\0') {
          iVar2 = *(int *)(iVar4 + 0x34 + iVar3);
          if (((param_2 <= iVar2) && (iVar2 <= param_1)) && (*(int *)(iVar4 + 0x54 + iVar3) != 0)) {
            iVar2 = *(int *)(iVar4 + 0x24 + iVar3);
            iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
            iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
            if (iVar1 == 1) {
              iVar2 = *(int *)(iVar2 + 0x95);
            }
            else if (iVar1 == 2) {
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                                       *(int *)(iVar2 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
            }
            else {
              FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
              iVar2 = 0;
              iVar3 = DAT_00715e50;
            }
            if (*(int *)(DAT_0073b1b0 + 0x44 + iVar2 * 0x48) != 0) {
              FUN_004a8cb0();
              iVar3 = DAT_00715e50;
            }
          }
          if (((i != 0) && (iVar2 = *(int *)(iVar4 + 0x34 + iVar3), local_8 <= iVar2)) &&
             ((iVar2 <= local_4 && (*(int *)(iVar4 + 0x54 + iVar3) != 0)))) {
            iVar2 = *(int *)(iVar4 + 0x24 + iVar3);
            iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
            iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
            if (iVar1 == 1) {
              iVar2 = *(int *)(iVar2 + 0x95);
            }
            else if (iVar1 == 2) {
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                                       *(int *)(iVar2 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
            }
            else {
              FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
              iVar2 = 0;
              iVar3 = DAT_00715e50;
            }
            if (*(int *)(DAT_0073b1b0 + 0x44 + iVar2 * 0x48) != 0) {
              FUN_004a8cb0();
              iVar3 = DAT_00715e50;
            }
          }
        }
      }
      j = j + 1;
      iVar4 = iVar4 + 0xf0;
    } while (j <= local_10);
  }
  j = 0;
  if (-1 < local_10) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + 0x5c + iVar3) != 0) {
        if ((iVar4 < 0) || (DAT_00715e54 <= j)) {
          FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                       s_______Libs_win3dlib_Include_arra_005afbcc,0x43,j,&DAT_00715e64,DAT_00715e54
                       ,&DAT_00715e7d);
          iVar3 = DAT_00715e50;
        }
        if (*(char *)(DAT_00715e60 + j) != '\0') {
          iVar2 = *(int *)(iVar4 + 0x34 + iVar3);
          if (((param_2 <= iVar2) && (iVar2 <= param_1)) && (*(int *)(iVar4 + 0x54 + iVar3) != 0)) {
            if (*(int *)(iVar4 + 0x40 + iVar3) != -1) {
              FUN_004a6b90(j);
              iVar3 = DAT_00715e50;
            }
            iVar2 = *(int *)(iVar4 + 0x24 + iVar3);
            iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
            iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
            if (iVar1 == 1) {
              iVar2 = *(int *)(iVar2 + 0x95);
            }
            else if (iVar1 == 2) {
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                                       *(int *)(iVar2 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
            }
            else {
              FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
              iVar2 = 0;
              iVar3 = DAT_00715e50;
            }
            if (*(int *)(DAT_0073b1b0 + 0x44 + iVar2 * 0x48) == 0) {
              FUN_004a8cb0();
              iVar3 = DAT_00715e50;
            }
          }
          if (((i != 0) && (iVar2 = *(int *)(iVar4 + 0x34 + iVar3), local_8 <= iVar2)) &&
             ((iVar2 <= local_4 && (*(int *)(iVar4 + 0x54 + iVar3) != 0)))) {
            if (*(int *)(iVar4 + 0x40 + iVar3) != -1) {
              FUN_004a6b90(j);
              iVar3 = DAT_00715e50;
            }
            iVar2 = *(int *)(iVar4 + 0x24 + iVar3);
            iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
            iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
            if (iVar1 == 1) {
              iVar2 = *(int *)(iVar2 + 0x95);
            }
            else if (iVar1 == 2) {
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                                       *(int *)(iVar2 + 8) * 4) * 0x10 + 4 + DAT_0073b120);
            }
            else {
              FUN_004c4150(s___s___d_Invalid_object_type__005afc8c);
              iVar2 = 0;
              iVar3 = DAT_00715e50;
            }
            if (*(int *)(DAT_0073b1b0 + 0x44 + iVar2 * 0x48) == 0) {
              FUN_004a8cb0();
              iVar3 = DAT_00715e50;
            }
          }
        }
      }
      j = j + 1;
      iVar4 = iVar4 + 0xf0;
    } while (j <= local_10);
  }
  return;
}


/* ==== 004aa060 FUN_004aa060 ==== */

void FUN_004aa060(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int i;
  undefined4 *puVar4;
  undefined1 local_8c [12];
  undefined4 local_80 [16];
  undefined1 local_40 [64];
  
  puVar3 = (undefined4 *)FUN_004b4310(local_40,param_2);
  puVar4 = local_80;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)FUN_004b42a0(local_8c,param_3,local_80);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


/* ==== 004aa0c0 FUN_004aa0c0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aa0c0(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int i;
  int iVar4;
  int j;
  int *piVar5;
  ushort in_FPUControlWord;
  float10 fVar6;
  undefined1 local_f4 [64];
  undefined1 local_b4 [64];
  undefined4 local_74 [16];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  FUN_004a6800();
  if ((DAT_00715e98 & 1) == 0) {
    DAT_00715e98 = DAT_00715e98 | 1;
    fVar6 = (float10)FUN_004a6800();
  }
  else {
    fVar6 = (float10)_DAT_00715b20;
  }
  if (DAT_00715eac < 0x32) {
    DAT_00715eac = DAT_00715eac + 1;
  }
  local_8 = (int *)(DAT_00715eac + -1);
  _DAT_00715b20 = (float)((float10)(int)local_8 * fVar6);
  fVar6 = (float10)FUN_004a6800();
  _DAT_00715b20 = (float)((fVar6 + (float10)_DAT_00715b20) / (float10)DAT_00715eac);
  local_8 = (int *)(uint)in_FPUControlWord;
  local_8 = (int *)((uint)local_8 & 0xfcff | 0x100);
  FUN_004a45d0(_DAT_005afa48 * _DAT_00715b20);
  local_8 = &DAT_007128cc;
  do {
    piVar5 = local_8;
    if (local_8[-1] != 0) {
      i = *local_8;
      iVar4 = i * 0xf0;
      if (*(int *)(iVar4 + 0x5c + DAT_00715e50) != 0) {
        local_10 = i;
        if ((i < 0) || (DAT_00715e54 <= i)) {
          FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                       s_______Libs_win3dlib_Include_arra_005afbcc,0x43,i,&DAT_00715e64,DAT_00715e54
                       ,&DAT_00715e7d);
        }
        if ((((*(char *)(DAT_00715e60 + i) != '\0') && (*(int *)(iVar4 + 0x18 + DAT_00715e50) == 1))
            && (*(int *)(iVar4 + 0x10 + DAT_00715e50) != 0)) &&
           (cVar1 = FUN_004a1f10(), cVar1 != '\0')) {
          if ((*(byte *)(iVar4 + 0x1c + DAT_00715e50) & 1) != 0) {
            FUN_004a7020(i);
          }
          j = DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9;
          puVar2 = (undefined4 *)FUN_004a1e20(local_b4);
          puVar3 = (undefined4 *)(j + 0x10);
          for (i = 0x10; i != 0; i = i + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          i = *(int *)(iVar4 + 0x24 + DAT_00715e50);
          local_1c = *(undefined4 *)(DAT_0073b0d0 + i + 0x40 + i * 0xa8);
          i = DAT_0073b0d0 + i + i * 0xa8;
          local_18 = *(undefined4 *)(i + 0x44);
          local_14 = *(undefined4 *)(i + 0x48);
          *(undefined4 *)(i + 0x50) = local_1c;
          *(undefined4 *)(i + 0x54) = local_18;
          *(undefined4 *)(i + 0x58) = local_14;
          i = iVar4 + DAT_00715e50;
          puVar2 = (undefined4 *)FUN_004a1ea0(local_28);
          *(undefined4 *)(i + 0xbc) = *puVar2;
          *(undefined4 *)(i + 0xc0) = puVar2[1];
          *(undefined4 *)(i + 0xc4) = puVar2[2];
          local_c = iVar4 + 0xbc + DAT_00715e50;
          puVar2 = (undefined4 *)
                   FUN_004b4310(local_f4,DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9
                                         + 0x10);
          i = local_c;
          puVar3 = local_74;
          for (j = 0x10; j != 0; j = j + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar3 = (undefined4 *)FUN_004b42a0(local_34,i,local_74);
          i = local_10;
          puVar2 = (undefined4 *)(iVar4 + 0xbc + DAT_00715e50);
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          puVar2[2] = puVar3[2];
          FUN_004a6c90(local_10);
          piVar5 = local_8;
          if ((*(byte *)(iVar4 + 0x1c + DAT_00715e50) & 1) != 0) {
            FUN_004a6fa0(i,0);
            piVar5 = local_8;
          }
        }
      }
    }
    local_8 = piVar5 + 2;
  } while ((int)local_8 < 0x714e4c);
  return;
}


/* ==== 004aa390 FUN_004aa390 ==== */

void FUN_004aa390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0xf0;
  iVar2 = *(int *)(iVar4 + 0xac + DAT_00715e50);
  if (0xb < iVar2) {
    FUN_004c4150(s__s__d____No_more_sub_objects_ava_005affc8,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x711);
  }
  iVar3 = FUN_004b52c0(param_4,param_5,param_6,param_7,param_8,param_9,param_2,param_3,&LAB_004b5620
                      );
  iVar1 = iVar4 + DAT_00715e50;
  if ((iVar2 < 0) || (0xb < iVar2)) {
    FUN_004c4150(s__s__d____illegal_sub_object_inde_005afcdc,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x286,iVar2);
  }
  *(int *)(iVar1 + 0x7c + iVar2 * 4) = iVar3;
  *(undefined4 *)(iVar3 * 0xa9 + 0xa1 + DAT_0073b0d0) = 2;
  *(int *)(iVar3 * 0xa9 + 0xc + DAT_0073b0d0) = param_1;
  *(int *)(iVar4 + 0xac + DAT_00715e50) = *(int *)(iVar4 + 0xac + DAT_00715e50) + 1;
  FUN_004b5770();
  return;
}


/* ==== 004aa4a0 FUN_004aa4a0 ==== */

void FUN_004aa4a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0xf0;
  iVar2 = *(int *)(iVar4 + 0xac + DAT_00715e50);
  if (0xb < iVar2) {
    FUN_004c4150(s__s__d____No_more_sub_objects_ava_005affc8,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x729);
  }
  iVar3 = FUN_004b4c70(param_4,param_5,param_6,param_7,param_8,param_9,param_2,param_3,&LAB_004b5620
                      );
  iVar1 = iVar4 + DAT_00715e50;
  if ((iVar2 < 0) || (0xb < iVar2)) {
    FUN_004c4150(s__s__d____illegal_sub_object_inde_005afcdc,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x286,iVar2);
  }
  *(int *)(iVar1 + 0x7c + iVar2 * 4) = iVar3;
  *(undefined4 *)(iVar3 * 0xa9 + 0xa1 + DAT_0073b0d0) = 2;
  *(int *)(iVar3 * 0xa9 + 0xc + DAT_0073b0d0) = param_1;
  *(int *)(iVar4 + 0xac + DAT_00715e50) = *(int *)(iVar4 + 0xac + DAT_00715e50) + 1;
  return;
}


/* ==== 004aa5a0 FUN_004aa5a0 ==== */

void FUN_004aa5a0(int param_1)

{
  int iVar1;
  int iVar2;
  int i;
  int iVar3;
  
  param_1 = param_1 * 0xf0;
  iVar1 = *(int *)(param_1 + 0xac + DAT_00715e50);
  if (0xb < iVar1) {
    FUN_004c4150(s__s__d____Illegal_amount_of_subob_005afff0,
                 s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x73f,iVar1);
  }
  i = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0xac + DAT_00715e50) = 0;
    return;
  }
  iVar2 = 0x7c;
  do {
    iVar3 = param_1 + DAT_00715e50;
    if (*(int *)(iVar3 + 0xac) <= i) {
      FUN_004c4150(s__s__d____Sub_object_not_yet_init_005afcac,
                   s_C__Work_A2IV_Engine_prog_obj_mai_005afae4,0x27c,i);
    }
    iVar3 = *(int *)(iVar3 + iVar2);
    *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
    FUN_004b4580(iVar3);
    i = i + 1;
    iVar2 = iVar2 + 4;
  } while (i < iVar1);
  *(undefined4 *)(param_1 + 0xac + DAT_00715e50) = 0;
  return;
}


/* ==== 004aa680 FUN_004aa680 ==== */

void FUN_004aa680(uint size)

{
  uint *operator_new_result;
  void *operator_new_result_2;
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f45b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (in_ECX[3] != 0) {
    ExceptionList = &pvStack_c;
    if (in_ECX[3] == 1) {
      ExceptionList = &pvStack_c;
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,
                   in_ECX[1]);
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_005586c5(iVar1,0xf0,*(undefined4 *)(iVar1 + -4),FUN_004ab690);
        FUN_0054b339(iVar1 + -4);
      }
    }
    if (in_ECX[3] != 0) {
      FUN_0054b339(in_ECX[4]);
      in_ECX[3] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,(int)in_ECX + 0x2d,in_ECX + 5,
                 size);
  }
  operator_new_result = operator_new(size * 0xf0 + 4);
  uStack_4 = 0;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0xf0,size,&LAB_004a7aa0,FUN_004ab690);
  }
  uStack_4 = 0xffffffff;
  *in_ECX = (int)puVar3;
  in_ECX[1] = size;
  in_ECX[2] = 0;
  operator_new_result_2 = operator_new(size);
  in_ECX[4] = (int)operator_new_result_2;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)in_ECX + 0x2d,in_ECX + 5,in_ECX[1]);
  in_ECX[3] = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + in_ECX[4]) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  ExceptionList = pvStack_c;
  return;
}


