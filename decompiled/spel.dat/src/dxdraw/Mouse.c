/* spel.dat — dxdraw/Mouse.cpp: 14 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ce3e0 FUN_004ce3e0 ==== */

void FUN_004ce3e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  while (iVar2 != -1) {
    FUN_004ce390(param_1 + iVar2 * 0xc);
    piVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    iVar2 = *piVar1;
  }
  return;
}


/* ==== 004ce410 FUN_004ce410 ==== */

undefined4 FUN_004ce410(int param_1)

{
  int iVar1;
  int iVar2;
  int i;
  
  if (DAT_0074b080 != 0) {
    i = 0;
    if (0 < DAT_0074b07c) {
      iVar2 = 0;
      iVar1 = DAT_0074b078;
      do {
        if (*(int *)(iVar2 + iVar1) == param_1) {
          *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
          *(undefined4 *)(iVar2 + 4 + DAT_0074b078) = 0xffffffff;
          *(undefined4 *)(iVar2 + 8 + DAT_0074b078) = 0;
          KillTimer(DAT_007408a4,*(UINT_PTR *)(iVar2 + DAT_0074b078));
          iVar1 = DAT_0074b078;
        }
        i = i + 1;
        iVar2 = iVar2 + 0xc;
      } while (i < DAT_0074b07c);
    }
    return 0;
  }
  return 0;
}


/* ==== 004ce490 FUN_004ce490 ==== */

undefined4 FUN_004ce490(void)

{
  int iVar1;
  int iVar2;
  int i;
  
  if (DAT_0074b080 != 0) {
    i = 0;
    if (0 < DAT_0074b07c) {
      iVar2 = 0;
      iVar1 = DAT_0074b078;
      do {
        if (((*(int *)(iVar2 + iVar1) != -1) && (*(int *)(iVar2 + 4 + iVar1) != -1)) &&
           (*(int *)(iVar2 + 8 + iVar1) != 0)) {
          FUN_004ce410(*(int *)(iVar2 + iVar1));
          iVar1 = DAT_0074b078;
        }
        i = i + 1;
        iVar2 = iVar2 + 0xc;
      } while (i < DAT_0074b07c);
    }
    return 0;
  }
  return 0;
}


/* ==== 004ce4f0 FUN_004ce4f0 ==== */

undefined4 FUN_004ce4f0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int i;
  
  if (DAT_0074b080 != 0) {
    i = 0;
    if (0 < DAT_0074b07c) {
      iVar3 = 0;
      iVar2 = DAT_0074b078;
      do {
        if (((*(int *)(iVar3 + iVar2) == param_1) && (*(int *)(iVar3 + 4 + iVar2) != -1)) &&
           (pcVar1 = *(code **)(iVar3 + 8 + iVar2), pcVar1 != (code *)0x0)) {
          (*pcVar1)();
          iVar2 = DAT_0074b078;
        }
        i = i + 1;
        iVar3 = iVar3 + 0xc;
      } while (i < DAT_0074b07c);
    }
    return 0;
  }
  return 0;
}


/* ==== 004ce550 FUN_004ce550 ==== */

void FUN_004ce550(void)

{
  if (DAT_0074b190 != 0) {
    if (DAT_0074b194 != 0) {
      DAT_0074b194 = 0;
      (**(code **)(*DAT_0074b188 + 0x20))(DAT_0074b188);
      (**(code **)(*DAT_0074b188 + 8))(DAT_0074b188);
    }
    if (DAT_0074b198 != 0) {
      DAT_0074b198 = 0;
      (**(code **)(*DAT_0074b084 + 0x20))(DAT_0074b084);
      (**(code **)(*DAT_0074b084 + 8))(DAT_0074b084);
    }
    (**(code **)(*DAT_0074b18c + 8))(DAT_0074b18c);
    DAT_0074b190 = 0;
  }
  return;
}


/* ==== 004ce5d0 FUN_004ce5d0 ==== */

void FUN_004ce5d0(void)

{
  if (DAT_0074b19c != (int *)0x0) {
    (**(code **)(*DAT_0074b19c + 8))(DAT_0074b19c);
    DAT_0074b19c = (int *)0x0;
  }
  return;
}


/* ==== 004ce5f0 FUN_004ce5f0 ==== */

undefined4 FUN_004ce5f0(void)

{
  if (DAT_0074b2f4 == 0) {
    FUN_004c4150(s__s__d_____get_mouse_type__mouse_n_005b6b30,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x40);
  }
  return DAT_005b6b2c;
}


/* ==== 004ce620 FUN_004ce620 ==== */

undefined4 FUN_004ce620(void)

{
  if ((DAT_0074b2f8 != 0) && (DAT_0074b300 != 0)) {
    return 1;
  }
  return 0;
}


/* ==== 004ce640 FUN_004ce640 ==== */

void FUN_004ce640(LONG *param_1,LONG *param_2,int *param_3)

{
  int iVar1;
  tagPOINT point;
  
  if (DAT_0074b2f4 == 0) {
    FUN_004c4150(s__s__d_____get_mouse_pos__Mouse_i_005b6b80,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x1d5);
  }
  GetCursorPos(&point);
  ScreenToClient(DAT_007408a4,&point);
  *param_1 = point.x;
  *param_2 = point.y;
  *param_3 = 0;
  iVar1 = FUN_004c5e40(1);
  if (iVar1 != 0) {
    *param_3 = 1;
  }
  iVar1 = FUN_004c5e40(2);
  if (iVar1 != 0) {
    *param_3 = *param_3 + 2;
  }
  return;
}


/* ==== 004ce6d0 FUN_004ce6d0 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce6d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar3 = DAT_005b6b0c;
  uVar1 = DAT_005b6b08;
  iVar2 = DAT_00740d44 +
          *(int *)(*(int *)(DAT_00740a1c + 8 + DAT_005b6b24 * 0xc) + 4 + DAT_005b6b28 * 8) * 0x20;
  local_8 = *(int *)(iVar2 + 8) + DAT_0074b2ec;
  local_4 = *(int *)(iVar2 + 0xc) + DAT_0074b2f0;
  if (local_8 < 0) {
    return;
  }
  if (DAT_005b3798 < DAT_0074b2ec) {
    return;
  }
  if (local_4 < 0) {
    return;
  }
  if (DAT_0074b2f0 <= DAT_005b379c) {
    local_10 = DAT_0074b2ec;
    if (DAT_0074b2ec < 0) {
      local_10 = 0;
    }
    local_c = DAT_0074b2f0;
    if (DAT_0074b2f0 < 0) {
      local_c = 0;
    }
    if (DAT_005b379c < local_4) {
      local_4 = DAT_005b379c;
    }
    if (DAT_005b3798 < local_8) {
      local_8 = DAT_005b3798;
    }
    if (local_8 <= local_10) {
      return;
    }
    if (local_4 <= local_c) {
      return;
    }
    local_18 = local_8 - local_10;
    local_14 = local_4 - local_c;
    local_20 = 0;
    local_1c = 0;
    if (param_1 == 0) {
      FUN_004c4a60(DAT_007408ac);
      piVar4 = &local_10;
      uVar6 = 0;
      uVar5 = 0x1000000;
      iVar2 = (**(code **)(*DAT_0074b318 + 0x14))
                        (DAT_0074b318,&local_20,DAT_007408ac,piVar4,0x1000000,0);
      uVar3 = DAT_005b6b0c;
      uVar1 = DAT_005b6b08;
      if (iVar2 == 0) {
        DAT_005b6b08 = DAT_0074b2ec;
        DAT_005b6b0c = DAT_0074b2f0;
        _DAT_005b6b10 = uVar1;
        _DAT_005b6b14 = uVar3;
        return;
      }
      uVar1 = FUN_004c4400(iVar2,unaff_ESI,unaff_EBX,local_20,local_1c,piVar4,uVar5,uVar6,unaff_EDI)
      ;
      uVar3 = 0x242;
    }
    else if (param_1 == 1) {
      FUN_004c4a60(DAT_007408b0);
      piVar4 = &local_10;
      uVar6 = 0;
      uVar5 = 0x1000000;
      iVar2 = (**(code **)(*DAT_0074b318 + 0x14))
                        (DAT_0074b318,&local_20,DAT_007408b0,piVar4,0x1000000,0);
      uVar3 = DAT_005b6b0c;
      uVar1 = DAT_005b6b08;
      if (iVar2 == 0) {
        DAT_005b6b08 = DAT_0074b2ec;
        DAT_005b6b0c = DAT_0074b2f0;
        _DAT_005b6b10 = uVar1;
        _DAT_005b6b14 = uVar3;
        return;
      }
      uVar1 = FUN_004c4400(iVar2,unaff_ESI,unaff_EBX,local_20,local_1c,piVar4,uVar5,uVar6,unaff_EDI)
      ;
      uVar3 = 0x24c;
    }
    else {
      if (param_1 != 2) {
        DAT_005b6b08 = DAT_0074b2ec;
        DAT_005b6b0c = DAT_0074b2f0;
        _DAT_005b6b10 = uVar1;
        _DAT_005b6b14 = uVar3;
        return;
      }
      FUN_004c4a60(DAT_00740890);
      piVar4 = &local_10;
      uVar6 = 0;
      uVar5 = 0x1000000;
      iVar2 = (**(code **)(*DAT_0074b318 + 0x14))
                        (DAT_0074b318,&local_20,DAT_00740890,piVar4,0x1000000,0);
      uVar3 = DAT_005b6b0c;
      uVar1 = DAT_005b6b08;
      if (iVar2 == 0) {
        DAT_005b6b08 = DAT_0074b2ec;
        DAT_005b6b0c = DAT_0074b2f0;
        _DAT_005b6b10 = uVar1;
        _DAT_005b6b14 = uVar3;
        return;
      }
      uVar1 = FUN_004c4400(iVar2,unaff_ESI,unaff_EBX,local_20,local_1c,piVar4,uVar5,uVar6,unaff_EDI)
      ;
      uVar3 = 0x256;
    }
    FUN_004c4150(s__s__d_____store_mouse_button__bl_005b6bb4,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 uVar3,uVar1);
    _DAT_005b6b14 = DAT_005b6b0c;
    _DAT_005b6b10 = DAT_005b6b08;
    DAT_005b6b0c = DAT_0074b2f0;
    DAT_005b6b08 = DAT_0074b2ec;
    return;
  }
  return;
}


/* ==== 004ce950 FUN_004ce950 ==== */

void FUN_004ce950(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar1 = DAT_00740d44 +
          *(int *)(*(int *)(DAT_00740a1c + 8 + DAT_005b6b24 * 0xc) + 4 + DAT_005b6b28 * 8) * 0x20;
  local_18 = *(int *)(iVar1 + 8) + DAT_005b6b08;
  local_14 = *(int *)(iVar1 + 0xc) + DAT_005b6b0c;
  if ((((-1 < local_18) && (DAT_005b6b08 <= DAT_005b3798)) && (-1 < local_14)) &&
     (DAT_005b6b0c <= DAT_005b379c)) {
    local_20 = DAT_005b6b08;
    if (DAT_005b6b08 < 0) {
      local_20 = 0;
    }
    local_1c = DAT_005b6b0c;
    if (DAT_005b6b0c < 0) {
      local_1c = 0;
    }
    if (DAT_005b379c < local_14) {
      local_14 = DAT_005b379c;
    }
    if (DAT_005b3798 < local_18) {
      local_18 = DAT_005b3798;
    }
    if ((local_20 < local_18) && (local_1c < local_14)) {
      local_8 = local_18 - local_20;
      local_4 = local_14 - local_1c;
      local_10 = 0;
      local_c = 0;
      if (param_1 == 0) {
        FUN_004c4a60(DAT_007408ac);
        puVar2 = &local_10;
        uVar4 = 0;
        uVar3 = 0x1000000;
        iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                          (DAT_007408ac,&local_20,DAT_0074b318,puVar2,0x1000000,0);
        if (iVar1 == 0) {
          return;
        }
        uVar3 = FUN_004c4400(iVar1,unaff_ESI,unaff_EBX,local_20,local_1c,puVar2,uVar3,uVar4,
                             unaff_EDI);
        uVar4 = 0x2a3;
      }
      else if (param_1 == 1) {
        FUN_004c4a60(DAT_007408b0);
        puVar2 = &local_10;
        uVar4 = 0;
        uVar3 = 0x1000000;
        iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                          (DAT_007408b0,&local_20,DAT_0074b318,puVar2,0x1000000,0);
        if (iVar1 == 0) {
          return;
        }
        uVar3 = FUN_004c4400(iVar1,unaff_ESI,unaff_EBX,local_20,local_1c,puVar2,uVar3,uVar4,
                             unaff_EDI);
        uVar4 = 0x2ad;
      }
      else {
        if (param_1 != 2) {
          return;
        }
        FUN_004c4a60(DAT_00740890);
        puVar2 = &local_10;
        uVar4 = 0;
        uVar3 = 0x1000000;
        iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                          (DAT_00740890,&local_20,DAT_0074b318,puVar2,0x1000000,0);
        if (iVar1 == 0) {
          return;
        }
        uVar3 = FUN_004c4400(iVar1,unaff_ESI,unaff_EBX,local_20,local_1c,puVar2,uVar3,uVar4,
                             unaff_EDI);
        uVar4 = 0x2b7;
      }
      FUN_004c4150(s__s__d_____restore_mouse_button__b_005b6c38,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                   uVar4,uVar3);
    }
  }
  return;
}


/* ==== 004ceba0 FUN_004ceba0 ==== */

void FUN_004ceba0(undefined4 param_1)

{
  if (DAT_0074b2f4 == 0) {
    FUN_004c4150(s__s__d_____draw_mouse__Mouse_is_n_005b6d34,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x2c2);
  }
  if (DAT_005b6b2c == 1) {
    FUN_004c4150(s__s__d_____draw_mouse__You_can_t_c_005b6cf0,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x2c7);
  }
  if ((DAT_005b6b2c == 2) && (DAT_0074b2fc == 0)) {
    FUN_004c4150(s__s__d_____draw_mouse__No_mouse_a_005b6cbc,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x2cc);
  }
  if ((DAT_005b6b08 != -1) && (DAT_005b6b0c != -1)) {
    FUN_004ce950(param_1);
  }
  return;
}


/* ==== 004cec30 FUN_004cec30 ==== */

void FUN_004cec30(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_0074b2f4 == 0) {
    FUN_004c4150(s__s__d_____draw_mouse__Mouse_is_n_005b6d34,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x2de);
  }
  if (DAT_005b6b2c == 1) {
    FUN_004c4150(s__s__d_____draw_mouse__You_can_t_c_005b6cf0,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x2e3);
  }
  if ((DAT_005b6b2c == 2) && (DAT_0074b2fc == 0)) {
    FUN_004c4150(s__s__d_____draw_mouse__No_mouse_a_005b6cbc,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x2e8);
  }
  uVar1 = *(undefined4 *)(*(int *)(DAT_00740a1c + 8 + DAT_005b6b24 * 0xc) + 4 + DAT_005b6b28 * 8);
  FUN_004ce6d0(param_1);
  FUN_004c8f30(param_1,uVar1,DAT_0074b2ec,DAT_0074b2f0,3);
  return;
}


/* ==== 004cece0 FUN_004cece0 ==== */

undefined4 FUN_004cece0(void)

{
  undefined4 uVar1;
  undefined1 local_4 [4];
  
  if (DAT_0074b2f4 == 0) {
    FUN_004c4150(s__s__d_____handle_mouse__Mouse_is_005b6d64,s_D__Work_dxdraw_Mouse_cpp_005b6b64,
                 0x304);
  }
  FUN_004ce640(&DAT_0074b2ec,&DAT_0074b2f0,local_4);
  if ((DAT_0074b2f8 != 0) && (DAT_0074b300 != 0)) {
    if (DAT_005b6b2c == 1) {
      SetCursor(DAT_0074b314);
    }
    else if ((DAT_005b6b2c == 2) &&
            ((DAT_005b6b08 != DAT_0074b2ec || (DAT_005b6b0c != DAT_0074b2f0)))) {
      uVar1 = FUN_004ceec0();
      FUN_004ceba0(uVar1);
      uVar1 = FUN_004ceec0();
      FUN_004cec30(uVar1);
      return 0;
    }
  }
  return 0;
}


