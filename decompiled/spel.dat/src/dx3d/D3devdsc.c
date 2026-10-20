/* spel.dat — dx3d/D3devdsc.cpp: 19 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c0ff0 FUN_004c0ff0 ==== */

void __thiscall FUN_004c0ff0(void *this,undefined4 *param_2,undefined4 *param_3)

{
  int i;
  undefined4 *puVar1;
  
  puVar1 = this;
  for (i = 0x33; i != 0; i = i + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)((int)this + 0xcc);
  for (i = 0x33; i != 0; i = i + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)((int)this + 0x198) = 1;
  return;
}


/* ==== 004c1030 FUN_004c1030 ==== */

bool __thiscall FUN_004c1030(void *this)

{
  return *(int *)((int)this + 4) != 0;
}


/* ==== 004c1040 FUN_004c1040 ==== */

undefined4 __thiscall FUN_004c1040(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x31);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 != 0) {
    return *(undefined4 *)((int)this + 0xac);
  }
  return *(undefined4 *)((int)this + 0x178);
}


/* ==== 004c1080 FUN_004c1080 ==== */

undefined4 __thiscall FUN_004c1080(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x3c);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 != 0) {
    return *(undefined4 *)((int)this + 0xb4);
  }
  return *(undefined4 *)((int)this + 0x180);
}


/* ==== 004c10c0 FUN_004c10c0 ==== */

undefined4 __thiscall FUN_004c10c0(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x48);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 != 0) {
    return *(undefined4 *)((int)this + 0xb0);
  }
  return *(undefined4 *)((int)this + 0x17c);
}


/* ==== 004c1100 FUN_004c1100 ==== */

undefined4 __thiscall FUN_004c1100(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x53);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 != 0) {
    return *(undefined4 *)((int)this + 0xb8);
  }
  return *(undefined4 *)((int)this + 0x184);
}


/* ==== 004c1140 FUN_004c1140 ==== */

uint __thiscall FUN_004c1140(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x5f);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 2) != 0) {
      return *(uint *)((int)this + 0xd8) & 0x100;
    }
  }
  else if ((*(byte *)((int)this + 4) & 2) != 0) {
    return *(uint *)((int)this + 0xc) & 0x100;
  }
  return 0xffffffff;
}


/* ==== 004c11a0 FUN_004c11a0 ==== */

uint __thiscall FUN_004c11a0(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x6f);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 2) != 0) {
      return *(uint *)((int)this + 0xd8) & 0x200;
    }
  }
  else if ((*(byte *)((int)this + 4) & 2) != 0) {
    return *(uint *)((int)this + 0xc) & 0x200;
  }
  return 0xffffffff;
}


/* ==== 004c1200 FUN_004c1200 ==== */

undefined4 __thiscall FUN_004c1200(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x7f);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 0x10) != 0) {
      return *(undefined4 *)((int)this + 0xe4);
    }
  }
  else if ((*(byte *)((int)this + 4) & 0x10) != 0) {
    return *(undefined4 *)((int)this + 0x18);
  }
  return 0xffffffff;
}


/* ==== 004c1250 FUN_004c1250 ==== */

uint __thiscall FUN_004c1250(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x9f);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 1) != 0) {
      return (uint)(*(int *)((int)this + 0xd4) == 2);
    }
  }
  else if ((*(byte *)((int)this + 4) & 1) != 0) {
    return (uint)(*(int *)((int)this + 8) == 2);
  }
  return 0xffffffff;
}


/* ==== 004c12b0 FUN_004c12b0 ==== */

undefined4 __thiscall FUN_004c12b0(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xb1);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(uint *)((int)this + 0xd0) & 0x100) != 0) {
      return *(undefined4 *)((int)this + 0x16c);
    }
  }
  else if ((*(uint *)((int)this + 4) & 0x100) != 0) {
    return *(undefined4 *)((int)this + 0xa0);
  }
  return 0xffffffff;
}


/* ==== 004c1310 FUN_004c1310 ==== */

uint __thiscall FUN_004c1310(void *this,uint param_2)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xc3);
  }
  if ((int)param_2 < 0x101) {
    if (param_2 == 0x100) goto LAB_004c13a9;
    switch(param_2) {
    case 8:
      param_2 = 0x800;
      break;
    default:
      goto switchD_004c1351_caseD_9;
    case 0x10:
      param_2 = 0x400;
      break;
    case 0x18:
      param_2 = 0x200;
      break;
    case 0x20:
      param_2 = 0x100;
    }
  }
  else {
    if (((param_2 == 0x200) || (param_2 == 0x400)) || (param_2 == 0x800)) goto LAB_004c13a9;
switchD_004c1351_caseD_9:
    FUN_004c4150(s__s__d____unknown_render_bitdepth_005b2cf4,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xd9,param_2);
  }
LAB_004c13a9:
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 0x80) != 0) {
      return *(uint *)((int)this + 0x168) & param_2;
    }
  }
  else if ((*(byte *)((int)this + 4) & 0x80) != 0) {
    return *(uint *)((int)this + 0x9c) & param_2;
  }
  return 0xffffffff;
}


/* ==== 004c1420 FUN_004c1420 ==== */

undefined4 __thiscall FUN_004c1420(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xea);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 8) != 0) {
      return *(undefined4 *)((int)this + 0xf4);
    }
  }
  else if ((*(byte *)((int)this + 4) & 8) != 0) {
    return *(undefined4 *)((int)this + 0x28);
  }
  return 0xffffffff;
}


/* ==== 004c1470 FUN_004c1470 ==== */

uint __thiscall FUN_004c1470(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0xfa);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 8) != 0) {
      return *(uint *)((int)this + 0xec) & 4;
    }
  }
  else if ((*(byte *)((int)this + 4) & 8) != 0) {
    return *(uint *)((int)this + 0x20) & 4;
  }
  return 0xffffffff;
}


/* ==== 004c14d0 FUN_004c14d0 ==== */

uint __thiscall FUN_004c14d0(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x10a);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 8) != 0) {
      return *(uint *)((int)this + 0xec) & 8;
    }
  }
  else if ((*(byte *)((int)this + 4) & 8) != 0) {
    return *(uint *)((int)this + 0x20) & 8;
  }
  return 0xffffffff;
}


/* ==== 004c1530 FUN_004c1530 ==== */

uint __thiscall FUN_004c1530(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x11a);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 8) != 0) {
      return *(uint *)((int)this + 0xec) & 1;
    }
  }
  else if ((*(byte *)((int)this + 4) & 8) != 0) {
    return *(uint *)((int)this + 0x20) & 1;
  }
  return 0xffffffff;
}


/* ==== 004c1590 FUN_004c1590 ==== */

uint __thiscall FUN_004c1590(void *this)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x198) != 1) {
    FUN_004c4150(s__s__d____error_description_is_no_005b2ca8,s_D__Work_DX3D_D3devdsc_cpp_005b2cd8,
                 0x12a);
  }
  iVar1 = FUN_004c1030(this);
  if (iVar1 == 0) {
    if ((*(byte *)((int)this + 0xd0) & 8) != 0) {
      return *(uint *)((int)this + 0xec) & 2;
    }
  }
  else if ((*(byte *)((int)this + 4) & 8) != 0) {
    return *(uint *)((int)this + 0x20) & 2;
  }
  return 0xffffffff;
}


/* ==== 004c15f0 FUN_004c15f0 ==== */

void __thiscall FUN_004c15f0(void *this)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_004c3fa0(s______Device_description______005b2f80);
  iVar1 = FUN_004c1250(this);
  if (iVar1 == 0) {
    iVar1 = FUN_004c1030(this);
    if (iVar1 == 0) {
      pcVar7 = s_Type___SOFTWARE_RAMP_driver_005b2ed8;
    }
    else {
      pcVar7 = s_Type___HARDWARE_RAMP_driver_005b2f04;
    }
  }
  else {
    iVar1 = FUN_004c1030(this);
    if (iVar1 == 0) {
      pcVar7 = s_Type___SOFTWARE_RGB_driver_005b2f30;
    }
    else {
      pcVar7 = s_Type___HARDWARE_RGB_driver_005b2f58;
    }
  }
  FUN_004c3fa0(pcVar7);
  iVar1 = FUN_004c1310(this,0x20);
  pcVar7 = s_32_bpp_005b2ed0;
  if (iVar1 == 0) {
    pcVar7 = s___005b159c;
  }
  iVar1 = FUN_004c1310(this,0x18);
  pcVar5 = s_24_bpp_005b2ec8;
  if (iVar1 == 0) {
    pcVar5 = s___005b2ec4;
  }
  iVar1 = FUN_004c1310(this,0x10);
  pcVar6 = s_16_bpp_005b2ebc;
  if (iVar1 == 0) {
    pcVar6 = s___005b2ec4;
  }
  iVar1 = FUN_004c1310(this,8);
  pcVar2 = s_8_bpp_005b2eb4;
  if (iVar1 == 0) {
    pcVar2 = s___005b2ec4;
  }
  FUN_004c3fa0(s_Render_bitdepths____s__s__s__s_005b2e94,pcVar2,pcVar6,pcVar5,pcVar7);
  uVar3 = FUN_004c12b0(this);
  FUN_004c3fa0(s_Zbuffer_bitdepth____d_bpp_005b2e78,uVar3);
  FUN_004c3fa0(s______Light_information______005b2e58);
  uVar3 = FUN_004c1420(this);
  FUN_004c3fa0(s_Maximum_lights____d_005b2e40,uVar3);
  FUN_004c3fa0(s_Allowed_types___005b2e2c);
  iVar1 = FUN_004c1590(this);
  if (iVar1 != 0) {
    FUN_004c3fa0(s_spot_005b2e24);
  }
  iVar1 = FUN_004c1530(this);
  if (iVar1 != 0) {
    FUN_004c3fa0(s___point_005b2e1c);
  }
  iVar1 = FUN_004c14d0(this);
  if (iVar1 != 0) {
    FUN_004c3fa0(s___parallel_005b2e10);
  }
  iVar1 = FUN_004c1470(this);
  if (iVar1 == 0) {
    pcVar7 = s_lights_005b2df0;
  }
  else {
    pcVar7 = s___directional_lights_005b2df8;
  }
  FUN_004c3fa0(pcVar7);
  FUN_004c3fa0(s______Texture_information______005b2dd0);
  iVar1 = FUN_004c1140(this);
  if (iVar1 != 0) {
    FUN_004c3fa0(s_Texture_memory___SYSTEM_005b2db4);
  }
  iVar1 = FUN_004c11a0(this);
  if (iVar1 != 0) {
    FUN_004c3fa0(s_Texture_memory___VIDEO_005b2d98);
  }
  uVar3 = FUN_004c10c0(this);
  uVar3 = FUN_004c1040(this,uVar3);
  FUN_004c3fa0(s_Min_texture_size_____d__d__005b2d7c,uVar3);
  uVar3 = FUN_004c1100(this);
  uVar3 = FUN_004c1080(this,uVar3);
  FUN_004c3fa0(s_Max_texture_size_____d__d__005b2d60,uVar3);
  FUN_004c3fa0(s______Miscellaneous______005b2d44);
  iVar1 = FUN_004c1200(this);
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


