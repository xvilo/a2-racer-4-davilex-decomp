/* spel.dat — dxdraw/Sound.cpp: 27 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c6720 FUN_004c6720 ==== */

int FUN_004c6720(void)

{
  int iVar1;
  
  if (DAT_00740948 < DAT_00740944) {
    iVar1 = DAT_00740948;
    DAT_00740948 = DAT_00740948 + 1;
    return iVar1;
  }
  return -1;
}


/* ==== 004c6860 FUN_004c6860 ==== */

int FUN_004c6860(void)

{
  int iVar1;
  
  iVar1 = FUN_004c66c0(0x14);
  if (iVar1 == 0) {
    DirectSoundEnumerateA(&LAB_004c6740,0);
    iVar1 = 0;
  }
  return iVar1;
}


/* ==== 004c6880 FUN_004c6880 ==== */

undefined4 FUN_004c6880(int param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  short sStack_22;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = param_1;
  local_1c = param_1 * param_3;
  uStack_28 = 0;
  puStack_30 = &local_14;
  local_8 = 0;
  _local_24 = CONCAT22((param_4 != 0) + 1,1);
  local_c = 0;
  local_4 = 0;
  _local_18 = CONCAT22(param_2,(short)param_3);
  local_14 = 0x14;
  local_10 = 1;
  puStack_2c = &DAT_0074092c;
  piStack_34 = DAT_00740924;
  iVar1 = (**(code **)(*DAT_00740924 + 0xc))();
  if (iVar1 != 0) {
    uVar2 = FUN_004c65b0(iVar1);
    FUN_004c3fa0(s__s__d____error_creating_sound_bu_005b4f48,s_D__Work_dxdraw_Sound_cpp_005b4f74,199
                 ,uVar2);
    return 0x2afa;
  }
  iVar1 = (**(code **)(*DAT_0074092c + 0x38))(DAT_0074092c,&piStack_34);
  if (iVar1 != 0) {
    uVar2 = FUN_004c65b0(iVar1);
    FUN_004c3fa0(s__s__d____error_setting_format____005b4f20,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0xcc,uVar2);
    return 0x2afa;
  }
  iVar1 = (**(code **)(*DAT_0074092c + 0x30))(DAT_0074092c,0,0,1);
  if (iVar1 != 0) {
    uVar2 = FUN_004c65b0(iVar1);
    FUN_004c4150(s__s__d____error_starting_primary_s_005b4eec,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0xd6,uVar2);
  }
  return 0;
}


/* ==== 004c69c0 FUN_004c69c0 ==== */

undefined4 FUN_004c69c0(undefined4 param_1,int param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_24;
  short sStack_22;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_24;
  local_20 = param_2;
  local_1c = param_2 * param_4;
  _local_18 = CONCAT22(param_3,(short)param_4);
  local_8 = 0;
  _local_24 = CONCAT22((param_5 != 0) + 1,1);
  local_14 = 0x14;
  local_10 = 0xe8;
  local_c = param_1;
  iVar1 = (**(code **)(*DAT_00740924 + 0xc))(DAT_00740924,&local_14,&param_5,0);
  if (iVar1 != 0) {
    uVar2 = FUN_004c65b0(iVar1);
    FUN_004c4150(s__s__d____error_creating_sound_bu_005b4f48,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x123,uVar2);
  }
  return param_1;
}


/* ==== 004c6a90 FUN_004c6a90 ==== */

undefined4
FUN_004c6a90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined2 param_5,int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_24;
  short sStack_22;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_24;
  local_20 = param_4;
  local_1c = param_4 * param_6;
  local_8 = 0;
  _local_18 = CONCAT22(param_5,(short)param_6);
  _local_24 = CONCAT22((param_7 != 0) + 1,1);
  local_14 = 0x14;
  local_10 = 0xb8;
  local_c = param_3;
  iVar1 = (**(code **)(*DAT_00740924 + 0xc))(DAT_00740924,&local_14,param_1,0);
  if (iVar1 != 0) {
    uVar2 = FUN_004c65b0(iVar1);
    FUN_004c4150(s__s__d____error_creating_sound_bu_005b4f48,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x142,uVar2);
  }
  iVar1 = (*(code *)**(undefined4 **)*param_1)((undefined4 *)*param_1,&DAT_00578d80,local_8);
  if (iVar1 != 0) {
    uVar2 = FUN_004c65b0(iVar1);
    FUN_004c4150(s__s__d____error_creating_3d_sound_005b4f90,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x146,uVar2);
  }
  return 0;
}


/* ==== 004c6b90 FUN_004c6b90 ==== */

undefined4 FUN_004c6b90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  iVar1 = (**(code **)(*DAT_00740924 + 0x14))(DAT_00740924,param_1,&param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_004c65b0(iVar1);
    FUN_004c4150(s__s__d____error_duplicating_sound_005b4fc0,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x154,uVar2);
  }
  return uVar3;
}


/* ==== 004c6bd0 FUN_004c6bd0 ==== */

bool FUN_004c6bd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte unaff_SI;
  
  iVar2 = param_1;
  if (DAT_00740950 == 0) {
    return false;
  }
  if ((param_1 < 0) || (DAT_00740928 < param_1)) {
    FUN_004c4150(s__s__d____illegal_sound_buffer_in_005b5020,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x16f,param_1,DAT_00740928);
  }
  iVar3 = DAT_00740934 + iVar2 * 0x44;
  if (*(int *)(iVar3 + 0x30) == 0) {
    return false;
  }
  piVar1 = *(int **)(iVar3 + 0x28);
  iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_1);
  if (iVar3 != 0) {
    uVar4 = FUN_004c65b0(iVar3);
    FUN_004c4150(s__s__d____getting_sound_status_fa_005b4ff0,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x177,iVar2,uVar4);
  }
  return (unaff_SI & 1) == 1;
}


/* ==== 004c6c70 FUN_004c6c70 ==== */

undefined4 FUN_004c6c70(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte unaff_SI;
  int iVar5;
  
  iVar4 = param_1;
  if (DAT_00740950 == 0) {
    return 0;
  }
  if ((param_1 < 0) || (DAT_00740928 < param_1)) {
    FUN_004c4150(s__s__d____illegal_sound_buffer_in_005b5020,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x1e2,param_1,DAT_00740928);
  }
  iVar5 = iVar4 * 0x44;
  if (*(int *)(iVar5 + 0x30 + DAT_00740934) == 0) {
    return 0;
  }
  piVar1 = *(int **)(iVar5 + 0x28 + DAT_00740934);
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_004c65b0(iVar2);
    FUN_004c4150(s__s__d____getting_sound_status_fa_005b4ff0,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x1ea,iVar4,uVar3);
  }
  if ((unaff_SI & 1) != 1) {
    return 0;
  }
  piVar1 = *(int **)(iVar5 + 0x28 + DAT_00740934);
  iVar4 = (**(code **)(*piVar1 + 0x48))(piVar1);
  if (iVar4 != 0) {
    uVar3 = FUN_004c65b0(iVar4);
    FUN_004c4150(s__s__d____error_releasing_sound_b_005b5054,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x1f2,uVar3);
  }
  piVar1 = *(int **)(iVar5 + 0x28 + DAT_00740934);
  iVar4 = (**(code **)(*piVar1 + 0x34))(piVar1,0);
  if (iVar4 != 0) {
    uVar3 = FUN_004c65b0(iVar4);
    FUN_004c4150(s__s__d____error_releasing_sound_b_005b5054,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x1f5,uVar3);
  }
  return 1;
}


/* ==== 004c6d80 FUN_004c6d80 ==== */

undefined4 FUN_004c6d80(void)

{
  int i;
  int iVar1;
  
  if (DAT_00740950 != 0) {
    i = 0;
    if (0 < DAT_00740928) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x30 + DAT_00740934) != 0) {
          FUN_004c6c70(i);
        }
        i = i + 1;
        iVar1 = iVar1 + 0x44;
      } while (i < DAT_00740928);
    }
    return 0;
  }
  return 0;
}


/* ==== 004c6dd0 FUN_004c6dd0 ==== */

undefined4 FUN_004c6dd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int i;
  
  if (DAT_00740950 != 0) {
    FUN_004c6d80();
    i = 0;
    if (0 < DAT_00740928) {
      iVar3 = 0;
      iVar2 = DAT_00740934;
      do {
        if (*(int *)(iVar3 + 0x30 + iVar2) != 0) {
          if (*(int *)(iVar3 + 0x34 + iVar2) == 1) {
            piVar1 = *(int **)(iVar3 + 0x2c + iVar2);
            (**(code **)(*piVar1 + 8))(piVar1);
            iVar2 = DAT_00740934;
          }
          piVar1 = *(int **)(iVar3 + 0x28 + iVar2);
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar3 + 0x30 + DAT_00740934) = 0;
          *(undefined4 *)(iVar3 + 0x38 + DAT_00740934) = 0;
          iVar2 = DAT_00740934;
        }
        i = i + 1;
        iVar3 = iVar3 + 0x44;
      } while (i < DAT_00740928);
    }
    return 0;
  }
  return 0;
}


/* ==== 004c6e50 FUN_004c6e50 ==== */

undefined4 FUN_004c6e50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
      FUN_004c4150(s__s__d____illegal_sound_buffer_in_005b5020,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x241,param_1,DAT_00740928);
    }
    iVar2 = param_1 * 0x44;
    if (*(int *)(iVar2 + 0x30 + DAT_00740934) != 0) {
      FUN_004c6c70(param_1);
      piVar1 = *(int **)(iVar2 + 0x28 + DAT_00740934);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(iVar2 + 0x30 + DAT_00740934) = 0;
      *(undefined4 *)(iVar2 + 0x38 + DAT_00740934) = 0;
    }
  }
  return 0;
}


/* ==== 004c6ee0 FUN_004c6ee0 ==== */

int FUN_004c6ee0(char *str2,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < DAT_00740928) {
    iVar2 = param_3 * 0x44;
    do {
      if ((*(int *)((char *)(DAT_00740934 + iVar2) + 0x30) != 0) &&
         (iVar1 = __strcmpi((char *)(DAT_00740934 + iVar2),str2), iVar1 == 0)) {
        if (param_4 == 0) {
          return param_3;
        }
        iVar1 = FUN_004c6bd0(param_3);
        if (iVar1 == 0) {
          return param_3;
        }
      }
      param_3 = param_3 + 1;
      iVar2 = iVar2 + 0x44;
    } while (param_3 < DAT_00740928);
  }
  return -1;
}


/* ==== 004c6f50 FUN_004c6f50 ==== */

int FUN_004c6f50(int param_1)

{
  int iVar1;
  int i;
  
  i = 0;
  if (0 < DAT_00740928) {
    iVar1 = 0;
    do {
      if ((*(int *)(iVar1 + 0x34 + DAT_00740934) == param_1) &&
         (*(int *)(iVar1 + 0x30 + DAT_00740934) == 0)) {
        return i;
      }
      FUN_004c3fa0(s__d_used__d_005b5084,i,*(undefined4 *)(iVar1 + 0x30 + DAT_00740934));
      i = i + 1;
      iVar1 = iVar1 + 0x44;
    } while (i < DAT_00740928);
  }
  return -1;
}


/* ==== 004c6fb0 FUN_004c6fb0 ==== */

uint FUN_004c6fb0(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint i;
  int iVar6;
  
  uVar5 = (uint)(param_1 == 0);
  i = 0;
  if (0 < DAT_00740928) {
    iVar6 = uVar5 * 0x44;
    iVar4 = 0;
    do {
      if ((((i != uVar5) && (i != param_1)) && (iVar2 = FUN_004c6bd0(i), iVar2 == 0)) &&
         (*(int *)(iVar4 + 0x38 + DAT_00740934) < *(int *)(iVar6 + 0x38 + DAT_00740934))) {
        uVar5 = i;
        iVar6 = iVar4;
      }
      i = i + 1;
      iVar4 = iVar4 + 0x44;
    } while ((int)i < DAT_00740928);
  }
  FUN_004c3fa0(s_deleting__d_005b5090,uVar5);
  iVar4 = uVar5 * 0x44;
  piVar1 = *(int **)(iVar4 + 0x28 + DAT_00740934);
  iVar6 = (**(code **)(*piVar1 + 0x48))(piVar1);
  if (iVar6 != 0) {
    uVar3 = FUN_004c65b0(iVar6);
    FUN_004c4150(s__s__d____error_releasing_sound_b_005b5054,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x2a2,uVar3);
  }
  piVar1 = *(int **)(iVar4 + 0x28 + DAT_00740934);
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(iVar4 + 0x30 + DAT_00740934) = 0;
  i = 0;
  *(undefined4 *)(iVar4 + 0x38 + DAT_00740934) = 0;
  if (0 < DAT_00740928) {
    iVar4 = 0;
    iVar6 = DAT_00740934;
    do {
      iVar2 = *(int *)(iVar4 + 0x38 + iVar6);
      if (((iVar2 != 10000) && (i != uVar5)) && (1 < iVar2)) {
        *(int *)(iVar4 + 0x38 + iVar6) = iVar2 + -1;
        iVar6 = DAT_00740934;
      }
      i = i + 1;
      iVar4 = iVar4 + 0x44;
    } while ((int)i < DAT_00740928);
  }
  return uVar5;
}


/* ==== 004c70d0 FUN_004c70d0 ==== */

void FUN_004c70d0(void)

{
  FUN_004c3fa0(s_Exiting_Sound_Lib_005b50f0);
  if (DAT_00740950 != 0) {
    FUN_004c3fa0(s_Deleting_all_sound_buffers_005b50d4);
    FUN_004c6dd0();
    FUN_004c3fa0(s_release_sound_buffers_005b50bc);
    (**(code **)(*DAT_00740924 + 8))(DAT_00740924);
    FUN_004c3fa0(s_Discard_xvga_sound_buffer_005b50a0);
    LocalReAlloc(DAT_00740934,0,2);
    DAT_00740950 = 0;
    DAT_00740954 = 0;
    DAT_00740958 = 0;
    DAT_0074095c = 0;
    DAT_00740960 = 0;
  }
  return;
}


/* ==== 004c7150 FUN_004c7150 ==== */

undefined4 FUN_004c7150(undefined4 param_1)

{
  int iVar1;
  int i;
  
  i = 0xd;
  while( true ) {
    iVar1 = FUN_004c71b0(param_1,i);
    if (iVar1 == 0x2af9) {
      return 0;
    }
    if (iVar1 != 0x2afa) break;
    i = i + -1;
    if (i < 1) {
      return 0;
    }
  }
  iVar1 = i * 0x10;
  FUN_004c3fa0(s_Sound_mode_used___d___freq__d__b_005b5104,i,*(undefined4 *)(&DAT_005b4b60 + iVar1),
               *(undefined4 *)(&DAT_005b4b64 + iVar1),*(undefined4 *)(&DAT_005b4b68 + iVar1));
  return 1;
}


/* ==== 004c71b0 FUN_004c71b0 ==== */

undefined4 FUN_004c71b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  FUN_004c6860();
  if (DAT_00740950 != 0) {
    return 0;
  }
  if (DAT_00740954 == 0) {
    if (DAT_005b4c40 == -1) {
      if (DAT_005b4c44 == -1) {
        FUN_004c3fa0(s_Using_default_driver_005b525c);
        iVar1 = DirectSoundCreate(0,&DAT_00740924,0);
        if (iVar1 != 0) {
          uVar2 = FUN_004c65b0(iVar1);
          uVar3 = 0x34c;
          goto LAB_004c72b4;
        }
        pcVar4 = s_Default_driver_init_failure___No_005b5208;
      }
      else {
        FUN_004c3fa0(s_Attempting_to_use_secondary_driv_005b52ac);
        iVar1 = DirectSoundCreate(DAT_00740930 + DAT_005b4c44 * 0xd8,&DAT_00740924,0);
        if (iVar1 != 0) {
          uVar2 = FUN_004c65b0(iVar1);
          uVar3 = 0x344;
LAB_004c72b4:
          FUN_004c3fa0(s__s__d____error_creating_sound_ob_005b5230,
                       s_D__Work_dxdraw_Sound_cpp_005b4f74,uVar3,uVar2);
          return 0x2af9;
        }
        pcVar4 = s_Attempting_to_use_secondary__unk_005b5274;
      }
    }
    else {
      FUN_004c3fa0(s_Attempting_to_use_sb16_driver_005b52fc);
      iVar1 = DirectSoundCreate(DAT_00740930 + DAT_005b4c40 * 0xd8,&DAT_00740924,0);
      if (iVar1 != 0) {
        uVar2 = FUN_004c65b0(iVar1);
        uVar3 = 0x33b;
        goto LAB_004c72b4;
      }
      pcVar4 = s_Attempting_to_use_sb16_driver_su_005b52d0;
    }
    DAT_00740954 = 1;
    FUN_004c3fa0(pcVar4);
  }
  if (DAT_00740958 == 0) {
    iVar1 = (**(code **)(*DAT_00740924 + 0x18))(DAT_00740924,DAT_007408a4,3);
    if (iVar1 != 0) {
      uVar2 = FUN_004c65b0(1);
      FUN_004c3fa0(s__s__d____error_setting_the_coop_l_005b51d8,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x357,uVar2);
      return 0x2af9;
    }
    DAT_00740958 = 1;
  }
  if (DAT_0074095c == 0) {
    DAT_00740934 = LocalAlloc(0x40,param_1 * 0x44);
    if (DAT_00740934 == (HLOCAL)0x0) {
      FUN_004c4150(s__s__d____not_enough_memory_to_cr_005b51a0,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x35f);
    }
    DAT_0074095c = 1;
  }
  DAT_00740928 = param_1;
  if (0 < param_1) {
    iVar1 = 0;
    do {
      param_1 = param_1 + -1;
      *(undefined4 *)(iVar1 + 0x30 + (int)DAT_00740934) = 0;
      *(undefined4 *)(iVar1 + 0x38 + (int)DAT_00740934) = 0;
      *(undefined4 *)(iVar1 + 0x34 + (int)DAT_00740934) = 0;
      *(undefined4 *)(iVar1 + 0x40 + (int)DAT_00740934) = 0xffffffff;
      iVar1 = iVar1 + 0x44;
    } while (param_1 != 0);
  }
  if ((((-1 < param_2) && (param_2 < 0xe)) ||
      (FUN_004c4150(s__s__d____error_illegal_sound_mod_005b5170), param_2 != 0xe)) &&
     (DAT_00740960 == 0)) {
    param_2 = param_2 * 0x10;
    iVar1 = FUN_004c6880(*(undefined4 *)(&DAT_005b4b60 + param_2),
                         *(undefined4 *)(&DAT_005b4b64 + param_2),
                         *(undefined4 *)(&DAT_005b4b6c + param_2),
                         *(undefined4 *)(&DAT_005b4b68 + param_2));
    if (iVar1 != 0) {
      return 0x2afa;
    }
    pcVar4 = s_STEREO_005b5168;
    if (*(int *)(&DAT_005b4b68 + param_2) == 0) {
      pcVar4 = s_MONO_005b5160;
    }
    FUN_004c3fa0(s_setting_sound_format__dHz__dbits_005b5138,
                 *(undefined4 *)(&DAT_005b4b60 + param_2),*(undefined4 *)(&DAT_005b4b64 + param_2),
                 pcVar4);
    DAT_00740960 = 1;
  }
  DAT_00740950 = 1;
  return 0;
}


/* ==== 004c7460 FUN_004c7460 ==== */

undefined4 FUN_004c7460(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
      FUN_004c4150(s__s__d____sound_buffer_index_ille_005b5394,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x402,param_1);
    }
    if (*(int *)(param_1 * 0x44 + 0x30 + DAT_00740934) != 0) {
      if (((param_2 < 100) || (100000 < param_2)) && (param_2 != 0)) {
        FUN_004c4150(s__s__d____attempt_at_setting_buff_005b534c,s_D__Work_dxdraw_Sound_cpp_005b4f74
                     ,0x40c,param_1,param_2);
      }
      piVar1 = *(int **)(param_1 * 0x44 + 0x28 + DAT_00740934);
      iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_2);
      if (iVar2 != 0) {
        uVar3 = FUN_004c65b0(iVar2);
        FUN_004c4150(s__s__d____sound_buffer_index_ille_005b531c,s_D__Work_dxdraw_Sound_cpp_005b4f74
                     ,0x410,param_1,uVar3);
      }
    }
  }
  return 0;
}


/* ==== 004c7520 FUN_004c7520 ==== */

undefined4 FUN_004c7520(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  
  iVar2 = param_1;
  if (DAT_00740950 == 0) {
    return 0;
  }
  if ((param_1 < 0) || (DAT_00740928 < param_1)) {
    FUN_004c4150(s__s__d____sound_buffer_index_ille_005b5394,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x42d,param_1);
  }
  iVar3 = DAT_00740934 + iVar2 * 0x44;
  if (*(int *)(iVar3 + 0x30) == 0) {
    return 0;
  }
  piVar1 = *(int **)(iVar3 + 0x28);
  iVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,&param_1);
  if (iVar3 != 0) {
    uVar4 = FUN_004c65b0(iVar3);
    FUN_004c4150(s__s__d____sound_buffer_index_ille_005b531c,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x436,iVar2,uVar4);
  }
  return unaff_ESI;
}


/* ==== 004c75b0 FUN_004c75b0 ==== */

undefined4 FUN_004c75b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
      FUN_004c4150(s__s__d____sound_buffer_index_ille_005b5394,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x454,param_1);
    }
    if (*(int *)(param_1 * 0x44 + 0x30 + DAT_00740934) != 0) {
      if ((param_2 < -10000) || (-100 < param_2)) {
        FUN_004c4150(s__s__d____attempt_at_setting_buff_005b53c0,s_D__Work_dxdraw_Sound_cpp_005b4f74
                     ,0x45e,param_1,param_2);
      }
      piVar1 = *(int **)(param_1 * 0x44 + 0x28 + DAT_00740934);
      iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,param_2);
      if (iVar2 != 0) {
        uVar3 = FUN_004c65b0(iVar2);
        FUN_004c4150(s__s__d____sound_buffer_index_ille_005b531c,s_D__Work_dxdraw_Sound_cpp_005b4f74
                     ,0x462,param_1,uVar3);
      }
    }
  }
  return 0;
}


/* ==== 004c7670 FUN_004c7670 ==== */

undefined4 FUN_004c7670(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
      FUN_004c4150(s__s__d____sound_buffer_index_ille_005b5394,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x4a4,param_1);
    }
    iVar3 = param_1 * 0x44;
    if (*(int *)(iVar3 + 0x34 + DAT_00740934) == 1) {
      FUN_004c4150(s__s__d____type_sound_buffer__d_in_005b5434,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x4a9,param_1);
    }
    if (*(int *)(iVar3 + 0x30 + DAT_00740934) != 0) {
      if ((param_2 < -10000) || (10000 < param_2)) {
        FUN_004c4150(s__s__d____attempt_at_setting_buff_005b5400,s_D__Work_dxdraw_Sound_cpp_005b4f74
                     ,0x4b3,param_1,param_2);
      }
      piVar1 = *(int **)(iVar3 + 0x28 + DAT_00740934);
      iVar3 = (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
      if (iVar3 != 0) {
        uVar2 = FUN_004c65b0(iVar3);
        FUN_004c4150(s__s__d____sound_buffer_index_ille_005b531c,s_D__Work_dxdraw_Sound_cpp_005b4f74
                     ,0x4b7,param_1,uVar2);
      }
    }
  }
  return 0;
}


/* ==== 004c7750 FUN_004c7750 ==== */

undefined4 FUN_004c7750(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_ESI;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  undefined4 this_val;
  
  uVar4 = param_2;
  if ((param_4 != -1) && (iVar2 = FUN_004c6160(param_2,param_4,0), iVar2 != 0)) {
    return 0x3e9;
  }
  this_val = 1;
  puVar6 = local_8;
  puVar5 = local_4;
  piVar1 = *(int **)(param_1 * 0x44 + 0x28 + DAT_00740934);
  iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,0,param_3,puVar5,puVar6,&param_2,&param_4,1);
  if (iVar2 != 0) {
    uVar3 = FUN_004c65b0(iVar2);
    FUN_004c4150(s__s__d____error_locking_sound_buf_005b54a4,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x4fb,param_1,uVar3);
  }
  if ((puVar5 != (undefined1 *)0x0) && (iVar2 = FUN_00558b35(), iVar2 != 1)) {
    return 0x3e9;
  }
  if ((unaff_ESI != 0) && (iVar2 = FUN_00558b35(this_val,this_val,unaff_ESI,1,uVar4), iVar2 != 1)) {
    return 0x3e9;
  }
  piVar1 = *(int **)(param_1 * 0x44 + 0x28 + DAT_00740934);
  iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,puVar6,puVar5,this_val,unaff_ESI);
  if (iVar2 != 0) {
    uVar4 = FUN_004c65b0(iVar2);
    FUN_004c4150(s__s__d____error_unlocking_sound_b_005b5470,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x50e,param_1,uVar4);
  }
  return 0;
}


/* ==== 004c7880 FUN_004c7880 ==== */

undefined4 FUN_004c7880(char *str2,int param_2)

{
  FILE *file;
  int iVar1;
  undefined4 uVar2;
  short local_16;
  undefined4 local_14;
  short local_c;
  short local_a;
  undefined4 local_4;
  
  if (DAT_00740950 != 0) {
    file = (FILE *)FUN_004c62c0(str2);
    if (file == (FILE *)0x0) {
      FUN_004c3fa0(s___s__005b5540,str2);
      return 1000;
    }
    iVar1 = FUN_00558b35();
    if (iVar1 != 1) {
      FUN_004c6430(file);
      return 0x3e9;
    }
    FUN_004c3fa0(s_file____s_005b552c,str2);
    FUN_004c3fa0(s_bufferlength__d_005b5518,local_4);
    FUN_004c3fa0(s_samplerate___d_005b5504,local_14);
    FUN_004c3fa0(s_bpps___d_005b54f0,(int)local_a);
    FUN_004c3fa0(s_align___d_stereo__d_005b54d4,(int)local_c,1 < local_16);
    iVar1 = param_2 * 0x44;
    *(undefined4 *)(iVar1 + 0x3c + DAT_00740934) = local_4;
    if (*(int *)(iVar1 + 0x34 + DAT_00740934) == 0) {
      uVar2 = FUN_004c69c0(local_4,local_14,(int)local_a,(int)local_c);
      *(undefined4 *)(iVar1 + 0x28 + DAT_00740934) = uVar2;
      if (*(int *)(iVar1 + 0x28 + DAT_00740934) == 0) {
        return 2000;
      }
    }
    else {
      iVar1 = FUN_004c6a90(iVar1 + 0x28 + DAT_00740934,iVar1 + 0x2c + DAT_00740934,local_4,local_14,
                           (int)local_a,(int)local_c,1 < local_16);
      if (iVar1 != 0) {
        return 2000;
      }
    }
    FUN_004c7750(param_2,file,local_4,0x2c);
    FUN_004c6430(file);
  }
  return 0;
}


/* ==== 004c7a10 FUN_004c7a10 ==== */

int __thiscall FUN_004c7a10(void *this,char *str2,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint i;
  uint j;
  char *pcVar7;
  char *pcVar8;
  
  if (DAT_00740950 == 0) {
    return -1;
  }
  iVar3 = FUN_004c6ee0(str2,0,0,0);
  if (iVar3 == -1) {
    iVar4 = FUN_004c6f50(0);
    if (iVar4 == -1) {
      iVar4 = FUN_004c6fb0(0xffffffff);
    }
    FUN_004c3fa0(s_new_buffer_used__d_005b55bc,iVar4);
    iVar3 = FUN_004c7880(str2,iVar4);
    if (iVar3 != 0) {
      return -1;
    }
    *(undefined4 *)(iVar4 * 0x44 + 0x30 + DAT_00740934) = 1;
    i = 0xffffffff;
    pcVar7 = str2;
    do {
      pcVar8 = pcVar7;
      if (i == 0) break;
      i = i - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    i = ~i;
    pcVar7 = pcVar8 + -i;
    pcVar8 = (char *)(DAT_00740934 + iVar4 * 0x44);
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (i = i & 3; i != 0; i = i - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  else {
    iVar5 = FUN_004c6bd0(iVar3);
    iVar4 = iVar3;
    if ((iVar5 != 0) && (iVar4 = FUN_004c6ee0(str2,0,iVar3 + 1,1), iVar4 == -1)) {
      iVar4 = FUN_004c6f50(0);
      if (iVar4 == -1) {
        iVar4 = FUN_004c6fb0(iVar3);
      }
      if (iVar4 == iVar3) {
        FUN_004c4150(s__s__d____duplicate_buffers_005b559c,s_D__Work_dxdraw_Sound_cpp_005b4f74,0x5f6
                    );
      }
      FUN_004c3fa0(s_duplicate_used__d_005b5588,iVar4);
      iVar5 = iVar4 * 0x44;
      *(undefined4 *)(iVar5 + 0x30 + DAT_00740934) = 1;
      i = 0xffffffff;
      pcVar7 = str2;
      do {
        pcVar8 = pcVar7;
        if (i == 0) break;
        i = i - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      i = ~i;
      pcVar7 = pcVar8 + -i;
      pcVar8 = (char *)(DAT_00740934 + iVar5);
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar6 = FUN_004c6b90(*(undefined4 *)(DAT_00740934 + 0x28 + iVar3 * 0x44));
      *(undefined4 *)(iVar5 + 0x28 + DAT_00740934) = uVar6;
    }
  }
  if ((param_3 & 4) == 0) {
    *(undefined4 *)(iVar4 * 0x44 + 0x38 + DAT_00740934) = DAT_00740928;
  }
  else {
    param_3 = param_3 - 4;
    *(undefined4 *)(iVar4 * 0x44 + 0x38 + DAT_00740934) = 1000000;
  }
  iVar3 = FUN_004c6bd0(iVar4);
  if (iVar3 == 0) {
    FUN_004c75b0(iVar4,param_2);
    piVar2 = *(int **)(iVar4 * 0x44 + 0x28 + DAT_00740934);
    iVar3 = (**(code **)(*piVar2 + 0x30))(piVar2,0,0,param_3);
    if (iVar3 != 0) {
      uVar6 = FUN_004c65b0(iVar3);
      FUN_004c4150(s__s__d____error_playing_sound__d___005b5548,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x60b,iVar4,uVar6);
    }
  }
  FUN_004c3fa0(s_playing__s_buffer__d_005b5570,str2,iVar4);
  return iVar4;
}


/* ==== 004c7c50 FUN_004c7c50 ==== */

int FUN_004c7c50(char *str2,byte param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint i;
  uint j;
  char *pcVar6;
  char *pcVar7;
  
  if (DAT_00740950 == 0) {
    return -1;
  }
  iVar2 = FUN_004c6ee0(str2,0,0,0);
  if (iVar2 == -1) {
    iVar3 = FUN_004c6f50(0);
    if (iVar3 == -1) {
      iVar3 = FUN_004c6fb0(0xffffffff);
    }
    FUN_004c3fa0(s_new_buffer_used__d_005b55bc,iVar3);
    iVar2 = FUN_004c7880(str2,iVar3);
    if (iVar2 != 0) {
      return -1;
    }
    *(undefined4 *)(iVar3 * 0x44 + 0x30 + DAT_00740934) = 1;
    i = 0xffffffff;
    do {
      pcVar6 = str2;
      if (i == 0) break;
      i = i - 1;
      pcVar6 = str2 + 1;
      cVar1 = *str2;
      str2 = pcVar6;
    } while (cVar1 != '\0');
    i = ~i;
    pcVar6 = pcVar6 + -i;
    pcVar7 = (char *)(DAT_00740934 + iVar3 * 0x44);
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (i = i & 3; i != 0; i = i - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  else {
    iVar4 = FUN_004c6bd0(iVar2);
    iVar3 = iVar2;
    if ((iVar4 != 0) && (iVar3 = FUN_004c6ee0(str2,0,iVar2 + 1,1), iVar3 == -1)) {
      iVar3 = FUN_004c6f50(0);
      if (iVar3 == -1) {
        iVar3 = FUN_004c6fb0(iVar2);
      }
      if (iVar3 == iVar2) {
        FUN_004c4150(s__s__d____duplicate_buffers_005b559c,s_D__Work_dxdraw_Sound_cpp_005b4f74,0x644
                    );
      }
      FUN_004c3fa0(s_duplicate_used__d_005b5588,iVar3);
      iVar4 = iVar3 * 0x44;
      *(undefined4 *)(DAT_00740934 + 0x30 + iVar4) = 1;
      i = 0xffffffff;
      do {
        pcVar6 = str2;
        if (i == 0) break;
        i = i - 1;
        pcVar6 = str2 + 1;
        cVar1 = *str2;
        str2 = pcVar6;
      } while (cVar1 != '\0');
      i = ~i;
      pcVar6 = pcVar6 + -i;
      pcVar7 = (char *)(DAT_00740934 + iVar4);
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar5 = FUN_004c6b90(*(undefined4 *)(DAT_00740934 + 0x28 + iVar2 * 0x44));
      *(undefined4 *)(DAT_00740934 + 0x28 + iVar4) = uVar5;
    }
  }
  if ((param_2 & 4) == 0) {
    *(undefined4 *)(DAT_00740934 + 0x38 + iVar3 * 0x44) = DAT_00740928;
    return iVar3;
  }
  *(undefined4 *)(DAT_00740934 + 0x38 + iVar3 * 0x44) = 1000000;
  return iVar3;
}


/* ==== 004c7e20 FUN_004c7e20 ==== */

void FUN_004c7e20(int param_1,undefined4 param_2)

{
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
      FUN_004c4150(s__s__d____sound_buffer_index_ille_005b5394,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                   0x66a,param_1);
    }
    *(undefined4 *)(DAT_00740934 + 0x40 + param_1 * 0x44) = param_2;
  }
  return;
}


/* ==== 004c7e70 FUN_004c7e70 ==== */

undefined4 FUN_004c7e70(int param_1)

{
  if (DAT_00740950 == 0) {
    return 0xffffffff;
  }
  if ((param_1 < 0) || (DAT_00740928 < param_1)) {
    FUN_004c4150(s__s__d____sound_buffer_index_ille_005b5394,s_D__Work_dxdraw_Sound_cpp_005b4f74,
                 0x683,param_1);
  }
  return *(undefined4 *)(DAT_00740934 + 0x40 + param_1 * 0x44);
}


