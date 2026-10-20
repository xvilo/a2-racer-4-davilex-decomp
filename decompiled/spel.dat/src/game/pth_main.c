/* spel.dat — game/pth_main.cpp: 33 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004639f0 FUN_004639f0 ==== */

void FUN_004639f0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00463a00 FUN_00463a00 ==== */

void FUN_00463a00(void)

{
  FUN_005584e0(&LAB_00463a10);
  return;
}


/* ==== 00463a30 FUN_00463a30 ==== */

void FUN_00463a30(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00463a40 FUN_00463a40 ==== */

void FUN_00463a40(void)

{
  FUN_005584e0(&LAB_00463a50);
  return;
}


/* ==== 00463d20 FUN_00463d20 ==== */

void FUN_00463d20(int param_1)

{
  undefined4 this_val;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    this_val = FUN_0049eb50(&DAT_006fbb5c,
                            *(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x30 + DAT_00715e50));
    FUN_0049e570(this_val);
    *(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x5c + DAT_00715e50) = 0;
  }
  return;
}


/* ==== 00464130 FUN_00464130 ==== */

void FUN_00464130(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00464140 FUN_00464140 ==== */

void FUN_00464140(void)

{
  FUN_005584e0(&LAB_00464150);
  return;
}


/* ==== 00464170 FUN_00464170 ==== */

void FUN_00464170(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00464180 FUN_00464180 ==== */

void FUN_00464180(void)

{
  FUN_005584e0(&LAB_00464190);
  return;
}


/* ==== 004641a0 FUN_004641a0 ==== */

int FUN_004641a0(int param_1)

{
  if ((param_1 < 0) || (DAT_00712108 <= param_1)) {
    FUN_004c4150(s__s___d__Path_does_not_exist__Ind_005a66a8,
                 s_C__Work_A2IV_Game_prog_pth_main__005a6684,0x66,param_1);
  }
  return param_1;
}


/* ==== 004641d0 FUN_004641d0 ==== */

void FUN_004641d0(void)

{
  int iVar1;
  int iVar2;
  int i;
  int local_24;
  CHAR local_20 [32];
  
  wsprintfA(local_20,s_etappe_d_pth_005a66d0,DAT_006fb898);
  iVar1 = FUN_005589a5(local_20,s_rb_005a66e0);
  i = 0;
  if (iVar1 == 0) {
    DAT_00712108 = 0;
    return;
  }
  FUN_00558b35();
  if (local_24 != -1) {
    FUN_004c4150(s__s___d__Incorrect_version_path_f_005a6708,
                 s_C__Work_A2IV_Game_prog_pth_main__005a66e4,0x89,local_24,DAT_006fb898);
  }
  FUN_00558b35();
  if (0x28 < DAT_00712108) {
    FUN_004c4150(s___s___d_Too_many_paths_in_use____005a6768,
                 s_C__Work_A2IV_Game_prog_pth_main__005a6744,0x90,DAT_00712108,0x28);
  }
  if (0 < DAT_00712108) {
    do {
      FUN_004641a0(i,4,1,iVar1);
      FUN_00558b35();
      iVar2 = FUN_004641a0(i,4,1,iVar1);
      FUN_00558b35(iVar2 * 3,&DAT_00709f0c + iVar2 * 0x340);
      iVar2 = FUN_004641a0(i,4,1,iVar1);
      FUN_00558b35(iVar2 * 3,&DAT_00709f10 + iVar2 * 0xd0);
      iVar2 = FUN_004641a0(i,4,1,iVar1);
      FUN_00558b35(iVar2 * 3,&DAT_00709f14 + iVar2 * 0xd0);
      iVar2 = FUN_004641a0(i,4,1,iVar1);
      FUN_00558b35(iVar2 * 3,&DAT_00709f18 + iVar2 * 0x340);
      iVar2 = FUN_004641a0(i,4,1,iVar1);
      FUN_00558b35(iVar2 * 3,&DAT_00709f1c + iVar2 * 0x340);
      iVar2 = FUN_004641a0(i);
      if (0x31 < *(int *)(&DAT_00709f1c + iVar2 * 0x340)) {
        iVar2 = FUN_004641a0(i);
        iVar2 = FUN_004641a0(i,*(undefined4 *)(&DAT_00709f1c + iVar2 * 0x340));
        FUN_004c4150(s__s___d__Not_enough_memory_alloca_005a6798,i,(&DAT_00709f10)[iVar2 * 0xd0]);
      }
      iVar2 = FUN_004641a0(i,iVar1);
      iVar2 = FUN_004641a0(i,0x10,*(undefined4 *)(&DAT_00709f1c + iVar2 * 0x340));
      FUN_00558b35(iVar2 * 3,&DAT_00709f20 + iVar2 * 0x340);
      i = i + 1;
    } while (i < DAT_00712108);
  }
  return;
}


/* ==== 00464420 init_3d_paths ==== */

void init_3d_paths(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int i;
  
  FUN_004641d0();
  puVar1 = &DAT_00709b18;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 10;
  } while ((int)puVar1 < 0x709f00);
  i = 0;
  if (0 < DAT_00712108) {
    piVar3 = &DAT_00709f10;
    do {
      iVar2 = FUN_004641a0(i);
      (&DAT_0070a240)[iVar2 * 0xd0] = 0;
      piVar3[0xcd] = -1;
      if (*(code **)(&DAT_005a64c8 + *piVar3 * 0x14) != (code *)0x0) {
        (**(code **)(&DAT_005a64c8 + *piVar3 * 0x14))(i);
      }
      i = i + 1;
      piVar3 = piVar3 + 0xd0;
    } while (i < DAT_00712108);
  }
  return;
}


/* ==== 004644a0 FUN_004644a0 ==== */

void FUN_004644a0(void)

{
  int i;
  int *piVar1;
  
  i = 0;
  if (0 < DAT_00712108) {
    piVar1 = &DAT_00709f10;
    do {
      if (*(code **)(&DAT_005a64d8 + *piVar1 * 0x14) != (code *)0x0) {
        (**(code **)(&DAT_005a64d8 + *piVar1 * 0x14))(i);
      }
      i = i + 1;
      piVar1 = piVar1 + 0xd0;
    } while (i < DAT_00712108);
  }
  return;
}


/* ==== 004644e0 FUN_004644e0 ==== */

void FUN_004644e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_004641a0(*(undefined4 *)(param_1 + 0x18));
    *(int *)(param_1 + 4) =
         (*(int *)(param_1 + 4) / *(int *)(&DAT_00709f1c + iVar1 * 0x340)) *
         *(int *)(&DAT_00709f1c + iVar1 * 0x340);
    return;
  }
  iVar1 = FUN_004641a0(*(undefined4 *)(param_1 + 0x18));
  *(int *)(param_1 + 4) =
       (*(int *)(param_1 + 4) / (*(int *)(&DAT_00709f1c + iVar1 * 0x340) + -1)) *
       (*(int *)(&DAT_00709f1c + iVar1 * 0x340) + -1);
  return;
}


/* ==== 00464540 FUN_00464540 ==== */

void FUN_00464540(float *param_1,undefined4 param_2,int param_3,int param_4,float param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int i;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int iStack_364;
  int iStack_360;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  undefined4 local_340 [7];
  float afStack_324 [201];
  
  iVar1 = FUN_004641a0(param_2);
  puVar4 = &DAT_00709f08 + iVar1 * 0xd0;
  puVar5 = local_340;
  for (i = 0xd0; i != 0; i = i + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = FUN_004641a0(param_2);
  if (*(int *)(&DAT_00709f1c + iVar1 * 0x340) < 1) {
    FUN_004c4150(s__s___d__Path_contains_no_points__005a6828,
                 s_C__Work_A2IV_Game_prog_pth_main__005a6804,0x143,param_2);
  }
  iVar1 = FUN_004641a0(param_2);
  if (*(int *)(&DAT_00709f1c + iVar1 * 0x340) == 1) {
    *param_1 = afStack_324[0];
    param_1[1] = afStack_324[1];
    param_1[2] = afStack_324[2];
    return;
  }
  if (param_6 == 0) {
    iVar1 = FUN_004641a0(param_2);
    iStack_360 = *(int *)(&DAT_00709f1c + iVar1 * 0x340) + -1;
  }
  else {
    iVar1 = FUN_004641a0(param_2);
    iStack_360 = *(int *)(&DAT_00709f1c + iVar1 * 0x340);
  }
  iStack_360 = param_3 / iStack_360;
  iVar1 = param_4 / iStack_360;
  if (param_6 == 0) {
    i = FUN_004641a0(param_2);
    if (*(int *)(&DAT_00709f1c + i * 0x340) + -2 < iVar1) {
      iVar1 = FUN_004641a0(param_2);
      iVar1 = *(int *)(&DAT_00709f1c + iVar1 * 0x340) + -2;
    }
  }
  else {
    i = FUN_004641a0(param_2);
    if (*(int *)(&DAT_00709f1c + i * 0x340) + -1 < iVar1) {
      iVar1 = FUN_004641a0(param_2);
      iVar1 = *(int *)(&DAT_00709f1c + iVar1 * 0x340) + -1;
    }
  }
  iStack_364 = param_4 - iVar1 * iStack_360;
  if (iStack_364 < 0) {
    iStack_364 = 0;
  }
  if (iStack_360 <= iStack_364) {
    iStack_360 = iStack_364 + 1;
  }
  i = iVar1 + -1;
  iVar3 = iVar1 + 1;
  iVar6 = iVar1 + 2;
  if (param_6 == 0) {
    if (i < 0) {
      i = 0;
    }
    iVar2 = FUN_004641a0(param_2);
    if (*(int *)(&DAT_00709f1c + iVar2 * 0x340) + -1 < iVar3) {
      iVar3 = FUN_004641a0(param_2);
      iVar3 = *(int *)(&DAT_00709f1c + iVar3 * 0x340) + -1;
    }
    iVar2 = FUN_004641a0(param_2);
    if (*(int *)(&DAT_00709f1c + iVar2 * 0x340) + -1 < iVar6) {
      iVar6 = FUN_004641a0(param_2);
      iVar6 = *(int *)(&DAT_00709f1c + iVar6 * 0x340) + -1;
    }
  }
  else {
    if (i < 0) {
      i = FUN_004641a0(param_2);
      i = *(int *)(&DAT_00709f1c + i * 0x340) + -1;
    }
    iVar2 = FUN_004641a0(param_2);
    if (*(int *)(&DAT_00709f1c + iVar2 * 0x340) + -1 < iVar3) {
      iVar3 = 0;
      iVar6 = 1;
    }
    else {
      iVar2 = FUN_004641a0(param_2);
      if (*(int *)(&DAT_00709f1c + iVar2 * 0x340) + -1 < iVar6) {
        iVar6 = 0;
      }
    }
  }
  fStack_348 = (afStack_324[iVar3 * 4] - afStack_324[i * 4]) * param_5;
  fStack_350 = afStack_324[iVar1 * 4];
  fStack_34c = afStack_324[iVar3 * 4];
  fStack_344 = (afStack_324[iVar6 * 4] - afStack_324[iVar1 * 4]) * param_5;
  fVar7 = (float10)FUN_00464950(&fStack_350,iStack_364,iStack_360);
  fStack_350 = afStack_324[iVar1 * 4 + 1];
  fStack_34c = afStack_324[iVar3 * 4 + 1];
  fStack_348 = (afStack_324[iVar3 * 4 + 1] - afStack_324[i * 4 + 1]) * param_5;
  fStack_344 = (afStack_324[iVar6 * 4 + 1] - afStack_324[iVar1 * 4 + 1]) * param_5;
  fVar8 = (float10)FUN_00464950(&fStack_350,iStack_364,iStack_360);
  fStack_350 = afStack_324[iVar1 * 4 + 2];
  fStack_348 = (afStack_324[iVar3 * 4 + 2] - afStack_324[i * 4 + 2]) * param_5;
  fStack_34c = afStack_324[iVar3 * 4 + 2];
  fStack_344 = (afStack_324[iVar6 * 4 + 2] - afStack_324[iVar1 * 4 + 2]) * param_5;
  fVar9 = (float10)FUN_00464950(&fStack_350,iStack_364,iStack_360);
  *param_1 = (float)fVar7;
  param_1[1] = (float)fVar8;
  param_1[2] = (float)fVar9;
  return;
}


/* ==== 00464950 FUN_00464950 ==== */

float10 FUN_00464950(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (param_3 < param_2) {
    FUN_004c4150(s___d____s__t__d__bigger_then_numb_005a6880,0xfe,
                 s_C__Work_A2IV_Game_prog_pth_main__005a685c,param_2,param_3);
  }
  fVar1 = (float)param_2 / (float)param_3;
  fVar2 = (float10)FUN_00464a40(fVar1,3);
  fVar3 = (float10)FUN_00464a40(fVar1,2);
  fVar4 = (float10)FUN_00464a40(fVar1,3);
  fVar5 = (float10)FUN_00464a40(fVar1,2);
  fVar6 = (float10)FUN_00464a40(fVar1,3);
  fVar7 = (float10)FUN_00464a40(fVar1,2);
  fVar8 = (float10)FUN_00464a40(fVar1,3);
  fVar9 = (float10)FUN_00464a40(fVar1,2);
  return (float10)(float)(((float10)(float)(fVar2 + fVar2) - fVar3 * (float10)3.0) + (float10)1.0) *
         (float10)*param_1 +
         (float10)(float)(fVar5 * (float10)3.0 + (float10)(float)(fVar4 * (float10)-2.0)) *
         (float10)param_1[1] +
         (float10)(float)(((float10)(float)fVar6 - (fVar7 + fVar7)) + (float10)fVar1) *
         (float10)param_1[2] + ((float10)(float)fVar8 - fVar9) * (float10)param_1[3];
}


/* ==== 00464a40 FUN_00464a40 ==== */

float10 FUN_00464a40(float param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      fVar1 = fVar1 * (float10)param_1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return fVar1;
}


/* ==== 00464a70 FUN_00464a70 ==== */

undefined4 FUN_00464a70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  iVar1 = param_1[6];
  if ((iVar1 < 0) || (DAT_00712108 <= iVar1)) {
    FUN_004c4150(s__s___d__Path_does_not_exist__Pat_005a68d8,
                 s_C__Work_A2IV_Game_prog_pth_main__005a68b4,0x1fc,iVar1,DAT_00712108);
  }
  iVar1 = FUN_004641a0(param_1[6]);
  iVar1 = (&DAT_00709f10)[iVar1 * 0xd0];
  if ((iVar1 < 0) || (0x15 < iVar1)) {
    FUN_004c4150(s__s___d__Unknown_path_type__Path__005a6938,
                 s_C__Work_A2IV_Game_prog_pth_main__005a6914,0x204,param_1[6],iVar1);
  }
  if ((&PTR_LAB_005a64d0)[iVar1 * 5] == (undefined *)0x0) {
    FUN_004c4150(s__s___d__NULL_pointer_for_path_ha_005a6990,
                 s_C__Work_A2IV_Game_prog_pth_main__005a696c,0x20b,param_1[6],iVar1);
  }
  uVar2 = (*(code *)(&PTR_LAB_005a64d0)[iVar1 * 5])(param_1);
  return uVar2;
}


/* ==== 00464b30 FUN_00464b30 ==== */

int FUN_00464b30(void)

{
  int i;
  int *piVar1;
  
  i = 0;
  piVar1 = &DAT_00709b18;
  do {
    if (*piVar1 == 0) {
      return i;
    }
    piVar1 = piVar1 + 10;
    i = i + 1;
  } while ((int)piVar1 < 0x709f00);
  return -1;
}


/* ==== 00464b50 FUN_00464b50 ==== */

int __thiscall FUN_00464b50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 __ftol_result;
  int i;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_00464b30();
  if (iVar2 == -1) {
    return -1;
  }
  iVar3 = iVar2 * 0x28;
  puVar4 = (undefined4 *)(&DAT_00709b1c + iVar3);
  for (i = 9; i != 0; i = i + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  i = *(int *)(&DAT_00709b34 + iVar3);
  FUN_004a6800(&DAT_007128b0);
  __ftol_result = __ftol();
  *(undefined4 *)(&DAT_00709b20 + iVar3) = __ftol_result;
  iVar1 = *(int *)(&DAT_00709f18 + i * 0x340);
  *(undefined4 *)(&DAT_00709b24 + iVar3) = 0;
  if (iVar1 == 0) {
    FUN_004c4150(s__s___d__Time_not_set_for_path__d_005a6a00,
                 s_C__Work_A2IV_Game_prog_pth_main__005a69dc,0x253,i);
  }
  (&DAT_00709b18)[iVar2 * 10] = 1;
  FUN_004644e0(&DAT_00709b1c + iVar3);
  return iVar2;
}


/* ==== 00464c10 FUN_00464c10 ==== */

void FUN_00464c10(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x18 < param_1)) {
    FUN_004c4150(s__s___d__Illegal_index_active_pat_005a6a48,
                 s_C__Work_A2IV_Game_prog_pth_main__005a6a24,0x273,param_1);
  }
  iVar1 = FUN_004641a0(*(undefined4 *)(&DAT_00709b34 + param_1 * 0x28));
  iVar1 = (&DAT_00709f10)[iVar1 * 0xd0];
  if ((iVar1 < 0) || (0x15 < iVar1)) {
    FUN_004c4150(s__s___d__Incorrect_path_type___d_005a6a9c,
                 s_C__Work_A2IV_Game_prog_pth_main__005a6a78,0x27b,iVar1);
  }
  if (*(code **)(&DAT_005a64d4 + iVar1 * 0x14) != (code *)0x0) {
    (**(code **)(&DAT_005a64d4 + iVar1 * 0x14))(&DAT_00709b1c + param_1 * 0x28);
  }
  (&DAT_00709b18)[param_1 * 10] = 0;
  return;
}


/* ==== 00464cb0 FUN_00464cb0 ==== */

void FUN_00464cb0(void)

{
  int iVar1;
  undefined *puVar2;
  int i;
  
  i = 0;
  puVar2 = &DAT_00709b1c;
  do {
    if (*(int *)(puVar2 + -4) != 0) {
      iVar1 = FUN_00464a70(puVar2);
      if (iVar1 != 0) {
        FUN_00464c10(i);
      }
    }
    puVar2 = puVar2 + 0x28;
    i = i + 1;
  } while ((int)puVar2 < 0x709f04);
  return;
}


/* ==== 00464cf0 FUN_00464cf0 ==== */

void FUN_00464cf0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int i;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = DAT_00712108;
  iVar4 = DAT_006fba7c;
  iVar3 = DAT_006fb8f8;
  bVar6 = DAT_005a6680 != DAT_006fba7c;
  DAT_005a6680 = DAT_006fba7c;
  if (bVar6) {
    if (DAT_0071210c != DAT_006fb8f8) {
      if (0 < DAT_00712108) {
        puVar2 = &DAT_0070a240;
        i = DAT_00712108;
        do {
          *puVar2 = 0;
          puVar2 = puVar2 + 0xd0;
          i = i + -1;
        } while (i != 0);
      }
      DAT_0071210c = iVar3;
    }
    i = 0;
    if (0 < iVar1) {
      piVar5 = &DAT_00709f14;
      do {
        if ((((piVar5[-3] != 0) && (piVar5[-3] == iVar4)) &&
            ((*piVar5 == iVar3 + 1 || (*piVar5 == 0)))) && (piVar5[0xcb] == 0)) {
          iVar3 = piVar5[-1];
          if ((iVar3 < 0) || (0x15 < iVar3)) {
            FUN_004c4150(s__s___d__Incorrect_path_type___d_005a6ae0,
                         s_C__Work_A2IV_Game_prog_pth_main__005a6abc,0x2db,iVar3);
          }
          if ((*(code **)(&DAT_005a64cc + iVar3 * 0x14) != (code *)0x0) &&
             (iVar3 = (**(code **)(&DAT_005a64cc + iVar3 * 0x14))(i), iVar3 != 0)) {
            piVar5[0xcb] = piVar5[0xcb] + 1;
          }
        }
        i = i + 1;
        piVar5 = piVar5 + 0xd0;
        iVar3 = DAT_006fb8f8;
        iVar4 = DAT_006fba7c;
      } while (i < DAT_00712108);
    }
  }
  return;
}


/* ==== 00464de0 FUN_00464de0 ==== */

void FUN_00464de0(int param_1)

{
  undefined4 __ftol_result;
  int i;
  
  i = *(int *)(&DAT_00709f1c + param_1 * 0x340) + -1;
  if (0 < i) {
    do {
      i = i + -1;
    } while (i != 0);
  }
  __ftol_result = __ftol();
  *(undefined4 *)(&DAT_00709f18 + param_1 * 0x340) = __ftol_result;
  return;
}


/* ==== 00464e90 FUN_00464e90 ==== */

void FUN_00464e90(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_c [2];
  float local_4;
  
  iVar1 = FUN_004641a0(param_2);
  iVar2 = FUN_004641a0(param_2);
  local_c[0] = *(float *)(&DAT_00709f34 + iVar1 * 0x340) - *(float *)(&DAT_00709f24 + iVar2 * 0x340)
  ;
  iVar1 = FUN_004641a0(param_2);
  iVar2 = FUN_004641a0(param_2);
  local_4 = *(float *)(&DAT_00709f3c + iVar1 * 0x340) - *(float *)(&DAT_00709f2c + iVar2 * 0x340);
  fVar3 = (float10)FUN_00414ec0(local_c);
  *param_1 = 0;
  param_1[1] = (float)-fVar3;
  param_1[2] = 0;
  return;
}


/* ==== 00464f80 FUN_00464f80 ==== */

void FUN_00464f80(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00464f90 FUN_00464f90 ==== */

void FUN_00464f90(void)

{
  FUN_005584e0(&LAB_00464fa0);
  return;
}


/* ==== 00464fc0 FUN_00464fc0 ==== */

void FUN_00464fc0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00464fd0 FUN_00464fd0 ==== */

void FUN_00464fd0(void)

{
  FUN_005584e0(&LAB_00464fe0);
  return;
}


/* ==== 00465440 FUN_00465440 ==== */

void FUN_00465440(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00465450 FUN_00465450 ==== */

void FUN_00465450(void)

{
  FUN_005584e0(&LAB_00465460);
  return;
}


/* ==== 00465480 FUN_00465480 ==== */

void FUN_00465480(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00465490 FUN_00465490 ==== */

void FUN_00465490(void)

{
  FUN_005584e0(&LAB_004654a0);
  return;
}


