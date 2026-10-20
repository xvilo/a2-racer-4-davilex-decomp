/* spel.dat — dxdraw/Rcpcx.cpp: 13 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004ca9f0 FUN_004ca9f0 ==== */

int FUN_004ca9f0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint i;
  int iVar3;
  int j;
  char *pcVar4;
  
  i = 0xffffffff;
  iVar2 = 0;
  pcVar4 = param_1;
  do {
    if (i == 0) break;
    i = i - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~i - 1;
  j = 0;
  if (0 < iVar3) {
    do {
      iVar2 = iVar2 + *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + (uint)(byte)param_1[j] * 0xc
                                       ) + 4);
      j = j + 1;
    } while (j < iVar3);
    if (0 < iVar3) {
      iVar2 = iVar2 + *(int *)(DAT_00740a18 + 0x88) * (~i - 2);
    }
  }
  return iVar2;
}


/* ==== 004caa50 FUN_004caa50 ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004caa50(int *param_1)

{
  int i;
  int iVar1;
  int *piVar2;
  
  DAT_005b5db4 = 0;
  i = param_1[1];
  for (piVar2 = param_1; (i != -1 && (*piVar2 != -1)); piVar2 = piVar2 + 3) {
    i = piVar2[4];
    DAT_005b5db4 = DAT_005b5db4 + 1;
  }
  i = FUN_004caaf0(DAT_005b5db4);
  if (i != 0) {
    return 2000;
  }
  i = 0;
  if (0 < DAT_005b5db4) {
    iVar1 = 0;
    piVar2 = param_1 + 2;
    do {
      i = i + 1;
      *(int *)(iVar1 + DAT_00740a1c) = piVar2[-2];
      *(int *)(iVar1 + 4 + DAT_00740a1c) = piVar2[-1];
      *(int *)(iVar1 + 8 + DAT_00740a1c) = *piVar2;
      iVar1 = iVar1 + 0xc;
      piVar2 = piVar2 + 3;
    } while (i < DAT_005b5db4);
  }
  _DAT_00740a20 = 1;
  return 0;
}


/* ==== 004caaf0 FUN_004caaf0 ==== */

undefined4 FUN_004caaf0(int param_1)

{
  int iVar1;
  
  DAT_005b5db4 = param_1;
  DAT_00740a1c = LocalAlloc(0x40,param_1 * 0xc);
  if (DAT_00740a1c != (HLOCAL)0x0) {
    if (0 < param_1) {
      iVar1 = 0;
      do {
        *(undefined4 *)(iVar1 + 8 + (int)DAT_00740a1c) = 0;
        *(undefined4 *)(iVar1 + 4 + (int)DAT_00740a1c) = 0;
        *(undefined4 *)(iVar1 + (int)DAT_00740a1c) = 0;
        iVar1 = iVar1 + 0xc;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return 0;
  }
  return 2000;
}


/* ==== 004cab50 FUN_004cab50 ==== */

undefined4 FUN_004cab50(char *str2,int param_2)

{
  FILE *file;
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_300;
  undefined1 local_2ff [767];
  
  file = (FILE *)FUN_004c62c0(str2);
  if (file == (FILE *)0x0) {
    return 1000;
  }
  FUN_004c6160(file,0xfffffd00,2);
  FUN_00558b35(&local_300,0x300,1,file);
  if ((file->_flag & 0x20) != 0) {
    FUN_004c4150(s__s__d____error_reading_005b5dc0,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x109);
  }
  iVar1 = 0;
  puVar2 = local_2ff;
  do {
    *(undefined1 *)(iVar1 + DAT_007409f0) = puVar2[-1];
    *(undefined1 *)(iVar1 + 1 + DAT_007409f0) = *puVar2;
    *(undefined1 *)(iVar1 + 2 + DAT_007409f0) = puVar2[1];
    iVar1 = iVar1 + 4;
    puVar2 = puVar2 + 3;
  } while (iVar1 < 0x400);
  if (param_2 != 0) {
    FUN_004c9e70(DAT_007409f0,0,0x100);
  }
  FUN_004c6430(file);
  return 0;
}


/* ==== 004cac30 FUN_004cac30 ==== */

undefined4 FUN_004cac30(int param_1,char *param_2)

{
  int i;
  int j;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_004c6160(param_1,0xfffffd00,2);
  FUN_00558b35(param_2,0x300,1,param_1);
  if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
    FUN_004c4150(s__s__d____error_reading_005b5dc0,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x124);
  }
  pcVar1 = param_2 + 2;
  i = 0;
  pcVar4 = param_2;
  pcVar3 = param_2;
  pcVar2 = param_2;
  do {
    *(char *)(DAT_007409f0 + i * 4) = pcVar1[-2];
    *(char *)(DAT_007409f0 + 1 + i * 4) = pcVar1[-1];
    *(char *)(DAT_007409f0 + 2 + i * 4) = *pcVar1;
    if (i == DAT_005b5db8) {
      pcVar1[-2] = (char)DAT_00740d24;
      *(char *)(DAT_007409f0 + i * 4) = (char)DAT_00740d24;
      pcVar1[-1] = (char)DAT_00740d28;
      *(char *)(DAT_007409f0 + 1 + i * 4) = (char)DAT_00740d28;
      *pcVar1 = (char)DAT_00740d2c;
      *(char *)(DAT_007409f0 + 2 + i * 4) = (char)DAT_00740d2c;
      pcVar2 = (char *)(uint)*(byte *)(DAT_007409f0 + i * 4);
      pcVar3 = (char *)(uint)*(byte *)(DAT_007409f0 + 1 + i * 4);
      pcVar4 = (char *)(uint)*(byte *)(DAT_007409f0 + 2 + i * 4);
    }
    i = i + 1;
    pcVar1 = pcVar1 + 3;
  } while (i < 0x100);
  if (DAT_005b5dbc != 0) {
    j = 0;
    i = DAT_007409f0;
    do {
      if ((((j != DAT_005b5db8) && (pcVar2 == (char *)(uint)*(byte *)(i + j * 4))) &&
          (pcVar3 == (char *)(uint)*(byte *)(i + 1 + j * 4))) &&
         (pcVar4 == (char *)(uint)*(byte *)(i + 2 + j * 4))) {
        *(char *)(i + j * 4) = (char)DAT_00740d24 + '\x01';
        *param_2 = (char)DAT_00740d24 + '\x01';
        i = DAT_007409f0;
      }
      j = j + 1;
      param_2 = param_2 + 3;
    } while (j < 0x100);
  }
  return 0;
}


/* ==== 004cada0 FUN_004cada0 ==== */

undefined4 FUN_004cada0(char *str2,int *param_2,int *param_3)

{
  FILE *file;
  undefined1 local_80 [4];
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  
  file = (FILE *)FUN_004c62c0(str2);
  if (file == (FILE *)0x0) {
    return 1000;
  }
  FUN_00558b35(local_80,0x80,1,file);
  *param_3 = ((int)local_76 - (int)local_7a) + 1;
  *param_2 = ((int)local_78 - (int)local_7c) + 1;
  FUN_004c6430(file);
  return 0;
}


/* ==== 004cae20 FUN_004cae20 ==== */

undefined4 FUN_004cae20(int param_1,char *str2,byte param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  FILE *file;
  int iVar3;
  int iVar4;
  uint k;
  undefined4 uVar5;
  uint n;
  int m;
  uint uVar6;
  int j;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int i;
  int local_390;
  undefined2 uStack_38c;
  undefined1 uStack_38a;
  char local_380;
  char local_37f;
  short local_37c;
  short local_37a;
  short local_378;
  short local_376;
  short local_33e;
  undefined1 local_300 [768];
  
  file = (FILE *)FUN_004c62c0(str2);
  if (file == (FILE *)0x0) {
    return 1000;
  }
  if ((param_3 & 2) != 0) {
    FUN_004cac30(file,local_300);
  }
  FUN_004c6160(file,0,0);
  FUN_00558b35(&local_380,0x80,1,file);
  if ((file->_flag & 0x20) != 0) {
    FUN_005588fd(file);
    return 0x3e9;
  }
  if ((((param_3 & 1) != 0) && (local_380 == '\n')) && (local_37f == '\x05')) {
    j = ((int)local_376 - (int)local_37a) + 1;
    if (DAT_005b379c < j) {
      j = DAT_005b379c;
    }
    FUN_004c3fa0(s_bpl__d__width__d_005b5df8,(int)local_33e,((int)local_378 - (int)local_37c) + 1);
    iVar3 = (int)local_33e;
    if (DAT_005b379c <= j) {
      j = DAT_005b379c;
    }
    if (param_1 == 0) {
      local_390 = DAT_0074082c;
      i = DAT_007408ac;
    }
    else if (param_1 == 1) {
      local_390 = DAT_00740898;
      i = DAT_007408b0;
    }
    else if (param_1 == 2) {
      local_390 = DAT_007408a8;
      i = DAT_00740890;
    }
    else {
      FUN_004c4150(s__s__d____unidentified_focus_erro_005b4230,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,
                   0xa7,param_1);
    }
    FUN_004c4a60(i);
    i = j;
    if (DAT_007409cc == 0) {
      iVar4 = FUN_004c4810(param_1);
      if (0 < j) {
        do {
          j = 0;
          do {
            k = FUN_0055a2ba(file);
            if (((byte)k & 0xc0) == 0xc0) {
              uVar1 = FUN_0055a2ba(file);
              puVar9 = (undefined4 *)(iVar4 + j);
              for (n = (k & 0x3f) >> 2; n != 0; n = n - 1) {
                *puVar9 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
                puVar9 = puVar9 + 1;
              }
              j = j + (k & 0x3f);
              for (k = k & 3; k != 0; k = k - 1) {
                *(undefined1 *)puVar9 = uVar1;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
            }
            else {
              *(byte *)(iVar4 + j) = (byte)k;
              j = j + 1;
            }
          } while (j < iVar3);
          iVar4 = iVar4 + local_390;
          i = i + -1;
        } while (i != 0);
      }
    }
    else {
      if (DAT_007409cc != 1) {
        if (DAT_007409cc == 2) {
          iVar4 = FUN_004c4810(param_1);
          if (0 < j) {
            do {
              j = 0;
              do {
                k = FUN_0055a2ba(file);
                if (((byte)k & 0xc0) == 0xc0) {
                  k = k & 0x3f;
                  uVar1 = FUN_0055a2ba(file);
                  uVar5 = FUN_004c81b0(uVar1,8);
                  if (k != 0) {
                    uStack_38c = (undefined2)uVar5;
                    puVar7 = (undefined2 *)(iVar4 + j * 3);
                    uStack_38a = (undefined1)((uint)uVar5 >> 0x10);
                    j = j + k;
                    *puVar7 = uStack_38c;
                    *(undefined1 *)(puVar7 + 1) = uStack_38a;
                    puVar8 = (undefined1 *)((int)puVar7 + 3);
                    for (m = k * 3 + -3; m != 0; m = m + -1) {
                      *puVar8 = *(undefined1 *)puVar7;
                      puVar7 = (undefined2 *)((int)puVar7 + 1);
                      puVar8 = puVar8 + 1;
                    }
                  }
                }
                else {
                  uVar5 = FUN_004c81b0(k & 0xff,8);
                  uStack_38c = (undefined2)uVar5;
                  puVar7 = (undefined2 *)(iVar4 + j * 3);
                  uStack_38a = (undefined1)((uint)uVar5 >> 0x10);
                  j = j + 1;
                  *puVar7 = uStack_38c;
                  *(undefined1 *)(puVar7 + 1) = uStack_38a;
                }
              } while (j < iVar3);
              iVar4 = iVar4 + local_390;
              i = i + -1;
            } while (i != 0);
          }
          FUN_004c4980(param_1,iVar4);
        }
        goto LAB_004cb1f2;
      }
      iVar4 = FUN_004c4810(param_1);
      if (0 < j) {
        do {
          j = 0;
          do {
            k = FUN_0055a2ba(file);
            if (((byte)k & 0xc0) == 0xc0) {
              n = k & 0x3f;
              uVar1 = FUN_0055a2ba(file);
              uVar2 = FUN_004c81b0(uVar1,8);
              if (n != 0) {
                puVar9 = (undefined4 *)(iVar4 + j * 2);
                for (uVar6 = n >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *puVar9 = CONCAT22(uVar2,uVar2);
                  puVar9 = puVar9 + 1;
                }
                j = j + n;
                for (k = (uint)((k & 1) != 0); k != 0; k = k - 1) {
                  *(undefined2 *)puVar9 = uVar2;
                  puVar9 = (undefined4 *)((int)puVar9 + 2);
                }
              }
            }
            else {
              uVar2 = FUN_004c81b0(k & 0xff,8);
              *(undefined2 *)(iVar4 + j * 2) = uVar2;
              j = j + 1;
            }
          } while (j < iVar3);
          iVar4 = iVar4 + local_390;
          i = i + -1;
        } while (i != 0);
      }
    }
    FUN_004c4980(param_1,iVar4);
  }
LAB_004cb1f2:
  if ((param_3 & 6) == 6) {
    FUN_004c9e70(DAT_007409f0,0,0x100);
  }
  FUN_004c6430(file);
  return 0;
}


/* ==== 004cb230 FUN_004cb230 ==== */

undefined4 FUN_004cb230(char *str2,int *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  FILE *file;
  int iVar3;
  undefined4 uVar4;
  uint k;
  uint n;
  int m;
  uint uVar5;
  int j;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int i;
  int local_394;
  undefined4 local_390;
  undefined4 local_38c;
  FILE *file_2;
  int local_384;
  char local_380;
  char local_37f;
  short local_37c;
  short local_37a;
  short local_378;
  short local_376;
  short local_33e;
  undefined1 local_300 [768];
  
  file = (FILE *)FUN_004c62c0(str2);
  if (file == (FILE *)0x0) {
    return 0;
  }
  file_2 = file;
  if (DAT_007409cc != 0) {
    FUN_004cac30(file,local_300);
  }
  FUN_004c6160(file,0,0);
  FUN_00558b35(&local_380,0x80,1,file);
  FUN_004c3fa0(s__s__d____header_read__005b5e5c,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x25f);
  if ((file->_flag & 0x20) == 0) {
    FUN_004c3fa0(s__s__d____no_error_header_read__005b5e38,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x265
                );
    uVar4 = local_38c;
    if ((local_380 == '\n') && (local_37f == '\x05')) {
      iVar3 = ((int)local_376 - (int)local_37a) + 1;
      *param_2 = ((int)local_378 - (int)local_37c) + 1;
      *param_3 = iVar3;
      FUN_004c3fa0(s_creating_surface__d__d_005b2758,*param_2,iVar3);
      uVar4 = FUN_004c4a80(*param_2,*param_3);
      local_38c = uVar4;
      FUN_004c3fa0(s_creation_succesfull_005b5e20);
      local_384 = (int)local_33e;
      i = *param_3;
      FUN_004c4a60(uVar4);
      if (DAT_007409cc == 0) {
        iVar3 = FUN_004c48f0(uVar4,&local_394);
        if (0 < i) {
          do {
            j = 0;
            do {
              k = FUN_0055a2ba(file);
              if (((byte)k & 0xc0) == 0xc0) {
                uVar1 = FUN_0055a2ba(file);
                puVar8 = (undefined4 *)(iVar3 + j);
                for (n = (k & 0x3f) >> 2; n != 0; n = n - 1) {
                  *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
                  puVar8 = puVar8 + 1;
                }
                j = j + (k & 0x3f);
                for (k = k & 3; file = file_2, k != 0; k = k - 1) {
                  *(undefined1 *)puVar8 = uVar1;
                  puVar8 = (undefined4 *)((int)puVar8 + 1);
                }
              }
              else {
                *(byte *)(iVar3 + j) = (byte)k;
                j = j + 1;
              }
            } while (j < local_384);
            iVar3 = iVar3 + local_394;
            i = i + -1;
            uVar4 = local_38c;
          } while (i != 0);
        }
        FUN_004c4a20(uVar4,iVar3);
      }
      else if (DAT_007409cc == 1) {
        iVar3 = FUN_004c48f0(uVar4,&local_394);
        if (0 < i) {
          do {
            j = 0;
            do {
              k = FUN_0055a2ba(file);
              if (((byte)k & 0xc0) == 0xc0) {
                n = k & 0x3f;
                uVar1 = FUN_0055a2ba(file);
                uVar2 = FUN_004c81b0(uVar1,8);
                if (n != 0) {
                  puVar8 = (undefined4 *)(iVar3 + j * 2);
                  for (uVar5 = n >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar8 = CONCAT22(uVar2,uVar2);
                    puVar8 = puVar8 + 1;
                  }
                  j = j + n;
                  for (k = (uint)((k & 1) != 0); k != 0; k = k - 1) {
                    *(undefined2 *)puVar8 = uVar2;
                    puVar8 = (undefined4 *)((int)puVar8 + 2);
                  }
                }
              }
              else {
                uVar2 = FUN_004c81b0(k & 0xff,8);
                *(undefined2 *)(iVar3 + j * 2) = uVar2;
                j = j + 1;
              }
            } while (j < local_384);
            iVar3 = iVar3 + local_394;
            i = i + -1;
            uVar4 = local_38c;
          } while (i != 0);
        }
        FUN_004c4a20(uVar4,iVar3);
      }
      else if (DAT_007409cc == 2) {
        iVar3 = FUN_004c48f0(uVar4,&local_394);
        if (0 < i) {
          do {
            j = 0;
            do {
              k = FUN_0055a2ba(file);
              if (((byte)k & 0xc0) == 0xc0) {
                k = k & 0x3f;
                uVar1 = FUN_0055a2ba(file_2);
                uVar4 = FUN_004c81b0(uVar1,8);
                file = file_2;
                local_390 = uVar4;
                if (k != 0) {
                  puVar6 = (undefined2 *)(iVar3 + j * 3);
                  local_390._2_1_ = (undefined1)((uint)uVar4 >> 0x10);
                  j = j + k;
                  *puVar6 = (short)uVar4;
                  *(undefined1 *)(puVar6 + 1) = local_390._2_1_;
                  puVar7 = (undefined1 *)((int)puVar6 + 3);
                  for (m = k * 3 + -3; m != 0; m = m + -1) {
                    *puVar7 = *(undefined1 *)puVar6;
                    puVar6 = (undefined2 *)((int)puVar6 + 1);
                    puVar7 = puVar7 + 1;
                  }
                }
              }
              else {
                uVar4 = FUN_004c81b0(k & 0xff,8);
                local_390._0_2_ = (undefined2)uVar4;
                puVar6 = (undefined2 *)(iVar3 + j * 3);
                local_390._2_1_ = (undefined1)((uint)uVar4 >> 0x10);
                j = j + 1;
                *puVar6 = (undefined2)local_390;
                *(undefined1 *)(puVar6 + 1) = local_390._2_1_;
                local_390 = uVar4;
              }
            } while (j < local_384);
            iVar3 = iVar3 + local_394;
            i = i + -1;
            uVar4 = local_38c;
          } while (i != 0);
        }
        FUN_004c4a20(uVar4,iVar3);
      }
    }
    FUN_004c3fa0(s__s__d____closing_005b5e0c,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x270,*param_2,
                 *param_3);
    FUN_004c6430(file);
    return uVar4;
  }
  FUN_004c6430(file);
  return 0;
}


/* ==== 004cb630 FUN_004cb630 ==== */

undefined4 FUN_004cb630(char *str2,int *param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  FILE *file;
  int iVar3;
  uint m;
  undefined4 uVar4;
  uint uVar5;
  int i;
  int n;
  uint uVar6;
  int k;
  undefined2 *puVar7;
  char **ppcVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  char *apcStack_3d0 [2];
  int iStack_3c8;
  undefined4 uStack_3c4;
  int j;
  int local_394;
  undefined2 local_390;
  undefined1 uStack_38e;
  undefined4 local_38c;
  char local_380;
  char local_37f;
  short local_37c;
  short local_37a;
  short local_378;
  short local_376;
  short local_33e;
  
  ppcVar8 = apcStack_3d0;
  for (i = 8; i != 0; i = i + -1) {
    *ppcVar8 = (char *)*param_5;
    param_5 = param_5 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  FUN_004c8690();
  file = (FILE *)FUN_004c62c0(str2);
  if (file != (FILE *)0x0) {
    if (DAT_007409cc != 0) {
      FUN_004cac30();
    }
    FUN_004c6160();
    uStack_3c4 = 1;
    apcStack_3d0[1] = &local_380;
    iStack_3c8 = 0x80;
    apcStack_3d0[0] = (char *)0x4cb6af;
    FUN_00558b35();
    apcStack_3d0[0] = (char *)0x2b1;
    FUN_004c3fa0(s__s__d____header_read__005b5e5c,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc);
    if ((file->_flag & 0x20) == 0) {
      FUN_004c3fa0();
      if ((local_380 == '\n') && (local_37f == '\x05')) {
        *param_2 = ((int)local_378 - (int)local_37c) + 1;
        *param_3 = ((int)local_376 - (int)local_37a) + 1;
        FUN_004c3fa0();
        iStack_3c8 = *param_3;
        apcStack_3d0[1] = (char *)*param_2;
        uStack_3c4 = param_4;
        apcStack_3d0[0] = (char *)0x4cb75f;
        local_38c = FUN_004c4b90();
        apcStack_3d0[0] = s_creation_succesfull_005b5e20;
        FUN_004c3fa0();
        i = (int)local_33e;
        j = *param_3;
        FUN_004c4a60(local_38c);
        if (DAT_007409cc == 0) {
          iVar3 = FUN_004c48f0();
          if (0 < j) {
            do {
              k = 0;
              do {
                m = FUN_0055a2ba();
                if (((byte)m & 0xc0) == 0xc0) {
                  uVar1 = FUN_0055a2ba();
                  puVar10 = (undefined4 *)(iVar3 + k);
                  for (uVar5 = (m & 0x3f) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar10 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
                    puVar10 = puVar10 + 1;
                  }
                  k = k + (m & 0x3f);
                  for (m = m & 3; m != 0; m = m - 1) {
                    *(undefined1 *)puVar10 = uVar1;
                    puVar10 = (undefined4 *)((int)puVar10 + 1);
                  }
                }
                else {
                  *(byte *)(iVar3 + k) = (byte)m;
                  k = k + 1;
                }
              } while (k < i);
              iVar3 = iVar3 + local_394;
              j = j + -1;
            } while (j != 0);
          }
          FUN_004c4a20();
        }
        else if (DAT_007409cc == 1) {
          iVar3 = FUN_004c48f0();
          if (0 < j) {
            do {
              k = 0;
              do {
                m = FUN_0055a2ba();
                if (((byte)m & 0xc0) == 0xc0) {
                  uVar5 = m & 0x3f;
                  FUN_0055a2ba();
                  uVar2 = FUN_004c81b0();
                  if (uVar5 != 0) {
                    puVar10 = (undefined4 *)(iVar3 + k * 2);
                    for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *puVar10 = CONCAT22(uVar2,uVar2);
                      puVar10 = puVar10 + 1;
                    }
                    k = k + uVar5;
                    for (m = (uint)((m & 1) != 0); m != 0; m = m - 1) {
                      *(undefined2 *)puVar10 = uVar2;
                      puVar10 = (undefined4 *)((int)puVar10 + 2);
                    }
                  }
                }
                else {
                  uVar2 = FUN_004c81b0();
                  *(undefined2 *)(iVar3 + k * 2) = uVar2;
                  k = k + 1;
                }
              } while (k < i);
              iVar3 = iVar3 + local_394;
              j = j + -1;
            } while (j != 0);
          }
          FUN_004c4a20();
        }
        else if (DAT_007409cc == 2) {
          iVar3 = FUN_004c48f0();
          if (0 < j) {
            do {
              k = 0;
              do {
                m = FUN_0055a2ba();
                if (((byte)m & 0xc0) == 0xc0) {
                  m = m & 0x3f;
                  FUN_0055a2ba();
                  uVar4 = FUN_004c81b0();
                  if (m != 0) {
                    puVar7 = (undefined2 *)(iVar3 + k * 3);
                    uStack_38e = (undefined1)((uint)uVar4 >> 0x10);
                    k = k + m;
                    *puVar7 = (short)uVar4;
                    *(undefined1 *)(puVar7 + 1) = uStack_38e;
                    puVar9 = (undefined1 *)((int)puVar7 + 3);
                    for (n = m * 3 + -3; n != 0; n = n + -1) {
                      *puVar9 = *(undefined1 *)puVar7;
                      puVar7 = (undefined2 *)((int)puVar7 + 1);
                      puVar9 = puVar9 + 1;
                    }
                  }
                }
                else {
                  uVar4 = FUN_004c81b0();
                  local_390 = (undefined2)uVar4;
                  puVar7 = (undefined2 *)(iVar3 + k * 3);
                  uStack_38e = (undefined1)((uint)uVar4 >> 0x10);
                  k = k + 1;
                  *puVar7 = local_390;
                  *(undefined1 *)(puVar7 + 1) = uStack_38e;
                }
              } while (k < i);
              iVar3 = iVar3 + local_394;
              j = j + -1;
            } while (j != 0);
          }
          FUN_004c4a20();
        }
      }
      FUN_004c3fa0();
      uStack_3c4 = 0x4cba2d;
      FUN_004c6430(file);
      FUN_004c8540();
      return local_38c;
    }
    FUN_004c6430(file);
    return 0;
  }
  return 0;
}


/* ==== 004cba50 FUN_004cba50 ==== */

undefined1 FUN_004cba50(int param_1,int param_2,int param_3,int param_4)

{
  return *(undefined1 *)(param_3 * param_4 + param_1 + param_2);
}


/* ==== 004cba70 FUN_004cba70 ==== */

int FUN_004cba70(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int i;
  
  i = 0;
  if (param_2 < param_5) {
    iVar1 = FUN_004cba50(param_1,param_2 + 1,param_3,param_5);
    iVar2 = FUN_004cba50(param_1,param_2,param_3,param_5);
    if (iVar2 == iVar1) {
      do {
        if ((param_4 <= i) || (0x3e < i)) break;
        i = i + 1;
        iVar1 = FUN_004cba50(param_1,i + param_2 + 1,param_3,param_5);
        iVar2 = FUN_004cba50(param_1,i + param_2,param_3,param_5);
      } while (iVar2 == iVar1);
      if (i != 0) {
        return i;
      }
    }
  }
  return 1;
}


/* ==== 004cbb10 FUN_004cbb10 ==== */

uint FUN_004cbb10(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint i;
  undefined4 uStack_4;
  
  i = 0;
  FUN_004c3fa0(s__s__d__005b5e9c,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x3de);
  FUN_004c3fa0(s_y____d___xsize____d___pitch____d_005b5e78,param_3,param_4,param_5);
  do {
    bVar1 = *(byte *)(param_3 * param_5 + param_2 + i);
    uStack_4._0_3_ = CONCAT12(bVar1,(undefined2)uStack_4);
    if ((bVar1 & 0xc0) == 0xc0) {
      iVar2 = FUN_004cba70(param_2,i,param_3,param_4 - i,param_4);
      uStack_4 = CONCAT13((char)iVar2,(undefined3)uStack_4) | 0xc0000000;
      FUN_00558c1d((int)&uStack_4 + 3,1,1,param_1);
      FUN_00558c1d((int)&uStack_4 + 2,1,1,param_1);
      i = i + iVar2;
    }
    else {
      FUN_00558c1d((int)&uStack_4 + 2,1,1,param_1);
      i = i + 1;
    }
  } while (i < param_4);
  FUN_004c3fa0(s__s__d__005b5e9c,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x3ee);
  return i;
}


/* ==== 004cbbf0 FUN_004cbbf0 ==== */

undefined4
FUN_004cbbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int i;
  
  FUN_004c3fa0(s__s__d__005b5e9c,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x3f7);
  i = 0;
  if (0 < param_4) {
    do {
      FUN_004c3fa0(s__s__d__005b5e9c,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x3f9);
      FUN_004cbb10(param_1,param_2,i,param_3,param_5);
      i = i + 1;
    } while (i < param_4);
  }
  FUN_004c3fa0(s__s__d__005b5e9c,s_D__Work_dxdraw_Rcpcx_cpp_005b5ddc,0x3fc);
  return 0;
}


