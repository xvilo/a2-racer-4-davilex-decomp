/* Rsc.dll — stream.c: 1 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 100068a0 FUN_100068a0 ==== */

undefined4 * FUN_100068a0(void)

{
  undefined4 uVar1;
  undefined4 *local_c;
  int i;
  
  local_c = (undefined4 *)0x0;
  FUN_100073f0(2);
  i = 0;
  do {
    if (DAT_10032f60 <= i) {
LAB_100069ce:
      if (local_c != (undefined4 *)0x0) {
        local_c[1] = 0;
        local_c[3] = 0;
        local_c[2] = 0;
        *local_c = 0;
        local_c[7] = 0;
        local_c[4] = 0xffffffff;
      }
      FUN_10007490(2);
      return local_c;
    }
    if (*(int *)(DAT_10031c18 + i * 4) == 0) {
      uVar1 = FUN_10003710((void *)0x38,2,0x1002cb50,0x55);
      *(undefined4 *)(DAT_10031c18 + i * 4) = uVar1;
      if (*(int *)(DAT_10031c18 + i * 4) != 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10031c18 + i * 4) + 0x20));
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10031c18 + i * 4) + 0x20));
        local_c = *(undefined4 **)(DAT_10031c18 + i * 4);
      }
      goto LAB_100069ce;
    }
    if ((*(uint *)(*(int *)(DAT_10031c18 + i * 4) + 0xc) & 0x83) == 0) {
      FUN_10002ea0(i,*(int *)(DAT_10031c18 + i * 4));
      if ((*(uint *)(*(int *)(DAT_10031c18 + i * 4) + 0xc) & 0x83) == 0) {
        local_c = *(undefined4 **)(DAT_10031c18 + i * 4);
        goto LAB_100069ce;
      }
      FUN_10002f10(i,*(int *)(DAT_10031c18 + i * 4));
    }
    i = i + 1;
  } while( true );
}


