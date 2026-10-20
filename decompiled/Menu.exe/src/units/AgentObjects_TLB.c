/* Menu.exe — units/AgentObjects_TLB.pas: 19 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0046fcc0 FUN_0046fcc0 ==== */

undefined4 FUN_0046fcc0(int *param_1,undefined4 param_2)

{
  undefined2 auStack_10 [4];
  undefined4 local_8;
  
  FUN_0046fdc8(param_1,param_2,auStack_10);
  return local_8;
}


/* ==== 0046fcd4 FUN_0046fcd4 ==== */

int FUN_0046fcd4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = Forms_GetParentForm(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = System__IsClass(piVar1,(int)&PTR_TWinControl_virtual_000_00442fd4);
    if (((char)uVar2 == '\0') || (*(char *)((int)piVar1 + 0x217) == '\x01')) {
      if (*(int *)(*(int *)PTR_DAT_004ab8ac + 0x38) != 0) {
        iVar3 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab8ac + 0x38) + 0x230);
      }
    }
    else {
      iVar3 = piVar1[0x8c];
    }
  }
  return iVar3;
}


/* ==== 0046fd24 TAgent.GetConnected ==== */

undefined2 TAgent_GetConnected(int *param_1,undefined4 param_2)

{
  undefined2 auStack_10 [4];
  undefined2 local_8;
  
  FUN_0046fdc8(param_1,param_2,auStack_10);
  return local_8;
}


/* ==== 0046fd38 FUN_0046fd38 ==== */

void FUN_0046fd38(int *param_1,VARIANTARG *pvarg_val)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_0046fd8b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0046f49c(param_1);
  FUN_00405894((int *)&local_8,(undefined4 *)param_1[0x80]);
  FUN_00404f50(pvarg_val,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046fd92;
  puStack_18 = (undefined1 *)0x46fd8a;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 0046fda8 FUN_0046fda8 ==== */

void FUN_0046fda8(int *param_1,undefined4 param_2,VARIANTARG *pvarg_val)

{
  FUN_004049ec(pvarg_val);
  FUN_0046fdc8(param_1,param_2,(undefined2 *)pvarg_val);
  return;
}


/* ==== 0046fdc8 FUN_0046fdc8 ==== */

void FUN_0046fdc8(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  int *piVar1;
  DWORD message_id_2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  VARIANTARG local_24 [2];
  
  puStack_34 = (undefined1 *)0x46fde5;
  FUN_00404480((int)local_24,(int)&DAT_0040d7bc);
  puStack_38 = &LAB_0046fe4a;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_0046f49c(param_1);
  *param_3 = 0;
  piVar1 = (int *)param_1[0x83];
  message_id_2 = (**(code **)(*piVar1 + 0x18))();
  if (message_id_2 != 0) {
    FUN_0046cbb4(message_id_2,local_24);
  }
  *in_FS_OFFSET = piVar1;
  FUN_0040454c((int)local_24,(int)&DAT_0040d7bc);
  return;
}


/* ==== 0046fe58 FUN_0046fe58 ==== */

void FUN_0046fe58(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  _union_2683 union_2683;
  
  puStack_24 = &stack0xfffffffc;
  union_2683._12_4_ = 0;
  union_2683._8_4_ = 0;
  union_2683.decVal.Hi32 = 0;
  union_2683._0_4_ = 0;
  puStack_28 = &LAB_0046fea6;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0046feb4(param_1,param_2,(VARIANTARG *)&union_2683.n2);
  FUN_00404da4(param_3,(VARIANTARG *)&union_2683.n2);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0046fead;
  puStack_28 = (undefined1 *)0x46fea5;
  FUN_00405038((VARIANTARG *)&union_2683.n2);
  return;
}


/* ==== 0046feb4 FUN_0046feb4 ==== */

void FUN_0046feb4(int *param_1,undefined4 param_2,VARIANTARG *pvarg_val)

{
  FUN_0046fda8(param_1,param_2,pvarg_val);
  return;
}


/* ==== 0046fecc FUN_0046fecc ==== */

void FUN_0046fecc(int param_1)

{
  HWND hWnd;
  int *piVar1;
  LONG LVar2;
  
  if ((*(int *)(param_1 + 0x214) != 0) && (*(int *)(param_1 + 0x14c) == 0)) {
    hWnd = *(HWND *)(param_1 + 0x214);
    (**(code **)(hWnd->unused + 0xc))();
    if (hWnd == (HWND)0x0) {
      piVar1 = SysUtils_Exception_CreateRes
                         ((int *)&DAT_0046bfdc,'\x01',(undefined4 *)PTR_PTR_004aba20);
      System__RaiseExcept(piVar1);
    }
    *(HWND *)(param_1 + 0x14c) = hWnd;
    LVar2 = GetWindowLongA(hWnd,-4);
    *(LONG *)(param_1 + 0x13c) = LVar2;
    *(int *)PTR_DAT_004ab844 = param_1;
    SetWindowLongA(*(HWND *)(param_1 + 0x14c),-4,0x42b894);
    SendMessageA(*(HWND *)(param_1 + 0x14c),0,0,0);
  }
  return;
}


/* ==== 0046ff5c FUN_0046ff5c ==== */

void FUN_0046ff5c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int i_val;
  byte *pbVar2;
  
  i_val = param_1[3];
  if (i_val != 0) {
    bVar1 = false;
    pbVar2 = (byte *)(param_1 + 4);
    do {
      if (((*pbVar2 < 2) && (*pbVar2 != 1)) && (!bVar1)) {
        param_3 = *(undefined4 *)(pbVar2 + 4);
        bVar1 = true;
      }
      pbVar2 = pbVar2 + 0xc;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  (*(code *)*param_1)(param_1[1],param_1[2],param_3);
  return;
}


/* ==== 0046ffa0 FUN_0046ffa0 ==== */

void FUN_0046ffa0(int *param_1,int param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  BSTR pOVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  uint *puVar6;
  int k;
  undefined1 *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2b8;
  undefined1 *puStack_2b4;
  undefined1 *puStack_2b0;
  int local_2a0 [2];
  int *local_298;
  int local_294;
  undefined1 local_290 [384];
  uint auStack_110 [64];
  int j;
  int i_val;
  int *local_8;
  uint *puVar7;
  
  puStack_2b0 = (undefined1 *)0x46ffbf;
  local_8 = param_1;
  FUN_0046fc60(param_1,param_2,local_2a0);
  if (0xffff < local_2a0[0]) {
    j = 0;
    uVar5 = 0;
    puStack_2b4 = &LAB_00470107;
    uStack_2b8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2b8;
    local_294 = param_3[2];
    local_298 = local_8;
    k = 0;
    puStack_2b0 = &stack0xfffffffc;
    if (local_294 != 0) {
      puVar8 = local_290;
      i_val = 0;
      puVar6 = (uint *)(*param_3 + local_294 * 0x10);
      puStack_2b0 = &stack0xfffffffc;
      do {
        puVar7 = puVar6 + -4;
        uVar2 = *puVar7;
        uVar3 = uVar2 & 0xffff;
        if ((uVar2 & 0xfff) == 8) {
          *puVar8 = 0;
          k = j;
          puVar1 = auStack_110 + j * 2;
          *puVar1 = 0;
          if ((uVar2 & 0x4000) == 0) {
            FUN_0040492c((LPCWSTR)puVar6[-2],(int *)puVar1);
            auStack_110[k * 2 + 1] = 0;
            *(uint *)(puVar8 + 4) = *puVar1;
            uVar5 = extraout_ECX_00;
            k = extraout_EDX_00;
          }
          else {
            FUN_0040492c(*(LPCWSTR *)puVar6[-2],(int *)puVar1);
            auStack_110[k * 2 + 1] = puVar6[-2];
            *(uint **)(puVar8 + 4) = puVar1;
            uVar5 = extraout_ECX;
            k = extraout_EDX;
          }
          j = j + 1;
        }
        else if (uVar3 == 4) {
          *puVar8 = 1;
          *(uint *)(puVar8 + 4) = puVar6[-2];
          k = 0;
        }
        else {
          k = uVar3 - 8;
          if (uVar3 - 5 < 3) {
            *puVar8 = 2;
            *(uint *)(puVar8 + 4) = puVar6[-2];
            *(uint *)(puVar8 + 8) = puVar6[-1];
          }
          else {
            k = uVar3 - 9;
            if (k == 0) {
              *puVar8 = 0;
              *(uint **)(puVar8 + 4) = puVar7;
            }
            else {
              *puVar8 = 0;
              if ((uVar2 & 0x2000) == 0) {
                *(uint *)(puVar8 + 4) = puVar6[-2];
              }
              else {
                *(uint **)(puVar8 + 4) = puVar7;
              }
            }
          }
        }
        puVar8 = puVar8 + 0xc;
        i_val = i_val + 1;
        puVar6 = puVar7;
      } while (i_val != local_294);
    }
    FUN_0046ff5c(local_2a0,k,uVar5);
    k = j;
    while (k != 0) {
      k = k + -1;
      if (auStack_110[k * 2 + 1] != 0) {
        pOVar4 = FUN_00404950((LPCSTR)auStack_110[k * 2]);
        *(BSTR *)auStack_110[k * 2 + 1] = pOVar4;
      }
    }
    *in_FS_OFFSET = uStack_2b8;
    k = j;
    while (k != 0) {
      k = k + -1;
      puStack_2b0 = (undefined1 *)0x470134;
      System__LStrClr((int *)(auStack_110 + k * 2));
    }
  }
  return;
}


/* ==== 00470530 TAgent.SetConnected ==== */

void TAgent_SetConnected(int *param_1,undefined4 param_2,short param_3)

{
  undefined2 local_10 [4];
  undefined2 local_8;
  
  local_10[0] = 0xb;
  if (param_3 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0xffff;
  }
  FUN_00470734(param_1,param_2,local_10);
  return;
}


/* ==== 00472818 TAgent.virtual_0b4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TAgent_virtual_0b4(uint param_1)

{
  int iVar1;
  int extraout_EDX;
  
  *(undefined **)(param_1 + 0x1f0) = &DAT_004ab130;
  iVar1 = (param_1 + 600) - param_1;
  if (param_1 + 600 < param_1) {
    System__RunError(param_1);
    iVar1 = extraout_EDX;
  }
  _DAT_004ab180 = iVar1;
  return;
}


/* ==== 0047283c FUN_0047283c ==== */

void FUN_0047283c(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  _union_2683 union_2683;
  undefined4 *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  union_2683._12_4_ = 0;
  union_2683._8_4_ = 0;
  union_2683.decVal.Hi32 = 0;
  union_2683._0_4_ = 0;
  puStack_20 = &LAB_004728a3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0046fd38(*(int **)(in_stack_00000004 + -4),(VARIANTARG *)&union_2683.n2);
  FUN_00404e50((int *)&local_8,(short *)&union_2683);
  FUN_00405894((int *)(*(int *)(in_stack_00000004 + -4) + 0x328),local_8);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004728aa;
  puStack_20 = (undefined1 *)0x47289a;
  FUN_00405038((VARIANTARG *)&union_2683.n2);
  puStack_20 = (undefined1 *)0x4728a2;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 004728c0 FUN_004728c0 ==== */

void FUN_004728c0(int param_1)

{
  if (*(int *)(param_1 + 0x328) == 0) {
    FUN_0047283c();
  }
  return;
}


/* ==== 004728e0 FUN_004728e0 ==== */

void FUN_004728e0(int param_1,int *param_2)

{
  FUN_004728c0(param_1);
  FUN_00405878(param_2,*(int **)(param_1 + 0x328));
  return;
}


/* ==== 00472904 FUN_00472904 ==== */

void FUN_00472904(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_00472953;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  System__IntfClear(param_2);
  FUN_004728e0(param_1,(int *)&local_8);
  piVar1 = local_8;
  iVar2 = (**(code **)(*local_8 + 0x1c))();
  FUN_0040595c(iVar2);
  *in_FS_OFFSET = piVar1;
  puStack_1c = &LAB_0047295a;
  System__IntfClear((int *)&local_8);
  return;
}


/* ==== 00472960 FUN_00472960 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472960(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1e8 = _DAT_004ad1e8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00472998 FUN_00472998 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472998(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad1ec = _DAT_004ad1ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


