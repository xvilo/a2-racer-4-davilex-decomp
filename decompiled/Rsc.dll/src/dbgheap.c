/* Rsc.dll — dbgheap.c: 31 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 100036f0 FUN_100036f0 ==== */

void __cdecl FUN_100036f0(void *param_1)

{
  FUN_10003760(param_1,(uint)param_1,DAT_1003161c,1,0,0);
  return;
}


/* ==== 10003710 FUN_10003710 ==== */

void __cdecl FUN_10003710(void *param_1,uint param_2,int param_3,int param_4)

{
  FUN_10003760(param_1,(uint)param_1,DAT_1003161c,param_2,param_3,param_4);
  return;
}


/* ==== 10003740 FUN_10003740 ==== */

void __cdecl FUN_10003740(void *param_1,int param_2)

{
  FUN_10003760(param_1,(uint)param_1,param_2,1,0,0);
  return;
}


/* ==== 10003760 FUN_10003760 ==== */

int * __thiscall FUN_10003760(void *this,uint size,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int __callnewh_result;
  
  while( true ) {
    FUN_100073f0(9);
    piVar1 = FUN_100037e0(size,param_3,param_4,param_5);
    FUN_10007490(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (param_2 == 0) break;
    __callnewh_result = __callnewh(size);
    if (__callnewh_result == 0) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}


/* ==== 100037c0 FUN_100037c0 ==== */

void __cdecl FUN_100037c0(uint size)

{
  FUN_100037e0(size,1,0,0);
  return;
}


/* ==== 100037e0 FUN_100037e0 ==== */

int * __cdecl FUN_100037e0(uint size,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_1002fce0 & 4) != 0) && (iVar4 = FUN_100048b0(), iVar4 == 0)) &&
     (iVar4 = FUN_10003050(2,0x1002c4cc,0x141,0,(byte *)"_CrtCheckMemory()"), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar4 = DAT_1002fce4;
  if (DAT_1002fce4 == DAT_1002fce8) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar6 = (*(code *)PTR_FUN_10030000)(1,0,size,param_2,DAT_1002fce4,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_10003050(0,0,0,0,(byte *)"%s");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = FUN_10003050(0,0,0,0,(byte *)"Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    piVar5 = (int *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_1002fce0 & 1) == 0)) {
      bVar2 = true;
    }
    if ((size < 0xffffffe1) && (size + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_10003050(1,0,0,0,(byte *)"%s"), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = FUN_10009480((void *)(size + 0x24),size + 0x24);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        DAT_1002fce4 = DAT_1002fce4 + 1;
        if (bVar2) {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
          piVar5[3] = -0x1234544;
          piVar5[4] = size;
          piVar5[5] = 3;
          piVar5[6] = 0;
        }
        else {
          DAT_10031438 = DAT_10031438 + size;
          DAT_10031440 = DAT_10031440 + size;
          if (DAT_10031444 < DAT_10031440) {
            DAT_10031444 = DAT_10031440;
          }
          piVar3 = piVar5;
          if (DAT_1003143c != (int *)0x0) {
            DAT_1003143c[1] = (int)piVar5;
            piVar3 = DAT_10031434;
          }
          DAT_10031434 = piVar3;
          *piVar5 = (int)DAT_1003143c;
          piVar5[1] = 0;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = size;
          piVar5[5] = param_2;
          piVar5[6] = iVar4;
          DAT_1003143c = piVar5;
        }
        _memset(piVar5 + 7,(uint)DAT_1002fcec,4);
        _memset((void *)((int)piVar5 + size + 0x20),(uint)DAT_1002fcec,4);
        _memset(piVar5 + 8,(uint)DAT_1002fcee,size);
        piVar5 = piVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_10003050(1,0,0,0,(byte *)"Invalid allocation size: %u bytes.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = (int *)0x0;
    }
  }
  return piVar5;
}


/* ==== 10003b00 FUN_10003b00 ==== */

void __cdecl FUN_10003b00(int param_1,int param_2)

{
  __calloc_dbg(param_1,param_2,1,0,0);
  return;
}


/* ==== 10003b20 __calloc_dbg ==== */

/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl __calloc_dbg(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *local_10;
  
  puVar1 = (undefined1 *)FUN_10003710((void *)(param_2 * param_1),param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + param_2 * param_1; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}


/* ==== 10003b80 FUN_10003b80 ==== */

void __cdecl FUN_10003b80(void *dst,void *param_2)

{
  FUN_10003ba0(dst,param_2,1,0,0);
  return;
}


/* ==== 10003ba0 FUN_10003ba0 ==== */

int * __cdecl FUN_10003ba0(void *dst,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_100073f0(9);
  piVar1 = FUN_10003be0(dst,param_2,param_3,param_4,param_5,1);
  FUN_10007490(9);
  return piVar1;
}


/* ==== 10003be0 FUN_10003be0 ==== */

int * __cdecl FUN_10003be0(void *dst,void *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *this_val;
  int iVar4;
  BOOL BVar5;
  bool bVar6;
  int *local_10;
  
  if (dst == (void *)0x0) {
    piVar2 = (int *)FUN_10003710(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != (void *)0x0)) {
    if (((DAT_1002fce0 & 4) != 0) &&
       ((iVar3 = FUN_100048b0(), iVar3 == 0 &&
        (iVar3 = FUN_10003050(2,0x1002c4cc,0x239,0,(byte *)"_CrtCheckMemory()"), iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      this_val = (int *)(*pcVar1)();
      return this_val;
    }
    iVar3 = DAT_1002fce4;
    if (DAT_1002fce4 == DAT_1002fce8) {
      pcVar1 = (code *)swi(3);
      this_val = (int *)(*pcVar1)();
      return this_val;
    }
    iVar4 = (*(code *)PTR_FUN_10030000)(2,dst,param_2,param_3,DAT_1002fce4,param_4,param_5);
    if (iVar4 == 0) {
      if (param_4 == 0) {
        iVar3 = FUN_10003050(0,0,0,0,(byte *)"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          this_val = (int *)(*pcVar1)();
          return this_val;
        }
      }
      else {
        iVar3 = FUN_10003050(0,0,0,0,(byte *)
                                     "Client hook re-allocation failure at file %hs line %d.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          this_val = (int *)(*pcVar1)();
          return this_val;
        }
      }
      piVar2 = (int *)0x0;
    }
    else if (param_2 < (void *)0xffffffdc) {
      if ((((param_3 != 1) && ((param_3 & 0xffff) != 4)) && ((param_3 & 0xffff) != 2)) &&
         (iVar4 = FUN_10003050(1,0,0,0,(byte *)"%s"), iVar4 == 1)) {
        pcVar1 = (code *)swi(3);
        this_val = (int *)(*pcVar1)();
        return this_val;
      }
      BVar5 = FUN_10004d10((int)dst);
      if ((BVar5 == 0) &&
         (iVar4 = FUN_10003050(2,0x1002c4cc,0x261,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar4 == 1)) {
        pcVar1 = (code *)swi(3);
        this_val = (int *)(*pcVar1)();
        return this_val;
      }
      this_val = (int *)((int)dst + -0x20);
      bVar6 = *(int *)((int)dst + -0xc) == 3;
      if (bVar6) {
        if (((*(int *)((int)dst + -0x14) != -0x1234544) || (*(int *)((int)dst + -8) != 0)) &&
           (iVar4 = FUN_10003050(2,0x1002c4cc,0x26b,0,
                                 (byte *)
                                 "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                ), iVar4 == 1)) {
          pcVar1 = (code *)swi(3);
          this_val = (int *)(*pcVar1)();
          return this_val;
        }
      }
      else {
        if (((*(uint *)((int)dst + -0xc) & 0xffff) == 2) && ((param_3 & 0xffff) == 1)) {
          param_3 = 2;
        }
        if (((*(uint *)((int)dst + -0xc) & 0xffff) != (param_3 & 0xffff)) &&
           (iVar4 = FUN_10003050(2,0x1002c4cc,0x272,0,
                                 (byte *)"_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"
                                ), iVar4 == 1)) {
          pcVar1 = (code *)swi(3);
          this_val = (int *)(*pcVar1)();
          return this_val;
        }
      }
      if (param_6 == 0) {
        local_10 = FUN_10009500(this_val,(int)param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = FUN_100095b0(this_val,(void *)((int)param_2 + 0x24));
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_1002fce4 = DAT_1002fce4 + 1;
      if (!bVar6) {
        DAT_10031438 = (DAT_10031438 - local_10[4]) + (int)param_2;
        DAT_10031440 = (DAT_10031440 - local_10[4]) + (int)param_2;
        if (DAT_10031444 < DAT_10031440) {
          DAT_10031444 = DAT_10031440;
        }
      }
      piVar2 = local_10 + 8;
      if ((void *)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_1002fcee,(int)param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + (int)param_2),(uint)DAT_1002fcec,4);
      if (!bVar6) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = (int)param_2;
      if (((param_6 == 0) && (local_10 != this_val)) &&
         (iVar3 = FUN_10003050(2,0x1002c4cc,0x2a8,0,
                               (byte *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        this_val = (int *)(*pcVar1)();
        return this_val;
      }
      if ((local_10 != this_val) && (!bVar6)) {
        if (*local_10 == 0) {
          if ((DAT_10031434 != this_val) &&
             (iVar3 = FUN_10003050(2,0x1002c4cc,0x2b7,0,(byte *)"_pLastBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            this_val = (int *)(*pcVar1)();
            return this_val;
          }
          DAT_10031434 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_1003143c != this_val) &&
             (iVar3 = FUN_10003050(2,0x1002c4cc,0x2c2,0,(byte *)"_pFirstBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            this_val = (int *)(*pcVar1)();
            return this_val;
          }
          DAT_1003143c = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_1003143c == (int *)0x0) {
          DAT_10031434 = local_10;
        }
        else {
          DAT_1003143c[1] = (int)local_10;
        }
        *local_10 = (int)DAT_1003143c;
        local_10[1] = 0;
        DAT_1003143c = local_10;
      }
    }
    else {
      iVar3 = FUN_10003050(1,0,0,0,(byte *)"Allocation too large or negative: %u bytes.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        this_val = (int *)(*pcVar1)();
        return this_val;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    FUN_100041a0(dst,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


/* ==== 10004100 FUN_10004100 ==== */

void __cdecl FUN_10004100(void *dst,void *param_2)

{
  FUN_10004120(dst,param_2,1,0,0);
  return;
}


/* ==== 10004120 FUN_10004120 ==== */

int * __cdecl FUN_10004120(void *dst,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_100073f0(9);
  piVar1 = FUN_10003be0(dst,param_2,param_3,param_4,param_5,0);
  FUN_10007490(9);
  return piVar1;
}


/* ==== 10004160 FUN_10004160 ==== */

void __cdecl FUN_10004160(void *dst)

{
  FUN_100041a0(dst,1);
  return;
}


/* ==== 10004180 FUN_10004180 ==== */

void __cdecl FUN_10004180(void *dst)

{
  FUN_100041d0(dst,1);
  return;
}


/* ==== 100041a0 FUN_100041a0 ==== */

void __cdecl FUN_100041a0(void *dst,int param_2)

{
  FUN_100073f0(9);
  FUN_100041d0(dst,param_2);
  FUN_10007490(9);
  return;
}


/* ==== 100041d0 FUN_100041d0 ==== */

void __cdecl FUN_100041d0(void *dst,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  void *this;
  void *this_00;
  
  if ((((DAT_1002fce0 & 4) != 0) && (iVar2 = FUN_100048b0(), iVar2 == 0)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x3e1,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (dst != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_10030000)(3,dst,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_10003050(0,0,0,0,(byte *)"%s");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_10004d10((int)dst);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_10003050(2,0x1002c4cc,0x3f3,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)dst + -0x20);
      if ((((*(uint *)((int)dst + -0xc) & 0xffff) != 4) && (*(int *)((int)dst + -0xc) != 1)) &&
         (((*(uint *)((int)dst + -0xc) & 0xffff) != 2 &&
          ((*(int *)((int)dst + -0xc) != 3 &&
           (iVar2 = FUN_10003050(2,0x1002c4cc,0x3f9,0,
                                 (byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1))))))
      {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_1002fce0 & 4) == 0) {
        iVar2 = FUN_10004820((char *)((int)dst + -4),DAT_1002fcec,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10003050(1,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_10004820((char *)((int)dst + *(int *)((int)dst + -0x10)),DAT_1002fcec,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10003050(1,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)dst + -0xc) == 3) {
        if (((*(int *)((int)dst + -0x14) != -0x1234544) || (*(int *)((int)dst + -8) != 0)) &&
           (iVar2 = FUN_10003050(2,0x1002c4cc,0x40e,0,
                                 (byte *)
                                 "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_1002fced,*(int *)((int)dst + -0x10) + 0x24);
        FUN_100097a0(this,_Dst);
      }
      else {
        if ((*(int *)((int)dst + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)dst + -0xc) != param_2) &&
           (iVar2 = FUN_10003050(2,0x1002c4cc,0x41b,0,(byte *)"pHead->nBlockUse == nBlockUse"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_10031440 = DAT_10031440 - *(int *)((int)dst + -0x10);
        if ((DAT_1002fce0 & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_10031434 != _Dst) &&
               (iVar2 = FUN_10003050(2,0x1002c4cc,0x42a,0,(byte *)"_pLastBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10031434 = *(int **)((int)dst + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)dst + -0x1c);
          }
          if (*(int *)((int)dst + -0x1c) == 0) {
            if ((DAT_1003143c != _Dst) &&
               (iVar2 = FUN_10003050(2,0x1002c4cc,0x434,0,(byte *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_1003143c = (int *)*_Dst;
          }
          else {
            **(int **)((int)dst + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_1002fced,*(int *)((int)dst + -0x10) + 0x24);
          FUN_100097a0(this_00,_Dst);
        }
        else {
          *(undefined4 *)((int)dst + -0xc) = 0;
          _memset(dst,(uint)DAT_1002fced,*(size_t *)((int)dst + -0x10));
        }
      }
    }
  }
  return;
}


/* ==== 100045c0 FUN_100045c0 ==== */

void __cdecl FUN_100045c0(int param_1)

{
  FUN_100045e0(param_1,1);
  return;
}


/* ==== 100045e0 FUN_100045e0 ==== */

undefined4 __cdecl FUN_100045e0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if ((((DAT_1002fce0 & 4) != 0) && (iVar2 = FUN_100048b0(), iVar2 == 0)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x47c,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_100073f0(9);
  BVar4 = FUN_10004d10(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x485,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
     (((*(uint *)(param_1 + -0xc) & 0xffff) != 2 &&
      ((*(int *)(param_1 + -0xc) != 3 &&
       (iVar2 = FUN_10003050(2,0x1002c4cc,0x48b,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
       iVar2 == 1)))))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x492,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + -0x10);
  FUN_10007490(9);
  return uVar3;
}


/* ==== 10004740 FUN_10004740 ==== */

undefined4 __cdecl FUN_10004740(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1002fce8;
  DAT_1002fce8 = param_1;
  return uVar1;
}


/* ==== 10004760 FUN_10004760 ==== */

void __cdecl FUN_10004760(int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  FUN_100073f0(9);
  BVar2 = FUN_10004d10(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_10003050(2,0x1002c4cc,0x4d3,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)")
        , iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  FUN_10007490(9);
  return;
}


/* ==== 10004800 FUN_10004800 ==== */

undefined * __cdecl FUN_10004800(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_10030000;
  PTR_FUN_10030000 = param_1;
  return puVar1;
}


/* ==== 10004820 FUN_10004820 ==== */

undefined4 __cdecl FUN_10004820(char *param_1,char param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  
  local_8 = 1;
  while( true ) {
    do {
      iVar4 = param_3 + -1;
      if (param_3 == 0) {
        return local_8;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = iVar4;
    } while (cVar1 == param_2);
    iVar4 = FUN_10003050(0,0,0,0,(byte *)
                                 "memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    local_8 = 0;
  }
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}


/* ==== 100048b0 FUN_100048b0 ==== */

undefined4 FUN_100048b0(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 1;
  if ((DAT_1002fce0 & 1) == 0) {
    local_8 = 1;
  }
  else {
    FUN_100073f0(9);
    iVar3 = FUN_10009810();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      for (local_c = DAT_1003143c; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
        bVar2 = true;
        iVar3 = FUN_10004820((char *)(local_c + 7),DAT_1002fcec,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = FUN_10004820((char *)((int)local_c + local_c[4] + 0x20),DAT_1002fcec,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((local_c[5] == 0) &&
           (iVar3 = FUN_10004820((char *)(local_c + 8),DAT_1002fced,local_c[4]), iVar3 == 0)) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((local_c[2] != 0) &&
             (iVar3 = FUN_10003050(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1))
          {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          local_8 = 0;
        }
      }
      FUN_10007490(9);
    }
    else {
      switch(iVar3) {
      case -6:
        iVar3 = FUN_10003050(0,0,0,0,(byte *)"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = FUN_10003050(0,0,0,0,(byte *)"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = FUN_10003050(0,0,0,0,(byte *)"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = FUN_10003050(0,0,0,0,(byte *)"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      default:
        iVar3 = FUN_10003050(0,0,0,0,(byte *)"%s");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      FUN_10007490(9);
      local_8 = 0;
    }
  }
  return local_8;
}


/* ==== 10004c20 FUN_10004c20 ==== */

int __cdecl FUN_10004c20(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1002fce0;
  if (param_1 != -1) {
    DAT_1002fce0 = param_1;
  }
  return iVar1;
}


/* ==== 10004c50 FUN_10004c50 ==== */

void __cdecl FUN_10004c50(undefined *param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
  if ((DAT_1002fce0 & 1) != 0) {
    FUN_100073f0(9);
    for (local_8 = DAT_1003143c; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
    }
    FUN_10007490(9);
  }
  return;
}


/* ==== 10004cc0 FID_conflict:AtlIsValidAddress ==== */

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl ATL::AtlIsValidAddress(void const *,unsigned int,int)
    __CrtIsValidPointer
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl FID_conflict_AtlIsValidAddress(void *param_1,UINT_PTR param_2,int param_3)

{
  BOOL BVar1;
  
  if (((param_1 != (void *)0x0) && (BVar1 = IsBadReadPtr(param_1,param_2), BVar1 == 0)) &&
     ((param_3 == 0 || (BVar1 = IsBadWritePtr(param_1,param_2), BVar1 == 0)))) {
    return 1;
  }
  return 0;
}


/* ==== 10004d10 FUN_10004d10 ==== */

BOOL __cdecl FUN_10004d10(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = FID_conflict_AtlIsValidAddress((void *)(param_1 + -0x20),0x20,1);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else {
      uVar3 = FUN_10009930(param_1 + -0x20);
      if (uVar3 == 0) {
        if ((DAT_100314ac & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_10031a8c,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_10009990(uVar3,param_1 + -0x20);
      }
    }
  }
  return BVar1;
}


/* ==== 10004da0 FUN_10004da0 ==== */

undefined4 __cdecl
FUN_10004da0(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = FUN_10004d10((int)param_1);
  if (BVar1 != 0) {
    FUN_100073f0(9);
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = FID_conflict_AtlIsValidAddress(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_1002fce4)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
      FUN_10007490(9);
      return 1;
    }
    FUN_10007490(9);
  }
  return 0;
}


/* ==== 10004e90 FUN_10004e90 ==== */

undefined4 __cdecl FUN_10004e90(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10031c00;
  DAT_10031c00 = param_1;
  return uVar1;
}


/* ==== 10004eb0 FUN_10004eb0 ==== */

void __cdecl FUN_10004eb0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  int i;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = FUN_10003050(0,0,0,0,(byte *)"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FUN_100073f0(9);
    *param_1 = DAT_1003143c;
    for (i = 0; i < 5; i = i + 1) {
      param_1[i + 6] = 0;
      param_1[i + 1] = 0;
    }
    for (local_c = DAT_1003143c; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
      if ((local_c[5] & 0xffff) < 5) {
        param_1[(local_c[5] & 0xffff) + 1] = param_1[(local_c[5] & 0xffff) + 1] + 1;
        param_1[(local_c[5] & 0xffff) + 6] = param_1[(local_c[5] & 0xffff) + 6] + local_c[4];
      }
      else {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    param_1[0xb] = DAT_10031444;
    param_1[0xc] = DAT_10031438;
    FUN_10007490(9);
  }
  return;
}


