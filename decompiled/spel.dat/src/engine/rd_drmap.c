/* spel.dat — engine/rd_drmap.cpp: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004aa9d0 FUN_004aa9d0 ==== */

void FUN_004aa9d0(char *param_1)

{
  FILE *file;
  undefined4 *puVar1;
  int j;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FILE *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FILE *pFVar8;
  int i;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  file = (FILE *)FUN_004c62c0(param_1);
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____File_open_failed_for_fi_005b00b4,
                 s_C__Work_A2IV_Engine_prog_rd_drma_005b00dc,0x49,param_1);
  }
  FUN_00558b35();
  FUN_004ab200(&DAT_00715eb8,(uint)param_1);
  i = 0;
  if ((int)param_1 < 1) {
LAB_004aac01:
    FUN_004c6430(file);
    return;
  }
LAB_004aaa34:
  uVar7 = 1;
  puVar1 = &uStack_2c;
  uVar6 = 4;
  pFVar8 = file;
  FUN_00558b35();
  uVar4 = 1;
  puVar2 = &uStack_30;
  uVar3 = 4;
  pFVar5 = file;
  FUN_00558b35();
  FUN_00558b35(&uStack_18,&uStack_18,4,1,file,puVar2,uVar3,uVar4,pFVar5,puVar1,uVar6,uVar7,pFVar8);
  FUN_00558b35();
  puVar1 = &uStack_10;
  uVar4 = 1;
  uVar3 = 4;
  pFVar5 = file;
  FUN_00558b35();
  FUN_00558b35(&uStack_34,&uStack_34,4,1,file,puVar1,uVar3,uVar4,pFVar5);
  FUN_00558b35();
  FUN_00558b35();
  FUN_00558b35(&uStack_38,&uStack_38,4,1,file);
  uVar4 = uStack_2c;
  uVar3 = uStack_30;
  uStack_28 = uStack_3c;
  uStack_24 = uStack_40;
  uStack_c = uStack_18;
  uStack_20 = uStack_38;
  uStack_1c = uStack_34;
  uStack_8 = uStack_14;
  uStack_4 = uStack_10;
  j = DAT_00715ec0;
  if (DAT_00715ec4 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,&DAT_00715ecc,DAT_00715ebc,
                 &DAT_00715ee5);
    j = DAT_00715ec0;
  }
  for (; j < DAT_00715ebc; j = j + 1) {
    if (*(char *)(DAT_00715ec8 + j) == '\0') goto LAB_004aac10;
  }
  j = 0;
  if (0 < DAT_00715ec0) {
    do {
      if (*(char *)(DAT_00715ec8 + j) == '\0') goto LAB_004aac10;
      j = j + 1;
    } while (j < DAT_00715ec0);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,&DAT_00715ecc,DAT_00715ebc,
               &DAT_00715ee5);
  j = -1;
  goto LAB_004aab94;
LAB_004aac10:
  *(undefined1 *)(DAT_00715ec8 + j) = 1;
  DAT_00715ec0 = j;
LAB_004aab94:
  FUN_004c3fa0(s_Loaded_type__d_and_trigger___d_o_005b0084,uVar4,uVar3,j);
  puVar1 = (undefined4 *)(j * 0x50 + DAT_00715eb8);
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  puVar1[2] = uStack_c;
  puVar1[3] = uStack_8;
  puVar1[4] = uStack_4;
  puVar1[6] = uStack_28;
  puVar1[7] = uStack_24;
  puVar1[8] = uStack_20;
  puVar1[5] = uStack_1c;
  i = i + 1;
  if ((int)param_1 <= i) goto LAB_004aac01;
  goto LAB_004aaa34;
}


/* ==== 004aac20 FUN_004aac20 ==== */

int FUN_004aac20(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int i;
  int iVar9;
  int iVar10;
  float local_4c;
  int iStack_44;
  int local_3c;
  
  local_3c = -1;
  local_4c = 3.4e+38;
  FUN_004c3fa0();
  if (((param_2 != 1) && (param_2 != 0)) && (param_2 != -1)) {
    FUN_004c4150(s__s__d___Illegal_side__d__005b0230,s_C__Work_A2IV_Engine_prog_rd_drma_005b00dc,
                 0x81,param_2);
  }
  i = param_1 * 0xf0 + DAT_00715e50;
  iVar9 = *(int *)(i + 0x24);
  iVar10 = *(int *)(i + 0x34);
  i = DAT_0073b0d0 + iVar9 + 0x50 + iVar9 * 0xa8;
  fVar2 = *(float *)(DAT_0073b0d0 + iVar9 + 0x50 + iVar9 * 0xa8);
  fVar3 = *(float *)(i + 4);
  fVar4 = *(float *)(i + 8);
  FUN_004c3fa0(s_Chunk____d__Position_____f__f__f_005b020c,iVar10,(double)fVar2,(double)fVar3,
               (double)fVar4);
  if ((param_2 == 1) || (param_2 == -1)) {
    iVar9 = iVar10 * 0x994;
    FUN_004c3fa0(s__d_waypoints_on_the_RIGHT__005b01f0,*(undefined4 *)(iVar9 + 0xf8 + DAT_00715f00))
    ;
    i = 0;
    if (0 < *(int *)(iVar9 + 0xf8 + DAT_00715f00)) {
      iStack_44 = iVar9 + 0x164;
      do {
        FUN_004c3fa0(s_Checking_index__d__005b01dc,i);
        iVar5 = *(int *)(iStack_44 + DAT_00715f00);
        FUN_004c3fa0(s_Waypoint__d_found__005b01c8,iVar5);
        pfVar1 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        FUN_004c3fa0(s_WP_Position_____f__f__f___005b01ac,(double)fVar6,(double)fVar7,(double)fVar8)
        ;
        fVar6 = fVar6 - fVar2;
        fVar7 = fVar7 - fVar3;
        fVar8 = fVar8 - fVar4;
        FUN_004c3fa0(s_Difference_____f__f__f___005b0190,(double)fVar6,(double)fVar7,(double)fVar8);
        fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
        FUN_004c3fa0(s_Distance____f__005b0180,(double)fVar6);
        FUN_004c3fa0();
        if (fVar6 < local_4c) {
          FUN_004c3fa0(s_Setting_closest_wp_index_to__d__a_005b0138,iVar5);
          local_4c = fVar6;
          local_3c = iVar5;
        }
        iStack_44 = iStack_44 + 4;
        i = i + 1;
      } while (i < *(int *)(iVar9 + 0xf8 + DAT_00715f00));
    }
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    iVar10 = iVar10 * 0x994;
    FUN_004c3fa0(s__d_waypoints_on_the_LEFT__005b011c,*(undefined4 *)(iVar10 + 0xf4 + DAT_00715f00))
    ;
    i = 0;
    if (0 < *(int *)(iVar10 + 0xf4 + DAT_00715f00)) {
      iStack_44 = iVar10 + 0x134;
      do {
        FUN_004c3fa0(s_Checking_index__d__005b01dc,i);
        iVar9 = *(int *)(iStack_44 + DAT_00715f00);
        FUN_004c3fa0(s_Waypoint__d_found__005b01c8,iVar9);
        pfVar1 = (float *)(iVar9 * 0x50 + 8 + DAT_00715eb8);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        FUN_004c3fa0(s_WP_Position_____f__f__f___005b01ac,(double)fVar6,(double)fVar7,(double)fVar8)
        ;
        fVar6 = fVar6 - fVar2;
        fVar7 = fVar7 - fVar3;
        fVar8 = fVar8 - fVar4;
        FUN_004c3fa0(s_Difference_____f__f__f___005b0190,(double)fVar6,(double)fVar7,(double)fVar8);
        fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
        FUN_004c3fa0(s_Distance____f__005b0180,(double)fVar6);
        FUN_004c3fa0();
        if (fVar6 < local_4c) {
          FUN_004c3fa0(s_Setting_closest_wp_index_to__d__a_005b0138,iVar9);
          local_4c = fVar6;
          local_3c = iVar9;
        }
        iStack_44 = iStack_44 + 4;
        i = i + 1;
      } while (i < *(int *)(iVar10 + 0xf4 + DAT_00715f00));
    }
  }
  FUN_004c3fa0(s_Return_WP_index__d__005b0104,local_3c);
  return local_3c;
}


/* ==== 004ab0d0 FUN_004ab0d0 ==== */

undefined4 __thiscall FUN_004ab0d0(void *this,int param_2)

{
  if ((param_2 < 0) || (10 < param_2)) {
    FUN_004c4150(s__s__d____obstacle___d__waypoint_o_005b0268,
                 s_C__Work_A2IV_Engine_prog_rd_drma_005b00dc,0xef,param_2,10);
  }
  return *(undefined4 *)((int)this + param_2 * 4 + 0x28);
}


/* ==== 004ab110 FUN_004ab110 ==== */

void __thiscall FUN_004ab110(void *this,undefined4 param_2)

{
  if (*(int *)((int)this + 0x24) != 10) {
    FUN_004c3fa0(s_adding_object___d_to_list__005b029c,param_2);
    *(undefined4 *)((int)this + *(int *)((int)this + 0x24) * 4 + 0x28) = param_2;
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  return;
}


/* ==== 004ab140 FUN_004ab140 ==== */

void __thiscall FUN_004ab140(void *this,int param_2)

{
  undefined4 *puVar1;
  int i;
  int iVar2;
  int *piVar3;
  
  FUN_004c3fa0(s_clear_object___d_from_list__005b0310,param_2);
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_004c3fa0(s_search_for_object_005b02fc);
    i = 0;
    piVar3 = (int *)((int)this + 0x28);
    do {
      FUN_004c3fa0(s__d__005b02f8,*piVar3);
      iVar2 = i;
      if (*piVar3 == param_2) break;
      i = i + 1;
      piVar3 = piVar3 + 1;
      iVar2 = -1;
    } while (i < 10);
    FUN_004c3fa0(s__005ae60c);
    if (iVar2 != -1) {
      FUN_004c3fa0(s_found_object_in_list__index__d__005b02d4,iVar2);
      if (iVar2 < 9) {
        puVar1 = (undefined4 *)((int)this + iVar2 * 4 + 0x28);
        i = 9 - iVar2;
        iVar2 = iVar2 + i;
        do {
          *puVar1 = puVar1[1];
          puVar1 = puVar1 + 1;
          i = i + -1;
        } while (i != 0);
      }
      FUN_004c3fa0(s_clearing_last_in_list__d__005b02b8,iVar2);
      *(undefined4 *)((int)this + iVar2 * 4 + 0x28) = 0xffffffff;
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    }
  }
  return;
}


/* ==== 004ab200 FUN_004ab200 ==== */

void __thiscall FUN_004ab200(void *this,uint size)

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
  puStack_8 = &LAB_0056f47b;
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
        FUN_005586c5(iVar1,0x50,*(undefined4 *)(iVar1 + -4),FUN_0051ed40);
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
  operator_new_result = operator_new(size * 0x50 + 4);
  uStack_4 = 0;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0x50,size,&LAB_004ab090,FUN_0051ed40);
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


