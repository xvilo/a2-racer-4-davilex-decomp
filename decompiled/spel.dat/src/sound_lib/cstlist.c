/* spel.dat — sound_lib/cstlist.cpp: 12 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049ecb0 FUN_0049ecb0 ==== */

void FUN_0049ecb0(char *str1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_004a0100(*(int *)(in_ECX + 0xc) != 0,s__s___d__Sound_source_list_not_in_005ae90c,
               s___csslist_h_005ae954,100);
  uVar1 = FUN_0049ef80(str1);
  FUN_0049eba0(uVar1);
  return;
}


/* ==== 0049ecf0 FUN_0049ecf0 ==== */

void FUN_0049ecf0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_004a0100(*(int *)(in_ECX + 0xc) != 0,s__s___d__Sound_source_list_not_in_005ae90c,
               s___csslist_h_005ae954,100);
  uVar1 = FUN_0049ef20(param_1);
  FUN_0049eba0(uVar1);
  return;
}


/* ==== 0049ed60 FUN_0049ed60 ==== */

void FUN_0049ed60(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[2] = 100;
  return;
}


/* ==== 0049ed80 thunk_FUN_0049eea0 ==== */

void thunk_FUN_0049eea0(void)

{
  int *in_ECX;
  
  if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*in_ECX)(3);
    *in_ECX = 0;
  }
  return;
}


/* ==== 0049ed90 FUN_0049ed90 ==== */

void FUN_0049ed90(int param_1)

{
  int *operator_new_result;
  int *piVar1;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056eb4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[2] = param_1;
  operator_new_result = operator_new(param_1 * 0x38 + 4);
  local_4 = 0;
  if (operator_new_result == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = operator_new_result + 1;
    *operator_new_result = param_1;
    FUN_00558643(piVar1,0x38,param_1,FUN_0049f360,FUN_0049f4c0);
  }
  local_4 = 0xffffffff;
  *in_ECX = (int)piVar1;
  FUN_004a0100(piVar1 != (int *)0x0,s__s___d__Couldn_t_allocate_sound_t_005ae9c4,
               s_C__work_sound_lib_cstlist_cpp_005aea18,0x50,in_ECX[2]);
  ExceptionList = local_c;
  return;
}


/* ==== 0049eea0 FUN_0049eea0 ==== */

void FUN_0049eea0(void)

{
  int *in_ECX;
  
  if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*in_ECX)(3);
    *in_ECX = 0;
  }
  return;
}


/* ==== 0049eec0 FUN_0049eec0 ==== */

int FUN_0049eec0(char *str1)

{
  char *_Str2;
  int __strcmpi_result;
  int *in_ECX;
  int i;
  int iVar1;
  
  if ((*in_ECX != 0) && (i = 0, 0 < in_ECX[1])) {
    iVar1 = 0;
    do {
      _Str2 = *(char **)(iVar1 + *in_ECX + 0x2c);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      __strcmpi_result = __strcmpi(str1,_Str2);
      if (__strcmpi_result == 0) {
        return i;
      }
      i = i + 1;
      iVar1 = iVar1 + 0x38;
    } while (i < in_ECX[1]);
  }
  return -1;
}


/* ==== 0049ef20 FUN_0049ef20 ==== */

int FUN_0049ef20(int param_1)

{
  int *in_ECX;
  
  FUN_004a0100(*in_ECX != 0,s__s___d__Sound_types_not_allocate_005aea38,
               s_C__work_sound_lib_cstlist_cpp_005aea18,0xa5);
  FUN_004a00b0(param_1,0,in_ECX[1] + -1,s_C__work_sound_lib_cstlist_cpp_005aea18,0xa7);
  return *in_ECX + param_1 * 0x38;
}


/* ==== 0049ef80 FUN_0049ef80 ==== */

int FUN_0049ef80(char *str1)

{
  char *_Str2;
  int __strcmpi_result;
  int *in_ECX;
  int iVar1;
  int iVar2;
  int i;
  
  iVar2 = 0;
  FUN_004a0100(*in_ECX != 0,s__s___d__Sound_types_not_allocate_005aea38,
               s_C__work_sound_lib_cstlist_cpp_005aea18,0xc5);
  i = 0;
  if (0 < in_ECX[1]) {
    iVar1 = 0;
    do {
      _Str2 = *(char **)(iVar1 + 0x2c + *in_ECX);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      __strcmpi_result = __strcmpi(str1,_Str2);
      if (__strcmpi_result == 0) {
        iVar2 = *in_ECX + i * 0x38;
        break;
      }
      i = i + 1;
      iVar1 = iVar1 + 0x38;
    } while (i < in_ECX[1]);
  }
  FUN_004a0100(iVar2 != 0,s__s___d__Sound_type__s_not_found__005aea60,
               s_C__work_sound_lib_cstlist_cpp_005aea18,0xd2,str1);
  return iVar2;
}


/* ==== 0049f030 FUN_0049f030 ==== */

/* WARNING: Removing unreachable block (ram,0x0049f0ec) */
/* WARNING: Removing unreachable block (ram,0x0049f1a9) */

void FUN_0049f030(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int *in_ECX;
  uint i;
  int iVar8;
  char *str2;
  int iVar9;
  undefined4 *puVar10;
  
  FUN_004a0100(*in_ECX != 0,s__s___d__Sound_types_not_allocate_005aeac4,
               s_C__work_sound_lib_cstlist_cpp_005aea18,0xed);
  FUN_004a00b0(in_ECX[1],0,in_ECX[2] + -1,s_C__work_sound_lib_cstlist_cpp_005aea18,0xef);
  str2 = *(char **)(param_1 + 0x1c);
  if (str2 == (char *)0x0) {
    str2 = "";
  }
  uVar4 = FUN_004c64d0(str2);
  FUN_004a0100(uVar4,s__s___d__Can_t_find_filename__s_w_005aea84,
               s_C__work_sound_lib_cstlist_cpp_005aea18,0xf6,str2);
  iVar1 = in_ECX[1];
  in_ECX[1] = iVar1 + 1;
  iVar1 = *in_ECX + iVar1 * 0x38;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x20);
  if (iVar1 + 0x18 == param_1 + 0x18) {
    FUN_0040f800(uVar2,0xffffffff);
    FUN_0040f800(0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar7 = *(undefined1 **)(param_1 + 0x1c);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0057629c;
      }
      if ((byte)puVar7[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar7 = *(undefined1 **)(param_1 + 0x1c);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0057629c;
        }
        *(undefined1 **)(iVar1 + 0x1c) = puVar7;
        *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        puVar7[-1] = puVar7[-1] + '\x01';
        goto LAB_0049f194;
      }
    }
    cVar3 = FUN_00402a00(uVar2,1);
    if (cVar3 != '\0') {
      puVar5 = *(undefined4 **)(param_1 + 0x1c);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0057629c;
      }
      puVar10 = *(undefined4 **)(iVar1 + 0x1c);
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(uint *)(iVar1 + 0x20) = uVar2;
      *(undefined1 *)(*(int *)(iVar1 + 0x1c) + uVar2) = 0;
    }
  }
LAB_0049f194:
  uVar2 = *(uint *)(param_1 + 0x30);
  if (iVar1 + 0x28 == param_1 + 0x28) {
    if (*(uint *)(iVar1 + 0x30) < uVar2) {
      FUN_0054b29c();
    }
    FUN_00402c30();
    iVar6 = *(int *)(iVar1 + 0x30) - uVar2;
    iVar9 = -1;
    if (iVar6 != -1) {
      iVar9 = iVar6;
    }
    if (iVar9 != 0) {
      iVar8 = uVar2 + *(int *)(iVar1 + 0x2c);
      FUN_005580e0(iVar8,iVar8 + iVar9,iVar6 - iVar9);
      iVar9 = *(int *)(iVar1 + 0x30) - iVar9;
      cVar3 = FUN_00402a00(iVar9,0);
      if (cVar3 != '\0') {
        FUN_004029e0(iVar9);
      }
    }
    FUN_0040f800(0,0);
    return;
  }
  if (uVar2 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x2c);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0057629c;
    }
    if ((byte)puVar7[-1] < 0xfe) {
      FUN_004028f0(1);
      puVar7 = *(undefined1 **)(param_1 + 0x2c);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0057629c;
      }
      *(undefined1 **)(iVar1 + 0x2c) = puVar7;
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      puVar7[-1] = puVar7[-1] + '\x01';
      return;
    }
  }
  cVar3 = FUN_00402a00(uVar2,1);
  if (cVar3 != '\0') {
    puVar5 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)(param_1 + 0x2c);
    }
    puVar10 = *(undefined4 **)(iVar1 + 0x2c);
    for (i = uVar2 >> 2; i != 0; i = i - 1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    for (i = uVar2 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(uint *)(iVar1 + 0x30) = uVar2;
    *(undefined1 *)(*(int *)(iVar1 + 0x2c) + uVar2) = 0;
  }
  return;
}


/* ==== 0049f2d0 FUN_0049f2d0 ==== */

void FUN_0049f2d0(void)

{
  undefined1 *puVar1;
  int in_ECX;
  
  FUN_004c3fa0(s_______Dump_of_object_CSndType____005aeb88);
  puVar1 = *(undefined1 **)(in_ECX + 0x2c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0057629c;
  }
  FUN_004c3fa0(s_Name___s_005aeb7c,puVar1);
  puVar1 = *(undefined1 **)(in_ECX + 0x1c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0057629c;
  }
  FUN_004c3fa0(s_Filename___s_005aeb6c,puVar1);
  FUN_004c3fa0(s_Local_volume___d_005aeb58,*(undefined4 *)(in_ECX + 0x10));
  FUN_004c3fa0(s_Group___d_005aeb4c,*(undefined4 *)(in_ECX + 8));
  FUN_004c3fa0(s_Preload___d_005aeb3c,*(undefined4 *)(in_ECX + 4));
  FUN_004c3fa0(s_Range___d_005aeb30,*(undefined4 *)(in_ECX + 0xc));
  FUN_004c3fa0(s_Doppler_amount___d_005aeb1c,*(undefined4 *)(in_ECX + 0x14));
  return;
}


/* ==== 0049f360 FUN_0049f360 ==== */

undefined4 * FUN_0049f360(void)

{
  int iVar1;
  char cVar2;
  undefined4 *in_ECX;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056eb76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 6) = local_15;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 10) = local_15;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  i = 0xffffffff;
  *in_ECX = &PTR_LAB_005764c0;
  pcVar4 = &DAT_00712694;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  i = ~i - 1;
  local_4 = 1;
  cVar2 = FUN_00402a00(i,1);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)&DAT_00712694;
    puVar5 = (undefined4 *)in_ECX[7];
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
    in_ECX[8] = i;
    *(undefined1 *)(i + in_ECX[7]) = 0;
  }
  i = 0xffffffff;
  pcVar4 = &DAT_00712694;
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
  iVar1 = in_ECX[0xb];
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      goto LAB_0049f497;
    }
    if ((0x1f < (uint)in_ECX[0xd]) || ((uint)in_ECX[0xd] < i)) {
      FUN_004028f0(1);
      goto LAB_0049f467;
    }
  }
  else {
    if (i == 0) {
      *(char *)(iVar1 + -1) = cVar2 + -1;
      FUN_004028f0(0);
      goto LAB_0049f497;
    }
LAB_0049f467:
    FUN_00402b20(i);
  }
  puVar3 = (undefined4 *)&DAT_00712694;
  puVar5 = (undefined4 *)in_ECX[0xb];
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
  in_ECX[0xc] = i;
  *(undefined1 *)(in_ECX[0xb] + i) = 0;
LAB_0049f497:
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[5] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 100;
  ExceptionList = pvStack_c;
  return in_ECX;
}


