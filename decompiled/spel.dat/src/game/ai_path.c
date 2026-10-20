/* spel.dat — game/ai_path.cpp: 25 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004175a0 FUN_004175a0 ==== */

void __thiscall FUN_004175a0(void *this,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *operator_new_result;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int i;
  uint uVar6;
  int iVar7;
  
  puVar4 = param_2;
  puVar3 = *(undefined4 **)((int)this + 8);
  if (param_3 <= (uint)((*(int *)((int)this + 0xc) - (int)puVar3) / 0xc)) {
    if (param_3 <= (uint)(((int)puVar3 - (int)param_2) / 0xc)) {
      if (param_3 != 0) {
        puVar4 = puVar3;
        for (puVar5 = puVar3 + param_3 * -3; puVar5 != puVar3; puVar5 = puVar5 + 3) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar5;
            puVar4[1] = puVar5[1];
            puVar4[2] = puVar5[2];
          }
          puVar4 = puVar4 + 3;
        }
        puVar3 = *(undefined4 **)((int)this + 8);
        puVar4 = *(undefined4 **)((int)this + 8) + param_3 * -3;
        while (param_2 != puVar4) {
          puVar3[-3] = puVar4[-3];
          puVar3[-2] = puVar4[-2];
          puVar3[-1] = puVar4[-1];
          puVar3 = puVar3 + -3;
          puVar4 = puVar4 + -3;
        }
        puVar3 = param_2 + param_3 * 3;
        for (; param_2 != puVar3; param_2 = param_2 + 3) {
          *param_2 = *param_4;
          param_2[1] = param_4[1];
          param_2[2] = param_4[2];
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 0xc;
      }
      return;
    }
    puVar4 = param_2 + param_3 * 3;
    if (param_2 != puVar3) {
      puVar5 = puVar4 + param_3 * -3;
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar5;
          puVar4[1] = puVar5[1];
          puVar4[2] = puVar5[2];
        }
        puVar5 = puVar5 + 3;
        puVar4 = puVar4 + 3;
      } while (puVar5 != puVar3);
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    for (i = param_3 - ((int)puVar3 - (int)param_2) / 0xc; i != 0; i = i + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
      }
      puVar3 = puVar3 + 3;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    for (; param_2 != puVar3; param_2 = param_2 + 3) {
      *param_2 = *param_4;
      param_2[1] = param_4[1];
      param_2[2] = param_4[2];
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_3 * 0xc;
    return;
  }
  i = *(int *)((int)this + 4);
  if ((i == 0) || (uVar6 = ((int)puVar3 - i) / 0xc, uVar6 <= param_3)) {
    uVar6 = param_3;
  }
  if (i == 0) {
    i = 0;
  }
  else {
    i = ((int)puVar3 - i) / 0xc;
  }
  i = i + uVar6;
  iVar2 = i;
  if (i < 0) {
    iVar2 = 0;
  }
  operator_new_result = operator_new(iVar2 * 0xc);
  puVar5 = operator_new_result;
  for (puVar3 = *(undefined4 **)((int)this + 4); puVar3 != param_2; puVar3 = puVar3 + 3) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
    }
    puVar5 = puVar5 + 3;
  }
  if (param_3 != 0) {
    param_2 = (undefined4 *)param_3;
    puVar3 = puVar5;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
      }
      puVar3 = puVar3 + 3;
      param_2 = (undefined4 *)((int)param_2 - 1);
    } while (param_2 != (undefined4 *)0x0);
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar3 = puVar5 + param_3 * 3;
  if (puVar4 != puVar1) {
    puVar4 = (undefined4 *)((int)puVar3 + (param_3 * -0xc - (int)puVar5) + (int)puVar4);
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
      }
      puVar4 = puVar4 + 3;
      puVar3 = puVar3 + 3;
    } while (puVar4 != puVar1);
  }
  iVar2 = *(int *)((int)this + 8);
  for (iVar7 = *(int *)((int)this + 4); iVar7 != iVar2; iVar7 = iVar7 + 0xc) {
    FUN_0041e410();
  }
  FUN_0054b339(*(undefined4 *)((int)this + 4));
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = operator_new_result + i * 3;
  if (iVar2 != 0) {
    *(undefined4 **)((int)this + 4) = operator_new_result;
    *(undefined4 **)((int)this + 8) =
         operator_new_result + (param_3 + (*(int *)((int)this + 8) - iVar2) / 0xc) * 3;
    return;
  }
  *(undefined4 **)((int)this + 4) = operator_new_result;
  *(undefined4 **)((int)this + 8) = operator_new_result + param_3 * 3;
  return;
}


/* ==== 00417900 FUN_00417900 ==== */

void FUN_00417900(void)

{
  FUN_00417930(&DAT_005d2ac8);
  return;
}


/* ==== 00417910 FUN_00417910 ==== */

void FUN_00417910(void)

{
  FUN_005584e0(&LAB_00417920);
  return;
}


/* ==== 00417930 FUN_00417930 ==== */

void __thiscall FUN_00417930(void *this)

{
  *(undefined ***)this = &PTR_FUN_00576480;
  return;
}


/* ==== 00417940 FUN_00417940 ==== */

void __thiscall FUN_00417940(void *this)

{
  *(undefined ***)this = &PTR_FUN_00576480;
  return;
}


/* ==== 00417980 FUN_00417980 ==== */

undefined4 * __thiscall
FUN_00417980(void *this,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined1 *this_val;
  int i;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_34 [6];
  undefined **local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00569b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004166e0(local_34);
  local_4 = 0;
  local_14 = 0;
  FUN_0040dea0((int)this + 0x70,local_34,param_3,param_4,param_5);
  FUN_0041db90((void *)((int)this + 4),local_34,param_3,param_4,param_5);
  puVar1 = local_34;
  puVar2 = param_2;
  for (i = 6; i != 0; i = i + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[6] = &PTR_LAB_00576460;
  this_val = operator_new(0x10);
  if (this_val == (undefined1 *)0x0) {
    this_val = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(this_val + 4) = 0;
    *this_val = (undefined1)param_3;
    *(undefined4 *)(this_val + 8) = 0;
    *(undefined4 *)(this_val + 0xc) = 0;
  }
  param_2[7] = this_val;
  FUN_00417ba0(this_val,local_18);
  param_2[8] = local_14;
  param_2[9] = local_10;
  local_1c = &PTR_LAB_00576460;
  if (local_18 != 0) {
    FUN_0054b339(*(undefined4 *)(local_18 + 4));
    *(undefined4 *)(local_18 + 4) = 0;
    *(undefined4 *)(local_18 + 0xc) = 0;
    *(undefined4 *)(local_18 + 8) = 0;
    FUN_0054b339(local_18);
  }
  ExceptionList = local_c;
  return param_2;
}


/* ==== 00417ad0 FUN_00417ad0 ==== */

void FUN_00417ad0(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00417ae0 FUN_00417ae0 ==== */

void FUN_00417ae0(void)

{
  FUN_005584e0(&LAB_00417af0);
  return;
}


/* ==== 00417b10 FUN_00417b10 ==== */

void FUN_00417b10(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00417b20 FUN_00417b20 ==== */

void FUN_00417b20(void)

{
  FUN_005584e0(&LAB_00417b30);
  return;
}


/* ==== 00417b40 FUN_00417b40 ==== */

void * __thiscall FUN_00417b40(void *this,byte param_2)

{
  FUN_00417940();
  if ((param_2 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


/* ==== 00417b60 FUN_00417b60 ==== */

void __thiscall FUN_00417b60(void *this)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_00576460;
  if (iVar1 != 0) {
    FUN_0054b339(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_0054b339(iVar1);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  return;
}


/* ==== 00417ba0 FUN_00417ba0 ==== */

void * __thiscall FUN_00417ba0(void *this,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int i;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (this != param_2) {
    puVar1 = *(undefined4 **)((int)param_2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)((int)param_2 + 8) - (int)puVar1 >> 5;
    }
    puVar7 = *(undefined4 **)((int)this + 4);
    if (puVar7 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)((int)this + 8) - (int)puVar7 >> 5;
    }
    if (uVar5 <= uVar4) {
      puVar3 = *(undefined4 **)((int)param_2 + 8);
      while (puVar1 != puVar3) {
        puVar2 = puVar1 + 8;
        puVar6 = puVar7 + 8;
        puVar8 = puVar1;
        puVar9 = puVar7;
        for (i = 8; puVar1 = puVar2, puVar7 = puVar6, i != 0; i = i + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      if (*(int *)((int)param_2 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return this;
      }
      *(int *)((int)this + 8) =
           (*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 5) * 0x20 +
           *(int *)((int)this + 4);
      return this;
    }
    if (puVar1 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)((int)param_2 + 8) - (int)puVar1 >> 5;
    }
    if (puVar7 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)((int)this + 0xc) - (int)puVar7 >> 5;
    }
    if (uVar5 <= uVar4) {
      if (puVar7 == (undefined4 *)0x0) {
        i = 0;
      }
      else {
        i = *(int *)((int)this + 8) - (int)puVar7 >> 5;
      }
      puVar3 = puVar1 + i * 8;
      while (puVar1 != puVar3) {
        puVar2 = puVar1 + 8;
        puVar6 = puVar7 + 8;
        puVar8 = puVar1;
        puVar9 = puVar7;
        for (i = 8; puVar1 = puVar2, puVar7 = puVar6, i != 0; i = i + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      puVar1 = *(undefined4 **)((int)param_2 + 8);
      puVar7 = *(undefined4 **)((int)this + 8);
      for (; puVar3 != puVar1; puVar3 = puVar3 + 8) {
        if (puVar7 != (undefined4 *)0x0) {
          puVar8 = puVar3;
          puVar9 = puVar7;
          for (i = 8; i != 0; i = i + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        puVar7 = puVar7 + 8;
      }
      if (*(int *)((int)param_2 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return this;
      }
      *(int *)((int)this + 8) =
           (*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 5) * 0x20 +
           *(int *)((int)this + 4);
      return this;
    }
    FUN_0054b339(puVar7);
    if (*(int *)((int)param_2 + 4) == 0) {
      i = 0;
    }
    else {
      i = *(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 5;
    }
    if (i < 0) {
      i = 0;
    }
    puVar3 = operator_new(i << 5);
    *(undefined4 **)((int)this + 4) = puVar3;
    puVar1 = *(undefined4 **)((int)param_2 + 8);
    for (puVar7 = *(undefined4 **)((int)param_2 + 4); puVar7 != puVar1; puVar7 = puVar7 + 8) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar8 = puVar7;
        puVar9 = puVar3;
        for (i = 8; i != 0; i = i + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      puVar3 = puVar3 + 8;
    }
    *(undefined4 **)((int)this + 8) = puVar3;
    *(undefined4 **)((int)this + 0xc) = puVar3;
  }
  return this;
}


/* ==== 00417dd0 FUN_00417dd0 ==== */

void __thiscall FUN_00417dd0(void *this)

{
  *(undefined1 *)this = 1;
  *(undefined4 *)((int)this + 4) = 0x7f7fffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return;
}


/* ==== 00417df0 FUN_00417df0 ==== */

void __thiscall FUN_00417df0(void *this)

{
  *(undefined1 *)this = 1;
  *(undefined4 *)((int)this + 4) = 0x7f7fffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return;
}


/* ==== 00417e20 FUN_00417e20 ==== */

void __thiscall FUN_00417e20(void *this,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0xffffffff;
  if (param_2 < DAT_005d2ab0) {
    *(undefined4 *)((int)this + 4) =
         *(undefined4 *)((&DAT_005ce9e8)[param_2 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50);
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    return;
  }
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50);
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 00417ea0 FUN_00417ea0 ==== */

void FUN_00417ea0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00715e50;
  iVar2 = param_1 * 0x294;
  if (*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50) !=
      *(int *)(&DAT_005cea6c + iVar2)) {
    *(int *)(&DAT_005cea70 + iVar2) = *(int *)(&DAT_005cea6c + iVar2);
    *(undefined4 *)(&DAT_005cea6c + iVar2) =
         *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + iVar1);
    if (0.0 <= *(float *)(&DAT_005cea54 + iVar2)) {
      *(undefined4 *)(&DAT_005cea54 + iVar2) = 0;
    }
    if ((-1 < param_1) && (param_1 < 6)) {
      iVar1 = FUN_0040e2f0(*(undefined4 *)(&DAT_005cea6c + iVar2),
                           *(undefined4 *)(&DAT_005cea70 + iVar2));
      if (iVar1 == 1) {
        iVar1 = FUN_004a7200(*(undefined4 *)(&DAT_005cea70 + iVar2),
                             *(undefined4 *)(&DAT_005cea6c + iVar2));
        (&DAT_005cea38)[param_1 * 0xa5] = (&DAT_005cea38)[param_1 * 0xa5] + iVar1;
        return;
      }
      iVar1 = FUN_004a7200(*(undefined4 *)(&DAT_005cea70 + iVar2),
                           *(undefined4 *)(&DAT_005cea6c + iVar2));
      (&DAT_005cea38)[param_1 * 0xa5] = (&DAT_005cea38)[param_1 * 0xa5] - iVar1;
    }
  }
  return;
}


/* ==== 00417f90 FUN_00417f90 ==== */

int FUN_00417f90(int param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int i;
  
  if (param_2 < 0) {
    FUN_004c4150(s___s___d_A_illegal_waypoint___d__w_00593574,
                 s_C__Work_A2IV_Game_prog_ai_path_c_00593550,0x163,param_2);
  }
  iVar2 = FUN_00423290(param_2,param_3);
  if (-1 < iVar2) {
    if (param_4 == '\0') {
      return iVar2;
    }
    iVar1 = *(int *)(iVar2 * 0x50 + 0x24 + DAT_00715eb8);
    if (iVar1 == 0) {
      return iVar2;
    }
    i = 0;
    if (iVar1 < 1) {
      return iVar2;
    }
    while (iVar3 = FUN_004ab0d0(iVar2 * 0x50 + DAT_00715eb8,i),
          *(float *)(param_1 * 0xf0 + 0xc4 + DAT_00715e50) + 5.0 <=
          *(float *)(iVar3 * 0xf0 + 0xc4 + DAT_00715e50)) {
      i = i + 1;
      if (iVar1 <= i) {
        return iVar2;
      }
    }
  }
  return -1;
}


/* ==== 00418050 FUN_00418050 ==== */

int FUN_00418050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int i;
  
  if (*(int *)(param_2 * 0x50 + 4 + DAT_00715eb8) == 2) {
    param_1 = param_1 * 0xf0;
    iVar2 = *(int *)(param_1 + 0x34 + DAT_00715e50);
    if (*(int *)(param_1 + 0x50 + DAT_00715e50) == 0) {
      iVar2 = *(int *)(DAT_00715f00 + 0xf4 + iVar2 * 0x994);
    }
    else {
      iVar2 = *(int *)(DAT_00715f00 + 0xf8 + iVar2 * 0x994);
    }
    i = 0;
    if (0 < iVar2) {
      do {
        iVar1 = FUN_004a6d70(*(undefined4 *)(param_1 + 0x34 + DAT_00715e50),i,
                             *(undefined4 *)(param_1 + 0x50 + DAT_00715e50));
        if (*(int *)(iVar1 * 0x50 + 4 + DAT_00715eb8) != 2) {
          return iVar1;
        }
        i = i + 1;
      } while (i < iVar2);
    }
  }
  return param_2;
}


/* ==== 00418100 FUN_00418100 ==== */

void FUN_00418100(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *this_val;
  int i;
  int j;
  int k;
  
  iVar2 = param_1;
  i = 0;
  j = 0;
  k = 0;
  iVar7 = param_1 * 0xf0;
  uVar3 = FUN_004aac20(param_1,*(undefined4 *)(iVar7 + 0x50 + DAT_00715e50));
  iVar4 = FUN_00418050(param_1,uVar3);
  iVar1 = *(int *)(DAT_00715eb8 + 0x24 + iVar4 * 0x50);
  param_1 = 0;
  if (0 < iVar1) {
    do {
      iVar5 = FUN_004ab0d0(DAT_00715eb8 + iVar4 * 0x50,param_1);
      if (iVar5 != iVar2) {
        iVar6 = DAT_0073b0d0 + *(int *)(iVar5 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
        iVar6 = FUN_00403ea0(iVar2,*(undefined4 *)(iVar6 + 0x50),*(undefined4 *)(iVar6 + 0x54),
                             *(undefined4 *)(iVar6 + 0x58));
        if ((iVar6 < 0x200) || (0xe00 < iVar6)) {
          if (*(float *)(iVar5 * 0xf0 + 0xc4 + DAT_00715e50) <
              *(float *)(iVar7 + 0xc4 + DAT_00715e50)) {
            i = i + 1;
          }
        }
        else if ((iVar6 < 0x180) || (0x5ff < iVar6)) {
          if ((0xa00 < iVar6) && (iVar6 < 0xe81)) {
            j = j + 1;
          }
        }
        else {
          k = k + 1;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar1);
  }
  this_val = &DAT_005d2b70;
  do {
    FUN_00417df0(this_val);
    this_val = this_val + 0xc;
  } while ((int)this_val < 0x5d2bac);
  if (i != 0) {
    DAT_005d2b88 = 0;
  }
  if (j != 0) {
    DAT_005d2b70 = 0;
    DAT_005d2b7c = 0;
  }
  if (k != 0) {
    DAT_005d2b94 = 0;
    DAT_005d2ba0 = 0;
  }
  return;
}


/* ==== 00418280 FUN_00418280 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418280(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  
  uVar1 = FUN_004aac20(param_1,*(undefined4 *)(param_1 * 0xf0 + 0x50 + DAT_00715e50));
  uVar1 = FUN_00418050(param_1,uVar1);
  iVar2 = FUN_00423290(uVar1,0);
  if (iVar2 == -1) {
    DAT_005d2b70 = 0;
LAB_0041837a:
    DAT_005d2b7c = '\0';
  }
  else {
    fVar5 = (float10)FUN_00422c00(param_1,iVar2);
    if (fVar5 < (float10)DAT_005d2b74) {
      DAT_005d2b74 = (float)fVar5;
      DAT_005d2b80 = (float)fVar5;
    }
    iVar3 = FUN_00423290(iVar2,0);
    if (iVar3 == -1) {
      DAT_005d2b70 = 0;
    }
    else {
      fVar5 = (float10)FUN_00422c00(param_1,iVar3);
      DAT_005d2b78 = iVar3;
      if (fVar5 < (float10)DAT_005d2b74) {
        DAT_005d2b74 = (float)fVar5;
      }
    }
    iVar2 = FUN_00423290(iVar2,1);
    if (iVar2 == -1) goto LAB_0041837a;
    fVar5 = (float10)FUN_00422c00(param_1,iVar2);
    DAT_005d2b84 = iVar2;
    if (fVar5 < (float10)DAT_005d2b80) {
      DAT_005d2b80 = (float)fVar5;
    }
  }
  iVar2 = FUN_00423290(uVar1,2);
  if (iVar2 == -1) {
    DAT_005d2b94 = '\0';
  }
  else {
    fVar5 = (float10)FUN_00422c00(param_1,iVar2);
    if (fVar5 < (float10)_DAT_005d2b98) {
      _DAT_005d2b98 = (float)fVar5;
      _DAT_005d2ba4 = (float)fVar5;
    }
    iVar3 = FUN_00423290(iVar2,1);
    if (iVar3 == -1) {
      DAT_005d2b94 = '\0';
    }
    else {
      fVar5 = (float10)FUN_00422c00(param_1,iVar3);
      _DAT_005d2b9c = iVar3;
      if (fVar5 < (float10)_DAT_005d2b98) {
        _DAT_005d2b98 = (float)fVar5;
      }
    }
    iVar2 = FUN_00423290(iVar2,2);
    if (iVar2 != -1) {
      fVar5 = (float10)FUN_00422c00(param_1,iVar2);
      _DAT_005d2ba8 = iVar2;
      if (fVar5 < (float10)_DAT_005d2ba4) {
        _DAT_005d2ba4 = (float)fVar5;
      }
      goto LAB_00418457;
    }
  }
  DAT_005d2ba0 = 0;
LAB_00418457:
  iVar2 = FUN_00423290(uVar1,1);
  if (iVar2 == -1) {
    DAT_005d2b88 = 0;
  }
  else {
    fVar5 = (float10)FUN_00422c00(param_1,iVar2);
    if (fVar5 < (float10)_DAT_005d2b8c) {
      _DAT_005d2b8c = (float)fVar5;
    }
    iVar3 = FUN_00423290(iVar2,1);
    if (iVar3 == -1) {
      DAT_005d2b88 = 0;
    }
    else {
      fVar5 = (float10)FUN_00422c00(param_1,iVar3);
      _DAT_005d2b90 = iVar3;
      if (fVar5 < (float10)_DAT_005d2b8c) {
        _DAT_005d2b8c = (float)fVar5;
      }
    }
    if ((DAT_005d2b7c == '\0') && (iVar3 = FUN_00423290(iVar2,0), iVar3 != -1)) {
      fVar5 = (float10)FUN_00422c00(param_1,iVar3);
      if (fVar5 < (float10)DAT_005d2b80) {
        DAT_005d2b80 = (float)fVar5;
      }
      DAT_005d2b7c = '\x01';
      DAT_005d2b84 = iVar3;
    }
    if ((DAT_005d2b94 == '\0') && (iVar2 = FUN_00423290(iVar2,2), iVar2 != -1)) {
      fVar5 = (float10)FUN_00422c00(param_1,iVar2);
      _DAT_005d2b9c = iVar2;
      if ((float10)_DAT_005d2b98 <= fVar5) {
        DAT_005d2b94 = '\x01';
      }
      else {
        _DAT_005d2b98 = (float)fVar5;
        DAT_005d2b94 = '\x01';
      }
    }
  }
  pfVar4 = &DAT_005d2b74;
  do {
    if ((pfVar4[1] != -NAN) && (fVar5 = (float10)FUN_00423560(), fVar5 < (float10)*pfVar4)) {
      *pfVar4 = (float)fVar5;
    }
    pfVar4 = pfVar4 + 3;
  } while ((int)pfVar4 < 0x5d2bb0);
  return;
}


/* ==== 004185c0 FUN_004185c0 ==== */

void FUN_004185c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1 * 0xf0;
  uVar1 = FUN_004aac20(param_1,*(undefined4 *)(iVar4 + 0x50 + DAT_00715e50));
  uVar1 = FUN_00418050(param_1,uVar1);
  DAT_005d2b70 = 1;
  DAT_005d2b74 = 3.4028235e+38;
  iVar2 = FUN_00423290(uVar1,1);
  if (((iVar2 == -1) && (iVar2 = FUN_00423290(uVar1,0), iVar2 == -1)) &&
     (iVar2 = FUN_00423290(uVar1,2), iVar2 == -1)) {
    FUN_004c4150(s__s__d_Waypoint__d_near_chunk__d_h_005935d4,
                 s_C__Work_A2IV_Game_prog_ai_path_c_005935b0,0x336,uVar1,
                 *(undefined4 *)(iVar4 + 0x34 + DAT_00715e50));
  }
  fVar5 = (float10)FUN_00422c00(param_1,iVar2);
  if (fVar5 < (float10)DAT_005d2b74) {
    DAT_005d2b74 = (float)fVar5;
  }
  iVar3 = FUN_00423290(iVar2,1);
  if (((iVar3 == -1) && (iVar3 = FUN_00423290(iVar2,0), iVar3 == -1)) &&
     (iVar3 = FUN_00423290(iVar2,2), iVar3 == -1)) {
    FUN_004c4150(s__s__d_Waypoint__d_near_chunk__d_h_0059362c,
                 s_C__Work_A2IV_Game_prog_ai_path_c_00593608,0x34d,iVar2,
                 *(undefined4 *)(iVar4 + 0x34 + DAT_00715e50));
  }
  fVar5 = (float10)FUN_00422c00(param_1,iVar3);
  if ((float10)DAT_005d2b74 <= fVar5) {
    DAT_005d2b78 = iVar3;
    return;
  }
  DAT_005d2b74 = (float)fVar5;
  DAT_005d2b78 = iVar3;
  return;
}


/* ==== 00418710 FUN_00418710 ==== */

int FUN_00418710(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int i;
  int *piVar8;
  int local_3c [15];
  
  iVar6 = DAT_00715eb8;
  local_3c[0] = 2;
  local_3c[6] = 2;
  local_3c[0xb] = 2;
  local_3c[3] = 3;
  local_3c[8] = 3;
  local_3c[10] = 3;
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar4 = *(int *)(&DAT_005cea48 + param_1 * 0x294);
  local_3c[4] = 4;
  local_3c[9] = 4;
  local_3c[0xc] = 4;
  local_3c[1] = 1;
  local_3c[5] = 1;
  local_3c[0xe] = 1;
  pfVar1 = (float *)(iVar3 * 0xf0 + 0xc4 + DAT_00715e50);
  local_3c[2] = 0;
  local_3c[7] = 0;
  local_3c[0xd] = 0;
  pfVar7 = (float *)&DAT_005d2b74;
  do {
    if (((*pfVar1 < *pfVar7) && (*(char *)(pfVar7 + -1) == '\x01')) &&
       (*pfVar7 = 3.4028235e+38, (*(byte *)((int)pfVar7[1] * 0x50 + iVar6) & 4) != 0)) {
      *pfVar7 = 1.7014117e+38;
    }
    pfVar7 = pfVar7 + 3;
  } while ((int)pfVar7 < 0x5d2bb0);
  i = 0;
  iVar6 = -1;
  do {
    iVar5 = local_3c[iVar4 * 5 + i];
    if (((&DAT_005d2b74)[iVar5 * 3] == 0x7f7fffff) && ((&DAT_005d2b70)[iVar5 * 0xc] == '\x01')) {
      i = 5;
      iVar6 = iVar5;
    }
    i = i + 1;
  } while (i < 5);
  if (iVar6 == -1) {
    fVar2 = 1.1754944e-38;
    iVar6 = -1;
    i = 5;
    piVar8 = local_3c + iVar4 * 5;
    do {
      iVar4 = *piVar8;
      if ((fVar2 < (float)(&DAT_005d2b74)[iVar4 * 3]) && ((&DAT_005d2b70)[iVar4 * 0xc] == '\x01')) {
        fVar2 = (float)(&DAT_005d2b74)[iVar4 * 3];
        iVar6 = iVar4;
      }
      piVar8 = piVar8 + 1;
      i = i + -1;
    } while (i != 0);
    if (iVar6 == -1) {
      FUN_004185c0(iVar3);
      return 0;
    }
  }
  return iVar6;
}


/* ==== 00418890 FUN_00418890 ==== */

void FUN_00418890(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  FUN_00418100(uVar1);
  FUN_00418280(uVar1);
  FUN_00418710(param_1);
  return;
}


/* ==== 004188c0 FUN_004188c0 ==== */

int FUN_004188c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int i;
  
  uVar1 = FUN_004aac20(param_1,*(undefined4 *)(param_1 * 0xf0 + 0x50 + DAT_00715e50));
  iVar2 = FUN_00418050(param_1,uVar1);
  i = 6;
  do {
    iVar3 = FUN_00423290(iVar2,1);
    if (iVar3 == -1) {
      iVar3 = FUN_00423290(iVar2,0);
      if (iVar3 == -1) {
        iVar3 = FUN_00423290(iVar2,2);
        if (iVar3 == -1) {
          FUN_004c4150(s__s__d_Waypoint__d_near_chunk__d_h_00593684,
                       s_C__Work_A2IV_Game_prog_ai_path_c_00593660,0x411,iVar2,
                       *(undefined4 *)(param_1 * 0xf0 + 0x34 + DAT_00715e50));
        }
      }
    }
    i = i + -1;
    iVar2 = iVar3;
  } while (i != 0);
  return iVar3;
}


