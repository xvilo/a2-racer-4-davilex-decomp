/* spel.dat — dx3d/Animsys.cpp: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b63c0 FUN_004b63c0 ==== */

void FUN_004b63c0(void)

{
  FUN_005584e0(&LAB_004b63d0);
  return;
}


/* ==== 004b6430 FUN_004b6430 ==== */

void FUN_004b6430(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  char *dest;
  char *dest_2;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f606;
  local_c = ExceptionList;
  dest = (char *)(in_ECX + 0xb);
  ExceptionList = &local_c;
  in_ECX[9] = 0;
  _strncpy(dest,s_Meshlist_005b1110,0x19);
  dest_2 = (char *)((int)in_ECX + 0x45);
  _strncpy(dest_2,s_meshes_t_005b1104,0x19);
  if (in_ECX[9] != 0) {
    if (in_ECX[9] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,dest_2,dest,in_ECX[7]);
      FUN_0054b339(in_ECX[6]);
    }
    if (in_ECX[9] != 0) {
      FUN_0054b339(in_ECX[10]);
      in_ECX[9] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,dest_2,dest,0);
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  dest = (char *)((int)in_ECX + 0x72);
  local_4 = 0;
  *(undefined4 *)((int)in_ECX + 0x6a) = 0;
  _strncpy(dest,s_Texturelist_005b10f8,0x19);
  dest_2 = (char *)((int)in_ECX + 0x8b);
  _strncpy(dest_2,s_textures_t_005b10ec,0x19);
  if (*(int *)((int)in_ECX + 0x6a) != 0) {
    if (*(int *)((int)in_ECX + 0x6a) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,dest_2,dest,
                   *(undefined4 *)((int)in_ECX + 0x62));
      FUN_0054b339(*(undefined4 *)((int)in_ECX + 0x5e));
    }
    if (*(int *)((int)in_ECX + 0x6a) != 0) {
      FUN_0054b339(*(undefined4 *)((int)in_ECX + 0x6e));
      *(undefined4 *)((int)in_ECX + 0x6a) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *(undefined4 *)((int)in_ECX + 0x5e) = 0;
  *(undefined4 *)((int)in_ECX + 0x62) = 0;
  *(undefined4 *)((int)in_ECX + 0x66) = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,dest_2,dest,0);
  *(undefined4 *)((int)in_ECX + 0x6e) = 0;
  *(undefined4 *)((int)in_ECX + 0x6a) = 0;
  dest = (char *)(in_ECX + 0x2e);
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[0x2c] = 0;
  _strncpy(dest,s_Animnamelist_005b10dc,0x19);
  dest_2 = (char *)((int)in_ECX + 0xd1);
  _strncpy(dest_2,s_anim_name_t_005b10d0,0x19);
  if (in_ECX[0x2c] != 0) {
    if (in_ECX[0x2c] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,dest_2,dest,in_ECX[0x2a]);
      FUN_0054b339(in_ECX[0x29]);
    }
    if (in_ECX[0x2c] != 0) {
      FUN_0054b339(in_ECX[0x2d]);
      in_ECX[0x2c] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,dest_2,dest,0);
  in_ECX[0x2d] = 0;
  in_ECX[0x2c] = 0;
  *in_ECX = 0;
  in_ECX[5] = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004b6650 FUN_004b6650 ==== */

void FUN_004b6650(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056f634;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if (*in_ECX == 1) {
    ExceptionList = &local_c;
    FUN_004b67b0();
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (in_ECX[0x2c] == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0xd1,in_ECX + 0x2e,
                 in_ECX[0x2a]);
    FUN_0054b339(in_ECX[0x29]);
  }
  if (in_ECX[0x2c] != 0) {
    FUN_0054b339(in_ECX[0x2d]);
    in_ECX[0x2c] = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  local_4 = local_4 & 0xffffff00;
  if (*(int *)((int)in_ECX + 0x6a) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x8b,(int)in_ECX + 0x72,
                 *(undefined4 *)((int)in_ECX + 0x62));
    FUN_0054b339(*(undefined4 *)((int)in_ECX + 0x5e));
  }
  if (*(int *)((int)in_ECX + 0x6a) != 0) {
    FUN_0054b339(*(undefined4 *)((int)in_ECX + 0x6e));
    *(undefined4 *)((int)in_ECX + 0x6a) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  local_4 = 0xffffffff;
  if (in_ECX[9] == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x45,in_ECX + 0xb,
                 in_ECX[7]);
    FUN_0054b339(in_ECX[6]);
  }
  if (in_ECX[9] != 0) {
    FUN_0054b339(in_ECX[10]);
    in_ECX[9] = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  ExceptionList = local_c;
  return;
}


/* ==== 004b67b0 FUN_004b67b0 ==== */

void FUN_004b67b0(void)

{
  int *in_ECX;
  
  FUN_004c3fa0(s_Exit_animsys_005b111c);
  if (*in_ECX != 0) {
    FUN_004b7810();
    if (in_ECX[9] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x45,in_ECX + 0xb,
                   in_ECX[7]);
      FUN_0054b339(in_ECX[6]);
    }
    if (in_ECX[9] != 0) {
      FUN_0054b339(in_ECX[10]);
      in_ECX[9] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
    if (*(int *)((int)in_ECX + 0x6a) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x8b,(int)in_ECX + 0x72
                   ,*(undefined4 *)((int)in_ECX + 0x62));
      FUN_0054b339(*(undefined4 *)((int)in_ECX + 0x5e));
    }
    if (*(int *)((int)in_ECX + 0x6a) != 0) {
      FUN_0054b339(*(undefined4 *)((int)in_ECX + 0x6e));
      *(undefined4 *)((int)in_ECX + 0x6a) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
    if (in_ECX[0x2c] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0xd1,in_ECX + 0x2e,
                   in_ECX[0x2a]);
      FUN_0054b339(in_ECX[0x29]);
    }
    if (in_ECX[0x2c] != 0) {
      FUN_0054b339(in_ECX[0x2d]);
      in_ECX[0x2c] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *in_ECX = 0;
  return;
}


/* ==== 004b68f0 FUN_004b68f0 ==== */

void FUN_004b68f0(uint size,uint size_3,uint size_2,uint size_4)

{
  void *operator_new_result;
  int i;
  int iVar1;
  undefined4 *in_ECX;
  
  FUN_004c3fa0(s_init_animsys__meshes__d__texture_005b112c,size,size_3,size_2,size_4);
  if (in_ECX[9] != 0) {
    if (in_ECX[9] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x45,in_ECX + 0xb,
                   in_ECX[7]);
      FUN_0054b339(in_ECX[6]);
    }
    if (in_ECX[9] != 0) {
      FUN_0054b339(in_ECX[10]);
      in_ECX[9] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 (int)in_ECX + 0x45,in_ECX + 0xb,size);
  }
  operator_new_result = operator_new(size * 0x15);
  in_ECX[6] = operator_new_result;
  in_ECX[7] = size;
  in_ECX[8] = 0;
  operator_new_result = operator_new(size);
  in_ECX[10] = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)in_ECX + 0x45,in_ECX + 0xb,in_ECX[7]
              );
  i = 0;
  in_ECX[9] = 1;
  if (0 < (int)size) {
    do {
      i = i + 1;
      *(undefined1 *)(in_ECX[10] + -1 + i) = 0;
    } while (i < (int)size);
  }
  if (*(int *)((int)in_ECX + 0x6a) != 0) {
    FUN_004b1e00();
  }
  if ((int)size_3 < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 (int)in_ECX + 0x8b,(int)in_ECX + 0x72,size_3);
  }
  operator_new_result = operator_new(size_3 * 0x15);
  *(void **)((int)in_ECX + 0x5e) = operator_new_result;
  *(uint *)((int)in_ECX + 0x62) = size_3;
  *(undefined4 *)((int)in_ECX + 0x66) = 0;
  operator_new_result = operator_new(size_3);
  *(void **)((int)in_ECX + 0x6e) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)in_ECX + 0x8b,(int)in_ECX + 0x72,
               *(undefined4 *)((int)in_ECX + 0x62));
  i = 0;
  *(undefined4 *)((int)in_ECX + 0x6a) = 1;
  if (0 < (int)size_3) {
    do {
      i = i + 1;
      *(undefined1 *)(*(int *)((int)in_ECX + 0x6e) + -1 + i) = 0;
    } while (i < (int)size_3);
  }
  if (DAT_0073b12c != 0) {
    FUN_004b1e00();
  }
  if ((int)size_2 < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 &DAT_0073b14d,&DAT_0073b134,size_2);
  }
  DAT_0073b120 = operator_new(size_2 << 4);
  DAT_0073b124 = size_2;
  DAT_0073b128 = 0;
  DAT_0073b130 = operator_new(size_2);
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,&DAT_0073b14d,&DAT_0073b134,DAT_0073b124)
  ;
  DAT_0073b12c = 1;
  i = 0;
  if (0 < (int)size_2) {
    do {
      iVar1 = i + 1;
      *(undefined1 *)((int)DAT_0073b130 + i) = 0;
      i = iVar1;
    } while (iVar1 < (int)size_2);
  }
  if (DAT_0073b174 != 0) {
    FUN_004b1e00();
  }
  if ((int)size_4 < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 &DAT_0073b195,&DAT_0073b17c,size_4);
  }
  DAT_0073b168 = operator_new(size_4 * 9);
  DAT_0073b16c = size_4;
  DAT_0073b170 = 0;
  DAT_0073b178 = operator_new(size_4);
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,&DAT_0073b195,&DAT_0073b17c,DAT_0073b16c)
  ;
  DAT_0073b174 = 1;
  i = 0;
  if (0 < (int)size_4) {
    do {
      iVar1 = i + 1;
      *(undefined1 *)((int)DAT_0073b178 + i) = 0;
      i = iVar1;
    } while (iVar1 < (int)size_4);
  }
  FUN_004b84b0(size_4);
  in_ECX[2] = size_2;
  in_ECX[1] = size_4;
  in_ECX[3] = size_3;
  in_ECX[4] = size;
  *in_ECX = 1;
  return;
}


/* ==== 004b6c00 FUN_004b6c00 ==== */

int FUN_004b6c00(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  void *_malloc_result;
  undefined4 uVar3;
  char *pcVar4;
  uint k;
  uint m;
  int i;
  int j;
  char *pcVar5;
  
  FUN_004c3fa0(s_adding_anim___s__frames__d_005b1244,param_1,param_2);
  FUN_004b82c0();
  i = DAT_0073b170;
  if (DAT_0073b174 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
    i = DAT_0073b170;
  }
  for (; i < DAT_0073b16c; i = i + 1) {
    if (*(char *)(DAT_0073b178 + i) == '\0') goto LAB_004b6fbc;
  }
  i = 0;
  if (0 < DAT_0073b170) {
    do {
      if (*(char *)(DAT_0073b178 + i) == '\0') goto LAB_004b6fbc;
      i = i + 1;
    } while (i < DAT_0073b170);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,&DAT_0073b17c
               ,DAT_0073b16c,&DAT_0073b195);
  i = -1;
LAB_004b6cba:
  FUN_004c3fa0(s___anim_index__d_005b1230,i);
  if (DAT_0073b174 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
  }
  if ((i < 0) || (DAT_0073b16c <= i)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b17c,i,DAT_0073b16c);
  }
  if (*(char *)(DAT_0073b178 + i) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b17c,i);
  }
  iVar2 = i * 9;
  *(int *)(iVar2 + DAT_0073b168) = param_2;
  FUN_004c3fa0(s___allocate_memory_for_frame_indi_005b1208);
  if (DAT_0073b174 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
  }
  if ((i < 0) || (DAT_0073b16c <= i)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b17c,i,DAT_0073b16c);
  }
  if (*(char *)(DAT_0073b178 + i) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b17c,i);
  }
  _malloc_result = _malloc(param_2 * 4);
  *(void **)(iVar2 + 4 + DAT_0073b168) = _malloc_result;
  if (_malloc_result == (void *)0x0) {
    FUN_004c4150(s__s__d__not_enough_memory_to_allo_005b11a8,s_D__Work_DX3D_Animsys_cpp_005b11ec,
                 0x7c,i);
  }
  if (DAT_0073b174 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
  }
  if ((i < 0) || (DAT_0073b16c <= i)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b17c,i,DAT_0073b16c);
  }
  if (*(char *)(DAT_0073b178 + i) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b17c,i);
  }
  j = 0;
  *(undefined1 *)(iVar2 + 8 + DAT_0073b168) = 0;
  if (0 < param_2) {
    do {
      if (DAT_0073b174 == 0) {
        FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                     &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
      }
      if ((i < 0) || (DAT_0073b16c <= i)) {
        FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                     &DAT_0073b17c,i,DAT_0073b16c);
      }
      if (*(char *)(DAT_0073b178 + i) == '\0') {
        FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                     &DAT_0073b17c,i);
      }
      j = j + 1;
      *(undefined4 *)(*(int *)(iVar2 + 4 + DAT_0073b168) + -4 + j * 4) = 0xffffffff;
    } while (j < param_2);
  }
  FUN_004c3fa0(s___add_name_to_list_005b1190);
  uVar3 = FUN_004b8590();
  k = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0x18 < ~k - 1) {
    FUN_004c4150(s__s__d__anim_name_is_to_long_max___005b1168,s_D__Work_DX3D_Animsys_cpp_005b11ec,
                 0x92,0x19);
    return i;
  }
  pcVar4 = (char *)FUN_004b8620(uVar3);
  k = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (k == 0) break;
    k = k - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  k = ~k;
  pcVar5 = pcVar5 + -k;
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *pcVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return i;
LAB_004b6fbc:
  *(undefined1 *)(DAT_0073b178 + i) = 1;
  DAT_0073b170 = i;
  goto LAB_004b6cba;
}


/* ==== 004b6ff0 FUN_004b6ff0 ==== */

int FUN_004b6ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int i;
  
  FUN_004c3fa0(s_adding_frame__anim__d__mesh__s__t_005b1318,param_1,param_2,param_3);
  FUN_004b82c0();
  iVar1 = FUN_004b7970(param_2);
  iVar2 = FUN_004b7d30(param_3,param_4);
  i = DAT_0073b128;
  if (DAT_0073b12c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 &DAT_0073b134,DAT_0073b124,&DAT_0073b14d);
    i = DAT_0073b128;
  }
  for (; i < DAT_0073b124; i = i + 1) {
    if (*(char *)(DAT_0073b130 + i) == '\0') goto LAB_004b73e6;
  }
  i = 0;
  if (0 < DAT_0073b128) {
    do {
      if (*(char *)(DAT_0073b130 + i) == '\0') goto LAB_004b73e6;
      i = i + 1;
    } while (i < DAT_0073b128);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,&DAT_0073b134
               ,DAT_0073b124,&DAT_0073b14d);
  i = -1;
LAB_004b70c7:
  FUN_004c3fa0(s___framelist__frame__d_005b12fc,i);
  if (*(int *)(in_ECX + 0x24) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 in_ECX + 0x2c,*(undefined4 *)(in_ECX + 0x1c),in_ECX + 0x45);
  }
  if ((iVar1 < 0) || (*(int *)(in_ECX + 0x1c) <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 in_ECX + 0x2c,iVar1,*(undefined4 *)(in_ECX + 0x1c));
  }
  if (*(char *)(*(int *)(in_ECX + 0x28) + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 in_ECX + 0x2c,iVar1);
  }
  if (DAT_0073b12c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b134,DAT_0073b124,&DAT_0073b14d);
  }
  if ((i < 0) || (DAT_0073b124 <= i)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b134,i,DAT_0073b124);
  }
  if (*(char *)(DAT_0073b130 + i) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b134,i);
  }
  *(undefined4 *)(i * 0x10 + DAT_0073b120) =
       *(undefined4 *)(iVar1 * 0x15 + 0xd + *(int *)(in_ECX + 0x18));
  if (*(int *)(in_ECX + 0x6a) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
  }
  if ((iVar2 < 0) || (*(int *)(in_ECX + 0x62) <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 in_ECX + 0x72,iVar2,*(undefined4 *)(in_ECX + 0x62));
  }
  if (*(char *)(*(int *)(in_ECX + 0x6e) + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 in_ECX + 0x72,iVar2);
  }
  if (DAT_0073b12c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b134,DAT_0073b124,&DAT_0073b14d);
  }
  if ((i < 0) || (DAT_0073b124 <= i)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b134,i,DAT_0073b124);
  }
  if (*(char *)(DAT_0073b130 + i) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b134,i);
  }
  *(undefined4 *)(i * 0x10 + 4 + DAT_0073b120) =
       *(undefined4 *)(iVar2 * 0x15 + 0xd + *(int *)(in_ECX + 0x5e));
  iVar3 = FUN_004b82f0(i);
  *(int *)(iVar3 + 8) = iVar1;
  iVar1 = FUN_004b82f0(i);
  *(int *)(iVar1 + 0xc) = iVar2;
  puVar4 = (undefined4 *)FUN_004b82f0(i);
  FUN_004c3fa0(s___framelist__mesh__d_005b12dc,*puVar4);
  iVar1 = FUN_004b82f0(i);
  FUN_004c3fa0(s___framelist__texture__d_005b12bc,*(undefined4 *)(iVar1 + 4));
  iVar1 = FUN_004b82f0(i);
  FUN_004c3fa0(s___framelist__ld_mesh__d_005b129c,*(undefined4 *)(iVar1 + 8));
  iVar1 = FUN_004b82f0(i);
  FUN_004c3fa0(s___framelist__ld_texture__d_005b127c,*(undefined4 *)(iVar1 + 0xc));
  iVar1 = FUN_004b8150(param_1);
  FUN_004c3fa0(s___indexlist__index__d_005b1260,iVar1);
  iVar2 = FUN_004b8380(param_1);
  *(int *)(*(int *)(iVar2 + 4) + iVar1 * 4) = i;
  iVar1 = FUN_004b8380(param_1);
  *(undefined1 *)(iVar1 + 8) = 1;
  return i;
LAB_004b73e6:
  *(undefined1 *)(DAT_0073b130 + i) = 1;
  DAT_0073b128 = i;
  goto LAB_004b70c7;
}


/* ==== 004b7400 FUN_004b7400 ==== */

undefined4 FUN_004b7400(char *str1)

{
  int __strcmpi_result;
  int in_ECX;
  int iVar1;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    iVar1 = 0;
    do {
      if ((iVar1 < 0) || (*(int *)(in_ECX + 0x62) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
      }
      if (*(char *)(*(int *)(in_ECX + 0x6e) + i) != '\0') {
        if (*(int *)(in_ECX + 0x6a) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
        }
        if ((iVar1 < 0) || (*(int *)(in_ECX + 0x62) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       in_ECX + 0x72,i,*(undefined4 *)(in_ECX + 0x62));
        }
        if (*(char *)(*(int *)(in_ECX + 0x6e) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       in_ECX + 0x72,i);
        }
        __strcmpi_result = __strcmpi(str1,(char *)(*(int *)(in_ECX + 0x5e) + iVar1));
        if (__strcmpi_result == 0) {
          if (*(int *)(in_ECX + 0x6a) == 0) {
            FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                         in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
          }
          if ((i < 0) || (*(int *)(in_ECX + 0x62) <= i)) {
            FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                         in_ECX + 0x72,i,*(undefined4 *)(in_ECX + 0x62));
          }
          if (*(char *)(*(int *)(in_ECX + 0x6e) + i) == '\0') {
            FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                         in_ECX + 0x72,i);
          }
          return *(undefined4 *)(i * 0x15 + 0xd + *(int *)(in_ECX + 0x5e));
        }
      }
      i = i + 1;
      iVar1 = iVar1 + 0x15;
    } while (i < *(int *)(in_ECX + 0xc));
  }
  FUN_004c4150(s_find_texture_index___texture_<_s_005b1344,str1);
  return 0;
}


/* ==== 004b75a0 FUN_004b75a0 ==== */

int FUN_004b75a0(char *str1)

{
  int __strcmpi_result;
  int in_ECX;
  int iVar1;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      if ((iVar1 < 0) || (*(int *)(in_ECX + 0xa8) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     in_ECX + 0xb8,*(undefined4 *)(in_ECX + 0xa8),in_ECX + 0xd1);
      }
      if (*(char *)(*(int *)(in_ECX + 0xb4) + i) != '\0') {
        if (*(int *)(in_ECX + 0xb0) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       in_ECX + 0xb8,*(undefined4 *)(in_ECX + 0xa8),in_ECX + 0xd1);
        }
        if ((iVar1 < 0) || (*(int *)(in_ECX + 0xa8) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       in_ECX + 0xb8,i,*(undefined4 *)(in_ECX + 0xa8));
        }
        if (*(char *)(*(int *)(in_ECX + 0xb4) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       in_ECX + 0xb8,i);
        }
        __strcmpi_result = __strcmpi(str1,(char *)(*(int *)(in_ECX + 0xa4) + iVar1));
        if (__strcmpi_result == 0) {
          return i;
        }
      }
      i = i + 1;
      iVar1 = iVar1 + 0x19;
    } while (i < *(int *)(in_ECX + 4));
  }
  FUN_004c4150(s_find_anim_name_index___anim_<_s>_005b1374,str1);
  return 0;
}


/* ==== 004b76e0 FUN_004b76e0 ==== */

undefined4 FUN_004b76e0(char *str1)

{
  int __strcmpi_result;
  int in_ECX;
  int iVar1;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      if ((iVar1 < 0) || (*(int *)(in_ECX + 0xa8) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     in_ECX + 0xb8,*(undefined4 *)(in_ECX + 0xa8),in_ECX + 0xd1);
      }
      if (*(char *)(*(int *)(in_ECX + 0xb4) + i) != '\0') {
        if (*(int *)(in_ECX + 0xb0) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       in_ECX + 0xb8,*(undefined4 *)(in_ECX + 0xa8),in_ECX + 0xd1);
        }
        if ((iVar1 < 0) || (*(int *)(in_ECX + 0xa8) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       in_ECX + 0xb8,i,*(undefined4 *)(in_ECX + 0xa8));
        }
        if (*(char *)(*(int *)(in_ECX + 0xb4) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       in_ECX + 0xb8,i);
        }
        __strcmpi_result = __strcmpi(str1,(char *)(*(int *)(in_ECX + 0xa4) + iVar1));
        if (__strcmpi_result == 0) {
          return 1;
        }
      }
      i = i + 1;
      iVar1 = iVar1 + 0x19;
    } while (i < *(int *)(in_ECX + 4));
  }
  return 0;
}


/* ==== 004b7810 FUN_004b7810 ==== */

void FUN_004b7810(void)

{
  int in_ECX;
  int i;
  int iVar1;
  
  FUN_004c3fa0(s__s__d____005b13a4,s_D__Work_DX3D_Animsys_cpp_005b11ec,0x156);
  i = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      FUN_004c3fa0(s__s__d____005b13a4,s_D__Work_DX3D_Animsys_cpp_005b11ec,0x15b);
      if ((iVar1 < 0) || (DAT_0073b16c <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
      }
      if (*(char *)(DAT_0073b178 + i) != '\0') {
        FUN_004c3fa0(s__s__d____005b13a4,s_D__Work_DX3D_Animsys_cpp_005b11ec,0x15e);
        if (DAT_0073b174 == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
        }
        if ((iVar1 < 0) || (DAT_0073b16c <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       &DAT_0073b17c,i,DAT_0073b16c);
        }
        if (*(char *)(DAT_0073b178 + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       &DAT_0073b17c,i);
        }
        FUN_00559d4e(*(undefined4 *)(iVar1 + 4 + DAT_0073b168));
      }
      i = i + 1;
      iVar1 = iVar1 + 9;
    } while (i < *(int *)(in_ECX + 4));
  }
  FUN_004c3fa0(s__s__d____005b13a4,s_D__Work_DX3D_Animsys_cpp_005b11ec,0x162);
  return;
}


/* ==== 004b7970 FUN_004b7970 ==== */

int FUN_004b7970(char *param_1)

{
  int *piVar1;
  char cVar2;
  int j;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint k;
  uint m;
  int iVar6;
  int i;
  char *pcVar7;
  
  FUN_004c3fa0(s_get_mesh_index___s_005b13f4,param_1);
  iVar5 = *(int *)(in_ECX + 0x1c);
  i = 0;
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      if ((iVar6 < 0) || (*(int *)(in_ECX + 0x1c) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     in_ECX + 0x2c,*(undefined4 *)(in_ECX + 0x1c),in_ECX + 0x45);
      }
      if (*(char *)(*(int *)(in_ECX + 0x28) + i) != '\0') {
        if (*(int *)(in_ECX + 0x24) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       in_ECX + 0x2c,*(undefined4 *)(in_ECX + 0x1c),in_ECX + 0x45);
        }
        if ((iVar6 < 0) || (*(int *)(in_ECX + 0x1c) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       in_ECX + 0x2c,i,*(undefined4 *)(in_ECX + 0x1c));
        }
        if (*(char *)(*(int *)(in_ECX + 0x28) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       in_ECX + 0x2c,i);
        }
        j = __strcmpi(param_1,(char *)(*(int *)(in_ECX + 0x18) + iVar6));
        if (j == 0) {
          FUN_004c3fa0(s___already_used__index__d_005b13d8,i);
          if (*(int *)(in_ECX + 0x24) == 0) {
            FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                         in_ECX + 0x2c,*(undefined4 *)(in_ECX + 0x1c),in_ECX + 0x45);
          }
          if ((i < 0) || (*(int *)(in_ECX + 0x1c) <= i)) {
            FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                         in_ECX + 0x2c,i,*(undefined4 *)(in_ECX + 0x1c));
          }
          if (*(char *)(*(int *)(in_ECX + 0x28) + i) == '\0') {
            FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                         in_ECX + 0x2c,i);
          }
          piVar1 = (int *)(i * 0x15 + 0x11 + *(int *)(in_ECX + 0x18));
          *piVar1 = *piVar1 + 1;
          return i;
        }
      }
      i = i + 1;
      iVar6 = iVar6 + 0x15;
    } while (i < iVar5);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 in_ECX + 0x2c,*(undefined4 *)(in_ECX + 0x1c),in_ECX + 0x45);
  }
  iVar5 = *(int *)(in_ECX + 0x20);
  i = *(int *)(in_ECX + 0x1c);
  if (iVar5 < i) {
    iVar6 = *(int *)(in_ECX + 0x28);
    j = iVar5;
    do {
      if (*(char *)(iVar6 + j) == '\0') goto LAB_004b7b82;
      j = j + 1;
    } while (j < i);
  }
  j = 0;
  if (0 < iVar5) {
    iVar6 = *(int *)(in_ECX + 0x28);
    do {
      if (*(char *)(iVar6 + j) == '\0') goto LAB_004b7b82;
      j = j + 1;
    } while (j < iVar5);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,in_ECX + 0x2c
               ,i,in_ECX + 0x45);
  j = -1;
LAB_004b7bae:
  FUN_004c3fa0(s___not_yet_used__adding_to_list___005b13b0,j);
  if (*(int *)(in_ECX + 0x24) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 in_ECX + 0x2c,*(undefined4 *)(in_ECX + 0x1c),in_ECX + 0x45);
  }
  if ((j < 0) || (*(int *)(in_ECX + 0x1c) <= j)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 in_ECX + 0x2c,j,*(undefined4 *)(in_ECX + 0x1c));
  }
  if (*(char *)(*(int *)(in_ECX + 0x28) + j) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 in_ECX + 0x2c,j);
  }
  iVar5 = *(int *)(in_ECX + 0x18);
  pcVar3 = (char *)FUN_005690b0(param_1);
  k = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (k == 0) break;
    k = k - 1;
    pcVar7 = pcVar3 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar2 != '\0');
  k = ~k;
  pcVar3 = pcVar7 + -k;
  pcVar7 = (char *)(j * 0x15 + iVar5);
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 in_ECX + 0x2c,*(undefined4 *)(in_ECX + 0x1c),in_ECX + 0x45);
  }
  if ((j < 0) || (*(int *)(in_ECX + 0x1c) <= j)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 in_ECX + 0x2c,j,*(undefined4 *)(in_ECX + 0x1c));
  }
  if (*(char *)(*(int *)(in_ECX + 0x28) + j) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 in_ECX + 0x2c,j);
  }
  iVar5 = *(int *)(in_ECX + 0x18);
  uVar4 = FUN_004bc8c0(2,param_1);
  *(undefined4 *)(iVar5 + j * 0x15 + 0xd) = uVar4;
  iVar5 = FUN_004b8410(j);
  *(undefined4 *)(iVar5 + 0x11) = 1;
  return j;
LAB_004b7b82:
  *(undefined1 *)(iVar6 + j) = 1;
  *(int *)(in_ECX + 0x20) = j;
  goto LAB_004b7bae;
}


/* ==== 004b7d30 FUN_004b7d30 ==== */

int FUN_004b7d30(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int __strcmpi_result;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint k;
  uint m;
  int iVar6;
  int i;
  char *pcVar7;
  int j;
  
  FUN_004c3fa0(s_get_texture_index___s_005b140c,param_1);
  iVar5 = *(int *)(in_ECX + 0x62);
  i = 0;
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      if ((iVar6 < 0) || (*(int *)(in_ECX + 0x62) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
      }
      if (*(char *)(*(int *)(in_ECX + 0x6e) + i) != '\0') {
        if (*(int *)(in_ECX + 0x6a) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
        }
        if ((iVar6 < 0) || (*(int *)(in_ECX + 0x62) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       in_ECX + 0x72,i,*(undefined4 *)(in_ECX + 0x62));
        }
        if (*(char *)(*(int *)(in_ECX + 0x6e) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       in_ECX + 0x72,i);
        }
        __strcmpi_result = __strcmpi((char *)param_1,(char *)(*(int *)(in_ECX + 0x5e) + iVar6));
        if (__strcmpi_result == 0) {
          FUN_004c3fa0(s___already_used__index__d_005b13d8,i);
          if (*(int *)(in_ECX + 0x6a) == 0) {
            FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                         in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
          }
          if ((i < 0) || (*(int *)(in_ECX + 0x62) <= i)) {
            FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                         in_ECX + 0x72,i,*(undefined4 *)(in_ECX + 0x62));
          }
          if (*(char *)(*(int *)(in_ECX + 0x6e) + i) == '\0') {
            FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                         in_ECX + 0x72,i);
          }
          piVar1 = (int *)(i * 0x15 + 0x11 + *(int *)(in_ECX + 0x5e));
          *piVar1 = *piVar1 + 1;
          return i;
        }
      }
      i = i + 1;
      iVar6 = iVar6 + 0x15;
    } while (i < iVar5);
  }
  if (*(int *)(in_ECX + 0x6a) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
  }
  iVar5 = *(int *)(in_ECX + 0x66);
  i = *(int *)(in_ECX + 0x62);
  if (iVar5 < i) {
    j = iVar5;
    do {
      if (*(char *)(*(int *)(in_ECX + 0x6e) + j) == '\0') {
        *(undefined1 *)(*(int *)(in_ECX + 0x6e) + j) = 1;
        *(int *)(in_ECX + 0x66) = j;
        goto LAB_004b7f86;
      }
      j = j + 1;
    } while (j < i);
  }
  j = 0;
  if (0 < iVar5) {
    do {
      if (*(char *)(*(int *)(in_ECX + 0x6e) + j) == '\0') {
        *(undefined1 *)(*(int *)(in_ECX + 0x6e) + j) = 1;
        *(int *)(in_ECX + 0x66) = j;
        goto LAB_004b7f86;
      }
      j = j + 1;
    } while (j < iVar5);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,in_ECX + 0x72
               ,i,in_ECX + 0x8b);
  j = -1;
LAB_004b7f86:
  FUN_004c3fa0(s___not_yet_used__adding_to_list___005b13b0,j);
  if (*(int *)(in_ECX + 0x6a) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
  }
  if ((j < 0) || (*(int *)(in_ECX + 0x62) <= j)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 in_ECX + 0x72,j,*(undefined4 *)(in_ECX + 0x62));
  }
  if (*(char *)(*(int *)(in_ECX + 0x6e) + j) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 in_ECX + 0x72,j);
  }
  iVar5 = *(int *)(in_ECX + 0x5e);
  pcVar3 = (char *)FUN_005690b0(param_1);
  k = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (k == 0) break;
    k = k - 1;
    pcVar7 = pcVar3 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar2 != '\0');
  k = ~k;
  pcVar3 = pcVar7 + -k;
  pcVar7 = (char *)(j * 0x15 + iVar5);
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (*(int *)(in_ECX + 0x14) == 0) {
    uVar4 = FUN_004b8e00(param_1,param_2);
    iVar5 = FUN_004b8410(j);
    *(undefined4 *)(iVar5 + 0xd) = uVar4;
  }
  else {
    if (*(int *)(in_ECX + 0x6a) == 0) {
      FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                   in_ECX + 0x72,*(undefined4 *)(in_ECX + 0x62),in_ECX + 0x8b);
    }
    if ((j < 0) || (*(int *)(in_ECX + 0x62) <= j)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                   in_ECX + 0x72,j,*(undefined4 *)(in_ECX + 0x62));
    }
    if (*(char *)(*(int *)(in_ECX + 0x6e) + j) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                   in_ECX + 0x72,j);
    }
    iVar5 = *(int *)(in_ECX + 0x5e);
    uVar4 = FUN_004b94e0((char *)param_1);
    *(undefined4 *)(iVar5 + j * 0x15 + 0xd) = uVar4;
  }
  iVar5 = FUN_004b8410(j);
  *(undefined4 *)(iVar5 + 0x11) = 1;
  return j;
}


/* ==== 004b8150 FUN_004b8150 ==== */

int FUN_004b8150(int param_1)

{
  int i;
  
  i = 0;
  while( true ) {
    if (DAT_0073b174 == 0) {
      FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                   &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
    }
    if ((param_1 < 0) || (DAT_0073b16c <= param_1)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                   &DAT_0073b17c,param_1,DAT_0073b16c);
    }
    if (*(char *)(DAT_0073b178 + param_1) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                   &DAT_0073b17c,param_1);
    }
    if (*(int *)(param_1 * 9 + DAT_0073b168) <= i) {
      FUN_004c4150(s___s__d___no_free_index_in_index_f_005b1424,s_D__Work_DX3D_Animsys_cpp_005b11ec,
                   0x1e4,param_1,i + -1);
      return -1;
    }
    if (DAT_0073b174 == 0) {
      FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                   &DAT_0073b17c,DAT_0073b16c,&DAT_0073b195);
    }
    if ((param_1 < 0) || (DAT_0073b16c <= param_1)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                   &DAT_0073b17c,param_1,DAT_0073b16c);
    }
    if (*(char *)(DAT_0073b178 + param_1) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                   &DAT_0073b17c,param_1);
    }
    if (*(int *)(*(int *)(param_1 * 9 + 4 + DAT_0073b168) + i * 4) == -1) break;
    i = i + 1;
  }
  return i;
}


/* ==== 004b82c0 FUN_004b82c0 ==== */

void FUN_004b82c0(void)

{
  int *in_ECX;
  
  if (*in_ECX == 0) {
    FUN_004c4150(s_Animsystem_not_initialised___s___005b1470,s_D__Work_DX3D_Animsys_cpp_005b11ec,
                 0x1ef);
  }
  return;
}


/* ==== 004b82e0 FUN_004b82e0 ==== */

void FUN_004b82e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  return;
}


/* ==== 004b82f0 FUN_004b82f0 ==== */

int FUN_004b82f0(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[3] == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,in_ECX + 5
                 ,in_ECX[1],(int)in_ECX + 0x2d);
  }
  if ((param_1 < 0) || (in_ECX[1] <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,in_ECX + 5
                 ,param_1,in_ECX[1]);
  }
  if (*(char *)(in_ECX[4] + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,in_ECX + 5
                 ,param_1);
  }
  return param_1 * 0x10 + *in_ECX;
}


/* ==== 004b8380 FUN_004b8380 ==== */

int FUN_004b8380(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[3] == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,in_ECX + 5
                 ,in_ECX[1],(int)in_ECX + 0x2d);
  }
  if ((param_1 < 0) || (in_ECX[1] <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,in_ECX + 5
                 ,param_1,in_ECX[1]);
  }
  if (*(char *)(in_ECX[4] + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,in_ECX + 5
                 ,param_1);
  }
  return param_1 * 9 + *in_ECX;
}


/* ==== 004b8410 FUN_004b8410 ==== */

int FUN_004b8410(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[3] == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,in_ECX + 5
                 ,in_ECX[1],(int)in_ECX + 0x2d);
  }
  if ((param_1 < 0) || (in_ECX[1] <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,in_ECX + 5
                 ,param_1,in_ECX[1]);
  }
  if (*(char *)(in_ECX[4] + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,in_ECX + 5
                 ,param_1);
  }
  return param_1 * 0x15 + *in_ECX;
}


/* ==== 004b84b0 FUN_004b84b0 ==== */

void FUN_004b84b0(uint size)

{
  void *operator_new_result;
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  if (in_ECX[3] != 0) {
    if (in_ECX[3] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,
                   in_ECX[1]);
      FUN_0054b339(*in_ECX);
    }
    if (in_ECX[3] != 0) {
      FUN_0054b339(in_ECX[4]);
      in_ECX[3] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 (int)in_ECX + 0x2d,in_ECX + 5,size);
  }
  operator_new_result = operator_new(size * 0x19);
  *in_ECX = operator_new_result;
  in_ECX[1] = size;
  in_ECX[2] = 0;
  operator_new_result = operator_new(size);
  in_ECX[4] = operator_new_result;
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
  return;
}


