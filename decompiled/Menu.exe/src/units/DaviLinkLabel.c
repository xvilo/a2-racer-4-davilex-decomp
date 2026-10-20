/* Menu.exe — units/DaviLinkLabel.pas: 8 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004771d0 TDaviCustomLinkLabel.virtual_02c ==== */

int * TDaviCustomLinkLabel_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  HCURSOR in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TCustomLabel_virtual_02c(param_1,'\0',param_3);
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_00);
  param_1[0x4e] = (int)piVar1;
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_virtual_000_00416a80,'\x01',extraout_ECX_01);
  param_1[0x4f] = (int)piVar1;
  TControl_SetCursor(in_stack_ffffffe4);
  TFont_SetStyle((int *)param_1[0x16],4);
  TFont_SetColor((int *)param_1[0x16],0xff0000,extraout_ECX_02);
  TFont_SetStyle((int *)param_1[0x4e],4);
  TFont_SetColor((int *)param_1[0x4e],0xff,extraout_ECX_03);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


/* ==== 00477278 TDaviCustomLinkLabel.Destroy ==== */

void TDaviCustomLinkLabel_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x4e]);
  FUN_00402f9c((int *)piVar1[0x4f]);
  TGraphicControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 004772b8 TDaviLinkLabel.SetHoverFont ==== */

void TDaviLinkLabel_SetHoverFont(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x138) + 8))();
  return;
}


/* ==== 004772cc TDaviCustomLinkLabel.virtual_090 ==== */

void TDaviCustomLinkLabel_virtual_090(int param_1)

{
  if (*(short *)(param_1 + 0x142) != 0) {
    (**(code **)(param_1 + 0x140))(*(undefined4 *)(param_1 + 0x144),param_1);
  }
  return;
}


/* ==== 004772f0 TDaviCustomLinkLabel.virtual_094 ==== */

void TDaviCustomLinkLabel_virtual_094(int param_1)

{
  if (*(short *)(param_1 + 0x14a) != 0) {
    (**(code **)(param_1 + 0x148))(*(undefined4 *)(param_1 + 0x14c),param_1);
  }
  return;
}


/* ==== 00477314 FUN_00477314 ==== */

void FUN_00477314(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint format_val;
  uint uVar2;
  LPCSTR lpchText;
  HDC pHVar3;
  LPCSTR pCVar4;
  int i_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar5;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined *extraout_EDX;
  undefined *extraout_EDX_00;
  undefined *puVar6;
  tagRECT *lprc_val;
  ushort uVar7;
  LONG *pLVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  RECT local_3c;
  LONG local_2c [3];
  int local_20;
  tagRECT local_1c;
  undefined *local_c;
  undefined4 local_8;
  
  bVar9 = 0;
  puStack_4c = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_50 = &LAB_004775a1;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  piVar1 = (int *)param_1[0x48];
  local_8 = param_2;
  format_val = TLabel_GetTransparent((int)param_1);
  if ((char)format_val == '\0') {
    TBrush_SetColor((int *)piVar1[5],param_1[0x18]);
    TBrush_SetStyle((int *)piVar1[5],'\0');
    (**(code **)(*param_1 + 0x40))(param_1,&local_3c);
    FUN_0041907c(piVar1,&local_3c);
  }
  TBrush_SetStyle((int *)piVar1[5],'\x01');
  (**(code **)(*param_1 + 0x40))(param_1,&local_1c);
  uVar7 = *(ushort *)(&DAT_004ab470 + (uint)*(byte *)((int)param_1 + 0x12f) * 2) | 0x40 |
          *(ushort *)(&DAT_004ab468 + (uint)*(byte *)(param_1 + 0x4b) * 2);
  format_val = (uint)uVar7;
  if (*(char *)((int)param_1 + 0x12e) != '\0') {
    lprc_val = &local_1c;
    pLVar8 = local_2c;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *pLVar8 = lprc_val->left;
      lprc_val = (tagRECT *)((int)lprc_val + ((uint)bVar9 * -2 + 1) * 4);
      pLVar8 = pLVar8 + (uint)bVar9 * -2 + 1;
    }
    FUN_00403178(param_1,local_2c,format_val | 0x400);
    if (*(char *)((int)param_1 + 0x12e) == '\x02') {
      uVar2 = param_1[0xf] - local_20;
      if (SBORROW4(param_1[0xf],local_20)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      OffsetRect(&local_1c,0,uVar2);
    }
    else {
      uVar2 = param_1[0xf] - local_20;
      if (SBORROW4(param_1[0xf],local_20)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      i_val = (int)uVar2 >> 1;
      if (i_val < 0) {
        i_val = i_val + (uint)((uVar2 & 1) != 0);
      }
      OffsetRect(&local_1c,0,i_val);
    }
  }
  (**(code **)(*param_1 + 0x88))(param_1,&local_c);
  uVar5 = extraout_ECX;
  if ((uVar7 & 0x400) == 0) goto LAB_00477485;
  if (local_c != (undefined *)0x0) {
    if ((char)param_1[0x4c] == '\0') goto LAB_00477485;
    i_val = 0;
    puVar6 = local_c;
    if (*(int *)(local_c + -4) == 0) {
      i_val = thunk_FUN_00402808(0);
      uVar5 = extraout_ECX_00;
      puVar6 = extraout_EDX;
    }
    if (puVar6[i_val] != '&') goto LAB_00477485;
    i_val = 1;
    puVar6 = local_c;
    if (*(uint *)(local_c + -4) < 2) {
      i_val = thunk_FUN_00402808(1);
      uVar5 = extraout_ECX_01;
      puVar6 = extraout_EDX_00;
    }
    if (puVar6[i_val] != '\0') goto LAB_00477485;
  }
  FUN_00403ee4((int *)&local_c,(undefined4 *)&DAT_004775b8);
  uVar5 = extraout_ECX_02;
LAB_00477485:
  if ((char)param_1[0x4c] == '\0') {
    format_val = format_val | 0x800;
  }
  format_val = FUN_00430668(param_1,format_val,uVar5);
  TCanvas_SetFont(param_1[0x48]);
  uVar2 = (**(code **)(*param_1 + 0x4c))();
  if ((char)uVar2 == '\0') {
    OffsetRect(&local_1c,1,1);
    uVar2 = TFont_SetColor(*(int **)(param_1[0x48] + 0xc),-0x7fffffec,extraout_ECX_03);
    if ((int)format_val < 0) {
      thunk_FUN_00402808(uVar2);
    }
    lprc_val = &local_1c;
    uVar2 = format_val;
    i_val = FUN_00403edc((int)local_c);
    lpchText = FUN_004040a0(local_c);
    pCVar4 = lpchText;
    pHVar3 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar3,pCVar4,i_val,lprc_val,uVar2);
    OffsetRect(&local_1c,-1,-1);
    uVar2 = TFont_SetColor(*(int **)(param_1[0x48] + 0xc),-0x7ffffff0,extraout_ECX_04);
    if ((int)format_val < 0) {
      thunk_FUN_00402808(uVar2);
    }
    lprc_val = &local_1c;
    i_val = FUN_00403edc((int)local_c);
    pHVar3 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar3,lpchText,i_val,lprc_val,format_val);
  }
  else {
    if ((int)format_val < 0) {
      thunk_FUN_00402808(uVar2);
    }
    lprc_val = &local_1c;
    i_val = FUN_00403edc((int)local_c);
    pCVar4 = FUN_004040a0(local_c);
    pHVar3 = (HDC)FUN_004194d8((int *)param_1[0x48]);
    DrawTextA(pHVar3,pCVar4,i_val,lprc_val,format_val);
  }
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004775a8;
  puStack_50 = (undefined1 *)0x4775a0;
  FUN_00403c5c((int *)&local_c);
  return;
}


/* ==== 004775bc TDaviCustomLinkLabel.CMMouseEnter ==== */

void TDaviCustomLinkLabel_CMMouseEnter(int *param_1)

{
  FUN_00477314(param_1,param_1[0x4e]);
  TControl_CMMouseEnter((int)param_1);
  (**(code **)(*param_1 + 0x90))();
  return;
}


/* ==== 004775ec TDaviCustomLinkLabel.CMMouseLeave ==== */

void TDaviCustomLinkLabel_CMMouseLeave(int *param_1)

{
  FUN_00477314(param_1,param_1[0x16]);
  TControl_CMMouseLeave((int)param_1);
  (**(code **)(*param_1 + 0x94))();
  return;
}


