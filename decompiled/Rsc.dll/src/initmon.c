/* Rsc.dll — initmon.c: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 100103c0 fix_grouping ==== */

/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio */

void __cdecl fix_grouping(char *param_1)

{
  char *local_8;
  
  while (*param_1 != '\0') {
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (*param_1 == ';') {
        local_8 = param_1;
        do {
          *local_8 = local_8[1];
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    else {
      *param_1 = *param_1 + -0x30;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* ==== 10010440 FUN_10010440 ==== */

undefined4 FUN_10010440(void)

{
  undefined4 *dst;
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_10031640 == 0) {
    PTR_s___10030d68 = *(undefined **)PTR_PTR_10030d98;
    PTR_DAT_10030d6c = *(undefined **)(PTR_PTR_10030d98 + 4);
    PTR_DAT_10030d70 = *(undefined **)(PTR_PTR_10030d98 + 8);
    PTR_PTR_10030d98 = (undefined *)&PTR_s___10030d68;
    FUN_10010800((int)DAT_10031674);
    FUN_100041a0(DAT_10031674,2);
    DAT_10031674 = (undefined4 *)0x0;
    uVar1 = 0;
  }
  else {
    dst = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (dst == (undefined4 *)0x0) {
      uVar1 = 1;
    }
    else {
      uVar2 = FUN_10010570((int)dst);
      if (uVar2 == 0) {
        *dst = *(undefined4 *)PTR_PTR_10030d98;
        dst[1] = *(undefined4 *)(PTR_PTR_10030d98 + 4);
        dst[2] = *(undefined4 *)(PTR_PTR_10030d98 + 8);
        PTR_PTR_10030d98 = (undefined *)dst;
        FUN_10010800((int)DAT_10031674);
        FUN_100041a0(DAT_10031674,2);
        uVar1 = 0;
        DAT_10031674 = dst;
      }
      else {
        FUN_10010800((int)dst);
        FUN_100041a0(dst,2);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* ==== 10010570 FUN_10010570 ==== */

uint __cdecl FUN_10010570(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar1 = (uint)DAT_10031694;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10012fb0(1,uVar1,0x15,(int *)(param_1 + 0xc));
    uVar3 = FUN_10012fb0(1,uVar1,0x14,(int *)(param_1 + 0x10));
    uVar4 = FUN_10012fb0(1,uVar1,0x16,(int *)(param_1 + 0x14));
    uVar5 = FUN_10012fb0(1,uVar1,0x17,(int *)(param_1 + 0x18));
    uVar6 = FUN_10012fb0(1,uVar1,0x18,(int *)(param_1 + 0x1c));
    fix_grouping(*(char **)(param_1 + 0x1c));
    uVar7 = FUN_10012fb0(1,uVar1,0x50,(int *)(param_1 + 0x20));
    uVar8 = FUN_10012fb0(1,uVar1,0x51,(int *)(param_1 + 0x24));
    uVar9 = FUN_10012fb0(0,uVar1,0x1a,(int *)(param_1 + 0x28));
    uVar10 = FUN_10012fb0(0,uVar1,0x19,(int *)(param_1 + 0x29));
    uVar11 = FUN_10012fb0(0,uVar1,0x54,(int *)(param_1 + 0x2a));
    uVar12 = FUN_10012fb0(0,uVar1,0x55,(int *)(param_1 + 0x2b));
    uVar13 = FUN_10012fb0(0,uVar1,0x56,(int *)(param_1 + 0x2c));
    uVar14 = FUN_10012fb0(0,uVar1,0x57,(int *)(param_1 + 0x2d));
    uVar15 = FUN_10012fb0(0,uVar1,0x52,(int *)(param_1 + 0x2e));
    uVar1 = FUN_10012fb0(0,uVar1,0x53,(int *)(param_1 + 0x2f));
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar1;
  }
  return uVar1;
}


