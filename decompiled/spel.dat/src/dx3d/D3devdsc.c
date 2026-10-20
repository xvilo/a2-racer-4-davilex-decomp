/* spel.dat — dx3d/D3devdsc.cpp: 19 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c0ff0 FUN_004c0ff0 ==== */

void FUN_004c0ff0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar1;
  
  puVar1 = in_ECX;
  for (i = 0x33; i != 0; i = i + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = in_ECX + 0x33;
  for (i = 0x33; i != 0; i = i + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  in_ECX[0x66] = 1;
  return;
}


/* ==== 004c1030 FUN_004c1030 ==== */

bool FUN_004c1030(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) != 0;
}


/* ==== 004c1040 FUN_004c1040 ==== */

undefined4 FUN_004c1040(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x31);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 != 0) {
    return *(undefined4 *)(in_ECX + 0xac);
  }
  return *(undefined4 *)(in_ECX + 0x178);
}


/* ==== 004c1080 FUN_004c1080 ==== */

undefined4 FUN_004c1080(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x3c);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 != 0) {
    return *(undefined4 *)(in_ECX + 0xb4);
  }
  return *(undefined4 *)(in_ECX + 0x180);
}


/* ==== 004c10c0 FUN_004c10c0 ==== */

undefined4 FUN_004c10c0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x48);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 != 0) {
    return *(undefined4 *)(in_ECX + 0xb0);
  }
  return *(undefined4 *)(in_ECX + 0x17c);
}


/* ==== 004c1100 FUN_004c1100 ==== */

undefined4 FUN_004c1100(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x53);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 != 0) {
    return *(undefined4 *)(in_ECX + 0xb8);
  }
  return *(undefined4 *)(in_ECX + 0x184);
}


/* ==== 004c1140 FUN_004c1140 ==== */

uint FUN_004c1140(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x5f);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 2) != 0) {
      return *(uint *)(in_ECX + 0xd8) & 0x100;
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 2) != 0) {
    return *(uint *)(in_ECX + 0xc) & 0x100;
  }
  return 0xffffffff;
}


/* ==== 004c11a0 FUN_004c11a0 ==== */

uint FUN_004c11a0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x6f);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 2) != 0) {
      return *(uint *)(in_ECX + 0xd8) & 0x200;
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 2) != 0) {
    return *(uint *)(in_ECX + 0xc) & 0x200;
  }
  return 0xffffffff;
}


/* ==== 004c1200 FUN_004c1200 ==== */

undefined4 FUN_004c1200(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x7f);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 0x10) != 0) {
      return *(undefined4 *)(in_ECX + 0xe4);
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 0x10) != 0) {
    return *(undefined4 *)(in_ECX + 0x18);
  }
  return 0xffffffff;
}


/* ==== 004c1250 FUN_004c1250 ==== */

uint FUN_004c1250(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x9f);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 1) != 0) {
      return (uint)(*(int *)(in_ECX + 0xd4) == 2);
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 1) != 0) {
    return (uint)(*(int *)(in_ECX + 8) == 2);
  }
  return 0xffffffff;
}


/* ==== 004c12b0 FUN_004c12b0 ==== */

undefined4 FUN_004c12b0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xb1);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(uint *)(in_ECX + 0xd0) & 0x100) != 0) {
      return *(undefined4 *)(in_ECX + 0x16c);
    }
  }
  else if ((*(uint *)(in_ECX + 4) & 0x100) != 0) {
    return *(undefined4 *)(in_ECX + 0xa0);
  }
  return 0xffffffff;
}


/* ==== 004c1310 FUN_004c1310 ==== */

uint FUN_004c1310(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xc3);
  }
  if ((int)param_1 < 0x101) {
    if (param_1 == 0x100) goto LAB_004c13a9;
    switch(param_1) {
    case 8:
      param_1 = 0x800;
      break;
    default:
      goto switchD_004c1351_caseD_9;
    case 0x10:
      param_1 = 0x400;
      break;
    case 0x18:
      param_1 = 0x200;
      break;
    case 0x20:
      param_1 = 0x100;
    }
  }
  else {
    if (((param_1 == 0x200) || (param_1 == 0x400)) || (param_1 == 0x800)) goto LAB_004c13a9;
switchD_004c1351_caseD_9:
    FUN_004c4150(s__s__d____unknown_render_bitdepth_005b2cf4,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xd9,param_1);
  }
LAB_004c13a9:
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 0x80) != 0) {
      return *(uint *)(in_ECX + 0x168) & param_1;
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 0x80) != 0) {
    return *(uint *)(in_ECX + 0x9c) & param_1;
  }
  return 0xffffffff;
}


/* ==== 004c1420 FUN_004c1420 ==== */

undefined4 FUN_004c1420(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xea);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 8) != 0) {
      return *(undefined4 *)(in_ECX + 0xf4);
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 8) != 0) {
    return *(undefined4 *)(in_ECX + 0x28);
  }
  return 0xffffffff;
}


/* ==== 004c1470 FUN_004c1470 ==== */

uint FUN_004c1470(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xfa);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 8) != 0) {
      return *(uint *)(in_ECX + 0xec) & 4;
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 8) != 0) {
    return *(uint *)(in_ECX + 0x20) & 4;
  }
  return 0xffffffff;
}


/* ==== 004c14d0 FUN_004c14d0 ==== */

uint FUN_004c14d0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x10a);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 8) != 0) {
      return *(uint *)(in_ECX + 0xec) & 8;
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 8) != 0) {
    return *(uint *)(in_ECX + 0x20) & 8;
  }
  return 0xffffffff;
}


/* ==== 004c1530 FUN_004c1530 ==== */

uint FUN_004c1530(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x11a);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 8) != 0) {
      return *(uint *)(in_ECX + 0xec) & 1;
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 8) != 0) {
    return *(uint *)(in_ECX + 0x20) & 1;
  }
  return 0xffffffff;
}


/* ==== 004c1590 FUN_004c1590 ==== */

uint FUN_004c1590(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x12a);
  }
  iVar1 = FUN_004c1030();
  if (iVar1 == 0) {
    if ((*(byte *)(in_ECX + 0xd0) & 8) != 0) {
      return *(uint *)(in_ECX + 0xec) & 2;
    }
  }
  else if ((*(byte *)(in_ECX + 4) & 8) != 0) {
    return *(uint *)(in_ECX + 0x20) & 2;
  }
  return 0xffffffff;
}


/* ==== 004c15f0 FUN_004c15f0 ==== */

void FUN_004c15f0(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_004c3fa0(s______Device_description______005b2f80);
  iVar1 = FUN_004c1250();
  if (iVar1 == 0) {
    iVar1 = FUN_004c1030();
    if (iVar1 == 0) {
      pcVar7 = s_Type___SOFTWARE_RAMP_driver_005b2ed8;
    }
    else {
      pcVar7 = s_Type___HARDWARE_RAMP_driver_005b2f04;
    }
  }
  else {
    iVar1 = FUN_004c1030();
    if (iVar1 == 0) {
      pcVar7 = s_Type___SOFTWARE_RGB_driver_005b2f30;
    }
    else {
      pcVar7 = s_Type___HARDWARE_RGB_driver_005b2f58;
    }
  }
  FUN_004c3fa0(pcVar7);
  iVar1 = FUN_004c1310(0x20);
  pcVar7 = s_32_bpp_005b2ed0;
  if (iVar1 == 0) {
    pcVar7 = s___005b159c;
  }
  iVar1 = FUN_004c1310(0x18);
  pcVar5 = s_24_bpp_005b2ec8;
  if (iVar1 == 0) {
    pcVar5 = s___005b2ec4;
  }
  iVar1 = FUN_004c1310(0x10);
  pcVar6 = s_16_bpp_005b2ebc;
  if (iVar1 == 0) {
    pcVar6 = s___005b2ec4;
  }
  iVar1 = FUN_004c1310(8);
  pcVar2 = s_8_bpp_005b2eb4;
  if (iVar1 == 0) {
    pcVar2 = s___005b2ec4;
  }
  FUN_004c3fa0(s_Render_bitdepths____s__s__s__s_005b2e94,pcVar2,pcVar6,pcVar5,pcVar7);
  uVar3 = FUN_004c12b0();
  FUN_004c3fa0(s_Zbuffer_bitdepth____d_bpp_005b2e78,uVar3);
  FUN_004c3fa0(s______Light_information______005b2e58);
  uVar3 = FUN_004c1420();
  FUN_004c3fa0(s_Maximum_lights____d_005b2e40,uVar3);
  FUN_004c3fa0(s_Allowed_types___005b2e2c);
  iVar1 = FUN_004c1590();
  if (iVar1 != 0) {
    FUN_004c3fa0(s_spot_005b2e24);
  }
  iVar1 = FUN_004c1530();
  if (iVar1 != 0) {
    FUN_004c3fa0(s___point_005b2e1c);
  }
  iVar1 = FUN_004c14d0();
  if (iVar1 != 0) {
    FUN_004c3fa0(s___parallel_005b2e10);
  }
  iVar1 = FUN_004c1470();
  if (iVar1 == 0) {
    pcVar7 = s_lights_005b2df0;
  }
  else {
    pcVar7 = s___directional_lights_005b2df8;
  }
  FUN_004c3fa0(pcVar7);
  FUN_004c3fa0(s______Texture_information______005b2dd0);
  iVar1 = FUN_004c1140();
  if (iVar1 != 0) {
    FUN_004c3fa0(s_Texture_memory___SYSTEM_005b2db4);
  }
  iVar1 = FUN_004c11a0();
  if (iVar1 != 0) {
    FUN_004c3fa0(s_Texture_memory___VIDEO_005b2d98);
  }
  uVar3 = FUN_004c10c0();
  uVar3 = FUN_004c1040(uVar3);
  FUN_004c3fa0(s_Min_texture_size_____d__d__005b2d7c,uVar3);
  uVar3 = FUN_004c1100();
  uVar3 = FUN_004c1080(uVar3);
  FUN_004c3fa0(s_Max_texture_size_____d__d__005b2d60,uVar3);
  FUN_004c3fa0(s______Miscellaneous______005b2d44);
  iVar1 = FUN_004c1200();
  ppuVar4 = &PTR_DAT_005b2d40;
  if (iVar1 == 0) {
    ppuVar4 = (undefined **)s_no_005b2d3c;
  }
  FUN_004c3fa0(s_Clipping____s_005b2d24,ppuVar4);
  return;
}


/* ==== 004c1810 FUN_004c1810 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1810(void)

{
  DAT_0073b79c = 0;
  _strncpy(&DAT_0073b7a4,s_draw_order_005b2fac,0x19);
  _strncpy(&DAT_0073b7bd,s_draw_info_t_005b2fa0,0x19);
  if (DAT_0073b79c != 0) {
    if (DAT_0073b79c == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_0073b7bd,&DAT_0073b7a4,
                   DAT_0073b794);
      FUN_0054b339(DAT_0073b790);
    }
    if (DAT_0073b79c != 0) {
      FUN_0054b339(DAT_0073b7a0);
      DAT_0073b79c = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b790 = 0;
  DAT_0073b794 = 0;
  _DAT_0073b798 = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,&DAT_0073b7bd,&DAT_0073b7a4,0);
  DAT_0073b7a0 = 0;
  DAT_0073b79c = 0;
  return;
}


