/* spel.dat — dxdraw/ascii.cpp: 8 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ca0d0 FUN_004ca0d0 ==== */

void FUN_004ca0d0(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(DAT_00740a18 + 0x88) = param_1;
  DAT_00740a10 = param_1;
  *(undefined4 *)(DAT_00740a18 + 0x8c) = param_2;
  DAT_00740a0c = param_2;
  return;
}


/* ==== 004ca100 FUN_004ca100 ==== */

undefined4 FUN_004ca100(void)

{
  return DAT_00740a18;
}


/* ==== 004ca110 FUN_004ca110 ==== */

void FUN_004ca110(int param_1)

{
  if (DAT_00740a18 != param_1) {
    DAT_00740a18 = param_1;
    if (param_1 != 0) {
      DAT_00740a14 = 1;
      DAT_00740a0c = *(undefined4 *)(param_1 + 0x8c);
      DAT_00740a10 = *(undefined4 *)(param_1 + 0x88);
      return;
    }
    DAT_00740a14 = 0;
    DAT_00740a0c = 0;
    DAT_00740a10 = 0;
  }
  return;
}


/* ==== 004ca160 FUN_004ca160 ==== */

undefined4 FUN_004ca160(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_00740a14 == 0) {
    FUN_004c4150(s__s__d____current_ascii_set_not_d_005b5cdc,s_D__Work_dxdraw_ascii_cpp_005b5c54,
                 0xd2);
  }
  if ((param_1 < 0) || (*(int *)(DAT_00740a18 + 100) <= param_1)) {
    FUN_004c4150(s__s__d____index_out_of_mem_image_a_005b5ca8,s_D__Work_dxdraw_ascii_cpp_005b5c54,
                 0xd6,param_1);
  }
  puVar1 = (undefined4 *)(*(int *)(DAT_00740a18 + 0x68) + param_1 * 0xc);
  iVar2 = puVar1[2];
  if (iVar2 == 0) {
    FUN_004c4150(s__s__d____locking_ascii_char_that_005b5c70,s_D__Work_dxdraw_ascii_cpp_005b5c54,
                 0xdb,param_1);
  }
  else {
    if (iVar2 == 1) {
      uVar3 = FUN_004c48f0(*(undefined4 *)*puVar1,param_2);
      return uVar3;
    }
    if (iVar2 == 2) {
      uVar3 = FUN_004c48f0(*(undefined4 *)(puVar1[1] * 0x20 + 4 + DAT_00740d44),param_2);
      return uVar3;
    }
  }
  return param_2;
}


/* ==== 004ca220 FUN_004ca220 ==== */

undefined4 FUN_004ca220(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_00740a14 == 0) {
    FUN_004c4150(s__s__d____current_ascii_set_not_d_005b5cdc,s_D__Work_dxdraw_ascii_cpp_005b5c54,
                 0xf4);
  }
  if ((param_1 < 0) || (*(int *)(DAT_00740a18 + 100) <= param_1)) {
    FUN_004c4150(s__s__d____index_out_of_mem_image_a_005b5ca8,s_D__Work_dxdraw_ascii_cpp_005b5c54,
                 0xf7,param_1);
  }
  puVar1 = (undefined4 *)(*(int *)(DAT_00740a18 + 0x68) + param_1 * 0xc);
  iVar2 = puVar1[2];
  if (iVar2 == 0) {
    FUN_004c4150(s__s__d____unlocking_ascii_char_th_005b5d08,s_D__Work_dxdraw_ascii_cpp_005b5c54,
                 0xfc,param_1);
  }
  else {
    if (iVar2 == 1) {
      FUN_004c4a20(*(undefined4 *)*puVar1,param_2);
      return 0;
    }
    if (iVar2 == 2) {
      FUN_004c4a20(*(undefined4 *)(puVar1[1] * 0x20 + 4 + DAT_00740d44),param_2);
      return 0;
    }
  }
  return 0;
}


/* ==== 004ca2e0 FUN_004ca2e0 ==== */

void FUN_004ca2e0(undefined4 param_1,int param_2,int param_3,byte *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = *param_4;
  DAT_00740a00 = param_3;
  DAT_007409fc = param_2;
  do {
    if (bVar2 == 0) {
      DAT_007409fc = param_2;
      return;
    }
    uVar4 = (uint)bVar2;
    iVar5 = DAT_007409fc;
    if ((int)uVar4 < *(int *)(DAT_00740a18 + 100)) {
      piVar1 = (int *)(*(int *)(DAT_00740a18 + 0x68) + uVar4 * 0xc);
      iVar5 = *piVar1;
      iVar3 = *(int *)(iVar5 + 4);
      if (uVar4 == 9) {
        DAT_007409fc = DAT_007409fc + DAT_00740a10 + iVar3;
      }
      else if (uVar4 == 10) {
        iVar5 = DAT_00740a0c + DAT_00740a00 + *(int *)(iVar5 + 8);
        if (DAT_005b379c <= iVar5) {
          DAT_007409fc = param_2;
          return;
        }
        DAT_007409fc = 0;
        DAT_00740a00 = iVar5;
      }
      else {
        if (piVar1[2] == 1) {
          iVar5 = DAT_007409fc;
          DAT_007409fc = param_2;
          FUN_004c9560(param_1,uVar4,iVar5,DAT_00740a00,0);
        }
        DAT_007409fc = DAT_007409fc + DAT_00740a10 + iVar3;
      }
      iVar5 = DAT_007409fc;
      param_2 = DAT_007409fc;
      if (DAT_005b3798 < DAT_007409fc) {
        return;
      }
    }
    DAT_007409fc = param_2;
    param_4 = param_4 + 1;
    bVar2 = *param_4;
    param_2 = DAT_007409fc;
    DAT_007409fc = iVar5;
  } while( true );
}


/* ==== 004ca3d0 FUN_004ca3d0 ==== */

undefined4 FUN_004ca3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_190 [400];
  
  uVar1 = FUN_005590ae(local_190,param_4,&stack0x00000014);
  FUN_004ca2e0(param_1,param_2,param_3,local_190);
  return uVar1;
}


/* ==== 004ca420 FUN_004ca420 ==== */

undefined4 FUN_004ca420(char *str2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  short *psVar6;
  int k;
  HLOCAL pvVar7;
  undefined4 uVar8;
  int i;
  int j;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *local_838;
  int m;
  undefined2 uStack_82e;
  int iStack_82c;
  short local_828;
  short local_826;
  short local_824;
  short local_822;
  undefined4 local_820;
  undefined4 local_81c;
  int local_818;
  short *local_814;
  uint uStack_810;
  undefined4 local_80c;
  uint uStack_808;
  uint uStack_804;
  short local_800 [1024];
  
  local_80c = FUN_004ca100();
  FUN_004c3fa0(s_Load_new_ascii_set__s__005b5d98,str2);
  iVar5 = FUN_004c62c0(str2);
  if (iVar5 != 0) {
    psVar6 = local_800;
    for (i = 0x200; i != 0; i = i + -1) {
      psVar6[0] = 0;
      psVar6[1] = 0;
      psVar6 = psVar6 + 2;
    }
    FUN_00558b35(local_800,8,0x100,iVar5);
    psVar6 = local_800;
    i = -1;
    iVar9 = -1;
    j = 0;
    do {
      if (((0 < *psVar6) && (0 < psVar6[1])) &&
         (k = (int)psVar6[1] * (int)*psVar6, k - i != 0 && i <= k)) {
        i = k;
        iVar9 = j;
      }
      j = j + 1;
      psVar6 = psVar6 + 4;
    } while (j < 0x100);
    if ((-1 < i) && (-1 < iVar9)) {
      FUN_004c3fa0(s_Largest_buffer_size_of_character_005b5d58,i,iVar9);
      FUN_00558b35(&local_824,1,2,iVar5);
      FUN_00558b35(&local_822,1,2,iVar5);
      FUN_00558b35(&local_826,1,2,iVar5);
      FUN_00558b35(&local_828,1,2,iVar5);
      *(int *)(str2 + 0x70) = (int)local_824;
      *(int *)(str2 + 0x74) = (int)local_822;
      *(int *)(str2 + 0x78) = (int)local_826;
      sVar1 = local_800[iVar9 * 4];
      sVar2 = local_800[iVar9 * 4 + 1];
      str2[0x88] = '\0';
      str2[0x89] = '\0';
      str2[0x8a] = '\0';
      str2[0x8b] = '\0';
      str2[0x8c] = '\0';
      str2[0x8d] = '\0';
      str2[0x8e] = '\0';
      str2[0x8f] = '\0';
      str2[0x6c] = '\x03';
      str2[0x6d] = '\0';
      str2[0x6e] = '\0';
      str2[0x6f] = '\0';
      str2[100] = '\0';
      str2[0x65] = '\x01';
      str2[0x66] = '\0';
      str2[0x67] = '\0';
      *(int *)(str2 + 0x7c) = (int)local_828;
      *(int *)(str2 + 0x80) = (int)sVar1;
      *(int *)(str2 + 0x84) = (int)sVar2;
      pvVar7 = LocalAlloc(0x40,0xc00);
      *(HLOCAL *)(str2 + 0x68) = pvVar7;
      if (pvVar7 == (HLOCAL)0x0) {
        return 2000;
      }
      i = 0;
      do {
        pvVar7 = LocalAlloc(0x40,0xc);
        *(HLOCAL *)(i + *(int *)(str2 + 0x68)) = pvVar7;
        if (*(int *)(i + *(int *)(str2 + 0x68)) == 0) {
          return 2000;
        }
        i = i + 0xc;
      } while (i < 0xc00);
      FUN_004ca110(str2);
      FUN_004c3fa0(s_Importing_char_data_005b5d40);
      local_814 = local_800 + 1;
      local_818 = 0;
      i = 0;
      do {
        iVar9 = local_818;
        j = 0;
        if ((local_814[-1] < 1) || (*local_814 < 1)) {
          *(undefined4 *)(*(int *)(DAT_00740a18 + 0x68) + 8 + i) = 0;
          *(undefined4 *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + i) + 4) = 0;
          *(undefined4 *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + i) + 8) = 0;
        }
        else {
          *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + i) + 4) = (int)local_814[-1];
          *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + i) + 8) = (int)*local_814;
          *(undefined4 *)(*(int *)(DAT_00740a18 + 0x68) + 8 + i) = 1;
          FUN_004c6160(iVar5,*(undefined4 *)(local_814 + 1),0);
          k = *(int *)(*(int *)(DAT_00740a18 + 0x68) + i);
          uVar8 = FUN_004c4a80(*(undefined4 *)(k + 4),*(undefined4 *)(k + 8));
          **(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + i) = uVar8;
          if (**(int **)(*(int *)(DAT_00740a18 + 0x68) + i) == 0) {
            return 2000;
          }
          uVar8 = DAT_005b3940;
          if (DAT_007409cc != 0) {
            if (DAT_007409cc == 4) {
              uVar8 = FUN_004c81b0(DAT_007408f0,0x18);
            }
            else {
              uVar8 = FUN_004c81b0(DAT_005b3940,8);
            }
          }
          piVar3 = (int *)**(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + i);
          local_820 = uVar8;
          local_81c = uVar8;
          k = (**(code **)(*piVar3 + 0x74))(piVar3,8,&local_820);
          if (k != 0) {
            uVar8 = FUN_004c4400(k);
            FUN_004c4150(s__s__d____failed_to_set_color_key_005b4458,
                         s_D__Work_dxdraw_ascii_cpp_005b5c54,0x423,uVar8);
          }
          local_838 = (undefined2 *)FUN_004ca160(iVar9,&iStack_82c);
          switch(DAT_007409cc) {
          case 0:
            iVar9 = *(int *)(*(int *)(DAT_00740a18 + 0x68) + i);
            if (0 < *(int *)(iVar9 + 8)) {
              do {
                FUN_00558b35(local_838,1,*(undefined4 *)(iVar9 + 4),iVar5);
                local_838 = (undefined2 *)((int)local_838 + iStack_82c);
                j = j + 1;
                iVar9 = *(int *)(*(int *)(DAT_00740a18 + 0x68) + i);
              } while (j < *(int *)(iVar9 + 8));
            }
            break;
          case 1:
            m = 0;
            iVar9 = *(int *)(DAT_00740a18 + 0x68);
            j = DAT_00740a18;
            if (0 < *(int *)(*(int *)(i + iVar9) + 8)) {
              do {
                k = 0;
                puVar10 = local_838;
                if (0 < *(int *)(*(int *)(i + iVar9) + 4)) {
                  do {
                    FUN_00558b35(&uStack_808,1,1,iVar5);
                    uVar4 = FUN_004c81b0(uStack_808 & 0xff,8);
                    *puVar10 = uVar4;
                    puVar10 = puVar10 + 1;
                    k = k + 1;
                    j = DAT_00740a18;
                  } while (k < *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + i) + 4));
                }
                local_838 = (undefined2 *)((int)local_838 + iStack_82c);
                iVar9 = *(int *)(j + 0x68);
                m = m + 1;
              } while (m < *(int *)(*(int *)(i + iVar9) + 8));
            }
            break;
          case 2:
            m = 0;
            iVar9 = *(int *)(DAT_00740a18 + 0x68);
            j = DAT_00740a18;
            if (0 < *(int *)(*(int *)(i + iVar9) + 8)) {
              do {
                k = 0;
                puVar10 = local_838;
                if (0 < *(int *)(*(int *)(i + iVar9) + 4)) {
                  do {
                    FUN_00558b35(&uStack_810,1,1,iVar5);
                    FUN_004c8380(uStack_810 & 0xff,8,puVar10);
                    puVar10 = (undefined2 *)((int)puVar10 + 3);
                    k = k + 1;
                    j = DAT_00740a18;
                  } while (k < *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + i) + 4));
                }
                local_838 = (undefined2 *)((int)local_838 + iStack_82c);
                iVar9 = *(int *)(j + 0x68);
                m = m + 1;
              } while (m < *(int *)(*(int *)(i + iVar9) + 8));
            }
            break;
          case 4:
            m = 0;
            iVar9 = *(int *)(DAT_00740a18 + 0x68);
            j = DAT_00740a18;
            if (0 < *(int *)(*(int *)(i + iVar9) + 8)) {
              do {
                k = 0;
                puVar10 = local_838;
                if (0 < *(int *)(*(int *)(i + iVar9) + 4)) {
                  do {
                    FUN_00558b35(&uStack_804,1,1,iVar5);
                    FUN_00558b35(&uStack_82e,1,1,iVar5);
                    FUN_00558b35((int)&uStack_82e + 1,1,1,iVar5);
                    uVar4 = FUN_004c81b0((uint)uStack_82e << 8 | uStack_804 & 0xff,0x18);
                    *puVar10 = uVar4;
                    puVar10 = puVar10 + 1;
                    k = k + 1;
                    j = DAT_00740a18;
                  } while (k < *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + i) + 4));
                }
                local_838 = (undefined2 *)((int)local_838 + iStack_82c);
                iVar9 = *(int *)(j + 0x68);
                m = m + 1;
              } while (m < *(int *)(*(int *)(i + iVar9) + 8));
            }
          }
          iVar9 = local_818;
          FUN_004ca220(local_818,local_838);
          if ((*(byte *)(iVar5 + 0xc) & 0x20) != 0) {
            return 0x3e9;
          }
        }
        i = i + 0xc;
        local_818 = iVar9 + 1;
        local_814 = local_814 + 4;
        if (0xbff < i) {
          *(undefined4 *)(DAT_00740a18 + 0x90) = 0x457;
          FUN_004ca110(local_80c);
          return 0;
        }
      } while( true );
    }
  }
  return 1000;
}


