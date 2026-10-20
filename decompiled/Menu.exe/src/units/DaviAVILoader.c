/* Menu.exe — units/DaviAVILoader.pas: 28 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00457308 FUN_00457308 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457308(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00457353;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac8e0 = _DAT_004ac8e0 + 1;
  if (_DAT_004ac8e0 == 0) {
    FUN_0041b6f4(&PTR_TPicture_virtual_000_0041702c,(int)&LAB_00454aa4);
    System_TObject_Free(DAT_004ac8e8);
    System_TObject_Free(DAT_004ac8e4);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 004573c8 AVIFileInit ==== */

void AVIFileInit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004573c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIFileInit();
  return;
}


/* ==== 004573d0 AVIStreamGetFrameClose ==== */

void AVIStreamGetFrameClose(void)

{
                    /* WARNING: Could not recover jumptable at 0x004573d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIStreamGetFrameClose();
  return;
}


/* ==== 004573d8 AVIStreamRelease ==== */

void AVIStreamRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x004573d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIStreamRelease();
  return;
}


/* ==== 004573e0 AVIFileRelease ==== */

void AVIFileRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x004573e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIFileRelease();
  return;
}


/* ==== 004573e8 AVIFileOpen ==== */

void AVIFileOpen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004573e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIFileOpen();
  return;
}


/* ==== 004573f0 AVIFileExit ==== */

void AVIFileExit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004573f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIFileExit();
  return;
}


/* ==== 004573f8 AVIFileGetStream ==== */

void AVIFileGetStream(void)

{
                    /* WARNING: Could not recover jumptable at 0x004573f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIFileGetStream();
  return;
}


/* ==== 00457400 AVIStreamGetFrameOpen ==== */

void AVIStreamGetFrameOpen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00457400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIStreamGetFrameOpen();
  return;
}


/* ==== 00457408 AVIStreamGetFrame ==== */

void AVIStreamGetFrame(void)

{
                    /* WARNING: Could not recover jumptable at 0x00457408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIStreamGetFrame();
  return;
}


/* ==== 00457410 AVIStreamInfo ==== */

void AVIStreamInfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x00457410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVIStreamInfo();
  return;
}


/* ==== 004574c4 TDaviAVILoader.virtual_018 ==== */

int * TDaviAVILoader_virtual_018(int *param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *extraout_ECX;
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
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe0,
                                         in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TDaviAnimationLoader_virtual_018(param_1,'\0',param_3);
  piVar1 = TDIB_virtual_00c((int *)&LAB_00454aa4,'\x01',extraout_ECX_00);
  param_1[0x2a] = (int)piVar1;
  FUN_00456634(piVar1,extraout_EDX,extraout_ECX_01);
  (**(code **)(*param_1 + 0xc))();
  if (cVar2 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00457524 TDaviAVILoader.Destroy ==== */

void TDaviAVILoader_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45752f;
  local_8 = System__BeforeDestruction(param_1,param_2);
  puStack_14 = &LAB_00457574;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  (**(code **)(*local_8 + 0x10))();
  SysUtils_FreeAndNil(local_8 + 0x2a);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045757b;
  puStack_14 = (undefined1 *)0x457573;
  TDaviAnimationLoader_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 00457590 TDaviAVILoader.virtual_00c ==== */

void TDaviAVILoader_virtual_00c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int *in_FS_OFFSET;
  int iStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_130 [7];
  undefined1 local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_130[2] = 0;
  local_130[1] = 0;
  local_130[0] = 0;
  local_130[5] = 0;
  local_130[4] = 0;
  local_130[3] = 0;
  local_8 = 0;
  local_c = 0;
  local_110 = 0;
  puStack_140 = &LAB_004578c8;
  iStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_144;
  AVIFileInit();
  if (*(int *)(param_1[1] + -4) == 0) {
    System__RunError(0);
  }
  iVar1 = AVIFileOpen();
  if (iVar1 != 0) {
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(&local_c,local_10c);
    local_130[6] = param_1[1];
    local_114 = 0xb;
    SysUtils_Format((byte *)"AVIFileOpen Error on %s.",local_130 + 6,0,&local_110);
    System__LStrCatN(&local_8,4);
    System__Assert(local_8);
  }
  iVar1 = AVIFileGetStream();
  if (iVar1 != 0) {
    AVIFileRelease();
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(local_130 + 4,local_10c);
    local_130[6] = param_1[1];
    local_114 = 0xb;
    SysUtils_Format((byte *)"AVIFileGetStream Error in %s.",local_130 + 6,0,local_130 + 3);
    System__LStrCatN(local_130 + 5,4);
    System__Assert(local_130[5]);
  }
  iVar1 = AVIStreamGetFrameOpen();
  param_1[5] = iVar1;
  if (iVar1 == 0) {
    AVIStreamRelease();
    AVIFileRelease();
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(local_130 + 1,local_10c);
    local_130[6] = param_1[1];
    local_114 = 0xb;
    SysUtils_Format((byte *)"No decompressor found for AVI file: %s.",local_130 + 6,0,local_130);
    System__LStrCatN(local_130 + 2,4);
    System__Assert(local_130[2]);
  }
  AVIFileGetStream();
  iVar1 = param_1[4];
  AVIStreamInfo();
  iVar3 = param_1[2];
  uVar2 = param_1[0xf];
  if ((int)uVar2 < 0) {
    uVar2 = System__RunError(uVar2);
    iVar3 = extraout_ECX;
  }
  *(uint *)(iVar3 + 4) = uVar2;
  uVar2 = param_1[0xd] / param_1[0xc];
  if ((int)uVar2 < 0) {
    uVar2 = System__RunError(uVar2);
    iVar3 = extraout_ECX_00;
  }
  *(uint *)(iVar3 + 8) = uVar2;
  uVar2 = param_1[0x16] - param_1[0x14];
  if (SBORROW4(param_1[0x16],param_1[0x14])) {
    uVar2 = System__RunError(uVar2);
    iVar3 = extraout_ECX_01;
  }
  *(uint *)(iVar3 + 0xc) = uVar2;
  uVar2 = param_1[0x17] - param_1[0x15];
  if (SBORROW4(param_1[0x17],param_1[0x15])) {
    uVar2 = System__RunError(uVar2);
    iVar3 = extraout_ECX_02;
  }
  *(uint *)(iVar3 + 0x10) = uVar2;
  uVar2 = *(uint *)(iVar3 + 0x14);
  *(undefined1 *)(uVar2 + 4) = 0;
  *(undefined4 *)(uVar2 + 8) = 0;
  iVar4 = param_1[0xe];
  if ((iVar4 < 0) || (iVar4 == -1)) {
    uVar2 = System__RunError(uVar2);
    iVar3 = extraout_ECX_03;
    iVar4 = extraout_EDX;
  }
  *(int *)(uVar2 + 0xc) = iVar4;
  iVar4 = *(int *)(iVar3 + 4) + -1;
  if (*(int *)(iVar3 + 4) == 0) {
    uVar2 = System__RunError(uVar2);
    iVar4 = extraout_EDX_00;
  }
  if (iVar4 == -1) {
    uVar2 = System__RunError(uVar2);
    iVar4 = extraout_EDX_01;
  }
  *(int *)(uVar2 + 0x10) = iVar4;
  FUN_00457194((int *)param_1[0x2a],*(int *)(param_1[2] + 0xc),*(int *)(param_1[2] + 0x10),0x18);
  *in_FS_OFFSET = iVar1;
  System__LStrArrayClr(local_130,6);
  System__LStrClr(&local_110);
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 004579a0 TDaviAVILoader.virtual_010 ==== */

void TDaviAVILoader_virtual_010(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    AVIStreamGetFrameClose();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    AVIStreamRelease();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    AVIStreamRelease();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    AVIFileRelease();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  AVIFileExit();
  return;
}


/* ==== 004579f8 TDaviAVILoader.virtual_01c ==== */

void TDaviAVILoader_virtual_01c(int *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  BITMAPINFO *lpbmi;
  BITMAPINFO *pBVar5;
  int *piVar6;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar8;
  int src_height;
  int *in_FS_OFFSET;
  int xDest;
  int yDest;
  int DestWidth;
  int DestHeight;
  int xSrc;
  int ySrc;
  int SrcWidth;
  void *lpBits;
  UINT iUsage;
  DWORD rop;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_120 = &LAB_00457b16;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  if (((int)param_2 < param_1[0xe]) ||
     (uVar4 = param_2, puVar3 = &stack0xfffffffc, param_1[0xf] <= (int)param_2)) {
    System_TObject_ClassName(*param_1,local_10c);
    System__LStrFromString(&local_c,local_10c);
    System__LStrCatN(&local_8,4);
    uVar4 = System__Assert(local_8);
    puVar3 = puStack_11c;
  }
  puStack_11c = puVar3;
  if ((int)param_2 < 0) {
    System__RunError(uVar4);
  }
  iVar1 = param_1[5];
  lpbmi = (BITMAPINFO *)AVIStreamGetFrame();
  if (lpbmi != (BITMAPINFO *)0x0) {
    lVar2 = (longlong)(int)(lpbmi->bmiHeader).biClrUsed * 4;
    uVar4 = (uint)lVar2;
    pBVar5 = lpbmi;
    uVar7 = extraout_ECX;
    uVar8 = extraout_EDX;
    if ((int)uVar4 != lVar2) {
      pBVar5 = (BITMAPINFO *)System__RunError((uint)lpbmi);
      uVar7 = extraout_ECX_00;
      uVar8 = extraout_EDX_00;
    }
    src_height = uVar4 + (lpbmi->bmiHeader).biSize;
    if (CARRY4(uVar4,(lpbmi->bmiHeader).biSize)) {
      pBVar5 = (BITMAPINFO *)System__RunError((uint)pBVar5);
      uVar7 = extraout_ECX_01;
      uVar8 = extraout_EDX_01;
    }
    if (src_height < 0) {
      System__RunError((uint)pBVar5);
      uVar7 = extraout_ECX_02;
      uVar8 = extraout_EDX_02;
    }
    rop = 0xcc0020;
    iUsage = 0;
    lpBits = (void *)((int)&(((BITMAPINFO *)(lpbmi->bmiColors + -10))->bmiHeader).biSize +
                     src_height);
    src_height = *(int *)(param_1[2] + 0x10);
    SrcWidth = *(int *)(param_1[2] + 0xc);
    ySrc = param_1[0x15];
    xSrc = param_1[0x14];
    DestHeight = *(int *)(param_1[2] + 0x10);
    DestWidth = *(int *)(param_1[2] + 0xc);
    yDest = 0;
    xDest = 0;
    piVar6 = (int *)FUN_00456800(param_1[0x2a],uVar8,uVar7);
    hdc = (HDC)FUN_004194d8(piVar6);
    StretchDIBits(hdc,xDest,yDest,DestWidth,DestHeight,xSrc,ySrc,SrcWidth,src_height,lpBits,lpbmi,
                  iUsage,rop);
  }
  *in_FS_OFFSET = iVar1;
  System__LStrArrayClr(&local_c,2);
  return;
}


/* ==== 00457d38 FUN_00457d38 ==== */

int * FUN_00457d38(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)System__ClassCreate((int)param_1,param_2,param_3,in_stack_ffffffe4,
                                         in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  System__LStrAsg(param_1 + 1,param_3);
  if (cVar1 != '\0') {
    System__AfterConstruction(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00457d74 FUN_00457d74 ==== */

void FUN_00457d74(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x457d8c;
  piVar1 = (int *)System_TObject_Create((int *)&PTR_TPersistent_virtual_000_0040eee8,'\x01',param_3)
  ;
  puStack_1c = &LAB_00457dcd;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,piVar1);
  (**(code **)(*piVar1 + 0x14))();
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00457dd4;
  puStack_1c = (undefined1 *)0x457dcc;
  System_TObject_Free(piVar1);
  return;
}


/* ==== 00457de0 TCustomIniFile.virtual_008 ==== */

void TCustomIniFile_virtual_008
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  int *in_FS_OFFSET;
  byte **ppbVar3;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_10;
  byte *local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (byte *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_20 = &LAB_00457e84;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_24;
  ppbVar3 = &local_c;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3,ppbVar3,0);
  iVar1 = System__LStrLen((int)local_c);
  iVar2 = extraout_ECX;
  if (((2 < iVar1) && (*local_c == 0x30)) && ((local_c[1] == 0x58 || (local_c[1] == 0x78)))) {
    System__LStrCopy((int)local_c,3,0x7fffffff,(int *)&local_10);
    System__LStrCat3((int *)&local_c,(undefined4 *)&DAT_00457ea0,local_10);
    iVar2 = extraout_ECX_00;
  }
  FUN_00408654(local_c,param_4,iVar2);
  *in_FS_OFFSET = (int)ppbVar3;
  puStack_24 = &LAB_00457e8b;
  System__LStrArrayClr((int *)&local_10,2);
  return;
}


/* ==== 00457ea4 TCustomIniFile.virtual_00c ==== */

void TCustomIniFile_virtual_00c
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00457ef0;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  SysUtils_IntToStr(param_4,&local_8);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_00457ef7;
  iStack_20 = 0x457eef;
  System__LStrClr(&local_8);
  return;
}


/* ==== 00457f00 TCustomIniFile.virtual_010 ==== */

bool TCustomIniFile_virtual_010
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}


/* ==== 00457f2c TCustomIniFile.virtual_018 ==== */

void TCustomIniFile_virtual_018
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00457fd1;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  piStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x457f60;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != 0) {
    puStack_40 = &LAB_00457f96;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_0040ac88(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)piStack_38;
  puStack_30 = &LAB_00457fd8;
  uStack_34 = 0x457fd0;
  System__LStrClr(&local_18);
  return;
}


/* ==== 00457fe4 TCustomIniFile.virtual_01c ==== */

void TCustomIniFile_virtual_01c
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00458089;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  piStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x458018;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != 0) {
    puStack_40 = &LAB_0045804e;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_0040ad28(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)piStack_38;
  puStack_30 = &LAB_00458090;
  uStack_34 = 0x458088;
  System__LStrClr(&local_18);
  return;
}


/* ==== 0045809c TCustomIniFile.virtual_020 ==== */

void TCustomIniFile_virtual_020
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined *local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  puStack_2c = &LAB_00458141;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  ppuStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x4580d0;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != (undefined *)0x0) {
    puStack_40 = &LAB_00458106;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_00409360(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)ppuStack_38;
  puStack_30 = &LAB_00458148;
  uStack_34 = 0x458140;
  System__LStrClr((int *)&local_18);
  return;
}


/* ==== 00458154 TCustomIniFile.virtual_024 ==== */

void TCustomIniFile_virtual_024
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_004581f9;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  uStack_34 = 0;
  piStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x458188;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != 0) {
    puStack_40 = &LAB_004581be;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_0040acd8(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)piStack_38;
  puStack_30 = &LAB_00458200;
  uStack_34 = 0x4581f8;
  System__LStrClr(&local_18);
  return;
}


/* ==== 0045820c TCustomIniFile.virtual_028 ==== */

void TCustomIniFile_virtual_028(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0045825b;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_0040a44c(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_00458262;
  iStack_20 = 0x45825a;
  System__LStrClr(&local_8);
  return;
}


/* ==== 0045826c TCustomIniFile.virtual_02c ==== */

void TCustomIniFile_virtual_02c(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004582bb;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_0040a47c(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_004582c2;
  iStack_20 = 0x4582ba;
  System__LStrClr(&local_8);
  return;
}


/* ==== 004582cc TCustomIniFile.virtual_030 ==== */

void TCustomIniFile_virtual_030(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0045831f;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_00409330(&local_8);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  puStack_1c = &LAB_00458326;
  iStack_20 = 0x45831e;
  System__LStrClr(&local_8);
  return;
}


