/* spel.dat — dxdraw/Sprite.cpp: 8 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004cbc70 FUN_004cbc70 ==== */

undefined4 FUN_004cbc70(int param_1,int param_2)

{
  int iVar1;
  int i;
  
  if (param_1 < 1) {
    return 2000;
  }
  DAT_005b5ea8 = param_1;
  DAT_00740d44 = LocalAlloc(0x40,param_1 << 5);
  if (DAT_00740d44 == (HLOCAL)0x0) {
    return 2000;
  }
  if ((param_2 != 2) && (param_2 != 4)) {
    FUN_004c4150(s__s__d____alloc_mem_images___unko_005b5ec8,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                 0xe2,param_2);
  }
  i = 0;
  if (0 < DAT_005b5ea8) {
    iVar1 = 0;
    do {
      i = i + 1;
      *(undefined4 *)(iVar1 + (int)DAT_00740d44) = 0;
      *(int *)(iVar1 + 0x18 + (int)DAT_00740d44) = param_2;
      *(undefined4 *)(iVar1 + 0x1c + (int)DAT_00740d44) = 0;
      iVar1 = iVar1 + 0x20;
    } while (i < DAT_005b5ea8);
  }
  DAT_00740d4c = 1;
  return 0;
}


/* ==== 004cbd20 FUN_004cbd20 ==== */

undefined4 FUN_004cbd20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  HLOCAL pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  SIZE_T uBytes;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((param_1 < 0) || (DAT_005b5ea8 <= param_1)) {
    FUN_004c4150(s__s__d____index_out_of_mem_image_a_005b5ca8,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                 0x116,param_1);
  }
  iVar7 = param_1 * 0x20;
  iVar6 = *(int *)(iVar7 + 8 + DAT_00740d44);
  if (iVar6 < 1) {
    FUN_004c4150(s__s__d____illegal_mem_xsize____d___005b5f90,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                 0x11a,param_1,iVar6);
  }
  iVar6 = *(int *)(iVar7 + 0xc + DAT_00740d44);
  if (iVar6 < 1) {
    FUN_004c4150(s__s__d____illegal_mem_ysize____d___005b5f64,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                 0x11d,param_1,iVar6);
  }
  iVar6 = *(int *)(iVar7 + 0xc + DAT_00740d44);
  iVar1 = *(int *)(iVar7 + 8 + DAT_00740d44);
  iVar2 = *(int *)(iVar7 + 0x18 + DAT_00740d44);
  uBytes = iVar6 * iVar1;
  if (iVar2 == 2) {
    if (DAT_00740d38 == 0) {
      uVar5 = FUN_004c4a80(iVar1,iVar6);
      *(undefined4 *)(iVar7 + 4 + DAT_00740d44) = uVar5;
      if (*(int *)(iVar7 + 4 + DAT_00740d44) == 0) {
        return 2000;
      }
    }
    else {
      uVar5 = FUN_004c4a80(iVar1,iVar6);
      *(undefined4 *)(iVar7 + 4 + DAT_00740d44) = uVar5;
      if (DAT_00740d40 == 0) {
        return 2000;
      }
    }
    uStack_8 = DAT_005b3940;
    if (DAT_007409cc != 0) {
      if (DAT_007409cc == 4) {
        uStack_8 = FUN_004c81b0(DAT_007408f0,0x18);
      }
      else {
        uStack_8 = FUN_004c81b0(DAT_005b3940,8);
      }
    }
    piVar3 = *(int **)(iVar7 + 4 + DAT_00740d44);
    uStack_4 = uStack_8;
    iVar6 = (**(code **)(*piVar3 + 0x74))(piVar3,8,&uStack_8);
    if (iVar6 != 0) {
      uVar5 = FUN_004c4400(iVar6);
      FUN_004c4150(s__s__d____failed_to_set_color_key_005b4458,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                   0x14d,uVar5);
    }
  }
  else {
    if (iVar2 != 4) {
      FUN_004c4150(s__s__d____illegal_alloc_type__d_f_005b5f30,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                   0x152,iVar2,param_1);
      return 0;
    }
    if ((int)uBytes < 1) {
      FUN_004c4150(s__s__d____error_illegal_mem_image_005b5efc,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                   0x127,uBytes,iVar1,iVar6);
    }
    pvVar4 = LocalAlloc(0x40,uBytes);
    *(HLOCAL *)(iVar7 + DAT_00740d44) = pvVar4;
    if (*(int *)(iVar7 + DAT_00740d44) == 0) {
      return 2000;
    }
  }
  *(undefined4 *)(iVar7 + 0x1c + DAT_00740d44) = 1;
  return 0;
}


/* ==== 004cbf30 FUN_004cbf30 ==== */

undefined4 FUN_004cbf30(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 < 0) || (DAT_005b5ea8 <= param_1)) {
    FUN_004c4150(s__s__d____index_out_of_mem_image_a_005b5ca8,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                 0x15a,param_1);
  }
  iVar3 = param_1 * 0x20;
  iVar1 = *(int *)(iVar3 + 0x18 + DAT_00740d44);
  if (iVar1 == 2) {
    if (*(int *)(iVar3 + 0x1c + DAT_00740d44) != 0) {
      *(undefined4 *)(iVar3 + 0x1c + DAT_00740d44) = 0;
      piVar2 = *(int **)(iVar3 + 4 + DAT_00740d44);
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  else {
    if (iVar1 != 4) {
      FUN_004c4150(s__s__d____illegal_alloc_type__d_f_005b5f30,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                   0x16b,iVar1,param_1);
      return 0;
    }
    if (*(int *)(iVar3 + 0x1c + DAT_00740d44) != 0) {
      *(undefined4 *)(iVar3 + 0x1c + DAT_00740d44) = 0;
      FUN_00559d4e(*(undefined4 *)(iVar3 + DAT_00740d44));
      return 0;
    }
  }
  return 0;
}


/* ==== 004cbff0 FUN_004cbff0 ==== */

undefined4 FUN_004cbff0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (DAT_005b5ea8 <= param_1)) {
    FUN_004c4150(s__s__d____index_out_of_mem_image_a_005b5ca8,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                 0x194,param_1);
  }
  param_1 = param_1 * 0x20;
  if (*(int *)(param_1 + 0x18 + DAT_00740d44) == 2) {
    uVar1 = FUN_004c48f0(*(undefined4 *)(param_1 + 4 + DAT_00740d44),param_2);
    *(undefined4 *)(param_1 + DAT_00740d44) = uVar1;
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 8 + DAT_00740d44);
  return 0;
}


/* ==== 004cc060 FUN_004cc060 ==== */

undefined4 FUN_004cc060(int param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < 0) || (DAT_005b5ea8 <= param_1)) {
    FUN_004c4150(s__s__d____index_out_of_mem_image_a_005b5ca8,s_D__Work_dxdraw_Sprite_cpp_005b5eac,
                 0x1ab,param_1);
  }
  puVar1 = (undefined4 *)(DAT_00740d44 + param_1 * 0x20);
  if (puVar1[6] == 2) {
    FUN_004c4a20(puVar1[1],*puVar1);
  }
  return 0;
}


/* ==== 004cc0b0 FUN_004cc0b0 ==== */

undefined4 FUN_004cc0b0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  FILE *file;
  int *piVar4;
  int this_val;
  int j;
  undefined2 *puVar5;
  int k;
  int iVar6;
  undefined4 *puVar7;
  FILE *pFVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FILE *pFVar14;
  uint *puVar15;
  short sStack_2a;
  int i;
  undefined2 *puStack_24;
  int local_20;
  int iStack_1c;
  int *local_18;
  FILE *file_2;
  undefined4 local_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  if (DAT_00740d50 != 0) {
    file = (FILE *)FUN_005589a5(param_1,s_rb_005b496c);
    if (file == (FILE *)0x0) {
      return 1000;
    }
    file_2 = (FILE *)FUN_005589a5(param_2,s_rb_005b496c);
    if (file_2 == (FILE *)0x0) {
      FUN_005588fd(file);
      return 1000;
    }
    DAT_00740d48 = 0;
    this_val = *param_3;
    pFVar8 = file_2;
    piVar2 = param_3;
    piVar1 = param_3;
    piVar4 = local_18;
    while (local_18 = piVar2, param_3 = piVar1, file_2 = pFVar8, -1 < this_val) {
      FUN_0055a06b(pFVar8,*local_18 * 4 + -2,0);
      if ((pFVar8->_flag & 0x20) != 0) {
        FUN_004c4150(s__s__d____index_file_seek_error___005b6018,
                     s_D__Work_dxdraw_Sprite_cpp_005b5eac,0x1df,piVar1[local_20]);
      }
      FUN_00558b35();
      if (((pFVar8->_flag & 0x20) != 0) ||
         (FUN_0055a06b(file,local_10,0), (file->_flag & 0x20) != 0)) {
        FUN_005588fd(file);
        return 0x3e9;
      }
      j = *local_18;
      iVar6 = j * 0x20;
      this_val = iVar6 + 8 + DAT_00740d44;
      local_20 = j;
      FUN_00558b35(this_val,this_val,1,2,file);
      uVar12 = 2;
      uVar10 = 1;
      this_val = iVar6 + 0xc + DAT_00740d44;
      pFVar8 = file;
      FUN_00558b35();
      FUN_00558b35(&sStack_2a,&sStack_2a,1,2,file,this_val,uVar10,uVar12,pFVar8);
      *(int *)(iVar6 + 0x10 + DAT_00740d44) = (int)sStack_2a;
      FUN_00558b35(&sStack_2a,&sStack_2a,1,2,file);
      *(int *)(iVar6 + 0x14 + DAT_00740d44) = (int)sStack_2a;
      DAT_00740d48 = DAT_00740d48 +
                     *(int *)(iVar6 + 0xc + DAT_00740d44) * *(int *)(iVar6 + 8 + DAT_00740d44);
      FUN_004cbd20(j);
      FUN_004cbff0(j,&iStack_1c);
      puVar5 = *(undefined2 **)(iVar6 + DAT_00740d44);
      puStack_24 = puVar5;
      switch(DAT_007409cc) {
      case 0:
        FUN_004c3fa0(s_pf_none_005b5fbc);
        i = 0;
        this_val = *(int *)(iVar6 + 0xc + DAT_00740d44);
        if (0 < this_val) {
          do {
            FUN_00558b35(this_val,puVar5,1,*(undefined4 *)(iVar6 + 8 + DAT_00740d44),file);
            puVar5 = (undefined2 *)((int)puVar5 + iStack_1c);
            this_val = i + 1;
            i = this_val;
          } while (this_val < *(int *)(iVar6 + 0xc + DAT_00740d44));
        }
        break;
      case 1:
        FUN_004c3fa0(s_converting_to_16_bits_005b5fe0);
        i = 0;
        this_val = DAT_00740d44;
        if (0 < *(int *)(iVar6 + 0xc + DAT_00740d44)) {
          do {
            j = *(int *)(iVar6 + 8 + this_val);
            k = 0;
            if (0 < j) {
              do {
                FUN_00558b35(j,&uStack_8,1,1,file);
                uVar3 = FUN_004c81b0(uStack_8 & 0xff,8);
                *puVar5 = uVar3;
                puVar5 = puVar5 + 1;
                j = *(int *)(iVar6 + 8 + DAT_00740d44);
                k = k + 1;
                this_val = DAT_00740d44;
              } while (k < j);
            }
            puVar5 = (undefined2 *)((int)puStack_24 + iStack_1c);
            i = i + 1;
            j = local_20;
            puStack_24 = puVar5;
          } while (i < *(int *)(iVar6 + 0xc + this_val));
        }
        break;
      case 2:
        FUN_004c3fa0(s_converting_to_24_bits_005b5fc8);
        i = 0;
        this_val = DAT_00740d44;
        if (0 < *(int *)(iVar6 + 0xc + DAT_00740d44)) {
          do {
            j = 0;
            if (0 < *(int *)(iVar6 + 8 + this_val)) {
              do {
                uVar12 = 1;
                puVar15 = &uStack_4;
                uVar10 = 1;
                pFVar8 = file;
                FUN_00558b35();
                FUN_004c8380(uStack_4 & 0xff,8,puVar5,puVar15,uVar10,uVar12,pFVar8);
                puVar5 = (undefined2 *)((int)puVar5 + 3);
                j = j + 1;
                this_val = DAT_00740d44;
              } while (j < *(int *)(iVar6 + 8 + DAT_00740d44));
            }
            puVar5 = (undefined2 *)((int)puStack_24 + iStack_1c);
            i = i + 1;
            j = local_20;
            puStack_24 = puVar5;
          } while (i < *(int *)(iVar6 + 0xc + this_val));
        }
        break;
      case 4:
        FUN_004c3fa0(s_converting_from_24_to_16_bits_005b5ff8);
        i = 0;
        this_val = DAT_00740d44;
        if (0 < *(int *)(iVar6 + 0xc + DAT_00740d44)) {
          do {
            j = 0;
            if (0 < *(int *)(iVar6 + 8 + this_val)) {
              do {
                FUN_00558b35(&uStack_c,&uStack_c,1,1,file);
                uVar13 = 1;
                puVar9 = &param_2;
                uVar11 = 1;
                pFVar14 = file;
                FUN_00558b35();
                uVar12 = 1;
                puVar7 = &param_1;
                uVar10 = 1;
                pFVar8 = file;
                FUN_00558b35();
                uVar3 = FUN_004c81b0((uint)CONCAT11((undefined1)param_1,(undefined1)param_2) << 8 |
                                     uStack_c & 0xff,0x18,puVar7,uVar10,uVar12,pFVar8,puVar9,uVar11,
                                     uVar13,pFVar14);
                *puVar5 = uVar3;
                puVar5 = puVar5 + 1;
                j = j + 1;
                this_val = DAT_00740d44;
              } while (j < *(int *)(iVar6 + 8 + DAT_00740d44));
            }
            puVar5 = (undefined2 *)((int)puStack_24 + iStack_1c);
            i = i + 1;
            j = local_20;
            puStack_24 = puVar5;
          } while (i < *(int *)(iVar6 + 0xc + this_val));
        }
      }
      FUN_004cc060(j);
      piVar4 = local_18 + 1;
      pFVar8 = file_2;
      piVar2 = piVar4;
      piVar1 = param_3;
      this_val = *piVar4;
    }
    local_18 = piVar4;
    FUN_005588fd(pFVar8);
    FUN_005588fd(file);
  }
  return 0;
}


/* ==== 004cc520 FUN_004cc520 ==== */

undefined4 FUN_004cc520(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00740d50 != 0) {
    iVar2 = *param_1;
    while (-1 < iVar2) {
      FUN_004cbf30(iVar2);
      piVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar2 = *piVar1;
    }
    return 0;
  }
  return 0;
}


/* ==== 004cc550 FUN_004cc550 ==== */

undefined4 FUN_004cc550(void)

{
  int i;
  
  if (DAT_00740d50 == 0) {
    return 0;
  }
  i = 0;
  if (0 < DAT_005b5ea8) {
    do {
      FUN_004cbf30(i);
      i = i + 1;
    } while (i < DAT_005b5ea8);
  }
  return 0;
}


