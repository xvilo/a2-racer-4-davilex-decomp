/* spel.dat — engine/Rd_main.cpp: 35 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ad080 FUN_004ad080 ==== */

void FUN_004ad080(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int in_ECX;
  int i;
  float10 fVar6;
  
  fVar2 = *param_1;
  pfVar1 = (float *)(in_ECX + 0x40);
  fVar3 = *param_2;
  *pfVar1 = -(*(float *)(in_ECX + 0x3c) - param_2[2]) + -(param_1[2] - *(float *)(in_ECX + 0x3c));
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(float *)(in_ECX + 0x48) =
       (fVar2 - *(float *)(in_ECX + 0x34)) + (*(float *)(in_ECX + 0x34) - fVar3);
  *(undefined4 *)(in_ECX + 0x44) = 0;
  fVar6 = (float10)FUN_0041e120(pfVar1);
  fVar6 = SQRT(fVar6);
  pfVar4 = (float *)FUN_004066c0((float)((float10)*pfVar1 / fVar6),
                                 (float)((float10)*(float *)(in_ECX + 0x44) / fVar6),
                                 (float)((float10)*(float *)(in_ECX + 0x48) / fVar6));
  *pfVar1 = *pfVar4;
  *(float *)(in_ECX + 0x44) = pfVar4[1];
  *(float *)(in_ECX + 0x48) = pfVar4[2];
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  pfVar4 = (float *)(in_ECX + 0x58);
  *pfVar4 = *param_2 - *(float *)(in_ECX + 0x34);
  *(float *)(in_ECX + 0x5c) = fVar2 - *(float *)(in_ECX + 0x38);
  *(float *)(in_ECX + 0x60) = fVar3 - *(float *)(in_ECX + 0x3c);
  fVar6 = (float10)FUN_0041e120(pfVar4);
  fVar6 = SQRT(fVar6);
  pfVar5 = (float *)FUN_004066c0((float)((float10)*pfVar4 / fVar6),
                                 (float)((float10)*(float *)(in_ECX + 0x5c) / fVar6),
                                 (float)((float10)*(float *)(in_ECX + 0x60) / fVar6));
  *pfVar4 = *pfVar5;
  *(float *)(in_ECX + 0x5c) = pfVar5[1];
  *(float *)(in_ECX + 0x60) = pfVar5[2];
  pfVar5 = (float *)(in_ECX + 0x4c);
  *pfVar5 = *(float *)(in_ECX + 0x48) * *(float *)(in_ECX + 0x5c) -
            *(float *)(in_ECX + 0x44) * *(float *)(in_ECX + 0x60);
  *(float *)(in_ECX + 0x50) =
       *(float *)(in_ECX + 0x60) * *pfVar1 - *(float *)(in_ECX + 0x48) * *pfVar4;
  *(float *)(in_ECX + 0x54) =
       *(float *)(in_ECX + 0x44) * *pfVar4 - *(float *)(in_ECX + 0x5c) * *pfVar1;
  fVar6 = (float10)FUN_0041e120(pfVar5);
  fVar6 = SQRT(fVar6);
  pfVar4 = (float *)FUN_004066c0((float)((float10)*pfVar5 / fVar6),
                                 (float)((float10)*(float *)(in_ECX + 0x50) / fVar6),
                                 (float)((float10)*(float *)(in_ECX + 0x54) / fVar6));
  *pfVar5 = *pfVar4;
  *(float *)(in_ECX + 0x50) = pfVar4[1];
  *(float *)(in_ECX + 0x54) = pfVar4[2];
  *(float *)(in_ECX + 0xec) =
       *pfVar5 * *(float *)(in_ECX + 0x34) +
       *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x50) +
       *(float *)(in_ECX + 0x54) * *(float *)(in_ECX + 0x3c);
  pfVar4 = (float *)&DAT_0073b538;
  pfVar5 = (float *)(in_ECX + 0x6c);
  for (i = 0x10; i != 0; i = i + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  *(float *)(in_ECX + 0x6c) = *pfVar1;
  *(float *)(in_ECX + 0x70) = *pfVar1;
  *(float *)(in_ECX + 0x74) = *pfVar1;
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(in_ECX + 0x60);
  return;
}


/* ==== 004ad2b0 FUN_004ad2b0 ==== */

undefined4 FUN_004ad2b0(float *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int i;
  
  fVar1 = (*(float **)(param_2 + 8))[2];
  i = 0;
  if (*param_1 < **(float **)(param_2 + 8)) {
    if (param_1[2] < fVar1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 3;
    }
  }
  else if (param_1[2] < fVar1) {
    uVar6 = 1;
  }
  else {
    uVar6 = 2;
  }
  iVar5 = 8;
  iVar7 = 0;
  do {
    pfVar2 = *(float **)(iVar7 + param_2);
    if (*param_1 < *pfVar2) {
      if (param_1[2] < pfVar2[2]) {
        uVar4 = 0;
      }
      else {
        uVar4 = 3;
      }
    }
    else if (param_1[2] < pfVar2[2]) {
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
    if (uVar6 != uVar4) {
      if ((uVar6 + 1 & 3) == uVar4) {
        i = i + 1;
      }
      else if ((uVar4 + 1 & 3) == uVar6) {
        i = i + -1;
      }
      else {
        pfVar3 = *(float **)(param_2 + iVar5);
        if (0.0 < (param_1[2] - pfVar3[2]) * (*pfVar2 - *pfVar3) -
                  (*param_1 - *pfVar3) * (pfVar2[2] - pfVar3[2])) {
          i = i + 2;
        }
        else {
          i = i + -2;
        }
      }
    }
    iVar8 = iVar7 + 4;
    iVar5 = iVar7;
    uVar6 = uVar4;
    iVar7 = iVar8;
  } while (iVar8 < 0xc);
  return CONCAT31((int3)((uint)i >> 8),i != 0);
}


/* ==== 004ad3d0 FUN_004ad3d0 ==== */

void FUN_004ad3d0(float *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 *param_5,int *param_6)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int i;
  int iVar3;
  float *pfVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  i = 0;
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar3 = *(int *)(in_ECX + 0x18);
  local_c = param_1;
  local_8 = 0;
  local_4 = param_3;
  if (iVar3 < iVar1) {
    param_1 = (float *)(in_ECX + 0x398);
    do {
      local_18 = FUN_004ae1f0(iVar3,0);
      local_14 = FUN_004ae1f0(iVar3,1);
      local_10 = FUN_004ae1f0(iVar3,2);
      cVar2 = FUN_004ad2b0(&local_c,&local_18);
      if ((cVar2 == '\x01') && (0.4 < *param_1)) {
        *param_4 = iVar3;
        *param_5 = 0;
        *param_6 = i;
        return;
      }
      iVar3 = iVar3 + 3;
      i = i + 1;
      param_1 = param_1 + 3;
    } while (iVar3 < iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x14);
  iVar3 = *(int *)(in_ECX + 0x10);
  i = 0;
  if (iVar3 < iVar1) {
    param_1 = (float *)(in_ECX + 0x198);
    do {
      local_18 = FUN_004ae2a0(iVar3,0);
      local_14 = FUN_004ae2a0(iVar3,1);
      local_10 = FUN_004ae2a0(iVar3,2);
      cVar2 = FUN_004ad2b0(&local_c,&local_18);
      if ((cVar2 == '\x01') && (0.4 < *param_1)) {
        *param_4 = iVar3;
        *param_5 = 1;
        *param_6 = i;
        FUN_004c3fa0(s_Found_road_plane___d__d_005b0504,*param_4,i);
        return;
      }
      iVar3 = iVar3 + 3;
      i = i + 1;
      param_1 = param_1 + 3;
    } while (iVar3 < iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x2c);
  iVar3 = *(int *)(in_ECX + 0x28);
  i = 0;
  if (iVar3 < iVar1) {
    pfVar4 = (float *)(in_ECX + 0x818);
    do {
      local_18 = FUN_004ae3e0(iVar3,0);
      local_14 = FUN_004ae3e0(iVar3,1);
      local_10 = FUN_004ae3e0(iVar3,2);
      cVar2 = FUN_004ad2b0(&local_c,&local_18);
      if ((cVar2 == '\x01') && (0.4 < *pfVar4)) {
        *param_4 = iVar3;
        *param_5 = 2;
        *param_6 = i;
        FUN_004c3fa0(s_Found_extra_plane___d__d_005b04e8,*param_4,i);
        return;
      }
      iVar3 = iVar3 + 3;
      i = i + 1;
      pfVar4 = pfVar4 + 3;
    } while (iVar3 < iVar1);
  }
  *param_4 = -1;
  *param_5 = 0xffffffff;
  *param_6 = -1;
  return;
}


/* ==== 004ad640 FUN_004ad640 ==== */

float10 FUN_004ad640(float param_1,undefined4 param_2,float param_3,int param_4,int param_5)

{
  int in_ECX;
  
  if (param_4 == 0) {
    return (((float10)*(float *)(in_ECX + 0x5d4 + param_5 * 4) -
            (float10)param_1 * (float10)*(float *)(in_ECX + 0x394 + param_5 * 0xc)) -
           (float10)param_3 * (float10)*(float *)(in_ECX + (param_5 * 3 + 0xe7) * 4)) /
           (float10)*(float *)(in_ECX + param_5 * 0xc + 0x398);
  }
  if (param_4 != 1) {
    if (param_4 != 2) {
      return (((float10)*(float *)(in_ECX + 0xec) -
              (float10)param_1 * (float10)*(float *)(in_ECX + 0x4c)) -
             (float10)param_3 * (float10)*(float *)(in_ECX + 0x54)) /
             (float10)*(float *)(in_ECX + 0x50);
    }
    return (((float10)*(float *)(in_ECX + 0x934 + param_5 * 4) -
            (float10)param_1 * (float10)*(float *)(in_ECX + 0x814 + param_5 * 0xc)) -
           (float10)param_3 * (float10)*(float *)(in_ECX + (param_5 * 3 + 0x207) * 4)) /
           (float10)*(float *)(in_ECX + param_5 * 0xc + 0x818);
  }
  return (((float10)*(float *)(in_ECX + 0x314 + param_5 * 4) -
          (float10)param_1 * (float10)*(float *)(in_ECX + 0x194 + param_5 * 0xc)) -
         (float10)param_3 * (float10)*(float *)(in_ECX + param_5 * 0xc + 0x19c)) /
         (float10)*(float *)(in_ECX + (param_5 * 3 + 0x66) * 4);
}


/* ==== 004ad710 FUN_004ad710 ==== */

undefined4 FUN_004ad710(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_004ae1f0(param_2,2);
    return *(undefined4 *)(iVar1 + 0x10);
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0xffffff;
    }
    iVar1 = FUN_004ae3e0(param_2,2);
    return *(undefined4 *)(iVar1 + 0x10);
  }
  iVar1 = FUN_004ae2a0(param_2,2);
  return *(undefined4 *)(iVar1 + 0x10);
}


/* ==== 004ad770 FUN_004ad770 ==== */

int FUN_004ad770(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  switch(param_1) {
  case 0:
    iVar2 = *(int *)(in_ECX + 0x14);
    iVar1 = *(int *)(in_ECX + 0x10);
    break;
  case 1:
    iVar2 = *(int *)(in_ECX + 0x1c);
    iVar1 = *(int *)(in_ECX + 0x18);
    goto LAB_004ad7a1;
  case 2:
    iVar2 = *(int *)(in_ECX + 0x2c);
    iVar1 = *(int *)(in_ECX + 0x28);
    break;
  case 3:
    iVar2 = *(int *)(in_ECX + 0x24);
    iVar1 = *(int *)(in_ECX + 0x20);
LAB_004ad7a1:
    return (iVar2 - iVar1) / 3;
  default:
    return 0;
  }
  return (iVar2 - iVar1) / 3;
}


/* ==== 004ad7e0 FUN_004ad7e0 ==== */

uint FUN_004ad7e0(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = param_1 * 3;
  uVar2 = param_2;
  switch(param_2) {
  case 0:
    uVar2 = *(uint *)(in_ECX + 0x10);
    if ((int)(*(int *)(in_ECX + 0x14) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    uVar1 = FUN_004ae2a0(iVar3,0);
    FUN_004af780(0,uVar1);
    uVar1 = FUN_004ae2a0(iVar3,1);
    FUN_004af780(1,uVar1);
    uVar1 = FUN_004ae2a0(iVar3,2);
    FUN_004af780(2,uVar1);
    FUN_004af7a0(in_ECX + 0x194 + param_1 * 0xc);
    FUN_004af7c0(*(undefined4 *)(in_ECX + 0x314 + param_1 * 4));
    goto LAB_004ad99c;
  case 1:
    uVar2 = *(uint *)(in_ECX + 0x18);
    if ((int)(*(int *)(in_ECX + 0x1c) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    uVar1 = FUN_004ae1f0(iVar3,0);
    FUN_004af780(0,uVar1);
    uVar1 = FUN_004ae1f0(iVar3,1);
    FUN_004af780(1,uVar1);
    uVar1 = FUN_004ae1f0(iVar3,2);
    break;
  case 2:
    uVar2 = *(uint *)(in_ECX + 0x28);
    if ((int)(*(int *)(in_ECX + 0x2c) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    uVar1 = FUN_004ae3e0(iVar3,0);
    FUN_004af780(0,uVar1);
    uVar1 = FUN_004ae3e0(iVar3,1);
    FUN_004af780(1,uVar1);
    uVar1 = FUN_004ae3e0(iVar3,2);
    break;
  case 3:
    uVar2 = *(uint *)(in_ECX + 0x20);
    if ((int)(*(int *)(in_ECX + 0x24) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    uVar1 = FUN_004ae340(iVar3,0);
    FUN_004af780(0,uVar1);
    uVar1 = FUN_004ae340(iVar3,1);
    FUN_004af780(1,uVar1);
    uVar1 = FUN_004ae340(iVar3,2);
    break;
  default:
switchD_004ad7fb_default:
    return uVar2 & 0xffffff00;
  }
  FUN_004af780(2,uVar1);
LAB_004ad99c:
                    /* WARNING: Could not recover jumptable at 0x004ad9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&PTR_LAB_004adad0)[param_2])();
  return uVar2;
}


/* ==== 004adaf0 FUN_004adaf0 ==== */

void FUN_004adaf0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int *param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int j;
  int i;
  
  iVar1 = *param_1;
  i = 0;
  FUN_004ad3d0(param_3,param_4,param_5,param_6,param_7,param_8);
  j = 1;
  if (*param_6 != -1) {
    *param_1 = iVar1;
    return;
  }
  do {
    if (param_2 * 2 + 1 <= j) {
      *param_1 = iVar1;
      return;
    }
    if (i < 0) {
      i = i + -1;
    }
    else {
      i = i + 1;
    }
    iVar1 = FUN_004a71e0(iVar1 + i);
    FUN_004ad3d0(param_3,param_4,param_5,param_6,param_7,param_8);
    j = j + 1;
    i = -i;
  } while (*param_6 == -1);
  *param_1 = iVar1;
  return;
}


/* ==== 004adbe0 FUN_004adbe0 ==== */

void FUN_004adbe0(uint size)

{
  uint *operator_new_result;
  void *operator_new_result_2;
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f4fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (in_ECX[3] != 0) {
    ExceptionList = &pvStack_c;
    if (in_ECX[3] == 1) {
      ExceptionList = &pvStack_c;
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,
                   in_ECX[1]);
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_005586c5(iVar1,0x994,*(undefined4 *)(iVar1 + -4),FUN_004ab690);
        FUN_0054b339(iVar1 + -4);
      }
    }
    if (in_ECX[3] != 0) {
      FUN_0054b339(in_ECX[4]);
      in_ECX[3] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,(int)in_ECX + 0x2d,in_ECX + 5,
                 size);
  }
  operator_new_result = operator_new(size * 0x994 + 4);
  uStack_4 = 0;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0x994,size,&LAB_004ab660,FUN_004ab690);
  }
  uStack_4 = 0xffffffff;
  *in_ECX = (int)puVar3;
  in_ECX[1] = size;
  in_ECX[2] = 0;
  operator_new_result_2 = operator_new(size);
  in_ECX[4] = (int)operator_new_result_2;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)in_ECX + 0x2d,in_ECX + 5,in_ECX[1]);
  in_ECX[3] = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + in_ECX[4]) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004addd0 FUN_004addd0 ==== */

void FUN_004addd0(void)

{
  char *_Dest;
  char *_Dest_00;
  undefined4 *in_ECX;
  
  _Dest = (char *)(in_ECX + 6);
  in_ECX[4] = 0;
  _strncpy(_Dest,s_m_chunks_005b0570,0x19);
  _Dest_00 = (char *)((int)in_ECX + 0x31);
  _strncpy(_Dest_00,(char *)&PTR_DAT_005b056c,0x19);
  if (in_ECX[4] != 0) {
    if (in_ECX[4] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,_Dest_00,_Dest,in_ECX[2]);
      FUN_0054b339(in_ECX[1]);
    }
    if (in_ECX[4] != 0) {
      FUN_0054b339(in_ECX[5]);
      in_ECX[4] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,_Dest_00,_Dest,0);
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  in_ECX[0x13] = 0xffffffff;
  in_ECX[0x14] = 0xffffffff;
  in_ECX[0x15] = 0xffffffff;
  in_ECX[0x16] = 0xffffffff;
  *in_ECX = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  return;
}


/* ==== 004ade90 FUN_004ade90 ==== */

void FUN_004ade90(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,in_ECX + 0x31,in_ECX + 0x18,
                 *(undefined4 *)(in_ECX + 8));
    FUN_0054b339(*(undefined4 *)(in_ECX + 4));
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_0054b339(*(undefined4 *)(in_ECX + 0x14));
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


/* ==== 004adef0 FUN_004adef0 ==== */

void FUN_004adef0(int param_1,int param_2,int param_3,int param_4)

{
  void *operator_new_result;
  int in_ECX;
  
  operator_new_result = operator_new(param_3 << 7);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)(in_ECX + 0x5c) = operator_new_result;
  operator_new_result = operator_new(param_2 << 7);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)(in_ECX + 0x7c) = operator_new_result;
  operator_new_result = operator_new(param_1 << 7);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)(in_ECX + 0x6c) = operator_new_result;
  operator_new_result = operator_new(param_4 << 7);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)(in_ECX + 0x8c) = operator_new_result;
  operator_new_result = operator_new(param_3 * 0x18);
  *(void **)(in_ECX + 0x60) = operator_new_result;
  operator_new_result = operator_new(param_4 * 0xc);
  *(void **)(in_ECX + 0x90) = operator_new_result;
  operator_new_result = operator_new(param_2 * 0xc);
  *(void **)(in_ECX + 0x80) = operator_new_result;
  operator_new_result = operator_new(param_1 * 0xc);
  *(void **)(in_ECX + 0x70) = operator_new_result;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  DAT_00715f50 = in_ECX;
  return;
}


/* ==== 004ae030 FUN_004ae030 ==== */

undefined4 FUN_004ae030(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x78);
}


/* ==== 004ae040 FUN_004ae040 ==== */

void FUN_004ae040(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int in_ECX;
  int iVar1;
  
  *(undefined2 *)(*(int *)(in_ECX + 0x70) + *(int *)(in_ECX + 0x78) * 2) = param_1;
  iVar1 = *(int *)(in_ECX + 0x78) + 1;
  *(int *)(in_ECX + 0x78) = iVar1;
  *(undefined2 *)(*(int *)(in_ECX + 0x70) + iVar1 * 2) = param_2;
  iVar1 = *(int *)(in_ECX + 0x78) + 1;
  *(int *)(in_ECX + 0x78) = iVar1;
  *(undefined2 *)(*(int *)(in_ECX + 0x70) + iVar1 * 2) = param_3;
  *(int *)(in_ECX + 0x78) = *(int *)(in_ECX + 0x78) + 1;
  return;
}


/* ==== 004ae090 FUN_004ae090 ==== */

undefined4 FUN_004ae090(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x88);
}


/* ==== 004ae0a0 FUN_004ae0a0 ==== */

void FUN_004ae0a0(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int in_ECX;
  int iVar1;
  
  *(undefined2 *)(*(int *)(in_ECX + 0x80) + *(int *)(in_ECX + 0x88) * 2) = param_1;
  iVar1 = *(int *)(in_ECX + 0x88) + 1;
  *(int *)(in_ECX + 0x88) = iVar1;
  *(undefined2 *)(*(int *)(in_ECX + 0x80) + iVar1 * 2) = param_2;
  iVar1 = *(int *)(in_ECX + 0x88) + 1;
  *(int *)(in_ECX + 0x88) = iVar1;
  *(undefined2 *)(*(int *)(in_ECX + 0x80) + iVar1 * 2) = param_3;
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  return;
}


/* ==== 004ae110 FUN_004ae110 ==== */

undefined4 FUN_004ae110(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x68);
}


/* ==== 004ae120 FUN_004ae120 ==== */

void FUN_004ae120(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int in_ECX;
  int iVar1;
  
  *(undefined2 *)(*(int *)(in_ECX + 0x60) + *(int *)(in_ECX + 0x68) * 2) = param_1;
  iVar1 = *(int *)(in_ECX + 0x68) + 1;
  *(int *)(in_ECX + 0x68) = iVar1;
  *(undefined2 *)(*(int *)(in_ECX + 0x60) + iVar1 * 2) = param_2;
  iVar1 = *(int *)(in_ECX + 0x68) + 1;
  *(int *)(in_ECX + 0x68) = iVar1;
  *(undefined2 *)(*(int *)(in_ECX + 0x60) + iVar1 * 2) = param_3;
  *(int *)(in_ECX + 0x68) = *(int *)(in_ECX + 0x68) + 1;
  return;
}


/* ==== 004ae170 FUN_004ae170 ==== */

undefined4 FUN_004ae170(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x98);
}


/* ==== 004ae180 FUN_004ae180 ==== */

void FUN_004ae180(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int in_ECX;
  int iVar1;
  
  *(undefined2 *)(*(int *)(in_ECX + 0x90) + *(int *)(in_ECX + 0x98) * 2) = param_1;
  iVar1 = *(int *)(in_ECX + 0x98) + 1;
  *(int *)(in_ECX + 0x98) = iVar1;
  *(undefined2 *)(*(int *)(in_ECX + 0x90) + iVar1 * 2) = param_2;
  iVar1 = *(int *)(in_ECX + 0x98) + 1;
  *(int *)(in_ECX + 0x98) = iVar1;
  *(undefined2 *)(*(int *)(in_ECX + 0x90) + iVar1 * 2) = param_3;
  *(int *)(in_ECX + 0x98) = *(int *)(in_ECX + 0x98) + 1;
  return;
}


/* ==== 004ae1f0 FUN_004ae1f0 ==== */

int FUN_004ae1f0(int param_1,int param_2)

{
  int in_ECX;
  
  return (uint)*(ushort *)(*(int *)(in_ECX + 0x80) + (param_1 + param_2) * 2) * 0x20 +
         *(int *)(in_ECX + 0x7c);
}


/* ==== 004ae220 FUN_004ae220 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae220(undefined4 *param_1)

{
  int in_ECX;
  int i;
  undefined4 *puVar1;
  
  if (*(int *)(in_ECX + 0x9c) == 0) {
    param_1[6] = ABS((float)param_1[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)(in_ECX + 0x50) * 0x48);
    param_1[7] = ABS((float)param_1[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)(in_ECX + 0x50) * 0x48);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x84) * 0x20 + *(int *)(in_ECX + 0x7c));
  for (i = 8; i != 0; i = i + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) + 1;
  return;
}


/* ==== 004ae2a0 FUN_004ae2a0 ==== */

int FUN_004ae2a0(int param_1,int param_2)

{
  int in_ECX;
  
  return (uint)*(ushort *)(*(int *)(in_ECX + 0x70) + (param_1 + param_2) * 2) * 0x20 +
         *(int *)(in_ECX + 0x6c);
}


/* ==== 004ae2d0 FUN_004ae2d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae2d0(undefined4 *param_1)

{
  int in_ECX;
  int i;
  undefined4 *puVar1;
  
  if (*(int *)(in_ECX + 0x9c) == 0) {
    param_1[6] = ABS((float)param_1[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)(in_ECX + 0x4c) * 0x48);
    param_1[7] = ABS((float)param_1[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)(in_ECX + 0x4c) * 0x48);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x74) * 0x20 + *(int *)(in_ECX + 0x6c));
  for (i = 8; i != 0; i = i + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)(in_ECX + 0x74) = *(int *)(in_ECX + 0x74) + 1;
  return;
}


/* ==== 004ae340 FUN_004ae340 ==== */

int FUN_004ae340(int param_1,int param_2)

{
  int in_ECX;
  
  return (uint)*(ushort *)(*(int *)(in_ECX + 0x60) + (param_1 + param_2) * 2) * 0x20 +
         *(int *)(in_ECX + 0x5c);
}


/* ==== 004ae370 FUN_004ae370 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae370(undefined4 *param_1)

{
  int in_ECX;
  int i;
  undefined4 *puVar1;
  
  if (*(int *)(in_ECX + 0x9c) == 0) {
    param_1[6] = ABS((float)param_1[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)(in_ECX + 0x54) * 0x48);
    param_1[7] = ABS((float)param_1[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)(in_ECX + 0x54) * 0x48);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 100) * 0x20 + *(int *)(in_ECX + 0x5c));
  for (i = 8; i != 0; i = i + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)(in_ECX + 100) = *(int *)(in_ECX + 100) + 1;
  return;
}


/* ==== 004ae3e0 FUN_004ae3e0 ==== */

int FUN_004ae3e0(int param_1,int param_2)

{
  int in_ECX;
  
  return (uint)*(ushort *)(*(int *)(in_ECX + 0x90) + (param_1 + param_2) * 2) * 0x20 +
         *(int *)(in_ECX + 0x8c);
}


/* ==== 004ae410 FUN_004ae410 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae410(undefined4 *param_1)

{
  int in_ECX;
  int i;
  undefined4 *puVar1;
  
  if (*(int *)(in_ECX + 0x9c) == 0) {
    param_1[6] = ABS((float)param_1[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)(in_ECX + 0x58) * 0x48);
    param_1[7] = ABS((float)param_1[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)(in_ECX + 0x58) * 0x48);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x94) * 0x20 + *(int *)(in_ECX + 0x8c));
  for (i = 8; i != 0; i = i + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)(in_ECX + 0x94) = *(int *)(in_ECX + 0x94) + 1;
  return;
}


/* ==== 004ae490 FUN_004ae490 ==== */

void FUN_004ae490(undefined4 param_1)

{
  char local_200 [256];
  char local_100 [256];
  
  FUN_005587a3(local_200,s__s__s_005b058c,param_1,&PTR_DAT_005b0594);
  FUN_004b35f0(local_200);
  FUN_004415e0();
  FUN_005587a3(local_200,s__s__s_005b058c,param_1,&PTR_DAT_005b0588);
  FUN_004aa9d0(local_200);
  FUN_004415e0();
  FUN_005587a3(local_200,s__s__s_005b058c,param_1,&PTR_DAT_005b0584);
  FUN_005587a3(local_100,s__s__s_005b058c,param_1,&PTR_DAT_005b0580);
  FUN_004ae570(local_200,local_100);
  FUN_004415e0();
  FUN_005587a3(local_200,s__s__s_005b058c,param_1,&PTR_DAT_005b057c);
  FUN_004aead0(local_200);
  return;
}


/* ==== 004ae570 FUN_004ae570 ==== */

void FUN_004ae570(char *str2_2,char *str2)

{
  int *piVar1;
  int *piVar2;
  uint size;
  FILE *file;
  FILE *file_00;
  void *operator_new_result;
  int j;
  int k;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int i;
  undefined4 *puVar7;
  uint size_2;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((*(int *)(in_ECX + 0x4c) == -1) || (*(int *)(in_ECX + 0x50) == -1)) ||
     (*(int *)(in_ECX + 0x54) == -1)) {
    FUN_004c4150(s__s__d____Textures_not_set__Canno_005b0634,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x141);
  }
  file = (FILE *)FUN_004c62c0(str2_2);
  file_00 = (FILE *)FUN_004c62c0(str2);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____File_open_failed_for_fi_005b00b4,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x14b,str2_2);
  }
  if (file_00 == (FILE *)0x0) {
    FUN_004c4150(s__s__d_____s___s_____File_open_fa_005b0600,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x150,str2);
  }
  FUN_00558b35(&DAT_00715f54,4,1,file_00);
  if (DAT_00715f54 < 0) {
    FUN_00558b35(&iStack_20,4,1,file_00);
  }
  else {
    iStack_20 = DAT_00715f54;
  }
  FUN_00558b35(&uStack_1c,4,1,file_00);
  FUN_00558b35(&size_2,4,1,file);
  if (uStack_1c != size_2) {
    FUN_004c4150(s__s__d____Data_chunk_count_does_n_005b05ac,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x163,uStack_1c,size_2);
  }
  FUN_004c3fa0(s_m_chunks_alloc__d_005b0598,size_2);
  size = size_2;
  piVar1 = (int *)(in_ECX + 4);
  i = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_004b1e00();
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,in_ECX + 0x31,in_ECX + 0x18,size)
    ;
  }
  operator_new_result = operator_new(size * 4);
  *piVar1 = (int)operator_new_result;
  *(uint *)(in_ECX + 8) = size;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  operator_new_result = operator_new(size);
  *(void **)(in_ECX + 0x14) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,in_ECX + 0x31,in_ECX + 0x18,
               *(undefined4 *)(in_ECX + 8));
  j = 0;
  *(undefined4 *)(in_ECX + 0x10) = 1;
  if (0 < (int)size) {
    do {
      j = j + 1;
      *(undefined1 *)(*(int *)(in_ECX + 0x14) + -1 + j) = 0;
    } while (j < (int)size);
  }
  FUN_004adef0(size_2 << 4,size_2 * 0x18,size_2 * 0xc,size_2 * 0xc);
  FUN_004ab550(size_2);
  if ((int)size_2 < 1) {
LAB_004ae7f7:
    FUN_004415e0();
    i = 0;
    if (size_2 != 1 && -1 < (int)(size_2 - 1)) {
      do {
        j = *piVar1;
        if (i == 0) {
          iVar5 = *(int *)(j + -4 + size_2 * 4);
        }
        else {
          iVar5 = *(int *)(j + -4 + i * 4);
        }
        puVar6 = (undefined4 *)(DAT_00715f00 + 0x34 + iVar5 * 0x994);
        uStack_18 = *puVar6;
        uStack_14 = puVar6[1];
        uStack_10 = puVar6[2];
        iVar5 = *(int *)(j + 4 + i * 4);
        j = DAT_00715f00 + 0x34 + iVar5 * 0x994;
        uStack_c = *(undefined4 *)(DAT_00715f00 + 0x34 + iVar5 * 0x994);
        uStack_8 = *(undefined4 *)(j + 4);
        uStack_4 = *(undefined4 *)(j + 8);
        FUN_004ad080(&uStack_18,&uStack_c);
        FUN_004ab8a0();
        i = i + 1;
      } while (i < (int)(size_2 - 1));
    }
    j = DAT_00715f00 + i * 0x994;
    uStack_18 = *(undefined4 *)(j + -0x960);
    uStack_14 = *(undefined4 *)(j + -0x95c);
    uStack_10 = *(undefined4 *)(j + -0x958);
    j = DAT_00715f00 + 0x34 + *(int *)*piVar1 * 0x994;
    uStack_c = *(undefined4 *)(DAT_00715f00 + 0x34 + *(int *)*piVar1 * 0x994);
    uStack_8 = *(undefined4 *)(j + 4);
    uStack_4 = *(undefined4 *)(j + 8);
    FUN_004ad080(&uStack_18,&uStack_c);
    FUN_004ab8a0();
    puVar6 = (undefined4 *)(DAT_00715f00 + 0x6c + *(int *)(*piVar1 + -4 + i * 4) * 0x994);
    puVar7 = (undefined4 *)(DAT_00715f00 + 0x6c + *(int *)(*piVar1 + i * 4) * 0x994);
    for (j = 0x10; j != 0; j = j + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(DAT_00715f00 + 0xec + *(int *)(*piVar1 + i * 4) * 0x994) =
         *(undefined4 *)(DAT_00715f00 + 0xec + *(int *)(*piVar1 + -4 + i * 4) * 0x994);
    piVar2 = (int *)(*piVar1 + i * 4);
    puVar6 = (undefined4 *)(DAT_00715f00 + 0x40 + piVar2[-1] * 0x994);
    iVar5 = *piVar2;
    j = DAT_00715f00 + 0x40 + iVar5 * 0x994;
    *(undefined4 *)(DAT_00715f00 + 0x40 + iVar5 * 0x994) = *puVar6;
    *(undefined4 *)(j + 4) = puVar6[1];
    *(undefined4 *)(j + 8) = puVar6[2];
    puVar6 = (undefined4 *)(DAT_00715f00 + 0x4c + *(int *)(*piVar1 + -4 + i * 4) * 0x994);
    iVar5 = *(int *)(*piVar1 + i * 4);
    j = DAT_00715f00 + 0x4c + iVar5 * 0x994;
    *(undefined4 *)(DAT_00715f00 + 0x4c + iVar5 * 0x994) = *puVar6;
    *(undefined4 *)(j + 4) = puVar6[1];
    *(undefined4 *)(j + 8) = puVar6[2];
    puVar6 = (undefined4 *)(DAT_00715f00 + 0x58 + *(int *)(*piVar1 + -4 + i * 4) * 0x994);
    j = *(int *)(*piVar1 + i * 4);
    i = DAT_00715f00 + 0x58 + j * 0x994;
    *(undefined4 *)(DAT_00715f00 + 0x58 + j * 0x994) = *puVar6;
    *(undefined4 *)(i + 4) = puVar6[1];
    *(undefined4 *)(i + 8) = puVar6[2];
    FUN_004415e0();
    FUN_004c6430(file);
    FUN_004c6430(file_00);
    return;
  }
LAB_004ae754:
  if (*(int *)(in_ECX + 0x10) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,in_ECX + 0x18,
                 *(undefined4 *)(in_ECX + 8),in_ECX + 0x31);
  }
  j = *(int *)(in_ECX + 0xc);
  iVar5 = *(int *)(in_ECX + 8);
  if (j < iVar5) {
    iVar4 = *(int *)(in_ECX + 0x14);
    k = j;
    do {
      if (*(char *)(iVar4 + k) == '\0') goto LAB_004ae81a;
      k = k + 1;
    } while (k < iVar5);
  }
  k = 0;
  if (0 < j) {
    iVar4 = *(int *)(in_ECX + 0x14);
    do {
      if (*(char *)(iVar4 + k) == '\0') goto LAB_004ae81a;
      k = k + 1;
    } while (k < j);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,in_ECX + 0x18,iVar5,in_ECX + 0x31);
  goto LAB_004ae7d0;
LAB_004ae81a:
  *(undefined1 *)(iVar4 + k) = 1;
  *(int *)(in_ECX + 0xc) = k;
LAB_004ae7d0:
  j = *piVar1;
  uVar3 = FUN_004ab570(file,file_00);
  *(undefined4 *)(j + i * 4) = uVar3;
  i = i + 1;
  if ((int)size_2 <= i) goto LAB_004ae7f7;
  goto LAB_004ae754;
}


/* ==== 004aead0 FUN_004aead0 ==== */

void FUN_004aead0(char *str2)

{
  char *pcVar1;
  FILE *file;
  int in_ECX;
  int i;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  char acStack_20 [32];
  
  pcVar1 = str2;
  file = (FILE *)FUN_004c62c0(str2);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____File_open_failed_for_fi_005b00b4,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x1b8,pcVar1);
  }
  FUN_00558b35(&str2,4,1,file);
  i = 0;
  if (0 < (int)str2) {
    do {
      FUN_00558b35(&uStack_44,4,1,file);
      FUN_00558b35(&uStack_3c,4,1,file);
      FUN_00558b35(&uStack_38,4,1,file);
      FUN_00558b35(&uStack_34,4,1,file);
      FUN_00558b35(&uStack_30,4,1,file);
      FUN_00558b35(&fStack_2c,4,1,file);
      FUN_00558b35(&fStack_28,4,1,file);
      FUN_00558b35(&fStack_24,4,1,file);
      FUN_00558b35(acStack_20,1,0x20,file);
      FUN_00558b35(&uStack_40,4,1,file);
      FUN_004536e0(uStack_3c,acStack_20,pcVar1,fStack_2c,fStack_28,fStack_24,uStack_38,uStack_34,
                   uStack_30,uStack_40,uStack_44,*(int *)(in_ECX + 0x9c));
      FUN_004c3fa0(s_Currently_loaded_objects___d_of___005b068c,i,str2);
      i = i + 1;
    } while (i < (int)str2);
  }
  FUN_004c6430(file);
  return;
}


/* ==== 004aec50 FUN_004aec50 ==== */

void FUN_004aec50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  iVar1 = FUN_004af520(param_1,param_2,&param_1,&param_2,&local_4,&local_8);
  FUN_004aecd0(param_1,param_2);
  if (iVar1 != 0) {
    FUN_004aecd0(local_4,local_8);
  }
  return;
}


/* ==== 004aecd0 FUN_004aecd0 ==== */

void FUN_004aecd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int i;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_40 [16];
  
  iVar7 = param_1 * 0x994;
  iVar5 = param_2 * 0x994;
  iVar4 = *(int *)(iVar5 + 0x14 + DAT_00715f00) - *(int *)(iVar7 + 0x10 + DAT_00715f00);
  *(int *)(in_ECX + 0xa0) = *(int *)(in_ECX + 0xa0) + iVar4 / 3;
  *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) + iVar4;
  if (0 < iVar4) {
    puVar6 = &DAT_0073b538;
    puVar8 = local_40;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar6 = local_40;
    puVar8 = &DAT_0073b474;
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    i = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (i != 0) {
      uVar2 = FUN_004bb290(i);
      FUN_004c4150(s__s__d_____FOG__error_setting_tra_005912e0,
                   s_______Libs_win3dlib_Include_d3de_005b06ec,0x14,uVar2);
    }
    if (*(int *)(in_ECX + 0x9c) != 0) {
      i = *(int *)(in_ECX + 0x4c);
      iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar3 + 0x60) = i;
      uVar2 = *(undefined4 *)(DAT_0073b1b0 + i * 0x48);
      *(undefined4 *)(iVar3 + 0x58) = 1;
      *(undefined4 *)(iVar3 + 0x48) = uVar2;
      if (*(int *)(iVar3 + 0x5c) == 1) {
        FUN_00440430();
      }
      i = *(int *)(in_ECX + 0x4c);
      if ((DAT_0073b4ec != i) &&
         (DAT_0073b4ec = i,
         i = (**(code **)(*DAT_0073b4b4 + 0x5c))
                       (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + i * 0x48)), i != 0)) {
        uVar2 = FUN_004bb290(i);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_win3dlib_Include_d3de_005b06ec,0x122,uVar2);
      }
    }
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)(in_ECX + 0x6c),
                       *(undefined4 *)(in_ECX + 0x74),*(int *)(in_ECX + 0x70) + unaff_EBX * 2,iVar4,
                       8);
    if (iVar4 != 0) {
      uVar2 = FUN_004bb290(iVar4);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b06c4,
                   s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x21d,uVar2);
    }
  }
  iVar4 = *(int *)(iVar7 + 0x18 + DAT_00715f00);
  i = *(int *)(iVar5 + 0x1c + DAT_00715f00) - iVar4;
  *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) + i;
  *(int *)(in_ECX + 0xa0) = *(int *)(in_ECX + 0xa0) + i / 3;
  if (0 < i) {
    if (*(int *)(in_ECX + 0x9c) != 0) {
      iVar3 = *(int *)(in_ECX + 0x50);
      iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar1 + 0x60) = iVar3;
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48);
      *(undefined4 *)(iVar1 + 0x58) = 1;
      if (*(int *)(iVar1 + 0x5c) == 1) {
        FUN_00440430();
      }
      iVar3 = *(int *)(in_ECX + 0x50);
      if ((DAT_0073b4ec != iVar3) &&
         (DAT_0073b4ec = iVar3,
         iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                           (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48)), iVar3 != 0
         )) {
        uVar2 = FUN_004bb290(iVar3);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_win3dlib_Include_d3de_005b06ec,0x122,uVar2);
      }
    }
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)(in_ECX + 0x7c),
                       *(undefined4 *)(in_ECX + 0x84),*(int *)(in_ECX + 0x80) + iVar4 * 2,i,8);
    if (iVar4 != 0) {
      FUN_004c3f80(0,1);
      FUN_004c3fa0(s_start__d__end__d_005b06b0,param_1,param_2);
      FUN_004c3f80(0,0);
      uVar2 = FUN_004bb290(iVar4);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b06c4,
                   s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x23d,uVar2);
    }
  }
  iVar4 = *(int *)(iVar7 + 0x20 + DAT_00715f00);
  i = *(int *)(iVar5 + 0x24 + DAT_00715f00) - iVar4;
  *(int *)(in_ECX + 0xa0) = *(int *)(in_ECX + 0xa0) + i / 3;
  *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) + i;
  if (0 < i) {
    if (*(int *)(in_ECX + 0x9c) != 0) {
      iVar3 = *(int *)(in_ECX + 0x54);
      iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar1 + 0x60) = iVar3;
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48);
      *(undefined4 *)(iVar1 + 0x58) = 1;
      if (*(int *)(iVar1 + 0x5c) == 1) {
        FUN_00440430();
      }
      iVar3 = *(int *)(in_ECX + 0x54);
      if ((DAT_0073b4ec != iVar3) &&
         (DAT_0073b4ec = iVar3,
         iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                           (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48)), iVar3 != 0
         )) {
        uVar2 = FUN_004bb290(iVar3);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_win3dlib_Include_d3de_005b06ec,0x122,uVar2);
      }
    }
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)(in_ECX + 0x5c),*(undefined4 *)(in_ECX + 100)
                       ,*(int *)(in_ECX + 0x60) + iVar4 * 2,i,8);
    if (iVar4 != 0) {
      uVar2 = FUN_004bb290(iVar4);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b06c4,
                   s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x25c,uVar2);
    }
  }
  iVar4 = *(int *)(iVar7 + 0x28 + DAT_00715f00);
  iVar5 = *(int *)(iVar5 + 0x2c + DAT_00715f00) - iVar4;
  *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) + iVar5;
  *(int *)(in_ECX + 0xa0) = *(int *)(in_ECX + 0xa0) + iVar5 / 3;
  if (0 < iVar5) {
    if (*(int *)(in_ECX + 0x9c) != 0) {
      iVar7 = *(int *)(in_ECX + 0x58);
      i = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(i + 0x60) = iVar7;
      *(undefined4 *)(i + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar7 * 0x48);
      *(undefined4 *)(i + 0x58) = 1;
      if (*(int *)(i + 0x5c) == 1) {
        *(undefined4 *)(i + 0x58) = 0;
        (**(code **)(**(int **)(i + 0x54) + 0xc))(*(int **)(i + 0x54),i);
      }
      iVar7 = *(int *)(in_ECX + 0x58);
      if ((DAT_0073b4ec != iVar7) &&
         (DAT_0073b4ec = iVar7,
         iVar7 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                           (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar7 * 0x48)), iVar7 != 0
         )) {
        uVar2 = FUN_004bb290(iVar7);
        FUN_004c4150(s__s__d_____TEXTURE__error_setting_0059be94,
                     s_______Libs_win3dlib_Include_d3de_005b06ec,0x122,uVar2);
      }
    }
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x78))
                      (DAT_0073b4b4,4,2,*(undefined4 *)(in_ECX + 0x8c),
                       *(undefined4 *)(in_ECX + 0x94),*(int *)(in_ECX + 0x90) + iVar4 * 2,iVar5,1);
    if (iVar4 != 0) {
      uVar2 = FUN_004bb290(iVar4);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b06c4,
                   s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x27b,uVar2);
    }
  }
  return;
}


/* ==== 004af230 FUN_004af230 ==== */

int FUN_004af230(int param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(in_ECX + 8);
  if ((param_1 < 0) || (iVar2 < param_1)) {
    FUN_004c4150(s__s__d____Illegal_start_chunk___d_005b0714,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x2be,param_1);
  }
  piVar4 = *(int **)(in_ECX + 4);
  piVar3 = piVar4 + param_1;
  iVar1 = DAT_00715f00 + piVar4[param_1] * 0x994;
  if ((param_2 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
      (param_4 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) <= 0.0) {
    for (; param_1 < iVar2; param_1 = param_1 + 1) {
      iVar1 = DAT_00715f00 + *piVar3 * 0x994;
      if (0.0 < (param_2 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
                (param_4 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40)) goto LAB_004af500;
      piVar3 = piVar3 + 1;
    }
  }
  else {
    for (; -1 < param_1; param_1 = param_1 + -1) {
      iVar1 = DAT_00715f00 + *piVar3 * 0x994;
      if ((param_2 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
          (param_4 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) < 0.0) {
        return param_1;
      }
      piVar3 = piVar3 + -1;
    }
  }
  if (param_1 == 0) {
    param_1 = iVar2 + -1;
    if (-1 < param_1) {
      piVar4 = piVar4 + param_1;
      do {
        iVar2 = DAT_00715f00 + *piVar4 * 0x994;
        if ((param_2 - *(float *)(iVar2 + 0x34)) * *(float *)(iVar2 + 0x48) -
            (param_4 - *(float *)(iVar2 + 0x3c)) * *(float *)(iVar2 + 0x40) < 0.0) {
          return param_1;
        }
        param_1 = param_1 + -1;
        piVar4 = piVar4 + -1;
      } while (-1 < param_1);
    }
  }
  else {
    param_1 = 0;
    if (0 < iVar2) {
      while (iVar1 = DAT_00715f00 + *piVar4 * 0x994,
            (param_2 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
            (param_4 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) <= 0.0) {
        param_1 = param_1 + 1;
        piVar4 = piVar4 + 1;
        if (iVar2 <= param_1) {
          return param_1;
        }
      }
LAB_004af500:
      param_1 = param_1 + -1;
      if (param_1 == -1) {
        return iVar2 + -1;
      }
    }
  }
  return param_1;
}


/* ==== 004af520 FUN_004af520 ==== */

bool FUN_004af520(int param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5,int *param_6
                 )

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00715f04;
  if ((param_1 < 0) || (DAT_00715f04 < param_1)) {
    FUN_004c4150(s__calc_start_and_end_chunk__illeg_005b0738,param_1);
  }
  iVar3 = iVar2 + 1;
  iVar4 = param_1;
  if (param_1 < 0) {
    iVar4 = 0;
  }
  if (iVar2 <= iVar4) {
    iVar4 = iVar2 + -1;
  }
  param_2 = param_2 + param_1;
  if (param_2 < 0) {
    param_2 = 0;
  }
  bVar1 = iVar2 <= param_2;
  if (bVar1) {
    iVar3 = param_2 - iVar2;
    param_2 = iVar2 + -1;
  }
  *param_3 = iVar4;
  *param_4 = param_2;
  *param_5 = 0;
  *param_6 = iVar3;
  return bVar1;
}


