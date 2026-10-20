/* spel.dat — game/Car_Parts.cpp: 27 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0042a9d0 FUN_0042a9d0 ==== */

void __thiscall FUN_0042a9d0(void *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x74);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  FUN_004f5510();
  return;
}


/* ==== 0042aa20 FUN_0042aa20 ==== */

undefined4 FUN_0042aa20(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int i;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_c [12];
  
  param_1 = param_1 * 0xf0;
  piVar1 = (int *)(param_1 + 0x24 + DAT_00715e50);
  iVar6 = *(int *)(param_1 + 0x48 + DAT_00715e50) * 0xf0;
  *(undefined4 *)(param_1 + 0x34 + DAT_00715e50) = *(undefined4 *)(iVar6 + 0x34 + DAT_00715e50);
  iVar6 = *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9;
  iVar4 = *piVar1 * 0xa9;
  puVar7 = (undefined4 *)(iVar6 + 0x10 + DAT_0073b0d0);
  puVar8 = (undefined4 *)(iVar4 + 0x10 + DAT_0073b0d0);
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  pfVar5 = (float *)FUN_004b42a0(local_c,DAT_0073b0d0 +
                                         *(int *)(param_1 + 0x24 + DAT_00715e50) * 0xa9 + 0x50,
                                 iVar6 + 0x10 + DAT_0073b0d0);
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  *(float *)(iVar4 + 0x40 + DAT_0073b0d0) = *pfVar5 + *(float *)(iVar4 + 0x40 + DAT_0073b0d0);
  *(float *)(iVar4 + 0x44 + DAT_0073b0d0) = fVar2 + *(float *)(iVar4 + 0x44 + DAT_0073b0d0);
  *(float *)(iVar4 + 0x48 + DAT_0073b0d0) = fVar3 + *(float *)(iVar4 + 0x48 + DAT_0073b0d0);
  return 1;
}


/* ==== 0042ab20 FUN_0042ab20 ==== */

void * __thiscall FUN_0042ab20(void *this)

{
  char cVar1;
  int iVar2;
  uint i;
  uint j;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined1 *this_val;
  
  puStack_8 = &LAB_0056a23b;
  pvStack_c = ExceptionList;
  this_val = (undefined1 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  *this_val = local_15;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0xffffffff;
  puVar3 = (undefined4 *)PTR_s_NOT_USED_005969fc;
  i = 0xffffffff;
  local_4 = 0;
  pcVar4 = PTR_s_NOT_USED_005969fc;
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
  iVar2 = *(int *)((int)this + 8);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (i == 0) {
      FUN_004028f0(this_val,1);
      ExceptionList = pvStack_c;
      return this;
    }
    if ((*(uint *)((int)this + 0x10) < 0x20) && (i <= *(uint *)((int)this + 0x10)))
    goto LAB_0042abfa;
    FUN_004028f0(this_val,1);
  }
  else if (i == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_val,0);
    ExceptionList = pvStack_c;
    return this;
  }
  FUN_00402b20(this_val,i);
LAB_0042abfa:
  puVar5 = *(undefined4 **)((int)this + 8);
  for (j = i >> 2; j != 0; j = j - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  for (j = i & 3; j != 0; j = j - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)((int)this + 0xc) = i;
  *(undefined1 *)(*(int *)((int)this + 8) + i) = 0;
  ExceptionList = pvStack_c;
  return this;
}


/* ==== 0042ac40 FUN_0042ac40 ==== */

void __thiscall FUN_0042ac40(void *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


/* ==== 0042ac80 FUN_0042ac80 ==== */

/* WARNING: Removing unreachable block (ram,0x0042ac9f) */

void __thiscall FUN_0042ac80(void *this,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint i;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char *str1;
  int this_val;
  
  this_val = (int)this + 4;
  uVar1 = *(uint *)(param_2 + 8);
  if (this_val == param_2) {
    if (*(uint *)((int)this + 0xc) < uVar1) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_val);
    iVar3 = *(int *)((int)this + 0xc) - uVar1;
    iVar8 = -1;
    if (iVar3 != -1) {
      iVar8 = iVar3;
    }
    if (iVar8 != 0) {
      iVar6 = *(int *)((int)this + 8) + uVar1;
      FUN_005580e0(iVar6,iVar6 + iVar8,iVar3 - iVar8);
      iVar8 = *(int *)((int)this + 0xc) - iVar8;
      cVar2 = FUN_00402a00(this_val,iVar8,0);
      if (cVar2 != '\0') {
        FUN_004029e0(this_val,iVar8);
      }
    }
    FUN_0040f800(this_val,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(this_val,1);
        puVar4 = *(undefined1 **)(param_2 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 8) = puVar4;
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_0042ad8c;
      }
    }
    cVar2 = FUN_00402a00(this_val,uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_2 + 4);
      }
      puVar9 = *(undefined4 **)((int)this + 8);
      for (i = uVar1 >> 2; i != 0; i = i - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (i = uVar1 & 3; i != 0; i = i - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_004029e0(this_val,uVar1);
    }
  }
LAB_0042ad8c:
  str1 = *(char **)(param_2 + 4);
  if (str1 == (char *)0x0) {
    str1 = "";
  }
  uVar5 = FUN_004b75a0(&DAT_00712130,str1);
  *(undefined4 *)this = uVar5;
  return;
}


/* ==== 0042ade0 FUN_0042ade0 ==== */

void __thiscall FUN_0042ade0(void *this,undefined4 *param_2)

{
  *(undefined4 *)((int)this + 0x14) = *param_2;
  *(undefined4 *)((int)this + 0x18) = param_2[1];
  *(undefined4 *)((int)this + 0x1c) = param_2[2];
  return;
}


/* ==== 0042ae00 FUN_0042ae00 ==== */

void __thiscall FUN_0042ae00(void *this,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x20) = param_2;
  return;
}


/* ==== 0042ae20 FUN_0042ae20 ==== */

undefined4 __thiscall FUN_0042ae20(void *this)

{
  return *(undefined4 *)this;
}


/* ==== 0042ae30 FUN_0042ae30 ==== */

void __thiscall FUN_0042ae30(void *this,undefined4 *param_2)

{
  if (*(int *)this != -1) {
    *param_2 = *(undefined4 *)((int)this + 0x14);
    param_2[1] = *(undefined4 *)((int)this + 0x18);
    param_2[2] = *(undefined4 *)((int)this + 0x1c);
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* ==== 0042aea0 FUN_0042aea0 ==== */

undefined4 __thiscall FUN_0042aea0(void *this)

{
  return *(undefined4 *)((int)this + 0x20);
}


/* ==== 0042aeb0 FUN_0042aeb0 ==== */

void * __thiscall FUN_0042aeb0(void *this)

{
  FUN_00558643(this,0x24,100,FUN_0042ab20,FUN_0042ac40);
  return this;
}


/* ==== 0042aed0 FUN_0042aed0 ==== */

void __thiscall FUN_0042aed0(void *this)

{
  FUN_005586c5(this,0x24,100,FUN_0042ac40);
  return;
}


/* ==== 0042aee0 FUN_0042aee0 ==== */

int __thiscall FUN_0042aee0(void)

{
  void *this_val;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a250;
  local_c = ExceptionList;
  if (DAT_006c2f44 == 0) {
    ExceptionList = &local_c;
    this_val = operator_new(0xe10);
    local_4 = 0;
    if (this_val == (void *)0x0) {
      DAT_006c2f44 = 0;
    }
    else {
      DAT_006c2f44 = FUN_0042aeb0(this_val,this_val);
    }
    local_4 = 0xffffffff;
    if (DAT_006c2f44 == 0) {
      FUN_004c4150(s___s___d_Could_not_create_a_conne_00596cb4,
                   s_C__Work_A2IV_Game_prog_Car_Parts_00596c8c,0x177);
    }
  }
  ExceptionList = local_c;
  return DAT_006c2f44;
}


/* ==== 0042af70 FUN_0042af70 ==== */

void FUN_0042af70(void)

{
  int iVar1;
  
  iVar1 = DAT_006c2f44;
  if (DAT_006c2f44 != 0) {
    FUN_0042aed0(DAT_006c2f44);
    FUN_0054b339(iVar1);
    DAT_006c2f44 = 0;
  }
  return;
}


/* ==== 0042b0a0 FUN_0042b0a0 ==== */

void __thiscall FUN_0042b0a0(void *this,int param_2)

{
  if ((param_2 < 0) || (99 < param_2)) {
    FUN_004c4150(s___s___d_Maximum_connected_object_00596e98,
                 s_C__Work_A2IV_Game_prog_Car_Parts_00596e70,0x216,100);
  }
  FUN_0042ae20((void *)((int)this + param_2 * 0x24));
  return;
}


/* ==== 0042b0e0 FUN_0042b0e0 ==== */

void __thiscall FUN_0042b0e0(void *this,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 local_c [12];
  
  if ((param_3 < 0) || (99 < param_3)) {
    FUN_004c4150(s___s___d_Maximum_connected_object_00596ef8,
                 s_C__Work_A2IV_Game_prog_Car_Parts_00596ed0,0x233,100);
  }
  puVar1 = (undefined4 *)FUN_0042ae30((void *)((int)this + param_3 * 0x24),local_c);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}


/* ==== 0042b140 FUN_0042b140 ==== */

void __thiscall FUN_0042b140(void *this,int param_2)

{
  if ((param_2 < 0) || (99 < param_2)) {
    FUN_004c4150(s___s___d_Maximum_connected_object_00596f58,
                 s_C__Work_A2IV_Game_prog_Car_Parts_00596f30,0x250,100);
  }
  FUN_0042aea0((void *)((int)this + param_2 * 0x24));
  return;
}


/* ==== 0042b180 FUN_0042b180 ==== */

bool __thiscall FUN_0042b180(void *this,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (100 < param_2)) {
    FUN_004c4150(s___s___d_Illegal_type_entry___d__c_00596fb8,
                 s_C__Work_A2IV_Game_prog_Car_Parts_00596f90,0x26d,param_2);
  }
  iVar1 = FUN_0042ae20((void *)((int)this + param_2 * 0x24));
  return iVar1 != -1;
}


/* ==== 0042b1c0 FUN_0042b1c0 ==== */

undefined4 __thiscall FUN_0042b1c0(void *this)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  uint j;
  uint k;
  char *pcVar7;
  char *pcVar8;
  int i;
  undefined1 auStack_174 [4];
  char *pcStack_170;
  uint uStack_16c;
  undefined4 uStack_168;
  void *local_164;
  int local_160;
  undefined1 local_15c [4];
  undefined1 auStack_158 [4];
  undefined1 auStack_154 [4];
  undefined1 auStack_150 [4];
  char acStack_14c [64];
  undefined1 auStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0056a265;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_00596ff4);
  puVar3 = *(undefined1 **)(iVar2 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  FUN_004c3b60();
  iVar4 = FUN_004c3cd0(PTR_s_Connected_Object_Types_00596a04,PTR_s_Count_00596a08,puVar3);
  iVar2 = iVar4;
  local_160 = iVar4;
  if (100 < iVar4) {
    iVar2 = FUN_004c4150(s___s___d_Too_many___d__connected_o_00597030,
                         s_C__Work_A2IV_Game_prog_Car_Parts_00597008,0x297,iVar4,100);
  }
  i = 0;
  if (iVar4 < 1) {
    uVar6 = (undefined3)((uint)iVar2 >> 8);
  }
  else {
    do {
      local_164 = this;
      FUN_005587a3(local_15c,s__d_00597074,i);
      FUN_004c3d10(PTR_s_Connected_Object_Types_00596a04,local_15c,auStack_10c,0xff);
      iVar2 = FUN_004c3d60(auStack_10c,0);
      if (iVar2 != 5) {
        iVar2 = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_00597078);
        puVar3 = *(undefined1 **)(iVar2 + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0057629c;
        }
        FUN_004c4150(s___s___d_Illegal_description_of_c_005970b4,
                     s_C__Work_A2IV_Game_prog_Car_Parts_0059708c,0x2a8,puVar3);
      }
      FUN_004c3f10(0,acStack_14c,0x3f);
      j = 0xffffffff;
      pcVar7 = acStack_14c;
      do {
        if (j == 0) break;
        j = j - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      j = ~j - 1;
      pcStack_170 = (char *)0x0;
      uStack_16c = 0;
      uStack_168 = 0;
      cVar1 = FUN_00402a00(auStack_174,j,1);
      if (cVar1 != '\0') {
        pcVar7 = acStack_14c;
        pcVar8 = pcStack_170;
        for (k = j >> 2; k != 0; k = k - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (k = j & 3; k != 0; k = k - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        pcStack_170[j] = '\0';
        this = local_164;
        uStack_16c = j;
      }
      uStack_4 = 0;
      FUN_0042ac80(this,auStack_174);
      uStack_4 = 0xffffffff;
      if (pcStack_170 != (char *)0x0) {
        cVar1 = pcStack_170[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(pcStack_170 + -1);
        }
        else {
          pcStack_170[-1] = cVar1 + -1;
        }
      }
      pcStack_170 = (char *)0x0;
      uStack_16c = 0;
      uStack_168 = 0;
      FUN_004354a0(1,auStack_158);
      FUN_004354a0(2,auStack_154);
      FUN_004354a0(3,auStack_150);
      FUN_0042ade0(this,auStack_158);
      uVar5 = FUN_004c3ec0(4);
      FUN_0042ae00(this,uVar5);
      i = i + 1;
      this = (void *)((int)this + 0x24);
    } while (i < local_160);
    uVar6 = (undefined3)((uint)i >> 8);
  }
  ExceptionList = pvStack_c;
  return CONCAT31(uVar6,1);
}


/* ==== 0042b410 FUN_0042b410 ==== */

void FUN_0042b410(int param_1,undefined4 param_2,code *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 this_val;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_c [12];
  
  this_val = FUN_0042aee0();
  cVar4 = FUN_0042b180(this_val,param_2);
  if (cVar4 != '\0') {
    puVar5 = (undefined4 *)FUN_0042b0e0(this_val,local_c,param_2);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar6 = FUN_0042b0a0(this_val,param_2);
    if (param_3 == (code *)0x0) {
      param_3 = FUN_0042aa20;
    }
    iVar7 = FUN_004a7790(uVar1,uVar2,uVar3,0,0,0,uVar6,0,param_3,0,0);
    iVar9 = iVar7 * 0xf0;
    *(undefined4 *)(iVar9 + 0x34 + DAT_00715e50) =
         *(undefined4 *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
    *(undefined4 *)(iVar9 + 0x68 + DAT_00715e50) = 1;
    iVar8 = *(int *)(param_1 * 0xf0 + 0x44 + DAT_00715e50);
    if (iVar8 != -1) {
      do {
        iVar10 = iVar8;
        iVar8 = *(int *)(iVar10 * 0xf0 + 0x44 + DAT_00715e50);
      } while (iVar8 != -1);
      if (iVar10 != param_1) {
        *(int *)(iVar10 * 0xf0 + 0x44 + DAT_00715e50) = iVar7;
      }
    }
    *(int *)(iVar9 + 0x48 + DAT_00715e50) = param_1;
    iVar9 = iVar9 + DAT_00715e50;
    iVar8 = FUN_0042b140(this_val,param_2);
    *(float *)(iVar9 + 0x58) = (float)iVar8;
  }
  return;
}


/* ==== 0042b550 FUN_0042b550 ==== */

void __thiscall
FUN_0042b550(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int j;
  undefined1 *puVar2;
  int iVar3;
  char *_Str1;
  int __strcmpi_result;
  undefined4 uVar4;
  int i;
  undefined1 local_154 [8];
  char local_14c [64];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0056a277;
  local_c = ExceptionList;
  i = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  j = FUN_00448c90(&DAT_006fa558,s_Car_Configurations_005970f0);
  puVar2 = *(undefined1 **)(j + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004c3b60();
  j = FUN_004c3cd0(PTR_s_Connected_Object_Assignments_00596a0c,PTR_s_Count_00596a10,puVar2);
  if (j == 0) {
    if (param_4 == (char *)0x0) {
      ExceptionList = local_c;
      return;
    }
    cVar1 = param_4[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      param_4[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    FUN_005587a3(local_154,s__d_00597104,0);
    FUN_004c3d10(PTR_s_Connected_Object_Assignments_00596a0c,local_154,local_10c,0x3f);
    iVar3 = FUN_004c3d60(local_10c,0);
    while( true ) {
      FUN_004c3f10(0,local_14c,0x3f);
      _Str1 = "";
      if (param_4 != (char *)0x0) {
        _Str1 = param_4;
      }
      __strcmpi_result = __strcmpi(_Str1,local_14c);
      if ((__strcmpi_result == 0) || (j <= i)) break;
      i = i + 1;
      FUN_005587a3(local_154,s__d_00597108,i);
      FUN_004c3d10(PTR_s_Connected_Object_Assignments_00596a0c,local_154,local_10c,0x3f);
      iVar3 = FUN_004c3d60(local_10c,0);
    }
    if (i == j) {
      if (param_4 == (char *)0x0) {
        ExceptionList = local_c;
        return;
      }
      cVar1 = param_4[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        param_4[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
    }
    else {
      j = 0;
      if (0 < iVar3 + -1) {
        do {
          j = j + 1;
          uVar4 = FUN_004c3ec0(j);
          FUN_0042b410(param_2,uVar4,param_7);
        } while (j < iVar3 + -1);
      }
      if (param_4 == (char *)0x0) {
        ExceptionList = local_c;
        return;
      }
      cVar1 = param_4[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        param_4[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
    }
  }
  FUN_0054b339(param_4 + -1);
  ExceptionList = local_c;
  return;
}


/* ==== 0042b720 thunk_FUN_0042af70 ==== */

void thunk_FUN_0042af70(void)

{
  int iVar1;
  
  iVar1 = DAT_006c2f44;
  if (DAT_006c2f44 != 0) {
    FUN_0042aed0(DAT_006c2f44);
    FUN_0054b339(iVar1);
    DAT_006c2f44 = 0;
  }
  return;
}


/* ==== 0042b730 FUN_0042b730 ==== */

undefined4 FUN_0042b730(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 this_val;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined1 local_7c [112];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0056a289;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004af760(local_7c);
  local_4 = 0;
  iVar7 = param_1 * 0xf0;
  iVar8 = *(int *)(iVar7 + 0x48 + DAT_00715e50);
  FUN_0040dad0(iVar8);
  this_val = FUN_00426f60(&DAT_005d3460,iVar8);
  iVar4 = FUN_00425300(this_val);
  iVar5 = iVar7 + DAT_00715e50;
  if (*(int *)(iVar7 + 0x48 + DAT_00715e50) == -1) {
    fVar9 = (float10)FUN_004a6800(&DAT_007128b0);
    *(float *)(iVar5 + 0xc0) = (float)(fVar9 * (float10)-100.0 + (float10)*(float *)(iVar5 + 0xc0));
    pfVar1 = (float *)(DAT_0073b0d0 + *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9 + 0x54);
    fVar9 = (float10)FUN_004a6800(&DAT_007128b0);
    *pfVar1 = (float)(fVar9 * (float10)*(float *)(iVar7 + 0xc0 + DAT_00715e50) + (float10)*pfVar1);
    puVar6 = (undefined4 *)(iVar7 + 0x34 + DAT_00715e50);
    iVar5 = DAT_0073b0d0 + *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9;
    this_val = FUN_004af230(&DAT_00715250,*puVar6,*(undefined4 *)(iVar5 + 0x50),
                            *(undefined4 *)(iVar5 + 0x54),*(undefined4 *)(iVar5 + 0x58));
    *puVar6 = this_val;
    local_9c = *(undefined4 *)(iVar7 + 0x34 + DAT_00715e50);
    iVar5 = DAT_0073b0d0 + *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9;
    FUN_004adaf0(&local_9c,1,*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x54),
                 *(undefined4 *)(iVar5 + 0x58),local_80,&local_84,&local_88);
    iVar5 = DAT_0073b0d0 + *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9;
    fVar9 = (float10)FUN_004ad640(*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x54),
                                  *(undefined4 *)(iVar5 + 0x58),local_84,local_88);
    iVar5 = iVar7 + DAT_00715e50;
    fVar2 = (float)fVar9;
    if (*(float *)(DAT_0073b0d0 + *(int *)(iVar5 + 0x24) * 0xa9 + 0x54) <= fVar2 + 5.0) {
      fVar9 = (float10)FUN_004a6800(&DAT_007128b0);
      fVar3 = *(float *)(iVar5 + 0xd0);
      pfVar1 = (float *)(iVar7 + 200 + DAT_00715e50);
      local_8c = (float)(fVar9 * (float10)*(float *)(iVar5 + 0xcc));
      *pfVar1 = (float)((float10)*pfVar1 - fVar9 * (float10)*(float *)(iVar5 + 200));
      pfVar1[1] = pfVar1[1] - local_8c;
      pfVar1[2] = pfVar1[2] - (float)(fVar9 * (float10)fVar3);
    }
    else {
      *(undefined4 *)(iVar5 + 200) = 0x3f800000;
      local_90 = 0x3f800000;
      local_94 = 0x3f800000;
      local_98 = 0x3f800000;
      *(undefined4 *)(iVar5 + 0xcc) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0xd0) = 0x3f800000;
    }
    iVar5 = *(int *)(iVar7 + 0x24 + DAT_00715e50);
    if (*(float *)(DAT_0073b0d0 + iVar5 + 0x54 + iVar5 * 0xa8) < fVar2) {
      *(float *)(DAT_0073b0d0 + iVar5 + 0x54 + iVar5 * 0xa8) = fVar2;
      *(float *)(iVar7 + 0xc0 + DAT_00715e50) = -(*(float *)(iVar7 + 0xc0 + DAT_00715e50) * 0.5);
      *(float *)(iVar7 + 0xbc + DAT_00715e50) = *(float *)(iVar7 + 0xbc + DAT_00715e50) * 0.7;
      *(float *)(iVar7 + 0xc4 + DAT_00715e50) = *(float *)(iVar7 + 0xc4 + DAT_00715e50) * 0.7;
    }
  }
  else {
    iVar8 = iVar8 * 0xf0;
    if ((*(int *)(iVar8 + 100 + DAT_00715e50) == 0) || ((float)iVar4 <= *(float *)(iVar5 + 0x58))) {
      FUN_0042aa20(param_1);
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x24) * 0xa9 + DAT_0073b0d0;
      puVar6 = (undefined4 *)
               FUN_004b42a0(&local_98,DAT_0073b0d0 + *(int *)(iVar5 + 0x24) * 0xa9 + 0x50,
                            *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x10);
      *(undefined4 *)(iVar4 + 0x50) = *puVar6;
      *(undefined4 *)(iVar4 + 0x54) = puVar6[1];
      *(undefined4 *)(iVar4 + 0x58) = puVar6[2];
      iVar5 = *(int *)(iVar7 + 0x24 + DAT_00715e50);
      iVar4 = *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
      pfVar1 = (float *)(DAT_0073b0d0 + iVar5 + 0x50 + iVar5 * 0xa8);
      *pfVar1 = *(float *)(iVar4 + 0x50) + *(float *)(DAT_0073b0d0 + iVar5 + 0x50 + iVar5 * 0xa8);
      pfVar1[1] = *(float *)(iVar4 + 0x54) + pfVar1[1];
      pfVar1[2] = *(float *)(iVar4 + 0x58) + pfVar1[2];
      *(float *)(iVar7 + 0xc4 + DAT_00715e50) = *(float *)(iVar8 + 0xc4 + DAT_00715e50) * 0.5;
      *(float *)(iVar7 + 0xbc + DAT_00715e50) = *(float *)(iVar8 + 0xbc + DAT_00715e50) * 5.0;
      *(undefined4 *)(iVar7 + 0xc0 + DAT_00715e50) = 0;
      *(undefined4 *)(iVar7 + 0x48 + DAT_00715e50) = 0xffffffff;
    }
  }
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return 1;
}


/* ==== 0042bc10 FUN_0042bc10 ==== */

void FUN_0042bc10(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 0042bc20 FUN_0042bc20 ==== */

void FUN_0042bc20(void)

{
  FUN_005584e0(&LAB_0042bc30);
  return;
}


/* ==== 0042bc50 FUN_0042bc50 ==== */

void FUN_0042bc50(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 0042bc60 FUN_0042bc60 ==== */

void FUN_0042bc60(void)

{
  FUN_005584e0(&LAB_0042bc70);
  return;
}


