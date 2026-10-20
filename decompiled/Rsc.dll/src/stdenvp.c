/* Rsc.dll — stdenvp.c: 3 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10007960 FUN_10007960 ==== */

void FUN_10007960(void)

{
  GetCurrentThreadId();
  return;
}


/* ==== 10007970 FUN_10007970 ==== */

void FUN_10007970(void)

{
  GetCurrentThread();
  return;
}


/* ==== 10007980 FUN_10007980 ==== */

void FUN_10007980(void)

{
  size_t _strlen_result;
  int iVar1;
  int *local_10;
  int i;
  uint *str;
  
  if (DAT_10031aa8 == 0) {
    FUN_1000cb60();
  }
  i = 0;
  for (str = DAT_1003141c; (char)*str != '\0'; str = (uint *)((int)str + _strlen_result + 1)) {
    if ((char)*str != '=') {
      i = i + 1;
    }
    _strlen_result = _strlen((char *)str);
  }
  local_10 = (int *)FUN_10003710((void *)(i * 4 + 4),2,0x1002cb84,0x6d);
  DAT_100314c8 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (str = DAT_1003141c; (char)*str != '\0'; str = (uint *)((int)str + (int)(_strlen_result + 1)))
  {
    _strlen_result = _strlen((char *)str);
    if ((char)*str != '=') {
      iVar1 = FUN_10003710((void *)(_strlen_result + 1),2,0x1002cb84,0x79);
      *local_10 = iVar1;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_10001ec0((uint *)*local_10,str);
      local_10 = local_10 + 1;
    }
  }
  FUN_100041a0(DAT_1003141c,2);
  DAT_1003141c = (uint *)0x0;
  *local_10 = 0;
  DAT_10031a98 = 1;
  return;
}


