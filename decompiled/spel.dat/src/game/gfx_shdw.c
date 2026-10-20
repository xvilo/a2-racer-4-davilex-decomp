/* spel.dat — game/gfx_shdw.cpp: 4 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00443070 FUN_00443070 ==== */

void FUN_00443070(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int i;
  int j;
  float local_c [3];
  
  pfVar4 = local_c;
  i = 3;
  do {
    *pfVar4 = 0.0;
    fVar1 = *pfVar4;
    pfVar6 = (float *)((param_3 - (int)local_c) + (int)pfVar4);
    j = 3;
    pfVar5 = param_2;
    do {
      fVar2 = *pfVar5;
      fVar3 = *pfVar6;
      pfVar6 = pfVar6 + 4;
      pfVar5 = pfVar5 + 1;
      j = j + -1;
      fVar1 = fVar2 * fVar3 + fVar1;
    } while (j != 0);
    *pfVar4 = fVar1;
    pfVar4 = pfVar4 + 1;
    i = i + -1;
  } while (i != 0);
  pfVar6 = (float *)(param_3 + 0x30);
  i = 3;
  pfVar4 = local_c;
  do {
    fVar1 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    i = i + -1;
    *pfVar4 = *pfVar4 + fVar1;
    pfVar4 = pfVar4 + 1;
  } while (i != 0);
  *param_1 = local_c[0];
  param_1[1] = local_c[1];
  param_1[2] = local_c[2];
  return;
}


/* ==== 00443100 FUN_00443100 ==== */

undefined4 FUN_00443100(int param_1,int param_2,void *this_val,undefined4 *param_4,char param_5)

{
  char cVar1;
  int *piVar2;
  int i;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int j;
  undefined1 local_a8 [20];
  int local_94;
  undefined1 local_90 [20];
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  float local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a40e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004af760(&local_7c);
  local_4 = 0;
  FUN_0047ac50(local_a8);
  local_4._0_1_ = 1;
  FUN_0047ac50(local_90);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (param_1 == 2) {
    if (param_5 == '\0') {
      i = 0;
      piVar2 = &DAT_006ce0f8;
      do {
        if (*piVar2 == -1) {
          (&DAT_006ce0f8)[i] = param_2;
          break;
        }
        if (*piVar2 == param_2) {
          local_4._0_1_ = 1;
          FUN_0047ac70(local_90);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0047ac70(local_a8);
          local_4 = 0xffffffff;
          FUN_0051ed40();
          ExceptionList = local_c;
          return 0;
        }
        piVar2 = piVar2 + 1;
        i = i + 1;
      } while ((int)piVar2 < 0x6ce120);
      if (param_2 < DAT_006ce134) {
        DAT_006ce134 = param_2;
      }
      else if (DAT_006ce0f0 < param_2) {
        DAT_006ce0f0 = param_2;
      }
    }
    else {
      DAT_006ce0f8 = param_2;
      DAT_006ce134 = param_2;
      DAT_006ce0f0 = param_2;
      puVar6 = &DAT_006ce0fc;
      for (i = 9; i != 0; i = i + -1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
    }
  }
  else if (param_1 == 0) {
    param_2 = FUN_004a71e0(DAT_006ce0f0 + 1);
  }
  else if (param_1 == 1) {
    param_2 = FUN_004a71e0(DAT_006ce134 + -1);
  }
  FUN_0047ac90(local_a8,0x14);
  FUN_0047ac90(local_90,0x14);
  iVar5 = param_2 * 0x994;
  i = FUN_004ad770(0);
  iVar3 = FUN_004ad770(1);
  local_94 = FUN_004ad770(2);
  j = 0;
  if (0 < i) {
    do {
      cVar1 = FUN_004ad7e0((void *)(DAT_00715f00 + iVar5),j,0,&local_7c);
      if ((cVar1 != '\0') && (-0.2 < local_18)) {
        FUN_0047b050(local_a8);
        FUN_0047b050(local_90);
        FUN_0047b060(local_a8,local_7c,local_78 + 0.4,local_74);
        FUN_0047b060(local_a8,local_5c,local_58 + 0.4,local_54);
        FUN_0047b060(local_a8,local_3c,local_38 + 0.4,local_34);
        iVar4 = FUN_0047b790(this_val,(int)local_a8,local_90);
        if (iVar4 < 0) {
          FUN_004c3fa0(s_DrawShadowPolygon_ClipVolume1_er_0059d37c,iVar4);
        }
        FUN_0047b110(local_90,*param_4);
      }
      j = j + 1;
    } while (j < i);
  }
  i = 0;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_004ad7e0((void *)(DAT_00715f00 + iVar5),i,1,&local_7c);
      if ((cVar1 != '\0') && (-0.2 < local_18)) {
        FUN_0047b050(local_a8);
        FUN_0047b050(local_90);
        FUN_0047b060(local_a8,local_7c,local_78 + 0.4,local_74);
        FUN_0047b060(local_a8,local_5c,local_58 + 0.4,local_54);
        FUN_0047b060(local_a8,local_3c,local_38 + 0.4,local_34);
        j = FUN_0047b790(this_val,(int)local_a8,local_90);
        if (j < 0) {
          FUN_004c3fa0(s_DrawShadowPolygon_ClipVolume2_er_0059d3a8,j);
        }
        FUN_0047b110(local_90,*param_4);
      }
      i = i + 1;
    } while (i < iVar3);
  }
  i = 0;
  if (0 < local_94) {
    do {
      cVar1 = FUN_004ad7e0((void *)(DAT_00715f00 + iVar5),i,2,&local_7c);
      if ((cVar1 != '\0') && (-0.2 < local_18)) {
        FUN_0047b050(local_a8);
        FUN_0047b050(local_90);
        FUN_0047b060(local_a8,local_7c,local_78 + 0.4,local_74);
        FUN_0047b060(local_a8,local_5c,local_58 + 0.4,local_54);
        FUN_0047b060(local_a8,local_3c,local_38 + 0.4,local_34);
        iVar3 = FUN_0047b790(this_val,(int)local_a8,local_90);
        if (iVar3 < 0) {
          FUN_004c3fa0(s_DrawShadowPolygon_ClipVolume3_er_0059d3d4,iVar3);
        }
        FUN_0047b110(local_90,*param_4);
      }
      i = i + 1;
    } while (i < local_94);
  }
  local_4._0_1_ = 1;
  FUN_0047ac70(local_90);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0047ac70(local_a8);
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return 1;
}


/* ==== 00443770 FUN_00443770 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443770(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int i;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int j;
  undefined4 unaff_EBX;
  undefined4 *puVar6;
  float10 fVar7;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  int local_10c;
  undefined4 local_108;
  float local_104;
  undefined4 local_100;
  undefined1 auStack_fc [4];
  int local_f8;
  int local_f4;
  undefined1 local_f0 [8];
  undefined1 auStack_e8 [8];
  int local_e0;
  undefined1 local_dc [20];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined4 local_8c [16];
  undefined4 local_4c [7];
  void *pvStack_30;
  uint uStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a42e;
  pvStack_c = ExceptionList;
  param_1 = param_1 * 0xf0;
  ExceptionList = &pvStack_c;
  i = FUN_004a8c50(DAT_00715e50 + param_1);
  if ((DAT_006ce120 & 1) == 0) {
    local_120 = 0;
    DAT_006ce120 = DAT_006ce120 | 1;
    local_11c = 100000.0;
    local_118 = 0;
    _DAT_006ce128 = 0;
    _DAT_006ce12c = 0x47c35000;
    _DAT_006ce130 = 0;
    FUN_005584e0(&DAT_00443ee0);
  }
  FUN_0047b350(local_f0);
  local_4 = 0;
  FUN_0047ac50(local_dc);
  local_4 = CONCAT31(local_4._1_3_,1);
  i = DAT_0073b5c8 + i * 0xac;
  local_bc = *(undefined4 *)(i + 0x10);
  local_b8 = *(undefined4 *)(i + 0x14);
  local_b4 = *(undefined4 *)(i + 0x18);
  local_c8 = *(undefined4 *)(i + 0x1c);
  local_c4 = *(undefined4 *)(i + 0x20);
  local_c0 = *(undefined4 *)(i + 0x24);
  local_b0 = *(undefined4 *)(i + 0x4c);
  local_ac = *(undefined4 *)(i + 0x50);
  local_a8 = *(undefined4 *)(i + 0x54);
  local_a4 = *(undefined4 *)(i + 0x40);
  local_a0 = *(undefined4 *)(i + 0x44);
  local_9c = *(undefined4 *)(i + 0x48);
  puVar3 = (undefined4 *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + param_1) * 0xa9 + 0x10);
  puVar6 = local_8c;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = (undefined4 *)FUN_00443070(&local_12c,&local_bc,local_8c);
  uVar5 = *puVar3;
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  local_120 = uVar5;
  local_118 = uVar2;
  puVar3 = (undefined4 *)FUN_00443070(&local_12c,&local_c8,local_8c);
  local_108 = *puVar3;
  local_104 = (float)puVar3[1];
  local_100 = puVar3[2];
  puVar3 = (undefined4 *)FUN_00443070(&local_12c,&local_b0,local_8c);
  local_114 = *puVar3;
  local_110 = (float)puVar3[1];
  local_10c = puVar3[2];
  puVar3 = (undefined4 *)FUN_00443070(local_98,&local_a4,local_8c);
  local_12c = *puVar3;
  local_128 = (float)puVar3[1];
  local_124 = puVar3[2];
  i = FUN_004af230(&DAT_00715250,*(undefined4 *)(DAT_00715e50 + 0x34 + param_1),uVar5,uVar1,uVar2);
  FUN_004ad3d0(i * 0x994 + DAT_00715f00,local_120,uVar1,local_118,&local_f8,&local_134,&local_130);
  fVar7 = (float10)FUN_004ad640(local_120,uVar1,local_118,local_134,local_130);
  uVar5 = local_108;
  local_11c = (float)fVar7;
  local_e0 = FUN_004af230(&DAT_00715250,*(undefined4 *)(DAT_00715e50 + 0x34 + param_1),local_108,
                          local_104,local_100);
  FUN_004ad3d0(local_e0 * 0x994 + DAT_00715f00,uVar5,local_104,local_100,&local_f8,&local_134,
               &local_130);
  fVar7 = (float10)FUN_004ad640(uVar5,local_104,local_100,local_134,local_130);
  uVar5 = local_114;
  local_104 = (float)fVar7;
  local_f4 = FUN_004af230(&DAT_00715250,*(undefined4 *)(DAT_00715e50 + 0x34 + param_1),local_114,
                          local_110,local_10c);
  FUN_004ad3d0(local_f4 * 0x994 + DAT_00715f00,uVar5,local_110,local_10c,&local_f8,&local_134,
               &local_130);
  fVar7 = (float10)FUN_004ad640(uVar5,local_110,local_10c,local_134,local_130);
  uVar5 = local_12c;
  local_110 = (float)fVar7;
  iVar4 = FUN_004af230(&DAT_00715250,*(undefined4 *)(DAT_00715e50 + 0x34 + param_1),local_12c,
                       local_128,local_124);
  FUN_004ad3d0(iVar4 * 0x994 + DAT_00715f00,uVar5,local_128,local_124,&local_f8,&local_134,
               &local_130);
  fVar7 = (float10)FUN_004ad640(uVar5,local_128,local_124,local_134,local_130);
  puVar3 = &DAT_0073b538;
  puVar6 = local_4c;
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = local_4c;
  puVar6 = &DAT_0073b474;
  for (j = 0x10; j != 0; j = j + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  local_128 = (float)fVar7;
  j = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (j != 0) {
    uVar5 = FUN_004bb290(j);
    FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                 s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar5);
  }
  FUN_0047ac90(auStack_e8,8);
  local_128 = local_128 + 8.0;
  local_110 = local_110 + 8.0;
  local_11c = local_11c + 8.0;
  local_134 = local_134 + 8.0;
  FUN_0047b060(auStack_e8,local_12c,local_128,local_124);
  FUN_0047b060(auStack_e8,local_114,local_110,local_10c);
  FUN_0047b060(auStack_e8,local_120,local_11c,local_118);
  FUN_0047b060(auStack_e8,unaff_EBX,local_134,local_130);
  FUN_0047b390(auStack_fc,6);
  j = FUN_0047b440(auStack_fc,&DAT_006ce128,(int)auStack_e8);
  if (j < 0) {
    FUN_004c3fa0(s_draw_object_shadow_beam_CreateVo_0059d400,j);
  }
  if (DAT_006fb940 != 0) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,DAT_005afa58);
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,DAT_005afa5c);
  }
  j = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x2f,1);
  if (j != 0) {
    uVar5 = FUN_004bb290(j);
    FUN_004c4150(s__s__d_____ZBUFFER__error_setting_0059d454,
                 s_C__Work_A2IV_Game_prog_gfx_shdw__0059d430,0x1e2,uVar5);
  }
  local_114 = 0x80000000;
  FUN_00443100(2,i,&local_108,&local_114,'\x01');
  FUN_00443100(2,local_f8,&local_108,&local_114,'\0');
  FUN_00443100(2,local_10c,&local_108,&local_114,'\0');
  FUN_00443100(2,iVar4,&local_108,&local_114,'\0');
  i = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x2f,0);
  if (i != 0) {
    uVar5 = FUN_004bb290(i);
    FUN_004c4150(s__s__d_____ZBUFFER__error_setting_0059d4b0,
                 s_C__Work_A2IV_Game_prog_gfx_shdw__0059d48c,0x1fc,uVar5);
  }
  if (DAT_006fb940 != 0) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
  }
  uStack_28 = uStack_28 & 0xffffff00;
  FUN_0047ac70(&local_100);
  uStack_28 = 0xffffffff;
  FUN_0047b370(&local_114);
  ExceptionList = pvStack_30;
  return;
}


/* ==== 00443ef0 FUN_00443ef0 ==== */

void FUN_00443ef0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int i;
  int j;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  uint local_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c [16];
  undefined1 local_6c [20];
  undefined1 auStack_58 [12];
  undefined4 local_4c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a448;
  pvStack_c = ExceptionList;
  iVar7 = param_1 * 0xf0;
  ExceptionList = &pvStack_c;
  i = FUN_004a8c50(iVar7 + DAT_00715e50);
  FUN_0047b350(local_7c);
  local_4 = 0;
  FUN_0047ac50(local_6c);
  local_4 = CONCAT31(local_4._1_3_,1);
  j = FUN_004a7200(*(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50),
                   *(undefined4 *)(iVar7 + 0x34 + DAT_00715e50));
  if (j < 6) {
    local_b0 = *(int *)(iVar7 + 0x40 + DAT_00715e50) * 0xa9;
    j = *(int *)(*(int *)(*(int *)(*(int *)(local_b0 + 4 + DAT_0073b0d0) * 9 + 4 + DAT_0073b168) +
                         *(int *)(local_b0 + 8 + DAT_0073b0d0) * 4) * 0x10 + DAT_0073b120);
    iVar8 = j * 0xac;
    if (*(int *)(DAT_0073b5c8 + 0x84 + iVar8) != 4) {
      FUN_004c4150(s__s__d____Object___d__has_a_shado_0059d50c,
                   s_C__Work_A2IV_Game_prog_gfx_shdw__0059d4e8,0x228,param_1,j);
    }
    local_b4 = *(uint *)(iVar7 + 0x4c + DAT_00715e50);
    uVar6 = ((local_b4 >> 0x10 & 0xff) + (local_b4 >> 8 & 0xff) + (local_b4 & 0xff)) / 3;
    uVar6 = ((uVar6 << 8 | uVar6) << 8 | uVar6) << 8 | uVar6;
    *(uint *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x10) = uVar6;
    *(uint *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x30) = uVar6;
    *(uint *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x50) = uVar6;
    *(uint *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x70) = uVar6;
    i = DAT_0073b5c8 + i * 0xac;
    uStack_94 = *(undefined4 *)(i + 0x4c);
    uStack_90 = *(undefined4 *)(i + 0x50);
    uStack_8c = *(undefined4 *)(i + 0x54);
    uStack_88 = *(undefined4 *)(i + 0x40);
    uStack_84 = *(undefined4 *)(i + 0x44);
    uStack_80 = *(undefined4 *)(i + 0x48);
    uStack_ac = *(undefined4 *)(i + 0x10);
    uStack_a8 = *(undefined4 *)(i + 0x14);
    uStack_a4 = *(undefined4 *)(i + 0x18);
    uStack_a0 = *(undefined4 *)(i + 0x1c);
    uStack_9c = *(undefined4 *)(i + 0x20);
    uStack_98 = *(undefined4 *)(i + 0x24);
    puVar4 = (undefined4 *)(DAT_0073b0d0 + *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    puVar9 = local_4c;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar4 = (undefined4 *)FUN_00443070(&uStack_cc,&uStack_94,local_4c);
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    uStack_b8 = puVar4[2];
    uStack_c0 = uVar5;
    puVar4 = (undefined4 *)FUN_00443070(&uStack_cc,&uStack_88,local_4c);
    uStack_d8 = *puVar4;
    fStack_d4 = (float)puVar4[1];
    uStack_d0 = puVar4[2];
    puVar4 = (undefined4 *)FUN_00443070(&uStack_cc,&uStack_ac,local_4c);
    uStack_e4 = *puVar4;
    fStack_e0 = (float)puVar4[1];
    uStack_dc = puVar4[2];
    puVar4 = (undefined4 *)FUN_00443070(auStack_58,&uStack_a0,local_4c);
    uStack_cc = *puVar4;
    uStack_c8 = puVar4[1];
    uStack_c4 = puVar4[2];
    uStack_f4 = FUN_004af230(&DAT_00715250,*(undefined4 *)(iVar7 + 0x34 + DAT_00715e50),uVar5,uVar1,
                             uStack_b8);
    FUN_004adaf0(&uStack_f4,2,uVar5,uVar1,uStack_b8,auStack_e8,&uStack_ec,&uStack_f0);
    fVar10 = (float10)FUN_004ad640(uVar5,uVar1,uStack_b8,uStack_ec,uStack_f0);
    fVar2 = fStack_d4;
    uVar5 = uStack_d8;
    fStack_bc = (float)(fVar10 + (float10)1.0);
    uStack_f4 = FUN_004af230(&DAT_00715250,*(undefined4 *)(iVar7 + 0x34 + DAT_00715e50),uStack_d8,
                             fStack_d4,uStack_d0);
    FUN_004adaf0(&uStack_f4,2,uVar5,fVar2,uStack_d0,auStack_e8,&uStack_ec,&uStack_f0);
    fVar10 = (float10)FUN_004ad640(uVar5,fVar2,uStack_d0,uStack_ec,uStack_f0);
    fVar2 = fStack_e0;
    uVar5 = uStack_e4;
    fStack_d4 = (float)(fVar10 + (float10)1.0);
    uStack_f4 = FUN_004af230(&DAT_00715250,*(undefined4 *)(iVar7 + 0x34 + DAT_00715e50),uStack_e4,
                             fStack_e0,uStack_dc);
    FUN_004adaf0(&uStack_f4,2,uVar5,fVar2,uStack_dc,auStack_e8,&uStack_ec,&uStack_f0);
    fVar10 = (float10)FUN_004ad640(uVar5,fVar2,uStack_dc,uStack_ec,uStack_f0);
    uVar1 = uStack_c8;
    uVar5 = uStack_cc;
    fStack_e0 = (float)(fVar10 + (float10)1.0);
    uStack_f4 = FUN_004af230(&DAT_00715250,*(undefined4 *)(iVar7 + 0x34 + DAT_00715e50),uStack_cc,
                             uStack_c8,uStack_c4);
    uVar3 = uStack_c4;
    FUN_004adaf0(&uStack_f4,2,uVar5,uVar1,uStack_c4,auStack_e8,&uStack_ec,&uStack_f0);
    fVar10 = (float10)FUN_004ad640(uVar5,uVar1,uVar3,uStack_ec,uStack_f0);
    i = local_b0;
    **(undefined4 **)(DAT_0073b5c8 + 0x80 + iVar8) = uStack_c0;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 4) = fStack_bc;
    *(undefined4 *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 8) = uStack_b8;
    *(undefined4 *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x20) = uStack_d8;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x24) = fStack_d4;
    *(undefined4 *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x28) = uStack_d0;
    *(undefined4 *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x40) = uStack_e4;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x44) = fStack_e0;
    *(undefined4 *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x48) = uStack_dc;
    *(undefined4 *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x60) = uVar5;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 100) = (float)(fVar10 + (float10)1.0);
    *(undefined4 *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar8) + 0x68) = uVar3;
    puVar4 = &DAT_0073b538;
    puVar9 = (undefined4 *)(local_b0 + 0x10 + DAT_0073b0d0);
    for (j = 0x10; j != 0; j = j + -1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
      *(undefined4 *)(local_b0 + 0xa5 + DAT_0073b0d0) = 0;
    }
    else {
      *(undefined4 *)(local_b0 + 0xa5 + DAT_0073b0d0) = 1;
    }
    if (DAT_006fb940 != 0) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))
                (DAT_0073b4b4,0x13,
                 *(undefined4 *)(&DAT_005afa50 + *(int *)(local_b0 + 0xa5 + DAT_0073b0d0) * 8));
      (**(code **)(*DAT_0073b4b4 + 0x5c))
                (DAT_0073b4b4,0x14,
                 *(undefined4 *)(&DAT_005afa54 + *(int *)(i + 0xa5 + DAT_0073b0d0) * 8));
    }
    j = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x2f,1);
    if (j != 0) {
      uVar5 = FUN_004bb290(j);
      FUN_004c4150(s__s__d_____ZBUFFER__error_setting_0059d570,
                   s_C__Work_A2IV_Game_prog_gfx_shdw__0059d54c,0x275,uVar5);
    }
    FUN_004b5b10(i + DAT_0073b0d0);
    i = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x2f,0);
    if (i != 0) {
      uVar5 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____ZBUFFER__error_setting_0059d5cc,
                   s_C__Work_A2IV_Game_prog_gfx_shdw__0059d5a8,0x27c,uVar5);
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0047ac70(local_6c);
  local_4 = 0xffffffff;
  FUN_0047b370(local_7c);
  ExceptionList = pvStack_c;
  return;
}


