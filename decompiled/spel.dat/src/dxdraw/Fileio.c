/* spel.dat — dxdraw/Fileio.cpp: 9 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 004c5e40 FUN_004c5e40 ==== */

int FUN_004c5e40(uint param_1)

{
  SHORT SVar1;
  
  if ((param_1 & 0x100) == 0) {
    SVar1 = GetAsyncKeyState(0x10);
    if (-1 < SVar1) {
      SVar1 = GetAsyncKeyState(param_1);
      return (-1 < SVar1) - 1;
    }
  }
  else {
    SVar1 = GetAsyncKeyState(0x10);
    if (SVar1 < 0) {
      SVar1 = GetAsyncKeyState(param_1);
      return (-1 < SVar1) - 1;
    }
  }
  return 0;
}


/* ==== 004c5e90 FUN_004c5e90 ==== */

undefined4 FUN_004c5e90(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint k;
  uint m;
  int i;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FILE *pFVar7;
  int j;
  undefined4 local_18;
  char local_14 [20];
  
  i = 0;
  if (DAT_00740914 != 0) {
    FUN_004c3fa0(s__s__d____warning___double_call_t_005b4970,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
                 0x30);
    return 0;
  }
  DAT_00740900 = (FILE *)FUN_005589a5(param_1,s_rb_005b496c);
  if (DAT_00740900 == (FILE *)0x0) {
    uVar5 = 0x37;
  }
  else {
    FUN_00558b35();
    if ((short)param_1 < 1) {
      FUN_004c4150(s__s__d____could_not_open_<_s>_005b494c,s_D__Work_dxdraw_Fileio_cpp_005b49b4,0x42
                   ,param_1);
      return 0x3e9;
    }
    DAT_00740908 = (int)(short)param_1;
    DAT_0074090c = LocalAlloc(0x40,DAT_00740908 * 0x1c);
    if (DAT_0074090c == (HLOCAL)0x0) {
      FUN_004c4150(s__s__d____error_not_enough_memory_005b4910,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
                   0x4e);
      return 2000;
    }
    j = 0;
    if (0 < DAT_00740908) {
      do {
        uVar6 = 1;
        pcVar2 = local_14;
        uVar5 = 0x14;
        pFVar7 = DAT_00740900;
        FUN_00558b35();
        FUN_00558b35(&local_18,&local_18,1,4,DAT_00740900,pcVar2,uVar5,uVar6,pFVar7);
        k = 0xffffffff;
        pcVar2 = local_14;
        do {
          pcVar4 = pcVar2;
          if (k == 0) break;
          k = k - 1;
          pcVar4 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar4;
        } while (cVar1 != '\0');
        k = ~k;
        pcVar2 = pcVar4 + -k;
        pcVar4 = (char *)((int)DAT_0074090c + i);
        for (m = k >> 2; m != 0; m = m - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (k = k & 3; k != 0; k = k - 1) {
          *pcVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar4 + 1;
        }
        *(undefined4 *)((int)DAT_0074090c + i + 0x14) = local_18;
        if ((DAT_00740900->_flag & 0x20) != 0) {
          FUN_004c4150(s__s__d____error_while_reading_fil_005b48e4,
                       s_D__Work_dxdraw_Fileio_cpp_005b49b4,0x5d);
          return 0x3e9;
        }
        j = j + 1;
        i = i + 0x1c;
      } while (j < DAT_00740908);
    }
    FUN_005588fd(DAT_00740900);
    DAT_00740904 = FUN_005589a5(param_2,s_rb_005b496c);
    if (DAT_00740904 != 0) {
      uVar5 = FUN_005692e1(DAT_00740904);
      DAT_007408fc = FUN_00569269(uVar5);
      FUN_004c3fa0(&DAT_005b48dc,param_2);
      FUN_004c3fa0(s______s______s_005b48bc,0x14,0x14,s_Bestand_005b48cc,10,10,s_Grootte_005b48d4);
      FUN_004c3fa0(s______s_005b4880,0x21,0x21,s__________________________________005b4888);
      i = 0;
      if (DAT_00740908 != 1 && -1 < DAT_00740908 + -1) {
        iVar3 = 0;
        do {
          *(int *)(iVar3 + 0x18 + (int)DAT_0074090c) =
               *(int *)(iVar3 + 0x30 + (int)DAT_0074090c) -
               *(int *)(iVar3 + 0x14 + (int)DAT_0074090c);
          FUN_004c3fa0(s______s____d_005b4870,0x14,0x14,iVar3 + (int)DAT_0074090c,10,
                       *(undefined4 *)(iVar3 + 0x18 + (int)DAT_0074090c));
          i = i + 1;
          iVar3 = iVar3 + 0x1c;
        } while (i < DAT_00740908 + -1);
      }
      i = i * 0x1c;
      *(int *)(i + 0x18 + (int)DAT_0074090c) = DAT_007408fc - *(int *)(i + 0x14 + (int)DAT_0074090c)
      ;
      FUN_004c3fa0(s______s____d_005b4870,0x14,0x14,(HLOCAL)(i + (int)DAT_0074090c),10,
                   *(undefined4 *)(i + (int)DAT_0074090c + 0x18));
      FUN_004c3fa0(s______s_005b4880,0x21,0x21,s__________________________________005b4888);
      DAT_00740914 = 1;
      return 0;
    }
    uVar5 = 0x67;
    DAT_00740904 = 0;
    param_1 = param_2;
  }
  FUN_004c4150(s__s__d____could_not_open_<_s>_005b494c,s_D__Work_dxdraw_Fileio_cpp_005b49b4,uVar5,
               param_1);
  return 1000;
}


/* ==== 004c6160 FUN_004c6160 ==== */

undefined4 FUN_004c6160(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_004c4150(s__s__d____null_ptr_assignment___005b4a4c,s_D__Work_dxdraw_Fileio_cpp_005b49b4,0xaf
                );
  }
  if (DAT_00740914 == 0) {
    uVar1 = FUN_0055a06b(param_1,param_2,param_3);
    return uVar1;
  }
  iVar2 = FUN_005692e1(DAT_00740904);
  iVar3 = FUN_005692e1(param_1);
  if (iVar3 != iVar2) {
    uVar1 = FUN_0055a06b(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar1 = FUN_0055a06b(DAT_00740904,DAT_00740910 + param_2,0);
      return uVar1;
    }
    if (param_3 != 2) {
      FUN_004c4150(s__s__d____illegal_fseek_cmd__005b4a2c,s_D__Work_dxdraw_Fileio_cpp_005b49b4,0xd4)
      ;
      return 0x3e9;
    }
    if (DAT_007408fc < DAT_007408fc + param_2) {
      FUN_004c4150(s__s__d____fseeking_past_end_file__005b4a00,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
                   0xcd,DAT_00740910,DAT_007408fc,param_2);
      return 0x3e9;
    }
    uVar1 = FUN_0055a06b(DAT_00740904,DAT_007408fc + param_2,0);
    return uVar1;
  }
  param_2 = DAT_00740910 + param_2;
  if ((param_2 <= DAT_007408fc) && (DAT_00740910 <= param_2)) {
    uVar1 = FUN_0055a06b(DAT_00740904,param_2,0);
    return uVar1;
  }
  FUN_004c4150(s__s__d____fseeking_past_end_or_be_005b49d0,s_D__Work_dxdraw_Fileio_cpp_005b49b4,0xc5
              );
  return 0x3e9;
}


/* ==== 004c62c0 FUN_004c62c0 ==== */

int FUN_004c62c0(char *str2)

{
  int __strcmpi_result;
  int i;
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_00740914 == 0) || (DAT_00740918 == 1)) {
    i = FUN_005589a5(str2,s_rb_005b496c);
    if (i == 0) {
      FUN_004c3fa0(s__s__d____file_open_failed___s__005b4acc,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
                   0x117,str2);
      return 0;
    }
    uVar2 = 0x11c;
  }
  else {
    i = 0;
    if (0 < DAT_00740908) {
      iVar1 = 0;
      do {
        __strcmpi_result = __strcmpi((char *)(iVar1 + DAT_0074090c),str2);
        if (__strcmpi_result == 0) {
          DAT_00740910 = *(int *)(DAT_0074090c + 0x14 + i * 0x1c);
          DAT_007408fc = *(int *)(DAT_0074090c + i * 0x1c + 0x18) + DAT_00740910;
          break;
        }
        i = i + 1;
        iVar1 = iVar1 + 0x1c;
      } while (i < DAT_00740908);
    }
    iVar1 = (int)(short)DAT_00740908;
    if (i != iVar1) {
      uVar2 = FUN_0055a06b(DAT_00740904,DAT_00740910,0);
      uVar2 = FUN_005692e1(DAT_00740904,uVar2);
      FUN_004c3fa0(s__s__d____file_open_succeeded___s_005b4a94,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
                   0x156,str2,i,iVar1,DAT_00740910,uVar2);
      return DAT_00740904;
    }
    i = FUN_005589a5(str2,s_rb_005b496c);
    if (i == 0) {
      FUN_004c3fa0(s__s__d____file_open_failed___s__005b4acc,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
                   0x14b,str2);
      return 0;
    }
    uVar2 = 0x150;
  }
  FUN_004c3fa0(s__s__d____file_open_succeeded___s_005b4a6c,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
               uVar2,str2);
  return i;
}


/* ==== 004c6430 FUN_004c6430 ==== */

void FUN_004c6430(FILE *file)

{
  int iVar1;
  int iVar2;
  
  if (file == (FILE *)0x0) {
    FUN_004c4150(s__s__d____null_ptr_assignment___005b4a4c,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
                 0x166);
    return;
  }
  if (DAT_00740914 == 0) {
    FUN_004c3fa0(s__s__d____file_close_005b4b1c,s_D__Work_dxdraw_Fileio_cpp_005b49b4,0x16c);
    FUN_005588fd(file);
    return;
  }
  iVar1 = FUN_005692e1(DAT_00740904);
  iVar2 = FUN_005692e1(file);
  if (iVar2 == iVar1) {
    if (DAT_00740914 == 0) {
      FUN_004c4150(s__s__d____unopened_resource_file_a_005b4af0,s_D__Work_dxdraw_Fileio_cpp_005b49b4
                   ,0x173);
      return;
    }
  }
  else {
    FUN_005588fd(file);
  }
  return;
}


/* ==== 004c64d0 FUN_004c64d0 ==== */

undefined4 FUN_004c64d0(char *str2)

{
  int __strcmpi_result;
  FILE *file;
  int iVar1;
  int i;
  
  if ((DAT_00740914 == 0) || (DAT_00740918 == 1)) {
    file = (FILE *)FUN_005589a5(str2,s_rb_005b496c);
    if (file == (FILE *)0x0) {
      return 0;
    }
  }
  else {
    i = 0;
    if (0 < DAT_00740908) {
      iVar1 = 0;
      do {
        __strcmpi_result = __strcmpi((char *)(iVar1 + DAT_0074090c),str2);
        if (__strcmpi_result == 0) {
          return 1;
        }
        i = i + 1;
        iVar1 = iVar1 + 0x1c;
      } while (i < DAT_00740908);
    }
    file = (FILE *)FUN_005589a5(str2,s_rb_005b496c);
    if (file == (FILE *)0x0) {
      return 0;
    }
  }
  FUN_005588fd(file);
  return 1;
}


/* ==== 004c6560 FUN_004c6560 ==== */

void FUN_004c6560(void)

{
  HLOCAL pvVar1;
  
  if (DAT_00740914 != 0) {
    pvVar1 = LocalFree(DAT_0074090c);
    if (pvVar1 != (HLOCAL)0x0) {
      FUN_004c4150(s__s__d____failure_to_free_file_li_005b4b34,s_D__Work_dxdraw_Fileio_cpp_005b49b4,
                   0x1b9);
      return;
    }
    FUN_005588fd(DAT_00740904);
    DAT_00740914 = 0;
  }
  return;
}


/* ==== 004c65b0 FUN_004c65b0 ==== */

char * FUN_004c65b0(int param_1)

{
  if (param_1 < -0x7787ffcd) {
    if (param_1 == -0x7787ffce) {
      return s_this_function_is_not_valid_for_t_005b4d20;
    }
    if (param_1 < -0x7ff8fff1) {
      if (param_1 == -0x7ff8fff2) {
        return s_not_enough_memory_free_for_the_d_005b4ddc;
      }
      if (param_1 == -0x7fffbfff) {
        return s_this_function_is_not_supported_a_005b4e14;
      }
      if (param_1 == -0x7ffbfef0) {
        return s_object_doesn_t_support_aggregati_005b4e40;
      }
    }
    else {
      if (param_1 == -0x7ff8ffa9) {
        return s_invalid_parameters_passed_to_thi_005b4d60;
      }
      if (param_1 == -0x7787fff6) {
        return s_request_failed_because_resources_005b4d8c;
      }
    }
  }
  else {
    switch(param_1) {
    case -0x7787ffba:
      return s_caller_doesn_t_have_the_priority_005b4c94;
    case -0x7787ff9c:
      return s_specified_format_is_not_supporte_005b4cfc;
    case -0x7787ff88:
      return s_no_sound_driver_is_installed_ava_005b4cd4;
    case -0x7787ff56:
      return s_unitialized_error___call_the_ini_005b4c5c;
    }
  }
  return s_error_unidentified_005b4c48;
}


/* ==== 004c66c0 FUN_004c66c0 ==== */

undefined4 FUN_004c66c0(int param_1)

{
  if (DAT_0074094c == 0) {
    DAT_00740930 = LocalAlloc(0x40,param_1 * 0xd8);
    if (DAT_00740930 == (HLOCAL)0x0) {
      FUN_004c4150(s__s__d____not_enough_memory_to_re_005b4e64);
      return 2000;
    }
    DAT_00740944 = param_1;
    DAT_00740948 = 0;
    DAT_0074094c = 1;
  }
  return 0;
}


