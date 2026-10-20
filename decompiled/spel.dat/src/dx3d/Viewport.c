/* spel.dat — dx3d/Viewport.cpp: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c0b00 FUN_004c0b00 ==== */

void FUN_004c0b00(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0073b784;
  if (DAT_0073b788 != 0) {
    if (DAT_0073b784 != (undefined4 *)0x0) {
      if (DAT_0073b784[3] == 1) {
        FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)DAT_0073b784 + 0x2d,
                     DAT_0073b784 + 5,DAT_0073b784[1]);
        FUN_0054b339(*puVar1);
      }
      if (puVar1[3] != 0) {
        FUN_0054b339(puVar1[4]);
        puVar1[3] = 0;
      }
      FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
      FUN_0054b339(puVar1);
    }
    DAT_0073b788 = 1;
  }
  return;
}


/* ==== 004c0b80 FUN_004c0b80 ==== */

int FUN_004c0b80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int i;
  int iVar4;
  
  if (DAT_0073b788 == 0) {
    FUN_004c4150(s__s__d____viewport_array_not_init_005b2b88,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x31);
  }
  iVar3 = DAT_0073b784;
  if (*(int *)(DAT_0073b784 + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 DAT_0073b784 + 0x14,*(undefined4 *)(DAT_0073b784 + 4),DAT_0073b784 + 0x2d);
  }
  iVar1 = *(int *)(iVar3 + 8);
  iVar2 = *(int *)(iVar3 + 4);
  if (iVar1 < iVar2) {
    iVar4 = *(int *)(iVar3 + 0x10);
    i = iVar1;
    do {
      if (*(char *)(iVar4 + i) == '\0') goto LAB_004c0c23;
      i = i + 1;
    } while (i < iVar2);
  }
  i = 0;
  if (0 < iVar1) {
    iVar4 = *(int *)(iVar3 + 0x10);
    do {
      if (*(char *)(iVar4 + i) == '\0') {
LAB_004c0c23:
        *(undefined1 *)(iVar4 + i) = 1;
        *(int *)(iVar3 + 8) = i;
        return i;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,iVar3 + 0x14,
               iVar2,iVar3 + 0x2d);
  return -1;
}


/* ==== 004c0c30 FUN_004c0c30 ==== */

int FUN_004c0c30(void)

{
  int *piVar1;
  int iVar2;
  void *operator_new_result;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f79b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0073b788 == 0) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s__d____viewport_array_not_init_005b2b88,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x3c);
  }
  iVar2 = FUN_004c0b80();
  operator_new_result = operator_new(0x40);
  uStack_4 = 0;
  if (operator_new_result == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004c0e10();
  }
  piVar1 = DAT_0073b784;
  uStack_4 = 0xffffffff;
  if (DAT_0073b784[3] == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x40,DAT_0073b784 + 5,DAT_0073b784[1],(int)DAT_0073b784 + 0x2d);
  }
  if ((iVar2 < 0) || (piVar1[1] <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x40,piVar1 + 5,iVar2,piVar1[1]);
  }
  if (*(char *)(piVar1[4] + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x40,piVar1 + 5,iVar2);
  }
  *(undefined4 *)(*piVar1 + iVar2 * 4) = uVar3;
  ExceptionList = pvStack_c;
  return iVar2;
}


/* ==== 004c0d30 FUN_004c0d30 ==== */

void FUN_004c0d30(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_0073b788 == 0) {
    FUN_004c4150(s__s__d____viewport_array_not_init_005b2b88,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x49);
  }
  piVar1 = DAT_0073b784;
  DAT_0073b78c = param_1;
  if (DAT_0073b784[3] == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x4d,DAT_0073b784 + 5,DAT_0073b784[1],(int)DAT_0073b784 + 0x2d);
  }
  if ((param_1 < 0) || (piVar1[1] <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x4d,piVar1 + 5,param_1,piVar1[1]);
  }
  if (*(char *)(piVar1[4] + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x4d,piVar1 + 5,param_1);
  }
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x34))
                    (DAT_0073b4b4,*(undefined4 *)(*(int *)(*piVar1 + param_1 * 4) + 0x2c));
  if (iVar2 != 0) {
    uVar3 = FUN_004bb290(iVar2);
    FUN_004c4150(s__s__d___D3DError_Setting_viewpor_005b2bd0,s___viewport_inl_005b1c9c,0x46,uVar3);
  }
  return;
}


/* ==== 004c0e10 FUN_004c0e10 ==== */

void FUN_004c0e10(void)

{
  undefined4 *puVar1;
  int i;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  
  puVar1 = in_ECX + 0xb;
  i = (**(code **)(*DAT_0073b778 + 0x18))(DAT_0073b778,puVar1,0);
  if (i != 0) {
    uVar2 = FUN_004bb290(i);
    FUN_004c4150(s__s__d____D3DError_Creating_viewp_005b2c50,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0x97,uVar2);
  }
  in_ECX[0xf] = (float)DAT_005b379c / (float)DAT_005b3798;
  puVar3 = in_ECX;
  for (i = 0xb; i != 0; i = i + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *in_ECX = 0x2c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = DAT_005b3798;
  i = DAT_005b379c;
  in_ECX[8] = (float)in_ECX[0xf] + (float)in_ECX[0xf];
  in_ECX[4] = i;
  in_ECX[5] = 0xbf800000;
  in_ECX[6] = in_ECX[0xf];
  in_ECX[7] = 0x40000000;
  in_ECX[9] = 0;
  in_ECX[10] = 0x3f800000;
  i = (**(code **)(*DAT_0073b4b4 + 0x18))(DAT_0073b4b4,*puVar1);
  if (i != 0) {
    uVar2 = FUN_004bb290(i);
    FUN_004c4150(s__s__d___D3DError_Creating_viewpo_005b2bfc,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0xaf,uVar2);
  }
  i = (**(code **)(*(int *)*puVar1 + 0x44))((int *)*puVar1);
  if (i != 0) {
    uVar2 = FUN_004bb290(i);
    FUN_004c4150(s__s__d____error_setting_viewport___005b2c28,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0xb3,uVar2);
  }
  i = (**(code **)(*DAT_0073b4b4 + 0x34))(DAT_0073b4b4,*puVar1);
  if (i != 0) {
    uVar2 = FUN_004bb290(i);
    FUN_004c4150(s__s__d___D3DError_Setting_viewpor_005b2bd0,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0xb7,uVar2);
  }
  in_ECX[0xc] = 1;
  return;
}


/* ==== 004c0f50 FUN_004c0f50 ==== */

void FUN_004c0f50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = *(int *)(in_ECX + 4);
  local_c = *(int *)(in_ECX + 8);
  local_8 = *(int *)(in_ECX + 0xc) + local_10;
  local_4 = *(int *)(in_ECX + 0x10) + local_c;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x30))
                    (*(int **)(in_ECX + 0x2c),1,&local_10,param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_004bb290(iVar1);
    FUN_004c4150(s__s__d___D3DError_Clearing_z_buff_005b2c7c,s_D__Work_DX3D_Viewport_cpp_005b2bb4,
                 0xe1,uVar2);
  }
  return;
}


/* ==== 004c0fc0 FUN_004c0fc0 ==== */

void FUN_004c0fc0(void)

{
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar1;
  
  puVar1 = in_ECX;
  for (i = 0x33; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = in_ECX + 0x33;
  for (i = 0x33; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  in_ECX[0x66] = 0;
  return;
}


