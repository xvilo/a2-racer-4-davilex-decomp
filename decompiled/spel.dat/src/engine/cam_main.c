/* spel.dat — engine/cam_main.cpp: 17 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b05e0 FUN_004b05e0 ==== */

int FUN_004b05e0(undefined4 *param_1,int param_2)

{
  bool bVar1;
  float10 fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 extraout_var;
  uint3 uVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  undefined1 local_7c [4];
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_30 = *param_1;
  local_2c = param_1[1];
  local_24 = param_1[3];
  local_28 = param_1[2];
  local_20 = param_1[4];
  local_1c = param_1[5];
  local_18 = param_1[6];
  local_14 = param_1[7];
  local_10 = param_1[8];
  FUN_004afea0(local_60,param_2);
  fVar3 = *(float *)(param_2 + 0x30) - (float)param_1[0xc];
  local_74 = *(float *)(param_2 + 0x34) - (float)param_1[0xd];
  local_70 = *(float *)(param_2 + 0x38) - (float)param_1[0xe];
  local_60[0] = fVar3 + local_60[0];
  local_60[3] = fVar3 + local_60[3];
  local_48 = fVar3 + local_48;
  local_3c = fVar3 + local_3c;
  local_60[1] = local_74 + local_60[1];
  local_50 = local_74 + local_50;
  local_44 = local_74 + local_44;
  local_38 = local_74 + local_38;
  local_60[2] = local_70 + local_60[2];
  local_4c = local_70 + local_4c;
  local_40 = local_70 + local_40;
  local_34 = local_70 + local_34;
  FUN_004aff40(local_60,-param_1[0x11]);
  uVar4 = local_28;
  local_6c = local_30;
  local_64 = local_28;
  local_78 = local_24;
  local_70 = (float)local_10;
  pfVar7 = local_60;
  iVar8 = 1;
  while( true ) {
    iVar5 = iVar8;
    if (3 < iVar8) {
      iVar5 = 0;
    }
    fVar9 = (float10)FUN_004b00c0(*pfVar7,pfVar7[1],pfVar7[2],local_60[iVar5 * 3],
                                  local_60[iVar5 * 3 + 1],local_60[iVar5 * 3 + 2],local_6c,local_68,
                                  uVar4,local_78,local_74,local_70,local_7c);
    fVar2 = (float10)1.0;
    uVar6 = (uint3)(CONCAT22(extraout_var,
                             (ushort)(fVar9 < fVar2) << 8 | (ushort)(NAN(fVar9) || NAN(fVar2)) << 10
                             | (ushort)(fVar9 == fVar2) << 0xe) >> 8);
    if (fVar9 < fVar2) break;
    pfVar7 = pfVar7 + 3;
    bVar1 = 3 < iVar8;
    iVar8 = iVar8 + 1;
    if (bVar1) {
      return (uint)uVar6 << 8;
    }
  }
  return CONCAT31(uVar6,1);
}


/* ==== 004b0a30 FUN_004b0a30 ==== */

void FUN_004b0a30(uint size)

{
  FUN_004c3fa0(s_Initing_T_ARRAY_for_cameras__005b07e8);
  FUN_004b1ef0(&DAT_00719b50,size);
  FUN_004c3fa0(s_CAMERA___d_cameras_inited__005b07cc,size);
  return;
}


/* ==== 004b0a60 FUN_004b0a60 ==== */

int FUN_004b0a60(void)

{
  int i;
  
  i = DAT_00719b58;
  if (DAT_00719b5c == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,&DAT_00719b64,DAT_00719b54,
                 &DAT_00719b7d);
    i = DAT_00719b58;
  }
  for (; i < DAT_00719b54; i = i + 1) {
    if (*(char *)(DAT_00719b60 + i) == '\0') goto LAB_004b0b0e;
  }
  i = 0;
  if (0 < DAT_00719b58) {
    do {
      if (*(char *)(DAT_00719b60 + i) == '\0') goto LAB_004b0b0e;
      i = i + 1;
    } while (i < DAT_00719b58);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,&DAT_00719b64,DAT_00719b54,
               &DAT_00719b7d);
  i = -1;
LAB_004b0aea:
  FUN_004c3fa0(s_Camera__d_added__This_pointer_____005b0808,i,DAT_00719b50 + i * 0x178);
  return i;
LAB_004b0b0e:
  *(undefined1 *)(DAT_00719b60 + i) = 1;
  DAT_00719b58 = i;
  goto LAB_004b0aea;
}


/* ==== 004b0b20 FUN_004b0b20 ==== */

void * __thiscall FUN_004b0b20(void *this)

{
  undefined4 uVar1;
  void *operator_new_result;
  int j;
  int i;
  undefined4 *this_val_2;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined4 *this_val;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056f52c;
  local_c = ExceptionList;
  this_val = (undefined4 *)((int)this + 0xec);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xf8) = 0;
  _strncpy((char *)((int)this + 0x100),s_Follow_positions_005b085c,0x19);
  _strncpy((char *)((int)this + 0x119),s_D3DVECTOR_005b0850,0x19);
  if (*(int *)((int)this + 0xf8) != 0) {
    FUN_004b1e00(this_val);
  }
  *this_val = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,(int)this + 0x119,
               (char *)((int)this + 0x100),0);
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x13e) = 0;
  _strncpy((char *)((int)this + 0x146),s_Follow_orientations_005b083c,0x19);
  _strncpy((char *)((int)this + 0x15f),s_D3DMATRIX_005b0830,0x19);
  FUN_004b2050((int)this + 0x132);
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = DAT_00719ba8;
  *(undefined4 *)((int)this + 0xc) = DAT_00719bac;
  *(undefined4 *)((int)this + 0x10) = DAT_00719bb0;
  this_val_2 = &DAT_0073b538;
  puVar2 = (undefined4 *)((int)this + 0x14);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *this_val_2;
    this_val_2 = this_val_2 + 1;
    puVar2 = puVar2 + 1;
  }
  i = 0;
  *(undefined4 *)((int)this + 0x54) = DAT_00719ba8;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x58) = DAT_00719bac;
  *(undefined4 *)((int)this + 0x5c) = DAT_00719bb0;
  *(undefined4 *)((int)this + 0x60) = DAT_00719ba8;
  *(undefined4 *)((int)this + 100) = DAT_00719bac;
  uVar1 = DAT_00719bb0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = uVar1;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(undefined4 *)((int)this + 0x80) = 1;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x3f800000;
  *(undefined4 *)((int)this + 0x98) = 0x3f800000;
  *(undefined4 *)((int)this + 0x9c) = 0x3f800000;
  *(undefined4 *)((int)this + 0xa0) = DAT_00719ba8;
  *(undefined4 *)((int)this + 0xa4) = DAT_00719bac;
  uVar1 = DAT_00719bb0;
  *(undefined4 *)((int)this + 0xb8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa8) = uVar1;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0x3f800000;
  *(undefined4 *)((int)this + 0xbc) = DAT_00719ba8;
  *(undefined4 *)((int)this + 0xc0) = DAT_00719bac;
  uVar1 = DAT_00719bb0;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = uVar1;
  *(undefined4 *)((int)this + 0xcc) = DAT_00719ba8;
  *(undefined4 *)((int)this + 0xd0) = DAT_00719bac;
  uVar1 = DAT_00719bb0;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd4) = uVar1;
  *(undefined4 *)((int)this + 0xdc) = DAT_00719ba8;
  *(undefined4 *)((int)this + 0xe0) = DAT_00719bac;
  uVar1 = DAT_00719bb0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xe4) = uVar1;
  if (*(int *)((int)this + 0xf8) != 0) {
    FUN_004b1e00(this_val);
  }
  operator_new_result = operator_new(0x3c);
  *this_val = operator_new_result;
  *(undefined4 *)((int)this + 0xf0) = 5;
  *(undefined4 *)((int)this + 0xf4) = 0;
  operator_new_result = operator_new(5);
  *(void **)((int)this + 0xfc) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)this + 0x119,(int)this + 0x100,
               *(undefined4 *)((int)this + 0xf0));
  *(undefined4 *)((int)this + 0xf8) = 1;
  j = 0;
  do {
    j = j + 1;
    *(undefined1 *)(*(int *)((int)this + 0xfc) + -1 + j) = 0;
  } while (j < 5);
  this_val_2 = (undefined4 *)((int)this + 0x132);
  if (*(int *)((int)this + 0x13e) != 0) {
    FUN_004b1e00(this_val_2);
  }
  operator_new_result = operator_new(0x140);
  *this_val_2 = operator_new_result;
  *(undefined4 *)((int)this + 0x136) = 5;
  *(undefined4 *)((int)this + 0x13a) = 0;
  operator_new_result = operator_new(5);
  *(void **)((int)this + 0x142) = operator_new_result;
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,(int)this + 0x15f,(int)this + 0x146,
               *(undefined4 *)((int)this + 0x136));
  *(undefined4 *)((int)this + 0x13e) = 1;
  do {
    i = i + 1;
    *(undefined1 *)(*(int *)((int)this + 0x142) + -1 + i) = 0;
  } while (i < 5);
  i = 5;
  do {
    FUN_004b1e60(this_val);
    FUN_004b1e60(this_val_2);
    i = i + -1;
  } while (i != 0);
  ExceptionList = local_c;
  return this;
}


/* ==== 004b0e80 FUN_004b0e80 ==== */

void __thiscall FUN_004b0e80(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0056f55c;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0xf8) == 1) {
    ExceptionList = &local_c;
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x119,(int)this + 0x100,
                 *(undefined4 *)((int)this + 0xf0));
    FUN_0054b339(*(undefined4 *)((int)this + 0xec));
  }
  if (*(int *)((int)this + 0xf8) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0xfc));
    *(undefined4 *)((int)this + 0xf8) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  if (*(int *)((int)this + 0x13e) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x15f,(int)this + 0x146,
                 *(undefined4 *)((int)this + 0x136));
    FUN_0054b339(*(undefined4 *)((int)this + 0x132));
  }
  if (*(int *)((int)this + 0x13e) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0x142));
    *(undefined4 *)((int)this + 0x13e) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  local_4 = local_4 & 0xffffff00;
  if (*(int *)((int)this + 0x13e) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x15f,(int)this + 0x146,
                 *(undefined4 *)((int)this + 0x136));
    FUN_0054b339(*(undefined4 *)((int)this + 0x132));
  }
  if (*(int *)((int)this + 0x13e) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0x142));
    *(undefined4 *)((int)this + 0x13e) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  local_4 = 0xffffffff;
  if (*(int *)((int)this + 0xf8) == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)this + 0x119,(int)this + 0x100,
                 *(undefined4 *)((int)this + 0xf0));
    FUN_0054b339(*(undefined4 *)((int)this + 0xec));
  }
  if (*(int *)((int)this + 0xf8) != 0) {
    FUN_0054b339(*(undefined4 *)((int)this + 0xfc));
    *(undefined4 *)((int)this + 0xf8) = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  ExceptionList = local_c;
  return;
}


/* ==== 004b1060 FUN_004b1060 ==== */

void __thiscall FUN_004b1060(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(int *)((int)this + 0x74) == 1) || (*(int *)((int)this + 0x7c) == 1)) {
    FUN_004c4150(s__s__d____Cannot_set_position_in_c_005b0870,
                 s_C__Work_A2IV_Engine_prog_cam_mai_005b090c,0xa3,*(undefined4 *)((int)this + 0x6c),
                 *(int *)((int)this + 0x74),*(undefined4 *)((int)this + 0x78),
                 *(undefined4 *)((int)this + 0x7c));
  }
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  return;
}


/* ==== 004b10b0 FUN_004b10b0 ==== */

void __thiscall FUN_004b10b0(void *this)

{
  int i;
  undefined4 *puVar1;
  
  if (((*(int *)((int)this + 0x74) == 1) || (*(int *)((int)this + 0x78) == 1)) ||
     (*(int *)((int)this + 0x7c) == 1)) {
    FUN_004c4150(s__s__d____Cannot_set_orientation_i_005b0934,
                 s_C__Work_A2IV_Engine_prog_cam_mai_005b090c,0xc0,*(undefined4 *)((int)this + 0x6c),
                 *(int *)((int)this + 0x74),*(undefined4 *)((int)this + 0x78),
                 *(undefined4 *)((int)this + 0x7c));
  }
  puVar1 = (undefined4 *)((int)this + 0x14);
  for (i = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), i != 0;
      i = i + -1) {
    *puVar1 = *(undefined4 *)register0x00000010;
    puVar1 = puVar1 + 1;
  }
  return;
}


/* ==== 004b1110 FUN_004b1110 ==== */

void __thiscall FUN_004b1110(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x6c) = 1;
  *(undefined4 *)((int)this + 0x88) = param_2;
  *(undefined4 *)((int)this + 0x8c) = param_3;
  *(undefined4 *)((int)this + 0x90) = param_4;
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0x10);
  return;
}


/* ==== 004b1150 FUN_004b1150 ==== */

void __thiscall FUN_004b1150(void *this)

{
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  return;
}


/* ==== 004b1190 FUN_004b1190 ==== */

void __thiscall
FUN_004b1190(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)((int)this + 0xb8) = param_2;
  *(undefined4 *)((int)this + 0xbc) = param_3;
  *(undefined4 *)((int)this + 0x74) = 1;
  *(undefined4 *)((int)this + 0xc0) = param_4;
  *(undefined4 *)((int)this + 0xc4) = param_5;
  return;
}


/* ==== 004b11c0 FUN_004b11c0 ==== */

void __thiscall FUN_004b11c0(void *this,undefined4 *param_2)

{
  if (*(int *)((int)this + 0x74) == 0) {
    FUN_004c4150(s__s__d____Cannot_get_position_loc_005b09d4,
                 s_C__Work_A2IV_Engine_prog_cam_mai_005b090c,0x14c,*(undefined4 *)((int)this + 0x6c)
                 ,0,*(undefined4 *)((int)this + 0x78),*(undefined4 *)((int)this + 0x7c));
  }
  *param_2 = *(undefined4 *)((int)this + 0xbc);
  param_2[1] = *(undefined4 *)((int)this + 0xc0);
  param_2[2] = *(undefined4 *)((int)this + 0xc4);
  return;
}


/* ==== 004b1210 FUN_004b1210 ==== */

void __thiscall FUN_004b1210(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)((int)this + 0x74) == 0) {
    FUN_004c4150(s__s__d____Cannot_set_position_loc_005b0a7c,
                 s_C__Work_A2IV_Engine_prog_cam_mai_005b090c,0x161,*(undefined4 *)((int)this + 0x6c)
                 ,0,*(undefined4 *)((int)this + 0x78),*(undefined4 *)((int)this + 0x7c));
  }
  *(undefined4 *)((int)this + 0xbc) = param_2;
  *(undefined4 *)((int)this + 0xc0) = param_3;
  *(undefined4 *)((int)this + 0xc4) = param_4;
  return;
}


/* ==== 004b1260 FUN_004b1260 ==== */

void __thiscall FUN_004b1260(void *this)

{
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xbc) = DAT_00719ba8;
  *(undefined4 *)((int)this + 0xc0) = DAT_00719bac;
  *(undefined4 *)((int)this + 0xc4) = DAT_00719bb0;
  return;
}


/* ==== 004b1290 FUN_004b1290 ==== */

void __thiscall
FUN_004b1290(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)((int)this + 200) = param_2;
  *(undefined4 *)((int)this + 0xcc) = param_3;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0xd0) = param_4;
  *(undefined4 *)((int)this + 0xd4) = param_5;
  return;
}


/* ==== 004b12c0 FUN_004b12c0 ==== */

void __thiscall FUN_004b12c0(void *this,undefined4 *param_2)

{
  if (*(int *)((int)this + 0x78) == 0) {
    FUN_004c4150(s__s__d____Cannot_get_target_lock_o_005b0b24,
                 s_C__Work_A2IV_Engine_prog_cam_mai_005b090c,0x184,*(undefined4 *)((int)this + 0x70)
                 ,*(undefined4 *)((int)this + 0x74),0,*(undefined4 *)((int)this + 0x7c));
  }
  *param_2 = *(undefined4 *)((int)this + 0xcc);
  param_2[1] = *(undefined4 *)((int)this + 0xd0);
  param_2[2] = *(undefined4 *)((int)this + 0xd4);
  return;
}


/* ==== 004b1310 FUN_004b1310 ==== */

void __thiscall FUN_004b1310(void *this)

{
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0xcc) = DAT_00719ba8;
  *(undefined4 *)((int)this + 0xd0) = DAT_00719bac;
  *(undefined4 *)((int)this + 0xd4) = DAT_00719bb0;
  return;
}


/* ==== 004b1380 FUN_004b1380 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b1380(void *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int i;
  int j;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [64];
  
  if (*(int *)((int)this + 0x7c) == 1) {
    FUN_004c3fa0(s_FOLLOW_MODE_is_ON__005b0c0c);
    pfVar9 = (float *)((int)this + 8);
    pfVar8 = (float *)(*(int *)((int)this + 0xec) + *(int *)((int)this + 0xe8) * 0xc);
    *pfVar9 = *pfVar8;
    *(float *)((int)this + 0xc) = pfVar8[1];
    *(float *)((int)this + 0x10) = pfVar8[2];
    puVar12 = (undefined4 *)(*(int *)((int)this + 0xe8) * 0x40 + *(int *)((int)this + 0x132));
    puVar13 = (undefined4 *)((int)this + 0x14);
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    i = DAT_0073b0d0 + *(int *)((int)this + 0xd8) * 0xa9;
    *pfVar8 = *(float *)(i + 0x50);
    pfVar8[1] = *(float *)(i + 0x54);
    pfVar8[2] = *(float *)(i + 0x58);
    puVar12 = (undefined4 *)(DAT_0073b0d0 + *(int *)((int)this + 0xd8) * 0xa9 + 0x10);
    puVar13 = (undefined4 *)(*(int *)((int)this + 0xe8) * 0x40 + *(int *)((int)this + 0x132));
    for (i = 0x10; i != 0; i = i + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    i = *(int *)((int)this + 0xe8) + 1;
    *(int *)((int)this + 0xe8) = i;
    if (4 < i) {
      *(undefined4 *)((int)this + 0xe8) = 0;
    }
    pfVar8 = (float *)FUN_004b42a0(&local_4c,(int)this + 0xdc,(undefined4 *)((int)this + 0x14));
    fVar1 = pfVar8[1];
    fVar2 = pfVar8[2];
    *pfVar9 = *pfVar8 + *pfVar9;
    *(float *)((int)this + 0xc) = fVar1 + *(float *)((int)this + 0xc);
    *(float *)((int)this + 0x10) = fVar2 + *(float *)((int)this + 0x10);
  }
  else {
    if (*(int *)((int)this + 0x74) == 1) {
      FUN_004c3fa0(s_POSITION_LOCK_is_ON__005b0bf4);
      if (*(int *)((int)this + 0xb8) == -1) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0xbc);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0xc0);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0xc4);
      }
      else {
        i = *(int *)((int)this + 0xb8) * 0xa9;
        puVar12 = (undefined4 *)((int)this + 0x14);
        puVar13 = (undefined4 *)(i + 0x10 + DAT_0073b0d0);
        puVar14 = puVar12;
        for (j = 0x10; j != 0; j = j + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        if (*(int *)this == 1) {
          pfVar9 = (float *)(*(int *)(i + 0xc + DAT_0073b0d0) * 0xf0 + 0xbc + DAT_00715e50);
          fVar1 = *pfVar9;
          local_44 = pfVar9[2];
          fVar2 = *(float *)((int)this + 0xc4);
          fVar3 = local_44 * local_44 + fVar1 * fVar1;
          fVar4 = SQRT(fVar3);
          local_48 = 0.0 / fVar4;
          local_44 = local_44 / fVar4;
          local_58 = (fVar1 / fVar4) * fVar2;
          local_58 = local_58 + local_58;
          local_54 = local_48 * fVar2 + local_48 * fVar2;
          local_50 = local_44 * fVar2 + local_44 * fVar2;
          if (150.0 < fVar3) {
            _DAT_00719bb8 = local_58;
            _DAT_00719bbc = local_54;
            _DAT_00719bc0 = local_50;
          }
          fVar4 = fVar4 * 0.01;
          if (0.1 <= fVar4) {
            if (0.25 < fVar4) {
              fVar4 = 0.25;
            }
          }
          else {
            fVar4 = 0.1;
          }
          *(float *)((int)this + 0x88) = fVar4;
          *(float *)((int)this + 0x90) = fVar4 * 2.5;
          pfVar9 = (float *)FUN_004b42a0(&local_4c,&DAT_00719bb8,puVar12);
          local_64 = *pfVar9;
          local_5c = pfVar9[2];
        }
        else {
          local_4c = *(float *)((int)this + 0xbc);
          local_44 = *(float *)((int)this + 0xc4);
          local_48 = 0.0;
          pfVar9 = (float *)FUN_004b42a0(&local_58,&local_4c,puVar12);
          local_64 = *pfVar9;
          local_5c = pfVar9[2];
        }
        pfVar9 = (float *)((int)this + 8);
        i = DAT_0073b0d0 + *(int *)((int)this + 0xb8) * 0xa9;
        *pfVar9 = *(float *)(i + 0x50);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(i + 0x54);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(i + 0x58);
        *pfVar9 = local_64 + *pfVar9;
        *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc0) + *(float *)((int)this + 0xc);
        *(float *)((int)this + 0x10) = local_5c + *(float *)((int)this + 0x10);
      }
    }
    pfVar9 = (float *)((int)this + 0x54);
    pfVar10 = (float *)FUN_004b4070(&local_4c,(int)this + 0x14);
    pfVar8 = (float *)((int)this + 8);
    *pfVar9 = *pfVar10;
    *(float *)((int)this + 0x58) = pfVar10[1];
    *(float *)((int)this + 0x5c) = pfVar10[2];
    *pfVar9 = *pfVar9 + *pfVar8;
    *(float *)((int)this + 0x58) = *(float *)((int)this + 0xc) + *(float *)((int)this + 0x58);
    *(float *)((int)this + 0x5c) = *(float *)((int)this + 0x10) + *(float *)((int)this + 0x5c);
    if (*(int *)((int)this + 0x78) == 1) {
      FUN_004c3fa0(s_TARGET_LOCK_is_ON__005b0be0);
      if (*(int *)((int)this + 200) == -1) {
        *pfVar9 = *(float *)((int)this + 0xcc);
        *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0xd0);
        *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0xd4);
      }
      else {
        pfVar10 = (float *)FUN_004b42a0(&local_4c,(int)this + 0xcc,
                                        DAT_0073b0d0 + *(int *)((int)this + 200) * 0xa9 + 0x10);
        local_58 = *pfVar10;
        j = *(int *)((int)this + 200);
        local_54 = pfVar10[1];
        local_50 = pfVar10[2];
        i = DAT_0073b0d0 + j + 0x50 + j * 0xa8;
        fVar1 = *(float *)(i + 4);
        fVar2 = *(float *)(i + 8);
        *pfVar9 = local_58 + *(float *)(DAT_0073b0d0 + j + 0x50 + j * 0xa8);
        *(float *)((int)this + 0x58) = local_54 + fVar1;
        *(float *)((int)this + 0x5c) = local_50 + fVar2;
      }
    }
    if ((DAT_00719bd6 & 1) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 1;
      FUN_005584e0(&DAT_004b1df0);
    }
    if ((DAT_00719bd6 & 2) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 2;
      FUN_005584e0(&DAT_004b1de0);
    }
    if ((DAT_00719bd6 & 4) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 4;
      FUN_005584e0(&DAT_004b1dd0);
    }
    if ((DAT_00719bd6 & 8) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 8;
      FUN_005584e0(&DAT_004b1dc0);
    }
    if ((DAT_00719bd6 & 0x10) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 0x10;
      FUN_005584e0(&DAT_004b1db0);
    }
    if (*(int *)((int)this + 0x6c) == 1) {
      FUN_004c3fa0(s_DAMPENING_is_ON__005b0bcc);
      _DAT_00719bc8 = *pfVar8 - *(float *)((int)this + 0xa0);
      _DAT_00719bcc = *(float *)((int)this + 0xc) - *(float *)((int)this + 0xa4);
      _DAT_00719bd0 = *(float *)((int)this + 0x10) - *(float *)((int)this + 0xa8);
      local_58 = _DAT_00719bc8;
      local_54 = _DAT_00719bcc;
      local_50 = _DAT_00719bd0;
      uVar11 = FUN_004b4310(local_40,DAT_0073b0d0 + *(int *)((int)this + 200) * 0xa9 + 0x10);
      pfVar10 = (float *)FUN_004b42a0(&local_4c,&DAT_00719bc8,uVar11);
      local_58 = *pfVar10;
      _DAT_00719c18 = local_58 * *(float *)((int)this + 0x88);
      local_54 = pfVar10[1];
      _DAT_00719c1c = local_54 * *(float *)((int)this + 0x8c);
      local_50 = pfVar10[2];
      _DAT_00719c20 = local_50 * *(float *)((int)this + 0x90);
      pfVar10 = (float *)FUN_004b42a0(&local_4c,&DAT_00719c18,
                                      DAT_0073b0d0 + *(int *)((int)this + 200) * 0xa9 + 0x10);
      _DAT_00719c08 = *pfVar10;
      _DAT_00719c0c = pfVar10[1];
      _DAT_00719c10 = pfVar10[2];
      local_58 = _DAT_00719c08 + *(float *)((int)this + 0xa0);
      local_54 = _DAT_00719c0c + *(float *)((int)this + 0xa4);
      local_50 = _DAT_00719c10 + *(float *)((int)this + 0xa8);
      *pfVar8 = local_58;
      *(float *)((int)this + 0xc) = local_54;
      *(float *)((int)this + 0x10) = local_50;
    }
    if (*(int *)((int)this + 0x70) == 1) {
      _DAT_00719bc8 = *pfVar9 - *(float *)((int)this + 0xac);
      _DAT_00719bcc = *(float *)((int)this + 0x58) - *(float *)((int)this + 0xb0);
      _DAT_00719bd0 = *(float *)((int)this + 0x5c) - *(float *)((int)this + 0xb4);
      _DAT_00719c08 = _DAT_00719bc8 * *(float *)((int)this + 0x94);
      _DAT_00719c0c = _DAT_00719bcc * *(float *)((int)this + 0x98);
      _DAT_00719c10 = _DAT_00719bd0 * *(float *)((int)this + 0x9c);
      local_58 = _DAT_00719c08 + *(float *)((int)this + 0xac);
      local_54 = _DAT_00719c0c + *(float *)((int)this + 0xb0);
      local_50 = _DAT_00719c10 + *(float *)((int)this + 0xb4);
      _DAT_00719c18 = _DAT_00719c08;
      _DAT_00719c1c = _DAT_00719c0c;
      _DAT_00719c20 = _DAT_00719c10;
      *pfVar9 = local_58;
      *(float *)((int)this + 0xac) = local_58;
      *(float *)((int)this + 0xb0) = local_54;
      *(float *)((int)this + 0x58) = local_54;
      *(float *)((int)this + 0xb4) = local_50;
      *(float *)((int)this + 0x5c) = local_50;
    }
    if (*(int *)((int)this + 0x80) == 1) {
      puVar12 = (undefined4 *)FUN_004b4030(&local_4c,(int)this + 0x14);
      *(undefined4 *)((int)this + 0x60) = *puVar12;
      *(undefined4 *)((int)this + 100) = puVar12[1];
      *(undefined4 *)((int)this + 0x68) = puVar12[2];
    }
    else {
      *(undefined4 *)((int)this + 0x60) = 0;
      *(undefined4 *)((int)this + 100) = 0x3f800000;
      *(undefined4 *)((int)this + 0x68) = 0;
    }
    fVar4 = *pfVar9 - *pfVar8;
    fVar6 = *(float *)((int)this + 0x58) - *(float *)((int)this + 0xc);
    fVar1 = *(float *)((int)this + 0x68);
    fVar2 = *(float *)((int)this + 100);
    fVar3 = *(float *)((int)this + 0x60);
    fVar7 = *(float *)((int)this + 0x5c) - *(float *)((int)this + 0x10);
    fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar4 * fVar4);
    fVar4 = fVar4 / fVar5;
    fVar6 = fVar6 / fVar5;
    fVar7 = fVar7 / fVar5;
    fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    local_58 = (fVar2 / fVar5) * fVar7 - (fVar1 / fVar5) * fVar6;
    fVar1 = (fVar1 / fVar5) * fVar4 - fVar7 * (fVar3 / fVar5);
    fVar3 = fVar6 * (fVar3 / fVar5) - (fVar2 / fVar5) * fVar4;
    fVar2 = SQRT(local_58 * local_58 + fVar1 * fVar1 + fVar3 * fVar3);
    fVar5 = local_58 / fVar2;
    i = (int)this + 0x14;
    fVar1 = fVar1 / fVar2;
    fVar3 = fVar3 / fVar2;
    local_4c = fVar3 * fVar6 - fVar1 * fVar7;
    local_54 = fVar7 * fVar5 - fVar3 * fVar4;
    local_50 = fVar1 * fVar4 - fVar6 * fVar5;
    local_44 = SQRT(local_4c * local_4c + local_54 * local_54 + local_50 * local_50);
    local_4c = local_4c / local_44;
    local_48 = local_54 / local_44;
    local_44 = local_50 / local_44;
    FUN_004b40b0(i,fVar5,fVar1,fVar3);
    FUN_004b40d0(i,local_4c,local_48,local_44);
    FUN_004b40f0(i,fVar4,fVar6,fVar7);
  }
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0x10);
  return;
}


