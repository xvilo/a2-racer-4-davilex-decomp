/* spel.dat — inputlib/CMouseDevice.cpp: 18 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ee370 FUN_004ee370 ==== */

void FUN_004ee370(void)

{
  char cVar1;
  int in_ECX;
  uint j;
  uint k;
  undefined **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  int i;
  undefined **local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005728c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0xd8) = 6;
  i = 0;
  local_30 = &PTR_s_CM_MOUSE_X_POS_005b86ec;
  do {
    pcVar3 = *local_30;
    FUN_004028f0(0);
    j = 0xffffffff;
    pcVar4 = pcVar3;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    j = ~j - 1;
    cVar1 = FUN_00402a00(j,1);
    if (cVar1 != '\0') {
      pcVar4 = local_18;
      for (k = j >> 2; k != 0; k = k - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (k = j & 3; k != 0; k = k - 1) {
        *pcVar4 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
      local_18[j] = '\0';
      local_14 = j;
    }
    local_4 = 0;
    FUN_004f1050(local_1c);
    local_4 = 0xffffffff;
    FUN_004028f0(1);
    i = i + 1;
    local_30 = local_30 + 1;
  } while (i < *(int *)(in_ECX + 0xd8));
  *(undefined4 *)(in_ECX + 0xdc) = 4;
  i = 0;
  ppuVar2 = &PTR_s_CM_MOUSE_BUTTON1_005b8704;
  do {
    j = 0xffffffff;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    pcVar3 = *ppuVar2;
    do {
      if (j == 0) break;
      j = j - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(*ppuVar2,~j - 1);
    local_4 = 3;
    FUN_004f1050(local_2c);
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    i = i + 1;
    ppuVar2 = ppuVar2 + 1;
    if (*(int *)(in_ECX + 0xdc) <= i) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


/* ==== 004ee510 FUN_004ee510 ==== */

void FUN_004ee510(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x114) = 0xfffffe0c;
  *(undefined4 *)(in_ECX + 0x118) = 500;
  *(undefined4 *)(in_ECX + 0x11c) = 0xfffffe0c;
  *(undefined4 *)(in_ECX + 0x120) = 500;
  *(undefined4 *)(in_ECX + 0x124) = 0xfffffe0c;
  *(undefined4 *)(in_ECX + 0x128) = 500;
  *(undefined4 *)(in_ECX + 300) = 0x3f000000;
  return;
}


/* ==== 004ee570 FUN_004ee570 ==== */

void FUN_004ee570(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iStack_90;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [28];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005728f3;
  pvStack_c = ExceptionList;
  iStack_90 = 0x4ee591;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_004f1d30();
  iStack_90 = in_ECX + 0xe0;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x10);
  if (iVar2 == -0x7ff8ffe2) {
    piVar1 = (int *)FUN_004f1d30();
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (iVar2 == 0) {
      piVar1 = (int *)FUN_004f1d30();
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x10,in_ECX + 0xe0);
      if (iVar2 != 0) {
        uVar3 = FUN_0049df90(&iStack_90,s_Input_exception_in___s___d__005b77e4,
                             s_D__Work_InputLib_prog_CMouseDevi_005b87e8,0x8f);
        uStack_10 = 0;
        uVar3 = FUN_004796b0(auStack_80,uVar3,s_DIError___Failed_to_get_Mouse_da_005b87c4);
        uStack_10 = CONCAT31(uStack_10._1_3_,1);
        FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_50,&DAT_005872d0);
      }
    }
  }
  else if (iVar2 != 0) {
    uVar3 = FUN_0049df90(auStack_70,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CMouseDevi_005b87e8,0x97);
    uStack_10 = 2;
    uVar3 = FUN_004796b0(auStack_60,uVar3,s_DIError___Failed_to_get_Mouse_da_005b87c4);
    uStack_10 = CONCAT31(uStack_10._1_3_,3);
    FUN_004edac0(uVar3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_34,&DAT_005872d0);
  }
  ExceptionList = pvStack_18;
  return;
}


/* ==== 004ee6b0 FUN_004ee6b0 ==== */

void FUN_004ee6b0(int *param_1,int param_2,int param_3)

{
  if (*param_1 < param_2) {
    *param_1 = param_2;
  }
  if (param_3 < *param_1) {
    *param_1 = param_3;
  }
  return;
}


/* ==== 004ee6d0 FUN_004ee6d0 ==== */

void FUN_004ee6d0(float *param_1,float param_2,float param_3)

{
  if (*param_1 < param_2) {
    *param_1 = param_2;
  }
  if (param_3 < *param_1) {
    *param_1 = param_3;
  }
  return;
}


/* ==== 004ee700 FUN_004ee700 ==== */

float10 FUN_004ee700(void)

{
  int in_ECX;
  
  return ((float10)8.0 - (float10)1.0) * (float10)*(float *)(in_ECX + 300) + (float10)1.0;
}


/* ==== 004ee720 FUN_004ee720 ==== */

void FUN_004ee720(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x120);
  iVar2 = *(int *)(in_ECX + 0x11c);
  iVar3 = *(int *)(in_ECX + 0x124);
  iVar4 = *(int *)(in_ECX + 0x128);
  *(float *)(in_ECX + 0xfc) =
       (float)*(int *)(in_ECX + 0xf0) /
       (float)((*(int *)(in_ECX + 0x118) - *(int *)(in_ECX + 0x114)) / 2);
  FUN_004ee6d0((float *)(in_ECX + 0xfc),0xbf800000,0x3f800000);
  *(float *)(in_ECX + 0x100) = (float)-*(int *)(in_ECX + 0xf4) / (float)((iVar1 - iVar2) / 2);
  FUN_004ee6d0((float *)(in_ECX + 0x100),0xbf800000,0x3f800000);
  *(float *)(in_ECX + 0x104) = (float)*(int *)(in_ECX + 0xf8) / (float)((iVar4 - iVar3) / 2);
  FUN_004ee6d0((float *)(in_ECX + 0x104),0xbf800000,0x3f800000);
  return;
}


/* ==== 004ee7f0 FUN_004ee7f0 ==== */

void FUN_004ee7f0(void)

{
  undefined4 __ftol_result;
  int in_ECX;
  
  FUN_004ee700();
  __ftol_result = __ftol();
  *(undefined4 *)(in_ECX + 0xf0) = __ftol_result;
  FUN_004ee6b0((undefined4 *)(in_ECX + 0xf0),*(undefined4 *)(in_ECX + 0x114),
               *(undefined4 *)(in_ECX + 0x118));
  __ftol_result = __ftol();
  *(undefined4 *)(in_ECX + 0xf4) = __ftol_result;
  FUN_004ee6b0((undefined4 *)(in_ECX + 0xf4),*(undefined4 *)(in_ECX + 0x11c),
               *(undefined4 *)(in_ECX + 0x120));
  __ftol_result = __ftol();
  *(undefined4 *)(in_ECX + 0xf8) = __ftol_result;
  FUN_004ee6b0((undefined4 *)(in_ECX + 0xf8),*(undefined4 *)(in_ECX + 0x124),
               *(undefined4 *)(in_ECX + 0x128));
  FUN_004ee720();
  return;
}


/* ==== 004ee8a0 FUN_004ee8a0 ==== */

void FUN_004ee8a0(float param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x120);
  iVar2 = *(int *)(in_ECX + 0x11c);
  iVar3 = *(int *)(in_ECX + 0x124);
  iVar4 = *(int *)(in_ECX + 0x128);
  *(float *)(in_ECX + 0x108) =
       param_1 / (float)((*(int *)(in_ECX + 0x118) - *(int *)(in_ECX + 0x114)) / 2);
  FUN_004ee6d0((float *)(in_ECX + 0x108),0xbf800000,0x3f800000);
  *(float *)(in_ECX + 0x10c) = -(param_2 / (float)((iVar1 - iVar2) / 2));
  FUN_004ee6d0((float *)(in_ECX + 0x10c),0xbf800000,0x3f800000);
  *(float *)(in_ECX + 0x110) = param_3 / (float)((iVar4 - iVar3) / 2);
  FUN_004ee6d0((float *)(in_ECX + 0x110),0xbf800000,0x3f800000);
  return;
}


/* ==== 004ee960 FUN_004ee960 ==== */

void FUN_004ee960(void)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = (float10)FUN_004ee700();
  fVar1 = (float)fVar2;
  local_4 = (float)*(int *)(in_ECX + 0xe0) * fVar1;
  FUN_004ee6d0(&local_4,(float)*(int *)(in_ECX + 0x114),(float)*(int *)(in_ECX + 0x118));
  local_8 = (float)*(int *)(in_ECX + 0xe4) * fVar1;
  FUN_004ee6d0(&local_8,(float)*(int *)(in_ECX + 0x11c),(float)*(int *)(in_ECX + 0x120));
  local_c = (float)*(int *)(in_ECX + 0xe8) * fVar1;
  FUN_004ee6d0(&local_c,(float)*(int *)(in_ECX + 0x124),(float)*(int *)(in_ECX + 0x128));
  FUN_004ee8a0(local_4,local_8,local_c);
  return;
}


/* ==== 004eea20 FUN_004eea20 ==== */

void FUN_004eea20(void)

{
  char cVar1;
  int in_ECX;
  uint i;
  uint j;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)PTR_s_CM_MOUSE_X_POS_005b86ec;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572930;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = (char *)puVar2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar4 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_004029e0(i);
  }
  local_4 = 0;
  FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0xfc));
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  puVar2 = (undefined4 *)PTR_s_CM_MOUSE_Y_POS_005b86f0;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = (char *)puVar2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar4 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_004029e0(i);
  }
  local_4 = 1;
  FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x100));
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  puVar2 = (undefined4 *)PTR_s_CM_MOUSE_Z_POS_005b86f4;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar3 = (char *)puVar2;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    puVar4 = local_18;
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_004029e0(i);
  }
  local_4 = 2;
  FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x104));
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004ee700();
  puVar2 = (undefined4 *)PTR_s_CM_MOUSE_X_MOVE_005b86f8;
  if (*(float *)(in_ECX + 0x108) != 0.0) {
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = (char *)puVar2;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      puVar4 = local_18;
      for (j = i >> 2; j != 0; j = j - 1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_004029e0(i);
    }
    local_4 = 3;
    FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x108));
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  puVar2 = (undefined4 *)PTR_s_CM_MOUSE_Y_MOVE_005b86fc;
  if (*(float *)(in_ECX + 0x10c) != 0.0) {
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = (char *)puVar2;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      for (j = i >> 2; j != 0; j = j - 1) {
        *local_18 = *puVar2;
        puVar2 = puVar2 + 1;
        local_18 = local_18 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_004029e0(i);
    }
    local_4 = 4;
    FUN_004f0c60(local_1c,*(undefined4 *)(in_ECX + 0x10c));
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  puVar2 = (undefined4 *)PTR_s_CM_MOUSE_Z_MOVE_005b8700;
  if (*(float *)(in_ECX + 0x110) != 0.0) {
    FUN_004028f0(0);
    i = 0xffffffff;
    pcVar3 = (char *)puVar2;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      puVar4 = local_28;
      for (j = i >> 2; j != 0; j = j - 1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      for (j = i & 3; j != 0; j = j - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(undefined1 *)((int)local_28 + i) = 0;
      local_24 = i;
    }
    local_4 = 5;
    FUN_004f0c60(local_2c,*(undefined4 *)(in_ECX + 0x110));
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339((char *)((int)local_28 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}


/* ==== 004eede0 FUN_004eede0 ==== */

void FUN_004eede0(void)

{
  byte bVar1;
  char cVar2;
  int in_ECX;
  uint j;
  uint k;
  char *pcVar3;
  char *pcVar4;
  int i;
  undefined **local_28;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00572948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f11b0();
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  FUN_004ee570();
  i = 0;
  if (0 < *(int *)(in_ECX + 0xdc)) {
    local_28 = &PTR_s_CM_MOUSE_BUTTON1_005b8704;
    do {
      local_18 = (char *)0x0;
      local_14 = 0;
      bVar1 = *(byte *)(in_ECX + 0xec + i);
      pcVar3 = *local_28;
      j = 0xffffffff;
      local_10 = 0;
      pcVar4 = pcVar3;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      j = ~j - 1;
      cVar2 = FUN_00402a00(j,1);
      if (cVar2 != '\0') {
        pcVar4 = local_18;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar4 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_18[j] = '\0';
        local_14 = j;
      }
      local_4 = 0;
      FUN_004f0df0(local_1c,bVar1 >> 7);
      local_4 = 0xffffffff;
      if (local_18 != (char *)0x0) {
        cVar2 = local_18[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339(local_18 + -1);
        }
        else {
          local_18[-1] = cVar2 + -1;
        }
      }
      i = i + 1;
      local_28 = local_28 + 1;
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
    } while (i < *(int *)(in_ECX + 0xdc));
  }
  FUN_004ee7f0();
  FUN_004ee960();
  FUN_004eea20();
  ExceptionList = local_c;
  return;
}


/* ==== 004eefb0 FUN_004eefb0 ==== */

void FUN_004eefb0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined1 auStack_58 [28];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00572970;
  pvStack_c = ExceptionList;
  local_3c = 0x14;
  local_38 = 0x10;
  local_34 = 0;
  local_30 = 0;
  local_2c = 1;
  puStack_60 = (undefined4 *)0x4eeff5;
  ExceptionList = &pvStack_c;
  piStack_68 = (int *)FUN_004f1d30();
  puStack_60 = &local_3c;
  uStack_64 = 2;
  iVar1 = (**(code **)(*piStack_68 + 0x18))();
  if (iVar1 != 0) {
    uVar2 = FUN_0049df90(&piStack_68,s_Input_exception_in___s___d__005b77e4,
                         s_D__Work_InputLib_prog_CMouseDevi_005b87e8,0x1db);
    uStack_10 = 0;
    uVar2 = FUN_004796b0(auStack_58,uVar2,s_DIError___Failed_to_set_mouse_pr_005b8810);
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    FUN_004edac0(uVar2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_005872d0);
  }
  ExceptionList = pvStack_18;
  return;
}


/* ==== 004ef1d0 FUN_004ef1d0 ==== */

void FUN_004ef1d0(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa4) != 0) {
    piVar1 = (int *)FUN_004f1d30();
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  FUN_004f1c80();
  return;
}


/* ==== 004ef210 FUN_004ef210 ==== */

void FUN_004ef210(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 004ef220 FUN_004ef220 ==== */

void FUN_004ef220(void)

{
  FUN_005584e0(&LAB_004ef230);
  return;
}


/* ==== 004ef250 FUN_004ef250 ==== */

void FUN_004ef250(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004ef260 FUN_004ef260 ==== */

void FUN_004ef260(void)

{
  FUN_005584e0(&LAB_004ef270);
  return;
}


