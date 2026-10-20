/* spel.dat — game/pth_ptrf.cpp: 10 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00465620 FUN_00465620 ==== */

void FUN_00465620(int param_1)

{
  if (*(int *)(param_1 + 0x10) != -1) {
    FUN_0049eb50(*(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x30 + DAT_00715e50));
    FUN_0049e570();
    *(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x5c + DAT_00715e50) = 0;
  }
  return;
}


/* ==== 00465870 FUN_00465870 ==== */

void FUN_00465870(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00465880 FUN_00465880 ==== */

void FUN_00465880(void)

{
  FUN_005584e0(&LAB_00465890);
  return;
}


/* ==== 004658b0 FUN_004658b0 ==== */

void FUN_004658b0(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 004658c0 FUN_004658c0 ==== */

void FUN_004658c0(void)

{
  FUN_005584e0(&LAB_004658d0);
  return;
}


/* ==== 00465d00 FUN_00465d00 ==== */

undefined4 FUN_00465d00(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < DAT_00712108)) {
    iVar2 = FUN_0040db00(param_1);
    if (iVar2 == 0) {
      iVar2 = (&DAT_0070a244)[param_1 * 0xd0];
      cVar1 = FUN_00413f00(iVar2,1,0,1,param_1);
      if (cVar1 != '\0') {
        *(undefined1 **)(iVar2 * 0xf0 + 0x6c + DAT_00715e50) = &LAB_004161d0;
        iVar2 = FUN_00414070(iVar2);
        *(undefined4 *)(&DAT_005d1bbc + iVar2 * 0x38) = 1;
      }
    }
    return 1;
  }
  FUN_004c4150(s__s___d__Invalid_Path_Index___d__005a7178,
               s_C__Work_A2IV_Game_prog_pth_ptrf__005a7154,0xeb,param_1);
  return 0;
}


/* ==== 00465e30 FUN_00465e30 ==== */

void FUN_00465e30(void)

{
  FUN_0054b4b1();
  return;
}


/* ==== 00465e40 FUN_00465e40 ==== */

void FUN_00465e40(void)

{
  FUN_005584e0(&LAB_00465e50);
  return;
}


/* ==== 00465e70 FUN_00465e70 ==== */

void FUN_00465e70(void)

{
  FUN_0054b9c9();
  return;
}


/* ==== 00465e80 FUN_00465e80 ==== */

void FUN_00465e80(void)

{
  FUN_005584e0(&LAB_00465e90);
  return;
}


