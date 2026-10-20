/* spel.dat — game/car_data.cpp: 20 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00423c30 FUN_00423c30 ==== */

void FUN_00423c30(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00423c40 FUN_00423c40 ==== */

void FUN_00423c40(void)

{
  FUN_005584e0(&LAB_00423c50);
  return;
}


/* ==== 00423c70 FUN_00423c70 ==== */

void FUN_00423c70(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00423c80 FUN_00423c80 ==== */

void FUN_00423c80(void)

{
  FUN_005584e0(&LAB_00423c90);
  return;
}


/* ==== 00423cb0 FUN_00423cb0 ==== */

void FUN_00423cb0(void)

{
  FUN_00424840(&DAT_005d3458);
  return;
}


/* ==== 00423cc0 FUN_00423cc0 ==== */

void FUN_00423cc0(void)

{
  FUN_005584e0(&LAB_00423cd0);
  return;
}


/* ==== 00423e40 FUN_00423e40 ==== */

void FUN_00423e40(int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int i;
  uint j;
  uint k;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_2e9;
  int local_2e8;
  undefined1 local_2e4;
  undefined1 local_2e3;
  undefined1 local_2e2;
  undefined1 local_2e1;
  undefined1 auStack_2e0 [4];
  char *pcStack_2dc;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 local_2d0 [4];
  undefined1 *local_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  undefined1 auStack_2bc [16];
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 local_27c [4];
  int iStack_278;
  undefined1 local_26c [16];
  undefined1 local_25c [16];
  undefined1 local_24c [16];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 local_22c [16];
  undefined1 local_21c [16];
  char acStack_20c [256];
  char local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a060;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00424980(local_27c,&local_2e1);
  local_4 = 0;
  FUN_00424980(local_26c,&local_2e3);
  local_4._0_1_ = 1;
  FUN_00424980(local_25c,&local_2e2);
  local_4._0_1_ = 2;
  FUN_00424980(local_24c,&local_2e4);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00424980(local_22c,&local_2e9);
  local_4 = 4;
  local_2d0[0] = local_2e9;
  FUN_004028f0(local_2d0,0);
  local_4 = CONCAT31(local_4._1_3_,5);
  puVar2 = *(undefined1 **)(param_1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_00448c90(&DAT_006fa558,puVar2);
  FUN_004c3b60();
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  local_2c0 = FUN_004c3cd0(puVar2,s_COUNT_00595a38);
  local_2e8 = 0;
  if (0 < local_2c0) {
    do {
      iVar4 = local_2e8;
      uVar3 = FUN_0049df90(local_21c,s__d_00595a40);
      local_4._0_1_ = 6;
      FUN_004093c0(local_2d0,uVar3,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004028f0(local_21c,1);
      puVar2 = local_2cc;
      if (local_2cc == (undefined1 *)0x0) {
        puVar2 = &DAT_0057629c;
      }
      puVar5 = *(undefined1 **)(param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      FUN_004c3d10(puVar5,puVar2,local_10c,0xff);
      i = -1;
      pcVar6 = local_10c;
      do {
        if (i == 0) break;
        i = i + -1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (i == -2) {
        puVar2 = *(undefined1 **)(param_2 + 4);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0057629c;
        }
        FUN_004c4150(s__s___d__No_settings_for_vehicle___00595a68,
                     s_C__Work_A2IV_Game_prog_car_data__00595a44,0x53,iVar4,puVar2);
      }
      i = FUN_004c3d60(local_10c,0);
      if (i != 9) {
        puVar2 = &DAT_0057629c;
        if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
          puVar2 = *(undefined1 **)(param_2 + 4);
        }
        puVar5 = *(undefined1 **)(param_1 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        iVar4 = FUN_00448c90(&DAT_006fa558,puVar5);
        puVar5 = *(undefined1 **)(iVar4 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        FUN_004c4150(s__s___d__Nr_args_incorrect__Ini___00595abc,
                     s_C__Work_A2IV_Game_prog_car_data__00595a98,0x60,puVar5,puVar2,local_2e8,i);
        iVar4 = local_2e8;
      }
      FUN_004c3f10(0,acStack_20c,0xff);
      auStack_29c[0] = local_2e9;
      FUN_004028f0(auStack_29c,0);
      j = 0xffffffff;
      pcVar6 = acStack_20c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_29c,acStack_20c,~j - 1);
      local_4._0_1_ = 7;
      FUN_004093c0(local_27c,auStack_29c,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(auStack_29c,1);
      FUN_004c3f10(1,acStack_20c,0xff);
      auStack_28c[0] = local_2e9;
      FUN_004028f0(auStack_28c,0);
      j = 0xffffffff;
      pcVar6 = acStack_20c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_28c,acStack_20c,~j - 1);
      local_4._0_1_ = 8;
      FUN_004093c0(local_26c,auStack_28c,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(auStack_28c,1);
      FUN_004c3f10(2,acStack_20c,0xff);
      auStack_2ac[0] = local_2e9;
      FUN_004028f0(auStack_2ac,0);
      j = 0xffffffff;
      pcVar6 = acStack_20c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_2ac,acStack_20c,~j - 1);
      local_4._0_1_ = 9;
      FUN_004093c0(local_25c,auStack_2ac,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(auStack_2ac,1);
      FUN_004c3f10(3,acStack_20c,0xff);
      auStack_2bc[0] = local_2e9;
      FUN_004028f0(auStack_2bc,0);
      j = 0xffffffff;
      pcVar6 = acStack_20c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_2bc,acStack_20c,~j - 1);
      local_4._0_1_ = 10;
      FUN_004093c0(local_24c,auStack_2bc,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(auStack_2bc,1);
      uStack_23c = FUN_004c3ec0(4);
      uStack_238 = FUN_004c3ec0(5);
      uStack_234 = FUN_004c3ec0(6);
      uStack_230 = FUN_004c3ec0(7);
      FUN_004c3f10(8,acStack_20c,0xff);
      auStack_2e0[0] = local_2e9;
      FUN_004028f0(auStack_2e0,0);
      j = 0xffffffff;
      pcVar6 = acStack_20c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      cVar1 = FUN_00402a00(auStack_2e0,j,1);
      if (cVar1 != '\0') {
        pcVar6 = acStack_20c;
        pcVar7 = pcStack_2dc;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        pcStack_2dc[j] = '\0';
        iVar4 = local_2e8;
        uStack_2d8 = j;
      }
      local_4._0_1_ = 0xb;
      FUN_004093c0(local_22c,auStack_2e0,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (pcStack_2dc != (char *)0x0) {
        cVar1 = pcStack_2dc[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(pcStack_2dc + -1);
        }
        else {
          pcStack_2dc[-1] = cVar1 + -1;
        }
      }
      pcStack_2dc = (char *)0x0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      FUN_00424ad0(DAT_005d345c,*(undefined1 **)((int)DAT_005d345c + 8),1,local_27c);
      local_2e8 = iVar4 + 1;
    } while (local_2e8 < local_2c0);
  }
  if (local_2cc != (undefined1 *)0x0) {
    cVar1 = local_2cc[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_2cc + -1);
    }
    else {
      local_2cc[-1] = cVar1 + -1;
    }
  }
  local_2cc = (undefined1 *)0x0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  local_4 = 0xf;
  FUN_004028f0(local_22c,1);
  local_4._0_1_ = 0xe;
  FUN_004028f0(local_24c,1);
  local_4._0_1_ = 0xd;
  FUN_004028f0(local_25c,1);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0(local_26c,1);
  if (iStack_278 != 0) {
    cVar1 = *(char *)(iStack_278 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_278 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(iStack_278 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004244b0 FUN_004244b0 ==== */

void __thiscall FUN_004244b0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a07a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0049df90(local_1c,s_league_d_00595afc);
  local_4 = 0;
  FUN_00423e40(param_2,uVar2);
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_2c[0] = (undefined1)param_2;
  i = 0xffffffff;
  pcVar3 = s_traffic_00595b08;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  cVar1 = FUN_00402a00(local_2c,i,1);
  if (cVar1 != '\0') {
    pcVar3 = s_traffic_00595b08;
    pcVar4 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 1;
  FUN_00423e40(param_2,local_2c);
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004245f0 FUN_004245f0 ==== */

int __thiscall FUN_004245f0(void *this,int param_2)

{
  int iVar1;
  char *_Str1;
  int __strcmpi_result;
  char *_Str2;
  int i;
  int iVar2;
  
  iVar1 = (*(code *)**(undefined4 **)this)();
  i = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      _Str2 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_2 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)((int)this + 4) + 4) + iVar2 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      __strcmpi_result = __strcmpi(_Str1,_Str2);
      if (__strcmpi_result == 0) {
        return i;
      }
      i = i + 1;
      iVar2 = iVar2 + 0x60;
    } while (i < iVar1);
  }
  return -1;
}


/* ==== 00424660 FUN_00424660 ==== */

int __thiscall FUN_00424660(void *this,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_004245f0(this,param_2);
  if (iVar1 == -1) {
    puVar2 = *(undefined1 **)(param_2 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0057629c;
    }
    FUN_004c4150(s__s___d__Cannot_find_vehicle_name_00595b34,
                 s_C__Work_A2IV_Game_prog_car_data__00595b10,0xcf,puVar2);
  }
  return *(int *)(*(int *)((int)this + 4) + 4) + iVar1 * 0x60;
}


/* ==== 004246f0 FUN_004246f0 ==== */

void FUN_004246f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00424700 FUN_00424700 ==== */

void FUN_00424700(void)

{
  FUN_005584e0(&LAB_00424710);
  return;
}


/* ==== 00424730 FUN_00424730 ==== */

void FUN_00424730(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00424740 FUN_00424740 ==== */

void FUN_00424740(void)

{
  FUN_005584e0(&LAB_00424750);
  return;
}


/* ==== 00424760 FUN_00424760 ==== */

void __thiscall FUN_00424760(void *this)

{
  int iVar1;
  int iVar2;
  int this_val;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569f99;
  ExceptionList = &local_c;
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_0057654c;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    ExceptionList = local_c;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  for (this_val = *(int *)(iVar1 + 4); this_val != iVar2; this_val = this_val + 0x60) {
    local_4 = 3;
    FUN_004900b0(this_val + 0x50);
    local_4._0_1_ = 2;
    FUN_004900b0(this_val + 0x30);
    local_4._0_1_ = 1;
    FUN_004900b0(this_val + 0x20);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004900b0(this_val + 0x10);
    local_4 = 0xffffffff;
    FUN_004900b0(this_val);
  }
  FUN_0054b339(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_0054b339(iVar1);
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return;
}


/* ==== 00424840 FUN_00424840 ==== */

void * __thiscall FUN_00424840(void *this)

{
  undefined1 *operator_new_result;
  undefined1 local_1;
  
  *(undefined ***)this = &PTR_LAB_0057654c;
  operator_new_result = operator_new(0x10);
  if (operator_new_result != (undefined1 *)0x0) {
    local_1 = (undefined1)((uint)this >> 0x18);
    *(undefined4 *)(operator_new_result + 4) = 0;
    *operator_new_result = local_1;
    *(undefined4 *)(operator_new_result + 8) = 0;
    *(undefined4 *)(operator_new_result + 0xc) = 0;
    *(undefined1 **)((int)this + 4) = operator_new_result;
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


/* ==== 00424880 FUN_00424880 ==== */

void __thiscall FUN_00424880(void *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x54);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  iVar2 = *(int *)((int)this + 0x34);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  iVar2 = *(int *)((int)this + 0x14);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 00424980 FUN_00424980 ==== */

void __thiscall FUN_00424980(void *this,undefined1 *param_2)

{
  *(undefined1 *)this = *param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


/* ==== 004249d0 FUN_004249d0 ==== */

int __thiscall FUN_004249d0(void *this)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)this)();
  return *(int *)(*(int *)((int)this + 4) + 4) + (iVar1 + -1) * 0x60;
}


/* ==== 00424ad0 FUN_00424ad0 ==== */

int __thiscall FUN_00424ad0(void *this,undefined1 *this_val_4,uint param_2,undefined1 *param_3)

{
  undefined1 *this_val_2;
  int this_val;
  undefined1 *puVar1;
  uint uVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  void *extraout_ECX_03;
  int i;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int this_val_5;
  void *this_val_3;
  
  puVar4 = *(undefined1 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar4) / 0x60) < param_2) {
    i = *(int *)((int)this + 4);
    if ((i == 0) || (uVar2 = ((int)puVar4 - i) / 0x60, uVar2 <= param_2)) {
      uVar2 = param_2;
    }
    if (i == 0) {
      i = 0;
    }
    else {
      i = ((int)puVar4 - i) / 0x60;
    }
    i = i + uVar2;
    this_val = i;
    if (i < 0) {
      this_val = 0;
    }
    puVar1 = operator_new(this_val * 0x60);
    puVar3 = puVar1;
    this_val_3 = extraout_ECX;
    for (puVar4 = *(undefined1 **)((int)this + 4); uVar2 = param_2, this_val_2 = puVar3,
        puVar4 != this_val_4; puVar4 = puVar4 + 0x60) {
      FUN_00424e30(this_val_3,puVar3,puVar4);
      puVar3 = puVar3 + 0x60;
      this_val_3 = extraout_ECX_00;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_00424e30(this_val_3,this_val_2,param_3);
      this_val_2 = this_val_2 + 0x60;
      this_val_3 = extraout_ECX_01;
    }
    puVar3 = puVar3 + param_2 * 0x60;
    puVar4 = *(undefined1 **)((int)this + 8);
    for (; this_val_4 != puVar4; this_val_4 = this_val_4 + 0x60) {
      FUN_00424e30(puVar3,puVar3,this_val_4);
      puVar3 = puVar3 + 0x60;
    }
    this_val = *(int *)((int)this + 8);
    for (this_val_5 = *(int *)((int)this + 4); this_val_5 != this_val;
        this_val_5 = this_val_5 + 0x60) {
      FUN_00424880(this_val_5);
    }
    FUN_0054b339(*(undefined4 *)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar1 + i * 0x60;
    if (*(int *)((int)this + 4) == 0) {
      this_val = 0;
      i = 0;
    }
    else {
      this_val = *(int *)((int)this + 8) - *(int *)((int)this + 4);
      i = this_val * 0x2aaaaaab;
      this_val = this_val / 0x60;
    }
    *(undefined1 **)((int)this + 4) = puVar1;
    *(undefined1 **)((int)this + 8) = puVar1 + (param_2 + this_val) * 0x60;
    return i;
  }
  i = -((int)puVar4 - (int)this_val_4 >> 0x1f);
  if (param_2 <= (uint)(((int)puVar4 - (int)this_val_4) / 0x60)) {
    if (param_2 != 0) {
      i = param_2 * 0x60;
      puVar3 = puVar4;
      this_val_3 = this;
      for (puVar1 = puVar4 + param_2 * -0x60; puVar1 != puVar4; puVar1 = puVar1 + 0x60) {
        FUN_00424e30(this_val_3,puVar3,puVar1);
        puVar3 = puVar3 + 0x60;
        this_val_3 = extraout_ECX_03;
      }
      this_val = *(int *)((int)this + 8);
      puVar4 = (undefined1 *)(this_val + param_2 * -0x60);
      while (this_val_4 != puVar4) {
        puVar4 = puVar4 + -0x60;
        this_val = this_val + -0x60;
        FUN_00424f50(this_val,puVar4);
      }
      if (this_val_4 != this_val_4 + i) {
        puVar4 = this_val_4 + 0x20;
        do {
          FUN_004093c0(puVar4 + -0x20,param_3,0,0xffffffff);
          FUN_004093c0(puVar4 + -0x10,param_3 + 0x10,0,0xffffffff);
          FUN_004093c0(puVar4,param_3 + 0x20,0,0xffffffff);
          FUN_004093c0(puVar4 + 0x10,param_3 + 0x30,0,0xffffffff);
          *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(param_3 + 0x40);
          *(undefined4 *)(puVar4 + 0x24) = *(undefined4 *)(param_3 + 0x44);
          *(undefined4 *)(puVar4 + 0x28) = *(undefined4 *)(param_3 + 0x48);
          *(undefined4 *)(puVar4 + 0x2c) = *(undefined4 *)(param_3 + 0x4c);
          FUN_004093c0(puVar4 + 0x30,param_3 + 0x50,0,0xffffffff);
          puVar3 = puVar4 + 0x40;
          puVar4 = puVar4 + 0x60;
        } while (puVar3 != this_val_4 + i);
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + i;
    }
    return i;
  }
  puVar3 = this_val_4 + param_2 * 0x60;
  for (puVar1 = this_val_4; puVar1 != puVar4; puVar1 = puVar1 + 0x60) {
    FUN_00424e30(puVar3,puVar3,puVar1);
    puVar3 = puVar3 + 0x60;
  }
  puVar4 = *(undefined1 **)((int)this + 8);
  puVar3 = puVar4 + -(int)this_val_4;
  for (i = param_2 - (int)puVar3 / 0x60; i != 0; i = i + -1) {
    FUN_00424e30(puVar3,puVar4,param_3);
    puVar4 = puVar4 + 0x60;
    puVar3 = extraout_ECX_02;
  }
  puVar4 = *(undefined1 **)((int)this + 8);
  for (; this_val_4 != puVar4; this_val_4 = this_val_4 + 0x60) {
    FUN_00424f50(this_val_4,param_3);
  }
  i = *(int *)((int)this + 8) + param_2 * 0x60;
  *(int *)((int)this + 8) = i;
  return i;
}


