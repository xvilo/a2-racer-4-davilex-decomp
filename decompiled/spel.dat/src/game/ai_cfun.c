/* spel.dat — game/ai_cfun.cpp: 11 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00404820 FUN_00404820 ==== */

bool FUN_00404820(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_index___d__in_FS_0058f2a8,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f284,0x273,param_1);
  }
  iVar1 = FUN_00429360(*(undefined4 *)(&DAT_005cea34 + param_1 * 0x294));
  return iVar1 == 0;
}


/* ==== 00404c90 FUN_00404c90 ==== */

undefined4 FUN_00404c90(int param_1)

{
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_index___d__in_FS_0058f580,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f55c,0x3a8,param_1);
  }
  if (2.0 < *(float *)(&DAT_005cea54 + param_1 * 0x294)) {
    return 1;
  }
  return 0;
}


/* ==== 00404ce0 FUN_00404ce0 ==== */

undefined4 FUN_00404ce0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_index___d__in_FS_0058f5e8,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f5c4,0x3c3,param_1);
  }
  iVar3 = *(int *)(&DAT_005cea34 + param_1 * 0x294);
  uVar1 = *(undefined4 *)(iVar3 * 0xf0 + 0x3c + DAT_00715e50);
  iVar2 = FUN_00404820(param_1);
  if (iVar2 == 0) {
    iVar3 = FUN_00419120(iVar3,uVar1);
    if (iVar3 == 1) {
      return 1;
    }
  }
  return 0;
}


/* ==== 00404eb0 FUN_00404eb0 ==== */

undefined4 FUN_00404eb0(int param_1)

{
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s___s___d_Illegal_index___d__in_FS_0058f724,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f700,0x43b,param_1);
  }
  param_1 = param_1 * 0x294;
  if (2.5 < *(float *)(&DAT_005cea58 + param_1)) {
    FUN_00402e40(&DAT_005cea7c + param_1,0);
    FUN_00402ea0(&DAT_005cea7c + param_1,0x42c80000);
    *(undefined4 *)(&DAT_005cea54 + param_1) = 0xc0a00000;
    return 1;
  }
  return 0;
}


/* ==== 00404f30 FUN_00404f30 ==== */

undefined4 FUN_00404f30(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 < 0) || (5 < param_1)) {
    FUN_004c4150(s__s__d____FSM_object_index___d__d_0058f790,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f76c,0x468,param_1);
  }
  iVar4 = param_1 * 0x294;
  uVar1 = *(uint *)(&DAT_005cea64 + iVar4);
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      if ((((uVar1 & 0x20) != 0) &&
          (iVar2 = DAT_006fba58 * 0xf0 + DAT_00715e50,
          *(int *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50) == *(int *)(iVar2 + 0x34))) &&
         (35.0 < *(float *)(iVar2 + 0xc4))) {
        iVar2 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24) * 0xa9;
        iVar2 = FUN_00403ea0(iVar3,*(undefined4 *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54),
                             *(undefined4 *)(iVar2 + 0x58));
        iVar3 = DAT_006fba58;
        if ((0x200 < iVar2) && (iVar2 < 0x600)) {
          *(undefined4 *)(&DAT_005cea50 + iVar4) = 0;
          *(int *)(&DAT_005cea34 + iVar4) = iVar3;
          return 3;
        }
        if ((0xa00 < iVar2) && (iVar2 < 0xe00)) {
          *(undefined4 *)(&DAT_005cea50 + iVar4) = 0;
          *(int *)(&DAT_005cea34 + iVar4) = iVar3;
          return 4;
        }
      }
    }
    else {
      iVar2 = DAT_006fba58 * 0xf0 + DAT_00715e50;
      if (*(int *)(iVar2 + 0x34) == *(int *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50)) {
        iVar2 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24) * 0xa9;
        iVar3 = FUN_00403ea0(iVar3,*(undefined4 *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54),
                             *(undefined4 *)(iVar2 + 0x58));
        if (iVar3 < 0x52c) {
          *(int *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
          return 2;
        }
        if (0xad4 < iVar3) {
          *(int *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
          return 2;
        }
      }
    }
  }
  else {
    iVar2 = FUN_00407d20(*(undefined4 *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50),
                         *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    if (-2 < iVar2) {
      iVar3 = FUN_00407d20(*(undefined4 *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50),
                           *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
      if ((iVar3 < 8) && ((int)(&DAT_005973c8)[param_1 * 0x16] < DAT_006fbaa4)) {
        *(int *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
        return 1;
      }
    }
  }
  return 0;
}


/* ==== 00405190 FUN_00405190 ==== */

undefined4 FUN_00405190(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1 < 0) || (5 < param_1)) {
    FUN_004c4150(s__s__d____FSM_object_index___d__d_0058f7f0,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f7cc,0x4da,param_1);
  }
  iVar5 = param_1 * 0x294;
  uVar4 = *(uint *)(&DAT_005cea64 + iVar5);
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if ((uVar4 & 8) == 0) {
    if ((uVar4 & 0x10) == 0) {
      if ((uVar4 & 0x20) != 0) {
        if (30.0 <= *(float *)(*(int *)(&DAT_005cea34 + iVar5) * 0xf0 + 0xc4 + DAT_00715e50)) {
          uVar4 = FUN_004a7200(*(undefined4 *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50),
                               *(undefined4 *)
                                (*(int *)(&DAT_005cea34 + iVar5) * 0xf0 + DAT_00715e50 + 0x34));
          if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 2) {
            iVar5 = DAT_0073b0d0 +
                    *(int *)(*(int *)(&DAT_005cea34 + iVar5) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
            iVar3 = FUN_00403ea0(iVar3,*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x54),
                                 *(undefined4 *)(iVar5 + 0x58));
            if (((0x200 < iVar3) && (iVar3 < 0x600)) || ((0xa00 < iVar3 && (iVar3 < 0xe00)))) {
              return 1;
            }
          }
        }
      }
    }
    else {
      uVar1 = *(undefined4 *)(iVar3 * 0xf0 + 0x3c + DAT_00715e50);
      iVar3 = FUN_00423290(uVar1,7);
      if (iVar3 != -1) {
        cVar2 = FUN_00423510(iVar3);
        if (cVar2 == '\x01') {
          return 1;
        }
      }
      iVar3 = FUN_00423290(uVar1,6);
      if (iVar3 != -1) {
        cVar2 = FUN_00423510(iVar3);
        if (cVar2 == '\x01') {
          return 1;
        }
      }
    }
  }
  else {
    iVar5 = FUN_004a7200(*(undefined4 *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50),
                         *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    if (0 < iVar5) {
      iVar3 = FUN_004a7200(*(undefined4 *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50),
                           *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
      if ((iVar3 < 6) && ((int)(&DAT_005973c8)[param_1 * 0x16] < DAT_006fbaa4)) {
        return 1;
      }
    }
  }
  return 0;
}


/* ==== 004053a0 FUN_004053a0 ==== */

undefined4 FUN_004053a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_0058f850,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f82c,0x548,param_1);
  }
  iVar2 = param_1 * 0x294;
  iVar1 = FUN_00407d20(*(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50)
                       ,*(undefined4 *)
                         (*(int *)(&DAT_005cea34 + iVar2) * 0xf0 + 0x34 + DAT_00715e50));
  if ((3 < iVar1) &&
     (*(int *)(*(int *)(&DAT_005cea04 + iVar2) + *(int *)(&DAT_005ce9fc + iVar2) * 8) != 6)) {
    return 1;
  }
  return 0;
}


/* ==== 00405430 FUN_00405430 ==== */

bool FUN_00405430(int param_1)

{
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_0058f89c,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f878,0x570,param_1);
  }
  return *(int *)(*(int *)(&DAT_005cea04 + param_1 * 0x294) +
                 *(int *)(&DAT_005ce9fc + param_1 * 0x294) * 8) == -1;
}


/* ==== 00405480 FUN_00405480 ==== */

bool FUN_00405480(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d____Illegal_FSM_object_inde_0058f8e8,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f8c4,0x598,param_1);
  }
  iVar1 = FUN_004a7200(*(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50)
                       ,*(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
  return 0x1e < iVar1;
}


/* ==== 00405500 FUN_00405500 ==== */

undefined4 FUN_00405500(int param_1)

{
  if ((param_1 < 6) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d____FSM_object_index___d__d_0058f934,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f910,0x5be,param_1);
  }
  param_1 = param_1 * 0x294;
  if (2.0 < *(float *)(&DAT_005cea54 + param_1)) {
    if (20.0 < *(float *)(*(int *)(&DAT_005cea34 + param_1) * 0xf0 + 0xc4 + DAT_00715e50)) {
      return 1;
    }
    *(undefined4 *)(&DAT_005cea54 + param_1) = 0;
  }
  return 0;
}


/* ==== 00405590 FUN_00405590 ==== */

bool FUN_00405590(int param_1)

{
  uint uVar1;
  
  if ((param_1 < 6) || (0x12 < param_1)) {
    FUN_004c4150(s__s__d____FSM_object_index___d__d_0058f990,
                 s_C__Work_A2IV_Game_prog_ai_cfun_c_0058f96c,0x5f2,param_1);
  }
  uVar1 = FUN_00407d20(*(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50)
                       ,*(undefined4 *)
                         (*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x34 + DAT_00715e50));
  return 0x32 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
}


