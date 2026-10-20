/* spel.dat — game/gfx_skid.cpp: 23 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004446a0 FUN_004446a0 ==== */

void FUN_004446a0(void)

{
  FUN_004a6b80(&LAB_00443710);
  return;
}


/* ==== 004446f0 FUN_004446f0 ==== */

void FUN_004446f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00444700 FUN_00444700 ==== */

void FUN_00444700(void)

{
  FUN_005584e0(&LAB_00444710);
  return;
}


/* ==== 00444730 FUN_00444730 ==== */

void FUN_00444730(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00444740 FUN_00444740 ==== */

void FUN_00444740(void)

{
  FUN_005584e0(&LAB_00444750);
  return;
}


/* ==== 004447a0 FUN_004447a0 ==== */

int FUN_004447a0(int param_1)

{
  if ((param_1 < 0) || (0x13 < param_1)) {
    FUN_004c4150(s__s___d__skidmark_index_incorrect_0059d62c,
                 s_C__Work_A2IV_Game_prog_gfx_skid__0059d608,0x2c,param_1);
  }
  return param_1;
}


/* ==== 004447d0 FUN_004447d0 ==== */

int FUN_004447d0(int param_1)

{
  if ((param_1 < 0) || (99 < param_1)) {
    FUN_004c4150(s__s___d__skidmark_vertex_index_in_0059d680,
                 s_C__Work_A2IV_Game_prog_gfx_skid__0059d65c,0x36,param_1);
  }
  return param_1;
}


/* ==== 00444800 FUN_00444800 ==== */

int FUN_00444800(void)

{
  int iVar1;
  int i;
  
  i = 0;
  do {
    iVar1 = FUN_004447a0(i);
    if (*(int *)(&DAT_006cfa44 + iVar1 * 0x1910) == 0) {
      return i;
    }
    i = i + 1;
  } while (i < 0x14);
  return -1;
}


/* ==== 00444840 FUN_00444840 ==== */

void FUN_00444840(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  float local_4;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  param_1 = param_1 * 0xf0;
  if (*(int *)(param_1 + 0x10 + DAT_00715e50) == 0) {
    return;
  }
  if (param_4 == 2) {
    pfVar4 = (float *)FUN_004a2ee0(local_c,2);
    local_30 = *pfVar4;
    local_2c = pfVar4[1];
    local_28 = pfVar4[2];
  }
  else {
    if (param_4 != 3) goto LAB_004448e9;
    pfVar4 = (float *)FUN_004a2ee0(local_c,3);
    local_30 = *pfVar4;
    local_2c = pfVar4[1];
    local_28 = pfVar4[2];
  }
  fVar5 = (float10)FUN_004a2eb0(2);
  local_2c = (float)((float10)local_2c - (fVar5 + (float10)1.0));
LAB_004448e9:
  fVar1 = *(float *)(param_1 + 0xc4 + DAT_00715e50);
  fVar2 = *(float *)(param_1 + 0xc0 + DAT_00715e50);
  fVar3 = *(float *)(param_1 + 0xbc + DAT_00715e50);
  local_20 = 0;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  local_24 = *(float *)(param_1 + 0xbc + DAT_00715e50) / fVar1;
  local_4 = -local_24;
  local_1c = local_4 * param_5;
  local_30 = (*(float *)(param_1 + 0xc4 + DAT_00715e50) / fVar1) * param_5 + local_30;
  local_2c = local_2c + 0.0;
  local_28 = local_28 + local_1c;
  FUN_004bc620(&local_18,&local_30,param_3);
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  return;
}


/* ==== 004449b0 FUN_004449b0 ==== */

void FUN_004449b0(int param_1,int param_2,int param_3)

{
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_40 [16];
  
  puVar1 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar2 = local_40;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00444840(param_1,param_2,local_40,2,0x40000000);
  FUN_00444840(param_1,param_2 + 0x20,local_40,2,0xc0000000);
  FUN_00444840(param_1,param_3,local_40,3,0x40000000);
  FUN_00444840(param_1,param_3 + 0x20,local_40,3,0xc0000000);
  return;
}


/* ==== 00444a60 FUN_00444a60 ==== */

void FUN_00444a60(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1 = param_1 + -4;
  if (param_1 < 0) {
    param_1 = 0;
  }
  iVar1 = param_1 * -0x10 + 200;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  uVar2 = iVar1 << 0x18 | 0x404040;
  *(uint *)(param_2 + 0x10) = uVar2;
  *(uint *)(param_3 + 0x30) = uVar2;
  *(uint *)(param_3 + 0x10) = uVar2;
  *(uint *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}


/* ==== 00444ac0 FUN_00444ac0 ==== */

void FUN_00444ac0(uint param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  
  param_1 = param_1 & 0x80000001;
  bVar3 = param_1 == 0;
  if ((int)param_1 < 0) {
    bVar3 = (param_1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  *(undefined4 *)(param_2 + 0x18) = 0x3ee80000;
  puVar1 = (undefined4 *)(param_2 + 0x1c);
  if (bVar3) {
    *puVar1 = 0x3e200000;
    *(undefined4 *)(param_2 + 0x38) = 0x3f0a0008;
    uVar2 = 0x3e200000;
  }
  else {
    *puVar1 = 0x3e000000;
    *(undefined4 *)(param_2 + 0x38) = 0x3f0a0008;
    uVar2 = 0x3e000000;
  }
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x1c) = *puVar1;
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  return;
}


/* ==== 00444b40 FUN_00444b40 ==== */

void FUN_00444b40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int i;
  int j;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_004447a0(param_1);
  iVar1 = *(int *)(&DAT_006ce140 + iVar1 * 0x1910);
  iVar2 = FUN_004447a0(param_1);
  i = FUN_004447d0(iVar1);
  puVar3 = param_2;
  puVar4 = (undefined4 *)(&DAT_006ce144 + i * 0x20 + iVar2 * 0x1910);
  for (j = 8; j != 0; j = j + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_004447d0(iVar1 + 1);
  i = FUN_004447a0(param_1);
  puVar3 = param_2 + 8;
  puVar4 = (undefined4 *)(&DAT_006ce144 + i * 0x1910 + iVar2 * 0x20);
  for (j = 8; j != 0; j = j + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = FUN_004447a0(param_1);
  i = FUN_004447d0(iVar1);
  puVar3 = param_3;
  puVar4 = (undefined4 *)(&DAT_006cedc4 + i * 0x20 + iVar2 * 0x1910);
  for (j = 8; j != 0; j = j + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_004447d0(iVar1 + 1);
  iVar2 = FUN_004447a0(param_1);
  puVar3 = param_3 + 8;
  puVar4 = (undefined4 *)(&DAT_006cedc4 + iVar2 * 0x1910 + iVar1 * 0x20);
  for (i = 8; i != 0; i = i + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}


/* ==== 00444c40 FUN_00444c40 ==== */

void FUN_00444c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 __ftol_result;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  FUN_004449b0(param_2,local_40,local_80);
  FUN_00444a60(param_3,local_40,local_80);
  FUN_00444ac0(0,local_40,local_80);
  FUN_00444b40(param_1,local_40,local_80);
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006ce140 + iVar1 * 0x1910) = 2;
  FUN_004a6800(&DAT_007128b0);
  __ftol_result = __ftol();
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006cfa48 + iVar1 * 0x1910) = __ftol_result;
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006cfa44 + iVar1 * 0x1910) = 1;
  return;
}


/* ==== 00444d20 FUN_00444d20 ==== */

void FUN_00444d20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  iVar1 = FUN_004447a0(param_1);
  if (*(int *)(&DAT_006ce140 + iVar1 * 0x1910) + 2 < 100) {
    FUN_004449b0(param_2,local_40,local_80);
    FUN_00444a60(param_3,local_40,local_80);
    FUN_00444ac0(0,local_40,local_80);
    FUN_00444b40(param_1,local_40,local_80);
    iVar1 = FUN_004447a0(param_1);
    *(int *)(&DAT_006ce140 + iVar1 * 0x1910) = *(int *)(&DAT_006ce140 + iVar1 * 0x1910) + 2;
  }
  return;
}


/* ==== 00444de0 FUN_00444de0 ==== */

void FUN_00444de0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (DAT_006fb90c != 0) {
    if (3 < param_2) {
      if (DAT_006ed684 < 4) {
        iVar1 = FUN_00444800();
        if (iVar1 == -1) {
          DAT_006ed684 = 3;
          return;
        }
        FUN_00444c40(iVar1,param_1,param_2);
        DAT_006ed684 = param_2;
        DAT_0059d604 = iVar1;
        return;
      }
      if (DAT_0059d604 == -1) {
        FUN_004c4150(s__s___d__No_current_skidmark__0059d6dc,
                     s_C__Work_A2IV_Game_prog_gfx_skid__0059d6b8,0x1ad);
      }
      iVar1 = FUN_004447a0(DAT_0059d604);
      if (*(int *)(&DAT_006cfa44 + iVar1 * 0x1910) == 0) {
        DAT_0059d604 = 0xffffffff;
        DAT_006ed684 = 3;
        return;
      }
      FUN_00444d20(DAT_0059d604,param_1,param_2);
    }
    DAT_006ed684 = param_2;
  }
  return;
}


/* ==== 00444ec0 FUN_00444ec0 ==== */

void FUN_00444ec0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006ce140 + iVar1 * 0x1910) = 0;
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006cfa44 + iVar1 * 0x1910) = 0;
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006cfa4c + iVar1 * 0x1910) = 0;
  return;
}


/* ==== 00444f30 FUN_00444f30 ==== */

void FUN_00444f30(void)

{
  int i;
  
  i = 0;
  do {
    FUN_00444ec0(i);
    i = i + 1;
  } while (i < 0x14);
  return;
}


/* ==== 00444f50 init_skidmarks ==== */

void init_skidmarks(void)

{
  FUN_00444f30();
  DAT_006ed680 = FUN_004b7400(&DAT_00712130,s_S_SFX_PCX_0059d6fc);
  return;
}


/* ==== 00444f70 FUN_00444f70 ==== */

void FUN_00444f70(void)

{
  return;
}


/* ==== 00444f80 FUN_00444f80 ==== */

void FUN_00444f80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int i;
  
  if (DAT_006fb910 != 0) {
    iVar1 = FUN_004447a0(param_1);
    iVar1 = *(int *)(&DAT_006ce140 + iVar1 * 0x1910);
    iVar2 = FUN_004447a0(param_1);
    iVar3 = FUN_004447a0(param_1);
    iVar4 = FUN_004447a0(param_1);
    iVar4 = *(int *)(&DAT_006cfa48 + iVar4 * 0x1910);
    iVar3 = *(int *)(&DAT_006cfa4c + iVar3 * 0x1910);
    if ((0 < iVar4 - iVar3) && (i = 0, 0 < iVar1)) {
      puVar7 = (uint *)(&DAT_006ce154 + iVar2 * 0x1910);
      do {
        uVar8 = *puVar7 >> 0x18;
        uVar5 = (0xff - uVar8) / (uint)(iVar4 - iVar3);
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        uVar5 = uVar5 + uVar8;
        if (0xff < uVar5) {
          uVar5 = 0xff;
        }
        uVar5 = *puVar7 & 0xffffff | uVar5 << 0x18;
        iVar2 = FUN_004447a0(param_1);
        iVar6 = FUN_004447d0(i);
        *(uint *)(&DAT_006ce154 + iVar2 * 0x1910 + iVar6 * 0x20) = uVar5;
        iVar2 = FUN_004447a0(param_1);
        iVar6 = FUN_004447d0(i);
        i = i + 1;
        *(uint *)(&DAT_006cedd4 + iVar2 * 0x1910 + iVar6 * 0x20) = uVar5;
        puVar7 = puVar7 + 8;
      } while (i < iVar1);
    }
  }
  return;
}


/* ==== 004450e0 FUN_004450e0 ==== */

void FUN_004450e0(void)

{
  int iVar1;
  int iVar2;
  int i;
  
  i = 0;
  do {
    iVar1 = FUN_004447a0(i);
    if (*(int *)(&DAT_006cfa44 + iVar1 * 0x1910) != 0) {
      iVar1 = FUN_004447a0(i);
      *(int *)(&DAT_006cfa4c + iVar1 * 0x1910) = *(int *)(&DAT_006cfa4c + iVar1 * 0x1910) + 1;
      iVar1 = FUN_004447a0(i);
      iVar2 = FUN_004447a0(i);
      if (*(int *)(&DAT_006cfa4c + iVar2 * 0x1910) < *(int *)(&DAT_006cfa48 + iVar1 * 0x1910)) {
        FUN_00444f80(i);
      }
      else {
        FUN_00444ec0();
      }
    }
    i = i + 1;
  } while (i < 0x14);
  return;
}


/* ==== 00445180 FUN_00445180 ==== */

void FUN_00445180(void)

{
  int *piVar1;
  int i;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_40 [16];
  
  i = DAT_006ed680;
  if (DAT_006fb90c != 0) {
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar3 + 0x60) = DAT_006ed680;
    uVar2 = *(undefined4 *)(DAT_0073b1b0 + i * 0x48);
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x48) = uVar2;
    if (*(int *)(iVar3 + 0x5c) == 1) {
      FUN_00440430();
    }
    if (DAT_0073b4ec != DAT_006ed680) {
      DAT_0073b4ec = DAT_006ed680;
      i = (**(code **)(*DAT_0073b4b4 + 0x5c))
                    (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + DAT_006ed680 * 0x48));
      if (i != 0) {
        uVar2 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_Win3DLib_Include_d3de_00591314,0x122,uVar2);
      }
    }
    if ((DAT_006fb894 == 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,6);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,5);
    }
    FUN_004450e0();
    puVar5 = &DAT_0073b538;
    puVar6 = auStack_40;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = auStack_40;
    puVar6 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (i != 0) {
      uVar2 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_Win3DLib_Include_d3de_00591314,0x14,uVar2);
    }
    i = 0;
    do {
      iVar3 = FUN_004447a0(i);
      if (*(int *)(&DAT_006cfa44 + iVar3 * 0x1910) != 0) {
        iVar3 = FUN_004447a0(i);
        piVar1 = DAT_0073b4b4;
        if (2 < *(int *)(&DAT_006ce140 + iVar3 * 0x1910)) {
          iVar3 = *DAT_0073b4b4;
          iVar4 = FUN_004447a0(i,1);
          iVar4 = FUN_004447a0(i,*(undefined4 *)(&DAT_006ce140 + iVar4 * 0x1910));
          iVar3 = (**(code **)(iVar3 + 0x74))(piVar1,5,2,&DAT_006ce144 + iVar4 * 0x1910);
          if (iVar3 != 0) {
            FUN_004c4150(s__s___d__DramPrimitive_error_0059d72c,
                         s_C__Work_A2IV_Game_prog_gfx_skid__0059d708,0x2aa);
          }
          piVar1 = DAT_0073b4b4;
          iVar3 = *DAT_0073b4b4;
          iVar4 = FUN_004447a0(i,1);
          iVar4 = FUN_004447a0(i,*(undefined4 *)(&DAT_006ce140 + iVar4 * 0x1910));
          iVar3 = (**(code **)(iVar3 + 0x74))(piVar1,5,2,&DAT_006cedc4 + iVar4 * 0x1910);
          if (iVar3 != 0) {
            FUN_004c4150(s__s___d__DramPrimitive_error_0059d770,
                         s_C__Work_A2IV_Game_prog_gfx_skid__0059d74c,0x2b0);
          }
        }
      }
      i = i + 1;
    } while (i < 0x14);
    if ((DAT_006fb894 == 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
    }
  }
  return;
}


