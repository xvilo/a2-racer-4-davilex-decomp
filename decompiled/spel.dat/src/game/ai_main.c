/* spel.dat — game/ai_main.CPP: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0040df50 FUN_0040df50 ==== */

void FUN_0040df50(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0040df60 FUN_0040df60 ==== */

void FUN_0040df60(void)

{
  FUN_005584e0(&LAB_0040df70);
  return;
}


/* ==== 0040df90 FUN_0040df90 ==== */

void FUN_0040df90(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0040dfa0 FUN_0040dfa0 ==== */

void FUN_0040dfa0(void)

{
  FUN_005584e0(&LAB_0040dfb0);
  return;
}


/* ==== 0040dfc0 FUN_0040dfc0 ==== */

void __thiscall FUN_0040dfc0(void *this,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int i;
  int j;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar4 = *(undefined4 **)((int)this + 8);
  if (param_3 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar4 >> 5)) {
    if ((uint)((int)puVar4 - (int)param_2 >> 5) < param_3) {
      puVar3 = param_2 + param_3 * 8;
      if (param_2 != puVar4) {
        puVar1 = puVar3 + param_3 * -8;
        do {
          if (puVar3 != (undefined4 *)0x0) {
            puVar5 = puVar1;
            puVar6 = puVar3;
            for (i = 8; i != 0; i = i + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          puVar1 = puVar1 + 8;
          puVar3 = puVar3 + 8;
        } while (puVar1 != puVar4);
      }
      puVar4 = *(undefined4 **)((int)this + 8);
      for (i = param_3 - ((int)puVar4 - (int)param_2 >> 5); i != 0; i = i + -1) {
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = param_4;
          puVar1 = puVar4;
          for (j = 8; j != 0; j = j + -1) {
            *puVar1 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar1 = puVar1 + 1;
          }
        }
        puVar4 = puVar4 + 8;
      }
      puVar4 = *(undefined4 **)((int)this + 8);
      while (param_2 != puVar4) {
        puVar5 = param_2 + 8;
        puVar3 = param_4;
        puVar1 = param_2;
        for (i = 8; param_2 = puVar5, i != 0; i = i + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
    else {
      if (param_3 == 0) {
        return;
      }
      puVar3 = puVar4;
      for (puVar1 = puVar4 + param_3 * -8; puVar1 != puVar4; puVar1 = puVar1 + 8) {
        if (puVar3 != (undefined4 *)0x0) {
          puVar5 = puVar1;
          puVar6 = puVar3;
          for (i = 8; i != 0; i = i + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        puVar3 = puVar3 + 8;
      }
      puVar4 = *(undefined4 **)((int)this + 8);
      puVar3 = puVar4 + param_3 * -8;
      while (param_2 != puVar3) {
        puVar3 = puVar3 + -8;
        puVar4 = puVar4 + -8;
        puVar1 = puVar3;
        puVar5 = puVar4;
        for (i = 8; i != 0; i = i + -1) {
          *puVar5 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      puVar4 = param_2;
      while (puVar4 != param_2 + param_3 * 8) {
        puVar5 = puVar4 + 8;
        puVar3 = param_4;
        puVar1 = puVar4;
        for (i = 8; puVar4 = puVar5, i != 0; i = i + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
    param_2 = (undefined4 *)(param_3 * 0x20);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + (int)param_2;
    return;
  }
  i = *(int *)((int)this + 4);
  if ((i == 0) || (uVar2 = (int)puVar4 - i >> 5, uVar2 <= param_3)) {
    uVar2 = param_3;
  }
  if (i == 0) {
    i = 0;
  }
  else {
    i = (int)puVar4 - i >> 5;
  }
  i = i + uVar2;
  j = i;
  if (i < 0) {
    j = 0;
  }
  puVar1 = operator_new(j << 5);
  puVar3 = puVar1;
  for (puVar4 = *(undefined4 **)((int)this + 4); uVar2 = param_3, puVar5 = puVar3, puVar4 != param_2
      ; puVar4 = puVar4 + 8) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar5 = puVar4;
      puVar6 = puVar3;
      for (j = 8; j != 0; j = j + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    puVar3 = puVar3 + 8;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (puVar5 != (undefined4 *)0x0) {
      puVar4 = param_4;
      puVar6 = puVar5;
      for (j = 8; j != 0; j = j + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    puVar5 = puVar5 + 8;
  }
  puVar5 = *(undefined4 **)((int)this + 8);
  puVar4 = puVar3 + param_3 * 8;
  if (param_2 != puVar5) {
    param_2 = (undefined4 *)((int)puVar4 + (param_3 * -0x20 - (int)puVar3) + (int)param_2);
    do {
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = param_2;
        puVar6 = puVar4;
        for (j = 8; j != 0; j = j + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      param_2 = param_2 + 8;
      puVar4 = puVar4 + 8;
    } while (param_2 != puVar5);
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  j = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = puVar1 + i * 8;
  if (j != 0) {
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 **)((int)this + 8) = puVar1 + ((*(int *)((int)this + 8) - j >> 5) + param_3) * 8;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar1;
  *(undefined4 **)((int)this + 8) = puVar1 + param_3 * 8;
  return;
}


/* ==== 0040e250 FUN_0040e250 ==== */

void FUN_0040e250(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 * 0xf0;
  iVar1 = *(int *)(iVar3 + 0x50 + DAT_00715e50);
  if ((iVar1 != 1) && (iVar1 != 0)) {
    FUN_004c4150(s__s__d___obj_side__d_____d_is_ill_00591fd8,
                 s_C__Work_A2IV_Game_prog_ai_main_C_00591fb4,0x2d,param_1,iVar1);
  }
  *(undefined4 *)(iVar3 + 0x60 + DAT_00715e50) = 1;
  iVar1 = FUN_0040dad0(param_1);
  if ((iVar1 != -1) && (iVar1 < DAT_005d2ab0)) {
    uVar2 = FUN_00407d20(*(undefined4 *)(iVar3 + 0x34 + DAT_00715e50),
                         *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    (&DAT_005cea38)[iVar1 * 0xa5] = uVar2;
  }
  return;
}


/* ==== 0040e2f0 FUN_0040e2f0 ==== */

undefined4 FUN_0040e2f0(int param_1,int param_2)

{
  if ((param_2 < param_1) && (param_1 - param_2 < DAT_00715258 / 2)) {
    return 1;
  }
  if ((param_1 < param_2) && (DAT_00715258 / 2 < param_2 - param_1)) {
    return 1;
  }
  return 0;
}


/* ==== 0040e340 FUN_0040e340 ==== */

void FUN_0040e340(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int i;
  char *pcVar5;
  int local_c;
  
  piVar2 = param_2;
  FUN_004c3fa0(s_BACKTRACK_SPEED_TRIGGER_00592000);
  *param_2 = 0;
  *param_3 = 0;
  iVar4 = param_1 * 0xf0;
  iVar3 = *(int *)(iVar4 + 0x34 + DAT_00715e50);
  FUN_004c3fa0(s_Chunk____d__0059201c,iVar3);
  i = *(int *)(iVar4 + 0x50 + DAT_00715e50);
  FUN_004c3fa0(s_Side____d__0059202c,i);
  if (i == 0) {
    if (DAT_006fb8e8 == 0) {
      param_2 = (int *)0x1;
      pcVar5 = s_Side_is_left__00592038;
    }
    else {
      param_2 = (int *)0xffffffff;
      pcVar5 = s_Side_is_left__00592048;
    }
  }
  else if (DAT_006fb8e8 == 0) {
    param_2 = (int *)0xffffffff;
    pcVar5 = s_Side_is_right__00592058;
  }
  else {
    param_2 = (int *)0x1;
    pcVar5 = s_Side_is_right__00592068;
  }
  FUN_004c3fa0(pcVar5);
  FUN_004c3fa0(s_Starting_loop____00592078);
  FUN_004c3fa0(s_Checking_chunk__d__0059208c,iVar3);
  if (iVar3 <= DAT_00715258 + -1) {
    local_c = iVar3 * 0x994 + 0xfc;
    do {
      if (iVar3 < 0) break;
      i = 0;
      param_1 = local_c;
      do {
        FUN_004c3fa0(s_Checking_trigger__d__005920e8,i);
        iVar1 = *(int *)(param_1 + DAT_00715f00);
        if ((3 < iVar1) && ((iVar1 < 7 || (iVar1 == 8)))) {
          FUN_004c3fa0(s_Speed_trigger_found___d__00592100,iVar1);
          FUN_004c3fa0(s__p_speed_trigger____d__0059211c,*piVar2);
          FUN_004c3fa0(s_NO_TRIGGER____d__00592134,0);
          if (*piVar2 == 0) {
            FUN_004c3fa0(s_Speed_trigger_not_yet_set__00592148);
            *piVar2 = iVar1;
            if (*param_3 != 0) {
              FUN_004c3fa0(s_All_triggers_found__returning__00592164);
              return;
            }
          }
        }
        i = i + 1;
        param_1 = param_1 + 4;
      } while (i < 2);
      iVar3 = iVar3 + (int)param_2;
      local_c = local_c + (int)param_2 * 0x994;
      FUN_004c3fa0(s_Checking_chunk__d__0059208c,iVar3);
    } while (iVar3 <= DAT_00715258 + -1);
  }
  FUN_004c3fa0(s_Illegal_chunk__returning_default_005920a0);
  if (*piVar2 == 0) {
    *piVar2 = 8;
  }
  iVar3 = DAT_005d1b04;
  if (*param_3 == 0) {
    DAT_005d1b04 = DAT_005d1b04 + 1;
    FUN_004c3fa0(s___04d__No_lane_trigger_found__005920c8,iVar3);
    if (*(int *)(iVar4 + 0x50 + DAT_00715e50) == 1) {
      *param_3 = 0x13;
    }
    if (*(int *)(iVar4 + 0x50 + DAT_00715e50) == 0) {
      *param_3 = 0x29;
    }
  }
  return;
}


/* ==== 0040e5a0 FUN_0040e5a0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040e5a0(int param_1,int param_2,char param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int k;
  int j;
  int iVar8;
  float10 fVar9;
  undefined1 local_49;
  int i;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  DWORD local_34 [3];
  undefined4 uStack_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_49 = 0;
  if (param_3 != '\0') {
    local_34[0] = GetTickCount();
    local_34[1] = 0;
    fVar1 = (float)local_34[0] - _DAT_005d1b00;
    if (fVar1 < 5000.0 || (fVar1 == 5000.0) != 0) {
      return (uint)(ushort)((ushort)(fVar1 < 5000.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 5000.0) << 0xe);
    }
  }
  cVar2 = '\0';
  i = 0;
  iVar6 = param_2 * 0x99;
  iVar7 = param_2 * 0x994;
  j = param_2;
  do {
    if (9 < i) break;
    iVar8 = param_1 * 0xf0;
    iVar6 = *(int *)(iVar8 + 0x50 + DAT_00715e50);
    if (iVar6 == 0) {
      param_2 = *(int *)(DAT_00715f00 + 0xf4 + iVar7);
    }
    else if (iVar6 == 1) {
      param_2 = *(int *)(DAT_00715f00 + 0xf8 + iVar7);
    }
    else {
      param_2 = *(int *)(DAT_00715f00 + 0xf8 + iVar7);
    }
    local_24 = 0;
    local_20 = 0.0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0.0;
    local_10 = 0;
    fVar9 = (float10)FUN_004a6e80(j,1);
    local_14 = (float)fVar9;
    if ((0 < param_2) && (k = 0, 0 < param_2)) {
      do {
        iVar3 = FUN_004a6d70(j,k,iVar6);
        if (*(int *)(iVar3 * 0x50 + 0x24 + DAT_00715eb8) == 0) {
          uVar4 = FUN_004a6d70(j,k,iVar6);
          puVar5 = (undefined4 *)FUN_004a6d00(local_c,j,k,iVar6);
          local_24 = *puVar5;
          local_20 = (float)puVar5[1];
          local_1c = puVar5[2];
          local_40 = FUN_004af230(&DAT_00715250,j,*puVar5,puVar5[1],puVar5[2]);
          FUN_004adaf0(&local_40,1,local_24,local_20,local_1c,local_34,&local_38,&local_3c);
          fVar9 = (float10)FUN_004ad640(local_24,local_20,local_1c,local_38,local_3c);
          local_20 = (float)(fVar9 + (float10)20.0);
          (**(code **)(**(int **)(iVar8 + 0x10 + DAT_00715e50) + 0x10))(&local_24,&local_18);
          *(int *)(iVar8 + 0x38 + DAT_00715e50) = j;
          *(int *)(iVar8 + 0x34 + DAT_00715e50) = j;
          *(undefined4 *)(iVar8 + 0x3c + DAT_00715e50) = uVar4;
          local_34[2] = GetTickCount();
          uStack_28 = 0;
          _DAT_005d1b00 = (float)local_34[2];
          cVar2 = '\x01';
          local_49 = 1;
          k = param_2;
        }
        k = k + 1;
      } while (k < param_2);
    }
    if (DAT_006fb8e8 == 0) {
      j = j + 1;
      iVar7 = iVar7 + 0x994;
    }
    else {
      j = j + -1;
      iVar7 = iVar7 + -0x994;
    }
    iVar6 = CONCAT31((int3)((uint)DAT_006fb8e8 >> 8),cVar2);
    i = i + 1;
  } while (cVar2 == '\0');
  return CONCAT31((int3)((uint)iVar6 >> 8),local_49);
}


