/* spel.dat — dxdraw/Initlib.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c4150 FUN_004c4150 ==== */

void FUN_004c4150(undefined4 param_1)

{
  int iVar1;
  CHAR local_190 [400];
  
  FUN_005590ae(local_190,param_1,&stack0x00000008);
  FUN_004c3f80(0,1);
  FUN_004c3fa0(s___d___s_005b39bc,0,local_190);
  ShowWindow(DAT_007408a4,6);
  iVar1 = FUN_004cd5e0();
  while (iVar1 != 0) {
    iVar1 = FUN_004cd5e0();
  }
  MessageBoxExA((HWND)0x0,local_190,s_Fout_005b39b4,0x51010,0);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}


/* ==== 004c41e0 FUN_004c41e0 ==== */

void FUN_004c41e0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  tagPOINT point;
  tagRECT rect;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_004c3f70();
  if (cVar1 == '\0') {
    point.x = 0;
    point.y = 0;
  }
  else {
    GetClientRect(DAT_007408a4,&rect);
    point.x = rect.left;
    point.y = rect.top;
    ClientToScreen(DAT_007408a4,&point);
  }
  rect.right = rect.right + point.x;
  rect.bottom = rect.bottom + point.y;
  local_8 = DAT_005b3798;
  local_10 = 0;
  local_c = 0;
  local_4 = DAT_005b379c;
  rect.left = point.x;
  rect.top = point.y;
  if (DAT_005b37a8 == 0) {
    FUN_004c4a60(DAT_007408ac);
    FUN_004c4a60(DAT_007408b0);
    iVar2 = (**(code **)(*DAT_007408ac + 0x14))
                      (DAT_007408ac,&rect,DAT_007408b0,&local_10,0x1000000,0);
    if (iVar2 != 0) {
      uVar3 = FUN_004c4400(iVar2);
      FUN_004c4150(s__s__d____blitting_error___s___005b39c8,s_C__Work_dxdraw_Initlib_cpp_005b3944,
                   0x53f,uVar3);
    }
  }
  else {
    FUN_004c4a60(DAT_007408ac);
    FUN_004c4a60(DAT_007408b0);
    iVar2 = (**(code **)(*DAT_007408ac + 0x2c))(DAT_007408ac,0,1);
    if (iVar2 != 0) {
      uVar3 = FUN_004c4400(iVar2);
      FUN_004c4150(s__s__d____error_flipping_surfaces_005b39e8,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x534,uVar3);
      return;
    }
  }
  return;
}


/* ==== 004c4330 FUN_004c4330 ==== */

undefined4 FUN_004c4330(int param_1,uint param_2,int param_3)

{
  if (param_1 == 0) {
    if (((int)param_2 < 0) || (0x14 < (int)param_2)) {
      FUN_004c4150(s__s__d____error_predefined_screen_005b3a0c,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x576);
    }
    DAT_005b3794 = param_2;
    DAT_005b3798 = (&DAT_005b37b0)[param_2 * 5];
    DAT_005b379c = (&DAT_005b37b4)[param_2 * 5];
    DAT_005b37a0 = (&DAT_005b37b8)[param_2 * 5];
    DAT_007408e0 = *(undefined4 *)(&DAT_005b37bc + param_2 * 0x14);
    return 0;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      FUN_004c4150(s__s__d____unknown_variable___d__r_005b3a50,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x589,param_1);
      return 0;
    }
    DAT_005b37ac = param_2;
    return 0;
  }
  if (param_3 == 1) {
    DAT_005b37a4 = DAT_005b37a4 | param_2;
    return 0;
  }
  DAT_005b37a4 = param_2;
  return 0;
}


/* ==== 004c4400 FUN_004c4400 ==== */

char * FUN_004c4400(int param_1)

{
  if (param_1 < -0x7789fe51) {
    if (param_1 == -0x7789fe52) {
      return s_access_to_surface_denied_by_othe_005b3e74;
    }
    if (param_1 < -0x7789ff5f) {
      if (param_1 == -0x7789ff60) {
        return s_one_or_more_surfaces_of_the_dd_o_005b406c;
      }
      if (param_1 < -0x7789ffa0) {
        if (param_1 == -0x7789ffa1) {
          return s_primary_surface_creation_request_005b4124;
        }
        if (param_1 < -0x7ff8fff1) {
          if (param_1 == -0x7ff8fff2) {
            return s_application_out_of_free_memory_005b4194;
          }
          if (param_1 == -0x7fffbfff) {
            return s_operation_is_not_supported_005b41b4;
          }
          if (param_1 == -0x7fffbffb) {
            return s_undefined_error_condition_005b41d0;
          }
        }
        else if (param_1 == -0x7ff8ffa9) {
          return s_one_or_more_invalid_parameters_005b4174;
        }
      }
      else {
        switch(param_1) {
        case -0x7789ff9c:
          return s_one_or_more_of_the_capability_bi_005b40f0;
        case -0x7789ff88:
          return s_screen_mode_not_supported_005b40d4;
        case -0x7789ff7e:
          return s_pointer_is_not_a_dd_object_005b40b8;
        case -0x7789ff6f:
          return s_pixel_format_is_invalid_005b40a0;
        }
      }
    }
    else {
      switch(param_1) {
      case -0x7789ff4c:
        return s_hardware_does_not_support_alpha_a_005b3ff0;
      case -0x7789ff2c:
        return s_the_setcooperativelevel_must_be_c_005b3fa4;
      case -0x7789ff1f:
        return s_exclusive_mode_necessary_for_thi_005b3f78;
      case -0x7789ff1a:
        return s__hardware__flipping_of_visible_s_005b3f3c;
      case -0x7789fec0:
        return s_surface_does_not_use_an_8_bit_pa_005b4020;
      case -0x7789feac:
        return s__hardware__no_hardware_support_f_005b3f00;
      case -0x7789fe98:
        return s_hardware_needed_for_this_operati_005b3ec0;
      case -0x7789fe84:
        return s_application_out_of_video_memory_005b3ea0;
      }
    }
  }
  else {
    switch(param_1) {
    case -0x7789fe3e:
      return s_access_to_surface_denied_because_005b3b0c;
    case -0x7789fde4:
      return s_previous_blit_is_still_in_progre_005b3ab8;
    case -0x7789fdcf:
      return s_direct_draw_invalid_gui_id_005b3d00;
    case -0x7789fdce:
      return s_direct_draw_object_already_creat_005b3e50;
    case -0x7789fdcd:
      return s_hardware_only_dd_objects_not_all_005b3c88;
    case -0x7789fdcc:
      return s_application_already_created_a_pr_005b3b3c;
    case -0x7789fdcb:
      return s_there_is_no_software_emulation_f_005b3c4c;
    case -0x7789fdc6:
      return s_dd_is_prevented_from_restoring_s_005b3d64;
    case -0x7789fdc5:
      return s_cooperative_level_for_HWND_alrea_005b3dc0;
    case -0x7789fdc4:
      return s_there_was_no_palette_attached_to_005b3be0;
    case -0x7789fdc3:
      return s_there_is_no_hardware_support_for_005b3ba4;
    case -0x7789fdbb:
      return s_exclusive_mode_was_already_set_005b3e30;
    case -0x7789fdb5:
      return s_surface_was_created_in_different_005b3a90;
    case -0x7789fdb4:
      return s_this_surface_was_implicitly_crea_005b3d1c;
    case -0x7789fdb3:
      return s_the_surface_being_used_is_not_a_p_005b3b6c;
    case -0x7789fdb2:
      return s_display_is_currently_in_an_unsup_005b3adc;
    case -0x7789fdb1:
      return s__hardware__no_mipmap_texture_map_005b3c10;
    case -0x7789fdb0:
      return s_surface_type_incompatible_with_o_005b3cd4;
    }
  }
  return s_unidentified_error_005b3a7c;
}


/* ==== 004c4e00 FUN_004c4e00 ==== */

void FUN_004c4e00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  local_74 = param_2;
  local_6c = param_4;
  local_68 = param_5;
  local_70 = param_3;
  local_64[0] = 100;
  if ((DAT_005b37a0 == 0x10) || (DAT_005b37a0 == 0x18)) {
    local_14 = param_6;
    if (DAT_007408f4 != 0) {
      local_14 = FUN_004c81b0(param_6,0x18);
    }
  }
  else {
    local_14 = param_6;
  }
  if (param_1 == 0) {
    FUN_004c4a60(DAT_007408ac);
    iVar1 = (**(code **)(*DAT_007408ac + 0x14))(DAT_007408ac,&local_74,0,0,0x1000400,local_64);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_004c4400(iVar1);
    uVar3 = 0x6a0;
  }
  else if (param_1 == 1) {
    FUN_004c4a60(DAT_007408b0);
    iVar1 = (**(code **)(*DAT_007408b0 + 0x14))(DAT_007408b0,&local_74,0,0,0x1000400,local_64);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_004c4400(iVar1);
    uVar3 = 0x6b2;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    FUN_004c4a60(DAT_00740890);
    iVar1 = (**(code **)(*DAT_00740890 + 0x14))(DAT_00740890,&local_74,0,0,0x1000400,local_64);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_004c4400(iVar1);
    uVar3 = 0x6a9;
  }
  FUN_004c4150(s__s__d____blitting_error___s___005b39c8,s_C__Work_dxdraw_Initlib_cpp_005b3944,uVar3,
               uVar2);
  return;
}


/* ==== 004c4f70 FUN_004c4f70 ==== */

void FUN_004c4f70(undefined4 param_1,undefined4 param_2)

{
  FUN_004c4e00(param_1,0,0,DAT_005b3798,DAT_005b379c,param_2);
  return;
}


/* ==== 004c4fa0 FUN_004c4fa0 ==== */

void FUN_004c4fa0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int i;
  char *pcVar4;
  int *piStack_90;
  int *piStack_8c;
  int **ppiStack_88;
  int *local_7c;
  undefined4 uStack_78;
  int *local_74;
  int *local_70;
  int local_6c [5];
  int local_58;
  undefined4 local_4;
  
  local_7c = (int *)0x0;
  local_70 = DAT_005b3940;
  local_74 = DAT_005b3940;
  cVar1 = FUN_004c3f70();
  if (cVar1 != '\0') {
    DAT_005b37a8 = 0;
  }
  if (DAT_007408d0 == 0) {
    while( true ) {
      piVar3 = local_6c;
      for (i = 0x1b; i != 0; i = i + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      local_6c[0] = 0x6c;
      if (DAT_005b37a8 == 0) {
        local_4 = 0x2200;
        local_6c[1] = 1;
      }
      else {
        local_6c[1] = 0x21;
        local_4 = 0x2218;
      }
      ppiStack_88 = (int **)s_creating_005b452c;
      piStack_8c = (int *)0x4c5036;
      local_58 = DAT_005b37a8;
      FUN_004c3fa0();
      piStack_90 = local_6c;
      ppiStack_88 = (int **)0x0;
      piStack_8c = (int *)&DAT_007408ac;
      i = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c);
      if (i != 0) {
        uVar2 = FUN_004c4400(i);
        FUN_004c4150(s__s__d____could_not_create_primar_005b44f8,
                     s_C__Work_dxdraw_Initlib_cpp_005b3944,0x715,uVar2);
      }
      i = (**(code **)*DAT_007408ac)(DAT_007408ac,&DAT_00578d60,&DAT_00740840);
      if (i != 0) {
        uVar2 = FUN_004c4400(i);
        FUN_004c4150(s__s__d____could_not_create_dd2_su_005b44c4,
                     s_C__Work_dxdraw_Initlib_cpp_005b3944,0x718,uVar2);
      }
      FUN_004c3fa0(s_locking_005b44b8);
      i = FUN_004c4ce0(0);
      if (i != 0) break;
      if ((DAT_005b37a8 == 0) || (DAT_007408e0 != 0)) goto LAB_004c5131;
      (**(code **)(*DAT_007408ac + 8))(DAT_007408ac);
      (**(code **)(*DAT_00740840 + 8))(DAT_00740840);
      DAT_005b37a8 = 0;
    }
    DAT_007408bc = 1;
    uVar2 = FUN_004c48f0(DAT_007408ac,&DAT_0074082c);
    FUN_004c3fa0(s_locking_inter_005b44a8);
    FUN_004c4a20(DAT_007408ac,uVar2);
    FUN_004c3fa0(s_locking_done_005b4498);
LAB_004c5131:
    FUN_004c3fa0(s_getting_pixel_format_005b4480);
    FUN_004c8540();
    piVar3 = DAT_005b3940;
    if (DAT_007409cc != 0) {
      if (DAT_007409cc == 4) {
        piVar3 = (int *)FUN_004c81b0(DAT_007408f0,0x18);
      }
      else {
        piVar3 = (int *)FUN_004c81b0(DAT_005b3940,8);
      }
    }
    piStack_90 = piVar3;
    piStack_8c = piVar3;
    i = (**(code **)(*DAT_007408ac + 0x74))(DAT_007408ac,8,&piStack_90);
    if (i != 0) {
      ppiStack_88 = (int **)0x4c51a1;
      ppiStack_88 = (int **)FUN_004c4400();
      piStack_8c = (int *)0x74b;
      piStack_90 = (int *)s_C__Work_dxdraw_Initlib_cpp_005b3944;
      FUN_004c4150(s__s__d____failed_to_set_color_key_005b4458);
    }
    DAT_007408d0 = 1;
  }
  if (DAT_007408d4 != 0) goto LAB_004c53d0;
  if (DAT_005b37a8 == 0) {
    ppiStack_88 = (int **)0x4c52b5;
    FUN_004c3fa0();
    ppiStack_88 = (int **)0x4c52ba;
    cVar1 = FUN_004c3f70();
    ppiStack_88 = (int **)((-(uint)(cVar1 != '\0') & 0x3800) + 0x800 | 0x2000);
    piStack_8c = DAT_005b379c;
    piStack_90 = DAT_005b3798;
    DAT_007408b0 = (int *)FUN_004c4b00();
    ppiStack_88 = (int **)&DAT_00578d60;
    piStack_90 = (int *)0x4c52f6;
    piStack_8c = DAT_007408b0;
    i = (**(code **)*DAT_007408b0)();
    if (i != 0) {
      uVar2 = FUN_004c4400(i);
      FUN_004c4150(s__s__d____unable_to_create_attach_005b4414,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x774,uVar2);
    }
    i = FUN_004c4ce0(1);
    if (i != 0) {
      DAT_007408c0 = 1;
      uVar2 = FUN_004c48f0(DAT_007408b0,&DAT_00740898);
      FUN_004c4a20(DAT_007408b0,uVar2);
      pcVar4 = s_back_screen_locking_done2_005b43b4;
      goto LAB_004c534d;
    }
  }
  else {
    ppiStack_88 = (int **)0x4c51eb;
    FUN_004c3fa0();
    ppiStack_88 = (int **)&uStack_78;
    uStack_78 = 4;
    piStack_8c = DAT_007408ac;
    piStack_90 = (int *)0x4c520b;
    piStack_90 = (int *)(**(code **)(*DAT_007408ac + 0x30))();
    if (piStack_90 != (int *)0x0) {
      uVar2 = FUN_004c4400();
      FUN_004c4150(s__s__d____unable_to_create_attach_005b4414,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x758,uVar2);
    }
    piStack_90 = (int *)&DAT_007408b8;
    i = (**(code **)*DAT_007408b0)(DAT_007408b0,&DAT_00578d60);
    if (i != 0) {
      uVar2 = FUN_004c4400(i);
      FUN_004c4150(s__s__d____unable_to_create_attach_005b4414,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x75c,uVar2);
    }
    FUN_004c3fa0(s_back_screen_locking_1_005b43fc);
    i = FUN_004c4ce0(1);
    if (i != 0) {
      DAT_007408c0 = 1;
      uVar2 = FUN_004c48f0(DAT_007408b0,&DAT_00740898);
      FUN_004c4a20(DAT_007408b0,uVar2);
      pcVar4 = s_back_screen_locking_done1_005b43e0;
LAB_004c534d:
      FUN_004c3fa0(pcVar4);
    }
  }
  piVar3 = DAT_005b3940;
  if (DAT_007409cc != 0) {
    if (DAT_007409cc == 4) {
      piVar3 = (int *)FUN_004c81b0(DAT_007408f0,0x18);
    }
    else {
      piVar3 = (int *)FUN_004c81b0(DAT_005b3940,8);
    }
  }
  piStack_8c = piVar3;
  ppiStack_88 = (int **)piVar3;
  i = (**(code **)(*DAT_007408b0 + 0x74))(DAT_007408b0,8,&piStack_8c);
  if (i != 0) {
    ppiStack_88 = (int **)0x4c53b2;
    ppiStack_88 = (int **)FUN_004c4400();
    piStack_8c = (int *)0x79b;
    piStack_90 = (int *)s_C__Work_dxdraw_Initlib_cpp_005b3944;
    FUN_004c4150(s__s__d____failed_to_set_color_key_005b4458);
  }
  DAT_007408d4 = 1;
LAB_004c53d0:
  if (DAT_007408d8 == 0) {
    ppiStack_88 = (int **)DAT_005b379c;
    piStack_8c = DAT_005b3798;
    piStack_90 = (int *)0x4c53f4;
    DAT_00740890 = (int *)FUN_004c4b00();
    ppiStack_88 = (int **)&DAT_00578d60;
    piStack_90 = (int *)0x4c540b;
    piStack_8c = DAT_00740890;
    piStack_90 = (int *)(**(code **)*DAT_00740890)();
    if (piStack_90 != (int *)0x0) {
      uVar2 = FUN_004c4400();
      FUN_004c4150(s__s__d____query_interface_for_sur_005b4380,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x7a4,uVar2);
    }
    piStack_90 = (int *)0x2;
    i = FUN_004c4ce0();
    if (i != 0) {
      piStack_90 = &DAT_007408a8;
      DAT_007408c4 = 1;
      uVar2 = FUN_004c48f0(DAT_00740890);
      FUN_004c4a20(DAT_00740890,uVar2);
    }
    piVar3 = DAT_005b3940;
    if (DAT_007409cc != 0) {
      if (DAT_007409cc == 4) {
        piStack_90 = (int *)0x18;
        piVar3 = (int *)FUN_004c81b0(DAT_007408f0);
      }
      else {
        piStack_90 = (int *)0x8;
        piVar3 = (int *)FUN_004c81b0(DAT_005b3940);
      }
    }
    piStack_90 = (int *)&stack0xffffff80;
    local_7c = piVar3;
    i = (**(code **)(*DAT_00740890 + 0x74))(DAT_00740890,8);
    if (i != 0) {
      ppiStack_88 = (int **)0x4c54bd;
      ppiStack_88 = (int **)FUN_004c4400();
      piStack_8c = (int *)0x7c9;
      piStack_90 = (int *)s_C__Work_dxdraw_Initlib_cpp_005b3944;
      FUN_004c4150(s__s__d____failed_to_set_color_key_005b4458);
    }
    DAT_007408d8 = 1;
  }
  cVar1 = FUN_004c3f70();
  if (cVar1 != '\0') {
    ppiStack_88 = &local_7c;
    piStack_8c = (int *)0x0;
    piStack_90 = (int *)0x4c54f6;
    piStack_90 = (int *)DirectDrawCreateClipper();
    if (piStack_90 != (int *)0x0) {
      uVar2 = FUN_004c4400();
      FUN_004c4150(s__s__d____failed_create_Clipper_o_005b4350,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x7d5,uVar2);
    }
    piStack_90 = DAT_007408a4;
    piVar3 = (int *)0x0;
    i = (*(code *)(*ppiStack_88)[8])(ppiStack_88);
    if (i != 0) {
      uVar2 = FUN_004c4400(i);
      FUN_004c4150(s__s__d____failed_set_Clipper_HWND_005b4328,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x7dc,uVar2);
    }
    i = (**(code **)(*DAT_007408ac + 0x70))(DAT_007408ac);
    if (i != 0) {
      uVar2 = FUN_004c4400(i);
      FUN_004c4150(s__s__d____failed_set_Prim_surf_Cl_005b42f8,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x7e3,uVar2);
    }
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ppiStack_88 = (int **)0x4c5593;
  FUN_004c3fa0();
  ppiStack_88 = (int **)0x4c5598;
  FUN_004c9c90();
  ppiStack_88 = (int **)0x0;
  piStack_8c = (int *)0x2;
  piStack_90 = (int *)0x4c55a1;
  FUN_004c4f70();
  piStack_90 = (int *)0x0;
  FUN_004c4f70(1);
  FUN_004c41e0();
  return;
}


/* ==== 004c55c0 FUN_004c55c0 ==== */

undefined4 FUN_004c55c0(HINSTANCE param_1,int param_2,LPCSTR param_3,LPCSTR param_4)

{
  char cVar1;
  int nHeight;
  undefined4 uVar2;
  int iVar3;
  DWORD dwExStyle;
  DWORD dwStyle;
  undefined4 local_3c;
  tagRECT rect;
  WNDCLASSA wndclass;
  
  FUN_00559f8f(&local_3c);
  FUN_0055861b(local_3c);
  if (DAT_007408c8 == 0) {
    wndclass.style = 3;
    wndclass.lpfnWndProc = (WNDPROC)&LAB_004cd6b0;
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.hInstance = param_1;
    wndclass.hIcon = LoadIconA(param_1,(LPCSTR)0x7f00);
    wndclass.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    wndclass.hbrBackground = (HBRUSH)0x0;
    wndclass.lpszMenuName = (LPCSTR)0x0;
    wndclass.lpszClassName = param_3;
    RegisterClassA(&wndclass);
    cVar1 = FUN_004c3f70();
    if (cVar1 == '\0') {
      dwExStyle = 0x40000;
      dwStyle = 0x80000000;
      iVar3 = GetSystemMetrics(0);
      nHeight = GetSystemMetrics(1);
    }
    else {
      dwExStyle = 0x300;
      dwStyle = 0xc00000;
      DAT_005b37a4 = 8;
      iVar3 = DAT_005b3798;
      nHeight = DAT_005b379c;
    }
    FUN_004c3fa0(s_____init_xvgalib_______version___005b46d8,s_Oct_6_2000_005b46fc);
    DAT_007408a4 = CreateWindowExA(dwExStyle,param_3,param_4,dwStyle,0,0,iVar3,nHeight,(HWND)0x0,
                                   (HMENU)0x0,param_1,(LPVOID)0x0);
    if (DAT_007408a4 == (HWND)0x0) {
      FUN_004c3fa0(s_failure_to_make_window_005b46c0);
      return 0;
    }
    GetClientRect(DAT_007408a4,&rect);
    MoveWindow(DAT_007408a4,rect.left,rect.top,(iVar3 * 2 - rect.right) + rect.left,
               (nHeight * 2 - rect.bottom) + rect.top,1);
    FUN_004c3fa0(s_window_defined_005b46b0);
    ShowWindow(DAT_007408a4,param_2);
    UpdateWindow(DAT_007408a4);
    DAT_007408c8 = 1;
  }
  FUN_004c3fa0(s_starting_direct_draw_driver_sear_005b468c);
  FUN_004cd150();
  FUN_004c3fa0(s_Finished_search_005b4678);
  if (DAT_007408cc == 0) {
    FUN_004c3fa0(s_create_direct_draw_object_005b465c);
    uVar2 = FUN_004cd170(DAT_005b37ac);
    iVar3 = DirectDrawCreate(uVar2,&DAT_0074088c,0);
    if (iVar3 != 0) {
      uVar2 = FUN_004c4400(iVar3);
      FUN_004c4150(s__s__d____could_not_create_dd_obj_005b4630,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x891,uVar2);
    }
    DAT_007408cc = 1;
  }
  if (DAT_007408dc == 0) {
    FUN_004c3fa0(s_set_cooperative_level_005b4618);
    iVar3 = (**(code **)(*DAT_0074088c + 0x50))(DAT_0074088c,DAT_007408a4,DAT_005b37a4);
    if (iVar3 != 0) {
      uVar2 = FUN_004c4400(iVar3);
      FUN_004c4150(s__s__d____could_not_set_cooperati_005b45e8,s_C__Work_dxdraw_Initlib_cpp_005b3944
                   ,0x89b,uVar2);
    }
    DAT_007408dc = 1;
  }
  iVar3 = (**(code **)*DAT_0074088c)(DAT_0074088c,&DAT_00578d70,&DAT_00740894);
  if (iVar3 != 0) {
    uVar2 = FUN_004c4400(iVar3);
    FUN_004c4150(s__s__d____could_not_query_interfa_005b45b4,s_C__Work_dxdraw_Initlib_cpp_005b3944,
                 0x8a1,uVar2);
  }
  FUN_004cd2d0();
  iVar3 = FUN_004cd330(DAT_005b3794);
  if (iVar3 == 0) {
    FUN_004c3fa0(s_could_not_find_mode_005b459c);
  }
  FUN_004c3fa0(s_set_display_mode__dx_dx_d_005b4580,DAT_005b3798,DAT_005b379c,DAT_005b37a0);
  cVar1 = FUN_004c3f70();
  if ((cVar1 == '\0') &&
     (iVar3 = (**(code **)(*DAT_00740894 + 0x54))
                        (DAT_00740894,DAT_005b3798,DAT_005b379c,DAT_005b37a0,0,0), iVar3 != 0)) {
    uVar2 = FUN_004c4400(iVar3);
    FUN_004c4150(s__s__d____could_not_set_display_m_005b4554,s_C__Work_dxdraw_Initlib_cpp_005b3944,
                 0x8b1,uVar2);
  }
  FUN_004c8800(0,0,DAT_005b3798,DAT_005b379c);
  FUN_004c4fa0();
  FUN_004c3fa0(s_init_input_005b4548);
  FUN_004c3fa0(s_system_info_005b4538);
  FUN_004ccc10();
  return 1;
}


/* ==== 004ccde0 FUN_004ccde0 ==== */

int FUN_004ccde0(int param_1,int param_2,int param_3)

{
  int i;
  int *piVar1;
  
  i = 0;
  piVar1 = &DAT_005b37b4;
  while (((piVar1[-1] != param_1 || (*piVar1 != param_2)) || (piVar1[1] != param_3))) {
    piVar1 = piVar1 + 5;
    i = i + 1;
    if (0x5b3943 < (int)piVar1) {
      return -1;
    }
  }
  return i;
}


/* ==== 004cce20 FUN_004cce20 ==== */

undefined4 FUN_004cce20(int param_1)

{
  if (DAT_00740de0 == 0) {
    DAT_00740db0 = LocalAlloc(0x40,param_1 * 0xd8);
    if (DAT_00740db0 == (HLOCAL)0x0) {
      FUN_004c4150(s__s__d____not_enough_memory_to_re_005b4e64);
      return 2000;
    }
    DAT_00740dd8 = param_1;
    DAT_00740ddc = 0;
    DAT_00740de0 = 1;
  }
  return 0;
}


