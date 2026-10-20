/* spel.dat — game/tob_main.cpp: 56 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00452320 FUN_00452320 ==== */

undefined4 FUN_00452320(int param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  
  uVar7 = 0;
  iVar8 = param_1 * 0xf0;
  *(float *)(iVar8 + 0xbc + DAT_00715e50) = *(float *)(iVar8 + 0xbc + DAT_00715e50) * 0.98;
  *(float *)(iVar8 + 0xc4 + DAT_00715e50) = *(float *)(iVar8 + 0xc4 + DAT_00715e50) * 0.98;
  pfVar1 = (float *)(iVar8 + 0xc0 + DAT_00715e50);
  *pfVar1 = *pfVar1 - *(float *)(iVar8 + 0x58 + DAT_00715e50);
  iVar4 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
  iVar6 = iVar8 + DAT_00715e50;
  pfVar1 = (float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
  *pfVar1 = *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8) + *(float *)(iVar6 + 0xbc);
  pfVar1[1] = *(float *)(iVar6 + 0xc0) + pfVar1[1];
  pfVar1[2] = *(float *)(iVar6 + 0xc4) + pfVar1[2];
  FUN_004a6c90(param_1);
  iVar6 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
  fVar9 = (float10)FUN_004ab880(*(undefined4 *)(DAT_0073b0d0 + iVar6 + iVar6 * 0xa8 + 0x50),
                                *(undefined4 *)(DAT_0073b0d0 + iVar6 + 0x58 + iVar6 * 0xa8));
  fVar2 = (float)fVar9;
  iVar6 = FUN_004a8c50();
  fVar5 = *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) - fVar2;
  fVar3 = *(float *)(DAT_0073b5c8 + 0x74 + iVar6 * 0xac);
  if (fVar5 * fVar5 < fVar3 * fVar3) {
    *(float *)(iVar8 + 0xc0 + DAT_00715e50) = *(float *)(iVar8 + 0xc0 + DAT_00715e50) * -0.6;
    *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) = fVar2 + 1.0;
    if (*(float *)(iVar8 + 0xc0 + DAT_00715e50) < 2.0) {
      *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) =
           fVar2 + param_3;
      *(undefined4 *)(iVar8 + 0x2c + DAT_00715e50) = 2;
    }
    uVar7 = 1;
    *(float *)(iVar8 + 0x58 + DAT_00715e50) = *(float *)(iVar8 + 0x58 + DAT_00715e50) * 0.5;
  }
  FUN_004b5770();
  return uVar7;
}


/* ==== 00452e70 FUN_00452e70 ==== */

void FUN_00452e70(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00452e80 FUN_00452e80 ==== */

void FUN_00452e80(void)

{
  FUN_005584e0(&LAB_00452e90);
  return;
}


/* ==== 00452eb0 FUN_00452eb0 ==== */

void FUN_00452eb0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00452ec0 FUN_00452ec0 ==== */

void FUN_00452ec0(void)

{
  FUN_005584e0(&LAB_00452ed0);
  return;
}


/* ==== 00452ef0 FUN_00452ef0 ==== */

void FUN_00452ef0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_200 [512];
  
  FUN_004a02e0();
  iVar3 = param_1 * 0xf0;
  iVar2 = *(int *)(iVar3 + 0x24 + DAT_00715e50);
  iVar1 = DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8;
  local_20c = *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8);
  local_208 = *(undefined4 *)(iVar1 + 4);
  local_204 = *(undefined4 *)(iVar1 + 8);
  FUN_004a79d0(param_1,0,0,0,0,0,0,0x44fa0000,0x3f666666,0,0,&LAB_004544c0,0,1);
  FUN_004a7190(param_1);
  FUN_004a02f0(*(undefined4 *)(iVar3 + 0x10 + DAT_00715e50),&local_20c,0,3,0);
  (**(code **)(**(int **)(iVar3 + 0x10 + DAT_00715e50) + 8))(local_200);
  return;
}


/* ==== 00453050 FUN_00453050 ==== */

void FUN_00453050(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00453060 FUN_00453060 ==== */

void FUN_00453060(void)

{
  FUN_005584e0(&LAB_00453070);
  return;
}


/* ==== 00453090 FUN_00453090 ==== */

void FUN_00453090(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004530a0 FUN_004530a0 ==== */

void FUN_004530a0(void)

{
  FUN_005584e0(&LAB_004530b0);
  return;
}


/* ==== 00453190 FUN_00453190 ==== */

void FUN_00453190(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004531a0 FUN_004531a0 ==== */

void FUN_004531a0(void)

{
  FUN_005584e0(&LAB_004531b0);
  return;
}


/* ==== 004531d0 FUN_004531d0 ==== */

void FUN_004531d0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004531e0 FUN_004531e0 ==== */

void FUN_004531e0(void)

{
  FUN_005584e0(&LAB_004531f0);
  return;
}


/* ==== 00453200 FUN_00453200 ==== */

void FUN_00453200(int param_1)

{
  FUN_004a79d0(param_1,0,0,0,0,0,0,0x43fa0000,0x3f666666,0x3e4ccccd,0,&LAB_004544c0,0,1);
  FUN_004a7190(param_1);
  *(undefined4 *)(param_1 * 0xf0 + 0x2c + DAT_00715e50) = 0;
  return;
}


/* ==== 00453390 FUN_00453390 ==== */

void FUN_00453390(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004533a0 FUN_004533a0 ==== */

void FUN_004533a0(void)

{
  FUN_005584e0(&LAB_004533b0);
  return;
}


/* ==== 004533d0 FUN_004533d0 ==== */

void FUN_004533d0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004533e0 FUN_004533e0 ==== */

void FUN_004533e0(void)

{
  FUN_005584e0(&LAB_004533f0);
  return;
}


/* ==== 00453400 FUN_00453400 ==== */

undefined4 FUN_00453400(undefined4 param_1)

{
  switch(param_1) {
  case 0xb:
  case 0xe:
    return 1;
  default:
    return 0;
  case 0x10:
  case 0x11:
    return 2;
  }
}


/* ==== 00453440 init_track_object_types ==== */

void init_track_object_types(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_005a2a60;
  do {
    FUN_004a6bb0(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x5a2b50);
  FUN_004556e0();
  FUN_004559d0();
  FUN_004550c0();
  return;
}


/* ==== 00453480 FUN_00453480 ==== */

undefined4 FUN_00453480(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b2b10(param_1,DAT_006fba58);
  if (iVar1 != 0) {
    *param_2 = DAT_006fba58;
    return 1;
  }
  iVar1 = *(int *)(DAT_006fba58 * 0xf0 + 0x44 + DAT_00715e50);
  if (iVar1 != -1) {
    iVar1 = FUN_004b2b10(param_1,iVar1);
    if (iVar1 != 0) {
      *param_2 = *(int *)(DAT_006fba58 * 0xf0 + 0x44 + DAT_00715e50);
      return 1;
    }
  }
  return 0;
}


/* ==== 004535d0 FUN_004535d0 ==== */

undefined4 FUN_004535d0(undefined4 param_1)

{
  FUN_004c3fa0(s_Handle_object__d_with_type_play_s_005a2d88,param_1);
  FUN_00450b30(param_1,1);
  return 1;
}


/* ==== 004536b0 FUN_004536b0 ==== */

void FUN_004536b0(undefined4 param_1,int param_2)

{
  if ((param_2 == 9) || (param_2 == 0x1c)) {
    FUN_004c4150(s__s___d__Track_object_needs_a_cor_005a2dd4,
                 s_C__Work_A2IV_Game_prog_tob_main__005a2db0,0x149,param_1);
  }
  return;
}


/* ==== 004536e0 FUN_004536e0 ==== */

/* WARNING: Removing unreachable block (ram,0x00453d2a) */
/* WARNING: Removing unreachable block (ram,0x00453e88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004536e0(undefined4 param_1,char *str1,undefined4 param_3,float param_4,float param_5,
                 float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,int param_12)

{
  float fVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint i;
  uint j;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  undefined4 *puStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c [8];
  char local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056a670;
  pvStack_c = ExceptionList;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  ExceptionList = &pvStack_c;
  FUN_00497960();
  cVar2 = FUN_004b76e0(str1);
  if (cVar2 == '\0') {
    FUN_004536b0();
  }
  if (param_12 == 0) {
    if (cVar2 != '\0') goto LAB_0045385a;
    cVar3 = FUN_00469440();
    if (cVar3 == '\0') {
      FUN_004c4150();
    }
    piVar5 = (int *)FUN_00498870();
    FUN_004b2740(str1,local_4c,local_2c,&iStack_84,&iStack_88,0,1,piVar5);
LAB_00453832:
    if ((iStack_84 < 0) || (iStack_88 < 0)) {
      FUN_004c4150();
    }
  }
  else {
    switch(param_1) {
    case 0xb:
    case 0xe:
      FUN_004c3fa0();
      cVar3 = FUN_004b2e30();
      if (cVar3 == '\0') {
        FUN_004c3fa0();
        cVar3 = FUN_00469440(str1,local_4c);
        if (cVar3 == '\0') {
          FUN_004c4150();
        }
        piVar5 = (int *)FUN_00498870();
        FUN_004b2740(str1,local_4c,local_2c,&iStack_84,&iStack_88,param_12,1,piVar5);
        FUN_004b2db0();
      }
      else {
        FUN_004c3fa0();
        cVar3 = FUN_00469440(str1,local_4c);
        if (cVar3 == '\0') {
          FUN_004c4150();
        }
        piVar5 = (int *)FUN_00498870();
        FUN_004b2740(str1,local_4c,local_2c,&iStack_84,&iStack_88,param_12,0,piVar5);
        FUN_004b2e00();
      }
      break;
    default:
      if (cVar2 == '\0') {
        cVar3 = FUN_00469440();
        if (cVar3 == '\0') {
          FUN_004c4150();
        }
        piVar5 = (int *)FUN_00498870();
        FUN_004b2740(str1,local_4c,local_2c,&iStack_84,&iStack_88,param_12,1,piVar5);
        goto LAB_00453832;
      }
      goto LAB_0045385a;
    case 0x10:
    case 0x11:
      FUN_004c3fa0();
      cVar3 = FUN_004b2e30();
      if (cVar3 == '\0') {
        FUN_004c3fa0();
        cVar3 = FUN_00469440(str1,local_4c);
        if (cVar3 == '\0') {
          FUN_004c4150();
        }
        piVar5 = (int *)FUN_00498870();
        FUN_004b2740(str1,local_4c,local_2c,&iStack_84,&iStack_88,param_12,1,piVar5);
        FUN_004b2db0();
      }
      else {
        FUN_004c3fa0();
        cVar3 = FUN_00469440(str1,local_4c);
        if (cVar3 == '\0') {
          FUN_004c4150();
        }
        piVar5 = (int *)FUN_00498870();
        FUN_004b2740(str1,local_4c,local_2c,&iStack_84,&iStack_88,param_12,0,piVar5);
        FUN_004b2e00();
      }
    }
    FUN_004c3fa0();
    if (cVar2 == '\0') goto LAB_00453832;
  }
LAB_0045385a:
  fVar1 = _DAT_005b23b8 * 0.0027777778;
  FUN_004a6c00();
  FUN_004c3fa0();
  if (cVar2 == '\0') {
    FUN_004c3fa0();
    iStack_80 = FUN_004a78a0(param_7,param_8,param_9,fVar1 * param_4,-(fVar1 * param_5),
                             fVar1 * param_6,iStack_84);
  }
  else {
    FUN_004c3fa0();
    uVar4 = FUN_004b75a0(str1);
    iStack_80 = FUN_004a7790(param_7,param_8,param_9,fVar1 * param_4,-(fVar1 * param_5),
                             fVar1 * param_6,uVar4);
  }
  *(undefined4 *)(iStack_80 * 0xf0 + 0x34 + DAT_00715e50) = param_11;
  FUN_004c3fa0();
  puStack_68 = (undefined4 *)0x0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_4 = 0;
  switch(param_1) {
  default:
    goto switchD_00453cab_caseD_0;
  case 1:
    FUN_00454170();
    break;
  case 2:
    FUN_004548d0();
    break;
  case 3:
    FUN_00455aa0();
    break;
  case 5:
  case 0xe:
  case 0xf:
  case 0x11:
    FUN_004541c0();
    break;
  case 6:
    FUN_004554b0();
    break;
  case 7:
    FUN_00451ed0();
    break;
  case 8:
    FUN_00455800();
    break;
  case 9:
    puVar6 = (undefined1 *)FUN_0049df90();
    i = *(uint *)(puVar6 + 8);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (auStack_6c == puVar6) {
      if (uStack_64 < i) {
        FUN_0054b29c();
      }
      FUN_00402c30();
      iVar13 = -1;
      if (uStack_64 - i != -1) {
        iVar13 = uStack_64 - i;
      }
      if (iVar13 != 0) {
        FUN_005580e0();
        cVar2 = FUN_00402a00();
        if (cVar2 != '\0') {
          FUN_004029e0();
        }
      }
      FUN_00402c30();
    }
    else {
      if (i != 0) {
        puVar7 = *(undefined1 **)(puVar6 + 4);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0057629c;
        }
        if ((byte)puVar7[-1] < 0xfe) {
          FUN_004028f0();
          puStack_68 = *(undefined4 **)(puVar6 + 4);
          if (puStack_68 == (undefined4 *)0x0) {
            puStack_68 = (undefined4 *)&DAT_0057629c;
          }
          uStack_64 = *(uint *)(puVar6 + 8);
          uStack_60 = *(undefined4 *)(puVar6 + 0xc);
          *(char *)((int)puStack_68 + -1) = *(char *)((int)puStack_68 + -1) + '\x01';
          goto LAB_00453e24;
        }
      }
      cVar2 = FUN_00402a00();
      if (cVar2 != '\0') {
        puVar12 = *(undefined4 **)(puVar6 + 4);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)&DAT_0057629c;
        }
        puVar9 = puStack_68;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar9 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar9 = puVar9 + 1;
        }
        for (i = i & 3; i != 0; i = i - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_004029e0();
      }
    }
LAB_00453e24:
    uStack_4 = uStack_4 & 0xffffff00;
    if (iStack_58 != 0) {
      cVar2 = *(char *)(iStack_58 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339();
      }
      else {
        *(char *)(iStack_58 + -1) = cVar2 + -1;
      }
    }
    i = uStack_64;
    puStack_7c = &stack0xffffff54;
    iStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    puVar12 = (undefined4 *)0x0;
    iVar13 = 0;
    if (&stack0xffffff54 == auStack_6c) {
      puStack_7c = &stack0xffffff54;
      if (uStack_64 != 0) {
        puStack_7c = &stack0xffffff54;
        FUN_0054b29c();
      }
      FUN_00402c30();
      iVar8 = iVar13 - i;
      iVar10 = -1;
      if (iVar8 != -1) {
        iVar10 = iVar8;
      }
      if (iVar10 != 0) {
        FUN_005580e0((undefined1 *)(i + (int)puVar12),(undefined1 *)(i + (int)puVar12) + iVar10,
                     iVar8 - iVar10);
        cVar2 = FUN_00402a00(iVar13 - iVar10,0);
        if (cVar2 != '\0') {
          FUN_004029e0(iVar13 - iVar10);
        }
      }
      FUN_00402c30();
      FUN_00423a50(iStack_80);
    }
    else {
      if (uStack_64 != 0) {
        puVar9 = puStack_68;
        if (puStack_68 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)&DAT_0057629c;
        }
        if (*(byte *)((int)puVar9 + -1) < 0xfe) {
          puStack_7c = &stack0xffffff54;
          FUN_004028f0(1);
          puVar12 = puStack_68;
          if (puStack_68 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)&DAT_0057629c;
          }
          *(char *)((int)puVar12 + -1) = *(char *)((int)puVar12 + -1) + '\x01';
          FUN_00423a50(iStack_80);
          break;
        }
      }
      cVar2 = FUN_00402a00(uStack_64,1);
      if (cVar2 != '\0') {
        puVar9 = puStack_68;
        if (puStack_68 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)&DAT_0057629c;
        }
        puVar11 = puVar12;
        for (j = i >> 2; j != 0; j = j - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (j = i & 3; j != 0; j = j - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(undefined1 *)(i + (int)puVar12) = 0;
      }
      FUN_00423a50(iStack_80);
    }
    break;
  case 10:
    FUN_004542a0();
    break;
  case 0xc:
    FUN_00454440();
    break;
  case 0xd:
    FUN_004c3fa0();
    FUN_00454480();
    break;
  case 0x12:
    FUN_00452ef0();
    break;
  case 0x13:
    FUN_004551a0();
    break;
  case 0x14:
    FUN_00453200();
    break;
  case 0x15:
    FUN_00454320();
    break;
  case 0x16:
    FUN_004546b0();
    break;
  case 0x19:
    FUN_00451250();
    break;
  case 0x1c:
    FUN_0041e450();
    break;
  case 0x1d:
    FUN_00454b80();
    break;
  case 0xffffffff:
    FUN_004c4150(s__s___d_The_object_has_an_illegal_005a3410,
                 s_C__Work_A2IV_Game_prog_tob_main__005a33ec);
  }
  if (puStack_68 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puStack_68 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339();
    }
    else {
      *(char *)((int)puStack_68 + -1) = cVar2 + -1;
    }
  }
switchD_00453cab_caseD_0:
  ExceptionList = pvStack_c;
  return;
}


/* ==== 00454170 FUN_00454170 ==== */

void FUN_00454170(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_004c3fa0(s_Adding_object__d_with_type_play_s_005a3460,param_2);
  if (param_2 != -1) {
    uVar1 = FUN_0049ecf0(param_2);
    *(undefined4 *)(param_1 * 0xf0 + 0x30 + DAT_00715e50) = uVar1;
    *(undefined4 *)(param_1 * 0xf0 + 0x68 + DAT_00715e50) = 1;
  }
  return;
}


/* ==== 004541c0 FUN_004541c0 ==== */

void FUN_004541c0(int param_1)

{
  int iVar1;
  
  FUN_004c3fa0(s_Adding_Unmovable_physics_to_obje_005a348c,param_1);
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar1 + 0x54 + iVar1 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar1 + 0x54 + iVar1 * 0xa8) - 1.0;
  FUN_004a79d0(param_1,0,0,0,0,0,0,0,0x3f800000,0x3f19999a,1,0,0,1);
  FUN_004a7190(param_1);
  return;
}


/* ==== 004542a0 FUN_004542a0 ==== */

void FUN_004542a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004a79d0(param_1,param_2,param_3,param_4,0,0,0,0x44fa0000,0x3fb33333,0x3e4ccccd,0,0,0,1);
  FUN_004a7190(param_1);
  return;
}


/* ==== 00454320 FUN_00454320 ==== */

void FUN_00454320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004a79d0(param_1,param_2,param_3,param_4,0,0,0,0x43c80000,0x3f666666,0x3e4ccccd,0,0,0,1);
  FUN_004a7190(param_1);
  return;
}


/* ==== 00454440 FUN_00454440 ==== */

void FUN_00454440(int param_1)

{
  FUN_004c3fa0(s_init_ot_animation_005a34b4);
  FUN_00469dc0(param_1);
  *(undefined4 *)(param_1 * 0xf0 + 0x68 + DAT_00715e50) = 1;
  return;
}


/* ==== 00454480 FUN_00454480 ==== */

void FUN_00454480(int param_1)

{
  FUN_004c3fa0(s_init_ot_start_anim_005a34c8);
  FUN_00469dc0(param_1);
  *(undefined4 *)(param_1 * 0xf0 + 0x68 + DAT_00715e50) = 1;
  DAT_005a2a58 = 0;
  return;
}


/* ==== 00454530 FUN_00454530 ==== */

void FUN_00454530(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00454540 FUN_00454540 ==== */

void FUN_00454540(void)

{
  FUN_005584e0(&LAB_00454550);
  return;
}


/* ==== 00454570 FUN_00454570 ==== */

void FUN_00454570(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00454580 FUN_00454580 ==== */

void FUN_00454580(void)

{
  FUN_005584e0(&LAB_00454590);
  return;
}


/* ==== 00454640 FUN_00454640 ==== */

void FUN_00454640(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00454650 FUN_00454650 ==== */

void FUN_00454650(void)

{
  FUN_005584e0(&LAB_00454660);
  return;
}


/* ==== 00454680 FUN_00454680 ==== */

void FUN_00454680(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00454690 FUN_00454690 ==== */

void FUN_00454690(void)

{
  FUN_005584e0(&LAB_004546a0);
  return;
}


/* ==== 004546b0 FUN_004546b0 ==== */

void FUN_004546b0(int param_1)

{
  FUN_004a79d0(param_1,0,0,0,0,0,0,0x41200000,0x3f666666,0x3e4ccccd,0,&LAB_004544c0,0,1);
  FUN_004a7190(param_1);
  FUN_00450b00(param_1,PTR_s_PION_HIT_CAR_005a350c);
  *(undefined4 *)(param_1 * 0xf0 + 0x2c + DAT_00715e50) = 0;
  return;
}


/* ==== 00454860 FUN_00454860 ==== */

void FUN_00454860(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00454870 FUN_00454870 ==== */

void FUN_00454870(void)

{
  FUN_005584e0(&LAB_00454880);
  return;
}


/* ==== 004548a0 FUN_004548a0 ==== */

void FUN_004548a0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004548b0 FUN_004548b0 ==== */

void FUN_004548b0(void)

{
  FUN_005584e0(&LAB_004548c0);
  return;
}


/* ==== 004548d0 FUN_004548d0 ==== */

void FUN_004548d0(int param_1)

{
  FUN_004a79d0(param_1,0,0,0,0,0,0,0x41200000,0x3f800000,0x3f19999a,0,&LAB_004544c0,0,1);
  FUN_004a7190(param_1);
  FUN_00450b00(param_1,PTR_s_PION_HIT_CAR_005a3570);
  *(undefined4 *)(param_1 * 0xf0 + 0x2c + DAT_00715e50) = 0;
  return;
}


/* ==== 00454a80 FUN_00454a80 ==== */

void FUN_00454a80(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00454a90 FUN_00454a90 ==== */

void FUN_00454a90(void)

{
  FUN_005584e0(&LAB_00454aa0);
  return;
}


/* ==== 00454ac0 FUN_00454ac0 ==== */

void FUN_00454ac0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00454ad0 FUN_00454ad0 ==== */

void FUN_00454ad0(void)

{
  FUN_005584e0(&LAB_00454ae0);
  return;
}


/* ==== 00454af0 FUN_00454af0 ==== */

undefined4 FUN_00454af0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0056a680;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_2 + 0x28);
  local_8 = 0;
  iVar3 = iVar1 * 0xf0;
  ExceptionList = &local_10;
  uVar2 = FUN_004a7bd0();
  FUN_00479180(iVar1,uVar2);
  if (*(int *)(iVar3 + 0x2c + DAT_00715e50) == 0) {
    *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 1;
  }
  ExceptionList = local_10;
  return 0;
}


/* ==== 00454b80 FUN_00454b80 ==== */

void FUN_00454b80(int param_1,char *param_2)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a69a;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  i = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  FUN_00402940(param_2,~i - 1);
  local_4 = 0;
  FUN_004a7be0(local_1c);
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_2c[0] = (undefined1)param_1;
  i = 0xffffffff;
  *(undefined4 *)(param_1 * 0xf0 + 0x2c + DAT_00715e50) = 0;
  pcVar2 = param_2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar2 = *param_2;
      param_2 = param_2 + 1;
      pcVar2 = pcVar2 + 1;
    }
    local_28[i] = '\0';
    local_24 = i;
  }
  local_4 = 1;
  FUN_00478640(param_1,local_2c);
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


/* ==== 00454de0 FUN_00454de0 ==== */

int FUN_00454de0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  iVar2 = DAT_0073b0d0 + iVar1 + iVar1 * 0xa8;
  puVar4 = (undefined4 *)
           (*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + iVar1 + 4 + iVar1 * 0xa8) * 9 + 4 +
                             DAT_0073b168) + param_2 * 4) * 0x10 + DAT_0073b120);
  iVar2 = FUN_004a78a0(*(undefined4 *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54),
                       *(undefined4 *)(iVar2 + 0x58),*(undefined4 *)(iVar2 + 0x74),
                       *(undefined4 *)(iVar2 + 0x78),*(undefined4 *)(iVar2 + 0x7c),*puVar4,puVar4[1]
                       ,&LAB_00454ce0,0,0);
  uVar3 = FUN_004a7bd0();
  FUN_004a7be0(uVar3);
  *(undefined4 *)(iVar2 * 0xf0 + 0x34 + DAT_00715e50) =
       *(undefined4 *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
  *(undefined4 *)(iVar2 * 0xf0 + 0x5c + DAT_00715e50) = 1;
  return iVar2;
}


/* ==== 00454f00 FUN_00454f00 ==== */

void FUN_00454f00(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00454f10 FUN_00454f10 ==== */

void FUN_00454f10(void)

{
  FUN_005584e0(&LAB_00454f20);
  return;
}


/* ==== 00454f40 FUN_00454f40 ==== */

void FUN_00454f40(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00454f50 FUN_00454f50 ==== */

void FUN_00454f50(void)

{
  FUN_005584e0(&LAB_00454f60);
  return;
}


