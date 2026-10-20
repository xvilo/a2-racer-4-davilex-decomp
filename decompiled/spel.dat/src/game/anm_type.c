/* spel.dat — game/anm_type.cpp: 22 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00469440 FUN_00469440 ==== */

bool FUN_00469440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00468d10(param_1,param_3,param_2);
  return iVar1 == 1;
}


/* ==== 004694a0 FUN_004694a0 ==== */

void FUN_004694a0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004694b0 FUN_004694b0 ==== */

void FUN_004694b0(void)

{
  FUN_005584e0(&LAB_004694c0);
  return;
}


/* ==== 004694e0 FUN_004694e0 ==== */

void FUN_004694e0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004694f0 FUN_004694f0 ==== */

void FUN_004694f0(void)

{
  FUN_005584e0(&LAB_00469500);
  return;
}


/* ==== 00469510 FUN_00469510 ==== */

void FUN_00469510(void)

{
  void *operator_new_result;
  undefined4 *in_ECX;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *in_ECX = &PTR_LAB_005769a4;
  *(undefined1 *)(in_ECX + 1) = local_1;
  operator_new_result = operator_new(0xc);
  *(void **)operator_new_result = operator_new_result;
  *(void **)((int)operator_new_result + 4) = operator_new_result;
  in_ECX[2] = operator_new_result;
  in_ECX[3] = 0;
  *in_ECX = &PTR_LAB_00576994;
  return;
}


/* ==== 00469570 FUN_00469570 ==== */

void FUN_00469570(void)

{
  FUN_004698d0();
  return;
}


/* ==== 00469580 FUN_00469580 ==== */

void FUN_00469580(void)

{
  FUN_005584e0(&LAB_00469590);
  return;
}


/* ==== 004695e0 FUN_004695e0 ==== */

void FUN_004695e0(void)

{
  FUN_004698b0();
  FUN_00469600();
  return;
}


/* ==== 00469600 FUN_00469600 ==== */

void FUN_00469600(void)

{
  int *in_ECX;
  int i;
  
  if (*in_ECX != 0) {
    i = 0;
    if (0 < in_ECX[1]) {
      do {
        FUN_0054b339(*(undefined4 *)(*in_ECX + i * 4));
        i = i + 1;
      } while (i < in_ECX[1]);
    }
    FUN_0054b339(*in_ECX);
  }
  return;
}


/* ==== 00469640 FUN_00469640 ==== */

void FUN_00469640(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  void *operator_new_result;
  int *in_ECX;
  uint j;
  uint k;
  int i;
  char *pcVar3;
  char *pcVar4;
  char local_40 [64];
  
  iVar2 = FUN_004c3d60(param_1,0);
  if (*in_ECX != 0) {
    FUN_00469600();
  }
  operator_new_result = operator_new(iVar2 * 4);
  *in_ECX = (int)operator_new_result;
  FUN_004a6980(operator_new_result != (void *)0x0,s__s___d__Could_not_allocate_nuber_005a794c,
               s_C__Work_A2IV_Game_prog_anm_type__005a7928,0x8f,iVar2);
  i = 0;
  if (iVar2 < 1) {
    in_ECX[1] = iVar2;
    return;
  }
  do {
    FUN_004c3f10(i,local_40,0x3f);
    j = 0xffffffff;
    pcVar3 = local_40;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    operator_new_result = operator_new(~j);
    *(void **)(*in_ECX + i * 4) = operator_new_result;
    FUN_004a6980(*(int *)(*in_ECX + i * 4) != 0,s__s___d__Could_not_allocate_name__005a79b8,
                 s_C__Work_A2IV_Game_prog_anm_type__005a7994,0x9a,~j,i);
    j = 0xffffffff;
    pcVar3 = local_40;
    do {
      pcVar4 = pcVar3;
      if (j == 0) break;
      j = j - 1;
      pcVar4 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar4;
    } while (cVar1 != '\0');
    j = ~j;
    pcVar3 = pcVar4 + -j;
    pcVar4 = *(char **)(*in_ECX + i * 4);
    for (k = j >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    i = i + 1;
    for (j = j & 3; j != 0; j = j - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    if (iVar2 <= i) {
      in_ECX[1] = iVar2;
      return;
    }
  } while( true );
}


/* ==== 00469740 FUN_00469740 ==== */

undefined4 FUN_00469740(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  int i;
  
  i = 0;
  iVar1 = *(int *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 4);
  if (0 < in_ECX[1]) {
    do {
      cVar2 = FUN_004b76e0(*(char **)(*in_ECX + i * 4));
      if (cVar2 != '\0') {
        iVar3 = FUN_004b75a0(*(char **)(*in_ECX + i * 4));
        if (iVar1 == iVar3) {
          return 1;
        }
      }
      i = i + 1;
    } while (i < in_ECX[1]);
  }
  return 0;
}


/* ==== 004697c0 FUN_004697c0 ==== */

void FUN_004697c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_1 < 0) || (*(int *)(in_ECX + 0xc) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_004a6980(uVar1,s__s___d__Illegal_index_frame__Fra_005a7a24,
               s_C__Work_A2IV_Game_prog_anm_type__005a7a00,0xdd,param_1);
  *(undefined4 *)(*(int *)(in_ECX + 8) + param_1 * 8) = param_2;
  *(undefined4 *)(*(int *)(in_ECX + 8) + 4 + param_1 * 8) = param_3;
  return;
}


/* ==== 00469860 FUN_00469860 ==== */

void FUN_00469860(int param_1)

{
  void *operator_new_result;
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_004698b0();
    }
    operator_new_result = operator_new(param_1 * 8);
    *(void **)(in_ECX + 8) = operator_new_result;
    FUN_004a6980(operator_new_result != (void *)0x0,s_Could_not_allocate__d_frame_type_005a7abc,
                 s_C__Work_A2IV_Game_prog_anm_type__005a7a98,0x10f,param_1);
  }
  *(int *)(in_ECX + 0xc) = param_1;
  return;
}


/* ==== 004698b0 FUN_004698b0 ==== */

void FUN_004698b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_0054b339(*(int *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 004698d0 FUN_004698d0 ==== */

void FUN_004698d0(void)

{
  undefined4 *in_ECX;
  
  FUN_00558643(in_ECX + 2,0x10,0x40,&LAB_004695a0,&DAT_004695c0);
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[0x102] = 0;
  return;
}


/* ==== 00469900 FUN_00469900 ==== */

void FUN_00469900(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056ace6;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00469a10();
  local_4 = 0xffffffff;
  FUN_005586c5(in_ECX + 8,0x10,0x40,&DAT_004695c0);
  ExceptionList = local_c;
  return;
}


/* ==== 00469960 FUN_00469960 ==== */

void FUN_00469960(int param_1)

{
  int *operator_new_result;
  int *piVar1;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056acfb;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    if (*in_ECX != 0) {
      ExceptionList = &local_c;
      FUN_00469a10();
    }
    operator_new_result = operator_new(param_1 * 0x10 + 4);
    local_4 = 0;
    if (operator_new_result == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = operator_new_result + 1;
      *operator_new_result = param_1;
      FUN_00558643(piVar1,0x10,param_1,&LAB_004695d0,FUN_004695e0);
    }
    local_4 = 0xffffffff;
    *in_ECX = (int)piVar1;
    FUN_004a6980(piVar1 != (int *)0x0,s__s___d__Could_not_allocate__d_an_005a7b04,
                 s_C__Work_A2IV_Game_prog_anm_type__005a7ae0,0x16d,param_1);
  }
  in_ECX[1] = param_1;
  ExceptionList = local_c;
  return;
}


/* ==== 00469a10 FUN_00469a10 ==== */

void FUN_00469a10(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    FUN_005586c5(iVar1,0x10,*(undefined4 *)(iVar1 + -4),FUN_004695e0);
    FUN_0054b339(iVar1 + -4);
    in_ECX[1] = 0;
    return;
  }
  in_ECX[1] = 0;
  return;
}


/* ==== 00469a50 FUN_00469a50 ==== */

void FUN_00469a50(undefined4 param_1)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int j;
  int m;
  int k;
  char *pcVar6;
  char local_c0 [64];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  i = FUN_00448c90(param_1);
  puVar2 = *(undefined1 **)(i + 4);
  i = 0;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  iVar3 = FUN_004c3cd0(s_General_005a7b38,s_NrAnims_005a7b30);
  FUN_00469960(iVar3);
  if (0 < iVar3) {
    do {
      FUN_005587a3(local_80,s__s_d_005a7b48,s_Type_005a7b40,i);
      FUN_004c3d10(local_80,s_AnimNames_005a7b50,local_c0,0x3f);
      j = -1;
      pcVar6 = local_c0;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004a6980(j != -2,s__s___d__AnimName_not_found_for_a_005a7b80,
                   s_C__Work_A2IV_Game_prog_anm_type__005a7b5c,0x1ab,i);
      FUN_00469640(local_c0);
      j = FUN_004c3cd0(local_80,s_NrFrames_005a7bac);
      FUN_00469860(j);
      k = 0;
      if (0 < j) {
        do {
          FUN_005587a3(local_40,s__s_d_005a7bc0,s_Frame_005a7bb8,k);
          FUN_004c3d10(local_80,local_40,local_c0,0x3f);
          m = -1;
          pcVar6 = local_c0;
          do {
            if (m == 0) break;
            m = m + -1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_004a6980(m != -2,s__s___d__Value_not_found_for_anim_005a7bec,
                       s_C__Work_A2IV_Game_prog_anm_type__005a7bc8,0x1ba,i,k);
          m = FUN_004c3d60(local_c0,0);
          FUN_004a6980(m == 2,s__s___d__Incorrect_number_of_argu_005a7c20,0x1bf,i,k);
          uVar4 = FUN_004c3ec0(0);
          uVar5 = FUN_004c3ec0(1);
          FUN_004697c0(k,uVar4,uVar5);
          k = k + 1;
        } while (k < j);
      }
      i = i + 1;
    } while (i < iVar3);
  }
  return;
}


/* ==== 00469d70 FUN_00469d70 ==== */

int FUN_00469d70(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  int i;
  
  i = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      cVar1 = FUN_00469740(param_1);
      if (cVar1 != '\0') {
        return i;
      }
      i = i + 1;
    } while (i < *(int *)(in_ECX + 4));
  }
  return -1;
}


/* ==== 00469dc0 FUN_00469dc0 ==== */

void FUN_00469dc0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  
  FUN_004c3fa0(s_Adding_animation_type_object__d_005a7cd0,param_1);
  iVar1 = *(int *)(in_ECX + 0x408);
  if ((iVar1 < 0) || (0x3f < iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_004a6980(uVar2,s__s___d__Illegal_index_number_of_o_005a7d18,
               s_C__Work_A2IV_Game_prog_anm_type__005a7cf4,0x25c,iVar1);
  iVar1 = FUN_00469d70(param_1);
  FUN_004a6980(iVar1 != -1,s__s___d__Can_t_find_animation_typ_005a7d84,
               s_C__Work_A2IV_Game_prog_anm_type__005a7d60,0x261,param_1);
  *(undefined4 *)(*(int *)(in_ECX + 0x408) * 0x10 + 8 + in_ECX) = param_1;
  *(int *)((*(int *)(in_ECX + 0x408) + 1) * 0x10 + in_ECX) = iVar1;
  *(undefined4 *)(*(int *)(in_ECX + 0x408) * 0x10 + 0xc + in_ECX) = 0;
  *(int *)(in_ECX + 0x408) = *(int *)(in_ECX + 0x408) + 1;
  return;
}


