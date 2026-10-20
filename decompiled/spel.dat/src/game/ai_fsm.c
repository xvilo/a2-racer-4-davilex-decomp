/* spel.dat — game/ai_fsm.cpp: 24 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0040c0a0 FUN_0040c0a0 ==== */

void FUN_0040c0a0(void)

{
  char cVar1;
  int iVar2;
  exception *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  exception::~exception(in_ECX);
  return;
}


/* ==== 0040c100 FUN_0040c100 ==== */

void FUN_0040c100(void)

{
  FUN_00558643(&DAT_005ce9e8,0x294,0x13,FUN_0040d3f0,&LAB_0040ddd0);
  return;
}


/* ==== 0040c120 FUN_0040c120 ==== */

void FUN_0040c120(void)

{
  FUN_005584e0(&LAB_0040c130);
  return;
}


/* ==== 0040c1f0 FUN_0040c1f0 ==== */

void FUN_0040c1f0(void)

{
  char cVar1;
  uint i;
  uint j;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_NO_STATE_005915c8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_NO_STATE_005915c8,~i - 1);
  local_4 = 0;
  FUN_0041e270(0xffffffff,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_RACING_005915d4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_RACING_005915d4,~i - 1);
  local_4 = 1;
  FUN_0041e270(0,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_INIT_BASHING_005915e4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_INIT_BASHING_005915e4,~i - 1);
  local_4 = 2;
  FUN_0041e270(1,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_BASHING_005915f8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_BASHING_005915f8,~i - 1);
  local_4 = 3;
  FUN_0041e270(2,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_CHASING_00591608;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_CHASING_00591608,~i - 1);
  local_4 = 4;
  FUN_0041e270(3,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_STOP_RACER_00591618;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_STOP_RACER_00591618,~i - 1);
  local_4 = 5;
  FUN_0041e270(4,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_INIT_ARREST_0059162c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_INIT_ARREST_0059162c,~i - 1);
  local_4 = 6;
  FUN_0041e270(5,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_ARREST_00591640;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_ARREST_00591640,~i - 1);
  local_4 = 7;
  FUN_0041e270(6,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_UNDER_ARREST_00591650;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_UNDER_ARREST_00591650,~i - 1);
  local_4 = 8;
  FUN_0041e270(7,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_KILL_COP_00591664;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_KILL_COP_00591664,~i - 1);
  local_4 = 9;
  FUN_0041e270(8,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_FINISHED_00591674;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_FINISHED_00591674,~i - 1);
  local_4 = 10;
  FUN_0041e270(9,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_BREAK_FREE_00591684;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_BREAK_FREE_00591684,~i - 1);
  local_4 = 0xb;
  FUN_0041e270(10,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_FAR_AHEAD_00591698;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_FAR_AHEAD_00591698,~i - 1);
  local_4 = 0xc;
  FUN_0041e270(0xb,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_FAR_BEHIND_005916a8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_FAR_BEHIND_005916a8,~i - 1);
  local_4 = 0xd;
  FUN_0041e270(0xc,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_FAR_BEHIND_CHEAT_005916bc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_FAR_BEHIND_CHEAT_005916bc,~i - 1);
  local_4 = 0xe;
  FUN_0041e270(0xd,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_WAIT_FOR_RACER_005916d4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_WAIT_FOR_RACER_005916d4,~i - 1);
  local_4 = 0xf;
  FUN_0041e270(0xe,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_GIVE_UP_005916ec;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_GIVE_UP_005916ec,~i - 1);
  local_4 = 0x10;
  FUN_0041e270(0xf,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_FOLLOW_GHOST_005916fc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_FOLLOW_GHOST_005916fc,~i - 1);
  local_4 = 0x11;
  FUN_0041e270(0x10,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_MAKE_SPACE_00591710;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_MAKE_SPACE_00591710,~i - 1);
  local_4 = 0x12;
  FUN_0041e270(0x11,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_HANDBRAKE_TURN_00591724;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_HANDBRAKE_TURN_00591724,~i - 1);
  local_4 = 0x13;
  FUN_0041e270(0x12,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_FOLLOW_PATH_0059173c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_FOLLOW_PATH_0059173c,~i - 1);
  local_4 = 0x14;
  FUN_0041e270(0x13,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_IRRITATING_00591750;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_IRRITATING_00591750,~i - 1);
  local_4 = 0x15;
  FUN_0041e270(0x14,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_AGGRESSIVE_00591764;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_AGGRESSIVE_00591764,~i - 1);
  local_4 = 0x16;
  FUN_0041e270(0x15,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_PUSHING_LEFT_00591778;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_PUSHING_LEFT_00591778,~i - 1);
  local_4 = 0x17;
  FUN_0041e270(0x16,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_PUSHING_RIGHT_0059178c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_PUSHING_RIGHT_0059178c,~i - 1);
  local_4 = 0x18;
  FUN_0041e270(0x17,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_FOLLOW_TACTIC_005917a0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_FOLLOW_TACTIC_005917a0,~i - 1);
  local_4 = 0x19;
  FUN_0041e270(0x18,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_ACT_LIKE_TRAFFIC_005917b4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(s_STATE_ACT_LIKE_TRAFFIC_005917b4,~i - 1);
  local_4 = 0x1a;
  FUN_0041e270(0x19,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_ROADBLOCK_005917cc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_ROADBLOCK_005917cc;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x1b;
  FUN_0041e270(0x1a,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_TOTAL_LOSS_005917dc;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_TOTAL_LOSS_005917dc;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x1c;
  FUN_0041e270(0x1b,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_PENALTY_BONUS_005917f0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_PENALTY_BONUS_005917f0;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x1d;
  FUN_0041e270(0x1c,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_PATROL_00591804;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_PATROL_00591804;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x1e;
  FUN_0041e270(0x1d,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_CHASE_00591814;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_CHASE_00591814;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x1f;
  FUN_0041e270(0x1e,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_ATTACK_00591820;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_ATTACK_00591820;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x20;
  FUN_0041e270(0x1f,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_PERFORM_ATTACK_00591830;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_PERFORM_ATTACK_00591830;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x21;
  FUN_0041e270(0x20,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_BASH_INACTIVE_TARGET_00591848;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_BASH_INACTIVE_TARGET_00591848;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x22;
  FUN_0041e270(0x21,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_SUPERCOP_BREAK_FREE_00591864;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_SUPERCOP_BREAK_FREE_00591864;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x23;
  FUN_0041e270(0x22,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_SUPERCOP_TOTAL_LOSS_00591880;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_SUPERCOP_TOTAL_LOSS_00591880;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x24;
  FUN_0041e270(0x23,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_SUPERCOP_ROLLED_OVER_0059189c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_SUPERCOP_ROLLED_OVER_0059189c;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x25;
  FUN_0041e270(0x24,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_SUPERCOP_INACTIVE_005918b8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_SUPERCOP_INACTIVE_005918b8;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x26;
  FUN_0041e270(0x25,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_BEHAVIOR_01_005918d0;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_BEHAVIOR_01_005918d0;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x27;
  FUN_0041e270(0x26,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_BEHAVIOR_02_005918e4;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_BEHAVIOR_02_005918e4;
    pcVar3 = local_28;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x28;
  FUN_0041e270(0x27,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  FUN_004028f0(0);
  i = 0xffffffff;
  pcVar2 = s_STATE_BEHAVIOR_03_005918f8;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  i = ~i - 1;
  cVar1 = FUN_00402a00(i,1);
  if (cVar1 != '\0') {
    pcVar2 = s_STATE_BEHAVIOR_03_005918f8;
    for (j = i >> 2; j != 0; j = j - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_28 = local_28 + 4;
    }
    for (j = i & 3; j != 0; j = j - 1) {
      *local_28 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(i);
  }
  local_4 = 0x29;
  FUN_0041e270(0x28,local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(1);
  i = 0xffffffff;
  local_18 = 0;
  pcVar2 = s_STATE_BEHAVIOR_04_0059190c;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_14 = 0;
  local_10 = 0;
  FUN_00402940(s_STATE_BEHAVIOR_04_0059190c,~i - 1);
  local_4 = 0x2a;
  FUN_0041e270(0x29,local_1c,0);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


/* ==== 0040d3a0 FUN_0040d3a0 ==== */

void FUN_0040d3a0(void)

{
  FUN_005584e0(&LAB_0040d3b0);
  return;
}


/* ==== 0040d3d0 FUN_0040d3d0 ==== */

void FUN_0040d3d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0xffffffff;
  in_ECX[1] = 0xffffffff;
  in_ECX[2] = 0;
  return;
}


/* ==== 0040d3f0 FUN_0040d3f0 ==== */

void FUN_0040d3f0(void)

{
  undefined4 *in_ECX;
  
  FUN_00402d30();
  *in_ECX = 0xffffffff;
  return;
}


/* ==== 0040d410 FUN_0040d410 ==== */

void FUN_0040d410(undefined4 param_1)

{
  int in_ECX;
  int i;
  undefined4 *puVar1;
  
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 0x4c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x6c) = 0xc1200000;
  *(undefined4 *)(in_ECX + 0x5c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x84) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x78) = 0x3f800000;
  puVar1 = (undefined4 *)(in_ECX + 0x24);
  for (i = 10; i != 0; i = i + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(in_ECX + 8) = param_1;
  *(undefined1 *)(in_ECX + 0x10) = 1;
  return;
}


/* ==== 0040d470 FUN_0040d470 ==== */

void FUN_0040d470(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)(in_ECX + 0x10) = 1;
  return;
}


/* ==== 0040d490 FUN_0040d490 ==== */

void FUN_0040d490(int param_1)

{
  int *piVar1;
  int iVar2;
  int i;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  i = 0;
  iVar3 = param_1 * 0x294;
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if ((param_1 < 0) || (5 < param_1)) {
    if (((&DAT_005ce9ec)[param_1 * 0xa5] == 9) || ((&DAT_005ce9ec)[param_1 * 0xa5] == 0x19)) {
      FUN_0049eb50(*(undefined4 *)(iVar2 * 0xf0 + 0x30 + DAT_00715e50));
      FUN_0049e570();
    }
    else {
      FUN_00450b30(iVar2,1);
    }
  }
  else {
    FUN_00450b30(iVar2,1);
  }
  if ((param_1 < 0) || (5 < param_1)) {
    if (DAT_006fb8c8 != 0) {
      FUN_004239e0();
    }
  }
  else {
    fVar5 = (float10)FUN_004a6800();
    *(float *)(&DAT_005cea60 + iVar3) = (float)(fVar5 + (float10)*(float *)(&DAT_005cea60 + iVar3));
  }
  piVar1 = (int *)(&DAT_005ceab4)[param_1 * 0xa5];
  piVar4 = piVar1;
  if (piVar1 == (int *)0x0) {
    FUN_004c4150(s__s__d____Pointer_to_state_transi_00591944,
                 s_C__Work_A2IV_Game_prog_ai_fsm_cp_00591920,0x13d);
  }
  while ((*piVar4 != (&DAT_005ce9ec)[param_1 * 0xa5] ||
         (iVar2 = (*(code *)piVar4[3])(param_1), piVar4[2] != iVar2))) {
    i = i + 1;
    piVar4 = piVar4 + 4;
    if (0x3f < i) {
LAB_0040d5a6:
      fVar5 = (float10)FUN_004a6800();
      *(float *)(&DAT_005ce9f4 + iVar3) =
           (float)(fVar5 + (float10)*(float *)(&DAT_005ce9f4 + iVar3));
      return;
    }
  }
  iVar2 = piVar1[i * 4 + 1];
  if (iVar2 == 999) {
    iVar2 = *(int *)(&DAT_005ce9f0 + iVar3);
  }
  FUN_0040d470(iVar2);
  goto LAB_0040d5a6;
}


/* ==== 0040d5d0 FUN_0040d5d0 ==== */

undefined4
FUN_0040d5d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    FUN_004c4150(s__s__d____Pointer_to_state_transi_0059199c,
                 s_C__Work_A2IV_Game_prog_ai_fsm_cp_00591978,0x1de);
  }
  if ((param_2 < 0) || (0x3f < param_2)) {
    FUN_004c4150(s__s__d____Reached_maximum_number_o_005919f4,
                 s_C__Work_A2IV_Game_prog_ai_fsm_cp_005919d0,0x1e5,param_2);
  }
  puVar1 = (undefined4 *)(param_2 * 0x10 + param_1);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  puVar1[3] = param_6;
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}


/* ==== 0040d6f0 FUN_0040d6f0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040d6f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int i;
  int j;
  bool bVar7;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056989a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(0);
  local_4 = 0;
  FUN_00406eb0();
  if ((DAT_006fb95c == 0) || ((iVar2 = FUN_00407030(param_1), iVar2 == 2 && (DAT_006fb958 != 2)))) {
    local_4 = 0xffffffff;
    FUN_004028f0(1);
  }
  else {
    iVar2 = DAT_005d1b38;
    if ((param_2 == DAT_006fba58) && (iVar2 = DAT_005d1b34, DAT_006fb8d4 == 0)) {
      iVar2 = DAT_005d1b30;
    }
    iVar3 = FUN_0040dad0(param_2);
    iVar5 = DAT_006fba58;
    i = 6;
    piVar4 = &DAT_005cf960;
    do {
      if (*piVar4 == -1) break;
      piVar4 = piVar4 + 0xa5;
      i = i + 1;
    } while ((int)piVar4 < 0x5d15bd);
    if ((&DAT_005ce9e8)[i * 0xa5] == -1) {
      j = 0;
      piVar4 = &DAT_005cf964;
      do {
        if ((piVar4[0x12] == param_2) && (*piVar4 != 0x19)) {
          j = j + 1;
        }
        piVar4 = piVar4 + 0xa5;
      } while ((int)piVar4 < 0x5d15c1);
      if (j < iVar2) {
        iVar2 = i * 0x294;
        bVar7 = param_2 == DAT_006fba58;
        (&DAT_005ce9e8)[i * 0xa5] = param_1;
        (&DAT_005ce9ec)[i * 0xa5] = 0x18;
        *(int *)(&DAT_005cea34 + iVar2) = param_2;
        if (bVar7) {
          FUN_0041be70(1,iVar5,0xffffffff);
        }
        if (iVar3 == -1) {
          _DAT_006fbab8 = 0x3f800000;
        }
        else {
          *(undefined4 *)(&DAT_005cea60 + iVar3 * 0x294) = 0x3f800000;
        }
        iVar3 = param_1 * 0xf0;
        *(uint *)(iVar3 + 0x1c + DAT_00715e50) = *(uint *)(iVar3 + 0x1c + DAT_00715e50) | 3;
        *(undefined4 *)(iVar3 + 0x50 + DAT_00715e50) =
             *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x50 + DAT_00715e50);
        FUN_00423990(param_1,1);
        iVar5 = FUN_00414070(param_1);
        if (-1 < iVar5) {
          iVar5 = FUN_00414070(param_1);
          (&DAT_005d1bb8)[iVar5 * 0xe] = (&DAT_005d1bb8)[iVar5 * 0xe] | 0x4000;
        }
        *(code **)(iVar3 + 0x6c + DAT_00715e50) = FUN_00407300;
        *(undefined4 *)(iVar3 + 0x60 + DAT_00715e50) = 0;
        *(undefined1 **)(iVar3 + 0x70 + DAT_00715e50) = &LAB_0042d820;
        uVar6 = FUN_00407730(param_1);
        *(undefined4 *)(&DAT_005cea04 + iVar2) = uVar6;
        *(undefined4 *)(&DAT_005ce9fc + iVar2) = 0;
        *(undefined4 *)(&DAT_005cea00 + iVar2) = 0;
        *(undefined4 *)(&DAT_005cea54 + iVar2) = 0xc0400000;
        uVar6 = FUN_00407030(param_1);
        uVar6 = FUN_00406e70(uVar6);
        FUN_00403140(uVar6);
        if (local_18 != 0) {
          cVar1 = *(char *)(local_18 + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)(local_18 + -1) = cVar1 + -1;
            ExceptionList = local_c;
            return 1;
          }
          FUN_0054b339(local_18 + -1);
        }
        ExceptionList = local_c;
        return 1;
      }
    }
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_18 + -1);
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* ==== 0040d9d0 FUN_0040d9d0 ==== */

undefined4 FUN_0040d9d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int i;
  
  uVar2 = 0;
  i = 6;
  do {
    uVar1 = DAT_006fba58;
    if ((&DAT_005ce9e8)[i * 0xa5] == -1) {
      (&DAT_005ce9e8)[i * 0xa5] = param_1;
      (&DAT_005ce9ec)[i * 0xa5] = 0x13;
      *(undefined4 *)(&DAT_005cea34 + i * 0x294) = uVar1;
      (&DAT_005cea44)[i * 0xa5] = param_2;
      *(undefined4 *)(&DAT_005cea68 + i * 0x294) = 1;
      FUN_00406eb0();
      uVar2 = FUN_00407030(param_1);
      uVar2 = FUN_00406e70(uVar2);
      FUN_00403140(uVar2);
      i = 0x11;
      uVar2 = 1;
    }
    i = i + 1;
  } while (i < 0x12);
  return uVar2;
}


/* ==== 0040da60 FUN_0040da60 ==== */

void FUN_0040da60(int param_1)

{
  int iVar1;
  int i;
  
  if ((-1 < param_1) && (param_1 < 6)) {
    FUN_004c4150(s_Illegal_cop__this_is_a_racer___s_00591aa4,
                 s_C__Work_A2IV_Game_prog_ai_fsm_cp_00591a80,0x35d);
    return;
  }
  i = 0;
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  do {
    if ((&DAT_005d33ec)[i] == iVar1) {
      (&DAT_005d33ec)[i] = 0xffffffff;
      i = 0x14;
    }
    i = i + 1;
  } while (i < 0x14);
  (&DAT_005ce9e8)[param_1 * 0xa5] = 0xffffffff;
  FUN_0040d410(0xffffffff);
  return;
}


/* ==== 0040dad0 FUN_0040dad0 ==== */

int FUN_0040dad0(int param_1)

{
  int i;
  int *piVar1;
  
  if (-1 < param_1) {
    i = 0;
    piVar1 = &DAT_005ce9e8;
    do {
      if (*piVar1 == param_1) {
        return i;
      }
      piVar1 = piVar1 + 0xa5;
      i = i + 1;
    } while ((int)piVar1 < 0x5d1ae4);
  }
  return -1;
}


/* ==== 0040db00 FUN_0040db00 ==== */

undefined4 FUN_0040db00(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_005ce9e8;
  while ((piVar1[0x17] != param_1 || (*piVar1 == -1))) {
    piVar1 = piVar1 + 0xa5;
    if (0x5d1ae3 < (int)piVar1) {
      return 0;
    }
  }
  return 1;
}


/* ==== 0040dbb0 FUN_0040dbb0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040dbb0(int param_1)

{
  char cVar1;
  int *piVar2;
  uint i;
  uint j;
  int k;
  char *pcVar3;
  char *pcVar4;
  
  if ((DAT_005ce1e2 & 1) == 0) {
    DAT_005ce1e2 = DAT_005ce1e2 | 1;
    DAT_005d1ae8 = (undefined1)param_1;
    i = 0xffffffff;
    pcVar3 = s_____00591b14;
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    i = ~i - 1;
    DAT_005d1aec = (char *)0x0;
    _DAT_005d1af0 = 0;
    _DAT_005d1af4 = 0;
    cVar1 = FUN_00402a00(i,1);
    if (cVar1 != '\0') {
      pcVar3 = s_____00591b14;
      pcVar4 = DAT_005d1aec;
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
      _DAT_005d1af0 = i;
      DAT_005d1aec[i] = '\0';
    }
    FUN_005584e0(&LAB_0040dca0);
  }
  k = 0;
  piVar2 = &DAT_005cd9d8;
  do {
    if (*piVar2 == param_1) {
      return (undefined *)(k * 0x18 + 0x5cd9dc);
    }
    piVar2 = piVar2 + 6;
    k = k + 1;
  } while (piVar2 < &DAT_005cdde0);
  FUN_004c4150(s__s__d____State_missing_in_state_t_00591b3c,
               s_C__Work_A2IV_Game_prog_ai_fsm_cp_00591b18,0x426,param_1);
  return &DAT_005d1ae8;
}


/* ==== 0040dcf0 FUN_0040dcf0 ==== */

char * FUN_0040dcf0(int param_1)

{
  if (param_1 == 0) {
    return s_Racer_00591b68;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return s_____00591b80;
    }
    return s_Supercop_00591b74;
  }
  return (char *)&PTR_DAT_00591b70;
}


/* ==== 0040dd60 FUN_0040dd60 ==== */

void FUN_0040dd60(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0040dd70 FUN_0040dd70 ==== */

void FUN_0040dd70(void)

{
  FUN_005584e0(&LAB_0040dd80);
  return;
}


/* ==== 0040dda0 FUN_0040dda0 ==== */

void FUN_0040dda0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0040ddb0 FUN_0040ddb0 ==== */

void FUN_0040ddb0(void)

{
  FUN_005584e0(&LAB_0040ddc0);
  return;
}


/* ==== 0040ddf0 FUN_0040ddf0 ==== */

void FUN_0040ddf0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = param_2;
  uVar2 = (&DAT_005ce9e8)[param_2 * 0xa5];
  iVar4 = FUN_004188c0(uVar2);
  puVar1 = (undefined4 *)(iVar4 * 0x50 + 8 + DAT_00715eb8);
  uVar5 = FUN_004031f0(uVar2,*puVar1,puVar1[1],puVar1[2]);
  param_2 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if (500 < param_2) {
    param_2 = 500;
  }
  fVar6 = (float10)FUN_00403440(iVar3,(float)param_2);
  if ((float10)3.4028235e+38 <= fVar6) {
    fVar6 = (float10)3.4028235e+38;
  }
  *(float *)(param_1 + 0x24) = (float)fVar6;
  *(float *)(param_3 + 0x18) = (float)fVar6;
  return;
}


/* ==== 0040dea0 FUN_0040dea0 ==== */

void FUN_0040dea0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004166b0();
  local_18 = *param_3;
  local_8 = 0x461c4000;
  local_14 = param_3[1];
  local_10 = param_3[2];
  local_4 = 0xbf000000;
  FUN_0040ddf0(param_1,param_2,local_20);
  FUN_0040dfc0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),1,local_20);
  return;
}


