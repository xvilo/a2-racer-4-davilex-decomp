/* spel.dat — dxdraw/Pal.cpp: 5 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c9c90 FUN_004c9c90 ==== */

undefined4 FUN_004c9c90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_007409f4 == 0) {
    DAT_007409f0 = LocalAlloc(0x40,0x400);
    if (DAT_007409f0 == (HLOCAL)0x0) {
      FUN_004c4150(s__s__d____error_not_enough_memory_005b5ad4,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0x25);
    }
    if (8 < DAT_005b37a0) {
      FUN_004c3fa0(s__s__d____16_bit_screen_mode__>_i_005b5aa4,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0x2a);
      DAT_007409f8 = 1;
      return 0;
    }
    iVar1 = (**(code **)(*DAT_0074088c + 0x14))(DAT_0074088c,0x44,DAT_007409f0,&DAT_007409ec,0);
    if (iVar1 != 0) {
      uVar2 = FUN_004c4400(iVar1);
      FUN_004c4150(s__s__d____could_not_create_a_pale_005b5a78,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0x31,uVar2);
    }
    DAT_007409f4 = 1;
    FUN_004c9d50(0);
    FUN_004c9d50(1);
    FUN_004c9d50(2);
  }
  return 0;
}


/* ==== 004c9d50 FUN_004c9d50 ==== */

void FUN_004c9d50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_007409f8 == 0) {
    if (DAT_007409f4 == 0) {
      FUN_004c4150(s__s__d____palette_was_not_initial_005b5b78,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0x5b);
    }
    if (param_1 == 0) {
      FUN_004c4a60(DAT_007408ac);
      iVar1 = (**(code **)(*DAT_007408ac + 0x7c))(DAT_007408ac,DAT_007409ec);
      if (iVar1 != 0) {
        uVar2 = FUN_004c4400(iVar1);
        FUN_004c4150(s__s__d____could_not_set_the_palet_005b5b28,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                     0x65,uVar2);
      }
    }
    else if (param_1 == 1) {
      FUN_004c4a60(DAT_007408b0);
      iVar1 = (**(code **)(*DAT_007408b0 + 0x7c))(DAT_007408b0,DAT_007409ec);
      if (iVar1 != 0) {
        uVar2 = FUN_004c4400(iVar1);
        FUN_004c4150(s__s__d____could_not_set_the_palet_005b5b28,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                     0x6e,uVar2);
        return;
      }
    }
    else {
      if (param_1 != 2) {
        FUN_004c4150(s__s__d____unknown_focus_defined_005b5b54,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                     0x7b);
        return;
      }
      FUN_004c4a60(DAT_00740890);
      iVar1 = (**(code **)(*DAT_00740890 + 0x7c))(DAT_00740890,DAT_007409ec);
      if (iVar1 != 0) {
        uVar2 = FUN_004c4400(iVar1);
        FUN_004c4150(s__s__d____could_not_set_the_palet_005b5b28,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                     0x77,uVar2);
        return;
      }
    }
  }
  return;
}


/* ==== 004c9e70 FUN_004c9e70 ==== */

undefined4 FUN_004c9e70(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_007409f8 == 0) {
    if (DAT_007409f4 == 0) {
      FUN_004c4150(s__s__d____palette_was_not_initial_005b5b78,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0x97);
    }
    if (param_2 < 0) {
      FUN_004c4150(s__s__d____illegal_palette_base_en_005b5c04,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0x9b,param_2);
    }
    iVar1 = param_2 + param_3;
    if ((iVar1 < 0) || (0x100 < iVar1)) {
      FUN_004c4150(s__s__d____trying_to_reference_an_i_005b5bc4,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0x9e,iVar1);
    }
    iVar1 = (**(code **)(*DAT_007409ec + 0x18))(DAT_007409ec,0,param_2,param_3,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_004c4400(iVar1);
      FUN_004c4150(s__s__d____could_set_entries___s__005b5ba0,s_D__Work_dxdraw_Pal_cpp_005b5b10,0xa2
                   ,uVar2);
    }
  }
  return 0;
}


/* ==== 004c9f30 FUN_004c9f30 ==== */

undefined4 FUN_004c9f30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_007409f8 == 0) {
    if (DAT_007409f4 == 0) {
      FUN_004c4150(s__s__d____palette_was_not_initial_005b5b78,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0xbe);
    }
    if (param_2 < 0) {
      FUN_004c4150(s__s__d____illegal_palette_base_en_005b5c04,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0xc1,param_2);
    }
    iVar1 = param_2 + param_3;
    if ((iVar1 < 0) || (0x100 < iVar1)) {
      FUN_004c4150(s__s__d____trying_to_reference_an_i_005b5bc4,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0xc4,iVar1);
    }
    iVar1 = (**(code **)(*DAT_007409ec + 0x10))(DAT_007409ec,0,param_2,param_3,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_004c4400(iVar1);
      FUN_004c4150(s__s__d____could_set_entries___s__005b5ba0,s_D__Work_dxdraw_Pal_cpp_005b5b10,200,
                   uVar2);
    }
  }
  return 0;
}


/* ==== 004c9ff0 FUN_004c9ff0 ==== */

void FUN_004c9ff0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int i;
  
  if (DAT_007409f8 == 0) {
    if (DAT_007409f4 == 0) {
      FUN_004c4150(s__s__d____palette_was_not_initial_005b5b78,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0xee);
    }
    if (param_2 < 0) {
      FUN_004c4150(s__s__d____illegal_palette_base_en_005b5c04,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0xf1,param_2);
    }
    i = param_2 + param_3;
    if ((i < 0) || (0x100 < i)) {
      FUN_004c4150(s__s__d____trying_to_reference_an_i_005b5bc4,s_D__Work_dxdraw_Pal_cpp_005b5b10,
                   0xf4,i);
    }
    if (((param_4 != 0) && (param_4 != 0x40)) && (param_4 != 0x80)) {
      FUN_004c4150(s__s__d____illegal_flag_value__d_005b5c30,s_D__Work_dxdraw_Pal_cpp_005b5b10,0xfa,
                   param_4);
    }
    if (param_2 < i) {
      puVar1 = (undefined1 *)(param_1 + 3 + param_2 * 4);
      i = i - param_2;
      do {
        *puVar1 = (char)param_4;
        puVar1 = puVar1 + 4;
        i = i + -1;
      } while (i != 0);
    }
    if (param_5 != 0) {
      FUN_004c9e70(param_1,param_2,param_3);
    }
  }
  return;
}


