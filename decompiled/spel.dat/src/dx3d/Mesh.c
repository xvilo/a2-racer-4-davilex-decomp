/* spel.dat — dx3d/Mesh.cpp: 35 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004bc780 FUN_004bc780 ==== */

void FUN_004bc780(void)

{
  FUN_005584e0(&LAB_004bc790);
  return;
}


/* ==== 004bc810 FUN_004bc810 ==== */

void FUN_004bc810(uint size)

{
  FUN_004bf750(&DAT_0073b5c8,size);
  return;
}


/* ==== 004bc820 FUN_004bc820 ==== */

int FUN_004bc820(void)

{
  int i;
  
  i = DAT_0073b5d0;
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,s___array_hpp_005b1044,0xb9,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
    i = DAT_0073b5d0;
  }
  for (; i < DAT_0073b5cc; i = i + 1) {
    if (*(char *)(DAT_0073b5d8 + i) == '\0') goto LAB_004bc8ac;
  }
  i = 0;
  if (0 < DAT_0073b5d0) {
    do {
      if (*(char *)(DAT_0073b5d8 + i) == '\0') {
LAB_004bc8ac:
        *(undefined1 *)(DAT_0073b5d8 + i) = 1;
        DAT_0073b5d0 = i;
        return i;
      }
      i = i + 1;
    } while (i < DAT_0073b5d0);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,s___array_hpp_005b1044,0xce,&DAT_0073b5dc
               ,DAT_0073b5cc,&DAT_0073b5f5);
  return -1;
}


/* ==== 004bc8c0 FUN_004bc8c0 ==== */

int FUN_004bc8c0(undefined4 param_1,char *str2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004bc820();
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x3f,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
  }
  if ((iVar1 < 0) || (DAT_0073b5cc <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x3f,
                 &DAT_0073b5dc,iVar1,DAT_0073b5cc);
  }
  if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0x3f,
                 &DAT_0073b5dc,iVar1);
  }
  iVar2 = iVar1 * 0xac;
  if (*(int *)(iVar2 + 4 + DAT_0073b5c8) == 0) {
    *(undefined4 *)(iVar2 + DAT_0073b5c8) = param_1;
  }
  else {
    FUN_004c4150(s__s__d____illegal_change_of_mesh_t_005b2480,s___mesh_inl_005b24a8,0x11);
  }
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x40,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
  }
  if ((iVar1 < 0) || (DAT_0073b5cc <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x40,
                 &DAT_0073b5dc,iVar1,DAT_0073b5cc);
  }
  if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0x40,
                 &DAT_0073b5dc,iVar1);
  }
  FUN_004be590((void *)(iVar2 + DAT_0073b5c8),str2);
  return iVar1;
}


/* ==== 004bca20 FUN_004bca20 ==== */

int FUN_004bca20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004bc820();
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x49,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
  }
  if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x49,
                 &DAT_0073b5dc,param_1,DAT_0073b5cc);
  }
  if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0x49,
                 &DAT_0073b5dc,param_1);
  }
  uVar1 = *(undefined4 *)(DAT_0073b5c8 + param_1 * 0xac);
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x49,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
  }
  if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x49,
                 &DAT_0073b5dc,iVar2,DAT_0073b5cc);
  }
  if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0x49,
                 &DAT_0073b5dc,iVar2);
  }
  iVar3 = iVar2 * 0xac;
  if (*(int *)(iVar3 + 4 + DAT_0073b5c8) == 0) {
    *(undefined4 *)(iVar3 + DAT_0073b5c8) = uVar1;
  }
  else {
    FUN_004c4150(s__s__d____illegal_change_of_mesh_t_005b2480,s___mesh_inl_005b24a8,0x11);
  }
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x4a,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
  }
  if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x4a,
                 &DAT_0073b5dc,iVar2,DAT_0073b5cc);
  }
  if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0x4a,
                 &DAT_0073b5dc,iVar2);
  }
  FUN_004bd840(iVar3 + DAT_0073b5c8,param_1);
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x4b,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
  }
  if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x4b,
                 &DAT_0073b5dc,iVar2,DAT_0073b5cc);
  }
  if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0x4b,
                 &DAT_0073b5dc,iVar2);
  }
  FUN_004c1ae0(iVar3 + 0x98 + DAT_0073b5c8,s_copy_mesh_005b24b4);
  return iVar2;
}


/* ==== 004bcca0 FUN_004bcca0 ==== */

int FUN_004bcca0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 this_val_2;
  int k;
  int i;
  int this_val_3;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int j;
  undefined4 auStack_20 [6];
  undefined4 uStack_8;
  undefined4 uStack_4;
  int *this_val;
  
  iVar2 = FUN_004bc820();
  i = 0;
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x7c,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
  }
  if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x7c,
                 &DAT_0073b5dc,iVar2,DAT_0073b5cc);
  }
  if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0x7c,
                 &DAT_0073b5dc,iVar2);
  }
  this_val_3 = iVar2 * 0xac;
  if (*(int *)(this_val_3 + 4 + DAT_0073b5c8) == 0) {
    *(undefined4 *)(this_val_3 + DAT_0073b5c8) = 2;
  }
  else {
    FUN_004c4150(s__s__d____illegal_change_of_mesh_t_005b2480,s___mesh_inl_005b24a8,0x11);
  }
  if (DAT_0073b5d4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x7d,
                 &DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
  }
  if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x7d,
                 &DAT_0073b5dc,iVar2,DAT_0073b5cc);
  }
  if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0x7d,
                 &DAT_0073b5dc,iVar2);
  }
  FUN_004bd600(this_val_3 + DAT_0073b5c8,param_2,param_4);
  j = 0;
  if (0 < param_2) {
    do {
      if (DAT_0073b5d4 == 0) {
        FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                     0x81,&DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
      }
      if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
        FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                     0x81,&DAT_0073b5dc,iVar2,DAT_0073b5cc);
      }
      if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
        FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                     0x81,&DAT_0073b5dc,iVar2);
      }
      puVar3 = (undefined4 *)(param_1 + i);
      puVar4 = auStack_20;
      for (k = 8; k != 0; k = k + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      this_val = (int *)(this_val_3 + DAT_0073b5c8);
      FUN_004bf8c0(this_val,s___mesh_inl_005b24a8,0x77);
      if (*this_val == 1) {
        if ((i < 0) || (this_val[0x1f] <= j)) {
          FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0x83,j,
                       this_val[0x21]);
        }
        *(undefined4 *)(this_val[0x1e] + i) = auStack_20[0];
        *(undefined4 *)(this_val[0x1e] + 4 + i) = auStack_20[1];
        *(undefined4 *)(this_val[0x1e] + 8 + i) = auStack_20[2];
        *(undefined4 *)(this_val[0x1e] + 0xc + i) = auStack_20[0];
        *(undefined4 *)(this_val[0x1e] + 0x10 + i) = auStack_20[1];
        *(undefined4 *)(this_val[0x1e] + 0x14 + i) = auStack_20[2];
        *(undefined4 *)(this_val[0x1e] + 0x18 + i) = uStack_8;
        *(undefined4 *)(this_val[0x1e] + 0x1c + i) = uStack_4;
      }
      else if (*this_val == 2) {
        if ((i < 0) || (this_val[0x21] <= j)) {
          FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0x7d,j,
                       this_val[0x21]);
        }
        puVar3 = auStack_20;
        puVar4 = (undefined4 *)(this_val[0x20] + i);
        for (k = 8; k != 0; k = k + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      j = j + 1;
      i = i + 0x20;
    } while (j < param_2);
  }
  i = 0;
  if (0 < param_4) {
    do {
      uVar1 = *(undefined2 *)(param_3 + i * 2);
      this_val_3 = FUN_004b6080(&DAT_0073b5c8,iVar2,s_D__Work_DX3D_Mesh_cpp_005b2468,0x84);
      FUN_004bf8c0(this_val_3,s___mesh_inl_005b24a8,0x3c);
      if ((i < 0) || (*(int *)(this_val_3 + 0x94) <= i)) {
        FUN_004c4150(s__s__d____getting_index____d___is_005b24cc,s___mesh_inl_005b24a8,0x40,i,
                     *(undefined4 *)(this_val_3 + 0x7c));
      }
      *(undefined2 *)(*(int *)(this_val_3 + 0x90) + i * 2) = uVar1;
      i = i + 1;
    } while (i < param_4);
  }
  this_val_2 = FUN_004b6080(&DAT_0073b5c8,iVar2,s_D__Work_DX3D_Mesh_cpp_005b2468,0x86);
  FUN_004bf570(this_val_2);
  pcVar5 = s_static_mesh_005b24c0;
  i = FUN_004b6080(&DAT_0073b5c8,iVar2,s_D__Work_DX3D_Mesh_cpp_005b2468,0x87);
  FUN_004c1ae0(i + 0x98,pcVar5);
  return iVar2;
}


/* ==== 004bd070 FUN_004bd070 ==== */

void FUN_004bd070(int param_1,int param_2)

{
  undefined4 *puVar1;
  int this_val;
  undefined4 this_val_2;
  
  if (DAT_0073b1bc == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0xc9,
                 &DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
  }
  if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0xc9,
                 &DAT_0073b1c4,param_2,DAT_0073b1b4);
  }
  if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0xc9,
                 &DAT_0073b1c4,param_2);
  }
  this_val = DAT_005b1ba8;
  if (*(int *)(DAT_0073b1b0 + 0x44 + param_2 * 0x48) == 0) {
    if (DAT_0073b21c == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0xca
                   ,&DAT_0073b224,DAT_0073b214,&DAT_0073b23d);
    }
    if ((this_val < 0) || (DAT_0073b214 <= this_val)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0xca
                   ,&DAT_0073b224,this_val,DAT_0073b214);
    }
    if (*(char *)(DAT_0073b220 + this_val) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0xca
                   ,&DAT_0073b224,this_val);
    }
    this_val = *(int *)(DAT_0073b210 + this_val * 4);
    *(int *)(this_val + 0x60) = param_2;
    puVar1 = (undefined4 *)FUN_004ba990(&DAT_0073b1b0,param_2,s___material_inl_005b1050,0xc0);
    *(undefined4 *)(this_val + 0x48) = *puVar1;
    *(undefined4 *)(this_val + 0x58) = 1;
    if (*(int *)(this_val + 0x5c) == 1) {
      FUN_00440430(this_val);
    }
    if (DAT_0073b4cc != 1) {
      FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
    }
    if (DAT_0073b4ec != param_2) {
      DAT_0073b4ec = param_2;
      this_val = *DAT_0073b4b4;
      puVar1 = (undefined4 *)FUN_004ba990(&DAT_0073b1b0,param_2,s___d3dev_inl_005b1060,0x121);
      this_val = (**(code **)(this_val + 0x5c))(DAT_0073b4b4,1,*puVar1);
      if (this_val != 0) {
        this_val_2 = FUN_004bb290(this_val);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,s___d3dev_inl_005b1060,0x122,
                     this_val_2);
      }
    }
  }
  else {
    if (DAT_0073b5d4 == 0) {
      FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,0xcd
                   ,&DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
    }
    if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
      FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,0xcd
                   ,&DAT_0073b5dc,param_1,DAT_0073b5cc);
    }
    if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
      FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,0xcd
                   ,&DAT_0073b5dc,param_1);
    }
    if (*(int *)(param_1 * 0xac + 0xa8 + DAT_0073b5c8) != param_2) {
      if (DAT_0073b5d4 == 0) {
        FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                     0xce,&DAT_0073b5dc,DAT_0073b5cc,&DAT_0073b5f5);
      }
      if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
        FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                     0xce,&DAT_0073b5dc,param_1,DAT_0073b5cc);
      }
      if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
        FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                     0xce,&DAT_0073b5dc,param_1);
      }
      FUN_004bdcd0(param_1 * 0xac + DAT_0073b5c8,param_2);
      this_val = FUN_004b6080(&DAT_0073b5c8,param_1,s_D__Work_DX3D_Mesh_cpp_005b2468,0xcf);
      *(int *)(this_val + 0xa8) = param_2;
    }
  }
  this_val_2 = FUN_004b6080(&DAT_0073b5c8,param_1,s_D__Work_DX3D_Mesh_cpp_005b2468,0xd3);
  FUN_004be340(this_val_2);
  if (DAT_0073b610 != 0) {
    this_val = FUN_004ba990(&DAT_0073b1b0,param_2,s_D__Work_DX3D_Mesh_cpp_005b2468,0xd6);
    if (*(int *)(this_val + 0x44) != 0) {
      this_val_2 = FUN_004b6080(&DAT_0073b5c8,param_1,s_D__Work_DX3D_Mesh_cpp_005b2468,0xd7);
      FUN_004bdff0(this_val_2,param_2);
      this_val = FUN_004b6080(&DAT_0073b5c8,param_1,s_D__Work_DX3D_Mesh_cpp_005b2468,0xd8);
      *(undefined4 *)(this_val + 0xa8) = 0xffffffff;
    }
  }
  return;
}


/* ==== 004bd500 FUN_004bd500 ==== */

void * __thiscall FUN_004bd500(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f70b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004bf5d0((int)this + 0xc);
  local_4 = 0;
  FUN_004c1ab0((int)this + 0x98);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}


/* ==== 004bd590 FUN_004bd590 ==== */

void __thiscall FUN_004bd590(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056f739;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004bd780();
  FUN_004bd800(this);
  local_4 = local_4 & 0xffffff00;
  FUN_004c1ac0((int)this + 0x98);
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return;
}


/* ==== 004bd600 FUN_004bd600 ==== */

void __thiscall FUN_004bd600(void *this,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)this == 0) {
    FUN_004c4150(s__s__d____error_unknown_mesh_type_005b250c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x10d)
    ;
  }
  FUN_004bd660(this,param_2);
  FUN_004bd750(this,param_3);
  return;
}


/* ==== 004bd640 FUN_004bd640 ==== */

void __thiscall FUN_004bd640(void *this)

{
  FUN_004bd780();
  FUN_004bd800(this);
  return;
}


/* ==== 004bd660 FUN_004bd660 ==== */

undefined4 __thiscall FUN_004bd660(void *this,int param_2)

{
  void *operator_new_result;
  
  if (param_2 < 1) {
    FUN_004c4150(s__s__d____trying_to_allocate_nega_005b2534,s_D__Work_DX3D_Mesh_cpp_005b2468,0x121,
                 *(undefined4 *)((int)this + 0x7c));
  }
  FUN_004bd780(this);
  if (*(int *)this == 1) {
    operator_new_result = operator_new(param_2 << 5);
    if (operator_new_result != (void *)0x0) {
      *(void **)((int)this + 0x78) = operator_new_result;
      *(int *)((int)this + 0x7c) = param_2;
      *(undefined4 *)((int)this + 4) = 1;
      return 0;
    }
    *(int *)((int)this + 0x7c) = param_2;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 4) = 1;
  }
  else if (*(int *)this == 2) {
    operator_new_result = operator_new(param_2 << 5);
    if (operator_new_result == (void *)0x0) {
      operator_new_result = (void *)0x0;
    }
    *(void **)((int)this + 0x80) = operator_new_result;
    *(int *)((int)this + 0x84) = param_2;
    *(undefined4 *)((int)this + 4) = 2;
    operator_new_result = operator_new(param_2 * 0xc);
    if (operator_new_result == (void *)0x0) {
      *(int *)((int)this + 0x8c) = param_2;
      *(undefined4 *)((int)this + 0x88) = 0;
      return 0;
    }
    *(void **)((int)this + 0x88) = operator_new_result;
    *(int *)((int)this + 0x8c) = param_2;
    return 0;
  }
  return 0;
}


/* ==== 004bd750 FUN_004bd750 ==== */

undefined4 __thiscall FUN_004bd750(void *this,int param_2)

{
  void *operator_new_result;
  
  FUN_004bd800();
  operator_new_result = operator_new(param_2 * 2);
  *(int *)((int)this + 0x94) = param_2;
  *(void **)((int)this + 0x90) = operator_new_result;
  return 0;
}


/* ==== 004bd780 FUN_004bd780 ==== */

void __thiscall FUN_004bd780(void *this)

{
  if (*(int *)((int)this + 4) == 1) {
    if (*(int *)((int)this + 0x7c) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x78));
      *(undefined4 *)((int)this + 0x7c) = 0;
      *(undefined4 *)((int)this + 0x78) = 0;
      *(undefined4 *)((int)this + 4) = 0;
      return;
    }
  }
  else {
    if (*(int *)((int)this + 4) != 2) {
      *(undefined4 *)((int)this + 4) = 0;
      return;
    }
    if (*(int *)((int)this + 0x84) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x80));
      *(undefined4 *)((int)this + 0x84) = 0;
      *(undefined4 *)((int)this + 0x80) = 0;
      FUN_0054b339(*(undefined4 *)((int)this + 0x88));
      *(undefined4 *)((int)this + 0x8c) = 0;
      *(undefined4 *)((int)this + 0x88) = 0;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004bd800 FUN_004bd800 ==== */

void __thiscall FUN_004bd800(void *this)

{
  if (*(int *)((int)this + 0x94) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0x90));
    *(undefined4 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  return;
}


/* ==== 004bd840 FUN_004bd840 ==== */

void __thiscall FUN_004bd840(void *this,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 this_val;
  undefined4 *puVar3;
  int j;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  int i;
  undefined1 *puVar5;
  char **ppcVar6;
  char *apcStack_78 [4];
  char *pcStack_68;
  char *pcStack_64;
  char *pcStack_60;
  char *pcStack_5c;
  undefined1 *local_48;
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [32];
  
  local_48 = (undefined1 *)0x0;
  pcStack_5c = (char *)0x4bd85a;
  FUN_004bd640();
  if (DAT_0073b5d4 == 0) {
    pcStack_5c = &DAT_0073b5f5;
    pcStack_60 = (char *)DAT_0073b5cc;
    pcStack_64 = &DAT_0073b5dc;
    pcStack_68 = (char *)0x175;
    apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
    apcStack_78[2] = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
    apcStack_78[1] = (char *)0x4bd887;
    FUN_004c4150();
  }
  if (((int)param_2 < 0) || (DAT_0073b5cc <= (int)param_2)) {
    pcStack_5c = (char *)DAT_0073b5cc;
    pcStack_60 = param_2;
    pcStack_64 = &DAT_0073b5dc;
    pcStack_68 = (char *)0x175;
    apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
    apcStack_78[2] = s__s__d____out_of_boundaries__s__d_005b0fc8;
    apcStack_78[1] = (char *)0x4bd8b6;
    FUN_004c4150();
  }
  if (param_2[DAT_0073b5d8] == '\0') {
    pcStack_5c = param_2;
    pcStack_60 = &DAT_0073b5dc;
    pcStack_64 = (char *)0x175;
    pcStack_68 = s_D__Work_DX3D_Mesh_cpp_005b2468;
    apcStack_78[3] = s__s__d____array_element_not_regis_005b0f98;
    apcStack_78[2] = (char *)0x4bd8e4;
    FUN_004c4150();
  }
  i = (int)param_2 * 0xac;
  iVar1 = *(int *)(i + 0x94 + DAT_0073b5c8);
  if (DAT_0073b5d4 == 0) {
    pcStack_5c = &DAT_0073b5f5;
    pcStack_64 = &DAT_0073b5dc;
    pcStack_68 = (char *)0x177;
    apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
    apcStack_78[2] = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
    apcStack_78[1] = (char *)0x4bd938;
    pcStack_60 = (char *)DAT_0073b5cc;
    FUN_004c4150();
  }
  if (((int)param_2 < 0) || (DAT_0073b5cc <= (int)param_2)) {
    pcStack_60 = param_2;
    pcStack_64 = &DAT_0073b5dc;
    pcStack_68 = (char *)0x177;
    apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
    apcStack_78[2] = s__s__d____out_of_boundaries__s__d_005b0fc8;
    apcStack_78[1] = (char *)0x4bd963;
    pcStack_5c = (char *)DAT_0073b5cc;
    FUN_004c4150();
  }
  if (param_2[DAT_0073b5d8] == '\0') {
    pcStack_5c = param_2;
    pcStack_60 = &DAT_0073b5dc;
    pcStack_64 = (char *)0x177;
    pcStack_68 = s_D__Work_DX3D_Mesh_cpp_005b2468;
    apcStack_78[3] = s__s__d____array_element_not_regis_005b0f98;
    apcStack_78[2] = (char *)0x4bd991;
    FUN_004c4150();
  }
  pcStack_60 = (char *)DAT_0073b5cc;
  if (*(int *)(i + DAT_0073b5c8) == 1) {
    if (DAT_0073b5d4 == 0) {
      pcStack_5c = &DAT_0073b5f5;
      pcStack_64 = &DAT_0073b5dc;
      pcStack_68 = (char *)0x179;
      apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[2] = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
      apcStack_78[1] = (char *)0x4bdb2b;
      FUN_004c4150();
    }
    if (((int)param_2 < 0) || (DAT_0073b5cc <= (int)param_2)) {
      pcStack_60 = param_2;
      pcStack_64 = &DAT_0073b5dc;
      pcStack_68 = (char *)0x179;
      apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[2] = s__s__d____out_of_boundaries__s__d_005b0fc8;
      apcStack_78[1] = (char *)0x4bdb56;
      pcStack_5c = (char *)DAT_0073b5cc;
      FUN_004c4150();
    }
    if (param_2[DAT_0073b5d8] == '\0') {
      pcStack_5c = param_2;
      pcStack_60 = &DAT_0073b5dc;
      pcStack_64 = (char *)0x179;
      pcStack_68 = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[3] = s__s__d____array_element_not_regis_005b0f98;
      apcStack_78[2] = (char *)0x4bdb7f;
      FUN_004c4150();
    }
    local_48 = *(undefined1 **)(i + 0x7c + DAT_0073b5c8);
  }
  else if (*(int *)(i + DAT_0073b5c8) == 2) {
    if (DAT_0073b5d4 == 0) {
      pcStack_5c = &DAT_0073b5f5;
      pcStack_64 = &DAT_0073b5dc;
      pcStack_68 = (char *)0x17c;
      apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[2] = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
      apcStack_78[1] = (char *)0x4bda9a;
      FUN_004c4150();
    }
    if (((int)param_2 < 0) || (DAT_0073b5cc <= (int)param_2)) {
      pcStack_60 = param_2;
      pcStack_64 = &DAT_0073b5dc;
      pcStack_68 = (char *)0x17c;
      apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[2] = s__s__d____out_of_boundaries__s__d_005b0fc8;
      apcStack_78[1] = (char *)0x4bdac5;
      pcStack_5c = (char *)DAT_0073b5cc;
      FUN_004c4150();
    }
    if (param_2[DAT_0073b5d8] == '\0') {
      pcStack_5c = param_2;
      pcStack_60 = &DAT_0073b5dc;
      pcStack_64 = (char *)0x17c;
      pcStack_68 = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[3] = s__s__d____array_element_not_regis_005b0f98;
      apcStack_78[2] = (char *)0x4bdaee;
      FUN_004c4150();
    }
    local_48 = *(undefined1 **)(i + 0x84 + DAT_0073b5c8);
  }
  else {
    if (DAT_0073b5d4 == 0) {
      pcStack_5c = &DAT_0073b5f5;
      pcStack_64 = &DAT_0073b5dc;
      pcStack_68 = (char *)0x17f;
      apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[2] = s__s__d____T_ARRAY__get_data__s__d_005b0f3c;
      apcStack_78[1] = (char *)0x4bd9d9;
      FUN_004c4150();
    }
    if (((int)param_2 < 0) || (DAT_0073b5cc <= (int)param_2)) {
      pcStack_60 = param_2;
      pcStack_64 = &DAT_0073b5dc;
      pcStack_68 = (char *)0x17f;
      apcStack_78[3] = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[2] = s__s__d____out_of_boundaries__s__d_005b0fc8;
      apcStack_78[1] = (char *)0x4bda04;
      pcStack_5c = (char *)DAT_0073b5cc;
      FUN_004c4150();
    }
    if (param_2[DAT_0073b5d8] == '\0') {
      pcStack_5c = param_2;
      pcStack_60 = &DAT_0073b5dc;
      pcStack_64 = (char *)0x17f;
      pcStack_68 = s_D__Work_DX3D_Mesh_cpp_005b2468;
      apcStack_78[3] = s__s__d____array_element_not_regis_005b0f98;
      apcStack_78[2] = (char *)0x4bda2d;
      FUN_004c4150();
    }
    puVar3 = (undefined4 *)(i + 0x98 + DAT_0073b5c8);
    if (puVar3[1] == 0) {
      pcStack_5c = (char *)0x24;
      pcStack_60 = s___str_h_005b1584;
      pcStack_64 = s__s__d____string_is_not_initialis_005969b0;
      pcStack_68 = (char *)0x4bda54;
      FUN_004c4150();
    }
    pcStack_60 = (char *)*puVar3;
    pcStack_5c = param_2;
    pcStack_64 = (char *)0x17f;
    pcStack_68 = s_D__Work_DX3D_Mesh_cpp_005b2468;
    apcStack_78[3] = s__s__d____corrupt_mesh_type__duri_005b2570;
    apcStack_78[2] = (char *)0x4bda6f;
    FUN_004c4150();
  }
  pcStack_60 = local_48;
  pcStack_64 = (char *)0x4bdb9c;
  pcStack_5c = (char *)iVar1;
  FUN_004bd600(this);
  i = 0;
  if (0 < (int)local_48) {
    do {
      pcStack_5c = (char *)0x186;
      pcStack_60 = s_D__Work_DX3D_Mesh_cpp_005b2468;
      pcStack_64 = param_2;
      pcStack_68 = (char *)0x4bdbbf;
      piVar2 = (int *)FUN_004b6080(&DAT_0073b5c8);
      pcStack_5c = (char *)i;
      if (*piVar2 == 1) {
        pcStack_60 = auStack_40;
        pcStack_64 = (char *)0x187;
        pcStack_68 = s_D__Work_DX3D_Mesh_cpp_005b2468;
        apcStack_78[3] = param_2;
        apcStack_78[2] = (char *)0x4bdbe1;
        this_val = FUN_004b6080(&DAT_0073b5c8);
        pcStack_64 = (char *)0x4bdbe8;
        puVar3 = (undefined4 *)FUN_004bf960(this_val);
        ppcVar6 = apcStack_78;
        for (j = 8; j != 0; j = j + -1) {
          *ppcVar6 = (char *)*puVar3;
          puVar3 = puVar3 + 1;
          ppcVar6 = ppcVar6 + 1;
        }
        FUN_004bf9e0(this,i);
      }
      else {
        pcStack_60 = auStack_20;
        pcStack_64 = (char *)0x189;
        pcStack_68 = s_D__Work_DX3D_Mesh_cpp_005b2468;
        apcStack_78[3] = param_2;
        apcStack_78[2] = (char *)0x4bdc1c;
        this_val = FUN_004b6080(&DAT_0073b5c8);
        pcStack_64 = (char *)0x4bdc23;
        puVar3 = (undefined4 *)FUN_004bfc00(this_val);
        ppcVar6 = apcStack_78;
        for (j = 8; j != 0; j = j + -1) {
          *ppcVar6 = (char *)*puVar3;
          puVar3 = puVar3 + 1;
          ppcVar6 = ppcVar6 + 1;
        }
        FUN_004bfaf0(this,i);
      }
      i = i + 1;
    } while (i < (int)local_48);
  }
  puVar5 = (undefined1 *)0x0;
  if (0 < iVar1) {
    do {
      pcStack_5c = (char *)0x18f;
      pcStack_60 = s_D__Work_DX3D_Mesh_cpp_005b2468;
      pcStack_64 = param_2;
      pcStack_68 = (char *)0x4bdc67;
      i = FUN_004b6080(&DAT_0073b5c8);
      pcStack_5c = (char *)0x2e;
      pcStack_60 = s___mesh_inl_005b24a8;
      pcStack_64 = (char *)0x4bdc77;
      FUN_004bf8c0(i);
      if (((int)puVar5 < 0) || (uVar4 = extraout_var, *(int *)(i + 0x94) <= (int)puVar5)) {
        pcStack_5c = *(char **)(i + 0x7c);
        pcStack_64 = (char *)0x32;
        pcStack_68 = s___mesh_inl_005b24a8;
        apcStack_78[3] = s__s__d____getting_index____d___is_005b24cc;
        apcStack_78[2] = (char *)0x4bdc99;
        pcStack_60 = puVar5;
        FUN_004c4150();
        uVar4 = extraout_var_00;
      }
      pcStack_5c = (char *)CONCAT22(uVar4,*(undefined2 *)(*(int *)(i + 0x90) + (int)puVar5 * 2));
      pcStack_64 = (char *)0x4bdcb1;
      pcStack_60 = puVar5;
      FUN_004bf8f0(this);
      puVar5 = puVar5 + 1;
    } while ((int)puVar5 < iVar1);
  }
  pcStack_5c = (char *)0x4bdcbf;
  FUN_004bf570(this);
  return;
}


/* ==== 004bdcd0 FUN_004bdcd0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bdcd0(void *this,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int i;
  
  if (*(int *)this == 2) {
    iVar5 = 0;
    i = 0;
    if (0 < *(int *)((int)this + 0x84)) {
      do {
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d0,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
        }
        if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d0,&DAT_0073b1c4,param_2,DAT_0073b1b4);
        }
        if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d0,&DAT_0073b1c4,param_2);
        }
        *(float *)(iVar5 + 0x18 + *(int *)((int)this + 0x80)) =
             ABS(*(float *)(iVar5 + 0x18 + *(int *)((int)this + 0x80))) * _DAT_0073b200 +
             *(float *)(param_2 * 0x48 + 0x34 + DAT_0073b1b0);
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d1,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
        }
        if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d1,&DAT_0073b1c4,param_2,DAT_0073b1b4);
        }
        if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d1,&DAT_0073b1c4,param_2);
        }
        iVar1 = iVar5 + 0x1c;
        iVar2 = iVar5 + 0x1c;
        iVar5 = iVar5 + 0x20;
        *(float *)(iVar2 + *(int *)((int)this + 0x80)) =
             ABS(*(float *)(iVar1 + *(int *)((int)this + 0x80))) * _DAT_0073b204 +
             *(float *)(param_2 * 0x48 + 0x38 + DAT_0073b1b0);
        i = i + 1;
      } while (i < *(int *)((int)this + 0x84));
      return;
    }
  }
  else {
    iVar5 = 0;
    i = 0;
    if (0 < *(int *)((int)this + 0x7c)) {
      do {
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d5,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
        }
        if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d5,&DAT_0073b1c4,param_2,DAT_0073b1b4);
        }
        if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d5,&DAT_0073b1c4,param_2);
        }
        *(float *)(*(int *)((int)this + 0x78) + 0x18 + iVar5) =
             ABS(*(float *)(*(int *)((int)this + 0x78) + 0x18 + iVar5)) * _DAT_0073b200 +
             *(float *)(param_2 * 0x48 + 0x34 + DAT_0073b1b0);
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d6,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
        }
        if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d6,&DAT_0073b1c4,param_2,DAT_0073b1b4);
        }
        if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1d6,&DAT_0073b1c4,param_2);
        }
        pfVar3 = (float *)(*(int *)((int)this + 0x78) + 0x1c + iVar5);
        pfVar4 = (float *)(*(int *)((int)this + 0x78) + 0x1c + iVar5);
        iVar5 = iVar5 + 0x20;
        *pfVar4 = ABS(*pfVar3) * _DAT_0073b204 + *(float *)(param_2 * 0x48 + 0x38 + DAT_0073b1b0);
        i = i + 1;
      } while (i < *(int *)((int)this + 0x7c));
    }
  }
  return;
}


/* ==== 004bdff0 FUN_004bdff0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bdff0(void *this,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int i;
  
  if (*(int *)this == 2) {
    iVar4 = 0;
    i = 0;
    if (0 < *(int *)((int)this + 0x84)) {
      do {
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1df,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
        }
        if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1df,&DAT_0073b1c4,param_2,DAT_0073b1b4);
        }
        if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1df,&DAT_0073b1c4,param_2);
        }
        pfVar3 = (float *)(iVar4 + 0x18 + *(int *)((int)this + 0x80));
        *pfVar3 = *pfVar3 - *(float *)(DAT_0073b1b0 + 0x34 + param_2 * 0x48);
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e0,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
        }
        if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e0,&DAT_0073b1c4,param_2,DAT_0073b1b4);
        }
        if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e0,&DAT_0073b1c4,param_2);
        }
        pfVar3 = (float *)(iVar4 + 0x1c + *(int *)((int)this + 0x80));
        *pfVar3 = *pfVar3 - *(float *)(DAT_0073b1b0 + 0x38 + param_2 * 0x48);
        *(float *)(iVar4 + 0x18 + *(int *)((int)this + 0x80)) =
             ABS(*(float *)(iVar4 + 0x18 + *(int *)((int)this + 0x80))) / _DAT_0073b200;
        iVar1 = iVar4 + 0x1c;
        iVar2 = iVar4 + 0x1c;
        iVar4 = iVar4 + 0x20;
        *(float *)(iVar2 + *(int *)((int)this + 0x80)) =
             ABS(*(float *)(iVar1 + *(int *)((int)this + 0x80))) / _DAT_0073b204;
        i = i + 1;
      } while (i < *(int *)((int)this + 0x84));
      return;
    }
  }
  else {
    iVar4 = 0;
    i = 0;
    if (0 < *(int *)((int)this + 0x7c)) {
      do {
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e6,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
        }
        if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e6,&DAT_0073b1c4,param_2,DAT_0073b1b4);
        }
        if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e6,&DAT_0073b1c4,param_2);
        }
        pfVar3 = (float *)(iVar4 + 0x18 + *(int *)((int)this + 0x78));
        *pfVar3 = *pfVar3 - *(float *)(DAT_0073b1b0 + 0x34 + param_2 * 0x48);
        if (DAT_0073b1bc == 0) {
          FUN_004c4150(s__s__d____T_ARRAY__get_data__s__d_005b0f3c,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e7,&DAT_0073b1c4,DAT_0073b1b4,&DAT_0073b1dd);
        }
        if ((param_2 < 0) || (DAT_0073b1b4 <= param_2)) {
          FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e7,&DAT_0073b1c4,param_2,DAT_0073b1b4);
        }
        if (*(char *)(DAT_0073b1c0 + param_2) == '\0') {
          FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s_D__Work_DX3D_Mesh_cpp_005b2468,
                       0x1e7,&DAT_0073b1c4,param_2);
        }
        pfVar3 = (float *)(iVar4 + 0x1c + *(int *)((int)this + 0x78));
        *pfVar3 = *pfVar3 - *(float *)(DAT_0073b1b0 + 0x38 + param_2 * 0x48);
        *(float *)(iVar4 + 0x18 + *(int *)((int)this + 0x78)) =
             ABS(*(float *)(iVar4 + 0x18 + *(int *)((int)this + 0x78))) / _DAT_0073b200;
        iVar1 = iVar4 + 0x1c;
        iVar2 = iVar4 + 0x1c;
        iVar4 = iVar4 + 0x20;
        *(float *)(iVar2 + *(int *)((int)this + 0x78)) =
             ABS(*(float *)(iVar1 + *(int *)((int)this + 0x78))) / _DAT_0073b204;
        i = i + 1;
      } while (i < *(int *)((int)this + 0x7c));
    }
  }
  return;
}


/* ==== 004be340 FUN_004be340 ==== */

void __thiscall FUN_004be340(void *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_0073b525;
  bVar1 = false;
  if (*(int *)((int)this + 8) == 1) {
    if (DAT_0073b525 != 2) {
      bVar1 = true;
      if (DAT_0073b4cc != 1) {
        FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
      }
      if (DAT_0073b525 != 2) {
        DAT_0073b525 = 2;
        iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,8,2);
        if (iVar2 != 0) {
          uVar3 = FUN_004bb290(iVar2);
          FUN_004c4150(s__s__d_____FILL_MODE__error_setti_005b25ec,s___d3dev_inl_005b1060,0x1d8,
                       uVar3);
        }
      }
    }
  }
  else if ((*(int *)((int)this + 8) == 2) && (DAT_0073b525 != 1)) {
    if (DAT_0073b4cc != 1) {
      FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
    }
    if (DAT_0073b525 != 1) {
      DAT_0073b525 = 1;
      iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,8,1);
      if (iVar2 != 0) {
        uVar3 = FUN_004bb290(iVar2);
        FUN_004c4150(s__s__d_____FILL_MODE__error_setti_005b25ec,s___d3dev_inl_005b1060,0x1d8,uVar3)
        ;
      }
    }
    bVar1 = true;
  }
  if (*(int *)this == 1) {
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,1,*(undefined4 *)((int)this + 0x78),
                       *(undefined4 *)((int)this + 0x7c),*(undefined4 *)((int)this + 0x90),
                       *(undefined4 *)((int)this + 0x94),8);
    if (iVar2 == 0) goto LAB_004be51b;
    if (*(int *)((int)this + 0x9c) == 0) {
      FUN_004c4150(s__s__d____string_is_not_initialis_005969b0,s___str_h_005b1584,0x24);
    }
    uVar3 = *(undefined4 *)((int)this + 0x98);
    uVar4 = FUN_004bb290(iVar2);
    uVar6 = 0x215;
  }
  else {
    if (*(int *)this != 2) goto LAB_004be51b;
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x80),
                       *(undefined4 *)((int)this + 0x84),*(undefined4 *)((int)this + 0x90),
                       *(undefined4 *)((int)this + 0x94),8);
    if (iVar2 == 0) goto LAB_004be51b;
    if (*(int *)((int)this + 0x9c) == 0) {
      FUN_004c4150(s__s__d____string_is_not_initialis_005969b0,s___str_h_005b1584,0x24);
    }
    uVar3 = *(undefined4 *)((int)this + 0x98);
    uVar4 = FUN_004bb290(iVar2);
    uVar6 = 0x221;
  }
  FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b25bc,s_D__Work_DX3D_Mesh_cpp_005b2468,uVar6,
               uVar3,uVar4);
LAB_004be51b:
  if (bVar1) {
    if (DAT_0073b4cc != 1) {
      FUN_004c4150(s__s__d____device_was_not_initiali_005b106c,s___d3dev_h_005b1094,0xd4);
    }
    if (DAT_0073b525 != iVar5) {
      DAT_0073b525 = iVar5;
      iVar5 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,8,iVar5);
      if (iVar5 != 0) {
        uVar3 = FUN_004bb290(iVar5);
        FUN_004c4150(s__s__d_____FILL_MODE__error_setti_005b25ec,s___d3dev_inl_005b1060,0x1d8,uVar3)
        ;
      }
    }
  }
  return;
}


/* ==== 004be590 FUN_004be590 ==== */

undefined4 __thiscall FUN_004be590(void *this,char *str2)

{
  FILE *file;
  uint __ftol_result_2;
  uint __ftol_result;
  uint __ftol_result_3;
  int k;
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int j;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined4 auStack_ac [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 auStack_8c [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 auStack_58 [9];
  undefined4 auStack_34 [13];
  
  FUN_004c1ae0((int)this + 0x98,str2);
  FUN_004c3fa0(s______LOADING_MESH______005b2740);
  FUN_004c3fa0(s_mesh_____s__005b272c,str2);
  file = (FILE *)FUN_004c62c0(str2);
  i = 0;
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____Unable_to_load_object__c_005b26f8,s_D__Work_DX3D_Mesh_cpp_005b2468,0x240
                 ,str2);
  }
  FUN_00558b35();
  if (local_bc < 0) {
    FUN_00558b35(&iStack_c4,&iStack_c4,1,4,file);
  }
  else {
    iStack_c4 = local_bc;
    local_bc = 0;
  }
  FUN_00558b35();
  FUN_004bd600(this,iStack_c4,iStack_c0 * 3);
  FUN_004c3fa0(s_vertices____d_005b26e8,iStack_c4);
  FUN_004c3fa0(s_triangles____d_005b26d8,iStack_c0);
  FUN_004c3fa0(s_load_vertex_data___005b26c4);
  j = 0;
  if (0 < iStack_c4) {
    do {
      if (local_bc == -1) {
        FUN_00558b35();
        iVar3 = *(int *)((int)this + 4);
        puVar1 = auStack_34;
        puVar2 = auStack_8c;
        for (k = 0xc; k != 0; k = k + -1) {
          *puVar2 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
        if (iVar3 == 0) {
          FUN_004c4150(s__s__d____mesh_has_not_been_initi_005b2664,s___mesh_inl_005b24a8,0xb9);
        }
        if (*(int *)this == 1) {
          if ((i < 0) || (*(int *)((int)this + 0x7c) <= j)) {
            FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0xce,j,
                         *(undefined4 *)((int)this + 0x84));
          }
          *(undefined4 *)(i + *(int *)((int)this + 0x78)) = auStack_8c[0];
          *(undefined4 *)(i + 4 + *(int *)((int)this + 0x78)) = auStack_8c[1];
          *(undefined4 *)(i + 8 + *(int *)((int)this + 0x78)) = auStack_8c[2];
          *(undefined4 *)(i + 0xc + *(int *)((int)this + 0x78)) = auStack_8c[3];
          *(undefined4 *)(i + 0x10 + *(int *)((int)this + 0x78)) = uStack_7c;
          *(undefined4 *)(i + 0x14 + *(int *)((int)this + 0x78)) = uStack_78;
          *(undefined4 *)(i + 0x18 + *(int *)((int)this + 0x78)) = uStack_74;
          *(undefined4 *)(i + 0x1c + *(int *)((int)this + 0x78)) = uStack_70;
        }
        else if (*(int *)this == 2) {
          if ((i < 0) || (*(int *)((int)this + 0x84) <= j)) {
            FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0xbf,j,
                         *(undefined4 *)((int)this + 0x84));
          }
          *(undefined4 *)(*(int *)((int)this + 0x80) + i) = auStack_8c[0];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 4 + i) = auStack_8c[1];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 8 + i) = auStack_8c[2];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x18 + i) = uStack_74;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x1c + i) = uStack_70;
          iVar3 = __ftol();
          __ftol_result_2 = __ftol();
          __ftol_result = __ftol();
          __ftol_result_3 = __ftol();
          *(uint *)(*(int *)((int)this + 0x80) + 0x10 + i) =
               ((iVar3 << 8 | __ftol_result_2) << 8 | __ftol_result) << 8 | __ftol_result_3;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x14 + i) = 0;
        }
      }
      else if (local_bc == 0) {
        FUN_00558b35(auStack_58,auStack_58,1,0x21,file);
        iVar3 = *(int *)((int)this + 4);
        puVar1 = auStack_58;
        puVar2 = auStack_ac;
        for (k = 8; k != 0; k = k + -1) {
          *puVar2 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        if (iVar3 == 0) {
          FUN_004c4150(s__s__d____mesh_has_not_been_initi_005b2664,s___mesh_inl_005b24a8,0x95);
        }
        if (*(int *)this == 1) {
          if ((i < 0) || (*(int *)((int)this + 0x7c) <= j)) {
            FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0xa7,j,
                         *(undefined4 *)((int)this + 0x84));
          }
          *(undefined4 *)(i + *(int *)((int)this + 0x78)) = auStack_ac[0];
          *(undefined4 *)(i + 4 + *(int *)((int)this + 0x78)) = auStack_ac[1];
          *(undefined4 *)(i + 8 + *(int *)((int)this + 0x78)) = auStack_ac[2];
          *(undefined4 *)(i + 0xc + *(int *)((int)this + 0x78)) = auStack_ac[3];
          *(undefined4 *)(i + 0x10 + *(int *)((int)this + 0x78)) = uStack_9c;
          *(undefined4 *)(i + 0x14 + *(int *)((int)this + 0x78)) = uStack_98;
          *(undefined4 *)(i + 0x18 + *(int *)((int)this + 0x78)) = uStack_94;
          *(undefined4 *)(i + 0x1c + *(int *)((int)this + 0x78)) = uStack_90;
        }
        else if (*(int *)this == 2) {
          if ((i < 0) || (*(int *)((int)this + 0x84) <= j)) {
            FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0x9b,j,
                         *(undefined4 *)((int)this + 0x84));
          }
          *(undefined4 *)(*(int *)((int)this + 0x80) + i) = auStack_ac[0];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 4 + i) = auStack_ac[1];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 8 + i) = auStack_ac[2];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x18 + i) = uStack_94;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x1c + i) = uStack_90;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x10 + i) = 0xffffff;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x14 + i) = 0;
        }
      }
      else {
        FUN_004c4150(s__s__d____unsupported_version_num_005b2690,s_D__Work_DX3D_Mesh_cpp_005b2468,
                     0x26a,local_bc,str2);
      }
      if ((file->_flag & 0x20) != 0) {
        FUN_004c4150(s__s__d____error_reading_<_s>_005b2644,s_D__Work_DX3D_Mesh_cpp_005b2468,0x26f,
                     str2);
      }
      j = j + 1;
      i = i + 0x20;
    } while (j < iStack_c4);
  }
  FUN_004c3fa0(s___005b2640);
  FUN_004c3fa0(s_loading_triangle_data___005b2624);
  i = 0;
  if (0 < iStack_c0) {
    iVar3 = 0;
    do {
      FUN_00558b35();
      *(undefined2 *)(iVar3 + *(int *)((int)this + 0x90)) = uStack_b8;
      *(undefined2 *)(iVar3 + 2 + *(int *)((int)this + 0x90)) = uStack_b6;
      *(undefined2 *)(iVar3 + 4 + *(int *)((int)this + 0x90)) = uStack_b4;
      if ((file->_flag & 0x20) != 0) {
        FUN_004c4150(s__s__d____error_reading_<_s>_005b2644,s_D__Work_DX3D_Mesh_cpp_005b2468,0x27e,
                     str2);
      }
      i = i + 1;
      iVar3 = iVar3 + 6;
    } while (i < iStack_c0);
  }
  FUN_004c3fa0(s___005b2640);
  FUN_004bf570(this);
  FUN_004c6430(file);
  if (*(int *)this == 2) {
    FUN_004beb10(this);
  }
  return 0;
}


/* ==== 004beb10 FUN_004beb10 ==== */

void __thiscall FUN_004beb10(void *this)

{
  float fVar1;
  int i;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int m;
  int k;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int j;
  float10 fVar7;
  int local_20c;
  int *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  int *operator_new_result;
  int local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [12];
  undefined1 local_180 [12];
  undefined1 auStack_174 [12];
  undefined1 auStack_168 [12];
  undefined1 auStack_15c [12];
  undefined1 auStack_150 [12];
  undefined1 auStack_144 [12];
  undefined1 auStack_138 [12];
  undefined1 auStack_12c [12];
  undefined4 auStack_120 [8];
  undefined4 auStack_100 [8];
  undefined4 auStack_e0 [8];
  undefined4 auStack_c0 [8];
  undefined4 auStack_a0 [8];
  undefined4 auStack_80 [8];
  undefined4 auStack_60 [8];
  undefined4 auStack_40 [8];
  undefined1 auStack_20 [32];
  
  if ((*(int *)((int)this + 0x88) != 0) &&
     (*(int *)((int)this + 0x8c) == *(int *)((int)this + 0x84))) {
    operator_new_result = operator_new(*(int *)((int)this + 0x8c) << 2);
    i = 0;
    if (0 < *(int *)((int)this + 0x8c)) {
      local_200 = 0;
      local_1fc = 0;
      local_1f8 = 0;
      j = 0;
      do {
        puVar6 = (undefined4 *)(j + *(int *)((int)this + 0x88));
        i = i + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        j = j + 0xc;
      } while (i < *(int *)((int)this + 0x8c));
    }
    i = 0;
    piVar4 = operator_new_result;
    if (0 < *(int *)((int)this + 0x8c)) {
      do {
        *piVar4 = 0;
        i = i + 1;
        piVar4 = piVar4 + 1;
      } while (i < *(int *)((int)this + 0x8c));
    }
    if (0 < *(int *)((int)this + 0x94)) {
      local_208 = (int *)0x2;
      local_20c = 4;
      do {
        FUN_004bf8c0(this,s___mesh_inl_005b24a8,0x2e);
        i = (int)local_208 + -2;
        if ((i < 0) || (*(int *)((int)this + 0x94) <= i)) {
          FUN_004c4150(s__s__d____getting_index____d___is_005b24cc,s___mesh_inl_005b24a8,0x32,i,
                       *(undefined4 *)((int)this + 0x7c));
        }
        j = (int)*(short *)(*(int *)((int)this + 0x90) + -4 + local_20c);
        local_1f0 = j;
        FUN_004bf8c0(this,s___mesh_inl_005b24a8,0x2e);
        i = (int)local_208 + -1;
        if ((i < 0) || (*(int *)((int)this + 0x94) <= i)) {
          FUN_004c4150(s__s__d____getting_index____d___is_005b24cc,s___mesh_inl_005b24a8,0x32,i,
                       *(undefined4 *)((int)this + 0x7c));
        }
        i = (int)*(short *)(*(int *)((int)this + 0x90) + -2 + local_20c);
        FUN_004bf8c0(this,s___mesh_inl_005b24a8,0x2e);
        if (((int)local_208 < 0) || (*(int *)((int)this + 0x94) <= (int)local_208)) {
          FUN_004c4150(s__s__d____getting_index____d___is_005b24cc,s___mesh_inl_005b24a8,0x32,
                       local_208,*(undefined4 *)((int)this + 0x7c));
        }
        iVar2 = (int)*(short *)(*(int *)((int)this + 0x90) + local_20c);
        if (*(int *)this != 2) {
          FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
        }
        if (*(int *)((int)this + 4) != 2) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
        }
        if ((j < 0) || (*(int *)((int)this + 0x84) <= j)) {
          FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,j,
                       *(undefined4 *)((int)this + 0x7c));
        }
        k = *(int *)this;
        j = j * 0x20;
        puVar6 = (undefined4 *)(j + *(int *)((int)this + 0x80));
        puVar5 = auStack_120;
        for (m = 8; m != 0; m = m + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        if (k != 2) {
          FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
        }
        if (*(int *)((int)this + 4) != 2) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
        }
        if ((local_1f0 < 0) || (*(int *)((int)this + 0x84) <= local_1f0)) {
          FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,
                       local_1f0,*(undefined4 *)((int)this + 0x7c));
        }
        k = *(int *)this;
        puVar6 = (undefined4 *)(j + *(int *)((int)this + 0x80));
        puVar5 = auStack_60;
        for (m = 8; m != 0; m = m + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        if (k != 2) {
          FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
        }
        if (*(int *)((int)this + 4) != 2) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
        }
        if ((local_1f0 < 0) || (*(int *)((int)this + 0x84) <= local_1f0)) {
          FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,
                       local_1f0,*(undefined4 *)((int)this + 0x7c));
        }
        k = *(int *)this;
        puVar6 = (undefined4 *)(j + *(int *)((int)this + 0x80));
        puVar5 = auStack_80;
        for (m = 8; m != 0; m = m + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        uStack_1ec = auStack_80[0];
        uStack_1e8 = auStack_60[1];
        uStack_1e4 = auStack_120[2];
        if (k != 2) {
          FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
        }
        if (*(int *)((int)this + 4) != 2) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
        }
        if ((i < 0) || (*(int *)((int)this + 0x84) <= i)) {
          FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,i,
                       *(undefined4 *)((int)this + 0x7c));
        }
        j = *(int *)this;
        m = i * 0x20;
        puVar6 = (undefined4 *)(m + *(int *)((int)this + 0x80));
        puVar5 = auStack_100;
        for (k = 8; k != 0; k = k + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        if (j != 2) {
          FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
        }
        if (*(int *)((int)this + 4) != 2) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
        }
        if ((i < 0) || (*(int *)((int)this + 0x84) <= i)) {
          FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,i,
                       *(undefined4 *)((int)this + 0x7c));
        }
        j = *(int *)this;
        puVar6 = (undefined4 *)(m + *(int *)((int)this + 0x80));
        puVar5 = auStack_40;
        for (k = 8; k != 0; k = k + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        if (j != 2) {
          FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
        }
        if (*(int *)((int)this + 4) != 2) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
        }
        if ((i < 0) || (*(int *)((int)this + 0x84) <= i)) {
          FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,i,
                       *(undefined4 *)((int)this + 0x7c));
        }
        j = *(int *)this;
        puVar6 = (undefined4 *)(m + *(int *)((int)this + 0x80));
        puVar5 = auStack_c0;
        for (k = 8; k != 0; k = k + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        uStack_1e0 = auStack_c0[0];
        uStack_1dc = auStack_40[1];
        uStack_1d8 = auStack_100[2];
        if (j != 2) {
          FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
        }
        if (*(int *)((int)this + 4) != 2) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
        }
        if ((iVar2 < 0) || (*(int *)((int)this + 0x84) <= iVar2)) {
          FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,iVar2,
                       *(undefined4 *)((int)this + 0x7c));
        }
        j = *(int *)this;
        puVar6 = (undefined4 *)(iVar2 * 0x20 + *(int *)((int)this + 0x80));
        puVar5 = auStack_a0;
        for (k = 8; k != 0; k = k + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        if (j != 2) {
          FUN_004c4150(s__s__d____mesh_is_not_of_requeste_00597c74,s___mesh_inl_005b24a8,0xe1);
        }
        if (*(int *)((int)this + 4) != 2) {
          FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0xe4);
        }
        if ((iVar2 < 0) || (*(int *)((int)this + 0x84) <= iVar2)) {
          FUN_004c4150(s__s__d____index__d_is_out_of_LVER_00597c0c,s___mesh_inl_005b24a8,0xe7,iVar2,
                       *(undefined4 *)((int)this + 0x7c));
        }
        puVar6 = (undefined4 *)(iVar2 * 0x20 + *(int *)((int)this + 0x80));
        puVar5 = auStack_e0;
        for (j = 8; j != 0; j = j + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar6 = (undefined4 *)FUN_004bfc00(this,auStack_20,iVar2);
        uStack_1d4 = *puVar6;
        uStack_1d0 = auStack_e0[1];
        uStack_1cc = auStack_a0[2];
        puVar6 = (undefined4 *)FUN_004bf480(auStack_138,&uStack_1e0,&uStack_1ec);
        uStack_1c8 = *puVar6;
        uStack_1c4 = puVar6[1];
        uStack_1c0 = puVar6[2];
        puVar6 = (undefined4 *)FUN_004bf480(auStack_15c,&uStack_1d4,&uStack_1ec);
        uStack_1bc = *puVar6;
        uStack_1b8 = puVar6[1];
        uStack_1b4 = puVar6[2];
        puVar6 = (undefined4 *)FUN_004bf480(auStack_144,&uStack_1e0,&uStack_1d4);
        uStack_1b0 = *puVar6;
        uStack_1ac = puVar6[1];
        uStack_1a8 = puVar6[2];
        uVar3 = FUN_004066c0(auStack_174,0,0,0);
        j = FUN_004bf4d0(&uStack_1c8,uVar3);
        if (j == 0) {
          fVar7 = (float10)FUN_0041e120(&uStack_1c8);
          puVar6 = (undefined4 *)FUN_00467320(auStack_150,&uStack_1c8,(float)SQRT(fVar7));
          uStack_198 = *puVar6;
          uStack_194 = puVar6[1];
          uStack_190 = puVar6[2];
          fVar7 = (float10)FUN_0041e120(&uStack_1bc);
          puVar6 = (undefined4 *)FUN_00467320(auStack_168,&uStack_1bc,(float)SQRT(fVar7));
          uStack_1a4 = *puVar6;
          uStack_1a0 = puVar6[1];
          uStack_19c = puVar6[2];
          uVar3 = FUN_004bf510(auStack_18c,&uStack_1a4,&uStack_198);
          fVar7 = (float10)FUN_0041e120(uVar3);
          puVar6 = (undefined4 *)FUN_00467320(local_180,uVar3,(float)SQRT(fVar7));
        }
        else {
          puVar6 = (undefined4 *)FUN_004066c0(auStack_12c,0,0x3f800000,0);
        }
        j = local_1f0;
        local_200 = *puVar6;
        local_1fc = puVar6[1];
        local_1f8 = puVar6[2];
        FUN_004bf420(*(int *)((int)this + 0x88) + local_1f0 * 0xc,&local_200);
        piVar4 = operator_new_result;
        operator_new_result[j] = operator_new_result[j] + 1;
        FUN_004bf420(*(int *)((int)this + 0x88) + i * 0xc,&local_200);
        piVar4[i] = piVar4[i] + 1;
        FUN_004bf420(*(int *)((int)this + 0x88) + iVar2 * 0xc,&local_200);
        piVar4[iVar2] = piVar4[iVar2] + 1;
        i = (int)local_208 + 1;
        local_20c = local_20c + 6;
        local_208 = (int *)((int)local_208 + 3);
      } while (i < *(int *)((int)this + 0x94));
    }
    i = 0;
    if (0 < *(int *)((int)this + 0x8c)) {
      j = 0;
      local_208 = operator_new_result;
      do {
        if (*local_208 != 0) {
          fVar1 = (float)*local_208;
          uVar3 = FUN_004066c0(local_180,fVar1,fVar1,fVar1);
          FUN_004bf450(j + *(int *)((int)this + 0x88),uVar3);
          iVar2 = j + *(int *)((int)this + 0x88);
          fVar7 = (float10)FUN_0041e120(iVar2);
          puVar6 = (undefined4 *)FUN_00467320(auStack_18c,iVar2,(float)SQRT(fVar7));
          puVar5 = (undefined4 *)(j + *(int *)((int)this + 0x88));
          *puVar5 = *puVar6;
          puVar5[1] = puVar6[1];
          puVar5[2] = puVar6[2];
        }
        i = i + 1;
        local_208 = local_208 + 1;
        j = j + 0xc;
      } while (i < *(int *)((int)this + 0x8c));
    }
    FUN_0054b339(operator_new_result);
  }
  return;
}


/* ==== 004bf420 FUN_004bf420 ==== */

void __thiscall FUN_004bf420(void *this,float *param_2)

{
  *(float *)this = *param_2 + *(float *)this;
  *(float *)((int)this + 4) = param_2[1] + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_2[2] + *(float *)((int)this + 8);
  return;
}


/* ==== 004bf450 FUN_004bf450 ==== */

void __thiscall FUN_004bf450(void *this,float *param_2)

{
  *(float *)this = *(float *)this / *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) / param_2[1];
  *(float *)((int)this + 8) = *(float *)((int)this + 8) / param_2[2];
  return;
}


/* ==== 004bf480 FUN_004bf480 ==== */

void FUN_004bf480(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  return;
}


/* ==== 004bf4d0 FUN_004bf4d0 ==== */

undefined4 FUN_004bf4d0(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}


/* ==== 004bf510 FUN_004bf510 ==== */

void FUN_004bf510(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[2];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = *param_2;
  fVar5 = *param_2;
  fVar6 = param_3[1];
  fVar7 = *param_3;
  fVar8 = param_2[1];
  *param_1 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return;
}


/* ==== 004bf570 FUN_004bf570 ==== */

void __thiscall FUN_004bf570(void *this)

{
  if (*(int *)this == 0) {
    FUN_004c4150(s__s__d____error_unknown_mesh_type_005b250c,s_D__Work_DX3D_Mesh_cpp_005b2468,0x2db)
    ;
  }
  if (*(int *)this == 1) {
    FUN_004bf5e0(*(undefined4 *)((int)this + 0x78),*(undefined4 *)((int)this + 0x7c));
  }
  else if (*(int *)this == 2) {
    FUN_004bf5e0(*(undefined4 *)((int)this + 0x80),*(undefined4 *)((int)this + 0x84));
    return;
  }
  return;
}


/* ==== 004bf5d0 FUN_004bf5d0 ==== */

void __thiscall FUN_004bf5d0(void *this)

{
  *(undefined4 *)this = 0;
  return;
}


/* ==== 004bf5e0 FUN_004bf5e0 ==== */

void FUN_004bf5e0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *in_ECX;
  float *pfVar3;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = *param_1;
  fVar1 = param_1[1];
  local_4 = param_1[1];
  pfVar3 = param_1 + 2;
  local_c = param_1[2];
  param_1 = (float *)local_10;
  local_8 = local_c;
  if (0 < param_2) {
    do {
      if (pfVar3[-2] < local_10) {
        local_10 = pfVar3[-2];
      }
      if (pfVar3[-1] < local_4) {
        local_4 = pfVar3[-1];
      }
      if (*pfVar3 < local_8) {
        local_8 = *pfVar3;
      }
      if ((float)param_1 < pfVar3[-2]) {
        param_1 = (float *)pfVar3[-2];
      }
      if (fVar1 < pfVar3[-1]) {
        fVar1 = pfVar3[-1];
      }
      if (local_c < *pfVar3) {
        local_c = *pfVar3;
      }
      pfVar3 = pfVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  in_ECX[8] = fVar1;
  in_ECX[0xb] = fVar1;
  in_ECX[0x14] = fVar1;
  in_ECX[0x17] = fVar1;
  in_ECX[1] = local_10;
  fVar1 = ((float)param_1 - local_10) * 0.5;
  in_ECX[3] = local_8;
  in_ECX[5] = local_4;
  fVar2 = (local_c - local_8) * 0.5;
  in_ECX[2] = local_4;
  in_ECX[7] = param_1;
  in_ECX[4] = param_1;
  in_ECX[10] = local_10;
  in_ECX[0xd] = local_10;
  in_ECX[6] = local_8;
  in_ECX[9] = local_8;
  in_ECX[0xc] = local_8;
  in_ECX[0xf] = local_c;
  in_ECX[0xe] = local_4;
  in_ECX[0x11] = local_4;
  in_ECX[0x10] = param_1;
  in_ECX[0x13] = param_1;
  in_ECX[0x12] = local_c;
  in_ECX[0x15] = local_c;
  in_ECX[0x16] = local_10;
  in_ECX[0x18] = local_c;
  *in_ECX = 1;
  in_ECX[0x1a] = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  return;
}


/* ==== 004bf750 FUN_004bf750 ==== */

void __thiscall FUN_004bf750(void *this,uint size)

{
  uint *operator_new_result;
  void *operator_new_result_2;
  int iVar1;
  int iVar2;
  uint *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f75b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    if (*(int *)((int)this + 0xc) == 1) {
      ExceptionList = &pvStack_c;
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x2d,(int)this + 0x14,
                   *(undefined4 *)((int)this + 4));
      iVar1 = *(int *)this;
      if (iVar1 != 0) {
        FUN_005586c5(iVar1,0xac,*(undefined4 *)(iVar1 + -4),FUN_004bd590);
        FUN_0054b339(iVar1 + -4);
      }
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
  operator_new_result = operator_new(size * 0xac + 4);
  uStack_4 = 0;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0xac,size,FUN_004bd500,FUN_004bd590);
  }
  uStack_4 = 0xffffffff;
  *(uint **)this = puVar3;
  *(uint *)((int)this + 4) = size;
  *(undefined4 *)((int)this + 8) = 0;
  operator_new_result_2 = operator_new(size);
  *(void **)((int)this + 0x10) = operator_new_result_2;
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
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004bf8c0 FUN_004bf8c0 ==== */

void __thiscall FUN_004bf8c0(void *this,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)((int)this + 4) == 0) {
    FUN_004c4150(s__s__d____mesh_has_not_been_initi_005b2664,param_2,param_3);
  }
  return;
}


/* ==== 004bf8f0 FUN_004bf8f0 ==== */

void __thiscall FUN_004bf8f0(void *this,int param_2,undefined2 param_3)

{
  if (*(int *)((int)this + 4) == 0) {
    FUN_004c4150(s__s__d____mesh_has_not_been_initi_005b2664,s___mesh_inl_005b24a8,0x3c);
  }
  if ((-1 < param_2) && (param_2 < *(int *)((int)this + 0x94))) {
    *(undefined2 *)(*(int *)((int)this + 0x90) + param_2 * 2) = param_3;
    return;
  }
  FUN_004c4150(s__s__d____getting_index____d___is_005b24cc,s___mesh_inl_005b24a8,0x40,param_2,
               *(undefined4 *)((int)this + 0x7c));
  *(undefined2 *)(*(int *)((int)this + 0x90) + param_2 * 2) = param_3;
  return;
}


/* ==== 004bf960 FUN_004bf960 ==== */

void __thiscall FUN_004bf960(void *this,undefined4 *param_2,int param_3)

{
  int i;
  undefined4 *puVar1;
  
  if (*(int *)this != 1) {
    FUN_004c4150(s__s__d____mesh_is_not_of_requeste_005afd94,s___mesh_inl_005b24a8,0x4b);
  }
  if (*(int *)((int)this + 4) != 1) {
    FUN_004c4150(s__s__d____vertices_were_not__yet__00597c44,s___mesh_inl_005b24a8,0x4e);
  }
  if ((param_3 < 0) || (*(int *)((int)this + 0x7c) <= param_3)) {
    FUN_004c4150(s__s__d____index__d_is_out_of_VERT_005996e4,s___mesh_inl_005b24a8,0x51,param_3,
                 *(undefined4 *)((int)this + 0x7c));
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x78) + param_3 * 0x20);
  for (i = 8; i != 0; i = i + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* ==== 004bf9e0 FUN_004bf9e0 ==== */

void __thiscall
FUN_004bf9e0(void *this,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  if (*(int *)((int)this + 4) == 0) {
    FUN_004c4150(s__s__d____mesh_has_not_been_initi_005b2664,s___mesh_inl_005b24a8,0x5a);
  }
  if (*(int *)this == 1) {
    if ((param_2 < 0) || (*(int *)((int)this + 0x7c) <= param_2)) {
      FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0x6c,param_2,
                   *(undefined4 *)((int)this + 0x84));
    }
    puVar1 = &param_3;
    puVar2 = (undefined4 *)(*(int *)((int)this + 0x78) + param_2 * 0x20);
    for (i = 8; i != 0; i = i + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  else if (*(int *)this == 2) {
    if ((param_2 < 0) || (*(int *)((int)this + 0x84) <= param_2)) {
      FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0x60,param_2,
                   *(undefined4 *)((int)this + 0x84));
    }
    param_2 = param_2 * 0x20;
    *(undefined4 *)(*(int *)((int)this + 0x80) + param_2) = param_3;
    *(undefined4 *)(*(int *)((int)this + 0x80) + 4 + param_2) = param_4;
    *(undefined4 *)(*(int *)((int)this + 0x80) + 8 + param_2) = param_5;
    *(undefined4 *)(*(int *)((int)this + 0x80) + 0x18 + param_2) = in_stack_00000020;
    *(undefined4 *)(*(int *)((int)this + 0x80) + 0x1c + param_2) = in_stack_00000024;
    *(undefined4 *)(*(int *)((int)this + 0x80) + 0x10 + param_2) = 0xffffff;
    *(undefined4 *)(*(int *)((int)this + 0x80) + 0x14 + param_2) = 0;
    return;
  }
  return;
}


/* ==== 004bfaf0 FUN_004bfaf0 ==== */

void __thiscall
FUN_004bfaf0(void *this,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  if (*(int *)((int)this + 4) == 0) {
    FUN_004c4150(s__s__d____mesh_has_not_been_initi_005b2664,s___mesh_inl_005b24a8,0x77);
  }
  if (*(int *)this == 1) {
    if ((param_2 < 0) || (*(int *)((int)this + 0x7c) <= param_2)) {
      FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0x83,param_2,
                   *(undefined4 *)((int)this + 0x84));
    }
    param_2 = param_2 * 0x20;
    *(undefined4 *)(*(int *)((int)this + 0x78) + param_2) = param_3;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 4 + param_2) = param_4;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 8 + param_2) = param_5;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0xc + param_2) = param_3;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0x10 + param_2) = param_4;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0x14 + param_2) = param_5;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0x18 + param_2) = in_stack_00000020;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0x1c + param_2) = in_stack_00000024;
  }
  else if (*(int *)this == 2) {
    if ((param_2 < 0) || (*(int *)((int)this + 0x84) <= param_2)) {
      FUN_004c4150(s__s__d____error__d_out_of_mesh_LV_005afd54,s___mesh_inl_005b24a8,0x7d,param_2,
                   *(undefined4 *)((int)this + 0x84));
    }
    puVar1 = &param_3;
    puVar2 = (undefined4 *)(*(int *)((int)this + 0x80) + param_2 * 0x20);
    for (i = 8; i != 0; i = i + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    return;
  }
  return;
}


