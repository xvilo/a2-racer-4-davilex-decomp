/* spel.dat — dx3d/Animsys.cpp: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b63c0 FUN_004b63c0 ==== */

void FUN_004b63c0(void)

{
  FUN_005584e0(&LAB_004b63d0);
  return;
}


/* ==== 004b6430 FUN_004b6430 ==== */

void * __thiscall FUN_004b6430(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  char *dest;
  char *dest_2;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f606;
  local_c = ExceptionList;
  dest = (char *)((int)this + 0x2c);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x24) = 0;
  _strncpy(dest,s_Meshlist_005b1110,0x19);
  dest_2 = (char *)((int)this + 0x45);
  _strncpy(dest_2,s_meshes_t_005b1104,0x19);
  if (*(int *)((int)this + 0x24) != 0) {
    if (*(int *)((int)this + 0x24) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,dest_2,dest,
                   *(undefined4 *)((int)this + 0x1c));
      FUN_0054b339(*(undefined4 *)((int)this + 0x18));
    }
    if (*(int *)((int)this + 0x24) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x28));
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,dest_2,dest,0);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  dest = (char *)((int)this + 0x72);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x6a) = 0;
  _strncpy(dest,s_Texturelist_005b10f8,0x19);
  dest_2 = (char *)((int)this + 0x8b);
  _strncpy(dest_2,s_textures_t_005b10ec,0x19);
  if (*(int *)((int)this + 0x6a) != 0) {
    if (*(int *)((int)this + 0x6a) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,dest_2,dest,
                   *(undefined4 *)((int)this + 0x62));
      FUN_0054b339(*(undefined4 *)((int)this + 0x5e));
    }
    if (*(int *)((int)this + 0x6a) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x6e));
      *(undefined4 *)((int)this + 0x6a) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *(undefined4 *)((int)this + 0x5e) = 0;
  *(undefined4 *)((int)this + 0x62) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,dest_2,dest,0);
  *(undefined4 *)((int)this + 0x6e) = 0;
  *(undefined4 *)((int)this + 0x6a) = 0;
  dest = (char *)((int)this + 0xb8);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0xb0) = 0;
  _strncpy(dest,s_Animnamelist_005b10dc,0x19);
  dest_2 = (char *)((int)this + 0xd1);
  _strncpy(dest_2,s_anim_name_t_005b10d0,0x19);
  if (*(int *)((int)this + 0xb0) != 0) {
    if (*(int *)((int)this + 0xb0) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,dest_2,dest,
                   *(undefined4 *)((int)this + 0xa8));
      FUN_0054b339(*(undefined4 *)((int)this + 0xa4));
    }
    if (*(int *)((int)this + 0xb0) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0xb4));
      *(undefined4 *)((int)this + 0xb0) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,dest_2,dest,0);
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}


/* ==== 004b6650 FUN_004b6650 ==== */

void __thiscall FUN_004b6650(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056f634;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if (*(int *)this == 1) {
    ExceptionList = &local_c;
    FUN_004b67b0();
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int *)((int)this + 0xb0) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0xd1,(int)this + 0xb8,
                 *(undefined4 *)((int)this + 0xa8));
    FUN_0054b339(*(undefined4 *)((int)this + 0xa4));
  }
  if (*(int *)((int)this + 0xb0) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0xb4));
    *(undefined4 *)((int)this + 0xb0) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  local_4 = local_4 & 0xffffff00;
  if (*(int *)((int)this + 0x6a) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x8b,(int)this + 0x72,
                 *(undefined4 *)((int)this + 0x62));
    FUN_0054b339(*(undefined4 *)((int)this + 0x5e));
  }
  if (*(int *)((int)this + 0x6a) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0x6e));
    *(undefined4 *)((int)this + 0x6a) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  local_4 = 0xffffffff;
  if (*(int *)((int)this + 0x24) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x45,(int)this + 0x2c,
                 *(undefined4 *)((int)this + 0x1c));
    FUN_0054b339(*(undefined4 *)((int)this + 0x18));
  }
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  ExceptionList = local_c;
  return;
}


/* ==== 004b67b0 FUN_004b67b0 ==== */

void __thiscall FUN_004b67b0(void *this)

{
  FUN_004c3fa0(s_Exit_animsys_005b111c);
  if (*(int *)this != 0) {
    FUN_004b7810(this);
    if (*(int *)((int)this + 0x24) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x45,(int)this + 0x2c,
                   *(undefined4 *)((int)this + 0x1c));
      FUN_0054b339(*(undefined4 *)((int)this + 0x18));
    }
    if (*(int *)((int)this + 0x24) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x28));
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
    if (*(int *)((int)this + 0x6a) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x8b,(int)this + 0x72,
                   *(undefined4 *)((int)this + 0x62));
      FUN_0054b339(*(undefined4 *)((int)this + 0x5e));
    }
    if (*(int *)((int)this + 0x6a) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x6e));
      *(undefined4 *)((int)this + 0x6a) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
    if (*(int *)((int)this + 0xb0) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0xd1,(int)this + 0xb8,
                   *(undefined4 *)((int)this + 0xa8));
      FUN_0054b339(*(undefined4 *)((int)this + 0xa4));
    }
    if (*(int *)((int)this + 0xb0) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0xb4));
      *(undefined4 *)((int)this + 0xb0) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *(undefined4 *)this = 0;
  return;
}


/* ==== 004b68f0 FUN_004b68f0 ==== */

void __thiscall FUN_004b68f0(void *this,uint size,uint size_3,uint size_2,uint size_4)

{
  void *operator_new_result;
  int i;
  int iVar1;
  
  FUN_004c3fa0(s_init_animsys__meshes__d__texture_005b112c,size,size_3,size_2,size_4);
  if (*(int *)((int)this + 0x24) != 0) {
    if (*(int *)((int)this + 0x24) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x45,(int)this + 0x2c,
                   *(undefined4 *)((int)this + 0x1c));
      FUN_0054b339(*(undefined4 *)((int)this + 0x18));
    }
    if (*(int *)((int)this + 0x24) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x28));
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 (int)this + 0x45,(int)this + 0x2c,size);
  }
  operator_new_result = operator_new(size * 0x15);
  *(void **)((int)this + 0x18) = operator_new_result;
  *(uint *)((int)this + 0x1c) = size;
  *(undefined4 *)((int)this + 0x20) = 0;
  operator_new_result = operator_new(size);
  *(void **)((int)this + 0x28) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)this + 0x45,(int)this + 0x2c,
               *(undefined4 *)((int)this + 0x1c));
  i = 0;
  *(undefined4 *)((int)this + 0x24) = 1;
  if (0 < (int)size) {
    do {
      i = i + 1;
      *(undefined1 *)(*(int *)((int)this + 0x28) + -1 + i) = 0;
    } while (i < (int)size);
  }
  if (*(int *)((int)this + 0x6a) != 0) {
    FUN_004b1e00((undefined4 *)((int)this + 0x5e));
  }
  if ((int)size_3 < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 (int)this + 0x8b,(int)this + 0x72,size_3);
  }
  operator_new_result = operator_new(size_3 * 0x15);
  *(undefined4 *)((int)this + 0x5e) = operator_new_result;
  *(uint *)((int)this + 0x62) = size_3;
  *(undefined4 *)((int)this + 0x66) = 0;
  operator_new_result = operator_new(size_3);
  *(void **)((int)this + 0x6e) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)this + 0x8b,(int)this + 0x72,
               *(undefined4 *)((int)this + 0x62));
  i = 0;
  *(undefined4 *)((int)this + 0x6a) = 1;
  if (0 < (int)size_3) {
    do {
      i = i + 1;
      *(undefined1 *)(*(int *)((int)this + 0x6e) + -1 + i) = 0;
    } while (i < (int)size_3);
  }
  if (DAT_0073b12c != 0) {
    FUN_004b1e00(&DAT_0073b120);
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
    FUN_004b1e00(&DAT_0073b168);
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
  FUN_004b84b0((void *)((int)this + 0xa4),size_4);
  *(uint *)((int)this + 8) = size_2;
  *(uint *)((int)this + 4) = size_4;
  *(uint *)((int)this + 0xc) = size_3;
  *(uint *)((int)this + 0x10) = size;
  *(undefined4 *)this = 1;
  return;
}


/* ==== 004b6c00 FUN_004b6c00 ==== */

int __thiscall FUN_004b6c00(void *this,char *param_2,int param_3)

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
  
  FUN_004c3fa0(s_adding_anim___s__frames__d_005b1244,param_2,param_3);
  FUN_004b82c0(this);
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
  *(int *)(iVar2 + DAT_0073b168) = param_3;
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
  _malloc_result = _malloc(param_3 * 4);
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
  if (0 < param_3) {
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
    } while (j < param_3);
  }
  FUN_004c3fa0(s___add_name_to_list_005b1190);
  uVar3 = FUN_004b8590((int)this + 0xa4);
  k = 0xffffffff;
  pcVar4 = param_2;
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
  pcVar4 = (char *)FUN_004b8620((int)this + 0xa4,uVar3);
  k = 0xffffffff;
  do {
    pcVar5 = param_2;
    if (k == 0) break;
    k = k - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
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

int __thiscall
FUN_004b6ff0(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int i;
  
  FUN_004c3fa0(s_adding_frame__anim__d__mesh__s__t_005b1318,param_2,param_3,param_4);
  FUN_004b82c0(this);
  iVar1 = FUN_004b7970(this,param_3);
  iVar2 = FUN_004b7d30(this,param_4,param_5);
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
  if (*(int *)((int)this + 0x24) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 (int)this + 0x2c,*(undefined4 *)((int)this + 0x1c),(int)this + 0x45);
  }
  if ((iVar1 < 0) || (*(int *)((int)this + 0x1c) <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 (int)this + 0x2c,iVar1,*(undefined4 *)((int)this + 0x1c));
  }
  if (*(char *)(*(int *)((int)this + 0x28) + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 (int)this + 0x2c,iVar1);
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
       *(undefined4 *)(iVar1 * 0x15 + 0xd + *(int *)((int)this + 0x18));
  if (*(int *)((int)this + 0x6a) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
  }
  if ((iVar2 < 0) || (*(int *)((int)this + 0x62) <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 (int)this + 0x72,iVar2,*(undefined4 *)((int)this + 0x62));
  }
  if (*(char *)(*(int *)((int)this + 0x6e) + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 (int)this + 0x72,iVar2);
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
       *(undefined4 *)(iVar2 * 0x15 + 0xd + *(int *)((int)this + 0x5e));
  iVar3 = FUN_004b82f0(&DAT_0073b120,i);
  *(int *)(iVar3 + 8) = iVar1;
  iVar1 = FUN_004b82f0(&DAT_0073b120,i);
  *(int *)(iVar1 + 0xc) = iVar2;
  puVar4 = (undefined4 *)FUN_004b82f0(&DAT_0073b120,i);
  FUN_004c3fa0(s___framelist__mesh__d_005b12dc,*puVar4);
  iVar1 = FUN_004b82f0(&DAT_0073b120,i);
  FUN_004c3fa0(s___framelist__texture__d_005b12bc,*(undefined4 *)(iVar1 + 4));
  iVar1 = FUN_004b82f0(&DAT_0073b120,i);
  FUN_004c3fa0(s___framelist__ld_mesh__d_005b129c,*(undefined4 *)(iVar1 + 8));
  iVar1 = FUN_004b82f0(&DAT_0073b120,i);
  FUN_004c3fa0(s___framelist__ld_texture__d_005b127c,*(undefined4 *)(iVar1 + 0xc));
  iVar1 = FUN_004b8150(param_2);
  FUN_004c3fa0(s___indexlist__index__d_005b1260,iVar1);
  iVar2 = FUN_004b8380(&DAT_0073b168,param_2);
  *(int *)(*(int *)(iVar2 + 4) + iVar1 * 4) = i;
  iVar1 = FUN_004b8380(&DAT_0073b168,param_2);
  *(undefined1 *)(iVar1 + 8) = 1;
  return i;
LAB_004b73e6:
  *(undefined1 *)(DAT_0073b130 + i) = 1;
  DAT_0073b128 = i;
  goto LAB_004b70c7;
}


/* ==== 004b7400 FUN_004b7400 ==== */

undefined4 __thiscall FUN_004b7400(void *this,char *str1)

{
  int __strcmpi_result;
  int iVar1;
  int i;
  
  i = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    iVar1 = 0;
    do {
      if ((iVar1 < 0) || (*(int *)((int)this + 0x62) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
      }
      if (*(char *)(*(int *)((int)this + 0x6e) + i) != '\0') {
        if (*(int *)((int)this + 0x6a) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
        }
        if ((iVar1 < 0) || (*(int *)((int)this + 0x62) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       (int)this + 0x72,i,*(undefined4 *)((int)this + 0x62));
        }
        if (*(char *)(*(int *)((int)this + 0x6e) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       (int)this + 0x72,i);
        }
        __strcmpi_result = __strcmpi(str1,(char *)(*(int *)((int)this + 0x5e) + iVar1));
        if (__strcmpi_result == 0) {
          if (*(int *)((int)this + 0x6a) == 0) {
            FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                         (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
          }
          if ((i < 0) || (*(int *)((int)this + 0x62) <= i)) {
            FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                         (int)this + 0x72,i,*(undefined4 *)((int)this + 0x62));
          }
          if (*(char *)(*(int *)((int)this + 0x6e) + i) == '\0') {
            FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                         (int)this + 0x72,i);
          }
          return *(undefined4 *)(i * 0x15 + 0xd + *(int *)((int)this + 0x5e));
        }
      }
      i = i + 1;
      iVar1 = iVar1 + 0x15;
    } while (i < *(int *)((int)this + 0xc));
  }
  FUN_004c4150(s_find_texture_index___texture_<_s_005b1344,str1);
  return 0;
}


/* ==== 004b75a0 FUN_004b75a0 ==== */

int __thiscall FUN_004b75a0(void *this,char *str1)

{
  int __strcmpi_result;
  int iVar1;
  int i;
  
  i = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar1 = 0;
    do {
      if ((iVar1 < 0) || (*(int *)((int)this + 0xa8) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     (int)this + 0xb8,*(undefined4 *)((int)this + 0xa8),(int)this + 0xd1);
      }
      if (*(char *)(*(int *)((int)this + 0xb4) + i) != '\0') {
        if (*(int *)((int)this + 0xb0) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       (int)this + 0xb8,*(undefined4 *)((int)this + 0xa8),(int)this + 0xd1);
        }
        if ((iVar1 < 0) || (*(int *)((int)this + 0xa8) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       (int)this + 0xb8,i,*(undefined4 *)((int)this + 0xa8));
        }
        if (*(char *)(*(int *)((int)this + 0xb4) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       (int)this + 0xb8,i);
        }
        __strcmpi_result = __strcmpi(str1,(char *)(*(int *)((int)this + 0xa4) + iVar1));
        if (__strcmpi_result == 0) {
          return i;
        }
      }
      i = i + 1;
      iVar1 = iVar1 + 0x19;
    } while (i < *(int *)((int)this + 4));
  }
  FUN_004c4150(s_find_anim_name_index___anim_<_s>_005b1374,str1);
  return 0;
}


/* ==== 004b76e0 FUN_004b76e0 ==== */

undefined4 __thiscall FUN_004b76e0(void *this,char *str1)

{
  int __strcmpi_result;
  int iVar1;
  int i;
  
  i = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar1 = 0;
    do {
      if ((iVar1 < 0) || (*(int *)((int)this + 0xa8) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     (int)this + 0xb8,*(undefined4 *)((int)this + 0xa8),(int)this + 0xd1);
      }
      if (*(char *)(*(int *)((int)this + 0xb4) + i) != '\0') {
        if (*(int *)((int)this + 0xb0) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       (int)this + 0xb8,*(undefined4 *)((int)this + 0xa8),(int)this + 0xd1);
        }
        if ((iVar1 < 0) || (*(int *)((int)this + 0xa8) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       (int)this + 0xb8,i,*(undefined4 *)((int)this + 0xa8));
        }
        if (*(char *)(*(int *)((int)this + 0xb4) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       (int)this + 0xb8,i);
        }
        __strcmpi_result = __strcmpi(str1,(char *)(*(int *)((int)this + 0xa4) + iVar1));
        if (__strcmpi_result == 0) {
          return 1;
        }
      }
      i = i + 1;
      iVar1 = iVar1 + 0x19;
    } while (i < *(int *)((int)this + 4));
  }
  return 0;
}


/* ==== 004b7810 FUN_004b7810 ==== */

void __thiscall FUN_004b7810(void *this)

{
  int i;
  int iVar1;
  
  FUN_004c3fa0(s__s__d____005b13a4,s_D__Work_DX3D_Animsys_cpp_005b11ec,0x156);
  i = 0;
  if (0 < *(int *)((int)this + 4)) {
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
    } while (i < *(int *)((int)this + 4));
  }
  FUN_004c3fa0(s__s__d____005b13a4,s_D__Work_DX3D_Animsys_cpp_005b11ec,0x162);
  return;
}


/* ==== 004b7970 FUN_004b7970 ==== */

int __thiscall FUN_004b7970(void *this,char *param_2)

{
  char cVar1;
  int j;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint k;
  uint m;
  int iVar5;
  int i;
  char *pcVar6;
  int *this_val;
  
  FUN_004c3fa0(s_get_mesh_index___s_005b13f4,param_2);
  iVar4 = *(int *)((int)this + 0x1c);
  i = 0;
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      if ((iVar5 < 0) || (*(int *)((int)this + 0x1c) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     (int)this + 0x2c,*(undefined4 *)((int)this + 0x1c),(int)this + 0x45);
      }
      if (*(char *)(*(int *)((int)this + 0x28) + i) != '\0') {
        if (*(int *)((int)this + 0x24) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       (int)this + 0x2c,*(undefined4 *)((int)this + 0x1c),(int)this + 0x45);
        }
        if ((iVar5 < 0) || (*(int *)((int)this + 0x1c) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       (int)this + 0x2c,i,*(undefined4 *)((int)this + 0x1c));
        }
        if (*(char *)(*(int *)((int)this + 0x28) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       (int)this + 0x2c,i);
        }
        j = __strcmpi(param_2,(char *)(*(int *)((int)this + 0x18) + iVar5));
        if (j == 0) {
          FUN_004c3fa0(s___already_used__index__d_005b13d8,i);
          if (*(int *)((int)this + 0x24) == 0) {
            FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                         (int)this + 0x2c,*(undefined4 *)((int)this + 0x1c),(int)this + 0x45);
          }
          if ((i < 0) || (*(int *)((int)this + 0x1c) <= i)) {
            FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                         (int)this + 0x2c,i,*(undefined4 *)((int)this + 0x1c));
          }
          if (*(char *)(*(int *)((int)this + 0x28) + i) == '\0') {
            FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                         (int)this + 0x2c,i);
          }
          this_val = (int *)(i * 0x15 + 0x11 + *(int *)((int)this + 0x18));
          *this_val = *this_val + 1;
          return i;
        }
      }
      i = i + 1;
      iVar5 = iVar5 + 0x15;
    } while (i < iVar4);
  }
  this_val = (int *)((int)this + 0x18);
  if (*(int *)((int)this + 0x24) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 (int)this + 0x2c,*(undefined4 *)((int)this + 0x1c),(int)this + 0x45);
  }
  iVar4 = *(int *)((int)this + 0x20);
  i = *(int *)((int)this + 0x1c);
  if (iVar4 < i) {
    iVar5 = *(int *)((int)this + 0x28);
    j = iVar4;
    do {
      if (*(char *)(iVar5 + j) == '\0') goto LAB_004b7b82;
      j = j + 1;
    } while (j < i);
  }
  j = 0;
  if (0 < iVar4) {
    iVar5 = *(int *)((int)this + 0x28);
    do {
      if (*(char *)(iVar5 + j) == '\0') goto LAB_004b7b82;
      j = j + 1;
    } while (j < iVar4);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,
               (int)this + 0x2c,i,(int)this + 0x45);
  j = -1;
LAB_004b7bae:
  FUN_004c3fa0(s___not_yet_used__adding_to_list___005b13b0,j);
  if (*(int *)((int)this + 0x24) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 (int)this + 0x2c,*(undefined4 *)((int)this + 0x1c),(int)this + 0x45);
  }
  if ((j < 0) || (*(int *)((int)this + 0x1c) <= j)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 (int)this + 0x2c,j,*(undefined4 *)((int)this + 0x1c));
  }
  if (*(char *)(*(int *)((int)this + 0x28) + j) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 (int)this + 0x2c,j);
  }
  iVar4 = *this_val;
  pcVar2 = (char *)FUN_005690b0();
  k = 0xffffffff;
  do {
    pcVar6 = pcVar2;
    if (k == 0) break;
    k = k - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  k = ~k;
  pcVar2 = pcVar6 + -k;
  pcVar6 = (char *)(j * 0x15 + iVar4);
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (*(int *)((int)this + 0x24) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 (int)this + 0x2c,*(undefined4 *)((int)this + 0x1c),(int)this + 0x45);
  }
  if ((j < 0) || (*(int *)((int)this + 0x1c) <= j)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 (int)this + 0x2c,j,*(undefined4 *)((int)this + 0x1c));
  }
  if (*(char *)(*(int *)((int)this + 0x28) + j) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 (int)this + 0x2c,j);
  }
  iVar4 = *this_val;
  uVar3 = FUN_004bc8c0(2,param_2);
  *(undefined4 *)(iVar4 + j * 0x15 + 0xd) = uVar3;
  iVar4 = FUN_004b8410(this_val,j);
  *(undefined4 *)(iVar4 + 0x11) = 1;
  return j;
LAB_004b7b82:
  *(undefined1 *)(iVar5 + j) = 1;
  *(int *)((int)this + 0x20) = j;
  goto LAB_004b7bae;
}


/* ==== 004b7d30 FUN_004b7d30 ==== */

int __thiscall FUN_004b7d30(void *this,int *param_2,int *param_3)

{
  char cVar1;
  int __strcmpi_result;
  char *pcVar2;
  undefined4 uVar3;
  int this_val_2;
  int extraout_ECX;
  uint k;
  uint m;
  int iVar4;
  int i;
  char *pcVar5;
  int j;
  int *this_val;
  
  FUN_004c3fa0(s_get_texture_index___s_005b140c,param_2);
  this_val_2 = *(int *)((int)this + 0x62);
  i = 0;
  if (0 < this_val_2) {
    iVar4 = 0;
    do {
      if ((iVar4 < 0) || (*(int *)((int)this + 0x62) <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
      }
      if (*(char *)(*(int *)((int)this + 0x6e) + i) != '\0') {
        if (*(int *)((int)this + 0x6a) == 0) {
          FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                       (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
        }
        if ((iVar4 < 0) || (*(int *)((int)this + 0x62) <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                       (int)this + 0x72,i,*(undefined4 *)((int)this + 0x62));
        }
        if (*(char *)(*(int *)((int)this + 0x6e) + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                       (int)this + 0x72,i);
        }
        __strcmpi_result = __strcmpi((char *)param_2,(char *)(*(int *)((int)this + 0x5e) + iVar4));
        if (__strcmpi_result == 0) {
          FUN_004c3fa0(s___already_used__index__d_005b13d8,i);
          if (*(int *)((int)this + 0x6a) == 0) {
            FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                         (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
          }
          if ((i < 0) || (*(int *)((int)this + 0x62) <= i)) {
            FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                         (int)this + 0x72,i,*(undefined4 *)((int)this + 0x62));
          }
          if (*(char *)(*(int *)((int)this + 0x6e) + i) == '\0') {
            FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                         (int)this + 0x72,i);
          }
          this_val = (int *)(i * 0x15 + 0x11 + *(int *)((int)this + 0x5e));
          *this_val = *this_val + 1;
          return i;
        }
      }
      i = i + 1;
      iVar4 = iVar4 + 0x15;
    } while (i < this_val_2);
  }
  this_val = (int *)((int)this + 0x5e);
  if (*(int *)((int)this + 0x6a) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
  }
  this_val_2 = *(int *)((int)this + 0x66);
  i = *(int *)((int)this + 0x62);
  if (this_val_2 < i) {
    j = this_val_2;
    do {
      if (*(char *)(*(int *)((int)this + 0x6e) + j) == '\0') {
        *(undefined1 *)(*(int *)((int)this + 0x6e) + j) = 1;
        *(int *)((int)this + 0x66) = j;
        goto LAB_004b7f86;
      }
      j = j + 1;
    } while (j < i);
  }
  j = 0;
  if (0 < this_val_2) {
    do {
      if (*(char *)(*(int *)((int)this + 0x6e) + j) == '\0') {
        *(undefined1 *)(*(int *)((int)this + 0x6e) + j) = 1;
        *(int *)((int)this + 0x66) = j;
        goto LAB_004b7f86;
      }
      j = j + 1;
    } while (j < this_val_2);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,
               (int)this + 0x72,i,(int)this + 0x8b);
  j = -1;
LAB_004b7f86:
  FUN_004c3fa0(s___not_yet_used__adding_to_list___005b13b0,j);
  if (*(int *)((int)this + 0x6a) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
  }
  if ((j < 0) || (*(int *)((int)this + 0x62) <= j)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 (int)this + 0x72,j,*(undefined4 *)((int)this + 0x62));
  }
  this_val_2 = *(int *)((int)this + 0x6e);
  if (*(char *)(this_val_2 + j) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 (int)this + 0x72,j);
    this_val_2 = extraout_ECX;
  }
  i = *this_val;
  pcVar2 = (char *)FUN_005690b0(this_val_2,param_2);
  k = 0xffffffff;
  do {
    pcVar5 = pcVar2;
    if (k == 0) break;
    k = k - 1;
    pcVar5 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar5;
  } while (cVar1 != '\0');
  k = ~k;
  pcVar2 = pcVar5 + -k;
  pcVar5 = (char *)(j * 0x15 + i);
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (*(int *)((int)this + 0x14) == 0) {
    uVar3 = FUN_004b8e00(param_2,param_3);
    this_val_2 = FUN_004b8410(this_val,j);
    *(undefined4 *)(this_val_2 + 0xd) = uVar3;
  }
  else {
    if (*(int *)((int)this + 0x6a) == 0) {
      FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                   (int)this + 0x72,*(undefined4 *)((int)this + 0x62),(int)this + 0x8b);
    }
    if ((j < 0) || (*(int *)((int)this + 0x62) <= j)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                   (int)this + 0x72,j,*(undefined4 *)((int)this + 0x62));
    }
    if (*(char *)(*(int *)((int)this + 0x6e) + j) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                   (int)this + 0x72,j);
    }
    this_val_2 = *this_val;
    uVar3 = FUN_004b94e0((char *)param_2);
    *(undefined4 *)(this_val_2 + j * 0x15 + 0xd) = uVar3;
  }
  this_val_2 = FUN_004b8410(this_val,j);
  *(undefined4 *)(this_val_2 + 0x11) = 1;
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

void __thiscall FUN_004b82c0(void *this)

{
  if (*(int *)this == 0) {
    FUN_004c4150(s_Animsystem_not_initialised___s___005b1470,s_D__Work_DX3D_Animsys_cpp_005b11ec,
                 0x1ef);
  }
  return;
}


/* ==== 004b82e0 FUN_004b82e0 ==== */

void __thiscall FUN_004b82e0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}


/* ==== 004b82f0 FUN_004b82f0 ==== */

int __thiscall FUN_004b82f0(void *this,int param_2)

{
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 (int)this + 0x14,*(undefined4 *)((int)this + 4),(int)this + 0x2d);
  }
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 (int)this + 0x14,param_2,*(undefined4 *)((int)this + 4));
  }
  if (*(char *)(*(int *)((int)this + 0x10) + param_2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 (int)this + 0x14,param_2);
  }
  return param_2 * 0x10 + *(int *)this;
}


/* ==== 004b8380 FUN_004b8380 ==== */

int __thiscall FUN_004b8380(void *this,int param_2)

{
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 (int)this + 0x14,*(undefined4 *)((int)this + 4),(int)this + 0x2d);
  }
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 (int)this + 0x14,param_2,*(undefined4 *)((int)this + 4));
  }
  if (*(char *)(*(int *)((int)this + 0x10) + param_2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 (int)this + 0x14,param_2);
  }
  return param_2 * 9 + *(int *)this;
}


/* ==== 004b8410 FUN_004b8410 ==== */

int __thiscall FUN_004b8410(void *this,int param_2)

{
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 (int)this + 0x14,*(undefined4 *)((int)this + 4),(int)this + 0x2d);
  }
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 (int)this + 0x14,param_2,*(undefined4 *)((int)this + 4));
  }
  if (*(char *)(*(int *)((int)this + 0x10) + param_2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 (int)this + 0x14,param_2);
  }
  return param_2 * 0x15 + *(int *)this;
}


/* ==== 004b84b0 FUN_004b84b0 ==== */

void __thiscall FUN_004b84b0(void *this,uint size)

{
  void *operator_new_result;
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x2d,(int)this + 0x14,
                   *(undefined4 *)((int)this + 4));
      FUN_0054b339(*(undefined4 *)this);
    }
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 (int)this + 0x2d,(int)this + 0x14,size);
  }
  operator_new_result = operator_new(size * 0x19);
  *(void **)this = operator_new_result;
  *(uint *)((int)this + 4) = size;
  *(undefined4 *)((int)this + 8) = 0;
  operator_new_result = operator_new(size);
  *(void **)((int)this + 0x10) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)this + 0x2d,(int)this + 0x14,
               *(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0xc) = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + *(int *)((int)this + 0x10)) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  return;
}


