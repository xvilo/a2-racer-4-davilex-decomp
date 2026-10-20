/* spel.dat — dxdraw/Hwinfo.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004cc580 FUN_004cc580 ==== */

undefined4 FUN_004cc580(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  short sVar3;
  FILE *file;
  int j;
  int k;
  int iVar4;
  int this_val;
  undefined2 *puVar5;
  undefined4 *puVar6;
  FILE *pFVar7;
  short *psVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined1 local_2b;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  int i;
  undefined2 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  file = (FILE *)FUN_005589a5(param_1,s_rb_005b496c);
  if (file == (FILE *)0x0) {
    return 1000;
  }
  FUN_0055a2d4(file);
  uVar11 = 2;
  psVar8 = &local_26;
  uVar9 = 1;
  pFVar7 = file;
  FUN_00558b35();
  DAT_005b5ea8 = local_26 + 1;
  FUN_004c3fa0(s__s_maxmemimages____d_005b60a0,param_1,DAT_005b5ea8,psVar8,uVar9,uVar11,pFVar7);
  uVar1 = (uint)(((byte)param_2 & 1) == 1);
  j = param_2 - uVar1;
  k = FUN_004cbc70(DAT_005b5ea8,j);
  if (k != 0) {
    return 2000;
  }
  if (uVar1 == 0) {
    if ((DAT_00740d4c != 0) && (k = 0, 0 < DAT_005b5ea8)) {
      this_val = 0;
      do {
        k = k + 1;
        *(undefined4 *)(this_val + DAT_00740d44) = 0;
        *(undefined4 *)(this_val + 0x1c + DAT_00740d44) = 0;
        *(int *)(this_val + 0x18 + DAT_00740d44) = j;
        this_val = this_val + 0x20;
      } while (k < DAT_005b5ea8);
    }
  }
  else {
    DAT_00740d50 = 1;
    FUN_004c3fa0(s__s_allocating_images_005b6088,param_1);
    local_10 = 0;
    if (0 < DAT_005b5ea8) {
      local_18 = 0;
      do {
        k = local_10;
        j = local_18;
        FUN_004c3fa0(s__s_allocating_image__d_005b6070,param_1,local_10);
        uVar11 = 2;
        psVar8 = &local_28;
        uVar9 = 1;
        pFVar7 = file;
        FUN_00558b35();
        FUN_00558b35(&local_2a,&local_2a,1,2,file,psVar8,uVar9,uVar11,pFVar7);
        FUN_00558b35();
        FUN_00558b35();
        *(int *)(DAT_00740d44 + 8 + j) = (int)local_28;
        *(int *)(DAT_00740d44 + 0xc + j) = (int)local_2a;
        *(int *)(DAT_00740d44 + 0x10 + j) = (int)local_24;
        *(int *)(DAT_00740d44 + 0x14 + j) = (int)local_22;
        FUN_004cbd20(k);
        FUN_004cbff0(k,&local_14);
        puVar5 = *(undefined2 **)(DAT_00740d44 + j);
        local_1c = puVar5;
        switch(DAT_007409cc) {
        case 0:
          i = 0;
          this_val = DAT_00740d44;
          if (0 < local_2a) {
            do {
              FUN_00558b35(this_val,puVar5,1,(int)local_28,file);
              this_val = (int)local_2a;
              puVar5 = (undefined2 *)((int)puVar5 + local_14);
              i = i + 1;
            } while (i < this_val);
          }
          break;
        case 1:
          i = 0;
          sVar3 = local_28;
          if (0 < local_2a) {
            do {
              j = 0;
              local_1c = puVar5;
              if (0 < sVar3) {
                do {
                  uVar11 = 1;
                  puVar10 = &local_8;
                  uVar9 = 1;
                  pFVar7 = file;
                  FUN_00558b35();
                  uVar2 = FUN_004c81b0(local_8 & 0xff,8,puVar10,uVar9,uVar11,pFVar7);
                  *puVar5 = uVar2;
                  puVar5 = puVar5 + 1;
                  j = j + 1;
                  sVar3 = local_28;
                } while (j < local_28);
              }
              puVar5 = (undefined2 *)((int)local_1c + local_14);
              i = i + 1;
              k = local_10;
              j = local_18;
              local_1c = puVar5;
            } while (i < local_2a);
          }
          break;
        case 2:
          i = 0;
          sVar3 = local_28;
          if (0 < local_2a) {
            do {
              j = 0;
              local_1c = puVar5;
              if (0 < sVar3) {
                do {
                  uVar11 = 1;
                  puVar10 = &local_4;
                  uVar9 = 1;
                  pFVar7 = file;
                  FUN_00558b35();
                  FUN_004c8380(local_4 & 0xff,8,puVar5,puVar10,uVar9,uVar11,pFVar7);
                  puVar5 = (undefined2 *)((int)puVar5 + 3);
                  j = j + 1;
                  sVar3 = local_28;
                } while (j < local_28);
              }
              puVar5 = (undefined2 *)((int)local_1c + local_14);
              i = i + 1;
              k = local_10;
              j = local_18;
              local_1c = puVar5;
            } while (i < local_2a);
          }
          break;
        case 4:
          FUN_004c3fa0(s_converting_from_24_to_16_bits_005b5ff8);
          i = 0;
          if (0 < *(int *)(DAT_00740d44 + 0xc + j)) {
            this_val = j + 8;
            iVar4 = DAT_00740d44;
            do {
              j = *(int *)(this_val + iVar4);
              k = 0;
              if (0 < j) {
                this_val = local_18 + 8;
                do {
                  FUN_00558b35(j,&local_c,1,1,file);
                  FUN_00558b35(&local_2b,&local_2b,1,1,file);
                  uVar11 = 1;
                  puVar6 = &param_2;
                  uVar9 = 1;
                  pFVar7 = file;
                  FUN_00558b35();
                  uVar2 = FUN_004c81b0((uint)CONCAT11((undefined1)param_2,local_2b) << 8 |
                                       local_c & 0xff,0x18,puVar6,uVar9,uVar11,pFVar7);
                  *puVar5 = uVar2;
                  puVar5 = puVar5 + 1;
                  j = *(int *)(this_val + DAT_00740d44);
                  k = k + 1;
                  iVar4 = DAT_00740d44;
                } while (k < j);
              }
              puVar5 = (undefined2 *)((int)local_1c + local_14);
              i = i + 1;
              k = local_10;
              j = local_18;
              local_1c = puVar5;
            } while (i < *(int *)(local_18 + 0xc + iVar4));
          }
        }
        FUN_004cc060(k);
        if ((file->_flag & 0x20) != 0) {
          DAT_00740d50 = 0;
          FUN_005588fd(file);
          return 0x3e9;
        }
        local_10 = k + 1;
        local_18 = j + 0x20;
      } while (local_10 < DAT_005b5ea8);
    }
    FUN_004c3fa0(s__s_allocating_images_done_005b6054,param_1);
  }
  FUN_005588fd(file);
  DAT_00740d50 = 1;
  return 0;
}


/* ==== 004cca00 FUN_004cca00 ==== */

int FUN_004cca00(int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    DAT_00740de4 = 0;
    return 1;
  }
  iVar1 = DAT_00740de4;
  if (DAT_00740dd4 == 0) {
    FUN_004c4150(s_s__d____error_attempting_to_find_005b60c4,s_D__Work_dxdraw_Hwinfo_cpp_005b6108,
                 0x3e);
    iVar1 = DAT_00740de4;
  }
  while( true ) {
    if (iVar1 == DAT_00740d84) {
      DAT_00740de4 = 0;
      return -1;
    }
    if (*(int *)(DAT_00740d80 + 4 + iVar1 * 8) == 3) break;
    iVar1 = iVar1 + 1;
  }
  DAT_00740de4 = iVar1 + 1;
  return iVar1 + 0x41;
}


/* ==== 004cca80 FUN_004cca80 ==== */

undefined4 FUN_004cca80(int param_1)

{
  UINT UVar1;
  int i;
  char *pcVar2;
  CHAR local_64 [100];
  
  if (DAT_00740dd4 != 0) {
    return 0;
  }
  DAT_00740d80 = LocalAlloc(0x40,param_1 * 8);
  if (DAT_00740d80 == (HLOCAL)0x0) {
    FUN_004c4150(s__s__d____error_not_enough_memory_005b6184,s_D__Work_dxdraw_Hwinfo_cpp_005b6108,
                 0x5d);
  }
  i = 0;
  DAT_00740d84 = param_1;
  if (0 < param_1) {
    do {
      FUN_005587a3(local_64,s__c___005b617c,i + 0x41);
      *(int *)((int)DAT_00740d80 + i * 8) = i;
      UVar1 = GetDriveTypeA(local_64);
      switch(UVar1) {
      case 0:
        pcVar2 = s__s___UNAVAILABLE_005b6168;
        *(undefined4 *)((int)DAT_00740d80 + i * 8 + 4) = 0;
        break;
      case 1:
        pcVar2 = s__s___UNAVAILABLE_005b6168;
        *(undefined4 *)((int)DAT_00740d80 + i * 8 + 4) = 0;
        break;
      case 2:
        pcVar2 = s__s___FLOPPY_005b6124;
        *(undefined4 *)((int)DAT_00740d80 + i * 8 + 4) = 1;
        break;
      case 3:
        pcVar2 = s__s___HDD_005b6140;
        *(undefined4 *)((int)DAT_00740d80 + i * 8 + 4) = 2;
        break;
      case 4:
        pcVar2 = s__s___NETWORK_005b6158;
        *(undefined4 *)((int)DAT_00740d80 + i * 8 + 4) = 4;
        break;
      case 5:
        pcVar2 = s__s___CDROM_005b614c;
        *(undefined4 *)((int)DAT_00740d80 + i * 8 + 4) = 3;
        break;
      case 6:
        pcVar2 = s__s___RAM_005b6134;
        *(undefined4 *)((int)DAT_00740d80 + i * 8 + 4) = 5;
        break;
      default:
        goto switchD_004ccb0a_default;
      }
      FUN_004c3fa0(pcVar2,local_64);
switchD_004ccb0a_default:
      i = i + 1;
    } while (i < param_1);
  }
  DAT_00740dd4 = 1;
  return 0;
}


/* ==== 004ccc10 FUN_004ccc10 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ccc10(void)

{
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  DWORD local_48;
  _MEMORYSTATUS memorystatus;
  _SYSTEM_INFO system_info;
  
  FUN_004c3fa0(s_Getting_system_information_005b6374);
  local_48 = 0x27;
  BVar1 = GetComputerNameA(&DAT_00740d58,&local_48);
  if (BVar1 != 0) {
    FUN_004c3fa0(s_Computername____s_005b6360,&DAT_00740d58);
  }
  local_48 = 0x27;
  BVar1 = GetUserNameA(&DAT_00740d88,&local_48);
  if (BVar1 != 0) {
    FUN_004c3fa0(s_Username____s_005b6350,&DAT_00740d88);
  }
  FUN_004cca80(0x1b);
  GlobalMemoryStatus(&memorystatus);
  DAT_00740dc8 = memorystatus.dwTotalPhys;
  DAT_00740dd0 = memorystatus.dwMemoryLoad;
  DAT_00740dcc = memorystatus.dwAvailPhys;
  FUN_004c3fa0(s_Total_Physical_Memory____d_Kb_005b632c,
               (int)(memorystatus.dwTotalPhys + ((int)memorystatus.dwTotalPhys >> 0x1f & 0x3ffU)) >>
               10);
  FUN_004c3fa0(s_Available_Physical_Memory____d_K_005b6308,
               (int)(DAT_00740dcc + ((int)DAT_00740dcc >> 0x1f & 0x3ffU)) >> 10);
  FUN_004c3fa0(s_Memory_Load__of_total_____d_005b62e8,DAT_00740dd0);
  GetSystemInfo(&system_info);
  _DAT_00740dc4 = system_info.dwProcessorType;
  if (system_info.dwProcessorType == 0x182) {
    pcVar3 = s_386_processor_installed_005b6270;
  }
  else if (system_info.dwProcessorType == 0x1e6) {
    pcVar3 = s_486_processor_installed_005b628c;
  }
  else if (system_info.dwProcessorType == 0x24a) {
    pcVar3 = s_Pentium_processor_installed_005b62a8;
  }
  else {
    pcVar3 = s_Unknown_processor_installed_005b62c8;
  }
  FUN_004c3fa0(pcVar3);
  iVar2 = GetSystemMetrics(0x43);
  if (iVar2 == 0) {
    _DAT_00740dc0 = 0;
    pcVar3 = s_Startup___Normal_Boot_005b6214;
  }
  else if (iVar2 == 1) {
    _DAT_00740dc0 = 1;
    pcVar3 = s_Startup___Safe_Mode_Boot_005b622c;
  }
  else {
    if (iVar2 != 2) goto LAB_004ccd85;
    _DAT_00740dc0 = 1;
    pcVar3 = s_Startup___Safe_Mode_Boot_With_Ne_005b6248;
  }
  FUN_004c3fa0(pcVar3);
LAB_004ccd85:
  iVar2 = GetSystemMetrics(0x13);
  if (iVar2 != 0) {
    FUN_004c3fa0(s_Mouse_is_present_005b6200);
    _DAT_00740db4 = 1;
  }
  iVar2 = GetSystemMetrics(0x3f);
  if (iVar2 != 0) {
    FUN_004c3fa0(s_Network_is_present_005b61ec);
    _DAT_00740db8 = 1;
  }
  iVar2 = GetSystemMetrics(0x49);
  if (iVar2 != 0) {
    FUN_004c3fa0(s_Windows_95_thinks_this_is_a_slow_005b61c0);
    _DAT_00740dbc = 1;
  }
  return 0;
}


/* ==== 004cce80 FUN_004cce80 ==== */

int FUN_004cce80(void)

{
  int iVar1;
  
  if (DAT_00740ddc < DAT_00740dd8) {
    iVar1 = DAT_00740ddc;
    DAT_00740ddc = DAT_00740ddc + 1;
    return iVar1;
  }
  return -1;
}


/* ==== 004ccea0 FUN_004ccea0 ==== */

void FUN_004ccea0(undefined4 *param_1,char *param_2,char *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint i;
  uint j;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = FUN_004cce80();
  if (iVar3 == -1) {
    FUN_004c4150(s__s__d____Unable_to_allocate_new_D_005b6390,s_D__Work_dxdraw_Hwinfo_cpp_005b6108,
                 0x122);
  }
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(DAT_00740db0 + iVar3 * 0xd8);
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  i = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (i == 0) break;
    i = i - 1;
    pcVar4 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar4;
  } while (cVar2 != '\0');
  i = ~i;
  pcVar4 = pcVar4 + -i;
  pcVar5 = (char *)(iVar3 * 0xd8 + 0x10 + DAT_00740db0);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  i = 0xffffffff;
  do {
    pcVar4 = param_3;
    if (i == 0) break;
    i = i - 1;
    pcVar4 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar4;
  } while (cVar2 != '\0');
  i = ~i;
  pcVar4 = pcVar4 + -i;
  pcVar5 = (char *)(iVar3 * 0xd8 + 0x74 + DAT_00740db0);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  DAT_005b60c0 = iVar3;
  return;
}


/* ==== 004cd150 FUN_004cd150 ==== */

int FUN_004cd150(void)

{
  int iVar1;
  
  iVar1 = FUN_004cce20(0x14);
  if (iVar1 == 0) {
    DirectDrawEnumerateA(&LAB_004ccf60,0);
    iVar1 = 0;
  }
  return iVar1;
}


/* ==== 004cd170 FUN_004cd170 ==== */

int FUN_004cd170(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    if (DAT_005b60bc != -1) {
      FUN_004c3fa0(s_using_3dfx_driver__d_005b64a4,DAT_005b60bc);
      return DAT_00740db0 + DAT_005b60bc * 0xd8;
    }
    if (DAT_005b60b8 != -1) {
      FUN_004c3fa0(s_using_unknown_secondary_driver___005b6480,DAT_005b60b8);
      return DAT_00740db0 + DAT_005b60b8 * 0xd8;
    }
    break;
  case 2:
    if (DAT_005b60b8 != -1) {
      FUN_004c3fa0(s_using_unknown_secondary_driver___005b6480,DAT_005b60b8);
      return DAT_00740db0 + DAT_005b60b8 * 0xd8;
    }
    break;
  case 3:
    if (DAT_005b60bc != -1) {
      FUN_004c3fa0(s_using_3dfx_driver__d_005b64a4,DAT_005b60bc);
      return DAT_00740db0 + DAT_005b60bc * 0xd8;
    }
    break;
  case 4:
    if (DAT_005b60c0 != -1) {
      FUN_004c3fa0(s_using_user_defined_driver__d_005b6460,DAT_005b60c0);
      return DAT_00740db0 + DAT_005b60c0 * 0xd8;
    }
  }
  return 0;
}


/* ==== 004cd2d0 FUN_004cd2d0 ==== */

undefined4 FUN_004cd2d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004c3fa0(s_getting_screen_mode_info_005b651c);
  iVar1 = (**(code **)(*DAT_0074088c + 0x20))(DAT_0074088c,0,0,0,&LAB_004cd280);
  if (iVar1 != 0) {
    uVar2 = FUN_004c4400(iVar1);
    FUN_004c4150(s__s__d____could_not_get_mode_info_005b64ec,s_D__Work_dxdraw_Hwinfo_cpp_005b6108,
                 0x1d6,uVar2);
  }
  FUN_004c3fa0(s_done_getting_screen_mode_info_005b64cc);
  return 0;
}


/* ==== 004cd330 FUN_004cd330 ==== */

undefined4 FUN_004cd330(int param_1)

{
  if ((param_1 < 0) || (0x13 < param_1)) {
    FUN_004c4150(s__s__d____illegal_mode_index__und_005b6538,s_D__Work_dxdraw_Hwinfo_cpp_005b6108,
                 0x1e1);
  }
  return *(undefined4 *)(&DAT_005b37c0 + param_1 * 0x14);
}


