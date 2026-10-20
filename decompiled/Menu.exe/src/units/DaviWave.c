/* Menu.exe — units/DaviWave.pas: 43 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00452718 FUN_00452718 ==== */

undefined4 FUN_00452718(uint param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != '\0') {
    switch(param_1 & 0x7f) {
    case 0:
      if (param_2 == '\x01') {
        uVar1 = 0;
      }
      else if (param_2 == '\x02') {
        uVar1 = 0x100;
      }
      else if (param_2 == '\x03') {
        uVar1 = 0x200;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 1:
      if (param_2 == '\x04') {
        uVar1 = 0;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 2:
      if (param_2 == '\x04') {
        uVar1 = 0;
      }
      else if (param_2 == '\x05') {
        uVar1 = 0x100;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 3:
      if (param_2 == '\x02') {
        uVar1 = 0;
      }
      else if (param_2 == '\x05') {
        uVar1 = 0x100;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 4:
      if (param_2 == '\x06') {
        uVar1 = 0;
      }
      else if (param_2 == '\a') {
        uVar1 = 0x100;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 5:
      if (param_2 == '\x05') {
        uVar1 = 0x200;
      }
      else if (param_2 == '\x06') {
        uVar1 = 0;
      }
      else if (param_2 == '\a') {
        uVar1 = 0x100;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    default:
      FUN_00403c40("DaviDefaultBtnToWindows:  Unhandled case-part");
    }
  }
  return uVar1;
}


/* ==== 00452934 FUN_00452934 ==== */

void FUN_00452934(undefined *param_1,uint param_2,uint param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  LPCSTR caption;
  LPCSTR text;
  undefined4 uVar4;
  UINT type;
  UINT *in_FS_OFFSET;
  UINT UStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_1c = &LAB_004529d6;
  UStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_20;
  iVar1 = FUN_004523fc(param_2);
  uVar2 = FUN_004524c4(param_3);
  if (SCARRY4(iVar1,uVar2)) {
    thunk_FUN_00402808(uVar2);
  }
  uVar3 = FUN_00452718(param_3,param_4);
  type = iVar1 + uVar2 + uVar3;
  if (SCARRY4(iVar1 + uVar2,uVar3)) {
    thunk_FUN_00402808(uVar3);
  }
  SetForegroundWindow(*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24));
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_8);
  caption = FUN_004040a0(local_8);
  text = FUN_004040a0(param_1);
  uVar4 = FUN_0044d494(*(int *)PTR_DAT_004ab8ac,text,caption,type);
  FUN_00452598(uVar4);
  *in_FS_OFFSET = type;
  puStack_1c = &LAB_004529dd;
  UStack_20 = 0x4529d5;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004529e8 FUN_004529e8 ==== */

void FUN_004529e8(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00452934(param_1,CONCAT31((int3)((uint)param_2 >> 8),3),CONCAT31((int3)((uint)param_3 >> 8),1)
               ,(char)param_2);
  return;
}


/* ==== 004529f8 FUN_004529f8 ==== */

void FUN_004529f8(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00452934(param_1,CONCAT31((int3)((uint)param_2 >> 8),5),CONCAT31((int3)((uint)param_3 >> 8),1)
               ,(char)param_2);
  return;
}


/* ==== 00452a08 FUN_00452a08 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452a08(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac878 = _DAT_004ac878 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00452b24 FUN_00452b24 ==== */

void FUN_00452b24(int *param_1,char param_2,undefined4 *param_3,int param_4)

{
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 *local_8;
  
  if (param_2 != '\0') {
    puStackY_24 = (undefined1 *)0x452b36;
    local_8 = param_3;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  puStackY_24 = (undefined1 *)0x452b45;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  puStackY_28 = &LAB_00452b87;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  FUN_00453bd8(param_1,'\0',extraout_ECX_00);
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00403cb0(param_1 + 2,local_8);
  param_1[3] = param_4;
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_00452b8e;
  puStackY_28 = (undefined1 *)0x452b86;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00452bac FUN_00452bac ==== */

bool FUN_00452bac(int param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 0xc);
}


/* ==== 00452bb4 TFinalizationInfo.virtual_000 ==== */

void TFinalizationInfo_virtual_000(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    (**(code **)(param_1 + 0xc))();
  }
  return;
}


/* ==== 00452bc8 FUN_00452bc8 ==== */

int * FUN_00452bc8(int *param_1,char param_2,undefined4 param_3)

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
  *(undefined1 *)(param_1 + 1) = 0;
  piVar1 = TObjectList_virtual_008((int *)&LAB_004519c0,'\x01',0);
  param_1[2] = (int)piVar1;
  FUN_00403c5c(param_1 + 3);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00452c20 TFinalizationList.Destroy ==== */

void TFinalizationList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  puStack_118 = (undefined1 *)0x452c38;
  piVar1 = FUN_004032fc(param_1,param_2);
  puStack_11c = &LAB_00452cd3;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  if (((char)piVar1[1] == '\0') && (puStack_118 = &stack0xfffffffc, piVar1 == DAT_004aab3c)) {
    puStack_118 = &stack0xfffffffc;
    FUN_00402ee4(*piVar1,local_10c);
    FUN_00403e80(&local_c,local_10c);
    pcStack_130 = ": Use class procedure Finalize instead of Destroy";
    FUN_00403f9c(&local_8,4);
    FUN_00403c40(local_8);
  }
  FUN_0040c968(piVar1 + 2);
  TDaviObject_Destroy(piVar1,extraout_DL & 0xfc);
  *in_FS_OFFSET = pcStack_130;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00452d68 FUN_00452d68 ==== */

int * FUN_00452d68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_004aab3c == (int *)0x0) {
    DAT_004aab3c = FUN_00452bc8((int *)&DAT_00452a8c,'\x01',param_3);
  }
  return DAT_004aab3c;
}


/* ==== 00452d8c FUN_00452d8c ==== */

void FUN_00452d8c(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 local_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_c;
  undefined4 local_8;
  
  puStack_11c = &stack0xfffffffc;
  puStack_128 = &stack0xfffffffc;
  local_c = 0;
  puStack_120 = &LAB_00452e43;
  local_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_124;
  puStack_12c = &LAB_00452dec;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (DAT_004aab3c != 0) {
    FUN_00453214(DAT_004aab3c);
    *(undefined1 *)(DAT_004aab3c + 4) = 1;
    FUN_0040c968(&DAT_004aab3c);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  *in_FS_OFFSET = uStack_130;
  *in_FS_OFFSET = local_124;
  puStack_11c = &LAB_00452e4a;
  puStack_120 = (undefined1 *)0x452e42;
  FUN_00403c5c(&local_c);
  return;
}


/* ==== 00452e94 FUN_00452e94 ==== */

void FUN_00452e94(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  int iVar3;
  int i_val;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int local_128 [4];
  undefined1 local_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_128[2] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  local_c = 0;
  local_10 = 0;
  local_114 = 0;
  puStack_13c = &LAB_0045307f;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  iVar4 = 0;
  i_val = 0;
  local_8 = param_2;
  while (iVar4 == 0) {
    iVar3 = FUN_00451bac(param_1[2]);
    if (iVar3 <= i_val) break;
    piVar2 = (int *)(*(code *)**(undefined4 **)param_1[2])((undefined4 *)param_1[2],i_val);
    iVar3 = FUN_0040312c(piVar2,(int)&LAB_00452afc);
    bVar1 = FUN_00452bac(iVar3,local_8);
    if (bVar1) {
      piVar2 = (int *)(*(code *)**(undefined4 **)param_1[2])((undefined4 *)param_1[2],i_val);
      iVar4 = FUN_0040312c(piVar2,(int)&LAB_00452afc);
    }
    else {
      bVar5 = SCARRY4(i_val,1);
      i_val = i_val + 1;
      if (bVar5) {
        thunk_FUN_00402808(CONCAT31(extraout_var,bVar1));
      }
    }
  }
  if (iVar4 == 0) {
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80(&local_10,local_110);
    local_128[3] = local_8;
    local_118 = 5;
    FUN_00409254((byte *)
                 ": Finalization procedure (%p) should be registered.\r\nThis address can be used to find the procedure.\r\n(Delphi 5 Search-menu Find error)\r\n"
                 ,local_128 + 3,0,&local_114);
    FUN_00403f9c(&local_c,4);
    FUN_00403c40(local_c);
  }
  if (*(char *)(iVar4 + 4) != '\0') {
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80(local_128 + 1,local_110);
    local_128[3] = local_8;
    local_118 = 5;
    FUN_00409254((byte *)
                 ": Finalization procedure (%p) is already added to finalizationlist.\r\nThis address can be used to find the procedure.\r\n(Delphi Search-menu Find error)\r\n"
                 ,local_128 + 3,0,local_128);
    FUN_00403f9c(local_128 + 2,4);
    FUN_00403c40(local_128[2]);
  }
  *(undefined1 *)(iVar4 + 4) = 1;
  (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],i_val);
  (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],iVar4);
  *in_FS_OFFSET = uStack_140;
  puStack_138 = &LAB_00453086;
  puStack_13c = (undefined1 *)0x453066;
  FUN_00403c80(local_128,3);
  puStack_13c = (undefined1 *)0x453071;
  FUN_00403c5c(&local_114);
  puStack_13c = (undefined1 *)0x45307e;
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 00453214 FUN_00453214 ==== */

void FUN_00453214(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int i_val;
  
  uVar1 = FUN_00451bac(*(int *)(param_1 + 8));
  i_val = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < i_val) {
    do {
      piVar2 = (int *)(**(code **)**(undefined4 **)(param_1 + 8))
                                (*(undefined4 **)(param_1 + 8),i_val);
      puVar3 = (undefined4 *)FUN_0040312c(piVar2,(int)&LAB_00452afc);
      (**(code **)*puVar3)();
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),i_val);
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 00453260 FUN_00453260 ==== */

void FUN_00453260(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00452b24((int *)&LAB_00452afc,'\x01',*(undefined4 **)(param_1 + 0xc),param_2);
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),uVar1);
  return;
}


/* ==== 00453288 FUN_00453288 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453288(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac87c = _DAT_004ac87c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00453bd8 FUN_00453bd8 ==== */

int * FUN_00453bd8(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00453c14 TDaviObject.Destroy ==== */

void TDaviObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  
  puStack_120 = (undefined1 *)0x453c2a;
  piVar1 = FUN_004032fc(param_1,param_2);
  puStack_124 = &LAB_00453cdd;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puStack_130 = &LAB_00453c87;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  *in_FS_OFFSET = uStack_140;
  puStack_138 = &LAB_00453c7d;
  uStack_13c = 0x453c75;
  puStack_12c = &stack0xfffffffc;
  puStack_120 = &stack0xfffffffc;
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  return;
}


/* ==== 00453d0c FUN_00453d0c ==== */

void FUN_00453d0c(int *param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *extraout_ECX;
  undefined1 extraout_DL;
  undefined1 uVar3;
  undefined4 *extraout_EDX;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined1 *puStackY_34;
  undefined1 *puStackY_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  uVar3 = 0;
  if (param_2 != '\0') {
    puStackY_30 = (undefined1 *)0x453d24;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
    uVar3 = extraout_DL;
  }
  uStack_8 = CONCAT13(uVar3,(undefined3)uStack_8);
  puStackY_34 = &LAB_00453e46;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  puStackY_30 = &stack0xfffffffc;
  FUN_00403cf4((int *)&local_c,(int)param_3);
  if (param_3 != (undefined4 *)0x0) {
    iVar1 = 0;
    if (param_6[-1] == 0) {
      iVar1 = thunk_FUN_00402808(0);
    }
    if (*(char *)((int)param_6 + iVar1) != '.') {
      FUN_00403ee4((int *)&local_c,(undefined4 *)&DAT_00453e78);
    }
  }
  FUN_00408448((int)param_6,(int *)&local_10);
  FUN_00403ee4((int *)&local_c,local_10);
  iVar1 = FUN_00403edc((int)local_c);
  uVar2 = iVar1 - 1;
  puVar4 = local_c;
  if ((uint)local_c[-1] <= uVar2) {
    uVar2 = thunk_FUN_00402808(uVar2);
    puVar4 = extraout_EDX;
  }
  if (*(char *)((int)puVar4 + uVar2) == ':') {
    FUN_00403ee4((int *)&local_c,(undefined4 *)&DAT_00453e84);
  }
  else {
    FUN_00403ee4((int *)&local_c,(undefined4 *)&DAT_00453e90);
  }
  FUN_00403ee4((int *)&local_c,param_5);
  FUN_0040b5d8(param_1,'\0',local_c);
  (**(code **)*param_1)();
  FUN_00403cb0(param_1 + 3,param_3);
  FUN_00403cb0(param_1 + 4,param_5);
  FUN_00403cb0(param_1 + 5,param_6);
  if (param_4 == (undefined4 *)0x0) {
    if (param_5 == (undefined4 *)0x0) {
      FUN_00403cb0(param_1 + 6,local_c);
    }
    else {
      FUN_00403cb0(param_1 + 6,param_5);
    }
  }
  else {
    FUN_00403cb0(param_1 + 6,param_4);
  }
  *in_FS_OFFSET = uStackY_38;
  puStackY_30 = &LAB_00453e4d;
  puStackY_34 = (undefined1 *)0x453e45;
  FUN_00403c80((int *)&local_10,2);
  return;
}


/* ==== 00453e94 EDavilex.virtual_000 ==== */

void EDavilex_virtual_000(int param_1)

{
  FUN_00453eb0(param_1,1);
  FUN_00453eb4(param_1,4);
  return;
}


/* ==== 00453eb0 FUN_00453eb0 ==== */

void FUN_00453eb0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1c) = param_2;
  return;
}


/* ==== 00453eb4 FUN_00453eb4 ==== */

void FUN_00453eb4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1d) = param_2;
  return;
}


/* ==== 00453eb8 FUN_00453eb8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453eb8(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8c4 = _DAT_004ac8c4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00453ef0 mciGetErrorStringA ==== */

BOOL __stdcall mciGetErrorStringA(MCIERROR mcierr,LPSTR pszText,UINT cchText)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00453ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = mciGetErrorStringA(mcierr,pszText,cchText);
  return BVar1;
}


/* ==== 00453ef8 mciSendCommandA ==== */

MCIERROR __stdcall
mciSendCommandA(MCIDEVICEID mciId,UINT uMsg,DWORD_PTR dwParam1,DWORD_PTR dwParam2)

{
  MCIERROR MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00453ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mciSendCommandA(mciId,uMsg,dwParam1,dwParam2);
  return MVar1;
}


/* ==== 00453f00 FUN_00453f00 ==== */

void FUN_00453f00(void)

{
  return;
}


/* ==== 00453f04 FUN_00453f04 ==== */

void FUN_00453f04(uint param_1)

{
  FUN_00407080(param_1);
  return;
}


/* ==== 00453f0c FUN_00453f0c ==== */

void FUN_00453f0c(uint param_1)

{
  FUN_0040707c(param_1);
  return;
}


/* ==== 00453f18 FUN_00453f18 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453f18(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac8c8 = _DAT_004ac8c8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00454030 TDaviWave.virtual_02c ==== */

int * TDaviWave_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
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
  FUN_00403c5c(param_1 + 9);
  FUN_00454164((int)param_1);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00454078 TDaviWave.Destroy ==== */

void TDaviWave_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00454164((int)piVar1);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 004540a8 TDaviWave.SetFilename ==== */

void TDaviWave_SetFilename(uint param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = (undefined1 *)0x4540ba;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  bVar1 = true;
  puStack_14 = &LAB_00454113;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00403fec(*(uint **)(param_1 + 0x24),local_8);
  if (!bVar1) {
    FUN_00403cb0((int *)(param_1 + 0x24),local_8);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      FUN_00454164(param_1);
      if (local_8 != (uint *)0x0) {
        FUN_00454340(param_1,(undefined *)local_8);
      }
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045411a;
  puStack_14 = (undefined1 *)0x454112;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00454120 TDaviWave.virtual_004 ==== */

void TDaviWave_virtual_004(int param_1,int *param_2)

{
  TComponent_virtual_004(param_1,param_2);
  (**(code **)(*param_2 + 8))(param_2,"WavFileData",1,&LAB_004543f0,param_1,FUN_004543d0,param_1);
  return;
}


/* ==== 00454164 FUN_00454164 ==== */

void FUN_00454164(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00402794(*(int *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


/* ==== 00454194 FUN_00454194 ==== */

void FUN_00454194(uint param_1,int *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  uint local_8;
  
  puStack_1c = (undefined1 *)0x4541a9;
  local_8 = param_1;
  uVar1 = FUN_00412664(param_2);
  puStack_1c = (undefined1 *)0x4541bb;
  FUN_004027ac((int *)(local_8 + 0x28),0x2c);
  uVar6 = 1;
  puStack_20 = &LAB_004542b6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004126b8(param_2,*(undefined4 *)(local_8 + 0x28),0x2c);
  local_c = **(int **)(local_8 + 0x28);
  FUN_00402bc0(&local_c,(int *)&DAT_004aac4c,4);
  if (!(bool)uVar6) {
    FUN_00403c40("Geen geldig wave bestand.");
  }
  puVar2 = (uint *)(*(uint *)(local_8 + 0x28) + 0x28);
  if (0xffffffd7 < *(uint *)(local_8 + 0x28)) {
    puVar2 = (uint *)thunk_FUN_00402808((uint)puVar2);
  }
  uVar3 = *puVar2;
  *(uint *)(local_8 + 0x34) = uVar3;
  iVar5 = uVar3 + 0x2c;
  if (0xffffffd3 < uVar3) {
    thunk_FUN_00402808(uVar3);
    iVar5 = extraout_EDX;
  }
  *(int *)(local_8 + 0x2c) = iVar5;
  FUN_004027ac((int *)(local_8 + 0x28),iVar5);
  FUN_00412674(param_2,uVar1);
  iVar5 = *(int *)(local_8 + 0x2c);
  if (iVar5 < 0) {
    thunk_FUN_00402808(local_8);
    iVar5 = extraout_ECX;
  }
  FUN_004126b8(param_2,*(undefined4 *)(local_8 + 0x28),iVar5);
  uVar3 = *(uint *)(local_8 + 0x28) + 0x14;
  if (0xffffffeb < *(uint *)(local_8 + 0x28)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  *(uint *)(local_8 + 0x30) = uVar3;
  puVar4 = (undefined4 *)(*(uint *)(local_8 + 0x28) + 0x28);
  if (0xffffffd7 < *(uint *)(local_8 + 0x28)) {
    puVar4 = (undefined4 *)thunk_FUN_00402808((uint)puVar4);
  }
  *(undefined4 *)(local_8 + 0x34) = *puVar4;
  uVar3 = *(uint *)(local_8 + 0x28) + 0x2c;
  if (0xffffffd3 < *(uint *)(local_8 + 0x28)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  *(uint *)(local_8 + 0x38) = uVar3;
  *in_FS_OFFSET = uStack_24;
  return;
}


/* ==== 00454324 FUN_00454324 ==== */

void FUN_00454324(uint param_1,int *param_2)

{
  int extraout_ECX;
  int iVar1;
  int *extraout_EDX;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 0) {
    param_1 = thunk_FUN_00402808(param_1);
    iVar1 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_004126f0(param_2,*(undefined4 *)(param_1 + 0x28),iVar1);
  return;
}


/* ==== 00454340 FUN_00454340 ==== */

void FUN_00454340(uint param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x454354;
  FUN_00404090((int)param_2);
  puStack_18 = &LAB_004543c1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStackY_24 = (undefined1 *)0x454373;
  puStack_14 = &stack0xfffffffc;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0040f0bc,'\x01',param_2,0);
  puStackY_24 = &LAB_004543a4;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_004543d0(param_1,piVar1);
  *in_FS_OFFSET = uStackY_28;
  puStackY_24 = (undefined1 *)0x4543a3;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 004543d0 FUN_004543d0 ==== */

void FUN_004543d0(uint param_1,int *param_2)

{
  FUN_00454164(param_1);
  FUN_00454194(param_1,param_2);
  return;
}


/* ==== 00454534 FUN_00454534 ==== */

void FUN_00454534(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int i_val;
  
  i_val = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < i_val) {
    do {
      uVar1 = FUN_00456a14(param_1);
      if ((uVar1 & 0xffffff) != (*param_2 & 0xffffff)) {
        *param_3 = *param_2;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 004545f8 FUN_004545f8 ==== */

void FUN_004545f8(int param_1,byte *param_2,byte *param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  int i_val;
  
  i_val = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < i_val) {
    do {
      uVar1 = (uint)param_4 * (uint)param_2[3] >> 8;
      iVar2 = 0x100 - uVar1;
      param_3[2] = (byte)(param_2[2] * uVar1 + (uint)param_3[2] * iVar2 >> 8);
      param_3[1] = (byte)(param_2[1] * uVar1 + (uint)param_3[1] * iVar2 >> 8);
      *param_3 = (byte)(*param_2 * uVar1 + (uint)*param_3 * iVar2 >> 8);
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 00454684 FUN_00454684 ==== */

void FUN_00454684(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int i_val;
  
  i_val = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < i_val) {
    do {
      *param_3 = *param_2;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 1);
      *(undefined1 *)((int)param_3 + 3) = 0xff;
      param_2 = (undefined2 *)((int)param_2 + 3);
      param_3 = param_3 + 2;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 004546c0 FUN_004546c0 ==== */

void FUN_004546c0(int param_1,char *param_2,undefined2 *param_3)

{
  char cVar1;
  char extraout_AH;
  char extraout_var;
  int i_val;
  undefined2 *local_c;
  
  i_val = *(int *)(param_1 + 0x8c) + -1;
  local_c = param_3;
  if (-1 < i_val) {
    do {
      FUN_00456a14(param_1);
      if (extraout_var == param_2[2]) {
        FUN_00456a14(param_1);
        if (extraout_AH != param_2[1]) goto LAB_0045470b;
        cVar1 = FUN_00456a14(param_1);
        if (cVar1 != *param_2) goto LAB_0045470b;
      }
      else {
LAB_0045470b:
        *local_c = *(undefined2 *)param_2;
        *(char *)(local_c + 1) = param_2[2];
        *(undefined1 *)((int)local_c + 3) = 0xff;
      }
      param_2 = param_2 + 3;
      local_c = local_c + 2;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


/* ==== 00454738 FUN_00454738 ==== */

void FUN_00454738(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  int i_val;
  
  i_val = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < i_val) {
    do {
      uVar1 = param_4 & 0xff;
      param_3[2] = param_3[2] + (char)(((uint)param_2[2] - (uint)param_3[2]) * uVar1 >> 8);
      param_3[1] = param_3[1] + (char)(((uint)param_2[1] - (uint)param_3[1]) * uVar1 >> 8);
      *param_3 = *param_3 + (char)(((uint)*param_2 - (uint)*param_3) * uVar1 >> 8);
      param_2 = param_2 + 3;
      param_3 = param_3 + 4;
      i_val = i_val + -1;
    } while (i_val != -1);
  }
  return;
}


