/* Menu.exe — units/Contnrs.pas: 59 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0041fef4 FUN_0041fef4 ==== */

void FUN_0041fef4(int *param_1,int param_2)

{
  FUN_00410104(param_1,param_2);
  return;
}


/* ==== 0041fefc FUN_0041fefc ==== */

int * FUN_0041fefc(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
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
  FUN_00402f6c(param_1,'\0',param_3);
  *(char *)(param_1 + 4) = (char)param_3;
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0041ff40 FUN_0041ff40 ==== */

void FUN_0041ff40(undefined4 *param_1,int param_2)

{
  FUN_004102b0(param_1,param_2);
  return;
}


/* ==== 0041ff54 FUN_0041ff54 ==== */

void FUN_0041ff54(int param_1,int param_2)

{
  FUN_0041030c(param_1,param_2);
  return;
}


/* ==== 0041ff5c TObjectList.virtual_004 ==== */

void TObjectList_virtual_004(int param_1,int *param_2,char param_3)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (param_3 == '\x02')) {
    FUN_00402f9c(param_2);
  }
  TList_virtual_004();
  return;
}


/* ==== 0041ff88 FUN_0041ff88 ==== */

void FUN_0041ff88(int *param_1,int param_2)

{
  FUN_00410448(param_1,param_2);
  return;
}


/* ==== 00420050 TComponentListNexus.virtual_010 ==== */

void TComponentListNexus_virtual_010(int param_1,int param_2,char param_3)

{
  if ((param_3 == '\x01') && (*(short *)(param_1 + 0x2a) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1,param_2);
  }
  TComponent_virtual_010(param_1,param_2,param_3);
  return;
}


/* ==== 00420080 FUN_00420080 ==== */

void FUN_00420080(int *param_1,int param_2)

{
  FUN_0041fef4(param_1,param_2);
  return;
}


/* ==== 00420088 TComponentList.Destroy ==== */

void TComponentList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[5]);
  TList_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 004200b8 FUN_004200b8 ==== */

void FUN_004200b8(undefined4 *param_1,int param_2)

{
  FUN_0041ff40(param_1,param_2);
  return;
}


/* ==== 004200d4 FUN_004200d4 ==== */

void FUN_004200d4(int param_1,int param_2)

{
  FUN_0041ff54(param_1,param_2);
  return;
}


/* ==== 004200dc TComponentList.virtual_004 ==== */

void TComponentList_virtual_004(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x14) == 0) {
    piVar2 = TComponent_virtual_02c((int *)&PTR_TPersistent_virtual_000_0041ffdc,'\x01',(int *)0x0);
    *(int **)(param_1 + 0x14) = piVar2;
    piVar2[0xb] = param_1;
    piVar2[10] = (int)&LAB_004200cc;
    uVar3 = extraout_ECX;
  }
  cVar1 = (char)param_3;
  if (cVar1 == '\0') {
    if (param_2 != (int *)0x0) {
      FUN_0041564c((int)param_2,*(int *)(param_1 + 0x14),uVar3);
    }
  }
  else if (((byte)(cVar1 - 1U) < 2) && (param_2 != (int *)0x0)) {
    FUN_0041587c((int)param_2,*(int *)(param_1 + 0x14));
  }
  TObjectList_virtual_004(param_1,param_2,cVar1);
  return;
}


/* ==== 00420144 FUN_00420144 ==== */

void FUN_00420144(int *param_1)

{
  (**(code **)(*param_1 + 4))();
  return;
}


/* ==== 0042014c FUN_0042014c ==== */

void FUN_0042014c(undefined4 *param_1)

{
  (**(code **)*param_1)();
  return;
}


/* ==== 00420154 FUN_00420154 ==== */

int * FUN_00420154(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[1] = iVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00420198 TOrderedList.Destroy ==== */

void TOrderedList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[1]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 004201c8 TOrderedList.virtual_008 ==== */

void TOrderedList_virtual_008(int param_1)

{
  FUN_004102b0(*(undefined4 **)(param_1 + 4),(*(undefined4 **)(param_1 + 4))[2] + -1);
  return;
}


/* ==== 004201dc TOrderedList.virtual_004 ==== */

undefined4 TOrderedList_virtual_004(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_00410150((int *)param_1[1],((int *)param_1[1])[2] + -1);
  return uVar1;
}


/* ==== 004201fc TStack.virtual_000 ==== */

void TStack_virtual_000(int param_1,int param_2)

{
  FUN_00410104(*(int **)(param_1 + 4),param_2);
  return;
}


/* ==== 00420240 InitCommonControls ==== */

void __stdcall InitCommonControls(void)

{
                    /* WARNING: Could not recover jumptable at 0x00420240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitCommonControls();
  return;
}


/* ==== 00420248 FUN_00420248 ==== */

void FUN_00420248(void)

{
  if (DAT_004ac6b8 == (HMODULE)0x0) {
    DAT_004ac6b8 = GetModuleHandleA("comctl32.dll");
    if (DAT_004ac6b8 != (HMODULE)0x0) {
      DAT_004ac6bc = GetProcAddress(DAT_004ac6b8,"InitCommonControlsEx");
    }
  }
  return;
}


/* ==== 004202a8 FUN_004202a8 ==== */

int FUN_004202a8(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_004ac6b8 == 0) {
    FUN_00420248();
  }
  if (DAT_004ac6bc != (code *)0x0) {
    iVar2 = (*DAT_004ac6bc)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_004202d3;
    }
  }
  bVar1 = 0;
LAB_004202d3:
  return -(uint)bVar1;
}


/* ==== 004202dc ImageList_Create ==== */

HIMAGELIST __stdcall ImageList_Create(int cx,int cy,UINT flags,int cInitial,int cGrow)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x004202dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
  return p_Var1;
}


/* ==== 004202e4 ImageList_Destroy ==== */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004202e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Destroy(himl);
  return BVar1;
}


/* ==== 004202ec ImageList_GetImageCount ==== */

int __stdcall ImageList_GetImageCount(HIMAGELIST himl)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004202ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_GetImageCount(himl);
  return iVar1;
}


/* ==== 004202f4 ImageList_Add ==== */

int __stdcall ImageList_Add(HIMAGELIST himl,HBITMAP hbmImage,HBITMAP hbmMask)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004202f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_Add(himl,hbmImage,hbmMask);
  return iVar1;
}


/* ==== 004202fc ImageList_ReplaceIcon ==== */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl,int i,HICON hicon)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004202fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_ReplaceIcon(himl,i,hicon);
  return iVar1;
}


/* ==== 00420304 ImageList_SetBkColor ==== */

COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl,COLORREF clrBk)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_SetBkColor(himl,clrBk);
  return CVar1;
}


/* ==== 0042030c ImageList_GetBkColor ==== */

COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042030c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_GetBkColor(himl);
  return CVar1;
}


/* ==== 00420314 FUN_00420314 ==== */

void FUN_00420314(HIMAGELIST himl_val,HICON hicon_val)

{
  ImageList_ReplaceIcon(himl_val,-1,hicon_val);
  return;
}


/* ==== 00420320 ImageList_Draw ==== */

BOOL __stdcall ImageList_Draw(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,UINT fStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Draw(himl,i,hdcDst,x,y,fStyle);
  return BVar1;
}


/* ==== 00420328 ImageList_Replace ==== */

BOOL __stdcall ImageList_Replace(HIMAGELIST himl,int i,HBITMAP hbmImage,HBITMAP hbmMask)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Replace(himl,i,hbmImage,hbmMask);
  return BVar1;
}


/* ==== 00420330 ImageList_DrawEx ==== */

BOOL __stdcall
ImageList_DrawEx(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,int dx,int dy,COLORREF rgbBk,
                COLORREF rgbFg,UINT fStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DrawEx(himl,i,hdcDst,x,y,dx,dy,rgbBk,rgbFg,fStyle);
  return BVar1;
}


/* ==== 00420338 ImageList_Remove ==== */

BOOL __stdcall ImageList_Remove(HIMAGELIST himl,int i)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Remove(himl,i);
  return BVar1;
}


/* ==== 00420340 ImageList_BeginDrag ==== */

BOOL __stdcall ImageList_BeginDrag(HIMAGELIST himlTrack,int iTrack,int dxHotspot,int dyHotspot)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_BeginDrag(himlTrack,iTrack,dxHotspot,dyHotspot);
  return BVar1;
}


/* ==== 00420348 ImageList_EndDrag ==== */

void __stdcall ImageList_EndDrag(void)

{
                    /* WARNING: Could not recover jumptable at 0x00420348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ImageList_EndDrag();
  return;
}


/* ==== 00420350 ImageList_DragEnter ==== */

BOOL __stdcall ImageList_DragEnter(HWND hwndLock,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragEnter(hwndLock,x,y);
  return BVar1;
}


/* ==== 00420358 ImageList_DragLeave ==== */

BOOL __stdcall ImageList_DragLeave(HWND hwndLock)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragLeave(hwndLock);
  return BVar1;
}


/* ==== 00420360 ImageList_DragMove ==== */

BOOL __stdcall ImageList_DragMove(int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragMove(x,y);
  return BVar1;
}


/* ==== 00420368 ImageList_SetDragCursorImage ==== */

BOOL __stdcall
ImageList_SetDragCursorImage(HIMAGELIST himlDrag,int iDrag,int dxHotspot,int dyHotspot)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetDragCursorImage(himlDrag,iDrag,dxHotspot,dyHotspot);
  return BVar1;
}


/* ==== 00420370 ImageList_DragShowNolock ==== */

BOOL __stdcall ImageList_DragShowNolock(BOOL fShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragShowNolock(fShow);
  return BVar1;
}


/* ==== 00420378 ImageList_GetDragImage ==== */

HIMAGELIST __stdcall ImageList_GetDragImage(POINT *ppt,POINT *pptHotspot)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00420378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_GetDragImage(ppt,pptHotspot);
  return p_Var1;
}


/* ==== 00420380 ImageList_Read ==== */

HIMAGELIST __stdcall ImageList_Read(IStream *pstm)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00420380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Read(pstm);
  return p_Var1;
}


/* ==== 00420388 ImageList_Write ==== */

BOOL __stdcall ImageList_Write(HIMAGELIST himl,IStream *pstm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Write(himl,pstm);
  return BVar1;
}


/* ==== 00420390 ImageList_GetIconSize ==== */

BOOL __stdcall ImageList_GetIconSize(HIMAGELIST himl,int *cx,int *cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_GetIconSize(himl,cx,cy);
  return BVar1;
}


/* ==== 00420398 ImageList_SetIconSize ==== */

BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl,int cx,int cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetIconSize(himl,cx,cy);
  return BVar1;
}


/* ==== 004203d8 FUN_004203d8 ==== */

void FUN_004203d8(byte param_1,undefined4 param_2,undefined *param_3)

{
  LPCSTR lpProcName;
  FARPROC pFVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_8;
  
  puStack_18 = (undefined1 *)0x4203ee;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  puStack_1c = &LAB_00420497;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((&DAT_004ac6e8)[param_1] == '\0') {
    if (DAT_004ac6e4 == (HMODULE)0x0) {
      pFVar1 = (FARPROC)0x0;
    }
    else {
      puStack_18 = &stack0xfffffffc;
      if (((param_1 == 0) && (puStack_18 = &stack0xfffffffc, DAT_004ac6f0 == '\0')) &&
         (puStack_18 = &stack0xfffffffc,
         DAT_004ac6d8 = FUN_004203d8(4,DAT_004ac6d8,"GetMonitorInfoA"), DAT_004ac6f0 == '\0')) {
        FUN_00403c5c((int *)&local_8);
      }
      lpProcName = FUN_004040a0(local_8);
      pFVar1 = GetProcAddress(DAT_004ac6e4,lpProcName);
    }
    if ((pFVar1 != (FARPROC)0x0) && (param_1 != 0)) {
      DAT_004ac6f0 = '\x01';
    }
    (&DAT_004ac6e8)[param_1] = 1;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042049e;
  puStack_1c = (undefined1 *)0x420496;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00420548 FUN_00420548 ==== */

undefined4 FUN_00420548(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  if (DAT_004ac6ea == '\0') {
    DAT_004ac6c8 = (code *)FUN_004203d8(2,DAT_004ac6c8,"MonitorFromRect");
    uVar1 = (*DAT_004ac6c8)();
    return uVar1;
  }
  if ((in_stack_00000008 & 3) == 0) {
    if (in_stack_00000004[2] < 1) {
      return 0;
    }
    if (in_stack_00000004[3] < 1) {
      return 0;
    }
    iVar2 = (*DAT_004ac6c0)();
    if (iVar2 <= *in_stack_00000004) {
      return 0;
    }
    iVar2 = (*DAT_004ac6c0)();
    if (iVar2 <= in_stack_00000004[1]) {
      return 0;
    }
  }
  return 0x12340042;
}


/* ==== 00420ac0 FUN_00420ac0 ==== */

void FUN_00420ac0(void)

{
  DAT_004ac6e4 = GetModuleHandleA("USER32.DLL");
  DAT_004ac6c0 = &LAB_004204c0;
  DAT_004ac6c4 = &LAB_004205d8;
  DAT_004ac6c8 = FUN_00420548;
  DAT_004ac6cc = &LAB_00420670;
  DAT_004ac6d0 = &LAB_00420708;
  DAT_004ac6d4 = &LAB_004207e0;
  DAT_004ac6d8 = &LAB_004208b8;
  DAT_004ac6dc = &LAB_00420990;
  return;
}


/* ==== 00420b6c FUN_00420b6c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420b6c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac6f4 = _DAT_004ac6f4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00420ba4 FUN_00420ba4 ==== */

void FUN_00420ba4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  while (uVar2 != 0) {
    do {
      uVar1 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
    } while (uVar1 == 0);
  }
  return;
}


/* ==== 00420bd4 FUN_00420bd4 ==== */

void FUN_00420bd4(void)

{
  unkbyte10 in_stack_00000004;
  
  log2(in_stack_00000004);
  return;
}


/* ==== 00420be4 FUN_00420be4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420be4(void)

{
  uint uVar1;
  float10 fVar2;
  float10 in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined2 in_stack_00000018;
  
  if ((in_stack_00000004 != (float10)0.0) &&
     (((float10)CONCAT28(in_stack_00000018,CONCAT44(in_stack_00000014,in_stack_00000010)) !=
       (float10)0.0 || (in_stack_00000004 <= (float10)0.0)))) {
    fVar2 = in_stack_00000004;
    FUN_00402aac();
    if ((fVar2 != (float10)0.0) || (_DAT_00420ca0 < ABS(in_stack_00000004))) {
      log2(CONCAT28(in_stack_00000018,CONCAT44(in_stack_00000014,in_stack_00000010)));
      FUN_00402a94();
    }
    else {
      uVar1 = FUN_00402ad4();
      FUN_00420ba4(uVar1);
    }
  }
  return;
}


/* ==== 00420cac FUN_00420cac ==== */

int FUN_00420cac(int param_1,int param_2)

{
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 00420cb4 FUN_00420cb4 ==== */

int FUN_00420cb4(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 00420cbc FUN_00420cbc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420cbc(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac6f8 = _DAT_004ac6f8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00420d70 FUN_00420d70 ==== */

int FUN_00420d70(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_004ac72c != (code *)0x0) {
    iVar2 = (*DAT_004ac72c)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_00420d9c;
    }
  }
  bVar1 = 0;
LAB_00420d9c:
  return -(uint)bVar1;
}


/* ==== 00420da4 FUN_00420da4 ==== */

int FUN_00420da4(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_004ac730 != (code *)0x0) {
    iVar2 = (*DAT_004ac730)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_00420dc4;
    }
  }
  bVar1 = 0;
LAB_00420dc4:
  return -(uint)bVar1;
}


/* ==== 00420dcc FUN_00420dcc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420dcc(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("comctl32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004ac730 = GetProcAddress(hModule,"InitializeFlatSB");
    _DAT_004ac734 = GetProcAddress(hModule,"UninitializeFlatSB");
    _DAT_004ac728 = GetProcAddress(hModule,"FlatSB_GetScrollProp");
    DAT_004ac72c = GetProcAddress(hModule,"FlatSB_SetScrollProp");
    _DAT_004ac704 = GetProcAddress(hModule,"FlatSB_EnableScrollBar");
    if (_DAT_004ac704 == (FARPROC)0x0) {
      _DAT_004ac704 = (FARPROC)&DAT_00406c50;
    }
    _DAT_004ac708 = GetProcAddress(hModule,"FlatSB_ShowScrollBar");
    if (_DAT_004ac708 == (FARPROC)0x0) {
      _DAT_004ac708 = (FARPROC)&DAT_00407010;
    }
    _DAT_004ac70c = GetProcAddress(hModule,"FlatSB_GetScrollRange");
    if (_DAT_004ac70c == (FARPROC)0x0) {
      _DAT_004ac70c = (FARPROC)&DAT_00406da0;
    }
    DAT_004ac710 = GetProcAddress(hModule,"FlatSB_GetScrollInfo");
    if (DAT_004ac710 == (FARPROC)0x0) {
      DAT_004ac710 = (FARPROC)&DAT_00406d90;
    }
    DAT_004ac714 = GetProcAddress(hModule,"FlatSB_GetScrollPos");
    if (DAT_004ac714 == (FARPROC)0x0) {
      DAT_004ac714 = (FARPROC)&DAT_00406d98;
    }
    DAT_004ac718 = GetProcAddress(hModule,"FlatSB_SetScrollPos");
    if (DAT_004ac718 == (FARPROC)0x0) {
      DAT_004ac718 = (FARPROC)&DAT_00406fb8;
    }
    DAT_004ac71c = GetProcAddress(hModule,"FlatSB_SetScrollInfo");
    if (DAT_004ac71c == (FARPROC)0x0) {
      DAT_004ac71c = (FARPROC)&DAT_00406fb0;
    }
    _DAT_004ac720 = GetProcAddress(hModule,"FlatSB_SetScrollRange");
    if (_DAT_004ac720 == (FARPROC)0x0) {
      _DAT_004ac720 = (FARPROC)&DAT_00406fc0;
    }
  }
  return;
}


