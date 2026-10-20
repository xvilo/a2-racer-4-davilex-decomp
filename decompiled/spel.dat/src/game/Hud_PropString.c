/* spel.dat — game/Hud_PropString.cpp: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004861a0 FUN_004861a0 ==== */

void FUN_004861a0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004861b0 FUN_004861b0 ==== */

void FUN_004861b0(void)

{
  FUN_005584e0(&LAB_004861c0);
  return;
}


/* ==== 004861e0 FUN_004861e0 ==== */

void FUN_004861e0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004861f0 FUN_004861f0 ==== */

void FUN_004861f0(void)

{
  FUN_005584e0(&LAB_00486200);
  return;
}


/* ==== 00486240 FUN_00486240 ==== */

void * __thiscall FUN_00486240(void *this,byte param_2)

{
  FUN_00483f80();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00486260 FUN_00486260 ==== */

void __thiscall FUN_00486260(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00576e28;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004862a0 FUN_004862a0 ==== */

void __thiscall FUN_004862a0(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = &PTR_LAB_00576e18;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


/* ==== 004862e0 FUN_004862e0 ==== */

void * __thiscall
FUN_004862e0(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_00486d50(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_LAB_00576e38;
  return this;
}


/* ==== 004864c0 FUN_004864c0 ==== */

void __thiscall FUN_004864c0(void *this)

{
  char cVar1;
  undefined4 this_val;
  int j;
  undefined1 *puVar2;
  int iVar3;
  uint i;
  char *pcVar4;
  float10 fVar5;
  undefined1 local_fd;
  float local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  int local_c0;
  undefined **local_b8 [3];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056d24d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00479520((void *)((int)this + 0x9c),local_c8,0,*(uint *)((int)this + 0x98));
  local_4 = 0;
  this_val = FUN_004871c0(this);
  fVar5 = (float10)FUN_0047e6d0(this_val);
  if ((float10)0.0 < fVar5) {
    local_fc = (float)((float10)*(float *)((int)this + 0x94) / fVar5);
    j = FUN_004871d0(this);
    if (j == 0) {
      FUN_004869e0(this,local_c8,local_fc);
    }
    else if (j == 1) {
      FUN_00486ad0(this,local_c8,local_fc);
    }
    else {
      if (j != 2) {
        local_f8[0] = local_fd;
        FUN_004028f0(local_f8,0);
        i = 0xffffffff;
        pcVar4 = s___005ab218;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_f8,s___005ab218,~i - 1);
        local_4._0_1_ = 0xf;
        j = FUN_004873b0(local_3c,0x52);
        local_d8[0] = local_fd;
        local_4._0_1_ = 0x10;
        FUN_004028f0(local_d8,0);
        i = 0xffffffff;
        pcVar4 = s_C__Work_A2IV_Game_prog_Hud_PropS_005ab220;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_d8,s_C__Work_A2IV_Game_prog_Hud_PropS_005ab220,~i - 1);
        local_4._0_1_ = 0x11;
        local_e8[0] = local_fd;
        FUN_004028f0(local_e8,0);
        i = 0xffffffff;
        pcVar4 = s_HeadUp_Display_exception_in__005ab24c;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_e8,s_HeadUp_Display_exception_in__005ab24c,~i - 1);
        local_4._0_1_ = 0x12;
        puVar2 = (undefined1 *)FUN_0047c9a0(local_5c,local_e8,(int)local_d8);
        local_4._0_1_ = 0x13;
        puVar2 = (undefined1 *)FUN_004796b0(local_7c,puVar2,s__005ab21c);
        local_4._0_1_ = 0x14;
        puVar2 = (undefined1 *)FUN_0047c9a0(local_8c,puVar2,j);
        local_4._0_1_ = 0x15;
        puVar2 = (undefined1 *)FUN_0047c9a0(local_2c,puVar2,(int)local_f8);
        local_4._0_1_ = 0x16;
        puVar2 = (undefined1 *)FUN_004796b0(local_6c,puVar2,s_Invalid_alignment_in_string_005ab1f8);
        local_4._0_1_ = 0x17;
        j = FUN_0047bc10(this);
        puVar2 = (undefined1 *)FUN_0047c9a0(local_4c,puVar2,j);
        local_4._0_1_ = 0x18;
        this_val = FUN_004796b0(local_9c,puVar2,s___005ab1f4);
        local_4._0_1_ = 0x19;
        FUN_00558826(local_b8);
        local_4._0_1_ = 0x1a;
        FUN_00424980(local_ac,&local_fd);
        local_4._0_1_ = 0x1b;
        local_b8[0] = &PTR_FUN_00576b14;
        FUN_004093c0(local_ac,this_val,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0x19);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_b8,&DAT_0057f730);
      }
      FUN_00486c20(this,local_c8,local_fc);
    }
    j = local_c0;
    if (local_c0 < *(int *)((int)this + 0x98)) {
      do {
        iVar3 = FUN_00487200(this);
        FUN_0047ce40(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + 4) + j * 4),0xffffffff);
        j = j + 1;
      } while (j < *(int *)((int)this + 0x98));
    }
    local_4 = 0xffffffff;
    FUN_004028f0(local_c8,1);
    ExceptionList = local_c;
    return;
  }
  local_d8[0] = local_fd;
  FUN_004028f0(local_d8,0);
  i = 0xffffffff;
  pcVar4 = s___005ab1a0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d8,s___005ab1a0,~i - 1);
  local_4._0_1_ = 1;
  j = FUN_004873b0(local_1c,0x42);
  local_f8[0] = local_fd;
  local_4._0_1_ = 2;
  FUN_004028f0(local_f8,0);
  i = 0xffffffff;
  pcVar4 = s_C__Work_A2IV_Game_prog_Hud_PropS_005ab1a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_f8,s_C__Work_A2IV_Game_prog_Hud_PropS_005ab1a8,~i - 1);
  local_4._0_1_ = 3;
  local_e8[0] = local_fd;
  FUN_004028f0(local_e8,0);
  i = 0xffffffff;
  pcVar4 = s_HeadUp_Display_exception_in__005ab1d4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e8,s_HeadUp_Display_exception_in__005ab1d4,~i - 1);
  local_4._0_1_ = 4;
  puVar2 = (undefined1 *)FUN_0047c9a0(local_9c,local_e8,(int)local_f8);
  local_4._0_1_ = 5;
  puVar2 = (undefined1 *)FUN_004796b0(local_4c,puVar2,s__005ab1a4);
  local_4._0_1_ = 6;
  puVar2 = (undefined1 *)FUN_0047c9a0(local_6c,puVar2,j);
  local_4._0_1_ = 7;
  puVar2 = (undefined1 *)FUN_0047c9a0(local_2c,puVar2,(int)local_d8);
  local_4._0_1_ = 8;
  puVar2 = (undefined1 *)FUN_004796b0(local_8c,puVar2,s_Font_005ab198);
  local_4._0_1_ = 9;
  j = FUN_004871c0(this);
  puVar2 = (undefined1 *)FUN_0047c9a0(local_7c,puVar2,j + 0x808);
  local_4._0_1_ = 10;
  puVar2 = (undefined1 *)FUN_004796b0(local_5c,puVar2,s_initialized_incorrectly__All_cha_005ab160);
  local_4._0_1_ = 0xb;
  this_val = FUN_004796b0(local_3c,puVar2,s___005ab15c);
  local_4._0_1_ = 0xc;
  FUN_00558826(local_b8);
  local_4._0_1_ = 0xd;
  FUN_00424980(local_ac,&local_fd);
  local_4._0_1_ = 0xe;
  local_b8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_ac,this_val,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_b8,&DAT_0057f730);
}


