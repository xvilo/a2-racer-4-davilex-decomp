/* spel.dat — game/lan_main.cpp: 8 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00458b90 FUN_00458b90 ==== */

int FUN_00458b90(int param_1)

{
  if ((param_1 < 0) || (DAT_006fd148 <= param_1)) {
    FUN_004c4150(s__s___d__Text_index_incorrect__In_005a4e74,
                 s_C__Work_A2IV_Game_prog_lan_main__005a4e50,0x28,param_1,DAT_006fd148);
  }
  return param_1;
}


/* ==== 00458bc0 FUN_00458bc0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458bc0(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int m;
  uint i;
  uint j;
  int k;
  char *pcVar4;
  char *pcVar5;
  CHAR aCStack_154 [20];
  char local_140 [64];
  char acStack_100 [256];
  
  FUN_004489a0(&DAT_006fa558,s_LANGUAGE_INI_005a4ec4,s_Language_Settings_005a4eb0);
  iVar2 = FUN_00448c90(&DAT_006fa558,s_Language_Settings_005a4ed4);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60();
  _DAT_006fd144 = FUN_004c3cd0(s_SETTINGS_005a4ef4,s_language_005a4ee8,puVar3);
  if (_DAT_006fd144 == 0) {
    pcVar4 = s_NEDERLANDS_005a4f00;
  }
  else if (_DAT_006fd144 == 1) {
    pcVar4 = s_ENGELS_005a4f0c;
  }
  else {
    if (_DAT_006fd144 != 2) {
      FUN_004c4150(s__s___d__Illegal_language_set_in_l_005a4f40,
                   s_C__Work_A2IV_Game_prog_lan_main__005a4f1c,0x54,_DAT_006fd144);
      goto LAB_00458c76;
    }
    pcVar4 = s_DUITS_005a4f14;
  }
  i = 0xffffffff;
  do {
    pcVar5 = pcVar4;
    if (i == 0) break;
    i = i - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar4 = pcVar5 + -i;
  pcVar5 = local_140;
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
LAB_00458c76:
  iVar2 = FUN_004c3cd0(s_SETTINGS_005a4f8c,s_text_count_005a4f80);
  if ((iVar2 < 0) || (200 < iVar2)) {
    FUN_004c4150(s__s___d__Illegal_value_for_nr__of_005a4fbc,
                 s_C__Work_A2IV_Game_prog_lan_main__005a4f98,0x5e,iVar2);
  }
  k = 0;
  DAT_006fd148 = iVar2;
  if (0 < iVar2) {
    do {
      wsprintfA(aCStack_154,s__d_005a4ff4,k);
      FUN_004c3d10(local_140,aCStack_154,acStack_100,0xff);
      m = -1;
      pcVar4 = acStack_100;
      do {
        if (m == 0) break;
        m = m + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (m == -2) {
        FUN_004c4150(s__s___d__Couldn_t_find_text_for_i_005a501c,
                     s_C__Work_A2IV_Game_prog_lan_main__005a4ff8,0x6e,k,local_140);
      }
      m = FUN_00458b90(k);
      i = 0xffffffff;
      pcVar4 = acStack_100;
      do {
        pcVar5 = pcVar4;
        if (i == 0) break;
        i = i - 1;
        pcVar5 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar5;
      } while (cVar1 != '\0');
      i = ~i;
      pcVar4 = pcVar5 + -i;
      pcVar5 = &DAT_006fd14c + m * 0x100;
      for (j = i >> 2; j != 0; j = j - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      k = k + 1;
      for (i = i & 3; i != 0; i = i - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
    } while (k < iVar2);
  }
  _DAT_006fd140 = 1;
  return;
}


/* ==== 00458db0 FUN_00458db0 ==== */

void FUN_00458db0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00458dc0 FUN_00458dc0 ==== */

void FUN_00458dc0(void)

{
  FUN_005584e0(&LAB_00458dd0);
  return;
}


/* ==== 00458df0 FUN_00458df0 ==== */

void FUN_00458df0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00458e00 FUN_00458e00 ==== */

void FUN_00458e00(void)

{
  FUN_005584e0(&LAB_00458e10);
  return;
}


/* ==== 00458e20 FUN_00458e20 ==== */

void FUN_00458e20(void)

{
  float fVar1;
  float fVar2;
  uint __ftol_result_2;
  int i;
  void *this_val;
  undefined4 __ftol_result;
  undefined4 *puVar3;
  float in_stack_00000044;
  float in_stack_0000004c;
  undefined4 auStack_74 [16];
  float local_34;
  undefined4 local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a7cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  __ftol_result_2 = __ftol();
  i = (__ftol_result_2 & DAT_005b23bc) * 4;
  fVar1 = *(float *)(i + DAT_0073b578);
  fVar2 = *(float *)(i + DAT_0073b530);
  FUN_00460370();
  local_30 = 0x458ed3;
  this_val = operator_new(0xb0);
  local_4 = 0;
  if (this_val != (void *)0x0) {
    local_30 = 0x40a00000;
    puVar3 = auStack_74;
    local_34 = (fVar1 * in_stack_00000044 - fVar2 * in_stack_0000004c) * 11.0;
    for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
        i = i + -1) {
      *puVar3 = *(undefined4 *)register0x00000010;
      puVar3 = puVar3 + 1;
    }
    FUN_004a6800(&DAT_007128b0);
    __ftol_result = __ftol();
    FUN_00458f50(this_val,__ftol_result);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00458f50 FUN_00458f50 ==== */

void * __thiscall FUN_00458f50(void *this,int param_2)

{
  void *this_val_2;
  undefined4 this_val;
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  float in_stack_0000003c;
  float in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  void *in_stack_00000054;
  undefined4 auStackY_88 [14];
  undefined4 uStackY_50;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a7f3;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)&stack0x00000008;
  puVar2 = auStackY_88;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00576838;
  *(undefined4 *)((int)this + 0x94) = 0x41a00000;
  FUN_004602e0();
  in_stack_00000048 = in_stack_0000003c + 0.12;
  FUN_004602e0();
  FUN_004602e0();
  uStackY_50 = 0x459044;
  this_val_2 = operator_new(0x78);
  local_4._0_1_ = 1;
  if (this_val_2 == (void *)0x0) {
    this_val = 0;
  }
  else {
    uStackY_50 = 0x459077;
    in_stack_00000054 = this_val_2;
    FUN_004602e0();
    this_val = FUN_004593e0(this_val_2);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)this + 0xac) = this_val;
  if (1 < param_2) {
    in_stack_00000054 = (void *)(param_2 + -1);
    do {
      FUN_004602e0();
      FUN_004602e0();
      FUN_004602e0();
      uStackY_50 = 0x459126;
      this_val_2 = operator_new(0x78);
      local_4._0_1_ = 2;
      if (this_val_2 != (void *)0x0) {
        uStackY_50 = 0x459156;
        FUN_004602e0();
        FUN_004593e0(this_val_2);
      }
      local_4._0_1_ = 0;
      FUN_0045dff0(this_val);
      in_stack_00000054 = (void *)((int)in_stack_00000054 + -1);
    } while (in_stack_00000054 != (void *)0x0);
  }
  ExceptionList = local_c;
  return this;
}


