/* spel.dat — game/ai_wmap.cpp: 23 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00421f50 FUN_00421f50 ==== */

undefined4 FUN_00421f50(int param_1)

{
  int i;
  
  FUN_00415d20(param_1);
  FUN_00450b30(param_1,1);
  i = 0;
  if (0 < *(int *)(param_1 * 0xf0 + 0xac + DAT_00715e50)) {
    do {
      FUN_004a8600(i);
      FUN_004b5770();
      i = i + 1;
    } while (i < *(int *)(param_1 * 0xf0 + 0xac + DAT_00715e50));
  }
  return 1;
}


/* ==== 00422000 FUN_00422000 ==== */

void FUN_00422000(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00422010 FUN_00422010 ==== */

void FUN_00422010(void)

{
  FUN_005584e0(&LAB_00422020);
  return;
}


/* ==== 00422040 FUN_00422040 ==== */

void FUN_00422040(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00422050 FUN_00422050 ==== */

void FUN_00422050(void)

{
  FUN_005584e0(&LAB_00422060);
  return;
}


/* ==== 004220d0 FUN_004220d0 ==== */

int FUN_004220d0(int param_1,int param_2,int param_3,int param_4)

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
  int k;
  float local_54;
  int m;
  int iStack_44;
  int local_40;
  int j;
  
  local_40 = -1;
  local_54 = 3.4e+38;
  if (((param_2 != 1) && (param_2 != 0)) && (param_2 != -1)) {
    FUN_004c4150(s__s__d___Illegal_side__d__005952f4,s_C__Work_A2IV_Game_prog_ai_wmap_c_005952d0,
                 0x89,param_2);
  }
  i = param_1 * 0x50 + 8 + DAT_00715eb8;
  fVar2 = *(float *)(param_1 * 0x50 + 8 + DAT_00715eb8);
  fVar3 = *(float *)(i + 4);
  fVar4 = *(float *)(i + 8);
  FUN_004c3fa0(s_Chunk____d__Position_____f__f__f_00595310,param_3,(double)fVar2,(double)fVar3,
               (double)fVar4);
  if ((param_2 == 1) || (param_2 == -1)) {
    i = param_3 * 0x994;
    FUN_004c3fa0(s__d_waypoints_on_the_RIGHT__00595334,*(undefined4 *)(i + 0xf8 + DAT_00715f00));
    if (-param_4 < param_4) {
      j = param_4 * 2;
      do {
        FUN_004a71e0();
        k = 0;
        if (0 < *(int *)(i + 0xf8 + DAT_00715f00)) {
          m = i + 0x164;
          do {
            FUN_004c3fa0(s_Checking_index__d__00595350,k);
            iVar5 = *(int *)(m + DAT_00715f00);
            FUN_004c3fa0(s_Waypoint__d_found__00595364,iVar5);
            pfVar1 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            FUN_004c3fa0(s_WP_Position_____f__f__f___00595378,(double)fVar6,(double)fVar7,
                         (double)fVar8);
            fVar6 = fVar6 - fVar2;
            fVar7 = fVar7 - fVar3;
            fVar8 = fVar8 - fVar4;
            FUN_004c3fa0(s_Difference_____f__f__f___00595394,(double)fVar6,(double)fVar7,
                         (double)fVar8);
            fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
            FUN_004c3fa0(s_Distance____f__005953b0,(double)fVar6);
            FUN_004c3fa0();
            if (fVar6 < local_54) {
              FUN_004c3fa0(s_Setting_closest_wp_index_to__d__a_005953d0,iVar5);
              local_54 = fVar6;
              local_40 = iVar5;
            }
            m = m + 4;
            k = k + 1;
          } while (k < *(int *)(i + 0xf8 + DAT_00715f00));
        }
        j = j + -1;
      } while (j != 0);
    }
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    param_3 = param_3 * 0x994;
    FUN_004c3fa0(s__d_waypoints_on_the_LEFT__00595408,*(undefined4 *)(param_3 + 0xf4 + DAT_00715f00)
                );
    if (-param_4 < param_4) {
      m = param_4 * 2;
      do {
        FUN_004a71e0();
        i = 0;
        if (0 < *(int *)(param_3 + 0xf4 + DAT_00715f00)) {
          iStack_44 = param_3 + 0x134;
          do {
            FUN_004c3fa0(s_Checking_index__d__00595424,i);
            k = *(int *)(iStack_44 + DAT_00715f00);
            FUN_004c3fa0(s_Waypoint__d_found__00595438,k);
            pfVar1 = (float *)(k * 0x50 + 8 + DAT_00715eb8);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            FUN_004c3fa0(s_WP_Position_____f__f__f___0059544c,(double)fVar6,(double)fVar7,
                         (double)fVar8);
            fVar6 = fVar6 - fVar2;
            fVar7 = fVar7 - fVar3;
            fVar8 = fVar8 - fVar4;
            FUN_004c3fa0(s_Difference_____f__f__f___00595468,(double)fVar6,(double)fVar7,
                         (double)fVar8);
            fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
            FUN_004c3fa0(s_Distance____f__00595484,(double)fVar6);
            FUN_004c3fa0();
            if (fVar6 < local_54) {
              FUN_004c3fa0(s_Setting_closest_wp_index_to__d__a_005954a4,k);
              local_54 = fVar6;
              local_40 = k;
            }
            iStack_44 = iStack_44 + 4;
            i = i + 1;
          } while (i < *(int *)(param_3 + 0xf4 + DAT_00715f00));
        }
        m = m + -1;
      } while (m != 0);
    }
  }
  FUN_004c3fa0(s_Return_WP_index__d__005954dc,local_40);
  return local_40;
}


/* ==== 004225a0 FUN_004225a0 ==== */

undefined4 FUN_004225a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_005d332c;
  do {
    puVar1[-1] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 6;
  } while ((int)puVar1 < 0x5d33ec);
  return 1;
}


/* ==== 004226f0 FUN_004226f0 ==== */

int FUN_004226f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int i;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (&DAT_005d333c)[param_1 * 6];
  if ((iVar2 == 1) && ((&DAT_005d3338)[param_1 * 6] == 1)) {
    switch(param_3) {
    case 0:
      return *(int *)(param_2 * 0x50 + 0x18 + DAT_00715eb8);
    case 1:
switchD_0042271d_caseD_1:
      return *(int *)(param_2 * 0x50 + 0x14 + DAT_00715eb8);
    case 2:
switchD_0042271d_caseD_2:
      return *(int *)(param_2 * 0x50 + 0x1c + DAT_00715eb8);
    case 3:
      goto switchD_0042271d_caseD_3;
    default:
      return -1;
    }
  }
  if ((iVar2 == -1) && ((&DAT_005d3338)[param_1 * 6] == -1)) {
    iVar2 = FUN_004a71e0((&DAT_005d332c)[param_1 * 6] + 1);
    switch(param_3) {
    case 0:
      i = 0;
      iVar1 = *(int *)(DAT_00715f00 + 0xf4 + iVar2 * 0x994);
      if (iVar1 < 1) {
        return -1;
      }
      piVar4 = (int *)(DAT_00715f00 + iVar2 * 0x994 + 0x134);
      do {
        iVar2 = *(int *)(*piVar4 * 0x50 + 0x18 + DAT_00715eb8);
        if (iVar2 == param_2) {
          return iVar2;
        }
        i = i + 1;
        piVar4 = piVar4 + 1;
      } while (i < iVar1);
      return -1;
    case 1:
switchD_00422770_caseD_1:
      return *(int *)(param_2 * 0x50 + 0x20 + DAT_00715eb8);
    case 2:
      if ((*(byte *)(param_2 * 0x50 + DAT_00715eb8) & 8) == 0) {
        i = 0;
        iVar1 = *(int *)(DAT_00715f00 + 0xf4 + iVar2 * 0x994);
        if (0 < iVar1) {
          piVar4 = (int *)(DAT_00715f00 + iVar2 * 0x994 + 0x134);
          do {
            iVar2 = *(int *)(*piVar4 * 0x50 + 0x1c + DAT_00715eb8);
            if (iVar2 == param_2) {
              return iVar2;
            }
            i = i + 1;
            piVar4 = piVar4 + 1;
          } while (i < iVar1);
        }
        return -1;
      }
      FUN_004c5930(0,10,0x32,s__d__SIDESWITCH_FROM_LEFT_SIDE_BA_005954f4,0);
      uVar6 = (&DAT_005d332c)[param_1 * 6];
      uVar5 = 1;
LAB_00422947:
      iVar2 = FUN_004220d0(param_2,uVar5,uVar6,10);
      return *(int *)(iVar2 * 0x50 + 0x14 + DAT_00715eb8);
    case 3:
switchD_00422770_caseD_3:
      return *(int *)(param_2 * 0x50 + 0x14 + DAT_00715eb8);
    }
  }
  else if ((iVar2 == 1) && ((&DAT_005d3338)[param_1 * 6] == -1)) {
    iVar2 = FUN_004a71e0((&DAT_005d332c)[param_1 * 6] + -1);
    switch(param_3) {
    case 0:
      i = 0;
      iVar1 = *(int *)(DAT_00715f00 + 0xf8 + iVar2 * 0x994);
      if (iVar1 < 1) {
        return -1;
      }
      piVar4 = (int *)(DAT_00715f00 + iVar2 * 0x994 + 0x164);
      do {
        iVar2 = *(int *)(*piVar4 * 0x50 + 0x18 + DAT_00715eb8);
        if (iVar2 == param_2) {
          return iVar2;
        }
        i = i + 1;
        piVar4 = piVar4 + 1;
      } while (i < iVar1);
      return -1;
    case 1:
      goto switchD_00422770_caseD_1;
    case 2:
      if ((*(byte *)(param_2 * 0x50 + DAT_00715eb8) & 8) == 0) {
        i = 0;
        iVar1 = *(int *)(DAT_00715f00 + 0xf8 + iVar2 * 0x994);
        if (iVar1 < 1) {
          return -1;
        }
        piVar4 = (int *)(DAT_00715f00 + iVar2 * 0x994 + 0x164);
        do {
          iVar2 = *(int *)(*piVar4 * 0x50 + 0x1c + DAT_00715eb8);
          if (iVar2 == param_2) {
            return iVar2;
          }
          i = i + 1;
          piVar4 = piVar4 + 1;
        } while (i < iVar1);
        return -1;
      }
      FUN_004c5930(0,10,0x32,s__d__SIDESWITCH_FROM_RIGHT_SIDE_B_00595534,0);
      uVar6 = (&DAT_005d332c)[param_1 * 6];
      uVar5 = 0;
      goto LAB_00422947;
    case 3:
      goto switchD_00422770_caseD_3;
    }
  }
  else if ((iVar2 == -1) && ((&DAT_005d3338)[param_1 * 6] == 1)) {
    switch(param_3) {
    case 0:
      pbVar3 = (byte *)(param_2 * 0x50 + DAT_00715eb8);
      if ((*pbVar3 & 8) == 0) {
        return *(int *)(pbVar3 + 0x18);
      }
      FUN_004c5930(0,10,0x32,s__d__SIDESWITCH_FROM_RIGHT_SIDE_F_00595574,0);
      param_2 = FUN_004220d0(param_2,1,(&DAT_005d332c)[param_1 * 6],10);
      break;
    case 1:
      goto switchD_0042271d_caseD_1;
    case 2:
      goto switchD_0042271d_caseD_2;
    case 3:
switchD_0042271d_caseD_3:
      break;
    default:
      goto switchD_00422770_default;
    }
    return *(int *)(param_2 * 0x50 + 0x20 + DAT_00715eb8);
  }
switchD_00422770_default:
  return -1;
}


/* ==== 00422ab0 FUN_00422ab0 ==== */

undefined4 FUN_00422ab0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 * 0x50 + 8 + DAT_00715eb8);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return 1;
}


/* ==== 00422ae0 FUN_00422ae0 ==== */

undefined4 FUN_00422ae0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int i;
  
  i = 0;
  param_1 = param_1 * 0x50;
  puVar2 = param_2;
  if (*(int *)(param_1 + 0x24 + DAT_00715eb8) < 1) {
    *param_2 = 0xffffffff;
    return *(undefined4 *)(param_1 + 0x24 + DAT_00715eb8);
  }
  do {
    uVar1 = FUN_004ab0d0(i);
    *puVar2 = uVar1;
    i = i + 1;
    puVar2 = puVar2 + 1;
  } while (i < *(int *)(param_1 + 0x24 + DAT_00715eb8));
  param_2[i] = 0xffffffff;
  return *(undefined4 *)(param_1 + 0x24 + DAT_00715eb8);
}


/* ==== 00422b50 FUN_00422b50 ==== */

undefined4 FUN_00422b50(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_1 * 0x994 + 0xf8 + DAT_00715f00);
  *param_2 = *(undefined4 *)(param_1 * 0x994 + 0xf4 + DAT_00715f00);
  return 1;
}


/* ==== 00422b90 FUN_00422b90 ==== */

int FUN_00422b90(int param_1,int param_2)

{
  int iVar1;
  int i;
  int *piVar2;
  
  i = 0;
  iVar1 = DAT_00715f00 + param_1 * 0x994;
  if (0 < *(int *)(iVar1 + 0xf4)) {
    piVar2 = (int *)(iVar1 + 0x134);
    do {
      if (param_2 == *piVar2) {
        return i;
      }
      i = i + 1;
      piVar2 = piVar2 + 1;
    } while (i < *(int *)(iVar1 + 0xf4));
  }
  i = 0;
  if (0 < *(int *)(iVar1 + 0xf8)) {
    piVar2 = (int *)(iVar1 + 0x164);
    do {
      if (param_2 == *piVar2) {
        return i;
      }
      i = i + 1;
      piVar2 = piVar2 + 1;
    } while (i < *(int *)(iVar1 + 0xf8));
  }
  return -1;
}


/* ==== 00422c00 FUN_00422c00 ==== */

float10 FUN_00422c00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float local_30;
  int i;
  undefined1 local_c [12];
  
  fVar9 = (float10)3.4028235e+38;
  local_30 = (float)fVar9;
  iVar6 = *(int *)(param_2 * 0x50 + 0x24 + DAT_00715eb8);
  if ((0 < iVar6) && (i = 0, 0 < iVar6)) {
    do {
      iVar6 = FUN_004ab0d0(i);
      if ((iVar6 != param_1) &&
         ((iVar6 = iVar6 * 0xf0, *(int *)(iVar6 + 0x5c + DAT_00715e50) == 1 &&
          (*(float *)(iVar6 + 0xc4 + DAT_00715e50) < local_30)))) {
        pfVar7 = (float *)FUN_004b4070(local_c,DAT_0073b0d0 +
                                               *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9
                                               + 0x10);
        iVar1 = *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
        iVar2 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
        iVar8 = DAT_0073b0d0 + iVar2;
        fVar3 = *(float *)(iVar8 + 0x50 + iVar2 * 0xa8) - *(float *)(iVar1 + 0x50);
        fVar4 = *(float *)(iVar8 + 0x54 + iVar2 * 0xa8) - *(float *)(iVar1 + 0x54);
        fVar5 = *(float *)(iVar8 + iVar2 * 0xa8 + 0x58) - *(float *)(iVar1 + 0x58);
        fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
        if (0.0 < (fVar5 / fVar4) * *pfVar7 - (fVar3 / fVar4) * pfVar7[2]) {
          local_30 = *(float *)(iVar6 + 0xc4 + DAT_00715e50);
        }
      }
      i = i + 1;
    } while (i < *(int *)(param_2 * 0x50 + 0x24 + DAT_00715eb8));
    fVar9 = (float10)local_30;
  }
  return fVar9;
}


/* ==== 00422d90 FUN_00422d90 ==== */

uint FUN_00422d90(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char local_1;
  
  local_1 = '\0';
  iVar5 = param_2 * 0x50;
  if ((*(byte *)(iVar5 + DAT_00715eb8) & 4) != 0) {
    return DAT_00715eb8 & 0xffffff00;
  }
  uVar4 = DAT_00715eb8;
  if (0 < *(int *)(iVar5 + 0x24 + DAT_00715eb8)) {
    param_2 = 0;
    do {
      uVar4 = DAT_00715eb8;
      if (local_1 != '\0') goto LAB_00422ebb;
      iVar2 = FUN_004ab0d0(param_2);
      iVar3 = FUN_00414070(iVar2);
      bVar1 = false;
      if ((iVar3 != -1) && ((&DAT_005d1bac)[iVar3 * 0xe] == 1)) {
        bVar1 = true;
      }
      iVar2 = iVar2 * 0xf0;
      if (*(int *)(iVar2 + 0x5c + DAT_00715e50) == 1) {
        iVar3 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24 + DAT_00715e50) * 0xa9;
        iVar3 = FUN_00403ea0(param_1,*(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
                             *(undefined4 *)(iVar3 + 0x58));
        if ((((0x200 < iVar3) && (iVar3 < 0xc00)) &&
            (*(float *)(iVar2 + 0xc4 + DAT_00715e50) <
             *(float *)(param_1 * 0xf0 + 0xc4 + DAT_00715e50))) && (!bVar1)) {
          local_1 = '\x01';
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(iVar5 + 0x24 + DAT_00715eb8));
    uVar4 = CONCAT31((int3)(DAT_00715eb8 >> 8),local_1);
    if (local_1 != '\0') {
LAB_00422ebb:
      return uVar4 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


/* ==== 00422ed0 FUN_00422ed0 ==== */

undefined4 FUN_00422ed0(int param_1)

{
  int iVar1;
  int i;
  
  i = 0;
  if (0 < *(int *)(param_1 * 0x50 + 0x24 + DAT_00715eb8)) {
    do {
      iVar1 = FUN_004ab0d0(i);
      if (*(int *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) == 1) {
        return 0;
      }
      i = i + 1;
    } while (i < *(int *)(param_1 * 0x50 + 0x24 + DAT_00715eb8));
  }
  return 1;
}


/* ==== 00422f20 FUN_00422f20 ==== */

undefined4 FUN_00422f20(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int i;
  
  if ((*(byte *)(param_2 * 0x50 + DAT_00715eb8) & 4) != 0) {
    return 0;
  }
  i = 0;
  if (0 < param_3) {
    do {
      iVar1 = *(int *)(param_2 * 0x50 + 0x20 + DAT_00715eb8);
      if (iVar1 == -1) {
        return 1;
      }
      cVar2 = FUN_00422ed0(iVar1);
      if (cVar2 == '\0') {
        return 0;
      }
      i = i + 1;
    } while (i < param_3);
  }
  return 1;
}


/* ==== 00422f70 FUN_00422f70 ==== */

int FUN_00422f70(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  
  if (param_3 == 0) {
    iVar1 = *(int *)(param_2 * 0x50 + 0x18 + DAT_00715eb8);
    if (iVar1 != -1) {
      cVar2 = FUN_00422f20(param_1,iVar1,param_4,param_5);
      if (cVar2 == '\x01') {
        return iVar1;
      }
    }
  }
  else if (param_3 == 1) {
    iVar1 = *(int *)(param_2 * 0x50 + 0x14 + DAT_00715eb8);
    if (iVar1 != -1) {
      cVar2 = FUN_00422d90(param_1,iVar1,param_5);
      if (cVar2 == '\x01') {
        return iVar1;
      }
    }
  }
  else if ((param_3 == 2) && (iVar1 = *(int *)(param_2 * 0x50 + 0x1c + DAT_00715eb8), iVar1 != -1))
  {
    cVar2 = FUN_00422f20(param_1,iVar1,param_4,param_5);
    if (cVar2 == '\x01') {
      return iVar1;
    }
  }
  return -1;
}


/* ==== 00423040 FUN_00423040 ==== */

undefined4 FUN_00423040(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int i;
  int iVar3;
  int j;
  
  i = 0;
  iVar3 = *(int *)(param_1 * 0xf0 + 0x3c + DAT_00715e50);
  iVar2 = DAT_00715eb8;
  if (0 < param_2) {
    do {
      if (iVar3 == -1) {
        return 0;
      }
      j = 0;
      iVar3 = iVar3 * 0x50;
      if (0 < *(int *)(iVar3 + 0x24 + iVar2)) {
        do {
          iVar2 = FUN_004ab0d0(j);
          if (iVar2 == DAT_006fba58) {
            FUN_00469fa0();
            cVar1 = FUN_004237b0();
            if (cVar1 != '\0') {
              return 1;
            }
          }
          j = j + 1;
          iVar2 = DAT_00715eb8;
        } while (j < *(int *)(iVar3 + 0x24 + DAT_00715eb8));
      }
      iVar3 = *(int *)(iVar3 + 0x20 + iVar2);
      i = i + 1;
    } while (i < param_2);
  }
  return 0;
}


/* ==== 004230d0 FUN_004230d0 ==== */

uint FUN_004230d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int __ftol_result_2;
  int __ftol_result;
  uint uVar3;
  undefined4 i;
  
  i = 0;
  uVar3 = *(uint *)(param_1 * 0xf0 + 0x3c + DAT_00715e50);
  while (uVar3 = *(uint *)(uVar3 * 0x50 + 0x14 + DAT_00715eb8), uVar3 != 0xffffffff) {
    uVar1 = *(uint *)(uVar3 * 0x50 + 0x14 + DAT_00715eb8);
    if (uVar1 != 0xffffffff) {
      param_1 = *(uint *)(uVar1 * 0x50 + 0x14 + DAT_00715eb8);
    }
    uVar2 = *(uint *)(DAT_006fba58 * 0xf0 + 0x3c + DAT_00715e50);
    if (((uVar3 == uVar2) || (uVar1 == uVar2)) || (param_1 == uVar2)) {
      __ftol_result_2 = __ftol();
      __ftol_result = __ftol();
      uVar3 = __ftol_result - __ftol_result_2;
      if (0 < (int)uVar3) {
        uVar3 = uVar3 & 0xfff;
      }
      uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
      if ((0x700 < (int)uVar3) && ((int)uVar3 < 0x900)) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      break;
    }
    i = i + 1;
    if (0 < i) break;
  }
  return uVar3 & 0xffffff00;
}


/* ==== 00423210 FUN_00423210 ==== */

undefined4 FUN_00423210(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_006fba58 * 0xf0 + DAT_00715e50;
  if (*(int *)(param_1 * 0xf0 + 0x3c + DAT_00715e50) != *(int *)(iVar1 + 0x3c)) {
    return 0;
  }
  iVar1 = DAT_0073b0d0 + *(int *)(iVar1 + 0x24) * 0xa9;
  iVar1 = FUN_00403ea0(param_1,*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54),
                       *(undefined4 *)(iVar1 + 0x58));
  if ((0x3ff < iVar1) && (iVar1 < 0xc01)) {
    return 0;
  }
  return 1;
}


/* ==== 00423290 FUN_00423290 ==== */

int FUN_00423290(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0) {
    FUN_004c4150(s___s___d_Illegal_current_waypoint_005955d8,
                 s_C__Work_A2IV_Game_prog_ai_wmap_c_005955b4,0x4e0,param_1);
  }
  switch(param_2) {
  case 0:
    return *(int *)(param_1 * 0x50 + 0x18 + DAT_00715eb8);
  case 1:
    return *(int *)(param_1 * 0x50 + 0x14 + DAT_00715eb8);
  case 2:
    return *(int *)(param_1 * 0x50 + 0x1c + DAT_00715eb8);
  case 3:
    return *(int *)(param_1 * 0x50 + 0x20 + DAT_00715eb8);
  case 4:
  case 5:
    iVar1 = *(int *)(param_1 * 0x50 + 0x20 + DAT_00715eb8);
    if (iVar1 < 0) {
      return -1;
    }
    iVar1 = *(int *)(iVar1 * 0x50 + 0x20 + DAT_00715eb8);
    if (iVar1 < 0) {
      return -1;
    }
    if (param_2 != 4) {
      return *(int *)(iVar1 * 0x50 + 0x1c + DAT_00715eb8);
    }
    return *(int *)(iVar1 * 0x50 + 0x18 + DAT_00715eb8);
  case 6:
    iVar1 = *(int *)(param_1 * 0x50 + 0x18 + DAT_00715eb8);
    if ((-1 < iVar1) && (iVar1 = *(int *)(iVar1 * 0x50 + 0x20 + DAT_00715eb8), -1 < iVar1)) {
      return iVar1;
    }
    iVar1 = *(int *)(param_1 * 0x50 + DAT_00715eb8 + 0x20);
    if (iVar1 < 0) {
      return -1;
    }
    iVar1 = *(int *)(iVar1 * 0x50 + 0x18 + DAT_00715eb8);
    break;
  case 7:
    iVar1 = *(int *)(param_1 * 0x50 + 0x1c + DAT_00715eb8);
    if ((-1 < iVar1) && (iVar1 = *(int *)(iVar1 * 0x50 + 0x20 + DAT_00715eb8), -1 < iVar1)) {
      return iVar1;
    }
    iVar1 = *(int *)(param_1 * 0x50 + DAT_00715eb8 + 0x20);
    if (iVar1 < 0) {
      return -1;
    }
    iVar1 = *(int *)(iVar1 * 0x50 + 0x1c + DAT_00715eb8);
    break;
  default:
    goto LAB_00423333;
  }
  if (-1 < iVar1) {
    return iVar1;
  }
LAB_00423333:
  return -1;
}


/* ==== 00423510 FUN_00423510 ==== */

undefined4 FUN_00423510(int param_1)

{
  int iVar1;
  int iVar2;
  int i;
  
  i = 0;
  iVar1 = *(int *)(param_1 * 0x50 + 0x24 + DAT_00715eb8);
  if (0 < iVar1) {
    do {
      iVar2 = FUN_004ab0d0(i);
      if (DAT_006fba58 == iVar2) {
        return 1;
      }
      i = i + 1;
    } while (i < iVar1);
  }
  return 0;
}


/* ==== 00423560 FUN_00423560 ==== */

float10 FUN_00423560(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int i;
  float local_4;
  
  i = 0;
  local_4 = 3.4028235e+38;
  iVar1 = *(int *)(param_1 * 0x50 + 0x24 + DAT_00715eb8);
  if (iVar1 < 1) {
    return (float10)3.4028235e+38;
  }
  do {
    iVar2 = FUN_004ab0d0(i);
    iVar3 = FUN_00414070(iVar2);
    if ((iVar3 != -1) && (*(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50) < local_4)) {
      local_4 = *(float *)(iVar2 * 0xf0 + 0xc4 + DAT_00715e50);
    }
    i = i + 1;
  } while (i < iVar1);
  return (float10)local_4;
}


