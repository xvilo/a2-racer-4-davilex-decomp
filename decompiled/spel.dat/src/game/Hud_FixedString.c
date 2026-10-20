/* spel.dat — game/Hud_FixedString.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047d5f0 FUN_0047d5f0 ==== */

void FUN_0047d5f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0047d600 FUN_0047d600 ==== */

void FUN_0047d600(void)

{
  FUN_005584e0(&LAB_0047d610);
  return;
}


/* ==== 0047d630 FUN_0047d630 ==== */

void FUN_0047d630(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0047d640 FUN_0047d640 ==== */

void FUN_0047d640(void)

{
  FUN_005584e0(&LAB_0047d650);
  return;
}


/* ==== 0047d660 FUN_0047d660 ==== */

void * __thiscall FUN_0047d660(void *this,byte param_2)

{
  FUN_0047d680();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 0047d680 FUN_0047d680 ==== */

void __thiscall FUN_0047d680(void *this)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_LAB_00576a98;
  iVar2 = *(int *)((int)this + 0x38);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return;
}


/* ==== 0047d6d0 FUN_0047d6d0 ==== */

void __thiscall FUN_0047d6d0(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined ***)this = &PTR_LAB_00576b60;
  return;
}


/* ==== 0047d710 FUN_0047d710 ==== */

void * __thiscall
FUN_0047d710(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_00486d50(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_LAB_00576b68;
  return this;
}


/* ==== 0047d740 FUN_0047d740 ==== */

void __thiscall FUN_0047d740(void *this,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 this_val_3;
  undefined4 this_val;
  byte *pbVar4;
  uint i;
  uint k;
  int j;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_12d;
  int local_12c;
  uint local_128;
  uint local_124;
  undefined4 this_val_2;
  undefined1 local_11c [4];
  char *local_118;
  undefined1 local_10c [4];
  char *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [16];
  int this_val_4;
  undefined1 local_e8 [4];
  char *local_e4;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined **local_a8 [3];
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
  puStack_8 = &LAB_0056bd8c;
  local_c = ExceptionList;
  this_val_4 = (int)this + 0x9c;
  ExceptionList = &local_c;
  iVar2 = FUN_0047e340(this_val_4,param_2);
  if (iVar2 != 0) {
    i = *(uint *)(param_2 + 8);
    if (*(uint *)((int)this + 0x98) < i) {
      i = *(uint *)((int)this + 0x98);
    }
    j = 0;
    local_124 = i;
    iVar2 = FUN_004871d0(this);
    if (iVar2 == 0) {
      local_12c = 0;
    }
    else {
      if (iVar2 == 1) {
        local_12c = (int)(*(int *)((int)this + 0x98) - i) / 2;
      }
      else {
        if (iVar2 != 2) {
          local_c8[0] = local_12d;
          FUN_004028f0(local_c8,0);
          i = 0xffffffff;
          pcVar5 = s___005a9d60;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_c8,s___005a9d60,~i - 1);
          local_4 = 0;
          iVar2 = FUN_004873b0(local_2c,0x3d);
          local_4._0_1_ = 1;
          local_d8[0] = local_12d;
          FUN_004028f0(local_d8,0);
          i = 0xffffffff;
          pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9d68;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_d8,s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9d68,~i - 1);
          local_4._0_1_ = 2;
          local_b8[0] = local_12d;
          FUN_004028f0(local_b8,0);
          i = 0xffffffff;
          pcVar5 = s_HeadUp_Display_exception_in__005a9d94;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_b8,s_HeadUp_Display_exception_in__005a9d94,~i - 1);
          local_4._0_1_ = 3;
          puVar3 = (undefined1 *)FUN_0047c9a0(local_1c,local_b8,(int)local_d8);
          local_4._0_1_ = 4;
          puVar3 = (undefined1 *)FUN_004796b0(local_6c,puVar3,s__005a9d64);
          local_4._0_1_ = 5;
          puVar3 = (undefined1 *)FUN_0047c9a0(local_8c,puVar3,iVar2);
          local_4._0_1_ = 6;
          puVar3 = (undefined1 *)FUN_0047c9a0(local_4c,puVar3,(int)local_c8);
          local_4._0_1_ = 7;
          puVar3 = (undefined1 *)
                   FUN_004796b0(local_7c,puVar3,s_Unknown_alignment_in_string_005a9d40);
          local_4._0_1_ = 8;
          iVar2 = FUN_0047bc10(this);
          puVar3 = (undefined1 *)FUN_0047c9a0(local_5c,puVar3,iVar2);
          local_4._0_1_ = 9;
          this_val_3 = FUN_004796b0(local_3c,puVar3,s___005a9d3c);
          local_4._0_1_ = 10;
          FUN_00558826(local_a8);
          local_4._0_1_ = 0xb;
          FUN_00424980(local_9c,&local_12d);
          local_4._0_1_ = 0xc;
          local_a8[0] = &PTR_FUN_00576b14;
          FUN_004093c0(local_9c,this_val_3,0,0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_a8,&DAT_0057f730);
        }
        local_12c = *(int *)((int)this + 0x98) - i;
      }
      if (0 < local_12c) {
        do {
          iVar2 = FUN_00487200(this);
          local_fc[0] = local_12d;
          this_val_3 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 4) + j * 4);
          FUN_004028f0(local_fc,0);
          i = 0xffffffff;
          pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9db4;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_fc,s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9db4,~i - 1);
          local_4 = 0xd;
          local_11c[0] = local_12d;
          FUN_004028f0(local_11c,0);
          i = 0xffffffff;
          pcVar5 = s_Null_character_in_string_005a9de0;
          do {
            if (i == 0) break;
            i = i - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_11c,s_Null_character_in_string_005a9de0,~i - 1);
          local_4._0_1_ = 0xe;
          FUN_00487bc0(this_val_3,local_11c,local_fc,0x44);
          local_4 = CONCAT31(local_4._1_3_,0xd);
          FUN_004028f0(local_11c,1);
          local_4 = 0xffffffff;
          FUN_004028f0(local_fc,1);
          uVar7 = 0x20;
          this_val = FUN_004871c0(this,0x20);
          this_val = FUN_0047e4e0(this_val,uVar7);
          FUN_0047ce40(this_val_3,this_val);
          j = j + 1;
          i = local_124;
        } while (j < local_12c);
      }
    }
    local_128 = local_12c + i;
    if (j < (int)local_128) {
      do {
        iVar2 = FUN_00487200(this);
        this_val_3 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 4) + j * 4);
        local_11c[0] = local_12d;
        this_val_2 = this_val_3;
        FUN_004028f0(local_11c,0);
        i = 0xffffffff;
        pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9dfc;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        local_124 = i;
        cVar1 = FUN_00402a00(local_11c,i,1);
        if (cVar1 != '\0') {
          pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9dfc;
          pcVar6 = local_118;
          for (k = i >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (k = i & 3; k != 0; k = k - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          FUN_004029e0(local_11c,i);
          this_val_3 = this_val_2;
        }
        local_fc[0] = local_12d;
        local_4 = 0xf;
        FUN_004028f0(local_fc,0);
        i = 0xffffffff;
        pcVar5 = s_Null_character_in_string_005a9e28;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_fc,s_Null_character_in_string_005a9e28,~i - 1);
        local_4._0_1_ = 0x10;
        FUN_00487bc0(this_val_3,local_fc,local_11c,0x4d);
        local_4 = CONCAT31(local_4._1_3_,0xf);
        FUN_004028f0(local_fc,1);
        local_4 = 0xffffffff;
        FUN_004028f0(local_11c,1);
        if (*(int *)(param_2 + 4) == 0) {
          pbVar4 = &DAT_0057629c;
        }
        else {
          pbVar4 = (byte *)((*(int *)(param_2 + 4) - local_12c) + j);
        }
        i = (uint)*pbVar4;
        this_val = FUN_004871c0(this,i);
        this_val = FUN_0047e4e0(this_val,i);
        FUN_0047ce40(this_val_3,this_val);
        j = j + 1;
      } while (j < (int)local_128);
    }
    if (j < *(int *)((int)this + 0x98)) {
      do {
        iVar2 = FUN_00487200(this);
        local_10c[0] = local_12d;
        this_val_2 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 4) + j * 4);
        FUN_004028f0(local_10c,0);
        i = 0xffffffff;
        pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e44;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        local_128 = i;
        cVar1 = FUN_00402a00(local_10c,i,1);
        if (cVar1 != '\0') {
          pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e44;
          pcVar6 = local_108;
          for (k = i >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (k = i & 3; k != 0; k = k - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          FUN_004029e0(local_10c,i);
        }
        local_4 = 0x11;
        local_e8[0] = local_12d;
        FUN_004028f0(local_e8,0);
        i = 0xffffffff;
        pcVar5 = s_Null_character_in_string_005a9e70;
        do {
          if (i == 0) break;
          i = i - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        i = ~i - 1;
        local_128 = i;
        cVar1 = FUN_00402a00(local_e8,i,1);
        if (cVar1 != '\0') {
          pcVar5 = s_Null_character_in_string_005a9e70;
          pcVar6 = local_e4;
          for (k = i >> 2; k != 0; k = k - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (k = i & 3; k != 0; k = k - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          FUN_004029e0(local_e8,i);
        }
        this_val_3 = this_val_2;
        local_4._0_1_ = 0x12;
        FUN_00487bc0(this_val_2,local_e8,local_10c,0x56);
        local_4 = CONCAT31(local_4._1_3_,0x11);
        FUN_004028f0(local_e8,1);
        local_4 = 0xffffffff;
        if (local_108 != (char *)0x0) {
          cVar1 = local_108[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(local_108 + -1);
          }
          else {
            local_108[-1] = cVar1 + -1;
          }
        }
        uVar7 = 0x20;
        local_108 = (char *)0x0;
        local_104 = 0;
        local_100 = 0;
        this_val = FUN_004871c0(this,0x20);
        this_val = FUN_0047e4e0(this_val,uVar7);
        FUN_0047ce40(this_val_3,this_val);
        j = j + 1;
      } while (j < *(int *)((int)this + 0x98));
    }
    FUN_004093c0(this_val_4,param_2,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047dde0 FUN_0047dde0 ==== */

void __thiscall FUN_0047dde0(void *this)

{
  char cVar1;
  undefined4 this_val;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  char *pcVar5;
  float10 fVar6;
  float *pfVar7;
  undefined1 local_125;
  float local_124;
  int local_120;
  float local_11c [4];
  undefined4 local_10c;
  undefined4 local_108;
  float local_104 [3];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined **local_a8 [3];
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
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056be26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_val = FUN_004871c0();
  fVar6 = (float10)FUN_0047e6d0(this_val);
  local_124 = (float)((float10)*(float *)((int)this + 0x94) / fVar6);
  this_val = FUN_004871c0(this);
  fVar6 = (float10)FUN_0047e6e0(this_val);
  local_120 = 0;
  local_124 = (float)(fVar6 * (float10)local_124);
  if (0 < *(int *)((int)this + 0x98)) {
    do {
      iVar3 = local_120;
      iVar2 = FUN_00487200(this);
      local_e8[0] = local_125;
      this_val = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 4) + iVar3 * 4);
      FUN_004028f0(local_e8,0);
      i = 0xffffffff;
      pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e8c;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_e8,s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e8c,~i - 1);
      local_4 = 0;
      local_f8[0] = local_125;
      FUN_004028f0(local_f8,0);
      i = 0xffffffff;
      pcVar5 = s_Null_character_in_string_005a9eb8;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_f8,s_Null_character_in_string_005a9eb8,~i - 1);
      local_4._0_1_ = 1;
      FUN_00487bc0(this_val,local_f8,local_e8,0x6f);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_f8,1);
      local_4 = 0xffffffff;
      FUN_004028f0(local_e8,1);
      iVar2 = FUN_004871d0(this);
      if (iVar2 == 0) {
        pfVar7 = local_11c + 3;
        local_10c = 0;
        local_108 = 0;
        local_11c[3] = ((float)local_120 + 0.5) * (local_124 + *(float *)((int)this + 0x94));
      }
      else if (iVar2 == 1) {
        pfVar7 = local_104;
        local_104[1] = 0.0;
        local_104[2] = 0.0;
        local_104[0] = (local_124 + *(float *)((int)this + 0x94)) *
                       ((1.0 - (float)*(int *)((int)this + 0x98)) * 0.5 + (float)local_120);
      }
      else {
        if (iVar2 != 2) {
          local_c8[0] = local_125;
          FUN_004028f0(local_c8,0);
          i = 0xffffffff;
          pcVar5 = s___005a9ef8;
          goto code_r0x0047e00d;
        }
        pfVar7 = local_11c;
        local_11c[1] = 0.0;
        local_11c[2] = 0.0;
        local_11c[0] = (local_124 + *(float *)((int)this + 0x94)) *
                       (((float)local_120 - (float)*(int *)((int)this + 0x98)) + 0.5);
      }
      FUN_0047bc50(this_val,pfVar7);
      local_120 = iVar3 + 1;
    } while (local_120 < *(int *)((int)this + 0x98));
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    if (cVar1 == '\0') break;
code_r0x0047e00d:
    if (i == 0) break;
  }
  FUN_00402940(local_c8,s___005a9ef8,~i - 1);
  local_4 = 2;
  iVar3 = FUN_004873b0(local_2c,0x7d);
  local_b8[0] = local_125;
  local_4._0_1_ = 3;
  FUN_004028f0(local_b8,0);
  i = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9f00;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_b8,s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9f00,~i - 1);
  local_4._0_1_ = 4;
  local_d8[0] = local_125;
  FUN_004028f0(local_d8,0);
  i = 0xffffffff;
  pcVar5 = s_HeadUp_Display_exception_in__005a9f2c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d8,s_HeadUp_Display_exception_in__005a9f2c,~i - 1);
  local_4._0_1_ = 5;
  puVar4 = (undefined1 *)FUN_0047c9a0(local_1c,local_d8,(int)local_b8);
  local_4._0_1_ = 6;
  puVar4 = (undefined1 *)FUN_004796b0(local_6c,puVar4,s__005a9efc);
  local_4._0_1_ = 7;
  puVar4 = (undefined1 *)FUN_0047c9a0(local_8c,puVar4,iVar3);
  local_4._0_1_ = 8;
  puVar4 = (undefined1 *)FUN_0047c9a0(local_4c,puVar4,(int)local_c8);
  local_4._0_1_ = 9;
  puVar4 = (undefined1 *)FUN_004796b0(local_7c,puVar4,s_Invalid_alignment_in_string_005a9ed8);
  local_4._0_1_ = 10;
  iVar3 = FUN_0047bc10(this);
  puVar4 = (undefined1 *)FUN_0047c9a0(local_5c,puVar4,iVar3);
  local_4._0_1_ = 0xb;
  this_val = FUN_004796b0(local_3c,puVar4,s___005a9ed4);
  local_4._0_1_ = 0xc;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0xd;
  FUN_00424980(local_9c,&local_125);
  local_4._0_1_ = 0xe;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,this_val,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


