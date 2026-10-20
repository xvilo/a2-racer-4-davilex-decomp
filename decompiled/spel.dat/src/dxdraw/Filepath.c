/* spel.dat — dxdraw/Filepath.cpp: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004cd370 FUN_004cd370 ==== */

void FUN_004cd370(char *source)

{
  if (source == (char *)0x0) {
    FUN_004c4150(s__s__d___Null_string_as_error_str_005b6670,s_D__Work_dxdraw_Filepath_cpp_005b66a4,
                 0x20);
  }
  _strncpy(s_program_installation_check_faile_005b6570,source,0xff);
  return;
}


/* ==== 004cd3b0 FUN_004cd3b0 ==== */

void FUN_004cd3b0(char *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 local_104 [260];
  
  iVar4 = 0;
  bVar1 = false;
  if (param_1 == (char *)0x0) {
    DAT_00740de8 = s___005b3494;
    FUN_005587a3(local_104,s_x___s_005b66c8,param_2);
  }
  else {
    DAT_00740de8 = param_1;
    FUN_005587a3(local_104,s_x__s__s_005b66d0,param_1,param_2);
  }
  iVar2 = FUN_0055a328(s_NOCD_005b66c0);
  if (iVar2 != 0) {
    puVar3 = (undefined1 *)FUN_0055a328(s_NOCD_005b66c0);
    DAT_00740dec = *puVar3;
    return;
  }
  do {
    if (iVar4 == -1) goto LAB_004cd478;
    iVar4 = FUN_004cca00(0);
    DAT_00740dec = (undefined1)iVar4;
    local_104[0] = DAT_00740dec;
    iVar2 = FUN_0055926e(local_104,0);
  } while (iVar2 == -1);
  bVar1 = true;
  iVar4 = FUN_004cca00(1);
  if (iVar4 == -1) {
LAB_004cd478:
    FUN_004c4150(s_program_installation_check_faile_005b6570);
    if (!bVar1) {
      FUN_004c4150(s_program_installation_check_faile_005b6570);
    }
  }
  return;
}


/* ==== 004cd4a0 FUN_004cd4a0 ==== */

undefined4 FUN_004cd4a0(undefined4 param_1,void *this_val)

{
  FILE *file;
  byte local_304 [4];
  byte local_300 [256];
  byte local_200 [256];
  byte local_100 [256];
  
  FUN_0055942f(this_val,this_val,local_304,local_100,local_200,local_300);
  FUN_0055a3a5(param_1,&DAT_00712694,&DAT_00712694,local_200,local_300);
  FUN_004c3fa0(s_path__s_005b66f4,param_1);
  file = (FILE *)FUN_005589a5(param_1,s_r_005b66f0);
  if (file == (FILE *)0x0) {
    FUN_0055a3a5(param_1,&DAT_00740dec,DAT_00740de8,local_200,local_300);
    FUN_004c3fa0(s_failed_goto_path__s_005b66d8,param_1);
    return param_1;
  }
  FUN_005588fd(file);
  return param_1;
}


/* ==== 004cd560 FUN_004cd560 ==== */

undefined4 FUN_004cd560(void)

{
  int iVar1;
  tagMSG msg;
  
  iVar1 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (msg.message == 0x12) {
      if (DAT_00740e04 == 0) {
        return 1;
      }
      (*DAT_00740df0)();
    }
    TranslateMessage(&msg);
    DispatchMessageA(&msg);
    iVar1 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
  } while( true );
}


/* ==== 004cd5e0 FUN_004cd5e0 ==== */

undefined4 FUN_004cd5e0(void)

{
  int iVar1;
  tagMSG msg;
  
  iVar1 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (msg.message == 0x12) {
      if (DAT_00740e04 == 0) {
        return 1;
      }
      (*DAT_00740df0)();
    }
    TranslateMessage(&msg);
    DispatchMessageA(&msg);
    iVar1 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
  } while( true );
}


/* ==== 004cd660 FUN_004cd660 ==== */

undefined4 FUN_004cd660(void)

{
  BOOL BVar1;
  tagMSG msg;
  
  BVar1 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
  if (BVar1 != 0) {
    if (msg.message == 0x12) {
      FUN_00559c79(0);
    }
    TranslateMessage(&msg);
    DispatchMessageA(&msg);
    return 0;
  }
  FUN_004cece0();
  return 0;
}


