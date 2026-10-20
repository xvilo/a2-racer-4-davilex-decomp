/* A2Racer4.exe — motor/main.cpp: 7 functions, split from decompiled.c by tools/split_sources.py */

/* ==== 00401000 read_ini_int ==== */

int __cdecl read_ini_int(char *section,char *key)

{
  UINT UVar1;
  
  UVar1 = GetPrivateProfileIntA(section,key,0,(LPCSTR)&ini_path);
  return UVar1;
}


/* ==== 00401020 set_ini_file ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl set_ini_file(char *name)

{
  char cVar1;
  uint i_val;
  int j;
  uint k;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _getcwd((char *)&ini_path,0x118);
  i_val = 0xffffffff;
  pcVar2 = (char *)&ini_path;
  do {
    if (i_val == 0) break;
    i_val = i_val - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((&DAT_00407e0e)[~i_val] != '\\') {
    i_val = 0xffffffff;
    pcVar2 = s___00407030;
    do {
      pcVar4 = pcVar2;
      if (i_val == 0) break;
      i_val = i_val - 1;
      pcVar4 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar4;
    } while (cVar1 != '\0');
    i_val = ~i_val;
    j = -1;
    pcVar2 = (char *)&ini_path;
    do {
      pcVar3 = pcVar2;
      if (j == 0) break;
      j = j + -1;
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
    pcVar2 = pcVar4 + -i_val;
    pcVar4 = pcVar3 + -1;
    for (k = i_val >> 2; k != 0; k = k - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (i_val = i_val & 3; i_val != 0; i_val = i_val - 1) {
      *pcVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  i_val = 0xffffffff;
  do {
    pcVar2 = name;
    if (i_val == 0) break;
    i_val = i_val - 1;
    pcVar2 = name + 1;
    cVar1 = *name;
    name = pcVar2;
  } while (cVar1 != '\0');
  i_val = ~i_val;
  j = -1;
  pcVar4 = (char *)&ini_path;
  do {
    pcVar3 = pcVar4;
    if (j == 0) break;
    j = j + -1;
    pcVar3 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + -i_val;
  pcVar4 = pcVar3 + -1;
  for (k = i_val >> 2; k != 0; k = k - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (i_val = i_val & 3; i_val != 0; i_val = i_val - 1) {
    *pcVar4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  _DAT_00407f3c = 1;
  return;
}


/* ==== 004010c0 read_exit_code ==== */

int __cdecl read_exit_code(void)

{
  int ini_int;
  CHAR local_40 [64];
  
  set_ini_file(s_Menu_ini_004070b4);
  ini_int = read_ini_int(s_General_004070a0,s_ExitCode_004070a8);
  if (ini_int == 0) {
    sprintf(s__s___d__No_value_specified_for_m_0040703c,s_C__Work_Motor_main_cpp_00407088,0x67,
            s_Menu_ini_004070b4,s_General_004070a0,s_ExitCode_004070a8);
    MessageBoxA((HWND)0x0,local_40,s_MOTOR_00407034,0);
  }
  return ini_int;
}


/* ==== 00401130 run_program ==== */

int __cdecl run_program(char *program,char *argument)

{
  char **ppcVar1;
  int i_val;
  char *local_50 [20];
  
  ppcVar1 = local_50;
  for (i_val = 0x14; i_val != 0; i_val = i_val + -1) {
    *ppcVar1 = (char *)0x0;
    ppcVar1 = ppcVar1 + 1;
  }
  local_50[0] = program;
  local_50[1] = argument;
  i_val = _spawnv(0,program,local_50);
  if (i_val == -1) {
    switch(errno) {
    case 2:
      MessageBoxA((HWND)0x0,s_File_or_path_is_not_found_00407140,s_MOTOR_00407034,0);
      i_val = read_exit_code();
      return i_val;
    case 7:
      MessageBoxA((HWND)0x0,s_Argument_list_exceeds_1024_bytes_00407178,s_MOTOR_00407034,0);
      i_val = read_exit_code();
      return i_val;
    case 8:
      MessageBoxA((HWND)0x0,s_Specified_file_is_not_executable_004070f8,s_MOTOR_00407034,0);
      i_val = read_exit_code();
      return i_val;
    case 0xc:
      MessageBoxA((HWND)0x0,s_Not_enough_memory_is_available_t_004070c0,s_MOTOR_00407034,0);
      break;
    case 0x16:
      MessageBoxA((HWND)0x0,s_mode_argument_is_invalid_0040715c,s_MOTOR_00407034,0);
      i_val = read_exit_code();
      return i_val;
    }
  }
  i_val = read_exit_code();
  return i_val;
}


/* ==== 00401250 WinMain ==== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int WinMain(HINSTANCE instance,HINSTANCE previous,char *command_line,int show)

{
  char cVar1;
  ATOM AVar2;
  int iVar3;
  int nWidth;
  BOOL BVar4;
  uint i_val;
  uint j;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  HWND hWndParent;
  HMENU hMenu;
  LPVOID lpParam;
  WNDCLASSEXA wndclassex;
  tagMSG msg;
  char local_64 [100];
  
  bVar5 = false;
  _instance = instance;
  if (previous == (HINSTANCE)0x0) {
    wndclassex.cbSize = 0x30;
    wndclassex.lpszClassName = s_MOTOR_00407034;
    wndclassex.hInstance = instance;
    wndclassex.lpfnWndProc = WndProc;
    wndclassex.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    wndclassex.hIcon = LoadIconA(instance,(LPCSTR)0x7f00);
    wndclassex.hIconSm = LoadIconA(instance,(LPCSTR)0x7f00);
    wndclassex.lpszMenuName = (LPCSTR)0x0;
    wndclassex.hbrBackground = GetStockObject(4);
    wndclassex.style = 0;
    wndclassex.cbClsExtra = 0;
    wndclassex.cbWndExtra = 0;
    AVar2 = RegisterClassExA(&wndclassex);
    if (AVar2 == 0) {
      MessageBoxA((HWND)0x0,s_WinMain____RegisterClass___faile_004071cc,s_Err___7_CCWINMAP_004071f0,
                  0x30);
    }
    else {
      lpParam = (LPVOID)0x0;
      hMenu = (HMENU)0x0;
      hWndParent = (HWND)0x0;
      iVar3 = GetSystemMetrics(1);
      nWidth = GetSystemMetrics(0);
      main_window = CreateWindowExA(0x40000,s_MOTOR_00407034,&DAT_00407f40,0x80000000,0,0,nWidth,
                                    iVar3,hWndParent,hMenu,instance,lpParam);
      if (main_window != (HWND)0x0) {
        ShowWindow(main_window,show);
        _strncpy(local_64,s__FirstTime_004071c0,99);
        do {
          while( true ) {
            do {
              while( true ) {
                BVar4 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
                if (BVar4 == 0) break;
                if (msg.message == 0x12) {
                  return msg.wParam;
                }
                TranslateMessage(&msg);
                DispatchMessageA(&msg);
              }
            } while (bVar5);
            iVar3 = run_program(s_menu_exe_004071b4,local_64);
            if (iVar3 != 0x28) break;
            run_program(s_spel_dat_004071a8,&DAT_00407f40);
            _strncpy(local_64,s__Default_0040719c,99);
          }
          i_val = 0xffffffff;
          pcVar6 = &DAT_00407f40;
          do {
            pcVar7 = pcVar6;
            if (i_val == 0) break;
            i_val = i_val - 1;
            pcVar7 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          i_val = ~i_val;
          pcVar6 = pcVar7 + -i_val;
          pcVar7 = local_64;
          for (j = i_val >> 2; j != 0; j = j - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (i_val = i_val & 3; i_val != 0; i_val = i_val - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          }
          SendMessageA(main_window,0x10,0,0);
          bVar5 = true;
        } while( true );
      }
    }
  }
  return 0;
}


/* ==== 00401440 WndProc ==== */

LRESULT WndProc(HWND window,UINT message,WPARAM wparam,LPARAM lparam)

{
  LRESULT LVar1;
  tagPAINTSTRUCT local_40;
  
  if (message < 0x10) {
    if (message == 0xf) {
      BeginPaint(window,&local_40);
      EndPaint(window,&local_40);
      return 0;
    }
    if (message == 1) {
      return 0;
    }
    if (message == 2) {
      PostQuitMessage(0);
      return 0;
    }
  }
  else {
    if (message == 0x10) {
      DestroyWindow(window);
      return 0;
    }
    if (message == 0x200) {
      SetCursor((HCURSOR)0x0);
      return 0;
    }
  }
  LVar1 = DefWindowProcA(window,message,wparam,lparam);
  return LVar1;
}


/* ==== 004014e0 sprintf ==== */

int __cdecl sprintf(char *buffer,char *format,...)

{
  int _output_result;
  FILE file;
  
  file._base = buffer;
  file._ptr = buffer;
  file._flag = 0x42;
  file._cnt = 0x7fffffff;
  _output_result = _output(&file,(byte *)format,(undefined4 *)&stack0x0000000c);
  file._cnt = file._cnt + -1;
  if (file._cnt < 0) {
    _flsbuf(0,&file);
  }
  else {
    *file._ptr = '\0';
  }
  return _output_result;
}


