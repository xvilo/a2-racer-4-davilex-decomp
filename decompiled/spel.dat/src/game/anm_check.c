/* spel.dat — game/anm_check.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00467470 FUN_00467470 ==== */

void __thiscall FUN_00467470(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_1c;
  void *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0056ac5c;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  local_18 = this;
  FUN_00468540((int)this + 0x44,&local_1c,**(undefined4 **)((int)this + 0x48),
               *(undefined4 **)((int)this + 0x48));
  FUN_0054b339(*(undefined4 *)((int)this + 0x48));
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  puVar1 = *(undefined4 **)((int)this + 0x38);
  local_4._0_1_ = 2;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar2 = (undefined4 *)FUN_00448fd0(&local_1c,local_14,0);
    FUN_004685d0((int)this + 0x34,local_10,*puVar2);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  puVar1 = *(undefined4 **)((int)this + 0x28);
  local_4._0_1_ = 1;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar2 = (undefined4 *)FUN_00448fd0(&local_1c,local_10,0);
    FUN_004685d0((int)this + 0x24,local_14,*puVar2);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 0x28));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  puVar1 = *(undefined4 **)((int)this + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar2 = (undefined4 *)FUN_00448fd0(&local_1c,local_10,0);
    FUN_004685d0((int)this + 0x14,local_14,*puVar2);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  puVar1 = *(undefined4 **)((int)this + 8);
  local_4 = 0xffffffff;
  local_1c = (undefined4 *)*puVar1;
  while (local_1c != puVar1) {
    puVar2 = (undefined4 *)FUN_00448fd0(&local_1c,local_10,0);
    FUN_004685d0((int)this + 4,local_14,*puVar2);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00467610 FUN_00467610 ==== */

void __thiscall FUN_00467610(void *this,char *str2,char *param_2)

{
  char cVar1;
  int j;
  int *piVar2;
  char *str1;
  uint k;
  uint m;
  int i;
  char *pcVar3;
  int iStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056ac76;
  pvStack_c = ExceptionList;
  i = 0;
  ExceptionList = &pvStack_c;
  j = (*(code *)**(undefined4 **)this)();
  if (0 < j) {
    do {
      piVar2 = (int *)FUN_00468530((int)this + 4,auStack_34);
      iStack_38 = *piVar2;
      j = i;
      if (0 < i) {
        do {
          FUN_00448fd0(&iStack_38,auStack_30,0);
          j = j + -1;
        } while (j != 0);
      }
      str1 = *(char **)(iStack_38 + 0xc);
      if (str1 == (char *)0x0) {
        str1 = "";
      }
      j = __strcmpi(str1,str2);
      if (j == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      i = i + 1;
      j = (*(code *)**(undefined4 **)this)();
    } while (i < j);
  }
  auStack_2c[0] = param_2._0_1_;
  FUN_004028f0(auStack_2c,0);
  k = 0xffffffff;
  str1 = param_2;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  k = ~k - 1;
  cVar1 = FUN_00402a00(auStack_2c,k,1);
  if (cVar1 != '\0') {
    str1 = param_2;
    pcVar3 = pcStack_28;
    for (m = k >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (m = k & 3; m != 0; m = m - 1) {
      *pcVar3 = *str1;
      str1 = str1 + 1;
      pcVar3 = pcVar3 + 1;
    }
    pcStack_28[k] = '\0';
    uStack_24 = k;
  }
  uStack_4 = 0;
  FUN_00468710((void *)((int)this + 0x24),&param_2,(void *)**(undefined4 **)((int)this + 0x28),
               auStack_2c);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_2c,1);
  auStack_1c[0] = param_2._0_1_;
  k = 0xffffffff;
  str1 = str2;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar1 = *str1;
    str1 = str1 + 1;
  } while (cVar1 != '\0');
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_00402940(auStack_1c,str2,~k - 1);
  uStack_4 = 1;
  FUN_00468710((void *)((int)this + 4),&str2,(void *)**(undefined4 **)((int)this + 8),auStack_1c);
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004677b0 FUN_004677b0 ==== */

void __thiscall FUN_004677b0(void *this,char *str2,char *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int j;
  int *piVar3;
  char *str1;
  uint k;
  uint m;
  int i;
  char *pcVar4;
  int iStack_40;
  void *local_3c;
  int this_val;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056ac90;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)((int)this + 0x10);
  i = 0;
  ExceptionList = &pvStack_c;
  local_3c = this;
  j = (*(code *)**(undefined4 **)((int)this + 0x10))();
  if (0 < j) {
    this_val = (int)this + 0x14;
    do {
      piVar3 = (int *)FUN_00468530(this_val,auStack_34);
      iStack_40 = *piVar3;
      j = i;
      if (0 < i) {
        do {
          FUN_00448fd0(&iStack_40,auStack_30,0);
          j = j + -1;
          this = local_3c;
        } while (j != 0);
      }
      str1 = *(char **)(iStack_40 + 0xc);
      if (str1 == (char *)0x0) {
        str1 = "";
      }
      j = __strcmpi(str1,str2);
      if (j == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      i = i + 1;
      j = (**(code **)*puVar1)();
    } while (i < j);
  }
  auStack_2c[0] = param_2._0_1_;
  FUN_004028f0(auStack_2c,0);
  k = 0xffffffff;
  str1 = param_2;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar2 = *str1;
    str1 = str1 + 1;
  } while (cVar2 != '\0');
  k = ~k - 1;
  cVar2 = FUN_00402a00(auStack_2c,k,1);
  if (cVar2 != '\0') {
    str1 = param_2;
    pcVar4 = pcStack_28;
    for (m = k >> 2; m != 0; m = m - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)str1;
      str1 = str1 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (m = k & 3; m != 0; m = m - 1) {
      *pcVar4 = *str1;
      str1 = str1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    pcStack_28[k] = '\0';
    this = local_3c;
    uStack_24 = k;
  }
  uStack_4 = 0;
  FUN_00468710((void *)((int)this + 0x34),&param_2,(void *)**(undefined4 **)((int)this + 0x38),
               auStack_2c);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_2c,1);
  auStack_1c[0] = param_2._0_1_;
  k = 0xffffffff;
  str1 = str2;
  do {
    if (k == 0) break;
    k = k - 1;
    cVar2 = *str1;
    str1 = str1 + 1;
  } while (cVar2 != '\0');
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_00402940(auStack_1c,str2,~k - 1);
  uStack_4 = 1;
  FUN_00468710((void *)((int)this + 0x14),&str2,(void *)**(undefined4 **)((int)this + 0x18),
               auStack_1c);
  if (iStack_18 != 0) {
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00467960 FUN_00467960 ==== */

void FUN_00467960(byte *param_1)

{
  char cVar1;
  byte bVar2;
  uint i;
  uint j;
  int k;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  byte local_70 [8];
  byte local_68 [8];
  char local_60 [32];
  byte local_40 [64];
  
  FUN_0055942f(local_60,param_1,local_68,local_40,(byte *)local_60,local_70);
  i = 0xffffffff;
  pcVar4 = local_60;
  do {
    pcVar5 = pcVar4;
    if (i == 0) break;
    i = i - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  i = ~i;
  pbVar3 = (byte *)(pcVar5 + -i);
  pbVar6 = param_1;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pbVar6 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pbVar6 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar6 = pbVar6 + 1;
  }
  if (DAT_006fb8d0 == 0) {
    k = -1;
    do {
      pbVar3 = param_1;
      if (k == 0) break;
      k = k + -1;
      pbVar3 = param_1 + 1;
      bVar2 = *param_1;
      param_1 = pbVar3;
    } while (bVar2 != 0);
    *(undefined4 *)(pbVar3 + -1) = DAT_005a72e8;
    pbVar3[3] = DAT_005a72ec;
    return;
  }
  k = -1;
  do {
    pbVar3 = param_1;
    if (k == 0) break;
    k = k + -1;
    pbVar3 = param_1 + 1;
    bVar2 = *param_1;
    param_1 = pbVar3;
  } while (bVar2 != 0);
  *(undefined4 *)(pbVar3 + -1) = DAT_005a72e0;
  pbVar3[3] = DAT_005a72e4;
  return;
}


/* ==== 00467a00 FUN_00467a00 ==== */

void __thiscall FUN_00467a00(void *this,char *param_2,undefined4 param_3)

{
  char cVar1;
  void *this_00;
  int iVar2;
  undefined1 *puVar3;
  int j;
  int m;
  int k;
  char *pcVar4;
  int i;
  undefined1 local_150 [8];
  undefined1 auStack_148 [8];
  char local_140 [64];
  char acStack_100 [64];
  char acStack_c0 [64];
  char acStack_80 [128];
  
  this_00 = (void *)FUN_00497960();
  FUN_004489a0(&DAT_006fa558,param_2,param_3);
  iVar2 = FUN_00448c90(&DAT_006fa558,param_3);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60();
  iVar2 = FUN_004c3cd0(s_CONFIG_005a72f8,s_COUNT_005a72f0,puVar3);
  i = 0;
  if (0 < iVar2) {
    do {
      FUN_005587a3(local_150,s__d_005a7300,i);
      FUN_004c3d10(s_CONFIG_005a7304,local_150,local_140,0x3f);
      j = -1;
      pcVar4 = local_140;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (j == -2) {
        FUN_004c4150(s__s___d__Couldn_t_find_animation_n_005a7334,
                     s_C__Work_A2IV_Game_prog_anm_check_005a730c,0xd8,i,param_2);
      }
      j = FUN_004c3cd0(local_140,s_COUNT_005a7378);
      k = 0;
      if (0 < j) {
        do {
          FUN_005587a3(auStack_148,s__d_005a7380,k);
          FUN_004c3d10(local_140,auStack_148,acStack_80,0x7f);
          m = -1;
          pcVar4 = acStack_80;
          do {
            if (m == 0) break;
            m = m + -1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          if (m == -2) {
            FUN_004c4150(s__s___d__Couldn_t_find_frame__d_f_005a73ac,
                         s_C__Work_A2IV_Game_prog_anm_check_005a7384,0xe7,k,local_140,param_2);
          }
          m = FUN_004c3d60(acStack_80,0);
          if (m != 2) {
            FUN_004c4150(s__s___d__Illegal_number_of_argume_005a7410,
                         s_C__Work_A2IV_Game_prog_anm_check_005a73e8,0xf1,param_2,local_140,k);
          }
          FUN_004c3f10(0,acStack_c0,0x40);
          FUN_004c3f10(1,acStack_100,0x40);
          cVar1 = FUN_004683f0(acStack_c0);
          if (cVar1 == '\0') {
            FUN_004677b0(this,acStack_c0,param_2);
          }
          FUN_00467960(acStack_100);
          cVar1 = FUN_004683f0(acStack_100);
          if (cVar1 == '\0') {
            FUN_00467610(this,acStack_100,param_2);
          }
          else {
            FUN_00498340(this_00,acStack_100);
          }
          k = k + 1;
        } while (k < j);
      }
      i = i + 1;
    } while (i < iVar2);
  }
  return;
}


/* ==== 00467c30 FUN_00467c30 ==== */

void __thiscall FUN_00467c30(void *this)

{
  byte bVar1;
  char cVar2;
  void *this_00;
  int i;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *str2;
  uint j;
  uint k;
  int m;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 local_4a0 [8];
  int local_498;
  undefined1 local_494 [4];
  byte local_490 [8];
  byte local_488 [8];
  char local_480 [32];
  byte local_460 [32];
  undefined1 local_440 [64];
  byte local_400 [256];
  char local_300 [256];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  this_00 = (void *)FUN_00497960();
  i = FUN_00448c90(&DAT_006fa558,s_System_Settings_005a7458);
  puVar3 = *(undefined1 **)(i + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_4a0,s__d_005a7468,DAT_006fb898,puVar3);
  FUN_004c3d10(s_MAPS_005a746c,local_4a0,local_200,0xff);
  FUN_004c3d60(local_200,0);
  FUN_004c3f10(1,local_480,0x1f);
  i = -1;
  str2 = local_480;
  do {
    pcVar6 = str2;
    if (i == 0) break;
    i = i + -1;
    pcVar6 = str2 + 1;
    cVar2 = *str2;
    str2 = pcVar6;
  } while (cVar2 != '\0');
  *(undefined4 *)(pcVar6 + -1) = DAT_005a7474;
  pcVar6[3] = DAT_005a7478;
  FUN_004489a0(&DAT_006fa558,local_480,s_Object_Animations_005a747c);
  i = FUN_00448c90(&DAT_006fa558,s_Object_Animations_005a7490);
  puVar3 = *(undefined1 **)(i + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60();
  local_498 = FUN_004c3cd0(s_OBJECTS_005a74ac,s_COUNT_005a74a4,puVar3);
  i = 0;
  if (0 < local_498) {
    do {
      FUN_005587a3(local_494,s__d_005a74b4,i);
      FUN_004c3d10(s_OBJECTS_005a74b8,local_494,local_200,0xff);
      FUN_004c3d60(local_200,0);
      FUN_004c3f10(0,(char *)local_400,0xff);
      FUN_0055942f(local_100,local_400,local_488,local_100,local_460,local_490);
      j = 0xffffffff;
      pbVar5 = local_460;
      do {
        pbVar8 = pbVar5;
        if (j == 0) break;
        j = j - 1;
        pbVar8 = pbVar5 + 1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar8;
      } while (bVar1 != 0);
      j = ~j;
      pbVar5 = pbVar8 + -j;
      pbVar8 = local_400;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (j = j & 3; j != 0; j = j - 1) {
        *pbVar8 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar8 = pbVar8 + 1;
      }
      j = 0xffffffff;
      pbVar5 = local_490;
      do {
        pbVar8 = pbVar5;
        if (j == 0) break;
        j = j - 1;
        pbVar8 = pbVar5 + 1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar8;
      } while (bVar1 != 0);
      j = ~j;
      m = -1;
      pbVar5 = local_400;
      do {
        pbVar7 = pbVar5;
        if (m == 0) break;
        m = m + -1;
        pbVar7 = pbVar5 + 1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar7;
      } while (bVar1 != 0);
      pbVar5 = pbVar8 + -j;
      pbVar8 = pbVar7 + -1;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (j = j & 3; j != 0; j = j - 1) {
        *pbVar8 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar8 = pbVar8 + 1;
      }
      uVar4 = FUN_004c3ec0(3);
      m = -1;
      pbVar5 = local_400;
      do {
        if (m == 0) break;
        m = m + -1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 != 0);
      if (m != -2) {
        cVar2 = FUN_004683f0((char *)local_400);
        if (cVar2 == '\0') {
          m = FUN_00448c90(&DAT_006fa558,s_Object_Animations_005a74c0);
          str2 = *(char **)(m + 4);
          if (str2 == (char *)0x0) {
            str2 = "";
          }
          FUN_004677b0(this,(char *)local_400,str2);
        }
        FUN_004c3f10(1,local_300,0xff);
        FUN_00467960(local_300);
        cVar2 = FUN_004683f0(local_300);
        if (cVar2 == '\0') {
          m = FUN_00448c90(&DAT_006fa558,s_Object_Animations_005a74d4);
          str2 = *(char **)(m + 4);
          if (str2 == (char *)0x0) {
            str2 = "";
          }
          FUN_00467610(this,local_300,str2);
        }
        else {
          m = FUN_00453400(uVar4);
          if (m == 0) {
            str2 = local_300;
          }
          else {
            str2 = PTR_s_CACHED_PIPELINE_1_005addd8;
            if ((m != 1) && (str2 = PTR_s_CACHED_PIPELINE_2_005adddc, m != 2)) goto LAB_00467efb;
          }
          FUN_00498340(this_00,str2);
        }
      }
LAB_00467efb:
      i = i + 1;
    } while (i < local_498);
  }
  i = FUN_00448c90(&DAT_006fa558,s_System_Settings_005a74e8);
  puVar3 = *(undefined1 **)(i + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_004c3d10(s_3D_Anims_005a74f8,local_4a0,local_440,0x3f,puVar3);
  FUN_00467a00(this,local_440,s_Etappe_Animations_005a7504);
  return;
}


/* ==== 00467f60 FUN_00467f60 ==== */

void __thiscall FUN_00467f60(void *this)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_50 [16];
  undefined1 local_40 [64];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,s_System_Settings_005a7518);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_005587a3(local_50,s_LEAGUE_d_005a7528,DAT_006fb958,puVar2);
  FUN_004c3d10(s_3D_Anims_005a7534,local_50,local_40,0x3f);
  FUN_00467a00(this,local_40,s_League_Animations_005a7540);
  return;
}


/* ==== 00467fd0 FUN_00467fd0 ==== */

void __thiscall FUN_00467fd0(void *this)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_40 [64];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,s_System_Settings_005a7554);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  FUN_004c3d10(s_3D_Anims_005a756c,s_general_005a7564,local_40,0x3f,puVar2);
  FUN_00467a00(this,local_40,s_General_Animations_005a7578);
  return;
}


/* ==== 00468030 FUN_00468030 ==== */

void __thiscall FUN_00468030(void *this)

{
  FUN_00467c30();
  FUN_00467f60(this);
  FUN_00467fd0(this);
  return;
}


/* ==== 00468050 FUN_00468050 ==== */

void FUN_00468050(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  int i;
  uint k;
  uint m;
  int j;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  FUN_00559400();
  puVar4 = (undefined4 *)&stack0x00000020;
  for (i = 0x400; i != 0; i = i + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  j = 0;
  bVar2 = false;
  param_1 = 0;
  i = (**(code **)*extraout_ECX)();
  if (i != 0) {
    i = -1;
    pcVar5 = &stack0x00000020;
    do {
      pcVar7 = pcVar5;
      if (i == 0) break;
      i = i + -1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    pcVar5 = s_The_following_texture_files_are_m_005a758c;
    pcVar7 = pcVar7 + -1;
    for (i = 10; i != 0; i = i + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    puVar4 = (undefined4 *)*extraout_ECX;
    *(undefined2 *)pcVar7 = *(undefined2 *)pcVar5;
    bVar2 = true;
    pcVar7[2] = pcVar5[2];
    i = (*(code *)*puVar4)();
    if (0 < i) {
      do {
        if (0x13 < param_1) break;
        piVar3 = (int *)FUN_00468530(extraout_ECX + 9,&stack0x00000014);
        param_3 = *piVar3;
        i = j;
        if (0 < j) {
          do {
            FUN_00448fd0(&param_3,&stack0x00000018,0);
            i = i + -1;
          } while (i != 0);
        }
        pcVar5 = *(char **)(param_3 + 0xc);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "";
        }
        k = 0xffffffff;
        do {
          pcVar7 = pcVar5;
          if (k == 0) break;
          k = k - 1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        k = ~k;
        i = -1;
        pcVar5 = &stack0x00000020;
        do {
          pcVar6 = pcVar5;
          if (i == 0) break;
          i = i + -1;
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar1 != '\0');
        pcVar5 = pcVar7 + -k;
        pcVar7 = pcVar6 + -1;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (k = k & 3; k != 0; k = k - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
        i = -1;
        pcVar5 = &stack0x00000020;
        do {
          pcVar7 = pcVar5;
          if (i == 0) break;
          i = i + -1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        *(undefined4 *)(pcVar7 + -1) = DAT_005a75b8;
        *(undefined2 *)(pcVar7 + 3) = DAT_005a75bc;
        piVar3 = (int *)FUN_00468530(extraout_ECX + 1,&stack0x0000001c);
        param_2 = *piVar3;
        i = j;
        if (0 < j) {
          do {
            FUN_00448fd0(&param_2,&stack0x00000010,0);
            i = i + -1;
          } while (i != 0);
        }
        pcVar5 = *(char **)(param_2 + 0xc);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "";
        }
        k = 0xffffffff;
        do {
          pcVar7 = pcVar5;
          if (k == 0) break;
          k = k - 1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        k = ~k;
        i = -1;
        pcVar5 = &stack0x00000020;
        do {
          pcVar6 = pcVar5;
          if (i == 0) break;
          i = i + -1;
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar1 != '\0');
        pcVar5 = pcVar7 + -k;
        pcVar7 = pcVar6 + -1;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (k = k & 3; k != 0; k = k - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
        i = -1;
        pcVar5 = &stack0x00000020;
        do {
          pcVar7 = pcVar5;
          if (i == 0) break;
          i = i + -1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        j = j + 1;
        param_1 = param_1 + 1;
        *(undefined2 *)(pcVar7 + -1) = DAT_005a75c0;
        puVar4 = (undefined4 *)*extraout_ECX;
        pcVar7[1] = DAT_005a75c2;
        i = (*(code *)*puVar4)();
      } while (j < i);
    }
    i = -1;
    pcVar5 = &stack0x00000020;
    do {
      pcVar7 = pcVar5;
      if (i == 0) break;
      i = i + -1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar7 + -1) = DAT_005a75c4;
    pcVar7[1] = DAT_005a75c6;
  }
  i = (**(code **)extraout_ECX[4])();
  if (i != 0) {
    bVar8 = param_1 == 0x14;
    if (0x13 < param_1) goto LAB_00468348;
    i = -1;
    pcVar5 = &stack0x00000020;
    do {
      pcVar7 = pcVar5;
      if (i == 0) break;
      i = i + -1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    puVar4 = (undefined4 *)extraout_ECX[4];
    bVar2 = true;
    pcVar5 = s_The_following_mesh_files_are_mis_005a75c8;
    pcVar7 = pcVar7 + -1;
    for (i = 10; i != 0; i = i + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    j = 0;
    i = (*(code *)*puVar4)();
    if (0 < i) {
      do {
        bVar8 = param_1 == 0x14;
        if (0x13 < param_1) goto LAB_00468348;
        param_2 = *(int *)extraout_ECX[0xe];
        i = j;
        if (0 < j) {
          do {
            FUN_00448fd0(&param_2,&stack0x00000010,0);
            i = i + -1;
          } while (i != 0);
        }
        pcVar5 = *(char **)(param_2 + 0xc);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "";
        }
        k = 0xffffffff;
        do {
          pcVar7 = pcVar5;
          if (k == 0) break;
          k = k - 1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        k = ~k;
        i = -1;
        pcVar5 = &stack0x00000020;
        do {
          pcVar6 = pcVar5;
          if (i == 0) break;
          i = i + -1;
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar1 != '\0');
        pcVar5 = pcVar7 + -k;
        pcVar7 = pcVar6 + -1;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        puVar4 = (undefined4 *)extraout_ECX[6];
        for (k = k & 3; k != 0; k = k - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
        i = -1;
        pcVar5 = &stack0x00000020;
        do {
          pcVar7 = pcVar5;
          if (i == 0) break;
          i = i + -1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        *(undefined4 *)(pcVar7 + -1) = DAT_005a75f0;
        *(undefined2 *)(pcVar7 + 3) = DAT_005a75f4;
        puVar4 = (undefined4 *)*puVar4;
        i = j;
        if (0 < j) {
          do {
            puVar4 = (undefined4 *)*puVar4;
            i = i + -1;
          } while (i != 0);
        }
        pcVar5 = "";
        if ((char *)puVar4[3] != (char *)0x0) {
          pcVar5 = (char *)puVar4[3];
        }
        k = 0xffffffff;
        do {
          pcVar7 = pcVar5;
          if (k == 0) break;
          k = k - 1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        k = ~k;
        i = -1;
        pcVar5 = &stack0x00000020;
        do {
          pcVar6 = pcVar5;
          if (i == 0) break;
          i = i + -1;
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar1 != '\0');
        pcVar5 = pcVar7 + -k;
        pcVar7 = pcVar6 + -1;
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (k = k & 3; k != 0; k = k - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
        i = -1;
        pcVar5 = &stack0x00000020;
        do {
          pcVar7 = pcVar5;
          if (i == 0) break;
          i = i + -1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        j = j + 1;
        param_1 = param_1 + 1;
        *(undefined2 *)(pcVar7 + -1) = DAT_005a75f8;
        puVar4 = (undefined4 *)extraout_ECX[4];
        pcVar7[1] = DAT_005a75fa;
        i = (*(code *)*puVar4)();
      } while (j < i);
    }
  }
  bVar8 = param_1 == 0x14;
LAB_00468348:
  if (bVar8) {
    i = -1;
    pcVar5 = &stack0x00000020;
    do {
      pcVar7 = pcVar5;
      if (i == 0) break;
      i = i + -1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    pcVar5 = s_There_are_more_errors____005a75fc;
    pcVar7 = pcVar7 + -1;
    for (i = 6; i != 0; i = i + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    *(undefined2 *)pcVar7 = *(undefined2 *)pcVar5;
  }
  if (bVar2) {
    FUN_004c4150(&stack0x00000020);
  }
  return;
}


