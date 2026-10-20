/* Menu.exe — units/DaviTimer.pas: 17 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0045af28 FUN_0045af28 ==== */

uint FUN_0045af28(uint param_1,uint param_2)

{
  uint uVar1;
  
  while (param_2 != 0) {
    uVar1 = param_1 % param_2;
    param_1 = param_2;
    param_2 = uVar1;
  }
  return param_1;
}


/* ==== 0045af48 TDaviTimer.virtual_02c ==== */

int * TDaviTimer_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TComponent_virtual_02c(param_1,'\0',param_3);
  TDaviTimer_SetInterval((int)param_1,1000,extraout_ECX_00);
  TDaviTimer_SetEnabled((int)param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_01);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045af98 TDaviTimer.Destroy ==== */

void TDaviTimer_Destroy(int *param_1,char param_2)

{
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45afa3;
  local_8 = FUN_004032fc(param_1,param_2);
  puStack_14 = &LAB_0045afdd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  TDaviTimer_SetEnabled((int)local_8,0,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045afe4;
  puStack_14 = (undefined1 *)0x45afdc;
  TComponent_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0045aff8 TDaviTimer.virtual_030 ==== */

void TDaviTimer_virtual_030(int param_1)

{
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c));
  }
  return;
}


/* ==== 0045b010 FUN_0045b010 ==== */

void FUN_0045b010(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    piVar1 = FUN_0045b0ac(&LAB_0045af10,param_2,param_3);
    FUN_0045b504(piVar1,param_1);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (((*(int *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x24) != '\0')) &&
     (*(short *)(param_1 + 0x3a) != 0)) {
    piVar1 = FUN_0045b0ac(&LAB_0045af10,param_2,param_3);
    FUN_0045b494((int)piVar1,param_1);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}


/* ==== 0045b05c TDaviTimer.SetEnabled ==== */

void TDaviTimer_SetEnabled(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)(param_1 + 0x24)) {
    *(char *)(param_1 + 0x24) = (char)param_2;
    FUN_0045b010(param_1,param_2,param_3);
  }
  return;
}


/* ==== 0045b070 TDaviTimer.SetInterval ==== */

void TDaviTimer_SetInterval(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = param_2;
    FUN_0045b010(param_1,param_2,param_3);
  }
  return;
}


/* ==== 0045b084 TDaviTimer.SetOnTimer ==== */

void TDaviTimer_SetOnTimer
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  FUN_0045b010(param_1,param_5,param_3);
  return;
}


/* ==== 0045b09c FUN_0045b09c ==== */

void FUN_0045b09c(void)

{
  FUN_0040c968(&DAT_004aacb4);
  return;
}


/* ==== 0045b0ac FUN_0045b0ac ==== */

int * FUN_0045b0ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_004aacb4 == (int *)0x0) {
    DAT_004aacb4 = TDaviSharedTimer_virtual_000((int *)&LAB_0045af10,'\x01',param_3);
    piVar1 = FUN_00452d68(&DAT_00452a8c,extraout_EDX,extraout_ECX);
    FUN_00452e94(piVar1,0x45b09c);
  }
  return DAT_004aacb4;
}


/* ==== 0045b0e4 TDaviSharedTimer.virtual_000 ==== */

int * TDaviSharedTimer_virtual_000(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00453bd8(param_1,'\0',param_3);
  piVar1 = FUN_0041fefc((int *)&PTR_TList_virtual_000_0041fda4,'\x01',0);
  param_1[2] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0045b130 TDaviSharedTimer.Destroy ==== */

void TDaviSharedTimer_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45b13b;
  local_8 = FUN_004032fc(param_1,param_2);
  puStack_14 = &LAB_0045b181;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040c968(local_8 + 2);
  FUN_0040c968(local_8 + 1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045b188;
  puStack_14 = (undefined1 *)0x45b180;
  TDaviObject_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 0045b19c FUN_0045b19c ==== */

uint FUN_0045b19c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int i_val;
  
  piVar1 = (int *)FUN_0041ff40(*(undefined4 **)(param_1 + 8),0);
  iVar2 = FUN_0040312c(piVar1,(int)&PTR_TPersistent_virtual_000_0045adf4);
  uVar3 = *(uint *)(iVar2 + 0x28);
  iVar2 = *(int *)(*(uint *)(param_1 + 8) + 8);
  i_val = iVar2 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 8));
  }
  if (0 < i_val) {
    do {
      piVar1 = (int *)FUN_0041ff40(*(undefined4 **)(param_1 + 8),i_val);
      iVar2 = FUN_0040312c(piVar1,(int)&PTR_TPersistent_virtual_000_0045adf4);
      uVar3 = FUN_0045af28(*(uint *)(iVar2 + 0x28),uVar3);
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  return uVar3;
}


/* ==== 0045b200 FUN_0045b200 ==== */

undefined4 FUN_0045b200(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar1 = TTimer_virtual_02c((int *)&PTR_TPersistent_virtual_000_0044eddc,'\x01',(int *)0x0);
    *(int **)(param_1 + 4) = piVar1;
    TTimer_SetOnTimer((int)piVar1,extraout_EDX,extraout_ECX,FUN_0045b2d0,param_1);
  }
  return *(undefined4 *)(param_1 + 4);
}


/* ==== 0045b234 FUN_0045b234 ==== */

void FUN_0045b234(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int i_val;
  bool bVar5;
  
  puVar1 = *(undefined4 **)(*(uint *)(param_4 + -4) + 8);
  iVar3 = puVar1[2];
  i_val = iVar3 + -1;
  if (SBORROW4(iVar3,1)) {
    thunk_FUN_00402808(*(uint *)(param_4 + -4));
  }
  if (0 < i_val) {
    piVar2 = (int *)FUN_0041ff40(puVar1,param_1);
    iVar3 = FUN_0040312c(piVar2,(int)&PTR_TPersistent_virtual_000_0045adf4);
    piVar2 = (int *)FUN_0041ff40(*(undefined4 **)(*(int *)(param_4 + -4) + 8),i_val);
    uVar4 = FUN_0040312c(piVar2,(int)&PTR_TPersistent_virtual_000_0045adf4);
    while (*(uint *)(iVar3 + 0x30) < *(uint *)(uVar4 + 0x30)) {
      bVar5 = SBORROW4(i_val,1);
      i_val = i_val + -1;
      if (bVar5) {
        thunk_FUN_00402808(uVar4);
      }
      piVar2 = (int *)FUN_0041ff40(*(undefined4 **)(*(int *)(param_4 + -4) + 8),i_val);
      uVar4 = FUN_0040312c(piVar2,(int)&PTR_TPersistent_virtual_000_0045adf4);
    }
    FUN_004103a4(*(int **)(*(int *)(param_4 + -4) + 8),param_1,i_val);
  }
  return;
}


/* ==== 0045b2d0 FUN_0045b2d0 ==== */

void FUN_0045b2d0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  DWORD DVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar9;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_124 = &LAB_0045b3e5;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1[2] + 8) < 1) {
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80(&local_10,local_110);
    pcStack_138 = "No events in queue.";
    FUN_00403f9c(&local_c,4);
    FUN_00403c40(local_c);
    puVar3 = puStack_120;
  }
  puStack_120 = puVar3;
  DVar4 = GetTickCount();
  while( true ) {
    if ((int)((undefined4 *)local_8[2])[2] < 1) break;
    piVar6 = (int *)FUN_0041ff40((undefined4 *)local_8[2],0);
    iVar7 = FUN_0040312c(piVar6,(int)&PTR_TPersistent_virtual_000_0045adf4);
    if (DVar4 < *(uint *)(iVar7 + 0x30)) break;
    piVar6 = (int *)FUN_0041ff40((undefined4 *)local_8[2],0);
    piVar6 = (int *)FUN_0040312c(piVar6,(int)&PTR_TPersistent_virtual_000_0045adf4);
    uVar2 = piVar6[10];
    puVar1 = (uint *)(piVar6 + 0xc);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    uVar8 = extraout_ECX;
    uVar9 = extraout_EDX;
    if (CARRY4(uVar5,uVar2)) {
      thunk_FUN_00402808(uVar2);
      uVar8 = extraout_ECX_00;
      uVar9 = extraout_EDX_00;
    }
    if (DVar4 < (uint)piVar6[0xc]) {
      uVar5 = piVar6[10] + DVar4;
      if (CARRY4(piVar6[10],DVar4)) {
        uVar5 = thunk_FUN_00402808(uVar5);
        uVar8 = extraout_ECX_01;
        uVar9 = extraout_EDX_01;
      }
      piVar6[0xc] = uVar5;
    }
    FUN_0045b234(0,uVar9,uVar8,(int)&stack0xfffffffc);
    (**(code **)(*piVar6 + 0x30))(piVar6,local_8);
  }
  *in_FS_OFFSET = pcStack_138;
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 0045b494 FUN_0045b494 ==== */

void FUN_0045b494(int param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  
  DVar1 = GetTickCount();
  uVar2 = DVar1 + *(uint *)(param_2 + 0x28);
  if (CARRY4(DVar1,*(uint *)(param_2 + 0x28))) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  *(uint *)(param_2 + 0x30) = uVar2;
  FUN_0041fef4(*(int **)(param_1 + 8),param_2);
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 1) {
    iVar3 = FUN_0045b200(param_1);
    TTimer_SetInterval(iVar3,*(int *)(param_2 + 0x28));
  }
  else {
    FUN_00410598(*(int *)(param_1 + 8),&LAB_0045b45c);
    iVar3 = FUN_0045b200(param_1);
    uVar2 = FUN_0045af28(*(uint *)(iVar3 + 0x24),*(uint *)(param_2 + 0x28));
    iVar3 = FUN_0045b200(param_1);
    TTimer_SetInterval(iVar3,uVar2);
  }
  return;
}


