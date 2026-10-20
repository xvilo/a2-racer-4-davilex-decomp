/* spel.dat — dxdraw/cdrom.cpp: 1 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ced80 FUN_004ced80 ==== */

void FUN_004ced80(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (DAT_0074b31c != (code *)0x0) {
    if (DAT_00740dec == '\0') {
      FUN_004c3fa0(s__s__d____cd_rom_handlers_require_005b6dd8,s_D__Work_dxdraw_cdrom_cpp_005b6e1c,
                   0x36);
      return;
    }
    if (((param_3 == 0x8000) || (param_3 == 0x8004)) && (*(int *)(param_4 + 4) == 2)) {
      cVar1 = FUN_00559576(DAT_00740dec);
      if ((*(uint *)(param_4 + 0xc) & 1 << (cVar1 + 0xbfU & 0x1f)) != 0) {
        (*DAT_0074b31c)(param_3 != 0x8000);
        pcVar2 = s_inserted_005b6dcc;
        if (param_3 != 0x8000) {
          pcVar2 = s_removed_005b6dc4;
        }
        FUN_004c3fa0(s__s__d____Game_CD_ROM_was__s_in_d_005b6d98,s_D__Work_dxdraw_cdrom_cpp_005b6e1c
                     ,0x4b,pcVar2,DAT_00740dec);
      }
    }
  }
  return;
}


