/* spel.dat — game/ai_carc.cpp: 45 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00402730 FUN_00402730 ==== */

char * FUN_00402730(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 == 0) {
    return s_UNKNOWN_0058e5dc;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return s___0058e5f4;
    }
    return s_BEHIND_0058e5ec;
  }
  return s_INFRONT_0058e5e4;
}


/* ==== 00402760 FUN_00402760 ==== */

char * FUN_00402760(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return s_AI_STAGE_REVERSE_0058e5f8;
  case 1:
    return s_AI_STAGE_BRAKE_0058e60c;
  case 2:
    return s_AI_STAGE_PAUSE_0058e61c;
  case 3:
    return s_AI_STAGE_FORWARD_0058e62c;
  case 4:
    return s_AI_STAGE_FRONTAL_CHASE_0058e640;
  case 5:
    return s_AI_STAGE_FRONTAL_STAYINLANE_0058e658;
  case 6:
    return s_AI_STAGE_FRONTAL_SLOWDOWN_0058e674;
  case 7:
    return s_AI_STAGE_FRONTAL_HANDBRAKE_0058e690;
  case 8:
    return s_AI_STAGE_FRONTAL_PAUSE_0058e6ac;
  case 9:
    return s_AI_STAGE_REAR_STAYINLANE_0058e6c4;
  case 10:
    return s_AI_STAGE_REAR_BASH_0058e6e0;
  case 0xb:
    return s_AI_STAGE_SIDEWAYS_CHASE_0058e6f4;
  case 0xc:
    return s_AI_STAGE_SIDEWAYS_MEGAPHONE_0058e70c;
  case 0xd:
    return s_AI_STAGE_SIDEWAYS_BASH_0058e728;
  case 0xe:
    return s_AI_STAGE_SIDEWAYS_PAUSE_0058e740;
  case 0xf:
    return s_AI_STAGE_BREAKFREE_FORWARD_0058e758;
  case 0x10:
    return s_AI_STAGE_BREAKFREE_REVERSE_0058e774;
  case 0x11:
    return s_AI_STAGE_BREAKFREE_STOP_0058e790;
  case 0x12:
    return s_AI_STAGE_BASH_BASH_0058e7a8;
  case 0x13:
    return s_AI_STAGE_BASH_PAUSE_0058e7bc;
  default:
    return s___0058e7d0;
  }
}


/* ==== 00402880 FUN_00402880 ==== */

void FUN_00402880(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00402890 FUN_00402890 ==== */

void FUN_00402890(void)

{
  FUN_005584e0(&LAB_004028a0);
  return;
}


/* ==== 004028c0 FUN_004028c0 ==== */

void FUN_004028c0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004028d0 FUN_004028d0 ==== */

void FUN_004028d0(void)

{
  FUN_005584e0(&LAB_004028e0);
  return;
}


/* ==== 004028f0 FUN_004028f0 ==== */

void FUN_004028f0(char param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if ((param_1 != '\0') && (iVar2 = *(int *)(in_ECX + 4), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


/* ==== 00402940 FUN_00402940 ==== */

void FUN_00402940(undefined4 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  undefined4 *puVar3;
  
  if (0xfffffffd < param_2) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_2 == 0) {
      FUN_004028f0(1);
      return;
    }
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (param_2 <= *(uint *)(in_ECX + 0xc))) goto LAB_004029b0;
    FUN_004028f0(1);
  }
  else if (param_2 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    return;
  }
  FUN_00402b20(param_2);
LAB_004029b0:
  puVar3 = *(undefined4 **)(in_ECX + 4);
  for (i = param_2 >> 2; i != 0; i = i - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (i = param_2 & 3; i != 0; i = i - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(uint *)(in_ECX + 8) = param_2;
  *(undefined1 *)(param_2 + *(int *)(in_ECX + 4)) = 0;
  return;
}


/* ==== 004029e0 FUN_004029e0 ==== */

void FUN_004029e0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 8) = param_1;
  *(undefined1 *)(*(int *)(in_ECX + 4) + param_1) = 0;
  return;
}


/* ==== 00402a00 FUN_00402a00 ==== */

undefined4 FUN_00402a00(uint param_1,char param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int in_ECX;
  
  if (0xfffffffd < param_1) {
    FUN_0054b1b4();
  }
  puVar2 = *(undefined1 **)(in_ECX + 4);
  if (((puVar2 == (undefined1 *)0x0) || (cVar1 = puVar2[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_1 == 0) {
      if (param_2 == '\0') {
        if (puVar2 != (undefined1 *)0x0) {
          *(undefined4 *)(in_ECX + 8) = 0;
          *puVar2 = 0;
        }
        return 0;
      }
      if (puVar2 != (undefined1 *)0x0) {
        cVar1 = puVar2[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          puVar2[-1] = cVar1 + -1;
          *(undefined4 *)(in_ECX + 4) = 0;
          *(undefined4 *)(in_ECX + 8) = 0;
          *(undefined4 *)(in_ECX + 0xc) = 0;
          return 0;
        }
        FUN_0054b339(puVar2 + -1);
      }
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      return 0;
    }
    if (param_2 != '\0') {
      if ((*(uint *)(in_ECX + 0xc) < 0x20) && (param_1 <= *(uint *)(in_ECX + 0xc))) {
        return 1;
      }
      if (puVar2 != (undefined1 *)0x0) {
        cVar1 = puVar2[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          puVar2[-1] = cVar1 + -1;
          *(undefined4 *)(in_ECX + 4) = 0;
          *(undefined4 *)(in_ECX + 8) = 0;
          *(undefined4 *)(in_ECX + 0xc) = 0;
          FUN_00402b20(param_1);
          return 1;
        }
        FUN_0054b339(puVar2 + -1);
      }
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      FUN_00402b20(param_1);
      return 1;
    }
    if (param_1 <= *(uint *)(in_ECX + 0xc)) {
      return 1;
    }
  }
  else if (param_1 == 0) {
    puVar2[-1] = cVar1 + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    return 0;
  }
  FUN_00402b20(param_1);
  return 1;
}


/* ==== 00402b20 FUN_00402b20 ==== */

void FUN_00402b20(uint param_1)

{
  uint size;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00569510;
  pvStack_10 = ExceptionList;
  size = param_1 | 0x1f;
  if (0xfffffffd < (param_1 | 0x1f)) {
    size = param_1;
  }
  size = size + 2;
  local_8 = 0;
  if ((int)size < 0) {
    size = 0;
  }
  ExceptionList = &pvStack_10;
  operator_new(size);
  FUN_00402ba0();
  return;
}


/* ==== 00402ba0 FUN_00402ba0 ==== */

void FUN_00402ba0(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint j;
  uint i;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  i = *(uint *)(unaff_EBX + 8);
  if (i != 0) {
    if (unaff_ESI < i) {
      i = unaff_ESI;
    }
    puVar4 = *(undefined4 **)(unaff_EBX + 4);
    puVar5 = (undefined4 *)(*(int *)(unaff_EBP + 8) + 1);
    for (j = i >> 2; j != 0; j = j - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (i = i & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    unaff_ESI = *(uint *)(unaff_EBP + -0x14);
  }
  iVar2 = *(int *)(unaff_EBX + 4);
  i = *(uint *)(unaff_EBX + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  puVar3 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBX + 8) = 0;
  *(undefined1 **)(unaff_EBX + 4) = puVar3 + 1;
  *puVar3 = 0;
  *(uint *)(unaff_EBX + 0xc) = unaff_ESI;
  if (i <= unaff_ESI) {
    unaff_ESI = i;
  }
  *(uint *)(unaff_EBX + 8) = unaff_ESI;
  *(undefined1 *)(*(int *)(unaff_EBX + 4) + unaff_ESI) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* ==== 00402c30 FUN_00402c30 ==== */

void FUN_00402c30(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint i;
  uint j;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = *(char **)(in_ECX + 4);
  if (pcVar3 == (char *)0x0) {
    return;
  }
  cVar1 = pcVar3[-1];
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == -1) {
    return;
  }
  pcVar3[-1] = cVar1 + -1;
  i = 0xffffffff;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  pcVar4 = pcVar3;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
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
    if ((*(uint *)(in_ECX + 0xc) < 0x20) && (i <= *(uint *)(in_ECX + 0xc))) goto LAB_00402cd7;
    FUN_004028f0(1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(0);
    return;
  }
  FUN_00402b20(i);
LAB_00402cd7:
  pcVar4 = *(char **)(in_ECX + 4);
  for (j = i >> 2; j != 0; j = j - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(uint *)(in_ECX + 8) = i;
  *(undefined1 *)(i + *(int *)(in_ECX + 4)) = 0;
  return;
}


/* ==== 00402d00 FUN_00402d00 ==== */

void FUN_00402d00(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


/* ==== 00402d30 FUN_00402d30 ==== */

void FUN_00402d30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[7] = 0;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  in_ECX[8] = 0xffffffff;
  in_ECX[9] = 0;
  in_ECX[4] = 5;
  in_ECX[10] = 0xffffffff;
  in_ECX[0xc] = 0;
  return;
}


/* ==== 00402de0 FUN_00402de0 ==== */

void FUN_00402de0(float param_1)

{
  float *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 < -100.0) {
    *in_ECX = -100.0;
    return;
  }
  if (100.0 < param_1) {
    *in_ECX = 100.0;
  }
  return;
}


/* ==== 00402e20 FUN_00402e20 ==== */

void FUN_00402e20(float param_1)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  *in_ECX = param_1 + fVar1;
  FUN_00402de0(param_1 + fVar1);
  return;
}


/* ==== 00402e40 FUN_00402e40 ==== */

void FUN_00402e40(float param_1)

{
  int in_ECX;
  
  *(float *)(in_ECX + 4) = param_1;
  if (100.0 < param_1) {
    *(undefined4 *)(in_ECX + 4) = 0x42c80000;
    return;
  }
  if (param_1 < 0.0) {
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return;
}


/* ==== 00402e80 FUN_00402e80 ==== */

void FUN_00402e80(float param_1)

{
  int in_ECX;
  
  param_1 = param_1 + *(float *)(in_ECX + 4);
  *(float *)(in_ECX + 4) = param_1;
  FUN_00402e40(param_1);
  return;
}


/* ==== 00402ea0 FUN_00402ea0 ==== */

void FUN_00402ea0(float param_1)

{
  int in_ECX;
  
  if (0.0 < (float)*(int *)(in_ECX + 0x2c)) {
    *(undefined4 *)(in_ECX + 8) = 0;
    return;
  }
  *(float *)(in_ECX + 8) = param_1;
  if (100.0 < param_1) {
    *(undefined4 *)(in_ECX + 8) = 0x42c80000;
    return;
  }
  if (param_1 < 0.0) {
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}


/* ==== 00402f00 FUN_00402f00 ==== */

void FUN_00402f00(float param_1)

{
  int in_ECX;
  
  if (0.0 < (float)*(int *)(in_ECX + 0x2c)) {
    *(undefined4 *)(in_ECX + 8) = 0;
    return;
  }
  param_1 = param_1 + *(float *)(in_ECX + 8);
  *(float *)(in_ECX + 8) = param_1;
  FUN_00402ea0(param_1);
  return;
}


/* ==== 00402f70 FUN_00402f70 ==== */

void FUN_00402f70(void)

{
  undefined4 __ftol_result;
  int in_ECX;
  
  if ((float)*(int *)(in_ECX + 0x2c) == 0.0) {
    __ftol_result = __ftol();
    *(undefined4 *)(in_ECX + 0x2c) = __ftol_result;
    FUN_00402ea0(0);
  }
  return;
}


/* ==== 00403040 FUN_00403040 ==== */

void FUN_00403040(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x18) = param_1;
  return;
}


/* ==== 00403050 FUN_00403050 ==== */

void FUN_00403050(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x14) = param_1;
  if (10 < param_1) {
    *(undefined4 *)(in_ECX + 0x14) = 10;
    return;
  }
  if (param_1 < 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}


/* ==== 00403080 FUN_00403080 ==== */

void FUN_00403080(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x1c) = param_1;
  if (10000 < param_1) {
    *(undefined4 *)(in_ECX + 0x1c) = 10000;
    return;
  }
  if (param_1 < 0) {
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  return;
}


/* ==== 00403100 FUN_00403100 ==== */

void FUN_00403100(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x19) = param_1;
  return;
}


/* ==== 00403140 FUN_00403140 ==== */

void FUN_00403140(int param_1)

{
  int in_ECX;
  
  FUN_004a6980(-1 < param_1,s___s___d_Illegal_dynamics_type_gi_0058ea60,
               s_C__Work_A2IV_Game_prog_ai_carc_c_0058ea3c,0x298,param_1);
  *(int *)(in_ECX + 0x28) = param_1;
  return;
}


/* ==== 00403170 FUN_00403170 ==== */

void FUN_00403170(int param_1)

{
  int *piVar1;
  int in_ECX;
  int j;
  int i;
  float10 fVar2;
  
  i = 0;
  piVar1 = (int *)(param_1 + 0x34);
  j = 4;
  do {
    if (*(char *)(*piVar1 + 0x25) == '\x01') {
      i = i + 1;
    }
    piVar1 = piVar1 + 1;
    j = j + -1;
  } while (j != 0);
  if (0 < i) {
    *(undefined4 *)(in_ECX + 0x30) = 0;
    return;
  }
  fVar2 = (float10)FUN_004a6800();
  *(float *)(in_ECX + 0x30) = (float)(fVar2 + (float10)*(float *)(in_ECX + 0x30));
  return;
}


/* ==== 004031c0 FUN_004031c0 ==== */

short FUN_004031c0(void)

{
  float fVar1;
  byte bVar2;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x30);
  bVar2 = fVar1 < 0.5 | (byte)((ushort)((ushort)NAN(fVar1) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar1 == 0.5) << 0xe) >> 8);
  if (fVar1 >= 0.5 && (fVar1 == 0.5) == 0) {
    return CONCAT11(bVar2,1);
  }
  return (ushort)bVar2 << 8;
}


/* ==== 004031e0 FUN_004031e0 ==== */

float10 FUN_004031e0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x30);
}


/* ==== 004031f0 FUN_004031f0 ==== */

void FUN_004031f0(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  local_18 = param_2 - *(float *)(iVar1 + DAT_0073b0d0 + 0x50 + iVar1 * 0xa8);
  iVar1 = iVar1 + DAT_0073b0d0 + 0x50 + iVar1 * 0xa8;
  local_14 = param_3 - *(float *)(iVar1 + 4);
  local_10 = param_4 - *(float *)(iVar1 + 8);
  if (((local_18 != 0.0) || (local_14 != 0.0)) || (local_10 != 0.0)) {
    local_4 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
    local_c = local_18 / local_4;
    local_8 = local_14 / local_4;
    local_4 = local_10 / local_4;
  }
  puVar2 = (undefined4 *)
           FUN_004b4070(&local_18,
                        DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10)
  ;
  local_c = (float)*puVar2;
  local_8 = (float)puVar2[1];
  local_4 = (float)puVar2[2];
  FUN_00558550();
  __ftol();
  return;
}


/* ==== 00403440 FUN_00403440 ==== */

float10 FUN_00403440(int param_1,float param_2)

{
  if ((*(uint *)(&DAT_005cea64 + param_1 * 0x294) & 1) != 0) {
    return (float10)60.0 - (float10)param_2 * (float10)0.06666667;
  }
  if ((*(uint *)(&DAT_005cea64 + param_1 * 0x294) & 2) != 0) {
    return (float10)60.0 - (float10)param_2 * (float10)0.05882353;
  }
  return (float10)60.0 - (float10)param_2 * (float10)0.05263158;
}


/* ==== 00403490 FUN_00403490 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00403490(int param_1)

{
  int __ftol_result;
  int iVar1;
  int i;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  float local_10 [4];
  
  i = DAT_006fb958;
  local_10[0] = DAT_005d1b54;
  local_10[1] = (float)DAT_005d1b58;
  local_10[2] = (float)DAT_005d1b4c;
  local_10[3] = (float)DAT_005d1b50;
  if ((5 < param_1) && (param_1 < 0x13)) goto LAB_00403708;
  if (DAT_006fb958 == 0) {
    __ftol_result = __ftol();
LAB_004034fe:
    if ((_DAT_005d1b68 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) &&
       (iVar1 = FUN_00407d20(*(undefined4 *)
                              ((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),
                             *(undefined4 *)(DAT_006fba58 * 0xf0 + DAT_00715e50 + 0x34)),
       i = DAT_006fb958, _DAT_005d1b64 < (float)iVar1)) {
      fVar4 = (float10)*(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50) -
              (float10)local_10[DAT_006fb958];
LAB_00403621:
      if ((float10)10.0 <= fVar4) {
        return fVar4;
      }
      return (float10)10.0;
    }
    if ((i != 2) &&
       ((_DAT_005d1b68 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50) &&
        (i = FUN_00407d20(*(undefined4 *)
                           ((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),
                          *(undefined4 *)(DAT_006fba58 * 0xf0 + DAT_00715e50 + 0x34)),
        __ftol_result < i)))) {
      fVar4 = (float10)*(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50) -
              (float10)local_10[DAT_006fb958 + 2];
      goto LAB_00403621;
    }
  }
  else {
    __ftol_result = __ftol();
    if (i != 2) goto LAB_004034fe;
  }
  if (((int)(&DAT_005973c8)[param_1 * 0x16] < DAT_006fbaa4) && (i = 0, 0 < DAT_005d2ab0)) {
    piVar3 = &DAT_005973c8;
    piVar2 = &DAT_005ce9e8;
    __ftol_result = DAT_00715e50;
    do {
      if (*piVar3 == (&DAT_005973c8)[param_1 * 0x16] + 1) {
        if (*(float *)(*piVar2 * 0xf0 + 0xc4 + __ftol_result) < 20.0) break;
        iVar1 = FUN_004a7200(*(undefined4 *)
                              ((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + __ftol_result),
                             *(undefined4 *)(*piVar2 * 0xf0 + __ftol_result + 0x34));
        __ftol_result = DAT_00715e50;
        if ((int)(&DAT_005d2bb0)[*piVar3] < iVar1) {
          return (float10)*(float *)((&DAT_005ce9e8)[i * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) -
                 (float10)5.0;
        }
      }
      i = i + 1;
      piVar2 = piVar2 + 0xa5;
      piVar3 = piVar3 + 0x16;
    } while (i < DAT_005d2ab0);
  }
LAB_00403708:
  return (float10)3.4028235e+38;
}


/* ==== 00403750 FUN_00403750 ==== */

undefined4 FUN_00403750(int param_1)

{
  if ((param_1 < 0) || (5 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_index___d__in_FS_0058eab0,
                 s_C__Work_A2IV_Game_prog_ai_carc_c_0058ea8c,0x458,param_1);
  }
  if (*(float *)(&DAT_005cea84 + param_1 * 0x294) != 100.0) {
    return 1;
  }
  return 0;
}


/* ==== 004037a0 FUN_004037a0 ==== */

void FUN_004037a0(int param_1,undefined4 param_2,int param_3)

{
  float10 fVar1;
  
  if (*(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) < (float)param_3) {
    fVar1 = (float10)FUN_004a6800();
    FUN_00402f00((float)(fVar1 * (float10)100.0));
    FUN_00402e40(0);
    return;
  }
  fVar1 = (float10)FUN_004a6800();
  FUN_00402e80((float)(fVar1 * (float10)200.0));
  FUN_00402ea0(0);
  return;
}


/* ==== 00403830 FUN_00403830 ==== */

float10 FUN_00403830(int param_1)

{
  int *piVar1;
  int i;
  
  i = DAT_006fba58;
  if (param_1 == DAT_006fbaa4) {
LAB_0040387b:
    return (float10)*(float *)(i * 0xf0 + 0xc4 + DAT_00715e50);
  }
  i = 0;
  if (0 < DAT_005d2ab0) {
    piVar1 = &DAT_005973c8;
    do {
      if (*piVar1 == param_1) {
        i = (&DAT_005ce9e8)[i * 0xa5];
        goto LAB_0040387b;
      }
      i = i + 1;
      piVar1 = piVar1 + 0x16;
    } while (i < DAT_005d2ab0);
  }
  return (float10)3.4028235e+38;
}


/* ==== 004038a0 FUN_004038a0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004038a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = param_1;
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_index___d__in_FS_0058eb18,
                 s_C__Work_A2IV_Game_prog_ai_carc_c_0058eaf4,0x4d3,param_1);
  }
  iVar6 = param_1 * 0x294;
  uVar5 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar3 = FUN_004188c0(uVar5);
  puVar1 = (undefined4 *)(iVar3 * 0x50 + 8 + DAT_00715eb8);
  uVar4 = FUN_004031f0(uVar5,*puVar1,puVar1[1],puVar1[2]);
  param_1 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  if (500 < param_1) {
    param_1 = 500;
  }
  FUN_00403440(iVar2,(float)param_1);
  if (*(int *)(&DAT_005cea08 + iVar6) == 2) {
    FUN_00403830((&DAT_005973c8)[iVar2 * 0x16] + 1);
  }
  FUN_00403490(iVar2);
  uVar5 = __ftol();
  FUN_004037a0(iVar2,0,uVar5);
  FUN_00403100(0);
  if ((*(int *)(&DAT_005cea08 + iVar6) == 1) && (param_1 < 0x32)) {
    FUN_00403100(1);
  }
  return;
}


/* ==== 00403a70 FUN_00403a70 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403a70(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((int)param_1 < 0) || (0x12 < (int)param_1)) {
    FUN_004c4150(s__s__d_Illegal_entry__d_in_FSM_ta_0058eb80,
                 s_C__Work_A2IV_Game_prog_ai_carc_c_0058eb5c,0x54c,param_1);
  }
  else {
    param_1 = (float)(&DAT_005ce9e8)[(int)param_1 * 0xa5];
  }
  iVar1 = FUN_004031f0(param_1,param_2,param_3,param_4);
  if (_DAT_005d1b8c <= ABS((float)iVar1)) {
    if ((float)iVar1 <= _DAT_005d1b90) {
      if (-_DAT_005d1b90 <= (float)iVar1) {
        param_1 = (float)iVar1 / _DAT_005d1b94;
      }
      else {
        param_1 = -100.0;
      }
    }
    else {
      param_1 = 100.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  FUN_00402de0(param_1);
  return;
}


/* ==== 00403c70 FUN_00403c70 ==== */

void FUN_00403c70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_index___d__in_FS_0058ec10,
                 s_C__Work_A2IV_Game_prog_ai_carc_c_0058ebec,0x5e9,param_1);
  }
  FUN_004038a0(param_1,param_2);
  FUN_00403a70(param_1,param_3,param_4,param_5);
  return;
}


/* ==== 00403cd0 FUN_00403cd0 ==== */

void FUN_00403cd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_index___d__in_FS_0058ec7c,
                 s_C__Work_A2IV_Game_prog_ai_carc_c_0058ec58,0x60e,param_1);
  }
  iVar3 = param_1 * 0x294;
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if (0.0 < *(float *)(&DAT_005cea5c + iVar3)) {
    iVar2 = iVar1 * 0xf0 + DAT_00715e50;
    fVar4 = (float10)FUN_004a6800();
    *(float *)(iVar2 + 0xbc) =
         (float)((float10)*(float *)(iVar2 + 0xbc) -
                fVar4 * (float10)*(float *)(iVar2 + 0xbc) * (float10)0.25);
    iVar2 = iVar1 * 0xf0 + DAT_00715e50;
    fVar4 = (float10)FUN_004a6800();
    fVar4 = fVar4 * (float10)*(float *)(iVar2 + 0xcc);
    *(float *)(iVar2 + 0xcc) = (float)((float10)*(float *)(iVar2 + 0xcc) - (fVar4 + fVar4));
    fVar4 = (float10)FUN_004a6800();
    *(float *)(&DAT_005cea5c + iVar3) = (float)((float10)*(float *)(&DAT_005cea5c + iVar3) - fVar4);
  }
  else {
    FUN_00427b90(iVar1,&DAT_005cea7c + iVar3);
  }
  if ((((param_1 < 0x12) || (0x12 < param_1)) && ((&DAT_005ce9ec)[param_1 * 0xa5] != 10)) &&
     (*(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50) < 0.0)) {
    *(undefined4 *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50) = 0;
  }
  return;
}


/* ==== 00403e30 FUN_00403e30 ==== */

void FUN_00403e30(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00403e40 FUN_00403e40 ==== */

void FUN_00403e40(void)

{
  FUN_005584e0(&LAB_00403e50);
  return;
}


/* ==== 00403e70 FUN_00403e70 ==== */

void FUN_00403e70(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00403e80 FUN_00403e80 ==== */

void FUN_00403e80(void)

{
  FUN_005584e0(&LAB_00403e90);
  return;
}


/* ==== 00403ea0 FUN_00403ea0 ==== */

void FUN_00403ea0(int param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float local_1c;
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
  local_1c = param_2 - *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8);
  param_4 = param_4 - *(float *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8 + 0x58);
  if (local_1c == 0.0) {
    local_1c = 0.1;
  }
  else if ((local_1c <= 0.0) || (0.1 <= local_1c)) {
    if ((local_1c < 0.0) && (-0.1 < local_1c)) {
      local_1c = -0.1;
    }
  }
  else {
    local_1c = 0.1;
  }
  FUN_004c3fa0(s_delta_x__f_z__f_0058eed8,(double)local_1c,(double)param_4);
  fpatan((float10)param_4 / (float10)local_1c,(float10)1);
  FUN_004c3fa0();
  FUN_004c3fa0();
  FUN_004c3fa0();
  __ftol();
  return;
}


