/* Menu.exe — units/SingletonForm.pas: 69 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0048c604 FUN_0048c604 ==== */

void FUN_0048c604(int param_1)

{
  FUN_004627d0(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38),
               *(int *)(*(int *)(param_1 + 0xc) + 0xc));
  return;
}


/* ==== 0048c624 FUN_0048c624 ==== */

void FUN_0048c624(int param_1)

{
  FUN_004627d0(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),
               *(int *)(*(int *)(param_1 + 0x10) + 0xc));
  return;
}


/* ==== 0048c644 FUN_0048c644 ==== */

undefined1 FUN_0048c644(int param_1,int param_2)

{
  uint i_val;
  int iVar1;
  int iVar2;
  int j;
  
  i_val = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      iVar1 = FUN_0048d54c(*(int *)(param_1 + 0x10),j);
      iVar1 = *(int *)(iVar1 + 0xc);
      iVar2 = FUN_00462620(*(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),param_2);
      if (iVar2 <= iVar1) {
        return 1;
      }
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  return 0;
}


/* ==== 0048c76c FUN_0048c76c ==== */

int * FUN_0048c76c(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TDataObject_virtual_004(param_1,'\0',param_3);
  param_1[0xe] = param_3;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0048c7ac TSaveGameHeader.virtual_000 ==== */

void TSaveGameHeader_virtual_000(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0048c801;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00403e80(&local_8,(byte *)(param_1 + 8));
  FUN_0045ee68(param_1,0x48c814,local_8);
  FUN_0045ef0c(param_1,0x48c824,*(undefined4 *)(param_1 + 0x3c));
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0048c808;
  puStack_14 = (undefined1 *)0x48c800;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 0048c830 FUN_0048c830 ==== */

undefined4 FUN_0048c830(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x10) + 8);
}


/* ==== 0048c83c FUN_0048c83c ==== */

void FUN_0048c83c(int *param_1,undefined *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_14c;
  undefined1 *puStackY_148;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined1 local_10;
  int *local_c;
  undefined *local_8;
  
  local_18 = 0;
  local_1c = 0;
  puStack_124 = (undefined1 *)0x48c85b;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_128 = &LAB_0048c939;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_124 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar3 = "LoadFromFile";
  FUN_00403f9c(&local_18,3);
  puStackY_148 = (undefined1 *)0x48c8b7;
  iVar2 = local_18;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,iVar2,0,(int)pcVar3);
  puStackY_148 = (undefined1 *)0x48c8d4;
  local_c = FUN_004128ac((int *)&PTR_THandleStream_virtual_000_0045e160,'\x01',local_8,0);
  puStackY_148 = &LAB_0048c905;
  uStackY_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_14c;
  (**(code **)(*param_1 + 0x14))(param_1,local_c);
  *in_FS_OFFSET = uStackY_14c;
  puStackY_148 = (undefined1 *)0x48c904;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 0048c970 TSaveGameHeader.virtual_014 ==== */

void TSaveGameHeader_virtual_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0048ca0e;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_0045e360(param_2,param_1 + 2);
  FUN_0045e350(param_2,param_1 + 0xf);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048ca44 TSaveGameHeader.virtual_010 ==== */

void TSaveGameHeader_virtual_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_110 = 0;
  local_114 = 0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_124 = &LAB_0048cb62;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  if (param_1[0xe] == 0) {
    FUN_00402ee4(*param_1,local_10c);
    FUN_00403e80(&local_114,local_10c);
    pcStack_144 = ": Owner of header (Player) = nil";
    FUN_00403f9c(&local_110,4);
    FUN_00403c40(local_110);
  }
  FUN_0045e398(param_2,param_1 + 2);
  uVar3 = FUN_0048c830((int)param_1);
  FUN_0045e380(param_2,uVar3);
  *in_FS_OFFSET = pcStack_144;
  FUN_00403c80(&local_114,2);
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048cd78 TQRState.virtual_000 ==== */

void TQRState_virtual_000(int param_1)

{
  TRaceState_virtual_000(param_1);
  FUN_0045f038(param_1,0x48cda0,*(char *)(param_1 + 0x10));
  return;
}


/* ==== 0048cdb4 TQRState.virtual_014 ==== */

void TQRState_virtual_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0048ce5b;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TRaceState_virtual_014(param_1,param_2);
  FUN_0045e370(param_2,param_1 + 4);
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048ce90 TQRState.virtual_010 ==== */

void TQRState_virtual_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0048cf37;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TRaceState_virtual_010(param_1,param_2);
  FUN_0045e3a8(param_2);
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048cf6c TRaceState.virtual_000 ==== */

void TRaceState_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x48cf9c,*(undefined4 *)(param_1 + 8));
  FUN_0045ef0c(param_1,0x48cfb4,*(undefined4 *)(param_1 + 0xc));
  return;
}


/* ==== 0048cfc0 TRaceState.virtual_014 ==== */

void TRaceState_virtual_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0048d068;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_0045e350(param_2,param_1 + 2);
  FUN_0045e350(param_2,param_1 + 3);
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048d0a0 TRaceState.virtual_010 ==== */

void TRaceState_virtual_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_11c = &LAB_0048d148;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_0045e380(param_2,param_1[2]);
  FUN_0045e380(param_2,param_1[3]);
  uVar2 = FUN_0045f46c();
  TDebug_ExitProc(uVar2);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048d180 FUN_0048d180 ==== */

void FUN_0048d180(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *in_FS_OFFSET;
  char *pcVar3;
  int iStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_0048d21a;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_8 = 0;
  local_c = param_2;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  pcVar3 = "SetCharacterIx";
  FUN_00403f9c(&local_10,3);
  iVar1 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar3);
  param_1[2] = param_2;
  *in_FS_OFFSET = (int)pcVar3;
  FUN_00403c80(&local_14,2);
  return;
}


/* ==== 0048d250 FUN_0048d250 ==== */

void FUN_0048d250(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *in_FS_OFFSET;
  char *pcVar3;
  int iStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_0048d2ea;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_8 = 0;
  local_c = param_2;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  pcVar3 = "SetTrackIx";
  FUN_00403f9c(&local_10,3);
  iVar1 = local_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar3);
  param_1[3] = param_2;
  *in_FS_OFFSET = (int)pcVar3;
  FUN_00403c80(&local_14,2);
  return;
}


/* ==== 0048d31c TTourState.virtual_004 ==== */

void TTourState_virtual_004(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint i_val;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_ECX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_134;
  undefined1 *puStackY_130;
  undefined1 *puStackY_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  if (param_2 != '\0') {
    puStackY_12c = (undefined1 *)0x48d33c;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_fffffed8,in_stack_fffffedc);
  }
  puStackY_130 = &LAB_0048d410;
  uStackY_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_134;
  puStackY_12c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  i_val = FUN_0045f46c();
  FUN_0045fb90(i_val,puVar1,2);
  TDataObject_virtual_004(param_1,'\0',extraout_ECX);
  piVar2 = TDataList_virtual_018
                     ((int *)&PTR_TDataList_virtual_000_0045e240,'\x01',
                      (int)&PTR_TCharResult_virtual_000_0048d848);
  param_1[4] = (int)piVar2;
  i_val = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  uVar3 = extraout_ECX_00;
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
    uVar3 = extraout_ECX_01;
  }
  if (-1 < (int)(i_val - 1)) {
    do {
      piVar2 = TDataObject_virtual_004((int *)&PTR_TCharResult_virtual_000_0048d848,'\x01',uVar3);
      FUN_0045e7e4(param_1[4],piVar2);
      i_val = i_val - 1;
      uVar3 = extraout_ECX_02;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048d458 FUN_0048d458 ==== */

void FUN_0048d458(int param_1)

{
  FUN_0048d54c(param_1,*(int *)(param_1 + 8));
  return;
}


/* ==== 0048d468 TTourState.Destroy ==== */

void TTourState_Destroy(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_118 = (undefined1 *)0x48d480;
  piVar2 = FUN_004032fc(param_1,param_2);
  puStack_11c = &LAB_0048d513;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  FUN_00402ee4(*piVar2,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,2);
  TDataObject_Destroy(piVar2,extraout_DL & 0xfc);
  FUN_0045e860(piVar2[4]);
  FUN_0040c968(piVar2 + 4);
  *in_FS_OFFSET = "Destroy";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048d54c FUN_0048d54c ==== */

void FUN_0048d54c(int param_1,int param_2)

{
  FUN_0045e640(*(int *)(param_1 + 0x10),param_2);
  return;
}


/* ==== 0048d564 TTourState.virtual_014 ==== */

void TTourState_virtual_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint i_val;
  int *piVar2;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_124 = &LAB_0048d641;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_8 = param_2;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar1 = local_c;
  i_val = FUN_0045f46c();
  FUN_0045fb90(i_val,puVar1,0);
  TRaceState_virtual_014(param_1,local_8);
  i_val = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0048d54c((int)param_1,j);
      (**(code **)(*piVar2 + 0x14))(piVar2,local_8);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  i_val = FUN_0045f46c();
  TDebug_ExitProc(i_val);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 0048d678 TTourState.virtual_010 ==== */

void TTourState_virtual_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint i_val;
  int *piVar2;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_124 = &LAB_0048d755;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_8 = param_2;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar1 = local_c;
  i_val = FUN_0045f46c();
  FUN_0045fb90(i_val,puVar1,0);
  TRaceState_virtual_010(param_1,local_8);
  i_val = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0048d54c((int)param_1,j);
      (**(code **)(*piVar2 + 0x10))(piVar2,local_8);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  i_val = FUN_0045f46c();
  TDebug_ExitProc(i_val);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 0048d78c TTourState.virtual_000 ==== */

void TTourState_virtual_000(int param_1)

{
  TRaceState_virtual_000(param_1);
  FUN_0045efa4(param_1,(undefined4 *)"FCharResultList",*(int **)(param_1 + 0x10));
  return;
}


/* ==== 0048d86c TCharResult.virtual_000 ==== */

void TCharResult_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x48d89c,*(undefined4 *)(param_1 + 8));
  FUN_0045ef0c(param_1,0x48d8ac,*(undefined4 *)(param_1 + 0xc));
  return;
}


/* ==== 0048d8c0 FUN_0048d8c0 ==== */

undefined1 FUN_0048d8c0(int param_1,uint param_2)

{
  return *(undefined1 *)(param_1 + 0x14 + (param_2 & 0x7f));
}


/* ==== 0048d8c8 FUN_0048d8c8 ==== */

int FUN_0048d8c8(int param_1)

{
  char cVar1;
  uint uVar2;
  uint i_val;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  i_val = 0;
  do {
    cVar1 = FUN_0048d8c0(param_1,i_val);
    if (cVar1 != '\0') {
      uVar2 = FUN_0048e6d4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),i_val);
      bVar4 = SCARRY4(iVar3,*(int *)(uVar2 + 0x34));
      iVar3 = iVar3 + *(int *)(uVar2 + 0x34);
      if (bVar4) {
        thunk_FUN_00402808(uVar2);
      }
    }
    i_val = i_val + 1;
  } while ((char)i_val != '\x05');
  return iVar3;
}


/* ==== 0048d90c FUN_0048d90c ==== */

int FUN_0048d90c(int param_1)

{
  char cVar1;
  uint uVar2;
  uint i_val;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  i_val = 0;
  do {
    cVar1 = FUN_0048d8c0(param_1,i_val);
    if (cVar1 != '\0') {
      uVar2 = FUN_0048e6d4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),i_val);
      bVar4 = SCARRY4(iVar3,*(int *)(uVar2 + 0x38));
      iVar3 = iVar3 + *(int *)(uVar2 + 0x38);
      if (bVar4) {
        thunk_FUN_00402808(uVar2);
      }
    }
    i_val = i_val + 1;
  } while ((char)i_val != '\x05');
  return iVar3;
}


/* ==== 0048d950 FUN_0048d950 ==== */

int FUN_0048d950(int param_1)

{
  char cVar1;
  uint uVar2;
  uint i_val;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  i_val = 0;
  do {
    cVar1 = FUN_0048d8c0(param_1,i_val);
    if (cVar1 != '\0') {
      uVar2 = FUN_0048e6d4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),i_val);
      bVar4 = SCARRY4(iVar3,*(int *)(uVar2 + 0x3c));
      iVar3 = iVar3 + *(int *)(uVar2 + 0x3c);
      if (bVar4) {
        thunk_FUN_00402808(uVar2);
      }
    }
    i_val = i_val + 1;
  } while ((char)i_val != '\x05');
  return iVar3;
}


/* ==== 0048d994 FUN_0048d994 ==== */

int FUN_0048d994(int param_1)

{
  char cVar1;
  uint uVar2;
  uint i_val;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  i_val = 0;
  do {
    cVar1 = FUN_0048d8c0(param_1,i_val);
    if (cVar1 != '\0') {
      uVar2 = FUN_0048e6d4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),i_val);
      bVar4 = SCARRY4(iVar3,*(int *)(uVar2 + 0x40));
      iVar3 = iVar3 + *(int *)(uVar2 + 0x40);
      if (bVar4) {
        thunk_FUN_00402808(uVar2);
      }
    }
    i_val = i_val + 1;
  } while ((char)i_val != '\x05');
  return iVar3;
}


/* ==== 0048d9d8 FUN_0048d9d8 ==== */

void FUN_0048d9d8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  FUN_0048dcd0(param_1,param_2);
  uVar1 = FUN_0048e6d4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_2);
  iVar2 = *(int *)(param_1 + 8) - *(int *)(uVar1 + 0x30);
  if (SBORROW4(*(int *)(param_1 + 8),*(int *)(uVar1 + 0x30))) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_0048dca4(param_1,iVar2);
  return;
}


/* ==== 0048da18 TCharResult.virtual_014 ==== */

void TCharResult_virtual_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  char local_5;
  
  puStack_120 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_124 = &LAB_0048daf5;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar1 = local_c;
  i_val = FUN_0045f46c();
  FUN_0045fb90(i_val,puVar1,0);
  TDataObject_virtual_014();
  FUN_0045e350(param_2,param_1 + 3);
  FUN_0045e350(param_2,param_1 + 2);
  FUN_0045e350(param_2,param_1 + 4);
  i_val = 0;
  do {
    FUN_0045e370(param_2,&local_5);
    if (local_5 != '\0') {
      FUN_0048dcd0((int)param_1,i_val);
    }
    i_val = i_val + 1;
  } while ((char)i_val != '\x05');
  i_val = FUN_0045f46c();
  TDebug_ExitProc(i_val);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 0048db2c TCharResult.virtual_010 ==== */

void TCharResult_virtual_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_0048dc02;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  i_val = FUN_0045f46c();
  FUN_0045fb90(i_val,puVar1,0);
  TDataObject_virtual_010();
  FUN_0045e380(param_2,param_1[3]);
  FUN_0045e380(param_2,param_1[2]);
  FUN_0045e380(param_2,param_1[4]);
  i_val = 0;
  do {
    FUN_0048d8c0((int)param_1,i_val);
    FUN_0045e3a8(param_2);
    i_val = i_val + 1;
  } while ((char)i_val != '\x05');
  i_val = FUN_0045f46c();
  TDebug_ExitProc(i_val);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048dc38 FUN_0048dc38 ==== */

void FUN_0048dc38(int param_1)

{
  byte i_val;
  
  i_val = 0;
  do {
    *(undefined1 *)(param_1 + 0x14 + (uint)i_val) = 0;
    i_val = i_val + 1;
  } while (i_val != 5);
  return;
}


/* ==== 0048dc4c FUN_0048dc4c ==== */

void FUN_0048dc4c(int param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar3;
  int extraout_EDX_01;
  
  uVar1 = *(uint *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x2c);
  iVar3 = *(int *)(uVar1 + 4);
  iVar2 = iVar3 + *(int *)(param_1 + 0x10);
  if (SCARRY4(iVar3,*(int *)(param_1 + 0x10))) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_0048dcb4(param_1,iVar2);
  uVar1 = FUN_0048e6d4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),
                       CONCAT31((int3)((uint)extraout_EDX_00 >> 8),4));
  iVar3 = *(int *)(param_1 + 8) - *(int *)(uVar1 + 0x30);
  if (SBORROW4(*(int *)(param_1 + 8),*(int *)(uVar1 + 0x30))) {
    thunk_FUN_00402808(uVar1);
    iVar3 = extraout_EDX_01;
  }
  FUN_0048dca4(param_1,iVar3);
  return;
}


/* ==== 0048dca4 FUN_0048dca4 ==== */

void FUN_0048dca4(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


/* ==== 0048dcb4 FUN_0048dcb4 ==== */

void FUN_0048dcb4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  if (100 < param_2) {
    *(undefined4 *)(param_1 + 0x10) = 100;
  }
  return;
}


/* ==== 0048dcd0 FUN_0048dcd0 ==== */

void FUN_0048dcd0(int param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 0x14 + (param_2 & 0x7f)) = 1;
  return;
}


/* ==== 0048dcdc FUN_0048dcdc ==== */

bool FUN_0048dcdc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  return iVar1 <= *(int *)(param_1 + 0xc);
}


/* ==== 0048dd00 FUN_0048dd00 ==== */

void FUN_0048dd00(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (*(int *)(param_1 + 0xc) < (int)uVar3) {
    piVar1 = (int *)(param_1 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar2,1)) {
      thunk_FUN_00402808(uVar3);
    }
  }
  return;
}


/* ==== 0048dde8 TStatic.virtual_00c ==== */

void TStatic_virtual_00c(int *param_1,undefined4 *param_2)

{
  TDataObject_virtual_00c(param_1,param_2);
  return;
}


/* ==== 0048ddf4 TStatic.virtual_004 ==== */

void TStatic_virtual_004(int *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined4 extraout_ECX_02;
  undefined1 extraout_DL;
  byte i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_12c = (undefined1 *)0x48de13;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_fffffed8,in_stack_fffffedc);
    local_5 = extraout_DL;
  }
  puStack_130 = &LAB_0048df2d;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puStack_12c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar5 = local_c;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar5,0);
  TDataObject_virtual_004(param_1,'\0',extraout_ECX);
  iVar2 = TSettings_virtual_004((int *)&PTR_TSettings_virtual_000_004a6010,'\x01');
  param_1[0xc] = iVar2;
  iVar2 = FUN_00402f6c((int *)&DAT_0048e778,'\x01',extraout_ECX_00);
  param_1[0xb] = iVar2;
  piVar3 = TDataList_virtual_018
                     ((int *)&PTR_TDataList_virtual_000_0045e240,'\x01',
                      (int)&PTR_TTrack_virtual_000_0046196c);
  param_1[0xd] = (int)piVar3;
  piVar3 = TDataList_virtual_018
                     ((int *)&PTR_TDataList_virtual_000_0045e240,'\x01',(int)&LAB_00460678);
  param_1[2] = (int)piVar3;
  piVar3 = FUN_00462444((int *)&PTR_TQuickRace_virtual_000_0048e948,'\x01',param_1[0xd],(int)piVar3)
  ;
  param_1[0xe] = (int)piVar3;
  piVar3 = FUN_00462444((int *)&PTR_TTourRace_virtual_000_00462b50,'\x01',param_1[0xd],param_1[2]);
  param_1[0xf] = (int)piVar3;
  i_val = 0;
  uVar4 = extraout_ECX_01;
  do {
    piVar3 = TDataObject_virtual_004((int *)&PTR_TTuneUp_virtual_000_004620fc,'\x01',uVar4);
    param_1[i_val + 6] = (int)piVar3;
    i_val = i_val + 1;
    uVar4 = extraout_ECX_02;
  } while (i_val != 5);
  uVar1 = FUN_0045f46c();
  TDebug_ExitProc(uVar1);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 0048df74 TStatic.Destroy ==== */

void TStatic_Destroy(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  byte extraout_DL;
  byte i_val;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  byte local_5;
  
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_11c = (undefined1 *)0x48df8c;
  piVar2 = FUN_004032fc(param_1,param_2);
  puStack_120 = &LAB_0048e070;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puStack_11c = &stack0xfffffffc;
  local_5 = extraout_DL;
  FUN_00402ee4(*piVar2,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar1 = local_c;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  FUN_0040c968(piVar2 + 0xe);
  FUN_0040c968(piVar2 + 0xf);
  FUN_0040c968(piVar2 + 0xb);
  FUN_0040c968(piVar2 + 0xc);
  FUN_0045e860(piVar2[0xd]);
  FUN_0040c968(piVar2 + 0xd);
  FUN_0045e860(piVar2[2]);
  FUN_0040c968(piVar2 + 2);
  i_val = 0;
  do {
    FUN_00402f9c((int *)piVar2[i_val + 6]);
    i_val = i_val + 1;
  } while (i_val != 5);
  TDataObject_Destroy(piVar2,local_5 & 0xfc);
  uVar3 = FUN_0045f46c();
  TDebug_ExitProc(uVar3);
  *in_FS_OFFSET = "Destroy";
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 0048e0ac TStatic.virtual_000 ==== */

void TStatic_virtual_000(int param_1)

{
  FUN_0045efa4(param_1,(undefined4 *)"FQuickRace",*(int **)(param_1 + 0x38));
  FUN_0045efa4(param_1,(undefined4 *)"FTrackList",*(int **)(param_1 + 0x34));
  return;
}


/* ==== 0048e0fc FUN_0048e0fc ==== */

void FUN_0048e0fc(int param_1,int param_2)

{
  FUN_0045e640(*(int *)(param_1 + 8),param_2);
  return;
}


/* ==== 0048e114 FUN_0048e114 ==== */

void FUN_0048e114(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0045e640(*(int *)(param_1 + 0x34),param_2);
  FUN_0040312c(piVar1,(int)&PTR_TTrack_virtual_000_0046196c);
  return;
}


/* ==== 0048e138 FUN_0048e138 ==== */

void FUN_0048e138(int param_1)

{
  FUN_0045e8a0(*(int *)(param_1 + 0x34));
  return;
}


/* ==== 0048e148 TStatic.LoadFromIniFile ==== */

void TStatic_LoadFromIniFile(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 uVar2;
  undefined4 extraout_ECX_05;
  int j;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined4 *puStack_15c;
  char *pcStack_158;
  undefined *puStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined4 *local_134;
  undefined4 *local_130;
  byte local_12c [256];
  int local_2c;
  undefined4 *local_28;
  byte m;
  int *local_20;
  byte k;
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_134 = (undefined4 *)0x0;
  local_130 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_2c = 0;
  local_18 = 0;
  puStack_144 = (undefined1 *)0x48e178;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_148 = &LAB_0048e41c;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  iStack_150 = 0x48e193;
  puStack_144 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_12c);
  iStack_150 = 0x48e1a1;
  FUN_00403e80(&local_2c,local_12c);
  iStack_150 = local_2c;
  puStack_154 = &DAT_0048e434;
  pcStack_158 = "LoadFromIniFile";
  puStack_15c = (undefined4 *)0x48e1bb;
  FUN_00403f9c((int *)&local_28,3);
  puStack_15c = local_28;
  puStack_160 = (undefined1 *)0x48e1c4;
  i_val = FUN_0045f46c();
  puVar1 = puStack_15c;
  puStack_15c = (undefined4 *)0x48e1d0;
  FUN_0045fb90(i_val,puVar1,0);
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  puStack_160 = &LAB_0048e3d0;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  puStack_168 = (undefined1 *)0x48e1f7;
  puStack_15c = (undefined4 *)&stack0xfffffffc;
  local_c = FUN_00457d38((int *)&PTR_TSafeIniFile_virtual_000_0046004c,'\x01',local_8);
  puStack_168 = (undefined1 *)0x48e206;
  local_10 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  puStack_16c = &LAB_0048e394;
  uStack_170 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_170;
  puStack_168 = &stack0xfffffffc;
  TGameValues_LoadFromIniFile((int *)param_1[0xb],local_c);
  (**(code **)*local_c)(local_c,"GENERAL","DownLoadURL",&local_130);
  FUN_00403cb0(param_1 + 0x10,local_130);
  FUN_0045e860(param_1[0xd]);
  i_val = (**(code **)(*local_c + 8))(local_c,"GENERAL","trackcount",0);
  uVar2 = extraout_ECX_00;
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
    uVar2 = extraout_ECX_01;
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      local_14 = TDataObject_virtual_004((int *)&PTR_TTrack_virtual_000_0046196c,'\x01',uVar2);
      TTrack_LoadFromIniFile(local_14,j);
      FUN_0045e7e4(param_1[0xd],local_14);
      j = j + 1;
      i_val = i_val - 1;
      uVar2 = extraout_ECX_02;
    } while (i_val != 0);
  }
  FUN_0045e860(param_1[2]);
  i_val = (**(code **)(*local_c + 8))(local_c,"GENERAL","charcount");
  uVar2 = extraout_ECX_03;
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
    uVar2 = extraout_ECX_04;
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      local_20 = TDataObject_virtual_004((int *)&LAB_00460678,'\x01',uVar2);
      FUN_004606d0(local_20,local_c,j);
      FUN_0045e7e4(param_1[2],local_20);
      j = j + 1;
      i_val = i_val - 1;
      uVar2 = extraout_ECX_05;
    } while (i_val != 0);
  }
  (**(code **)(*(int *)param_1[0xe] + 0x1c))((int *)param_1[0xe],local_c);
  (**(code **)(*(int *)param_1[0xf] + 0x1c))((int *)param_1[0xf],local_c);
  k = 0;
  do {
    i_val = (uint)k;
    FUN_004085ac(i_val,(int *)&local_134);
    FUN_00403f28(&local_18,(undefined4 *)"difficulty",local_134);
    j = (**(code **)(*local_c + 8))(local_c,"CheckPointTime",local_18,0x6e);
    param_1[i_val + 3] = j;
    k = k + 1;
  } while (k != 3);
  m = 0;
  k = 3;
  do {
    FUN_00462154(param_1[m + 6],local_c);
    m = m + 1;
  } while (m != 5);
  FUN_004a6de4(param_1[0xc],local_c);
  *in_FS_OFFSET = 0;
  *in_FS_OFFSET = "http//:www.davilex.nl";
  puStack_16c = &LAB_0048e3d7;
  uStack_170 = 0x48e3c7;
  FUN_00402f9c(local_c);
  uStack_170 = 0x48e3cf;
  FUN_00402f9c(local_10);
  return;
}


/* ==== 0048e510 TStatic.GetCharacterByGameIndex ==== */

void TStatic_GetCharacterByGameIndex(int *param_1,int param_2)

{
  undefined1 *puVar1;
  uint i_val;
  int iVar2;
  int j;
  undefined4 *in_FS_OFFSET;
  char *pcStack_14c;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  byte local_11c [256];
  int local_1c [3];
  char local_d;
  int local_c;
  int local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  puStack_130 = &LAB_0048e613;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (param_1 == (int *)0x0) {
    FUN_00403c40(" Self = nil: GetCharacterByGameIndex");
    puVar1 = puStack_12c;
  }
  puStack_12c = puVar1;
  local_c = 0;
  local_d = '\0';
  i_val = FUN_0048e6dc((int)param_1);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      iVar2 = FUN_0048e0fc((int)param_1,j);
      if (*(int *)(iVar2 + 0xc) == local_8) {
        local_d = '\x01';
        local_c = j;
        break;
      }
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  if (local_d != '\x01') {
    FUN_004085ac(local_8,local_1c + 1);
    FUN_00402ee4(*param_1,local_11c);
    FUN_00403e80(local_1c,local_11c);
    pcStack_14c = "GetCharacterByGameIndex";
    FUN_00403f9c(local_1c + 2,6);
    FUN_00403c40(local_1c[2]);
  }
  *in_FS_OFFSET = pcStack_14c;
  FUN_00403c80(local_1c,3);
  return;
}


/* ==== 0048e6d4 FUN_0048e6d4 ==== */

undefined4 FUN_0048e6d4(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + 0x18 + (param_2 & 0x7f) * 4);
}


/* ==== 0048e6dc FUN_0048e6dc ==== */

void FUN_0048e6dc(int param_1)

{
  FUN_0045e8a0(*(int *)(param_1 + 8));
  return;
}


/* ==== 0048e6ec FUN_0048e6ec ==== */

undefined4 FUN_0048e6ec(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + 0xc + (param_2 & 0x7f) * 4);
}


/* ==== 0048e6f4 FUN_0048e6f4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048e6f4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad44c = _DAT_004ad44c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0048e784 TGameValues.LoadFromIniFile ==== */

void TGameValues_LoadFromIniFile(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  puStack_120 = &LAB_0048e848;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar5 = &DAT_0048e860;
  pcVar4 = "LoadFromIniFile";
  iVar2 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar3 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,0);
  iVar2 = (**(code **)(*param_2 + 8))(param_2,"GAMEVALUES","TurboOilAmount",10,pcVar4,puVar5,iVar2);
  param_1[1] = iVar2;
  iVar2 = (**(code **)(*param_2 + 8))(param_2,"GAMEVALUES","FirstPlaceBonus");
  param_1[2] = iVar2;
  uVar1 = FUN_0045f46c();
  TDebug_ExitProc(uVar1);
  *in_FS_OFFSET = 0x9c4;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 0048e988 TQuickRace.virtual_000 ==== */

void TQuickRace_virtual_000(int param_1)

{
  TRace_virtual_000(param_1);
  FUN_0045f038(param_1,0x48e9b0,*(char *)(param_1 + 0x20));
  return;
}


/* ==== 0048e9cc TQuickRace.virtual_018 ==== */

void TQuickRace_virtual_018(undefined4 param_1,int *param_2)

{
  FUN_00403cb0(param_2,(undefined4 *)"QUICKRACE");
  return;
}


/* ==== 0048e9f8 TQuickRace.virtual_01c ==== */

void TQuickRace_virtual_01c(int *param_1,int *param_2)

{
  int *piVar1;
  int i_val;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 **ppuStack_34;
  char *pcStack_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  char *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  
  local_18 = &stack0xfffffffc;
  i_val = 5;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  local_1c = &LAB_0048eb50;
  local_20 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = (char *)0x48ea26;
  TRace_virtual_01c(param_1,param_2);
  local_24 = "DOWNLOADCAR";
  local_28 = &stack0xffffffec;
  local_2c = (undefined4 *)0x48ea3a;
  (**(code **)(*param_1 + 0x18))(param_1,&local_18);
  local_2c = (undefined4 *)0x48ea48;
  (**(code **)*param_2)(param_2,local_18,"DOWNLOADSECTION");
  local_2c = (undefined4 *)0x7;
  pcStack_30 = (char *)0x48ea55;
  (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
  pcStack_30 = (char *)0x48ea64;
  i_val = (**(code **)(*param_2 + 8))(param_2,local_1c,"DOWNLOADCHARIX");
  param_1[7] = i_val;
  pcStack_30 = "locked!";
  ppuStack_34 = &local_20;
  uStack_38 = 0x48ea7e;
  (**(code **)(*param_1 + 0x18))(param_1,&local_24);
  uStack_38 = 0x48ea8c;
  (**(code **)*param_2)(param_2,local_24,"LOCKEDCHARTEXT");
  uStack_38 = 0x48ea9a;
  FUN_00403cb0(param_1 + 9,local_20);
  uStack_38 = 5;
  puStack_3c = (undefined1 *)0x48eaa7;
  (**(code **)(*param_1 + 0x18))(param_1,&local_28);
  puStack_3c = (undefined1 *)0x48eab6;
  i_val = (**(code **)(*param_2 + 8))(param_2,local_28,"LOCKEDCHARIX");
  param_1[10] = i_val;
  puStack_3c = (undefined1 *)0x48ead6;
  FUN_00403f28((int *)&local_2c,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"L0_ANIM.INI");
  puStack_3c = (undefined1 *)0x48eae5;
  piVar1 = FUN_00457d38((int *)&PTR_TIniFile_virtual_000_00457cdc,'\x01',local_2c);
  puStack_40 = &LAB_0048eb21;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*piVar1 + 8))(piVar1,unaff_ESI,"Count");
  *in_FS_OFFSET = 0;
  puStack_40 = &LAB_0048eb28;
  uStack_44 = 0x48eb20;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 0048ed3c TMenuIni.virtual_004 ==== */

int * TMenuIni_virtual_004(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
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
  TDataObject_virtual_004(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[6] = iVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 0048ed84 TMenuIni.Destroy ==== */

void TMenuIni_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int i_val;
  int j;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  i_val = *(int *)(piVar1[6] + 8);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(piVar1[6]);
  }
  if (-1 < i_val + -1) {
    j = 0;
    do {
      piVar2 = (int *)FUN_0048f44c((int)piVar1,j);
      FUN_00402f9c(piVar2);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  FUN_00402f9c((int *)piVar1[6]);
  piVar1[6] = 0;
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0048edec TMenuIni.virtual_018 ==== */

void TMenuIni_virtual_018(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint j;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int k;
  int *in_FS_OFFSET;
  undefined4 **ppuVar2;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  int iStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined4 *local_138;
  int local_134;
  undefined4 *local_130;
  int local_12c;
  byte *local_128;
  uint *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_148 = &stack0xfffffffc;
  local_130 = (undefined4 *)0x0;
  local_134 = 0;
  local_138 = (undefined4 *)0x0;
  local_12c = 0;
  local_124 = (uint *)0x0;
  local_128 = (byte *)0x0;
  local_120 = (undefined4 *)0x0;
  local_11c = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_14c = &LAB_0048f073;
  iStack_150 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_150;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  puVar7 = &DAT_0048f08c;
  pcVar6 = "DoLoadFromFile";
  i_val = local_18;
  FUN_00403f9c((int *)&local_14,3);
  puVar5 = local_14;
  j = FUN_0045f46c();
  FUN_0045fb90(j,puVar5,0);
  i_val = (**(code **)(*local_c + 8))(local_c,"GENERAL","CURRENTPLAYER",0,pcVar6,puVar7,i_val);
  local_8[5] = i_val;
  uVar1 = (**(code **)(*local_c + 8))(local_c,"GENERAL","PREVSTATE",0);
  *(undefined1 *)((int)local_8 + 9) = uVar1;
  (**(code **)*local_c)(local_c,"FORMAT",&DAT_0048f0f0,&local_11c,0);
  FUN_00403cb0(local_8 + 3,local_11c);
  ppuVar4 = &local_120;
  (**(code **)*local_c)(local_c,"GENERAL","INTROAVI",ppuVar4,0);
  FUN_00403cb0(local_8 + 4,local_120);
  *(undefined1 *)(local_8 + 2) = 0;
  i_val = FUN_00402990();
  uVar1 = i_val == 0;
  if (0 < i_val) {
    k = 1;
    do {
      FUN_004029f0(k,(int *)&local_128);
      FUN_004081f0(local_128,(int *)&local_124);
      FUN_00403fec(local_124,(uint *)"/FIRSTTIME");
      if ((bool)uVar1) {
        *(undefined1 *)(local_8 + 2) = 1;
        *(undefined1 *)((int)local_8 + 9) = 0;
      }
      k = k + 1;
      i_val = i_val + -1;
      uVar1 = i_val == 0;
    } while (!(bool)uVar1);
  }
  j = FUN_0048e138(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc));
  uVar3 = extraout_ECX;
  if (SBORROW4(j,1)) {
    thunk_FUN_00402808(j);
    uVar3 = extraout_ECX_00;
  }
  if (-1 < (int)(j - 1)) {
    i_val = 0;
    do {
      local_10 = FUN_00402f6c((int *)&DAT_0048ec8c,'\x01',uVar3);
      uVar3 = 0;
      FUN_004085ac(i_val,&local_12c);
      uVar3 = (**(code **)(*local_c + 8))(local_c,"HIGHSCORES",local_12c,uVar3);
      *(undefined4 *)(local_10 + 4) = uVar3;
      pcVar6 = "<no name>";
      ppuVar2 = &local_130;
      FUN_004085ac(i_val,(int *)&local_138);
      FUN_00403f28(&local_134,(undefined4 *)&DAT_0048f160,local_138);
      (**(code **)*local_c)(local_c,"HIGHSCORES",local_134,ppuVar2,pcVar6);
      FUN_00403cb0((int *)(local_10 + 8),local_130);
      FUN_00410104((int *)local_8[6],local_10);
      i_val = i_val + 1;
      j = j - 1;
      uVar3 = extraout_ECX_01;
    } while (j != 0);
  }
  j = FUN_0045f46c();
  TDebug_ExitProc(j);
  *in_FS_OFFSET = (int)ppuVar4;
  FUN_00403c80((int *)&local_138,8);
  FUN_00403c80(&local_18,2);
  return;
}


/* ==== 0048f168 TMenuIni.virtual_01c ==== */

void TMenuIni_virtual_01c(int *param_1,int *param_2)

{
  uint uVar1;
  int j;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_150;
  undefined4 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 *local_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int i_val;
  int *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = (undefined4 *)0x0;
  local_118 = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_134 = &LAB_0048f328;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  puVar6 = &DAT_0048f340;
  pcVar5 = "DoSaveToFile";
  j = local_14;
  FUN_00403f9c((int *)&local_10,3);
  puVar4 = local_10;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar4,0);
  (**(code **)(*param_2 + 0xc))(param_2,"GENERAL","CURRENTPLAYER",local_8[5],pcVar5,puVar6,j);
  (**(code **)(*param_2 + 0xc))
            (param_2,"GENERAL","PREVSTATE",*(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8));
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\0') {
    uStack_150 = 0xff;
    (**(code **)(*param_2 + 0xc))(param_2,"GENERAL","EXITCODE");
  }
  else {
    uStack_150 = 0x28;
    (**(code **)(*param_2 + 0xc))(param_2,"GENERAL","EXITCODE");
  }
  j = FUN_0048e138(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc));
  uVar1 = j - 1;
  if (SBORROW4(j,1)) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)uVar1) {
    i_val = uVar1 + 1;
    j = 0;
    do {
      iVar2 = FUN_0048f44c((int)local_8,j);
      uVar3 = *(undefined4 *)(iVar2 + 4);
      FUN_004085ac(j,&local_118);
      (**(code **)(*param_2 + 0xc))(param_2,"HIGHSCORES",local_118,uVar3);
      iVar2 = FUN_0048f44c((int)local_8,j);
      uVar3 = *(undefined4 *)(iVar2 + 8);
      FUN_004085ac(j,(int *)&local_120);
      FUN_00403f28(&local_11c,(undefined4 *)&DAT_0048f3cc,local_120);
      (**(code **)(*param_2 + 4))(param_2,"HIGHSCORES",local_11c,uVar3);
      j = j + 1;
      i_val = i_val + -1;
    } while (i_val != 0);
  }
  *in_FS_OFFSET = uStack_150;
  FUN_00403c80((int *)&local_120,3);
  FUN_00403c80(&local_14,2);
  return;
}


/* ==== 0048f3d4 TMenuIni.virtual_000 ==== */

void TMenuIni_virtual_000(int param_1)

{
  FUN_0045f038(param_1,0x48f414,*(char *)(param_1 + 8));
  FUN_0045ef0c(param_1,0x48f428,(uint)*(byte *)(param_1 + 9));
  FUN_0045ef0c(param_1,0x48f43c,*(undefined4 *)(param_1 + 0x14));
  return;
}


/* ==== 0048f44c FUN_0048f44c ==== */

void FUN_0048f44c(int param_1,int param_2)

{
  FUN_004102b0(*(undefined4 **)(param_1 + 0x18),param_2);
  return;
}


/* ==== 0048f464 FUN_0048f464 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f464(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad458 = _DAT_004ad458 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0048f49c FUN_0048f49c ==== */

void FUN_0048f49c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\v';
  puVar2 = &DAT_004ad460;
  do {
    FUN_00402f9c((int *)*puVar2);
    puVar2 = puVar2 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}


/* ==== 0048f760 FUN_0048f760 ==== */

int FUN_0048f760(int param_1)

{
  int iVar1;
  int i_val;
  int j;
  int local_8;
  
  local_8 = 0;
  if (DAT_004ad490 != (undefined4 *)0x0) {
    i_val = DAT_004ad490[2];
    if (SBORROW4(i_val,1)) {
      thunk_FUN_00402808((uint)DAT_004ad490);
    }
    if (-1 < i_val + -1) {
      j = 0;
      do {
        iVar1 = FUN_004102b0(DAT_004ad490,j);
        if (param_1 == *(int *)(iVar1 + 4)) {
          local_8 = *(int *)(iVar1 + 8);
          break;
        }
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
  }
  if (local_8 == 0) {
    local_8 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)PTR_DAT_004ab8ac);
  }
  return local_8;
}


/* ==== 0048f7d0 TSingletonForm.virtual_02c ==== */

int * TSingletonForm_virtual_02c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TCaptionForm_virtual_02c(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)&LAB_0048f750,'\x01',extraout_ECX_00);
  uVar2 = FUN_00402ee0(param_1);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  *(int **)(iVar1 + 8) = param_1;
  if (DAT_004ad490 == (int *)0x0) {
    DAT_004ad490 = (int *)FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_01
                                      );
  }
  FUN_00410104(DAT_004ad490,iVar1);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0048f850 TSingletonForm.Destroy ==== */

void TSingletonForm_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte extraout_DL;
  int i_val;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (DAT_004ad490 != (int *)0x0) {
    i_val = DAT_004ad490[2] + -1;
    if (SBORROW4(DAT_004ad490[2],1)) {
      thunk_FUN_00402808((uint)DAT_004ad490);
    }
    if (-1 < i_val) {
      do {
        iVar2 = FUN_004102b0(DAT_004ad490,i_val);
        iVar3 = FUN_00402ee0(piVar1);
        if (iVar3 == *(int *)(iVar2 + 4)) {
          FUN_00410150(DAT_004ad490,i_val);
          break;
        }
        i_val = i_val + -1;
      } while (i_val != -1);
    }
    if (DAT_004ad490[2] == 0) {
      FUN_00402f9c(DAT_004ad490);
      DAT_004ad490 = (int *)0x0;
    }
  }
  TCustomForm_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0048f8ec FUN_0048f8ec ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048f8ec(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad48c = _DAT_004ad48c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


