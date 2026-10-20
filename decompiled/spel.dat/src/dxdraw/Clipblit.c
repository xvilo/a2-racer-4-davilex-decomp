/* spel.dat — dxdraw/Clipblit.cpp: 6 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c87f0 FUN_004c87f0 ==== */

void FUN_004c87f0(undefined4 param_1)

{
  DAT_005b570c = param_1;
  return;
}


/* ==== 004c8800 FUN_004c8800 ==== */

void FUN_004c8800(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_1 < 0) || (param_3 < param_1)) {
    FUN_004c4150(s__s__d____illegal_clipping_limit_t_005b5790,s_D__Work_dxdraw_Clipblit_cpp_005b57b8
                 ,0x3b);
  }
  if ((param_2 < 0) || (param_4 < param_2)) {
    FUN_004c4150(s__s__d____illegal_clipping_limit_t_005b5768,s_D__Work_dxdraw_Clipblit_cpp_005b57b8
                 ,0x3e);
  }
  if (DAT_005b3798 < param_3) {
    FUN_004c4150(s__s__d____illegal_clipping_limit_b_005b573c,s_D__Work_dxdraw_Clipblit_cpp_005b57b8
                 ,0x41);
  }
  if (DAT_005b379c < param_4) {
    FUN_004c4150(s__s__d____illegal_clipping_limit_b_005b5710,s_D__Work_dxdraw_Clipblit_cpp_005b57b8
                 ,0x44);
  }
  DAT_007409d4 = param_4;
  DAT_007409e0 = param_2;
  DAT_007409d8 = param_3;
  DAT_007409dc = param_1;
  DAT_007409e8 = 1;
  return;
}


/* ==== 004c8b90 FUN_004c8b90 ==== */

void FUN_004c8b90(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                 byte param_11)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = 0x1000000;
  if ((param_11 & 8) != 0) {
    uVar2 = 0x1008000;
  }
  if ((((-1 < param_5) && (param_3 <= DAT_005b3798)) && (-1 < param_6)) && (param_4 <= DAT_005b379c)
     ) {
    if (param_3 < 0) {
      param_3 = 0;
    }
    if (param_4 < 0) {
      param_4 = 0;
    }
    if (DAT_005b379c < param_6) {
      param_6 = DAT_005b379c;
    }
    if (DAT_005b3798 < param_5) {
      param_5 = DAT_005b3798;
    }
    if ((param_3 < param_5) && (param_4 < param_6)) {
      local_10 = param_7;
      local_8 = param_9;
      local_c = param_8;
      local_4 = param_10;
      local_20 = param_3;
      local_1c = param_4;
      local_18 = param_5;
      local_14 = param_6;
      if (param_2 == 0) {
        FUN_004c4a60(DAT_007408ac);
        if (param_1 == 0) {
          iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                            (DAT_007408ac,&local_10,DAT_007408ac,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x140;
        }
        else if (param_1 == 1) {
          FUN_004c4a60(DAT_007408b0);
          iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                            (DAT_007408ac,&local_10,DAT_007408b0,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x149;
        }
        else {
          if (param_1 != 2) {
            return;
          }
          FUN_004c4a60(DAT_00740890);
          iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                            (DAT_007408ac,&local_10,DAT_00740890,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x152;
        }
      }
      else if (param_2 == 1) {
        FUN_004c4a60(DAT_007408b0);
        if (param_1 == 0) {
          FUN_004c4a60(DAT_007408ac);
          iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                            (DAT_007408b0,&local_10,DAT_007408ac,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x183;
        }
        else if (param_1 == 1) {
          iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                            (DAT_007408b0,&local_10,DAT_007408b0,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x189;
        }
        else {
          if (param_1 != 2) {
            return;
          }
          FUN_004c4a60(DAT_00740890);
          iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                            (DAT_007408b0,&local_10,DAT_00740890,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x192;
        }
      }
      else {
        if (param_2 != 2) {
          FUN_004c4150(s__s__d____unidentified_focus_erro_005b4230,
                       s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x198,param_1);
          return;
        }
        FUN_004c4a60(DAT_00740890);
        if (param_1 == 0) {
          FUN_004c4a60(DAT_007408ac);
          iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                            (DAT_00740890,&local_10,DAT_007408ac,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x163;
        }
        else if (param_1 == 1) {
          FUN_004c4a60(DAT_007408b0);
          iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                            (DAT_00740890,&local_10,DAT_007408b0,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x16c;
        }
        else {
          if (param_1 != 2) {
            return;
          }
          iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                            (DAT_00740890,&local_10,DAT_00740890,&local_20,uVar2,0);
          if (iVar1 == 0) {
            return;
          }
          uVar2 = FUN_004c4400(iVar1);
          uVar3 = 0x172;
        }
      }
      FUN_004c4150(s__s__d____blitting_error___s___005b39c8,s_D__Work_dxdraw_Clipblit_cpp_005b57b8,
                   uVar3,uVar2);
    }
  }
  return;
}


/* ==== 004c8f30 FUN_004c8f30 ==== */

void FUN_004c8f30(int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  int *piVar8;
  int iStack_2c;
  int iStack_28;
  undefined4 local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_24 = 0x1008000;
  if ((param_2 < 0) || (DAT_005b5ea8 < param_2)) {
    FUN_004c4150(s__s__d____illegal_array_index__d_005b5978,s_D__Work_dxdraw_Clipblit_cpp_005b57b8,
                 0x2b2,param_2);
  }
  iVar6 = param_2 * 0x20;
  if (*(int *)(iVar6 + 0x1c + DAT_00740d44) == 0) {
    FUN_004c4150(s__s__d____blt_with_unallocated_me_005b5948,s_D__Work_dxdraw_Clipblit_cpp_005b57b8,
                 0x2b5,param_2);
  }
  if (*(int *)(iVar6 + 0x18 + DAT_00740d44) == 4) {
    if (param_1 == 0) {
      param_2 = FUN_004c47a0(DAT_007408ac);
      iStack_28 = DAT_0074082c;
    }
    else if (param_1 == 1) {
      param_2 = FUN_004c47a0(DAT_007408b0);
      iStack_28 = DAT_00740898;
    }
    else if (param_1 == 2) {
      param_2 = FUN_004c47a0(DAT_00740890);
      iStack_28 = DAT_007408a8;
    }
    else {
      FUN_004c4150(s__s__d____unidentified_focus_erro_005b4230,
                   s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x2c8,param_1);
    }
    iVar3 = *(int *)(iVar6 + 0xc + DAT_00740d44);
    iVar4 = *(int *)(iVar6 + 8 + DAT_00740d44);
    iVar5 = param_3;
    if ((param_5 & 2) == 0) {
      param_4 = param_4 - *(int *)(iVar6 + 0x14 + DAT_00740d44);
      iVar5 = param_3 - *(int *)(iVar6 + 0x10 + DAT_00740d44);
    }
    param_3 = *(int *)(iVar6 + DAT_00740d44);
    if ((param_5 & 1) == 0) {
      iVar6 = 0;
LAB_004c9185:
      FUN_0051ed40(param_2,param_3,iVar5,param_4,iVar4,iVar3,iVar6,iStack_28);
      if (param_1 == 0) {
        FUN_004c4a20(DAT_007408ac,param_2);
        return;
      }
      if (param_1 != 1) {
        if (param_1 != 2) {
          FUN_004c4150(s__s__d____unidentified_focus_erro_005b4230,
                       s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x349,param_1);
          return;
        }
        FUN_004c4a20(DAT_00740890,param_2);
        return;
      }
      FUN_004c4a20(DAT_007408b0,param_2);
      return;
    }
    iVar6 = 0;
    if (DAT_007409e8 == 0) {
      FUN_004c4150(s__s__d____no_clipping_limit_set_005b57d4,s_D__Work_dxdraw_Clipblit_cpp_005b57b8,
                   0x2dd);
    }
    if ((((DAT_007409dc <= iVar4 + iVar5) && (iVar5 <= DAT_007409d8)) &&
        (DAT_007409e0 <= iVar3 + param_4)) && (param_4 <= DAT_007409d4)) {
      if (param_4 < DAT_007409e0) {
        param_3 = param_3 + (DAT_007409e0 - param_4) * iVar4;
        iVar3 = iVar3 + (param_4 - DAT_007409e0);
        param_4 = DAT_007409e0;
        if (iVar3 < 1) {
          return;
        }
      }
      if ((iVar3 + param_4 <= DAT_007409d4) || (iVar3 = DAT_007409d4 - param_4, 0 < iVar3)) {
        if (iVar5 < DAT_007409dc) {
          iVar6 = DAT_007409dc - iVar5;
          param_3 = param_3 + iVar6;
          iVar4 = iVar4 - iVar6;
          iVar5 = DAT_007409dc;
          if (iVar4 < 1) {
            return;
          }
        }
        if (DAT_007409d8 < iVar4 + iVar5) {
          iVar6 = iVar4 - DAT_007409d8;
          iVar4 = DAT_007409d8 - iVar5;
          iVar6 = iVar6 + iVar5;
          if (iVar4 < 1) {
            return;
          }
        }
        goto LAB_004c9185;
      }
    }
  }
  else {
    iStack_28 = 0;
    iStack_2c = 0;
    if ((param_5 & 4) != 0) {
      local_24 = 0x1000000;
    }
    iVar3 = *(int *)(iVar6 + 0xc + DAT_00740d44);
    iVar4 = *(int *)(iVar6 + 8 + DAT_00740d44);
    if ((param_5 & 2) == 0) {
      param_3 = param_3 - *(int *)(iVar6 + 0x10 + DAT_00740d44);
      param_4 = param_4 - *(int *)(iVar6 + 0x14 + DAT_00740d44);
    }
    if (DAT_007409e8 == 0) {
      FUN_004c4150(s__s__d____no_clipping_limit_set_005b57d4,s_D__Work_dxdraw_Clipblit_cpp_005b57b8,
                   0x362);
    }
    if (((DAT_007409dc <= param_3 + iVar4) && (param_3 <= DAT_007409d8)) &&
       ((DAT_007409e0 <= iVar3 + param_4 && (param_4 <= DAT_007409d4)))) {
      if (param_4 < DAT_007409e0) {
        iStack_2c = DAT_007409e0 - param_4;
        iVar3 = iVar3 - iStack_2c;
        param_4 = DAT_007409e0;
        if (iVar3 < 1) {
          return;
        }
      }
      if ((iVar3 + param_4 <= DAT_007409d4) || (iVar3 = DAT_007409d4 - param_4, 0 < iVar3)) {
        if (param_3 < DAT_007409dc) {
          iStack_28 = DAT_007409dc - param_3;
          iVar4 = iVar4 - iStack_28;
          param_3 = DAT_007409dc;
          if (iVar4 < 1) {
            return;
          }
        }
        if ((param_3 + iVar4 <= DAT_007409d8) || (iVar4 = DAT_007409d8 - param_3, 0 < iVar4)) {
          iStack_8 = param_3 + iVar4;
          iStack_4 = iVar3 + param_4;
          iStack_20 = iStack_28;
          iStack_18 = iStack_28 + iVar4;
          iStack_1c = iStack_2c;
          iStack_14 = iStack_2c + iVar3;
          piVar8 = *(int **)(iVar6 + 4 + DAT_00740d44);
          iStack_10 = param_3;
          iStack_c = param_4;
          iVar3 = (**(code **)(*piVar8 + 0x60))(piVar8);
          if (iVar3 != 0) {
            FUN_004c3fa0(s__s__d____had_to_restore__d_005b5928,
                         s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x39d,param_1);
            piVar1 = *(int **)(iVar6 + 4 + DAT_00740d44);
            (**(code **)(*piVar1 + 0x6c))(piVar1);
          }
          if (unaff_retaddr == 0) {
            FUN_004c4a60(DAT_007408ac);
            uVar7 = 0;
            iVar3 = (**(code **)(*DAT_007408ac + 0x14))
                              (DAT_007408ac,&iStack_14,*(undefined4 *)(iVar6 + 4 + DAT_00740d44),
                               &local_24,iStack_28,0);
            if (iVar3 != 0) {
              iVar6 = iVar6 + DAT_00740d44;
              uVar2 = FUN_004c4400(iVar3);
              FUN_004c4150(s__s__d____set_mem_image___d__to_s_005b57f8,
                           s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x3a8,iStack_14,param_3,param_4,
                           iVar4,iStack_28,piVar8,uVar7,*(undefined4 *)(iVar6 + 8),
                           *(undefined4 *)(iVar6 + 0xc),uVar2);
            }
          }
          else if (unaff_retaddr == 1) {
            FUN_004c4a60(DAT_007408b0);
            uVar7 = 0;
            iVar3 = (**(code **)(*DAT_007408b0 + 0x14))
                              (DAT_007408b0,&iStack_14,*(undefined4 *)(iVar6 + 4 + DAT_00740d44),
                               &local_24,iStack_28,0);
            if (iVar3 != 0) {
              iVar6 = iVar6 + DAT_00740d44;
              uVar2 = FUN_004c4400(iVar3);
              FUN_004c4150(s__s__d____set_mem_image___d__to_b_005b5858,
                           s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x3b0,iStack_14,param_3,param_4,
                           iVar4,iStack_28,piVar8,uVar7,*(undefined4 *)(iVar6 + 8),
                           *(undefined4 *)(iVar6 + 0xc),uVar2);
              return;
            }
          }
          else if (unaff_retaddr == 2) {
            FUN_004c4a60(DAT_00740890);
            uVar7 = 0;
            iVar3 = (**(code **)(*DAT_00740890 + 0x14))
                              (DAT_00740890,&iStack_14,*(undefined4 *)(iVar6 + 4 + DAT_00740d44),
                               &local_24,iStack_28,0);
            if (iVar3 != 0) {
              iVar6 = iVar6 + DAT_00740d44;
              uVar2 = FUN_004c4400(iVar3);
              FUN_004c4150(s__s__d____set_mem_image___d__to_b_005b58c0,
                           s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x3b8,iStack_14,param_3,param_4,
                           iVar4,iStack_28,piVar8,uVar7,*(undefined4 *)(iVar6 + 8),
                           *(undefined4 *)(iVar6 + 0xc),uVar2);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


/* ==== 004c9560 FUN_004c9560 ==== */

void FUN_004c9560(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_retaddr;
  undefined4 uVar6;
  int *piVar7;
  int local_2c;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_24 = 0;
  local_2c = 0;
  if ((param_2 < 0) || (*(int *)(DAT_00740a18 + 100) <= param_2)) {
    FUN_004c4150(s__s__d____illegal_character_index_005b599c,0x45b,param_2,
                 *(undefined4 *)(DAT_00740a18 + 100));
  }
  param_2 = param_2 * 0xc;
  if (*(int *)(param_2 + 8 + *(int *)(DAT_00740a18 + 0x68)) == 1) {
    iVar5 = *(int *)(param_2 + *(int *)(DAT_00740a18 + 0x68));
    iVar4 = *(int *)(iVar5 + 4);
    iVar5 = *(int *)(iVar5 + 8);
    if (DAT_007409e8 == 0) {
      FUN_004c4150(s__s__d____no_clipping_limit_set_005b57d4,s_D__Work_dxdraw_Clipblit_cpp_005b57b8,
                   0x46e);
    }
    if ((((DAT_007409dc <= iVar4 + param_3) && (param_3 <= DAT_007409d8)) &&
        (DAT_007409e0 <= iVar5 + param_4)) && (param_4 <= DAT_007409d4)) {
      if (param_4 < DAT_007409e0) {
        local_2c = DAT_007409e0 - param_4;
        iVar5 = iVar5 - local_2c;
        param_4 = DAT_007409e0;
        if (iVar5 < 1) {
          return;
        }
      }
      if ((iVar5 + param_4 <= DAT_007409d4) || (iVar5 = DAT_007409d4 - param_4, 0 < iVar5)) {
        if (param_3 < DAT_007409dc) {
          local_24 = DAT_007409dc - param_3;
          iVar4 = iVar4 - local_24;
          param_3 = DAT_007409dc;
          if (iVar4 < 1) {
            return;
          }
        }
        if ((iVar4 + param_3 <= DAT_007409d8) || (iVar4 = DAT_007409d8 - param_3, 0 < iVar4)) {
          if (DAT_005b570c != 0) {
            param_3 = param_3 / 2 << 1;
          }
          iStack_8 = iVar4 + param_3;
          iStack_4 = iVar5 + param_4;
          iStack_14 = iVar5 + local_2c;
          iStack_18 = local_24 + iVar4;
          piVar7 = (int *)**(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + param_2);
          iStack_20 = local_24;
          iStack_1c = local_2c;
          iStack_10 = param_3;
          iStack_c = param_4;
          iVar2 = (**(code **)(*piVar7 + 0x60))(piVar7);
          if (iVar2 != 0) {
            FUN_004c3fa0(s__s__d____had_to_restore__d_005b5928,
                         s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x4ad,param_1);
            piVar1 = (int *)**(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + local_2c);
            (**(code **)(*piVar1 + 0x6c))(piVar1);
          }
          if (unaff_retaddr == 0) {
            FUN_004c4a60(DAT_007408ac);
            uVar6 = 0x1008000;
            iVar2 = (**(code **)(*DAT_007408ac + 0x14))
                              (DAT_007408ac,&iStack_14,
                               **(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + local_2c),&local_24
                               ,0x1008000,0);
            if (iVar2 != 0) {
              iStack_10 = iStack_14 * 0x20 + DAT_00740d44;
              uVar3 = FUN_004c4400(iVar2);
              FUN_004c4150(s__s__d____set_mem_image___d__to_s_005b57f8,
                           s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x4b7,iStack_14,param_3,param_4,
                           iVar4,iVar5,piVar7,uVar6,*(undefined4 *)(iStack_10 + 8),
                           *(undefined4 *)(iStack_10 + 0xc),uVar3);
            }
          }
          else if (unaff_retaddr == 1) {
            FUN_004c4a60(DAT_007408b0);
            uVar6 = 0x1008000;
            iVar2 = (**(code **)(*DAT_007408b0 + 0x14))
                              (DAT_007408b0,&iStack_14,
                               **(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + local_2c),&local_24
                               ,0x1008000,0);
            if (iVar2 != 0) {
              iStack_10 = iStack_14 * 0x20 + DAT_00740d44;
              uVar3 = FUN_004c4400(iVar2);
              FUN_004c4150(s__s__d____set_mem_image___d__to_b_005b5858,
                           s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x4bf,iStack_14,param_3,param_4,
                           iVar4,iVar5,piVar7,uVar6,*(undefined4 *)(iStack_10 + 8),
                           *(undefined4 *)(iStack_10 + 0xc),uVar3);
              return;
            }
          }
          else if (unaff_retaddr == 2) {
            FUN_004c4a60(DAT_00740890);
            uVar6 = 0x1008000;
            iVar2 = (**(code **)(*DAT_00740890 + 0x14))
                              (DAT_00740890,&iStack_14,
                               **(undefined4 **)(*(int *)(DAT_00740a18 + 0x68) + local_2c),&local_24
                               ,0x1008000,0);
            if (iVar2 != 0) {
              iStack_10 = iStack_14 * 0x20 + DAT_00740d44;
              uVar3 = FUN_004c4400(iVar2);
              FUN_004c4150(s__s__d____set_mem_image___d__to_b_005b58c0,
                           s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x4c7,iStack_14,param_3,param_4,
                           iVar4,iVar5,piVar7,uVar6,*(undefined4 *)(iStack_10 + 8),
                           *(undefined4 *)(iStack_10 + 0xc),uVar3);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


/* ==== 004c9930 FUN_004c9930 ==== */

void FUN_004c9930(int *param_1,int *param_2,int *param_3,int param_4,int *param_5,int param_6,
                 byte param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_retaddr;
  int *piVar3;
  int *piStack_108;
  int *piStack_104;
  undefined4 *puStack_100;
  int local_fc;
  int *piStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int iStack_74;
  undefined4 *puStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_c;
  int *piStack_8;
  int *piStack_4;
  
  local_d4 = 6;
  local_68 = 6;
  puStack_100 = &local_d8;
  local_d8 = 0x6c;
  local_6c = 0x6c;
  piStack_104 = param_1;
  local_fc = 0x1000000;
  piStack_108 = (int *)0x4c9970;
  piStack_108 = (int *)(**(code **)(*param_1 + 0x58))();
  if (piStack_108 != (int *)0x0) {
    uVar1 = FUN_004c4400();
    FUN_004c4150(s__s__d____DDError__blt_surf_2_sur_005b5a30,s_D__Work_dxdraw_Clipblit_cpp_005b57b8,
                 0x570,uVar1);
  }
  piStack_108 = &iStack_74;
  piVar3 = unaff_retaddr;
  iVar2 = (**(code **)(*unaff_retaddr + 0x58))(unaff_retaddr);
  if (iVar2 != 0) {
    uVar1 = FUN_004c4400(iVar2);
    FUN_004c4150(s__s__d____DDError__blt_surf_2_sur_005b59e8,s_D__Work_dxdraw_Clipblit_cpp_005b57b8,
                 0x574,uVar1);
  }
  if ((param_7 & 8) != 0) {
    piVar3 = (int *)0x1008000;
  }
  if ((int)piStack_4 < 0) {
    piStack_4 = (int *)0x0;
  }
  if ((int)unaff_retaddr < 0) {
    unaff_retaddr = (int *)0x0;
  }
  if ((int)param_3 < 0) {
    param_3 = (int *)0x0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if ((((0 < (int)param_1) && (0 < (int)param_2)) && ((int)piStack_4 <= (int)piStack_dc)) &&
     ((((int)unaff_retaddr <= (int)piStack_e0 && (0 < (int)param_5)) &&
      ((0 < param_6 && (((int)param_3 <= (int)puStack_70 && (param_4 <= iStack_74)))))))) {
    if ((int)piStack_dc < (int)param_1) {
      param_1 = piStack_dc;
    }
    if ((int)piStack_e0 < (int)param_2) {
      param_2 = piStack_e0;
    }
    if ((int)puStack_70 < (int)param_5) {
      param_5 = puStack_70;
    }
    if (iStack_74 < param_6) {
      param_6 = iStack_74;
    }
    if ((((piStack_4 != param_1) && (unaff_retaddr != param_2)) && (param_3 != param_5)) &&
       (param_4 != param_6)) {
      piStack_f8 = piStack_4;
      piStack_108 = param_3;
      piStack_104 = (int *)param_4;
      if (((0 < (int)param_5) && (0 < param_6)) && ((0 < (int)param_1 && (0 < (int)param_2)))) {
        puStack_100 = param_5;
        local_fc = param_6;
        piStack_f4 = unaff_retaddr;
        piStack_f0 = param_1;
        piStack_ec = param_2;
        iVar2 = (**(code **)(*piStack_8 + 0x14))
                          (piStack_8,&piStack_108,uStack_c,&piStack_f8,piVar3,0);
        if (iVar2 != 0) {
          uVar1 = FUN_004c4400(iVar2);
          FUN_004c4150(s__s__d____blt_surf_2_surf_blittin_005b1b20,
                       s_D__Work_dxdraw_Clipblit_cpp_005b57b8,0x5af,uVar1);
        }
      }
    }
  }
  return;
}


