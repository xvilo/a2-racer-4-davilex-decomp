/* spel.dat — game/Hud_Element.cpp: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0047cb20 FUN_0047cb20 ==== */

void * __thiscall FUN_0047cb20(void *this,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056bb78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047ba80(this,param_2,0);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(undefined ***)this = &PTR_LAB_00576b1c;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  FUN_0047cd90(&local_18);
  *(undefined1 *)((int)this + 0x48) = 0;
  ExceptionList = local_c;
  return this;
}


/* ==== 0047cd70 FUN_0047cd70 ==== */

void __thiscall FUN_0047cd70(void *this,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)((int)this + 0x48) = param_2;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  return;
}


/* ==== 0047cd90 FUN_0047cd90 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047cd90(float *param_1)

{
  undefined4 in_ECX;
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (float10)fptan((float10)3.1415927 * (float10)0.5 * (float10)0.5);
  DAT_007126b8 = (float)(fVar1 * (float10)0.9900000095367432 * (float10)0.003125);
  _DAT_007126c0 = DAT_007126b8;
  _DAT_007126bc =
       (float)(((float10)DAT_005b379c / (float10)DAT_005b3798) * fVar1 * (float10)0.9900000095367432
              * (float10)0.004166667);
  local_c = DAT_007126b8 * *param_1;
  local_8 = _DAT_007126bc * param_1[1];
  local_4 = DAT_007126b8 * param_1[2];
  FUN_0047bc70(in_ECX,&local_c);
  return;
}


/* ==== 0047ce40 FUN_0047ce40 ==== */

void __thiscall FUN_0047ce40(void *this,int param_2)

{
  *(int *)((int)this + 0x44) = param_2;
  if ((param_2 != -1) && (DAT_006fb940 != 0)) {
    *(undefined4 *)(DAT_0073b0d0 + param_2 * 0xa9 + 0xa5) = 1;
  }
  return;
}


/* ==== 0047ce80 FUN_0047ce80 ==== */

void __thiscall FUN_0047ce80(void *this,int param_2)

{
  char *str1;
  undefined4 uVar1;
  
  str1 = *(char **)(param_2 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  uVar1 = FUN_004b75a0(&DAT_00712130,str1);
  FUN_0047ceb0(this,uVar1);
  return;
}


/* ==== 0047ceb0 FUN_0047ceb0 ==== */

void __thiscall FUN_0047ceb0(void *this,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint i;
  char *pcVar6;
  undefined1 local_e9;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
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
  puStack_8 = &LAB_0056bc07;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x44) == -1) {
    ExceptionList = &local_c;
    iVar2 = FUN_004b4fa0(param_2,0,&LAB_004b5620);
    *(int *)((int)this + 0x44) = iVar2;
    if (iVar2 == -1) {
      iVar2 = FUN_004873b0(local_4c,param_2);
      local_d8[0] = local_e9;
      local_4 = 0;
      FUN_004028f0(local_d8,0);
      i = 0xffffffff;
      pcVar6 = s___005a9c48;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_d8,s___005a9c48,~i - 1);
      local_4._0_1_ = 1;
      iVar3 = FUN_004873b0(local_1c,0xcd);
      local_4._0_1_ = 2;
      local_c8[0] = local_e9;
      FUN_004028f0(local_c8,0);
      i = 0xffffffff;
      pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9c50;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_c8,s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9c50,~i - 1);
      local_e8[0] = local_e9;
      local_4._0_1_ = 3;
      FUN_004028f0(local_e8,0);
      i = 0xffffffff;
      pcVar6 = s_HeadUp_Display_exception_in__005a9c78;
      do {
        if (i == 0) break;
        i = i - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_e8,s_HeadUp_Display_exception_in__005a9c78,~i - 1);
      local_4._0_1_ = 4;
      puVar4 = (undefined1 *)FUN_0047c9a0(local_9c,local_e8,(int)local_c8);
      local_4._0_1_ = 5;
      puVar4 = (undefined1 *)FUN_004796b0(local_6c,puVar4,s__005a9c4c);
      local_4._0_1_ = 6;
      puVar4 = (undefined1 *)FUN_0047c9a0(local_2c,puVar4,iVar3);
      local_4._0_1_ = 7;
      puVar4 = (undefined1 *)FUN_0047c9a0(local_8c,puVar4,(int)local_d8);
      local_4._0_1_ = 8;
      puVar4 = (undefined1 *)
               FUN_004796b0(local_7c,puVar4,s_Unable_to_create_object_for_anim_005a9c20);
      local_4._0_1_ = 9;
      puVar4 = (undefined1 *)FUN_0047c9a0(local_5c,puVar4,iVar2);
      local_4._0_1_ = 10;
      uVar5 = FUN_004796b0(local_3c,puVar4,s___005a9c1c);
      local_4._0_1_ = 0xb;
      FUN_00558826(local_b8);
      local_4._0_1_ = 0xc;
      FUN_00424980(local_ac,&local_e9);
      local_4._0_1_ = 0xd;
      local_b8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(local_ac,uVar5,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_b8,&DAT_0057f730);
    }
    if (DAT_006fb940 != 0) {
      *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xa5) = 1;
    }
    *(undefined1 *)(DAT_0073b0d0 + *(int *)((int)this + 0x44) * 0xa9 + 0x90) = 1;
  }
  iVar2 = *(int *)((int)this + 0x44);
  if (*(int *)(DAT_0073b0d0 + iVar2 + 4 + iVar2 * 0xa8) != param_2) {
    *(int *)(DAT_0073b0d0 + iVar2 + 4 + iVar2 * 0xa8) = param_2;
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0047d1f0 FUN_0047d1f0 ==== */

void __thiscall FUN_0047d1f0(void *this,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  void **ppvVar3;
  int i;
  int j;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint k;
  int iVar6;
  char *pcVar7;
  int m;
  undefined1 local_121;
  void *this_val;
  int local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined **local_e8 [3];
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
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
  puStack_8 = &LAB_0056bcb7;
  local_c = ExceptionList;
  i = *(int *)((int)this + 0x44);
  ppvVar3 = &local_c;
  this_val = this;
  if (i != -1) {
    j = DAT_0073b0d0 + i + i * 0xa8;
    i = *(int *)(DAT_0073b0d0 + i + i * 0xa8);
    if (i == 1) {
      uVar5 = *param_2;
      piVar1 = (int *)(DAT_0073b5c8 + *(int *)(j + 0x99) * 0xac);
      ppvVar3 = &local_c;
      if ((*piVar1 == 2) && (i = 0, ppvVar3 = &local_c, 0 < piVar1[0x21])) {
        j = 0;
        ExceptionList = &local_c;
        do {
          i = i + 1;
          *(undefined4 *)(piVar1[0x20] + 0x10 + j) = uVar5;
          j = j + 0x20;
          ppvVar3 = ExceptionList;
        } while (i < piVar1[0x21]);
      }
    }
    else {
      if (i != 2) {
        ExceptionList = &local_c;
        i = FUN_004873b0(local_2c,i);
        local_108[0] = local_121;
        local_4 = 0;
        FUN_004028f0(local_108,0);
        k = 0xffffffff;
        pcVar7 = s___005a9cec;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(local_108,s___005a9cec,~k - 1);
        local_4._0_1_ = 1;
        j = FUN_004873b0(local_1c,0x141);
        local_4._0_1_ = 2;
        local_118[0] = local_121;
        FUN_004028f0(local_118,0);
        k = 0xffffffff;
        pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9cf4;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(local_118,s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9cf4,~k - 1);
        local_f8[0] = local_121;
        local_4._0_1_ = 3;
        FUN_004028f0(local_f8,0);
        k = 0xffffffff;
        pcVar7 = s_HeadUp_Display_exception_in__005a9d1c;
        do {
          if (k == 0) break;
          k = k - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(local_f8,s_HeadUp_Display_exception_in__005a9d1c,~k - 1);
        local_4._0_1_ = 4;
        puVar4 = (undefined1 *)FUN_0047c9a0(local_ac,local_f8,(int)local_118);
        local_4._0_1_ = 5;
        puVar4 = (undefined1 *)FUN_004796b0(local_cc,puVar4,s__005a9cf0);
        local_4._0_1_ = 6;
        puVar4 = (undefined1 *)FUN_0047c9a0(local_8c,puVar4,j);
        local_4._0_1_ = 7;
        puVar4 = (undefined1 *)FUN_0047c9a0(local_4c,puVar4,(int)local_108);
        local_4._0_1_ = 8;
        puVar4 = (undefined1 *)FUN_004796b0(local_6c,puVar4,s_Unreachable_code_reached__005a9cd0);
        local_4._0_1_ = 9;
        j = FUN_0047bc10(this_val);
        puVar4 = (undefined1 *)FUN_0047c9a0(local_bc,puVar4,j);
        local_4._0_1_ = 10;
        puVar4 = (undefined1 *)FUN_004796b0(local_9c,puVar4,s___Unknown_object_type___005a9cb8);
        local_4._0_1_ = 0xb;
        puVar4 = (undefined1 *)FUN_0047c9a0(local_7c,puVar4,i);
        local_4._0_1_ = 0xc;
        puVar4 = (undefined1 *)FUN_004796b0(local_5c,puVar4,s___005a9cb4);
        local_4._0_1_ = 0xd;
        uVar5 = FUN_004796b0(local_3c,puVar4,s___005a9cb0);
        local_4._0_1_ = 0xe;
        FUN_00558826(local_e8);
        local_4._0_1_ = 0xf;
        FUN_00424980(local_dc,&local_121);
        local_4._0_1_ = 0x10;
        local_e8[0] = &PTR_FUN_00576b14;
        FUN_004093c0(local_dc,uVar5,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_e8,&DAT_0057f730);
      }
      m = 0;
      i = *(int *)(j + 4) * 9;
      local_11c = *(int *)(i + DAT_0073b168);
      ExceptionList = &local_c;
      ppvVar3 = &local_c;
      if (0 < local_11c) {
        do {
          uVar5 = *param_2;
          piVar1 = (int *)(DAT_0073b5c8 +
                          *(int *)(*(int *)(*(int *)(i + 4 + DAT_0073b168) + m * 4) * 0x10 +
                                  DAT_0073b120) * 0xac);
          if ((*piVar1 == 2) && (j = 0, 0 < piVar1[0x21])) {
            iVar6 = 0;
            do {
              j = j + 1;
              *(undefined4 *)(iVar6 + 0x10 + piVar1[0x20]) = uVar5;
              iVar6 = iVar6 + 0x20;
            } while (j < piVar1[0x21]);
          }
          m = m + 1;
          ppvVar3 = ExceptionList;
        } while (m < local_11c);
      }
    }
  }
  ExceptionList = ppvVar3;
  FUN_0047bdc0(param_2);
  ExceptionList = local_c;
  return;
}


