/* spel.dat — game/anm_main.cpp: 34 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00468390 FUN_00468390 ==== */

void FUN_00468390(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056aca2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00467370();
  local_4 = 0;
  FUN_00468030();
  FUN_00468050();
  local_4 = 0xffffffff;
  FUN_00467470();
  ExceptionList = local_c;
  return;
}


/* ==== 004683f0 FUN_004683f0 ==== */

bool FUN_004683f0(char *str2)

{
  int iVar1;
  
  iVar1 = FUN_004c64d0(str2);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_0055926e(str2,0);
  return iVar1 != -1;
}


/* ==== 00468460 FUN_00468460 ==== */

void FUN_00468460(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00468470 FUN_00468470 ==== */

void FUN_00468470(void)

{
  FUN_005584e0(&LAB_00468480);
  return;
}


/* ==== 004684a0 FUN_004684a0 ==== */

void FUN_004684a0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004684b0 FUN_004684b0 ==== */

void FUN_004684b0(void)

{
  FUN_005584e0(&LAB_004684c0);
  return;
}


/* ==== 004684d0 FUN_004684d0 ==== */

void FUN_004684d0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 8);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_004028f0(1);
    FUN_0054b339(piVar3);
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
    piVar3 = piVar2;
  }
  FUN_0054b339(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 00468530 FUN_00468530 ==== */

void FUN_00468530(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = **(undefined4 **)(in_ECX + 4);
  return;
}


/* ==== 00468540 FUN_00468540 ==== */

void FUN_00468540(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return;
  }
  do {
    piVar2 = (int *)*param_2;
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    iVar3 = param_2[3];
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iVar3 + -1));
      }
      else {
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    FUN_0054b339(param_2);
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
    param_2 = piVar2;
  } while (piVar2 != param_3);
  *param_1 = (int)piVar2;
  return;
}


/* ==== 004685d0 FUN_004685d0 ==== */

void FUN_004685d0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  iVar3 = param_2[3];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_0054b339(param_2);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
  *param_1 = iVar2;
  return;
}


/* ==== 004686f0 FUN_004686f0 ==== */

int FUN_004686f0(int param_1)

{
  return param_1 + -1;
}


/* ==== 00468700 FUN_00468700 ==== */

void FUN_00468700(undefined4 param_1)

{
  FUN_0054b339(param_1);
  return;
}


/* ==== 00468710 FUN_00468710 ==== */

void FUN_00468710(undefined4 *param_1,void *param_2,undefined4 param_3)

{
  undefined4 *operator_new_result_2;
  undefined4 *operator_new_result;
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)((int)param_2 + 4);
  operator_new_result_2 = operator_new(0x18);
  operator_new_result = param_2;
  if (param_2 == (void *)0x0) {
    operator_new_result = operator_new_result_2;
  }
  *operator_new_result_2 = operator_new_result;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = operator_new_result_2;
  }
  operator_new_result_2[1] = puVar1;
  *(undefined4 **)((int)param_2 + 4) = operator_new_result_2;
  *(undefined4 **)operator_new_result_2[1] = operator_new_result_2;
  FUN_00468770(operator_new_result_2 + 2,param_3);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  *param_1 = operator_new_result_2;
  return;
}


/* ==== 00468770 FUN_00468770 ==== */

/* WARNING: Removing unreachable block (ram,0x004687c0) */

void FUN_00468770(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  uint i;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056acc1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar2 = *(uint *)(param_2 + 8);
    if (param_1 == param_2) {
      if (uVar2 != 0) {
        FUN_0054b29c();
      }
      FUN_00402c30();
      iVar4 = *(int *)(param_1 + 8) - uVar2;
      iVar6 = -1;
      if (iVar4 != -1) {
        iVar6 = iVar4;
      }
      if (iVar6 != 0) {
        FUN_005580e0(uVar2 + *(int *)(param_1 + 4),uVar2 + *(int *)(param_1 + 4) + iVar6,
                     iVar4 - iVar6);
        iVar4 = *(int *)(param_1 + 8);
        cVar3 = FUN_00402a00(iVar4 - iVar6,0);
        if (cVar3 != '\0') {
          FUN_004029e0(iVar4 - iVar6);
        }
      }
      FUN_00402c30();
      ExceptionList = local_c;
      return;
    }
    if (uVar2 != 0) {
      puVar5 = *(undefined1 **)(param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(1);
        puVar5 = *(undefined1 **)(param_2 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)(param_1 + 4) = puVar5;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        ExceptionList = local_c;
        return;
      }
    }
    cVar3 = FUN_00402a00(uVar2,1);
    if (cVar3 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = *(undefined4 **)(param_1 + 4);
      for (i = uVar2 >> 2; i != 0; i = i - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (i = uVar2 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(param_1 + 8) = uVar2;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar2) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004688f0 FUN_004688f0 ==== */

void FUN_004688f0(void)

{
  FUN_004b6430();
  return;
}


/* ==== 00468900 FUN_00468900 ==== */

void FUN_00468900(void)

{
  FUN_005584e0(&LAB_00468910);
  return;
}


/* ==== 00468930 FUN_00468930 ==== */

void FUN_00468930(void)

{
  FUN_00469510();
  return;
}


/* ==== 00468940 FUN_00468940 ==== */

void FUN_00468940(void)

{
  FUN_005584e0(&LAB_00468950);
  return;
}


/* ==== 00468960 FUN_00468960 ==== */

void FUN_00468960(void)

{
  FUN_004b68f0(500,100,0x20d,500);
  return;
}


/* ==== 00468980 FUN_00468980 ==== */

void FUN_00468980(void)

{
  FUN_004b67b0();
  return;
}


/* ==== 00468990 FUN_00468990 ==== */

void FUN_00468990(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int j;
  int m;
  int k;
  char *pcVar5;
  int i;
  undefined4 uStack_148;
  char local_140 [64];
  char acStack_100 [64];
  CHAR local_c0 [64];
  char acStack_80 [64];
  char acStack_40 [64];
  
  FUN_00497960();
  iVar2 = FUN_00448c90(param_1);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar3);
  iVar2 = FUN_004c3cd0(s_CONFIG_005a7638,s_COUNT_005a7630);
  i = 0;
  if (0 < iVar2) {
    do {
      wsprintfA(local_c0,s__d_005a7640,i);
      FUN_004c3d10(s_CONFIG_005a7644,local_c0,local_140,0x40);
      j = -1;
      pcVar5 = local_140;
      do {
        if (j == 0) break;
        j = j + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (j == -2) {
        j = FUN_00448c90(param_1);
        puVar3 = *(undefined1 **)(j + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        FUN_004c4150(s__s___d__Couldn_t_find_animation_n_005a7670,
                     s_C__Work_A2IV_Game_prog_anm_main__005a764c,0x7a,i,puVar3);
      }
      j = FUN_004c3cd0(local_140,s_COUNT_005a76b4);
      if (j != 0) {
        uStack_148 = FUN_004b6c00(local_140,j);
      }
      k = 0;
      if (0 < j) {
        do {
          wsprintfA(local_c0,s__d_005a76bc,k);
          FUN_004c3d10(local_140,local_c0,acStack_80,0x40);
          m = -1;
          pcVar5 = acStack_80;
          do {
            if (m == 0) break;
            m = m + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          if (m == -2) {
            m = FUN_00448c90(param_1);
            puVar3 = *(undefined1 **)(m + 4);
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_0057629c;
            }
            FUN_004c4150(s__s___d__Couldn_t_find_frame__d_f_005a76e4,
                         s_C__Work_A2IV_Game_prog_anm_main__005a76c0,0x8c,k,local_140,puVar3);
          }
          m = FUN_004c3d60(acStack_80,0);
          if (m != 2) {
            m = FUN_00448c90(param_1);
            puVar3 = *(undefined1 **)(m + 4);
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = &DAT_0057629c;
            }
            FUN_004c4150(s__s___d__Illegal_number_of_argume_005a7744,
                         s_C__Work_A2IV_Game_prog_anm_main__005a7720,0x94,puVar3,local_140,k);
          }
          FUN_004c3f10(0,acStack_40,0x40);
          FUN_004c3f10(1,acStack_100,0x40);
          m = FUN_00448c90(param_1);
          puVar3 = *(undefined1 **)(m + 4);
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0057629c;
          }
          FUN_004c3fa0(s_File__s__Animation__s__Adding_fr_005a778c,puVar3,local_140,k,acStack_40,
                       acStack_100);
          uVar4 = FUN_00498870(acStack_100);
          FUN_004b6ff0(uStack_148,acStack_40,acStack_100,uVar4);
          k = k + 1;
        } while (k < j);
      }
      i = i + 1;
    } while (i < iVar2);
  }
  return;
}


/* ==== 00468c10 FUN_00468c10 ==== */

void FUN_00468c10(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int i;
  undefined1 *puVar2;
  char *pcVar3;
  char local_40 [64];
  
  i = FUN_00448c90(s_System_Settings_005a77d0);
  puVar2 = *(undefined1 **)(i + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60(puVar2);
  FUN_004c3d10(s_3D_Anims_005a77e0,param_1,local_40,0x3f);
  i = -1;
  pcVar3 = local_40;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (i == -2) {
    FUN_004c4150(s__s___d__Couldn_t_find_filename_f_005a7810,
                 s_C__Work_A2IV_Game_prog_anm_main__005a77ec,0xbd,param_1);
  }
  FUN_004489a0(local_40,param_2);
  FUN_00468990(param_2);
  return;
}


/* ==== 00468ca0 FUN_00468ca0 ==== */

void FUN_00468ca0(void)

{
  CHAR local_40 [64];
  
  FUN_00468c10(s_general_005a7868,s_General_Animations_005a7854);
  wsprintfA(local_40,s__d_005a7870,DAT_006fb898);
  FUN_00468c10(local_40,s_Etappe_Animations_005a7874);
  wsprintfA(local_40,s_League_d_005a7888,DAT_006fb958);
  FUN_00468c10(local_40,s_League_Animations_005a7894);
  return;
}


/* ==== 00468d10 FUN_00468d10 ==== */

undefined4 FUN_00468d10(byte *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  uint k;
  uint uVar4;
  uint m;
  int iVar5;
  int j;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  int i;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  i = 0;
LAB_00468d21:
  if (DAT_0071222c <= i) {
    return 0;
  }
  FUN_00468530(local_8);
  j = i;
  if (0 < i) {
    do {
      FUN_00448fd0(local_4,0);
      j = j + -1;
    } while (j != 0);
  }
  j = FUN_00468f60();
  k = 0xffffffff;
  pbVar6 = param_1;
  do {
    if (k == 0) break;
    k = k - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  m = *(uint *)(j + 8);
  uVar4 = ~k - 1;
  k = m;
  if (uVar4 <= m) {
    k = uVar4;
  }
  bVar9 = false;
  iVar5 = 0;
  bVar10 = true;
  pbVar6 = *(byte **)(j + 4);
  pbVar7 = param_1;
  do {
    if (k == 0) break;
    k = k - 1;
    bVar9 = *pbVar6 < *pbVar7;
    bVar10 = *pbVar6 == *pbVar7;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while (bVar10);
  if (!bVar10) {
    iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
  }
  if (((iVar5 != 0) || (m < uVar4)) || (m != uVar4)) {
    i = i + 1;
    goto LAB_00468d21;
  }
  j = i;
  if (0 < i) {
    do {
      FUN_00448fd0(local_4,0);
      j = j + -1;
    } while (j != 0);
  }
  j = FUN_00468f70();
  pcVar3 = *(char **)(j + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  k = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (k == 0) break;
    k = k - 1;
    pcVar8 = pcVar3 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar2 != '\0');
  k = ~k;
  pcVar3 = pcVar8 + -k;
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)param_3 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    param_3 = param_3 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *param_3 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    param_3 = param_3 + 1;
  }
  if (0 < i) {
    do {
      i = i + -1;
    } while (i != 0);
  }
  j = FUN_00468f80();
  pcVar3 = *(char **)(j + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  k = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (k == 0) break;
    k = k - 1;
    pcVar8 = pcVar3 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar2 != '\0');
  k = ~k;
  pcVar3 = pcVar8 + -k;
  for (m = k >> 2; m != 0; m = m - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    param_2 = param_2 + 4;
  }
  for (k = k & 3; k != 0; k = k - 1) {
    *param_2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}


/* ==== 00468e80 FUN_00468e80 ==== */

void FUN_00468e80(void)

{
  undefined1 *in_ECX;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *in_ECX = local_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  in_ECX[0x10] = local_1;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  in_ECX[0x20] = local_1;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  return;
}


/* ==== 00468ec0 FUN_00468ec0 ==== */

void FUN_00468ec0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x24);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  iVar2 = *(int *)(in_ECX + 0x14);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      return;
    }
    FUN_0054b339((char *)(iVar2 + -1));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 00468f60 FUN_00468f60 ==== */

void FUN_00468f60(void)

{
  return;
}


/* ==== 00468f70 FUN_00468f70 ==== */

int FUN_00468f70(void)

{
  int in_ECX;
  
  return in_ECX + 0x10;
}


/* ==== 00468f80 FUN_00468f80 ==== */

int FUN_00468f80(void)

{
  int in_ECX;
  
  return in_ECX + 0x20;
}


/* ==== 00468f90 FUN_00468f90 ==== */

void FUN_00468f90(char *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  i = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (i <= *(uint *)(in_ECX + 0xc))) goto LAB_00469016;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    return;
  }
  FUN_00402b20(i);
LAB_00469016:
  pcVar3 = *(char **)(in_ECX + 4);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar3 = *param_1;
    param_1 = param_1 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *(uint *)(in_ECX + 8) = i;
  *(undefined1 *)(*(int *)(in_ECX + 4) + i) = 0;
  return;
}


/* ==== 00469040 FUN_00469040 ==== */

void FUN_00469040(char *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  i = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 0x14);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0x1c) < 0x20) && (i <= *(uint *)(in_ECX + 0x1c))) goto LAB_004690c7;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    return;
  }
  FUN_00402b20(i);
LAB_004690c7:
  pcVar3 = *(char **)(in_ECX + 0x14);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar3 = *param_1;
    param_1 = param_1 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *(uint *)(in_ECX + 0x18) = i;
  *(undefined1 *)(*(int *)(in_ECX + 0x14) + i) = 0;
  return;
}


/* ==== 004690f0 FUN_004690f0 ==== */

void FUN_004690f0(char *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  i = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  if (0xfffffffd < i) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 0x24);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0x2c) < 0x20) && (i <= *(uint *)(in_ECX + 0x2c))) goto LAB_00469177;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined4 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    return;
  }
  FUN_00402b20(i);
LAB_00469177:
  pcVar3 = *(char **)(in_ECX + 0x24);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar3 = *param_1;
    param_1 = param_1 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *(uint *)(in_ECX + 0x28) = i;
  *(undefined1 *)(*(int *)(in_ECX + 0x24) + i) = 0;
  return;
}


/* ==== 004691a0 FUN_004691a0 ==== */

void FUN_004691a0(char *param_1)

{
  char cVar1;
  int *piVar2;
  void *operator_new_result_2;
  int iVar3;
  int *operator_new_result;
  uint i;
  uint j;
  int k;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  byte abStack_21c [8];
  int local_214;
  undefined1 local_210 [8];
  byte abStack_208 [8];
  byte abStack_200 [32];
  byte abStack_1e0 [64];
  char local_1a0 [32];
  char cStack_180;
  undefined1 auStack_17f [63];
  byte abStack_140 [64];
  undefined1 auStack_100 [256];
  
  i = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (i == 0) break;
    i = i - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  i = ~i;
  pcVar6 = pcVar6 + -i;
  pcVar7 = local_1a0;
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (i = i & 3; i != 0; i = i - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  k = -1;
  pcVar6 = local_1a0;
  do {
    pcVar7 = pcVar6;
    if (k == 0) break;
    k = k + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar7 + -1) = DAT_005a78a8;
  pcVar7[3] = DAT_005a78ac;
  FUN_004c3b60(local_1a0);
  local_214 = FUN_004c3cd0(PTR_s_Objects_005a7618,PTR_s_Count_005a761c);
  k = 0;
  if (0 < local_214) {
    do {
      operator_new_result_2 = operator_new(0x30);
      if (operator_new_result_2 == (void *)0x0) {
        iVar3 = 0;
LAB_00469245:
        FUN_004c4150(s___s___d_Could_not_allocate_memor_005a78d4,
                     s_C__Work_A2IV_Game_prog_anm_main__005a78b0,0x1b2);
      }
      else {
        iVar3 = FUN_00468e80();
        if (iVar3 == 0) goto LAB_00469245;
      }
      FUN_005587a3(local_210,s__d_005a7914,k);
      FUN_004c3d10(PTR_s_Objects_005a7618,local_210,auStack_100,0xff);
      FUN_004c3d60(auStack_100,0);
      FUN_004c3f10(4,&cStack_180,0x3f);
      FUN_00468f90(auStack_17f);
      FUN_004c3f10(1,(char *)abStack_1e0,0x3f);
      FUN_0055942f(abStack_1e0,abStack_208,abStack_140,abStack_200,abStack_21c);
      FUN_005587a3(abStack_1e0,s__s_s_005a7918,abStack_200,abStack_21c);
      FUN_00469040(abStack_1e0);
      FUN_004c3f10(0,(char *)abStack_1e0,0x3f);
      FUN_0055942f(abStack_1e0,abStack_208,abStack_140,abStack_200,abStack_21c);
      FUN_005587a3(abStack_1e0,s__s_s_005a7920,abStack_200,abStack_21c);
      FUN_004690f0(abStack_1e0);
      piVar2 = (int *)*DAT_00712228;
      piVar5 = (int *)piVar2[1];
      operator_new_result = operator_new(0xc);
      piVar4 = piVar2;
      if (piVar2 == (int *)0x0) {
        piVar4 = operator_new_result;
      }
      *operator_new_result = (int)piVar4;
      if (piVar5 == (int *)0x0) {
        piVar5 = operator_new_result;
      }
      operator_new_result[1] = (int)piVar5;
      piVar2[1] = (int)operator_new_result;
      *(int **)operator_new_result[1] = operator_new_result;
      if (operator_new_result + 2 != (int *)0x0) {
        operator_new_result[2] = iVar3;
      }
      DAT_0071222c = DAT_0071222c + 1;
      k = k + 1;
    } while (k < local_214);
  }
  return;
}


/* ==== 004693d0 FUN_004693d0 ==== */

void FUN_004693d0(void)

{
  int iVar1;
  int *piVar2;
  int i;
  
  i = DAT_0071222c;
  if (0 < DAT_0071222c) {
    do {
      piVar2 = (int *)(**(code **)(DAT_00712220 + 8))();
      iVar1 = *piVar2;
      piVar2 = *(int **)(DAT_00712228 + 4);
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      FUN_0054b339(piVar2);
      DAT_0071222c = DAT_0071222c + -1;
      if (iVar1 != 0) {
        FUN_00468ec0();
        FUN_0054b339(iVar1);
      }
      i = i + -1;
    } while (i != 0);
  }
  return;
}


