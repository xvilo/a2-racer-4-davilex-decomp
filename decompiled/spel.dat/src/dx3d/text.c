/* spel.dat — dx3d/text.cpp: 26 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b8590 FUN_004b8590 ==== */

int FUN_004b8590(void)

{
  int iVar1;
  int iVar2;
  int i;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 in_ECX + 0x14,*(undefined4 *)(in_ECX + 4),in_ECX + 0x2d);
  }
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar1 < iVar2) {
    iVar3 = *(int *)(in_ECX + 0x10);
    i = iVar1;
    do {
      if (*(char *)(iVar3 + i) == '\0') goto LAB_004b8612;
      i = i + 1;
    } while (i < iVar2);
  }
  i = 0;
  if (0 < iVar1) {
    iVar3 = *(int *)(in_ECX + 0x10);
    do {
      if (*(char *)(iVar3 + i) == '\0') {
LAB_004b8612:
        *(undefined1 *)(iVar3 + i) = 1;
        *(int *)(in_ECX + 8) = i;
        return i;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,in_ECX + 0x14
               ,iVar2,in_ECX + 0x2d);
  return -1;
}


/* ==== 004b8620 FUN_004b8620 ==== */

int FUN_004b8620(int param_1)

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
  return param_1 * 0x19 + *in_ECX;
}


/* ==== 004b86c0 FUN_004b86c0 ==== */

void FUN_004b86c0(void)

{
  int iVar1;
  
  DAT_0073b1bc = 0;
  _strncpy(&DAT_0073b1c4,s_c_texture_005b14b4,0x19);
  _strncpy(&DAT_0073b1dd,s__d3d_texture_ptr_005b14a0,0x19);
  if (DAT_0073b1bc != 0) {
    if (DAT_0073b1bc == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b1dd,&DAT_0073b1c4,
                   DAT_0073b1b4);
      if (DAT_0073b1b0 != 0) {
        iVar1 = DAT_0073b1b0 + -4;
        FUN_005586c5(DAT_0073b1b0,0x48,*(undefined4 *)(DAT_0073b1b0 + -4),FUN_004b9670);
        FUN_0054b339(iVar1);
      }
    }
    if (DAT_0073b1bc != 0) {
      FUN_0054b339(DAT_0073b1c0);
      DAT_0073b1bc = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b1b0 = 0;
  DAT_0073b1b4 = 0;
  DAT_0073b1b8 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b1dd,&DAT_0073b1c4,0);
  DAT_0073b1c0 = 0;
  DAT_0073b1bc = 0;
  return;
}


/* ==== 004b87b0 FUN_004b87b0 ==== */

void FUN_004b87b0(void)

{
  FUN_005584e0(&LAB_004b87c0);
  return;
}


/* ==== 004b8840 FUN_004b8840 ==== */

void FUN_004b8840(int param_1)

{
  if (param_1 == 0) {
    DAT_0073b20c = 0;
    return;
  }
  if (param_1 != 1) {
    FUN_004c4150(s__s__d____Unknown_texture_source_t_005b14c0,s_C__Work_DX3D_text_cpp_005b14ec,0x35,
                 param_1);
    return;
  }
  DAT_0073b20c = 1;
  return;
}


/* ==== 004b8880 FUN_004b8880 ==== */

void FUN_004b8880(int param_1)

{
  DAT_0073b208 = (uint)(param_1 != 0);
  return;
}


/* ==== 004b88a0 FUN_004b88a0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b88a0(float param_1)

{
  double local_8;
  
  if ((1.0 < param_1) && (param_1 <= 256.0)) {
    _DAT_005b1498 = param_1;
    return;
  }
  local_8 = (double)param_1;
  FUN_004c4150(s__s__d____illegal_texture_partion_005b1504,s_C__Work_DX3D_text_cpp_005b14ec,0x4a,
               local_8);
  _DAT_005b1498 = param_1;
  return;
}


/* ==== 004b8910 FUN_004b8910 ==== */

void FUN_004b8910(int *source)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = DAT_0073b208;
  DAT_0073b208 = 1;
  iVar2 = FUN_004b8e00(source,(int *)0xffffffff);
  if (iVar2 != 0) {
    FUN_004c4150(s__s__d____main_accummulator_textu_005b152c,s_C__Work_DX3D_text_cpp_005b14ec,0x58);
  }
  iVar2 = DAT_005b1ba8;
  if (DAT_0073b21c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0x5b,
                 &DAT_0073b224,DAT_0073b214,&DAT_0073b23d);
  }
  if ((iVar2 < 0) || (DAT_0073b214 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0x5b,
                 &DAT_0073b224,iVar2,DAT_0073b214);
  }
  if (*(char *)(DAT_0073b220 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0x5b,
                 &DAT_0073b224,iVar2);
  }
  iVar2 = *(int *)(DAT_0073b210 + iVar2 * 4);
  *(undefined4 *)(iVar2 + 0x60) = 0;
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s___material_inl_005b1050,0xc0,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if (DAT_0073b1b4 < 1) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___material_inl_005b1050,0xc0,
                 &DAT_0073b1c4,0,DAT_0073b1b4);
  }
  if (*DAT_0073b1c0 == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___material_inl_005b1050,0xc0,
                 &DAT_0073b1c4,0);
  }
  *(undefined4 *)(iVar2 + 0x48) = *DAT_0073b1b0;
  *(undefined4 *)(iVar2 + 0x58) = 1;
  if (*(int *)(iVar2 + 0x5c) == 1) {
    *(undefined4 *)(iVar2 + 0x58) = 0;
    (**(code **)(**(int **)(iVar2 + 0x54) + 0xc))(*(int **)(iVar2 + 0x54),iVar2);
  }
  if (DAT_0073b4cc != 1) {
    FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
  }
  if (DAT_0073b4ec != 0) {
    DAT_0073b4ec = 0;
    if (DAT_0073b1bc == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s___d3dev_inl_005b1060,0x121,
                   &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
    }
    if (DAT_0073b1b4 < 1) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___d3dev_inl_005b1060,0x121,
                   &DAT_0073b1c4,0,DAT_0073b1b4);
    }
    if (*DAT_0073b1c0 == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___d3dev_inl_005b1060,0x121,
                   &DAT_0073b1c4,0);
    }
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,1,*DAT_0073b1b0);
    if (iVar2 != 0) {
      uVar3 = FUN_004bb290(iVar2);
      FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,s___d3dev_inl_005b1060,0x122,uVar3);
    }
  }
  DAT_0073b208 = uVar1;
  return;
}


/* ==== 004b8b80 FUN_004b8b80 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8b80(uint size)

{
  FUN_004ba830(size);
  DAT_0073b1f8 = 0;
  DAT_0073b1fc = 0;
  _DAT_0073b200 = 1.0 / _DAT_005b1498;
  _DAT_0073b204 = 1.0 / _DAT_005b1498;
  return;
}


/* ==== 004b8bc0 FUN_004b8bc0 ==== */

undefined4 FUN_004b8bc0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int i;
  int iVar4;
  
  i = 0;
  if (DAT_0073b1b4 < 1) {
    return 0xffffffff;
  }
  iVar4 = 0;
  iVar3 = DAT_0073b1b4;
  do {
    if ((iVar4 < 0) || (iVar3 <= i)) {
      FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,s___array_hpp_005b1044,0x43,i,
                   &DAT_0073b1c4,iVar3,&DAT_0073b1dd);
      iVar3 = DAT_0073b1b4;
    }
    if (*(char *)(DAT_0073b1c0 + i) != '\0') {
      if (DAT_0073b1bc == 0) {
        FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x92,&DAT_0073b1c4,iVar3,&DAT_0073b1dd);
        iVar3 = DAT_0073b1b4;
      }
      if ((iVar4 < 0) || (iVar3 <= i)) {
        FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x92,&DAT_0073b1c4,i,iVar3);
        iVar3 = DAT_0073b1b4;
      }
      if (*(char *)(DAT_0073b1c0 + i) == '\0') {
        FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x92,&DAT_0073b1c4,i);
        iVar3 = DAT_0073b1b4;
      }
      if (*(int *)(iVar4 + 8 + DAT_0073b1b0) != 0) {
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,
                       0x93,&DAT_0073b1c4,iVar3,&DAT_0073b1dd);
          iVar3 = DAT_0073b1b4;
        }
        if ((iVar4 < 0) || (iVar3 <= i)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,
                       0x93,&DAT_0073b1c4,i,iVar3);
        }
        if (*(char *)(DAT_0073b1c0 + i) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,
                       0x93,&DAT_0073b1c4,i);
        }
        piVar1 = *(int **)(iVar4 + 8 + DAT_0073b1b0);
        iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1);
        iVar3 = DAT_0073b1b4;
        if (iVar2 != 0) {
          if (DAT_0073b1bc == 0) {
            FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,
                         s_C__Work_DX3D_text_cpp_005b14ec,0x94,&DAT_0073b1c4,DAT_0073b1b4,
                         &DAT_0073b1dd);
          }
          if ((iVar4 < 0) || (DAT_0073b1b4 <= i)) {
            FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,
                         s_C__Work_DX3D_text_cpp_005b14ec,0x94,&DAT_0073b1c4,i,DAT_0073b1b4);
          }
          if (*(char *)(DAT_0073b1c0 + i) == '\0') {
            FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,
                         s_C__Work_DX3D_text_cpp_005b14ec,0x94,&DAT_0073b1c4,i);
          }
          piVar1 = *(int **)(iVar4 + 8 + DAT_0073b1b0);
          (**(code **)(*piVar1 + 0x6c))(piVar1);
          FUN_004ba4c0(i);
          iVar3 = DAT_0073b1b4;
        }
      }
    }
    i = i + 1;
    iVar4 = iVar4 + 0x48;
  } while (i < iVar3);
  return 0xffffffff;
}


/* ==== 004b8e00 FUN_004b8e00 ==== */

int FUN_004b8e00(int *source,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b9120();
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xa2,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xa2,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xa2,
                 &DAT_0073b1c4,iVar1);
  }
  iVar2 = iVar1 * 0x48;
  FUN_004b9b40(source,(int *)0x0,param_2);
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xa3,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xa3,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xa3,
                 &DAT_0073b1c4,iVar1);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x34 + iVar2) = 0;
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xa4,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xa4,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xa4,
                 &DAT_0073b1c4,iVar1);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x38 + iVar2) = 0;
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xa5,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xa5,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xa5,
                 &DAT_0073b1c4,iVar1);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x3c + iVar2) = 0x3f800000;
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xa6,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xa6,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xa6,
                 &DAT_0073b1c4,iVar1);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x40 + iVar2) = 0x3f800000;
  iVar2 = FUN_004ba990(iVar1,s_C__Work_DX3D_text_cpp_005b14ec,0xa7);
  *(undefined4 *)(iVar2 + 0x44) = 0;
  return iVar1;
}


/* ==== 004b9120 FUN_004b9120 ==== */

int FUN_004b9120(void)

{
  int i;
  
  i = DAT_0073b1b8;
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
    i = DAT_0073b1b8;
  }
  for (; i < DAT_0073b1b4; i = i + 1) {
    if (*(char *)(DAT_0073b1c0 + i) == '\0') goto LAB_004b91ac;
  }
  i = 0;
  if (0 < DAT_0073b1b8) {
    do {
      if (*(char *)(DAT_0073b1c0 + i) == '\0') {
LAB_004b91ac:
        *(undefined1 *)(DAT_0073b1c0 + i) = 1;
        DAT_0073b1b8 = i;
        return i;
      }
      i = i + 1;
    } while (i < DAT_0073b1b8);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,&DAT_0073b1c4
               ,DAT_0073b1b4,&DAT_0073b1dd);
  return -1;
}


/* ==== 004b91c0 FUN_004b91c0 ==== */

int FUN_004b91c0(int *source,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b9120();
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xb2,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xb2,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xb2,
                 &DAT_0073b1c4,iVar1);
  }
  iVar2 = iVar1 * 0x48;
  FUN_004b9b40(source,(int *)0x4,param_2);
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xb3,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xb3,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xb3,
                 &DAT_0073b1c4,iVar1);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x34 + iVar2) = 0;
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xb4,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xb4,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xb4,
                 &DAT_0073b1c4,iVar1);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x38 + iVar2) = 0;
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xb5,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xb5,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xb5,
                 &DAT_0073b1c4,iVar1);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x3c + iVar2) = 0x3f800000;
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xb6,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xb6,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xb6,
                 &DAT_0073b1c4,iVar1);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x40 + iVar2) = 0x3f800000;
  iVar2 = FUN_004ba990(iVar1,s_C__Work_DX3D_text_cpp_005b14ec,0xb7);
  *(undefined4 *)(iVar2 + 0x44) = 0;
  return iVar1;
}


/* ==== 004b94e0 FUN_004b94e0 ==== */

int FUN_004b94e0(char *source)

{
  int iVar1;
  
  iVar1 = FUN_004b9120();
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xc0,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xc0,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xc0,
                 &DAT_0073b1c4,iVar1);
  }
  FUN_004b9fa0(source,0);
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,0xc1,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,0xc1,
                 &DAT_0073b1c4,iVar1,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,0xc1,
                 &DAT_0073b1c4,iVar1);
    *(undefined4 *)(iVar1 * 0x48 + 0x44 + DAT_0073b1b0) = 1;
    return iVar1;
  }
  *(undefined4 *)(iVar1 * 0x48 + 0x44 + DAT_0073b1b0) = 1;
  return iVar1;
}


/* ==== 004b9640 FUN_004b9640 ==== */

void FUN_004b9640(void)

{
  undefined4 *in_ECX;
  
  FUN_004c1ab0();
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  return;
}


/* ==== 004b9670 FUN_004b9670 ==== */

void FUN_004b9670(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056f64b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004ba460();
  local_4 = 0xffffffff;
  FUN_004c1ac0();
  ExceptionList = local_c;
  return;
}


/* ==== 004b96c0 FUN_004b96c0 ==== */

undefined4 FUN_004b96c0(char *source,uint *param_2,uint *param_3,FILE *file_2,undefined4 *param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint i;
  int j;
  uint k;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uStack_84;
  char local_80 [15];
  undefined1 local_71;
  
  _strncpy(local_80,source,0xe);
  local_71 = 0;
  puVar2 = (undefined1 *)FUN_00558f30(local_80,s___005b159c);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  if (DAT_0073b20c == 0) {
    i = 0xffffffff;
    pcVar4 = s__pcx_005b158c;
    do {
      pcVar6 = pcVar4;
      if (i == 0) break;
      i = i - 1;
      pcVar6 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar6;
    } while (cVar1 != '\0');
    i = ~i;
    j = -1;
    pcVar4 = local_80;
    do {
      pcVar5 = pcVar4;
      if (j == 0) break;
      j = j + -1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    pcVar4 = pcVar6 + -i;
    pcVar6 = pcVar5 + -1;
    for (k = i >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (i = i & 3; i != 0; i = i - 1) {
      *pcVar6 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar3 = FUN_004cb630(local_80,(int *)param_2,(int *)param_3,file_2,param_5);
    return uVar3;
  }
  if (DAT_0073b20c != 1) {
    FUN_004c4150(s__s__d____Unknown_texture_source_t_005b14c0,s_C__Work_DX3D_text_cpp_005b14ec,0x116
                 ,DAT_0073b20c);
    return uStack_84;
  }
  i = 0xffffffff;
  pcVar4 = &DAT_005b1594;
  do {
    pcVar6 = pcVar4;
    if (i == 0) break;
    i = i - 1;
    pcVar6 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar6;
  } while (cVar1 != '\0');
  i = ~i;
  j = -1;
  pcVar4 = local_80;
  do {
    pcVar5 = pcVar4;
    if (j == 0) break;
    j = j + -1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  pcVar4 = pcVar6 + -i;
  pcVar6 = pcVar5 + -1;
  for (k = i >> 2; k != 0; k = k - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar6 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = FUN_004c00b0(local_80,param_2,param_3,file_2,param_5);
  return uVar3;
}


/* ==== 004b9800 FUN_004b9800 ==== */

int FUN_004b9800(int param_1,int param_2,int param_3)

{
  int i;
  
  i = 0;
  if (param_1 == (param_2 >> 1) + param_2) {
    for (; param_2 != DAT_0073b4f4; param_2 = param_2 >> 1) {
      if (param_2 <= param_3) {
        i = i + 1;
      }
    }
    return i;
  }
  return i;
}


/* ==== 004b9840 FUN_004b9840 ==== */

void FUN_004b9840(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_2) {
    iVar2 = 0;
    iVar1 = param_2;
    while (iVar1 = iVar1 >> 1, iVar1 != param_3) {
      iVar2 = iVar2 + iVar1;
    }
    *param_4 = param_2;
    param_4[1] = iVar2;
    param_4[2] = param_2 + iVar1;
    param_4[3] = iVar2 + iVar1;
    return;
  }
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = param_2;
  param_4[2] = param_2;
  return;
}


/* ==== 004b9890 FUN_004b9890 ==== */

void FUN_004b9890(code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_EDI;
  int iVar5;
  code *pcStack_24;
  int local_10;
  undefined4 local_c;
  int local_8;
  int *local_4;
  
  pcStack_24 = (code *)&local_10;
  FUN_004b9840(param_3,param_4,param_5);
  FUN_004c3fa0(s_Location_of_texture__d__d__d__d_005b16f4,local_10,local_c,local_8,local_4);
  iVar1 = FUN_004b9800(param_3,param_4,param_5);
  FUN_004c3fa0(s_Number_of_mipmap_levels_in_this_t_005b16c8,iVar1);
  if ((DAT_0073b4f8 == '\0') || (iVar1 == 0)) {
    pcVar4 = (code *)(local_8 - local_10);
    pcStack_24 = pcVar4;
    FUN_004c3fa0(s_To_load_dimension__d_005b166c);
    uVar2 = FUN_004c2a50();
    piVar3 = (int *)FUN_004c4b90(pcVar4,pcVar4,0x1800,uVar2);
    uVar2 = FUN_004c2a50();
    uVar2 = FUN_004c4b90(pcVar4,pcVar4,0x1800,uVar2);
    *(undefined4 *)param_1 = uVar2;
    FUN_004c3fa0(s_Now_blit_the_data_into_the_temp_t_005b1640);
    pcStack_24 = (code *)0x0;
    iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3,0,param_2,&local_10,0x1000000);
    if (iVar1 != 0) {
      FUN_004c4150(s___s___d_Could_not_blit_texture_t_005b1610,s_C__Work_DX3D_text_cpp_005b14ec,
                   0x1ba);
    }
    FUN_004c3fa0(s_And_blit_the_texture_to_the_real_005b15e4);
    iVar1 = (**(code **)(**(int **)param_1 + 0x14))(*(int **)param_1,0,piVar3,0,0x1000000,0);
    if (iVar1 != 0) {
      FUN_004c4150(s___s___d_Could_not_blit_texture_f_005b15a0,s_C__Work_DX3D_text_cpp_005b14ec,
                   0x1c3);
    }
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  else {
    iVar5 = local_8 - local_10;
    pcVar4 = (code *)(iVar1 + 1);
    pcStack_24 = pcVar4;
    uVar2 = FUN_004c2a50();
    uVar2 = FUN_004c4c30(iVar5,iVar5,0x1800,uVar2);
    *(undefined4 *)param_1 = uVar2;
    param_1 = pcVar4;
    if (0 < (int)pcVar4) {
      do {
        pcStack_24 = (code *)&local_10;
        FUN_004b9840(param_3,param_4,iVar5);
        uVar2 = FUN_004c2a50();
        piVar3 = (int *)FUN_004c4b90(iVar5,iVar5,0x1800,uVar2);
        pcStack_24 = (code *)0x0;
        iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3,0,param_2,&local_10,0x1000000);
        if (iVar1 != 0) {
          uVar2 = FUN_004bb290(iVar1);
          FUN_004c4150(s___s___d_Could_not_blit_texture_t_005b1684,s_C__Work_DX3D_text_cpp_005b14ec,
                       0x1dc,uVar2);
        }
        (**(code **)(*local_4 + 0x14))(local_4,0,piVar3,0,0x1000000,0);
        (**(code **)(*piVar3 + 8))(piVar3);
        pcStack_24 = FUN_00401000;
        (**(code **)(*unaff_EDI + 0x30))(unaff_EDI,&pcStack_24,&stack0xffffffe0);
        iVar5 = iVar5 >> 1;
        param_1 = param_1 + -1;
      } while (param_1 != (code *)0x0);
      return;
    }
  }
  return;
}


/* ==== 004b9ab0 FUN_004b9ab0 ==== */

void FUN_004b9ab0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_10 [2];
  int local_8;
  
  iVar1 = FUN_004b9800(param_2,param_3,param_4);
  if ((DAT_0073b4f8 != '\0') && (iVar1 != 0)) {
    uVar2 = FUN_004c2a50(iVar1 + 1);
    uVar2 = FUN_004c4c30(param_4,param_4,0x4005000,uVar2);
    *param_1 = uVar2;
    return;
  }
  FUN_004b9840(param_2,param_3,param_4,local_10);
  uVar2 = FUN_004c2a50();
  uVar2 = FUN_004c4b90(local_8 - local_10[0],local_8 - local_10[0],0x4005000,uVar2);
  *param_1 = uVar2;
  return;
}


/* ==== 004b9b40 FUN_004b9b40 ==== */

undefined4 FUN_004b9b40(int *source,int *param_2,int *param_3)

{
  int **ppiVar1;
  undefined4 *puVar2;
  int *piVar3;
  int **ppiVar4;
  int **in_ECX;
  int i;
  int unaff_EBX;
  int **unaff_ESI;
  int *unaff_EDI;
  int ***pppiVar5;
  undefined4 *puVar6;
  undefined4 auStackY_5c [2];
  int **ppiStack_40;
  int *piStack_3c;
  int **ppiStack_38;
  int **ppiStack_34;
  int *piStack_30;
  int *piStack_2c;
  int **ppiStack_28;
  int *piStack_24;
  int *local_10;
  int *local_c;
  int iStack_8;
  
  piStack_24 = param_3;
  ppiStack_28 = (int **)source;
  piStack_2c = (int *)s_Now_load_texture__s_with_dimensi_005b1ab8;
  piStack_30 = (int *)0x4b9b5d;
  FUN_004c3fa0();
  piStack_24 = source;
  ppiStack_28 = (int **)0x4b9b69;
  FUN_004c1ae0();
  piStack_24 = (int *)s_Loading_temp_texture_005b1aa0;
  in_ECX[0xb] = param_2;
  ppiStack_28 = (int **)0x4b9b7a;
  FUN_004c3fa0();
  ppiStack_28 = (int **)0x4b9b7f;
  puVar2 = (undefined4 *)FUN_004c2a50();
  pppiVar5 = &ppiStack_40;
  for (i = 8; i != 0; i = i + -1) {
    *pppiVar5 = (int **)*puVar2;
    puVar2 = puVar2 + 1;
    pppiVar5 = pppiVar5 + 1;
  }
  FUN_004c8690();
  puVar2 = (undefined4 *)FUN_004c2a50();
  auStackY_5c[1] = 0x4b9bad;
  piVar3 = (int *)FUN_004b96c0((char *)source,(uint *)&local_c,(uint *)&local_10,(FILE *)0x1800,
                               puVar2);
  auStackY_5c[1] = 0x4b9bb4;
  puVar2 = (undefined4 *)FUN_004c2a50();
  pppiVar5 = &ppiStack_40;
  for (i = 8; i != 0; i = i + -1) {
    *pppiVar5 = (int **)*puVar2;
    puVar2 = puVar2 + 1;
    pppiVar5 = pppiVar5 + 1;
  }
  FUN_004c8690();
  FUN_004c3fa0();
  FUN_004c3fa0();
  if ((param_3 == (int *)0xffffffff) || ((int)local_10 < (int)param_3)) {
    piStack_24 = param_3;
    ppiStack_28 = (int **)s_Illegal_dimension_specified__cor_005b1a20;
    piStack_2c = (int *)0x4b9c04;
    FUN_004c3fa0();
    param_3 = local_10;
  }
  if ((local_c == local_10) && (param_3 != local_c)) {
    piStack_24 = local_10;
    ppiStack_28 = (int **)local_c;
    piStack_30 = source;
    ppiStack_34 = (int **)0x24d;
    ppiStack_38 = (int **)s_C__Work_DX3D_text_cpp_005b14ec;
    piStack_3c = (int *)s___s___d_Could_not_load_texture___005b19bc;
    ppiStack_40 = (int **)0x4b9c35;
    piStack_2c = param_3;
    FUN_004c4150();
  }
  ppiStack_28 = (int **)s_Final_load_dimension__d_005b19a0;
  piStack_2c = (int *)0x4b9c43;
  piStack_24 = param_3;
  FUN_004c3fa0();
  if ((int)param_3 < DAT_0073b4f4) {
    ppiStack_28 = (int **)0x4b9c56;
    piStack_24 = piVar3;
    (**(code **)(*piVar3 + 8))();
    piStack_30 = (int *)0x257;
    ppiStack_34 = (int **)s_C__Work_DX3D_text_cpp_005b14ec;
    ppiStack_38 = (int **)s___s___d_Requested_texture_dimens_005b1950;
    piStack_3c = (int *)0x4b9c6c;
    piStack_2c = param_3;
    ppiStack_28 = (int **)param_3;
    FUN_004c4150();
  }
  piStack_24 = (int *)s_Now_creating_the_memory_texture_c_005b1928;
  in_ECX[9] = param_3;
  in_ECX[10] = param_3;
  ppiStack_28 = (int **)0x4b9c7f;
  FUN_004c3fa0();
  piStack_2c = local_10;
  ppiVar4 = in_ECX + 1;
  piStack_30 = local_c;
  piStack_3c = (int *)0x4b9c94;
  ppiStack_38 = ppiVar4;
  ppiStack_34 = (int **)piVar3;
  ppiStack_28 = (int **)param_3;
  FUN_004b9890();
  ppiStack_28 = (int **)0x4b9c9e;
  piStack_24 = piVar3;
  (**(code **)(*piVar3 + 8))();
  piStack_30 = *ppiVar4;
  ppiVar1 = in_ECX + 3;
  piStack_2c = (int *)&DAT_00578d10;
  ppiStack_34 = (int **)0x4b9cae;
  ppiStack_28 = ppiVar1;
  ppiStack_34 = (int **)(**(code **)*piStack_30)();
  if (ppiStack_34 != (int **)0x0) {
    ppiStack_38 = (int **)0x4b9cb8;
    ppiStack_38 = (int **)FUN_004bb290();
    piStack_3c = (int *)0x26b;
    ppiStack_40 = (int **)s_C__Work_DX3D_text_cpp_005b14ec;
    FUN_004c4150();
  }
  ppiStack_34 = (int **)0x4b9cda;
  i = FUN_004c1030();
  if ((i != 0) && (iStack_8 != 4)) {
    ppiStack_34 = (int **)s_Now_creating_the_video_texture_c_005b18c8;
    ppiStack_38 = (int **)0x4b9cef;
    FUN_004c3fa0();
    ppiStack_40 = unaff_ESI;
    piStack_3c = unaff_EDI;
    ppiStack_38 = (int **)param_3;
    FUN_004b9ab0();
  }
  ppiStack_34 = (int **)s_Now_do_the_default_3D_code_005b18ac;
  ppiStack_38 = (int **)0x4b9d10;
  FUN_004c3fa0();
  ppiStack_34 = (int **)0x4b9d1d;
  i = FUN_004c1030();
  if (i == 0) {
    ppiStack_34 = (int **)s________________NO_HAL____________005b184c;
    ppiStack_38 = (int **)0x4b9da3;
    FUN_004c3fa0();
    ppiStack_34 = (int **)*ppiVar4;
    in_ECX[2] = (int *)ppiStack_34;
    ppiStack_38 = (int **)0x4b9db1;
    (**(code **)((int)*ppiStack_34 + 4))();
    ppiStack_38 = (int **)0x4b9db6;
    i = FUN_004c2af0();
    if (i == 2) {
      ppiStack_38 = (int **)s_Setting_texture_palette_005b1830;
      piStack_3c = (int *)0x4b9dc5;
      FUN_004c3fa0();
      piStack_3c = *ppiVar4;
      ppiStack_38 = DAT_007409ec;
      ppiStack_40 = (int **)0x4b9dd7;
      ppiStack_40 = (int **)(**(code **)(*piStack_3c + 0x7c))();
      if (ppiStack_40 != (int **)0x0) {
        FUN_004bb290();
        FUN_004c4150();
      }
      ppiStack_40 = DAT_007409ec;
      ppiStack_38 = (int **)(**(code **)(*in_ECX[2] + 0x7c))();
      if (ppiStack_38 != (int **)0x0) {
        piStack_3c = (int *)0x4b9e13;
        piStack_3c = (int *)FUN_004bb290();
        ppiStack_40 = (int **)0x2a3;
        FUN_004c4150();
      }
    }
    ppiStack_40 = (int **)in_ECX[2];
    ppiStack_38 = in_ECX + 4;
    piStack_3c = (int *)&DAT_00578d10;
    ppiStack_34 = (int **)(*(code *)**ppiStack_40)();
    if (ppiStack_34 != (int **)0x0) {
      ppiStack_38 = (int **)0x4b9e46;
      ppiStack_38 = (int **)FUN_004bb290();
      piStack_3c = (int *)0x2aa;
      ppiStack_40 = (int **)s_C__Work_DX3D_text_cpp_005b14ec;
      FUN_004c4150();
    }
  }
  else if (iStack_8 != 4) {
    piStack_3c = in_ECX[2];
    ppiStack_38 = (int **)&DAT_00578d10;
    ppiStack_40 = (int **)0x4b9d3d;
    ppiStack_34 = in_ECX + 4;
    ppiStack_40 = (int **)(**(code **)*piStack_3c)();
    if (ppiStack_40 != (int **)0x0) {
      FUN_004bb290();
      FUN_004c4150();
    }
    ppiStack_40 = (int **)*ppiVar1;
    ppiStack_34 = (int **)(**(code **)(*in_ECX[4] + 0x14))();
    if (ppiStack_34 != (int **)0x0) {
      ppiStack_38 = (int **)0x4b9d75;
      ppiStack_38 = (int **)FUN_004bb290();
      piStack_3c = (int *)0x28b;
      ppiStack_40 = (int **)s_C__Work_DX3D_text_cpp_005b14ec;
      FUN_004c4150();
    }
    in_ECX[0xc] = (int *)0x1;
  }
  ppiStack_34 = (int **)&stack0xffffffe8;
  ppiStack_38 = (int **)0x4b9e68;
  FUN_004ba810();
  piStack_3c = *ppiVar4;
  ppiStack_34 = (int **)&stack0xffffffe8;
  ppiStack_38 = (int **)0x8;
  ppiStack_40 = (int **)0x4b9e7a;
  ppiStack_40 = (int **)(**(code **)(*piStack_3c + 0x74))();
  if (ppiStack_40 != (int **)0x0) {
    FUN_004c4400();
    FUN_004c4150();
  }
  if (unaff_EBX != 4) {
    ppiStack_40 = &piStack_24;
    ppiStack_40 = (int **)(**(code **)(*in_ECX[2] + 0x74))();
    if (ppiStack_40 != (int **)0x0) {
      FUN_004c4400();
      FUN_004c4150();
    }
  }
  ppiStack_40 = (int **)0x4b9ee1;
  i = FUN_004c1030();
  if (i == 0) {
    ppiStack_40 = in_ECX;
    ppiVar4 = (int **)(**(code **)(**ppiVar1 + 0xc))();
    if (ppiVar4 == (int **)0x0) goto LAB_004b9f7b;
    ppiStack_40 = ppiVar4;
    FUN_004bb290();
  }
  else {
    if (unaff_EBX == 4) goto LAB_004b9f7b;
    ppiStack_40 = in_ECX;
    ppiVar4 = (int **)(**(code **)(*in_ECX[4] + 0xc))();
    if (ppiVar4 == (int **)0x0) goto LAB_004b9f7b;
    if (ppiVar4 == (int **)0x887602e2) {
      ppiStack_40 = (int **)in_ECX[4];
      (*(code *)(*ppiStack_40)[2])();
      ppiStack_40 = (int **)0x4b9f2b;
      i = FUN_004c1030();
      if (i != 0) {
        ppiStack_40 = (int **)0x2c7;
        FUN_004c4150();
      }
      goto LAB_004b9f7b;
    }
    ppiStack_40 = ppiVar4;
    FUN_004bb290();
  }
  FUN_004c4150();
LAB_004b9f7b:
  puVar2 = &DAT_00740968;
  puVar6 = auStackY_5c;
  for (i = 8; i != 0; i = i + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_004c8690();
  return 0;
}


/* ==== 004b9fa0 FUN_004b9fa0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b9fa0(char *source,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int i;
  undefined *puVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  undefined4 auStackY_74 [2];
  int *apiStack_58 [2];
  char *pcStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  undefined4 *puStack_44;
  int *piStack_40;
  char *pcStack_3c;
  uint local_28;
  uint local_24;
  undefined4 __ftol_result_2;
  undefined4 __ftol_result;
  int *__ftol_result_4;
  undefined4 __ftol_result_3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pcStack_3c = source;
  piStack_40 = (int *)0x4b9fb6;
  FUN_004c1ae0();
  *(undefined4 *)(in_ECX + 0x2c) = param_2;
  pcStack_3c = (char *)0x4b9fc2;
  puVar1 = (undefined4 *)FUN_004c2a50();
  ppiVar4 = apiStack_58;
  for (i = 8; i != 0; i = i + -1) {
    *ppiVar4 = (int *)*puVar1;
    puVar1 = puVar1 + 1;
    ppiVar4 = ppiVar4 + 1;
  }
  FUN_004c8690();
  puVar1 = (undefined4 *)FUN_004c2a50();
  auStackY_74[1] = 0x4b9ff0;
  uVar2 = FUN_004b96c0(source,&local_28,&local_24,(FILE *)0x1800,puVar1);
  *(undefined4 *)(in_ECX + 4) = uVar2;
  auStackY_74[1] = 0x4b9ff8;
  puVar1 = (undefined4 *)FUN_004c2a50();
  ppiVar4 = apiStack_58;
  for (i = 8; i != 0; i = i + -1) {
    *ppiVar4 = (int *)*puVar1;
    puVar1 = puVar1 + 1;
    ppiVar4 = ppiVar4 + 1;
  }
  FUN_004c8690();
  *(uint *)(in_ECX + 0x24) = local_28;
  *(uint *)(in_ECX + 0x28) = local_24;
  *(float *)(in_ECX + 0x34) = DAT_0073b1f8;
  *(float *)(in_ECX + 0x3c) = _DAT_0073b200 + DAT_0073b1f8;
  *(float *)(in_ECX + 0x38) = DAT_0073b1fc;
  *(float *)(in_ECX + 0x40) = _DAT_0073b204 + DAT_0073b1fc;
  if (DAT_0073b1bc == 0) {
    pcStack_3c = &DAT_0073b1dd;
    piStack_40 = (int *)DAT_0073b1b4;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x306;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
    apiStack_58[1] = (int *)0x4ba07a;
    FUN_004c4150();
  }
  if ((int)DAT_0073b1b4 < 1) {
    pcStack_3c = DAT_0073b1b4;
    piStack_40 = (int *)0x0;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x306;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____out_of_boundaries__s__d_005b0fc8;
    apiStack_58[1] = (int *)0x4ba0a2;
    FUN_004c4150();
  }
  if (*DAT_0073b1c0 == '\0') {
    pcStack_3c = (char *)0x0;
    piStack_40 = (int *)&DAT_0073b1c4;
    puStack_44 = (undefined4 *)0x306;
    pcStack_48 = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_4c = s__s__d____array_element_not_regis_005b0f98;
    pcStack_50 = (char *)0x4ba0cf;
    FUN_004c4150();
  }
  puVar3 = DAT_0073b1b4;
  pcStack_3c = (char *)0x4ba0e8;
  __ftol_result_2 = __ftol();
  pcStack_3c = puVar3;
  if (DAT_0073b1bc == 0) {
    pcStack_3c = &DAT_0073b1dd;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x307;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
    apiStack_58[1] = (int *)0x4ba114;
    piStack_40 = (int *)puVar3;
    FUN_004c4150();
    pcStack_3c = DAT_0073b1b4;
  }
  if ((int)pcStack_3c < 1) {
    piStack_40 = (int *)0x0;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x307;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____out_of_boundaries__s__d_005b0fc8;
    apiStack_58[1] = (int *)0x4ba13c;
    FUN_004c4150();
    pcStack_3c = DAT_0073b1b4;
  }
  puVar3 = pcStack_3c;
  if (*DAT_0073b1c0 == '\0') {
    pcStack_3c = (char *)0x0;
    piStack_40 = (int *)&DAT_0073b1c4;
    puStack_44 = (undefined4 *)0x307;
    pcStack_48 = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_4c = s__s__d____array_element_not_regis_005b0f98;
    pcStack_50 = (char *)0x4ba169;
    FUN_004c4150();
    puVar3 = DAT_0073b1b4;
  }
  pcStack_3c = (char *)0x4ba183;
  __ftol_result_4 = (int *)__ftol();
  pcStack_3c = puVar3;
  if (DAT_0073b1bc == 0) {
    pcStack_3c = &DAT_0073b1dd;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x308;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
    apiStack_58[1] = (int *)0x4ba1af;
    piStack_40 = (int *)puVar3;
    FUN_004c4150();
    pcStack_3c = DAT_0073b1b4;
  }
  if ((int)pcStack_3c < 1) {
    piStack_40 = (int *)0x0;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x308;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____out_of_boundaries__s__d_005b0fc8;
    apiStack_58[1] = (int *)0x4ba1d7;
    FUN_004c4150();
    pcStack_3c = DAT_0073b1b4;
  }
  puVar3 = pcStack_3c;
  if (*DAT_0073b1c0 == '\0') {
    pcStack_3c = (char *)0x0;
    piStack_40 = (int *)&DAT_0073b1c4;
    puStack_44 = (undefined4 *)0x308;
    pcStack_48 = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_4c = s__s__d____array_element_not_regis_005b0f98;
    pcStack_50 = (char *)0x4ba203;
    FUN_004c4150();
    puVar3 = DAT_0073b1b4;
  }
  pcStack_3c = (char *)0x4ba21d;
  __ftol_result = __ftol();
  pcStack_3c = puVar3;
  if (DAT_0073b1bc == 0) {
    pcStack_3c = &DAT_0073b1dd;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x309;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
    apiStack_58[1] = (int *)0x4ba249;
    piStack_40 = (int *)puVar3;
    FUN_004c4150();
    pcStack_3c = DAT_0073b1b4;
  }
  if ((int)pcStack_3c < 1) {
    piStack_40 = (int *)0x0;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x309;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____out_of_boundaries__s__d_005b0fc8;
    apiStack_58[1] = (int *)0x4ba271;
    FUN_004c4150();
  }
  if (*DAT_0073b1c0 == '\0') {
    pcStack_3c = (char *)0x0;
    piStack_40 = (int *)&DAT_0073b1c4;
    puStack_44 = (undefined4 *)0x309;
    pcStack_48 = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_4c = s__s__d____array_element_not_regis_005b0f98;
    pcStack_50 = (char *)0x4ba298;
    FUN_004c4150();
  }
  pcStack_3c = (char *)0x4ba2ab;
  pcStack_3c = (char *)__ftol();
  piStack_40 = __ftol_result_4;
  puStack_44 = (undefined4 *)__ftol_result;
  pcStack_48 = (char *)__ftol_result_2;
  pcStack_4c = s_dest__d__d___d__d_005b1b64;
  pcStack_50 = (char *)0x4ba2c9;
  __ftol_result_3 = pcStack_3c;
  FUN_004c3fa0();
  pcStack_50 = *(char **)(in_ECX + 0x28);
  apiStack_58[1] = *(int **)(in_ECX + 0x24);
  apiStack_58[0] = (int *)0x0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = apiStack_58[1];
  uStack_4 = pcStack_50;
  FUN_004c3fa0();
  if (DAT_0073b1bc == 0) {
    pcStack_3c = &DAT_0073b1dd;
    piStack_40 = (int *)DAT_0073b1b4;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x316;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
    apiStack_58[1] = (int *)0x4ba31e;
    FUN_004c4150();
  }
  if ((int)DAT_0073b1b4 < 1) {
    pcStack_3c = DAT_0073b1b4;
    piStack_40 = (int *)0x0;
    puStack_44 = (undefined4 *)&DAT_0073b1c4;
    pcStack_48 = (char *)0x316;
    pcStack_4c = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_50 = s__s__d____out_of_boundaries__s__d_005b0fc8;
    apiStack_58[1] = (int *)0x4ba345;
    FUN_004c4150();
  }
  if (*DAT_0073b1c0 == '\0') {
    pcStack_3c = (char *)0x0;
    piStack_40 = (int *)&DAT_0073b1c4;
    puStack_44 = (undefined4 *)0x316;
    pcStack_48 = s_C__Work_DX3D_text_cpp_005b14ec;
    pcStack_4c = s__s__d____array_element_not_regis_005b0f98;
    pcStack_50 = (char *)0x4ba36c;
    FUN_004c4150();
  }
  pcStack_3c = (char *)0x0;
  puStack_44 = &uStack_10;
  piStack_40 = (int *)0x1000000;
  pcStack_50 = *(char **)(DAT_0073b1b0 + 4);
  pcStack_48 = *(char **)(in_ECX + 4);
  pcStack_4c = (char *)&__ftol_result_2;
  apiStack_58[1] = (int *)0x4ba391;
  apiStack_58[1] = (int *)(**(code **)(*(int *)pcStack_50 + 0x14))();
  if (apiStack_58[1] != (int *)0x0) {
    apiStack_58[0] = (int *)0x4ba39b;
    apiStack_58[0] = (int *)FUN_004c4400();
    FUN_004c4150();
  }
  apiStack_58[1] = *(int **)(in_ECX + 4);
  apiStack_58[0] = (int *)0x4ba3bc;
  (**(code **)(*apiStack_58[1] + 8))();
  *(undefined4 *)(in_ECX + 4) = 0;
  DAT_0073b1f8 = _DAT_0073b200 + DAT_0073b1f8;
  if (1.0 <= DAT_0073b1f8) {
    DAT_0073b1fc = _DAT_0073b204 + DAT_0073b1fc;
    if (1.0 <= DAT_0073b1fc) {
      apiStack_58[0] = __ftol_result_4;
      FUN_004c4150();
    }
    DAT_0073b1f8 = 0.0;
  }
  puVar1 = &DAT_00740968;
  puVar5 = auStackY_74;
  for (i = 8; i != 0; i = i + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004c8690();
  apiStack_58[0] = (int *)0x4ba446;
  i = FUN_004c1030();
  if (i != 0) {
    apiStack_58[0] = (int *)0x0;
    FUN_004ba4c0();
  }
  return 0;
}


/* ==== 004ba460 FUN_004ba460 ==== */

void FUN_004ba460(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  piVar1 = *(int **)(in_ECX + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  return;
}


/* ==== 004ba4c0 FUN_004ba4c0 ==== */

void FUN_004ba4c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 < 0) || (DAT_0073b1b4 < param_1)) {
    FUN_004c4150(s__s__d____Illegal_texturenumber___005b1b78,s_C__Work_DX3D_text_cpp_005b14ec,0x372,
                 param_1);
  }
  iVar2 = FUN_004c1030();
  if (iVar2 != 0) {
    if (DAT_0073b1bc == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,
                   0x378,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
    }
    if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,
                   0x378,&DAT_0073b1c4,param_1,DAT_0073b1b4);
    }
    if (DAT_0073b1c0[param_1] == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,
                   0x378,&DAT_0073b1c4,param_1);
    }
    iVar2 = param_1 * 0x48;
    if (*(int *)(iVar2 + 0x44 + DAT_0073b1b0) == 1) {
      if (DAT_0073b1bc == 0) {
        FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x379,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
      }
      if (DAT_0073b1b4 < 1) {
        FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x379,&DAT_0073b1c4,0,DAT_0073b1b4);
      }
      if (*DAT_0073b1c0 == '\0') {
        FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x379,&DAT_0073b1c4,0);
      }
      if (DAT_0073b1bc == 0) {
        FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x379,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
      }
      if (DAT_0073b1b4 < 1) {
        FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x379,&DAT_0073b1c4,0,DAT_0073b1b4);
      }
      if (*DAT_0073b1c0 == '\0') {
        FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x379,&DAT_0073b1c4,0);
      }
      iVar2 = (**(code **)(**(int **)(DAT_0073b1b0 + 0x10) + 0x14))
                        (*(int **)(DAT_0073b1b0 + 0x10),*(undefined4 *)(DAT_0073b1b0 + 0xc));
      if (iVar2 == 0) {
        return;
      }
      uVar3 = FUN_004bb290(iVar2);
      uVar4 = 0x37a;
    }
    else {
      if (DAT_0073b1bc == 0) {
        FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x37d,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
      }
      if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
        FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x37d,&DAT_0073b1c4,param_1,DAT_0073b1b4);
      }
      if (DAT_0073b1c0[param_1] == '\0') {
        FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x37d,&DAT_0073b1c4,param_1);
      }
      if (DAT_0073b1bc == 0) {
        FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x37d,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
      }
      if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
        FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x37d,&DAT_0073b1c4,param_1,DAT_0073b1b4);
      }
      if (DAT_0073b1c0[param_1] == '\0') {
        FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_C__Work_DX3D_text_cpp_005b14ec,
                     0x37d,&DAT_0073b1c4,param_1);
      }
      piVar1 = *(int **)(iVar2 + 0x10 + DAT_0073b1b0);
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,*(undefined4 *)(iVar2 + 0xc + DAT_0073b1b0));
      if (iVar2 == 0) {
        return;
      }
      uVar3 = FUN_004bb290(iVar2);
      uVar4 = 0x37e;
    }
    FUN_004c4150(s__s__d____D3DError_get_texturehan_005b1718,s_C__Work_DX3D_text_cpp_005b14ec,uVar4,
                 uVar3);
  }
  return;
}


/* ==== 004ba810 FUN_004ba810 ==== */

void FUN_004ba810(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004c81b0(DAT_005b149c,8);
  param_1[1] = uVar1;
  *param_1 = uVar1;
  return;
}


