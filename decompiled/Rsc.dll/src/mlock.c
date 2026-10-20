/* Rsc.dll — mlock.c: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 10007270 __ioterm ==== */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  int i;
  uint local_8;
  
  for (i = 0; i < 0x40; i = i + 1) {
    if ((&DAT_10031ac0)[i] != 0) {
      for (local_8 = (&DAT_10031ac0)[i]; local_8 < (&DAT_10031ac0)[i] + 0x480;
          local_8 = local_8 + 0x24) {
        if (*(int *)(local_8 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xc));
        }
      }
      FUN_100041a0((void *)(&DAT_10031ac0)[i],2);
      (&DAT_10031ac0)[i] = 0;
    }
  }
  return;
}


/* ==== 10007310 FUN_10007310 ==== */

void FUN_10007310(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fee0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fed0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fec0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fea0);
  return;
}


/* ==== 10007350 FUN_10007350 ==== */

void FUN_10007350(void)

{
  int i;
  
  for (i = 0; i < 0x30; i = i + 1) {
    if ((((*(int *)(&DAT_1002fe9c + i * 4) != 0) && (i != 0x11)) && (i != 0xd)) &&
       ((i != 9 && (i != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + i * 4));
      FUN_100041a0(*(void **)(&DAT_1002fe9c + i * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fec0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fed0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fee0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fea0);
  return;
}


/* ==== 100073f0 FUN_100073f0 ==== */

void __cdecl FUN_100073f0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_1002fe9c + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_10003710((void *)0x18,2,0x1002cb70,0xe1);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100073f0(0x11);
    if (*(int *)(&DAT_1002fe9c + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_100041a0(lpCriticalSection,2);
    }
    FUN_10007490(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4));
  return;
}


/* ==== 10007490 FUN_10007490 ==== */

void __cdecl FUN_10007490(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4));
  return;
}


/* ==== 100074b0 FUN_100074b0 ==== */

void __cdecl FUN_100074b0(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}


/* ==== 100074d0 FUN_100074d0 ==== */

void FUN_100074d0(void)

{
  if (DAT_10031ab4 != (code *)0x0) {
    (*DAT_10031ab4)();
  }
  __initterm((int *)&DAT_1002f208,(int *)&DAT_1002f418);
  __initterm((int *)&DAT_1002f000,(int *)&DAT_1002f104);
  return;
}


/* ==== 10007510 FUN_10007510 ==== */

void __cdecl FUN_10007510(UINT param_1)

{
  FUN_10007590(param_1,0,0);
  return;
}


/* ==== 10007530 __exit ==== */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __exit(int _Code)

{
  FUN_10007590(_Code,1,0);
  return;
}


/* ==== 10007550 FUN_10007550 ==== */

void FUN_10007550(void)

{
  FUN_10007590(0,0,1);
  return;
}


