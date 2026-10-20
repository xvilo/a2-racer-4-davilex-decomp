/* spel.dat — dx3d/Light.cpp: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c3640 FUN_004c3640 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3640(void)

{
  DAT_0073b84c = 0;
  _strncpy(&DAT_0073b854,s_vertex_ptr_005b344c,0x19);
  _strncpy(&DAT_0073b86d,s_vertex_t_005b3440,0x19);
  if (DAT_0073b84c != 0) {
    if (DAT_0073b84c == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b86d,&DAT_0073b854,
                   DAT_0073b844);
      FUN_0054b339(DAT_0073b840);
    }
    if (DAT_0073b84c != 0) {
      FUN_0054b339(DAT_0073b850);
      DAT_0073b84c = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b840 = 0;
  DAT_0073b844 = 0;
  _DAT_0073b848 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b86d,&DAT_0073b854,0);
  DAT_0073b850 = 0;
  DAT_0073b84c = 0;
  return;
}


/* ==== 004c3710 FUN_004c3710 ==== */

void FUN_004c3710(void)

{
  FUN_005584e0(&LAB_004c3720);
  return;
}


/* ==== 004c3790 FUN_004c3790 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3790(void)

{
  DAT_0073b894 = 0;
  _strncpy(&DAT_0073b89c,s_light_ptr_005b3460,0x19);
  _strncpy(&DAT_0073b8b5,s_light_t_005b3458,0x19);
  if (DAT_0073b894 != 0) {
    if (DAT_0073b894 == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b8b5,&DAT_0073b89c,
                   DAT_0073b88c);
      FUN_0054b339(DAT_0073b888);
    }
    if (DAT_0073b894 != 0) {
      FUN_0054b339(DAT_0073b898);
      DAT_0073b894 = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b888 = 0;
  DAT_0073b88c = 0;
  _DAT_0073b890 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b8b5,&DAT_0073b89c,0);
  DAT_0073b898 = 0;
  DAT_0073b894 = 0;
  return;
}


/* ==== 004c3860 FUN_004c3860 ==== */

void FUN_004c3860(void)

{
  FUN_005584e0(&LAB_004c3870);
  return;
}


/* ==== 004c38d0 FUN_004c38d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004c38d0(uint size)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0073b894 != 0) {
    if (DAT_0073b894 == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b8b5,&DAT_0073b89c,
                   DAT_0073b88c);
      FUN_0054b339(DAT_0073b888);
    }
    if (DAT_0073b894 != 0) {
      FUN_0054b339(DAT_0073b898);
      DAT_0073b894 = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 &DAT_0073b8b5,&DAT_0073b89c,size);
  }
  DAT_0073b888 = operator_new(size * 4);
  DAT_0073b88c = size;
  _DAT_0073b890 = 0;
  DAT_0073b898 = operator_new(size);
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,&DAT_0073b8b5,&DAT_0073b89c,DAT_0073b88c)
  ;
  DAT_0073b894 = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)((int)DAT_0073b898 + iVar1) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  return 0;
}


/* ==== 004c39d0 FUN_004c39d0 ==== */

void FUN_004c39d0(void)

{
  int iVar1;
  int i;
  int this_val;
  
  FUN_004c3fa0(s_exit_lights_005b3484);
  i = 0;
  iVar1 = DAT_0073b88c;
  if (0 < DAT_0073b88c) {
    do {
      if ((i < 0) || (iVar1 <= i)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                     &DAT_0073b89c,iVar1,&DAT_0073b8b5);
        iVar1 = DAT_0073b88c;
      }
      if (*(char *)(DAT_0073b898 + i) != '\0') {
        if (DAT_0073b894 == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Light_cpp_005b346c
                       ,0x1e,&DAT_0073b89c,iVar1,&DAT_0073b8b5);
          iVar1 = DAT_0073b88c;
        }
        if ((i < 0) || (iVar1 <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Light_cpp_005b346c
                       ,0x1e,&DAT_0073b89c,i,iVar1);
          iVar1 = DAT_0073b88c;
        }
        if (*(char *)(DAT_0073b898 + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Light_cpp_005b346c
                       ,0x1e,&DAT_0073b89c,i);
          iVar1 = DAT_0073b88c;
        }
        this_val = *(int *)(DAT_0073b888 + i * 4);
        if (this_val != 0) {
          FUN_004c3b40(this_val);
          FUN_0054b339(this_val);
          iVar1 = DAT_0073b88c;
        }
      }
      i = i + 1;
    } while (i < iVar1);
  }
  if (DAT_0073b894 == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b8b5,&DAT_0073b89c,iVar1);
    FUN_0054b339(DAT_0073b888);
  }
  if (DAT_0073b894 != 0) {
    FUN_0054b339(DAT_0073b898);
    DAT_0073b894 = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


