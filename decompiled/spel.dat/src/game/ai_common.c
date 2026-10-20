/* spel.dat — game/ai_common.cpp: 22 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004056a0 FUN_004056a0 ==== */

void FUN_004056a0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004056b0 FUN_004056b0 ==== */

void FUN_004056b0(void)

{
  FUN_005584e0(&LAB_004056c0);
  return;
}


/* ==== 004056e0 FUN_004056e0 ==== */

void FUN_004056e0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004056f0 FUN_004056f0 ==== */

void FUN_004056f0(void)

{
  FUN_005584e0(&LAB_00405700);
  return;
}


/* ==== 00405710 FUN_00405710 ==== */

undefined4 FUN_00405710(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint i;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00569528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 == (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s__d____a_Buffer_is_NULL_0058fc28,s_C__Work_A2IV_Game_prog_ai_common_0058fc00,
                 0x40);
  }
  iVar3 = FUN_004877e0(local_1c,param_1,param_2);
  i = 0xffffffff;
  pcVar10 = &DAT_005c9978;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(iVar3 + 8);
  uVar6 = ~i - 1;
  i = uVar2;
  if (uVar6 <= uVar2) {
    i = uVar6;
  }
  bVar12 = false;
  iVar8 = 0;
  bVar13 = true;
  pbVar9 = *(byte **)(iVar3 + 4);
  pbVar11 = &DAT_005c9978;
  do {
    if (i == 0) break;
    i = i - 1;
    bVar12 = *pbVar9 < *pbVar11;
    bVar13 = *pbVar9 == *pbVar11;
    pbVar9 = pbVar9 + 1;
    pbVar11 = pbVar11 + 1;
  } while (bVar13);
  if (!bVar13) {
    iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
  }
  bVar12 = false;
  if (iVar8 == 0) {
    if (uVar2 < uVar6) {
      i = 0xffffffff;
    }
    else {
      i = (uint)(uVar2 != uVar6);
    }
    bVar12 = i == 0;
  }
  uStack_4 = 0xffffffff;
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (!bVar12) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    puVar7 = *(undefined1 **)(param_1 + 4);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0057629c;
    }
    uVar5 = FUN_004c3cd0(puVar7,puVar4);
    *param_3 = uVar5;
    ExceptionList = pvStack_c;
    return 1;
  }
  ExceptionList = pvStack_c;
  return 0;
}


/* ==== 00405850 FUN_00405850 ==== */

undefined4 FUN_00405850(int param_1,int param_2,float *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint i;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056953a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 == (float *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_004c4150(s__s__d____a_Buffer_is_NULL_0058fc6c,s_C__Work_A2IV_Game_prog_ai_common_0058fc44,
                 0x50);
  }
  iVar3 = FUN_004877e0(local_1c,param_1,param_2);
  i = 0xffffffff;
  pcVar9 = &DAT_005c997c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(iVar3 + 8);
  uVar5 = ~i - 1;
  i = uVar2;
  if (uVar5 <= uVar2) {
    i = uVar5;
  }
  bVar11 = false;
  iVar7 = 0;
  bVar12 = true;
  pbVar8 = *(byte **)(iVar3 + 4);
  pbVar10 = &DAT_005c997c;
  do {
    if (i == 0) break;
    i = i - 1;
    bVar11 = *pbVar8 < *pbVar10;
    bVar12 = *pbVar8 == *pbVar10;
    pbVar8 = pbVar8 + 1;
    pbVar10 = pbVar10 + 1;
  } while (bVar12);
  if (!bVar12) {
    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
  }
  bVar11 = false;
  if (iVar7 == 0) {
    if (uVar2 < uVar5) {
      i = 0xffffffff;
    }
    else {
      i = (uint)(uVar2 != uVar5);
    }
    bVar11 = i == 0;
  }
  uStack_4 = 0xffffffff;
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (!bVar11) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    puVar6 = *(undefined1 **)(param_1 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    i = FUN_004c3cd0(puVar6,puVar4);
    *param_3 = (float)i;
    ExceptionList = pvStack_c;
    return 1;
  }
  ExceptionList = pvStack_c;
  return 0;
}


/* ==== 00405990 FUN_00405990 ==== */

bool FUN_00405990(int param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int i;
  
  if (param_3 == (char *)0x0) {
    FUN_004c4150(s__s__d____a_Buffer_is_NULL_0058fcb0,s_C__Work_A2IV_Game_prog_ai_common_0058fc88,
                 0x60);
  }
  puVar3 = &DAT_0057629c;
  if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 4);
  }
  puVar2 = *(undefined1 **)(param_1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3d10(puVar2,puVar3,param_3,param_4 + -1);
  i = -1;
  do {
    if (i == 0) break;
    i = i + -1;
    cVar1 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  return i != -2;
}


/* ==== 00405a00 FUN_00405a00 ==== */

float10 FUN_00405a00(float param_1,float param_2,float param_3)

{
  if (param_1 < param_2) {
    return (float10)param_2;
  }
  if (param_3 < param_1) {
    return (float10)param_3;
  }
  return (float10)param_1;
}


/* ==== 00405ac0 FUN_00405ac0 ==== */

undefined4 FUN_00405ac0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int i;
  int *piVar3;
  
  i = 0;
  iVar1 = DAT_00715f00 + param_1 * 0x994;
  iVar2 = *(int *)(iVar1 + 0xf4);
  if (0 < iVar2) {
    piVar3 = (int *)(iVar1 + 0x134);
    do {
      if (param_2 == *piVar3) {
        if (param_3 != (int *)0x0) {
          *param_3 = i;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = iVar2;
        }
        return 1;
      }
      i = i + 1;
      piVar3 = piVar3 + 1;
    } while (i < iVar2);
  }
  iVar2 = *(int *)(iVar1 + 0xf8);
  i = 0;
  if (0 < iVar2) {
    piVar3 = (int *)(iVar1 + 0x164);
    do {
      if (param_2 == *piVar3) {
        if (param_3 != (int *)0x0) {
          *param_3 = i;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = iVar2;
        }
        return 1;
      }
      i = i + 1;
      piVar3 = piVar3 + 1;
    } while (i < iVar2);
    return 0;
  }
  return 0;
}


/* ==== 00405b60 FUN_00405b60 ==== */

void FUN_00405b60(undefined4 param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  pfVar2 = (float *)FUN_004b4070(local_18,DAT_0073b0d0 +
                                          *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
                                          0x10);
  fVar1 = SQRT(pfVar2[2] * pfVar2[2] + pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2);
  FUN_004066c0(local_c,*pfVar2 / fVar1,pfVar2[1] / fVar1,pfVar2[2] / fVar1);
  return;
}


/* ==== 00405c80 FUN_00405c80 ==== */

void FUN_00405c80(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  float10 fVar9;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  iVar3 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  iVar5 = FUN_0040ebe0();
  if (-1 < iVar3) {
    iVar6 = (*(code *)**(undefined4 **)(iVar5 + 0x24))();
    if (iVar3 < iVar6) {
      uVar7 = 1;
      goto LAB_00405cc5;
    }
  }
  uVar7 = 0;
LAB_00405cc5:
  FUN_004a6980(uVar7,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar3);
  fVar2 = *(float *)(*(int *)(*(int *)(iVar5 + 0x28) + 4) + 0x30 + iVar3 * 0x54);
  iVar3 = (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1;
  if (*(int *)(&DAT_005cec0c + iVar1) < 3) {
    pfVar8 = (float *)FUN_004b4070(auStack_18,
                                   DAT_0073b0d0 +
                                   *(int *)(*(int *)(&DAT_005ceac0 + iVar3 + 4) * 0xf0 + 0x24 +
                                           DAT_00715e50) * 0xa9 + 0x10);
    fVar4 = SQRT(pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8);
    pfVar8 = (float *)FUN_004066c0(auStack_c,*pfVar8 / fVar4,pfVar8[1] / fVar4,pfVar8[2] / fVar4);
    iVar5 = *(int *)(*(int *)(&DAT_005ceac0 + iVar3 + 4) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
            DAT_0073b0d0;
    iVar3 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
    iVar6 = DAT_0073b0d0 + iVar3;
    *(float *)(&DAT_005cead4 + iVar1) =
         -((pfVar8[1] * (*(float *)(iVar6 + 0x54 + iVar3 * 0xa8) - *(float *)(iVar5 + 0x54)) +
           *pfVar8 * (*(float *)(iVar6 + 0x50 + iVar3 * 0xa8) - *(float *)(iVar5 + 0x50)) +
           pfVar8[2] * (*(float *)(iVar6 + iVar3 * 0xa8 + 0x58) - *(float *)(iVar5 + 0x58))) *
          (fVar2 * 16.0 + 4.0));
  }
  else {
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
  }
  *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
  fVar9 = (float10)FUN_00405a00(*(undefined4 *)(&DAT_005cead4 + iVar1),0,0x42c80000);
  *(float *)(&DAT_005cead4 + iVar1) = (float)fVar9;
  fVar9 = (float10)FUN_00405a00(*(undefined4 *)(&DAT_005cead8 + iVar1),0,0x42c80000);
  *(float *)(&DAT_005cead8 + iVar1) = (float)fVar9;
  return;
}


/* ==== 00405e90 FUN_00405e90 ==== */

void FUN_00405e90(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  float *pfVar17;
  float10 fVar18;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  iVar10 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  iVar14 = FUN_0040ebe0();
  if ((iVar10 < 0) || (iVar15 = (*(code *)**(undefined4 **)(iVar14 + 0x24))(), iVar15 <= iVar10)) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  FUN_004a6980(uVar16,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar10);
  fVar2 = *(float *)(*(int *)(*(int *)(iVar14 + 0x28) + 4) + 0x30 + iVar10 * 0x54);
  iVar10 = (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1;
  fVar3 = *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50);
  if (*(int *)(&DAT_005cec0c + iVar1) < -2) {
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
  }
  else {
    pfVar17 = (float *)FUN_004b4070(auStack_18,
                                    DAT_0073b0d0 +
                                    *(int *)(*(int *)(&DAT_005ceac0 + iVar10 + 4) * 0xf0 + 0x24 +
                                            DAT_00715e50) * 0xa9 + 0x10);
    fVar4 = SQRT(pfVar17[2] * pfVar17[2] + pfVar17[1] * pfVar17[1] + *pfVar17 * *pfVar17);
    pfVar17 = (float *)FUN_004066c0(auStack_c,*pfVar17 / fVar4,pfVar17[1] / fVar4,pfVar17[2] / fVar4
                                   );
    fVar11 = *pfVar17;
    fVar12 = pfVar17[1];
    fVar13 = pfVar17[2];
    iVar14 = *(int *)(*(int *)(&DAT_005ceac0 + iVar10 + 4) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
             DAT_0073b0d0;
    iVar10 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
    iVar15 = DAT_0073b0d0 + iVar10;
    fVar4 = *(float *)(iVar15 + 0x50 + iVar10 * 0xa8);
    fVar5 = *(float *)(iVar14 + 0x50);
    fVar6 = *(float *)(iVar15 + 0x54 + iVar10 * 0xa8);
    fVar7 = *(float *)(iVar14 + 0x54);
    fVar8 = *(float *)(iVar15 + iVar10 * 0xa8 + 0x58);
    fVar9 = *(float *)(iVar14 + 0x58);
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    if (0.0 < fVar3) {
      *(float *)(&DAT_005cead8 + iVar1) =
           (fVar12 * (fVar6 - fVar7) + fVar11 * (fVar4 - fVar5) + fVar13 * (fVar8 - fVar9)) *
           (fVar2 * 2.42 + 0.08);
      goto LAB_0040608c;
    }
  }
  *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
LAB_0040608c:
  fVar18 = (float10)FUN_00405a00(*(undefined4 *)(&DAT_005cead4 + iVar1),0,0x42c80000);
  *(float *)(&DAT_005cead4 + iVar1) = (float)fVar18;
  fVar18 = (float10)FUN_00405a00(*(undefined4 *)(&DAT_005cead8 + iVar1),0,0x42c80000);
  *(float *)(&DAT_005cead8 + iVar1) = (float)fVar18;
  return;
}


/* ==== 004060d0 FUN_004060d0 ==== */

void FUN_004060d0(int param_1,float param_2,float param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  iVar2 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  iVar3 = FUN_0040ebe0();
  if (-1 < iVar2) {
    iVar3 = (*(code *)**(undefined4 **)(iVar3 + 0x24))();
    if (iVar2 < iVar3) {
      uVar4 = 1;
      goto LAB_0040610c;
    }
  }
  uVar4 = 0;
LAB_0040610c:
  FUN_004a6980(uVar4,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar2);
  if (*(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) < param_2) {
    *(float *)(&DAT_005cead4 + iVar1) = param_3 + *(float *)(&DAT_005cead4 + iVar1);
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
  }
  if (param_2 < *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50)) {
    if (param_4 == '\0') {
      *(float *)(&DAT_005cead4 + iVar1) = *(float *)(&DAT_005cead4 + iVar1) - param_3;
      *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    }
    else {
      *(float *)(&DAT_005cead8 + iVar1) = param_3 + *(float *)(&DAT_005cead8 + iVar1);
      *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    }
  }
  fVar5 = (float10)FUN_00405a00(*(undefined4 *)(&DAT_005cead4 + iVar1),0,0x42c80000);
  *(float *)(&DAT_005cead4 + iVar1) = (float)fVar5;
  fVar5 = (float10)FUN_00405a00(*(undefined4 *)(&DAT_005cead8 + iVar1),0,0x42c80000);
  *(float *)(&DAT_005cead8 + iVar1) = (float)fVar5;
  return;
}


/* ==== 00406220 FUN_00406220 ==== */

void FUN_00406220(int param_1,float *param_2,float *param_3,float param_4,float param_5,char param_6
                 )

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  iVar2 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  iVar4 = FUN_0040ebe0();
  if (-1 < iVar2) {
    iVar4 = (*(code *)**(undefined4 **)(iVar4 + 0x24))();
    if (iVar2 < iVar4) {
      uVar5 = 1;
      goto LAB_0040625c;
    }
  }
  uVar5 = 0;
LAB_0040625c:
  FUN_004a6980(uVar5,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar2);
  iVar4 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
  iVar2 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
  fVar3 = (*(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8) - *param_2) * *param_3 +
          (*(float *)(iVar2 + 4) - param_2[1]) * param_3[1] +
          (*(float *)(iVar2 + 8) - param_2[2]) * param_3[2];
  if (fVar3 < param_4) {
    *(float *)(&DAT_005cead4 + iVar1) = param_5 + *(float *)(&DAT_005cead4 + iVar1);
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
  }
  if (param_4 < fVar3) {
    if (param_6 == '\0') {
      *(float *)(&DAT_005cead4 + iVar1) = *(float *)(&DAT_005cead4 + iVar1) - param_5;
      *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    }
    else {
      *(float *)(&DAT_005cead8 + iVar1) = param_5 + *(float *)(&DAT_005cead8 + iVar1);
      *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    }
  }
  fVar6 = (float10)FUN_00405a00(*(undefined4 *)(&DAT_005cead4 + iVar1),0,0x42c80000);
  *(float *)(&DAT_005cead4 + iVar1) = (float)fVar6;
  fVar6 = (float10)FUN_00405a00(*(undefined4 *)(&DAT_005cead8 + iVar1),0,0x42c80000);
  *(float *)(&DAT_005cead8 + iVar1) = (float)fVar6;
  return;
}


/* ==== 00406390 FUN_00406390 ==== */

void FUN_00406390(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar3 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  iVar5 = FUN_0040ebe0();
  if ((iVar3 < 0) || (iVar6 = (*(code *)**(undefined4 **)(iVar5 + 0x24))(), iVar6 <= iVar3)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_004a6980(uVar7,s__s__d____Invalid_object_index____0058fd14,
               s_C__Work_A2IV_Game_prog_ai_mgr_h_0058fd38,0xa2,iVar3);
  fVar2 = *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50);
  if ((*(float *)(&DAT_005ceacc + iVar1) < fVar2) &&
     (fVar4 = (fVar2 - *(float *)(&DAT_005ceacc + iVar1)) *
              *(float *)(*(int *)(*(int *)(iVar5 + 0x28) + 4) + 0x44 + iVar3 * 0x54) +
              *(float *)(&DAT_005ceacc + iVar1), fVar4 < fVar2)) {
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    *(float *)(&DAT_005cead8 + iVar1) = fVar2 - fVar4;
  }
  return;
}


/* ==== 00406460 FUN_00406460 ==== */

undefined4 FUN_00406460(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  int i;
  int *piVar10;
  int iVar11;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_004c4150(s__s__d____a_Direction_is_NULL_0058fcf4,s_C__Work_A2IV_Game_prog_ai_common_0058fccc
                 ,0x255);
  }
  i = 0;
  iVar11 = *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50);
  iVar2 = *(int *)(DAT_00715f00 + 0xf8 + iVar11 * 0x994);
  if (0 < iVar2) {
    piVar10 = (int *)(DAT_00715f00 + iVar11 * 0x994 + 0x164);
    do {
      iVar11 = *(int *)(*piVar10 * 0x50 + 0x14 + DAT_00715eb8);
      if (-1 < iVar11) {
        i = *piVar10 * 0x50;
        iVar2 = i + 8 + DAT_00715eb8;
        fStack_c = *(float *)(i + 8 + DAT_00715eb8);
        fStack_8 = *(float *)(iVar2 + 4);
        fStack_4 = *(float *)(iVar2 + 8);
        iVar11 = iVar11 * 0x50;
        iVar2 = iVar11 + 8 + DAT_00715eb8;
        fVar5 = *(float *)(iVar11 + 8 + DAT_00715eb8) - fStack_c;
        fVar8 = *(float *)(iVar2 + 4) - fStack_8;
        fVar7 = *(float *)(iVar2 + 8) - fStack_4;
        fVar6 = SQRT(fVar5 * fVar5 + fVar8 * fVar8 + fVar7 * fVar7);
        puVar9 = (undefined4 *)FUN_004066c0(&fStack_c,fVar5 / fVar6,fVar8 / fVar6,fVar7 / fVar6);
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        *param_2 = *puVar9;
        param_2[1] = uVar3;
        param_2[2] = uVar4;
        puVar9 = (undefined4 *)(i + 8 + DAT_00715eb8);
        puVar1 = (undefined4 *)(iVar11 + 8 + DAT_00715eb8);
        fStack_8 = (float)puVar1[1] + 10.0;
        FUN_0040a360(*puVar9,(float)puVar9[1] + 10.0,puVar9[2],*puVar1,fStack_8,puVar1[2]);
        return 1;
      }
      i = i + 1;
      piVar10 = piVar10 + 1;
    } while (i < iVar2);
  }
  return 0;
}


/* ==== 00406620 FUN_00406620 ==== */

void FUN_00406620(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00406630 FUN_00406630 ==== */

void FUN_00406630(void)

{
  FUN_005584e0(&LAB_00406640);
  return;
}


/* ==== 00406660 FUN_00406660 ==== */

void FUN_00406660(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00406670 FUN_00406670 ==== */

void FUN_00406670(void)

{
  FUN_005584e0(&LAB_00406680);
  return;
}


/* ==== 004066c0 FUN_004066c0 ==== */

void __thiscall FUN_004066c0(void *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  return;
}


/* ==== 00406720 FUN_00406720 ==== */

void FUN_00406720(void)

{
  FUN_00558643(&DAT_005cadf8,0x10,0x14,&LAB_00409390,FUN_004900b0);
  return;
}


