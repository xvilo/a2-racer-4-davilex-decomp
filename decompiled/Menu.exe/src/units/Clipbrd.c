/* Menu.exe — units/Clipbrd.pas: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00429484 FUN_00429484 ==== */

void FUN_00429484(int param_1,char *param_2)

{
  int iVar1;
  undefined2 extraout_var;
  
  iVar1 = FUN_00408b24(param_2);
  FUN_004293a0(param_1,CONCAT22(extraout_var,1),(undefined4 *)param_2,iVar1 + 1);
  return;
}


/* ==== 004294a4 FUN_004294a4 ==== */

void FUN_004294a4(int param_1,int *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint clipboard_formats;
  HANDLE clipboard_data_2;
  HANDLE clipboard_data;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  short sVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4294b8;
  FUN_00429324(param_1);
  puStack_1c = &LAB_00429546;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  clipboard_formats = EnumClipboardFormats(0);
  sVar4 = (short)clipboard_formats;
  uVar1 = extraout_ECX;
  while( true ) {
    if (sVar4 == 0) {
      piVar3 = SysUtils_Exception_CreateRes
                         ((int *)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab6c0);
      System__RaiseExcept(piVar3);
      *in_FS_OFFSET = uStack_20;
      puStack_18 = (undefined1 *)0x42954d;
      puStack_1c = (undefined1 *)0x429545;
      FUN_004292f8(param_1);
      return;
    }
    bVar2 = FUN_0041b644(&PTR_TPicture_virtual_000_0041702c,clipboard_formats,uVar1);
    if (bVar2) break;
    clipboard_formats = EnumClipboardFormats(clipboard_formats & 0xffff);
    sVar4 = (short)clipboard_formats;
    uVar1 = extraout_ECX_00;
  }
  clipboard_data_2 = GetClipboardData(clipboard_formats & 0xffff);
  clipboard_data = GetClipboardData(9);
  FUN_0041b554(param_2,clipboard_formats,clipboard_data_2,clipboard_data);
  FUN_00403794();
  return;
}


/* ==== 00429554 FUN_00429554 ==== */

void FUN_00429554(int param_1,int *param_2)

{
  HANDLE clipboard_data;
  HANDLE clipboard_data_2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x429568;
  FUN_00429324(param_1);
  puStack_1c = &LAB_004295ac;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  clipboard_data = GetClipboardData(2);
  clipboard_data_2 = GetClipboardData(9);
  (**(code **)(*param_2 + 0x58))(param_2,CONCAT22(extraout_var,2),clipboard_data);
  *in_FS_OFFSET = clipboard_data_2;
  puStack_1c = &LAB_004295b3;
  uStack_20 = 0x4295ab;
  FUN_004292f8(param_1);
  return;
}


/* ==== 004295bc FUN_004295bc ==== */

void FUN_004295bc(int param_1,int *param_2)

{
  HANDLE clipboard_data_2;
  HANDLE clipboard_data;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4295cf;
  FUN_00429324(param_1);
  puStack_18 = &LAB_00429611;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  clipboard_data_2 = GetClipboardData(3);
  clipboard_data = GetClipboardData(9);
  (**(code **)(*param_2 + 0x58))(param_2,CONCAT22(extraout_var,3),clipboard_data_2);
  *in_FS_OFFSET = clipboard_data;
  puStack_18 = &LAB_00429618;
  uStack_1c = 0x429610;
  FUN_004292f8(param_1);
  return;
}


/* ==== 00429620 TClipboard.virtual_000 ==== */

void TClipboard_virtual_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = System__IsClass(param_2,(int)&PTR_TPicture_virtual_000_0041702c);
  if ((char)uVar1 != '\0') {
    FUN_004294a4((int)param_1,param_2);
    return;
  }
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_004173a4);
  if ((char)uVar1 == '\0') {
    uVar1 = System__IsClass(param_2,(int)&LAB_00417234);
    if ((char)uVar1 == '\0') {
      TPersistent_virtual_000(param_1,param_2);
    }
    else {
      FUN_004295bc((int)param_1,param_2);
    }
  }
  else {
    FUN_00429554((int)param_1,param_2);
  }
  return;
}


/* ==== 00429688 FUN_00429688 ==== */

void FUN_00429688(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  HANDLE mem_2;
  ushort local_e;
  HANDLE mem;
  int local_8;
  
  puStack_1c = (undefined1 *)0x42969c;
  local_8 = param_1;
  FUN_00429324(param_1);
  puStack_20 = &LAB_004296fd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004292dc(local_8);
  mem_2 = (HANDLE)0x0;
  FUN_0041b618(param_2,&local_e,&mem,&mem_2);
  SetClipboardData((uint)local_e,mem);
  if (mem_2 != (HANDLE)0x0) {
    SetClipboardData(9,mem_2);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00429704;
  puStack_20 = (undefined1 *)0x4296fc;
  FUN_004292f8(local_8);
  return;
}


/* ==== 0042970c FUN_0042970c ==== */

void FUN_0042970c(int param_1,int *param_2)

{
  int *in_FS_OFFSET;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  HANDLE mem;
  ushort local_e;
  HANDLE mem_2;
  int local_8;
  
  puStack_1c = (undefined1 *)0x429720;
  local_8 = param_1;
  FUN_00429324(param_1);
  puStack_20 = &LAB_00429781;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004292dc(local_8);
  mem = (HANDLE)0x0;
  (**(code **)(*param_2 + 0x5c))(param_2,&local_e,&mem_2);
  SetClipboardData((uint)local_e,mem_2);
  if (mem != (HANDLE)0x0) {
    SetClipboardData(9,mem);
  }
  *in_FS_OFFSET = (int)&mem;
  puStack_20 = &LAB_00429788;
  iStack_24 = 0x429780;
  FUN_004292f8(local_8);
  return;
}


/* ==== 00429790 TClipboard.virtual_008 ==== */

void TClipboard_virtual_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = System__IsClass(param_2,(int)&PTR_TPicture_virtual_000_0041702c);
  if ((char)uVar1 != '\0') {
    FUN_00429688((int)param_1,(int)param_2);
    return;
  }
  uVar1 = System__IsClass(param_2,(int)&PTR_TPersistent_virtual_000_00416f48);
  if ((char)uVar1 == '\0') {
    TPersistent_virtual_008(param_1,param_2);
  }
  else {
    FUN_0042970c((int)param_1,param_2);
  }
  return;
}


/* ==== 004297dc FUN_004297dc ==== */

int FUN_004297dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_004ac744 == 0) {
    DAT_004ac744 = System_TObject_Create((int *)&LAB_0042925c,'\x01',param_3);
  }
  return DAT_004ac744;
}


/* ==== 004297fc FUN_004297fc ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004297fc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0042982d;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac740 = _DAT_004ac740 + 1;
  if (_DAT_004ac740 == 0) {
    System_TObject_Free(DAT_004ac744);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


