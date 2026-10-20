/* spel.dat — dx3d/D3dinfo.cpp: 12 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c2a40 FUN_004c2a40 ==== */

void FUN_004c2a40(void)

{
  FUN_004c1e10();
  return;
}


/* ==== 004c2a50 FUN_004c2a50 ==== */

int FUN_004c2a50(void)

{
  int iVar1;
  
  iVar1 = DAT_0073b82e;
  if (DAT_0073b7e4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b7ec,DAT_0073b7dc,&DAT_0073b805);
  }
  if ((iVar1 < 0) || (DAT_0073b7dc <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b7ec,iVar1,DAT_0073b7dc);
  }
  if (*(char *)(DAT_0073b7e8 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b7ec,iVar1);
  }
  return iVar1 * 0xb0 + 0x48 + DAT_0073b7d8;
}


/* ==== 004c2af0 FUN_004c2af0 ==== */

undefined4 FUN_004c2af0(void)

{
  int iVar1;
  
  iVar1 = DAT_0073b82e;
  if (DAT_0073b7e4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1b1,
                 &DAT_0073b7ec,DAT_0073b7dc,&DAT_0073b805);
  }
  if ((iVar1 < 0) || (DAT_0073b7dc <= iVar1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1b5,
                 &DAT_0073b7ec,iVar1,DAT_0073b7dc);
  }
  if (*(char *)(DAT_0073b7e8 + iVar1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1b9,
                 &DAT_0073b7ec,iVar1);
  }
  return *(undefined4 *)(iVar1 * 0xb0 + 0x6c + DAT_0073b7d8);
}


/* ==== 004c2b90 FUN_004c2b90 ==== */

void FUN_004c2b90(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    DAT_0073b82e = DAT_0073b81e;
    FUN_004c3fa0(s_TXF_4BPP_RAMP_selected____d_005b334c,DAT_0073b81e);
    return;
  case 2:
    DAT_0073b82e = DAT_0073b822;
    FUN_004c3fa0(s_TXF_8BPP_RAMP_selected____d_005b332c,DAT_0073b822);
    return;
  case 3:
    DAT_0073b82e = DAT_0073b82a;
    FUN_004c3fa0(s_TXF_16BPP_RGB_selected____d_005b330c,DAT_0073b82a);
    return;
  case 4:
    DAT_0073b82e = DAT_0073b826;
    FUN_004c3fa0(s_TXF_16BPP_ALPHA_selected____d_005b32ec,DAT_0073b826);
    return;
  default:
    FUN_004c4150(s__s__d____Illegal_texture_format_t_005b32c4);
    return;
  }
}


/* ==== 004c2c30 FUN_004c2c30 ==== */

int FUN_004c2c30(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[3] == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1c4,in_ECX + 5
                 ,in_ECX[1],(int)in_ECX + 0x2d);
  }
  if ((param_1 < 0) || (in_ECX[1] <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1c8,in_ECX + 5
                 ,param_1,in_ECX[1]);
  }
  if (*(char *)(in_ECX[4] + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1cc,in_ECX + 5
                 ,param_1);
  }
  return param_1 * 0xb0 + *in_ECX;
}


/* ==== 004c2cd0 FUN_004c2cd0 ==== */

int FUN_004c2cd0(int param_1)

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
  return param_1 * 0xb0 + *in_ECX;
}


/* ==== 004c2d70 FUN_004c2d70 ==== */

void FUN_004c2d70(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f7e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c0fc0();
  local_4 = 0;
  FUN_004c1ab0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004c1ab0();
  *(undefined4 *)(in_ECX + 0x1d0) = 0;
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 004c2de0 FUN_004c2de0 ==== */

void FUN_004c2de0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056f806;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004c1ac0();
  local_4 = local_4 & 0xffffff00;
  FUN_004c1ac0();
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return;
}


/* ==== 004c31f0 FUN_004c31f0 ==== */

void FUN_004c31f0(uint size)

{
  int *_Dest;
  char *_Dest_00;
  uint *puVar1;
  void *operator_new_result;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f823;
  pvStack_c = ExceptionList;
  _Dest = in_ECX + 5;
  ExceptionList = &pvStack_c;
  in_ECX[3] = 0;
  _strncpy((char *)_Dest,s_m_d3d_drv_info_005b3398,0x19);
  _Dest_00 = (char *)((int)in_ECX + 0x2d);
  _strncpy(_Dest_00,s_c_d3d_drv_info_005b3388,0x19);
  if (in_ECX[3] != 0) {
    if (in_ECX[3] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,_Dest_00,_Dest,in_ECX[1]);
      iVar3 = *in_ECX;
      if (iVar3 != 0) {
        FUN_005586c5(iVar3,0x1d8,*(undefined4 *)(iVar3 + -4),FUN_004c2de0);
        FUN_0054b339((undefined4 *)(iVar3 + -4));
      }
    }
    if (in_ECX[3] != 0) {
      FUN_0054b339(in_ECX[4]);
      in_ECX[3] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,_Dest_00,_Dest,0);
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  local_4 = 0;
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,s___array_hpp_005b1044,0x107,_Dest_00,
                 _Dest,size);
  }
  puVar1 = operator_new(size * 0x1d8 + 4);
  local_4._0_1_ = 1;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = size;
    puVar1 = puVar1 + 1;
    FUN_00558643(puVar1,0x1d8,size,FUN_004c2d70,FUN_004c2de0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *in_ECX = (int)puVar1;
  in_ECX[1] = size;
  in_ECX[2] = 0;
  operator_new_result = operator_new(size);
  in_ECX[4] = (int)operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,_Dest_00,_Dest,in_ECX[1]);
  in_ECX[3] = 1;
  iVar3 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar3 + 1;
      *(undefined1 *)(iVar3 + in_ECX[4]) = 0;
      iVar3 = iVar2;
    } while (iVar2 < (int)size);
  }
  *(undefined4 *)((int)in_ECX + 0x46) = 0;
  *(undefined4 *)((int)in_ECX + 0x4a) = 0;
  FUN_004c3fa0(s_______Enumerating_Devices_START___005b3418);
  iVar3 = (**(code **)(*DAT_0073b778 + 0xc))(DAT_0073b778,&LAB_004c2e40);
  if (iVar3 != 0) {
    uVar4 = FUN_004bb290(iVar3);
    FUN_004c4150(s__s__d____D3DError_EnumDevice_____005b3068,s_D__Work_DX3D_D3dinfo_cpp_005b336c,
                 0x60,uVar4);
  }
  FUN_004c3fa0(s_______Enumerating_Devices_EINDE___005b33f0);
  ExceptionList = unaff_EBX;
  return;
}


/* ==== 004c33f0 FUN_004c33f0 ==== */

void FUN_004c33f0(void)

{
  int iVar1;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056f838;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (in_ECX[3] == 1) {
    ExceptionList = &local_c;
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,in_ECX[1]
                );
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
      FUN_005586c5(iVar1,0x1d8,*(undefined4 *)(iVar1 + -4),FUN_004c2de0);
      FUN_0054b339(iVar1 + -4);
    }
  }
  if (in_ECX[3] != 0) {
    FUN_0054b339(in_ECX[4]);
    in_ECX[3] = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  local_4 = 0xffffffff;
  if (in_ECX[3] == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,in_ECX[1]
                );
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
      FUN_005586c5(iVar1,0x1d8,*(undefined4 *)(iVar1 + -4),FUN_004c2de0);
      FUN_0054b339(iVar1 + -4);
    }
  }
  if (in_ECX[3] != 0) {
    FUN_0054b339(in_ECX[4]);
    in_ECX[3] = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  ExceptionList = local_c;
  return;
}


/* ==== 004c3510 FUN_004c3510 ==== */

void FUN_004c3510(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[3] == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,in_ECX[1]
                );
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
      FUN_005586c5(iVar1,0x1d8,*(undefined4 *)(iVar1 + -4),FUN_004c2de0);
      FUN_0054b339(iVar1 + -4);
    }
  }
  if (in_ECX[3] != 0) {
    FUN_0054b339(in_ECX[4]);
    in_ECX[3] = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


/* ==== 004c3590 FUN_004c3590 ==== */

int FUN_004c3590(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[3] == 0) {
    FUN_004c4150(s__s__d____T_ARRAY______s__d__of_t_005b1008,s___array_hpp_005b1044,0x1c4,in_ECX + 5
                 ,in_ECX[1],(int)in_ECX + 0x2d);
  }
  if ((param_1 < 0) || (in_ECX[1] <= param_1)) {
    FUN_004c4150(s__s__d____out_of_boundaries__s__d_005b0fc8,s___array_hpp_005b1044,0x1c8,in_ECX + 5
                 ,param_1,in_ECX[1]);
  }
  if (*(char *)(in_ECX[4] + param_1) == '\0') {
    FUN_004c4150(s__s__d____array_element_not_regis_005b0f98,s___array_hpp_005b1044,0x1cc,in_ECX + 5
                 ,param_1);
  }
  return *in_ECX + param_1 * 0x1d8;
}


