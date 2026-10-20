/* spel.dat — libs/crt/crt.c: 405 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00557ff0 __global_unwind2 ==== */

/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __global_unwind2(PVOID target_frame)

{
  RtlUnwind(target_frame,(PVOID)0x558008,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


/* ==== 00558032 __local_unwind2 ==== */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_00558010;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_005580c6(0x101);
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


/* ==== 0055809a __abnormal_termination ==== */

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_00558010) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ==== 005580bd __NLG_Notify1 ==== */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify1(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 unaff_EBP;
  
  DAT_005c7b60 = in_ECX;
  DAT_005c7b5c = in_EAX;
  DAT_005c7b64 = unaff_EBP;
  return;
}


/* ==== 005580c6 FUN_005580c6 ==== */

void FUN_005580c6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_005c7b60 = *(undefined4 *)(unaff_EBP + 8);
  DAT_005c7b5c = in_EAX;
  DAT_005c7b64 = unaff_EBP;
  return;
}


/* ==== 005580e0 FUN_005580e0 ==== */

undefined4 * FUN_005580e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint i;
  undefined4 *puVar1;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar1 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar1 & 3) == 0) {
      i = param_3 >> 2;
      param_3 = param_3 & 3;
      if (7 < i) {
        for (; i != 0; i = i - 1) {
          *puVar1 = *param_2;
          param_2 = param_2 + -1;
          puVar1 = puVar1 + -1;
        }
        switch(param_3) {
        case 0:
          return param_1;
        case 2:
          goto switchD_00558297_caseD_2;
        case 3:
          goto switchD_00558297_caseD_3;
        }
        goto switchD_00558297_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_00558297_caseD_0;
      case 1:
        goto switchD_00558297_caseD_1;
      case 2:
        goto switchD_00558297_caseD_2;
      case 3:
        goto switchD_00558297_caseD_3;
      default:
        i = param_3 - ((uint)puVar1 & 3);
        switch((uint)puVar1 & 3) {
        case 1:
          param_3 = i & 3;
          *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
          param_2 = (undefined4 *)((int)param_2 + -1);
          i = i >> 2;
          puVar1 = (undefined4 *)((int)puVar1 - 1);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar1 = *param_2;
              param_2 = param_2 + -1;
              puVar1 = puVar1 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00558297_caseD_2;
            case 3:
              goto switchD_00558297_caseD_3;
            }
            goto switchD_00558297_caseD_1;
          }
          break;
        case 2:
          param_3 = i & 3;
          *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
          i = i >> 2;
          *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
          param_2 = (undefined4 *)((int)param_2 + -2);
          puVar1 = (undefined4 *)((int)puVar1 - 2);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar1 = *param_2;
              param_2 = param_2 + -1;
              puVar1 = puVar1 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00558297_caseD_2;
            case 3:
              goto switchD_00558297_caseD_3;
            }
            goto switchD_00558297_caseD_1;
          }
          break;
        case 3:
          param_3 = i & 3;
          *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
          *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
          i = i >> 2;
          *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)param_2 + 1);
          param_2 = (undefined4 *)((int)param_2 + -3);
          puVar1 = (undefined4 *)((int)puVar1 - 3);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar1 = *param_2;
              param_2 = param_2 + -1;
              puVar1 = puVar1 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00558297_caseD_2;
            case 3:
              goto switchD_00558297_caseD_3;
            }
            goto switchD_00558297_caseD_1;
          }
        }
      }
    }
    switch(i) {
    case 7:
      puVar1[7 - i] = param_2[7 - i];
    case 6:
      puVar1[6 - i] = param_2[6 - i];
    case 5:
      puVar1[5 - i] = param_2[5 - i];
    case 4:
      puVar1[4 - i] = param_2[4 - i];
    case 3:
      puVar1[3 - i] = param_2[3 - i];
    case 2:
      puVar1[2 - i] = param_2[2 - i];
    case 1:
      puVar1[1 - i] = param_2[1 - i];
      param_2 = param_2 + -i;
      puVar1 = puVar1 + -i;
    }
    switch(param_3) {
    case 1:
switchD_00558297_caseD_1:
      *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
      return param_1;
    case 2:
switchD_00558297_caseD_2:
      *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
      return param_1;
    case 3:
switchD_00558297_caseD_3:
      *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
      *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)param_2 + 1);
      return param_1;
    }
switchD_00558297_caseD_0:
    return param_1;
  }
  puVar1 = param_1;
  if (((uint)param_1 & 3) == 0) {
    i = param_3 >> 2;
    param_3 = param_3 & 3;
    if (7 < i) {
      for (; i != 0; i = i - 1) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        puVar1 = puVar1 + 1;
      }
      switch(param_3) {
      case 0:
        return param_1;
      case 2:
        goto switchD_00558115_caseD_2;
      case 3:
        goto switchD_00558115_caseD_3;
      }
      goto switchD_00558115_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_00558115_caseD_0;
    case 1:
      goto switchD_00558115_caseD_1;
    case 2:
      goto switchD_00558115_caseD_2;
    case 3:
      goto switchD_00558115_caseD_3;
    default:
      i = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        param_3 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        i = i >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar1 = (undefined4 *)((int)param_1 + 3);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar1 = *param_2;
            param_2 = param_2 + 1;
            puVar1 = puVar1 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00558115_caseD_2;
          case 3:
            goto switchD_00558115_caseD_3;
          }
          goto switchD_00558115_caseD_1;
        }
        break;
      case 2:
        param_3 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        i = i >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar1 = (undefined4 *)((int)param_1 + 2);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar1 = *param_2;
            param_2 = param_2 + 1;
            puVar1 = puVar1 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00558115_caseD_2;
          case 3:
            goto switchD_00558115_caseD_3;
          }
          goto switchD_00558115_caseD_1;
        }
        break;
      case 3:
        param_3 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        i = i >> 2;
        puVar1 = (undefined4 *)((int)param_1 + 1);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar1 = *param_2;
            param_2 = param_2 + 1;
            puVar1 = puVar1 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00558115_caseD_2;
          case 3:
            goto switchD_00558115_caseD_3;
          }
          goto switchD_00558115_caseD_1;
        }
      }
    }
  }
  switch(i) {
  case 7:
    puVar1[i - 7] = param_2[i - 7];
  case 6:
    puVar1[i - 6] = param_2[i - 6];
  case 5:
    puVar1[i - 5] = param_2[i - 5];
  case 4:
    puVar1[i - 4] = param_2[i - 4];
  case 3:
    puVar1[i - 3] = param_2[i - 3];
  case 2:
    puVar1[i - 2] = param_2[i - 2];
  case 1:
    puVar1[i - 1] = param_2[i - 1];
    param_2 = param_2 + i;
    puVar1 = puVar1 + i;
  }
  switch(param_3) {
  case 1:
switchD_00558115_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_00558115_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_00558115_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_00558115_caseD_0:
  return param_1;
}


/* ==== 00558415 FUN_00558415 ==== */

void FUN_00558415(void)

{
  FUN_0055842d();
  DAT_0074dc44 = FUN_0055db58();
  FUN_0055db08();
  return;
}


/* ==== 0055842d FUN_0055842d ==== */

void FUN_0055842d(void)

{
  PTR_FUN_005c865c = &LAB_0055dbdb;
  PTR_FUN_005c8658 = __cfltcvt;
  PTR_FUN_005c8660 = __fassign;
  PTR_FUN_005c8664 = FUN_0055db81;
  PTR_FUN_005c8668 = &LAB_0055dc29;
  PTR_FUN_005c866c = __cfltcvt;
  return;
}


/* ==== 00558465 operator_new ==== */

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint size)

{
  void *__nh_malloc_result;
  
  __nh_malloc_result = __nh_malloc(size,1);
  return __nh_malloc_result;
}


/* ==== 00558473 FUN_00558473 ==== */

void FUN_00558473(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  
  uVar1 = FUN_0055dfbc(DAT_007503dc);
  if (uVar1 < (uint)((int)DAT_007503d8 + (4 - (int)DAT_007503dc))) {
    iVar2 = FUN_0055dfbc(DAT_007503dc);
    pvVar3 = (LPVOID)FUN_0055a9b4(DAT_007503dc,iVar2 + 0x10);
    if (pvVar3 == (LPVOID)0x0) {
      return;
    }
    DAT_007503d8 = (undefined4 *)((int)pvVar3 + ((int)DAT_007503d8 - (int)DAT_007503dc >> 2) * 4);
    DAT_007503dc = pvVar3;
  }
  *DAT_007503d8 = param_1;
  DAT_007503d8 = DAT_007503d8 + 1;
  return;
}


/* ==== 005584e0 FUN_005584e0 ==== */

int FUN_005584e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00558473(param_1);
  return (iVar1 != 0) - 1;
}


/* ==== 00558524 __ftol ==== */

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}


/* ==== 00558550 FUN_00558550 ==== */

void FUN_00558550(void)

{
  float10 in_ST0;
  
  FUN_0055e2a8((double)in_ST0);
  FUN_0055856d();
  return;
}


/* ==== 0055856d FUN_0055856d ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0055856d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_005c8670, param_1 != 0)) {
      fVar1 = (float10)FUN_0055e24c();
    }
LAB_005585fc:
    if (DAT_0074dc40 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_0055e235();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else {
      fVar1 = _DAT_005c8670;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_005585fc;
      if ((param_2 & 0x80000000) == 0) {
        fVar1 = (float10)0;
      }
      else {
        fVar1 = (float10)3.141592653589793;
      }
    }
    if (DAT_0074dc40 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}


/* ==== 0055861b FUN_0055861b ==== */

void FUN_0055861b(undefined4 param_1)

{
  DAT_005c7b98 = param_1;
  return;
}


/* ==== 00558625 FUN_00558625 ==== */

uint FUN_00558625(void)

{
  DAT_005c7b98 = DAT_005c7b98 * 0x343fd + 0x269ec3;
  return DAT_005c7b98 >> 0x10 & 0x7fff;
}


/* ==== 00558643 FUN_00558643 ==== */

void FUN_00558643(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  int i;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005795a0;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (i = 0; i < param_3; i = i + 1) {
    (*param_4)();
  }
  local_8 = 0xffffffff;
  FUN_005586ad();
  ExceptionList = local_14;
  return;
}


/* ==== 005586ad FUN_005586ad ==== */

void FUN_005586ad(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    FUN_00558745(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0x18));
  }
  return;
}


/* ==== 005586c5 FUN_005586c5 ==== */

void FUN_005586c5(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005795b0;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)();
  }
  local_8 = 0xffffffff;
  FUN_0055872d();
  ExceptionList = local_14;
  return;
}


/* ==== 0055872d FUN_0055872d ==== */

void FUN_0055872d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_00558745(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
  }
  return;
}


/* ==== 00558745 FUN_00558745 ==== */

void FUN_00558745(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005795c0;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)();
  }
  ExceptionList = local_14;
  return;
}


/* ==== 005587a3 FUN_005587a3 ==== */

undefined4 FUN_005587a3(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  uVar1 = FUN_0055e5a1(&local_24,param_2,&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_0055e48c(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}


/* ==== 005587f5 FUN_005587f5 ==== */

void FUN_005587f5(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &type_info::vftable;
  if (in_ECX[1] != 0) {
    FUN_00559d4e(in_ECX[1]);
  }
  return;
}


/* ==== 0055880a FUN_0055880a ==== */

void FUN_0055880a(byte param_1)

{
  FUN_005587f5();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00558826 FUN_00558826 ==== */

void FUN_00558826(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_005795d8;
  return;
}


/* ==== 00558837 FUN_00558837 ==== */

void FUN_00558837(byte param_1)

{
  exception *in_ECX;
  
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00558853 FUN_00558853 ==== */

void FUN_00558853(undefined4 *param_1)

{
  size_t _strlen_result;
  void *operator_new_result;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_005795d8;
  _strlen_result = _strlen((char *)*param_1);
  operator_new_result = operator_new(_strlen_result + 1);
  in_ECX[1] = operator_new_result;
  if (operator_new_result != (void *)0x0) {
    FUN_0055ee40(operator_new_result,*param_1);
  }
  in_ECX[2] = 1;
  return;
}


/* ==== 00558890 FUN_00558890 ==== */

void FUN_00558890(int param_1)

{
  int iVar1;
  size_t _strlen_result;
  void *operator_new_result;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_005795d8;
  iVar1 = *(int *)(param_1 + 8);
  in_ECX[2] = iVar1;
  if (iVar1 == 0) {
    in_ECX[1] = *(undefined4 *)(param_1 + 4);
  }
  else {
    _strlen_result = _strlen(*(char **)(param_1 + 4));
    operator_new_result = operator_new(_strlen_result + 1);
    in_ECX[1] = operator_new_result;
    if (operator_new_result != (void *)0x0) {
      FUN_0055ee40(operator_new_result,*(undefined4 *)(param_1 + 4));
    }
  }
  return;
}


/* ==== 005588da ~exception ==== */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_005795d8;
  if (*(int *)(this + 8) != 0) {
    FUN_0054b339(*(undefined4 *)(this + 4));
  }
  return;
}


/* ==== 005588fd FUN_005588fd ==== */

undefined4 FUN_005588fd(FILE *file)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((file->_flag & 0x40U) == 0) {
    if ((file->_flag & 0x83U) != 0) {
      uVar2 = FUN_0055a5de(file);
      __freebuf(file);
      iVar1 = FUN_0055ef30(file->_file);
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (file->_tmpfname != (char *)0x0) {
        FUN_00559d4e(file->_tmpfname);
        file->_tmpfname = (char *)0x0;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  file->_flag = 0;
  return uVar2;
}


/* ==== 00558953 FUN_00558953 ==== */

undefined4 FUN_00558953(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0055f00e(param_1);
  uVar2 = FUN_0055e5a1(param_1,param_2,&stack0x0000000c);
  FUN_0055f09b(uVar1,param_1);
  return uVar2;
}


/* ==== 00558985 FUN_00558985 ==== */

void FUN_00558985(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0055f248();
  if (iVar1 == 0) {
    return;
  }
  FUN_0055f0d8(param_1,param_2,param_3,iVar1);
  return;
}


/* ==== 005589a5 FUN_005589a5 ==== */

void FUN_005589a5(undefined4 param_1,undefined4 param_2)

{
  FUN_00558985(param_1,param_2,0x40);
  return;
}


/* ==== 005589b8 FUN_005589b8 ==== */

float10 FUN_005589b8(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_0055fae8(DAT_005c7bb8,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_0055f9b0();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_0055fae8(uVar2,0xffff);
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)FUN_0055f2c0();
        return fVar4;
      }
    }
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar1 = (double)fVar4;
    if ((dVar1 == param_1) || ((uVar2 & 0x20) != 0)) {
      FUN_0055fae8(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = (float10)FUN_0055f313(uVar5,0xb,param_1,dVar1,uVar2);
  return fVar4;
}


/* ==== 00558a90 _memchr ==== */

/* Library Function - Single Match
    _memchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  uint uVar1;
  uint uVar2;
  int i;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  
  if (_MaxCount == 0) {
    return (void *)0x0;
  }
  uVar5 = _Val & 0xff;
  while (((uint)_Buf & 3) != 0) {
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)_Val) goto LAB_00558b1e;
    _MaxCount = _MaxCount - 1;
    if (_MaxCount == 0) {
      return (void *)0x0;
    }
  }
  uVar2 = _MaxCount - 4;
  if (3 < _MaxCount) {
    uVar5 = uVar5 * 0x1010101;
    puVar3 = _Buf;
    do {
      _Buf = puVar3 + 1;
      if (((*puVar3 ^ uVar5 ^ 0xffffffff ^ (*puVar3 ^ uVar5) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = *puVar3;
        cVar4 = (char)uVar5;
        if ((char)uVar1 == cVar4) {
          return puVar3;
        }
        if ((char)(uVar1 >> 8) == cVar4) {
          return (char *)((int)puVar3 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar4) {
          return (char *)((int)puVar3 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar4) goto LAB_00558b1e;
      }
      bVar6 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar3 = _Buf;
    } while (bVar6);
  }
  i = uVar2 + 4;
  while( true ) {
    if (i == 0) {
      return (void *)0x0;
    }
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)uVar5) break;
    i = i + -1;
  }
LAB_00558b1e:
  return (char *)((int)_Buf + -1);
}


/* ==== 00558b35 FUN_00558b35 ==== */

uint FUN_00558b35(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = param_4;
  uVar5 = param_2 * param_3;
  if (uVar5 == 0) {
    param_3 = 0;
  }
  else {
    puVar4 = param_1;
    param_1 = (undefined1 *)uVar5;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((*(ushort *)(piVar1 + 3) & 0x10c) == 0) || (uVar2 = piVar1[1], uVar2 == 0)) {
        if (param_1 < param_4) {
          iVar3 = FUN_0055fb61(piVar1);
          if (iVar3 == -1) goto LAB_00558c11;
          *puVar4 = (char)iVar3;
          param_4 = (int *)piVar1[6];
          puVar4 = puVar4 + 1;
          param_1 = (undefined1 *)((int)param_1 - 1);
        }
        else {
          uVar2 = (uint)param_1;
          if (param_4 != (int *)0x0) {
            uVar2 = (int)param_1 - (uint)param_1 % (uint)param_4;
          }
          iVar3 = FUN_0055fc3a(piVar1[4],puVar4,uVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_00558c11:
            return (uVar5 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_00558c11;
          }
          param_1 = (undefined1 *)((int)param_1 - iVar3);
          puVar4 = puVar4 + iVar3;
        }
      }
      else {
        uVar6 = (uint)param_1;
        if (uVar2 <= param_1) {
          uVar6 = uVar2;
        }
        FUN_0055b3c0(puVar4,*piVar1,uVar6);
        param_1 = (undefined1 *)((int)param_1 - uVar6);
        piVar1[1] = piVar1[1] - uVar6;
        *piVar1 = *piVar1 + uVar6;
        puVar4 = puVar4 + uVar6;
      }
    } while (param_1 != (undefined1 *)0x0);
  }
  return param_3;
}


/* ==== 00558c1d FUN_00558c1d ==== */

uint FUN_00558c1d(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint i;
  uint uVar4;
  uint uVar5;
  
  piVar1 = param_4;
  uVar4 = param_2 * param_3;
  if (uVar4 == 0) {
    param_3 = 0;
  }
  else {
    i = uVar4;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((piVar1[3] & 0x108U) == 0) || (uVar5 = piVar1[1], uVar5 == 0)) {
        if (param_4 <= i) {
          if (((piVar1[3] & 0x108U) != 0) && (iVar2 = FUN_0055a5de(piVar1), iVar2 != 0)) {
LAB_00558d1e:
            return (uVar4 - i) / param_2;
          }
          uVar5 = i;
          if (param_4 != (int *)0x0) {
            uVar5 = i - i % (uint)param_4;
          }
          uVar3 = FUN_0055fe30(piVar1[4],param_1,uVar5);
          if ((uVar3 == 0xffffffff) || (i = i - uVar3, uVar3 < uVar5)) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_00558d1e;
          }
          goto LAB_00558cd5;
        }
        iVar2 = FUN_0055e48c((int)*param_1,piVar1);
        if (iVar2 == -1) goto LAB_00558d1e;
        param_1 = param_1 + 1;
        param_4 = (int *)piVar1[6];
        i = i - 1;
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        uVar3 = i;
        if (uVar5 <= i) {
          uVar3 = uVar5;
        }
        FUN_0055b3c0(*piVar1,param_1,uVar3);
        piVar1[1] = piVar1[1] - uVar3;
        *piVar1 = *piVar1 + uVar3;
        i = i - uVar3;
LAB_00558cd5:
        param_1 = param_1 + uVar3;
      }
    } while (i != 0);
  }
  return param_3;
}


/* ==== 00558d27 FUN_00558d27 ==== */

void FUN_00558d27(char *str,undefined4 param_2)

{
  char *local_24;
  size_t _strlen_result;
  char *local_1c;
  undefined4 local_18;
  
  local_18 = 0x49;
  local_1c = str;
  local_24 = str;
  _strlen_result = _strlen(str);
  FUN_0055ffdd(&local_24,param_2,&stack0x0000000c);
  return;
}


/* ==== 00558d5b FUN_00558d5b ==== */

void FUN_00558d5b(uint *param_1,uint *param_2,uint param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_fc [30];
  uint local_84 [30];
  uint local_c;
  int i;
  
  if ((param_2 < 2) || (param_3 == 0)) {
    return;
  }
  i = 0;
  iVar4 = (int)param_2 - 1;
  param_2 = local_fc;
  uVar5 = iVar4 * param_3 + (int)param_1;
  uVar3 = (uint)param_1;
  param_1 = local_84;
LAB_00558d9a:
  uVar2 = (uVar5 - uVar3) / param_3 + 1;
  if (8 < uVar2) {
    FUN_00558efd((uVar2 >> 1) * param_3 + uVar3,uVar3,param_3);
    uVar2 = param_3 + uVar5;
    local_c = uVar3;
LAB_00558df1:
    local_c = local_c + param_3;
    if (local_c <= uVar5) goto code_r0x00558dfe;
    goto LAB_00558e09;
  }
  FUN_00558eaf(uVar3,uVar5,param_3,param_4);
  goto LAB_00558db9;
code_r0x00558dfe:
  iVar4 = (*param_4)(local_c,uVar3);
  if (iVar4 < 1) goto LAB_00558df1;
LAB_00558e09:
  do {
    uVar2 = uVar2 - param_3;
    if (uVar2 <= uVar3) break;
    iVar4 = (*param_4)(uVar2,uVar3);
  } while (-1 < iVar4);
  if (local_c <= uVar2) {
    FUN_00558efd(local_c,uVar2,param_3);
    goto LAB_00558df1;
  }
  FUN_00558efd(uVar3,uVar2,param_3);
  uVar1 = local_c;
  if ((int)((uVar2 - uVar3) + -1) < (int)(uVar5 - local_c)) {
    if (local_c < uVar5) {
      i = i + 1;
      *param_2 = local_c;
      *param_1 = uVar5;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    if (param_3 + uVar3 < uVar2) {
      uVar5 = uVar2 - param_3;
      goto LAB_00558d9a;
    }
  }
  else {
    if (uVar3 + param_3 < uVar2) {
      i = i + 1;
      *param_2 = uVar3;
      *param_1 = uVar2 - param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    uVar3 = uVar1;
    if (uVar1 < uVar5) goto LAB_00558d9a;
  }
LAB_00558db9:
  i = i + -1;
  param_2 = param_2 + -1;
  param_1 = param_1 + -1;
  if (i < 0) {
    return;
  }
  uVar5 = *param_1;
  uVar3 = *param_2;
  goto LAB_00558d9a;
}


/* ==== 00558eaf FUN_00558eaf ==== */

void FUN_00558eaf(uint param_1,uint param_2,int param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  for (; uVar2 = param_1, uVar3 = param_1, param_1 < param_2; param_2 = param_2 - param_3) {
    while (uVar3 = uVar3 + param_3, uVar3 <= param_2) {
      iVar1 = (*param_4)(uVar3,uVar2);
      if (0 < iVar1) {
        uVar2 = uVar3;
      }
    }
    FUN_00558efd(uVar2,param_2,param_3);
  }
  return;
}


/* ==== 00558efd FUN_00558efd ==== */

void FUN_00558efd(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


/* ==== 00558f30 FUN_00558f30 ==== */

uint * FUN_00558f30(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}


/* ==== 00558fb0 _strncpy ==== */

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint i;
  uint *puVar4;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar4 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      i = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar4 = (char)i;
      puVar4 = (uint *)((int)puVar4 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)i == '\0') break;
      if (((uint)_Source & 3) == 0) {
        i = _Count >> 2;
        goto joined_r0x00558fee;
      }
    }
    do {
      if (((uint)puVar4 & 3) == 0) {
        i = _Count >> 2;
        cVar3 = '\0';
        if (i == 0) goto LAB_0055902b;
        goto LAB_00559099;
      }
      *(char *)puVar4 = '\0';
      puVar4 = (uint *)((int)puVar4 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  i = _Count >> 2;
  if (i != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar4 = 0;
joined_r0x00559095:
          while( true ) {
            i = i - 1;
            puVar4 = puVar4 + 1;
            if (i == 0) break;
LAB_00559099:
            *puVar4 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_0055902b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar4 = uVar2 & 0xff;
          goto joined_r0x00559095;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar4 = uVar2 & 0xffff;
          goto joined_r0x00559095;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar4 = uVar2;
          goto joined_r0x00559095;
        }
      }
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      i = i - 1;
joined_r0x00558fee:
    } while (i != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar4 = cVar3;
    puVar4 = (uint *)((int)puVar4 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_0055902b:
        *(char *)puVar4 = cVar3;
        puVar4 = (uint *)((int)puVar4 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


/* ==== 005590ae FUN_005590ae ==== */

undefined4 FUN_005590ae(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  uVar1 = FUN_0055e5a1(&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_0055e48c(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}


/* ==== 005590ff FUN_005590ff ==== */

HANDLE FUN_005590ff(LPCSTR param_1,uint *param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  uint ___timet_from_ft_result;
  _WIN32_FIND_DATAA win32_find_data;
  
  pvVar1 = FindFirstFileA(param_1,&win32_find_data);
  if (pvVar1 != (HANDLE)0xffffffff) {
    *param_2 = -(uint)(win32_find_data.dwFileAttributes != 0x80) & win32_find_data.dwFileAttributes;
    ___timet_from_ft_result = ___timet_from_ft(&win32_find_data.ftCreationTime);
    param_2[1] = ___timet_from_ft_result;
    ___timet_from_ft_result = ___timet_from_ft(&win32_find_data.ftLastAccessTime);
    param_2[2] = ___timet_from_ft_result;
    ___timet_from_ft_result = ___timet_from_ft(&win32_find_data.ftLastWriteTime);
    param_2[3] = ___timet_from_ft_result;
    param_2[4] = win32_find_data.nFileSizeLow;
    FUN_0055ee40(param_2 + 5,win32_find_data.cFileName);
    return pvVar1;
  }
  DVar2 = GetLastError();
  if (1 < DVar2) {
    if (DVar2 < 4) {
      DAT_0074dc60 = 2;
      return (HANDLE)0xffffffff;
    }
    if (DVar2 == 8) {
      DAT_0074dc60 = 0xc;
      return (HANDLE)0xffffffff;
    }
    if (DVar2 == 0x12) {
      DAT_0074dc60 = 2;
      return (HANDLE)0xffffffff;
    }
  }
  DAT_0074dc60 = 0x16;
  return (HANDLE)0xffffffff;
}


/* ==== 005591c9 FUN_005591c9 ==== */

undefined4 FUN_005591c9(HANDLE param_1)

{
  BOOL BVar1;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    DAT_0074dc60 = 0x16;
    return 0xffffffff;
  }
  return 0;
}


/* ==== 005591e8 ___timet_from_ft ==== */

/* Library Function - Single Match
    ___timet_from_ft
   
   Library: Visual Studio 2003 Release */

undefined4 ___timet_from_ft(FILETIME *filetime)

{
  BOOL BVar1;
  undefined4 uVar2;
  _SYSTEMTIME systemtime;
  _FILETIME local_c;
  
  if ((filetime->dwLowDateTime != 0) || (filetime->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(filetime,&local_c);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_c,&systemtime);
      if (BVar1 != 0) {
        uVar2 = FUN_00560a8e(systemtime.wYear,systemtime.wMonth,systemtime.wDay,systemtime.wHour,
                             systemtime.wMinute,systemtime.wSecond,0xffffffff);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}


/* ==== 0055924c FUN_0055924c ==== */

undefined4 FUN_0055924c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0055b179(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00560b50(iVar1);
    return uVar2;
  }
  return 0;
}


/* ==== 0055926e FUN_0055926e ==== */

undefined4 FUN_0055926e(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    FUN_00560c26(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    DAT_0074dc60 = 0xd;
    DAT_0074dc64 = 5;
  }
  return 0xffffffff;
}


/* ==== 005592b2 FUN_005592b2 ==== */

int FUN_005592b2(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  while( true ) {
    if (DAT_005c8378 < 2) {
      uVar1 = (byte)PTR_s__005c8384[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar1 = FUN_0055c336(*param_1,8);
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_005c8378 < 2) {
      uVar2 = (byte)PTR_s__005c8384[uVar4 * 2] & 4;
    }
    else {
      uVar2 = FUN_0055c336(uVar4,4);
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


/* ==== 0055933d FUN_0055933d ==== */

void FUN_0055933d(undefined4 param_1)

{
  FUN_005592b2(param_1);
  return;
}


/* ==== 00559348 FUN_00559348 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559348(void)

{
  longlong __allmul_result;
  _FILETIME filetime;
  
  GetSystemTimeAsFileTime(&filetime);
  __allmul_result = __allmul(filetime.dwHighDateTime,0,0,1);
  __aulldiv((__allmul_result - CONCAT44(_DAT_0074dc4c,_DAT_0074dc48)) +
            (ulonglong)filetime.dwLowDateTime,10000,0);
  return;
}


/* ==== 0055938b FUN_0055938b ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055938b(void)

{
  longlong __allmul_result;
  _FILETIME filetime;
  
  GetSystemTimeAsFileTime(&filetime);
  __allmul_result = __allmul(filetime.dwHighDateTime,0,0,1);
  _DAT_0074dc48 = __allmul_result + (ulonglong)filetime.dwLowDateTime;
  return;
}


/* ==== 005593c0 __CxxThrowException@8 ==== */

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2003 Release */

void __CxxThrowException_8(undefined4 param_1,undefined4 param_2)

{
  int i;
  DWORD *pDVar1;
  DWORD *pDVar2;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pDVar1 = &DAT_005795f8;
  pDVar2 = local_24;
  for (i = 8; i != 0; i = i + -1) {
    *pDVar2 = *pDVar1;
    pDVar1 = pDVar1 + 1;
    pDVar2 = pDVar2 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}


/* ==== 00559400 FUN_00559400 ==== */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_00559400(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


/* ==== 0055942f FUN_0055942f ==== */

void FUN_0055942f(byte *param_1,byte *param_2,byte *dest_2,byte *dest_3,byte *dest)

{
  byte bVar1;
  size_t _strlen_result;
  byte *pbVar2;
  uint count;
  byte *source;
  
  source = (byte *)0x0;
  _strlen_result = _strlen((char *)param_1);
  if ((_strlen_result == 0) || (param_1[1] != 0x3a)) {
    if (param_2 != (byte *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (byte *)0x0) {
      FUN_0056117c(param_2,param_1,2);
      param_2[2] = 0;
    }
    param_1 = param_1 + 2;
  }
  param_2 = (byte *)0x0;
  pbVar2 = param_1;
  if (*param_1 != 0) {
    do {
      bVar1 = *pbVar2;
      if ((*(byte *)((int)&DAT_007502c0 + bVar1 + 1) & 4) == 0) {
        if ((bVar1 == 0x2f) || (bVar1 == 0x5c)) {
          param_2 = pbVar2 + 1;
        }
        else if (bVar1 == 0x2e) {
          source = pbVar2;
        }
      }
      else {
        pbVar2 = pbVar2 + 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (*pbVar2 != 0);
    if (param_2 != (byte *)0x0) {
      if (dest_2 != (byte *)0x0) {
        count = (int)param_2 - (int)param_1;
        if (0xfe < count) {
          count = 0xff;
        }
        FUN_0056117c(dest_2,param_1,count);
        dest_2[count] = 0;
      }
      goto LAB_005594f6;
    }
  }
  param_2 = param_1;
  if (dest_2 != (byte *)0x0) {
    *dest_2 = 0;
  }
LAB_005594f6:
  param_1 = pbVar2;
  if ((source == (byte *)0x0) || (source < param_2)) {
    if (dest_3 != (byte *)0x0) {
      count = 0xff;
      if ((uint)((int)param_1 - (int)param_2) < 0xff) {
        count = (int)param_1 - (int)param_2;
      }
      FUN_0056117c(dest_3,param_2,count);
      dest_3[count] = 0;
    }
    if (dest != (byte *)0x0) {
      *dest = 0;
    }
  }
  else {
    if (dest_3 != (byte *)0x0) {
      count = (int)source - (int)param_2;
      if (0xfe < count) {
        count = 0xff;
      }
      FUN_0056117c(dest_3,param_2,count);
      dest_3[count] = 0;
    }
    if (dest != (byte *)0x0) {
      count = 0xff;
      if ((uint)((int)param_1 - (int)source) < 0xff) {
        count = (int)param_1 - (int)source;
      }
      FUN_0056117c(dest,source,count);
      dest[count] = 0;
    }
  }
  return;
}


/* ==== 00559576 FUN_00559576 ==== */

uint FUN_00559576(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_8;
  
  uVar1 = param_1;
  if (DAT_0074dce4 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_005c8378 < 2) {
        uVar2 = (byte)PTR_s__005c8384[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_0055c336(param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_s__005c8384[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      uVar4 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      uVar4 = 2;
    }
    iVar3 = FUN_0055c112(DAT_0074dce4,0x200,&param_1,uVar4,&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = local_8 & 0xff;
      }
      else {
        uVar1 = local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


/* ==== 00559650 _strrchr ==== */

/* Library Function - Single Match
    _strrchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int i;
  char *pcVar2;
  char *pcVar3;
  
  i = -1;
  do {
    pcVar3 = _Str;
    if (i == 0) break;
    i = i + -1;
    pcVar3 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar3;
  } while (cVar1 != '\0');
  i = -(i + 1);
  pcVar3 = pcVar3 + -1;
  do {
    pcVar2 = pcVar3;
    if (i == 0) break;
    i = i + -1;
    pcVar2 = pcVar3 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while ((char)_Ch != cVar1);
  pcVar2 = pcVar2 + 1;
  if (*pcVar2 != (char)_Ch) {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}


/* ==== 00559677 FUN_00559677 ==== */

undefined4 FUN_00559677(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = param_2;
  uVar1 = FUN_0055e5a1(&local_24,param_3,&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_0055e48c(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}


/* ==== 005596c8 FUN_005596c8 ==== */

float10 FUN_005596c8(byte *str)

{
  uint uVar1;
  size_t _strlen_result;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  while( true ) {
    if (DAT_005c8378 < 2) {
      uVar1 = (byte)PTR_s__005c8384[(uint)*str * 2] & 8;
    }
    else {
      uVar1 = FUN_0055c336(*str,8);
    }
    if (uVar1 == 0) break;
    str = str + 1;
  }
  uVar4 = 0;
  uVar3 = 0;
  _strlen_result = _strlen((char *)str);
  iVar2 = FUN_00561206(str,_strlen_result,uVar3,uVar4);
  return (float10)*(double *)(iVar2 + 0x10);
}


/* ==== 00559715 entry ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA startupinfo;
  undefined1 *local_1c;
  _EXCEPTION_POINTERS *exception_pointers;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00579618;
  puStack_10 = &LAB_0055e3b4;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_0074dc78 = DVar1 >> 8 & 0xff;
  _DAT_0074dc74 = DVar1 & 0xff;
  _DAT_0074dc70 = _DAT_0074dc74 * 0x100 + _DAT_0074dc78;
  _DAT_0074dc6c = DVar1 >> 0x10;
  iVar2 = FUN_00561a56(0);
  if (iVar2 == 0) {
    FUN_00559830(0x1c);
  }
  local_8 = 0;
  FUN_005618ab();
  DAT_00751404 = GetCommandLineA();
  DAT_0074dc50 = FUN_00561779();
  FUN_0056152c();
  FUN_00561473();
  FUN_00559c4c();
  startupinfo.dwFlags = 0;
  GetStartupInfoA(&startupinfo);
  uVar3 = FUN_0056141b();
  if ((startupinfo.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)startupinfo.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_00458270(pHVar5,uVar6,uVar3,uVar4);
  FUN_00559c79(uVar3);
  FUN_00561297(exception_pointers->ExceptionRecord->ExceptionCode,exception_pointers);
  return;
}


/* ==== 0055980b __amsg_exit ==== */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_0074dc58 == 1) {
    FUN_00561a92();
  }
  FUN_00561acb(param_1);
  (*(code *)PTR___exit_005c7bd0)(0xff);
  return;
}


/* ==== 00559830 FUN_00559830 ==== */

void FUN_00559830(undefined4 param_1)

{
  if (DAT_0074dc58 == 1) {
    FUN_00561a92();
  }
  FUN_00561acb(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}


/* ==== 00559854 FUN_00559854 ==== */

undefined4 FUN_00559854(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  local_18 = 0x42;
  uVar1 = FUN_0055e5a1(&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_0055e48c(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}


/* ==== 00559960 FUN_00559960 ==== */

void FUN_00559960(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_00559982((double)in_ST1,(double)in_ST0);
  return;
}


/* ==== 00559982 FUN_00559982 ==== */

undefined4 FUN_00559982(int param_1,uint param_2,int param_3,uint param_4)

{
  uint in_EAX;
  uint __fload_withFB_result;
  undefined4 uVar1;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  int extraout_ECX_01;
  bool bVar3;
  short in_FPUControlWord;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar5;
  unkbyte10 in_ST7;
  undefined1 local_78 [20];
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  short local_4;
  undefined2 uStack_2;
  
  _local_4 = CONCAT22((short)(in_EAX >> 0x10),in_FPUControlWord);
  __fload_withFB_result = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x559996;
    in_EAX = FUN_0055e235();
    __fload_withFB_result = extraout_ECX;
  }
  bVar3 = (__fload_withFB_result & 0x7ff00000) == 0x7ff00000;
  if (bVar3) {
    if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
      auStack_e._6_4_ = 0x559a5f;
      fVar4 = (float10)__fload_withFB();
      iVar2 = extraout_ECX_01;
      fVar5 = extraout_ST1_01;
      goto LAB_00559a5f;
    }
    auStack_e._6_4_ = 0x559a22;
    fVar4 = (float10)__fload_withFB();
    if ((param_4 & 0x80000) == 0) {
      iVar2 = extraout_ECX_00 + 1;
      fVar5 = extraout_ST1_00;
      goto LAB_00559a5f;
    }
LAB_00559a2c:
    uVar1 = 1;
  }
  else {
    auStack_e._6_4_ = 0x5599b1;
    __fload_withFB_result = __fload_withFB();
    if (!bVar3) {
      if (((__fload_withFB_result & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0))
      {
        fVar4 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x559b37;
          fVar4 = (float10)FUN_00559b55();
          fVar4 = -fVar4;
          if (extraout_CL_00 == '\0') {
            uVar1 = 1;
            goto LAB_005599fa;
          }
        }
        log2(fVar4);
        auStack_e._6_4_ = 0x5599d6;
        uVar1 = FUN_0055e220();
        if (DAT_0074dc40 != 0) {
          return uVar1;
        }
        uVar1 = FUN_0055e309();
        return uVar1;
      }
      if ((param_4 & 0x7ff00000) == 0) {
        if ((param_4 & 0xfffff) != 0 || param_3 != 0) {
          uVar1 = FUN_0055e2be();
          return uVar1;
        }
        uVar1 = FUN_0055e2be();
        return uVar1;
      }
      auStack_e._6_4_ = 0x559add;
      uVar1 = FUN_00559b55();
      if ((param_4 & 0x80000000) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL) == 0) {
          return uVar1;
        }
        uVar1 = FUN_0055e2be();
        return uVar1;
      }
      uVar1 = 2;
      goto LAB_005599fa;
    }
    iVar2 = 0;
    fVar4 = extraout_ST0;
    fVar5 = extraout_ST1;
LAB_00559a5f:
    if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
      if ((param_2 & 0x80000) != 0) goto LAB_00559a2c;
    }
    else if (iVar2 == 0) {
      uStack_64 = 0x559a8d;
      auStack_e = (undefined1  [10])in_ST7;
      iVar2 = FUN_00561e87((double)fVar4,(double)fVar5,local_78);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = 1;
      goto LAB_005599fa;
    }
    uVar1 = 7;
  }
LAB_005599fa:
  if (DAT_0074dc40 != 0) {
    return uVar1;
  }
  auStack_e._6_4_ = 0x559a17;
  uVar1 = FUN_0055e1c0();
  return uVar1;
}


/* ==== 00559b55 FUN_00559b55 ==== */

void FUN_00559b55(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}


/* ==== 00559b90 FUN_00559b90 ==== */

uint * FUN_00559b90(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}


/* ==== 00559c4c FUN_00559c4c ==== */

void FUN_00559c4c(void)

{
  if (PTR_FUN_005c7b78 != (undefined *)0x0) {
    (*(code *)PTR_FUN_005c7b78)();
  }
  FUN_00559d34(&DAT_0058dca4,&DAT_0058dcbc);
  FUN_00559d34(&DAT_0058d000,&DAT_0058dca0);
  return;
}


/* ==== 00559c79 FUN_00559c79 ==== */

void FUN_00559c79(undefined4 param_1)

{
  FUN_00559c9b(param_1,0,0);
  return;
}


/* ==== 00559c8a __exit ==== */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_00559c9b(_Code,1,0);
  return;
}


/* ==== 00559c9b FUN_00559c9b ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559c9b(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_0074dca8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_0074dca4 = 1;
  DAT_0074dca0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_007503dc != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_007503d8 - 4), DAT_007503dc <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_007503dc <= puVar1);
    }
    FUN_00559d34(&DAT_0058dcc0,&DAT_0058dccc);
  }
  FUN_00559d34(&DAT_0058dcd0,&DAT_0058dcd8);
  if (param_3 != 0) {
    return;
  }
  DAT_0074dca8 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


/* ==== 00559d34 FUN_00559d34 ==== */

void FUN_00559d34(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/* ==== 00559d4e FUN_00559d4e ==== */

void FUN_00559d4e(LPVOID param_1)

{
  int iVar1;
  
  if (param_1 != (LPVOID)0x0) {
    iVar1 = FUN_0056205a(param_1);
    if (iVar1 != 0) {
      FUN_00562085(iVar1);
      return;
    }
    HeapFree(DAT_0075008c,0,param_1);
  }
  return;
}


/* ==== 00559d7d FUN_00559d7d ==== */

float10 FUN_00559d7d(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_0055fae8(DAT_005c7e70,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_0055f9b0();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_0055fae8(uVar2,0xffff);
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)FUN_0055f2c0();
        return fVar4;
      }
    }
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar1 = (double)fVar4;
    if ((dVar1 == param_1) || ((uVar2 & 0x20) != 0)) {
      FUN_0055fae8(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = (float10)FUN_0055f313(uVar5,0xc,param_1,dVar1,uVar2);
  return fVar4;
}


/* ==== 00559e50 FUN_00559e50 ==== */

void FUN_00559e50(void)

{
  float10 in_ST0;
  
  FUN_0055e2a8((double)in_ST0);
  FUN_00559e6d();
  return;
}


/* ==== 00559e6d FUN_00559e6d ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00559e6d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_005c8670, param_1 != 0)) {
      fVar1 = (float10)FUN_0055e24c();
    }
LAB_00559efc:
    if (DAT_0074dc40 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_0055e235();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = _DAT_005c8670;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00559efc;
      fVar1 = _DAT_005c867a;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -_DAT_005c867a;
      }
    }
    if (DAT_0074dc40 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}


/* ==== 00559f1b _malloc ==== */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *__nh_malloc_result;
  
  __nh_malloc_result = __nh_malloc(_Size,DAT_0074de78);
  return __nh_malloc_result;
}


/* ==== 00559f2d __nh_malloc ==== */

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_00559f59(_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_00562b5b(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


/* ==== 00559f59 FUN_00559f59 ==== */

void FUN_00559f59(uint param_1)

{
  int iVar1;
  
  if ((param_1 <= DAT_005c8bd4) && (iVar1 = FUN_005623b0(param_1), iVar1 != 0)) {
    return;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  HeapAlloc(DAT_0075008c,0,param_1 + 0xf & 0xfffffff0);
  return;
}


/* ==== 00559f8f FUN_00559f8f ==== */

void FUN_00559f8f(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _TIME_ZONE_INFORMATION time_zone_information;
  _SYSTEMTIME systemtime;
  _SYSTEMTIME systemtime_2;
  
  GetLocalTime(&systemtime_2);
  GetSystemTime(&systemtime);
  if (systemtime.wMinute == DAT_0074dcc0._2_2_) {
    if (systemtime.wHour == (WORD)DAT_0074dcc0) {
      if (systemtime.wDay == DAT_0074dcbc._2_2_) {
        if (systemtime.wMonth == DAT_0074dcb8._2_2_) {
          if (systemtime.wYear == (WORD)DAT_0074dcb8) goto LAB_0055a039;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&time_zone_information);
  if (DVar1 == 0xffffffff) {
    DAT_0074dcb0 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (time_zone_information.DaylightDate.wMonth != 0)) &&
          (time_zone_information.DaylightBias != 0)) {
    DAT_0074dcb0 = 1;
  }
  else {
    DAT_0074dcb0 = 0;
  }
  DAT_0074dcb8._0_2_ = systemtime.wYear;
  DAT_0074dcb8._2_2_ = systemtime.wMonth;
  DAT_0074dcbc._0_2_ = systemtime.wDayOfWeek;
  DAT_0074dcbc._2_2_ = systemtime.wDay;
  DAT_0074dcc0._0_2_ = systemtime.wHour;
  DAT_0074dcc0._2_2_ = systemtime.wMinute;
  DAT_0074dcc4._0_2_ = systemtime.wSecond;
  DAT_0074dcc4._2_2_ = systemtime.wMilliseconds;
LAB_0055a039:
  uVar2 = FUN_00560a8e(systemtime_2.wYear,systemtime_2.wMonth,systemtime_2.wDay,systemtime_2.wHour,
                       systemtime_2.wMinute,systemtime_2.wSecond,DAT_0074dcb0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}


/* ==== 0055a06b FUN_0055a06b ==== */

int FUN_0055a06b(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0xc) & 0x83) == 0) ||
     (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    DAT_0074dc60 = 0x16;
    iVar2 = -1;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_00562c10(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_0055a5de(param_1);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        *(undefined4 *)(param_1 + 0x18) = 0x200;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffc;
    }
    iVar2 = FUN_00562b76(*(undefined4 *)(param_1 + 0x10),param_2,param_3);
    iVar2 = (iVar2 != -1) - 1;
  }
  return iVar2;
}


/* ==== 0055a0f7 FUN_0055a0f7 ==== */

int FUN_0055a0f7(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int i;
  
  iVar4 = -1;
  i = 0;
  iVar5 = 0;
  piVar3 = &DAT_007500a0;
  do {
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = _malloc(0x100);
      if (puVar2 != (undefined4 *)0x0) {
        DAT_007501a0 = DAT_007501a0 + 0x20;
        (&DAT_007500a0)[i] = puVar2;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x40; puVar2 = puVar2 + 2) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar1 = (undefined4 *)(&DAT_007500a0)[i];
        }
        iVar4 = i << 5;
      }
      return iVar4;
    }
    puVar1 = puVar2 + 0x40;
    for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        *puVar2 = 0xffffffff;
        iVar4 = ((int)puVar2 - *piVar3 >> 3) + iVar5;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
    }
    piVar3 = piVar3 + 1;
    i = i + 1;
    iVar5 = iVar5 + 0x20;
    if (0x75019f < (int)piVar3) {
      return iVar4;
    }
  } while( true );
}


/* ==== 0055a18c FUN_0055a18c ==== */

undefined4 FUN_0055a18c(uint param_1,HANDLE param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_007501a0) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_005c7bd4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0055a1e2;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_0055a1e2:
      *(HANDLE *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}


/* ==== 0055a203 FUN_0055a203 ==== */

undefined4 FUN_0055a203(uint param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_007501a0) {
    iVar2 = (param_1 & 0x1f) * 8;
    piVar1 = (int *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_005c7bd4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0055a25c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0055a25c:
      *(undefined4 *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar2) = 0xffffffff;
      return 0;
    }
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}


/* ==== 0055a27d FUN_0055a27d ==== */

undefined4 FUN_0055a27d(uint param_1)

{
  if ((param_1 < DAT_007501a0) &&
     ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_007500a0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}


/* ==== 0055a2ba FUN_0055a2ba ==== */

uint FUN_0055a2ba(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_0055fb61(param_1);
  return uVar3;
}


/* ==== 0055a2d4 FUN_0055a2d4 ==== */

void FUN_0055a2d4(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  FUN_0055a5de(param_1);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffcf;
  if (uVar1 == 0xffffffff) {
    puVar2 = &DAT_005c8ac8;
  }
  else {
    puVar2 = (undefined *)((&DAT_007500a0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 8);
  }
  puVar2[4] = puVar2[4] & 0xfd;
  if ((*(uint *)(param_1 + 0xc) & 0x80) != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffc;
  }
  FUN_00562b76(uVar1,0,0);
  return;
}


/* ==== 0055a328 FUN_0055a328 ==== */

int FUN_0055a328(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t _strlen_result;
  int *piVar2;
  
  if (((DAT_007503d0 != 0) &&
      ((DAT_0074dc88 != (int *)0x0 ||
       (((DAT_0074dc90 != 0 && (iVar1 = FUN_00562da7(), iVar1 == 0)) && (DAT_0074dc88 != (int *)0x0)
        ))))) && (piVar2 = DAT_0074dc88, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar2 != (char *)0x0; piVar2 = piVar2 + 1) {
      _strlen_result = _strlen((char *)*piVar2);
      if (((_MaxCount < _strlen_result) && (((uchar *)*piVar2)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar2,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar2 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}


/* ==== 0055a3a5 FUN_0055a3a5 ==== */

void FUN_0055a3a5(char *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *param_1 = *param_2;
    param_1[1] = ':';
    param_1 = param_1 + 2;
  }
  if ((param_3 != (char *)0x0) && (cVar1 = *param_3, pcVar2 = param_3, cVar1 != '\0')) {
    do {
      pcVar3 = param_1;
      *pcVar3 = cVar1;
      cVar1 = pcVar2[1];
      param_1 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00562e15(param_3,pcVar2);
    if ((*pcVar2 != '/') && (*pcVar2 != '\\')) {
      *param_1 = '\\';
      param_1 = pcVar3 + 2;
    }
  }
  if (param_4 != (char *)0x0) {
    cVar1 = *param_4;
    while (cVar1 != '\0') {
      *param_1 = cVar1;
      pcVar2 = param_4 + 1;
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
      cVar1 = *pcVar2;
    }
  }
  if (param_5 == (char *)0x0) {
    *param_1 = '\0';
  }
  else {
    if ((*param_5 != '\0') && (*param_5 != '.')) {
      *param_1 = '.';
      param_1 = param_1 + 1;
    }
    do {
      cVar1 = *param_5;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      param_5 = param_5 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


/* ==== 0055a436 FUN_0055a436 ==== */

uint FUN_0055a436(uint param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    return param_1 & 0xff;
  }
  uVar2 = FUN_0055e48c(param_1,param_2);
  return uVar2;
}


/* ==== 0055a45a FUN_0055a45a ==== */

uint FUN_0055a45a(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((param_1 != 0xffffffff) &&
     ((uVar1 = param_2[3], (uVar1 & 1) != 0 || (((uVar1 & 0x80) != 0 && ((uVar1 & 2) == 0)))))) {
    if (param_2[2] == 0) {
      FUN_00562e5d(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != 0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      *param_2 = *param_2 + -1;
      *(char *)*param_2 = (char)param_1;
    }
    else {
      *param_2 = *param_2 + -1;
      if (*(char *)*param_2 != (char)param_1) {
        *param_2 = (int)((char *)*param_2 + 1);
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = param_2[3] & 0xffffffefU | 1;
    return param_1 & 0xff;
  }
  return 0xffffffff;
}


/* ==== 0055a4c8 FUN_0055a4c8 ==== */

undefined4 FUN_0055a4c8(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00562ea1(param_1);
  *(undefined8 *)param_2 = uVar2;
  uVar1 = 0xffffffff;
  if ((*param_2 & param_2[1]) != 0xffffffff) {
    uVar1 = 0;
  }
  return uVar1;
}


/* ==== 0055a4ea FUN_0055a4ea ==== */

void FUN_0055a4ea(undefined4 param_1,undefined4 *param_2)

{
  FUN_00563028(param_1,*param_2,param_2[1],0);
  return;
}


/* ==== 0055a502 FUN_0055a502 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055a502(FILE *file,int *param_2,uint param_3,uint size)

{
  uint _Size;
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_3 == 4) ||
     (((1 < size && (size < 0x80000000)) && ((param_3 == 0 || (param_3 == 0x40)))))) {
    _Size = size & 0xfffffffe;
    FUN_0055a5de(file);
    __freebuf(file);
    *(ushort *)&file->_flag = (ushort)file->_flag & 0xc2f3;
    if ((param_3 & 4) == 0) {
      if (param_2 == (int *)0x0) {
        param_2 = _malloc(_Size);
        if (param_2 == (int *)0x0) {
          _DAT_0074dc5c = _DAT_0074dc5c + 1;
          return 0xffffffff;
        }
        *(ushort *)&file->_flag = (ushort)file->_flag | 0x408;
      }
      else {
        file->_flag = file->_flag | 0x500;
      }
    }
    else {
      file->_flag = file->_flag | 4;
      param_2 = &file->_charbuf;
      _Size = 2;
    }
    file->_cnt = 0;
    file->_bufsiz = _Size;
    file->_base = (char *)param_2;
    file->_ptr = (char *)param_2;
  }
  else {
    local_8 = 0xffffffff;
  }
  return local_8;
}


/* ==== 0055a5a3 FUN_0055a5a3 ==== */

int FUN_0055a5a3(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = FUN_0055a5de(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_005630b8(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* ==== 0055a5de FUN_0055a5de ==== */

undefined4 FUN_0055a5de(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar3 = *param_1 - param_1[2];
    if (0 < iVar3) {
      iVar1 = FUN_0055fe30(param_1[4],param_1[2],iVar3);
      if (iVar1 == iVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}


/* ==== 0055a643 flsall ==== */

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  int iVar1;
  int j;
  int i;
  int iVar2;
  
  i = 0;
  j = 0;
  iVar2 = 0;
  if (0 < DAT_00751400) {
    do {
      iVar1 = *(int *)(DAT_007503e0 + i * 4);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xc) & 0x83) != 0)) {
        if (param_1 == 1) {
          iVar1 = FUN_0055a5a3(iVar1);
          if (iVar1 != -1) {
            j = j + 1;
          }
        }
        else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
          iVar1 = FUN_0055a5a3(iVar1);
          if (iVar1 == -1) {
            iVar2 = -1;
          }
        }
      }
      i = i + 1;
    } while (i < DAT_00751400);
  }
  if (param_1 != 1) {
    j = iVar2;
  }
  return j;
}


/* ==== 0055a6b0 FUN_0055a6b0 ==== */

undefined * FUN_0055a6b0(void)

{
  return PTR_PTR_005c7ec0;
}


/* ==== 0055a6c0 FUN_0055a6c0 ==== */

int FUN_0055a6c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int i;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  i = -1;
  do {
    i = i + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return i;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return i;
}


/* ==== 0055a6fe FUN_0055a6fe ==== */

uint FUN_0055a6fe(void)

{
  uint uVar1;
  BOOL BVar2;
  byte *pbVar3;
  _INPUT_RECORD input_record;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_005c8210 != 0xffffffff) {
    uVar1 = DAT_005c8210 & 0xff;
    DAT_005c8210 = 0xffffffff;
    return uVar1;
  }
  if (DAT_005c8bd8 == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  if (DAT_005c8bd8 == (HANDLE)0xfffffffe) {
    FUN_0056310f();
  }
  GetConsoleMode(DAT_005c8bd8,&local_c);
  SetConsoleMode(DAT_005c8bd8,0);
  do {
    do {
      BVar2 = ReadConsoleInputA(DAT_005c8bd8,&input_record,1,&local_8);
      if ((BVar2 == 0) || (local_8 == 0)) {
        uVar1 = 0xffffffff;
        goto LAB_0055a7bd;
      }
    } while ((input_record.EventType != 1) || (input_record.Event.KeyEvent.bKeyDown == 0));
    uVar1 = (uint)(byte)input_record.Event.MouseEvent.dwControlKeyState._2_1_;
    if (uVar1 != 0) goto LAB_0055a7bd;
    pbVar3 = (byte *)FUN_0055a88d(&input_record.Event);
  } while (pbVar3 == (byte *)0x0);
  uVar1 = (uint)*pbVar3;
  DAT_005c8210 = (uint)pbVar3[1];
LAB_0055a7bd:
  SetConsoleMode(DAT_005c8bd8,local_c);
  return uVar1;
}


/* ==== 0055a7cf FUN_0055a7cf ==== */

undefined4 FUN_0055a7cf(void)

{
  DWORD nLength;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  short *psVar5;
  DWORD local_c;
  DWORD i;
  
  if (DAT_005c8210 == -1) {
    if (DAT_005c8bd8 == (HANDLE)0xfffffffe) {
      FUN_0056310f();
    }
    if (DAT_005c8bd8 != (HANDLE)0xffffffff) {
      psVar5 = (short *)&stack0xffffffec;
      BVar1 = GetNumberOfConsoleInputEvents(DAT_005c8bd8,&local_c);
      nLength = local_c;
      if ((BVar1 != 0) && (local_c != 0)) {
        FUN_00559400();
        if (&stack0x00000000 != &DAT_00000014) {
          BVar1 = PeekConsoleInputA(DAT_005c8bd8,(PINPUT_RECORD)&stack0xffffffec,nLength,&i);
          if ((((BVar1 != 0) && (i != 0)) && (i <= local_c)) && (i != 0)) {
            piVar4 = (int *)&stack0xfffffff0;
            do {
              if ((*psVar5 == 1) && (*piVar4 != 0)) {
                if (*(char *)((int)piVar4 + 10) != '\0') goto LAB_0055a888;
                iVar2 = FUN_0055a88d(piVar4);
                if (iVar2 != 0) goto LAB_0055a888;
              }
              i = i - 1;
              psVar5 = psVar5 + 10;
              piVar4 = piVar4 + 5;
            } while (i != 0);
          }
        }
      }
    }
    uVar3 = 0;
  }
  else {
LAB_0055a888:
    uVar3 = 1;
  }
  return uVar3;
}


/* ==== 0055a88d FUN_0055a88d ==== */

char * FUN_0055a88d(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int i;
  short *psVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 3) == 0) {
      if ((uVar1 & 0xc) == 0) {
        if ((uVar1 & 0x10) == 0) {
          pcVar2 = &DAT_005c7f48 + (uint)*(ushort *)(param_1 + 8) * 8;
        }
        else {
          pcVar2 = &DAT_005c7f4a + (uint)*(ushort *)(param_1 + 8) * 8;
        }
      }
      else {
        pcVar2 = &DAT_005c7f4c + (uint)*(ushort *)(param_1 + 8) * 8;
      }
    }
    else {
      pcVar2 = &DAT_005c7f4e + (uint)*(ushort *)(param_1 + 8) * 8;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 != -0x20)) || (pcVar2[1] == '\0')) {
      pcVar2 = (char *)0x0;
    }
  }
  else {
    pcVar2 = (char *)0x0;
    i = 0;
    psVar3 = &DAT_005c7ed0;
    do {
      if (*psVar3 == *(short *)(param_1 + 8)) {
        if ((uVar1 & 3) != 0) {
          return (char *)(i * 10 + 0x5c7ed8);
        }
        if ((uVar1 & 0xc) != 0) {
          return (char *)(i * 10 + 0x5c7ed6);
        }
        if ((uVar1 & 0x10) != 0) {
          return (char *)(i * 10 + 0x5c7ed4);
        }
        return (char *)(i * 10 + 0x5c7ed2);
      }
      psVar3 = psVar3 + 5;
      i = i + 1;
    } while ((int)psVar3 < 0x5c7f48);
  }
  return pcVar2;
}


/* ==== 0055a94d FUN_0055a94d ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055a94d(char *str)

{
  undefined4 uVar1;
  size_t _strlen_result;
  size_t sVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  uVar1 = FUN_0055f00e(&DAT_005c7bf8);
  _strlen_result = _strlen(str);
  sVar2 = FUN_00558c1d(str,1,_strlen_result,&DAT_005c7bf8);
  if (sVar2 == _strlen_result) {
    _DAT_005c7bfc = _DAT_005c7bfc + -1;
    if (_DAT_005c7bfc < 0) {
      FUN_0055e48c(10,&DAT_005c7bf8);
    }
    else {
      *DAT_005c7bf8 = 10;
      DAT_005c7bf8 = DAT_005c7bf8 + 1;
    }
    uVar3 = 0;
  }
  FUN_0055f09b(uVar1,&DAT_005c7bf8);
  return uVar3;
}


/* ==== 0055a9b4 FUN_0055a9b4 ==== */

void * FUN_0055a9b4(LPVOID param_1,uint size)

{
  void *_malloc_result;
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (param_1 == (LPVOID)0x0) {
    _malloc_result = _malloc(size);
  }
  else {
    if (size == 0) {
      FUN_00559d4e(param_1);
    }
    else {
      do {
        if (size < 0xffffffe1) {
          iVar1 = FUN_0056205a(param_1);
          if (iVar1 == 0) {
            if (size == 0) {
              size = 1;
            }
            size = size + 0xf & 0xfffffff0;
            pvVar3 = HeapReAlloc(DAT_0075008c,0,param_1,size);
          }
          else {
            if (size <= DAT_005c8bd4) {
              iVar2 = FUN_00562865(iVar1,param_1,size);
              pvVar3 = param_1;
              if (iVar2 == 0) {
                pvVar3 = (LPVOID)FUN_005623b0(size);
                if (pvVar3 == (LPVOID)0x0) goto LAB_0055aa4d;
                uVar4 = *(int *)((int)param_1 + -4) - 1;
                if (size <= uVar4) {
                  uVar4 = size;
                }
                FUN_0055b3c0(pvVar3,param_1,uVar4);
                FUN_00562085(iVar1,param_1);
              }
              if (pvVar3 != (LPVOID)0x0) {
                return pvVar3;
              }
            }
LAB_0055aa4d:
            if (size == 0) {
              size = 1;
            }
            size = size + 0xf & 0xfffffff0;
            pvVar3 = HeapAlloc(DAT_0075008c,0,size);
            if (pvVar3 == (LPVOID)0x0) goto LAB_0055aab0;
            uVar4 = *(int *)((int)param_1 + -4) - 1;
            if (size <= uVar4) {
              uVar4 = size;
            }
            FUN_0055b3c0(pvVar3,param_1,uVar4);
            FUN_00562085(iVar1,param_1);
          }
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
        }
LAB_0055aab0:
        if (DAT_0074de78 == 0) {
          return (void *)0x0;
        }
        iVar1 = FUN_00562b5b(size);
      } while (iVar1 != 0);
    }
    _malloc_result = (void *)0x0;
  }
  return _malloc_result;
}


/* ==== 0055aaf8 FUN_0055aaf8 ==== */

void FUN_0055aaf8(void)

{
  __cintrindisp1();
  return;
}


/* ==== 0055ab02 FUN_0055ab02 ==== */

void FUN_0055ab02(void)

{
  __cintrindisp1();
  return;
}


/* ==== 0055ab09 FUN_0055ab09 ==== */

void FUN_0055ab09(void)

{
  __cintrindisp1();
  return;
}


/* ==== 0055ab10 FUN_0055ab10 ==== */

undefined4 FUN_0055ab10(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0055f00e(&DAT_005c7bf8);
  uVar2 = FUN_0055e5a1(&DAT_005c7bf8,param_1,&stack0x00000008);
  FUN_0055f09b(uVar1,&DAT_005c7bf8);
  return uVar2;
}


/* ==== 0055ab50 _strncmp ==== */

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t i;
  int j;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = 0;
  i = _MaxCount;
  pcVar4 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (i == 0) break;
      i = i - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    j = _MaxCount - i;
    do {
      pcVar4 = _Str2;
      pcVar5 = _Str1;
      if (j == 0) break;
      j = j + -1;
      pcVar5 = _Str1 + 1;
      pcVar4 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar4;
      _Str1 = pcVar5;
    } while (cVar1 == cVar2);
    uVar3 = 0;
    if ((byte)pcVar4[-1] <= (byte)pcVar5[-1]) {
      if (pcVar4[-1] == pcVar5[-1]) {
        return 0;
      }
      uVar3 = 0xfffffffe;
    }
    uVar3 = ~uVar3;
  }
  return uVar3;
}


/* ==== 0055ab88 FUN_0055ab88 ==== */

void * FUN_0055ab88(int param_1,int param_2)

{
  void *_Dst;
  LPVOID pvVar1;
  int iVar2;
  uint _Size;
  uint uVar3;
  
  _Size = param_1 * param_2;
  uVar3 = _Size;
  if (_Size < 0xffffffe1) {
    if (_Size == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
  }
  do {
    if (uVar3 < 0xffffffe1) {
      if ((_Size < DAT_005c8bd4 || _Size - DAT_005c8bd4 == 0) &&
         (_Dst = (void *)FUN_005623b0(_Size), _Dst != (void *)0x0)) {
        _memset(_Dst,0,_Size);
        return _Dst;
      }
      pvVar1 = HeapAlloc(DAT_0075008c,8,uVar3);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
    }
    if (DAT_0074de78 == 0) {
      return (void *)0x0;
    }
    iVar2 = FUN_00562b5b(uVar3);
  } while (iVar2 != 0);
  return (void *)0x0;
}


/* ==== 0055ac05 FUN_0055ac05 ==== */

void FUN_0055ac05(undefined4 param_1,undefined4 param_2,FILE *file)

{
  if ((file->_flag & 0x83) != 0) {
    FUN_005588fd(file);
  }
  file->_base = (char *)0x0;
  file->_ptr = (char *)0x0;
  file->_flag = 0;
  file->_cnt = 0;
  FUN_0055f0d8(param_1,param_2,0x40,file);
  return;
}


/* ==== 0055ac39 FUN_0055ac39 ==== */

uint FUN_0055ac39(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_005c8378) {
    uVar1 = FUN_0055c336(param_1,4);
    return uVar1;
  }
  return (byte)PTR_s__005c8384[param_1 * 2] & 4;
}


/* ==== 0055ac61 FUN_0055ac61 ==== */

uint FUN_0055ac61(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_005c8378) {
    uVar1 = FUN_0055c336(param_1,8);
    return uVar1;
  }
  return (byte)PTR_s__005c8384[param_1 * 2] & 8;
}


/* ==== 0055ac90 _strncat ==== */

/* Library Function - Single Match
    _strncat
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint j;
  uint i;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_0055acba;
    i = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)i != 0);
  goto LAB_0055aceb;
  while( true ) {
    if ((i & 0xff0000) == 0) {
      puVar4 = (uint *)((int)puVar4 + 2);
      goto LAB_0055acfb;
    }
    if ((i & 0xff000000) == 0) break;
LAB_0055acba:
    do {
      puVar4 = puVar3;
      puVar3 = puVar4 + 1;
    } while (((*puVar4 ^ 0xffffffff ^ *puVar4 + 0x7efefeff) & 0x81010100) == 0);
    i = *puVar4;
    if ((char)i == '\0') goto LAB_0055acfb;
    if ((char)(i >> 8) == '\0') {
      puVar4 = (uint *)((int)puVar4 + 1);
      goto LAB_0055acfb;
    }
  }
LAB_0055aceb:
  puVar4 = (uint *)((int)puVar3 + -1);
LAB_0055acfb:
  if (((uint)_Source & 3) == 0) {
    j = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      i = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_0055ad4a;
      *(byte *)puVar4 = bVar1;
      puVar4 = (uint *)((int)puVar4 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_0055ad40;
    } while (((uint)_Source & 3) != 0);
    j = _Count >> 2;
  }
  do {
    if (j == 0) {
      for (i = _Count & 3; i != 0; i = i - 1) {
        j = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar4 = (byte)j;
        puVar4 = (uint *)((int)puVar4 + 1);
        if ((byte)j == 0) {
          return _Dest;
        }
      }
LAB_0055ad40:
      *(byte *)puVar4 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    i = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)i == '\0') {
LAB_0055ad4a:
        *(byte *)puVar4 = (byte)i;
        return _Dest;
      }
      if ((char)(i >> 8) == '\0') {
        *(short *)puVar4 = (short)i;
        return _Dest;
      }
      if ((i & 0xff0000) == 0) {
        *(short *)puVar4 = (short)i;
        *(byte *)((int)puVar4 + 2) = 0;
        return _Dest;
      }
      if ((i & 0xff000000) == 0) {
        *puVar4 = i;
        return _Dest;
      }
    }
    *puVar4 = i;
    puVar4 = puVar4 + 1;
    j = j - 1;
  } while( true );
}


/* ==== 0055adb3 FUN_0055adb3 ==== */

float10 FUN_0055adb3(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  size_t _strlen_result;
  uint *puVar2;
  byte *_Str;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  _Str = param_1;
  while( true ) {
    if (DAT_005c8378 < 2) {
      uVar1 = (byte)PTR_s__005c8384[(uint)*_Str * 2] & 8;
    }
    else {
      uVar1 = FUN_0055c336(*_Str,8);
    }
    if (uVar1 == 0) break;
    _Str = _Str + 1;
  }
  uVar5 = 0;
  uVar4 = 0;
  _strlen_result = _strlen((char *)_Str);
  puVar2 = (uint *)FUN_00561206(_Str,_strlen_result,uVar4,uVar5);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _Str + puVar2[1];
  }
  uVar1 = *puVar2;
  if ((uVar1 & 0x240) == 0) {
    if ((uVar1 & 0x81) == 0) {
      if ((uVar1 & 0x100) == 0) {
        return (float10)*(double *)(puVar2 + 4);
      }
      fVar3 = (float10)0;
    }
    else {
      fVar3 = (float10)INFINITY;
      if (*_Str == 0x2d) {
        fVar3 = -fVar3;
      }
    }
    DAT_0074dc60 = 0x22;
  }
  else {
    fVar3 = (float10)0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
  return fVar3;
}


/* ==== 0055ae4d FUN_0055ae4d ==== */

void FUN_0055ae4d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0055ae64(param_1,param_2,param_3,0);
  return;
}


/* ==== 0055ae64 FUN_0055ae64 ==== */

uint FUN_0055ae64(byte *param_1,int *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint local_c;
  byte *local_8;
  
  local_c = 0;
  bVar5 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_005c8378 < 2) {
      uVar2 = (byte)PTR_s__005c8384[(uint)bVar5 * 2] & 8;
    }
    else {
      uVar2 = FUN_0055c336(bVar5,8);
    }
    if (uVar2 == 0) break;
    bVar5 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar5 == 0x2d) {
    param_4 = param_4 | 2;
LAB_0055aebf:
    bVar5 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar5 == 0x2b) goto LAB_0055aebf;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar5 != 0x30) {
      param_3 = 10;
      goto LAB_0055af29;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = 8;
      goto LAB_0055af29;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar5 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar5 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_0055af29:
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    uVar6 = (uint)bVar5;
    if (DAT_005c8378 < 2) {
      uVar3 = (byte)PTR_s__005c8384[uVar6 * 2] & 4;
    }
    else {
      uVar3 = FUN_0055c336(uVar6,4);
    }
    if (uVar3 == 0) {
      if (DAT_005c8378 < 2) {
        uVar6 = *(ushort *)(PTR_s__005c8384 + uVar6 * 2) & 0x103;
      }
      else {
        uVar6 = FUN_0055c336(uVar6,0x103);
      }
      if (uVar6 == 0) {
LAB_0055afd5:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_c)))))))) {
          DAT_0074dc60 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_c = 0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return -local_c;
      }
      iVar4 = FUN_00559576((int)(char)bVar5);
      uVar6 = iVar4 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar5 - 0x30;
    }
    if (param_3 <= uVar6) goto LAB_0055afd5;
    if ((local_c < uVar2) ||
       ((local_c == uVar2 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_c = local_c * param_3 + uVar6;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar5 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}


/* ==== 0055b06c FUN_0055b06c ==== */

void FUN_0055b06c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0055ae64(param_1,param_2,param_3,1);
  return;
}


/* ==== 0055b084 __setjmp3 ==== */

/* Library Function - Single Match
    __setjmp3
   
   Library: Visual Studio */

undefined4 __setjmp3(undefined4 *param_1,int param_2,void *param_3,undefined4 param_4)

{
  void *pvVar1;
  uint i;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  undefined4 unaff_EDI;
  undefined4 *puVar3;
  undefined4 unaff_retaddr;
  
  *param_1 = unaff_EBP;
  param_1[1] = unaff_EBX;
  param_1[2] = unaff_EDI;
  param_1[3] = unaff_ESI;
  param_1[4] = register0x00000010;
  param_1[5] = unaff_retaddr;
  param_1[8] = 0x56433230;
  param_1[9] = 0;
  pvVar1 = ExceptionList;
  param_1[6] = ExceptionList;
  if (pvVar1 == (void *)0xffffffff) {
    param_1[7] = 0xffffffff;
  }
  else if ((param_2 == 0) || (param_1[9] = param_3, pvVar1 = param_3, param_2 == 1)) {
    param_1[7] = *(undefined4 *)((int)pvVar1 + 0xc);
  }
  else {
    param_1[7] = param_4;
    i = param_2 - 2;
    if (i != 0) {
      puVar2 = (undefined4 *)&stack0x00000014;
      puVar3 = param_1 + 10;
      if (6 < i) {
        i = 6;
      }
      for (; i != 0; i = i - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return 0;
}


/* ==== 0055b100 _longjmp ==== */

/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    _longjmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl _longjmp(int *_Buf,int _Value)

{
  PVOID target_frame;
  int iVar1;
  
  target_frame = (PVOID)_Buf[6];
  if (target_frame != ExceptionList) {
    __global_unwind2(target_frame);
  }
  if (target_frame != (PVOID)0x0) {
    iVar1 = FUN_005634b0(_Buf + 8);
    if ((iVar1 == 0) || (_Buf[8] != 0x56433230)) {
      __local_unwind2(target_frame,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  FUN_005580c6(0);
                    /* WARNING: Could not recover jumptable at 0x0055b175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_Buf[5])();
  return;
}


/* ==== 0055b179 FUN_0055b179 ==== */

int * FUN_0055b179(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1;
  if (*param_1 < 0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00563515();
    iVar2 = *piVar1;
    if ((iVar2 < 0x3f481) || (0x7ffc0b7e < iVar2)) {
      piVar1 = (int *)FUN_00563a74(piVar1);
      iVar3 = FUN_00563788(piVar1);
      iVar2 = *piVar1;
      if (iVar3 != 0) {
        iVar2 = iVar2 - DAT_005c8c60;
      }
      param_1 = (int *)(iVar2 - DAT_005c8c58);
      iVar2 = (int)param_1 % 0x3c;
      *piVar1 = iVar2;
      if (iVar2 < 0) {
        *piVar1 = iVar2 + 0x3c;
        param_1 = (int *)((int)param_1 + -0x3c);
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar1[1]);
      iVar2 = (int)param_1 % 0x3c;
      piVar1[1] = iVar2;
      if (iVar2 < 0) {
        piVar1[1] = iVar2 + 0x3c;
        param_1 = (int *)((int)param_1 + -0x3c);
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar1[2]);
      iVar2 = (int)param_1 % 0x18;
      piVar1[2] = iVar2;
      if (iVar2 < 0) {
        piVar1[2] = iVar2 + 0x18;
        param_1 = (int *)((int)param_1 + -0x18);
      }
      iVar2 = (int)param_1 / 0x18;
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          return piVar1;
        }
        piVar1[6] = (piVar1[6] + 7 + iVar2) % 7;
        piVar1[3] = piVar1[3] + iVar2;
        if (piVar1[3] < 1) {
          piVar1[5] = piVar1[5] + -1;
          piVar1[3] = piVar1[3] + 0x1f;
          piVar1[7] = 0x16c;
          piVar1[4] = 0xb;
          return piVar1;
        }
      }
      else {
        piVar1[6] = (piVar1[6] + iVar2) % 7;
        piVar1[3] = piVar1[3] + iVar2;
      }
      piVar1[7] = piVar1[7] + iVar2;
    }
    else {
      param_1 = (int *)(iVar2 - DAT_005c8c58);
      piVar1 = (int *)FUN_00563a74(&param_1);
      if ((DAT_005c8c5c != 0) && (iVar2 = FUN_00563788(piVar1), iVar2 != 0)) {
        param_1 = (int *)((int)param_1 - DAT_005c8c60);
        piVar1 = (int *)FUN_00563a74(&param_1);
        piVar1[8] = 1;
      }
    }
  }
  return piVar1;
}


/* ==== 0055b2d9 FUN_0055b2d9 ==== */

int FUN_0055b2d9(char *str,undefined4 param_2)

{
  size_t _strlen_result;
  undefined4 uVar1;
  size_t sVar2;
  
  _strlen_result = _strlen(str);
  uVar1 = FUN_0055f00e(param_2);
  sVar2 = FUN_00558c1d(str,1,_strlen_result,param_2);
  FUN_0055f09b(uVar1,param_2);
  return (sVar2 == _strlen_result) - 1;
}


/* ==== 0055b320 _strlen ==== */

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_0055b340;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_0055b373:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_0055b340:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_0055b373;
}


/* ==== 0055b39c FUN_0055b39c ==== */

void FUN_0055b39c(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}


/* ==== 0055b3c0 FUN_0055b3c0 ==== */

undefined4 * FUN_0055b3c0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint i;
  undefined4 *puVar1;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar1 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar1 & 3) == 0) {
      i = param_3 >> 2;
      param_3 = param_3 & 3;
      if (7 < i) {
        for (; i != 0; i = i - 1) {
          *puVar1 = *param_2;
          param_2 = param_2 + -1;
          puVar1 = puVar1 + -1;
        }
        switch(param_3) {
        case 0:
          return param_1;
        case 2:
          goto switchD_0055b577_caseD_2;
        case 3:
          goto switchD_0055b577_caseD_3;
        }
        goto switchD_0055b577_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_0055b577_caseD_0;
      case 1:
        goto switchD_0055b577_caseD_1;
      case 2:
        goto switchD_0055b577_caseD_2;
      case 3:
        goto switchD_0055b577_caseD_3;
      default:
        i = param_3 - ((uint)puVar1 & 3);
        switch((uint)puVar1 & 3) {
        case 1:
          param_3 = i & 3;
          *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
          param_2 = (undefined4 *)((int)param_2 + -1);
          i = i >> 2;
          puVar1 = (undefined4 *)((int)puVar1 - 1);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar1 = *param_2;
              param_2 = param_2 + -1;
              puVar1 = puVar1 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0055b577_caseD_2;
            case 3:
              goto switchD_0055b577_caseD_3;
            }
            goto switchD_0055b577_caseD_1;
          }
          break;
        case 2:
          param_3 = i & 3;
          *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
          i = i >> 2;
          *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
          param_2 = (undefined4 *)((int)param_2 + -2);
          puVar1 = (undefined4 *)((int)puVar1 - 2);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar1 = *param_2;
              param_2 = param_2 + -1;
              puVar1 = puVar1 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0055b577_caseD_2;
            case 3:
              goto switchD_0055b577_caseD_3;
            }
            goto switchD_0055b577_caseD_1;
          }
          break;
        case 3:
          param_3 = i & 3;
          *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
          *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
          i = i >> 2;
          *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)param_2 + 1);
          param_2 = (undefined4 *)((int)param_2 + -3);
          puVar1 = (undefined4 *)((int)puVar1 - 3);
          if (7 < i) {
            for (; i != 0; i = i - 1) {
              *puVar1 = *param_2;
              param_2 = param_2 + -1;
              puVar1 = puVar1 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0055b577_caseD_2;
            case 3:
              goto switchD_0055b577_caseD_3;
            }
            goto switchD_0055b577_caseD_1;
          }
        }
      }
    }
    switch(i) {
    case 7:
      puVar1[7 - i] = param_2[7 - i];
    case 6:
      puVar1[6 - i] = param_2[6 - i];
    case 5:
      puVar1[5 - i] = param_2[5 - i];
    case 4:
      puVar1[4 - i] = param_2[4 - i];
    case 3:
      puVar1[3 - i] = param_2[3 - i];
    case 2:
      puVar1[2 - i] = param_2[2 - i];
    case 1:
      puVar1[1 - i] = param_2[1 - i];
      param_2 = param_2 + -i;
      puVar1 = puVar1 + -i;
    }
    switch(param_3) {
    case 1:
switchD_0055b577_caseD_1:
      *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
      return param_1;
    case 2:
switchD_0055b577_caseD_2:
      *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
      return param_1;
    case 3:
switchD_0055b577_caseD_3:
      *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
      *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)param_2 + 1);
      return param_1;
    }
switchD_0055b577_caseD_0:
    return param_1;
  }
  puVar1 = param_1;
  if (((uint)param_1 & 3) == 0) {
    i = param_3 >> 2;
    param_3 = param_3 & 3;
    if (7 < i) {
      for (; i != 0; i = i - 1) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        puVar1 = puVar1 + 1;
      }
      switch(param_3) {
      case 0:
        return param_1;
      case 2:
        goto switchD_0055b3f5_caseD_2;
      case 3:
        goto switchD_0055b3f5_caseD_3;
      }
      goto switchD_0055b3f5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_0055b3f5_caseD_0;
    case 1:
      goto switchD_0055b3f5_caseD_1;
    case 2:
      goto switchD_0055b3f5_caseD_2;
    case 3:
      goto switchD_0055b3f5_caseD_3;
    default:
      i = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        param_3 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        i = i >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar1 = (undefined4 *)((int)param_1 + 3);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar1 = *param_2;
            param_2 = param_2 + 1;
            puVar1 = puVar1 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0055b3f5_caseD_2;
          case 3:
            goto switchD_0055b3f5_caseD_3;
          }
          goto switchD_0055b3f5_caseD_1;
        }
        break;
      case 2:
        param_3 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        i = i >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar1 = (undefined4 *)((int)param_1 + 2);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar1 = *param_2;
            param_2 = param_2 + 1;
            puVar1 = puVar1 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0055b3f5_caseD_2;
          case 3:
            goto switchD_0055b3f5_caseD_3;
          }
          goto switchD_0055b3f5_caseD_1;
        }
        break;
      case 3:
        param_3 = i & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        i = i >> 2;
        puVar1 = (undefined4 *)((int)param_1 + 1);
        if (7 < i) {
          for (; i != 0; i = i - 1) {
            *puVar1 = *param_2;
            param_2 = param_2 + 1;
            puVar1 = puVar1 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0055b3f5_caseD_2;
          case 3:
            goto switchD_0055b3f5_caseD_3;
          }
          goto switchD_0055b3f5_caseD_1;
        }
      }
    }
  }
  switch(i) {
  case 7:
    puVar1[i - 7] = param_2[i - 7];
  case 6:
    puVar1[i - 6] = param_2[i - 6];
  case 5:
    puVar1[i - 5] = param_2[i - 5];
  case 4:
    puVar1[i - 4] = param_2[i - 4];
  case 3:
    puVar1[i - 3] = param_2[i - 3];
  case 2:
    puVar1[i - 2] = param_2[i - 2];
  case 1:
    puVar1[i - 1] = param_2[i - 1];
    param_2 = param_2 + i;
    puVar1 = puVar1 + i;
  }
  switch(param_3) {
  case 1:
switchD_0055b3f5_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_0055b3f5_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_0055b3f5_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_0055b3f5_caseD_0:
  return param_1;
}


/* ==== 0055b700 _memset ==== */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint i;
  size_t sVar2;
  uint *puVar3;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar3 = _Dst;
  if (3 < _Size) {
    i = -(int)_Dst & 3;
    sVar2 = _Size;
    if (i != 0) {
      sVar2 = _Size - i;
      do {
        *(undefined1 *)puVar3 = (undefined1)_Val;
        puVar3 = (uint *)((int)puVar3 + 1);
        i = i - 1;
      } while (i != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar2 & 3;
    i = sVar2 >> 2;
    if (i != 0) {
      for (; i != 0; i = i - 1) {
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar3 = (char)uVar1;
    puVar3 = (uint *)((int)puVar3 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


/* ==== 0055b758 FUN_0055b758 ==== */

uint FUN_0055b758(uint param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  
  piVar2 = param_2;
  if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
LAB_0055b82a:
    piVar2 = param_2 + 1;
    *piVar2 = *piVar2 + -2;
    if (*piVar2 < 0) {
      param_1 = FUN_00563b6d(param_1 & 0xffff,param_2);
    }
    else {
      *(undefined2 *)*param_2 = (undefined2)param_1;
      *param_2 = *param_2 + 2;
    }
    return param_1;
  }
  uVar6 = param_2[4];
  if (uVar6 == 0xffffffff) {
    puVar4 = &DAT_005c8ac8;
  }
  else {
    puVar4 = (undefined *)((&DAT_007500a0)[(int)uVar6 >> 5] + (uVar6 & 0x1f) * 8);
  }
  if ((puVar4[4] & 0x80) == 0) goto LAB_0055b82a;
  iVar5 = FUN_00563c91(&param_2,param_1);
  if (iVar5 == -1) {
    DAT_0074dc60 = 0x2a;
    return 0xffff;
  }
  if (iVar5 == 1) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    bVar3 = (byte)param_2;
    if (-1 < *piVar1) {
      *(byte *)*piVar2 = (byte)param_2;
LAB_0055b7cf:
      uVar6 = (uint)(byte)param_2;
      *piVar2 = *piVar2 + 1;
      goto LAB_0055b7e0;
    }
  }
  else {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar6 = FUN_0055e48c((int)(char)(byte)param_2,piVar2);
    }
    else {
      *(byte *)*piVar2 = (byte)param_2;
      *piVar2 = *piVar2 + 1;
      uVar6 = (uint)param_2 & 0xff;
    }
    if (uVar6 == 0xffffffff) {
      return 0xffff;
    }
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    bVar3 = param_2._1_1_;
    if (-1 < *piVar1) {
      *(byte *)*piVar2 = param_2._1_1_;
      param_2._0_1_ = param_2._1_1_;
      goto LAB_0055b7cf;
    }
  }
  uVar6 = FUN_0055e48c((int)(char)bVar3,piVar2);
LAB_0055b7e0:
  if (uVar6 == 0xffffffff) {
    return 0xffff;
  }
  return param_1 & 0xffff;
}


/* ==== 0055b84d FUN_0055b84d ==== */

uint FUN_0055b84d(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  short sVar6;
  
  piVar3 = param_2;
  uVar2 = param_1;
  sVar6 = (short)param_1;
  if (sVar6 == -1) {
    return 0xffff;
  }
  uVar1 = param_2[3];
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x80) == 0) {
      return 0xffff;
    }
    if ((uVar1 & 2) != 0) {
      return 0xffff;
    }
  }
  if (param_2[2] == 0) {
    FUN_00562e5d(param_2);
  }
  if ((piVar3[3] & 0x40U) == 0) {
    uVar1 = piVar3[4];
    if (uVar1 == 0xffffffff) {
      puVar5 = &DAT_005c8ac8;
    }
    else {
      puVar5 = (undefined *)((&DAT_007500a0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 8);
    }
    if ((puVar5[4] & 0x80) != 0) {
      iVar4 = FUN_00563c91(&param_1,uVar2);
      if (iVar4 == -1) {
        DAT_0074dc60 = 0x2a;
        return 0xffff;
      }
      if (*piVar3 == piVar3[2]) {
        if (piVar3[1] != 0) {
          return 0xffff;
        }
        *piVar3 = *piVar3 + iVar4;
      }
      if (iVar4 != 1) {
        *piVar3 = *piVar3 + -1;
        *(undefined1 *)*piVar3 = param_1._1_1_;
      }
      *piVar3 = *piVar3 + -1;
      *(undefined1 *)*piVar3 = (undefined1)param_1;
      piVar3[1] = piVar3[1] + iVar4;
      piVar3[3] = piVar3[3] & 0xffffffefU | 1;
      return uVar2 & 0xffff;
    }
  }
  if (*piVar3 == piVar3[2]) {
    if (piVar3[1] != 0) {
      return 0xffff;
    }
    *piVar3 = *piVar3 + 2;
  }
  piVar3[1] = piVar3[1] + 2;
  *piVar3 = *piVar3 + -2;
  piVar3[3] = piVar3[3] & 0xffffffefU | 1;
  *(short *)*piVar3 = sVar6;
  return (uint)*(ushort *)*piVar3;
}


/* ==== 0055b936 FUN_0055b936 ==== */

uint FUN_0055b936(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_ECX;
  undefined4 uVar6;
  undefined4 local_8;
  
  puVar2 = param_1;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    uVar4 = param_1[4];
    if (uVar4 == 0xffffffff) {
      puVar3 = &DAT_005c8ac8;
    }
    else {
      puVar3 = (undefined *)((&DAT_007500a0)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 8);
    }
    if ((puVar3[4] & 0x80) != 0) {
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      uVar6 = 1;
      local_8 = in_ECX;
      if (*piVar1 < 0) {
        uVar4 = FUN_0055fb61(param_1);
      }
      else {
        uVar4 = (uint)*(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
      }
      if (uVar4 != 0xffffffff) {
        local_8 = CONCAT31(local_8._1_3_,(char)uVar4);
        if ((PTR_s__005c8384[(uVar4 & 0xff) * 2 + 1] & 0x80) != 0) {
          piVar1 = puVar2 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            uVar4 = FUN_0055fb61(puVar2);
          }
          else {
            uVar4 = (uint)*(byte *)*puVar2;
            *puVar2 = (byte *)*puVar2 + 1;
          }
          if (uVar4 == 0xffffffff) {
            FUN_0055a45a((int)(char)local_8,puVar2);
            return 0xffff;
          }
          local_8._0_2_ = CONCAT11((char)uVar4,(char)local_8);
          uVar6 = 2;
        }
        iVar5 = FUN_00563ddd((int)&param_1 + 2,&local_8,uVar6);
        if (iVar5 != -1) {
          return (uint)param_1 >> 0x10;
        }
        DAT_0074dc60 = 0x2a;
      }
      return 0xffff;
    }
  }
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    uVar4 = FUN_00563cf9(param_1);
  }
  else {
    uVar4 = (uint)*(ushort *)*param_1;
    *param_1 = (ushort *)*param_1 + 1;
  }
  return uVar4;
}


/* ==== 0055badc FUN_0055badc ==== */

undefined4 FUN_0055badc(int param_1,char *str2)

{
  undefined4 uVar1;
  char *source;
  size_t count;
  int iVar2;
  int i;
  undefined **ppuVar3;
  char *_Str2;
  undefined4 *puVar4;
  char local_8c [132];
  size_t max_count;
  
  i = 0;
  if ((param_1 < 0) || (5 < param_1)) {
LAB_0055bc33:
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      if (str2 != (char *)0x0) {
        uVar1 = FUN_0055bce2(param_1,str2);
        return uVar1;
      }
      return (&DAT_005c8334)[param_1 * 3];
    }
    max_count = 1;
    param_1 = 0;
    if (str2 != (char *)0x0) {
      if (((*str2 == 'L') && (str2[1] == 'C')) && (str2[2] == '_')) {
        source = (char *)FUN_00564ab0(str2,"=;");
        _Str2 = str2;
        while (((source != (char *)0x0 && (max_count = (int)source - (int)_Str2, max_count != 0)) &&
               (*source != ';'))) {
          str2 = (char *)0x1;
          ppuVar3 = &PTR_s_LC_COLLATE_005c833c;
          do {
            i = _strncmp(*ppuVar3,_Str2,max_count);
            if ((i == 0) && (count = _strlen(*ppuVar3), max_count == count)) break;
            str2 = str2 + 1;
            ppuVar3 = ppuVar3 + 3;
          } while ((int)ppuVar3 < 0x5c836d);
          source = source + 1;
          count = FUN_0055a6c0(source,";");
          if ((count == 0) && (*source != ';')) break;
          if ((int)str2 < 6) {
            _strncpy(local_8c,source,count);
            local_8c[count] = '\0';
            i = FUN_0055bce2((int)str2,local_8c);
            if (i != 0) {
              param_1 = param_1 + 1;
            }
          }
          if ((source[count] == '\0') || (_Str2 = source + count + 1, *_Str2 == '\0'))
          goto LAB_0055bc3e;
          source = (char *)FUN_00564ab0(_Str2,"=;");
        }
        goto LAB_0055bc33;
      }
      iVar2 = FUN_0055beb6(str2,local_8c,(undefined2 *)0x0,(undefined4 *)0x0);
      if (iVar2 == 0) {
        return 0;
      }
      puVar4 = &DAT_005c8334;
      do {
        if (puVar4 != &DAT_005c8334) {
          iVar2 = _strcmp(local_8c,(char *)*puVar4);
          if ((iVar2 == 0) || (iVar2 = FUN_0055bce2(i,local_8c), iVar2 != 0)) {
            param_1 = param_1 + 1;
          }
          else {
            max_count = 0;
          }
        }
        puVar4 = puVar4 + 3;
        i = i + 1;
      } while ((int)puVar4 < 0x5c8371);
      if (max_count != 0) {
        uVar1 = FUN_0055bdfd();
        FUN_00559d4e(DAT_005c8334);
        DAT_005c8334 = 0;
        return uVar1;
      }
LAB_0055bc3e:
      if (param_1 == 0) {
        return 0;
      }
    }
    uVar1 = FUN_0055bdfd();
  }
  return uVar1;
}


/* ==== 0055bce2 FUN_0055bce2 ==== */

undefined4 FUN_0055bce2(int param_1,char *str2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  size_t _strlen_result;
  void *_malloc_result;
  undefined4 uVar4;
  char local_a8 [132];
  undefined1 local_24 [8];
  undefined4 local_1c;
  uint local_18;
  ushort local_14 [4];
  undefined *local_c;
  undefined4 local_8;
  
  iVar3 = FUN_0055beb6(str2,local_a8,local_14,&local_1c);
  if (iVar3 != 0) {
    _strlen_result = _strlen(local_a8);
    _malloc_result = _malloc(_strlen_result + 1);
    if (_malloc_result != (void *)0x0) {
      puVar1 = (uint *)(&DAT_0074dcdc + param_1 * 4);
      pcVar2 = (char *)(&DAT_005c8334)[param_1 * 3];
      local_18 = *puVar1;
      local_c = &DAT_0074df90 + param_1 * 6;
      FUN_0055b3c0(local_24,local_c,6);
      local_8 = DAT_0074dcf4;
      uVar4 = FUN_0055ee40(_malloc_result,local_a8);
      (&DAT_005c8334)[param_1 * 3] = uVar4;
      *puVar1 = (uint)local_14[0];
      FUN_0055b3c0(local_c,local_14,6);
      if (param_1 == 2) {
        DAT_0074dcf4 = local_1c;
      }
      if (param_1 == 1) {
        DAT_0074dcf8 = local_1c;
      }
      iVar3 = (**(code **)(&DAT_005c8338 + param_1 * 0xc))();
      if (iVar3 == 0) {
        if (pcVar2 != s_C_005c8220) {
          FUN_00559d4e(pcVar2);
        }
        return (&DAT_005c8334)[param_1 * 3];
      }
      (&DAT_005c8334)[param_1 * 3] = pcVar2;
      FUN_00559d4e(_malloc_result);
      *puVar1 = local_18;
      DAT_0074dcf4 = local_8;
    }
  }
  return 0;
}


/* ==== 0055bdfd FUN_0055bdfd ==== */

undefined1 * FUN_0055bdfd(void)

{
  bool bVar1;
  int _strcmp_result;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  bVar1 = true;
  if (DAT_005c8334 == (undefined1 *)0x0) {
    DAT_005c8334 = _malloc(0x351);
  }
  *DAT_005c8334 = 0;
  FUN_0055bfce(DAT_005c8334,3,PTR_s_LC_COLLATE_005c833c,s___005b74a0,PTR_s_C_005c8340);
  ppuVar2 = &PTR_s_C_005c8340;
  do {
    FUN_0055ee50(DAT_005c8334,";");
    ppuVar3 = ppuVar2 + 3;
    _strcmp_result = _strcmp(*ppuVar2,ppuVar2[3]);
    if (_strcmp_result != 0) {
      bVar1 = false;
    }
    FUN_0055bfce(DAT_005c8334,3,ppuVar2[2],s___005b74a0,*ppuVar3);
    ppuVar2 = ppuVar3;
  } while ((int)ppuVar3 < 0x5c8370);
  if (!bVar1) {
    return DAT_005c8334;
  }
  FUN_00559d4e(DAT_005c8334);
  DAT_005c8334 = (undefined1 *)0x0;
  return PTR_s_C_005c834c;
}


/* ==== 0055beb6 FUN_0055beb6 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0055beb6(char *str2,char *param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  char *pcVar2;
  char local_8c [136];
  
  if (str2 == (char *)0x0) {
LAB_0055bf5c:
    pcVar2 = (char *)0x0;
  }
  else {
    if ((*str2 == 'C') && (str2[1] == '\0')) {
      param_2[1] = '\0';
      *param_2 = 'C';
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(s_C_005c82a8,str2);
    if ((iVar1 != 0) && (iVar1 = _strcmp(s_C_005c8224,str2), iVar1 != 0)) {
      iVar1 = FUN_0055bff3(local_8c,str2);
      if ((iVar1 != 0) || (iVar1 = FUN_00564aea(local_8c,&DAT_0074dcd0,local_8c), iVar1 == 0))
      goto LAB_0055bf5c;
      _DAT_0074dcd8 = (uint)DAT_0074dcd4;
      FUN_0055c0bf(s_C_005c82a8,local_8c);
      if (*str2 == '\0') {
        str2 = s_C_005c82a8;
      }
      FUN_0055ee40(s_C_005c8224,str2);
    }
    if (param_3 != (undefined2 *)0x0) {
      FUN_0055b3c0(param_3,&DAT_0074dcd0,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_0055b3c0(param_4,&DAT_0074dcd8,4);
    }
    FUN_0055ee40(param_2,s_C_005c82a8);
    pcVar2 = s_C_005c82a8;
  }
  return pcVar2;
}


/* ==== 0055bfce FUN_0055bfce ==== */

void FUN_0055bfce(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int i;
  
  if (0 < param_2) {
    puVar2 = &param_2;
    i = param_2;
    do {
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
      FUN_0055ee50(param_1,*puVar1);
      i = i + -1;
    } while (i != 0);
  }
  return;
}


/* ==== 0055bff3 FUN_0055bff3 ==== */

undefined4 FUN_0055bff3(char *dst,char *param_2)

{
  char cVar1;
  size_t _Count;
  char *_Source;
  char *_Dest;
  
  _Source = param_2;
  _memset(dst,0,0x88);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      while( true ) {
        _Count = FUN_0055a6c0(_Source,"_.,");
        if (_Count == 0) {
          return 0xffffffff;
        }
        cVar1 = _Source[_Count];
        if (param_2 == (char *)0x0) {
          if (0x3f < (int)_Count) {
            return 0xffffffff;
          }
          _Dest = dst;
          if (cVar1 == '.') {
            return 0xffffffff;
          }
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < (int)_Count) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _Dest = dst + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _Dest = dst + 0x80;
        }
        _strncpy(_Dest,_Source,_Count);
        if (cVar1 == ',') {
          return 0;
        }
        if (cVar1 == '\0') break;
        param_2 = param_2 + 1;
        _Source = _Source + _Count + 1;
      }
      return 0;
    }
    FUN_0055ee40(dst + 0x80,param_2 + 1);
  }
  return 0;
}


/* ==== 0055c0bf FUN_0055c0bf ==== */

void FUN_0055c0bf(undefined4 param_1,int param_2)

{
  FUN_0055ee40(param_1,param_2);
  if (*(char *)(param_2 + 0x40) != '\0') {
    FUN_0055bfce(param_1,2,"_",param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    FUN_0055bfce(param_1,2,s___005b159c,param_2 + 0x80);
  }
  return;
}


/* ==== 0055c112 FUN_0055c112 ==== */

int FUN_0055c112(LCID param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6,
                UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00579680;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0074dcfc == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_0074dcfc = 2;
    }
    else {
      DAT_0074dcfc = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_0055d1e7(param_3,param_4);
  }
  if (DAT_0074dcfc == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_0074dcfc == 1) {
    if (param_7 == 0) {
      param_7 = DAT_0074dcf4;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_00559400();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != &DAT_0000003c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_00559400();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == &DAT_0000003c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


/* ==== 0055c336 FUN_0055c336 ==== */

uint FUN_0055c336(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 uVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_s__005c8384 + param_1 * 2);
  }
  else {
    if ((PTR_s__005c8384[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)in_ECX >> 8),(char)param_1) & 0xffff00ff;
      uVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)in_ECX >> 0x10),(undefined2)local_8) & 0xff00ffff;
      uVar2 = 2;
    }
    iVar1 = FUN_00565391(1,&local_8,uVar2,(int)&param_1 + 2,0,0,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}


/* ==== 0055c3ab FUN_0055c3ab ==== */

undefined1 * FUN_0055c3ab(void)

{
  size_t _strlen_result_2;
  size_t _strlen_result;
  undefined1 *_malloc_result;
  char *str;
  int i;
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int j;
  
  puVar3 = (undefined4 *)PTR_PTR_005c8590;
  i = 0;
  j = 7;
  puVar1 = (undefined4 *)PTR_PTR_005c8590;
  do {
    _strlen_result_2 = _strlen((char *)puVar1[7]);
    _strlen_result = _strlen((char *)*puVar1);
    puVar1 = puVar1 + 1;
    j = j + -1;
    i = _strlen_result + i + 2 + _strlen_result_2;
  } while (j != 0);
  _malloc_result = _malloc(i + 1);
  if (_malloc_result != (undefined1 *)0x0) {
    i = 7;
    puVar2 = _malloc_result;
    do {
      *puVar2 = 0x3a;
      puVar2 = puVar2 + 1;
      str = (char *)FUN_0055ee40(puVar2,*puVar3);
      _strlen_result_2 = _strlen(str);
      puVar2 = puVar2 + _strlen_result_2;
      *puVar2 = 0x3a;
      str = (char *)FUN_0055ee40(puVar2 + 1,puVar3[7]);
      _strlen_result_2 = _strlen(str);
      puVar2 = puVar2 + 1 + _strlen_result_2;
      puVar3 = puVar3 + 1;
      i = i + -1;
    } while (i != 0);
    *puVar2 = 0;
  }
  return _malloc_result;
}


/* ==== 0055c43a FUN_0055c43a ==== */

undefined1 * FUN_0055c43a(void)

{
  undefined *puVar1;
  size_t _strlen_result;
  size_t _strlen_result_2;
  undefined1 *_malloc_result;
  char *str;
  int j;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int i;
  int local_8;
  
  puVar1 = PTR_PTR_005c8590;
  local_8 = 0;
  i = 0xc;
  puVar3 = (undefined4 *)(PTR_PTR_005c8590 + 0x38);
  do {
    _strlen_result = _strlen((char *)puVar3[0xc]);
    _strlen_result_2 = _strlen((char *)*puVar3);
    puVar3 = puVar3 + 1;
    i = i + -1;
    local_8 = _strlen_result_2 + local_8 + 2 + _strlen_result;
  } while (i != 0);
  _malloc_result = _malloc(local_8 + 1);
  if (_malloc_result != (undefined1 *)0x0) {
    puVar3 = (undefined4 *)(puVar1 + 0x68);
    j = 0xc;
    puVar2 = _malloc_result;
    do {
      *puVar2 = 0x3a;
      puVar2 = puVar2 + 1;
      str = (char *)FUN_0055ee40(puVar2,puVar3[-0xc]);
      _strlen_result = _strlen(str);
      puVar2 = puVar2 + _strlen_result;
      *puVar2 = 0x3a;
      str = (char *)FUN_0055ee40(puVar2 + 1,*puVar3);
      _strlen_result = _strlen(str);
      puVar2 = puVar2 + 1 + _strlen_result;
      puVar3 = puVar3 + 1;
      j = j + -1;
    } while (j != 0);
    *puVar2 = 0;
  }
  return _malloc_result;
}


/* ==== 0055c4cf FUN_0055c4cf ==== */

int * FUN_0055c4cf(void)

{
  undefined *puVar1;
  size_t _strlen_result_4;
  size_t _strlen_result_5;
  size_t _strlen_result_2;
  size_t _strlen_result_3;
  size_t _strlen_result;
  int *_malloc_result;
  char *str;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int i;
  int *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar1 = PTR_PTR_005c8590;
  iVar3 = 0;
  local_c = (undefined4 *)PTR_PTR_005c8590;
  local_10 = (int *)0x7;
  do {
    _strlen_result_4 = _strlen((char *)local_c[7]);
    _strlen_result_5 = _strlen((char *)*local_c);
    local_c = local_c + 1;
    local_10 = (int *)((int)local_10 + -1);
    iVar3 = _strlen_result_5 + iVar3 + 2 + _strlen_result_4;
  } while (local_10 != (int *)0x0);
  local_c = (undefined4 *)(puVar1 + 0x38);
  local_10 = (int *)0xc;
  do {
    _strlen_result_4 = _strlen((char *)local_c[0xc]);
    _strlen_result_5 = _strlen((char *)*local_c);
    local_c = local_c + 1;
    local_10 = (int *)((int)local_10 + -1);
    iVar3 = _strlen_result_5 + iVar3 + 2 + _strlen_result_4;
  } while (local_10 != (int *)0x0);
  _strlen_result_4 = _strlen(*(char **)(puVar1 + 0x98));
  _strlen_result_5 = _strlen(*(char **)(puVar1 + 0x9c));
  _strlen_result_2 = _strlen(*(char **)(puVar1 + 0xa0));
  _strlen_result_3 = _strlen(*(char **)(puVar1 + 0xa4));
  _strlen_result = _strlen(*(char **)(puVar1 + 0xa8));
  _malloc_result =
       _malloc(_strlen_result_5 + iVar3 + _strlen_result_4 + _strlen_result_2 + _strlen_result_3 +
               _strlen_result + 0xb1);
  if (_malloc_result != (int *)0x0) {
    piVar4 = _malloc_result + 0x2b;
    FUN_0055b3c0(_malloc_result,PTR_PTR_005c8590,0xac);
    local_8 = (undefined4 *)(puVar1 + 0x1c);
    i = 7;
    local_10 = _malloc_result;
    do {
      *local_10 = (int)piVar4;
      str = (char *)FUN_0055ee40(piVar4,local_8[-7]);
      _strlen_result_4 = _strlen(str);
      iVar3 = (int)piVar4 + _strlen_result_4 + 1;
      *(int *)(((int)_malloc_result - (int)puVar1) + (int)local_8) = iVar3;
      str = (char *)FUN_0055ee40(iVar3,*local_8);
      _strlen_result_4 = _strlen(str);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      i = i + -1;
      piVar4 = (int *)(iVar3 + 1 + _strlen_result_4);
    } while (i != 0);
    local_10 = _malloc_result + 0x1a;
    i = 0xc;
    puVar2 = (undefined4 *)(puVar1 + 0x38);
    do {
      *(int **)((int)puVar2 + ((int)_malloc_result - (int)puVar1)) = piVar4;
      str = (char *)FUN_0055ee40(piVar4,*puVar2);
      _strlen_result_4 = _strlen(str);
      iVar3 = (int)piVar4 + _strlen_result_4 + 1;
      *local_10 = iVar3;
      str = (char *)FUN_0055ee40(iVar3,puVar2[0xc]);
      _strlen_result_4 = _strlen(str);
      puVar2 = puVar2 + 1;
      local_10 = local_10 + 1;
      i = i + -1;
      piVar4 = (int *)(iVar3 + 1 + _strlen_result_4);
    } while (i != 0);
    _malloc_result[0x26] = (int)piVar4;
    str = (char *)FUN_0055ee40(piVar4,*(undefined4 *)(puVar1 + 0x98));
    _strlen_result_4 = _strlen(str);
    iVar3 = (int)piVar4 + _strlen_result_4 + 1;
    _malloc_result[0x27] = iVar3;
    str = (char *)FUN_0055ee40(iVar3,*(undefined4 *)(puVar1 + 0x9c));
    _strlen_result_4 = _strlen(str);
    iVar3 = iVar3 + 1 + _strlen_result_4;
    _malloc_result[0x28] = iVar3;
    str = (char *)FUN_0055ee40(iVar3,*(undefined4 *)(puVar1 + 0xa0));
    _strlen_result_4 = _strlen(str);
    iVar3 = iVar3 + 1 + _strlen_result_4;
    _malloc_result[0x29] = iVar3;
    str = (char *)FUN_0055ee40(iVar3,*(undefined4 *)(puVar1 + 0xa4));
    _strlen_result_4 = _strlen(str);
    _malloc_result[0x2a] = _strlen_result_4 + 1 + iVar3;
  }
  return _malloc_result;
}


/* ==== 0055c701 FUN_0055c701 ==== */

int FUN_0055c701(byte *param_1,uint param_2,byte *param_3,undefined4 param_4,undefined *param_5)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  puVar2 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR_PTR_005c8590;
  }
  param_5 = (undefined *)param_2;
  pbVar3 = param_3;
  if (param_2 != 0) {
    do {
      bVar1 = *pbVar3;
      if (bVar1 == 0) break;
      if (bVar1 == 0x25) {
        pbVar4 = pbVar3 + 1;
        bVar1 = *pbVar4;
        if (bVar1 == 0x23) {
          pbVar4 = pbVar3 + 2;
        }
        DAT_007503c8 = (uint)(bVar1 == 0x23);
        FUN_0055c7b0(CONCAT31((int3)((uint)&param_1 >> 8),*pbVar4),param_4,&param_1,&param_5,puVar2)
        ;
      }
      else {
        if (((PTR_s__005c8384[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < param_5)) {
          *param_1 = bVar1;
          param_1 = param_1 + 1;
          pbVar3 = pbVar3 + 1;
          param_5 = (undefined *)((int)param_5 - 1);
        }
        *param_1 = *pbVar3;
        param_1 = param_1 + 1;
        param_5 = (undefined *)((int)param_5 - 1);
        pbVar4 = pbVar3;
      }
      pbVar3 = pbVar4 + 1;
    } while (param_5 != (undefined *)0x0);
    if (param_5 != (undefined *)0x0) {
      *param_1 = 0;
      return param_2 - (int)param_5;
    }
  }
  return 0;
}


/* ==== 0055c7b0 FUN_0055c7b0 ==== */

void FUN_0055c7b0(char param_1,int *param_2,byte *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int i;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte *str1;
  
  if (param_1 < '[') {
    if (param_1 != 'Z') {
      if ('M' < param_1) {
        if (param_1 == 'S') {
          uVar3 = 2;
          i = *param_2;
        }
        else {
          if (param_1 == 'U') {
            iVar2 = param_2[6];
          }
          else {
            if (param_1 != 'W') {
              if (param_1 == 'X') {
                DAT_007503c8 = 0;
                str1 = *(byte **)(param_5 + 0xa8);
                goto LAB_0055cb36;
              }
              if (param_1 != 'Y') {
                return;
              }
              uVar3 = 4;
              i = (param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100;
              goto LAB_0055c8ec;
            }
            if (param_2[6] == 0) {
              iVar2 = 6;
            }
            else {
              iVar2 = param_2[6] + -1;
            }
          }
          iVar1 = param_2[7];
          if (iVar1 < iVar2) {
            i = 0;
          }
          else {
            i = iVar1 / 7;
            if (iVar2 <= iVar1 % 7) {
              i = i + 1;
            }
          }
          uVar3 = 2;
        }
        goto LAB_0055c8ec;
      }
      if (param_1 == 'M') {
        uVar3 = 2;
        i = param_2[1];
        goto LAB_0055c8ec;
      }
      if (param_1 == '%') {
        **(undefined1 **)param_3 = 0x25;
        *(int *)param_3 = *(int *)param_3 + 1;
        *param_4 = *param_4 - 1;
        return;
      }
      if (param_1 == 'A') {
        puVar4 = *(undefined **)(param_5 + 0x1c + param_2[6] * 4);
        goto LAB_0055cb92;
      }
      if (param_1 == 'B') {
        puVar4 = *(undefined **)(param_5 + 0x68 + param_2[4] * 4);
        goto LAB_0055cb92;
      }
      if (param_1 == 'H') {
        uVar3 = 2;
        i = param_2[2];
        goto LAB_0055c8ec;
      }
      if (param_1 != 'I') {
        return;
      }
      i = param_2[2] % 0xc;
      if (i == 0) {
        i = 0xc;
      }
LAB_0055c819:
      uVar3 = 2;
LAB_0055c8ec:
      DAT_007503cc = DAT_007503c8;
      FUN_0055cbc6(i,uVar3,param_3,param_4);
      return;
    }
  }
  else {
    if (param_1 < 'n') {
      if (param_1 == 'm') {
        i = param_2[4];
        uVar3 = 2;
      }
      else {
        if (param_1 == 'a') {
          puVar4 = *(undefined **)(param_5 + param_2[6] * 4);
          goto LAB_0055cb92;
        }
        if (param_1 == 'b') {
          puVar4 = *(undefined **)(param_5 + 0x38 + param_2[4] * 4);
          goto LAB_0055cb92;
        }
        if (param_1 == 'c') {
          if (DAT_007503c8 == 0) {
            str1 = *(byte **)(param_5 + 0xa0);
          }
          else {
            DAT_007503c8 = 0;
            str1 = *(byte **)(param_5 + 0xa4);
          }
          FUN_0055cc7e(str1,(int)param_2,param_3,param_4,param_5);
          if (*param_4 == 0) {
            return;
          }
          **(undefined1 **)param_3 = 0x20;
          *(int *)param_3 = *(int *)param_3 + 1;
          *param_4 = *param_4 - 1;
          str1 = *(byte **)(param_5 + 0xa8);
          goto LAB_0055cb36;
        }
        if (param_1 == 'd') {
          uVar3 = 2;
          i = param_2[3];
          goto LAB_0055c8ec;
        }
        if (param_1 != 'j') {
          return;
        }
        i = param_2[7];
        uVar3 = 3;
      }
      i = i + 1;
      goto LAB_0055c8ec;
    }
    if (param_1 == 'p') {
      if (param_2[2] < 0xc) {
        puVar4 = *(undefined **)(param_5 + 0x98);
      }
      else {
        puVar4 = *(undefined **)(param_5 + 0x9c);
      }
      goto LAB_0055cb92;
    }
    if (param_1 == 'w') {
      uVar3 = 1;
      i = param_2[6];
      goto LAB_0055c8ec;
    }
    if (param_1 == 'x') {
      if (DAT_007503c8 == 0) {
        str1 = *(byte **)(param_5 + 0xa0);
      }
      else {
        DAT_007503c8 = 0;
        str1 = *(byte **)(param_5 + 0xa4);
      }
LAB_0055cb36:
      FUN_0055cc7e(str1,(int)param_2,param_3,param_4,param_5);
      return;
    }
    if (param_1 == 'y') {
      i = param_2[5] % 100;
      goto LAB_0055c819;
    }
    if (param_1 != 'z') {
      return;
    }
  }
  FUN_00563515();
  puVar4 = (&PTR_DAT_005c8ce4)[param_2[8] != 0];
LAB_0055cb92:
  FUN_0055cb9f(puVar4,param_3,param_4);
  return;
}


/* ==== 0055cb9f FUN_0055cb9f ==== */

void FUN_0055cb9f(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    *param_3 = *param_3 + -1;
    iVar1 = *param_3;
  }
  return;
}


/* ==== 0055cbc6 FUN_0055cbc6 ==== */

void FUN_0055cbc6(int param_1,uint param_2,int *param_3,uint *param_4)

{
  int j;
  undefined4 i;
  
  i = 0;
  if (DAT_007503cc == 0) {
    if (param_2 < *param_4) {
      j = param_2 - 1;
      if (param_2 != 0) {
        do {
          *(char *)(*param_3 + j) = (char)(param_1 % 10) + '0';
          param_1 = param_1 / 10;
          i = i + 1;
          j = j + -1;
        } while (j != -1);
      }
      *param_3 = *param_3 + i;
      *param_4 = *param_4 - i;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    FUN_0055cc35(param_1,param_3,param_4);
  }
  return;
}


/* ==== 0055cc35 FUN_0055cc35 ==== */

void FUN_0055cc35(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_2;
  do {
    if (*param_3 < 2) break;
    *pcVar3 = (char)(param_1 % 10) + '0';
    pcVar3 = pcVar3 + 1;
    param_1 = param_1 / 10;
    *param_3 = *param_3 - 1;
  } while (0 < param_1);
  pcVar2 = (char *)*param_2;
  *param_2 = (int)pcVar3;
  pcVar3 = pcVar3 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar3 = *pcVar2;
    pcVar3 = pcVar3 + -1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 < pcVar3);
  return;
}


/* ==== 0055cc7e FUN_0055cc7e ==== */

void FUN_0055cc7e(byte *str1,int param_2,byte *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  int __strcmpi_result;
  byte *pbVar4;
  uint uVar5;
  uint i;
  
  puVar3 = param_4;
  pbVar2 = param_3;
  bVar1 = *str1;
  do {
    if ((bVar1 == 0) || (*puVar3 == 0)) {
      return;
    }
    DAT_007503cc = 0;
    bVar1 = *str1;
    i = 0;
    pbVar4 = str1 + 1;
    do {
      param_3 = pbVar4;
      uVar5 = i;
      i = uVar5 + 1;
      pbVar4 = param_3 + 1;
    } while (*param_3 == bVar1);
    if ((char)bVar1 < 'e') {
      if (bVar1 == 100) {
        if (uVar5 == 0) {
          DAT_007503cc = 1;
        }
        else if (uVar5 != 1) {
          if (uVar5 == 2) {
            param_4 = (uint *)0x61;
          }
          else {
            if (uVar5 != 3) goto LAB_0055cd02;
            param_4 = (uint *)0x41;
          }
          goto LAB_0055cf38;
        }
        param_4 = (uint *)0x64;
        goto LAB_0055cf38;
      }
      if (bVar1 != 0x27) {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x48) {
            if (uVar5 == 0) {
              DAT_007503cc = 1;
            }
            else if (i != 2) goto LAB_0055cd02;
            param_4 = (uint *)0x48;
            goto LAB_0055cf38;
          }
          if (bVar1 == 0x4d) {
            if (uVar5 == 0) {
              DAT_007503cc = 1;
            }
            else if (uVar5 != 1) {
              if (uVar5 == 2) {
                param_4 = (uint *)0x62;
              }
              else {
                if (uVar5 != 3) goto LAB_0055cd02;
                param_4 = (uint *)0x42;
              }
              goto LAB_0055cf38;
            }
            param_4 = (uint *)0x6d;
            goto LAB_0055cf38;
          }
          if (bVar1 != 0x61) goto LAB_0055cd02;
        }
        __strcmpi_result = __strcmpi((char *)str1,"am/pm");
        if (__strcmpi_result == 0) {
          param_3 = str1 + 5;
        }
        else {
          __strcmpi_result = __strcmpi((char *)str1,(char *)&PTR_DAT_005797bc);
          if (__strcmpi_result == 0) {
            param_3 = str1 + 3;
          }
        }
        param_4 = (uint *)0x70;
        goto LAB_0055cf38;
      }
      if ((i & 1) == 0) {
        param_3 = str1 + i;
      }
      else {
        param_3 = str1 + i;
        while( true ) {
          bVar1 = *param_3;
          if ((bVar1 == 0) || (*puVar3 == 0)) goto LAB_0055cd28;
          if (bVar1 == 0x27) break;
          if (((PTR_s__005c8384[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
            **(byte **)pbVar2 = bVar1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            param_3 = param_3 + 1;
            *puVar3 = *puVar3 - 1;
          }
          **(byte **)pbVar2 = *param_3;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          param_3 = param_3 + 1;
          *puVar3 = *puVar3 - 1;
        }
        param_3 = param_3 + 1;
      }
    }
    else {
      if (bVar1 == 0x68) {
        if (uVar5 == 0) {
          DAT_007503cc = 1;
        }
        else if (i != 2) goto LAB_0055cd02;
        param_4 = (uint *)0x49;
      }
      else if (bVar1 == 0x6d) {
        if (uVar5 == 0) {
          DAT_007503cc = 1;
        }
        else if (i != 2) goto LAB_0055cd02;
        param_4 = (uint *)0x4d;
      }
      else if (bVar1 == 0x73) {
        if (uVar5 == 0) {
          DAT_007503cc = 1;
        }
        else if (i != 2) goto LAB_0055cd02;
        param_4 = (uint *)0x53;
      }
      else {
        if (bVar1 == 0x74) {
          if (*(int *)(param_2 + 8) < 0xc) {
            pbVar4 = *(byte **)(param_5 + 0x98);
          }
          else {
            pbVar4 = *(byte **)(param_5 + 0x9c);
          }
          while ((0 < (int)i && (*puVar3 != 0))) {
            if (((PTR_s__005c8384[(uint)*pbVar4 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
              **(byte **)pbVar2 = *pbVar4;
              *(int *)pbVar2 = *(int *)pbVar2 + 1;
              pbVar4 = pbVar4 + 1;
              *puVar3 = *puVar3 - 1;
            }
            **(byte **)pbVar2 = *pbVar4;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            pbVar4 = pbVar4 + 1;
            *puVar3 = *puVar3 - 1;
            i = i - 1;
          }
          goto LAB_0055cd28;
        }
        if (bVar1 != 0x79) {
LAB_0055cd02:
          if ((PTR_s__005c8384[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            **(byte **)pbVar2 = bVar1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            *puVar3 = *puVar3 - 1;
            str1 = str1 + 1;
          }
          **(byte **)pbVar2 = *str1;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          param_3 = str1 + 1;
          *puVar3 = *puVar3 - 1;
          goto LAB_0055cd28;
        }
        if (uVar5 == 1) {
          param_4 = (uint *)0x79;
        }
        else {
          if (uVar5 != 3) goto LAB_0055cd02;
          param_4 = (uint *)0x59;
        }
      }
LAB_0055cf38:
      FUN_0055c7b0(param_4,param_2,pbVar2,puVar3,param_5);
    }
LAB_0055cd28:
    bVar1 = *param_3;
    str1 = param_3;
  } while( true );
}


/* ==== 0055cf4d FUN_0055cf4d ==== */

int FUN_0055cf4d(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}


/* ==== 0055cf6a FUN_0055cf6a ==== */

int FUN_0055cf6a(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
                UINT param_7)

{
  undefined1 *puVar1;
  int iVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  int iVar5;
  _cpinfo cpinfo;
  undefined1 *local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005797c8;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_0074dd00 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_0074dd00 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_0074dd00 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_0055d1e7(param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_0055d1e7(param_5,param_6);
  }
  if (DAT_0074dd00 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_0074dd00 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_0074dcf4;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
        ExceptionList = local_14;
        return 2;
      }
      if (1 < param_6) {
        ExceptionList = local_14;
        return 1;
      }
      if (1 < param_4) {
        ExceptionList = local_14;
        return 3;
      }
      BVar3 = GetCPInfo(param_7,&cpinfo);
      if (BVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if (0 < param_4) {
        if (cpinfo.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 3;
        }
        pBVar4 = cpinfo.LeadByte;
        while( true ) {
          if (cpinfo.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 3;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_3) && (*param_3 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          cpinfo.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 3;
      }
      if (0 < param_6) {
        if (cpinfo.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 1;
        }
        pBVar4 = cpinfo.LeadByte;
        while( true ) {
          if (cpinfo.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 1;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_5) && (*param_5 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          cpinfo.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 1;
      }
    }
    local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_20 != 0) {
      local_8 = 0;
      FUN_00559400();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_00559400();
          local_8 = 0xffffffff;
          if ((&stack0x00000000 != (undefined1 *)0x50) &&
             (local_2c = &stack0xffffffb0, local_1c = &stack0xffffffb0,
             iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,(LPWSTR)&stack0xffffffb0,
                                         iVar2), iVar5 != 0)) {
            iVar2 = CompareStringW(param_1,param_2,local_28,local_20,(PCNZWCH)&stack0xffffffb0,iVar2
                                  );
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


/* ==== 0055d1e7 FUN_0055d1e7 ==== */

int FUN_0055d1e7(char *param_1,int param_2)

{
  char *pcVar1;
  int i;
  
  i = param_2;
  for (pcVar1 = param_1; (i != 0 && (i = i + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}


/* ==== 0055d212 FUN_0055d212 ==== */

undefined4
FUN_0055d212(PEXCEPTION_RECORD exception_record,PVOID param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,int param_6,PVOID target_frame,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_0055dab2();
  }
  if ((exception_record->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((exception_record->ExceptionCode == 0xe06d7363) &&
          (0x19930520 < exception_record->ExceptionInformation[0])) &&
         (pcVar1 = *(code **)(exception_record->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)
         ) {
        uVar2 = (*pcVar1)(exception_record,param_2,param_3,param_4,param_5,param_6,target_frame,
                          param_8);
        return uVar2;
      }
      FUN_0055d2ad(exception_record,param_2,param_3,param_4,(int)param_5,param_8,param_6,
                   target_frame);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_0055d559(param_2,param_4,param_5,0xffffffff);
  }
  return 1;
}


/* ==== 0055d2ad FUN_0055d2ad ==== */

void FUN_0055d2ad(PEXCEPTION_RECORD exception_record,PVOID param_2,undefined4 param_3,
                 undefined4 param_4,int param_5,char param_6,undefined4 param_7,PVOID target_frame)

{
  int iVar1;
  PEXCEPTION_RECORD pEVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint local_1c;
  uint local_18;
  int local_14;
  int i;
  int j;
  uint k;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_0055dab2();
  }
  pEVar2 = DAT_0074dd04;
  if (exception_record->ExceptionCode == 0xe06d7363) {
    if (((exception_record->NumberParameters == 3) &&
        (exception_record->ExceptionInformation[0] == 0x19930520)) &&
       (exception_record->ExceptionInformation[2] == 0)) {
      if (DAT_0074dd04 == (PEXCEPTION_RECORD)0x0) {
        return;
      }
      param_3 = DAT_0074dd08;
      local_18 = CONCAT31(local_18._1_3_,1);
      iVar3 = FUN_0056556c(DAT_0074dd04,1);
      if (iVar3 == 0) {
        FUN_0055dab2();
      }
      exception_record = pEVar2;
      if (pEVar2->ExceptionCode != 0xe06d7363) goto LAB_0055d429;
      if (((pEVar2->NumberParameters == 3) && (pEVar2->ExceptionInformation[0] == 0x19930520)) &&
         (pEVar2->ExceptionInformation[2] == 0)) {
        FUN_0055dab2();
      }
    }
    iVar3 = local_14;
    if (((exception_record->ExceptionCode == 0xe06d7363) &&
        (exception_record->NumberParameters == 3)) &&
       (exception_record->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_00557f73(param_5,param_7,local_14,&k,&local_1c);
      do {
        if (local_1c <= k) {
          if (param_6 == '\0') {
            return;
          }
          FUN_0055d982(exception_record,1);
          return;
        }
        if ((*piVar4 <= iVar3) && (iVar3 <= piVar4[1])) {
          iVar1 = piVar4[4];
          for (i = piVar4[3]; iVar3 = local_14, 0 < i; i = i + -1) {
            piVar5 = *(int **)(exception_record->ExceptionInformation[2] + 0xc);
            for (j = *piVar5; 0 < j; j = j + -1) {
              piVar5 = piVar5 + 1;
              iVar3 = FUN_0055d4fc(iVar1,*piVar5,exception_record->ExceptionInformation[2]);
              if (iVar3 != 0) {
                FUN_0055d60d(exception_record,param_2,param_3,param_4,param_5,iVar1,*piVar5,piVar4,
                             param_7,target_frame);
                iVar3 = local_14;
                goto LAB_0055d409;
              }
            }
            iVar1 = iVar1 + 0x10;
          }
        }
LAB_0055d409:
        k = k + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_0055d429:
  if (param_6 == '\0') {
    FUN_0055d454(exception_record,param_2,param_3,param_4,param_5,local_14,param_7,target_frame);
    return;
  }
  FUN_0055da5c();
  return;
}


/* ==== 0055d454 FUN_0055d454 ==== */

void FUN_0055d454(PEXCEPTION_RECORD exception_record,PVOID param_2,undefined4 param_3,
                 undefined4 param_4,undefined4 param_5,int param_6,undefined4 param_7,
                 PVOID target_frame)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint local_c;
  uint i;
  
  if ((DAT_0074dd0c != 0) &&
     (iVar1 = FUN_00557e4a(exception_record,param_2,param_3,param_4,param_5,param_7,target_frame),
     iVar1 != 0)) {
    return;
  }
  piVar2 = (int *)FUN_00557f73(param_5,param_7,param_6,&i,&local_c);
  for (; i < local_c; i = i + 1) {
    if ((*piVar2 <= param_6) && (param_6 <= piVar2[1])) {
      iVar3 = piVar2[3] * 0x10 + piVar2[4];
      iVar1 = *(int *)(iVar3 + -0xc);
      if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
        FUN_0055d60d(exception_record,param_2,param_3,param_4,param_5,iVar3 + -0x10,0,piVar2,param_7
                     ,target_frame);
      }
    }
    piVar2 = piVar2 + 5;
  }
  return;
}


/* ==== 0055d4fc FUN_0055d4fc ==== */

undefined4 FUN_0055d4fc(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_0055d553:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_0055d52d:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_0055d553;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_0055d52d;
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* ==== 0055d559 FUN_0055d559 ==== */

void FUN_0055d559(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005797e0;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_0055dab2();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}


/* ==== 0055d5f7 FUN_0055d5f7 ==== */

undefined4 FUN_0055d5f7(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_0055da5c();
  return uVar1;
}


/* ==== 0055d60d FUN_0055d60d ==== */

void FUN_0055d60d(PEXCEPTION_RECORD exception_record,PVOID param_2,undefined4 param_3,
                 undefined4 param_4,undefined4 param_5,int param_6,int param_7,undefined4 *param_8,
                 undefined4 param_9,PVOID target_frame)

{
  int iVar1;
  
  if (param_7 != 0) {
    FUN_0055d7be(exception_record,param_2,param_6,param_7);
  }
  if (target_frame == (PVOID)0x0) {
    target_frame = param_2;
  }
  FUN_00557d4c(target_frame,exception_record);
  FUN_0055d559(param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  iVar1 = FUN_0055d688(exception_record,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),
                       param_9,0x100);
  if (iVar1 != 0) {
    FUN_00557d0a(iVar1,param_2);
  }
  return;
}


/* ==== 0055d688 FUN_0055d688 ==== */

undefined4
FUN_0055d688(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005797f0;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  DAT_0074dd04 = param_1;
  DAT_0074dd08 = param_3;
  local_8 = 1;
  ExceptionList = &local_14;
  uVar1 = FUN_00557dd1(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_0055d74e();
  ExceptionList = local_14;
  return uVar1;
}


/* ==== 0055d74e FUN_0055d74e ==== */

void FUN_0055d74e(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  DAT_0074dd04 = *(undefined4 *)(unaff_EBP + -0x1c);
  DAT_0074dd08 = *(undefined4 *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == unaff_EBX && (*(int *)(unaff_EBP + -0x2c) != unaff_EBX)))) {
    __abnormal_termination();
    FUN_0055d982();
  }
  return;
}


/* ==== 0055d7be FUN_0055d7be ==== */

void FUN_0055d7be(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00579808;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        iVar2 = FUN_0056556c(*(undefined4 *)(param_1 + 0x18),1);
        if ((iVar2 != 0) && (iVar2 = FUN_00565588(piVar1,1), iVar2 != 0)) {
          uVar3 = FUN_0055d9e9(*(undefined4 *)(param_1 + 0x18),param_4 + 8,
                               *(undefined4 *)(param_4 + 0x14));
          FUN_005580e0(piVar1,uVar3);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        iVar2 = FUN_0056556c(*(undefined4 *)(param_1 + 0x18),1);
        if (((iVar2 != 0) && (iVar2 = FUN_00565588(piVar1,1), iVar2 != 0)) &&
           (iVar2 = FUN_005655a4(*(undefined4 *)(param_4 + 0x18)), iVar2 != 0)) {
          if ((*param_4 & 4) != 0) {
            uVar3 = FUN_0055d9e9(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
            FUN_00557d45(piVar1,*(undefined4 *)(param_4 + 0x18),uVar3);
            ExceptionList = local_14;
            return;
          }
          uVar3 = FUN_0055d9e9(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
          FUN_00557d3e(piVar1,*(undefined4 *)(param_4 + 0x18),uVar3);
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      iVar2 = FUN_0056556c(*(undefined4 *)(param_1 + 0x18),1);
      if ((iVar2 != 0) && (iVar2 = FUN_00565588(piVar1,1), iVar2 != 0)) {
        FUN_005580e0(piVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_0055d84c;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    iVar2 = FUN_0056556c(*(undefined4 *)(param_1 + 0x18),1);
    if ((iVar2 != 0) && (iVar2 = FUN_00565588(piVar1,1), iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar2;
LAB_0055d84c:
      iVar2 = FUN_0055d9e9(iVar2,param_4 + 8);
      *piVar1 = iVar2;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_0055dab2();
  ExceptionList = local_14;
  return;
}


/* ==== 0055d982 FUN_0055d982 ==== */

void FUN_0055d982(int param_1)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00579818;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  if ((param_1 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4), iVar1 != 0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_00557d3e(*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  ExceptionList = local_14;
  return;
}


/* ==== 0055d9e9 FUN_0055d9e9 ==== */

int FUN_0055d9e9(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}


/* ==== 0055da10 __CallSettingFrame@12 ==== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *__NLG_Notify1_result;
  
  __NLG_Notify1_result = (code *)__NLG_Notify1(param_3);
  (*__NLG_Notify1_result)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}


/* ==== 0055da5c FUN_0055da5c ==== */

void FUN_0055da5c(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00579828;
  puStack_10 = &LAB_0055e3b4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_0074dd10 != (code *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*DAT_0074dd10)();
  }
  local_8 = 0xffffffff;
  FUN_005655bc();
  return;
}


/* ==== 0055dab2 FUN_0055dab2 ==== */

void FUN_0055dab2(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00579840;
  puStack_10 = &LAB_0055e3b4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_005c8654 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_005c8654)();
  }
  local_8 = 0xffffffff;
  FUN_0055da5c();
  return;
}


/* ==== 0055db08 FUN_0055db08 ==== */

void FUN_0055db08(void)

{
  FUN_00565608(0x10000,0x30000);
  return;
}


/* ==== 0055db1a FUN_0055db1a ==== */

/* WARNING: Removing unreachable block (ram,0x0055db4f) */

undefined4 FUN_0055db1a(void)

{
  return 0;
}


/* ==== 0055db58 FUN_0055db58 ==== */

void FUN_0055db58(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_0055db1a();
  return;
}


/* ==== 0055db81 FUN_0055db81 ==== */

void FUN_0055db81(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_00565739((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_005c8378 < 2) {
        uVar4 = (byte)PTR_s__005c8384[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_0055c336((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_005c837c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


/* ==== 0055dc41 __fassign ==== */

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (flag != 0) {
    FUN_00565b96(&local_c);
    *(undefined4 *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
    return;
  }
  FUN_00565bc3(&number,number);
  *(char **)argument = number;
  return;
}


/* ==== 0055dc7f FUN_0055dc7f ==== */

undefined1 * FUN_0055dc7f(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  
  piVar1 = DAT_0074dd14;
  if (DAT_0074dd18 == '\0') {
    piVar1 = (int *)FUN_00565c67(*param_1);
    FUN_00565bf0(param_2 + (uint)(0 < param_3) + (uint)(*piVar1 == 0x2d),param_3 + 1,piVar1);
  }
  else {
    FUN_0055df97(param_2 + (*DAT_0074dd14 == 0x2d),(uint)(0 < param_3));
  }
  puVar2 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  if (0 < param_3) {
    *puVar2 = puVar2[1];
    puVar2[1] = DAT_005c837c;
  }
  puVar2 = (undefined1 *)FUN_0055ee40();
  if (param_4 != 0) {
    *puVar2 = 0x45;
  }
  if (*(char *)piVar1[3] != '0') {
    iVar3 = piVar1[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      puVar2[1] = 0x2d;
    }
    if (99 < iVar3) {
      puVar2[2] = puVar2[2] + (char)(iVar3 / 100);
      iVar3 = iVar3 % 100;
    }
    if (9 < iVar3) {
      puVar2[3] = puVar2[3] + (char)(iVar3 / 10);
      iVar3 = iVar3 % 10;
    }
    puVar2[4] = puVar2[4] + (char)iVar3;
  }
  return param_2;
}


/* ==== 0055dd83 FUN_0055dd83 ==== */

char * FUN_0055dd83(undefined8 *param_1,char *param_2,size_t size)

{
  int *piVar1;
  int iVar2;
  char *str;
  
  piVar1 = DAT_0074dd14;
  if (DAT_0074dd18 == '\0') {
    piVar1 = (int *)FUN_00565c67(*param_1);
    FUN_00565bf0(param_2 + (*piVar1 == 0x2d),piVar1[1] + size,piVar1);
  }
  else if (DAT_0074dd1c == size) {
    iVar2 = (*DAT_0074dd14 == 0x2d) + DAT_0074dd1c;
    param_2[iVar2] = '0';
    (param_2 + iVar2)[1] = '\0';
  }
  str = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = '-';
    str = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_0055df97(str,1);
    *str = '0';
    str = str + 1;
  }
  else {
    str = str + piVar1[1];
  }
  if (0 < (int)size) {
    FUN_0055df97(str,1);
    *str = DAT_005c837c;
    iVar2 = piVar1[1];
    if (iVar2 < 0) {
      if ((DAT_0074dd18 != '\0') || (-iVar2 <= (int)size)) {
        size = -iVar2;
      }
      FUN_0055df97(str + 1,size);
      _memset(str + 1,0x30,size);
    }
  }
  return param_2;
}


/* ==== 0055de61 FUN_0055de61 ==== */

void FUN_0055de61(undefined8 *param_1,char *param_2,size_t size,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_0074dd14 = (int *)FUN_00565c67(*param_1);
  DAT_0074dd1c = DAT_0074dd14[1] + -1;
  iVar1 = *DAT_0074dd14;
  FUN_00565bf0(param_2 + (iVar1 == 0x2d),size,DAT_0074dd14);
  DAT_0074dd20 = DAT_0074dd1c < DAT_0074dd14[1] + -1;
  DAT_0074dd1c = DAT_0074dd14[1] + -1;
  if ((DAT_0074dd1c < -4) || ((int)size <= DAT_0074dd1c)) {
    FUN_0055defc(param_1,param_2,size,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_0074dd20) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_0055df23(param_1,param_2,size);
  }
  return;
}


/* ==== 0055defc FUN_0055defc ==== */

void FUN_0055defc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_0074dd18 = 1;
  FUN_0055dc7f(param_1,param_2,param_3,param_4);
  DAT_0074dd18 = 0;
  return;
}


/* ==== 0055df23 FUN_0055df23 ==== */

void FUN_0055df23(undefined8 *param_1,char *param_2,size_t size)

{
  DAT_0074dd18 = 1;
  FUN_0055dd83(param_1,param_2,size);
  DAT_0074dd18 = 0;
  return;
}


/* ==== 0055df46 __cfltcvt ==== */

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = FUN_0055dc7f(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      eVar1 = FUN_0055dd83(arg,buffer,format);
      return eVar1;
    }
    eVar1 = FUN_0055de61(arg,buffer,format,precision);
  }
  return eVar1;
}


/* ==== 0055df97 FUN_0055df97 ==== */

void FUN_0055df97(char *str,int param_2)

{
  size_t _strlen_result;
  
  if (param_2 != 0) {
    _strlen_result = _strlen(str);
    FUN_005580e0(str + param_2,str,_strlen_result + 1);
  }
  return;
}


/* ==== 0055dfbc FUN_0055dfbc ==== */

SIZE_T FUN_0055dfbc(LPCVOID param_1)

{
  int iVar1;
  SIZE_T SVar2;
  
  iVar1 = FUN_0056205a(param_1);
  if (iVar1 != 0) {
    return *(int *)((int)param_1 + -4) - 9;
  }
  SVar2 = HeapSize(DAT_0075008c,0,param_1);
  return SVar2;
}


/* ==== 0055dff0 __trandisp1 ==== */

/* Library Function - Single Match
    __trandisp1
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __trandisp1(void)

{
  float10 fVar1;
  byte bVar2;
  int in_EDX;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(in_EDX + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = in_EDX;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x0055e055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_EDX + (char)(&DAT_005c868d)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10)
  )();
  return;
}


/* ==== 0055e057 __trandisp2 ==== */

/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __trandisp2(void)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  int in_EDX;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(in_EDX + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = in_EDX;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x0055e0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_EDX + (char)((&DAT_005c868d)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                              (&DAT_005c868d)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2) +
              0x10))();
  return;
}


/* ==== 0055e0e8 FUN_0055e0e8 ==== */

void FUN_0055e0e8(void)

{
  return;
}


/* ==== 0055e0f6 FUN_0055e0f6 ==== */

float10 FUN_0055e0f6(void)

{
  return (float10)0;
}


/* ==== 0055e1c0 FUN_0055e1c0 ==== */

float10 FUN_0055e1c0(void)

{
  float10 in_ST0;
  
  FUN_00565d8a();
  return (float10)(double)in_ST0;
}


/* ==== 0055e1d7 __startOneArgErrorHandling ==== */

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __startOneArgErrorHandling(void)

{
  float10 in_ST0;
  
  FUN_00565d8a();
  return (float10)(double)in_ST0;
}


/* ==== 0055e220 FUN_0055e220 ==== */

unkbyte10 FUN_0055e220(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}


/* ==== 0055e235 FUN_0055e235 ==== */

void FUN_0055e235(void)

{
  return;
}


/* ==== 0055e24c FUN_0055e24c ==== */

undefined4 FUN_0055e24c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}


/* ==== 0055e265 __fload_withFB ==== */

/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fload_withFB(void)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(in_EDX + 4);
}


/* ==== 0055e2a8 FUN_0055e2a8 ==== */

uint FUN_0055e2a8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


/* ==== 0055e2be FUN_0055e2be ==== */

void FUN_0055e2be(void)

{
  return;
}


/* ==== 0055e2cb __math_exit ==== */

/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __math_exit(void)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling();
    return;
  }
  return;
}


/* ==== 0055e309 FUN_0055e309 ==== */

void FUN_0055e309(void)

{
  int in_EDX;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  ushort unaff_retaddr;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)(double)in_ST0 >> 0x20);
  if (((ulonglong)(double)in_ST0 & 0x7ff0000000000000) == 0) {
    fscale(in_ST0,(float10)1536.0);
  }
  else if ((uStack_4 & 0x7ff00000) == 0x7ff00000) {
    fscale(in_ST0,(float10)-1536.0);
  }
  else if (((unaff_retaddr == 0x27f) || ((unaff_retaddr & 0x20) != 0)) ||
          ((in_FPUStatusWord & 0x20) == 0)) {
    return;
  }
  if (in_EDX == 0x1d) {
    FUN_0055e1c0();
    return;
  }
  __startOneArgErrorHandling();
  return;
}


/* ==== 0055e471 FUN_0055e471 ==== */

void FUN_0055e471(int param_1)

{
  __local_unwind2(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}


/* ==== 0055e48c FUN_0055e48c ==== */

uint FUN_0055e48c(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_0055e595:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_0055e595;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != &DAT_005c7bf8 && (piVar4 != (int *)&DAT_005c7c18)) ||
        (iVar5 = FUN_00565e5a(uVar2), iVar5 == 0)))) {
      FUN_00562e5d(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      iVar5 = 1;
      param_2 = (int *)FUN_0055fe30(uVar2,&param_1,1);
    }
    else {
      iVar3 = piVar4[2];
      iVar5 = *piVar4 - iVar3;
      *piVar4 = iVar3 + 1;
      piVar4[1] = piVar4[6] + -1;
      if (iVar5 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_005c8ac8;
        }
        else {
          puVar6 = (undefined *)((&DAT_007500a0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 8);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_00562b76(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_0055fe30(uVar2,iVar3,iVar5);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == (int *)iVar5) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}


/* ==== 0055e5a1 FUN_0055e5a1 ==== */

int FUN_0055e5a1(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  short *str;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  short *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar8 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar8 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar8 < ' ') || ('x' < (char)bVar8)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (byte)(&DAT_005798c4)[(char)bVar8] & 0xf;
    }
    local_34 = (int)(char)(&DAT_005798e4)[uVar3 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_0055e60f_caseD_0:
      local_28 = 0;
      if ((PTR_s__005c8384[(uint)bVar8 * 2 + 1] & 0x80) != 0) {
        FUN_0055ece2((int)(char)bVar8,param_1,&local_18);
        bVar8 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_0055ece2((int)(char)bVar8,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar8 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar8 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar8 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar8 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar8 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar8 == 0x2a) {
        local_24 = FUN_0055ed80(&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar8 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar8 == 0x2a) {
        local_14 = FUN_0055ed80(&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar8 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar8 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != 0x34)) {
          local_34 = 0;
          goto switchD_0055e60f_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar8 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar8 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar8 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      str = local_c;
      if ((char)bVar8 < 'h') {
        if ((char)bVar8 < 'e') {
          if ((char)bVar8 < 'Y') {
            if (bVar8 == 0x58) {
LAB_0055ea20:
              local_30 = 7;
LAB_0055ea27:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = 0x30;
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_0055ea91;
            }
            if (bVar8 != 0x43) {
              if ((bVar8 != 0x45) && (bVar8 != 0x47)) {
                if (bVar8 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_0055e7ce;
                }
                goto LAB_0055ebab;
              }
              local_38 = 1;
              bVar8 = bVar8 + 0x20;
              goto LAB_0055e82f;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_0055e85c:
            if ((local_8 & 0x810) == 0) {
              local_24c[0] = FUN_0055ed80(&param_3);
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_0055ed9d();
              local_10 = (undefined1 *)FUN_00563c91(local_24c,uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            str = (short *)local_24c;
          }
          else if (bVar8 == 0x5a) {
            psVar4 = (short *)FUN_0055ed80(&param_3);
            if ((psVar4 == (short *)0x0) || (str = *(short **)(psVar4 + 2), str == (short *)0x0)) {
              local_c = (short *)PTR_DAT_005c86a0;
              str = (short *)PTR_DAT_005c86a0;
              goto LAB_0055e9a1;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar4;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar4 >> 1);
            }
          }
          else {
            if (bVar8 == 99) goto LAB_0055e85c;
            if (bVar8 == 100) goto LAB_0055ea86;
          }
        }
        else {
LAB_0055e82f:
          local_8 = local_8 | 0x40;
          str = (short *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar8 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = str;
          (*(code *)PTR_FUN_005c8658)(&local_4c,local_24c,(int)(char)bVar8,local_14,local_38);
          uVar3 = local_8 & 0x80;
          if ((uVar3 != 0) && (local_14 == 0)) {
            (*(code *)PTR_FUN_005c8664)(local_24c);
          }
          if ((bVar8 == 0x67) && (uVar3 == 0)) {
            (*(code *)PTR_FUN_005c865c)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            str = (short *)(local_24c + 1);
            local_c = str;
          }
LAB_0055e9a1:
          local_10 = (undefined1 *)_strlen((char *)str);
          str = local_c;
        }
      }
      else {
        if (bVar8 == 0x69) {
LAB_0055ea86:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar8 == 0x6e) {
            piVar6 = (int *)FUN_0055ed80(&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar6 = local_18;
            }
            else {
              *(undefined2 *)piVar6 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar8 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_0055ea91;
          }
          if (bVar8 == 0x70) {
            local_14 = 8;
            goto LAB_0055ea20;
          }
          if (bVar8 == 0x73) {
LAB_0055e7ce:
            iVar9 = local_14;
            if (local_14 == -1) {
              iVar9 = 0x7fffffff;
            }
            psVar4 = (short *)FUN_0055ed80(&param_3);
            if ((local_8 & 0x810) == 0) {
              str = psVar4;
              if (psVar4 == (short *)0x0) {
                psVar4 = (short *)PTR_DAT_005c86a0;
                str = (short *)PTR_DAT_005c86a0;
              }
              for (; (iVar9 != 0 && ((char)*psVar4 != '\0')); psVar4 = (short *)((int)psVar4 + 1)) {
                iVar9 = iVar9 + -1;
              }
              local_10 = (undefined1 *)((int)psVar4 - (int)str);
            }
            else {
              if (psVar4 == (short *)0x0) {
                psVar4 = (short *)PTR_s___005c86a4;
              }
              local_28 = 1;
              for (str = psVar4; (iVar9 != 0 && (*str != 0)); str = str + 1) {
                iVar9 = iVar9 + -1;
              }
              local_10 = (undefined1 *)((int)str - (int)psVar4 >> 1);
              str = psVar4;
            }
            goto LAB_0055ebab;
          }
          if (bVar8 != 0x75) {
            if (bVar8 != 0x78) goto LAB_0055ebab;
            local_30 = 0x27;
            goto LAB_0055ea27;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_0055ea91:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar3 = FUN_0055ed80(&param_3);
              uVar11 = (ulonglong)uVar3;
              goto LAB_0055eae4;
            }
            uVar3 = FUN_0055ed80(&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar3 = FUN_0055ed80(&param_3);
            uVar3 = uVar3 & 0xffff;
          }
          else {
            sVar2 = FUN_0055ed80(&param_3);
            uVar3 = (uint)sVar2;
          }
          uVar11 = (ulonglong)(int)uVar3;
        }
        else {
          uVar11 = FUN_0055ed8d(&param_3);
        }
LAB_0055eae4:
        if ((((local_8 & 0x40) != 0) && ((longlong)uVar11 < 0x100000000)) && ((longlong)uVar11 < 0))
        {
          uVar11 = CONCAT44(-((int)(uVar11 >> 0x20) + (uint)((int)uVar11 != 0)),-(int)uVar11);
          local_8 = local_8 | 0x100;
        }
        iVar9 = (int)(uVar11 >> 0x20);
        if ((local_8 & 0x8000) == 0) {
          iVar9 = 0;
        }
        lVar12 = CONCAT44(iVar9,(int)uVar11);
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar11 == 0 && iVar9 == 0) {
          local_20 = 0;
        }
        local_c = (short *)&local_4d;
        while ((iVar9 = local_14 + -1, 0 < local_14 || (lVar12 != 0))) {
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (int)local_10;
          local_14 = iVar9;
          iVar9 = __aullrem(lVar12,local_10,local_40);
          iVar9 = iVar9 + 0x30;
          lVar12 = __aulldiv(lVar12,local_44,local_40);
          if (0x39 < iVar9) {
            iVar9 = iVar9 + local_30;
          }
          str = (short *)((int)local_c + -1);
          *(char *)local_c = (char)iVar9;
          local_c = str;
        }
        iVar7 = -(int)local_c;
        local_10 = &local_4d + iVar7;
        str = (short *)((int)local_c + 1);
        local_14 = iVar9;
        if (((local_8 & 0x200) != 0) && ((*(char *)str != '0' || (local_10 == (undefined1 *)0x0))))
        {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar7);
          str = local_c;
        }
      }
LAB_0055ebab:
      local_c = str;
      uVar3 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_0055ebe3;
              local_1a = 0x20;
            }
            else {
              local_1a = 0x2b;
            }
          }
          else {
            local_1a = 0x2d;
          }
          local_20 = 1;
        }
LAB_0055ebe3:
        iVar9 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_0055ed17(0x20,iVar9,param_1,&local_18);
        }
        FUN_0055ed48(&local_1a,local_20,param_1,&local_18);
        if (((uVar3 & 8) != 0) && ((uVar3 & 4) == 0)) {
          FUN_0055ed17(0x30,iVar9,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar10 = local_10, str = local_c, (int)local_10 < 1)) {
          FUN_0055ed48(local_c,local_10,param_1,&local_18);
        }
        else {
          do {
            puVar10 = puVar10 + -1;
            iVar7 = FUN_00563c91(local_3c,*str);
            if (iVar7 < 1) break;
            FUN_0055ed48(local_3c,iVar7,param_1,&local_18);
            str = str + 1;
          } while (puVar10 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_0055ed17(0x20,iVar9,param_1,&local_18);
        }
      }
    }
    bVar8 = *param_2;
    pbVar1 = param_2;
  } while( true );
}


/* ==== 0055ece2 FUN_0055ece2 ==== */

void FUN_0055ece2(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    param_1 = FUN_0055e48c(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    param_1 = param_1 & 0xff;
  }
  if (param_1 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


/* ==== 0055ed17 FUN_0055ed17 ==== */

void FUN_0055ed17(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_0055ece2(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


/* ==== 0055ed48 FUN_0055ed48 ==== */

void FUN_0055ed48(char *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_0055ece2((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


/* ==== 0055ed80 FUN_0055ed80 ==== */

undefined4 FUN_0055ed80(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}


/* ==== 0055ed8d FUN_0055ed8d ==== */

undefined8 FUN_0055ed8d(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}


/* ==== 0055ed9d FUN_0055ed9d ==== */

undefined4 FUN_0055ed9d(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


/* ==== 0055edb0 _strcmp ==== */

/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_0055edf4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_0055edc0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_0055edf4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_0055edf4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_0055edc0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_0055edf4:
  return (uint)bVar5 * -2 + 1;
}


/* ==== 0055ee40 FUN_0055ee40 ==== */

uint * FUN_0055ee40(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0055ef28;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_0055ef28:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


/* ==== 0055ee50 FUN_0055ee50 ==== */

uint * FUN_0055ee50(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_0055ee6c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_0055ee9f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x0055eebb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_0055ee6c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x0055eebb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x0055eebb;
    }
  }
LAB_0055ee9f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x0055eebb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_0055ef28:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0055ef28;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


/* ==== 0055ef30 FUN_0055ef30 ==== */

undefined4 FUN_0055ef30(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_007501a0 <= param_1) {
    DAT_0074dc64 = 0;
    DAT_0074dc60 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    DAT_0074dc60 = 9;
    DAT_0074dc64 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_0055a27d(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0055a27d(2);
      iVar2 = FUN_0055a27d(1);
      if (iVar2 == iVar1) goto LAB_0055efa9;
    }
    hObject = (HANDLE)FUN_0055a27d(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0055efab;
    }
  }
LAB_0055efa9:
  DVar4 = 0;
LAB_0055efab:
  FUN_0055a203(param_1);
  *(undefined1 *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_00560c26(DVar4);
  return 0xffffffff;
}


/* ==== 0055efe3 __freebuf ==== */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_00559d4e(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


/* ==== 0055f00e FUN_0055f00e ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055f00e(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *_malloc_result;
  
  iVar2 = FUN_00565e5a(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == &DAT_005c7bf8) {
    iVar2 = 0;
  }
  else {
    if (param_1 != (undefined4 *)&DAT_005c7c18) {
      return 0;
    }
    iVar2 = 1;
  }
  _DAT_0074dc5c = _DAT_0074dc5c + 1;
  if ((*(ushort *)(param_1 + 3) & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_0074dd24)[iVar2] == 0) {
    _malloc_result = _malloc(0x1000);
    (&DAT_0074dd24)[iVar2] = _malloc_result;
    if (_malloc_result == (void *)0x0) {
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_0055f08a;
    }
  }
  uVar1 = (&DAT_0074dd24)[iVar2];
  param_1[6] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 0x1000;
LAB_0055f08a:
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x1102;
  return 1;
}


/* ==== 0055f09b FUN_0055f09b ==== */

void FUN_0055f09b(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
      FUN_0055a5de(param_2);
    }
  }
  else if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
    FUN_0055a5de(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    return;
  }
  return;
}


/* ==== 0055f0d8 FUN_0055f0d8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0055f0d8(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  bVar4 = false;
  bVar3 = false;
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar6 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar6 = 0;
      uVar7 = DAT_0074e010 | 1;
      goto LAB_0055f119;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar6 = 0x301;
  }
  uVar7 = DAT_0074e010 | 2;
LAB_0055f119:
  bVar2 = true;
LAB_0055f11c:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    iVar5 = FUN_00565ef5(param_1,uVar6,param_3,0x1a4);
    if (iVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_0074dc5c = _DAT_0074dc5c + 1;
    param_4[3] = uVar7;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = iVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar6 & 0x1000) == 0) {
        uVar6 = uVar6 | 0x1000;
        goto LAB_0055f11c;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar6 & 2) == 0) {
        uVar6 = uVar6 & 0xfffffffe | 2;
        uVar7 = uVar7 & 0xfffffffc | 0x80;
        goto LAB_0055f11c;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar6 & 0x40) == 0) {
        uVar6 = uVar6 | 0x40;
        goto LAB_0055f11c;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar6 = uVar6 | 0x10;
        goto LAB_0055f11c;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar6 = uVar6 | 0x20;
      goto LAB_0055f11c;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar6 & 0xc000) != 0) goto LAB_0055f1fc;
      uVar6 = uVar6 | 0x8000;
      goto LAB_0055f11c;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar7 = uVar7 | 0x4000;
        goto LAB_0055f11c;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar6 & 0xc000) != 0)) goto LAB_0055f1fc;
        uVar6 = uVar6 | 0x4000;
        goto LAB_0055f11c;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar7 = uVar7 & 0xffffbfff;
        goto LAB_0055f11c;
      }
    }
  }
LAB_0055f1fc:
  bVar2 = false;
  goto LAB_0055f11c;
}


/* ==== 0055f248 FUN_0055f248 ==== */

undefined4 * FUN_0055f248(void)

{
  int i;
  void *_malloc_result;
  undefined4 *puVar1;
  int *piVar2;
  
  i = 0;
  piVar2 = DAT_007503e0;
  if (0 < DAT_00751400) {
    do {
      if (*piVar2 == 0) {
        _malloc_result = _malloc(0x20);
        DAT_007503e0[i] = (int)_malloc_result;
        puVar1 = (undefined4 *)DAT_007503e0[i];
        if (puVar1 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
LAB_0055f2a3:
        if (puVar1 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        puVar1[4] = 0xffffffff;
        puVar1[1] = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puVar1[7] = 0;
        return puVar1;
      }
      if ((*(byte *)(*piVar2 + 0xc) & 0x83) == 0) {
        puVar1 = (undefined4 *)DAT_007503e0[i];
        goto LAB_0055f2a3;
      }
      i = i + 1;
      piVar2 = piVar2 + 1;
    } while (i < DAT_00751400);
  }
  return (undefined4 *)0x0;
}


/* ==== 0055f2c0 FUN_0055f2c0 ==== */

float10 FUN_0055f2c0(undefined4 param_1,double param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (DAT_005c94c0 == 0) {
    fVar1 = (float10)FUN_0055f875(1,param_1,param_2,0,param_2,param_3);
    return fVar1;
  }
  DAT_0074dc60 = 0x21;
  FUN_0055fae8();
  return (float10)param_2;
}


/* ==== 0055f313 FUN_0055f313 ==== */

float10 FUN_0055f313(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_0055f65e(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_0055f3ab();
  }
  iVar1 = FUN_0055f948(param_1);
  if ((DAT_005c94c0 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_0055f875(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_0055f8fd(iVar1);
  FUN_0055fae8();
  return (float10)param_4;
}


/* ==== 0055f3ab FUN_0055f3ab ==== */

void FUN_0055f3ab(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_3 = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((uVar4 & 2) != 0) {
    param_3 = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((uVar4 & 1) != 0) {
    param_3 = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((uVar4 & 4) != 0) {
    param_3 = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((uVar4 & 8) != 0) {
    param_3 = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = (~*param_2 & 1) << 4 | param_1[2] & 0xffffffef;
  param_1[2] = (~*param_2 & 4) << 1 | param_1[2] & 0xfffffff7;
  param_1[2] = ~*param_2 >> 1 & 4 | param_1[2] & 0xfffffffb;
  param_1[2] = ~*param_2 >> 3 & 2 | param_1[2] & 0xfffffffd;
  param_1[2] = ~*param_2 >> 5 & 1 | param_1[2] & 0xfffffffe;
  bVar3 = FUN_0055facb();
  puVar2 = param_6;
  if ((bVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((bVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((bVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((bVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((bVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar4 = *puVar1 & 0xc00;
  if (uVar4 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar4 == 0x400) {
      uVar4 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar4 != 0x800) {
        if (uVar4 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_0055f520;
      }
      uVar4 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar4;
  }
LAB_0055f520:
  uVar4 = *puVar1 & 0x300;
  if (uVar4 == 0) {
    uVar4 = *param_1 & 0xffffffeb | 8;
LAB_0055f556:
    *param_1 = uVar4;
  }
  else {
    if (uVar4 == 0x200) {
      uVar4 = *param_1 & 0xffffffe7 | 4;
      goto LAB_0055f556;
    }
    if (uVar4 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = (param_4 & 0xfff) << 5 | *param_1 & 0xfffe001f;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 0x10) = *param_6;
  FUN_0055fad9();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar4 = *param_1 & 3;
  if (uVar4 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar4 == 1) {
      uVar4 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar4 != 2) {
        if (uVar4 == 3) {
          *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 0xc;
        }
        goto LAB_0055f62b;
      }
      uVar4 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar4;
  }
LAB_0055f62b:
  uVar4 = *param_1 >> 2 & 7;
  if (uVar4 == 0) {
    uVar4 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_0055f654;
    }
    uVar4 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar4;
LAB_0055f654:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* ==== 0055f65e FUN_0055f65e ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0055f65e(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_10;
  int i;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_0055fb0b(1);
    uVar3 = param_1 & 0x17;
    goto LAB_0055f853;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_0055fb0b(4);
    uVar3 = param_1 & 0x1b;
    goto LAB_0055f853;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      if (*param_2 != 0.0) {
        fVar5 = (float10)FUN_0055fa0a(*param_2,&i);
        i = i + -0x600;
        if (i < -0x432) {
          local_10 = 0.0;
          bVar4 = bVar2;
        }
        else {
          local_10 = (double)(ulonglong)
                             (SUB87((double)fVar5,0) & 0xfffffffffffff | 0x10000000000000);
          if (i < -0x3fd) {
            i = -0x3fd - i;
            do {
              if ((((ulonglong)local_10 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_10 >> 1;
              if (((ulonglong)local_10 & 0x100000000) != 0) {
                local_10._3_1_ = (byte)((ulonglong)local_10 >> 0x18) >> 1;
                local_10._0_3_ = (undefined3)uVar3;
                local_10._0_4_ = CONCAT13(local_10._3_1_,(undefined3)local_10) | 0x80000000;
                uVar3 = (uint)local_10;
              }
              local_10._0_4_ = uVar3;
              local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
              i = i + -1;
            } while (i != 0);
          }
          if ((double)fVar5 < 0.0) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_0055fb0b(0x10);
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_0055f853;
  }
  FUN_0055fb0b(8);
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_005c8788;
  if (uVar3 == 0) {
    if (*param_2 <= 0.0) {
      dVar1 = -_DAT_005c8788;
    }
LAB_0055f773:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_005c8788;
      }
      else {
        dVar1 = 1.79769313486232e+308;
      }
      goto LAB_0055f773;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= 0.0) {
        dVar1 = -1.79769313486232e+308;
      }
      goto LAB_0055f773;
    }
    if (uVar3 == 0xc00) {
      dVar1 = 1.79769313486232e+308;
      if (*param_2 <= 0.0) {
        dVar1 = -1.79769313486232e+308;
      }
      goto LAB_0055f773;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_0055f853:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_0055fb0b(0x20);
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}


/* ==== 0055f875 FUN_0055f875 ==== */

float10 FUN_0055f875(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  int iVar1;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_20 = FUN_0055f923(param_2);
  if (local_20 != 0) {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_24 = param_1;
    local_c = param_7;
    uStack_8 = param_8;
    FUN_0055fae8(param_9,0xffff);
    iVar1 = FUN_00564aa0(&local_24);
    if (iVar1 == 0) {
      FUN_0055f8fd(param_1);
    }
    return (float10)(double)CONCAT44(uStack_8,local_c);
  }
  FUN_0055fae8(param_9,0xffff);
  FUN_0055f8fd(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}


/* ==== 0055f8fd FUN_0055f8fd ==== */

void FUN_0055f8fd(int param_1)

{
  if (param_1 == 1) {
    DAT_0074dc60 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    DAT_0074dc60 = 0x22;
    return;
  }
  return;
}


/* ==== 0055f923 FUN_0055f923 ==== */

undefined4 FUN_0055f923(int param_1)

{
  int *piVar1;
  int i;
  
  i = 0;
  piVar1 = &DAT_005c86b0;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(i * 8 + 0x5c86b4);
    }
    piVar1 = piVar1 + 2;
    i = i + 1;
  } while ((int)piVar1 < 0x5c8788);
  return 0;
}


/* ==== 0055f948 FUN_0055f948 ==== */

int FUN_0055f948(byte param_1)

{
  undefined4 uStack_4;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          return (param_1 & 2) << 1;
        }
        uStack_4 = 3;
      }
      else {
        uStack_4 = 2;
      }
    }
    else {
      uStack_4 = 1;
    }
  }
  else {
    uStack_4 = 5;
  }
  return uStack_4;
}


/* ==== 0055f975 __frnd ==== */

/* Library Function - Single Match
    __frnd
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

float10 __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}


/* ==== 0055f987 FUN_0055f987 ==== */

float10 FUN_0055f987(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}


/* ==== 0055f9b0 FUN_0055f9b0 ==== */

undefined4 FUN_0055f9b0(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}


/* ==== 0055fa0a FUN_0055fa0a ==== */

float10 FUN_0055fa0a(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int i;
  float10 fVar4;
  double local_c;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    i = 0;
    local_c = 0.0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    i = -0x3fd;
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar2 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_1_ = (byte)((uint)iVar2 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar2 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
      i = i + -1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar3) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar4 = (float10)FUN_0055f987(CONCAT17(param_2._3_1_,
                                           CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))
                                          ),0);
    local_c = (double)fVar4;
  }
  else {
    fVar4 = (float10)FUN_0055f987(CONCAT17(param_2._3_1_,
                                           CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))
                                          ),0);
    local_c = (double)fVar4;
    i = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = i;
  return (float10)local_c;
}


/* ==== 0055facb FUN_0055facb ==== */

int FUN_0055facb(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


/* ==== 0055fad9 FUN_0055fad9 ==== */

int FUN_0055fad9(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


/* ==== 0055fae8 FUN_0055fae8 ==== */

int FUN_0055fae8(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


/* ==== 0055fb0b FUN_0055fb0b ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fb0b(void)

{
  return;
}


/* ==== 0055fb61 FUN_0055fb61 ==== */

uint FUN_0055fb61(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_00562e5d(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_0055fc3a(param_1[4],param_1[2],param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_005c8ac8;
          }
          else {
            puVar4 = (undefined *)((&DAT_007500a0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 8);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (uint)bVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffffffff;
}


/* ==== 0055fc3a FUN_0055fc3a ==== */

int FUN_0055fc3a(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  char *pcVar8;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  if (param_1 < DAT_007501a0) {
    iVar7 = (param_1 & 0x1f) * 8;
    piVar1 = &DAT_007500a0 + ((int)param_1 >> 5);
    bVar4 = *(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar7 + 4);
    if ((bVar4 & 1) != 0) {
      local_c = (char *)0x0;
      if ((param_3 == (char *)0x0) || ((bVar4 & 2) != 0)) {
        return 0;
      }
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_007500a0)[(int)param_1 >> 5] + iVar7 + 5), cVar3 != '\n')) {
        param_3 = (char *)((int)param_3 - 1);
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar7) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar7),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          DAT_0074dc60 = 9;
          DAT_0074dc64 = 5;
          return -1;
        }
        if (DVar6 != 0x6d) {
          FUN_00560c26(DVar6);
          return -1;
        }
        return 0;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar7);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar7) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar7);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_0055fdd0;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar7),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_0055fdea:
                *pcVar8 = '\r';
LAB_0055fded:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar7) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_0055fdd0:
                  *pcVar8 = '\n';
                  goto LAB_0055fded;
                }
                FUN_00562b76(param_1,0xffffffff,1);
                if (local_5 != '\n') goto LAB_0055fdea;
              }
              else {
                if (local_5 == '\n') goto LAB_0055fdd0;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar7) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return -1;
}


/* ==== 0055fe30 FUN_0055fe30 ==== */

int FUN_0055fe30(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  BOOL BVar6;
  int iVar7;
  char local_418 [1028];
  int i;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  if (param_1 < DAT_007501a0) {
    piVar1 = &DAT_007500a0 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 8;
    bVar3 = *(byte *)(*piVar1 + 4 + iVar7);
    if ((bVar3 & 1) != 0) {
      local_c = 0;
      i = 0;
      if (param_3 == 0) {
        return 0;
      }
      if ((bVar3 & 0x20) != 0) {
        FUN_00562b76(param_1,0,2);
      }
      if ((*(byte *)((undefined4 *)(*piVar1 + iVar7) + 1) & 0x80) == 0) {
        BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar7),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
        if (BVar6 == 0) {
          param_1 = GetLastError();
        }
        else {
          local_c = local_10;
          param_1 = 0;
        }
LAB_0055ff29:
        if (local_c != 0) {
          return local_c - i;
        }
        if (param_1 != 0) {
          if (param_1 == 5) {
            DAT_0074dc60 = 9;
            DAT_0074dc64 = 5;
            return -1;
          }
          FUN_00560c26(param_1);
          return -1;
        }
      }
      else {
        local_8 = param_2;
        param_1 = 0;
        if (param_3 != 0) {
          do {
            pcVar5 = local_418;
            do {
              if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
              pcVar2 = local_8 + 1;
              cVar4 = *local_8;
              local_8 = pcVar2;
              if (cVar4 == '\n') {
                i = i + 1;
                *pcVar5 = '\r';
                pcVar5 = pcVar5 + 1;
              }
              *pcVar5 = cVar4;
              pcVar5 = pcVar5 + 1;
            } while ((int)pcVar5 - (int)local_418 < 0x400);
            BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar7),local_418,(int)pcVar5 - (int)local_418,
                              &local_10,(LPOVERLAPPED)0x0);
            if (BVar6 == 0) {
              param_1 = GetLastError();
              goto LAB_0055ff29;
            }
            local_c = local_c + local_10;
            if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
               (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_0055ff29;
          } while( true );
        }
      }
      if (((*(byte *)(*piVar1 + 4 + iVar7) & 0x40) != 0) && (*param_2 == '\x1a')) {
        return 0;
      }
      DAT_0074dc60 = 0x1c;
      DAT_0074dc64 = 0;
      return -1;
    }
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return -1;
}


/* ==== 0055ffdd FUN_0055ffdd ==== */

int FUN_0055ffdd(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  longlong lVar15;
  char local_1c8;
  char local_1c7 [351];
  byte local_68 [32];
  undefined4 *local_48;
  undefined2 local_42;
  uint local_40;
  byte local_3c;
  undefined1 local_3b;
  byte local_39;
  int local_38;
  byte *local_34;
  byte *local_30;
  undefined8 local_2c;
  int i;
  int j;
  byte local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  uint local_18;
  char k;
  char m;
  char n;
  int local_10;
  char local_9;
  int local_8;
  
  local_19 = '\0';
  bVar1 = *param_2;
  local_8 = 0;
  local_38 = 0;
  pbVar10 = param_2;
  do {
    if (bVar1 == 0) {
LAB_005609e3:
      if (local_18 == 0xffffffff) {
LAB_005609e9:
        if ((local_38 == 0) && (local_19 == '\0')) {
          local_38 = -1;
        }
      }
      return local_38;
    }
    if (DAT_005c8378 < 2) {
      uVar4 = (byte)PTR_s__005c8384[(uint)bVar1 * 2] & 8;
    }
    else {
      uVar4 = FUN_0055c336(bVar1,8);
    }
    if (uVar4 != 0) {
      local_8 = local_8 + -1;
      uVar5 = FUN_00560a6a(&local_8,param_1,param_1);
      FUN_00560a53(uVar5);
      iVar6 = FUN_0055ac61(pbVar10[1]);
      pbVar13 = pbVar10;
      while (pbVar10 = pbVar13 + 1, iVar6 != 0) {
        iVar6 = FUN_0055ac61(pbVar13[2]);
        pbVar13 = pbVar10;
      }
    }
    if (*pbVar10 == 0x25) {
      local_39 = 0;
      local_1c = 0;
      local_1b = '\0';
      m = '\0';
      k = '\0';
      local_1a = '\0';
      iVar6 = 0;
      local_9 = '\0';
      j = 0;
      i = 0;
      local_10 = 0;
      n = '\x01';
      local_34 = (byte *)0x0;
      do {
        uVar4 = (uint)pbVar10[1];
        param_2 = pbVar10 + 1;
        if (DAT_005c8378 < 2) {
          uVar7 = (byte)PTR_s__005c8384[uVar4 * 2] & 4;
        }
        else {
          uVar7 = FUN_0055c336(uVar4,4);
        }
        if (uVar7 == 0) {
          if (uVar4 < 0x4f) {
            if (uVar4 != 0x4e) {
              if (uVar4 == 0x2a) {
                m = m + '\x01';
              }
              else if (uVar4 != 0x46) {
                if (uVar4 == 0x49) {
                  if ((pbVar10[2] != 0x36) || (pbVar10[3] != 0x34)) goto LAB_00560138;
                  local_34 = local_34 + 1;
                  local_2c = 0;
                  param_2 = pbVar10 + 3;
                }
                else if (uVar4 == 0x4c) {
                  n = n + '\x01';
                }
                else {
LAB_00560138:
                  k = k + '\x01';
                }
              }
            }
          }
          else if (uVar4 == 0x68) {
            n = n + -1;
            local_9 = local_9 + -1;
          }
          else {
            if (uVar4 == 0x6c) {
              n = n + '\x01';
            }
            else if (uVar4 != 0x77) goto LAB_00560138;
            local_9 = local_9 + '\x01';
          }
        }
        else {
          i = i + 1;
          local_10 = (uVar4 - 0x30) + local_10 * 10;
        }
        pbVar10 = param_2;
      } while (k == '\0');
      puVar2 = param_3;
      if (m == '\0') {
        local_30 = (byte *)*param_3;
        puVar2 = param_3 + 1;
        local_48 = param_3;
      }
      param_3 = puVar2;
      k = '\0';
      if (local_9 == '\0') {
        if ((*param_2 == 0x53) || (*param_2 == 0x43)) {
          local_9 = '\x01';
        }
        else {
          local_9 = -1;
        }
      }
      uVar4 = *param_2 | 0x20;
      local_40 = uVar4;
      if (uVar4 != 0x6e) {
        if ((uVar4 == 99) || (uVar4 == 0x7b)) {
          local_8 = local_8 + 1;
          local_18 = FUN_00560a39(param_1);
        }
        else {
          local_18 = FUN_00560a6a(&local_8,param_1);
        }
      }
      if ((i != 0) && (local_10 == 0)) {
LAB_005609c3:
        local_8 = local_8 + -1;
        FUN_00560a53(local_18,param_1);
        goto LAB_005609e3;
      }
      if (uVar4 < 0x70) {
        if (uVar4 == 0x6f) {
LAB_005606f0:
          if (local_18 == 0x2d) {
            local_1b = '\x01';
          }
          else if (local_18 != 0x2b) goto LAB_00560725;
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (i != 0)) {
            k = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            local_18 = FUN_00560a39(param_1);
          }
          goto LAB_00560725;
        }
        if (uVar4 != 99) {
          if (uVar4 == 100) goto LAB_005606f0;
          if (uVar4 < 0x65) {
LAB_00560468:
            if (*param_2 != local_18) goto LAB_005609c3;
            local_19 = local_19 + -1;
            if (m == '\0') {
              param_3 = local_48;
            }
            goto LAB_00560944;
          }
          if (0x67 < uVar4) {
            if (uVar4 == 0x69) {
              uVar4 = 100;
              goto LAB_00560226;
            }
            if (uVar4 != 0x6e) goto LAB_00560468;
            iVar6 = local_8;
            lVar15 = local_2c;
            if (m != '\0') goto LAB_00560944;
            goto LAB_0056091e;
          }
          pcVar11 = &local_1c8;
          if (local_18 == 0x2d) {
            local_1c8 = '-';
            pcVar11 = local_1c7;
LAB_0056025c:
            local_10 = local_10 + -1;
            local_8 = local_8 + 1;
            local_18 = FUN_00560a39(param_1);
          }
          else if (local_18 == 0x2b) goto LAB_0056025c;
          if ((i == 0) || (0x15d < local_10)) {
            local_10 = 0x15d;
          }
          while( true ) {
            uVar4 = local_18;
            if (DAT_005c8378 < 2) {
              uVar7 = (byte)PTR_s__005c8384[local_18 * 2] & 4;
            }
            else {
              uVar7 = FUN_0055c336(local_18,4);
            }
            if ((uVar7 == 0) ||
               (iVar6 = local_10 + -1, bVar14 = local_10 == 0, local_10 = iVar6, bVar14)) break;
            j = j + 1;
            *pcVar11 = (char)uVar4;
            pcVar11 = pcVar11 + 1;
            local_8 = local_8 + 1;
            local_18 = FUN_00560a39(param_1);
          }
          if ((DAT_005c837c == (char)uVar4) &&
             (iVar6 = local_10 + -1, bVar14 = local_10 != 0, local_10 = iVar6, bVar14)) {
            local_8 = local_8 + 1;
            uVar4 = FUN_00560a39(param_1);
            *pcVar11 = DAT_005c837c;
            while( true ) {
              pcVar11 = pcVar11 + 1;
              local_18 = uVar4;
              if (DAT_005c8378 < 2) {
                uVar7 = (byte)PTR_s__005c8384[uVar4 * 2] & 4;
              }
              else {
                uVar7 = FUN_0055c336(uVar4,4);
              }
              if ((uVar7 == 0) ||
                 (iVar6 = local_10 + -1, bVar14 = local_10 == 0, local_10 = iVar6, bVar14)) break;
              j = j + 1;
              *pcVar11 = (char)uVar4;
              local_8 = local_8 + 1;
              uVar4 = FUN_00560a39(param_1);
            }
          }
          pcVar12 = pcVar11;
          if ((j != 0) &&
             (((uVar4 == 0x65 || (uVar4 == 0x45)) &&
              (iVar6 = local_10 + -1, bVar14 = local_10 != 0, local_10 = iVar6, bVar14)))) {
            *pcVar11 = 'e';
            pcVar12 = pcVar11 + 1;
            local_8 = local_8 + 1;
            uVar4 = FUN_00560a39(param_1);
            local_18 = uVar4;
            if (uVar4 == 0x2d) {
              *pcVar12 = '-';
              pcVar12 = pcVar11 + 2;
LAB_00560383:
              bVar14 = local_10 != 0;
              local_10 = local_10 + -1;
              if (bVar14) goto LAB_00560392;
              local_10 = 0;
            }
            else if (uVar4 == 0x2b) goto LAB_00560383;
            while( true ) {
              if (DAT_005c8378 < 2) {
                uVar7 = (byte)PTR_s__005c8384[uVar4 * 2] & 4;
              }
              else {
                uVar7 = FUN_0055c336(uVar4,4);
              }
              if ((uVar7 == 0) ||
                 (iVar6 = local_10 + -1, bVar14 = local_10 == 0, local_10 = iVar6, bVar14)) break;
              j = j + 1;
              *pcVar12 = (char)uVar4;
              pcVar12 = pcVar12 + 1;
LAB_00560392:
              local_8 = local_8 + 1;
              uVar4 = FUN_00560a39(param_1);
              local_18 = uVar4;
            }
          }
          local_8 = local_8 + -1;
          FUN_00560a53(uVar4,param_1);
          if (j != 0) {
            if (m == '\0') {
              local_38 = local_38 + 1;
              *pcVar12 = '\0';
              (*(code *)PTR_FUN_005c8660)(n + -1,local_30,&local_1c8);
            }
            goto LAB_00560944;
          }
          goto LAB_005609e3;
        }
        if (i == 0) {
          local_10 = local_10 + 1;
          i = 1;
        }
        if ('\0' < local_9) {
          local_1a = '\x01';
        }
        pcVar11 = s___005c87d0;
LAB_00560549:
        local_1c = 0xff;
        pbVar10 = (byte *)pcVar11;
        pbVar13 = param_2;
LAB_0056054d:
        param_2 = pbVar13;
        _memset(local_68,0,0x20);
        if ((local_40 == 0x7b) && (*pbVar10 == 0x5d)) {
          uVar4 = 0x5d;
          local_68[0xb] = 0x20;
          pbVar10 = pbVar10 + 1;
        }
        else {
          uVar4 = (uint)local_39;
        }
        while (pbVar13 = local_30, bVar1 = *pbVar10, bVar1 != 0x5d) {
          if (((bVar1 == 0x2d) && (bVar9 = (byte)uVar4, bVar9 != 0)) &&
             (bVar3 = pbVar10[1], bVar3 != 0x5d)) {
            if (bVar3 <= bVar9) {
              uVar4 = (uint)bVar3;
              bVar3 = bVar9;
            }
            if ((byte)uVar4 <= bVar3) {
              iVar6 = (bVar3 - uVar4) + 1;
              do {
                local_68[uVar4 >> 3] = local_68[uVar4 >> 3] | '\x01' << ((byte)uVar4 & 7);
                uVar4 = uVar4 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            uVar4 = 0;
            pbVar10 = pbVar10 + 2;
          }
          else {
            uVar4 = (uint)bVar1;
            local_68[bVar1 >> 3] = local_68[bVar1 >> 3] | '\x01' << (bVar1 & 7);
            pbVar10 = pbVar10 + 1;
          }
        }
        if (*pbVar10 == 0) goto LAB_005609e3;
        if (local_40 == 0x7b) {
          param_2 = pbVar10;
        }
        local_8 = local_8 + -1;
        local_34 = local_30;
        FUN_00560a53(local_18,param_1);
        while( true ) {
          if ((i != 0) && (iVar6 = local_10 + -1, bVar14 = local_10 == 0, local_10 = iVar6, bVar14))
          goto LAB_005606b2;
          local_8 = local_8 + 1;
          local_18 = FUN_00560a39(param_1);
          if ((local_18 == 0xffffffff) ||
             (bVar1 = (byte)local_18,
             ((int)(char)(local_68[(int)local_18 >> 3] ^ local_1c) & 1 << (bVar1 & 7)) == 0)) break;
          if (m == '\0') {
            if (local_1a == '\0') {
              *pbVar13 = bVar1;
              pbVar13 = pbVar13 + 1;
              local_30 = pbVar13;
            }
            else {
              local_3c = bVar1;
              if ((PTR_s__005c8384[(local_18 & 0xff) * 2 + 1] & 0x80) != 0) {
                local_8 = local_8 + 1;
                local_3b = FUN_00560a39(param_1);
              }
              FUN_00563ddd(&local_42,&local_3c,DAT_005c8378);
              *(undefined2 *)pbVar13 = local_42;
              pbVar13 = pbVar13 + 2;
              local_30 = pbVar13;
            }
          }
          else {
            local_34 = local_34 + 1;
          }
        }
        local_8 = local_8 + -1;
        FUN_00560a53(local_18,param_1);
LAB_005606b2:
        if (local_34 == pbVar13) goto LAB_005609e3;
        if ((m == '\0') && (local_38 = local_38 + 1, local_40 != 99)) {
          if (local_1a == '\0') {
            *local_30 = 0;
          }
          else {
            local_30[0] = 0;
            local_30[1] = 0;
          }
        }
      }
      else {
        if (uVar4 == 0x70) {
          n = '\x01';
          goto LAB_005606f0;
        }
        if (uVar4 == 0x73) {
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pcVar11 = s_____005c87c8;
          goto LAB_00560549;
        }
        if (uVar4 == 0x75) goto LAB_005606f0;
        if (uVar4 != 0x78) {
          if (uVar4 != 0x7b) goto LAB_00560468;
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pbVar10 = param_2 + 1;
          pbVar13 = pbVar10;
          if (*pbVar10 == 0x5e) {
            pcVar11 = (char *)(param_2 + 2);
            param_2 = pbVar10;
            goto LAB_00560549;
          }
          goto LAB_0056054d;
        }
LAB_00560226:
        if (local_18 == 0x2d) {
          local_1b = '\x01';
LAB_005604b5:
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (i != 0)) {
            k = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            local_18 = FUN_00560a39(param_1);
          }
        }
        else if (local_18 == 0x2b) goto LAB_005604b5;
        if (local_18 == 0x30) {
          local_8 = local_8 + 1;
          local_18 = FUN_00560a39(param_1);
          if (((char)local_18 == 'x') || ((char)local_18 == 'X')) {
            local_8 = local_8 + 1;
            local_18 = FUN_00560a39(param_1);
            uVar4 = 0x78;
          }
          else {
            j = 1;
            if (uVar4 == 0x78) {
              local_8 = local_8 + -1;
              FUN_00560a53(local_18,param_1);
              local_18 = 0x30;
            }
            else {
              uVar4 = 0x6f;
            }
          }
        }
LAB_00560725:
        lVar15 = local_2c;
        if (local_34 == (byte *)0x0) {
          if (k == '\0') {
            while ((uVar7 = local_18, uVar4 != 0x78 && (uVar4 != 0x70))) {
              if (DAT_005c8378 < 2) {
                uVar8 = (byte)PTR_s__005c8384[local_18 * 2] & 4;
              }
              else {
                uVar8 = FUN_0055c336(local_18,4);
              }
              if (uVar8 == 0) goto LAB_005608ec;
              if (uVar4 == 0x6f) {
                if (0x37 < (int)uVar7) goto LAB_005608ec;
                iVar6 = iVar6 << 3;
              }
              else {
                iVar6 = iVar6 * 10;
              }
LAB_005608c4:
              j = j + 1;
              iVar6 = iVar6 + -0x30 + uVar7;
              if ((i != 0) && (local_10 = local_10 + -1, lVar15 = local_2c, local_10 == 0))
              goto LAB_005608fa;
              local_8 = local_8 + 1;
              local_18 = FUN_00560a39(param_1);
            }
            if (DAT_005c8378 < 2) {
              uVar8 = (byte)PTR_s__005c8384[local_18 * 2] & 0x80;
            }
            else {
              uVar8 = FUN_0055c336(local_18,0x80);
            }
            if (uVar8 != 0) {
              iVar6 = iVar6 << 4;
              uVar7 = FUN_00560a02(uVar7);
              local_18 = uVar7;
              goto LAB_005608c4;
            }
LAB_005608ec:
            local_8 = local_8 + -1;
            FUN_00560a53(uVar7,param_1);
            lVar15 = local_2c;
          }
LAB_005608fa:
          if (local_1b != '\0') {
            iVar6 = -iVar6;
          }
        }
        else {
          if (k == '\0') {
            while (uVar7 = local_18, uVar4 != 0x78) {
              if (DAT_005c8378 < 2) {
                uVar8 = (byte)PTR_s__005c8384[local_18 * 2] & 4;
              }
              else {
                uVar8 = FUN_0055c336(local_18,4);
              }
              if (uVar8 == 0) goto LAB_0056080e;
              if (uVar4 == 0x6f) {
                if (0x37 < (int)uVar7) goto LAB_0056080e;
                lVar15 = __allshl();
              }
              else {
                lVar15 = __allmul(local_2c,10,0);
              }
LAB_005607e0:
              j = j + 1;
              local_2c = lVar15 + (int)(uVar7 - 0x30);
              if ((i != 0) && (local_10 = local_10 + -1, lVar15 = local_2c, local_10 == 0))
              goto LAB_0056081c;
              local_8 = local_8 + 1;
              local_18 = FUN_00560a39(param_1);
            }
            if (DAT_005c8378 < 2) {
              uVar8 = (byte)PTR_s__005c8384[local_18 * 2] & 0x80;
            }
            else {
              uVar8 = FUN_0055c336(local_18,0x80);
            }
            if (uVar8 != 0) {
              lVar15 = __allshl();
              local_2c = lVar15;
              uVar7 = FUN_00560a02(uVar7);
              local_18 = uVar7;
              lVar15 = local_2c;
              goto LAB_005607e0;
            }
LAB_0056080e:
            local_8 = local_8 + -1;
            FUN_00560a53(uVar7,param_1);
            lVar15 = local_2c;
          }
LAB_0056081c:
          local_2c._4_4_ = (int)((ulonglong)lVar15 >> 0x20);
          local_2c._0_4_ = (int)lVar15;
          if (local_1b != '\0') {
            lVar15 = CONCAT44(-(local_2c._4_4_ + (uint)((int)local_2c != 0)),-(int)local_2c);
          }
        }
        if (uVar4 == 0x46) {
          j = 0;
        }
        if (j == 0) goto LAB_005609e3;
        local_2c = lVar15;
        if (m == '\0') {
          local_38 = local_38 + 1;
LAB_0056091e:
          local_2c = lVar15;
          if (local_34 == (byte *)0x0) {
            if (n == '\0') {
              *(short *)local_30 = (short)iVar6;
            }
            else {
              *(int *)local_30 = iVar6;
            }
          }
          else {
            *(longlong *)local_30 = lVar15;
          }
        }
      }
LAB_00560944:
      local_19 = local_19 + '\x01';
      param_2 = param_2 + 1;
    }
    else {
      local_8 = local_8 + 1;
      uVar4 = FUN_00560a39(param_1);
      param_2 = pbVar10 + 1;
      local_18 = uVar4;
      if (*pbVar10 != uVar4) goto LAB_005609c3;
      if ((PTR_s__005c8384[(uVar4 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_8 = local_8 + 1;
        uVar7 = FUN_00560a39(param_1);
        bVar1 = *param_2;
        param_2 = pbVar10 + 2;
        if (bVar1 != uVar7) {
          local_8 = local_8 + -1;
          FUN_00560a53(uVar7,param_1);
          local_8 = local_8 + -1;
          FUN_00560a53(uVar4,param_1);
          goto LAB_005609e3;
        }
        local_8 = local_8 + -1;
      }
    }
    if ((local_18 == 0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e)))) goto LAB_005609e9;
    bVar1 = *param_2;
    pbVar10 = param_2;
  } while( true );
}


/* ==== 00560a02 FUN_00560a02 ==== */

uint FUN_00560a02(uint param_1)

{
  uint uVar1;
  
  if (DAT_005c8378 < 2) {
    uVar1 = (byte)PTR_s__005c8384[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_0055c336(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


/* ==== 00560a39 FUN_00560a39 ==== */

uint FUN_00560a39(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_0055fb61(param_1);
  return uVar3;
}


/* ==== 00560a53 FUN_00560a53 ==== */

void FUN_00560a53(int param_1,undefined4 param_2)

{
  if (param_1 != -1) {
    FUN_0055a45a(param_1,param_2);
  }
  return;
}


/* ==== 00560a6a FUN_00560a6a ==== */

undefined4 FUN_00560a6a(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_00560a39(param_2);
    iVar2 = FUN_0055ac61(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}


/* ==== 00560a8e FUN_00560a8e ==== */

int FUN_00560a8e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int iVar1;
  uint uVar2;
  undefined1 local_28 [8];
  int local_20;
  int local_18;
  uint local_14;
  int local_c;
  
  uVar2 = param_1 - 0x76c;
  if (((int)uVar2 < 0x46) || (0x8a < (int)uVar2)) {
    param_6 = -1;
  }
  else {
    param_3 = *(int *)(&DAT_005c9500 + param_2 * 4) + param_3;
    if (((uVar2 & 3) == 0) && (2 < param_2)) {
      param_3 = param_3 + 1;
    }
    FUN_00563515();
    local_20 = param_4;
    local_18 = param_2 + -1;
    param_6 = ((param_4 + (uVar2 * 0x16d + param_3 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c +
              param_5) * 0x3c + DAT_005c8c58 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_005c8c5c != 0)) &&
        (local_14 = uVar2, local_c = param_3, iVar1 = FUN_00563788(local_28), iVar1 != 0)))) {
      param_6 = param_6 + DAT_005c8c60;
    }
  }
  return param_6;
}


/* ==== 00560b50 FUN_00560b50 ==== */

undefined1 * FUN_00560b50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_1[6];
  iVar2 = param_1[4];
  puVar4 = &DAT_0074dd2c;
  iVar6 = 0;
  do {
    puVar3 = puVar4;
    iVar7 = iVar6 + 1;
    *puVar3 = (&DAT_00579d3c)[iVar1 * 3 + iVar6];
    (&DAT_0074dd30)[iVar6] = (&UNK_00579d53)[iVar7 + iVar2 * 3];
    puVar4 = puVar3 + 1;
    iVar6 = iVar7;
  } while (iVar7 < 3);
  puVar3[1] = 0x20;
  puVar3[5] = 0x20;
  puVar4 = (undefined1 *)FUN_00560bfe(puVar3 + 6,param_1[3]);
  *puVar4 = 0x20;
  puVar4 = (undefined1 *)FUN_00560bfe(puVar4 + 1,param_1[2]);
  *puVar4 = 0x3a;
  puVar4 = (undefined1 *)FUN_00560bfe(puVar4 + 1,param_1[1]);
  *puVar4 = 0x3a;
  puVar4 = (undefined1 *)FUN_00560bfe(puVar4 + 1,*param_1);
  *puVar4 = 0x20;
  uVar5 = FUN_00560bfe(puVar4 + 1,(int)param_1[5] / 100 + 0x13);
  puVar4 = (undefined1 *)FUN_00560bfe(uVar5,(int)param_1[5] % 100);
  *puVar4 = 10;
  puVar4[1] = 0;
  return &DAT_0074dd2c;
}


/* ==== 00560bfe FUN_00560bfe ==== */

char * FUN_00560bfe(char *param_1,int param_2)

{
  *param_1 = (char)(param_2 / 10) + '0';
  param_1[1] = (char)(param_2 % 10) + '0';
  return param_1 + 2;
}


/* ==== 00560c26 FUN_00560c26 ==== */

void FUN_00560c26(uint param_1)

{
  uint *puVar1;
  int i;
  
  i = 0;
  DAT_0074dc64 = param_1;
  puVar1 = &DAT_005c87d8;
  do {
    if (param_1 == *puVar1) {
      DAT_0074dc60 = *(undefined4 *)(i * 8 + 0x5c87dc);
      return;
    }
    puVar1 = puVar1 + 2;
    i = i + 1;
  } while ((int)puVar1 < 0x5c8940);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    DAT_0074dc60 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (DAT_0074dc60 = 8, 0xca < param_1)) {
    DAT_0074dc60 = 0x16;
  }
  return;
}


/* ==== 00560c90 __allmul ==== */

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


/* ==== 00560cd0 __aulldiv ==== */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int i;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar5;
  
  uVar8 = param_1;
  uVar5 = param_4;
  uVar6 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    i = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
             (ulonglong)param_3);
  }
  else {
    do {
      uVar4 = uVar5 >> 1;
      uVar3 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar6 >> 1;
      uVar8 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar8) >> 1);
      uVar5 = uVar4;
      uVar6 = uVar7;
    } while (uVar4 != 0);
    uVar1 = CONCAT44(uVar7,uVar8) / (ulonglong)uVar3;
    i = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + i * param_4;
    if (((CARRY4(uVar3,i * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      i = i + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,i);
}


/* ==== 00560d38 FUN_00560d38 ==== */

undefined4 FUN_00560d38(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    uVar2 = FUN_0055da5c();
    return uVar2;
  }
  if ((DAT_0074dd48 != (code *)0x0) && (iVar3 = FUN_005655a4(DAT_0074dd48), iVar3 != 0)) {
    uVar2 = (*DAT_0074dd48)(param_1);
    return uVar2;
  }
  return 0;
}


/* ==== 00560d9c FUN_00560d9c ==== */

undefined4 FUN_00560d9c(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint k;
  BYTE *pBVar7;
  int m;
  byte *pbVar8;
  int j;
  byte *pbVar9;
  undefined4 *puVar10;
  _cpinfo cpinfo;
  uint i;
  
  CodePage = FUN_00560f35(param_1);
  if (CodePage == DAT_007501a4) {
    return 0;
  }
  if (CodePage != 0) {
    j = 0;
    pUVar5 = &DAT_005c8948;
    do {
      if (*pUVar5 == CodePage) {
        puVar10 = &DAT_007502c0;
        for (m = 0x40; m != 0; m = m + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        i = 0;
        j = j * 0x30;
        *(undefined1 *)puVar10 = 0;
        pbVar9 = (byte *)(j + 0x5c8958);
        do {
          bVar3 = *pbVar9;
          pbVar8 = pbVar9;
          while ((bVar3 != 0 && (bVar3 = pbVar8[1], bVar3 != 0))) {
            k = (uint)*pbVar8;
            if (k <= bVar3) {
              bVar4 = (&DAT_005c8940)[i];
              do {
                pbVar2 = (byte *)((int)&DAT_007502c0 + k + 1);
                *pbVar2 = *pbVar2 | bVar4;
                k = k + 1;
              } while (k <= bVar3);
            }
            pbVar8 = pbVar8 + 2;
            bVar3 = *pbVar8;
          }
          i = i + 1;
          pbVar9 = pbVar9 + 8;
        } while (i < 4);
        DAT_007501bc = 1;
        DAT_007501a4 = CodePage;
        DAT_007503c4 = FUN_00560f7f(CodePage);
        DAT_007501b0 = *(undefined4 *)(j + 0x5c894c);
        DAT_007501b4 = *(undefined4 *)(j + 0x5c8950);
        DAT_007501b8 = *(undefined4 *)(j + 0x5c8954);
        goto LAB_00560f24;
      }
      pUVar5 = pUVar5 + 0xc;
      j = j + 1;
    } while ((int)pUVar5 < 0x5c8a38);
    BVar6 = GetCPInfo(CodePage,&cpinfo);
    if (BVar6 == 1) {
      puVar10 = &DAT_007502c0;
      DAT_007501a4 = CodePage;
      for (j = 0x40; j != 0; j = j + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)puVar10 = 0;
      DAT_007503c4 = 0;
      if (cpinfo.MaxCharSize < 2) {
        DAT_007501bc = 0;
      }
      else {
        if (cpinfo.LeadByte[0] != '\0') {
          pBVar7 = cpinfo.LeadByte + 1;
          do {
            bVar3 = *pBVar7;
            if (bVar3 == 0) break;
            for (k = (uint)pBVar7[-1]; k <= bVar3; k = k + 1) {
              pbVar9 = (byte *)((int)&DAT_007502c0 + k + 1);
              *pbVar9 = *pbVar9 | 4;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        k = 1;
        do {
          pbVar9 = (byte *)((int)&DAT_007502c0 + k + 1);
          *pbVar9 = *pbVar9 | 8;
          k = k + 1;
        } while (k < 0xff);
        DAT_007503c4 = FUN_00560f7f(CodePage);
        DAT_007501bc = 1;
      }
      DAT_007501b0 = 0;
      DAT_007501b4 = 0;
      DAT_007501b8 = 0;
      goto LAB_00560f24;
    }
    if (DAT_0074dd4c == 0) {
      return 0xffffffff;
    }
  }
  FUN_00560fb2();
LAB_00560f24:
  FUN_00560fdb();
  return 0;
}


/* ==== 00560f35 FUN_00560f35 ==== */

int FUN_00560f35(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_0074dd4c = 1;
                    /* WARNING: Could not recover jumptable at 0x00560f4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_0074dd4c = 1;
                    /* WARNING: Could not recover jumptable at 0x00560f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_0074dcf4;
  }
  DAT_0074dd4c = (uint)bVar2;
  return param_1;
}


/* ==== 00560f7f FUN_00560f7f ==== */

undefined4 FUN_00560f7f(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}


/* ==== 00560fb2 FUN_00560fb2 ==== */

void FUN_00560fb2(void)

{
  int i;
  undefined4 *puVar1;
  
  puVar1 = &DAT_007502c0;
  for (i = 0x40; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 *)puVar1 = 0;
  DAT_007501a4 = 0;
  DAT_007501bc = 0;
  DAT_007503c4 = 0;
  DAT_007501b0 = 0;
  DAT_007501b4 = 0;
  DAT_007501b8 = 0;
  return;
}


/* ==== 00560fdb FUN_00560fdb ==== */

void FUN_00560fdb(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint i;
  char cVar3;
  uint j;
  uint k;
  ushort *puVar4;
  undefined1 uVar5;
  BYTE *pBVar6;
  undefined4 *puVar7;
  ushort local_518 [256];
  undefined1 local_318 [256];
  undefined1 local_218 [256];
  undefined4 local_118 [64];
  _cpinfo cpinfo;
  
  BVar2 = GetCPInfo(DAT_007501a4,&cpinfo);
  if (BVar2 == 1) {
    i = 0;
    do {
      *(char *)((int)local_118 + i) = (char)i;
      i = i + 1;
    } while (i < 0x100);
    local_118[0]._0_1_ = 0x20;
    if (cpinfo.LeadByte[0] != 0) {
      pBVar6 = cpinfo.LeadByte + 1;
      do {
        i = (uint)cpinfo.LeadByte[0];
        if (i <= *pBVar6) {
          j = (*pBVar6 - i) + 1;
          puVar7 = (undefined4 *)((int)local_118 + i);
          for (k = j >> 2; k != 0; k = k - 1) {
            *puVar7 = 0x20202020;
            puVar7 = puVar7 + 1;
          }
          for (j = j & 3; j != 0; j = j - 1) {
            *(undefined1 *)puVar7 = 0x20;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        cpinfo.LeadByte[0] = pBVar6[1];
        pBVar6 = pBVar6 + 2;
      } while (cpinfo.LeadByte[0] != 0);
    }
    FUN_00565391(1,local_118,0x100,local_518,DAT_007501a4,DAT_007503c4,0);
    FUN_0055c112(DAT_007503c4,0x100,local_118,0x100,local_218,0x100,DAT_007501a4,0);
    FUN_0055c112(DAT_007503c4,0x200,local_118,0x100,local_318,0x100,DAT_007501a4,0);
    i = 0;
    puVar4 = local_518;
    do {
      if ((*puVar4 & 1) == 0) {
        if ((*puVar4 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_007502c0 + i + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar5 = local_318[i];
          goto LAB_005610e7;
        }
        (&DAT_007501c0)[i] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_007502c0 + i + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar5 = local_218[i];
LAB_005610e7:
        (&DAT_007501c0)[i] = uVar5;
      }
      i = i + 1;
      puVar4 = puVar4 + 1;
    } while (i < 0x100);
  }
  else {
    i = 0;
    do {
      if ((i < 0x41) || (0x5a < i)) {
        if ((0x60 < i) && (i < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_007502c0 + i + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar3 = (char)i + -0x20;
          goto LAB_00561131;
        }
        (&DAT_007501c0)[i] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_007502c0 + i + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar3 = (char)i + ' ';
LAB_00561131:
        (&DAT_007501c0)[i] = cVar3;
      }
      i = i + 1;
    } while (i < 0x100);
  }
  return;
}


/* ==== 00561160 FUN_00561160 ==== */

void FUN_00561160(void)

{
  if (DAT_007503d4 == 0) {
    FUN_00560d9c(0xfffffffd);
    DAT_007503d4 = 1;
  }
  return;
}


/* ==== 0056117c FUN_0056117c ==== */

byte * FUN_0056117c(byte *dest,byte *source,uint count)

{
  byte bVar1;
  byte bVar2;
  uint j;
  uint i;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_007501bc == 0) {
    dest = (byte *)_strncpy((char *)dest,(char *)source,count);
  }
  else {
    i = 0;
    pbVar4 = dest;
    pbVar3 = dest;
    if (count != 0) {
      do {
        bVar1 = *source;
        i = count - 1;
        bVar2 = *(byte *)((int)&DAT_007502c0 + bVar1 + 1);
        *pbVar3 = bVar1;
        if ((bVar2 & 4) == 0) {
          pbVar4 = pbVar3 + 1;
          source = source + 1;
          if (bVar1 == 0) goto LAB_005611e5;
        }
        else {
          pbVar4 = pbVar3 + 1;
          if (i == 0) {
            *pbVar3 = 0;
            goto LAB_005611e5;
          }
          bVar1 = source[1];
          i = count - 2;
          *pbVar4 = bVar1;
          pbVar4 = pbVar3 + 2;
          source = source + 2;
          if (bVar1 == 0) {
            *pbVar3 = 0;
            goto LAB_005611e5;
          }
        }
        count = i;
        pbVar3 = pbVar4;
      } while (i != 0);
      i = 0;
    }
LAB_005611e5:
    if (i != 0) {
      for (j = i >> 2; j != 0; j = j - 1) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4 = pbVar4 + 4;
      }
      for (i = i & 3; i != 0; i = i - 1) {
        *pbVar4 = 0;
        pbVar4 = pbVar4 + 1;
      }
    }
  }
  return dest;
}


/* ==== 00561206 FUN_00561206 ==== */

undefined * FUN_00561206(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 uStack_c;
  int local_8;
  
  uVar3 = 0;
  uVar1 = FUN_005661cf(local_1c,&local_8,param_1,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_00565b6a(local_1c,&local_10);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_10 = 0;
    uStack_c = 0;
  }
  *(uint *)PTR_DAT_005c8a38 = uVar3;
  *(int *)(PTR_DAT_005c8a38 + 4) = local_8 - param_1;
  *(ulonglong *)(PTR_DAT_005c8a38 + 0x10) = CONCAT44(uStack_c,local_10);
  return PTR_DAT_005c8a38;
}


/* ==== 00561297 FUN_00561297 ==== */

LONG FUN_00561297(undefined4 param_1,_EXCEPTION_POINTERS *exception_pointers)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int i;
  undefined4 *puVar6;
  
  piVar4 = (int *)FUN_005613d8(param_1);
  uVar3 = DAT_0074dd68;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(exception_pointers);
  }
  else if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    LVar5 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DAT_0074dd68 = exception_pointers;
      if (piVar4[1] == 8) {
        if (DAT_005c8ab8 < DAT_005c8abc + DAT_005c8ab8) {
          i = (DAT_005c8abc + DAT_005c8ab8) - DAT_005c8ab8;
          puVar6 = (undefined4 *)(DAT_005c8ab8 * 0xc + 0x5c8a48);
          do {
            *puVar6 = 0;
            puVar6 = puVar6 + 3;
            i = i + -1;
          } while (i != 0);
        }
        uVar2 = DAT_005c8ac4;
        i = *piVar4;
        if (i == -0x3fffff72) {
          DAT_005c8ac4 = 0x83;
        }
        else if (i == -0x3fffff70) {
          DAT_005c8ac4 = 0x81;
        }
        else if (i == -0x3fffff6f) {
          DAT_005c8ac4 = 0x84;
        }
        else if (i == -0x3fffff6d) {
          DAT_005c8ac4 = 0x85;
        }
        else if (i == -0x3fffff73) {
          DAT_005c8ac4 = 0x82;
        }
        else if (i == -0x3fffff71) {
          DAT_005c8ac4 = 0x86;
        }
        else if (i == -0x3fffff6e) {
          DAT_005c8ac4 = 0x8a;
        }
        (*pcVar1)(8,DAT_005c8ac4);
        DAT_005c8ac4 = uVar2;
      }
      else {
        piVar4[2] = 0;
        (*pcVar1)(piVar4[1]);
      }
    }
    LVar5 = -1;
    DAT_0074dd68 = (_EXCEPTION_POINTERS *)uVar3;
  }
  return LVar5;
}


/* ==== 005613d8 FUN_005613d8 ==== */

int * FUN_005613d8(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_005c8a40;
  if (DAT_005c8a40 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_005c8a40 + DAT_005c8ac0 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_005c8a40 + DAT_005c8ac0 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


/* ==== 0056141b FUN_0056141b ==== */

byte * FUN_0056141b(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_007503d4 == 0) {
    FUN_00561160();
  }
  bVar1 = *DAT_00751404;
  pbVar4 = DAT_00751404;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_005666a0(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_00561458;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_00561458:
  }
  return pbVar4;
}


/* ==== 00561473 FUN_00561473 ==== */

void FUN_00561473(void)

{
  char cVar1;
  size_t _strlen_result;
  undefined4 *puVar2;
  void *_malloc_result;
  int i;
  char *str;
  
  if (DAT_007503d4 == 0) {
    FUN_00561160();
  }
  i = 0;
  for (str = DAT_0074dc50; *str != '\0'; str = str + _strlen_result + 1) {
    if (*str != '=') {
      i = i + 1;
    }
    _strlen_result = _strlen(str);
  }
  puVar2 = _malloc(i * 4 + 4);
  DAT_0074dc88 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_0074dc50;
  str = DAT_0074dc50;
  while (cVar1 != '\0') {
    _strlen_result = _strlen(str);
    if (*str != '=') {
      _malloc_result = _malloc(_strlen_result + 1);
      *puVar2 = _malloc_result;
      if (_malloc_result == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_0055ee40(*puVar2,str);
      puVar2 = puVar2 + 1;
    }
    str = str + _strlen_result + 1;
    cVar1 = *str;
  }
  FUN_00559d4e(DAT_0074dc50);
  DAT_0074dc50 = (char *)0x0;
  *puVar2 = 0;
  DAT_007503d0 = 1;
  return;
}


/* ==== 0056152c FUN_0056152c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056152c(void)

{
  void *_malloc_result;
  char *pcVar1;
  int local_c;
  int local_8;
  
  if (DAT_007503d4 == 0) {
    FUN_00561160();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_0074dd6c,0x104);
  _DAT_0074dc98 = &DAT_0074dd6c;
  pcVar1 = &DAT_0074dd6c;
  if (*DAT_00751404 != '\0') {
    pcVar1 = DAT_00751404;
  }
  FUN_005615c5(pcVar1,0,0,&local_8,&local_c);
  _malloc_result = _malloc(local_c + local_8 * 4);
  if (_malloc_result == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_005615c5(pcVar1,_malloc_result,(void *)((int)_malloc_result + local_8 * 4),&local_8,&local_c);
  _DAT_0074dc80 = _malloc_result;
  _DAT_0074dc7c = local_8 + -1;
  return;
}


/* ==== 005615c5 FUN_005615c5 ==== */

void FUN_005615c5(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint i;
  undefined4 *puVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_007502c0 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_007502c0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_00561670;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_00561670:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar6 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = param_3;
      puVar6 = puVar6 + 1;
      param_2 = puVar6;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      i = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        i = i + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((i & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar6 = param_2;
        }
        i = i >> 1;
        pbVar4 = pbVar5;
      }
      for (; i != 0; i = i - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_007502c0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_007502c0 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


/* ==== 00561779 FUN_00561779 ==== */

LPSTR FUN_00561779(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR _malloc_result;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_0074de70 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_0074de70 = 1;
LAB_005617d0:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      _malloc_result = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         _malloc_result = pCVar6, iVar5 == 0)) {
        FUN_00559d4e(pCVar6);
        _malloc_result = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return _malloc_result;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_0074de70 = 2;
  }
  else {
    if (DAT_0074de70 == 1) goto LAB_005617d0;
    if (DAT_0074de70 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_0055b3c0(pCVar6,pCVar9,pcVar7 + (1 - (int)pCVar9));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}


/* ==== 005618ab FUN_005618ab ==== */

void FUN_005618ab(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  byte *pbVar5;
  int j;
  UINT *pUVar6;
  UINT UVar7;
  UINT UVar8;
  uint i;
  _STARTUPINFOA startupinfo;
  
  puVar2 = _malloc(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_007501a0 = 0x20;
  DAT_007500a0 = puVar2;
  for (; puVar2 < DAT_007500a0 + 0x40; puVar2 = puVar2 + 2) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&startupinfo);
  if ((startupinfo.cbReserved2 != 0) && ((UINT *)startupinfo.lpReserved2 != (UINT *)0x0)) {
    UVar7 = *(UINT *)startupinfo.lpReserved2;
    pUVar6 = (UINT *)((int)startupinfo.lpReserved2 + 4);
    pbVar5 = (byte *)(UVar7 + (int)pUVar6);
    if (0x7ff < (int)UVar7) {
      UVar7 = 0x800;
    }
    UVar8 = UVar7;
    if ((int)DAT_007501a0 < (int)UVar7) {
      puVar2 = &DAT_007500a4;
      do {
        puVar3 = _malloc(0x100);
        UVar8 = DAT_007501a0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_007501a0 = DAT_007501a0 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x40; puVar3 = puVar3 + 2) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar8 = UVar7;
      } while ((int)DAT_007501a0 < (int)UVar7);
    }
    i = 0;
    if (0 < (int)UVar8) {
      do {
        if (((*(HANDLE *)pbVar5 != (HANDLE)0xffffffff) && ((*pUVar6 & 1) != 0)) &&
           (((*pUVar6 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)pbVar5), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_007500a0)[(int)i >> 5] + (i & 0x1f) * 8);
          *puVar2 = *(undefined4 *)pbVar5;
          *(byte *)(puVar2 + 1) = (byte)*pUVar6;
        }
        i = i + 1;
        pUVar6 = (UINT *)((int)pUVar6 + 1);
        pbVar5 = pbVar5 + 4;
      } while ((int)i < (int)UVar8);
    }
  }
  j = 0;
  do {
    puVar2 = DAT_007500a0 + j * 2;
    if (DAT_007500a0[j * 2] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (j == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (j != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_00561a3c;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_00561a3c:
    j = j + 1;
    if (2 < j) {
      SetHandleCount(DAT_007501a0);
      return;
    }
  } while( true );
}


/* ==== 00561a56 FUN_00561a56 ==== */

undefined4 FUN_00561a56(int param_1)

{
  int iVar1;
  
  DAT_0075008c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_0075008c != (HANDLE)0x0) {
    iVar1 = FUN_0056201c();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_0075008c);
  }
  return 0;
}


/* ==== 00561a92 FUN_00561a92 ==== */

void FUN_00561a92(void)

{
  if ((DAT_0074dc58 == 1) || ((DAT_0074dc58 == 0 && (DAT_005c7bd4 == 1)))) {
    FUN_00561acb(0xfc);
    if (DAT_0074de74 != (code *)0x0) {
      (*DAT_0074de74)();
    }
    FUN_00561acb(0xff);
  }
  return;
}


/* ==== 00561acb FUN_00561acb ==== */

void FUN_00561acb(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t _strlen_result;
  HANDLE hFile;
  int i;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  char *pcStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  i = 0;
  pDVar2 = &DAT_005c8ad8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    i = i + 1;
  } while ((int)pDVar2 < 0x5c8b68);
  if (param_1 == (&DAT_005c8ad8)[i * 2]) {
    if ((DAT_0074dc58 == 1) || ((DAT_0074dc58 == 0 && (DAT_005c7bd4 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(i * 8 + 0x5c8adc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      _strlen_result = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      pcStackY_1c4 = (char *)0x561c14;
      hFile = GetStdHandle(0xfffffff4);
      pcStackY_1c4 = (char *)0x561c1b;
      WriteFile(hFile,lpBuffer,_strlen_result,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_0055ee40();
      }
      _strlen_result = _strlen(local_1a8);
      if (0x3c < _strlen_result + 1) {
        _strlen_result = _strlen(local_1a8);
        pcStackY_1c4 = (char *)0x561b95;
        _strncpy(acStackY_1e3 + _strlen_result,"...",3);
      }
      FUN_0055ee40();
      pcStackY_1c4 = (char *)0x561bb6;
      FUN_0055ee50();
      puStackY_1c8 = local_a4;
      pcStackY_1c4 = s__005be68c;
      uStackY_1cc = 0x561bc7;
      FUN_0055ee50();
      uStackY_1cc = *(undefined4 *)(i * 8 + 0x5c8adc);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x561bd9;
      FUN_0055ee50();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      acStackY_1e3[3] = -0x11;
      acStackY_1e3[4] = '\x1b';
      acStackY_1e3[5] = 'V';
      acStackY_1e3[6] = '\0';
      FUN_005666e2();
    }
  }
  return;
}


/* ==== 00561dde FUN_00561dde ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined5 FUN_00561dde(void)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  undefined1 extraout_DL;
  undefined1 in_DL;
  int unaff_EBP;
  float10 in_ST0;
  float10 fVar2;
  float10 fVar3;
  undefined4 unaff_retaddr;
  
  fVar2 = ABS(in_ST0);
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(_DAT_005c8b8e < fVar2) << 8 | (ushort)(NAN(_DAT_005c8b8e) || NAN(fVar2)) << 10 |
       (ushort)(_DAT_005c8b8e == fVar2) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 0x41) == 0) {
    fVar3 = ROUND(in_ST0);
    fVar2 = (float10)0;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
         (ushort)(fVar3 == fVar2) << 0xe;
    fVar3 = in_ST0 - fVar3;
    fVar2 = (float10)0;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
         (ushort)(fVar3 == fVar2) << 0xe;
    f2xm1(ABS(fVar3));
    return CONCAT14(*(undefined1 *)(unaff_EBP + -0x9f),in_EAX);
  }
  fVar2 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < fVar2) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar2)) << 10 |
       (ushort)(in_ST0 == fVar2) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return CONCAT14(in_DL,unaff_retaddr);
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 4;
  uVar1 = FUN_0055e0f6();
  return CONCAT14(extraout_DL,uVar1);
}


/* ==== 00561e87 FUN_00561e87 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00561e87(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_005c8788;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_00561f12:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_00561fad;
        if (param_3 < 0.0) goto LAB_00561f44;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_00561fb7(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_005c8788;
          if (iVar3 == 1) {
            dVar2 = -_DAT_005c8788;
          }
          goto LAB_00561fad;
        }
        if (param_3 < 0.0) {
          if (iVar3 == 1) {
            dVar2 = -0.0;
          }
          else {
            dVar2 = 0.0;
          }
          goto LAB_00561fad;
        }
      }
      dVar2 = 1.0;
      goto LAB_00561fad;
    }
    if (1.0 < dVar1) goto LAB_00561fad;
    if (1.0 <= dVar1) {
LAB_00561ed7:
      *param_4 = -NAN;
      return 1;
    }
  }
  else {
    if ((param_3._4_4_ != -0x100000) || (param_3._0_4_ != 0)) goto LAB_00561f12;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_00561ed7;
      goto LAB_00561fad;
    }
  }
LAB_00561f44:
  dVar2 = 0.0;
LAB_00561fad:
  *param_4 = dVar2;
  return 0;
}


/* ==== 00561fb7 FUN_00561fb7 ==== */

undefined4 FUN_00561fb7(double param_1)

{
  uint uVar1;
  float10 __frnd_result;
  undefined4 uVar2;
  undefined8 extraout_var;
  
  uVar1 = FUN_005674fb(param_1);
  if ((uVar1 & 0x90) == 0) {
    __frnd_result = (float10)__frnd(param_1,extraout_var);
    if ((double)__frnd_result == param_1) {
      __frnd_result = (float10)__frnd();
      if (__frnd_result == (float10)(param_1 / 2.0)) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
      return uVar2;
    }
  }
  return 0;
}


/* ==== 0056201c FUN_0056201c ==== */

undefined4 FUN_0056201c(void)

{
  DAT_00750088 = HeapAlloc(DAT_0075008c,0,0x140);
  if (DAT_00750088 == (LPVOID)0x0) {
    return 0;
  }
  DAT_00750080 = 0;
  DAT_00750084 = 0;
  DAT_0075007c = DAT_00750088;
  DAT_00750074 = 0x10;
  return 1;
}


/* ==== 0056205a FUN_0056205a ==== */

uint FUN_0056205a(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00750088;
  while( true ) {
    if (DAT_00750088 + DAT_00750084 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


/* ==== 00562085 FUN_00562085 ==== */

void FUN_00562085(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_00750078;
  puVar2 = DAT_00750080;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_00750080 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_00750078 * 0x8000 + DAT_00750080[3]),0x8000,0x4000);
    DAT_00750080[2] = DAT_00750080[2] | 0x80000000U >> ((byte)DAT_00750078 & 0x1f);
    *(undefined4 *)(DAT_00750080[4] + 0xc4 + DAT_00750078 * 4) = 0;
    *(char *)(DAT_00750080[4] + 0x43) = *(char *)(DAT_00750080[4] + 0x43) + -1;
    if (*(char *)(DAT_00750080[4] + 0x43) == '\0') {
      DAT_00750080[1] = DAT_00750080[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_00750080[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_00750080[3],0,0x8000);
      HeapFree(DAT_0075008c,0,(LPVOID)DAT_00750080[4]);
      FUN_005580e0(DAT_00750080,DAT_00750080 + 5,
                   (DAT_00750084 * 0x14 - (int)DAT_00750080) + -0x14 + DAT_00750088);
      DAT_00750084 = DAT_00750084 + -1;
      if (DAT_00750080 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_0075007c = DAT_00750088;
      puVar2 = param_1;
    }
  }
  DAT_00750080 = puVar2;
  DAT_00750078 = uVar5;
  return;
}


/* ==== 005623b0 FUN_005623b0 ==== */

int * FUN_005623b0(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int i;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int j;
  
  puVar8 = DAT_00750088 + DAT_00750084 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  i = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)i;
  param_1 = DAT_0075007c;
  if (i < 0x20) {
    local_10 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_00750088;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_0075007c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_0075007c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_00750088;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_0075007c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_0075007c) && (param_1 = (uint *)FUN_005626b9(), param_1 == (uint *)0x0))
        {
          return (int *)0x0;
        }
      }
      uVar5 = FUN_0056276a(param_1);
      *(undefined4 *)param_1[4] = uVar5;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  j = *piVar4;
  if ((j == -1) || ((piVar4[j + 0x31] & local_c) == 0 && (piVar4[j + 0x11] & local_10) == 0)) {
    j = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        j = j + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  i = 0;
  piVar2 = piVar4 + j * 0x81 + 0x51;
  local_10 = piVar4[j + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[j + 0x31] & local_c;
    i = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    i = i + 1;
  }
  piVar10 = (int *)piVar2[i * 2 + 1];
  iVar9 = *piVar10 - uVar7;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_0075007c = param_1;
  if (iVar14 != i) {
    if (piVar10[1] == piVar10[2]) {
      if (i < 0x20) {
        pcVar1 = (char *)((int)piVar4 + i + 4);
        uVar13 = ~(0x80000000U >> ((byte)i & 0x1f));
        piVar4[j + 0x11] = uVar13 & piVar4[j + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + i + 4);
        uVar13 = ~(0x80000000U >> ((byte)i - 0x20 & 0x1f));
        piVar4[j + 0x31] = piVar4[j + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_00562676;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar6 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar4[j + 0x11] = piVar4[j + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar4[j + 0x31] = piVar4[j + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_00562676:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar7 + 1;
  *(uint *)((int)piVar10 + (uVar7 - 4)) = uVar7 + 1;
  i = *piVar2;
  *piVar2 = i + 1;
  if (((i == 0) && (param_1 == DAT_00750080)) && (j == DAT_00750078)) {
    DAT_00750080 = (uint *)0x0;
  }
  *piVar4 = j;
  return piVar10 + 1;
}


/* ==== 005626b9 FUN_005626b9 ==== */

undefined4 * FUN_005626b9(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00750084 == DAT_00750074) {
    pvVar2 = HeapReAlloc(DAT_0075008c,0,DAT_00750088,(DAT_00750074 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00750074 = DAT_00750074 + 0x10;
    DAT_00750088 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00750088 + DAT_00750084 * 0x14);
  pvVar2 = HeapAlloc(DAT_0075008c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00750084 = DAT_00750084 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_0075008c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


/* ==== 0056276a FUN_0056276a ==== */

int FUN_0056276a(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int j;
  int i;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  i = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    i = i + 1;
  }
  j = 0x3f;
  iVar4 = i * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    j = j + -1;
  } while (j != 0);
  lpAddress = (int *)(i * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    i = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + i * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + i * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)i & 0x1f));
  }
  return i;
}


/* ==== 00562865 FUN_00562865 ==== */

undefined4 FUN_00562865(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar6 = param_1[4];
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar4 = uVar10 * 0x204 + 0x144 + uVar6;
  iVar7 = *(int *)(param_2 + -4);
  param_3 = iVar7 + -1;
  uVar13 = *(uint *)(iVar7 + -5 + param_2);
  iVar7 = iVar7 + -5 + param_2;
  if (param_3 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + param_3) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (*(int *)(iVar7 + 4) == *(int *)(iVar7 + 8)) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar6);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar8 = (uint *)(uVar6 + 0x44 + uVar10 * 4);
        *puVar8 = *puVar8 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar6);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar8 = (uint *)(uVar6 + 0xc4 + uVar10 * 4);
        *puVar8 = *puVar8 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar7 + 8) + 4) = *(undefined4 *)(iVar7 + 4);
    *(undefined4 *)(*(int *)(iVar7 + 4) + 8) = *(undefined4 *)(iVar7 + 8);
    iVar7 = uVar13 + (param_3 - uVar12);
    if (0 < iVar7) {
      uVar13 = (iVar7 >> 4) - 1;
      iVar2 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar4 = iVar4 + uVar13 * 8;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar4 + 4);
      *(int *)(iVar2 + 8) = iVar4;
      *(int *)(iVar4 + 4) = iVar2;
      *(int *)(*(int *)(iVar2 + 4) + 8) = iVar2;
      if (*(int *)(iVar2 + 4) == *(int *)(iVar2 + 8)) {
        cVar5 = *(char *)(uVar13 + 4 + uVar6);
        *(char *)(uVar13 + 4 + uVar6) = cVar5 + '\x01';
        bVar9 = (byte)uVar13;
        if (uVar13 < 0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
          }
          puVar8 = (uint *)(uVar6 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar6 + 0xc4 + uVar10 * 4);
          bVar9 = bVar9 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> (bVar9 & 0x1f);
      }
      piVar3 = (int *)(param_2 + -4 + uVar12);
      *piVar3 = iVar7;
      *(int *)(iVar7 + -4 + (int)piVar3) = iVar7;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < param_3) {
    param_3 = param_3 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar3 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar3[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (*(int *)(iVar7 + 4) == *(int *)(iVar7 + 8)) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar6);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar8 = (uint *)(uVar6 + 0x44 + uVar10 * 4);
          *puVar8 = *puVar8 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar6);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar8 = (uint *)(uVar6 + 0xc4 + uVar10 * 4);
          *puVar8 = *puVar8 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(undefined4 *)(*(int *)(iVar7 + 8) + 4) = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)(*(int *)(iVar7 + 4) + 8) = *(undefined4 *)(iVar7 + 8);
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar7 = iVar4 + uVar11 * 8;
    piVar3[1] = *(int *)(iVar4 + 4 + uVar11 * 8);
    piVar3[2] = iVar7;
    *(int **)(iVar7 + 4) = piVar3;
    *(int **)(piVar3[1] + 8) = piVar3;
    if (piVar3[1] == piVar3[2]) {
      cVar5 = *(char *)(uVar11 + 4 + uVar6);
      *(char *)(uVar11 + 4 + uVar6) = cVar5 + '\x01';
      bVar9 = (byte)uVar11;
      if (uVar11 < 0x20) {
        if (cVar5 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
        }
        puVar8 = (uint *)(uVar6 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar5 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar6 + 0xc4 + uVar10 * 4);
        bVar9 = bVar9 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> (bVar9 & 0x1f);
    }
    *piVar3 = param_3;
    *(int *)(param_3 + -4 + (int)piVar3) = param_3;
  }
  return 1;
}


/* ==== 00562b5b FUN_00562b5b ==== */

undefined4 FUN_00562b5b(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0074de7c != (code *)0x0) {
    iVar1 = (*DAT_0074de7c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* ==== 00562b76 FUN_00562b76 ==== */

DWORD FUN_00562b76(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  
  if (param_1 < DAT_007501a0) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_0055a27d(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        DAT_0074dc60 = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar2 == 0xffffffff) {
        DVar3 = GetLastError();
      }
      else {
        DVar3 = 0;
      }
      if (DVar3 != 0) {
        FUN_00560c26(DVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}


/* ==== 00562c10 FUN_00562c10 ==== */

int FUN_00562c10(char *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int i;
  int local_8;
  
  puVar4 = (undefined4 *)param_1;
  uVar1 = *(uint *)((int)param_1 + 0x10);
  if (*(int *)((int)param_1 + 4) < 0) {
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  local_8 = FUN_00562b76(uVar1,0,1);
  if (local_8 < 0) {
LAB_00562c9a:
    i = -1;
  }
  else {
    uVar2 = *(uint *)((int)param_1 + 0xc);
    if ((uVar2 & 0x108) == 0) {
      return local_8 - *(int *)((int)param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar7 = *(char **)((int)param_1 + 8);
    i = (int)pcVar5 - (int)pcVar7;
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0x80) == 0) {
        DAT_0074dc60 = 0x16;
        goto LAB_00562c9a;
      }
    }
    else {
      pcVar8 = pcVar7;
      if ((*(byte *)((&DAT_007500a0)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 8) & 0x80) != 0) {
        for (; pcVar8 < pcVar5; pcVar8 = pcVar8 + 1) {
          if (*pcVar8 == '\n') {
            i = i + 1;
          }
        }
      }
    }
    if (local_8 != 0) {
      if ((*(byte *)((int)param_1 + 0xc) & 1) != 0) {
        if (*(int *)((int)param_1 + 4) == 0) {
          i = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)((int)param_1 + 4) - (int)pcVar7);
          iVar9 = (uVar1 & 0x1f) * 8;
          if ((*(byte *)(iVar9 + 4 + (&DAT_007500a0)[(int)uVar1 >> 5]) & 0x80) != 0) {
            iVar6 = FUN_00562b76(uVar1,0,2);
            if (iVar6 == local_8) {
              pcVar7 = *(char **)((int)param_1 + 8);
              pcVar8 = pcVar7 + (int)pcVar5;
              param_1 = pcVar5;
              for (; pcVar7 < pcVar8; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar3 = *(byte *)((int)puVar4 + 0xd) & 0x20;
            }
            else {
              FUN_00562b76(uVar1,local_8,0);
              pcVar7 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)((int)param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)((int)param_1 + 0xc) & 0x400) != 0)) {
                pcVar7 = *(char **)((int)param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar9 + 4 + (&DAT_007500a0)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar7;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      i = i + local_8;
    }
  }
  return i;
}


/* ==== 00562d68 __mbsnbicoll ==== */

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_0055cf6a(DAT_007503c4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_007501a4);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


/* ==== 00562da7 FUN_00562da7 ==== */

undefined4 FUN_00562da7(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  LPSTR lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_0074dc90;
  puVar2 = DAT_0074dc90;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (LPSTR)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_0056758d(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}


/* ==== 00562e15 FUN_00562e15 ==== */

byte * FUN_00562e15(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if (param_2 <= param_1) {
    return (byte *)0x0;
  }
  if (DAT_007501bc != 0) {
    pbVar1 = param_2 + -1;
    if ((*(byte *)((int)&DAT_007502c0 + param_2[-1] + 1) & 4) != 0) {
      return param_2 + -2;
    }
    do {
      pbVar1 = pbVar1 + -1;
      if (pbVar1 < param_1) break;
    } while ((*(byte *)((int)&DAT_007502c0 + *pbVar1 + 1) & 4) != 0);
    param_2 = param_2 + -((int)param_2 - (int)pbVar1 & 1U);
  }
  return param_2 + -1;
}


/* ==== 00562e5d FUN_00562e5d ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562e5d(undefined4 *param_1)

{
  void *_malloc_result;
  
  _DAT_0074dc5c = _DAT_0074dc5c + 1;
  _malloc_result = _malloc(0x1000);
  param_1[2] = _malloc_result;
  if (_malloc_result == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}


/* ==== 00562ea1 FUN_00562ea1 ==== */

ulonglong FUN_00562ea1(char *param_1)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint i;
  
  puVar4 = (undefined4 *)param_1;
  uVar1 = *(uint *)((int)param_1 + 0x10);
  if (*(int *)((int)param_1 + 4) < 0) {
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  lVar9 = FUN_005677d3(uVar1,0,0,1);
  if ((lVar9 < 0x100000000) && (lVar9 < 0)) {
LAB_00562f43:
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if ((*(ushort *)((int)param_1 + 0xc) & 0x108) == 0) {
      return lVar9 - *(int *)((int)param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar6 = *(char **)((int)param_1 + 8);
    i = (int)pcVar5 - (int)pcVar6;
    if ((*(uint *)((int)param_1 + 0xc) & 3) == 0) {
      if ((*(uint *)((int)param_1 + 0xc) & 0x80) == 0) {
        DAT_0074dc60 = 0x16;
        goto LAB_00562f43;
      }
    }
    else {
      pcVar7 = pcVar6;
      if ((*(byte *)((&DAT_007500a0)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 8) & 0x80) != 0) {
        for (; pcVar7 < pcVar5; pcVar7 = pcVar7 + 1) {
          if (*pcVar7 == '\n') {
            i = i + 1;
          }
        }
      }
    }
    if (lVar9 == 0) {
      uVar3 = (ulonglong)i;
    }
    else {
      if ((*(byte *)((int)param_1 + 0xc) & 1) != 0) {
        if (*(int *)((int)param_1 + 4) == 0) {
          i = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)((int)param_1 + 4) - (int)pcVar6);
          iVar8 = (uVar1 & 0x1f) * 8;
          if ((*(byte *)(iVar8 + 4 + (&DAT_007500a0)[(int)uVar1 >> 5]) & 0x80) != 0) {
            lVar10 = FUN_005677d3(uVar1,0,0,2);
            if (lVar10 == lVar9) {
              pcVar6 = *(char **)((int)param_1 + 8);
              pcVar7 = pcVar6 + (int)pcVar5;
              param_1 = pcVar5;
              for (; pcVar6 < pcVar7; pcVar6 = pcVar6 + 1) {
                if (*pcVar6 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar2 = *(byte *)((int)puVar4 + 0xd) & 0x20;
            }
            else {
              FUN_005677d3(uVar1,lVar9,0);
              pcVar6 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)((int)param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)((int)param_1 + 0xc) & 0x400) != 0)) {
                pcVar6 = *(char **)((int)param_1 + 0x18);
              }
              bVar2 = *(byte *)(iVar8 + 4 + (&DAT_007500a0)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar6;
            }
            pcVar5 = param_1;
            if (bVar2 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          lVar9 = CONCAT44((int)((ulonglong)lVar9 >> 0x20) - (uint)((char *)lVar9 < param_1),
                           (int)(char *)lVar9 - (int)param_1);
        }
      }
      uVar3 = lVar9 + (ulonglong)i;
    }
  }
  return uVar3;
}


/* ==== 00563028 FUN_00563028 ==== */

undefined4 FUN_00563028(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = CONCAT44(param_3,param_2);
  if (((*(uint *)(param_1 + 0xc) & 0x83) == 0) ||
     (((param_4 != 0 && (param_4 != 1)) && (param_4 != 2)))) {
    DAT_0074dc60 = 0x16;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    if (param_4 == 1) {
      lVar2 = FUN_00562ea1(param_1);
      lVar3 = lVar2 + lVar3;
      param_4 = 0;
    }
    FUN_0055a5de(param_1);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        *(undefined4 *)(param_1 + 0x18) = 0x200;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffc;
    }
    lVar3 = FUN_005677d3(*(undefined4 *)(param_1 + 0x10),lVar3,param_4);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}


/* ==== 005630b8 FUN_005630b8 ==== */

undefined4 FUN_005630b8(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = DAT_0074dc64;
  if ((param_1 < DAT_007501a0) &&
     ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_0055a27d(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) {
      return 0;
    }
  }
  DAT_0074dc64 = DVar2;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}


/* ==== 0056310f FUN_0056310f ==== */

void FUN_0056310f(void)

{
  DAT_005c8bd8 = CreateFileA("CONIN$",0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


/* ==== 00563260 __cintrindisp2 ==== */

/* Library Function - Single Match
    __cintrindisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __cintrindisp2(void)

{
  __trandisp2();
  DAT_0074de88 = 1;
  FUN_00563315();
  return;
}


/* ==== 0056329e __cintrindisp1 ==== */

/* Library Function - Single Match
    __cintrindisp1
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __cintrindisp1(void)

{
  __trandisp1();
  DAT_0074de88 = 1;
  FUN_00563315();
  return;
}


/* ==== 005632d4 __ctrandisp2 ==== */

/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __ctrandisp2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2();
  FUN_0056330e();
  return;
}


/* ==== 0056330e FUN_0056330e ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056330e(void)

{
  char cVar1;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  DAT_0074de88 = '\0';
  if (DAT_0074dc40 != 0) {
    DAT_0074de88 = 0;
    return;
  }
  _DAT_0074de80 = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        DAT_0074de88 = 0;
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_005633e3;
    }
    if (((ulonglong)_DAT_0074de80 & 0x7ff0000000000000) == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_005633e3;
    }
    if ((DAT_0074de86 & 0x7ff0) == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_005633e3;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    DAT_0074de88 = 0;
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    DAT_0074de88 = 0;
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_005633e3:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if (DAT_0074de88 == '\0') {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_00565d8a((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4
              );
  return;
}


/* ==== 00563315 FUN_00563315 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563315(void)

{
  char cVar1;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_0074dc40 != 0) {
    return;
  }
  _DAT_0074de80 = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_005633e3;
    }
    if (((ulonglong)_DAT_0074de80 & 0x7ff0000000000000) == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_005633e3;
    }
    if ((DAT_0074de86 & 0x7ff0) == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_005633e3;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_005633e3:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if (DAT_0074de88 == '\0') {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_00565d8a((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4
              );
  return;
}


/* ==== 00563445 __ctrandisp1 ==== */

/* Library Function - Single Match
    __ctrandisp1
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __ctrandisp1(undefined4 param_1,undefined4 param_2)

{
  __fload(param_1,param_2);
  __trandisp1();
  FUN_0056330e();
  return;
}


/* ==== 00563471 __fload ==== */

/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

float10 __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}


/* ==== 005634b0 FUN_005634b0 ==== */

void FUN_005634b0(void)

{
  return;
}


/* ==== 00563515 FUN_00563515 ==== */

void FUN_00563515(void)

{
  if (DAT_0074df48 == 0) {
    FUN_0056352a();
    DAT_0074df48 = DAT_0074df48 + 1;
  }
  return;
}


/* ==== 0056352a FUN_0056352a ==== */

void FUN_0056352a(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t _strlen_result;
  char *_Source;
  int local_4;
  
  DAT_0074de90 = 0;
  DAT_005c8d00 = 0xffffffff;
  DAT_005c8cf0 = 0xffffffff;
  _Str1 = (char *)FUN_0055a328("TZ");
  if (_Str1 == (char *)0x0) {
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_0074de98);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_005c8c58 = DAT_0074de98 * 0x3c;
    DAT_0074de90 = 1;
    if (DAT_0074dede != 0) {
      DAT_005c8c58 = DAT_005c8c58 + DAT_0074deec * 0x3c;
    }
    if ((DAT_0074df32 == 0) || (DAT_0074df40 == 0)) {
      DAT_005c8c5c = 0;
      DAT_005c8c60 = 0;
    }
    else {
      DAT_005c8c5c = 1;
      DAT_005c8c60 = (DAT_0074df40 - DAT_0074deec) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_0074dcf4,0x220,(LPCWSTR)&DAT_0074de9c,-1,PTR_DAT_005c8ce4,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 == 0) || (local_4 != 0)) {
      *PTR_DAT_005c8ce4 = 0;
    }
    else {
      PTR_DAT_005c8ce4[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_0074dcf4,0x220,(LPCWSTR)&DAT_0074def0,-1,PTR_DAT_005c8ce8,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 != 0) && (local_4 == 0)) {
      PTR_DAT_005c8ce8[0x3f] = 0;
      return;
    }
  }
  else {
    if (*_Str1 == '\0') {
      return;
    }
    if ((DAT_0074df44 != (char *)0x0) && (iVar4 = _strcmp(_Str1,DAT_0074df44), iVar4 == 0)) {
      return;
    }
    FUN_00559d4e(DAT_0074df44);
    _strlen_result = _strlen(_Str1);
    DAT_0074df44 = _malloc(_strlen_result + 1);
    if (DAT_0074df44 == (char *)0x0) {
      return;
    }
    FUN_0055ee40(DAT_0074df44,_Str1);
    _strncpy(PTR_DAT_005c8ce4,_Str1,3);
    _Source = _Str1 + 3;
    PTR_DAT_005c8ce4[3] = 0;
    cVar1 = *_Source;
    if (cVar1 == '-') {
      _Source = _Str1 + 4;
    }
    iVar4 = FUN_005592b2(_Source);
    DAT_005c8c58 = iVar4 * 0xe10;
    for (; (cVar2 = *_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        _Source = _Source + 1) {
    }
    if (*_Source == ':') {
      _Source = _Source + 1;
      iVar4 = FUN_005592b2(_Source);
      DAT_005c8c58 = DAT_005c8c58 + iVar4 * 0x3c;
      for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
      }
      if (*_Source == ':') {
        _Source = _Source + 1;
        iVar4 = FUN_005592b2(_Source);
        DAT_005c8c58 = DAT_005c8c58 + iVar4;
        for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      DAT_005c8c58 = -DAT_005c8c58;
    }
    DAT_005c8c5c = (int)*_Source;
    if (DAT_005c8c5c != 0) {
      _strncpy(PTR_DAT_005c8ce8,_Source,3);
      PTR_DAT_005c8ce8[3] = 0;
      return;
    }
  }
  *PTR_DAT_005c8ce8 = 0;
  return;
}


/* ==== 00563788 FUN_00563788 ==== */

bool FUN_00563788(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_005c8c5c != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_005c8cf0) || (iVar2 != DAT_005c8d00)) {
      if (DAT_0074de90 == 0) {
        FUN_00563934(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_00563934(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_0074df30 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_0074df36;
        }
        else {
          uVar4 = DAT_0074df34;
          uVar3 = DAT_0074df36;
          uVar5 = 0;
        }
        FUN_00563934(1,DAT_0074df30 == 0,iVar2,DAT_0074df32,uVar3,uVar4,uVar5,DAT_0074df38,
                     DAT_0074df3a,DAT_0074df3c,DAT_0074df3e);
        if (DAT_0074dedc != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_0074dee2;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_0074dee0;
          uVar3 = DAT_0074dee2;
          uVar5 = 0;
        }
        FUN_00563934(0,DAT_0074dedc == 0,iVar2,DAT_0074dede,uVar3,uVar4,uVar5,DAT_0074dee4,
                     DAT_0074dee6,DAT_0074dee8,DAT_0074deea);
      }
    }
    iVar2 = param_1[7];
    if (DAT_005c8cf4 < DAT_005c8d04) {
      if ((DAT_005c8cf4 <= iVar2) && (iVar2 <= DAT_005c8d04)) {
        if ((DAT_005c8cf4 < iVar2) && (iVar2 < DAT_005c8d04)) {
          return true;
        }
LAB_00563900:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_005c8cf4) {
          return DAT_005c8cf8 <= iVar1;
        }
        return iVar1 < DAT_005c8d08;
      }
    }
    else {
      if (iVar2 < DAT_005c8d04) {
        return true;
      }
      if (DAT_005c8cf4 < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_005c8d04) || (DAT_005c8cf4 <= iVar2)) goto LAB_00563900;
    }
  }
  return false;
}


/* ==== 00563934 FUN_00563934 ==== */

void FUN_00563934(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_005c94cc + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_005c9500 + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_005c94d0 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_005c9504 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_005c94cc + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_005c9500 + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_005c8cf0 = param_3;
    DAT_005c8cf8 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_005c8cf4 = iVar1;
  }
  else {
    DAT_005c8d08 = ((param_8 * 0x3c + param_9) * 0x3c + DAT_005c8c60 + param_10) * 1000 + param_11;
    if (DAT_005c8d08 < 0) {
      DAT_005c8d08 = DAT_005c8d08 + 86400000;
      DAT_005c8d04 = iVar1 + -1;
    }
    else {
      DAT_005c8d04 = iVar1;
      if (86399999 < DAT_005c8d08) {
        DAT_005c8d08 = DAT_005c8d08 + -86400000;
        DAT_005c8d04 = iVar1 + 1;
      }
    }
    DAT_005c8d00 = param_3;
  }
  return;
}


/* ==== 00563a74 FUN_00563a74 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00563a74(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  bVar2 = false;
  iVar1 = *param_1;
  if (iVar1 < 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    iVar4 = iVar1 % 0x7861f80;
    iVar1 = (iVar1 / 0x7861f80) * 4;
    _DAT_0074df64 = iVar1 + 0x46;
    iVar5 = iVar4;
    if (0x1e1337f < iVar4) {
      iVar5 = iVar4 + -0x1e13380;
      _DAT_0074df64 = iVar1 + 0x47;
      if (0x1e1337f < iVar5) {
        iVar5 = iVar4 + -0x3c26700;
        _DAT_0074df64 = iVar1 + 0x48;
        if (iVar5 < 0x1e28500) {
          bVar2 = true;
        }
        else {
          _DAT_0074df64 = iVar1 + 0x49;
          iVar5 = iVar4 + -0x5a4ec00;
        }
      }
    }
    _DAT_0074df6c = iVar5 / 0x15180;
    piVar6 = (int *)&DAT_005c94d0;
    if (!bVar2) {
      piVar6 = (int *)&DAT_005c9504;
    }
    _DAT_0074df60 = 1;
    piVar7 = piVar6;
    while (piVar7 = piVar7 + 1, *piVar7 < _DAT_0074df6c) {
      _DAT_0074df60 = _DAT_0074df60 + 1;
    }
    _DAT_0074df60 = _DAT_0074df60 + -1;
    _DAT_0074df5c = _DAT_0074df6c - piVar6[_DAT_0074df60];
    _DAT_0074df68 = (*param_1 / 0x15180 + 4) % 7;
    _DAT_0074df58 = (iVar5 % 0x15180) / 0xe10;
    _DAT_0074df50 = (iVar5 % 0x15180) % 0xe10;
    _DAT_0074df54 = _DAT_0074df50 / 0x3c;
    _DAT_0074df50 = _DAT_0074df50 % 0x3c;
    _DAT_0074df70 = 0;
    puVar3 = &DAT_0074df50;
  }
  return puVar3;
}


/* ==== 00563b6d FUN_00563b6d ==== */

uint FUN_00563b6d(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  
  piVar3 = param_2;
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar6 & 0x82) == 0) || ((uVar6 & 0x40) != 0)) {
LAB_00563c83:
    param_2[3] = uVar6 | 0x20;
  }
  else {
    if ((uVar6 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar6 & 0x10) == 0) goto LAB_00563c83;
      *param_2 = param_2[2];
      param_2[3] = uVar6 & 0xfffffffe;
    }
    uVar6 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar3[3] = uVar6 & 0xffffffef | 2;
    if (((uVar6 & 0x10c) == 0) &&
       (((piVar3 != &DAT_005c7bf8 && (piVar3 != (int *)&DAT_005c7c18)) ||
        (iVar4 = FUN_00565e5a(uVar1), iVar4 == 0)))) {
      FUN_00562e5d(piVar3);
    }
    uVar6 = param_1;
    if ((*(ushort *)(piVar3 + 3) & 0x108) == 0) {
      iVar4 = 2;
      param_2 = (int *)FUN_0055fe30(uVar1,&param_1,2);
    }
    else {
      iVar2 = piVar3[2];
      iVar4 = *piVar3 - iVar2;
      *piVar3 = iVar2 + 2;
      piVar3[1] = piVar3[6] + -2;
      if (iVar4 < 1) {
        if (uVar1 == 0xffffffff) {
          puVar5 = &DAT_005c8ac8;
        }
        else {
          puVar5 = (undefined *)((&DAT_007500a0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 8);
        }
        if ((puVar5[4] & 0x20) != 0) {
          FUN_00562b76(uVar1,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_0055fe30(uVar1,iVar2,iVar4);
      }
      *(short *)piVar3[2] = (short)param_1;
      uVar6 = param_1;
    }
    if (param_2 == (int *)iVar4) {
      return uVar6 & 0xffff;
    }
    piVar3[3] = piVar3[3] | 0x20;
  }
  return 0xffff;
}


/* ==== 00563c91 FUN_00563c91 ==== */

int FUN_00563c91(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_0074dce4 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_0074dcf4,0x220,&param_2,1,lpMultiByteStr,DAT_005c8378,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  DAT_0074dc60 = 0x2a;
  return -1;
}


/* ==== 00563cf9 FUN_00563cf9 ==== */

undefined2 FUN_00563cf9(undefined4 *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_00562e5d(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_0055fc3a(param_1[4],param_1[2],param_1[6]);
      param_1[1] = iVar3;
      if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_005c8ac8;
          }
          else {
            puVar4 = (undefined *)((&DAT_007500a0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 8);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -2;
        uVar1 = *(undefined2 *)*param_1;
        *param_1 = (undefined2 *)*param_1 + 1;
        return uVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffff;
}


/* ==== 00563ddd FUN_00563ddd ==== */

uint FUN_00563ddd(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_0074dce4 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_s__005c8384[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_0074dcf4,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_005c8378) {
          if ((int)param_3 < (int)DAT_005c8378) {
            DAT_0074dc60 = 0x2a;
            return 0xffffffff;
          }
          iVar2 = MultiByteToWideChar(DAT_0074dcf4,9,(LPCSTR)param_2,DAT_005c8378,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_005c8378;
          }
        }
        if ((DAT_005c8378 <= param_3) && (param_2[1] != 0)) {
          return DAT_005c8378;
        }
      }
      DAT_0074dc60 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}


/* ==== 00563f36 FUN_00563f36 ==== */

uint FUN_00563f36(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  
  uVar2 = DAT_0074dfb0;
  uVar1 = DAT_0074dfae;
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar4 = FUN_00567884(1,DAT_0074dfae,0x31,param_1 + 4);
    uVar5 = FUN_00567884(1,uVar1,0x32,param_1 + 8);
    uVar6 = FUN_00567884(1,uVar1,0x33,param_1 + 0xc);
    uVar7 = FUN_00567884(1,uVar1,0x34,param_1 + 0x10);
    uVar8 = FUN_00567884(1,uVar1,0x35,param_1 + 0x14);
    uVar9 = FUN_00567884(1,uVar1,0x36,param_1 + 0x18);
    uVar10 = FUN_00567884(1,uVar1,0x37,param_1);
    uVar11 = FUN_00567884(1,uVar1,0x2a,param_1 + 0x20);
    uVar12 = FUN_00567884(1,uVar1,0x2b,param_1 + 0x24);
    uVar13 = FUN_00567884(1,uVar1,0x2c,param_1 + 0x28);
    uVar14 = FUN_00567884(1,uVar1,0x2d,param_1 + 0x2c);
    uVar15 = FUN_00567884(1,uVar1,0x2e,param_1 + 0x30);
    uVar16 = FUN_00567884(1,uVar1,0x2f,param_1 + 0x34);
    uVar17 = FUN_00567884(1,uVar1,0x30,param_1 + 0x1c);
    uVar18 = FUN_00567884(1,uVar1,0x44,param_1 + 0x38);
    uVar19 = FUN_00567884(1,uVar1,0x45,param_1 + 0x3c);
    uVar20 = FUN_00567884(1,uVar1,0x46,param_1 + 0x40);
    uVar21 = FUN_00567884(1,uVar1,0x47,param_1 + 0x44);
    uVar22 = FUN_00567884(1,uVar1,0x48,param_1 + 0x48);
    uVar23 = FUN_00567884(1,uVar1,0x49,param_1 + 0x4c);
    uVar24 = FUN_00567884(1,uVar1,0x4a,param_1 + 0x50);
    uVar25 = FUN_00567884(1,uVar1,0x4b,param_1 + 0x54);
    uVar26 = FUN_00567884(1,uVar1,0x4c,param_1 + 0x58);
    uVar27 = FUN_00567884(1,uVar1,0x4d,param_1 + 0x5c);
    uVar28 = FUN_00567884(1,uVar1,0x4e,param_1 + 0x60);
    uVar29 = FUN_00567884(1,uVar1,0x4f,param_1 + 100);
    uVar30 = FUN_00567884(1,uVar1,0x38,param_1 + 0x68);
    uVar31 = FUN_00567884(1,uVar1,0x39,param_1 + 0x6c);
    uVar32 = FUN_00567884(1,uVar1,0x3a,param_1 + 0x70);
    uVar33 = FUN_00567884(1,uVar1,0x3b,param_1 + 0x74);
    uVar34 = FUN_00567884(1,uVar1,0x3c,param_1 + 0x78);
    uVar35 = FUN_00567884(1,uVar1,0x3d,param_1 + 0x7c);
    uVar36 = FUN_00567884(1,uVar1,0x3e,param_1 + 0x80);
    uVar37 = FUN_00567884(1,uVar1,0x3f,param_1 + 0x84);
    uVar38 = FUN_00567884(1,uVar1,0x40,param_1 + 0x88);
    uVar39 = FUN_00567884(1,uVar1,0x41,param_1 + 0x8c);
    uVar40 = FUN_00567884(1,uVar1,0x42,param_1 + 0x90);
    uVar41 = FUN_00567884(1,uVar1,0x43,param_1 + 0x94);
    uVar42 = FUN_00567884(1,uVar1,0x28,param_1 + 0x98);
    uVar43 = FUN_00567884(1,uVar1,0x29,param_1 + 0x9c);
    uVar44 = FUN_00567884(1,uVar2,0x1f,param_1 + 0xa0);
    uVar45 = FUN_00567884(1,uVar2,0x20,param_1 + 0xa4);
    uVar3 = FUN_00567884(1,uVar2,0x1003,param_1 + 0xa8);
    uVar3 = uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
                    uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
                    uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 |
                    uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 |
                    uVar40 | uVar41 | uVar42 | uVar43 | uVar44 | uVar45;
  }
  return uVar3;
}


/* ==== 00564284 FUN_00564284 ==== */

void FUN_00564284(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_00559d4e(param_1[1]);
    FUN_00559d4e(param_1[2]);
    FUN_00559d4e(param_1[3]);
    FUN_00559d4e(param_1[4]);
    FUN_00559d4e(param_1[5]);
    FUN_00559d4e(param_1[6]);
    FUN_00559d4e(*param_1);
    FUN_00559d4e(param_1[8]);
    FUN_00559d4e(param_1[9]);
    FUN_00559d4e(param_1[10]);
    FUN_00559d4e(param_1[0xb]);
    FUN_00559d4e(param_1[0xc]);
    FUN_00559d4e(param_1[0xd]);
    FUN_00559d4e(param_1[7]);
    FUN_00559d4e(param_1[0xe]);
    FUN_00559d4e(param_1[0xf]);
    FUN_00559d4e(param_1[0x10]);
    FUN_00559d4e(param_1[0x11]);
    FUN_00559d4e(param_1[0x12]);
    FUN_00559d4e(param_1[0x13]);
    FUN_00559d4e(param_1[0x14]);
    FUN_00559d4e(param_1[0x15]);
    FUN_00559d4e(param_1[0x16]);
    FUN_00559d4e(param_1[0x17]);
    FUN_00559d4e(param_1[0x18]);
    FUN_00559d4e(param_1[0x19]);
    FUN_00559d4e(param_1[0x1a]);
    FUN_00559d4e(param_1[0x1b]);
    FUN_00559d4e(param_1[0x1c]);
    FUN_00559d4e(param_1[0x1d]);
    FUN_00559d4e(param_1[0x1e]);
    FUN_00559d4e(param_1[0x1f]);
    FUN_00559d4e(param_1[0x20]);
    FUN_00559d4e(param_1[0x21]);
    FUN_00559d4e(param_1[0x22]);
    FUN_00559d4e(param_1[0x23]);
    FUN_00559d4e(param_1[0x24]);
    FUN_00559d4e(param_1[0x25]);
    FUN_00559d4e(param_1[0x26]);
    FUN_00559d4e(param_1[0x27]);
    FUN_00559d4e(param_1[0x28]);
    FUN_00559d4e(param_1[0x29]);
    FUN_00559d4e(param_1[0x2a]);
  }
  return;
}


/* ==== 005646b4 FUN_005646b4 ==== */

uint FUN_005646b4(int param_1)

{
  undefined2 uVar1;
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
  uint uVar16;
  
  uVar1 = DAT_0074dfa4;
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = FUN_00567884(1,DAT_0074dfa4,0x15,param_1 + 0xc);
    uVar4 = FUN_00567884(1,uVar1,0x14,param_1 + 0x10);
    uVar5 = FUN_00567884(1,uVar1,0x16,param_1 + 0x14);
    uVar6 = FUN_00567884(1,uVar1,0x17,param_1 + 0x18);
    uVar7 = FUN_00567884(1,uVar1,0x18,param_1 + 0x1c);
    FUN_005647d6(*(undefined4 *)(param_1 + 0x1c));
    uVar8 = FUN_00567884(1,uVar1,0x50,param_1 + 0x20);
    uVar9 = FUN_00567884(1,uVar1,0x51,param_1 + 0x24);
    uVar10 = FUN_00567884(0,uVar1,0x1a,param_1 + 0x28);
    uVar11 = FUN_00567884(0,uVar1,0x19,param_1 + 0x29);
    uVar12 = FUN_00567884(0,uVar1,0x54,param_1 + 0x2a);
    uVar13 = FUN_00567884(0,uVar1,0x55,param_1 + 0x2b);
    uVar14 = FUN_00567884(0,uVar1,0x56,param_1 + 0x2c);
    uVar15 = FUN_00567884(0,uVar1,0x57,param_1 + 0x2d);
    uVar16 = FUN_00567884(0,uVar1,0x52,param_1 + 0x2e);
    uVar2 = FUN_00567884(0,uVar1,0x53,param_1 + 0x2f);
    uVar2 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
                    | uVar13 | uVar14 | uVar15 | uVar16;
  }
  return uVar2;
}


/* ==== 005647d6 FUN_005647d6 ==== */

void FUN_005647d6(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_005647ed;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = pcVar3[1];
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_005647ed:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}


/* ==== 0056480d FUN_0056480d ==== */

void FUN_0056480d(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_0074dcc8)) {
    FUN_00559d4e(*(undefined **)(param_1 + 0xc));
    FUN_00559d4e(*(undefined4 *)(param_1 + 0x10));
    FUN_00559d4e(*(undefined4 *)(param_1 + 0x14));
    FUN_00559d4e(*(undefined4 *)(param_1 + 0x18));
    FUN_00559d4e(*(undefined4 *)(param_1 + 0x1c));
    FUN_00559d4e(*(undefined4 *)(param_1 + 0x20));
    FUN_00559d4e(*(undefined4 *)(param_1 + 0x24));
  }
  return;
}


/* ==== 0056485b FUN_0056485b ==== */

undefined4 FUN_0056485b(void)

{
  BYTE *pBVar1;
  byte bVar2;
  int i;
  undefined2 *puVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  uint j;
  undefined2 *puVar6;
  undefined4 uVar7;
  _cpinfo cpinfo;
  undefined2 *local_14;
  undefined2 *local_10;
  undefined2 *_malloc_result;
  void *_malloc_result_2;
  
  uVar7 = 0;
  _malloc_result_2 = (void *)0x0;
  _malloc_result = (undefined2 *)0x0;
  if (DAT_0074dce4 == 0) {
    PTR_s__005c8384 = s__005c838e;
    PTR_s__005c8388 = s__005c838e;
    FUN_00559d4e(DAT_0074df88);
    FUN_00559d4e(DAT_0074df8c);
    DAT_0074df88 = (undefined2 *)0x0;
    DAT_0074df8c = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_0074dcf4 != 0) || (i = FUN_00567884(0,DAT_0074df9c,0x1004,&DAT_0074dcf4), i == 0)) {
    puVar3 = _malloc(0x202);
    local_14 = puVar3;
    local_10 = _malloc(0x202);
    _malloc_result_2 = _malloc(0x101);
    _malloc_result = _malloc(0x202);
    if ((puVar3 != (undefined2 *)0x0) &&
       (((local_10 != (undefined2 *)0x0 && (_malloc_result_2 != (void *)0x0)) &&
        (_malloc_result != (undefined2 *)0x0)))) {
      i = 0;
      do {
        *(char *)(i + (int)_malloc_result_2) = (char)i;
        i = i + 1;
      } while (i < 0x100);
      BVar4 = GetCPInfo(DAT_0074dcf4,&cpinfo);
      if ((BVar4 != 0) && (cpinfo.MaxCharSize < 3)) {
        DAT_005c8378 = cpinfo.MaxCharSize & 0xffff;
        if ((1 < DAT_005c8378) && (cpinfo.LeadByte[0] != '\0')) {
          pBVar5 = cpinfo.LeadByte + 1;
          do {
            bVar2 = *pBVar5;
            if (bVar2 == 0) break;
            for (j = (uint)pBVar5[-1]; (int)j <= (int)(uint)bVar2; j = j + 1) {
              *(undefined1 *)(j + (int)_malloc_result_2) = 0;
              bVar2 = *pBVar5;
            }
            pBVar1 = pBVar5 + 1;
            pBVar5 = pBVar5 + 2;
          } while (*pBVar1 != 0);
        }
        i = FUN_00565391(1,_malloc_result_2,0x100,puVar3 + 1,0,0,0);
        if (i != 0) {
          *puVar3 = 0;
          i = 0;
          puVar3 = _malloc_result;
          do {
            *puVar3 = (short)i;
            puVar3 = puVar3 + 1;
            i = i + 1;
          } while (i < 0x100);
          puVar3 = local_10 + 1;
          i = FUN_005679bc(1,_malloc_result,0x100,puVar3,0,0);
          if (i != 0) {
            *local_10 = 0;
            if ((1 < (int)DAT_005c8378) && (cpinfo.LeadByte[0] != '\0')) {
              pBVar5 = cpinfo.LeadByte + 1;
              do {
                if (*pBVar5 == 0) break;
                j = (uint)pBVar5[-1];
                if (j <= *pBVar5) {
                  puVar6 = local_14 + j + 1;
                  do {
                    *puVar6 = 0x8000;
                    j = j + 1;
                    puVar6 = puVar6 + 1;
                  } while ((int)j <= (int)(uint)*pBVar5);
                }
                pBVar1 = pBVar5 + 1;
                pBVar5 = pBVar5 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_s__005c8384 = (undefined *)(local_14 + 1);
            PTR_s__005c8388 = (undefined *)puVar3;
            if (DAT_0074df88 != (undefined2 *)0x0) {
              FUN_00559d4e(DAT_0074df88);
            }
            DAT_0074df88 = local_14;
            if (DAT_0074df8c != (undefined2 *)0x0) {
              FUN_00559d4e(DAT_0074df8c);
            }
            DAT_0074df8c = local_10;
            goto LAB_00564a39;
          }
        }
      }
    }
  }
  FUN_00559d4e(local_14);
  FUN_00559d4e(local_10);
  uVar7 = 1;
LAB_00564a39:
  FUN_00559d4e(_malloc_result_2);
  FUN_00559d4e(_malloc_result);
  return uVar7;
}


/* ==== 00564aa0 FUN_00564aa0 ==== */

undefined4 FUN_00564aa0(void)

{
  return 0;
}


/* ==== 00564ab0 FUN_00564ab0 ==== */

byte * FUN_00564ab0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}


/* ==== 00564aea FUN_00564aea ==== */

undefined4 FUN_00564aea(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if (DAT_0074dfd4 == (code *)0x0) {
    iVar1 = FUN_0056521b();
    if (iVar1 == 0) {
      DAT_0074dfd4 = FUN_00565251;
    }
    else {
      DAT_0074dfd4 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_0074dfc4 = param_1;
    if (*param_1 != '\0') {
      FUN_00564c67(&PTR_s_american_005c9280,0x40,&DAT_0074dfc4);
    }
    DAT_0074dfc8 = param_1 + 0x40;
    if ((DAT_0074dfc8 != (char *)0x0) && (*DAT_0074dfc8 != '\0')) {
      FUN_00564c67(&PTR_s_america_005c91c8,0x16,&DAT_0074dfc8);
    }
    DAT_0074dfcc = 0;
    if ((DAT_0074dfc4 != (char *)0x0) && (*DAT_0074dfc4 != '\0')) {
      if ((DAT_0074dfc8 == (char *)0x0) || (*DAT_0074dfc8 == '\0')) {
        FUN_00564f4a();
      }
      else {
        FUN_00564cbf();
      }
      goto LAB_00564ba7;
    }
    if ((DAT_0074dfc8 != (char *)0x0) && (*DAT_0074dfc8 != '\0')) {
      FUN_0056505d();
      goto LAB_00564ba7;
    }
  }
  FUN_0056511a();
LAB_00564ba7:
  if ((((DAT_0074dfcc == 0) || (uVar2 = FUN_00565134(param_1 + 0x80), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_0074dfb4,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_0074dfb4;
    param_2[1] = (undefined2)DAT_0074dfd0;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_0074dfd4)(DAT_0074dfb4,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_0074dfd4)(DAT_0074dfd0,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00567b81(uVar2,param_3 + 0x80,10);
  }
  return 1;
}


/* ==== 00564c67 FUN_00564c67 ==== */

void FUN_00564c67(int param_1,int param_2,int *param_3)

{
  int __strcmpi_result;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  __strcmpi_result = 1;
  if (-1 < param_2) {
    do {
      if (__strcmpi_result == 0) {
        return;
      }
      iVar2 = (param_2 + iVar1) / 2;
      __strcmpi_result = __strcmpi((char *)*param_3,*(char **)(param_1 + iVar2 * 8));
      if (__strcmpi_result == 0) {
        *param_3 = param_1 + iVar2 * 8 + 4;
      }
      else if (__strcmpi_result < 0) {
        param_2 = iVar2 + -1;
      }
      else {
        iVar1 = iVar2 + 1;
      }
    } while (iVar1 <= param_2);
  }
  return;
}


/* ==== 00564cbf FUN_00564cbf ==== */

void FUN_00564cbf(void)

{
  size_t _strlen_result;
  
  _strlen_result = _strlen(DAT_0074dfc4);
  DAT_0074dfc0 = (uint)(_strlen_result == 3);
  _strlen_result = _strlen(DAT_0074dfc8);
  DAT_0074dfb8 = (uint)(_strlen_result == 3);
  DAT_0074dfb4 = 0;
  if (DAT_0074dfc0 == 0) {
    DAT_0074dfbc = FUN_00565370(DAT_0074dfc4);
  }
  else {
    DAT_0074dfbc = 2;
  }
  EnumSystemLocalesA(FUN_00564d46,1);
  if ((((DAT_0074dfcc & 0x100) == 0) || ((DAT_0074dfcc & 0x200) == 0)) || ((DAT_0074dfcc & 7) == 0))
  {
    DAT_0074dfcc = 0;
  }
  return;
}


/* ==== 00564d46 FUN_00564d46 ==== */

uint FUN_00564d46(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  size_t _strlen_result;
  undefined4 uVar3;
  char local_7c [120];
  
  iVar1 = FUN_00565337(param_1);
  iVar2 = (*DAT_0074dfd4)(iVar1,(-(uint)(DAT_0074dfb8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0074dfcc = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_0074dfc8,local_7c);
  if (iVar2 == 0) {
    iVar2 = (*DAT_0074dfd4)(iVar1,(-(uint)(DAT_0074dfc0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_0074dfcc = 0;
      return 1;
    }
    iVar2 = __strcmpi(DAT_0074dfc4,local_7c);
    if (iVar2 == 0) {
      DAT_0074dfcc = DAT_0074dfcc | 0x304;
      DAT_0074dfd0 = iVar1;
LAB_00564dec:
      DAT_0074dfb4 = iVar1;
    }
    else if ((DAT_0074dfcc & 2) == 0) {
      if ((DAT_0074dfbc == 0) ||
         (iVar2 = FUN_00567c10(DAT_0074dfc4,local_7c,DAT_0074dfbc), iVar2 != 0)) {
        if (((DAT_0074dfcc & 1) == 0) && (iVar2 = FUN_0056519a(iVar1), iVar2 != 0)) {
          DAT_0074dfcc = DAT_0074dfcc | 1;
          DAT_0074dfd0 = iVar1;
        }
      }
      else {
        DAT_0074dfcc = DAT_0074dfcc | 2;
        DAT_0074dfd0 = iVar1;
        _strlen_result = _strlen(DAT_0074dfc4);
        if (_strlen_result == DAT_0074dfbc) goto LAB_00564dec;
      }
    }
  }
  if ((DAT_0074dfcc & 0x300) == 0x300) goto LAB_00564f36;
  iVar2 = (*DAT_0074dfd4)(iVar1,(-(uint)(DAT_0074dfc0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0074dfcc = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_0074dfc4,local_7c);
  if (iVar2 == 0) {
    DAT_0074dfcc = DAT_0074dfcc | 0x200;
    if (((DAT_0074dfc0 == 0) && (DAT_0074dfbc != 0)) &&
       (_strlen_result = _strlen(DAT_0074dfc4), _strlen_result == DAT_0074dfbc)) {
      uVar3 = 1;
      goto LAB_00564f15;
    }
  }
  else {
    if (((DAT_0074dfc0 != 0) || (DAT_0074dfbc == 0)) ||
       (iVar2 = FUN_00567c10(DAT_0074dfc4,local_7c,DAT_0074dfbc), iVar2 != 0)) goto LAB_00564f36;
    uVar3 = 0;
LAB_00564f15:
    iVar2 = FUN_005651b9(iVar1,uVar3);
    if (iVar2 == 0) goto LAB_00564f36;
  }
  DAT_0074dfcc = DAT_0074dfcc | 0x100;
  if (DAT_0074dfb4 == 0) {
    DAT_0074dfb4 = iVar1;
  }
LAB_00564f36:
  return ~DAT_0074dfcc >> 2 & 1;
}


/* ==== 00564f4a FUN_00564f4a ==== */

void FUN_00564f4a(void)

{
  size_t _strlen_result;
  
  _strlen_result = _strlen(DAT_0074dfc4);
  DAT_0074dfc0 = (uint)(_strlen_result == 3);
  if (_strlen_result == 3) {
    DAT_0074dfbc = 2;
  }
  else {
    DAT_0074dfbc = FUN_00565370(DAT_0074dfc4);
  }
  EnumSystemLocalesA(FUN_00564fa0,1);
  if ((DAT_0074dfcc & 4) == 0) {
    DAT_0074dfcc = 0;
  }
  return;
}


/* ==== 00564fa0 FUN_00564fa0 ==== */

uint FUN_00564fa0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char local_7c [120];
  
  uVar1 = FUN_00565337(param_1);
  iVar2 = (*DAT_0074dfd4)(uVar1,(-(uint)(DAT_0074dfc0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0074dfcc = 0;
    return 1;
  }
  iVar2 = __strcmpi(DAT_0074dfc4,local_7c);
  if (iVar2 == 0) {
    if (DAT_0074dfc0 == 0) {
      uVar3 = 1;
      goto LAB_0056502c;
    }
  }
  else {
    if (((DAT_0074dfc0 != 0) || (DAT_0074dfbc == 0)) ||
       (iVar2 = FUN_00567c10(DAT_0074dfc4,local_7c,DAT_0074dfbc), iVar2 != 0)) goto LAB_0056504b;
    uVar3 = 0;
LAB_0056502c:
    iVar2 = FUN_005651b9(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_0056504b;
  }
  DAT_0074dfcc = DAT_0074dfcc | 4;
  DAT_0074dfb4 = uVar1;
  DAT_0074dfd0 = uVar1;
LAB_0056504b:
  return ~DAT_0074dfcc >> 2 & 1;
}


/* ==== 0056505d FUN_0056505d ==== */

void FUN_0056505d(void)

{
  size_t _strlen_result;
  
  _strlen_result = _strlen(DAT_0074dfc8);
  DAT_0074dfb8 = (uint)(_strlen_result == 3);
  EnumSystemLocalesA(FUN_00565094,1);
  if ((DAT_0074dfcc & 4) == 0) {
    DAT_0074dfcc = 0;
  }
  return;
}


/* ==== 00565094 FUN_00565094 ==== */

uint FUN_00565094(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char local_7c [120];
  
  uVar1 = FUN_00565337(param_1);
  iVar2 = (*DAT_0074dfd4)(uVar1,(-(uint)(DAT_0074dfb8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0074dfcc = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = __strcmpi(DAT_0074dfc8,local_7c);
    if (iVar2 == 0) {
      iVar2 = FUN_0056519a(uVar1);
      if (iVar2 != 0) {
        DAT_0074dfcc = DAT_0074dfcc | 4;
        DAT_0074dfb4 = uVar1;
        DAT_0074dfd0 = uVar1;
      }
    }
    uVar3 = ~DAT_0074dfcc >> 2 & 1;
  }
  return uVar3;
}


/* ==== 0056511a FUN_0056511a ==== */

void FUN_0056511a(void)

{
  DAT_0074dfcc._0_2_ = (ushort)DAT_0074dfcc | 0x104;
  DAT_0074dfd0 = GetUserDefaultLCID();
  DAT_0074dfb4 = DAT_0074dfd0;
  return;
}


/* ==== 00565134 FUN_00565134 ==== */

void FUN_00565134(char *str1)

{
  int iVar1;
  undefined4 uVar2;
  char local_c [8];
  
  if (((str1 == (char *)0x0) || (*str1 == '\0')) || (iVar1 = _strcmp(str1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(str1,"OCP");
    if (iVar1 != 0) goto LAB_00565190;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_0074dfd4)(DAT_0074dfd0,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  str1 = local_c;
LAB_00565190:
  FUN_005592b2(str1);
  return;
}


/* ==== 0056519a FUN_0056519a ==== */

undefined4 FUN_0056519a(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_005c91b4;
  do {
    if (param_1 == *psVar1) {
      return 0;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x5c91c8);
  return 1;
}


/* ==== 005651b9 FUN_005651b9 ==== */

undefined4 FUN_005651b9(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t _strlen_result;
  undefined1 local_7c [120];
  
  iVar1 = (*DAT_0074dfd4)((ushort)param_1 & 0x3ff | 0x400,1,local_7c,0x78);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00565337(local_7c);
  if ((param_1 != iVar1) && (param_2 != 0)) {
    sVar2 = FUN_00565370(DAT_0074dfc4);
    _strlen_result = _strlen(DAT_0074dfc4);
    if (sVar2 == _strlen_result) {
      return 0;
    }
  }
  return 1;
}


/* ==== 0056521b FUN_0056521b ==== */

undefined4 FUN_0056521b(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA osversioninfo;
  
  osversioninfo.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&osversioninfo);
  if ((BVar1 != 0) && (osversioninfo.dwPlatformId == 2)) {
    return 1;
  }
  return 0;
}


/* ==== 00565251 FUN_00565251 ==== */

int FUN_00565251(uint param_1,LCTYPE param_2,char *dest,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *_Source;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0x1a;
  do {
    iVar2 = (iVar3 + iVar4) / 2;
    uVar1 = *(uint *)(iVar2 * 0x2c + 0x5c8d10);
    if (param_1 == uVar1) {
      if (param_2 == 1) {
        _Source = s_040a_005c8d14 + iVar2 * 0x2c;
      }
      else if (param_2 == 3) {
        _Source = s_ESP_005c8d20 + iVar2 * 0x2c;
      }
      else if (param_2 == 7) {
        _Source = s_ESP_005c8d28 + iVar2 * 0x2c;
      }
      else if (param_2 == 0xb) {
        _Source = s_850_005c8d2c + iVar2 * 0x2c;
      }
      else if (param_2 == 0x1001) {
        _Source = *(char **)(iVar2 * 0x2c + 0x5c8d1c);
      }
      else if (param_2 == 0x1002) {
        _Source = *(char **)(iVar2 * 0x2c + 0x5c8d24);
      }
      else {
        if (param_2 != 0x1004) break;
        _Source = s_1252_005c8d34 + iVar2 * 0x2c;
      }
      if ((_Source != (char *)0x0) && (0 < param_4)) {
        _strncpy(dest,_Source,param_4 - 1);
        dest[param_4 + -1] = '\0';
        return 1;
      }
      break;
    }
    if (param_1 < uVar1) {
      iVar3 = iVar2 + -1;
    }
    else {
      iVar4 = iVar2 + 1;
    }
  } while (iVar4 <= iVar3);
  iVar3 = GetLocaleInfoA(param_1,param_2,dest,param_4);
  return iVar3;
}


/* ==== 00565337 FUN_00565337 ==== */

int FUN_00565337(char *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0;
  while( true ) {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
    if (cVar2 == '\0') break;
    if ((cVar2 < 'a') || ('f' < cVar2)) {
      if (('@' < cVar2) && (cVar2 < 'G')) {
        cVar2 = cVar2 + -7;
      }
    }
    else {
      cVar2 = cVar2 + -0x27;
    }
    iVar1 = (iVar1 + 0xffffffd) * 0x10 + (int)cVar2;
  }
  return iVar1;
}


/* ==== 00565370 FUN_00565370 ==== */

int FUN_00565370(char *param_1)

{
  char cVar1;
  int i;
  
  i = 0;
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) break;
    i = i + 1;
  }
  return i;
}


/* ==== 00565391 FUN_00565391 ==== */

BOOL FUN_00565391(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
                 int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0057a408;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_0074dfd8;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_0074dfd8 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_0074dfd8 = iVar3;
  if (DAT_0074dfd8 != 2) {
    if (DAT_0074dfd8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_0074dcf4;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_00559400();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_0074dce4;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}


/* ==== 005654e0 __strcmpi ==== */

/* Library Function - Single Match
    __strcmpi
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl __strcmpi(char *_Str1,char *_Str2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  
  if (DAT_0074dce4 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_0056552e;
        bVar5 = *_Str2;
        _Str2 = _Str2 + 1;
        bVar4 = *_Str1;
        _Str1 = _Str1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_0056552e:
    iVar7 = (int)cVar6;
  }
  else {
    iVar7 = 0xff;
    do {
      do {
        if ((char)iVar7 == '\0') {
          return iVar7;
        }
        cVar6 = *_Str2;
        iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),cVar6);
        _Str2 = _Str2 + 1;
        cVar1 = *_Str1;
        _Str1 = _Str1 + 1;
      } while (cVar6 == cVar1);
      bVar5 = FUN_00565739(cVar1,iVar7);
      iVar7 = FUN_00565739();
    } while (bVar5 == (byte)iVar7);
    uVar2 = (uint)(bVar5 < (byte)iVar7);
    iVar7 = (1 - uVar2) - (uint)(uVar2 != 0);
  }
  return iVar7;
}


/* ==== 0056556c FUN_0056556c ==== */

bool FUN_0056556c(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}


/* ==== 00565588 FUN_00565588 ==== */

bool FUN_00565588(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}


/* ==== 005655a4 FUN_005655a4 ==== */

bool FUN_005655a4(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}


/* ==== 005655bc FUN_005655bc ==== */

void FUN_005655bc(void)

{
  FUN_00561acb(10);
  FUN_00567cbd(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


/* ==== 005655d3 FUN_005655d3 ==== */

uint FUN_005655d3(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0056561e();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_005656b0(uVar1);
  return uVar1;
}


/* ==== 00565608 FUN_00565608 ==== */

void FUN_00565608(undefined4 param_1,uint param_2)

{
  FUN_005655d3(param_1,param_2 & 0xfff7ffff);
  return;
}


/* ==== 0056561e FUN_0056561e ==== */

uint FUN_0056561e(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}


/* ==== 005656b0 FUN_005656b0 ==== */

uint FUN_005656b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


/* ==== 00565739 FUN_00565739 ==== */

uint FUN_00565739(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = param_1;
  if (DAT_0074dce4 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    uVar3 = 1;
    if ((int)param_1 < 0x100) {
      if (DAT_005c8378 < 2) {
        uVar2 = (byte)PTR_s__005c8384[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_0055c336(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_s__005c8384[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      uVar3 = 2;
    }
    iVar4 = FUN_0055c112(DAT_0074dce4,0x100,&param_1,uVar3,&local_8,3,0,1);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        uVar1 = local_8 & 0xff;
      }
      else {
        uVar1 = local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


/* ==== 00565804 FUN_00565804 ==== */

undefined4 FUN_00565804(int param_1,int param_2)

{
  int *piVar1;
  int i;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  i = param_2 / 0x20 + 1;
  if (i < 3) {
    piVar1 = (int *)(param_1 + i * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      i = i + 1;
      piVar1 = piVar1 + 1;
    } while (i < 3);
  }
  return 1;
}


/* ==== 0056584d FUN_0056584d ==== */

void FUN_0056584d(int param_1,int param_2)

{
  int iVar1;
  int i;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_00567e2f(*puVar2,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar2);
  i = param_2 / 0x20 + -1;
  if (-1 < i) {
    puVar2 = (undefined4 *)(param_1 + i * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_00567e2f(*puVar2,1,puVar2);
      i = i + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < i);
  }
  return;
}


/* ==== 005658a3 FUN_005658a3 ==== */

undefined4 FUN_005658a3(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int i;
  undefined4 *puVar4;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_00565804(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_0056584d(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar4 = (undefined4 *)(param_1 + iVar2 * 4);
    for (i = 3 - iVar2; i != 0; i = i + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return local_8;
}


/* ==== 0056592f FUN_0056592f ==== */

void FUN_0056592f(int param_1,undefined4 *param_2)

{
  int i;
  
  param_1 = param_1 - (int)param_2;
  i = 3;
  do {
    *(undefined4 *)(param_1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    i = i + -1;
  } while (i != 0);
  return;
}


/* ==== 0056594a FUN_0056594a ==== */

void FUN_0056594a(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ==== 00565956 FUN_00565956 ==== */

undefined4 FUN_00565956(int *param_1)

{
  int i;
  
  i = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    i = i + 1;
    param_1 = param_1 + 1;
  } while (i < 3);
  return 1;
}


/* ==== 00565971 FUN_00565971 ==== */

void FUN_00565971(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int j;
  uint *puVar5;
  int i;
  
  i = 3;
  iVar2 = (int)param_2 / 0x20;
  j = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)j;
  puVar5 = param_1;
  do {
    uVar1 = *puVar5;
    *puVar5 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar5 = puVar5 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    i = i + -1;
  } while (i != 0);
  j = 2;
  iVar4 = 8;
  do {
    if (j < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    j = j + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}


/* ==== 005659fe FUN_005659fe ==== */

undefined4 FUN_005659fe(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_1c [12];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_00565956(&local_10);
    if (iVar2 != 0) {
LAB_00565b2a:
      uVar5 = 0;
      goto LAB_00565b2c;
    }
    FUN_0056594a(&local_10);
  }
  else {
    FUN_0056592f(local_1c,&local_10);
    iVar2 = FUN_005658a3(&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_0056594a(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_0056594a(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_00565971(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_00565b2c;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_00565971(&local_10,param_3[3]);
        goto LAB_00565b2a;
      }
      FUN_0056592f(&local_10,local_1c);
      FUN_00565971(&local_10,iVar2 - iVar4);
      FUN_005658a3(&local_10,param_3[2]);
      FUN_00565971(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_00565b2c:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}


/* ==== 00565b6a FUN_00565b6a ==== */

void FUN_00565b6a(undefined4 param_1,undefined4 param_2)

{
  FUN_005659fe(param_1,param_2,&DAT_005c9490);
  return;
}


/* ==== 00565b80 FUN_00565b80 ==== */

void FUN_00565b80(undefined4 param_1,undefined4 param_2)

{
  FUN_005659fe(param_1,param_2,&DAT_005c94a8);
  return;
}


/* ==== 00565b96 FUN_00565b96 ==== */

void FUN_00565b96(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_10 [12];
  
  FUN_005661cf(local_10,&param_2,param_2,0,0,0,0);
  FUN_00565b6a(local_10,param_1);
  return;
}


/* ==== 00565bc3 FUN_00565bc3 ==== */

void FUN_00565bc3(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_10 [12];
  
  FUN_005661cf(local_10,&param_2,param_2,0,0,0,0);
  FUN_00565b80(local_10,param_1);
  return;
}


/* ==== 00565bf0 FUN_00565bf0 ==== */

void FUN_00565bf0(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t _strlen_result;
  char *pcVar3;
  char cVar4;
  
  pcVar1 = param_1;
  pcVar3 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar4 = *pcVar3;
      if (cVar4 == '\0') {
        cVar4 = '0';
      }
      else {
        pcVar3 = pcVar3 + 1;
      }
      *pcVar2 = cVar4;
      pcVar2 = pcVar2 + 1;
      param_1 = (char *)((int)param_1 + -1);
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar3)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    _strlen_result = _strlen(_Str);
    FUN_005580e0(pcVar1,_Str,_strlen_result + 1);
  }
  return;
}


/* ==== 00565c67 FUN_00565c67 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00565c67(void)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  FUN_00565ccb(&local_10,&stack0x00000004);
  _DAT_0074e008 = FUN_00567fd0(local_10,uStack_c,uStack_8,0x11,0,&DAT_0074dfe0);
  _DAT_0074e000 = (int)DAT_0074dfe2;
  _DAT_0074e004 = (int)DAT_0074dfe0;
  _DAT_0074e00c = &DAT_0074dfe4;
  return &DAT_0074e000;
}


/* ==== 00565ccb FUN_00565ccb ==== */

void FUN_00565ccb(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}


/* ==== 00565d81 FUN_00565d81 ==== */

void FUN_00565d81(void)

{
  __amsg_exit(2);
  return;
}


/* ==== 00565d8a FUN_00565d8a ==== */

void FUN_00565d8a(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_5c [40];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar1 = *param_2;
  if (iVar1 == 1) {
LAB_00565dcf:
    uVar2 = 8;
  }
  else if (iVar1 == 2) {
    uVar2 = 4;
  }
  else if (iVar1 == 3) {
    uVar2 = 0x11;
  }
  else if (iVar1 == 4) {
    uVar2 = 0x12;
  }
  else {
    if (iVar1 == 5) goto LAB_00565dcf;
    if (iVar1 == 7) {
      *param_2 = 1;
      goto LAB_00565e25;
    }
    if (iVar1 != 8) goto LAB_00565e25;
    uVar2 = 0x10;
  }
  iVar1 = FUN_0055f65e(uVar2,param_2 + 6,param_3);
  if (iVar1 == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_0055f3ab(local_5c,&param_3,uVar2,param_1,param_2 + 2,param_2 + 6);
  }
LAB_00565e25:
  FUN_0055fae8(param_3,0xffff);
  if (((*param_2 != 8) && (DAT_005c94c0 == 0)) && (iVar1 = FUN_00564aa0(param_2), iVar1 != 0)) {
    return;
  }
  FUN_0055f8fd(*param_2);
  return;
}


/* ==== 00565e5a FUN_00565e5a ==== */

byte FUN_00565e5a(uint param_1)

{
  if (DAT_007501a0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}


/* ==== 00565e80 __aullrem ==== */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/* ==== 00565ef5 FUN_00565ef5 ==== */

uint FUN_00565ef5(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  HANDLE hFile;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  _SECURITY_ATTRIBUTES security_attributes;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar7 = (param_2 & 0x80) == 0;
  security_attributes.nLength = 0xc;
  security_attributes.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar7) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  security_attributes.bInheritHandle = (BOOL)bVar7;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_0074e040 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      DAT_0074dc60 = 0x16;
      DAT_0074dc64 = 0;
      return 0xffffffff;
    }
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) {
      DAT_0074dc60 = 0x16;
      DAT_0074dc64 = 0;
      return 0xffffffff;
    }
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_00566013;
      if (uVar2 != 0x300) {
        DAT_0074dc60 = 0x16;
        DAT_0074dc64 = 0;
        return 0xffffffff;
      }
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_00566013:
        local_c = 5;
        goto LAB_00566023;
      }
      if (uVar2 != 0x700) {
        DAT_0074dc60 = 0x16;
        DAT_0074dc64 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_00566023:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_0074dc68 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_0055a0f7();
  if (uVar3 == 0xffffffff) {
    DAT_0074dc64 = 0;
    DAT_0074dc60 = 0x18;
  }
  else {
    hFile = CreateFileA(param_1,local_10,local_14,&security_attributes,local_c,uVar2,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar4 = GetFileType(hFile);
      if (DVar4 != 0) {
        if (DVar4 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (DVar4 == 3) {
          local_5 = local_5 | 8;
        }
        FUN_0055a18c(uVar3,hFile);
        iVar6 = (uVar3 & 0x1f) * 8;
        param_1._3_1_ = local_5 & 0x48;
        *(byte *)((&DAT_007500a0)[(int)uVar3 >> 5] + 4 + iVar6) = local_5 | 1;
        if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
          local_14 = FUN_00562b76(uVar3,0xffffffff,2);
          if (local_14 == -1) {
            if (DAT_0074dc64 != 0x83) {
LAB_00566184:
              FUN_0055ef30(uVar3);
              return 0xffffffff;
            }
          }
          else {
            param_3 = param_3 & 0xffffff;
            iVar5 = FUN_0055fc3a(uVar3,(int)&param_3 + 3,1);
            if ((((iVar5 == 0) && (param_3._3_1_ == '\x1a')) &&
                (iVar5 = FUN_00568263(uVar3,local_14), iVar5 == -1)) ||
               (iVar5 = FUN_00562b76(uVar3,0,0), iVar5 == -1)) goto LAB_00566184;
          }
        }
        if (param_1._3_1_ != 0) {
          return uVar3;
        }
        if ((param_2 & 8) != 0) {
          pbVar1 = (byte *)((&DAT_007500a0)[(int)uVar3 >> 5] + 4 + iVar6);
          *pbVar1 = *pbVar1 | 0x20;
          return uVar3;
        }
        return uVar3;
      }
      CloseHandle(hFile);
    }
    DVar4 = GetLastError();
    FUN_00560c26(DVar4);
  }
  return 0xffffffff;
}


/* ==== 005661b0 __allshl ==== */

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __allshl(void)

{
  uint in_EAX;
  byte in_CL;
  int in_EDX;
  
  if (0x3f < in_CL) {
    return 0;
  }
  if (in_CL < 0x20) {
    return CONCAT44(in_EDX << (in_CL & 0x1f) | in_EAX >> 0x20 - (in_CL & 0x1f),
                    in_EAX << (in_CL & 0x1f));
  }
  return (ulonglong)(in_EAX << (in_CL & 0x1f)) << 0x20;
}


/* ==== 005661cf FUN_005661cf ==== */

undefined4
FUN_005661cf(ushort *param_1,int *param_2,byte *param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  char local_60 [23];
  char i;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int k;
  uint j;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  j = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = 0;
  k = 0;
  local_18 = 0;
  for (pbVar7 = param_3;
      (((bVar6 = *pbVar7, bVar6 == 0x20 || (bVar6 == 9)) || (bVar6 == 10)) || (bVar6 == 0xd));
      pbVar7 = pbVar7 + 1) {
  }
  iVar4 = 4;
  iVar10 = 0;
  iVar5 = local_14;
LAB_00566226:
  local_14 = iVar5;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  pbVar9 = param_3;
  iVar1 = local_14;
  switch(iVar10) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_00566243:
      local_14 = iVar1;
      iVar10 = 3;
      goto LAB_00566468;
    }
    if (bVar6 == DAT_005c837c) goto LAB_00566252;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar10 = 2;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar10 = 2;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else {
      iVar10 = iVar5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_00566542;
    }
    goto LAB_00566226;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar1 = iVar5, (char)bVar6 < ':')) goto LAB_00566243;
    iVar10 = iVar4;
    pbVar7 = pbVar8;
    if (bVar6 != DAT_005c837c) {
      iVar10 = iVar5;
      if ((bVar6 == 0x2b) || (iVar10 = local_14, bVar6 == 0x2d)) goto LAB_005662d7;
      iVar10 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_005662b0;
    }
    goto LAB_00566226;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_00566243;
    if (bVar6 == DAT_005c837c) {
LAB_00566252:
      iVar10 = 5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    else {
      iVar10 = iVar5;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_00566547;
    }
    goto LAB_00566226;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_005c8378 < 2) {
        uVar2 = (byte)PTR_s__005c8384[(uint)bVar6 * 2] & 4;
      }
      else {
        uVar2 = FUN_0055c336(bVar6,4);
      }
      if (uVar2 == 0) break;
      if (j < 0x19) {
        j = j + 1;
        pcVar3 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar3;
      }
      else {
        k = k + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar10 = iVar4;
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (bVar6 != DAT_005c837c) goto LAB_005663c4;
    goto LAB_00566226;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar10 = iVar5;
    if (j == 0) {
      while (iVar5 = local_28, iVar10 = local_14, bVar6 == 0x30) {
        k = k + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar10;
      local_28 = iVar5;
      if (DAT_005c8378 < 2) {
        uVar2 = (byte)PTR_s__005c8384[(uint)bVar6 * 2] & 4;
      }
      else {
        uVar2 = FUN_0055c336(bVar6,4);
      }
      if (uVar2 == 0) break;
      if (j < 0x19) {
        j = j + 1;
        k = k + -1;
        pcVar3 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar3;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar10 = local_14;
    }
LAB_005663c4:
    iVar10 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_005662d7:
      local_14 = iVar10;
      iVar10 = 0xb;
      pbVar7 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_005662b0:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_00566542;
      iVar10 = 6;
      pbVar7 = pbVar8;
      iVar5 = local_14;
    }
    goto LAB_00566226;
  case 5:
    local_28 = iVar5;
    if (DAT_005c8378 < 2) {
      uVar2 = (byte)PTR_s__005c8384[(uint)bVar6 * 2] & 4;
    }
    else {
      uVar2 = FUN_0055c336(bVar6,4);
    }
    iVar10 = iVar4;
    if (uVar2 != 0) goto LAB_00566468;
    goto LAB_00566547;
  case 6:
    param_3 = pbVar7 + -1;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_0056649d;
      if (bVar6 == 0x2d) goto LAB_00566491;
      pbVar9 = param_3;
      if (bVar6 != 0x30) goto LAB_00566547;
LAB_00566436:
      iVar10 = 8;
      pbVar7 = pbVar8;
      iVar5 = local_14;
      goto LAB_00566226;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x30) goto LAB_00566436;
      goto LAB_00566547;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_00566542;
    break;
  case 9:
    local_24 = 1;
    iVar4 = 0;
    goto LAB_005664c8;
  default:
    goto switchD_00566232_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      param_3 = pbVar7;
      if (bVar6 == 0x2b) {
LAB_0056649d:
        iVar10 = 7;
        pbVar7 = pbVar8;
        iVar5 = local_14;
      }
      else {
        pbVar9 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_00566547;
LAB_00566491:
        local_1c = -1;
        iVar10 = 7;
        pbVar7 = pbVar8;
        iVar5 = local_14;
      }
      goto LAB_00566226;
    }
    iVar10 = 10;
    pbVar8 = pbVar7;
switchD_00566232_caseD_a:
    pbVar7 = pbVar8;
    pbVar9 = pbVar8;
    iVar5 = local_14;
    if (iVar10 != 10) goto LAB_00566226;
    goto LAB_00566547;
  }
  iVar10 = 9;
LAB_00566468:
  pbVar7 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_00566226;
LAB_005664c8:
  if (DAT_005c8378 < 2) {
    uVar2 = (byte)PTR_s__005c8384[(uint)bVar6 * 2] & 4;
  }
  else {
    uVar2 = FUN_0055c336(bVar6,4);
  }
  if (uVar2 == 0) goto LAB_00566512;
  iVar4 = (char)bVar6 + -0x30 + iVar4 * 10;
  if (0x1450 < iVar4) goto LAB_0056650a;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_005664c8;
LAB_0056650a:
  iVar4 = 0x1451;
LAB_00566512:
  while( true ) {
    local_20 = iVar4;
    if (DAT_005c8378 < 2) {
      uVar2 = (byte)PTR_s__005c8384[(uint)bVar6 * 2] & 4;
    }
    else {
      uVar2 = FUN_0055c336(bVar6,4);
    }
    if (uVar2 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    iVar4 = local_20;
  }
LAB_00566542:
  pbVar9 = pbVar8 + -1;
LAB_00566547:
  *param_2 = (int)pbVar9;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_00566655;
  }
  pcVar3 = local_10;
  if (0x18 < j) {
    if ('\x04' < i) {
      i = i + '\x01';
    }
    j = 0x18;
    k = k + 1;
    pcVar3 = local_10 + -1;
  }
  if (j == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar3 = pcVar3 + -1, *pcVar3 == '\0') {
      j = j - 1;
      k = k + 1;
    }
    FUN_00567f09(local_60,j,&local_44);
    iVar4 = local_20;
    if (local_1c < 0) {
      iVar4 = -local_20;
    }
    iVar4 = iVar4 + k;
    if (local_24 == 0) {
      iVar4 = iVar4 + param_5;
    }
    if (local_28 == 0) {
      iVar4 = iVar4 - param_6;
    }
    if (iVar4 < 0x1451) {
      if (-0x1451 < iVar4) {
        FUN_005685c9(&local_44,iVar4,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_005665da;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_005665da:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_00566655:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}


/* ==== 005666a0 FUN_005666a0 ==== */

void FUN_005666a0(undefined4 param_1)

{
  FUN_005666b1(param_1,0,4);
  return;
}


/* ==== 005666b1 FUN_005666b1 ==== */

undefined4 FUN_005666b1(byte param_1,uint param_2,byte param_3)

{
  if ((*(byte *)((int)&DAT_007502c0 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(s__005c838e + (uint)param_1 * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}


/* ==== 005666e2 FUN_005666e2 ==== */

int FUN_005666e2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0074e014 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0074e014 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_0074e014 != (FARPROC)0x0) {
        DAT_0074e018 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_0074e01c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_00566731;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_00566731:
    if (DAT_0074e018 != (FARPROC)0x0) {
      iVar1 = (*DAT_0074e018)();
      if ((iVar1 != 0) && (DAT_0074e01c != (FARPROC)0x0)) {
        iVar1 = (*DAT_0074e01c)(iVar1);
      }
    }
    iVar1 = (*DAT_0074e014)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


/* ==== 00566770 FUN_00566770 ==== */

uint FUN_00566770(int param_1,uint param_2,ushort param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)CONCAT28(param_3,CONCAT44(param_2,param_1));
  while (!CARRY4(param_2,param_2)) {
    if (param_1 == 0 && param_2 == 0) {
      return 0;
    }
    if ((param_3 & 0x7fff) != 0) {
      return param_3 & 0x7fff;
    }
    uVar2 = param_6 & 0x7fff;
    if (uVar2 == 0) {
      if (CARRY4(param_5,param_5)) {
        return param_5 * 2;
      }
    }
    else if ((uVar2 == 0x7fff) || (uVar2 = param_5 * 2, !CARRY4(param_5,param_5))) {
      return uVar2;
    }
    fVar3 = fVar1 * (float10)9.223372e+18;
    param_1 = SUB104(fVar3,0);
    param_3 = (ushort)((unkuint10)fVar3 >> 0x40);
    param_2 = (uint)((unkuint10)fVar3 >> 0x20);
  }
  uVar2 = param_2 * 2 ^ 0xe000000;
  if ((uVar2 & 0xe000000) != 0) {
    return uVar2;
  }
  uVar2 = (param_2 & 0x7fffffff) >> 0x1b;
  if ((&DAT_005c9540)[uVar2] != '\0') {
    if (((param_3 & 0x7fff) != 0) && ((param_3 & 0x7fff) != 0x7fff)) {
      if ((param_6 & 0x7fff) != 1) {
        return param_6 & 0x7fff;
      }
      return 1;
    }
    return param_3 & 0x7fff;
  }
  return uVar2;
}


/* ==== 00566f61 FUN_00566f61 ==== */

undefined4 FUN_00566f61(void)

{
  undefined4 in_EAX;
  
  FUN_00566770();
  return in_EAX;
}


/* ==== 005674fb FUN_005674fb ==== */

int FUN_005674fb(int param_1,uint param_2)

{
  int iVar1;
  int iStack_8;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_0055f9b0();
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iStack_8 = 4;
      }
      else if (iVar1 == 3) {
        iStack_8 = 2;
      }
      else {
        iStack_8 = 1;
      }
      return iStack_8;
    }
    return 0x200;
  }
  if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
}


/* ==== 0056758d FUN_0056758d ==== */

undefined4 FUN_0056758d(uchar *param_1,int param_2)

{
  uchar *puVar1;
  int i;
  int *piVar2;
  size_t _strlen_result;
  LPCSTR lpName;
  int *piVar3;
  bool bVar4;
  
  if (param_1 == (uchar *)0x0) {
    return 0xffffffff;
  }
  puVar1 = (uchar *)FUN_00568645(param_1,0x3d);
  if (puVar1 == (uchar *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar1) {
    return 0xffffffff;
  }
  bVar4 = puVar1[1] == '\0';
  if (DAT_0074dc88 == DAT_0074dc8c) {
    DAT_0074dc88 = (int *)FUN_0056776c(DAT_0074dc88);
  }
  if (DAT_0074dc88 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_0074dc90 == (undefined4 *)0x0)) {
      if (bVar4) {
        return 0;
      }
      DAT_0074dc88 = _malloc(4);
      if (DAT_0074dc88 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_0074dc88 = 0;
      if (DAT_0074dc90 == (undefined4 *)0x0) {
        DAT_0074dc90 = _malloc(4);
        if (DAT_0074dc90 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_0074dc90 = 0;
      }
    }
    else {
      i = FUN_00562da7();
      if (i != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar2 = DAT_0074dc88;
  i = FUN_00567714(param_1,(int)puVar1 - (int)param_1);
  if ((i < 0) || (*piVar2 == 0)) {
    if (bVar4) {
      return 0;
    }
    if (i < 0) {
      i = -i;
    }
    piVar2 = (int *)FUN_0055a9b4(piVar2,i * 4 + 8);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar2[i] = (int)param_1;
    piVar2[i + 1] = 0;
  }
  else {
    if (!bVar4) {
      piVar2[i] = (int)param_1;
      goto LAB_005676c1;
    }
    piVar3 = piVar2 + i;
    FUN_00559d4e(piVar2[i]);
    for (; *piVar3 != 0; piVar3 = piVar3 + 1) {
      i = i + 1;
      *piVar3 = piVar3[1];
    }
    piVar2 = (int *)FUN_0055a9b4(piVar2,i << 2);
    if (piVar2 == (int *)0x0) goto LAB_005676c1;
  }
  DAT_0074dc88 = piVar2;
LAB_005676c1:
  if (param_2 != 0) {
    _strlen_result = _strlen((char *)param_1);
    lpName = _malloc(_strlen_result + 2);
    if (lpName != (LPCSTR)0x0) {
      FUN_0055ee40(lpName,param_1);
      puVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar4 & (uint)(puVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      FUN_00559d4e(lpName);
    }
  }
  return 0;
}


/* ==== 00567714 FUN_00567714 ==== */

int FUN_00567714(uchar *str1,size_t max_count)

{
  uchar *_Str2;
  int __mbsnbicoll_result;
  int *piVar1;
  
  _Str2 = (uchar *)*DAT_0074dc88;
  piVar1 = DAT_0074dc88;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar1 - (int)DAT_0074dc88 >> 2);
    }
    __mbsnbicoll_result = __mbsnbicoll(str1,_Str2,max_count);
    if ((__mbsnbicoll_result == 0) &&
       ((*(char *)(*piVar1 + max_count) == '=' || (*(char *)(*piVar1 + max_count) == '\0')))) break;
    _Str2 = (uchar *)piVar1[1];
    piVar1 = piVar1 + 1;
  }
  return (int)piVar1 - (int)DAT_0074dc88 >> 2;
}


/* ==== 0056776c FUN_0056776c ==== */

undefined4 * FUN_0056776c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *_malloc_result;
  char *str;
  undefined4 uVar3;
  int i;
  undefined4 *puVar4;
  
  i = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      i = i + 1;
      iVar1 = *piVar2;
    }
    _malloc_result = _malloc(i * 4 + 4);
    if (_malloc_result == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    str = (char *)*param_1;
    puVar4 = _malloc_result;
    while (str != (char *)0x0) {
      param_1 = param_1 + 1;
      uVar3 = FUN_005686b8(str);
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      str = (char *)*param_1;
    }
    *puVar4 = 0;
    return _malloc_result;
  }
  return (undefined4 *)0x0;
}


/* ==== 005677d3 FUN_005677d3 ==== */

undefined8 FUN_005677d3(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  LONG local_8;
  
  if (param_1 < DAT_007501a0) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_00567869;
    local_8 = param_3;
    hFile = (HANDLE)FUN_0055a27d(param_1);
    if (hFile != (HANDLE)0xffffffff) {
      DVar3 = SetFilePointer(hFile,param_2,&local_8,param_4);
      if (DVar3 == 0xffffffff) {
        DVar2 = GetLastError();
        if (DVar2 != 0) {
          FUN_00560c26(DVar2);
          goto LAB_0056787a;
        }
      }
      pbVar1 = (byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_00567880;
    }
    DAT_0074dc60 = 9;
  }
  else {
LAB_00567869:
    DAT_0074dc64 = 0;
    DAT_0074dc60 = 9;
  }
LAB_0056787a:
  DVar3 = 0xffffffff;
  local_8 = -1;
LAB_00567880:
  return CONCAT44(local_8,DVar3);
}


/* ==== 00567884 FUN_00567884 ==== */

undefined4 FUN_00567884(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  char *_Source;
  char *_Dest;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  char local_84 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    pbVar7 = &DAT_0074e020;
    iVar5 = FUN_005686e3(param_2,param_3,&DAT_0074e020,4,0);
    if (iVar5 != 0) {
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar7;
        if (DAT_005c8378 < 2) {
          uVar6 = (byte)PTR_s__005c8384[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar6 = FUN_0055c336(bVar1,4);
        }
        if (uVar6 == 0) break;
        pbVar7 = pbVar7 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x74e027 < (int)pbVar7) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_84;
  bVar2 = false;
  sVar3 = FUN_005687f6(param_2,param_3,local_84,0x80,0);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (DVar4 != 0x7a) {
      return 0xffffffff;
    }
    sVar3 = FUN_005687f6(param_2,param_3,0,0,0);
    if (sVar3 == 0) {
      return 0xffffffff;
    }
    _Source = _malloc(sVar3);
    if (_Source == (char *)0x0) {
      return 0xffffffff;
    }
    bVar2 = true;
    sVar3 = FUN_005687f6(param_2,param_3,_Source,sVar3,0);
    if (sVar3 == 0) goto LAB_00567922;
  }
  _Dest = _malloc(sVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,sVar3);
    if (bVar2) {
      FUN_00559d4e(_Source);
    }
    return 0;
  }
  if (!bVar2) {
    return 0xffffffff;
  }
LAB_00567922:
  FUN_00559d4e(_Source);
  return 0xffffffff;
}


/* ==== 005679bc FUN_005679bc ==== */

BOOL FUN_005679bc(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6
                 )

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t _Size;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0057a450;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  iVar3 = DAT_0074e028;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_0074e028 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_0074e028 = iVar3;
  if (DAT_0074e028 != 1) {
    if (DAT_0074e028 == 2) {
      if (param_5 == 0) {
        param_5 = DAT_0074dcf4;
      }
      _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (_Size != 0) {
        local_8 = 0;
        FUN_00559400();
        local_1c = &stack0xffffffc4;
        _memset(&stack0xffffffc4,0,_Size);
        local_8 = 0xffffffff;
        if (&stack0x00000000 != &DAT_0000003c) {
          iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,&stack0xffffffc4,_Size,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar3 != 0) {
            local_8 = 1;
            FUN_00559400();
            local_8 = 0xffffffff;
            if (&stack0x00000000 != &DAT_0000003c) {
              if (param_6 == 0) {
                param_6 = DAT_0074dce4;
              }
              local_1c = &stack0xffffffc4;
              *(short *)(&stack0xffffffc4 + param_3 * 2) = -1;
              local_20[param_3 + -0xf] = 0xffff;
              BVar2 = GetStringTypeA(param_6,param_1,&stack0xffffffc4,_Size,(LPWORD)&stack0xffffffc4
                                    );
              if ((local_20[param_3 + -0xf] != 0xffff) &&
                 (*(short *)(&stack0xffffffc4 + param_3 * 2) == -1)) {
                FUN_005580e0(param_4,&stack0xffffffc4,param_3 * 2);
                ExceptionList = local_14;
                return BVar2;
              }
            }
          }
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}


/* ==== 00567b81 FUN_00567b81 ==== */

undefined4 FUN_00567b81(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 10) && (param_1 < 0)) {
    uVar1 = 1;
    param_3 = 10;
  }
  else {
    uVar1 = 0;
  }
  FUN_00567bae(param_1,param_2,param_3,uVar1);
  return param_2;
}


/* ==== 00567bae FUN_00567bae ==== */

void FUN_00567bae(uint param_1,char *param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_1 = -param_1;
    pcVar2 = param_2;
  }
  do {
    pcVar3 = pcVar2;
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / param_3;
    cVar4 = (char)(uVar1 % (ulonglong)param_3);
    if ((uint)(uVar1 % (ulonglong)param_3) < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *pcVar3 = cVar4;
    pcVar2 = pcVar3 + 1;
  } while (param_1 != 0);
  pcVar3[1] = '\0';
  do {
    cVar4 = *pcVar3;
    *pcVar3 = *param_2;
    *param_2 = cVar4;
    pcVar3 = pcVar3 + -1;
    param_2 = param_2 + 1;
  } while (param_2 < pcVar3);
  return;
}


/* ==== 00567c10 FUN_00567c10 ==== */

undefined4 FUN_00567c10(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (param_3 != 0) {
    if (DAT_0074dce4 == 0) {
      do {
        bVar2 = *param_1;
        cVar1 = *param_2;
        uVar3 = CONCAT11(bVar2,cVar1);
        if (bVar2 == 0) break;
        uVar3 = CONCAT11(bVar2,cVar1);
        uVar6 = (uint)uVar3;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
          uVar6 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
        }
        uVar3 = (ushort)uVar6;
        bVar2 = (byte)uVar6;
        if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
          uVar3 = (ushort)CONCAT31((int3)(uVar6 >> 8),bVar2 + 0x20);
        }
        bVar2 = (byte)(uVar3 >> 8);
        bVar7 = bVar2 < (byte)uVar3;
        if (bVar2 != (byte)uVar3) goto LAB_00567c6b;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar5 = 0;
      bVar2 = (byte)(uVar3 >> 8);
      bVar7 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) {
LAB_00567c6b:
        uVar5 = 0xffffffff;
        if (!bVar7) {
          uVar5 = 1;
        }
      }
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
      do {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),*param_1);
        uVar6 = CONCAT31((int3)(uVar6 >> 8),*param_2);
        if ((uVar4 == 0) || (uVar6 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar6 = FUN_00565739(uVar6,uVar4);
        uVar4 = FUN_00565739();
        bVar7 = uVar4 < uVar6;
        if (uVar4 != uVar6) goto LAB_00567cad;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar5 = 0;
      bVar7 = uVar4 < uVar6;
      if (uVar4 != uVar6) {
LAB_00567cad:
        uVar5 = 0xffffffff;
        if (!bVar7) {
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}


/* ==== 00567cbd FUN_00567cbd ==== */

undefined4 FUN_00567cbd(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int i;
  int iVar4;
  code *pcVar5;
  
  iVar2 = param_1;
  if (param_1 == 2) {
    puVar3 = &DAT_0074e02c;
    pcVar5 = DAT_0074e02c;
  }
  else if (((param_1 == 4) || (param_1 == 8)) || (param_1 == 0xb)) {
    i = FUN_00567dea(param_1);
    pcVar5 = *(code **)(i + 8);
    puVar3 = (undefined4 *)(i + 8);
  }
  else if (param_1 == 0xf) {
    puVar3 = &DAT_0074e038;
    pcVar5 = DAT_0074e038;
  }
  else if (param_1 == 0x15) {
    puVar3 = &DAT_0074e030;
    pcVar5 = DAT_0074e030;
  }
  else {
    if (param_1 != 0x16) {
      return 0xffffffff;
    }
    puVar3 = &DAT_0074e034;
    pcVar5 = DAT_0074e034;
  }
  iVar1 = DAT_0074dd68;
  i = DAT_005c8ac4;
  if (pcVar5 == (code *)0x1) {
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (iVar4 = param_1, param_1 == 4)) {
    DAT_0074dd68 = 0;
    iVar4 = iVar1;
    if (param_1 == 8) {
      DAT_005c8ac4 = 0x8c;
      param_1 = i;
      goto LAB_00567d81;
    }
LAB_00567dad:
    *puVar3 = 0;
    if (iVar2 != 8) {
      (*pcVar5)(iVar2);
      if ((iVar2 != 0xb) && (iVar2 != 4)) {
        return 0;
      }
      goto LAB_00567dd0;
    }
  }
  else {
LAB_00567d81:
    if (iVar2 != 8) goto LAB_00567dad;
    if (DAT_005c8ab8 < DAT_005c8abc + DAT_005c8ab8) {
      i = (DAT_005c8abc + DAT_005c8ab8) - DAT_005c8ab8;
      puVar3 = (undefined4 *)(DAT_005c8ab8 * 0xc + 0x5c8a48);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 3;
        i = i + -1;
      } while (i != 0);
    }
  }
  (*pcVar5)(8,DAT_005c8ac4);
LAB_00567dd0:
  if (iVar2 == 8) {
    DAT_005c8ac4 = param_1;
  }
  DAT_0074dd68 = iVar4;
  return 0;
}


/* ==== 00567dea FUN_00567dea ==== */

undefined4 * FUN_00567dea(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_005c8a40;
  if (DAT_005c8a44 != param_1) {
    puVar3 = puVar2;
    do {
      puVar2 = puVar3 + 3;
      if (&DAT_005c8a40 + DAT_005c8ac0 * 3 <= puVar2) break;
      piVar1 = puVar3 + 4;
      puVar3 = puVar2;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_005c8a40 + DAT_005c8ac0 * 3 <= puVar2) || (puVar2[1] != param_1)) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}


/* ==== 00567e2f FUN_00567e2f ==== */

undefined4 FUN_00567e2f(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}


/* ==== 00567e50 ___add_12 ==== */

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void ___add_12(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00567e2f(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00567e2f(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_00567e2f(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_00567e2f(param_1[2],param_2[2],param_1 + 2);
  return;
}


/* ==== 00567eae FUN_00567eae ==== */

void FUN_00567eae(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}


/* ==== 00567edc FUN_00567edc ==== */

void FUN_00567edc(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


/* ==== 00567f09 FUN_00567f09 ==== */

void FUN_00567f09(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_00567eae(puVar1);
      FUN_00567eae(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_00567eae(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_00567eae(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}


/* ==== 00567fd0 FUN_00567fd0 ==== */

undefined4
FUN_00567fd0(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  short *psVar2;
  char cVar3;
  uint i;
  short *psVar4;
  short *psVar5;
  short j;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar2 = param_6;
  i = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)i != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)i == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_005680c5;
          pcVar8 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_005680c5:
            pcVar8 = "1#QNAN";
            goto LAB_005680ca;
          }
          pcVar8 = "1#IND";
        }
        FUN_0055ee40(param_6 + 2,pcVar8);
        *(undefined1 *)((int)psVar2 + 3) = 5;
      }
      else {
        pcVar8 = "1#SNAN";
LAB_005680ca:
        FUN_0055ee40(param_6 + 2,pcVar8);
        *(undefined1 *)((int)psVar2 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)i;
    cStack_9 = (char)(i >> 8);
    local_e = (undefined2)param_2;
    uStack_c = (undefined2)(param_2 >> 0x10);
    local_12 = (undefined2)param_1;
    uStack_10 = (undefined2)((uint)param_1 >> 0x10);
    j = (short)(((i >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + i * 0x4d10 >> 0x10);
    FUN_005685c9(&local_14,-(int)j,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      j = j + 1;
      FUN_005683a9(&local_14,&local_20);
    }
    *psVar2 = j;
    iVar7 = param_4;
    if (((param_5 & 1) == 0) || (iVar7 = param_4 + j, 0 < param_4 + j)) {
      if (0x15 < iVar7) {
        iVar7 = 0x15;
      }
      iVar6 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_00567eae(&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar6 < 0) {
        param_6 = (short *)0x0;
        for (i = -iVar6 & 0xff; i != 0; i = i - 1) {
          FUN_00567edc(&local_14);
        }
      }
      param_4 = iVar7 + 1;
      psVar4 = psVar2 + 2;
      param_6 = psVar4;
      if (0 < param_4) {
        do {
          param_1 = CONCAT22(local_12,local_14);
          param_2 = CONCAT22(local_e,uStack_10);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,uStack_c));
          FUN_00567eae(&local_14);
          FUN_00567eae(&local_14);
          ___add_12(&local_14,&param_1);
          FUN_00567eae(&local_14);
          cVar3 = cStack_9;
          cStack_9 = '\0';
          psVar4 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar3 + '0';
          param_6 = psVar4;
        } while (param_4 != 0);
      }
      psVar5 = psVar4 + -1;
      psVar1 = psVar2 + 2;
      if ('4' < *(char *)((int)psVar4 + -1)) {
        for (; psVar1 <= psVar5; psVar5 = (short *)((int)psVar5 + -1)) {
          if ((char)*psVar5 != '9') {
            if (psVar1 <= psVar5) goto LAB_00568222;
            break;
          }
          *(char *)psVar5 = '0';
        }
        psVar5 = (short *)((int)psVar5 + 1);
        *psVar2 = *psVar2 + 1;
LAB_00568222:
        *(char *)psVar5 = (char)*psVar5 + '\x01';
LAB_00568224:
        cVar3 = ((char)psVar5 - (char)psVar2) + -3;
        *(char *)((int)psVar2 + 3) = cVar3;
        *(undefined1 *)(cVar3 + 4 + (int)psVar2) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar5; psVar5 = (short *)((int)psVar5 + -1)) {
        if ((char)*psVar5 != '0') {
          if (psVar1 <= psVar5) goto LAB_00568224;
          break;
        }
      }
      *psVar2 = 0;
      *(undefined1 *)(psVar2 + 1) = 0x20;
      *(undefined1 *)((int)psVar2 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_0056825a;
    }
  }
  *psVar2 = 0;
  *(undefined1 *)(psVar2 + 1) = 0x20;
  *(undefined1 *)((int)psVar2 + 3) = 1;
  *(undefined1 *)(psVar2 + 2) = 0x30;
LAB_0056825a:
  *(undefined1 *)((int)psVar2 + 5) = 0;
  return 1;
}


/* ==== 00568263 FUN_00568263 ==== */

int FUN_00568263(uint param_1,int param_2)

{
  int iVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  undefined1 local_1004 [4060];
  undefined4 uStackY_28;
  uint uStackY_24;
  uint uStackY_20;
  
  FUN_00559400();
  iVar3 = 0;
  if ((param_1 < DAT_007501a0) &&
     ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    iVar1 = FUN_00562b76();
    if ((iVar1 != -1) && (iVar1 = FUN_00562b76(), iVar1 != -1)) {
      param_2 = param_2 - iVar1;
      if (param_2 < 1) {
        if (param_2 < 0) {
          uStackY_20 = 0x568352;
          FUN_00562b76();
          uStackY_20 = param_1;
          uStackY_24 = 0x568358;
          hFile = (HANDLE)FUN_0055a27d();
          BVar2 = SetEndOfFile(hFile);
          iVar3 = (BVar2 != 0) - 1;
          if (iVar3 == -1) {
            DAT_0074dc60 = 0xd;
            DAT_0074dc64 = GetLastError();
          }
        }
      }
      else {
        uStackY_20 = 0x5682e8;
        _memset(local_1004,0,0x1000);
        uStackY_20 = 0x8000;
        uStackY_24 = param_1;
        uStackY_28 = 0x5682f3;
        FUN_00568914();
        do {
          uStackY_20 = 0x568312;
          iVar1 = FUN_0055fe30();
          if (iVar1 == -1) {
            if (DAT_0074dc64 == 5) {
              DAT_0074dc60 = 0xd;
            }
            iVar3 = -1;
            break;
          }
          param_2 = param_2 - iVar1;
        } while (0 < param_2);
        FUN_00568914();
      }
      uStackY_20 = 0x568390;
      FUN_00562b76();
      return iVar3;
    }
  }
  else {
    DAT_0074dc60 = 9;
  }
  return -1;
}


/* ==== 005683a9 FUN_005683a9 ==== */

void FUN_005683a9(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ushort uVar5;
  int n;
  ushort uVar6;
  ushort uVar7;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int i;
  int j;
  int m;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  ushort k;
  
  piVar4 = param_2;
  piVar3 = param_1;
  j = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar5 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar6 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar7 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  k = uVar6 + uVar5;
  if (((uVar5 < 0x7fff) && (uVar6 < 0x7fff)) && (k < 0xbffe)) {
    if (k < 0x3fc0) {
LAB_0056844c:
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (((uVar5 != 0) || (k = k + 1, (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar5 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      if (((uVar6 == 0) && (k = k + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
         ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_0056844c;
      m = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(m * 2 + (int)param_1);
          local_10 = (ushort *)(piVar4 + 2);
          i = (int)param_2;
          do {
            n = FUN_00567e2f(*(undefined4 *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                             local_8 + -2);
            if (n != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            i = i + -1;
          } while (i != 0);
        }
        local_8 = local_8 + 1;
        m = m + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1._0_2_ = k + 0xc002;
      if ((short)(ushort)param_1 < 1) {
LAB_00568500:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          n = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)n;
          do {
            if ((local_28 & 1) != 0) {
              j = j + 1;
            }
            FUN_00567edc(&local_28);
            n = n + -1;
          } while (n != 0);
          if (j != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_00567eae(&local_28);
          param_1._0_2_ = (ushort)param_1 - 1;
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_00568500;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar1 = CONCAT11(bStack_1d,uStack_1e), iVar2 = CONCAT22(local_20,uStack_22),
         n = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          n = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar1 = -0x8000;
              iVar2 = 0;
              n = 0;
            }
            else {
              sVar1 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar2 = 0;
              n = 0;
            }
          }
          else {
            sVar1 = CONCAT11(bStack_1d,uStack_1e);
            iVar2 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          n = CONCAT22(local_24,uStack_26) + 1;
          sVar1 = CONCAT11(bStack_1d,uStack_1e);
          iVar2 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)n >> 0x10);
      uStack_26 = (undefined2)n;
      local_20 = (undefined2)((uint)iVar2 >> 0x10);
      uStack_22 = (undefined2)iVar2;
      bStack_1d = (byte)((ushort)sVar1 >> 8);
      uStack_1e = (undefined1)sVar1;
      if (0x7ffe < (ushort)param_1) goto LAB_005685a9;
      uVar5 = (ushort)param_1 | uVar7;
      *(undefined2 *)piVar3 = uStack_26;
      *(uint *)((int)piVar3 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar3 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar3 + 10) = uVar5;
  }
  else {
LAB_005685a9:
    piVar3[1] = 0;
    *piVar3 = 0;
    piVar3[2] = (-(uint)(uVar7 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}


/* ==== 005685c9 FUN_005685c9 ==== */

void FUN_005685c9(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  iVar3 = 0x5c9640;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x5c97a0;
    }
    if (param_3 == 0) {
      *param_1 = 0;
    }
    while (param_2 != 0) {
      iVar3 = iVar3 + 0x54;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        puVar4 = (undefined4 *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *(ushort *)(iVar3 + uVar2 * 0xc)) {
          local_10 = (undefined2)*puVar4;
          local_e._0_2_ = (undefined2)((uint)*puVar4 >> 0x10);
          local_e._2_2_ = (undefined2)puVar4[1];
          uStack_a = (undefined2)((uint)puVar4[1] >> 0x10);
          uStack_8 = puVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          puVar4 = (undefined4 *)&local_10;
        }
        FUN_005683a9(param_1,puVar4);
      }
    }
  }
  return;
}


/* ==== 00568645 FUN_00568645 ==== */

byte * FUN_00568645(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_007501bc == 0) {
    pbVar2 = (byte *)FUN_00559b90(param_1,param_2);
    return pbVar2;
  }
  while( true ) {
    uVar1 = (ushort)*param_1;
    if (uVar1 == 0) break;
    if ((*(byte *)((int)&DAT_007502c0 + uVar1 + 1) & 4) == 0) {
      pbVar2 = param_1;
      if (param_2 == uVar1) break;
    }
    else {
      pbVar2 = param_1 + 1;
      if (param_1[1] == 0) {
        return (byte *)0x0;
      }
      if (param_2 == CONCAT11(*param_1,param_1[1])) {
        return param_1;
      }
    }
    param_1 = pbVar2 + 1;
  }
  return (byte *)(~-(uint)(param_2 != uVar1) & (uint)param_1);
}


/* ==== 005686b8 FUN_005686b8 ==== */

undefined4 FUN_005686b8(char *str)

{
  size_t _strlen_result;
  void *_malloc_result;
  undefined4 uVar1;
  
  if (str != (char *)0x0) {
    _strlen_result = _strlen(str);
    _malloc_result = _malloc(_strlen_result + 1);
    if (_malloc_result != (void *)0x0) {
      uVar1 = FUN_0055ee40(_malloc_result,str);
      return uVar1;
    }
  }
  return 0;
}


/* ==== 005686e3 FUN_005686e3 ==== */

int FUN_005686e3(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0057a488;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0074e044 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_0074e044 = 2;
    }
    else {
      DAT_0074e044 = 1;
    }
  }
  if (DAT_0074e044 != 1) {
    if (DAT_0074e044 == 2) {
      if (param_5 == 0) {
        param_5 = DAT_0074dcf4;
      }
      iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
      if (iVar1 != 0) {
        local_8 = 0;
        FUN_00559400();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x34) &&
           (iVar1 = GetLocaleInfoA(param_1,param_2,&stack0xffffffcc,iVar1), iVar1 != 0)) {
          if (param_4 == 0) {
            param_4 = 0;
            param_3 = (LPWSTR)0x0;
          }
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffcc,-1,param_3,param_4);
          ExceptionList = local_14;
          return iVar1;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return iVar1;
}


/* ==== 005687f6 FUN_005687f6 ==== */

int FUN_005687f6(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0057a498;
  puStack_10 = &LAB_0055e3b4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0074e048 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_0074e048 = 2;
    }
    else {
      DAT_0074e048 = 1;
    }
  }
  if (DAT_0074e048 != 2) {
    if (DAT_0074e048 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_0074dcf4;
      }
      iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        local_8 = 0;
        FUN_00559400();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x34) &&
           (iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)&stack0xffffffcc,iVar1), iVar1 != 0)) {
          if (param_4 == 0) {
            param_4 = 0;
            param_3 = (LPSTR)0x0;
          }
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffcc,-1,param_3,param_4,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          ExceptionList = local_14;
          return iVar1;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return iVar1;
}


/* ==== 00568914 FUN_00568914 ==== */

int FUN_00568914(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 < DAT_007501a0) {
    bVar1 = *(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8);
    if ((bVar1 & 1) != 0) {
      if (param_2 == 0x8000) {
        bVar2 = bVar1 & 0x7f;
      }
      else {
        if (param_2 != 0x4000) {
          DAT_0074dc60 = 0x16;
          return -1;
        }
        bVar2 = bVar1 | 0x80;
      }
      *(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) = bVar2;
      return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
    }
  }
  DAT_0074dc60 = 9;
  return -1;
}


/* ==== 00568990 RtlUnwind ==== */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00568990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


/* ==== 005689a0 FUN_005689a0 ==== */

undefined4 FUN_005689a0(int param_1)

{
  int in_ECX;
  
  if (((param_1 < 0x800) && (*(int *)(in_ECX + 8 + param_1 * 4) != 0)) &&
     (*(int *)(in_ECX + 4) != 0)) {
    return 1;
  }
  return 0;
}


/* ==== 005689d0 FUN_005689d0 ==== */

void FUN_005689d0(void)

{
  undefined4 *in_stack_00001004;
  
  FUN_00559400();
  FUN_005590ae();
  (**(code **)*in_stack_00001004)();
  return;
}


/* ==== 00568a40 FUN_00568a40 ==== */

void FUN_00568a40(void)

{
  undefined4 *in_ECX;
  int i;
  undefined4 *puVar1;
  
  *in_ECX = &PTR_LAB_0057a4a4;
  puVar1 = in_ECX + 2;
  for (i = 0x800; i != 0; i = i + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  in_ECX[1] = 1;
  return;
}


/* ==== 00568a60 FUN_00568a60 ==== */

void FUN_00568a60(byte param_1)

{
  FUN_00568a80();
  if ((param_1 & 1) != 0) {
    FUN_0054b339();
  }
  return;
}


/* ==== 00568a80 FUN_00568a80 ==== */

void FUN_00568a80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_0057a4a4;
  return;
}


/* ==== 00568aa0 FUN_00568aa0 ==== */

void FUN_00568aa0(void)

{
  FUN_00568a40();
  return;
}


/* ==== 00568ab0 FUN_00568ab0 ==== */

void FUN_00568ab0(void)

{
  FUN_005584e0(&LAB_00568ac0);
  return;
}


/* ==== 00568ad0 FUN_00568ad0 ==== */

void FUN_00568ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,double param_6,double param_7,double param_8)

{
  undefined4 *in_ECX;
  float10 fVar1;
  int i;
  undefined8 local_108;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  i = 0;
  while( true ) {
    local_108 = ((param_6 - param_7) *
                ((double)CONCAT44(param_5,param_4) - (double)CONCAT44(param_3,param_2))) /
                (param_8 - param_7) + (double)CONCAT44(param_3,param_2);
    if (((byte)i & 3) == 3) {
      if (0x40 < i) {
        *param_1 = param_2;
        param_1[1] = param_3;
        return;
      }
      local_108 = (((double)CONCAT44(param_5,param_4) - local_108) +
                  ((double)CONCAT44(param_3,param_2) - local_108)) * 0.375 + local_108;
    }
    FUN_004f2c40((undefined4)local_108,local_108._4_4_,local_80);
    FUN_004f2c40((undefined4)local_108,local_108._4_4_,local_100);
    fVar1 = (float10)(**(code **)*in_ECX)(local_80,local_100);
    if (ABS(fVar1 - (float10)param_6) < (float10)1e-08) break;
    i = i + 1;
    if (fVar1 < (float10)param_6) {
      param_8 = (double)fVar1;
      param_4 = (undefined4)local_108;
      param_5 = local_108._4_4_;
    }
    else {
      param_7 = (double)fVar1;
      param_2 = (undefined4)local_108;
      param_3 = local_108._4_4_;
    }
  }
  *param_1 = (undefined4)local_108;
  param_1[1] = local_108._4_4_;
  return;
}


/* ==== 00568c50 FUN_00568c50 ==== */

undefined4
FUN_00568c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            double param_5,int param_6,undefined4 *param_7,undefined4 *param_8,double *param_9,
            undefined4 *param_10)

{
  double dVar1;
  undefined4 uVar2;
  int __ftol_result;
  double *pdVar3;
  undefined4 *in_ECX;
  float10 fVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  if (param_9 == (double *)0x0) {
    fVar4 = (float10)(**(code **)*in_ECX)(param_7[5],param_8[5]);
    local_10 = (double)fVar4;
  }
  else {
    local_10 = *param_9;
  }
  if ((double)CONCAT44(param_2,param_1) < local_10) {
    local_18 = param_3;
    uStack_14 = param_4;
    while( true ) {
      if (0.0 < ((double)CONCAT44(uStack_14,local_18) - param_5) +
                (local_10 - (double)CONCAT44(param_2,param_1)) * *(double *)(in_ECX + 4)) {
        return 0;
      }
      __ftol_result = __ftol();
      if (__ftol_result < 1) {
        __ftol_result = 1;
      }
      param_6 = param_6 + __ftol_result;
      dVar1 = (double)((float)__ftol_result * 0.005 + (float)(double)CONCAT44(uStack_14,local_18));
      local_20 = SUB84(dVar1,0);
      uStack_1c = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (param_7[param_6 + 5] == 0) {
        param_7[param_6 + 5] = param_7 + param_6 * 0x20 + 0x1a;
        FUN_004f2c40(dVar1,param_7 + param_6 * 0x20 + 0x1a);
      }
      uVar2 = param_7[param_6 + 5];
      if (param_8[param_6 + 5] == 0) {
        param_8[param_6 + 5] = param_8 + param_6 * 0x20 + 0x1a;
        FUN_004f2c40(dVar1,param_8 + param_6 * 0x20 + 0x1a);
      }
      fVar4 = (float10)(**(code **)*in_ECX)(uVar2,param_8[param_6 + 5]);
      if (fVar4 <= (float10)(double)CONCAT44(param_2,param_1)) break;
      if (param_6 == 0x14) {
        return 0;
      }
      local_18 = local_20;
      uStack_14 = uStack_1c;
      local_10 = (double)fVar4;
    }
    pdVar3 = (double *)
             FUN_00568ad0(&local_10,local_18,uStack_14,dVar1,param_1,param_2,(undefined4)local_10,
                          local_10._4_4_,(double)fVar4,*param_7,*param_8);
    uVar2 = *(undefined4 *)((int)pdVar3 + 4);
    if (0.0 < *pdVar3 - param_5) {
      return 0;
    }
    *param_10 = *(undefined4 *)pdVar3;
    param_10[1] = uVar2;
    return 1;
  }
  *param_10 = param_3;
  param_10[1] = param_4;
  return 1;
}


/* ==== 00568e60 FUN_00568e60 ==== */

undefined4
FUN_00568e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
            int param_10,double *param_11,double *param_12)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int iVar6;
  float10 fVar7;
  int __ftol_result;
  double local_18;
  double dStack_10;
  
  if (param_11 == (double *)0x0) {
    fVar7 = (float10)(**(code **)*in_ECX)
                               (*(undefined4 *)(param_9 + 0x14),*(undefined4 *)(param_10 + 0x14));
  }
  else {
    fVar7 = (float10)*param_11;
  }
  local_18 = (double)fVar7;
  if (fVar7 <= (float10)(double)CONCAT44(param_2,param_1)) {
    dStack_10 = 1.0 / *(double *)(in_ECX + 2);
    iVar6 = 0;
    dVar3 = (double)CONCAT44(param_6,param_5) - (double)CONCAT44(param_8,param_7);
    dVar4 = (double)CONCAT44(param_6,param_5);
    while( true ) {
      if (0.0 <= dVar3) {
        return 0;
      }
      __ftol_result = __ftol();
      if (__ftol_result < 1) {
        __ftol_result = 1;
      }
      iVar6 = iVar6 + __ftol_result;
      dVar2 = (double)((float)__ftol_result * 0.005 + (float)dVar4);
      if (*(int *)(param_9 + 0x14 + iVar6 * 4) == 0) {
        iVar1 = iVar6 * 0x80 + 0x68 + param_9;
        *(int *)(param_9 + 0x14 + iVar6 * 4) = iVar1;
        FUN_004f2c40(dVar2,iVar1);
      }
      uVar5 = *(undefined4 *)(param_9 + 0x14 + iVar6 * 4);
      if (*(int *)(param_10 + 0x14 + iVar6 * 4) == 0) {
        iVar1 = iVar6 * 0x80 + 0x68 + param_10;
        *(int *)(param_10 + 0x14 + iVar6 * 4) = iVar1;
        FUN_004f2c40(dVar2,iVar1);
      }
      fVar7 = (float10)(**(code **)*in_ECX)(uVar5,*(undefined4 *)(param_10 + 0x14 + iVar6 * 4));
      if ((float10)(double)CONCAT44(param_2,param_1) < fVar7) break;
      if (fVar7 <= (float10)local_18) {
        *param_12 = dVar4;
        return 1;
      }
      dVar3 = dVar2 - (double)CONCAT44(param_8,param_7);
      dVar4 = dVar2;
    }
    if (0.0 < dVar2 - (double)CONCAT44(param_8,param_7)) {
      return 0;
    }
    dStack_10 = (double)fVar7;
    uVar5 = FUN_00568c50(param_1,param_2,dVar2,param_7,param_8,iVar6,param_9,param_10,&dStack_10,
                         param_12);
    return uVar5;
  }
  uVar5 = FUN_00568c50(param_1,param_2,param_5,param_6,param_7,param_8,0,param_9,param_10,&local_18,
                       param_12);
  return uVar5;
}


/* ==== 005690b0 FUN_005690b0 ==== */

char * FUN_005690b0(char *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  char *pcVar3;
  void *_malloc_result;
  
  _malloc_result = (void *)0x0;
  if (DAT_0074dce4 == 0) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = *pcVar3;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar3 = cVar1 + -0x20;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  else {
    _Size = FUN_0055c112(DAT_0074dce4,0x200,param_1,0xffffffff,0,0,0,1);
    if (((_Size != 0) && (_malloc_result = _malloc(_Size), _malloc_result != (void *)0x0)) &&
       (iVar2 = FUN_0055c112(DAT_0074dce4,0x200,param_1,0xffffffff,_malloc_result,_Size,0,1),
       iVar2 != 0)) {
      FUN_0055ee40(param_1,_malloc_result);
    }
    FUN_00559d4e(_malloc_result);
  }
  return param_1;
}


/* ==== 0056914e FUN_0056914e ==== */

void FUN_0056914e(undefined4 param_1,undefined4 param_2)

{
  FUN_00569161(0,param_1,param_2);
  return;
}


/* ==== 00569161 FUN_00569161 ==== */

undefined4 FUN_00569161(uint param_1,void *param_2,size_t param_3)

{
  int iVar1;
  DWORD DVar2;
  uint size;
  void *_malloc_result;
  undefined4 uVar3;
  CHAR local_10c [260];
  LPSTR local_8;
  
  size = param_1;
  if (param_1 == 0) {
    DVar2 = GetCurrentDirectoryA(0x104,local_10c);
  }
  else {
    iVar1 = FUN_00569232(param_1);
    if (iVar1 == 0) {
      DAT_0074dc60 = 0xd;
      DAT_0074dc64 = 0xf;
      return 0;
    }
    param_1 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)size + '@'));
    DVar2 = GetFullPathNameA((LPCSTR)&param_1,0x104,local_10c,&local_8);
  }
  if ((DVar2 != 0) && (size = DVar2 + 1, size < 0x105)) {
    if (param_2 == (void *)0x0) {
      if ((int)size <= (int)param_3) {
        size = param_3;
      }
      _malloc_result = _malloc(size);
      if (_malloc_result != (void *)0x0) {
LAB_0056921e:
        uVar3 = FUN_0055ee40(_malloc_result,local_10c);
        return uVar3;
      }
      DAT_0074dc60 = 0xc;
    }
    else {
      _malloc_result = param_2;
      if ((int)size <= (int)param_3) goto LAB_0056921e;
      DAT_0074dc60 = 0x22;
    }
  }
  return 0;
}


/* ==== 00569232 FUN_00569232 ==== */

undefined4 FUN_00569232(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 != 0) {
    cVar1 = (char)param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
    UVar2 = GetDriveTypeA((LPCSTR)&param_1);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      return 0;
    }
  }
  return 1;
}


/* ==== 00569269 FUN_00569269 ==== */

int FUN_00569269(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < DAT_007501a0) &&
     ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    iVar1 = FUN_00562b76(param_1,0,1);
    iVar2 = -1;
    if (iVar1 != -1) {
      iVar2 = FUN_00562b76(param_1,0,2);
      if (iVar1 != iVar2) {
        FUN_00562b76(param_1,iVar1,0);
      }
    }
    return iVar2;
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return -1;
}


/* ==== 005692e1 FUN_005692e1 ==== */

undefined4 FUN_005692e1(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* ==== 005692e9 FUN_005692e9 ==== */

char * FUN_005692e9(char *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  char *pcVar3;
  void *_malloc_result;
  
  _malloc_result = (void *)0x0;
  if (DAT_0074dce4 == 0) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = *pcVar3;
      if (('@' < cVar1) && (cVar1 < '[')) {
        *pcVar3 = cVar1 + ' ';
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  else {
    _Size = FUN_0055c112(DAT_0074dce4,0x100,param_1,0xffffffff,0,0,0,1);
    if (((_Size != 0) && (_malloc_result = _malloc(_Size), _malloc_result != (void *)0x0)) &&
       (iVar2 = FUN_0055c112(DAT_0074dce4,0x100,param_1,0xffffffff,_malloc_result,_Size,0,1),
       iVar2 != 0)) {
      FUN_0055ee40(param_1,_malloc_result);
    }
    FUN_00559d4e(_malloc_result);
  }
  return param_1;
}


