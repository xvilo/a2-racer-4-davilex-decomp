/* Menu.exe — units/FormWheelSettings.pas: 2 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00492b00 TfrmWheelSettings.virtual_0e8 ==== */

void TfrmWheelSettings_virtual_0e8(int param_1)

{
  TDaviGraphicSlider_SetPosition
            (*(int **)(param_1 + 0x2fc),*(int *)(*(int *)(param_1 + 0x304) + 0x2c));
  return;
}


/* ==== 00492b1c TfrmWheelSettings.virtual_0ec ==== */

void TfrmWheelSettings_virtual_0ec(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x304) + 0x2c) =
       *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x204);
  return;
}


