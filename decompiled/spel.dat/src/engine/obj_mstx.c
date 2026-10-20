/* spel.dat — engine/obj_mstx.cpp: 17 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004b1e00 FUN_004b1e00 ==== */

void FUN_004b1e00(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[3] == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,in_ECX[1]
                );
    FUN_0054b339(*in_ECX);
  }
  if (in_ECX[3] != 0) {
    FUN_0054b339(in_ECX[4]);
    in_ECX[3] = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


/* ==== 004b1e60 FUN_004b1e60 ==== */

int FUN_004b1e60(void)

{
  int iVar1;
  int iVar2;
  int i;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,in_ECX + 0x14,
                 *(undefined4 *)(in_ECX + 4),in_ECX + 0x2d);
  }
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar1 < iVar2) {
    iVar3 = *(int *)(in_ECX + 0x10);
    i = iVar1;
    do {
      if (*(char *)(iVar3 + i) == '\0') goto LAB_004b1ee2;
      i = i + 1;
    } while (i < iVar2);
  }
  i = 0;
  if (0 < iVar1) {
    iVar3 = *(int *)(in_ECX + 0x10);
    do {
      if (*(char *)(iVar3 + i) == '\0') {
LAB_004b1ee2:
        *(undefined1 *)(iVar3 + i) = 1;
        *(int *)(in_ECX + 8) = i;
        return i;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,in_ECX + 0x14,iVar2,in_ECX + 0x2d);
  return -1;
}


/* ==== 004b1ef0 FUN_004b1ef0 ==== */

void FUN_004b1ef0(uint size)

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
  puStack_8 = &LAB_0056f57b;
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
        FUN_005586c5(iVar1,0x178,*(undefined4 *)(iVar1 + -4),FUN_004b0e80);
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
  operator_new_result = operator_new(size * 0x178 + 4);
  uStack_4 = 2;
  if (operator_new_result == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = operator_new_result + 1;
    *operator_new_result = size;
    FUN_00558643(puVar3,0x178,size,FUN_004b0b20,FUN_004b0e80);
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


/* ==== 004b2050 FUN_004b2050 ==== */

void FUN_004b2050(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[3] != 0) {
    if (in_ECX[3] == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,(int)in_ECX + 0x2d,in_ECX + 5,
                   in_ECX[1]);
      FUN_0054b339(*in_ECX);
    }
    if (in_ECX[3] != 0) {
      FUN_0054b339(in_ECX[4]);
      in_ECX[3] = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  FUN_004c3fa0(s_T_ARRAY___init___16_16s___16_16s_005afa70,(int)in_ECX + 0x2d,in_ECX + 5,0);
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  return;
}


/* ==== 004b2230 FUN_004b2230 ==== */

void FUN_004b2230(uint size)

{
  int j;
  int i;
  
  FUN_004c3fa0(s_Initing__d_damage_objects__005b0c54,size);
  if (DAT_00719c34 != 0) {
    if (DAT_00719c34 == 1) {
      FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_00719c55,&DAT_00719c3c,
                   DAT_00719c2c);
      FUN_0054b339(DAT_00719c28);
    }
    if (DAT_00719c34 != 0) {
      FUN_0054b339(DAT_00719c38);
      DAT_00719c34 = 0;
    }
    FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)size < 0) {
    FUN_004c4150(s__s__d____T_ARRAY_construction__i_005b0024,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0x107,&DAT_00719c55,&DAT_00719c3c,size)
    ;
  }
  DAT_00719c28 = operator_new(size * 4);
  DAT_00719c2c = size;
  DAT_00719c30 = 0;
  DAT_00719c38 = operator_new(size);
  FUN_004c3fa0(s_T_ARRAY___alloc___16_16s___16_16_005af664,&DAT_00719c55,&DAT_00719c3c,DAT_00719c2c)
  ;
  DAT_00719c34 = 1;
  i = 0;
  if (0 < (int)size) {
    do {
      j = i + 1;
      *(undefined1 *)((int)DAT_00719c38 + i) = 0;
      i = j;
    } while (j < (int)size);
  }
  FUN_004c3fa0(s_Initialising____005b0c40);
  i = 0;
  if ((int)size < 1) {
LAB_004b23f1:
    FUN_004c3fa0(s_Done__005b0c38);
    return;
  }
LAB_004b2353:
  j = DAT_00719c30;
  if (DAT_00719c34 == 0) {
    FUN_004c4150(s__s__d____T_ARRAY__get_new__s__d__005afb8c,
                 s_______Libs_win3dlib_Include_arra_005afbcc,0xb9,&DAT_00719c3c,DAT_00719c2c,
                 &DAT_00719c55);
    j = DAT_00719c30;
  }
  for (; j < (int)DAT_00719c2c; j = j + 1) {
    if (*(char *)((int)DAT_00719c38 + j) == '\0') goto LAB_004b2401;
  }
  j = 0;
  if (0 < DAT_00719c30) {
    do {
      if (*(char *)((int)DAT_00719c38 + j) == '\0') goto LAB_004b2401;
      j = j + 1;
    } while (j < DAT_00719c30);
  }
  FUN_004c4150(s__s__d____T_ARRAY__new_array__s_0_005afb40,
               s_______Libs_win3dlib_Include_arra_005afbcc,0xce,&DAT_00719c3c,DAT_00719c2c,
               &DAT_00719c55);
  goto LAB_004b23d9;
LAB_004b2401:
  *(undefined1 *)((int)DAT_00719c38 + j) = 1;
  DAT_00719c30 = j;
LAB_004b23d9:
  i = i + 1;
  *(undefined4 *)((int)DAT_00719c28 + i * 4 + -4) = 0;
  if ((int)size <= i) goto LAB_004b23f1;
  goto LAB_004b2353;
}


/* ==== 004b2410 FUN_004b2410 ==== */

void FUN_004b2410(void)

{
  undefined4 *puVar1;
  int iVar2;
  int i;
  
  i = 0;
  iVar2 = DAT_00719c2c;
  if (0 < DAT_00719c2c) {
    do {
      puVar1 = *(undefined4 **)(DAT_00719c28 + i * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        iVar2 = DAT_00719c2c;
      }
      i = i + 1;
    } while (i < iVar2);
  }
  if (DAT_00719c34 == 1) {
    FUN_004c3fa0(s_T_ARRAY___deleting___16_16s___16_005af6ac,&DAT_00719c55,&DAT_00719c3c,iVar2);
    FUN_0054b339(DAT_00719c28);
  }
  if (DAT_00719c34 != 0) {
    FUN_0054b339(DAT_00719c38);
    DAT_00719c34 = 0;
  }
  FUN_004c3fa0(s___done_deleting_T_ARRAY_005af690);
  return;
}


/* ==== 004b2580 FUN_004b2580 ==== */

int FUN_004b2580(char *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint i;
  int j;
  char *pcVar5;
  int iVar6;
  
  i = 0xffffffff;
  j = 0;
  pcVar5 = param_1;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  bVar3 = false;
  FUN_004c3fa0(s_Zoeken_naar___s_005b0cb4,param_1);
  if (0 < DAT_0073b1b4) {
    iVar6 = 0;
    do {
      if (bVar3) {
        return j;
      }
      if ((iVar6 < 0) || (DAT_0073b1b4 <= j)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                     s_______Libs_win3dlib_Include_arra_005afbcc,0x43,j,&DAT_0073b1c4,DAT_0073b1b4,
                     &DAT_0073b1dd);
      }
      if (*(char *)(DAT_0073b1c0 + j) == '\0') {
LAB_004b26b4:
        j = j + 1;
        iVar6 = iVar6 + 0x48;
      }
      else {
        FUN_004c3fa0(s_Compare__s_with_005b0ca4,param_1);
        puVar1 = (undefined4 *)(iVar6 + 0x14 + DAT_0073b1b0);
        FUN_004c3fa0(s__s_005b0c9c,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
        puVar1 = (undefined4 *)(iVar6 + 0x14 + DAT_0073b1b0);
        if (*(int *)(iVar6 + 0x18 + DAT_0073b1b0) == 0) {
          FUN_004c4150(s__s__d____string_is_not_initialis_005969b0,
                       s_______Libs_win3dlib_Include_str__005aff20,0x24);
        }
        iVar4 = FUN_00567c10(param_1,*puVar1,~i - 5);
        if (iVar4 != 0) goto LAB_004b26b4;
        bVar3 = true;
        puVar1 = (undefined4 *)(iVar6 + 0x14 + DAT_0073b1b0);
        FUN_004c3fa0(s_Found__s_005b0c90,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
      }
    } while (j < DAT_0073b1b4);
    if (bVar3) {
      return j;
    }
  }
  FUN_004c3fa0(s_Need_to_create_new_texture__s_005b0c70,param_1);
  return -1;
}


/* ==== 004b26f0 FUN_004b26f0 ==== */

void FUN_004b26f0(int *source,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_004b2580(source);
  if (iVar1 == -1) {
    if (param_2 != 0) {
      if (param_3 != 0) {
        FUN_004b8e00(source,param_4);
        return;
      }
      FUN_004b91c0(source,param_4);
      return;
    }
    FUN_004b94e0((char *)source);
  }
  return;
}


/* ==== 004b2740 FUN_004b2740 ==== */

undefined4
FUN_004b2740(char *str1,int *source,char *param_3,undefined4 *param_4,undefined4 *param_5,
            int param_6,int param_7,int *param_8)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  int j;
  int *piVar4;
  int __strcmpi_result;
  uint k;
  uint m;
  int i;
  char *str2;
  int iVar5;
  char *pcVar6;
  
  i = 0;
  str2 = &DAT_00719c78;
  do {
    if ((-1 < *(int *)(str2 + 0x80)) && (j = __strcmpi(str1,str2), j == 0)) {
      if (i != -1) {
        *param_4 = (&DAT_00719cf8)[i * 0x22];
        *param_5 = (&DAT_00719cfc)[i * 0x22];
        return 1;
      }
      break;
    }
    str2 = str2 + 0x88;
    i = i + 1;
  } while ((int)str2 < 0x73afb8);
  i = 0;
  piVar4 = &DAT_00719cf8;
  do {
    if (*piVar4 < 0) break;
    piVar4 = piVar4 + 0x22;
    i = i + 1;
  } while ((int)piVar4 < 0x73b038);
  if (i == 1000) goto LAB_004b2931;
  bVar3 = false;
  j = 0;
  if (DAT_0073b5cc < 1) {
LAB_004b286a:
    j = FUN_004bc8c0(2,param_3);
  }
  else {
    iVar5 = 0;
    do {
      if (bVar3) goto LAB_004b2865;
      if ((iVar5 < 0) || (DAT_0073b5cc <= j)) {
        FUN_004c4150(s__s__d____T_ARRAY__get_used___ill_0059133c,
                     s_______Libs_win3dlib_Include_arra_005afbcc,0x43,j,&DAT_0073b5dc,DAT_0073b5cc,
                     &DAT_0073b5f5);
      }
      if (*(char *)(DAT_0073b5d8 + j) == '\x01') {
        puVar1 = (undefined4 *)(iVar5 + 0x98 + DAT_0073b5c8);
        if (*(int *)(iVar5 + 0x9c + DAT_0073b5c8) == 0) {
          FUN_004c4150(s__s__d____string_is_not_initialis_005969b0,
                       s_______Libs_win3dlib_Include_str__005aff20,0x24);
        }
        __strcmpi_result = __strcmpi(param_3,(char *)*puVar1);
        if (__strcmpi_result != 0) goto LAB_004b284d;
        bVar3 = true;
      }
      else {
LAB_004b284d:
        j = j + 1;
        iVar5 = iVar5 + 0xac;
      }
    } while (j < DAT_0073b5cc);
    if (!bVar3) goto LAB_004b286a;
LAB_004b2865:
    if (j == -1) goto LAB_004b286a;
  }
  (&DAT_00719cf8)[i * 0x22] = j;
  j = FUN_004b2580(source);
  if (j == -1) {
    if (param_6 == 0) {
      j = FUN_004b94e0((char *)source);
    }
    else if (param_7 == 0) {
      j = FUN_004b91c0(source,param_8);
    }
    else {
      j = FUN_004b8e00(source,param_8);
    }
  }
  (&DAT_00719cfc)[i * 0x22] = j;
  k = 0xffffffff;
  do {
    str2 = str1;
    if (k == 0) break;
    k = k - 1;
    str2 = str1 + 1;
    cVar2 = *str1;
    str1 = str2;
  } while (cVar2 != '\0');
  k = ~k;
  str2 = str2 + -k;
  pcVar6 = &DAT_00719c78 + i * 0x88;
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)str2;
    str2 = str2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *pcVar6 = *str2;
    str2 = str2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (i != -1) {
    *param_4 = (&DAT_00719cf8)[i * 0x22];
    *param_5 = (&DAT_00719cfc)[i * 0x22];
    return 1;
  }
LAB_004b2931:
  FUN_004c4150(s_Error_during_object_loading____s_005b0cc8,
               s_C__Work_A2IV_Engine_prog_obj_mst_005b0cf0,0x1cc);
  return 1;
}


/* ==== 004b2a10 FUN_004b2a10 ==== */

void FUN_004b2a10(float *param_1,float param_2,undefined4 param_3,float param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_8;
  
  iVar3 = (DAT_005b23bc & param_5) * 4;
  fVar1 = *(float *)(iVar3 + DAT_0073b530);
  fVar2 = *(float *)(iVar3 + DAT_0073b578);
  *param_1 = param_2 * fVar2 - param_4 * fVar1;
  param_1[1] = local_8;
  param_1[2] = param_2 * fVar1 + param_4 * fVar2;
  return;
}


/* ==== 004b2b10 FUN_004b2b10 ==== */

undefined4 FUN_004b2b10(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = FUN_004a8c50();
  iVar6 = FUN_004a8c50();
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  iVar7 = DAT_0073b0d0 + *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  fVar2 = *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8) - *(float *)(iVar7 + 0x50);
  fVar4 = *(float *)(DAT_0073b0d0 + iVar1 + 0x58 + iVar1 * 0xa8) - *(float *)(iVar7 + 0x58);
  fVar3 = *(float *)(DAT_0073b5c8 + 0x74 + iVar6 * 0xac) +
          *(float *)(DAT_0073b5c8 + 0x74 + iVar5 * 0xac);
  if (fVar2 * fVar2 + fVar4 * fVar4 < fVar3 * fVar3) {
    return 1;
  }
  return 0;
}


/* ==== 004b2cb0 FUN_004b2cb0 ==== */

undefined4 FUN_004b2cb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  FUN_004c3fa0(s_TXTCACHE_Adding_texture__d_005b0db4,param_1);
  if ((char)in_ECX[2] == '\0') {
    FUN_004c3fa0(s_Texture_cache_not_yet_filled_whi_005b0d88);
    return 0;
  }
  param_1 = param_1 * 0x48;
  iVar2 = *(int *)(param_1 + 0x24 + DAT_0073b1b0);
  iVar3 = *(int *)(DAT_0073b1b0 + 0x24 + *in_ECX * 0x48);
  iVar1 = DAT_0073b1b0 + *in_ECX * 0x48;
  if ((iVar2 == iVar3) && (*(int *)(param_1 + 0x28 + DAT_0073b1b0) == *(int *)(iVar1 + 0x28))) {
    *(undefined4 *)(param_1 + 8 + DAT_0073b1b0) = *(undefined4 *)(iVar1 + 8);
    piVar4 = *(int **)(DAT_0073b1b0 + 8 + *in_ECX * 0x48);
    (**(code **)(*piVar4 + 4))(piVar4);
    *(undefined4 *)(param_1 + 0x10 + DAT_0073b1b0) =
         *(undefined4 *)(DAT_0073b1b0 + 0x10 + *in_ECX * 0x48);
    piVar4 = *(int **)(param_1 + 0x10 + DAT_0073b1b0);
    (**(code **)(*piVar4 + 4))(piVar4);
    *(undefined4 *)(param_1 + DAT_0073b1b0) = *(undefined4 *)(DAT_0073b1b0 + *in_ECX * 0x48);
    return 1;
  }
  FUN_004c3fa0(s_Texture_cache_width___d__not_equ_005b0d4c,iVar2,iVar3);
  return 0;
}


/* ==== 004b2d80 FUN_004b2d80 ==== */

void FUN_004b2d80(void)

{
  undefined4 in_ECX;
  
  FUN_00558643(in_ECX,0xc,2,&LAB_004b2ca0,FUN_0051ed40);
  return;
}


/* ==== 004b2db0 FUN_004b2db0 ==== */

void FUN_004b2db0(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  FUN_004c3fa0(s_TXTCACHE_Filling_pipeline__d_005b0dd0,param_1);
  piVar1 = (int *)(in_ECX + param_1 * 0xc);
  FUN_004c3fa0(s_TXTCACHE_Filling_with_texture__d_005b0d28,param_2);
  *(undefined4 *)(DAT_0073b1b0 + 0x2c + param_2 * 0x48) = 4;
  *piVar1 = param_2;
  *(undefined1 *)(piVar1 + 2) = 1;
  piVar1[1] = param_2;
  return;
}


/* ==== 004b2e00 FUN_004b2e00 ==== */

void FUN_004b2e00(undefined4 param_1,undefined4 param_2)

{
  FUN_004c3fa0(s_TXTCACHE_Adding_to_pipeline__d_005b0df0,param_1);
  FUN_004b2cb0(param_2);
  return;
}


/* ==== 004b2e30 FUN_004b2e30 ==== */

undefined4 FUN_004b2e30(int param_1)

{
  int in_ECX;
  
  return CONCAT31((int3)((uint)(param_1 * 3) >> 8),*(undefined1 *)(in_ECX + 8 + param_1 * 0xc));
}


/* ==== 004b2e40 FUN_004b2e40 ==== */

void FUN_004b2e40(int param_1)

{
  int in_ECX;
  int iVar1;
  int i;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 4);
  i = 2;
  iVar1 = DAT_0073b1b0;
  do {
    if (((*(int *)(iVar1 + 8 + piVar2[-1] * 0x48) == *(int *)(param_1 * 0x48 + 8 + iVar1)) &&
        (*(int *)(param_1 * 0x48 + 0x2c + iVar1) == 4)) && (*piVar2 != param_1)) {
      FUN_004ba4c0(param_1);
      *piVar2 = param_1;
      iVar1 = DAT_0073b1b0;
    }
    piVar2 = piVar2 + 3;
    i = i + -1;
  } while (i != 0);
  return;
}


