/* Rsc.dll — initnum.c: 2 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 1000fe00 ___free_lc_time ==== */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_100041a0((void *)param_1[1],2);
    FUN_100041a0((void *)param_1[2],2);
    FUN_100041a0((void *)param_1[3],2);
    FUN_100041a0((void *)param_1[4],2);
    FUN_100041a0((void *)param_1[5],2);
    FUN_100041a0((void *)param_1[6],2);
    FUN_100041a0((void *)*param_1,2);
    FUN_100041a0((void *)param_1[8],2);
    FUN_100041a0((void *)param_1[9],2);
    FUN_100041a0((void *)param_1[10],2);
    FUN_100041a0((void *)param_1[0xb],2);
    FUN_100041a0((void *)param_1[0xc],2);
    FUN_100041a0((void *)param_1[0xd],2);
    FUN_100041a0((void *)param_1[7],2);
    FUN_100041a0((void *)param_1[0xe],2);
    FUN_100041a0((void *)param_1[0xf],2);
    FUN_100041a0((void *)param_1[0x10],2);
    FUN_100041a0((void *)param_1[0x11],2);
    FUN_100041a0((void *)param_1[0x12],2);
    FUN_100041a0((void *)param_1[0x13],2);
    FUN_100041a0((void *)param_1[0x14],2);
    FUN_100041a0((void *)param_1[0x15],2);
    FUN_100041a0((void *)param_1[0x16],2);
    FUN_100041a0((void *)param_1[0x17],2);
    FUN_100041a0((void *)param_1[0x18],2);
    FUN_100041a0((void *)param_1[0x19],2);
    FUN_100041a0((void *)param_1[0x1a],2);
    FUN_100041a0((void *)param_1[0x1b],2);
    FUN_100041a0((void *)param_1[0x1c],2);
    FUN_100041a0((void *)param_1[0x1d],2);
    FUN_100041a0((void *)param_1[0x1e],2);
    FUN_100041a0((void *)param_1[0x1f],2);
    FUN_100041a0((void *)param_1[0x20],2);
    FUN_100041a0((void *)param_1[0x21],2);
    FUN_100041a0((void *)param_1[0x22],2);
    FUN_100041a0((void *)param_1[0x23],2);
    FUN_100041a0((void *)param_1[0x24],2);
    FUN_100041a0((void *)param_1[0x25],2);
    FUN_100041a0((void *)param_1[0x26],2);
    FUN_100041a0((void *)param_1[0x27],2);
    FUN_100041a0((void *)param_1[0x28],2);
    FUN_100041a0((void *)param_1[0x29],2);
    FUN_100041a0((void *)param_1[0x2a],2);
  }
  return;
}


/* ==== 10010110 FUN_10010110 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10010110(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)DAT_1003169a;
  if (DAT_10031644 == 0) {
    FUN_100041a0(DAT_10031668,2);
    FUN_100041a0(DAT_1003166c,2);
    FUN_100041a0(DAT_10031670,2);
    DAT_10031668 = (void *)0x0;
    DAT_1003166c = (void *)0x0;
    DAT_10031670 = (char *)0x0;
    uVar5 = FUN_10003710((void *)0x2,2,0x1002d088,0x88);
    *(undefined4 *)PTR_PTR_10030d98 = uVar5;
    if (*(int *)PTR_PTR_10030d98 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_10001ec0(*(uint **)PTR_PTR_10030d98,(uint *)".");
      uVar5 = FUN_10003710((void *)0x2,2,0x1002d088,0x8d);
      *(undefined4 *)(PTR_PTR_10030d98 + 4) = uVar5;
      if (*(int *)(PTR_PTR_10030d98 + 4) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_10030d98 + 4) = 0;
        uVar5 = FUN_10003710((void *)0x2,2,0x1002d088,0x92);
        *(undefined4 *)(PTR_PTR_10030d98 + 8) = uVar5;
        if (*(int *)(PTR_PTR_10030d98 + 8) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_10030d98 + 8) = 0;
          DAT_10030218 = **(undefined1 **)PTR_PTR_10030d98;
          _DAT_1003021c = 1;
          uVar5 = 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_10012fb0(1,uVar1,0xe,(int *)&DAT_10031668);
    iVar3 = FUN_10012fb0(1,uVar1,0xf,(int *)&DAT_1003166c);
    iVar4 = FUN_10012fb0(1,uVar1,0x10,(int *)&DAT_10031670);
    fix_grouping(DAT_10031670);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(char **)PTR_PTR_10030d98 != s___10030d60) {
        FUN_100041a0(*(void **)PTR_PTR_10030d98,2);
        FUN_100041a0(*(void **)(PTR_PTR_10030d98 + 4),2);
        FUN_100041a0(*(void **)(PTR_PTR_10030d98 + 8),2);
      }
      *(void **)PTR_PTR_10030d98 = DAT_10031668;
      *(void **)(PTR_PTR_10030d98 + 4) = DAT_1003166c;
      *(char **)(PTR_PTR_10030d98 + 8) = DAT_10031670;
      DAT_10030218 = **(undefined1 **)PTR_PTR_10030d98;
      _DAT_1003021c = 1;
      uVar5 = 0;
    }
    else {
      FUN_100041a0(DAT_10031668,2);
      FUN_100041a0(DAT_1003166c,2);
      FUN_100041a0(DAT_10031670,2);
      DAT_10031668 = (void *)0x0;
      DAT_1003166c = (void *)0x0;
      DAT_10031670 = (char *)0x0;
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}


