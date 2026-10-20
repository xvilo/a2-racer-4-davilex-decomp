/* spel.dat — dx3d/Material.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ba830 FUN_004ba830 ==== */

void FUN_004ba830(uint size)

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
  puStack_8 = &LAB_0056f66b;
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
        FUN_005586c5(iVar1,0x48,*(undefined4 *)(iVar1 + -4),FUN_004b9670);
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
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 (int)in_ECX + 0x2d,in_ECX + 5,size);
  }
  operator_new_result = operator_new(size * 0x48 + 4);
  uStack_4 = 0;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0x48,size,FUN_004b9640,FUN_004b9670);
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


/* ==== 004ba990 FUN_004ba990 ==== */

int FUN_004ba990(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *in_ECX;
  
  if (in_ECX[3] == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,param_2,param_3,in_ECX + 5,in_ECX[1],
                 (int)in_ECX + 0x2d);
  }
  if ((param_1 < 0) || (in_ECX[1] <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,param_2,param_3,in_ECX + 5,param_1,
                 in_ECX[1]);
  }
  if (*(char *)(in_ECX[4] + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,param_2,param_3,in_ECX + 5,param_1);
  }
  return *in_ECX + param_1 * 0x48;
}


/* ==== 004baa30 FUN_004baa30 ==== */

void FUN_004baa30(void)

{
  DAT_0073b21c = 0;
  _strncpy(&DAT_0073b224,s_material_ptr_005b1bbc,0x19);
  _strncpy(&DAT_0073b23d,s_material_t_005b1bb0,0x19);
  if (DAT_0073b21c != 0) {
    if (DAT_0073b21c == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b23d,&DAT_0073b224,
                   DAT_0073b214);
      FUN_0054b339(DAT_0073b210);
    }
    if (DAT_0073b21c != 0) {
      FUN_0054b339(DAT_0073b220);
      DAT_0073b21c = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b210 = 0;
  DAT_0073b214 = 0;
  DAT_0073b218 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b23d,&DAT_0073b224,0);
  DAT_0073b220 = 0;
  DAT_0073b21c = 0;
  return;
}


/* ==== 004bab00 FUN_004bab00 ==== */

void FUN_004bab00(void)

{
  FUN_005584e0(&LAB_004bab10);
  return;
}


/* ==== 004bab70 FUN_004bab70 ==== */

void FUN_004bab70(uint size)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_0073b21c != 0) {
    if (DAT_0073b21c == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b23d,&DAT_0073b224,
                   DAT_0073b214);
      FUN_0054b339(DAT_0073b210);
    }
    if (DAT_0073b21c != 0) {
      FUN_0054b339(DAT_0073b220);
      DAT_0073b21c = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                 &DAT_0073b23d,&DAT_0073b224,size);
  }
  DAT_0073b210 = operator_new(size * 4);
  DAT_0073b214 = size;
  DAT_0073b218 = 0;
  DAT_0073b220 = operator_new(size);
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,&DAT_0073b23d,&DAT_0073b224,DAT_0073b214)
  ;
  DAT_0073b21c = 1;
  iVar2 = 0;
  if (0 < (int)size) {
    do {
      iVar1 = iVar2 + 1;
      *(undefined1 *)((int)DAT_0073b220 + iVar2) = 0;
      iVar2 = iVar1;
    } while (iVar1 < (int)size);
  }
  DAT_005b1ba8 = FUN_004baf10();
  DAT_005b1bac = FUN_004baf10();
  iVar2 = DAT_005b1ba8;
  if (DAT_0073b21c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x18,&DAT_0073b224,DAT_0073b214,&DAT_0073b23d);
  }
  if ((iVar2 < 0) || ((int)DAT_0073b214 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x18,&DAT_0073b224,iVar2,DAT_0073b214);
  }
  if (*(char *)((int)DAT_0073b220 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x18,&DAT_0073b224,iVar2);
  }
  iVar2 = DAT_005b1ba8;
  if (DAT_0073b4cc != 1) {
    FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
  }
  if (DAT_0073b50d != iVar2) {
    DAT_0073b50d = iVar2;
    if (DAT_0073b21c == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s___d3dev_inl_005b1060,0x1a2,
                   &DAT_0073b224,DAT_0073b214,&DAT_0073b23d);
    }
    if ((iVar2 < 0) || ((int)DAT_0073b214 <= iVar2)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___d3dev_inl_005b1060,0x1a2,
                   &DAT_0073b224,iVar2,DAT_0073b214);
    }
    if (*(char *)((int)DAT_0073b220 + iVar2) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___d3dev_inl_005b1060,0x1a2,
                   &DAT_0073b224,iVar2);
    }
    iVar2 = (**(code **)(*DAT_0073b4b4 + 100))
                      (DAT_0073b4b4,1,
                       *(undefined4 *)(*(int *)((int)DAT_0073b210 + iVar2 * 4) + 0x50));
    if (iVar2 != 0) {
      uVar3 = FUN_004bb290(iVar2);
      FUN_004c4150(s__s__d_____MATERIAL__error_settin_005b1bcc,s___d3dev_inl_005b1060,0x1a3,uVar3);
    }
  }
  return;
}


/* ==== 004bae10 FUN_004bae10 ==== */

void FUN_004bae10(void)

{
  if (DAT_0073b21c == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b23d,&DAT_0073b224,
                 DAT_0073b214);
    FUN_0054b339(DAT_0073b210);
  }
  if (DAT_0073b21c != 0) {
    FUN_0054b339(DAT_0073b220);
    DAT_0073b21c = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


/* ==== 004bae70 FUN_004bae70 ==== */

int FUN_004bae70(void)

{
  int i;
  
  i = DAT_0073b218;
  if (DAT_0073b21c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 &DAT_0073b224,DAT_0073b214,&DAT_0073b23d);
    i = DAT_0073b218;
  }
  for (; i < DAT_0073b214; i = i + 1) {
    if (*(char *)(DAT_0073b220 + i) == '\0') goto LAB_004baefc;
  }
  i = 0;
  if (0 < DAT_0073b218) {
    do {
      if (*(char *)(DAT_0073b220 + i) == '\0') {
LAB_004baefc:
        *(undefined1 *)(DAT_0073b220 + i) = 1;
        DAT_0073b218 = i;
        return i;
      }
      i = i + 1;
    } while (i < DAT_0073b218);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,&DAT_0073b224
               ,DAT_0073b214,&DAT_0073b23d);
  return -1;
}


/* ==== 004baf10 FUN_004baf10 ==== */

int FUN_004baf10(void)

{
  int iVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f68b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004bae70();
  operator_new_result = operator_new(0x68);
  local_4 = 0;
  if (operator_new_result == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004bb190();
  }
  local_4 = 0xffffffff;
  if (DAT_0073b21c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x6e,&DAT_0073b224,DAT_0073b214,&DAT_0073b23d);
  }
  if ((iVar2 < 0) || (DAT_0073b214 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x6e,&DAT_0073b224,iVar2,DAT_0073b214);
  }
  if (*(char *)(DAT_0073b220 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x6e,&DAT_0073b224,iVar2);
  }
  *(undefined4 *)(DAT_0073b210 + iVar2 * 4) = uVar3;
  if (DAT_0073b21c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x6f,&DAT_0073b224,DAT_0073b214,&DAT_0073b23d);
  }
  if ((iVar2 < 0) || (DAT_0073b214 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x6f,&DAT_0073b224,iVar2,DAT_0073b214);
  }
  if (*(char *)(DAT_0073b220 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x6f,&DAT_0073b224,iVar2);
  }
  iVar1 = *(int *)(DAT_0073b210 + iVar2 * 4);
  *(undefined4 *)(iVar1 + 0x14) = DAT_0073b688;
  *(undefined4 *)(iVar1 + 0x18) = DAT_0073b68c;
  *(undefined4 *)(iVar1 + 0x1c) = DAT_0073b690;
  *(undefined4 *)(iVar1 + 0x58) = 1;
  if (*(int *)(iVar1 + 0x5c) == 1) {
    *(undefined4 *)(iVar1 + 0x58) = 0;
    (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
  }
  if (DAT_0073b21c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x70,&DAT_0073b224,DAT_0073b214,&DAT_0073b23d);
  }
  if ((iVar2 < 0) || (DAT_0073b214 <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x70,&DAT_0073b224,iVar2,DAT_0073b214);
  }
  if (*(char *)(DAT_0073b220 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x70,&DAT_0073b224,iVar2);
  }
  iVar1 = *(int *)(DAT_0073b210 + iVar2 * 4);
  *(undefined4 *)(iVar1 + 4) = DAT_0073b688;
  *(undefined4 *)(iVar1 + 8) = DAT_0073b68c;
  *(undefined4 *)(iVar1 + 0xc) = DAT_0073b690;
  *(undefined4 *)(iVar1 + 0x58) = 1;
  if (*(int *)(iVar1 + 0x5c) == 1) {
    *(undefined4 *)(iVar1 + 0x58) = 0;
    (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
  }
  piVar4 = (int *)FUN_004b6110(iVar2,s_D__Work_DX3D_Material_cpp_005b1c04,0x71);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x58) != 0) {
    *(undefined4 *)(iVar1 + 0x58) = 0;
    (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
  }
  ExceptionList = pvStack_c;
  return iVar2;
}


/* ==== 004bb190 FUN_004bb190 ==== */

void FUN_004bb190(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar3;
  
  puVar1 = in_ECX + 0x15;
  in_ECX[0x19] = 4;
  in_ECX[0x17] = 1;
  *puVar1 = 0;
  in_ECX[0x18] = 0xffffffff;
  in_ECX[0x16] = 0;
  puVar3 = in_ECX;
  for (i = 0x14; i != 0; i = i + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *in_ECX = 0x50;
  in_ECX[1] = 0x3f800000;
  in_ECX[2] = 0x3f800000;
  in_ECX[3] = 0x3f800000;
  in_ECX[5] = 0x3f800000;
  in_ECX[6] = 0x3f800000;
  in_ECX[7] = 0x3f800000;
  in_ECX[0x13] = 0x10;
  i = (**(code **)(*DAT_0073b778 + 0x14))(DAT_0073b778,puVar1,0);
  if (i != 0) {
    uVar2 = FUN_004bb290(i);
    FUN_004c4150(s__s__d____error_creating_material_005b1c74,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x9a,uVar2);
  }
  i = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1);
  if (i != 0) {
    uVar2 = FUN_004bb290(i);
    FUN_004c4150(s__s__d____error_setting_material___005b1c4c,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0x9d,uVar2);
  }
  i = (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,DAT_0073b4b4,in_ECX + 0x14);
  if (i != 0) {
    uVar2 = FUN_004bb290(i);
    FUN_004c4150(s__s__d____error_getting_material_h_005b1c20,s_D__Work_DX3D_Material_cpp_005b1c04,
                 0xa0,uVar2);
  }
  in_ECX[0x16] = 0;
  (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1);
  return;
}


/* ==== 004bb290 FUN_004bb290 ==== */

char * FUN_004bb290(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0x887602bc:
    return s_Bad_major_version_005b215c;
  case 0x887602bd:
    return s_Bad_minor_version_005b2148;
  default:
    pcVar1 = (char *)FUN_004c4400(param_1);
    return pcVar1;
  case 0x887602c1:
    return s_D3DERR_INVALID_DEVICE_005b1e28;
  case 0x887602c2:
    return s_D3DERR_INITFAILED_005b1e50;
  case 0x887602c3:
    return s_D3DERR_DEVICEAGGREGATED_005b1e64;
  case 0x887602c6:
    return s_create_execute_failed_005b2118;
  case 0x887602c7:
    return s_destroy_execute_failed_005b2100;
  case 0x887602c8:
    return s_execute_lock_failed_005b20dc;
  case 0x887602c9:
    return s_execute_unlock_failed_005b20a0;
  case 0x887602ca:
    return s_execute_locked_005b20cc;
  case 0x887602cb:
    return s_execute_not_locked_005b20b8;
  case 0x887602cc:
    return s_execute_failed_005b20f0;
  case 0x887602cd:
    return s_clipped_execute_failed_005b2130;
  case 0x887602d0:
    return s_No_texture_support_005b1ebc;
  case 0x887602d1:
    return s_Create_texture_failed_005b1f3c;
  case 0x887602d2:
    return s_Destroy_texture_failed_005b1f24;
  case 0x887602d3:
    return s_Texture_lock_failed_005b1ee0;
  case 0x887602d4:
    return s_Texture_unlock_failed_005b1e7c;
  case 0x887602d5:
    return s_Texture_load_failed_005b1ef4;
  case 0x887602d6:
    return s_Texture_swap_failed_005b1e94;
  case 0x887602d7:
    return s_Texture_locked_005b1ed0;
  case 0x887602d8:
    return s_Texture_not_locked_005b1ea8;
  case 0x887602d9:
    return s_Get_texture_surface_failed_005b1f08;
  case 0x887602da:
    return s_Matrix_create_failed_005b200c;
  case 0x887602db:
    return s_Matrix_destroy_failed_005b1ff4;
  case 0x887602dc:
    return s_Matrix_set_data_failed_005b1fc4;
  case 0x887602dd:
    return s_Matrix_get_data_failed_005b1fdc;
  case 0x887602de:
    return s_Set_viewport_failed_005b1f54;
  case 0x887602df:
    return s_D3DERR_INVALIDCURRENTVIEWPORT_005b1e08;
  case 0x887602e0:
    return s_D3DERR_INVALIDPRIMITIVETYPE_005b1dd4;
  case 0x887602e1:
    return s_D3DERR_INVALIDVERTEXTYPE_005b1db8;
  case 0x887602e2:
    return s_D3DERR_TEXTURE_BADSIZE_005b1d24;
  case 0x887602e4:
    return s_Material_create_failed_005b2074;
  case 0x887602e5:
    return s_Material_destroy_failed_005b205c;
  case 0x887602e6:
    return s_Material_set_data_failed_005b2024;
  case 0x887602e7:
    return s_Material_get_data_failed_005b2040;
  case 0x887602e8:
    return s_D3DERR_INVALIDPALETTE_005b1df0;
  case 0x887602e9:
    return s_D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY_005b1ccc;
  case 0x887602ea:
    return s_D3DERR_ZBUFF_NEEDS_VIDEOMEMORY_005b1cac;
  case 0x887602eb:
    return s_D3DERR_SURFACENOTINVIDMEM_005b1d3c;
  case 0x887602ee:
    return s_Light_set_failed_005b208c;
  case 0x887602ef:
    return s_D3DERR_LIGHTHASVIEWPORT_005b1da0;
  case 0x887602f0:
    return s_D3DERR_LIGHTNOTINTHISVIEWPORT_005b1d80;
  case 0x887602f8:
    return s_Scene_in_scene_error_005b1f84;
  case 0x887602f9:
    return s_Scene_not_in_scene_error_005b1f68;
  case 0x887602fa:
    return s_Scene_begin_failed_005b1fb0;
  case 0x887602fb:
    return s_Scene_end_failed_005b1f9c;
  case 0x88760302:
    return s_D3DERR_INBEGIN_005b1e40;
  case 0x88760303:
    return s_D3DERR_NOTINBEGIN_005b1d6c;
  case 0x88760304:
    return s_D3DERR_NOVIEWPORTS_005b1d58;
  case 0x88760305:
    return s_D3DERR_VIEWPORTDATANOTSET_005b1d08;
  case 0x88760306:
    return s_D3DERR_VIEWPORTHASNODEVICE_005b1cec;
  }
}


