/* Menu.exe — units/GDIGraphic.pas: 58 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004617a0 FUN_004617a0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004617a0(void)

{
  double *pdVar1;
  int i_val;
  float10 fVar2;
  
  i_val = 0;
  pdVar1 = (double *)&DAT_004ac938;
  do {
    fVar2 = _DAT_004617e8 * ((float10)i_val / (float10)256.0) * (float10)2.0;
    FUN_00402a84();
    *pdVar1 = (double)fVar2;
    i_val = i_val + 1;
    pdVar1 = pdVar1 + 1;
  } while (i_val != 0x100);
  return;
}


/* ==== 004617f4 FUN_004617f4 ==== */

void FUN_004617f4(void)

{
  int i_val;
  HMODULE hLibModule;
  int j;
  
  if (DAT_004ad138 != (int *)0x0) {
    i_val = (**(code **)(*DAT_004ad138 + 0x14))();
    if (-1 < i_val + -1) {
      j = 0;
      do {
        hLibModule = (HMODULE)(**(code **)(*DAT_004ad138 + 0x18))(DAT_004ad138,j);
        FreeLibrary(hLibModule);
        j = j + 1;
        i_val = i_val + -1;
      } while (i_val != 0);
    }
    FUN_00402f9c(DAT_004ad138);
  }
  return;
}


/* ==== 0046189c FUN_0046189c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046189c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad13c = _DAT_004ad13c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 004619c0 FUN_004619c0 ==== */

void FUN_004619c0(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  int local_8;
  
  local_c = 0;
  puStack_14 = (undefined1 *)0x4619d9;
  local_8 = param_1;
  FUN_00404090(param_1);
  puStack_18 = &LAB_00461a30;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004085ac(*(undefined4 *)(*(int *)(param_4 + -8) + 0x44),&local_c);
  iVar1 = local_8;
  FUN_00403f9c(param_2,4);
  *in_FS_OFFSET = iVar1;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00461a4c FUN_00461a4c ==== */

void FUN_00461a4c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined *local_28;
  undefined1 *puVar2;
  undefined *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined *local_10;
  undefined4 local_c;
  int local_8;
  
  puVar2 = &stack0xfffffffc;
  local_10 = (undefined *)0x4;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != (undefined *)0x0);
  local_18 = (undefined1 *)0x461a6b;
  local_c = param_1;
  local_8 = param_2;
  FUN_00404090(param_2);
  local_1c = &LAB_00461b67;
  local_20 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_28 = (undefined *)0x461a87;
  local_18 = &stack0xfffffffc;
  FUN_004619c0(0x461b80,(int *)&local_10,extraout_ECX,(int)&stack0xfffffffc);
  uVar1 = FUN_004087a4(local_10);
  if ((char)uVar1 != '\0') {
    local_28 = (undefined *)0x461aa6;
    FUN_004619c0(0x461b90,(int *)&stack0xffffffec,extraout_ECX_00,(int)&stack0xfffffffc);
    uVar1 = FUN_004087a4(unaff_EBX);
    if ((char)uVar1 != '\0') {
      local_28 = (undefined *)0x461ac5;
      FUN_004619c0(0x461ba0,(int *)&local_18,extraout_ECX_01,(int)&stack0xfffffffc);
      uVar1 = FUN_004087a4(local_18);
      if ((char)uVar1 != '\0') {
        local_28 = (undefined *)0x461ae0;
        FUN_004619c0(0x461bb0,(int *)&local_1c,extraout_ECX_02,(int)&stack0xfffffffc);
        uVar1 = FUN_004087a4(local_1c);
        if ((char)uVar1 != '\0') {
          local_28 = (undefined *)0x461afb;
          FUN_004619c0(0x461bc0,(int *)&local_20,extraout_ECX_03,(int)&stack0xfffffffc);
          uVar1 = FUN_004087a4(local_20);
          if ((char)uVar1 != '\0') {
            local_28 = (undefined *)0x461b16;
            FUN_004619c0(0x461bd0,(int *)&stack0xffffffdc,extraout_ECX_04,(int)&stack0xfffffffc);
            uVar1 = FUN_004087a4(puVar2);
            if ((char)uVar1 != '\0') {
              local_28 = (undefined *)0x461b31;
              FUN_004619c0(0x461be0,(int *)&local_28,extraout_ECX_05,(int)&stack0xfffffffc);
              FUN_004087a4(local_28);
            }
          }
        }
      }
    }
  }
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_00461b6e;
  local_1c = (undefined1 *)0x461b5e;
  FUN_00403c80((int *)&local_28,7);
  local_1c = (undefined1 *)0x461b66;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 00461be8 TTrack.virtual_000 ==== */

void TTrack_virtual_000(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00461c45;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00403e80(&local_8,(byte *)(param_1 + 0xc));
  FUN_0045ee68(param_1,0x461c58,local_8);
  uVar1 = FUN_00461c7c(param_1,0);
  FUN_0045ef0c(param_1,0x461c68,uVar1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00461c4c;
  puStack_14 = (undefined1 *)0x461c44;
  FUN_00403c5c(&local_8);
  return;
}


/* ==== 00461c7c FUN_00461c7c ==== */

undefined4 FUN_00461c7c(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + 0x5c + (param_2 & 0x7f) * 4);
}


/* ==== 00461c84 FUN_00461c84 ==== */

bool FUN_00461c84(int param_1)

{
  return 0 < *(int *)(param_1 + 0x5c);
}


/* ==== 00461c8c FUN_00461c8c ==== */

void FUN_00461c8c(int *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int i_val;
  undefined4 extraout_ECX;
  byte j;
  undefined4 *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  byte *local_140;
  byte *local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  byte local_11c [152];
  undefined4 uStackY_84;
  int *piVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  i_val = 0x27;
  do {
    local_c = 0;
    i_val = i_val + -1;
  } while (i_val != 0);
  LOCK();
  UNLOCK();
  local_8 = (int *)0x0;
  puStack_24 = &LAB_00461f54;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80((int *)&stack0xffffffe4,local_11c);
  FUN_00403f9c((int *)&stack0xffffffe8,3);
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,unaff_ESI,0);
  param_1[2] = param_2;
  FUN_004085ac(param_2,(int *)&local_120);
  FUN_00403f28(&local_c,(undefined4 *)"track",local_120);
  (**(code **)*local_8)(local_8,local_c,&DAT_00461fb0);
  FUN_00403eb8(local_11c,local_124,0xff);
  FUN_00402b0c((byte *)(param_1 + 3),local_11c,0x20);
  (**(code **)*local_8)(local_8,local_c,"story");
  FUN_00403cb0(param_1 + 0xd,local_128);
  (**(code **)*local_8)(local_8,local_c,&DAT_00461fd0);
  FUN_00403cb0(param_1 + 0xc,local_12c);
  i_val = (**(code **)(*local_8 + 8))(local_8,local_c,"nrlaps");
  param_1[0x12] = i_val;
  uVar1 = (**(code **)(*local_8 + 0x10))(local_8,local_c,"british");
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  (**(code **)*local_8)(local_8,local_c,"wintext");
  FUN_00403cb0(param_1 + 0xe,local_130);
  (**(code **)*local_8)(local_8,local_c,"QualifyText");
  FUN_00403cb0(param_1 + 0x10,local_134);
  (**(code **)*local_8)(local_8,local_c,"losetext");
  FUN_00403cb0(param_1 + 0xf,local_138);
  i_val = (**(code **)(*local_8 + 8))(local_8,local_c,"indexingame");
  param_1[0x11] = i_val;
  piVar3 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  FUN_004603e0(local_8,local_c,"qualifyposition",&local_10,piVar3);
  j = 0;
  do {
    (**(code **)(*piVar3 + 0xc))(piVar3,j,&local_13c);
    i_val = FUN_00408618(local_13c);
    param_1[j + 0x14] = i_val;
    j = j + 1;
  } while (j != 3);
  piVar4 = &local_10;
  uStackY_84 = 0x461edd;
  FUN_004603e0(local_8,local_c,"chasetime",piVar4,piVar3);
  j = 0;
  do {
    uStackY_84 = 0x461ef1;
    (**(code **)(*piVar3 + 0xc))(piVar3,j,&local_140);
    uStackY_84 = 0x461efc;
    i_val = FUN_00408618(local_140);
    param_1[j + 0x17] = i_val;
    j = j + 1;
  } while (j != 3);
  uStackY_84 = 0x461f12;
  FUN_00402f9c(piVar3);
  uStackY_84 = 0x461f17;
  uVar2 = FUN_0045f46c();
  uStackY_84 = 0x461f1c;
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = piVar4;
  FUN_00403c80((int *)&local_140,9);
  FUN_00403c80((int *)&stack0xffffffe4,2);
  FUN_00403c80(&local_10,2);
  return;
}


/* ==== 00462070 FUN_00462070 ==== */

undefined4 FUN_00462070(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + 0x50 + (param_2 & 0x7f) * 4);
}


/* ==== 00462078 FUN_00462078 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462078(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad14c = _DAT_004ad14c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00462130 TTuneUp.virtual_000 ==== */

void TTuneUp_virtual_000(int param_1)

{
  FUN_0045ef0c(param_1,0x46214c,*(undefined4 *)(param_1 + 0x30));
  return;
}


/* ==== 00462154 FUN_00462154 ==== */

void FUN_00462154(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  int *in_FS_OFFSET;
  undefined4 *local_13c;
  undefined4 *local_138;
  byte *local_134;
  byte *local_130;
  byte *local_12c;
  byte *local_128;
  byte *local_124;
  undefined4 *local_120;
  byte local_11c [220];
  undefined4 uStackY_40;
  undefined4 **ppuStackY_3c;
  undefined1 *puStackY_38;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int i_val;
  int local_10;
  undefined3 uStack_c;
  byte local_9;
  undefined4 *local_8;
  
  puStack_24 = &stack0xfffffffc;
  i_val = 0x26;
  do {
    i_val = i_val + -1;
  } while (i_val != 0);
  LOCK();
  UNLOCK();
  uStack_c = 0;
  local_9 = 0;
  puStack_28 = &LAB_0046231d;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  local_8 = param_2;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',0);
  FUN_00403cf4((int *)&stack0xffffffe8,0x462334);
  FUN_004085ac((uint)local_9,(int *)&stack0xffffffe4);
  FUN_00403f28(&i_val,(undefined4 *)"specs",unaff_ESI);
  puStackY_38 = (undefined1 *)0x4621cc;
  FUN_004603e0(local_8,unaff_EBX,i_val,&local_10,piVar1);
  puStackY_38 = (undefined1 *)0x4621db;
  (**(code **)(*piVar1 + 0xc))(piVar1,0,&local_120);
  puStackY_38 = (undefined1 *)0x4621f1;
  FUN_00403eb8(local_11c,local_120,0xff);
  puStackY_38 = (undefined1 *)0x462201;
  FUN_00402b0c((byte *)(param_1 + 8),local_11c,0x20);
  puStackY_38 = (undefined1 *)0x462213;
  (**(code **)(*piVar1 + 0xc))(piVar1,1,&local_124);
  puStackY_38 = (undefined1 *)0x46221e;
  uVar2 = FUN_00408618(local_124);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  puStackY_38 = (undefined1 *)0x462233;
  (**(code **)(*piVar1 + 0xc))(piVar1,2,&local_128);
  puStackY_38 = (undefined1 *)0x46223e;
  uVar2 = FUN_00408618(local_128);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  puStackY_38 = (undefined1 *)0x462253;
  (**(code **)(*piVar1 + 0xc))(piVar1,3,&local_12c);
  puStackY_38 = (undefined1 *)0x46225e;
  uVar2 = FUN_00408618(local_12c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  puStackY_38 = (undefined1 *)0x462273;
  (**(code **)(*piVar1 + 0xc))(piVar1,4,&local_130);
  puStackY_38 = (undefined1 *)0x46227e;
  uVar2 = FUN_00408618(local_130);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  puStackY_38 = (undefined1 *)0x462293;
  (**(code **)(*piVar1 + 0xc))(piVar1,5,&local_134);
  puStackY_38 = (undefined1 *)0x46229e;
  uVar2 = FUN_00408618(local_134);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  puStackY_38 = (undefined1 *)0x4622b1;
  FUN_004085ac((uint)local_9,(int *)&local_138);
  puStackY_38 = (undefined1 *)0x4622c4;
  FUN_00403f28(&i_val,(undefined4 *)&DAT_00462354,local_138);
  puStackY_38 = &LAB_00462364;
  ppuStackY_3c = &local_13c;
  uStackY_40 = 0x4622dd;
  (**(code **)*local_8)(local_8,unaff_EBX,i_val);
  uStackY_40 = 0x4622eb;
  FUN_00403cb0((int *)(param_1 + 0x2c),local_13c);
  uStackY_40 = 0x4622f2;
  FUN_00402f9c(piVar1);
  *in_FS_OFFSET = (int)ppuStackY_3c;
  puStackY_38 = (undefined1 *)0x46230f;
  FUN_00403c80((int *)&local_13c,8);
  puStackY_38 = (undefined1 *)0x46231c;
  FUN_00403c80((int *)&stack0xffffffe4,4);
  return;
}


/* ==== 00462414 FUN_00462414 ==== */

void FUN_00462414(int param_1,int param_2)

{
  FUN_0045e990(*(int *)(param_1 + 0xc),param_2);
  return;
}


/* ==== 00462424 FUN_00462424 ==== */

void FUN_00462424(int param_1,int param_2)

{
  FUN_0045e990(*(int *)(param_1 + 8),param_2);
  return;
}


/* ==== 00462434 FUN_00462434 ==== */

void FUN_00462434(int param_1)

{
  FUN_0045eb28(*(int *)(param_1 + 0xc));
  return;
}


/* ==== 00462444 FUN_00462444 ==== */

int * FUN_00462444(int *param_1,char param_2,int param_3,int param_4)

{
  int *piVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined4 extraout_ECX_02;
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
  TDataObject_virtual_004(param_1,'\0',param_3);
  uVar2 = extraout_ECX_00;
  if (param_3 == 0) {
    FUN_00403c40("aTrackList  =  nil");
    uVar2 = extraout_ECX_01;
  }
  piVar1 = TIntegerList_virtual_004((int *)&PTR_TIntegerList_virtual_000_0045e2b4,'\x01',uVar2);
  param_1[2] = (int)piVar1;
  piVar1 = TIntegerList_virtual_004
                     ((int *)&PTR_TIntegerList_virtual_000_0045e2b4,'\x01',extraout_ECX_02);
  param_1[3] = (int)piVar1;
  param_1[5] = param_3;
  param_1[6] = param_4;
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00462504 TRace.Destroy ==== */

void TRace_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0045eb18(piVar1[2]);
  FUN_0040c968(piVar1 + 2);
  FUN_0045eb18(piVar1[3]);
  FUN_0040c968(piVar1 + 3);
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00462550 TRace.virtual_000 ==== */

void TRace_virtual_000(int param_1)

{
  FUN_0045efa4(param_1,(undefined4 *)"FCharIxList",*(int **)(param_1 + 0xc));
  FUN_0045efa4(param_1,(undefined4 *)"FTrackIxList",*(int **)(param_1 + 8));
  return;
}


/* ==== 004625a4 FUN_004625a4 ==== */

void FUN_004625a4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00462434(param_1);
  if (iVar1 <= param_2) {
    FUN_00403c40("illegal index");
  }
  iVar1 = FUN_0045e990(*(int *)(param_1 + 0xc),param_2);
  FUN_0045e640(*(int *)(param_1 + 0x18),iVar1);
  return;
}


/* ==== 00462620 FUN_00462620 ==== */

void FUN_00462620(int *param_1,int param_2)

{
  int iVar1;
  uint i_val;
  int iVar2;
  int j;
  int *in_FS_OFFSET;
  int iVar3;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 *local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  int local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_134 = &LAB_00462740;
  puStack_138 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_138;
  local_14 = *(undefined4 *)(param_2 + 8);
  local_10 = 0;
  iVar3 = 0;
  local_8 = param_2;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  FUN_00403ee4(&local_18,(undefined4 *)".GetRaceIndex");
  iVar1 = local_18;
  i_val = FUN_0045f46c();
  FUN_0045fa3c(i_val,iVar1,2,iVar3);
  local_c = -1;
  i_val = FUN_00462abc((int)param_1);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  iVar1 = local_c;
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      iVar2 = FUN_004627d0((int)param_1,j);
      iVar1 = j;
      if (iVar2 == local_8) break;
      j = j + 1;
      i_val = i_val - 1;
      iVar1 = local_c;
    } while (i_val != 0);
  }
  local_c = iVar1;
  if (local_c < 0) {
    FUN_004085ac(*(undefined4 *)(local_8 + 8),(int *)&local_120);
    FUN_00403f28(&local_11c,(undefined4 *)"GetRaceIndex : Track not found in Race. AbsIndex = ",
                 local_120);
    FUN_00403c40(local_11c);
  }
  *in_FS_OFFSET = iVar3;
  puStack_138 = &LAB_00462747;
  FUN_00403c80((int *)&local_120,2);
  FUN_00403c5c(&local_18);
  return;
}


/* ==== 004627d0 FUN_004627d0 ==== */

void FUN_004627d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00462abc(param_1);
  if (iVar1 <= param_2) {
    FUN_00403c40("illegal index");
  }
  iVar1 = FUN_0045e990(*(int *)(param_1 + 8),param_2);
  FUN_0045e640(*(int *)(param_1 + 0x14),iVar1);
  return;
}


/* ==== 0046284c TRace.virtual_01c ==== */

void TRace_virtual_01c(int *param_1,int *param_2)

{
  uint j;
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  byte *local_134;
  undefined4 local_130;
  int local_12c;
  byte *local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int i_val;
  int *local_c;
  int *local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_134 = (byte *)0x0;
  local_12c = 0;
  local_130 = 0;
  local_128 = (byte *)0x0;
  local_120 = 0;
  local_124 = 0;
  local_11c = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_148 = &LAB_00462a56;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  local_8 = param_2;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  puVar6 = &DAT_00462a6c;
  pcVar5 = "LoadFromIni";
  iVar1 = local_18;
  FUN_00403f9c((int *)&local_14,3);
  puVar4 = local_14;
  j = FUN_0045f46c();
  FUN_0045fb90(j,puVar4,0);
  (**(code **)(*param_1 + 0x18))(param_1,&local_11c,*param_1,0,pcVar5,puVar6,iVar1);
  iVar1 = (**(code **)(*local_8 + 8))(local_8,local_11c,"defaultchar");
  param_1[4] = iVar1;
  local_c = (int *)FUN_00402f6c((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',extraout_ECX);
  FUN_0045eb18(param_1[2]);
  piVar2 = &local_120;
  piVar3 = local_c;
  (**(code **)(*param_1 + 0x18))(param_1,&local_124);
  FUN_004603e0(local_8,local_124,"trackix",piVar2,piVar3);
  j = (**(code **)(*local_c + 0x14))();
  if (SBORROW4(j,1)) {
    thunk_FUN_00402808(j);
  }
  if (-1 < (int)(j - 1)) {
    i_val = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,i_val,&local_128);
      iVar1 = FUN_00408618(local_128);
      FUN_0045eb08(param_1[2],iVar1);
      i_val = i_val + 1;
      j = j - 1;
    } while (j != 0);
  }
  FUN_0045eb18(param_1[3]);
  piVar2 = &local_12c;
  piVar3 = local_c;
  (**(code **)(*param_1 + 0x18))(param_1,&local_130);
  FUN_004603e0(local_8,local_130,"charix",piVar2,piVar3);
  j = (**(code **)(*local_c + 0x14))();
  if (SBORROW4(j,1)) {
    thunk_FUN_00402808(j);
  }
  if (-1 < (int)(j - 1)) {
    i_val = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,i_val,&local_134);
      iVar1 = FUN_00408618(local_134);
      FUN_0045eb08(param_1[3],iVar1);
      i_val = i_val + 1;
      j = j - 1;
    } while (j != 0);
  }
  FUN_00402f9c(local_c);
  j = FUN_0045f46c();
  FUN_0045fc70(j);
  *in_FS_OFFSET = piVar2;
  FUN_00403c80((int *)&local_134,7);
  FUN_00403c80(&local_18,2);
  return;
}


/* ==== 00462abc FUN_00462abc ==== */

void FUN_00462abc(int param_1)

{
  FUN_0045eb28(*(int *)(param_1 + 8));
  return;
}


/* ==== 00462b7c TTourRace.virtual_000 ==== */

void TTourRace_virtual_000(int param_1)

{
  TRace_virtual_000(param_1);
  return;
}


/* ==== 00462b88 TTourRace.virtual_018 ==== */

void TTourRace_virtual_018(undefined4 param_1,int *param_2)

{
  FUN_00403cb0(param_2,(undefined4 *)"TOURRACE");
  return;
}


/* ==== 00462c48 FUN_00462c48 ==== */

void FUN_00462c48(int *param_1,char param_2,int param_3,int param_4)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffec,in_stack_fffffff0);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  param_1[2] = param_3;
  param_1[1] = param_4;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffec;
  }
  return;
}


/* ==== 00462c78 FUN_00462c78 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462c78(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ad15c = _DAT_004ad15c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00462cb0 xvga_init_fileio ==== */

void xvga_init_fileio(void)

{
                    /* WARNING: Could not recover jumptable at 0x00462cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xvga_init_fileio();
  return;
}


/* ==== 00462cb8 xvga_exit_fileio ==== */

void xvga_exit_fileio(void)

{
                    /* WARNING: Could not recover jumptable at 0x00462cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xvga_exit_fileio();
  return;
}


/* ==== 00462cc0 xvga_src_fopen ==== */

void xvga_src_fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00462cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xvga_src_fopen();
  return;
}


/* ==== 00462cc8 xvga_src_fclose ==== */

void xvga_src_fclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x00462cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xvga_src_fclose();
  return;
}


/* ==== 00462cd0 xvga_src_filelength ==== */

void xvga_src_filelength(void)

{
                    /* WARNING: Could not recover jumptable at 0x00462cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xvga_src_filelength();
  return;
}


/* ==== 00462cd8 xvga_file_exist ==== */

void xvga_file_exist(void)

{
                    /* WARNING: Could not recover jumptable at 0x00462cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xvga_file_exist();
  return;
}


/* ==== 00462ce0 xvga_get_filehandle ==== */

void xvga_get_filehandle(void)

{
                    /* WARNING: Could not recover jumptable at 0x00462ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xvga_get_filehandle();
  return;
}


/* ==== 00462d80 FUN_00462d80 ==== */

void FUN_00462d80(int *param_1,undefined *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_168;
  undefined1 *puStackY_164;
  undefined1 *puStackY_160;
  char *pcStackY_15c;
  char *pcStackY_158;
  undefined *puStackY_154;
  int iStackY_150;
  char *pcVar3;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined1 local_10;
  int *local_c;
  undefined *local_8;
  
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_130 = (undefined1 *)0x462dae;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_134 = &LAB_00462ee7;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_130 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar3 = "GetBitmap";
  iStackY_150 = 0x462e01;
  FUN_00403f9c(&local_18,3);
  iStackY_150 = local_18;
  puStackY_154 = (undefined *)0x462e0a;
  uVar2 = FUN_0045f46c();
  iVar1 = iStackY_150;
  iStackY_150 = 0x462e16;
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar3);
  if (param_3 == (int *)0x0) {
    iStackY_150 = 0x462e27;
    FUN_00402ee4(*param_1,local_11c);
    iStackY_150 = 0x462e38;
    FUN_00403e80(&local_124,local_11c);
    iStackY_150 = local_124;
    puStackY_154 = &DAT_00462efc;
    pcStackY_158 = "GetBitmap";
    pcStackY_15c = " aBitmap = nil";
    puStackY_160 = (undefined1 *)0x462e5d;
    FUN_00403f9c(&local_120,4);
    puStackY_160 = (undefined1 *)0x462e72;
    FUN_00403c40(local_120);
  }
  puStackY_160 = (undefined1 *)0x462e7c;
  local_c = (int *)FUN_004635b8(param_1,local_8);
  puStackY_164 = &LAB_00462ead;
  uStackY_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_168;
  puStackY_160 = &stack0xfffffffc;
  (**(code **)(*param_3 + 0x50))(param_3,local_c);
  *in_FS_OFFSET = uStackY_168;
  puStackY_160 = &LAB_00462eb4;
  puStackY_164 = (undefined1 *)0x462eac;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 00462f5c FUN_00462f5c ==== */

void FUN_00462f5c(int *param_1,undefined *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_168;
  undefined1 *puStackY_164;
  undefined1 *puStackY_160;
  char *pcStackY_15c;
  char *pcStackY_158;
  undefined *puStackY_154;
  int iStackY_150;
  char *pcVar3;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined1 local_10;
  int *local_c;
  undefined *local_8;
  
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_130 = (undefined1 *)0x462f8a;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_134 = &LAB_004630cd;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_130 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar3 = "GetWav";
  iStackY_150 = 0x462fdd;
  FUN_00403f9c(&local_18,3);
  iStackY_150 = local_18;
  puStackY_154 = (undefined *)0x462fe6;
  uVar2 = FUN_0045f46c();
  iVar1 = iStackY_150;
  iStackY_150 = 0x462ff2;
  FUN_0045fa3c(uVar2,iVar1,0,(int)pcVar3);
  if (param_3 == 0) {
    iStackY_150 = 0x463003;
    FUN_00402ee4(*param_1,local_11c);
    iStackY_150 = 0x463014;
    FUN_00403e80(&local_124,local_11c);
    iStackY_150 = local_124;
    puStackY_154 = &DAT_004630e4;
    pcStackY_158 = "GetWav";
    pcStackY_15c = " aWave = nil";
    puStackY_160 = (undefined1 *)0x463039;
    FUN_00403f9c(&local_120,4);
    puStackY_160 = (undefined1 *)0x46304e;
    FUN_00403c40(local_120);
  }
  puStackY_160 = (undefined1 *)0x463058;
  local_c = (int *)FUN_004635b8(param_1,local_8);
  puStackY_164 = &LAB_00463089;
  uStackY_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_168;
  puStackY_160 = &stack0xfffffffc;
  FUN_004543d0(param_3,local_c);
  *in_FS_OFFSET = uStackY_168;
  puStackY_160 = &LAB_00463090;
  puStackY_164 = (undefined1 *)0x463088;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 00463140 FUN_00463140 ==== */

void FUN_00463140(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_13c;
  undefined1 *puStackY_138;
  undefined1 *puStackY_134;
  undefined4 in_stack_fffffed0;
  undefined4 in_stack_fffffed4;
  undefined *local_118;
  undefined *local_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_114 = (undefined *)0x0;
  local_118 = (undefined *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  if (param_2 != '\0') {
    puStackY_134 = (undefined1 *)0x46316b;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed0,in_stack_fffffed4);
    param_3 = extraout_ECX;
  }
  puStackY_134 = (undefined1 *)0x46317a;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  puStackY_138 = &LAB_0046324c;
  uStackY_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_13c;
  puStackY_134 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar1 = local_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_00402f6c(param_1,'\0',extraout_ECX_00);
  FUN_00403f28((int *)&local_114,local_8,(undefined4 *)&DAT_00463298);
  FUN_004040a0(local_114);
  FUN_00403f28((int *)&local_118,local_8,(undefined4 *)&DAT_004632a8);
  FUN_004040a0(local_118);
  xvga_init_fileio();
  *in_FS_OFFSET = "Create";
  FUN_00403c80((int *)&local_118,2);
  FUN_00403c80(&local_10,3);
  return;
}


/* ==== 004632b0 TResourceManager.Destroy ==== */

void TResourceManager_Destroy(int *param_1,char param_2)

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
  puStack_118 = (undefined1 *)0x4632c8;
  piVar2 = FUN_004032fc(param_1,param_2);
  puStack_11c = &LAB_00463350;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  FUN_00402ee4(*piVar2,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,2);
  xvga_exit_fileio();
  TObject_Destroy(piVar2,extraout_DL & 0xfc);
  *in_FS_OFFSET = "Destroy";
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 00463388 FUN_00463388 ==== */

void FUN_00463388(undefined4 param_1,undefined *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined *local_8;
  
  puStack_10 = (undefined1 *)0x463398;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_14 = &LAB_004633cd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_004040a0(local_8);
  xvga_file_exist();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004633d4;
  puStack_14 = (undefined1 *)0x4633cc;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004633dc FUN_004633dc ==== */

void FUN_004633dc(int *param_1,undefined *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_168;
  undefined1 *puStackY_164;
  undefined1 *puStackY_160;
  char *pcStackY_15c;
  char *pcStackY_158;
  undefined *puStackY_154;
  int iStackY_150;
  char *pcVar3;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined1 local_10;
  int *local_c;
  undefined *local_8;
  
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_130 = (undefined1 *)0x46340a;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_134 = &LAB_00463543;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_130 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar3 = "GetTarga";
  iStackY_150 = 0x46345d;
  FUN_00403f9c(&local_18,3);
  iStackY_150 = local_18;
  puStackY_154 = (undefined *)0x463466;
  uVar2 = FUN_0045f46c();
  iVar1 = iStackY_150;
  iStackY_150 = 0x463472;
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar3);
  if (param_3 == (int *)0x0) {
    iStackY_150 = 0x463483;
    FUN_00402ee4(*param_1,local_11c);
    iStackY_150 = 0x463494;
    FUN_00403e80(&local_124,local_11c);
    iStackY_150 = local_124;
    puStackY_154 = &DAT_00463558;
    pcStackY_158 = "GetTarga";
    pcStackY_15c = " aTarga = nil";
    puStackY_160 = (undefined1 *)0x4634b9;
    FUN_00403f9c(&local_120,4);
    puStackY_160 = (undefined1 *)0x4634ce;
    FUN_00403c40(local_120);
  }
  puStackY_160 = (undefined1 *)0x4634d8;
  local_c = (int *)FUN_004635b8(param_1,local_8);
  puStackY_164 = &LAB_00463509;
  uStackY_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_168;
  puStackY_160 = &stack0xfffffffc;
  (**(code **)(*param_3 + 0x50))(param_3,local_c);
  *in_FS_OFFSET = uStackY_168;
  puStackY_160 = &LAB_00463510;
  puStackY_164 = (undefined1 *)0x463508;
  FUN_00402f9c(local_c);
  return;
}


/* ==== 004635b8 FUN_004635b8 ==== */

void FUN_004635b8(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 src_fopen;
  int filehandle;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  undefined *local_8;
  
  local_c = 0;
  puStack_1c = (undefined1 *)0x4635d1;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_20 = &LAB_00463666;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_28 = (undefined *)0x4635e7;
  puStack_1c = &stack0xfffffffc;
  puStack_28 = FUN_004040a0(local_8);
  puStack_2c = (undefined1 *)0x4635ed;
  src_fopen = xvga_src_fopen();
  puVar1 = puStack_28;
  puStack_2c = &LAB_0046361d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  filehandle = xvga_get_filehandle(src_fopen,0,puVar1,src_fopen);
  FUN_0041283c((int *)&PTR_THandleStream_virtual_000_0040f050,'\x01',filehandle);
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_0046366d;
  puStack_20 = (undefined1 *)0x463665;
  FUN_00403c80(&local_c,2);
  return;
}


/* ==== 004636a0 FUN_004636a0 ==== */

void FUN_004636a0(undefined4 param_1,undefined *param_2)

{
  uint src_filelength;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_8;
  
  puStack_14 = (undefined1 *)0x4636b1;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_18 = &LAB_004636ff;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004040a0(local_8);
  xvga_src_fopen();
  src_filelength = xvga_src_filelength();
  if ((int)src_filelength < 0) {
    thunk_FUN_00402808(src_filelength);
  }
  xvga_src_fclose();
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00463706;
  puStack_18 = (undefined1 *)0x4636fe;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00463ba0 TCustomGDIGraphic.virtual_02c ==== */

int * TCustomGDIGraphic_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TGraphicControl_virtual_02c(param_1,'\0',param_3);
  piVar1 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX_00);
  param_1[0x4c] = (int)piVar1;
  piVar1 = TDaviLinkedGraphic_virtual_014
                     ((int *)&PTR_TPersistent_virtual_000_0045ca28,'\x01',param_1);
  param_1[0x4b] = (int)piVar1;
  piVar1[7] = (int)param_1;
  piVar1[6] = *(int *)(*param_1 + 0xa4);
  FUN_0045d4a4((int)piVar1,extraout_EDX,extraout_ECX_01,*(undefined4 *)(*param_1 + 0xa0),param_1);
  TControl_SetWidth(param_1,100);
  TControl_SetHeight(param_1,0x32);
  *(undefined1 *)((int)param_1 + 0x13d) = 0xff;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00463c44 TCustomGDIGraphic.Destroy ==== */

void TCustomGDIGraphic_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x463c4f;
  local_8 = FUN_004032fc(param_1,param_2);
  puStack_14 = &LAB_00463c99;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040c968(local_8 + 0x4b);
  FUN_0040c968(local_8 + 0x4c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00463ca0;
  puStack_14 = (undefined1 *)0x463c98;
  TGraphicControl_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 00463cb4 FUN_00463cb4 ==== */

int * FUN_00463cb4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xa8))();
  piVar3 = (int *)0x0;
  uVar2 = FUN_00403114(piVar1,(int)&LAB_00454aa4);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_virtual_000_0045b71c);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TPersistent_virtual_000_0045b71c);
      piVar3 = (int *)(**(code **)(*piVar1 + 0x70))(piVar1,piVar1[0xb]);
      (**(code **)(*piVar3 + 0x3c))(piVar3,(char)param_1[0x4d]);
      FUN_0045727c(piVar3,*(char *)((int)param_1 + 0x135));
      FUN_00457260(piVar3,param_1[0x4e]);
    }
  }
  else {
    piVar3 = (int *)FUN_0040312c(piVar1,(int)&LAB_00454aa4);
    (**(code **)(*piVar3 + 0x3c))(piVar3,(char)param_1[0x4d]);
    FUN_0045727c(piVar3,*(char *)((int)param_1 + 0x135));
    FUN_00457260(piVar3,param_1[0x4e]);
  }
  return piVar3;
}


/* ==== 00463d6c TCustomGDIGraphic.virtual_084 ==== */

void TCustomGDIGraphic_virtual_084(int *param_1)

{
  char cVar1;
  int *piVar2;
  int text;
  LPCSTR lpchText;
  HDC hdc;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  UINT format;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  tagRECT local_18;
  int *local_8;
  tagRECT *lprc_val;
  
  piVar2 = param_1 + 0x50;
  text = *piVar2;
  *piVar2 = *piVar2 + 1;
  local_8 = param_1;
  if (SCARRY4(text,1)) {
    puStack_20 = (undefined1 *)0x463d87;
    thunk_FUN_00402808((uint)param_1);
  }
  if ((char)local_8[0x4a] != '\0') {
    return;
  }
  *(undefined1 *)(local_8 + 0x4a) = 1;
  puStack_24 = &LAB_00463f1d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))(local_8,&local_18);
  piVar2 = FUN_00463cb4(local_8);
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x28))();
      if ((cVar1 == '\0') && ((char)local_8[0x4f] == '\0')) {
        FUN_00418f9c((int *)local_8[0x48],0,0,piVar2);
      }
      else {
        lprc_val = &local_18;
        piVar3 = (int *)FUN_00456800(local_8[0x4c],extraout_EDX,extraout_ECX);
        FUN_00418f14(piVar3,&local_18.left,(int *)local_8[0x48],&lprc_val->left);
        cVar1 = FUN_00454850(local_8[0x4c],piVar2,(char)local_8[0x4f],
                             *(char *)((int)local_8 + 0x13d));
        if (cVar1 == '\0') {
          piVar3 = (int *)FUN_00456800(local_8[0x4c],extraout_EDX_00,extraout_ECX_00);
          FUN_00418f9c(piVar3,0,0,piVar2);
        }
        FUN_00418f9c((int *)local_8[0x48],0,0,(int *)local_8[0x4c]);
      }
      goto LAB_00463ed8;
    }
  }
  if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
    TBrush_SetStyle(*(int **)(local_8[0x48] + 0x14),'\x01');
    format = 0x25;
    lprc_val = &local_18;
    text = FUN_00403edc(local_8[2]);
    lpchText = FUN_004040a0((undefined *)local_8[2]);
    hdc = (HDC)FUN_004194d8((int *)local_8[0x48]);
    DrawTextA(hdc,lpchText,text,lprc_val,format);
  }
LAB_00463ed8:
  if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
    TBrush_SetStyle(*(int **)(local_8[0x48] + 0x14),'\0');
    FUN_00419048((int *)local_8[0x48],&local_18);
  }
  *in_FS_OFFSET = uStack_28;
  *(undefined1 *)(local_8 + 0x4a) = 0;
  return;
}


/* ==== 00463f2c TCustomGDIGraphic.virtual_07c ==== */

void TCustomGDIGraphic_virtual_07c(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0xa8))();
  cVar1 = (**(code **)(*piVar2 + 0x1c))();
  if (cVar1 == '\0') {
    iVar3 = (**(code **)(*piVar2 + 0x2c))();
    iVar4 = (**(code **)(*piVar2 + 0x20))();
  }
  else {
    iVar3 = 100;
    iVar4 = 0x32;
  }
  FUN_00457194((int *)param_1[0x4c],iVar3,iVar4,0x20);
  TControl_virtual_07c(param_1,param_2,param_3,iVar4,iVar3);
  return;
}


/* ==== 00463f9c TCustomGDIGraphic.virtual_074 ==== */

void TCustomGDIGraphic_virtual_074(int param_1)

{
  if (*(char *)(param_1 + 0x128) == '\0') {
    TControl_virtual_074(param_1);
  }
  return;
}


/* ==== 00463fb0 TCustomGDIGraphic.virtual_088 ==== */

void TCustomGDIGraphic_virtual_088(int *param_1)

{
  (**(code **)(*(int *)param_1[0x4b] + 8))();
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00463fcc TCustomGDIGraphic.virtual_08c ==== */

void TCustomGDIGraphic_virtual_08c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4d]) {
    *(char *)(param_1 + 0x4d) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00463fec TCustomGDIGraphic.virtual_090 ==== */

void TCustomGDIGraphic_virtual_090(int *param_1,int param_2)

{
  if (param_2 != param_1[0x4e]) {
    param_1[0x4e] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0046400c TCustomGDIGraphic.virtual_094 ==== */

void TCustomGDIGraphic_virtual_094(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x135)) {
    *(char *)((int)param_1 + 0x135) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0046402c TCustomGDIGraphic.virtual_098 ==== */

void TCustomGDIGraphic_virtual_098(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4f]) {
    *(char *)(param_1 + 0x4f) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0046404c TCustomGDIGraphic.virtual_09c ==== */

void TCustomGDIGraphic_virtual_09c(int *param_1,char param_2)

{
  if ((param_2 != *(char *)((int)param_1 + 0x13d)) &&
     (*(char *)((int)param_1 + 0x13d) = param_2, (char)param_1[0x4f] != '\0')) {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 00464074 TCustomGDIGraphic.virtual_0a0 ==== */

void TCustomGDIGraphic_virtual_0a0(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00464080 TCustomGDIGraphic.virtual_0a4 ==== */

void TCustomGDIGraphic_virtual_0a4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xa8))();
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  uVar3 = (**(code **)(*piVar1 + 0x20))();
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],uVar3,uVar2);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 004640bc TCustomGDIGraphic.virtual_0a8 ==== */

undefined4 TCustomGDIGraphic_virtual_0a8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 300) + 0xc);
}


