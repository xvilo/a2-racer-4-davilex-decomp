/* Menu.exe — units/ExtCtrls.pas: 104 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 0044ddc4 FUN_0044ddc4 ==== */

void FUN_0044ddc4(int param_1)

{
  tagPOINT tStack_c;
  
  FUN_0044dc98(param_1);
  if (*(char *)(param_1 + 0x79) == '\0') {
    GetCursorPos(&tStack_c);
    FUN_0044e014(param_1,&tStack_c.x);
  }
  else if (*(char *)(param_1 + 0x79) == '\x01') {
    FUN_0044ddf8(param_1);
  }
  return;
}


/* ==== 0044ddf8 FUN_0044ddf8 ==== */

void FUN_0044ddf8(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    bVar1 = FUN_00434cdc(*(int *)(param_1 + 0x74));
    if (bVar1) {
      pHVar2 = (HWND)FUN_004349e0(*(int **)(param_1 + 0x74));
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        nCmdShow = 0;
        pHVar2 = (HWND)FUN_004349e0(*(int **)(param_1 + 0x74));
        ShowWindow(pHVar2,nCmdShow);
      }
    }
  }
  return;
}


/* ==== 0044de34 FUN_0044de34 ==== */

void FUN_0044de34(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_0044ddf8(param_1);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_0044bdd4();
    FUN_0044dc98(param_1);
  }
  return;
}


/* ==== 0044de5c FUN_0044de5c ==== */

int FUN_0044de5c(char *param_1,int param_2,char param_3)

{
  char cVar1;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (param_3 == cVar1);
  return param_2;
}


/* ==== 0044de6c FUN_0044de6c ==== */

int FUN_0044de6c(void)

{
  char cVar1;
  HCURSOR hIcon;
  BOOL BVar2;
  LPBITMAPINFO lpbmi_val;
  uint uVar3;
  LPVOID lpv_bits;
  char *pcVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  ICONINFO *piconinfo;
  ICONINFO iconinfo;
  int local_18;
  LPBITMAPINFO local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (**(code **)PTR_DAT_004ab760)();
  piconinfo = &iconinfo;
  hIcon = GetCursor();
  uStack_48 = 0x44de92;
  BVar2 = GetIconInfo(hIcon,piconinfo);
  if (BVar2 != 0) {
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    puStack_4c = (undefined1 *)0x44deb6;
    FUN_0041a778(iconinfo.hbmMask,&local_c,&local_10);
    puStack_4c = (undefined1 *)0x44dec1;
    lpbmi_val = (LPBITMAPINFO)FUN_0040816c(local_c + local_10);
    puStack_50 = &LAB_0044df7f;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    lpv_bits = (LPVOID)((int)&(((tagBITMAPINFO *)(lpbmi_val->bmiColors + -10))->bmiHeader).biSize +
                       local_c);
    puStack_4c = &stack0xfffffffc;
    local_14 = lpbmi_val;
    cVar1 = FUN_0041a830(iconinfo.hbmMask,(HPALETTE)0x0,lpbmi_val,lpv_bits);
    if ((cVar1 != '\0') && ((local_14->bmiHeader).biBitCount == 1)) {
      iVar5 = (lpbmi_val->bmiHeader).biWidth;
      uVar3 = iVar5 * (uint)(lpbmi_val->bmiHeader).biBitCount + 0x1f & 0xffffffe0;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 7;
      }
      local_18 = (int)uVar3 >> 3;
      iVar5 = iVar5 * local_18;
      pcVar4 = (char *)((int)lpv_bits + (local_10 - iVar5));
      local_8 = FUN_0044de5c(pcVar4,iVar5,-1);
      if ((local_8 == 0) && ((lpbmi_val->bmiHeader).biWidth * 2 <= (lpbmi_val->bmiHeader).biHeight))
      {
        local_8 = FUN_0044de5c(pcVar4 + -iVar5,iVar5,'\0');
      }
      local_8 = local_8 / local_18 - iconinfo.yHotspot;
    }
    *in_FS_OFFSET = uStack_54;
    puStack_4c = &LAB_0044df86;
    puStack_50 = (undefined1 *)0x44df7e;
    iVar5 = FUN_00402794((int)local_14);
    return iVar5;
  }
  return local_8;
}


/* ==== 0044dfc0 FUN_0044dfc0 ==== */

void FUN_0044dfc0(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_004aa930;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_4 + -4) + 0x74);
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar2 = (undefined *)FUN_00402ee0(puVar1), param_1 == puVar2)) {
    return;
  }
  FUN_00402f9c(*(int **)(*(int *)(param_4 + -4) + 0x74));
  uVar3 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)(param_4 + -4));
  *(undefined4 *)(*(int *)(param_4 + -4) + 0x74) = uVar3;
  return;
}


/* ==== 0044e014 FUN_0044e014 ==== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0044e014(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int i_val;
  LONG LVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  DWORD extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  LONG *pLVar6;
  tagRECT *rect;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  LONG local_84 [4];
  tagRECT rect_2;
  undefined4 local_64;
  undefined *local_60;
  int dx_val;
  int dy_val;
  undefined4 local_54;
  int local_50;
  tagRECT local_4c;
  int local_3c;
  undefined4 local_38;
  UINT elapse;
  UINT elapse_2;
  undefined *local_2c;
  undefined4 local_28;
  bool local_21;
  tagPOINT point;
  int local_18;
  int local_14;
  POINT point_2;
  int local_8;
  
  bVar7 = 0;
  local_90 = 0;
  local_94 = (undefined4 *)0x0;
  point_2.x = *param_2;
  point_2.y = param_2[1];
  puStack_a4 = (undefined1 *)0x44e046;
  local_8 = param_1;
  FUN_00404480((int)&local_64,(int)&DAT_00444028);
  puStack_a8 = &LAB_0044e3ac;
  uStack_ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_ac;
  *(undefined1 *)(local_8 + 0x48) = 0;
  puStack_a4 = &stack0xfffffffc;
  if ((*(char *)(local_8 + 0x78) != '\0') &&
     (puStack_a4 = &stack0xfffffffc, *(int *)(local_8 + 0x50) != 0)) {
    puStack_a4 = &stack0xfffffffc;
    cVar1 = FUN_004444a8();
    if (cVar1 != '\0') {
      piVar3 = FUN_0042d198(&point_2,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
      i_val = thunk_FUN_0044bc51((int)piVar3);
      if (i_val == *(int *)(local_8 + 0x50)) {
        local_64 = *(undefined4 *)(local_8 + 0x50);
        dx_val = point_2.x;
        dy_val = point_2.y;
        i_val = FUN_0044de6c();
        dy_val = dy_val + i_val;
        local_54 = FUN_0044b100();
        local_50 = *(int *)(local_8 + 0x4c);
        FUN_0042e13c(*(int *)(local_8 + 0x50),local_84);
        pLVar6 = local_84;
        rect = &local_4c;
        for (i_val = 4; i_val != 0; i_val = i_val + -1) {
          rect->left = *pLVar6;
          pLVar6 = pLVar6 + (uint)bVar7 * -2 + 1;
          rect = (tagRECT *)((int)rect + ((uint)bVar7 * -2 + 1) * 4);
        }
        (**(code **)(**(int **)(local_8 + 0x50) + 0x3c))(*(int **)(local_8 + 0x50),&local_18);
        point.x = 0;
        point.y = 0;
        piVar3 = *(int **)(*(int *)(local_8 + 0x50) + 0x24);
        if (piVar3 == (int *)0x0) {
          piVar3 = *(int **)(local_8 + 0x50);
          uVar5 = FUN_00403114(piVar3,(int)&PTR_TWinControl_virtual_000_0042ac0c);
          if (((char)uVar5 != '\0') && (piVar3[0x59] != 0)) {
            ClientToScreen((HWND)piVar3[0x59],&point);
          }
        }
        else {
          (**(code **)(*piVar3 + 0x3c))(piVar3,&point);
        }
        OffsetRect(&local_4c,point.x - local_18,point.y - local_14);
        FUN_0042e2d8(*(int **)(local_8 + 0x50),&point_2.x,&local_8c);
        local_3c = local_8c;
        local_38 = local_88;
        FUN_0044bc1c(*(int *)(local_8 + 0x50),(int *)&local_94);
        FUN_0042bb4c(local_94,&local_90);
        FUN_00403cf4((int *)&local_2c,local_90);
        elapse = 0;
        elapse_2 = *(UINT *)(local_8 + 100);
        local_60 = PTR_PTR_004aa930;
        local_28 = 0;
        i_val = FUN_0042f720(*(int *)(local_8 + 0x50),0xb030,0,&local_64);
        local_21 = i_val == 0;
        uVar5 = extraout_ECX;
        if ((i_val == 0) && (*(short *)(local_8 + 0x10a) != 0)) {
          (**(code **)(local_8 + 0x108))
                    (*(undefined4 *)(local_8 + 0x10c),&local_2c,&local_21,&local_64);
          uVar5 = extraout_ECX_00;
        }
        if ((local_21 == false) || (*(int *)(local_8 + 0x50) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined1 *)(local_8 + 0x48) = uVar2;
        if ((*(char *)(local_8 + 0x48) != '\0') && (local_2c != (undefined *)0x0)) {
          FUN_0044dfc0(local_60,local_8,uVar5,(int)&stack0xfffffffc);
          (**(code **)(**(int **)(local_8 + 0x74) + 0x68))
                    (*(int **)(local_8 + 0x74),*(undefined1 *)(*(int *)(local_8 + 0x50) + 0x4f));
          (**(code **)(**(int **)(local_8 + 0x74) + 0xc0))
                    (*(int **)(local_8 + 0x74),local_54,local_2c,&rect_2,local_28);
          OffsetRect(&rect_2,dx_val,dy_val);
          cVar1 = FUN_00403178(*(int **)(local_8 + 0x74),extraout_EDX_00,extraout_ECX_01);
          if (cVar1 != '\0') {
            LVar4 = FUN_00419338(*(int **)(*(int *)(local_8 + 0x74) + 0x1f0),local_2c);
            rect_2.left = rect_2.left - (LVar4 + 5);
            LVar4 = FUN_00419338(*(int **)(*(int *)(local_8 + 0x74) + 0x1f0),local_2c);
            rect_2.right = rect_2.right - (LVar4 + 5);
          }
          FUN_0042e2ac(*(int **)(local_8 + 0x50),&local_4c.left,&local_8c);
          *(int *)(local_8 + 0x54) = local_8c;
          *(undefined4 *)(local_8 + 0x58) = local_88;
          FUN_0042e2ac(*(int **)(local_8 + 0x50),&local_4c.right,&local_8c);
          *(int *)(local_8 + 0x5c) = local_8c;
          *(undefined4 *)(local_8 + 0x60) = local_88;
          TGroupBox_SetColor(*(int *)(local_8 + 0x74),local_50);
          uVar5 = (**(code **)(**(int **)(local_8 + 0x74) + 0xbc))
                            (*(int **)(local_8 + 0x74),&rect_2,local_2c,local_28);
          FUN_0044bd60(uVar5,extraout_EDX_01,extraout_ECX_02);
          if ((int)elapse < 1) {
            FUN_0044dc60(local_8,elapse_2,1);
          }
          else {
            FUN_0044dc60(local_8,elapse,0);
          }
          goto LAB_0044e380;
        }
      }
    }
  }
  if ((int)elapse < 1) {
    FUN_0044de34(local_8);
  }
  else {
    FUN_0044dc60(local_8,elapse,0);
  }
LAB_0044e380:
  *in_FS_OFFSET = uStack_ac;
  puStack_a4 = &LAB_0044e3b3;
  puStack_a8 = (undefined1 *)0x44e39d;
  FUN_00403c80((int *)&local_94,2);
  puStack_a8 = (undefined1 *)0x44e3ab;
  FUN_0040454c((int)&local_64,(int)&DAT_00444028);
  return;
}


/* ==== 0044e3bc FUN_0044e3bc ==== */

char FUN_0044e3bc(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  
  iVar3 = *(int *)(DAT_004ac7d8 + 0x60);
  if (iVar3 == 0) {
LAB_0044e3e7:
    iVar2 = *(int *)(param_1 + 0x38);
    if ((iVar3 != iVar2) && (iVar2 != 0)) {
      iVar3 = FUN_0042f720(iVar2,param_2,0,param_3);
      if (iVar3 == 1) goto LAB_0044e407;
    }
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_0042f720(iVar3,param_2,0,param_3);
    if (iVar2 != 1) goto LAB_0044e3e7;
LAB_0044e407:
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    uVar4 = FUN_00403114(param_3,(int)&PTR_TCustomAction_virtual_000_0043943c);
    if ((((char)uVar4 != '\0') && (*(char *)((int)param_3 + 0x59) != '\0')) &&
       ((char)param_3[0x14] != '\0')) {
      FUN_00439d30(param_3,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(short *)((int)param_3 + 0x32) != 0));
    }
  }
  return cVar1;
}


/* ==== 0044e44c FUN_0044e44c ==== */

uint FUN_0044e44c(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0xaa) != 0) {
    param_1 = (**(code **)(param_1 + 0xa8))(*(undefined4 *)(param_1 + 0xac),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 0044e474 FUN_0044e474 ==== */

uint FUN_0044e474(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0xb2) != 0) {
    param_1 = (**(code **)(param_1 + 0xb0))(*(undefined4 *)(param_1 + 0xb4),param_2,&local_8);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),(undefined1)local_8);
}


/* ==== 0044e520 FUN_0044e520 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e520(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac7f8 = _DAT_004ac7f8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 0044f8e8 FUN_0044f8e8 ==== */

void FUN_0044f8e8(void)

{
  int *piVar1;
  int in_stack_00000004;
  POINT point;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = *(int **)(in_stack_00000004 + -4);
  local_c = piVar1[2];
  local_8 = piVar1[1];
  local_14 = *piVar1;
  local_10 = piVar1[3];
  TPen_SetColor(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x10),
                *(undefined4 *)(in_stack_00000004 + -0xc));
  point.x = local_14;
  point.y = local_10;
  local_24 = *piVar1;
  local_20 = piVar1[1];
  local_1c = local_c;
  local_18 = local_8;
  FUN_00419180(*(int **)(in_stack_00000004 + -8),&point,2);
  TPen_SetColor(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x10),
                *(undefined4 *)(in_stack_00000004 + 0xc));
  local_1c = local_14 + -1;
  point.x = local_c;
  point.y = local_8;
  local_24 = piVar1[2];
  local_20 = piVar1[3];
  local_18 = local_10;
  local_14 = local_1c;
  FUN_00419180(*(int **)(in_stack_00000004 + -8),&point,2);
  return;
}


/* ==== 0044f9ac FUN_0044f9ac ==== */

void FUN_0044f9ac(int param_1,LPRECT lprc_val,undefined4 param_3,int param_4)

{
  TPen_SetWidth(*(int **)(param_1 + 0x10),1);
  lprc_val->bottom = lprc_val->bottom + -1;
  lprc_val->right = lprc_val->right + -1;
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_0044f8e8();
    InflateRect(lprc_val,-1,-1);
  }
  lprc_val->bottom = lprc_val->bottom + 1;
  lprc_val->right = lprc_val->right + 1;
  return;
}


/* ==== 0044fa0c TImage.virtual_02c ==== */

int * TImage_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TGraphicControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x800;
  piVar1 = FUN_0041b354((int *)&PTR_TPicture_virtual_000_0041702c,'\x01',extraout_ECX_00);
  param_1[0x4a] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)FUN_0044fea8;
  piVar1[7] = (int)param_1;
  iVar2 = FUN_00403190(param_1,CONCAT22(extraout_var,0xffcd));
  piVar1[6] = iVar2;
  TControl_SetHeight(param_1,0x69);
  TControl_SetWidth(param_1,0x69);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 0044faa0 TImage.Destroy ==== */

void TImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x4a]);
  TGraphicControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 0044fad0 TImage.dynamic_ffdc ==== */

undefined4 TImage_dynamic_ffdc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x128) + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x24))();
  }
  return uVar2;
}


/* ==== 0044faec FUN_0044faec ==== */

void FUN_0044faec(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[0x4e] != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    return;
  }
  if (*(char *)((int)param_1 + 0x139) == '\0') {
    uVar3 = FUN_0041b9c4(param_1[0x4a]);
    uVar4 = FUN_0041b9ac(param_1[0x4a]);
    FUN_0040f7e8(0,0,uVar4,param_2,uVar3);
  }
  else {
    iVar1 = FUN_0041b9c4(param_1[0x4a]);
    iVar2 = FUN_0041b9c4(param_1[0x4a]);
    iVar5 = param_1[0xf] - iVar2 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((param_1[0xf] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_0041b9ac(param_1[0x4a]);
    iVar6 = param_1[0xe] - iVar2 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((param_1[0xe] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_0041b9ac(param_1[0x4a]);
    FUN_0040f804(iVar6,iVar5,iVar2,param_2,iVar1);
  }
  return;
}


/* ==== 0044fb8c TImage.virtual_084 ==== */

void TImage_virtual_084(int *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  int local_1c [4];
  undefined1 local_9;
  int *local_8;
  
  local_8 = param_1;
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    piVar1 = (int *)param_1[0x48];
    TPen_SetStyle((int *)piVar1[4],1);
    TBrush_SetStyle((int *)piVar1[5],'\x01');
    uStackY_2c = 0x44fbd5;
    FUN_004191b8(piVar1,0,0,local_8[0xf],local_8[0xe]);
  }
  local_9 = (undefined1)local_8[0x4f];
  *(undefined1 *)(local_8 + 0x4f) = 1;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  piVar1 = (int *)local_8[0x48];
  FUN_0044faec(local_8,local_1c);
  FUN_00419200(piVar1,local_1c,*(int **)(local_8[0x4a] + 4));
  *in_FS_OFFSET = uStackY_2c;
  *(undefined1 *)(local_8 + 0x4f) = local_9;
  return;
}


/* ==== 0044fc4c FUN_0044fc4c ==== */

undefined4 FUN_0044fc4c(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  HWND hWnd;
  undefined4 uVar5;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar5 = 0;
  piVar1 = *(int **)(param_1[0x4a] + 4);
  if ((((*(char *)((int)param_1 + 0x47) != '\0') && ((*(byte *)(param_1 + 8) & 1) == 0)) &&
      (piVar1 != (int *)0x0)) && (*(char *)((int)piVar1 + 0x1a) != '\0')) {
    iVar3 = (**(code **)(*piVar1 + 0x24))();
    if (iVar3 == 0) {
      *(undefined1 *)((int)piVar1 + 0x1a) = 0;
    }
    else {
      piVar4 = FUN_00444864(param_1);
      if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x216) != '\0')) {
        bVar2 = FUN_00434cdc((int)piVar4);
        if (bVar2) {
          if ((char)param_1[0x4f] == '\0') {
            lParam = 0;
            wParam = 0;
            Msg = 0x30f;
            hWnd = (HWND)FUN_004349e0(piVar4);
            PostMessageA(hWnd,Msg,wParam,lParam);
          }
          else {
            FUN_0042f720((int)piVar4,0x30f,0,0);
          }
          uVar5 = 1;
          *(undefined1 *)((int)piVar1 + 0x1a) = 0;
        }
      }
    }
  }
  return uVar5;
}


/* ==== 0044fce4 TImage.dynamic_ffcd ==== */

void TImage_dynamic_ffcd(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined3 in_register_00000005;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if ((*(byte *)((int)param_1 + 0x13a) & (byte)param_6) != 0) {
    uVar1 = FUN_0044fc4c(param_1);
    if ((char)uVar1 == '\0') {
      (**(code **)(*param_1 + 0x84))();
      in_register_00000005 = extraout_var_00;
    }
    else {
      (**(code **)(*param_1 + 0x80))();
      in_register_00000005 = extraout_var;
    }
  }
  if (*(short *)((int)param_1 + 0x132) != 0) {
    (*(code *)param_1[0x4c])
              (param_1[0x4d],param_2,CONCAT31(in_register_00000005,param_3),param_4,param_5,param_6,
               param_7);
  }
  return;
}


/* ==== 0044fd50 FUN_0044fd50 ==== */

void FUN_0044fd50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_0044fe42;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_1;
  if (*(int *)(*(int *)(param_1 + 0x128) + 4) == 0) {
    puStack_24 = (undefined1 *)0x44fd88;
    puStack_18 = &stack0xfffffffc;
    local_c = TBitmap_virtual_00c((int *)&PTR_TPersistent_virtual_000_004173a4,'\x01',param_3);
    puStack_28 = &LAB_0044fddc;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    (**(code **)(*local_c + 0x40))(local_c,*(undefined4 *)(local_8 + 0x38));
    (**(code **)(*local_c + 0x34))(local_c,*(undefined4 *)(local_8 + 0x3c));
    FUN_0041b4a4(*(int **)(local_8 + 0x128),local_c);
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x44fde3;
    puStack_28 = (undefined1 *)0x44fddb;
    FUN_00402f9c(local_c);
    return;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x128) + 4);
  puStack_24 = (undefined1 *)0x44fdfc;
  uVar1 = FUN_00403114(piVar2,(int)&PTR_TPersistent_virtual_000_004173a4);
  if ((char)uVar1 == '\0') {
    puStack_24 = (undefined1 *)0x44fe18;
    FUN_00405808((undefined4 *)PTR_PTR_004ab6c4,(int *)&local_10);
    puStack_24 = (undefined1 *)0x44fe27;
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_10);
    puStack_24 = (undefined1 *)0x44fe2c;
    FUN_004036f4(piVar2);
  }
  else {
    puStack_24 = (undefined1 *)0x44fe07;
    FUN_0041df1c(piVar2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0044fe49;
  puStack_1c = (undefined1 *)0x44fe41;
  FUN_00403c5c((int *)&local_10);
  return;
}


/* ==== 0044fe50 TImage.SetCenter ==== */

void TImage_SetCenter(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x139)) {
    *(char *)((int)param_1 + 0x139) = param_2;
    FUN_0044fea8(param_1);
  }
  return;
}


/* ==== 0044fe68 TImage.SetPicture ==== */

void TImage_SetPicture(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x128) + 8))();
  return;
}


/* ==== 0044fe78 TImage.SetStretch ==== */

void TImage_SetStretch(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4e]) {
    *(char *)(param_1 + 0x4e) = param_2;
    FUN_0044fea8(param_1);
  }
  return;
}


/* ==== 0044fe90 TImage.SetTransparent ==== */

void TImage_SetTransparent(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x13b)) {
    *(char *)((int)param_1 + 0x13b) = param_2;
    FUN_0044fea8(param_1);
  }
  return;
}


/* ==== 0044fea8 FUN_0044fea8 ==== */

void FUN_0044fea8(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((char)param_1[0x13] != '\0') {
    iVar3 = FUN_0041b9ac(param_1[0x4a]);
    if (0 < iVar3) {
      iVar3 = FUN_0041b9c4(param_1[0x4a]);
      if (0 < iVar3) {
        uVar4 = FUN_0041b9ac(param_1[0x4a]);
        uVar5 = FUN_0041b9c4(param_1[0x4a]);
        (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],uVar5,uVar4);
      }
    }
  }
  piVar1 = *(int **)(param_1[0x4a] + 4);
  if (piVar1 == (int *)0x0) {
    param_1[0x10] = param_1[0x10] & 0xffffffbf;
    goto LAB_0044ffa8;
  }
  uVar4 = FUN_00403114(piVar1,(int)&LAB_00417234);
  if ((char)uVar4 == '\0') {
    uVar4 = FUN_00403114(piVar1,(int)&PTR_TPersistent_virtual_000_004174e4);
    if ((char)uVar4 == '\0') {
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined1 *)((int)param_1 + 0x13b));
    }
  }
  cVar2 = (**(code **)(*piVar1 + 0x28))();
  if (cVar2 == '\0') {
    if ((char)param_1[0x4e] == '\0') {
      iVar3 = (**(code **)(*piVar1 + 0x2c))();
      if (param_1[0xe] <= iVar3) {
        iVar3 = (**(code **)(*piVar1 + 0x20))();
        if (param_1[0xf] <= iVar3) goto LAB_0044ff61;
      }
      goto LAB_0044ff6e;
    }
LAB_0044ff61:
    param_1[0x10] = param_1[0x10] | 0x40;
  }
  else {
LAB_0044ff6e:
    param_1[0x10] = param_1[0x10] & 0xffffffbf;
  }
  uVar4 = FUN_0044fc4c(param_1);
  if (((char)uVar4 != '\0') && ((char)param_1[0x4f] != '\0')) {
    (**(code **)(*param_1 + 0x80))();
  }
LAB_0044ffa8:
  if ((char)param_1[0x4f] == '\0') {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 0044ffc0 TImage.virtual_034 ==== */

undefined4 TImage_virtual_034(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  
  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    iVar1 = FUN_0041b9ac(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return uVar3;
    }
    iVar1 = FUN_0041b9c4(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return uVar3;
    }
  }
  if ((*(char *)(param_1 + 0x4b) == '\0') || ((byte)(*(char *)(param_1 + 0x4b) - 3U) < 2)) {
    uVar2 = FUN_0041b9ac(*(int *)(param_1 + 0x128));
    *param_2 = uVar2;
  }
  if (*(byte *)(param_1 + 0x4b) < 3) {
    uVar2 = FUN_0041b9c4(*(int *)(param_1 + 0x128));
    *param_3 = uVar2;
  }
  return uVar3;
}


/* ==== 00450028 TBevel.virtual_02c ==== */

int * TBevel_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TGraphicControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x800;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x129) = 0;
  TControl_SetWidth(param_1,0x32);
  TControl_SetHeight(param_1,0x32);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 00450094 TBevel.SetStyle ==== */

void TBevel_SetStyle(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4a]) {
    *(char *)(param_1 + 0x4a) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 004500a8 TBevel.SetShape ==== */

void TBevel_SetShape(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x129)) {
    *(char *)((int)param_1 + 0x129) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


/* ==== 004500bc FUN_004500bc ==== */

void FUN_004500bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  LONG local_24;
  LONG local_20;
  POINT point;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(*(int *)(param_4 + -4) + 0x120);
  TPen_SetColor((int *)piVar1[4],*(undefined4 *)(param_4 + -8));
  FUN_0040f7d0(*param_1,param_1[3],&local_24);
  point.x = local_24;
  point.y = local_20;
  FUN_0040f7d0(*param_1,param_1[1],&local_2c);
  local_14 = local_2c;
  local_10 = local_28;
  FUN_0040f7d0(param_1[2],param_1[1],&local_34);
  local_c = local_34;
  local_8 = local_30;
  FUN_00419180(piVar1,&point,2);
  TPen_SetColor((int *)piVar1[4],*(undefined4 *)(param_4 + -0xc));
  FUN_0040f7d0(param_1[2],param_1[1],&local_24);
  point.x = local_24;
  point.y = local_20;
  FUN_0040f7d0(param_1[2],param_1[3],&local_2c);
  local_14 = local_2c;
  local_10 = local_28;
  FUN_0040f7d0(*param_1,param_1[3],&local_34);
  local_c = local_34;
  local_8 = local_30;
  FUN_00419180(piVar1,&point,2);
  return;
}


/* ==== 004501ac FUN_004501ac ==== */

void FUN_004501ac(undefined4 param_1,int x_val,int y_val,int y_val_2,int x_val_2,int param_6)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_6 + -4) + 0x120);
  TPen_SetColor((int *)piVar1[4],param_1);
  FUN_00419154(piVar1,x_val,y_val);
  FUN_004190f4(piVar1,x_val_2,y_val_2);
  return;
}


/* ==== 004501ec TBevel.virtual_084 ==== */

void TBevel_virtual_084(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int right_val;
  int bottom_val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar3 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  piVar1 = (int *)param_1[0x48];
  local_8 = param_1;
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    if (*(char *)((int)param_1 + 0x129) == '\x06') {
      TPen_SetStyle((int *)piVar1[4],2);
      TPen_SetMode((int *)piVar1[4],CONCAT31((int3)((uint)extraout_EDX >> 8),0xe),extraout_ECX);
      TPen_SetColor((int *)piVar1[4],0xffd8ce);
      TBrush_SetStyle((int *)piVar1[5],'\x01');
      right_val = TForm_GetClientWidth(local_8);
      bottom_val = TForm_GetClientHeight(local_8);
      FUN_004191b8(piVar1,0,0,bottom_val,right_val);
      return;
    }
    TPen_SetStyle((int *)piVar1[4],0);
    TPen_SetMode((int *)piVar1[4],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),4),extraout_ECX_00);
    TPen_SetColor((int *)piVar1[4],0);
    TBrush_SetStyle((int *)piVar1[5],'\0');
  }
  TPen_SetWidth((int *)piVar1[4],1);
  if ((char)local_8[0x4a] == '\0') {
    local_c = 0x80000010;
    local_10 = 0x80000014;
  }
  else {
    local_c = 0x80000014;
    local_10 = 0x80000010;
  }
  uVar2 = local_c;
  switch(*(undefined1 *)((int)local_8 + 0x129)) {
  case 0:
    FUN_0040f7e8(0,0,local_8[0xe] + -1,local_20,local_8[0xf] + -1);
    FUN_004500bc(local_20,extraout_EDX_01,extraout_ECX_01,(int)puVar3);
    break;
  case 1:
    local_c = local_10;
    FUN_0040f7e8(1,1,local_8[0xe] + -1,local_20,local_8[0xf] + -1);
    FUN_004500bc(local_20,extraout_EDX_02,extraout_ECX_02,(int)puVar4);
    local_10 = uVar2;
    local_c = uVar2;
    FUN_0040f7e8(0,0,local_8[0xe] + -2,local_20,local_8[0xf] + -2);
    FUN_004500bc(local_20,extraout_EDX_03,extraout_ECX_03,(int)puVar5);
    break;
  case 2:
    FUN_004501ac(local_c,0,0,0,local_8[0xe],(int)&stack0xfffffffc);
    FUN_004501ac(local_10,0,1,1,local_8[0xe],(int)&stack0xfffffffc);
    break;
  case 3:
    FUN_004501ac(local_c,0,local_8[0xf] + -2,local_8[0xf] + -2,local_8[0xe],(int)&stack0xfffffffc);
    FUN_004501ac(local_10,0,local_8[0xf] + -1,local_8[0xf] + -1,local_8[0xe],(int)&stack0xfffffffc);
    break;
  case 4:
    FUN_004501ac(local_c,0,0,local_8[0xf],0,(int)&stack0xfffffffc);
    FUN_004501ac(local_10,1,0,local_8[0xf],1,(int)&stack0xfffffffc);
    break;
  case 5:
    FUN_004501ac(local_c,local_8[0xe] + -2,0,local_8[0xf],local_8[0xe] + -2,(int)&stack0xfffffffc);
    FUN_004501ac(local_10,local_8[0xe] + -1,0,local_8[0xf],local_8[0xe] + -1,(int)&stack0xfffffffc);
  }
  return;
}


/* ==== 00450474 TTimer.virtual_02c ==== */

int * TTimer_virtual_02c(int *param_1,char param_2,int *param_3)

{
  HWND pHVar1;
  int *extraout_ECX;
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
  TComponent_virtual_02c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 1000;
  pHVar1 = FUN_0044463c();
  param_1[10] = (int)pHVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004504c4 TTimer.Destroy ==== */

void TTimer_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  *(undefined1 *)(piVar1 + 0xe) = 0;
  FUN_00450570((int)piVar1);
  FUN_004446f0((HWND)piVar1[10]);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 004504fc FUN_004504fc ==== */

void FUN_004504fc(int *param_1,UINT *param_2,undefined4 param_3)

{
  UINT UVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (*param_2 == 0x113) {
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    FUN_00403178(param_1,param_2,param_3);
    *in_FS_OFFSET = uVar2;
  }
  else {
    UVar1 = DefWindowProcA((HWND)param_1[10],*param_2,param_2[1],param_2[2]);
    param_2[3] = UVar1;
  }
  return;
}


/* ==== 00450570 FUN_00450570 ==== */

void FUN_00450570(int param_1)

{
  UINT_PTR UVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_004505ef;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  KillTimer(*(HWND *)(param_1 + 0x28),1);
  if (((*(UINT *)(param_1 + 0x24) != 0) && (*(char *)(param_1 + 0x38) != '\0')) &&
     (*(short *)(param_1 + 0x32) != 0)) {
    UVar1 = SetTimer(*(HWND *)(param_1 + 0x28),1,*(UINT *)(param_1 + 0x24),(TIMERPROC)0x0);
    if (UVar1 == 0) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab9f4,(int *)&local_8);
      piVar2 = FUN_0040b5d8((int *)&DAT_0040e9b0,'\x01',local_8);
      FUN_004036f4(piVar2);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004505f6;
  puStack_18 = (undefined1 *)0x4505ee;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 004505fc TTimer.SetEnabled ==== */

void TTimer_SetEnabled(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x38)) {
    *(char *)(param_1 + 0x38) = param_2;
    FUN_00450570(param_1);
  }
  return;
}


/* ==== 0045060c TTimer.SetInterval ==== */

void TTimer_SetInterval(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = param_2;
    FUN_00450570(param_1);
  }
  return;
}


/* ==== 0045061c TTimer.SetOnTimer ==== */

void TTimer_SetOnTimer(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_00450570(param_1);
  return;
}


/* ==== 00450634 TTimer.dynamic_fff0 ==== */

void TTimer_dynamic_fff0(int param_1)

{
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
  }
  return;
}


/* ==== 00450648 TCustomPanel.virtual_02c ==== */

int * TCustomPanel_virtual_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomControl_virtual_02c(param_1,'\0',param_3);
  param_1[0x10] = 0x8eb;
  TControl_SetWidth(param_1,0xb9);
  TControl_SetHeight(param_1,0x29);
  *(undefined1 *)((int)param_1 + 0x207) = 2;
  TPanel_SetBevelOuter(param_1,2);
  TPanel_SetBevelWidth(param_1,1);
  *(undefined1 *)(param_1 + 0x81) = 0;
  TGroupBox_SetColor((int)param_1,-0x7ffffff1);
  *(undefined1 *)((int)param_1 + 0x205) = 1;
  TForm_SetUseDockManager(param_1,1,extraout_ECX_00);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


/* ==== 004506e0 TCustomPanel.virtual_090 ==== */

void TCustomPanel_virtual_090(int *param_1,int *param_2)

{
  TWinControl_virtual_090(param_1,param_2);
  param_2[1] = param_2[1] | *(uint *)(&DAT_004aaa6c + (uint)*(byte *)(param_1 + 0x81) * 4);
  if (((*PTR_DAT_004ab7d4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x81] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


/* ==== 00450734 TCustomPanel.CMBorderChanged ==== */

void TCustomPanel_CMBorderChanged(int *param_1)

{
  TWinControl_CMBorderChanged(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00450748 TCustomPanel.CMTextChanged ==== */

void TCustomPanel_CMTextChanged(int *param_1)

{
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00450750 TCustomPanel.CMCtl3DChanged ==== */

void TCustomPanel_CMCtl3DChanged(int param_1,undefined4 param_2)

{
  if ((*PTR_DAT_004ab7d4 != '\0') && (*(char *)(param_1 + 0x204) == '\x01')) {
    FUN_00431e04(param_1);
  }
  TWinControl_CMCtl3DChanged(param_1,param_2);
  return;
}


/* ==== 0045077c TCustomPanel.CMIsToolControl ==== */

void TCustomPanel_CMIsToolControl(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x206) == '\0') {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}


/* ==== 00450790 TCustomPanel.WMWindowPosChanged ==== */

void TCustomPanel_WMWindowPosChanged(int *param_1,int param_2)

{
  undefined1 *puVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar4;
  BOOL BVar5;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  RECT rect;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00450880;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x205) == '\0') {
    TGroupBox_GetCaption((int)param_1,&local_18);
    puVar1 = puStack_28;
    if (local_18 == 0) {
      iVar3 = param_1[0x80];
      if (*(char *)((int)param_1 + 0x1f9) != '\0') {
        iVar3 = iVar3 + param_1[0x7f];
      }
      if (*(char *)((int)param_1 + 0x1fa) != '\0') {
        iVar3 = iVar3 + param_1[0x7f];
      }
      if (0 < iVar3) {
        rect.right = param_1[0xe];
        rect.bottom = param_1[0xf];
        if (*(int *)(*(int *)(param_2 + 8) + 0x10) != rect.right) {
          rect.top = 0;
          rect.left = (rect.right - iVar3) + -1;
          BVar5 = -1;
          pRVar4 = &rect;
          pHVar2 = (HWND)FUN_004349e0(param_1);
          InvalidateRect(pHVar2,pRVar4,BVar5);
        }
        if (*(int *)(*(int *)(param_2 + 8) + 0x14) != rect.bottom) {
          rect.left = 0;
          rect.top = (rect.bottom - iVar3) + -1;
          BVar5 = -1;
          pRVar4 = &rect;
          pHVar2 = (HWND)FUN_004349e0(param_1);
          InvalidateRect(pHVar2,pRVar4,BVar5);
        }
      }
      goto LAB_00450861;
    }
  }
  puStack_28 = puVar1;
  (**(code **)(*param_1 + 0x74))();
LAB_00450861:
  TWinControl_WMWindowPosChanged(param_1,param_2);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00450887;
  puStack_2c = (undefined1 *)0x45087f;
  FUN_00403c5c(&local_18);
  return;
}


/* ==== 00450890 FUN_00450890 ==== */

void FUN_00450890(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + -4) = 0x80000014;
  if (param_1 == '\x01') {
    *(undefined4 *)(param_4 + -4) = 0x80000010;
  }
  *(undefined4 *)(param_4 + -8) = 0x80000010;
  if (param_1 == '\x01') {
    *(undefined4 *)(param_4 + -8) = 0x80000014;
  }
  return;
}


/* ==== 004508c8 TCustomPanel.virtual_0b4 ==== */

void TCustomPanel_virtual_0b4(int *param_1)

{
  int *piVar1;
  LONG LVar2;
  LPCSTR lpchText;
  HDC hdc;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint format_val;
  undefined4 *in_FS_OFFSET;
  int cchText;
  tagRECT *lprc;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined *local_20;
  tagRECT rect;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_20 = (undefined *)0x0;
  puStack_34 = &LAB_00450a11;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  (**(code **)(*param_1 + 0x40))(param_1,&rect);
  if (*(char *)((int)param_1 + 0x1fa) != '\0') {
    FUN_00450890(*(char *)((int)param_1 + 0x1fa),extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    FUN_0044f9ac(param_1[0x7c],&rect,local_8,param_1[0x7f]);
  }
  FUN_0044f9ac(param_1[0x7c],&rect,param_1[0x18],param_1[0x80]);
  if (*(char *)((int)param_1 + 0x1f9) != '\0') {
    FUN_00450890(*(char *)((int)param_1 + 0x1f9),extraout_EDX_00,extraout_ECX_00,
                 (int)&stack0xfffffffc);
    FUN_0044f9ac(param_1[0x7c],&rect,local_8,param_1[0x7f]);
  }
  piVar1 = (int *)param_1[0x7c];
  TBrush_SetColor((int *)piVar1[5],param_1[0x18]);
  FUN_0041907c(piVar1,&rect);
  TBrush_SetStyle((int *)piVar1[5],'\x01');
  TCanvas_SetFont((int)piVar1);
  LVar2 = FUN_00419354(piVar1,&DAT_00450a28);
  format_val = (rect.bottom + rect.top) - LVar2;
  rect.top = (int)format_val >> 1;
  if (rect.top < 0) {
    rect.top = rect.top + (uint)((format_val & 1) != 0);
  }
  rect.bottom = LVar2 + rect.top;
  format_val = FUN_00430668(param_1,*(uint *)(&DAT_004aaa74 +
                                             (uint)*(byte *)((int)param_1 + 0x207) * 4) | 0x44,
                            extraout_ECX_01);
  lprc = &rect;
  cchText = -1;
  TGroupBox_GetCaption((int)param_1,(int *)&local_20);
  lpchText = FUN_004040a0(local_20);
  hdc = (HDC)FUN_004194d8(piVar1);
  DrawTextA(hdc,lpchText,cchText,lprc,format_val);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00450a18;
  puStack_34 = (undefined1 *)0x450a10;
  FUN_00403c5c((int *)&local_20);
  return;
}


/* ==== 00450a2c TPanel.SetAlignment ==== */

void TPanel_SetAlignment(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x207) = param_2;
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00450a38 TPanel.SetBevelInner ==== */

void TPanel_SetBevelInner(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x1f9) = param_2;
  FUN_0043134c(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00450a54 TPanel.SetBevelOuter ==== */

void TPanel_SetBevelOuter(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x1fa) = param_2;
  FUN_0043134c(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00450a70 TPanel.SetBevelWidth ==== */

void TPanel_SetBevelWidth(int *param_1,int param_2)

{
  param_1[0x7f] = param_2;
  FUN_0043134c(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00450a8c TPanel.SetBorderWidth ==== */

void TPanel_SetBorderWidth(int *param_1,int param_2)

{
  param_1[0x80] = param_2;
  FUN_0043134c(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


/* ==== 00450aa8 TPanel.SetBorderStyle ==== */

void TPanel_SetBorderStyle(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x204)) {
    *(char *)(param_1 + 0x204) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


/* ==== 00450abc TCustomPanel.dynamic_ffcf ==== */

undefined1 TCustomPanel_dynamic_ffcf(int param_1)

{
  return *(undefined1 *)(param_1 + 0x207);
}


/* ==== 00450ac4 TCustomPanel.virtual_084 ==== */

void TCustomPanel_virtual_084(int param_1,LPRECT lprc_val)

{
  int iVar1;
  
  TWinControl_virtual_084();
  InflateRect(lprc_val,-*(int *)(param_1 + 0x200),-*(int *)(param_1 + 0x200));
  iVar1 = 0;
  if (*(char *)(param_1 + 0x1fa) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1fc);
  }
  if (*(char *)(param_1 + 0x1f9) != '\0') {
    iVar1 = iVar1 + *(int *)(param_1 + 0x1fc);
  }
  InflateRect(lprc_val,-iVar1,-iVar1);
  return;
}


/* ==== 00450b1c TCustomPanel.CMDockClient ==== */

void TCustomPanel_CMDockClient(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int i_val;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c [4];
  int local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[0x13] == '\0') {
    puStack_2c = (undefined1 *)0x450c4c;
    TWinControl_CMDockClient(param_1,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 0x7e) = 1;
    puStack_30 = &LAB_00450c3a;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    piVar3 = (int *)(*(int *)(param_2 + 4) + 0x44);
    piVar4 = local_1c;
    for (i_val = 4; i_val != 0; i_val = i_val + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    cVar1 = *(char *)((int)local_8 + 0x4b);
    if (cVar1 == '\x01') {
      puVar2 = &stack0xfffffffc;
      if (local_8[0xf] == 0) {
        TControl_SetHeight(local_8,local_1c[3] - local_1c[1]);
        puVar2 = puStack_2c;
      }
    }
    else if (cVar1 == '\x02') {
      puVar2 = &stack0xfffffffc;
      if (local_8[0xf] == 0) {
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*local_8 + 0x7c))
                  (local_8,local_8[0xc],local_8[0xd] - (local_1c[3] - local_1c[1]),
                   local_1c[3] - local_1c[1],local_8[0xe]);
        puVar2 = puStack_2c;
      }
    }
    else if (cVar1 == '\x03') {
      puVar2 = &stack0xfffffffc;
      if (local_8[0xe] == 0) {
        puStack_2c = &stack0xfffffffc;
        TControl_SetWidth(local_8,local_1c[2] - local_1c[0]);
        puVar2 = puStack_2c;
      }
    }
    else {
      puVar2 = &stack0xfffffffc;
      if ((cVar1 == '\x04') && (puVar2 = &stack0xfffffffc, local_8[0xe] == 0)) {
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*local_8 + 0x7c))
                  (local_8,local_8[0xc] - (local_1c[2] - local_1c[0]),local_8[0xd],local_8[0xf],
                   local_1c[2] - local_1c[0]);
        puVar2 = puStack_2c;
      }
    }
    puStack_2c = puVar2;
    TWinControl_CMDockClient(local_8,local_c);
    FUN_00403794();
  }
  return;
}


/* ==== 00450c54 TCustomPanel.virtual_034 ==== */

undefined4 TCustomPanel_virtual_034(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined3 extraout_var;
  
  if (((char)param_1[0x7e] == '\0') &&
     (cVar1 = TWinControl_virtual_034(param_1,param_2,param_3), cVar1 != '\0')) {
    return CONCAT31(extraout_var,1);
  }
  return 0;
}


/* ==== 00450c80 FUN_00450c80 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450c80(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac800 = _DAT_004ac800 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 00450cb8 ShellExecuteA ==== */

HINSTANCE __stdcall
ShellExecuteA(HWND hwnd,LPCSTR lpOperation,LPCSTR lpFile,LPCSTR lpParameters,LPCSTR lpDirectory,
             INT nShowCmd)

{
  HINSTANCE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00450cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,nShowCmd);
  return pHVar1;
}


/* ==== 00450e48 FUN_00450e48 ==== */

int FUN_00450e48(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}


/* ==== 00450e50 FUN_00450e50 ==== */

void FUN_00450e50(int *param_1,LPSIZE param_2)

{
  int i_val;
  HDC hdc;
  char *pcVar1;
  LPSIZE lpsz;
  char local_3c [26];
  char local_22 [26];
  
  pcVar1 = local_3c;
  i_val = 0;
  do {
    *pcVar1 = (char)i_val + 'A';
    i_val = i_val + 1;
    pcVar1 = pcVar1 + 1;
  } while (i_val != 0x1a);
  i_val = 0;
  pcVar1 = local_22;
  do {
    *pcVar1 = (char)i_val + 'a';
    i_val = i_val + 1;
    pcVar1 = pcVar1 + 1;
  } while (i_val != 0x1a);
  i_val = 0x34;
  pcVar1 = local_3c;
  lpsz = param_2;
  hdc = (HDC)FUN_004194d8(param_1);
  GetTextExtentPointA(hdc,pcVar1,i_val,lpsz);
  param_2->cx = param_2->cx / 0x34;
  return;
}


/* ==== 00451008 FUN_00451008 ==== */

int * FUN_00451008(int *param_1,char param_2,int *param_3)

{
  BOOL BVar1;
  HFONT h_val;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffe90;
  undefined4 in_stack_fffffe94;
  undefined4 local_158 [70];
  LOGFONTA local_40;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffe90,in_stack_fffffe94);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TCustomForm_virtual_0cc(param_1,'\0',param_3);
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 != 0) {
    h_val = CreateFontIndirectA(&local_40);
    FUN_004183d0((int *)param_1[0x16],h_val);
  }
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_fffffe90;
  }
  return param_1;
}


/* ==== 0045113c FUN_0045113c ==== */

void FUN_0045113c(uint *param_1,byte param_2,ushort param_3)

{
  LONG nNumerator;
  LONG nNumerator_00;
  char cVar1;
  byte bVar2;
  int i_val;
  int *piVar3;
  uint format_val;
  LPCSTR pCVar4;
  int *piVar5;
  HDC pHVar6;
  int iVar7;
  HICON pHVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint j;
  undefined **ppuVar9;
  int *in_FS_OFFSET;
  bool bVar10;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  undefined *local_68;
  tagRECT rect;
  int *local_54;
  undefined **local_50;
  int *local_4c;
  byte local_46;
  byte local_45;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int mul_div;
  int mul_div_2;
  int local_2c;
  int mul_div_3;
  int mul_div_4;
  int mul_div_5;
  int mul_div_6;
  tagSIZE numerator;
  int *local_10;
  ushort local_b;
  byte local_9;
  uint *local_8;
  tagRECT *lprc_val;
  int y_bottom;
  
  puStack_84 = &stack0xfffffffc;
  local_74 = (uint *)0x0;
  local_70 = (uint *)0x0;
  local_6c = (uint *)0x0;
  local_68 = (undefined *)0x0;
  puStack_88 = &LAB_0045167b;
  puStack_8c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_8c;
  local_b = param_3;
  local_9 = param_2;
  local_8 = param_1;
  local_10 = FUN_00451008((int *)&PTR_TWinControl_virtual_000_00450ef0,'\x01',
                          *(int **)PTR_DAT_004ab8ac);
  (**(code **)(*local_10 + 0x68))(local_10,*(undefined1 *)(*(int *)PTR_DAT_004ab8ac + 0x28));
  TForm_SetBorderStyle((int)local_10,'\x03');
  i_val = FUN_00447524((int)local_10);
  TCanvas_SetFont(i_val);
  piVar3 = (int *)FUN_00447524((int)local_10);
  FUN_00450e50(piVar3,&numerator);
  nNumerator = numerator.cx;
  mul_div_6 = MulDiv(8,numerator.cx,4);
  nNumerator_00 = numerator.cy;
  mul_div_5 = MulDiv(8,numerator.cy,8);
  mul_div_4 = MulDiv(10,nNumerator,4);
  mul_div_3 = MulDiv(10,nNumerator_00,8);
  local_2c = MulDiv(0x32,nNumerator,4);
  j = 0;
  piVar3 = &DAT_004ac82c;
  local_50 = &PTR_PTR_004aaad8;
  do {
    bVar10 = (byte)j < 0xf;
    if ((byte)j < 0x10) {
      bVar10 = (*(byte *)((int)&local_b + ((int)(j & 0x7f) >> 3)) >> (j & 7) & 1) != 0;
    }
    if (bVar10) {
      if (*piVar3 == 0) {
        FUN_0040f7e8(0,0,0,&rect.left,0);
        format_val = FUN_004306a8((int)local_10);
        format_val = format_val | 0x420;
        lprc_val = &rect;
        i_val = -1;
        FUN_00405808((undefined4 *)*local_50,(int *)&local_68);
        pCVar4 = FUN_004040a0(local_68);
        piVar5 = (int *)FUN_00447524((int)local_10);
        pHVar6 = (HDC)FUN_004194d8(piVar5);
        DrawTextA(pHVar6,pCVar4,i_val,lprc_val,format_val);
        *piVar3 = (rect.right - rect.left) + 8;
      }
      if (local_2c < *piVar3) {
        local_2c = *piVar3;
      }
    }
    j = j + 1;
    local_50 = local_50 + 1;
    piVar3 = piVar3 + 1;
  } while ((char)j != '\v');
  mul_div_2 = MulDiv(0xe,numerator.cy,8);
  mul_div = MulDiv(4,numerator.cx,4);
  y_bottom = 0;
  j = FUN_0044b100();
  i_val = (int)j >> 1;
  if (i_val < 0) {
    i_val = i_val + (uint)((j & 1) != 0);
  }
  SetRect(&rect,0,0,i_val,y_bottom);
  j = FUN_004306a8((int)local_10);
  j = j | 0x450;
  lprc_val = &rect;
  i_val = FUN_00403edc((int)local_8);
  i_val = i_val + 1;
  pCVar4 = FUN_004040a0((undefined *)local_8);
  piVar3 = (int *)FUN_00447524((int)local_10);
  pHVar6 = (HDC)FUN_004194d8(piVar3);
  DrawTextA(pHVar6,pCVar4,i_val,lprc_val,j);
  pCVar4 = *(LPCSTR *)(&DAT_004aaa98 + (uint)local_9 * 4);
  local_38 = rect.right;
  local_3c = rect.bottom;
  if ((pCVar4 != (LPCSTR)0x0) && (local_38 = rect.right + mul_div_4 + 0x20, rect.bottom < 0x20)) {
    local_3c = 0x20;
  }
  i_val = 0;
  j = 0;
  do {
    bVar10 = (byte)j < 0xf;
    if ((byte)j < 0x10) {
      bVar10 = (*(byte *)((int)&local_b + ((int)(j & 0x7f) >> 3)) >> (j & 7) & 1) != 0;
    }
    if (bVar10) {
      i_val = i_val + 1;
    }
    j = j + 1;
  } while ((char)j != '\v');
  y_bottom = 0;
  if (i_val != 0) {
    y_bottom = local_2c * i_val + (i_val + -1) * mul_div;
  }
  i_val = FUN_00450e48(local_38,y_bottom);
  TForm_SetClientWidth(local_10,i_val + mul_div_6 * 2);
  TForm_SetClientHeight(local_10,local_3c + mul_div_2 + mul_div_3 + mul_div_5 * 2);
  j = FUN_0044b100();
  i_val = (int)j >> 1;
  if (i_val < 0) {
    i_val = i_val + (uint)((j & 1) != 0);
  }
  iVar7 = local_10[0xe] >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((local_10[0xe] & 1U) != 0);
  }
  TControl_SetLeft(local_10,i_val - iVar7);
  j = FUN_0044b0f4();
  i_val = (int)j >> 1;
  if (i_val < 0) {
    i_val = i_val + (uint)((j & 1) != 0);
  }
  iVar7 = local_10[0xf] >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((local_10[0xf] & 1U) != 0);
  }
  TControl_SetTop(local_10,i_val - iVar7);
  if (local_9 == 4) {
    FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_70);
    TGroupBox_SetCaption((int)local_10,local_70);
  }
  else {
    FUN_00405808((undefined4 *)(&PTR_PTR_004aaa84)[local_9],(int *)&local_6c);
    TGroupBox_SetCaption((int)local_10,local_6c);
  }
  if (pCVar4 != (LPCSTR)0x0) {
    piVar3 = TImage_virtual_02c((int *)&PTR_TControl_virtual_000_0044e5dc,'\x01',local_10);
    (**(code **)(*piVar3 + 0x18))(piVar3,"Image");
    (**(code **)(*piVar3 + 0x60))(piVar3,local_10);
    pHVar8 = LoadIconA((HINSTANCE)0x0,pCVar4);
    piVar5 = (int *)FUN_0041b474((int *)piVar3[0x4a]);
    FUN_0041f6bc(piVar5,pHVar8);
    (**(code **)(*piVar3 + 0x7c))(piVar3,mul_div_6,mul_div_5,0x20,0x20);
  }
  piVar3 = TCustomLabel_virtual_02c((int *)&PTR_TControl_virtual_000_00421a9c,'\x01',local_10);
  (**(code **)(*piVar3 + 0x18))(piVar3,"Message");
  (**(code **)(*piVar3 + 0x60))(piVar3,local_10);
  TLabel_SetWordWrap(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  TGroupBox_SetCaption((int)piVar3,local_8);
  FUN_0042e15c(piVar3,&rect.left);
  (**(code **)(*piVar3 + 0x68))(piVar3,*(undefined1 *)((int)local_10 + 0x4f));
  local_44 = (local_38 - rect.right) + mul_div_6;
  cVar1 = FUN_00403178(piVar3,extraout_EDX_00,extraout_ECX_00);
  if (cVar1 != '\0') {
    i_val = TForm_GetClientWidth(local_10);
    local_44 = (i_val - local_44) - piVar3[0xe];
  }
  (**(code **)(*piVar3 + 0x7c))(piVar3,local_44,mul_div_5,rect.bottom,rect.right);
  if ((local_b & 4) == 0) {
    if ((local_b & 1) == 0) {
      local_45 = 5;
    }
    else {
      local_45 = 0;
    }
  }
  else {
    local_45 = 2;
  }
  if ((local_b & 8) == 0) {
    if ((local_b & 2) == 0) {
      local_46 = 2;
    }
    else {
      local_46 = 1;
    }
  }
  else {
    local_46 = 3;
  }
  i_val = TForm_GetClientWidth(local_10);
  local_40 = i_val - y_bottom >> 1;
  if (local_40 < 0) {
    local_40 = local_40 + (uint)((i_val - y_bottom & 1U) != 0);
  }
  j = 0;
  local_50 = &PTR_DAT_004aaaac;
  ppuVar9 = &PTR_PTR_004aaad8;
  local_54 = &DAT_004aab04;
  i_val = rect.bottom;
  do {
    bVar2 = (byte)j;
    bVar10 = bVar2 < 0xf;
    if (bVar2 < 0x10) {
      bVar10 = (*(byte *)((int)&local_b + ((int)(j & 0x7f) >> 3)) >> (j & 7) & 1) != 0;
    }
    if (bVar10) {
      local_4c = TButton_virtual_02c((int *)&PTR_TWinControl_virtual_000_00424244,'\x01',local_10);
      (**(code **)(*local_4c + 0x18))(local_4c,*local_50);
      (**(code **)(*local_4c + 0x60))(local_4c,local_10);
      FUN_00405808((undefined4 *)*ppuVar9,(int *)&local_74);
      TGroupBox_SetCaption((int)local_4c,local_74);
      local_4c[0x7f] = *local_54;
      if (bVar2 == local_45) {
        TButton_SetDefault(local_4c,1);
      }
      if (bVar2 == local_46) {
        *(undefined1 *)((int)local_4c + 0x1f9) = 1;
      }
      (**(code **)(*local_4c + 0x7c))
                (local_4c,local_40,local_3c + mul_div_5 + mul_div_3,mul_div_2,local_2c);
      local_40 = local_40 + local_2c + mul_div;
      if (bVar2 == 10) {
        local_4c[0x43] = (int)local_10;
        local_4c[0x42] = (int)&LAB_00451080;
      }
    }
    j = j + 1;
    local_54 = local_54 + 1;
    ppuVar9 = ppuVar9 + 1;
    local_50 = local_50 + 1;
  } while ((char)j != '\v');
  *in_FS_OFFSET = i_val;
  puStack_8c = &LAB_00451682;
  FUN_00403c80((int *)&local_74,4);
  return;
}


/* ==== 004516ac FUN_004516ac ==== */

void FUN_004516ac(uint *param_1,byte param_2,ushort param_3,int param_4,int param_5,int param_6)

{
  FUN_004516d0(param_1,param_2,param_3,(undefined4 *)0x0,param_4,param_5,param_6);
  return;
}


/* ==== 004516d0 FUN_004516d0 ==== */

void FUN_004516d0(uint *param_1,byte param_2,ushort param_3,undefined4 *param_4,int param_5,
                 int param_6,int param_7)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x4516f1;
  piVar1 = (int *)FUN_0045113c(param_1,param_2,param_3);
  puStack_20 = &LAB_00451770;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1[0x54] = param_7;
  puStack_1c = &stack0xfffffffc;
  FUN_00403cb0(piVar1 + 0x89,param_4);
  if (-1 < param_6) {
    TControl_SetLeft(piVar1,param_6);
  }
  if (-1 < param_5) {
    TControl_SetTop(piVar1,param_5);
  }
  if ((param_5 < 0) && (param_6 < 0)) {
    TForm_SetPosition((int)piVar1,'\x04');
  }
  (**(code **)(*piVar1 + 0xd8))();
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00451777;
  puStack_20 = (undefined1 *)0x45176f;
  FUN_00402f9c(piVar1);
  return;
}


/* ==== 00451784 FUN_00451784 ==== */

void FUN_00451784(uint *param_1)

{
  FUN_00451790(param_1,-1,-1);
  return;
}


/* ==== 00451790 FUN_00451790 ==== */

void FUN_00451790(uint *param_1,int param_2,int param_3)

{
  FUN_004516ac(param_1,4,4,param_3,param_2,0);
  return;
}


/* ==== 004517a8 FUN_004517a8 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004517a8(void)

{
  byte *lpString;
  undefined4 uVar1;
  byte local_30 [32];
  undefined4 local_10;
  undefined1 local_c;
  DWORD current_thread_id;
  undefined1 local_4;
  
  _DAT_004ac824 = RegisterWindowMessageA("commdlg_help");
  _DAT_004ac828 = RegisterWindowMessageA("commdlg_FindReplace");
  uVar1 = 1;
  local_10 = DAT_004ac4dc;
  local_c = 0;
  current_thread_id = GetCurrentThreadId();
  local_4 = 0;
  lpString = FUN_004091ec(local_30,(byte *)"WndProcPtr%.8X%.8X",&local_10,uVar1);
  DAT_004aaa80 = GlobalAddAtomA((LPCSTR)lpString);
  return;
}


/* ==== 004519f8 TObjectList.virtual_008 ==== */

int * TObjectList_virtual_008(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00453bd8(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)&PTR_TList_virtual_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[1] = iVar1;
  *(char *)(param_1 + 2) = (char)param_3;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00451a4c TObjectList.Destroy ==== */

void TObjectList_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x451a57;
  local_8 = FUN_004032fc(param_1,param_2);
  puStack_14 = &LAB_00451a9a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00451ac4(local_8);
  FUN_00402f9c((int *)local_8[1]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00451aa1;
  puStack_14 = (undefined1 *)0x451a99;
  TDaviObject_Destroy(local_8,local_9 & 0xfc);
  return;
}


/* ==== 00451ab4 TObjectList.virtual_00c ==== */

void TObjectList_virtual_00c(int param_1,int param_2)

{
  FUN_00410104(*(int **)(param_1 + 4),param_2);
  return;
}


/* ==== 00451ac4 FUN_00451ac4 ==== */

void FUN_00451ac4(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_00451b6c(param_1);
    return;
  }
  (**(code **)(*(int *)param_1[1] + 8))();
  return;
}


/* ==== 00451ae0 TObjectList.virtual_010 ==== */

void TObjectList_virtual_010(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((char)param_1[2] == '\0') {
    piVar1 = (int *)(**(code **)*param_1)(param_1,param_2);
    FUN_00402f9c(piVar1);
    (**(code **)(*param_1 + 4))(param_1,param_2,0);
  }
  FUN_00410150((int *)param_1[1],param_2);
  return;
}


/* ==== 00451b18 TObjectList.virtual_014 ==== */

void TObjectList_virtual_014(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 4))(param_1,param_2,0);
  FUN_00410150((int *)param_1[1],param_2);
  return;
}


/* ==== 00451b3c TObjectList.virtual_018 ==== */

undefined4 TObjectList_virtual_018(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x14))(param_1,uVar1);
  return uVar1;
}


/* ==== 00451b5c TObjectList.virtual_01c ==== */

void TObjectList_virtual_01c(int param_1,int param_2,int param_3)

{
  FUN_00410240(*(undefined4 **)(param_1 + 4),param_2,param_3);
  return;
}


/* ==== 00451b6c FUN_00451b6c ==== */

void FUN_00451b6c(undefined4 *param_1)

{
  uint i_val;
  int *piVar1;
  int j;
  
  i_val = FUN_00451bac((int)param_1);
  if (SBORROW4(i_val,1)) {
    thunk_FUN_00402808(i_val);
  }
  if (-1 < (int)(i_val - 1)) {
    j = 0;
    do {
      piVar1 = (int *)(**(code **)*param_1)(param_1,j);
      FUN_00402f9c(piVar1);
      j = j + 1;
      i_val = i_val - 1;
    } while (i_val != 0);
  }
  (**(code **)(*(int *)param_1[1] + 8))();
  return;
}


/* ==== 00451bac FUN_00451bac ==== */

undefined4 FUN_00451bac(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}


/* ==== 00451bb4 TObjectList.virtual_000 ==== */

void TObjectList_virtual_000(int param_1,int param_2)

{
  FUN_004102b0(*(undefined4 **)(param_1 + 4),param_2);
  return;
}


/* ==== 00451bcc TObjectList.virtual_020 ==== */

void TObjectList_virtual_020(int param_1,int param_2)

{
  FUN_0041030c(*(int *)(param_1 + 4),param_2);
  return;
}


/* ==== 00451bdc TObjectList.virtual_024 ==== */

void TObjectList_virtual_024(int param_1,int param_2,int param_3)

{
  FUN_0041032c(*(int **)(param_1 + 4),param_2,param_3);
  return;
}


/* ==== 00451bec TObjectList.virtual_028 ==== */

undefined4 TObjectList_virtual_028(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  return uVar1;
}


/* ==== 00451c0c TObjectList.virtual_004 ==== */

void TObjectList_virtual_004(int param_1,int param_2,int param_3)

{
  FUN_004103fc(*(int **)(param_1 + 4),param_2,param_3);
  return;
}


/* ==== 00451d1c FUN_00451d1c ==== */

void FUN_00451d1c(int param_1,int param_2,undefined *param_3)

{
  FUN_00451e64(param_1);
  if (param_3 != (undefined *)0x0) {
    FUN_00452108(param_1,param_2,param_3);
  }
  return;
}


/* ==== 00451d40 TStStringResource.virtual_000 ==== */

int * TStStringResource_virtual_000(int *param_1,char param_2,int param_3,undefined *param_4)

{
  int extraout_ECX;
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
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00451d1c((int)param_1,param_3,param_4);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


/* ==== 00451d90 TStStringResource.Destroy ==== */

void TStStringResource_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00451e64((int)piVar1);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


/* ==== 00451dbc FUN_00451dbc ==== */

void FUN_00451dbc(int param_1,int param_2,int *param_3)

{
  int wide_char;
  uint cbMultiByte;
  LPSTR lpMultiByteStr;
  LPCWSTR lpWideCharStr;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x451dd4;
  FUN_00451f50(param_1);
  puStack_20 = &LAB_00451e56;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  wide_char = FUN_00451e8c(param_1,param_2);
  if (wide_char == 0) {
    FUN_00403c5c(param_3);
  }
  else {
    lpWideCharStr = (LPCWSTR)(*(int *)(param_1 + 0xc) + *(int *)(wide_char + 4));
    wide_char = *(int *)(wide_char + 8);
    cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,wide_char,(LPSTR)0x0,0,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
    FUN_00404210(param_3,cbMultiByte);
    lpUsedDefaultChar = (LPBOOL)0x0;
    lpDefaultChar = (LPCSTR)0x0;
    lpMultiByteStr = FUN_004040a0((undefined *)*param_3);
    WideCharToMultiByte(0,0,lpWideCharStr,wide_char,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                        lpUsedDefaultChar);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00451e5d;
  puStack_20 = (undefined1 *)0x451e55;
  FUN_004521c0(param_1);
  return;
}


/* ==== 00451e64 FUN_00451e64 ==== */

void FUN_00451e64(int param_1)

{
  while (*(int *)(param_1 + 0xc) != 0) {
    FUN_004521c0(param_1);
  }
  if (*(HGLOBAL *)(param_1 + 8) != (HGLOBAL)0x0) {
    FreeResource(*(HGLOBAL *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


/* ==== 00451e8c FUN_00451e8c ==== */

void FUN_00451e8c(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffc8;
  int *piVar7;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  byte *local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = (byte *)0x0;
  puStack_2c = &LAB_00451f3f;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  iVar6 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4) + -1;
  local_c = param_2;
  local_8 = param_1;
  if (-1 < iVar3) {
    do {
      uVar5 = (uint)(iVar3 + iVar6) >> 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8 + uVar5 * 0xc);
      puVar2 = &stack0xfffffffc;
      if (iVar1 == param_2) goto LAB_00451f29;
      if (iVar1 < param_2) {
        iVar6 = uVar5 + 1;
      }
      else {
        iVar3 = uVar5 - 1;
      }
    } while (iVar6 <= iVar3);
  }
  puVar2 = &stack0xfffffffc;
  if (*(char *)(param_1 + 4) != '\0') {
    local_10 = 0;
    piVar7 = &local_14;
    in_stack_ffffffc8 = 0;
    local_14 = param_2;
    FUN_00451dbc(DAT_004ac85c,1,(int *)&local_18);
    uVar4 = FUN_0040b614((int)&DAT_00451ca0,'\x01',local_18,in_stack_ffffffc8,piVar7);
    FUN_004036f4(uVar4);
    puVar2 = puStack_28;
  }
LAB_00451f29:
  puStack_28 = puVar2;
  *in_FS_OFFSET = in_stack_ffffffc8;
  puStack_30 = &LAB_00451f46;
  FUN_00403c5c((int *)&local_18);
  return;
}


/* ==== 00451f50 FUN_00451f50 ==== */

void FUN_00451f50(int param_1)

{
  LPVOID lock_resource;
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00451fb5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  lock_resource = LockResource(*(HGLOBAL *)(param_1 + 8));
  *(LPVOID *)(param_1 + 0xc) = lock_resource;
  if (lock_resource == (LPVOID)0x0) {
    FUN_00451dbc(DAT_004ac85c,2,(int *)&local_8);
    piVar1 = FUN_0040b5d8((int *)&DAT_00451ca0,'\x01',local_8);
    FUN_004036f4(piVar1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00451fbc;
  puStack_18 = (undefined1 *)0x451fb4;
  FUN_00403c5c((int *)&local_8);
  return;
}


/* ==== 00451fc4 FUN_00451fc4 ==== */

void FUN_00451fc4(int param_1,int param_2,undefined *param_3)

{
  HMODULE pHVar1;
  HMODULE hModule;
  HRSRC hResInfo;
  undefined4 uVar2;
  HGLOBAL resource;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar3;
  LPCSTR lpName;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte *local_118;
  byte *local_114;
  undefined *local_110;
  undefined1 local_10c;
  char local_108 [256];
  undefined *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_118 = (byte *)0x0;
  local_114 = (byte *)0x0;
  puStack_12c = &LAB_004520f7;
  puStack_130 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_130;
  local_8 = param_3;
  FUN_00408c0c(local_108,param_3,0xff);
  hModule = (HMODULE)FUN_004052c0(param_2);
  lpName = local_108;
  hResInfo = FindResourceA(hModule,lpName,(LPCSTR)0xa);
  pHVar1 = DAT_004ac4dc;
  if (hResInfo == (HRSRC)0x0) {
    lpName = local_108;
    hResInfo = FindResourceA(DAT_004ac4dc,lpName,(LPCSTR)0xa);
    hModule = pHVar1;
    if (hResInfo == (HRSRC)0x0) {
      local_110 = local_8;
      local_10c = 0xb;
      ppuVar3 = &local_110;
      lpName = (LPCSTR)0x0;
      FUN_00451dbc(DAT_004ac85c,3,(int *)&local_114);
      uVar2 = FUN_0040b614((int)&DAT_00451ca0,'\x01',local_114,lpName,ppuVar3);
      FUN_004036f4(uVar2);
    }
  }
  resource = LoadResource(hModule,hResInfo);
  *(HGLOBAL *)(param_1 + 8) = resource;
  if (*(int *)(param_1 + 8) == 0) {
    local_110 = local_8;
    local_10c = 0xb;
    ppuVar3 = &local_110;
    uVar2 = 0;
    FUN_00451dbc(DAT_004ac85c,4,(int *)&local_118);
    uVar2 = FUN_0040b614((int)&DAT_00451ca0,'\x01',local_118,uVar2,ppuVar3);
    FUN_004036f4(uVar2);
  }
  *in_FS_OFFSET = lpName;
  puStack_130 = &LAB_004520fe;
  FUN_00403c80((int *)&local_118,2);
  return;
}


/* ==== 00452108 FUN_00452108 ==== */

void FUN_00452108(int param_1,int param_2,undefined *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_18 = &LAB_004521b3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x45212d;
  local_8 = param_1;
  FUN_00451fc4(param_1,param_2,param_3);
  puStack_20 = (undefined1 *)0x452135;
  FUN_00451f50(local_8);
  bVar2 = true;
  puStack_24 = &LAB_00452196;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00402bc0(*(int **)(local_8 + 0xc),(int *)s_STR0_004aab30,4);
  if (!bVar2) {
    FUN_00451dbc(DAT_004ac85c,5,(int *)&local_c);
    piVar1 = FUN_0040b5d8((int *)&DAT_00451ca0,'\x01',local_c);
    FUN_004036f4(piVar1);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0045219d;
  puStack_24 = (undefined1 *)0x452195;
  FUN_004521c0(local_8);
  return;
}


/* ==== 004521c0 FUN_004521c0 ==== */

void FUN_004521c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407098();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* ==== 004521d8 FUN_004521d8 ==== */

void FUN_004521d8(void)

{
  FUN_00402f9c(DAT_004ac85c);
  return;
}


/* ==== 004521e4 FUN_004521e4 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004521e4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00452210;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac860 = _DAT_004ac860 + 1;
  if (_DAT_004ac860 == 0) {
    FUN_004521d8();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 0045225c FUN_0045225c ==== */

void FUN_0045225c(void)

{
  FUN_00402f9c(DAT_004ac864);
  return;
}


/* ==== 00452268 FUN_00452268 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452268(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00452294;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_004ac868 = _DAT_004ac868 + 1;
  if (_DAT_004ac868 == 0) {
    FUN_0045225c();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}


/* ==== 0045238c FUN_0045238c ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045238c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_004ac870 = _DAT_004ac870 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


/* ==== 004523fc FUN_004523fc ==== */

undefined4 FUN_004523fc(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1 & 0x7f) {
  case 0:
    uVar1 = 0x20;
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 0x10;
    break;
  case 3:
    uVar1 = 0x30;
    break;
  case 4:
    uVar1 = 0x40;
    break;
  case 5:
    uVar1 = 0x30;
    break;
  default:
    FUN_00403c40("DaviMsgToWindows:  Unhandled case-part");
  }
  return uVar1;
}


/* ==== 004524c4 FUN_004524c4 ==== */

undefined4 FUN_004524c4(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1 & 0x7f) {
  case 0:
    uVar1 = 2;
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 3;
    break;
  default:
    FUN_00403c40("DaviMsgBtnToWindows:  Unhandled case-part");
  }
  return uVar1;
}


/* ==== 00452598 FUN_00452598 ==== */

void FUN_00452598(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_ffffffdc;
  char *pcVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00452650;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  switch(param_1) {
  case 0:
    pcVar3 = "WindowsToDaviMsgResult: ";
    pcVar2 = "Not enough memory to create message box.";
    puStack_10 = &stack0xfffffffc;
    FUN_00405808(&PTR_DAT_00452590,(int *)&local_8);
    in_stack_ffffffdc = local_8;
    uVar1 = FUN_00453d0c((int *)&PTR_EDavilex_virtual_000_00453ba0,'\x01',(undefined4 *)0x0,local_8,
                         (undefined4 *)pcVar2,(undefined4 *)pcVar3);
    FUN_004036f4(uVar1);
    break;
  case 1:
    puStack_10 = &stack0xfffffffc;
    break;
  case 2:
    puStack_10 = &stack0xfffffffc;
    break;
  case 3:
    puStack_10 = &stack0xfffffffc;
    break;
  case 4:
    puStack_10 = &stack0xfffffffc;
    break;
  case 5:
    puStack_10 = &stack0xfffffffc;
    break;
  case 6:
    puStack_10 = &stack0xfffffffc;
    break;
  case 7:
    puStack_10 = &stack0xfffffffc;
    break;
  default:
    FUN_00403c40("WindowsToDaviMsgResult:  Unhandled case-part");
  }
  *in_FS_OFFSET = in_stack_ffffffdc;
  FUN_00403c5c((int *)&local_8);
  return;
}


