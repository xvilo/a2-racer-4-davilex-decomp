/* spel.dat — engine/Bbox.cpp: 16 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004af5a0 FUN_004af5a0 ==== */

undefined4
FUN_004af5a0(int param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5,int *param_6)

{
  *param_3 = param_1 - param_2;
  *param_4 = param_1 + param_2;
  if (*param_3 < 0) {
    *param_5 = 0;
    *param_6 = *param_4 % DAT_00715258;
    *param_3 = *param_3 + DAT_00715258 + -1;
    *param_4 = DAT_00715258 + -1;
    return 1;
  }
  if (DAT_00715258 + -1 < param_1 + param_2) {
    *param_5 = 0;
    *param_6 = *param_4 % DAT_00715258;
    *param_4 = DAT_00715258 + -1;
    return 1;
  }
  return 0;
}


/* ==== 004af760 FUN_004af760 ==== */

void FUN_004af760(void)

{
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar1;
  
  puVar1 = in_ECX;
  for (i = 0x18; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  return;
}


/* ==== 004af780 FUN_004af780 ==== */

void FUN_004af780(int param_1,undefined4 *param_2)

{
  int in_ECX;
  int i;
  undefined4 *puVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 * 0x20 + in_ECX);
    for (i = 8; i != 0; i = i + -1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}


/* ==== 004af7a0 FUN_004af7a0 ==== */

void FUN_004af7a0(undefined4 *param_1)

{
  int in_ECX;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x60) = *param_1;
    *(undefined4 *)(in_ECX + 100) = param_1[1];
    *(undefined4 *)(in_ECX + 0x68) = param_1[2];
  }
  return;
}


/* ==== 004af7c0 FUN_004af7c0 ==== */

void FUN_004af7c0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x6c) = param_1;
  return;
}


/* ==== 004af880 FUN_004af880 ==== */

void FUN_004af880(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1 * 0xf0;
  iVar4 = FUN_004a8c50();
  if (*(int *)(iVar7 + 0x5c + DAT_00715e50) != 0) {
    if (199 < DAT_00719b48) {
      FUN_004c4150(s__s__d____Max_nb_of_bboxs_reached_005b0770,
                   s_C__Work_A2IV_Engine_prog_Bbox_cp_005b0794,0x53);
    }
    iVar3 = DAT_0073b5c8;
    iVar4 = iVar4 * 0xac;
    iVar5 = DAT_00719b48 * 0x4c;
    puVar1 = (undefined4 *)(iVar4 + 0x10 + DAT_0073b5c8);
    *(undefined4 *)(&DAT_00715fe8 + iVar5) = *puVar1;
    *(undefined4 *)(&DAT_00715fec + iVar5) = puVar1[1];
    *(undefined4 *)(&DAT_00715ff0 + iVar5) = puVar1[2];
    puVar1 = (undefined4 *)(iVar4 + 0x1c + iVar3);
    *(undefined4 *)(&DAT_00715ff4 + iVar5) = *puVar1;
    *(undefined4 *)(&DAT_00715ff8 + iVar5) = puVar1[1];
    *(undefined4 *)(&DAT_00715ffc + iVar5) = puVar1[2];
    puVar1 = (undefined4 *)(iVar4 + 0x4c + iVar3);
    puVar2 = (undefined4 *)(iVar4 + 0x40 + iVar3);
    *(undefined4 *)(&DAT_00716000 + iVar5) = *puVar1;
    *(undefined4 *)(&DAT_00716004 + iVar5) = puVar1[1];
    *(undefined4 *)(&DAT_00716008 + iVar5) = puVar1[2];
    *(undefined4 *)(&DAT_0071600c + iVar5) = *puVar2;
    *(undefined4 *)(&DAT_00716010 + iVar5) = puVar2[1];
    iVar3 = DAT_0073b0d0;
    *(undefined4 *)(&DAT_00716014 + iVar5) = puVar2[2];
    iVar6 = *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9 + iVar3;
    *(undefined4 *)(&DAT_00716018 + iVar5) = *(undefined4 *)(iVar6 + 0x50);
    *(undefined4 *)(&DAT_0071601c + iVar5) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(&DAT_00716020 + iVar5) = *(undefined4 *)(iVar6 + 0x58);
    *(int *)(&DAT_0071602c + iVar5) =
         (int)ROUND(ROUND(*(float *)(iVar3 + *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9 + 0x78)));
    iVar7 = DAT_00719b48 * 0x4c;
    DAT_00719b48 = DAT_00719b48 + 1;
    *(float *)(&DAT_00716024 + iVar7) = *(float *)(iVar4 + 0x74 + DAT_0073b5c8) + 4.0;
    *(int *)(&DAT_00716028 + iVar7) = param_1;
    *(undefined4 *)(&DAT_00716030 + iVar7) = 1;
  }
  return;
}


/* ==== 004afa40 FUN_004afa40 ==== */

void FUN_004afa40(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_00715f00 + 0x104 + (param_2 + param_1 * 0x265) * 4) * 0x60;
  fVar2 = *(float *)(iVar4 + 0x5c + DAT_0073b088);
  if (199 < DAT_00719b48) {
    FUN_004c4150(s__s__d____Max_nb_of_bboxs_reached_005b0770,
                 s_C__Work_A2IV_Engine_prog_Bbox_cp_005b0794,0x78);
  }
  iVar3 = DAT_00719b48 * 0x4c;
  *(undefined4 *)(&DAT_00715fe8 + iVar3) = 0xc1200000;
  *(undefined4 *)(&DAT_00715fec + iVar3) = 0;
  fVar2 = fVar2 + 1.0;
  *(undefined4 *)(&DAT_00715ff0 + iVar3) = 0xbf800000;
  *(undefined4 *)(&DAT_00715ff4 + iVar3) = 0;
  *(undefined4 *)(&DAT_00715ff8 + iVar3) = 0;
  *(undefined4 *)(&DAT_00715ffc + iVar3) = 0xbf800000;
  *(undefined4 *)(&DAT_00716000 + iVar3) = 0;
  *(undefined4 *)(&DAT_00716004 + iVar3) = 0;
  *(float *)(&DAT_00716008 + iVar3) = fVar2;
  *(undefined4 *)(&DAT_0071600c + iVar3) = 0xc1200000;
  *(undefined4 *)(&DAT_00716010 + iVar3) = 0;
  *(float *)(&DAT_00716014 + iVar3) = fVar2;
  puVar1 = (undefined4 *)(iVar4 + DAT_0073b088);
  *(undefined4 *)(&DAT_00716018 + iVar3) = *puVar1;
  *(undefined4 *)(&DAT_0071601c + iVar3) = puVar1[1];
  *(undefined4 *)(&DAT_00716020 + iVar3) = puVar1[2];
  *(int *)(&DAT_0071602c + iVar3) = (int)ROUND(ROUND((float)puVar1[6]));
  iVar4 = DAT_00719b48 * 0x4c;
  *(undefined4 *)(&DAT_00716024 + iVar4) = 0;
  *(undefined4 *)(&DAT_00716028 + iVar4) = 0xffffffff;
  *(undefined4 *)(&DAT_00716030 + iVar4) = 0;
  DAT_00719b48 = DAT_00719b48 + 1;
  return;
}


/* ==== 004afbd0 FUN_004afbd0 ==== */

void FUN_004afbd0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_004a8c50();
  iVar3 = iVar3 * 0xac;
  puVar1 = (undefined4 *)(iVar3 + 0x10 + DAT_0073b5c8);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  puVar1 = (undefined4 *)(iVar3 + 0x1c + DAT_0073b5c8);
  param_2[3] = *puVar1;
  param_2[4] = puVar1[1];
  param_2[5] = puVar1[2];
  puVar1 = (undefined4 *)(iVar3 + 0x4c + DAT_0073b5c8);
  param_2[6] = *puVar1;
  param_2[7] = puVar1[1];
  param_2[8] = puVar1[2];
  puVar1 = (undefined4 *)(iVar3 + 0x40 + DAT_0073b5c8);
  param_2[9] = *puVar1;
  param_2[10] = puVar1[1];
  param_2[0xb] = puVar1[2];
  iVar4 = DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  param_2[0xc] = *(undefined4 *)(iVar4 + 0x50);
  param_2[0xd] = *(undefined4 *)(iVar4 + 0x54);
  param_2[0xe] = *(undefined4 *)(iVar4 + 0x58);
  param_2[0x11] =
       (int)ROUND(ROUND(*(float *)(DAT_0073b0d0 +
                                   *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x78)));
  uVar2 = *(undefined4 *)(iVar3 + 0x74 + DAT_0073b5c8);
  param_2[0x12] = 1;
  param_2[0xf] = uVar2;
  param_2[0x10] = param_1;
  return;
}


/* ==== 004afd20 FUN_004afd20 ==== */

void FUN_004afd20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int j;
  int i;
  
  iVar4 = param_1 * 0xf0;
  iVar3 = *(int *)(DAT_00715e50 + 0x34 + iVar4);
  if (*(int *)(DAT_00715e50 + 0x60 + iVar4) == 0) {
    i = -1;
    do {
      iVar1 = FUN_004a71e0(i + iVar3);
      j = 0;
      iVar2 = *(int *)(DAT_00715f00 + 0xf0 + iVar1 * 0x994);
      if (0 < iVar2) {
        do {
          FUN_004afa40(iVar1,j);
          j = j + 1;
        } while (j < iVar2);
      }
      i = i + 1;
    } while (i < 2);
  }
  piVar5 = &DAT_007128cc;
  iVar3 = DAT_00715e50;
  do {
    if ((((piVar5[-1] != 0) && (*piVar5 != param_1)) &&
        (iVar2 = FUN_004a7200(*(undefined4 *)(iVar3 + 0x34 + iVar4),
                              *(undefined4 *)(*piVar5 * 0xf0 + 0x34 + iVar3)), iVar3 = DAT_00715e50,
        iVar2 < 10)) &&
       (((iVar2 = *piVar5, iVar2 != *(int *)(DAT_00715e50 + 0x44 + iVar4) &&
         (iVar2 != *(int *)(DAT_00715e50 + 0x48 + iVar4))) &&
        ((*(byte *)(iVar2 * 0xf0 + 0x1c + DAT_00715e50) & 8) == 0)))) {
      FUN_004af880(iVar2);
      iVar3 = DAT_00715e50;
    }
    piVar5 = piVar5 + 2;
  } while ((int)piVar5 < 0x714e4c);
  return;
}


/* ==== 004afe30 FUN_004afe30 ==== */

void FUN_004afe30(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = (DAT_005b23bc & param_3) * 4;
  fVar1 = *(float *)(iVar5 + DAT_0073b578);
  fVar2 = *param_2;
  fVar3 = *(float *)(iVar5 + DAT_0073b530);
  fVar4 = param_2[2];
  param_1[1] = 0.0;
  *param_1 = fVar1 * fVar2 - fVar3 * fVar4;
  iVar5 = (DAT_005b23bc & param_3) * 4;
  param_1[2] = *(float *)(iVar5 + DAT_0073b578) * param_2[2] +
               *(float *)(iVar5 + DAT_0073b530) * *param_2;
  return;
}


/* ==== 004afea0 FUN_004afea0 ==== */

void FUN_004afea0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (DAT_005b23bc & (uint)param_2[0x11]) * 4;
  fVar1 = *(float *)(iVar3 + DAT_0073b578);
  fVar2 = *(float *)(iVar3 + DAT_0073b530);
  *param_1 = fVar1 * *param_2 - fVar2 * param_2[2];
  param_1[2] = fVar1 * param_2[2] + fVar2 * *param_2;
  param_1[3] = fVar1 * param_2[3] - fVar2 * param_2[5];
  param_1[5] = fVar1 * param_2[5] + fVar2 * param_2[3];
  param_1[6] = fVar1 * param_2[6] - fVar2 * param_2[8];
  param_1[8] = fVar1 * param_2[8] + fVar2 * param_2[6];
  param_1[9] = fVar1 * param_2[9] - fVar2 * param_2[0xb];
  param_1[0xb] = fVar1 * param_2[0xb] + fVar2 * param_2[9];
  return;
}


/* ==== 004aff40 FUN_004aff40 ==== */

void FUN_004aff40(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  iVar7 = (DAT_005b23bc & param_2) * 4;
  fVar1 = *(float *)(iVar7 + DAT_0073b530);
  fVar2 = *(float *)(iVar7 + DAT_0073b578);
  fVar3 = *param_1;
  fVar4 = param_1[3];
  fVar5 = param_1[6];
  *param_1 = fVar3 * fVar2 - param_1[2] * fVar1;
  fVar6 = param_1[9];
  param_1[2] = fVar3 * fVar1 + param_1[2] * fVar2;
  param_1[3] = fVar4 * fVar2 - param_1[5] * fVar1;
  param_1[5] = fVar4 * fVar1 + param_1[5] * fVar2;
  param_1[6] = fVar5 * fVar2 - param_1[8] * fVar1;
  param_1[8] = fVar5 * fVar1 + param_1[8] * fVar2;
  param_1[9] = fVar6 * fVar2 - param_1[0xb] * fVar1;
  param_1[0xb] = fVar6 * fVar1 + param_1[0xb] * fVar2;
  return;
}


/* ==== 004b0020 FUN_004b0020 ==== */

undefined4 FUN_004b0020(float param_1,float param_2,float *param_3,float *param_4)

{
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) {
      if (0.0 < param_2) {
        return 0;
      }
    }
    else {
      param_2 = param_2 / param_1;
      if (param_2 < *param_3) {
        return 0;
      }
      if (param_2 < *param_4) {
        *param_4 = param_2;
        return 1;
      }
    }
  }
  else {
    param_2 = param_2 / param_1;
    if (*param_4 < param_2) {
      return 0;
    }
    if (*param_3 < param_2) {
      *param_3 = param_2;
      return 1;
    }
  }
  return 1;
}


/* ==== 004b00c0 FUN_004b00c0 ==== */

float10 FUN_004b00c0(float param_1,undefined4 param_2,float param_3,float param_4,undefined4 param_5
                    ,float param_6,float param_7,undefined4 param_8,float param_9,float param_10,
                    undefined4 param_11,float param_12,int *param_13)

{
  float fVar1;
  int *piVar2;
  int i;
  int j;
  float *pfVar3;
  int iVar4;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10 [4];
  
  local_14 = param_4 - param_1;
  local_18 = param_6 - param_3;
  if ((local_14 != 0.0) || (local_18 != 0.0)) {
    local_10[3] = param_1 - param_7;
    local_10[1] = param_10 - param_1;
    local_10[0] = param_3 - param_9;
    local_10[2] = param_12 - param_3;
    if ((0.0 < param_1 - param_7) &&
       (((0.0 < param_10 - param_1 && (0.0 < param_3 - param_9)) && (0.0 < param_12 - param_3)))) {
      fVar1 = 3.4028235e+38;
      iVar4 = -1;
      i = 0;
      pfVar3 = local_10;
      do {
        if (*pfVar3 < fVar1) {
          fVar1 = *pfVar3;
          iVar4 = i;
        }
        i = i + 1;
        pfVar3 = pfVar3 + 1;
      } while (i < 4);
      if (iVar4 != -1) {
        local_10[3] = param_4 - param_7;
        local_10[1] = param_10 - param_4;
        local_10[0] = param_6 - param_9;
        local_10[2] = param_12 - param_6;
        if (((0.0 < param_4 - param_7) && (0.0 < param_10 - param_4)) &&
           ((0.0 < param_6 - param_9 && (0.0 < param_12 - param_6)))) {
          fVar1 = 3.4028235e+38;
          i = -1;
          j = 0;
          pfVar3 = local_10;
          do {
            if (*pfVar3 < fVar1) {
              fVar1 = *pfVar3;
              i = j;
            }
            j = j + 1;
            pfVar3 = pfVar3 + 1;
          } while (j < 4);
          if (i != -1) {
            *param_13 = iVar4;
            return (float10)0.0;
          }
        }
        goto LAB_004b03c8;
      }
    }
    param_4 = 0.0;
    local_1c = 0x3f800000;
    local_20 = 0.0;
    iVar4 = FUN_004b0020(local_14,param_7 - param_1,&param_4,&local_1c);
    piVar2 = param_13;
    if (iVar4 != 0) {
      if (param_4 != 0.0) {
        *param_13 = 3;
        local_20 = param_4;
      }
      iVar4 = FUN_004b0020(-local_14,param_1 - param_10,&param_4,&local_1c);
      if (iVar4 != 0) {
        if (param_4 != local_20) {
          *piVar2 = 1;
          local_20 = param_4;
        }
        iVar4 = FUN_004b0020(local_18,param_9 - param_3,&param_4,&local_1c);
        if (iVar4 != 0) {
          if (param_4 != local_20) {
            *piVar2 = 0;
            local_20 = param_4;
          }
          iVar4 = FUN_004b0020(-local_18,param_3 - param_12,&param_4,&local_1c);
          if (iVar4 != 0) {
            if (param_4 != local_20) {
              *piVar2 = 2;
            }
            if (0.0 < param_4) {
              return (float10)param_4;
            }
          }
        }
      }
    }
  }
LAB_004b03c8:
  return (float10)1.0;
}


/* ==== 004b03e0 FUN_004b03e0 ==== */

undefined4 FUN_004b03e0(undefined4 param_1)

{
  char cVar1;
  undefined *puVar2;
  int i;
  undefined1 local_4c [76];
  
  i = 0;
  DAT_00719b48 = 0;
  FUN_004afd20(param_1);
  FUN_004afbd0(param_1,local_4c);
  if (0 < DAT_00719b48) {
    puVar2 = &DAT_00715fe8;
    do {
      cVar1 = FUN_004b0470(puVar2,local_4c);
      if (cVar1 == '\x01') {
        return 0;
      }
      cVar1 = FUN_004b0470(local_4c,puVar2);
      if (cVar1 == '\x01') {
        return 0;
      }
      cVar1 = FUN_004b05e0(puVar2,local_4c);
      if (cVar1 == '\x01') {
        return 0;
      }
      i = i + 1;
      puVar2 = puVar2 + 0x4c;
    } while (i < DAT_00719b48);
  }
  return 1;
}


/* ==== 004b0470 FUN_004b0470 ==== */

uint FUN_004b0470(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int i;
  ushort uVar6;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_30 = *param_1;
  local_2c = param_1[1];
  local_24 = param_1[3];
  local_28 = param_1[2];
  local_20 = param_1[4];
  local_1c = param_1[5];
  local_18 = param_1[6];
  local_14 = param_1[7];
  local_10 = param_1[8];
  FUN_004afea0(&local_60,param_2);
  fVar1 = *(float *)(param_2 + 0x30) - param_1[0xc];
  fVar2 = *(float *)(param_2 + 0x34) - param_1[0xd];
  fVar3 = *(float *)(param_2 + 0x38) - param_1[0xe];
  local_60 = fVar1 + local_60;
  local_54 = fVar1 + local_54;
  local_48 = fVar1 + local_48;
  local_3c = fVar1 + local_3c;
  local_5c = fVar2 + local_5c;
  local_50 = fVar2 + local_50;
  local_44 = fVar2 + local_44;
  local_38 = fVar2 + local_38;
  local_58 = fVar3 + local_58;
  local_4c = fVar3 + local_4c;
  local_40 = fVar3 + local_40;
  local_34 = fVar3 + local_34;
  FUN_004aff40(&local_60,-(int)param_1[0x11]);
  i = 0;
  pfVar5 = &local_58;
  do {
    fVar1 = pfVar5[-2];
    uVar4 = (uint)(ushort)((ushort)(fVar1 < local_30) << 8 |
                           (ushort)(NAN(fVar1) || NAN(local_30)) << 10 |
                          (ushort)(fVar1 == local_30) << 0xe);
    if (fVar1 >= local_30) {
      fVar1 = pfVar5[-2];
      uVar4 = (uint)(ushort)((ushort)(fVar1 < local_24) << 8 |
                             (ushort)(NAN(fVar1) || NAN(local_24)) << 10 |
                            (ushort)(fVar1 == local_24) << 0xe);
      if (fVar1 < local_24 || (fVar1 == local_24) != 0) {
        fVar1 = *pfVar5;
        uVar4 = (uint)(ushort)((ushort)(fVar1 < local_28) << 8 |
                               (ushort)(NAN(fVar1) || NAN(local_28)) << 10 |
                              (ushort)(fVar1 == local_28) << 0xe);
        if (fVar1 >= local_28) {
          fVar1 = *pfVar5;
          uVar6 = (ushort)(fVar1 < local_10) << 8 | (ushort)(NAN(fVar1) || NAN(local_10)) << 10 |
                  (ushort)(fVar1 == local_10) << 0xe;
          uVar4 = (uint)uVar6;
          if (fVar1 < local_10 || (fVar1 == local_10) != 0) {
            return CONCAT31((uint3)(byte)(uVar6 >> 8),1);
          }
        }
      }
    }
    i = i + 1;
    pfVar5 = pfVar5 + 3;
  } while (i < 4);
  return uVar4;
}


