/* spel.dat — dxdraw/Mixer.cpp: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004cdcf0 FUN_004cdcf0 ==== */

char * FUN_004cdcf0(int param_1)

{
  if (param_1 < 0x401) {
    if (param_1 == 0x400) {
      return s_invalid_audio_line_005b67c4;
    }
    switch(param_1) {
    case 2:
      return s_invalid_mixer_devive_id__mixerob_005b68dc;
    case 4:
      return s_The_specified_resource_is_alread_005b67f8;
    case 5:
      return s_invalid_mixer_object_handle_005b68a0;
    case 6:
      return s_no_driver_available_for_this_mix_005b6850;
    case 7:
      return s_Unable_to_allocate_resources__005b67d8;
    case 10:
      return s_one_or_more_flags_are_invalid_005b68bc;
    case 0xb:
      return s_one_or_more_parameters_are_inval_005b687c;
    }
  }
  else if (param_1 == 0x401) {
    return s_the_control_reference_is_invalid_005b677c;
  }
  return s_unknown_error_or_warning_by_Win9_005b67a0;
}


/* ==== 004cdd80 FUN_004cdd80 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004cdd80(undefined4 param_1,int param_2)

{
  UINT UVar1;
  MMRESULT MVar2;
  undefined4 uVar3;
  int i;
  undefined4 *puVar4;
  UINT UStack_8;
  
  if ((param_2 < 0) || (2 < param_2)) {
    FUN_004c4150(s__s__d____control_type_out_of_bou_005b6984,s_C__Work_dxdraw_Mixer_cpp_005b69b8,99,
                 param_2);
  }
  UVar1 = mixerGetNumDevs();
  if ((UVar1 != 0) && (UStack_8 = 0, UVar1 != 0)) {
    do {
      MVar2 = mixerOpen((LPHMIXER)&DAT_00740ff0,UStack_8,0,0,0);
      if (MVar2 == 0) {
        puVar4 = &DAT_00740f48;
        for (i = 0x2a; i != 0; i = i + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        DAT_00740f48 = 0xa8;
        _DAT_00740f60 = param_1;
        MVar2 = mixerGetLineInfoA(DAT_00740ff0,(LPMIXERLINEA)&DAT_00740f48,3);
        uVar3 = DAT_00740f54;
        if (MVar2 == 0) {
          puVar4 = &DAT_00740f30;
          for (i = 6; i != 0; i = i + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          puVar4 = &DAT_00740e98;
          for (i = 0x25; i != 0; i = i + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          DAT_00740f34 = uVar3;
          _DAT_00740f38 = *(undefined4 *)(&DAT_005b6770 + param_2 * 4);
          DAT_00740f30 = 0x18;
          _DAT_00740f3c = 1;
          _DAT_00740f40 = 0x94;
          _DAT_00740f44 = &DAT_00740e98;
          MVar2 = mixerGetLineControlsA(DAT_00740ff0,(LPMIXERLINECONTROLSA)&DAT_00740f30,2);
          if (MVar2 == 0) {
            puVar4 = &DAT_00740e80;
            for (i = 6; i != 0; i = i + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            DAT_00740e80 = 0x18;
            DAT_00740e84 = DAT_00740e9c;
            _DAT_00740e88 = 1;
            _DAT_00740e90 = 4;
            _DAT_00740e94 = &DAT_00740e78;
            DAT_00740e78 = MVar2;
            MVar2 = mixerGetControlDetailsA(DAT_00740ff0,(LPMIXERCONTROLDETAILS)&DAT_00740e80,0);
            if (MVar2 == 0) {
              DAT_00740ff4 = 1;
              return 1;
            }
            uVar3 = FUN_004cdcf0(MVar2);
            FUN_004c4150(s__s__d____error_get_mixer_control_005b6954,
                         s_C__Work_dxdraw_Mixer_cpp_005b69b8,0x8c,uVar3);
          }
        }
        else {
          uVar3 = FUN_004cdcf0(MVar2);
          FUN_004c3fa0(s__s__d____error_geting_line_info___005b692c,
                       s_C__Work_dxdraw_Mixer_cpp_005b69b8,0x92,uVar3);
        }
        mixerClose((HMIXER)DAT_00740ff0);
        DAT_00740ff0 = (HMIXEROBJ)0x0;
      }
      else {
        uVar3 = FUN_004cdcf0(MVar2);
        FUN_004c4150(s__s__d____error_opening_mixer_dev_005b6900,s_C__Work_dxdraw_Mixer_cpp_005b69b8
                     ,0x99,uVar3);
      }
      UStack_8 = UStack_8 + 1;
    } while (UStack_8 < UVar1);
  }
  return 0;
}


/* ==== 004cdfa0 FUN_004cdfa0 ==== */

void FUN_004cdfa0(void)

{
  if (DAT_00740ff4 != 0) {
    if (DAT_00740ff0 != (HMIXER)0x0) {
      mixerClose(DAT_00740ff0);
      DAT_00740ff0 = (HMIXER)0x0;
    }
    DAT_00740ff4 = 0;
  }
  return;
}


/* ==== 004cdfd0 FUN_004cdfd0 ==== */

undefined4 FUN_004cdfd0(void)

{
  if (DAT_00740ff4 != 0) {
    mixerGetControlDetailsA(DAT_00740ff0,(LPMIXERCONTROLDETAILS)&DAT_00740e80,0);
    return DAT_00740e78;
  }
  return 0xffffffff;
}


/* ==== 004ce000 FUN_004ce000 ==== */

void FUN_004ce000(undefined4 param_1)

{
  if (DAT_00740ff4 != 0) {
    DAT_00740e78 = param_1;
    mixerSetControlDetails(DAT_00740ff0,(LPMIXERCONTROLDETAILS)&DAT_00740e80,0);
  }
  return;
}


/* ==== 004ce030 FUN_004ce030 ==== */

undefined4 FUN_004ce030(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x1006) {
    if (((0x1001 < param_1) || (param_1 == 4)) || ((6 < param_1 && (param_1 < 9))))
    goto LAB_004ce076;
  }
  else if (param_1 == 0x1008) goto LAB_004ce076;
  FUN_004c4150(s__s__d____unknown_device_selected_005b6a14,s_C__Work_dxdraw_Mixer_cpp_005b69b8,0xd5,
               param_1);
LAB_004ce076:
  iVar1 = FUN_004cdd80(param_1,0);
  if (iVar1 != 0) {
    if ((param_2 < DAT_00740efc) || (DAT_00740f00 < param_2)) {
      FUN_004c4150(s__s__d____error_setting_volume_va_005b69d4,s_C__Work_dxdraw_Mixer_cpp_005b69b8,
                   0xdd,param_2,DAT_00740efc,DAT_00740f00);
    }
    FUN_004ce000(param_2);
    FUN_004cdfa0();
    return 0;
  }
  return 10000;
}


/* ==== 004ce0d0 FUN_004ce0d0 ==== */

undefined4 FUN_004ce0d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 0x1006) {
    if (((0x1001 < param_1) || (param_1 == 4)) || ((6 < param_1 && (param_1 < 9))))
    goto LAB_004ce116;
  }
  else if (param_1 == 0x1008) goto LAB_004ce116;
  FUN_004c4150(s__s__d____unknown_device_selected_005b6a14,s_C__Work_dxdraw_Mixer_cpp_005b69b8,0xf6,
               param_1);
LAB_004ce116:
  iVar1 = FUN_004cdd80(param_1,0);
  if (iVar1 != 0) {
    uVar2 = FUN_004cdfd0();
    FUN_004cdfa0();
    return uVar2;
  }
  return 0xffffffff;
}


