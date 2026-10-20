/* spel.dat — sound_lib/csndeng.cpp: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0049f4c0 FUN_0049f4c0 ==== */

void __thiscall FUN_0049f4c0(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_LAB_005764c0;
  iVar2 = *(int *)((int)this + 0x2c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  iVar2 = *(int *)((int)this + 0x1c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x24) = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}


/* ==== 0049f570 FUN_0049f570 ==== */

void __thiscall FUN_0049f570(void *this)

{
  undefined4 this_val;
  int i;
  
  FUN_004c3fa0();
  FUN_004c3fa0(s_____Dump_of_object_CSndEngine____005aed18);
  FUN_004c3fa0();
  FUN_004c3fa0();
  FUN_004c3fa0(s_Listener_position___f___f___f_005aece4,(double)*(float *)((int)this + 0x254),
               (double)*(float *)((int)this + 600),(double)*(float *)((int)this + 0x25c));
  FUN_004c3fa0(s_Listener_velocity___f___f___f_005aecc4,(double)*(float *)((int)this + 0x264),
               (double)*(float *)((int)this + 0x268),(double)*(float *)((int)this + 0x26c));
  FUN_004c3fa0(s_Number_of_sample_groups_read___d_005aeca0,*(undefined4 *)((int)this + 0x220));
  i = 0;
  if (0 < *(int *)((int)this + 0x220)) {
    do {
      FUN_004c3fa0();
      i = i + 1;
    } while (i < *(int *)((int)this + 0x220));
  }
  FUN_004c3fa0(s_Number_of_sound_types___d_005aec74,*(undefined4 *)((int)this + 0x18));
  i = 0;
  if (0 < *(int *)((int)this + 0x18)) {
    do {
      this_val = FUN_0049ef20((int)this + 0x14);
      FUN_0049f2d0(this_val);
      FUN_004c3fa0(s_______________________Type__2d___005aec3c,i);
      i = i + 1;
    } while (i < *(int *)((int)this + 0x18));
  }
  FUN_004c3fa0();
  FUN_004c3fa0();
  i = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      FUN_004c3fa0(s_______________________Source__2d_005aebac,i);
      this_val = FUN_0049eb50((int)this + 4);
      FUN_0049e0c0(this_val);
      i = i + 1;
    } while (i < *(int *)((int)this + 8));
  }
  return;
}


/* ==== 0049f6e0 FUN_0049f6e0 ==== */

void * __thiscall FUN_0049f6e0(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ebac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049ea60((int)this + 4);
  local_4 = 0;
  FUN_0049ed60((int)this + 0x14);
  local_4._0_1_ = 1;
  FUN_00558643((int)this + 0x20,0x10,0x20,&LAB_00409390,FUN_004900b0);
  *(undefined ***)this = &PTR_FUN_005771b4;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004a0100(DAT_00712864 == 0,s__s___d__Can_t_create_multiple_in_005aed60,
               s_C__work_sound_lib_csndeng_cpp_005aeda0,0x58);
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x270) = 100;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  DAT_00712864 = DAT_00712864 + 1;
  ExceptionList = local_c;
  return this;
}


/* ==== 0049f7c0 FUN_0049f7c0 ==== */

void * __thiscall FUN_0049f7c0(void *this,byte param_2)

{
  FUN_0049f7e0();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0049f7e0 FUN_0049f7e0 ==== */

void __thiscall FUN_0049f7e0(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056ebec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_005771b4;
  local_4 = 2;
  FUN_004c3fa0(s_____Exitting_CSndEngine______005aede0);
  FUN_0049f900(this);
  DAT_00712864 = DAT_00712864 + -1;
  FUN_004c3fa0(s_____CSndEngine_Exit_done_____005aedc0);
  local_4._0_1_ = 1;
  FUN_005586c5((int)this + 0x20,0x10,0x20,FUN_004900b0);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_0049eea0((int)this + 0x14);
  local_4 = 0xffffffff;
  thunk_FUN_0049eae0((int)this + 4);
  ExceptionList = local_c;
  return;
}


/* ==== 0049f880 FUN_0049f880 ==== */

undefined4 __thiscall
FUN_0049f880(void *this,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  
  FUN_004c3fa0(s_____Initting_CSndEngine_version___005aee40,0x3ff2147ae0000000,s_Sep_1_1999_005aee70
              );
  FUN_004a0100(-1 < param_2,s__s___d__Trying_to_set_an_illegal_005aee00,
               s_C__work_sound_lib_csndeng_cpp_005aeda0,0x97,param_2);
  FUN_0049ea90((int)this + 4);
  FUN_0049ed90((int)this + 0x14,param_3);
  if (param_5 == '\0') {
    iVar1 = FUN_004c7150(param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


/* ==== 0049f900 FUN_0049f900 ==== */

void __thiscall FUN_0049f900(void *this)

{
  FUN_0049eae0((int)this + 4);
  FUN_0049eea0((int)this + 0x14);
  FUN_004c70d0();
  return;
}


/* ==== 0049f920 FUN_0049f920 ==== */

int __thiscall FUN_0049f920(void *this,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int i;
  bool bVar6;
  
  i = 0;
  if (0 < *(int *)((int)this + 0x220)) {
    puVar4 = (undefined4 *)((int)this + 0x24);
    do {
      pbVar5 = (byte *)*puVar4;
      pbVar2 = param_2;
      if (pbVar5 == (byte *)0x0) {
        pbVar5 = &DAT_0057629c;
      }
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0049f969:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_0049f96e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0049f969;
        pbVar5 = pbVar5 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0049f96e:
      if (iVar3 == 0) {
        return 1 << ((byte)i & 0x1f);
      }
      i = i + 1;
      puVar4 = puVar4 + 4;
    } while (i < *(int *)((int)this + 0x220));
  }
  return 0;
}


/* ==== 0049f9a0 FUN_0049f9a0 ==== */

uint __thiscall FUN_0049f9a0(void *this,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int i;
  uint j;
  uint k;
  char *source;
  char *pcVar3;
  uint local_108;
  char local_100 [256];
  
  i = -1;
  source = param_2;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *source;
    source = source + 1;
  } while (cVar1 != '\0');
  local_108 = 0;
  source = param_2;
  if (i == -2) {
    return 0;
  }
  do {
    pcVar2 = (char *)FUN_00559b90(source,0x7c);
    if (pcVar2 == (char *)0x0) {
      j = 0xffffffff;
      do {
        pcVar3 = source;
        if (j == 0) break;
        j = j - 1;
        pcVar3 = source + 1;
        cVar1 = *source;
        source = pcVar3;
      } while (cVar1 != '\0');
      j = ~j;
      source = pcVar3 + -j;
      pcVar3 = local_100;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)source;
        source = source + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (j = j & 3; j != 0; j = j - 1) {
        *pcVar3 = *source;
        source = source + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    else {
      _strncpy(local_100,source,(int)pcVar2 - (int)source);
      local_100[(int)pcVar2 - (int)source] = '\0';
    }
    j = FUN_0049f920(this,local_100);
    if (j == 0) {
      FUN_0049f570(this);
      FUN_004c4150(s__s___d__Sample_group__s_not_foun_005aee7c,
                   s_C__work_sound_lib_csndeng_cpp_005aeda0,0x116,local_100);
    }
    local_108 = local_108 | j;
    if (pcVar2 == (char *)0x0) {
LAB_0049fa62:
      j = 0xffffffff;
      source = param_2;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *source;
        source = source + 1;
      } while (cVar1 != '\0');
      source = param_2 + (~j - 1);
    }
    else {
      j = 0xffffffff;
      source = pcVar2;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *source;
        source = source + 1;
      } while (cVar1 != '\0');
      if (~j - 1 < 2) goto LAB_0049fa62;
      source = pcVar2 + 1;
    }
    i = -1;
    pcVar2 = source;
    do {
      if (i == 0) break;
      i = i + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (i == -2) {
      return local_108;
    }
  } while( true );
}


/* ==== 0049fac0 FUN_0049fac0 ==== */

void __thiscall FUN_0049fac0(void *this)

{
  char cVar1;
  int iVar2;
  int j;
  uint k;
  uint m;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int i;
  CHAR local_10c [12];
  char local_100 [256];
  
  *(undefined4 *)((int)this + 0x220) = 0;
  iVar2 = FUN_004c3cd0(s_SndGroups_005aeee0,s_count_005aeeec);
  FUN_004a00b0(iVar2,0,0x1f,s_C__work_sound_lib_csndeng_cpp_005aeda0,0x14a);
  i = 0;
  if (0 < iVar2) {
    piVar3 = (int *)((int)this + 0x24);
    do {
      wsprintfA(local_10c,s__d_005aeedc,i);
      FUN_004c3d10(s_SndGroups_005aeee0,local_10c,local_100,0xff);
      j = -1;
      pcVar4 = local_100;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004a0100(j != -2,s__s__d__Can_t_find_sound_type__d_005aeebc,
                   s_C__work_sound_lib_csndeng_cpp_005aeda0,0x153,i);
      k = 0xffffffff;
      pcVar4 = local_100;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      k = ~k - 1;
      if (0xfffffffd < k) {
        FUN_0054b1b4();
      }
      j = *piVar3;
      if (((j == 0) || (cVar1 = *(char *)(j + -1), cVar1 == '\0')) || (cVar1 == -1)) {
        if (k != 0) {
          if ((0x1f < (uint)piVar3[2]) || ((uint)piVar3[2] < k)) {
            FUN_004028f0(piVar3 + -1,1);
            goto LAB_0049fbda;
          }
          goto LAB_0049fbdf;
        }
        FUN_004028f0(piVar3 + -1,1);
      }
      else if (k == 0) {
        *(char *)(j + -1) = cVar1 + -1;
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
      }
      else {
LAB_0049fbda:
        FUN_00402b20(piVar3 + -1,k);
LAB_0049fbdf:
        pcVar4 = local_100;
        pcVar5 = (char *)*piVar3;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (m = k & 3; m != 0; m = m - 1) {
          *pcVar5 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        }
        piVar3[1] = k;
        *(undefined1 *)(*piVar3 + k) = 0;
      }
      piVar3 = piVar3 + 4;
      i = i + 1;
      *(int *)((int)this + 0x220) = *(int *)((int)this + 0x220) + 1;
    } while (i < iVar2);
  }
  return;
}


/* ==== 0049fc40 FUN_0049fc40 ==== */

void __thiscall FUN_0049fc40(void *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int j;
  uint k;
  uint m;
  int i;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_170 [4];
  char *local_16c;
  undefined1 local_160 [4];
  char *local_15c;
  CHAR local_150 [12];
  undefined1 local_144 [4];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056ec21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f360(local_144);
  i = 0;
  local_4 = 0;
  iVar2 = FUN_004c3cd0(s_SndTypes_005aef90,s_count_005aeeec);
  if (0 < iVar2) {
    do {
      wsprintfA(local_150,s__d_005aeedc,i);
      FUN_004c3d10(s_SndTypes_005aef90,local_150,local_10c,0xff);
      j = -1;
      pcVar4 = local_10c;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004a0100(j != -2,s__s__d__Can_t_find_sound_type__d_s_005aef64,
                   s_C__work_sound_lib_csndeng_cpp_005aeda0,0x178,i);
      j = FUN_004c3d60(local_10c,0);
      FUN_004a0100(j == 7,s__s___d__Incorrect_number_of_argu_005aef04,
                   s_C__work_sound_lib_csndeng_cpp_005aeda0,0x17e,i,j,7);
      FUN_004c3f10(0,local_10c,0xff);
      FUN_004028f0(local_160,0);
      k = 0xffffffff;
      pcVar4 = local_10c;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      k = ~k - 1;
      cVar1 = FUN_00402a00(local_160,k,1);
      if (cVar1 != '\0') {
        pcVar4 = local_10c;
        pcVar5 = local_15c;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (m = k & 3; m != 0; m = m - 1) {
          *pcVar5 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        }
        FUN_004029e0(local_160,k);
      }
      local_4._0_1_ = 1;
      FUN_004093c0(local_11c,local_160,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_160,1);
      FUN_004c3f10(1,local_10c,0xff);
      FUN_004028f0(local_170,0);
      k = 0xffffffff;
      pcVar4 = local_10c;
      do {
        if (k == 0) break;
        k = k - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      k = ~k - 1;
      cVar1 = FUN_00402a00(local_170,k,1);
      if (cVar1 != '\0') {
        pcVar4 = local_10c;
        pcVar5 = local_16c;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (m = k & 3; m != 0; m = m - 1) {
          *pcVar5 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        }
        FUN_004029e0(local_170,k);
      }
      local_4._0_1_ = 2;
      FUN_004093c0(local_12c,local_170,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_170,1);
      local_140 = FUN_004c3ec0(2);
      uVar3 = FUN_004c3ec0(3);
      FUN_004a00b0(uVar3,0,100,s___csndtype_h_005aeef4,0xfe);
      local_134 = uVar3;
      uVar3 = FUN_004c3ec0(4);
      FUN_004a00b0(uVar3,0,4000,s___csndtype_h_005aeef4,0xd9);
      local_138 = uVar3;
      uVar3 = FUN_004c3ec0(5);
      FUN_004a00b0(uVar3,0,100,s___csndtype_h_005aeef4,0x112);
      local_130 = uVar3;
      FUN_004c3f10(6,local_10c,0xff);
      local_13c = FUN_0049f9a0(this,local_10c);
      FUN_0049f030((int)this + 0x14,local_144);
      i = i + 1;
    } while (i < iVar2);
  }
  local_4 = 0xffffffff;
  FUN_0049f4c0(local_144);
  ExceptionList = local_c;
  return;
}


