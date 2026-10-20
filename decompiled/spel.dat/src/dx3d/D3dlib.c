/* spel.dat — dx3d/D3dlib.cpp: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c0450 FUN_004c0450 ==== */

void FUN_004c0450(undefined4 param_1)

{
  DAT_0073b780 = param_1;
  return;
}


/* ==== 004c0460 FUN_004c0460 ==== */

void FUN_004c0460(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)*DAT_00740894)(DAT_00740894,&DAT_00578d50,&DAT_0073b778);
  if (iVar1 != 0) {
    uVar2 = FUN_004bb290(iVar1);
    FUN_004c4150(s__s__d____D3DError____s_005b2868,s_D__Work_DX3D_D3dlib_cpp_005b2884,0x22,uVar2);
  }
  return;
}


/* ==== 004c04a0 FUN_004c04a0 ==== */

void FUN_004c04a0(void)

{
  (**(code **)(*DAT_0073b778 + 8))(DAT_0073b778);
  return;
}


/* ==== 004c04b0 FUN_004c04b0 ==== */

undefined4 FUN_004c04b0(undefined4 param_1,uint size,uint size_2,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004c3fa0(s_init_3d_library__version__d_005b29ac,s_May_31_2000_005b29cc);
  FUN_004bc4e0(param_4);
  FUN_004c0460();
  FUN_004c3fa0(s_init_z_buffer_005b299c);
  iVar1 = FUN_004c0610(param_1,0x10,DAT_005b3798,DAT_005b379c);
  if (iVar1 == 0) {
    FUN_004c4150(s__s__d____D3D___Error_creating_Z__005b2970,s_D__Work_DX3D_D3dlib_cpp_005b2884,0x40
                );
  }
  FUN_004c3fa0(s_z_buffer_initialized____d_005b2954,DAT_0073b77c);
  FUN_004c3fa0(s_init_d3d_device_005b2940);
  if (DAT_0073b780 == 0) {
    FUN_004bb560(param_1);
  }
  else {
    FUN_004bb570(param_1,3);
  }
  FUN_004c3fa0(s_setting_palette_005b292c);
  FUN_004c9e70(DAT_007409f0,0,0x100);
  FUN_004c3fa0(s_enum_texture_formats_005b2914);
  FUN_004c2a40();
  if (DAT_005b37a0 < 9) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  FUN_004c2b90(uVar2);
  FUN_004c3fa0(s_init_lights_005b2904);
  FUN_004c38d0(size);
  FUN_004c3fa0(s_init_materials_005b28f4);
  FUN_004bab70(size_2);
  FUN_004c3fa0(s_init_viewport_005b28e4);
  FUN_004c09b0(10);
  FUN_004c3fa0(s_add_a_viewport_005b28d4);
  uVar2 = FUN_004c0c30();
  FUN_004c0d30(uVar2);
  FUN_004c3fa0(s_init_viewport_ok_005b28c0);
  FUN_004c3fa0(s_clear_z_buffer_005b28b0);
  FUN_004c0780();
  FUN_004c3fa0(s_clear_z_buffer_ok_005b289c);
  return 1;
}


/* ==== 004c0610 FUN_004c0610 ==== */

void FUN_004c0610(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int i;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_6c [6];
  undefined4 local_54;
  undefined4 local_4;
  
  puVar2 = local_6c;
  for (i = 0x1b; i != 0; i = i + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  local_6c[1] = 0x47;
  local_4 = 0x20000;
  local_6c[2] = param_4;
  local_6c[3] = param_3;
  local_54 = param_2;
  if (param_1 == 2) {
    local_4 = 0x20800;
  }
  i = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&DAT_0073b774,0);
  if (i != 0) {
    uVar1 = FUN_004bb290(i);
    FUN_004c4150(s__s__d____D3DError_Z_buffer_creat_005b2ab0,s_D__Work_DX3D_D3dlib_cpp_005b2884,0x8c
                 ,uVar1);
  }
  if (param_1 == 0) {
    i = (**(code **)(*DAT_007408ac + 0xc))(DAT_007408ac,DAT_0073b774);
    if (i == 0) {
      DAT_0073b77c = 1;
      return;
    }
    uVar1 = FUN_004bb290(i);
    uVar4 = 0x97;
    pcVar3 = s__s__d____D3DError_Z_buffer_attac_005b29d8;
  }
  else if (param_1 == 1) {
    i = (**(code **)(*DAT_007408b0 + 0xc))(DAT_007408b0,DAT_0073b774);
    if (i == 0) {
      DAT_0073b77c = 1;
      return;
    }
    uVar1 = FUN_004bb290(i);
    uVar4 = 0x9e;
    pcVar3 = s__s__d____D3DError_Z_buffer_attac_005b2a10;
  }
  else {
    if (param_1 != 2) {
      FUN_004c4150(s__s__d____Illegal_focus_for_z_buf_005b2a88,s_D__Work_DX3D_D3dlib_cpp_005b2884,
                   0xaa);
      DAT_0073b77c = 1;
      return;
    }
    i = (**(code **)(*DAT_00740890 + 0xc))(DAT_00740890,DAT_0073b774);
    if (i == 0) {
      DAT_0073b77c = 1;
      return;
    }
    uVar1 = FUN_004bb290(i);
    uVar4 = 0xa5;
    pcVar3 = s__s__d____D3DError_Z_buffer_attac_005b2a4c;
  }
  FUN_004c4150(pcVar3,s_D__Work_DX3D_D3dlib_cpp_005b2884,uVar4,uVar1);
  DAT_0073b77c = 1;
  return;
}


/* ==== 004c0780 FUN_004c0780 ==== */

undefined4 FUN_004c0780(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0073b78c;
  iVar1 = DAT_0073b784;
  uVar3 = 1;
  if ((DAT_0073b77c != 0) && (DAT_0073b4fd != 0)) {
    uVar3 = 3;
  }
  if (*(int *)(DAT_0073b784 + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_D3dlib_cpp_005b2884,0xc0
                 ,DAT_0073b784 + 0x14,*(undefined4 *)(DAT_0073b784 + 4),DAT_0073b784 + 0x2d);
  }
  if ((iVar2 < 0) || (*(int *)(iVar1 + 4) <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_D3dlib_cpp_005b2884,0xc0
                 ,iVar1 + 0x14,iVar2,*(undefined4 *)(iVar1 + 4));
  }
  if (*(char *)(*(int *)(iVar1 + 0x10) + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_D3dlib_cpp_005b2884,0xc0
                 ,iVar1 + 0x14,iVar2);
  }
  FUN_004c0f50(uVar3);
  return 0;
}


/* ==== 004c0840 FUN_004c0840 ==== */

undefined4 FUN_004c0840(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_0073b78c;
  iVar1 = DAT_0073b784;
  uVar3 = 0;
  if ((DAT_0073b77c != 0) && (DAT_0073b4fd != 0)) {
    uVar3 = param_1 | 2;
  }
  if (*(int *)(DAT_0073b784 + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_D3dlib_cpp_005b2884,0xcf
                 ,DAT_0073b784 + 0x14,*(undefined4 *)(DAT_0073b784 + 4),DAT_0073b784 + 0x2d);
  }
  if ((iVar2 < 0) || (*(int *)(iVar1 + 4) <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_D3dlib_cpp_005b2884,0xcf
                 ,iVar1 + 0x14,iVar2,*(undefined4 *)(iVar1 + 4));
  }
  if (*(char *)(*(int *)(iVar1 + 0x10) + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_D3dlib_cpp_005b2884,0xcf
                 ,iVar1 + 0x14,iVar2);
  }
  FUN_004c0f50(uVar3);
  return 0;
}


/* ==== 004c0900 FUN_004c0900 ==== */

void FUN_004c0900(void)

{
  if (DAT_0073b77c != 0) {
    (**(code **)(*DAT_0073b774 + 8))(DAT_0073b774);
    DAT_0073b77c = 0;
  }
  return;
}


/* ==== 004c0920 FUN_004c0920 ==== */

void FUN_004c0920(void)

{
  int iVar1;
  
  if (DAT_0073b77c != 0) {
    iVar1 = (**(code **)(*DAT_0073b774 + 0x60))(DAT_0073b774);
    if (iVar1 != 0) {
      (**(code **)(*DAT_0073b774 + 0x6c))(DAT_0073b774);
    }
  }
  return;
}


/* ==== 004c0950 FUN_004c0950 ==== */

void FUN_004c0950(void)

{
  FUN_004c3fa0(s_releasing_lights_005b2b4c);
  FUN_004c39d0();
  FUN_004c3fa0(s_releasing_materials_005b2b34);
  FUN_004bae10();
  FUN_004c3fa0(s_releasing_viewport_005b2b20);
  FUN_004c0b00();
  FUN_004c3fa0(s_releasing_zbuffer_005b2b0c);
  FUN_004c0900();
  FUN_004c3fa0(s_releasing_d3d_device_005b2af4);
  FUN_004bb590();
  FUN_004c3fa0(s_releasing_d3dlib_done_005b2adc);
  FUN_004c04a0();
  return;
}


/* ==== 004c09b0 FUN_004c09b0 ==== */

void FUN_004c09b0(uint size)

{
  char *_Dest;
  char *_Dest_00;
  undefined4 *operator_new_result;
  void *operator_new_result_2;
  int i;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f77b;
  local_c = ExceptionList;
  if (DAT_0073b788 == 0) {
    ExceptionList = &local_c;
    operator_new_result = operator_new(0x46);
    local_4 = 0;
    if (operator_new_result == (undefined4 *)0x0) {
      operator_new_result = (undefined4 *)0x0;
    }
    else {
      _Dest = (char *)(operator_new_result + 5);
      operator_new_result[3] = 0;
      _strncpy(_Dest,s__d3d_viewport_ptr_005b2b74,0x19);
      _Dest_00 = (char *)((int)operator_new_result + 0x2d);
      _strncpy(_Dest_00,s_viewport_t_005b2b68,0x19);
      if (operator_new_result[3] != 0) {
        if (operator_new_result[3] == 1) {
          FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,_Dest_00,_Dest,
                       operator_new_result[1]);
          FUN_0054b339(*operator_new_result);
        }
        if (operator_new_result[3] != 0) {
          FUN_0054b339(operator_new_result[4]);
          operator_new_result[3] = 0;
        }
        FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
      }
      if ((int)size < 0) {
        FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,
                     _Dest_00,_Dest,size);
      }
      operator_new_result_2 = operator_new(size * 4);
      *operator_new_result = operator_new_result_2;
      operator_new_result[1] = size;
      operator_new_result[2] = 0;
      operator_new_result_2 = operator_new(size);
      operator_new_result[4] = operator_new_result_2;
      FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,_Dest_00,_Dest,operator_new_result[1]
                  );
      i = 0;
      operator_new_result[3] = 1;
      if (0 < (int)size) {
        do {
          i = i + 1;
          *(undefined1 *)(operator_new_result[4] + -1 + i) = 0;
        } while (i < (int)size);
      }
    }
    DAT_0073b788 = 1;
    DAT_0073b784 = operator_new_result;
  }
  ExceptionList = local_c;
  return;
}


