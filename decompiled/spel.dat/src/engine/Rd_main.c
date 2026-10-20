/* spel.dat — engine/Rd_main.cpp: 35 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ad080 FUN_004ad080 ==== */

void __thiscall FUN_004ad080(void *this,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int i;
  float10 fVar4;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)((int)this + 0x40);
  local_8 = 0.0;
  local_c = -(*(float *)((int)this + 0x3c) - param_3[2]) +
            -(param_2[2] - *(float *)((int)this + 0x3c));
  local_4 = (*param_2 - *(float *)((int)this + 0x34)) + (*(float *)((int)this + 0x34) - *param_3);
  *pfVar1 = local_c;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(float *)((int)this + 0x48) = local_4;
  *(undefined4 *)((int)this + 0x44) = 0;
  fVar4 = (float10)FUN_0041e120(pfVar1);
  fVar4 = SQRT(fVar4);
  pfVar2 = (float *)FUN_004066c0(&local_c,(float)((float10)*pfVar1 / fVar4),
                                 (float)((float10)*(float *)((int)this + 0x44) / fVar4),
                                 (float)((float10)*(float *)((int)this + 0x48) / fVar4));
  *pfVar1 = *pfVar2;
  *(float *)((int)this + 0x44) = pfVar2[1];
  *(float *)((int)this + 0x48) = pfVar2[2];
  local_c = *param_3 - *(float *)((int)this + 0x34);
  local_8 = param_3[1] - *(float *)((int)this + 0x38);
  local_4 = param_3[2] - *(float *)((int)this + 0x3c);
  pfVar2 = (float *)((int)this + 0x58);
  *pfVar2 = local_c;
  *(float *)((int)this + 0x5c) = local_8;
  *(float *)((int)this + 0x60) = local_4;
  fVar4 = (float10)FUN_0041e120(pfVar2);
  fVar4 = SQRT(fVar4);
  pfVar3 = (float *)FUN_004066c0(&local_c,(float)((float10)*pfVar2 / fVar4),
                                 (float)((float10)*(float *)((int)this + 0x5c) / fVar4),
                                 (float)((float10)*(float *)((int)this + 0x60) / fVar4));
  *pfVar2 = *pfVar3;
  *(float *)((int)this + 0x5c) = pfVar3[1];
  *(float *)((int)this + 0x60) = pfVar3[2];
  local_c = *(float *)((int)this + 0x48) * *(float *)((int)this + 0x5c) -
            *(float *)((int)this + 0x44) * *(float *)((int)this + 0x60);
  local_8 = *(float *)((int)this + 0x60) * *pfVar1 - *(float *)((int)this + 0x48) * *pfVar2;
  pfVar3 = (float *)((int)this + 0x4c);
  local_4 = *(float *)((int)this + 0x44) * *pfVar2 - *(float *)((int)this + 0x5c) * *pfVar1;
  *pfVar3 = local_c;
  *(float *)((int)this + 0x50) = local_8;
  *(float *)((int)this + 0x54) = local_4;
  fVar4 = (float10)FUN_0041e120(pfVar3);
  fVar4 = SQRT(fVar4);
  pfVar2 = (float *)FUN_004066c0(&local_c,(float)((float10)*pfVar3 / fVar4),
                                 (float)((float10)*(float *)((int)this + 0x50) / fVar4),
                                 (float)((float10)*(float *)((int)this + 0x54) / fVar4));
  *pfVar3 = *pfVar2;
  *(float *)((int)this + 0x50) = pfVar2[1];
  *(float *)((int)this + 0x54) = pfVar2[2];
  *(float *)((int)this + 0xec) =
       *pfVar3 * *(float *)((int)this + 0x34) +
       *(float *)((int)this + 0x38) * *(float *)((int)this + 0x50) +
       *(float *)((int)this + 0x54) * *(float *)((int)this + 0x3c);
  pfVar2 = (float *)&DAT_0073b538;
  pfVar3 = (float *)((int)this + 0x6c);
  for (i = 0x10; i != 0; i = i + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  *(float *)((int)this + 0x6c) = *pfVar1;
  *(float *)((int)this + 0x70) = *pfVar1;
  *(float *)((int)this + 0x74) = *pfVar1;
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0x60);
  return;
}


/* ==== 004ad2b0 FUN_004ad2b0 ==== */

undefined4 __thiscall FUN_004ad2b0(undefined4 param_1,float *param_2,int param_3)

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
  
  fVar1 = (*(float **)(param_3 + 8))[2];
  i = 0;
  if (*param_2 < **(float **)(param_3 + 8)) {
    if (param_2[2] < fVar1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 3;
    }
  }
  else if (param_2[2] < fVar1) {
    uVar6 = 1;
  }
  else {
    uVar6 = 2;
  }
  iVar5 = 8;
  iVar7 = 0;
  do {
    pfVar2 = *(float **)(iVar7 + param_3);
    if (*param_2 < *pfVar2) {
      if (param_2[2] < pfVar2[2]) {
        uVar4 = 0;
      }
      else {
        uVar4 = 3;
      }
    }
    else if (param_2[2] < pfVar2[2]) {
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
        pfVar3 = *(float **)(param_3 + iVar5);
        if (0.0 < (param_2[2] - pfVar3[2]) * (*pfVar2 - *pfVar3) -
                  (*param_2 - *pfVar3) * (pfVar2[2] - pfVar3[2])) {
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

void __thiscall
FUN_004ad3d0(void *this,float *param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 *param_6,int *param_7)

{
  int iVar1;
  char cVar2;
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
  iVar1 = *(int *)((int)this + 0x1c);
  iVar3 = *(int *)((int)this + 0x18);
  local_c = param_2;
  local_8 = 0;
  local_4 = param_4;
  if (iVar3 < iVar1) {
    param_2 = (float *)((int)this + 0x398);
    do {
      local_18 = FUN_004ae1f0(DAT_00715f50,iVar3,0);
      local_14 = FUN_004ae1f0(DAT_00715f50,iVar3,1);
      local_10 = FUN_004ae1f0(DAT_00715f50,iVar3,2);
      cVar2 = FUN_004ad2b0(&local_c,&local_c,&local_18);
      if ((cVar2 == '\x01') && (0.4 < *param_2)) {
        *param_5 = iVar3;
        *param_6 = 0;
        *param_7 = i;
        return;
      }
      iVar3 = iVar3 + 3;
      i = i + 1;
      param_2 = param_2 + 3;
    } while (iVar3 < iVar1);
  }
  iVar1 = *(int *)((int)this + 0x14);
  iVar3 = *(int *)((int)this + 0x10);
  i = 0;
  if (iVar3 < iVar1) {
    param_2 = (float *)((int)this + 0x198);
    do {
      local_18 = FUN_004ae2a0(DAT_00715f50,iVar3,0);
      local_14 = FUN_004ae2a0(DAT_00715f50,iVar3,1);
      local_10 = FUN_004ae2a0(DAT_00715f50,iVar3,2);
      cVar2 = FUN_004ad2b0(&local_18,&local_c,&local_18);
      if ((cVar2 == '\x01') && (0.4 < *param_2)) {
        *param_5 = iVar3;
        *param_6 = 1;
        *param_7 = i;
        FUN_004c3fa0(s_Found_road_plane___d__d_005b0504,*param_5,i);
        return;
      }
      iVar3 = iVar3 + 3;
      i = i + 1;
      param_2 = param_2 + 3;
    } while (iVar3 < iVar1);
  }
  iVar1 = *(int *)((int)this + 0x2c);
  iVar3 = *(int *)((int)this + 0x28);
  i = 0;
  if (iVar3 < iVar1) {
    pfVar4 = (float *)((int)this + 0x818);
    do {
      local_18 = FUN_004ae3e0(DAT_00715f50,iVar3,0);
      local_14 = FUN_004ae3e0(DAT_00715f50,iVar3,1);
      local_10 = FUN_004ae3e0(DAT_00715f50,iVar3,2);
      cVar2 = FUN_004ad2b0(&local_18,&local_c,&local_18);
      if ((cVar2 == '\x01') && (0.4 < *pfVar4)) {
        *param_5 = iVar3;
        *param_6 = 2;
        *param_7 = i;
        FUN_004c3fa0(s_Found_extra_plane___d__d_005b04e8,*param_5,i);
        return;
      }
      iVar3 = iVar3 + 3;
      i = i + 1;
      pfVar4 = pfVar4 + 3;
    } while (iVar3 < iVar1);
  }
  *param_5 = -1;
  *param_6 = 0xffffffff;
  *param_7 = -1;
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
    iVar1 = FUN_004ae1f0(DAT_00715f50,param_2,2);
    return *(undefined4 *)(iVar1 + 0x10);
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0xffffff;
    }
    iVar1 = FUN_004ae3e0(DAT_00715f50,param_2,2);
    return *(undefined4 *)(iVar1 + 0x10);
  }
  iVar1 = FUN_004ae2a0(DAT_00715f50,param_2,2);
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

uint __thiscall FUN_004ad7e0(void *this,int param_1,uint param_2,undefined4 this_val)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 * 3;
  uVar2 = param_2;
  switch(param_2) {
  case 0:
    uVar2 = *(uint *)((int)this + 0x10);
    if ((int)(*(int *)((int)this + 0x14) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    uVar1 = FUN_004ae2a0(DAT_00715f50,iVar3,0);
    FUN_004af780(0,uVar1);
    uVar1 = FUN_004ae2a0(DAT_00715f50,iVar3,1);
    FUN_004af780(1,uVar1);
    uVar1 = FUN_004ae2a0(DAT_00715f50,iVar3,2);
    FUN_004af780(2,uVar1);
    FUN_004af7a0((int)this + param_1 * 0xc + 0x194);
    FUN_004af7c0(this_val,*(undefined4 *)((int)this + param_1 * 4 + 0x314));
    goto LAB_004ad99c;
  case 1:
    uVar2 = *(uint *)((int)this + 0x18);
    if ((int)(*(int *)((int)this + 0x1c) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    uVar1 = FUN_004ae1f0(DAT_00715f50,iVar3,0);
    FUN_004af780(0,uVar1);
    uVar1 = FUN_004ae1f0(DAT_00715f50,iVar3,1);
    FUN_004af780(1,uVar1);
    uVar1 = FUN_004ae1f0(DAT_00715f50,iVar3,2);
    break;
  case 2:
    uVar2 = *(uint *)((int)this + 0x28);
    if ((int)(*(int *)((int)this + 0x2c) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    uVar1 = FUN_004ae3e0(DAT_00715f50,iVar3,0);
    FUN_004af780(0,uVar1);
    uVar1 = FUN_004ae3e0(DAT_00715f50,iVar3,1);
    FUN_004af780(1,uVar1);
    uVar1 = FUN_004ae3e0(DAT_00715f50,iVar3,2);
    break;
  case 3:
    uVar2 = *(uint *)((int)this + 0x20);
    if ((int)(*(int *)((int)this + 0x24) - uVar2) < iVar3) goto switchD_004ad7fb_default;
    iVar3 = iVar3 + uVar2;
    uVar1 = FUN_004ae340(DAT_00715f50,iVar3,0);
    FUN_004af780(0,uVar1);
    uVar1 = FUN_004ae340(DAT_00715f50,iVar3,1);
    FUN_004af780(1,uVar1);
    uVar1 = FUN_004ae340(DAT_00715f50,iVar3,2);
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
  FUN_004ad3d0(DAT_00715f00 + iVar1 * 0x994,param_3,param_4,param_5,param_6,param_7,param_8);
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
    FUN_004ad3d0(DAT_00715f00 + iVar1 * 0x994,param_3,param_4,param_5,param_6,param_7,param_8);
    j = j + 1;
    i = -i;
  } while (*param_6 == -1);
  *param_1 = iVar1;
  return;
}


/* ==== 004adbe0 FUN_004adbe0 ==== */

void __thiscall FUN_004adbe0(void *this,uint size)

{
  uint *operator_new_result;
  void *operator_new_result_2;
  int iVar1;
  int iVar2;
  uint *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056f4fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    if (*(int *)((int)this + 0xc) == 1) {
      ExceptionList = &pvStack_c;
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x2d,(int)this + 0x14,
                   *(undefined4 *)((int)this + 4));
      iVar1 = *(int *)this;
      if (iVar1 != 0) {
        FUN_005586c5(iVar1,0x994,*(undefined4 *)(iVar1 + -4),FUN_004ab690);
        FUN_0054b339(iVar1 + -4);
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,(int)this + 0x2d,(int)this + 0x14
                 ,size);
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
  *(uint **)this = puVar3;
  *(uint *)((int)this + 4) = size;
  *(undefined4 *)((int)this + 8) = 0;
  operator_new_result_2 = operator_new(size);
  *(void **)((int)this + 0x10) = operator_new_result_2;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)this + 0x2d,(int)this + 0x14,
               *(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0xc) = 1;
  iVar1 = 0;
  if (0 < (int)size) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + *(int *)((int)this + 0x10)) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)size);
  }
  ExceptionList = pvStack_c;
  return;
}


/* ==== 004addd0 FUN_004addd0 ==== */

void * __thiscall FUN_004addd0(void *this)

{
  char *_Dest;
  char *_Dest_00;
  
  _Dest = (char *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x10) = 0;
  _strncpy(_Dest,s_m_chunks_005b0570,0x19);
  _Dest_00 = (char *)((int)this + 0x31);
  _strncpy(_Dest_00,(char *)&PTR_DAT_005b056c,0x19);
  if (*(int *)((int)this + 0x10) != 0) {
    if (*(int *)((int)this + 0x10) == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,_Dest_00,_Dest,
                   *(undefined4 *)((int)this + 8));
      FUN_0054b339(*(undefined4 *)((int)this + 4));
    }
    if (*(int *)((int)this + 0x10) != 0) {
      FUN_0054b339(*(undefined4 *)((int)this + 0x14));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,_Dest_00,_Dest,0);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return this;
}


/* ==== 004ade90 FUN_004ade90 ==== */

void __thiscall FUN_004ade90(void *this)

{
  if (*(int *)((int)this + 0x10) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x31,(int)this + 0x18,
                 *(undefined4 *)((int)this + 8));
    FUN_0054b339(*(undefined4 *)((int)this + 4));
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


/* ==== 004adef0 FUN_004adef0 ==== */

void __thiscall FUN_004adef0(void *this,int param_2,int param_3,int param_4,int param_5)

{
  void *operator_new_result;
  
  operator_new_result = operator_new(param_4 << 7);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)((int)this + 0x5c) = operator_new_result;
  operator_new_result = operator_new(param_3 << 7);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)((int)this + 0x7c) = operator_new_result;
  operator_new_result = operator_new(param_2 << 7);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)((int)this + 0x6c) = operator_new_result;
  operator_new_result = operator_new(param_5 << 7);
  if (operator_new_result == (void *)0x0) {
    operator_new_result = (void *)0x0;
  }
  *(void **)((int)this + 0x8c) = operator_new_result;
  operator_new_result = operator_new(param_4 * 0x18);
  *(void **)((int)this + 0x60) = operator_new_result;
  operator_new_result = operator_new(param_5 * 0xc);
  *(void **)((int)this + 0x90) = operator_new_result;
  operator_new_result = operator_new(param_3 * 0xc);
  *(void **)((int)this + 0x80) = operator_new_result;
  operator_new_result = operator_new(param_2 * 0xc);
  *(void **)((int)this + 0x70) = operator_new_result;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  DAT_00715f50 = this;
  return;
}


/* ==== 004ae030 FUN_004ae030 ==== */

undefined4 __thiscall FUN_004ae030(void *this)

{
  return *(undefined4 *)((int)this + 0x78);
}


/* ==== 004ae040 FUN_004ae040 ==== */

void __thiscall FUN_004ae040(void *this,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)((int)this + 0x70) + *(int *)((int)this + 0x78) * 2) = param_2;
  iVar1 = *(int *)((int)this + 0x78) + 1;
  *(int *)((int)this + 0x78) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x70) + iVar1 * 2) = param_3;
  iVar1 = *(int *)((int)this + 0x78) + 1;
  *(int *)((int)this + 0x78) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x70) + iVar1 * 2) = param_4;
  *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
  return;
}


/* ==== 004ae090 FUN_004ae090 ==== */

undefined4 __thiscall FUN_004ae090(void *this)

{
  return *(undefined4 *)((int)this + 0x88);
}


/* ==== 004ae0a0 FUN_004ae0a0 ==== */

void __thiscall FUN_004ae0a0(void *this,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)((int)this + 0x80) + *(int *)((int)this + 0x88) * 2) = param_2;
  iVar1 = *(int *)((int)this + 0x88) + 1;
  *(int *)((int)this + 0x88) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x80) + iVar1 * 2) = param_3;
  iVar1 = *(int *)((int)this + 0x88) + 1;
  *(int *)((int)this + 0x88) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x80) + iVar1 * 2) = param_4;
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 1;
  return;
}


/* ==== 004ae110 FUN_004ae110 ==== */

undefined4 __thiscall FUN_004ae110(void *this)

{
  return *(undefined4 *)((int)this + 0x68);
}


/* ==== 004ae120 FUN_004ae120 ==== */

void __thiscall FUN_004ae120(void *this,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)((int)this + 0x60) + *(int *)((int)this + 0x68) * 2) = param_2;
  iVar1 = *(int *)((int)this + 0x68) + 1;
  *(int *)((int)this + 0x68) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x60) + iVar1 * 2) = param_3;
  iVar1 = *(int *)((int)this + 0x68) + 1;
  *(int *)((int)this + 0x68) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x60) + iVar1 * 2) = param_4;
  *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 1;
  return;
}


/* ==== 004ae170 FUN_004ae170 ==== */

undefined4 __thiscall FUN_004ae170(void *this)

{
  return *(undefined4 *)((int)this + 0x98);
}


/* ==== 004ae180 FUN_004ae180 ==== */

void __thiscall FUN_004ae180(void *this,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)((int)this + 0x90) + *(int *)((int)this + 0x98) * 2) = param_2;
  iVar1 = *(int *)((int)this + 0x98) + 1;
  *(int *)((int)this + 0x98) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x90) + iVar1 * 2) = param_3;
  iVar1 = *(int *)((int)this + 0x98) + 1;
  *(int *)((int)this + 0x98) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x90) + iVar1 * 2) = param_4;
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
  return;
}


/* ==== 004ae1f0 FUN_004ae1f0 ==== */

int __thiscall FUN_004ae1f0(void *this,int param_2,int param_3)

{
  return (uint)*(ushort *)(*(int *)((int)this + 0x80) + (param_2 + param_3) * 2) * 0x20 +
         *(int *)((int)this + 0x7c);
}


/* ==== 004ae220 FUN_004ae220 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ae220(void *this,undefined4 *param_2)

{
  int i;
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    param_2[6] = ABS((float)param_2[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)((int)this + 0x50) * 0x48);
    param_2[7] = ABS((float)param_2[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)((int)this + 0x50) * 0x48);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x84) * 0x20 + *(int *)((int)this + 0x7c));
  for (i = 8; i != 0; i = i + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + 1;
  return;
}


/* ==== 004ae2a0 FUN_004ae2a0 ==== */

int __thiscall FUN_004ae2a0(void *this,int param_2,int param_3)

{
  return (uint)*(ushort *)(*(int *)((int)this + 0x70) + (param_2 + param_3) * 2) * 0x20 +
         *(int *)((int)this + 0x6c);
}


/* ==== 004ae2d0 FUN_004ae2d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ae2d0(void *this,undefined4 *param_2)

{
  int i;
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    param_2[6] = ABS((float)param_2[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)((int)this + 0x4c) * 0x48);
    param_2[7] = ABS((float)param_2[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)((int)this + 0x4c) * 0x48);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x74) * 0x20 + *(int *)((int)this + 0x6c));
  for (i = 8; i != 0; i = i + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + 1;
  return;
}


/* ==== 004ae340 FUN_004ae340 ==== */

int __thiscall FUN_004ae340(void *this,int param_2,int param_3)

{
  return (uint)*(ushort *)(*(int *)((int)this + 0x60) + (param_2 + param_3) * 2) * 0x20 +
         *(int *)((int)this + 0x5c);
}


/* ==== 004ae370 FUN_004ae370 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ae370(void *this,undefined4 *param_2)

{
  int i;
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    param_2[6] = ABS((float)param_2[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)((int)this + 0x54) * 0x48);
    param_2[7] = ABS((float)param_2[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)((int)this + 0x54) * 0x48);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 100) * 0x20 + *(int *)((int)this + 0x5c));
  for (i = 8; i != 0; i = i + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)((int)this + 100) = *(int *)((int)this + 100) + 1;
  return;
}


/* ==== 004ae3e0 FUN_004ae3e0 ==== */

int __thiscall FUN_004ae3e0(void *this,int param_2,int param_3)

{
  return (uint)*(ushort *)(*(int *)((int)this + 0x90) + (param_2 + param_3) * 2) * 0x20 +
         *(int *)((int)this + 0x8c);
}


/* ==== 004ae410 FUN_004ae410 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ae410(void *this,undefined4 *param_2)

{
  int i;
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    param_2[6] = ABS((float)param_2[6]) * _DAT_0073b200 +
                 *(float *)(DAT_0073b1b0 + 0x34 + *(int *)((int)this + 0x58) * 0x48);
    param_2[7] = ABS((float)param_2[7]) * _DAT_0073b204 +
                 *(float *)(DAT_0073b1b0 + 0x38 + *(int *)((int)this + 0x58) * 0x48);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x94) * 0x20 + *(int *)((int)this + 0x8c));
  for (i = 8; i != 0; i = i + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + 1;
  return;
}


/* ==== 004ae490 FUN_004ae490 ==== */

void __thiscall FUN_004ae490(void *this,undefined4 param_2)

{
  char local_200 [256];
  char local_100 [256];
  
  FUN_005587a3(local_200,s__s__s_005b058c,param_2,&PTR_DAT_005b0594);
  FUN_004b35f0(local_200);
  FUN_004415e0();
  FUN_005587a3(local_200,s__s__s_005b058c,param_2,&PTR_DAT_005b0588);
  FUN_004aa9d0(local_200);
  FUN_004415e0();
  FUN_005587a3(local_200,s__s__s_005b058c,param_2,&PTR_DAT_005b0584);
  FUN_005587a3(local_100,s__s__s_005b058c,param_2,&PTR_DAT_005b0580);
  FUN_004ae570(this,local_200,local_100);
  FUN_004415e0();
  FUN_005587a3(local_200,s__s__s_005b058c,param_2,&PTR_DAT_005b057c);
  FUN_004aead0(this,local_200);
  return;
}


/* ==== 004ae570 FUN_004ae570 ==== */

void __thiscall FUN_004ae570(void *this,char *str2,char *str2_2)

{
  int *piVar1;
  FILE *file;
  FILE *file_00;
  void *operator_new_result;
  int j;
  int k;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int i;
  undefined4 *puVar6;
  uint size;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  int *this_val;
  
  if (((*(int *)((int)this + 0x4c) == -1) || (*(int *)((int)this + 0x50) == -1)) ||
     (*(int *)((int)this + 0x54) == -1)) {
    FUN_004c4150(s__s__d____Textures_not_set__Canno_005b0634,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x141);
  }
  file = (FILE *)FUN_004c62c0(str2);
  file_00 = (FILE *)FUN_004c62c0(str2_2);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____File_open_failed_for_fi_005b00b4,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x14b,str2);
  }
  if (file_00 == (FILE *)0x0) {
    FUN_004c4150(s__s__d_____s___s_____File_open_fa_005b0600,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x150,str2_2);
  }
  FUN_00558b35();
  if (DAT_00715f54 < 0) {
    FUN_00558b35();
  }
  FUN_00558b35(&uStack_1c,&uStack_1c,4,1,file_00);
  FUN_00558b35();
  if (uStack_1c != size) {
    FUN_004c4150(s__s__d____Data_chunk_count_does_n_005b05ac,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x163,uStack_1c,size);
  }
  FUN_004c3fa0(s_m_chunks_alloc__d_005b0598,size);
  this_val = (int *)((int)this + 4);
  i = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_004b1e00(this_val);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,(int)this + 0x31,(int)this + 0x18
                 ,size);
  }
  operator_new_result = operator_new(size * 4);
  *this_val = (int)operator_new_result;
  *(uint *)((int)this + 8) = size;
  *(undefined4 *)((int)this + 0xc) = 0;
  operator_new_result = operator_new(size);
  *(void **)((int)this + 0x14) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)this + 0x31,(int)this + 0x18,
               *(undefined4 *)((int)this + 8));
  j = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  if (0 < (int)size) {
    do {
      j = j + 1;
      *(undefined1 *)(*(int *)((int)this + 0x14) + -1 + j) = 0;
    } while (j < (int)size);
  }
  FUN_004adef0(this,size << 4,size * 0x18,size * 0xc,size * 0xc);
  FUN_004ab550(size);
  if ((int)size < 1) {
LAB_004ae7f7:
    FUN_004415e0();
    i = 0;
    if (size != 1 && -1 < (int)(size - 1)) {
      do {
        j = *this_val;
        if (i == 0) {
          iVar4 = *(int *)(j + -4 + size * 4);
        }
        else {
          iVar4 = *(int *)(j + -4 + i * 4);
        }
        puVar5 = (undefined4 *)(DAT_00715f00 + 0x34 + iVar4 * 0x994);
        uStack_18 = *puVar5;
        uStack_14 = puVar5[1];
        uStack_10 = puVar5[2];
        iVar4 = *(int *)(j + 4 + i * 4);
        j = DAT_00715f00 + 0x34 + iVar4 * 0x994;
        uStack_c = *(undefined4 *)(DAT_00715f00 + 0x34 + iVar4 * 0x994);
        uStack_8 = *(undefined4 *)(j + 4);
        uStack_4 = *(undefined4 *)(j + 8);
        FUN_004ad080(DAT_00715f00 + i * 0x994,&uStack_18,&uStack_c);
        FUN_004ab8a0(DAT_00715f00 + *(int *)(*this_val + i * 4) * 0x994);
        i = i + 1;
      } while (i < (int)(size - 1));
    }
    j = DAT_00715f00 + i * 0x994;
    uStack_18 = *(undefined4 *)(j + -0x960);
    uStack_14 = *(undefined4 *)(j + -0x95c);
    uStack_10 = *(undefined4 *)(j + -0x958);
    iVar4 = DAT_00715f00 + 0x34 + *(int *)*this_val * 0x994;
    uStack_c = *(undefined4 *)(DAT_00715f00 + 0x34 + *(int *)*this_val * 0x994);
    uStack_8 = *(undefined4 *)(iVar4 + 4);
    uStack_4 = *(undefined4 *)(iVar4 + 8);
    FUN_004ad080(j,&uStack_18,&uStack_c);
    FUN_004ab8a0(DAT_00715f00 + *(int *)(*this_val + i * 4) * 0x994);
    puVar5 = (undefined4 *)(DAT_00715f00 + 0x6c + *(int *)(*this_val + -4 + i * 4) * 0x994);
    puVar6 = (undefined4 *)(DAT_00715f00 + 0x6c + *(int *)(*this_val + i * 4) * 0x994);
    for (j = 0x10; j != 0; j = j + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(DAT_00715f00 + 0xec + *(int *)(*this_val + i * 4) * 0x994) =
         *(undefined4 *)(DAT_00715f00 + 0xec + *(int *)(*this_val + -4 + i * 4) * 0x994);
    piVar1 = (int *)(*this_val + i * 4);
    puVar5 = (undefined4 *)(DAT_00715f00 + 0x40 + piVar1[-1] * 0x994);
    iVar4 = *piVar1;
    j = DAT_00715f00 + 0x40 + iVar4 * 0x994;
    *(undefined4 *)(DAT_00715f00 + 0x40 + iVar4 * 0x994) = *puVar5;
    *(undefined4 *)(j + 4) = puVar5[1];
    *(undefined4 *)(j + 8) = puVar5[2];
    puVar5 = (undefined4 *)(DAT_00715f00 + 0x4c + *(int *)(*this_val + -4 + i * 4) * 0x994);
    iVar4 = *(int *)(*this_val + i * 4);
    j = DAT_00715f00 + 0x4c + iVar4 * 0x994;
    *(undefined4 *)(DAT_00715f00 + 0x4c + iVar4 * 0x994) = *puVar5;
    *(undefined4 *)(j + 4) = puVar5[1];
    *(undefined4 *)(j + 8) = puVar5[2];
    puVar5 = (undefined4 *)(DAT_00715f00 + 0x58 + *(int *)(*this_val + -4 + i * 4) * 0x994);
    j = *(int *)(*this_val + i * 4);
    i = DAT_00715f00 + 0x58 + j * 0x994;
    *(undefined4 *)(DAT_00715f00 + 0x58 + j * 0x994) = *puVar5;
    *(undefined4 *)(i + 4) = puVar5[1];
    *(undefined4 *)(i + 8) = puVar5[2];
    FUN_004415e0();
    FUN_004c6430(file);
    FUN_004c6430(file_00);
    return;
  }
LAB_004ae754:
  if (*(int *)((int)this + 0x10) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,(int)this + 0x18,
                 *(undefined4 *)((int)this + 8),(int)this + 0x31);
  }
  j = *(int *)((int)this + 0xc);
  iVar4 = *(int *)((int)this + 8);
  if (j < iVar4) {
    iVar3 = *(int *)((int)this + 0x14);
    k = j;
    do {
      if (*(char *)(iVar3 + k) == '\0') goto LAB_004ae81a;
      k = k + 1;
    } while (k < iVar4);
  }
  k = 0;
  if (0 < j) {
    iVar3 = *(int *)((int)this + 0x14);
    do {
      if (*(char *)(iVar3 + k) == '\0') goto LAB_004ae81a;
      k = k + 1;
    } while (k < j);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,(int)this + 0x18,iVar4,
               (int)this + 0x31);
  goto LAB_004ae7d0;
LAB_004ae81a:
  *(undefined1 *)(iVar3 + k) = 1;
  *(int *)((int)this + 0xc) = k;
LAB_004ae7d0:
  j = *this_val;
  uVar2 = FUN_004ab570(file,file_00);
  *(undefined4 *)(j + i * 4) = uVar2;
  i = i + 1;
  if ((int)size <= i) goto LAB_004ae7f7;
  goto LAB_004ae754;
}


/* ==== 004aead0 FUN_004aead0 ==== */

void __thiscall FUN_004aead0(void *this,char *str2)

{
  FILE *file;
  int i;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FILE *pFVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FILE *pFVar9;
  char *pcVar10;
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
  
  file = (FILE *)FUN_004c62c0(str2);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____File_open_failed_for_fi_005b00b4,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x1b8,str2);
  }
  FUN_00558b35();
  i = 0;
  if (0 < (int)str2) {
    do {
      FUN_00558b35(&uStack_44,&uStack_44,4,1,file);
      uVar8 = 1;
      puVar5 = &uStack_3c;
      uVar7 = 4;
      pFVar9 = file;
      FUN_00558b35();
      uVar3 = 1;
      puVar1 = &uStack_38;
      uVar2 = 4;
      pFVar4 = file;
      FUN_00558b35();
      FUN_00558b35(&uStack_34,&uStack_34,4,1,file,puVar1,uVar2,uVar3,pFVar4,puVar5,uVar7,uVar8,
                   pFVar9);
      puVar5 = &uStack_30;
      uVar8 = 1;
      uVar7 = 4;
      pFVar9 = file;
      FUN_00558b35();
      uVar3 = 1;
      pfVar6 = &fStack_2c;
      uVar2 = 4;
      pFVar4 = file;
      FUN_00558b35();
      FUN_00558b35(&fStack_28,&fStack_28,4,1,file,pfVar6,uVar2,uVar3,pFVar4,puVar5,uVar7,uVar8,
                   pFVar9);
      FUN_00558b35();
      pcVar10 = acStack_20;
      uVar3 = 0x20;
      uVar2 = 1;
      pFVar4 = file;
      FUN_00558b35();
      FUN_00558b35(&uStack_40,&uStack_40,4,1,file,pcVar10,uVar2,uVar3,pFVar4);
      FUN_004536e0(uStack_3c,acStack_20,str2,fStack_2c,fStack_28,fStack_24,uStack_38,uStack_34,
                   uStack_30,uStack_40,uStack_44,*(int *)((int)this + 0x9c));
      FUN_004c3fa0(s_Currently_loaded_objects___d_of___005b068c,i,str2);
      i = i + 1;
    } while (i < (int)str2);
  }
  FUN_004c6430(file);
  return;
}


/* ==== 004aec50 FUN_004aec50 ==== */

void __thiscall FUN_004aec50(void *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  iVar1 = FUN_004af520(param_2,param_3,&param_2,&param_3,&local_4,&local_8);
  FUN_004aecd0(this,param_2,param_3);
  if (iVar1 != 0) {
    FUN_004aecd0(this,local_4,local_8);
  }
  return;
}


/* ==== 004aecd0 FUN_004aecd0 ==== */

void __thiscall FUN_004aecd0(void *this,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int i;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_40 [16];
  
  iVar7 = param_2 * 0x994;
  iVar5 = param_3 * 0x994;
  iVar4 = *(int *)(iVar5 + 0x14 + DAT_00715f00) - *(int *)(iVar7 + 0x10 + DAT_00715f00);
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + iVar4 / 3;
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + iVar4;
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
    if (*(int *)((int)this + 0x9c) != 0) {
      i = *(int *)((int)this + 0x4c);
      iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar3 + 0x60) = i;
      uVar2 = *(undefined4 *)(DAT_0073b1b0 + i * 0x48);
      *(undefined4 *)(iVar3 + 0x58) = 1;
      *(undefined4 *)(iVar3 + 0x48) = uVar2;
      if (*(int *)(iVar3 + 0x5c) == 1) {
        FUN_00440430();
      }
      i = *(int *)((int)this + 0x4c);
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
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x6c),
                       *(undefined4 *)((int)this + 0x74),*(int *)((int)this + 0x70) + unaff_EBX * 2,
                       iVar4,8);
    if (iVar4 != 0) {
      uVar2 = FUN_004bb290(iVar4);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b06c4,
                   s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x21d,uVar2);
    }
  }
  iVar4 = *(int *)(iVar7 + 0x18 + DAT_00715f00);
  i = *(int *)(iVar5 + 0x1c + DAT_00715f00) - iVar4;
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + i;
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + i / 3;
  if (0 < i) {
    if (*(int *)((int)this + 0x9c) != 0) {
      iVar3 = *(int *)((int)this + 0x50);
      iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar1 + 0x60) = iVar3;
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48);
      *(undefined4 *)(iVar1 + 0x58) = 1;
      if (*(int *)(iVar1 + 0x5c) == 1) {
        FUN_00440430();
      }
      iVar3 = *(int *)((int)this + 0x50);
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
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x7c),
                       *(undefined4 *)((int)this + 0x84),*(int *)((int)this + 0x80) + iVar4 * 2,i,8)
    ;
    if (iVar4 != 0) {
      FUN_004c3f80(0,1);
      FUN_004c3fa0(s_start__d__end__d_005b06b0,param_2,param_3);
      FUN_004c3f80(0,0);
      uVar2 = FUN_004bb290(iVar4);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b06c4,
                   s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x23d,uVar2);
    }
  }
  iVar4 = *(int *)(iVar7 + 0x20 + DAT_00715f00);
  i = *(int *)(iVar5 + 0x24 + DAT_00715f00) - iVar4;
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + i / 3;
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + i;
  if (0 < i) {
    if (*(int *)((int)this + 0x9c) != 0) {
      iVar3 = *(int *)((int)this + 0x54);
      iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(iVar1 + 0x60) = iVar3;
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48);
      *(undefined4 *)(iVar1 + 0x58) = 1;
      if (*(int *)(iVar1 + 0x5c) == 1) {
        FUN_00440430();
      }
      iVar3 = *(int *)((int)this + 0x54);
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
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x5c),
                       *(undefined4 *)((int)this + 100),*(int *)((int)this + 0x60) + iVar4 * 2,i,8);
    if (iVar4 != 0) {
      uVar2 = FUN_004bb290(iVar4);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b06c4,
                   s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x25c,uVar2);
    }
  }
  iVar4 = *(int *)(iVar7 + 0x28 + DAT_00715f00);
  iVar5 = *(int *)(iVar5 + 0x2c + DAT_00715f00) - iVar4;
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + iVar5;
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + iVar5 / 3;
  if (0 < iVar5) {
    if (*(int *)((int)this + 0x9c) != 0) {
      iVar7 = *(int *)((int)this + 0x58);
      i = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(int *)(i + 0x60) = iVar7;
      *(undefined4 *)(i + 0x48) = *(undefined4 *)(DAT_0073b1b0 + iVar7 * 0x48);
      *(undefined4 *)(i + 0x58) = 1;
      if (*(int *)(i + 0x5c) == 1) {
        *(undefined4 *)(i + 0x58) = 0;
        (**(code **)(**(int **)(i + 0x54) + 0xc))(*(int **)(i + 0x54),i);
      }
      iVar7 = *(int *)((int)this + 0x58);
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
                      (DAT_0073b4b4,4,2,*(undefined4 *)((int)this + 0x8c),
                       *(undefined4 *)((int)this + 0x94),*(int *)((int)this + 0x90) + iVar4 * 2,
                       iVar5,1);
    if (iVar4 != 0) {
      uVar2 = FUN_004bb290(iVar4);
      FUN_004c4150(s__s__d____D3DError_DrawPrimitive___005b06c4,
                   s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x27b,uVar2);
    }
  }
  return;
}


/* ==== 004af230 FUN_004af230 ==== */

int __thiscall FUN_004af230(void *this,int param_2,float param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)((int)this + 8);
  if ((param_2 < 0) || (iVar2 < param_2)) {
    FUN_004c4150(s__s__d____Illegal_start_chunk___d_005b0714,
                 s_C__Work_A2IV_Engine_prog_Rd_main_005b0664,0x2be,param_2);
  }
  piVar4 = *(int **)((int)this + 4);
  piVar3 = piVar4 + param_2;
  iVar1 = DAT_00715f00 + piVar4[param_2] * 0x994;
  if ((param_3 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
      (param_5 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) <= 0.0) {
    for (; param_2 < iVar2; param_2 = param_2 + 1) {
      iVar1 = DAT_00715f00 + *piVar3 * 0x994;
      if (0.0 < (param_3 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
                (param_5 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40)) goto LAB_004af500;
      piVar3 = piVar3 + 1;
    }
  }
  else {
    for (; -1 < param_2; param_2 = param_2 + -1) {
      iVar1 = DAT_00715f00 + *piVar3 * 0x994;
      if ((param_3 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
          (param_5 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) < 0.0) {
        return param_2;
      }
      piVar3 = piVar3 + -1;
    }
  }
  if (param_2 == 0) {
    param_2 = iVar2 + -1;
    if (-1 < param_2) {
      piVar4 = piVar4 + param_2;
      do {
        iVar2 = DAT_00715f00 + *piVar4 * 0x994;
        if ((param_3 - *(float *)(iVar2 + 0x34)) * *(float *)(iVar2 + 0x48) -
            (param_5 - *(float *)(iVar2 + 0x3c)) * *(float *)(iVar2 + 0x40) < 0.0) {
          return param_2;
        }
        param_2 = param_2 + -1;
        piVar4 = piVar4 + -1;
      } while (-1 < param_2);
    }
  }
  else {
    param_2 = 0;
    if (0 < iVar2) {
      while (iVar1 = DAT_00715f00 + *piVar4 * 0x994,
            (param_3 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
            (param_5 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) <= 0.0) {
        param_2 = param_2 + 1;
        piVar4 = piVar4 + 1;
        if (iVar2 <= param_2) {
          return param_2;
        }
      }
LAB_004af500:
      param_2 = param_2 + -1;
      if (param_2 == -1) {
        return iVar2 + -1;
      }
    }
  }
  return param_2;
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


